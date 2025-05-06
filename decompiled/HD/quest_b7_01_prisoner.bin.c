task_0_event_26(var_0_bool, var_1_string)
{
	var_2_bool = 0; var_3_bool = 0; // 0x10 PushV
	var_4_string = "cleanup"; // 0x11 PushS
	var_5_bool = var_1_string == var_4_string; // 0x12 Eq
	if(var_5_bool == 0) goto Label_38; // 0x13 JumpB
	var_0_bool = 1; // 0x14 TMovB
	IsLoaded(var_3_bool); // 0x15 Func
	var_6_bool = 0; // 0x17 PushV
	var_6_bool = 0; // 0x18 MovB
	var_7_bool = var_3_bool == 0; // 0x19 Not
	if(var_7_bool == 0) goto Label_32; // 0x1a JumpB
	var_8_bool = 0; // 0x1b PushV
	func_60(var_8_bool); // 0x1c NEW_2
	if(var_8_bool == 0) goto Label_32; // 0x1e JumpB
	var_6_bool = 1; // 0x1f MovB
	
Label_32:
	if(var_6_bool == 0) goto Label_38; // 0x20 JumpB
	var_9_object = Obj(); // 0x21 PushV
	func_67(var_9_object); // 0x22 NEW_2
	RemoveActor(var_9_object); // 0x24 Func
	
Label_38:
	return 2; // 0x26 Return
}


task_0_event_5(var_0_bool)
{
	StopGroup0(); // 0x27 Func
	sync(); // 0x29 Func
	return 0; // 0x2b Return
}


task_0_event_6(var_0_bool)
{
	var_1_bool = 0; // 0x2c PushV
	var_1_bool = 0; // 0x2d MovB
	var_2_bool = var_0_bool; // 0x2e PushT
	if(var_2_bool == 0) goto Label_53; // 0x2f JumpB
	var_3_bool = 0; // 0x30 PushV
	func_60(var_3_bool); // 0x31 NEW_2
	if(var_3_bool == 0) goto Label_53; // 0x33 JumpB
	var_1_bool = 1; // 0x34 MovB
	
Label_53:
	if(var_1_bool == 0) goto Label_59; // 0x35 JumpB
	var_4_object = Obj(); // 0x36 PushV
	func_67(var_4_object); // 0x37 NEW_2
	RemoveActor(var_4_object); // 0x39 Func
	
Label_59:
	return 0; // 0x3b Return
}


main(var_0_bool)
{
	
Label_0:
	var_1_bool = 0; // 0x0 PushV
	func_62(var_1_bool); // 0x1 NEW_2
	var_4_bool = var_1_bool == 0; // 0x3 Not
	if(var_4_bool == 0) goto Label_8; // 0x4 JumpB
	Hold(); // 0x5 Func
	goto Label_0; // 0x7 Jump
	
Label_8:
	var_5_string = "all"; // 0x8 PushS
	var_6_string = "prisoner"; // 0x9 PushS
	PlayAnimation(var_5_string, var_6_string); // 0xa Func
	WaitForAnimEnd(); // 0xc Func
	goto Label_0; // 0xe Jump
}


func_67(var_4_object)
{
	var_5_object = Obj(); var_6_object = Obj(); // 0x43 PushV
	self(var_6_object); // 0x44 Func
	var_4_object = var_6_object; // 0x46 Mov
	return 2; // 0x47 Return
}


func_60(var_3_bool)
{
	var_3_bool = 1; // 0x3c MovB
	return 0; // 0x3d Return
}


func_62(var_1_bool)
{
	var_2_bool = 0; var_3_bool = 0; // 0x3e PushV
	IsLoaded(var_3_bool); // 0x3f Func
	var_1_bool = var_3_bool; // 0x41 Mov
	return 2; // 0x42 Return
}


