task_0_event_2(var_0_bool, var_1_int, var_2_int)
{
	var_0_bool = !var_0_bool; // 0x10 Not2
	func_33(); // 0x12 NEW_2
	func_7(); // 0x15 NEW_2
	return 0; // 0x17 Return
}


task_0_event_3(var_0_bool, var_1_int, var_2_int)
{
	return 0; // 0x19 Return
}


task_0_event_200(var_0_bool, var_1_int, var_2_string, var_3_object)
{
	var_4_int = 0; // 0x1b PushI
	var_0_bool = var_1_int != var_4_int; // 0x1c Neq2
	func_33(); // 0x1e NEW_2
	return 0; // 0x20 Return
}


main(var_0_bool)
{
	var_0_bool = 0; // 0x0 TMovB
	var_1_string = "default"; // 0x1 PushS
	SetBackground(var_1_string); // 0x2 Func
	ProcessEvents(); // 0x4 Func
	return 0; // 0x6 Return
}


func_33()
{
	var_5_bool = var_0_bool; // 0x21 PushT
	if(var_5_bool == 0) goto Label_39; // 0x22 JumpB
	var_6_string = "checked"; // 0x23 PushS
	SetBackground(var_6_string); // 0x24 Func
	goto Label_42; // 0x26 Jump
	
Label_42:
	return 0; // 0x2a Return
	
Label_39:
	var_7_string = "default"; // 0x27 PushS
	SetBackground(var_7_string); // 0x28 Func
}


func_7()
{
	var_6_bool = var_0_bool; // 0x7 PushT
	if(var_6_bool == 0) goto Label_11; // 0x8 JumpB
	var_7_int = 1; // 0x9 PushI
	goto Label_12; // 0xa Jump
	
Label_12:
	SendMessageToParent(var_7_int); // 0xc Func
	return 0; // 0xe Return
	
Label_11:
	var_8_int = 0; // 0xb PushI
}


