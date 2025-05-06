task_0_event_11(var_0_bool, var_1_int, var_2_bool, var_3_bool, var_4_bool, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	var_23_bool = 0; // 0x1b PushV
	func_6031(var_23_bool); // 0x1c NEW_2
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
	func_5590(var_26_object); // 0x43 NEW_2
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
	func_5593(var_32_object); // 0x51 NEW_2
	
Label_83:
	return 2; // 0x53 Return
}


task_1_event_17(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	var_23_int = 0; var_24_int = 0; // 0x54 PushV
	var_25_object = Obj(); // 0x55 PushV
	var_25_object = var_22_bool; // 0x56 Mov
	func_5461(var_25_object); // 0x57 NEW_2
	var_34_int = 0; var_35_object = Obj(); // 0x59 PushV
	var_35_object = var_22_bool; // 0x5a Mov
	func_5544(var_34_int, var_35_object); // 0x5b NEW_2
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
	func_5554(var_75_object); // 0x69 NEW_2
	
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
	func_6083(var_30_bool); // 0x71 NEW_2
	if(var_27_bool == 0) goto Label_135; // 0x73 JumpB
	var_31_int = 0; var_32_object = Obj(); var_33_bool = 0; // 0x74 PushV
	var_32_object = var_22_object; // 0x75 Mov
	var_33_bool = var_24_bool; // 0x76 Mov
	func_5562(var_32_object, var_33_bool); // 0x77 NEW_2
	var_26_int = var_31_int; // 0x78 Mov
	var_68_int = 0; // 0x7a PushI
	var_69_bool = var_26_int > var_68_int; // 0x7b GT
	if(var_69_bool == 0) goto Label_135; // 0x7c JumpB
	var_70_int = 1; // 0x7d PushI
	var_71_bool = var_26_int > var_70_int; // 0x7e GT
	if(var_71_bool == 0) goto Label_131; // 0x7f JumpB
	func_251(var_26_int); // 0x81 NEW_2
	
Label_131:
	var_73_object = Obj(); // 0x83 PushV
	var_73_object = var_22_object; // 0x84 Mov
	func_5572(var_73_object); // 0x85 NEW_2
	
Label_135:
	return 2; // 0x87 Return
}


task_1_event_40(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	var_23_int = 0; var_24_int = 0; // 0x88 PushV
	var_25_int = 0; var_26_object = Obj(); // 0x89 PushV
	var_26_object = var_22_bool; // 0x8a Mov
	func_5580(var_26_object); // 0x8b NEW_2
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
	func_5583(); // 0x99 NEW_2
	
Label_155:
	return 2; // 0x9b Return
}


task_1_event_42(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_string, var_6_object, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_object, var_21_object, var_22_string, var_23_bool)
{
	var_24_int = 0; var_25_int = 0; // 0x9c PushV
	var_26_bool = 0; var_27_object = Obj(); var_28_string = ""; // 0x9d PushV
	var_27_object = var_22_string; // 0x9e Mov
	var_28_string = var_23_bool; // 0x9f Mov
	func_5375(var_26_bool, var_27_object, var_28_string); // 0xa0 NEW_2
	if(var_26_bool == 0) goto Label_172; // 0xa2 JumpB
	func_251(var_25_int); // 0xa4 NEW_2
	var_59_object = Obj(); var_60_string = ""; // 0xa6 PushV
	var_59_object = var_22_string; // 0xa7 Mov
	var_60_string = var_23_bool; // 0xa8 Mov
	func_5407(var_59_object, var_60_string); // 0xa9 NEW_2
	goto Label_192; // 0xab Jump
	
Label_192:
	return 2; // 0xc0 Return
	
Label_172:
	var_208_int = 0; var_209_string = ""; var_210_object = Obj(); // 0xac PushV
	var_209_string = var_23_bool; // 0xad Mov
	var_210_object = var_22_string; // 0xae Mov
	func_5585(var_210_object); // 0xaf NEW_2
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
	func_5588(); // 0xbe NEW_2
}


task_1_event_26(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_string, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	var_23_bool = 0; var_24_string = ""; // 0xc2 PushV
	var_24_string = var_22_bool; // 0xc3 Mov
	func_5474(var_23_bool, var_24_string); // 0xc4 NEW_2
	if(var_23_bool == 0) goto Label_206; // 0xc6 JumpB
	func_251(var_22_bool); // 0xc8 NEW_2
	var_33_string = ""; // 0xca PushV
	var_33_string = var_22_bool; // 0xcb Mov
	func_5490(var_33_string); // 0xcc NEW_2
	
Label_206:
	return 0; // 0xce Return
}


task_1_event_1(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	var_23_bool = 0; var_24_object = Obj(); // 0xd0 PushV
	var_24_object = var_22_bool; // 0xd1 Mov
	func_5432(var_23_bool, var_24_object); // 0xd2 NEW_2
	if(var_23_bool == 0) goto Label_221; // 0xd4 JumpB
	func_251(var_22_bool); // 0xd6 NEW_2
	var_38_object = Obj(); // 0xd8 PushV
	var_38_object = var_22_bool; // 0xd9 Mov
	func_5455(var_38_object); // 0xda NEW_2
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
	func_5599(); // 0xf8 NEW_2
	return 0; // 0xfa Return
}


task_1_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	func_251(var_22_bool); // 0x10d NEW_2
	var_24_object = Obj(); // 0x10f PushV
	var_24_object = var_22_bool; // 0x110 Mov
	func_5369(); // 0x111 NEW_2
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
	func_5590(var_26_object); // 0x19c NEW_2
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
	func_5593(var_31_object); // 0x1aa NEW_2
	
Label_428:
	return 2; // 0x1ac Return
}


task_2_event_17(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	var_23_int = 0; var_24_int = 0; // 0x1ad PushV
	var_25_object = Obj(); // 0x1ae PushV
	var_25_object = var_22_bool; // 0x1af Mov
	func_5461(var_25_object); // 0x1b0 NEW_2
	var_34_int = 0; var_35_object = Obj(); // 0x1b2 PushV
	var_35_object = var_22_bool; // 0x1b3 Mov
	func_5544(var_34_int, var_35_object); // 0x1b4 NEW_2
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
	func_5554(var_74_object); // 0x1c2 NEW_2
	
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
	func_6083(var_30_bool); // 0x1ca NEW_2
	if(var_27_bool == 0) goto Label_480; // 0x1cc JumpB
	var_31_int = 0; var_32_object = Obj(); var_33_bool = 0; // 0x1cd PushV
	var_32_object = var_22_object; // 0x1ce Mov
	var_33_bool = var_24_bool; // 0x1cf Mov
	func_5562(var_32_object, var_33_bool); // 0x1d0 NEW_2
	var_26_int = var_31_int; // 0x1d1 Mov
	var_68_int = 0; // 0x1d3 PushI
	var_69_bool = var_26_int > var_68_int; // 0x1d4 GT
	if(var_69_bool == 0) goto Label_480; // 0x1d5 JumpB
	var_70_int = 1; // 0x1d6 PushI
	var_71_bool = var_26_int > var_70_int; // 0x1d7 GT
	if(var_71_bool == 0) goto Label_476; // 0x1d8 JumpB
	func_654(); // 0x1da NEW_2
	
Label_476:
	var_72_object = Obj(); // 0x1dc PushV
	var_72_object = var_22_object; // 0x1dd Mov
	func_5572(var_72_object); // 0x1de NEW_2
	
Label_480:
	return 2; // 0x1e0 Return
}


task_2_event_40(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	var_23_int = 0; var_24_int = 0; // 0x1e1 PushV
	var_25_int = 0; var_26_object = Obj(); // 0x1e2 PushV
	var_26_object = var_22_bool; // 0x1e3 Mov
	func_5580(var_26_object); // 0x1e4 NEW_2
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
	func_5583(); // 0x1f2 NEW_2
	
Label_500:
	return 2; // 0x1f4 Return
}


task_2_event_42(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_string, var_6_object, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_object, var_21_object, var_22_string, var_23_bool)
{
	var_24_int = 0; var_25_int = 0; // 0x1f5 PushV
	var_26_bool = 0; var_27_object = Obj(); var_28_string = ""; // 0x1f6 PushV
	var_27_object = var_22_string; // 0x1f7 Mov
	var_28_string = var_23_bool; // 0x1f8 Mov
	func_5375(var_26_bool, var_27_object, var_28_string); // 0x1f9 NEW_2
	if(var_26_bool == 0) goto Label_517; // 0x1fb JumpB
	func_654(); // 0x1fd NEW_2
	var_58_object = Obj(); var_59_string = ""; // 0x1ff PushV
	var_58_object = var_22_string; // 0x200 Mov
	var_59_string = var_23_bool; // 0x201 Mov
	func_5407(var_58_object, var_59_string); // 0x202 NEW_2
	goto Label_537; // 0x204 Jump
	
Label_537:
	return 2; // 0x219 Return
	
Label_517:
	var_207_int = 0; var_208_string = ""; var_209_object = Obj(); // 0x205 PushV
	var_208_string = var_23_bool; // 0x206 Mov
	var_209_object = var_22_string; // 0x207 Mov
	func_5585(var_209_object); // 0x208 NEW_2
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
	func_5588(); // 0x217 NEW_2
}


task_2_event_26(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_string, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	var_23_bool = 0; var_24_string = ""; // 0x21b PushV
	var_24_string = var_22_bool; // 0x21c Mov
	func_5474(var_23_bool, var_24_string); // 0x21d NEW_2
	if(var_23_bool == 0) goto Label_551; // 0x21f JumpB
	func_654(); // 0x221 NEW_2
	var_32_string = ""; // 0x223 PushV
	var_32_string = var_22_bool; // 0x224 Mov
	func_5490(var_32_string); // 0x225 NEW_2
	
Label_551:
	return 0; // 0x227 Return
}


task_2_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool)
{
	func_654(); // 0x229 NEW_2
	func_5599(); // 0x22c NEW_2
	return 0; // 0x22e Return
}


task_2_event_1(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	var_23_bool = 0; var_24_object = Obj(); // 0x230 PushV
	var_24_object = var_22_bool; // 0x231 Mov
	func_5432(var_23_bool, var_24_object); // 0x232 NEW_2
	if(var_23_bool == 0) goto Label_572; // 0x234 JumpB
	func_654(); // 0x236 NEW_2
	var_37_object = Obj(); // 0x238 PushV
	var_37_object = var_22_bool; // 0x239 Mov
	func_5455(var_37_object); // 0x23a NEW_2
	
Label_572:
	return 0; // 0x23c Return
}


task_3_event_0(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	var_23_int = 0; var_24_int = 0; // 0x2cb PushV
	var_25_int = 0; var_26_object = Obj(); // 0x2cc PushV
	var_26_object = var_22_bool; // 0x2cd Mov
	func_5590(var_26_object); // 0x2ce NEW_2
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
	func_5593(var_33_object); // 0x2dc NEW_2
	
Label_734:
	return 2; // 0x2de Return
}


task_3_event_17(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	var_23_int = 0; var_24_int = 0; // 0x2df PushV
	var_25_object = Obj(); // 0x2e0 PushV
	var_25_object = var_22_bool; // 0x2e1 Mov
	func_5461(var_25_object); // 0x2e2 NEW_2
	var_34_int = 0; var_35_object = Obj(); // 0x2e4 PushV
	var_35_object = var_22_bool; // 0x2e5 Mov
	func_5544(var_34_int, var_35_object); // 0x2e6 NEW_2
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
	func_5554(var_76_object); // 0x2f4 NEW_2
	
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
	func_6083(var_30_bool); // 0x2fc NEW_2
	if(var_27_bool == 0) goto Label_786; // 0x2fe JumpB
	var_31_int = 0; var_32_object = Obj(); var_33_bool = 0; // 0x2ff PushV
	var_32_object = var_22_object; // 0x300 Mov
	var_33_bool = var_24_bool; // 0x301 Mov
	func_5562(var_32_object, var_33_bool); // 0x302 NEW_2
	var_26_int = var_31_int; // 0x303 Mov
	var_68_int = 0; // 0x305 PushI
	var_69_bool = var_26_int > var_68_int; // 0x306 GT
	if(var_69_bool == 0) goto Label_786; // 0x307 JumpB
	var_70_int = 1; // 0x308 PushI
	var_71_bool = var_26_int > var_70_int; // 0x309 GT
	if(var_71_bool == 0) goto Label_782; // 0x30a JumpB
	func_858(); // 0x30c NEW_2
	
Label_782:
	var_74_object = Obj(); // 0x30e PushV
	var_74_object = var_22_object; // 0x30f Mov
	func_5572(var_74_object); // 0x310 NEW_2
	
Label_786:
	return 2; // 0x312 Return
}


task_3_event_40(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	var_23_int = 0; var_24_int = 0; // 0x313 PushV
	var_25_int = 0; var_26_object = Obj(); // 0x314 PushV
	var_26_object = var_22_bool; // 0x315 Mov
	func_5580(var_26_object); // 0x316 NEW_2
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
	func_5583(); // 0x324 NEW_2
	
Label_806:
	return 2; // 0x326 Return
}


task_3_event_42(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_string, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_object, var_21_object, var_22_string, var_23_bool)
{
	var_24_int = 0; var_25_int = 0; // 0x327 PushV
	var_26_bool = 0; var_27_object = Obj(); var_28_string = ""; // 0x328 PushV
	var_27_object = var_22_string; // 0x329 Mov
	var_28_string = var_23_bool; // 0x32a Mov
	func_5375(var_26_bool, var_27_object, var_28_string); // 0x32b NEW_2
	if(var_26_bool == 0) goto Label_823; // 0x32d JumpB
	func_858(); // 0x32f NEW_2
	var_60_object = Obj(); var_61_string = ""; // 0x331 PushV
	var_60_object = var_22_string; // 0x332 Mov
	var_61_string = var_23_bool; // 0x333 Mov
	func_5407(var_60_object, var_61_string); // 0x334 NEW_2
	goto Label_843; // 0x336 Jump
	
Label_843:
	return 2; // 0x34b Return
	
Label_823:
	var_209_int = 0; var_210_string = ""; var_211_object = Obj(); // 0x337 PushV
	var_210_string = var_23_bool; // 0x338 Mov
	var_211_object = var_22_string; // 0x339 Mov
	func_5585(var_211_object); // 0x33a NEW_2
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
	func_5588(); // 0x349 NEW_2
}


task_3_event_26(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_string, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	var_23_bool = 0; var_24_string = ""; // 0x34d PushV
	var_24_string = var_22_bool; // 0x34e Mov
	func_5474(var_23_bool, var_24_string); // 0x34f NEW_2
	if(var_23_bool == 0) goto Label_857; // 0x351 JumpB
	func_858(); // 0x353 NEW_2
	var_34_string = ""; // 0x355 PushV
	var_34_string = var_22_bool; // 0x356 Mov
	func_5490(var_34_string); // 0x357 NEW_2
	
Label_857:
	return 0; // 0x359 Return
}


task_3_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	func_858(); // 0x367 NEW_2
	var_25_object = Obj(); // 0x369 PushV
	var_25_object = var_22_bool; // 0x36a Mov
	func_5369(); // 0x36b NEW_2
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
	func_5029(var_29_bool, var_30_object); // 0x375 NEW_2
	var_63_bool = var_29_bool == 0; // 0x377 Not
	if(var_63_bool == 0) goto Label_893; // 0x378 JumpB
	func_858(); // 0x37a NEW_2
	return 4; // 0x37c Return
	
Label_893:
	GetDirection(var_25_cvector); // 0x37d Func
	var_66_cvector = CVector(0,0,0); var_67_object = Obj(); // 0x37f PushV
	var_67_object = var_0_bool; // 0x380 MovT
	func_4956(var_67_object); // 0x381 NEW_2
	var_26_cvector = var_66_cvector; // 0x382 Mov
	var_72_float = 0; var_73_cvector = CVector(0,0,0); var_74_cvector = CVector(0,0,0); // 0x384 PushV
	var_73_cvector = var_25_cvector; // 0x385 Mov
	var_74_cvector = var_26_cvector; // 0x386 Mov
	func_5336(var_72_float, var_73_cvector, var_74_cvector); // 0x387 NEW_2
	var_96_float = 0.5; // 0x389 PushF
	var_97_bool = var_72_float < var_96_float; // 0x38a LT
	if(var_97_bool == 0) goto Label_912; // 0x38b JumpB
	var_98_object = Obj(); // 0x38c PushV
	var_98_object = var_0_bool; // 0x38d MovT
	func_5053(); // 0x38e NEW_2
	
Label_912:
	return 4; // 0x390 Return
}


task_3_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool)
{
	func_858(); // 0x392 NEW_2
	func_5599(); // 0x395 NEW_2
	return 0; // 0x397 Return
}


task_3_event_1(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	var_23_bool = 0; var_24_object = Obj(); // 0x399 PushV
	var_24_object = var_22_bool; // 0x39a Mov
	func_5432(var_23_bool, var_24_object); // 0x39b NEW_2
	if(var_23_bool == 0) goto Label_933; // 0x39d JumpB
	func_858(); // 0x39f NEW_2
	var_39_object = Obj(); // 0x3a1 PushV
	var_39_object = var_22_bool; // 0x3a2 Mov
	func_5455(var_39_object); // 0x3a3 NEW_2
	
Label_933:
	return 0; // 0x3a5 Return
}


task_4_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool)
{
	func_1124(var_21_bool); // 0x3c3 NEW_2
	func_5599(); // 0x3c6 NEW_2
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
	func_4951(var_94_cvector); // 0x460 NEW_2
	var_1_bool = var_94_cvector + var_29_cvector; // 0x462 Add2
}


task_4_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	func_1124(var_22_bool); // 0x46d NEW_2
	var_24_object = Obj(); // 0x46f PushV
	var_24_object = var_22_bool; // 0x470 Mov
	func_5369(); // 0x471 NEW_2
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
	func_4951(var_94_cvector); // 0x51b NEW_2
	var_1_bool = var_94_cvector + var_29_cvector; // 0x51d Add2
}


task_5_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	func_1311(var_22_bool); // 0x528 NEW_2
	var_24_object = Obj(); // 0x52a PushV
	var_24_object = var_22_bool; // 0x52b Mov
	func_5369(); // 0x52c NEW_2
	return 0; // 0x52e Return
}


task_6_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool)
{
	func_1505(var_21_bool); // 0x540 NEW_2
	func_5599(); // 0x543 NEW_2
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
	func_4951(var_94_cvector); // 0x5dd NEW_2
	var_1_bool = var_94_cvector + var_29_cvector; // 0x5df Add2
}


task_6_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	func_1505(var_22_bool); // 0x5ea NEW_2
	var_24_object = Obj(); // 0x5ec PushV
	var_24_object = var_22_bool; // 0x5ed Mov
	func_5369(); // 0x5ee NEW_2
	return 0; // 0x5f0 Return
}


task_7_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool)
{
	func_1699(var_21_bool); // 0x602 NEW_2
	func_5599(); // 0x605 NEW_2
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
	func_4951(var_94_cvector); // 0x69f NEW_2
	var_1_bool = var_94_cvector + var_29_cvector; // 0x6a1 Add2
}


task_7_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	func_1699(var_22_bool); // 0x6ac NEW_2
	var_24_object = Obj(); // 0x6ae PushV
	var_24_object = var_22_bool; // 0x6af Mov
	func_5369(); // 0x6b0 NEW_2
	return 0; // 0x6b2 Return
}


