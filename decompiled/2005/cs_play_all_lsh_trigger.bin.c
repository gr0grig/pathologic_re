task_0_event_26(var_0_string)
{
	var_1_string = "play"; // 0x5 PushS
	var_2_bool = var_0_string == var_1_string; // 0x6 Eq
	if(var_2_bool == 0) goto Label_16; // 0x7 JumpB
	EventDisable(26); // 0x8 EventDisable
	PlayAnimation(); // 0x9 Func
	lshPlayAnimation(); // 0xb Func
	Hold(); // 0xd Func
	EventEnable(26); // 0xf EventEnable
	
Label_16:
	return 0; // 0x10 Return
}


main()
{
	
Label_0:
	Hold(); // 0x0 Func
	goto Label_0; // 0x2 Jump
}


