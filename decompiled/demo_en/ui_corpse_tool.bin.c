task_0_event_2(var_0_bool, var_1_int, var_2_int)
{
	var_3_bool = var_0_bool; // 0xb PushT
	if(var_3_bool == 0) goto Label_19; // 0xc JumpB
	var_4_int = 0; // 0xd PushI
	SendMessageToParent(var_4_int); // 0xe Func
	var_5_string = "pressed"; // 0x10 PushS
	SetBackground(var_5_string); // 0x11 Func
	
Label_19:
	return 0; // 0x13 Return
}


task_0_event_3(var_0_bool, var_1_int, var_2_int)
{
	var_3_bool = var_0_bool; // 0x15 PushT
	if(var_3_bool == 0) goto Label_27; // 0x16 JumpB
	var_4_string = "default"; // 0x17 PushS
	SetBackground(var_4_string); // 0x18 Func
	goto Label_30; // 0x1a Jump
	
Label_30:
	return 0; // 0x1e Return
	
Label_27:
	var_5_string = "disabled"; // 0x1b PushS
	SetBackground(var_5_string); // 0x1c Func
}


task_0_event_10(var_0_bool)
{
	var_1_bool = var_0_bool; // 0x1f PushT
	if(var_1_bool == 0) goto Label_37; // 0x20 JumpB
	var_2_string = "default"; // 0x21 PushS
	SetBackground(var_2_string); // 0x22 Func
	goto Label_40; // 0x24 Jump
	
Label_40:
	return 0; // 0x28 Return
	
Label_37:
	var_3_string = "disabled"; // 0x25 PushS
	SetBackground(var_3_string); // 0x26 Func
}


task_0_event_200(var_0_bool, var_1_int, var_2_string, var_3_object)
{
	var_4_int = 0; // 0x2a PushI
	var_5_bool = var_1_int > var_4_int; // 0x2b GT
	if(var_5_bool == 0) goto Label_50; // 0x2c JumpB
	var_0_bool = 1; // 0x2d TMovB
	var_6_string = "default"; // 0x2e PushS
	SetBackground(var_6_string); // 0x2f Func
	goto Label_54; // 0x31 Jump
	
Label_54:
	return 0; // 0x36 Return
	
Label_50:
	var_0_bool = 0; // 0x32 TMovB
	var_7_string = "disabled"; // 0x33 PushS
	SetBackground(var_7_string); // 0x34 Func
}


main(var_0_bool)
{
	var_0_bool = 0; // 0x0 TMovB
	var_1_string = "disabled"; // 0x1 PushS
	SetBackground(var_1_string); // 0x2 Func
	var_2_bool = 0; // 0x4 PushB
	SetOwnerDraw(var_2_bool); // 0x5 Func
	ProcessEvents(); // 0x7 Func
	return 0; // 0x9 Return
}


