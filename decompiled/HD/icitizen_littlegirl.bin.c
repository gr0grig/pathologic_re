task_0_event_11(var_0_bool, var_1_int, var_2_bool, var_3_bool, var_4_bool, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	var_23_bool = 0; // 0x1b PushV
	func_4009(var_23_bool); // 0x1c NEW_2
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
	func_3586(var_26_object); // 0x43 NEW_2
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
	func_3589(var_32_object); // 0x51 NEW_2
	
Label_83:
	return 2; // 0x53 Return
}


task_1_event_17(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	var_23_int = 0; var_24_int = 0; // 0x54 PushV
	var_25_object = Obj(); // 0x55 PushV
	var_25_object = var_22_bool; // 0x56 Mov
	func_3401(var_25_object); // 0x57 NEW_2
	var_34_int = 0; var_35_object = Obj(); // 0x59 PushV
	var_35_object = var_22_bool; // 0x5a Mov
	func_3484(var_34_int, var_35_object); // 0x5b NEW_2
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
	func_3494(var_75_object); // 0x69 NEW_2
	
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
	func_4061(var_28_object, var_29_object, var_30_bool); // 0x71 NEW_2
	if(var_27_bool == 0) goto Label_135; // 0x73 JumpB
	var_76_int = 0; var_77_object = Obj(); var_78_bool = 0; // 0x74 PushV
	var_77_object = var_22_object; // 0x75 Mov
	var_78_bool = var_24_bool; // 0x76 Mov
	func_3502(var_77_object, var_78_bool); // 0x77 NEW_2
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
	func_3512(var_112_object); // 0x85 NEW_2
	
Label_135:
	return 2; // 0x87 Return
}


task_1_event_40(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	var_23_int = 0; var_24_int = 0; // 0x88 PushV
	var_25_int = 0; var_26_object = Obj(); // 0x89 PushV
	var_26_object = var_22_bool; // 0x8a Mov
	func_3596(var_26_object); // 0x8b NEW_2
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
	func_3599(); // 0x99 NEW_2
	
Label_155:
	return 2; // 0x9b Return
}


task_1_event_42(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_string, var_6_object, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_object, var_21_object, var_22_string, var_23_bool)
{
	var_24_int = 0; var_25_int = 0; // 0x9c PushV
	var_26_bool = 0; var_27_object = Obj(); var_28_string = ""; // 0x9d PushV
	var_27_object = var_22_string; // 0x9e Mov
	var_28_string = var_23_bool; // 0x9f Mov
	func_3315(var_26_bool, var_27_object, var_28_string); // 0xa0 NEW_2
	if(var_26_bool == 0) goto Label_172; // 0xa2 JumpB
	func_251(var_25_int); // 0xa4 NEW_2
	var_59_object = Obj(); var_60_string = ""; // 0xa6 PushV
	var_59_object = var_22_string; // 0xa7 Mov
	var_60_string = var_23_bool; // 0xa8 Mov
	func_3347(var_59_object, var_60_string); // 0xa9 NEW_2
	goto Label_192; // 0xab Jump
	
Label_192:
	return 2; // 0xc0 Return
	
Label_172:
	var_208_int = 0; var_209_string = ""; var_210_object = Obj(); // 0xac PushV
	var_209_string = var_23_bool; // 0xad Mov
	var_210_object = var_22_string; // 0xae Mov
	func_3601(var_210_object); // 0xaf NEW_2
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
	func_3604(); // 0xbe NEW_2
}


task_1_event_26(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_string, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	var_23_bool = 0; var_24_string = ""; // 0xc2 PushV
	var_24_string = var_22_bool; // 0xc3 Mov
	func_3414(var_23_bool, var_24_string); // 0xc4 NEW_2
	if(var_23_bool == 0) goto Label_206; // 0xc6 JumpB
	func_251(var_22_bool); // 0xc8 NEW_2
	var_33_string = ""; // 0xca PushV
	var_33_string = var_22_bool; // 0xcb Mov
	func_3430(var_33_string); // 0xcc NEW_2
	
Label_206:
	return 0; // 0xce Return
}


task_1_event_1(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	var_23_bool = 0; var_24_object = Obj(); // 0xd0 PushV
	var_24_object = var_22_bool; // 0xd1 Mov
	func_3372(var_23_bool, var_24_object); // 0xd2 NEW_2
	if(var_23_bool == 0) goto Label_221; // 0xd4 JumpB
	func_251(var_22_bool); // 0xd6 NEW_2
	var_38_object = Obj(); // 0xd8 PushV
	var_38_object = var_22_bool; // 0xd9 Mov
	func_3395(var_38_object); // 0xda NEW_2
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
	func_3595(); // 0xf8 NEW_2
	return 0; // 0xfa Return
}


task_1_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	func_251(var_22_bool); // 0x10d NEW_2
	var_24_object = Obj(); // 0x10f PushV
	var_24_object = var_22_bool; // 0x110 Mov
	func_3309(); // 0x111 NEW_2
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
	func_3586(var_26_object); // 0x19c NEW_2
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
	func_3589(var_31_object); // 0x1aa NEW_2
	
Label_428:
	return 2; // 0x1ac Return
}


task_2_event_17(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	var_23_int = 0; var_24_int = 0; // 0x1ad PushV
	var_25_object = Obj(); // 0x1ae PushV
	var_25_object = var_22_bool; // 0x1af Mov
	func_3401(var_25_object); // 0x1b0 NEW_2
	var_34_int = 0; var_35_object = Obj(); // 0x1b2 PushV
	var_35_object = var_22_bool; // 0x1b3 Mov
	func_3484(var_34_int, var_35_object); // 0x1b4 NEW_2
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
	func_3494(var_74_object); // 0x1c2 NEW_2
	
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
	func_4061(var_28_object, var_29_object, var_30_bool); // 0x1ca NEW_2
	if(var_27_bool == 0) goto Label_480; // 0x1cc JumpB
	var_76_int = 0; var_77_object = Obj(); var_78_bool = 0; // 0x1cd PushV
	var_77_object = var_22_object; // 0x1ce Mov
	var_78_bool = var_24_bool; // 0x1cf Mov
	func_3502(var_77_object, var_78_bool); // 0x1d0 NEW_2
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
	func_3512(var_111_object); // 0x1de NEW_2
	
Label_480:
	return 2; // 0x1e0 Return
}


task_2_event_40(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	var_23_int = 0; var_24_int = 0; // 0x1e1 PushV
	var_25_int = 0; var_26_object = Obj(); // 0x1e2 PushV
	var_26_object = var_22_bool; // 0x1e3 Mov
	func_3596(var_26_object); // 0x1e4 NEW_2
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
	func_3599(); // 0x1f2 NEW_2
	
Label_500:
	return 2; // 0x1f4 Return
}


task_2_event_42(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_string, var_6_object, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_object, var_21_object, var_22_string, var_23_bool)
{
	var_24_int = 0; var_25_int = 0; // 0x1f5 PushV
	var_26_bool = 0; var_27_object = Obj(); var_28_string = ""; // 0x1f6 PushV
	var_27_object = var_22_string; // 0x1f7 Mov
	var_28_string = var_23_bool; // 0x1f8 Mov
	func_3315(var_26_bool, var_27_object, var_28_string); // 0x1f9 NEW_2
	if(var_26_bool == 0) goto Label_517; // 0x1fb JumpB
	func_654(); // 0x1fd NEW_2
	var_58_object = Obj(); var_59_string = ""; // 0x1ff PushV
	var_58_object = var_22_string; // 0x200 Mov
	var_59_string = var_23_bool; // 0x201 Mov
	func_3347(var_58_object, var_59_string); // 0x202 NEW_2
	goto Label_537; // 0x204 Jump
	
Label_537:
	return 2; // 0x219 Return
	
Label_517:
	var_207_int = 0; var_208_string = ""; var_209_object = Obj(); // 0x205 PushV
	var_208_string = var_23_bool; // 0x206 Mov
	var_209_object = var_22_string; // 0x207 Mov
	func_3601(var_209_object); // 0x208 NEW_2
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
	func_3604(); // 0x217 NEW_2
}


task_2_event_26(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_string, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	var_23_bool = 0; var_24_string = ""; // 0x21b PushV
	var_24_string = var_22_bool; // 0x21c Mov
	func_3414(var_23_bool, var_24_string); // 0x21d NEW_2
	if(var_23_bool == 0) goto Label_551; // 0x21f JumpB
	func_654(); // 0x221 NEW_2
	var_32_string = ""; // 0x223 PushV
	var_32_string = var_22_bool; // 0x224 Mov
	func_3430(var_32_string); // 0x225 NEW_2
	
Label_551:
	return 0; // 0x227 Return
}


task_2_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool)
{
	func_654(); // 0x229 NEW_2
	func_3595(); // 0x22c NEW_2
	return 0; // 0x22e Return
}


task_2_event_1(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	var_23_bool = 0; var_24_object = Obj(); // 0x230 PushV
	var_24_object = var_22_bool; // 0x231 Mov
	func_3372(var_23_bool, var_24_object); // 0x232 NEW_2
	if(var_23_bool == 0) goto Label_572; // 0x234 JumpB
	func_654(); // 0x236 NEW_2
	var_37_object = Obj(); // 0x238 PushV
	var_37_object = var_22_bool; // 0x239 Mov
	func_3395(var_37_object); // 0x23a NEW_2
	
Label_572:
	return 0; // 0x23c Return
}


task_3_event_0(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	var_23_int = 0; var_24_int = 0; // 0x2cb PushV
	var_25_int = 0; var_26_object = Obj(); // 0x2cc PushV
	var_26_object = var_22_bool; // 0x2cd Mov
	func_3586(var_26_object); // 0x2ce NEW_2
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
	func_3589(var_33_object); // 0x2dc NEW_2
	
Label_734:
	return 2; // 0x2de Return
}


task_3_event_17(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	var_23_int = 0; var_24_int = 0; // 0x2df PushV
	var_25_object = Obj(); // 0x2e0 PushV
	var_25_object = var_22_bool; // 0x2e1 Mov
	func_3401(var_25_object); // 0x2e2 NEW_2
	var_34_int = 0; var_35_object = Obj(); // 0x2e4 PushV
	var_35_object = var_22_bool; // 0x2e5 Mov
	func_3484(var_34_int, var_35_object); // 0x2e6 NEW_2
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
	func_3494(var_76_object); // 0x2f4 NEW_2
	
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
	func_4061(var_28_object, var_29_object, var_30_bool); // 0x2fc NEW_2
	if(var_27_bool == 0) goto Label_786; // 0x2fe JumpB
	var_76_int = 0; var_77_object = Obj(); var_78_bool = 0; // 0x2ff PushV
	var_77_object = var_22_object; // 0x300 Mov
	var_78_bool = var_24_bool; // 0x301 Mov
	func_3502(var_77_object, var_78_bool); // 0x302 NEW_2
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
	func_3512(var_113_object); // 0x310 NEW_2
	
Label_786:
	return 2; // 0x312 Return
}


task_3_event_40(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	var_23_int = 0; var_24_int = 0; // 0x313 PushV
	var_25_int = 0; var_26_object = Obj(); // 0x314 PushV
	var_26_object = var_22_bool; // 0x315 Mov
	func_3596(var_26_object); // 0x316 NEW_2
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
	func_3599(); // 0x324 NEW_2
	
Label_806:
	return 2; // 0x326 Return
}


task_3_event_42(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_string, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_object, var_21_object, var_22_string, var_23_bool)
{
	var_24_int = 0; var_25_int = 0; // 0x327 PushV
	var_26_bool = 0; var_27_object = Obj(); var_28_string = ""; // 0x328 PushV
	var_27_object = var_22_string; // 0x329 Mov
	var_28_string = var_23_bool; // 0x32a Mov
	func_3315(var_26_bool, var_27_object, var_28_string); // 0x32b NEW_2
	if(var_26_bool == 0) goto Label_823; // 0x32d JumpB
	func_858(); // 0x32f NEW_2
	var_60_object = Obj(); var_61_string = ""; // 0x331 PushV
	var_60_object = var_22_string; // 0x332 Mov
	var_61_string = var_23_bool; // 0x333 Mov
	func_3347(var_60_object, var_61_string); // 0x334 NEW_2
	goto Label_843; // 0x336 Jump
	
Label_843:
	return 2; // 0x34b Return
	
Label_823:
	var_209_int = 0; var_210_string = ""; var_211_object = Obj(); // 0x337 PushV
	var_210_string = var_23_bool; // 0x338 Mov
	var_211_object = var_22_string; // 0x339 Mov
	func_3601(var_211_object); // 0x33a NEW_2
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
	func_3604(); // 0x349 NEW_2
}


task_3_event_26(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_string, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	var_23_bool = 0; var_24_string = ""; // 0x34d PushV
	var_24_string = var_22_bool; // 0x34e Mov
	func_3414(var_23_bool, var_24_string); // 0x34f NEW_2
	if(var_23_bool == 0) goto Label_857; // 0x351 JumpB
	func_858(); // 0x353 NEW_2
	var_34_string = ""; // 0x355 PushV
	var_34_string = var_22_bool; // 0x356 Mov
	func_3430(var_34_string); // 0x357 NEW_2
	
Label_857:
	return 0; // 0x359 Return
}


task_3_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	func_858(); // 0x367 NEW_2
	var_25_object = Obj(); // 0x369 PushV
	var_25_object = var_22_bool; // 0x36a Mov
	func_3309(); // 0x36b NEW_2
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
	func_2957(var_29_bool, var_30_object); // 0x375 NEW_2
	var_63_bool = var_29_bool == 0; // 0x377 Not
	if(var_63_bool == 0) goto Label_893; // 0x378 JumpB
	func_858(); // 0x37a NEW_2
	return 4; // 0x37c Return
	
Label_893:
	GetDirection(var_25_cvector); // 0x37d Func
	var_66_cvector = CVector(0,0,0); var_67_object = Obj(); // 0x37f PushV
	var_67_object = var_0_bool; // 0x380 MovT
	func_2884(var_67_object); // 0x381 NEW_2
	var_26_cvector = var_66_cvector; // 0x382 Mov
	var_72_float = 0; var_73_cvector = CVector(0,0,0); var_74_cvector = CVector(0,0,0); // 0x384 PushV
	var_73_cvector = var_25_cvector; // 0x385 Mov
	var_74_cvector = var_26_cvector; // 0x386 Mov
	func_3268(var_72_float, var_73_cvector, var_74_cvector); // 0x387 NEW_2
	var_96_float = 0.5; // 0x389 PushF
	var_97_bool = var_72_float < var_96_float; // 0x38a LT
	if(var_97_bool == 0) goto Label_912; // 0x38b JumpB
	var_98_object = Obj(); // 0x38c PushV
	var_98_object = var_0_bool; // 0x38d MovT
	func_2981(); // 0x38e NEW_2
	
Label_912:
	return 4; // 0x390 Return
}


task_3_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool)
{
	func_858(); // 0x392 NEW_2
	func_3595(); // 0x395 NEW_2
	return 0; // 0x397 Return
}


task_3_event_1(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	var_23_bool = 0; var_24_object = Obj(); // 0x399 PushV
	var_24_object = var_22_bool; // 0x39a Mov
	func_3372(var_23_bool, var_24_object); // 0x39b NEW_2
	if(var_23_bool == 0) goto Label_933; // 0x39d JumpB
	func_858(); // 0x39f NEW_2
	var_39_object = Obj(); // 0x3a1 PushV
	var_39_object = var_22_bool; // 0x3a2 Mov
	func_3395(var_39_object); // 0x3a3 NEW_2
	
Label_933:
	return 0; // 0x3a5 Return
}


task_4_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool)
{
	func_1124(var_21_bool); // 0x3c3 NEW_2
	func_3595(); // 0x3c6 NEW_2
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
	func_2879(var_94_cvector); // 0x460 NEW_2
	var_1_bool = var_94_cvector + var_29_cvector; // 0x462 Add2
}


task_4_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	func_1124(var_22_bool); // 0x46d NEW_2
	var_24_object = Obj(); // 0x46f PushV
	var_24_object = var_22_bool; // 0x470 Mov
	func_3309(); // 0x471 NEW_2
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
	func_2879(var_94_cvector); // 0x51b NEW_2
	var_1_bool = var_94_cvector + var_29_cvector; // 0x51d Add2
}


task_5_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	func_1311(var_22_bool); // 0x528 NEW_2
	var_24_object = Obj(); // 0x52a PushV
	var_24_object = var_22_bool; // 0x52b Mov
	func_3309(); // 0x52c NEW_2
	return 0; // 0x52e Return
}


task_6_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool)
{
	func_1505(var_21_bool); // 0x540 NEW_2
	func_3595(); // 0x543 NEW_2
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
	func_2879(var_94_cvector); // 0x5dd NEW_2
	var_1_bool = var_94_cvector + var_29_cvector; // 0x5df Add2
}


task_6_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	func_1505(var_22_bool); // 0x5ea NEW_2
	var_24_object = Obj(); // 0x5ec PushV
	var_24_object = var_22_bool; // 0x5ed Mov
	func_3309(); // 0x5ee NEW_2
	return 0; // 0x5f0 Return
}


task_7_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool)
{
	func_1699(var_21_bool); // 0x602 NEW_2
	func_3595(); // 0x605 NEW_2
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
	func_2879(var_94_cvector); // 0x69f NEW_2
	var_1_bool = var_94_cvector + var_29_cvector; // 0x6a1 Add2
}


task_7_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	func_1699(var_22_bool); // 0x6ac NEW_2
	var_24_object = Obj(); // 0x6ae PushV
	var_24_object = var_22_bool; // 0x6af Mov
	func_3309(); // 0x6b0 NEW_2
	return 0; // 0x6b2 Return
}


