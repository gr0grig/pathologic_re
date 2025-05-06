task_0_event_0(var_0_int, var_1_int, var_2_object, var_3_string)
{
	var_4_bool = var_2_object == 0; // 0xb Not
	if(var_4_bool == 0) goto Label_14; // 0xc JumpB
	return 0; // 0xd Return
	
Label_14:
	var_5_int = 1; // 0xe PushI
	var_6_int = 1; // 0xf PushI
	Blit(var_3_string, var_5_int, var_6_int); // 0x10 Func
	var_7_int = 2; // 0x12 PushI
	var_8_bool = var_0_int < var_7_int; // 0x13 LT
	if(var_8_bool == 0) goto Label_22; // 0x14 JumpB
	return 0; // 0x15 Return
	
Label_22:
	var_9_int = 1; // 0x16 PushI
	var_10_bool = var_1_int > var_9_int; // 0x17 GT
	if(var_10_bool == 0) goto Label_30; // 0x18 JumpB
	var_11_string = "default"; // 0x19 PushS
	var_12_int = 2; // 0x1a PushI
	var_13_int = 35; // 0x1b PushI
	Print(var_11_string, var_12_int, var_13_int, var_0_int); // 0x1c Func
	
Label_30:
	return 0; // 0x1e Return
}


task_0_event_2(var_0_int, var_1_int, var_2_object, var_3_string, var_4_int, var_5_int)
{
	var_6_string = "selected"; // 0x20 PushS
	SetBackground(var_6_string); // 0x21 Func
	var_7_int = 0; // 0x23 PushI
	SendMessageToParent(var_7_int); // 0x24 Func
	return 0; // 0x26 Return
}


task_0_event_6(var_0_int, var_1_int, var_2_object, var_3_string, var_4_int, var_5_int)
{
	var_6_int = 1; // 0x28 PushI
	SendMessageToParent(var_6_int); // 0x29 Func
	return 0; // 0x2b Return
}


task_0_event_3(var_0_int, var_1_int, var_2_object, var_3_string, var_4_int, var_5_int)
{
	return 0; // 0x2d Return
}


task_0_event_200(var_0_int, var_1_int, var_2_object, var_3_string, var_4_int, var_5_string, var_6_object)
{
	var_7_int = 0; var_8_int = 0; // 0x2e PushV
	var_9_int = 65536; // 0x2f PushI
	var_10_int = var_4_int & var_9_int; // 0x30 And
	if(var_10_int == 0) goto Label_53; // 0x31 JumpB
	var_11_int = 16383; // 0x32 PushI
	var_0_int = var_4_int & var_11_int; // 0x33 And2
	return 2; // 0x34 Return
	
Label_53:
	var_12_int = 16384; // 0x35 PushI
	var_13_int = var_4_int & var_12_int; // 0x36 And
	if(var_13_int == 0) goto Label_60; // 0x37 JumpB
	var_14_string = "selected"; // 0x38 PushS
	SetBackground(var_14_string); // 0x39 Func
	goto Label_63; // 0x3b Jump
	
Label_63:
	var_15_int = 32768; // 0x3f PushI
	var_16_int = var_4_int & var_15_int; // 0x40 And
	if(var_16_int == 0) goto Label_72; // 0x41 JumpB
	var_2_object = 0; // 0x42 SetNullT
	var_17_int = -1; // 0x43 PushI
	var_18_string = ""; // 0x44 PushS
	SetTooltip(var_17_int, var_18_string); // 0x45 Func
	goto Label_92; // 0x47 Jump
	
Label_92:
	return 2; // 0x5c Return
	
Label_72:
	var_2_object = var_6_object; // 0x48 TMov
	var_19_object = var_2_object; // 0x49 PushT
	if(var_19_object == 0) goto Label_88; // 0x4a JumpB
	GetItemID(var_8_int); // 0x4b TObjFunc
	GetInvItemSprite(var_6_object, var_8_int); // 0x4d Func
	LoadImage(var_6_object); // 0x4f Func
	GetInvItemMaxStackSize(var_8_int, var_8_int); // 0x51 Func
	var_20_int = 1; // 0x53 PushI
	var_21_string = ""; // 0x54 PushS
	SetTooltip(var_20_int, var_21_string, var_20_int); // 0x55 Func
	goto Label_92; // 0x57 Jump
	
Label_88:
	var_22_int = -1; // 0x58 PushI
	var_23_string = ""; // 0x59 PushS
	SetTooltip(var_22_int, var_23_string); // 0x5a Func
	
Label_60:
	var_24_string = "default"; // 0x3c PushS
	SetBackground(var_24_string); // 0x3d Func
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


