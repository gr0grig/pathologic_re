task_0_event_2(var_0_int, var_1_int)
{
	var_2_string = "pressed"; // 0xa PushS
	SetBackground(var_2_string); // 0xb Func
	var_3_int = 0; // 0xd PushI
	SendMessageToParent(var_3_int); // 0xe Func
	return 0; // 0x10 Return
}


task_0_event_3(var_0_int, var_1_int)
{
	var_2_string = "default"; // 0x12 PushS
	SetBackground(var_2_string); // 0x13 Func
	return 0; // 0x15 Return
}


task_0_event_10()
{
	var_0_string = "default"; // 0x16 PushS
	SetBackground(var_0_string); // 0x17 Func
	return 0; // 0x19 Return
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


