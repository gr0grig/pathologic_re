task_0_event_0(var_0_object, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_bool, var_11_bool)
{
	var_12_int = 0; var_13_int = 0; // 0xf PushV
	var_14_int = 0; var_15_object = Obj(); // 0x10 PushV
	var_15_object = var_11_bool; // 0x11 Mov
	func_2416(var_15_object); // 0x12 NEW_2
	var_13_int = var_14_int; // 0x13 Mov
	var_16_int = 0; // 0x15 PushI
	var_17_bool = var_13_int > var_16_int; // 0x16 GT
	if(var_17_bool == 0) goto Label_28; // 0x17 JumpB
	var_18_object = Obj(); // 0x18 PushV
	var_18_object = var_11_bool; // 0x19 Mov
	func_2419(var_18_object); // 0x1a NEW_2
	
Label_28:
	return 2; // 0x1c Return
}


task_0_event_6(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_bool, var_10_bool)
{
	func_2425(); // 0x1e NEW_2
	return 0; // 0x20 Return
}


task_0_event_22(var_0_object, var_1_int, var_2_float, var_3_float, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_float, var_9_int, var_10_bool, var_11_object, var_12_bool, var_13_bool, var_14_bool)
{
	return 0; // 0x97 Return
}


task_0_event_16(var_0_object, var_1_string, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_float, var_7_int, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_bool)
{
	return 0; // 0x99 Return
}


task_0_event_41(var_0_object, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_bool, var_11_bool)
{
	return 0; // 0x9b Return
}


task_1_event_0(var_0_object, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_bool, var_11_bool)
{
	var_12_int = 0; var_13_int = 0; // 0x9c PushV
	var_14_int = 0; var_15_object = Obj(); // 0x9d PushV
	var_15_object = var_11_bool; // 0x9e Mov
	func_2416(var_15_object); // 0x9f NEW_2
	var_13_int = var_14_int; // 0xa0 Mov
	var_16_int = 0; // 0xa2 PushI
	var_17_bool = var_13_int > var_16_int; // 0xa3 GT
	if(var_17_bool == 0) goto Label_175; // 0xa4 JumpB
	var_18_int = 1; // 0xa5 PushI
	var_19_bool = var_13_int > var_18_int; // 0xa6 GT
	if(var_19_bool == 0) goto Label_171; // 0xa7 JumpB
	func_401(); // 0xa9 NEW_2
	
Label_171:
	var_20_object = Obj(); // 0xab PushV
	var_20_object = var_11_bool; // 0xac Mov
	func_2419(var_20_object); // 0xad NEW_2
	
Label_175:
	return 2; // 0xaf Return
}


task_1_event_17(var_0_object, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_bool, var_11_bool)
{
	var_12_int = 0; var_13_int = 0; // 0xb0 PushV
	var_14_object = Obj(); // 0xb1 PushV
	var_14_object = var_11_bool; // 0xb2 Mov
	func_2309(var_14_object); // 0xb3 NEW_2
	var_23_int = 0; var_24_object = Obj(); // 0xb5 PushV
	var_24_object = var_11_bool; // 0xb6 Mov
	func_2375(var_23_int, var_24_object); // 0xb7 NEW_2
	var_13_int = var_23_int; // 0xb8 Mov
	var_59_int = 0; // 0xba PushI
	var_60_bool = var_13_int > var_59_int; // 0xbb GT
	if(var_60_bool == 0) goto Label_199; // 0xbc JumpB
	var_61_int = 1; // 0xbd PushI
	var_62_bool = var_13_int > var_61_int; // 0xbe GT
	if(var_62_bool == 0) goto Label_195; // 0xbf JumpB
	func_401(); // 0xc1 NEW_2
	
Label_195:
	var_63_object = Obj(); // 0xc3 PushV
	var_63_object = var_11_bool; // 0xc4 Mov
	func_2385(var_63_object); // 0xc5 NEW_2
	
Label_199:
	return 2; // 0xc7 Return
}


task_1_event_30(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_int, var_5_int, var_6_bool, var_7_float, var_8_int, var_9_bool, var_10_object, var_11_bool, var_12_bool, var_13_bool)
{
	var_14_int = 0; var_15_int = 0; // 0xc8 PushV
	var_16_bool = 0; var_17_object = Obj(); var_18_object = Obj(); var_19_bool = 0; // 0xc9 PushV
	var_17_object = var_11_bool; // 0xca Mov
	var_18_object = var_12_bool; // 0xcb Mov
	var_19_bool = var_13_bool; // 0xcc Mov
	func_2463(var_18_object, var_19_bool); // 0xcd NEW_2
	if(var_16_bool == 0) goto Label_227; // 0xcf JumpB
	var_37_int = 0; var_38_object = Obj(); var_39_bool = 0; // 0xd0 PushV
	var_38_object = var_11_bool; // 0xd1 Mov
	var_39_bool = var_13_bool; // 0xd2 Mov
	func_2393(var_38_object, var_39_bool); // 0xd3 NEW_2
	var_15_int = var_37_int; // 0xd4 Mov
	var_70_int = 0; // 0xd6 PushI
	var_71_bool = var_15_int > var_70_int; // 0xd7 GT
	if(var_71_bool == 0) goto Label_227; // 0xd8 JumpB
	var_72_int = 1; // 0xd9 PushI
	var_73_bool = var_15_int > var_72_int; // 0xda GT
	if(var_73_bool == 0) goto Label_223; // 0xdb JumpB
	func_401(); // 0xdd NEW_2
	
Label_223:
	var_74_object = Obj(); // 0xdf PushV
	var_74_object = var_11_bool; // 0xe0 Mov
	func_2400(var_74_object); // 0xe1 NEW_2
	
Label_227:
	return 2; // 0xe3 Return
}


task_1_event_40(var_0_object, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_bool, var_11_bool)
{
	var_12_int = 0; var_13_int = 0; // 0xe4 PushV
	var_14_int = 0; var_15_object = Obj(); // 0xe5 PushV
	var_15_object = var_11_bool; // 0xe6 Mov
	func_2406(var_15_object); // 0xe7 NEW_2
	var_13_int = var_14_int; // 0xe8 Mov
	var_16_int = 0; // 0xea PushI
	var_17_bool = var_13_int > var_16_int; // 0xeb GT
	if(var_17_bool == 0) goto Label_247; // 0xec JumpB
	var_18_int = 1; // 0xed PushI
	var_19_bool = var_13_int > var_18_int; // 0xee GT
	if(var_19_bool == 0) goto Label_243; // 0xef JumpB
	func_401(); // 0xf1 NEW_2
	
Label_243:
	var_20_object = Obj(); // 0xf3 PushV
	var_20_object = var_11_bool; // 0xf4 Mov
	func_2409(); // 0xf5 NEW_2
	
Label_247:
	return 2; // 0xf7 Return
}


task_1_event_42(var_0_object, var_1_string, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_float, var_7_int, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_bool)
{
	var_13_int = 0; var_14_int = 0; // 0xf8 PushV
	var_15_bool = 0; var_16_object = Obj(); var_17_string = ""; // 0xf9 PushV
	var_16_object = var_11_bool; // 0xfa Mov
	var_17_string = var_12_bool; // 0xfb Mov
	func_2223(var_15_bool, var_16_object, var_17_string); // 0xfc NEW_2
	if(var_15_bool == 0) goto Label_264; // 0xfe JumpB
	func_401(); // 0x100 NEW_2
	var_30_object = Obj(); var_31_string = ""; // 0x102 PushV
	var_30_object = var_11_bool; // 0x103 Mov
	var_31_string = var_12_bool; // 0x104 Mov
	func_2255(var_30_object, var_31_string); // 0x105 NEW_2
	goto Label_284; // 0x107 Jump
	
Label_284:
	return 2; // 0x11c Return
	
Label_264:
	var_41_int = 0; var_42_string = ""; var_43_object = Obj(); // 0x108 PushV
	var_42_string = var_12_bool; // 0x109 Mov
	var_43_object = var_11_bool; // 0x10a Mov
	func_2411(var_43_object); // 0x10b NEW_2
	var_14_int = var_41_int; // 0x10c Mov
	var_44_int = 0; // 0x10e PushI
	var_45_bool = var_14_int > var_44_int; // 0x10f GT
	if(var_45_bool == 0) goto Label_284; // 0x110 JumpB
	var_46_int = 1; // 0x111 PushI
	var_47_bool = var_14_int > var_46_int; // 0x112 GT
	if(var_47_bool == 0) goto Label_279; // 0x113 JumpB
	func_401(); // 0x115 NEW_2
	
Label_279:
	var_48_string = ""; var_49_object = Obj(); // 0x117 PushV
	var_48_string = var_12_bool; // 0x118 Mov
	var_49_object = var_11_bool; // 0x119 Mov
	func_2414(); // 0x11a NEW_2
}


task_1_event_26(var_0_string, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_bool, var_11_bool)
{
	var_12_bool = 0; var_13_string = ""; // 0x11e PushV
	var_13_string = var_11_bool; // 0x11f Mov
	func_2322(var_12_bool, var_13_string); // 0x120 NEW_2
	if(var_12_bool == 0) goto Label_298; // 0x122 JumpB
	func_401(); // 0x124 NEW_2
	var_21_string = ""; // 0x126 PushV
	var_21_string = var_11_bool; // 0x127 Mov
	func_2338(var_21_string); // 0x128 NEW_2
	
Label_298:
	return 0; // 0x12a Return
}


task_1_event_6(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_bool, var_10_bool)
{
	func_401(); // 0x12c NEW_2
	func_2425(); // 0x12f NEW_2
	return 0; // 0x131 Return
}


task_1_event_1(var_0_object, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_bool, var_11_bool)
{
	var_12_bool = 0; var_13_object = Obj(); // 0x133 PushV
	var_13_object = var_11_bool; // 0x134 Mov
	func_2280(var_12_bool, var_13_object); // 0x135 NEW_2
	if(var_12_bool == 0) goto Label_319; // 0x137 JumpB
	func_401(); // 0x139 NEW_2
	var_24_object = Obj(); // 0x13b PushV
	var_24_object = var_11_bool; // 0x13c Mov
	func_2303(var_24_object); // 0x13d NEW_2
	
Label_319:
	return 0; // 0x13f Return
}


task_3_event_6(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_bool, var_10_bool)
{
	func_1152(var_10_bool); // 0x43b NEW_2
	func_2425(); // 0x43e NEW_2
	return 0; // 0x440 Return
}


task_3_event_7(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_int, var_10_bool, var_11_bool)
{
	var_12_int = 1; // 0x473 PushI
	var_13_bool = var_11_bool == var_12_int; // 0x474 Eq
	if(var_13_bool == 0) goto Label_1147; // 0x475 JumpB
	var_14_object = Obj(); // 0x476 PushV
	var_14_object = var_1_int; // 0x477 MovT
	func_2081(var_14_object); // 0x478 NEW_2
	goto Label_1151; // 0x47a Jump
	
Label_1151:
	return 0; // 0x47f Return
	
Label_1147:
	var_19_int = 0; // 0x47b PushV
	var_19_int = var_11_bool; // 0x47c Mov
	func_1296(var_10_bool, var_11_bool, var_19_int); // 0x47d NEW_2
}


task_3_event_1(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_object, var_10_bool, var_11_bool)
{
	var_12_bool = 0; // 0x48e PushV
	var_12_bool = 0; // 0x48f MovB
	var_13_bool = var_1_int == var_11_bool; // 0x490 Eq
	if(var_13_bool == 0) goto Label_1173; // 0x491 JumpB
	var_14_bool = var_2_int == 0; // 0x492 Not
	if(var_14_bool == 0) goto Label_1173; // 0x493 JumpB
	var_12_bool = 1; // 0x494 MovB
	
Label_1173:
	if(var_12_bool == 0) goto Label_1179; // 0x495 JumpB
	var_2_int = 1; // 0x496 TMovB
	var_15_object = Obj(); // 0x497 PushV
	var_15_object = var_11_bool; // 0x498 Mov
	func_1947(var_15_object); // 0x499 NEW_2
	
Label_1179:
	return 0; // 0x49b Return
}


task_3_event_2(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_object, var_10_bool, var_11_bool)
{
	var_12_bool = 0; // 0x49d PushV
	var_12_bool = 0; // 0x49e MovB
	var_13_bool = var_1_int == var_11_bool; // 0x49f Eq
	if(var_13_bool == 0) goto Label_1188; // 0x4a0 JumpB
	var_14_int = var_2_int; // 0x4a1 PushT
	if(var_14_int == 0) goto Label_1188; // 0x4a2 JumpB
	var_12_bool = 1; // 0x4a3 MovB
	
Label_1188:
	if(var_12_bool == 0) goto Label_1193; // 0x4a4 JumpB
	var_2_int = 0; // 0x4a5 TMovB
	var_15_string = "head"; // 0x4a6 PushS
	UnlookAsync(var_15_string); // 0x4a7 Func
	
Label_1193:
	return 0; // 0x4a9 Return
}


task_3_event_10(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_object, var_10_bool, var_11_bool)
{
	RequestClearPath(var_11_bool); // 0x523 Func
	return 0; // 0x525 Return
}


task_3_event_41(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_object, var_10_bool, var_11_bool)
{
	func_1152(var_11_bool); // 0x52f NEW_2
	var_16_object = Obj(); // 0x531 PushV
	var_16_object = var_11_bool; // 0x532 Mov
	func_2199(); // 0x533 NEW_2
	return 0; // 0x535 Return
}


task_4_event_0(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_bool, var_10_bool, var_11_object)
{
	var_12_int = 0; var_13_int = 0; // 0x562 PushV
	var_14_int = 0; var_15_object = Obj(); // 0x563 PushV
	var_15_object = var_11_object; // 0x564 Mov
	func_2416(var_15_object); // 0x565 NEW_2
	var_13_int = var_14_int; // 0x566 Mov
	var_16_int = 0; // 0x568 PushI
	var_17_bool = var_13_int > var_16_int; // 0x569 GT
	if(var_17_bool == 0) goto Label_1397; // 0x56a JumpB
	var_18_int = 1; // 0x56b PushI
	var_19_bool = var_13_int > var_18_int; // 0x56c GT
	if(var_19_bool == 0) goto Label_1393; // 0x56d JumpB
	func_1613(var_12_int, var_13_int); // 0x56f NEW_2
	
Label_1393:
	var_20_object = Obj(); // 0x571 PushV
	var_20_object = var_11_object; // 0x572 Mov
	func_2419(var_20_object); // 0x573 NEW_2
	
Label_1397:
	return 2; // 0x575 Return
}


task_4_event_17(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_bool, var_10_bool, var_11_object)
{
	var_12_int = 0; var_13_int = 0; // 0x576 PushV
	var_14_object = Obj(); // 0x577 PushV
	var_14_object = var_11_object; // 0x578 Mov
	func_2309(var_14_object); // 0x579 NEW_2
	var_23_int = 0; var_24_object = Obj(); // 0x57b PushV
	var_24_object = var_11_object; // 0x57c Mov
	func_2375(var_23_int, var_24_object); // 0x57d NEW_2
	var_13_int = var_23_int; // 0x57e Mov
	var_59_int = 0; // 0x580 PushI
	var_60_bool = var_13_int > var_59_int; // 0x581 GT
	if(var_60_bool == 0) goto Label_1421; // 0x582 JumpB
	var_61_int = 1; // 0x583 PushI
	var_62_bool = var_13_int > var_61_int; // 0x584 GT
	if(var_62_bool == 0) goto Label_1417; // 0x585 JumpB
	func_1613(var_12_int, var_13_int); // 0x587 NEW_2
	
Label_1417:
	var_63_object = Obj(); // 0x589 PushV
	var_63_object = var_11_object; // 0x58a Mov
	func_2385(var_63_object); // 0x58b NEW_2
	
Label_1421:
	return 2; // 0x58d Return
}


task_4_event_30(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_bool, var_10_bool, var_11_object, var_12_object, var_13_bool)
{
	var_14_int = 0; var_15_int = 0; // 0x58e PushV
	var_16_bool = 0; var_17_object = Obj(); var_18_object = Obj(); var_19_bool = 0; // 0x58f PushV
	var_17_object = var_11_object; // 0x590 Mov
	var_18_object = var_12_object; // 0x591 Mov
	var_19_bool = var_13_bool; // 0x592 Mov
	func_2463(var_18_object, var_19_bool); // 0x593 NEW_2
	if(var_16_bool == 0) goto Label_1449; // 0x595 JumpB
	var_37_int = 0; var_38_object = Obj(); var_39_bool = 0; // 0x596 PushV
	var_38_object = var_11_object; // 0x597 Mov
	var_39_bool = var_13_bool; // 0x598 Mov
	func_2393(var_38_object, var_39_bool); // 0x599 NEW_2
	var_15_int = var_37_int; // 0x59a Mov
	var_70_int = 0; // 0x59c PushI
	var_71_bool = var_15_int > var_70_int; // 0x59d GT
	if(var_71_bool == 0) goto Label_1449; // 0x59e JumpB
	var_72_int = 1; // 0x59f PushI
	var_73_bool = var_15_int > var_72_int; // 0x5a0 GT
	if(var_73_bool == 0) goto Label_1445; // 0x5a1 JumpB
	func_1613(var_14_int, var_15_int); // 0x5a3 NEW_2
	
Label_1445:
	var_74_object = Obj(); // 0x5a5 PushV
	var_74_object = var_11_object; // 0x5a6 Mov
	func_2400(var_74_object); // 0x5a7 NEW_2
	
Label_1449:
	return 2; // 0x5a9 Return
}


