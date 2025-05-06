task_0_event_201(var_0_int, var_1_float, var_2_int, var_3_int, var_4_int, var_5_object)
{
	var_6_int = 1000; // 0xf PushI
	var_7_bool = var_4_int == var_6_int; // 0x10 Eq
	if(var_7_bool == 0) goto Label_20; // 0x11 JumpB
	var_0_int = 109; // 0x12 TMovI
	var_1_float = 1.0; // 0x13 TMovF
	
Label_20:
	return 0; // 0x14 Return
}


task_0_event_1(var_0_int, var_1_float, var_2_int, var_3_int, var_4_float)
{
	var_5_float = 0; // 0x16 PushV
	var_5_float = var_4_float; // 0x17 Mov
	func_50(var_3_int, var_4_float, var_5_float); // 0x18 NEW_2
	return 0; // 0x1a Return
}


task_0_event_0(var_0_int, var_1_float, var_2_int, var_3_int)
{
	func_27(var_2_int, var_3_int); // 0x3e NEW_2
	return 0; // 0x40 Return
}


main(var_0_int, var_1_float, var_2_int, var_3_int)
{
	EventDisable(201); // 0x0 EventDisable
	GetWindowSize(var_2_int, var_1_float); // 0x1 Func
	var_0_int = -1; // 0x3 TMovI
	EventEnable(201); // 0x4 EventEnable
	var_4_bool = 1; // 0x5 PushB
	SetOwnerDraw(var_4_bool); // 0x6 Func
	var_5_bool = 1; // 0x8 PushB
	SetNeedUpdate(var_5_bool); // 0x9 Func
	ProcessEvents(); // 0xb Func
	return 0; // 0xd Return
}


func_50(var_0_int, var_1_float, var_5_float)
{
	var_6_int = -1; // 0x33 PushI
	var_7_bool = var_0_int == var_6_int; // 0x34 Eq
	if(var_7_bool == 0) goto Label_55; // 0x35 JumpB
	return 0; // 0x36 Return
	
Label_55:
	var_1_float = var_1_float - var_5_float; // 0x37 Sub2
	var_8_int = 0; // 0x38 PushI
	var_9_bool = var_1_float <= var_8_int; // 0x39 LE
	if(var_9_bool == 0) goto Label_60; // 0x3a JumpB
	var_0_int = -1; // 0x3b TMovI
	
Label_60:
	return 0; // 0x3c Return
}


func_27(var_0_int, var_1_float)
{
	var_4_string = ""; var_5_float = 0; var_6_string = ""; var_7_float = 0; // 0x1b PushV
	var_8_int = -1; // 0x1c PushI
	var_9_bool = var_0_int == var_8_int; // 0x1d Eq
	if(var_9_bool == 0) goto Label_32; // 0x1e JumpB
	return 4; // 0x1f Return
	
Label_32:
	GetStringByID(var_6_string, var_0_int); // 0x20 Func
	var_10_float = 3.14; // 0x22 PushF
	var_11_float = var_10_float * var_1_float; // 0x23 Mult
	var_12_float = 1.0; // 0x24 PushF
	var_13_float = var_11_float / var_12_float; // 0x25 Div
	var_14_float = 2.0; // 0x26 PushF
	var_15_float = var_13_float / var_14_float; // 0x27 Div
	var_7_float = sin(var_15_float); // 0x28 Sin2
	var_16_string = "help"; // 0x29 PushS
	var_17_int = 10; // 0x2a PushI
	var_18_int = 10; // 0x2b PushI
	var_19_float = 1.0; // 0x2c PushF
	var_20_float = 1.0; // 0x2d PushF
	var_21_float = 1.0; // 0x2e PushF
	Print(var_16_string, var_17_int, var_18_int, var_6_string, var_19_float, var_20_float, var_21_float, var_7_float); // 0x2f Func
	return 4; // 0x31 Return
}


