task_0_event_26(var_0_string)
{
	var_1_string = "play"; // 0x5 PushS
	var_2_bool = var_0_string == var_1_string; // 0x6 Eq
	if(var_2_bool == 0) goto Label_14; // 0x7 JumpB
	EventDisable(26); // 0x8 EventDisable
	PlayAnimation(); // 0x9 Func
	Hold(); // 0xb Func
	EventEnable(26); // 0xd EventEnable
	
Label_14:
	return 0; // 0xe Return
}


main()
{
	
Label_0:
	Hold(); // 0x0 Func
	goto Label_0; // 0x2 Jump
}