task_4_event_40(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_bool, var_10_bool, var_11_object)
{
	var_12_int = 0; var_13_int = 0; // 0x5aa PushV
	var_14_int = 0; var_15_object = Obj(); // 0x5ab PushV
	var_15_object = var_11_object; // 0x5ac Mov
	func_2406(var_15_object); // 0x5ad NEW_2
	var_13_int = var_14_int; // 0x5ae Mov
	var_16_int = 0; // 0x5b0 PushI
	var_17_bool = var_13_int > var_16_int; // 0x5b1 GT
	if(var_17_bool == 0) goto Label_1469; // 0x5b2 JumpB
	var_18_int = 1; // 0x5b3 PushI
	var_19_bool = var_13_int > var_18_int; // 0x5b4 GT
	if(var_19_bool == 0) goto Label_1465; // 0x5b5 JumpB
	func_1613(var_12_int, var_13_int); // 0x5b7 NEW_2
	
Label_1465:
	var_20_object = Obj(); // 0x5b9 PushV
	var_20_object = var_11_object; // 0x5ba Mov
	func_2409(); // 0x5bb NEW_2
	
Label_1469:
	return 2; // 0x5bd Return
}


task_4_event_42(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_bool, var_10_bool, var_11_object, var_12_string)
{
	var_13_int = 0; var_14_int = 0; // 0x5be PushV
	var_15_bool = 0; var_16_object = Obj(); var_17_string = ""; // 0x5bf PushV
	var_16_object = var_11_object; // 0x5c0 Mov
	var_17_string = var_12_string; // 0x5c1 Mov
	func_2223(var_15_bool, var_16_object, var_17_string); // 0x5c2 NEW_2
	if(var_15_bool == 0) goto Label_1486; // 0x5c4 JumpB
	func_1613(var_13_int, var_14_int); // 0x5c6 NEW_2
	var_30_object = Obj(); var_31_string = ""; // 0x5c8 PushV
	var_30_object = var_11_object; // 0x5c9 Mov
	var_31_string = var_12_string; // 0x5ca Mov
	func_2255(var_30_object, var_31_string); // 0x5cb NEW_2
	goto Label_1506; // 0x5cd Jump
	
Label_1506:
	return 2; // 0x5e2 Return
	
Label_1486:
	var_41_int = 0; var_42_string = ""; var_43_object = Obj(); // 0x5ce PushV
	var_42_string = var_12_string; // 0x5cf Mov
	var_43_object = var_11_object; // 0x5d0 Mov
	func_2411(var_43_object); // 0x5d1 NEW_2
	var_14_int = var_41_int; // 0x5d2 Mov
	var_44_int = 0; // 0x5d4 PushI
	var_45_bool = var_14_int > var_44_int; // 0x5d5 GT
	if(var_45_bool == 0) goto Label_1506; // 0x5d6 JumpB
	var_46_int = 1; // 0x5d7 PushI
	var_47_bool = var_14_int > var_46_int; // 0x5d8 GT
	if(var_47_bool == 0) goto Label_1501; // 0x5d9 JumpB
	func_1613(var_13_int, var_14_int); // 0x5db NEW_2
	
Label_1501:
	var_48_string = ""; var_49_object = Obj(); // 0x5dd PushV
	var_48_string = var_12_string; // 0x5de Mov
	var_49_object = var_11_object; // 0x5df Mov
	func_2414(); // 0x5e0 NEW_2
}


task_4_event_26(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_bool, var_10_bool, var_11_string)
{
	var_12_bool = 0; var_13_string = ""; // 0x5e4 PushV
	var_13_string = var_11_string; // 0x5e5 Mov
	func_2322(var_12_bool, var_13_string); // 0x5e6 NEW_2
	if(var_12_bool == 0) goto Label_1520; // 0x5e8 JumpB
	func_1613(var_10_bool, var_11_string); // 0x5ea NEW_2
	var_21_string = ""; // 0x5ec PushV
	var_21_string = var_11_string; // 0x5ed Mov
	func_2338(var_21_string); // 0x5ee NEW_2
	
Label_1520:
	return 0; // 0x5f0 Return
}


task_4_event_1(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_bool, var_10_bool, var_11_object)
{
	var_12_bool = 0; var_13_object = Obj(); // 0x5f2 PushV
	var_13_object = var_11_object; // 0x5f3 Mov
	func_2280(var_12_bool, var_13_object); // 0x5f4 NEW_2
	if(var_12_bool == 0) goto Label_1534; // 0x5f6 JumpB
	func_1613(var_10_bool, var_11_object); // 0x5f8 NEW_2
	var_24_object = Obj(); // 0x5fa PushV
	var_24_object = var_11_object; // 0x5fb Mov
	func_2303(var_24_object); // 0x5fc NEW_2
	
Label_1534:
	return 0; // 0x5fe Return
}


task_4_event_6(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_bool, var_10_bool)
{
	func_1613(var_9_bool, var_10_bool); // 0x600 NEW_2
	func_2425(); // 0x603 NEW_2
	return 0; // 0x605 Return
}


task_4_event_10(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_bool, var_10_bool, var_11_object)
{
	RequestClearPath(var_11_object); // 0x647 Func
	return 0; // 0x649 Return
}


task_4_event_28(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_bool, var_10_bool)
{
	Stop(); // 0x64a Func
	return 0; // 0x64c Return
}


task_4_event_41(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_bool, var_10_bool, var_11_object)
{
	func_1613(var_10_bool, var_11_object); // 0x656 NEW_2
	var_12_object = Obj(); // 0x658 PushV
	var_12_object = var_11_object; // 0x659 Mov
	func_2199(); // 0x65a NEW_2
	return 0; // 0x65c Return
}


event_16(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_bool, var_10_bool, var_11_object, var_12_string)
{
	var_13_float = 0; var_14_float = 0; // 0x88a PushV
	var_15_string = "health"; // 0x88b PushS
	var_16_bool = var_12_string == var_15_string; // 0x88c Eq
	if(var_16_bool == 0) goto Label_2198; // 0x88d JumpB
	var_17_string = "health"; // 0x88e PushS
	GetProperty(var_17_string, var_14_float); // 0x88f Func
	var_18_int = 0; // 0x891 PushI
	var_19_bool = var_14_float <= var_18_int; // 0x892 LE
	if(var_19_bool == 0) goto Label_2198; // 0x893 JumpB
	SignalDeath(var_11_object); // 0x894 Func
	
Label_2198:
	return 2; // 0x896 Return
}


event_41(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_bool, var_10_bool, var_11_object)
{
	var_12_object = Obj(); // 0x898 PushV
	var_12_object = var_11_object; // 0x899 Mov
	func_2178(var_12_object); // 0x89a NEW_2
	return 0; // 0x89c Return
}


event_22(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_bool, var_10_bool, var_11_object, var_12_int, var_13_float, var_14_float)
{
	var_15_object = Obj(); var_16_int = 0; var_17_float = 0; // 0x89e PushV
	var_15_object = var_11_object; // 0x89f Mov
	var_16_int = var_12_int; // 0x8a0 Mov
	var_17_float = var_13_float; // 0x8a1 Mov
	func_1849(var_15_object, var_16_int, var_17_float); // 0x8a2 NEW_2
	return 0; // 0x8a4 Return
}


event_43(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_bool, var_10_bool, var_11_object, var_12_int, var_13_float, var_14_float, var_15_cvector, var_16_cvector)
{
	var_17_object = Obj(); var_18_int = 0; var_19_float = 0; var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); // 0x8a6 PushV
	var_17_object = var_11_object; // 0x8a7 Mov
	var_18_int = var_12_int; // 0x8a8 Mov
	var_19_float = var_13_float; // 0x8a9 Mov
	var_20_cvector = var_15_cvector; // 0x8aa Mov
	var_21_cvector = var_16_cvector; // 0x8ab Mov
	func_1917(var_19_float, var_20_cvector, var_21_cvector); // 0x8ac NEW_2
	return 0; // 0x8ae Return
}


main(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_bool, var_10_bool)
{
	var_11_bool = 1; // 0x54b PushB
	SensePlayerOnly(var_11_bool); // 0x54c Func
	func_2459(); // 0x54f NEW_2
	func_1369(); // 0x552 NEW_2
	
Label_1364:
	func_1542(var_9_bool, var_10_bool); // 0x555 NEW_2
	goto Label_1364; // 0x557 Jump
}


func_2048(var_471_float, var_472_float, var_473_float, var_474_float)
{
	var_475_bool = var_472_float < var_473_float; // 0x801 LT
	if(var_475_bool == 0) goto Label_2053; // 0x802 JumpB
	var_471_float = var_473_float; // 0x803 Mov
	return 0; // 0x804 Return
	
Label_2053:
	var_476_bool = var_472_float > var_474_float; // 0x805 GT
	if(var_476_bool == 0) goto Label_2057; // 0x806 JumpB
	var_471_float = var_474_float; // 0x807 Mov
	return 0; // 0x808 Return
	
Label_2057:
	var_471_float = var_472_float; // 0x809 Mov
	return 0; // 0x80a Return
}


func_0(var_13_object)
{
	EventDisable(0); // 0x1 EventDisable
	var_14_object = Obj(); // 0x2 PushV
	var_14_object = var_13_object; // 0x3 Mov
	func_33(var_14_object); // 0x4 NEW_2
	var_94_object = Obj(); // 0x6 PushV
	var_94_object = var_13_object; // 0x7 Mov
	func_2485(var_94_object); // 0x8 NEW_2
	EventEnable(0); // 0xa EventEnable
	
Label_11:
	Hold(); // 0xb Func
	goto Label_11; // 0xd Jump
}


func_1030(var_2_int, var_5_int)
{
	var_391_float = 0; var_392_int = 0; var_393_float = 0; var_394_int = 0; // 0x406 PushV
	var_395_bool = var_2_int == 0; // 0x407 Not
	if(var_395_bool == 0) goto Label_1034; // 0x408 JumpB
	return 4; // 0x409 Return
	
Label_1034:
	var_396_int = var_5_int; // 0x40a PushT
	if(var_396_int == 0) goto Label_1042; // 0x40b JumpB
	var_397_int = -1; // 0x40c PushI
	var_5_int = var_5_int + var_397_int; // 0x40d Add2
	var_398_int = 0; // 0x40e PushI
	var_399_bool = var_5_int > var_398_int; // 0x40f GT
	if(var_399_bool == 0) goto Label_1042; // 0x410 JumpB
	return 4; // 0x411 Return
	
Label_1042:
	rand(var_393_float); // 0x412 Func
	var_400_float = 0; // 0x414 PushV
	func_1080(var_400_float); // 0x415 NEW_2
	var_401_bool = var_393_float < var_400_float; // 0x417 LT
	if(var_401_bool == 0) goto Label_1061; // 0x418 JumpB
	irand(var_394_int, var_393_float); // 0x419 Func
	var_402_int = 1; // 0x41b PushI
	var_394_int = var_394_int + var_402_int; // 0x41c Add2
	var_403_string = "attack"; // 0x41d PushS
	var_404_int = var_403_string + var_394_int; // 0x41e Add
	Speak(var_404_int); // 0x41f Func
	var_405_int = 0; // 0x421 PushV
	func_1078(var_405_int); // 0x422 NEW_2
	var_5_int = var_405_int; // 0x423 TMov
	
Label_1061:
	return 4; // 0x425 Return
}


func_1542(var_0_object, var_1_int)
{
	var_17_float = 0; var_18_cvector = CVector(0,0,0); var_19_cvector = CVector(0,0,0); var_20_bool = 0; var_21_object = Obj(); var_22_bool = 0; var_23_float = 0; var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_bool = 0; var_27_object = Obj(); var_28_bool = 0; // 0x606 PushV
	var_0_object = 0; // 0x607 TMovB
	var_1_int = 0; // 0x608 TMovB
	var_29_float = 0.5; // 0x609 PushF
	rand(var_23_float, var_29_float); // 0x60a Func
	Sleep(var_23_float); // 0x60c Func
	
Label_1550:
	var_30_bool = var_0_object == 0; // 0x60e Not
	if(var_30_bool == 0) goto Label_1600; // 0x60f JumpB
	var_31_bool = var_1_int == 0; // 0x610 Not
	if(var_31_bool == 0) goto Label_1569; // 0x611 JumpB
	
Label_1554:
	GetPosition(var_25_cvector); // 0x612 Func
	var_32_float = 0; // 0x614 PushV
	func_1601(var_32_float); // 0x615 NEW_2
	GetRandomPFPointInCircle(var_24_cvector, var_25_cvector, var_32_float, var_26_bool); // 0x617 Func
	var_35_bool = var_26_bool; // 0x619 Push
	if(var_35_bool == 0) goto Label_1564; // 0x61a JumpB
	goto Label_1568; // 0x61b Jump
	
Label_1568:
	goto Label_1570; // 0x620 Jump
	
Label_1570:
	var_36_object = Obj(); var_37_cvector = CVector(0,0,0); // 0x622 PushV
	var_37_cvector = var_24_cvector; // 0x623 Mov
	func_1347(var_36_object, var_37_cvector); // 0x624 NEW_2
	var_27_object = var_36_object; // 0x625 Mov
	var_42_bool = var_27_object != 0; // 0x627 NullNeq
	if(var_42_bool == 0) goto Label_1595; // 0x628 JumpB
	RotatePath(var_27_object, var_28_bool); // 0x629 Func
	var_43_bool = var_28_bool; // 0x62b Push
	if(var_43_bool == 0) goto Label_1594; // 0x62c JumpB
	var_44_bool = 0; // 0x62d PushV
	func_1345(var_44_bool); // 0x62e NEW_2
	FollowPath(var_27_object, var_44_bool, var_28_bool); // 0x630 Func
	var_27_object = 0; // 0x632 SetNull
	var_45_bool = var_28_bool; // 0x633 Push
	if(var_45_bool == 0) goto Label_1594; // 0x634 JumpB
	TaskCall(1); // 0x636 TaskCall
	func_320(); // 0x637 NEW_2
	TaskReturn(); // 0x638 TaskReturn
	
Label_1594:
	goto Label_1598; // 0x63a Jump
	
Label_1598:
	var_27_object = 0; // 0x63e SetNull
	goto Label_1550; // 0x63f Jump
	
Label_1595:
	var_97_int = 1; // 0x63b PushI
	Sleep(var_97_int); // 0x63c Func
	
Label_1564:
	var_98_int = 1; // 0x61c PushI
	Sleep(var_98_int); // 0x61d Func
	goto Label_1554; // 0x61f Jump
	
Label_1569:
	var_1_int = 0; // 0x621 TMovB
	
Label_1600:
	return 12; // 0x640 Return
}


func_2059(var_113_bool, var_114_int, var_115_int)
{
	var_116_int = 0; var_117_int = 0; // 0x80b PushV
	irand(var_117_int, var_115_int); // 0x80c Func
	var_113_bool = var_117_int < var_114_int; // 0x80e LT2
	return 2; // 0x80f Return
}


func_2064(var_479_float)
{
	var_480_object = Obj(); var_481_object = Obj(); // 0x810 PushV
	CreateFloatVector(var_481_object); // 0x811 Func
	add(var_479_float); // 0x813 ObjFunc
	var_482_int = 0; // 0x815 PushI
	var_483_bool = var_479_float < var_482_int; // 0x816 LT
	if(var_483_bool == 0) goto Label_2076; // 0x817 JumpB
	var_484_float = 0.7; // 0x818 PushF
	var_485_int = 500; // 0x819 PushI
	RumblePlay(var_484_float, var_485_int); // 0x81a Func
	
Label_2076:
	var_486_int = 15; // 0x81c PushI
	SendWorldWndMessage(var_486_int, var_481_object); // 0x81d Func
	return 2; // 0x81f Return
}


