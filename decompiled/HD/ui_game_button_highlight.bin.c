task_0_event_2(var_0_string, var_1_int, var_2_int)
{
	var_3_string = "highlight"; // 0xb PushS
	SetBackground(var_3_string); // 0xc Func
	var_4_int = 0; // 0xe PushI
	SendMessageToParent(var_4_int); // 0xf Func
	return 0; // 0x11 Return
}


task_0_event_3(var_0_string, var_1_int, var_2_int)
{
	var_3_string = "default"; // 0x13 PushS
	SetBackground(var_3_string); // 0x14 Func
	return 0; // 0x16 Return
}


task_0_event_9(var_0_string)
{
	var_1_string = "highlight"; // 0x17 PushS
	SetBackground(var_1_string); // 0x18 Func
	return 0; // 0x1a Return
}


task_0_event_10(var_0_string)
{
	var_1_string = "default"; // 0x1b PushS
	SetBackground(var_1_string); // 0x1c Func
	return 0; // 0x1e Return
}


task_0_event_200(var_0_string, var_1_int, var_2_string, var_3_object)
{
	var_4_int = 1; // 0x20 PushI
	var_5_bool = var_1_int == var_4_int; // 0x21 Eq
	if(var_5_bool == 0) goto Label_39; // 0x22 JumpB
	var_6_string = "highlight"; // 0x23 PushS
	SetBackground(var_6_string); // 0x24 Func
	goto Label_55; // 0x26 Jump
	
Label_55:
	return 0; // 0x37 Return
	
Label_39:
	var_7_int = 0; // 0x27 PushI
	var_8_bool = var_1_int == var_7_int; // 0x28 Eq
	if(var_8_bool == 0) goto Label_46; // 0x29 JumpB
	var_9_string = "default"; // 0x2a PushS
	SetBackground(var_9_string); // 0x2b Func
	goto Label_55; // 0x2d Jump
	
Label_46:
	var_10_int = 2; // 0x2e PushI
	var_11_bool = var_1_int == var_10_int; // 0x2f Eq
	if(var_11_bool == 0) goto Label_55; // 0x30 JumpB
	var_12_string = "highlight"; // 0x31 PushS
	SetBackground(var_12_string); // 0x32 Func
	var_13_int = 0; // 0x34 PushI
	SendMessageToParent(var_13_int); // 0x35 Func
}


main(var_0_string)
{
	var_1_string = "default"; // 0x0 PushS
	SetBackground(var_1_string); // 0x1 Func
	ProcessEvents(); // 0x3 Func
	GetWindowName(var_0_string); // 0x5 Func
	Trace(var_0_string); // 0x7 Func
	return 0; // 0x9 Return
}


