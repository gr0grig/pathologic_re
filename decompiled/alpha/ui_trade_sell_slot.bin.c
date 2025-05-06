task_0_event_0(var_0_int, var_1_int, var_2_object, var_3_bool, var_4_string)
{
	var_5_bool = var_2_object == 0; // 0xc Not
	if(var_5_bool == 0) goto Label_15; // 0xd JumpB
	return 0; // 0xe Return
	
Label_15:
	var_6_int = 1; // 0xf PushI
	var_7_int = 1; // 0x10 PushI
	Blit(var_3_bool, var_6_int, var_7_int); // 0x11 Func
	var_8_int = 1; // 0x13 PushI
	var_9_bool = var_1_int > var_8_int; // 0x14 GT
	if(var_9_bool == 0) goto Label_27; // 0x15 JumpB
	var_10_string = "default"; // 0x16 PushS
	var_11_int = 2; // 0x17 PushI
	var_12_int = 35; // 0x18 PushI
	Print(var_10_string, var_11_int, var_12_int, var_0_int); // 0x19 Func
	
Label_27:
	var_13_bool = var_3_bool; // 0x1b PushT
	if(var_13_bool == 0) goto Label_36; // 0x1c JumpB
	var_14_string = "disabled"; // 0x1d PushS
	var_15_int = 0; // 0x1e PushI
	var_16_int = 0; // 0x1f PushI
	var_17_int = 50; // 0x20 PushI
	var_18_int = 50; // 0x21 PushI
	StretchBlit(var_14_string, var_15_int, var_16_int, var_17_int, var_18_int); // 0x22 Func
	
Label_36:
	return 0; // 0x24 Return
}


task_0_event_2(var_0_int, var_1_int, var_2_object, var_3_bool, var_4_string, var_5_int, var_6_int)
{
	var_7_int = 0; // 0x26 PushI
	SendMessageToParent(var_7_int); // 0x27 Func
	return 0; // 0x29 Return
}


task_0_event_6(var_0_int, var_1_int, var_2_object, var_3_bool, var_4_string, var_5_int, var_6_int)
{
	var_7_int = 1; // 0x2b PushI
	SendMessageToParent(var_7_int); // 0x2c Func
	return 0; // 0x2e Return
}


task_0_event_3(var_0_int, var_1_int, var_2_object, var_3_bool, var_4_string, var_5_int, var_6_int)
{
	return 0; // 0x30 Return
}


task_0_event_200(var_0_int, var_1_int, var_2_object, var_3_bool, var_4_string, var_5_int, var_6_string, var_7_object)
{
	var_8_int = 0; var_9_int = 0; // 0x31 PushV
	var_10_int = 65536; // 0x32 PushI
	var_11_int = var_5_int & var_10_int; // 0x33 And
	if(var_11_int == 0) goto Label_56; // 0x34 JumpB
	var_12_int = 16383; // 0x35 PushI
	var_0_int = var_5_int & var_12_int; // 0x36 And2
	return 2; // 0x37 Return
	
Label_56:
	var_13_int = 16384; // 0x38 PushI
	var_14_int = var_5_int & var_13_int; // 0x39 And
	if(var_14_int == 0) goto Label_63; // 0x3a JumpB
	var_15_string = "selected"; // 0x3b PushS
	SetBackground(var_15_string); // 0x3c Func
	goto Label_66; // 0x3e Jump
	
Label_66:
	var_16_int = 32768; // 0x42 PushI
	var_17_int = var_5_int & var_16_int; // 0x43 And
	if(var_17_int == 0) goto Label_75; // 0x44 JumpB
	var_2_object = 0; // 0x45 SetNullT
	var_18_int = -1; // 0x46 PushI
	var_19_string = ""; // 0x47 PushS
	SetTooltip(var_18_int, var_19_string); // 0x48 Func
	return 2; // 0x4a Return
	
Label_75:
	var_20_int = 131072; // 0x4b PushI
	var_21_int = var_5_int & var_20_int; // 0x4c And
	if(var_21_int == 0) goto Label_80; // 0x4d JumpB
	var_3_bool = 1; // 0x4e TMovB
	goto Label_81; // 0x4f Jump
	
Label_81:
	var_2_object = var_7_object; // 0x51 TMov
	var_22_object = var_2_object; // 0x52 PushT
	if(var_22_object == 0) goto Label_104; // 0x53 JumpB
	GetItemID(var_9_int); // 0x54 TObjFunc
	GetItemImage(var_9_int, var_6_string); // 0x56 Func
	LoadImage(var_6_string); // 0x58 Func
	GetItemMaxStackSize(var_9_int, var_9_int); // 0x5a Func
	var_23_bool = var_3_bool; // 0x5c PushT
	if(var_23_bool == 0) goto Label_99; // 0x5d JumpB
	var_24_int = -1; // 0x5e PushI
	var_25_string = ""; // 0x5f PushS
	SetTooltip(var_24_int, var_25_string); // 0x60 Func
	goto Label_103; // 0x62 Jump
	
Label_103:
	goto Label_108; // 0x67 Jump
	
Label_108:
	return 2; // 0x6c Return
	
Label_99:
	var_26_int = 3; // 0x63 PushI
	var_27_string = ""; // 0x64 PushS
	SetTooltip(var_26_int, var_27_string, var_26_int); // 0x65 Func
	
Label_104:
	var_28_int = -1; // 0x68 PushI
	var_29_string = ""; // 0x69 PushS
	SetTooltip(var_28_int, var_29_string); // 0x6a Func
	
Label_80:
	var_3_bool = 0; // 0x50 TMovB
	
Label_63:
	var_30_string = "default"; // 0x3f PushS
	SetBackground(var_30_string); // 0x40 Func
}


main(var_0_int, var_1_int, var_2_object, var_3_bool, var_4_string)
{
	var_2_object = 0; // 0x0 SetNullT
	var_0_int = 0; // 0x1 TMovI
	var_3_bool = 0; // 0x2 TMovB
	var_5_string = "default"; // 0x3 PushS
	SetBackground(var_5_string); // 0x4 Func
	var_6_bool = 1; // 0x6 PushB
	SetOwnerDraw(var_6_bool); // 0x7 Func
	ProcessEvents(); // 0x9 Func
	return 0; // 0xb Return
}