func_33(var_14_object)
{
	var_15_cvector = CVector(0,0,0); var_16_cvector = CVector(0,0,0); var_17_cvector = CVector(0,0,0); var_18_cvector = CVector(0,0,0); var_19_string = ""; var_20_object = Obj(); var_21_bool = 0; var_22_bool = 0; var_23_float = 0; var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_string = ""; var_30_object = Obj(); var_31_bool = 0; var_32_bool = 0; var_33_float = 0; var_34_cvector = CVector(0,0,0); // 0x21 PushV
	var_35_bool = var_14_object == 0; // 0x22 NullEq
	if(var_35_bool == 0) goto Label_41; // 0x23 JumpB
	var_36_string = ""; // 0x24 PushV
	var_36_string = "fdie"; // 0x25 MovS
	func_124(var_36_string); // 0x26 NEW_2
	goto Label_123; // 0x28 Jump
	
Label_123:
	return 20; // 0x7b Return
	
Label_41:
	GetPosition(var_25_cvector); // 0x29 ObjFunc
	GetPosition(var_26_cvector); // 0x2b Func
	GetDirection(var_27_cvector); // 0x2d Func
	var_28_cvector = var_26_cvector - var_25_cvector; // 0x2f Sub2
	var_68_float = GetByIndex(var_28_cvector, 0); // 0x30 PushE
	var_69_float = GetByIndex(var_27_cvector, 0); // 0x31 PushE
	var_70_float = var_68_float * var_69_float; // 0x32 Mult
	var_71_float = GetByIndex(var_28_cvector, 2); // 0x33 PushE
	var_72_float = GetByIndex(var_27_cvector, 2); // 0x34 PushE
	var_73_float = var_71_float * var_72_float; // 0x35 Mult
	var_74_int = var_70_float + var_73_float; // 0x36 Add
	var_75_int = 0; // 0x37 PushI
	var_76_bool = var_74_int >= var_75_int; // 0x38 GE
	if(var_76_bool == 0) goto Label_60; // 0x39 JumpB
	var_29_string = "fdie"; // 0x3a MovS
	goto Label_61; // 0x3b Jump
	
Label_61:
	RemoveRTEnvelope(); // 0x3d Func
	SetDeathState(); // 0x3f Func
	Stop(); // 0x41 Func
	StopAsync(); // 0x43 Func
	var_30_object = var_14_object; // 0x45 Mov
	var_77_string = "GetScriptProperty"; // 0x46 PushS
	var_78_int = 2; // 0x47 PushI
	var_79_bool = IsFuncExist(var_14_object, var_77_string, var_78_int); // 0x48 FuncExist
	if(var_79_bool == 0) goto Label_85; // 0x49 JumpB
	var_80_string = "Owner"; // 0x4a PushS
	HasScriptProperty(var_31_bool, var_80_string); // 0x4b ObjFunc
	var_81_bool = var_31_bool; // 0x4d Push
	if(var_81_bool == 0) goto Label_85; // 0x4e JumpB
	var_82_string = "Owner"; // 0x4f PushS
	GetScriptProperty(var_30_object, var_82_string); // 0x50 ObjFunc
	var_83_bool = var_30_object == 0; // 0x52 NullEq
	if(var_83_bool == 0) goto Label_85; // 0x53 JumpB
	var_30_object = var_14_object; // 0x54 Mov
	
Label_85:
	var_84_string = "@GetEyesHeight"; // 0x55 PushS
	var_85_int = 1; // 0x56 PushI
	var_86_bool = IsFuncExist(var_30_object, var_84_string, var_85_int); // 0x57 FuncExist
	if(var_86_bool == 0) goto Label_100; // 0x58 JumpB
	GetEyesHeight(var_33_float); // 0x59 ObjFunc
	var_34_cvector = CVector(0.0, 0.0, 0.0); // 0x5b MovV
	var_87_float = GetByIndex(var_34_cvector, 1); // 0x5c PushE
	var_87_float = var_33_float; // 0x5d Mov
	SetByIndex(var_34_cvector, 1) = var_87_float; // 0x5e PopE
	var_88_string = "head"; // 0x5f PushS
	LookAsync(var_14_object, var_88_string, var_34_cvector); // 0x60 Func
	var_32_bool = 1; // 0x62 MovB
	goto Label_101; // 0x63 Jump
	
Label_101:
	var_89_string = ""; // 0x65 PushV
	var_89_string = var_29_string; // 0x66 Mov
	func_1984(var_89_string); // 0x67 NEW_2
	var_90_string = "all"; // 0x69 PushS
	PlayAnimation(var_90_string, var_29_string); // 0x6a Func
	WaitForAnimEnd(); // 0x6c Func
	var_91_bool = var_32_bool; // 0x6e Push
	if(var_91_bool == 0) goto Label_117; // 0x6f JumpB
	StopAsync(); // 0x70 Func
	var_92_string = "head"; // 0x72 PushS
	UnlookAsync(var_92_string); // 0x73 Func
	
Label_117:
	var_93_string = "all"; // 0x75 PushS
	LockAnimationEnd(var_93_string, var_29_string); // 0x76 Func
	RemoveEnvelope(); // 0x78 Func
	var_30_object = 0; // 0x7a SetNull
	
Label_100:
	var_32_bool = 0; // 0x64 MovB
	
Label_60:
	var_29_string = "bdie"; // 0x3c MovS
}


func_2081(var_147_object)
{
	var_148_bool = 0; var_149_bool = 0; // 0x821 PushV
	IsPlayerActor(var_147_object, var_149_bool); // 0x822 Func
	var_150_bool = var_149_bool; // 0x824 Push
	if(var_150_bool == 0) goto Label_2089; // 0x825 JumpB
	var_151_string = "attack"; // 0x826 PushS
	PlayGlobalMusic(var_151_string); // 0x827 Func
	
Label_2089:
	return 2; // 0x829 Return
}


func_1062(var_0_object)
{
	var_147_object = Obj(); // 0x426 PushV
	var_147_object = var_0_object; // 0x427 MovT
	func_2081(var_147_object); // 0x428 NEW_2
	return 0; // 0x42a Return
}


func_2090()
{
	var_384_object = Obj(); var_385_object = Obj(); // 0x82a PushV
	GetScene(var_385_object); // 0x82b Func
	var_386_string = "battle"; // 0x82d PushS
	var_387_object = Obj(); // 0x82e PushV
	func_2025(var_387_object); // 0x82f NEW_2
	BroadcastMessage(var_386_string, var_387_object, var_385_object); // 0x831 Func
	return 2; // 0x833 Return
}


func_1067(var_488_int)
{
	var_488_int = 0; // 0x42b MovI
	return 0; // 0x42c Return
}


func_1069()
{
	var_280_string = ""; // 0x42d PushV
	var_280_string = "attack_stay"; // 0x42e MovS
	func_1984(var_280_string); // 0x42f NEW_2
	return 0; // 0x431 Return
}


func_1074()
{
	return 0; // 0x433 Return
}


func_1076(var_513_bool)
{
	var_513_bool = 1; // 0x434 MovB
	return 0; // 0x435 Return
}


func_2101(var_130_int)
{
	var_131_int = 0; var_132_int = 0; // 0x835 PushV
	var_133_string = "branch"; // 0x836 PushS
	GetVariable(var_133_string, var_132_int); // 0x837 Func
	var_130_int = var_132_int; // 0x839 Mov
	return 2; // 0x83a Return
}


func_1078(var_405_int)
{
	var_405_int = 1; // 0x436 MovI
	return 0; // 0x437 Return
}


func_1080(var_400_float)
{
	var_400_float = 0.5; // 0x438 MovF
	return 0; // 0x439 Return
}


func_2107(var_26_object)
{
	var_27_int = 0; // 0x83c PushV
	func_2101(var_27_int); // 0x83d NEW_2
	var_31_int = 1; // 0x83f PushI
	var_32_bool = var_27_int == var_31_int; // 0x840 Eq
	if(var_32_bool == 0) goto Label_2117; // 0x841 JumpB
	WorkWithCorpse(var_26_object); // 0x842 Func
	goto Label_2119; // 0x844 Jump
	
Label_2119:
	return 0; // 0x847 Return
	
Label_2117:
	Barter(var_26_object); // 0x845 Func
}


func_1089(var_2_int, var_154_bool, var_155_object, var_156_float, var_157_float, var_158_bool, var_159_bool)
{
	var_163_bool = 0; var_164_bool = 0; var_165_bool = 0; var_166_bool = 0; // 0x441 PushV
	var_167_object = Obj(); // 0x442 PushV
	var_167_object = var_155_object; // 0x443 Mov
	func_2081(var_167_object); // 0x444 NEW_2
	var_168_int = 1; // 0x446 PushI
	var_169_int = 5; // 0x447 PushI
	SetTimer(var_168_int, var_169_int); // 0x448 Func
	CanSee(var_165_bool, var_155_object); // 0x44a Func
	var_170_bool = var_165_bool; // 0x44c Push
	if(var_170_bool == 0) goto Label_1108; // 0x44d JumpB
	var_2_int = 1; // 0x44e TMovB
	var_171_object = Obj(); // 0x44f PushV
	var_171_object = var_155_object; // 0x450 Mov
	func_1947(var_171_object); // 0x451 NEW_2
	goto Label_1109; // 0x453 Jump
	
Label_1109:
	var_178_bool = 0; var_179_object = Obj(); // 0x455 PushV
	var_179_object = var_155_object; // 0x456 Mov
	func_1650(var_178_bool, var_179_object); // 0x457 NEW_2
	if(var_178_bool == 0) goto Label_1119; // 0x459 JumpB
	var_182_object = Obj(); // 0x45a PushV
	func_2025(var_182_object); // 0x45b NEW_2
	SendPlayerEnemy(var_155_object, var_182_object); // 0x45d Func
	
Label_1119:
	var_183_bool = 0; var_184_object = Obj(); var_185_float = 0; var_186_float = 0; var_187_bool = 0; var_188_bool = 0; // 0x45f PushV
	var_184_object = var_155_object; // 0x460 Mov
	var_185_float = var_156_float; // 0x461 Mov
	var_186_float = var_157_float; // 0x462 Mov
	var_187_bool = var_158_bool; // 0x463 Mov
	var_188_bool = var_159_bool; // 0x464 Mov
	func_1194(var_165_bool, var_166_bool, var_183_bool, var_184_object, var_185_float, var_186_float, var_187_bool, var_188_bool); // 0x465 NEW_2
	var_166_bool = var_183_bool; // 0x466 Mov
	var_234_int = var_2_int; // 0x468 PushT
	if(var_234_int == 0) goto Label_1133; // 0x469 JumpB
	var_235_string = "head"; // 0x46a PushS
	UnlookAsync(var_235_string); // 0x46b Func
	
Label_1133:
	var_236_int = 1; // 0x46d PushI
	KillTimer(var_236_int); // 0x46e Func
	var_154_bool = var_166_bool; // 0x470 Mov
	return 4; // 0x471 Return
	
Label_1108:
	var_2_int = 0; // 0x454 TMovB
}


func_1601(var_32_float)
{
	var_33_float = 0; var_34_float = 0; // 0x641 PushV
	GetCameraFarDistance(var_34_float); // 0x642 Func
	var_32_float = var_34_float; // 0x644 Mov
	return 2; // 0x645 Return
}


func_2120(var_136_string)
{
	var_137_object = Obj(); var_138_int = 0; var_139_bool = 0; var_140_object = Obj(); var_141_int = 0; var_142_bool = 0; // 0x848 PushV
	CreateInvItem(var_140_object); // 0x849 Func
	SetItemName(var_136_string); // 0x84b ObjFunc
	var_143_string = "Organ"; // 0x84d PushS
	var_144_int = 1; // 0x84e PushI
	SetProperty(var_143_string, var_144_int); // 0x84f ObjFunc
	GetItemID(var_141_int); // 0x851 ObjFunc
	var_145_int = 0; // 0x853 PushI
	var_146_int = 1; // 0x854 PushI
	AddItem(var_142_bool, var_140_object, var_145_int, var_146_int); // 0x855 Func
	return 6; // 0x857 Return
}


func_1613(var_0_object, var_1_int)
{
	var_0_object = 1; // 0x64d TMovB
	var_1_int = 0; // 0x64e TMovB
	Stop(); // 0x64f Func
	StopGroup0(); // 0x651 Func
	return 0; // 0x653 Return
}


func_2137()
{
	var_130_int = 0; // 0x859 PushV
	func_2101(var_130_int); // 0x85a NEW_2
	var_134_int = 1; // 0x85c PushI
	var_135_bool = var_130_int != var_134_int; // 0x85d Neq
	if(var_135_bool == 0) goto Label_2144; // 0x85e JumpB
	return 0; // 0x85f Return
	
Label_2144:
	var_136_string = ""; // 0x860 PushV
	var_136_string = "liver"; // 0x861 MovS
	func_2120(var_136_string); // 0x862 NEW_2
	var_147_string = ""; // 0x864 PushV
	var_147_string = "kidney"; // 0x865 MovS
	func_2120(var_147_string); // 0x866 NEW_2
	var_148_string = ""; // 0x868 PushV
	var_148_string = "heart"; // 0x869 MovS
	func_2120(var_148_string); // 0x86a NEW_2
	var_149_string = ""; // 0x86c PushV
	var_149_string = "blood"; // 0x86d MovS
	func_2120(var_149_string); // 0x86e NEW_2
	return 0; // 0x870 Return
}


func_1629(var_451_string, var_452_int)
{
	var_453_int = 2; // 0x65e PushI
	var_454_bool = var_452_int == var_453_int; // 0x65f Eq
	if(var_454_bool == 0) goto Label_1636; // 0x660 JumpB
	var_451_string = "fire"; // 0x661 MovS
	return 0; // 0x662 Return
	
Label_1636:
	var_455_int = 1; // 0x664 PushI
	var_456_bool = var_452_int == var_455_int; // 0x665 Eq
	if(var_456_bool == 0) goto Label_1641; // 0x666 JumpB
	var_451_string = "bullet"; // 0x667 MovS
	return 0; // 0x668 Return
	
Label_1641:
	var_451_string = "phys"; // 0x669 MovS
	return 0; // 0x66a Return
}


func_1643(var_45_cvector)
{
	var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); // 0x66b PushV
	GetPosition(var_49_cvector); // 0x66c Func
	GetPosition(var_50_cvector); // 0x66e ObjFunc
	var_45_cvector = var_50_cvector - var_49_cvector; // 0x670 Sub2
	return 4; // 0x671 Return
}


func_2161()
{
	var_104_int = 0; // 0x871 PushI
	ClearSubContainer(var_104_int); // 0x872 Func
	var_105_string = ""; var_106_int = 0; var_107_int = 0; var_108_int = 0; // 0x874 PushV
	var_105_string = "rusk"; // 0x875 MovS
	var_106_int = 1; // 0x876 MovI
	var_107_int = 1; // 0x877 MovI
	var_108_int = 2; // 0x878 MovI
	func_1969(var_105_string, var_106_int, var_107_int, var_108_int); // 0x879 NEW_2
	var_121_string = ""; var_122_int = 0; var_123_int = 0; // 0x87b PushV
	var_121_string = "peanut"; // 0x87c MovS
	var_122_int = 1; // 0x87d MovI
	var_123_int = 4; // 0x87e MovI
	func_1958(var_121_string, var_122_int, var_123_int); // 0x87f NEW_2
	return 0; // 0x881 Return
}


func_1650(var_95_bool, var_96_object)
{
	var_97_bool = 0; var_98_bool = 0; // 0x672 PushV
	IsPlayerActor(var_96_object, var_98_bool); // 0x673 Func
	var_95_bool = var_98_bool; // 0x675 Mov
	return 2; // 0x676 Return
}


func_1655(var_22_bool, var_23_object, var_24_string)
{
	var_25_bool = 0; var_26_bool = 0; // 0x677 PushV
	var_27_string = "HasProperty"; // 0x678 PushS
	var_28_int = 2; // 0x679 PushI
	var_29_bool = IsFuncExist(var_23_object, var_27_string, var_28_int); // 0x67a FuncExist
	var_30_bool = var_29_bool == 0; // 0x67b Not
	if(var_30_bool == 0) goto Label_1663; // 0x67c JumpB
	var_22_bool = 0; // 0x67d MovB
	return 2; // 0x67e Return
	
Label_1663:
	HasProperty(var_24_string, var_26_bool); // 0x67f ObjFunc
	var_22_bool = var_26_bool; // 0x681 Mov
	return 2; // 0x682 Return
}


func_124(var_36_string)
{
	RemoveRTEnvelope(); // 0x7d Func
	SetDeathState(); // 0x7f Func
	Stop(); // 0x81 Func
	StopAsync(); // 0x83 Func
	StopSecondaryAnimation(); // 0x85 Func
	var_37_string = ""; // 0x87 PushV
	var_37_string = var_36_string; // 0x88 Mov
	func_1984(var_37_string); // 0x89 NEW_2
	var_66_string = "all"; // 0x8b PushS
	PlayAnimation(var_66_string, var_36_string); // 0x8c Func
	WaitForAnimEnd(); // 0x8e Func
	var_67_string = "all"; // 0x90 PushS
	LockAnimationEnd(var_67_string, var_36_string); // 0x91 Func
	RemoveEnvelope(); // 0x93 Func
	return 0; // 0x95 Return
}


func_1152(var_2_int)
{
	var_12_int = 1; // 0x480 PushI
	KillTimer(var_12_int); // 0x481 Func
	var_13_int = var_2_int; // 0x483 PushT
	if(var_13_int == 0) goto Label_1161; // 0x484 JumpB
	var_2_int = 0; // 0x485 TMovB
	var_14_string = "head"; // 0x486 PushS
	UnlookAsync(var_14_string); // 0x487 Func
	
Label_1161:
	func_1318(var_11_bool); // 0x48a NEW_2
	return 0; // 0x48c Return
}


func_2178(var_12_object)
{
	var_13_object = Obj(); // 0x883 PushV
	var_13_object = var_12_object; // 0x884 Mov
	TaskCall(0); // 0x885 TaskCall
	func_0(var_13_object); // 0x886 NEW_2
	TaskReturn(); // 0x887 TaskReturn
	return 0; // 0x889 Return
}


