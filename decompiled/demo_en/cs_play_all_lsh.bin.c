task_0_event_26(var_0_bool, var_1_string)
{
	var_2_string = "remove"; // 0x8 PushS
	var_3_bool = var_1_string == var_2_string; // 0x9 Eq
	if(var_3_bool == 0) goto Label_12; // 0xa JumpB
	var_0_bool = 1; // 0xb TMovB
	
Label_12:
	return 0; // 0xc Return
}


task_0_event_6(var_0_bool)
{
	var_1_bool = var_0_bool; // 0xd PushT
	if(var_1_bool == 0) goto Label_20; // 0xe JumpB
	var_2_object = Obj(); // 0xf PushV
	func_21(var_2_object); // 0x10 NEW_2
	RemoveActor(var_2_object); // 0x12 Func
	
Label_20:
	return 0; // 0x14 Return
}


main(var_0_bool)
{
	PlayAnimation(); // 0x0 Func
	lshPlayAnimation(); // 0x2 Func
	Hold(); // 0x4 Func
	return 0; // 0x6 Return
}


func_21(var_2_object)
{
	var_3_object = Obj(); var_4_object = Obj(); // 0x15 PushV
	self(var_4_object); // 0x16 Func
	var_2_object = var_4_object; // 0x18 Mov
	return 2; // 0x19 Return
}


