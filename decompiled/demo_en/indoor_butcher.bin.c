task_0_event_0(var_0_object, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_bool, var_11_bool)
{
	var_12_int = 0; var_13_int = 0; // 0xf PushV
	var_14_int = 0; var_15_object = Obj(); // 0x10 PushV
	var_15_object = var_11_bool; // 0x11 Mov
	func_2398(var_15_object); // 0x12 NEW_2
	var_13_int = var_14_int; // 0x13 Mov
	var_16_int = 0; // 0x15 PushI
	var_17_bool = var_13_int > var_16_int; // 0x16 GT
	if(var_17_bool == 0) goto Label_28; // 0x17 JumpB
	var_18_object = Obj(); // 0x18 PushV
	var_18_object = var_11_bool; // 0x19 Mov
	func_2401(var_18_object); // 0x1a NEW_2
	
Label_28:
	return 2; // 0x1c Return
}


task_0_event_6(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_bool, var_10_bool)
{
	func_2407(); // 0x1e NEW_2
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
	func_2398(var_15_object); // 0x9f NEW_2
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
	func_2401(var_20_object); // 0xad NEW_2
	
Label_175:
	return 2; // 0xaf Return
}


task_1_event_17(var_0_object, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_bool, var_11_bool)
{
	var_12_int = 0; var_13_int = 0; // 0xb0 PushV
	var_14_object = Obj(); // 0xb1 PushV
	var_14_object = var_11_bool; // 0xb2 Mov
	func_2299(var_14_object); // 0xb3 NEW_2
	var_23_int = 0; var_24_object = Obj(); // 0xb5 PushV
	var_24_object = var_11_bool; // 0xb6 Mov
	func_2365(var_23_int, var_24_object); // 0xb7 NEW_2
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
	func_2375(var_63_object); // 0xc5 NEW_2
	
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
	func_2445(var_19_bool); // 0xcd NEW_2
	if(var_16_bool == 0) goto Label_227; // 0xcf JumpB
	var_20_int = 0; var_21_object = Obj(); var_22_bool = 0; // 0xd0 PushV
	var_21_object = var_11_bool; // 0xd1 Mov
	var_22_bool = var_13_bool; // 0xd2 Mov
	func_2383(var_22_bool); // 0xd3 NEW_2
	var_15_int = var_20_int; // 0xd4 Mov
	var_23_int = 0; // 0xd6 PushI
	var_24_bool = var_15_int > var_23_int; // 0xd7 GT
	if(var_24_bool == 0) goto Label_227; // 0xd8 JumpB
	var_25_int = 1; // 0xd9 PushI
	var_26_bool = var_15_int > var_25_int; // 0xda GT
	if(var_26_bool == 0) goto Label_223; // 0xdb JumpB
	func_401(); // 0xdd NEW_2
	
Label_223:
	var_27_object = Obj(); // 0xdf PushV
	var_27_object = var_11_bool; // 0xe0 Mov
	func_2386(); // 0xe1 NEW_2
	
Label_227:
	return 2; // 0xe3 Return
}


task_1_event_40(var_0_object, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_bool, var_11_bool)
{
	var_12_int = 0; var_13_int = 0; // 0xe4 PushV
	var_14_int = 0; var_15_object = Obj(); // 0xe5 PushV
	var_15_object = var_11_bool; // 0xe6 Mov
	func_2388(var_15_object); // 0xe7 NEW_2
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
	func_2391(); // 0xf5 NEW_2
	
Label_247:
	return 2; // 0xf7 Return
}


task_1_event_42(var_0_object, var_1_string, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_float, var_7_int, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_bool)
{
	var_13_int = 0; var_14_int = 0; // 0xf8 PushV
	var_15_bool = 0; var_16_object = Obj(); var_17_string = ""; // 0xf9 PushV
	var_16_object = var_11_bool; // 0xfa Mov
	var_17_string = var_12_bool; // 0xfb Mov
	func_2213(var_15_bool, var_16_object, var_17_string); // 0xfc NEW_2
	if(var_15_bool == 0) goto Label_264; // 0xfe JumpB
	func_401(); // 0x100 NEW_2
	var_30_object = Obj(); var_31_string = ""; // 0x102 PushV
	var_30_object = var_11_bool; // 0x103 Mov
	var_31_string = var_12_bool; // 0x104 Mov
	func_2245(var_30_object, var_31_string); // 0x105 NEW_2
	goto Label_284; // 0x107 Jump
	
Label_284:
	return 2; // 0x11c Return
	
Label_264:
	var_41_int = 0; var_42_string = ""; var_43_object = Obj(); // 0x108 PushV
	var_42_string = var_12_bool; // 0x109 Mov
	var_43_object = var_11_bool; // 0x10a Mov
	func_2393(var_43_object); // 0x10b NEW_2
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
	func_2396(); // 0x11a NEW_2
}


task_1_event_26(var_0_string, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_bool, var_11_bool)
{
	var_12_bool = 0; var_13_string = ""; // 0x11e PushV
	var_13_string = var_11_bool; // 0x11f Mov
	func_2312(var_12_bool, var_13_string); // 0x120 NEW_2
	if(var_12_bool == 0) goto Label_298; // 0x122 JumpB
	func_401(); // 0x124 NEW_2
	var_21_string = ""; // 0x126 PushV
	var_21_string = var_11_bool; // 0x127 Mov
	func_2328(var_21_string); // 0x128 NEW_2
	
Label_298:
	return 0; // 0x12a Return
}


task_1_event_6(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_bool, var_10_bool)
{
	func_401(); // 0x12c NEW_2
	func_2407(); // 0x12f NEW_2
	return 0; // 0x131 Return
}


task_1_event_1(var_0_object, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_bool, var_11_bool)
{
	var_12_bool = 0; var_13_object = Obj(); // 0x133 PushV
	var_13_object = var_11_bool; // 0x134 Mov
	func_2270(var_12_bool, var_13_object); // 0x135 NEW_2
	if(var_12_bool == 0) goto Label_319; // 0x137 JumpB
	func_401(); // 0x139 NEW_2
	var_24_object = Obj(); // 0x13b PushV
	var_24_object = var_11_bool; // 0x13c Mov
	func_2293(var_24_object); // 0x13d NEW_2
	
Label_319:
	return 0; // 0x13f Return
}


task_3_event_6(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_bool, var_10_bool)
{
	func_1152(var_10_bool); // 0x43b NEW_2
	func_2407(); // 0x43e NEW_2
	return 0; // 0x440 Return
}


task_3_event_7(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_int, var_10_bool, var_11_bool)
{
	var_12_int = 1; // 0x473 PushI
	var_13_bool = var_11_bool == var_12_int; // 0x474 Eq
	if(var_13_bool == 0) goto Label_1147; // 0x475 JumpB
	var_14_object = Obj(); // 0x476 PushV
	var_14_object = var_1_int; // 0x477 MovT
	func_2071(var_14_object); // 0x478 NEW_2
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
	func_1944(var_15_object); // 0x499 NEW_2
	
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
	func_2189(); // 0x533 NEW_2
	return 0; // 0x535 Return
}


task_4_event_0(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_bool, var_10_bool, var_11_object)
{
	var_12_int = 0; var_13_int = 0; // 0x562 PushV
	var_14_int = 0; var_15_object = Obj(); // 0x563 PushV
	var_15_object = var_11_object; // 0x564 Mov
	func_2398(var_15_object); // 0x565 NEW_2
	var_13_int = var_14_int; // 0x566 Mov
	var_16_int = 0; // 0x568 PushI
	var_17_bool = var_13_int > var_16_int; // 0x569 GT
	if(var_17_bool == 0) goto Label_1397; // 0x56a JumpB
	var_18_int = 1; // 0x56b PushI
	var_19_bool = var_13_int > var_18_int; // 0x56c GT
	if(var_19_bool == 0) goto Label_1393; // 0x56d JumpB
	func_1608(var_12_int, var_13_int); // 0x56f NEW_2
	
Label_1393:
	var_20_object = Obj(); // 0x571 PushV
	var_20_object = var_11_object; // 0x572 Mov
	func_2401(var_20_object); // 0x573 NEW_2
	
Label_1397:
	return 2; // 0x575 Return
}


task_4_event_17(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_bool, var_10_bool, var_11_object)
{
	var_12_int = 0; var_13_int = 0; // 0x576 PushV
	var_14_object = Obj(); // 0x577 PushV
	var_14_object = var_11_object; // 0x578 Mov
	func_2299(var_14_object); // 0x579 NEW_2
	var_23_int = 0; var_24_object = Obj(); // 0x57b PushV
	var_24_object = var_11_object; // 0x57c Mov
	func_2365(var_23_int, var_24_object); // 0x57d NEW_2
	var_13_int = var_23_int; // 0x57e Mov
	var_59_int = 0; // 0x580 PushI
	var_60_bool = var_13_int > var_59_int; // 0x581 GT
	if(var_60_bool == 0) goto Label_1421; // 0x582 JumpB
	var_61_int = 1; // 0x583 PushI
	var_62_bool = var_13_int > var_61_int; // 0x584 GT
	if(var_62_bool == 0) goto Label_1417; // 0x585 JumpB
	func_1608(var_12_int, var_13_int); // 0x587 NEW_2
	
Label_1417:
	var_63_object = Obj(); // 0x589 PushV
	var_63_object = var_11_object; // 0x58a Mov
	func_2375(var_63_object); // 0x58b NEW_2
	
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
	func_2445(var_19_bool); // 0x593 NEW_2
	if(var_16_bool == 0) goto Label_1449; // 0x595 JumpB
	var_20_int = 0; var_21_object = Obj(); var_22_bool = 0; // 0x596 PushV
	var_21_object = var_11_object; // 0x597 Mov
	var_22_bool = var_13_bool; // 0x598 Mov
	func_2383(var_22_bool); // 0x599 NEW_2
	var_15_int = var_20_int; // 0x59a Mov
	var_23_int = 0; // 0x59c PushI
	var_24_bool = var_15_int > var_23_int; // 0x59d GT
	if(var_24_bool == 0) goto Label_1449; // 0x59e JumpB
	var_25_int = 1; // 0x59f PushI
	var_26_bool = var_15_int > var_25_int; // 0x5a0 GT
	if(var_26_bool == 0) goto Label_1445; // 0x5a1 JumpB
	func_1608(var_14_int, var_15_int); // 0x5a3 NEW_2
	
Label_1445:
	var_27_object = Obj(); // 0x5a5 PushV
	var_27_object = var_11_object; // 0x5a6 Mov
	func_2386(); // 0x5a7 NEW_2
	
Label_1449:
	return 2; // 0x5a9 Return
}


task_4_event_40(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_bool, var_10_bool, var_11_object)
{
	var_12_int = 0; var_13_int = 0; // 0x5aa PushV
	var_14_int = 0; var_15_object = Obj(); // 0x5ab PushV
	var_15_object = var_11_object; // 0x5ac Mov
	func_2388(var_15_object); // 0x5ad NEW_2
	var_13_int = var_14_int; // 0x5ae Mov
	var_16_int = 0; // 0x5b0 PushI
	var_17_bool = var_13_int > var_16_int; // 0x5b1 GT
	if(var_17_bool == 0) goto Label_1469; // 0x5b2 JumpB
	var_18_int = 1; // 0x5b3 PushI
	var_19_bool = var_13_int > var_18_int; // 0x5b4 GT
	if(var_19_bool == 0) goto Label_1465; // 0x5b5 JumpB
	func_1608(var_12_int, var_13_int); // 0x5b7 NEW_2
	
Label_1465:
	var_20_object = Obj(); // 0x5b9 PushV
	var_20_object = var_11_object; // 0x5ba Mov
	func_2391(); // 0x5bb NEW_2
	
Label_1469:
	return 2; // 0x5bd Return
}


task_4_event_42(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_bool, var_10_bool, var_11_object, var_12_string)
{
	var_13_int = 0; var_14_int = 0; // 0x5be PushV
	var_15_bool = 0; var_16_object = Obj(); var_17_string = ""; // 0x5bf PushV
	var_16_object = var_11_object; // 0x5c0 Mov
	var_17_string = var_12_string; // 0x5c1 Mov
	func_2213(var_15_bool, var_16_object, var_17_string); // 0x5c2 NEW_2
	if(var_15_bool == 0) goto Label_1486; // 0x5c4 JumpB
	func_1608(var_13_int, var_14_int); // 0x5c6 NEW_2
	var_30_object = Obj(); var_31_string = ""; // 0x5c8 PushV
	var_30_object = var_11_object; // 0x5c9 Mov
	var_31_string = var_12_string; // 0x5ca Mov
	func_2245(var_30_object, var_31_string); // 0x5cb NEW_2
	goto Label_1506; // 0x5cd Jump
	
Label_1506:
	return 2; // 0x5e2 Return
	
Label_1486:
	var_41_int = 0; var_42_string = ""; var_43_object = Obj(); // 0x5ce PushV
	var_42_string = var_12_string; // 0x5cf Mov
	var_43_object = var_11_object; // 0x5d0 Mov
	func_2393(var_43_object); // 0x5d1 NEW_2
	var_14_int = var_41_int; // 0x5d2 Mov
	var_44_int = 0; // 0x5d4 PushI
	var_45_bool = var_14_int > var_44_int; // 0x5d5 GT
	if(var_45_bool == 0) goto Label_1506; // 0x5d6 JumpB
	var_46_int = 1; // 0x5d7 PushI
	var_47_bool = var_14_int > var_46_int; // 0x5d8 GT
	if(var_47_bool == 0) goto Label_1501; // 0x5d9 JumpB
	func_1608(var_13_int, var_14_int); // 0x5db NEW_2
	
Label_1501:
	var_48_string = ""; var_49_object = Obj(); // 0x5dd PushV
	var_48_string = var_12_string; // 0x5de Mov
	var_49_object = var_11_object; // 0x5df Mov
	func_2396(); // 0x5e0 NEW_2
}


task_4_event_26(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_bool, var_10_bool, var_11_string)
{
	var_12_bool = 0; var_13_string = ""; // 0x5e4 PushV
	var_13_string = var_11_string; // 0x5e5 Mov
	func_2312(var_12_bool, var_13_string); // 0x5e6 NEW_2
	if(var_12_bool == 0) goto Label_1520; // 0x5e8 JumpB
	func_1608(var_10_bool, var_11_string); // 0x5ea NEW_2
	var_21_string = ""; // 0x5ec PushV
	var_21_string = var_11_string; // 0x5ed Mov
	func_2328(var_21_string); // 0x5ee NEW_2
	
Label_1520:
	return 0; // 0x5f0 Return
}


task_4_event_1(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_bool, var_10_bool, var_11_object)
{
	var_12_bool = 0; var_13_object = Obj(); // 0x5f2 PushV
	var_13_object = var_11_object; // 0x5f3 Mov
	func_2270(var_12_bool, var_13_object); // 0x5f4 NEW_2
	if(var_12_bool == 0) goto Label_1534; // 0x5f6 JumpB
	func_1608(var_10_bool, var_11_object); // 0x5f8 NEW_2
	var_24_object = Obj(); // 0x5fa PushV
	var_24_object = var_11_object; // 0x5fb Mov
	func_2293(var_24_object); // 0x5fc NEW_2
	
Label_1534:
	return 0; // 0x5fe Return
}