task_9_event_11(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_int, var_23_int)
{
	var_24_int = 1; // 0x986 PushI
	if(var_24_int == 0) goto Label_4950; // 0x987 JumpB
	func_5255(); // 0x989 NEW_2
	var_26_int = 45532; // 0x98b PushI
	var_27_bool = var_23_int == var_26_int; // 0x98c Eq
	if(var_27_bool == 0) goto Label_2451; // 0x98d JumpB
	var_28_object = Obj(); var_29_object = Obj(); // 0x98e PushV
	var_28_object = var_1_bool; // 0x98f MovT
	var_29_object = var_0_bool; // 0x990 MovT
	func_5654(); // 0x991 NEW_2
	
Label_2451:
	var_31_int = 45530; // 0x993 PushI
	var_32_bool = var_23_int == var_31_int; // 0x994 Eq
	if(var_32_bool == 0) goto Label_2459; // 0x995 JumpB
	var_33_object = Obj(); var_34_object = Obj(); // 0x996 PushV
	var_33_object = var_1_bool; // 0x997 MovT
	var_34_object = var_0_bool; // 0x998 MovT
	func_5654(); // 0x999 NEW_2
	
Label_2459:
	var_35_int = 45555; // 0x99b PushI
	var_36_bool = var_23_int == var_35_int; // 0x99c Eq
	if(var_36_bool == 0) goto Label_2467; // 0x99d JumpB
	var_37_object = Obj(); var_38_object = Obj(); // 0x99e PushV
	var_37_object = var_1_bool; // 0x99f MovT
	var_38_object = var_0_bool; // 0x9a0 MovT
	func_5654(); // 0x9a1 NEW_2
	
Label_2467:
	var_39_int = 45580; // 0x9a3 PushI
	var_40_bool = var_23_int == var_39_int; // 0x9a4 Eq
	if(var_40_bool == 0) goto Label_2475; // 0x9a5 JumpB
	var_41_object = Obj(); var_42_object = Obj(); // 0x9a6 PushV
	var_41_object = var_1_bool; // 0x9a7 MovT
	var_42_object = var_0_bool; // 0x9a8 MovT
	func_5654(); // 0x9a9 NEW_2
	
Label_2475:
	var_43_int = 45602; // 0x9ab PushI
	var_44_bool = var_23_int == var_43_int; // 0x9ac Eq
	if(var_44_bool == 0) goto Label_2483; // 0x9ad JumpB
	var_45_object = Obj(); var_46_object = Obj(); // 0x9ae PushV
	var_45_object = var_1_bool; // 0x9af MovT
	var_46_object = var_0_bool; // 0x9b0 MovT
	func_5654(); // 0x9b1 NEW_2
	
Label_2483:
	var_47_int = 45603; // 0x9b3 PushI
	var_48_bool = var_23_int == var_47_int; // 0x9b4 Eq
	if(var_48_bool == 0) goto Label_2491; // 0x9b5 JumpB
	var_49_object = Obj(); var_50_object = Obj(); // 0x9b6 PushV
	var_49_object = var_1_bool; // 0x9b7 MovT
	var_50_object = var_0_bool; // 0x9b8 MovT
	func_5654(); // 0x9b9 NEW_2
	
Label_2491:
	var_51_int = 38691; // 0x9bb PushI
	var_52_bool = var_23_int == var_51_int; // 0x9bc Eq
	if(var_52_bool == 0) goto Label_2499; // 0x9bd JumpB
	var_53_object = Obj(); var_54_object = Obj(); // 0x9be PushV
	var_53_object = var_1_bool; // 0x9bf MovT
	var_54_object = var_0_bool; // 0x9c0 MovT
	func_5654(); // 0x9c1 NEW_2
	
Label_2499:
	var_55_int = 45527; // 0x9c3 PushI
	var_56_bool = var_22_int == var_55_int; // 0x9c4 Eq
	if(var_56_bool == 0) goto Label_3074; // 0x9c5 JumpB
	var_57_bool = 0; var_58_object = Obj(); // 0x9c6 PushV
	var_58_object = var_1_bool; // 0x9c7 MovT
	func_5671(var_58_object); // 0x9c8 NEW_2
	if(var_57_bool == 0) goto Label_2868; // 0x9ca JumpB
	var_65_string = ""; // 0x9cb PushV
	var_65_string = "Neutral"; // 0x9cc MovS
	func_2415(var_23_int, var_65_string); // 0x9cd NEW_2
	var_82_int = 543072; // 0x9cf PushI
	SetMessage(var_82_int); // 0x9d0 TObjFunc
	ClearReplies(); // 0x9d2 TObjFunc
	var_83_bool = 0; var_84_object = Obj(); // 0x9d4 PushV
	var_84_object = var_1_bool; // 0x9d5 MovT
	func_5683(var_83_bool, var_84_object); // 0x9d6 NEW_2
	if(var_83_bool == 0) goto Label_2526; // 0x9d8 JumpB
	var_94_int = 543073; // 0x9d9 PushI
	var_95_int = 45531; // 0x9da PushI
	var_96_int = 45528; // 0x9db PushI
	AddReply(var_94_int, var_95_int, var_96_int); // 0x9dc TObjFunc
	
Label_2526:
	var_97_bool = 0; var_98_object = Obj(); // 0x9de PushV
	var_98_object = var_1_bool; // 0x9df MovT
	func_5693(var_97_bool, var_98_object); // 0x9e0 NEW_2
	if(var_97_bool == 0) goto Label_2536; // 0x9e2 JumpB
	var_103_int = 543092; // 0x9e3 PushI
	var_104_int = 45550; // 0x9e4 PushI
	var_105_int = 45547; // 0x9e5 PushI
	AddReply(var_103_int, var_104_int, var_105_int); // 0x9e6 TObjFunc
	
Label_2536:
	var_106_bool = 0; // 0x9e8 PushV
	var_106_bool = 1; // 0x9e9 MovB
	var_107_bool = 0; var_108_object = Obj(); // 0x9ea PushV
	var_108_object = var_1_bool; // 0x9eb MovT
	func_5703(var_107_bool, var_108_object); // 0x9ec NEW_2
	if(var_107_bool == 0) goto Label_2549; // 0x9ee JumpB
	var_113_bool = 0; var_114_object = Obj(); // 0x9ef PushV
	var_114_object = var_1_bool; // 0x9f0 MovT
	func_5743(var_113_bool, var_114_object); // 0x9f1 NEW_2
	if(var_113_bool == 0) goto Label_2549; // 0x9f3 JumpB
	var_106_bool = 0; // 0x9f4 MovB
	
Label_2549:
	if(var_106_bool == 0) goto Label_2555; // 0x9f5 JumpB
	var_119_int = 543108; // 0x9f6 PushI
	var_120_int = 45564; // 0x9f7 PushI
	var_121_int = 45563; // 0x9f8 PushI
	AddReply(var_119_int, var_120_int, var_121_int); // 0x9f9 TObjFunc
	
Label_2555:
	var_122_bool = 0; var_123_object = Obj(); // 0x9fb PushV
	var_123_object = var_1_bool; // 0x9fc MovT
	func_5713(var_122_bool, var_123_object); // 0x9fd NEW_2
	if(var_122_bool == 0) goto Label_2565; // 0x9ff JumpB
	var_128_int = 543101; // 0xa00 PushI
	var_129_int = 45557; // 0xa01 PushI
	var_130_int = 45556; // 0xa02 PushI
	AddReply(var_128_int, var_129_int, var_130_int); // 0xa03 TObjFunc
	
Label_2565:
	var_131_bool = 0; var_132_object = Obj(); // 0xa05 PushV
	var_132_object = var_1_bool; // 0xa06 MovT
	func_5723(var_131_bool, var_132_object); // 0xa07 NEW_2
	if(var_131_bool == 0) goto Label_2575; // 0xa09 JumpB
	var_137_int = 543117; // 0xa0a PushI
	var_138_int = 45573; // 0xa0b PushI
	var_139_int = 45572; // 0xa0c PushI
	AddReply(var_137_int, var_138_int, var_139_int); // 0xa0d TObjFunc
	
Label_2575:
	var_140_bool = 0; var_141_object = Obj(); // 0xa0f PushV
	var_141_object = var_1_bool; // 0xa10 MovT
	func_5733(var_140_bool, var_141_object); // 0xa11 NEW_2
	if(var_140_bool == 0) goto Label_2585; // 0xa13 JumpB
	var_146_int = 543127; // 0xa14 PushI
	var_147_int = 45583; // 0xa15 PushI
	var_148_int = 45582; // 0xa16 PushI
	AddReply(var_146_int, var_147_int, var_148_int); // 0xa17 TObjFunc
	
Label_2585:
	var_149_bool = 0; // 0xa19 PushV
	var_149_bool = 1; // 0xa1a MovB
	var_150_bool = 0; var_151_object = Obj(); // 0xa1b PushV
	var_151_object = var_1_bool; // 0xa1c MovT
	func_5753(var_150_bool, var_151_object); // 0xa1d NEW_2
	if(var_150_bool == 0) goto Label_2598; // 0xa1f JumpB
	var_156_bool = 0; var_157_object = Obj(); // 0xa20 PushV
	var_157_object = var_1_bool; // 0xa21 MovT
	func_5763(var_156_bool, var_157_object); // 0xa22 NEW_2
	if(var_156_bool == 0) goto Label_2598; // 0xa24 JumpB
	var_149_bool = 0; // 0xa25 MovB
	
Label_2598:
	if(var_149_bool == 0) goto Label_2604; // 0xa26 JumpB
	var_162_int = 543139; // 0xa27 PushI
	var_163_int = 45595; // 0xa28 PushI
	var_164_int = 45594; // 0xa29 PushI
	AddReply(var_162_int, var_163_int, var_164_int); // 0xa2a TObjFunc
	
Label_2604:
	var_165_bool = 0; var_166_object = Obj(); // 0xa2c PushV
	var_166_object = var_1_bool; // 0xa2d MovT
	func_5683(var_165_bool, var_166_object); // 0xa2e NEW_2
	if(var_165_bool == 0) goto Label_2614; // 0xa30 JumpB
	var_167_int = 543075; // 0xa31 PushI
	var_168_int = -1; // 0xa32 PushI
	var_169_int = 45530; // 0xa33 PushI
	AddReply(var_167_int, var_168_int, var_169_int); // 0xa34 TObjFunc
	
Label_2614:
	var_170_bool = 0; // 0xa36 PushV
	var_170_bool = 1; // 0xa37 MovB
	var_171_bool = 0; // 0xa38 PushV
	var_171_bool = 1; // 0xa39 MovB
	var_172_bool = 0; // 0xa3a PushV
	var_172_bool = 1; // 0xa3b MovB
	var_173_bool = 0; var_174_object = Obj(); // 0xa3c PushV
	var_174_object = var_1_bool; // 0xa3d MovT
	func_5693(var_173_bool, var_174_object); // 0xa3e NEW_2
	if(var_173_bool == 0) goto Label_2631; // 0xa40 JumpB
	var_175_bool = 0; var_176_object = Obj(); // 0xa41 PushV
	var_176_object = var_1_bool; // 0xa42 MovT
	func_5703(var_175_bool, var_176_object); // 0xa43 NEW_2
	if(var_175_bool == 0) goto Label_2631; // 0xa45 JumpB
	var_172_bool = 0; // 0xa46 MovB
	
Label_2631:
	if(var_172_bool == 0) goto Label_2638; // 0xa47 JumpB
	var_177_bool = 0; var_178_object = Obj(); // 0xa48 PushV
	var_178_object = var_1_bool; // 0xa49 MovT
	func_5713(var_177_bool, var_178_object); // 0xa4a NEW_2
	if(var_177_bool == 0) goto Label_2638; // 0xa4c JumpB
	var_171_bool = 0; // 0xa4d MovB
	
Label_2638:
	if(var_171_bool == 0) goto Label_2645; // 0xa4e JumpB
	var_179_bool = 0; var_180_object = Obj(); // 0xa4f PushV
	var_180_object = var_1_bool; // 0xa50 MovT
	func_5723(var_179_bool, var_180_object); // 0xa51 NEW_2
	if(var_179_bool == 0) goto Label_2645; // 0xa53 JumpB
	var_170_bool = 0; // 0xa54 MovB
	
Label_2645:
	if(var_170_bool == 0) goto Label_2651; // 0xa55 JumpB
	var_181_int = 543100; // 0xa56 PushI
	var_182_int = -1; // 0xa57 PushI
	var_183_int = 45555; // 0xa58 PushI
	AddReply(var_181_int, var_182_int, var_183_int); // 0xa59 TObjFunc
	
Label_2651:
	var_184_bool = 0; var_185_object = Obj(); // 0xa5b PushV
	var_185_object = var_1_bool; // 0xa5c MovT
	func_5733(var_184_bool, var_185_object); // 0xa5d NEW_2
	if(var_184_bool == 0) goto Label_2661; // 0xa5f JumpB
	var_186_int = 543125; // 0xa60 PushI
	var_187_int = -1; // 0xa61 PushI
	var_188_int = 45580; // 0xa62 PushI
	AddReply(var_186_int, var_187_int, var_188_int); // 0xa63 TObjFunc
	
Label_2661:
	var_189_bool = 0; // 0xa65 PushV
	var_189_bool = 1; // 0xa66 MovB
	var_190_bool = 0; // 0xa67 PushV
	var_190_bool = 1; // 0xa68 MovB
	var_191_bool = 0; var_192_object = Obj(); // 0xa69 PushV
	var_192_object = var_1_bool; // 0xa6a MovT
	func_5743(var_191_bool, var_192_object); // 0xa6b NEW_2
	if(var_191_bool == 0) goto Label_2676; // 0xa6d JumpB
	var_193_bool = 0; var_194_object = Obj(); // 0xa6e PushV
	var_194_object = var_1_bool; // 0xa6f MovT
	func_5753(var_193_bool, var_194_object); // 0xa70 NEW_2
	if(var_193_bool == 0) goto Label_2676; // 0xa72 JumpB
	var_190_bool = 0; // 0xa73 MovB
	
Label_2676:
	if(var_190_bool == 0) goto Label_2683; // 0xa74 JumpB
	var_195_bool = 0; var_196_object = Obj(); // 0xa75 PushV
	var_196_object = var_1_bool; // 0xa76 MovT
	func_5763(var_195_bool, var_196_object); // 0xa77 NEW_2
	if(var_195_bool == 0) goto Label_2683; // 0xa79 JumpB
	var_189_bool = 0; // 0xa7a MovB
	
Label_2683:
	if(var_189_bool == 0) goto Label_2689; // 0xa7b JumpB
	var_197_int = 543147; // 0xa7c PushI
	var_198_int = -1; // 0xa7d PushI
	var_199_int = 45602; // 0xa7e PushI
	AddReply(var_197_int, var_198_int, var_199_int); // 0xa7f TObjFunc
	
Label_2689:
	var_200_bool = 0; // 0xa81 PushV
	var_200_bool = 1; // 0xa82 MovB
	var_201_bool = 0; // 0xa83 PushV
	var_201_bool = 1; // 0xa84 MovB
	var_202_bool = 0; var_203_object = Obj(); // 0xa85 PushV
	var_203_object = var_1_bool; // 0xa86 MovT
	func_5773(var_202_bool, var_203_object); // 0xa87 NEW_2
	if(var_202_bool == 0) goto Label_2704; // 0xa89 JumpB
	var_208_bool = 0; var_209_object = Obj(); // 0xa8a PushV
	var_209_object = var_1_bool; // 0xa8b MovT
	func_5783(var_208_bool, var_209_object); // 0xa8c NEW_2
	if(var_208_bool == 0) goto Label_2704; // 0xa8e JumpB
	var_201_bool = 0; // 0xa8f MovB
	
Label_2704:
	if(var_201_bool == 0) goto Label_2711; // 0xa90 JumpB
	var_214_bool = 0; var_215_object = Obj(); // 0xa91 PushV
	var_215_object = var_1_bool; // 0xa92 MovT
	func_5793(var_214_bool, var_215_object); // 0xa93 NEW_2
	if(var_214_bool == 0) goto Label_2711; // 0xa95 JumpB
	var_200_bool = 0; // 0xa96 MovB
	
Label_2711:
	if(var_200_bool == 0) goto Label_2717; // 0xa97 JumpB
	var_220_int = 543148; // 0xa98 PushI
	var_221_int = -1; // 0xa99 PushI
	var_222_int = 45603; // 0xa9a PushI
	AddReply(var_220_int, var_221_int, var_222_int); // 0xa9b TObjFunc
	
Label_2717:
	var_223_bool = 0; var_224_object = Obj(); // 0xa9d PushV
	var_224_object = var_1_bool; // 0xa9e MovT
	func_5683(var_223_bool, var_224_object); // 0xa9f NEW_2
	if(var_223_bool == 0) goto Label_2727; // 0xaa1 JumpB
	var_225_int = 543074; // 0xaa2 PushI
	var_226_int = -1; // 0xaa3 PushI
	var_227_int = 45529; // 0xaa4 PushI
	AddReply(var_225_int, var_226_int, var_227_int); // 0xaa5 TObjFunc
	
Label_2727:
	var_228_bool = 0; // 0xaa7 PushV
	var_228_bool = 1; // 0xaa8 MovB
	var_229_bool = 0; var_230_object = Obj(); // 0xaa9 PushV
	var_230_object = var_1_bool; // 0xaaa MovT
	func_5693(var_229_bool, var_230_object); // 0xaab NEW_2
	if(var_229_bool == 0) goto Label_2740; // 0xaad JumpB
	var_231_bool = 0; var_232_object = Obj(); // 0xaae PushV
	var_232_object = var_1_bool; // 0xaaf MovT
	func_5703(var_231_bool, var_232_object); // 0xab0 NEW_2
	if(var_231_bool == 0) goto Label_2740; // 0xab2 JumpB
	var_228_bool = 0; // 0xab3 MovB
	
Label_2740:
	if(var_228_bool == 0) goto Label_2746; // 0xab4 JumpB
	var_233_int = 543090; // 0xab5 PushI
	var_234_int = -1; // 0xab6 PushI
	var_235_int = 45545; // 0xab7 PushI
	AddReply(var_233_int, var_234_int, var_235_int); // 0xab8 TObjFunc
	
Label_2746:
	var_236_bool = 0; // 0xaba PushV
	var_236_bool = 1; // 0xabb MovB
	var_237_bool = 0; var_238_object = Obj(); // 0xabc PushV
	var_238_object = var_1_bool; // 0xabd MovT
	func_5693(var_237_bool, var_238_object); // 0xabe NEW_2
	if(var_237_bool == 0) goto Label_2759; // 0xac0 JumpB
	var_239_bool = 0; var_240_object = Obj(); // 0xac1 PushV
	var_240_object = var_1_bool; // 0xac2 MovT
	func_5703(var_239_bool, var_240_object); // 0xac3 NEW_2
	if(var_239_bool == 0) goto Label_2759; // 0xac5 JumpB
	var_236_bool = 0; // 0xac6 MovB
	
Label_2759:
	if(var_236_bool == 0) goto Label_2765; // 0xac7 JumpB
	var_241_int = 543099; // 0xac8 PushI
	var_242_int = -1; // 0xac9 PushI
	var_243_int = 45554; // 0xaca PushI
	AddReply(var_241_int, var_242_int, var_243_int); // 0xacb TObjFunc
	
Label_2765:
	var_244_bool = 0; // 0xacd PushV
	var_244_bool = 1; // 0xace MovB
	var_245_bool = 0; var_246_object = Obj(); // 0xacf PushV
	var_246_object = var_1_bool; // 0xad0 MovT
	func_5733(var_245_bool, var_246_object); // 0xad1 NEW_2
	if(var_245_bool == 0) goto Label_2778; // 0xad3 JumpB
	var_247_bool = 0; var_248_object = Obj(); // 0xad4 PushV
	var_248_object = var_1_bool; // 0xad5 MovT
	func_5763(var_247_bool, var_248_object); // 0xad6 NEW_2
	if(var_247_bool == 0) goto Label_2778; // 0xad8 JumpB
	var_244_bool = 0; // 0xad9 MovB
	
Label_2778:
	if(var_244_bool == 0) goto Label_2784; // 0xada JumpB
	var_249_int = 543126; // 0xadb PushI
	var_250_int = -1; // 0xadc PushI
	var_251_int = 45581; // 0xadd PushI
	AddReply(var_249_int, var_250_int, var_251_int); // 0xade TObjFunc
	
Label_2784:
	var_252_bool = 0; // 0xae0 PushV
	var_252_bool = 1; // 0xae1 MovB
	var_253_bool = 0; // 0xae2 PushV
	var_253_bool = 1; // 0xae3 MovB
	var_254_bool = 0; // 0xae4 PushV
	var_254_bool = 1; // 0xae5 MovB
	var_255_bool = 0; var_256_object = Obj(); // 0xae6 PushV
	var_256_object = var_1_bool; // 0xae7 MovT
	func_5743(var_255_bool, var_256_object); // 0xae8 NEW_2
	if(var_255_bool == 0) goto Label_2801; // 0xaea JumpB
	var_257_bool = 0; var_258_object = Obj(); // 0xaeb PushV
	var_258_object = var_1_bool; // 0xaec MovT
	func_5753(var_257_bool, var_258_object); // 0xaed NEW_2
	if(var_257_bool == 0) goto Label_2801; // 0xaef JumpB
	var_254_bool = 0; // 0xaf0 MovB
	
Label_2801:
	if(var_254_bool == 0) goto Label_2808; // 0xaf1 JumpB
	var_259_bool = 0; var_260_object = Obj(); // 0xaf2 PushV
	var_260_object = var_1_bool; // 0xaf3 MovT
	func_5773(var_259_bool, var_260_object); // 0xaf4 NEW_2
	if(var_259_bool == 0) goto Label_2808; // 0xaf6 JumpB
	var_253_bool = 0; // 0xaf7 MovB
	
Label_2808:
	if(var_253_bool == 0) goto Label_2815; // 0xaf8 JumpB
	var_261_bool = 0; var_262_object = Obj(); // 0xaf9 PushV
	var_262_object = var_1_bool; // 0xafa MovT
	func_5793(var_261_bool, var_262_object); // 0xafb NEW_2
	if(var_261_bool == 0) goto Label_2815; // 0xafd JumpB
	var_252_bool = 0; // 0xafe MovB
	
Label_2815:
	if(var_252_bool == 0) goto Label_2821; // 0xaff JumpB
	var_263_int = 543149; // 0xb00 PushI
	var_264_int = -1; // 0xb01 PushI
	var_265_int = 45604; // 0xb02 PushI
	AddReply(var_263_int, var_264_int, var_265_int); // 0xb03 TObjFunc
	
Label_2821:
	var_266_bool = 0; // 0xb05 PushV
	var_266_bool = 1; // 0xb06 MovB
	var_267_bool = 0; // 0xb07 PushV
	var_267_bool = 1; // 0xb08 MovB
	var_268_bool = 0; // 0xb09 PushV
	var_268_bool = 1; // 0xb0a MovB
	var_269_bool = 0; // 0xb0b PushV
	var_269_bool = 1; // 0xb0c MovB
	var_270_bool = 0; var_271_object = Obj(); // 0xb0d PushV
	var_271_object = var_1_bool; // 0xb0e MovT
	func_5713(var_270_bool, var_271_object); // 0xb0f NEW_2
	if(var_270_bool == 0) goto Label_2840; // 0xb11 JumpB
	var_272_bool = 0; var_273_object = Obj(); // 0xb12 PushV
	var_273_object = var_1_bool; // 0xb13 MovT
	func_5723(var_272_bool, var_273_object); // 0xb14 NEW_2
	if(var_272_bool == 0) goto Label_2840; // 0xb16 JumpB
	var_269_bool = 0; // 0xb17 MovB
	
Label_2840:
	if(var_269_bool == 0) goto Label_2847; // 0xb18 JumpB
	var_274_bool = 0; var_275_object = Obj(); // 0xb19 PushV
	var_275_object = var_1_bool; // 0xb1a MovT
	func_5763(var_274_bool, var_275_object); // 0xb1b NEW_2
	if(var_274_bool == 0) goto Label_2847; // 0xb1d JumpB
	var_268_bool = 0; // 0xb1e MovB
	
Label_2847:
	if(var_268_bool == 0) goto Label_2854; // 0xb1f JumpB
	var_276_bool = 0; var_277_object = Obj(); // 0xb20 PushV
	var_277_object = var_1_bool; // 0xb21 MovT
	func_5783(var_276_bool, var_277_object); // 0xb22 NEW_2
	if(var_276_bool == 0) goto Label_2854; // 0xb24 JumpB
	var_267_bool = 0; // 0xb25 MovB
	
Label_2854:
	if(var_267_bool == 0) goto Label_2861; // 0xb26 JumpB
	var_278_bool = 0; var_279_object = Obj(); // 0xb27 PushV
	var_279_object = var_1_bool; // 0xb28 MovT
	func_5793(var_278_bool, var_279_object); // 0xb29 NEW_2
	if(var_278_bool == 0) goto Label_2861; // 0xb2b JumpB
	var_266_bool = 0; // 0xb2c MovB
	
Label_2861:
	if(var_266_bool == 0) goto Label_2867; // 0xb2d JumpB
	var_280_int = 543150; // 0xb2e PushI
	var_281_int = -1; // 0xb2f PushI
	var_282_int = 45605; // 0xb30 PushI
	AddReply(var_280_int, var_281_int, var_282_int); // 0xb31 TObjFunc
	
Label_2867:
	return 0; // 0xb33 Return
	
Label_2868:
	var_283_string = ""; // 0xb34 PushV
	var_283_string = "Neutral"; // 0xb35 MovS
	func_2415(var_23_int, var_283_string); // 0xb36 NEW_2
	var_284_int = 536854; // 0xb38 PushI
	SetMessage(var_284_int); // 0xb39 TObjFunc
	ClearReplies(); // 0xb3b TObjFunc
	var_285_int = 536855; // 0xb3d PushI
	var_286_int = -1; // 0xb3e PushI
	var_287_int = 38691; // 0xb3f PushI
	AddReply(var_285_int, var_286_int, var_287_int); // 0xb40 TObjFunc
	var_288_bool = 0; var_289_object = Obj(); // 0xb42 PushV
	var_289_object = var_1_bool; // 0xb43 MovT
	func_5683(var_288_bool, var_289_object); // 0xb44 NEW_2
	if(var_288_bool == 0) goto Label_2892; // 0xb46 JumpB
	var_290_int = 536856; // 0xb47 PushI
	var_291_int = 38693; // 0xb48 PushI
	var_292_int = 38692; // 0xb49 PushI
	AddReply(var_290_int, var_291_int, var_292_int); // 0xb4a TObjFunc
	
Label_2892:
	var_293_bool = 0; var_294_object = Obj(); // 0xb4c PushV
	var_294_object = var_1_bool; // 0xb4d MovT
	func_5683(var_293_bool, var_294_object); // 0xb4e NEW_2
	if(var_293_bool == 0) goto Label_2902; // 0xb50 JumpB
	var_295_int = 536870; // 0xb51 PushI
	var_296_int = 38709; // 0xb52 PushI
	var_297_int = 38708; // 0xb53 PushI
	AddReply(var_295_int, var_296_int, var_297_int); // 0xb54 TObjFunc
	
Label_2902:
	var_298_bool = 0; var_299_object = Obj(); // 0xb56 PushV
	var_299_object = var_1_bool; // 0xb57 MovT
	func_5693(var_298_bool, var_299_object); // 0xb58 NEW_2
	if(var_298_bool == 0) goto Label_2912; // 0xb5a JumpB
	var_300_int = 536885; // 0xb5b PushI
	var_301_int = 38724; // 0xb5c PushI
	var_302_int = 38723; // 0xb5d PushI
	AddReply(var_300_int, var_301_int, var_302_int); // 0xb5e TObjFunc
	
Label_2912:
	var_303_bool = 0; var_304_object = Obj(); // 0xb60 PushV
	var_304_object = var_1_bool; // 0xb61 MovT
	func_5703(var_303_bool, var_304_object); // 0xb62 NEW_2
	if(var_303_bool == 0) goto Label_2922; // 0xb64 JumpB
	var_305_int = 536904; // 0xb65 PushI
	var_306_int = 38743; // 0xb66 PushI
	var_307_int = 38742; // 0xb67 PushI
	AddReply(var_305_int, var_306_int, var_307_int); // 0xb68 TObjFunc
	
Label_2922:
	var_308_bool = 0; var_309_object = Obj(); // 0xb6a PushV
	var_309_object = var_1_bool; // 0xb6b MovT
	func_5713(var_308_bool, var_309_object); // 0xb6c NEW_2
	if(var_308_bool == 0) goto Label_2932; // 0xb6e JumpB
	var_310_int = 536916; // 0xb6f PushI
	var_311_int = 38755; // 0xb70 PushI
	var_312_int = 38754; // 0xb71 PushI
	AddReply(var_310_int, var_311_int, var_312_int); // 0xb72 TObjFunc
	
Label_2932:
	var_313_bool = 0; // 0xb74 PushV
	var_313_bool = 0; // 0xb75 MovB
	var_314_bool = 0; var_315_object = Obj(); // 0xb76 PushV
	var_315_object = var_1_bool; // 0xb77 MovT
	func_5733(var_314_bool, var_315_object); // 0xb78 NEW_2
	if(var_314_bool == 0) goto Label_2945; // 0xb7a JumpB
	var_316_bool = 0; var_317_object = Obj(); // 0xb7b PushV
	var_317_object = var_1_bool; // 0xb7c MovT
	func_5659(var_317_object); // 0xb7d NEW_2
	if(var_316_bool == 0) goto Label_2945; // 0xb7f JumpB
	var_313_bool = 1; // 0xb80 MovB
	
Label_2945:
	if(var_313_bool == 0) goto Label_2951; // 0xb81 JumpB
	var_322_int = 536931; // 0xb82 PushI
	var_323_int = 38770; // 0xb83 PushI
	var_324_int = 38769; // 0xb84 PushI
	AddReply(var_322_int, var_323_int, var_324_int); // 0xb85 TObjFunc
	
Label_2951:
	var_325_bool = 0; var_326_object = Obj(); // 0xb87 PushV
	var_326_object = var_1_bool; // 0xb88 MovT
	func_5753(var_325_bool, var_326_object); // 0xb89 NEW_2
	if(var_325_bool == 0) goto Label_2961; // 0xb8b JumpB
	var_327_int = 536943; // 0xb8c PushI
	var_328_int = 38782; // 0xb8d PushI
	var_329_int = 38781; // 0xb8e PushI
	AddReply(var_327_int, var_328_int, var_329_int); // 0xb8f TObjFunc
	
Label_2961:
	var_330_bool = 0; var_331_object = Obj(); // 0xb91 PushV
	var_331_object = var_1_bool; // 0xb92 MovT
	func_5763(var_330_bool, var_331_object); // 0xb93 NEW_2
	if(var_330_bool == 0) goto Label_2971; // 0xb95 JumpB
	var_332_int = 536961; // 0xb96 PushI
	var_333_int = 38800; // 0xb97 PushI
	var_334_int = 38799; // 0xb98 PushI
	AddReply(var_332_int, var_333_int, var_334_int); // 0xb99 TObjFunc
	
Label_2971:
	var_335_bool = 0; var_336_object = Obj(); // 0xb9b PushV
	var_336_object = var_1_bool; // 0xb9c MovT
	func_5773(var_335_bool, var_336_object); // 0xb9d NEW_2
	if(var_335_bool == 0) goto Label_2981; // 0xb9f JumpB
	var_337_int = 536978; // 0xba0 PushI
	var_338_int = 38817; // 0xba1 PushI
	var_339_int = 38816; // 0xba2 PushI
	AddReply(var_337_int, var_338_int, var_339_int); // 0xba3 TObjFunc
	
Label_2981:
	var_340_bool = 0; // 0xba5 PushV
	var_340_bool = 0; // 0xba6 MovB
	var_341_bool = 0; var_342_object = Obj(); // 0xba7 PushV
	var_342_object = var_1_bool; // 0xba8 MovT
	func_5783(var_341_bool, var_342_object); // 0xba9 NEW_2
	if(var_341_bool == 0) goto Label_2994; // 0xbab JumpB
	var_343_bool = 0; var_344_object = Obj(); // 0xbac PushV
	var_344_object = var_1_bool; // 0xbad MovT
	func_5659(var_344_object); // 0xbae NEW_2
	if(var_343_bool == 0) goto Label_2994; // 0xbb0 JumpB
	var_340_bool = 1; // 0xbb1 MovB
	
Label_2994:
	if(var_340_bool == 0) goto Label_3000; // 0xbb2 JumpB
	var_345_int = 536993; // 0xbb3 PushI
	var_346_int = 38832; // 0xbb4 PushI
	var_347_int = 38831; // 0xbb5 PushI
	AddReply(var_345_int, var_346_int, var_347_int); // 0xbb6 TObjFunc
	
Label_3000:
	var_348_bool = 0; // 0xbb8 PushV
	var_348_bool = 0; // 0xbb9 MovB
	var_349_bool = 0; var_350_object = Obj(); // 0xbba PushV
	var_350_object = var_1_bool; // 0xbbb MovT
	func_5683(var_349_bool, var_350_object); // 0xbbc NEW_2
	if(var_349_bool == 0) goto Label_3013; // 0xbbe JumpB
	var_351_bool = 0; var_352_object = Obj(); // 0xbbf PushV
	var_352_object = var_1_bool; // 0xbc0 MovT
	func_5659(var_352_object); // 0xbc1 NEW_2
	if(var_351_bool == 0) goto Label_3013; // 0xbc3 JumpB
	var_348_bool = 1; // 0xbc4 MovB
	
Label_3013:
	if(var_348_bool == 0) goto Label_3019; // 0xbc5 JumpB
	var_353_int = 537006; // 0xbc6 PushI
	var_354_int = 38846; // 0xbc7 PushI
	var_355_int = 38845; // 0xbc8 PushI
	AddReply(var_353_int, var_354_int, var_355_int); // 0xbc9 TObjFunc
	
Label_3019:
	var_356_bool = 0; // 0xbcb PushV
	var_356_bool = 0; // 0xbcc MovB
	var_357_bool = 0; var_358_object = Obj(); // 0xbcd PushV
	var_358_object = var_1_bool; // 0xbce MovT
	func_5683(var_357_bool, var_358_object); // 0xbcf NEW_2
	if(var_357_bool == 0) goto Label_3032; // 0xbd1 JumpB
	var_359_bool = 0; var_360_object = Obj(); // 0xbd2 PushV
	var_360_object = var_1_bool; // 0xbd3 MovT
	func_5659(var_360_object); // 0xbd4 NEW_2
	if(var_359_bool == 0) goto Label_3032; // 0xbd6 JumpB
	var_356_bool = 1; // 0xbd7 MovB
	
Label_3032:
	if(var_356_bool == 0) goto Label_3038; // 0xbd8 JumpB
	var_361_int = 537017; // 0xbd9 PushI
	var_362_int = 38857; // 0xbda PushI
	var_363_int = 38856; // 0xbdb PushI
	AddReply(var_361_int, var_362_int, var_363_int); // 0xbdc TObjFunc
	
Label_3038:
	var_364_bool = 0; var_365_object = Obj(); // 0xbde PushV
	var_365_object = var_1_bool; // 0xbdf MovT
	func_5683(var_364_bool, var_365_object); // 0xbe0 NEW_2
	if(var_364_bool == 0) goto Label_3048; // 0xbe2 JumpB
	var_366_int = 537025; // 0xbe3 PushI
	var_367_int = 38865; // 0xbe4 PushI
	var_368_int = 38864; // 0xbe5 PushI
	AddReply(var_366_int, var_367_int, var_368_int); // 0xbe6 TObjFunc
	
Label_3048:
	var_369_bool = 0; var_370_object = Obj(); // 0xbe8 PushV
	var_370_object = var_1_bool; // 0xbe9 MovT
	func_5683(var_369_bool, var_370_object); // 0xbea NEW_2
	if(var_369_bool == 0) goto Label_3058; // 0xbec JumpB
	var_371_int = 537035; // 0xbed PushI
	var_372_int = 38875; // 0xbee PushI
	var_373_int = 38874; // 0xbef PushI
	AddReply(var_371_int, var_372_int, var_373_int); // 0xbf0 TObjFunc
	
Label_3058:
	var_374_bool = 0; var_375_object = Obj(); // 0xbf2 PushV
	var_375_object = var_1_bool; // 0xbf3 MovT
	func_5683(var_374_bool, var_375_object); // 0xbf4 NEW_2
	if(var_374_bool == 0) goto Label_3068; // 0xbf6 JumpB
	var_376_int = 537044; // 0xbf7 PushI
	var_377_int = 38884; // 0xbf8 PushI
	var_378_int = 38883; // 0xbf9 PushI
	AddReply(var_376_int, var_377_int, var_378_int); // 0xbfa TObjFunc
	
Label_3068:
	var_379_int = 537050; // 0xbfc PushI
	var_380_int = -1; // 0xbfd PushI
	var_381_int = 38889; // 0xbfe PushI
	AddReply(var_379_int, var_380_int, var_381_int); // 0xbff TObjFunc
	return 0; // 0xc01 Return
	
Label_3074:
	var_382_int = 38884; // 0xc02 PushI
	var_383_bool = var_22_int == var_382_int; // 0xc03 Eq
	if(var_383_bool == 0) goto Label_3097; // 0xc04 JumpB
	var_384_string = ""; // 0xc05 PushV
	var_384_string = "Neutral"; // 0xc06 MovS
	func_2415(var_23_int, var_384_string); // 0xc07 NEW_2
	var_385_int = 537045; // 0xc09 PushI
	SetMessage(var_385_int); // 0xc0a TObjFunc
	ClearReplies(); // 0xc0c TObjFunc
	var_386_int = 537046; // 0xc0e PushI
	var_387_int = 38886; // 0xc0f PushI
	var_388_int = 38885; // 0xc10 PushI
	AddReply(var_386_int, var_387_int, var_388_int); // 0xc11 TObjFunc
	var_389_int = 537049; // 0xc13 PushI
	var_390_int = -1; // 0xc14 PushI
	var_391_int = 38888; // 0xc15 PushI
	AddReply(var_389_int, var_390_int, var_391_int); // 0xc16 TObjFunc
	return 0; // 0xc18 Return
	
Label_3097:
	var_392_int = 38886; // 0xc19 PushI
	var_393_bool = var_22_int == var_392_int; // 0xc1a Eq
	if(var_393_bool == 0) goto Label_3115; // 0xc1b JumpB
	var_394_string = ""; // 0xc1c PushV
	var_394_string = "Neutral"; // 0xc1d MovS
	func_2415(var_23_int, var_394_string); // 0xc1e NEW_2
	var_395_int = 537047; // 0xc20 PushI
	SetMessage(var_395_int); // 0xc21 TObjFunc
	ClearReplies(); // 0xc23 TObjFunc
	var_396_int = 537048; // 0xc25 PushI
	var_397_int = -1; // 0xc26 PushI
	var_398_int = 38887; // 0xc27 PushI
	AddReply(var_396_int, var_397_int, var_398_int); // 0xc28 TObjFunc
	return 0; // 0xc2a Return
	
Label_3115:
	var_399_int = 38875; // 0xc2b PushI
	var_400_bool = var_22_int == var_399_int; // 0xc2c Eq
	if(var_400_bool == 0) goto Label_3138; // 0xc2d JumpB
	var_401_string = ""; // 0xc2e PushV
	var_401_string = "Neutral"; // 0xc2f MovS
	func_2415(var_23_int, var_401_string); // 0xc30 NEW_2
	var_402_int = 537036; // 0xc32 PushI
	SetMessage(var_402_int); // 0xc33 TObjFunc
	ClearReplies(); // 0xc35 TObjFunc
	var_403_int = 537037; // 0xc37 PushI
	var_404_int = 38877; // 0xc38 PushI
	var_405_int = 38876; // 0xc39 PushI
	AddReply(var_403_int, var_404_int, var_405_int); // 0xc3a TObjFunc
	var_406_int = 537043; // 0xc3c PushI
	var_407_int = -1; // 0xc3d PushI
	var_408_int = 38882; // 0xc3e PushI
	AddReply(var_406_int, var_407_int, var_408_int); // 0xc3f TObjFunc
	return 0; // 0xc41 Return
	
Label_3138:
	var_409_int = 38877; // 0xc42 PushI
	var_410_bool = var_22_int == var_409_int; // 0xc43 Eq
	if(var_410_bool == 0) goto Label_3166; // 0xc44 JumpB
	var_411_string = ""; // 0xc45 PushV
	var_411_string = "Neutral"; // 0xc46 MovS
	func_2415(var_23_int, var_411_string); // 0xc47 NEW_2
	var_412_int = 537038; // 0xc49 PushI
	SetMessage(var_412_int); // 0xc4a TObjFunc
	ClearReplies(); // 0xc4c TObjFunc
	var_413_bool = 0; var_414_object = Obj(); // 0xc4e PushV
	var_414_object = var_1_bool; // 0xc4f MovT
	func_5659(var_414_object); // 0xc50 NEW_2
	if(var_413_bool == 0) goto Label_3160; // 0xc52 JumpB
	var_415_int = 537039; // 0xc53 PushI
	var_416_int = 38879; // 0xc54 PushI
	var_417_int = 38878; // 0xc55 PushI
	AddReply(var_415_int, var_416_int, var_417_int); // 0xc56 TObjFunc
	
Label_3160:
	var_418_int = 537042; // 0xc58 PushI
	var_419_int = -1; // 0xc59 PushI
	var_420_int = 38881; // 0xc5a PushI
	AddReply(var_418_int, var_419_int, var_420_int); // 0xc5b TObjFunc
	return 0; // 0xc5d Return
	
Label_3166:
	var_421_int = 38879; // 0xc5e PushI
	var_422_bool = var_22_int == var_421_int; // 0xc5f Eq
	if(var_422_bool == 0) goto Label_3184; // 0xc60 JumpB
	var_423_string = ""; // 0xc61 PushV
	var_423_string = "Neutral"; // 0xc62 MovS
	func_2415(var_23_int, var_423_string); // 0xc63 NEW_2
	var_424_int = 537040; // 0xc65 PushI
	SetMessage(var_424_int); // 0xc66 TObjFunc
	ClearReplies(); // 0xc68 TObjFunc
	var_425_int = 537041; // 0xc6a PushI
	var_426_int = -1; // 0xc6b PushI
	var_427_int = 38880; // 0xc6c PushI
	AddReply(var_425_int, var_426_int, var_427_int); // 0xc6d TObjFunc
	return 0; // 0xc6f Return
	
Label_3184:
	var_428_int = 38865; // 0xc70 PushI
	var_429_bool = var_22_int == var_428_int; // 0xc71 Eq
	if(var_429_bool == 0) goto Label_3207; // 0xc72 JumpB
	var_430_string = ""; // 0xc73 PushV
	var_430_string = "Neutral"; // 0xc74 MovS
	func_2415(var_23_int, var_430_string); // 0xc75 NEW_2
	var_431_int = 537026; // 0xc77 PushI
	SetMessage(var_431_int); // 0xc78 TObjFunc
	ClearReplies(); // 0xc7a TObjFunc
	var_432_int = 537027; // 0xc7c PushI
	var_433_int = 38867; // 0xc7d PushI
	var_434_int = 38866; // 0xc7e PushI
	AddReply(var_432_int, var_433_int, var_434_int); // 0xc7f TObjFunc
	var_435_int = 537034; // 0xc81 PushI
	var_436_int = -1; // 0xc82 PushI
	var_437_int = 38873; // 0xc83 PushI
	AddReply(var_435_int, var_436_int, var_437_int); // 0xc84 TObjFunc
	return 0; // 0xc86 Return
	
Label_3207:
	var_438_int = 38867; // 0xc87 PushI
	var_439_bool = var_22_int == var_438_int; // 0xc88 Eq
	if(var_439_bool == 0) goto Label_3230; // 0xc89 JumpB
	var_440_string = ""; // 0xc8a PushV
	var_440_string = "Neutral"; // 0xc8b MovS
	func_2415(var_23_int, var_440_string); // 0xc8c NEW_2
	var_441_int = 537028; // 0xc8e PushI
	SetMessage(var_441_int); // 0xc8f TObjFunc
	ClearReplies(); // 0xc91 TObjFunc
	var_442_int = 537029; // 0xc93 PushI
	var_443_int = 38869; // 0xc94 PushI
	var_444_int = 38868; // 0xc95 PushI
	AddReply(var_442_int, var_443_int, var_444_int); // 0xc96 TObjFunc
	var_445_int = 537033; // 0xc98 PushI
	var_446_int = -1; // 0xc99 PushI
	var_447_int = 38872; // 0xc9a PushI
	AddReply(var_445_int, var_446_int, var_447_int); // 0xc9b TObjFunc
	return 0; // 0xc9d Return
	
Label_3230:
	var_448_int = 38869; // 0xc9e PushI
	var_449_bool = var_22_int == var_448_int; // 0xc9f Eq
	if(var_449_bool == 0) goto Label_3258; // 0xca0 JumpB
	var_450_string = ""; // 0xca1 PushV
	var_450_string = "Neutral"; // 0xca2 MovS
	func_2415(var_23_int, var_450_string); // 0xca3 NEW_2
	var_451_int = 537030; // 0xca5 PushI
	SetMessage(var_451_int); // 0xca6 TObjFunc
	ClearReplies(); // 0xca8 TObjFunc
	var_452_int = 537031; // 0xcaa PushI
	var_453_int = -1; // 0xcab PushI
	var_454_int = 38870; // 0xcac PushI
	AddReply(var_452_int, var_453_int, var_454_int); // 0xcad TObjFunc
	var_455_bool = 0; var_456_object = Obj(); // 0xcaf PushV
	var_456_object = var_1_bool; // 0xcb0 MovT
	func_5659(var_456_object); // 0xcb1 NEW_2
	if(var_455_bool == 0) goto Label_3257; // 0xcb3 JumpB
	var_457_int = 537032; // 0xcb4 PushI
	var_458_int = -1; // 0xcb5 PushI
	var_459_int = 38871; // 0xcb6 PushI
	AddReply(var_457_int, var_458_int, var_459_int); // 0xcb7 TObjFunc
	
Label_3257:
	return 0; // 0xcb9 Return
	
Label_3258:
	var_460_int = 38857; // 0xcba PushI
	var_461_bool = var_22_int == var_460_int; // 0xcbb Eq
	if(var_461_bool == 0) goto Label_3276; // 0xcbc JumpB
	var_462_string = ""; // 0xcbd PushV
	var_462_string = "Neutral"; // 0xcbe MovS
	func_2415(var_23_int, var_462_string); // 0xcbf NEW_2
	var_463_int = 537018; // 0xcc1 PushI
	SetMessage(var_463_int); // 0xcc2 TObjFunc
	ClearReplies(); // 0xcc4 TObjFunc
	var_464_int = 537019; // 0xcc6 PushI
	var_465_int = 38859; // 0xcc7 PushI
	var_466_int = 38858; // 0xcc8 PushI
	AddReply(var_464_int, var_465_int, var_466_int); // 0xcc9 TObjFunc
	return 0; // 0xccb Return
	
Label_3276:
	var_467_int = 38859; // 0xccc PushI
	var_468_bool = var_22_int == var_467_int; // 0xccd Eq
	if(var_468_bool == 0) goto Label_3294; // 0xcce JumpB
	var_469_string = ""; // 0xccf PushV
	var_469_string = "Neutral"; // 0xcd0 MovS
	func_2415(var_23_int, var_469_string); // 0xcd1 NEW_2
	var_470_int = 537020; // 0xcd3 PushI
	SetMessage(var_470_int); // 0xcd4 TObjFunc
	ClearReplies(); // 0xcd6 TObjFunc
	var_471_int = 537021; // 0xcd8 PushI
	var_472_int = 38861; // 0xcd9 PushI
	var_473_int = 38860; // 0xcda PushI
	AddReply(var_471_int, var_472_int, var_473_int); // 0xcdb TObjFunc
	return 0; // 0xcdd Return
	
Label_3294:
	var_474_int = 38861; // 0xcde PushI
	var_475_bool = var_22_int == var_474_int; // 0xcdf Eq
	if(var_475_bool == 0) goto Label_3317; // 0xce0 JumpB
	var_476_string = ""; // 0xce1 PushV
	var_476_string = "Neutral"; // 0xce2 MovS
	func_2415(var_23_int, var_476_string); // 0xce3 NEW_2
	var_477_int = 537022; // 0xce5 PushI
	SetMessage(var_477_int); // 0xce6 TObjFunc
	ClearReplies(); // 0xce8 TObjFunc
	var_478_int = 537023; // 0xcea PushI
	var_479_int = -1; // 0xceb PushI
	var_480_int = 38862; // 0xcec PushI
	AddReply(var_478_int, var_479_int, var_480_int); // 0xced TObjFunc
	var_481_int = 537024; // 0xcef PushI
	var_482_int = -1; // 0xcf0 PushI
	var_483_int = 38863; // 0xcf1 PushI
	AddReply(var_481_int, var_482_int, var_483_int); // 0xcf2 TObjFunc
	return 0; // 0xcf4 Return
	
Label_3317:
	var_484_int = 38846; // 0xcf5 PushI
	var_485_bool = var_22_int == var_484_int; // 0xcf6 Eq
	if(var_485_bool == 0) goto Label_3340; // 0xcf7 JumpB
	var_486_string = ""; // 0xcf8 PushV
	var_486_string = "Neutral"; // 0xcf9 MovS
	func_2415(var_23_int, var_486_string); // 0xcfa NEW_2
	var_487_int = 537007; // 0xcfc PushI
	SetMessage(var_487_int); // 0xcfd TObjFunc
	ClearReplies(); // 0xcff TObjFunc
	var_488_int = 537008; // 0xd01 PushI
	var_489_int = 38848; // 0xd02 PushI
	var_490_int = 38847; // 0xd03 PushI
	AddReply(var_488_int, var_489_int, var_490_int); // 0xd04 TObjFunc
	var_491_int = 537016; // 0xd06 PushI
	var_492_int = -1; // 0xd07 PushI
	var_493_int = 38855; // 0xd08 PushI
	AddReply(var_491_int, var_492_int, var_493_int); // 0xd09 TObjFunc
	return 0; // 0xd0b Return
	
Label_3340:
	var_494_int = 38848; // 0xd0c PushI
	var_495_bool = var_22_int == var_494_int; // 0xd0d Eq
	if(var_495_bool == 0) goto Label_3358; // 0xd0e JumpB
	var_496_string = ""; // 0xd0f PushV
	var_496_string = "Neutral"; // 0xd10 MovS
	func_2415(var_23_int, var_496_string); // 0xd11 NEW_2
	var_497_int = 537009; // 0xd13 PushI
	SetMessage(var_497_int); // 0xd14 TObjFunc
	ClearReplies(); // 0xd16 TObjFunc
	var_498_int = 537010; // 0xd18 PushI
	var_499_int = 38850; // 0xd19 PushI
	var_500_int = 38849; // 0xd1a PushI
	AddReply(var_498_int, var_499_int, var_500_int); // 0xd1b TObjFunc
	return 0; // 0xd1d Return
	
Label_3358:
	var_501_int = 38850; // 0xd1e PushI
	var_502_bool = var_22_int == var_501_int; // 0xd1f Eq
	if(var_502_bool == 0) goto Label_3376; // 0xd20 JumpB
	var_503_string = ""; // 0xd21 PushV
	var_503_string = "Neutral"; // 0xd22 MovS
	func_2415(var_23_int, var_503_string); // 0xd23 NEW_2
	var_504_int = 537011; // 0xd25 PushI
	SetMessage(var_504_int); // 0xd26 TObjFunc
	ClearReplies(); // 0xd28 TObjFunc
	var_505_int = 537012; // 0xd2a PushI
	var_506_int = 38852; // 0xd2b PushI
	var_507_int = 38851; // 0xd2c PushI
	AddReply(var_505_int, var_506_int, var_507_int); // 0xd2d TObjFunc
	return 0; // 0xd2f Return
	
Label_3376:
	var_508_int = 38852; // 0xd30 PushI
	var_509_bool = var_22_int == var_508_int; // 0xd31 Eq
	if(var_509_bool == 0) goto Label_3399; // 0xd32 JumpB
	var_510_string = ""; // 0xd33 PushV
	var_510_string = "Neutral"; // 0xd34 MovS
	func_2415(var_23_int, var_510_string); // 0xd35 NEW_2
	var_511_int = 537013; // 0xd37 PushI
	SetMessage(var_511_int); // 0xd38 TObjFunc
	ClearReplies(); // 0xd3a TObjFunc
	var_512_int = 537014; // 0xd3c PushI
	var_513_int = -1; // 0xd3d PushI
	var_514_int = 38853; // 0xd3e PushI
	AddReply(var_512_int, var_513_int, var_514_int); // 0xd3f TObjFunc
	var_515_int = 537015; // 0xd41 PushI
	var_516_int = -1; // 0xd42 PushI
	var_517_int = 38854; // 0xd43 PushI
	AddReply(var_515_int, var_516_int, var_517_int); // 0xd44 TObjFunc
	return 0; // 0xd46 Return
	
Label_3399:
	var_518_int = 38832; // 0xd47 PushI
	var_519_bool = var_22_int == var_518_int; // 0xd48 Eq
	if(var_519_bool == 0) goto Label_3422; // 0xd49 JumpB
	var_520_string = ""; // 0xd4a PushV
	var_520_string = "Neutral"; // 0xd4b MovS
	func_2415(var_23_int, var_520_string); // 0xd4c NEW_2
	var_521_int = 536994; // 0xd4e PushI
	SetMessage(var_521_int); // 0xd4f TObjFunc
	ClearReplies(); // 0xd51 TObjFunc
	var_522_int = 536995; // 0xd53 PushI
	var_523_int = 38834; // 0xd54 PushI
	var_524_int = 38833; // 0xd55 PushI
	AddReply(var_522_int, var_523_int, var_524_int); // 0xd56 TObjFunc
	var_525_int = 537005; // 0xd58 PushI
	var_526_int = -1; // 0xd59 PushI
	var_527_int = 38844; // 0xd5a PushI
	AddReply(var_525_int, var_526_int, var_527_int); // 0xd5b TObjFunc
	return 0; // 0xd5d Return
	
Label_3422:
	var_528_int = 38834; // 0xd5e PushI
	var_529_bool = var_22_int == var_528_int; // 0xd5f Eq
	if(var_529_bool == 0) goto Label_3445; // 0xd60 JumpB
	var_530_string = ""; // 0xd61 PushV
	var_530_string = "Neutral"; // 0xd62 MovS
	func_2415(var_23_int, var_530_string); // 0xd63 NEW_2
	var_531_int = 536996; // 0xd65 PushI
	SetMessage(var_531_int); // 0xd66 TObjFunc
	ClearReplies(); // 0xd68 TObjFunc
	var_532_int = 536997; // 0xd6a PushI
	var_533_int = 38836; // 0xd6b PushI
	var_534_int = 38835; // 0xd6c PushI
	AddReply(var_532_int, var_533_int, var_534_int); // 0xd6d TObjFunc
	var_535_int = 537004; // 0xd6f PushI
	var_536_int = -1; // 0xd70 PushI
	var_537_int = 38843; // 0xd71 PushI
	AddReply(var_535_int, var_536_int, var_537_int); // 0xd72 TObjFunc
	return 0; // 0xd74 Return
	
Label_3445:
	var_538_int = 38836; // 0xd75 PushI
	var_539_bool = var_22_int == var_538_int; // 0xd76 Eq
	if(var_539_bool == 0) goto Label_3468; // 0xd77 JumpB
	var_540_string = ""; // 0xd78 PushV
	var_540_string = "Neutral"; // 0xd79 MovS
	func_2415(var_23_int, var_540_string); // 0xd7a NEW_2
	var_541_int = 536998; // 0xd7c PushI
	SetMessage(var_541_int); // 0xd7d TObjFunc
	ClearReplies(); // 0xd7f TObjFunc
	var_542_int = 536999; // 0xd81 PushI
	var_543_int = 38838; // 0xd82 PushI
	var_544_int = 38837; // 0xd83 PushI
	AddReply(var_542_int, var_543_int, var_544_int); // 0xd84 TObjFunc
	var_545_int = 537003; // 0xd86 PushI
	var_546_int = 38838; // 0xd87 PushI
	var_547_int = 38841; // 0xd88 PushI
	AddReply(var_545_int, var_546_int, var_547_int); // 0xd89 TObjFunc
	return 0; // 0xd8b Return
	
Label_3468:
	var_548_int = 38838; // 0xd8c PushI
	var_549_bool = var_22_int == var_548_int; // 0xd8d Eq
	if(var_549_bool == 0) goto Label_3491; // 0xd8e JumpB
	var_550_string = ""; // 0xd8f PushV
	var_550_string = "Neutral"; // 0xd90 MovS
	func_2415(var_23_int, var_550_string); // 0xd91 NEW_2
	var_551_int = 537000; // 0xd93 PushI
	SetMessage(var_551_int); // 0xd94 TObjFunc
	ClearReplies(); // 0xd96 TObjFunc
	var_552_int = 537001; // 0xd98 PushI
	var_553_int = -1; // 0xd99 PushI
	var_554_int = 38839; // 0xd9a PushI
	AddReply(var_552_int, var_553_int, var_554_int); // 0xd9b TObjFunc
	var_555_int = 537002; // 0xd9d PushI
	var_556_int = -1; // 0xd9e PushI
	var_557_int = 38840; // 0xd9f PushI
	AddReply(var_555_int, var_556_int, var_557_int); // 0xda0 TObjFunc
	return 0; // 0xda2 Return
	
Label_3491:
	var_558_int = 38817; // 0xda3 PushI
	var_559_bool = var_22_int == var_558_int; // 0xda4 Eq
	if(var_559_bool == 0) goto Label_3514; // 0xda5 JumpB
	var_560_string = ""; // 0xda6 PushV
	var_560_string = "Neutral"; // 0xda7 MovS
	func_2415(var_23_int, var_560_string); // 0xda8 NEW_2
	var_561_int = 536979; // 0xdaa PushI
	SetMessage(var_561_int); // 0xdab TObjFunc
	ClearReplies(); // 0xdad TObjFunc
	var_562_int = 536980; // 0xdaf PushI
	var_563_int = 38819; // 0xdb0 PushI
	var_564_int = 38818; // 0xdb1 PushI
	AddReply(var_562_int, var_563_int, var_564_int); // 0xdb2 TObjFunc
	var_565_int = 536992; // 0xdb4 PushI
	var_566_int = -1; // 0xdb5 PushI
	var_567_int = 38830; // 0xdb6 PushI
	AddReply(var_565_int, var_566_int, var_567_int); // 0xdb7 TObjFunc
	return 0; // 0xdb9 Return
	
Label_3514:
	var_568_int = 38819; // 0xdba PushI
	var_569_bool = var_22_int == var_568_int; // 0xdbb Eq
	if(var_569_bool == 0) goto Label_3537; // 0xdbc JumpB
	var_570_string = ""; // 0xdbd PushV
	var_570_string = "Neutral"; // 0xdbe MovS
	func_2415(var_23_int, var_570_string); // 0xdbf NEW_2
	var_571_int = 536981; // 0xdc1 PushI
	SetMessage(var_571_int); // 0xdc2 TObjFunc
	ClearReplies(); // 0xdc4 TObjFunc
	var_572_int = 536982; // 0xdc6 PushI
	var_573_int = 38821; // 0xdc7 PushI
	var_574_int = 38820; // 0xdc8 PushI
	AddReply(var_572_int, var_573_int, var_574_int); // 0xdc9 TObjFunc
	var_575_int = 536991; // 0xdcb PushI
	var_576_int = -1; // 0xdcc PushI
	var_577_int = 38829; // 0xdcd PushI
	AddReply(var_575_int, var_576_int, var_577_int); // 0xdce TObjFunc
	return 0; // 0xdd0 Return
	
Label_3537:
	var_578_int = 38821; // 0xdd1 PushI
	var_579_bool = var_22_int == var_578_int; // 0xdd2 Eq
	if(var_579_bool == 0) goto Label_3555; // 0xdd3 JumpB
	var_580_string = ""; // 0xdd4 PushV
	var_580_string = "Neutral"; // 0xdd5 MovS
	func_2415(var_23_int, var_580_string); // 0xdd6 NEW_2
	var_581_int = 536983; // 0xdd8 PushI
	SetMessage(var_581_int); // 0xdd9 TObjFunc
	ClearReplies(); // 0xddb TObjFunc
	var_582_int = 536984; // 0xddd PushI
	var_583_int = 38823; // 0xdde PushI
	var_584_int = 38822; // 0xddf PushI
	AddReply(var_582_int, var_583_int, var_584_int); // 0xde0 TObjFunc
	return 0; // 0xde2 Return
	
Label_3555:
	var_585_int = 38823; // 0xde3 PushI
	var_586_bool = var_22_int == var_585_int; // 0xde4 Eq
	if(var_586_bool == 0) goto Label_3578; // 0xde5 JumpB
	var_587_string = ""; // 0xde6 PushV
	var_587_string = "Neutral"; // 0xde7 MovS
	func_2415(var_23_int, var_587_string); // 0xde8 NEW_2
	var_588_int = 536985; // 0xdea PushI
	SetMessage(var_588_int); // 0xdeb TObjFunc
	ClearReplies(); // 0xded TObjFunc
	var_589_int = 536986; // 0xdef PushI
	var_590_int = 38825; // 0xdf0 PushI
	var_591_int = 38824; // 0xdf1 PushI
	AddReply(var_589_int, var_590_int, var_591_int); // 0xdf2 TObjFunc
	var_592_int = 536990; // 0xdf4 PushI
	var_593_int = -1; // 0xdf5 PushI
	var_594_int = 38828; // 0xdf6 PushI
	AddReply(var_592_int, var_593_int, var_594_int); // 0xdf7 TObjFunc
	return 0; // 0xdf9 Return
	
Label_3578:
	var_595_int = 38825; // 0xdfa PushI
	var_596_bool = var_22_int == var_595_int; // 0xdfb Eq
	if(var_596_bool == 0) goto Label_3601; // 0xdfc JumpB
	var_597_string = ""; // 0xdfd PushV
	var_597_string = "Neutral"; // 0xdfe MovS
	func_2415(var_23_int, var_597_string); // 0xdff NEW_2
	var_598_int = 536987; // 0xe01 PushI
	SetMessage(var_598_int); // 0xe02 TObjFunc
	ClearReplies(); // 0xe04 TObjFunc
	var_599_int = 536988; // 0xe06 PushI
	var_600_int = -1; // 0xe07 PushI
	var_601_int = 38826; // 0xe08 PushI
	AddReply(var_599_int, var_600_int, var_601_int); // 0xe09 TObjFunc
	var_602_int = 536989; // 0xe0b PushI
	var_603_int = -1; // 0xe0c PushI
	var_604_int = 38827; // 0xe0d PushI
	AddReply(var_602_int, var_603_int, var_604_int); // 0xe0e TObjFunc
	return 0; // 0xe10 Return
	
Label_3601:
	var_605_int = 38800; // 0xe11 PushI
	var_606_bool = var_22_int == var_605_int; // 0xe12 Eq
	if(var_606_bool == 0) goto Label_3624; // 0xe13 JumpB
	var_607_string = ""; // 0xe14 PushV
	var_607_string = "Neutral"; // 0xe15 MovS
	func_2415(var_23_int, var_607_string); // 0xe16 NEW_2
	var_608_int = 536962; // 0xe18 PushI
	SetMessage(var_608_int); // 0xe19 TObjFunc
	ClearReplies(); // 0xe1b TObjFunc
	var_609_int = 536963; // 0xe1d PushI
	var_610_int = 38802; // 0xe1e PushI
	var_611_int = 38801; // 0xe1f PushI
	AddReply(var_609_int, var_610_int, var_611_int); // 0xe20 TObjFunc
	var_612_int = 536971; // 0xe22 PushI
	var_613_int = 38810; // 0xe23 PushI
	var_614_int = 38809; // 0xe24 PushI
	AddReply(var_612_int, var_613_int, var_614_int); // 0xe25 TObjFunc
	return 0; // 0xe27 Return
	
Label_3624:
	var_615_int = 38810; // 0xe28 PushI
	var_616_bool = var_22_int == var_615_int; // 0xe29 Eq
	if(var_616_bool == 0) goto Label_3652; // 0xe2a JumpB
	var_617_string = ""; // 0xe2b PushV
	var_617_string = "Neutral"; // 0xe2c MovS
	func_2415(var_23_int, var_617_string); // 0xe2d NEW_2
	var_618_int = 536972; // 0xe2f PushI
	SetMessage(var_618_int); // 0xe30 TObjFunc
	ClearReplies(); // 0xe32 TObjFunc
	var_619_int = 536973; // 0xe34 PushI
	var_620_int = 38812; // 0xe35 PushI
	var_621_int = 38811; // 0xe36 PushI
	AddReply(var_619_int, var_620_int, var_621_int); // 0xe37 TObjFunc
	var_622_int = 536976; // 0xe39 PushI
	var_623_int = -1; // 0xe3a PushI
	var_624_int = 38814; // 0xe3b PushI
	AddReply(var_622_int, var_623_int, var_624_int); // 0xe3c TObjFunc
	var_625_int = 536977; // 0xe3e PushI
	var_626_int = -1; // 0xe3f PushI
	var_627_int = 38815; // 0xe40 PushI
	AddReply(var_625_int, var_626_int, var_627_int); // 0xe41 TObjFunc
	return 0; // 0xe43 Return
	
Label_3652:
	var_628_int = 38812; // 0xe44 PushI
	var_629_bool = var_22_int == var_628_int; // 0xe45 Eq
	if(var_629_bool == 0) goto Label_3670; // 0xe46 JumpB
	var_630_string = ""; // 0xe47 PushV
	var_630_string = "Neutral"; // 0xe48 MovS
	func_2415(var_23_int, var_630_string); // 0xe49 NEW_2
	var_631_int = 536974; // 0xe4b PushI
	SetMessage(var_631_int); // 0xe4c TObjFunc
	ClearReplies(); // 0xe4e TObjFunc
	var_632_int = 536975; // 0xe50 PushI
	var_633_int = -1; // 0xe51 PushI
	var_634_int = 38813; // 0xe52 PushI
	AddReply(var_632_int, var_633_int, var_634_int); // 0xe53 TObjFunc
	return 0; // 0xe55 Return
	
Label_3670:
	var_635_int = 38802; // 0xe56 PushI
	var_636_bool = var_22_int == var_635_int; // 0xe57 Eq
	if(var_636_bool == 0) goto Label_3688; // 0xe58 JumpB
	var_637_string = ""; // 0xe59 PushV
	var_637_string = "Neutral"; // 0xe5a MovS
	func_2415(var_23_int, var_637_string); // 0xe5b NEW_2
	var_638_int = 536964; // 0xe5d PushI
	SetMessage(var_638_int); // 0xe5e TObjFunc
	ClearReplies(); // 0xe60 TObjFunc
	var_639_int = 536965; // 0xe62 PushI
	var_640_int = 38804; // 0xe63 PushI
	var_641_int = 38803; // 0xe64 PushI
	AddReply(var_639_int, var_640_int, var_641_int); // 0xe65 TObjFunc
	return 0; // 0xe67 Return
	
Label_3688:
	var_642_int = 38804; // 0xe68 PushI
	var_643_bool = var_22_int == var_642_int; // 0xe69 Eq
	if(var_643_bool == 0) goto Label_3706; // 0xe6a JumpB
	var_644_string = ""; // 0xe6b PushV
	var_644_string = "Neutral"; // 0xe6c MovS
	func_2415(var_23_int, var_644_string); // 0xe6d NEW_2
	var_645_int = 536966; // 0xe6f PushI
	SetMessage(var_645_int); // 0xe70 TObjFunc
	ClearReplies(); // 0xe72 TObjFunc
	var_646_int = 536967; // 0xe74 PushI
	var_647_int = 38806; // 0xe75 PushI
	var_648_int = 38805; // 0xe76 PushI
	AddReply(var_646_int, var_647_int, var_648_int); // 0xe77 TObjFunc
	return 0; // 0xe79 Return
	
Label_3706:
	var_649_int = 38806; // 0xe7a PushI
	var_650_bool = var_22_int == var_649_int; // 0xe7b Eq
	if(var_650_bool == 0) goto Label_3729; // 0xe7c JumpB
	var_651_string = ""; // 0xe7d PushV
	var_651_string = "Neutral"; // 0xe7e MovS
	func_2415(var_23_int, var_651_string); // 0xe7f NEW_2
	var_652_int = 536968; // 0xe81 PushI
	SetMessage(var_652_int); // 0xe82 TObjFunc
	ClearReplies(); // 0xe84 TObjFunc
	var_653_int = 536969; // 0xe86 PushI
	var_654_int = -1; // 0xe87 PushI
	var_655_int = 38807; // 0xe88 PushI
	AddReply(var_653_int, var_654_int, var_655_int); // 0xe89 TObjFunc
	var_656_int = 536970; // 0xe8b PushI
	var_657_int = -1; // 0xe8c PushI
	var_658_int = 38808; // 0xe8d PushI
	AddReply(var_656_int, var_657_int, var_658_int); // 0xe8e TObjFunc
	return 0; // 0xe90 Return
	
Label_3729:
	var_659_int = 38782; // 0xe91 PushI
	var_660_bool = var_22_int == var_659_int; // 0xe92 Eq
	if(var_660_bool == 0) goto Label_3752; // 0xe93 JumpB
	var_661_string = ""; // 0xe94 PushV
	var_661_string = "Neutral"; // 0xe95 MovS
	func_2415(var_23_int, var_661_string); // 0xe96 NEW_2
	var_662_int = 536944; // 0xe98 PushI
	SetMessage(var_662_int); // 0xe99 TObjFunc
	ClearReplies(); // 0xe9b TObjFunc
	var_663_int = 536945; // 0xe9d PushI
	var_664_int = 38784; // 0xe9e PushI
	var_665_int = 38783; // 0xe9f PushI
	AddReply(var_663_int, var_664_int, var_665_int); // 0xea0 TObjFunc
	var_666_int = 536960; // 0xea2 PushI
	var_667_int = -1; // 0xea3 PushI
	var_668_int = 38798; // 0xea4 PushI
	AddReply(var_666_int, var_667_int, var_668_int); // 0xea5 TObjFunc
	return 0; // 0xea7 Return
	
Label_3752:
	var_669_int = 38784; // 0xea8 PushI
	var_670_bool = var_22_int == var_669_int; // 0xea9 Eq
	if(var_670_bool == 0) goto Label_3770; // 0xeaa JumpB
	var_671_string = ""; // 0xeab PushV
	var_671_string = "Neutral"; // 0xeac MovS
	func_2415(var_23_int, var_671_string); // 0xead NEW_2
	var_672_int = 536946; // 0xeaf PushI
	SetMessage(var_672_int); // 0xeb0 TObjFunc
	ClearReplies(); // 0xeb2 TObjFunc
	var_673_int = 536947; // 0xeb4 PushI
	var_674_int = 38786; // 0xeb5 PushI
	var_675_int = 38785; // 0xeb6 PushI
	AddReply(var_673_int, var_674_int, var_675_int); // 0xeb7 TObjFunc
	return 0; // 0xeb9 Return
	
Label_3770:
	var_676_int = 38786; // 0xeba PushI
	var_677_bool = var_22_int == var_676_int; // 0xebb Eq
	if(var_677_bool == 0) goto Label_3798; // 0xebc JumpB
	var_678_string = ""; // 0xebd PushV
	var_678_string = "Neutral"; // 0xebe MovS
	func_2415(var_23_int, var_678_string); // 0xebf NEW_2
	var_679_int = 536948; // 0xec1 PushI
	SetMessage(var_679_int); // 0xec2 TObjFunc
	ClearReplies(); // 0xec4 TObjFunc
	var_680_int = 536949; // 0xec6 PushI
	var_681_int = 38788; // 0xec7 PushI
	var_682_int = 38787; // 0xec8 PushI
	AddReply(var_680_int, var_681_int, var_682_int); // 0xec9 TObjFunc
	var_683_bool = 0; var_684_object = Obj(); // 0xecb PushV
	var_684_object = var_1_bool; // 0xecc MovT
	func_5659(var_684_object); // 0xecd NEW_2
	if(var_683_bool == 0) goto Label_3797; // 0xecf JumpB
	var_685_int = 536957; // 0xed0 PushI
	var_686_int = 38796; // 0xed1 PushI
	var_687_int = 38795; // 0xed2 PushI
	AddReply(var_685_int, var_686_int, var_687_int); // 0xed3 TObjFunc
	
Label_3797:
	return 0; // 0xed5 Return
	
Label_3798:
	var_688_int = 38796; // 0xed6 PushI
	var_689_bool = var_22_int == var_688_int; // 0xed7 Eq
	if(var_689_bool == 0) goto Label_3816; // 0xed8 JumpB
	var_690_string = ""; // 0xed9 PushV
	var_690_string = "Neutral"; // 0xeda MovS
	func_2415(var_23_int, var_690_string); // 0xedb NEW_2
	var_691_int = 536958; // 0xedd PushI
	SetMessage(var_691_int); // 0xede TObjFunc
	ClearReplies(); // 0xee0 TObjFunc
	var_692_int = 536959; // 0xee2 PushI
	var_693_int = -1; // 0xee3 PushI
	var_694_int = 38797; // 0xee4 PushI
	AddReply(var_692_int, var_693_int, var_694_int); // 0xee5 TObjFunc
	return 0; // 0xee7 Return
	
Label_3816:
	var_695_int = 38788; // 0xee8 PushI
	var_696_bool = var_22_int == var_695_int; // 0xee9 Eq
	if(var_696_bool == 0) goto Label_3834; // 0xeea JumpB
	var_697_string = ""; // 0xeeb PushV
	var_697_string = "Neutral"; // 0xeec MovS
	func_2415(var_23_int, var_697_string); // 0xeed NEW_2
	var_698_int = 536950; // 0xeef PushI
	SetMessage(var_698_int); // 0xef0 TObjFunc
	ClearReplies(); // 0xef2 TObjFunc
	var_699_int = 536951; // 0xef4 PushI
	var_700_int = 38790; // 0xef5 PushI
	var_701_int = 38789; // 0xef6 PushI
	AddReply(var_699_int, var_700_int, var_701_int); // 0xef7 TObjFunc
	return 0; // 0xef9 Return
	
Label_3834:
	var_702_int = 38790; // 0xefa PushI
	var_703_bool = var_22_int == var_702_int; // 0xefb Eq
	if(var_703_bool == 0) goto Label_3857; // 0xefc JumpB
	var_704_string = ""; // 0xefd PushV
	var_704_string = "Neutral"; // 0xefe MovS
	func_2415(var_23_int, var_704_string); // 0xeff NEW_2
	var_705_int = 536952; // 0xf01 PushI
	SetMessage(var_705_int); // 0xf02 TObjFunc
	ClearReplies(); // 0xf04 TObjFunc
	var_706_int = 536953; // 0xf06 PushI
	var_707_int = 38792; // 0xf07 PushI
	var_708_int = 38791; // 0xf08 PushI
	AddReply(var_706_int, var_707_int, var_708_int); // 0xf09 TObjFunc
	var_709_int = 536956; // 0xf0b PushI
	var_710_int = -1; // 0xf0c PushI
	var_711_int = 38794; // 0xf0d PushI
	AddReply(var_709_int, var_710_int, var_711_int); // 0xf0e TObjFunc
	return 0; // 0xf10 Return
	
Label_3857:
	var_712_int = 38792; // 0xf11 PushI
	var_713_bool = var_22_int == var_712_int; // 0xf12 Eq
	if(var_713_bool == 0) goto Label_3875; // 0xf13 JumpB
	var_714_string = ""; // 0xf14 PushV
	var_714_string = "Neutral"; // 0xf15 MovS
	func_2415(var_23_int, var_714_string); // 0xf16 NEW_2
	var_715_int = 536954; // 0xf18 PushI
	SetMessage(var_715_int); // 0xf19 TObjFunc
	ClearReplies(); // 0xf1b TObjFunc
	var_716_int = 536955; // 0xf1d PushI
	var_717_int = -1; // 0xf1e PushI
	var_718_int = 38793; // 0xf1f PushI
	AddReply(var_716_int, var_717_int, var_718_int); // 0xf20 TObjFunc
	return 0; // 0xf22 Return
	
Label_3875:
	var_719_int = 38770; // 0xf23 PushI
	var_720_bool = var_22_int == var_719_int; // 0xf24 Eq
	if(var_720_bool == 0) goto Label_3898; // 0xf25 JumpB
	var_721_string = ""; // 0xf26 PushV
	var_721_string = "Neutral"; // 0xf27 MovS
	func_2415(var_23_int, var_721_string); // 0xf28 NEW_2
	var_722_int = 536932; // 0xf2a PushI
	SetMessage(var_722_int); // 0xf2b TObjFunc
	ClearReplies(); // 0xf2d TObjFunc
	var_723_int = 536933; // 0xf2f PushI
	var_724_int = 38772; // 0xf30 PushI
	var_725_int = 38771; // 0xf31 PushI
	AddReply(var_723_int, var_724_int, var_725_int); // 0xf32 TObjFunc
	var_726_int = 536942; // 0xf34 PushI
	var_727_int = -1; // 0xf35 PushI
	var_728_int = 38780; // 0xf36 PushI
	AddReply(var_726_int, var_727_int, var_728_int); // 0xf37 TObjFunc
	return 0; // 0xf39 Return
	
Label_3898:
	var_729_int = 38772; // 0xf3a PushI
	var_730_bool = var_22_int == var_729_int; // 0xf3b Eq
	if(var_730_bool == 0) goto Label_3916; // 0xf3c JumpB
	var_731_string = ""; // 0xf3d PushV
	var_731_string = "Neutral"; // 0xf3e MovS
	func_2415(var_23_int, var_731_string); // 0xf3f NEW_2
	var_732_int = 536934; // 0xf41 PushI
	SetMessage(var_732_int); // 0xf42 TObjFunc
	ClearReplies(); // 0xf44 TObjFunc
	var_733_int = 536935; // 0xf46 PushI
	var_734_int = 38774; // 0xf47 PushI
	var_735_int = 38773; // 0xf48 PushI
	AddReply(var_733_int, var_734_int, var_735_int); // 0xf49 TObjFunc
	return 0; // 0xf4b Return
	
Label_3916:
	var_736_int = 38774; // 0xf4c PushI
	var_737_bool = var_22_int == var_736_int; // 0xf4d Eq
	if(var_737_bool == 0) goto Label_3939; // 0xf4e JumpB
	var_738_string = ""; // 0xf4f PushV
	var_738_string = "Neutral"; // 0xf50 MovS
	func_2415(var_23_int, var_738_string); // 0xf51 NEW_2
	var_739_int = 536936; // 0xf53 PushI
	SetMessage(var_739_int); // 0xf54 TObjFunc
	ClearReplies(); // 0xf56 TObjFunc
	var_740_int = 536937; // 0xf58 PushI
	var_741_int = 38776; // 0xf59 PushI
	var_742_int = 38775; // 0xf5a PushI
	AddReply(var_740_int, var_741_int, var_742_int); // 0xf5b TObjFunc
	var_743_int = 536941; // 0xf5d PushI
	var_744_int = -1; // 0xf5e PushI
	var_745_int = 38779; // 0xf5f PushI
	AddReply(var_743_int, var_744_int, var_745_int); // 0xf60 TObjFunc
	return 0; // 0xf62 Return
	
Label_3939:
	var_746_int = 38776; // 0xf63 PushI
	var_747_bool = var_22_int == var_746_int; // 0xf64 Eq
	if(var_747_bool == 0) goto Label_3962; // 0xf65 JumpB
	var_748_string = ""; // 0xf66 PushV
	var_748_string = "Neutral"; // 0xf67 MovS
	func_2415(var_23_int, var_748_string); // 0xf68 NEW_2
	var_749_int = 536938; // 0xf6a PushI
	SetMessage(var_749_int); // 0xf6b TObjFunc
	ClearReplies(); // 0xf6d TObjFunc
	var_750_int = 536939; // 0xf6f PushI
	var_751_int = -1; // 0xf70 PushI
	var_752_int = 38777; // 0xf71 PushI
	AddReply(var_750_int, var_751_int, var_752_int); // 0xf72 TObjFunc
	var_753_int = 536940; // 0xf74 PushI
	var_754_int = -1; // 0xf75 PushI
	var_755_int = 38778; // 0xf76 PushI
	AddReply(var_753_int, var_754_int, var_755_int); // 0xf77 TObjFunc
	return 0; // 0xf79 Return
	
Label_3962:
	var_756_int = 38755; // 0xf7a PushI
	var_757_bool = var_22_int == var_756_int; // 0xf7b Eq
	if(var_757_bool == 0) goto Label_3990; // 0xf7c JumpB
	var_758_string = ""; // 0xf7d PushV
	var_758_string = "Neutral"; // 0xf7e MovS
	func_2415(var_23_int, var_758_string); // 0xf7f NEW_2
	var_759_int = 536917; // 0xf81 PushI
	SetMessage(var_759_int); // 0xf82 TObjFunc
	ClearReplies(); // 0xf84 TObjFunc
	var_760_int = 536918; // 0xf86 PushI
	var_761_int = 38757; // 0xf87 PushI
	var_762_int = 38756; // 0xf88 PushI
	AddReply(var_760_int, var_761_int, var_762_int); // 0xf89 TObjFunc
	var_763_bool = 0; var_764_object = Obj(); // 0xf8b PushV
	var_764_object = var_1_bool; // 0xf8c MovT
	func_5659(var_764_object); // 0xf8d NEW_2
	if(var_763_bool == 0) goto Label_3989; // 0xf8f JumpB
	var_765_int = 536930; // 0xf90 PushI
	var_766_int = -1; // 0xf91 PushI
	var_767_int = 38768; // 0xf92 PushI
	AddReply(var_765_int, var_766_int, var_767_int); // 0xf93 TObjFunc
	
Label_3989:
	return 0; // 0xf95 Return
	
Label_3990:
	var_768_int = 38757; // 0xf96 PushI
	var_769_bool = var_22_int == var_768_int; // 0xf97 Eq
	if(var_769_bool == 0) goto Label_4013; // 0xf98 JumpB
	var_770_string = ""; // 0xf99 PushV
	var_770_string = "Neutral"; // 0xf9a MovS
	func_2415(var_23_int, var_770_string); // 0xf9b NEW_2
	var_771_int = 536919; // 0xf9d PushI
	SetMessage(var_771_int); // 0xf9e TObjFunc
	ClearReplies(); // 0xfa0 TObjFunc
	var_772_int = 536920; // 0xfa2 PushI
	var_773_int = 38759; // 0xfa3 PushI
	var_774_int = 38758; // 0xfa4 PushI
	AddReply(var_772_int, var_773_int, var_774_int); // 0xfa5 TObjFunc
	var_775_int = 536929; // 0xfa7 PushI
	var_776_int = -1; // 0xfa8 PushI
	var_777_int = 38767; // 0xfa9 PushI
	AddReply(var_775_int, var_776_int, var_777_int); // 0xfaa TObjFunc
	return 0; // 0xfac Return
	
Label_4013:
	var_778_int = 38759; // 0xfad PushI
	var_779_bool = var_22_int == var_778_int; // 0xfae Eq
	if(var_779_bool == 0) goto Label_4041; // 0xfaf JumpB
	var_780_string = ""; // 0xfb0 PushV
	var_780_string = "Neutral"; // 0xfb1 MovS
	func_2415(var_23_int, var_780_string); // 0xfb2 NEW_2
	var_781_int = 536921; // 0xfb4 PushI
	SetMessage(var_781_int); // 0xfb5 TObjFunc
	ClearReplies(); // 0xfb7 TObjFunc
	var_782_bool = 0; var_783_object = Obj(); // 0xfb9 PushV
	var_783_object = var_1_bool; // 0xfba MovT
	func_5659(var_783_object); // 0xfbb NEW_2
	if(var_782_bool == 0) goto Label_4035; // 0xfbd JumpB
	var_784_int = 536922; // 0xfbe PushI
	var_785_int = 38761; // 0xfbf PushI
	var_786_int = 38760; // 0xfc0 PushI
	AddReply(var_784_int, var_785_int, var_786_int); // 0xfc1 TObjFunc
	
Label_4035:
	var_787_int = 536926; // 0xfc3 PushI
	var_788_int = 38765; // 0xfc4 PushI
	var_789_int = 38764; // 0xfc5 PushI
	AddReply(var_787_int, var_788_int, var_789_int); // 0xfc6 TObjFunc
	return 0; // 0xfc8 Return
	
Label_4041:
	var_790_int = 38765; // 0xfc9 PushI
	var_791_bool = var_22_int == var_790_int; // 0xfca Eq
	if(var_791_bool == 0) goto Label_4059; // 0xfcb JumpB
	var_792_string = ""; // 0xfcc PushV
	var_792_string = "Neutral"; // 0xfcd MovS
	func_2415(var_23_int, var_792_string); // 0xfce NEW_2
	var_793_int = 536927; // 0xfd0 PushI
	SetMessage(var_793_int); // 0xfd1 TObjFunc
	ClearReplies(); // 0xfd3 TObjFunc
	var_794_int = 536928; // 0xfd5 PushI
	var_795_int = -1; // 0xfd6 PushI
	var_796_int = 38766; // 0xfd7 PushI
	AddReply(var_794_int, var_795_int, var_796_int); // 0xfd8 TObjFunc
	return 0; // 0xfda Return
	
Label_4059:
	var_797_int = 38761; // 0xfdb PushI
	var_798_bool = var_22_int == var_797_int; // 0xfdc Eq
	if(var_798_bool == 0) goto Label_4082; // 0xfdd JumpB
	var_799_string = ""; // 0xfde PushV
	var_799_string = "Neutral"; // 0xfdf MovS
	func_2415(var_23_int, var_799_string); // 0xfe0 NEW_2
	var_800_int = 536923; // 0xfe2 PushI
	SetMessage(var_800_int); // 0xfe3 TObjFunc
	ClearReplies(); // 0xfe5 TObjFunc
	var_801_int = 536924; // 0xfe7 PushI
	var_802_int = -1; // 0xfe8 PushI
	var_803_int = 38762; // 0xfe9 PushI
	AddReply(var_801_int, var_802_int, var_803_int); // 0xfea TObjFunc
	var_804_int = 536925; // 0xfec PushI
	var_805_int = -1; // 0xfed PushI
	var_806_int = 38763; // 0xfee PushI
	AddReply(var_804_int, var_805_int, var_806_int); // 0xfef TObjFunc
	return 0; // 0xff1 Return
	
Label_4082:
	var_807_int = 38743; // 0xff2 PushI
	var_808_bool = var_22_int == var_807_int; // 0xff3 Eq
	if(var_808_bool == 0) goto Label_4100; // 0xff4 JumpB
	var_809_string = ""; // 0xff5 PushV
	var_809_string = "Neutral"; // 0xff6 MovS
	func_2415(var_23_int, var_809_string); // 0xff7 NEW_2
	var_810_int = 536905; // 0xff9 PushI
	SetMessage(var_810_int); // 0xffa TObjFunc
	ClearReplies(); // 0xffc TObjFunc
	var_811_int = 536906; // 0xffe PushI
	var_812_int = 38745; // 0xfff PushI
	var_813_int = 38744; // 0x1000 PushI
	AddReply(var_811_int, var_812_int, var_813_int); // 0x1001 TObjFunc
	return 0; // 0x1003 Return
	
Label_4100:
	var_814_int = 38745; // 0x1004 PushI
	var_815_bool = var_22_int == var_814_int; // 0x1005 Eq
	if(var_815_bool == 0) goto Label_4128; // 0x1006 JumpB
	var_816_string = ""; // 0x1007 PushV
	var_816_string = "Neutral"; // 0x1008 MovS
	func_2415(var_23_int, var_816_string); // 0x1009 NEW_2
	var_817_int = 536907; // 0x100b PushI
	SetMessage(var_817_int); // 0x100c TObjFunc
	ClearReplies(); // 0x100e TObjFunc
	var_818_int = 536908; // 0x1010 PushI
	var_819_int = 38747; // 0x1011 PushI
	var_820_int = 38746; // 0x1012 PushI
	AddReply(var_818_int, var_819_int, var_820_int); // 0x1013 TObjFunc
	var_821_bool = 0; var_822_object = Obj(); // 0x1015 PushV
	var_822_object = var_1_bool; // 0x1016 MovT
	func_5659(var_822_object); // 0x1017 NEW_2
	if(var_821_bool == 0) goto Label_4127; // 0x1019 JumpB
	var_823_int = 536912; // 0x101a PushI
	var_824_int = 38751; // 0x101b PushI
	var_825_int = 38750; // 0x101c PushI
	AddReply(var_823_int, var_824_int, var_825_int); // 0x101d TObjFunc
	
Label_4127:
	return 0; // 0x101f Return
	
Label_4128:
	var_826_int = 38751; // 0x1020 PushI
	var_827_bool = var_22_int == var_826_int; // 0x1021 Eq
	if(var_827_bool == 0) goto Label_4151; // 0x1022 JumpB
	var_828_string = ""; // 0x1023 PushV
	var_828_string = "Neutral"; // 0x1024 MovS
	func_2415(var_23_int, var_828_string); // 0x1025 NEW_2
	var_829_int = 536913; // 0x1027 PushI
	SetMessage(var_829_int); // 0x1028 TObjFunc
	ClearReplies(); // 0x102a TObjFunc
	var_830_int = 536914; // 0x102c PushI
	var_831_int = -1; // 0x102d PushI
	var_832_int = 38752; // 0x102e PushI
	AddReply(var_830_int, var_831_int, var_832_int); // 0x102f TObjFunc
	var_833_int = 536915; // 0x1031 PushI
	var_834_int = -1; // 0x1032 PushI
	var_835_int = 38753; // 0x1033 PushI
	AddReply(var_833_int, var_834_int, var_835_int); // 0x1034 TObjFunc
	return 0; // 0x1036 Return
	
Label_4151:
	var_836_int = 38747; // 0x1037 PushI
	var_837_bool = var_22_int == var_836_int; // 0x1038 Eq
	if(var_837_bool == 0) goto Label_4174; // 0x1039 JumpB
	var_838_string = ""; // 0x103a PushV
	var_838_string = "Neutral"; // 0x103b MovS
	func_2415(var_23_int, var_838_string); // 0x103c NEW_2
	var_839_int = 536909; // 0x103e PushI
	SetMessage(var_839_int); // 0x103f TObjFunc
	ClearReplies(); // 0x1041 TObjFunc
	var_840_int = 536910; // 0x1043 PushI
	var_841_int = -1; // 0x1044 PushI
	var_842_int = 38748; // 0x1045 PushI
	AddReply(var_840_int, var_841_int, var_842_int); // 0x1046 TObjFunc
	var_843_int = 536911; // 0x1048 PushI
	var_844_int = -1; // 0x1049 PushI
	var_845_int = 38749; // 0x104a PushI
	AddReply(var_843_int, var_844_int, var_845_int); // 0x104b TObjFunc
	return 0; // 0x104d Return
	
Label_4174:
	var_846_int = 38724; // 0x104e PushI
	var_847_bool = var_22_int == var_846_int; // 0x104f Eq
	if(var_847_bool == 0) goto Label_4197; // 0x1050 JumpB
	var_848_string = ""; // 0x1051 PushV
	var_848_string = "Neutral"; // 0x1052 MovS
	func_2415(var_23_int, var_848_string); // 0x1053 NEW_2
	var_849_int = 536886; // 0x1055 PushI
	SetMessage(var_849_int); // 0x1056 TObjFunc
	ClearReplies(); // 0x1058 TObjFunc
	var_850_int = 536887; // 0x105a PushI
	var_851_int = 38726; // 0x105b PushI
	var_852_int = 38725; // 0x105c PushI
	AddReply(var_850_int, var_851_int, var_852_int); // 0x105d TObjFunc
	var_853_int = 536901; // 0x105f PushI
	var_854_int = 38740; // 0x1060 PushI
	var_855_int = 38739; // 0x1061 PushI
	AddReply(var_853_int, var_854_int, var_855_int); // 0x1062 TObjFunc
	return 0; // 0x1064 Return
	
Label_4197:
	var_856_int = 38740; // 0x1065 PushI
	var_857_bool = var_22_int == var_856_int; // 0x1066 Eq
	if(var_857_bool == 0) goto Label_4215; // 0x1067 JumpB
	var_858_string = ""; // 0x1068 PushV
	var_858_string = "Neutral"; // 0x1069 MovS
	func_2415(var_23_int, var_858_string); // 0x106a NEW_2
	var_859_int = 536902; // 0x106c PushI
	SetMessage(var_859_int); // 0x106d TObjFunc
	ClearReplies(); // 0x106f TObjFunc
	var_860_int = 536903; // 0x1071 PushI
	var_861_int = -1; // 0x1072 PushI
	var_862_int = 38741; // 0x1073 PushI
	AddReply(var_860_int, var_861_int, var_862_int); // 0x1074 TObjFunc
	return 0; // 0x1076 Return
	
Label_4215:
	var_863_int = 38726; // 0x1077 PushI
	var_864_bool = var_22_int == var_863_int; // 0x1078 Eq
	if(var_864_bool == 0) goto Label_4233; // 0x1079 JumpB
	var_865_string = ""; // 0x107a PushV
	var_865_string = "Neutral"; // 0x107b MovS
	func_2415(var_23_int, var_865_string); // 0x107c NEW_2
	var_866_int = 536888; // 0x107e PushI
	SetMessage(var_866_int); // 0x107f TObjFunc
	ClearReplies(); // 0x1081 TObjFunc
	var_867_int = 536889; // 0x1083 PushI
	var_868_int = 38728; // 0x1084 PushI
	var_869_int = 38727; // 0x1085 PushI
	AddReply(var_867_int, var_868_int, var_869_int); // 0x1086 TObjFunc
	return 0; // 0x1088 Return
	
Label_4233:
	var_870_int = 38728; // 0x1089 PushI
	var_871_bool = var_22_int == var_870_int; // 0x108a Eq
	if(var_871_bool == 0) goto Label_4256; // 0x108b JumpB
	var_872_string = ""; // 0x108c PushV
	var_872_string = "Neutral"; // 0x108d MovS
	func_2415(var_23_int, var_872_string); // 0x108e NEW_2
	var_873_int = 536890; // 0x1090 PushI
	SetMessage(var_873_int); // 0x1091 TObjFunc
	ClearReplies(); // 0x1093 TObjFunc
	var_874_int = 536891; // 0x1095 PushI
	var_875_int = 38730; // 0x1096 PushI
	var_876_int = 38729; // 0x1097 PushI
	AddReply(var_874_int, var_875_int, var_876_int); // 0x1098 TObjFunc
	var_877_int = 536900; // 0x109a PushI
	var_878_int = -1; // 0x109b PushI
	var_879_int = 38738; // 0x109c PushI
	AddReply(var_877_int, var_878_int, var_879_int); // 0x109d TObjFunc
	return 0; // 0x109f Return
	
Label_4256:
	var_880_int = 38730; // 0x10a0 PushI
	var_881_bool = var_22_int == var_880_int; // 0x10a1 Eq
	if(var_881_bool == 0) goto Label_4284; // 0x10a2 JumpB
	var_882_string = ""; // 0x10a3 PushV
	var_882_string = "Neutral"; // 0x10a4 MovS
	func_2415(var_23_int, var_882_string); // 0x10a5 NEW_2
	var_883_int = 536892; // 0x10a7 PushI
	SetMessage(var_883_int); // 0x10a8 TObjFunc
	ClearReplies(); // 0x10aa TObjFunc
	var_884_bool = 0; var_885_object = Obj(); // 0x10ac PushV
	var_885_object = var_1_bool; // 0x10ad MovT
	func_5659(var_885_object); // 0x10ae NEW_2
	if(var_884_bool == 0) goto Label_4278; // 0x10b0 JumpB
	var_886_int = 536893; // 0x10b1 PushI
	var_887_int = 38732; // 0x10b2 PushI
	var_888_int = 38731; // 0x10b3 PushI
	AddReply(var_886_int, var_887_int, var_888_int); // 0x10b4 TObjFunc
	
Label_4278:
	var_889_int = 536899; // 0x10b6 PushI
	var_890_int = -1; // 0x10b7 PushI
	var_891_int = 38737; // 0x10b8 PushI
	AddReply(var_889_int, var_890_int, var_891_int); // 0x10b9 TObjFunc
	return 0; // 0x10bb Return
	
Label_4284:
	var_892_int = 38732; // 0x10bc PushI
	var_893_bool = var_22_int == var_892_int; // 0x10bd Eq
	if(var_893_bool == 0) goto Label_4307; // 0x10be JumpB
	var_894_string = ""; // 0x10bf PushV
	var_894_string = "Neutral"; // 0x10c0 MovS
	func_2415(var_23_int, var_894_string); // 0x10c1 NEW_2
	var_895_int = 536894; // 0x10c3 PushI
	SetMessage(var_895_int); // 0x10c4 TObjFunc
	ClearReplies(); // 0x10c6 TObjFunc
	var_896_int = 536895; // 0x10c8 PushI
	var_897_int = 38734; // 0x10c9 PushI
	var_898_int = 38733; // 0x10ca PushI
	AddReply(var_896_int, var_897_int, var_898_int); // 0x10cb TObjFunc
	var_899_int = 536898; // 0x10cd PushI
	var_900_int = -1; // 0x10ce PushI
	var_901_int = 38736; // 0x10cf PushI
	AddReply(var_899_int, var_900_int, var_901_int); // 0x10d0 TObjFunc
	return 0; // 0x10d2 Return
	
Label_4307:
	var_902_int = 38734; // 0x10d3 PushI
	var_903_bool = var_22_int == var_902_int; // 0x10d4 Eq
	if(var_903_bool == 0) goto Label_4325; // 0x10d5 JumpB
	var_904_string = ""; // 0x10d6 PushV
	var_904_string = "Neutral"; // 0x10d7 MovS
	func_2415(var_23_int, var_904_string); // 0x10d8 NEW_2
	var_905_int = 536896; // 0x10da PushI
	SetMessage(var_905_int); // 0x10db TObjFunc
	ClearReplies(); // 0x10dd TObjFunc
	var_906_int = 536897; // 0x10df PushI
	var_907_int = -1; // 0x10e0 PushI
	var_908_int = 38735; // 0x10e1 PushI
	AddReply(var_906_int, var_907_int, var_908_int); // 0x10e2 TObjFunc
	return 0; // 0x10e4 Return
	
Label_4325:
	var_909_int = 38709; // 0x10e5 PushI
	var_910_bool = var_22_int == var_909_int; // 0x10e6 Eq
	if(var_910_bool == 0) goto Label_4348; // 0x10e7 JumpB
	var_911_string = ""; // 0x10e8 PushV
	var_911_string = "Neutral"; // 0x10e9 MovS
	func_2415(var_23_int, var_911_string); // 0x10ea NEW_2
	var_912_int = 536871; // 0x10ec PushI
	SetMessage(var_912_int); // 0x10ed TObjFunc
	ClearReplies(); // 0x10ef TObjFunc
	var_913_int = 536872; // 0x10f1 PushI
	var_914_int = 38711; // 0x10f2 PushI
	var_915_int = 38710; // 0x10f3 PushI
	AddReply(var_913_int, var_914_int, var_915_int); // 0x10f4 TObjFunc
	var_916_int = 536882; // 0x10f6 PushI
	var_917_int = 38721; // 0x10f7 PushI
	var_918_int = 38720; // 0x10f8 PushI
	AddReply(var_916_int, var_917_int, var_918_int); // 0x10f9 TObjFunc
	return 0; // 0x10fb Return
	
Label_4348:
	var_919_int = 38721; // 0x10fc PushI
	var_920_bool = var_22_int == var_919_int; // 0x10fd Eq
	if(var_920_bool == 0) goto Label_4366; // 0x10fe JumpB
	var_921_string = ""; // 0x10ff PushV
	var_921_string = "Neutral"; // 0x1100 MovS
	func_2415(var_23_int, var_921_string); // 0x1101 NEW_2
	var_922_int = 536883; // 0x1103 PushI
	SetMessage(var_922_int); // 0x1104 TObjFunc
	ClearReplies(); // 0x1106 TObjFunc
	var_923_int = 536884; // 0x1108 PushI
	var_924_int = -1; // 0x1109 PushI
	var_925_int = 38722; // 0x110a PushI
	AddReply(var_923_int, var_924_int, var_925_int); // 0x110b TObjFunc
	return 0; // 0x110d Return
	
Label_4366:
	var_926_int = 38711; // 0x110e PushI
	var_927_bool = var_22_int == var_926_int; // 0x110f Eq
	if(var_927_bool == 0) goto Label_4389; // 0x1110 JumpB
	var_928_string = ""; // 0x1111 PushV
	var_928_string = "Neutral"; // 0x1112 MovS
	func_2415(var_23_int, var_928_string); // 0x1113 NEW_2
	var_929_int = 536873; // 0x1115 PushI
	SetMessage(var_929_int); // 0x1116 TObjFunc
	ClearReplies(); // 0x1118 TObjFunc
	var_930_int = 536874; // 0x111a PushI
	var_931_int = 38713; // 0x111b PushI
	var_932_int = 38712; // 0x111c PushI
	AddReply(var_930_int, var_931_int, var_932_int); // 0x111d TObjFunc
	var_933_int = 536881; // 0x111f PushI
	var_934_int = -1; // 0x1120 PushI
	var_935_int = 38719; // 0x1121 PushI
	AddReply(var_933_int, var_934_int, var_935_int); // 0x1122 TObjFunc
	return 0; // 0x1124 Return
	
Label_4389:
	var_936_int = 38713; // 0x1125 PushI
	var_937_bool = var_22_int == var_936_int; // 0x1126 Eq
	if(var_937_bool == 0) goto Label_4417; // 0x1127 JumpB
	var_938_string = ""; // 0x1128 PushV
	var_938_string = "Neutral"; // 0x1129 MovS
	func_2415(var_23_int, var_938_string); // 0x112a NEW_2
	var_939_int = 536875; // 0x112c PushI
	SetMessage(var_939_int); // 0x112d TObjFunc
	ClearReplies(); // 0x112f TObjFunc
	var_940_int = 536876; // 0x1131 PushI
	var_941_int = 38715; // 0x1132 PushI
	var_942_int = 38714; // 0x1133 PushI
	AddReply(var_940_int, var_941_int, var_942_int); // 0x1134 TObjFunc
	var_943_bool = 0; var_944_object = Obj(); // 0x1136 PushV
	var_944_object = var_1_bool; // 0x1137 MovT
	func_5659(var_944_object); // 0x1138 NEW_2
	if(var_943_bool == 0) goto Label_4416; // 0x113a JumpB
	var_945_int = 536880; // 0x113b PushI
	var_946_int = -1; // 0x113c PushI
	var_947_int = 38718; // 0x113d PushI
	AddReply(var_945_int, var_946_int, var_947_int); // 0x113e TObjFunc
	
Label_4416:
	return 0; // 0x1140 Return
	
Label_4417:
	var_948_int = 38715; // 0x1141 PushI
	var_949_bool = var_22_int == var_948_int; // 0x1142 Eq
	if(var_949_bool == 0) goto Label_4440; // 0x1143 JumpB
	var_950_string = ""; // 0x1144 PushV
	var_950_string = "Neutral"; // 0x1145 MovS
	func_2415(var_23_int, var_950_string); // 0x1146 NEW_2
	var_951_int = 536877; // 0x1148 PushI
	SetMessage(var_951_int); // 0x1149 TObjFunc
	ClearReplies(); // 0x114b TObjFunc
	var_952_int = 536878; // 0x114d PushI
	var_953_int = -1; // 0x114e PushI
	var_954_int = 38716; // 0x114f PushI
	AddReply(var_952_int, var_953_int, var_954_int); // 0x1150 TObjFunc
	var_955_int = 536879; // 0x1152 PushI
	var_956_int = -1; // 0x1153 PushI
	var_957_int = 38717; // 0x1154 PushI
	AddReply(var_955_int, var_956_int, var_957_int); // 0x1155 TObjFunc
	return 0; // 0x1157 Return
	
Label_4440:
	var_958_int = 38693; // 0x1158 PushI
	var_959_bool = var_22_int == var_958_int; // 0x1159 Eq
	if(var_959_bool == 0) goto Label_4463; // 0x115a JumpB
	var_960_string = ""; // 0x115b PushV
	var_960_string = "Neutral"; // 0x115c MovS
	func_2415(var_23_int, var_960_string); // 0x115d NEW_2
	var_961_int = 536857; // 0x115f PushI
	SetMessage(var_961_int); // 0x1160 TObjFunc
	ClearReplies(); // 0x1162 TObjFunc
	var_962_int = 536858; // 0x1164 PushI
	var_963_int = 38695; // 0x1165 PushI
	var_964_int = 38694; // 0x1166 PushI
	AddReply(var_962_int, var_963_int, var_964_int); // 0x1167 TObjFunc
	var_965_int = 536867; // 0x1169 PushI
	var_966_int = 38705; // 0x116a PushI
	var_967_int = 38704; // 0x116b PushI
	AddReply(var_965_int, var_966_int, var_967_int); // 0x116c TObjFunc
	return 0; // 0x116e Return
	
Label_4463:
	var_968_int = 38705; // 0x116f PushI
	var_969_bool = var_22_int == var_968_int; // 0x1170 Eq
	if(var_969_bool == 0) goto Label_4481; // 0x1171 JumpB
	var_970_string = ""; // 0x1172 PushV
	var_970_string = "Neutral"; // 0x1173 MovS
	func_2415(var_23_int, var_970_string); // 0x1174 NEW_2
	var_971_int = 536868; // 0x1176 PushI
	SetMessage(var_971_int); // 0x1177 TObjFunc
	ClearReplies(); // 0x1179 TObjFunc
	var_972_int = 536869; // 0x117b PushI
	var_973_int = 38697; // 0x117c PushI
	var_974_int = 38706; // 0x117d PushI
	AddReply(var_972_int, var_973_int, var_974_int); // 0x117e TObjFunc
	return 0; // 0x1180 Return
	
Label_4481:
	var_975_int = 38695; // 0x1181 PushI
	var_976_bool = var_22_int == var_975_int; // 0x1182 Eq
	if(var_976_bool == 0) goto Label_4504; // 0x1183 JumpB
	var_977_string = ""; // 0x1184 PushV
	var_977_string = "Neutral"; // 0x1185 MovS
	func_2415(var_23_int, var_977_string); // 0x1186 NEW_2
	var_978_int = 536859; // 0x1188 PushI
	SetMessage(var_978_int); // 0x1189 TObjFunc
	ClearReplies(); // 0x118b TObjFunc
	var_979_int = 536860; // 0x118d PushI
	var_980_int = 38697; // 0x118e PushI
	var_981_int = 38696; // 0x118f PushI
	AddReply(var_979_int, var_980_int, var_981_int); // 0x1190 TObjFunc
	var_982_int = 536864; // 0x1192 PushI
	var_983_int = 38701; // 0x1193 PushI
	var_984_int = 38700; // 0x1194 PushI
	AddReply(var_982_int, var_983_int, var_984_int); // 0x1195 TObjFunc
	return 0; // 0x1197 Return
	
Label_4504:
	var_985_int = 38701; // 0x1198 PushI
	var_986_bool = var_22_int == var_985_int; // 0x1199 Eq
	if(var_986_bool == 0) goto Label_4522; // 0x119a JumpB
	var_987_string = ""; // 0x119b PushV
	var_987_string = "Neutral"; // 0x119c MovS
	func_2415(var_23_int, var_987_string); // 0x119d NEW_2
	var_988_int = 536865; // 0x119f PushI
	SetMessage(var_988_int); // 0x11a0 TObjFunc
	ClearReplies(); // 0x11a2 TObjFunc
	var_989_int = 536866; // 0x11a4 PushI
	var_990_int = 38697; // 0x11a5 PushI
	var_991_int = 38702; // 0x11a6 PushI
	AddReply(var_989_int, var_990_int, var_991_int); // 0x11a7 TObjFunc
	return 0; // 0x11a9 Return
	
Label_4522:
	var_992_int = 38697; // 0x11aa PushI
	var_993_bool = var_22_int == var_992_int; // 0x11ab Eq
	if(var_993_bool == 0) goto Label_4545; // 0x11ac JumpB
	var_994_string = ""; // 0x11ad PushV
	var_994_string = "Neutral"; // 0x11ae MovS
	func_2415(var_23_int, var_994_string); // 0x11af NEW_2
	var_995_int = 536861; // 0x11b1 PushI
	SetMessage(var_995_int); // 0x11b2 TObjFunc
	ClearReplies(); // 0x11b4 TObjFunc
	var_996_int = 536862; // 0x11b6 PushI
	var_997_int = -1; // 0x11b7 PushI
	var_998_int = 38698; // 0x11b8 PushI
	AddReply(var_996_int, var_997_int, var_998_int); // 0x11b9 TObjFunc
	var_999_int = 536863; // 0x11bb PushI
	var_1000_int = -1; // 0x11bc PushI
	var_1001_int = 38699; // 0x11bd PushI
	AddReply(var_999_int, var_1000_int, var_1001_int); // 0x11be TObjFunc
	return 0; // 0x11c0 Return
	
Label_4545:
	var_1002_int = 45595; // 0x11c1 PushI
	var_1003_bool = var_22_int == var_1002_int; // 0x11c2 Eq
	if(var_1003_bool == 0) goto Label_4573; // 0x11c3 JumpB
	var_1004_string = ""; // 0x11c4 PushV
	var_1004_string = "Neutral"; // 0x11c5 MovS
	func_2415(var_23_int, var_1004_string); // 0x11c6 NEW_2
	var_1005_int = 543140; // 0x11c8 PushI
	SetMessage(var_1005_int); // 0x11c9 TObjFunc
	ClearReplies(); // 0x11cb TObjFunc
	var_1006_int = 543141; // 0x11cd PushI
	var_1007_int = -1; // 0x11ce PushI
	var_1008_int = 45596; // 0x11cf PushI
	AddReply(var_1006_int, var_1007_int, var_1008_int); // 0x11d0 TObjFunc
	var_1009_int = 543142; // 0x11d2 PushI
	var_1010_int = -1; // 0x11d3 PushI
	var_1011_int = 45597; // 0x11d4 PushI
	AddReply(var_1009_int, var_1010_int, var_1011_int); // 0x11d5 TObjFunc
	var_1012_int = 543143; // 0x11d7 PushI
	var_1013_int = 45599; // 0x11d8 PushI
	var_1014_int = 45598; // 0x11d9 PushI
	AddReply(var_1012_int, var_1013_int, var_1014_int); // 0x11da TObjFunc
	return 0; // 0x11dc Return
	
Label_4573:
	var_1015_int = 45599; // 0x11dd PushI
	var_1016_bool = var_22_int == var_1015_int; // 0x11de Eq
	if(var_1016_bool == 0) goto Label_4596; // 0x11df JumpB
	var_1017_string = ""; // 0x11e0 PushV
	var_1017_string = "Neutral"; // 0x11e1 MovS
	func_2415(var_23_int, var_1017_string); // 0x11e2 NEW_2
	var_1018_int = 543144; // 0x11e4 PushI
	SetMessage(var_1018_int); // 0x11e5 TObjFunc
	ClearReplies(); // 0x11e7 TObjFunc
	var_1019_int = 543145; // 0x11e9 PushI
	var_1020_int = -1; // 0x11ea PushI
	var_1021_int = 45600; // 0x11eb PushI
	AddReply(var_1019_int, var_1020_int, var_1021_int); // 0x11ec TObjFunc
	var_1022_int = 543146; // 0x11ee PushI
	var_1023_int = -1; // 0x11ef PushI
	var_1024_int = 45601; // 0x11f0 PushI
	AddReply(var_1022_int, var_1023_int, var_1024_int); // 0x11f1 TObjFunc
	return 0; // 0x11f3 Return
	
Label_4596:
	var_1025_int = 45583; // 0x11f4 PushI
	var_1026_bool = var_22_int == var_1025_int; // 0x11f5 Eq
	if(var_1026_bool == 0) goto Label_4624; // 0x11f6 JumpB
	var_1027_string = ""; // 0x11f7 PushV
	var_1027_string = "Neutral"; // 0x11f8 MovS
	func_2415(var_23_int, var_1027_string); // 0x11f9 NEW_2
	var_1028_int = 543128; // 0x11fb PushI
	SetMessage(var_1028_int); // 0x11fc TObjFunc
	ClearReplies(); // 0x11fe TObjFunc
	var_1029_int = 543129; // 0x1200 PushI
	var_1030_int = 45587; // 0x1201 PushI
	var_1031_int = 45584; // 0x1202 PushI
	AddReply(var_1029_int, var_1030_int, var_1031_int); // 0x1203 TObjFunc
	var_1032_int = 543130; // 0x1205 PushI
	var_1033_int = -1; // 0x1206 PushI
	var_1034_int = 45585; // 0x1207 PushI
	AddReply(var_1032_int, var_1033_int, var_1034_int); // 0x1208 TObjFunc
	var_1035_int = 543131; // 0x120a PushI
	var_1036_int = -1; // 0x120b PushI
	var_1037_int = 45586; // 0x120c PushI
	AddReply(var_1035_int, var_1036_int, var_1037_int); // 0x120d TObjFunc
	return 0; // 0x120f Return
	
Label_4624:
	var_1038_int = 45587; // 0x1210 PushI
	var_1039_bool = var_22_int == var_1038_int; // 0x1211 Eq
	if(var_1039_bool == 0) goto Label_4652; // 0x1212 JumpB
	var_1040_string = ""; // 0x1213 PushV
	var_1040_string = "Neutral"; // 0x1214 MovS
	func_2415(var_23_int, var_1040_string); // 0x1215 NEW_2
	var_1041_int = 543132; // 0x1217 PushI
	SetMessage(var_1041_int); // 0x1218 TObjFunc
	ClearReplies(); // 0x121a TObjFunc
	var_1042_int = 543133; // 0x121c PushI
	var_1043_int = -1; // 0x121d PushI
	var_1044_int = 45588; // 0x121e PushI
	AddReply(var_1042_int, var_1043_int, var_1044_int); // 0x121f TObjFunc
	var_1045_int = 543134; // 0x1221 PushI
	var_1046_int = 45591; // 0x1222 PushI
	var_1047_int = 45589; // 0x1223 PushI
	AddReply(var_1045_int, var_1046_int, var_1047_int); // 0x1224 TObjFunc
	var_1048_int = 543135; // 0x1226 PushI
	var_1049_int = -1; // 0x1227 PushI
	var_1050_int = 45590; // 0x1228 PushI
	AddReply(var_1048_int, var_1049_int, var_1050_int); // 0x1229 TObjFunc
	return 0; // 0x122b Return
	
Label_4652:
	var_1051_int = 45591; // 0x122c PushI
	var_1052_bool = var_22_int == var_1051_int; // 0x122d Eq
	if(var_1052_bool == 0) goto Label_4675; // 0x122e JumpB
	var_1053_string = ""; // 0x122f PushV
	var_1053_string = "Neutral"; // 0x1230 MovS
	func_2415(var_23_int, var_1053_string); // 0x1231 NEW_2
	var_1054_int = 543136; // 0x1233 PushI
	SetMessage(var_1054_int); // 0x1234 TObjFunc
	ClearReplies(); // 0x1236 TObjFunc
	var_1055_int = 543137; // 0x1238 PushI
	var_1056_int = -1; // 0x1239 PushI
	var_1057_int = 45592; // 0x123a PushI
	AddReply(var_1055_int, var_1056_int, var_1057_int); // 0x123b TObjFunc
	var_1058_int = 543138; // 0x123d PushI
	var_1059_int = -1; // 0x123e PushI
	var_1060_int = 45593; // 0x123f PushI
	AddReply(var_1058_int, var_1059_int, var_1060_int); // 0x1240 TObjFunc
	return 0; // 0x1242 Return
	
Label_4675:
	var_1061_int = 45573; // 0x1243 PushI
	var_1062_bool = var_22_int == var_1061_int; // 0x1244 Eq
	if(var_1062_bool == 0) goto Label_4703; // 0x1245 JumpB
	var_1063_string = ""; // 0x1246 PushV
	var_1063_string = "Neutral"; // 0x1247 MovS
	func_2415(var_23_int, var_1063_string); // 0x1248 NEW_2
	var_1064_int = 543118; // 0x124a PushI
	SetMessage(var_1064_int); // 0x124b TObjFunc
	ClearReplies(); // 0x124d TObjFunc
	var_1065_int = 543119; // 0x124f PushI
	var_1066_int = -1; // 0x1250 PushI
	var_1067_int = 45574; // 0x1251 PushI
	AddReply(var_1065_int, var_1066_int, var_1067_int); // 0x1252 TObjFunc
	var_1068_int = 543120; // 0x1254 PushI
	var_1069_int = 45577; // 0x1255 PushI
	var_1070_int = 45575; // 0x1256 PushI
	AddReply(var_1068_int, var_1069_int, var_1070_int); // 0x1257 TObjFunc
	var_1071_int = 543121; // 0x1259 PushI
	var_1072_int = -1; // 0x125a PushI
	var_1073_int = 45576; // 0x125b PushI
	AddReply(var_1071_int, var_1072_int, var_1073_int); // 0x125c TObjFunc
	return 0; // 0x125e Return
	
Label_4703:
	var_1074_int = 45577; // 0x125f PushI
	var_1075_bool = var_22_int == var_1074_int; // 0x1260 Eq
	if(var_1075_bool == 0) goto Label_4726; // 0x1261 JumpB
	var_1076_string = ""; // 0x1262 PushV
	var_1076_string = "Neutral"; // 0x1263 MovS
	func_2415(var_23_int, var_1076_string); // 0x1264 NEW_2
	var_1077_int = 543122; // 0x1266 PushI
	SetMessage(var_1077_int); // 0x1267 TObjFunc
	ClearReplies(); // 0x1269 TObjFunc
	var_1078_int = 543123; // 0x126b PushI
	var_1079_int = -1; // 0x126c PushI
	var_1080_int = 45578; // 0x126d PushI
	AddReply(var_1078_int, var_1079_int, var_1080_int); // 0x126e TObjFunc
	var_1081_int = 543124; // 0x1270 PushI
	var_1082_int = -1; // 0x1271 PushI
	var_1083_int = 45579; // 0x1272 PushI
	AddReply(var_1081_int, var_1082_int, var_1083_int); // 0x1273 TObjFunc
	return 0; // 0x1275 Return
	
Label_4726:
	var_1084_int = 45557; // 0x1276 PushI
	var_1085_bool = var_22_int == var_1084_int; // 0x1277 Eq
	if(var_1085_bool == 0) goto Label_4749; // 0x1278 JumpB
	var_1086_string = ""; // 0x1279 PushV
	var_1086_string = "Neutral"; // 0x127a MovS
	func_2415(var_23_int, var_1086_string); // 0x127b NEW_2
	var_1087_int = 543102; // 0x127d PushI
	SetMessage(var_1087_int); // 0x127e TObjFunc
	ClearReplies(); // 0x1280 TObjFunc
	var_1088_int = 543103; // 0x1282 PushI
	var_1089_int = -1; // 0x1283 PushI
	var_1090_int = 45558; // 0x1284 PushI
	AddReply(var_1088_int, var_1089_int, var_1090_int); // 0x1285 TObjFunc
	var_1091_int = 543104; // 0x1287 PushI
	var_1092_int = 45560; // 0x1288 PushI
	var_1093_int = 45559; // 0x1289 PushI
	AddReply(var_1091_int, var_1092_int, var_1093_int); // 0x128a TObjFunc
	return 0; // 0x128c Return
	
Label_4749:
	var_1094_int = 45560; // 0x128d PushI
	var_1095_bool = var_22_int == var_1094_int; // 0x128e Eq
	if(var_1095_bool == 0) goto Label_4772; // 0x128f JumpB
	var_1096_string = ""; // 0x1290 PushV
	var_1096_string = "Neutral"; // 0x1291 MovS
	func_2415(var_23_int, var_1096_string); // 0x1292 NEW_2
	var_1097_int = 543105; // 0x1294 PushI
	SetMessage(var_1097_int); // 0x1295 TObjFunc
	ClearReplies(); // 0x1297 TObjFunc
	var_1098_int = 543106; // 0x1299 PushI
	var_1099_int = -1; // 0x129a PushI
	var_1100_int = 45561; // 0x129b PushI
	AddReply(var_1098_int, var_1099_int, var_1100_int); // 0x129c TObjFunc
	var_1101_int = 543107; // 0x129e PushI
	var_1102_int = -1; // 0x129f PushI
	var_1103_int = 45562; // 0x12a0 PushI
	AddReply(var_1101_int, var_1102_int, var_1103_int); // 0x12a1 TObjFunc
	return 0; // 0x12a3 Return
	
Label_4772:
	var_1104_int = 45564; // 0x12a4 PushI
	var_1105_bool = var_22_int == var_1104_int; // 0x12a5 Eq
	if(var_1105_bool == 0) goto Label_4795; // 0x12a6 JumpB
	var_1106_string = ""; // 0x12a7 PushV
	var_1106_string = "Neutral"; // 0x12a8 MovS
	func_2415(var_23_int, var_1106_string); // 0x12a9 NEW_2
	var_1107_int = 543109; // 0x12ab PushI
	SetMessage(var_1107_int); // 0x12ac TObjFunc
	ClearReplies(); // 0x12ae TObjFunc
	var_1108_int = 543110; // 0x12b0 PushI
	var_1109_int = -1; // 0x12b1 PushI
	var_1110_int = 45565; // 0x12b2 PushI
	AddReply(var_1108_int, var_1109_int, var_1110_int); // 0x12b3 TObjFunc
	var_1111_int = 543111; // 0x12b5 PushI
	var_1112_int = 45568; // 0x12b6 PushI
	var_1113_int = 45566; // 0x12b7 PushI
	AddReply(var_1111_int, var_1112_int, var_1113_int); // 0x12b8 TObjFunc
	return 0; // 0x12ba Return
	
Label_4795:
	var_1114_int = 45568; // 0x12bb PushI
	var_1115_bool = var_22_int == var_1114_int; // 0x12bc Eq
	if(var_1115_bool == 0) goto Label_4818; // 0x12bd JumpB
	var_1116_string = ""; // 0x12be PushV
	var_1116_string = "Neutral"; // 0x12bf MovS
	func_2415(var_23_int, var_1116_string); // 0x12c0 NEW_2
	var_1117_int = 543113; // 0x12c2 PushI
	SetMessage(var_1117_int); // 0x12c3 TObjFunc
	ClearReplies(); // 0x12c5 TObjFunc
	var_1118_int = 543114; // 0x12c7 PushI
	var_1119_int = -1; // 0x12c8 PushI
	var_1120_int = 45569; // 0x12c9 PushI
	AddReply(var_1118_int, var_1119_int, var_1120_int); // 0x12ca TObjFunc
	var_1121_int = 543116; // 0x12cc PushI
	var_1122_int = -1; // 0x12cd PushI
	var_1123_int = 45571; // 0x12ce PushI
	AddReply(var_1121_int, var_1122_int, var_1123_int); // 0x12cf TObjFunc
	return 0; // 0x12d1 Return
	
Label_4818:
	var_1124_int = 45550; // 0x12d2 PushI
	var_1125_bool = var_22_int == var_1124_int; // 0x12d3 Eq
	if(var_1125_bool == 0) goto Label_4841; // 0x12d4 JumpB
	var_1126_string = ""; // 0x12d5 PushV
	var_1126_string = "Neutral"; // 0x12d6 MovS
	func_2415(var_23_int, var_1126_string); // 0x12d7 NEW_2
	var_1127_int = 543095; // 0x12d9 PushI
	SetMessage(var_1127_int); // 0x12da TObjFunc
	ClearReplies(); // 0x12dc TObjFunc
	var_1128_int = 543096; // 0x12de PushI
	var_1129_int = -1; // 0x12df PushI
	var_1130_int = 45551; // 0x12e0 PushI
	AddReply(var_1128_int, var_1129_int, var_1130_int); // 0x12e1 TObjFunc
	var_1131_int = 543098; // 0x12e3 PushI
	var_1132_int = -1; // 0x12e4 PushI
	var_1133_int = 45553; // 0x12e5 PushI
	AddReply(var_1131_int, var_1132_int, var_1133_int); // 0x12e6 TObjFunc
	return 0; // 0x12e8 Return
	
Label_4841:
	var_1134_int = 45531; // 0x12e9 PushI
	var_1135_bool = var_22_int == var_1134_int; // 0x12ea Eq
	if(var_1135_bool == 0) goto Label_4869; // 0x12eb JumpB
	var_1136_string = ""; // 0x12ec PushV
	var_1136_string = "Neutral"; // 0x12ed MovS
	func_2415(var_23_int, var_1136_string); // 0x12ee NEW_2
	var_1137_int = 543076; // 0x12f0 PushI
	SetMessage(var_1137_int); // 0x12f1 TObjFunc
	ClearReplies(); // 0x12f3 TObjFunc
	var_1138_int = 543077; // 0x12f5 PushI
	var_1139_int = -1; // 0x12f6 PushI
	var_1140_int = 45532; // 0x12f7 PushI
	AddReply(var_1138_int, var_1139_int, var_1140_int); // 0x12f8 TObjFunc
	var_1141_int = 543078; // 0x12fa PushI
	var_1142_int = -1; // 0x12fb PushI
	var_1143_int = 45533; // 0x12fc PushI
	AddReply(var_1141_int, var_1142_int, var_1143_int); // 0x12fd TObjFunc
	var_1144_int = 543079; // 0x12ff PushI
	var_1145_int = 45535; // 0x1300 PushI
	var_1146_int = 45534; // 0x1301 PushI
	AddReply(var_1144_int, var_1145_int, var_1146_int); // 0x1302 TObjFunc
	return 0; // 0x1304 Return
	
Label_4869:
	var_1147_int = 45535; // 0x1305 PushI
	var_1148_bool = var_22_int == var_1147_int; // 0x1306 Eq
	if(var_1148_bool == 0) goto Label_4892; // 0x1307 JumpB
	var_1149_string = ""; // 0x1308 PushV
	var_1149_string = "Neutral"; // 0x1309 MovS
	func_2415(var_23_int, var_1149_string); // 0x130a NEW_2
	var_1150_int = 543080; // 0x130c PushI
	SetMessage(var_1150_int); // 0x130d TObjFunc
	ClearReplies(); // 0x130f TObjFunc
	var_1151_int = 543081; // 0x1311 PushI
	var_1152_int = -1; // 0x1312 PushI
	var_1153_int = 45536; // 0x1313 PushI
	AddReply(var_1151_int, var_1152_int, var_1153_int); // 0x1314 TObjFunc
	var_1154_int = 543082; // 0x1316 PushI
	var_1155_int = 45538; // 0x1317 PushI
	var_1156_int = 45537; // 0x1318 PushI
	AddReply(var_1154_int, var_1155_int, var_1156_int); // 0x1319 TObjFunc
	return 0; // 0x131b Return
	
Label_4892:
	var_1157_int = 45538; // 0x131c PushI
	var_1158_bool = var_22_int == var_1157_int; // 0x131d Eq
	if(var_1158_bool == 0) goto Label_4915; // 0x131e JumpB
	var_1159_string = ""; // 0x131f PushV
	var_1159_string = "Neutral"; // 0x1320 MovS
	func_2415(var_23_int, var_1159_string); // 0x1321 NEW_2
	var_1160_int = 543083; // 0x1323 PushI
	SetMessage(var_1160_int); // 0x1324 TObjFunc
	ClearReplies(); // 0x1326 TObjFunc
	var_1161_int = 543084; // 0x1328 PushI
	var_1162_int = 45541; // 0x1329 PushI
	var_1163_int = 45539; // 0x132a PushI
	AddReply(var_1161_int, var_1162_int, var_1163_int); // 0x132b TObjFunc
	var_1164_int = 543085; // 0x132d PushI
	var_1165_int = -1; // 0x132e PushI
	var_1166_int = 45540; // 0x132f PushI
	AddReply(var_1164_int, var_1165_int, var_1166_int); // 0x1330 TObjFunc
	return 0; // 0x1332 Return
	
Label_4915:
	var_1167_int = 45541; // 0x1333 PushI
	var_1168_bool = var_22_int == var_1167_int; // 0x1334 Eq
	if(var_1168_bool == 0) goto Label_4938; // 0x1335 JumpB
	var_1169_string = ""; // 0x1336 PushV
	var_1169_string = "Neutral"; // 0x1337 MovS
	func_2415(var_23_int, var_1169_string); // 0x1338 NEW_2
	var_1170_int = 543086; // 0x133a PushI
	SetMessage(var_1170_int); // 0x133b TObjFunc
	ClearReplies(); // 0x133d TObjFunc
	var_1171_int = 543087; // 0x133f PushI
	var_1172_int = -1; // 0x1340 PushI
	var_1173_int = 45542; // 0x1341 PushI
	AddReply(var_1171_int, var_1172_int, var_1173_int); // 0x1342 TObjFunc
	var_1174_int = 543088; // 0x1344 PushI
	var_1175_int = -1; // 0x1345 PushI
	var_1176_int = 45543; // 0x1346 PushI
	AddReply(var_1174_int, var_1175_int, var_1176_int); // 0x1347 TObjFunc
	return 0; // 0x1349 Return
	
Label_4938:
	var_3_bool = 1; // 0x134a TMovB
	var_1177_bool = 0; // 0x134b PushV
	func_6031(var_1177_bool); // 0x134c NEW_2
	if(var_1177_bool == 0) goto Label_4946; // 0x134e JumpB
	lshStopAnimation(); // 0x134f Func
	goto Label_4948; // 0x1351 Jump
	
Label_4948:
	return 0; // 0x1354 Return
	
Label_4946:
	StopAnimation(); // 0x1352 Func
	
Label_4950:
	return 0; // 0x1356 Return
}


