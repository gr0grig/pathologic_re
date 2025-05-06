task_0_event_14(var_0_object)
{
	return 0; // 0x3b Return
}


task_0_event_100(var_0_object, var_1_int)
{
	DestroyWindow(); // 0x3d Func
	return 0; // 0x3f Return
}


task_0_event_200(var_0_object, var_1_int, var_2_string, var_3_object)
{
	var_4_int = 0; var_5_int = 0; var_6_object = Obj(); var_7_int = 0; var_8_int = 0; var_9_object = Obj(); // 0x40 PushV
	var_7_int = 0; // 0x41 MovI
	
Label_66:
	var_10_int = 4; // 0x42 PushI
	var_11_bool = var_7_int < var_10_int; // 0x43 LT
	if(var_11_bool == 0) goto Label_91; // 0x44 JumpB
	var_12_string = "cslot0"; // 0x45 PushS
	var_13_int = 1; // 0x46 PushI
	var_14_int = var_7_int + var_13_int; // 0x47 Add
	var_15_int = var_12_string + var_14_int; // 0x48 Add
	var_16_bool = var_2_string == var_15_int; // 0x49 Eq
	if(var_16_bool == 0) goto Label_88; // 0x4a JumpB
	size(var_8_int); // 0x4b TObjFunc
	var_17_bool = var_7_int < var_8_int; // 0x4d LT
	if(var_17_bool == 0) goto Label_88; // 0x4e JumpB
	GetReturnValue(var_9_object); // 0x4f Func
	clear(); // 0x51 ObjFunc
	add(var_7_int); // 0x53 ObjFunc
	DestroyWindow(); // 0x55 Func
	var_9_object = 0; // 0x57 SetNull
	
Label_88:
	var_18_int = 1; // 0x58 PushI
	var_7_int = var_7_int + var_18_int; // 0x59 Add2
	goto Label_66; // 0x5a Jump
	
Label_91:
	return 6; // 0x5b Return
}


main(var_0_object)
{
	var_1_string = "default"; // 0x0 PushS
	SetCursor(var_1_string); // 0x1 Func
	var_2_bool = 0; // 0x3 PushB
	SetOwnerDraw(var_2_bool); // 0x4 Func
	var_3_bool = 0; // 0x6 PushB
	SetNeedUpdate(var_3_bool); // 0x7 Func
	CaptureKeyboard(); // 0x9 Func
	ShowCursor(); // 0xb Func
	GetChooseItems(var_0_object); // 0xd Func
	func_21(); // 0x10 NEW_2
	ProcessEvents(); // 0x12 Func
	return 0; // 0x14 Return
}


func_21()
{
	var_4_int = 0; var_5_int = 0; var_6_object = Obj(); var_7_int = 0; var_8_int = 0; var_9_int = 0; var_10_object = Obj(); var_11_int = 0; // 0x15 PushV
	size(var_8_int); // 0x16 TObjFunc
	var_9_int = 0; // 0x18 MovI
	
Label_25:
	var_12_bool = var_9_int < var_8_int; // 0x19 LT
	if(var_12_bool == 0) goto Label_44; // 0x1a JumpB
	var_13_int = 4; // 0x1b PushI
	var_14_bool = var_9_int >= var_13_int; // 0x1c GE
	if(var_14_bool == 0) goto Label_31; // 0x1d JumpB
	goto Label_44; // 0x1e Jump
	
Label_44:
	var_11_int = var_8_int; // 0x2c Mov
	
Label_45:
	var_15_int = 4; // 0x2d PushI
	var_16_bool = var_11_int < var_15_int; // 0x2e LT
	if(var_16_bool == 0) goto Label_58; // 0x2f JumpB
	var_17_int = 32768; // 0x30 PushI
	var_18_string = "cslot0"; // 0x31 PushS
	var_19_int = 1; // 0x32 PushI
	var_20_int = var_11_int + var_19_int; // 0x33 Add
	var_21_int = var_18_string + var_20_int; // 0x34 Add
	SendMessage(var_17_int, var_21_int); // 0x35 Func
	var_22_int = 1; // 0x37 PushI
	var_11_int = var_11_int + var_22_int; // 0x38 Add2
	goto Label_45; // 0x39 Jump
	
Label_58:
	return 8; // 0x3a Return
	
Label_31:
	get(var_10_object, var_9_int); // 0x1f TObjFunc
	var_23_int = 0; // 0x21 PushI
	var_24_string = "cslot0"; // 0x22 PushS
	var_25_int = 1; // 0x23 PushI
	var_26_int = var_9_int + var_25_int; // 0x24 Add
	var_27_int = var_24_string + var_26_int; // 0x25 Add
	SendMessage(var_23_int, var_27_int, var_10_object); // 0x26 Func
	var_10_object = 0; // 0x28 SetNull
	var_28_int = 1; // 0x29 PushI
	var_9_int = var_9_int + var_28_int; // 0x2a Add2
	goto Label_25; // 0x2b Jump
}


