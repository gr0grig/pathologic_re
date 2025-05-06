task_0_event_0(var_0_int, var_1_object, var_2_string)
{
	var_3_bool = var_1_object == 0; // 0xa Not
	if(var_3_bool == 0) goto Label_13; // 0xb JumpB
	return 0; // 0xc Return
	
Label_13:
	var_4_int = 1; // 0xd PushI
	var_5_int = 1; // 0xe PushI
	Blit(var_4_int, var_4_int, var_5_int); // 0xf Func
	return 0; // 0x11 Return
}


task_0_event_2(var_0_int, var_1_object, var_2_string, var_3_int, var_4_int)
{
	var_5_int = 0; // 0x13 PushI
	SendMessageToParent(var_5_int); // 0x14 Func
	return 0; // 0x16 Return
}


task_0_event_6(var_0_int, var_1_object, var_2_string, var_3_int, var_4_int)
{
	var_5_int = 1; // 0x18 PushI
	SendMessageToParent(var_5_int); // 0x19 Func
	return 0; // 0x1b Return
}


task_0_event_3(var_0_int, var_1_object, var_2_string, var_3_int, var_4_int)
{
	return 0; // 0x1d Return
}


task_0_event_200(var_0_int, var_1_object, var_2_string, var_3_int, var_4_string, var_5_object)
{
	var_6_int = 0; var_7_int = 0; // 0x1e PushV
	var_8_int = 65536; // 0x1f PushI
	var_9_int = var_3_int & var_8_int; // 0x20 And
	if(var_9_int == 0) goto Label_35; // 0x21 JumpB
	return 2; // 0x22 Return
	
Label_35:
	var_10_int = 16384; // 0x23 PushI
	var_11_int = var_3_int & var_10_int; // 0x24 And
	if(var_11_int == 0) goto Label_42; // 0x25 JumpB
	var_12_string = "selected"; // 0x26 PushS
	SetBackground(var_12_string); // 0x27 Func
	goto Label_45; // 0x29 Jump
	
Label_45:
	var_13_int = 32768; // 0x2d PushI
	var_14_int = var_3_int & var_13_int; // 0x2e And
	if(var_14_int == 0) goto Label_54; // 0x2f JumpB
	var_1_object = 0; // 0x30 SetNullT
	var_15_int = -1; // 0x31 PushI
	var_16_string = ""; // 0x32 PushS
	SetTooltip(var_15_int, var_16_string); // 0x33 Func
	return 2; // 0x35 Return
	
Label_54:
	var_1_object = var_5_object; // 0x36 TMov
	var_17_object = var_1_object; // 0x37 PushT
	if(var_17_object == 0) goto Label_70; // 0x38 JumpB
	GetItemID(var_7_int); // 0x39 TObjFunc
	GetInvItemSprite(var_6_int, var_7_int); // 0x3b Func
	LoadImage(var_6_int); // 0x3d Func
	GetInvItemMaxStackSize(var_0_int, var_7_int); // 0x3f Func
	var_18_int = 1; // 0x41 PushI
	var_19_string = ""; // 0x42 PushS
	SetTooltip(var_18_int, var_19_string, var_19_string); // 0x43 Func
	goto Label_74; // 0x45 Jump
	
Label_74:
	return 2; // 0x4a Return
	
Label_70:
	var_20_int = -1; // 0x46 PushI
	var_21_string = ""; // 0x47 PushS
	SetTooltip(var_20_int, var_21_string); // 0x48 Func
	
Label_42:
	var_22_string = "default"; // 0x2a PushS
	SetBackground(var_22_string); // 0x2b Func
}


main(var_0_int, var_1_object, var_2_string)
{
	var_1_object = 0; // 0x0 SetNullT
	var_3_string = "default"; // 0x1 PushS
	SetBackground(var_3_string); // 0x2 Func
	var_4_bool = 1; // 0x4 PushB
	SetOwnerDraw(var_4_bool); // 0x5 Func
	ProcessEvents(); // 0x7 Func
	return 0; // 0x9 Return
}


