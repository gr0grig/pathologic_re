task_0_event_15(var_0_int, var_1_int, var_2_object, var_3_bool, var_4_string, var_5_int, var_6_int, var_7_float)
{
	SendToParent(); // 0xe Func
	return 0; // 0x10 Return
}


task_0_event_0(var_0_int, var_1_int, var_2_object, var_3_bool, var_4_string)
{
	var_5_string = ""; var_6_string = ""; // 0x11 PushV
	var_7_bool = var_2_object == 0; // 0x12 Not
	if(var_7_bool == 0) goto Label_21; // 0x13 JumpB
	return 2; // 0x14 Return
	
Label_21:
	var_8_int = 1; // 0x15 PushI
	var_9_int = 1; // 0x16 PushI
	Blit(var_5_string, var_8_int, var_9_int); // 0x17 Func
	var_10_bool = 0; // 0x19 PushV
	var_10_bool = 0; // 0x1a MovB
	var_11_int = 1; // 0x1b PushI
	var_12_bool = var_1_int > var_11_int; // 0x1c GT
	if(var_12_bool == 0) goto Label_33; // 0x1d JumpB
	var_13_bool = var_3_bool == 0; // 0x1e Not
	if(var_13_bool == 0) goto Label_33; // 0x1f JumpB
	var_10_bool = 1; // 0x20 MovB
	
Label_33:
	if(var_10_bool == 0) goto Label_42; // 0x21 JumpB
	var_14_string = "/"; // 0x22 PushS
	var_15_int = var_0_int + var_14_string; // 0x23 Add
	var_6_string = var_15_int + var_1_int; // 0x24 Add2
	var_16_string = "default"; // 0x25 PushS
	var_17_int = 2; // 0x26 PushI
	var_18_int = 35; // 0x27 PushI
	Print(var_16_string, var_17_int, var_18_int, var_6_string); // 0x28 Func
	
Label_42:
	var_19_bool = var_3_bool; // 0x2a PushT
	if(var_19_bool == 0) goto Label_51; // 0x2b JumpB
	var_20_string = "disabled"; // 0x2c PushS
	var_21_int = 1; // 0x2d PushI
	var_22_int = 1; // 0x2e PushI
	var_23_int = 50; // 0x2f PushI
	var_24_int = 50; // 0x30 PushI
	StretchBlit(var_20_string, var_21_int, var_22_int, var_23_int, var_24_int); // 0x31 Func
	
Label_51:
	return 2; // 0x33 Return
}


task_0_event_2(var_0_int, var_1_int, var_2_object, var_3_bool, var_4_string, var_5_int, var_6_int)
{
	var_7_int = 0; // 0x35 PushI
	SendMessageToParent(var_7_int); // 0x36 Func
	return 0; // 0x38 Return
}


task_0_event_6(var_0_int, var_1_int, var_2_object, var_3_bool, var_4_string, var_5_int, var_6_int)
{
	var_7_int = 1; // 0x3a PushI
	SendMessageToParent(var_7_int); // 0x3b Func
	return 0; // 0x3d Return
}


task_0_event_3(var_0_int, var_1_int, var_2_object, var_3_bool, var_4_string, var_5_int, var_6_int)
{
	return 0; // 0x3f Return
}


task_0_event_200(var_0_int, var_1_int, var_2_object, var_3_bool, var_4_string, var_5_int, var_6_string, var_7_object)
{
	var_8_int = 0; var_9_int = 0; // 0x40 PushV
	var_10_int = 65536; // 0x41 PushI
	var_11_int = var_5_int & var_10_int; // 0x42 And
	if(var_11_int == 0) goto Label_75; // 0x43 JumpB
	var_12_int = 0; // 0x44 PushI
	get(var_0_int, var_12_int); // 0x45 ObjFunc
	var_13_int = 1; // 0x47 PushI
	get(var_13_int, var_13_int); // 0x48 ObjFunc
	return 2; // 0x4a Return
	
Label_75:
	var_14_int = 16384; // 0x4b PushI
	var_15_int = var_5_int & var_14_int; // 0x4c And
	if(var_15_int == 0) goto Label_82; // 0x4d JumpB
	var_16_string = "selected"; // 0x4e PushS
	SetBackground(var_16_string); // 0x4f Func
	goto Label_85; // 0x51 Jump
	
Label_85:
	var_17_int = 32768; // 0x55 PushI
	var_18_int = var_5_int & var_17_int; // 0x56 And
	if(var_18_int == 0) goto Label_94; // 0x57 JumpB
	var_2_object = 0; // 0x58 SetNullT
	var_19_int = -1; // 0x59 PushI
	var_20_string = ""; // 0x5a PushS
	SetTooltip(var_19_int, var_20_string); // 0x5b Func
	return 2; // 0x5d Return
	
Label_94:
	var_21_int = 131072; // 0x5e PushI
	var_22_int = var_5_int & var_21_int; // 0x5f And
	if(var_22_int == 0) goto Label_99; // 0x60 JumpB
	var_3_bool = 1; // 0x61 TMovB
	goto Label_100; // 0x62 Jump
	
Label_100:
	var_2_object = var_7_object; // 0x64 TMov
	var_23_object = var_2_object; // 0x65 PushT
	if(var_23_object == 0) goto Label_121; // 0x66 JumpB
	GetItemID(var_9_int); // 0x67 TObjFunc
	GetItemImage(var_9_int, var_6_string); // 0x69 Func
	LoadImage(var_6_string); // 0x6b Func
	var_24_bool = var_3_bool; // 0x6d PushT
	if(var_24_bool == 0) goto Label_116; // 0x6e JumpB
	var_25_int = -1; // 0x6f PushI
	var_26_string = ""; // 0x70 PushS
	SetTooltip(var_25_int, var_26_string); // 0x71 Func
	goto Label_120; // 0x73 Jump
	
Label_120:
	goto Label_125; // 0x78 Jump
	
Label_125:
	return 2; // 0x7d Return
	
Label_116:
	var_27_int = 4; // 0x74 PushI
	var_28_string = ""; // 0x75 PushS
	SetTooltip(var_27_int, var_28_string, var_27_int); // 0x76 Func
	
Label_121:
	var_29_int = -1; // 0x79 PushI
	var_30_string = ""; // 0x7a PushS
	SetTooltip(var_29_int, var_30_string); // 0x7b Func
	
Label_99:
	var_3_bool = 0; // 0x63 TMovB
	
Label_82:
	var_31_string = "default"; // 0x52 PushS
	SetBackground(var_31_string); // 0x53 Func
}


main(var_0_int, var_1_int, var_2_object, var_3_bool, var_4_string)
{
	var_2_object = 0; // 0x0 SetNullT
	var_0_int = 0; // 0x1 TMovI
	var_1_int = 1; // 0x2 TMovI
	var_3_bool = 0; // 0x3 TMovB
	var_5_string = "default"; // 0x4 PushS
	SetBackground(var_5_string); // 0x5 Func
	var_6_bool = 1; // 0x7 PushB
	SetOwnerDraw(var_6_bool); // 0x8 Func
	ProcessEvents(); // 0xa Func
	return 0; // 0xc Return
}


