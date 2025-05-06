task_0_event_11(var_0_bool, var_1_int, var_2_bool, var_3_bool, var_4_bool, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	var_23_bool = 0; // 0x1b PushV
	func_5079(var_23_bool); // 0x1c NEW_2
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
	func_4621(var_26_object); // 0x43 NEW_2
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
	func_4624(var_32_object); // 0x51 NEW_2
	
Label_83:
	return 2; // 0x53 Return
}


task_1_event_17(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	var_23_int = 0; var_24_int = 0; // 0x54 PushV
	var_25_object = Obj(); // 0x55 PushV
	var_25_object = var_22_bool; // 0x56 Mov
	func_4436(var_25_object); // 0x57 NEW_2
	var_34_int = 0; var_35_object = Obj(); // 0x59 PushV
	var_35_object = var_22_bool; // 0x5a Mov
	func_4519(var_34_int, var_35_object); // 0x5b NEW_2
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
	func_4529(var_75_object); // 0x69 NEW_2
	
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
	func_5131(var_28_object, var_29_object, var_30_bool); // 0x71 NEW_2
	if(var_27_bool == 0) goto Label_135; // 0x73 JumpB
	var_76_int = 0; var_77_object = Obj(); var_78_bool = 0; // 0x74 PushV
	var_77_object = var_22_object; // 0x75 Mov
	var_78_bool = var_24_bool; // 0x76 Mov
	func_4537(var_77_object, var_78_bool); // 0x77 NEW_2
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
	func_4547(var_112_object); // 0x85 NEW_2
	
Label_135:
	return 2; // 0x87 Return
}


task_1_event_40(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	var_23_int = 0; var_24_int = 0; // 0x88 PushV
	var_25_int = 0; var_26_object = Obj(); // 0x89 PushV
	var_26_object = var_22_bool; // 0x8a Mov
	func_4631(var_26_object); // 0x8b NEW_2
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
	func_4634(); // 0x99 NEW_2
	
Label_155:
	return 2; // 0x9b Return
}


task_1_event_42(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_string, var_6_object, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_object, var_21_object, var_22_string, var_23_bool)
{
	var_24_int = 0; var_25_int = 0; // 0x9c PushV
	var_26_bool = 0; var_27_object = Obj(); var_28_string = ""; // 0x9d PushV
	var_27_object = var_22_string; // 0x9e Mov
	var_28_string = var_23_bool; // 0x9f Mov
	func_4350(var_26_bool, var_27_object, var_28_string); // 0xa0 NEW_2
	if(var_26_bool == 0) goto Label_172; // 0xa2 JumpB
	func_251(var_25_int); // 0xa4 NEW_2
	var_59_object = Obj(); var_60_string = ""; // 0xa6 PushV
	var_59_object = var_22_string; // 0xa7 Mov
	var_60_string = var_23_bool; // 0xa8 Mov
	func_4382(var_59_object, var_60_string); // 0xa9 NEW_2
	goto Label_192; // 0xab Jump
	
Label_192:
	return 2; // 0xc0 Return
	
Label_172:
	var_208_int = 0; var_209_string = ""; var_210_object = Obj(); // 0xac PushV
	var_209_string = var_23_bool; // 0xad Mov
	var_210_object = var_22_string; // 0xae Mov
	func_4636(var_210_object); // 0xaf NEW_2
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
	func_4639(); // 0xbe NEW_2
}


task_1_event_26(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_string, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	var_23_bool = 0; var_24_string = ""; // 0xc2 PushV
	var_24_string = var_22_bool; // 0xc3 Mov
	func_4449(var_23_bool, var_24_string); // 0xc4 NEW_2
	if(var_23_bool == 0) goto Label_206; // 0xc6 JumpB
	func_251(var_22_bool); // 0xc8 NEW_2
	var_33_string = ""; // 0xca PushV
	var_33_string = var_22_bool; // 0xcb Mov
	func_4465(var_33_string); // 0xcc NEW_2
	
Label_206:
	return 0; // 0xce Return
}


task_1_event_1(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	var_23_bool = 0; var_24_object = Obj(); // 0xd0 PushV
	var_24_object = var_22_bool; // 0xd1 Mov
	func_4407(var_23_bool, var_24_object); // 0xd2 NEW_2
	if(var_23_bool == 0) goto Label_221; // 0xd4 JumpB
	func_251(var_22_bool); // 0xd6 NEW_2
	var_38_object = Obj(); // 0xd8 PushV
	var_38_object = var_22_bool; // 0xd9 Mov
	func_4430(var_38_object); // 0xda NEW_2
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
	func_4630(); // 0xf8 NEW_2
	return 0; // 0xfa Return
}


task_1_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	func_251(var_22_bool); // 0x10d NEW_2
	var_24_object = Obj(); // 0x10f PushV
	var_24_object = var_22_bool; // 0x110 Mov
	func_4344(); // 0x111 NEW_2
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
	func_4621(var_26_object); // 0x19c NEW_2
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
	func_4624(var_31_object); // 0x1aa NEW_2
	
Label_428:
	return 2; // 0x1ac Return
}


task_2_event_17(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	var_23_int = 0; var_24_int = 0; // 0x1ad PushV
	var_25_object = Obj(); // 0x1ae PushV
	var_25_object = var_22_bool; // 0x1af Mov
	func_4436(var_25_object); // 0x1b0 NEW_2
	var_34_int = 0; var_35_object = Obj(); // 0x1b2 PushV
	var_35_object = var_22_bool; // 0x1b3 Mov
	func_4519(var_34_int, var_35_object); // 0x1b4 NEW_2
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
	func_4529(var_74_object); // 0x1c2 NEW_2
	
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
	func_5131(var_28_object, var_29_object, var_30_bool); // 0x1ca NEW_2
	if(var_27_bool == 0) goto Label_480; // 0x1cc JumpB
	var_76_int = 0; var_77_object = Obj(); var_78_bool = 0; // 0x1cd PushV
	var_77_object = var_22_object; // 0x1ce Mov
	var_78_bool = var_24_bool; // 0x1cf Mov
	func_4537(var_77_object, var_78_bool); // 0x1d0 NEW_2
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
	func_4547(var_111_object); // 0x1de NEW_2
	
Label_480:
	return 2; // 0x1e0 Return
}


task_2_event_40(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	var_23_int = 0; var_24_int = 0; // 0x1e1 PushV
	var_25_int = 0; var_26_object = Obj(); // 0x1e2 PushV
	var_26_object = var_22_bool; // 0x1e3 Mov
	func_4631(var_26_object); // 0x1e4 NEW_2
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
	func_4634(); // 0x1f2 NEW_2
	
Label_500:
	return 2; // 0x1f4 Return
}


task_2_event_42(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_string, var_6_object, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_object, var_21_object, var_22_string, var_23_bool)
{
	var_24_int = 0; var_25_int = 0; // 0x1f5 PushV
	var_26_bool = 0; var_27_object = Obj(); var_28_string = ""; // 0x1f6 PushV
	var_27_object = var_22_string; // 0x1f7 Mov
	var_28_string = var_23_bool; // 0x1f8 Mov
	func_4350(var_26_bool, var_27_object, var_28_string); // 0x1f9 NEW_2
	if(var_26_bool == 0) goto Label_517; // 0x1fb JumpB
	func_654(); // 0x1fd NEW_2
	var_58_object = Obj(); var_59_string = ""; // 0x1ff PushV
	var_58_object = var_22_string; // 0x200 Mov
	var_59_string = var_23_bool; // 0x201 Mov
	func_4382(var_58_object, var_59_string); // 0x202 NEW_2
	goto Label_537; // 0x204 Jump
	
Label_537:
	return 2; // 0x219 Return
	
Label_517:
	var_207_int = 0; var_208_string = ""; var_209_object = Obj(); // 0x205 PushV
	var_208_string = var_23_bool; // 0x206 Mov
	var_209_object = var_22_string; // 0x207 Mov
	func_4636(var_209_object); // 0x208 NEW_2
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
	func_4639(); // 0x217 NEW_2
}


task_2_event_26(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_string, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	var_23_bool = 0; var_24_string = ""; // 0x21b PushV
	var_24_string = var_22_bool; // 0x21c Mov
	func_4449(var_23_bool, var_24_string); // 0x21d NEW_2
	if(var_23_bool == 0) goto Label_551; // 0x21f JumpB
	func_654(); // 0x221 NEW_2
	var_32_string = ""; // 0x223 PushV
	var_32_string = var_22_bool; // 0x224 Mov
	func_4465(var_32_string); // 0x225 NEW_2
	
Label_551:
	return 0; // 0x227 Return
}


task_2_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool)
{
	func_654(); // 0x229 NEW_2
	func_4630(); // 0x22c NEW_2
	return 0; // 0x22e Return
}


task_2_event_1(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	var_23_bool = 0; var_24_object = Obj(); // 0x230 PushV
	var_24_object = var_22_bool; // 0x231 Mov
	func_4407(var_23_bool, var_24_object); // 0x232 NEW_2
	if(var_23_bool == 0) goto Label_572; // 0x234 JumpB
	func_654(); // 0x236 NEW_2
	var_37_object = Obj(); // 0x238 PushV
	var_37_object = var_22_bool; // 0x239 Mov
	func_4430(var_37_object); // 0x23a NEW_2
	
Label_572:
	return 0; // 0x23c Return
}


task_3_event_0(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	var_23_int = 0; var_24_int = 0; // 0x2cb PushV
	var_25_int = 0; var_26_object = Obj(); // 0x2cc PushV
	var_26_object = var_22_bool; // 0x2cd Mov
	func_4621(var_26_object); // 0x2ce NEW_2
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
	func_4624(var_33_object); // 0x2dc NEW_2
	
Label_734:
	return 2; // 0x2de Return
}


task_3_event_17(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	var_23_int = 0; var_24_int = 0; // 0x2df PushV
	var_25_object = Obj(); // 0x2e0 PushV
	var_25_object = var_22_bool; // 0x2e1 Mov
	func_4436(var_25_object); // 0x2e2 NEW_2
	var_34_int = 0; var_35_object = Obj(); // 0x2e4 PushV
	var_35_object = var_22_bool; // 0x2e5 Mov
	func_4519(var_34_int, var_35_object); // 0x2e6 NEW_2
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
	func_4529(var_76_object); // 0x2f4 NEW_2
	
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
	func_5131(var_28_object, var_29_object, var_30_bool); // 0x2fc NEW_2
	if(var_27_bool == 0) goto Label_786; // 0x2fe JumpB
	var_76_int = 0; var_77_object = Obj(); var_78_bool = 0; // 0x2ff PushV
	var_77_object = var_22_object; // 0x300 Mov
	var_78_bool = var_24_bool; // 0x301 Mov
	func_4537(var_77_object, var_78_bool); // 0x302 NEW_2
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
	func_4547(var_113_object); // 0x310 NEW_2
	
Label_786:
	return 2; // 0x312 Return
}


task_3_event_40(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	var_23_int = 0; var_24_int = 0; // 0x313 PushV
	var_25_int = 0; var_26_object = Obj(); // 0x314 PushV
	var_26_object = var_22_bool; // 0x315 Mov
	func_4631(var_26_object); // 0x316 NEW_2
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
	func_4634(); // 0x324 NEW_2
	
Label_806:
	return 2; // 0x326 Return
}


task_3_event_42(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_string, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_object, var_21_object, var_22_string, var_23_bool)
{
	var_24_int = 0; var_25_int = 0; // 0x327 PushV
	var_26_bool = 0; var_27_object = Obj(); var_28_string = ""; // 0x328 PushV
	var_27_object = var_22_string; // 0x329 Mov
	var_28_string = var_23_bool; // 0x32a Mov
	func_4350(var_26_bool, var_27_object, var_28_string); // 0x32b NEW_2
	if(var_26_bool == 0) goto Label_823; // 0x32d JumpB
	func_858(); // 0x32f NEW_2
	var_60_object = Obj(); var_61_string = ""; // 0x331 PushV
	var_60_object = var_22_string; // 0x332 Mov
	var_61_string = var_23_bool; // 0x333 Mov
	func_4382(var_60_object, var_61_string); // 0x334 NEW_2
	goto Label_843; // 0x336 Jump
	
Label_843:
	return 2; // 0x34b Return
	
Label_823:
	var_209_int = 0; var_210_string = ""; var_211_object = Obj(); // 0x337 PushV
	var_210_string = var_23_bool; // 0x338 Mov
	var_211_object = var_22_string; // 0x339 Mov
	func_4636(var_211_object); // 0x33a NEW_2
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
	func_4639(); // 0x349 NEW_2
}


task_3_event_26(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_string, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	var_23_bool = 0; var_24_string = ""; // 0x34d PushV
	var_24_string = var_22_bool; // 0x34e Mov
	func_4449(var_23_bool, var_24_string); // 0x34f NEW_2
	if(var_23_bool == 0) goto Label_857; // 0x351 JumpB
	func_858(); // 0x353 NEW_2
	var_34_string = ""; // 0x355 PushV
	var_34_string = var_22_bool; // 0x356 Mov
	func_4465(var_34_string); // 0x357 NEW_2
	
Label_857:
	return 0; // 0x359 Return
}


task_3_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	func_858(); // 0x367 NEW_2
	var_25_object = Obj(); // 0x369 PushV
	var_25_object = var_22_bool; // 0x36a Mov
	func_4344(); // 0x36b NEW_2
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
	func_3996(var_29_bool, var_30_object); // 0x375 NEW_2
	var_63_bool = var_29_bool == 0; // 0x377 Not
	if(var_63_bool == 0) goto Label_893; // 0x378 JumpB
	func_858(); // 0x37a NEW_2
	return 4; // 0x37c Return
	
Label_893:
	GetDirection(var_25_cvector); // 0x37d Func
	var_66_cvector = CVector(0,0,0); var_67_object = Obj(); // 0x37f PushV
	var_67_object = var_0_bool; // 0x380 MovT
	func_3923(var_67_object); // 0x381 NEW_2
	var_26_cvector = var_66_cvector; // 0x382 Mov
	var_72_float = 0; var_73_cvector = CVector(0,0,0); var_74_cvector = CVector(0,0,0); // 0x384 PushV
	var_73_cvector = var_25_cvector; // 0x385 Mov
	var_74_cvector = var_26_cvector; // 0x386 Mov
	func_4303(var_72_float, var_73_cvector, var_74_cvector); // 0x387 NEW_2
	var_96_float = 0.5; // 0x389 PushF
	var_97_bool = var_72_float < var_96_float; // 0x38a LT
	if(var_97_bool == 0) goto Label_912; // 0x38b JumpB
	var_98_object = Obj(); // 0x38c PushV
	var_98_object = var_0_bool; // 0x38d MovT
	func_4020(); // 0x38e NEW_2
	
Label_912:
	return 4; // 0x390 Return
}


task_3_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool)
{
	func_858(); // 0x392 NEW_2
	func_4630(); // 0x395 NEW_2
	return 0; // 0x397 Return
}


task_3_event_1(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	var_23_bool = 0; var_24_object = Obj(); // 0x399 PushV
	var_24_object = var_22_bool; // 0x39a Mov
	func_4407(var_23_bool, var_24_object); // 0x39b NEW_2
	if(var_23_bool == 0) goto Label_933; // 0x39d JumpB
	func_858(); // 0x39f NEW_2
	var_39_object = Obj(); // 0x3a1 PushV
	var_39_object = var_22_bool; // 0x3a2 Mov
	func_4430(var_39_object); // 0x3a3 NEW_2
	
Label_933:
	return 0; // 0x3a5 Return
}


task_4_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool)
{
	func_1124(var_21_bool); // 0x3c3 NEW_2
	func_4630(); // 0x3c6 NEW_2
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
	func_3918(var_94_cvector); // 0x460 NEW_2
	var_1_bool = var_94_cvector + var_29_cvector; // 0x462 Add2
}


task_4_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	func_1124(var_22_bool); // 0x46d NEW_2
	var_24_object = Obj(); // 0x46f PushV
	var_24_object = var_22_bool; // 0x470 Mov
	func_4344(); // 0x471 NEW_2
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
	func_3918(var_94_cvector); // 0x51b NEW_2
	var_1_bool = var_94_cvector + var_29_cvector; // 0x51d Add2
}


task_5_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	func_1311(var_22_bool); // 0x528 NEW_2
	var_24_object = Obj(); // 0x52a PushV
	var_24_object = var_22_bool; // 0x52b Mov
	func_4344(); // 0x52c NEW_2
	return 0; // 0x52e Return
}


task_6_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool)
{
	func_1505(var_21_bool); // 0x540 NEW_2
	func_4630(); // 0x543 NEW_2
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
	func_3918(var_94_cvector); // 0x5dd NEW_2
	var_1_bool = var_94_cvector + var_29_cvector; // 0x5df Add2
}


task_6_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	func_1505(var_22_bool); // 0x5ea NEW_2
	var_24_object = Obj(); // 0x5ec PushV
	var_24_object = var_22_bool; // 0x5ed Mov
	func_4344(); // 0x5ee NEW_2
	return 0; // 0x5f0 Return
}


task_7_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool)
{
	func_1699(var_21_bool); // 0x602 NEW_2
	func_4630(); // 0x605 NEW_2
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
	func_3918(var_94_cvector); // 0x69f NEW_2
	var_1_bool = var_94_cvector + var_29_cvector; // 0x6a1 Add2
}


task_7_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	func_1699(var_22_bool); // 0x6ac NEW_2
	var_24_object = Obj(); // 0x6ae PushV
	var_24_object = var_22_bool; // 0x6af Mov
	func_4344(); // 0x6b0 NEW_2
	return 0; // 0x6b2 Return
}


