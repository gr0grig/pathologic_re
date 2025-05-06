task_0_event_0(var_0_string, var_1_int, var_2_int)
{
	var_3_string = ""; var_4_int = 0; var_5_int = 0; var_6_int = 0; var_7_int = 0; var_8_string = ""; var_9_int = 0; var_10_int = 0; var_11_int = 0; var_12_int = 0; // 0x9 PushV
	var_13_int = 0; // 0xa PushV
	func_69(var_13_int); // 0xb NEW_2
	var_18_string = " : "; // 0xd PushS
	var_0_string = var_13_int + var_18_string; // 0xe Add2
	var_19_int = 0; // 0xf PushV
	func_77(var_19_int); // 0x10 NEW_2
	var_25_int = 10; // 0x12 PushI
	var_26_bool = var_19_int < var_25_int; // 0x13 LT
	if(var_26_bool == 0) goto Label_23; // 0x14 JumpB
	var_27_string = "0"; // 0x15 PushS
	var_0_string = var_0_string + var_27_string; // 0x16 Add2
	
Label_23:
	var_28_int = 0; // 0x17 PushV
	func_77(var_28_int); // 0x18 NEW_2
	var_0_string = var_0_string + var_28_int; // 0x1a Add2
	var_29_int = 4; // 0x1b PushI
	GetStringByID(var_8_string, var_29_int); // 0x1c Func
	var_30_string = ", "; // 0x1e PushS
	var_31_int = var_30_string + var_8_string; // 0x1f Add
	var_32_string = " "; // 0x20 PushS
	var_33_int = var_31_int + var_32_string; // 0x21 Add
	var_34_int = 0; // 0x22 PushV
	func_60(var_34_int); // 0x23 NEW_2
	var_40_int = var_33_int + var_34_int; // 0x25 Add
	var_0_string = var_0_string + var_40_int; // 0x26 Add2
	GetWindowSize(var_9_int, var_10_int); // 0x27 Func
	var_41_string = "default"; // 0x29 PushS
	GetFontHeight(var_11_int, var_41_string); // 0x2a Func
	var_42_int = var_10_int - var_11_int; // 0x2c Sub
	var_43_int = 2; // 0x2d PushI
	var_2_int = var_42_int / var_42_int; // 0x2e Div2
	var_44_string = "default"; // 0x2f PushS
	GetTextWidth(var_12_int, var_44_string, var_0_string); // 0x30 Func
	var_45_int = var_9_int - var_12_int; // 0x32 Sub
	var_46_int = 2; // 0x33 PushI
	var_1_int = var_45_int / var_45_int; // 0x34 Div2
	var_47_string = "default"; // 0x35 PushS
	var_48_float = 1.0; // 0x36 PushF
	var_49_float = 1.0; // 0x37 PushF
	var_50_float = 1.0; // 0x38 PushF
	Print(var_47_string, var_50_float, var_49_float, var_0_string, var_48_float, var_49_float, var_50_float); // 0x39 Func
	return 10; // 0x3b Return
}


main(var_0_string, var_1_int, var_2_int)
{
	var_3_string = "default"; // 0x0 PushS
	SetBackground(var_3_string); // 0x1 Func
	var_4_bool = 1; // 0x3 PushB
	SetOwnerDraw(var_4_bool); // 0x4 Func
	ProcessEvents(); // 0x6 Func
	return 0; // 0x8 Return
}


func_77(var_19_int)
{
	var_20_float = 0; var_21_float = 0; // 0x4d PushV
	GetGameTime(var_21_float); // 0x4e Func
	var_22_int = 0; // 0x50 PushV
	var_22_int = var_21_float; // 0x51 Mov
	var_23_int = var_21_float - var_22_int; // 0x52 Sub
	var_24_int = 60; // 0x53 PushI
	var_19_int = var_23_int * var_24_int; // 0x54 Mult2
	return 2; // 0x55 Return
}


func_69(var_13_int)
{
	var_14_float = 0; var_15_float = 0; // 0x45 PushV
	GetGameTime(var_15_float); // 0x46 Func
	var_16_int = 0; // 0x48 PushV
	var_16_int = var_15_float; // 0x49 Mov
	var_17_int = 24; // 0x4a PushI
	var_13_int = var_16_int % var_17_int; // 0x4b Mod2
	return 2; // 0x4c Return
}


func_60(var_34_int)
{
	var_35_float = 0; var_36_float = 0; // 0x3c PushV
	GetGameTime(var_36_float); // 0x3d Func
	var_37_int = 1; // 0x3f PushI
	var_38_int = 0; // 0x40 PushV
	var_39_int = 24; // 0x41 PushI
	var_38_int = var_36_float / var_36_float; // 0x42 Div2
	var_34_int = var_37_int + var_38_int; // 0x43 Add2
	return 2; // 0x44 Return
}