event_16(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_string)
{
	return 0; // 0x14f8 Return
}


event_41(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object)
{
	return 0; // 0x14fa Return
}


event_22(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_int, var_24_float, var_25_float)
{
	return 0; // 0x14fc Return
}


event_43(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_int, var_24_float, var_25_float, var_26_cvector, var_27_cvector)
{
	return 0; // 0x14fe Return
}


main(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool)
{
	var_22_bool = 1; // 0x28 PushB
	SensePlayerOnly(var_22_bool); // 0x29 Func
	func_6033(); // 0x2c NEW_2
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
	var_511_bool = 0; // 0x4 PushV
	func_6031(var_511_bool); // 0x5 NEW_2
	if(var_511_bool == 0) goto Label_15; // 0x7 JumpB
	var_512_string = ""; // 0x8 PushV
	var_512_string = "Neutral"; // 0x9 MovS
	func_5213(var_512_string); // 0xa NEW_2
	lshWaitForAnimEnd(); // 0xc Func
	goto Label_21; // 0xe Jump
	
Label_21:
	var_513_bool = var_0_bool; // 0x15 PushT
	if(var_513_bool == 0) goto Label_24; // 0x16 JumpB
	return 0; // 0x17 Return
	
Label_24:
	goto Label_4; // 0x18 Jump
	
Label_15:
	WaitForAnimEnd(); // 0xf Func
	var_514_string = "all"; // 0x11 PushS
	var_515_string = "idle"; // 0x12 PushS
	PlayAnimation(var_514_string, var_515_string); // 0x13 Func
}