func_1667(var_423_float, var_424_object, var_425_float, var_426_int)
{
	var_430_int = 0; var_431_string = ""; var_432_int = 0; var_433_float = 0; var_434_float = 0; var_435_float = 0; var_436_int = 0; var_437_string = ""; var_438_int = 0; var_439_float = 0; var_440_float = 0; var_441_float = 0; // 0x683 PushV
	var_442_bool = 0; var_443_object = Obj(); var_444_string = ""; // 0x684 PushV
	var_443_object = var_424_object; // 0x685 Mov
	var_444_string = "health"; // 0x686 MovS
	func_1655(var_442_bool, var_443_object, var_444_string); // 0x687 NEW_2
	var_445_bool = var_442_bool == 0; // 0x689 Not
	if(var_445_bool == 0) goto Label_1677; // 0x68a JumpB
	var_423_float = 0.0; // 0x68b MovF
	return 12; // 0x68c Return
	
Label_1677:
	var_446_bool = 0; var_447_object = Obj(); var_448_string = ""; // 0x68d PushV
	var_447_object = var_424_object; // 0x68e Mov
	var_448_string = "armor"; // 0x68f MovS
	func_1655(var_446_bool, var_447_object, var_448_string); // 0x690 NEW_2
	var_449_bool = var_446_bool == 0; // 0x692 Not
	if(var_449_bool == 0) goto Label_1686; // 0x693 JumpB
	var_436_int = 0; // 0x694 MovI
	goto Label_1689; // 0x695 Jump
	
Label_1689:
	var_450_string = "armor_"; // 0x699 PushS
	var_451_string = ""; var_452_int = 0; // 0x69a PushV
	var_452_int = var_426_int; // 0x69b Mov
	func_1629(var_451_string, var_452_int); // 0x69c NEW_2
	var_437_string = var_450_string + var_451_string; // 0x69e Add2
	var_457_bool = 0; var_458_object = Obj(); var_459_string = ""; // 0x69f PushV
	var_458_object = var_424_object; // 0x6a0 Mov
	var_459_string = var_437_string; // 0x6a1 Mov
	func_1655(var_457_bool, var_458_object, var_459_string); // 0x6a2 NEW_2
	var_460_bool = var_457_bool == 0; // 0x6a4 Not
	if(var_460_bool == 0) goto Label_1704; // 0x6a5 JumpB
	var_438_int = 0; // 0x6a6 MovI
	goto Label_1706; // 0x6a7 Jump
	
Label_1706:
	var_461_float = 0; var_462_float = 0; var_463_float = 0; // 0x6aa PushV
	var_464_int = var_436_int + var_438_int; // 0x6ab Add
	var_465_float = 100.0; // 0x6ac PushF
	var_462_float = var_464_int / var_464_int; // 0x6ad Div2
	var_463_float = 1; // 0x6ae MovI
	func_2041(var_461_float, var_462_float, var_463_float); // 0x6af NEW_2
	var_439_float = var_461_float; // 0x6b0 Mov
	var_467_string = "health"; // 0x6b2 PushS
	GetProperty(var_467_string, var_440_float); // 0x6b3 ObjFunc
	var_468_int = 1; // 0x6b5 PushI
	var_469_int = var_468_int - var_439_float; // 0x6b6 Sub
	var_441_float = var_425_float * var_469_int; // 0x6b7 Mult2
	var_470_string = "health"; // 0x6b8 PushS
	var_471_float = 0; var_472_float = 0; var_473_float = 0; var_474_float = 0; // 0x6b9 PushV
	var_472_float = var_440_float - var_441_float; // 0x6ba Sub2
	var_473_float = 0; // 0x6bb MovI
	var_474_float = 1; // 0x6bc MovI
	func_2048(var_471_float, var_472_float, var_473_float, var_474_float); // 0x6bd NEW_2
	SetProperty(var_470_string, var_471_float); // 0x6bf ObjFunc
	var_477_bool = 0; var_478_object = Obj(); // 0x6c1 PushV
	var_478_object = var_424_object; // 0x6c2 Mov
	func_1650(var_477_bool, var_478_object); // 0x6c3 NEW_2
	if(var_477_bool == 0) goto Label_1738; // 0x6c5 JumpB
	var_479_float = 0; // 0x6c6 PushV
	var_479_float = -var_441_float; // 0x6c7 Neg2
	func_2064(var_479_float); // 0x6c8 NEW_2
	
Label_1738:
	var_423_float = var_441_float; // 0x6ca Mov
	return 12; // 0x6cb Return
	
Label_1704:
	GetProperty(var_437_string, var_438_int); // 0x6a8 ObjFunc
	
Label_1686:
	var_487_string = "armor"; // 0x696 PushS
	GetProperty(var_487_string, var_436_int); // 0x697 ObjFunc
}


func_649(var_1_int, var_2_int, var_4_float)
{
	var_108_bool = 0; var_109_bool = 0; var_110_cvector = CVector(0,0,0); var_111_bool = 0; var_112_bool = 0; var_113_cvector = CVector(0,0,0); // 0x289 PushV
	var_1_int = 0; // 0x28a TMovI
	
Label_651:
	var_114_string = "all"; // 0x28b PushS
	var_115_string = "attack_begin"; // 0x28c PushS
	var_116_int = 1; // 0x28d PushI
	var_117_int = var_1_int + var_116_int; // 0x28e Add
	var_118_int = var_115_string + var_117_int; // 0x28f Add
	HasAnimation(var_111_bool, var_114_string, var_118_int); // 0x290 Func
	var_119_bool = var_111_bool == 0; // 0x292 Not
	if(var_119_bool == 0) goto Label_661; // 0x293 JumpB
	goto Label_664; // 0x294 Jump
	
Label_664:
	var_2_int = 0; // 0x298 TMovI
	
Label_665:
	var_120_string = "attack"; // 0x299 PushS
	var_121_int = 1; // 0x29a PushI
	var_122_int = var_2_int + var_121_int; // 0x29b Add
	var_123_int = var_120_string + var_122_int; // 0x29c Add
	IsExisting3DSound(var_112_bool, var_123_int); // 0x29d Func
	var_124_bool = var_112_bool == 0; // 0x29f Not
	if(var_124_bool == 0) goto Label_674; // 0x2a0 JumpB
	goto Label_677; // 0x2a1 Jump
	
Label_677:
	var_125_string = "all"; // 0x2a5 PushS
	var_126_string = "bjump"; // 0x2a6 PushS
	GetAnimationOffset(var_113_cvector, var_125_string, var_126_string); // 0x2a7 Func
	var_127_float = GetByIndex(var_113_cvector, 2); // 0x2a9 PushE
	var_4_float = -var_127_float; // 0x2aa Neg2
	return 6; // 0x2ab Return
	
Label_674:
	var_128_int = 1; // 0x2a2 PushI
	var_2_int = var_2_int + var_128_int; // 0x2a3 Add2
	goto Label_665; // 0x2a4 Jump
	
Label_661:
	var_129_int = 1; // 0x295 PushI
	var_1_int = var_1_int + var_129_int; // 0x296 Add2
	goto Label_651; // 0x297 Jump
}


func_1194(var_0_object, var_1_int, var_183_bool, var_184_object, var_185_float, var_186_float, var_187_bool, var_188_bool)
{
	var_189_bool = 0; var_190_bool = 0; var_191_object = Obj(); var_192_cvector = CVector(0,0,0); var_193_cvector = CVector(0,0,0); var_194_cvector = CVector(0,0,0); var_195_float = 0; var_196_object = Obj(); var_197_bool = 0; var_198_bool = 0; var_199_object = Obj(); var_200_cvector = CVector(0,0,0); var_201_cvector = CVector(0,0,0); var_202_cvector = CVector(0,0,0); var_203_float = 0; var_204_object = Obj(); // 0x4aa PushV
	var_0_object = 0; // 0x4ab TMovB
	var_1_int = var_184_object; // 0x4ac TMov
	var_198_bool = var_188_bool; // 0x4ad Mov
	
Label_1198:
	var_205_bool = 0; var_206_object = Obj(); // 0x4ae PushV
	var_206_object = var_184_object; // 0x4af Mov
	func_1334(var_205_bool, var_206_object); // 0x4b0 NEW_2
	var_209_bool = var_205_bool == 0; // 0x4b2 Not
	if(var_209_bool == 0) goto Label_1206; // 0x4b3 JumpB
	var_183_bool = 0; // 0x4b4 MovB
	return 16; // 0x4b5 Return
	
Label_1206:
	GetPosition(var_200_cvector); // 0x4b6 ObjFunc
	GetPosition(var_201_cvector); // 0x4b8 Func
	var_202_cvector = var_200_cvector - var_201_cvector; // 0x4ba Sub2
	var_203_float = var_202_cvector | var_202_cvector; // 0x4bb Or2
	var_210_bool = 0; // 0x4bc PushV
	var_210_bool = 0; // 0x4bd MovB
	var_211_int = 0; // 0x4be PushI
	var_212_bool = var_186_float > var_211_int; // 0x4bf GT
	if(var_212_bool == 0) goto Label_1221; // 0x4c0 JumpB
	var_213_float = var_186_float * var_186_float; // 0x4c1 Mult
	var_214_bool = var_203_float > var_213_float; // 0x4c2 GT
	if(var_214_bool == 0) goto Label_1221; // 0x4c3 JumpB
	var_210_bool = 1; // 0x4c4 MovB
	
Label_1221:
	if(var_210_bool == 0) goto Label_1226; // 0x4c5 JumpB
	Stop(); // 0x4c6 Func
	var_183_bool = 0; // 0x4c8 MovB
	return 16; // 0x4c9 Return
	
Label_1226:
	var_215_float = var_185_float * var_185_float; // 0x4ca Mult
	var_216_bool = var_203_float > var_215_float; // 0x4cb GT
	if(var_216_bool == 0) goto Label_1288; // 0x4cc JumpB
	GetPFPosition(var_200_cvector); // 0x4cd ObjFunc
	FindPathTo(var_204_object, var_200_cvector); // 0x4cf Func
	var_217_bool = var_204_object != 0; // 0x4d1 NullNeq
	if(var_217_bool == 0) goto Label_1237; // 0x4d2 JumpB
	var_199_object = var_204_object; // 0x4d3 Mov
	var_204_object = 0; // 0x4d4 SetNull
	
Label_1237:
	var_218_bool = var_199_object != 0; // 0x4d5 NullNeq
	if(var_218_bool == 0) goto Label_1270; // 0x4d6 JumpB
	var_219_bool = var_198_bool; // 0x4d7 Push
	if(var_219_bool == 0) goto Label_1247; // 0x4d8 JumpB
	var_198_bool = 0; // 0x4d9 MovB
	RotatePath(var_199_object, var_197_bool); // 0x4da Func
	var_220_bool = var_197_bool == 0; // 0x4dc Not
	if(var_220_bool == 0) goto Label_1247; // 0x4dd JumpB
	goto Label_1294; // 0x4de Jump
	
Label_1294:
	var_183_bool = !var_0_object; // 0x50e Not2
	return 16; // 0x50f Return
	
Label_1247:
	var_221_int = 0; // 0x4df PushI
	var_222_float = 0.3; // 0x4e0 PushF
	SetTimer(var_221_int, var_222_float); // 0x4e1 Func
	var_223_string = ""; // 0x4e3 PushV
	func_1341(var_223_string); // 0x4e4 NEW_2
	var_224_string = ""; // 0x4e6 PushV
	func_1343(var_224_string); // 0x4e7 NEW_2
	FollowPath(var_199_object, var_187_bool, var_197_bool, var_223_string, var_224_string); // 0x4e9 Func
	var_225_bool = var_197_bool == 0; // 0x4eb Not
	if(var_225_bool == 0) goto Label_1268; // 0x4ec JumpB
	var_226_object = var_0_object; // 0x4ed PushT
	if(var_226_object == 0) goto Label_1266; // 0x4ee JumpB
	var_199_object = 0; // 0x4ef SetNull
	goto Label_1294; // 0x4f0 Jump
	
Label_1266:
	goto Label_1293; // 0x4f2 Jump
	
Label_1293:
	goto Label_1198; // 0x50d Jump
	
Label_1268:
	var_199_object = 0; // 0x4f4 SetNull
	goto Label_1286; // 0x4f5 Jump
	
Label_1286:
	var_204_object = 0; // 0x506 SetNull
	goto Label_1292; // 0x507 Jump
	
Label_1292:
	var_199_object = 0; // 0x50c SetNull
	
Label_1270:
	var_227_int = 0; // 0x4f6 PushI
	KillTimer(var_227_int); // 0x4f7 Func
	var_228_float = 0.5; // 0x4f9 PushF
	Sleep(var_228_float, var_197_bool); // 0x4fa Func
	var_229_bool = var_197_bool == 0; // 0x4fc Not
	if(var_229_bool == 0) goto Label_1282; // 0x4fd JumpB
	var_230_object = var_0_object; // 0x4fe PushT
	if(var_230_object == 0) goto Label_1282; // 0x4ff JumpB
	var_199_object = 0; // 0x500 SetNull
	goto Label_1294; // 0x501 Jump
	
Label_1282:
	var_231_int = 0; // 0x502 PushI
	var_232_float = 0.3; // 0x503 PushF
	SetTimer(var_231_int, var_232_float); // 0x504 Func
	
Label_1288:
	var_233_int = 0; // 0x508 PushI
	KillTimer(var_233_int); // 0x509 Func
	goto Label_1294; // 0x50b Jump
}


func_684(var_0_object, var_409_float, var_410_int)
{
	var_411_object = Obj(); var_412_float = 0; var_413_float = 0; var_414_object = Obj(); var_415_float = 0; var_416_float = 0; // 0x2ac PushV
	var_417_float = 0.9; // 0x2ad PushF
	var_418_float = var_409_float * var_417_float; // 0x2ae Mult
	GetVictim(var_418_float, var_414_object); // 0x2af Func
	ReportAttack(var_0_object); // 0x2b1 Func
	var_419_bool = var_414_object == var_0_object; // 0x2b3 Eq
	if(var_419_bool == 0) goto Label_721; // 0x2b4 JumpB
	var_420_float = 0; var_421_object = Obj(); var_422_int = 0; // 0x2b5 PushV
	var_421_object = var_414_object; // 0x2b6 Mov
	var_422_int = var_410_int; // 0x2b7 Mov
	func_414(var_422_int); // 0x2b8 NEW_2
	var_415_float = var_420_float; // 0x2b9 Mov
	var_423_float = 0; var_424_object = Obj(); var_425_float = 0; var_426_int = 0; // 0x2bb PushV
	var_424_object = var_414_object; // 0x2bc Mov
	var_425_float = var_415_float; // 0x2bd Mov
	var_427_int = 0; var_428_object = Obj(); var_429_int = 0; // 0x2be PushV
	var_428_object = var_414_object; // 0x2bf Mov
	var_429_int = var_410_int; // 0x2c0 Mov
	func_417(var_429_int); // 0x2c1 NEW_2
	var_426_int = var_427_int; // 0x2c2 Mov
	func_1667(var_423_float, var_424_object, var_425_float, var_426_int); // 0x2c4 NEW_2
	var_416_float = var_423_float; // 0x2c5 Mov
	var_488_int = 0; // 0x2c7 PushV
	func_1067(var_488_int); // 0x2c8 NEW_2
	ReportHit(var_0_object, var_488_int, var_416_float, var_415_float); // 0x2ca Func
	var_489_object = Obj(); var_490_float = 0; // 0x2cc PushV
	var_489_object = var_414_object; // 0x2cd Mov
	var_490_float = var_416_float; // 0x2ce Mov
	func_1074(); // 0x2cf NEW_2
	
Label_721:
	return 6; // 0x2d1 Return
}


func_2223(var_15_bool, var_16_object, var_17_string)
{
	var_18_string = "unholster"; // 0x8b0 PushS
	var_19_bool = var_17_string == var_18_string; // 0x8b1 Eq
	if(var_19_bool == 0) goto Label_2234; // 0x8b2 JumpB
	var_20_bool = 0; var_21_object = Obj(); // 0x8b3 PushV
	var_21_object = var_16_object; // 0x8b4 Mov
	func_2426(var_21_object); // 0x8b5 NEW_2
	var_15_bool = var_20_bool; // 0x8b6 Mov
	return 0; // 0x8b8 Return
	
Label_2234:
	var_22_string = "player_shot"; // 0x8ba PushS
	var_23_bool = var_17_string == var_22_string; // 0x8bb Eq
	if(var_23_bool == 0) goto Label_2244; // 0x8bc JumpB
	var_24_bool = 0; var_25_object = Obj(); // 0x8bd PushV
	var_25_object = var_16_object; // 0x8be Mov
	func_2431(var_25_object); // 0x8bf NEW_2
	var_15_bool = var_24_bool; // 0x8c0 Mov
	return 0; // 0x8c2 Return
	
Label_2244:
	var_26_string = "battle"; // 0x8c4 PushS
	var_27_bool = var_17_string == var_26_string; // 0x8c5 Eq
	if(var_27_bool == 0) goto Label_2253; // 0x8c6 JumpB
	var_28_bool = 0; var_29_object = Obj(); // 0x8c7 PushV
	var_29_object = var_16_object; // 0x8c8 Mov
	func_2436(var_29_object); // 0x8c9 NEW_2
	var_15_bool = var_28_bool; // 0x8ca Mov
	return 0; // 0x8cc Return
	
Label_2253:
	var_15_bool = 0; // 0x8cd MovB
	return 0; // 0x8ce Return
}


func_1740(var_57_bool)
{
	var_59_bool = 0; var_60_bool = 0; // 0x6cc PushV
	IsDead(var_60_bool); // 0x6cd ObjFunc
	var_57_bool = var_60_bool; // 0x6cf Mov
	return 2; // 0x6d0 Return
}


