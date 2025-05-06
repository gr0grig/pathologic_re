task_0_event_23(var_0_object)
{
	var_1_bool = 0; var_2_string = ""; var_3_bool = 0; var_4_string = ""; // 0x4 PushV
	IsPlayerActor(var_0_object, var_3_bool); // 0x5 Func
	var_5_bool = var_3_bool; // 0x7 Push
	if(var_5_bool == 0) goto Label_18; // 0x8 JumpB
	GetActorName(var_4_string); // 0x9 Func
	var_6_bool = 0; var_7_string = ""; var_8_string = ""; // 0xb PushV
	var_9_string = GlobalVars[0]; // 0xc PushGE
	var_7_string = var_9_string; // 0xd Mov
	var_8_string = var_4_string; // 0xf Mov
	func_19(var_6_bool, var_7_string, var_8_string); // 0x10 NEW_2
	
Label_18:
	return 4; // 0x12 Return
}


main()
{
	
Label_0:
	Hold(); // 0x0 Func
	goto Label_0; // 0x2 Jump
}


func_19(var_6_bool, var_7_string, var_8_string)
{
	var_10_object = Obj(); var_11_object = Obj(); // 0x13 PushV
	FindActor(var_11_object, var_7_string); // 0x14 Func
	var_12_bool = var_11_object == 0; // 0x16 NullEq
	if(var_12_bool == 0) goto Label_26; // 0x17 JumpB
	var_6_bool = 0; // 0x18 MovB
	return 2; // 0x19 Return
	
Label_26:
	Trigger(var_11_object, var_8_string); // 0x1a Func
	var_6_bool = 1; // 0x1c MovB
	return 2; // 0x1d Return
}


