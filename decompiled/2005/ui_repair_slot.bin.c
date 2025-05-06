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
	var_8_bool = var_0_int > var_7_int; // 0x13 GT
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
	var_6_bool = var_2_object == 0; // 0x1c Not
	if(var_6_bool == 0) goto Label_31; // 0x1d JumpB
	return 0; // 0x1e Return
	
Label_31:
	var_7_string = "selected"; // 0x1f PushS
	SetBackground(var_7_string); // 0x20 Func
	var_8_int = 0; // 0x22 PushI
	SendMessageToParent(var_8_int); // 0x23 Func
	return 0; // 0x25 Return
}


task_0_event_6(var_0_int, var_1_int, var_2_object, var_3_string, var_4_int, var_5_int)
{
	var_6_bool = var_2_object == 0; // 0x27 Not
	if(var_6_bool == 0) goto Label_42; // 0x28 JumpB
	return 0; // 0x29 Return
	
Label_42:
	var_7_int = 1; // 0x2a PushI
	SendMessageToParent(var_7_int); // 0x2b Func
	return 0; // 0x2d Return
}


task_0_event_3(var_0_int, var_1_int, var_2_object, var_3_string, var_4_int, var_5_int)
{
	return 0; // 0x2f Return
}


task_0_event_200(var_0_int, var_1_int, var_2_object, var_3_string, var_4_int, var_5_string, var_6_object)
{
	var_7_int = 0; var_8_string = ""; var_9_int = 0; var_10_int = 0; var_11_string = ""; var_12_int = 0; // 0x30 PushV
	var_13_int = 65536; // 0x31 PushI
	var_14_int = var_4_int & var_13_int; // 0x32 And
	if(var_14_int == 0) goto Label_55; // 0x33 JumpB
	var_15_int = 16383; // 0x34 PushI
	var_0_int = var_4_int & var_15_int; // 0x35 And2
	return 6; // 0x36 Return
	
Label_55:
	var_16_int = 16384; // 0x37 PushI
	var_17_int = var_4_int & var_16_int; // 0x38 And
	if(var_17_int == 0) goto Label_62; // 0x39 JumpB
	var_18_string = "selected"; // 0x3a PushS
	SetBackground(var_18_string); // 0x3b Func
	goto Label_65; // 0x3d Jump
	
Label_65:
	var_19_int = 32768; // 0x41 PushI
	var_20_int = var_4_int & var_19_int; // 0x42 And
	if(var_20_int == 0) goto Label_74; // 0x43 JumpB
	var_2_object = 0; // 0x44 SetNullT
	var_21_int = -1; // 0x45 PushI
	var_22_string = ""; // 0x46 PushS
	SetTooltip(var_21_int, var_22_string); // 0x47 Func
	goto Label_99; // 0x49 Jump
	
Label_99:
	return 6; // 0x63 Return
	
Label_74:
	var_23_int = 16383; // 0x4a PushI
	var_10_int = var_4_int & var_23_int; // 0x4b And2
	var_24_int = 1007; // 0x4c PushI
	GetStringByID(var_11_string, var_24_int); // 0x4d Func
	var_11_string = var_11_string + var_10_int; // 0x4f Add2
	var_2_object = var_6_object; // 0x50 TMov
	var_25_object = var_2_object; // 0x51 PushT
	if(var_25_object == 0) goto Label_95; // 0x52 JumpB
	GetItemID(var_12_int); // 0x53 TObjFunc
	GetInvItemSprite(var_10_int, var_12_int); // 0x55 Func
	LoadImage(var_10_int); // 0x57 Func
	GetInvItemMaxStackSize(var_12_int, var_12_int); // 0x59 Func
	var_26_int = 1; // 0x5b PushI
	SetTooltip(var_26_int, var_11_string, var_12_int); // 0x5c Func
	goto Label_99; // 0x5e Jump
	
Label_95:
	var_27_int = -1; // 0x5f PushI
	var_28_string = ""; // 0x60 PushS
	SetTooltip(var_27_int, var_28_string); // 0x61 Func
	
Label_62:
	var_29_string = "default"; // 0x3e PushS
	SetBackground(var_29_string); // 0x3f Func
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