task_4_event_6(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_bool, var_10_bool)
{
	func_1608(var_9_bool, var_10_bool); // 0x600 NEW_2
	func_2407(); // 0x603 NEW_2
	return 0; // 0x605 Return
}


task_4_event_10(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_bool, var_10_bool, var_11_object)
{
	RequestClearPath(var_11_object); // 0x642 Func
	return 0; // 0x644 Return
}


task_4_event_28(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_bool, var_10_bool)
{
	Stop(); // 0x645 Func
	return 0; // 0x647 Return
}


task_4_event_41(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_bool, var_10_bool, var_11_object)
{
	func_1608(var_10_bool, var_11_object); // 0x651 NEW_2
	var_12_object = Obj(); // 0x653 PushV
	var_12_object = var_11_object; // 0x654 Mov
	func_2189(); // 0x655 NEW_2
	return 0; // 0x657 Return
}


event_16(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_bool, var_10_bool, var_11_object, var_12_string)
{
	var_13_float = 0; var_14_float = 0; // 0x880 PushV
	var_15_string = "health"; // 0x881 PushS
	var_16_bool = var_12_string == var_15_string; // 0x882 Eq
	if(var_16_bool == 0) goto Label_2188; // 0x883 JumpB
	var_17_string = "health"; // 0x884 PushS
	GetProperty(var_17_string, var_14_float); // 0x885 Func
	var_18_int = 0; // 0x887 PushI
	var_19_bool = var_14_float <= var_18_int; // 0x888 LE
	if(var_19_bool == 0) goto Label_2188; // 0x889 JumpB
	SignalDeath(var_11_object); // 0x88a Func
	
Label_2188:
	return 2; // 0x88c Return
}


event_41(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_bool, var_10_bool, var_11_object)
{
	var_12_object = Obj(); // 0x88e PushV
	var_12_object = var_11_object; // 0x88f Mov
	func_2168(var_12_object); // 0x890 NEW_2
	return 0; // 0x892 Return
}


event_22(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_bool, var_10_bool, var_11_object, var_12_int, var_13_float, var_14_float)
{
	var_15_object = Obj(); var_16_int = 0; var_17_float = 0; // 0x894 PushV
	var_15_object = var_11_object; // 0x895 Mov
	var_16_int = var_12_int; // 0x896 Mov
	var_17_float = var_13_float; // 0x897 Mov
	func_1846(var_15_object, var_16_int, var_17_float); // 0x898 NEW_2
	return 0; // 0x89a Return
}


event_43(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_bool, var_10_bool, var_11_object, var_12_int, var_13_float, var_14_float, var_15_cvector, var_16_cvector)
{
	var_17_object = Obj(); var_18_int = 0; var_19_float = 0; var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); // 0x89c PushV
	var_17_object = var_11_object; // 0x89d Mov
	var_18_int = var_12_int; // 0x89e Mov
	var_19_float = var_13_float; // 0x89f Mov
	var_20_cvector = var_15_cvector; // 0x8a0 Mov
	var_21_cvector = var_16_cvector; // 0x8a1 Mov
	func_1914(var_19_float, var_20_cvector, var_21_cvector); // 0x8a2 NEW_2
	return 0; // 0x8a4 Return
}


main(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_bool, var_10_bool)
{
	var_11_bool = 1; // 0x54b PushB
	SensePlayerOnly(var_11_bool); // 0x54c Func
	func_2441(); // 0x54f NEW_2
	func_1369(); // 0x552 NEW_2
	
Label_1364:
	func_1542(var_9_bool, var_10_bool); // 0x555 NEW_2
	goto Label_1364; // 0x557 Jump
}


func_0(var_13_object)
{
	EventDisable(0); // 0x1 EventDisable
	var_14_object = Obj(); // 0x2 PushV
	var_14_object = var_13_object; // 0x3 Mov
	func_33(var_14_object); // 0x4 NEW_2
	var_94_object = Obj(); // 0x6 PushV
	var_94_object = var_13_object; // 0x7 Mov
	func_2448(var_94_object); // 0x8 NEW_2
	EventEnable(0); // 0xa EventEnable
	
Label_11:
	Hold(); // 0xb Func
	goto Label_11; // 0xd Jump
}


func_1030(var_2_int, var_5_int)
{
	var_375_float = 0; var_376_int = 0; var_377_float = 0; var_378_int = 0; // 0x406 PushV
	var_379_bool = var_2_int == 0; // 0x407 Not
	if(var_379_bool == 0) goto Label_1034; // 0x408 JumpB
	return 4; // 0x409 Return
	
Label_1034:
	var_380_int = var_5_int; // 0x40a PushT
	if(var_380_int == 0) goto Label_1042; // 0x40b JumpB
	var_381_int = -1; // 0x40c PushI
	var_5_int = var_5_int + var_381_int; // 0x40d Add2
	var_382_int = 0; // 0x40e PushI
	var_383_bool = var_5_int > var_382_int; // 0x40f GT
	if(var_383_bool == 0) goto Label_1042; // 0x410 JumpB
	return 4; // 0x411 Return
	
Label_1042:
	rand(var_377_float); // 0x412 Func
	var_384_float = 0; // 0x414 PushV
	func_1080(var_384_float); // 0x415 NEW_2
	var_385_bool = var_377_float < var_384_float; // 0x417 LT
	if(var_385_bool == 0) goto Label_1061; // 0x418 JumpB
	irand(var_378_int, var_377_float); // 0x419 Func
	var_386_int = 1; // 0x41b PushI
	var_378_int = var_378_int + var_386_int; // 0x41c Add2
	var_387_string = "attack"; // 0x41d PushS
	var_388_int = var_387_string + var_378_int; // 0x41e Add
	Speak(var_388_int); // 0x41f Func
	var_389_int = 0; // 0x421 PushV
	func_1078(var_389_int); // 0x422 NEW_2
	var_5_int = var_389_int; // 0x423 TMov
	
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
	func_1345(var_32_float); // 0x615 NEW_2
	GetRandomPFPointInCircle(var_24_cvector, var_25_cvector, var_32_float, var_26_bool); // 0x617 Func
	var_33_bool = var_26_bool; // 0x619 Push
	if(var_33_bool == 0) goto Label_1564; // 0x61a JumpB
	goto Label_1568; // 0x61b Jump
	
Label_1568:
	goto Label_1570; // 0x620 Jump
	
Label_1570:
	var_34_object = Obj(); var_35_cvector = CVector(0,0,0); // 0x622 PushV
	var_35_cvector = var_24_cvector; // 0x623 Mov
	func_1347(var_34_object, var_35_cvector); // 0x624 NEW_2
	var_27_object = var_34_object; // 0x625 Mov
	var_40_bool = var_27_object != 0; // 0x627 NullNeq
	if(var_40_bool == 0) goto Label_1595; // 0x628 JumpB
	RotatePath(var_27_object, var_28_bool); // 0x629 Func
	var_41_bool = var_28_bool; // 0x62b Push
	if(var_41_bool == 0) goto Label_1594; // 0x62c JumpB
	var_42_bool = 0; // 0x62d PushV
	func_1624(var_42_bool); // 0x62e NEW_2
	FollowPath(var_27_object, var_42_bool, var_28_bool); // 0x630 Func
	var_27_object = 0; // 0x632 SetNull
	var_43_bool = var_28_bool; // 0x633 Push
	if(var_43_bool == 0) goto Label_1594; // 0x634 JumpB
	TaskCall(1); // 0x636 TaskCall
	func_320(); // 0x637 NEW_2
	TaskReturn(); // 0x638 TaskReturn
	
Label_1594:
	goto Label_1598; // 0x63a Jump
	
Label_1598:
	var_27_object = 0; // 0x63e SetNull
	goto Label_1550; // 0x63f Jump
	
Label_1595:
	var_95_int = 1; // 0x63b PushI
	Sleep(var_95_int); // 0x63c Func
	
Label_1564:
	var_96_int = 1; // 0x61c PushI
	Sleep(var_96_int); // 0x61d Func
	goto Label_1554; // 0x61f Jump
	
Label_1569:
	var_1_int = 0; // 0x621 TMovB
	
Label_1600:
	return 12; // 0x640 Return
}


func_2056(var_113_bool, var_114_int, var_115_int)
{
	var_116_int = 0; var_117_int = 0; // 0x808 PushV
	irand(var_117_int, var_115_int); // 0x809 Func
	var_113_bool = var_117_int < var_114_int; // 0x80b LT2
	return 2; // 0x80c Return
}


func_2061(var_463_float)
{
	var_464_object = Obj(); var_465_object = Obj(); // 0x80d PushV
	CreateFloatVector(var_465_object); // 0x80e Func
	add(var_463_float); // 0x810 ObjFunc
	var_466_int = 15; // 0x812 PushI
	SendWorldWndMessage(var_466_int, var_465_object); // 0x813 Func
	return 2; // 0x815 Return
}


func_2071(var_133_object)
{
	var_134_bool = 0; var_135_bool = 0; // 0x817 PushV
	IsPlayerActor(var_133_object, var_135_bool); // 0x818 Func
	var_136_bool = var_135_bool; // 0x81a Push
	if(var_136_bool == 0) goto Label_2079; // 0x81b JumpB
	var_137_string = "attack"; // 0x81c PushS
	PlayGlobalMusic(var_137_string); // 0x81d Func
	
Label_2079:
	return 2; // 0x81f Return
}


func_2080()
{
	var_368_object = Obj(); var_369_object = Obj(); // 0x820 PushV
	GetScene(var_369_object); // 0x821 Func
	var_370_string = "battle"; // 0x823 PushS
	var_371_object = Obj(); // 0x824 PushV
	func_2022(var_371_object); // 0x825 NEW_2
	BroadcastMessage(var_370_string, var_371_object, var_369_object); // 0x827 Func
	return 2; // 0x829 Return
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
	func_1981(var_89_string); // 0x67 NEW_2
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


func_1062(var_0_object)
{
	var_133_object = Obj(); // 0x426 PushV
	var_133_object = var_0_object; // 0x427 MovT
	func_2071(var_133_object); // 0x428 NEW_2
	return 0; // 0x42a Return
}


func_1067(var_468_int)
{
	var_468_int = 0; // 0x42b MovI
	return 0; // 0x42c Return
}


func_2091(var_130_int)
{
	var_131_int = 0; var_132_int = 0; // 0x82b PushV
	var_133_string = "branch"; // 0x82c PushS
	GetVariable(var_133_string, var_132_int); // 0x82d Func
	var_130_int = var_132_int; // 0x82f Mov
	return 2; // 0x830 Return
}


func_1069()
{
	var_264_string = ""; // 0x42d PushV
	var_264_string = "attack_stay"; // 0x42e MovS
	func_1981(var_264_string); // 0x42f NEW_2
	return 0; // 0x431 Return
}


func_2097(var_26_object)
{
	var_27_int = 0; // 0x832 PushV
	func_2091(var_27_int); // 0x833 NEW_2
	var_31_int = 1; // 0x835 PushI
	var_32_bool = var_27_int == var_31_int; // 0x836 Eq
	if(var_32_bool == 0) goto Label_2107; // 0x837 JumpB
	WorkWithCorpse(var_26_object); // 0x838 Func
	goto Label_2109; // 0x83a Jump
	
Label_2109:
	return 0; // 0x83d Return
	
Label_2107:
	Barter(var_26_object); // 0x83b Func
}


func_1074()
{
	return 0; // 0x433 Return
}


func_1076(var_493_bool)
{
	var_493_bool = 1; // 0x434 MovB
	return 0; // 0x435 Return
}


func_1078(var_389_int)
{
	var_389_int = 1; // 0x436 MovI
	return 0; // 0x437 Return
}


func_1080(var_384_float)
{
	var_384_float = 0.5; // 0x438 MovF
	return 0; // 0x439 Return
}


func_2110(var_136_string)
{
	var_137_object = Obj(); var_138_int = 0; var_139_bool = 0; var_140_object = Obj(); var_141_int = 0; var_142_bool = 0; // 0x83e PushV
	CreateInvItem(var_140_object); // 0x83f Func
	SetItemName(var_136_string); // 0x841 ObjFunc
	var_143_string = "Organ"; // 0x843 PushS
	var_144_int = 1; // 0x844 PushI
	SetProperty(var_143_string, var_144_int); // 0x845 ObjFunc
	GetItemID(var_141_int); // 0x847 ObjFunc
	var_145_int = 0; // 0x849 PushI
	var_146_int = 1; // 0x84a PushI
	AddItem(var_142_bool, var_140_object, var_145_int, var_146_int); // 0x84b Func
	return 6; // 0x84d Return
}


func_1089(var_2_int, var_140_bool, var_141_object, var_142_float, var_143_float, var_144_bool, var_145_bool)
{
	var_149_bool = 0; var_150_bool = 0; var_151_bool = 0; var_152_bool = 0; // 0x441 PushV
	var_153_object = Obj(); // 0x442 PushV
	var_153_object = var_141_object; // 0x443 Mov
	func_2071(var_153_object); // 0x444 NEW_2
	var_154_int = 1; // 0x446 PushI
	var_155_int = 5; // 0x447 PushI
	SetTimer(var_154_int, var_155_int); // 0x448 Func
	CanSee(var_151_bool, var_141_object); // 0x44a Func
	var_156_bool = var_151_bool; // 0x44c Push
	if(var_156_bool == 0) goto Label_1108; // 0x44d JumpB
	var_2_int = 1; // 0x44e TMovB
	var_157_object = Obj(); // 0x44f PushV
	var_157_object = var_141_object; // 0x450 Mov
	func_1944(var_157_object); // 0x451 NEW_2
	goto Label_1109; // 0x453 Jump
	
Label_1109:
	var_164_bool = 0; var_165_object = Obj(); // 0x455 PushV
	var_165_object = var_141_object; // 0x456 Mov
	func_1647(var_164_bool, var_165_object); // 0x457 NEW_2
	if(var_164_bool == 0) goto Label_1119; // 0x459 JumpB
	var_166_object = Obj(); // 0x45a PushV
	func_2022(var_166_object); // 0x45b NEW_2
	SendPlayerEnemy(var_141_object, var_166_object); // 0x45d Func
	
Label_1119:
	var_167_bool = 0; var_168_object = Obj(); var_169_float = 0; var_170_float = 0; var_171_bool = 0; var_172_bool = 0; // 0x45f PushV
	var_168_object = var_141_object; // 0x460 Mov
	var_169_float = var_142_float; // 0x461 Mov
	var_170_float = var_143_float; // 0x462 Mov
	var_171_bool = var_144_bool; // 0x463 Mov
	var_172_bool = var_145_bool; // 0x464 Mov
	func_1194(var_151_bool, var_152_bool, var_167_bool, var_168_object, var_169_float, var_170_float, var_171_bool, var_172_bool); // 0x465 NEW_2
	var_152_bool = var_167_bool; // 0x466 Mov
	var_218_int = var_2_int; // 0x468 PushT
	if(var_218_int == 0) goto Label_1133; // 0x469 JumpB
	var_219_string = "head"; // 0x46a PushS
	UnlookAsync(var_219_string); // 0x46b Func
	
Label_1133:
	var_220_int = 1; // 0x46d PushI
	KillTimer(var_220_int); // 0x46e Func
	var_140_bool = var_152_bool; // 0x470 Mov
	return 4; // 0x471 Return
	
Label_1108:
	var_2_int = 0; // 0x454 TMovB
}


func_1608(var_0_object, var_1_int)
{
	var_0_object = 1; // 0x648 TMovB
	var_1_int = 0; // 0x649 TMovB
	Stop(); // 0x64a Func
	StopGroup0(); // 0x64c Func
	return 0; // 0x64e Return
}


func_2127()
{
	var_130_int = 0; // 0x84f PushV
	func_2091(var_130_int); // 0x850 NEW_2
	var_134_int = 1; // 0x852 PushI
	var_135_bool = var_130_int != var_134_int; // 0x853 Neq
	if(var_135_bool == 0) goto Label_2134; // 0x854 JumpB
	return 0; // 0x855 Return
	
Label_2134:
	var_136_string = ""; // 0x856 PushV
	var_136_string = "liver"; // 0x857 MovS
	func_2110(var_136_string); // 0x858 NEW_2
	var_147_string = ""; // 0x85a PushV
	var_147_string = "kidney"; // 0x85b MovS
	func_2110(var_147_string); // 0x85c NEW_2
	var_148_string = ""; // 0x85e PushV
	var_148_string = "heart"; // 0x85f MovS
	func_2110(var_148_string); // 0x860 NEW_2
	var_149_string = ""; // 0x862 PushV
	var_149_string = "blood"; // 0x863 MovS
	func_2110(var_149_string); // 0x864 NEW_2
	return 0; // 0x866 Return
}


func_1624(var_42_bool)
{
	var_42_bool = 0; // 0x658 MovB
	return 0; // 0x659 Return
}


func_1626(var_435_string, var_436_int)
{
	var_437_int = 2; // 0x65b PushI
	var_438_bool = var_436_int == var_437_int; // 0x65c Eq
	if(var_438_bool == 0) goto Label_1633; // 0x65d JumpB
	var_435_string = "fire"; // 0x65e MovS
	return 0; // 0x65f Return
	
Label_1633:
	var_439_int = 1; // 0x661 PushI
	var_440_bool = var_436_int == var_439_int; // 0x662 Eq
	if(var_440_bool == 0) goto Label_1638; // 0x663 JumpB
	var_435_string = "bullet"; // 0x664 MovS
	return 0; // 0x665 Return
	
Label_1638:
	var_435_string = "phys"; // 0x666 MovS
	return 0; // 0x667 Return
}


func_2151()
{
	var_104_int = 0; // 0x867 PushI
	ClearSubContainer(var_104_int); // 0x868 Func
	var_105_string = ""; var_106_int = 0; var_107_int = 0; var_108_int = 0; // 0x86a PushV
	var_105_string = "rusk"; // 0x86b MovS
	var_106_int = 1; // 0x86c MovI
	var_107_int = 1; // 0x86d MovI
	var_108_int = 3; // 0x86e MovI
	func_1966(var_105_string, var_106_int, var_107_int, var_108_int); // 0x86f NEW_2
	var_121_string = ""; var_122_int = 0; var_123_int = 0; // 0x871 PushV
	var_121_string = "peanut"; // 0x872 MovS
	var_122_int = 1; // 0x873 MovI
	var_123_int = 5; // 0x874 MovI
	func_1955(var_121_string, var_122_int, var_123_int); // 0x875 NEW_2
	return 0; // 0x877 Return
}


func_1640(var_45_cvector)
{
	var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); // 0x668 PushV
	GetPosition(var_49_cvector); // 0x669 Func
	GetPosition(var_50_cvector); // 0x66b ObjFunc
	var_45_cvector = var_50_cvector - var_49_cvector; // 0x66d Sub2
	return 4; // 0x66e Return
}


