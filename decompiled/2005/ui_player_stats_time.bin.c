task_0_event_0(var_0_string, var_1_int, var_2_int)
{
	var_3_string = "default"; // 0x32 PushS
	var_4_float = 1.0; // 0x33 PushF
	var_5_float = 1.0; // 0x34 PushF
	var_6_float = 1.0; // 0x35 PushF
	Print(var_3_string, var_6_float, var_5_float, var_0_string, var_4_float, var_5_float, var_6_float); // 0x36 Func
	return 0; // 0x38 Return
}


main(var_0_string, var_1_int, var_2_int)
{
	var_3_string = ""; var_4_int = 0; var_5_int = 0; var_6_int = 0; var_7_string = ""; var_8_int = 0; var_9_int = 0; var_10_int = 0; // 0x0 PushV
	var_11_int = 0; // 0x1 PushV
	func_66(var_11_int); // 0x2 NEW_2
	var_16_string = " : "; // 0x4 PushS
	var_17_int = var_11_int + var_16_string; // 0x5 Add
	var_0_string = var_0_string + var_17_int; // 0x6 Add2
	var_18_int = 0; // 0x7 PushV
	func_74(var_18_int); // 0x8 NEW_2
	var_24_int = 10; // 0xa PushI
	var_25_bool = var_18_int < var_24_int; // 0xb LT
	if(var_25_bool == 0) goto Label_15; // 0xc JumpB
	var_26_string = "0"; // 0xd PushS
	var_0_string = var_0_string + var_26_string; // 0xe Add2
	
Label_15:
	var_27_int = 0; // 0xf PushV
	func_74(var_27_int); // 0x10 NEW_2
	var_0_string = var_0_string + var_27_int; // 0x12 Add2
	var_28_int = 4; // 0x13 PushI
	GetStringByID(var_7_string, var_28_int); // 0x14 Func
	var_29_string = " "; // 0x16 PushS
	var_30_int = var_29_string + var_7_string; // 0x17 Add
	var_31_string = " "; // 0x18 PushS
	var_32_int = var_30_int + var_31_string; // 0x19 Add
	var_33_int = 0; // 0x1a PushV
	func_57(var_33_int); // 0x1b NEW_2
	var_39_int = var_32_int + var_33_int; // 0x1d Add
	var_0_string = var_0_string + var_39_int; // 0x1e Add2
	GetWindowSize(var_8_int, var_9_int); // 0x1f Func
	var_1_int = 20; // 0x21 TMovI
	var_40_string = "default"; // 0x22 PushS
	GetFontHeight(var_10_int, var_40_string); // 0x23 Func
	var_41_int = var_9_int - var_10_int; // 0x25 Sub
	var_42_int = 2; // 0x26 PushI
	var_2_int = var_41_int / var_41_int; // 0x27 Div2
	var_43_int = 0; // 0x28 PushI
	var_44_bool = var_2_int < var_43_int; // 0x29 LT
	if(var_44_bool == 0) goto Label_44; // 0x2a JumpB
	var_2_int = 0; // 0x2b TMovI
	
Label_44:
	var_45_bool = 1; // 0x2c PushB
	SetOwnerDraw(var_45_bool); // 0x2d Func
	ProcessEvents(); // 0x2f Func
	return 8; // 0x31 Return
}


func_57(var_33_int)
{
	var_34_float = 0; var_35_float = 0; // 0x39 PushV
	GetGameTime(var_35_float); // 0x3a Func
	var_36_int = 1; // 0x3c PushI
	var_37_int = 0; // 0x3d PushV
	var_38_int = 24; // 0x3e PushI
	var_37_int = var_35_float / var_35_float; // 0x3f Div2
	var_33_int = var_36_int + var_37_int; // 0x40 Add2
	return 2; // 0x41 Return
}


func_66(var_11_int)
{
	var_12_float = 0; var_13_float = 0; // 0x42 PushV
	GetGameTime(var_13_float); // 0x43 Func
	var_14_int = 0; // 0x45 PushV
	var_14_int = var_13_float; // 0x46 Mov
	var_15_int = 24; // 0x47 PushI
	var_11_int = var_14_int % var_15_int; // 0x48 Mod2
	return 2; // 0x49 Return
}


func_74(var_18_int)
{
	var_19_float = 0; var_20_float = 0; // 0x4a PushV
	GetGameTime(var_20_float); // 0x4b Func
	var_21_int = 0; // 0x4d PushV
	var_21_int = var_20_float; // 0x4e Mov
	var_22_int = var_20_float - var_21_int; // 0x4f Sub
	var_23_int = 60; // 0x50 PushI
	var_18_int = var_22_int * var_23_int; // 0x51 Mult2
	return 2; // 0x52 Return
}


