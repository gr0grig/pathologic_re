task_0_event_2(var_0_bool, var_1_bool, var_2_int, var_3_int)
{
	var_4_bool = var_0_bool; // 0x7 PushT
	if(var_4_bool == 0) goto Label_11; // 0x8 JumpB
	var_5_int = 1; // 0x9 PushI
	goto Label_12; // 0xa Jump
	
Label_12:
	SendMessageToParent(var_5_int); // 0xc Func
	return 0; // 0xe Return
	
Label_11:
	var_6_int = 0; // 0xb PushI
}


task_0_event_200(var_0_bool, var_1_bool, var_2_int, var_3_string, var_4_object)
{
	var_5_string = "map"; // 0x10 PushS
	var_6_bool = var_3_string == var_5_string; // 0x11 Eq
	if(var_6_bool == 0) goto Label_30; // 0x12 JumpB
	var_7_int = 0; // 0x13 PushI
	var_0_bool = var_2_int != var_7_int; // 0x14 Neq2
	var_8_bool = var_1_bool; // 0x15 PushT
	if(var_8_bool == 0) goto Label_27; // 0x16 JumpB
	func_41(); // 0x18 NEW_2
	goto Label_30; // 0x1a Jump
	
Label_30:
	return 0; // 0x1e Return
	
Label_27:
	func_51(); // 0x1c NEW_2
}


task_0_event_9(var_0_bool, var_1_bool)
{
	func_41(); // 0x20 NEW_2
	var_1_bool = 1; // 0x22 TMovB
	return 0; // 0x23 Return
}


task_0_event_10(var_0_bool, var_1_bool)
{
	func_51(); // 0x25 NEW_2
	var_1_bool = 0; // 0x27 TMovB
	return 0; // 0x28 Return
}


main(var_0_bool, var_1_bool)
{
	func_51(); // 0x1 NEW_2
	ProcessEvents(); // 0x3 Func
	return 0; // 0x5 Return
}


func_41()
{
	var_2_bool = var_0_bool; // 0x29 PushT
	if(var_2_bool == 0) goto Label_47; // 0x2a JumpB
	var_3_string = "to_map_h"; // 0x2b PushS
	SetBackground(var_3_string); // 0x2c Func
	goto Label_50; // 0x2e Jump
	
Label_50:
	return 0; // 0x32 Return
	
Label_47:
	var_4_string = "to_quest_h"; // 0x2f PushS
	SetBackground(var_4_string); // 0x30 Func
}


func_51()
{
	var_2_bool = var_0_bool; // 0x33 PushT
	if(var_2_bool == 0) goto Label_57; // 0x34 JumpB
	var_3_string = "to_map"; // 0x35 PushS
	SetBackground(var_3_string); // 0x36 Func
	goto Label_60; // 0x38 Jump
	
Label_60:
	return 0; // 0x3c Return
	
Label_57:
	var_4_string = "to_quest"; // 0x39 PushS
	SetBackground(var_4_string); // 0x3a Func
}


