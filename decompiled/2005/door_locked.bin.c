task_0_event_0(var_0_object)
{
	var_1_string = "door_closed"; // 0x8 PushS
	PlaySound(var_1_string); // 0x9 Func
	var_2_string = "Door is locked"; // 0xb PushS
	Trace(var_2_string); // 0xc Func
	return 0; // 0xe Return
}


main()
{
	var_0_bool = 1; // 0x0 PushB
	SetVisibility(var_0_bool); // 0x1 Func
	
Label_3:
	Hold(); // 0x3 Func
	goto Label_3; // 0x5 Jump
}