task_9_event_11(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_int, var_23_int)
{
	var_24_int = 1; // 0x81e PushI
	if(var_24_int == 0) goto Label_2878; // 0x81f JumpB
	func_3187(); // 0x821 NEW_2
	var_26_int = 45744; // 0x823 PushI
	var_27_bool = var_23_int == var_26_int; // 0x824 Eq
	if(var_27_bool == 0) goto Label_2091; // 0x825 JumpB
	var_28_object = Obj(); var_29_object = Obj(); // 0x826 PushV
	var_28_object = var_1_bool; // 0x827 MovT
	var_29_object = var_0_bool; // 0x828 MovT
	func_3660(); // 0x829 NEW_2
	
Label_2091:
	var_31_int = 39574; // 0x82b PushI
	var_32_bool = var_23_int == var_31_int; // 0x82c Eq
	if(var_32_bool == 0) goto Label_2099; // 0x82d JumpB
	var_33_object = Obj(); var_34_object = Obj(); // 0x82e PushV
	var_33_object = var_1_bool; // 0x82f MovT
	var_34_object = var_0_bool; // 0x830 MovT
	func_3660(); // 0x831 NEW_2
	
Label_2099:
	var_35_int = 39576; // 0x833 PushI
	var_36_bool = var_23_int == var_35_int; // 0x834 Eq
	if(var_36_bool == 0) goto Label_2107; // 0x835 JumpB
	var_37_object = Obj(); var_38_object = Obj(); // 0x836 PushV
	var_37_object = var_1_bool; // 0x837 MovT
	var_38_object = var_0_bool; // 0x838 MovT
	func_3660(); // 0x839 NEW_2
	
Label_2107:
	var_39_int = 45743; // 0x83b PushI
	var_40_bool = var_22_int == var_39_int; // 0x83c Eq
	if(var_40_bool == 0) goto Label_2322; // 0x83d JumpB
	var_41_bool = 0; var_42_object = Obj(); // 0x83e PushV
	var_42_object = var_1_bool; // 0x83f MovT
	func_3677(var_42_object); // 0x840 NEW_2
	if(var_41_bool == 0) goto Label_2206; // 0x842 JumpB
	var_49_string = ""; // 0x843 PushV
	var_49_string = "Neutral"; // 0x844 MovS
	func_2055(var_23_int, var_49_string); // 0x845 NEW_2
	var_66_int = 543287; // 0x847 PushI
	SetMessage(var_66_int); // 0x848 TObjFunc
	ClearReplies(); // 0x84a TObjFunc
	var_67_bool = 0; // 0x84c PushV
	var_67_bool = 1; // 0x84d MovB
	var_68_bool = 0; // 0x84e PushV
	var_68_bool = 1; // 0x84f MovB
	var_69_bool = 0; var_70_object = Obj(); // 0x850 PushV
	var_70_object = var_1_bool; // 0x851 MovT
	func_3721(var_69_bool, var_70_object); // 0x852 NEW_2
	if(var_69_bool == 0) goto Label_2139; // 0x854 JumpB
	var_80_bool = 0; var_81_object = Obj(); // 0x855 PushV
	var_81_object = var_1_bool; // 0x856 MovT
	func_3731(var_80_bool, var_81_object); // 0x857 NEW_2
	if(var_80_bool == 0) goto Label_2139; // 0x859 JumpB
	var_68_bool = 0; // 0x85a MovB
	
Label_2139:
	if(var_68_bool == 0) goto Label_2146; // 0x85b JumpB
	var_86_bool = 0; var_87_object = Obj(); // 0x85c PushV
	var_87_object = var_1_bool; // 0x85d MovT
	func_3741(var_86_bool, var_87_object); // 0x85e NEW_2
	if(var_86_bool == 0) goto Label_2146; // 0x860 JumpB
	var_67_bool = 0; // 0x861 MovB
	
Label_2146:
	if(var_67_bool == 0) goto Label_2152; // 0x862 JumpB
	var_92_int = 543290; // 0x863 PushI
	var_93_int = 45747; // 0x864 PushI
	var_94_int = 45746; // 0x865 PushI
	AddReply(var_92_int, var_93_int, var_94_int); // 0x866 TObjFunc
	
Label_2152:
	var_95_bool = 0; // 0x868 PushV
	var_95_bool = 1; // 0x869 MovB
	var_96_bool = 0; // 0x86a PushV
	var_96_bool = 1; // 0x86b MovB
	var_97_bool = 0; var_98_object = Obj(); // 0x86c PushV
	var_98_object = var_1_bool; // 0x86d MovT
	func_3711(var_97_bool, var_98_object); // 0x86e NEW_2
	if(var_97_bool == 0) goto Label_2167; // 0x870 JumpB
	var_103_bool = 0; var_104_object = Obj(); // 0x871 PushV
	var_104_object = var_1_bool; // 0x872 MovT
	func_3751(var_103_bool, var_104_object); // 0x873 NEW_2
	if(var_103_bool == 0) goto Label_2167; // 0x875 JumpB
	var_96_bool = 0; // 0x876 MovB
	
Label_2167:
	if(var_96_bool == 0) goto Label_2174; // 0x877 JumpB
	var_109_bool = 0; var_110_object = Obj(); // 0x878 PushV
	var_110_object = var_1_bool; // 0x879 MovT
	func_3771(var_109_bool, var_110_object); // 0x87a NEW_2
	if(var_109_bool == 0) goto Label_2174; // 0x87c JumpB
	var_95_bool = 0; // 0x87d MovB
	
Label_2174:
	if(var_95_bool == 0) goto Label_2180; // 0x87e JumpB
	var_115_int = 543294; // 0x87f PushI
	var_116_int = 45752; // 0x880 PushI
	var_117_int = 45750; // 0x881 PushI
	AddReply(var_115_int, var_116_int, var_117_int); // 0x882 TObjFunc
	
Label_2180:
	var_118_bool = 0; var_119_object = Obj(); // 0x884 PushV
	var_119_object = var_1_bool; // 0x885 MovT
	func_3761(var_118_bool, var_119_object); // 0x886 NEW_2
	if(var_118_bool == 0) goto Label_2190; // 0x888 JumpB
	var_124_int = 543295; // 0x889 PushI
	var_125_int = 45761; // 0x88a PushI
	var_126_int = 45751; // 0x88b PushI
	AddReply(var_124_int, var_125_int, var_126_int); // 0x88c TObjFunc
	
Label_2190:
	var_127_int = 543288; // 0x88e PushI
	var_128_int = -1; // 0x88f PushI
	var_129_int = 45744; // 0x890 PushI
	AddReply(var_127_int, var_128_int, var_129_int); // 0x891 TObjFunc
	var_130_int = 543289; // 0x893 PushI
	var_131_int = -1; // 0x894 PushI
	var_132_int = 45745; // 0x895 PushI
	AddReply(var_130_int, var_131_int, var_132_int); // 0x896 TObjFunc
	var_133_int = 543304; // 0x898 PushI
	var_134_int = -1; // 0x899 PushI
	var_135_int = 45760; // 0x89a PushI
	AddReply(var_133_int, var_134_int, var_135_int); // 0x89b TObjFunc
	return 0; // 0x89d Return
	
Label_2206:
	var_136_string = ""; // 0x89e PushV
	var_136_string = "Neutral"; // 0x89f MovS
	func_2055(var_23_int, var_136_string); // 0x8a0 NEW_2
	var_137_int = 537723; // 0x8a2 PushI
	SetMessage(var_137_int); // 0x8a3 TObjFunc
	ClearReplies(); // 0x8a5 TObjFunc
	var_138_bool = 0; var_139_object = Obj(); // 0x8a7 PushV
	var_139_object = var_1_bool; // 0x8a8 MovT
	func_3665(var_139_object); // 0x8a9 NEW_2
	if(var_138_bool == 0) goto Label_2225; // 0x8ab JumpB
	var_144_int = 537724; // 0x8ac PushI
	var_145_int = 39573; // 0x8ad PushI
	var_146_int = 39572; // 0x8ae PushI
	AddReply(var_144_int, var_145_int, var_146_int); // 0x8af TObjFunc
	
Label_2225:
	var_147_bool = 0; var_148_object = Obj(); // 0x8b1 PushV
	var_148_object = var_1_bool; // 0x8b2 MovT
	func_3665(var_148_object); // 0x8b3 NEW_2
	var_149_bool = var_147_bool == 0; // 0x8b5 Not
	if(var_149_bool == 0) goto Label_2236; // 0x8b6 JumpB
	var_150_int = 537728; // 0x8b7 PushI
	var_151_int = -1; // 0x8b8 PushI
	var_152_int = 39576; // 0x8b9 PushI
	AddReply(var_150_int, var_151_int, var_152_int); // 0x8ba TObjFunc
	
Label_2236:
	var_153_bool = 0; // 0x8bc PushV
	var_153_bool = 0; // 0x8bd MovB
	var_154_bool = 0; // 0x8be PushV
	var_154_bool = 0; // 0x8bf MovB
	var_155_bool = 0; // 0x8c0 PushV
	var_155_bool = 0; // 0x8c1 MovB
	var_156_bool = 0; var_157_object = Obj(); // 0x8c2 PushV
	var_157_object = var_1_bool; // 0x8c3 MovT
	func_3665(var_157_object); // 0x8c4 NEW_2
	if(var_156_bool == 0) goto Label_2253; // 0x8c6 JumpB
	var_158_bool = 0; var_159_object = Obj(); // 0x8c7 PushV
	var_159_object = var_1_bool; // 0x8c8 MovT
	func_3701(var_158_bool, var_159_object); // 0x8c9 NEW_2
	if(var_158_bool == 0) goto Label_2253; // 0x8cb JumpB
	var_155_bool = 1; // 0x8cc MovB
	
Label_2253:
	if(var_155_bool == 0) goto Label_2260; // 0x8cd JumpB
	var_164_bool = 0; var_165_object = Obj(); // 0x8ce PushV
	var_165_object = var_1_bool; // 0x8cf MovT
	func_3781(var_164_bool, var_165_object); // 0x8d0 NEW_2
	if(var_164_bool == 0) goto Label_2260; // 0x8d2 JumpB
	var_154_bool = 1; // 0x8d3 MovB
	
Label_2260:
	if(var_154_bool == 0) goto Label_2267; // 0x8d4 JumpB
	var_179_bool = 0; var_180_object = Obj(); // 0x8d5 PushV
	var_180_object = var_1_bool; // 0x8d6 MovT
	func_3689(var_180_object); // 0x8d7 NEW_2
	if(var_179_bool == 0) goto Label_2267; // 0x8d9 JumpB
	var_153_bool = 1; // 0x8da MovB
	
Label_2267:
	if(var_153_bool == 0) goto Label_2273; // 0x8db JumpB
	var_185_int = 537729; // 0x8dc PushI
	var_186_int = 39578; // 0x8dd PushI
	var_187_int = 39577; // 0x8de PushI
	AddReply(var_185_int, var_186_int, var_187_int); // 0x8df TObjFunc
	
Label_2273:
	var_188_bool = 0; // 0x8e1 PushV
	var_188_bool = 0; // 0x8e2 MovB
	var_189_bool = 0; // 0x8e3 PushV
	var_189_bool = 0; // 0x8e4 MovB
	var_190_bool = 0; var_191_object = Obj(); // 0x8e5 PushV
	var_191_object = var_1_bool; // 0x8e6 MovT
	func_3665(var_191_object); // 0x8e7 NEW_2
	if(var_190_bool == 0) goto Label_2288; // 0x8e9 JumpB
	var_192_bool = 0; var_193_object = Obj(); // 0x8ea PushV
	var_193_object = var_1_bool; // 0x8eb MovT
	func_3701(var_192_bool, var_193_object); // 0x8ec NEW_2
	if(var_192_bool == 0) goto Label_2288; // 0x8ee JumpB
	var_189_bool = 1; // 0x8ef MovB
	
Label_2288:
	if(var_189_bool == 0) goto Label_2295; // 0x8f0 JumpB
	var_194_bool = 0; var_195_object = Obj(); // 0x8f1 PushV
	var_195_object = var_1_bool; // 0x8f2 MovT
	func_3791(var_194_bool, var_195_object); // 0x8f3 NEW_2
	if(var_194_bool == 0) goto Label_2295; // 0x8f5 JumpB
	var_188_bool = 1; // 0x8f6 MovB
	
Label_2295:
	if(var_188_bool == 0) goto Label_2301; // 0x8f7 JumpB
	var_201_int = 537740; // 0x8f8 PushI
	var_202_int = 39589; // 0x8f9 PushI
	var_203_int = 39588; // 0x8fa PushI
	AddReply(var_201_int, var_202_int, var_203_int); // 0x8fb TObjFunc
	
Label_2301:
	var_204_bool = 0; var_205_object = Obj(); // 0x8fd PushV
	var_205_object = var_1_bool; // 0x8fe MovT
	func_3741(var_204_bool, var_205_object); // 0x8ff NEW_2
	if(var_204_bool == 0) goto Label_2311; // 0x901 JumpB
	var_206_int = 537755; // 0x902 PushI
	var_207_int = 39604; // 0x903 PushI
	var_208_int = 39603; // 0x904 PushI
	AddReply(var_206_int, var_207_int, var_208_int); // 0x905 TObjFunc
	
Label_2311:
	var_209_int = 537783; // 0x907 PushI
	var_210_int = -1; // 0x908 PushI
	var_211_int = 39634; // 0x909 PushI
	AddReply(var_209_int, var_210_int, var_211_int); // 0x90a TObjFunc
	var_212_int = 537784; // 0x90c PushI
	var_213_int = -1; // 0x90d PushI
	var_214_int = 39635; // 0x90e PushI
	AddReply(var_212_int, var_213_int, var_214_int); // 0x90f TObjFunc
	return 0; // 0x911 Return
	
Label_2322:
	var_215_int = 39604; // 0x912 PushI
	var_216_bool = var_22_int == var_215_int; // 0x913 Eq
	if(var_216_bool == 0) goto Label_2350; // 0x914 JumpB
	var_217_string = ""; // 0x915 PushV
	var_217_string = "Neutral"; // 0x916 MovS
	func_2055(var_23_int, var_217_string); // 0x917 NEW_2
	var_218_int = 537756; // 0x919 PushI
	SetMessage(var_218_int); // 0x91a TObjFunc
	ClearReplies(); // 0x91c TObjFunc
	var_219_int = 537757; // 0x91e PushI
	var_220_int = 39606; // 0x91f PushI
	var_221_int = 39605; // 0x920 PushI
	AddReply(var_219_int, var_220_int, var_221_int); // 0x921 TObjFunc
	var_222_int = 537766; // 0x923 PushI
	var_223_int = 39615; // 0x924 PushI
	var_224_int = 39614; // 0x925 PushI
	AddReply(var_222_int, var_223_int, var_224_int); // 0x926 TObjFunc
	var_225_int = 537782; // 0x928 PushI
	var_226_int = -1; // 0x929 PushI
	var_227_int = 39633; // 0x92a PushI
	AddReply(var_225_int, var_226_int, var_227_int); // 0x92b TObjFunc
	return 0; // 0x92d Return
	
Label_2350:
	var_228_int = 39615; // 0x92e PushI
	var_229_bool = var_22_int == var_228_int; // 0x92f Eq
	if(var_229_bool == 0) goto Label_2373; // 0x930 JumpB
	var_230_string = ""; // 0x931 PushV
	var_230_string = "Neutral"; // 0x932 MovS
	func_2055(var_23_int, var_230_string); // 0x933 NEW_2
	var_231_int = 537767; // 0x935 PushI
	SetMessage(var_231_int); // 0x936 TObjFunc
	ClearReplies(); // 0x938 TObjFunc
	var_232_int = 537768; // 0x93a PushI
	var_233_int = 39617; // 0x93b PushI
	var_234_int = 39616; // 0x93c PushI
	AddReply(var_232_int, var_233_int, var_234_int); // 0x93d TObjFunc
	var_235_int = 537781; // 0x93f PushI
	var_236_int = -1; // 0x940 PushI
	var_237_int = 39632; // 0x941 PushI
	AddReply(var_235_int, var_236_int, var_237_int); // 0x942 TObjFunc
	return 0; // 0x944 Return
	
Label_2373:
	var_238_int = 39617; // 0x945 PushI
	var_239_bool = var_22_int == var_238_int; // 0x946 Eq
	if(var_239_bool == 0) goto Label_2396; // 0x947 JumpB
	var_240_string = ""; // 0x948 PushV
	var_240_string = "Neutral"; // 0x949 MovS
	func_2055(var_23_int, var_240_string); // 0x94a NEW_2
	var_241_int = 537769; // 0x94c PushI
	SetMessage(var_241_int); // 0x94d TObjFunc
	ClearReplies(); // 0x94f TObjFunc
	var_242_int = 537770; // 0x951 PushI
	var_243_int = 39608; // 0x952 PushI
	var_244_int = 39618; // 0x953 PushI
	AddReply(var_242_int, var_243_int, var_244_int); // 0x954 TObjFunc
	var_245_int = 537771; // 0x956 PushI
	var_246_int = 39621; // 0x957 PushI
	var_247_int = 39620; // 0x958 PushI
	AddReply(var_245_int, var_246_int, var_247_int); // 0x959 TObjFunc
	return 0; // 0x95b Return
	
Label_2396:
	var_248_int = 39621; // 0x95c PushI
	var_249_bool = var_22_int == var_248_int; // 0x95d Eq
	if(var_249_bool == 0) goto Label_2424; // 0x95e JumpB
	var_250_string = ""; // 0x95f PushV
	var_250_string = "Neutral"; // 0x960 MovS
	func_2055(var_23_int, var_250_string); // 0x961 NEW_2
	var_251_int = 537772; // 0x963 PushI
	SetMessage(var_251_int); // 0x964 TObjFunc
	ClearReplies(); // 0x966 TObjFunc
	var_252_bool = 0; var_253_object = Obj(); // 0x968 PushV
	var_253_object = var_1_bool; // 0x969 MovT
	func_3665(var_253_object); // 0x96a NEW_2
	if(var_252_bool == 0) goto Label_2418; // 0x96c JumpB
	var_254_int = 537773; // 0x96d PushI
	var_255_int = 39623; // 0x96e PushI
	var_256_int = 39622; // 0x96f PushI
	AddReply(var_254_int, var_255_int, var_256_int); // 0x970 TObjFunc
	
Label_2418:
	var_257_int = 537777; // 0x972 PushI
	var_258_int = 39628; // 0x973 PushI
	var_259_int = 39627; // 0x974 PushI
	AddReply(var_257_int, var_258_int, var_259_int); // 0x975 TObjFunc
	return 0; // 0x977 Return
	
Label_2424:
	var_260_int = 39628; // 0x978 PushI
	var_261_bool = var_22_int == var_260_int; // 0x979 Eq
	if(var_261_bool == 0) goto Label_2452; // 0x97a JumpB
	var_262_string = ""; // 0x97b PushV
	var_262_string = "Neutral"; // 0x97c MovS
	func_2055(var_23_int, var_262_string); // 0x97d NEW_2
	var_263_int = 537778; // 0x97f PushI
	SetMessage(var_263_int); // 0x980 TObjFunc
	ClearReplies(); // 0x982 TObjFunc
	var_264_int = 537779; // 0x984 PushI
	var_265_int = 39608; // 0x985 PushI
	var_266_int = 39629; // 0x986 PushI
	AddReply(var_264_int, var_265_int, var_266_int); // 0x987 TObjFunc
	var_267_bool = 0; var_268_object = Obj(); // 0x989 PushV
	var_268_object = var_1_bool; // 0x98a MovT
	func_3665(var_268_object); // 0x98b NEW_2
	if(var_267_bool == 0) goto Label_2451; // 0x98d JumpB
	var_269_int = 537780; // 0x98e PushI
	var_270_int = -1; // 0x98f PushI
	var_271_int = 39631; // 0x990 PushI
	AddReply(var_269_int, var_270_int, var_271_int); // 0x991 TObjFunc
	
Label_2451:
	return 0; // 0x993 Return
	
Label_2452:
	var_272_int = 39623; // 0x994 PushI
	var_273_bool = var_22_int == var_272_int; // 0x995 Eq
	if(var_273_bool == 0) goto Label_2475; // 0x996 JumpB
	var_274_string = ""; // 0x997 PushV
	var_274_string = "Neutral"; // 0x998 MovS
	func_2055(var_23_int, var_274_string); // 0x999 NEW_2
	var_275_int = 537774; // 0x99b PushI
	SetMessage(var_275_int); // 0x99c TObjFunc
	ClearReplies(); // 0x99e TObjFunc
	var_276_int = 537775; // 0x9a0 PushI
	var_277_int = 39608; // 0x9a1 PushI
	var_278_int = 39624; // 0x9a2 PushI
	AddReply(var_276_int, var_277_int, var_278_int); // 0x9a3 TObjFunc
	var_279_int = 537776; // 0x9a5 PushI
	var_280_int = -1; // 0x9a6 PushI
	var_281_int = 39626; // 0x9a7 PushI
	AddReply(var_279_int, var_280_int, var_281_int); // 0x9a8 TObjFunc
	return 0; // 0x9aa Return
	
Label_2475:
	var_282_int = 39606; // 0x9ab PushI
	var_283_bool = var_22_int == var_282_int; // 0x9ac Eq
	if(var_283_bool == 0) goto Label_2493; // 0x9ad JumpB
	var_284_string = ""; // 0x9ae PushV
	var_284_string = "Neutral"; // 0x9af MovS
	func_2055(var_23_int, var_284_string); // 0x9b0 NEW_2
	var_285_int = 537758; // 0x9b2 PushI
	SetMessage(var_285_int); // 0x9b3 TObjFunc
	ClearReplies(); // 0x9b5 TObjFunc
	var_286_int = 537759; // 0x9b7 PushI
	var_287_int = 39608; // 0x9b8 PushI
	var_288_int = 39607; // 0x9b9 PushI
	AddReply(var_286_int, var_287_int, var_288_int); // 0x9ba TObjFunc
	return 0; // 0x9bc Return
	
Label_2493:
	var_289_int = 39608; // 0x9bd PushI
	var_290_bool = var_22_int == var_289_int; // 0x9be Eq
	if(var_290_bool == 0) goto Label_2516; // 0x9bf JumpB
	var_291_string = ""; // 0x9c0 PushV
	var_291_string = "Neutral"; // 0x9c1 MovS
	func_2055(var_23_int, var_291_string); // 0x9c2 NEW_2
	var_292_int = 537760; // 0x9c4 PushI
	SetMessage(var_292_int); // 0x9c5 TObjFunc
	ClearReplies(); // 0x9c7 TObjFunc
	var_293_int = 537761; // 0x9c9 PushI
	var_294_int = 39610; // 0x9ca PushI
	var_295_int = 39609; // 0x9cb PushI
	AddReply(var_293_int, var_294_int, var_295_int); // 0x9cc TObjFunc
	var_296_int = 537765; // 0x9ce PushI
	var_297_int = -1; // 0x9cf PushI
	var_298_int = 39613; // 0x9d0 PushI
	AddReply(var_296_int, var_297_int, var_298_int); // 0x9d1 TObjFunc
	return 0; // 0x9d3 Return
	
Label_2516:
	var_299_int = 39610; // 0x9d4 PushI
	var_300_bool = var_22_int == var_299_int; // 0x9d5 Eq
	if(var_300_bool == 0) goto Label_2539; // 0x9d6 JumpB
	var_301_string = ""; // 0x9d7 PushV
	var_301_string = "Neutral"; // 0x9d8 MovS
	func_2055(var_23_int, var_301_string); // 0x9d9 NEW_2
	var_302_int = 537762; // 0x9db PushI
	SetMessage(var_302_int); // 0x9dc TObjFunc
	ClearReplies(); // 0x9de TObjFunc
	var_303_int = 537763; // 0x9e0 PushI
	var_304_int = -1; // 0x9e1 PushI
	var_305_int = 39611; // 0x9e2 PushI
	AddReply(var_303_int, var_304_int, var_305_int); // 0x9e3 TObjFunc
	var_306_int = 537764; // 0x9e5 PushI
	var_307_int = -1; // 0x9e6 PushI
	var_308_int = 39612; // 0x9e7 PushI
	AddReply(var_306_int, var_307_int, var_308_int); // 0x9e8 TObjFunc
	return 0; // 0x9ea Return
	
Label_2539:
	var_309_int = 39589; // 0x9eb PushI
	var_310_bool = var_22_int == var_309_int; // 0x9ec Eq
	if(var_310_bool == 0) goto Label_2567; // 0x9ed JumpB
	var_311_string = ""; // 0x9ee PushV
	var_311_string = "Neutral"; // 0x9ef MovS
	func_2055(var_23_int, var_311_string); // 0x9f0 NEW_2
	var_312_int = 537741; // 0x9f2 PushI
	SetMessage(var_312_int); // 0x9f3 TObjFunc
	ClearReplies(); // 0x9f5 TObjFunc
	var_313_int = 537742; // 0x9f7 PushI
	var_314_int = 39591; // 0x9f8 PushI
	var_315_int = 39590; // 0x9f9 PushI
	AddReply(var_313_int, var_314_int, var_315_int); // 0x9fa TObjFunc
	var_316_int = 537747; // 0x9fc PushI
	var_317_int = 39596; // 0x9fd PushI
	var_318_int = 39595; // 0x9fe PushI
	AddReply(var_316_int, var_317_int, var_318_int); // 0x9ff TObjFunc
	var_319_int = 537754; // 0xa01 PushI
	var_320_int = -1; // 0xa02 PushI
	var_321_int = 39602; // 0xa03 PushI
	AddReply(var_319_int, var_320_int, var_321_int); // 0xa04 TObjFunc
	return 0; // 0xa06 Return
	
Label_2567:
	var_322_int = 39596; // 0xa07 PushI
	var_323_bool = var_22_int == var_322_int; // 0xa08 Eq
	if(var_323_bool == 0) goto Label_2590; // 0xa09 JumpB
	var_324_string = ""; // 0xa0a PushV
	var_324_string = "Neutral"; // 0xa0b MovS
	func_2055(var_23_int, var_324_string); // 0xa0c NEW_2
	var_325_int = 537748; // 0xa0e PushI
	SetMessage(var_325_int); // 0xa0f TObjFunc
	ClearReplies(); // 0xa11 TObjFunc
	var_326_int = 537749; // 0xa13 PushI
	var_327_int = 39598; // 0xa14 PushI
	var_328_int = 39597; // 0xa15 PushI
	AddReply(var_326_int, var_327_int, var_328_int); // 0xa16 TObjFunc
	var_329_int = 537753; // 0xa18 PushI
	var_330_int = -1; // 0xa19 PushI
	var_331_int = 39601; // 0xa1a PushI
	AddReply(var_329_int, var_330_int, var_331_int); // 0xa1b TObjFunc
	return 0; // 0xa1d Return
	
Label_2590:
	var_332_int = 39598; // 0xa1e PushI
	var_333_bool = var_22_int == var_332_int; // 0xa1f Eq
	if(var_333_bool == 0) goto Label_2613; // 0xa20 JumpB
	var_334_string = ""; // 0xa21 PushV
	var_334_string = "Neutral"; // 0xa22 MovS
	func_2055(var_23_int, var_334_string); // 0xa23 NEW_2
	var_335_int = 537750; // 0xa25 PushI
	SetMessage(var_335_int); // 0xa26 TObjFunc
	ClearReplies(); // 0xa28 TObjFunc
	var_336_int = 537751; // 0xa2a PushI
	var_337_int = -1; // 0xa2b PushI
	var_338_int = 39599; // 0xa2c PushI
	AddReply(var_336_int, var_337_int, var_338_int); // 0xa2d TObjFunc
	var_339_int = 537752; // 0xa2f PushI
	var_340_int = -1; // 0xa30 PushI
	var_341_int = 39600; // 0xa31 PushI
	AddReply(var_339_int, var_340_int, var_341_int); // 0xa32 TObjFunc
	return 0; // 0xa34 Return
	
Label_2613:
	var_342_int = 39591; // 0xa35 PushI
	var_343_bool = var_22_int == var_342_int; // 0xa36 Eq
	if(var_343_bool == 0) goto Label_2641; // 0xa37 JumpB
	var_344_string = ""; // 0xa38 PushV
	var_344_string = "Neutral"; // 0xa39 MovS
	func_2055(var_23_int, var_344_string); // 0xa3a NEW_2
	var_345_int = 537743; // 0xa3c PushI
	SetMessage(var_345_int); // 0xa3d TObjFunc
	ClearReplies(); // 0xa3f TObjFunc
	var_346_int = 537744; // 0xa41 PushI
	var_347_int = -1; // 0xa42 PushI
	var_348_int = 39592; // 0xa43 PushI
	AddReply(var_346_int, var_347_int, var_348_int); // 0xa44 TObjFunc
	var_349_int = 537745; // 0xa46 PushI
	var_350_int = -1; // 0xa47 PushI
	var_351_int = 39593; // 0xa48 PushI
	AddReply(var_349_int, var_350_int, var_351_int); // 0xa49 TObjFunc
	var_352_int = 537746; // 0xa4b PushI
	var_353_int = -1; // 0xa4c PushI
	var_354_int = 39594; // 0xa4d PushI
	AddReply(var_352_int, var_353_int, var_354_int); // 0xa4e TObjFunc
	return 0; // 0xa50 Return
	
Label_2641:
	var_355_int = 39578; // 0xa51 PushI
	var_356_bool = var_22_int == var_355_int; // 0xa52 Eq
	if(var_356_bool == 0) goto Label_2664; // 0xa53 JumpB
	var_357_string = ""; // 0xa54 PushV
	var_357_string = "Neutral"; // 0xa55 MovS
	func_2055(var_23_int, var_357_string); // 0xa56 NEW_2
	var_358_int = 537730; // 0xa58 PushI
	SetMessage(var_358_int); // 0xa59 TObjFunc
	ClearReplies(); // 0xa5b TObjFunc
	var_359_int = 537731; // 0xa5d PushI
	var_360_int = 39580; // 0xa5e PushI
	var_361_int = 39579; // 0xa5f PushI
	AddReply(var_359_int, var_360_int, var_361_int); // 0xa60 TObjFunc
	var_362_int = 537738; // 0xa62 PushI
	var_363_int = -1; // 0xa63 PushI
	var_364_int = 39586; // 0xa64 PushI
	AddReply(var_362_int, var_363_int, var_364_int); // 0xa65 TObjFunc
	return 0; // 0xa67 Return
	
Label_2664:
	var_365_int = 39580; // 0xa68 PushI
	var_366_bool = var_22_int == var_365_int; // 0xa69 Eq
	if(var_366_bool == 0) goto Label_2687; // 0xa6a JumpB
	var_367_string = ""; // 0xa6b PushV
	var_367_string = "Neutral"; // 0xa6c MovS
	func_2055(var_23_int, var_367_string); // 0xa6d NEW_2
	var_368_int = 537732; // 0xa6f PushI
	SetMessage(var_368_int); // 0xa70 TObjFunc
	ClearReplies(); // 0xa72 TObjFunc
	var_369_int = 537733; // 0xa74 PushI
	var_370_int = 39582; // 0xa75 PushI
	var_371_int = 39581; // 0xa76 PushI
	AddReply(var_369_int, var_370_int, var_371_int); // 0xa77 TObjFunc
	var_372_int = 537737; // 0xa79 PushI
	var_373_int = -1; // 0xa7a PushI
	var_374_int = 39585; // 0xa7b PushI
	AddReply(var_372_int, var_373_int, var_374_int); // 0xa7c TObjFunc
	return 0; // 0xa7e Return
	
Label_2687:
	var_375_int = 39582; // 0xa7f PushI
	var_376_bool = var_22_int == var_375_int; // 0xa80 Eq
	if(var_376_bool == 0) goto Label_2710; // 0xa81 JumpB
	var_377_string = ""; // 0xa82 PushV
	var_377_string = "Neutral"; // 0xa83 MovS
	func_2055(var_23_int, var_377_string); // 0xa84 NEW_2
	var_378_int = 537734; // 0xa86 PushI
	SetMessage(var_378_int); // 0xa87 TObjFunc
	ClearReplies(); // 0xa89 TObjFunc
	var_379_int = 537735; // 0xa8b PushI
	var_380_int = -1; // 0xa8c PushI
	var_381_int = 39583; // 0xa8d PushI
	AddReply(var_379_int, var_380_int, var_381_int); // 0xa8e TObjFunc
	var_382_int = 537736; // 0xa90 PushI
	var_383_int = -1; // 0xa91 PushI
	var_384_int = 39584; // 0xa92 PushI
	AddReply(var_382_int, var_383_int, var_384_int); // 0xa93 TObjFunc
	return 0; // 0xa95 Return
	
Label_2710:
	var_385_int = 39573; // 0xa96 PushI
	var_386_bool = var_22_int == var_385_int; // 0xa97 Eq
	if(var_386_bool == 0) goto Label_2733; // 0xa98 JumpB
	var_387_string = ""; // 0xa99 PushV
	var_387_string = "Neutral"; // 0xa9a MovS
	func_2055(var_23_int, var_387_string); // 0xa9b NEW_2
	var_388_int = 537725; // 0xa9d PushI
	SetMessage(var_388_int); // 0xa9e TObjFunc
	ClearReplies(); // 0xaa0 TObjFunc
	var_389_int = 537726; // 0xaa2 PushI
	var_390_int = -1; // 0xaa3 PushI
	var_391_int = 39574; // 0xaa4 PushI
	AddReply(var_389_int, var_390_int, var_391_int); // 0xaa5 TObjFunc
	var_392_int = 537727; // 0xaa7 PushI
	var_393_int = -1; // 0xaa8 PushI
	var_394_int = 39575; // 0xaa9 PushI
	AddReply(var_392_int, var_393_int, var_394_int); // 0xaaa TObjFunc
	return 0; // 0xaac Return
	
Label_2733:
	var_395_int = 45761; // 0xaad PushI
	var_396_bool = var_22_int == var_395_int; // 0xaae Eq
	if(var_396_bool == 0) goto Label_2756; // 0xaaf JumpB
	var_397_string = ""; // 0xab0 PushV
	var_397_string = "Neutral"; // 0xab1 MovS
	func_2055(var_23_int, var_397_string); // 0xab2 NEW_2
	var_398_int = 543305; // 0xab4 PushI
	SetMessage(var_398_int); // 0xab5 TObjFunc
	ClearReplies(); // 0xab7 TObjFunc
	var_399_int = 543306; // 0xab9 PushI
	var_400_int = -1; // 0xaba PushI
	var_401_int = 45762; // 0xabb PushI
	AddReply(var_399_int, var_400_int, var_401_int); // 0xabc TObjFunc
	var_402_int = 543307; // 0xabe PushI
	var_403_int = 45766; // 0xabf PushI
	var_404_int = 45763; // 0xac0 PushI
	AddReply(var_402_int, var_403_int, var_404_int); // 0xac1 TObjFunc
	return 0; // 0xac3 Return
	
Label_2756:
	var_405_int = 45766; // 0xac4 PushI
	var_406_bool = var_22_int == var_405_int; // 0xac5 Eq
	if(var_406_bool == 0) goto Label_2779; // 0xac6 JumpB
	var_407_string = ""; // 0xac7 PushV
	var_407_string = "Neutral"; // 0xac8 MovS
	func_2055(var_23_int, var_407_string); // 0xac9 NEW_2
	var_408_int = 543310; // 0xacb PushI
	SetMessage(var_408_int); // 0xacc TObjFunc
	ClearReplies(); // 0xace TObjFunc
	var_409_int = 543312; // 0xad0 PushI
	var_410_int = -1; // 0xad1 PushI
	var_411_int = 45768; // 0xad2 PushI
	AddReply(var_409_int, var_410_int, var_411_int); // 0xad3 TObjFunc
	var_412_int = 543311; // 0xad5 PushI
	var_413_int = -1; // 0xad6 PushI
	var_414_int = 45767; // 0xad7 PushI
	AddReply(var_412_int, var_413_int, var_414_int); // 0xad8 TObjFunc
	return 0; // 0xada Return
	
Label_2779:
	var_415_int = 45752; // 0xadb PushI
	var_416_bool = var_22_int == var_415_int; // 0xadc Eq
	if(var_416_bool == 0) goto Label_2802; // 0xadd JumpB
	var_417_string = ""; // 0xade PushV
	var_417_string = "Neutral"; // 0xadf MovS
	func_2055(var_23_int, var_417_string); // 0xae0 NEW_2
	var_418_int = 543296; // 0xae2 PushI
	SetMessage(var_418_int); // 0xae3 TObjFunc
	ClearReplies(); // 0xae5 TObjFunc
	var_419_int = 543297; // 0xae7 PushI
	var_420_int = 45755; // 0xae8 PushI
	var_421_int = 45753; // 0xae9 PushI
	AddReply(var_419_int, var_420_int, var_421_int); // 0xaea TObjFunc
	var_422_int = 543298; // 0xaec PushI
	var_423_int = 45756; // 0xaed PushI
	var_424_int = 45754; // 0xaee PushI
	AddReply(var_422_int, var_423_int, var_424_int); // 0xaef TObjFunc
	return 0; // 0xaf1 Return
	
Label_2802:
	var_425_int = 45756; // 0xaf2 PushI
	var_426_bool = var_22_int == var_425_int; // 0xaf3 Eq
	if(var_426_bool == 0) goto Label_2825; // 0xaf4 JumpB
	var_427_string = ""; // 0xaf5 PushV
	var_427_string = "Neutral"; // 0xaf6 MovS
	func_2055(var_23_int, var_427_string); // 0xaf7 NEW_2
	var_428_int = 543300; // 0xaf9 PushI
	SetMessage(var_428_int); // 0xafa TObjFunc
	ClearReplies(); // 0xafc TObjFunc
	var_429_int = 543302; // 0xafe PushI
	var_430_int = -1; // 0xaff PushI
	var_431_int = 45758; // 0xb00 PushI
	AddReply(var_429_int, var_430_int, var_431_int); // 0xb01 TObjFunc
	var_432_int = 543303; // 0xb03 PushI
	var_433_int = -1; // 0xb04 PushI
	var_434_int = 45759; // 0xb05 PushI
	AddReply(var_432_int, var_433_int, var_434_int); // 0xb06 TObjFunc
	return 0; // 0xb08 Return
	
Label_2825:
	var_435_int = 45755; // 0xb09 PushI
	var_436_bool = var_22_int == var_435_int; // 0xb0a Eq
	if(var_436_bool == 0) goto Label_2843; // 0xb0b JumpB
	var_437_string = ""; // 0xb0c PushV
	var_437_string = "Neutral"; // 0xb0d MovS
	func_2055(var_23_int, var_437_string); // 0xb0e NEW_2
	var_438_int = 543299; // 0xb10 PushI
	SetMessage(var_438_int); // 0xb11 TObjFunc
	ClearReplies(); // 0xb13 TObjFunc
	var_439_int = 543301; // 0xb15 PushI
	var_440_int = -1; // 0xb16 PushI
	var_441_int = 45757; // 0xb17 PushI
	AddReply(var_439_int, var_440_int, var_441_int); // 0xb18 TObjFunc
	return 0; // 0xb1a Return
	
Label_2843:
	var_442_int = 45747; // 0xb1b PushI
	var_443_bool = var_22_int == var_442_int; // 0xb1c Eq
	if(var_443_bool == 0) goto Label_2866; // 0xb1d JumpB
	var_444_string = ""; // 0xb1e PushV
	var_444_string = "Neutral"; // 0xb1f MovS
	func_2055(var_23_int, var_444_string); // 0xb20 NEW_2
	var_445_int = 543291; // 0xb22 PushI
	SetMessage(var_445_int); // 0xb23 TObjFunc
	ClearReplies(); // 0xb25 TObjFunc
	var_446_int = 543292; // 0xb27 PushI
	var_447_int = -1; // 0xb28 PushI
	var_448_int = 45748; // 0xb29 PushI
	AddReply(var_446_int, var_447_int, var_448_int); // 0xb2a TObjFunc
	var_449_int = 543293; // 0xb2c PushI
	var_450_int = -1; // 0xb2d PushI
	var_451_int = 45749; // 0xb2e PushI
	AddReply(var_449_int, var_450_int, var_451_int); // 0xb2f TObjFunc
	return 0; // 0xb31 Return
	
Label_2866:
	var_3_bool = 1; // 0xb32 TMovB
	var_452_bool = 0; // 0xb33 PushV
	func_4009(var_452_bool); // 0xb34 NEW_2
	if(var_452_bool == 0) goto Label_2874; // 0xb36 JumpB
	lshStopAnimation(); // 0xb37 Func
	goto Label_2876; // 0xb39 Jump
	
Label_2876:
	return 0; // 0xb3c Return
	
Label_2874:
	StopAnimation(); // 0xb3a Func
	
Label_2878:
	return 0; // 0xb3e Return
}


