task_0_event_11(var_0_bool, var_1_int, var_2_bool, var_3_bool, var_4_bool, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	var_23_bool = 0; // 0x1b PushV
	func_5605(var_23_bool); // 0x1c NEW_2
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
	func_5106(var_26_object); // 0x43 NEW_2
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
	func_5109(var_32_object); // 0x51 NEW_2
	
Label_83:
	return 2; // 0x53 Return
}


task_1_event_17(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	var_23_int = 0; var_24_int = 0; // 0x54 PushV
	var_25_object = Obj(); // 0x55 PushV
	var_25_object = var_22_bool; // 0x56 Mov
	func_4921(var_25_object); // 0x57 NEW_2
	var_34_int = 0; var_35_object = Obj(); // 0x59 PushV
	var_35_object = var_22_bool; // 0x5a Mov
	func_5004(var_34_int, var_35_object); // 0x5b NEW_2
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
	func_5014(var_75_object); // 0x69 NEW_2
	
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
	func_5657(var_28_object, var_29_object, var_30_bool); // 0x71 NEW_2
	if(var_27_bool == 0) goto Label_135; // 0x73 JumpB
	var_76_int = 0; var_77_object = Obj(); var_78_bool = 0; // 0x74 PushV
	var_77_object = var_22_object; // 0x75 Mov
	var_78_bool = var_24_bool; // 0x76 Mov
	func_5022(var_77_object, var_78_bool); // 0x77 NEW_2
	var_26_int = var_76_int; // 0x78 Mov
	var_107_int = 0; // 0x7a PushI
	var_108_bool = var_26_int > var_107_int; // 0x7b GT
	if(var_108_bool == 0) goto Label_135; // 0x7c JumpB
	var_109_int = 1; // 0x7d PushI
	var_110_bool = var_26_int > var_109_int; // 0x7e GT
	if(var_110_bool == 0) goto Label_131; // 0x7f JumpB
	func_251(var_26_int); // 0x81 NEW_2
	
Label_131:
	var_112_object = Obj(); // 0x83 PushV
	var_112_object = var_22_object; // 0x84 Mov
	func_5032(var_112_object); // 0x85 NEW_2
	
Label_135:
	return 2; // 0x87 Return
}


task_1_event_40(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	var_23_int = 0; var_24_int = 0; // 0x88 PushV
	var_25_int = 0; var_26_object = Obj(); // 0x89 PushV
	var_26_object = var_22_bool; // 0x8a Mov
	func_5116(var_25_int, var_26_object); // 0x8b NEW_2
	var_24_int = var_25_int; // 0x8c Mov
	var_67_int = 0; // 0x8e PushI
	var_68_bool = var_24_int > var_67_int; // 0x8f GT
	if(var_68_bool == 0) goto Label_155; // 0x90 JumpB
	var_69_int = 1; // 0x91 PushI
	var_70_bool = var_24_int > var_69_int; // 0x92 GT
	if(var_70_bool == 0) goto Label_151; // 0x93 JumpB
	func_251(var_24_int); // 0x95 NEW_2
	
Label_151:
	var_72_object = Obj(); // 0x97 PushV
	var_72_object = var_22_bool; // 0x98 Mov
	func_5132(var_72_object); // 0x99 NEW_2
	
Label_155:
	return 2; // 0x9b Return
}


task_1_event_42(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_string, var_6_object, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_object, var_21_object, var_22_string, var_23_bool)
{
	var_24_int = 0; var_25_int = 0; // 0x9c PushV
	var_26_bool = 0; var_27_object = Obj(); var_28_string = ""; // 0x9d PushV
	var_27_object = var_22_string; // 0x9e Mov
	var_28_string = var_23_bool; // 0x9f Mov
	func_4835(var_26_bool, var_27_object, var_28_string); // 0xa0 NEW_2
	if(var_26_bool == 0) goto Label_172; // 0xa2 JumpB
	func_251(var_25_int); // 0xa4 NEW_2
	var_59_object = Obj(); var_60_string = ""; // 0xa6 PushV
	var_59_object = var_22_string; // 0xa7 Mov
	var_60_string = var_23_bool; // 0xa8 Mov
	func_4867(var_59_object, var_60_string); // 0xa9 NEW_2
	goto Label_192; // 0xab Jump
	
Label_192:
	return 2; // 0xc0 Return
	
Label_172:
	var_208_int = 0; var_209_string = ""; var_210_object = Obj(); // 0xac PushV
	var_209_string = var_23_bool; // 0xad Mov
	var_210_object = var_22_string; // 0xae Mov
	func_5138(var_210_object); // 0xaf NEW_2
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
	func_5141(); // 0xbe NEW_2
}


task_1_event_26(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_string, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	var_23_bool = 0; var_24_string = ""; // 0xc2 PushV
	var_24_string = var_22_bool; // 0xc3 Mov
	func_4934(var_23_bool, var_24_string); // 0xc4 NEW_2
	if(var_23_bool == 0) goto Label_206; // 0xc6 JumpB
	func_251(var_22_bool); // 0xc8 NEW_2
	var_33_string = ""; // 0xca PushV
	var_33_string = var_22_bool; // 0xcb Mov
	func_4950(var_33_string); // 0xcc NEW_2
	
Label_206:
	return 0; // 0xce Return
}


task_1_event_1(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	var_23_bool = 0; var_24_object = Obj(); // 0xd0 PushV
	var_24_object = var_22_bool; // 0xd1 Mov
	func_4892(var_23_bool, var_24_object); // 0xd2 NEW_2
	if(var_23_bool == 0) goto Label_221; // 0xd4 JumpB
	func_251(var_22_bool); // 0xd6 NEW_2
	var_38_object = Obj(); // 0xd8 PushV
	var_38_object = var_22_bool; // 0xd9 Mov
	func_4915(var_38_object); // 0xda NEW_2
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
	func_5115(); // 0xf8 NEW_2
	return 0; // 0xfa Return
}


task_1_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	func_251(var_22_bool); // 0x10d NEW_2
	var_24_object = Obj(); // 0x10f PushV
	var_24_object = var_22_bool; // 0x110 Mov
	func_4829(); // 0x111 NEW_2
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
	func_5106(var_26_object); // 0x19c NEW_2
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
	func_5109(var_31_object); // 0x1aa NEW_2
	
Label_428:
	return 2; // 0x1ac Return
}


task_2_event_17(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	var_23_int = 0; var_24_int = 0; // 0x1ad PushV
	var_25_object = Obj(); // 0x1ae PushV
	var_25_object = var_22_bool; // 0x1af Mov
	func_4921(var_25_object); // 0x1b0 NEW_2
	var_34_int = 0; var_35_object = Obj(); // 0x1b2 PushV
	var_35_object = var_22_bool; // 0x1b3 Mov
	func_5004(var_34_int, var_35_object); // 0x1b4 NEW_2
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
	func_5014(var_74_object); // 0x1c2 NEW_2
	
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
	func_5657(var_28_object, var_29_object, var_30_bool); // 0x1ca NEW_2
	if(var_27_bool == 0) goto Label_480; // 0x1cc JumpB
	var_76_int = 0; var_77_object = Obj(); var_78_bool = 0; // 0x1cd PushV
	var_77_object = var_22_object; // 0x1ce Mov
	var_78_bool = var_24_bool; // 0x1cf Mov
	func_5022(var_77_object, var_78_bool); // 0x1d0 NEW_2
	var_26_int = var_76_int; // 0x1d1 Mov
	var_107_int = 0; // 0x1d3 PushI
	var_108_bool = var_26_int > var_107_int; // 0x1d4 GT
	if(var_108_bool == 0) goto Label_480; // 0x1d5 JumpB
	var_109_int = 1; // 0x1d6 PushI
	var_110_bool = var_26_int > var_109_int; // 0x1d7 GT
	if(var_110_bool == 0) goto Label_476; // 0x1d8 JumpB
	func_654(); // 0x1da NEW_2
	
Label_476:
	var_111_object = Obj(); // 0x1dc PushV
	var_111_object = var_22_object; // 0x1dd Mov
	func_5032(var_111_object); // 0x1de NEW_2
	
Label_480:
	return 2; // 0x1e0 Return
}


task_2_event_40(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	var_23_int = 0; var_24_int = 0; // 0x1e1 PushV
	var_25_int = 0; var_26_object = Obj(); // 0x1e2 PushV
	var_26_object = var_22_bool; // 0x1e3 Mov
	func_5116(var_25_int, var_26_object); // 0x1e4 NEW_2
	var_24_int = var_25_int; // 0x1e5 Mov
	var_67_int = 0; // 0x1e7 PushI
	var_68_bool = var_24_int > var_67_int; // 0x1e8 GT
	if(var_68_bool == 0) goto Label_500; // 0x1e9 JumpB
	var_69_int = 1; // 0x1ea PushI
	var_70_bool = var_24_int > var_69_int; // 0x1eb GT
	if(var_70_bool == 0) goto Label_496; // 0x1ec JumpB
	func_654(); // 0x1ee NEW_2
	
Label_496:
	var_71_object = Obj(); // 0x1f0 PushV
	var_71_object = var_22_bool; // 0x1f1 Mov
	func_5132(var_71_object); // 0x1f2 NEW_2
	
Label_500:
	return 2; // 0x1f4 Return
}


task_2_event_42(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_string, var_6_object, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_object, var_21_object, var_22_string, var_23_bool)
{
	var_24_int = 0; var_25_int = 0; // 0x1f5 PushV
	var_26_bool = 0; var_27_object = Obj(); var_28_string = ""; // 0x1f6 PushV
	var_27_object = var_22_string; // 0x1f7 Mov
	var_28_string = var_23_bool; // 0x1f8 Mov
	func_4835(var_26_bool, var_27_object, var_28_string); // 0x1f9 NEW_2
	if(var_26_bool == 0) goto Label_517; // 0x1fb JumpB
	func_654(); // 0x1fd NEW_2
	var_58_object = Obj(); var_59_string = ""; // 0x1ff PushV
	var_58_object = var_22_string; // 0x200 Mov
	var_59_string = var_23_bool; // 0x201 Mov
	func_4867(var_58_object, var_59_string); // 0x202 NEW_2
	goto Label_537; // 0x204 Jump
	
Label_537:
	return 2; // 0x219 Return
	
Label_517:
	var_207_int = 0; var_208_string = ""; var_209_object = Obj(); // 0x205 PushV
	var_208_string = var_23_bool; // 0x206 Mov
	var_209_object = var_22_string; // 0x207 Mov
	func_5138(var_209_object); // 0x208 NEW_2
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
	func_5141(); // 0x217 NEW_2
}


task_2_event_26(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_string, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	var_23_bool = 0; var_24_string = ""; // 0x21b PushV
	var_24_string = var_22_bool; // 0x21c Mov
	func_4934(var_23_bool, var_24_string); // 0x21d NEW_2
	if(var_23_bool == 0) goto Label_551; // 0x21f JumpB
	func_654(); // 0x221 NEW_2
	var_32_string = ""; // 0x223 PushV
	var_32_string = var_22_bool; // 0x224 Mov
	func_4950(var_32_string); // 0x225 NEW_2
	
Label_551:
	return 0; // 0x227 Return
}


task_2_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool)
{
	func_654(); // 0x229 NEW_2
	func_5115(); // 0x22c NEW_2
	return 0; // 0x22e Return
}


task_2_event_1(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	var_23_bool = 0; var_24_object = Obj(); // 0x230 PushV
	var_24_object = var_22_bool; // 0x231 Mov
	func_4892(var_23_bool, var_24_object); // 0x232 NEW_2
	if(var_23_bool == 0) goto Label_572; // 0x234 JumpB
	func_654(); // 0x236 NEW_2
	var_37_object = Obj(); // 0x238 PushV
	var_37_object = var_22_bool; // 0x239 Mov
	func_4915(var_37_object); // 0x23a NEW_2
	
Label_572:
	return 0; // 0x23c Return
}


task_3_event_0(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	var_23_int = 0; var_24_int = 0; // 0x2cb PushV
	var_25_int = 0; var_26_object = Obj(); // 0x2cc PushV
	var_26_object = var_22_bool; // 0x2cd Mov
	func_5106(var_26_object); // 0x2ce NEW_2
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
	func_5109(var_33_object); // 0x2dc NEW_2
	
Label_734:
	return 2; // 0x2de Return
}


task_3_event_17(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	var_23_int = 0; var_24_int = 0; // 0x2df PushV
	var_25_object = Obj(); // 0x2e0 PushV
	var_25_object = var_22_bool; // 0x2e1 Mov
	func_4921(var_25_object); // 0x2e2 NEW_2
	var_34_int = 0; var_35_object = Obj(); // 0x2e4 PushV
	var_35_object = var_22_bool; // 0x2e5 Mov
	func_5004(var_34_int, var_35_object); // 0x2e6 NEW_2
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
	func_5014(var_76_object); // 0x2f4 NEW_2
	
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
	func_5657(var_28_object, var_29_object, var_30_bool); // 0x2fc NEW_2
	if(var_27_bool == 0) goto Label_786; // 0x2fe JumpB
	var_76_int = 0; var_77_object = Obj(); var_78_bool = 0; // 0x2ff PushV
	var_77_object = var_22_object; // 0x300 Mov
	var_78_bool = var_24_bool; // 0x301 Mov
	func_5022(var_77_object, var_78_bool); // 0x302 NEW_2
	var_26_int = var_76_int; // 0x303 Mov
	var_107_int = 0; // 0x305 PushI
	var_108_bool = var_26_int > var_107_int; // 0x306 GT
	if(var_108_bool == 0) goto Label_786; // 0x307 JumpB
	var_109_int = 1; // 0x308 PushI
	var_110_bool = var_26_int > var_109_int; // 0x309 GT
	if(var_110_bool == 0) goto Label_782; // 0x30a JumpB
	func_858(); // 0x30c NEW_2
	
Label_782:
	var_113_object = Obj(); // 0x30e PushV
	var_113_object = var_22_object; // 0x30f Mov
	func_5032(var_113_object); // 0x310 NEW_2
	
Label_786:
	return 2; // 0x312 Return
}


task_3_event_40(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	var_23_int = 0; var_24_int = 0; // 0x313 PushV
	var_25_int = 0; var_26_object = Obj(); // 0x314 PushV
	var_26_object = var_22_bool; // 0x315 Mov
	func_5116(var_25_int, var_26_object); // 0x316 NEW_2
	var_24_int = var_25_int; // 0x317 Mov
	var_67_int = 0; // 0x319 PushI
	var_68_bool = var_24_int > var_67_int; // 0x31a GT
	if(var_68_bool == 0) goto Label_806; // 0x31b JumpB
	var_69_int = 1; // 0x31c PushI
	var_70_bool = var_24_int > var_69_int; // 0x31d GT
	if(var_70_bool == 0) goto Label_802; // 0x31e JumpB
	func_858(); // 0x320 NEW_2
	
Label_802:
	var_73_object = Obj(); // 0x322 PushV
	var_73_object = var_22_bool; // 0x323 Mov
	func_5132(var_73_object); // 0x324 NEW_2
	
Label_806:
	return 2; // 0x326 Return
}


task_3_event_42(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_string, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_object, var_21_object, var_22_string, var_23_bool)
{
	var_24_int = 0; var_25_int = 0; // 0x327 PushV
	var_26_bool = 0; var_27_object = Obj(); var_28_string = ""; // 0x328 PushV
	var_27_object = var_22_string; // 0x329 Mov
	var_28_string = var_23_bool; // 0x32a Mov
	func_4835(var_26_bool, var_27_object, var_28_string); // 0x32b NEW_2
	if(var_26_bool == 0) goto Label_823; // 0x32d JumpB
	func_858(); // 0x32f NEW_2
	var_60_object = Obj(); var_61_string = ""; // 0x331 PushV
	var_60_object = var_22_string; // 0x332 Mov
	var_61_string = var_23_bool; // 0x333 Mov
	func_4867(var_60_object, var_61_string); // 0x334 NEW_2
	goto Label_843; // 0x336 Jump
	
Label_843:
	return 2; // 0x34b Return
	
Label_823:
	var_209_int = 0; var_210_string = ""; var_211_object = Obj(); // 0x337 PushV
	var_210_string = var_23_bool; // 0x338 Mov
	var_211_object = var_22_string; // 0x339 Mov
	func_5138(var_211_object); // 0x33a NEW_2
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
	func_5141(); // 0x349 NEW_2
}


task_3_event_26(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_string, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	var_23_bool = 0; var_24_string = ""; // 0x34d PushV
	var_24_string = var_22_bool; // 0x34e Mov
	func_4934(var_23_bool, var_24_string); // 0x34f NEW_2
	if(var_23_bool == 0) goto Label_857; // 0x351 JumpB
	func_858(); // 0x353 NEW_2
	var_34_string = ""; // 0x355 PushV
	var_34_string = var_22_bool; // 0x356 Mov
	func_4950(var_34_string); // 0x357 NEW_2
	
Label_857:
	return 0; // 0x359 Return
}


task_3_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	func_858(); // 0x367 NEW_2
	var_25_object = Obj(); // 0x369 PushV
	var_25_object = var_22_bool; // 0x36a Mov
	func_4829(); // 0x36b NEW_2
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
	func_4481(var_29_bool, var_30_object); // 0x375 NEW_2
	var_63_bool = var_29_bool == 0; // 0x377 Not
	if(var_63_bool == 0) goto Label_893; // 0x378 JumpB
	func_858(); // 0x37a NEW_2
	return 4; // 0x37c Return
	
Label_893:
	GetDirection(var_25_cvector); // 0x37d Func
	var_66_cvector = CVector(0,0,0); var_67_object = Obj(); // 0x37f PushV
	var_67_object = var_0_bool; // 0x380 MovT
	func_4408(var_67_object); // 0x381 NEW_2
	var_26_cvector = var_66_cvector; // 0x382 Mov
	var_72_float = 0; var_73_cvector = CVector(0,0,0); var_74_cvector = CVector(0,0,0); // 0x384 PushV
	var_73_cvector = var_25_cvector; // 0x385 Mov
	var_74_cvector = var_26_cvector; // 0x386 Mov
	func_4788(var_72_float, var_73_cvector, var_74_cvector); // 0x387 NEW_2
	var_96_float = 0.5; // 0x389 PushF
	var_97_bool = var_72_float < var_96_float; // 0x38a LT
	if(var_97_bool == 0) goto Label_912; // 0x38b JumpB
	var_98_object = Obj(); // 0x38c PushV
	var_98_object = var_0_bool; // 0x38d MovT
	func_4505(); // 0x38e NEW_2
	
Label_912:
	return 4; // 0x390 Return
}


task_3_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool)
{
	func_858(); // 0x392 NEW_2
	func_5115(); // 0x395 NEW_2
	return 0; // 0x397 Return
}


task_3_event_1(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	var_23_bool = 0; var_24_object = Obj(); // 0x399 PushV
	var_24_object = var_22_bool; // 0x39a Mov
	func_4892(var_23_bool, var_24_object); // 0x39b NEW_2
	if(var_23_bool == 0) goto Label_933; // 0x39d JumpB
	func_858(); // 0x39f NEW_2
	var_39_object = Obj(); // 0x3a1 PushV
	var_39_object = var_22_bool; // 0x3a2 Mov
	func_4915(var_39_object); // 0x3a3 NEW_2
	
Label_933:
	return 0; // 0x3a5 Return
}


task_4_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool)
{
	func_1124(var_21_bool); // 0x3c3 NEW_2
	func_5115(); // 0x3c6 NEW_2
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
	func_4403(var_94_cvector); // 0x460 NEW_2
	var_1_bool = var_94_cvector + var_29_cvector; // 0x462 Add2
}


task_4_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	func_1124(var_22_bool); // 0x46d NEW_2
	var_24_object = Obj(); // 0x46f PushV
	var_24_object = var_22_bool; // 0x470 Mov
	func_4829(); // 0x471 NEW_2
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
	func_4403(var_94_cvector); // 0x51b NEW_2
	var_1_bool = var_94_cvector + var_29_cvector; // 0x51d Add2
}


task_5_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	func_1311(var_22_bool); // 0x528 NEW_2
	var_24_object = Obj(); // 0x52a PushV
	var_24_object = var_22_bool; // 0x52b Mov
	func_4829(); // 0x52c NEW_2
	return 0; // 0x52e Return
}


task_6_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool)
{
	func_1505(var_21_bool); // 0x540 NEW_2
	func_5115(); // 0x543 NEW_2
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
	func_4403(var_94_cvector); // 0x5dd NEW_2
	var_1_bool = var_94_cvector + var_29_cvector; // 0x5df Add2
}


task_6_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	func_1505(var_22_bool); // 0x5ea NEW_2
	var_24_object = Obj(); // 0x5ec PushV
	var_24_object = var_22_bool; // 0x5ed Mov
	func_4829(); // 0x5ee NEW_2
	return 0; // 0x5f0 Return
}


task_7_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool)
{
	func_1699(var_21_bool); // 0x602 NEW_2
	func_5115(); // 0x605 NEW_2
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
	func_4403(var_94_cvector); // 0x69f NEW_2
	var_1_bool = var_94_cvector + var_29_cvector; // 0x6a1 Add2
}


task_7_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	func_1699(var_22_bool); // 0x6ac NEW_2
	var_24_object = Obj(); // 0x6ae PushV
	var_24_object = var_22_bool; // 0x6af Mov
	func_4829(); // 0x6b0 NEW_2
	return 0; // 0x6b2 Return
}