func_1647(var_95_bool, var_96_object)
{
	var_97_bool = 0; var_98_bool = 0; // 0x66f PushV
	IsPlayerActor(var_96_object, var_98_bool); // 0x670 Func
	var_95_bool = var_98_bool; // 0x672 Mov
	return 2; // 0x673 Return
}


func_1652(var_47_bool, var_48_object, var_49_string)
{
	var_50_bool = 0; var_51_bool = 0; // 0x674 PushV
	var_52_string = "HasProperty"; // 0x675 PushS
	var_53_int = 2; // 0x676 PushI
	var_54_bool = IsFuncExist(var_48_object, var_52_string, var_53_int); // 0x677 FuncExist
	var_55_bool = var_54_bool == 0; // 0x678 Not
	if(var_55_bool == 0) goto Label_1660; // 0x679 JumpB
	var_47_bool = 0; // 0x67a MovB
	return 2; // 0x67b Return
	
Label_1660:
	HasProperty(var_49_string, var_51_bool); // 0x67c ObjFunc
	var_47_bool = var_51_bool; // 0x67e Mov
	return 2; // 0x67f Return
}


func_2168(var_12_object)
{
	var_13_object = Obj(); // 0x879 PushV
	var_13_object = var_12_object; // 0x87a Mov
	TaskCall(0); // 0x87b TaskCall
	func_0(var_13_object); // 0x87c NEW_2
	TaskReturn(); // 0x87d TaskReturn
	return 0; // 0x87f Return
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
	func_1981(var_37_string); // 0x89 NEW_2
	var_66_string = "all"; // 0x8b PushS
	PlayAnimation(var_66_string, var_36_string); // 0x8c Func
	WaitForAnimEnd(); // 0x8e Func
	var_67_string = "all"; // 0x90 PushS
	LockAnimationEnd(var_67_string, var_36_string); // 0x91 Func
	RemoveEnvelope(); // 0x93 Func
	return 0; // 0x95 Return
}


