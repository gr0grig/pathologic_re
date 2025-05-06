task_0_event_0(var_0_string, var_1_string, var_2_int, var_3_int)
{
	var_4_int = 0; var_5_int = 0; var_6_int = 0; var_7_int = 0; var_8_int = 0; var_9_int = 0; // 0x18 PushV
	var_8_int = 0; // 0x19 MovI
	var_10_string = "default"; // 0x1a PushS
	var_11_int = 50; // 0x1b PushI
	var_12_int = var_2_int - var_11_int; // 0x1c Sub
	GetTextHeightInWidth(var_7_int, var_10_string, var_12_int, var_0_string); // 0x1d Func
	var_13_int = 18; // 0x1f PushI
	var_14_int = var_7_int + var_13_int; // 0x20 Add
	var_8_int = var_8_int + var_14_int; // 0x21 Add2
	var_15_string = "default"; // 0x22 PushS
	var_16_int = 50; // 0x23 PushI
	var_17_int = var_2_int - var_16_int; // 0x24 Sub
	GetTextHeightInWidth(var_7_int, var_15_string, var_17_int, var_17_int); // 0x25 Func
	var_8_int = var_8_int + var_7_int; // 0x27 Add2
	var_18_int = var_3_int - var_8_int; // 0x28 Sub
	var_19_int = 2; // 0x29 PushI
	var_9_int = var_18_int / var_18_int; // 0x2a Div2
	var_8_int = var_9_int; // 0x2b Mov
	var_20_string = "default"; // 0x2c PushS
	var_21_int = 25; // 0x2d PushI
	var_22_int = 50; // 0x2e PushI
	var_23_int = var_2_int - var_22_int; // 0x2f Sub
	var_24_float = 1.0; // 0x30 PushF
	var_25_float = 1.0; // 0x31 PushF
	var_26_float = 1.0; // 0x32 PushF
	PrintInWidth(var_7_int, var_20_string, var_21_int, var_8_int, var_23_int, var_0_string, var_24_float, var_25_float, var_26_float); // 0x33 Func
	var_27_int = 18; // 0x35 PushI
	var_28_int = var_7_int + var_27_int; // 0x36 Add
	var_8_int = var_8_int + var_28_int; // 0x37 Add2
	var_29_string = "default"; // 0x38 PushS
	var_30_int = 25; // 0x39 PushI
	var_31_int = 50; // 0x3a PushI
	var_32_int = var_2_int - var_31_int; // 0x3b Sub
	var_33_float = 0.8; // 0x3c PushF
	var_34_float = 0.8; // 0x3d PushF
	var_35_float = 0.8; // 0x3e PushF
	PrintInWidth(var_7_int, var_29_string, var_30_int, var_8_int, var_32_int, var_35_float, var_33_float, var_34_float, var_35_float); // 0x3f Func
	return 6; // 0x41 Return
}


main(var_0_string, var_1_string, var_2_int, var_3_int)
{
	var_4_object = Obj(); var_5_int = 0; var_6_int = 0; var_7_object = Obj(); var_8_int = 0; var_9_int = 0; // 0x0 PushV
	GetConversation(var_7_object); // 0x1 Func
	var_10_bool = var_7_object == 0; // 0x3 NullEq
	if(var_10_bool == 0) goto Label_9; // 0x4 JumpB
	var_11_string = "null conversation"; // 0x5 PushS
	UITrace(var_11_string); // 0x6 Func
	return 6; // 0x8 Return
	
Label_9:
	GetNPCName(var_0_string); // 0x9 ObjFunc
	_strupr(var_0_string); // 0xb Func
	GetNPCDescription(var_9_int); // 0xd ObjFunc
	GetWindowSize(var_8_int, var_7_object); // 0xf Func
	var_12_bool = 1; // 0x11 PushB
	SetOwnerDraw(var_12_bool); // 0x12 Func
	ProcessEvents(); // 0x14 Func
	return 6; // 0x16 Return
}


