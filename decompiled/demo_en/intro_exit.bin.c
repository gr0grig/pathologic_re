task_0_event_0(var_0_object)
{
	var_1_string = "exit"; // 0x8 PushS
	TriggerWorld(var_1_string); // 0x9 Func
	return 0; // 0xb Return
}


main()
{
	var_0_bool = 1; // 0x0 PushB
	SetVisibility(var_0_bool); // 0x1 Func
	
Label_3:
	Hold(); // 0x3 Func
	goto Label_3; // 0x5 Jump
}