task_9_event_11(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_int, var_23_int)
{
	var_24_int = 1; // 0x87c PushI
	if(var_24_int == 0) goto Label_3917; // 0x87d JumpB
	func_4222(); // 0x87f NEW_2
	var_26_int = 45706; // 0x881 PushI
	var_27_bool = var_23_int == var_26_int; // 0x882 Eq
	if(var_27_bool == 0) goto Label_2185; // 0x883 JumpB
	var_28_object = Obj(); var_29_object = Obj(); // 0x884 PushV
	var_28_object = var_1_bool; // 0x885 MovT
	var_29_object = var_0_bool; // 0x886 MovT
	func_4695(); // 0x887 NEW_2
	
Label_2185:
	var_31_int = 45718; // 0x889 PushI
	var_32_bool = var_23_int == var_31_int; // 0x88a Eq
	if(var_32_bool == 0) goto Label_2193; // 0x88b JumpB
	var_33_object = Obj(); var_34_object = Obj(); // 0x88c PushV
	var_33_object = var_1_bool; // 0x88d MovT
	var_34_object = var_0_bool; // 0x88e MovT
	func_4695(); // 0x88f NEW_2
	
Label_2193:
	var_35_int = 45732; // 0x891 PushI
	var_36_bool = var_23_int == var_35_int; // 0x892 Eq
	if(var_36_bool == 0) goto Label_2201; // 0x893 JumpB
	var_37_object = Obj(); var_38_object = Obj(); // 0x894 PushV
	var_37_object = var_1_bool; // 0x895 MovT
	var_38_object = var_0_bool; // 0x896 MovT
	func_4695(); // 0x897 NEW_2
	
Label_2201:
	var_39_int = 39354; // 0x899 PushI
	var_40_bool = var_23_int == var_39_int; // 0x89a Eq
	if(var_40_bool == 0) goto Label_2209; // 0x89b JumpB
	var_41_object = Obj(); var_42_object = Obj(); // 0x89c PushV
	var_41_object = var_1_bool; // 0x89d MovT
	var_42_object = var_0_bool; // 0x89e MovT
	func_4695(); // 0x89f NEW_2
	
Label_2209:
	var_43_int = 45703; // 0x8a1 PushI
	var_44_bool = var_22_int == var_43_int; // 0x8a2 Eq
	if(var_44_bool == 0) goto Label_2518; // 0x8a3 JumpB
	var_45_bool = 0; var_46_object = Obj(); // 0x8a4 PushV
	var_46_object = var_1_bool; // 0x8a5 MovT
	func_4712(var_46_object); // 0x8a6 NEW_2
	if(var_45_bool == 0) goto Label_2450; // 0x8a8 JumpB
	var_53_string = ""; // 0x8a9 PushV
	var_53_string = "Neutral"; // 0x8aa MovS
	func_2149(var_23_int, var_53_string); // 0x8ab NEW_2
	var_70_int = 543247; // 0x8ad PushI
	SetMessage(var_70_int); // 0x8ae TObjFunc
	ClearReplies(); // 0x8b0 TObjFunc
	var_71_bool = 0; // 0x8b2 PushV
	var_71_bool = 1; // 0x8b3 MovB
	var_72_bool = 0; // 0x8b4 PushV
	var_72_bool = 1; // 0x8b5 MovB
	var_73_bool = 0; // 0x8b6 PushV
	var_73_bool = 1; // 0x8b7 MovB
	var_74_bool = 0; var_75_object = Obj(); // 0x8b8 PushV
	var_75_object = var_1_bool; // 0x8b9 MovT
	func_4724(var_74_bool, var_75_object); // 0x8ba NEW_2
	if(var_74_bool == 0) goto Label_2243; // 0x8bc JumpB
	var_85_bool = 0; var_86_object = Obj(); // 0x8bd PushV
	var_86_object = var_1_bool; // 0x8be MovT
	func_4734(var_85_bool, var_86_object); // 0x8bf NEW_2
	if(var_85_bool == 0) goto Label_2243; // 0x8c1 JumpB
	var_73_bool = 0; // 0x8c2 MovB
	
Label_2243:
	if(var_73_bool == 0) goto Label_2250; // 0x8c3 JumpB
	var_91_bool = 0; var_92_object = Obj(); // 0x8c4 PushV
	var_92_object = var_1_bool; // 0x8c5 MovT
	func_4744(var_91_bool, var_92_object); // 0x8c6 NEW_2
	if(var_91_bool == 0) goto Label_2250; // 0x8c8 JumpB
	var_72_bool = 0; // 0x8c9 MovB
	
Label_2250:
	if(var_72_bool == 0) goto Label_2257; // 0x8ca JumpB
	var_97_bool = 0; var_98_object = Obj(); // 0x8cb PushV
	var_98_object = var_1_bool; // 0x8cc MovT
	func_4754(var_97_bool, var_98_object); // 0x8cd NEW_2
	if(var_97_bool == 0) goto Label_2257; // 0x8cf JumpB
	var_71_bool = 0; // 0x8d0 MovB
	
Label_2257:
	if(var_71_bool == 0) goto Label_2263; // 0x8d1 JumpB
	var_103_int = 543250; // 0x8d2 PushI
	var_104_int = -1; // 0x8d3 PushI
	var_105_int = 45706; // 0x8d4 PushI
	AddReply(var_103_int, var_104_int, var_105_int); // 0x8d5 TObjFunc
	
Label_2263:
	var_106_bool = 0; // 0x8d7 PushV
	var_106_bool = 1; // 0x8d8 MovB
	var_107_bool = 0; // 0x8d9 PushV
	var_107_bool = 1; // 0x8da MovB
	var_108_bool = 0; // 0x8db PushV
	var_108_bool = 1; // 0x8dc MovB
	var_109_bool = 0; var_110_object = Obj(); // 0x8dd PushV
	var_110_object = var_1_bool; // 0x8de MovT
	func_4764(var_109_bool, var_110_object); // 0x8df NEW_2
	if(var_109_bool == 0) goto Label_2280; // 0x8e1 JumpB
	var_115_bool = 0; var_116_object = Obj(); // 0x8e2 PushV
	var_116_object = var_1_bool; // 0x8e3 MovT
	func_4774(var_115_bool, var_116_object); // 0x8e4 NEW_2
	if(var_115_bool == 0) goto Label_2280; // 0x8e6 JumpB
	var_108_bool = 0; // 0x8e7 MovB
	
Label_2280:
	if(var_108_bool == 0) goto Label_2287; // 0x8e8 JumpB
	var_121_bool = 0; var_122_object = Obj(); // 0x8e9 PushV
	var_122_object = var_1_bool; // 0x8ea MovT
	func_4784(var_121_bool, var_122_object); // 0x8eb NEW_2
	if(var_121_bool == 0) goto Label_2287; // 0x8ed JumpB
	var_107_bool = 0; // 0x8ee MovB
	
Label_2287:
	if(var_107_bool == 0) goto Label_2294; // 0x8ef JumpB
	var_127_bool = 0; var_128_object = Obj(); // 0x8f0 PushV
	var_128_object = var_1_bool; // 0x8f1 MovT
	func_4794(var_127_bool, var_128_object); // 0x8f2 NEW_2
	if(var_127_bool == 0) goto Label_2294; // 0x8f4 JumpB
	var_106_bool = 0; // 0x8f5 MovB
	
Label_2294:
	if(var_106_bool == 0) goto Label_2300; // 0x8f6 JumpB
	var_133_int = 543262; // 0x8f7 PushI
	var_134_int = -1; // 0x8f8 PushI
	var_135_int = 45718; // 0x8f9 PushI
	AddReply(var_133_int, var_134_int, var_135_int); // 0x8fa TObjFunc
	
Label_2300:
	var_136_bool = 0; // 0x8fc PushV
	var_136_bool = 1; // 0x8fd MovB
	var_137_bool = 0; // 0x8fe PushV
	var_137_bool = 1; // 0x8ff MovB
	var_138_bool = 0; // 0x900 PushV
	var_138_bool = 1; // 0x901 MovB
	var_139_bool = 0; var_140_object = Obj(); // 0x902 PushV
	var_140_object = var_1_bool; // 0x903 MovT
	func_4804(var_139_bool, var_140_object); // 0x904 NEW_2
	if(var_139_bool == 0) goto Label_2317; // 0x906 JumpB
	var_145_bool = 0; var_146_object = Obj(); // 0x907 PushV
	var_146_object = var_1_bool; // 0x908 MovT
	func_4814(var_145_bool, var_146_object); // 0x909 NEW_2
	if(var_145_bool == 0) goto Label_2317; // 0x90b JumpB
	var_138_bool = 0; // 0x90c MovB
	
Label_2317:
	if(var_138_bool == 0) goto Label_2324; // 0x90d JumpB
	var_151_bool = 0; var_152_object = Obj(); // 0x90e PushV
	var_152_object = var_1_bool; // 0x90f MovT
	func_4824(var_151_bool, var_152_object); // 0x910 NEW_2
	if(var_151_bool == 0) goto Label_2324; // 0x912 JumpB
	var_137_bool = 0; // 0x913 MovB
	
Label_2324:
	if(var_137_bool == 0) goto Label_2331; // 0x914 JumpB
	var_157_bool = 0; var_158_object = Obj(); // 0x915 PushV
	var_158_object = var_1_bool; // 0x916 MovT
	func_4834(var_157_bool, var_158_object); // 0x917 NEW_2
	if(var_157_bool == 0) goto Label_2331; // 0x919 JumpB
	var_136_bool = 0; // 0x91a MovB
	
Label_2331:
	if(var_136_bool == 0) goto Label_2337; // 0x91b JumpB
	var_163_int = 543276; // 0x91c PushI
	var_164_int = -1; // 0x91d PushI
	var_165_int = 45732; // 0x91e PushI
	AddReply(var_163_int, var_164_int, var_165_int); // 0x91f TObjFunc
	
Label_2337:
	var_166_bool = 0; // 0x921 PushV
	var_166_bool = 1; // 0x922 MovB
	var_167_bool = 0; // 0x923 PushV
	var_167_bool = 1; // 0x924 MovB
	var_168_bool = 0; // 0x925 PushV
	var_168_bool = 1; // 0x926 MovB
	var_169_bool = 0; var_170_object = Obj(); // 0x927 PushV
	var_170_object = var_1_bool; // 0x928 MovT
	func_4724(var_169_bool, var_170_object); // 0x929 NEW_2
	if(var_169_bool == 0) goto Label_2354; // 0x92b JumpB
	var_171_bool = 0; var_172_object = Obj(); // 0x92c PushV
	var_172_object = var_1_bool; // 0x92d MovT
	func_4744(var_171_bool, var_172_object); // 0x92e NEW_2
	if(var_171_bool == 0) goto Label_2354; // 0x930 JumpB
	var_168_bool = 0; // 0x931 MovB
	
Label_2354:
	if(var_168_bool == 0) goto Label_2361; // 0x932 JumpB
	var_173_bool = 0; var_174_object = Obj(); // 0x933 PushV
	var_174_object = var_1_bool; // 0x934 MovT
	func_4754(var_173_bool, var_174_object); // 0x935 NEW_2
	if(var_173_bool == 0) goto Label_2361; // 0x937 JumpB
	var_167_bool = 0; // 0x938 MovB
	
Label_2361:
	if(var_167_bool == 0) goto Label_2368; // 0x939 JumpB
	var_175_bool = 0; var_176_object = Obj(); // 0x93a PushV
	var_176_object = var_1_bool; // 0x93b MovT
	func_4784(var_175_bool, var_176_object); // 0x93c NEW_2
	if(var_175_bool == 0) goto Label_2368; // 0x93e JumpB
	var_166_bool = 0; // 0x93f MovB
	
Label_2368:
	if(var_166_bool == 0) goto Label_2374; // 0x940 JumpB
	var_177_int = 543248; // 0x941 PushI
	var_178_int = -1; // 0x942 PushI
	var_179_int = 45704; // 0x943 PushI
	AddReply(var_177_int, var_178_int, var_179_int); // 0x944 TObjFunc
	
Label_2374:
	var_180_bool = 0; // 0x946 PushV
	var_180_bool = 1; // 0x947 MovB
	var_181_bool = 0; // 0x948 PushV
	var_181_bool = 1; // 0x949 MovB
	var_182_bool = 0; // 0x94a PushV
	var_182_bool = 1; // 0x94b MovB
	var_183_bool = 0; var_184_object = Obj(); // 0x94c PushV
	var_184_object = var_1_bool; // 0x94d MovT
	func_4774(var_183_bool, var_184_object); // 0x94e NEW_2
	if(var_183_bool == 0) goto Label_2391; // 0x950 JumpB
	var_185_bool = 0; var_186_object = Obj(); // 0x951 PushV
	var_186_object = var_1_bool; // 0x952 MovT
	func_4764(var_185_bool, var_186_object); // 0x953 NEW_2
	if(var_185_bool == 0) goto Label_2391; // 0x955 JumpB
	var_182_bool = 0; // 0x956 MovB
	
Label_2391:
	if(var_182_bool == 0) goto Label_2398; // 0x957 JumpB
	var_187_bool = 0; var_188_object = Obj(); // 0x958 PushV
	var_188_object = var_1_bool; // 0x959 MovT
	func_4794(var_187_bool, var_188_object); // 0x95a NEW_2
	if(var_187_bool == 0) goto Label_2398; // 0x95c JumpB
	var_181_bool = 0; // 0x95d MovB
	
Label_2398:
	if(var_181_bool == 0) goto Label_2405; // 0x95e JumpB
	var_189_bool = 0; var_190_object = Obj(); // 0x95f PushV
	var_190_object = var_1_bool; // 0x960 MovT
	func_4734(var_189_bool, var_190_object); // 0x961 NEW_2
	if(var_189_bool == 0) goto Label_2405; // 0x963 JumpB
	var_180_bool = 0; // 0x964 MovB
	
Label_2405:
	if(var_180_bool == 0) goto Label_2411; // 0x965 JumpB
	var_191_int = 543252; // 0x966 PushI
	var_192_int = -1; // 0x967 PushI
	var_193_int = 45708; // 0x968 PushI
	AddReply(var_191_int, var_192_int, var_193_int); // 0x969 TObjFunc
	
Label_2411:
	var_194_bool = 0; // 0x96b PushV
	var_194_bool = 1; // 0x96c MovB
	var_195_bool = 0; var_196_object = Obj(); // 0x96d PushV
	var_196_object = var_1_bool; // 0x96e MovT
	func_4824(var_195_bool, var_196_object); // 0x96f NEW_2
	if(var_195_bool == 0) goto Label_2424; // 0x971 JumpB
	var_197_bool = 0; var_198_object = Obj(); // 0x972 PushV
	var_198_object = var_1_bool; // 0x973 MovT
	func_4834(var_197_bool, var_198_object); // 0x974 NEW_2
	if(var_197_bool == 0) goto Label_2424; // 0x976 JumpB
	var_194_bool = 0; // 0x977 MovB
	
Label_2424:
	if(var_194_bool == 0) goto Label_2430; // 0x978 JumpB
	var_199_int = 543281; // 0x979 PushI
	var_200_int = -1; // 0x97a PushI
	var_201_int = 45737; // 0x97b PushI
	AddReply(var_199_int, var_200_int, var_201_int); // 0x97c TObjFunc
	
Label_2430:
	var_202_bool = 0; // 0x97e PushV
	var_202_bool = 1; // 0x97f MovB
	var_203_bool = 0; var_204_object = Obj(); // 0x980 PushV
	var_204_object = var_1_bool; // 0x981 MovT
	func_4804(var_203_bool, var_204_object); // 0x982 NEW_2
	if(var_203_bool == 0) goto Label_2443; // 0x984 JumpB
	var_205_bool = 0; var_206_object = Obj(); // 0x985 PushV
	var_206_object = var_1_bool; // 0x986 MovT
	func_4814(var_205_bool, var_206_object); // 0x987 NEW_2
	if(var_205_bool == 0) goto Label_2443; // 0x989 JumpB
	var_202_bool = 0; // 0x98a MovB
	
Label_2443:
	if(var_202_bool == 0) goto Label_2449; // 0x98b JumpB
	var_207_int = 543275; // 0x98c PushI
	var_208_int = -1; // 0x98d PushI
	var_209_int = 45731; // 0x98e PushI
	AddReply(var_207_int, var_208_int, var_209_int); // 0x98f TObjFunc
	
Label_2449:
	return 0; // 0x991 Return
	
Label_2450:
	var_210_string = ""; // 0x992 PushV
	var_210_string = "Neutral"; // 0x993 MovS
	func_2149(var_23_int, var_210_string); // 0x994 NEW_2
	var_211_int = 537506; // 0x996 PushI
	SetMessage(var_211_int); // 0x997 TObjFunc
	ClearReplies(); // 0x999 TObjFunc
	var_212_int = 537507; // 0x99b PushI
	var_213_int = -1; // 0x99c PushI
	var_214_int = 39354; // 0x99d PushI
	AddReply(var_212_int, var_213_int, var_214_int); // 0x99e TObjFunc
	var_215_bool = 0; // 0x9a0 PushV
	var_215_bool = 0; // 0x9a1 MovB
	var_216_bool = 0; var_217_object = Obj(); // 0x9a2 PushV
	var_217_object = var_1_bool; // 0x9a3 MovT
	func_4700(var_217_object); // 0x9a4 NEW_2
	if(var_216_bool == 0) goto Label_2477; // 0x9a6 JumpB
	var_222_bool = 0; var_223_object = Obj(); // 0x9a7 PushV
	var_223_object = var_1_bool; // 0x9a8 MovT
	func_4744(var_222_bool, var_223_object); // 0x9a9 NEW_2
	if(var_222_bool == 0) goto Label_2477; // 0x9ab JumpB
	var_215_bool = 1; // 0x9ac MovB
	
Label_2477:
	if(var_215_bool == 0) goto Label_2483; // 0x9ad JumpB
	var_224_int = 537549; // 0x9ae PushI
	var_225_int = 39397; // 0x9af PushI
	var_226_int = 39396; // 0x9b0 PushI
	AddReply(var_224_int, var_225_int, var_226_int); // 0x9b1 TObjFunc
	
Label_2483:
	var_227_bool = 0; var_228_object = Obj(); // 0x9b3 PushV
	var_228_object = var_1_bool; // 0x9b4 MovT
	func_4724(var_227_bool, var_228_object); // 0x9b5 NEW_2
	if(var_227_bool == 0) goto Label_2493; // 0x9b7 JumpB
	var_229_int = 537671; // 0x9b8 PushI
	var_230_int = 39520; // 0x9b9 PushI
	var_231_int = 39519; // 0x9ba PushI
	AddReply(var_229_int, var_230_int, var_231_int); // 0x9bb TObjFunc
	
Label_2493:
	var_232_bool = 0; // 0x9bd PushV
	var_232_bool = 0; // 0x9be MovB
	var_233_bool = 0; var_234_object = Obj(); // 0x9bf PushV
	var_234_object = var_1_bool; // 0x9c0 MovT
	func_4724(var_233_bool, var_234_object); // 0x9c1 NEW_2
	if(var_233_bool == 0) goto Label_2506; // 0x9c3 JumpB
	var_235_bool = 0; var_236_object = Obj(); // 0x9c4 PushV
	var_236_object = var_1_bool; // 0x9c5 MovT
	func_4844(var_235_bool, var_236_object); // 0x9c6 NEW_2
	if(var_235_bool == 0) goto Label_2506; // 0x9c8 JumpB
	var_232_bool = 1; // 0x9c9 MovB
	
Label_2506:
	if(var_232_bool == 0) goto Label_2512; // 0x9ca JumpB
	var_250_int = 537702; // 0x9cb PushI
	var_251_int = 39551; // 0x9cc PushI
	var_252_int = 39550; // 0x9cd PushI
	AddReply(var_250_int, var_251_int, var_252_int); // 0x9ce TObjFunc
	
Label_2512:
	var_253_int = 537721; // 0x9d0 PushI
	var_254_int = -1; // 0x9d1 PushI
	var_255_int = 39569; // 0x9d2 PushI
	AddReply(var_253_int, var_254_int, var_255_int); // 0x9d3 TObjFunc
	return 0; // 0x9d5 Return
	
Label_2518:
	var_256_int = 39551; // 0x9d6 PushI
	var_257_bool = var_22_int == var_256_int; // 0x9d7 Eq
	if(var_257_bool == 0) goto Label_2536; // 0x9d8 JumpB
	var_258_string = ""; // 0x9d9 PushV
	var_258_string = "Neutral"; // 0x9da MovS
	func_2149(var_23_int, var_258_string); // 0x9db NEW_2
	var_259_int = 537703; // 0x9dd PushI
	SetMessage(var_259_int); // 0x9de TObjFunc
	ClearReplies(); // 0x9e0 TObjFunc
	var_260_int = 537704; // 0x9e2 PushI
	var_261_int = 39553; // 0x9e3 PushI
	var_262_int = 39552; // 0x9e4 PushI
	AddReply(var_260_int, var_261_int, var_262_int); // 0x9e5 TObjFunc
	return 0; // 0x9e7 Return
	
Label_2536:
	var_263_int = 39553; // 0x9e8 PushI
	var_264_bool = var_22_int == var_263_int; // 0x9e9 Eq
	if(var_264_bool == 0) goto Label_2559; // 0x9ea JumpB
	var_265_string = ""; // 0x9eb PushV
	var_265_string = "Neutral"; // 0x9ec MovS
	func_2149(var_23_int, var_265_string); // 0x9ed NEW_2
	var_266_int = 537705; // 0x9ef PushI
	SetMessage(var_266_int); // 0x9f0 TObjFunc
	ClearReplies(); // 0x9f2 TObjFunc
	var_267_int = 537706; // 0x9f4 PushI
	var_268_int = 39555; // 0x9f5 PushI
	var_269_int = 39554; // 0x9f6 PushI
	AddReply(var_267_int, var_268_int, var_269_int); // 0x9f7 TObjFunc
	var_270_int = 537717; // 0x9f9 PushI
	var_271_int = 39566; // 0x9fa PushI
	var_272_int = 39565; // 0x9fb PushI
	AddReply(var_270_int, var_271_int, var_272_int); // 0x9fc TObjFunc
	return 0; // 0x9fe Return
	
Label_2559:
	var_273_int = 39566; // 0x9ff PushI
	var_274_bool = var_22_int == var_273_int; // 0xa00 Eq
	if(var_274_bool == 0) goto Label_2587; // 0xa01 JumpB
	var_275_string = ""; // 0xa02 PushV
	var_275_string = "Neutral"; // 0xa03 MovS
	func_2149(var_23_int, var_275_string); // 0xa04 NEW_2
	var_276_int = 537718; // 0xa06 PushI
	SetMessage(var_276_int); // 0xa07 TObjFunc
	ClearReplies(); // 0xa09 TObjFunc
	var_277_int = 537719; // 0xa0b PushI
	var_278_int = -1; // 0xa0c PushI
	var_279_int = 39567; // 0xa0d PushI
	AddReply(var_277_int, var_278_int, var_279_int); // 0xa0e TObjFunc
	var_280_bool = 0; var_281_object = Obj(); // 0xa10 PushV
	var_281_object = var_1_bool; // 0xa11 MovT
	func_4700(var_281_object); // 0xa12 NEW_2
	if(var_280_bool == 0) goto Label_2586; // 0xa14 JumpB
	var_282_int = 537720; // 0xa15 PushI
	var_283_int = -1; // 0xa16 PushI
	var_284_int = 39568; // 0xa17 PushI
	AddReply(var_282_int, var_283_int, var_284_int); // 0xa18 TObjFunc
	
Label_2586:
	return 0; // 0xa1a Return
	
Label_2587:
	var_285_int = 39555; // 0xa1b PushI
	var_286_bool = var_22_int == var_285_int; // 0xa1c Eq
	if(var_286_bool == 0) goto Label_2610; // 0xa1d JumpB
	var_287_string = ""; // 0xa1e PushV
	var_287_string = "Neutral"; // 0xa1f MovS
	func_2149(var_23_int, var_287_string); // 0xa20 NEW_2
	var_288_int = 537707; // 0xa22 PushI
	SetMessage(var_288_int); // 0xa23 TObjFunc
	ClearReplies(); // 0xa25 TObjFunc
	var_289_int = 537708; // 0xa27 PushI
	var_290_int = 39557; // 0xa28 PushI
	var_291_int = 39556; // 0xa29 PushI
	AddReply(var_289_int, var_290_int, var_291_int); // 0xa2a TObjFunc
	var_292_int = 537711; // 0xa2c PushI
	var_293_int = 39560; // 0xa2d PushI
	var_294_int = 39559; // 0xa2e PushI
	AddReply(var_292_int, var_293_int, var_294_int); // 0xa2f TObjFunc
	return 0; // 0xa31 Return
	
Label_2610:
	var_295_int = 39560; // 0xa32 PushI
	var_296_bool = var_22_int == var_295_int; // 0xa33 Eq
	if(var_296_bool == 0) goto Label_2638; // 0xa34 JumpB
	var_297_string = ""; // 0xa35 PushV
	var_297_string = "Neutral"; // 0xa36 MovS
	func_2149(var_23_int, var_297_string); // 0xa37 NEW_2
	var_298_int = 537712; // 0xa39 PushI
	SetMessage(var_298_int); // 0xa3a TObjFunc
	ClearReplies(); // 0xa3c TObjFunc
	var_299_bool = 0; var_300_object = Obj(); // 0xa3e PushV
	var_300_object = var_1_bool; // 0xa3f MovT
	func_4700(var_300_object); // 0xa40 NEW_2
	if(var_299_bool == 0) goto Label_2632; // 0xa42 JumpB
	var_301_int = 537713; // 0xa43 PushI
	var_302_int = -1; // 0xa44 PushI
	var_303_int = 39561; // 0xa45 PushI
	AddReply(var_301_int, var_302_int, var_303_int); // 0xa46 TObjFunc
	
Label_2632:
	var_304_int = 537714; // 0xa48 PushI
	var_305_int = 39563; // 0xa49 PushI
	var_306_int = 39562; // 0xa4a PushI
	AddReply(var_304_int, var_305_int, var_306_int); // 0xa4b TObjFunc
	return 0; // 0xa4d Return
	
Label_2638:
	var_307_int = 39563; // 0xa4e PushI
	var_308_bool = var_22_int == var_307_int; // 0xa4f Eq
	if(var_308_bool == 0) goto Label_2656; // 0xa50 JumpB
	var_309_string = ""; // 0xa51 PushV
	var_309_string = "Neutral"; // 0xa52 MovS
	func_2149(var_23_int, var_309_string); // 0xa53 NEW_2
	var_310_int = 537715; // 0xa55 PushI
	SetMessage(var_310_int); // 0xa56 TObjFunc
	ClearReplies(); // 0xa58 TObjFunc
	var_311_int = 537716; // 0xa5a PushI
	var_312_int = -1; // 0xa5b PushI
	var_313_int = 39564; // 0xa5c PushI
	AddReply(var_311_int, var_312_int, var_313_int); // 0xa5d TObjFunc
	return 0; // 0xa5f Return
	
Label_2656:
	var_314_int = 39557; // 0xa60 PushI
	var_315_bool = var_22_int == var_314_int; // 0xa61 Eq
	if(var_315_bool == 0) goto Label_2674; // 0xa62 JumpB
	var_316_string = ""; // 0xa63 PushV
	var_316_string = "Neutral"; // 0xa64 MovS
	func_2149(var_23_int, var_316_string); // 0xa65 NEW_2
	var_317_int = 537709; // 0xa67 PushI
	SetMessage(var_317_int); // 0xa68 TObjFunc
	ClearReplies(); // 0xa6a TObjFunc
	var_318_int = 537710; // 0xa6c PushI
	var_319_int = -1; // 0xa6d PushI
	var_320_int = 39558; // 0xa6e PushI
	AddReply(var_318_int, var_319_int, var_320_int); // 0xa6f TObjFunc
	return 0; // 0xa71 Return
	
Label_2674:
	var_321_int = 39538; // 0xa72 PushI
	var_322_bool = var_22_int == var_321_int; // 0xa73 Eq
	if(var_322_bool == 0) goto Label_2677; // 0xa74 JumpB
	
Label_2677:
	var_323_int = 39540; // 0xa75 PushI
	var_324_bool = var_22_int == var_323_int; // 0xa76 Eq
	if(var_324_bool == 0) goto Label_2700; // 0xa77 JumpB
	var_325_string = ""; // 0xa78 PushV
	var_325_string = "Neutral"; // 0xa79 MovS
	func_2149(var_23_int, var_325_string); // 0xa7a NEW_2
	var_326_int = 537692; // 0xa7c PushI
	SetMessage(var_326_int); // 0xa7d TObjFunc
	ClearReplies(); // 0xa7f TObjFunc
	var_327_int = 537693; // 0xa81 PushI
	var_328_int = 39542; // 0xa82 PushI
	var_329_int = 39541; // 0xa83 PushI
	AddReply(var_327_int, var_328_int, var_329_int); // 0xa84 TObjFunc
	var_330_int = 537696; // 0xa86 PushI
	var_331_int = 39545; // 0xa87 PushI
	var_332_int = 39544; // 0xa88 PushI
	AddReply(var_330_int, var_331_int, var_332_int); // 0xa89 TObjFunc
	return 0; // 0xa8b Return
	
Label_2700:
	var_333_int = 39545; // 0xa8c PushI
	var_334_bool = var_22_int == var_333_int; // 0xa8d Eq
	if(var_334_bool == 0) goto Label_2718; // 0xa8e JumpB
	var_335_string = ""; // 0xa8f PushV
	var_335_string = "Neutral"; // 0xa90 MovS
	func_2149(var_23_int, var_335_string); // 0xa91 NEW_2
	var_336_int = 537697; // 0xa93 PushI
	SetMessage(var_336_int); // 0xa94 TObjFunc
	ClearReplies(); // 0xa96 TObjFunc
	var_337_int = 537698; // 0xa98 PushI
	var_338_int = 39547; // 0xa99 PushI
	var_339_int = 39546; // 0xa9a PushI
	AddReply(var_337_int, var_338_int, var_339_int); // 0xa9b TObjFunc
	return 0; // 0xa9d Return
	
Label_2718:
	var_340_int = 39547; // 0xa9e PushI
	var_341_bool = var_22_int == var_340_int; // 0xa9f Eq
	if(var_341_bool == 0) goto Label_2736; // 0xaa0 JumpB
	var_342_string = ""; // 0xaa1 PushV
	var_342_string = "Neutral"; // 0xaa2 MovS
	func_2149(var_23_int, var_342_string); // 0xaa3 NEW_2
	var_343_int = 537699; // 0xaa5 PushI
	SetMessage(var_343_int); // 0xaa6 TObjFunc
	ClearReplies(); // 0xaa8 TObjFunc
	var_344_int = 537700; // 0xaaa PushI
	var_345_int = -1; // 0xaab PushI
	var_346_int = 39548; // 0xaac PushI
	AddReply(var_344_int, var_345_int, var_346_int); // 0xaad TObjFunc
	return 0; // 0xaaf Return
	
Label_2736:
	var_347_int = 39542; // 0xab0 PushI
	var_348_bool = var_22_int == var_347_int; // 0xab1 Eq
	if(var_348_bool == 0) goto Label_2754; // 0xab2 JumpB
	var_349_string = ""; // 0xab3 PushV
	var_349_string = "Neutral"; // 0xab4 MovS
	func_2149(var_23_int, var_349_string); // 0xab5 NEW_2
	var_350_int = 537694; // 0xab7 PushI
	SetMessage(var_350_int); // 0xab8 TObjFunc
	ClearReplies(); // 0xaba TObjFunc
	var_351_int = 537695; // 0xabc PushI
	var_352_int = -1; // 0xabd PushI
	var_353_int = 39543; // 0xabe PushI
	AddReply(var_351_int, var_352_int, var_353_int); // 0xabf TObjFunc
	return 0; // 0xac1 Return
	
Label_2754:
	var_354_int = 39520; // 0xac2 PushI
	var_355_bool = var_22_int == var_354_int; // 0xac3 Eq
	if(var_355_bool == 0) goto Label_2777; // 0xac4 JumpB
	var_356_string = ""; // 0xac5 PushV
	var_356_string = "Neutral"; // 0xac6 MovS
	func_2149(var_23_int, var_356_string); // 0xac7 NEW_2
	var_357_int = 537672; // 0xac9 PushI
	SetMessage(var_357_int); // 0xaca TObjFunc
	ClearReplies(); // 0xacc TObjFunc
	var_358_int = 537673; // 0xace PushI
	var_359_int = 39522; // 0xacf PushI
	var_360_int = 39521; // 0xad0 PushI
	AddReply(var_358_int, var_359_int, var_360_int); // 0xad1 TObjFunc
	var_361_int = 537678; // 0xad3 PushI
	var_362_int = 39527; // 0xad4 PushI
	var_363_int = 39526; // 0xad5 PushI
	AddReply(var_361_int, var_362_int, var_363_int); // 0xad6 TObjFunc
	return 0; // 0xad8 Return
	
Label_2777:
	var_364_int = 39527; // 0xad9 PushI
	var_365_bool = var_22_int == var_364_int; // 0xada Eq
	if(var_365_bool == 0) goto Label_2795; // 0xadb JumpB
	var_366_string = ""; // 0xadc PushV
	var_366_string = "Neutral"; // 0xadd MovS
	func_2149(var_23_int, var_366_string); // 0xade NEW_2
	var_367_int = 537679; // 0xae0 PushI
	SetMessage(var_367_int); // 0xae1 TObjFunc
	ClearReplies(); // 0xae3 TObjFunc
	var_368_int = 537680; // 0xae5 PushI
	var_369_int = 39529; // 0xae6 PushI
	var_370_int = 39528; // 0xae7 PushI
	AddReply(var_368_int, var_369_int, var_370_int); // 0xae8 TObjFunc
	return 0; // 0xaea Return
	
Label_2795:
	var_371_int = 39529; // 0xaeb PushI
	var_372_bool = var_22_int == var_371_int; // 0xaec Eq
	if(var_372_bool == 0) goto Label_2823; // 0xaed JumpB
	var_373_string = ""; // 0xaee PushV
	var_373_string = "Neutral"; // 0xaef MovS
	func_2149(var_23_int, var_373_string); // 0xaf0 NEW_2
	var_374_int = 537681; // 0xaf2 PushI
	SetMessage(var_374_int); // 0xaf3 TObjFunc
	ClearReplies(); // 0xaf5 TObjFunc
	var_375_bool = 0; var_376_object = Obj(); // 0xaf7 PushV
	var_376_object = var_1_bool; // 0xaf8 MovT
	func_4700(var_376_object); // 0xaf9 NEW_2
	if(var_375_bool == 0) goto Label_2817; // 0xafb JumpB
	var_377_int = 537682; // 0xafc PushI
	var_378_int = 39531; // 0xafd PushI
	var_379_int = 39530; // 0xafe PushI
	AddReply(var_377_int, var_378_int, var_379_int); // 0xaff TObjFunc
	
Label_2817:
	var_380_int = 537688; // 0xb01 PushI
	var_381_int = -1; // 0xb02 PushI
	var_382_int = 39536; // 0xb03 PushI
	AddReply(var_380_int, var_381_int, var_382_int); // 0xb04 TObjFunc
	return 0; // 0xb06 Return
	
Label_2823:
	var_383_int = 39531; // 0xb07 PushI
	var_384_bool = var_22_int == var_383_int; // 0xb08 Eq
	if(var_384_bool == 0) goto Label_2846; // 0xb09 JumpB
	var_385_string = ""; // 0xb0a PushV
	var_385_string = "Neutral"; // 0xb0b MovS
	func_2149(var_23_int, var_385_string); // 0xb0c NEW_2
	var_386_int = 537683; // 0xb0e PushI
	SetMessage(var_386_int); // 0xb0f TObjFunc
	ClearReplies(); // 0xb11 TObjFunc
	var_387_int = 537684; // 0xb13 PushI
	var_388_int = 39533; // 0xb14 PushI
	var_389_int = 39532; // 0xb15 PushI
	AddReply(var_387_int, var_388_int, var_389_int); // 0xb16 TObjFunc
	var_390_int = 537687; // 0xb18 PushI
	var_391_int = -1; // 0xb19 PushI
	var_392_int = 39535; // 0xb1a PushI
	AddReply(var_390_int, var_391_int, var_392_int); // 0xb1b TObjFunc
	return 0; // 0xb1d Return
	
Label_2846:
	var_393_int = 39533; // 0xb1e PushI
	var_394_bool = var_22_int == var_393_int; // 0xb1f Eq
	if(var_394_bool == 0) goto Label_2864; // 0xb20 JumpB
	var_395_string = ""; // 0xb21 PushV
	var_395_string = "Neutral"; // 0xb22 MovS
	func_2149(var_23_int, var_395_string); // 0xb23 NEW_2
	var_396_int = 537685; // 0xb25 PushI
	SetMessage(var_396_int); // 0xb26 TObjFunc
	ClearReplies(); // 0xb28 TObjFunc
	var_397_int = 537686; // 0xb2a PushI
	var_398_int = -1; // 0xb2b PushI
	var_399_int = 39534; // 0xb2c PushI
	AddReply(var_397_int, var_398_int, var_399_int); // 0xb2d TObjFunc
	return 0; // 0xb2f Return
	
Label_2864:
	var_400_int = 39522; // 0xb30 PushI
	var_401_bool = var_22_int == var_400_int; // 0xb31 Eq
	if(var_401_bool == 0) goto Label_2882; // 0xb32 JumpB
	var_402_string = ""; // 0xb33 PushV
	var_402_string = "Neutral"; // 0xb34 MovS
	func_2149(var_23_int, var_402_string); // 0xb35 NEW_2
	var_403_int = 537674; // 0xb37 PushI
	SetMessage(var_403_int); // 0xb38 TObjFunc
	ClearReplies(); // 0xb3a TObjFunc
	var_404_int = 537675; // 0xb3c PushI
	var_405_int = 39524; // 0xb3d PushI
	var_406_int = 39523; // 0xb3e PushI
	AddReply(var_404_int, var_405_int, var_406_int); // 0xb3f TObjFunc
	return 0; // 0xb41 Return
	
Label_2882:
	var_407_int = 39524; // 0xb42 PushI
	var_408_bool = var_22_int == var_407_int; // 0xb43 Eq
	if(var_408_bool == 0) goto Label_2900; // 0xb44 JumpB
	var_409_string = ""; // 0xb45 PushV
	var_409_string = "Neutral"; // 0xb46 MovS
	func_2149(var_23_int, var_409_string); // 0xb47 NEW_2
	var_410_int = 537676; // 0xb49 PushI
	SetMessage(var_410_int); // 0xb4a TObjFunc
	ClearReplies(); // 0xb4c TObjFunc
	var_411_int = 537677; // 0xb4e PushI
	var_412_int = -1; // 0xb4f PushI
	var_413_int = 39525; // 0xb50 PushI
	AddReply(var_411_int, var_412_int, var_413_int); // 0xb51 TObjFunc
	return 0; // 0xb53 Return
	
Label_2900:
	var_414_int = 39514; // 0xb54 PushI
	var_415_bool = var_22_int == var_414_int; // 0xb55 Eq
	if(var_415_bool == 0) goto Label_2903; // 0xb56 JumpB
	
Label_2903:
	var_416_int = 39516; // 0xb57 PushI
	var_417_bool = var_22_int == var_416_int; // 0xb58 Eq
	if(var_417_bool == 0) goto Label_2921; // 0xb59 JumpB
	var_418_string = ""; // 0xb5a PushV
	var_418_string = "Neutral"; // 0xb5b MovS
	func_2149(var_23_int, var_418_string); // 0xb5c NEW_2
	var_419_int = 537668; // 0xb5e PushI
	SetMessage(var_419_int); // 0xb5f TObjFunc
	ClearReplies(); // 0xb61 TObjFunc
	var_420_int = 537669; // 0xb63 PushI
	var_421_int = -1; // 0xb64 PushI
	var_422_int = 39517; // 0xb65 PushI
	AddReply(var_420_int, var_421_int, var_422_int); // 0xb66 TObjFunc
	return 0; // 0xb68 Return
	
Label_2921:
	var_423_int = 39508; // 0xb69 PushI
	var_424_bool = var_22_int == var_423_int; // 0xb6a Eq
	if(var_424_bool == 0) goto Label_2924; // 0xb6b JumpB
	
Label_2924:
	var_425_int = 39510; // 0xb6c PushI
	var_426_bool = var_22_int == var_425_int; // 0xb6d Eq
	if(var_426_bool == 0) goto Label_2942; // 0xb6e JumpB
	var_427_string = ""; // 0xb6f PushV
	var_427_string = "Neutral"; // 0xb70 MovS
	func_2149(var_23_int, var_427_string); // 0xb71 NEW_2
	var_428_int = 537662; // 0xb73 PushI
	SetMessage(var_428_int); // 0xb74 TObjFunc
	ClearReplies(); // 0xb76 TObjFunc
	var_429_int = 537663; // 0xb78 PushI
	var_430_int = -1; // 0xb79 PushI
	var_431_int = 39511; // 0xb7a PushI
	AddReply(var_429_int, var_430_int, var_431_int); // 0xb7b TObjFunc
	return 0; // 0xb7d Return
	
Label_2942:
	var_432_int = 39496; // 0xb7e PushI
	var_433_bool = var_22_int == var_432_int; // 0xb7f Eq
	if(var_433_bool == 0) goto Label_2945; // 0xb80 JumpB
	
Label_2945:
	var_434_int = 39498; // 0xb81 PushI
	var_435_bool = var_22_int == var_434_int; // 0xb82 Eq
	if(var_435_bool == 0) goto Label_2968; // 0xb83 JumpB
	var_436_string = ""; // 0xb84 PushV
	var_436_string = "Neutral"; // 0xb85 MovS
	func_2149(var_23_int, var_436_string); // 0xb86 NEW_2
	var_437_int = 537650; // 0xb88 PushI
	SetMessage(var_437_int); // 0xb89 TObjFunc
	ClearReplies(); // 0xb8b TObjFunc
	var_438_int = 537651; // 0xb8d PushI
	var_439_int = 39500; // 0xb8e PushI
	var_440_int = 39499; // 0xb8f PushI
	AddReply(var_438_int, var_439_int, var_440_int); // 0xb90 TObjFunc
	var_441_int = 537657; // 0xb92 PushI
	var_442_int = -1; // 0xb93 PushI
	var_443_int = 39505; // 0xb94 PushI
	AddReply(var_441_int, var_442_int, var_443_int); // 0xb95 TObjFunc
	return 0; // 0xb97 Return
	
Label_2968:
	var_444_int = 39500; // 0xb98 PushI
	var_445_bool = var_22_int == var_444_int; // 0xb99 Eq
	if(var_445_bool == 0) goto Label_2991; // 0xb9a JumpB
	var_446_string = ""; // 0xb9b PushV
	var_446_string = "Neutral"; // 0xb9c MovS
	func_2149(var_23_int, var_446_string); // 0xb9d NEW_2
	var_447_int = 537652; // 0xb9f PushI
	SetMessage(var_447_int); // 0xba0 TObjFunc
	ClearReplies(); // 0xba2 TObjFunc
	var_448_int = 537653; // 0xba4 PushI
	var_449_int = -1; // 0xba5 PushI
	var_450_int = 39501; // 0xba6 PushI
	AddReply(var_448_int, var_449_int, var_450_int); // 0xba7 TObjFunc
	var_451_int = 537654; // 0xba9 PushI
	var_452_int = 39503; // 0xbaa PushI
	var_453_int = 39502; // 0xbab PushI
	AddReply(var_451_int, var_452_int, var_453_int); // 0xbac TObjFunc
	return 0; // 0xbae Return
	
Label_2991:
	var_454_int = 39503; // 0xbaf PushI
	var_455_bool = var_22_int == var_454_int; // 0xbb0 Eq
	if(var_455_bool == 0) goto Label_3009; // 0xbb1 JumpB
	var_456_string = ""; // 0xbb2 PushV
	var_456_string = "Neutral"; // 0xbb3 MovS
	func_2149(var_23_int, var_456_string); // 0xbb4 NEW_2
	var_457_int = 537655; // 0xbb6 PushI
	SetMessage(var_457_int); // 0xbb7 TObjFunc
	ClearReplies(); // 0xbb9 TObjFunc
	var_458_int = 537656; // 0xbbb PushI
	var_459_int = -1; // 0xbbc PushI
	var_460_int = 39504; // 0xbbd PushI
	AddReply(var_458_int, var_459_int, var_460_int); // 0xbbe TObjFunc
	return 0; // 0xbc0 Return
	
Label_3009:
	var_461_int = 39489; // 0xbc1 PushI
	var_462_bool = var_22_int == var_461_int; // 0xbc2 Eq
	if(var_462_bool == 0) goto Label_3012; // 0xbc3 JumpB
	
Label_3012:
	var_463_int = 39491; // 0xbc4 PushI
	var_464_bool = var_22_int == var_463_int; // 0xbc5 Eq
	if(var_464_bool == 0) goto Label_3040; // 0xbc6 JumpB
	var_465_string = ""; // 0xbc7 PushV
	var_465_string = "Neutral"; // 0xbc8 MovS
	func_2149(var_23_int, var_465_string); // 0xbc9 NEW_2
	var_466_int = 537643; // 0xbcb PushI
	SetMessage(var_466_int); // 0xbcc TObjFunc
	ClearReplies(); // 0xbce TObjFunc
	var_467_int = 537644; // 0xbd0 PushI
	var_468_int = -1; // 0xbd1 PushI
	var_469_int = 39492; // 0xbd2 PushI
	AddReply(var_467_int, var_468_int, var_469_int); // 0xbd3 TObjFunc
	var_470_bool = 0; var_471_object = Obj(); // 0xbd5 PushV
	var_471_object = var_1_bool; // 0xbd6 MovT
	func_4700(var_471_object); // 0xbd7 NEW_2
	if(var_470_bool == 0) goto Label_3039; // 0xbd9 JumpB
	var_472_int = 537645; // 0xbda PushI
	var_473_int = -1; // 0xbdb PushI
	var_474_int = 39493; // 0xbdc PushI
	AddReply(var_472_int, var_473_int, var_474_int); // 0xbdd TObjFunc
	
Label_3039:
	return 0; // 0xbdf Return
	
Label_3040:
	var_475_int = 39482; // 0xbe0 PushI
	var_476_bool = var_22_int == var_475_int; // 0xbe1 Eq
	if(var_476_bool == 0) goto Label_3043; // 0xbe2 JumpB
	
Label_3043:
	var_477_int = 39484; // 0xbe3 PushI
	var_478_bool = var_22_int == var_477_int; // 0xbe4 Eq
	if(var_478_bool == 0) goto Label_3066; // 0xbe5 JumpB
	var_479_string = ""; // 0xbe6 PushV
	var_479_string = "Neutral"; // 0xbe7 MovS
	func_2149(var_23_int, var_479_string); // 0xbe8 NEW_2
	var_480_int = 537636; // 0xbea PushI
	SetMessage(var_480_int); // 0xbeb TObjFunc
	ClearReplies(); // 0xbed TObjFunc
	var_481_int = 537637; // 0xbef PushI
	var_482_int = -1; // 0xbf0 PushI
	var_483_int = 39485; // 0xbf1 PushI
	AddReply(var_481_int, var_482_int, var_483_int); // 0xbf2 TObjFunc
	var_484_int = 537638; // 0xbf4 PushI
	var_485_int = -1; // 0xbf5 PushI
	var_486_int = 39486; // 0xbf6 PushI
	AddReply(var_484_int, var_485_int, var_486_int); // 0xbf7 TObjFunc
	return 0; // 0xbf9 Return
	
Label_3066:
	var_487_int = 39470; // 0xbfa PushI
	var_488_bool = var_22_int == var_487_int; // 0xbfb Eq
	if(var_488_bool == 0) goto Label_3069; // 0xbfc JumpB
	
Label_3069:
	var_489_int = 39472; // 0xbfd PushI
	var_490_bool = var_22_int == var_489_int; // 0xbfe Eq
	if(var_490_bool == 0) goto Label_3087; // 0xbff JumpB
	var_491_string = ""; // 0xc00 PushV
	var_491_string = "Neutral"; // 0xc01 MovS
	func_2149(var_23_int, var_491_string); // 0xc02 NEW_2
	var_492_int = 537624; // 0xc04 PushI
	SetMessage(var_492_int); // 0xc05 TObjFunc
	ClearReplies(); // 0xc07 TObjFunc
	var_493_int = 537625; // 0xc09 PushI
	var_494_int = 39474; // 0xc0a PushI
	var_495_int = 39473; // 0xc0b PushI
	AddReply(var_493_int, var_494_int, var_495_int); // 0xc0c TObjFunc
	return 0; // 0xc0e Return
	
Label_3087:
	var_496_int = 39474; // 0xc0f PushI
	var_497_bool = var_22_int == var_496_int; // 0xc10 Eq
	if(var_497_bool == 0) goto Label_3110; // 0xc11 JumpB
	var_498_string = ""; // 0xc12 PushV
	var_498_string = "Neutral"; // 0xc13 MovS
	func_2149(var_23_int, var_498_string); // 0xc14 NEW_2
	var_499_int = 537626; // 0xc16 PushI
	SetMessage(var_499_int); // 0xc17 TObjFunc
	ClearReplies(); // 0xc19 TObjFunc
	var_500_int = 537627; // 0xc1b PushI
	var_501_int = -1; // 0xc1c PushI
	var_502_int = 39475; // 0xc1d PushI
	AddReply(var_500_int, var_501_int, var_502_int); // 0xc1e TObjFunc
	var_503_int = 537628; // 0xc20 PushI
	var_504_int = 39477; // 0xc21 PushI
	var_505_int = 39476; // 0xc22 PushI
	AddReply(var_503_int, var_504_int, var_505_int); // 0xc23 TObjFunc
	return 0; // 0xc25 Return
	
Label_3110:
	var_506_int = 39477; // 0xc26 PushI
	var_507_bool = var_22_int == var_506_int; // 0xc27 Eq
	if(var_507_bool == 0) goto Label_3133; // 0xc28 JumpB
	var_508_string = ""; // 0xc29 PushV
	var_508_string = "Neutral"; // 0xc2a MovS
	func_2149(var_23_int, var_508_string); // 0xc2b NEW_2
	var_509_int = 537629; // 0xc2d PushI
	SetMessage(var_509_int); // 0xc2e TObjFunc
	ClearReplies(); // 0xc30 TObjFunc
	var_510_int = 537630; // 0xc32 PushI
	var_511_int = -1; // 0xc33 PushI
	var_512_int = 39478; // 0xc34 PushI
	AddReply(var_510_int, var_511_int, var_512_int); // 0xc35 TObjFunc
	var_513_int = 537631; // 0xc37 PushI
	var_514_int = -1; // 0xc38 PushI
	var_515_int = 39479; // 0xc39 PushI
	AddReply(var_513_int, var_514_int, var_515_int); // 0xc3a TObjFunc
	return 0; // 0xc3c Return
	
Label_3133:
	var_516_int = 39452; // 0xc3d PushI
	var_517_bool = var_22_int == var_516_int; // 0xc3e Eq
	if(var_517_bool == 0) goto Label_3136; // 0xc3f JumpB
	
Label_3136:
	var_518_int = 39461; // 0xc40 PushI
	var_519_bool = var_22_int == var_518_int; // 0xc41 Eq
	if(var_519_bool == 0) goto Label_3159; // 0xc42 JumpB
	var_520_string = ""; // 0xc43 PushV
	var_520_string = "Neutral"; // 0xc44 MovS
	func_2149(var_23_int, var_520_string); // 0xc45 NEW_2
	var_521_int = 537613; // 0xc47 PushI
	SetMessage(var_521_int); // 0xc48 TObjFunc
	ClearReplies(); // 0xc4a TObjFunc
	var_522_int = 537614; // 0xc4c PushI
	var_523_int = 39463; // 0xc4d PushI
	var_524_int = 39462; // 0xc4e PushI
	AddReply(var_522_int, var_523_int, var_524_int); // 0xc4f TObjFunc
	var_525_int = 537620; // 0xc51 PushI
	var_526_int = -1; // 0xc52 PushI
	var_527_int = 39468; // 0xc53 PushI
	AddReply(var_525_int, var_526_int, var_527_int); // 0xc54 TObjFunc
	return 0; // 0xc56 Return
	
Label_3159:
	var_528_int = 39463; // 0xc57 PushI
	var_529_bool = var_22_int == var_528_int; // 0xc58 Eq
	if(var_529_bool == 0) goto Label_3177; // 0xc59 JumpB
	var_530_string = ""; // 0xc5a PushV
	var_530_string = "Neutral"; // 0xc5b MovS
	func_2149(var_23_int, var_530_string); // 0xc5c NEW_2
	var_531_int = 537615; // 0xc5e PushI
	SetMessage(var_531_int); // 0xc5f TObjFunc
	ClearReplies(); // 0xc61 TObjFunc
	var_532_int = 537616; // 0xc63 PushI
	var_533_int = 39465; // 0xc64 PushI
	var_534_int = 39464; // 0xc65 PushI
	AddReply(var_532_int, var_533_int, var_534_int); // 0xc66 TObjFunc
	return 0; // 0xc68 Return
	
Label_3177:
	var_535_int = 39465; // 0xc69 PushI
	var_536_bool = var_22_int == var_535_int; // 0xc6a Eq
	if(var_536_bool == 0) goto Label_3200; // 0xc6b JumpB
	var_537_string = ""; // 0xc6c PushV
	var_537_string = "Neutral"; // 0xc6d MovS
	func_2149(var_23_int, var_537_string); // 0xc6e NEW_2
	var_538_int = 537617; // 0xc70 PushI
	SetMessage(var_538_int); // 0xc71 TObjFunc
	ClearReplies(); // 0xc73 TObjFunc
	var_539_int = 537618; // 0xc75 PushI
	var_540_int = -1; // 0xc76 PushI
	var_541_int = 39466; // 0xc77 PushI
	AddReply(var_539_int, var_540_int, var_541_int); // 0xc78 TObjFunc
	var_542_int = 537619; // 0xc7a PushI
	var_543_int = -1; // 0xc7b PushI
	var_544_int = 39467; // 0xc7c PushI
	AddReply(var_542_int, var_543_int, var_544_int); // 0xc7d TObjFunc
	return 0; // 0xc7f Return
	
Label_3200:
	var_545_int = 39454; // 0xc80 PushI
	var_546_bool = var_22_int == var_545_int; // 0xc81 Eq
	if(var_546_bool == 0) goto Label_3223; // 0xc82 JumpB
	var_547_string = ""; // 0xc83 PushV
	var_547_string = "Neutral"; // 0xc84 MovS
	func_2149(var_23_int, var_547_string); // 0xc85 NEW_2
	var_548_int = 537606; // 0xc87 PushI
	SetMessage(var_548_int); // 0xc88 TObjFunc
	ClearReplies(); // 0xc8a TObjFunc
	var_549_int = 537607; // 0xc8c PushI
	var_550_int = 39456; // 0xc8d PushI
	var_551_int = 39455; // 0xc8e PushI
	AddReply(var_549_int, var_550_int, var_551_int); // 0xc8f TObjFunc
	var_552_int = 537611; // 0xc91 PushI
	var_553_int = -1; // 0xc92 PushI
	var_554_int = 39459; // 0xc93 PushI
	AddReply(var_552_int, var_553_int, var_554_int); // 0xc94 TObjFunc
	return 0; // 0xc96 Return
	
Label_3223:
	var_555_int = 39456; // 0xc97 PushI
	var_556_bool = var_22_int == var_555_int; // 0xc98 Eq
	if(var_556_bool == 0) goto Label_3246; // 0xc99 JumpB
	var_557_string = ""; // 0xc9a PushV
	var_557_string = "Neutral"; // 0xc9b MovS
	func_2149(var_23_int, var_557_string); // 0xc9c NEW_2
	var_558_int = 537608; // 0xc9e PushI
	SetMessage(var_558_int); // 0xc9f TObjFunc
	ClearReplies(); // 0xca1 TObjFunc
	var_559_int = 537609; // 0xca3 PushI
	var_560_int = -1; // 0xca4 PushI
	var_561_int = 39457; // 0xca5 PushI
	AddReply(var_559_int, var_560_int, var_561_int); // 0xca6 TObjFunc
	var_562_int = 537610; // 0xca8 PushI
	var_563_int = -1; // 0xca9 PushI
	var_564_int = 39458; // 0xcaa PushI
	AddReply(var_562_int, var_563_int, var_564_int); // 0xcab TObjFunc
	return 0; // 0xcad Return
	
Label_3246:
	var_565_int = 39442; // 0xcae PushI
	var_566_bool = var_22_int == var_565_int; // 0xcaf Eq
	if(var_566_bool == 0) goto Label_3249; // 0xcb0 JumpB
	
Label_3249:
	var_567_int = 39444; // 0xcb1 PushI
	var_568_bool = var_22_int == var_567_int; // 0xcb2 Eq
	if(var_568_bool == 0) goto Label_3272; // 0xcb3 JumpB
	var_569_string = ""; // 0xcb4 PushV
	var_569_string = "Neutral"; // 0xcb5 MovS
	func_2149(var_23_int, var_569_string); // 0xcb6 NEW_2
	var_570_int = 537596; // 0xcb8 PushI
	SetMessage(var_570_int); // 0xcb9 TObjFunc
	ClearReplies(); // 0xcbb TObjFunc
	var_571_int = 537597; // 0xcbd PushI
	var_572_int = 39446; // 0xcbe PushI
	var_573_int = 39445; // 0xcbf PushI
	AddReply(var_571_int, var_572_int, var_573_int); // 0xcc0 TObjFunc
	var_574_int = 537601; // 0xcc2 PushI
	var_575_int = -1; // 0xcc3 PushI
	var_576_int = 39449; // 0xcc4 PushI
	AddReply(var_574_int, var_575_int, var_576_int); // 0xcc5 TObjFunc
	return 0; // 0xcc7 Return
	
Label_3272:
	var_577_int = 39446; // 0xcc8 PushI
	var_578_bool = var_22_int == var_577_int; // 0xcc9 Eq
	if(var_578_bool == 0) goto Label_3295; // 0xcca JumpB
	var_579_string = ""; // 0xccb PushV
	var_579_string = "Neutral"; // 0xccc MovS
	func_2149(var_23_int, var_579_string); // 0xccd NEW_2
	var_580_int = 537598; // 0xccf PushI
	SetMessage(var_580_int); // 0xcd0 TObjFunc
	ClearReplies(); // 0xcd2 TObjFunc
	var_581_int = 537599; // 0xcd4 PushI
	var_582_int = -1; // 0xcd5 PushI
	var_583_int = 39447; // 0xcd6 PushI
	AddReply(var_581_int, var_582_int, var_583_int); // 0xcd7 TObjFunc
	var_584_int = 537600; // 0xcd9 PushI
	var_585_int = -1; // 0xcda PushI
	var_586_int = 39448; // 0xcdb PushI
	AddReply(var_584_int, var_585_int, var_586_int); // 0xcdc TObjFunc
	return 0; // 0xcde Return
	
Label_3295:
	var_587_int = 39419; // 0xcdf PushI
	var_588_bool = var_22_int == var_587_int; // 0xce0 Eq
	if(var_588_bool == 0) goto Label_3298; // 0xce1 JumpB
	
Label_3298:
	var_589_int = 39437; // 0xce2 PushI
	var_590_bool = var_22_int == var_589_int; // 0xce3 Eq
	if(var_590_bool == 0) goto Label_3321; // 0xce4 JumpB
	var_591_string = ""; // 0xce5 PushV
	var_591_string = "Neutral"; // 0xce6 MovS
	func_2149(var_23_int, var_591_string); // 0xce7 NEW_2
	var_592_int = 537589; // 0xce9 PushI
	SetMessage(var_592_int); // 0xcea TObjFunc
	ClearReplies(); // 0xcec TObjFunc
	var_593_int = 537590; // 0xcee PushI
	var_594_int = -1; // 0xcef PushI
	var_595_int = 39438; // 0xcf0 PushI
	AddReply(var_593_int, var_594_int, var_595_int); // 0xcf1 TObjFunc
	var_596_int = 537591; // 0xcf3 PushI
	var_597_int = -1; // 0xcf4 PushI
	var_598_int = 39439; // 0xcf5 PushI
	AddReply(var_596_int, var_597_int, var_598_int); // 0xcf6 TObjFunc
	return 0; // 0xcf8 Return
	
Label_3321:
	var_599_int = 39426; // 0xcf9 PushI
	var_600_bool = var_22_int == var_599_int; // 0xcfa Eq
	if(var_600_bool == 0) goto Label_3344; // 0xcfb JumpB
	var_601_string = ""; // 0xcfc PushV
	var_601_string = "Neutral"; // 0xcfd MovS
	func_2149(var_23_int, var_601_string); // 0xcfe NEW_2
	var_602_int = 537579; // 0xd00 PushI
	SetMessage(var_602_int); // 0xd01 TObjFunc
	ClearReplies(); // 0xd03 TObjFunc
	var_603_int = 537580; // 0xd05 PushI
	var_604_int = 39421; // 0xd06 PushI
	var_605_int = 39427; // 0xd07 PushI
	AddReply(var_603_int, var_604_int, var_605_int); // 0xd08 TObjFunc
	var_606_int = 537581; // 0xd0a PushI
	var_607_int = 39430; // 0xd0b PushI
	var_608_int = 39429; // 0xd0c PushI
	AddReply(var_606_int, var_607_int, var_608_int); // 0xd0d TObjFunc
	return 0; // 0xd0f Return
	
Label_3344:
	var_609_int = 39430; // 0xd10 PushI
	var_610_bool = var_22_int == var_609_int; // 0xd11 Eq
	if(var_610_bool == 0) goto Label_3367; // 0xd12 JumpB
	var_611_string = ""; // 0xd13 PushV
	var_611_string = "Neutral"; // 0xd14 MovS
	func_2149(var_23_int, var_611_string); // 0xd15 NEW_2
	var_612_int = 537582; // 0xd17 PushI
	SetMessage(var_612_int); // 0xd18 TObjFunc
	ClearReplies(); // 0xd1a TObjFunc
	var_613_int = 537583; // 0xd1c PushI
	var_614_int = 39432; // 0xd1d PushI
	var_615_int = 39431; // 0xd1e PushI
	AddReply(var_613_int, var_614_int, var_615_int); // 0xd1f TObjFunc
	var_616_int = 537587; // 0xd21 PushI
	var_617_int = -1; // 0xd22 PushI
	var_618_int = 39435; // 0xd23 PushI
	AddReply(var_616_int, var_617_int, var_618_int); // 0xd24 TObjFunc
	return 0; // 0xd26 Return
	
Label_3367:
	var_619_int = 39432; // 0xd27 PushI
	var_620_bool = var_22_int == var_619_int; // 0xd28 Eq
	if(var_620_bool == 0) goto Label_3390; // 0xd29 JumpB
	var_621_string = ""; // 0xd2a PushV
	var_621_string = "Neutral"; // 0xd2b MovS
	func_2149(var_23_int, var_621_string); // 0xd2c NEW_2
	var_622_int = 537584; // 0xd2e PushI
	SetMessage(var_622_int); // 0xd2f TObjFunc
	ClearReplies(); // 0xd31 TObjFunc
	var_623_int = 537585; // 0xd33 PushI
	var_624_int = -1; // 0xd34 PushI
	var_625_int = 39433; // 0xd35 PushI
	AddReply(var_623_int, var_624_int, var_625_int); // 0xd36 TObjFunc
	var_626_int = 537586; // 0xd38 PushI
	var_627_int = -1; // 0xd39 PushI
	var_628_int = 39434; // 0xd3a PushI
	AddReply(var_626_int, var_627_int, var_628_int); // 0xd3b TObjFunc
	return 0; // 0xd3d Return
	
Label_3390:
	var_629_int = 39421; // 0xd3e PushI
	var_630_bool = var_22_int == var_629_int; // 0xd3f Eq
	if(var_630_bool == 0) goto Label_3408; // 0xd40 JumpB
	var_631_string = ""; // 0xd41 PushV
	var_631_string = "Neutral"; // 0xd42 MovS
	func_2149(var_23_int, var_631_string); // 0xd43 NEW_2
	var_632_int = 537574; // 0xd45 PushI
	SetMessage(var_632_int); // 0xd46 TObjFunc
	ClearReplies(); // 0xd48 TObjFunc
	var_633_int = 537575; // 0xd4a PushI
	var_634_int = 39423; // 0xd4b PushI
	var_635_int = 39422; // 0xd4c PushI
	AddReply(var_633_int, var_634_int, var_635_int); // 0xd4d TObjFunc
	return 0; // 0xd4f Return
	
Label_3408:
	var_636_int = 39423; // 0xd50 PushI
	var_637_bool = var_22_int == var_636_int; // 0xd51 Eq
	if(var_637_bool == 0) goto Label_3426; // 0xd52 JumpB
	var_638_string = ""; // 0xd53 PushV
	var_638_string = "Neutral"; // 0xd54 MovS
	func_2149(var_23_int, var_638_string); // 0xd55 NEW_2
	var_639_int = 537576; // 0xd57 PushI
	SetMessage(var_639_int); // 0xd58 TObjFunc
	ClearReplies(); // 0xd5a TObjFunc
	var_640_int = 537577; // 0xd5c PushI
	var_641_int = -1; // 0xd5d PushI
	var_642_int = 39424; // 0xd5e PushI
	AddReply(var_640_int, var_641_int, var_642_int); // 0xd5f TObjFunc
	return 0; // 0xd61 Return
	
Label_3426:
	var_643_int = 39407; // 0xd62 PushI
	var_644_bool = var_22_int == var_643_int; // 0xd63 Eq
	if(var_644_bool == 0) goto Label_3429; // 0xd64 JumpB
	
Label_3429:
	var_645_int = 39409; // 0xd65 PushI
	var_646_bool = var_22_int == var_645_int; // 0xd66 Eq
	if(var_646_bool == 0) goto Label_3452; // 0xd67 JumpB
	var_647_string = ""; // 0xd68 PushV
	var_647_string = "Neutral"; // 0xd69 MovS
	func_2149(var_23_int, var_647_string); // 0xd6a NEW_2
	var_648_int = 537562; // 0xd6c PushI
	SetMessage(var_648_int); // 0xd6d TObjFunc
	ClearReplies(); // 0xd6f TObjFunc
	var_649_int = 537563; // 0xd71 PushI
	var_650_int = 39411; // 0xd72 PushI
	var_651_int = 39410; // 0xd73 PushI
	AddReply(var_649_int, var_650_int, var_651_int); // 0xd74 TObjFunc
	var_652_int = 537567; // 0xd76 PushI
	var_653_int = 39415; // 0xd77 PushI
	var_654_int = 39414; // 0xd78 PushI
	AddReply(var_652_int, var_653_int, var_654_int); // 0xd79 TObjFunc
	return 0; // 0xd7b Return
	
Label_3452:
	var_655_int = 39415; // 0xd7c PushI
	var_656_bool = var_22_int == var_655_int; // 0xd7d Eq
	if(var_656_bool == 0) goto Label_3470; // 0xd7e JumpB
	var_657_string = ""; // 0xd7f PushV
	var_657_string = "Neutral"; // 0xd80 MovS
	func_2149(var_23_int, var_657_string); // 0xd81 NEW_2
	var_658_int = 537568; // 0xd83 PushI
	SetMessage(var_658_int); // 0xd84 TObjFunc
	ClearReplies(); // 0xd86 TObjFunc
	var_659_int = 537569; // 0xd88 PushI
	var_660_int = -1; // 0xd89 PushI
	var_661_int = 39416; // 0xd8a PushI
	AddReply(var_659_int, var_660_int, var_661_int); // 0xd8b TObjFunc
	return 0; // 0xd8d Return
	
Label_3470:
	var_662_int = 39411; // 0xd8e PushI
	var_663_bool = var_22_int == var_662_int; // 0xd8f Eq
	if(var_663_bool == 0) goto Label_3493; // 0xd90 JumpB
	var_664_string = ""; // 0xd91 PushV
	var_664_string = "Neutral"; // 0xd92 MovS
	func_2149(var_23_int, var_664_string); // 0xd93 NEW_2
	var_665_int = 537564; // 0xd95 PushI
	SetMessage(var_665_int); // 0xd96 TObjFunc
	ClearReplies(); // 0xd98 TObjFunc
	var_666_int = 537565; // 0xd9a PushI
	var_667_int = -1; // 0xd9b PushI
	var_668_int = 39412; // 0xd9c PushI
	AddReply(var_666_int, var_667_int, var_668_int); // 0xd9d TObjFunc
	var_669_int = 537566; // 0xd9f PushI
	var_670_int = -1; // 0xda0 PushI
	var_671_int = 39413; // 0xda1 PushI
	AddReply(var_669_int, var_670_int, var_671_int); // 0xda2 TObjFunc
	return 0; // 0xda4 Return
	
Label_3493:
	var_672_int = 39397; // 0xda5 PushI
	var_673_bool = var_22_int == var_672_int; // 0xda6 Eq
	if(var_673_bool == 0) goto Label_3516; // 0xda7 JumpB
	var_674_string = ""; // 0xda8 PushV
	var_674_string = "Neutral"; // 0xda9 MovS
	func_2149(var_23_int, var_674_string); // 0xdaa NEW_2
	var_675_int = 537550; // 0xdac PushI
	SetMessage(var_675_int); // 0xdad TObjFunc
	ClearReplies(); // 0xdaf TObjFunc
	var_676_int = 537551; // 0xdb1 PushI
	var_677_int = 39399; // 0xdb2 PushI
	var_678_int = 39398; // 0xdb3 PushI
	AddReply(var_676_int, var_677_int, var_678_int); // 0xdb4 TObjFunc
	var_679_int = 537558; // 0xdb6 PushI
	var_680_int = -1; // 0xdb7 PushI
	var_681_int = 39405; // 0xdb8 PushI
	AddReply(var_679_int, var_680_int, var_681_int); // 0xdb9 TObjFunc
	return 0; // 0xdbb Return
	
Label_3516:
	var_682_int = 39399; // 0xdbc PushI
	var_683_bool = var_22_int == var_682_int; // 0xdbd Eq
	if(var_683_bool == 0) goto Label_3539; // 0xdbe JumpB
	var_684_string = ""; // 0xdbf PushV
	var_684_string = "Neutral"; // 0xdc0 MovS
	func_2149(var_23_int, var_684_string); // 0xdc1 NEW_2
	var_685_int = 537552; // 0xdc3 PushI
	SetMessage(var_685_int); // 0xdc4 TObjFunc
	ClearReplies(); // 0xdc6 TObjFunc
	var_686_int = 537553; // 0xdc8 PushI
	var_687_int = 39401; // 0xdc9 PushI
	var_688_int = 39400; // 0xdca PushI
	AddReply(var_686_int, var_687_int, var_688_int); // 0xdcb TObjFunc
	var_689_int = 537557; // 0xdcd PushI
	var_690_int = -1; // 0xdce PushI
	var_691_int = 39404; // 0xdcf PushI
	AddReply(var_689_int, var_690_int, var_691_int); // 0xdd0 TObjFunc
	return 0; // 0xdd2 Return
	
Label_3539:
	var_692_int = 39401; // 0xdd3 PushI
	var_693_bool = var_22_int == var_692_int; // 0xdd4 Eq
	if(var_693_bool == 0) goto Label_3562; // 0xdd5 JumpB
	var_694_string = ""; // 0xdd6 PushV
	var_694_string = "Neutral"; // 0xdd7 MovS
	func_2149(var_23_int, var_694_string); // 0xdd8 NEW_2
	var_695_int = 537554; // 0xdda PushI
	SetMessage(var_695_int); // 0xddb TObjFunc
	ClearReplies(); // 0xddd TObjFunc
	var_696_int = 537555; // 0xddf PushI
	var_697_int = -1; // 0xde0 PushI
	var_698_int = 39402; // 0xde1 PushI
	AddReply(var_696_int, var_697_int, var_698_int); // 0xde2 TObjFunc
	var_699_int = 537556; // 0xde4 PushI
	var_700_int = -1; // 0xde5 PushI
	var_701_int = 39403; // 0xde6 PushI
	AddReply(var_699_int, var_700_int, var_701_int); // 0xde7 TObjFunc
	return 0; // 0xde9 Return
	
Label_3562:
	var_702_int = 39382; // 0xdea PushI
	var_703_bool = var_22_int == var_702_int; // 0xdeb Eq
	if(var_703_bool == 0) goto Label_3565; // 0xdec JumpB
	
Label_3565:
	var_704_int = 39384; // 0xded PushI
	var_705_bool = var_22_int == var_704_int; // 0xdee Eq
	if(var_705_bool == 0) goto Label_3588; // 0xdef JumpB
	var_706_string = ""; // 0xdf0 PushV
	var_706_string = "Neutral"; // 0xdf1 MovS
	func_2149(var_23_int, var_706_string); // 0xdf2 NEW_2
	var_707_int = 537537; // 0xdf4 PushI
	SetMessage(var_707_int); // 0xdf5 TObjFunc
	ClearReplies(); // 0xdf7 TObjFunc
	var_708_int = 537538; // 0xdf9 PushI
	var_709_int = 39386; // 0xdfa PushI
	var_710_int = 39385; // 0xdfb PushI
	AddReply(var_708_int, var_709_int, var_710_int); // 0xdfc TObjFunc
	var_711_int = 537548; // 0xdfe PushI
	var_712_int = -1; // 0xdff PushI
	var_713_int = 39395; // 0xe00 PushI
	AddReply(var_711_int, var_712_int, var_713_int); // 0xe01 TObjFunc
	return 0; // 0xe03 Return
	
Label_3588:
	var_714_int = 39386; // 0xe04 PushI
	var_715_bool = var_22_int == var_714_int; // 0xe05 Eq
	if(var_715_bool == 0) goto Label_3616; // 0xe06 JumpB
	var_716_string = ""; // 0xe07 PushV
	var_716_string = "Neutral"; // 0xe08 MovS
	func_2149(var_23_int, var_716_string); // 0xe09 NEW_2
	var_717_int = 537539; // 0xe0b PushI
	SetMessage(var_717_int); // 0xe0c TObjFunc
	ClearReplies(); // 0xe0e TObjFunc
	var_718_int = 537540; // 0xe10 PushI
	var_719_int = 39388; // 0xe11 PushI
	var_720_int = 39387; // 0xe12 PushI
	AddReply(var_718_int, var_719_int, var_720_int); // 0xe13 TObjFunc
	var_721_int = 537543; // 0xe15 PushI
	var_722_int = -1; // 0xe16 PushI
	var_723_int = 39390; // 0xe17 PushI
	AddReply(var_721_int, var_722_int, var_723_int); // 0xe18 TObjFunc
	var_724_int = 537544; // 0xe1a PushI
	var_725_int = 39392; // 0xe1b PushI
	var_726_int = 39391; // 0xe1c PushI
	AddReply(var_724_int, var_725_int, var_726_int); // 0xe1d TObjFunc
	return 0; // 0xe1f Return
	
Label_3616:
	var_727_int = 39392; // 0xe20 PushI
	var_728_bool = var_22_int == var_727_int; // 0xe21 Eq
	if(var_728_bool == 0) goto Label_3639; // 0xe22 JumpB
	var_729_string = ""; // 0xe23 PushV
	var_729_string = "Neutral"; // 0xe24 MovS
	func_2149(var_23_int, var_729_string); // 0xe25 NEW_2
	var_730_int = 537545; // 0xe27 PushI
	SetMessage(var_730_int); // 0xe28 TObjFunc
	ClearReplies(); // 0xe2a TObjFunc
	var_731_int = 537546; // 0xe2c PushI
	var_732_int = -1; // 0xe2d PushI
	var_733_int = 39393; // 0xe2e PushI
	AddReply(var_731_int, var_732_int, var_733_int); // 0xe2f TObjFunc
	var_734_int = 537547; // 0xe31 PushI
	var_735_int = -1; // 0xe32 PushI
	var_736_int = 39394; // 0xe33 PushI
	AddReply(var_734_int, var_735_int, var_736_int); // 0xe34 TObjFunc
	return 0; // 0xe36 Return
	
Label_3639:
	var_737_int = 39388; // 0xe37 PushI
	var_738_bool = var_22_int == var_737_int; // 0xe38 Eq
	if(var_738_bool == 0) goto Label_3657; // 0xe39 JumpB
	var_739_string = ""; // 0xe3a PushV
	var_739_string = "Neutral"; // 0xe3b MovS
	func_2149(var_23_int, var_739_string); // 0xe3c NEW_2
	var_740_int = 537541; // 0xe3e PushI
	SetMessage(var_740_int); // 0xe3f TObjFunc
	ClearReplies(); // 0xe41 TObjFunc
	var_741_int = 537542; // 0xe43 PushI
	var_742_int = -1; // 0xe44 PushI
	var_743_int = 39389; // 0xe45 PushI
	AddReply(var_741_int, var_742_int, var_743_int); // 0xe46 TObjFunc
	return 0; // 0xe48 Return
	
Label_3657:
	var_744_int = 39372; // 0xe49 PushI
	var_745_bool = var_22_int == var_744_int; // 0xe4a Eq
	if(var_745_bool == 0) goto Label_3660; // 0xe4b JumpB
	
Label_3660:
	var_746_int = 39374; // 0xe4c PushI
	var_747_bool = var_22_int == var_746_int; // 0xe4d Eq
	if(var_747_bool == 0) goto Label_3683; // 0xe4e JumpB
	var_748_string = ""; // 0xe4f PushV
	var_748_string = "Neutral"; // 0xe50 MovS
	func_2149(var_23_int, var_748_string); // 0xe51 NEW_2
	var_749_int = 537527; // 0xe53 PushI
	SetMessage(var_749_int); // 0xe54 TObjFunc
	ClearReplies(); // 0xe56 TObjFunc
	var_750_int = 537528; // 0xe58 PushI
	var_751_int = 39376; // 0xe59 PushI
	var_752_int = 39375; // 0xe5a PushI
	AddReply(var_750_int, var_751_int, var_752_int); // 0xe5b TObjFunc
	var_753_int = 537532; // 0xe5d PushI
	var_754_int = -1; // 0xe5e PushI
	var_755_int = 39379; // 0xe5f PushI
	AddReply(var_753_int, var_754_int, var_755_int); // 0xe60 TObjFunc
	return 0; // 0xe62 Return
	
Label_3683:
	var_756_int = 39376; // 0xe63 PushI
	var_757_bool = var_22_int == var_756_int; // 0xe64 Eq
	if(var_757_bool == 0) goto Label_3706; // 0xe65 JumpB
	var_758_string = ""; // 0xe66 PushV
	var_758_string = "Neutral"; // 0xe67 MovS
	func_2149(var_23_int, var_758_string); // 0xe68 NEW_2
	var_759_int = 537529; // 0xe6a PushI
	SetMessage(var_759_int); // 0xe6b TObjFunc
	ClearReplies(); // 0xe6d TObjFunc
	var_760_int = 537530; // 0xe6f PushI
	var_761_int = -1; // 0xe70 PushI
	var_762_int = 39377; // 0xe71 PushI
	AddReply(var_760_int, var_761_int, var_762_int); // 0xe72 TObjFunc
	var_763_int = 537531; // 0xe74 PushI
	var_764_int = -1; // 0xe75 PushI
	var_765_int = 39378; // 0xe76 PushI
	AddReply(var_763_int, var_764_int, var_765_int); // 0xe77 TObjFunc
	return 0; // 0xe79 Return
	
Label_3706:
	var_766_int = 39356; // 0xe7a PushI
	var_767_bool = var_22_int == var_766_int; // 0xe7b Eq
	if(var_767_bool == 0) goto Label_3709; // 0xe7c JumpB
	
Label_3709:
	var_768_int = 39368; // 0xe7d PushI
	var_769_bool = var_22_int == var_768_int; // 0xe7e Eq
	if(var_769_bool == 0) goto Label_3732; // 0xe7f JumpB
	var_770_string = ""; // 0xe80 PushV
	var_770_string = "Neutral"; // 0xe81 MovS
	func_2149(var_23_int, var_770_string); // 0xe82 NEW_2
	var_771_int = 537521; // 0xe84 PushI
	SetMessage(var_771_int); // 0xe85 TObjFunc
	ClearReplies(); // 0xe87 TObjFunc
	var_772_int = 537522; // 0xe89 PushI
	var_773_int = -1; // 0xe8a PushI
	var_774_int = 39369; // 0xe8b PushI
	AddReply(var_772_int, var_773_int, var_774_int); // 0xe8c TObjFunc
	var_775_int = 537523; // 0xe8e PushI
	var_776_int = -1; // 0xe8f PushI
	var_777_int = 39370; // 0xe90 PushI
	AddReply(var_775_int, var_776_int, var_777_int); // 0xe91 TObjFunc
	return 0; // 0xe93 Return
	
Label_3732:
	var_778_int = 39358; // 0xe94 PushI
	var_779_bool = var_22_int == var_778_int; // 0xe95 Eq
	if(var_779_bool == 0) goto Label_3755; // 0xe96 JumpB
	var_780_string = ""; // 0xe97 PushV
	var_780_string = "Neutral"; // 0xe98 MovS
	func_2149(var_23_int, var_780_string); // 0xe99 NEW_2
	var_781_int = 537511; // 0xe9b PushI
	SetMessage(var_781_int); // 0xe9c TObjFunc
	ClearReplies(); // 0xe9e TObjFunc
	var_782_int = 537512; // 0xea0 PushI
	var_783_int = 39360; // 0xea1 PushI
	var_784_int = 39359; // 0xea2 PushI
	AddReply(var_782_int, var_783_int, var_784_int); // 0xea3 TObjFunc
	var_785_int = 537519; // 0xea5 PushI
	var_786_int = -1; // 0xea6 PushI
	var_787_int = 39366; // 0xea7 PushI
	AddReply(var_785_int, var_786_int, var_787_int); // 0xea8 TObjFunc
	return 0; // 0xeaa Return
	
Label_3755:
	var_788_int = 39360; // 0xeab PushI
	var_789_bool = var_22_int == var_788_int; // 0xeac Eq
	if(var_789_bool == 0) goto Label_3778; // 0xead JumpB
	var_790_string = ""; // 0xeae PushV
	var_790_string = "Neutral"; // 0xeaf MovS
	func_2149(var_23_int, var_790_string); // 0xeb0 NEW_2
	var_791_int = 537513; // 0xeb2 PushI
	SetMessage(var_791_int); // 0xeb3 TObjFunc
	ClearReplies(); // 0xeb5 TObjFunc
	var_792_int = 537514; // 0xeb7 PushI
	var_793_int = 39362; // 0xeb8 PushI
	var_794_int = 39361; // 0xeb9 PushI
	AddReply(var_792_int, var_793_int, var_794_int); // 0xeba TObjFunc
	var_795_int = 537518; // 0xebc PushI
	var_796_int = -1; // 0xebd PushI
	var_797_int = 39365; // 0xebe PushI
	AddReply(var_795_int, var_796_int, var_797_int); // 0xebf TObjFunc
	return 0; // 0xec1 Return
	
Label_3778:
	var_798_int = 39362; // 0xec2 PushI
	var_799_bool = var_22_int == var_798_int; // 0xec3 Eq
	if(var_799_bool == 0) goto Label_3801; // 0xec4 JumpB
	var_800_string = ""; // 0xec5 PushV
	var_800_string = "Neutral"; // 0xec6 MovS
	func_2149(var_23_int, var_800_string); // 0xec7 NEW_2
	var_801_int = 537515; // 0xec9 PushI
	SetMessage(var_801_int); // 0xeca TObjFunc
	ClearReplies(); // 0xecc TObjFunc
	var_802_int = 537516; // 0xece PushI
	var_803_int = -1; // 0xecf PushI
	var_804_int = 39363; // 0xed0 PushI
	AddReply(var_802_int, var_803_int, var_804_int); // 0xed1 TObjFunc
	var_805_int = 537517; // 0xed3 PushI
	var_806_int = -1; // 0xed4 PushI
	var_807_int = 39364; // 0xed5 PushI
	AddReply(var_805_int, var_806_int, var_807_int); // 0xed6 TObjFunc
	return 0; // 0xed8 Return
	
Label_3801:
	var_808_int = 45739; // 0xed9 PushI
	var_809_bool = var_22_int == var_808_int; // 0xeda Eq
	if(var_809_bool == 0) goto Label_3804; // 0xedb JumpB
	
Label_3804:
	var_810_int = 45734; // 0xedc PushI
	var_811_bool = var_22_int == var_810_int; // 0xedd Eq
	if(var_811_bool == 0) goto Label_3807; // 0xede JumpB
	
Label_3807:
	var_812_int = 45719; // 0xedf PushI
	var_813_bool = var_22_int == var_812_int; // 0xee0 Eq
	if(var_813_bool == 0) goto Label_3810; // 0xee1 JumpB
	
Label_3810:
	var_814_int = 45723; // 0xee2 PushI
	var_815_bool = var_22_int == var_814_int; // 0xee3 Eq
	if(var_815_bool == 0) goto Label_3838; // 0xee4 JumpB
	var_816_string = ""; // 0xee5 PushV
	var_816_string = "Neutral"; // 0xee6 MovS
	func_2149(var_23_int, var_816_string); // 0xee7 NEW_2
	var_817_int = 543267; // 0xee9 PushI
	SetMessage(var_817_int); // 0xeea TObjFunc
	ClearReplies(); // 0xeec TObjFunc
	var_818_int = 543268; // 0xeee PushI
	var_819_int = 45727; // 0xeef PushI
	var_820_int = 45724; // 0xef0 PushI
	AddReply(var_818_int, var_819_int, var_820_int); // 0xef1 TObjFunc
	var_821_int = 543269; // 0xef3 PushI
	var_822_int = -1; // 0xef4 PushI
	var_823_int = 45725; // 0xef5 PushI
	AddReply(var_821_int, var_822_int, var_823_int); // 0xef6 TObjFunc
	var_824_int = 543270; // 0xef8 PushI
	var_825_int = -1; // 0xef9 PushI
	var_826_int = 45726; // 0xefa PushI
	AddReply(var_824_int, var_825_int, var_826_int); // 0xefb TObjFunc
	return 0; // 0xefd Return
	
Label_3838:
	var_827_int = 45727; // 0xefe PushI
	var_828_bool = var_22_int == var_827_int; // 0xeff Eq
	if(var_828_bool == 0) goto Label_3866; // 0xf00 JumpB
	var_829_string = ""; // 0xf01 PushV
	var_829_string = "Neutral"; // 0xf02 MovS
	func_2149(var_23_int, var_829_string); // 0xf03 NEW_2
	var_830_int = 543271; // 0xf05 PushI
	SetMessage(var_830_int); // 0xf06 TObjFunc
	ClearReplies(); // 0xf08 TObjFunc
	var_831_int = 543272; // 0xf0a PushI
	var_832_int = -1; // 0xf0b PushI
	var_833_int = 45728; // 0xf0c PushI
	AddReply(var_831_int, var_832_int, var_833_int); // 0xf0d TObjFunc
	var_834_int = 543273; // 0xf0f PushI
	var_835_int = -1; // 0xf10 PushI
	var_836_int = 45729; // 0xf11 PushI
	AddReply(var_834_int, var_835_int, var_836_int); // 0xf12 TObjFunc
	var_837_int = 543274; // 0xf14 PushI
	var_838_int = -1; // 0xf15 PushI
	var_839_int = 45730; // 0xf16 PushI
	AddReply(var_837_int, var_838_int, var_839_int); // 0xf17 TObjFunc
	return 0; // 0xf19 Return
	
Label_3866:
	var_840_int = 45709; // 0xf1a PushI
	var_841_bool = var_22_int == var_840_int; // 0xf1b Eq
	if(var_841_bool == 0) goto Label_3869; // 0xf1c JumpB
	
Label_3869:
	var_842_int = 45716; // 0xf1d PushI
	var_843_bool = var_22_int == var_842_int; // 0xf1e Eq
	if(var_843_bool == 0) goto Label_3887; // 0xf1f JumpB
	var_844_string = ""; // 0xf20 PushV
	var_844_string = "Neutral"; // 0xf21 MovS
	func_2149(var_23_int, var_844_string); // 0xf22 NEW_2
	var_845_int = 543260; // 0xf24 PushI
	SetMessage(var_845_int); // 0xf25 TObjFunc
	ClearReplies(); // 0xf27 TObjFunc
	var_846_int = 543261; // 0xf29 PushI
	var_847_int = -1; // 0xf2a PushI
	var_848_int = 45717; // 0xf2b PushI
	AddReply(var_846_int, var_847_int, var_848_int); // 0xf2c TObjFunc
	return 0; // 0xf2e Return
	
Label_3887:
	var_849_int = 45714; // 0xf2f PushI
	var_850_bool = var_22_int == var_849_int; // 0xf30 Eq
	if(var_850_bool == 0) goto Label_3905; // 0xf31 JumpB
	var_851_string = ""; // 0xf32 PushV
	var_851_string = "Neutral"; // 0xf33 MovS
	func_2149(var_23_int, var_851_string); // 0xf34 NEW_2
	var_852_int = 543258; // 0xf36 PushI
	SetMessage(var_852_int); // 0xf37 TObjFunc
	ClearReplies(); // 0xf39 TObjFunc
	var_853_int = 543259; // 0xf3b PushI
	var_854_int = -1; // 0xf3c PushI
	var_855_int = 45715; // 0xf3d PushI
	AddReply(var_853_int, var_854_int, var_855_int); // 0xf3e TObjFunc
	return 0; // 0xf40 Return
	
Label_3905:
	var_3_bool = 1; // 0xf41 TMovB
	var_856_bool = 0; // 0xf42 PushV
	func_5079(var_856_bool); // 0xf43 NEW_2
	if(var_856_bool == 0) goto Label_3913; // 0xf45 JumpB
	lshStopAnimation(); // 0xf46 Func
	goto Label_3915; // 0xf48 Jump
	
Label_3915:
	return 0; // 0xf4b Return
	
Label_3913:
	StopAnimation(); // 0xf49 Func
	
Label_3917:
	return 0; // 0xf4d Return
}


