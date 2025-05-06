task_0_event_23(var_0_object)
{
	var_1_bool = 0; var_2_object = Obj(); var_3_bool = 0; var_4_object = Obj(); // 0x9 PushV
	IsPlayerActor(var_0_object, var_3_bool); // 0xa Func
	var_5_bool = var_3_bool; // 0xc Push
	if(var_5_bool == 0) goto Label_20; // 0xd JumpB
	GetScene(var_4_object); // 0xe Func
	var_6_string = GlobalVars[0]; // 0x10 PushGE
	Trigger(var_4_object, var_6_string); // 0x11 Func
	var_4_object = 0; // 0x13 SetNull
	
Label_20:
	return 4; // 0x14 Return
}


main()
{
	var_0_string = "Triggered actor: "; // 0x0 PushS
	var_1_string = GlobalVars[0]; // 0x1 PushGE
	var_2_int = var_0_string + var_1_string; // 0x2 Add
	Trace(var_2_int); // 0x3 Func
	
Label_5:
	Hold(); // 0x5 Func
	goto Label_5; // 0x7 Jump
}


