task_0_event_200(var_0_int, var_1_string, var_2_object)
{
	var_3_int = -4; // 0x1c PushI
	var_4_bool = var_0_int == var_3_int; // 0x1d Eq
	if(var_4_bool == 0) goto Label_35; // 0x1e JumpB
	func_9(); // 0x20 NEW_2
	return 0; // 0x22 Return
	
Label_35:
	return 0; // 0x23 Return
}


task_0_event_2(var_0_int, var_1_int)
{
	var_2_string = "pressed"; // 0x25 PushS
	SetBackground(var_2_string); // 0x26 Func
	var_3_int = 0; // 0x28 PushI
	SendMessageToParent(var_3_int); // 0x29 Func
	return 0; // 0x2b Return
}


task_0_event_3(var_0_int, var_1_int)
{
	var_2_string = "default"; // 0x2d PushS
	SetBackground(var_2_string); // 0x2e Func
	return 0; // 0x30 Return
}


task_0_event_10()
{
	var_0_string = "default"; // 0x31 PushS
	SetBackground(var_0_string); // 0x32 Func
	return 0; // 0x34 Return
}


main()
{
	var_0_string = "default"; // 0x0 PushS
	SetBackground(var_0_string); // 0x1 Func
	var_1_bool = 0; // 0x3 PushB
	SetOwnerDraw(var_1_bool); // 0x4 Func
	ProcessEvents(); // 0x6 Func
	return 0; // 0x8 Return
}


func_9()
{
	var_5_int = 0; var_6_int = 0; var_7_int = 0; var_8_int = 0; var_9_int = 0; var_10_int = 0; var_11_int = 0; var_12_int = 0; // 0x9 PushV
	var_9_int = 0; // 0xa MovI
	var_10_int = 0; // 0xb MovI
	var_11_int = 0; // 0xc MovI
	var_12_int = 0; // 0xd MovI
	ClientToScreen(var_9_int, var_10_int); // 0xe Func
	GetWindowSize(var_11_int, var_12_int); // 0x10 Func
	var_13_int = 2; // 0x12 PushI
	var_14_float = var_11_int / var_13_int; // 0x13 Div
	var_15_int = var_9_int + var_14_float; // 0x14 Add
	var_16_int = 2; // 0x15 PushI
	var_17_float = var_12_int / var_16_int; // 0x16 Div
	var_18_int = var_10_int + var_17_float; // 0x17 Add
	SetMousePos(var_15_int, var_18_int); // 0x18 Func
	return 8; // 0x1a Return
}