func_1664(var_407_float, var_408_object, var_409_float, var_410_int)
{
	var_414_int = 0; var_415_string = ""; var_416_int = 0; var_417_float = 0; var_418_float = 0; var_419_float = 0; var_420_int = 0; var_421_string = ""; var_422_int = 0; var_423_float = 0; var_424_float = 0; var_425_float = 0; // 0x680 PushV
	var_426_bool = 0; var_427_object = Obj(); var_428_string = ""; // 0x681 PushV
	var_427_object = var_408_object; // 0x682 Mov
	var_428_string = "health"; // 0x683 MovS
	func_1652(var_426_bool, var_427_object, var_428_string); // 0x684 NEW_2
	var_429_bool = var_426_bool == 0; // 0x686 Not
	if(var_429_bool == 0) goto Label_1674; // 0x687 JumpB
	var_407_float = 0.0; // 0x688 MovF
	return 12; // 0x689 Return
	
Label_1674:
	var_430_bool = 0; var_431_object = Obj(); var_432_string = ""; // 0x68a PushV
	var_431_object = var_408_object; // 0x68b Mov
	var_432_string = "armor"; // 0x68c MovS
	func_1652(var_430_bool, var_431_object, var_432_string); // 0x68d NEW_2
	var_433_bool = var_430_bool == 0; // 0x68f Not
	if(var_433_bool == 0) goto Label_1683; // 0x690 JumpB
	var_420_int = 0; // 0x691 MovI
	goto Label_1686; // 0x692 Jump
	
Label_1686:
	var_434_string = "armor_"; // 0x696 PushS
	var_435_string = ""; var_436_int = 0; // 0x697 PushV
	var_436_int = var_410_int; // 0x698 Mov
	func_1626(var_435_string, var_436_int); // 0x699 NEW_2
	var_421_string = var_434_string + var_435_string; // 0x69b Add2
	var_441_bool = 0; var_442_object = Obj(); var_443_string = ""; // 0x69c PushV
	var_442_object = var_408_object; // 0x69d Mov
	var_443_string = var_421_string; // 0x69e Mov
	func_1652(var_441_bool, var_442_object, var_443_string); // 0x69f NEW_2
	var_444_bool = var_441_bool == 0; // 0x6a1 Not
	if(var_444_bool == 0) goto Label_1701; // 0x6a2 JumpB
	var_422_int = 0; // 0x6a3 MovI
	goto Label_1703; // 0x6a4 Jump
	
Label_1703:
	var_445_float = 0; var_446_float = 0; var_447_float = 0; // 0x6a7 PushV
	var_448_int = var_420_int + var_422_int; // 0x6a8 Add
	var_449_float = 100.0; // 0x6a9 PushF
	var_446_float = var_448_int / var_448_int; // 0x6aa Div2
	var_447_float = 1; // 0x6ab MovI
	func_2038(var_445_float, var_446_float, var_447_float); // 0x6ac NEW_2
	var_423_float = var_445_float; // 0x6ad Mov
	var_451_string = "health"; // 0x6af PushS
	GetProperty(var_451_string, var_424_float); // 0x6b0 ObjFunc
	var_452_int = 1; // 0x6b2 PushI
	var_453_int = var_452_int - var_423_float; // 0x6b3 Sub
	var_425_float = var_409_float * var_453_int; // 0x6b4 Mult2
	var_454_string = "health"; // 0x6b5 PushS
	var_455_float = 0; var_456_float = 0; var_457_float = 0; var_458_float = 0; // 0x6b6 PushV
	var_456_float = var_424_float - var_425_float; // 0x6b7 Sub2
	var_457_float = 0; // 0x6b8 MovI
	var_458_float = 1; // 0x6b9 MovI
	func_2045(var_455_float, var_456_float, var_457_float, var_458_float); // 0x6ba NEW_2
	SetProperty(var_454_string, var_455_float); // 0x6bc ObjFunc
	var_461_bool = 0; var_462_object = Obj(); // 0x6be PushV
	var_462_object = var_408_object; // 0x6bf Mov
	func_1647(var_461_bool, var_462_object); // 0x6c0 NEW_2
	if(var_461_bool == 0) goto Label_1735; // 0x6c2 JumpB
	var_463_float = 0; // 0x6c3 PushV
	var_463_float = -var_425_float; // 0x6c4 Neg2
	func_2061(var_463_float); // 0x6c5 NEW_2
	
Label_1735:
	var_407_float = var_425_float; // 0x6c7 Mov
	return 12; // 0x6c8 Return
	
Label_1701:
	GetProperty(var_421_string, var_422_int); // 0x6a5 ObjFunc
	
Label_1683:
	var_467_string = "armor"; // 0x693 PushS
	GetProperty(var_467_string, var_420_int); // 0x694 ObjFunc
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


func_649(var_1_int, var_2_int, var_4_float)
{
	var_96_bool = 0; var_97_bool = 0; var_98_cvector = CVector(0,0,0); var_99_bool = 0; var_100_bool = 0; var_101_cvector = CVector(0,0,0); // 0x289 PushV
	var_1_int = 0; // 0x28a TMovI
	
Label_651:
	var_102_string = "all"; // 0x28b PushS
	var_103_string = "attack_begin"; // 0x28c PushS
	var_104_int = 1; // 0x28d PushI
	var_105_int = var_1_int + var_104_int; // 0x28e Add
	var_106_int = var_103_string + var_105_int; // 0x28f Add
	HasAnimation(var_99_bool, var_102_string, var_106_int); // 0x290 Func
	var_107_bool = var_99_bool == 0; // 0x292 Not
	if(var_107_bool == 0) goto Label_661; // 0x293 JumpB
	goto Label_664; // 0x294 Jump
	
Label_664:
	var_2_int = 0; // 0x298 TMovI
	
Label_665:
	var_108_string = "attack"; // 0x299 PushS
	var_109_int = 1; // 0x29a PushI
	var_110_int = var_2_int + var_109_int; // 0x29b Add
	var_111_int = var_108_string + var_110_int; // 0x29c Add
	IsExisting3DSound(var_100_bool, var_111_int); // 0x29d Func
	var_112_bool = var_100_bool == 0; // 0x29f Not
	if(var_112_bool == 0) goto Label_674; // 0x2a0 JumpB
	goto Label_677; // 0x2a1 Jump
	
Label_677:
	var_113_string = "all"; // 0x2a5 PushS
	var_114_string = "bjump"; // 0x2a6 PushS
	GetAnimationOffset(var_101_cvector, var_113_string, var_114_string); // 0x2a7 Func
	var_115_float = GetByIndex(var_101_cvector, 2); // 0x2a9 PushE
	var_4_float = -var_115_float; // 0x2aa Neg2
	return 6; // 0x2ab Return
	
Label_674:
	var_116_int = 1; // 0x2a2 PushI
	var_2_int = var_2_int + var_116_int; // 0x2a3 Add2
	goto Label_665; // 0x2a4 Jump
	
Label_661:
	var_117_int = 1; // 0x295 PushI
	var_1_int = var_1_int + var_117_int; // 0x296 Add2
	goto Label_651; // 0x297 Jump
}


func_2213(var_15_bool, var_16_object, var_17_string)
{
	var_18_string = "unholster"; // 0x8a6 PushS
	var_19_bool = var_17_string == var_18_string; // 0x8a7 Eq
	if(var_19_bool == 0) goto Label_2224; // 0x8a8 JumpB
	var_20_bool = 0; var_21_object = Obj(); // 0x8a9 PushV
	var_21_object = var_16_object; // 0x8aa Mov
	func_2408(var_21_object); // 0x8ab NEW_2
	var_15_bool = var_20_bool; // 0x8ac Mov
	return 0; // 0x8ae Return
	
Label_2224:
	var_22_string = "player_shot"; // 0x8b0 PushS
	var_23_bool = var_17_string == var_22_string; // 0x8b1 Eq
	if(var_23_bool == 0) goto Label_2234; // 0x8b2 JumpB
	var_24_bool = 0; var_25_object = Obj(); // 0x8b3 PushV
	var_25_object = var_16_object; // 0x8b4 Mov
	func_2413(var_25_object); // 0x8b5 NEW_2
	var_15_bool = var_24_bool; // 0x8b6 Mov
	return 0; // 0x8b8 Return
	
Label_2234:
	var_26_string = "battle"; // 0x8ba PushS
	var_27_bool = var_17_string == var_26_string; // 0x8bb Eq
	if(var_27_bool == 0) goto Label_2243; // 0x8bc JumpB
	var_28_bool = 0; var_29_object = Obj(); // 0x8bd PushV
	var_29_object = var_16_object; // 0x8be Mov
	func_2418(var_29_object); // 0x8bf NEW_2
	var_15_bool = var_28_bool; // 0x8c0 Mov
	return 0; // 0x8c2 Return
	
Label_2243:
	var_15_bool = 0; // 0x8c3 MovB
	return 0; // 0x8c4 Return
}


func_1194(var_0_object, var_1_int, var_167_bool, var_168_object, var_169_float, var_170_float, var_171_bool, var_172_bool)
{
	var_173_bool = 0; var_174_bool = 0; var_175_object = Obj(); var_176_cvector = CVector(0,0,0); var_177_cvector = CVector(0,0,0); var_178_cvector = CVector(0,0,0); var_179_float = 0; var_180_object = Obj(); var_181_bool = 0; var_182_bool = 0; var_183_object = Obj(); var_184_cvector = CVector(0,0,0); var_185_cvector = CVector(0,0,0); var_186_cvector = CVector(0,0,0); var_187_float = 0; var_188_object = Obj(); // 0x4aa PushV
	var_0_object = 0; // 0x4ab TMovB
	var_1_int = var_168_object; // 0x4ac TMov
	var_182_bool = var_172_bool; // 0x4ad Mov
	
Label_1198:
	var_189_bool = 0; var_190_object = Obj(); // 0x4ae PushV
	var_190_object = var_168_object; // 0x4af Mov
	func_1334(var_189_bool, var_190_object); // 0x4b0 NEW_2
	var_193_bool = var_189_bool == 0; // 0x4b2 Not
	if(var_193_bool == 0) goto Label_1206; // 0x4b3 JumpB
	var_167_bool = 0; // 0x4b4 MovB
	return 16; // 0x4b5 Return
	
Label_1206:
	GetPosition(var_184_cvector); // 0x4b6 ObjFunc
	GetPosition(var_185_cvector); // 0x4b8 Func
	var_186_cvector = var_184_cvector - var_185_cvector; // 0x4ba Sub2
	var_187_float = var_186_cvector | var_186_cvector; // 0x4bb Or2
	var_194_bool = 0; // 0x4bc PushV
	var_194_bool = 0; // 0x4bd MovB
	var_195_int = 0; // 0x4be PushI
	var_196_bool = var_170_float > var_195_int; // 0x4bf GT
	if(var_196_bool == 0) goto Label_1221; // 0x4c0 JumpB
	var_197_float = var_170_float * var_170_float; // 0x4c1 Mult
	var_198_bool = var_187_float > var_197_float; // 0x4c2 GT
	if(var_198_bool == 0) goto Label_1221; // 0x4c3 JumpB
	var_194_bool = 1; // 0x4c4 MovB
	
Label_1221:
	if(var_194_bool == 0) goto Label_1226; // 0x4c5 JumpB
	Stop(); // 0x4c6 Func
	var_167_bool = 0; // 0x4c8 MovB
	return 16; // 0x4c9 Return
	
Label_1226:
	var_199_float = var_169_float * var_169_float; // 0x4ca Mult
	var_200_bool = var_187_float > var_199_float; // 0x4cb GT
	if(var_200_bool == 0) goto Label_1288; // 0x4cc JumpB
	GetPFPosition(var_184_cvector); // 0x4cd ObjFunc
	FindPathTo(var_188_object, var_184_cvector); // 0x4cf Func
	var_201_bool = var_188_object != 0; // 0x4d1 NullNeq
	if(var_201_bool == 0) goto Label_1237; // 0x4d2 JumpB
	var_183_object = var_188_object; // 0x4d3 Mov
	var_188_object = 0; // 0x4d4 SetNull
	
Label_1237:
	var_202_bool = var_183_object != 0; // 0x4d5 NullNeq
	if(var_202_bool == 0) goto Label_1270; // 0x4d6 JumpB
	var_203_bool = var_182_bool; // 0x4d7 Push
	if(var_203_bool == 0) goto Label_1247; // 0x4d8 JumpB
	var_182_bool = 0; // 0x4d9 MovB
	RotatePath(var_183_object, var_181_bool); // 0x4da Func
	var_204_bool = var_181_bool == 0; // 0x4dc Not
	if(var_204_bool == 0) goto Label_1247; // 0x4dd JumpB
	goto Label_1294; // 0x4de Jump
	
Label_1294:
	var_167_bool = !var_0_object; // 0x50e Not2
	return 16; // 0x50f Return
	
Label_1247:
	var_205_int = 0; // 0x4df PushI
	var_206_float = 0.3; // 0x4e0 PushF
	SetTimer(var_205_int, var_206_float); // 0x4e1 Func
	var_207_string = ""; // 0x4e3 PushV
	func_1341(var_207_string); // 0x4e4 NEW_2
	var_208_string = ""; // 0x4e6 PushV
	func_1343(var_208_string); // 0x4e7 NEW_2
	FollowPath(var_183_object, var_171_bool, var_181_bool, var_207_string, var_208_string); // 0x4e9 Func
	var_209_bool = var_181_bool == 0; // 0x4eb Not
	if(var_209_bool == 0) goto Label_1268; // 0x4ec JumpB
	var_210_object = var_0_object; // 0x4ed PushT
	if(var_210_object == 0) goto Label_1266; // 0x4ee JumpB
	var_183_object = 0; // 0x4ef SetNull
	goto Label_1294; // 0x4f0 Jump
	
Label_1266:
	goto Label_1293; // 0x4f2 Jump
	
Label_1293:
	goto Label_1198; // 0x50d Jump
	
Label_1268:
	var_183_object = 0; // 0x4f4 SetNull
	goto Label_1286; // 0x4f5 Jump
	
Label_1286:
	var_188_object = 0; // 0x506 SetNull
	goto Label_1292; // 0x507 Jump
	
Label_1292:
	var_183_object = 0; // 0x50c SetNull
	
Label_1270:
	var_211_int = 0; // 0x4f6 PushI
	KillTimer(var_211_int); // 0x4f7 Func
	var_212_float = 0.5; // 0x4f9 PushF
	Sleep(var_212_float, var_181_bool); // 0x4fa Func
	var_213_bool = var_181_bool == 0; // 0x4fc Not
	if(var_213_bool == 0) goto Label_1282; // 0x4fd JumpB
	var_214_object = var_0_object; // 0x4fe PushT
	if(var_214_object == 0) goto Label_1282; // 0x4ff JumpB
	var_183_object = 0; // 0x500 SetNull
	goto Label_1294; // 0x501 Jump
	
Label_1282:
	var_215_int = 0; // 0x502 PushI
	var_216_float = 0.3; // 0x503 PushF
	SetTimer(var_215_int, var_216_float); // 0x504 Func
	
Label_1288:
	var_217_int = 0; // 0x508 PushI
	KillTimer(var_217_int); // 0x509 Func
	goto Label_1294; // 0x50b Jump
}


func_684(var_0_object, var_393_float, var_394_int)
{
	var_395_object = Obj(); var_396_float = 0; var_397_float = 0; var_398_object = Obj(); var_399_float = 0; var_400_float = 0; // 0x2ac PushV
	var_401_float = 0.9; // 0x2ad PushF
	var_402_float = var_393_float * var_401_float; // 0x2ae Mult
	GetVictim(var_402_float, var_398_object); // 0x2af Func
	ReportAttack(var_0_object); // 0x2b1 Func
	var_403_bool = var_398_object == var_0_object; // 0x2b3 Eq
	if(var_403_bool == 0) goto Label_721; // 0x2b4 JumpB
	var_404_float = 0; var_405_object = Obj(); var_406_int = 0; // 0x2b5 PushV
	var_405_object = var_398_object; // 0x2b6 Mov
	var_406_int = var_394_int; // 0x2b7 Mov
	func_414(var_406_int); // 0x2b8 NEW_2
	var_399_float = var_404_float; // 0x2b9 Mov
	var_407_float = 0; var_408_object = Obj(); var_409_float = 0; var_410_int = 0; // 0x2bb PushV
	var_408_object = var_398_object; // 0x2bc Mov
	var_409_float = var_399_float; // 0x2bd Mov
	var_411_int = 0; var_412_object = Obj(); var_413_int = 0; // 0x2be PushV
	var_412_object = var_398_object; // 0x2bf Mov
	var_413_int = var_394_int; // 0x2c0 Mov
	func_417(var_413_int); // 0x2c1 NEW_2
	var_410_int = var_411_int; // 0x2c2 Mov
	func_1664(var_407_float, var_408_object, var_409_float, var_410_int); // 0x2c4 NEW_2
	var_400_float = var_407_float; // 0x2c5 Mov
	var_468_int = 0; // 0x2c7 PushV
	func_1067(var_468_int); // 0x2c8 NEW_2
	ReportHit(var_0_object, var_468_int, var_400_float, var_399_float); // 0x2ca Func
	var_469_object = Obj(); var_470_float = 0; // 0x2cc PushV
	var_469_object = var_398_object; // 0x2cd Mov
	var_470_float = var_400_float; // 0x2ce Mov
	func_1074(); // 0x2cf NEW_2
	
Label_721:
	return 6; // 0x2d1 Return
}


func_2245(var_30_object, var_31_string)
{
	var_32_string = "unholster"; // 0x8c6 PushS
	var_33_bool = var_31_string == var_32_string; // 0x8c7 Eq
	if(var_33_bool == 0) goto Label_2254; // 0x8c8 JumpB
	var_34_object = Obj(); // 0x8c9 PushV
	var_34_object = var_30_object; // 0x8ca Mov
	func_2411(); // 0x8cb NEW_2
	goto Label_2269; // 0x8cd Jump
	
Label_2269:
	return 0; // 0x8dd Return
	
Label_2254:
	var_35_string = "player_shot"; // 0x8ce PushS
	var_36_bool = var_31_string == var_35_string; // 0x8cf Eq
	if(var_36_bool == 0) goto Label_2262; // 0x8d0 JumpB
	var_37_object = Obj(); // 0x8d1 PushV
	var_37_object = var_30_object; // 0x8d2 Mov
	func_2416(); // 0x8d3 NEW_2
	goto Label_2269; // 0x8d5 Jump
	
Label_2262:
	var_38_string = "battle"; // 0x8d6 PushS
	var_39_bool = var_31_string == var_38_string; // 0x8d7 Eq
	if(var_39_bool == 0) goto Label_2269; // 0x8d8 JumpB
	var_40_object = Obj(); // 0x8d9 PushV
	var_40_object = var_30_object; // 0x8da Mov
	func_2421(); // 0x8db NEW_2
}


func_1737(var_40_bool)
{
	var_42_bool = 0; var_43_bool = 0; // 0x6c9 PushV
	IsDead(var_43_bool); // 0x6ca ObjFunc
	var_40_bool = var_43_bool; // 0x6cc Mov
	return 2; // 0x6cd Return
}


func_1742(var_29_bool, var_30_object)
{
	var_31_object = Obj(); var_32_object = Obj(); var_33_object = Obj(); var_34_object = Obj(); // 0x6ce PushV
	var_35_bool = var_30_object == 0; // 0x6cf NullEq
	if(var_35_bool == 0) goto Label_1747; // 0x6d0 JumpB
	var_29_bool = 0; // 0x6d1 MovB
	return 4; // 0x6d2 Return
	
Label_1747:
	var_36_bool = 0; // 0x6d3 PushV
	var_36_bool = 0; // 0x6d4 MovB
	var_37_string = "IsDead"; // 0x6d5 PushS
	var_38_int = 1; // 0x6d6 PushI
	var_39_bool = IsFuncExist(var_30_object, var_37_string, var_38_int); // 0x6d7 FuncExist
	if(var_39_bool == 0) goto Label_1759; // 0x6d8 JumpB
	var_40_bool = 0; var_41_object = Obj(); // 0x6d9 PushV
	var_41_object = var_30_object; // 0x6da Mov
	func_1737(var_41_object); // 0x6db NEW_2
	if(var_40_bool == 0) goto Label_1759; // 0x6dd JumpB
	var_36_bool = 1; // 0x6de MovB
	
Label_1759:
	if(var_36_bool == 0) goto Label_1762; // 0x6df JumpB
	var_29_bool = 0; // 0x6e0 MovB
	return 4; // 0x6e1 Return
	
Label_1762:
	GetScene(var_33_object); // 0x6e2 Func
	var_44_bool = var_33_object == 0; // 0x6e4 NullEq
	if(var_44_bool == 0) goto Label_1768; // 0x6e5 JumpB
	var_29_bool = 0; // 0x6e6 MovB
	return 4; // 0x6e7 Return
	
Label_1768:
	GetScene(var_34_object); // 0x6e8 ObjFunc
	var_45_bool = var_33_object != var_34_object; // 0x6ea Neq
	if(var_45_bool == 0) goto Label_1774; // 0x6eb JumpB
	var_29_bool = 0; // 0x6ec MovB
	return 4; // 0x6ed Return
	
Label_1774:
	var_29_bool = 1; // 0x6ee MovB
	return 4; // 0x6ef Return
}


func_723(var_0_object, var_356_bool, var_357_float)
{
	var_358_int = 0; var_359_bool = 0; var_360_int = 0; var_361_string = ""; var_362_int = 0; var_363_bool = 0; var_364_int = 0; var_365_string = ""; // 0x2d3 PushV
	func_1062(var_365_string); // 0x2d5 NEW_2
	irand(var_362_int, var_365_string); // 0x2d7 Func
	var_366_int = 1; // 0x2d9 PushI
	var_362_int = var_362_int + var_366_int; // 0x2da Add2
	Face(var_0_object); // 0x2db Func
	var_367_bool = 1; // 0x2dd PushB
	SetAttackState(var_367_bool); // 0x2de Func
	func_2080(); // 0x2e1 NEW_2
	var_372_string = "all"; // 0x2e3 PushS
	var_373_string = "attack_begin"; // 0x2e4 PushS
	var_374_int = var_373_string + var_362_int; // 0x2e5 Add
	PlayAnimation(var_372_string, var_374_int); // 0x2e6 Func
	WaitForAnimEnd(); // 0x2e8 Func
	func_1030(var_364_int, var_365_string); // 0x2eb NEW_2
	var_390_bool = 0; var_391_object = Obj(); // 0x2ed PushV
	var_391_object = var_0_object; // 0x2ee MovT
	func_1778(var_390_bool, var_391_object); // 0x2ef NEW_2
	var_392_bool = var_390_bool == 0; // 0x2f1 Not
	if(var_392_bool == 0) goto Label_759; // 0x2f2 JumpB
	StopAsync(); // 0x2f3 Func
	var_356_bool = 0; // 0x2f5 MovB
	return 8; // 0x2f6 Return
	
Label_759:
	var_393_float = 0; var_394_int = 0; // 0x2f7 PushV
	var_393_float = var_357_float; // 0x2f8 Mov
	var_394_int = var_362_int; // 0x2f9 Mov
	func_684(var_365_string, var_393_float, var_394_int); // 0x2fa NEW_2
	var_471_string = "all"; // 0x2fc PushS
	var_472_string = "attack_middle"; // 0x2fd PushS
	var_473_int = var_472_string + var_362_int; // 0x2fe Add
	HasAnimation(var_363_bool, var_471_string, var_473_int); // 0x2ff Func
	var_474_bool = var_363_bool; // 0x301 Push
	if(var_474_bool == 0) goto Label_840; // 0x302 JumpB
	func_2080(); // 0x304 NEW_2
	var_475_string = "all"; // 0x306 PushS
	var_476_string = "attack_middle"; // 0x307 PushS
	var_477_int = var_476_string + var_362_int; // 0x308 Add
	PlayAnimation(var_475_string, var_477_int); // 0x309 Func
	WaitForAnimEnd(); // 0x30b Func
	func_1062(var_365_string); // 0x30e NEW_2
	var_478_bool = 0; var_479_object = Obj(); // 0x310 PushV
	var_479_object = var_0_object; // 0x311 MovT
	func_1778(var_478_bool, var_479_object); // 0x312 NEW_2
	var_480_bool = var_478_bool == 0; // 0x314 Not
	if(var_480_bool == 0) goto Label_794; // 0x315 JumpB
	StopAsync(); // 0x316 Func
	var_356_bool = 0; // 0x318 MovB
	return 8; // 0x319 Return
	
Label_794:
	var_481_float = 0; var_482_int = 0; // 0x31a PushV
	var_481_float = var_357_float; // 0x31b Mov
	var_482_int = var_362_int; // 0x31c Mov
	func_684(var_365_string, var_481_float, var_482_int); // 0x31d NEW_2
	var_364_int = 1; // 0x31f MovI
	
Label_800:
	var_483_string = "attack_middle"; // 0x320 PushS
	var_484_int = var_483_string + var_362_int; // 0x321 Add
	var_485_string = "_"; // 0x322 PushS
	var_486_int = var_484_int + var_485_string; // 0x323 Add
	var_365_string = var_486_int + var_364_int; // 0x324 Add2
	var_487_string = "all"; // 0x325 PushS
	HasAnimation(var_363_bool, var_487_string, var_365_string); // 0x326 Func
	var_488_bool = var_363_bool == 0; // 0x328 Not
	if(var_488_bool == 0) goto Label_811; // 0x329 JumpB
	goto Label_840; // 0x32a Jump
	
Label_840:
	var_489_bool = 0; // 0x348 PushB
	SetAttackState(var_489_bool); // 0x349 Func
	var_490_string = "all"; // 0x34b PushS
	var_491_string = "attack_end"; // 0x34c PushS
	var_492_int = var_491_string + var_362_int; // 0x34d Add
	PlayAnimation(var_490_string, var_492_int); // 0x34e Func
	var_493_bool = 0; // 0x350 PushV
	func_1076(var_493_bool); // 0x351 NEW_2
	if(var_493_bool == 0) goto Label_858; // 0x353 JumpB
	var_494_bool = 0; var_495_float = 0; // 0x354 PushV
	var_495_float = 0.75; // 0x355 MovF
	func_860(var_494_bool, var_495_float); // 0x356 NEW_2
	StopAsync(); // 0x358 Func
	
Label_858:
	var_356_bool = 1; // 0x35a MovB
	return 8; // 0x35b Return
	
Label_811:
	func_2080(); // 0x32c NEW_2
	var_503_string = "all"; // 0x32e PushS
	PlayAnimation(var_503_string, var_365_string); // 0x32f Func
	WaitForAnimEnd(); // 0x331 Func
	func_1062(var_365_string); // 0x334 NEW_2
	var_504_bool = 0; var_505_object = Obj(); // 0x336 PushV
	var_505_object = var_0_object; // 0x337 MovT
	func_1778(var_504_bool, var_505_object); // 0x338 NEW_2
	var_506_bool = var_504_bool == 0; // 0x33a Not
	if(var_506_bool == 0) goto Label_832; // 0x33b JumpB
	StopAsync(); // 0x33c Func
	var_356_bool = 0; // 0x33e MovB
	return 8; // 0x33f Return
	
Label_832:
	var_507_float = 0; var_508_int = 0; // 0x340 PushV
	var_507_float = var_357_float; // 0x341 Mov
	var_508_int = var_362_int; // 0x342 Mov
	func_684(var_365_string, var_507_float, var_508_int); // 0x343 NEW_2
	var_509_int = 1; // 0x345 PushI
	var_364_int = var_364_int + var_509_int; // 0x346 Add2
	goto Label_800; // 0x347 Jump
}


func_2270(var_12_bool, var_13_object)
{
	var_14_bool = 0; var_15_bool = 0; // 0x8de PushV
	var_16_bool = 0; // 0x8df PushV
	var_16_bool = 0; // 0x8e0 MovB
	var_17_bool = 0; var_18_object = Obj(); // 0x8e1 PushV
	var_18_object = var_13_object; // 0x8e2 Mov
	func_2408(var_18_object); // 0x8e3 NEW_2
	if(var_17_bool == 0) goto Label_2284; // 0x8e5 JumpB
	var_19_bool = 0; var_20_object = Obj(); // 0x8e6 PushV
	var_20_object = var_13_object; // 0x8e7 Mov
	func_1647(var_19_bool, var_20_object); // 0x8e8 NEW_2
	if(var_19_bool == 0) goto Label_2284; // 0x8ea JumpB
	var_16_bool = 1; // 0x8eb MovB
	
Label_2284:
	if(var_16_bool == 0) goto Label_2291; // 0x8ec JumpB
	IsWeaponHolstered(var_15_bool); // 0x8ed ObjFunc
	var_23_bool = var_15_bool == 0; // 0x8ef Not
	if(var_23_bool == 0) goto Label_2291; // 0x8f0 JumpB
	var_12_bool = 1; // 0x8f1 MovB
	return 2; // 0x8f2 Return
	
Label_2291:
	var_12_bool = 0; // 0x8f3 MovB
	return 2; // 0x8f4 Return
}


func_1778(var_25_bool, var_26_object)
{
	var_27_int = 0; var_28_int = 0; // 0x6f2 PushV
	var_29_bool = 0; var_30_object = Obj(); // 0x6f3 PushV
	var_30_object = var_26_object; // 0x6f4 Mov
	func_1742(var_29_bool, var_30_object); // 0x6f5 NEW_2
	var_46_bool = var_29_bool == 0; // 0x6f7 Not
	if(var_46_bool == 0) goto Label_1787; // 0x6f8 JumpB
	var_25_bool = 0; // 0x6f9 MovB
	return 2; // 0x6fa Return
	
Label_1787:
	var_47_bool = 0; var_48_object = Obj(); var_49_string = ""; // 0x6fb PushV
	var_48_object = var_26_object; // 0x6fc Mov
	var_49_string = "noaccess"; // 0x6fd MovS
	func_1652(var_47_bool, var_48_object, var_49_string); // 0x6fe NEW_2
	var_56_bool = var_47_bool == 0; // 0x700 Not
	if(var_56_bool == 0) goto Label_1796; // 0x701 JumpB
	var_25_bool = 1; // 0x702 MovB
	return 2; // 0x703 Return
	
Label_1796:
	var_57_string = "noaccess"; // 0x704 PushS
	GetProperty(var_57_string, var_28_int); // 0x705 ObjFunc
	var_58_int = 0; // 0x707 PushI
	var_25_bool = var_28_int == var_58_int; // 0x708 Eq2
	return 2; // 0x709 Return
}


func_2293(var_24_object)
{
	var_25_object = Obj(); // 0x8f6 PushV
	var_25_object = var_24_object; // 0x8f7 Mov
	func_2411(); // 0x8f8 NEW_2
	return 0; // 0x8fa Return
}


func_2299(var_14_object)
{
	var_15_bool = 0; var_16_object = Obj(); // 0x8fc PushV
	var_16_object = var_14_object; // 0x8fd Mov
	func_1647(var_15_bool, var_16_object); // 0x8fe NEW_2
	if(var_15_bool == 0) goto Label_2311; // 0x900 JumpB
	var_19_object = Obj(); // 0x901 PushV
	func_2022(var_19_object); // 0x902 NEW_2
	var_22_float = -0.03; // 0x904 PushF
	ReportReputationChange(var_14_object, var_19_object, var_22_float); // 0x905 Func
	
Label_2311:
	return 0; // 0x907 Return
}


func_2312(var_12_bool, var_13_string)
{
	var_14_object = Obj(); var_15_object = Obj(); // 0x908 PushV
	var_16_string = "heal"; // 0x909 PushS
	var_17_bool = var_13_string == var_16_string; // 0x90a Eq
	if(var_17_bool == 0) goto Label_2326; // 0x90b JumpB
	var_18_string = "player"; // 0x90c PushS
	FindActor(var_15_object, var_18_string); // 0x90d Func
	var_19_bool = 0; var_20_object = Obj(); // 0x90f PushV
	var_20_object = var_15_object; // 0x910 Mov
	func_2423(var_20_object); // 0x911 NEW_2
	var_12_bool = var_19_bool; // 0x912 Mov
	return 2; // 0x914 Return
	
Label_2326:
	var_12_bool = 0; // 0x916 MovB
	return 2; // 0x917 Return
}


func_1802(var_28_object)
{
	var_29_bool = 0; var_30_int = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_string = ""; var_36_bool = 0; var_37_int = 0; var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_string = ""; // 0x70a PushV
	var_43_bool = var_28_object == 0; // 0x70b NullEq
	if(var_43_bool == 0) goto Label_1806; // 0x70c JumpB
	return 14; // 0x70d Return
	
Label_1806:
	IsDead(var_36_bool); // 0x70e Func
	var_44_bool = var_36_bool; // 0x710 Push
	if(var_44_bool == 0) goto Label_1811; // 0x711 JumpB
	return 14; // 0x712 Return
	
Label_1811:
	GetSecondaryAnimationType(var_37_int); // 0x713 Func
	var_45_int = 0; // 0x715 PushI
	var_46_bool = var_37_int < var_45_int; // 0x716 LT
	if(var_46_bool == 0) goto Label_1817; // 0x717 JumpB
	return 14; // 0x718 Return
	
Label_1817:
	GetPosition(var_38_cvector); // 0x719 ObjFunc
	GetPosition(var_39_cvector); // 0x71b Func
	GetDirection(var_40_cvector); // 0x71d Func
	var_41_cvector = var_39_cvector - var_38_cvector; // 0x71f Sub2
	var_47_float = GetByIndex(var_41_cvector, 0); // 0x720 PushE
	var_48_float = GetByIndex(var_40_cvector, 0); // 0x721 PushE
	var_49_float = var_47_float * var_48_float; // 0x722 Mult
	var_50_float = GetByIndex(var_41_cvector, 2); // 0x723 PushE
	var_51_float = GetByIndex(var_40_cvector, 2); // 0x724 PushE
	var_52_float = var_50_float * var_51_float; // 0x725 Mult
	var_53_int = var_49_float + var_52_float; // 0x726 Add
	var_54_int = 0; // 0x727 PushI
	var_55_bool = var_53_int >= var_54_int; // 0x728 GE
	if(var_55_bool == 0) goto Label_1836; // 0x729 JumpB
	var_42_string = "fhit"; // 0x72a MovS
	goto Label_1837; // 0x72b Jump
	
Label_1837:
	var_56_string = "hit_react"; // 0x72d PushS
	var_57_string = "1"; // 0x72e PushS
	var_58_int = var_42_string + var_57_string; // 0x72f Add
	var_59_string = "2"; // 0x730 PushS
	var_60_int = var_42_string + var_59_string; // 0x731 Add
	var_61_int = -10; // 0x732 PushI
	FadeSecondaryAnimation(var_56_string, var_58_int, var_60_int, var_61_int); // 0x733 Func
	return 14; // 0x735 Return
	
Label_1836:
	var_42_string = "bhit"; // 0x72c MovS
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


func_2328(var_21_string)
{
	var_22_object = Obj(); var_23_object = Obj(); // 0x918 PushV
	var_24_string = "heal"; // 0x919 PushS
	var_25_bool = var_21_string == var_24_string; // 0x91a Eq
	if(var_25_bool == 0) goto Label_2340; // 0x91b JumpB
	var_26_string = "player"; // 0x91c PushS
	FindActor(var_23_object, var_26_string); // 0x91d Func
	var_27_object = Obj(); // 0x91f PushV
	var_27_object = var_23_object; // 0x920 Mov
	func_2426(); // 0x921 NEW_2
	var_23_object = 0; // 0x923 SetNull
	
Label_2340:
	return 2; // 0x924 Return
}


func_2341(var_66_string, var_67_int)
{
	var_68_string = ""; var_69_string = ""; // 0x925 PushV
	var_69_string = "idle"; // 0x926 MovS
	var_70_int = var_67_int; // 0x927 Push
	if(var_70_int == 0) goto Label_2346; // 0x928 JumpB
	var_69_string = var_69_string + var_67_int; // 0x929 Add2
	
Label_2346:
	var_66_string = var_69_string; // 0x92a Mov
	return 2; // 0x92b Return
}


func_1318(var_0_object)
{
	var_0_object = 1; // 0x526 TMovB
	var_15_int = 0; // 0x527 PushI
	KillTimer(var_15_int); // 0x528 Func
	Stop(); // 0x52a Func
	return 0; // 0x52c Return
}


func_2348(var_60_int)
{
	var_61_int = 0; var_62_bool = 0; var_63_int = 0; var_64_bool = 0; // 0x92c PushV
	var_63_int = 0; // 0x92d MovI
	
Label_2350:
	var_65_string = "all"; // 0x92e PushS
	var_66_string = ""; var_67_int = 0; // 0x92f PushV
	var_67_int = var_63_int; // 0x930 Mov
	func_2341(var_66_string, var_67_int); // 0x931 NEW_2
	HasAnimation(var_64_bool, var_65_string, var_66_string); // 0x933 Func
	var_71_bool = var_64_bool == 0; // 0x935 Not
	if(var_71_bool == 0) goto Label_2360; // 0x936 JumpB
	goto Label_2363; // 0x937 Jump
	
Label_2363:
	var_60_int = var_63_int; // 0x93b Mov
	return 4; // 0x93c Return
	
Label_2360:
	var_72_int = 1; // 0x938 PushI
	var_63_int = var_63_int + var_72_int; // 0x939 Add2
	goto Label_2350; // 0x93a Jump
}


func_1334(var_189_bool, var_190_object)
{
	var_191_bool = 0; var_192_object = Obj(); // 0x537 PushV
	var_192_object = var_190_object; // 0x538 Mov
	func_1778(var_191_bool, var_192_object); // 0x539 NEW_2
	var_189_bool = var_191_bool; // 0x53a Mov
	return 0; // 0x53c Return
}


func_1846(var_15_object, var_16_int, var_17_float)
{
	var_18_cvector = CVector(0,0,0); var_19_object = Obj(); var_20_int = 0; var_21_bool = 0; var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_int = 0; var_25_int = 0; var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_object = Obj(); var_29_int = 0; var_30_bool = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_int = 0; var_34_int = 0; var_35_cvector = CVector(0,0,0); // 0x736 PushV
	var_36_bool = 0; // 0x737 PushV
	var_36_bool = 0; // 0x738 MovB
	var_37_bool = 0; // 0x739 PushV
	var_37_bool = 0; // 0x73a MovB
	var_38_object = var_15_object; // 0x73b Push
	if(var_38_object == 0) goto Label_1857; // 0x73c JumpB
	var_39_int = 4; // 0x73d PushI
	var_40_bool = var_16_int != var_39_int; // 0x73e Neq
	if(var_40_bool == 0) goto Label_1857; // 0x73f JumpB
	var_37_bool = 1; // 0x740 MovB
	
Label_1857:
	if(var_37_bool == 0) goto Label_1862; // 0x741 JumpB
	var_41_int = 5; // 0x742 PushI
	var_42_bool = var_16_int != var_41_int; // 0x743 Neq
	if(var_42_bool == 0) goto Label_1862; // 0x744 JumpB
	var_36_bool = 1; // 0x745 MovB
	
Label_1862:
	if(var_36_bool == 0) goto Label_1909; // 0x746 JumpB
	var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); // 0x747 PushV
	var_45_cvector = CVector(0,0,0); var_46_object = Obj(); // 0x748 PushV
	var_46_object = var_15_object; // 0x749 Mov
	func_1640(var_46_object); // 0x74a NEW_2
	var_44_cvector = var_45_cvector; // 0x74b Mov
	func_2028(var_43_cvector, var_44_cvector); // 0x74d NEW_2
	var_27_cvector = var_43_cvector; // 0x74e Mov
	CreateVectorVector(var_28_object); // 0x750 Func
	var_29_int = 1; // 0x752 MovI
	
Label_1875:
	var_56_string = "hit"; // 0x753 PushS
	var_57_int = var_56_string + var_29_int; // 0x754 Add
	GetGeometryLocator(var_57_int, var_30_bool, var_31_cvector, var_32_cvector); // 0x755 Func
	var_58_bool = var_30_bool == 0; // 0x757 Not
	if(var_58_bool == 0) goto Label_1882; // 0x758 JumpB
	goto Label_1891; // 0x759 Jump
	
Label_1891:
	size(var_33_int); // 0x763 ObjFunc
	var_59_int = var_33_int; // 0x765 Push
	if(var_59_int == 0) goto Label_1908; // 0x766 JumpB
	irand(var_34_int, var_33_int); // 0x767 Func
	get(var_35_cvector, var_34_int); // 0x769 ObjFunc
	var_60_object = Obj(); var_61_int = 0; var_62_float = 0; var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0); // 0x76b PushV
	var_60_object = var_15_object; // 0x76c Mov
	var_61_int = var_16_int; // 0x76d Mov
	var_62_float = var_17_float; // 0x76e Mov
	var_63_cvector = var_35_cvector; // 0x76f Mov
	var_64_cvector = -var_27_cvector; // 0x770 Neg2
	func_1914(var_62_float, var_63_cvector, var_64_cvector); // 0x771 NEW_2
	return 18; // 0x773 Return
	
Label_1908:
	var_28_object = 0; // 0x774 SetNull
	
Label_1909:
	var_105_object = Obj(); // 0x775 PushV
	var_105_object = var_15_object; // 0x776 Mov
	func_1802(var_105_object); // 0x777 NEW_2
	return 18; // 0x779 Return
	
Label_1882:
	var_106_int = var_32_cvector | var_27_cvector; // 0x75a Or
	var_107_float = 0.70711; // 0x75b PushF
	var_108_bool = var_106_int >= var_107_float; // 0x75c GE
	if(var_108_bool == 0) goto Label_1888; // 0x75d JumpB
	add(var_31_cvector); // 0x75e ObjFunc
	
Label_1888:
	var_109_int = 1; // 0x760 PushI
	var_29_int = var_29_int + var_109_int; // 0x761 Add2
	goto Label_1875; // 0x762 Jump
}