func_2255(var_30_object, var_31_string)
{
	var_32_string = "unholster"; // 0x8d0 PushS
	var_33_bool = var_31_string == var_32_string; // 0x8d1 Eq
	if(var_33_bool == 0) goto Label_2264; // 0x8d2 JumpB
	var_34_object = Obj(); // 0x8d3 PushV
	var_34_object = var_30_object; // 0x8d4 Mov
	func_2429(); // 0x8d5 NEW_2
	goto Label_2279; // 0x8d7 Jump
	
Label_2279:
	return 0; // 0x8e7 Return
	
Label_2264:
	var_35_string = "player_shot"; // 0x8d8 PushS
	var_36_bool = var_31_string == var_35_string; // 0x8d9 Eq
	if(var_36_bool == 0) goto Label_2272; // 0x8da JumpB
	var_37_object = Obj(); // 0x8db PushV
	var_37_object = var_30_object; // 0x8dc Mov
	func_2434(); // 0x8dd NEW_2
	goto Label_2279; // 0x8df Jump
	
Label_2272:
	var_38_string = "battle"; // 0x8e0 PushS
	var_39_bool = var_31_string == var_38_string; // 0x8e1 Eq
	if(var_39_bool == 0) goto Label_2279; // 0x8e2 JumpB
	var_40_object = Obj(); // 0x8e3 PushV
	var_40_object = var_30_object; // 0x8e4 Mov
	func_2439(); // 0x8e5 NEW_2
}


func_1745(var_46_bool, var_47_object)
{
	var_48_object = Obj(); var_49_object = Obj(); var_50_object = Obj(); var_51_object = Obj(); // 0x6d1 PushV
	var_52_bool = var_47_object == 0; // 0x6d2 NullEq
	if(var_52_bool == 0) goto Label_1750; // 0x6d3 JumpB
	var_46_bool = 0; // 0x6d4 MovB
	return 4; // 0x6d5 Return
	
Label_1750:
	var_53_bool = 0; // 0x6d6 PushV
	var_53_bool = 0; // 0x6d7 MovB
	var_54_string = "IsDead"; // 0x6d8 PushS
	var_55_int = 1; // 0x6d9 PushI
	var_56_bool = IsFuncExist(var_47_object, var_54_string, var_55_int); // 0x6da FuncExist
	if(var_56_bool == 0) goto Label_1762; // 0x6db JumpB
	var_57_bool = 0; var_58_object = Obj(); // 0x6dc PushV
	var_58_object = var_47_object; // 0x6dd Mov
	func_1740(var_58_object); // 0x6de NEW_2
	if(var_57_bool == 0) goto Label_1762; // 0x6e0 JumpB
	var_53_bool = 1; // 0x6e1 MovB
	
Label_1762:
	if(var_53_bool == 0) goto Label_1765; // 0x6e2 JumpB
	var_46_bool = 0; // 0x6e3 MovB
	return 4; // 0x6e4 Return
	
Label_1765:
	GetScene(var_50_object); // 0x6e5 Func
	var_61_bool = var_50_object == 0; // 0x6e7 NullEq
	if(var_61_bool == 0) goto Label_1771; // 0x6e8 JumpB
	var_46_bool = 0; // 0x6e9 MovB
	return 4; // 0x6ea Return
	
Label_1771:
	GetScene(var_51_object); // 0x6eb ObjFunc
	var_62_bool = var_50_object != var_51_object; // 0x6ed Neq
	if(var_62_bool == 0) goto Label_1777; // 0x6ee JumpB
	var_46_bool = 0; // 0x6ef MovB
	return 4; // 0x6f0 Return
	
Label_1777:
	var_46_bool = 1; // 0x6f1 MovB
	return 4; // 0x6f2 Return
}


func_723(var_0_object, var_372_bool, var_373_float)
{
	var_374_int = 0; var_375_bool = 0; var_376_int = 0; var_377_string = ""; var_378_int = 0; var_379_bool = 0; var_380_int = 0; var_381_string = ""; // 0x2d3 PushV
	func_1062(var_381_string); // 0x2d5 NEW_2
	irand(var_378_int, var_381_string); // 0x2d7 Func
	var_382_int = 1; // 0x2d9 PushI
	var_378_int = var_378_int + var_382_int; // 0x2da Add2
	Face(var_0_object); // 0x2db Func
	var_383_bool = 1; // 0x2dd PushB
	SetAttackState(var_383_bool); // 0x2de Func
	func_2090(); // 0x2e1 NEW_2
	var_388_string = "all"; // 0x2e3 PushS
	var_389_string = "attack_begin"; // 0x2e4 PushS
	var_390_int = var_389_string + var_378_int; // 0x2e5 Add
	PlayAnimation(var_388_string, var_390_int); // 0x2e6 Func
	WaitForAnimEnd(); // 0x2e8 Func
	func_1030(var_380_int, var_381_string); // 0x2eb NEW_2
	var_406_bool = 0; var_407_object = Obj(); // 0x2ed PushV
	var_407_object = var_0_object; // 0x2ee MovT
	func_1781(var_406_bool, var_407_object); // 0x2ef NEW_2
	var_408_bool = var_406_bool == 0; // 0x2f1 Not
	if(var_408_bool == 0) goto Label_759; // 0x2f2 JumpB
	StopAsync(); // 0x2f3 Func
	var_372_bool = 0; // 0x2f5 MovB
	return 8; // 0x2f6 Return
	
Label_759:
	var_409_float = 0; var_410_int = 0; // 0x2f7 PushV
	var_409_float = var_373_float; // 0x2f8 Mov
	var_410_int = var_378_int; // 0x2f9 Mov
	func_684(var_381_string, var_409_float, var_410_int); // 0x2fa NEW_2
	var_491_string = "all"; // 0x2fc PushS
	var_492_string = "attack_middle"; // 0x2fd PushS
	var_493_int = var_492_string + var_378_int; // 0x2fe Add
	HasAnimation(var_379_bool, var_491_string, var_493_int); // 0x2ff Func
	var_494_bool = var_379_bool; // 0x301 Push
	if(var_494_bool == 0) goto Label_840; // 0x302 JumpB
	func_2090(); // 0x304 NEW_2
	var_495_string = "all"; // 0x306 PushS
	var_496_string = "attack_middle"; // 0x307 PushS
	var_497_int = var_496_string + var_378_int; // 0x308 Add
	PlayAnimation(var_495_string, var_497_int); // 0x309 Func
	WaitForAnimEnd(); // 0x30b Func
	func_1062(var_381_string); // 0x30e NEW_2
	var_498_bool = 0; var_499_object = Obj(); // 0x310 PushV
	var_499_object = var_0_object; // 0x311 MovT
	func_1781(var_498_bool, var_499_object); // 0x312 NEW_2
	var_500_bool = var_498_bool == 0; // 0x314 Not
	if(var_500_bool == 0) goto Label_794; // 0x315 JumpB
	StopAsync(); // 0x316 Func
	var_372_bool = 0; // 0x318 MovB
	return 8; // 0x319 Return
	
Label_794:
	var_501_float = 0; var_502_int = 0; // 0x31a PushV
	var_501_float = var_373_float; // 0x31b Mov
	var_502_int = var_378_int; // 0x31c Mov
	func_684(var_381_string, var_501_float, var_502_int); // 0x31d NEW_2
	var_380_int = 1; // 0x31f MovI
	
Label_800:
	var_503_string = "attack_middle"; // 0x320 PushS
	var_504_int = var_503_string + var_378_int; // 0x321 Add
	var_505_string = "_"; // 0x322 PushS
	var_506_int = var_504_int + var_505_string; // 0x323 Add
	var_381_string = var_506_int + var_380_int; // 0x324 Add2
	var_507_string = "all"; // 0x325 PushS
	HasAnimation(var_379_bool, var_507_string, var_381_string); // 0x326 Func
	var_508_bool = var_379_bool == 0; // 0x328 Not
	if(var_508_bool == 0) goto Label_811; // 0x329 JumpB
	goto Label_840; // 0x32a Jump
	
Label_840:
	var_509_bool = 0; // 0x348 PushB
	SetAttackState(var_509_bool); // 0x349 Func
	var_510_string = "all"; // 0x34b PushS
	var_511_string = "attack_end"; // 0x34c PushS
	var_512_int = var_511_string + var_378_int; // 0x34d Add
	PlayAnimation(var_510_string, var_512_int); // 0x34e Func
	var_513_bool = 0; // 0x350 PushV
	func_1076(var_513_bool); // 0x351 NEW_2
	if(var_513_bool == 0) goto Label_858; // 0x353 JumpB
	var_514_bool = 0; var_515_float = 0; // 0x354 PushV
	var_515_float = 0.75; // 0x355 MovF
	func_860(var_514_bool, var_515_float); // 0x356 NEW_2
	StopAsync(); // 0x358 Func
	
Label_858:
	var_372_bool = 1; // 0x35a MovB
	return 8; // 0x35b Return
	
Label_811:
	func_2090(); // 0x32c NEW_2
	var_523_string = "all"; // 0x32e PushS
	PlayAnimation(var_523_string, var_381_string); // 0x32f Func
	WaitForAnimEnd(); // 0x331 Func
	func_1062(var_381_string); // 0x334 NEW_2
	var_524_bool = 0; var_525_object = Obj(); // 0x336 PushV
	var_525_object = var_0_object; // 0x337 MovT
	func_1781(var_524_bool, var_525_object); // 0x338 NEW_2
	var_526_bool = var_524_bool == 0; // 0x33a Not
	if(var_526_bool == 0) goto Label_832; // 0x33b JumpB
	StopAsync(); // 0x33c Func
	var_372_bool = 0; // 0x33e MovB
	return 8; // 0x33f Return
	
Label_832:
	var_527_float = 0; var_528_int = 0; // 0x340 PushV
	var_527_float = var_373_float; // 0x341 Mov
	var_528_int = var_378_int; // 0x342 Mov
	func_684(var_381_string, var_527_float, var_528_int); // 0x343 NEW_2
	var_529_int = 1; // 0x345 PushI
	var_380_int = var_380_int + var_529_int; // 0x346 Add2
	goto Label_800; // 0x347 Jump
}


func_2280(var_12_bool, var_13_object)
{
	var_14_bool = 0; var_15_bool = 0; // 0x8e8 PushV
	var_16_bool = 0; // 0x8e9 PushV
	var_16_bool = 0; // 0x8ea MovB
	var_17_bool = 0; var_18_object = Obj(); // 0x8eb PushV
	var_18_object = var_13_object; // 0x8ec Mov
	func_2426(var_18_object); // 0x8ed NEW_2
	if(var_17_bool == 0) goto Label_2294; // 0x8ef JumpB
	var_19_bool = 0; var_20_object = Obj(); // 0x8f0 PushV
	var_20_object = var_13_object; // 0x8f1 Mov
	func_1650(var_19_bool, var_20_object); // 0x8f2 NEW_2
	if(var_19_bool == 0) goto Label_2294; // 0x8f4 JumpB
	var_16_bool = 1; // 0x8f5 MovB
	
Label_2294:
	if(var_16_bool == 0) goto Label_2301; // 0x8f6 JumpB
	IsWeaponHolstered(var_15_bool); // 0x8f7 ObjFunc
	var_23_bool = var_15_bool == 0; // 0x8f9 Not
	if(var_23_bool == 0) goto Label_2301; // 0x8fa JumpB
	var_12_bool = 1; // 0x8fb MovB
	return 2; // 0x8fc Return
	
Label_2301:
	var_12_bool = 0; // 0x8fd MovB
	return 2; // 0x8fe Return
}


func_1781(var_42_bool, var_43_object)
{
	var_44_int = 0; var_45_int = 0; // 0x6f5 PushV
	var_46_bool = 0; var_47_object = Obj(); // 0x6f6 PushV
	var_47_object = var_43_object; // 0x6f7 Mov
	func_1745(var_46_bool, var_47_object); // 0x6f8 NEW_2
	var_63_bool = var_46_bool == 0; // 0x6fa Not
	if(var_63_bool == 0) goto Label_1790; // 0x6fb JumpB
	var_42_bool = 0; // 0x6fc MovB
	return 2; // 0x6fd Return
	
Label_1790:
	var_64_bool = 0; var_65_object = Obj(); var_66_string = ""; // 0x6fe PushV
	var_65_object = var_43_object; // 0x6ff Mov
	var_66_string = "noaccess"; // 0x700 MovS
	func_1655(var_64_bool, var_65_object, var_66_string); // 0x701 NEW_2
	var_67_bool = var_64_bool == 0; // 0x703 Not
	if(var_67_bool == 0) goto Label_1799; // 0x704 JumpB
	var_42_bool = 1; // 0x705 MovB
	return 2; // 0x706 Return
	
Label_1799:
	var_68_string = "noaccess"; // 0x707 PushS
	GetProperty(var_68_string, var_45_int); // 0x708 ObjFunc
	var_69_int = 0; // 0x70a PushI
	var_42_bool = var_45_int == var_69_int; // 0x70b Eq2
	return 2; // 0x70c Return
}


func_2303(var_24_object)
{
	var_25_object = Obj(); // 0x900 PushV
	var_25_object = var_24_object; // 0x901 Mov
	func_2429(); // 0x902 NEW_2
	return 0; // 0x904 Return
}


func_2309(var_14_object)
{
	var_15_bool = 0; var_16_object = Obj(); // 0x906 PushV
	var_16_object = var_14_object; // 0x907 Mov
	func_1650(var_15_bool, var_16_object); // 0x908 NEW_2
	if(var_15_bool == 0) goto Label_2321; // 0x90a JumpB
	var_19_object = Obj(); // 0x90b PushV
	func_2025(var_19_object); // 0x90c NEW_2
	var_22_float = -0.03; // 0x90e PushF
	ReportReputationChange(var_14_object, var_19_object, var_22_float); // 0x90f Func
	
Label_2321:
	return 0; // 0x911 Return
}


func_1805(var_28_object)
{
	var_29_bool = 0; var_30_int = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_string = ""; var_36_bool = 0; var_37_int = 0; var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_string = ""; // 0x70d PushV
	var_43_bool = var_28_object == 0; // 0x70e NullEq
	if(var_43_bool == 0) goto Label_1809; // 0x70f JumpB
	return 14; // 0x710 Return
	
Label_1809:
	IsDead(var_36_bool); // 0x711 Func
	var_44_bool = var_36_bool; // 0x713 Push
	if(var_44_bool == 0) goto Label_1814; // 0x714 JumpB
	return 14; // 0x715 Return
	
Label_1814:
	GetSecondaryAnimationType(var_37_int); // 0x716 Func
	var_45_int = 0; // 0x718 PushI
	var_46_bool = var_37_int < var_45_int; // 0x719 LT
	if(var_46_bool == 0) goto Label_1820; // 0x71a JumpB
	return 14; // 0x71b Return
	
Label_1820:
	GetPosition(var_38_cvector); // 0x71c ObjFunc
	GetPosition(var_39_cvector); // 0x71e Func
	GetDirection(var_40_cvector); // 0x720 Func
	var_41_cvector = var_39_cvector - var_38_cvector; // 0x722 Sub2
	var_47_float = GetByIndex(var_41_cvector, 0); // 0x723 PushE
	var_48_float = GetByIndex(var_40_cvector, 0); // 0x724 PushE
	var_49_float = var_47_float * var_48_float; // 0x725 Mult
	var_50_float = GetByIndex(var_41_cvector, 2); // 0x726 PushE
	var_51_float = GetByIndex(var_40_cvector, 2); // 0x727 PushE
	var_52_float = var_50_float * var_51_float; // 0x728 Mult
	var_53_int = var_49_float + var_52_float; // 0x729 Add
	var_54_int = 0; // 0x72a PushI
	var_55_bool = var_53_int >= var_54_int; // 0x72b GE
	if(var_55_bool == 0) goto Label_1839; // 0x72c JumpB
	var_42_string = "fhit"; // 0x72d MovS
	goto Label_1840; // 0x72e Jump
	
Label_1840:
	var_56_string = "hit_react"; // 0x730 PushS
	var_57_string = "1"; // 0x731 PushS
	var_58_int = var_42_string + var_57_string; // 0x732 Add
	var_59_string = "2"; // 0x733 PushS
	var_60_int = var_42_string + var_59_string; // 0x734 Add
	var_61_int = -10; // 0x735 PushI
	FadeSecondaryAnimation(var_56_string, var_58_int, var_60_int, var_61_int); // 0x736 Func
	return 14; // 0x738 Return
	
Label_1839:
	var_42_string = "bhit"; // 0x72f MovS
}


func_1296(var_0_object, var_1_int, var_19_int)
{
	var_20_int = 0; // 0x511 PushI
	var_21_bool = var_19_int != var_20_int; // 0x512 Neq
	if(var_21_bool == 0) goto Label_1301; // 0x513 JumpB
	return 0; // 0x514 Return
	
Label_1301:
	var_22_bool = 0; var_23_object = Obj(); // 0x515 PushV
	var_23_object = var_1_int; // 0x516 MovT
	func_1334(var_22_bool, var_23_object); // 0x517 NEW_2
	var_58_bool = var_22_bool == 0; // 0x519 Not
	if(var_58_bool == 0) goto Label_1308; // 0x51a JumpB
	var_0_object = 1; // 0x51b TMovB
	
Label_1308:
	var_59_int = 0; // 0x51c PushI
	KillTimer(var_59_int); // 0x51d Func
	Stop(); // 0x51f Func
	return 0; // 0x521 Return
}


func_2322(var_12_bool, var_13_string)
{
	var_14_object = Obj(); var_15_object = Obj(); // 0x912 PushV
	var_16_string = "heal"; // 0x913 PushS
	var_17_bool = var_13_string == var_16_string; // 0x914 Eq
	if(var_17_bool == 0) goto Label_2336; // 0x915 JumpB
	var_18_string = "player"; // 0x916 PushS
	FindActor(var_15_object, var_18_string); // 0x917 Func
	var_19_bool = 0; var_20_object = Obj(); // 0x919 PushV
	var_20_object = var_15_object; // 0x91a Mov
	func_2441(var_20_object); // 0x91b NEW_2
	var_12_bool = var_19_bool; // 0x91c Mov
	return 2; // 0x91e Return
	
Label_2336:
	var_12_bool = 0; // 0x920 MovB
	return 2; // 0x921 Return
}


