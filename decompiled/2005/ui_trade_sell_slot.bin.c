task_0_event_15(var_0_int, var_1_int, var_2_object, var_3_bool, var_4_string, var_5_int, var_6_int, var_7_float)
{
	SendToParent(); // 0xe Func
	return 0; // 0x10 Return
}


task_0_event_0(var_0_int, var_1_int, var_2_object, var_3_bool, var_4_string)
{
	var_5_string = ""; var_6_int = 0; var_7_int = 0; var_8_string = ""; var_9_int = 0; var_10_int = 0; // 0x11 PushV
	var_11_bool = var_2_object == 0; // 0x12 Not
	if(var_11_bool == 0) goto Label_21; // 0x13 JumpB
	return 6; // 0x14 Return
	
Label_21:
	var_12_int = 1; // 0x15 PushI
	var_13_int = 1; // 0x16 PushI
	Blit(var_9_int, var_12_int, var_13_int); // 0x17 Func
	var_14_bool = 0; // 0x19 PushV
	var_14_bool = 0; // 0x1a MovB
	var_15_int = 1; // 0x1b PushI
	var_16_bool = var_1_int > var_15_int; // 0x1c GT
	if(var_16_bool == 0) goto Label_33; // 0x1d JumpB
	var_17_bool = var_3_bool == 0; // 0x1e Not
	if(var_17_bool == 0) goto Label_33; // 0x1f JumpB
	var_14_bool = 1; // 0x20 MovB
	
Label_33:
	if(var_14_bool == 0) goto Label_50; // 0x21 JumpB
	var_18_string = "/"; // 0x22 PushS
	var_19_int = var_0_int + var_18_string; // 0x23 Add
	var_8_string = var_19_int + var_1_int; // 0x24 Add2
	var_20_string = "default"; // 0x25 PushS
	GetTextWidth(var_9_int, var_20_string, var_8_string); // 0x26 Func
	var_21_int = 48; // 0x28 PushI
	var_10_int = var_21_int - var_9_int; // 0x29 Sub2
	var_22_int = 2; // 0x2a PushI
	var_23_bool = var_10_int < var_22_int; // 0x2b LT
	if(var_23_bool == 0) goto Label_46; // 0x2c JumpB
	var_10_int = 2; // 0x2d MovI
	
Label_46:
	var_24_string = "default"; // 0x2e PushS
	var_25_int = 35; // 0x2f PushI
	Print(var_24_string, var_10_int, var_25_int, var_8_string); // 0x30 Func
	
Label_50:
	var_26_bool = var_3_bool; // 0x32 PushT
	if(var_26_bool == 0) goto Label_59; // 0x33 JumpB
	var_27_string = "disabled"; // 0x34 PushS
	var_28_int = 1; // 0x35 PushI
	var_29_int = 1; // 0x36 PushI
	var_30_int = 50; // 0x37 PushI
	var_31_int = 50; // 0x38 PushI
	StretchBlit(var_27_string, var_28_int, var_29_int, var_30_int, var_31_int); // 0x39 Func
	
Label_59:
	return 6; // 0x3b Return
}


task_0_event_2(var_0_int, var_1_int, var_2_object, var_3_bool, var_4_string, var_5_int, var_6_int)
{
	var_7_int = 0; // 0x3d PushI
	SendMessageToParent(var_7_int); // 0x3e Func
	return 0; // 0x40 Return
}


task_0_event_6(var_0_int, var_1_int, var_2_object, var_3_bool, var_4_string, var_5_int, var_6_int)
{
	var_7_int = 1; // 0x42 PushI
	SendMessageToParent(var_7_int); // 0x43 Func
	return 0; // 0x45 Return
}


task_0_event_3(var_0_int, var_1_int, var_2_object, var_3_bool, var_4_string, var_5_int, var_6_int)
{
	return 0; // 0x47 Return
}


task_0_event_200(var_0_int, var_1_int, var_2_object, var_3_bool, var_4_string, var_5_int, var_6_string, var_7_object)
{
	var_8_int = 0; var_9_int = 0; // 0x48 PushV
	var_10_int = 65536; // 0x49 PushI
	var_11_int = var_5_int & var_10_int; // 0x4a And
	if(var_11_int == 0) goto Label_83; // 0x4b JumpB
	var_12_int = 0; // 0x4c PushI
	get(var_0_int, var_12_int); // 0x4d ObjFunc
	var_13_int = 1; // 0x4f PushI
	get(var_13_int, var_13_int); // 0x50 ObjFunc
	return 2; // 0x52 Return
	
Label_83:
	var_14_int = 16384; // 0x53 PushI
	var_15_int = var_5_int & var_14_int; // 0x54 And
	if(var_15_int == 0) goto Label_90; // 0x55 JumpB
	var_16_string = "selected"; // 0x56 PushS
	SetBackground(var_16_string); // 0x57 Func
	goto Label_93; // 0x59 Jump
	
Label_93:
	var_17_int = 32768; // 0x5d PushI
	var_18_int = var_5_int & var_17_int; // 0x5e And
	if(var_18_int == 0) goto Label_102; // 0x5f JumpB
	var_2_object = 0; // 0x60 SetNullT
	var_19_int = -1; // 0x61 PushI
	var_20_string = ""; // 0x62 PushS
	SetTooltip(var_19_int, var_20_string); // 0x63 Func
	return 2; // 0x65 Return
	
Label_102:
	var_21_int = 131072; // 0x66 PushI
	var_22_int = var_5_int & var_21_int; // 0x67 And
	if(var_22_int == 0) goto Label_107; // 0x68 JumpB
	var_3_bool = 1; // 0x69 TMovB
	goto Label_108; // 0x6a Jump
	
Label_108:
	var_2_object = var_7_object; // 0x6c TMov
	var_23_object = var_2_object; // 0x6d PushT
	if(var_23_object == 0) goto Label_129; // 0x6e JumpB
	GetItemID(var_9_int); // 0x6f TObjFunc
	GetItemImage(var_9_int, var_6_string); // 0x71 Func
	LoadImage(var_6_string); // 0x73 Func
	var_24_bool = var_3_bool; // 0x75 PushT
	if(var_24_bool == 0) goto Label_124; // 0x76 JumpB
	var_25_int = -1; // 0x77 PushI
	var_26_string = ""; // 0x78 PushS
	SetTooltip(var_25_int, var_26_string); // 0x79 Func
	goto Label_128; // 0x7b Jump
	
Label_128:
	goto Label_133; // 0x80 Jump
	
Label_133:
	return 2; // 0x85 Return
	
Label_124:
	var_27_int = 3; // 0x7c PushI
	var_28_string = ""; // 0x7d PushS
	SetTooltip(var_27_int, var_28_string, var_27_int); // 0x7e Func
	
Label_129:
	var_29_int = -1; // 0x81 PushI
	var_30_string = ""; // 0x82 PushS
	SetTooltip(var_29_int, var_30_string); // 0x83 Func
	
Label_107:
	var_3_bool = 0; // 0x6b TMovB
	
Label_90:
	var_31_string = "default"; // 0x5a PushS
	SetBackground(var_31_string); // 0x5b Func
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


