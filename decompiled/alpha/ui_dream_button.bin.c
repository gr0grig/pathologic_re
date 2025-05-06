task_0_event_2(var_0_bool, var_1_int, var_2_int)
{
	var_3_string = "pressed"; // 0xb PushS
	SetBackground(var_3_string); // 0xc Func
	var_4_int = 0; // 0xe PushI
	SendMessageToParent(var_4_int); // 0xf Func
	return 0; // 0x11 Return
}


task_0_event_3(var_0_bool, var_1_int, var_2_int)
{
	var_3_string = "default"; // 0x13 PushS
	SetBackground(var_3_string); // 0x14 Func
	var_0_bool = !var_0_bool; // 0x16 Not2
	return 0; // 0x17 Return
}


task_0_event_0(var_0_bool)
{
	var_1_bool = var_0_bool == 0; // 0x18 Not
	if(var_1_bool == 0) goto Label_32; // 0x19 JumpB
	var_2_string = "start"; // 0x1a PushS
	var_3_int = 0; // 0x1b PushI
	var_4_int = 0; // 0x1c PushI
	Blit(var_2_string, var_3_int, var_4_int); // 0x1d Func
	goto Label_37; // 0x1f Jump
	
Label_37:
	return 0; // 0x25 Return
	
Label_32:
	var_5_string = "stop"; // 0x20 PushS
	var_6_int = 0; // 0x21 PushI
	var_7_int = 0; // 0x22 PushI
	Blit(var_5_string, var_6_int, var_7_int); // 0x23 Func
}


main(var_0_bool)
{
	var_0_bool = 0; // 0x0 TMovB
	var_1_string = "default"; // 0x1 PushS
	SetBackground(var_1_string); // 0x2 Func
	var_2_bool = 1; // 0x4 PushB
	SetOwnerDraw(var_2_bool); // 0x5 Func
	ProcessEvents(); // 0x7 Func
	return 0; // 0x9 Return
}


