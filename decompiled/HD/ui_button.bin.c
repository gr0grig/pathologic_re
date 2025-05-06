task_0_event_0()
{
	var_0_string = "text"; // 0x9 PushS
	var_1_int = 0; // 0xa PushI
	var_2_int = 0; // 0xb PushI
	Blit(var_0_string, var_1_int, var_2_int); // 0xc Func
	return 0; // 0xe Return
}


task_0_event_2(var_0_int, var_1_int)
{
	var_2_string = "pressed"; // 0x10 PushS
	SetBackground(var_2_string); // 0x11 Func
	var_3_int = 0; // 0x13 PushI
	SendMessageToParent(var_3_int); // 0x14 Func
	return 0; // 0x16 Return
}


task_0_event_3(var_0_int, var_1_int)
{
	var_2_string = "default"; // 0x18 PushS
	SetBackground(var_2_string); // 0x19 Func
	return 0; // 0x1b Return
}


task_0_event_10()
{
	var_0_string = "default"; // 0x1c PushS
	SetBackground(var_0_string); // 0x1d Func
	return 0; // 0x1f Return
}


main()
{
	var_0_string = "default"; // 0x0 PushS
	SetBackground(var_0_string); // 0x1 Func
	var_1_bool = 1; // 0x3 PushB
	SetOwnerDraw(var_1_bool); // 0x4 Func
	ProcessEvents(); // 0x6 Func
	return 0; // 0x8 Return
}


