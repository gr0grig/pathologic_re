task_0_event_0()
{
	return 0; // 0x4 Return
}


event_6()
{
	var_0_bool = 0; var_1_string = ""; var_2_string = ""; // 0x11 PushV
	var_1_string = "quest_d2_02"; // 0x12 MovS
	var_2_string = "driver_unload"; // 0x13 MovS
	func_5(var_0_bool, var_1_string, var_2_string); // 0x14 Call
	return 0; // 0x16 Return
}


main()
{
	
Label_0:
	Hold(); // 0x0 Func
	goto Label_0; // 0x2 Jump
}


func_5(var_0_bool, var_1_string, var_2_string)
{
	var_3_object = Obj(); var_4_object = Obj(); // 0x5 PushV
	FindActor(var_4_object, var_1_string); // 0x6 Func
	var_5_bool = var_4_object == 0; // 0x8 NullEq
	if(var_5_bool == 0) goto Label_12; // 0x9 JumpB
	var_0_bool = 0; // 0xa MovB
	return 2; // 0xb Return
	
Label_12:
	Trigger(var_4_object, var_2_string); // 0xc Func
	var_0_bool = 1; // 0xe MovB
	return 2; // 0xf Return
}


