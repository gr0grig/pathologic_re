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
	return 0; // 0x18 Return
}


task_0_event_200(var_0_int, var_1_string, var_2_object)
{
	var_3_int = 0; // 0x1a PushI
	var_4_bool = var_0_int == var_3_int; // 0x1b Eq
	if(var_4_bool == 0) goto Label_33; // 0x1c JumpB
	var_5_string = "default"; // 0x1d PushS
	SetBackground(var_5_string); // 0x1e Func
	goto Label_36; // 0x20 Jump
	
Label_36:
	return 0; // 0x24 Return
	
Label_33:
	var_6_string = "pressed"; // 0x21 PushS
	SetBackground(var_6_string); // 0x22 Func
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


