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
	if(var_5_bool == 0) goto Label_35; // 0x1c JumpB
	var_0_int = 0; // 0x1d TMovI
	var_6_int = 0; // 0x1e PushV
	var_6_int = var_0_int; // 0x1f MovT
	func_53(var_6_int); // 0x20 NEW_2
	goto Label_52; // 0x22 Jump
	
Label_52:
	return 0; // 0x34 Return
	
Label_35:
	var_26_string = "button_daytasks"; // 0x23 PushS
	var_27_bool = var_2_string == var_26_string; // 0x24 Eq
	if(var_27_bool == 0) goto Label_44; // 0x25 JumpB
	var_0_int = 1; // 0x26 TMovI
	var_28_int = 0; // 0x27 PushV
	var_28_int = var_0_int; // 0x28 MovT
	func_53(var_28_int); // 0x29 NEW_2
	goto Label_52; // 0x2b Jump
	
Label_44:
	var_29_string = "button_othertasks"; // 0x2c PushS
	var_30_bool = var_2_string == var_29_string; // 0x2d Eq
	if(var_30_bool == 0) goto Label_52; // 0x2e JumpB
	var_0_int = 2; // 0x2f TMovI
	var_31_int = 0; // 0x30 PushV
	var_31_int = var_0_int; // 0x31 MovT
	func_53(var_31_int); // 0x32 NEW_2
}


main(var_0_int)
{
	GetDiarySelectedSection(var_0_int); // 0x0 Func
	var_1_string = "default"; // 0x2 PushS
	SetCursor(var_1_string); // 0x3 Func
	ShowCursor(); // 0x5 Func
	var_2_int = 0; // 0x7 PushV
	var_2_int = var_0_int; // 0x8 MovT
	func_53(var_2_int); // 0x9 NEW_2
	CaptureKeyboard(); // 0xb Func
	var_22_bool = 0; // 0xd PushB
	SetOwnerDraw(var_22_bool); // 0xe Func
	ProcessEvents(); // 0x10 Func
	return 0; // 0x12 Return
}


func_53(var_2_int)
{
	var_3_int = 0; // 0x36 PushI
	var_4_bool = var_2_int != var_3_int; // 0x37 Neq
	if(var_4_bool == 0) goto Label_62; // 0x38 JumpB
	var_5_int = 0; // 0x39 PushI
	var_6_string = "button_mission"; // 0x3a PushS
	SendMessage(var_5_int, var_6_string); // 0x3b Func
	goto Label_66; // 0x3d Jump
	
Label_66:
	var_7_int = 1; // 0x42 PushI
	var_8_bool = var_2_int != var_7_int; // 0x43 Neq
	if(var_8_bool == 0) goto Label_74; // 0x44 JumpB
	var_9_int = 0; // 0x45 PushI
	var_10_string = "button_daytasks"; // 0x46 PushS
	SendMessage(var_9_int, var_10_string); // 0x47 Func
	goto Label_78; // 0x49 Jump
	
Label_78:
	var_11_int = 2; // 0x4e PushI
	var_12_bool = var_2_int != var_11_int; // 0x4f Neq
	if(var_12_bool == 0) goto Label_86; // 0x50 JumpB
	var_13_int = 0; // 0x51 PushI
	var_14_string = "button_othertasks"; // 0x52 PushS
	SendMessage(var_13_int, var_14_string); // 0x53 Func
	goto Label_90; // 0x55 Jump
	
Label_90:
	var_15_string = "text"; // 0x5a PushS
	SendMessage(var_2_int, var_15_string); // 0x5b Func
	return 0; // 0x5d Return
	
Label_86:
	var_16_int = 1; // 0x56 PushI
	var_17_string = "button_othertasks"; // 0x57 PushS
	SendMessage(var_16_int, var_17_string); // 0x58 Func
	
Label_74:
	var_18_int = 1; // 0x4a PushI
	var_19_string = "button_daytasks"; // 0x4b PushS
	SendMessage(var_18_int, var_19_string); // 0x4c Func
	
Label_62:
	var_20_int = 1; // 0x3e PushI
	var_21_string = "button_mission"; // 0x3f PushS
	SendMessage(var_20_int, var_21_string); // 0x40 Func
}