func_5636(var_54_bool, var_55_object)
{
	var_56_bool = 0; var_57_object = Obj(); // 0x1605 PushV
	var_57_object = var_55_object; // 0x1606 Mov
	func_5613(var_56_bool, var_57_object); // 0x1607 NEW_2
	var_54_bool = var_56_bool; // 0x1608 Mov
	return 0; // 0x160a Return
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
	func_5294(var_52_cvector, var_53_cvector); // 0x612 NEW_2
	var_59_float = 0.75; // 0x614 PushF
	var_60_float = var_46_cvector * var_59_float; // 0x615 Mult
	var_51_cvector = var_52_cvector + var_60_float; // 0x616 Add2
	func_5294(var_50_cvector, var_51_cvector); // 0x617 NEW_2
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


func_5643(var_207_object)
{
	var_208_object = Obj(); // 0x160c PushV
	var_208_object = var_207_object; // 0x160d Mov
	func_5628(var_208_object); // 0x160e NEW_2
	return 0; // 0x1610 Return
}


func_5137()
{
	var_470_bool = 0; var_471_bool = 0; // 0x1411 PushV
	CameraSwitchToNormal(); // 0x1412 Func
	var_472_bool = 0; // 0x1414 PushV
	func_6031(var_472_bool); // 0x1415 NEW_2
	if(var_472_bool == 0) goto Label_5145; // 0x1417 JumpB
	goto Label_5153; // 0x1418 Jump
	
Label_5153:
	return 2; // 0x1421 Return
	
Label_5145:
	var_473_string = "head"; // 0x1419 PushS
	HasAnimationTrack(var_471_bool, var_473_string); // 0x141a Func
	var_474_bool = var_471_bool; // 0x141c Push
	if(var_474_bool == 0) goto Label_5153; // 0x141d JumpB
	var_475_string = "head"; // 0x141e PushS
	UnlookAsync(var_475_string); // 0x141f Func
}


func_5649(var_30_bool)
{
	var_30_bool = 0; // 0x1612 MovB
	return 0; // 0x1613 Return
}


func_5652()
{
	return 0; // 0x1615 Return
}


func_5654()
{
	var_30_int = 1000; // 0x1617 PushI
	SetReturnValue(var_30_int); // 0x1618 ObjFunc
	return 0; // 0x161a Return
}


func_5659(var_316_bool)
{
	var_318_int = 0; var_319_string = ""; // 0x161c PushV
	var_319_string = "branch"; // 0x161d MovS
	func_5353(var_318_int, var_319_string); // 0x161e NEW_2
	var_320_int = 0; // 0x1620 PushI
	var_321_bool = var_318_int == var_320_int; // 0x1621 Eq
	if(var_321_bool == 0) goto Label_5669; // 0x1622 JumpB
	var_316_bool = 1; // 0x1623 MovB
	return 0; // 0x1624 Return
	
Label_5669:
	var_316_bool = 0; // 0x1625 MovB
	return 0; // 0x1626 Return
}


func_5154(var_477_bool, var_478_object)
{
	var_479_bool = 0; var_480_object = Obj(); var_481_float = 0; // 0x1423 PushV
	var_480_object = var_478_object; // 0x1424 Mov
	var_481_float = 70; // 0x1425 MovI
	func_5162(var_480_object, var_481_float); // 0x1426 NEW_2
	var_477_bool = var_479_bool; // 0x1427 Mov
	return 0; // 0x1429 Return
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
	func_4951(var_191_cvector); // 0x648 NEW_2
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
	func_4951(var_201_cvector); // 0x663 NEW_2
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


func_5671(var_57_bool)
{
	var_59_int = 0; var_60_string = ""; // 0x1628 PushV
	var_60_string = "branch"; // 0x1629 MovS
	func_5353(var_59_int, var_60_string); // 0x162a NEW_2
	var_63_int = 2; // 0x162c PushI
	var_64_bool = var_59_int == var_63_int; // 0x162d Eq
	if(var_64_bool == 0) goto Label_5681; // 0x162e JumpB
	var_57_bool = 1; // 0x162f MovB
	return 0; // 0x1630 Return
	
Label_5681:
	var_57_bool = 0; // 0x1631 MovB
	return 0; // 0x1632 Return
}


func_5162(var_479_bool, var_481_float)
{
	var_482_float = 0; var_483_cvector = CVector(0,0,0); var_484_cvector = CVector(0,0,0); var_485_cvector = CVector(0,0,0); var_486_cvector = CVector(0,0,0); var_487_cvector = CVector(0,0,0); var_488_cvector = CVector(0,0,0); var_489_bool = 0; var_490_float = 0; var_491_cvector = CVector(0,0,0); var_492_cvector = CVector(0,0,0); var_493_cvector = CVector(0,0,0); var_494_cvector = CVector(0,0,0); var_495_cvector = CVector(0,0,0); var_496_cvector = CVector(0,0,0); var_497_bool = 0; // 0x142a PushV
	GetPosition(var_491_cvector); // 0x142b ObjFunc
	GetEyesHeight(var_490_float); // 0x142d ObjFunc
	var_498_float = GetByIndex(var_491_cvector, 1); // 0x142f PushE
	var_498_float = var_498_float + var_490_float; // 0x1430 Add2
	SetByIndex(var_491_cvector, 1) = var_498_float; // 0x1431 PopE
	GetPosition(var_492_cvector); // 0x1432 Func
	GetEyesHeight(var_490_float); // 0x1434 Func
	var_499_float = GetByIndex(var_492_cvector, 1); // 0x1436 PushE
	var_499_float = var_499_float + var_490_float; // 0x1437 Add2
	SetByIndex(var_492_cvector, 1) = var_499_float; // 0x1438 PopE
	var_493_cvector = var_491_cvector - var_492_cvector; // 0x1439 Sub2
	var_500_float = GetByIndex(var_493_cvector, 1); // 0x143a PushE
	var_500_float = 0; // 0x143b MovI
	SetByIndex(var_493_cvector, 1) = var_500_float; // 0x143c PopE
	var_501_int = var_493_cvector | var_493_cvector; // 0x143d Or
	var_502_float = sqrt(var_501_int); // 0x143e Sqrt
	var_493_cvector = var_493_cvector / var_493_cvector; // 0x143f Div2
	var_494_cvector = -var_493_cvector; // 0x1440 Neg2
	var_503_float = var_493_cvector * var_481_float; // 0x1441 Mult
	var_504_cvector = CVector(0.0, 10.0, 0.0); // 0x1442 PushVec
	var_495_cvector = var_503_float - var_504_cvector; // 0x1443 Sub2
	var_496_cvector = var_492_cvector + var_495_cvector; // 0x1444 Add2
	IsOverrideActive(var_497_bool); // 0x1445 Func
	var_505_bool = var_497_bool; // 0x1447 Push
	if(var_505_bool == 0) goto Label_5195; // 0x1448 JumpB
	var_479_bool = 0; // 0x1449 MovB
	return 16; // 0x144a Return
	
Label_5195:
	StopWorld(); // 0x144b Func
	CameraTransit(var_496_cvector, var_494_cvector); // 0x144d Func
	var_506_float = GetByIndex(var_495_cvector, 0); // 0x144f PushE
	var_507_float = GetByIndex(var_495_cvector, 2); // 0x1450 PushE
	Rotate(var_506_float, var_507_float); // 0x1451 Func
	CameraWaitForPlayFinish(); // 0x1453 Func
	ResumeWorld(); // 0x1455 Func
	var_479_bool = 1; // 0x1457 MovB
	return 16; // 0x1458 Return
}


func_5683(var_83_bool, var_84_object)
{
	var_85_bool = 0; var_86_object = Obj(); // 0x1634 PushV
	var_86_object = var_84_object; // 0x1635 Mov
	func_5803(var_86_object); // 0x1636 NEW_2
	if(var_85_bool == 0) goto Label_5691; // 0x1638 JumpB
	var_83_bool = 1; // 0x1639 MovB
	return 0; // 0x163a Return
	
Label_5691:
	var_83_bool = 0; // 0x163b MovB
	return 0; // 0x163c Return
}


func_55()
{
	var_105_bool = 0; // 0x37 PushV
	func_5064(var_105_bool); // 0x38 NEW_2
	var_108_bool = var_105_bool == 0; // 0x3a Not
	if(var_108_bool == 0) goto Label_63; // 0x3b JumpB
	func_5599(); // 0x3d NEW_2
	
Label_63:
	return 0; // 0x3f Return
}


func_573()
{
	var_136_int = 0; var_137_int = 0; var_138_int = 0; var_139_int = 0; var_140_bool = 0; var_141_float = 0; var_142_bool = 0; var_143_int = 0; var_144_int = 0; var_145_int = 0; var_146_int = 0; var_147_bool = 0; var_148_float = 0; var_149_bool = 0; // 0x23d PushV
	WaitForAnimEnd(); // 0x23e Func
	var_150_bool = 0; // 0x240 PushV
	func_5064(var_150_bool); // 0x241 NEW_2
	var_151_bool = var_150_bool == 0; // 0x243 Not
	if(var_151_bool == 0) goto Label_582; // 0x244 JumpB
	return 14; // 0x245 Return
	
Label_582:
	var_152_int = 0; // 0x246 PushV
	func_5510(var_152_int); // 0x247 NEW_2
	var_143_int = var_152_int; // 0x248 Mov
	var_144_int = 0; // 0x24a MovI
	
Label_587:
	var_165_bool = 0; // 0x24b PushV
	var_165_bool = 0; // 0x24c MovB
	var_166_int = 5; // 0x24d PushI
	var_167_bool = var_144_int < var_166_int; // 0x24e LT
	if(var_167_bool == 0) goto Label_597; // 0x24f JumpB
	var_168_bool = 0; // 0x250 PushV
	func_5064(var_168_bool); // 0x251 NEW_2
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
	func_5503(var_174_string, var_175_int); // 0x263 NEW_2
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


func_5693(var_97_bool, var_98_object)
{
	var_99_bool = 0; var_100_object = Obj(); // 0x163e PushV
	var_100_object = var_98_object; // 0x163f Mov
	func_5810(var_100_object); // 0x1640 NEW_2
	if(var_99_bool == 0) goto Label_5701; // 0x1642 JumpB
	var_97_bool = 1; // 0x1643 MovB
	return 0; // 0x1644 Return
	
Label_5701:
	var_97_bool = 0; // 0x1645 MovB
	return 0; // 0x1646 Return
}


func_5703(var_107_bool, var_108_object)
{
	var_109_bool = 0; var_110_object = Obj(); // 0x1648 PushV
	var_110_object = var_108_object; // 0x1649 Mov
	func_5817(var_110_object); // 0x164a NEW_2
	if(var_109_bool == 0) goto Label_5711; // 0x164c JumpB
	var_107_bool = 1; // 0x164d MovB
	return 0; // 0x164e Return
	
Label_5711:
	var_107_bool = 0; // 0x164f MovB
	return 0; // 0x1650 Return
}


func_5713(var_122_bool, var_123_object)
{
	var_124_bool = 0; var_125_object = Obj(); // 0x1652 PushV
	var_125_object = var_123_object; // 0x1653 Mov
	func_5824(var_125_object); // 0x1654 NEW_2
	if(var_124_bool == 0) goto Label_5721; // 0x1656 JumpB
	var_122_bool = 1; // 0x1657 MovB
	return 0; // 0x1658 Return
	
Label_5721:
	var_122_bool = 0; // 0x1659 MovB
	return 0; // 0x165a Return
}


func_5209()
{
	CameraSwitchToNormal(); // 0x145a Func
	return 0; // 0x145c Return
}


func_5723(var_131_bool, var_132_object)
{
	var_133_bool = 0; var_134_object = Obj(); // 0x165c PushV
	var_134_object = var_132_object; // 0x165d Mov
	func_5831(var_134_object); // 0x165e NEW_2
	if(var_133_bool == 0) goto Label_5731; // 0x1660 JumpB
	var_131_bool = 1; // 0x1661 MovB
	return 0; // 0x1662 Return
	
Label_5731:
	var_131_bool = 0; // 0x1663 MovB
	return 0; // 0x1664 Return
}


func_5213(var_353_string)
{
	var_354_bool = 0; var_355_float = 0; var_356_float = 0; var_357_bool = 0; var_358_float = 0; var_359_float = 0; // 0x145d PushV
	lshHasAnimation(var_357_bool, var_353_string); // 0x145e Func
	var_360_bool = var_357_bool; // 0x1460 Push
	if(var_360_bool == 0) goto Label_5224; // 0x1461 JumpB
	lshGetAnimTimes(var_353_string, var_358_float, var_359_float); // 0x1462 Func
	var_361_bool = 0; // 0x1464 PushB
	lshPlayAnimation(var_358_float, var_359_float, var_361_bool); // 0x1465 Func
	goto Label_5228; // 0x1467 Jump
	
Label_5228:
	return 6; // 0x146c Return
	
Label_5224:
	var_362_string = "Can't find lsh animation : "; // 0x1468 PushS
	var_363_int = var_362_string + var_353_string; // 0x1469 Add
	Trace(var_363_int); // 0x146a Func
}


func_1124(var_2_bool)
{
	Stop(); // 0x464 Func
	var_23_int = 120; // 0x466 PushI
	KillTimer(var_23_int); // 0x467 Func
	var_2_bool = 1; // 0x469 TMovB
	return 0; // 0x46a Return
}


func_5733(var_140_bool, var_141_object)
{
	var_142_bool = 0; var_143_object = Obj(); // 0x1666 PushV
	var_143_object = var_141_object; // 0x1667 Mov
	func_5838(var_143_object); // 0x1668 NEW_2
	if(var_142_bool == 0) goto Label_5741; // 0x166a JumpB
	var_140_bool = 1; // 0x166b MovB
	return 0; // 0x166c Return
	
Label_5741:
	var_140_bool = 0; // 0x166d MovB
	return 0; // 0x166e Return
}


func_5229(var_69_string, var_70_bool)
{
	var_73_bool = 0; var_74_float = 0; var_75_float = 0; var_76_bool = 0; var_77_float = 0; var_78_float = 0; // 0x146d PushV
	lshHasAnimation(var_76_bool, var_69_string); // 0x146e Func
	var_79_bool = var_76_bool; // 0x1470 Push
	if(var_79_bool == 0) goto Label_5239; // 0x1471 JumpB
	lshGetAnimTimes(var_69_string, var_77_float, var_78_float); // 0x1472 Func
	lshPlayAnimation(var_77_float, var_78_float, var_70_bool); // 0x1474 Func
	goto Label_5243; // 0x1476 Jump
	
Label_5243:
	return 6; // 0x147b Return
	
Label_5239:
	var_80_string = "Can't find lsh animation : "; // 0x1477 PushS
	var_81_int = var_80_string + var_69_string; // 0x1478 Add
	Trace(var_81_int); // 0x1479 Func
}


func_5743(var_113_bool, var_114_object)
{
	var_115_bool = 0; var_116_object = Obj(); // 0x1670 PushV
	var_116_object = var_114_object; // 0x1671 Mov
	func_5845(var_116_object); // 0x1672 NEW_2
	if(var_115_bool == 0) goto Label_5751; // 0x1674 JumpB
	var_113_bool = 1; // 0x1675 MovB
	return 0; // 0x1676 Return
	
Label_5751:
	var_113_bool = 0; // 0x1677 MovB
	return 0; // 0x1678 Return
}


func_1140(var_0_bool, var_74_bool)
{
	var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0); // 0x474 PushV
	GetDirection(var_77_cvector); // 0x475 Func
	var_79_cvector = CVector(0,0,0); var_80_object = Obj(); // 0x477 PushV
	var_80_object = var_0_bool; // 0x478 MovT
	func_4956(var_80_object); // 0x479 NEW_2
	var_78_cvector = var_79_cvector; // 0x47a Mov
	var_85_float = 0; var_86_cvector = CVector(0,0,0); var_87_cvector = CVector(0,0,0); // 0x47c PushV
	var_86_cvector = var_77_cvector; // 0x47d Mov
	var_87_cvector = var_78_cvector; // 0x47e Mov
	func_5309(var_85_float, var_86_cvector, var_87_cvector); // 0x47f NEW_2
	var_93_float = -0.34202; // 0x481 PushF
	var_74_bool = var_85_float >= var_93_float; // 0x482 GE2
	return 4; // 0x483 Return
}


func_5753(var_150_bool, var_151_object)
{
	var_152_bool = 0; var_153_object = Obj(); // 0x167a PushV
	var_153_object = var_151_object; // 0x167b Mov
	func_5852(var_153_object); // 0x167c NEW_2
	if(var_152_bool == 0) goto Label_5761; // 0x167e JumpB
	var_150_bool = 1; // 0x167f MovB
	return 0; // 0x1680 Return
	
Label_5761:
	var_150_bool = 0; // 0x1681 MovB
	return 0; // 0x1682 Return
}


func_5244(var_82_object)
{
	var_83_float = 0; var_84_cvector = CVector(0,0,0); var_85_float = 0; var_86_cvector = CVector(0,0,0); // 0x147c PushV
	GetEyesHeight(var_85_float); // 0x147d ObjFunc
	var_86_cvector = CVector(0.0, 0.0, 0.0); // 0x147f MovV
	var_87_float = GetByIndex(var_86_cvector, 1); // 0x1480 PushE
	var_87_float = var_85_float; // 0x1481 Mov
	SetByIndex(var_86_cvector, 1) = var_87_float; // 0x1482 PopE
	var_88_string = "head"; // 0x1483 PushS
	LookAsync(var_82_object, var_88_string, var_86_cvector); // 0x1484 Func
	return 4; // 0x1486 Return
}


func_5763(var_156_bool, var_157_object)
{
	var_158_bool = 0; var_159_object = Obj(); // 0x1684 PushV
	var_159_object = var_157_object; // 0x1685 Mov
	func_5859(var_159_object); // 0x1686 NEW_2
	if(var_158_bool == 0) goto Label_5771; // 0x1688 JumpB
	var_156_bool = 1; // 0x1689 MovB
	return 0; // 0x168a Return
	
Label_5771:
	var_156_bool = 0; // 0x168b MovB
	return 0; // 0x168c Return
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
	func_5294(var_52_cvector, var_53_cvector); // 0x48e NEW_2
	var_59_float = 0.75; // 0x490 PushF
	var_60_float = var_46_cvector * var_59_float; // 0x491 Mult
	var_51_cvector = var_52_cvector + var_60_float; // 0x492 Add2
	func_5294(var_50_cvector, var_51_cvector); // 0x493 NEW_2
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


func_5255()
{
	var_25_bool = 0; // 0x1487 PushV
	func_6031(var_25_bool); // 0x1488 NEW_2
	if(var_25_bool == 0) goto Label_5261; // 0x148a JumpB
	lshStopSpeech(); // 0x148b Func
	
Label_5261:
	return 0; // 0x148d Return
}


func_652(var_177_bool)
{
	var_177_bool = 1; // 0x28c MovB
	return 0; // 0x28d Return
}


func_5773(var_202_bool, var_203_object)
{
	var_204_bool = 0; var_205_object = Obj(); // 0x168e PushV
	var_205_object = var_203_object; // 0x168f Mov
	func_5866(var_205_object); // 0x1690 NEW_2
	if(var_204_bool == 0) goto Label_5781; // 0x1692 JumpB
	var_202_bool = 1; // 0x1693 MovB
	return 0; // 0x1694 Return
	
Label_5781:
	var_202_bool = 0; // 0x1695 MovB
	return 0; // 0x1696 Return
}


func_654()
{
	StopAnimation(); // 0x28e Func
	StopGroup0(); // 0x290 Func
	return 0; // 0x292 Return
}


func_5262(var_61_string, var_62_int, var_63_int)
{
	var_64_bool = 0; var_65_bool = 0; // 0x148e PushV
	var_66_bool = 0; var_67_int = 0; var_68_int = 0; // 0x148f PushV
	var_67_int = var_62_int; // 0x1490 Mov
	var_68_int = var_63_int; // 0x1491 Mov
	func_5304(var_66_bool, var_67_int, var_68_int); // 0x1492 NEW_2
	if(var_66_bool == 0) goto Label_5272; // 0x1494 JumpB
	var_69_int = 0; // 0x1495 PushI
	AddItem(var_65_bool, var_61_string, var_69_int); // 0x1496 Func
	
Label_5272:
	return 2; // 0x1498 Return
}


func_659(var_0_bool, var_74_object)
{
	var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0); var_78_bool = 0; var_79_cvector = CVector(0,0,0); var_80_cvector = CVector(0,0,0); var_81_bool = 0; // 0x293 PushV
	var_0_bool = var_74_object; // 0x294 TMov
	func_710(var_81_bool); // 0x296 NEW_2
	GetDirection(var_79_cvector); // 0x298 Func
	var_89_cvector = CVector(0,0,0); var_90_object = Obj(); // 0x29a PushV
	var_90_object = var_0_bool; // 0x29b MovT
	func_4956(var_90_object); // 0x29c NEW_2
	var_80_cvector = var_89_cvector; // 0x29d Mov
	var_95_float = 0; var_96_cvector = CVector(0,0,0); var_97_cvector = CVector(0,0,0); // 0x29f PushV
	var_96_cvector = var_79_cvector; // 0x2a0 Mov
	var_97_cvector = var_80_cvector; // 0x2a1 Mov
	func_5336(var_95_float, var_96_cvector, var_97_cvector); // 0x2a2 NEW_2
	var_119_int = 0; // 0x2a4 PushI
	var_120_bool = var_95_float < var_119_int; // 0x2a5 LT
	if(var_120_bool == 0) goto Label_685; // 0x2a6 JumpB
	var_121_object = Obj(); // 0x2a7 PushV
	var_121_object = var_0_bool; // 0x2a8 MovT
	func_5053(); // 0x2a9 NEW_2
	var_81_bool = 1; // 0x2ab MovB
	goto Label_688; // 0x2ac Jump
	
Label_688:
	var_130_bool = var_81_bool; // 0x2b0 Push
	if(var_130_bool == 0) goto Label_704; // 0x2b1 JumpB
	var_131_object = Obj(); // 0x2b2 PushV
	var_131_object = var_0_bool; // 0x2b3 MovT
	func_5053(); // 0x2b4 NEW_2
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


func_5783(var_208_bool, var_209_object)
{
	var_210_bool = 0; var_211_object = Obj(); // 0x1698 PushV
	var_211_object = var_209_object; // 0x1699 Mov
	func_5873(var_211_object); // 0x169a NEW_2
	if(var_210_bool == 0) goto Label_5791; // 0x169c JumpB
	var_208_bool = 1; // 0x169d MovB
	return 0; // 0x169e Return
	
Label_5791:
	var_208_bool = 0; // 0x169f MovB
	return 0; // 0x16a0 Return
}


func_5273(var_39_string, var_40_int, var_41_int, var_42_int)
{
	var_43_int = 0; var_44_bool = 0; var_45_int = 0; var_46_bool = 0; // 0x1499 PushV
	var_47_bool = 0; var_48_int = 0; var_49_int = 0; // 0x149a PushV
	var_48_int = var_40_int; // 0x149b Mov
	var_49_int = var_41_int; // 0x149c Mov
	func_5304(var_47_bool, var_48_int, var_49_int); // 0x149d NEW_2
	if(var_47_bool == 0) goto Label_5287; // 0x149f JumpB
	irand(var_45_int, var_42_int); // 0x14a0 Func
	var_52_int = 0; // 0x14a2 PushI
	var_53_int = 1; // 0x14a3 PushI
	var_54_int = var_45_int + var_53_int; // 0x14a4 Add
	AddItem(var_46_bool, var_39_string, var_52_int, var_54_int); // 0x14a5 Func
	
Label_5287:
	return 4; // 0x14a7 Return
}


func_5793(var_214_bool, var_215_object)
{
	var_216_bool = 0; var_217_object = Obj(); // 0x16a2 PushV
	var_217_object = var_215_object; // 0x16a3 Mov
	func_5880(var_217_object); // 0x16a4 NEW_2
	if(var_216_bool == 0) goto Label_5801; // 0x16a6 JumpB
	var_214_bool = 1; // 0x16a7 MovB
	return 0; // 0x16a8 Return
	
Label_5801:
	var_214_bool = 0; // 0x16a9 MovB
	return 0; // 0x16aa Return
}


func_1186(var_0_bool, var_1_bool, var_2_bool, var_75_object)
{
	var_79_cvector = CVector(0,0,0); var_80_float = 0; var_81_bool = 0; var_82_cvector = CVector(0,0,0); var_83_float = 0; var_84_cvector = CVector(0,0,0); var_85_float = 0; var_86_bool = 0; var_87_cvector = CVector(0,0,0); var_88_float = 0; // 0x4a2 PushV
	var_0_bool = var_75_object; // 0x4a3 TMov
	var_89_cvector = CVector(0,0,0); var_90_float = 0; // 0x4a4 PushV
	var_90_float = 1.74533; // 0x4a5 MovF
	func_1156(var_89_cvector, var_90_float); // 0x4a6 NEW_2
	var_84_cvector = var_89_cvector; // 0x4a7 Mov
	var_85_float = var_84_cvector | var_84_cvector; // 0x4a9 Or2
	var_119_float = 2500.0; // 0x4aa PushF
	var_120_bool = var_85_float < var_119_float; // 0x4ab LT
	if(var_120_bool == 0) goto Label_1215; // 0x4ac JumpB
	var_121_cvector = CVector(0,0,0); var_122_float = 0; // 0x4ad PushV
	var_122_float = 2.61799; // 0x4ae MovF
	func_1156(var_121_cvector, var_122_float); // 0x4af NEW_2
	var_84_cvector = var_121_cvector; // 0x4b0 Mov
	var_85_float = var_84_cvector | var_84_cvector; // 0x4b2 Or2
	var_123_float = 2500.0; // 0x4b3 PushF
	var_124_bool = var_85_float < var_123_float; // 0x4b4 LT
	if(var_124_bool == 0) goto Label_1215; // 0x4b5 JumpB
	var_125_string = "Can't retreat, distance: "; // 0x4b6 PushS
	var_126_float = sqrt(var_85_float); // 0x4b7 Sqrt
	var_127_int = var_125_string + var_126_float; // 0x4b8 Add
	Trace(var_127_int); // 0x4b9 Func
	var_128_float = 0.5; // 0x4bb PushF
	Sleep(var_128_float); // 0x4bc Func
	return 10; // 0x4be Return
	
Label_1215:
	var_129_float = GetByIndex(var_84_cvector, 0); // 0x4bf PushE
	var_130_float = GetByIndex(var_84_cvector, 2); // 0x4c0 PushE
	Rotate(var_129_float, var_130_float); // 0x4c1 Func
	var_131_cvector = CVector(0,0,0); // 0x4c3 PushV
	func_4951(var_131_cvector); // 0x4c4 NEW_2
	var_1_bool = var_131_cvector + var_84_cvector; // 0x4c6 Add2
	var_134_int = 120; // 0x4c7 PushI
	var_135_float = 0.5; // 0x4c8 PushF
	SetTimer(var_134_int, var_135_float); // 0x4c9 Func
	var_2_bool = 0; // 0x4cb TMovB
	
Label_1228:
	var_136_int = 1; // 0x4cc PushI
	MovePoint(var_136_int, var_136_int, var_86_bool); // 0x4cd Func
	var_137_bool = var_86_bool; // 0x4cf Push
	if(var_137_bool == 0) goto Label_1256; // 0x4d0 JumpB
	var_138_bool = var_0_bool == 0; // 0x4d1 NullEq
	if(var_138_bool == 0) goto Label_1237; // 0x4d2 JumpB
	goto Label_1258; // 0x4d3 Jump
	
Label_1258:
	return 10; // 0x4ea Return
	
Label_1237:
	var_139_cvector = CVector(0,0,0); var_140_float = 0; // 0x4d5 PushV
	var_140_float = 2.61799; // 0x4d6 MovF
	func_1156(var_139_cvector, var_140_float); // 0x4d7 NEW_2
	var_87_cvector = var_139_cvector; // 0x4d8 Mov
	var_88_float = var_87_cvector | var_87_cvector; // 0x4da Or2
	var_141_float = 2500.0; // 0x4db PushF
	var_142_bool = var_88_float >= var_141_float; // 0x4dc GE
	if(var_142_bool == 0) goto Label_1255; // 0x4dd JumpB
	var_143_cvector = CVector(0,0,0); // 0x4de PushV
	func_4951(var_143_cvector); // 0x4df NEW_2
	var_1_bool = var_143_cvector + var_87_cvector; // 0x4e1 Add2
	var_144_int = 120; // 0x4e2 PushI
	var_145_float = 0.5; // 0x4e3 PushF
	SetTimer(var_144_int, var_145_float); // 0x4e4 Func
	goto Label_1256; // 0x4e6 Jump
	
Label_1256:
	var_146_bool = var_2_bool == 0; // 0x4e8 Not
	if(var_146_bool == 0) goto Label_1228; // 0x4e9 JumpB
	
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


func_5288(var_30_object)
{
	var_31_object = Obj(); var_32_object = Obj(); // 0x14a8 PushV
	self(var_32_object); // 0x14a9 Func
	var_30_object = var_32_object; // 0x14ab Mov
	return 2; // 0x14ac Return
}


func_5803(var_85_bool)
{
	var_87_int = 0; // 0x16ac PushV
	func_5358(var_87_int); // 0x16ad NEW_2
	var_93_int = 1; // 0x16af PushI
	var_85_bool = var_87_int == var_93_int; // 0x16b0 Eq2
	return 0; // 0x16b1 Return
}


func_5294(var_52_cvector, var_53_cvector)
{
	var_54_float = 0; var_55_float = 0; // 0x14ae PushV
	var_56_int = var_53_cvector | var_53_cvector; // 0x14af Or
	var_55_float = sqrt(var_56_int); // 0x14b0 Sqrt2
	var_57_float = 0.0; // 0x14b1 PushF
	var_58_bool = var_55_float < var_57_float; // 0x14b2 LT
	if(var_58_bool == 0) goto Label_5302; // 0x14b3 JumpB
	var_52_cvector = CVector(0.0, 0.0, 0.0); // 0x14b4 MovV
	return 2; // 0x14b5 Return
	
Label_5302:
	var_52_cvector = var_53_cvector / var_53_cvector; // 0x14b6 Div2
	return 2; // 0x14b7 Return
}


func_5810(var_99_bool)
{
	var_101_int = 0; // 0x16b3 PushV
	func_5358(var_101_int); // 0x16b4 NEW_2
	var_102_int = 2; // 0x16b6 PushI
	var_99_bool = var_101_int == var_102_int; // 0x16b7 Eq2
	return 0; // 0x16b8 Return
}


func_1715(var_0_bool, var_74_bool)
{
	var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0); // 0x6b3 PushV
	GetDirection(var_77_cvector); // 0x6b4 Func
	var_79_cvector = CVector(0,0,0); var_80_object = Obj(); // 0x6b6 PushV
	var_80_object = var_0_bool; // 0x6b7 MovT
	func_4956(var_80_object); // 0x6b8 NEW_2
	var_78_cvector = var_79_cvector; // 0x6b9 Mov
	var_85_float = 0; var_86_cvector = CVector(0,0,0); var_87_cvector = CVector(0,0,0); // 0x6bb PushV
	var_86_cvector = var_77_cvector; // 0x6bc Mov
	var_87_cvector = var_78_cvector; // 0x6bd Mov
	func_5309(var_85_float, var_86_cvector, var_87_cvector); // 0x6be NEW_2
	var_93_float = -0.34202; // 0x6c0 PushF
	var_74_bool = var_85_float >= var_93_float; // 0x6c1 GE2
	return 4; // 0x6c2 Return
}


func_5304(var_47_bool, var_48_int, var_49_int)
{
	var_50_int = 0; var_51_int = 0; // 0x14b8 PushV
	irand(var_51_int, var_49_int); // 0x14b9 Func
	var_47_bool = var_51_int < var_48_int; // 0x14bb LT2
	return 2; // 0x14bc Return
}


func_5817(var_109_bool)
{
	var_111_int = 0; // 0x16ba PushV
	func_5358(var_111_int); // 0x16bb NEW_2
	var_112_int = 3; // 0x16bd PushI
	var_109_bool = var_111_int == var_112_int; // 0x16be Eq2
	return 0; // 0x16bf Return
}


func_5309(var_85_float, var_86_cvector, var_87_cvector)
{
	var_88_int = var_86_cvector | var_87_cvector; // 0x14be Or
	var_89_int = var_86_cvector | var_86_cvector; // 0x14bf Or
	var_90_int = var_87_cvector | var_87_cvector; // 0x14c0 Or
	var_91_float = var_89_int * var_90_int; // 0x14c1 Mult
	var_92_float = sqrt(var_91_float); // 0x14c2 Sqrt
	var_85_float = var_88_int / var_88_int; // 0x14c3 Div2
	return 0; // 0x14c4 Return
}


func_5824(var_124_bool)
{
	var_126_int = 0; // 0x16c1 PushV
	func_5358(var_126_int); // 0x16c2 NEW_2
	var_127_int = 4; // 0x16c4 PushI
	var_124_bool = var_126_int == var_127_int; // 0x16c5 Eq2
	return 0; // 0x16c6 Return
}


func_1731(var_0_bool, var_47_int, var_48_object)
{
	var_50_object = Obj(); var_51_bool = 0; var_52_int = 0; var_53_bool = 0; var_54_object = Obj(); var_55_bool = 0; var_56_int = 0; var_57_bool = 0; // 0x6c3 PushV
	var_0_bool = var_48_object; // 0x6c4 TMov
	var_58_bool = 0; var_59_object = Obj(); var_60_float = 0; // 0x6c5 PushV
	var_59_object = var_48_object; // 0x6c6 Mov
	var_60_float = 70.0; // 0x6c7 MovF
	func_5069(var_59_object, var_60_float); // 0x6c8 NEW_2
	var_104_bool = var_58_bool == 0; // 0x6ca Not
	if(var_104_bool == 0) goto Label_1742; // 0x6cb JumpB
	var_47_int = -2; // 0x6cc MovI
	return 8; // 0x6cd Return
	
Label_1742:
	CreateDialog(var_54_object); // 0x6ce Func
	var_105_int = 0; // 0x6d0 PushV
	func_6025(var_105_int); // 0x6d1 NEW_2
	SetNPCName(var_105_int); // 0x6d3 ObjFunc
	var_106_int = 0; // 0x6d5 PushV
	func_6023(var_106_int); // 0x6d6 NEW_2
	SetNPCDescription(var_106_int); // 0x6d8 ObjFunc
	var_107_string = ""; // 0x6da PushV
	func_6027(var_107_string); // 0x6db NEW_2
	SetPhoto(var_107_string); // 0x6dd ObjFunc
	var_108_string = ""; // 0x6df PushV
	func_6029(var_108_string); // 0x6e0 NEW_2
	SetPhoto2(var_108_string); // 0x6e2 ObjFunc
	var_109_int = 0; // 0x6e4 PushV
	func_5887(var_109_int); // 0x6e5 NEW_2
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
	var_468_bool = var_57_bool == 0; // 0x6fb Not
	if(var_468_bool == 0) goto Label_1794; // 0x6fc JumpB
	sync(); // 0x6fd Func
	IsDialogEnd(var_57_bool); // 0x6ff ObjFunc
	goto Label_1787; // 0x701 Jump
	
Label_1794:
	var_469_object = Obj(); // 0x702 PushV
	var_469_object = var_48_object; // 0x703 Mov
	func_5137(); // 0x704 NEW_2
	StopDialog(var_54_object); // 0x706 Func
	GetReturnValue(var_56_int); // 0x708 ObjFunc
	var_47_int = var_56_int; // 0x70a Mov
	return 8; // 0x70b Return
}


func_5317(var_75_float, var_76_cvector, var_77_cvector)
{
	var_78_float = GetByIndex(var_76_cvector, 0); // 0x14c6 PushE
	var_79_float = GetByIndex(var_77_cvector, 0); // 0x14c7 PushE
	var_80_float = var_78_float * var_79_float; // 0x14c8 Mult
	var_81_float = GetByIndex(var_76_cvector, 2); // 0x14c9 PushE
	var_82_float = GetByIndex(var_77_cvector, 2); // 0x14ca PushE
	var_83_float = var_81_float * var_82_float; // 0x14cb Mult
	var_75_float = var_80_float + var_83_float; // 0x14cc Add2
	return 0; // 0x14cd Return
}


func_710(var_0_bool)
{
	var_82_object = Obj(); // 0x2c6 PushV
	var_82_object = var_0_bool; // 0x2c7 MovT
	func_5244(var_82_object); // 0x2c8 NEW_2
	return 0; // 0x2ca Return
}


func_5831(var_133_bool)
{
	var_135_int = 0; // 0x16c8 PushV
	func_5358(var_135_int); // 0x16c9 NEW_2
	var_136_int = 5; // 0x16cb PushI
	var_133_bool = var_135_int == var_136_int; // 0x16cc Eq2
	return 0; // 0x16cd Return
}


func_5326(var_84_float, var_85_cvector)
{
	var_86_float = GetByIndex(var_85_cvector, 0); // 0x14cf PushE
	var_87_float = GetByIndex(var_85_cvector, 0); // 0x14d0 PushE
	var_88_float = var_86_float * var_87_float; // 0x14d1 Mult
	var_89_float = GetByIndex(var_85_cvector, 2); // 0x14d2 PushE
	var_90_float = GetByIndex(var_85_cvector, 2); // 0x14d3 PushE
	var_91_float = var_89_float * var_90_float; // 0x14d4 Mult
	var_92_int = var_88_float + var_91_float; // 0x14d5 Add
	var_84_float = sqrt(var_92_int); // 0x14d6 Sqrt2
	return 0; // 0x14d7 Return
}


func_5838(var_142_bool)
{
	var_144_int = 0; // 0x16cf PushV
	func_5358(var_144_int); // 0x16d0 NEW_2
	var_145_int = 6; // 0x16d2 PushI
	var_142_bool = var_144_int == var_145_int; // 0x16d3 Eq2
	return 0; // 0x16d4 Return
}


func_5845(var_115_bool)
{
	var_117_int = 0; // 0x16d6 PushV
	func_5358(var_117_int); // 0x16d7 NEW_2
	var_118_int = 7; // 0x16d9 PushI
	var_115_bool = var_117_int == var_118_int; // 0x16da Eq2
	return 0; // 0x16db Return
}


func_5336(var_72_float, var_73_cvector, var_74_cvector)
{
	var_75_float = 0; var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0); // 0x14d9 PushV
	var_76_cvector = var_73_cvector; // 0x14da Mov
	var_77_cvector = var_74_cvector; // 0x14db Mov
	func_5317(var_75_float, var_76_cvector, var_77_cvector); // 0x14dc NEW_2
	var_84_float = 0; var_85_cvector = CVector(0,0,0); // 0x14de PushV
	var_85_cvector = var_73_cvector; // 0x14df Mov
	func_5326(var_84_float, var_85_cvector); // 0x14e0 NEW_2
	var_93_float = 0; var_94_cvector = CVector(0,0,0); // 0x14e2 PushV
	var_94_cvector = var_74_cvector; // 0x14e3 Mov
	func_5326(var_93_float, var_94_cvector); // 0x14e4 NEW_2
	var_95_float = var_84_float * var_93_float; // 0x14e6 Mult
	var_72_float = var_75_float / var_75_float; // 0x14e7 Div2
	return 0; // 0x14e8 Return
}


func_5852(var_152_bool)
{
	var_154_int = 0; // 0x16dd PushV
	func_5358(var_154_int); // 0x16de NEW_2
	var_155_int = 8; // 0x16e0 PushI
	var_152_bool = var_154_int == var_155_int; // 0x16e1 Eq2
	return 0; // 0x16e2 Return
}


func_5859(var_158_bool)
{
	var_160_int = 0; // 0x16e4 PushV
	func_5358(var_160_int); // 0x16e5 NEW_2
	var_161_int = 9; // 0x16e7 PushI
	var_158_bool = var_160_int == var_161_int; // 0x16e8 Eq2
	return 0; // 0x16e9 Return
}


func_5353(var_59_int, var_60_string)
{
	var_61_int = 0; var_62_int = 0; // 0x14e9 PushV
	GetVariable(var_60_string, var_62_int); // 0x14ea Func
	var_59_int = var_62_int; // 0x14ec Mov
	return 2; // 0x14ed Return
}


func_5866(var_204_bool)
{
	var_206_int = 0; // 0x16eb PushV
	func_5358(var_206_int); // 0x16ec NEW_2
	var_207_int = 10; // 0x16ee PushI
	var_204_bool = var_206_int == var_207_int; // 0x16ef Eq2
	return 0; // 0x16f0 Return
}


func_5358(var_32_int)
{
	var_33_float = 0; var_34_float = 0; // 0x14ee PushV
	GetGameTime(var_34_float); // 0x14ef Func
	var_35_int = 1; // 0x14f1 PushI
	var_36_int = 0; // 0x14f2 PushV
	var_37_int = 24; // 0x14f3 PushI
	var_36_int = var_34_float / var_34_float; // 0x14f4 Div2
	var_32_int = var_35_int + var_36_int; // 0x14f5 Add2
	return 2; // 0x14f6 Return
}


func_5873(var_210_bool)
{
	var_212_int = 0; // 0x16f2 PushV
	func_5358(var_212_int); // 0x16f3 NEW_2
	var_213_int = 11; // 0x16f5 PushI
	var_210_bool = var_212_int == var_213_int; // 0x16f6 Eq2
	return 0; // 0x16f7 Return
}


func_5880(var_216_bool)
{
	var_218_int = 0; // 0x16f9 PushV
	func_5358(var_218_int); // 0x16fa NEW_2
	var_219_int = 12; // 0x16fc PushI
	var_216_bool = var_218_int == var_219_int; // 0x16fd Eq2
	return 0; // 0x16fe Return
}


func_251(var_2_bool)
{
	var_23_int = 110; // 0xfb PushI
	KillTimer(var_23_int); // 0xfc Func
	var_2_bool = 0; // 0xfe TMovB
	func_387(var_21_string, var_22_bool); // 0x100 NEW_2
	return 0; // 0x102 Return
}


func_5887(var_109_int)
{
	var_110_int = 0; var_111_int = 0; // 0x16ff PushV
	var_112_string = "branch"; // 0x1700 PushS
	GetVariable(var_112_string, var_111_int); // 0x1701 Func
	var_113_int = 0; // 0x1703 PushI
	var_114_bool = var_111_int == var_113_int; // 0x1704 Eq
	if(var_114_bool == 0) goto Label_5897; // 0x1705 JumpB
	var_109_int = 1; // 0x1706 MovI
	return 2; // 0x1707 Return
	
Label_5897:
	var_115_int = 1; // 0x1709 PushI
	var_116_bool = var_111_int == var_115_int; // 0x170a Eq
	if(var_116_bool == 0) goto Label_5902; // 0x170b JumpB
	var_109_int = 2; // 0x170c MovI
	return 2; // 0x170d Return
	
Label_5902:
	var_109_int = 3; // 0x170e MovI
	return 2; // 0x170f Return
}


func_5375(var_26_bool, var_27_object, var_28_string)
{
	var_29_string = "unholster"; // 0x1500 PushS
	var_30_bool = var_28_string == var_29_string; // 0x1501 Eq
	if(var_30_bool == 0) goto Label_5386; // 0x1502 JumpB
	var_31_bool = 0; var_32_object = Obj(); // 0x1503 PushV
	var_32_object = var_27_object; // 0x1504 Mov
	func_5600(var_31_bool, var_32_object); // 0x1505 NEW_2
	var_26_bool = var_31_bool; // 0x1506 Mov
	return 0; // 0x1508 Return
	
Label_5386:
	var_35_string = "player_shot"; // 0x150a PushS
	var_36_bool = var_28_string == var_35_string; // 0x150b Eq
	if(var_36_bool == 0) goto Label_5396; // 0x150c JumpB
	var_37_bool = 0; var_38_object = Obj(); // 0x150d PushV
	var_38_object = var_27_object; // 0x150e Mov
	func_5613(var_37_bool, var_38_object); // 0x150f NEW_2
	var_26_bool = var_37_bool; // 0x1510 Mov
	return 0; // 0x1512 Return
	
Label_5396:
	var_52_string = "battle"; // 0x1514 PushS
	var_53_bool = var_28_string == var_52_string; // 0x1515 Eq
	if(var_53_bool == 0) goto Label_5405; // 0x1516 JumpB
	var_54_bool = 0; var_55_object = Obj(); // 0x1517 PushV
	var_55_object = var_27_object; // 0x1518 Mov
	func_5636(var_54_bool, var_55_object); // 0x1519 NEW_2
	var_26_bool = var_54_bool; // 0x151a Mov
	return 0; // 0x151c Return
	
Label_5405:
	var_26_bool = 0; // 0x151d MovB
	return 0; // 0x151e Return
}


func_259(var_2_bool)
{
	var_72_int = 110; // 0x103 PushI
	KillTimer(var_72_int); // 0x104 Func
	var_2_bool = 0; // 0x106 TMovB
	func_394(var_26_bool, var_27_int); // 0x108 NEW_2
	return 0; // 0x10a Return
}


func_1805(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_118_object, var_119_object)
{
	var_0_bool = var_119_object; // 0x70e TMov
	var_1_bool = var_118_object; // 0x70f TMov
	var_3_bool = 0; // 0x710 TMovB
	var_124_int = 1; // 0x711 PushI
	if(var_124_int == 0) goto Label_2385; // 0x712 JumpB
	var_125_bool = 0; var_126_object = Obj(); // 0x713 PushV
	var_126_object = var_1_bool; // 0x714 MovT
	func_5671(var_126_object); // 0x715 NEW_2
	if(var_125_bool == 0) goto Label_2177; // 0x717 JumpB
	var_133_string = ""; // 0x718 PushV
	var_133_string = "Neutral"; // 0x719 MovS
	func_2415(var_119_object, var_133_string); // 0x71a NEW_2
	var_150_int = 543072; // 0x71c PushI
	SetMessage(var_150_int); // 0x71d TObjFunc
	ClearReplies(); // 0x71f TObjFunc
	var_151_bool = 0; var_152_object = Obj(); // 0x721 PushV
	var_152_object = var_1_bool; // 0x722 MovT
	func_5683(var_151_bool, var_152_object); // 0x723 NEW_2
	if(var_151_bool == 0) goto Label_1835; // 0x725 JumpB
	var_162_int = 543073; // 0x726 PushI
	var_163_int = 45531; // 0x727 PushI
	var_164_int = 45528; // 0x728 PushI
	AddReply(var_162_int, var_163_int, var_164_int); // 0x729 TObjFunc
	
Label_1835:
	var_165_bool = 0; var_166_object = Obj(); // 0x72b PushV
	var_166_object = var_1_bool; // 0x72c MovT
	func_5693(var_165_bool, var_166_object); // 0x72d NEW_2
	if(var_165_bool == 0) goto Label_1845; // 0x72f JumpB
	var_171_int = 543092; // 0x730 PushI
	var_172_int = 45550; // 0x731 PushI
	var_173_int = 45547; // 0x732 PushI
	AddReply(var_171_int, var_172_int, var_173_int); // 0x733 TObjFunc
	
Label_1845:
	var_174_bool = 0; // 0x735 PushV
	var_174_bool = 1; // 0x736 MovB
	var_175_bool = 0; var_176_object = Obj(); // 0x737 PushV
	var_176_object = var_1_bool; // 0x738 MovT
	func_5703(var_175_bool, var_176_object); // 0x739 NEW_2
	if(var_175_bool == 0) goto Label_1858; // 0x73b JumpB
	var_181_bool = 0; var_182_object = Obj(); // 0x73c PushV
	var_182_object = var_1_bool; // 0x73d MovT
	func_5743(var_181_bool, var_182_object); // 0x73e NEW_2
	if(var_181_bool == 0) goto Label_1858; // 0x740 JumpB
	var_174_bool = 0; // 0x741 MovB
	
Label_1858:
	if(var_174_bool == 0) goto Label_1864; // 0x742 JumpB
	var_187_int = 543108; // 0x743 PushI
	var_188_int = 45564; // 0x744 PushI
	var_189_int = 45563; // 0x745 PushI
	AddReply(var_187_int, var_188_int, var_189_int); // 0x746 TObjFunc
	
Label_1864:
	var_190_bool = 0; var_191_object = Obj(); // 0x748 PushV
	var_191_object = var_1_bool; // 0x749 MovT
	func_5713(var_190_bool, var_191_object); // 0x74a NEW_2
	if(var_190_bool == 0) goto Label_1874; // 0x74c JumpB
	var_196_int = 543101; // 0x74d PushI
	var_197_int = 45557; // 0x74e PushI
	var_198_int = 45556; // 0x74f PushI
	AddReply(var_196_int, var_197_int, var_198_int); // 0x750 TObjFunc
	
Label_1874:
	var_199_bool = 0; var_200_object = Obj(); // 0x752 PushV
	var_200_object = var_1_bool; // 0x753 MovT
	func_5723(var_199_bool, var_200_object); // 0x754 NEW_2
	if(var_199_bool == 0) goto Label_1884; // 0x756 JumpB
	var_205_int = 543117; // 0x757 PushI
	var_206_int = 45573; // 0x758 PushI
	var_207_int = 45572; // 0x759 PushI
	AddReply(var_205_int, var_206_int, var_207_int); // 0x75a TObjFunc
	
Label_1884:
	var_208_bool = 0; var_209_object = Obj(); // 0x75c PushV
	var_209_object = var_1_bool; // 0x75d MovT
	func_5733(var_208_bool, var_209_object); // 0x75e NEW_2
	if(var_208_bool == 0) goto Label_1894; // 0x760 JumpB
	var_214_int = 543127; // 0x761 PushI
	var_215_int = 45583; // 0x762 PushI
	var_216_int = 45582; // 0x763 PushI
	AddReply(var_214_int, var_215_int, var_216_int); // 0x764 TObjFunc
	
Label_1894:
	var_217_bool = 0; // 0x766 PushV
	var_217_bool = 1; // 0x767 MovB
	var_218_bool = 0; var_219_object = Obj(); // 0x768 PushV
	var_219_object = var_1_bool; // 0x769 MovT
	func_5753(var_218_bool, var_219_object); // 0x76a NEW_2
	if(var_218_bool == 0) goto Label_1907; // 0x76c JumpB
	var_224_bool = 0; var_225_object = Obj(); // 0x76d PushV
	var_225_object = var_1_bool; // 0x76e MovT
	func_5763(var_224_bool, var_225_object); // 0x76f NEW_2
	if(var_224_bool == 0) goto Label_1907; // 0x771 JumpB
	var_217_bool = 0; // 0x772 MovB
	
Label_1907:
	if(var_217_bool == 0) goto Label_1913; // 0x773 JumpB
	var_230_int = 543139; // 0x774 PushI
	var_231_int = 45595; // 0x775 PushI
	var_232_int = 45594; // 0x776 PushI
	AddReply(var_230_int, var_231_int, var_232_int); // 0x777 TObjFunc
	
Label_1913:
	var_233_bool = 0; var_234_object = Obj(); // 0x779 PushV
	var_234_object = var_1_bool; // 0x77a MovT
	func_5683(var_233_bool, var_234_object); // 0x77b NEW_2
	if(var_233_bool == 0) goto Label_1923; // 0x77d JumpB
	var_235_int = 543075; // 0x77e PushI
	var_236_int = -1; // 0x77f PushI
	var_237_int = 45530; // 0x780 PushI
	AddReply(var_235_int, var_236_int, var_237_int); // 0x781 TObjFunc
	
Label_1923:
	var_238_bool = 0; // 0x783 PushV
	var_238_bool = 1; // 0x784 MovB
	var_239_bool = 0; // 0x785 PushV
	var_239_bool = 1; // 0x786 MovB
	var_240_bool = 0; // 0x787 PushV
	var_240_bool = 1; // 0x788 MovB
	var_241_bool = 0; var_242_object = Obj(); // 0x789 PushV
	var_242_object = var_1_bool; // 0x78a MovT
	func_5693(var_241_bool, var_242_object); // 0x78b NEW_2
	if(var_241_bool == 0) goto Label_1940; // 0x78d JumpB
	var_243_bool = 0; var_244_object = Obj(); // 0x78e PushV
	var_244_object = var_1_bool; // 0x78f MovT
	func_5703(var_243_bool, var_244_object); // 0x790 NEW_2
	if(var_243_bool == 0) goto Label_1940; // 0x792 JumpB
	var_240_bool = 0; // 0x793 MovB
	
Label_1940:
	if(var_240_bool == 0) goto Label_1947; // 0x794 JumpB
	var_245_bool = 0; var_246_object = Obj(); // 0x795 PushV
	var_246_object = var_1_bool; // 0x796 MovT
	func_5713(var_245_bool, var_246_object); // 0x797 NEW_2
	if(var_245_bool == 0) goto Label_1947; // 0x799 JumpB
	var_239_bool = 0; // 0x79a MovB
	
Label_1947:
	if(var_239_bool == 0) goto Label_1954; // 0x79b JumpB
	var_247_bool = 0; var_248_object = Obj(); // 0x79c PushV
	var_248_object = var_1_bool; // 0x79d MovT
	func_5723(var_247_bool, var_248_object); // 0x79e NEW_2
	if(var_247_bool == 0) goto Label_1954; // 0x7a0 JumpB
	var_238_bool = 0; // 0x7a1 MovB
	
Label_1954:
	if(var_238_bool == 0) goto Label_1960; // 0x7a2 JumpB
	var_249_int = 543100; // 0x7a3 PushI
	var_250_int = -1; // 0x7a4 PushI
	var_251_int = 45555; // 0x7a5 PushI
	AddReply(var_249_int, var_250_int, var_251_int); // 0x7a6 TObjFunc
	
Label_1960:
	var_252_bool = 0; var_253_object = Obj(); // 0x7a8 PushV
	var_253_object = var_1_bool; // 0x7a9 MovT
	func_5733(var_252_bool, var_253_object); // 0x7aa NEW_2
	if(var_252_bool == 0) goto Label_1970; // 0x7ac JumpB
	var_254_int = 543125; // 0x7ad PushI
	var_255_int = -1; // 0x7ae PushI
	var_256_int = 45580; // 0x7af PushI
	AddReply(var_254_int, var_255_int, var_256_int); // 0x7b0 TObjFunc
	
Label_1970:
	var_257_bool = 0; // 0x7b2 PushV
	var_257_bool = 1; // 0x7b3 MovB
	var_258_bool = 0; // 0x7b4 PushV
	var_258_bool = 1; // 0x7b5 MovB
	var_259_bool = 0; var_260_object = Obj(); // 0x7b6 PushV
	var_260_object = var_1_bool; // 0x7b7 MovT
	func_5743(var_259_bool, var_260_object); // 0x7b8 NEW_2
	if(var_259_bool == 0) goto Label_1985; // 0x7ba JumpB
	var_261_bool = 0; var_262_object = Obj(); // 0x7bb PushV
	var_262_object = var_1_bool; // 0x7bc MovT
	func_5753(var_261_bool, var_262_object); // 0x7bd NEW_2
	if(var_261_bool == 0) goto Label_1985; // 0x7bf JumpB
	var_258_bool = 0; // 0x7c0 MovB
	
Label_1985:
	if(var_258_bool == 0) goto Label_1992; // 0x7c1 JumpB
	var_263_bool = 0; var_264_object = Obj(); // 0x7c2 PushV
	var_264_object = var_1_bool; // 0x7c3 MovT
	func_5763(var_263_bool, var_264_object); // 0x7c4 NEW_2
	if(var_263_bool == 0) goto Label_1992; // 0x7c6 JumpB
	var_257_bool = 0; // 0x7c7 MovB
	
Label_1992:
	if(var_257_bool == 0) goto Label_1998; // 0x7c8 JumpB
	var_265_int = 543147; // 0x7c9 PushI
	var_266_int = -1; // 0x7ca PushI
	var_267_int = 45602; // 0x7cb PushI
	AddReply(var_265_int, var_266_int, var_267_int); // 0x7cc TObjFunc
	
Label_1998:
	var_268_bool = 0; // 0x7ce PushV
	var_268_bool = 1; // 0x7cf MovB
	var_269_bool = 0; // 0x7d0 PushV
	var_269_bool = 1; // 0x7d1 MovB
	var_270_bool = 0; var_271_object = Obj(); // 0x7d2 PushV
	var_271_object = var_1_bool; // 0x7d3 MovT
	func_5773(var_270_bool, var_271_object); // 0x7d4 NEW_2
	if(var_270_bool == 0) goto Label_2013; // 0x7d6 JumpB
	var_276_bool = 0; var_277_object = Obj(); // 0x7d7 PushV
	var_277_object = var_1_bool; // 0x7d8 MovT
	func_5783(var_276_bool, var_277_object); // 0x7d9 NEW_2
	if(var_276_bool == 0) goto Label_2013; // 0x7db JumpB
	var_269_bool = 0; // 0x7dc MovB
	
Label_2013:
	if(var_269_bool == 0) goto Label_2020; // 0x7dd JumpB
	var_282_bool = 0; var_283_object = Obj(); // 0x7de PushV
	var_283_object = var_1_bool; // 0x7df MovT
	func_5793(var_282_bool, var_283_object); // 0x7e0 NEW_2
	if(var_282_bool == 0) goto Label_2020; // 0x7e2 JumpB
	var_268_bool = 0; // 0x7e3 MovB
	
Label_2020:
	if(var_268_bool == 0) goto Label_2026; // 0x7e4 JumpB
	var_288_int = 543148; // 0x7e5 PushI
	var_289_int = -1; // 0x7e6 PushI
	var_290_int = 45603; // 0x7e7 PushI
	AddReply(var_288_int, var_289_int, var_290_int); // 0x7e8 TObjFunc
	
Label_2026:
	var_291_bool = 0; var_292_object = Obj(); // 0x7ea PushV
	var_292_object = var_1_bool; // 0x7eb MovT
	func_5683(var_291_bool, var_292_object); // 0x7ec NEW_2
	if(var_291_bool == 0) goto Label_2036; // 0x7ee JumpB
	var_293_int = 543074; // 0x7ef PushI
	var_294_int = -1; // 0x7f0 PushI
	var_295_int = 45529; // 0x7f1 PushI
	AddReply(var_293_int, var_294_int, var_295_int); // 0x7f2 TObjFunc
	
Label_2036:
	var_296_bool = 0; // 0x7f4 PushV
	var_296_bool = 1; // 0x7f5 MovB
	var_297_bool = 0; var_298_object = Obj(); // 0x7f6 PushV
	var_298_object = var_1_bool; // 0x7f7 MovT
	func_5693(var_297_bool, var_298_object); // 0x7f8 NEW_2
	if(var_297_bool == 0) goto Label_2049; // 0x7fa JumpB
	var_299_bool = 0; var_300_object = Obj(); // 0x7fb PushV
	var_300_object = var_1_bool; // 0x7fc MovT
	func_5703(var_299_bool, var_300_object); // 0x7fd NEW_2
	if(var_299_bool == 0) goto Label_2049; // 0x7ff JumpB
	var_296_bool = 0; // 0x800 MovB
	
Label_2049:
	if(var_296_bool == 0) goto Label_2055; // 0x801 JumpB
	var_301_int = 543090; // 0x802 PushI
	var_302_int = -1; // 0x803 PushI
	var_303_int = 45545; // 0x804 PushI
	AddReply(var_301_int, var_302_int, var_303_int); // 0x805 TObjFunc
	
Label_2055:
	var_304_bool = 0; // 0x807 PushV
	var_304_bool = 1; // 0x808 MovB
	var_305_bool = 0; var_306_object = Obj(); // 0x809 PushV
	var_306_object = var_1_bool; // 0x80a MovT
	func_5693(var_305_bool, var_306_object); // 0x80b NEW_2
	if(var_305_bool == 0) goto Label_2068; // 0x80d JumpB
	var_307_bool = 0; var_308_object = Obj(); // 0x80e PushV
	var_308_object = var_1_bool; // 0x80f MovT
	func_5703(var_307_bool, var_308_object); // 0x810 NEW_2
	if(var_307_bool == 0) goto Label_2068; // 0x812 JumpB
	var_304_bool = 0; // 0x813 MovB
	
Label_2068:
	if(var_304_bool == 0) goto Label_2074; // 0x814 JumpB
	var_309_int = 543099; // 0x815 PushI
	var_310_int = -1; // 0x816 PushI
	var_311_int = 45554; // 0x817 PushI
	AddReply(var_309_int, var_310_int, var_311_int); // 0x818 TObjFunc
	
Label_2074:
	var_312_bool = 0; // 0x81a PushV
	var_312_bool = 1; // 0x81b MovB
	var_313_bool = 0; var_314_object = Obj(); // 0x81c PushV
	var_314_object = var_1_bool; // 0x81d MovT
	func_5733(var_313_bool, var_314_object); // 0x81e NEW_2
	if(var_313_bool == 0) goto Label_2087; // 0x820 JumpB
	var_315_bool = 0; var_316_object = Obj(); // 0x821 PushV
	var_316_object = var_1_bool; // 0x822 MovT
	func_5763(var_315_bool, var_316_object); // 0x823 NEW_2
	if(var_315_bool == 0) goto Label_2087; // 0x825 JumpB
	var_312_bool = 0; // 0x826 MovB
	
Label_2087:
	if(var_312_bool == 0) goto Label_2093; // 0x827 JumpB
	var_317_int = 543126; // 0x828 PushI
	var_318_int = -1; // 0x829 PushI
	var_319_int = 45581; // 0x82a PushI
	AddReply(var_317_int, var_318_int, var_319_int); // 0x82b TObjFunc
	
Label_2093:
	var_320_bool = 0; // 0x82d PushV
	var_320_bool = 1; // 0x82e MovB
	var_321_bool = 0; // 0x82f PushV
	var_321_bool = 1; // 0x830 MovB
	var_322_bool = 0; // 0x831 PushV
	var_322_bool = 1; // 0x832 MovB
	var_323_bool = 0; var_324_object = Obj(); // 0x833 PushV
	var_324_object = var_1_bool; // 0x834 MovT
	func_5743(var_323_bool, var_324_object); // 0x835 NEW_2
	if(var_323_bool == 0) goto Label_2110; // 0x837 JumpB
	var_325_bool = 0; var_326_object = Obj(); // 0x838 PushV
	var_326_object = var_1_bool; // 0x839 MovT
	func_5753(var_325_bool, var_326_object); // 0x83a NEW_2
	if(var_325_bool == 0) goto Label_2110; // 0x83c JumpB
	var_322_bool = 0; // 0x83d MovB
	
Label_2110:
	if(var_322_bool == 0) goto Label_2117; // 0x83e JumpB
	var_327_bool = 0; var_328_object = Obj(); // 0x83f PushV
	var_328_object = var_1_bool; // 0x840 MovT
	func_5773(var_327_bool, var_328_object); // 0x841 NEW_2
	if(var_327_bool == 0) goto Label_2117; // 0x843 JumpB
	var_321_bool = 0; // 0x844 MovB
	
Label_2117:
	if(var_321_bool == 0) goto Label_2124; // 0x845 JumpB
	var_329_bool = 0; var_330_object = Obj(); // 0x846 PushV
	var_330_object = var_1_bool; // 0x847 MovT
	func_5793(var_329_bool, var_330_object); // 0x848 NEW_2
	if(var_329_bool == 0) goto Label_2124; // 0x84a JumpB
	var_320_bool = 0; // 0x84b MovB
	
Label_2124:
	if(var_320_bool == 0) goto Label_2130; // 0x84c JumpB
	var_331_int = 543149; // 0x84d PushI
	var_332_int = -1; // 0x84e PushI
	var_333_int = 45604; // 0x84f PushI
	AddReply(var_331_int, var_332_int, var_333_int); // 0x850 TObjFunc
	
Label_2130:
	var_334_bool = 0; // 0x852 PushV
	var_334_bool = 1; // 0x853 MovB
	var_335_bool = 0; // 0x854 PushV
	var_335_bool = 1; // 0x855 MovB
	var_336_bool = 0; // 0x856 PushV
	var_336_bool = 1; // 0x857 MovB
	var_337_bool = 0; // 0x858 PushV
	var_337_bool = 1; // 0x859 MovB
	var_338_bool = 0; var_339_object = Obj(); // 0x85a PushV
	var_339_object = var_1_bool; // 0x85b MovT
	func_5713(var_338_bool, var_339_object); // 0x85c NEW_2
	if(var_338_bool == 0) goto Label_2149; // 0x85e JumpB
	var_340_bool = 0; var_341_object = Obj(); // 0x85f PushV
	var_341_object = var_1_bool; // 0x860 MovT
	func_5723(var_340_bool, var_341_object); // 0x861 NEW_2
	if(var_340_bool == 0) goto Label_2149; // 0x863 JumpB
	var_337_bool = 0; // 0x864 MovB
	
Label_2149:
	if(var_337_bool == 0) goto Label_2156; // 0x865 JumpB
	var_342_bool = 0; var_343_object = Obj(); // 0x866 PushV
	var_343_object = var_1_bool; // 0x867 MovT
	func_5763(var_342_bool, var_343_object); // 0x868 NEW_2
	if(var_342_bool == 0) goto Label_2156; // 0x86a JumpB
	var_336_bool = 0; // 0x86b MovB
	
Label_2156:
	if(var_336_bool == 0) goto Label_2163; // 0x86c JumpB
	var_344_bool = 0; var_345_object = Obj(); // 0x86d PushV
	var_345_object = var_1_bool; // 0x86e MovT
	func_5783(var_344_bool, var_345_object); // 0x86f NEW_2
	if(var_344_bool == 0) goto Label_2163; // 0x871 JumpB
	var_335_bool = 0; // 0x872 MovB
	
Label_2163:
	if(var_335_bool == 0) goto Label_2170; // 0x873 JumpB
	var_346_bool = 0; var_347_object = Obj(); // 0x874 PushV
	var_347_object = var_1_bool; // 0x875 MovT
	func_5793(var_346_bool, var_347_object); // 0x876 NEW_2
	if(var_346_bool == 0) goto Label_2170; // 0x878 JumpB
	var_334_bool = 0; // 0x879 MovB
	
Label_2170:
	if(var_334_bool == 0) goto Label_2176; // 0x87a JumpB
	var_348_int = 543150; // 0x87b PushI
	var_349_int = -1; // 0x87c PushI
	var_350_int = 45605; // 0x87d PushI
	AddReply(var_348_int, var_349_int, var_350_int); // 0x87e TObjFunc
	
Label_2176:
	goto Label_2385; // 0x880 Jump
	
Label_2385:
	var_351_bool = 0; // 0x951 PushV
	func_6031(var_351_bool); // 0x952 NEW_2
	if(var_351_bool == 0) goto Label_2400; // 0x954 JumpB
	
Label_2389:
	lshWaitForAnimEnd(); // 0x955 Func
	var_352_bool = var_3_bool; // 0x957 PushT
	if(var_352_bool == 0) goto Label_2394; // 0x958 JumpB
	goto Label_2399; // 0x959 Jump
	
Label_2399:
	goto Label_2414; // 0x95f Jump
	
Label_2414:
	return 0; // 0x96e Return
	
Label_2394:
	var_353_string = ""; // 0x95a PushV
	var_353_string = var_2_bool; // 0x95b MovT
	func_5213(var_353_string); // 0x95c NEW_2
	goto Label_2389; // 0x95e Jump
	
Label_2400:
	var_364_string = "all"; // 0x960 PushS
	var_365_string = "idle"; // 0x961 PushS
	PlayAnimation(var_364_string, var_365_string); // 0x962 Func
	
Label_2404:
	WaitForAnimEnd(); // 0x964 Func
	var_366_bool = var_3_bool; // 0x966 PushT
	if(var_366_bool == 0) goto Label_2409; // 0x967 JumpB
	goto Label_2414; // 0x968 Jump
	
Label_2409:
	var_367_string = "all"; // 0x969 PushS
	var_368_string = "idle"; // 0x96a PushS
	PlayAnimation(var_367_string, var_368_string); // 0x96b Func
	goto Label_2404; // 0x96d Jump
	
Label_2177:
	var_369_string = ""; // 0x881 PushV
	var_369_string = "Neutral"; // 0x882 MovS
	func_2415(var_119_object, var_369_string); // 0x883 NEW_2
	var_370_int = 536854; // 0x885 PushI
	SetMessage(var_370_int); // 0x886 TObjFunc
	ClearReplies(); // 0x888 TObjFunc
	var_371_int = 536855; // 0x88a PushI
	var_372_int = -1; // 0x88b PushI
	var_373_int = 38691; // 0x88c PushI
	AddReply(var_371_int, var_372_int, var_373_int); // 0x88d TObjFunc
	var_374_bool = 0; var_375_object = Obj(); // 0x88f PushV
	var_375_object = var_1_bool; // 0x890 MovT
	func_5683(var_374_bool, var_375_object); // 0x891 NEW_2
	if(var_374_bool == 0) goto Label_2201; // 0x893 JumpB
	var_376_int = 536856; // 0x894 PushI
	var_377_int = 38693; // 0x895 PushI
	var_378_int = 38692; // 0x896 PushI
	AddReply(var_376_int, var_377_int, var_378_int); // 0x897 TObjFunc
	
Label_2201:
	var_379_bool = 0; var_380_object = Obj(); // 0x899 PushV
	var_380_object = var_1_bool; // 0x89a MovT
	func_5683(var_379_bool, var_380_object); // 0x89b NEW_2
	if(var_379_bool == 0) goto Label_2211; // 0x89d JumpB
	var_381_int = 536870; // 0x89e PushI
	var_382_int = 38709; // 0x89f PushI
	var_383_int = 38708; // 0x8a0 PushI
	AddReply(var_381_int, var_382_int, var_383_int); // 0x8a1 TObjFunc
	
Label_2211:
	var_384_bool = 0; var_385_object = Obj(); // 0x8a3 PushV
	var_385_object = var_1_bool; // 0x8a4 MovT
	func_5693(var_384_bool, var_385_object); // 0x8a5 NEW_2
	if(var_384_bool == 0) goto Label_2221; // 0x8a7 JumpB
	var_386_int = 536885; // 0x8a8 PushI
	var_387_int = 38724; // 0x8a9 PushI
	var_388_int = 38723; // 0x8aa PushI
	AddReply(var_386_int, var_387_int, var_388_int); // 0x8ab TObjFunc
	
Label_2221:
	var_389_bool = 0; var_390_object = Obj(); // 0x8ad PushV
	var_390_object = var_1_bool; // 0x8ae MovT
	func_5703(var_389_bool, var_390_object); // 0x8af NEW_2
	if(var_389_bool == 0) goto Label_2231; // 0x8b1 JumpB
	var_391_int = 536904; // 0x8b2 PushI
	var_392_int = 38743; // 0x8b3 PushI
	var_393_int = 38742; // 0x8b4 PushI
	AddReply(var_391_int, var_392_int, var_393_int); // 0x8b5 TObjFunc
	
Label_2231:
	var_394_bool = 0; var_395_object = Obj(); // 0x8b7 PushV
	var_395_object = var_1_bool; // 0x8b8 MovT
	func_5713(var_394_bool, var_395_object); // 0x8b9 NEW_2
	if(var_394_bool == 0) goto Label_2241; // 0x8bb JumpB
	var_396_int = 536916; // 0x8bc PushI
	var_397_int = 38755; // 0x8bd PushI
	var_398_int = 38754; // 0x8be PushI
	AddReply(var_396_int, var_397_int, var_398_int); // 0x8bf TObjFunc
	
Label_2241:
	var_399_bool = 0; // 0x8c1 PushV
	var_399_bool = 0; // 0x8c2 MovB
	var_400_bool = 0; var_401_object = Obj(); // 0x8c3 PushV
	var_401_object = var_1_bool; // 0x8c4 MovT
	func_5733(var_400_bool, var_401_object); // 0x8c5 NEW_2
	if(var_400_bool == 0) goto Label_2254; // 0x8c7 JumpB
	var_402_bool = 0; var_403_object = Obj(); // 0x8c8 PushV
	var_403_object = var_1_bool; // 0x8c9 MovT
	func_5659(var_403_object); // 0x8ca NEW_2
	if(var_402_bool == 0) goto Label_2254; // 0x8cc JumpB
	var_399_bool = 1; // 0x8cd MovB
	
Label_2254:
	if(var_399_bool == 0) goto Label_2260; // 0x8ce JumpB
	var_408_int = 536931; // 0x8cf PushI
	var_409_int = 38770; // 0x8d0 PushI
	var_410_int = 38769; // 0x8d1 PushI
	AddReply(var_408_int, var_409_int, var_410_int); // 0x8d2 TObjFunc
	
Label_2260:
	var_411_bool = 0; var_412_object = Obj(); // 0x8d4 PushV
	var_412_object = var_1_bool; // 0x8d5 MovT
	func_5753(var_411_bool, var_412_object); // 0x8d6 NEW_2
	if(var_411_bool == 0) goto Label_2270; // 0x8d8 JumpB
	var_413_int = 536943; // 0x8d9 PushI
	var_414_int = 38782; // 0x8da PushI
	var_415_int = 38781; // 0x8db PushI
	AddReply(var_413_int, var_414_int, var_415_int); // 0x8dc TObjFunc
	
Label_2270:
	var_416_bool = 0; var_417_object = Obj(); // 0x8de PushV
	var_417_object = var_1_bool; // 0x8df MovT
	func_5763(var_416_bool, var_417_object); // 0x8e0 NEW_2
	if(var_416_bool == 0) goto Label_2280; // 0x8e2 JumpB
	var_418_int = 536961; // 0x8e3 PushI
	var_419_int = 38800; // 0x8e4 PushI
	var_420_int = 38799; // 0x8e5 PushI
	AddReply(var_418_int, var_419_int, var_420_int); // 0x8e6 TObjFunc
	
Label_2280:
	var_421_bool = 0; var_422_object = Obj(); // 0x8e8 PushV
	var_422_object = var_1_bool; // 0x8e9 MovT
	func_5773(var_421_bool, var_422_object); // 0x8ea NEW_2
	if(var_421_bool == 0) goto Label_2290; // 0x8ec JumpB
	var_423_int = 536978; // 0x8ed PushI
	var_424_int = 38817; // 0x8ee PushI
	var_425_int = 38816; // 0x8ef PushI
	AddReply(var_423_int, var_424_int, var_425_int); // 0x8f0 TObjFunc
	
Label_2290:
	var_426_bool = 0; // 0x8f2 PushV
	var_426_bool = 0; // 0x8f3 MovB
	var_427_bool = 0; var_428_object = Obj(); // 0x8f4 PushV
	var_428_object = var_1_bool; // 0x8f5 MovT
	func_5783(var_427_bool, var_428_object); // 0x8f6 NEW_2
	if(var_427_bool == 0) goto Label_2303; // 0x8f8 JumpB
	var_429_bool = 0; var_430_object = Obj(); // 0x8f9 PushV
	var_430_object = var_1_bool; // 0x8fa MovT
	func_5659(var_430_object); // 0x8fb NEW_2
	if(var_429_bool == 0) goto Label_2303; // 0x8fd JumpB
	var_426_bool = 1; // 0x8fe MovB
	
Label_2303:
	if(var_426_bool == 0) goto Label_2309; // 0x8ff JumpB
	var_431_int = 536993; // 0x900 PushI
	var_432_int = 38832; // 0x901 PushI
	var_433_int = 38831; // 0x902 PushI
	AddReply(var_431_int, var_432_int, var_433_int); // 0x903 TObjFunc
	
Label_2309:
	var_434_bool = 0; // 0x905 PushV
	var_434_bool = 0; // 0x906 MovB
	var_435_bool = 0; var_436_object = Obj(); // 0x907 PushV
	var_436_object = var_1_bool; // 0x908 MovT
	func_5683(var_435_bool, var_436_object); // 0x909 NEW_2
	if(var_435_bool == 0) goto Label_2322; // 0x90b JumpB
	var_437_bool = 0; var_438_object = Obj(); // 0x90c PushV
	var_438_object = var_1_bool; // 0x90d MovT
	func_5659(var_438_object); // 0x90e NEW_2
	if(var_437_bool == 0) goto Label_2322; // 0x910 JumpB
	var_434_bool = 1; // 0x911 MovB
	
Label_2322:
	if(var_434_bool == 0) goto Label_2328; // 0x912 JumpB
	var_439_int = 537006; // 0x913 PushI
	var_440_int = 38846; // 0x914 PushI
	var_441_int = 38845; // 0x915 PushI
	AddReply(var_439_int, var_440_int, var_441_int); // 0x916 TObjFunc
	
Label_2328:
	var_442_bool = 0; // 0x918 PushV
	var_442_bool = 0; // 0x919 MovB
	var_443_bool = 0; var_444_object = Obj(); // 0x91a PushV
	var_444_object = var_1_bool; // 0x91b MovT
	func_5683(var_443_bool, var_444_object); // 0x91c NEW_2
	if(var_443_bool == 0) goto Label_2341; // 0x91e JumpB
	var_445_bool = 0; var_446_object = Obj(); // 0x91f PushV
	var_446_object = var_1_bool; // 0x920 MovT
	func_5659(var_446_object); // 0x921 NEW_2
	if(var_445_bool == 0) goto Label_2341; // 0x923 JumpB
	var_442_bool = 1; // 0x924 MovB
	
Label_2341:
	if(var_442_bool == 0) goto Label_2347; // 0x925 JumpB
	var_447_int = 537017; // 0x926 PushI
	var_448_int = 38857; // 0x927 PushI
	var_449_int = 38856; // 0x928 PushI
	AddReply(var_447_int, var_448_int, var_449_int); // 0x929 TObjFunc
	
Label_2347:
	var_450_bool = 0; var_451_object = Obj(); // 0x92b PushV
	var_451_object = var_1_bool; // 0x92c MovT
	func_5683(var_450_bool, var_451_object); // 0x92d NEW_2
	if(var_450_bool == 0) goto Label_2357; // 0x92f JumpB
	var_452_int = 537025; // 0x930 PushI
	var_453_int = 38865; // 0x931 PushI
	var_454_int = 38864; // 0x932 PushI
	AddReply(var_452_int, var_453_int, var_454_int); // 0x933 TObjFunc
	
Label_2357:
	var_455_bool = 0; var_456_object = Obj(); // 0x935 PushV
	var_456_object = var_1_bool; // 0x936 MovT
	func_5683(var_455_bool, var_456_object); // 0x937 NEW_2
	if(var_455_bool == 0) goto Label_2367; // 0x939 JumpB
	var_457_int = 537035; // 0x93a PushI
	var_458_int = 38875; // 0x93b PushI
	var_459_int = 38874; // 0x93c PushI
	AddReply(var_457_int, var_458_int, var_459_int); // 0x93d TObjFunc
	
Label_2367:
	var_460_bool = 0; var_461_object = Obj(); // 0x93f PushV
	var_461_object = var_1_bool; // 0x940 MovT
	func_5683(var_460_bool, var_461_object); // 0x941 NEW_2
	if(var_460_bool == 0) goto Label_2377; // 0x943 JumpB
	var_462_int = 537044; // 0x944 PushI
	var_463_int = 38884; // 0x945 PushI
	var_464_int = 38883; // 0x946 PushI
	AddReply(var_462_int, var_463_int, var_464_int); // 0x947 TObjFunc
	
Label_2377:
	var_465_int = 537050; // 0x949 PushI
	var_466_int = -1; // 0x94a PushI
	var_467_int = 38889; // 0x94b PushI
	AddReply(var_465_int, var_466_int, var_467_int); // 0x94c TObjFunc
	goto Label_2385; // 0x94e Jump
}


func_5904(var_40_int)
{
	var_41_int = 0; var_42_int = 0; // 0x1710 PushV
	var_43_string = "branch"; // 0x1711 PushS
	GetVariable(var_43_string, var_42_int); // 0x1712 Func
	var_40_int = var_42_int; // 0x1714 Mov
	return 2; // 0x1715 Return
}


func_276(var_2_bool, var_23_object)
{
	var_24_bool = 0; var_25_int = 0; var_26_bool = 0; var_27_int = 0; // 0x114 PushV
	var_28_bool = 0; var_29_object = Obj(); // 0x115 PushV
	var_29_object = var_23_object; // 0x116 Mov
	func_5029(var_28_bool, var_29_object); // 0x117 NEW_2
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
	func_5527(var_66_object); // 0x126 NEW_2
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
	func_5536(var_73_object); // 0x134 NEW_2
	var_2_bool = 1; // 0x136 TMovB
	var_138_int = 110; // 0x137 PushI
	var_139_float = 10.0; // 0x138 PushF
	SetTimer(var_138_int, var_139_float); // 0x139 Func
	
Label_315:
	return 4; // 0x13b Return
}


func_5910(var_39_object)
{
	var_40_int = 0; // 0x1717 PushV
	func_5904(var_40_int); // 0x1718 NEW_2
	var_44_int = 1; // 0x171a PushI
	var_45_bool = var_40_int == var_44_int; // 0x171b Eq
	if(var_45_bool == 0) goto Label_5920; // 0x171c JumpB
	WorkWithCorpse(var_39_object); // 0x171d Func
	goto Label_5922; // 0x171f Jump
	
Label_5922:
	return 0; // 0x1722 Return
	
Label_5920:
	Barter(var_39_object); // 0x1720 Func
}


func_5407(var_60_object, var_61_string)
{
	var_62_string = "unholster"; // 0x1520 PushS
	var_63_bool = var_61_string == var_62_string; // 0x1521 Eq
	if(var_63_bool == 0) goto Label_5416; // 0x1522 JumpB
	var_64_object = Obj(); // 0x1523 PushV
	var_64_object = var_60_object; // 0x1524 Mov
	func_5605(var_64_object); // 0x1525 NEW_2
	goto Label_5431; // 0x1527 Jump
	
Label_5431:
	return 0; // 0x1537 Return
	
Label_5416:
	var_137_string = "player_shot"; // 0x1528 PushS
	var_138_bool = var_61_string == var_137_string; // 0x1529 Eq
	if(var_138_bool == 0) goto Label_5424; // 0x152a JumpB
	var_139_object = Obj(); // 0x152b PushV
	var_139_object = var_60_object; // 0x152c Mov
	func_5628(var_139_object); // 0x152d NEW_2
	goto Label_5431; // 0x152f Jump
	
Label_5424:
	var_205_string = "battle"; // 0x1530 PushS
	var_206_bool = var_61_string == var_205_string; // 0x1531 Eq
	if(var_206_bool == 0) goto Label_5431; // 0x1532 JumpB
	var_207_object = Obj(); // 0x1533 PushV
	var_207_object = var_60_object; // 0x1534 Mov
	func_5643(var_207_object); // 0x1535 NEW_2
}


func_1311(var_2_bool)
{
	Stop(); // 0x51f Func
	var_23_int = 120; // 0x521 PushI
	KillTimer(var_23_int); // 0x522 Func
	var_2_bool = 1; // 0x524 TMovB
	return 0; // 0x525 Return
}


func_5923(var_24_bool)
{
	var_25_int = 0; var_26_bool = 0; var_27_int = 0; var_28_int = 0; var_29_bool = 0; var_30_int = 0; // 0x1723 PushV
	var_31_int = 0; // 0x1724 PushI
	ClearSubContainer(var_31_int); // 0x1725 Func
	var_32_int = 0; // 0x1727 PushV
	func_5358(var_32_int); // 0x1728 NEW_2
	var_30_int = var_32_int; // 0x1729 Mov
	var_38_bool = var_24_bool; // 0x172b Push
	if(var_38_bool == 0) goto Label_5977; // 0x172c JumpB
	var_39_string = ""; var_40_int = 0; var_41_int = 0; var_42_int = 0; // 0x172d PushV
	var_39_string = "alpha_pills"; // 0x172e MovS
	var_40_int = 1; // 0x172f MovI
	var_41_int = 2; // 0x1730 MovI
	var_42_int = 4; // 0x1731 MovI
	func_5273(var_39_string, var_40_int, var_41_int, var_42_int); // 0x1732 NEW_2
	var_55_string = ""; var_56_int = 0; var_57_int = 0; var_58_int = 0; // 0x1734 PushV
	var_55_string = "meradorm"; // 0x1735 MovS
	var_56_int = 2; // 0x1736 MovI
	var_57_int = 3; // 0x1737 MovI
	var_58_int = 3; // 0x1738 MovI
	func_5273(var_55_string, var_56_int, var_57_int, var_58_int); // 0x1739 NEW_2
	var_59_int = 3; // 0x173b PushI
	var_60_bool = var_30_int >= var_59_int; // 0x173c GE
	if(var_60_bool == 0) goto Label_5956; // 0x173d JumpB
	var_61_string = ""; var_62_int = 0; var_63_int = 0; // 0x173e PushV
	var_61_string = "beta_pills"; // 0x173f MovS
	var_62_int = 1; // 0x1740 MovI
	var_63_int = 4; // 0x1741 MovI
	func_5262(var_61_string, var_62_int, var_63_int); // 0x1742 NEW_2
	
Label_5956:
	var_70_int = 8; // 0x1744 PushI
	var_71_bool = var_30_int >= var_70_int; // 0x1745 GE
	if(var_71_bool == 0) goto Label_5967; // 0x1746 JumpB
	var_72_string = ""; var_73_int = 0; var_74_int = 0; var_75_int = 0; // 0x1747 PushV
	var_72_string = "monomicin"; // 0x1748 MovS
	var_73_int = 1; // 0x1749 MovI
	var_74_int = 2; // 0x174a MovI
	var_75_int = 2; // 0x174b MovI
	func_5273(var_72_string, var_73_int, var_74_int, var_75_int); // 0x174c NEW_2
	goto Label_5976; // 0x174e Jump
	
Label_5976:
	goto Label_6022; // 0x1758 Jump
	
Label_6022:
	return 6; // 0x1786 Return
	
Label_5967:
	var_76_int = 4; // 0x174f PushI
	var_77_bool = var_30_int >= var_76_int; // 0x1750 GE
	if(var_77_bool == 0) goto Label_5976; // 0x1751 JumpB
	var_78_string = ""; var_79_int = 0; var_80_int = 0; // 0x1752 PushV
	var_78_string = "monomicin"; // 0x1753 MovS
	var_79_int = 1; // 0x1754 MovI
	var_80_int = 2; // 0x1755 MovI
	func_5262(var_78_string, var_79_int, var_80_int); // 0x1756 NEW_2
	
Label_5977:
	var_81_string = ""; var_82_int = 0; var_83_int = 0; // 0x1759 PushV
	var_81_string = "lockpick"; // 0x175a MovS
	var_82_int = 1; // 0x175b MovI
	var_83_int = 4; // 0x175c MovI
	func_5262(var_81_string, var_82_int, var_83_int); // 0x175d NEW_2
	var_84_string = ""; var_85_int = 0; var_86_int = 0; // 0x175f PushV
	var_84_string = "rifle_ammo"; // 0x1760 MovS
	var_85_int = 1; // 0x1761 MovI
	var_86_int = 2; // 0x1762 MovI
	func_5262(var_84_string, var_85_int, var_86_int); // 0x1763 NEW_2
	var_87_string = ""; var_88_int = 0; var_89_int = 0; // 0x1765 PushV
	var_87_string = "revolver_ammo"; // 0x1766 MovS
	var_88_int = 1; // 0x1767 MovI
	var_89_int = 2; // 0x1768 MovI
	func_5262(var_87_string, var_88_int, var_89_int); // 0x1769 NEW_2
	var_90_string = ""; var_91_int = 0; var_92_int = 0; var_93_int = 0; // 0x176b PushV
	var_90_string = "samopal_ammo"; // 0x176c MovS
	var_91_int = 1; // 0x176d MovI
	var_92_int = 2; // 0x176e MovI
	var_93_int = 2; // 0x176f MovI
	func_5273(var_90_string, var_91_int, var_92_int, var_93_int); // 0x1770 NEW_2
	var_94_int = 8; // 0x1772 PushI
	var_95_bool = var_30_int >= var_94_int; // 0x1773 GE
	if(var_95_bool == 0) goto Label_6013; // 0x1774 JumpB
	var_96_string = ""; var_97_int = 0; var_98_int = 0; var_99_int = 0; // 0x1775 PushV
	var_96_string = "monomicin"; // 0x1776 MovS
	var_97_int = 1; // 0x1777 MovI
	var_98_int = 2; // 0x1778 MovI
	var_99_int = 2; // 0x1779 MovI
	func_5273(var_96_string, var_97_int, var_98_int, var_99_int); // 0x177a NEW_2
	goto Label_6022; // 0x177c Jump
	
Label_6013:
	var_100_int = 4; // 0x177d PushI
	var_101_bool = var_30_int >= var_100_int; // 0x177e GE
	if(var_101_bool == 0) goto Label_6022; // 0x177f JumpB
	var_102_string = ""; var_103_int = 0; var_104_int = 0; // 0x1780 PushV
	var_102_string = "monomicin"; // 0x1781 MovS
	var_103_int = 1; // 0x1782 MovI
	var_104_int = 2; // 0x1783 MovI
	func_5262(var_102_string, var_103_int, var_104_int); // 0x1784 NEW_2
}


func_1327(var_0_bool, var_74_bool)
{
	var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0); // 0x52f PushV
	GetDirection(var_77_cvector); // 0x530 Func
	var_79_cvector = CVector(0,0,0); var_80_object = Obj(); // 0x532 PushV
	var_80_object = var_0_bool; // 0x533 MovT
	func_4956(var_80_object); // 0x534 NEW_2
	var_78_cvector = var_79_cvector; // 0x535 Mov
	var_85_float = 0; var_86_cvector = CVector(0,0,0); var_87_cvector = CVector(0,0,0); // 0x537 PushV
	var_86_cvector = var_77_cvector; // 0x538 Mov
	var_87_cvector = var_78_cvector; // 0x539 Mov
	func_5309(var_85_float, var_86_cvector, var_87_cvector); // 0x53a NEW_2
	var_93_float = -0.34202; // 0x53c PushF
	var_74_bool = var_85_float >= var_93_float; // 0x53d GE2
	return 4; // 0x53e Return
}


func_5432(var_23_bool, var_24_object)
{
	var_25_bool = 0; var_26_bool = 0; // 0x1538 PushV
	var_27_bool = 0; // 0x1539 PushV
	var_27_bool = 0; // 0x153a MovB
	var_28_bool = 0; var_29_object = Obj(); // 0x153b PushV
	var_29_object = var_24_object; // 0x153c Mov
	func_5600(var_28_bool, var_29_object); // 0x153d NEW_2
	if(var_28_bool == 0) goto Label_5446; // 0x153f JumpB
	var_32_bool = 0; var_33_object = Obj(); // 0x1540 PushV
	var_33_object = var_24_object; // 0x1541 Mov
	func_4971(var_32_bool, var_33_object); // 0x1542 NEW_2
	if(var_32_bool == 0) goto Label_5446; // 0x1544 JumpB
	var_27_bool = 1; // 0x1545 MovB
	
Label_5446:
	if(var_27_bool == 0) goto Label_5453; // 0x1546 JumpB
	IsWeaponHolstered(var_26_bool); // 0x1547 ObjFunc
	var_36_bool = var_26_bool == 0; // 0x1549 Not
	if(var_36_bool == 0) goto Label_5453; // 0x154a JumpB
	var_23_bool = 1; // 0x154b MovB
	return 2; // 0x154c Return
	
Label_5453:
	var_23_bool = 0; // 0x154d MovB
	return 2; // 0x154e Return
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


func_1350(var_36_cvector, var_37_float)
{
	var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_float = 0; var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); var_49_float = 0; // 0x546 PushV
	GetPosition(var_44_cvector); // 0x547 Func
	GetPosition(var_45_cvector); // 0x549 TObjFunc
	GetDirection(var_46_cvector); // 0x54b Func
	var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); // 0x54d PushV
	var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); // 0x54e PushV
	var_53_cvector = var_44_cvector - var_45_cvector; // 0x54f Sub2
	func_5294(var_52_cvector, var_53_cvector); // 0x550 NEW_2
	var_59_float = 0.75; // 0x552 PushF
	var_60_float = var_46_cvector * var_59_float; // 0x553 Mult
	var_51_cvector = var_52_cvector + var_60_float; // 0x554 Add2
	func_5294(var_50_cvector, var_51_cvector); // 0x555 NEW_2
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


