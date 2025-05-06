task_0_event_100(var_0_int, var_1_int)
{
	DestroyWindow(); // 0x26 Func
	return 0; // 0x28 Return
}


task_0_event_200(var_0_int, var_1_int, var_2_string, var_3_object)
{
	var_4_int = 0; var_5_int = 0; // 0x29 PushV
	var_5_int = 0; // 0x2a MovI
	
Label_43:
	var_6_int = 12; // 0x2b PushI
	var_7_bool = var_5_int < var_6_int; // 0x2c LT
	if(var_7_bool == 0) goto Label_57; // 0x2d JumpB
	var_8_string = "button_day"; // 0x2e PushS
	var_9_int = 1; // 0x2f PushI
	var_10_int = var_5_int + var_9_int; // 0x30 Add
	var_11_int = var_8_string + var_10_int; // 0x31 Add
	var_12_bool = var_2_string == var_11_int; // 0x32 Eq
	if(var_12_bool == 0) goto Label_54; // 0x33 JumpB
	var_0_int = var_5_int; // 0x34 TMov
	goto Label_57; // 0x35 Jump
	
Label_57:
	var_13_int = 0; // 0x39 PushV
	var_13_int = var_0_int; // 0x3a MovT
	func_62(var_13_int); // 0x3b NEW_2
	return 2; // 0x3d Return
	
Label_54:
	var_31_int = 1; // 0x36 PushI
	var_5_int = var_5_int + var_31_int; // 0x37 Add2
	goto Label_43; // 0x38 Jump
}


main(var_0_int)
{
	var_1_int = 0; // 0x0 PushV
	func_91(var_1_int); // 0x1 NEW_2
	var_7_int = 1; // 0x3 PushI
	var_0_int = var_1_int - var_7_int; // 0x4 Sub2
	var_8_bool = 0; // 0x5 PushV
	var_8_bool = 0; // 0x6 MovB
	var_9_int = 0; // 0x7 PushV
	func_100(var_9_int); // 0x8 NEW_2
	var_14_int = 7; // 0xa PushI
	var_15_bool = var_9_int < var_14_int; // 0xb LT
	if(var_15_bool == 0) goto Label_17; // 0xc JumpB
	var_16_int = 0; // 0xd PushI
	var_17_bool = var_0_int > var_16_int; // 0xe GT
	if(var_17_bool == 0) goto Label_17; // 0xf JumpB
	var_8_bool = 1; // 0x10 MovB
	
Label_17:
	if(var_8_bool == 0) goto Label_20; // 0x11 JumpB
	var_18_int = -1; // 0x12 PushI
	var_0_int = var_0_int + var_18_int; // 0x13 Add2
	
Label_20:
	var_19_string = "text"; // 0x14 PushS
	SendMessage(var_0_int, var_19_string); // 0x15 Func
	ShowCursor(); // 0x17 Func
	var_20_string = "default"; // 0x19 PushS
	SetCursor(var_20_string); // 0x1a Func
	var_21_int = 0; // 0x1c PushV
	var_21_int = var_0_int; // 0x1d MovT
	func_62(var_21_int); // 0x1e NEW_2
	CaptureKeyboard(); // 0x20 Func
	ProcessEvents(); // 0x22 Func
	return 0; // 0x24 Return
}


func_91(var_1_int)
{
	var_2_float = 0; var_3_float = 0; // 0x5b PushV
	GetGameTime(var_3_float); // 0x5c Func
	var_4_int = 1; // 0x5e PushI
	var_5_int = 0; // 0x5f PushV
	var_6_int = 24; // 0x60 PushI
	var_5_int = var_3_float / var_3_float; // 0x61 Div2
	var_1_int = var_4_int + var_5_int; // 0x62 Add2
	return 2; // 0x63 Return
}


func_100(var_9_int)
{
	var_10_float = 0; var_11_float = 0; // 0x64 PushV
	GetGameTime(var_11_float); // 0x65 Func
	var_12_int = 0; // 0x67 PushV
	var_12_int = var_11_float; // 0x68 Mov
	var_13_int = 24; // 0x69 PushI
	var_9_int = var_12_int % var_13_int; // 0x6a Mod2
	return 2; // 0x6b Return
}


func_62(var_21_int)
{
	var_22_int = 0; var_23_int = 0; // 0x3e PushV
	var_23_int = 0; // 0x3f MovI
	
Label_64:
	var_24_int = 12; // 0x40 PushI
	var_25_bool = var_23_int < var_24_int; // 0x41 LT
	if(var_25_bool == 0) goto Label_87; // 0x42 JumpB
	var_26_bool = var_23_int == var_21_int; // 0x43 Eq
	if(var_26_bool == 0) goto Label_77; // 0x44 JumpB
	var_27_int = 1; // 0x45 PushI
	var_28_string = "button_day"; // 0x46 PushS
	var_29_int = 1; // 0x47 PushI
	var_30_int = var_23_int + var_29_int; // 0x48 Add
	var_31_int = var_28_string + var_30_int; // 0x49 Add
	SendMessage(var_27_int, var_31_int); // 0x4a Func
	goto Label_84; // 0x4c Jump
	
Label_84:
	var_32_int = 1; // 0x54 PushI
	var_23_int = var_23_int + var_32_int; // 0x55 Add2
	goto Label_64; // 0x56 Jump
	
Label_77:
	var_33_int = 0; // 0x4d PushI
	var_34_string = "button_day"; // 0x4e PushS
	var_35_int = 1; // 0x4f PushI
	var_36_int = var_23_int + var_35_int; // 0x50 Add
	var_37_int = var_34_string + var_36_int; // 0x51 Add
	SendMessage(var_33_int, var_37_int); // 0x52 Func
	
Label_87:
	var_38_string = "text"; // 0x57 PushS
	SendMessage(var_21_int, var_38_string); // 0x58 Func
	return 2; // 0x5a Return
}