task_9_event_11(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_int, var_23_int)
{
	var_24_int = 1; // 0x8ad PushI
	if(var_24_int == 0) goto Label_4402; // 0x8ae JumpB
	func_4707(); // 0x8b0 NEW_2
	var_26_int = 45666; // 0x8b2 PushI
	var_27_bool = var_23_int == var_26_int; // 0x8b3 Eq
	if(var_27_bool == 0) goto Label_2234; // 0x8b4 JumpB
	var_28_object = Obj(); var_29_object = Obj(); // 0x8b5 PushV
	var_28_object = var_1_bool; // 0x8b6 MovT
	var_29_object = var_0_bool; // 0x8b7 MovT
	func_5197(); // 0x8b8 NEW_2
	
Label_2234:
	var_31_int = 45667; // 0x8ba PushI
	var_32_bool = var_23_int == var_31_int; // 0x8bb Eq
	if(var_32_bool == 0) goto Label_2242; // 0x8bc JumpB
	var_33_object = Obj(); var_34_object = Obj(); // 0x8bd PushV
	var_33_object = var_1_bool; // 0x8be MovT
	var_34_object = var_0_bool; // 0x8bf MovT
	func_5197(); // 0x8c0 NEW_2
	
Label_2242:
	var_35_int = 45668; // 0x8c2 PushI
	var_36_bool = var_23_int == var_35_int; // 0x8c3 Eq
	if(var_36_bool == 0) goto Label_2250; // 0x8c4 JumpB
	var_37_object = Obj(); var_38_object = Obj(); // 0x8c5 PushV
	var_37_object = var_1_bool; // 0x8c6 MovT
	var_38_object = var_0_bool; // 0x8c7 MovT
	func_5197(); // 0x8c8 NEW_2
	
Label_2250:
	var_39_int = 39084; // 0x8ca PushI
	var_40_bool = var_23_int == var_39_int; // 0x8cb Eq
	if(var_40_bool == 0) goto Label_2258; // 0x8cc JumpB
	var_41_object = Obj(); var_42_object = Obj(); // 0x8cd PushV
	var_41_object = var_1_bool; // 0x8ce MovT
	var_42_object = var_0_bool; // 0x8cf MovT
	func_5197(); // 0x8d0 NEW_2
	
Label_2258:
	var_43_int = 45665; // 0x8d2 PushI
	var_44_bool = var_22_int == var_43_int; // 0x8d3 Eq
	if(var_44_bool == 0) goto Label_2616; // 0x8d4 JumpB
	var_45_bool = 0; var_46_object = Obj(); // 0x8d5 PushV
	var_46_object = var_1_bool; // 0x8d6 MovT
	func_5214(var_46_object); // 0x8d7 NEW_2
	if(var_45_bool == 0) goto Label_2534; // 0x8d9 JumpB
	var_53_string = ""; // 0x8da PushV
	var_53_string = "Neutral"; // 0x8db MovS
	func_2198(var_23_int, var_53_string); // 0x8dc NEW_2
	var_70_int = 543209; // 0x8de PushI
	SetMessage(var_70_int); // 0x8df TObjFunc
	ClearReplies(); // 0x8e1 TObjFunc
	var_71_bool = 0; // 0x8e3 PushV
	var_71_bool = 1; // 0x8e4 MovB
	var_72_bool = 0; // 0x8e5 PushV
	var_72_bool = 1; // 0x8e6 MovB
	var_73_bool = 0; // 0x8e7 PushV
	var_73_bool = 1; // 0x8e8 MovB
	var_74_bool = 0; var_75_object = Obj(); // 0x8e9 PushV
	var_75_object = var_1_bool; // 0x8ea MovT
	func_5226(var_74_bool, var_75_object); // 0x8eb NEW_2
	if(var_74_bool == 0) goto Label_2292; // 0x8ed JumpB
	var_85_bool = 0; var_86_object = Obj(); // 0x8ee PushV
	var_86_object = var_1_bool; // 0x8ef MovT
	func_5236(var_85_bool, var_86_object); // 0x8f0 NEW_2
	if(var_85_bool == 0) goto Label_2292; // 0x8f2 JumpB
	var_73_bool = 0; // 0x8f3 MovB
	
Label_2292:
	if(var_73_bool == 0) goto Label_2299; // 0x8f4 JumpB
	var_91_bool = 0; var_92_object = Obj(); // 0x8f5 PushV
	var_92_object = var_1_bool; // 0x8f6 MovT
	func_5246(var_91_bool, var_92_object); // 0x8f7 NEW_2
	if(var_91_bool == 0) goto Label_2299; // 0x8f9 JumpB
	var_72_bool = 0; // 0x8fa MovB
	
Label_2299:
	if(var_72_bool == 0) goto Label_2306; // 0x8fb JumpB
	var_97_bool = 0; var_98_object = Obj(); // 0x8fc PushV
	var_98_object = var_1_bool; // 0x8fd MovT
	func_5256(var_97_bool, var_98_object); // 0x8fe NEW_2
	if(var_97_bool == 0) goto Label_2306; // 0x900 JumpB
	var_71_bool = 0; // 0x901 MovB
	
Label_2306:
	if(var_71_bool == 0) goto Label_2312; // 0x902 JumpB
	var_103_int = 543210; // 0x903 PushI
	var_104_int = -1; // 0x904 PushI
	var_105_int = 45666; // 0x905 PushI
	AddReply(var_103_int, var_104_int, var_105_int); // 0x906 TObjFunc
	
Label_2312:
	var_106_bool = 0; // 0x908 PushV
	var_106_bool = 1; // 0x909 MovB
	var_107_bool = 0; // 0x90a PushV
	var_107_bool = 1; // 0x90b MovB
	var_108_bool = 0; var_109_object = Obj(); // 0x90c PushV
	var_109_object = var_1_bool; // 0x90d MovT
	func_5266(var_108_bool, var_109_object); // 0x90e NEW_2
	if(var_108_bool == 0) goto Label_2327; // 0x910 JumpB
	var_114_bool = 0; var_115_object = Obj(); // 0x911 PushV
	var_115_object = var_1_bool; // 0x912 MovT
	func_5276(var_114_bool, var_115_object); // 0x913 NEW_2
	if(var_114_bool == 0) goto Label_2327; // 0x915 JumpB
	var_107_bool = 0; // 0x916 MovB
	
Label_2327:
	if(var_107_bool == 0) goto Label_2334; // 0x917 JumpB
	var_120_bool = 0; var_121_object = Obj(); // 0x918 PushV
	var_121_object = var_1_bool; // 0x919 MovT
	func_5286(var_120_bool, var_121_object); // 0x91a NEW_2
	if(var_120_bool == 0) goto Label_2334; // 0x91c JumpB
	var_106_bool = 0; // 0x91d MovB
	
Label_2334:
	if(var_106_bool == 0) goto Label_2340; // 0x91e JumpB
	var_126_int = 543211; // 0x91f PushI
	var_127_int = -1; // 0x920 PushI
	var_128_int = 45667; // 0x921 PushI
	AddReply(var_126_int, var_127_int, var_128_int); // 0x922 TObjFunc
	
Label_2340:
	var_129_bool = 0; // 0x924 PushV
	var_129_bool = 1; // 0x925 MovB
	var_130_bool = 0; // 0x926 PushV
	var_130_bool = 1; // 0x927 MovB
	var_131_bool = 0; // 0x928 PushV
	var_131_bool = 1; // 0x929 MovB
	var_132_bool = 0; // 0x92a PushV
	var_132_bool = 1; // 0x92b MovB
	var_133_bool = 0; var_134_object = Obj(); // 0x92c PushV
	var_134_object = var_1_bool; // 0x92d MovT
	func_5296(var_133_bool, var_134_object); // 0x92e NEW_2
	if(var_133_bool == 0) goto Label_2359; // 0x930 JumpB
	var_139_bool = 0; var_140_object = Obj(); // 0x931 PushV
	var_140_object = var_1_bool; // 0x932 MovT
	func_5306(var_139_bool, var_140_object); // 0x933 NEW_2
	if(var_139_bool == 0) goto Label_2359; // 0x935 JumpB
	var_132_bool = 0; // 0x936 MovB
	
Label_2359:
	if(var_132_bool == 0) goto Label_2366; // 0x937 JumpB
	var_145_bool = 0; var_146_object = Obj(); // 0x938 PushV
	var_146_object = var_1_bool; // 0x939 MovT
	func_5316(var_145_bool, var_146_object); // 0x93a NEW_2
	if(var_145_bool == 0) goto Label_2366; // 0x93c JumpB
	var_131_bool = 0; // 0x93d MovB
	
Label_2366:
	if(var_131_bool == 0) goto Label_2373; // 0x93e JumpB
	var_151_bool = 0; var_152_object = Obj(); // 0x93f PushV
	var_152_object = var_1_bool; // 0x940 MovT
	func_5326(var_151_bool, var_152_object); // 0x941 NEW_2
	if(var_151_bool == 0) goto Label_2373; // 0x943 JumpB
	var_130_bool = 0; // 0x944 MovB
	
Label_2373:
	if(var_130_bool == 0) goto Label_2380; // 0x945 JumpB
	var_157_bool = 0; var_158_object = Obj(); // 0x946 PushV
	var_158_object = var_1_bool; // 0x947 MovT
	func_5336(var_157_bool, var_158_object); // 0x948 NEW_2
	if(var_157_bool == 0) goto Label_2380; // 0x94a JumpB
	var_129_bool = 0; // 0x94b MovB
	
Label_2380:
	if(var_129_bool == 0) goto Label_2386; // 0x94c JumpB
	var_163_int = 543212; // 0x94d PushI
	var_164_int = -1; // 0x94e PushI
	var_165_int = 45668; // 0x94f PushI
	AddReply(var_163_int, var_164_int, var_165_int); // 0x950 TObjFunc
	
Label_2386:
	var_166_bool = 0; // 0x952 PushV
	var_166_bool = 1; // 0x953 MovB
	var_167_bool = 0; // 0x954 PushV
	var_167_bool = 1; // 0x955 MovB
	var_168_bool = 0; // 0x956 PushV
	var_168_bool = 1; // 0x957 MovB
	var_169_bool = 0; // 0x958 PushV
	var_169_bool = 1; // 0x959 MovB
	var_170_bool = 0; var_171_object = Obj(); // 0x95a PushV
	var_171_object = var_1_bool; // 0x95b MovT
	func_5226(var_170_bool, var_171_object); // 0x95c NEW_2
	if(var_170_bool == 0) goto Label_2405; // 0x95e JumpB
	var_172_bool = 0; var_173_object = Obj(); // 0x95f PushV
	var_173_object = var_1_bool; // 0x960 MovT
	func_5236(var_172_bool, var_173_object); // 0x961 NEW_2
	if(var_172_bool == 0) goto Label_2405; // 0x963 JumpB
	var_169_bool = 0; // 0x964 MovB
	
Label_2405:
	if(var_169_bool == 0) goto Label_2412; // 0x965 JumpB
	var_174_bool = 0; var_175_object = Obj(); // 0x966 PushV
	var_175_object = var_1_bool; // 0x967 MovT
	func_5256(var_174_bool, var_175_object); // 0x968 NEW_2
	if(var_174_bool == 0) goto Label_2412; // 0x96a JumpB
	var_168_bool = 0; // 0x96b MovB
	
Label_2412:
	if(var_168_bool == 0) goto Label_2419; // 0x96c JumpB
	var_176_bool = 0; var_177_object = Obj(); // 0x96d PushV
	var_177_object = var_1_bool; // 0x96e MovT
	func_5266(var_176_bool, var_177_object); // 0x96f NEW_2
	if(var_176_bool == 0) goto Label_2419; // 0x971 JumpB
	var_167_bool = 0; // 0x972 MovB
	
Label_2419:
	if(var_167_bool == 0) goto Label_2426; // 0x973 JumpB
	var_178_bool = 0; var_179_object = Obj(); // 0x974 PushV
	var_179_object = var_1_bool; // 0x975 MovT
	func_5286(var_178_bool, var_179_object); // 0x976 NEW_2
	if(var_178_bool == 0) goto Label_2426; // 0x978 JumpB
	var_166_bool = 0; // 0x979 MovB
	
Label_2426:
	if(var_166_bool == 0) goto Label_2432; // 0x97a JumpB
	var_180_int = 543213; // 0x97b PushI
	var_181_int = -1; // 0x97c PushI
	var_182_int = 45669; // 0x97d PushI
	AddReply(var_180_int, var_181_int, var_182_int); // 0x97e TObjFunc
	
Label_2432:
	var_183_bool = 0; // 0x980 PushV
	var_183_bool = 1; // 0x981 MovB
	var_184_bool = 0; // 0x982 PushV
	var_184_bool = 1; // 0x983 MovB
	var_185_bool = 0; // 0x984 PushV
	var_185_bool = 1; // 0x985 MovB
	var_186_bool = 0; // 0x986 PushV
	var_186_bool = 1; // 0x987 MovB
	var_187_bool = 0; // 0x988 PushV
	var_187_bool = 1; // 0x989 MovB
	var_188_bool = 0; // 0x98a PushV
	var_188_bool = 1; // 0x98b MovB
	var_189_bool = 0; var_190_object = Obj(); // 0x98c PushV
	var_190_object = var_1_bool; // 0x98d MovT
	func_5246(var_189_bool, var_190_object); // 0x98e NEW_2
	if(var_189_bool == 0) goto Label_2455; // 0x990 JumpB
	var_191_bool = 0; var_192_object = Obj(); // 0x991 PushV
	var_192_object = var_1_bool; // 0x992 MovT
	func_5276(var_191_bool, var_192_object); // 0x993 NEW_2
	if(var_191_bool == 0) goto Label_2455; // 0x995 JumpB
	var_188_bool = 0; // 0x996 MovB
	
Label_2455:
	if(var_188_bool == 0) goto Label_2462; // 0x997 JumpB
	var_193_bool = 0; var_194_object = Obj(); // 0x998 PushV
	var_194_object = var_1_bool; // 0x999 MovT
	func_5306(var_193_bool, var_194_object); // 0x99a NEW_2
	if(var_193_bool == 0) goto Label_2462; // 0x99c JumpB
	var_187_bool = 0; // 0x99d MovB
	
Label_2462:
	if(var_187_bool == 0) goto Label_2469; // 0x99e JumpB
	var_195_bool = 0; var_196_object = Obj(); // 0x99f PushV
	var_196_object = var_1_bool; // 0x9a0 MovT
	func_5336(var_195_bool, var_196_object); // 0x9a1 NEW_2
	if(var_195_bool == 0) goto Label_2469; // 0x9a3 JumpB
	var_186_bool = 0; // 0x9a4 MovB
	
Label_2469:
	if(var_186_bool == 0) goto Label_2476; // 0x9a5 JumpB
	var_197_bool = 0; var_198_object = Obj(); // 0x9a6 PushV
	var_198_object = var_1_bool; // 0x9a7 MovT
	func_5236(var_197_bool, var_198_object); // 0x9a8 NEW_2
	if(var_197_bool == 0) goto Label_2476; // 0x9aa JumpB
	var_185_bool = 0; // 0x9ab MovB
	
Label_2476:
	if(var_185_bool == 0) goto Label_2483; // 0x9ac JumpB
	var_199_bool = 0; var_200_object = Obj(); // 0x9ad PushV
	var_200_object = var_1_bool; // 0x9ae MovT
	func_5296(var_199_bool, var_200_object); // 0x9af NEW_2
	if(var_199_bool == 0) goto Label_2483; // 0x9b1 JumpB
	var_184_bool = 0; // 0x9b2 MovB
	
Label_2483:
	if(var_184_bool == 0) goto Label_2490; // 0x9b3 JumpB
	var_201_bool = 0; var_202_object = Obj(); // 0x9b4 PushV
	var_202_object = var_1_bool; // 0x9b5 MovT
	func_5316(var_201_bool, var_202_object); // 0x9b6 NEW_2
	if(var_201_bool == 0) goto Label_2490; // 0x9b8 JumpB
	var_183_bool = 0; // 0x9b9 MovB
	
Label_2490:
	if(var_183_bool == 0) goto Label_2496; // 0x9ba JumpB
	var_203_int = 543215; // 0x9bb PushI
	var_204_int = -1; // 0x9bc PushI
	var_205_int = 45671; // 0x9bd PushI
	AddReply(var_203_int, var_204_int, var_205_int); // 0x9be TObjFunc
	
Label_2496:
	var_206_bool = 0; // 0x9c0 PushV
	var_206_bool = 1; // 0x9c1 MovB
	var_207_bool = 0; // 0x9c2 PushV
	var_207_bool = 1; // 0x9c3 MovB
	var_208_bool = 0; // 0x9c4 PushV
	var_208_bool = 1; // 0x9c5 MovB
	var_209_bool = 0; var_210_object = Obj(); // 0x9c6 PushV
	var_210_object = var_1_bool; // 0x9c7 MovT
	func_5326(var_209_bool, var_210_object); // 0x9c8 NEW_2
	if(var_209_bool == 0) goto Label_2513; // 0x9ca JumpB
	var_211_bool = 0; var_212_object = Obj(); // 0x9cb PushV
	var_212_object = var_1_bool; // 0x9cc MovT
	func_5306(var_211_bool, var_212_object); // 0x9cd NEW_2
	if(var_211_bool == 0) goto Label_2513; // 0x9cf JumpB
	var_208_bool = 0; // 0x9d0 MovB
	
Label_2513:
	if(var_208_bool == 0) goto Label_2520; // 0x9d1 JumpB
	var_213_bool = 0; var_214_object = Obj(); // 0x9d2 PushV
	var_214_object = var_1_bool; // 0x9d3 MovT
	func_5296(var_213_bool, var_214_object); // 0x9d4 NEW_2
	if(var_213_bool == 0) goto Label_2520; // 0x9d6 JumpB
	var_207_bool = 0; // 0x9d7 MovB
	
Label_2520:
	if(var_207_bool == 0) goto Label_2527; // 0x9d8 JumpB
	var_215_bool = 0; var_216_object = Obj(); // 0x9d9 PushV
	var_216_object = var_1_bool; // 0x9da MovT
	func_5286(var_215_bool, var_216_object); // 0x9db NEW_2
	if(var_215_bool == 0) goto Label_2527; // 0x9dd JumpB
	var_206_bool = 0; // 0x9de MovB
	
Label_2527:
	if(var_206_bool == 0) goto Label_2533; // 0x9df JumpB
	var_217_int = 543219; // 0x9e0 PushI
	var_218_int = -1; // 0x9e1 PushI
	var_219_int = 45675; // 0x9e2 PushI
	AddReply(var_217_int, var_218_int, var_219_int); // 0x9e3 TObjFunc
	
Label_2533:
	return 0; // 0x9e5 Return
	
Label_2534:
	var_220_string = ""; // 0x9e6 PushV
	var_220_string = "Neutral"; // 0x9e7 MovS
	func_2198(var_23_int, var_220_string); // 0x9e8 NEW_2
	var_221_int = 537240; // 0x9ea PushI
	SetMessage(var_221_int); // 0x9eb TObjFunc
	ClearReplies(); // 0x9ed TObjFunc
	var_222_int = 537241; // 0x9ef PushI
	var_223_int = -1; // 0x9f0 PushI
	var_224_int = 39084; // 0x9f1 PushI
	AddReply(var_222_int, var_223_int, var_224_int); // 0x9f2 TObjFunc
	var_225_bool = 0; // 0x9f4 PushV
	var_225_bool = 0; // 0x9f5 MovB
	var_226_bool = 0; var_227_object = Obj(); // 0x9f6 PushV
	var_227_object = var_1_bool; // 0x9f7 MovT
	func_5202(var_227_object); // 0x9f8 NEW_2
	if(var_226_bool == 0) goto Label_2561; // 0x9fa JumpB
	var_232_bool = 0; var_233_object = Obj(); // 0x9fb PushV
	var_233_object = var_1_bool; // 0x9fc MovT
	func_5226(var_232_bool, var_233_object); // 0x9fd NEW_2
	if(var_232_bool == 0) goto Label_2561; // 0x9ff JumpB
	var_225_bool = 1; // 0xa00 MovB
	
Label_2561:
	if(var_225_bool == 0) goto Label_2567; // 0xa01 JumpB
	var_234_int = 537242; // 0xa02 PushI
	var_235_int = 39086; // 0xa03 PushI
	var_236_int = 39085; // 0xa04 PushI
	AddReply(var_234_int, var_235_int, var_236_int); // 0xa05 TObjFunc
	
Label_2567:
	var_237_bool = 0; // 0xa07 PushV
	var_237_bool = 0; // 0xa08 MovB
	var_238_bool = 0; var_239_object = Obj(); // 0xa09 PushV
	var_239_object = var_1_bool; // 0xa0a MovT
	func_5246(var_238_bool, var_239_object); // 0xa0b NEW_2
	if(var_238_bool == 0) goto Label_2580; // 0xa0d JumpB
	var_240_bool = 0; var_241_object = Obj(); // 0xa0e PushV
	var_241_object = var_1_bool; // 0xa0f MovT
	func_5346(var_240_bool, var_241_object); // 0xa10 NEW_2
	if(var_240_bool == 0) goto Label_2580; // 0xa12 JumpB
	var_237_bool = 1; // 0xa13 MovB
	
Label_2580:
	if(var_237_bool == 0) goto Label_2586; // 0xa14 JumpB
	var_255_int = 537352; // 0xa15 PushI
	var_256_int = 39199; // 0xa16 PushI
	var_257_int = 39198; // 0xa17 PushI
	AddReply(var_255_int, var_256_int, var_257_int); // 0xa18 TObjFunc
	
Label_2586:
	var_258_bool = 0; // 0xa1a PushV
	var_258_bool = 0; // 0xa1b MovB
	var_259_bool = 0; var_260_object = Obj(); // 0xa1c PushV
	var_260_object = var_1_bool; // 0xa1d MovT
	func_5256(var_259_bool, var_260_object); // 0xa1e NEW_2
	if(var_259_bool == 0) goto Label_2599; // 0xa20 JumpB
	var_261_bool = 0; var_262_object = Obj(); // 0xa21 PushV
	var_262_object = var_1_bool; // 0xa22 MovT
	func_5346(var_261_bool, var_262_object); // 0xa23 NEW_2
	if(var_261_bool == 0) goto Label_2599; // 0xa25 JumpB
	var_258_bool = 1; // 0xa26 MovB
	
Label_2599:
	if(var_258_bool == 0) goto Label_2605; // 0xa27 JumpB
	var_263_int = 537380; // 0xa28 PushI
	var_264_int = 39227; // 0xa29 PushI
	var_265_int = 39226; // 0xa2a PushI
	AddReply(var_263_int, var_264_int, var_265_int); // 0xa2b TObjFunc
	
Label_2605:
	var_266_int = 537503; // 0xa2d PushI
	var_267_int = -1; // 0xa2e PushI
	var_268_int = 39350; // 0xa2f PushI
	AddReply(var_266_int, var_267_int, var_268_int); // 0xa30 TObjFunc
	var_269_int = 537504; // 0xa32 PushI
	var_270_int = -1; // 0xa33 PushI
	var_271_int = 39351; // 0xa34 PushI
	AddReply(var_269_int, var_270_int, var_271_int); // 0xa35 TObjFunc
	return 0; // 0xa37 Return
	
Label_2616:
	var_272_int = 39341; // 0xa38 PushI
	var_273_bool = var_22_int == var_272_int; // 0xa39 Eq
	if(var_273_bool == 0) goto Label_2619; // 0xa3a JumpB
	
Label_2619:
	var_274_int = 39347; // 0xa3b PushI
	var_275_bool = var_22_int == var_274_int; // 0xa3c Eq
	if(var_275_bool == 0) goto Label_2647; // 0xa3d JumpB
	var_276_string = ""; // 0xa3e PushV
	var_276_string = "Neutral"; // 0xa3f MovS
	func_2198(var_23_int, var_276_string); // 0xa40 NEW_2
	var_277_int = 537500; // 0xa42 PushI
	SetMessage(var_277_int); // 0xa43 TObjFunc
	ClearReplies(); // 0xa45 TObjFunc
	var_278_int = 537501; // 0xa47 PushI
	var_279_int = -1; // 0xa48 PushI
	var_280_int = 39348; // 0xa49 PushI
	AddReply(var_278_int, var_279_int, var_280_int); // 0xa4a TObjFunc
	var_281_bool = 0; var_282_object = Obj(); // 0xa4c PushV
	var_282_object = var_1_bool; // 0xa4d MovT
	func_5202(var_282_object); // 0xa4e NEW_2
	if(var_281_bool == 0) goto Label_2646; // 0xa50 JumpB
	var_283_int = 537502; // 0xa51 PushI
	var_284_int = -1; // 0xa52 PushI
	var_285_int = 39349; // 0xa53 PushI
	AddReply(var_283_int, var_284_int, var_285_int); // 0xa54 TObjFunc
	
Label_2646:
	return 0; // 0xa56 Return
	
Label_2647:
	var_286_int = 39343; // 0xa57 PushI
	var_287_bool = var_22_int == var_286_int; // 0xa58 Eq
	if(var_287_bool == 0) goto Label_2670; // 0xa59 JumpB
	var_288_string = ""; // 0xa5a PushV
	var_288_string = "Neutral"; // 0xa5b MovS
	func_2198(var_23_int, var_288_string); // 0xa5c NEW_2
	var_289_int = 537496; // 0xa5e PushI
	SetMessage(var_289_int); // 0xa5f TObjFunc
	ClearReplies(); // 0xa61 TObjFunc
	var_290_int = 537497; // 0xa63 PushI
	var_291_int = -1; // 0xa64 PushI
	var_292_int = 39344; // 0xa65 PushI
	AddReply(var_290_int, var_291_int, var_292_int); // 0xa66 TObjFunc
	var_293_int = 537498; // 0xa68 PushI
	var_294_int = -1; // 0xa69 PushI
	var_295_int = 39345; // 0xa6a PushI
	AddReply(var_293_int, var_294_int, var_295_int); // 0xa6b TObjFunc
	return 0; // 0xa6d Return
	
Label_2670:
	var_296_int = 39331; // 0xa6e PushI
	var_297_bool = var_22_int == var_296_int; // 0xa6f Eq
	if(var_297_bool == 0) goto Label_2673; // 0xa70 JumpB
	
Label_2673:
	var_298_int = 39333; // 0xa71 PushI
	var_299_bool = var_22_int == var_298_int; // 0xa72 Eq
	if(var_299_bool == 0) goto Label_2701; // 0xa73 JumpB
	var_300_string = ""; // 0xa74 PushV
	var_300_string = "Neutral"; // 0xa75 MovS
	func_2198(var_23_int, var_300_string); // 0xa76 NEW_2
	var_301_int = 537486; // 0xa78 PushI
	SetMessage(var_301_int); // 0xa79 TObjFunc
	ClearReplies(); // 0xa7b TObjFunc
	var_302_int = 537487; // 0xa7d PushI
	var_303_int = 39335; // 0xa7e PushI
	var_304_int = 39334; // 0xa7f PushI
	AddReply(var_302_int, var_303_int, var_304_int); // 0xa80 TObjFunc
	var_305_bool = 0; var_306_object = Obj(); // 0xa82 PushV
	var_306_object = var_1_bool; // 0xa83 MovT
	func_5202(var_306_object); // 0xa84 NEW_2
	if(var_305_bool == 0) goto Label_2700; // 0xa86 JumpB
	var_307_int = 537491; // 0xa87 PushI
	var_308_int = -1; // 0xa88 PushI
	var_309_int = 39338; // 0xa89 PushI
	AddReply(var_307_int, var_308_int, var_309_int); // 0xa8a TObjFunc
	
Label_2700:
	return 0; // 0xa8c Return
	
Label_2701:
	var_310_int = 39335; // 0xa8d PushI
	var_311_bool = var_22_int == var_310_int; // 0xa8e Eq
	if(var_311_bool == 0) goto Label_2724; // 0xa8f JumpB
	var_312_string = ""; // 0xa90 PushV
	var_312_string = "Neutral"; // 0xa91 MovS
	func_2198(var_23_int, var_312_string); // 0xa92 NEW_2
	var_313_int = 537488; // 0xa94 PushI
	SetMessage(var_313_int); // 0xa95 TObjFunc
	ClearReplies(); // 0xa97 TObjFunc
	var_314_int = 537489; // 0xa99 PushI
	var_315_int = -1; // 0xa9a PushI
	var_316_int = 39336; // 0xa9b PushI
	AddReply(var_314_int, var_315_int, var_316_int); // 0xa9c TObjFunc
	var_317_int = 537490; // 0xa9e PushI
	var_318_int = -1; // 0xa9f PushI
	var_319_int = 39337; // 0xaa0 PushI
	AddReply(var_317_int, var_318_int, var_319_int); // 0xaa1 TObjFunc
	return 0; // 0xaa3 Return
	
Label_2724:
	var_320_int = 39321; // 0xaa4 PushI
	var_321_bool = var_22_int == var_320_int; // 0xaa5 Eq
	if(var_321_bool == 0) goto Label_2727; // 0xaa6 JumpB
	
Label_2727:
	var_322_int = 39323; // 0xaa7 PushI
	var_323_bool = var_22_int == var_322_int; // 0xaa8 Eq
	if(var_323_bool == 0) goto Label_2750; // 0xaa9 JumpB
	var_324_string = ""; // 0xaaa PushV
	var_324_string = "Neutral"; // 0xaab MovS
	func_2198(var_23_int, var_324_string); // 0xaac NEW_2
	var_325_int = 537476; // 0xaae PushI
	SetMessage(var_325_int); // 0xaaf TObjFunc
	ClearReplies(); // 0xab1 TObjFunc
	var_326_int = 537477; // 0xab3 PushI
	var_327_int = 39325; // 0xab4 PushI
	var_328_int = 39324; // 0xab5 PushI
	AddReply(var_326_int, var_327_int, var_328_int); // 0xab6 TObjFunc
	var_329_int = 537481; // 0xab8 PushI
	var_330_int = -1; // 0xab9 PushI
	var_331_int = 39328; // 0xaba PushI
	AddReply(var_329_int, var_330_int, var_331_int); // 0xabb TObjFunc
	return 0; // 0xabd Return
	
Label_2750:
	var_332_int = 39325; // 0xabe PushI
	var_333_bool = var_22_int == var_332_int; // 0xabf Eq
	if(var_333_bool == 0) goto Label_2773; // 0xac0 JumpB
	var_334_string = ""; // 0xac1 PushV
	var_334_string = "Neutral"; // 0xac2 MovS
	func_2198(var_23_int, var_334_string); // 0xac3 NEW_2
	var_335_int = 537478; // 0xac5 PushI
	SetMessage(var_335_int); // 0xac6 TObjFunc
	ClearReplies(); // 0xac8 TObjFunc
	var_336_int = 537479; // 0xaca PushI
	var_337_int = -1; // 0xacb PushI
	var_338_int = 39326; // 0xacc PushI
	AddReply(var_336_int, var_337_int, var_338_int); // 0xacd TObjFunc
	var_339_int = 537480; // 0xacf PushI
	var_340_int = -1; // 0xad0 PushI
	var_341_int = 39327; // 0xad1 PushI
	AddReply(var_339_int, var_340_int, var_341_int); // 0xad2 TObjFunc
	return 0; // 0xad4 Return
	
Label_2773:
	var_342_int = 39308; // 0xad5 PushI
	var_343_bool = var_22_int == var_342_int; // 0xad6 Eq
	if(var_343_bool == 0) goto Label_2776; // 0xad7 JumpB
	
Label_2776:
	var_344_int = 39310; // 0xad8 PushI
	var_345_bool = var_22_int == var_344_int; // 0xad9 Eq
	if(var_345_bool == 0) goto Label_2799; // 0xada JumpB
	var_346_string = ""; // 0xadb PushV
	var_346_string = "Neutral"; // 0xadc MovS
	func_2198(var_23_int, var_346_string); // 0xadd NEW_2
	var_347_int = 537463; // 0xadf PushI
	SetMessage(var_347_int); // 0xae0 TObjFunc
	ClearReplies(); // 0xae2 TObjFunc
	var_348_int = 537464; // 0xae4 PushI
	var_349_int = 39312; // 0xae5 PushI
	var_350_int = 39311; // 0xae6 PushI
	AddReply(var_348_int, var_349_int, var_350_int); // 0xae7 TObjFunc
	var_351_int = 537471; // 0xae9 PushI
	var_352_int = -1; // 0xaea PushI
	var_353_int = 39318; // 0xaeb PushI
	AddReply(var_351_int, var_352_int, var_353_int); // 0xaec TObjFunc
	return 0; // 0xaee Return
	
Label_2799:
	var_354_int = 39312; // 0xaef PushI
	var_355_bool = var_22_int == var_354_int; // 0xaf0 Eq
	if(var_355_bool == 0) goto Label_2822; // 0xaf1 JumpB
	var_356_string = ""; // 0xaf2 PushV
	var_356_string = "Neutral"; // 0xaf3 MovS
	func_2198(var_23_int, var_356_string); // 0xaf4 NEW_2
	var_357_int = 537465; // 0xaf6 PushI
	SetMessage(var_357_int); // 0xaf7 TObjFunc
	ClearReplies(); // 0xaf9 TObjFunc
	var_358_int = 537466; // 0xafb PushI
	var_359_int = 39314; // 0xafc PushI
	var_360_int = 39313; // 0xafd PushI
	AddReply(var_358_int, var_359_int, var_360_int); // 0xafe TObjFunc
	var_361_int = 537470; // 0xb00 PushI
	var_362_int = -1; // 0xb01 PushI
	var_363_int = 39317; // 0xb02 PushI
	AddReply(var_361_int, var_362_int, var_363_int); // 0xb03 TObjFunc
	return 0; // 0xb05 Return
	
Label_2822:
	var_364_int = 39314; // 0xb06 PushI
	var_365_bool = var_22_int == var_364_int; // 0xb07 Eq
	if(var_365_bool == 0) goto Label_2845; // 0xb08 JumpB
	var_366_string = ""; // 0xb09 PushV
	var_366_string = "Neutral"; // 0xb0a MovS
	func_2198(var_23_int, var_366_string); // 0xb0b NEW_2
	var_367_int = 537467; // 0xb0d PushI
	SetMessage(var_367_int); // 0xb0e TObjFunc
	ClearReplies(); // 0xb10 TObjFunc
	var_368_int = 537468; // 0xb12 PushI
	var_369_int = -1; // 0xb13 PushI
	var_370_int = 39315; // 0xb14 PushI
	AddReply(var_368_int, var_369_int, var_370_int); // 0xb15 TObjFunc
	var_371_int = 537469; // 0xb17 PushI
	var_372_int = -1; // 0xb18 PushI
	var_373_int = 39316; // 0xb19 PushI
	AddReply(var_371_int, var_372_int, var_373_int); // 0xb1a TObjFunc
	return 0; // 0xb1c Return
	
Label_2845:
	var_374_int = 39299; // 0xb1d PushI
	var_375_bool = var_22_int == var_374_int; // 0xb1e Eq
	if(var_375_bool == 0) goto Label_2848; // 0xb1f JumpB
	
Label_2848:
	var_376_int = 39301; // 0xb20 PushI
	var_377_bool = var_22_int == var_376_int; // 0xb21 Eq
	if(var_377_bool == 0) goto Label_2866; // 0xb22 JumpB
	var_378_string = ""; // 0xb23 PushV
	var_378_string = "Neutral"; // 0xb24 MovS
	func_2198(var_23_int, var_378_string); // 0xb25 NEW_2
	var_379_int = 537454; // 0xb27 PushI
	SetMessage(var_379_int); // 0xb28 TObjFunc
	ClearReplies(); // 0xb2a TObjFunc
	var_380_int = 537455; // 0xb2c PushI
	var_381_int = 39303; // 0xb2d PushI
	var_382_int = 39302; // 0xb2e PushI
	AddReply(var_380_int, var_381_int, var_382_int); // 0xb2f TObjFunc
	return 0; // 0xb31 Return
	
Label_2866:
	var_383_int = 39303; // 0xb32 PushI
	var_384_bool = var_22_int == var_383_int; // 0xb33 Eq
	if(var_384_bool == 0) goto Label_2889; // 0xb34 JumpB
	var_385_string = ""; // 0xb35 PushV
	var_385_string = "Neutral"; // 0xb36 MovS
	func_2198(var_23_int, var_385_string); // 0xb37 NEW_2
	var_386_int = 537456; // 0xb39 PushI
	SetMessage(var_386_int); // 0xb3a TObjFunc
	ClearReplies(); // 0xb3c TObjFunc
	var_387_int = 537457; // 0xb3e PushI
	var_388_int = -1; // 0xb3f PushI
	var_389_int = 39304; // 0xb40 PushI
	AddReply(var_387_int, var_388_int, var_389_int); // 0xb41 TObjFunc
	var_390_int = 537458; // 0xb43 PushI
	var_391_int = -1; // 0xb44 PushI
	var_392_int = 39305; // 0xb45 PushI
	AddReply(var_390_int, var_391_int, var_392_int); // 0xb46 TObjFunc
	return 0; // 0xb48 Return
	
Label_2889:
	var_393_int = 39280; // 0xb49 PushI
	var_394_bool = var_22_int == var_393_int; // 0xb4a Eq
	if(var_394_bool == 0) goto Label_2892; // 0xb4b JumpB
	
Label_2892:
	var_395_int = 39294; // 0xb4c PushI
	var_396_bool = var_22_int == var_395_int; // 0xb4d Eq
	if(var_396_bool == 0) goto Label_2915; // 0xb4e JumpB
	var_397_string = ""; // 0xb4f PushV
	var_397_string = "Neutral"; // 0xb50 MovS
	func_2198(var_23_int, var_397_string); // 0xb51 NEW_2
	var_398_int = 537448; // 0xb53 PushI
	SetMessage(var_398_int); // 0xb54 TObjFunc
	ClearReplies(); // 0xb56 TObjFunc
	var_399_int = 537449; // 0xb58 PushI
	var_400_int = 39284; // 0xb59 PushI
	var_401_int = 39295; // 0xb5a PushI
	AddReply(var_399_int, var_400_int, var_401_int); // 0xb5b TObjFunc
	var_402_int = 537450; // 0xb5d PushI
	var_403_int = -1; // 0xb5e PushI
	var_404_int = 39297; // 0xb5f PushI
	AddReply(var_402_int, var_403_int, var_404_int); // 0xb60 TObjFunc
	return 0; // 0xb62 Return
	
Label_2915:
	var_405_int = 39282; // 0xb63 PushI
	var_406_bool = var_22_int == var_405_int; // 0xb64 Eq
	if(var_406_bool == 0) goto Label_2933; // 0xb65 JumpB
	var_407_string = ""; // 0xb66 PushV
	var_407_string = "Neutral"; // 0xb67 MovS
	func_2198(var_23_int, var_407_string); // 0xb68 NEW_2
	var_408_int = 537436; // 0xb6a PushI
	SetMessage(var_408_int); // 0xb6b TObjFunc
	ClearReplies(); // 0xb6d TObjFunc
	var_409_int = 537437; // 0xb6f PushI
	var_410_int = 39284; // 0xb70 PushI
	var_411_int = 39283; // 0xb71 PushI
	AddReply(var_409_int, var_410_int, var_411_int); // 0xb72 TObjFunc
	return 0; // 0xb74 Return
	
Label_2933:
	var_412_int = 39284; // 0xb75 PushI
	var_413_bool = var_22_int == var_412_int; // 0xb76 Eq
	if(var_413_bool == 0) goto Label_2956; // 0xb77 JumpB
	var_414_string = ""; // 0xb78 PushV
	var_414_string = "Neutral"; // 0xb79 MovS
	func_2198(var_23_int, var_414_string); // 0xb7a NEW_2
	var_415_int = 537438; // 0xb7c PushI
	SetMessage(var_415_int); // 0xb7d TObjFunc
	ClearReplies(); // 0xb7f TObjFunc
	var_416_int = 537439; // 0xb81 PushI
	var_417_int = 39286; // 0xb82 PushI
	var_418_int = 39285; // 0xb83 PushI
	AddReply(var_416_int, var_417_int, var_418_int); // 0xb84 TObjFunc
	var_419_int = 537442; // 0xb86 PushI
	var_420_int = 39289; // 0xb87 PushI
	var_421_int = 39288; // 0xb88 PushI
	AddReply(var_419_int, var_420_int, var_421_int); // 0xb89 TObjFunc
	return 0; // 0xb8b Return
	
Label_2956:
	var_422_int = 39289; // 0xb8c PushI
	var_423_bool = var_22_int == var_422_int; // 0xb8d Eq
	if(var_423_bool == 0) goto Label_2974; // 0xb8e JumpB
	var_424_string = ""; // 0xb8f PushV
	var_424_string = "Neutral"; // 0xb90 MovS
	func_2198(var_23_int, var_424_string); // 0xb91 NEW_2
	var_425_int = 537443; // 0xb93 PushI
	SetMessage(var_425_int); // 0xb94 TObjFunc
	ClearReplies(); // 0xb96 TObjFunc
	var_426_int = 537444; // 0xb98 PushI
	var_427_int = 39291; // 0xb99 PushI
	var_428_int = 39290; // 0xb9a PushI
	AddReply(var_426_int, var_427_int, var_428_int); // 0xb9b TObjFunc
	return 0; // 0xb9d Return
	
Label_2974:
	var_429_int = 39291; // 0xb9e PushI
	var_430_bool = var_22_int == var_429_int; // 0xb9f Eq
	if(var_430_bool == 0) goto Label_2992; // 0xba0 JumpB
	var_431_string = ""; // 0xba1 PushV
	var_431_string = "Neutral"; // 0xba2 MovS
	func_2198(var_23_int, var_431_string); // 0xba3 NEW_2
	var_432_int = 537445; // 0xba5 PushI
	SetMessage(var_432_int); // 0xba6 TObjFunc
	ClearReplies(); // 0xba8 TObjFunc
	var_433_int = 537446; // 0xbaa PushI
	var_434_int = -1; // 0xbab PushI
	var_435_int = 39292; // 0xbac PushI
	AddReply(var_433_int, var_434_int, var_435_int); // 0xbad TObjFunc
	return 0; // 0xbaf Return
	
Label_2992:
	var_436_int = 39286; // 0xbb0 PushI
	var_437_bool = var_22_int == var_436_int; // 0xbb1 Eq
	if(var_437_bool == 0) goto Label_3010; // 0xbb2 JumpB
	var_438_string = ""; // 0xbb3 PushV
	var_438_string = "Neutral"; // 0xbb4 MovS
	func_2198(var_23_int, var_438_string); // 0xbb5 NEW_2
	var_439_int = 537440; // 0xbb7 PushI
	SetMessage(var_439_int); // 0xbb8 TObjFunc
	ClearReplies(); // 0xbba TObjFunc
	var_440_int = 537441; // 0xbbc PushI
	var_441_int = -1; // 0xbbd PushI
	var_442_int = 39287; // 0xbbe PushI
	AddReply(var_440_int, var_441_int, var_442_int); // 0xbbf TObjFunc
	return 0; // 0xbc1 Return
	
Label_3010:
	var_443_int = 39270; // 0xbc2 PushI
	var_444_bool = var_22_int == var_443_int; // 0xbc3 Eq
	if(var_444_bool == 0) goto Label_3013; // 0xbc4 JumpB
	
Label_3013:
	var_445_int = 39272; // 0xbc5 PushI
	var_446_bool = var_22_int == var_445_int; // 0xbc6 Eq
	if(var_446_bool == 0) goto Label_3036; // 0xbc7 JumpB
	var_447_string = ""; // 0xbc8 PushV
	var_447_string = "Neutral"; // 0xbc9 MovS
	func_2198(var_23_int, var_447_string); // 0xbca NEW_2
	var_448_int = 537426; // 0xbcc PushI
	SetMessage(var_448_int); // 0xbcd TObjFunc
	ClearReplies(); // 0xbcf TObjFunc
	var_449_int = 537427; // 0xbd1 PushI
	var_450_int = 39274; // 0xbd2 PushI
	var_451_int = 39273; // 0xbd3 PushI
	AddReply(var_449_int, var_450_int, var_451_int); // 0xbd4 TObjFunc
	var_452_int = 537431; // 0xbd6 PushI
	var_453_int = -1; // 0xbd7 PushI
	var_454_int = 39277; // 0xbd8 PushI
	AddReply(var_452_int, var_453_int, var_454_int); // 0xbd9 TObjFunc
	return 0; // 0xbdb Return
	
Label_3036:
	var_455_int = 39274; // 0xbdc PushI
	var_456_bool = var_22_int == var_455_int; // 0xbdd Eq
	if(var_456_bool == 0) goto Label_3059; // 0xbde JumpB
	var_457_string = ""; // 0xbdf PushV
	var_457_string = "Neutral"; // 0xbe0 MovS
	func_2198(var_23_int, var_457_string); // 0xbe1 NEW_2
	var_458_int = 537428; // 0xbe3 PushI
	SetMessage(var_458_int); // 0xbe4 TObjFunc
	ClearReplies(); // 0xbe6 TObjFunc
	var_459_int = 537429; // 0xbe8 PushI
	var_460_int = -1; // 0xbe9 PushI
	var_461_int = 39275; // 0xbea PushI
	AddReply(var_459_int, var_460_int, var_461_int); // 0xbeb TObjFunc
	var_462_int = 537430; // 0xbed PushI
	var_463_int = -1; // 0xbee PushI
	var_464_int = 39276; // 0xbef PushI
	AddReply(var_462_int, var_463_int, var_464_int); // 0xbf0 TObjFunc
	return 0; // 0xbf2 Return
	
Label_3059:
	var_465_int = 39247; // 0xbf3 PushI
	var_466_bool = var_22_int == var_465_int; // 0xbf4 Eq
	if(var_466_bool == 0) goto Label_3062; // 0xbf5 JumpB
	
Label_3062:
	var_467_int = 39265; // 0xbf6 PushI
	var_468_bool = var_22_int == var_467_int; // 0xbf7 Eq
	if(var_468_bool == 0) goto Label_3085; // 0xbf8 JumpB
	var_469_string = ""; // 0xbf9 PushV
	var_469_string = "Neutral"; // 0xbfa MovS
	func_2198(var_23_int, var_469_string); // 0xbfb NEW_2
	var_470_int = 537419; // 0xbfd PushI
	SetMessage(var_470_int); // 0xbfe TObjFunc
	ClearReplies(); // 0xc00 TObjFunc
	var_471_int = 537420; // 0xc02 PushI
	var_472_int = -1; // 0xc03 PushI
	var_473_int = 39266; // 0xc04 PushI
	AddReply(var_471_int, var_472_int, var_473_int); // 0xc05 TObjFunc
	var_474_int = 537421; // 0xc07 PushI
	var_475_int = -1; // 0xc08 PushI
	var_476_int = 39267; // 0xc09 PushI
	AddReply(var_474_int, var_475_int, var_476_int); // 0xc0a TObjFunc
	return 0; // 0xc0c Return
	
Label_3085:
	var_477_int = 39249; // 0xc0d PushI
	var_478_bool = var_22_int == var_477_int; // 0xc0e Eq
	if(var_478_bool == 0) goto Label_3108; // 0xc0f JumpB
	var_479_string = ""; // 0xc10 PushV
	var_479_string = "Neutral"; // 0xc11 MovS
	func_2198(var_23_int, var_479_string); // 0xc12 NEW_2
	var_480_int = 537403; // 0xc14 PushI
	SetMessage(var_480_int); // 0xc15 TObjFunc
	ClearReplies(); // 0xc17 TObjFunc
	var_481_int = 537404; // 0xc19 PushI
	var_482_int = 39251; // 0xc1a PushI
	var_483_int = 39250; // 0xc1b PushI
	AddReply(var_481_int, var_482_int, var_483_int); // 0xc1c TObjFunc
	var_484_int = 537417; // 0xc1e PushI
	var_485_int = -1; // 0xc1f PushI
	var_486_int = 39263; // 0xc20 PushI
	AddReply(var_484_int, var_485_int, var_486_int); // 0xc21 TObjFunc
	return 0; // 0xc23 Return
	
Label_3108:
	var_487_int = 39251; // 0xc24 PushI
	var_488_bool = var_22_int == var_487_int; // 0xc25 Eq
	if(var_488_bool == 0) goto Label_3136; // 0xc26 JumpB
	var_489_string = ""; // 0xc27 PushV
	var_489_string = "Neutral"; // 0xc28 MovS
	func_2198(var_23_int, var_489_string); // 0xc29 NEW_2
	var_490_int = 537405; // 0xc2b PushI
	SetMessage(var_490_int); // 0xc2c TObjFunc
	ClearReplies(); // 0xc2e TObjFunc
	var_491_int = 537406; // 0xc30 PushI
	var_492_int = 39253; // 0xc31 PushI
	var_493_int = 39252; // 0xc32 PushI
	AddReply(var_491_int, var_492_int, var_493_int); // 0xc33 TObjFunc
	var_494_bool = 0; var_495_object = Obj(); // 0xc35 PushV
	var_495_object = var_1_bool; // 0xc36 MovT
	func_5202(var_495_object); // 0xc37 NEW_2
	if(var_494_bool == 0) goto Label_3135; // 0xc39 JumpB
	var_496_int = 537416; // 0xc3a PushI
	var_497_int = -1; // 0xc3b PushI
	var_498_int = 39262; // 0xc3c PushI
	AddReply(var_496_int, var_497_int, var_498_int); // 0xc3d TObjFunc
	
Label_3135:
	return 0; // 0xc3f Return
	
Label_3136:
	var_499_int = 39253; // 0xc40 PushI
	var_500_bool = var_22_int == var_499_int; // 0xc41 Eq
	if(var_500_bool == 0) goto Label_3159; // 0xc42 JumpB
	var_501_string = ""; // 0xc43 PushV
	var_501_string = "Neutral"; // 0xc44 MovS
	func_2198(var_23_int, var_501_string); // 0xc45 NEW_2
	var_502_int = 537407; // 0xc47 PushI
	SetMessage(var_502_int); // 0xc48 TObjFunc
	ClearReplies(); // 0xc4a TObjFunc
	var_503_int = 537408; // 0xc4c PushI
	var_504_int = 39255; // 0xc4d PushI
	var_505_int = 39254; // 0xc4e PushI
	AddReply(var_503_int, var_504_int, var_505_int); // 0xc4f TObjFunc
	var_506_int = 537415; // 0xc51 PushI
	var_507_int = -1; // 0xc52 PushI
	var_508_int = 39261; // 0xc53 PushI
	AddReply(var_506_int, var_507_int, var_508_int); // 0xc54 TObjFunc
	return 0; // 0xc56 Return
	
Label_3159:
	var_509_int = 39255; // 0xc57 PushI
	var_510_bool = var_22_int == var_509_int; // 0xc58 Eq
	if(var_510_bool == 0) goto Label_3182; // 0xc59 JumpB
	var_511_string = ""; // 0xc5a PushV
	var_511_string = "Neutral"; // 0xc5b MovS
	func_2198(var_23_int, var_511_string); // 0xc5c NEW_2
	var_512_int = 537409; // 0xc5e PushI
	SetMessage(var_512_int); // 0xc5f TObjFunc
	ClearReplies(); // 0xc61 TObjFunc
	var_513_int = 537410; // 0xc63 PushI
	var_514_int = 39257; // 0xc64 PushI
	var_515_int = 39256; // 0xc65 PushI
	AddReply(var_513_int, var_514_int, var_515_int); // 0xc66 TObjFunc
	var_516_int = 537414; // 0xc68 PushI
	var_517_int = -1; // 0xc69 PushI
	var_518_int = 39260; // 0xc6a PushI
	AddReply(var_516_int, var_517_int, var_518_int); // 0xc6b TObjFunc
	return 0; // 0xc6d Return
	
Label_3182:
	var_519_int = 39257; // 0xc6e PushI
	var_520_bool = var_22_int == var_519_int; // 0xc6f Eq
	if(var_520_bool == 0) goto Label_3205; // 0xc70 JumpB
	var_521_string = ""; // 0xc71 PushV
	var_521_string = "Neutral"; // 0xc72 MovS
	func_2198(var_23_int, var_521_string); // 0xc73 NEW_2
	var_522_int = 537411; // 0xc75 PushI
	SetMessage(var_522_int); // 0xc76 TObjFunc
	ClearReplies(); // 0xc78 TObjFunc
	var_523_int = 537412; // 0xc7a PushI
	var_524_int = -1; // 0xc7b PushI
	var_525_int = 39258; // 0xc7c PushI
	AddReply(var_523_int, var_524_int, var_525_int); // 0xc7d TObjFunc
	var_526_int = 537413; // 0xc7f PushI
	var_527_int = -1; // 0xc80 PushI
	var_528_int = 39259; // 0xc81 PushI
	AddReply(var_526_int, var_527_int, var_528_int); // 0xc82 TObjFunc
	return 0; // 0xc84 Return
	
Label_3205:
	var_529_int = 39237; // 0xc85 PushI
	var_530_bool = var_22_int == var_529_int; // 0xc86 Eq
	if(var_530_bool == 0) goto Label_3208; // 0xc87 JumpB
	
Label_3208:
	var_531_int = 39244; // 0xc88 PushI
	var_532_bool = var_22_int == var_531_int; // 0xc89 Eq
	if(var_532_bool == 0) goto Label_3226; // 0xc8a JumpB
	var_533_string = ""; // 0xc8b PushV
	var_533_string = "Neutral"; // 0xc8c MovS
	func_2198(var_23_int, var_533_string); // 0xc8d NEW_2
	var_534_int = 537398; // 0xc8f PushI
	SetMessage(var_534_int); // 0xc90 TObjFunc
	ClearReplies(); // 0xc92 TObjFunc
	var_535_int = 537399; // 0xc94 PushI
	var_536_int = -1; // 0xc95 PushI
	var_537_int = 39245; // 0xc96 PushI
	AddReply(var_535_int, var_536_int, var_537_int); // 0xc97 TObjFunc
	return 0; // 0xc99 Return
	
Label_3226:
	var_538_int = 39239; // 0xc9a PushI
	var_539_bool = var_22_int == var_538_int; // 0xc9b Eq
	if(var_539_bool == 0) goto Label_3244; // 0xc9c JumpB
	var_540_string = ""; // 0xc9d PushV
	var_540_string = "Neutral"; // 0xc9e MovS
	func_2198(var_23_int, var_540_string); // 0xc9f NEW_2
	var_541_int = 537393; // 0xca1 PushI
	SetMessage(var_541_int); // 0xca2 TObjFunc
	ClearReplies(); // 0xca4 TObjFunc
	var_542_int = 537394; // 0xca6 PushI
	var_543_int = 39241; // 0xca7 PushI
	var_544_int = 39240; // 0xca8 PushI
	AddReply(var_542_int, var_543_int, var_544_int); // 0xca9 TObjFunc
	return 0; // 0xcab Return
	
Label_3244:
	var_545_int = 39241; // 0xcac PushI
	var_546_bool = var_22_int == var_545_int; // 0xcad Eq
	if(var_546_bool == 0) goto Label_3262; // 0xcae JumpB
	var_547_string = ""; // 0xcaf PushV
	var_547_string = "Neutral"; // 0xcb0 MovS
	func_2198(var_23_int, var_547_string); // 0xcb1 NEW_2
	var_548_int = 537395; // 0xcb3 PushI
	SetMessage(var_548_int); // 0xcb4 TObjFunc
	ClearReplies(); // 0xcb6 TObjFunc
	var_549_int = 537396; // 0xcb8 PushI
	var_550_int = -1; // 0xcb9 PushI
	var_551_int = 39242; // 0xcba PushI
	AddReply(var_549_int, var_550_int, var_551_int); // 0xcbb TObjFunc
	return 0; // 0xcbd Return
	
Label_3262:
	var_552_int = 39227; // 0xcbe PushI
	var_553_bool = var_22_int == var_552_int; // 0xcbf Eq
	if(var_553_bool == 0) goto Label_3290; // 0xcc0 JumpB
	var_554_string = ""; // 0xcc1 PushV
	var_554_string = "Neutral"; // 0xcc2 MovS
	func_2198(var_23_int, var_554_string); // 0xcc3 NEW_2
	var_555_int = 537381; // 0xcc5 PushI
	SetMessage(var_555_int); // 0xcc6 TObjFunc
	ClearReplies(); // 0xcc8 TObjFunc
	var_556_int = 537382; // 0xcca PushI
	var_557_int = 39229; // 0xccb PushI
	var_558_int = 39228; // 0xccc PushI
	AddReply(var_556_int, var_557_int, var_558_int); // 0xccd TObjFunc
	var_559_int = 537386; // 0xccf PushI
	var_560_int = 39233; // 0xcd0 PushI
	var_561_int = 39232; // 0xcd1 PushI
	AddReply(var_559_int, var_560_int, var_561_int); // 0xcd2 TObjFunc
	var_562_int = 537389; // 0xcd4 PushI
	var_563_int = -1; // 0xcd5 PushI
	var_564_int = 39235; // 0xcd6 PushI
	AddReply(var_562_int, var_563_int, var_564_int); // 0xcd7 TObjFunc
	return 0; // 0xcd9 Return
	
Label_3290:
	var_565_int = 39233; // 0xcda PushI
	var_566_bool = var_22_int == var_565_int; // 0xcdb Eq
	if(var_566_bool == 0) goto Label_3308; // 0xcdc JumpB
	var_567_string = ""; // 0xcdd PushV
	var_567_string = "Neutral"; // 0xcde MovS
	func_2198(var_23_int, var_567_string); // 0xcdf NEW_2
	var_568_int = 537387; // 0xce1 PushI
	SetMessage(var_568_int); // 0xce2 TObjFunc
	ClearReplies(); // 0xce4 TObjFunc
	var_569_int = 537388; // 0xce6 PushI
	var_570_int = -1; // 0xce7 PushI
	var_571_int = 39234; // 0xce8 PushI
	AddReply(var_569_int, var_570_int, var_571_int); // 0xce9 TObjFunc
	return 0; // 0xceb Return
	
Label_3308:
	var_572_int = 39229; // 0xcec PushI
	var_573_bool = var_22_int == var_572_int; // 0xced Eq
	if(var_573_bool == 0) goto Label_3331; // 0xcee JumpB
	var_574_string = ""; // 0xcef PushV
	var_574_string = "Neutral"; // 0xcf0 MovS
	func_2198(var_23_int, var_574_string); // 0xcf1 NEW_2
	var_575_int = 537383; // 0xcf3 PushI
	SetMessage(var_575_int); // 0xcf4 TObjFunc
	ClearReplies(); // 0xcf6 TObjFunc
	var_576_int = 537384; // 0xcf8 PushI
	var_577_int = -1; // 0xcf9 PushI
	var_578_int = 39230; // 0xcfa PushI
	AddReply(var_576_int, var_577_int, var_578_int); // 0xcfb TObjFunc
	var_579_int = 537385; // 0xcfd PushI
	var_580_int = -1; // 0xcfe PushI
	var_581_int = 39231; // 0xcff PushI
	AddReply(var_579_int, var_580_int, var_581_int); // 0xd00 TObjFunc
	return 0; // 0xd02 Return
	
Label_3331:
	var_582_int = 39206; // 0xd03 PushI
	var_583_bool = var_22_int == var_582_int; // 0xd04 Eq
	if(var_583_bool == 0) goto Label_3334; // 0xd05 JumpB
	
Label_3334:
	var_584_int = 39223; // 0xd06 PushI
	var_585_bool = var_22_int == var_584_int; // 0xd07 Eq
	if(var_585_bool == 0) goto Label_3352; // 0xd08 JumpB
	var_586_string = ""; // 0xd09 PushV
	var_586_string = "Neutral"; // 0xd0a MovS
	func_2198(var_23_int, var_586_string); // 0xd0b NEW_2
	var_587_int = 537377; // 0xd0d PushI
	SetMessage(var_587_int); // 0xd0e TObjFunc
	ClearReplies(); // 0xd10 TObjFunc
	var_588_int = 537378; // 0xd12 PushI
	var_589_int = -1; // 0xd13 PushI
	var_590_int = 39224; // 0xd14 PushI
	AddReply(var_588_int, var_589_int, var_590_int); // 0xd15 TObjFunc
	return 0; // 0xd17 Return
	
Label_3352:
	var_591_int = 39208; // 0xd18 PushI
	var_592_bool = var_22_int == var_591_int; // 0xd19 Eq
	if(var_592_bool == 0) goto Label_3375; // 0xd1a JumpB
	var_593_string = ""; // 0xd1b PushV
	var_593_string = "Neutral"; // 0xd1c MovS
	func_2198(var_23_int, var_593_string); // 0xd1d NEW_2
	var_594_int = 537362; // 0xd1f PushI
	SetMessage(var_594_int); // 0xd20 TObjFunc
	ClearReplies(); // 0xd22 TObjFunc
	var_595_int = 537363; // 0xd24 PushI
	var_596_int = 39210; // 0xd25 PushI
	var_597_int = 39209; // 0xd26 PushI
	AddReply(var_595_int, var_596_int, var_597_int); // 0xd27 TObjFunc
	var_598_int = 537369; // 0xd29 PushI
	var_599_int = 39216; // 0xd2a PushI
	var_600_int = 39215; // 0xd2b PushI
	AddReply(var_598_int, var_599_int, var_600_int); // 0xd2c TObjFunc
	return 0; // 0xd2e Return
	
Label_3375:
	var_601_int = 39216; // 0xd2f PushI
	var_602_bool = var_22_int == var_601_int; // 0xd30 Eq
	if(var_602_bool == 0) goto Label_3398; // 0xd31 JumpB
	var_603_string = ""; // 0xd32 PushV
	var_603_string = "Neutral"; // 0xd33 MovS
	func_2198(var_23_int, var_603_string); // 0xd34 NEW_2
	var_604_int = 537370; // 0xd36 PushI
	SetMessage(var_604_int); // 0xd37 TObjFunc
	ClearReplies(); // 0xd39 TObjFunc
	var_605_int = 537371; // 0xd3b PushI
	var_606_int = 39218; // 0xd3c PushI
	var_607_int = 39217; // 0xd3d PushI
	AddReply(var_605_int, var_606_int, var_607_int); // 0xd3e TObjFunc
	var_608_int = 537375; // 0xd40 PushI
	var_609_int = -1; // 0xd41 PushI
	var_610_int = 39221; // 0xd42 PushI
	AddReply(var_608_int, var_609_int, var_610_int); // 0xd43 TObjFunc
	return 0; // 0xd45 Return
	
Label_3398:
	var_611_int = 39218; // 0xd46 PushI
	var_612_bool = var_22_int == var_611_int; // 0xd47 Eq
	if(var_612_bool == 0) goto Label_3421; // 0xd48 JumpB
	var_613_string = ""; // 0xd49 PushV
	var_613_string = "Neutral"; // 0xd4a MovS
	func_2198(var_23_int, var_613_string); // 0xd4b NEW_2
	var_614_int = 537372; // 0xd4d PushI
	SetMessage(var_614_int); // 0xd4e TObjFunc
	ClearReplies(); // 0xd50 TObjFunc
	var_615_int = 537373; // 0xd52 PushI
	var_616_int = -1; // 0xd53 PushI
	var_617_int = 39219; // 0xd54 PushI
	AddReply(var_615_int, var_616_int, var_617_int); // 0xd55 TObjFunc
	var_618_int = 537374; // 0xd57 PushI
	var_619_int = -1; // 0xd58 PushI
	var_620_int = 39220; // 0xd59 PushI
	AddReply(var_618_int, var_619_int, var_620_int); // 0xd5a TObjFunc
	return 0; // 0xd5c Return
	
Label_3421:
	var_621_int = 39210; // 0xd5d PushI
	var_622_bool = var_22_int == var_621_int; // 0xd5e Eq
	if(var_622_bool == 0) goto Label_3439; // 0xd5f JumpB
	var_623_string = ""; // 0xd60 PushV
	var_623_string = "Neutral"; // 0xd61 MovS
	func_2198(var_23_int, var_623_string); // 0xd62 NEW_2
	var_624_int = 537364; // 0xd64 PushI
	SetMessage(var_624_int); // 0xd65 TObjFunc
	ClearReplies(); // 0xd67 TObjFunc
	var_625_int = 537365; // 0xd69 PushI
	var_626_int = 39212; // 0xd6a PushI
	var_627_int = 39211; // 0xd6b PushI
	AddReply(var_625_int, var_626_int, var_627_int); // 0xd6c TObjFunc
	return 0; // 0xd6e Return
	
Label_3439:
	var_628_int = 39212; // 0xd6f PushI
	var_629_bool = var_22_int == var_628_int; // 0xd70 Eq
	if(var_629_bool == 0) goto Label_3462; // 0xd71 JumpB
	var_630_string = ""; // 0xd72 PushV
	var_630_string = "Neutral"; // 0xd73 MovS
	func_2198(var_23_int, var_630_string); // 0xd74 NEW_2
	var_631_int = 537366; // 0xd76 PushI
	SetMessage(var_631_int); // 0xd77 TObjFunc
	ClearReplies(); // 0xd79 TObjFunc
	var_632_int = 537367; // 0xd7b PushI
	var_633_int = -1; // 0xd7c PushI
	var_634_int = 39213; // 0xd7d PushI
	AddReply(var_632_int, var_633_int, var_634_int); // 0xd7e TObjFunc
	var_635_int = 537368; // 0xd80 PushI
	var_636_int = -1; // 0xd81 PushI
	var_637_int = 39214; // 0xd82 PushI
	AddReply(var_635_int, var_636_int, var_637_int); // 0xd83 TObjFunc
	return 0; // 0xd85 Return
	
Label_3462:
	var_638_int = 39199; // 0xd86 PushI
	var_639_bool = var_22_int == var_638_int; // 0xd87 Eq
	if(var_639_bool == 0) goto Label_3485; // 0xd88 JumpB
	var_640_string = ""; // 0xd89 PushV
	var_640_string = "Neutral"; // 0xd8a MovS
	func_2198(var_23_int, var_640_string); // 0xd8b NEW_2
	var_641_int = 537353; // 0xd8d PushI
	SetMessage(var_641_int); // 0xd8e TObjFunc
	ClearReplies(); // 0xd90 TObjFunc
	var_642_int = 537354; // 0xd92 PushI
	var_643_int = 39201; // 0xd93 PushI
	var_644_int = 39200; // 0xd94 PushI
	AddReply(var_642_int, var_643_int, var_644_int); // 0xd95 TObjFunc
	var_645_int = 537358; // 0xd97 PushI
	var_646_int = -1; // 0xd98 PushI
	var_647_int = 39204; // 0xd99 PushI
	AddReply(var_645_int, var_646_int, var_647_int); // 0xd9a TObjFunc
	return 0; // 0xd9c Return
	
Label_3485:
	var_648_int = 39201; // 0xd9d PushI
	var_649_bool = var_22_int == var_648_int; // 0xd9e Eq
	if(var_649_bool == 0) goto Label_3508; // 0xd9f JumpB
	var_650_string = ""; // 0xda0 PushV
	var_650_string = "Neutral"; // 0xda1 MovS
	func_2198(var_23_int, var_650_string); // 0xda2 NEW_2
	var_651_int = 537355; // 0xda4 PushI
	SetMessage(var_651_int); // 0xda5 TObjFunc
	ClearReplies(); // 0xda7 TObjFunc
	var_652_int = 537356; // 0xda9 PushI
	var_653_int = -1; // 0xdaa PushI
	var_654_int = 39202; // 0xdab PushI
	AddReply(var_652_int, var_653_int, var_654_int); // 0xdac TObjFunc
	var_655_int = 537357; // 0xdae PushI
	var_656_int = -1; // 0xdaf PushI
	var_657_int = 39203; // 0xdb0 PushI
	AddReply(var_655_int, var_656_int, var_657_int); // 0xdb1 TObjFunc
	return 0; // 0xdb3 Return
	
Label_3508:
	var_658_int = 39176; // 0xdb4 PushI
	var_659_bool = var_22_int == var_658_int; // 0xdb5 Eq
	if(var_659_bool == 0) goto Label_3511; // 0xdb6 JumpB
	
Label_3511:
	var_660_int = 39188; // 0xdb7 PushI
	var_661_bool = var_22_int == var_660_int; // 0xdb8 Eq
	if(var_661_bool == 0) goto Label_3534; // 0xdb9 JumpB
	var_662_string = ""; // 0xdba PushV
	var_662_string = "Neutral"; // 0xdbb MovS
	func_2198(var_23_int, var_662_string); // 0xdbc NEW_2
	var_663_int = 537342; // 0xdbe PushI
	SetMessage(var_663_int); // 0xdbf TObjFunc
	ClearReplies(); // 0xdc1 TObjFunc
	var_664_int = 537343; // 0xdc3 PushI
	var_665_int = 39190; // 0xdc4 PushI
	var_666_int = 39189; // 0xdc5 PushI
	AddReply(var_664_int, var_665_int, var_666_int); // 0xdc6 TObjFunc
	var_667_int = 537349; // 0xdc8 PushI
	var_668_int = -1; // 0xdc9 PushI
	var_669_int = 39195; // 0xdca PushI
	AddReply(var_667_int, var_668_int, var_669_int); // 0xdcb TObjFunc
	return 0; // 0xdcd Return
	
Label_3534:
	var_670_int = 39190; // 0xdce PushI
	var_671_bool = var_22_int == var_670_int; // 0xdcf Eq
	if(var_671_bool == 0) goto Label_3557; // 0xdd0 JumpB
	var_672_string = ""; // 0xdd1 PushV
	var_672_string = "Neutral"; // 0xdd2 MovS
	func_2198(var_23_int, var_672_string); // 0xdd3 NEW_2
	var_673_int = 537344; // 0xdd5 PushI
	SetMessage(var_673_int); // 0xdd6 TObjFunc
	ClearReplies(); // 0xdd8 TObjFunc
	var_674_int = 537345; // 0xdda PushI
	var_675_int = 39192; // 0xddb PushI
	var_676_int = 39191; // 0xddc PushI
	AddReply(var_674_int, var_675_int, var_676_int); // 0xddd TObjFunc
	var_677_int = 537348; // 0xddf PushI
	var_678_int = -1; // 0xde0 PushI
	var_679_int = 39194; // 0xde1 PushI
	AddReply(var_677_int, var_678_int, var_679_int); // 0xde2 TObjFunc
	return 0; // 0xde4 Return
	
Label_3557:
	var_680_int = 39192; // 0xde5 PushI
	var_681_bool = var_22_int == var_680_int; // 0xde6 Eq
	if(var_681_bool == 0) goto Label_3575; // 0xde7 JumpB
	var_682_string = ""; // 0xde8 PushV
	var_682_string = "Neutral"; // 0xde9 MovS
	func_2198(var_23_int, var_682_string); // 0xdea NEW_2
	var_683_int = 537346; // 0xdec PushI
	SetMessage(var_683_int); // 0xded TObjFunc
	ClearReplies(); // 0xdef TObjFunc
	var_684_int = 537347; // 0xdf1 PushI
	var_685_int = -1; // 0xdf2 PushI
	var_686_int = 39193; // 0xdf3 PushI
	AddReply(var_684_int, var_685_int, var_686_int); // 0xdf4 TObjFunc
	return 0; // 0xdf6 Return
	
Label_3575:
	var_687_int = 39178; // 0xdf7 PushI
	var_688_bool = var_22_int == var_687_int; // 0xdf8 Eq
	if(var_688_bool == 0) goto Label_3598; // 0xdf9 JumpB
	var_689_string = ""; // 0xdfa PushV
	var_689_string = "Neutral"; // 0xdfb MovS
	func_2198(var_23_int, var_689_string); // 0xdfc NEW_2
	var_690_int = 537332; // 0xdfe PushI
	SetMessage(var_690_int); // 0xdff TObjFunc
	ClearReplies(); // 0xe01 TObjFunc
	var_691_int = 537333; // 0xe03 PushI
	var_692_int = 39180; // 0xe04 PushI
	var_693_int = 39179; // 0xe05 PushI
	AddReply(var_691_int, var_692_int, var_693_int); // 0xe06 TObjFunc
	var_694_int = 537336; // 0xe08 PushI
	var_695_int = 39183; // 0xe09 PushI
	var_696_int = 39182; // 0xe0a PushI
	AddReply(var_694_int, var_695_int, var_696_int); // 0xe0b TObjFunc
	return 0; // 0xe0d Return
	
Label_3598:
	var_697_int = 39183; // 0xe0e PushI
	var_698_bool = var_22_int == var_697_int; // 0xe0f Eq
	if(var_698_bool == 0) goto Label_3616; // 0xe10 JumpB
	var_699_string = ""; // 0xe11 PushV
	var_699_string = "Neutral"; // 0xe12 MovS
	func_2198(var_23_int, var_699_string); // 0xe13 NEW_2
	var_700_int = 537337; // 0xe15 PushI
	SetMessage(var_700_int); // 0xe16 TObjFunc
	ClearReplies(); // 0xe18 TObjFunc
	var_701_int = 537338; // 0xe1a PushI
	var_702_int = 39185; // 0xe1b PushI
	var_703_int = 39184; // 0xe1c PushI
	AddReply(var_701_int, var_702_int, var_703_int); // 0xe1d TObjFunc
	return 0; // 0xe1f Return
	
Label_3616:
	var_704_int = 39185; // 0xe20 PushI
	var_705_bool = var_22_int == var_704_int; // 0xe21 Eq
	if(var_705_bool == 0) goto Label_3634; // 0xe22 JumpB
	var_706_string = ""; // 0xe23 PushV
	var_706_string = "Neutral"; // 0xe24 MovS
	func_2198(var_23_int, var_706_string); // 0xe25 NEW_2
	var_707_int = 537339; // 0xe27 PushI
	SetMessage(var_707_int); // 0xe28 TObjFunc
	ClearReplies(); // 0xe2a TObjFunc
	var_708_int = 537340; // 0xe2c PushI
	var_709_int = 43752; // 0xe2d PushI
	var_710_int = 39186; // 0xe2e PushI
	AddReply(var_708_int, var_709_int, var_710_int); // 0xe2f TObjFunc
	return 0; // 0xe31 Return
	
Label_3634:
	var_711_int = 43752; // 0xe32 PushI
	var_712_bool = var_22_int == var_711_int; // 0xe33 Eq
	if(var_712_bool == 0) goto Label_3652; // 0xe34 JumpB
	var_713_string = ""; // 0xe35 PushV
	var_713_string = "Neutral"; // 0xe36 MovS
	func_2198(var_23_int, var_713_string); // 0xe37 NEW_2
	var_714_int = 541583; // 0xe39 PushI
	SetMessage(var_714_int); // 0xe3a TObjFunc
	ClearReplies(); // 0xe3c TObjFunc
	var_715_int = 541584; // 0xe3e PushI
	var_716_int = -1; // 0xe3f PushI
	var_717_int = 43753; // 0xe40 PushI
	AddReply(var_715_int, var_716_int, var_717_int); // 0xe41 TObjFunc
	return 0; // 0xe43 Return
	
Label_3652:
	var_718_int = 39180; // 0xe44 PushI
	var_719_bool = var_22_int == var_718_int; // 0xe45 Eq
	if(var_719_bool == 0) goto Label_3670; // 0xe46 JumpB
	var_720_string = ""; // 0xe47 PushV
	var_720_string = "Neutral"; // 0xe48 MovS
	func_2198(var_23_int, var_720_string); // 0xe49 NEW_2
	var_721_int = 537334; // 0xe4b PushI
	SetMessage(var_721_int); // 0xe4c TObjFunc
	ClearReplies(); // 0xe4e TObjFunc
	var_722_int = 537335; // 0xe50 PushI
	var_723_int = -1; // 0xe51 PushI
	var_724_int = 39181; // 0xe52 PushI
	AddReply(var_722_int, var_723_int, var_724_int); // 0xe53 TObjFunc
	return 0; // 0xe55 Return
	
Label_3670:
	var_725_int = 39122; // 0xe56 PushI
	var_726_bool = var_22_int == var_725_int; // 0xe57 Eq
	if(var_726_bool == 0) goto Label_3673; // 0xe58 JumpB
	
Label_3673:
	var_727_int = 39151; // 0xe59 PushI
	var_728_bool = var_22_int == var_727_int; // 0xe5a Eq
	if(var_728_bool == 0) goto Label_3696; // 0xe5b JumpB
	var_729_string = ""; // 0xe5c PushV
	var_729_string = "Neutral"; // 0xe5d MovS
	func_2198(var_23_int, var_729_string); // 0xe5e NEW_2
	var_730_int = 537305; // 0xe60 PushI
	SetMessage(var_730_int); // 0xe61 TObjFunc
	ClearReplies(); // 0xe63 TObjFunc
	var_731_int = 537306; // 0xe65 PushI
	var_732_int = 39153; // 0xe66 PushI
	var_733_int = 39152; // 0xe67 PushI
	AddReply(var_731_int, var_732_int, var_733_int); // 0xe68 TObjFunc
	var_734_int = 537318; // 0xe6a PushI
	var_735_int = 39165; // 0xe6b PushI
	var_736_int = 39164; // 0xe6c PushI
	AddReply(var_734_int, var_735_int, var_736_int); // 0xe6d TObjFunc
	return 0; // 0xe6f Return
	
Label_3696:
	var_737_int = 39165; // 0xe70 PushI
	var_738_bool = var_22_int == var_737_int; // 0xe71 Eq
	if(var_738_bool == 0) goto Label_3719; // 0xe72 JumpB
	var_739_string = ""; // 0xe73 PushV
	var_739_string = "Neutral"; // 0xe74 MovS
	func_2198(var_23_int, var_739_string); // 0xe75 NEW_2
	var_740_int = 537319; // 0xe77 PushI
	SetMessage(var_740_int); // 0xe78 TObjFunc
	ClearReplies(); // 0xe7a TObjFunc
	var_741_int = 537320; // 0xe7c PushI
	var_742_int = -1; // 0xe7d PushI
	var_743_int = 39166; // 0xe7e PushI
	AddReply(var_741_int, var_742_int, var_743_int); // 0xe7f TObjFunc
	var_744_int = 537321; // 0xe81 PushI
	var_745_int = 39168; // 0xe82 PushI
	var_746_int = 39167; // 0xe83 PushI
	AddReply(var_744_int, var_745_int, var_746_int); // 0xe84 TObjFunc
	return 0; // 0xe86 Return
	
Label_3719:
	var_747_int = 39168; // 0xe87 PushI
	var_748_bool = var_22_int == var_747_int; // 0xe88 Eq
	if(var_748_bool == 0) goto Label_3742; // 0xe89 JumpB
	var_749_string = ""; // 0xe8a PushV
	var_749_string = "Neutral"; // 0xe8b MovS
	func_2198(var_23_int, var_749_string); // 0xe8c NEW_2
	var_750_int = 537322; // 0xe8e PushI
	SetMessage(var_750_int); // 0xe8f TObjFunc
	ClearReplies(); // 0xe91 TObjFunc
	var_751_int = 537323; // 0xe93 PushI
	var_752_int = -1; // 0xe94 PushI
	var_753_int = 39169; // 0xe95 PushI
	AddReply(var_751_int, var_752_int, var_753_int); // 0xe96 TObjFunc
	var_754_int = 537324; // 0xe98 PushI
	var_755_int = 39171; // 0xe99 PushI
	var_756_int = 39170; // 0xe9a PushI
	AddReply(var_754_int, var_755_int, var_756_int); // 0xe9b TObjFunc
	return 0; // 0xe9d Return
	
Label_3742:
	var_757_int = 39171; // 0xe9e PushI
	var_758_bool = var_22_int == var_757_int; // 0xe9f Eq
	if(var_758_bool == 0) goto Label_3760; // 0xea0 JumpB
	var_759_string = ""; // 0xea1 PushV
	var_759_string = "Neutral"; // 0xea2 MovS
	func_2198(var_23_int, var_759_string); // 0xea3 NEW_2
	var_760_int = 537325; // 0xea5 PushI
	SetMessage(var_760_int); // 0xea6 TObjFunc
	ClearReplies(); // 0xea8 TObjFunc
	var_761_int = 537326; // 0xeaa PushI
	var_762_int = -1; // 0xeab PushI
	var_763_int = 39172; // 0xeac PushI
	AddReply(var_761_int, var_762_int, var_763_int); // 0xead TObjFunc
	return 0; // 0xeaf Return
	
Label_3760:
	var_764_int = 39153; // 0xeb0 PushI
	var_765_bool = var_22_int == var_764_int; // 0xeb1 Eq
	if(var_765_bool == 0) goto Label_3783; // 0xeb2 JumpB
	var_766_string = ""; // 0xeb3 PushV
	var_766_string = "Neutral"; // 0xeb4 MovS
	func_2198(var_23_int, var_766_string); // 0xeb5 NEW_2
	var_767_int = 537307; // 0xeb7 PushI
	SetMessage(var_767_int); // 0xeb8 TObjFunc
	ClearReplies(); // 0xeba TObjFunc
	var_768_int = 537308; // 0xebc PushI
	var_769_int = 39155; // 0xebd PushI
	var_770_int = 39154; // 0xebe PushI
	AddReply(var_768_int, var_769_int, var_770_int); // 0xebf TObjFunc
	var_771_int = 537317; // 0xec1 PushI
	var_772_int = -1; // 0xec2 PushI
	var_773_int = 39163; // 0xec3 PushI
	AddReply(var_771_int, var_772_int, var_773_int); // 0xec4 TObjFunc
	return 0; // 0xec6 Return
	
Label_3783:
	var_774_int = 39155; // 0xec7 PushI
	var_775_bool = var_22_int == var_774_int; // 0xec8 Eq
	if(var_775_bool == 0) goto Label_3806; // 0xec9 JumpB
	var_776_string = ""; // 0xeca PushV
	var_776_string = "Neutral"; // 0xecb MovS
	func_2198(var_23_int, var_776_string); // 0xecc NEW_2
	var_777_int = 537309; // 0xece PushI
	SetMessage(var_777_int); // 0xecf TObjFunc
	ClearReplies(); // 0xed1 TObjFunc
	var_778_int = 537310; // 0xed3 PushI
	var_779_int = 39157; // 0xed4 PushI
	var_780_int = 39156; // 0xed5 PushI
	AddReply(var_778_int, var_779_int, var_780_int); // 0xed6 TObjFunc
	var_781_int = 537313; // 0xed8 PushI
	var_782_int = 39160; // 0xed9 PushI
	var_783_int = 39159; // 0xeda PushI
	AddReply(var_781_int, var_782_int, var_783_int); // 0xedb TObjFunc
	return 0; // 0xedd Return
	
Label_3806:
	var_784_int = 39160; // 0xede PushI
	var_785_bool = var_22_int == var_784_int; // 0xedf Eq
	if(var_785_bool == 0) goto Label_3829; // 0xee0 JumpB
	var_786_string = ""; // 0xee1 PushV
	var_786_string = "Neutral"; // 0xee2 MovS
	func_2198(var_23_int, var_786_string); // 0xee3 NEW_2
	var_787_int = 537314; // 0xee5 PushI
	SetMessage(var_787_int); // 0xee6 TObjFunc
	ClearReplies(); // 0xee8 TObjFunc
	var_788_int = 537315; // 0xeea PushI
	var_789_int = -1; // 0xeeb PushI
	var_790_int = 39161; // 0xeec PushI
	AddReply(var_788_int, var_789_int, var_790_int); // 0xeed TObjFunc
	var_791_int = 537316; // 0xeef PushI
	var_792_int = -1; // 0xef0 PushI
	var_793_int = 39162; // 0xef1 PushI
	AddReply(var_791_int, var_792_int, var_793_int); // 0xef2 TObjFunc
	return 0; // 0xef4 Return
	
Label_3829:
	var_794_int = 39157; // 0xef5 PushI
	var_795_bool = var_22_int == var_794_int; // 0xef6 Eq
	if(var_795_bool == 0) goto Label_3847; // 0xef7 JumpB
	var_796_string = ""; // 0xef8 PushV
	var_796_string = "Neutral"; // 0xef9 MovS
	func_2198(var_23_int, var_796_string); // 0xefa NEW_2
	var_797_int = 537311; // 0xefc PushI
	SetMessage(var_797_int); // 0xefd TObjFunc
	ClearReplies(); // 0xeff TObjFunc
	var_798_int = 537312; // 0xf01 PushI
	var_799_int = -1; // 0xf02 PushI
	var_800_int = 39158; // 0xf03 PushI
	AddReply(var_798_int, var_799_int, var_800_int); // 0xf04 TObjFunc
	return 0; // 0xf06 Return
	
Label_3847:
	var_801_int = 39140; // 0xf07 PushI
	var_802_bool = var_22_int == var_801_int; // 0xf08 Eq
	if(var_802_bool == 0) goto Label_3870; // 0xf09 JumpB
	var_803_string = ""; // 0xf0a PushV
	var_803_string = "Neutral"; // 0xf0b MovS
	func_2198(var_23_int, var_803_string); // 0xf0c NEW_2
	var_804_int = 537294; // 0xf0e PushI
	SetMessage(var_804_int); // 0xf0f TObjFunc
	ClearReplies(); // 0xf11 TObjFunc
	var_805_int = 537295; // 0xf13 PushI
	var_806_int = 39142; // 0xf14 PushI
	var_807_int = 39141; // 0xf15 PushI
	AddReply(var_805_int, var_806_int, var_807_int); // 0xf16 TObjFunc
	var_808_int = 537301; // 0xf18 PushI
	var_809_int = 39148; // 0xf19 PushI
	var_810_int = 39147; // 0xf1a PushI
	AddReply(var_808_int, var_809_int, var_810_int); // 0xf1b TObjFunc
	return 0; // 0xf1d Return
	
Label_3870:
	var_811_int = 39148; // 0xf1e PushI
	var_812_bool = var_22_int == var_811_int; // 0xf1f Eq
	if(var_812_bool == 0) goto Label_3888; // 0xf20 JumpB
	var_813_string = ""; // 0xf21 PushV
	var_813_string = "Neutral"; // 0xf22 MovS
	func_2198(var_23_int, var_813_string); // 0xf23 NEW_2
	var_814_int = 537302; // 0xf25 PushI
	SetMessage(var_814_int); // 0xf26 TObjFunc
	ClearReplies(); // 0xf28 TObjFunc
	var_815_int = 537303; // 0xf2a PushI
	var_816_int = -1; // 0xf2b PushI
	var_817_int = 39149; // 0xf2c PushI
	AddReply(var_815_int, var_816_int, var_817_int); // 0xf2d TObjFunc
	return 0; // 0xf2f Return
	
Label_3888:
	var_818_int = 39142; // 0xf30 PushI
	var_819_bool = var_22_int == var_818_int; // 0xf31 Eq
	if(var_819_bool == 0) goto Label_3906; // 0xf32 JumpB
	var_820_string = ""; // 0xf33 PushV
	var_820_string = "Neutral"; // 0xf34 MovS
	func_2198(var_23_int, var_820_string); // 0xf35 NEW_2
	var_821_int = 537296; // 0xf37 PushI
	SetMessage(var_821_int); // 0xf38 TObjFunc
	ClearReplies(); // 0xf3a TObjFunc
	var_822_int = 537297; // 0xf3c PushI
	var_823_int = 39144; // 0xf3d PushI
	var_824_int = 39143; // 0xf3e PushI
	AddReply(var_822_int, var_823_int, var_824_int); // 0xf3f TObjFunc
	return 0; // 0xf41 Return
	
Label_3906:
	var_825_int = 39144; // 0xf42 PushI
	var_826_bool = var_22_int == var_825_int; // 0xf43 Eq
	if(var_826_bool == 0) goto Label_3929; // 0xf44 JumpB
	var_827_string = ""; // 0xf45 PushV
	var_827_string = "Neutral"; // 0xf46 MovS
	func_2198(var_23_int, var_827_string); // 0xf47 NEW_2
	var_828_int = 537298; // 0xf49 PushI
	SetMessage(var_828_int); // 0xf4a TObjFunc
	ClearReplies(); // 0xf4c TObjFunc
	var_829_int = 537299; // 0xf4e PushI
	var_830_int = -1; // 0xf4f PushI
	var_831_int = 39145; // 0xf50 PushI
	AddReply(var_829_int, var_830_int, var_831_int); // 0xf51 TObjFunc
	var_832_int = 537300; // 0xf53 PushI
	var_833_int = -1; // 0xf54 PushI
	var_834_int = 39146; // 0xf55 PushI
	AddReply(var_832_int, var_833_int, var_834_int); // 0xf56 TObjFunc
	return 0; // 0xf58 Return
	
Label_3929:
	var_835_int = 39124; // 0xf59 PushI
	var_836_bool = var_22_int == var_835_int; // 0xf5a Eq
	if(var_836_bool == 0) goto Label_3952; // 0xf5b JumpB
	var_837_string = ""; // 0xf5c PushV
	var_837_string = "Neutral"; // 0xf5d MovS
	func_2198(var_23_int, var_837_string); // 0xf5e NEW_2
	var_838_int = 537280; // 0xf60 PushI
	SetMessage(var_838_int); // 0xf61 TObjFunc
	ClearReplies(); // 0xf63 TObjFunc
	var_839_int = 537281; // 0xf65 PushI
	var_840_int = 39126; // 0xf66 PushI
	var_841_int = 39125; // 0xf67 PushI
	AddReply(var_839_int, var_840_int, var_841_int); // 0xf68 TObjFunc
	var_842_int = 537288; // 0xf6a PushI
	var_843_int = 39133; // 0xf6b PushI
	var_844_int = 39132; // 0xf6c PushI
	AddReply(var_842_int, var_843_int, var_844_int); // 0xf6d TObjFunc
	return 0; // 0xf6f Return
	
Label_3952:
	var_845_int = 39133; // 0xf70 PushI
	var_846_bool = var_22_int == var_845_int; // 0xf71 Eq
	if(var_846_bool == 0) goto Label_3975; // 0xf72 JumpB
	var_847_string = ""; // 0xf73 PushV
	var_847_string = "Neutral"; // 0xf74 MovS
	func_2198(var_23_int, var_847_string); // 0xf75 NEW_2
	var_848_int = 537289; // 0xf77 PushI
	SetMessage(var_848_int); // 0xf78 TObjFunc
	ClearReplies(); // 0xf7a TObjFunc
	var_849_int = 537290; // 0xf7c PushI
	var_850_int = 39126; // 0xf7d PushI
	var_851_int = 39134; // 0xf7e PushI
	AddReply(var_849_int, var_850_int, var_851_int); // 0xf7f TObjFunc
	var_852_int = 537291; // 0xf81 PushI
	var_853_int = -1; // 0xf82 PushI
	var_854_int = 39136; // 0xf83 PushI
	AddReply(var_852_int, var_853_int, var_854_int); // 0xf84 TObjFunc
	return 0; // 0xf86 Return
	
Label_3975:
	var_855_int = 39126; // 0xf87 PushI
	var_856_bool = var_22_int == var_855_int; // 0xf88 Eq
	if(var_856_bool == 0) goto Label_3998; // 0xf89 JumpB
	var_857_string = ""; // 0xf8a PushV
	var_857_string = "Neutral"; // 0xf8b MovS
	func_2198(var_23_int, var_857_string); // 0xf8c NEW_2
	var_858_int = 537282; // 0xf8e PushI
	SetMessage(var_858_int); // 0xf8f TObjFunc
	ClearReplies(); // 0xf91 TObjFunc
	var_859_int = 537283; // 0xf93 PushI
	var_860_int = 39128; // 0xf94 PushI
	var_861_int = 39127; // 0xf95 PushI
	AddReply(var_859_int, var_860_int, var_861_int); // 0xf96 TObjFunc
	var_862_int = 537287; // 0xf98 PushI
	var_863_int = -1; // 0xf99 PushI
	var_864_int = 39131; // 0xf9a PushI
	AddReply(var_862_int, var_863_int, var_864_int); // 0xf9b TObjFunc
	return 0; // 0xf9d Return
	
Label_3998:
	var_865_int = 39128; // 0xf9e PushI
	var_866_bool = var_22_int == var_865_int; // 0xf9f Eq
	if(var_866_bool == 0) goto Label_4021; // 0xfa0 JumpB
	var_867_string = ""; // 0xfa1 PushV
	var_867_string = "Neutral"; // 0xfa2 MovS
	func_2198(var_23_int, var_867_string); // 0xfa3 NEW_2
	var_868_int = 537284; // 0xfa5 PushI
	SetMessage(var_868_int); // 0xfa6 TObjFunc
	ClearReplies(); // 0xfa8 TObjFunc
	var_869_int = 537285; // 0xfaa PushI
	var_870_int = -1; // 0xfab PushI
	var_871_int = 39129; // 0xfac PushI
	AddReply(var_869_int, var_870_int, var_871_int); // 0xfad TObjFunc
	var_872_int = 537286; // 0xfaf PushI
	var_873_int = -1; // 0xfb0 PushI
	var_874_int = 39130; // 0xfb1 PushI
	AddReply(var_872_int, var_873_int, var_874_int); // 0xfb2 TObjFunc
	return 0; // 0xfb4 Return
	
Label_4021:
	var_875_int = 39086; // 0xfb5 PushI
	var_876_bool = var_22_int == var_875_int; // 0xfb6 Eq
	if(var_876_bool == 0) goto Label_4059; // 0xfb7 JumpB
	var_877_string = ""; // 0xfb8 PushV
	var_877_string = "Neutral"; // 0xfb9 MovS
	func_2198(var_23_int, var_877_string); // 0xfba NEW_2
	var_878_int = 537243; // 0xfbc PushI
	SetMessage(var_878_int); // 0xfbd TObjFunc
	ClearReplies(); // 0xfbf TObjFunc
	var_879_int = 537244; // 0xfc1 PushI
	var_880_int = 39088; // 0xfc2 PushI
	var_881_int = 39087; // 0xfc3 PushI
	AddReply(var_879_int, var_880_int, var_881_int); // 0xfc4 TObjFunc
	var_882_int = 537254; // 0xfc6 PushI
	var_883_int = 39099; // 0xfc7 PushI
	var_884_int = 39098; // 0xfc8 PushI
	AddReply(var_882_int, var_883_int, var_884_int); // 0xfc9 TObjFunc
	var_885_int = 537264; // 0xfcb PushI
	var_886_int = 39109; // 0xfcc PushI
	var_887_int = 39108; // 0xfcd PushI
	AddReply(var_885_int, var_886_int, var_887_int); // 0xfce TObjFunc
	var_888_int = 537275; // 0xfd0 PushI
	var_889_int = -1; // 0xfd1 PushI
	var_890_int = 39119; // 0xfd2 PushI
	AddReply(var_888_int, var_889_int, var_890_int); // 0xfd3 TObjFunc
	var_891_int = 537276; // 0xfd5 PushI
	var_892_int = -1; // 0xfd6 PushI
	var_893_int = 39120; // 0xfd7 PushI
	AddReply(var_891_int, var_892_int, var_893_int); // 0xfd8 TObjFunc
	return 0; // 0xfda Return
	
Label_4059:
	var_894_int = 39109; // 0xfdb PushI
	var_895_bool = var_22_int == var_894_int; // 0xfdc Eq
	if(var_895_bool == 0) goto Label_4082; // 0xfdd JumpB
	var_896_string = ""; // 0xfde PushV
	var_896_string = "Neutral"; // 0xfdf MovS
	func_2198(var_23_int, var_896_string); // 0xfe0 NEW_2
	var_897_int = 537265; // 0xfe2 PushI
	SetMessage(var_897_int); // 0xfe3 TObjFunc
	ClearReplies(); // 0xfe5 TObjFunc
	var_898_int = 537266; // 0xfe7 PushI
	var_899_int = 44319; // 0xfe8 PushI
	var_900_int = 39110; // 0xfe9 PushI
	AddReply(var_898_int, var_899_int, var_900_int); // 0xfea TObjFunc
	var_901_int = 537267; // 0xfec PushI
	var_902_int = 39112; // 0xfed PushI
	var_903_int = 39111; // 0xfee PushI
	AddReply(var_901_int, var_902_int, var_903_int); // 0xfef TObjFunc
	return 0; // 0xff1 Return
	
Label_4082:
	var_904_int = 39112; // 0xff2 PushI
	var_905_bool = var_22_int == var_904_int; // 0xff3 Eq
	if(var_905_bool == 0) goto Label_4105; // 0xff4 JumpB
	var_906_string = ""; // 0xff5 PushV
	var_906_string = "Neutral"; // 0xff6 MovS
	func_2198(var_23_int, var_906_string); // 0xff7 NEW_2
	var_907_int = 537268; // 0xff9 PushI
	SetMessage(var_907_int); // 0xffa TObjFunc
	ClearReplies(); // 0xffc TObjFunc
	var_908_int = 537269; // 0xffe PushI
	var_909_int = 39114; // 0xfff PushI
	var_910_int = 39113; // 0x1000 PushI
	AddReply(var_908_int, var_909_int, var_910_int); // 0x1001 TObjFunc
	var_911_int = 537273; // 0x1003 PushI
	var_912_int = -1; // 0x1004 PushI
	var_913_int = 39117; // 0x1005 PushI
	AddReply(var_911_int, var_912_int, var_913_int); // 0x1006 TObjFunc
	return 0; // 0x1008 Return
	
Label_4105:
	var_914_int = 39114; // 0x1009 PushI
	var_915_bool = var_22_int == var_914_int; // 0x100a Eq
	if(var_915_bool == 0) goto Label_4128; // 0x100b JumpB
	var_916_string = ""; // 0x100c PushV
	var_916_string = "Neutral"; // 0x100d MovS
	func_2198(var_23_int, var_916_string); // 0x100e NEW_2
	var_917_int = 537270; // 0x1010 PushI
	SetMessage(var_917_int); // 0x1011 TObjFunc
	ClearReplies(); // 0x1013 TObjFunc
	var_918_int = 537271; // 0x1015 PushI
	var_919_int = -1; // 0x1016 PushI
	var_920_int = 39115; // 0x1017 PushI
	AddReply(var_918_int, var_919_int, var_920_int); // 0x1018 TObjFunc
	var_921_int = 537272; // 0x101a PushI
	var_922_int = -1; // 0x101b PushI
	var_923_int = 39116; // 0x101c PushI
	AddReply(var_921_int, var_922_int, var_923_int); // 0x101d TObjFunc
	return 0; // 0x101f Return
	
Label_4128:
	var_924_int = 44319; // 0x1020 PushI
	var_925_bool = var_22_int == var_924_int; // 0x1021 Eq
	if(var_925_bool == 0) goto Label_4151; // 0x1022 JumpB
	var_926_string = ""; // 0x1023 PushV
	var_926_string = "Neutral"; // 0x1024 MovS
	func_2198(var_23_int, var_926_string); // 0x1025 NEW_2
	var_927_int = 542040; // 0x1027 PushI
	SetMessage(var_927_int); // 0x1028 TObjFunc
	ClearReplies(); // 0x102a TObjFunc
	var_928_int = 542041; // 0x102c PushI
	var_929_int = -1; // 0x102d PushI
	var_930_int = 44320; // 0x102e PushI
	AddReply(var_928_int, var_929_int, var_930_int); // 0x102f TObjFunc
	var_931_int = 542042; // 0x1031 PushI
	var_932_int = -1; // 0x1032 PushI
	var_933_int = 44321; // 0x1033 PushI
	AddReply(var_931_int, var_932_int, var_933_int); // 0x1034 TObjFunc
	return 0; // 0x1036 Return
	
Label_4151:
	var_934_int = 39099; // 0x1037 PushI
	var_935_bool = var_22_int == var_934_int; // 0x1038 Eq
	if(var_935_bool == 0) goto Label_4174; // 0x1039 JumpB
	var_936_string = ""; // 0x103a PushV
	var_936_string = "Neutral"; // 0x103b MovS
	func_2198(var_23_int, var_936_string); // 0x103c NEW_2
	var_937_int = 537255; // 0x103e PushI
	SetMessage(var_937_int); // 0x103f TObjFunc
	ClearReplies(); // 0x1041 TObjFunc
	var_938_int = 537256; // 0x1043 PushI
	var_939_int = 39101; // 0x1044 PushI
	var_940_int = 39100; // 0x1045 PushI
	AddReply(var_938_int, var_939_int, var_940_int); // 0x1046 TObjFunc
	var_941_int = 537260; // 0x1048 PushI
	var_942_int = 39105; // 0x1049 PushI
	var_943_int = 39104; // 0x104a PushI
	AddReply(var_941_int, var_942_int, var_943_int); // 0x104b TObjFunc
	return 0; // 0x104d Return
	
Label_4174:
	var_944_int = 39105; // 0x104e PushI
	var_945_bool = var_22_int == var_944_int; // 0x104f Eq
	if(var_945_bool == 0) goto Label_4197; // 0x1050 JumpB
	var_946_string = ""; // 0x1051 PushV
	var_946_string = "Neutral"; // 0x1052 MovS
	func_2198(var_23_int, var_946_string); // 0x1053 NEW_2
	var_947_int = 537261; // 0x1055 PushI
	SetMessage(var_947_int); // 0x1056 TObjFunc
	ClearReplies(); // 0x1058 TObjFunc
	var_948_int = 537262; // 0x105a PushI
	var_949_int = -1; // 0x105b PushI
	var_950_int = 39106; // 0x105c PushI
	AddReply(var_948_int, var_949_int, var_950_int); // 0x105d TObjFunc
	var_951_int = 537263; // 0x105f PushI
	var_952_int = -1; // 0x1060 PushI
	var_953_int = 39107; // 0x1061 PushI
	AddReply(var_951_int, var_952_int, var_953_int); // 0x1062 TObjFunc
	return 0; // 0x1064 Return
	
Label_4197:
	var_954_int = 39101; // 0x1065 PushI
	var_955_bool = var_22_int == var_954_int; // 0x1066 Eq
	if(var_955_bool == 0) goto Label_4220; // 0x1067 JumpB
	var_956_string = ""; // 0x1068 PushV
	var_956_string = "Neutral"; // 0x1069 MovS
	func_2198(var_23_int, var_956_string); // 0x106a NEW_2
	var_957_int = 537257; // 0x106c PushI
	SetMessage(var_957_int); // 0x106d TObjFunc
	ClearReplies(); // 0x106f TObjFunc
	var_958_int = 537258; // 0x1071 PushI
	var_959_int = -1; // 0x1072 PushI
	var_960_int = 39102; // 0x1073 PushI
	AddReply(var_958_int, var_959_int, var_960_int); // 0x1074 TObjFunc
	var_961_int = 537259; // 0x1076 PushI
	var_962_int = -1; // 0x1077 PushI
	var_963_int = 39103; // 0x1078 PushI
	AddReply(var_961_int, var_962_int, var_963_int); // 0x1079 TObjFunc
	return 0; // 0x107b Return
	
Label_4220:
	var_964_int = 39088; // 0x107c PushI
	var_965_bool = var_22_int == var_964_int; // 0x107d Eq
	if(var_965_bool == 0) goto Label_4243; // 0x107e JumpB
	var_966_string = ""; // 0x107f PushV
	var_966_string = "Neutral"; // 0x1080 MovS
	func_2198(var_23_int, var_966_string); // 0x1081 NEW_2
	var_967_int = 537245; // 0x1083 PushI
	SetMessage(var_967_int); // 0x1084 TObjFunc
	ClearReplies(); // 0x1086 TObjFunc
	var_968_int = 537246; // 0x1088 PushI
	var_969_int = 39090; // 0x1089 PushI
	var_970_int = 39089; // 0x108a PushI
	AddReply(var_968_int, var_969_int, var_970_int); // 0x108b TObjFunc
	var_971_int = 537253; // 0x108d PushI
	var_972_int = 39090; // 0x108e PushI
	var_973_int = 39096; // 0x108f PushI
	AddReply(var_971_int, var_972_int, var_973_int); // 0x1090 TObjFunc
	return 0; // 0x1092 Return
	
Label_4243:
	var_974_int = 39090; // 0x1093 PushI
	var_975_bool = var_22_int == var_974_int; // 0x1094 Eq
	if(var_975_bool == 0) goto Label_4266; // 0x1095 JumpB
	var_976_string = ""; // 0x1096 PushV
	var_976_string = "Neutral"; // 0x1097 MovS
	func_2198(var_23_int, var_976_string); // 0x1098 NEW_2
	var_977_int = 537247; // 0x109a PushI
	SetMessage(var_977_int); // 0x109b TObjFunc
	ClearReplies(); // 0x109d TObjFunc
	var_978_int = 537248; // 0x109f PushI
	var_979_int = 39092; // 0x10a0 PushI
	var_980_int = 39091; // 0x10a1 PushI
	AddReply(var_978_int, var_979_int, var_980_int); // 0x10a2 TObjFunc
	var_981_int = 537252; // 0x10a4 PushI
	var_982_int = -1; // 0x10a5 PushI
	var_983_int = 39095; // 0x10a6 PushI
	AddReply(var_981_int, var_982_int, var_983_int); // 0x10a7 TObjFunc
	return 0; // 0x10a9 Return
	
Label_4266:
	var_984_int = 39092; // 0x10aa PushI
	var_985_bool = var_22_int == var_984_int; // 0x10ab Eq
	if(var_985_bool == 0) goto Label_4289; // 0x10ac JumpB
	var_986_string = ""; // 0x10ad PushV
	var_986_string = "Neutral"; // 0x10ae MovS
	func_2198(var_23_int, var_986_string); // 0x10af NEW_2
	var_987_int = 537249; // 0x10b1 PushI
	SetMessage(var_987_int); // 0x10b2 TObjFunc
	ClearReplies(); // 0x10b4 TObjFunc
	var_988_int = 537250; // 0x10b6 PushI
	var_989_int = -1; // 0x10b7 PushI
	var_990_int = 39093; // 0x10b8 PushI
	AddReply(var_988_int, var_989_int, var_990_int); // 0x10b9 TObjFunc
	var_991_int = 537251; // 0x10bb PushI
	var_992_int = -1; // 0x10bc PushI
	var_993_int = 39094; // 0x10bd PushI
	AddReply(var_991_int, var_992_int, var_993_int); // 0x10be TObjFunc
	return 0; // 0x10c0 Return
	
Label_4289:
	var_994_int = 45672; // 0x10c1 PushI
	var_995_bool = var_22_int == var_994_int; // 0x10c2 Eq
	if(var_995_bool == 0) goto Label_4292; // 0x10c3 JumpB
	
Label_4292:
	var_996_int = 45678; // 0x10c4 PushI
	var_997_bool = var_22_int == var_996_int; // 0x10c5 Eq
	if(var_997_bool == 0) goto Label_4315; // 0x10c6 JumpB
	var_998_string = ""; // 0x10c7 PushV
	var_998_string = "Neutral"; // 0x10c8 MovS
	func_2198(var_23_int, var_998_string); // 0x10c9 NEW_2
	var_999_int = 543222; // 0x10cb PushI
	SetMessage(var_999_int); // 0x10cc TObjFunc
	ClearReplies(); // 0x10ce TObjFunc
	var_1000_int = 543223; // 0x10d0 PushI
	var_1001_int = -1; // 0x10d1 PushI
	var_1002_int = 45679; // 0x10d2 PushI
	AddReply(var_1000_int, var_1001_int, var_1002_int); // 0x10d3 TObjFunc
	var_1003_int = 543225; // 0x10d5 PushI
	var_1004_int = 45682; // 0x10d6 PushI
	var_1005_int = 45681; // 0x10d7 PushI
	AddReply(var_1003_int, var_1004_int, var_1005_int); // 0x10d8 TObjFunc
	return 0; // 0x10da Return
	
Label_4315:
	var_1006_int = 45682; // 0x10db PushI
	var_1007_bool = var_22_int == var_1006_int; // 0x10dc Eq
	if(var_1007_bool == 0) goto Label_4338; // 0x10dd JumpB
	var_1008_string = ""; // 0x10de PushV
	var_1008_string = "Neutral"; // 0x10df MovS
	func_2198(var_23_int, var_1008_string); // 0x10e0 NEW_2
	var_1009_int = 543226; // 0x10e2 PushI
	SetMessage(var_1009_int); // 0x10e3 TObjFunc
	ClearReplies(); // 0x10e5 TObjFunc
	var_1010_int = 543227; // 0x10e7 PushI
	var_1011_int = -1; // 0x10e8 PushI
	var_1012_int = 45683; // 0x10e9 PushI
	AddReply(var_1010_int, var_1011_int, var_1012_int); // 0x10ea TObjFunc
	var_1013_int = 543228; // 0x10ec PushI
	var_1014_int = 45686; // 0x10ed PushI
	var_1015_int = 45684; // 0x10ee PushI
	AddReply(var_1013_int, var_1014_int, var_1015_int); // 0x10ef TObjFunc
	return 0; // 0x10f1 Return
	
Label_4338:
	var_1016_int = 45686; // 0x10f2 PushI
	var_1017_bool = var_22_int == var_1016_int; // 0x10f3 Eq
	if(var_1017_bool == 0) goto Label_4361; // 0x10f4 JumpB
	var_1018_string = ""; // 0x10f5 PushV
	var_1018_string = "Neutral"; // 0x10f6 MovS
	func_2198(var_23_int, var_1018_string); // 0x10f7 NEW_2
	var_1019_int = 543230; // 0x10f9 PushI
	SetMessage(var_1019_int); // 0x10fa TObjFunc
	ClearReplies(); // 0x10fc TObjFunc
	var_1020_int = 543231; // 0x10fe PushI
	var_1021_int = -1; // 0x10ff PushI
	var_1022_int = 45687; // 0x1100 PushI
	AddReply(var_1020_int, var_1021_int, var_1022_int); // 0x1101 TObjFunc
	var_1023_int = 543232; // 0x1103 PushI
	var_1024_int = -1; // 0x1104 PushI
	var_1025_int = 45688; // 0x1105 PushI
	AddReply(var_1023_int, var_1024_int, var_1025_int); // 0x1106 TObjFunc
	return 0; // 0x1108 Return
	
Label_4361:
	var_1026_int = 45690; // 0x1109 PushI
	var_1027_bool = var_22_int == var_1026_int; // 0x110a Eq
	if(var_1027_bool == 0) goto Label_4364; // 0x110b JumpB
	
Label_4364:
	var_1028_int = 45697; // 0x110c PushI
	var_1029_bool = var_22_int == var_1028_int; // 0x110d Eq
	if(var_1029_bool == 0) goto Label_4367; // 0x110e JumpB
	
Label_4367:
	var_1030_int = 45700; // 0x110f PushI
	var_1031_bool = var_22_int == var_1030_int; // 0x1110 Eq
	if(var_1031_bool == 0) goto Label_4390; // 0x1111 JumpB
	var_1032_string = ""; // 0x1112 PushV
	var_1032_string = "Neutral"; // 0x1113 MovS
	func_2198(var_23_int, var_1032_string); // 0x1114 NEW_2
	var_1033_int = 543244; // 0x1116 PushI
	SetMessage(var_1033_int); // 0x1117 TObjFunc
	ClearReplies(); // 0x1119 TObjFunc
	var_1034_int = 543245; // 0x111b PushI
	var_1035_int = -1; // 0x111c PushI
	var_1036_int = 45701; // 0x111d PushI
	AddReply(var_1034_int, var_1035_int, var_1036_int); // 0x111e TObjFunc
	var_1037_int = 543246; // 0x1120 PushI
	var_1038_int = -1; // 0x1121 PushI
	var_1039_int = 45702; // 0x1122 PushI
	AddReply(var_1037_int, var_1038_int, var_1039_int); // 0x1123 TObjFunc
	return 0; // 0x1125 Return
	
Label_4390:
	var_3_bool = 1; // 0x1126 TMovB
	var_1040_bool = 0; // 0x1127 PushV
	func_5605(var_1040_bool); // 0x1128 NEW_2
	if(var_1040_bool == 0) goto Label_4398; // 0x112a JumpB
	lshStopAnimation(); // 0x112b Func
	goto Label_4400; // 0x112d Jump
	
Label_4400:
	return 0; // 0x1130 Return
	
Label_4398:
	StopAnimation(); // 0x112e Func
	
Label_4402:
	return 0; // 0x1132 Return
}


