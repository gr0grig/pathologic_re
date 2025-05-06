task_0_event_26(var_0_bool, var_1_string)
{
	var_2_string = "remove"; // 0x6 PushS
	var_3_bool = var_1_string == var_2_string; // 0x7 Eq
	if(var_3_bool == 0) goto Label_10; // 0x8 JumpB
	var_0_bool = 1; // 0x9 TMovB
	
Label_10:
	return 0; // 0xa Return
}


task_0_event_6(var_0_bool)
{
	var_1_bool = var_0_bool; // 0xb PushT
	if(var_1_bool == 0) goto Label_18; // 0xc JumpB
	var_2_object = Obj(); // 0xd PushV
	func_19(var_2_object); // 0xe NEW_2
	RemoveActor(var_2_object); // 0x10 Func
	
Label_18:
	return 0; // 0x12 Return
}


main(var_0_bool)
{
	PlayAnimation(); // 0x0 Func
	Hold(); // 0x2 Func
	return 0; // 0x4 Return
}


func_19(var_2_object)
{
	var_3_object = Obj(); var_4_object = Obj(); // 0x13 PushV
	self(var_4_object); // 0x14 Func
	var_2_object = var_4_object; // 0x16 Mov
	return 2; // 0x17 Return
}


