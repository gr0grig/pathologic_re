task_0_event_5()
{
	var_0_bool = 0; var_1_string = ""; var_2_string = ""; // 0x4 PushV
	var_1_string = "quest_k7_01"; // 0x5 MovS
	var_2_string = "termitnik2_load"; // 0x6 MovS
	func_11(var_0_bool, var_1_string, var_2_string); // 0x7 NEW_2
	return 0; // 0x9 Return
}


task_0_event_6()
{
	return 0; // 0xa Return
}


main()
{
	
Label_0:
	Hold(); // 0x0 Func
	goto Label_0; // 0x2 Jump
}


func_11(var_0_bool, var_1_string, var_2_string)
{
	var_3_object = Obj(); var_4_object = Obj(); // 0xb PushV
	FindActor(var_4_object, var_1_string); // 0xc Func
	var_5_bool = var_4_object == 0; // 0xe NullEq
	if(var_5_bool == 0) goto Label_18; // 0xf JumpB
	var_0_bool = 0; // 0x10 MovB
	return 2; // 0x11 Return
	
Label_18:
	Trigger(var_4_object, var_2_string); // 0x12 Func
	var_0_bool = 1; // 0x14 MovB
	return 2; // 0x15 Return
}


