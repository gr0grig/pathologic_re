task_0_event_0(var_0_string, var_1_int, var_2_int)
{
	var_3_string = "default"; // 0x24 PushS
	var_4_float = 1.0; // 0x25 PushF
	var_5_float = 1.0; // 0x26 PushF
	var_6_float = 1.0; // 0x27 PushF
	Print(var_3_string, var_6_float, var_5_float, var_0_string, var_4_float, var_5_float, var_6_float); // 0x28 Func
	return 0; // 0x2a Return
}


main(var_0_string, var_1_int, var_2_int)
{
	var_3_int = 0; var_4_int = 0; var_5_int = 0; var_6_int = 0; var_7_int = 0; var_8_int = 0; var_9_int = 0; var_10_int = 0; // 0x0 PushV
	var_11_int = 0; // 0x1 PushV
	func_43(var_11_int); // 0x2 Call
	GetStringByID(var_0_string, var_11_int); // 0x4 Func
	_strupr(var_0_string); // 0x6 Func
	GetWindowSize(var_7_int, var_8_int); // 0x8 Func
	var_19_string = "default"; // 0xa PushS
	GetTextWidth(var_9_int, var_19_string, var_0_string); // 0xb Func
	var_7_int = var_7_int - var_9_int; // 0xd Sub2
	var_20_int = 0; // 0xe PushI
	var_21_bool = var_7_int < var_20_int; // 0xf LT
	if(var_21_bool == 0) goto Label_18; // 0x10 JumpB
	var_7_int = 0; // 0x11 MovI
	
Label_18:
	var_22_int = 2; // 0x12 PushI
	var_1_int = var_7_int / var_7_int; // 0x13 Div2
	var_23_string = "default"; // 0x14 PushS
	GetFontHeight(var_10_int, var_23_string); // 0x15 Func
	var_24_int = var_8_int - var_10_int; // 0x17 Sub
	var_25_int = 2; // 0x18 PushI
	var_2_int = var_24_int / var_24_int; // 0x19 Div2
	var_26_int = 0; // 0x1a PushI
	var_27_bool = var_2_int < var_26_int; // 0x1b LT
	if(var_27_bool == 0) goto Label_30; // 0x1c JumpB
	var_2_int = 0; // 0x1d TMovI
	
Label_30:
	var_28_bool = 1; // 0x1e PushB
	SetOwnerDraw(var_28_bool); // 0x1f Func
	ProcessEvents(); // 0x21 Func
	return 8; // 0x23 Return
}


func_43(var_11_int)
{
	var_12_int = 0; var_13_int = 0; // 0x2b PushV
	var_14_string = "player"; // 0x2c PushS
	GetVariable(var_14_string, var_13_int); // 0x2d Func
	var_15_int = 0; // 0x2f PushI
	var_16_bool = var_13_int == var_15_int; // 0x30 Eq
	if(var_16_bool == 0) goto Label_53; // 0x31 JumpB
	var_11_int = 200001; // 0x32 MovI
	return 2; // 0x33 Return
	
Label_53:
	var_17_int = 1; // 0x35 PushI
	var_18_bool = var_13_int == var_17_int; // 0x36 Eq
	if(var_18_bool == 0) goto Label_58; // 0x37 JumpB
	var_11_int = 200002; // 0x38 MovI
	return 2; // 0x39 Return
	
Label_58:
	var_11_int = 200003; // 0x3a MovI
	return 2; // 0x3b Return
}


