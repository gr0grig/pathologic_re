task_0_event_0(var_0_int, var_1_int, var_2_object, var_3_string, var_4_bool)
{
	var_5_bool = var_2_object == 0; // 0xc Not
	if(var_5_bool == 0) goto Label_15; // 0xd JumpB
	return 0; // 0xe Return
	
Label_15:
	var_6_int = 1; // 0xf PushI
	var_7_int = 1; // 0x10 PushI
	Blit(var_4_bool, var_6_int, var_7_int); // 0x11 Func
	var_8_int = 2; // 0x13 PushI
	var_9_bool = var_0_int >= var_8_int; // 0x14 GE
	if(var_9_bool == 0) goto Label_30; // 0x15 JumpB
	var_10_int = 1; // 0x16 PushI
	var_11_bool = var_1_int > var_10_int; // 0x17 GT
	if(var_11_bool == 0) goto Label_30; // 0x18 JumpB
	var_12_string = "default"; // 0x19 PushS
	var_13_int = 2; // 0x1a PushI
	var_14_int = 35; // 0x1b PushI
	Print(var_12_string, var_13_int, var_14_int, var_0_int); // 0x1c Func
	
Label_30:
	var_15_bool = var_4_bool; // 0x1e PushT
	if(var_15_bool == 0) goto Label_39; // 0x1f JumpB
	var_16_string = "disabled"; // 0x20 PushS
	var_17_int = 0; // 0x21 PushI
	var_18_int = 0; // 0x22 PushI
	var_19_int = 50; // 0x23 PushI
	var_20_int = 50; // 0x24 PushI
	StretchBlit(var_16_string, var_17_int, var_18_int, var_19_int, var_20_int); // 0x25 Func
	
Label_39:
	return 0; // 0x27 Return
}


task_0_event_2(var_0_int, var_1_int, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int)
{
	var_7_int = 0; // 0x29 PushI
	SendMessageToParent(var_7_int); // 0x2a Func
	return 0; // 0x2c Return
}


task_0_event_6(var_0_int, var_1_int, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int)
{
	var_7_int = 1; // 0x2e PushI
	SendMessageToParent(var_7_int); // 0x2f Func
	return 0; // 0x31 Return
}


task_0_event_3(var_0_int, var_1_int, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int)
{
	return 0; // 0x33 Return
}


task_0_event_200(var_0_int, var_1_int, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_string, var_7_object)
{
	var_8_int = 0; var_9_int = 0; // 0x34 PushV
	var_10_int = 65536; // 0x35 PushI
	var_11_int = var_5_int & var_10_int; // 0x36 And
	if(var_11_int == 0) goto Label_59; // 0x37 JumpB
	var_12_int = 16383; // 0x38 PushI
	var_0_int = var_5_int & var_12_int; // 0x39 And2
	return 2; // 0x3a Return
	
Label_59:
	var_13_int = 16384; // 0x3b PushI
	var_14_int = var_5_int & var_13_int; // 0x3c And
	if(var_14_int == 0) goto Label_66; // 0x3d JumpB
	var_15_string = "selected"; // 0x3e PushS
	SetBackground(var_15_string); // 0x3f Func
	goto Label_69; // 0x41 Jump
	
Label_69:
	var_16_int = 32768; // 0x45 PushI
	var_17_int = var_5_int & var_16_int; // 0x46 And
	if(var_17_int == 0) goto Label_78; // 0x47 JumpB
	var_2_object = 0; // 0x48 SetNullT
	var_18_int = -1; // 0x49 PushI
	var_19_string = ""; // 0x4a PushS
	SetTooltip(var_18_int, var_19_string); // 0x4b Func
	return 2; // 0x4d Return
	
Label_78:
	var_20_int = 131072; // 0x4e PushI
	var_21_int = var_5_int & var_20_int; // 0x4f And
	if(var_21_int == 0) goto Label_83; // 0x50 JumpB
	var_4_bool = 1; // 0x51 TMovB
	goto Label_84; // 0x52 Jump
	
Label_84:
	var_2_object = var_7_object; // 0x54 TMov
	var_22_object = var_2_object; // 0x55 PushT
	if(var_22_object == 0) goto Label_107; // 0x56 JumpB
	GetItemID(var_9_int); // 0x57 TObjFunc
	GetItemImage(var_9_int, var_7_object); // 0x59 Func
	LoadImage(var_7_object); // 0x5b Func
	GetItemMaxStackSize(var_9_int, var_9_int); // 0x5d Func
	var_23_bool = var_4_bool; // 0x5f PushT
	if(var_23_bool == 0) goto Label_102; // 0x60 JumpB
	var_24_int = -1; // 0x61 PushI
	var_25_string = ""; // 0x62 PushS
	SetTooltip(var_24_int, var_25_string); // 0x63 Func
	goto Label_106; // 0x65 Jump
	
Label_106:
	goto Label_111; // 0x6a Jump
	
Label_111:
	return 2; // 0x6f Return
	
Label_102:
	var_26_int = 4; // 0x66 PushI
	var_27_string = ""; // 0x67 PushS
	SetTooltip(var_26_int, var_27_string, var_26_int); // 0x68 Func
	
Label_107:
	var_28_int = -1; // 0x6b PushI
	var_29_string = ""; // 0x6c PushS
	SetTooltip(var_28_int, var_29_string); // 0x6d Func
	
Label_83:
	var_4_bool = 0; // 0x53 TMovB
	
Label_66:
	var_30_string = "default"; // 0x42 PushS
	SetBackground(var_30_string); // 0x43 Func
}


main(var_0_int, var_1_int, var_2_object, var_3_string, var_4_bool)
{
	var_2_object = 0; // 0x0 SetNullT
	var_0_int = 0; // 0x1 TMovI
	var_4_bool = 0; // 0x2 TMovB
	var_5_string = "default"; // 0x3 PushS
	SetBackground(var_5_string); // 0x4 Func
	var_6_bool = 1; // 0x6 PushB
	SetOwnerDraw(var_6_bool); // 0x7 Func
	ProcessEvents(); // 0x9 Func
	return 0; // 0xb Return
}


