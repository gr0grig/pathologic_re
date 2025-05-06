task_0_event_0(var_0_object, var_1_int, var_2_int, var_3_int, var_4_int, var_5_int, var_6_string)
{
	var_7_bool = 0; var_8_bool = 0; var_9_bool = 0; var_10_bool = 0; // 0x10 PushV
	IsLost(var_9_bool); // 0x11 TObjFunc
	var_11_bool = var_9_bool; // 0x13 Push
	if(var_11_bool == 0) goto Label_26; // 0x14 JumpB
	Restore(var_10_bool); // 0x15 TObjFunc
	var_12_bool = var_10_bool == 0; // 0x17 Not
	if(var_12_bool == 0) goto Label_26; // 0x18 JumpB
	return 4; // 0x19 Return
	
Label_26:
	StretchBlit(var_10_bool, var_9_bool, var_8_bool, var_7_bool); // 0x1a TObjFunc
	var_13_string = "ocular"; // 0x1c PushS
	var_14_int = 0; // 0x1d PushI
	var_15_int = 0; // 0x1e PushI
	StretchBlit(var_13_string, var_14_int, var_15_int, var_13_string, var_10_bool); // 0x1f Func
	return 4; // 0x21 Return
}


task_0_event_200(var_0_object, var_1_int, var_2_int, var_3_int, var_4_int, var_5_int, var_6_string, var_7_int, var_8_string, var_9_object)
{
	var_10_bool = var_7_int == var_5_int; // 0x23 Eq
	if(var_10_bool == 0) goto Label_38; // 0x24 JumpB
	return 0; // 0x25 Return
	
Label_38:
	var_11_object = var_0_object; // 0x26 PushT
	if(var_11_object == 0) goto Label_42; // 0x27 JumpB
	Stop(); // 0x28 TObjFunc
	
Label_42:
	var_5_int = var_7_int; // 0x2a TMov
	func_47(var_6_string, var_7_int, var_8_string, var_9_object); // 0x2c NEW_2
	return 0; // 0x2e Return
}


main(var_0_object, var_1_int, var_2_int, var_3_int, var_4_int, var_5_int, var_6_string)
{
	var_1_int = 0; // 0x0 TMovI
	var_2_int = 0; // 0x1 TMovI
	var_5_int = 0; // 0x2 TMovI
	ClientToScreen(var_6_string, var_5_int); // 0x3 Func
	GetWindowSize(var_4_int, var_3_int); // 0x5 Func
	func_47(var_3_int, var_4_int, var_5_int, var_6_string); // 0x8 NEW_2
	var_23_bool = 1; // 0xa PushB
	SetOwnerDraw(var_23_bool); // 0xb Func
	ProcessEvents(); // 0xd Func
	return 0; // 0xf Return
}


func_47(var_0_object, var_1_int, var_5_int, var_6_string)
{
	ReleaseVideo(var_1_int); // 0x2f Func
	var_7_int = 0; // 0x31 PushI
	var_8_bool = var_5_int == var_7_int; // 0x32 Eq
	if(var_8_bool == 0) goto Label_54; // 0x33 JumpB
	var_6_string = "ui_no_blood.wmv"; // 0x34 TMovS
	goto Label_88; // 0x35 Jump
	
Label_88:
	LoadVideo(var_1_int); // 0x58 Func
	FindVideo(var_0_object, var_1_int); // 0x5a Func
	var_9_bool = 1; // 0x5c PushB
	Play(var_9_bool); // 0x5d TObjFunc
	return 0; // 0x5f Return
	
Label_54:
	var_10_int = 1; // 0x36 PushI
	var_11_bool = var_5_int == var_10_int; // 0x37 Eq
	if(var_11_bool == 0) goto Label_59; // 0x38 JumpB
	var_6_string = "ui_blood.wmv"; // 0x39 TMovS
	goto Label_88; // 0x3a Jump
	
Label_59:
	var_12_int = 2; // 0x3b PushI
	var_13_bool = var_5_int == var_12_int; // 0x3c Eq
	if(var_13_bool == 0) goto Label_64; // 0x3d JumpB
	var_6_string = "ui_diseased_blood.wmv"; // 0x3e TMovS
	goto Label_88; // 0x3f Jump
	
Label_64:
	var_14_int = 3; // 0x40 PushI
	var_15_bool = var_5_int == var_14_int; // 0x41 Eq
	if(var_15_bool == 0) goto Label_69; // 0x42 JumpB
	var_6_string = "ui_diseased_alive_blood.wmv"; // 0x43 TMovS
	goto Label_88; // 0x44 Jump
	
Label_69:
	var_16_int = 4; // 0x45 PushI
	var_17_bool = var_5_int == var_16_int; // 0x46 Eq
	if(var_17_bool == 0) goto Label_74; // 0x47 JumpB
	var_6_string = "ui_bull_blood.wmv"; // 0x48 TMovS
	goto Label_88; // 0x49 Jump
	
Label_74:
	var_18_int = 5; // 0x4a PushI
	var_19_bool = var_5_int == var_18_int; // 0x4b Eq
	if(var_19_bool == 0) goto Label_79; // 0x4c JumpB
	var_6_string = "ui_avroks_blood.wmv"; // 0x4d TMovS
	goto Label_88; // 0x4e Jump
	
Label_79:
	var_20_int = 6; // 0x4f PushI
	var_21_bool = var_5_int == var_20_int; // 0x50 Eq
	if(var_21_bool == 0) goto Label_84; // 0x51 JumpB
	var_6_string = "ui_simon_blood.wmv"; // 0x52 TMovS
	goto Label_88; // 0x53 Jump
	
Label_84:
	var_22_string = "WRONG BLOOD NUMBER"; // 0x54 PushS
	Trace(var_22_string); // 0x55 Func
	return 0; // 0x57 Return
}


