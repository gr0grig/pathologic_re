task_0_event_0(var_0_int, var_1_int, var_2_object, var_3_string)
{
	var_4_bool = var_2_object == 0; // 0xb Not
	if(var_4_bool == 0) goto Label_14; // 0xc JumpB
	return 0; // 0xd Return
	
Label_14:
	var_5_int = 1; // 0xe PushI
	var_6_int = 1; // 0xf PushI
	Blit(var_3_string, var_5_int, var_6_int); // 0x10 Func
	var_7_int = 1; // 0x12 PushI
	var_8_bool = var_1_int > var_7_int; // 0x13 GT
	if(var_8_bool == 0) goto Label_26; // 0x14 JumpB
	var_9_string = "default"; // 0x15 PushS
	var_10_int = 2; // 0x16 PushI
	var_11_int = 35; // 0x17 PushI
	Print(var_9_string, var_10_int, var_11_int, var_0_int); // 0x18 Func
	
Label_26:
	return 0; // 0x1a Return
}


task_0_event_2(var_0_int, var_1_int, var_2_object, var_3_string, var_4_int, var_5_int)
{
	var_6_int = 0; // 0x1c PushI
	SendMessageToParent(var_6_int); // 0x1d Func
	return 0; // 0x1f Return
}


task_0_event_200(var_0_int, var_1_int, var_2_object, var_3_string, var_4_int, var_5_string, var_6_object)
{
	var_7_int = 0; var_8_int = 0; // 0x20 PushV
	var_9_int = 65536; // 0x21 PushI
	var_10_int = var_4_int & var_9_int; // 0x22 And
	if(var_10_int == 0) goto Label_39; // 0x23 JumpB
	var_11_int = 16383; // 0x24 PushI
	var_0_int = var_4_int & var_11_int; // 0x25 And2
	return 2; // 0x26 Return
	
Label_39:
	var_12_int = 32768; // 0x27 PushI
	var_13_int = var_4_int & var_12_int; // 0x28 And
	if(var_13_int == 0) goto Label_48; // 0x29 JumpB
	var_2_object = 0; // 0x2a SetNullT
	var_14_int = -1; // 0x2b PushI
	var_15_string = ""; // 0x2c PushS
	SetTooltip(var_14_int, var_15_string); // 0x2d Func
	goto Label_68; // 0x2f Jump
	
Label_68:
	return 2; // 0x44 Return
	
Label_48:
	var_2_object = var_6_object; // 0x30 TMov
	var_16_object = var_2_object; // 0x31 PushT
	if(var_16_object == 0) goto Label_64; // 0x32 JumpB
	GetItemID(var_8_int); // 0x33 TObjFunc
	GetInvItemSprite(var_6_object, var_8_int); // 0x35 Func
	LoadImage(var_6_object); // 0x37 Func
	GetInvItemMaxStackSize(var_8_int, var_8_int); // 0x39 Func
	var_17_int = 1; // 0x3b PushI
	var_18_string = ""; // 0x3c PushS
	SetTooltip(var_17_int, var_18_string, var_17_int); // 0x3d Func
	goto Label_68; // 0x3f Jump
	
Label_64:
	var_19_int = -1; // 0x40 PushI
	var_20_string = ""; // 0x41 PushS
	SetTooltip(var_19_int, var_20_string); // 0x42 Func
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


