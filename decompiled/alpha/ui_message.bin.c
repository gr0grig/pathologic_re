task_0_event_100(var_0_int, var_1_int)
{
	DestroyWindow(); // 0x1f Func
	return 0; // 0x21 Return
}


task_0_event_200(var_0_int, var_1_int, var_2_string, var_3_object)
{
	var_4_int = 0; var_5_int = 0; // 0x22 PushV
	var_5_int = 0; // 0x23 MovI
	
Label_36:
	var_6_int = 12; // 0x24 PushI
	var_7_bool = var_5_int < var_6_int; // 0x25 LT
	if(var_7_bool == 0) goto Label_50; // 0x26 JumpB
	var_8_string = "button_day"; // 0x27 PushS
	var_9_int = 1; // 0x28 PushI
	var_10_int = var_5_int + var_9_int; // 0x29 Add
	var_11_int = var_8_string + var_10_int; // 0x2a Add
	var_12_bool = var_2_string == var_11_int; // 0x2b Eq
	if(var_12_bool == 0) goto Label_47; // 0x2c JumpB
	var_0_int = var_5_int; // 0x2d TMov
	goto Label_50; // 0x2e Jump
	
Label_50:
	var_13_int = 0; // 0x32 PushV
	var_13_int = var_0_int; // 0x33 MovT
	func_55(var_13_int); // 0x34 Call
	return 2; // 0x36 Return
	
Label_47:
	var_31_int = 1; // 0x2f PushI
	var_5_int = var_5_int + var_31_int; // 0x30 Add2
	goto Label_36; // 0x31 Jump
}


main(var_0_int)
{
	var_1_int = 0; var_2_float = 0; var_3_string = ""; var_4_string = ""; var_5_int = 0; var_6_float = 0; var_7_string = ""; var_8_string = ""; // 0x0 PushV
	var_0_int = 0; // 0x1 TMovI
	GetSelectedMessage(var_5_int); // 0x2 Func
	var_9_int = -1; // 0x4 PushI
	var_10_bool = var_5_int != var_9_int; // 0x5 Neq
	if(var_10_bool == 0) goto Label_16; // 0x6 JumpB
	GetMessage(var_5_int, var_7_string, var_8_string, var_6_float); // 0x7 Func
	var_11_float = 24.0; // 0x9 PushF
	var_0_int = var_6_float / var_6_float; // 0xa Div2
	var_12_int = 32768; // 0xb PushI
	var_13_int = var_5_int | var_12_int; // 0xc Or
	var_14_string = "text"; // 0xd PushS
	SendMessage(var_13_int, var_14_string); // 0xe Func
	
Label_16:
	ShowCursor(); // 0x10 Func
	var_15_string = "default"; // 0x12 PushS
	SetCursor(var_15_string); // 0x13 Func
	var_16_int = 0; // 0x15 PushV
	var_16_int = var_0_int; // 0x16 MovT
	func_55(var_16_int); // 0x17 Call
	CaptureKeyboard(); // 0x19 Func
	ProcessEvents(); // 0x1b Func
	return 8; // 0x1d Return
}


func_55(var_16_int)
{
	var_17_int = 0; var_18_int = 0; // 0x37 PushV
	var_18_int = 0; // 0x38 MovI
	
Label_57:
	var_19_int = 12; // 0x39 PushI
	var_20_bool = var_18_int < var_19_int; // 0x3a LT
	if(var_20_bool == 0) goto Label_80; // 0x3b JumpB
	var_21_bool = var_18_int == var_16_int; // 0x3c Eq
	if(var_21_bool == 0) goto Label_70; // 0x3d JumpB
	var_22_int = 1; // 0x3e PushI
	var_23_string = "button_day"; // 0x3f PushS
	var_24_int = 1; // 0x40 PushI
	var_25_int = var_18_int + var_24_int; // 0x41 Add
	var_26_int = var_23_string + var_25_int; // 0x42 Add
	SendMessage(var_22_int, var_26_int); // 0x43 Func
	goto Label_77; // 0x45 Jump
	
Label_77:
	var_27_int = 1; // 0x4d PushI
	var_18_int = var_18_int + var_27_int; // 0x4e Add2
	goto Label_57; // 0x4f Jump
	
Label_70:
	var_28_int = 0; // 0x46 PushI
	var_29_string = "button_day"; // 0x47 PushS
	var_30_int = 1; // 0x48 PushI
	var_31_int = var_18_int + var_30_int; // 0x49 Add
	var_32_int = var_29_string + var_31_int; // 0x4a Add
	SendMessage(var_28_int, var_32_int); // 0x4b Func
	
Label_80:
	var_33_string = "text"; // 0x50 PushS
	SendMessage(var_16_int, var_33_string); // 0x51 Func
	return 2; // 0x53 Return
}


