task_0_event_1(var_0_string, var_1_int, var_2_int, var_3_float)
{
	var_4_string = ""; var_5_string = ""; // 0x17 PushV
	var_6_int = 0; // 0x18 PushV
	func_70(var_6_int); // 0x19 NEW_2
	var_11_string = " : "; // 0x1b PushS
	var_0_string = var_6_int + var_11_string; // 0x1c Add2
	var_12_int = 0; // 0x1d PushV
	func_78(var_12_int); // 0x1e NEW_2
	var_18_int = 10; // 0x20 PushI
	var_19_bool = var_12_int < var_18_int; // 0x21 LT
	if(var_19_bool == 0) goto Label_37; // 0x22 JumpB
	var_20_string = "0"; // 0x23 PushS
	var_0_string = var_0_string + var_20_string; // 0x24 Add2
	
Label_37:
	var_21_int = 0; // 0x25 PushV
	func_78(var_21_int); // 0x26 NEW_2
	var_0_string = var_0_string + var_21_int; // 0x28 Add2
	var_22_int = 4; // 0x29 PushI
	GetStringByID(var_5_string, var_22_int); // 0x2a Func
	var_23_string = " "; // 0x2c PushS
	var_24_int = var_23_string + var_5_string; // 0x2d Add
	var_25_string = " "; // 0x2e PushS
	var_26_int = var_24_int + var_25_string; // 0x2f Add
	var_27_int = 0; // 0x30 PushV
	func_61(var_27_int); // 0x31 NEW_2
	var_33_int = var_26_int + var_27_int; // 0x33 Add
	var_0_string = var_0_string + var_33_int; // 0x34 Add2
	return 2; // 0x35 Return
}


task_0_event_0(var_0_string, var_1_int, var_2_int)
{
	var_3_string = "default"; // 0x36 PushS
	var_4_float = 1.0; // 0x37 PushF
	var_5_float = 1.0; // 0x38 PushF
	var_6_float = 1.0; // 0x39 PushF
	Print(var_3_string, var_6_float, var_5_float, var_0_string, var_4_float, var_5_float, var_6_float); // 0x3a Func
	return 0; // 0x3c Return
}


main(var_0_string, var_1_int, var_2_int)
{
	var_3_int = 0; var_4_int = 0; var_5_int = 0; var_6_int = 0; var_7_int = 0; var_8_int = 0; // 0x0 PushV
	GetWindowSize(var_6_int, var_7_int); // 0x1 Func
	var_1_int = 20; // 0x3 TMovI
	var_9_string = "default"; // 0x4 PushS
	GetFontHeight(var_8_int, var_9_string); // 0x5 Func
	var_10_int = var_7_int - var_8_int; // 0x7 Sub
	var_11_int = 2; // 0x8 PushI
	var_2_int = var_10_int / var_10_int; // 0x9 Div2
	var_12_int = 0; // 0xa PushI
	var_13_bool = var_2_int < var_12_int; // 0xb LT
	if(var_13_bool == 0) goto Label_14; // 0xc JumpB
	var_2_int = 0; // 0xd TMovI
	
Label_14:
	var_14_bool = 1; // 0xe PushB
	SetNeedUpdate(var_14_bool); // 0xf Func
	var_15_bool = 1; // 0x11 PushB
	SetOwnerDraw(var_15_bool); // 0x12 Func
	ProcessEvents(); // 0x14 Func
	return 6; // 0x16 Return
}


func_78(var_12_int)
{
	var_13_float = 0; var_14_float = 0; // 0x4e PushV
	GetGameTime(var_14_float); // 0x4f Func
	var_15_int = 0; // 0x51 PushV
	var_15_int = var_14_float; // 0x52 Mov
	var_16_int = var_14_float - var_15_int; // 0x53 Sub
	var_17_int = 60; // 0x54 PushI
	var_12_int = var_16_int * var_17_int; // 0x55 Mult2
	return 2; // 0x56 Return
}


func_61(var_27_int)
{
	var_28_float = 0; var_29_float = 0; // 0x3d PushV
	GetGameTime(var_29_float); // 0x3e Func
	var_30_int = 1; // 0x40 PushI
	var_31_int = 0; // 0x41 PushV
	var_32_int = 24; // 0x42 PushI
	var_31_int = var_29_float / var_29_float; // 0x43 Div2
	var_27_int = var_30_int + var_31_int; // 0x44 Add2
	return 2; // 0x45 Return
}


func_70(var_6_int)
{
	var_7_float = 0; var_8_float = 0; // 0x46 PushV
	GetGameTime(var_8_float); // 0x47 Func
	var_9_int = 0; // 0x49 PushV
	var_9_int = var_8_float; // 0x4a Mov
	var_10_int = 24; // 0x4b PushI
	var_6_int = var_9_int % var_10_int; // 0x4c Mod2
	return 2; // 0x4d Return
}


