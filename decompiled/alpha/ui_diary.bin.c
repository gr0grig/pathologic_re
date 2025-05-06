task_0_event_100(var_0_int, var_1_int)
{
	SetDiarySelectedSection(var_0_int); // 0x14 Func
	DestroyWindow(); // 0x16 Func
	return 0; // 0x18 Return
}


task_0_event_200(var_0_int, var_1_int, var_2_string, var_3_object)
{
	var_4_string = "button_mission"; // 0x1a PushS
	var_5_bool = var_2_string == var_4_string; // 0x1b Eq
	if(var_5_bool == 0) goto Label_31; // 0x1c JumpB
	var_0_int = 0; // 0x1d TMovI
	goto Label_40; // 0x1e Jump
	
Label_40:
	var_6_int = 0; // 0x28 PushV
	var_6_int = var_0_int; // 0x29 MovT
	func_45(var_6_int); // 0x2a Call
	return 0; // 0x2c Return
	
Label_31:
	var_26_string = "button_daytasks"; // 0x1f PushS
	var_27_bool = var_2_string == var_26_string; // 0x20 Eq
	if(var_27_bool == 0) goto Label_36; // 0x21 JumpB
	var_0_int = 1; // 0x22 TMovI
	goto Label_40; // 0x23 Jump
	
Label_36:
	var_28_string = "button_othertasks"; // 0x24 PushS
	var_29_bool = var_2_string == var_28_string; // 0x25 Eq
	if(var_29_bool == 0) goto Label_40; // 0x26 JumpB
	var_0_int = 2; // 0x27 TMovI
}


main(var_0_int)
{
	GetDiarySelectedSection(var_0_int); // 0x0 Func
	var_1_string = "default"; // 0x2 PushS
	SetCursor(var_1_string); // 0x3 Func
	ShowCursor(); // 0x5 Func
	var_2_int = 0; // 0x7 PushV
	var_2_int = var_0_int; // 0x8 MovT
	func_45(var_2_int); // 0x9 Call
	CaptureKeyboard(); // 0xb Func
	var_22_bool = 0; // 0xd PushB
	SetOwnerDraw(var_22_bool); // 0xe Func
	ProcessEvents(); // 0x10 Func
	return 0; // 0x12 Return
}


func_45(var_2_int)
{
	var_3_int = 0; // 0x2e PushI
	var_4_bool = var_2_int != var_3_int; // 0x2f Neq
	if(var_4_bool == 0) goto Label_54; // 0x30 JumpB
	var_5_int = 0; // 0x31 PushI
	var_6_string = "button_mission"; // 0x32 PushS
	SendMessage(var_5_int, var_6_string); // 0x33 Func
	goto Label_58; // 0x35 Jump
	
Label_58:
	var_7_int = 1; // 0x3a PushI
	var_8_bool = var_2_int != var_7_int; // 0x3b Neq
	if(var_8_bool == 0) goto Label_66; // 0x3c JumpB
	var_9_int = 0; // 0x3d PushI
	var_10_string = "button_daytasks"; // 0x3e PushS
	SendMessage(var_9_int, var_10_string); // 0x3f Func
	goto Label_70; // 0x41 Jump
	
Label_70:
	var_11_int = 2; // 0x46 PushI
	var_12_bool = var_2_int != var_11_int; // 0x47 Neq
	if(var_12_bool == 0) goto Label_78; // 0x48 JumpB
	var_13_int = 0; // 0x49 PushI
	var_14_string = "button_othertasks"; // 0x4a PushS
	SendMessage(var_13_int, var_14_string); // 0x4b Func
	goto Label_82; // 0x4d Jump
	
Label_82:
	var_15_string = "text"; // 0x52 PushS
	SendMessage(var_2_int, var_15_string); // 0x53 Func
	return 0; // 0x55 Return
	
Label_78:
	var_16_int = 1; // 0x4e PushI
	var_17_string = "button_othertasks"; // 0x4f PushS
	SendMessage(var_16_int, var_17_string); // 0x50 Func
	
Label_66:
	var_18_int = 1; // 0x42 PushI
	var_19_string = "button_daytasks"; // 0x43 PushS
	SendMessage(var_18_int, var_19_string); // 0x44 Func
	
Label_54:
	var_20_int = 1; // 0x36 PushI
	var_21_string = "button_mission"; // 0x37 PushS
	SendMessage(var_20_int, var_21_string); // 0x38 Func
}


