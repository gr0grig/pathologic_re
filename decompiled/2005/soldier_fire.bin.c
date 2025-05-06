main()
{
	var_0_bool = 0; var_1_bool = 0; // 0x0 PushV
	IsLoaded(var_1_bool); // 0x1 Func
	var_2_bool = var_1_bool; // 0x3 Push
	if(var_2_bool == 0) goto Label_10; // 0x4 JumpB
	sync(); // 0x5 Func
	sync(); // 0x7 Func
	goto Label_13; // 0x9 Jump
	
Label_13:
	var_3_object = Obj(); // 0xd PushV
	func_19(var_3_object); // 0xe NEW_2
	RemoveActor(var_3_object); // 0x10 Func
	return 2; // 0x12 Return
	
Label_10:
	var_6_string = "Unloaded dynamic light"; // 0xa PushS
	Trace(var_6_string); // 0xb Func
}


func_19(var_3_object)
{
	var_4_object = Obj(); var_5_object = Obj(); // 0x13 PushV
	self(var_5_object); // 0x14 Func
	var_3_object = var_5_object; // 0x16 Mov
	return 2; // 0x17 Return
}


