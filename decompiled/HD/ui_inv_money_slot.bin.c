task_0_event_0(var_0_int)
{
	var_1_string = "money"; // 0xa PushS
	var_2_int = 1; // 0xb PushI
	var_3_int = 1; // 0xc PushI
	Blit(var_1_string, var_2_int, var_3_int); // 0xd Func
	var_4_string = "default"; // 0xf PushS
	var_5_int = 2; // 0x10 PushI
	var_6_int = 35; // 0x11 PushI
	Print(var_4_string, var_5_int, var_6_int, var_0_int); // 0x12 Func
	return 0; // 0x14 Return
}


task_0_event_2(var_0_int, var_1_int, var_2_int)
{
	var_3_string = "selected"; // 0x16 PushS
	SetBackground(var_3_string); // 0x17 Func
	var_4_int = 0; // 0x19 PushI
	SendMessageToParent(var_4_int); // 0x1a Func
	return 0; // 0x1c Return
}


task_0_event_6(var_0_int, var_1_int, var_2_int)
{
	var_3_int = 1; // 0x1e PushI
	SendMessageToParent(var_3_int); // 0x1f Func
	return 0; // 0x21 Return
}


task_0_event_3(var_0_int, var_1_int, var_2_int)
{
	return 0; // 0x23 Return
}


task_0_event_200(var_0_int, var_1_int, var_2_string, var_3_object)
{
	var_0_int = var_1_int; // 0x25 TMov
	return 0; // 0x26 Return
}


main(var_0_int)
{
	var_0_int = 0; // 0x0 TMovI
	var_1_string = "default"; // 0x1 PushS
	SetBackground(var_1_string); // 0x2 Func
	var_2_bool = 1; // 0x4 PushB
	SetOwnerDraw(var_2_bool); // 0x5 Func
	ProcessEvents(); // 0x7 Func
	return 0; // 0x9 Return
}


