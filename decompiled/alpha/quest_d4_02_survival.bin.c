main()
{
	var_0_float = 1.0; // 0x0 PushF
	GameSleep(var_0_float); // 0x1 Func
	var_1_bool = 0; var_2_string = ""; var_3_string = ""; // 0x3 PushV
	var_2_string = "quest_d4_02"; // 0x4 MovS
	var_3_string = "survived"; // 0x5 MovS
	func_20(var_1_bool, var_2_string, var_3_string); // 0x6 Call
	var_7_object = Obj(); // 0x8 PushV
	func_14(var_7_object); // 0x9 Call
	RemoveActor(var_7_object); // 0xb Func
	return 0; // 0xd Return
}


func_20(var_1_bool, var_2_string, var_3_string)
{
	var_4_object = Obj(); var_5_object = Obj(); // 0x14 PushV
	FindActor(var_5_object, var_2_string); // 0x15 Func
	var_6_bool = var_5_object == 0; // 0x17 NullEq
	if(var_6_bool == 0) goto Label_27; // 0x18 JumpB
	var_1_bool = 0; // 0x19 MovB
	return 2; // 0x1a Return
	
Label_27:
	Trigger(var_5_object, var_3_string); // 0x1b Func
	var_1_bool = 1; // 0x1d MovB
	return 2; // 0x1e Return
}


func_14(var_7_object)
{
	var_8_object = Obj(); var_9_object = Obj(); // 0xe PushV
	self(var_9_object); // 0xf Func
	var_7_object = var_9_object; // 0x11 Mov
	return 2; // 0x12 Return
}