func_2365(var_23_int, var_24_object)
{
	var_25_bool = 0; var_26_object = Obj(); // 0x93e PushV
	var_26_object = var_24_object; // 0x93f Mov
	func_1778(var_25_bool, var_26_object); // 0x940 NEW_2
	if(var_25_bool == 0) goto Label_2373; // 0x942 JumpB
	var_23_int = 2; // 0x943 MovI
	goto Label_2374; // 0x944 Jump
	
Label_2374:
	return 0; // 0x946 Return
	
Label_2373:
	var_23_int = 0; // 0x945 MovI
}


func_1341(var_207_string)
{
	var_207_string = "walk"; // 0x53d MovS
	return 0; // 0x53e Return
}


func_1343(var_208_string)
{
	var_208_string = "run"; // 0x53f MovS
	return 0; // 0x540 Return
}


func_320()
{
	var_44_int = 0; var_45_int = 0; var_46_int = 0; var_47_int = 0; var_48_bool = 0; var_49_float = 0; var_50_bool = 0; var_51_int = 0; var_52_int = 0; var_53_int = 0; var_54_int = 0; var_55_bool = 0; var_56_float = 0; var_57_bool = 0; // 0x140 PushV
	WaitForAnimEnd(); // 0x141 Func
	var_58_bool = 0; // 0x143 PushV
	func_1939(var_58_bool); // 0x144 NEW_2
	var_59_bool = var_58_bool == 0; // 0x146 Not
	if(var_59_bool == 0) goto Label_329; // 0x147 JumpB
	return 14; // 0x148 Return
	
Label_329:
	var_60_int = 0; // 0x149 PushV
	func_2348(var_60_int); // 0x14a NEW_2
	var_51_int = var_60_int; // 0x14b Mov
	var_52_int = 0; // 0x14d MovI
	
Label_334:
	var_73_bool = 0; // 0x14e PushV
	var_73_bool = 0; // 0x14f MovB
	var_74_int = 5; // 0x150 PushI
	var_75_bool = var_52_int < var_74_int; // 0x151 LT
	if(var_75_bool == 0) goto Label_344; // 0x152 JumpB
	var_76_bool = 0; // 0x153 PushV
	func_1939(var_76_bool); // 0x154 NEW_2
	if(var_76_bool == 0) goto Label_344; // 0x156 JumpB
	var_73_bool = 1; // 0x157 MovB
	
Label_344:
	if(var_73_bool == 0) goto Label_396; // 0x158 JumpB
	var_77_int = 3; // 0x159 PushI
	irand(var_53_int, var_77_int); // 0x15a Func
	var_78_int = 0; // 0x15c PushI
	var_79_bool = var_53_int == var_78_int; // 0x15d Eq
	if(var_79_bool == 0) goto Label_368; // 0x15e JumpB
	var_80_int = var_51_int; // 0x15f Push
	if(var_80_int == 0) goto Label_367; // 0x160 JumpB
	irand(var_54_int, var_51_int); // 0x161 Func
	var_81_string = "all"; // 0x163 PushS
	var_82_string = ""; var_83_int = 0; // 0x164 PushV
	var_83_int = var_54_int; // 0x165 Mov
	func_2341(var_82_string, var_83_int); // 0x166 NEW_2
	PlayAnimation(var_81_string, var_82_string); // 0x168 Func
	WaitForAnimEnd(var_55_bool); // 0x16a Func
	var_84_bool = var_55_bool == 0; // 0x16c Not
	if(var_84_bool == 0) goto Label_367; // 0x16d JumpB
	goto Label_396; // 0x16e Jump
	
Label_396:
	ResetAAS(); // 0x18c Func
	return 14; // 0x18e Return
	
Label_367:
	goto Label_385; // 0x16f Jump
	
Label_385:
	var_85_bool = 0; // 0x181 PushV
	func_399(var_85_bool); // 0x182 NEW_2
	var_86_bool = var_85_bool == 0; // 0x184 Not
	if(var_86_bool == 0) goto Label_391; // 0x185 JumpB
	goto Label_396; // 0x186 Jump
	
Label_391:
	ResetAAS(); // 0x187 Func
	var_87_int = 1; // 0x189 PushI
	var_52_int = var_52_int + var_87_int; // 0x18a Add2
	goto Label_334; // 0x18b Jump
	
Label_368:
	var_88_int = 1; // 0x170 PushI
	var_89_bool = var_53_int == var_88_int; // 0x171 Eq
	if(var_89_bool == 0) goto Label_382; // 0x172 JumpB
	var_90_int = 4; // 0x173 PushI
	rand(var_56_float, var_90_int); // 0x174 Func
	var_91_int = 1; // 0x176 PushI
	var_92_int = var_56_float + var_91_int; // 0x177 Add
	Sleep(var_92_int, var_57_bool); // 0x178 Func
	var_93_bool = var_57_bool == 0; // 0x17a Not
	if(var_93_bool == 0) goto Label_381; // 0x17b JumpB
	goto Label_396; // 0x17c Jump
	
Label_381:
	goto Label_385; // 0x17d Jump
	
Label_382:
	var_94_int = var_52_int; // 0x17e Push
	if(var_94_int == 0) goto Label_385; // 0x17f JumpB
	goto Label_396; // 0x180 Jump
}


