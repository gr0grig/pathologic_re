task_0_event_0(var_0_string, var_1_int, var_2_int)
{
	var_3_string = "default"; // 0x2d PushS
	var_4_float = 0.6549; // 0x2e PushF
	var_5_float = 0.6549; // 0x2f PushF
	var_6_float = 0.6549; // 0x30 PushF
	Print(var_3_string, var_6_float, var_5_float, var_0_string, var_4_float, var_5_float, var_6_float); // 0x31 Func
	return 0; // 0x33 Return
}


main(var_0_string, var_1_int, var_2_int)
{
	var_3_int = 0; var_4_int = 0; var_5_int = 0; var_6_int = 0; var_7_int = 0; var_8_int = 0; var_9_int = 0; var_10_int = 0; // 0x0 PushV
	var_11_int = 0; // 0x1 PushV
	func_52(var_11_int); // 0x2 NEW_2
	var_15_int = 1; // 0x4 PushI
	var_16_bool = var_11_int == var_15_int; // 0x5 Eq
	if(var_16_bool == 0) goto Label_9; // 0x6 JumpB
	var_7_int = 713; // 0x7 MovI
	goto Label_24; // 0x8 Jump
	
Label_24:
	GetStringByID(var_0_string, var_7_int); // 0x18 Func
	GetWindowSize(var_8_int, var_9_int); // 0x1a Func
	var_1_int = 2; // 0x1c TMovI
	var_17_string = "default"; // 0x1d PushS
	GetFontHeight(var_10_int, var_17_string); // 0x1e Func
	var_18_int = var_9_int - var_10_int; // 0x20 Sub
	var_19_int = 2; // 0x21 PushI
	var_2_int = var_18_int / var_18_int; // 0x22 Div2
	var_20_int = 0; // 0x23 PushI
	var_21_bool = var_2_int < var_20_int; // 0x24 LT
	if(var_21_bool == 0) goto Label_39; // 0x25 JumpB
	var_2_int = 0; // 0x26 TMovI
	
Label_39:
	var_22_bool = 1; // 0x27 PushB
	SetOwnerDraw(var_22_bool); // 0x28 Func
	ProcessEvents(); // 0x2a Func
	return 8; // 0x2c Return
	
Label_9:
	var_23_int = 0; // 0x9 PushV
	func_52(var_23_int); // 0xa NEW_2
	var_24_int = 0; // 0xc PushI
	var_25_bool = var_23_int == var_24_int; // 0xd Eq
	if(var_25_bool == 0) goto Label_17; // 0xe JumpB
	var_7_int = 714; // 0xf MovI
	goto Label_24; // 0x10 Jump
	
Label_17:
	var_26_int = 0; // 0x11 PushV
	func_52(var_26_int); // 0x12 NEW_2
	var_27_int = 2; // 0x14 PushI
	var_28_bool = var_26_int == var_27_int; // 0x15 Eq
	if(var_28_bool == 0) goto Label_24; // 0x16 JumpB
	var_7_int = 715; // 0x17 MovI
}


func_52(var_11_int)
{
	var_12_int = 0; var_13_int = 0; // 0x34 PushV
	var_14_string = "branch"; // 0x35 PushS
	GetVariable(var_14_string, var_13_int); // 0x36 Func
	var_11_int = var_13_int; // 0x38 Mov
	return 2; // 0x39 Return
}


