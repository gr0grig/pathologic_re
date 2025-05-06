task_0_event_14(var_0_int, var_1_object, var_2_object, var_3_object)
{
	return 0; // 0x44 Return
}


task_0_event_100(var_0_int, var_1_object, var_2_object, var_3_object, var_4_int)
{
	DestroyWindow(); // 0x46 Func
	return 0; // 0x48 Return
}


task_0_event_200(var_0_int, var_1_object, var_2_object, var_3_object, var_4_int, var_5_string, var_6_object)
{
	var_7_int = 0; var_8_int = 0; // 0x49 PushV
	var_9_string = "ok"; // 0x4a PushS
	var_10_bool = var_5_string == var_9_string; // 0x4b Eq
	if(var_10_bool == 0) goto Label_80; // 0x4c JumpB
	DestroyWindow(); // 0x4d Func
	goto Label_101; // 0x4f Jump
	
Label_101:
	return 2; // 0x65 Return
	
Label_80:
	var_11_string = "cancel"; // 0x50 PushS
	var_12_bool = var_5_string == var_11_string; // 0x51 Eq
	if(var_12_bool == 0) goto Label_88; // 0x52 JumpB
	clear(); // 0x53 TObjFunc
	DestroyWindow(); // 0x55 Func
	goto Label_101; // 0x57 Jump
	
Label_88:
	var_8_int = 0; // 0x58 MovI
	
Label_89:
	var_13_int = 4; // 0x59 PushI
	var_14_bool = var_8_int < var_13_int; // 0x5a LT
	if(var_14_bool == 0) goto Label_101; // 0x5b JumpB
	var_15_string = ""; var_16_int = 0; // 0x5c PushV
	var_16_int = var_8_int; // 0x5d Mov
	func_102(var_15_string, var_16_int); // 0x5e NEW_2
	var_27_bool = var_5_string == var_15_string; // 0x60 Eq
	if(var_27_bool == 0) goto Label_98; // 0x61 JumpB
	
Label_98:
	var_28_int = 1; // 0x62 PushI
	var_8_int = var_8_int + var_28_int; // 0x63 Add2
	goto Label_89; // 0x64 Jump
}


main(var_0_int, var_1_object, var_2_object, var_3_object)
{
	GetPlayerMoneyCount(var_0_int); // 0x0 Func
	var_4_string = "default"; // 0x2 PushS
	SetCursor(var_4_string); // 0x3 Func
	var_5_bool = 0; // 0x5 PushB
	SetOwnerDraw(var_5_bool); // 0x6 Func
	var_6_bool = 0; // 0x8 PushB
	SetNeedUpdate(var_6_bool); // 0x9 Func
	CaptureKeyboard(); // 0xb Func
	ShowCursor(); // 0xd Func
	GetChooseItems(var_3_object); // 0xf Func
	GetAdditionalData(var_2_object); // 0x11 Func
	GetReturnValue(var_1_object); // 0x13 Func
	func_27(var_3_object); // 0x16 NEW_2
	ProcessEvents(); // 0x18 Func
	return 0; // 0x1a Return
}


func_27(var_0_int)
{
	var_7_int = 0; var_8_int = 0; var_9_object = Obj(); var_10_int = 0; var_11_int = 0; var_12_int = 0; var_13_object = Obj(); var_14_int = 0; // 0x1b PushV
	var_15_string = "money_slot"; // 0x1c PushS
	SendMessage(var_0_int, var_15_string); // 0x1d Func
	size(var_11_int); // 0x1f TObjFunc
	var_12_int = 0; // 0x21 MovI
	
Label_34:
	var_16_bool = var_12_int < var_11_int; // 0x22 LT
	if(var_16_bool == 0) goto Label_53; // 0x23 JumpB
	var_17_int = 4; // 0x24 PushI
	var_18_bool = var_12_int >= var_17_int; // 0x25 GE
	if(var_18_bool == 0) goto Label_40; // 0x26 JumpB
	goto Label_53; // 0x27 Jump
	
Label_53:
	var_14_int = var_11_int; // 0x35 Mov
	
Label_54:
	var_19_int = 4; // 0x36 PushI
	var_20_bool = var_14_int < var_19_int; // 0x37 LT
	if(var_20_bool == 0) goto Label_67; // 0x38 JumpB
	var_21_int = 32768; // 0x39 PushI
	var_22_string = "cslot0"; // 0x3a PushS
	var_23_int = 1; // 0x3b PushI
	var_24_int = var_14_int + var_23_int; // 0x3c Add
	var_25_int = var_22_string + var_24_int; // 0x3d Add
	SendMessage(var_21_int, var_25_int); // 0x3e Func
	var_26_int = 1; // 0x40 PushI
	var_14_int = var_14_int + var_26_int; // 0x41 Add2
	goto Label_54; // 0x42 Jump
	
Label_67:
	return 8; // 0x43 Return
	
Label_40:
	get(var_13_object, var_12_int); // 0x28 TObjFunc
	var_27_int = 0; // 0x2a PushI
	var_28_string = "cslot0"; // 0x2b PushS
	var_29_int = 1; // 0x2c PushI
	var_30_int = var_12_int + var_29_int; // 0x2d Add
	var_31_int = var_28_string + var_30_int; // 0x2e Add
	SendMessage(var_27_int, var_31_int, var_13_object); // 0x2f Func
	var_13_object = 0; // 0x31 SetNull
	var_32_int = 1; // 0x32 PushI
	var_12_int = var_12_int + var_32_int; // 0x33 Add2
	goto Label_34; // 0x34 Jump
}


func_102(var_15_string, var_16_int)
{
	var_17_int = 1; // 0x67 PushI
	var_18_int = var_16_int + var_17_int; // 0x68 Add
	var_19_int = 10; // 0x69 PushI
	var_20_bool = var_18_int < var_19_int; // 0x6a LT
	if(var_20_bool == 0) goto Label_113; // 0x6b JumpB
	var_21_string = "slot0"; // 0x6c PushS
	var_22_int = 1; // 0x6d PushI
	var_23_int = var_16_int + var_22_int; // 0x6e Add
	var_15_string = var_21_string + var_23_int; // 0x6f Add2
	return 0; // 0x70 Return
	
Label_113:
	var_24_string = "slot"; // 0x71 PushS
	var_25_int = 1; // 0x72 PushI
	var_26_int = var_16_int + var_25_int; // 0x73 Add
	var_15_string = var_24_string + var_26_int; // 0x74 Add2
	return 0; // 0x75 Return
}