func_2338(var_21_string)
{
	var_22_object = Obj(); var_23_object = Obj(); // 0x922 PushV
	var_24_string = "heal"; // 0x923 PushS
	var_25_bool = var_21_string == var_24_string; // 0x924 Eq
	if(var_25_bool == 0) goto Label_2350; // 0x925 JumpB
	var_26_string = "player"; // 0x926 PushS
	FindActor(var_23_object, var_26_string); // 0x927 Func
	var_27_object = Obj(); // 0x929 PushV
	var_27_object = var_23_object; // 0x92a Mov
	func_2444(); // 0x92b NEW_2
	var_23_object = 0; // 0x92d SetNull
	
Label_2350:
	return 2; // 0x92e Return
}


func_1318(var_0_object)
{
	var_0_object = 1; // 0x526 TMovB
	var_15_int = 0; // 0x527 PushI
	KillTimer(var_15_int); // 0x528 Func
	Stop(); // 0x52a Func
	return 0; // 0x52c Return
}


func_2351(var_68_string, var_69_int)
{
	var_70_string = ""; var_71_string = ""; // 0x92f PushV
	var_71_string = "idle"; // 0x930 MovS
	var_72_int = var_69_int; // 0x931 Push
	if(var_72_int == 0) goto Label_2356; // 0x932 JumpB
	var_71_string = var_71_string + var_69_int; // 0x933 Add2
	
Label_2356:
	var_68_string = var_71_string; // 0x934 Mov
	return 2; // 0x935 Return
}


func_2358(var_62_int)
{
	var_63_int = 0; var_64_bool = 0; var_65_int = 0; var_66_bool = 0; // 0x936 PushV
	var_65_int = 0; // 0x937 MovI
	
Label_2360:
	var_67_string = "all"; // 0x938 PushS
	var_68_string = ""; var_69_int = 0; // 0x939 PushV
	var_69_int = var_65_int; // 0x93a Mov
	func_2351(var_68_string, var_69_int); // 0x93b NEW_2
	HasAnimation(var_66_bool, var_67_string, var_68_string); // 0x93d Func
	var_73_bool = var_66_bool == 0; // 0x93f Not
	if(var_73_bool == 0) goto Label_2370; // 0x940 JumpB
	goto Label_2373; // 0x941 Jump
	
Label_2373:
	var_62_int = var_65_int; // 0x945 Mov
	return 4; // 0x946 Return
	
Label_2370:
	var_74_int = 1; // 0x942 PushI
	var_65_int = var_65_int + var_74_int; // 0x943 Add2
	goto Label_2360; // 0x944 Jump
}


func_1334(var_205_bool, var_206_object)
{
	var_207_bool = 0; var_208_object = Obj(); // 0x537 PushV
	var_208_object = var_206_object; // 0x538 Mov
	func_1781(var_207_bool, var_208_object); // 0x539 NEW_2
	var_205_bool = var_207_bool; // 0x53a Mov
	return 0; // 0x53c Return
}


func_1849(var_15_object, var_16_int, var_17_float)
{
	var_18_cvector = CVector(0,0,0); var_19_object = Obj(); var_20_int = 0; var_21_bool = 0; var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_int = 0; var_25_int = 0; var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_object = Obj(); var_29_int = 0; var_30_bool = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_int = 0; var_34_int = 0; var_35_cvector = CVector(0,0,0); // 0x739 PushV
	var_36_bool = 0; // 0x73a PushV
	var_36_bool = 0; // 0x73b MovB
	var_37_bool = 0; // 0x73c PushV
	var_37_bool = 0; // 0x73d MovB
	var_38_object = var_15_object; // 0x73e Push
	if(var_38_object == 0) goto Label_1860; // 0x73f JumpB
	var_39_int = 4; // 0x740 PushI
	var_40_bool = var_16_int != var_39_int; // 0x741 Neq
	if(var_40_bool == 0) goto Label_1860; // 0x742 JumpB
	var_37_bool = 1; // 0x743 MovB
	
Label_1860:
	if(var_37_bool == 0) goto Label_1865; // 0x744 JumpB
	var_41_int = 5; // 0x745 PushI
	var_42_bool = var_16_int != var_41_int; // 0x746 Neq
	if(var_42_bool == 0) goto Label_1865; // 0x747 JumpB
	var_36_bool = 1; // 0x748 MovB
	
Label_1865:
	if(var_36_bool == 0) goto Label_1912; // 0x749 JumpB
	var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); // 0x74a PushV
	var_45_cvector = CVector(0,0,0); var_46_object = Obj(); // 0x74b PushV
	var_46_object = var_15_object; // 0x74c Mov
	func_1643(var_46_object); // 0x74d NEW_2
	var_44_cvector = var_45_cvector; // 0x74e Mov
	func_2031(var_43_cvector, var_44_cvector); // 0x750 NEW_2
	var_27_cvector = var_43_cvector; // 0x751 Mov
	CreateVectorVector(var_28_object); // 0x753 Func
	var_29_int = 1; // 0x755 MovI
	
Label_1878:
	var_56_string = "hit"; // 0x756 PushS
	var_57_int = var_56_string + var_29_int; // 0x757 Add
	GetGeometryLocator(var_57_int, var_30_bool, var_31_cvector, var_32_cvector); // 0x758 Func
	var_58_bool = var_30_bool == 0; // 0x75a Not
	if(var_58_bool == 0) goto Label_1885; // 0x75b JumpB
	goto Label_1894; // 0x75c Jump
	
Label_1894:
	size(var_33_int); // 0x766 ObjFunc
	var_59_int = var_33_int; // 0x768 Push
	if(var_59_int == 0) goto Label_1911; // 0x769 JumpB
	irand(var_34_int, var_33_int); // 0x76a Func
	get(var_35_cvector, var_34_int); // 0x76c ObjFunc
	var_60_object = Obj(); var_61_int = 0; var_62_float = 0; var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0); // 0x76e PushV
	var_60_object = var_15_object; // 0x76f Mov
	var_61_int = var_16_int; // 0x770 Mov
	var_62_float = var_17_float; // 0x771 Mov
	var_63_cvector = var_35_cvector; // 0x772 Mov
	var_64_cvector = -var_27_cvector; // 0x773 Neg2
	func_1917(var_62_float, var_63_cvector, var_64_cvector); // 0x774 NEW_2
	return 18; // 0x776 Return
	
Label_1911:
	var_28_object = 0; // 0x777 SetNull
	
Label_1912:
	var_105_object = Obj(); // 0x778 PushV
	var_105_object = var_15_object; // 0x779 Mov
	func_1805(var_105_object); // 0x77a NEW_2
	return 18; // 0x77c Return
	
Label_1885:
	var_106_int = var_32_cvector | var_27_cvector; // 0x75d Or
	var_107_float = 0.70711; // 0x75e PushF
	var_108_bool = var_106_int >= var_107_float; // 0x75f GE
	if(var_108_bool == 0) goto Label_1891; // 0x760 JumpB
	add(var_31_cvector); // 0x761 ObjFunc
	
Label_1891:
	var_109_int = 1; // 0x763 PushI
	var_29_int = var_29_int + var_109_int; // 0x764 Add2
	goto Label_1878; // 0x765 Jump
}


func_1341(var_223_string)
{
	var_223_string = "walk"; // 0x53d MovS
	return 0; // 0x53e Return
}


func_1343(var_224_string)
{
	var_224_string = "run"; // 0x53f MovS
	return 0; // 0x540 Return
}


func_320()
{
	var_46_int = 0; var_47_int = 0; var_48_int = 0; var_49_int = 0; var_50_bool = 0; var_51_float = 0; var_52_bool = 0; var_53_int = 0; var_54_int = 0; var_55_int = 0; var_56_int = 0; var_57_bool = 0; var_58_float = 0; var_59_bool = 0; // 0x140 PushV
	WaitForAnimEnd(); // 0x141 Func
	var_60_bool = 0; // 0x143 PushV
	func_1942(var_60_bool); // 0x144 NEW_2
	var_61_bool = var_60_bool == 0; // 0x146 Not
	if(var_61_bool == 0) goto Label_329; // 0x147 JumpB
	return 14; // 0x148 Return
	
Label_329:
	var_62_int = 0; // 0x149 PushV
	func_2358(var_62_int); // 0x14a NEW_2
	var_53_int = var_62_int; // 0x14b Mov
	var_54_int = 0; // 0x14d MovI
	
Label_334:
	var_75_bool = 0; // 0x14e PushV
	var_75_bool = 0; // 0x14f MovB
	var_76_int = 5; // 0x150 PushI
	var_77_bool = var_54_int < var_76_int; // 0x151 LT
	if(var_77_bool == 0) goto Label_344; // 0x152 JumpB
	var_78_bool = 0; // 0x153 PushV
	func_1942(var_78_bool); // 0x154 NEW_2
	if(var_78_bool == 0) goto Label_344; // 0x156 JumpB
	var_75_bool = 1; // 0x157 MovB
	
Label_344:
	if(var_75_bool == 0) goto Label_396; // 0x158 JumpB
	var_79_int = 3; // 0x159 PushI
	irand(var_55_int, var_79_int); // 0x15a Func
	var_80_int = 0; // 0x15c PushI
	var_81_bool = var_55_int == var_80_int; // 0x15d Eq
	if(var_81_bool == 0) goto Label_368; // 0x15e JumpB
	var_82_int = var_53_int; // 0x15f Push
	if(var_82_int == 0) goto Label_367; // 0x160 JumpB
	irand(var_56_int, var_53_int); // 0x161 Func
	var_83_string = "all"; // 0x163 PushS
	var_84_string = ""; var_85_int = 0; // 0x164 PushV
	var_85_int = var_56_int; // 0x165 Mov
	func_2351(var_84_string, var_85_int); // 0x166 NEW_2
	PlayAnimation(var_83_string, var_84_string); // 0x168 Func
	WaitForAnimEnd(var_57_bool); // 0x16a Func
	var_86_bool = var_57_bool == 0; // 0x16c Not
	if(var_86_bool == 0) goto Label_367; // 0x16d JumpB
	goto Label_396; // 0x16e Jump
	
Label_396:
	ResetAAS(); // 0x18c Func
	return 14; // 0x18e Return
	
Label_367:
	goto Label_385; // 0x16f Jump
	
Label_385:
	var_87_bool = 0; // 0x181 PushV
	func_399(var_87_bool); // 0x182 NEW_2
	var_88_bool = var_87_bool == 0; // 0x184 Not
	if(var_88_bool == 0) goto Label_391; // 0x185 JumpB
	goto Label_396; // 0x186 Jump
	
Label_391:
	ResetAAS(); // 0x187 Func
	var_89_int = 1; // 0x189 PushI
	var_54_int = var_54_int + var_89_int; // 0x18a Add2
	goto Label_334; // 0x18b Jump
	
Label_368:
	var_90_int = 1; // 0x170 PushI
	var_91_bool = var_55_int == var_90_int; // 0x171 Eq
	if(var_91_bool == 0) goto Label_382; // 0x172 JumpB
	var_92_int = 4; // 0x173 PushI
	rand(var_58_float, var_92_int); // 0x174 Func
	var_93_int = 1; // 0x176 PushI
	var_94_int = var_58_float + var_93_int; // 0x177 Add
	Sleep(var_94_int, var_59_bool); // 0x178 Func
	var_95_bool = var_59_bool == 0; // 0x17a Not
	if(var_95_bool == 0) goto Label_381; // 0x17b JumpB
	goto Label_396; // 0x17c Jump
	
Label_381:
	goto Label_385; // 0x17d Jump
	
Label_382:
	var_96_int = var_54_int; // 0x17e Push
	if(var_96_int == 0) goto Label_385; // 0x17f JumpB
	goto Label_396; // 0x180 Jump
}


func_1345(var_44_bool)
{
	var_44_bool = 1; // 0x541 MovB
	return 0; // 0x542 Return
}


func_1347(var_36_object, var_37_cvector)
{
	var_38_object = Obj(); var_39_object = Obj(); // 0x543 PushV
	var_40_int = 1; // 0x544 PushI
	var_41_int = 1; // 0x545 PushI
	FindPathTo(var_39_object, var_37_cvector, var_40_int, var_41_int); // 0x546 Func
	var_36_object = var_39_object; // 0x548 Mov
	return 2; // 0x549 Return
}


func_2375(var_40_int, var_41_object)
{
	var_42_bool = 0; var_43_object = Obj(); // 0x948 PushV
	var_43_object = var_41_object; // 0x949 Mov
	func_1781(var_42_bool, var_43_object); // 0x94a NEW_2
	if(var_42_bool == 0) goto Label_2383; // 0x94c JumpB
	var_40_int = 2; // 0x94d MovI
	goto Label_2384; // 0x94e Jump
	
Label_2384:
	return 0; // 0x950 Return
	
Label_2383:
	var_40_int = 0; // 0x94f MovI
}


func_2385(var_75_object)
{
	var_76_object = Obj(); // 0x952 PushV
	var_76_object = var_75_object; // 0x953 Mov
	TaskCall(2); // 0x954 TaskCall
	func_406(var_76_object); // 0x955 NEW_2
	TaskReturn(); // 0x956 TaskReturn
	return 0; // 0x958 Return
}


func_2393(var_37_int, var_38_object)
{
	var_40_int = 0; var_41_object = Obj(); // 0x95a PushV
	var_41_object = var_38_object; // 0x95b Mov
	func_2375(var_40_int, var_41_object); // 0x95c NEW_2
	var_37_int = var_40_int; // 0x95d Mov
	return 0; // 0x95f Return
}


func_1369()
{
	var_13_bool = 0; // 0x559 PushV
	func_1942(var_13_bool); // 0x55a NEW_2
	var_16_bool = var_13_bool == 0; // 0x55c Not
	if(var_16_bool == 0) goto Label_1377; // 0x55d JumpB
	func_2425(); // 0x55f NEW_2
	
Label_1377:
	return 0; // 0x561 Return
}


func_860(var_514_bool, var_515_float)
{
	var_516_float = 0; var_517_bool = 0; var_518_float = 0; var_519_bool = 0; // 0x35c PushV
	rand(var_518_float); // 0x35d Func
	var_520_bool = var_518_float < var_515_float; // 0x35f LT
	if(var_520_bool == 0) goto Label_880; // 0x360 JumpB
	
Label_865:
	IsAnimationPlaying(var_519_bool); // 0x361 Func
	var_521_bool = var_519_bool == 0; // 0x363 Not
	if(var_521_bool == 0) goto Label_870; // 0x364 JumpB
	goto Label_879; // 0x365 Jump
	
Label_879:
	goto Label_885; // 0x36f Jump
	
Label_885:
	var_514_bool = 0; // 0x375 MovB
	return 4; // 0x376 Return
	
Label_870:
	var_522_bool = 0; // 0x366 PushV
	func_958(var_522_bool); // 0x367 NEW_2
	if(var_522_bool == 0) goto Label_876; // 0x369 JumpB
	var_514_bool = 1; // 0x36a MovB
	return 4; // 0x36b Return
	
Label_876:
	sync(); // 0x36c Func
	goto Label_865; // 0x36e Jump
	
Label_880:
	WaitForAnimEnd(); // 0x370 Func
	func_1062(var_519_bool); // 0x373 NEW_2
}


func_2400(var_74_object)
{
	var_75_object = Obj(); // 0x961 PushV
	var_75_object = var_74_object; // 0x962 Mov
	func_2385(var_75_object); // 0x963 NEW_2
	return 0; // 0x965 Return
}


func_2406(var_14_int)
{
	var_14_int = 0; // 0x967 MovI
	return 0; // 0x968 Return
}


func_2409()
{
	return 0; // 0x96a Return
}


func_2411(var_41_int)
{
	var_41_int = 0; // 0x96c MovI
	return 0; // 0x96d Return
}


func_2414()
{
	return 0; // 0x96f Return
}


func_2416(var_14_int)
{
	var_14_int = 2; // 0x971 MovI
	return 0; // 0x972 Return
}


func_2419(var_20_object)
{
	var_21_object = Obj(); // 0x974 PushV
	var_21_object = var_20_object; // 0x975 Mov
	func_2446(var_21_object); // 0x976 NEW_2
	return 0; // 0x978 Return
}