event_16(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_string)
{
	return 0; // 0x10f7 Return
}


event_41(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object)
{
	return 0; // 0x10f9 Return
}


event_22(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_int, var_24_float, var_25_float)
{
	return 0; // 0x10fb Return
}


event_43(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_int, var_24_float, var_25_float, var_26_cvector, var_27_cvector)
{
	return 0; // 0x10fd Return
}


main(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool)
{
	var_22_bool = 1; // 0x28 PushB
	SensePlayerOnly(var_22_bool); // 0x29 Func
	func_5081(); // 0x2c NEW_2
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
	var_397_bool = 0; // 0x4 PushV
	func_5079(var_397_bool); // 0x5 NEW_2
	if(var_397_bool == 0) goto Label_15; // 0x7 JumpB
	var_398_string = ""; // 0x8 PushV
	var_398_string = "Neutral"; // 0x9 MovS
	func_4180(var_398_string); // 0xa NEW_2
	lshWaitForAnimEnd(); // 0xc Func
	goto Label_21; // 0xe Jump
	
Label_21:
	var_399_bool = var_0_bool; // 0x15 PushT
	if(var_399_bool == 0) goto Label_24; // 0x16 JumpB
	return 0; // 0x17 Return
	
Label_24:
	goto Label_4; // 0x18 Jump
	
Label_15:
	WaitForAnimEnd(); // 0xf Func
	var_400_string = "all"; // 0x11 PushS
	var_401_string = "idle"; // 0x12 PushS
	PlayAnimation(var_400_string, var_401_string); // 0x13 Func
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
	func_4261(var_52_cvector, var_53_cvector); // 0x612 NEW_2
	var_59_float = 0.75; // 0x614 PushF
	var_60_float = var_46_cvector * var_59_float; // 0x615 Mult
	var_51_cvector = var_52_cvector + var_60_float; // 0x616 Add2
	func_4261(var_50_cvector, var_51_cvector); // 0x617 NEW_2
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


func_4104()
{
	var_356_bool = 0; var_357_bool = 0; // 0x1008 PushV
	CameraSwitchToNormal(); // 0x1009 Func
	var_358_bool = 0; // 0x100b PushV
	func_5079(var_358_bool); // 0x100c NEW_2
	if(var_358_bool == 0) goto Label_4112; // 0x100e JumpB
	goto Label_4120; // 0x100f Jump
	
Label_4120:
	return 2; // 0x1018 Return
	
Label_4112:
	var_359_string = "head"; // 0x1010 PushS
	HasAnimationTrack(var_357_bool, var_359_string); // 0x1011 Func
	var_360_bool = var_357_bool; // 0x1013 Push
	if(var_360_bool == 0) goto Label_4120; // 0x1014 JumpB
	var_361_string = "head"; // 0x1015 PushS
	UnlookAsync(var_361_string); // 0x1016 Func
}


func_5129(var_67_bool)
{
	var_67_bool = 1; // 0x1409 MovB
	return 0; // 0x140a Return
}


func_5131(var_27_bool, var_28_object, var_29_object)
{
	var_31_bool = 0; var_32_object = Obj(); var_33_object = Obj(); var_34_float = 0; // 0x140c PushV
	var_32_object = var_28_object; // 0x140d Mov
	var_33_object = var_29_object; // 0x140e Mov
	var_34_float = 500.0; // 0x140f MovF
	func_4555(var_31_bool, var_32_object, var_33_object, var_34_float); // 0x1410 NEW_2
	if(var_31_bool == 0) goto Label_5145; // 0x1412 JumpB
	var_74_string = "ToDie"; // 0x1413 PushS
	var_75_bool = 1; // 0x1414 PushB
	SetProperty(var_74_string, var_75_bool); // 0x1415 Func
	var_27_bool = 1; // 0x1417 MovB
	return 0; // 0x1418 Return
	
Label_5145:
	var_27_bool = 0; // 0x1419 MovB
	return 0; // 0x141a Return
}


func_4621(var_25_int)
{
	var_25_int = 2; // 0x120e MovI
	return 0; // 0x120f Return
}


func_4624(var_33_object)
{
	var_34_object = Obj(); // 0x1211 PushV
	var_34_object = var_33_object; // 0x1212 Mov
	func_5089(var_33_object, var_34_object); // 0x1213 NEW_2
	return 0; // 0x1215 Return
}


func_4630()
{
	return 0; // 0x1216 Return
}


func_4631(var_25_int)
{
	var_25_int = 0; // 0x1218 MovI
	return 0; // 0x1219 Return
}


func_4121(var_363_bool, var_364_object)
{
	var_365_bool = 0; var_366_object = Obj(); var_367_float = 0; // 0x101a PushV
	var_366_object = var_364_object; // 0x101b Mov
	var_367_float = 70; // 0x101c MovI
	func_4129(var_366_object, var_367_float); // 0x101d NEW_2
	var_363_bool = var_365_bool; // 0x101e Mov
	return 0; // 0x1020 Return
}


func_4634()
{
	return 0; // 0x121b Return
}


func_4636(var_209_int)
{
	var_209_int = 0; // 0x121d MovI
	return 0; // 0x121e Return
}


func_4639()
{
	return 0; // 0x1220 Return
}


func_4129(var_365_bool, var_367_float)
{
	var_368_float = 0; var_369_cvector = CVector(0,0,0); var_370_cvector = CVector(0,0,0); var_371_cvector = CVector(0,0,0); var_372_cvector = CVector(0,0,0); var_373_cvector = CVector(0,0,0); var_374_cvector = CVector(0,0,0); var_375_bool = 0; var_376_float = 0; var_377_cvector = CVector(0,0,0); var_378_cvector = CVector(0,0,0); var_379_cvector = CVector(0,0,0); var_380_cvector = CVector(0,0,0); var_381_cvector = CVector(0,0,0); var_382_cvector = CVector(0,0,0); var_383_bool = 0; // 0x1021 PushV
	GetPosition(var_377_cvector); // 0x1022 ObjFunc
	GetEyesHeight(var_376_float); // 0x1024 ObjFunc
	var_384_float = GetByIndex(var_377_cvector, 1); // 0x1026 PushE
	var_384_float = var_384_float + var_376_float; // 0x1027 Add2
	SetByIndex(var_377_cvector, 1) = var_384_float; // 0x1028 PopE
	GetPosition(var_378_cvector); // 0x1029 Func
	GetEyesHeight(var_376_float); // 0x102b Func
	var_385_float = GetByIndex(var_378_cvector, 1); // 0x102d PushE
	var_385_float = var_385_float + var_376_float; // 0x102e Add2
	SetByIndex(var_378_cvector, 1) = var_385_float; // 0x102f PopE
	var_379_cvector = var_377_cvector - var_378_cvector; // 0x1030 Sub2
	var_386_float = GetByIndex(var_379_cvector, 1); // 0x1031 PushE
	var_386_float = 0; // 0x1032 MovI
	SetByIndex(var_379_cvector, 1) = var_386_float; // 0x1033 PopE
	var_387_int = var_379_cvector | var_379_cvector; // 0x1034 Or
	var_388_float = sqrt(var_387_int); // 0x1035 Sqrt
	var_379_cvector = var_379_cvector / var_379_cvector; // 0x1036 Div2
	var_380_cvector = -var_379_cvector; // 0x1037 Neg2
	var_389_float = var_379_cvector * var_367_float; // 0x1038 Mult
	var_390_cvector = CVector(0.0, 10.0, 0.0); // 0x1039 PushVec
	var_381_cvector = var_389_float - var_390_cvector; // 0x103a Sub2
	var_382_cvector = var_378_cvector + var_381_cvector; // 0x103b Add2
	IsOverrideActive(var_383_bool); // 0x103c Func
	var_391_bool = var_383_bool; // 0x103e Push
	if(var_391_bool == 0) goto Label_4162; // 0x103f JumpB
	var_365_bool = 0; // 0x1040 MovB
	return 16; // 0x1041 Return
	
Label_4162:
	StopWorld(); // 0x1042 Func
	CameraTransit(var_382_cvector, var_380_cvector); // 0x1044 Func
	var_392_float = GetByIndex(var_381_cvector, 0); // 0x1046 PushE
	var_393_float = GetByIndex(var_381_cvector, 2); // 0x1047 PushE
	Rotate(var_392_float, var_393_float); // 0x1048 Func
	CameraWaitForPlayFinish(); // 0x104a Func
	ResumeWorld(); // 0x104c Func
	var_365_bool = 1; // 0x104e MovB
	return 16; // 0x104f Return
}


func_4641(var_28_bool, var_29_object)
{
	var_30_bool = 0; var_31_bool = 0; // 0x1221 PushV
	CanSee(var_31_bool, var_29_object); // 0x1222 Func
	var_28_bool = var_31_bool; // 0x1224 Mov
	return 2; // 0x1225 Return
}


func_4646(var_40_object)
{
	var_41_object = Obj(); // 0x1227 PushV
	var_41_object = var_40_object; // 0x1228 Mov
	TaskCall(6); // 0x1229 TaskCall
	func_1380(var_42_object, var_43_cvector, var_44_bool, var_41_object); // 0x122a NEW_2
	TaskReturn(); // 0x122b TaskReturn
	return 0; // 0x122d Return
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
	func_3918(var_191_cvector); // 0x648 NEW_2
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
	func_3918(var_201_cvector); // 0x663 NEW_2
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


func_4654(var_37_bool, var_38_object)
{
	var_39_bool = 0; var_40_bool = 0; // 0x122e PushV
	CanSee(var_40_bool, var_38_object); // 0x122f Func
	var_37_bool = 1; // 0x1231 MovB
	var_41_bool = var_40_bool; // 0x1232 Push
	if(var_41_bool == 0) goto Label_4668; // 0x1233 JumpB
	var_42_float = 0; var_43_object = Obj(); // 0x1234 PushV
	var_43_object = var_38_object; // 0x1235 Mov
	func_3930(var_43_object); // 0x1236 NEW_2
	var_50_int = 4000000; // 0x1238 PushI
	var_51_bool = var_42_float <= var_50_int; // 0x1239 LE
	if(var_51_bool == 0) goto Label_4668; // 0x123a JumpB
	var_37_bool = 0; // 0x123b MovB
	
Label_4668:
	return 2; // 0x123c Return
}


func_55()
{
	var_88_bool = 0; // 0x37 PushV
	func_4031(var_88_bool); // 0x38 NEW_2
	var_91_bool = var_88_bool == 0; // 0x3a Not
	if(var_91_bool == 0) goto Label_63; // 0x3b JumpB
	func_4630(); // 0x3d NEW_2
	
Label_63:
	return 0; // 0x3f Return
}


func_573()
{
	var_119_int = 0; var_120_int = 0; var_121_int = 0; var_122_int = 0; var_123_bool = 0; var_124_float = 0; var_125_bool = 0; var_126_int = 0; var_127_int = 0; var_128_int = 0; var_129_int = 0; var_130_bool = 0; var_131_float = 0; var_132_bool = 0; // 0x23d PushV
	WaitForAnimEnd(); // 0x23e Func
	var_133_bool = 0; // 0x240 PushV
	func_4031(var_133_bool); // 0x241 NEW_2
	var_134_bool = var_133_bool == 0; // 0x243 Not
	if(var_134_bool == 0) goto Label_582; // 0x244 JumpB
	return 14; // 0x245 Return
	
Label_582:
	var_135_int = 0; // 0x246 PushV
	func_4485(var_135_int); // 0x247 NEW_2
	var_126_int = var_135_int; // 0x248 Mov
	var_127_int = 0; // 0x24a MovI
	
Label_587:
	var_148_bool = 0; // 0x24b PushV
	var_148_bool = 0; // 0x24c MovB
	var_149_int = 5; // 0x24d PushI
	var_150_bool = var_127_int < var_149_int; // 0x24e LT
	if(var_150_bool == 0) goto Label_597; // 0x24f JumpB
	var_151_bool = 0; // 0x250 PushV
	func_4031(var_151_bool); // 0x251 NEW_2
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
	func_4478(var_157_string, var_158_int); // 0x263 NEW_2
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


func_4669(var_139_object)
{
	var_140_object = Obj(); // 0x123e PushV
	var_140_object = var_139_object; // 0x123f Mov
	TaskCall(7); // 0x1240 TaskCall
	func_1574(var_141_object, var_142_cvector, var_143_bool, var_140_object); // 0x1241 NEW_2
	TaskReturn(); // 0x1242 TaskReturn
	return 0; // 0x1244 Return
}


func_4677(var_54_bool, var_55_object)
{
	var_56_bool = 0; var_57_object = Obj(); // 0x1246 PushV
	var_57_object = var_55_object; // 0x1247 Mov
	func_4654(var_56_bool, var_57_object); // 0x1248 NEW_2
	var_54_bool = var_56_bool; // 0x1249 Mov
	return 0; // 0x124b Return
}


func_4684(var_207_object)
{
	var_208_object = Obj(); // 0x124d PushV
	var_208_object = var_207_object; // 0x124e Mov
	func_4669(var_208_object); // 0x124f NEW_2
	return 0; // 0x1251 Return
}


func_4176()
{
	CameraSwitchToNormal(); // 0x1051 Func
	return 0; // 0x1053 Return
}


func_4690(var_30_bool)
{
	var_30_bool = 0; // 0x1253 MovB
	return 0; // 0x1254 Return
}


func_4180(var_292_string)
{
	var_293_bool = 0; var_294_float = 0; var_295_float = 0; var_296_bool = 0; var_297_float = 0; var_298_float = 0; // 0x1054 PushV
	lshHasAnimation(var_296_bool, var_292_string); // 0x1055 Func
	var_299_bool = var_296_bool; // 0x1057 Push
	if(var_299_bool == 0) goto Label_4191; // 0x1058 JumpB
	lshGetAnimTimes(var_292_string, var_297_float, var_298_float); // 0x1059 Func
	var_300_bool = 0; // 0x105b PushB
	lshPlayAnimation(var_297_float, var_298_float, var_300_bool); // 0x105c Func
	goto Label_4195; // 0x105e Jump
	
Label_4195:
	return 6; // 0x1063 Return
	
Label_4191:
	var_301_string = "Can't find lsh animation : "; // 0x105f PushS
	var_302_int = var_301_string + var_292_string; // 0x1060 Add
	Trace(var_302_int); // 0x1061 Func
}


func_4693()
{
	return 0; // 0x1256 Return
}


func_4695()
{
	var_30_int = 1000; // 0x1258 PushI
	SetReturnValue(var_30_int); // 0x1259 ObjFunc
	return 0; // 0x125b Return
}


func_4700(var_216_bool)
{
	var_218_int = 0; var_219_string = ""; // 0x125d PushV
	var_219_string = "branch"; // 0x125e MovS
	func_4320(var_218_int, var_219_string); // 0x125f NEW_2
	var_220_int = 0; // 0x1261 PushI
	var_221_bool = var_218_int == var_220_int; // 0x1262 Eq
	if(var_221_bool == 0) goto Label_4710; // 0x1263 JumpB
	var_216_bool = 1; // 0x1264 MovB
	return 0; // 0x1265 Return
	
Label_4710:
	var_216_bool = 0; // 0x1266 MovB
	return 0; // 0x1267 Return
}


func_1124(var_2_bool)
{
	Stop(); // 0x464 Func
	var_23_int = 120; // 0x466 PushI
	KillTimer(var_23_int); // 0x467 Func
	var_2_bool = 1; // 0x469 TMovB
	return 0; // 0x46a Return
}


func_2149(var_2_bool, var_53_string)
{
	var_54_bool = 0; // 0x866 PushV
	func_5079(var_54_bool); // 0x867 NEW_2
	var_55_bool = var_54_bool == 0; // 0x869 Not
	if(var_55_bool == 0) goto Label_2156; // 0x86a JumpB
	return 0; // 0x86b Return
	
Label_2156:
	var_56_bool = var_53_string == var_2_bool; // 0x86c Eq
	if(var_56_bool == 0) goto Label_2159; // 0x86d JumpB
	return 0; // 0x86e Return
	
Label_2159:
	var_57_string = ""; var_58_bool = 0; // 0x86f PushV
	var_57_string = var_53_string; // 0x870 Mov
	var_59_string = ""; // 0x871 PushS
	var_60_bool = var_53_string == var_59_string; // 0x872 Eq
	if(var_60_bool == 0) goto Label_2166; // 0x873 JumpB
	var_58_bool = 0; // 0x874 MovB
	goto Label_2167; // 0x875 Jump
	
Label_2167:
	func_4196(var_57_string, var_58_bool); // 0x877 NEW_2
	var_2_bool = var_53_string; // 0x879 TMov
	return 0; // 0x87a Return
	
Label_2166:
	var_58_bool = 1; // 0x876 MovB
}


func_4196(var_57_string, var_58_bool)
{
	var_61_bool = 0; var_62_float = 0; var_63_float = 0; var_64_bool = 0; var_65_float = 0; var_66_float = 0; // 0x1064 PushV
	lshHasAnimation(var_64_bool, var_57_string); // 0x1065 Func
	var_67_bool = var_64_bool; // 0x1067 Push
	if(var_67_bool == 0) goto Label_4206; // 0x1068 JumpB
	lshGetAnimTimes(var_57_string, var_65_float, var_66_float); // 0x1069 Func
	lshPlayAnimation(var_65_float, var_66_float, var_58_bool); // 0x106b Func
	goto Label_4210; // 0x106d Jump
	
Label_4210:
	return 6; // 0x1072 Return
	
Label_4206:
	var_68_string = "Can't find lsh animation : "; // 0x106e PushS
	var_69_int = var_68_string + var_57_string; // 0x106f Add
	Trace(var_69_int); // 0x1070 Func
}


func_4712(var_45_bool)
{
	var_47_int = 0; var_48_string = ""; // 0x1269 PushV
	var_48_string = "branch"; // 0x126a MovS
	func_4320(var_47_int, var_48_string); // 0x126b NEW_2
	var_51_int = 2; // 0x126d PushI
	var_52_bool = var_47_int == var_51_int; // 0x126e Eq
	if(var_52_bool == 0) goto Label_4722; // 0x126f JumpB
	var_45_bool = 1; // 0x1270 MovB
	return 0; // 0x1271 Return
	
Label_4722:
	var_45_bool = 0; // 0x1272 MovB
	return 0; // 0x1273 Return
}


func_4211(var_82_object)
{
	var_83_float = 0; var_84_cvector = CVector(0,0,0); var_85_float = 0; var_86_cvector = CVector(0,0,0); // 0x1073 PushV
	GetEyesHeight(var_85_float); // 0x1074 ObjFunc
	var_86_cvector = CVector(0.0, 0.0, 0.0); // 0x1076 MovV
	var_87_float = GetByIndex(var_86_cvector, 1); // 0x1077 PushE
	var_87_float = var_85_float; // 0x1078 Mov
	SetByIndex(var_86_cvector, 1) = var_87_float; // 0x1079 PopE
	var_88_string = "head"; // 0x107a PushS
	LookAsync(var_82_object, var_88_string, var_86_cvector); // 0x107b Func
	return 4; // 0x107d Return
}


func_1140(var_0_bool, var_74_bool)
{
	var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0); // 0x474 PushV
	GetDirection(var_77_cvector); // 0x475 Func
	var_79_cvector = CVector(0,0,0); var_80_object = Obj(); // 0x477 PushV
	var_80_object = var_0_bool; // 0x478 MovT
	func_3923(var_80_object); // 0x479 NEW_2
	var_78_cvector = var_79_cvector; // 0x47a Mov
	var_85_float = 0; var_86_cvector = CVector(0,0,0); var_87_cvector = CVector(0,0,0); // 0x47c PushV
	var_86_cvector = var_77_cvector; // 0x47d Mov
	var_87_cvector = var_78_cvector; // 0x47e Mov
	func_4276(var_85_float, var_86_cvector, var_87_cvector); // 0x47f NEW_2
	var_93_float = -0.34202; // 0x481 PushF
	var_74_bool = var_85_float >= var_93_float; // 0x482 GE2
	return 4; // 0x483 Return
}


func_4724(var_74_bool, var_75_object)
{
	var_76_bool = 0; var_77_object = Obj(); // 0x1275 PushV
	var_77_object = var_75_object; // 0x1276 Mov
	func_4854(var_77_object); // 0x1277 NEW_2
	if(var_76_bool == 0) goto Label_4732; // 0x1279 JumpB
	var_74_bool = 1; // 0x127a MovB
	return 0; // 0x127b Return
	
Label_4732:
	var_74_bool = 0; // 0x127c MovB
	return 0; // 0x127d Return
}


func_4734(var_85_bool, var_86_object)
{
	var_87_bool = 0; var_88_object = Obj(); // 0x127f PushV
	var_88_object = var_86_object; // 0x1280 Mov
	func_4861(var_88_object); // 0x1281 NEW_2
	if(var_87_bool == 0) goto Label_4742; // 0x1283 JumpB
	var_85_bool = 1; // 0x1284 MovB
	return 0; // 0x1285 Return
	
Label_4742:
	var_85_bool = 0; // 0x1286 MovB
	return 0; // 0x1287 Return
}


func_4222()
{
	var_25_bool = 0; // 0x107e PushV
	func_5079(var_25_bool); // 0x107f NEW_2
	if(var_25_bool == 0) goto Label_4228; // 0x1081 JumpB
	lshStopSpeech(); // 0x1082 Func
	
Label_4228:
	return 0; // 0x1084 Return
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
	func_4261(var_52_cvector, var_53_cvector); // 0x48e NEW_2
	var_59_float = 0.75; // 0x490 PushF
	var_60_float = var_46_cvector * var_59_float; // 0x491 Mult
	var_51_cvector = var_52_cvector + var_60_float; // 0x492 Add2
	func_4261(var_50_cvector, var_51_cvector); // 0x493 NEW_2
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


func_4229(var_53_string, var_54_int, var_55_int)
{
	var_56_bool = 0; var_57_bool = 0; // 0x1085 PushV
	var_58_bool = 0; var_59_int = 0; var_60_int = 0; // 0x1086 PushV
	var_59_int = var_54_int; // 0x1087 Mov
	var_60_int = var_55_int; // 0x1088 Mov
	func_4271(var_58_bool, var_59_int, var_60_int); // 0x1089 NEW_2
	if(var_58_bool == 0) goto Label_4239; // 0x108b JumpB
	var_61_int = 0; // 0x108c PushI
	AddItem(var_57_bool, var_53_string, var_61_int); // 0x108d Func
	
Label_4239:
	return 2; // 0x108f Return
}


func_4744(var_91_bool, var_92_object)
{
	var_93_bool = 0; var_94_object = Obj(); // 0x1289 PushV
	var_94_object = var_92_object; // 0x128a Mov
	func_4868(var_94_object); // 0x128b NEW_2
	if(var_93_bool == 0) goto Label_4752; // 0x128d JumpB
	var_91_bool = 1; // 0x128e MovB
	return 0; // 0x128f Return
	
Label_4752:
	var_91_bool = 0; // 0x1290 MovB
	return 0; // 0x1291 Return
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


func_4240(var_29_string, var_30_int, var_31_int, var_32_int)
{
	var_33_int = 0; var_34_bool = 0; var_35_int = 0; var_36_bool = 0; // 0x1090 PushV
	var_37_bool = 0; var_38_int = 0; var_39_int = 0; // 0x1091 PushV
	var_38_int = var_30_int; // 0x1092 Mov
	var_39_int = var_31_int; // 0x1093 Mov
	func_4271(var_37_bool, var_38_int, var_39_int); // 0x1094 NEW_2
	if(var_37_bool == 0) goto Label_4254; // 0x1096 JumpB
	irand(var_35_int, var_32_int); // 0x1097 Func
	var_42_int = 0; // 0x1099 PushI
	var_43_int = 1; // 0x109a PushI
	var_44_int = var_35_int + var_43_int; // 0x109b Add
	AddItem(var_36_bool, var_29_string, var_42_int, var_44_int); // 0x109c Func
	
Label_4254:
	return 4; // 0x109e Return
}


func_4754(var_97_bool, var_98_object)
{
	var_99_bool = 0; var_100_object = Obj(); // 0x1293 PushV
	var_100_object = var_98_object; // 0x1294 Mov
	func_4875(var_100_object); // 0x1295 NEW_2
	if(var_99_bool == 0) goto Label_4762; // 0x1297 JumpB
	var_97_bool = 1; // 0x1298 MovB
	return 0; // 0x1299 Return
	
Label_4762:
	var_97_bool = 0; // 0x129a MovB
	return 0; // 0x129b Return
}


func_659(var_0_bool, var_74_object)
{
	var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0); var_78_bool = 0; var_79_cvector = CVector(0,0,0); var_80_cvector = CVector(0,0,0); var_81_bool = 0; // 0x293 PushV
	var_0_bool = var_74_object; // 0x294 TMov
	func_710(var_81_bool); // 0x296 NEW_2
	GetDirection(var_79_cvector); // 0x298 Func
	var_89_cvector = CVector(0,0,0); var_90_object = Obj(); // 0x29a PushV
	var_90_object = var_0_bool; // 0x29b MovT
	func_3923(var_90_object); // 0x29c NEW_2
	var_80_cvector = var_89_cvector; // 0x29d Mov
	var_95_float = 0; var_96_cvector = CVector(0,0,0); var_97_cvector = CVector(0,0,0); // 0x29f PushV
	var_96_cvector = var_79_cvector; // 0x2a0 Mov
	var_97_cvector = var_80_cvector; // 0x2a1 Mov
	func_4303(var_95_float, var_96_cvector, var_97_cvector); // 0x2a2 NEW_2
	var_119_int = 0; // 0x2a4 PushI
	var_120_bool = var_95_float < var_119_int; // 0x2a5 LT
	if(var_120_bool == 0) goto Label_685; // 0x2a6 JumpB
	var_121_object = Obj(); // 0x2a7 PushV
	var_121_object = var_0_bool; // 0x2a8 MovT
	func_4020(); // 0x2a9 NEW_2
	var_81_bool = 1; // 0x2ab MovB
	goto Label_688; // 0x2ac Jump
	
Label_688:
	var_130_bool = var_81_bool; // 0x2b0 Push
	if(var_130_bool == 0) goto Label_704; // 0x2b1 JumpB
	var_131_object = Obj(); // 0x2b2 PushV
	var_131_object = var_0_bool; // 0x2b3 MovT
	func_4020(); // 0x2b4 NEW_2
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


func_4764(var_109_bool, var_110_object)
{
	var_111_bool = 0; var_112_object = Obj(); // 0x129d PushV
	var_112_object = var_110_object; // 0x129e Mov
	func_4882(var_112_object); // 0x129f NEW_2
	if(var_111_bool == 0) goto Label_4772; // 0x12a1 JumpB
	var_109_bool = 1; // 0x12a2 MovB
	return 0; // 0x12a3 Return
	
Label_4772:
	var_109_bool = 0; // 0x12a4 MovB
	return 0; // 0x12a5 Return
}


func_4255(var_30_object)
{
	var_31_object = Obj(); var_32_object = Obj(); // 0x109f PushV
	self(var_32_object); // 0x10a0 Func
	var_30_object = var_32_object; // 0x10a2 Mov
	return 2; // 0x10a3 Return
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
	func_3918(var_170_cvector); // 0x4c4 NEW_2
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
	func_3918(var_182_cvector); // 0x4df NEW_2
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


func_4261(var_52_cvector, var_53_cvector)
{
	var_54_float = 0; var_55_float = 0; // 0x10a5 PushV
	var_56_int = var_53_cvector | var_53_cvector; // 0x10a6 Or
	var_55_float = sqrt(var_56_int); // 0x10a7 Sqrt2
	var_57_float = 0.0; // 0x10a8 PushF
	var_58_bool = var_55_float < var_57_float; // 0x10a9 LT
	if(var_58_bool == 0) goto Label_4269; // 0x10aa JumpB
	var_52_cvector = CVector(0.0, 0.0, 0.0); // 0x10ab MovV
	return 2; // 0x10ac Return
	
Label_4269:
	var_52_cvector = var_53_cvector / var_53_cvector; // 0x10ad Div2
	return 2; // 0x10ae Return
}


func_4774(var_115_bool, var_116_object)
{
	var_117_bool = 0; var_118_object = Obj(); // 0x12a7 PushV
	var_118_object = var_116_object; // 0x12a8 Mov
	func_4889(var_118_object); // 0x12a9 NEW_2
	if(var_117_bool == 0) goto Label_4782; // 0x12ab JumpB
	var_115_bool = 1; // 0x12ac MovB
	return 0; // 0x12ad Return
	
Label_4782:
	var_115_bool = 0; // 0x12ae MovB
	return 0; // 0x12af Return
}


func_4271(var_37_bool, var_38_int, var_39_int)
{
	var_40_int = 0; var_41_int = 0; // 0x10af PushV
	irand(var_41_int, var_39_int); // 0x10b0 Func
	var_37_bool = var_41_int < var_38_int; // 0x10b2 LT2
	return 2; // 0x10b3 Return
}


func_4784(var_121_bool, var_122_object)
{
	var_123_bool = 0; var_124_object = Obj(); // 0x12b1 PushV
	var_124_object = var_122_object; // 0x12b2 Mov
	func_4896(var_124_object); // 0x12b3 NEW_2
	if(var_123_bool == 0) goto Label_4792; // 0x12b5 JumpB
	var_121_bool = 1; // 0x12b6 MovB
	return 0; // 0x12b7 Return
	
Label_4792:
	var_121_bool = 0; // 0x12b8 MovB
	return 0; // 0x12b9 Return
}


func_1715(var_0_bool, var_74_bool)
{
	var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0); // 0x6b3 PushV
	GetDirection(var_77_cvector); // 0x6b4 Func
	var_79_cvector = CVector(0,0,0); var_80_object = Obj(); // 0x6b6 PushV
	var_80_object = var_0_bool; // 0x6b7 MovT
	func_3923(var_80_object); // 0x6b8 NEW_2
	var_78_cvector = var_79_cvector; // 0x6b9 Mov
	var_85_float = 0; var_86_cvector = CVector(0,0,0); var_87_cvector = CVector(0,0,0); // 0x6bb PushV
	var_86_cvector = var_77_cvector; // 0x6bc Mov
	var_87_cvector = var_78_cvector; // 0x6bd Mov
	func_4276(var_85_float, var_86_cvector, var_87_cvector); // 0x6be NEW_2
	var_93_float = -0.34202; // 0x6c0 PushF
	var_74_bool = var_85_float >= var_93_float; // 0x6c1 GE2
	return 4; // 0x6c2 Return
}


func_4276(var_85_float, var_86_cvector, var_87_cvector)
{
	var_88_int = var_86_cvector | var_87_cvector; // 0x10b5 Or
	var_89_int = var_86_cvector | var_86_cvector; // 0x10b6 Or
	var_90_int = var_87_cvector | var_87_cvector; // 0x10b7 Or
	var_91_float = var_89_int * var_90_int; // 0x10b8 Mult
	var_92_float = sqrt(var_91_float); // 0x10b9 Sqrt
	var_85_float = var_88_int / var_88_int; // 0x10ba Div2
	return 0; // 0x10bb Return
}


func_4794(var_127_bool, var_128_object)
{
	var_129_bool = 0; var_130_object = Obj(); // 0x12bb PushV
	var_130_object = var_128_object; // 0x12bc Mov
	func_4903(var_130_object); // 0x12bd NEW_2
	if(var_129_bool == 0) goto Label_4802; // 0x12bf JumpB
	var_127_bool = 1; // 0x12c0 MovB
	return 0; // 0x12c1 Return
	
Label_4802:
	var_127_bool = 0; // 0x12c2 MovB
	return 0; // 0x12c3 Return
}


func_4284(var_75_float, var_76_cvector, var_77_cvector)
{
	var_78_float = GetByIndex(var_76_cvector, 0); // 0x10bd PushE
	var_79_float = GetByIndex(var_77_cvector, 0); // 0x10be PushE
	var_80_float = var_78_float * var_79_float; // 0x10bf Mult
	var_81_float = GetByIndex(var_76_cvector, 2); // 0x10c0 PushE
	var_82_float = GetByIndex(var_77_cvector, 2); // 0x10c1 PushE
	var_83_float = var_81_float * var_82_float; // 0x10c2 Mult
	var_75_float = var_80_float + var_83_float; // 0x10c3 Add2
	return 0; // 0x10c4 Return
}


func_1731(var_0_bool, var_47_int, var_48_object)
{
	var_50_object = Obj(); var_51_bool = 0; var_52_int = 0; var_53_bool = 0; var_54_object = Obj(); var_55_bool = 0; var_56_int = 0; var_57_bool = 0; // 0x6c3 PushV
	var_0_bool = var_48_object; // 0x6c4 TMov
	var_58_bool = 0; var_59_object = Obj(); var_60_float = 0; // 0x6c5 PushV
	var_59_object = var_48_object; // 0x6c6 Mov
	var_60_float = 70.0; // 0x6c7 MovF
	func_4036(var_59_object, var_60_float); // 0x6c8 NEW_2
	var_104_bool = var_58_bool == 0; // 0x6ca Not
	if(var_104_bool == 0) goto Label_1742; // 0x6cb JumpB
	var_47_int = -2; // 0x6cc MovI
	return 8; // 0x6cd Return
	
Label_1742:
	CreateDialog(var_54_object); // 0x6ce Func
	var_105_int = 0; // 0x6d0 PushV
	func_5073(var_105_int); // 0x6d1 NEW_2
	SetNPCName(var_105_int); // 0x6d3 ObjFunc
	var_106_int = 0; // 0x6d5 PushV
	func_5071(var_106_int); // 0x6d6 NEW_2
	SetNPCDescription(var_106_int); // 0x6d8 ObjFunc
	var_107_string = ""; // 0x6da PushV
	func_5075(var_107_string); // 0x6db NEW_2
	SetPhoto(var_107_string); // 0x6dd ObjFunc
	var_108_string = ""; // 0x6df PushV
	func_5077(var_108_string); // 0x6e0 NEW_2
	SetPhoto2(var_108_string); // 0x6e2 ObjFunc
	var_109_int = 0; // 0x6e4 PushV
	func_4959(var_109_int); // 0x6e5 NEW_2
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
	var_354_bool = var_57_bool == 0; // 0x6fb Not
	if(var_354_bool == 0) goto Label_1794; // 0x6fc JumpB
	sync(); // 0x6fd Func
	IsDialogEnd(var_57_bool); // 0x6ff ObjFunc
	goto Label_1787; // 0x701 Jump
	
Label_1794:
	var_355_object = Obj(); // 0x702 PushV
	var_355_object = var_48_object; // 0x703 Mov
	func_4104(); // 0x704 NEW_2
	StopDialog(var_54_object); // 0x706 Func
	GetReturnValue(var_56_int); // 0x708 ObjFunc
	var_47_int = var_56_int; // 0x70a Mov
	return 8; // 0x70b Return
}


func_4804(var_139_bool, var_140_object)
{
	var_141_bool = 0; var_142_object = Obj(); // 0x12c5 PushV
	var_142_object = var_140_object; // 0x12c6 Mov
	func_4910(var_142_object); // 0x12c7 NEW_2
	if(var_141_bool == 0) goto Label_4812; // 0x12c9 JumpB
	var_139_bool = 1; // 0x12ca MovB
	return 0; // 0x12cb Return
	
Label_4812:
	var_139_bool = 0; // 0x12cc MovB
	return 0; // 0x12cd Return
}


func_4293(var_84_float, var_85_cvector)
{
	var_86_float = GetByIndex(var_85_cvector, 0); // 0x10c6 PushE
	var_87_float = GetByIndex(var_85_cvector, 0); // 0x10c7 PushE
	var_88_float = var_86_float * var_87_float; // 0x10c8 Mult
	var_89_float = GetByIndex(var_85_cvector, 2); // 0x10c9 PushE
	var_90_float = GetByIndex(var_85_cvector, 2); // 0x10ca PushE
	var_91_float = var_89_float * var_90_float; // 0x10cb Mult
	var_92_int = var_88_float + var_91_float; // 0x10cc Add
	var_84_float = sqrt(var_92_int); // 0x10cd Sqrt2
	return 0; // 0x10ce Return
}


func_710(var_0_bool)
{
	var_82_object = Obj(); // 0x2c6 PushV
	var_82_object = var_0_bool; // 0x2c7 MovT
	func_4211(var_82_object); // 0x2c8 NEW_2
	return 0; // 0x2ca Return
}


func_4814(var_145_bool, var_146_object)
{
	var_147_bool = 0; var_148_object = Obj(); // 0x12cf PushV
	var_148_object = var_146_object; // 0x12d0 Mov
	func_4917(var_148_object); // 0x12d1 NEW_2
	if(var_147_bool == 0) goto Label_4822; // 0x12d3 JumpB
	var_145_bool = 1; // 0x12d4 MovB
	return 0; // 0x12d5 Return
	
Label_4822:
	var_145_bool = 0; // 0x12d6 MovB
	return 0; // 0x12d7 Return
}


func_4303(var_72_float, var_73_cvector, var_74_cvector)
{
	var_75_float = 0; var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0); // 0x10d0 PushV
	var_76_cvector = var_73_cvector; // 0x10d1 Mov
	var_77_cvector = var_74_cvector; // 0x10d2 Mov
	func_4284(var_75_float, var_76_cvector, var_77_cvector); // 0x10d3 NEW_2
	var_84_float = 0; var_85_cvector = CVector(0,0,0); // 0x10d5 PushV
	var_85_cvector = var_73_cvector; // 0x10d6 Mov
	func_4293(var_84_float, var_85_cvector); // 0x10d7 NEW_2
	var_93_float = 0; var_94_cvector = CVector(0,0,0); // 0x10d9 PushV
	var_94_cvector = var_74_cvector; // 0x10da Mov
	func_4293(var_93_float, var_94_cvector); // 0x10db NEW_2
	var_95_float = var_84_float * var_93_float; // 0x10dd Mult
	var_72_float = var_75_float / var_75_float; // 0x10de Div2
	return 0; // 0x10df Return
}


func_4824(var_151_bool, var_152_object)
{
	var_153_bool = 0; var_154_object = Obj(); // 0x12d9 PushV
	var_154_object = var_152_object; // 0x12da Mov
	func_4924(var_154_object); // 0x12db NEW_2
	if(var_153_bool == 0) goto Label_4832; // 0x12dd JumpB
	var_151_bool = 1; // 0x12de MovB
	return 0; // 0x12df Return
	
Label_4832:
	var_151_bool = 0; // 0x12e0 MovB
	return 0; // 0x12e1 Return
}


func_4320(var_47_int, var_48_string)
{
	var_49_int = 0; var_50_int = 0; // 0x10e0 PushV
	GetVariable(var_48_string, var_50_int); // 0x10e1 Func
	var_47_int = var_50_int; // 0x10e3 Mov
	return 2; // 0x10e4 Return
}


func_4834(var_157_bool, var_158_object)
{
	var_159_bool = 0; var_160_object = Obj(); // 0x12e3 PushV
	var_160_object = var_158_object; // 0x12e4 Mov
	func_4931(var_160_object); // 0x12e5 NEW_2
	if(var_159_bool == 0) goto Label_4842; // 0x12e7 JumpB
	var_157_bool = 1; // 0x12e8 MovB
	return 0; // 0x12e9 Return
	
Label_4842:
	var_157_bool = 0; // 0x12ea MovB
	return 0; // 0x12eb Return
}


func_4325(var_72_int)
{
	var_73_float = 0; var_74_float = 0; // 0x10e5 PushV
	GetGameTime(var_74_float); // 0x10e6 Func
	var_75_int = 1; // 0x10e8 PushI
	var_76_int = 0; // 0x10e9 PushV
	var_77_int = 24; // 0x10ea PushI
	var_76_int = var_74_float / var_74_float; // 0x10eb Div2
	var_72_int = var_75_int + var_76_int; // 0x10ec Add2
	return 2; // 0x10ed Return
}


func_4844(var_235_bool, var_236_object)
{
	var_237_bool = 0; var_238_object = Obj(); // 0x12ed PushV
	var_238_object = var_236_object; // 0x12ee Mov
	func_4938(var_238_object); // 0x12ef NEW_2
	if(var_237_bool == 0) goto Label_4852; // 0x12f1 JumpB
	var_235_bool = 1; // 0x12f2 MovB
	return 0; // 0x12f3 Return
	
Label_4852:
	var_235_bool = 0; // 0x12f4 MovB
	return 0; // 0x12f5 Return
}


func_4334(var_240_int)
{
	var_241_float = 0; var_242_float = 0; // 0x10ee PushV
	GetGameTime(var_242_float); // 0x10ef Func
	var_243_int = 0; // 0x10f1 PushV
	var_243_int = var_242_float; // 0x10f2 Mov
	var_244_int = 24; // 0x10f3 PushI
	var_240_int = var_243_int % var_244_int; // 0x10f4 Mod2
	return 2; // 0x10f5 Return
}


func_4854(var_76_bool)
{
	var_78_int = 0; // 0x12f7 PushV
	func_4325(var_78_int); // 0x12f8 NEW_2
	var_84_int = 1; // 0x12fa PushI
	var_76_bool = var_78_int == var_84_int; // 0x12fb Eq2
	return 0; // 0x12fc Return
}


func_251(var_2_bool)
{
	var_23_int = 110; // 0xfb PushI
	KillTimer(var_23_int); // 0xfc Func
	var_2_bool = 0; // 0xfe TMovB
	func_387(var_21_string, var_22_bool); // 0x100 NEW_2
	return 0; // 0x102 Return
}


func_4861(var_87_bool)
{
	var_89_int = 0; // 0x12fe PushV
	func_4325(var_89_int); // 0x12ff NEW_2
	var_90_int = 2; // 0x1301 PushI
	var_87_bool = var_89_int == var_90_int; // 0x1302 Eq2
	return 0; // 0x1303 Return
}


func_4350(var_26_bool, var_27_object, var_28_string)
{
	var_29_string = "unholster"; // 0x10ff PushS
	var_30_bool = var_28_string == var_29_string; // 0x1100 Eq
	if(var_30_bool == 0) goto Label_4361; // 0x1101 JumpB
	var_31_bool = 0; var_32_object = Obj(); // 0x1102 PushV
	var_32_object = var_27_object; // 0x1103 Mov
	func_4641(var_31_bool, var_32_object); // 0x1104 NEW_2
	var_26_bool = var_31_bool; // 0x1105 Mov
	return 0; // 0x1107 Return
	
Label_4361:
	var_35_string = "player_shot"; // 0x1109 PushS
	var_36_bool = var_28_string == var_35_string; // 0x110a Eq
	if(var_36_bool == 0) goto Label_4371; // 0x110b JumpB
	var_37_bool = 0; var_38_object = Obj(); // 0x110c PushV
	var_38_object = var_27_object; // 0x110d Mov
	func_4654(var_37_bool, var_38_object); // 0x110e NEW_2
	var_26_bool = var_37_bool; // 0x110f Mov
	return 0; // 0x1111 Return
	
Label_4371:
	var_52_string = "battle"; // 0x1113 PushS
	var_53_bool = var_28_string == var_52_string; // 0x1114 Eq
	if(var_53_bool == 0) goto Label_4380; // 0x1115 JumpB
	var_54_bool = 0; var_55_object = Obj(); // 0x1116 PushV
	var_55_object = var_27_object; // 0x1117 Mov
	func_4677(var_54_bool, var_55_object); // 0x1118 NEW_2
	var_26_bool = var_54_bool; // 0x1119 Mov
	return 0; // 0x111b Return
	
Label_4380:
	var_26_bool = 0; // 0x111c MovB
	return 0; // 0x111d Return
}


func_259(var_2_bool)
{
	var_72_int = 110; // 0x103 PushI
	KillTimer(var_72_int); // 0x104 Func
	var_2_bool = 0; // 0x106 TMovB
	func_394(var_26_bool, var_27_int); // 0x108 NEW_2
	return 0; // 0x10a Return
}


func_4868(var_93_bool)
{
	var_95_int = 0; // 0x1305 PushV
	func_4325(var_95_int); // 0x1306 NEW_2
	var_96_int = 3; // 0x1308 PushI
	var_93_bool = var_95_int == var_96_int; // 0x1309 Eq2
	return 0; // 0x130a Return
}


func_4875(var_99_bool)
{
	var_101_int = 0; // 0x130c PushV
	func_4325(var_101_int); // 0x130d NEW_2
	var_102_int = 4; // 0x130f PushI
	var_99_bool = var_101_int == var_102_int; // 0x1310 Eq2
	return 0; // 0x1311 Return
}


func_1805(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_118_object, var_119_object)
{
	var_0_bool = var_119_object; // 0x70e TMov
	var_1_bool = var_118_object; // 0x70f TMov
	var_3_bool = 0; // 0x710 TMovB
	var_124_int = 1; // 0x711 PushI
	if(var_124_int == 0) goto Label_2119; // 0x712 JumpB
	var_125_bool = 0; var_126_object = Obj(); // 0x713 PushV
	var_126_object = var_1_bool; // 0x714 MovT
	func_4712(var_126_object); // 0x715 NEW_2
	if(var_125_bool == 0) goto Label_2049; // 0x717 JumpB
	var_133_string = ""; // 0x718 PushV
	var_133_string = "Neutral"; // 0x719 MovS
	func_2149(var_119_object, var_133_string); // 0x71a NEW_2
	var_150_int = 543247; // 0x71c PushI
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
	func_4724(var_154_bool, var_155_object); // 0x729 NEW_2
	if(var_154_bool == 0) goto Label_1842; // 0x72b JumpB
	var_165_bool = 0; var_166_object = Obj(); // 0x72c PushV
	var_166_object = var_1_bool; // 0x72d MovT
	func_4734(var_165_bool, var_166_object); // 0x72e NEW_2
	if(var_165_bool == 0) goto Label_1842; // 0x730 JumpB
	var_153_bool = 0; // 0x731 MovB
	
Label_1842:
	if(var_153_bool == 0) goto Label_1849; // 0x732 JumpB
	var_171_bool = 0; var_172_object = Obj(); // 0x733 PushV
	var_172_object = var_1_bool; // 0x734 MovT
	func_4744(var_171_bool, var_172_object); // 0x735 NEW_2
	if(var_171_bool == 0) goto Label_1849; // 0x737 JumpB
	var_152_bool = 0; // 0x738 MovB
	
Label_1849:
	if(var_152_bool == 0) goto Label_1856; // 0x739 JumpB
	var_177_bool = 0; var_178_object = Obj(); // 0x73a PushV
	var_178_object = var_1_bool; // 0x73b MovT
	func_4754(var_177_bool, var_178_object); // 0x73c NEW_2
	if(var_177_bool == 0) goto Label_1856; // 0x73e JumpB
	var_151_bool = 0; // 0x73f MovB
	
Label_1856:
	if(var_151_bool == 0) goto Label_1862; // 0x740 JumpB
	var_183_int = 543250; // 0x741 PushI
	var_184_int = -1; // 0x742 PushI
	var_185_int = 45706; // 0x743 PushI
	AddReply(var_183_int, var_184_int, var_185_int); // 0x744 TObjFunc
	
Label_1862:
	var_186_bool = 0; // 0x746 PushV
	var_186_bool = 1; // 0x747 MovB
	var_187_bool = 0; // 0x748 PushV
	var_187_bool = 1; // 0x749 MovB
	var_188_bool = 0; // 0x74a PushV
	var_188_bool = 1; // 0x74b MovB
	var_189_bool = 0; var_190_object = Obj(); // 0x74c PushV
	var_190_object = var_1_bool; // 0x74d MovT
	func_4764(var_189_bool, var_190_object); // 0x74e NEW_2
	if(var_189_bool == 0) goto Label_1879; // 0x750 JumpB
	var_195_bool = 0; var_196_object = Obj(); // 0x751 PushV
	var_196_object = var_1_bool; // 0x752 MovT
	func_4774(var_195_bool, var_196_object); // 0x753 NEW_2
	if(var_195_bool == 0) goto Label_1879; // 0x755 JumpB
	var_188_bool = 0; // 0x756 MovB
	
Label_1879:
	if(var_188_bool == 0) goto Label_1886; // 0x757 JumpB
	var_201_bool = 0; var_202_object = Obj(); // 0x758 PushV
	var_202_object = var_1_bool; // 0x759 MovT
	func_4784(var_201_bool, var_202_object); // 0x75a NEW_2
	if(var_201_bool == 0) goto Label_1886; // 0x75c JumpB
	var_187_bool = 0; // 0x75d MovB
	
Label_1886:
	if(var_187_bool == 0) goto Label_1893; // 0x75e JumpB
	var_207_bool = 0; var_208_object = Obj(); // 0x75f PushV
	var_208_object = var_1_bool; // 0x760 MovT
	func_4794(var_207_bool, var_208_object); // 0x761 NEW_2
	if(var_207_bool == 0) goto Label_1893; // 0x763 JumpB
	var_186_bool = 0; // 0x764 MovB
	
Label_1893:
	if(var_186_bool == 0) goto Label_1899; // 0x765 JumpB
	var_213_int = 543262; // 0x766 PushI
	var_214_int = -1; // 0x767 PushI
	var_215_int = 45718; // 0x768 PushI
	AddReply(var_213_int, var_214_int, var_215_int); // 0x769 TObjFunc
	
Label_1899:
	var_216_bool = 0; // 0x76b PushV
	var_216_bool = 1; // 0x76c MovB
	var_217_bool = 0; // 0x76d PushV
	var_217_bool = 1; // 0x76e MovB
	var_218_bool = 0; // 0x76f PushV
	var_218_bool = 1; // 0x770 MovB
	var_219_bool = 0; var_220_object = Obj(); // 0x771 PushV
	var_220_object = var_1_bool; // 0x772 MovT
	func_4804(var_219_bool, var_220_object); // 0x773 NEW_2
	if(var_219_bool == 0) goto Label_1916; // 0x775 JumpB
	var_225_bool = 0; var_226_object = Obj(); // 0x776 PushV
	var_226_object = var_1_bool; // 0x777 MovT
	func_4814(var_225_bool, var_226_object); // 0x778 NEW_2
	if(var_225_bool == 0) goto Label_1916; // 0x77a JumpB
	var_218_bool = 0; // 0x77b MovB
	
Label_1916:
	if(var_218_bool == 0) goto Label_1923; // 0x77c JumpB
	var_231_bool = 0; var_232_object = Obj(); // 0x77d PushV
	var_232_object = var_1_bool; // 0x77e MovT
	func_4824(var_231_bool, var_232_object); // 0x77f NEW_2
	if(var_231_bool == 0) goto Label_1923; // 0x781 JumpB
	var_217_bool = 0; // 0x782 MovB
	
Label_1923:
	if(var_217_bool == 0) goto Label_1930; // 0x783 JumpB
	var_237_bool = 0; var_238_object = Obj(); // 0x784 PushV
	var_238_object = var_1_bool; // 0x785 MovT
	func_4834(var_237_bool, var_238_object); // 0x786 NEW_2
	if(var_237_bool == 0) goto Label_1930; // 0x788 JumpB
	var_216_bool = 0; // 0x789 MovB
	
Label_1930:
	if(var_216_bool == 0) goto Label_1936; // 0x78a JumpB
	var_243_int = 543276; // 0x78b PushI
	var_244_int = -1; // 0x78c PushI
	var_245_int = 45732; // 0x78d PushI
	AddReply(var_243_int, var_244_int, var_245_int); // 0x78e TObjFunc
	
Label_1936:
	var_246_bool = 0; // 0x790 PushV
	var_246_bool = 1; // 0x791 MovB
	var_247_bool = 0; // 0x792 PushV
	var_247_bool = 1; // 0x793 MovB
	var_248_bool = 0; // 0x794 PushV
	var_248_bool = 1; // 0x795 MovB
	var_249_bool = 0; var_250_object = Obj(); // 0x796 PushV
	var_250_object = var_1_bool; // 0x797 MovT
	func_4724(var_249_bool, var_250_object); // 0x798 NEW_2
	if(var_249_bool == 0) goto Label_1953; // 0x79a JumpB
	var_251_bool = 0; var_252_object = Obj(); // 0x79b PushV
	var_252_object = var_1_bool; // 0x79c MovT
	func_4744(var_251_bool, var_252_object); // 0x79d NEW_2
	if(var_251_bool == 0) goto Label_1953; // 0x79f JumpB
	var_248_bool = 0; // 0x7a0 MovB
	
Label_1953:
	if(var_248_bool == 0) goto Label_1960; // 0x7a1 JumpB
	var_253_bool = 0; var_254_object = Obj(); // 0x7a2 PushV
	var_254_object = var_1_bool; // 0x7a3 MovT
	func_4754(var_253_bool, var_254_object); // 0x7a4 NEW_2
	if(var_253_bool == 0) goto Label_1960; // 0x7a6 JumpB
	var_247_bool = 0; // 0x7a7 MovB
	
Label_1960:
	if(var_247_bool == 0) goto Label_1967; // 0x7a8 JumpB
	var_255_bool = 0; var_256_object = Obj(); // 0x7a9 PushV
	var_256_object = var_1_bool; // 0x7aa MovT
	func_4784(var_255_bool, var_256_object); // 0x7ab NEW_2
	if(var_255_bool == 0) goto Label_1967; // 0x7ad JumpB
	var_246_bool = 0; // 0x7ae MovB
	
Label_1967:
	if(var_246_bool == 0) goto Label_1973; // 0x7af JumpB
	var_257_int = 543248; // 0x7b0 PushI
	var_258_int = -1; // 0x7b1 PushI
	var_259_int = 45704; // 0x7b2 PushI
	AddReply(var_257_int, var_258_int, var_259_int); // 0x7b3 TObjFunc
	
Label_1973:
	var_260_bool = 0; // 0x7b5 PushV
	var_260_bool = 1; // 0x7b6 MovB
	var_261_bool = 0; // 0x7b7 PushV
	var_261_bool = 1; // 0x7b8 MovB
	var_262_bool = 0; // 0x7b9 PushV
	var_262_bool = 1; // 0x7ba MovB
	var_263_bool = 0; var_264_object = Obj(); // 0x7bb PushV
	var_264_object = var_1_bool; // 0x7bc MovT
	func_4774(var_263_bool, var_264_object); // 0x7bd NEW_2
	if(var_263_bool == 0) goto Label_1990; // 0x7bf JumpB
	var_265_bool = 0; var_266_object = Obj(); // 0x7c0 PushV
	var_266_object = var_1_bool; // 0x7c1 MovT
	func_4764(var_265_bool, var_266_object); // 0x7c2 NEW_2
	if(var_265_bool == 0) goto Label_1990; // 0x7c4 JumpB
	var_262_bool = 0; // 0x7c5 MovB
	
Label_1990:
	if(var_262_bool == 0) goto Label_1997; // 0x7c6 JumpB
	var_267_bool = 0; var_268_object = Obj(); // 0x7c7 PushV
	var_268_object = var_1_bool; // 0x7c8 MovT
	func_4794(var_267_bool, var_268_object); // 0x7c9 NEW_2
	if(var_267_bool == 0) goto Label_1997; // 0x7cb JumpB
	var_261_bool = 0; // 0x7cc MovB
	
Label_1997:
	if(var_261_bool == 0) goto Label_2004; // 0x7cd JumpB
	var_269_bool = 0; var_270_object = Obj(); // 0x7ce PushV
	var_270_object = var_1_bool; // 0x7cf MovT
	func_4734(var_269_bool, var_270_object); // 0x7d0 NEW_2
	if(var_269_bool == 0) goto Label_2004; // 0x7d2 JumpB
	var_260_bool = 0; // 0x7d3 MovB
	
Label_2004:
	if(var_260_bool == 0) goto Label_2010; // 0x7d4 JumpB
	var_271_int = 543252; // 0x7d5 PushI
	var_272_int = -1; // 0x7d6 PushI
	var_273_int = 45708; // 0x7d7 PushI
	AddReply(var_271_int, var_272_int, var_273_int); // 0x7d8 TObjFunc
	
Label_2010:
	var_274_bool = 0; // 0x7da PushV
	var_274_bool = 1; // 0x7db MovB
	var_275_bool = 0; var_276_object = Obj(); // 0x7dc PushV
	var_276_object = var_1_bool; // 0x7dd MovT
	func_4824(var_275_bool, var_276_object); // 0x7de NEW_2
	if(var_275_bool == 0) goto Label_2023; // 0x7e0 JumpB
	var_277_bool = 0; var_278_object = Obj(); // 0x7e1 PushV
	var_278_object = var_1_bool; // 0x7e2 MovT
	func_4834(var_277_bool, var_278_object); // 0x7e3 NEW_2
	if(var_277_bool == 0) goto Label_2023; // 0x7e5 JumpB
	var_274_bool = 0; // 0x7e6 MovB
	
Label_2023:
	if(var_274_bool == 0) goto Label_2029; // 0x7e7 JumpB
	var_279_int = 543281; // 0x7e8 PushI
	var_280_int = -1; // 0x7e9 PushI
	var_281_int = 45737; // 0x7ea PushI
	AddReply(var_279_int, var_280_int, var_281_int); // 0x7eb TObjFunc
	
Label_2029:
	var_282_bool = 0; // 0x7ed PushV
	var_282_bool = 1; // 0x7ee MovB
	var_283_bool = 0; var_284_object = Obj(); // 0x7ef PushV
	var_284_object = var_1_bool; // 0x7f0 MovT
	func_4804(var_283_bool, var_284_object); // 0x7f1 NEW_2
	if(var_283_bool == 0) goto Label_2042; // 0x7f3 JumpB
	var_285_bool = 0; var_286_object = Obj(); // 0x7f4 PushV
	var_286_object = var_1_bool; // 0x7f5 MovT
	func_4814(var_285_bool, var_286_object); // 0x7f6 NEW_2
	if(var_285_bool == 0) goto Label_2042; // 0x7f8 JumpB
	var_282_bool = 0; // 0x7f9 MovB
	
Label_2042:
	if(var_282_bool == 0) goto Label_2048; // 0x7fa JumpB
	var_287_int = 543275; // 0x7fb PushI
	var_288_int = -1; // 0x7fc PushI
	var_289_int = 45731; // 0x7fd PushI
	AddReply(var_287_int, var_288_int, var_289_int); // 0x7fe TObjFunc
	
Label_2048:
	goto Label_2119; // 0x800 Jump
	
Label_2119:
	var_290_bool = 0; // 0x847 PushV
	func_5079(var_290_bool); // 0x848 NEW_2
	if(var_290_bool == 0) goto Label_2134; // 0x84a JumpB
	
Label_2123:
	lshWaitForAnimEnd(); // 0x84b Func
	var_291_bool = var_3_bool; // 0x84d PushT
	if(var_291_bool == 0) goto Label_2128; // 0x84e JumpB
	goto Label_2133; // 0x84f Jump
	
Label_2133:
	goto Label_2148; // 0x855 Jump
	
Label_2148:
	return 0; // 0x864 Return
	
Label_2128:
	var_292_string = ""; // 0x850 PushV
	var_292_string = var_2_bool; // 0x851 MovT
	func_4180(var_292_string); // 0x852 NEW_2
	goto Label_2123; // 0x854 Jump
	
Label_2134:
	var_303_string = "all"; // 0x856 PushS
	var_304_string = "idle"; // 0x857 PushS
	PlayAnimation(var_303_string, var_304_string); // 0x858 Func
	
Label_2138:
	WaitForAnimEnd(); // 0x85a Func
	var_305_bool = var_3_bool; // 0x85c PushT
	if(var_305_bool == 0) goto Label_2143; // 0x85d JumpB
	goto Label_2148; // 0x85e Jump
	
Label_2143:
	var_306_string = "all"; // 0x85f PushS
	var_307_string = "idle"; // 0x860 PushS
	PlayAnimation(var_306_string, var_307_string); // 0x861 Func
	goto Label_2138; // 0x863 Jump
	
Label_2049:
	var_308_string = ""; // 0x801 PushV
	var_308_string = "Neutral"; // 0x802 MovS
	func_2149(var_119_object, var_308_string); // 0x803 NEW_2
	var_309_int = 537506; // 0x805 PushI
	SetMessage(var_309_int); // 0x806 TObjFunc
	ClearReplies(); // 0x808 TObjFunc
	var_310_int = 537507; // 0x80a PushI
	var_311_int = -1; // 0x80b PushI
	var_312_int = 39354; // 0x80c PushI
	AddReply(var_310_int, var_311_int, var_312_int); // 0x80d TObjFunc
	var_313_bool = 0; // 0x80f PushV
	var_313_bool = 0; // 0x810 MovB
	var_314_bool = 0; var_315_object = Obj(); // 0x811 PushV
	var_315_object = var_1_bool; // 0x812 MovT
	func_4700(var_315_object); // 0x813 NEW_2
	if(var_314_bool == 0) goto Label_2076; // 0x815 JumpB
	var_320_bool = 0; var_321_object = Obj(); // 0x816 PushV
	var_321_object = var_1_bool; // 0x817 MovT
	func_4744(var_320_bool, var_321_object); // 0x818 NEW_2
	if(var_320_bool == 0) goto Label_2076; // 0x81a JumpB
	var_313_bool = 1; // 0x81b MovB
	
Label_2076:
	if(var_313_bool == 0) goto Label_2082; // 0x81c JumpB
	var_322_int = 537549; // 0x81d PushI
	var_323_int = 39397; // 0x81e PushI
	var_324_int = 39396; // 0x81f PushI
	AddReply(var_322_int, var_323_int, var_324_int); // 0x820 TObjFunc
	
Label_2082:
	var_325_bool = 0; var_326_object = Obj(); // 0x822 PushV
	var_326_object = var_1_bool; // 0x823 MovT
	func_4724(var_325_bool, var_326_object); // 0x824 NEW_2
	if(var_325_bool == 0) goto Label_2092; // 0x826 JumpB
	var_327_int = 537671; // 0x827 PushI
	var_328_int = 39520; // 0x828 PushI
	var_329_int = 39519; // 0x829 PushI
	AddReply(var_327_int, var_328_int, var_329_int); // 0x82a TObjFunc
	
Label_2092:
	var_330_bool = 0; // 0x82c PushV
	var_330_bool = 0; // 0x82d MovB
	var_331_bool = 0; var_332_object = Obj(); // 0x82e PushV
	var_332_object = var_1_bool; // 0x82f MovT
	func_4724(var_331_bool, var_332_object); // 0x830 NEW_2
	if(var_331_bool == 0) goto Label_2105; // 0x832 JumpB
	var_333_bool = 0; var_334_object = Obj(); // 0x833 PushV
	var_334_object = var_1_bool; // 0x834 MovT
	func_4844(var_333_bool, var_334_object); // 0x835 NEW_2
	if(var_333_bool == 0) goto Label_2105; // 0x837 JumpB
	var_330_bool = 1; // 0x838 MovB
	
Label_2105:
	if(var_330_bool == 0) goto Label_2111; // 0x839 JumpB
	var_348_int = 537702; // 0x83a PushI
	var_349_int = 39551; // 0x83b PushI
	var_350_int = 39550; // 0x83c PushI
	AddReply(var_348_int, var_349_int, var_350_int); // 0x83d TObjFunc
	
Label_2111:
	var_351_int = 537721; // 0x83f PushI
	var_352_int = -1; // 0x840 PushI
	var_353_int = 39569; // 0x841 PushI
	AddReply(var_351_int, var_352_int, var_353_int); // 0x842 TObjFunc
	goto Label_2119; // 0x844 Jump
}


func_4882(var_111_bool)
{
	var_113_int = 0; // 0x1313 PushV
	func_4325(var_113_int); // 0x1314 NEW_2
	var_114_int = 5; // 0x1316 PushI
	var_111_bool = var_113_int == var_114_int; // 0x1317 Eq2
	return 0; // 0x1318 Return
}


func_276(var_2_bool, var_23_object)
{
	var_24_bool = 0; var_25_int = 0; var_26_bool = 0; var_27_int = 0; // 0x114 PushV
	var_28_bool = 0; var_29_object = Obj(); // 0x115 PushV
	var_29_object = var_23_object; // 0x116 Mov
	func_3996(var_28_bool, var_29_object); // 0x117 NEW_2
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
	func_4502(var_66_object); // 0x126 NEW_2
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
	func_4511(var_73_object); // 0x134 NEW_2
	var_2_bool = 1; // 0x136 TMovB
	var_138_int = 110; // 0x137 PushI
	var_139_float = 10.0; // 0x138 PushF
	SetTimer(var_138_int, var_139_float); // 0x139 Func
	
Label_315:
	return 4; // 0x13b Return
}


func_4889(var_117_bool)
{
	var_119_int = 0; // 0x131a PushV
	func_4325(var_119_int); // 0x131b NEW_2
	var_120_int = 6; // 0x131d PushI
	var_117_bool = var_119_int == var_120_int; // 0x131e Eq2
	return 0; // 0x131f Return
}


func_4382(var_60_object, var_61_string)
{
	var_62_string = "unholster"; // 0x111f PushS
	var_63_bool = var_61_string == var_62_string; // 0x1120 Eq
	if(var_63_bool == 0) goto Label_4391; // 0x1121 JumpB
	var_64_object = Obj(); // 0x1122 PushV
	var_64_object = var_60_object; // 0x1123 Mov
	func_4646(var_64_object); // 0x1124 NEW_2
	goto Label_4406; // 0x1126 Jump
	
Label_4406:
	return 0; // 0x1136 Return
	
Label_4391:
	var_137_string = "player_shot"; // 0x1127 PushS
	var_138_bool = var_61_string == var_137_string; // 0x1128 Eq
	if(var_138_bool == 0) goto Label_4399; // 0x1129 JumpB
	var_139_object = Obj(); // 0x112a PushV
	var_139_object = var_60_object; // 0x112b Mov
	func_4669(var_139_object); // 0x112c NEW_2
	goto Label_4406; // 0x112e Jump
	
Label_4399:
	var_205_string = "battle"; // 0x112f PushS
	var_206_bool = var_61_string == var_205_string; // 0x1130 Eq
	if(var_206_bool == 0) goto Label_4406; // 0x1131 JumpB
	var_207_object = Obj(); // 0x1132 PushV
	var_207_object = var_60_object; // 0x1133 Mov
	func_4684(var_207_object); // 0x1134 NEW_2
}


func_1311(var_2_bool)
{
	Stop(); // 0x51f Func
	var_23_int = 120; // 0x521 PushI
	KillTimer(var_23_int); // 0x522 Func
	var_2_bool = 1; // 0x524 TMovB
	return 0; // 0x525 Return
}


func_4896(var_123_bool)
{
	var_125_int = 0; // 0x1321 PushV
	func_4325(var_125_int); // 0x1322 NEW_2
	var_126_int = 7; // 0x1324 PushI
	var_123_bool = var_125_int == var_126_int; // 0x1325 Eq2
	return 0; // 0x1326 Return
}


func_4903(var_129_bool)
{
	var_131_int = 0; // 0x1328 PushV
	func_4325(var_131_int); // 0x1329 NEW_2
	var_132_int = 8; // 0x132b PushI
	var_129_bool = var_131_int == var_132_int; // 0x132c Eq2
	return 0; // 0x132d Return
}


func_4910(var_141_bool)
{
	var_143_int = 0; // 0x132f PushV
	func_4325(var_143_int); // 0x1330 NEW_2
	var_144_int = 9; // 0x1332 PushI
	var_141_bool = var_143_int == var_144_int; // 0x1333 Eq2
	return 0; // 0x1334 Return
}


func_1327(var_0_bool, var_74_bool)
{
	var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0); // 0x52f PushV
	GetDirection(var_77_cvector); // 0x530 Func
	var_79_cvector = CVector(0,0,0); var_80_object = Obj(); // 0x532 PushV
	var_80_object = var_0_bool; // 0x533 MovT
	func_3923(var_80_object); // 0x534 NEW_2
	var_78_cvector = var_79_cvector; // 0x535 Mov
	var_85_float = 0; var_86_cvector = CVector(0,0,0); var_87_cvector = CVector(0,0,0); // 0x537 PushV
	var_86_cvector = var_77_cvector; // 0x538 Mov
	var_87_cvector = var_78_cvector; // 0x539 Mov
	func_4276(var_85_float, var_86_cvector, var_87_cvector); // 0x53a NEW_2
	var_93_float = -0.34202; // 0x53c PushF
	var_74_bool = var_85_float >= var_93_float; // 0x53d GE2
	return 4; // 0x53e Return
}


func_4917(var_147_bool)
{
	var_149_int = 0; // 0x1336 PushV
	func_4325(var_149_int); // 0x1337 NEW_2
	var_150_int = 10; // 0x1339 PushI
	var_147_bool = var_149_int == var_150_int; // 0x133a Eq2
	return 0; // 0x133b Return
}


func_4407(var_23_bool, var_24_object)
{
	var_25_bool = 0; var_26_bool = 0; // 0x1137 PushV
	var_27_bool = 0; // 0x1138 PushV
	var_27_bool = 0; // 0x1139 MovB
	var_28_bool = 0; var_29_object = Obj(); // 0x113a PushV
	var_29_object = var_24_object; // 0x113b Mov
	func_4641(var_28_bool, var_29_object); // 0x113c NEW_2
	if(var_28_bool == 0) goto Label_4421; // 0x113e JumpB
	var_32_bool = 0; var_33_object = Obj(); // 0x113f PushV
	var_33_object = var_24_object; // 0x1140 Mov
	func_3938(var_32_bool, var_33_object); // 0x1141 NEW_2
	if(var_32_bool == 0) goto Label_4421; // 0x1143 JumpB
	var_27_bool = 1; // 0x1144 MovB
	
Label_4421:
	if(var_27_bool == 0) goto Label_4428; // 0x1145 JumpB
	IsWeaponHolstered(var_26_bool); // 0x1146 ObjFunc
	var_36_bool = var_26_bool == 0; // 0x1148 Not
	if(var_36_bool == 0) goto Label_4428; // 0x1149 JumpB
	var_23_bool = 1; // 0x114a MovB
	return 2; // 0x114b Return
	
Label_4428:
	var_23_bool = 0; // 0x114c MovB
	return 2; // 0x114d Return
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


func_4924(var_153_bool)
{
	var_155_int = 0; // 0x133d PushV
	func_4325(var_155_int); // 0x133e NEW_2
	var_156_int = 11; // 0x1340 PushI
	var_153_bool = var_155_int == var_156_int; // 0x1341 Eq2
	return 0; // 0x1342 Return
}


func_4931(var_159_bool)
{
	var_161_int = 0; // 0x1344 PushV
	func_4325(var_161_int); // 0x1345 NEW_2
	var_162_int = 12; // 0x1347 PushI
	var_159_bool = var_161_int == var_162_int; // 0x1348 Eq2
	return 0; // 0x1349 Return
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
	func_4261(var_52_cvector, var_53_cvector); // 0x550 NEW_2
	var_59_float = 0.75; // 0x552 PushF
	var_60_float = var_46_cvector * var_59_float; // 0x553 Mult
	var_51_cvector = var_52_cvector + var_60_float; // 0x554 Add2
	func_4261(var_50_cvector, var_51_cvector); // 0x555 NEW_2
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


func_4938(var_237_bool)
{
	var_239_bool = 0; // 0x134b PushV
	var_239_bool = 0; // 0x134c MovB
	var_240_int = 0; // 0x134d PushV
	func_4334(var_240_int); // 0x134e NEW_2
	var_245_int = 0; // 0x1350 PushI
	var_246_bool = var_240_int >= var_245_int; // 0x1351 GE
	if(var_246_bool == 0) goto Label_4954; // 0x1352 JumpB
	var_247_int = 0; // 0x1353 PushV
	func_4334(var_247_int); // 0x1354 NEW_2
	var_248_int = 12; // 0x1356 PushI
	var_249_bool = var_247_int < var_248_int; // 0x1357 LT
	if(var_249_bool == 0) goto Label_4954; // 0x1358 JumpB
	var_239_bool = 1; // 0x1359 MovB
	
Label_4954:
	if(var_239_bool == 0) goto Label_4957; // 0x135a JumpB
	var_237_bool = 1; // 0x135b MovB
	return 0; // 0x135c Return
	
Label_4957:
	var_237_bool = 0; // 0x135d MovB
	return 0; // 0x135e Return
}


func_4430(var_39_object)
{
	var_40_object = Obj(); // 0x114f PushV
	var_40_object = var_39_object; // 0x1150 Mov
	func_4646(var_40_object); // 0x1151 NEW_2
	return 0; // 0x1153 Return
}


func_3918(var_94_cvector)
{
	var_95_cvector = CVector(0,0,0); var_96_cvector = CVector(0,0,0); // 0xf4e PushV
	GetPosition(var_96_cvector); // 0xf4f Func
	var_94_cvector = var_96_cvector; // 0xf51 Mov
	return 2; // 0xf52 Return
}


func_3923(var_79_cvector)
{
	var_81_cvector = CVector(0,0,0); var_82_cvector = CVector(0,0,0); var_83_cvector = CVector(0,0,0); var_84_cvector = CVector(0,0,0); // 0xf53 PushV
	GetPosition(var_83_cvector); // 0xf54 Func
	GetPosition(var_84_cvector); // 0xf56 ObjFunc
	var_79_cvector = var_84_cvector - var_83_cvector; // 0xf58 Sub2
	return 4; // 0xf59 Return
}


func_4436(var_25_object)
{
	var_26_bool = 0; var_27_object = Obj(); // 0x1155 PushV
	var_27_object = var_25_object; // 0x1156 Mov
	func_3938(var_26_bool, var_27_object); // 0x1157 NEW_2
	if(var_26_bool == 0) goto Label_4448; // 0x1159 JumpB
	var_30_object = Obj(); // 0x115a PushV
	func_4255(var_30_object); // 0x115b NEW_2
	var_33_float = -0.03; // 0x115d PushF
	ReportReputationChange(var_25_object, var_30_object, var_33_float); // 0x115e Func
	
Label_4448:
	return 0; // 0x1160 Return
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


func_3930(var_42_float)
{
	var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); // 0xf5a PushV
	GetPosition(var_47_cvector); // 0xf5b Func
	GetPosition(var_48_cvector); // 0xf5d ObjFunc
	var_49_cvector = var_48_cvector - var_47_cvector; // 0xf5f Sub2
	var_42_float = var_49_cvector | var_49_cvector; // 0xf60 Or2
	return 6; // 0xf61 Return
}


func_4959(var_109_int)
{
	var_110_int = 0; var_111_int = 0; // 0x135f PushV
	var_112_string = "branch"; // 0x1360 PushS
	GetVariable(var_112_string, var_111_int); // 0x1361 Func
	var_113_int = 0; // 0x1363 PushI
	var_114_bool = var_111_int == var_113_int; // 0x1364 Eq
	if(var_114_bool == 0) goto Label_4969; // 0x1365 JumpB
	var_109_int = 1; // 0x1366 MovI
	return 2; // 0x1367 Return
	
Label_4969:
	var_115_int = 1; // 0x1369 PushI
	var_116_bool = var_111_int == var_115_int; // 0x136a Eq
	if(var_116_bool == 0) goto Label_4974; // 0x136b JumpB
	var_109_int = 2; // 0x136c MovI
	return 2; // 0x136d Return
	
Label_4974:
	var_109_int = 3; // 0x136e MovI
	return 2; // 0x136f Return
}


func_4449(var_23_bool, var_24_string)
{
	var_25_object = Obj(); var_26_object = Obj(); // 0x1161 PushV
	var_27_string = "heal"; // 0x1162 PushS
	var_28_bool = var_24_string == var_27_string; // 0x1163 Eq
	if(var_28_bool == 0) goto Label_4463; // 0x1164 JumpB
	var_29_string = "player"; // 0x1165 PushS
	FindActor(var_26_object, var_29_string); // 0x1166 Func
	var_30_bool = 0; var_31_object = Obj(); // 0x1168 PushV
	var_31_object = var_26_object; // 0x1169 Mov
	func_4690(var_31_object); // 0x116a NEW_2
	var_23_bool = var_30_bool; // 0x116b Mov
	return 2; // 0x116d Return
	
Label_4463:
	var_23_bool = 0; // 0x116f MovB
	return 2; // 0x1170 Return
}


func_3938(var_32_bool, var_33_object)
{
	var_34_bool = 0; var_35_bool = 0; // 0xf62 PushV
	IsPlayerActor(var_33_object, var_35_bool); // 0xf63 Func
	var_32_bool = var_35_bool; // 0xf65 Mov
	return 2; // 0xf66 Return
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
	func_3918(var_97_cvector); // 0x586 NEW_2
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
	func_3918(var_109_cvector); // 0x5a1 NEW_2
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


func_3943(var_51_bool, var_52_object, var_53_string)
{
	var_54_bool = 0; var_55_bool = 0; // 0xf67 PushV
	var_56_string = "HasProperty"; // 0xf68 PushS
	var_57_int = 2; // 0xf69 PushI
	var_58_bool = IsFuncExist(var_52_object, var_56_string, var_57_int); // 0xf6a FuncExist
	var_59_bool = var_58_bool == 0; // 0xf6b Not
	if(var_59_bool == 0) goto Label_3951; // 0xf6c JumpB
	var_51_bool = 0; // 0xf6d MovB
	return 2; // 0xf6e Return
	
Label_3951:
	HasProperty(var_53_string, var_55_bool); // 0xf6f ObjFunc
	var_51_bool = var_55_bool; // 0xf71 Mov
	return 2; // 0xf72 Return
}


func_4976(var_40_int)
{
	var_41_int = 0; var_42_int = 0; // 0x1370 PushV
	var_43_string = "branch"; // 0x1371 PushS
	GetVariable(var_43_string, var_42_int); // 0x1372 Func
	var_40_int = var_42_int; // 0x1374 Mov
	return 2; // 0x1375 Return
}


func_4465(var_34_string)
{
	var_35_object = Obj(); var_36_object = Obj(); // 0x1171 PushV
	var_37_string = "heal"; // 0x1172 PushS
	var_38_bool = var_34_string == var_37_string; // 0x1173 Eq
	if(var_38_bool == 0) goto Label_4477; // 0x1174 JumpB
	var_39_string = "player"; // 0x1175 PushS
	FindActor(var_36_object, var_39_string); // 0x1176 Func
	var_40_object = Obj(); // 0x1178 PushV
	var_40_object = var_36_object; // 0x1179 Mov
	func_4693(); // 0x117a NEW_2
	var_36_object = 0; // 0x117c SetNull
	
Label_4477:
	return 2; // 0x117d Return
}


func_3955(var_44_bool)
{
	var_46_bool = 0; var_47_bool = 0; // 0xf73 PushV
	IsDead(var_47_bool); // 0xf74 ObjFunc
	var_44_bool = var_47_bool; // 0xf76 Mov
	return 2; // 0xf77 Return
}


func_4982(var_39_object)
{
	var_40_int = 0; // 0x1377 PushV
	func_4976(var_40_int); // 0x1378 NEW_2
	var_44_int = 1; // 0x137a PushI
	var_45_bool = var_40_int == var_44_int; // 0x137b Eq
	if(var_45_bool == 0) goto Label_4992; // 0x137c JumpB
	WorkWithCorpse(var_39_object); // 0x137d Func
	goto Label_4994; // 0x137f Jump
	
Label_4994:
	return 0; // 0x1382 Return
	
Label_4992:
	Barter(var_39_object); // 0x1380 Func
}


func_375(var_107_float)
{
	var_108_float = 0; var_109_float = 0; // 0x177 PushV
	GetCameraFarDistance(var_109_float); // 0x178 Func
	var_107_float = var_109_float; // 0x17a Mov
	return 2; // 0x17b Return
}


func_3960(var_33_bool, var_34_object)
{
	var_35_object = Obj(); var_36_object = Obj(); var_37_object = Obj(); var_38_object = Obj(); // 0xf78 PushV
	var_39_bool = var_34_object == 0; // 0xf79 NullEq
	if(var_39_bool == 0) goto Label_3965; // 0xf7a JumpB
	var_33_bool = 0; // 0xf7b MovB
	return 4; // 0xf7c Return
	
Label_3965:
	var_40_bool = 0; // 0xf7d PushV
	var_40_bool = 0; // 0xf7e MovB
	var_41_string = "IsDead"; // 0xf7f PushS
	var_42_int = 1; // 0xf80 PushI
	var_43_bool = IsFuncExist(var_34_object, var_41_string, var_42_int); // 0xf81 FuncExist
	if(var_43_bool == 0) goto Label_3977; // 0xf82 JumpB
	var_44_bool = 0; var_45_object = Obj(); // 0xf83 PushV
	var_45_object = var_34_object; // 0xf84 Mov
	func_3955(var_45_object); // 0xf85 NEW_2
	if(var_44_bool == 0) goto Label_3977; // 0xf87 JumpB
	var_40_bool = 1; // 0xf88 MovB
	
Label_3977:
	if(var_40_bool == 0) goto Label_3980; // 0xf89 JumpB
	var_33_bool = 0; // 0xf8a MovB
	return 4; // 0xf8b Return
	
Label_3980:
	GetScene(var_37_object); // 0xf8c Func
	var_48_bool = var_37_object == 0; // 0xf8e NullEq
	if(var_48_bool == 0) goto Label_3986; // 0xf8f JumpB
	var_33_bool = 0; // 0xf90 MovB
	return 4; // 0xf91 Return
	
Label_3986:
	GetScene(var_38_object); // 0xf92 ObjFunc
	var_49_bool = var_37_object != var_38_object; // 0xf94 Neq
	if(var_49_bool == 0) goto Label_3992; // 0xf95 JumpB
	var_33_bool = 0; // 0xf96 MovB
	return 4; // 0xf97 Return
	
Label_3992:
	var_33_bool = 1; // 0xf98 MovB
	return 4; // 0xf99 Return
}


func_4478(var_141_string, var_142_int)
{
	var_143_string = ""; var_144_string = ""; // 0x117e PushV
	var_144_string = "idle"; // 0x117f MovS
	var_145_int = var_142_int; // 0x1180 Push
	if(var_145_int == 0) goto Label_4483; // 0x1181 JumpB
	var_144_string = var_144_string + var_142_int; // 0x1182 Add2
	
Label_4483:
	var_141_string = var_144_string; // 0x1183 Mov
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


func_4995(var_24_bool)
{
	var_25_int = 0; var_26_int = 0; // 0x1383 PushV
	var_27_int = 0; // 0x1384 PushI
	ClearSubContainer(var_27_int); // 0x1385 Func
	var_28_bool = var_24_bool; // 0x1387 Push
	if(var_28_bool == 0) goto Label_5023; // 0x1388 JumpB
	var_29_string = ""; var_30_int = 0; var_31_int = 0; var_32_int = 0; // 0x1389 PushV
	var_29_string = "rifle_ammo"; // 0x138a MovS
	var_30_int = 1; // 0x138b MovI
	var_31_int = 2; // 0x138c MovI
	var_32_int = 2; // 0x138d MovI
	func_4240(var_29_string, var_30_int, var_31_int, var_32_int); // 0x138e NEW_2
	var_45_string = ""; var_46_int = 0; var_47_int = 0; var_48_int = 0; // 0x1390 PushV
	var_45_string = "revolver_ammo"; // 0x1391 MovS
	var_46_int = 1; // 0x1392 MovI
	var_47_int = 2; // 0x1393 MovI
	var_48_int = 2; // 0x1394 MovI
	func_4240(var_45_string, var_46_int, var_47_int, var_48_int); // 0x1395 NEW_2
	var_49_string = ""; var_50_int = 0; var_51_int = 0; var_52_int = 0; // 0x1397 PushV
	var_49_string = "samopal_ammo"; // 0x1398 MovS
	var_50_int = 2; // 0x1399 MovI
	var_51_int = 2; // 0x139a MovI
	var_52_int = 2; // 0x139b MovI
	func_4240(var_49_string, var_50_int, var_51_int, var_52_int); // 0x139c NEW_2
	goto Label_5070; // 0x139e Jump
	
Label_5070:
	return 2; // 0x13ce Return
	
Label_5023:
	var_53_string = ""; var_54_int = 0; var_55_int = 0; // 0x139f PushV
	var_53_string = "lockpick"; // 0x13a0 MovS
	var_54_int = 1; // 0x13a1 MovI
	var_55_int = 4; // 0x13a2 MovI
	func_4229(var_53_string, var_54_int, var_55_int); // 0x13a3 NEW_2
	var_62_string = ""; var_63_int = 0; var_64_int = 0; var_65_int = 0; // 0x13a5 PushV
	var_62_string = "alpha_pills"; // 0x13a6 MovS
	var_63_int = 1; // 0x13a7 MovI
	var_64_int = 2; // 0x13a8 MovI
	var_65_int = 3; // 0x13a9 MovI
	func_4240(var_62_string, var_63_int, var_64_int, var_65_int); // 0x13aa NEW_2
	var_66_string = ""; var_67_int = 0; var_68_int = 0; // 0x13ac PushV
	var_66_string = "meradorm"; // 0x13ad MovS
	var_67_int = 1; // 0x13ae MovI
	var_68_int = 2; // 0x13af MovI
	func_4229(var_66_string, var_67_int, var_68_int); // 0x13b0 NEW_2
	var_69_string = ""; var_70_int = 0; var_71_int = 0; // 0x13b2 PushV
	var_69_string = "powder"; // 0x13b3 MovS
	var_70_int = 1; // 0x13b4 MovI
	var_71_int = 15; // 0x13b5 MovI
	func_4229(var_69_string, var_70_int, var_71_int); // 0x13b6 NEW_2
	var_72_int = 0; // 0x13b8 PushV
	func_4325(var_72_int); // 0x13b9 NEW_2
	var_26_int = var_72_int; // 0x13ba Mov
	var_78_int = 4; // 0x13bc PushI
	var_79_bool = var_26_int >= var_78_int; // 0x13bd GE
	if(var_79_bool == 0) goto Label_5061; // 0x13be JumpB
	var_80_string = ""; var_81_int = 0; var_82_int = 0; // 0x13bf PushV
	var_80_string = "beta_pills"; // 0x13c0 MovS
	var_81_int = 1; // 0x13c1 MovI
	var_82_int = 2; // 0x13c2 MovI
	func_4229(var_80_string, var_81_int, var_82_int); // 0x13c3 NEW_2
	
Label_5061:
	var_83_int = 6; // 0x13c5 PushI
	var_84_bool = var_26_int >= var_83_int; // 0x13c6 GE
	if(var_84_bool == 0) goto Label_5070; // 0x13c7 JumpB
	var_85_string = ""; var_86_int = 0; var_87_int = 0; // 0x13c8 PushV
	var_85_string = "gamma_pills"; // 0x13c9 MovS
	var_86_int = 1; // 0x13ca MovI
	var_87_int = 7; // 0x13cb MovI
	func_4229(var_85_string, var_86_int, var_87_int); // 0x13cc NEW_2
}


func_4485(var_135_int)
{
	var_136_int = 0; var_137_bool = 0; var_138_int = 0; var_139_bool = 0; // 0x1185 PushV
	var_138_int = 0; // 0x1186 MovI
	
Label_4487:
	var_140_string = "all"; // 0x1187 PushS
	var_141_string = ""; var_142_int = 0; // 0x1188 PushV
	var_142_int = var_138_int; // 0x1189 Mov
	func_4478(var_141_string, var_142_int); // 0x118a NEW_2
	HasAnimation(var_139_bool, var_140_string, var_141_string); // 0x118c Func
	var_146_bool = var_139_bool == 0; // 0x118e Not
	if(var_146_bool == 0) goto Label_4497; // 0x118f JumpB
	goto Label_4500; // 0x1190 Jump
	
Label_4500:
	var_135_int = var_138_int; // 0x1194 Mov
	return 4; // 0x1195 Return
	
Label_4497:
	var_147_int = 1; // 0x1191 PushI
	var_138_int = var_138_int + var_147_int; // 0x1192 Add2
	goto Label_4487; // 0x1193 Jump
}


func_394(var_0_bool, var_1_bool)
{
	var_0_bool = 1; // 0x18a TMovB
	var_1_bool = 1; // 0x18b TMovB
	Stop(); // 0x18c Func
	StopGroup0(); // 0x18e Func
	return 0; // 0x190 Return
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


func_4502(var_65_int)
{
	var_67_bool = 0; // 0x1197 PushV
	func_5129(var_67_bool); // 0x1198 NEW_2
	if(var_67_bool == 0) goto Label_4509; // 0x119a JumpB
	var_65_int = 2; // 0x119b MovI
	goto Label_4510; // 0x119c Jump
	
Label_4510:
	return 0; // 0x119e Return
	
Label_4509:
	var_65_int = 0; // 0x119d MovI
}


func_3996(var_29_bool, var_30_object)
{
	var_31_int = 0; var_32_int = 0; // 0xf9c PushV
	var_33_bool = 0; var_34_object = Obj(); // 0xf9d PushV
	var_34_object = var_30_object; // 0xf9e Mov
	func_3960(var_33_bool, var_34_object); // 0xf9f NEW_2
	var_50_bool = var_33_bool == 0; // 0xfa1 Not
	if(var_50_bool == 0) goto Label_4005; // 0xfa2 JumpB
	var_29_bool = 0; // 0xfa3 MovB
	return 2; // 0xfa4 Return
	
Label_4005:
	var_51_bool = 0; var_52_object = Obj(); var_53_string = ""; // 0xfa5 PushV
	var_52_object = var_30_object; // 0xfa6 Mov
	var_53_string = "noaccess"; // 0xfa7 MovS
	func_3943(var_51_bool, var_52_object, var_53_string); // 0xfa8 NEW_2
	var_60_bool = var_51_bool == 0; // 0xfaa Not
	if(var_60_bool == 0) goto Label_4014; // 0xfab JumpB
	var_29_bool = 1; // 0xfac MovB
	return 2; // 0xfad Return
	
Label_4014:
	var_61_string = "noaccess"; // 0xfae PushS
	GetProperty(var_61_string, var_32_int); // 0xfaf ObjFunc
	var_62_int = 0; // 0xfb1 PushI
	var_29_bool = var_32_int == var_62_int; // 0xfb2 Eq2
	return 2; // 0xfb3 Return
}


func_4511(var_73_object)
{
	var_74_object = Obj(); // 0x11a0 PushV
	var_74_object = var_73_object; // 0x11a1 Mov
	TaskCall(3); // 0x11a2 TaskCall
	func_659(var_75_object, var_74_object); // 0x11a3 NEW_2
	TaskReturn(); // 0x11a4 TaskReturn
	return 0; // 0x11a6 Return
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


func_4519(var_34_int, var_35_object)
{
	var_36_bool = 0; var_37_object = Obj(); // 0x11a8 PushV
	var_37_object = var_35_object; // 0x11a9 Mov
	func_3996(var_36_bool, var_37_object); // 0x11aa NEW_2
	if(var_36_bool == 0) goto Label_4527; // 0x11ac JumpB
	var_34_int = 2; // 0x11ad MovI
	goto Label_4528; // 0x11ae Jump
	
Label_4528:
	return 0; // 0x11b0 Return
	
Label_4527:
	var_34_int = 0; // 0x11af MovI
}


func_4529(var_76_object)
{
	var_77_object = Obj(); // 0x11b2 PushV
	var_77_object = var_76_object; // 0x11b3 Mov
	TaskCall(4); // 0x11b4 TaskCall
	func_934(var_77_object); // 0x11b5 NEW_2
	TaskReturn(); // 0x11b6 TaskReturn
	return 0; // 0x11b8 Return
}


func_4020()
{
	var_99_cvector = CVector(0,0,0); var_100_cvector = CVector(0,0,0); var_101_cvector = CVector(0,0,0); var_102_cvector = CVector(0,0,0); var_103_cvector = CVector(0,0,0); var_104_cvector = CVector(0,0,0); // 0xfb4 PushV
	GetPosition(var_102_cvector); // 0xfb5 ObjFunc
	GetPosition(var_103_cvector); // 0xfb7 Func
	var_104_cvector = var_102_cvector - var_103_cvector; // 0xfb9 Sub2
	var_105_float = GetByIndex(var_104_cvector, 0); // 0xfba PushE
	var_106_float = GetByIndex(var_104_cvector, 2); // 0xfbb PushE
	RotateAsync(var_105_float, var_106_float); // 0xfbc Func
	return 6; // 0xfbe Return
}


func_4537(var_76_int, var_77_object)
{
	var_79_bool = 0; var_80_object = Obj(); // 0x11ba PushV
	var_80_object = var_77_object; // 0x11bb Mov
	func_3996(var_79_bool, var_80_object); // 0x11bc NEW_2
	if(var_79_bool == 0) goto Label_4545; // 0x11be JumpB
	var_76_int = 2; // 0x11bf MovI
	goto Label_4546; // 0x11c0 Jump
	
Label_4546:
	return 0; // 0x11c2 Return
	
Label_4545:
	var_76_int = 0; // 0x11c1 MovI
}


func_4031(var_88_bool)
{
	var_89_bool = 0; var_90_bool = 0; // 0xfbf PushV
	IsLoaded(var_90_bool); // 0xfc0 Func
	var_88_bool = var_90_bool; // 0xfc2 Mov
	return 2; // 0xfc3 Return
}


func_4547(var_113_object)
{
	var_114_object = Obj(); // 0x11c4 PushV
	var_114_object = var_113_object; // 0x11c5 Mov
	TaskCall(5); // 0x11c6 TaskCall
	func_1186(var_115_object, var_116_cvector, var_117_bool, var_114_object); // 0x11c7 NEW_2
	TaskReturn(); // 0x11c8 TaskReturn
	return 0; // 0x11ca Return
}


func_4036(var_58_bool, var_60_float)
{
	var_61_float = 0; var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); var_66_cvector = CVector(0,0,0); var_67_cvector = CVector(0,0,0); var_68_bool = 0; var_69_bool = 0; var_70_float = 0; var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); var_73_cvector = CVector(0,0,0); var_74_cvector = CVector(0,0,0); var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0); var_77_bool = 0; var_78_bool = 0; // 0xfc4 PushV
	GetPosition(var_71_cvector); // 0xfc5 ObjFunc
	GetEyesHeight(var_70_float); // 0xfc7 ObjFunc
	var_79_float = GetByIndex(var_71_cvector, 1); // 0xfc9 PushE
	var_79_float = var_79_float + var_70_float; // 0xfca Add2
	SetByIndex(var_71_cvector, 1) = var_79_float; // 0xfcb PopE
	GetPosition(var_72_cvector); // 0xfcc Func
	GetEyesHeight(var_70_float); // 0xfce Func
	var_80_float = GetByIndex(var_72_cvector, 1); // 0xfd0 PushE
	var_80_float = var_80_float + var_70_float; // 0xfd1 Add2
	SetByIndex(var_72_cvector, 1) = var_80_float; // 0xfd2 PopE
	var_73_cvector = var_71_cvector - var_72_cvector; // 0xfd3 Sub2
	var_81_float = GetByIndex(var_73_cvector, 1); // 0xfd4 PushE
	var_81_float = 0; // 0xfd5 MovI
	SetByIndex(var_73_cvector, 1) = var_81_float; // 0xfd6 PopE
	var_82_int = var_73_cvector | var_73_cvector; // 0xfd7 Or
	var_83_float = sqrt(var_82_int); // 0xfd8 Sqrt
	var_73_cvector = var_73_cvector / var_73_cvector; // 0xfd9 Div2
	var_74_cvector = -var_73_cvector; // 0xfda Neg2
	var_84_float = var_73_cvector * var_60_float; // 0xfdb Mult
	var_85_cvector = CVector(0,0,0); var_86_cvector = CVector(0,0,0); // 0xfdc PushV
	var_87_cvector = CVector(0.0, 1.0, 0.0); // 0xfdd PushVec
	var_86_cvector = var_74_cvector ^ var_87_cvector; // 0xfde Xor2
	func_4261(var_85_cvector, var_86_cvector); // 0xfdf NEW_2
	var_93_int = 25; // 0xfe1 PushI
	var_94_float = var_85_cvector * var_93_int; // 0xfe2 Mult
	var_95_int = var_84_float + var_94_float; // 0xfe3 Add
	var_96_cvector = CVector(0.0, 10.0, 0.0); // 0xfe4 PushVec
	var_75_cvector = var_95_int - var_96_cvector; // 0xfe5 Sub2
	var_76_cvector = var_72_cvector + var_75_cvector; // 0xfe6 Add2
	IsOverrideActive(var_77_bool); // 0xfe7 Func
	var_97_bool = var_77_bool; // 0xfe9 Push
	if(var_97_bool == 0) goto Label_4077; // 0xfea JumpB
	var_58_bool = 0; // 0xfeb MovB
	return 18; // 0xfec Return
	
Label_4077:
	StopWorld(); // 0xfed Func
	CameraTransit(var_76_cvector, var_74_cvector); // 0xfef Func
	var_98_float = GetByIndex(var_75_cvector, 0); // 0xff1 PushE
	var_99_float = GetByIndex(var_75_cvector, 2); // 0xff2 PushE
	Rotate(var_98_float, var_99_float); // 0xff3 Func
	var_100_bool = 0; // 0xff5 PushV
	func_5079(var_100_bool); // 0xff6 NEW_2
	if(var_100_bool == 0) goto Label_4090; // 0xff8 JumpB
	goto Label_4098; // 0xff9 Jump
	
Label_4098:
	CameraWaitForPlayFinish(); // 0x1002 Func
	ResumeWorld(); // 0x1004 Func
	var_58_bool = 1; // 0x1006 MovB
	return 18; // 0x1007 Return
	
Label_4090:
	var_101_string = "head"; // 0xffa PushS
	HasAnimationTrack(var_78_bool, var_101_string); // 0xffb Func
	var_102_bool = var_78_bool; // 0xffd Push
	if(var_102_bool == 0) goto Label_4098; // 0xffe JumpB
	var_103_string = "head"; // 0xfff PushS
	LookAsyncCamera(var_103_string); // 0x1000 Func
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
	func_4261(var_52_cvector, var_53_cvector); // 0x3d3 NEW_2
	var_59_float = 0.75; // 0x3d5 PushF
	var_60_float = var_46_cvector * var_59_float; // 0x3d6 Mult
	var_51_cvector = var_52_cvector + var_60_float; // 0x3d7 Add2
	func_4261(var_50_cvector, var_51_cvector); // 0x3d8 NEW_2
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


func_4555(var_31_bool, var_32_object, var_33_object, var_34_float)
{
	var_35_string = ""; var_36_bool = 0; var_37_string = ""; var_38_bool = 0; // 0x11cb PushV
	var_39_bool = 0; var_40_object = Obj(); var_41_string = ""; // 0x11cc PushV
	var_40_object = var_33_object; // 0x11cd Mov
	var_41_string = "class"; // 0x11ce MovS
	func_3943(var_39_bool, var_40_object, var_41_string); // 0x11cf NEW_2
	var_48_bool = var_39_bool == 0; // 0x11d1 Not
	if(var_48_bool == 0) goto Label_4565; // 0x11d2 JumpB
	var_31_bool = 0; // 0x11d3 MovB
	return 4; // 0x11d4 Return
	
Label_4565:
	var_49_string = "class"; // 0x11d5 PushS
	GetProperty(var_49_string, var_37_string); // 0x11d6 ObjFunc
	var_50_string = "rat"; // 0x11d8 PushS
	var_51_bool = var_37_string == var_50_string; // 0x11d9 Eq
	if(var_51_bool == 0) goto Label_4574; // 0x11da JumpB
	var_31_bool = 0; // 0x11db MovB
	return 4; // 0x11dc Return
	
Label_4574:
	var_52_string = "rat_big"; // 0x11de PushS
	var_53_bool = var_37_string == var_52_string; // 0x11df Eq
	if(var_53_bool == 0) goto Label_4580; // 0x11e0 JumpB
	var_31_bool = 0; // 0x11e1 MovB
	return 4; // 0x11e2 Return
	
Label_4580:
	var_54_string = "dog"; // 0x11e4 PushS
	var_55_bool = var_37_string == var_54_string; // 0x11e5 Eq
	if(var_55_bool == 0) goto Label_4585; // 0x11e6 JumpB
	var_31_bool = 0; // 0x11e7 MovB
	return 4; // 0x11e8 Return
	
Label_4585:
	CanSee(var_38_bool, var_32_object); // 0x11e9 Func
	var_56_bool = 0; // 0x11eb PushV
	var_56_bool = 1; // 0x11ec MovB
	var_57_bool = var_38_bool; // 0x11ed Push
	if(var_57_bool == 0) goto Label_4599; // 0x11ee JumpB
	var_58_float = 0; var_59_object = Obj(); // 0x11ef PushV
	var_59_object = var_32_object; // 0x11f0 Mov
	func_3930(var_59_object); // 0x11f1 NEW_2
	var_66_float = var_34_float * var_34_float; // 0x11f3 Mult
	var_67_bool = var_58_float <= var_66_float; // 0x11f4 LE
	if(var_67_bool == 0) goto Label_4599; // 0x11f5 JumpB
	var_56_bool = 0; // 0x11f6 MovB
	
Label_4599:
	if(var_56_bool == 0) goto Label_4602; // 0x11f7 JumpB
	var_31_bool = 1; // 0x11f8 MovB
	return 4; // 0x11f9 Return
	
Label_4602:
	CanSee(var_38_bool, var_33_object); // 0x11fa Func
	var_68_bool = 0; // 0x11fc PushV
	var_68_bool = 1; // 0x11fd MovB
	var_69_bool = var_38_bool; // 0x11fe Push
	if(var_69_bool == 0) goto Label_4616; // 0x11ff JumpB
	var_70_float = 0; var_71_object = Obj(); // 0x1200 PushV
	var_71_object = var_33_object; // 0x1201 Mov
	func_3930(var_71_object); // 0x1202 NEW_2
	var_72_float = var_34_float * var_34_float; // 0x1204 Mult
	var_73_bool = var_70_float <= var_72_float; // 0x1205 LE
	if(var_73_bool == 0) goto Label_4616; // 0x1206 JumpB
	var_68_bool = 0; // 0x1207 MovB
	
Label_4616:
	if(var_68_bool == 0) goto Label_4619; // 0x1208 JumpB
	var_31_bool = 1; // 0x1209 MovB
	return 4; // 0x120a Return
	
Label_4619:
	var_31_bool = 0; // 0x120b MovB
	return 4; // 0x120c Return
}


func_5071(var_106_int)
{
	var_106_int = 515560; // 0x13cf MovI
	return 0; // 0x13d0 Return
}


func_5073(var_105_int)
{
	var_105_int = 503345; // 0x13d1 MovI
	return 0; // 0x13d2 Return
}


func_5075(var_107_string)
{
	var_107_string = "ui/NPC_Citizen3.png"; // 0x13d3 MovS
	return 0; // 0x13d4 Return
}


func_5077(var_108_string)
{
	var_108_string = "ui/NPC_Citizen3_b.png"; // 0x13d5 MovS
	return 0; // 0x13d6 Return
}


func_5079(var_25_bool)
{
	var_25_bool = 0; // 0x13d7 MovB
	return 0; // 0x13d8 Return
}


func_5081()
{
	var_23_bool = GlobalVars[0]; // 0x13d9 PushGE
	var_23_bool = 0; // 0x13da MovB
	GlobalVars[0] = var_23_bool; // 0x13db PopGE
	var_24_bool = 0; // 0x13dc PushV
	var_24_bool = 1; // 0x13dd MovB
	func_4995(var_24_bool); // 0x13de NEW_2
	return 0; // 0x13e0 Return
}


func_1505(var_2_bool)
{
	Stop(); // 0x5e1 Func
	var_23_int = 120; // 0x5e3 PushI
	KillTimer(var_23_int); // 0x5e4 Func
	var_2_bool = 1; // 0x5e6 TMovB
	return 0; // 0x5e7 Return
}


func_5089(var_34_object, var_49_object)
{
	var_35_bool = 0; var_36_bool = 0; // 0x13e1 PushV
	var_37_bool = GlobalVars[0]; // 0x13e2 PushGE
	if(var_37_bool == 0) goto Label_5102; // 0x13e3 JumpB
	IsOverrideActive(var_36_bool); // 0x13e4 Func
	var_38_bool = var_36_bool == 0; // 0x13e6 Not
	if(var_38_bool == 0) goto Label_5100; // 0x13e7 JumpB
	var_39_object = Obj(); // 0x13e8 PushV
	var_39_object = var_34_object; // 0x13e9 Mov
	func_4982(var_39_object); // 0x13ea NEW_2
	
Label_5100:
	return 2; // 0x13ec Return
	
Label_5102:
	var_46_int = 1000; // 0x13ee PushI
	var_47_int = 0; var_48_object = Obj(); // 0x13ef PushV
	var_48_object = var_34_object; // 0x13f0 Mov
	TaskCall(8); // 0x13f1 TaskCall
	func_1731(var_49_object, var_47_int, var_48_object); // 0x13f2 NEW_2
	TaskReturn(); // 0x13f3 TaskReturn
	var_362_bool = var_46_int == var_49_object; // 0x13f5 Eq
	if(var_362_bool == 0) goto Label_5128; // 0x13f6 JumpB
	var_363_bool = 0; var_364_object = Obj(); // 0x13f7 PushV
	var_364_object = var_34_object; // 0x13f8 Mov
	func_4121(var_363_bool, var_364_object); // 0x13f9 NEW_2
	var_394_bool = var_363_bool == 0; // 0x13fb Not
	if(var_394_bool == 0) goto Label_5118; // 0x13fc JumpB
	return 2; // 0x13fd Return
	
Label_5118:
	var_395_object = Obj(); // 0x13fe PushV
	var_395_object = var_34_object; // 0x13ff Mov
	TaskCall(0); // 0x1400 TaskCall
	func_0(var_395_object); // 0x1401 NEW_2
	TaskReturn(); // 0x1402 TaskReturn
	var_402_object = Obj(); // 0x1404 PushV
	var_402_object = var_34_object; // 0x1405 Mov
	func_4176(); // 0x1406 NEW_2
	
Label_5128:
	return 2; // 0x1408 Return
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
	func_3918(var_140_cvector); // 0x409 NEW_2
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
	func_3918(var_152_cvector); // 0x424 NEW_2
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
	func_3923(var_80_object); // 0x5f6 NEW_2
	var_78_cvector = var_79_cvector; // 0x5f7 Mov
	var_85_float = 0; var_86_cvector = CVector(0,0,0); var_87_cvector = CVector(0,0,0); // 0x5f9 PushV
	var_86_cvector = var_77_cvector; // 0x5fa Mov
	var_87_cvector = var_78_cvector; // 0x5fb Mov
	func_4276(var_85_float, var_86_cvector, var_87_cvector); // 0x5fc NEW_2
	var_93_float = -0.34202; // 0x5fe PushF
	var_74_bool = var_85_float >= var_93_float; // 0x5ff GE2
	return 4; // 0x600 Return
}