event_16(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_string)
{
	return 0; // 0x12dc Return
}


event_41(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object)
{
	return 0; // 0x12de Return
}


event_22(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_int, var_24_float, var_25_float)
{
	return 0; // 0x12e0 Return
}


event_43(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_int, var_24_float, var_25_float, var_26_cvector, var_27_cvector)
{
	return 0; // 0x12e2 Return
}


main(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool)
{
	var_22_bool = 1; // 0x28 PushB
	SensePlayerOnly(var_22_bool); // 0x29 Func
	func_5607(); // 0x2c NEW_2
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
	var_413_bool = 0; // 0x4 PushV
	func_5605(var_413_bool); // 0x5 NEW_2
	if(var_413_bool == 0) goto Label_15; // 0x7 JumpB
	var_414_string = ""; // 0x8 PushV
	var_414_string = "Neutral"; // 0x9 MovS
	func_4665(var_414_string); // 0xa NEW_2
	lshWaitForAnimEnd(); // 0xc Func
	goto Label_21; // 0xe Jump
	
Label_21:
	var_415_bool = var_0_bool; // 0x15 PushT
	if(var_415_bool == 0) goto Label_24; // 0x16 JumpB
	return 0; // 0x17 Return
	
Label_24:
	goto Label_4; // 0x18 Jump
	
Label_15:
	WaitForAnimEnd(); // 0xf Func
	var_416_string = "all"; // 0x11 PushS
	var_417_string = "idle"; // 0x12 PushS
	PlayAnimation(var_416_string, var_417_string); // 0x13 Func
}