func_887(var_0_object, var_311_bool, var_312_float)
{
	var_313_bool = 0; var_314_cvector = CVector(0,0,0); var_315_cvector = CVector(0,0,0); var_316_cvector = CVector(0,0,0); var_317_float = 0; var_318_bool = 0; var_319_cvector = CVector(0,0,0); var_320_cvector = CVector(0,0,0); var_321_cvector = CVector(0,0,0); var_322_float = 0; // 0x377 PushV
	
Label_888:
	IsAnimationPlaying(var_318_bool); // 0x378 Func
	var_323_bool = var_318_bool == 0; // 0x37a Not
	if(var_323_bool == 0) goto Label_893; // 0x37b JumpB
	goto Label_925; // 0x37c Jump
	
Label_925:
	func_1062(var_322_float); // 0x39e NEW_2
	var_311_bool = 0; // 0x3a0 MovB
	return 10; // 0x3a1 Return
	
Label_893:
	var_324_bool = 0; // 0x37d PushV
	func_958(var_324_bool); // 0x37e NEW_2
	if(var_324_bool == 0) goto Label_899; // 0x380 JumpB
	var_311_bool = 1; // 0x381 MovB
	return 10; // 0x382 Return
	
Label_899:
	var_367_bool = 0; var_368_object = Obj(); // 0x383 PushV
	var_368_object = var_0_object; // 0x384 MovT
	func_1781(var_367_bool, var_368_object); // 0x385 NEW_2
	var_369_bool = var_367_bool == 0; // 0x387 Not
	if(var_369_bool == 0) goto Label_907; // 0x388 JumpB
	var_311_bool = 0; // 0x389 MovB
	return 10; // 0x38a Return
	
Label_907:
	GetPFPosition(var_319_cvector); // 0x38b TObjFunc
	GetPFPosition(var_320_cvector); // 0x38d Func
	var_321_cvector = var_319_cvector - var_320_cvector; // 0x38f Sub2
	var_322_float = var_321_cvector | var_321_cvector; // 0x390 Or2
	var_370_float = var_312_float * var_312_float; // 0x391 Mult
	var_371_bool = var_322_float < var_370_float; // 0x392 LT
	if(var_371_bool == 0) goto Label_922; // 0x393 JumpB
	var_372_bool = 0; var_373_float = 0; // 0x394 PushV
	var_373_float = var_312_float; // 0x395 Mov
	func_723(var_322_float, var_372_bool, var_373_float); // 0x396 NEW_2
	var_311_bool = 1; // 0x398 MovB
	return 10; // 0x399 Return
	
Label_922:
	sync(); // 0x39a Func
	goto Label_888; // 0x39c Jump
}


func_2425()
{
	return 0; // 0x979 Return
}


func_2426(var_17_bool)
{
	var_17_bool = 0; // 0x97b MovB
	return 0; // 0x97c Return
}


func_1917(var_17_object, var_20_cvector, var_21_cvector)
{
	var_22_object = Obj(); var_23_object = Obj(); var_24_object = Obj(); var_25_object = Obj(); // 0x77d PushV
	GetScene(var_24_object); // 0x77e Func
	var_26_string = "scripted"; // 0x780 PushS
	var_27_string = "blood_dir.xml"; // 0x781 PushS
	AddActorByType(var_25_object, var_26_string, var_24_object, var_20_cvector, var_21_cvector, var_27_string); // 0x782 Func
	var_28_object = Obj(); // 0x784 PushV
	var_28_object = var_17_object; // 0x785 Mov
	func_1805(var_28_object); // 0x786 NEW_2
	return 4; // 0x788 Return
}


func_2429()
{
	return 0; // 0x97e Return
}


func_2431(var_24_bool)
{
	var_24_bool = 0; // 0x980 MovB
	return 0; // 0x981 Return
}


func_2434()
{
	return 0; // 0x983 Return
}


func_2436(var_28_bool)
{
	var_28_bool = 0; // 0x985 MovB
	return 0; // 0x986 Return
}


func_2439()
{
	return 0; // 0x988 Return
}


func_2441(var_19_bool)
{
	var_19_bool = 0; // 0x98a MovB
	return 0; // 0x98b Return
}


func_1931()
{
	var_258_cvector = CVector(0,0,0); var_259_cvector = CVector(0,0,0); var_260_cvector = CVector(0,0,0); var_261_cvector = CVector(0,0,0); var_262_cvector = CVector(0,0,0); var_263_cvector = CVector(0,0,0); // 0x78b PushV
	GetPosition(var_261_cvector); // 0x78c ObjFunc
	GetPosition(var_262_cvector); // 0x78e Func
	var_263_cvector = var_261_cvector - var_262_cvector; // 0x790 Sub2
	var_264_float = GetByIndex(var_263_cvector, 0); // 0x791 PushE
	var_265_float = GetByIndex(var_263_cvector, 2); // 0x792 PushE
	RotateAsync(var_264_float, var_265_float); // 0x793 Func
	return 6; // 0x795 Return
}


func_2444()
{
	return 0; // 0x98d Return
}


func_2446(var_21_object)
{
	var_22_bool = 0; var_23_bool = 0; // 0x98e PushV
	var_24_bool = GlobalVars[0]; // 0x98f PushGE
	if(var_24_bool == 0) goto Label_2458; // 0x990 JumpB
	IsOverrideActive(var_23_bool); // 0x991 Func
	var_25_bool = var_23_bool == 0; // 0x993 Not
	if(var_25_bool == 0) goto Label_2457; // 0x994 JumpB
	var_26_object = Obj(); // 0x995 PushV
	var_26_object = var_21_object; // 0x996 Mov
	func_2107(var_26_object); // 0x997 NEW_2
	
Label_2457:
	return 2; // 0x999 Return
	
Label_2458:
	return 2; // 0x99a Return
}


func_399(var_87_bool)
{
	var_87_bool = 1; // 0x18f MovB
	return 0; // 0x190 Return
}


func_401()
{
	StopAnimation(); // 0x191 Func
	StopGroup0(); // 0x193 Func
	return 0; // 0x195 Return
}


func_1942(var_13_bool)
{
	var_14_bool = 0; var_15_bool = 0; // 0x796 PushV
	IsLoaded(var_15_bool); // 0x797 Func
	var_13_bool = var_15_bool; // 0x799 Mov
	return 2; // 0x79a Return
}


func_406(var_76_object)
{
	var_83_object = Obj(); var_84_bool = 0; var_85_float = 0; // 0x197 PushV
	var_83_object = var_76_object; // 0x198 Mov
	var_84_bool = 1; // 0x199 MovB
	var_85_float = 180.0; // 0x19a MovF
	func_420(var_79_int, var_80_bool, var_81_float, var_82_int, var_76_object, var_83_object, var_84_bool, var_85_float); // 0x19b NEW_2
	return 0; // 0x19d Return
}


func_1947(var_171_object)
{
	var_172_float = 0; var_173_cvector = CVector(0,0,0); var_174_float = 0; var_175_cvector = CVector(0,0,0); // 0x79b PushV
	GetEyesHeight(var_174_float); // 0x79c ObjFunc
	var_175_cvector = CVector(0.0, 0.0, 0.0); // 0x79e MovV
	var_176_float = GetByIndex(var_175_cvector, 1); // 0x79f PushE
	var_176_float = var_174_float; // 0x7a0 Mov
	SetByIndex(var_175_cvector, 1) = var_176_float; // 0x7a1 PopE
	var_177_string = "head"; // 0x7a2 PushS
	LookAsync(var_171_object, var_177_string, var_175_cvector); // 0x7a3 Func
	return 4; // 0x7a5 Return
}


func_2459()
{
	var_12_bool = GlobalVars[0]; // 0x99b PushGE
	var_12_bool = 0; // 0x99c MovB
	GlobalVars[0] = var_12_bool; // 0x99d PopGE
	return 0; // 0x99e Return
}


func_414(var_420_float)
{
	var_420_float = 0.05; // 0x19f MovF
	return 0; // 0x1a0 Return
}


func_2463(var_16_bool, var_18_object)
{
	var_20_string = ""; var_21_string = ""; // 0x99f PushV
	var_22_bool = 0; var_23_object = Obj(); var_24_string = ""; // 0x9a0 PushV
	var_23_object = var_18_object; // 0x9a1 Mov
	var_24_string = "class"; // 0x9a2 MovS
	func_1655(var_22_bool, var_23_object, var_24_string); // 0x9a3 NEW_2
	var_31_bool = var_22_bool == 0; // 0x9a5 Not
	if(var_31_bool == 0) goto Label_2473; // 0x9a6 JumpB
	var_16_bool = 0; // 0x9a7 MovB
	return 2; // 0x9a8 Return
	
Label_2473:
	var_32_string = "class"; // 0x9a9 PushS
	GetProperty(var_32_string, var_21_string); // 0x9aa ObjFunc
	var_16_bool = 1; // 0x9ac MovB
	var_33_string = "butcher"; // 0x9ad PushS
	var_34_bool = var_21_string == var_33_string; // 0x9ae Eq
	if(var_34_bool == 0) goto Label_2484; // 0x9af JumpB
	var_35_string = "morlok"; // 0x9b0 PushS
	var_36_bool = var_21_string == var_35_string; // 0x9b1 Eq
	if(var_36_bool == 0) goto Label_2484; // 0x9b2 JumpB
	var_16_bool = 0; // 0x9b3 MovB
	
Label_2484:
	return 2; // 0x9b4 Return
}


func_417(var_427_int)
{
	var_427_int = 0; // 0x1a2 MovI
	return 0; // 0x1a3 Return
}


func_930(var_0_object, var_326_bool)
{
	var_327_cvector = CVector(0,0,0); var_328_cvector = CVector(0,0,0); var_329_cvector = CVector(0,0,0); var_330_float = 0; var_331_float = 0; var_332_cvector = CVector(0,0,0); var_333_cvector = CVector(0,0,0); var_334_cvector = CVector(0,0,0); var_335_float = 0; var_336_float = 0; // 0x3a2 PushV
	var_337_bool = 0; var_338_object = Obj(); // 0x3a3 PushV
	var_338_object = var_0_object; // 0x3a4 MovT
	func_1781(var_337_bool, var_338_object); // 0x3a5 NEW_2
	var_339_bool = var_337_bool == 0; // 0x3a7 Not
	if(var_339_bool == 0) goto Label_939; // 0x3a8 JumpB
	var_326_bool = 0; // 0x3a9 MovB
	return 10; // 0x3aa Return
	
Label_939:
	var_340_bool = 0; // 0x3ab PushV
	func_1019(var_336_float, var_340_bool); // 0x3ac NEW_2
	if(var_340_bool == 0) goto Label_956; // 0x3ae JumpB
	GetPFPosition(var_332_cvector); // 0x3af TObjFunc
	GetPFPosition(var_333_cvector); // 0x3b1 Func
	var_334_cvector = var_332_cvector - var_333_cvector; // 0x3b3 Sub2
	var_335_float = var_334_cvector | var_334_cvector; // 0x3b4 Or2
	GetAttackDistance(var_336_float); // 0x3b5 TObjFunc
	var_341_int = 50; // 0x3b7 PushI
	var_336_float = var_336_float + var_341_int; // 0x3b8 Add2
	var_342_float = var_336_float * var_336_float; // 0x3b9 Mult
	var_326_bool = var_335_float <= var_342_float; // 0x3ba LE2
	return 10; // 0x3bb Return
	
Label_956:
	var_326_bool = 0; // 0x3bc MovB
	return 10; // 0x3bd Return
}


func_420(var_0_object, var_3_bool, var_5_int, var_83_object, var_84_bool, var_85_float, var_160_bool, var_252_bool)
{
	var_86_float = 0; var_87_cvector = CVector(0,0,0); var_88_cvector = CVector(0,0,0); var_89_bool = 0; var_90_bool = 0; var_91_float = 0; var_92_cvector = CVector(0,0,0); var_93_float = 0; var_94_cvector = CVector(0,0,0); var_95_bool = 0; var_96_float = 0; var_97_float = 0; var_98_cvector = CVector(0,0,0); var_99_cvector = CVector(0,0,0); var_100_bool = 0; var_101_bool = 0; var_102_float = 0; var_103_cvector = CVector(0,0,0); var_104_float = 0; var_105_cvector = CVector(0,0,0); var_106_bool = 0; var_107_float = 0; // 0x1a4 PushV
	func_649(var_105_cvector, var_106_bool, var_107_float); // 0x1a6 NEW_2
	var_5_int = 0; // 0x1a8 TMovI
	var_130_string = "@GetAttackDistance"; // 0x1a9 PushS
	var_131_int = 1; // 0x1aa PushI
	var_132_bool = IsFuncExist(var_83_object, var_130_string, var_131_int); // 0x1ab FuncExist
	if(var_132_bool == 0) goto Label_434; // 0x1ac JumpB
	GetAttackDistance(var_97_float); // 0x1ad ObjFunc
	var_133_int = 50; // 0x1af PushI
	var_97_float = var_97_float + var_133_int; // 0x1b0 Add2
	goto Label_435; // 0x1b1 Jump
	
Label_435:
	var_134_int = 150; // 0x1b3 PushI
	var_135_bool = var_97_float >= var_134_int; // 0x1b4 GE
	if(var_135_bool == 0) goto Label_439; // 0x1b5 JumpB
	var_97_float = 150; // 0x1b6 MovI
	
Label_439:
	var_3_bool = 0; // 0x1b7 TMovB
	var_0_object = var_83_object; // 0x1b8 TMov
	IsPlayerActor(var_0_object, var_100_bool); // 0x1b9 Func
	var_136_bool = var_100_bool; // 0x1bb Push
	if(var_136_bool == 0) goto Label_453; // 0x1bc JumpB
	var_137_string = "attack"; // 0x1bd PushS
	PlayGlobalMusic(var_137_string); // 0x1be Func
	var_138_object = Obj(); // 0x1c0 PushV
	func_2025(var_138_object); // 0x1c1 NEW_2
	SendPlayerEnemy(var_83_object, var_138_object); // 0x1c3 Func
	
Label_453:
	var_141_bool = var_84_bool; // 0x1c5 Push
	if(var_141_bool == 0) goto Label_457; // 0x1c6 JumpB
	var_101_bool = 0; // 0x1c7 MovB
	goto Label_458; // 0x1c8 Jump
	
Label_458:
	var_142_float = 400.0; // 0x1ca PushF
	var_102_float = var_142_float + var_97_float; // 0x1cb Add2
	
Label_460:
	var_143_bool = 0; // 0x1cc PushV
	var_143_bool = 0; // 0x1cd MovB
	var_144_bool = 0; var_145_object = Obj(); // 0x1ce PushV
	var_145_object = var_0_object; // 0x1cf MovT
	func_1781(var_144_bool, var_145_object); // 0x1d0 NEW_2
	if(var_144_bool == 0) goto Label_470; // 0x1d2 JumpB
	var_146_bool = var_3_bool == 0; // 0x1d3 Not
	if(var_146_bool == 0) goto Label_470; // 0x1d4 JumpB
	var_143_bool = 1; // 0x1d5 MovB
	
Label_470:
	if(var_143_bool == 0) goto Label_632; // 0x1d6 JumpB
	func_1062(var_107_float); // 0x1d8 NEW_2
	GetPFPosition(var_98_cvector); // 0x1da TObjFunc
	GetPFPosition(var_99_cvector); // 0x1dc Func
	var_103_cvector = var_98_cvector - var_99_cvector; // 0x1de Sub2
	var_104_float = var_103_cvector | var_103_cvector; // 0x1df Or2
	var_152_float = var_102_float * var_102_float; // 0x1e0 Mult
	var_153_bool = var_104_float >= var_152_float; // 0x1e1 GE
	if(var_153_bool == 0) goto Label_498; // 0x1e2 JumpB
	var_154_bool = 0; var_155_object = Obj(); var_156_float = 0; var_157_float = 0; var_158_bool = 0; var_159_bool = 0; // 0x1e3 PushV
	var_155_object = var_0_object; // 0x1e4 MovT
	var_156_float = var_97_float; // 0x1e5 Mov
	var_157_float = 3000.0; // 0x1e6 MovF
	var_158_bool = 1; // 0x1e7 MovB
	var_159_bool = 0; // 0x1e8 MovB
	TaskCall(3); // 0x1e9 TaskCall
	func_1089(var_162_bool, var_154_bool, var_155_object, var_156_float, var_157_float, var_158_bool, var_159_bool); // 0x1ea NEW_2
	TaskReturn(); // 0x1eb TaskReturn
	var_237_bool = var_160_bool == 0; // 0x1ed Not
	if(var_237_bool == 0) goto Label_496; // 0x1ee JumpB
	goto Label_632; // 0x1ef Jump
	
Label_632:
	WaitForAnimEnd(); // 0x278 Func
	var_238_bool = var_3_bool; // 0x27a PushT
	if(var_238_bool == 0) goto Label_637; // 0x27b JumpB
	return 22; // 0x27c Return
	
Label_637:
	var_239_string = "all"; // 0x27d PushS
	var_240_string = "attack_off"; // 0x27e PushS
	PlayAnimation(var_239_string, var_240_string); // 0x27f Func
	WaitForAnimEnd(); // 0x281 Func
	var_241_bool = var_100_bool; // 0x283 Push
	if(var_241_bool == 0) goto Label_648; // 0x284 JumpB
	var_242_float = 2.0; // 0x285 PushF
	Sleep(var_242_float); // 0x286 Func
	
Label_648:
	return 22; // 0x288 Return
	
Label_496:
	var_101_bool = 0; // 0x1f0 MovB
	goto Label_631; // 0x1f1 Jump
	
Label_631:
	goto Label_460; // 0x277 Jump
	
Label_498:
	var_243_float = var_85_float * var_85_float; // 0x1f2 Mult
	var_244_bool = var_104_float >= var_243_float; // 0x1f3 GE
	if(var_244_bool == 0) goto Label_623; // 0x1f4 JumpB
	GetPFPosition(var_105_cvector); // 0x1f5 TObjFunc
	CanReachByPF(var_106_bool, var_105_cvector); // 0x1f7 Func
	var_245_bool = var_106_bool == 0; // 0x1f9 Not
	if(var_245_bool == 0) goto Label_522; // 0x1fa JumpB
	var_246_bool = 0; var_247_object = Obj(); var_248_float = 0; var_249_float = 0; var_250_bool = 0; var_251_bool = 0; // 0x1fb PushV
	var_247_object = var_0_object; // 0x1fc MovT
	var_248_float = var_97_float; // 0x1fd Mov
	var_249_float = 3000.0; // 0x1fe MovF
	var_250_bool = 1; // 0x1ff MovB
	var_251_bool = 0; // 0x200 MovB
	TaskCall(3); // 0x201 TaskCall
	func_1089(var_254_bool, var_246_bool, var_247_object, var_248_float, var_249_float, var_250_bool, var_251_bool); // 0x202 NEW_2
	TaskReturn(); // 0x203 TaskReturn
	var_255_bool = var_252_bool == 0; // 0x205 Not
	if(var_255_bool == 0) goto Label_520; // 0x206 JumpB
	goto Label_632; // 0x207 Jump
	
Label_520:
	var_101_bool = 0; // 0x208 MovB
	goto Label_460; // 0x209 Jump
	
Label_522:
	var_256_bool = var_101_bool == 0; // 0x20a Not
	if(var_256_bool == 0) goto Label_547; // 0x20b JumpB
	var_257_object = Obj(); // 0x20c PushV
	var_257_object = var_0_object; // 0x20d MovT
	func_1931(); // 0x20e NEW_2
	var_266_string = "all"; // 0x210 PushS
	var_267_string = "attack_on"; // 0x211 PushS
	PlayAnimation(var_266_string, var_267_string); // 0x212 Func
	WaitForAnimEnd(); // 0x214 Func
	func_1062(var_107_float); // 0x217 NEW_2
	StopAsync(); // 0x219 Func
	var_101_bool = 1; // 0x21b MovB
	var_268_bool = 0; var_269_object = Obj(); // 0x21c PushV
	var_269_object = var_0_object; // 0x21d MovT
	func_1781(var_268_bool, var_269_object); // 0x21e NEW_2
	var_270_bool = var_268_bool == 0; // 0x220 Not
	if(var_270_bool == 0) goto Label_547; // 0x221 JumpB
	goto Label_632; // 0x222 Jump
	
Label_547:
	rand(var_107_float); // 0x223 Func
	var_271_bool = 0; // 0x225 PushV
	var_271_bool = 1; // 0x226 MovB
	var_272_float = 0.25; // 0x227 PushF
	var_273_bool = var_107_float < var_272_float; // 0x228 LT
	if(var_273_bool == 0) goto Label_559; // 0x229 JumpB
	var_274_bool = 0; // 0x22a PushV
	func_1019(var_271_bool, var_274_bool); // 0x22b NEW_2
	if(var_274_bool == 0) goto Label_559; // 0x22d JumpB
	var_271_bool = 0; // 0x22e MovB
	
Label_559:
	if(var_271_bool == 0) goto Label_576; // 0x22f JumpB
	Face(var_0_object); // 0x230 Func
	func_1069(); // 0x233 NEW_2
	var_309_string = "all"; // 0x235 PushS
	var_310_string = "attack_stay"; // 0x236 PushS
	PlayAnimation(var_309_string, var_310_string); // 0x237 Func
	var_311_bool = 0; var_312_float = 0; // 0x239 PushV
	var_312_float = var_85_float; // 0x23a Mov
	func_887(var_107_float, var_311_bool, var_312_float); // 0x23b NEW_2
	StopAsync(); // 0x23d Func
	goto Label_622; // 0x23f Jump
	
Label_622:
	goto Label_631; // 0x26e Jump
	
Label_576:
	Face(var_0_object); // 0x240 Func
	var_530_string = "all"; // 0x242 PushS
	var_531_string = "fjump"; // 0x243 PushS
	PlayAnimation(var_530_string, var_531_string); // 0x244 Func
	WaitForAnimEnd(); // 0x246 Func
	func_1062(var_107_float); // 0x249 NEW_2
	var_532_cvector = CVector(0.0, 0.0, 0.0); // 0x24b PushVec
	SetSpeed(var_532_cvector); // 0x24c Func
	Stop(); // 0x24e Func
	StopAsync(); // 0x250 Func
	var_533_bool = 0; // 0x252 PushV
	func_1019(var_107_float, var_533_bool); // 0x253 NEW_2
	var_534_bool = var_533_bool == 0; // 0x255 Not
	if(var_534_bool == 0) goto Label_622; // 0x256 JumpB
	var_535_bool = 0; var_536_object = Obj(); // 0x257 PushV
	var_536_object = var_0_object; // 0x258 MovT
	func_1781(var_535_bool, var_536_object); // 0x259 NEW_2
	var_537_bool = var_535_bool == 0; // 0x25b Not
	if(var_537_bool == 0) goto Label_606; // 0x25c JumpB
	goto Label_632; // 0x25d Jump
	
Label_606:
	GetPFPosition(var_98_cvector); // 0x25e TObjFunc
	GetPFPosition(var_99_cvector); // 0x260 Func
	var_103_cvector = var_98_cvector - var_99_cvector; // 0x262 Sub2
	var_104_float = var_103_cvector | var_103_cvector; // 0x263 Or2
	var_538_float = var_85_float * var_85_float; // 0x264 Mult
	var_539_bool = var_104_float < var_538_float; // 0x265 LT
	if(var_539_bool == 0) goto Label_622; // 0x266 JumpB
	var_540_bool = 0; var_541_float = 0; // 0x267 PushV
	var_541_float = var_85_float; // 0x268 Mov
	func_723(var_107_float, var_540_bool, var_541_float); // 0x269 NEW_2
	var_542_bool = var_540_bool == 0; // 0x26b Not
	if(var_542_bool == 0) goto Label_622; // 0x26c JumpB
	goto Label_632; // 0x26d Jump
	
Label_623:
	var_543_bool = 0; var_544_float = 0; // 0x26f PushV
	var_544_float = var_85_float; // 0x270 Mov
	func_723(var_107_float, var_543_bool, var_544_float); // 0x271 NEW_2
	var_545_bool = var_543_bool == 0; // 0x273 Not
	if(var_545_bool == 0) goto Label_630; // 0x274 JumpB
	goto Label_632; // 0x275 Jump
	
Label_630:
	var_101_bool = 1; // 0x276 MovB
	
Label_457:
	var_101_bool = 1; // 0x1c9 MovB
	
Label_434:
	var_97_float = var_85_float; // 0x1b2 Mov
}


