task_0_event_0(var_0_object, var_1_int, var_2_int, var_3_int, var_4_int, var_5_int)
{
	StretchBlit(var_5_int, var_4_int, var_3_int, var_2_int); // 0x10 TObjFunc
	var_6_string = "ocular"; // 0x12 PushS
	var_7_int = 0; // 0x13 PushI
	var_8_int = 0; // 0x14 PushI
	Blit(var_6_string, var_7_int, var_8_int); // 0x15 Func
	return 0; // 0x17 Return
}


task_0_event_200(var_0_object, var_1_int, var_2_int, var_3_int, var_4_int, var_5_int, var_6_int, var_7_string, var_8_object)
{
	var_9_bool = var_6_int == var_5_int; // 0x19 Eq
	if(var_9_bool == 0) goto Label_28; // 0x1a JumpB
	return 0; // 0x1b Return
	
Label_28:
	var_10_object = var_0_object; // 0x1c PushT
	if(var_10_object == 0) goto Label_32; // 0x1d JumpB
	Stop(); // 0x1e TObjFunc
	
Label_32:
	var_5_int = var_6_int; // 0x20 TMov
	func_37(var_7_string, var_8_object); // 0x22 Call
	return 0; // 0x24 Return
}


main(var_0_object, var_1_int, var_2_int, var_3_int, var_4_int, var_5_int)
{
	var_1_int = 0; // 0x0 TMovI
	var_2_int = 0; // 0x1 TMovI
	var_5_int = 0; // 0x2 TMovI
	ClientToScreen(var_5_int, var_4_int); // 0x3 Func
	GetWindowSize(var_3_int, var_2_int); // 0x5 Func
	func_37(var_4_int, var_5_int); // 0x8 Call
	var_24_bool = 1; // 0xa PushB
	SetOwnerDraw(var_24_bool); // 0xb Func
	ProcessEvents(); // 0xd Func
	return 0; // 0xf Return
}


func_37(var_0_object, var_5_int)
{
	var_6_int = 0; // 0x25 PushI
	var_7_bool = var_5_int == var_6_int; // 0x26 Eq
	if(var_7_bool == 0) goto Label_51; // 0x27 JumpB
	var_8_string = "ui_no_blood.wmv"; // 0x28 PushS
	var_9_bool = 1; // 0x29 PushB
	LoadImage(var_8_string, var_9_bool); // 0x2a Func
	var_10_string = "ui_no_blood.wmv"; // 0x2c PushS
	FindVideo(var_0_object, var_10_string); // 0x2d Func
	var_11_bool = 1; // 0x2f PushB
	Play(var_11_bool); // 0x30 TObjFunc
	goto Label_78; // 0x32 Jump
	
Label_78:
	return 0; // 0x4e Return
	
Label_51:
	var_12_int = 1; // 0x33 PushI
	var_13_bool = var_5_int == var_12_int; // 0x34 Eq
	if(var_13_bool == 0) goto Label_65; // 0x35 JumpB
	var_14_string = "ui_good_blood.wmv"; // 0x36 PushS
	var_15_bool = 1; // 0x37 PushB
	LoadImage(var_14_string, var_15_bool); // 0x38 Func
	var_16_string = "ui_good_blood.wmv"; // 0x3a PushS
	FindVideo(var_0_object, var_16_string); // 0x3b Func
	var_17_bool = 1; // 0x3d PushB
	Play(var_17_bool); // 0x3e TObjFunc
	goto Label_78; // 0x40 Jump
	
Label_65:
	var_18_int = 2; // 0x41 PushI
	var_19_bool = var_5_int == var_18_int; // 0x42 Eq
	if(var_19_bool == 0) goto Label_78; // 0x43 JumpB
	var_20_string = "ui_bad_blood.wmv"; // 0x44 PushS
	var_21_bool = 1; // 0x45 PushB
	LoadImage(var_20_string, var_21_bool); // 0x46 Func
	var_22_string = "ui_bad_blood.wmv"; // 0x48 PushS
	FindVideo(var_0_object, var_22_string); // 0x49 Func
	var_23_bool = 1; // 0x4b PushB
	Play(var_23_bool); // 0x4c TObjFunc
}


