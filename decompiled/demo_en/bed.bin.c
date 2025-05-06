task_0_event_0(var_0_object)
{
	var_1_bool = 0; var_2_bool = 0; // 0x7 PushV
	IsOverrideActive(var_2_bool); // 0x8 Func
	var_3_bool = var_2_bool == 0; // 0xa Not
	if(var_3_bool == 0) goto Label_14; // 0xb JumpB
	ActivateSleepMode(var_0_object); // 0xc Func
	
Label_14:
	return 2; // 0xe Return
}


main()
{
	var_0_bool = 1; // 0x0 PushB
	SetVisibility(var_0_bool); // 0x1 Func
	
Label_3:
	Hold(); // 0x3 Func
	goto Label_3; // 0x5 Jump
}