func_1345(var_32_float)
{
	var_32_float = 1000.0; // 0x541 MovF
	return 0; // 0x542 Return
}


func_1347(var_34_object, var_35_cvector)
{
	var_36_object = Obj(); var_37_object = Obj(); // 0x543 PushV
	var_38_int = 1; // 0x544 PushI
	var_39_int = 1; // 0x545 PushI
	FindPathTo(var_37_object, var_35_cvector, var_38_int, var_39_int); // 0x546 Func
	var_34_object = var_37_object; // 0x548 Mov
	return 2; // 0x549 Return
}


func_2375(var_63_object)
{
	var_64_object = Obj(); // 0x948 PushV
	var_64_object = var_63_object; // 0x949 Mov
	TaskCall(2); // 0x94a TaskCall
	func_406(var_64_object); // 0x94b NEW_2
	TaskReturn(); // 0x94c TaskReturn
	return 0; // 0x94e Return
}


func_2383(var_20_int)
{
	var_20_int = 0; // 0x950 MovI
	return 0; // 0x951 Return
}


func_2386()
{
	return 0; // 0x953 Return
}


func_2388(var_14_int)
{
	var_14_int = 0; // 0x955 MovI
	return 0; // 0x956 Return
}


func_2391()
{
	return 0; // 0x958 Return
}


func_2393(var_41_int)
{
	var_41_int = 0; // 0x95a MovI
	return 0; // 0x95b Return
}


func_1369()
{
	var_13_bool = 0; // 0x559 PushV
	func_1939(var_13_bool); // 0x55a NEW_2
	var_16_bool = var_13_bool == 0; // 0x55c Not
	if(var_16_bool == 0) goto Label_1377; // 0x55d JumpB
	func_2407(); // 0x55f NEW_2
	
Label_1377:
	return 0; // 0x561 Return
}


func_2396()
{
	return 0; // 0x95d Return
}


func_860(var_494_bool, var_495_float)
{
	var_496_float = 0; var_497_bool = 0; var_498_float = 0; var_499_bool = 0; // 0x35c PushV
	rand(var_498_float); // 0x35d Func
	var_500_bool = var_498_float < var_495_float; // 0x35f LT
	if(var_500_bool == 0) goto Label_880; // 0x360 JumpB
	
Label_865:
	IsAnimationPlaying(var_499_bool); // 0x361 Func
	var_501_bool = var_499_bool == 0; // 0x363 Not
	if(var_501_bool == 0) goto Label_870; // 0x364 JumpB
	goto Label_879; // 0x365 Jump
	
Label_879:
	goto Label_885; // 0x36f Jump
	
Label_885:
	var_494_bool = 0; // 0x375 MovB
	return 4; // 0x376 Return
	
Label_870:
	var_502_bool = 0; // 0x366 PushV
	func_958(var_502_bool); // 0x367 NEW_2
	if(var_502_bool == 0) goto Label_876; // 0x369 JumpB
	var_494_bool = 1; // 0x36a MovB
	return 4; // 0x36b Return
	
Label_876:
	sync(); // 0x36c Func
	goto Label_865; // 0x36e Jump
	
Label_880:
	WaitForAnimEnd(); // 0x370 Func
	func_1062(var_499_bool); // 0x373 NEW_2
}


func_2398(var_14_int)
{
	var_14_int = 2; // 0x95f MovI
	return 0; // 0x960 Return
}


func_2401(var_20_object)
{
	var_21_object = Obj(); // 0x962 PushV
	var_21_object = var_20_object; // 0x963 Mov
	func_2428(var_21_object); // 0x964 NEW_2
	return 0; // 0x966 Return
}


func_2407()
{
	return 0; // 0x967 Return
}


func_2408(var_17_bool)
{
	var_17_bool = 0; // 0x969 MovB
	return 0; // 0x96a Return
}


func_2411()
{
	return 0; // 0x96c Return
}


func_2413(var_24_bool)
{
	var_24_bool = 0; // 0x96e MovB
	return 0; // 0x96f Return
}


func_2416()
{
	return 0; // 0x971 Return
}


func_2418(var_28_bool)
{
	var_28_bool = 0; // 0x973 MovB
	return 0; // 0x974 Return
}


func_2421()
{
	return 0; // 0x976 Return
}


func_887(var_0_object, var_295_bool, var_296_float)
{
	var_297_bool = 0; var_298_cvector = CVector(0,0,0); var_299_cvector = CVector(0,0,0); var_300_cvector = CVector(0,0,0); var_301_float = 0; var_302_bool = 0; var_303_cvector = CVector(0,0,0); var_304_cvector = CVector(0,0,0); var_305_cvector = CVector(0,0,0); var_306_float = 0; // 0x377 PushV
	
Label_888:
	IsAnimationPlaying(var_302_bool); // 0x378 Func
	var_307_bool = var_302_bool == 0; // 0x37a Not
	if(var_307_bool == 0) goto Label_893; // 0x37b JumpB
	goto Label_925; // 0x37c Jump
	
Label_925:
	func_1062(var_306_float); // 0x39e NEW_2
	var_295_bool = 0; // 0x3a0 MovB
	return 10; // 0x3a1 Return
	
Label_893:
	var_308_bool = 0; // 0x37d PushV
	func_958(var_308_bool); // 0x37e NEW_2
	if(var_308_bool == 0) goto Label_899; // 0x380 JumpB
	var_295_bool = 1; // 0x381 MovB
	return 10; // 0x382 Return
	
Label_899:
	var_351_bool = 0; var_352_object = Obj(); // 0x383 PushV
	var_352_object = var_0_object; // 0x384 MovT
	func_1778(var_351_bool, var_352_object); // 0x385 NEW_2
	var_353_bool = var_351_bool == 0; // 0x387 Not
	if(var_353_bool == 0) goto Label_907; // 0x388 JumpB
	var_295_bool = 0; // 0x389 MovB
	return 10; // 0x38a Return
	
Label_907:
	GetPFPosition(var_303_cvector); // 0x38b TObjFunc
	GetPFPosition(var_304_cvector); // 0x38d Func
	var_305_cvector = var_303_cvector - var_304_cvector; // 0x38f Sub2
	var_306_float = var_305_cvector | var_305_cvector; // 0x390 Or2
	var_354_float = var_296_float * var_296_float; // 0x391 Mult
	var_355_bool = var_306_float < var_354_float; // 0x392 LT
	if(var_355_bool == 0) goto Label_922; // 0x393 JumpB
	var_356_bool = 0; var_357_float = 0; // 0x394 PushV
	var_357_float = var_296_float; // 0x395 Mov
	func_723(var_306_float, var_356_bool, var_357_float); // 0x396 NEW_2
	var_295_bool = 1; // 0x398 MovB
	return 10; // 0x399 Return
	
Label_922:
	sync(); // 0x39a Func
	goto Label_888; // 0x39c Jump
}


func_2423(var_19_bool)
{
	var_19_bool = 0; // 0x978 MovB
	return 0; // 0x979 Return
}


func_1914(var_17_object, var_20_cvector, var_21_cvector)
{
	var_22_object = Obj(); var_23_object = Obj(); var_24_object = Obj(); var_25_object = Obj(); // 0x77a PushV
	GetScene(var_24_object); // 0x77b Func
	var_26_string = "scripted"; // 0x77d PushS
	var_27_string = "blood_dir.xml"; // 0x77e PushS
	AddActorByType(var_25_object, var_26_string, var_24_object, var_20_cvector, var_21_cvector, var_27_string); // 0x77f Func
	var_28_object = Obj(); // 0x781 PushV
	var_28_object = var_17_object; // 0x782 Mov
	func_1802(var_28_object); // 0x783 NEW_2
	return 4; // 0x785 Return
}


func_2426()
{
	return 0; // 0x97b Return
}


func_2428(var_21_object)
{
	var_22_bool = 0; var_23_bool = 0; // 0x97c PushV
	var_24_bool = GlobalVars[0]; // 0x97d PushGE
	if(var_24_bool == 0) goto Label_2440; // 0x97e JumpB
	IsOverrideActive(var_23_bool); // 0x97f Func
	var_25_bool = var_23_bool == 0; // 0x981 Not
	if(var_25_bool == 0) goto Label_2439; // 0x982 JumpB
	var_26_object = Obj(); // 0x983 PushV
	var_26_object = var_21_object; // 0x984 Mov
	func_2097(var_26_object); // 0x985 NEW_2
	
Label_2439:
	return 2; // 0x987 Return
	
Label_2440:
	return 2; // 0x988 Return
}