func_1958(var_121_string, var_122_int, var_123_int)
{
	var_124_bool = 0; var_125_bool = 0; // 0x7a6 PushV
	var_126_bool = 0; var_127_int = 0; var_128_int = 0; // 0x7a7 PushV
	var_127_int = var_122_int; // 0x7a8 Mov
	var_128_int = var_123_int; // 0x7a9 Mov
	func_2059(var_126_bool, var_127_int, var_128_int); // 0x7aa NEW_2
	if(var_126_bool == 0) goto Label_1968; // 0x7ac JumpB
	var_129_int = 0; // 0x7ad PushI
	AddItem(var_125_bool, var_121_string, var_129_int); // 0x7ae Func
	
Label_1968:
	return 2; // 0x7b0 Return
}


func_1969(var_105_string, var_106_int, var_107_int, var_108_int)
{
	var_109_int = 0; var_110_bool = 0; var_111_int = 0; var_112_bool = 0; // 0x7b1 PushV
	var_113_bool = 0; var_114_int = 0; var_115_int = 0; // 0x7b2 PushV
	var_114_int = var_106_int; // 0x7b3 Mov
	var_115_int = var_107_int; // 0x7b4 Mov
	func_2059(var_113_bool, var_114_int, var_115_int); // 0x7b5 NEW_2
	if(var_113_bool == 0) goto Label_1983; // 0x7b7 JumpB
	irand(var_111_int, var_108_int); // 0x7b8 Func
	var_118_int = 0; // 0x7ba PushI
	var_119_int = 1; // 0x7bb PushI
	var_120_int = var_111_int + var_119_int; // 0x7bc Add
	AddItem(var_112_bool, var_105_string, var_118_int, var_120_int); // 0x7bd Func
	
Label_1983:
	return 4; // 0x7bf Return
}


func_2485(var_94_object)
{
	var_95_bool = 0; var_96_object = Obj(); // 0x9b6 PushV
	var_96_object = var_94_object; // 0x9b7 Mov
	func_1650(var_95_bool, var_96_object); // 0x9b8 NEW_2
	if(var_95_bool == 0) goto Label_2501; // 0x9ba JumpB
	var_99_object = Obj(); // 0x9bb PushV
	func_2025(var_99_object); // 0x9bc NEW_2
	var_102_float = -0.07; // 0x9be PushF
	var_103_bool = 1; // 0x9bf PushB
	ReportReputationChange(var_94_object, var_99_object, var_102_float, var_103_bool); // 0x9c0 Func
	func_2161(); // 0x9c3 NEW_2
	
Label_2501:
	func_2137(); // 0x9c6 NEW_2
	var_150_bool = GlobalVars[0]; // 0x9c8 PushGE
	var_150_bool = 1; // 0x9c9 MovB
	GlobalVars[0] = var_150_bool; // 0x9ca PopGE
	var_151_int = 50; // 0x9cb PushI
	var_152_int = 40; // 0x9cc PushI
	SetRTEnvelope(var_151_int, var_152_int); // 0x9cd Func
	return 0; // 0x9cf Return
}


func_958(var_324_bool)
{
	var_325_bool = 0; // 0x3be PushV
	var_325_bool = 0; // 0x3bf MovB
	var_326_bool = 0; // 0x3c0 PushV
	func_930(var_325_bool, var_326_bool); // 0x3c1 NEW_2
	if(var_326_bool == 0) goto Label_969; // 0x3c3 JumpB
	var_343_bool = 0; // 0x3c4 PushV
	func_974(var_324_bool, var_325_bool, var_343_bool); // 0x3c5 NEW_2
	if(var_343_bool == 0) goto Label_969; // 0x3c7 JumpB
	var_325_bool = 1; // 0x3c8 MovB
	
Label_969:
	if(var_325_bool == 0) goto Label_972; // 0x3c9 JumpB
	var_324_bool = 1; // 0x3ca MovB
	return 0; // 0x3cb Return
	
Label_972:
	var_324_bool = 0; // 0x3cc MovB
	return 0; // 0x3cd Return
}


func_1984(var_37_string)
{
	var_38_bool = 0; var_39_int = 0; var_40_bool = 0; var_41_int = 0; var_42_bool = 0; var_43_float = 0; var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_bool = 0; var_47_int = 0; var_48_bool = 0; var_49_int = 0; var_50_bool = 0; var_51_float = 0; var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); // 0x7c0 PushV
	IsExisting3DSound(var_46_bool, var_37_string); // 0x7c1 Func
	var_54_bool = var_46_bool == 0; // 0x7c3 Not
	if(var_54_bool == 0) goto Label_2009; // 0x7c4 JumpB
	var_47_int = 0; // 0x7c5 MovI
	
Label_1990:
	var_55_int = 1; // 0x7c6 PushI
	var_56_int = var_47_int + var_55_int; // 0x7c7 Add
	var_57_int = var_37_string + var_56_int; // 0x7c8 Add
	IsExisting3DSound(var_48_bool, var_57_int); // 0x7c9 Func
	var_58_bool = var_48_bool == 0; // 0x7cb Not
	if(var_58_bool == 0) goto Label_1998; // 0x7cc JumpB
	goto Label_2001; // 0x7cd Jump
	
Label_2001:
	var_59_bool = var_47_int == 0; // 0x7d1 Not
	if(var_59_bool == 0) goto Label_2004; // 0x7d2 JumpB
	return 16; // 0x7d3 Return
	
Label_2004:
	irand(var_49_int, var_47_int); // 0x7d4 Func
	var_60_int = 1; // 0x7d6 PushI
	var_61_int = var_49_int + var_60_int; // 0x7d7 Add
	var_37_string = var_37_string + var_61_int; // 0x7d8 Add2
	
Label_2009:
	Is3DSoundLoaded(var_50_bool, var_37_string); // 0x7d9 Func
	var_62_bool = var_50_bool; // 0x7db Push
	if(var_62_bool == 0) goto Label_2024; // 0x7dc JumpB
	GetEyesHeight(var_51_float); // 0x7dd Func
	GetDirection(var_52_cvector); // 0x7df Func
	var_63_int = 50; // 0x7e1 PushI
	var_53_cvector = var_52_cvector * var_63_int; // 0x7e2 Mult2
	var_64_float = GetByIndex(var_53_cvector, 1); // 0x7e3 PushE
	var_64_float = var_64_float + var_51_float; // 0x7e4 Add2
	SetByIndex(var_53_cvector, 1) = var_64_float; // 0x7e5 PopE
	PlayGlobalSound(var_37_string, var_53_cvector); // 0x7e6 Func
	
Label_2024:
	return 16; // 0x7e8 Return
	
Label_1998:
	var_65_int = 1; // 0x7ce PushI
	var_47_int = var_47_int + var_65_int; // 0x7cf Add2
	goto Label_1990; // 0x7d0 Jump
}


func_974(var_0_object, var_4_float, var_343_bool)
{
	var_344_object = Obj(); var_345_bool = 0; var_346_float = 0; var_347_cvector = CVector(0,0,0); var_348_cvector = CVector(0,0,0); var_349_object = Obj(); var_350_bool = 0; var_351_float = 0; var_352_cvector = CVector(0,0,0); var_353_cvector = CVector(0,0,0); // 0x3ce PushV
	GetScene(var_349_object); // 0x3cf Func
	var_350_bool = 0; // 0x3d1 MovB
	
Label_978:
	var_354_cvector = CVector(0,0,0); var_355_object = Obj(); // 0x3d2 PushV
	var_355_object = var_0_object; // 0x3d3 MovT
	func_1643(var_355_object); // 0x3d4 NEW_2
	var_360_int = -var_354_cvector; // 0x3d6 Neg
	FindDirLength(var_351_float, var_360_int, var_351_float); // 0x3d7 Func
	var_361_bool = var_351_float < var_4_float; // 0x3d9 LT
	if(var_361_bool == 0) goto Label_988; // 0x3da JumpB
	goto Label_1016; // 0x3db Jump
	
Label_1016:
	var_343_bool = var_350_bool; // 0x3f8 Mov
	return 10; // 0x3f9 Return
	
Label_988:
	Face(var_0_object); // 0x3dc Func
	var_362_string = "all"; // 0x3de PushS
	var_363_string = "bjump"; // 0x3df PushS
	PlayAnimation(var_362_string, var_363_string); // 0x3e0 Func
	GetPFPosition(var_352_cvector); // 0x3e2 TObjFunc
	GetPFPosition(var_353_cvector); // 0x3e4 Func
	WaitForAnimEnd(); // 0x3e6 Func
	func_1062(var_353_cvector); // 0x3e9 NEW_2
	StopAsync(); // 0x3eb Func
	var_364_cvector = CVector(0.0, 0.0, 0.0); // 0x3ed PushVec
	SetSpeed(var_364_cvector); // 0x3ee Func
	var_350_bool = 1; // 0x3f0 MovB
	var_365_bool = 0; // 0x3f1 PushV
	func_930(var_353_cvector, var_365_bool); // 0x3f2 NEW_2
	var_366_bool = var_365_bool == 0; // 0x3f4 Not
	if(var_366_bool == 0) goto Label_1015; // 0x3f5 JumpB
	goto Label_1016; // 0x3f6 Jump
	
Label_1015:
	goto Label_978; // 0x3f7 Jump
}


func_2025(var_99_object)
{
	var_100_object = Obj(); var_101_object = Obj(); // 0x7e9 PushV
	self(var_101_object); // 0x7ea Func
	var_99_object = var_101_object; // 0x7ec Mov
	return 2; // 0x7ed Return
}


func_2031(var_43_cvector, var_44_cvector)
{
	var_51_float = 0; var_52_float = 0; // 0x7ef PushV
	var_53_int = var_44_cvector | var_44_cvector; // 0x7f0 Or
	var_52_float = sqrt(var_53_int); // 0x7f1 Sqrt2
	var_54_float = 0.0; // 0x7f2 PushF
	var_55_bool = var_52_float < var_54_float; // 0x7f3 LT
	if(var_55_bool == 0) goto Label_2039; // 0x7f4 JumpB
	var_43_cvector = CVector(0.0, 0.0, 0.0); // 0x7f5 MovV
	return 2; // 0x7f6 Return
	
Label_2039:
	var_43_cvector = var_44_cvector / var_44_cvector; // 0x7f7 Div2
	return 2; // 0x7f8 Return
}


func_2041(var_461_float, var_462_float, var_463_float)
{
	var_466_bool = var_462_float < var_463_float; // 0x7fa LT
	if(var_466_bool == 0) goto Label_2046; // 0x7fb JumpB
	var_461_float = var_462_float; // 0x7fc Mov
	goto Label_2047; // 0x7fd Jump
	
Label_2047:
	return 0; // 0x7ff Return
	
Label_2046:
	var_461_float = var_463_float; // 0x7fe Mov
}


func_1019(var_0_object, var_274_bool)
{
	var_275_bool = 0; var_276_bool = 0; // 0x3fb PushV
	var_277_string = "IsAttacking"; // 0x3fc PushS
	var_278_int = 1; // 0x3fd PushI
	var_279_bool = IsFuncExist(var_0_object, var_277_string, var_278_int); // 0x3fe FuncExist
	if(var_279_bool == 0) goto Label_1028; // 0x3ff JumpB
	IsAttacking(var_276_bool); // 0x400 TObjFunc
	var_274_bool = var_276_bool; // 0x402 Mov
	return 2; // 0x403 Return
	
Label_1028:
	var_274_bool = 0; // 0x404 MovB
	return 2; // 0x405 Return
}