func_4614(var_381_bool, var_383_float)
{
	var_384_float = 0; var_385_cvector = CVector(0,0,0); var_386_cvector = CVector(0,0,0); var_387_cvector = CVector(0,0,0); var_388_cvector = CVector(0,0,0); var_389_cvector = CVector(0,0,0); var_390_cvector = CVector(0,0,0); var_391_bool = 0; var_392_float = 0; var_393_cvector = CVector(0,0,0); var_394_cvector = CVector(0,0,0); var_395_cvector = CVector(0,0,0); var_396_cvector = CVector(0,0,0); var_397_cvector = CVector(0,0,0); var_398_cvector = CVector(0,0,0); var_399_bool = 0; // 0x1206 PushV
	GetPosition(var_393_cvector); // 0x1207 ObjFunc
	GetEyesHeight(var_392_float); // 0x1209 ObjFunc
	var_400_float = GetByIndex(var_393_cvector, 1); // 0x120b PushE
	var_400_float = var_400_float + var_392_float; // 0x120c Add2
	SetByIndex(var_393_cvector, 1) = var_400_float; // 0x120d PopE
	GetPosition(var_394_cvector); // 0x120e Func
	GetEyesHeight(var_392_float); // 0x1210 Func
	var_401_float = GetByIndex(var_394_cvector, 1); // 0x1212 PushE
	var_401_float = var_401_float + var_392_float; // 0x1213 Add2
	SetByIndex(var_394_cvector, 1) = var_401_float; // 0x1214 PopE
	var_395_cvector = var_393_cvector - var_394_cvector; // 0x1215 Sub2
	var_402_float = GetByIndex(var_395_cvector, 1); // 0x1216 PushE
	var_402_float = 0; // 0x1217 MovI
	SetByIndex(var_395_cvector, 1) = var_402_float; // 0x1218 PopE
	var_403_int = var_395_cvector | var_395_cvector; // 0x1219 Or
	var_404_float = sqrt(var_403_int); // 0x121a Sqrt
	var_395_cvector = var_395_cvector / var_395_cvector; // 0x121b Div2
	var_396_cvector = -var_395_cvector; // 0x121c Neg2
	var_405_float = var_395_cvector * var_383_float; // 0x121d Mult
	var_406_cvector = CVector(0.0, 10.0, 0.0); // 0x121e PushVec
	var_397_cvector = var_405_float - var_406_cvector; // 0x121f Sub2
	var_398_cvector = var_394_cvector + var_397_cvector; // 0x1220 Add2
	IsOverrideActive(var_399_bool); // 0x1221 Func
	var_407_bool = var_399_bool; // 0x1223 Push
	if(var_407_bool == 0) goto Label_4647; // 0x1224 JumpB
	var_381_bool = 0; // 0x1225 MovB
	return 16; // 0x1226 Return
	
Label_4647:
	StopWorld(); // 0x1227 Func
	CameraTransit(var_398_cvector, var_396_cvector); // 0x1229 Func
	var_408_float = GetByIndex(var_397_cvector, 0); // 0x122b PushE
	var_409_float = GetByIndex(var_397_cvector, 2); // 0x122c PushE
	Rotate(var_408_float, var_409_float); // 0x122d Func
	CameraWaitForPlayFinish(); // 0x122f Func
	ResumeWorld(); // 0x1231 Func
	var_381_bool = 1; // 0x1233 MovB
	return 16; // 0x1234 Return
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
	func_4746(var_52_cvector, var_53_cvector); // 0x612 NEW_2
	var_59_float = 0.75; // 0x614 PushF
	var_60_float = var_46_cvector * var_59_float; // 0x615 Mult
	var_51_cvector = var_52_cvector + var_60_float; // 0x616 Add2
	func_4746(var_50_cvector, var_51_cvector); // 0x617 NEW_2
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


func_5132(var_73_object)
{
	var_74_object = Obj(); // 0x140d PushV
	var_74_object = var_73_object; // 0x140e Mov
	func_5014(var_74_object); // 0x140f NEW_2
	return 0; // 0x1411 Return
}


func_5138(var_209_int)
{
	var_209_int = 0; // 0x1413 MovI
	return 0; // 0x1414 Return
}


func_5141()
{
	return 0; // 0x1416 Return
}


func_5143(var_28_bool, var_29_object)
{
	var_30_bool = 0; var_31_bool = 0; // 0x1417 PushV
	CanSee(var_31_bool, var_29_object); // 0x1418 Func
	var_28_bool = var_31_bool; // 0x141a Mov
	return 2; // 0x141b Return
}


func_5655(var_67_bool)
{
	var_67_bool = 1; // 0x1617 MovB
	return 0; // 0x1618 Return
}


func_5657(var_27_bool, var_28_object, var_29_object)
{
	var_31_bool = 0; var_32_object = Obj(); var_33_object = Obj(); var_34_float = 0; // 0x161a PushV
	var_32_object = var_28_object; // 0x161b Mov
	var_33_object = var_29_object; // 0x161c Mov
	var_34_float = 500.0; // 0x161d MovF
	func_5040(var_31_bool, var_32_object, var_33_object, var_34_float); // 0x161e NEW_2
	if(var_31_bool == 0) goto Label_5671; // 0x1620 JumpB
	var_74_string = "ToDie"; // 0x1621 PushS
	var_75_bool = 1; // 0x1622 PushB
	SetProperty(var_74_string, var_75_bool); // 0x1623 Func
	var_27_bool = 1; // 0x1625 MovB
	return 0; // 0x1626 Return
	
Label_5671:
	var_27_bool = 0; // 0x1627 MovB
	return 0; // 0x1628 Return
}


func_5148(var_40_object)
{
	var_41_object = Obj(); // 0x141d PushV
	var_41_object = var_40_object; // 0x141e Mov
	TaskCall(6); // 0x141f TaskCall
	func_1380(var_42_object, var_43_cvector, var_44_bool, var_41_object); // 0x1420 NEW_2
	TaskReturn(); // 0x1421 TaskReturn
	return 0; // 0x1423 Return
}


func_5156(var_37_bool, var_38_object)
{
	var_39_bool = 0; var_40_bool = 0; // 0x1424 PushV
	CanSee(var_40_bool, var_38_object); // 0x1425 Func
	var_37_bool = 1; // 0x1427 MovB
	var_41_bool = var_40_bool; // 0x1428 Push
	if(var_41_bool == 0) goto Label_5170; // 0x1429 JumpB
	var_42_float = 0; var_43_object = Obj(); // 0x142a PushV
	var_43_object = var_38_object; // 0x142b Mov
	func_4415(var_43_object); // 0x142c NEW_2
	var_50_int = 4000000; // 0x142e PushI
	var_51_bool = var_42_float <= var_50_int; // 0x142f LE
	if(var_51_bool == 0) goto Label_5170; // 0x1430 JumpB
	var_37_bool = 0; // 0x1431 MovB
	
Label_5170:
	return 2; // 0x1432 Return
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
	func_4403(var_191_cvector); // 0x648 NEW_2
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
	func_4403(var_201_cvector); // 0x663 NEW_2
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


func_5171(var_139_object)
{
	var_140_object = Obj(); // 0x1434 PushV
	var_140_object = var_139_object; // 0x1435 Mov
	TaskCall(7); // 0x1436 TaskCall
	func_1574(var_141_object, var_142_cvector, var_143_bool, var_140_object); // 0x1437 NEW_2
	TaskReturn(); // 0x1438 TaskReturn
	return 0; // 0x143a Return
}


func_4661()
{
	CameraSwitchToNormal(); // 0x1236 Func
	return 0; // 0x1238 Return
}


func_55()
{
	var_105_bool = 0; // 0x37 PushV
	func_4516(var_105_bool); // 0x38 NEW_2
	var_108_bool = var_105_bool == 0; // 0x3a Not
	if(var_108_bool == 0) goto Label_63; // 0x3b JumpB
	func_5115(); // 0x3d NEW_2
	
Label_63:
	return 0; // 0x3f Return
}


func_4665(var_302_string)
{
	var_303_bool = 0; var_304_float = 0; var_305_float = 0; var_306_bool = 0; var_307_float = 0; var_308_float = 0; // 0x1239 PushV
	lshHasAnimation(var_306_bool, var_302_string); // 0x123a Func
	var_309_bool = var_306_bool; // 0x123c Push
	if(var_309_bool == 0) goto Label_4676; // 0x123d JumpB
	lshGetAnimTimes(var_302_string, var_307_float, var_308_float); // 0x123e Func
	var_310_bool = 0; // 0x1240 PushB
	lshPlayAnimation(var_307_float, var_308_float, var_310_bool); // 0x1241 Func
	goto Label_4680; // 0x1243 Jump
	
Label_4680:
	return 6; // 0x1248 Return
	
Label_4676:
	var_311_string = "Can't find lsh animation : "; // 0x1244 PushS
	var_312_int = var_311_string + var_302_string; // 0x1245 Add
	Trace(var_312_int); // 0x1246 Func
}


func_5179(var_54_bool, var_55_object)
{
	var_56_bool = 0; var_57_object = Obj(); // 0x143c PushV
	var_57_object = var_55_object; // 0x143d Mov
	func_5156(var_56_bool, var_57_object); // 0x143e NEW_2
	var_54_bool = var_56_bool; // 0x143f Mov
	return 0; // 0x1441 Return
}


func_573()
{
	var_136_int = 0; var_137_int = 0; var_138_int = 0; var_139_int = 0; var_140_bool = 0; var_141_float = 0; var_142_bool = 0; var_143_int = 0; var_144_int = 0; var_145_int = 0; var_146_int = 0; var_147_bool = 0; var_148_float = 0; var_149_bool = 0; // 0x23d PushV
	WaitForAnimEnd(); // 0x23e Func
	var_150_bool = 0; // 0x240 PushV
	func_4516(var_150_bool); // 0x241 NEW_2
	var_151_bool = var_150_bool == 0; // 0x243 Not
	if(var_151_bool == 0) goto Label_582; // 0x244 JumpB
	return 14; // 0x245 Return
	
Label_582:
	var_152_int = 0; // 0x246 PushV
	func_4970(var_152_int); // 0x247 NEW_2
	var_143_int = var_152_int; // 0x248 Mov
	var_144_int = 0; // 0x24a MovI
	
Label_587:
	var_165_bool = 0; // 0x24b PushV
	var_165_bool = 0; // 0x24c MovB
	var_166_int = 5; // 0x24d PushI
	var_167_bool = var_144_int < var_166_int; // 0x24e LT
	if(var_167_bool == 0) goto Label_597; // 0x24f JumpB
	var_168_bool = 0; // 0x250 PushV
	func_4516(var_168_bool); // 0x251 NEW_2
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
	func_4963(var_174_string, var_175_int); // 0x263 NEW_2
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


func_5186(var_207_object)
{
	var_208_object = Obj(); // 0x1443 PushV
	var_208_object = var_207_object; // 0x1444 Mov
	func_5171(var_208_object); // 0x1445 NEW_2
	return 0; // 0x1447 Return
}


func_5192(var_30_bool)
{
	var_30_bool = 0; // 0x1449 MovB
	return 0; // 0x144a Return
}


func_4681(var_57_string, var_58_bool)
{
	var_61_bool = 0; var_62_float = 0; var_63_float = 0; var_64_bool = 0; var_65_float = 0; var_66_float = 0; // 0x1249 PushV
	lshHasAnimation(var_64_bool, var_57_string); // 0x124a Func
	var_67_bool = var_64_bool; // 0x124c Push
	if(var_67_bool == 0) goto Label_4691; // 0x124d JumpB
	lshGetAnimTimes(var_57_string, var_65_float, var_66_float); // 0x124e Func
	lshPlayAnimation(var_65_float, var_66_float, var_58_bool); // 0x1250 Func
	goto Label_4695; // 0x1252 Jump
	
Label_4695:
	return 6; // 0x1257 Return
	
Label_4691:
	var_68_string = "Can't find lsh animation : "; // 0x1253 PushS
	var_69_int = var_68_string + var_57_string; // 0x1254 Add
	Trace(var_69_int); // 0x1255 Func
}


func_5195()
{
	return 0; // 0x144c Return
}


func_5197()
{
	var_30_int = 1000; // 0x144e PushI
	SetReturnValue(var_30_int); // 0x144f ObjFunc
	return 0; // 0x1451 Return
}


func_5202(var_226_bool)
{
	var_228_int = 0; var_229_string = ""; // 0x1453 PushV
	var_229_string = "branch"; // 0x1454 MovS
	func_4805(var_228_int, var_229_string); // 0x1455 NEW_2
	var_230_int = 0; // 0x1457 PushI
	var_231_bool = var_228_int == var_230_int; // 0x1458 Eq
	if(var_231_bool == 0) goto Label_5212; // 0x1459 JumpB
	var_226_bool = 1; // 0x145a MovB
	return 0; // 0x145b Return
	
Label_5212:
	var_226_bool = 0; // 0x145c MovB
	return 0; // 0x145d Return
}


func_4696(var_82_object)
{
	var_83_float = 0; var_84_cvector = CVector(0,0,0); var_85_float = 0; var_86_cvector = CVector(0,0,0); // 0x1258 PushV
	GetEyesHeight(var_85_float); // 0x1259 ObjFunc
	var_86_cvector = CVector(0.0, 0.0, 0.0); // 0x125b MovV
	var_87_float = GetByIndex(var_86_cvector, 1); // 0x125c PushE
	var_87_float = var_85_float; // 0x125d Mov
	SetByIndex(var_86_cvector, 1) = var_87_float; // 0x125e PopE
	var_88_string = "head"; // 0x125f PushS
	LookAsync(var_82_object, var_88_string, var_86_cvector); // 0x1260 Func
	return 4; // 0x1262 Return
}


func_5214(var_45_bool)
{
	var_47_int = 0; var_48_string = ""; // 0x145f PushV
	var_48_string = "branch"; // 0x1460 MovS
	func_4805(var_47_int, var_48_string); // 0x1461 NEW_2
	var_51_int = 2; // 0x1463 PushI
	var_52_bool = var_47_int == var_51_int; // 0x1464 Eq
	if(var_52_bool == 0) goto Label_5224; // 0x1465 JumpB
	var_45_bool = 1; // 0x1466 MovB
	return 0; // 0x1467 Return
	
Label_5224:
	var_45_bool = 0; // 0x1468 MovB
	return 0; // 0x1469 Return
}


func_4707()
{
	var_25_bool = 0; // 0x1263 PushV
	func_5605(var_25_bool); // 0x1264 NEW_2
	if(var_25_bool == 0) goto Label_4713; // 0x1266 JumpB
	lshStopSpeech(); // 0x1267 Func
	
Label_4713:
	return 0; // 0x1269 Return
}


func_1124(var_2_bool)
{
	Stop(); // 0x464 Func
	var_23_int = 120; // 0x466 PushI
	KillTimer(var_23_int); // 0x467 Func
	var_2_bool = 1; // 0x469 TMovB
	return 0; // 0x46a Return
}


func_5226(var_74_bool, var_75_object)
{
	var_76_bool = 0; var_77_object = Obj(); // 0x146b PushV
	var_77_object = var_75_object; // 0x146c Mov
	func_5356(var_77_object); // 0x146d NEW_2
	if(var_76_bool == 0) goto Label_5234; // 0x146f JumpB
	var_74_bool = 1; // 0x1470 MovB
	return 0; // 0x1471 Return
	
Label_5234:
	var_74_bool = 0; // 0x1472 MovB
	return 0; // 0x1473 Return
}


func_4714(var_61_string, var_62_int, var_63_int)
{
	var_64_bool = 0; var_65_bool = 0; // 0x126a PushV
	var_66_bool = 0; var_67_int = 0; var_68_int = 0; // 0x126b PushV
	var_67_int = var_62_int; // 0x126c Mov
	var_68_int = var_63_int; // 0x126d Mov
	func_4756(var_66_bool, var_67_int, var_68_int); // 0x126e NEW_2
	if(var_66_bool == 0) goto Label_4724; // 0x1270 JumpB
	var_69_int = 0; // 0x1271 PushI
	AddItem(var_65_bool, var_61_string, var_69_int); // 0x1272 Func
	
Label_4724:
	return 2; // 0x1274 Return
}


func_1140(var_0_bool, var_74_bool)
{
	var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0); // 0x474 PushV
	GetDirection(var_77_cvector); // 0x475 Func
	var_79_cvector = CVector(0,0,0); var_80_object = Obj(); // 0x477 PushV
	var_80_object = var_0_bool; // 0x478 MovT
	func_4408(var_80_object); // 0x479 NEW_2
	var_78_cvector = var_79_cvector; // 0x47a Mov
	var_85_float = 0; var_86_cvector = CVector(0,0,0); var_87_cvector = CVector(0,0,0); // 0x47c PushV
	var_86_cvector = var_77_cvector; // 0x47d Mov
	var_87_cvector = var_78_cvector; // 0x47e Mov
	func_4761(var_85_float, var_86_cvector, var_87_cvector); // 0x47f NEW_2
	var_93_float = -0.34202; // 0x481 PushF
	var_74_bool = var_85_float >= var_93_float; // 0x482 GE2
	return 4; // 0x483 Return
}


func_5236(var_85_bool, var_86_object)
{
	var_87_bool = 0; var_88_object = Obj(); // 0x1475 PushV
	var_88_object = var_86_object; // 0x1476 Mov
	func_5363(var_88_object); // 0x1477 NEW_2
	if(var_87_bool == 0) goto Label_5244; // 0x1479 JumpB
	var_85_bool = 1; // 0x147a MovB
	return 0; // 0x147b Return
	
Label_5244:
	var_85_bool = 0; // 0x147c MovB
	return 0; // 0x147d Return
}


func_4725(var_39_string, var_40_int, var_41_int, var_42_int)
{
	var_43_int = 0; var_44_bool = 0; var_45_int = 0; var_46_bool = 0; // 0x1275 PushV
	var_47_bool = 0; var_48_int = 0; var_49_int = 0; // 0x1276 PushV
	var_48_int = var_40_int; // 0x1277 Mov
	var_49_int = var_41_int; // 0x1278 Mov
	func_4756(var_47_bool, var_48_int, var_49_int); // 0x1279 NEW_2
	if(var_47_bool == 0) goto Label_4739; // 0x127b JumpB
	irand(var_45_int, var_42_int); // 0x127c Func
	var_52_int = 0; // 0x127e PushI
	var_53_int = 1; // 0x127f PushI
	var_54_int = var_45_int + var_53_int; // 0x1280 Add
	AddItem(var_46_bool, var_39_string, var_52_int, var_54_int); // 0x1281 Func
	
Label_4739:
	return 4; // 0x1283 Return
}


func_5246(var_91_bool, var_92_object)
{
	var_93_bool = 0; var_94_object = Obj(); // 0x147f PushV
	var_94_object = var_92_object; // 0x1480 Mov
	func_5370(var_94_object); // 0x1481 NEW_2
	if(var_93_bool == 0) goto Label_5254; // 0x1483 JumpB
	var_91_bool = 1; // 0x1484 MovB
	return 0; // 0x1485 Return
	
Label_5254:
	var_91_bool = 0; // 0x1486 MovB
	return 0; // 0x1487 Return
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
	func_4746(var_52_cvector, var_53_cvector); // 0x48e NEW_2
	var_59_float = 0.75; // 0x490 PushF
	var_60_float = var_46_cvector * var_59_float; // 0x491 Mult
	var_51_cvector = var_52_cvector + var_60_float; // 0x492 Add2
	func_4746(var_50_cvector, var_51_cvector); // 0x493 NEW_2
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


func_4740(var_30_object)
{
	var_31_object = Obj(); var_32_object = Obj(); // 0x1284 PushV
	self(var_32_object); // 0x1285 Func
	var_30_object = var_32_object; // 0x1287 Mov
	return 2; // 0x1288 Return
}


func_5256(var_97_bool, var_98_object)
{
	var_99_bool = 0; var_100_object = Obj(); // 0x1489 PushV
	var_100_object = var_98_object; // 0x148a Mov
	func_5377(var_100_object); // 0x148b NEW_2
	if(var_99_bool == 0) goto Label_5264; // 0x148d JumpB
	var_97_bool = 1; // 0x148e MovB
	return 0; // 0x148f Return
	
Label_5264:
	var_97_bool = 0; // 0x1490 MovB
	return 0; // 0x1491 Return
}


func_4746(var_52_cvector, var_53_cvector)
{
	var_54_float = 0; var_55_float = 0; // 0x128a PushV
	var_56_int = var_53_cvector | var_53_cvector; // 0x128b Or
	var_55_float = sqrt(var_56_int); // 0x128c Sqrt2
	var_57_float = 0.0; // 0x128d PushF
	var_58_bool = var_55_float < var_57_float; // 0x128e LT
	if(var_58_bool == 0) goto Label_4754; // 0x128f JumpB
	var_52_cvector = CVector(0.0, 0.0, 0.0); // 0x1290 MovV
	return 2; // 0x1291 Return
	
Label_4754:
	var_52_cvector = var_53_cvector / var_53_cvector; // 0x1292 Div2
	return 2; // 0x1293 Return
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


func_5266(var_108_bool, var_109_object)
{
	var_110_bool = 0; var_111_object = Obj(); // 0x1493 PushV
	var_111_object = var_109_object; // 0x1494 Mov
	func_5384(var_111_object); // 0x1495 NEW_2
	if(var_110_bool == 0) goto Label_5274; // 0x1497 JumpB
	var_108_bool = 1; // 0x1498 MovB
	return 0; // 0x1499 Return
	
Label_5274:
	var_108_bool = 0; // 0x149a MovB
	return 0; // 0x149b Return
}


func_659(var_0_bool, var_74_object)
{
	var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0); var_78_bool = 0; var_79_cvector = CVector(0,0,0); var_80_cvector = CVector(0,0,0); var_81_bool = 0; // 0x293 PushV
	var_0_bool = var_74_object; // 0x294 TMov
	func_710(var_81_bool); // 0x296 NEW_2
	GetDirection(var_79_cvector); // 0x298 Func
	var_89_cvector = CVector(0,0,0); var_90_object = Obj(); // 0x29a PushV
	var_90_object = var_0_bool; // 0x29b MovT
	func_4408(var_90_object); // 0x29c NEW_2
	var_80_cvector = var_89_cvector; // 0x29d Mov
	var_95_float = 0; var_96_cvector = CVector(0,0,0); var_97_cvector = CVector(0,0,0); // 0x29f PushV
	var_96_cvector = var_79_cvector; // 0x2a0 Mov
	var_97_cvector = var_80_cvector; // 0x2a1 Mov
	func_4788(var_95_float, var_96_cvector, var_97_cvector); // 0x2a2 NEW_2
	var_119_int = 0; // 0x2a4 PushI
	var_120_bool = var_95_float < var_119_int; // 0x2a5 LT
	if(var_120_bool == 0) goto Label_685; // 0x2a6 JumpB
	var_121_object = Obj(); // 0x2a7 PushV
	var_121_object = var_0_bool; // 0x2a8 MovT
	func_4505(); // 0x2a9 NEW_2
	var_81_bool = 1; // 0x2ab MovB
	goto Label_688; // 0x2ac Jump
	
Label_688:
	var_130_bool = var_81_bool; // 0x2b0 Push
	if(var_130_bool == 0) goto Label_704; // 0x2b1 JumpB
	var_131_object = Obj(); // 0x2b2 PushV
	var_131_object = var_0_bool; // 0x2b3 MovT
	func_4505(); // 0x2b4 NEW_2
	var_132_int = 111; // 0x2b6 PushI
	var_133_float = 0.5; // 0x2b7 PushF
	SetTimer(var_132_int, var_133_float); // 0x2b8 Func
	var_134_float = 5.0; // 0x2ba PushF
	Sleep(var_134_float); // 0x2bb Func
	var_135_int = 111; // 0x2bd PushI
	KillTimer(var_135_int); // 0x2be Func
	
Label_704:
	StopAsync(); // 0x2c0 Func
	var_136_string = "head"; // 0x2c2 PushS
	UnlookAsync(var_136_string); // 0x2c3 Func
	return 6; // 0x2c5 Return
	
Label_685:
	var_137_float = 1.5; // 0x2ad PushF
	Sleep(var_137_float, var_81_bool); // 0x2ae Func
}


func_4756(var_47_bool, var_48_int, var_49_int)
{
	var_50_int = 0; var_51_int = 0; // 0x1294 PushV
	irand(var_51_int, var_49_int); // 0x1295 Func
	var_47_bool = var_51_int < var_48_int; // 0x1297 LT2
	return 2; // 0x1298 Return
}


func_2198(var_2_bool, var_53_string)
{
	var_54_bool = 0; // 0x897 PushV
	func_5605(var_54_bool); // 0x898 NEW_2
	var_55_bool = var_54_bool == 0; // 0x89a Not
	if(var_55_bool == 0) goto Label_2205; // 0x89b JumpB
	return 0; // 0x89c Return
	
Label_2205:
	var_56_bool = var_53_string == var_2_bool; // 0x89d Eq
	if(var_56_bool == 0) goto Label_2208; // 0x89e JumpB
	return 0; // 0x89f Return
	
Label_2208:
	var_57_string = ""; var_58_bool = 0; // 0x8a0 PushV
	var_57_string = var_53_string; // 0x8a1 Mov
	var_59_string = ""; // 0x8a2 PushS
	var_60_bool = var_53_string == var_59_string; // 0x8a3 Eq
	if(var_60_bool == 0) goto Label_2215; // 0x8a4 JumpB
	var_58_bool = 0; // 0x8a5 MovB
	goto Label_2216; // 0x8a6 Jump
	
Label_2216:
	func_4681(var_57_string, var_58_bool); // 0x8a8 NEW_2
	var_2_bool = var_53_string; // 0x8aa TMov
	return 0; // 0x8ab Return
	
Label_2215:
	var_58_bool = 1; // 0x8a7 MovB
}


func_4761(var_85_float, var_86_cvector, var_87_cvector)
{
	var_88_int = var_86_cvector | var_87_cvector; // 0x129a Or
	var_89_int = var_86_cvector | var_86_cvector; // 0x129b Or
	var_90_int = var_87_cvector | var_87_cvector; // 0x129c Or
	var_91_float = var_89_int * var_90_int; // 0x129d Mult
	var_92_float = sqrt(var_91_float); // 0x129e Sqrt
	var_85_float = var_88_int / var_88_int; // 0x129f Div2
	return 0; // 0x12a0 Return
}


func_5276(var_114_bool, var_115_object)
{
	var_116_bool = 0; var_117_object = Obj(); // 0x149d PushV
	var_117_object = var_115_object; // 0x149e Mov
	func_5391(var_117_object); // 0x149f NEW_2
	if(var_116_bool == 0) goto Label_5284; // 0x14a1 JumpB
	var_114_bool = 1; // 0x14a2 MovB
	return 0; // 0x14a3 Return
	
Label_5284:
	var_114_bool = 0; // 0x14a4 MovB
	return 0; // 0x14a5 Return
}


func_4769(var_75_float, var_76_cvector, var_77_cvector)
{
	var_78_float = GetByIndex(var_76_cvector, 0); // 0x12a2 PushE
	var_79_float = GetByIndex(var_77_cvector, 0); // 0x12a3 PushE
	var_80_float = var_78_float * var_79_float; // 0x12a4 Mult
	var_81_float = GetByIndex(var_76_cvector, 2); // 0x12a5 PushE
	var_82_float = GetByIndex(var_77_cvector, 2); // 0x12a6 PushE
	var_83_float = var_81_float * var_82_float; // 0x12a7 Mult
	var_75_float = var_80_float + var_83_float; // 0x12a8 Add2
	return 0; // 0x12a9 Return
}


func_1186(var_0_bool, var_1_bool, var_2_bool, var_114_object)
{
	var_118_cvector = CVector(0,0,0); var_119_float = 0; var_120_bool = 0; var_121_cvector = CVector(0,0,0); var_122_float = 0; var_123_cvector = CVector(0,0,0); var_124_float = 0; var_125_bool = 0; var_126_cvector = CVector(0,0,0); var_127_float = 0; // 0x4a2 PushV
	var_0_bool = var_114_object; // 0x4a3 TMov
	var_128_cvector = CVector(0,0,0); var_129_float = 0; // 0x4a4 PushV
	var_129_float = 1.74533; // 0x4a5 MovF
	func_1156(var_128_cvector, var_129_float); // 0x4a6 NEW_2
	var_123_cvector = var_128_cvector; // 0x4a7 Mov
	var_124_float = var_123_cvector | var_123_cvector; // 0x4a9 Or2
	var_158_float = 2500.0; // 0x4aa PushF
	var_159_bool = var_124_float < var_158_float; // 0x4ab LT
	if(var_159_bool == 0) goto Label_1215; // 0x4ac JumpB
	var_160_cvector = CVector(0,0,0); var_161_float = 0; // 0x4ad PushV
	var_161_float = 2.61799; // 0x4ae MovF
	func_1156(var_160_cvector, var_161_float); // 0x4af NEW_2
	var_123_cvector = var_160_cvector; // 0x4b0 Mov
	var_124_float = var_123_cvector | var_123_cvector; // 0x4b2 Or2
	var_162_float = 2500.0; // 0x4b3 PushF
	var_163_bool = var_124_float < var_162_float; // 0x4b4 LT
	if(var_163_bool == 0) goto Label_1215; // 0x4b5 JumpB
	var_164_string = "Can't retreat, distance: "; // 0x4b6 PushS
	var_165_float = sqrt(var_124_float); // 0x4b7 Sqrt
	var_166_int = var_164_string + var_165_float; // 0x4b8 Add
	Trace(var_166_int); // 0x4b9 Func
	var_167_float = 0.5; // 0x4bb PushF
	Sleep(var_167_float); // 0x4bc Func
	return 10; // 0x4be Return
	
Label_1215:
	var_168_float = GetByIndex(var_123_cvector, 0); // 0x4bf PushE
	var_169_float = GetByIndex(var_123_cvector, 2); // 0x4c0 PushE
	Rotate(var_168_float, var_169_float); // 0x4c1 Func
	var_170_cvector = CVector(0,0,0); // 0x4c3 PushV
	func_4403(var_170_cvector); // 0x4c4 NEW_2
	var_1_bool = var_170_cvector + var_123_cvector; // 0x4c6 Add2
	var_173_int = 120; // 0x4c7 PushI
	var_174_float = 0.5; // 0x4c8 PushF
	SetTimer(var_173_int, var_174_float); // 0x4c9 Func
	var_2_bool = 0; // 0x4cb TMovB
	
Label_1228:
	var_175_int = 1; // 0x4cc PushI
	MovePoint(var_175_int, var_175_int, var_125_bool); // 0x4cd Func
	var_176_bool = var_125_bool; // 0x4cf Push
	if(var_176_bool == 0) goto Label_1256; // 0x4d0 JumpB
	var_177_bool = var_0_bool == 0; // 0x4d1 NullEq
	if(var_177_bool == 0) goto Label_1237; // 0x4d2 JumpB
	goto Label_1258; // 0x4d3 Jump
	
Label_1258:
	return 10; // 0x4ea Return
	
Label_1237:
	var_178_cvector = CVector(0,0,0); var_179_float = 0; // 0x4d5 PushV
	var_179_float = 2.61799; // 0x4d6 MovF
	func_1156(var_178_cvector, var_179_float); // 0x4d7 NEW_2
	var_126_cvector = var_178_cvector; // 0x4d8 Mov
	var_127_float = var_126_cvector | var_126_cvector; // 0x4da Or2
	var_180_float = 2500.0; // 0x4db PushF
	var_181_bool = var_127_float >= var_180_float; // 0x4dc GE
	if(var_181_bool == 0) goto Label_1255; // 0x4dd JumpB
	var_182_cvector = CVector(0,0,0); // 0x4de PushV
	func_4403(var_182_cvector); // 0x4df NEW_2
	var_1_bool = var_182_cvector + var_126_cvector; // 0x4e1 Add2
	var_183_int = 120; // 0x4e2 PushI
	var_184_float = 0.5; // 0x4e3 PushF
	SetTimer(var_183_int, var_184_float); // 0x4e4 Func
	goto Label_1256; // 0x4e6 Jump
	
Label_1256:
	var_185_bool = var_2_bool == 0; // 0x4e8 Not
	if(var_185_bool == 0) goto Label_1228; // 0x4e9 JumpB
	
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


func_5286(var_120_bool, var_121_object)
{
	var_122_bool = 0; var_123_object = Obj(); // 0x14a7 PushV
	var_123_object = var_121_object; // 0x14a8 Mov
	func_5398(var_123_object); // 0x14a9 NEW_2
	if(var_122_bool == 0) goto Label_5294; // 0x14ab JumpB
	var_120_bool = 1; // 0x14ac MovB
	return 0; // 0x14ad Return
	
Label_5294:
	var_120_bool = 0; // 0x14ae MovB
	return 0; // 0x14af Return
}


func_4778(var_84_float, var_85_cvector)
{
	var_86_float = GetByIndex(var_85_cvector, 0); // 0x12ab PushE
	var_87_float = GetByIndex(var_85_cvector, 0); // 0x12ac PushE
	var_88_float = var_86_float * var_87_float; // 0x12ad Mult
	var_89_float = GetByIndex(var_85_cvector, 2); // 0x12ae PushE
	var_90_float = GetByIndex(var_85_cvector, 2); // 0x12af PushE
	var_91_float = var_89_float * var_90_float; // 0x12b0 Mult
	var_92_int = var_88_float + var_91_float; // 0x12b1 Add
	var_84_float = sqrt(var_92_int); // 0x12b2 Sqrt2
	return 0; // 0x12b3 Return
}


func_5296(var_133_bool, var_134_object)
{
	var_135_bool = 0; var_136_object = Obj(); // 0x14b1 PushV
	var_136_object = var_134_object; // 0x14b2 Mov
	func_5405(var_136_object); // 0x14b3 NEW_2
	if(var_135_bool == 0) goto Label_5304; // 0x14b5 JumpB
	var_133_bool = 1; // 0x14b6 MovB
	return 0; // 0x14b7 Return
	
Label_5304:
	var_133_bool = 0; // 0x14b8 MovB
	return 0; // 0x14b9 Return
}


func_1715(var_0_bool, var_74_bool)
{
	var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0); // 0x6b3 PushV
	GetDirection(var_77_cvector); // 0x6b4 Func
	var_79_cvector = CVector(0,0,0); var_80_object = Obj(); // 0x6b6 PushV
	var_80_object = var_0_bool; // 0x6b7 MovT
	func_4408(var_80_object); // 0x6b8 NEW_2
	var_78_cvector = var_79_cvector; // 0x6b9 Mov
	var_85_float = 0; var_86_cvector = CVector(0,0,0); var_87_cvector = CVector(0,0,0); // 0x6bb PushV
	var_86_cvector = var_77_cvector; // 0x6bc Mov
	var_87_cvector = var_78_cvector; // 0x6bd Mov
	func_4761(var_85_float, var_86_cvector, var_87_cvector); // 0x6be NEW_2
	var_93_float = -0.34202; // 0x6c0 PushF
	var_74_bool = var_85_float >= var_93_float; // 0x6c1 GE2
	return 4; // 0x6c2 Return
}


func_4788(var_72_float, var_73_cvector, var_74_cvector)
{
	var_75_float = 0; var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0); // 0x12b5 PushV
	var_76_cvector = var_73_cvector; // 0x12b6 Mov
	var_77_cvector = var_74_cvector; // 0x12b7 Mov
	func_4769(var_75_float, var_76_cvector, var_77_cvector); // 0x12b8 NEW_2
	var_84_float = 0; var_85_cvector = CVector(0,0,0); // 0x12ba PushV
	var_85_cvector = var_73_cvector; // 0x12bb Mov
	func_4778(var_84_float, var_85_cvector); // 0x12bc NEW_2
	var_93_float = 0; var_94_cvector = CVector(0,0,0); // 0x12be PushV
	var_94_cvector = var_74_cvector; // 0x12bf Mov
	func_4778(var_93_float, var_94_cvector); // 0x12c0 NEW_2
	var_95_float = var_84_float * var_93_float; // 0x12c2 Mult
	var_72_float = var_75_float / var_75_float; // 0x12c3 Div2
	return 0; // 0x12c4 Return
}


func_5306(var_139_bool, var_140_object)
{
	var_141_bool = 0; var_142_object = Obj(); // 0x14bb PushV
	var_142_object = var_140_object; // 0x14bc Mov
	func_5412(var_142_object); // 0x14bd NEW_2
	if(var_141_bool == 0) goto Label_5314; // 0x14bf JumpB
	var_139_bool = 1; // 0x14c0 MovB
	return 0; // 0x14c1 Return
	
Label_5314:
	var_139_bool = 0; // 0x14c2 MovB
	return 0; // 0x14c3 Return
}


func_1731(var_0_bool, var_47_int, var_48_object)
{
	var_50_object = Obj(); var_51_bool = 0; var_52_int = 0; var_53_bool = 0; var_54_object = Obj(); var_55_bool = 0; var_56_int = 0; var_57_bool = 0; // 0x6c3 PushV
	var_0_bool = var_48_object; // 0x6c4 TMov
	var_58_bool = 0; var_59_object = Obj(); var_60_float = 0; // 0x6c5 PushV
	var_59_object = var_48_object; // 0x6c6 Mov
	var_60_float = 70.0; // 0x6c7 MovF
	func_4521(var_59_object, var_60_float); // 0x6c8 NEW_2
	var_104_bool = var_58_bool == 0; // 0x6ca Not
	if(var_104_bool == 0) goto Label_1742; // 0x6cb JumpB
	var_47_int = -2; // 0x6cc MovI
	return 8; // 0x6cd Return
	
Label_1742:
	CreateDialog(var_54_object); // 0x6ce Func
	var_105_int = 0; // 0x6d0 PushV
	func_5599(var_105_int); // 0x6d1 NEW_2
	SetNPCName(var_105_int); // 0x6d3 ObjFunc
	var_106_int = 0; // 0x6d5 PushV
	func_5597(var_106_int); // 0x6d6 NEW_2
	SetNPCDescription(var_106_int); // 0x6d8 ObjFunc
	var_107_string = ""; // 0x6da PushV
	func_5601(var_107_string); // 0x6db NEW_2
	SetPhoto(var_107_string); // 0x6dd ObjFunc
	var_108_string = ""; // 0x6df PushV
	func_5603(var_108_string); // 0x6e0 NEW_2
	SetPhoto2(var_108_string); // 0x6e2 ObjFunc
	var_109_int = 0; // 0x6e4 PushV
	func_5461(var_109_int); // 0x6e5 NEW_2
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
	var_370_bool = var_57_bool == 0; // 0x6fb Not
	if(var_370_bool == 0) goto Label_1794; // 0x6fc JumpB
	sync(); // 0x6fd Func
	IsDialogEnd(var_57_bool); // 0x6ff ObjFunc
	goto Label_1787; // 0x701 Jump
	
Label_1794:
	var_371_object = Obj(); // 0x702 PushV
	var_371_object = var_48_object; // 0x703 Mov
	func_4589(); // 0x704 NEW_2
	StopDialog(var_54_object); // 0x706 Func
	GetReturnValue(var_56_int); // 0x708 ObjFunc
	var_47_int = var_56_int; // 0x70a Mov
	return 8; // 0x70b Return
}


func_5316(var_145_bool, var_146_object)
{
	var_147_bool = 0; var_148_object = Obj(); // 0x14c5 PushV
	var_148_object = var_146_object; // 0x14c6 Mov
	func_5419(var_148_object); // 0x14c7 NEW_2
	if(var_147_bool == 0) goto Label_5324; // 0x14c9 JumpB
	var_145_bool = 1; // 0x14ca MovB
	return 0; // 0x14cb Return
	
Label_5324:
	var_145_bool = 0; // 0x14cc MovB
	return 0; // 0x14cd Return
}


func_4805(var_47_int, var_48_string)
{
	var_49_int = 0; var_50_int = 0; // 0x12c5 PushV
	GetVariable(var_48_string, var_50_int); // 0x12c6 Func
	var_47_int = var_50_int; // 0x12c8 Mov
	return 2; // 0x12c9 Return
}


func_710(var_0_bool)
{
	var_82_object = Obj(); // 0x2c6 PushV
	var_82_object = var_0_bool; // 0x2c7 MovT
	func_4696(var_82_object); // 0x2c8 NEW_2
	return 0; // 0x2ca Return
}


func_4810(var_32_int)
{
	var_33_float = 0; var_34_float = 0; // 0x12ca PushV
	GetGameTime(var_34_float); // 0x12cb Func
	var_35_int = 1; // 0x12cd PushI
	var_36_int = 0; // 0x12ce PushV
	var_37_int = 24; // 0x12cf PushI
	var_36_int = var_34_float / var_34_float; // 0x12d0 Div2
	var_32_int = var_35_int + var_36_int; // 0x12d1 Add2
	return 2; // 0x12d2 Return
}


func_5326(var_151_bool, var_152_object)
{
	var_153_bool = 0; var_154_object = Obj(); // 0x14cf PushV
	var_154_object = var_152_object; // 0x14d0 Mov
	func_5426(var_154_object); // 0x14d1 NEW_2
	if(var_153_bool == 0) goto Label_5334; // 0x14d3 JumpB
	var_151_bool = 1; // 0x14d4 MovB
	return 0; // 0x14d5 Return
	
Label_5334:
	var_151_bool = 0; // 0x14d6 MovB
	return 0; // 0x14d7 Return
}


func_4819(var_245_int)
{
	var_246_float = 0; var_247_float = 0; // 0x12d3 PushV
	GetGameTime(var_247_float); // 0x12d4 Func
	var_248_int = 0; // 0x12d6 PushV
	var_248_int = var_247_float; // 0x12d7 Mov
	var_249_int = 24; // 0x12d8 PushI
	var_245_int = var_248_int % var_249_int; // 0x12d9 Mod2
	return 2; // 0x12da Return
}


func_5336(var_157_bool, var_158_object)
{
	var_159_bool = 0; var_160_object = Obj(); // 0x14d9 PushV
	var_160_object = var_158_object; // 0x14da Mov
	func_5433(var_160_object); // 0x14db NEW_2
	if(var_159_bool == 0) goto Label_5344; // 0x14dd JumpB
	var_157_bool = 1; // 0x14de MovB
	return 0; // 0x14df Return
	
Label_5344:
	var_157_bool = 0; // 0x14e0 MovB
	return 0; // 0x14e1 Return
}


func_5346(var_240_bool, var_241_object)
{
	var_242_bool = 0; var_243_object = Obj(); // 0x14e3 PushV
	var_243_object = var_241_object; // 0x14e4 Mov
	func_5440(var_243_object); // 0x14e5 NEW_2
	if(var_242_bool == 0) goto Label_5354; // 0x14e7 JumpB
	var_240_bool = 1; // 0x14e8 MovB
	return 0; // 0x14e9 Return
	
Label_5354:
	var_240_bool = 0; // 0x14ea MovB
	return 0; // 0x14eb Return
}


func_4835(var_26_bool, var_27_object, var_28_string)
{
	var_29_string = "unholster"; // 0x12e4 PushS
	var_30_bool = var_28_string == var_29_string; // 0x12e5 Eq
	if(var_30_bool == 0) goto Label_4846; // 0x12e6 JumpB
	var_31_bool = 0; var_32_object = Obj(); // 0x12e7 PushV
	var_32_object = var_27_object; // 0x12e8 Mov
	func_5143(var_31_bool, var_32_object); // 0x12e9 NEW_2
	var_26_bool = var_31_bool; // 0x12ea Mov
	return 0; // 0x12ec Return
	
Label_4846:
	var_35_string = "player_shot"; // 0x12ee PushS
	var_36_bool = var_28_string == var_35_string; // 0x12ef Eq
	if(var_36_bool == 0) goto Label_4856; // 0x12f0 JumpB
	var_37_bool = 0; var_38_object = Obj(); // 0x12f1 PushV
	var_38_object = var_27_object; // 0x12f2 Mov
	func_5156(var_37_bool, var_38_object); // 0x12f3 NEW_2
	var_26_bool = var_37_bool; // 0x12f4 Mov
	return 0; // 0x12f6 Return
	
Label_4856:
	var_52_string = "battle"; // 0x12f8 PushS
	var_53_bool = var_28_string == var_52_string; // 0x12f9 Eq
	if(var_53_bool == 0) goto Label_4865; // 0x12fa JumpB
	var_54_bool = 0; var_55_object = Obj(); // 0x12fb PushV
	var_55_object = var_27_object; // 0x12fc Mov
	func_5179(var_54_bool, var_55_object); // 0x12fd NEW_2
	var_26_bool = var_54_bool; // 0x12fe Mov
	return 0; // 0x1300 Return
	
Label_4865:
	var_26_bool = 0; // 0x1301 MovB
	return 0; // 0x1302 Return
}


func_5356(var_76_bool)
{
	var_78_int = 0; // 0x14ed PushV
	func_4810(var_78_int); // 0x14ee NEW_2
	var_84_int = 1; // 0x14f0 PushI
	var_76_bool = var_78_int == var_84_int; // 0x14f1 Eq2
	return 0; // 0x14f2 Return
}


func_5363(var_87_bool)
{
	var_89_int = 0; // 0x14f4 PushV
	func_4810(var_89_int); // 0x14f5 NEW_2
	var_90_int = 2; // 0x14f7 PushI
	var_87_bool = var_89_int == var_90_int; // 0x14f8 Eq2
	return 0; // 0x14f9 Return
}


func_5370(var_93_bool)
{
	var_95_int = 0; // 0x14fb PushV
	func_4810(var_95_int); // 0x14fc NEW_2
	var_96_int = 3; // 0x14fe PushI
	var_93_bool = var_95_int == var_96_int; // 0x14ff Eq2
	return 0; // 0x1500 Return
}


func_251(var_2_bool)
{
	var_23_int = 110; // 0xfb PushI
	KillTimer(var_23_int); // 0xfc Func
	var_2_bool = 0; // 0xfe TMovB
	func_387(var_21_string, var_22_bool); // 0x100 NEW_2
	return 0; // 0x102 Return
}


func_5377(var_99_bool)
{
	var_101_int = 0; // 0x1502 PushV
	func_4810(var_101_int); // 0x1503 NEW_2
	var_102_int = 4; // 0x1505 PushI
	var_99_bool = var_101_int == var_102_int; // 0x1506 Eq2
	return 0; // 0x1507 Return
}


func_4867(var_60_object, var_61_string)
{
	var_62_string = "unholster"; // 0x1304 PushS
	var_63_bool = var_61_string == var_62_string; // 0x1305 Eq
	if(var_63_bool == 0) goto Label_4876; // 0x1306 JumpB
	var_64_object = Obj(); // 0x1307 PushV
	var_64_object = var_60_object; // 0x1308 Mov
	func_5148(var_64_object); // 0x1309 NEW_2
	goto Label_4891; // 0x130b Jump
	
Label_4891:
	return 0; // 0x131b Return
	
Label_4876:
	var_137_string = "player_shot"; // 0x130c PushS
	var_138_bool = var_61_string == var_137_string; // 0x130d Eq
	if(var_138_bool == 0) goto Label_4884; // 0x130e JumpB
	var_139_object = Obj(); // 0x130f PushV
	var_139_object = var_60_object; // 0x1310 Mov
	func_5171(var_139_object); // 0x1311 NEW_2
	goto Label_4891; // 0x1313 Jump
	
Label_4884:
	var_205_string = "battle"; // 0x1314 PushS
	var_206_bool = var_61_string == var_205_string; // 0x1315 Eq
	if(var_206_bool == 0) goto Label_4891; // 0x1316 JumpB
	var_207_object = Obj(); // 0x1317 PushV
	var_207_object = var_60_object; // 0x1318 Mov
	func_5186(var_207_object); // 0x1319 NEW_2
}


func_259(var_2_bool)
{
	var_72_int = 110; // 0x103 PushI
	KillTimer(var_72_int); // 0x104 Func
	var_2_bool = 0; // 0x106 TMovB
	func_394(var_26_bool, var_27_int); // 0x108 NEW_2
	return 0; // 0x10a Return
}


func_5384(var_110_bool)
{
	var_112_int = 0; // 0x1509 PushV
	func_4810(var_112_int); // 0x150a NEW_2
	var_113_int = 5; // 0x150c PushI
	var_110_bool = var_112_int == var_113_int; // 0x150d Eq2
	return 0; // 0x150e Return
}


func_1805(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_118_object, var_119_object)
{
	var_0_bool = var_119_object; // 0x70e TMov
	var_1_bool = var_118_object; // 0x70f TMov
	var_3_bool = 0; // 0x710 TMovB
	var_124_int = 1; // 0x711 PushI
	if(var_124_int == 0) goto Label_2168; // 0x712 JumpB
	var_125_bool = 0; var_126_object = Obj(); // 0x713 PushV
	var_126_object = var_1_bool; // 0x714 MovT
	func_5214(var_126_object); // 0x715 NEW_2
	if(var_125_bool == 0) goto Label_2084; // 0x717 JumpB
	var_133_string = ""; // 0x718 PushV
	var_133_string = "Neutral"; // 0x719 MovS
	func_2198(var_119_object, var_133_string); // 0x71a NEW_2
	var_150_int = 543209; // 0x71c PushI
	SetMessage(var_150_int); // 0x71d TObjFunc
	ClearReplies(); // 0x71f TObjFunc
	var_151_bool = 0; // 0x721 PushV
	var_151_bool = 1; // 0x722 MovB
	var_152_bool = 0; // 0x723 PushV
	var_152_bool = 1; // 0x724 MovB
	var_153_bool = 0; // 0x725 PushV
	var_153_bool = 1; // 0x726 MovB
	var_154_bool = 0; var_155_object = Obj(); // 0x727 PushV
	var_155_object = var_1_bool; // 0x728 MovT
	func_5226(var_154_bool, var_155_object); // 0x729 NEW_2
	if(var_154_bool == 0) goto Label_1842; // 0x72b JumpB
	var_165_bool = 0; var_166_object = Obj(); // 0x72c PushV
	var_166_object = var_1_bool; // 0x72d MovT
	func_5236(var_165_bool, var_166_object); // 0x72e NEW_2
	if(var_165_bool == 0) goto Label_1842; // 0x730 JumpB
	var_153_bool = 0; // 0x731 MovB
	
Label_1842:
	if(var_153_bool == 0) goto Label_1849; // 0x732 JumpB
	var_171_bool = 0; var_172_object = Obj(); // 0x733 PushV
	var_172_object = var_1_bool; // 0x734 MovT
	func_5246(var_171_bool, var_172_object); // 0x735 NEW_2
	if(var_171_bool == 0) goto Label_1849; // 0x737 JumpB
	var_152_bool = 0; // 0x738 MovB
	
Label_1849:
	if(var_152_bool == 0) goto Label_1856; // 0x739 JumpB
	var_177_bool = 0; var_178_object = Obj(); // 0x73a PushV
	var_178_object = var_1_bool; // 0x73b MovT
	func_5256(var_177_bool, var_178_object); // 0x73c NEW_2
	if(var_177_bool == 0) goto Label_1856; // 0x73e JumpB
	var_151_bool = 0; // 0x73f MovB
	
Label_1856:
	if(var_151_bool == 0) goto Label_1862; // 0x740 JumpB
	var_183_int = 543210; // 0x741 PushI
	var_184_int = -1; // 0x742 PushI
	var_185_int = 45666; // 0x743 PushI
	AddReply(var_183_int, var_184_int, var_185_int); // 0x744 TObjFunc
	
Label_1862:
	var_186_bool = 0; // 0x746 PushV
	var_186_bool = 1; // 0x747 MovB
	var_187_bool = 0; // 0x748 PushV
	var_187_bool = 1; // 0x749 MovB
	var_188_bool = 0; var_189_object = Obj(); // 0x74a PushV
	var_189_object = var_1_bool; // 0x74b MovT
	func_5266(var_188_bool, var_189_object); // 0x74c NEW_2
	if(var_188_bool == 0) goto Label_1877; // 0x74e JumpB
	var_194_bool = 0; var_195_object = Obj(); // 0x74f PushV
	var_195_object = var_1_bool; // 0x750 MovT
	func_5276(var_194_bool, var_195_object); // 0x751 NEW_2
	if(var_194_bool == 0) goto Label_1877; // 0x753 JumpB
	var_187_bool = 0; // 0x754 MovB
	
Label_1877:
	if(var_187_bool == 0) goto Label_1884; // 0x755 JumpB
	var_200_bool = 0; var_201_object = Obj(); // 0x756 PushV
	var_201_object = var_1_bool; // 0x757 MovT
	func_5286(var_200_bool, var_201_object); // 0x758 NEW_2
	if(var_200_bool == 0) goto Label_1884; // 0x75a JumpB
	var_186_bool = 0; // 0x75b MovB
	
Label_1884:
	if(var_186_bool == 0) goto Label_1890; // 0x75c JumpB
	var_206_int = 543211; // 0x75d PushI
	var_207_int = -1; // 0x75e PushI
	var_208_int = 45667; // 0x75f PushI
	AddReply(var_206_int, var_207_int, var_208_int); // 0x760 TObjFunc
	
Label_1890:
	var_209_bool = 0; // 0x762 PushV
	var_209_bool = 1; // 0x763 MovB
	var_210_bool = 0; // 0x764 PushV
	var_210_bool = 1; // 0x765 MovB
	var_211_bool = 0; // 0x766 PushV
	var_211_bool = 1; // 0x767 MovB
	var_212_bool = 0; // 0x768 PushV
	var_212_bool = 1; // 0x769 MovB
	var_213_bool = 0; var_214_object = Obj(); // 0x76a PushV
	var_214_object = var_1_bool; // 0x76b MovT
	func_5296(var_213_bool, var_214_object); // 0x76c NEW_2
	if(var_213_bool == 0) goto Label_1909; // 0x76e JumpB
	var_219_bool = 0; var_220_object = Obj(); // 0x76f PushV
	var_220_object = var_1_bool; // 0x770 MovT
	func_5306(var_219_bool, var_220_object); // 0x771 NEW_2
	if(var_219_bool == 0) goto Label_1909; // 0x773 JumpB
	var_212_bool = 0; // 0x774 MovB
	
Label_1909:
	if(var_212_bool == 0) goto Label_1916; // 0x775 JumpB
	var_225_bool = 0; var_226_object = Obj(); // 0x776 PushV
	var_226_object = var_1_bool; // 0x777 MovT
	func_5316(var_225_bool, var_226_object); // 0x778 NEW_2
	if(var_225_bool == 0) goto Label_1916; // 0x77a JumpB
	var_211_bool = 0; // 0x77b MovB
	
Label_1916:
	if(var_211_bool == 0) goto Label_1923; // 0x77c JumpB
	var_231_bool = 0; var_232_object = Obj(); // 0x77d PushV
	var_232_object = var_1_bool; // 0x77e MovT
	func_5326(var_231_bool, var_232_object); // 0x77f NEW_2
	if(var_231_bool == 0) goto Label_1923; // 0x781 JumpB
	var_210_bool = 0; // 0x782 MovB
	
Label_1923:
	if(var_210_bool == 0) goto Label_1930; // 0x783 JumpB
	var_237_bool = 0; var_238_object = Obj(); // 0x784 PushV
	var_238_object = var_1_bool; // 0x785 MovT
	func_5336(var_237_bool, var_238_object); // 0x786 NEW_2
	if(var_237_bool == 0) goto Label_1930; // 0x788 JumpB
	var_209_bool = 0; // 0x789 MovB
	
Label_1930:
	if(var_209_bool == 0) goto Label_1936; // 0x78a JumpB
	var_243_int = 543212; // 0x78b PushI
	var_244_int = -1; // 0x78c PushI
	var_245_int = 45668; // 0x78d PushI
	AddReply(var_243_int, var_244_int, var_245_int); // 0x78e TObjFunc
	
Label_1936:
	var_246_bool = 0; // 0x790 PushV
	var_246_bool = 1; // 0x791 MovB
	var_247_bool = 0; // 0x792 PushV
	var_247_bool = 1; // 0x793 MovB
	var_248_bool = 0; // 0x794 PushV
	var_248_bool = 1; // 0x795 MovB
	var_249_bool = 0; // 0x796 PushV
	var_249_bool = 1; // 0x797 MovB
	var_250_bool = 0; var_251_object = Obj(); // 0x798 PushV
	var_251_object = var_1_bool; // 0x799 MovT
	func_5226(var_250_bool, var_251_object); // 0x79a NEW_2
	if(var_250_bool == 0) goto Label_1955; // 0x79c JumpB
	var_252_bool = 0; var_253_object = Obj(); // 0x79d PushV
	var_253_object = var_1_bool; // 0x79e MovT
	func_5236(var_252_bool, var_253_object); // 0x79f NEW_2
	if(var_252_bool == 0) goto Label_1955; // 0x7a1 JumpB
	var_249_bool = 0; // 0x7a2 MovB
	
Label_1955:
	if(var_249_bool == 0) goto Label_1962; // 0x7a3 JumpB
	var_254_bool = 0; var_255_object = Obj(); // 0x7a4 PushV
	var_255_object = var_1_bool; // 0x7a5 MovT
	func_5256(var_254_bool, var_255_object); // 0x7a6 NEW_2
	if(var_254_bool == 0) goto Label_1962; // 0x7a8 JumpB
	var_248_bool = 0; // 0x7a9 MovB
	
Label_1962:
	if(var_248_bool == 0) goto Label_1969; // 0x7aa JumpB
	var_256_bool = 0; var_257_object = Obj(); // 0x7ab PushV
	var_257_object = var_1_bool; // 0x7ac MovT
	func_5266(var_256_bool, var_257_object); // 0x7ad NEW_2
	if(var_256_bool == 0) goto Label_1969; // 0x7af JumpB
	var_247_bool = 0; // 0x7b0 MovB
	
Label_1969:
	if(var_247_bool == 0) goto Label_1976; // 0x7b1 JumpB
	var_258_bool = 0; var_259_object = Obj(); // 0x7b2 PushV
	var_259_object = var_1_bool; // 0x7b3 MovT
	func_5286(var_258_bool, var_259_object); // 0x7b4 NEW_2
	if(var_258_bool == 0) goto Label_1976; // 0x7b6 JumpB
	var_246_bool = 0; // 0x7b7 MovB
	
Label_1976:
	if(var_246_bool == 0) goto Label_1982; // 0x7b8 JumpB
	var_260_int = 543213; // 0x7b9 PushI
	var_261_int = -1; // 0x7ba PushI
	var_262_int = 45669; // 0x7bb PushI
	AddReply(var_260_int, var_261_int, var_262_int); // 0x7bc TObjFunc
	
Label_1982:
	var_263_bool = 0; // 0x7be PushV
	var_263_bool = 1; // 0x7bf MovB
	var_264_bool = 0; // 0x7c0 PushV
	var_264_bool = 1; // 0x7c1 MovB
	var_265_bool = 0; // 0x7c2 PushV
	var_265_bool = 1; // 0x7c3 MovB
	var_266_bool = 0; // 0x7c4 PushV
	var_266_bool = 1; // 0x7c5 MovB
	var_267_bool = 0; // 0x7c6 PushV
	var_267_bool = 1; // 0x7c7 MovB
	var_268_bool = 0; // 0x7c8 PushV
	var_268_bool = 1; // 0x7c9 MovB
	var_269_bool = 0; var_270_object = Obj(); // 0x7ca PushV
	var_270_object = var_1_bool; // 0x7cb MovT
	func_5246(var_269_bool, var_270_object); // 0x7cc NEW_2
	if(var_269_bool == 0) goto Label_2005; // 0x7ce JumpB
	var_271_bool = 0; var_272_object = Obj(); // 0x7cf PushV
	var_272_object = var_1_bool; // 0x7d0 MovT
	func_5276(var_271_bool, var_272_object); // 0x7d1 NEW_2
	if(var_271_bool == 0) goto Label_2005; // 0x7d3 JumpB
	var_268_bool = 0; // 0x7d4 MovB
	
Label_2005:
	if(var_268_bool == 0) goto Label_2012; // 0x7d5 JumpB
	var_273_bool = 0; var_274_object = Obj(); // 0x7d6 PushV
	var_274_object = var_1_bool; // 0x7d7 MovT
	func_5306(var_273_bool, var_274_object); // 0x7d8 NEW_2
	if(var_273_bool == 0) goto Label_2012; // 0x7da JumpB
	var_267_bool = 0; // 0x7db MovB
	
Label_2012:
	if(var_267_bool == 0) goto Label_2019; // 0x7dc JumpB
	var_275_bool = 0; var_276_object = Obj(); // 0x7dd PushV
	var_276_object = var_1_bool; // 0x7de MovT
	func_5336(var_275_bool, var_276_object); // 0x7df NEW_2
	if(var_275_bool == 0) goto Label_2019; // 0x7e1 JumpB
	var_266_bool = 0; // 0x7e2 MovB
	
Label_2019:
	if(var_266_bool == 0) goto Label_2026; // 0x7e3 JumpB
	var_277_bool = 0; var_278_object = Obj(); // 0x7e4 PushV
	var_278_object = var_1_bool; // 0x7e5 MovT
	func_5236(var_277_bool, var_278_object); // 0x7e6 NEW_2
	if(var_277_bool == 0) goto Label_2026; // 0x7e8 JumpB
	var_265_bool = 0; // 0x7e9 MovB
	
Label_2026:
	if(var_265_bool == 0) goto Label_2033; // 0x7ea JumpB
	var_279_bool = 0; var_280_object = Obj(); // 0x7eb PushV
	var_280_object = var_1_bool; // 0x7ec MovT
	func_5296(var_279_bool, var_280_object); // 0x7ed NEW_2
	if(var_279_bool == 0) goto Label_2033; // 0x7ef JumpB
	var_264_bool = 0; // 0x7f0 MovB
	
Label_2033:
	if(var_264_bool == 0) goto Label_2040; // 0x7f1 JumpB
	var_281_bool = 0; var_282_object = Obj(); // 0x7f2 PushV
	var_282_object = var_1_bool; // 0x7f3 MovT
	func_5316(var_281_bool, var_282_object); // 0x7f4 NEW_2
	if(var_281_bool == 0) goto Label_2040; // 0x7f6 JumpB
	var_263_bool = 0; // 0x7f7 MovB
	
Label_2040:
	if(var_263_bool == 0) goto Label_2046; // 0x7f8 JumpB
	var_283_int = 543215; // 0x7f9 PushI
	var_284_int = -1; // 0x7fa PushI
	var_285_int = 45671; // 0x7fb PushI
	AddReply(var_283_int, var_284_int, var_285_int); // 0x7fc TObjFunc
	
Label_2046:
	var_286_bool = 0; // 0x7fe PushV
	var_286_bool = 1; // 0x7ff MovB
	var_287_bool = 0; // 0x800 PushV
	var_287_bool = 1; // 0x801 MovB
	var_288_bool = 0; // 0x802 PushV
	var_288_bool = 1; // 0x803 MovB
	var_289_bool = 0; var_290_object = Obj(); // 0x804 PushV
	var_290_object = var_1_bool; // 0x805 MovT
	func_5326(var_289_bool, var_290_object); // 0x806 NEW_2
	if(var_289_bool == 0) goto Label_2063; // 0x808 JumpB
	var_291_bool = 0; var_292_object = Obj(); // 0x809 PushV
	var_292_object = var_1_bool; // 0x80a MovT
	func_5306(var_291_bool, var_292_object); // 0x80b NEW_2
	if(var_291_bool == 0) goto Label_2063; // 0x80d JumpB
	var_288_bool = 0; // 0x80e MovB
	
Label_2063:
	if(var_288_bool == 0) goto Label_2070; // 0x80f JumpB
	var_293_bool = 0; var_294_object = Obj(); // 0x810 PushV
	var_294_object = var_1_bool; // 0x811 MovT
	func_5296(var_293_bool, var_294_object); // 0x812 NEW_2
	if(var_293_bool == 0) goto Label_2070; // 0x814 JumpB
	var_287_bool = 0; // 0x815 MovB
	
Label_2070:
	if(var_287_bool == 0) goto Label_2077; // 0x816 JumpB
	var_295_bool = 0; var_296_object = Obj(); // 0x817 PushV
	var_296_object = var_1_bool; // 0x818 MovT
	func_5286(var_295_bool, var_296_object); // 0x819 NEW_2
	if(var_295_bool == 0) goto Label_2077; // 0x81b JumpB
	var_286_bool = 0; // 0x81c MovB
	
Label_2077:
	if(var_286_bool == 0) goto Label_2083; // 0x81d JumpB
	var_297_int = 543219; // 0x81e PushI
	var_298_int = -1; // 0x81f PushI
	var_299_int = 45675; // 0x820 PushI
	AddReply(var_297_int, var_298_int, var_299_int); // 0x821 TObjFunc
	
Label_2083:
	goto Label_2168; // 0x823 Jump
	
Label_2168:
	var_300_bool = 0; // 0x878 PushV
	func_5605(var_300_bool); // 0x879 NEW_2
	if(var_300_bool == 0) goto Label_2183; // 0x87b JumpB
	
Label_2172:
	lshWaitForAnimEnd(); // 0x87c Func
	var_301_bool = var_3_bool; // 0x87e PushT
	if(var_301_bool == 0) goto Label_2177; // 0x87f JumpB
	goto Label_2182; // 0x880 Jump
	
Label_2182:
	goto Label_2197; // 0x886 Jump
	
Label_2197:
	return 0; // 0x895 Return
	
Label_2177:
	var_302_string = ""; // 0x881 PushV
	var_302_string = var_2_bool; // 0x882 MovT
	func_4665(var_302_string); // 0x883 NEW_2
	goto Label_2172; // 0x885 Jump
	
Label_2183:
	var_313_string = "all"; // 0x887 PushS
	var_314_string = "idle"; // 0x888 PushS
	PlayAnimation(var_313_string, var_314_string); // 0x889 Func
	
Label_2187:
	WaitForAnimEnd(); // 0x88b Func
	var_315_bool = var_3_bool; // 0x88d PushT
	if(var_315_bool == 0) goto Label_2192; // 0x88e JumpB
	goto Label_2197; // 0x88f Jump
	
Label_2192:
	var_316_string = "all"; // 0x890 PushS
	var_317_string = "idle"; // 0x891 PushS
	PlayAnimation(var_316_string, var_317_string); // 0x892 Func
	goto Label_2187; // 0x894 Jump
	
Label_2084:
	var_318_string = ""; // 0x824 PushV
	var_318_string = "Neutral"; // 0x825 MovS
	func_2198(var_119_object, var_318_string); // 0x826 NEW_2
	var_319_int = 537240; // 0x828 PushI
	SetMessage(var_319_int); // 0x829 TObjFunc
	ClearReplies(); // 0x82b TObjFunc
	var_320_int = 537241; // 0x82d PushI
	var_321_int = -1; // 0x82e PushI
	var_322_int = 39084; // 0x82f PushI
	AddReply(var_320_int, var_321_int, var_322_int); // 0x830 TObjFunc
	var_323_bool = 0; // 0x832 PushV
	var_323_bool = 0; // 0x833 MovB
	var_324_bool = 0; var_325_object = Obj(); // 0x834 PushV
	var_325_object = var_1_bool; // 0x835 MovT
	func_5202(var_325_object); // 0x836 NEW_2
	if(var_324_bool == 0) goto Label_2111; // 0x838 JumpB
	var_330_bool = 0; var_331_object = Obj(); // 0x839 PushV
	var_331_object = var_1_bool; // 0x83a MovT
	func_5226(var_330_bool, var_331_object); // 0x83b NEW_2
	if(var_330_bool == 0) goto Label_2111; // 0x83d JumpB
	var_323_bool = 1; // 0x83e MovB
	
Label_2111:
	if(var_323_bool == 0) goto Label_2117; // 0x83f JumpB
	var_332_int = 537242; // 0x840 PushI
	var_333_int = 39086; // 0x841 PushI
	var_334_int = 39085; // 0x842 PushI
	AddReply(var_332_int, var_333_int, var_334_int); // 0x843 TObjFunc
	
Label_2117:
	var_335_bool = 0; // 0x845 PushV
	var_335_bool = 0; // 0x846 MovB
	var_336_bool = 0; var_337_object = Obj(); // 0x847 PushV
	var_337_object = var_1_bool; // 0x848 MovT
	func_5246(var_336_bool, var_337_object); // 0x849 NEW_2
	if(var_336_bool == 0) goto Label_2130; // 0x84b JumpB
	var_338_bool = 0; var_339_object = Obj(); // 0x84c PushV
	var_339_object = var_1_bool; // 0x84d MovT
	func_5346(var_338_bool, var_339_object); // 0x84e NEW_2
	if(var_338_bool == 0) goto Label_2130; // 0x850 JumpB
	var_335_bool = 1; // 0x851 MovB
	
Label_2130:
	if(var_335_bool == 0) goto Label_2136; // 0x852 JumpB
	var_353_int = 537352; // 0x853 PushI
	var_354_int = 39199; // 0x854 PushI
	var_355_int = 39198; // 0x855 PushI
	AddReply(var_353_int, var_354_int, var_355_int); // 0x856 TObjFunc
	
Label_2136:
	var_356_bool = 0; // 0x858 PushV
	var_356_bool = 0; // 0x859 MovB
	var_357_bool = 0; var_358_object = Obj(); // 0x85a PushV
	var_358_object = var_1_bool; // 0x85b MovT
	func_5256(var_357_bool, var_358_object); // 0x85c NEW_2
	if(var_357_bool == 0) goto Label_2149; // 0x85e JumpB
	var_359_bool = 0; var_360_object = Obj(); // 0x85f PushV
	var_360_object = var_1_bool; // 0x860 MovT
	func_5346(var_359_bool, var_360_object); // 0x861 NEW_2
	if(var_359_bool == 0) goto Label_2149; // 0x863 JumpB
	var_356_bool = 1; // 0x864 MovB
	
Label_2149:
	if(var_356_bool == 0) goto Label_2155; // 0x865 JumpB
	var_361_int = 537380; // 0x866 PushI
	var_362_int = 39227; // 0x867 PushI
	var_363_int = 39226; // 0x868 PushI
	AddReply(var_361_int, var_362_int, var_363_int); // 0x869 TObjFunc
	
Label_2155:
	var_364_int = 537503; // 0x86b PushI
	var_365_int = -1; // 0x86c PushI
	var_366_int = 39350; // 0x86d PushI
	AddReply(var_364_int, var_365_int, var_366_int); // 0x86e TObjFunc
	var_367_int = 537504; // 0x870 PushI
	var_368_int = -1; // 0x871 PushI
	var_369_int = 39351; // 0x872 PushI
	AddReply(var_367_int, var_368_int, var_369_int); // 0x873 TObjFunc
	goto Label_2168; // 0x875 Jump
}


func_5391(var_116_bool)
{
	var_118_int = 0; // 0x1510 PushV
	func_4810(var_118_int); // 0x1511 NEW_2
	var_119_int = 6; // 0x1513 PushI
	var_116_bool = var_118_int == var_119_int; // 0x1514 Eq2
	return 0; // 0x1515 Return
}


func_276(var_2_bool, var_23_object)
{
	var_24_bool = 0; var_25_int = 0; var_26_bool = 0; var_27_int = 0; // 0x114 PushV
	var_28_bool = 0; var_29_object = Obj(); // 0x115 PushV
	var_29_object = var_23_object; // 0x116 Mov
	func_4481(var_28_bool, var_29_object); // 0x117 NEW_2
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
	func_4987(var_66_object); // 0x126 NEW_2
	var_27_int = var_65_int; // 0x127 Mov
	var_68_int = 0; // 0x129 PushI
	var_69_bool = var_27_int > var_68_int; // 0x12a GT
	if(var_69_bool == 0) goto Label_315; // 0x12b JumpB
	var_70_int = 1; // 0x12c PushI
	var_71_bool = var_27_int > var_70_int; // 0x12d GT
	if(var_71_bool == 0) goto Label_306; // 0x12e JumpB
	func_259(var_27_int); // 0x130 NEW_2
	
Label_306:
	var_73_object = Obj(); // 0x132 PushV
	var_73_object = var_23_object; // 0x133 Mov
	func_4996(var_73_object); // 0x134 NEW_2
	var_2_bool = 1; // 0x136 TMovB
	var_138_int = 110; // 0x137 PushI
	var_139_float = 10.0; // 0x138 PushF
	SetTimer(var_138_int, var_139_float); // 0x139 Func
	
Label_315:
	return 4; // 0x13b Return
}


func_5398(var_122_bool)
{
	var_124_int = 0; // 0x1517 PushV
	func_4810(var_124_int); // 0x1518 NEW_2
	var_125_int = 7; // 0x151a PushI
	var_122_bool = var_124_int == var_125_int; // 0x151b Eq2
	return 0; // 0x151c Return
}


func_4892(var_23_bool, var_24_object)
{
	var_25_bool = 0; var_26_bool = 0; // 0x131c PushV
	var_27_bool = 0; // 0x131d PushV
	var_27_bool = 0; // 0x131e MovB
	var_28_bool = 0; var_29_object = Obj(); // 0x131f PushV
	var_29_object = var_24_object; // 0x1320 Mov
	func_5143(var_28_bool, var_29_object); // 0x1321 NEW_2
	if(var_28_bool == 0) goto Label_4906; // 0x1323 JumpB
	var_32_bool = 0; var_33_object = Obj(); // 0x1324 PushV
	var_33_object = var_24_object; // 0x1325 Mov
	func_4423(var_32_bool, var_33_object); // 0x1326 NEW_2
	if(var_32_bool == 0) goto Label_4906; // 0x1328 JumpB
	var_27_bool = 1; // 0x1329 MovB
	
Label_4906:
	if(var_27_bool == 0) goto Label_4913; // 0x132a JumpB
	IsWeaponHolstered(var_26_bool); // 0x132b ObjFunc
	var_36_bool = var_26_bool == 0; // 0x132d Not
	if(var_36_bool == 0) goto Label_4913; // 0x132e JumpB
	var_23_bool = 1; // 0x132f MovB
	return 2; // 0x1330 Return
	
Label_4913:
	var_23_bool = 0; // 0x1331 MovB
	return 2; // 0x1332 Return
}


func_5405(var_135_bool)
{
	var_137_int = 0; // 0x151e PushV
	func_4810(var_137_int); // 0x151f NEW_2
	var_138_int = 8; // 0x1521 PushI
	var_135_bool = var_137_int == var_138_int; // 0x1522 Eq2
	return 0; // 0x1523 Return
}


func_1311(var_2_bool)
{
	Stop(); // 0x51f Func
	var_23_int = 120; // 0x521 PushI
	KillTimer(var_23_int); // 0x522 Func
	var_2_bool = 1; // 0x524 TMovB
	return 0; // 0x525 Return
}


func_5412(var_141_bool)
{
	var_143_int = 0; // 0x1525 PushV
	func_4810(var_143_int); // 0x1526 NEW_2
	var_144_int = 9; // 0x1528 PushI
	var_141_bool = var_143_int == var_144_int; // 0x1529 Eq2
	return 0; // 0x152a Return
}


func_5419(var_147_bool)
{
	var_149_int = 0; // 0x152c PushV
	func_4810(var_149_int); // 0x152d NEW_2
	var_150_int = 10; // 0x152f PushI
	var_147_bool = var_149_int == var_150_int; // 0x1530 Eq2
	return 0; // 0x1531 Return
}


func_1327(var_0_bool, var_74_bool)
{
	var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0); // 0x52f PushV
	GetDirection(var_77_cvector); // 0x530 Func
	var_79_cvector = CVector(0,0,0); var_80_object = Obj(); // 0x532 PushV
	var_80_object = var_0_bool; // 0x533 MovT
	func_4408(var_80_object); // 0x534 NEW_2
	var_78_cvector = var_79_cvector; // 0x535 Mov
	var_85_float = 0; var_86_cvector = CVector(0,0,0); var_87_cvector = CVector(0,0,0); // 0x537 PushV
	var_86_cvector = var_77_cvector; // 0x538 Mov
	var_87_cvector = var_78_cvector; // 0x539 Mov
	func_4761(var_85_float, var_86_cvector, var_87_cvector); // 0x53a NEW_2
	var_93_float = -0.34202; // 0x53c PushF
	var_74_bool = var_85_float >= var_93_float; // 0x53d GE2
	return 4; // 0x53e Return
}


func_5426(var_153_bool)
{
	var_155_int = 0; // 0x1533 PushV
	func_4810(var_155_int); // 0x1534 NEW_2
	var_156_int = 11; // 0x1536 PushI
	var_153_bool = var_155_int == var_156_int; // 0x1537 Eq2
	return 0; // 0x1538 Return
}


func_4915(var_39_object)
{
	var_40_object = Obj(); // 0x1334 PushV
	var_40_object = var_39_object; // 0x1335 Mov
	func_5148(var_40_object); // 0x1336 NEW_2
	return 0; // 0x1338 Return
}


func_4403(var_94_cvector)
{
	var_95_cvector = CVector(0,0,0); var_96_cvector = CVector(0,0,0); // 0x1133 PushV
	GetPosition(var_96_cvector); // 0x1134 Func
	var_94_cvector = var_96_cvector; // 0x1136 Mov
	return 2; // 0x1137 Return
}


func_4408(var_79_cvector)
{
	var_81_cvector = CVector(0,0,0); var_82_cvector = CVector(0,0,0); var_83_cvector = CVector(0,0,0); var_84_cvector = CVector(0,0,0); // 0x1138 PushV
	GetPosition(var_83_cvector); // 0x1139 Func
	GetPosition(var_84_cvector); // 0x113b ObjFunc
	var_79_cvector = var_84_cvector - var_83_cvector; // 0x113d Sub2
	return 4; // 0x113e Return
}


func_4921(var_25_object)
{
	var_26_bool = 0; var_27_object = Obj(); // 0x133a PushV
	var_27_object = var_25_object; // 0x133b Mov
	func_4423(var_26_bool, var_27_object); // 0x133c NEW_2
	if(var_26_bool == 0) goto Label_4933; // 0x133e JumpB
	var_30_object = Obj(); // 0x133f PushV
	func_4740(var_30_object); // 0x1340 NEW_2
	var_33_float = -0.05; // 0x1342 PushF
	ReportReputationChange(var_25_object, var_30_object, var_33_float); // 0x1343 Func
	
Label_4933:
	return 0; // 0x1345 Return
}


func_5433(var_159_bool)
{
	var_161_int = 0; // 0x153a PushV
	func_4810(var_161_int); // 0x153b NEW_2
	var_162_int = 12; // 0x153d PushI
	var_159_bool = var_161_int == var_162_int; // 0x153e Eq2
	return 0; // 0x153f Return
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


func_4415(var_42_float)
{
	var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); // 0x113f PushV
	GetPosition(var_47_cvector); // 0x1140 Func
	GetPosition(var_48_cvector); // 0x1142 ObjFunc
	var_49_cvector = var_48_cvector - var_47_cvector; // 0x1144 Sub2
	var_42_float = var_49_cvector | var_49_cvector; // 0x1145 Or2
	return 6; // 0x1146 Return
}


func_5440(var_242_bool)
{
	var_244_bool = 0; // 0x1541 PushV
	var_244_bool = 0; // 0x1542 MovB
	var_245_int = 0; // 0x1543 PushV
	func_4819(var_245_int); // 0x1544 NEW_2
	var_250_int = 0; // 0x1546 PushI
	var_251_bool = var_245_int >= var_250_int; // 0x1547 GE
	if(var_251_bool == 0) goto Label_5456; // 0x1548 JumpB
	var_252_int = 0; // 0x1549 PushV
	func_4819(var_252_int); // 0x154a NEW_2
	var_253_int = 12; // 0x154c PushI
	var_254_bool = var_252_int < var_253_int; // 0x154d LT
	if(var_254_bool == 0) goto Label_5456; // 0x154e JumpB
	var_244_bool = 1; // 0x154f MovB
	
Label_5456:
	if(var_244_bool == 0) goto Label_5459; // 0x1550 JumpB
	var_242_bool = 1; // 0x1551 MovB
	return 0; // 0x1552 Return
	
Label_5459:
	var_242_bool = 0; // 0x1553 MovB
	return 0; // 0x1554 Return
}


func_4934(var_23_bool, var_24_string)
{
	var_25_object = Obj(); var_26_object = Obj(); // 0x1346 PushV
	var_27_string = "heal"; // 0x1347 PushS
	var_28_bool = var_24_string == var_27_string; // 0x1348 Eq
	if(var_28_bool == 0) goto Label_4948; // 0x1349 JumpB
	var_29_string = "player"; // 0x134a PushS
	FindActor(var_26_object, var_29_string); // 0x134b Func
	var_30_bool = 0; var_31_object = Obj(); // 0x134d PushV
	var_31_object = var_26_object; // 0x134e Mov
	func_5192(var_31_object); // 0x134f NEW_2
	var_23_bool = var_30_bool; // 0x1350 Mov
	return 2; // 0x1352 Return
	
Label_4948:
	var_23_bool = 0; // 0x1354 MovB
	return 2; // 0x1355 Return
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
	func_4746(var_52_cvector, var_53_cvector); // 0x550 NEW_2
	var_59_float = 0.75; // 0x552 PushF
	var_60_float = var_46_cvector * var_59_float; // 0x553 Mult
	var_51_cvector = var_52_cvector + var_60_float; // 0x554 Add2
	func_4746(var_50_cvector, var_51_cvector); // 0x555 NEW_2
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


func_4423(var_32_bool, var_33_object)
{
	var_34_bool = 0; var_35_bool = 0; // 0x1147 PushV
	IsPlayerActor(var_33_object, var_35_bool); // 0x1148 Func
	var_32_bool = var_35_bool; // 0x114a Mov
	return 2; // 0x114b Return
}


func_4428(var_51_bool, var_52_object, var_53_string)
{
	var_54_bool = 0; var_55_bool = 0; // 0x114c PushV
	var_56_string = "HasProperty"; // 0x114d PushS
	var_57_int = 2; // 0x114e PushI
	var_58_bool = IsFuncExist(var_52_object, var_56_string, var_57_int); // 0x114f FuncExist
	var_59_bool = var_58_bool == 0; // 0x1150 Not
	if(var_59_bool == 0) goto Label_4436; // 0x1151 JumpB
	var_51_bool = 0; // 0x1152 MovB
	return 2; // 0x1153 Return
	
Label_4436:
	HasProperty(var_53_string, var_55_bool); // 0x1154 ObjFunc
	var_51_bool = var_55_bool; // 0x1156 Mov
	return 2; // 0x1157 Return
}


func_5461(var_109_int)
{
	var_110_int = 0; var_111_int = 0; // 0x1555 PushV
	var_112_string = "branch"; // 0x1556 PushS
	GetVariable(var_112_string, var_111_int); // 0x1557 Func
	var_113_int = 0; // 0x1559 PushI
	var_114_bool = var_111_int == var_113_int; // 0x155a Eq
	if(var_114_bool == 0) goto Label_5471; // 0x155b JumpB
	var_109_int = 1; // 0x155c MovI
	return 2; // 0x155d Return
	
Label_5471:
	var_115_int = 1; // 0x155f PushI
	var_116_bool = var_111_int == var_115_int; // 0x1560 Eq
	if(var_116_bool == 0) goto Label_5476; // 0x1561 JumpB
	var_109_int = 2; // 0x1562 MovI
	return 2; // 0x1563 Return
	
Label_5476:
	var_109_int = 3; // 0x1564 MovI
	return 2; // 0x1565 Return
}


func_4950(var_34_string)
{
	var_35_object = Obj(); var_36_object = Obj(); // 0x1356 PushV
	var_37_string = "heal"; // 0x1357 PushS
	var_38_bool = var_34_string == var_37_string; // 0x1358 Eq
	if(var_38_bool == 0) goto Label_4962; // 0x1359 JumpB
	var_39_string = "player"; // 0x135a PushS
	FindActor(var_36_object, var_39_string); // 0x135b Func
	var_40_object = Obj(); // 0x135d PushV
	var_40_object = var_36_object; // 0x135e Mov
	func_5195(); // 0x135f NEW_2
	var_36_object = 0; // 0x1361 SetNull
	
Label_4962:
	return 2; // 0x1362 Return
}


func_4440(var_44_bool)
{
	var_46_bool = 0; var_47_bool = 0; // 0x1158 PushV
	IsDead(var_47_bool); // 0x1159 ObjFunc
	var_44_bool = var_47_bool; // 0x115b Mov
	return 2; // 0x115c Return
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


func_4445(var_33_bool, var_34_object)
{
	var_35_object = Obj(); var_36_object = Obj(); var_37_object = Obj(); var_38_object = Obj(); // 0x115d PushV
	var_39_bool = var_34_object == 0; // 0x115e NullEq
	if(var_39_bool == 0) goto Label_4450; // 0x115f JumpB
	var_33_bool = 0; // 0x1160 MovB
	return 4; // 0x1161 Return
	
Label_4450:
	var_40_bool = 0; // 0x1162 PushV
	var_40_bool = 0; // 0x1163 MovB
	var_41_string = "IsDead"; // 0x1164 PushS
	var_42_int = 1; // 0x1165 PushI
	var_43_bool = IsFuncExist(var_34_object, var_41_string, var_42_int); // 0x1166 FuncExist
	if(var_43_bool == 0) goto Label_4462; // 0x1167 JumpB
	var_44_bool = 0; var_45_object = Obj(); // 0x1168 PushV
	var_45_object = var_34_object; // 0x1169 Mov
	func_4440(var_45_object); // 0x116a NEW_2
	if(var_44_bool == 0) goto Label_4462; // 0x116c JumpB
	var_40_bool = 1; // 0x116d MovB
	
Label_4462:
	if(var_40_bool == 0) goto Label_4465; // 0x116e JumpB
	var_33_bool = 0; // 0x116f MovB
	return 4; // 0x1170 Return
	
Label_4465:
	GetScene(var_37_object); // 0x1171 Func
	var_48_bool = var_37_object == 0; // 0x1173 NullEq
	if(var_48_bool == 0) goto Label_4471; // 0x1174 JumpB
	var_33_bool = 0; // 0x1175 MovB
	return 4; // 0x1176 Return
	
Label_4471:
	GetScene(var_38_object); // 0x1177 ObjFunc
	var_49_bool = var_37_object != var_38_object; // 0x1179 Neq
	if(var_49_bool == 0) goto Label_4477; // 0x117a JumpB
	var_33_bool = 0; // 0x117b MovB
	return 4; // 0x117c Return
	
Label_4477:
	var_33_bool = 1; // 0x117d MovB
	return 4; // 0x117e Return
}


func_4963(var_158_string, var_159_int)
{
	var_160_string = ""; var_161_string = ""; // 0x1363 PushV
	var_161_string = "idle"; // 0x1364 MovS
	var_162_int = var_159_int; // 0x1365 Push
	if(var_162_int == 0) goto Label_4968; // 0x1366 JumpB
	var_161_string = var_161_string + var_159_int; // 0x1367 Add2
	
Label_4968:
	var_158_string = var_161_string; // 0x1368 Mov
	return 2; // 0x1369 Return
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
	func_4403(var_97_cvector); // 0x586 NEW_2
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
	func_4403(var_109_cvector); // 0x5a1 NEW_2
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


func_5478(var_40_int)
{
	var_41_int = 0; var_42_int = 0; // 0x1566 PushV
	var_43_string = "branch"; // 0x1567 PushS
	GetVariable(var_43_string, var_42_int); // 0x1568 Func
	var_40_int = var_42_int; // 0x156a Mov
	return 2; // 0x156b Return
}


func_4970(var_152_int)
{
	var_153_int = 0; var_154_bool = 0; var_155_int = 0; var_156_bool = 0; // 0x136a PushV
	var_155_int = 0; // 0x136b MovI
	
Label_4972:
	var_157_string = "all"; // 0x136c PushS
	var_158_string = ""; var_159_int = 0; // 0x136d PushV
	var_159_int = var_155_int; // 0x136e Mov
	func_4963(var_158_string, var_159_int); // 0x136f NEW_2
	HasAnimation(var_156_bool, var_157_string, var_158_string); // 0x1371 Func
	var_163_bool = var_156_bool == 0; // 0x1373 Not
	if(var_163_bool == 0) goto Label_4982; // 0x1374 JumpB
	goto Label_4985; // 0x1375 Jump
	
Label_4985:
	var_152_int = var_155_int; // 0x1379 Mov
	return 4; // 0x137a Return
	
Label_4982:
	var_164_int = 1; // 0x1376 PushI
	var_155_int = var_155_int + var_164_int; // 0x1377 Add2
	goto Label_4972; // 0x1378 Jump
}


func_5484(var_39_object)
{
	var_40_int = 0; // 0x156d PushV
	func_5478(var_40_int); // 0x156e NEW_2
	var_44_int = 1; // 0x1570 PushI
	var_45_bool = var_40_int == var_44_int; // 0x1571 Eq
	if(var_45_bool == 0) goto Label_5494; // 0x1572 JumpB
	WorkWithCorpse(var_39_object); // 0x1573 Func
	goto Label_5496; // 0x1575 Jump
	
Label_5496:
	return 0; // 0x1578 Return
	
Label_5494:
	Barter(var_39_object); // 0x1576 Func
}


func_375(var_124_float)
{
	var_125_float = 0; var_126_float = 0; // 0x177 PushV
	GetCameraFarDistance(var_126_float); // 0x178 Func
	var_124_float = var_126_float; // 0x17a Mov
	return 2; // 0x17b Return
}


func_5497(var_24_bool)
{
	var_25_int = 0; var_26_bool = 0; var_27_int = 0; var_28_int = 0; var_29_bool = 0; var_30_int = 0; // 0x1579 PushV
	var_31_int = 0; // 0x157a PushI
	ClearSubContainer(var_31_int); // 0x157b Func
	var_32_int = 0; // 0x157d PushV
	func_4810(var_32_int); // 0x157e NEW_2
	var_30_int = var_32_int; // 0x157f Mov
	var_38_bool = var_24_bool; // 0x1581 Push
	if(var_38_bool == 0) goto Label_5551; // 0x1582 JumpB
	var_39_string = ""; var_40_int = 0; var_41_int = 0; var_42_int = 0; // 0x1583 PushV
	var_39_string = "alpha_pills"; // 0x1584 MovS
	var_40_int = 1; // 0x1585 MovI
	var_41_int = 2; // 0x1586 MovI
	var_42_int = 4; // 0x1587 MovI
	func_4725(var_39_string, var_40_int, var_41_int, var_42_int); // 0x1588 NEW_2
	var_55_string = ""; var_56_int = 0; var_57_int = 0; var_58_int = 0; // 0x158a PushV
	var_55_string = "meradorm"; // 0x158b MovS
	var_56_int = 2; // 0x158c MovI
	var_57_int = 3; // 0x158d MovI
	var_58_int = 3; // 0x158e MovI
	func_4725(var_55_string, var_56_int, var_57_int, var_58_int); // 0x158f NEW_2
	var_59_int = 3; // 0x1591 PushI
	var_60_bool = var_30_int >= var_59_int; // 0x1592 GE
	if(var_60_bool == 0) goto Label_5530; // 0x1593 JumpB
	var_61_string = ""; var_62_int = 0; var_63_int = 0; // 0x1594 PushV
	var_61_string = "beta_pills"; // 0x1595 MovS
	var_62_int = 1; // 0x1596 MovI
	var_63_int = 4; // 0x1597 MovI
	func_4714(var_61_string, var_62_int, var_63_int); // 0x1598 NEW_2
	
Label_5530:
	var_70_int = 8; // 0x159a PushI
	var_71_bool = var_30_int >= var_70_int; // 0x159b GE
	if(var_71_bool == 0) goto Label_5541; // 0x159c JumpB
	var_72_string = ""; var_73_int = 0; var_74_int = 0; var_75_int = 0; // 0x159d PushV
	var_72_string = "monomicin"; // 0x159e MovS
	var_73_int = 1; // 0x159f MovI
	var_74_int = 2; // 0x15a0 MovI
	var_75_int = 2; // 0x15a1 MovI
	func_4725(var_72_string, var_73_int, var_74_int, var_75_int); // 0x15a2 NEW_2
	goto Label_5550; // 0x15a4 Jump
	
Label_5550:
	goto Label_5596; // 0x15ae Jump
	
Label_5596:
	return 6; // 0x15dc Return
	
Label_5541:
	var_76_int = 4; // 0x15a5 PushI
	var_77_bool = var_30_int >= var_76_int; // 0x15a6 GE
	if(var_77_bool == 0) goto Label_5550; // 0x15a7 JumpB
	var_78_string = ""; var_79_int = 0; var_80_int = 0; // 0x15a8 PushV
	var_78_string = "monomicin"; // 0x15a9 MovS
	var_79_int = 1; // 0x15aa MovI
	var_80_int = 2; // 0x15ab MovI
	func_4714(var_78_string, var_79_int, var_80_int); // 0x15ac NEW_2
	
Label_5551:
	var_81_string = ""; var_82_int = 0; var_83_int = 0; // 0x15af PushV
	var_81_string = "lockpick"; // 0x15b0 MovS
	var_82_int = 1; // 0x15b1 MovI
	var_83_int = 4; // 0x15b2 MovI
	func_4714(var_81_string, var_82_int, var_83_int); // 0x15b3 NEW_2
	var_84_string = ""; var_85_int = 0; var_86_int = 0; // 0x15b5 PushV
	var_84_string = "rifle_ammo"; // 0x15b6 MovS
	var_85_int = 1; // 0x15b7 MovI
	var_86_int = 2; // 0x15b8 MovI
	func_4714(var_84_string, var_85_int, var_86_int); // 0x15b9 NEW_2
	var_87_string = ""; var_88_int = 0; var_89_int = 0; // 0x15bb PushV
	var_87_string = "revolver_ammo"; // 0x15bc MovS
	var_88_int = 1; // 0x15bd MovI
	var_89_int = 2; // 0x15be MovI
	func_4714(var_87_string, var_88_int, var_89_int); // 0x15bf NEW_2
	var_90_string = ""; var_91_int = 0; var_92_int = 0; var_93_int = 0; // 0x15c1 PushV
	var_90_string = "samopal_ammo"; // 0x15c2 MovS
	var_91_int = 1; // 0x15c3 MovI
	var_92_int = 2; // 0x15c4 MovI
	var_93_int = 2; // 0x15c5 MovI
	func_4725(var_90_string, var_91_int, var_92_int, var_93_int); // 0x15c6 NEW_2
	var_94_int = 8; // 0x15c8 PushI
	var_95_bool = var_30_int >= var_94_int; // 0x15c9 GE
	if(var_95_bool == 0) goto Label_5587; // 0x15ca JumpB
	var_96_string = ""; var_97_int = 0; var_98_int = 0; var_99_int = 0; // 0x15cb PushV
	var_96_string = "monomicin"; // 0x15cc MovS
	var_97_int = 1; // 0x15cd MovI
	var_98_int = 2; // 0x15ce MovI
	var_99_int = 2; // 0x15cf MovI
	func_4725(var_96_string, var_97_int, var_98_int, var_99_int); // 0x15d0 NEW_2
	goto Label_5596; // 0x15d2 Jump
	
Label_5587:
	var_100_int = 4; // 0x15d3 PushI
	var_101_bool = var_30_int >= var_100_int; // 0x15d4 GE
	if(var_101_bool == 0) goto Label_5596; // 0x15d5 JumpB
	var_102_string = ""; var_103_int = 0; var_104_int = 0; // 0x15d6 PushV
	var_102_string = "monomicin"; // 0x15d7 MovS
	var_103_int = 1; // 0x15d8 MovI
	var_104_int = 2; // 0x15d9 MovI
	func_4714(var_102_string, var_103_int, var_104_int); // 0x15da NEW_2
}


func_4987(var_65_int)
{
	var_67_bool = 0; // 0x137c PushV
	func_5655(var_67_bool); // 0x137d NEW_2
	if(var_67_bool == 0) goto Label_4994; // 0x137f JumpB
	var_65_int = 2; // 0x1380 MovI
	goto Label_4995; // 0x1381 Jump
	
Label_4995:
	return 0; // 0x1383 Return
	
Label_4994:
	var_65_int = 0; // 0x1382 MovI
}


func_4481(var_29_bool, var_30_object)
{
	var_31_int = 0; var_32_int = 0; // 0x1181 PushV
	var_33_bool = 0; var_34_object = Obj(); // 0x1182 PushV
	var_34_object = var_30_object; // 0x1183 Mov
	func_4445(var_33_bool, var_34_object); // 0x1184 NEW_2
	var_50_bool = var_33_bool == 0; // 0x1186 Not
	if(var_50_bool == 0) goto Label_4490; // 0x1187 JumpB
	var_29_bool = 0; // 0x1188 MovB
	return 2; // 0x1189 Return
	
Label_4490:
	var_51_bool = 0; var_52_object = Obj(); var_53_string = ""; // 0x118a PushV
	var_52_object = var_30_object; // 0x118b Mov
	var_53_string = "noaccess"; // 0x118c MovS
	func_4428(var_51_bool, var_52_object, var_53_string); // 0x118d NEW_2
	var_60_bool = var_51_bool == 0; // 0x118f Not
	if(var_60_bool == 0) goto Label_4499; // 0x1190 JumpB
	var_29_bool = 1; // 0x1191 MovB
	return 2; // 0x1192 Return
	
Label_4499:
	var_61_string = "noaccess"; // 0x1193 PushS
	GetProperty(var_61_string, var_32_int); // 0x1194 ObjFunc
	var_62_int = 0; // 0x1196 PushI
	var_29_bool = var_32_int == var_62_int; // 0x1197 Eq2
	return 2; // 0x1198 Return
}


func_387(var_0_bool, var_1_bool)
{
	var_0_bool = 1; // 0x183 TMovB
	var_1_bool = 0; // 0x184 TMovB
	Stop(); // 0x185 Func
	StopGroup0(); // 0x187 Func
	return 0; // 0x189 Return
}


func_4996(var_73_object)
{
	var_74_object = Obj(); // 0x1385 PushV
	var_74_object = var_73_object; // 0x1386 Mov
	TaskCall(3); // 0x1387 TaskCall
	func_659(var_75_object, var_74_object); // 0x1388 NEW_2
	TaskReturn(); // 0x1389 TaskReturn
	return 0; // 0x138b Return
}


func_394(var_0_bool, var_1_bool)
{
	var_0_bool = 1; // 0x18a TMovB
	var_1_bool = 1; // 0x18b TMovB
	Stop(); // 0x18c Func
	StopGroup0(); // 0x18e Func
	return 0; // 0x190 Return
}


func_5004(var_31_int, var_32_object)
{
	var_33_bool = 0; var_34_object = Obj(); // 0x138d PushV
	var_34_object = var_32_object; // 0x138e Mov
	func_4481(var_33_bool, var_34_object); // 0x138f NEW_2
	if(var_33_bool == 0) goto Label_5012; // 0x1391 JumpB
	var_31_int = 2; // 0x1392 MovI
	goto Label_5013; // 0x1393 Jump
	
Label_5013:
	return 0; // 0x1395 Return
	
Label_5012:
	var_31_int = 0; // 0x1394 MovI
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


func_5014(var_74_object)
{
	var_75_object = Obj(); // 0x1397 PushV
	var_75_object = var_74_object; // 0x1398 Mov
	TaskCall(4); // 0x1399 TaskCall
	func_934(var_75_object); // 0x139a NEW_2
	TaskReturn(); // 0x139b TaskReturn
	return 0; // 0x139d Return
}


func_4505()
{
	var_99_cvector = CVector(0,0,0); var_100_cvector = CVector(0,0,0); var_101_cvector = CVector(0,0,0); var_102_cvector = CVector(0,0,0); var_103_cvector = CVector(0,0,0); var_104_cvector = CVector(0,0,0); // 0x1199 PushV
	GetPosition(var_102_cvector); // 0x119a ObjFunc
	GetPosition(var_103_cvector); // 0x119c Func
	var_104_cvector = var_102_cvector - var_103_cvector; // 0x119e Sub2
	var_105_float = GetByIndex(var_104_cvector, 0); // 0x119f PushE
	var_106_float = GetByIndex(var_104_cvector, 2); // 0x11a0 PushE
	RotateAsync(var_105_float, var_106_float); // 0x11a1 Func
	return 6; // 0x11a3 Return
}


func_5022(var_76_int, var_77_object)
{
	var_79_bool = 0; var_80_object = Obj(); // 0x139f PushV
	var_80_object = var_77_object; // 0x13a0 Mov
	func_4481(var_79_bool, var_80_object); // 0x13a1 NEW_2
	if(var_79_bool == 0) goto Label_5030; // 0x13a3 JumpB
	var_76_int = 2; // 0x13a4 MovI
	goto Label_5031; // 0x13a5 Jump
	
Label_5031:
	return 0; // 0x13a7 Return
	
Label_5030:
	var_76_int = 0; // 0x13a6 MovI
}


func_4516(var_105_bool)
{
	var_106_bool = 0; var_107_bool = 0; // 0x11a4 PushV
	IsLoaded(var_107_bool); // 0x11a5 Func
	var_105_bool = var_107_bool; // 0x11a7 Mov
	return 2; // 0x11a8 Return
}


func_934(var_75_object)
{
	Face(var_75_object); // 0x3a7 Func
	var_79_string = "all"; // 0x3a9 PushS
	var_80_string = "attack_on"; // 0x3aa PushS
	PlayAnimation(var_79_string, var_80_string); // 0x3ab Func
	WaitForAnimEnd(); // 0x3ad Func
	var_81_string = "all"; // 0x3af PushS
	var_82_string = "attack_stay"; // 0x3b0 PushS
	PlayAnimation(var_81_string, var_82_string); // 0x3b1 Func
	WaitForAnimEnd(); // 0x3b3 Func
	var_83_string = "all"; // 0x3b5 PushS
	var_84_string = "attack_off"; // 0x3b6 PushS
	PlayAnimation(var_83_string, var_84_string); // 0x3b7 Func
	WaitForAnimEnd(); // 0x3b9 Func
	StopAsync(); // 0x3bb Func
	var_85_object = Obj(); // 0x3bd PushV
	var_85_object = var_75_object; // 0x3be Mov
	func_999(var_77_cvector, var_78_bool, var_75_object, var_85_object); // 0x3bf NEW_2
	return 0; // 0x3c1 Return
}


func_5032(var_113_object)
{
	var_114_object = Obj(); // 0x13a9 PushV
	var_114_object = var_113_object; // 0x13aa Mov
	TaskCall(5); // 0x13ab TaskCall
	func_1186(var_115_object, var_116_cvector, var_117_bool, var_114_object); // 0x13ac NEW_2
	TaskReturn(); // 0x13ad TaskReturn
	return 0; // 0x13af Return
}


func_4521(var_58_bool, var_60_float)
{
	var_61_float = 0; var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); var_66_cvector = CVector(0,0,0); var_67_cvector = CVector(0,0,0); var_68_bool = 0; var_69_bool = 0; var_70_float = 0; var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); var_73_cvector = CVector(0,0,0); var_74_cvector = CVector(0,0,0); var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0); var_77_bool = 0; var_78_bool = 0; // 0x11a9 PushV
	GetPosition(var_71_cvector); // 0x11aa ObjFunc
	GetEyesHeight(var_70_float); // 0x11ac ObjFunc
	var_79_float = GetByIndex(var_71_cvector, 1); // 0x11ae PushE
	var_79_float = var_79_float + var_70_float; // 0x11af Add2
	SetByIndex(var_71_cvector, 1) = var_79_float; // 0x11b0 PopE
	GetPosition(var_72_cvector); // 0x11b1 Func
	GetEyesHeight(var_70_float); // 0x11b3 Func
	var_80_float = GetByIndex(var_72_cvector, 1); // 0x11b5 PushE
	var_80_float = var_80_float + var_70_float; // 0x11b6 Add2
	SetByIndex(var_72_cvector, 1) = var_80_float; // 0x11b7 PopE
	var_73_cvector = var_71_cvector - var_72_cvector; // 0x11b8 Sub2
	var_81_float = GetByIndex(var_73_cvector, 1); // 0x11b9 PushE
	var_81_float = 0; // 0x11ba MovI
	SetByIndex(var_73_cvector, 1) = var_81_float; // 0x11bb PopE
	var_82_int = var_73_cvector | var_73_cvector; // 0x11bc Or
	var_83_float = sqrt(var_82_int); // 0x11bd Sqrt
	var_73_cvector = var_73_cvector / var_73_cvector; // 0x11be Div2
	var_74_cvector = -var_73_cvector; // 0x11bf Neg2
	var_84_float = var_73_cvector * var_60_float; // 0x11c0 Mult
	var_85_cvector = CVector(0,0,0); var_86_cvector = CVector(0,0,0); // 0x11c1 PushV
	var_87_cvector = CVector(0.0, 1.0, 0.0); // 0x11c2 PushVec
	var_86_cvector = var_74_cvector ^ var_87_cvector; // 0x11c3 Xor2
	func_4746(var_85_cvector, var_86_cvector); // 0x11c4 NEW_2
	var_93_int = 25; // 0x11c6 PushI
	var_94_float = var_85_cvector * var_93_int; // 0x11c7 Mult
	var_95_int = var_84_float + var_94_float; // 0x11c8 Add
	var_96_cvector = CVector(0.0, 10.0, 0.0); // 0x11c9 PushVec
	var_75_cvector = var_95_int - var_96_cvector; // 0x11ca Sub2
	var_76_cvector = var_72_cvector + var_75_cvector; // 0x11cb Add2
	IsOverrideActive(var_77_bool); // 0x11cc Func
	var_97_bool = var_77_bool; // 0x11ce Push
	if(var_97_bool == 0) goto Label_4562; // 0x11cf JumpB
	var_58_bool = 0; // 0x11d0 MovB
	return 18; // 0x11d1 Return
	
Label_4562:
	StopWorld(); // 0x11d2 Func
	CameraTransit(var_76_cvector, var_74_cvector); // 0x11d4 Func
	var_98_float = GetByIndex(var_75_cvector, 0); // 0x11d6 PushE
	var_99_float = GetByIndex(var_75_cvector, 2); // 0x11d7 PushE
	Rotate(var_98_float, var_99_float); // 0x11d8 Func
	var_100_bool = 0; // 0x11da PushV
	func_5605(var_100_bool); // 0x11db NEW_2
	if(var_100_bool == 0) goto Label_4575; // 0x11dd JumpB
	goto Label_4583; // 0x11de Jump
	
Label_4583:
	CameraWaitForPlayFinish(); // 0x11e7 Func
	ResumeWorld(); // 0x11e9 Func
	var_58_bool = 1; // 0x11eb MovB
	return 18; // 0x11ec Return
	
Label_4575:
	var_101_string = "head"; // 0x11df PushS
	HasAnimationTrack(var_78_bool, var_101_string); // 0x11e0 Func
	var_102_bool = var_78_bool; // 0x11e2 Push
	if(var_102_bool == 0) goto Label_4583; // 0x11e3 JumpB
	var_103_string = "head"; // 0x11e4 PushS
	LookAsyncCamera(var_103_string); // 0x11e5 Func
}


func_5040(var_31_bool, var_32_object, var_33_object, var_34_float)
{
	var_35_string = ""; var_36_bool = 0; var_37_string = ""; var_38_bool = 0; // 0x13b0 PushV
	var_39_bool = 0; var_40_object = Obj(); var_41_string = ""; // 0x13b1 PushV
	var_40_object = var_33_object; // 0x13b2 Mov
	var_41_string = "class"; // 0x13b3 MovS
	func_4428(var_39_bool, var_40_object, var_41_string); // 0x13b4 NEW_2
	var_48_bool = var_39_bool == 0; // 0x13b6 Not
	if(var_48_bool == 0) goto Label_5050; // 0x13b7 JumpB
	var_31_bool = 0; // 0x13b8 MovB
	return 4; // 0x13b9 Return
	
Label_5050:
	var_49_string = "class"; // 0x13ba PushS
	GetProperty(var_49_string, var_37_string); // 0x13bb ObjFunc
	var_50_string = "rat"; // 0x13bd PushS
	var_51_bool = var_37_string == var_50_string; // 0x13be Eq
	if(var_51_bool == 0) goto Label_5059; // 0x13bf JumpB
	var_31_bool = 0; // 0x13c0 MovB
	return 4; // 0x13c1 Return
	
Label_5059:
	var_52_string = "rat_big"; // 0x13c3 PushS
	var_53_bool = var_37_string == var_52_string; // 0x13c4 Eq
	if(var_53_bool == 0) goto Label_5065; // 0x13c5 JumpB
	var_31_bool = 0; // 0x13c6 MovB
	return 4; // 0x13c7 Return
	
Label_5065:
	var_54_string = "dog"; // 0x13c9 PushS
	var_55_bool = var_37_string == var_54_string; // 0x13ca Eq
	if(var_55_bool == 0) goto Label_5070; // 0x13cb JumpB
	var_31_bool = 0; // 0x13cc MovB
	return 4; // 0x13cd Return
	
Label_5070:
	CanSee(var_38_bool, var_32_object); // 0x13ce Func
	var_56_bool = 0; // 0x13d0 PushV
	var_56_bool = 1; // 0x13d1 MovB
	var_57_bool = var_38_bool; // 0x13d2 Push
	if(var_57_bool == 0) goto Label_5084; // 0x13d3 JumpB
	var_58_float = 0; var_59_object = Obj(); // 0x13d4 PushV
	var_59_object = var_32_object; // 0x13d5 Mov
	func_4415(var_59_object); // 0x13d6 NEW_2
	var_66_float = var_34_float * var_34_float; // 0x13d8 Mult
	var_67_bool = var_58_float <= var_66_float; // 0x13d9 LE
	if(var_67_bool == 0) goto Label_5084; // 0x13da JumpB
	var_56_bool = 0; // 0x13db MovB
	
Label_5084:
	if(var_56_bool == 0) goto Label_5087; // 0x13dc JumpB
	var_31_bool = 1; // 0x13dd MovB
	return 4; // 0x13de Return
	
Label_5087:
	CanSee(var_38_bool, var_33_object); // 0x13df Func
	var_68_bool = 0; // 0x13e1 PushV
	var_68_bool = 1; // 0x13e2 MovB
	var_69_bool = var_38_bool; // 0x13e3 Push
	if(var_69_bool == 0) goto Label_5101; // 0x13e4 JumpB
	var_70_float = 0; var_71_object = Obj(); // 0x13e5 PushV
	var_71_object = var_33_object; // 0x13e6 Mov
	func_4415(var_71_object); // 0x13e7 NEW_2
	var_72_float = var_34_float * var_34_float; // 0x13e9 Mult
	var_73_bool = var_70_float <= var_72_float; // 0x13ea LE
	if(var_73_bool == 0) goto Label_5101; // 0x13eb JumpB
	var_68_bool = 0; // 0x13ec MovB
	
Label_5101:
	if(var_68_bool == 0) goto Label_5104; // 0x13ed JumpB
	var_31_bool = 1; // 0x13ee MovB
	return 4; // 0x13ef Return
	
Label_5104:
	var_31_bool = 0; // 0x13f0 MovB
	return 4; // 0x13f1 Return
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
	func_4746(var_52_cvector, var_53_cvector); // 0x3d3 NEW_2
	var_59_float = 0.75; // 0x3d5 PushF
	var_60_float = var_46_cvector * var_59_float; // 0x3d6 Mult
	var_51_cvector = var_52_cvector + var_60_float; // 0x3d7 Add2
	func_4746(var_50_cvector, var_51_cvector); // 0x3d8 NEW_2
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


func_5597(var_106_int)
{
	var_106_int = 515559; // 0x15dd MovI
	return 0; // 0x15de Return
}


func_5599(var_105_int)
{
	var_105_int = 503344; // 0x15df MovI
	return 0; // 0x15e0 Return
}


func_1505(var_2_bool)
{
	Stop(); // 0x5e1 Func
	var_23_int = 120; // 0x5e3 PushI
	KillTimer(var_23_int); // 0x5e4 Func
	var_2_bool = 1; // 0x5e6 TMovB
	return 0; // 0x5e7 Return
}


func_5601(var_107_string)
{
	var_107_string = "ui/NPC_Citizen1.png"; // 0x15e1 MovS
	return 0; // 0x15e2 Return
}


func_5603(var_108_string)
{
	var_108_string = "ui/NPC_Citizen1_b.png"; // 0x15e3 MovS
	return 0; // 0x15e4 Return
}


func_5605(var_25_bool)
{
	var_25_bool = 0; // 0x15e5 MovB
	return 0; // 0x15e6 Return
}


func_5607()
{
	var_23_bool = GlobalVars[0]; // 0x15e7 PushGE
	var_23_bool = 0; // 0x15e8 MovB
	GlobalVars[0] = var_23_bool; // 0x15e9 PopGE
	var_24_bool = 0; // 0x15ea PushV
	var_24_bool = 0; // 0x15eb MovB
	func_5497(var_24_bool); // 0x15ec NEW_2
	return 0; // 0x15ee Return
}


func_999(var_0_bool, var_1_bool, var_2_bool, var_85_object)
{
	var_86_cvector = CVector(0,0,0); var_87_float = 0; var_88_bool = 0; var_89_cvector = CVector(0,0,0); var_90_float = 0; var_91_cvector = CVector(0,0,0); var_92_float = 0; var_93_bool = 0; var_94_cvector = CVector(0,0,0); var_95_float = 0; // 0x3e7 PushV
	var_0_bool = var_85_object; // 0x3e8 TMov
	var_96_cvector = CVector(0,0,0); var_97_float = 0; // 0x3e9 PushV
	var_97_float = 1.74533; // 0x3ea MovF
	func_969(var_96_cvector, var_97_float); // 0x3eb NEW_2
	var_91_cvector = var_96_cvector; // 0x3ec Mov
	var_92_float = var_91_cvector | var_91_cvector; // 0x3ee Or2
	var_126_float = 2500.0; // 0x3ef PushF
	var_127_bool = var_92_float < var_126_float; // 0x3f0 LT
	if(var_127_bool == 0) goto Label_1028; // 0x3f1 JumpB
	var_128_cvector = CVector(0,0,0); var_129_float = 0; // 0x3f2 PushV
	var_129_float = 2.61799; // 0x3f3 MovF
	func_969(var_128_cvector, var_129_float); // 0x3f4 NEW_2
	var_91_cvector = var_128_cvector; // 0x3f5 Mov
	var_92_float = var_91_cvector | var_91_cvector; // 0x3f7 Or2
	var_130_float = 2500.0; // 0x3f8 PushF
	var_131_bool = var_92_float < var_130_float; // 0x3f9 LT
	if(var_131_bool == 0) goto Label_1028; // 0x3fa JumpB
	var_132_string = "Can't retreat, distance: "; // 0x3fb PushS
	var_133_float = sqrt(var_92_float); // 0x3fc Sqrt
	var_134_int = var_132_string + var_133_float; // 0x3fd Add
	Trace(var_134_int); // 0x3fe Func
	var_135_float = 0.5; // 0x400 PushF
	Sleep(var_135_float); // 0x401 Func
	return 10; // 0x403 Return
	
Label_1028:
	var_136_float = GetByIndex(var_91_cvector, 0); // 0x404 PushE
	var_137_float = GetByIndex(var_91_cvector, 2); // 0x405 PushE
	Rotate(var_136_float, var_137_float); // 0x406 Func
	var_138_cvector = CVector(0,0,0); // 0x408 PushV
	func_4403(var_138_cvector); // 0x409 NEW_2
	var_1_bool = var_138_cvector + var_91_cvector; // 0x40b Add2
	var_141_int = 120; // 0x40c PushI
	var_142_float = 0.5; // 0x40d PushF
	SetTimer(var_141_int, var_142_float); // 0x40e Func
	var_2_bool = 0; // 0x410 TMovB
	
Label_1041:
	var_143_int = 1; // 0x411 PushI
	MovePoint(var_143_int, var_143_int, var_93_bool); // 0x412 Func
	var_144_bool = var_93_bool; // 0x414 Push
	if(var_144_bool == 0) goto Label_1069; // 0x415 JumpB
	var_145_bool = var_0_bool == 0; // 0x416 NullEq
	if(var_145_bool == 0) goto Label_1050; // 0x417 JumpB
	goto Label_1071; // 0x418 Jump
	
Label_1071:
	return 10; // 0x42f Return
	
Label_1050:
	var_146_cvector = CVector(0,0,0); var_147_float = 0; // 0x41a PushV
	var_147_float = 2.61799; // 0x41b MovF
	func_969(var_146_cvector, var_147_float); // 0x41c NEW_2
	var_94_cvector = var_146_cvector; // 0x41d Mov
	var_95_float = var_94_cvector | var_94_cvector; // 0x41f Or2
	var_148_float = 2500.0; // 0x420 PushF
	var_149_bool = var_95_float >= var_148_float; // 0x421 GE
	if(var_149_bool == 0) goto Label_1068; // 0x422 JumpB
	var_150_cvector = CVector(0,0,0); // 0x423 PushV
	func_4403(var_150_cvector); // 0x424 NEW_2
	var_1_bool = var_150_cvector + var_94_cvector; // 0x426 Add2
	var_151_int = 120; // 0x427 PushI
	var_152_float = 0.5; // 0x428 PushF
	SetTimer(var_151_int, var_152_float); // 0x429 Func
	goto Label_1069; // 0x42b Jump
	
Label_1069:
	var_153_bool = var_2_bool == 0; // 0x42d Not
	if(var_153_bool == 0) goto Label_1041; // 0x42e JumpB
	
Label_1068:
	goto Label_1071; // 0x42c Jump
}


func_4589()
{
	var_372_bool = 0; var_373_bool = 0; // 0x11ed PushV
	CameraSwitchToNormal(); // 0x11ee Func
	var_374_bool = 0; // 0x11f0 PushV
	func_5605(var_374_bool); // 0x11f1 NEW_2
	if(var_374_bool == 0) goto Label_4597; // 0x11f3 JumpB
	goto Label_4605; // 0x11f4 Jump
	
Label_4605:
	return 2; // 0x11fd Return
	
Label_4597:
	var_375_string = "head"; // 0x11f5 PushS
	HasAnimationTrack(var_373_bool, var_375_string); // 0x11f6 Func
	var_376_bool = var_373_bool; // 0x11f8 Push
	if(var_376_bool == 0) goto Label_4605; // 0x11f9 JumpB
	var_377_string = "head"; // 0x11fa PushS
	UnlookAsync(var_377_string); // 0x11fb Func
}


func_5615(var_34_object, var_49_object)
{
	var_35_bool = 0; var_36_bool = 0; // 0x15ef PushV
	var_37_bool = GlobalVars[0]; // 0x15f0 PushGE
	if(var_37_bool == 0) goto Label_5628; // 0x15f1 JumpB
	IsOverrideActive(var_36_bool); // 0x15f2 Func
	var_38_bool = var_36_bool == 0; // 0x15f4 Not
	if(var_38_bool == 0) goto Label_5626; // 0x15f5 JumpB
	var_39_object = Obj(); // 0x15f6 PushV
	var_39_object = var_34_object; // 0x15f7 Mov
	func_5484(var_39_object); // 0x15f8 NEW_2
	
Label_5626:
	return 2; // 0x15fa Return
	
Label_5628:
	var_46_int = 1000; // 0x15fc PushI
	var_47_int = 0; var_48_object = Obj(); // 0x15fd PushV
	var_48_object = var_34_object; // 0x15fe Mov
	TaskCall(8); // 0x15ff TaskCall
	func_1731(var_49_object, var_47_int, var_48_object); // 0x1600 NEW_2
	TaskReturn(); // 0x1601 TaskReturn
	var_378_bool = var_46_int == var_49_object; // 0x1603 Eq
	if(var_378_bool == 0) goto Label_5654; // 0x1604 JumpB
	var_379_bool = 0; var_380_object = Obj(); // 0x1605 PushV
	var_380_object = var_34_object; // 0x1606 Mov
	func_4606(var_379_bool, var_380_object); // 0x1607 NEW_2
	var_410_bool = var_379_bool == 0; // 0x1609 Not
	if(var_410_bool == 0) goto Label_5644; // 0x160a JumpB
	return 2; // 0x160b Return
	
Label_5644:
	var_411_object = Obj(); // 0x160c PushV
	var_411_object = var_34_object; // 0x160d Mov
	TaskCall(0); // 0x160e TaskCall
	func_0(var_411_object); // 0x160f NEW_2
	TaskReturn(); // 0x1610 TaskReturn
	var_418_object = Obj(); // 0x1612 PushV
	var_418_object = var_34_object; // 0x1613 Mov
	func_4661(); // 0x1614 NEW_2
	
Label_5654:
	return 2; // 0x1616 Return
}


func_1521(var_0_bool, var_74_bool)
{
	var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0); // 0x5f1 PushV
	GetDirection(var_77_cvector); // 0x5f2 Func
	var_79_cvector = CVector(0,0,0); var_80_object = Obj(); // 0x5f4 PushV
	var_80_object = var_0_bool; // 0x5f5 MovT
	func_4408(var_80_object); // 0x5f6 NEW_2
	var_78_cvector = var_79_cvector; // 0x5f7 Mov
	var_85_float = 0; var_86_cvector = CVector(0,0,0); var_87_cvector = CVector(0,0,0); // 0x5f9 PushV
	var_86_cvector = var_77_cvector; // 0x5fa Mov
	var_87_cvector = var_78_cvector; // 0x5fb Mov
	func_4761(var_85_float, var_86_cvector, var_87_cvector); // 0x5fc NEW_2
	var_93_float = -0.34202; // 0x5fe PushF
	var_74_bool = var_85_float >= var_93_float; // 0x5ff GE2
	return 4; // 0x600 Return
}


func_5106(var_25_int)
{
	var_25_int = 2; // 0x13f3 MovI
	return 0; // 0x13f4 Return
}


func_5109(var_33_object)
{
	var_34_object = Obj(); // 0x13f6 PushV
	var_34_object = var_33_object; // 0x13f7 Mov
	func_5615(var_33_object, var_34_object); // 0x13f8 NEW_2
	return 0; // 0x13fa Return
}


func_5115()
{
	return 0; // 0x13fb Return
}


func_5116(var_25_int, var_26_object)
{
	var_27_bool = 0; var_28_bool = 0; // 0x13fc PushV
	var_29_string = "Received steal"; // 0x13fd PushS
	Trace(var_29_string); // 0x13fe Func
	CanSee(var_28_bool, var_26_object); // 0x1400 Func
	var_30_bool = var_28_bool; // 0x1402 Push
	if(var_30_bool == 0) goto Label_5130; // 0x1403 JumpB
	var_31_int = 0; var_32_object = Obj(); // 0x1404 PushV
	var_32_object = var_26_object; // 0x1405 Mov
	func_5004(var_31_int, var_32_object); // 0x1406 NEW_2
	var_25_int = var_31_int; // 0x1407 Mov
	return 2; // 0x1409 Return
	
Label_5130:
	var_25_int = 0; // 0x140a MovI
	return 2; // 0x140b Return
}


func_4606(var_379_bool, var_380_object)
{
	var_381_bool = 0; var_382_object = Obj(); var_383_float = 0; // 0x11ff PushV
	var_382_object = var_380_object; // 0x1200 Mov
	var_383_float = 70; // 0x1201 MovI
	func_4614(var_382_object, var_383_float); // 0x1202 NEW_2
	var_379_bool = var_381_bool; // 0x1203 Mov
	return 0; // 0x1205 Return
}


