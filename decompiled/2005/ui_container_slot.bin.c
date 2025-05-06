task_0_event_15(var_0_int, var_1_int, var_2_object, var_3_string, var_4_int, var_5_int, var_6_float)
{
	SendToParent(); // 0xc Func
	return 0; // 0xe Return
}


task_0_event_0(var_0_int, var_1_int, var_2_object, var_3_string)
{
	var_4_bool = var_2_object == 0; // 0xf Not
	if(var_4_bool == 0) goto Label_18; // 0x10 JumpB
	return 0; // 0x11 Return
	
Label_18:
	var_5_int = 1; // 0x12 PushI
	var_6_int = 1; // 0x13 PushI
	Blit(var_3_string, var_5_int, var_6_int); // 0x14 Func
	var_7_int = 1; // 0x16 PushI
	var_8_bool = var_1_int > var_7_int; // 0x17 GT
	if(var_8_bool == 0) goto Label_30; // 0x18 JumpB
	var_9_string = "default"; // 0x19 PushS
	var_10_int = 2; // 0x1a PushI
	var_11_int = 35; // 0x1b PushI
	Print(var_9_string, var_10_int, var_11_int, var_0_int); // 0x1c Func
	
Label_30:
	return 0; // 0x1e Return
}


task_0_event_2(var_0_int, var_1_int, var_2_object, var_3_string, var_4_int, var_5_int)
{
	var_6_object = var_2_object; // 0x20 PushT
	if(var_6_object == 0) goto Label_37; // 0x21 JumpB
	var_7_int = 0; // 0x22 PushI
	SendMessageToParent(var_7_int); // 0x23 Func
	
Label_37:
	return 0; // 0x25 Return
}


task_0_event_200(var_0_int, var_1_int, var_2_object, var_3_string, var_4_int, var_5_string, var_6_object)
{
	var_7_int = 0; var_8_int = 0; // 0x26 PushV
	var_9_int = 65536; // 0x27 PushI
	var_10_int = var_4_int & var_9_int; // 0x28 And
	if(var_10_int == 0) goto Label_45; // 0x29 JumpB
	var_11_int = 16383; // 0x2a PushI
	var_0_int = var_4_int & var_11_int; // 0x2b And2
	return 2; // 0x2c Return
	
Label_45:
	var_12_int = 32768; // 0x2d PushI
	var_13_int = var_4_int & var_12_int; // 0x2e And
	if(var_13_int == 0) goto Label_54; // 0x2f JumpB
	var_2_object = 0; // 0x30 SetNullT
	var_14_int = -1; // 0x31 PushI
	var_15_string = ""; // 0x32 PushS
	SetTooltip(var_14_int, var_15_string); // 0x33 Func
	goto Label_74; // 0x35 Jump
	
Label_74:
	return 2; // 0x4a Return
	
Label_54:
	var_2_object = var_6_object; // 0x36 TMov
	var_16_object = var_2_object; // 0x37 PushT
	if(var_16_object == 0) goto Label_70; // 0x38 JumpB
	GetItemID(var_8_int); // 0x39 TObjFunc
	GetInvItemSprite(var_6_object, var_8_int); // 0x3b Func
	LoadImage(var_6_object); // 0x3d Func
	GetInvItemMaxStackSize(var_8_int, var_8_int); // 0x3f Func
	var_17_int = 1; // 0x41 PushI
	var_18_string = ""; // 0x42 PushS
	SetTooltip(var_17_int, var_18_string, var_17_int); // 0x43 Func
	goto Label_74; // 0x45 Jump
	
Label_70:
	var_19_int = -1; // 0x46 PushI
	var_20_string = ""; // 0x47 PushS
	SetTooltip(var_19_int, var_20_string); // 0x48 Func
}


main(var_0_int, var_1_int, var_2_object, var_3_string)
{
	var_2_object = 0; // 0x0 SetNullT
	var_0_int = 1; // 0x1 TMovI
	var_4_string = "default"; // 0x2 PushS
	SetBackground(var_4_string); // 0x3 Func
	var_5_bool = 1; // 0x5 PushB
	SetOwnerDraw(var_5_bool); // 0x6 Func
	ProcessEvents(); // 0x8 Func
	return 0; // 0xa Return
}


