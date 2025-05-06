task_0_event_0(var_0_object)
{
	var_1_bool = 0; var_2_bool = 0; // 0x7 PushV
	EventDisable(0); // 0x8 EventDisable
	IsOverrideActive(var_2_bool); // 0x9 Func
	var_3_bool = var_2_bool == 0; // 0xb Not
	if(var_3_bool == 0) goto Label_18; // 0xc JumpB
	var_4_string = "microscope.xml"; // 0xd PushS
	var_5_bool = 0; // 0xe PushB
	ShowWindow(var_4_string, var_5_bool); // 0xf Func
	EventEnable(0); // 0x11 EventEnable
	
Label_18:
	return 2; // 0x12 Return
}


main()
{
	var_0_bool = 1; // 0x0 PushB
	SetVisibility(var_0_bool); // 0x1 Func
	
Label_3:
	Hold(); // 0x3 Func
	goto Label_3; // 0x5 Jump
}


