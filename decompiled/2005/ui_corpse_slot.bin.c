task_0_event_0(var_0_int, var_1_int, var_2_object, var_3_string)
{
	var_4_bool = var_2_object == 0; // 0xb Not
	if(var_4_bool == 0) goto Label_19; // 0xc JumpB
	var_5_string = "scalpel"; // 0xd PushS
	var_6_int = 1; // 0xe PushI
	var_7_int = 1; // 0xf PushI
	Blit(var_5_string, var_6_int, var_7_int); // 0x10 Func
	return 0; // 0x12 Return
	
Label_19:
	var_8_int = 1; // 0x13 PushI
	var_9_int = 1; // 0x14 PushI
	Blit(var_3_string, var_8_int, var_9_int); // 0x15 Func
	var_10_int = 1; // 0x17 PushI
	var_11_bool = var_1_int > var_10_int; // 0x18 GT
	if(var_11_bool == 0) goto Label_31; // 0x19 JumpB
	var_12_string = "default"; // 0x1a PushS
	var_13_int = 2; // 0x1b PushI
	var_14_int = 35; // 0x1c PushI
	Print(var_12_string, var_13_int, var_14_int, var_0_int); // 0x1d Func
	
Label_31:
	return 0; // 0x1f Return
}


task_0_event_2(var_0_int, var_1_int, var_2_object, var_3_string, var_4_int, var_5_int)
{
	var_6_object = var_2_object; // 0x21 PushT
	if(var_6_object == 0) goto Label_38; // 0x22 JumpB
	var_7_int = 0; // 0x23 PushI
	SendMessageToParent(var_7_int); // 0x24 Func
	
Label_38:
	return 0; // 0x26 Return
}


task_0_event_200(var_0_int, var_1_int, var_2_object, var_3_string, var_4_int, var_5_string, var_6_object)
{
	var_7_int = 0; var_8_int = 0; // 0x27 PushV
	var_9_int = 65536; // 0x28 PushI
	var_10_int = var_4_int & var_9_int; // 0x29 And
	if(var_10_int == 0) goto Label_46; // 0x2a JumpB
	var_11_int = 16383; // 0x2b PushI
	var_0_int = var_4_int & var_11_int; // 0x2c And2
	return 2; // 0x2d Return
	
Label_46:
	var_12_int = 32768; // 0x2e PushI
	var_13_int = var_4_int & var_12_int; // 0x2f And
	if(var_13_int == 0) goto Label_55; // 0x30 JumpB
	var_2_object = 0; // 0x31 SetNullT
	var_14_int = -1; // 0x32 PushI
	var_15_string = ""; // 0x33 PushS
	SetTooltip(var_14_int, var_15_string); // 0x34 Func
	goto Label_75; // 0x36 Jump
	
Label_75:
	return 2; // 0x4b Return
	
Label_55:
	var_2_object = var_6_object; // 0x37 TMov
	var_16_object = var_2_object; // 0x38 PushT
	if(var_16_object == 0) goto Label_71; // 0x39 JumpB
	GetItemID(var_8_int); // 0x3a TObjFunc
	GetInvItemSprite(var_6_object, var_8_int); // 0x3c Func
	LoadImage(var_6_object); // 0x3e Func
	GetInvItemMaxStackSize(var_8_int, var_8_int); // 0x40 Func
	var_17_int = 1; // 0x42 PushI
	var_18_string = ""; // 0x43 PushS
	SetTooltip(var_17_int, var_18_string, var_17_int); // 0x44 Func
	goto Label_75; // 0x46 Jump
	
Label_71:
	var_19_int = -1; // 0x47 PushI
	var_20_string = ""; // 0x48 PushS
	SetTooltip(var_19_int, var_20_string); // 0x49 Func
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


