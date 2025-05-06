task_0_event_26(var_0_bool, var_1_string)
{
	var_2_string = "remove"; // 0xd PushS
	var_3_bool = var_1_string == var_2_string; // 0xe Eq
	if(var_3_bool == 0) goto Label_17; // 0xf JumpB
	var_0_bool = 1; // 0x10 TMovB
	
Label_17:
	return 0; // 0x11 Return
}


task_0_event_6(var_0_bool)
{
	var_1_bool = var_0_bool; // 0x12 PushT
	if(var_1_bool == 0) goto Label_25; // 0x13 JumpB
	var_2_object = Obj(); // 0x14 PushV
	func_26(var_2_object); // 0x15 NEW_2
	RemoveActor(var_2_object); // 0x17 Func
	
Label_25:
	return 0; // 0x19 Return
}


main(var_0_bool)
{
	PlayAnimation(); // 0x0 Func
	
Label_2:
	var_1_bool = 1; // 0x2 PushB
	if(var_1_bool == 0) goto Label_9; // 0x3 JumpB
	lshPlayAnimation(); // 0x4 Func
	lshWaitForAnimEnd(); // 0x6 Func
	goto Label_2; // 0x8 Jump
	
Label_9:
	Hold(); // 0x9 Func
	return 0; // 0xb Return
}


func_26(var_2_object)
{
	var_3_object = Obj(); var_4_object = Obj(); // 0x1a PushV
	self(var_4_object); // 0x1b Func
	var_2_object = var_4_object; // 0x1d Mov
	return 2; // 0x1e Return
}