event_16(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_string)
{
	return 0; // 0xcec Return
}


event_41(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object)
{
	return 0; // 0xcee Return
}


event_22(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_int, var_24_float, var_25_float)
{
	return 0; // 0xcf0 Return
}


event_43(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_int, var_24_float, var_25_float, var_26_cvector, var_27_cvector)
{
	return 0; // 0xcf2 Return
}


main(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool)
{
	var_22_bool = 1; // 0x28 PushB
	SensePlayerOnly(var_22_bool); // 0x29 Func
	func_4011(); // 0x2c NEW_2
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
	var_363_bool = 0; // 0x4 PushV
	func_4009(var_363_bool); // 0x5 NEW_2
	if(var_363_bool == 0) goto Label_15; // 0x7 JumpB
	var_364_string = ""; // 0x8 PushV
	var_364_string = "Neutral"; // 0x9 MovS
	func_3145(var_364_string); // 0xa NEW_2
	lshWaitForAnimEnd(); // 0xc Func
	goto Label_21; // 0xe Jump
	
Label_21:
	var_365_bool = var_0_bool; // 0x15 PushT
	if(var_365_bool == 0) goto Label_24; // 0x16 JumpB
	return 0; // 0x17 Return
	
Label_24:
	goto Label_4; // 0x18 Jump
	
Label_15:
	WaitForAnimEnd(); // 0xf Func
	var_366_string = "all"; // 0x11 PushS
	var_367_string = "idle"; // 0x12 PushS
	PlayAnimation(var_366_string, var_367_string); // 0x13 Func
}