func_5455(var_39_object)
{
	var_40_object = Obj(); // 0x1550 PushV
	var_40_object = var_39_object; // 0x1551 Mov
	func_5605(var_40_object); // 0x1552 NEW_2
	return 0; // 0x1554 Return
}


func_5461(var_25_object)
{
	var_26_bool = 0; var_27_object = Obj(); // 0x1556 PushV
	var_27_object = var_25_object; // 0x1557 Mov
	func_4971(var_26_bool, var_27_object); // 0x1558 NEW_2
	if(var_26_bool == 0) goto Label_5473; // 0x155a JumpB
	var_30_object = Obj(); // 0x155b PushV
	func_5288(var_30_object); // 0x155c NEW_2
	var_33_float = -0.05; // 0x155e PushF
	ReportReputationChange(var_25_object, var_30_object, var_33_float); // 0x155f Func
	
Label_5473:
	return 0; // 0x1561 Return
}


func_4951(var_94_cvector)
{
	var_95_cvector = CVector(0,0,0); var_96_cvector = CVector(0,0,0); // 0x1357 PushV
	GetPosition(var_96_cvector); // 0x1358 Func
	var_94_cvector = var_96_cvector; // 0x135a Mov
	return 2; // 0x135b Return
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


func_4956(var_79_cvector)
{
	var_81_cvector = CVector(0,0,0); var_82_cvector = CVector(0,0,0); var_83_cvector = CVector(0,0,0); var_84_cvector = CVector(0,0,0); // 0x135c PushV
	GetPosition(var_83_cvector); // 0x135d Func
	GetPosition(var_84_cvector); // 0x135f ObjFunc
	var_79_cvector = var_84_cvector - var_83_cvector; // 0x1361 Sub2
	return 4; // 0x1362 Return
}


func_5474(var_23_bool, var_24_string)
{
	var_25_object = Obj(); var_26_object = Obj(); // 0x1562 PushV
	var_27_string = "heal"; // 0x1563 PushS
	var_28_bool = var_24_string == var_27_string; // 0x1564 Eq
	if(var_28_bool == 0) goto Label_5488; // 0x1565 JumpB
	var_29_string = "player"; // 0x1566 PushS
	FindActor(var_26_object, var_29_string); // 0x1567 Func
	var_30_bool = 0; var_31_object = Obj(); // 0x1569 PushV
	var_31_object = var_26_object; // 0x156a Mov
	func_5649(var_31_object); // 0x156b NEW_2
	var_23_bool = var_30_bool; // 0x156c Mov
	return 2; // 0x156e Return
	
Label_5488:
	var_23_bool = 0; // 0x1570 MovB
	return 2; // 0x1571 Return
}


func_4963(var_42_float)
{
	var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); // 0x1363 PushV
	GetPosition(var_47_cvector); // 0x1364 Func
	GetPosition(var_48_cvector); // 0x1366 ObjFunc
	var_49_cvector = var_48_cvector - var_47_cvector; // 0x1368 Sub2
	var_42_float = var_49_cvector | var_49_cvector; // 0x1369 Or2
	return 6; // 0x136a Return
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
	func_4951(var_97_cvector); // 0x586 NEW_2
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
	func_4951(var_109_cvector); // 0x5a1 NEW_2
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


func_4971(var_32_bool, var_33_object)
{
	var_34_bool = 0; var_35_bool = 0; // 0x136b PushV
	IsPlayerActor(var_33_object, var_35_bool); // 0x136c Func
	var_32_bool = var_35_bool; // 0x136e Mov
	return 2; // 0x136f Return
}


func_2415(var_2_bool, var_65_string)
{
	var_66_bool = 0; // 0x970 PushV
	func_6031(var_66_bool); // 0x971 NEW_2
	var_67_bool = var_66_bool == 0; // 0x973 Not
	if(var_67_bool == 0) goto Label_2422; // 0x974 JumpB
	return 0; // 0x975 Return
	
Label_2422:
	var_68_bool = var_65_string == var_2_bool; // 0x976 Eq
	if(var_68_bool == 0) goto Label_2425; // 0x977 JumpB
	return 0; // 0x978 Return
	
Label_2425:
	var_69_string = ""; var_70_bool = 0; // 0x979 PushV
	var_69_string = var_65_string; // 0x97a Mov
	var_71_string = ""; // 0x97b PushS
	var_72_bool = var_65_string == var_71_string; // 0x97c Eq
	if(var_72_bool == 0) goto Label_2432; // 0x97d JumpB
	var_70_bool = 0; // 0x97e MovB
	goto Label_2433; // 0x97f Jump
	
Label_2433:
	func_5229(var_69_string, var_70_bool); // 0x981 NEW_2
	var_2_bool = var_65_string; // 0x983 TMov
	return 0; // 0x984 Return
	
Label_2432:
	var_70_bool = 1; // 0x980 MovB
}


func_4976(var_51_bool, var_52_object, var_53_string)
{
	var_54_bool = 0; var_55_bool = 0; // 0x1370 PushV
	var_56_string = "HasProperty"; // 0x1371 PushS
	var_57_int = 2; // 0x1372 PushI
	var_58_bool = IsFuncExist(var_52_object, var_56_string, var_57_int); // 0x1373 FuncExist
	var_59_bool = var_58_bool == 0; // 0x1374 Not
	if(var_59_bool == 0) goto Label_4984; // 0x1375 JumpB
	var_51_bool = 0; // 0x1376 MovB
	return 2; // 0x1377 Return
	
Label_4984:
	HasProperty(var_53_string, var_55_bool); // 0x1378 ObjFunc
	var_51_bool = var_55_bool; // 0x137a Mov
	return 2; // 0x137b Return
}


func_5490(var_34_string)
{
	var_35_object = Obj(); var_36_object = Obj(); // 0x1572 PushV
	var_37_string = "heal"; // 0x1573 PushS
	var_38_bool = var_34_string == var_37_string; // 0x1574 Eq
	if(var_38_bool == 0) goto Label_5502; // 0x1575 JumpB
	var_39_string = "player"; // 0x1576 PushS
	FindActor(var_36_object, var_39_string); // 0x1577 Func
	var_40_object = Obj(); // 0x1579 PushV
	var_40_object = var_36_object; // 0x157a Mov
	func_5652(); // 0x157b NEW_2
	var_36_object = 0; // 0x157d SetNull
	
Label_5502:
	return 2; // 0x157e Return
}


func_375(var_124_float)
{
	var_125_float = 0; var_126_float = 0; // 0x177 PushV
	GetCameraFarDistance(var_126_float); // 0x178 Func
	var_124_float = var_126_float; // 0x17a Mov
	return 2; // 0x17b Return
}


func_4988(var_44_bool)
{
	var_46_bool = 0; var_47_bool = 0; // 0x137c PushV
	IsDead(var_47_bool); // 0x137d ObjFunc
	var_44_bool = var_47_bool; // 0x137f Mov
	return 2; // 0x1380 Return
}


func_5503(var_158_string, var_159_int)
{
	var_160_string = ""; var_161_string = ""; // 0x157f PushV
	var_161_string = "idle"; // 0x1580 MovS
	var_162_int = var_159_int; // 0x1581 Push
	if(var_162_int == 0) goto Label_5508; // 0x1582 JumpB
	var_161_string = var_161_string + var_159_int; // 0x1583 Add2
	
Label_5508:
	var_158_string = var_161_string; // 0x1584 Mov
	return 2; // 0x1585 Return
}


func_4993(var_33_bool, var_34_object)
{
	var_35_object = Obj(); var_36_object = Obj(); var_37_object = Obj(); var_38_object = Obj(); // 0x1381 PushV
	var_39_bool = var_34_object == 0; // 0x1382 NullEq
	if(var_39_bool == 0) goto Label_4998; // 0x1383 JumpB
	var_33_bool = 0; // 0x1384 MovB
	return 4; // 0x1385 Return
	
Label_4998:
	var_40_bool = 0; // 0x1386 PushV
	var_40_bool = 0; // 0x1387 MovB
	var_41_string = "IsDead"; // 0x1388 PushS
	var_42_int = 1; // 0x1389 PushI
	var_43_bool = IsFuncExist(var_34_object, var_41_string, var_42_int); // 0x138a FuncExist
	if(var_43_bool == 0) goto Label_5010; // 0x138b JumpB
	var_44_bool = 0; var_45_object = Obj(); // 0x138c PushV
	var_45_object = var_34_object; // 0x138d Mov
	func_4988(var_45_object); // 0x138e NEW_2
	if(var_44_bool == 0) goto Label_5010; // 0x1390 JumpB
	var_40_bool = 1; // 0x1391 MovB
	
Label_5010:
	if(var_40_bool == 0) goto Label_5013; // 0x1392 JumpB
	var_33_bool = 0; // 0x1393 MovB
	return 4; // 0x1394 Return
	
Label_5013:
	GetScene(var_37_object); // 0x1395 Func
	var_48_bool = var_37_object == 0; // 0x1397 NullEq
	if(var_48_bool == 0) goto Label_5019; // 0x1398 JumpB
	var_33_bool = 0; // 0x1399 MovB
	return 4; // 0x139a Return
	
Label_5019:
	GetScene(var_38_object); // 0x139b ObjFunc
	var_49_bool = var_37_object != var_38_object; // 0x139d Neq
	if(var_49_bool == 0) goto Label_5025; // 0x139e JumpB
	var_33_bool = 0; // 0x139f MovB
	return 4; // 0x13a0 Return
	
Label_5025:
	var_33_bool = 1; // 0x13a1 MovB
	return 4; // 0x13a2 Return
}


func_387(var_0_bool, var_1_bool)
{
	var_0_bool = 1; // 0x183 TMovB
	var_1_bool = 0; // 0x184 TMovB
	Stop(); // 0x185 Func
	StopGroup0(); // 0x187 Func
	return 0; // 0x189 Return
}


func_5510(var_152_int)
{
	var_153_int = 0; var_154_bool = 0; var_155_int = 0; var_156_bool = 0; // 0x1586 PushV
	var_155_int = 0; // 0x1587 MovI
	
Label_5512:
	var_157_string = "all"; // 0x1588 PushS
	var_158_string = ""; var_159_int = 0; // 0x1589 PushV
	var_159_int = var_155_int; // 0x158a Mov
	func_5503(var_158_string, var_159_int); // 0x158b NEW_2
	HasAnimation(var_156_bool, var_157_string, var_158_string); // 0x158d Func
	var_163_bool = var_156_bool == 0; // 0x158f Not
	if(var_163_bool == 0) goto Label_5522; // 0x1590 JumpB
	goto Label_5525; // 0x1591 Jump
	
Label_5525:
	var_152_int = var_155_int; // 0x1595 Mov
	return 4; // 0x1596 Return
	
Label_5522:
	var_164_int = 1; // 0x1592 PushI
	var_155_int = var_155_int + var_164_int; // 0x1593 Add2
	goto Label_5512; // 0x1594 Jump
}


func_6023(var_106_int)
{
	var_106_int = 515558; // 0x1787 MovI
	return 0; // 0x1788 Return
}


func_6025(var_105_int)
{
	var_105_int = 503343; // 0x1789 MovI
	return 0; // 0x178a Return
}


func_394(var_0_bool, var_1_bool)
{
	var_0_bool = 1; // 0x18a TMovB
	var_1_bool = 1; // 0x18b TMovB
	Stop(); // 0x18c Func
	StopGroup0(); // 0x18e Func
	return 0; // 0x190 Return
}


func_6027(var_107_string)
{
	var_107_string = "ui/NPC_Citizen3.png"; // 0x178b MovS
	return 0; // 0x178c Return
}


func_6029(var_108_string)
{
	var_108_string = "ui/NPC_Citizen3_b.png"; // 0x178d MovS
	return 0; // 0x178e Return
}


func_6031(var_25_bool)
{
	var_25_bool = 0; // 0x178f MovB
	return 0; // 0x1790 Return
}


func_6033()
{
	var_23_bool = GlobalVars[0]; // 0x1791 PushGE
	var_23_bool = 0; // 0x1792 MovB
	GlobalVars[0] = var_23_bool; // 0x1793 PopGE
	var_24_bool = 0; // 0x1794 PushV
	var_24_bool = 1; // 0x1795 MovB
	func_5923(var_24_bool); // 0x1796 NEW_2
	return 0; // 0x1798 Return
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


func_5527(var_65_int)
{
	var_67_bool = 0; // 0x1598 PushV
	func_6081(var_67_bool); // 0x1599 NEW_2
	if(var_67_bool == 0) goto Label_5534; // 0x159b JumpB
	var_65_int = 2; // 0x159c MovI
	goto Label_5535; // 0x159d Jump
	
Label_5535:
	return 0; // 0x159f Return
	
Label_5534:
	var_65_int = 0; // 0x159e MovI
}


func_6041(var_34_object, var_49_object)
{
	var_35_bool = 0; var_36_bool = 0; // 0x1799 PushV
	var_37_bool = GlobalVars[0]; // 0x179a PushGE
	if(var_37_bool == 0) goto Label_6054; // 0x179b JumpB
	IsOverrideActive(var_36_bool); // 0x179c Func
	var_38_bool = var_36_bool == 0; // 0x179e Not
	if(var_38_bool == 0) goto Label_6052; // 0x179f JumpB
	var_39_object = Obj(); // 0x17a0 PushV
	var_39_object = var_34_object; // 0x17a1 Mov
	func_5910(var_39_object); // 0x17a2 NEW_2
	
Label_6052:
	return 2; // 0x17a4 Return
	
Label_6054:
	var_46_int = 1000; // 0x17a6 PushI
	var_47_int = 0; var_48_object = Obj(); // 0x17a7 PushV
	var_48_object = var_34_object; // 0x17a8 Mov
	TaskCall(8); // 0x17a9 TaskCall
	func_1731(var_49_object, var_47_int, var_48_object); // 0x17aa NEW_2
	TaskReturn(); // 0x17ab TaskReturn
	var_476_bool = var_46_int == var_49_object; // 0x17ad Eq
	if(var_476_bool == 0) goto Label_6080; // 0x17ae JumpB
	var_477_bool = 0; var_478_object = Obj(); // 0x17af PushV
	var_478_object = var_34_object; // 0x17b0 Mov
	func_5154(var_477_bool, var_478_object); // 0x17b1 NEW_2
	var_508_bool = var_477_bool == 0; // 0x17b3 Not
	if(var_508_bool == 0) goto Label_6070; // 0x17b4 JumpB
	return 2; // 0x17b5 Return
	
Label_6070:
	var_509_object = Obj(); // 0x17b6 PushV
	var_509_object = var_34_object; // 0x17b7 Mov
	TaskCall(0); // 0x17b8 TaskCall
	func_0(var_509_object); // 0x17b9 NEW_2
	TaskReturn(); // 0x17ba TaskReturn
	var_516_object = Obj(); // 0x17bc PushV
	var_516_object = var_34_object; // 0x17bd Mov
	func_5209(); // 0x17be NEW_2
	
Label_6080:
	return 2; // 0x17c0 Return
}


func_5536(var_73_object)
{
	var_74_object = Obj(); // 0x15a1 PushV
	var_74_object = var_73_object; // 0x15a2 Mov
	TaskCall(3); // 0x15a3 TaskCall
	func_659(var_75_object, var_74_object); // 0x15a4 NEW_2
	TaskReturn(); // 0x15a5 TaskReturn
	return 0; // 0x15a7 Return
}


func_5029(var_29_bool, var_30_object)
{
	var_31_int = 0; var_32_int = 0; // 0x13a5 PushV
	var_33_bool = 0; var_34_object = Obj(); // 0x13a6 PushV
	var_34_object = var_30_object; // 0x13a7 Mov
	func_4993(var_33_bool, var_34_object); // 0x13a8 NEW_2
	var_50_bool = var_33_bool == 0; // 0x13aa Not
	if(var_50_bool == 0) goto Label_5038; // 0x13ab JumpB
	var_29_bool = 0; // 0x13ac MovB
	return 2; // 0x13ad Return
	
Label_5038:
	var_51_bool = 0; var_52_object = Obj(); var_53_string = ""; // 0x13ae PushV
	var_52_object = var_30_object; // 0x13af Mov
	var_53_string = "noaccess"; // 0x13b0 MovS
	func_4976(var_51_bool, var_52_object, var_53_string); // 0x13b1 NEW_2
	var_60_bool = var_51_bool == 0; // 0x13b3 Not
	if(var_60_bool == 0) goto Label_5047; // 0x13b4 JumpB
	var_29_bool = 1; // 0x13b5 MovB
	return 2; // 0x13b6 Return
	
Label_5047:
	var_61_string = "noaccess"; // 0x13b7 PushS
	GetProperty(var_61_string, var_32_int); // 0x13b8 ObjFunc
	var_62_int = 0; // 0x13ba PushI
	var_29_bool = var_32_int == var_62_int; // 0x13bb Eq2
	return 2; // 0x13bc Return
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


func_5544(var_34_int, var_35_object)
{
	var_36_bool = 0; var_37_object = Obj(); // 0x15a9 PushV
	var_37_object = var_35_object; // 0x15aa Mov
	func_5029(var_36_bool, var_37_object); // 0x15ab NEW_2
	if(var_36_bool == 0) goto Label_5552; // 0x15ad JumpB
	var_34_int = 2; // 0x15ae MovI
	goto Label_5553; // 0x15af Jump
	
Label_5553:
	return 0; // 0x15b1 Return
	
Label_5552:
	var_34_int = 0; // 0x15b0 MovI
}


func_5554(var_76_object)
{
	var_77_object = Obj(); // 0x15b3 PushV
	var_77_object = var_76_object; // 0x15b4 Mov
	TaskCall(4); // 0x15b5 TaskCall
	func_934(var_77_object); // 0x15b6 NEW_2
	TaskReturn(); // 0x15b7 TaskReturn
	return 0; // 0x15b9 Return
}


func_5562(var_31_int, var_32_object)
{
	var_34_bool = 0; var_35_object = Obj(); // 0x15bb PushV
	var_35_object = var_32_object; // 0x15bc Mov
	func_5029(var_34_bool, var_35_object); // 0x15bd NEW_2
	if(var_34_bool == 0) goto Label_5570; // 0x15bf JumpB
	var_31_int = 2; // 0x15c0 MovI
	goto Label_5571; // 0x15c1 Jump
	
Label_5571:
	return 0; // 0x15c3 Return
	
Label_5570:
	var_31_int = 0; // 0x15c2 MovI
}


func_5053()
{
	var_99_cvector = CVector(0,0,0); var_100_cvector = CVector(0,0,0); var_101_cvector = CVector(0,0,0); var_102_cvector = CVector(0,0,0); var_103_cvector = CVector(0,0,0); var_104_cvector = CVector(0,0,0); // 0x13bd PushV
	GetPosition(var_102_cvector); // 0x13be ObjFunc
	GetPosition(var_103_cvector); // 0x13c0 Func
	var_104_cvector = var_102_cvector - var_103_cvector; // 0x13c2 Sub2
	var_105_float = GetByIndex(var_104_cvector, 0); // 0x13c3 PushE
	var_106_float = GetByIndex(var_104_cvector, 2); // 0x13c4 PushE
	RotateAsync(var_105_float, var_106_float); // 0x13c5 Func
	return 6; // 0x13c7 Return
}


func_6081(var_67_bool)
{
	var_67_bool = 0; // 0x17c1 MovB
	return 0; // 0x17c2 Return
}


func_6083(var_27_bool)
{
	var_27_bool = 0; // 0x17c4 MovB
	return 0; // 0x17c5 Return
}


func_5572(var_74_object)
{
	var_75_object = Obj(); // 0x15c5 PushV
	var_75_object = var_74_object; // 0x15c6 Mov
	TaskCall(5); // 0x15c7 TaskCall
	func_1186(var_76_object, var_77_cvector, var_78_bool, var_75_object); // 0x15c8 NEW_2
	TaskReturn(); // 0x15c9 TaskReturn
	return 0; // 0x15cb Return
}


func_5064(var_105_bool)
{
	var_106_bool = 0; var_107_bool = 0; // 0x13c8 PushV
	IsLoaded(var_107_bool); // 0x13c9 Func
	var_105_bool = var_107_bool; // 0x13cb Mov
	return 2; // 0x13cc Return
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
	func_5294(var_52_cvector, var_53_cvector); // 0x3d3 NEW_2
	var_59_float = 0.75; // 0x3d5 PushF
	var_60_float = var_46_cvector * var_59_float; // 0x3d6 Mult
	var_51_cvector = var_52_cvector + var_60_float; // 0x3d7 Add2
	func_5294(var_50_cvector, var_51_cvector); // 0x3d8 NEW_2
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


func_5580(var_25_int)
{
	var_25_int = 0; // 0x15cd MovI
	return 0; // 0x15ce Return
}


func_5069(var_58_bool, var_60_float)
{
	var_61_float = 0; var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); var_66_cvector = CVector(0,0,0); var_67_cvector = CVector(0,0,0); var_68_bool = 0; var_69_bool = 0; var_70_float = 0; var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); var_73_cvector = CVector(0,0,0); var_74_cvector = CVector(0,0,0); var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0); var_77_bool = 0; var_78_bool = 0; // 0x13cd PushV
	GetPosition(var_71_cvector); // 0x13ce ObjFunc
	GetEyesHeight(var_70_float); // 0x13d0 ObjFunc
	var_79_float = GetByIndex(var_71_cvector, 1); // 0x13d2 PushE
	var_79_float = var_79_float + var_70_float; // 0x13d3 Add2
	SetByIndex(var_71_cvector, 1) = var_79_float; // 0x13d4 PopE
	GetPosition(var_72_cvector); // 0x13d5 Func
	GetEyesHeight(var_70_float); // 0x13d7 Func
	var_80_float = GetByIndex(var_72_cvector, 1); // 0x13d9 PushE
	var_80_float = var_80_float + var_70_float; // 0x13da Add2
	SetByIndex(var_72_cvector, 1) = var_80_float; // 0x13db PopE
	var_73_cvector = var_71_cvector - var_72_cvector; // 0x13dc Sub2
	var_81_float = GetByIndex(var_73_cvector, 1); // 0x13dd PushE
	var_81_float = 0; // 0x13de MovI
	SetByIndex(var_73_cvector, 1) = var_81_float; // 0x13df PopE
	var_82_int = var_73_cvector | var_73_cvector; // 0x13e0 Or
	var_83_float = sqrt(var_82_int); // 0x13e1 Sqrt
	var_73_cvector = var_73_cvector / var_73_cvector; // 0x13e2 Div2
	var_74_cvector = -var_73_cvector; // 0x13e3 Neg2
	var_84_float = var_73_cvector * var_60_float; // 0x13e4 Mult
	var_85_cvector = CVector(0,0,0); var_86_cvector = CVector(0,0,0); // 0x13e5 PushV
	var_87_cvector = CVector(0.0, 1.0, 0.0); // 0x13e6 PushVec
	var_86_cvector = var_74_cvector ^ var_87_cvector; // 0x13e7 Xor2
	func_5294(var_85_cvector, var_86_cvector); // 0x13e8 NEW_2
	var_93_int = 25; // 0x13ea PushI
	var_94_float = var_85_cvector * var_93_int; // 0x13eb Mult
	var_95_int = var_84_float + var_94_float; // 0x13ec Add
	var_96_cvector = CVector(0.0, 10.0, 0.0); // 0x13ed PushVec
	var_75_cvector = var_95_int - var_96_cvector; // 0x13ee Sub2
	var_76_cvector = var_72_cvector + var_75_cvector; // 0x13ef Add2
	IsOverrideActive(var_77_bool); // 0x13f0 Func
	var_97_bool = var_77_bool; // 0x13f2 Push
	if(var_97_bool == 0) goto Label_5110; // 0x13f3 JumpB
	var_58_bool = 0; // 0x13f4 MovB
	return 18; // 0x13f5 Return
	
Label_5110:
	StopWorld(); // 0x13f6 Func
	CameraTransit(var_76_cvector, var_74_cvector); // 0x13f8 Func
	var_98_float = GetByIndex(var_75_cvector, 0); // 0x13fa PushE
	var_99_float = GetByIndex(var_75_cvector, 2); // 0x13fb PushE
	Rotate(var_98_float, var_99_float); // 0x13fc Func
	var_100_bool = 0; // 0x13fe PushV
	func_6031(var_100_bool); // 0x13ff NEW_2
	if(var_100_bool == 0) goto Label_5123; // 0x1401 JumpB
	goto Label_5131; // 0x1402 Jump
	
Label_5131:
	CameraWaitForPlayFinish(); // 0x140b Func
	ResumeWorld(); // 0x140d Func
	var_58_bool = 1; // 0x140f MovB
	return 18; // 0x1410 Return
	
Label_5123:
	var_101_string = "head"; // 0x1403 PushS
	HasAnimationTrack(var_78_bool, var_101_string); // 0x1404 Func
	var_102_bool = var_78_bool; // 0x1406 Push
	if(var_102_bool == 0) goto Label_5131; // 0x1407 JumpB
	var_103_string = "head"; // 0x1408 PushS
	LookAsyncCamera(var_103_string); // 0x1409 Func
}


func_5583()
{
	return 0; // 0x15d0 Return
}


func_5585(var_209_int)
{
	var_209_int = 0; // 0x15d2 MovI
	return 0; // 0x15d3 Return
}


func_5588()
{
	return 0; // 0x15d5 Return
}


func_5590(var_25_int)
{
	var_25_int = 2; // 0x15d7 MovI
	return 0; // 0x15d8 Return
}


func_5593(var_33_object)
{
	var_34_object = Obj(); // 0x15da PushV
	var_34_object = var_33_object; // 0x15db Mov
	func_6041(var_33_object, var_34_object); // 0x15dc NEW_2
	return 0; // 0x15de Return
}


func_5599()
{
	return 0; // 0x15df Return
}


func_5600(var_28_bool, var_29_object)
{
	var_30_bool = 0; var_31_bool = 0; // 0x15e0 PushV
	CanSee(var_31_bool, var_29_object); // 0x15e1 Func
	var_28_bool = var_31_bool; // 0x15e3 Mov
	return 2; // 0x15e4 Return
}


func_1505(var_2_bool)
{
	Stop(); // 0x5e1 Func
	var_23_int = 120; // 0x5e3 PushI
	KillTimer(var_23_int); // 0x5e4 Func
	var_2_bool = 1; // 0x5e6 TMovB
	return 0; // 0x5e7 Return
}


func_5605(var_40_object)
{
	var_41_object = Obj(); // 0x15e6 PushV
	var_41_object = var_40_object; // 0x15e7 Mov
	TaskCall(6); // 0x15e8 TaskCall
	func_1380(var_42_object, var_43_cvector, var_44_bool, var_41_object); // 0x15e9 NEW_2
	TaskReturn(); // 0x15ea TaskReturn
	return 0; // 0x15ec Return
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
	func_4951(var_140_cvector); // 0x409 NEW_2
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
	func_4951(var_152_cvector); // 0x424 NEW_2
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


func_5613(var_37_bool, var_38_object)
{
	var_39_bool = 0; var_40_bool = 0; // 0x15ed PushV
	CanSee(var_40_bool, var_38_object); // 0x15ee Func
	var_37_bool = 1; // 0x15f0 MovB
	var_41_bool = var_40_bool; // 0x15f1 Push
	if(var_41_bool == 0) goto Label_5627; // 0x15f2 JumpB
	var_42_float = 0; var_43_object = Obj(); // 0x15f3 PushV
	var_43_object = var_38_object; // 0x15f4 Mov
	func_4963(var_43_object); // 0x15f5 NEW_2
	var_50_int = 4000000; // 0x15f7 PushI
	var_51_bool = var_42_float <= var_50_int; // 0x15f8 LE
	if(var_51_bool == 0) goto Label_5627; // 0x15f9 JumpB
	var_37_bool = 0; // 0x15fa MovB
	
Label_5627:
	return 2; // 0x15fb Return
}


func_1521(var_0_bool, var_74_bool)
{
	var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0); // 0x5f1 PushV
	GetDirection(var_77_cvector); // 0x5f2 Func
	var_79_cvector = CVector(0,0,0); var_80_object = Obj(); // 0x5f4 PushV
	var_80_object = var_0_bool; // 0x5f5 MovT
	func_4956(var_80_object); // 0x5f6 NEW_2
	var_78_cvector = var_79_cvector; // 0x5f7 Mov
	var_85_float = 0; var_86_cvector = CVector(0,0,0); var_87_cvector = CVector(0,0,0); // 0x5f9 PushV
	var_86_cvector = var_77_cvector; // 0x5fa Mov
	var_87_cvector = var_78_cvector; // 0x5fb Mov
	func_5309(var_85_float, var_86_cvector, var_87_cvector); // 0x5fc NEW_2
	var_93_float = -0.34202; // 0x5fe PushF
	var_74_bool = var_85_float >= var_93_float; // 0x5ff GE2
	return 4; // 0x600 Return
}


func_5628(var_139_object)
{
	var_140_object = Obj(); // 0x15fd PushV
	var_140_object = var_139_object; // 0x15fe Mov
	TaskCall(7); // 0x15ff TaskCall
	func_1574(var_141_object, var_142_cvector, var_143_bool, var_140_object); // 0x1600 NEW_2
	TaskReturn(); // 0x1601 TaskReturn
	return 0; // 0x1603 Return
}