func_1928()
{
	var_242_cvector = CVector(0,0,0); var_243_cvector = CVector(0,0,0); var_244_cvector = CVector(0,0,0); var_245_cvector = CVector(0,0,0); var_246_cvector = CVector(0,0,0); var_247_cvector = CVector(0,0,0); // 0x788 PushV
	GetPosition(var_245_cvector); // 0x789 ObjFunc
	GetPosition(var_246_cvector); // 0x78b Func
	var_247_cvector = var_245_cvector - var_246_cvector; // 0x78d Sub2
	var_248_float = GetByIndex(var_247_cvector, 0); // 0x78e PushE
	var_249_float = GetByIndex(var_247_cvector, 2); // 0x78f PushE
	RotateAsync(var_248_float, var_249_float); // 0x790 Func
	return 6; // 0x792 Return
}


func_2441()
{
	var_12_bool = GlobalVars[0]; // 0x989 PushGE
	var_12_bool = 0; // 0x98a MovB
	GlobalVars[0] = var_12_bool; // 0x98b PopGE
	return 0; // 0x98c Return
}


func_2445(var_16_bool)
{
	var_16_bool = 0; // 0x98e MovB
	return 0; // 0x98f Return
}


func_399(var_85_bool)
{
	var_85_bool = 1; // 0x18f MovB
	return 0; // 0x190 Return
}


func_2448(var_94_object)
{
	var_95_bool = 0; var_96_object = Obj(); // 0x991 PushV
	var_96_object = var_94_object; // 0x992 Mov
	func_1647(var_95_bool, var_96_object); // 0x993 NEW_2
	if(var_95_bool == 0) goto Label_2464; // 0x995 JumpB
	var_99_object = Obj(); // 0x996 PushV
	func_2022(var_99_object); // 0x997 NEW_2
	var_102_float = -0.07; // 0x999 PushF
	var_103_bool = 1; // 0x99a PushB
	ReportReputationChange(var_94_object, var_99_object, var_102_float, var_103_bool); // 0x99b Func
	func_2151(); // 0x99e NEW_2
	
Label_2464:
	func_2127(); // 0x9a1 NEW_2
	var_150_bool = GlobalVars[0]; // 0x9a3 PushGE
	var_150_bool = 1; // 0x9a4 MovB
	GlobalVars[0] = var_150_bool; // 0x9a5 PopGE
	var_151_int = 50; // 0x9a6 PushI
	var_152_int = 40; // 0x9a7 PushI
	SetRTEnvelope(var_151_int, var_152_int); // 0x9a8 Func
	return 0; // 0x9aa Return
}


func_401()
{
	StopAnimation(); // 0x191 Func
	StopGroup0(); // 0x193 Func
	return 0; // 0x195 Return
}


func_1939(var_13_bool)
{
	var_14_bool = 0; var_15_bool = 0; // 0x793 PushV
	IsLoaded(var_15_bool); // 0x794 Func
	var_13_bool = var_15_bool; // 0x796 Mov
	return 2; // 0x797 Return
}


func_406(var_64_object)
{
	var_71_object = Obj(); var_72_bool = 0; var_73_float = 0; // 0x197 PushV
	var_71_object = var_64_object; // 0x198 Mov
	var_72_bool = 1; // 0x199 MovB
	var_73_float = 180.0; // 0x19a MovF
	func_420(var_67_int, var_68_bool, var_69_float, var_70_int, var_64_object, var_71_object, var_72_bool, var_73_float); // 0x19b NEW_2
	return 0; // 0x19d Return
}


func_1944(var_157_object)
{
	var_158_float = 0; var_159_cvector = CVector(0,0,0); var_160_float = 0; var_161_cvector = CVector(0,0,0); // 0x798 PushV
	GetEyesHeight(var_160_float); // 0x799 ObjFunc
	var_161_cvector = CVector(0.0, 0.0, 0.0); // 0x79b MovV
	var_162_float = GetByIndex(var_161_cvector, 1); // 0x79c PushE
	var_162_float = var_160_float; // 0x79d Mov
	SetByIndex(var_161_cvector, 1) = var_162_float; // 0x79e PopE
	var_163_string = "head"; // 0x79f PushS
	LookAsync(var_157_object, var_163_string, var_161_cvector); // 0x7a0 Func
	return 4; // 0x7a2 Return
}


func_414(var_404_float)
{
	var_404_float = 0.05; // 0x19f MovF
	return 0; // 0x1a0 Return
}


func_417(var_411_int)
{
	var_411_int = 0; // 0x1a2 MovI
	return 0; // 0x1a3 Return
}


func_930(var_0_object, var_310_bool)
{
	var_311_cvector = CVector(0,0,0); var_312_cvector = CVector(0,0,0); var_313_cvector = CVector(0,0,0); var_314_float = 0; var_315_float = 0; var_316_cvector = CVector(0,0,0); var_317_cvector = CVector(0,0,0); var_318_cvector = CVector(0,0,0); var_319_float = 0; var_320_float = 0; // 0x3a2 PushV
	var_321_bool = 0; var_322_object = Obj(); // 0x3a3 PushV
	var_322_object = var_0_object; // 0x3a4 MovT
	func_1778(var_321_bool, var_322_object); // 0x3a5 NEW_2
	var_323_bool = var_321_bool == 0; // 0x3a7 Not
	if(var_323_bool == 0) goto Label_939; // 0x3a8 JumpB
	var_310_bool = 0; // 0x3a9 MovB
	return 10; // 0x3aa Return
	
Label_939:
	var_324_bool = 0; // 0x3ab PushV
	func_1019(var_320_float, var_324_bool); // 0x3ac NEW_2
	if(var_324_bool == 0) goto Label_956; // 0x3ae JumpB
	GetPFPosition(var_316_cvector); // 0x3af TObjFunc
	GetPFPosition(var_317_cvector); // 0x3b1 Func
	var_318_cvector = var_316_cvector - var_317_cvector; // 0x3b3 Sub2
	var_319_float = var_318_cvector | var_318_cvector; // 0x3b4 Or2
	GetAttackDistance(var_320_float); // 0x3b5 TObjFunc
	var_325_int = 50; // 0x3b7 PushI
	var_320_float = var_320_float + var_325_int; // 0x3b8 Add2
	var_326_float = var_320_float * var_320_float; // 0x3b9 Mult
	var_310_bool = var_319_float <= var_326_float; // 0x3ba LE2
	return 10; // 0x3bb Return
	
Label_956:
	var_310_bool = 0; // 0x3bc MovB
	return 10; // 0x3bd Return
}


func_1955(var_121_string, var_122_int, var_123_int)
{
	var_124_bool = 0; var_125_bool = 0; // 0x7a3 PushV
	var_126_bool = 0; var_127_int = 0; var_128_int = 0; // 0x7a4 PushV
	var_127_int = var_122_int; // 0x7a5 Mov
	var_128_int = var_123_int; // 0x7a6 Mov
	func_2056(var_126_bool, var_127_int, var_128_int); // 0x7a7 NEW_2
	if(var_126_bool == 0) goto Label_1965; // 0x7a9 JumpB
	var_129_int = 0; // 0x7aa PushI
	AddItem(var_125_bool, var_121_string, var_129_int); // 0x7ab Func
	
Label_1965:
	return 2; // 0x7ad Return
}


func_420(var_0_object, var_3_bool, var_5_int, var_71_object, var_72_bool, var_73_float, var_146_bool, var_236_bool)
{
	var_74_float = 0; var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0); var_77_bool = 0; var_78_bool = 0; var_79_float = 0; var_80_cvector = CVector(0,0,0); var_81_float = 0; var_82_cvector = CVector(0,0,0); var_83_bool = 0; var_84_float = 0; var_85_float = 0; var_86_cvector = CVector(0,0,0); var_87_cvector = CVector(0,0,0); var_88_bool = 0; var_89_bool = 0; var_90_float = 0; var_91_cvector = CVector(0,0,0); var_92_float = 0; var_93_cvector = CVector(0,0,0); var_94_bool = 0; var_95_float = 0; // 0x1a4 PushV
	func_649(var_93_cvector, var_94_bool, var_95_float); // 0x1a6 NEW_2
	var_5_int = 0; // 0x1a8 TMovI
	var_118_string = "@GetAttackDistance"; // 0x1a9 PushS
	var_119_int = 1; // 0x1aa PushI
	var_120_bool = IsFuncExist(var_71_object, var_118_string, var_119_int); // 0x1ab FuncExist
	if(var_120_bool == 0) goto Label_434; // 0x1ac JumpB
	GetAttackDistance(var_85_float); // 0x1ad ObjFunc
	var_121_int = 50; // 0x1af PushI
	var_85_float = var_85_float + var_121_int; // 0x1b0 Add2
	goto Label_435; // 0x1b1 Jump
	
Label_435:
	var_122_int = 150; // 0x1b3 PushI
	var_123_bool = var_85_float >= var_122_int; // 0x1b4 GE
	if(var_123_bool == 0) goto Label_439; // 0x1b5 JumpB
	var_85_float = 150; // 0x1b6 MovI
	
Label_439:
	var_3_bool = 0; // 0x1b7 TMovB
	var_0_object = var_71_object; // 0x1b8 TMov
	IsPlayerActor(var_0_object, var_88_bool); // 0x1b9 Func
	var_124_bool = var_88_bool; // 0x1bb Push
	if(var_124_bool == 0) goto Label_453; // 0x1bc JumpB
	var_125_string = "attack"; // 0x1bd PushS
	PlayGlobalMusic(var_125_string); // 0x1be Func
	var_126_object = Obj(); // 0x1c0 PushV
	func_2022(var_126_object); // 0x1c1 NEW_2
	SendPlayerEnemy(var_71_object, var_126_object); // 0x1c3 Func
	
Label_453:
	var_127_bool = var_72_bool; // 0x1c5 Push
	if(var_127_bool == 0) goto Label_457; // 0x1c6 JumpB
	var_89_bool = 0; // 0x1c7 MovB
	goto Label_458; // 0x1c8 Jump
	
Label_458:
	var_128_float = 400.0; // 0x1ca PushF
	var_90_float = var_128_float + var_85_float; // 0x1cb Add2
	
Label_460:
	var_129_bool = 0; // 0x1cc PushV
	var_129_bool = 0; // 0x1cd MovB
	var_130_bool = 0; var_131_object = Obj(); // 0x1ce PushV
	var_131_object = var_0_object; // 0x1cf MovT
	func_1778(var_130_bool, var_131_object); // 0x1d0 NEW_2
	if(var_130_bool == 0) goto Label_470; // 0x1d2 JumpB
	var_132_bool = var_3_bool == 0; // 0x1d3 Not
	if(var_132_bool == 0) goto Label_470; // 0x1d4 JumpB
	var_129_bool = 1; // 0x1d5 MovB
	
Label_470:
	if(var_129_bool == 0) goto Label_632; // 0x1d6 JumpB
	func_1062(var_95_float); // 0x1d8 NEW_2
	GetPFPosition(var_86_cvector); // 0x1da TObjFunc
	GetPFPosition(var_87_cvector); // 0x1dc Func
	var_91_cvector = var_86_cvector - var_87_cvector; // 0x1de Sub2
	var_92_float = var_91_cvector | var_91_cvector; // 0x1df Or2
	var_138_float = var_90_float * var_90_float; // 0x1e0 Mult
	var_139_bool = var_92_float >= var_138_float; // 0x1e1 GE
	if(var_139_bool == 0) goto Label_498; // 0x1e2 JumpB
	var_140_bool = 0; var_141_object = Obj(); var_142_float = 0; var_143_float = 0; var_144_bool = 0; var_145_bool = 0; // 0x1e3 PushV
	var_141_object = var_0_object; // 0x1e4 MovT
	var_142_float = var_85_float; // 0x1e5 Mov
	var_143_float = 3000.0; // 0x1e6 MovF
	var_144_bool = 1; // 0x1e7 MovB
	var_145_bool = 0; // 0x1e8 MovB
	TaskCall(3); // 0x1e9 TaskCall
	func_1089(var_148_bool, var_140_bool, var_141_object, var_142_float, var_143_float, var_144_bool, var_145_bool); // 0x1ea NEW_2
	TaskReturn(); // 0x1eb TaskReturn
	var_221_bool = var_146_bool == 0; // 0x1ed Not
	if(var_221_bool == 0) goto Label_496; // 0x1ee JumpB
	goto Label_632; // 0x1ef Jump
	
Label_632:
	WaitForAnimEnd(); // 0x278 Func
	var_222_bool = var_3_bool; // 0x27a PushT
	if(var_222_bool == 0) goto Label_637; // 0x27b JumpB
	return 22; // 0x27c Return
	
Label_637:
	var_223_string = "all"; // 0x27d PushS
	var_224_string = "attack_off"; // 0x27e PushS
	PlayAnimation(var_223_string, var_224_string); // 0x27f Func
	WaitForAnimEnd(); // 0x281 Func
	var_225_bool = var_88_bool; // 0x283 Push
	if(var_225_bool == 0) goto Label_648; // 0x284 JumpB
	var_226_float = 2.0; // 0x285 PushF
	Sleep(var_226_float); // 0x286 Func
	
Label_648:
	return 22; // 0x288 Return
	
Label_496:
	var_89_bool = 0; // 0x1f0 MovB
	goto Label_631; // 0x1f1 Jump
	
Label_631:
	goto Label_460; // 0x277 Jump
	
Label_498:
	var_227_float = var_73_float * var_73_float; // 0x1f2 Mult
	var_228_bool = var_92_float >= var_227_float; // 0x1f3 GE
	if(var_228_bool == 0) goto Label_623; // 0x1f4 JumpB
	GetPFPosition(var_93_cvector); // 0x1f5 TObjFunc
	CanReachByPF(var_94_bool, var_93_cvector); // 0x1f7 Func
	var_229_bool = var_94_bool == 0; // 0x1f9 Not
	if(var_229_bool == 0) goto Label_522; // 0x1fa JumpB
	var_230_bool = 0; var_231_object = Obj(); var_232_float = 0; var_233_float = 0; var_234_bool = 0; var_235_bool = 0; // 0x1fb PushV
	var_231_object = var_0_object; // 0x1fc MovT
	var_232_float = var_85_float; // 0x1fd Mov
	var_233_float = 3000.0; // 0x1fe MovF
	var_234_bool = 1; // 0x1ff MovB
	var_235_bool = 0; // 0x200 MovB
	TaskCall(3); // 0x201 TaskCall
	func_1089(var_238_bool, var_230_bool, var_231_object, var_232_float, var_233_float, var_234_bool, var_235_bool); // 0x202 NEW_2
	TaskReturn(); // 0x203 TaskReturn
	var_239_bool = var_236_bool == 0; // 0x205 Not
	if(var_239_bool == 0) goto Label_520; // 0x206 JumpB
	goto Label_632; // 0x207 Jump
	
Label_520:
	var_89_bool = 0; // 0x208 MovB
	goto Label_460; // 0x209 Jump
	