func_3586(var_25_int)
{
	var_25_int = 2; // 0xe03 MovI
	return 0; // 0xe04 Return
}


func_3589(var_33_object)
{
	var_34_object = Obj(); // 0xe06 PushV
	var_34_object = var_33_object; // 0xe07 Mov
	func_4019(var_33_object, var_34_object); // 0xe08 NEW_2
	return 0; // 0xe0a Return
}


func_2055(var_2_bool, var_49_string)
{
	var_50_bool = 0; // 0x808 PushV
	func_4009(var_50_bool); // 0x809 NEW_2
	var_51_bool = var_50_bool == 0; // 0x80b Not
	if(var_51_bool == 0) goto Label_2062; // 0x80c JumpB
	return 0; // 0x80d Return
	
Label_2062:
	var_52_bool = var_49_string == var_2_bool; // 0x80e Eq
	if(var_52_bool == 0) goto Label_2065; // 0x80f JumpB
	return 0; // 0x810 Return
	
Label_2065:
	var_53_string = ""; var_54_bool = 0; // 0x811 PushV
	var_53_string = var_49_string; // 0x812 Mov
	var_55_string = ""; // 0x813 PushS
	var_56_bool = var_49_string == var_55_string; // 0x814 Eq
	if(var_56_bool == 0) goto Label_2072; // 0x815 JumpB
	var_54_bool = 0; // 0x816 MovB
	goto Label_2073; // 0x817 Jump
	
Label_2073:
	func_3161(var_53_string, var_54_bool); // 0x819 NEW_2
	var_2_bool = var_49_string; // 0x81b TMov
	return 0; // 0x81c Return
	
Label_2072:
	var_54_bool = 1; // 0x818 MovB
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
	func_3226(var_52_cvector, var_53_cvector); // 0x612 NEW_2
	var_59_float = 0.75; // 0x614 PushF
	var_60_float = var_46_cvector * var_59_float; // 0x615 Mult
	var_51_cvector = var_52_cvector + var_60_float; // 0x616 Add2
	func_3226(var_50_cvector, var_51_cvector); // 0x617 NEW_2
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


func_3595()
{
	return 0; // 0xe0b Return
}


func_3596(var_25_int)
{
	var_25_int = 0; // 0xe0d MovI
	return 0; // 0xe0e Return
}


func_3084(var_328_bool, var_329_object)
{
	var_330_bool = 0; var_331_object = Obj(); var_332_float = 0; // 0xc0d PushV
	var_331_object = var_329_object; // 0xc0e Mov
	var_332_float = 70; // 0xc0f MovI
	func_3092(var_331_object, var_332_float); // 0xc10 NEW_2
	var_328_bool = var_330_bool; // 0xc11 Mov
	return 0; // 0xc13 Return
}


func_3599()
{
	return 0; // 0xe10 Return
}


func_3601(var_209_int)
{
	var_209_int = 0; // 0xe12 MovI
	return 0; // 0xe13 Return
}


func_3604()
{
	return 0; // 0xe15 Return
}


func_3092(var_330_bool, var_332_float)
{
	var_333_float = 0; var_334_cvector = CVector(0,0,0); var_335_cvector = CVector(0,0,0); var_336_cvector = CVector(0,0,0); var_337_cvector = CVector(0,0,0); var_338_cvector = CVector(0,0,0); var_339_cvector = CVector(0,0,0); var_340_bool = 0; var_341_float = 0; var_342_cvector = CVector(0,0,0); var_343_cvector = CVector(0,0,0); var_344_cvector = CVector(0,0,0); var_345_cvector = CVector(0,0,0); var_346_cvector = CVector(0,0,0); var_347_cvector = CVector(0,0,0); var_348_bool = 0; // 0xc14 PushV
	GetPosition(var_342_cvector); // 0xc15 ObjFunc
	GetEyesHeight(var_341_float); // 0xc17 ObjFunc
	var_349_float = GetByIndex(var_342_cvector, 1); // 0xc19 PushE
	var_349_float = var_349_float + var_341_float; // 0xc1a Add2
	SetByIndex(var_342_cvector, 1) = var_349_float; // 0xc1b PopE
	GetPosition(var_343_cvector); // 0xc1c Func
	GetEyesHeight(var_341_float); // 0xc1e Func
	var_350_float = GetByIndex(var_343_cvector, 1); // 0xc20 PushE
	var_350_float = var_350_float + var_341_float; // 0xc21 Add2
	SetByIndex(var_343_cvector, 1) = var_350_float; // 0xc22 PopE
	var_344_cvector = var_342_cvector - var_343_cvector; // 0xc23 Sub2
	var_351_float = GetByIndex(var_344_cvector, 1); // 0xc24 PushE
	var_351_float = 0; // 0xc25 MovI
	SetByIndex(var_344_cvector, 1) = var_351_float; // 0xc26 PopE
	var_352_int = var_344_cvector | var_344_cvector; // 0xc27 Or
	var_353_float = sqrt(var_352_int); // 0xc28 Sqrt
	var_344_cvector = var_344_cvector / var_344_cvector; // 0xc29 Div2
	var_345_cvector = -var_344_cvector; // 0xc2a Neg2
	var_354_float = var_344_cvector * var_332_float; // 0xc2b Mult
	var_355_cvector = CVector(0.0, 10.0, 0.0); // 0xc2c PushVec
	var_346_cvector = var_354_float - var_355_cvector; // 0xc2d Sub2
	var_347_cvector = var_343_cvector + var_346_cvector; // 0xc2e Add2
	IsOverrideActive(var_348_bool); // 0xc2f Func
	var_356_bool = var_348_bool; // 0xc31 Push
	if(var_356_bool == 0) goto Label_3125; // 0xc32 JumpB
	var_330_bool = 0; // 0xc33 MovB
	return 16; // 0xc34 Return
	
Label_3125:
	StopWorld(); // 0xc35 Func
	var_357_bool = 1; // 0xc37 PushB
	CameraTransit(var_347_cvector, var_345_cvector, var_357_bool); // 0xc38 Func
	var_358_float = GetByIndex(var_346_cvector, 0); // 0xc3a PushE
	var_359_float = GetByIndex(var_346_cvector, 2); // 0xc3b PushE
	Rotate(var_358_float, var_359_float); // 0xc3c Func
	CameraWaitForPlayFinish(); // 0xc3e Func
	ResumeWorld(); // 0xc40 Func
	var_330_bool = 1; // 0xc42 MovB
	return 16; // 0xc43 Return
}


func_3606(var_28_bool, var_29_object)
{
	var_30_bool = 0; var_31_bool = 0; // 0xe16 PushV
	CanSee(var_31_bool, var_29_object); // 0xe17 Func
	var_28_bool = var_31_bool; // 0xe19 Mov
	return 2; // 0xe1a Return
}


func_3611(var_40_object)
{
	var_41_object = Obj(); // 0xe1c PushV
	var_41_object = var_40_object; // 0xe1d Mov
	TaskCall(6); // 0xe1e TaskCall
	func_1380(var_42_object, var_43_cvector, var_44_bool, var_41_object); // 0xe1f NEW_2
	TaskReturn(); // 0xe20 TaskReturn
	return 0; // 0xe22 Return
}


func_3619(var_37_bool, var_38_object)
{
	var_39_bool = 0; var_40_bool = 0; // 0xe23 PushV
	CanSee(var_40_bool, var_38_object); // 0xe24 Func
	var_37_bool = 1; // 0xe26 MovB
	var_41_bool = var_40_bool; // 0xe27 Push
	if(var_41_bool == 0) goto Label_3633; // 0xe28 JumpB
	var_42_float = 0; var_43_object = Obj(); // 0xe29 PushV
	var_43_object = var_38_object; // 0xe2a Mov
	func_2891(var_43_object); // 0xe2b NEW_2
	var_50_int = 4000000; // 0xe2d PushI
	var_51_bool = var_42_float <= var_50_int; // 0xe2e LE
	if(var_51_bool == 0) goto Label_3633; // 0xe2f JumpB
	var_37_bool = 0; // 0xe30 MovB
	
Label_3633:
	return 2; // 0xe31 Return
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
	func_2879(var_191_cvector); // 0x648 NEW_2
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
	func_2879(var_201_cvector); // 0x663 NEW_2
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


func_3634(var_139_object)
{
	var_140_object = Obj(); // 0xe33 PushV
	var_140_object = var_139_object; // 0xe34 Mov
	TaskCall(7); // 0xe35 TaskCall
	func_1574(var_141_object, var_142_cvector, var_143_bool, var_140_object); // 0xe36 NEW_2
	TaskReturn(); // 0xe37 TaskReturn
	return 0; // 0xe39 Return
}


func_55()
{
	var_88_bool = 0; // 0x37 PushV
	func_2992(var_88_bool); // 0x38 NEW_2
	var_91_bool = var_88_bool == 0; // 0x3a Not
	if(var_91_bool == 0) goto Label_63; // 0x3b JumpB
	func_3595(); // 0x3d NEW_2
	
Label_63:
	return 0; // 0x3f Return
}


func_3642(var_54_bool, var_55_object)
{
	var_56_bool = 0; var_57_object = Obj(); // 0xe3b PushV
	var_57_object = var_55_object; // 0xe3c Mov
	func_3619(var_56_bool, var_57_object); // 0xe3d NEW_2
	var_54_bool = var_56_bool; // 0xe3e Mov
	return 0; // 0xe40 Return
}


func_573()
{
	var_119_int = 0; var_120_int = 0; var_121_int = 0; var_122_int = 0; var_123_bool = 0; var_124_float = 0; var_125_bool = 0; var_126_int = 0; var_127_int = 0; var_128_int = 0; var_129_int = 0; var_130_bool = 0; var_131_float = 0; var_132_bool = 0; // 0x23d PushV
	WaitForAnimEnd(); // 0x23e Func
	var_133_bool = 0; // 0x240 PushV
	func_2992(var_133_bool); // 0x241 NEW_2
	var_134_bool = var_133_bool == 0; // 0x243 Not
	if(var_134_bool == 0) goto Label_582; // 0x244 JumpB
	return 14; // 0x245 Return
	
Label_582:
	var_135_int = 0; // 0x246 PushV
	func_3450(var_135_int); // 0x247 NEW_2
	var_126_int = var_135_int; // 0x248 Mov
	var_127_int = 0; // 0x24a MovI
	
Label_587:
	var_148_bool = 0; // 0x24b PushV
	var_148_bool = 0; // 0x24c MovB
	var_149_int = 5; // 0x24d PushI
	var_150_bool = var_127_int < var_149_int; // 0x24e LT
	if(var_150_bool == 0) goto Label_597; // 0x24f JumpB
	var_151_bool = 0; // 0x250 PushV
	func_2992(var_151_bool); // 0x251 NEW_2
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
	func_3443(var_157_string, var_158_int); // 0x263 NEW_2
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


func_3649(var_207_object)
{
	var_208_object = Obj(); // 0xe42 PushV
	var_208_object = var_207_object; // 0xe43 Mov
	func_3634(var_208_object); // 0xe44 NEW_2
	return 0; // 0xe46 Return
}


func_3140()
{
	var_369_bool = 1; // 0xc45 PushB
	CameraSwitchToNormal(var_369_bool); // 0xc46 Func
	return 0; // 0xc48 Return
}


func_3655(var_30_bool)
{
	var_30_bool = 0; // 0xe48 MovB
	return 0; // 0xe49 Return
}


func_3145(var_223_string)
{
	var_224_bool = 0; var_225_float = 0; var_226_float = 0; var_227_bool = 0; var_228_float = 0; var_229_float = 0; // 0xc49 PushV
	lshHasAnimation(var_227_bool, var_223_string); // 0xc4a Func
	var_230_bool = var_227_bool; // 0xc4c Push
	if(var_230_bool == 0) goto Label_3156; // 0xc4d JumpB
	lshGetAnimTimes(var_223_string, var_228_float, var_229_float); // 0xc4e Func
	var_231_bool = 0; // 0xc50 PushB
	lshPlayAnimation(var_228_float, var_229_float, var_231_bool); // 0xc51 Func
	goto Label_3160; // 0xc53 Jump
	
Label_3160:
	return 6; // 0xc58 Return
	
Label_3156:
	var_232_string = "Can't find lsh animation : "; // 0xc54 PushS
	var_233_int = var_232_string + var_223_string; // 0xc55 Add
	Trace(var_233_int); // 0xc56 Func
}


func_3658()
{
	return 0; // 0xe4b Return
}


func_3660()
{
	var_30_int = 1000; // 0xe4d PushI
	SetReturnValue(var_30_int); // 0xe4e ObjFunc
	return 0; // 0xe50 Return
}


func_3665(var_138_bool)
{
	var_140_int = 0; var_141_string = ""; // 0xe52 PushV
	var_141_string = "branch"; // 0xe53 MovS
	func_3285(var_140_int, var_141_string); // 0xe54 NEW_2
	var_142_int = 0; // 0xe56 PushI
	var_143_bool = var_140_int == var_142_int; // 0xe57 Eq
	if(var_143_bool == 0) goto Label_3675; // 0xe58 JumpB
	var_138_bool = 1; // 0xe59 MovB
	return 0; // 0xe5a Return
	
Label_3675:
	var_138_bool = 0; // 0xe5b MovB
	return 0; // 0xe5c Return
}


func_3161(var_53_string, var_54_bool)
{
	var_57_bool = 0; var_58_float = 0; var_59_float = 0; var_60_bool = 0; var_61_float = 0; var_62_float = 0; // 0xc59 PushV
	lshHasAnimation(var_60_bool, var_53_string); // 0xc5a Func
	var_63_bool = var_60_bool; // 0xc5c Push
	if(var_63_bool == 0) goto Label_3171; // 0xc5d JumpB
	lshGetAnimTimes(var_53_string, var_61_float, var_62_float); // 0xc5e Func
	lshPlayAnimation(var_61_float, var_62_float, var_54_bool); // 0xc60 Func
	goto Label_3175; // 0xc62 Jump
	
Label_3175:
	return 6; // 0xc67 Return
	
Label_3171:
	var_64_string = "Can't find lsh animation : "; // 0xc63 PushS
	var_65_int = var_64_string + var_53_string; // 0xc64 Add
	Trace(var_65_int); // 0xc65 Func
}


func_3677(var_41_bool)
{
	var_43_int = 0; var_44_string = ""; // 0xe5e PushV
	var_44_string = "branch"; // 0xe5f MovS
	func_3285(var_43_int, var_44_string); // 0xe60 NEW_2
	var_47_int = 2; // 0xe62 PushI
	var_48_bool = var_43_int == var_47_int; // 0xe63 Eq
	if(var_48_bool == 0) goto Label_3687; // 0xe64 JumpB
	var_41_bool = 1; // 0xe65 MovB
	return 0; // 0xe66 Return
	
Label_3687:
	var_41_bool = 0; // 0xe67 MovB
	return 0; // 0xe68 Return
}


func_1124(var_2_bool)
{
	Stop(); // 0x464 Func
	var_23_int = 120; // 0x466 PushI
	KillTimer(var_23_int); // 0x467 Func
	var_2_bool = 1; // 0x469 TMovB
	return 0; // 0x46a Return
}


func_3176(var_82_object)
{
	var_83_float = 0; var_84_cvector = CVector(0,0,0); var_85_float = 0; var_86_cvector = CVector(0,0,0); // 0xc68 PushV
	GetEyesHeight(var_85_float); // 0xc69 ObjFunc
	var_86_cvector = CVector(0.0, 0.0, 0.0); // 0xc6b MovV
	var_87_float = GetByIndex(var_86_cvector, 1); // 0xc6c PushE
	var_87_float = var_85_float; // 0xc6d Mov
	SetByIndex(var_86_cvector, 1) = var_87_float; // 0xc6e PopE
	var_88_string = "head"; // 0xc6f PushS
	LookAsync(var_82_object, var_88_string, var_86_cvector); // 0xc70 Func
	return 4; // 0xc72 Return
}


func_3689(var_179_bool)
{
	var_181_int = 0; var_182_string = ""; // 0xe6a PushV
	var_182_string = "d1q01FirstGeorgVisit"; // 0xe6b MovS
	func_3285(var_181_int, var_182_string); // 0xe6c NEW_2
	var_183_int = 1; // 0xe6e PushI
	var_184_bool = var_181_int == var_183_int; // 0xe6f Eq
	if(var_184_bool == 0) goto Label_3699; // 0xe70 JumpB
	var_179_bool = 1; // 0xe71 MovB
	return 0; // 0xe72 Return
	
Label_3699:
	var_179_bool = 0; // 0xe73 MovB
	return 0; // 0xe74 Return
}


func_3187()
{
	var_25_bool = 0; // 0xc73 PushV
	func_4009(var_25_bool); // 0xc74 NEW_2
	if(var_25_bool == 0) goto Label_3193; // 0xc76 JumpB
	lshStopSpeech(); // 0xc77 Func
	
Label_3193:
	return 0; // 0xc79 Return
}


func_1140(var_0_bool, var_74_bool)
{
	var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0); // 0x474 PushV
	GetDirection(var_77_cvector); // 0x475 Func
	var_79_cvector = CVector(0,0,0); var_80_object = Obj(); // 0x477 PushV
	var_80_object = var_0_bool; // 0x478 MovT
	func_2884(var_80_object); // 0x479 NEW_2
	var_78_cvector = var_79_cvector; // 0x47a Mov
	var_85_float = 0; var_86_cvector = CVector(0,0,0); var_87_cvector = CVector(0,0,0); // 0x47c PushV
	var_86_cvector = var_77_cvector; // 0x47d Mov
	var_87_cvector = var_78_cvector; // 0x47e Mov
	func_3241(var_85_float, var_86_cvector, var_87_cvector); // 0x47f NEW_2
	var_93_float = -0.34202; // 0x481 PushF
	var_74_bool = var_85_float >= var_93_float; // 0x482 GE2
	return 4; // 0x483 Return
}


func_3701(var_158_bool, var_159_object)
{
	var_160_bool = 0; var_161_object = Obj(); // 0xe76 PushV
	var_161_object = var_159_object; // 0xe77 Mov
	func_3801(var_161_object); // 0xe78 NEW_2
	if(var_160_bool == 0) goto Label_3709; // 0xe7a JumpB
	var_158_bool = 1; // 0xe7b MovB
	return 0; // 0xe7c Return
	
Label_3709:
	var_158_bool = 0; // 0xe7d MovB
	return 0; // 0xe7e Return
}


func_3194(var_53_string, var_54_int, var_55_int)
{
	var_56_bool = 0; var_57_bool = 0; // 0xc7a PushV
	var_58_bool = 0; var_59_int = 0; var_60_int = 0; // 0xc7b PushV
	var_59_int = var_54_int; // 0xc7c Mov
	var_60_int = var_55_int; // 0xc7d Mov
	func_3236(var_58_bool, var_59_int, var_60_int); // 0xc7e NEW_2
	if(var_58_bool == 0) goto Label_3204; // 0xc80 JumpB
	var_61_int = 0; // 0xc81 PushI
	AddItem(var_57_bool, var_53_string, var_61_int); // 0xc82 Func
	
Label_3204:
	return 2; // 0xc84 Return
}


func_3711(var_97_bool, var_98_object)
{
	var_99_bool = 0; var_100_object = Obj(); // 0xe80 PushV
	var_100_object = var_98_object; // 0xe81 Mov
	func_3808(var_100_object); // 0xe82 NEW_2
	if(var_99_bool == 0) goto Label_3719; // 0xe84 JumpB
	var_97_bool = 1; // 0xe85 MovB
	return 0; // 0xe86 Return
	
Label_3719:
	var_97_bool = 0; // 0xe87 MovB
	return 0; // 0xe88 Return
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
	func_3226(var_52_cvector, var_53_cvector); // 0x48e NEW_2
	var_59_float = 0.75; // 0x490 PushF
	var_60_float = var_46_cvector * var_59_float; // 0x491 Mult
	var_51_cvector = var_52_cvector + var_60_float; // 0x492 Add2
	func_3226(var_50_cvector, var_51_cvector); // 0x493 NEW_2
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


func_3205(var_29_string, var_30_int, var_31_int, var_32_int)
{
	var_33_int = 0; var_34_bool = 0; var_35_int = 0; var_36_bool = 0; // 0xc85 PushV
	var_37_bool = 0; var_38_int = 0; var_39_int = 0; // 0xc86 PushV
	var_38_int = var_30_int; // 0xc87 Mov
	var_39_int = var_31_int; // 0xc88 Mov
	func_3236(var_37_bool, var_38_int, var_39_int); // 0xc89 NEW_2
	if(var_37_bool == 0) goto Label_3219; // 0xc8b JumpB
	irand(var_35_int, var_32_int); // 0xc8c Func
	var_42_int = 0; // 0xc8e PushI
	var_43_int = 1; // 0xc8f PushI
	var_44_int = var_35_int + var_43_int; // 0xc90 Add
	AddItem(var_36_bool, var_29_string, var_42_int, var_44_int); // 0xc91 Func
	
Label_3219:
	return 4; // 0xc93 Return
}


func_3721(var_69_bool, var_70_object)
{
	var_71_bool = 0; var_72_object = Obj(); // 0xe8a PushV
	var_72_object = var_70_object; // 0xe8b Mov
	func_3815(var_72_object); // 0xe8c NEW_2
	if(var_71_bool == 0) goto Label_3729; // 0xe8e JumpB
	var_69_bool = 1; // 0xe8f MovB
	return 0; // 0xe90 Return
	
Label_3729:
	var_69_bool = 0; // 0xe91 MovB
	return 0; // 0xe92 Return
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


func_3731(var_80_bool, var_81_object)
{
	var_82_bool = 0; var_83_object = Obj(); // 0xe94 PushV
	var_83_object = var_81_object; // 0xe95 Mov
	func_3822(var_83_object); // 0xe96 NEW_2
	if(var_82_bool == 0) goto Label_3739; // 0xe98 JumpB
	var_80_bool = 1; // 0xe99 MovB
	return 0; // 0xe9a Return
	
Label_3739:
	var_80_bool = 0; // 0xe9b MovB
	return 0; // 0xe9c Return
}


func_3220(var_30_object)
{
	var_31_object = Obj(); var_32_object = Obj(); // 0xc94 PushV
	self(var_32_object); // 0xc95 Func
	var_30_object = var_32_object; // 0xc97 Mov
	return 2; // 0xc98 Return
}


func_659(var_0_bool, var_74_object)
{
	var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0); var_78_bool = 0; var_79_cvector = CVector(0,0,0); var_80_cvector = CVector(0,0,0); var_81_bool = 0; // 0x293 PushV
	var_0_bool = var_74_object; // 0x294 TMov
	func_710(var_81_bool); // 0x296 NEW_2
	GetDirection(var_79_cvector); // 0x298 Func
	var_89_cvector = CVector(0,0,0); var_90_object = Obj(); // 0x29a PushV
	var_90_object = var_0_bool; // 0x29b MovT
	func_2884(var_90_object); // 0x29c NEW_2
	var_80_cvector = var_89_cvector; // 0x29d Mov
	var_95_float = 0; var_96_cvector = CVector(0,0,0); var_97_cvector = CVector(0,0,0); // 0x29f PushV
	var_96_cvector = var_79_cvector; // 0x2a0 Mov
	var_97_cvector = var_80_cvector; // 0x2a1 Mov
	func_3268(var_95_float, var_96_cvector, var_97_cvector); // 0x2a2 NEW_2
	var_119_int = 0; // 0x2a4 PushI
	var_120_bool = var_95_float < var_119_int; // 0x2a5 LT
	if(var_120_bool == 0) goto Label_685; // 0x2a6 JumpB
	var_121_object = Obj(); // 0x2a7 PushV
	var_121_object = var_0_bool; // 0x2a8 MovT
	func_2981(); // 0x2a9 NEW_2
	var_81_bool = 1; // 0x2ab MovB
	goto Label_688; // 0x2ac Jump
	
Label_688:
	var_130_bool = var_81_bool; // 0x2b0 Push
	if(var_130_bool == 0) goto Label_704; // 0x2b1 JumpB
	var_131_object = Obj(); // 0x2b2 PushV
	var_131_object = var_0_bool; // 0x2b3 MovT
	func_2981(); // 0x2b4 NEW_2
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


func_3226(var_52_cvector, var_53_cvector)
{
	var_54_float = 0; var_55_float = 0; // 0xc9a PushV
	var_56_int = var_53_cvector | var_53_cvector; // 0xc9b Or
	var_55_float = sqrt(var_56_int); // 0xc9c Sqrt2
	var_57_float = 0.0; // 0xc9d PushF
	var_58_bool = var_55_float < var_57_float; // 0xc9e LT
	if(var_58_bool == 0) goto Label_3234; // 0xc9f JumpB
	var_52_cvector = CVector(0.0, 0.0, 0.0); // 0xca0 MovV
	return 2; // 0xca1 Return
	
Label_3234:
	var_52_cvector = var_53_cvector / var_53_cvector; // 0xca2 Div2
	return 2; // 0xca3 Return
}


func_3741(var_86_bool, var_87_object)
{
	var_88_bool = 0; var_89_object = Obj(); // 0xe9e PushV
	var_89_object = var_87_object; // 0xe9f Mov
	func_3829(var_89_object); // 0xea0 NEW_2
	if(var_88_bool == 0) goto Label_3749; // 0xea2 JumpB
	var_86_bool = 1; // 0xea3 MovB
	return 0; // 0xea4 Return
	
Label_3749:
	var_86_bool = 0; // 0xea5 MovB
	return 0; // 0xea6 Return
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
	func_2879(var_170_cvector); // 0x4c4 NEW_2
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
	func_2879(var_182_cvector); // 0x4df NEW_2
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


func_3236(var_37_bool, var_38_int, var_39_int)
{
	var_40_int = 0; var_41_int = 0; // 0xca4 PushV
	irand(var_41_int, var_39_int); // 0xca5 Func
	var_37_bool = var_41_int < var_38_int; // 0xca7 LT2
	return 2; // 0xca8 Return
}


func_3751(var_103_bool, var_104_object)
{
	var_105_bool = 0; var_106_object = Obj(); // 0xea8 PushV
	var_106_object = var_104_object; // 0xea9 Mov
	func_3836(var_106_object); // 0xeaa NEW_2
	if(var_105_bool == 0) goto Label_3759; // 0xeac JumpB
	var_103_bool = 1; // 0xead MovB
	return 0; // 0xeae Return
	
Label_3759:
	var_103_bool = 0; // 0xeaf MovB
	return 0; // 0xeb0 Return
}


func_3241(var_85_float, var_86_cvector, var_87_cvector)
{
	var_88_int = var_86_cvector | var_87_cvector; // 0xcaa Or
	var_89_int = var_86_cvector | var_86_cvector; // 0xcab Or
	var_90_int = var_87_cvector | var_87_cvector; // 0xcac Or
	var_91_float = var_89_int * var_90_int; // 0xcad Mult
	var_92_float = sqrt(var_91_float); // 0xcae Sqrt
	var_85_float = var_88_int / var_88_int; // 0xcaf Div2
	return 0; // 0xcb0 Return
}


func_3761(var_118_bool, var_119_object)
{
	var_120_bool = 0; var_121_object = Obj(); // 0xeb2 PushV
	var_121_object = var_119_object; // 0xeb3 Mov
	func_3843(var_121_object); // 0xeb4 NEW_2
	if(var_120_bool == 0) goto Label_3769; // 0xeb6 JumpB
	var_118_bool = 1; // 0xeb7 MovB
	return 0; // 0xeb8 Return
	
Label_3769:
	var_118_bool = 0; // 0xeb9 MovB
	return 0; // 0xeba Return
}


func_3249(var_75_float, var_76_cvector, var_77_cvector)
{
	var_78_float = GetByIndex(var_76_cvector, 0); // 0xcb2 PushE
	var_79_float = GetByIndex(var_77_cvector, 0); // 0xcb3 PushE
	var_80_float = var_78_float * var_79_float; // 0xcb4 Mult
	var_81_float = GetByIndex(var_76_cvector, 2); // 0xcb5 PushE
	var_82_float = GetByIndex(var_77_cvector, 2); // 0xcb6 PushE
	var_83_float = var_81_float * var_82_float; // 0xcb7 Mult
	var_75_float = var_80_float + var_83_float; // 0xcb8 Add2
	return 0; // 0xcb9 Return
}


func_1715(var_0_bool, var_74_bool)
{
	var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0); // 0x6b3 PushV
	GetDirection(var_77_cvector); // 0x6b4 Func
	var_79_cvector = CVector(0,0,0); var_80_object = Obj(); // 0x6b6 PushV
	var_80_object = var_0_bool; // 0x6b7 MovT
	func_2884(var_80_object); // 0x6b8 NEW_2
	var_78_cvector = var_79_cvector; // 0x6b9 Mov
	var_85_float = 0; var_86_cvector = CVector(0,0,0); var_87_cvector = CVector(0,0,0); // 0x6bb PushV
	var_86_cvector = var_77_cvector; // 0x6bc Mov
	var_87_cvector = var_78_cvector; // 0x6bd Mov
	func_3241(var_85_float, var_86_cvector, var_87_cvector); // 0x6be NEW_2
	var_93_float = -0.34202; // 0x6c0 PushF
	var_74_bool = var_85_float >= var_93_float; // 0x6c1 GE2
	return 4; // 0x6c2 Return
}


func_3258(var_84_float, var_85_cvector)
{
	var_86_float = GetByIndex(var_85_cvector, 0); // 0xcbb PushE
	var_87_float = GetByIndex(var_85_cvector, 0); // 0xcbc PushE
	var_88_float = var_86_float * var_87_float; // 0xcbd Mult
	var_89_float = GetByIndex(var_85_cvector, 2); // 0xcbe PushE
	var_90_float = GetByIndex(var_85_cvector, 2); // 0xcbf PushE
	var_91_float = var_89_float * var_90_float; // 0xcc0 Mult
	var_92_int = var_88_float + var_91_float; // 0xcc1 Add
	var_84_float = sqrt(var_92_int); // 0xcc2 Sqrt2
	return 0; // 0xcc3 Return
}


func_3771(var_109_bool, var_110_object)
{
	var_111_bool = 0; var_112_object = Obj(); // 0xebc PushV
	var_112_object = var_110_object; // 0xebd Mov
	func_3850(var_112_object); // 0xebe NEW_2
	if(var_111_bool == 0) goto Label_3779; // 0xec0 JumpB
	var_109_bool = 1; // 0xec1 MovB
	return 0; // 0xec2 Return
	
Label_3779:
	var_109_bool = 0; // 0xec3 MovB
	return 0; // 0xec4 Return
}


func_1731(var_0_bool, var_47_int, var_48_object)
{
	var_50_object = Obj(); var_51_bool = 0; var_52_int = 0; var_53_bool = 0; var_54_object = Obj(); var_55_bool = 0; var_56_int = 0; var_57_bool = 0; // 0x6c3 PushV
	var_0_bool = var_48_object; // 0x6c4 TMov
	var_58_bool = 0; var_59_object = Obj(); var_60_float = 0; // 0x6c5 PushV
	var_59_object = var_48_object; // 0x6c6 Mov
	var_60_float = 70.0; // 0x6c7 MovF
	func_2997(var_59_object, var_60_float); // 0x6c8 NEW_2
	var_105_bool = var_58_bool == 0; // 0x6ca Not
	if(var_105_bool == 0) goto Label_1742; // 0x6cb JumpB
	var_47_int = -2; // 0x6cc MovI
	return 8; // 0x6cd Return
	
Label_1742:
	CreateDialog(var_54_object); // 0x6ce Func
	var_106_int = 0; // 0x6d0 PushV
	func_4003(var_106_int); // 0x6d1 NEW_2
	SetNPCName(var_106_int); // 0x6d3 ObjFunc
	var_107_int = 0; // 0x6d5 PushV
	func_4001(var_107_int); // 0x6d6 NEW_2
	SetNPCDescription(var_107_int); // 0x6d8 ObjFunc
	var_108_string = ""; // 0x6da PushV
	func_4005(var_108_string); // 0x6db NEW_2
	SetPhoto(var_108_string); // 0x6dd ObjFunc
	var_109_string = ""; // 0x6df PushV
	func_4007(var_109_string); // 0x6e0 NEW_2
	SetPhoto2(var_109_string); // 0x6e2 ObjFunc
	var_110_int = 0; // 0x6e4 PushV
	func_3889(var_110_int); // 0x6e5 NEW_2
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
	var_318_bool = var_57_bool == 0; // 0x6fb Not
	if(var_318_bool == 0) goto Label_1794; // 0x6fc JumpB
	sync(); // 0x6fd Func
	IsDialogEnd(var_57_bool); // 0x6ff ObjFunc
	goto Label_1787; // 0x701 Jump
	
Label_1794:
	var_319_object = Obj(); // 0x702 PushV
	var_319_object = var_48_object; // 0x703 Mov
	func_3066(); // 0x704 NEW_2
	StopDialog(var_54_object); // 0x706 Func
	GetReturnValue(var_56_int); // 0x708 ObjFunc
	var_47_int = var_56_int; // 0x70a Mov
	return 8; // 0x70b Return
}


func_3268(var_72_float, var_73_cvector, var_74_cvector)
{
	var_75_float = 0; var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0); // 0xcc5 PushV
	var_76_cvector = var_73_cvector; // 0xcc6 Mov
	var_77_cvector = var_74_cvector; // 0xcc7 Mov
	func_3249(var_75_float, var_76_cvector, var_77_cvector); // 0xcc8 NEW_2
	var_84_float = 0; var_85_cvector = CVector(0,0,0); // 0xcca PushV
	var_85_cvector = var_73_cvector; // 0xccb Mov
	func_3258(var_84_float, var_85_cvector); // 0xccc NEW_2
	var_93_float = 0; var_94_cvector = CVector(0,0,0); // 0xcce PushV
	var_94_cvector = var_74_cvector; // 0xccf Mov
	func_3258(var_93_float, var_94_cvector); // 0xcd0 NEW_2
	var_95_float = var_84_float * var_93_float; // 0xcd2 Mult
	var_72_float = var_75_float / var_75_float; // 0xcd3 Div2
	return 0; // 0xcd4 Return
}


func_3781(var_164_bool, var_165_object)
{
	var_166_bool = 0; var_167_object = Obj(); // 0xec6 PushV
	var_167_object = var_165_object; // 0xec7 Mov
	func_3857(var_167_object); // 0xec8 NEW_2
	if(var_166_bool == 0) goto Label_3789; // 0xeca JumpB
	var_164_bool = 1; // 0xecb MovB
	return 0; // 0xecc Return
	
Label_3789:
	var_164_bool = 0; // 0xecd MovB
	return 0; // 0xece Return
}


func_710(var_0_bool)
{
	var_82_object = Obj(); // 0x2c6 PushV
	var_82_object = var_0_bool; // 0x2c7 MovT
	func_3176(var_82_object); // 0x2c8 NEW_2
	return 0; // 0x2ca Return
}


func_3791(var_194_bool, var_195_object)
{
	var_196_bool = 0; var_197_object = Obj(); // 0xed0 PushV
	var_197_object = var_195_object; // 0xed1 Mov
	func_3878(var_197_object); // 0xed2 NEW_2
	if(var_196_bool == 0) goto Label_3799; // 0xed4 JumpB
	var_194_bool = 1; // 0xed5 MovB
	return 0; // 0xed6 Return
	
Label_3799:
	var_194_bool = 0; // 0xed7 MovB
	return 0; // 0xed8 Return
}


func_3285(var_43_int, var_44_string)
{
	var_45_int = 0; var_46_int = 0; // 0xcd5 PushV
	GetVariable(var_44_string, var_46_int); // 0xcd6 Func
	var_43_int = var_46_int; // 0xcd8 Mov
	return 2; // 0xcd9 Return
}


func_3801(var_160_bool)
{
	var_162_int = 0; // 0xeda PushV
	func_3290(var_162_int); // 0xedb NEW_2
	var_163_int = 1; // 0xedd PushI
	var_160_bool = var_162_int == var_163_int; // 0xede Eq2
	return 0; // 0xedf Return
}


func_3290(var_72_int)
{
	var_73_float = 0; var_74_float = 0; // 0xcda PushV
	GetGameTime(var_74_float); // 0xcdb Func
	var_75_int = 1; // 0xcdd PushI
	var_76_int = 0; // 0xcde PushV
	var_77_int = 24; // 0xcdf PushI
	var_76_int = var_74_float / var_74_float; // 0xce0 Div2
	var_72_int = var_75_int + var_76_int; // 0xce1 Add2
	return 2; // 0xce2 Return
}


func_3808(var_99_bool)
{
	var_101_int = 0; // 0xee1 PushV
	func_3290(var_101_int); // 0xee2 NEW_2
	var_102_int = 2; // 0xee4 PushI
	var_99_bool = var_101_int == var_102_int; // 0xee5 Eq2
	return 0; // 0xee6 Return
}


func_3299(var_169_int)
{
	var_170_float = 0; var_171_float = 0; // 0xce3 PushV
	GetGameTime(var_171_float); // 0xce4 Func
	var_172_int = 0; // 0xce6 PushV
	var_172_int = var_171_float; // 0xce7 Mov
	var_173_int = 24; // 0xce8 PushI
	var_169_int = var_172_int % var_173_int; // 0xce9 Mod2
	return 2; // 0xcea Return
}


func_3815(var_71_bool)
{
	var_73_int = 0; // 0xee8 PushV
	func_3290(var_73_int); // 0xee9 NEW_2
	var_79_int = 3; // 0xeeb PushI
	var_71_bool = var_73_int == var_79_int; // 0xeec Eq2
	return 0; // 0xeed Return
}


func_3822(var_82_bool)
{
	var_84_int = 0; // 0xeef PushV
	func_3290(var_84_int); // 0xef0 NEW_2
	var_85_int = 4; // 0xef2 PushI
	var_82_bool = var_84_int == var_85_int; // 0xef3 Eq2
	return 0; // 0xef4 Return
}


func_3315(var_26_bool, var_27_object, var_28_string)
{
	var_29_string = "unholster"; // 0xcf4 PushS
	var_30_bool = var_28_string == var_29_string; // 0xcf5 Eq
	if(var_30_bool == 0) goto Label_3326; // 0xcf6 JumpB
	var_31_bool = 0; var_32_object = Obj(); // 0xcf7 PushV
	var_32_object = var_27_object; // 0xcf8 Mov
	func_3606(var_31_bool, var_32_object); // 0xcf9 NEW_2
	var_26_bool = var_31_bool; // 0xcfa Mov
	return 0; // 0xcfc Return
	
Label_3326:
	var_35_string = "player_shot"; // 0xcfe PushS
	var_36_bool = var_28_string == var_35_string; // 0xcff Eq
	if(var_36_bool == 0) goto Label_3336; // 0xd00 JumpB
	var_37_bool = 0; var_38_object = Obj(); // 0xd01 PushV
	var_38_object = var_27_object; // 0xd02 Mov
	func_3619(var_37_bool, var_38_object); // 0xd03 NEW_2
	var_26_bool = var_37_bool; // 0xd04 Mov
	return 0; // 0xd06 Return
	
Label_3336:
	var_52_string = "battle"; // 0xd08 PushS
	var_53_bool = var_28_string == var_52_string; // 0xd09 Eq
	if(var_53_bool == 0) goto Label_3345; // 0xd0a JumpB
	var_54_bool = 0; var_55_object = Obj(); // 0xd0b PushV
	var_55_object = var_27_object; // 0xd0c Mov
	func_3642(var_54_bool, var_55_object); // 0xd0d NEW_2
	var_26_bool = var_54_bool; // 0xd0e Mov
	return 0; // 0xd10 Return
	
Label_3345:
	var_26_bool = 0; // 0xd11 MovB
	return 0; // 0xd12 Return
}


func_3829(var_88_bool)
{
	var_90_int = 0; // 0xef6 PushV
	func_3290(var_90_int); // 0xef7 NEW_2
	var_91_int = 5; // 0xef9 PushI
	var_88_bool = var_90_int == var_91_int; // 0xefa Eq2
	return 0; // 0xefb Return
}


func_251(var_2_bool)
{
	var_23_int = 110; // 0xfb PushI
	KillTimer(var_23_int); // 0xfc Func
	var_2_bool = 0; // 0xfe TMovB
	func_387(var_21_string, var_22_bool); // 0x100 NEW_2
	return 0; // 0x102 Return
}


func_3836(var_105_bool)
{
	var_107_int = 0; // 0xefd PushV
	func_3290(var_107_int); // 0xefe NEW_2
	var_108_int = 6; // 0xf00 PushI
	var_105_bool = var_107_int == var_108_int; // 0xf01 Eq2
	return 0; // 0xf02 Return
}


func_259(var_2_bool)
{
	var_72_int = 110; // 0x103 PushI
	KillTimer(var_72_int); // 0x104 Func
	var_2_bool = 0; // 0x106 TMovB
	func_394(var_26_bool, var_27_int); // 0x108 NEW_2
	return 0; // 0x10a Return
}


func_3843(var_120_bool)
{
	var_122_int = 0; // 0xf04 PushV
	func_3290(var_122_int); // 0xf05 NEW_2
	var_123_int = 8; // 0xf07 PushI
	var_120_bool = var_122_int == var_123_int; // 0xf08 Eq2
	return 0; // 0xf09 Return
}


func_3850(var_111_bool)
{
	var_113_int = 0; // 0xf0b PushV
	func_3290(var_113_int); // 0xf0c NEW_2
	var_114_int = 10; // 0xf0e PushI
	var_111_bool = var_113_int == var_114_int; // 0xf0f Eq2
	return 0; // 0xf10 Return
}


func_1805(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_119_object, var_120_object)
{
	var_0_bool = var_120_object; // 0x70e TMov
	var_1_bool = var_119_object; // 0x70f TMov
	var_3_bool = 0; // 0x710 TMovB
	var_125_int = 1; // 0x711 PushI
	if(var_125_int == 0) goto Label_2025; // 0x712 JumpB
	var_126_bool = 0; var_127_object = Obj(); // 0x713 PushV
	var_127_object = var_1_bool; // 0x714 MovT
	func_3677(var_127_object); // 0x715 NEW_2
	if(var_126_bool == 0) goto Label_1907; // 0x717 JumpB
	var_134_string = ""; // 0x718 PushV
	var_134_string = "Neutral"; // 0x719 MovS
	func_2055(var_120_object, var_134_string); // 0x71a NEW_2
	var_151_int = 543287; // 0x71c PushI
	SetMessage(var_151_int); // 0x71d TObjFunc
	ClearReplies(); // 0x71f TObjFunc
	var_152_bool = 0; // 0x721 PushV
	var_152_bool = 1; // 0x722 MovB
	var_153_bool = 0; // 0x723 PushV
	var_153_bool = 1; // 0x724 MovB
	var_154_bool = 0; var_155_object = Obj(); // 0x725 PushV
	var_155_object = var_1_bool; // 0x726 MovT
	func_3721(var_154_bool, var_155_object); // 0x727 NEW_2
	if(var_154_bool == 0) goto Label_1840; // 0x729 JumpB
	var_165_bool = 0; var_166_object = Obj(); // 0x72a PushV
	var_166_object = var_1_bool; // 0x72b MovT
	func_3731(var_165_bool, var_166_object); // 0x72c NEW_2
	if(var_165_bool == 0) goto Label_1840; // 0x72e JumpB
	var_153_bool = 0; // 0x72f MovB
	
Label_1840:
	if(var_153_bool == 0) goto Label_1847; // 0x730 JumpB
	var_171_bool = 0; var_172_object = Obj(); // 0x731 PushV
	var_172_object = var_1_bool; // 0x732 MovT
	func_3741(var_171_bool, var_172_object); // 0x733 NEW_2
	if(var_171_bool == 0) goto Label_1847; // 0x735 JumpB
	var_152_bool = 0; // 0x736 MovB
	
Label_1847:
	if(var_152_bool == 0) goto Label_1853; // 0x737 JumpB
	var_177_int = 543290; // 0x738 PushI
	var_178_int = 45747; // 0x739 PushI
	var_179_int = 45746; // 0x73a PushI
	AddReply(var_177_int, var_178_int, var_179_int); // 0x73b TObjFunc
	
Label_1853:
	var_180_bool = 0; // 0x73d PushV
	var_180_bool = 1; // 0x73e MovB
	var_181_bool = 0; // 0x73f PushV
	var_181_bool = 1; // 0x740 MovB
	var_182_bool = 0; var_183_object = Obj(); // 0x741 PushV
	var_183_object = var_1_bool; // 0x742 MovT
	func_3711(var_182_bool, var_183_object); // 0x743 NEW_2
	if(var_182_bool == 0) goto Label_1868; // 0x745 JumpB
	var_188_bool = 0; var_189_object = Obj(); // 0x746 PushV
	var_189_object = var_1_bool; // 0x747 MovT
	func_3751(var_188_bool, var_189_object); // 0x748 NEW_2
	if(var_188_bool == 0) goto Label_1868; // 0x74a JumpB
	var_181_bool = 0; // 0x74b MovB
	
Label_1868:
	if(var_181_bool == 0) goto Label_1875; // 0x74c JumpB
	var_194_bool = 0; var_195_object = Obj(); // 0x74d PushV
	var_195_object = var_1_bool; // 0x74e MovT
	func_3771(var_194_bool, var_195_object); // 0x74f NEW_2
	if(var_194_bool == 0) goto Label_1875; // 0x751 JumpB
	var_180_bool = 0; // 0x752 MovB
	
Label_1875:
	if(var_180_bool == 0) goto Label_1881; // 0x753 JumpB
	var_200_int = 543294; // 0x754 PushI
	var_201_int = 45752; // 0x755 PushI
	var_202_int = 45750; // 0x756 PushI
	AddReply(var_200_int, var_201_int, var_202_int); // 0x757 TObjFunc
	
Label_1881:
	var_203_bool = 0; var_204_object = Obj(); // 0x759 PushV
	var_204_object = var_1_bool; // 0x75a MovT
	func_3761(var_203_bool, var_204_object); // 0x75b NEW_2
	if(var_203_bool == 0) goto Label_1891; // 0x75d JumpB
	var_209_int = 543295; // 0x75e PushI
	var_210_int = 45761; // 0x75f PushI
	var_211_int = 45751; // 0x760 PushI
	AddReply(var_209_int, var_210_int, var_211_int); // 0x761 TObjFunc
	
Label_1891:
	var_212_int = 543288; // 0x763 PushI
	var_213_int = -1; // 0x764 PushI
	var_214_int = 45744; // 0x765 PushI
	AddReply(var_212_int, var_213_int, var_214_int); // 0x766 TObjFunc
	var_215_int = 543289; // 0x768 PushI
	var_216_int = -1; // 0x769 PushI
	var_217_int = 45745; // 0x76a PushI
	AddReply(var_215_int, var_216_int, var_217_int); // 0x76b TObjFunc
	var_218_int = 543304; // 0x76d PushI
	var_219_int = -1; // 0x76e PushI
	var_220_int = 45760; // 0x76f PushI
	AddReply(var_218_int, var_219_int, var_220_int); // 0x770 TObjFunc
	goto Label_2025; // 0x772 Jump
	
Label_2025:
	var_221_bool = 0; // 0x7e9 PushV
	func_4009(var_221_bool); // 0x7ea NEW_2
	if(var_221_bool == 0) goto Label_2040; // 0x7ec JumpB
	
Label_2029:
	lshWaitForAnimEnd(); // 0x7ed Func
	var_222_bool = var_3_bool; // 0x7ef PushT
	if(var_222_bool == 0) goto Label_2034; // 0x7f0 JumpB
	goto Label_2039; // 0x7f1 Jump
	
Label_2039:
	goto Label_2054; // 0x7f7 Jump
	
Label_2054:
	return 0; // 0x806 Return
	
Label_2034:
	var_223_string = ""; // 0x7f2 PushV
	var_223_string = var_2_bool; // 0x7f3 MovT
	func_3145(var_223_string); // 0x7f4 NEW_2
	goto Label_2029; // 0x7f6 Jump
	
Label_2040:
	var_234_string = "all"; // 0x7f8 PushS
	var_235_string = "idle"; // 0x7f9 PushS
	PlayAnimation(var_234_string, var_235_string); // 0x7fa Func
	
Label_2044:
	WaitForAnimEnd(); // 0x7fc Func
	var_236_bool = var_3_bool; // 0x7fe PushT
	if(var_236_bool == 0) goto Label_2049; // 0x7ff JumpB
	goto Label_2054; // 0x800 Jump
	
Label_2049:
	var_237_string = "all"; // 0x801 PushS
	var_238_string = "idle"; // 0x802 PushS
	PlayAnimation(var_237_string, var_238_string); // 0x803 Func
	goto Label_2044; // 0x805 Jump
	
Label_1907:
	var_239_string = ""; // 0x773 PushV
	var_239_string = "Neutral"; // 0x774 MovS
	func_2055(var_120_object, var_239_string); // 0x775 NEW_2
	var_240_int = 537723; // 0x777 PushI
	SetMessage(var_240_int); // 0x778 TObjFunc
	ClearReplies(); // 0x77a TObjFunc
	var_241_bool = 0; var_242_object = Obj(); // 0x77c PushV
	var_242_object = var_1_bool; // 0x77d MovT
	func_3665(var_242_object); // 0x77e NEW_2
	if(var_241_bool == 0) goto Label_1926; // 0x780 JumpB
	var_247_int = 537724; // 0x781 PushI
	var_248_int = 39573; // 0x782 PushI
	var_249_int = 39572; // 0x783 PushI
	AddReply(var_247_int, var_248_int, var_249_int); // 0x784 TObjFunc
	
Label_1926:
	var_250_bool = 0; var_251_object = Obj(); // 0x786 PushV
	var_251_object = var_1_bool; // 0x787 MovT
	func_3665(var_251_object); // 0x788 NEW_2
	var_252_bool = var_250_bool == 0; // 0x78a Not
	if(var_252_bool == 0) goto Label_1937; // 0x78b JumpB
	var_253_int = 537728; // 0x78c PushI
	var_254_int = -1; // 0x78d PushI
	var_255_int = 39576; // 0x78e PushI
	AddReply(var_253_int, var_254_int, var_255_int); // 0x78f TObjFunc
	
Label_1937:
	var_256_bool = 0; // 0x791 PushV
	var_256_bool = 0; // 0x792 MovB
	var_257_bool = 0; // 0x793 PushV
	var_257_bool = 0; // 0x794 MovB
	var_258_bool = 0; // 0x795 PushV
	var_258_bool = 0; // 0x796 MovB
	var_259_bool = 0; var_260_object = Obj(); // 0x797 PushV
	var_260_object = var_1_bool; // 0x798 MovT
	func_3665(var_260_object); // 0x799 NEW_2
	if(var_259_bool == 0) goto Label_1954; // 0x79b JumpB
	var_261_bool = 0; var_262_object = Obj(); // 0x79c PushV
	var_262_object = var_1_bool; // 0x79d MovT
	func_3701(var_261_bool, var_262_object); // 0x79e NEW_2
	if(var_261_bool == 0) goto Label_1954; // 0x7a0 JumpB
	var_258_bool = 1; // 0x7a1 MovB
	
Label_1954:
	if(var_258_bool == 0) goto Label_1961; // 0x7a2 JumpB
	var_267_bool = 0; var_268_object = Obj(); // 0x7a3 PushV
	var_268_object = var_1_bool; // 0x7a4 MovT
	func_3781(var_267_bool, var_268_object); // 0x7a5 NEW_2
	if(var_267_bool == 0) goto Label_1961; // 0x7a7 JumpB
	var_257_bool = 1; // 0x7a8 MovB
	
Label_1961:
	if(var_257_bool == 0) goto Label_1968; // 0x7a9 JumpB
	var_282_bool = 0; var_283_object = Obj(); // 0x7aa PushV
	var_283_object = var_1_bool; // 0x7ab MovT
	func_3689(var_283_object); // 0x7ac NEW_2
	if(var_282_bool == 0) goto Label_1968; // 0x7ae JumpB
	var_256_bool = 1; // 0x7af MovB
	
Label_1968:
	if(var_256_bool == 0) goto Label_1974; // 0x7b0 JumpB
	var_288_int = 537729; // 0x7b1 PushI
	var_289_int = 39578; // 0x7b2 PushI
	var_290_int = 39577; // 0x7b3 PushI
	AddReply(var_288_int, var_289_int, var_290_int); // 0x7b4 TObjFunc
	
Label_1974:
	var_291_bool = 0; // 0x7b6 PushV
	var_291_bool = 0; // 0x7b7 MovB
	var_292_bool = 0; // 0x7b8 PushV
	var_292_bool = 0; // 0x7b9 MovB
	var_293_bool = 0; var_294_object = Obj(); // 0x7ba PushV
	var_294_object = var_1_bool; // 0x7bb MovT
	func_3665(var_294_object); // 0x7bc NEW_2
	if(var_293_bool == 0) goto Label_1989; // 0x7be JumpB
	var_295_bool = 0; var_296_object = Obj(); // 0x7bf PushV
	var_296_object = var_1_bool; // 0x7c0 MovT
	func_3701(var_295_bool, var_296_object); // 0x7c1 NEW_2
	if(var_295_bool == 0) goto Label_1989; // 0x7c3 JumpB
	var_292_bool = 1; // 0x7c4 MovB
	
Label_1989:
	if(var_292_bool == 0) goto Label_1996; // 0x7c5 JumpB
	var_297_bool = 0; var_298_object = Obj(); // 0x7c6 PushV
	var_298_object = var_1_bool; // 0x7c7 MovT
	func_3791(var_297_bool, var_298_object); // 0x7c8 NEW_2
	if(var_297_bool == 0) goto Label_1996; // 0x7ca JumpB
	var_291_bool = 1; // 0x7cb MovB
	
Label_1996:
	if(var_291_bool == 0) goto Label_2002; // 0x7cc JumpB
	var_304_int = 537740; // 0x7cd PushI
	var_305_int = 39589; // 0x7ce PushI
	var_306_int = 39588; // 0x7cf PushI
	AddReply(var_304_int, var_305_int, var_306_int); // 0x7d0 TObjFunc
	
Label_2002:
	var_307_bool = 0; var_308_object = Obj(); // 0x7d2 PushV
	var_308_object = var_1_bool; // 0x7d3 MovT
	func_3741(var_307_bool, var_308_object); // 0x7d4 NEW_2
	if(var_307_bool == 0) goto Label_2012; // 0x7d6 JumpB
	var_309_int = 537755; // 0x7d7 PushI
	var_310_int = 39604; // 0x7d8 PushI
	var_311_int = 39603; // 0x7d9 PushI
	AddReply(var_309_int, var_310_int, var_311_int); // 0x7da TObjFunc
	
Label_2012:
	var_312_int = 537783; // 0x7dc PushI
	var_313_int = -1; // 0x7dd PushI
	var_314_int = 39634; // 0x7de PushI
	AddReply(var_312_int, var_313_int, var_314_int); // 0x7df TObjFunc
	var_315_int = 537784; // 0x7e1 PushI
	var_316_int = -1; // 0x7e2 PushI
	var_317_int = 39635; // 0x7e3 PushI
	AddReply(var_315_int, var_316_int, var_317_int); // 0x7e4 TObjFunc
	goto Label_2025; // 0x7e6 Jump
}


func_3857(var_166_bool)
{
	var_168_bool = 0; // 0xf12 PushV
	var_168_bool = 0; // 0xf13 MovB
	var_169_int = 0; // 0xf14 PushV
	func_3299(var_169_int); // 0xf15 NEW_2
	var_174_int = 0; // 0xf17 PushI
	var_175_bool = var_169_int >= var_174_int; // 0xf18 GE
	if(var_175_bool == 0) goto Label_3873; // 0xf19 JumpB
	var_176_int = 0; // 0xf1a PushV
	func_3299(var_176_int); // 0xf1b NEW_2
	var_177_int = 12; // 0xf1d PushI
	var_178_bool = var_176_int < var_177_int; // 0xf1e LT
	if(var_178_bool == 0) goto Label_3873; // 0xf1f JumpB
	var_168_bool = 1; // 0xf20 MovB
	
Label_3873:
	if(var_168_bool == 0) goto Label_3876; // 0xf21 JumpB
	var_166_bool = 1; // 0xf22 MovB
	return 0; // 0xf23 Return
	
Label_3876:
	var_166_bool = 0; // 0xf24 MovB
	return 0; // 0xf25 Return
}


func_3347(var_60_object, var_61_string)
{
	var_62_string = "unholster"; // 0xd14 PushS
	var_63_bool = var_61_string == var_62_string; // 0xd15 Eq
	if(var_63_bool == 0) goto Label_3356; // 0xd16 JumpB
	var_64_object = Obj(); // 0xd17 PushV
	var_64_object = var_60_object; // 0xd18 Mov
	func_3611(var_64_object); // 0xd19 NEW_2
	goto Label_3371; // 0xd1b Jump
	
Label_3371:
	return 0; // 0xd2b Return
	
Label_3356:
	var_137_string = "player_shot"; // 0xd1c PushS
	var_138_bool = var_61_string == var_137_string; // 0xd1d Eq
	if(var_138_bool == 0) goto Label_3364; // 0xd1e JumpB
	var_139_object = Obj(); // 0xd1f PushV
	var_139_object = var_60_object; // 0xd20 Mov
	func_3634(var_139_object); // 0xd21 NEW_2
	goto Label_3371; // 0xd23 Jump
	
Label_3364:
	var_205_string = "battle"; // 0xd24 PushS
	var_206_bool = var_61_string == var_205_string; // 0xd25 Eq
	if(var_206_bool == 0) goto Label_3371; // 0xd26 JumpB
	var_207_object = Obj(); // 0xd27 PushV
	var_207_object = var_60_object; // 0xd28 Mov
	func_3649(var_207_object); // 0xd29 NEW_2
}


func_276(var_2_bool, var_23_object)
{
	var_24_bool = 0; var_25_int = 0; var_26_bool = 0; var_27_int = 0; // 0x114 PushV
	var_28_bool = 0; var_29_object = Obj(); // 0x115 PushV
	var_29_object = var_23_object; // 0x116 Mov
	func_2957(var_28_bool, var_29_object); // 0x117 NEW_2
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
	func_3467(var_66_object); // 0x126 NEW_2
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
	func_3476(var_73_object); // 0x134 NEW_2
	var_2_bool = 1; // 0x136 TMovB
	var_138_int = 110; // 0x137 PushI
	var_139_float = 10.0; // 0x138 PushF
	SetTimer(var_138_int, var_139_float); // 0x139 Func
	
Label_315:
	return 4; // 0x13b Return
}


func_1311(var_2_bool)
{
	Stop(); // 0x51f Func
	var_23_int = 120; // 0x521 PushI
	KillTimer(var_23_int); // 0x522 Func
	var_2_bool = 1; // 0x524 TMovB
	return 0; // 0x525 Return
}


func_3878(var_196_bool)
{
	var_198_int = 0; // 0xf27 PushV
	func_3299(var_198_int); // 0xf28 NEW_2
	var_199_int = 12; // 0xf2a PushI
	var_200_bool = var_198_int >= var_199_int; // 0xf2b GE
	if(var_200_bool == 0) goto Label_3887; // 0xf2c JumpB
	var_196_bool = 1; // 0xf2d MovB
	return 0; // 0xf2e Return
	
Label_3887:
	var_196_bool = 0; // 0xf2f MovB
	return 0; // 0xf30 Return
}


func_3372(var_23_bool, var_24_object)
{
	var_25_bool = 0; var_26_bool = 0; // 0xd2c PushV
	var_27_bool = 0; // 0xd2d PushV
	var_27_bool = 0; // 0xd2e MovB
	var_28_bool = 0; var_29_object = Obj(); // 0xd2f PushV
	var_29_object = var_24_object; // 0xd30 Mov
	func_3606(var_28_bool, var_29_object); // 0xd31 NEW_2
	if(var_28_bool == 0) goto Label_3386; // 0xd33 JumpB
	var_32_bool = 0; var_33_object = Obj(); // 0xd34 PushV
	var_33_object = var_24_object; // 0xd35 Mov
	func_2899(var_32_bool, var_33_object); // 0xd36 NEW_2
	if(var_32_bool == 0) goto Label_3386; // 0xd38 JumpB
	var_27_bool = 1; // 0xd39 MovB
	
Label_3386:
	if(var_27_bool == 0) goto Label_3393; // 0xd3a JumpB
	IsWeaponHolstered(var_26_bool); // 0xd3b ObjFunc
	var_36_bool = var_26_bool == 0; // 0xd3d Not
	if(var_36_bool == 0) goto Label_3393; // 0xd3e JumpB
	var_23_bool = 1; // 0xd3f MovB
	return 2; // 0xd40 Return
	
Label_3393:
	var_23_bool = 0; // 0xd41 MovB
	return 2; // 0xd42 Return
}


func_1327(var_0_bool, var_74_bool)
{
	var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0); // 0x52f PushV
	GetDirection(var_77_cvector); // 0x530 Func
	var_79_cvector = CVector(0,0,0); var_80_object = Obj(); // 0x532 PushV
	var_80_object = var_0_bool; // 0x533 MovT
	func_2884(var_80_object); // 0x534 NEW_2
	var_78_cvector = var_79_cvector; // 0x535 Mov
	var_85_float = 0; var_86_cvector = CVector(0,0,0); var_87_cvector = CVector(0,0,0); // 0x537 PushV
	var_86_cvector = var_77_cvector; // 0x538 Mov
	var_87_cvector = var_78_cvector; // 0x539 Mov
	func_3241(var_85_float, var_86_cvector, var_87_cvector); // 0x53a NEW_2
	var_93_float = -0.34202; // 0x53c PushF
	var_74_bool = var_85_float >= var_93_float; // 0x53d GE2
	return 4; // 0x53e Return
}


func_3889(var_110_int)
{
	var_111_int = 0; var_112_int = 0; // 0xf31 PushV
	var_113_string = "branch"; // 0xf32 PushS
	GetVariable(var_113_string, var_112_int); // 0xf33 Func
	var_114_int = 0; // 0xf35 PushI
	var_115_bool = var_112_int == var_114_int; // 0xf36 Eq
	if(var_115_bool == 0) goto Label_3899; // 0xf37 JumpB
	var_110_int = 1; // 0xf38 MovI
	return 2; // 0xf39 Return
	
Label_3899:
	var_116_int = 1; // 0xf3b PushI
	var_117_bool = var_112_int == var_116_int; // 0xf3c Eq
	if(var_117_bool == 0) goto Label_3904; // 0xf3d JumpB
	var_110_int = 2; // 0xf3e MovI
	return 2; // 0xf3f Return
	
Label_3904:
	var_110_int = 3; // 0xf40 MovI
	return 2; // 0xf41 Return
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


func_2879(var_94_cvector)
{
	var_95_cvector = CVector(0,0,0); var_96_cvector = CVector(0,0,0); // 0xb3f PushV
	GetPosition(var_96_cvector); // 0xb40 Func
	var_94_cvector = var_96_cvector; // 0xb42 Mov
	return 2; // 0xb43 Return
}


func_3906(var_40_int)
{
	var_41_int = 0; var_42_int = 0; // 0xf42 PushV
	var_43_string = "branch"; // 0xf43 PushS
	GetVariable(var_43_string, var_42_int); // 0xf44 Func
	var_40_int = var_42_int; // 0xf46 Mov
	return 2; // 0xf47 Return
}


func_3395(var_39_object)
{
	var_40_object = Obj(); // 0xd44 PushV
	var_40_object = var_39_object; // 0xd45 Mov
	func_3611(var_40_object); // 0xd46 NEW_2
	return 0; // 0xd48 Return
}


func_2884(var_79_cvector)
{
	var_81_cvector = CVector(0,0,0); var_82_cvector = CVector(0,0,0); var_83_cvector = CVector(0,0,0); var_84_cvector = CVector(0,0,0); // 0xb44 PushV
	GetPosition(var_83_cvector); // 0xb45 Func
	GetPosition(var_84_cvector); // 0xb47 ObjFunc
	var_79_cvector = var_84_cvector - var_83_cvector; // 0xb49 Sub2
	return 4; // 0xb4a Return
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
	func_3226(var_52_cvector, var_53_cvector); // 0x550 NEW_2
	var_59_float = 0.75; // 0x552 PushF
	var_60_float = var_46_cvector * var_59_float; // 0x553 Mult
	var_51_cvector = var_52_cvector + var_60_float; // 0x554 Add2
	func_3226(var_50_cvector, var_51_cvector); // 0x555 NEW_2
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


func_3912(var_39_object)
{
	var_40_int = 0; // 0xf49 PushV
	func_3906(var_40_int); // 0xf4a NEW_2
	var_44_int = 1; // 0xf4c PushI
	var_45_bool = var_40_int == var_44_int; // 0xf4d Eq
	if(var_45_bool == 0) goto Label_3922; // 0xf4e JumpB
	WorkWithCorpse(var_39_object); // 0xf4f Func
	goto Label_3924; // 0xf51 Jump
	
Label_3924:
	return 0; // 0xf54 Return
	
Label_3922:
	Barter(var_39_object); // 0xf52 Func
}


func_3401(var_25_object)
{
	var_26_bool = 0; var_27_object = Obj(); // 0xd4a PushV
	var_27_object = var_25_object; // 0xd4b Mov
	func_2899(var_26_bool, var_27_object); // 0xd4c NEW_2
	if(var_26_bool == 0) goto Label_3413; // 0xd4e JumpB
	var_30_object = Obj(); // 0xd4f PushV
	func_3220(var_30_object); // 0xd50 NEW_2
	var_33_float = -0.03; // 0xd52 PushF
	ReportReputationChange(var_25_object, var_30_object, var_33_float); // 0xd53 Func
	
Label_3413:
	return 0; // 0xd55 Return
}


func_2891(var_42_float)
{
	var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); // 0xb4b PushV
	GetPosition(var_47_cvector); // 0xb4c Func
	GetPosition(var_48_cvector); // 0xb4e ObjFunc
	var_49_cvector = var_48_cvector - var_47_cvector; // 0xb50 Sub2
	var_42_float = var_49_cvector | var_49_cvector; // 0xb51 Or2
	return 6; // 0xb52 Return
}


func_2899(var_32_bool, var_33_object)
{
	var_34_bool = 0; var_35_bool = 0; // 0xb53 PushV
	IsPlayerActor(var_33_object, var_35_bool); // 0xb54 Func
	var_32_bool = var_35_bool; // 0xb56 Mov
	return 2; // 0xb57 Return
}


func_3925(var_24_bool)
{
	var_25_int = 0; var_26_int = 0; // 0xf55 PushV
	var_27_int = 0; // 0xf56 PushI
	ClearSubContainer(var_27_int); // 0xf57 Func
	var_28_bool = var_24_bool; // 0xf59 Push
	if(var_28_bool == 0) goto Label_3953; // 0xf5a JumpB
	var_29_string = ""; var_30_int = 0; var_31_int = 0; var_32_int = 0; // 0xf5b PushV
	var_29_string = "rifle_ammo"; // 0xf5c MovS
	var_30_int = 1; // 0xf5d MovI
	var_31_int = 2; // 0xf5e MovI
	var_32_int = 2; // 0xf5f MovI
	func_3205(var_29_string, var_30_int, var_31_int, var_32_int); // 0xf60 NEW_2
	var_45_string = ""; var_46_int = 0; var_47_int = 0; var_48_int = 0; // 0xf62 PushV
	var_45_string = "revolver_ammo"; // 0xf63 MovS
	var_46_int = 1; // 0xf64 MovI
	var_47_int = 2; // 0xf65 MovI
	var_48_int = 2; // 0xf66 MovI
	func_3205(var_45_string, var_46_int, var_47_int, var_48_int); // 0xf67 NEW_2
	var_49_string = ""; var_50_int = 0; var_51_int = 0; var_52_int = 0; // 0xf69 PushV
	var_49_string = "samopal_ammo"; // 0xf6a MovS
	var_50_int = 2; // 0xf6b MovI
	var_51_int = 2; // 0xf6c MovI
	var_52_int = 2; // 0xf6d MovI
	func_3205(var_49_string, var_50_int, var_51_int, var_52_int); // 0xf6e NEW_2
	goto Label_4000; // 0xf70 Jump
	
Label_4000:
	return 2; // 0xfa0 Return
	
Label_3953:
	var_53_string = ""; var_54_int = 0; var_55_int = 0; // 0xf71 PushV
	var_53_string = "lockpick"; // 0xf72 MovS
	var_54_int = 1; // 0xf73 MovI
	var_55_int = 4; // 0xf74 MovI
	func_3194(var_53_string, var_54_int, var_55_int); // 0xf75 NEW_2
	var_62_string = ""; var_63_int = 0; var_64_int = 0; var_65_int = 0; // 0xf77 PushV
	var_62_string = "alpha_pills"; // 0xf78 MovS
	var_63_int = 1; // 0xf79 MovI
	var_64_int = 2; // 0xf7a MovI
	var_65_int = 3; // 0xf7b MovI
	func_3205(var_62_string, var_63_int, var_64_int, var_65_int); // 0xf7c NEW_2
	var_66_string = ""; var_67_int = 0; var_68_int = 0; // 0xf7e PushV
	var_66_string = "meradorm"; // 0xf7f MovS
	var_67_int = 1; // 0xf80 MovI
	var_68_int = 2; // 0xf81 MovI
	func_3194(var_66_string, var_67_int, var_68_int); // 0xf82 NEW_2
	var_69_string = ""; var_70_int = 0; var_71_int = 0; // 0xf84 PushV
	var_69_string = "powder"; // 0xf85 MovS
	var_70_int = 1; // 0xf86 MovI
	var_71_int = 15; // 0xf87 MovI
	func_3194(var_69_string, var_70_int, var_71_int); // 0xf88 NEW_2
	var_72_int = 0; // 0xf8a PushV
	func_3290(var_72_int); // 0xf8b NEW_2
	var_26_int = var_72_int; // 0xf8c Mov
	var_78_int = 4; // 0xf8e PushI
	var_79_bool = var_26_int >= var_78_int; // 0xf8f GE
	if(var_79_bool == 0) goto Label_3991; // 0xf90 JumpB
	var_80_string = ""; var_81_int = 0; var_82_int = 0; // 0xf91 PushV
	var_80_string = "beta_pills"; // 0xf92 MovS
	var_81_int = 1; // 0xf93 MovI
	var_82_int = 2; // 0xf94 MovI
	func_3194(var_80_string, var_81_int, var_82_int); // 0xf95 NEW_2
	
Label_3991:
	var_83_int = 6; // 0xf97 PushI
	var_84_bool = var_26_int >= var_83_int; // 0xf98 GE
	if(var_84_bool == 0) goto Label_4000; // 0xf99 JumpB
	var_85_string = ""; var_86_int = 0; var_87_int = 0; // 0xf9a PushV
	var_85_string = "gamma_pills"; // 0xf9b MovS
	var_86_int = 1; // 0xf9c MovI
	var_87_int = 7; // 0xf9d MovI
	func_3194(var_85_string, var_86_int, var_87_int); // 0xf9e NEW_2
}


func_3414(var_23_bool, var_24_string)
{
	var_25_object = Obj(); var_26_object = Obj(); // 0xd56 PushV
	var_27_string = "heal"; // 0xd57 PushS
	var_28_bool = var_24_string == var_27_string; // 0xd58 Eq
	if(var_28_bool == 0) goto Label_3428; // 0xd59 JumpB
	var_29_string = "player"; // 0xd5a PushS
	FindActor(var_26_object, var_29_string); // 0xd5b Func
	var_30_bool = 0; var_31_object = Obj(); // 0xd5d PushV
	var_31_object = var_26_object; // 0xd5e Mov
	func_3655(var_31_object); // 0xd5f NEW_2
	var_23_bool = var_30_bool; // 0xd60 Mov
	return 2; // 0xd62 Return
	
Label_3428:
	var_23_bool = 0; // 0xd64 MovB
	return 2; // 0xd65 Return
}


func_2904(var_51_bool, var_52_object, var_53_string)
{
	var_54_bool = 0; var_55_bool = 0; // 0xb58 PushV
	var_56_string = "HasProperty"; // 0xb59 PushS
	var_57_int = 2; // 0xb5a PushI
	var_58_bool = IsFuncExist(var_52_object, var_56_string, var_57_int); // 0xb5b FuncExist
	var_59_bool = var_58_bool == 0; // 0xb5c Not
	if(var_59_bool == 0) goto Label_2912; // 0xb5d JumpB
	var_51_bool = 0; // 0xb5e MovB
	return 2; // 0xb5f Return
	
Label_2912:
	HasProperty(var_53_string, var_55_bool); // 0xb60 ObjFunc
	var_51_bool = var_55_bool; // 0xb62 Mov
	return 2; // 0xb63 Return
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


func_2916(var_44_bool)
{
	var_46_bool = 0; var_47_bool = 0; // 0xb64 PushV
	IsDead(var_47_bool); // 0xb65 ObjFunc
	var_44_bool = var_47_bool; // 0xb67 Mov
	return 2; // 0xb68 Return
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
	func_2879(var_97_cvector); // 0x586 NEW_2
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
	func_2879(var_109_cvector); // 0x5a1 NEW_2
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


func_3430(var_34_string)
{
	var_35_object = Obj(); var_36_object = Obj(); // 0xd66 PushV
	var_37_string = "heal"; // 0xd67 PushS
	var_38_bool = var_34_string == var_37_string; // 0xd68 Eq
	if(var_38_bool == 0) goto Label_3442; // 0xd69 JumpB
	var_39_string = "player"; // 0xd6a PushS
	FindActor(var_36_object, var_39_string); // 0xd6b Func
	var_40_object = Obj(); // 0xd6d PushV
	var_40_object = var_36_object; // 0xd6e Mov
	func_3658(); // 0xd6f NEW_2
	var_36_object = 0; // 0xd71 SetNull
	
Label_3442:
	return 2; // 0xd72 Return
}


func_2921(var_33_bool, var_34_object)
{
	var_35_object = Obj(); var_36_object = Obj(); var_37_object = Obj(); var_38_object = Obj(); // 0xb69 PushV
	var_39_bool = var_34_object == 0; // 0xb6a NullEq
	if(var_39_bool == 0) goto Label_2926; // 0xb6b JumpB
	var_33_bool = 0; // 0xb6c MovB
	return 4; // 0xb6d Return
	
Label_2926:
	var_40_bool = 0; // 0xb6e PushV
	var_40_bool = 0; // 0xb6f MovB
	var_41_string = "IsDead"; // 0xb70 PushS
	var_42_int = 1; // 0xb71 PushI
	var_43_bool = IsFuncExist(var_34_object, var_41_string, var_42_int); // 0xb72 FuncExist
	if(var_43_bool == 0) goto Label_2938; // 0xb73 JumpB
	var_44_bool = 0; var_45_object = Obj(); // 0xb74 PushV
	var_45_object = var_34_object; // 0xb75 Mov
	func_2916(var_45_object); // 0xb76 NEW_2
	if(var_44_bool == 0) goto Label_2938; // 0xb78 JumpB
	var_40_bool = 1; // 0xb79 MovB
	
Label_2938:
	if(var_40_bool == 0) goto Label_2941; // 0xb7a JumpB
	var_33_bool = 0; // 0xb7b MovB
	return 4; // 0xb7c Return
	
Label_2941:
	GetScene(var_37_object); // 0xb7d Func
	var_48_bool = var_37_object == 0; // 0xb7f NullEq
	if(var_48_bool == 0) goto Label_2947; // 0xb80 JumpB
	var_33_bool = 0; // 0xb81 MovB
	return 4; // 0xb82 Return
	
Label_2947:
	GetScene(var_38_object); // 0xb83 ObjFunc
	var_49_bool = var_37_object != var_38_object; // 0xb85 Neq
	if(var_49_bool == 0) goto Label_2953; // 0xb86 JumpB
	var_33_bool = 0; // 0xb87 MovB
	return 4; // 0xb88 Return
	
Label_2953:
	var_33_bool = 1; // 0xb89 MovB
	return 4; // 0xb8a Return
}


func_3443(var_141_string, var_142_int)
{
	var_143_string = ""; var_144_string = ""; // 0xd73 PushV
	var_144_string = "idle"; // 0xd74 MovS
	var_145_int = var_142_int; // 0xd75 Push
	if(var_145_int == 0) goto Label_3448; // 0xd76 JumpB
	var_144_string = var_144_string + var_142_int; // 0xd77 Add2
	
Label_3448:
	var_141_string = var_144_string; // 0xd78 Mov
	return 2; // 0xd79 Return
}


func_375(var_107_float)
{
	var_108_float = 0; var_109_float = 0; // 0x177 PushV
	GetCameraFarDistance(var_109_float); // 0x178 Func
	var_107_float = var_109_float; // 0x17a Mov
	return 2; // 0x17b Return
}


func_3450(var_135_int)
{
	var_136_int = 0; var_137_bool = 0; var_138_int = 0; var_139_bool = 0; // 0xd7a PushV
	var_138_int = 0; // 0xd7b MovI
	
Label_3452:
	var_140_string = "all"; // 0xd7c PushS
	var_141_string = ""; var_142_int = 0; // 0xd7d PushV
	var_142_int = var_138_int; // 0xd7e Mov
	func_3443(var_141_string, var_142_int); // 0xd7f NEW_2
	HasAnimation(var_139_bool, var_140_string, var_141_string); // 0xd81 Func
	var_146_bool = var_139_bool == 0; // 0xd83 Not
	if(var_146_bool == 0) goto Label_3462; // 0xd84 JumpB
	goto Label_3465; // 0xd85 Jump
	
Label_3465:
	var_135_int = var_138_int; // 0xd89 Mov
	return 4; // 0xd8a Return
	
Label_3462:
	var_147_int = 1; // 0xd86 PushI
	var_138_int = var_138_int + var_147_int; // 0xd87 Add2
	goto Label_3452; // 0xd88 Jump
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


func_3467(var_65_int)
{
	var_67_bool = 0; // 0xd8c PushV
	func_4059(var_67_bool); // 0xd8d NEW_2
	if(var_67_bool == 0) goto Label_3474; // 0xd8f JumpB
	var_65_int = 2; // 0xd90 MovI
	goto Label_3475; // 0xd91 Jump
	
Label_3475:
	return 0; // 0xd93 Return
	
Label_3474:
	var_65_int = 0; // 0xd92 MovI
}


func_2957(var_29_bool, var_30_object)
{
	var_31_int = 0; var_32_int = 0; // 0xb8d PushV
	var_33_bool = 0; var_34_object = Obj(); // 0xb8e PushV
	var_34_object = var_30_object; // 0xb8f Mov
	func_2921(var_33_bool, var_34_object); // 0xb90 NEW_2
	var_50_bool = var_33_bool == 0; // 0xb92 Not
	if(var_50_bool == 0) goto Label_2966; // 0xb93 JumpB
	var_29_bool = 0; // 0xb94 MovB
	return 2; // 0xb95 Return
	
Label_2966:
	var_51_bool = 0; var_52_object = Obj(); var_53_string = ""; // 0xb96 PushV
	var_52_object = var_30_object; // 0xb97 Mov
	var_53_string = "noaccess"; // 0xb98 MovS
	func_2904(var_51_bool, var_52_object, var_53_string); // 0xb99 NEW_2
	var_60_bool = var_51_bool == 0; // 0xb9b Not
	if(var_60_bool == 0) goto Label_2975; // 0xb9c JumpB
	var_29_bool = 1; // 0xb9d MovB
	return 2; // 0xb9e Return
	
Label_2975:
	var_61_string = "noaccess"; // 0xb9f PushS
	GetProperty(var_61_string, var_32_int); // 0xba0 ObjFunc
	var_62_int = 0; // 0xba2 PushI
	var_29_bool = var_32_int == var_62_int; // 0xba3 Eq2
	return 2; // 0xba4 Return
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


func_3476(var_73_object)
{
	var_74_object = Obj(); // 0xd95 PushV
	var_74_object = var_73_object; // 0xd96 Mov
	TaskCall(3); // 0xd97 TaskCall
	func_659(var_75_object, var_74_object); // 0xd98 NEW_2
	TaskReturn(); // 0xd99 TaskReturn
	return 0; // 0xd9b Return
}


func_3484(var_34_int, var_35_object)
{
	var_36_bool = 0; var_37_object = Obj(); // 0xd9d PushV
	var_37_object = var_35_object; // 0xd9e Mov
	func_2957(var_36_bool, var_37_object); // 0xd9f NEW_2
	if(var_36_bool == 0) goto Label_3492; // 0xda1 JumpB
	var_34_int = 2; // 0xda2 MovI
	goto Label_3493; // 0xda3 Jump
	
Label_3493:
	return 0; // 0xda5 Return
	
Label_3492:
	var_34_int = 0; // 0xda4 MovI
}


func_4001(var_107_int)
{
	var_107_int = 515561; // 0xfa1 MovI
	return 0; // 0xfa2 Return
}


func_4003(var_106_int)
{
	var_106_int = 503346; // 0xfa3 MovI
	return 0; // 0xfa4 Return
}


func_2981()
{
	var_99_cvector = CVector(0,0,0); var_100_cvector = CVector(0,0,0); var_101_cvector = CVector(0,0,0); var_102_cvector = CVector(0,0,0); var_103_cvector = CVector(0,0,0); var_104_cvector = CVector(0,0,0); // 0xba5 PushV
	GetPosition(var_102_cvector); // 0xba6 ObjFunc
	GetPosition(var_103_cvector); // 0xba8 Func
	var_104_cvector = var_102_cvector - var_103_cvector; // 0xbaa Sub2
	var_105_float = GetByIndex(var_104_cvector, 0); // 0xbab PushE
	var_106_float = GetByIndex(var_104_cvector, 2); // 0xbac PushE
	RotateAsync(var_105_float, var_106_float); // 0xbad Func
	return 6; // 0xbaf Return
}


func_3494(var_76_object)
{
	var_77_object = Obj(); // 0xda7 PushV
	var_77_object = var_76_object; // 0xda8 Mov
	TaskCall(4); // 0xda9 TaskCall
	func_934(var_77_object); // 0xdaa NEW_2
	TaskReturn(); // 0xdab TaskReturn
	return 0; // 0xdad Return
}


func_4005(var_108_string)
{
	var_108_string = "ui/NPC_Citizen1.png"; // 0xfa5 MovS
	return 0; // 0xfa6 Return
}


func_4007(var_109_string)
{
	var_109_string = "ui/NPC_Citizen1_b.png"; // 0xfa7 MovS
	return 0; // 0xfa8 Return
}


func_4009(var_25_bool)
{
	var_25_bool = 0; // 0xfa9 MovB
	return 0; // 0xfaa Return
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


func_4011()
{
	var_23_bool = GlobalVars[0]; // 0xfab PushGE
	var_23_bool = 0; // 0xfac MovB
	GlobalVars[0] = var_23_bool; // 0xfad PopGE
	var_24_bool = 0; // 0xfae PushV
	var_24_bool = 0; // 0xfaf MovB
	func_3925(var_24_bool); // 0xfb0 NEW_2
	return 0; // 0xfb2 Return
}


func_3502(var_76_int, var_77_object)
{
	var_79_bool = 0; var_80_object = Obj(); // 0xdaf PushV
	var_80_object = var_77_object; // 0xdb0 Mov
	func_2957(var_79_bool, var_80_object); // 0xdb1 NEW_2
	if(var_79_bool == 0) goto Label_3510; // 0xdb3 JumpB
	var_76_int = 2; // 0xdb4 MovI
	goto Label_3511; // 0xdb5 Jump
	
Label_3511:
	return 0; // 0xdb7 Return
	
Label_3510:
	var_76_int = 0; // 0xdb6 MovI
}


func_2992(var_88_bool)
{
	var_89_bool = 0; var_90_bool = 0; // 0xbb0 PushV
	IsLoaded(var_90_bool); // 0xbb1 Func
	var_88_bool = var_90_bool; // 0xbb3 Mov
	return 2; // 0xbb4 Return
}


func_4019(var_34_object, var_49_object)
{
	var_35_bool = 0; var_36_bool = 0; // 0xfb3 PushV
	var_37_bool = GlobalVars[0]; // 0xfb4 PushGE
	if(var_37_bool == 0) goto Label_4032; // 0xfb5 JumpB
	IsOverrideActive(var_36_bool); // 0xfb6 Func
	var_38_bool = var_36_bool == 0; // 0xfb8 Not
	if(var_38_bool == 0) goto Label_4030; // 0xfb9 JumpB
	var_39_object = Obj(); // 0xfba PushV
	var_39_object = var_34_object; // 0xfbb Mov
	func_3912(var_39_object); // 0xfbc NEW_2
	
Label_4030:
	return 2; // 0xfbe Return
	
Label_4032:
	var_46_int = 1000; // 0xfc0 PushI
	var_47_int = 0; var_48_object = Obj(); // 0xfc1 PushV
	var_48_object = var_34_object; // 0xfc2 Mov
	TaskCall(8); // 0xfc3 TaskCall
	func_1731(var_49_object, var_47_int, var_48_object); // 0xfc4 NEW_2
	TaskReturn(); // 0xfc5 TaskReturn
	var_327_bool = var_46_int == var_49_object; // 0xfc7 Eq
	if(var_327_bool == 0) goto Label_4058; // 0xfc8 JumpB
	var_328_bool = 0; var_329_object = Obj(); // 0xfc9 PushV
	var_329_object = var_34_object; // 0xfca Mov
	func_3084(var_328_bool, var_329_object); // 0xfcb NEW_2
	var_360_bool = var_328_bool == 0; // 0xfcd Not
	if(var_360_bool == 0) goto Label_4048; // 0xfce JumpB
	return 2; // 0xfcf Return
	
Label_4048:
	var_361_object = Obj(); // 0xfd0 PushV
	var_361_object = var_34_object; // 0xfd1 Mov
	TaskCall(0); // 0xfd2 TaskCall
	func_0(var_361_object); // 0xfd3 NEW_2
	TaskReturn(); // 0xfd4 TaskReturn
	var_368_object = Obj(); // 0xfd6 PushV
	var_368_object = var_34_object; // 0xfd7 Mov
	func_3140(); // 0xfd8 NEW_2
	
Label_4058:
	return 2; // 0xfda Return
}


func_2997(var_58_bool, var_60_float)
{
	var_61_float = 0; var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); var_66_cvector = CVector(0,0,0); var_67_cvector = CVector(0,0,0); var_68_bool = 0; var_69_bool = 0; var_70_float = 0; var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); var_73_cvector = CVector(0,0,0); var_74_cvector = CVector(0,0,0); var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0); var_77_bool = 0; var_78_bool = 0; // 0xbb5 PushV
	GetPosition(var_71_cvector); // 0xbb6 ObjFunc
	GetEyesHeight(var_70_float); // 0xbb8 ObjFunc
	var_79_float = GetByIndex(var_71_cvector, 1); // 0xbba PushE
	var_79_float = var_79_float + var_70_float; // 0xbbb Add2
	SetByIndex(var_71_cvector, 1) = var_79_float; // 0xbbc PopE
	GetPosition(var_72_cvector); // 0xbbd Func
	GetEyesHeight(var_70_float); // 0xbbf Func
	var_80_float = GetByIndex(var_72_cvector, 1); // 0xbc1 PushE
	var_80_float = var_80_float + var_70_float; // 0xbc2 Add2
	SetByIndex(var_72_cvector, 1) = var_80_float; // 0xbc3 PopE
	var_73_cvector = var_71_cvector - var_72_cvector; // 0xbc4 Sub2
	var_81_float = GetByIndex(var_73_cvector, 1); // 0xbc5 PushE
	var_81_float = 0; // 0xbc6 MovI
	SetByIndex(var_73_cvector, 1) = var_81_float; // 0xbc7 PopE
	var_82_int = var_73_cvector | var_73_cvector; // 0xbc8 Or
	var_83_float = sqrt(var_82_int); // 0xbc9 Sqrt
	var_73_cvector = var_73_cvector / var_73_cvector; // 0xbca Div2
	var_74_cvector = -var_73_cvector; // 0xbcb Neg2
	var_84_float = var_73_cvector * var_60_float; // 0xbcc Mult
	var_85_cvector = CVector(0,0,0); var_86_cvector = CVector(0,0,0); // 0xbcd PushV
	var_87_cvector = CVector(0.0, 1.0, 0.0); // 0xbce PushVec
	var_86_cvector = var_74_cvector ^ var_87_cvector; // 0xbcf Xor2
	func_3226(var_85_cvector, var_86_cvector); // 0xbd0 NEW_2
	var_93_int = 25; // 0xbd2 PushI
	var_94_float = var_85_cvector * var_93_int; // 0xbd3 Mult
	var_95_int = var_84_float + var_94_float; // 0xbd4 Add
	var_96_cvector = CVector(0.0, 10.0, 0.0); // 0xbd5 PushVec
	var_75_cvector = var_95_int - var_96_cvector; // 0xbd6 Sub2
	var_76_cvector = var_72_cvector + var_75_cvector; // 0xbd7 Add2
	IsOverrideActive(var_77_bool); // 0xbd8 Func
	var_97_bool = var_77_bool; // 0xbda Push
	if(var_97_bool == 0) goto Label_3038; // 0xbdb JumpB
	var_58_bool = 0; // 0xbdc MovB
	return 18; // 0xbdd Return
	
Label_3038:
	StopWorld(); // 0xbde Func
	var_98_bool = 1; // 0xbe0 PushB
	CameraTransit(var_76_cvector, var_74_cvector, var_98_bool); // 0xbe1 Func
	var_99_float = GetByIndex(var_75_cvector, 0); // 0xbe3 PushE
	var_100_float = GetByIndex(var_75_cvector, 2); // 0xbe4 PushE
	Rotate(var_99_float, var_100_float); // 0xbe5 Func
	var_101_bool = 0; // 0xbe7 PushV
	func_4009(var_101_bool); // 0xbe8 NEW_2
	if(var_101_bool == 0) goto Label_3052; // 0xbea JumpB
	goto Label_3060; // 0xbeb Jump
	
Label_3060:
	CameraWaitForPlayFinish(); // 0xbf4 Func
	ResumeWorld(); // 0xbf6 Func
	var_58_bool = 1; // 0xbf8 MovB
	return 18; // 0xbf9 Return
	
Label_3052:
	var_102_string = "head"; // 0xbec PushS
	HasAnimationTrack(var_78_bool, var_102_string); // 0xbed Func
	var_103_bool = var_78_bool; // 0xbef Push
	if(var_103_bool == 0) goto Label_3060; // 0xbf0 JumpB
	var_104_string = "head"; // 0xbf1 PushS
	LookAsyncCamera(var_104_string); // 0xbf2 Func
}


func_3512(var_113_object)
{
	var_114_object = Obj(); // 0xdb9 PushV
	var_114_object = var_113_object; // 0xdba Mov
	TaskCall(5); // 0xdbb TaskCall
	func_1186(var_115_object, var_116_cvector, var_117_bool, var_114_object); // 0xdbc NEW_2
	TaskReturn(); // 0xdbd TaskReturn
	return 0; // 0xdbf Return
}


func_3520(var_31_bool, var_32_object, var_33_object, var_34_float)
{
	var_35_string = ""; var_36_bool = 0; var_37_string = ""; var_38_bool = 0; // 0xdc0 PushV
	var_39_bool = 0; var_40_object = Obj(); var_41_string = ""; // 0xdc1 PushV
	var_40_object = var_33_object; // 0xdc2 Mov
	var_41_string = "class"; // 0xdc3 MovS
	func_2904(var_39_bool, var_40_object, var_41_string); // 0xdc4 NEW_2
	var_48_bool = var_39_bool == 0; // 0xdc6 Not
	if(var_48_bool == 0) goto Label_3530; // 0xdc7 JumpB
	var_31_bool = 0; // 0xdc8 MovB
	return 4; // 0xdc9 Return
	
Label_3530:
	var_49_string = "class"; // 0xdca PushS
	GetProperty(var_49_string, var_37_string); // 0xdcb ObjFunc
	var_50_string = "rat"; // 0xdcd PushS
	var_51_bool = var_37_string == var_50_string; // 0xdce Eq
	if(var_51_bool == 0) goto Label_3539; // 0xdcf JumpB
	var_31_bool = 0; // 0xdd0 MovB
	return 4; // 0xdd1 Return
	
Label_3539:
	var_52_string = "rat_big"; // 0xdd3 PushS
	var_53_bool = var_37_string == var_52_string; // 0xdd4 Eq
	if(var_53_bool == 0) goto Label_3545; // 0xdd5 JumpB
	var_31_bool = 0; // 0xdd6 MovB
	return 4; // 0xdd7 Return
	
Label_3545:
	var_54_string = "dog"; // 0xdd9 PushS
	var_55_bool = var_37_string == var_54_string; // 0xdda Eq
	if(var_55_bool == 0) goto Label_3550; // 0xddb JumpB
	var_31_bool = 0; // 0xddc MovB
	return 4; // 0xddd Return
	
Label_3550:
	CanSee(var_38_bool, var_32_object); // 0xdde Func
	var_56_bool = 0; // 0xde0 PushV
	var_56_bool = 1; // 0xde1 MovB
	var_57_bool = var_38_bool; // 0xde2 Push
	if(var_57_bool == 0) goto Label_3564; // 0xde3 JumpB
	var_58_float = 0; var_59_object = Obj(); // 0xde4 PushV
	var_59_object = var_32_object; // 0xde5 Mov
	func_2891(var_59_object); // 0xde6 NEW_2
	var_66_float = var_34_float * var_34_float; // 0xde8 Mult
	var_67_bool = var_58_float <= var_66_float; // 0xde9 LE
	if(var_67_bool == 0) goto Label_3564; // 0xdea JumpB
	var_56_bool = 0; // 0xdeb MovB
	
Label_3564:
	if(var_56_bool == 0) goto Label_3567; // 0xdec JumpB
	var_31_bool = 1; // 0xded MovB
	return 4; // 0xdee Return
	
Label_3567:
	CanSee(var_38_bool, var_33_object); // 0xdef Func
	var_68_bool = 0; // 0xdf1 PushV
	var_68_bool = 1; // 0xdf2 MovB
	var_69_bool = var_38_bool; // 0xdf3 Push
	if(var_69_bool == 0) goto Label_3581; // 0xdf4 JumpB
	var_70_float = 0; var_71_object = Obj(); // 0xdf5 PushV
	var_71_object = var_33_object; // 0xdf6 Mov
	func_2891(var_71_object); // 0xdf7 NEW_2
	var_72_float = var_34_float * var_34_float; // 0xdf9 Mult
	var_73_bool = var_70_float <= var_72_float; // 0xdfa LE
	if(var_73_bool == 0) goto Label_3581; // 0xdfb JumpB
	var_68_bool = 0; // 0xdfc MovB
	
Label_3581:
	if(var_68_bool == 0) goto Label_3584; // 0xdfd JumpB
	var_31_bool = 1; // 0xdfe MovB
	return 4; // 0xdff Return
	
Label_3584:
	var_31_bool = 0; // 0xe00 MovB
	return 4; // 0xe01 Return
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
	func_3226(var_52_cvector, var_53_cvector); // 0x3d3 NEW_2
	var_59_float = 0.75; // 0x3d5 PushF
	var_60_float = var_46_cvector * var_59_float; // 0x3d6 Mult
	var_51_cvector = var_52_cvector + var_60_float; // 0x3d7 Add2
	func_3226(var_50_cvector, var_51_cvector); // 0x3d8 NEW_2
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


func_4059(var_67_bool)
{
	var_67_bool = 1; // 0xfdb MovB
	return 0; // 0xfdc Return
}


func_4061(var_27_bool, var_28_object, var_29_object)
{
	var_31_bool = 0; var_32_object = Obj(); var_33_object = Obj(); var_34_float = 0; // 0xfde PushV
	var_32_object = var_28_object; // 0xfdf Mov
	var_33_object = var_29_object; // 0xfe0 Mov
	var_34_float = 500.0; // 0xfe1 MovF
	func_3520(var_31_bool, var_32_object, var_33_object, var_34_float); // 0xfe2 NEW_2
	if(var_31_bool == 0) goto Label_4075; // 0xfe4 JumpB
	var_74_string = "ToDie"; // 0xfe5 PushS
	var_75_bool = 1; // 0xfe6 PushB
	SetProperty(var_74_string, var_75_bool); // 0xfe7 Func
	var_27_bool = 1; // 0xfe9 MovB
	return 0; // 0xfea Return
	
Label_4075:
	var_27_bool = 0; // 0xfeb MovB
	return 0; // 0xfec Return
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
	func_2879(var_140_cvector); // 0x409 NEW_2
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
	func_2879(var_152_cvector); // 0x424 NEW_2
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
	func_2884(var_80_object); // 0x5f6 NEW_2
	var_78_cvector = var_79_cvector; // 0x5f7 Mov
	var_85_float = 0; var_86_cvector = CVector(0,0,0); var_87_cvector = CVector(0,0,0); // 0x5f9 PushV
	var_86_cvector = var_77_cvector; // 0x5fa Mov
	var_87_cvector = var_78_cvector; // 0x5fb Mov
	func_3241(var_85_float, var_86_cvector, var_87_cvector); // 0x5fc NEW_2
	var_93_float = -0.34202; // 0x5fe PushF
	var_74_bool = var_85_float >= var_93_float; // 0x5ff GE2
	return 4; // 0x600 Return
}


func_3066()
{
	var_320_bool = 0; var_321_bool = 0; // 0xbfa PushV
	var_322_bool = 1; // 0xbfb PushB
	CameraSwitchToNormal(var_322_bool); // 0xbfc Func
	var_323_bool = 0; // 0xbfe PushV
	func_4009(var_323_bool); // 0xbff NEW_2
	if(var_323_bool == 0) goto Label_3075; // 0xc01 JumpB
	goto Label_3083; // 0xc02 Jump
	
Label_3083:
	return 2; // 0xc0b Return
	
Label_3075:
	var_324_string = "head"; // 0xc03 PushS
	HasAnimationTrack(var_321_bool, var_324_string); // 0xc04 Func
	var_325_bool = var_321_bool; // 0xc06 Push
	if(var_325_bool == 0) goto Label_3083; // 0xc07 JumpB
	var_326_string = "head"; // 0xc08 PushS
	UnlookAsync(var_326_string); // 0xc09 Func
}