Label_522:
	var_240_bool = var_89_bool == 0; // 0x20a Not
	if(var_240_bool == 0) goto Label_547; // 0x20b JumpB
	var_241_object = Obj(); // 0x20c PushV
	var_241_object = var_0_object; // 0x20d MovT
	func_1928(); // 0x20e NEW_2
	var_250_string = "all"; // 0x210 PushS
	var_251_string = "attack_on"; // 0x211 PushS
	PlayAnimation(var_250_string, var_251_string); // 0x212 Func
	WaitForAnimEnd(); // 0x214 Func
	func_1062(var_95_float); // 0x217 NEW_2
	StopAsync(); // 0x219 Func
	var_89_bool = 1; // 0x21b MovB
	var_252_bool = 0; var_253_object = Obj(); // 0x21c PushV
	var_253_object = var_0_object; // 0x21d MovT
	func_1778(var_252_bool, var_253_object); // 0x21e NEW_2
	var_254_bool = var_252_bool == 0; // 0x220 Not
	if(var_254_bool == 0) goto Label_547; // 0x221 JumpB
	goto Label_632; // 0x222 Jump
	
Label_547:
	rand(var_95_float); // 0x223 Func
	var_255_bool = 0; // 0x225 PushV
	var_255_bool = 1; // 0x226 MovB
	var_256_float = 0.25; // 0x227 PushF
	var_257_bool = var_95_float < var_256_float; // 0x228 LT
	if(var_257_bool == 0) goto Label_559; // 0x229 JumpB
	var_258_bool = 0; // 0x22a PushV
	func_1019(var_255_bool, var_258_bool); // 0x22b NEW_2
	if(var_258_bool == 0) goto Label_559; // 0x22d JumpB
	var_255_bool = 0; // 0x22e MovB
	
Label_559:
	if(var_255_bool == 0) goto Label_576; // 0x22f JumpB
	Face(var_0_object); // 0x230 Func
	func_1069(); // 0x233 NEW_2
	var_293_string = "all"; // 0x235 PushS
	var_294_string = "attack_stay"; // 0x236 PushS
	PlayAnimation(var_293_string, var_294_string); // 0x237 Func
	var_295_bool = 0; var_296_float = 0; // 0x239 PushV
	var_296_float = var_73_float; // 0x23a Mov
	func_887(var_95_float, var_295_bool, var_296_float); // 0x23b NEW_2
	StopAsync(); // 0x23d Func
	goto Label_622; // 0x23f Jump
	
Label_622:
	goto Label_631; // 0x26e Jump
	
Label_576:
	Face(var_0_object); // 0x240 Func
	var_510_string = "all"; // 0x242 PushS
	var_511_string = "fjump"; // 0x243 PushS
	PlayAnimation(var_510_string, var_511_string); // 0x244 Func
	WaitForAnimEnd(); // 0x246 Func
	func_1062(var_95_float); // 0x249 NEW_2
	var_512_cvector = CVector(0.0, 0.0, 0.0); // 0x24b PushVec
	SetSpeed(var_512_cvector); // 0x24c Func
	Stop(); // 0x24e Func
	StopAsync(); // 0x250 Func
	var_513_bool = 0; // 0x252 PushV
	func_1019(var_95_float, var_513_bool); // 0x253 NEW_2
	var_514_bool = var_513_bool == 0; // 0x255 Not
	if(var_514_bool == 0) goto Label_622; // 0x256 JumpB
	var_515_bool = 0; var_516_object = Obj(); // 0x257 PushV
	var_516_object = var_0_object; // 0x258 MovT
	func_1778(var_515_bool, var_516_object); // 0x259 NEW_2
	var_517_bool = var_515_bool == 0; // 0x25b Not
	if(var_517_bool == 0) goto Label_606; // 0x25c JumpB
	goto Label_632; // 0x25d Jump
	
Label_606:
	GetPFPosition(var_86_cvector); // 0x25e TObjFunc
	GetPFPosition(var_87_cvector); // 0x260 Func
	var_91_cvector = var_86_cvector - var_87_cvector; // 0x262 Sub2
	var_92_float = var_91_cvector | var_91_cvector; // 0x263 Or2
	var_518_float = var_73_float * var_73_float; // 0x264 Mult
	var_519_bool = var_92_float < var_518_float; // 0x265 LT
	if(var_519_bool == 0) goto Label_622; // 0x266 JumpB
	var_520_bool = 0; var_521_float = 0; // 0x267 PushV
	var_521_float = var_73_float; // 0x268 Mov
	func_723(var_95_float, var_520_bool, var_521_float); // 0x269 NEW_2
	var_522_bool = var_520_bool == 0; // 0x26b Not
	if(var_522_bool == 0) goto Label_622; // 0x26c JumpB
	goto Label_632; // 0x26d Jump
	
Label_623:
	var_523_bool = 0; var_524_float = 0; // 0x26f PushV
	var_524_float = var_73_float; // 0x270 Mov
	func_723(var_95_float, var_523_bool, var_524_float); // 0x271 NEW_2
	var_525_bool = var_523_bool == 0; // 0x273 Not
	if(var_525_bool == 0) goto Label_630; // 0x274 JumpB
	goto Label_632; // 0x275 Jump
	
Label_630:
	var_89_bool = 1; // 0x276 MovB
	
Label_457:
	var_89_bool = 1; // 0x1c9 MovB
	
Label_434:
	var_85_float = var_73_float; // 0x1b2 Mov
}


func_1966(var_105_string, var_106_int, var_107_int, var_108_int)
{
	var_109_int = 0; var_110_bool = 0; var_111_int = 0; var_112_bool = 0; // 0x7ae PushV
	var_113_bool = 0; var_114_int = 0; var_115_int = 0; // 0x7af PushV
	var_114_int = var_106_int; // 0x7b0 Mov
	var_115_int = var_107_int; // 0x7b1 Mov
	func_2056(var_113_bool, var_114_int, var_115_int); // 0x7b2 NEW_2
	if(var_113_bool == 0) goto Label_1980; // 0x7b4 JumpB
	irand(var_111_int, var_108_int); // 0x7b5 Func
	var_118_int = 0; // 0x7b7 PushI
	var_119_int = 1; // 0x7b8 PushI
	var_120_int = var_111_int + var_119_int; // 0x7b9 Add
	AddItem(var_112_bool, var_105_string, var_118_int, var_120_int); // 0x7ba Func
	
Label_1980:
	return 4; // 0x7bc Return
}


func_1981(var_37_string)
{
	var_38_bool = 0; var_39_int = 0; var_40_bool = 0; var_41_int = 0; var_42_bool = 0; var_43_float = 0; var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_bool = 0; var_47_int = 0; var_48_bool = 0; var_49_int = 0; var_50_bool = 0; var_51_float = 0; var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); // 0x7bd PushV
	IsExisting3DSound(var_46_bool, var_37_string); // 0x7be Func
	var_54_bool = var_46_bool == 0; // 0x7c0 Not
	if(var_54_bool == 0) goto Label_2006; // 0x7c1 JumpB
	var_47_int = 0; // 0x7c2 MovI
	
Label_1987:
	var_55_int = 1; // 0x7c3 PushI
	var_56_int = var_47_int + var_55_int; // 0x7c4 Add
	var_57_int = var_37_string + var_56_int; // 0x7c5 Add
	IsExisting3DSound(var_48_bool, var_57_int); // 0x7c6 Func
	var_58_bool = var_48_bool == 0; // 0x7c8 Not
	if(var_58_bool == 0) goto Label_1995; // 0x7c9 JumpB
	goto Label_1998; // 0x7ca Jump
	
Label_1998:
	var_59_bool = var_47_int == 0; // 0x7ce Not
	if(var_59_bool == 0) goto Label_2001; // 0x7cf JumpB
	return 16; // 0x7d0 Return
	
Label_2001:
	irand(var_49_int, var_47_int); // 0x7d1 Func
	var_60_int = 1; // 0x7d3 PushI
	var_61_int = var_49_int + var_60_int; // 0x7d4 Add
	var_37_string = var_37_string + var_61_int; // 0x7d5 Add2
	
Label_2006:
	Is3DSoundLoaded(var_50_bool, var_37_string); // 0x7d6 Func
	var_62_bool = var_50_bool; // 0x7d8 Push
	if(var_62_bool == 0) goto Label_2021; // 0x7d9 JumpB
	GetEyesHeight(var_51_float); // 0x7da Func
	GetDirection(var_52_cvector); // 0x7dc Func
	var_63_int = 50; // 0x7de PushI
	var_53_cvector = var_52_cvector * var_63_int; // 0x7df Mult2
	var_64_float = GetByIndex(var_53_cvector, 1); // 0x7e0 PushE
	var_64_float = var_64_float + var_51_float; // 0x7e1 Add2
	SetByIndex(var_53_cvector, 1) = var_64_float; // 0x7e2 PopE
	PlayGlobalSound(var_37_string, var_53_cvector); // 0x7e3 Func
	
Label_2021:
	return 16; // 0x7e5 Return
	
Label_1995:
	var_65_int = 1; // 0x7cb PushI
	var_47_int = var_47_int + var_65_int; // 0x7cc Add2
	goto Label_1987; // 0x7cd Jump
}


func_958(var_308_bool)
{
	var_309_bool = 0; // 0x3be PushV
	var_309_bool = 0; // 0x3bf MovB
	var_310_bool = 0; // 0x3c0 PushV
	func_930(var_309_bool, var_310_bool); // 0x3c1 NEW_2
	if(var_310_bool == 0) goto Label_969; // 0x3c3 JumpB
	var_327_bool = 0; // 0x3c4 PushV
	func_974(var_308_bool, var_309_bool, var_327_bool); // 0x3c5 NEW_2
	if(var_327_bool == 0) goto Label_969; // 0x3c7 JumpB
	var_309_bool = 1; // 0x3c8 MovB
	
Label_969:
	if(var_309_bool == 0) goto Label_972; // 0x3c9 JumpB
	var_308_bool = 1; // 0x3ca MovB
	return 0; // 0x3cb Return
	
Label_972:
	var_308_bool = 0; // 0x3cc MovB
	return 0; // 0x3cd Return
}


func_974(var_0_object, var_4_float, var_327_bool)
{
	var_328_object = Obj(); var_329_bool = 0; var_330_float = 0; var_331_cvector = CVector(0,0,0); var_332_cvector = CVector(0,0,0); var_333_object = Obj(); var_334_bool = 0; var_335_float = 0; var_336_cvector = CVector(0,0,0); var_337_cvector = CVector(0,0,0); // 0x3ce PushV
	GetScene(var_333_object); // 0x3cf Func
	var_334_bool = 0; // 0x3d1 MovB
	
Label_978:
	var_338_cvector = CVector(0,0,0); var_339_object = Obj(); // 0x3d2 PushV
	var_339_object = var_0_object; // 0x3d3 MovT
	func_1640(var_339_object); // 0x3d4 NEW_2
	var_344_int = -var_338_cvector; // 0x3d6 Neg
	FindDirLength(var_335_float, var_344_int, var_335_float); // 0x3d7 Func
	var_345_bool = var_335_float < var_4_float; // 0x3d9 LT
	if(var_345_bool == 0) goto Label_988; // 0x3da JumpB
	goto Label_1016; // 0x3db Jump
	
Label_1016:
	var_327_bool = var_334_bool; // 0x3f8 Mov
	return 10; // 0x3f9 Return
	
Label_988:
	Face(var_0_object); // 0x3dc Func
	var_346_string = "all"; // 0x3de PushS
	var_347_string = "bjump"; // 0x3df PushS
	PlayAnimation(var_346_string, var_347_string); // 0x3e0 Func
	GetPFPosition(var_336_cvector); // 0x3e2 TObjFunc
	GetPFPosition(var_337_cvector); // 0x3e4 Func
	WaitForAnimEnd(); // 0x3e6 Func
	func_1062(var_337_cvector); // 0x3e9 NEW_2
	StopAsync(); // 0x3eb Func
	var_348_cvector = CVector(0.0, 0.0, 0.0); // 0x3ed PushVec
	SetSpeed(var_348_cvector); // 0x3ee Func
	var_334_bool = 1; // 0x3f0 MovB
	var_349_bool = 0; // 0x3f1 PushV
	func_930(var_337_cvector, var_349_bool); // 0x3f2 NEW_2
	var_350_bool = var_349_bool == 0; // 0x3f4 Not
	if(var_350_bool == 0) goto Label_1015; // 0x3f5 JumpB
	goto Label_1016; // 0x3f6 Jump
	
Label_1015:
	goto Label_978; // 0x3f7 Jump
}


func_2022(var_99_object)
{
	var_100_object = Obj(); var_101_object = Obj(); // 0x7e6 PushV
	self(var_101_object); // 0x7e7 Func
	var_99_object = var_101_object; // 0x7e9 Mov
	return 2; // 0x7ea Return
}


func_2028(var_43_cvector, var_44_cvector)
{
	var_51_float = 0; var_52_float = 0; // 0x7ec PushV
	var_53_int = var_44_cvector | var_44_cvector; // 0x7ed Or
	var_52_float = sqrt(var_53_int); // 0x7ee Sqrt2
	var_54_float = 0.0; // 0x7ef PushF
	var_55_bool = var_52_float < var_54_float; // 0x7f0 LT
	if(var_55_bool == 0) goto Label_2036; // 0x7f1 JumpB
	var_43_cvector = CVector(0.0, 0.0, 0.0); // 0x7f2 MovV
	return 2; // 0x7f3 Return
	
Label_2036:
	var_43_cvector = var_44_cvector / var_44_cvector; // 0x7f4 Div2
	return 2; // 0x7f5 Return
}


func_2038(var_445_float, var_446_float, var_447_float)
{
	var_450_bool = var_446_float < var_447_float; // 0x7f7 LT
	if(var_450_bool == 0) goto Label_2043; // 0x7f8 JumpB
	var_445_float = var_446_float; // 0x7f9 Mov
	goto Label_2044; // 0x7fa Jump
	
Label_2044:
	return 0; // 0x7fc Return
	
Label_2043:
	var_445_float = var_447_float; // 0x7fb Mov
}


func_1019(var_0_object, var_258_bool)
{
	var_259_bool = 0; var_260_bool = 0; // 0x3fb PushV
	var_261_string = "IsAttacking"; // 0x3fc PushS
	var_262_int = 1; // 0x3fd PushI
	var_263_bool = IsFuncExist(var_0_object, var_261_string, var_262_int); // 0x3fe FuncExist
	if(var_263_bool == 0) goto Label_1028; // 0x3ff JumpB
	IsAttacking(var_260_bool); // 0x400 TObjFunc
	var_258_bool = var_260_bool; // 0x402 Mov
	return 2; // 0x403 Return
	
Label_1028:
	var_258_bool = 0; // 0x404 MovB
	return 2; // 0x405 Return
}


func_2045(var_455_float, var_456_float, var_457_float, var_458_float)
{
	var_459_bool = var_456_float < var_457_float; // 0x7fe LT
	if(var_459_bool == 0) goto Label_2050; // 0x7ff JumpB
	var_455_float = var_457_float; // 0x800 Mov
	return 0; // 0x801 Return
	
Label_2050:
	var_460_bool = var_456_float > var_458_float; // 0x802 GT
	if(var_460_bool == 0) goto Label_2054; // 0x803 JumpB
	var_455_float = var_458_float; // 0x804 Mov
	return 0; // 0x805 Return
	
Label_2054:
	var_455_float = var_456_float; // 0x806 Mov
	return 0; // 0x807 Return
}


