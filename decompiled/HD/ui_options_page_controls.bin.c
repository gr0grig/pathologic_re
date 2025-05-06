task_0_event_0(var_0_string, var_1_string, var_2_string, var_3_int, var_4_int, var_5_int)
{
	var_6_string = "default"; // 0x3b PushS
	var_7_int = 15; // 0x3c PushI
	var_8_int = 12; // 0x3d PushI
	var_9_string = ""; var_10_int = 0; // 0x3e PushV
	var_10_int = 101; // 0x3f MovI
	func_156(var_9_string, var_10_int); // 0x40 NEW_2
	Print(var_6_string, var_7_int, var_8_int, var_9_string); // 0x42 Func
	var_13_string = "default"; // 0x44 PushS
	var_14_int = 12; // 0x45 PushI
	Print(var_13_string, var_5_int, var_14_int, var_0_string); // 0x46 Func
	var_15_string = "default"; // 0x48 PushS
	var_16_int = 15; // 0x49 PushI
	var_17_int = 64; // 0x4a PushI
	var_18_string = ""; var_19_int = 0; // 0x4b PushV
	var_19_int = 120; // 0x4c MovI
	func_156(var_18_string, var_19_int); // 0x4d NEW_2
	Print(var_15_string, var_16_int, var_17_int, var_18_string); // 0x4f Func
	var_20_string = "default"; // 0x51 PushS
	var_21_int = 64; // 0x52 PushI
	Print(var_20_string, var_4_int, var_21_int, var_21_int); // 0x53 Func
	var_22_string = "default"; // 0x55 PushS
	var_23_int = 15; // 0x56 PushI
	var_24_int = 112; // 0x57 PushI
	var_25_string = ""; var_26_int = 0; // 0x58 PushV
	var_26_int = 121; // 0x59 MovI
	func_156(var_25_string, var_26_int); // 0x5a NEW_2
	Print(var_22_string, var_23_int, var_24_int, var_25_string); // 0x5c Func
	var_27_string = "default"; // 0x5e PushS
	var_28_int = 112; // 0x5f PushI
	Print(var_27_string, var_3_int, var_28_int, var_27_string); // 0x60 Func
	var_29_string = "default"; // 0x62 PushS
	var_30_int = 15; // 0x63 PushI
	var_31_int = 164; // 0x64 PushI
	var_32_string = ""; var_33_int = 0; // 0x65 PushV
	var_33_int = 100; // 0x66 MovI
	func_156(var_32_string, var_33_int); // 0x67 NEW_2
	Print(var_29_string, var_30_int, var_31_int, var_32_string); // 0x69 Func
	var_34_string = "default"; // 0x6b PushS
	var_35_int = 15; // 0x6c PushI
	var_36_int = 186; // 0x6d PushI
	var_37_string = ""; var_38_int = 0; // 0x6e PushV
	var_38_int = 122; // 0x6f MovI
	func_156(var_37_string, var_38_int); // 0x70 NEW_2
	Print(var_34_string, var_35_int, var_36_int, var_37_string); // 0x72 Func
	var_39_string = "default"; // 0x74 PushS
	var_40_int = 15; // 0x75 PushI
	var_41_int = 210; // 0x76 PushI
	var_42_string = ""; var_43_int = 0; // 0x77 PushV
	var_43_int = 123; // 0x78 MovI
	func_156(var_42_string, var_43_int); // 0x79 NEW_2
	Print(var_39_string, var_40_int, var_41_int, var_42_string); // 0x7b Func
	return 0; // 0x7d Return
}


task_0_event_200(var_0_string, var_1_string, var_2_string, var_3_int, var_4_int, var_5_int, var_6_int, var_7_string, var_8_object)
{
	var_9_float = 0; var_10_float = 0; // 0x7e PushV
	var_11_bool = var_8_object != 0; // 0x7f NullNeq
	if(var_11_bool == 0) goto Label_155; // 0x80 JumpB
	var_12_int = 0; // 0x81 PushI
	get(var_10_float, var_12_int); // 0x82 ObjFunc
	var_13_int = 109; // 0x84 PushI
	var_14_bool = var_6_int == var_13_int; // 0x85 Eq
	if(var_14_bool == 0) goto Label_140; // 0x86 JumpB
	var_15_float = 0; // 0x87 PushV
	var_15_float = var_10_float; // 0x88 Mov
	func_0(var_9_float, var_10_float, var_15_float); // 0x89 NEW_2
	goto Label_155; // 0x8b Jump
	
Label_155:
	return 2; // 0x9b Return
	
Label_140:
	var_22_int = 110; // 0x8c PushI
	var_23_bool = var_6_int == var_22_int; // 0x8d Eq
	if(var_23_bool == 0) goto Label_148; // 0x8e JumpB
	var_24_float = 0; // 0x8f PushV
	var_24_float = var_10_float; // 0x90 Mov
	func_10(var_9_float, var_10_float, var_24_float); // 0x91 NEW_2
	goto Label_155; // 0x93 Jump
	
Label_148:
	var_31_int = 111; // 0x94 PushI
	var_32_bool = var_6_int == var_31_int; // 0x95 Eq
	if(var_32_bool == 0) goto Label_155; // 0x96 JumpB
	var_33_float = 0; // 0x97 PushV
	var_33_float = var_10_float; // 0x98 Mov
	func_20(var_9_float, var_10_float, var_33_float); // 0x99 NEW_2
}


main(var_0_string, var_1_string, var_2_string, var_3_int, var_4_int, var_5_int)
{
	var_6_bool = 1; // 0x32 PushB
	SetOwnerDraw(var_6_bool); // 0x33 Func
	func_30(); // 0x36 NEW_2
	ProcessEvents(); // 0x38 Func
	return 0; // 0x3a Return
}


func_0(var_0_string, var_3_int, var_13_float)
{
	var_14_int = 0; var_15_int = 0; // 0x0 PushV
	var_0_string = var_13_float; // 0x1 TMov
	var_16_string = "default"; // 0x2 PushS
	GetTextWidth(var_15_int, var_16_string, var_0_string); // 0x3 Func
	var_17_int = 305; // 0x5 PushI
	var_18_int = 2; // 0x6 PushI
	var_19_float = var_15_int / var_18_int; // 0x7 Div
	var_3_int = var_17_int - var_19_float; // 0x8 Sub2
	return 2; // 0x9 Return
}


func_10(var_1_string, var_4_int, var_20_float)
{
	var_21_int = 0; var_22_int = 0; // 0xa PushV
	var_1_string = var_20_float; // 0xb TMov
	var_23_string = "default"; // 0xc PushS
	GetTextWidth(var_22_int, var_23_string, var_23_string); // 0xd Func
	var_24_int = 305; // 0xf PushI
	var_25_int = 2; // 0x10 PushI
	var_26_float = var_22_int / var_25_int; // 0x11 Div
	var_4_int = var_24_int - var_26_float; // 0x12 Sub2
	return 2; // 0x13 Return
}


func_20(var_2_string, var_5_int, var_27_float)
{
	var_28_int = 0; var_29_int = 0; // 0x14 PushV
	var_2_string = var_27_float; // 0x15 TMov
	var_30_string = "default"; // 0x16 PushS
	GetTextWidth(var_29_int, var_30_string, var_29_int); // 0x17 Func
	var_31_int = 305; // 0x19 PushI
	var_32_int = 2; // 0x1a PushI
	var_33_float = var_29_int / var_32_int; // 0x1b Div
	var_5_int = var_31_int - var_33_float; // 0x1c Sub2
	return 2; // 0x1d Return
}


func_156(var_9_string, var_10_int)
{
	var_11_string = ""; var_12_string = ""; // 0x9c PushV
	GetStringByID(var_12_string, var_10_int); // 0x9d Func
	var_9_string = var_12_string; // 0x9f Mov
	return 2; // 0xa0 Return
}


func_30()
{
	var_7_float = 0; var_8_float = 0; var_9_float = 0; var_10_float = 0; var_11_float = 0; var_12_float = 0; // 0x1e PushV
	GetMouseSensivity(var_10_float); // 0x1f Func
	GetGamepadSensivity(var_11_float); // 0x21 Func
	GetGamepadUISensivity(var_12_float); // 0x23 Func
	var_13_float = 0; // 0x25 PushV
	var_13_float = var_10_float; // 0x26 Mov
	func_0(var_11_float, var_12_float, var_13_float); // 0x27 NEW_2
	var_20_float = 0; // 0x29 PushV
	var_20_float = var_11_float; // 0x2a Mov
	func_10(var_11_float, var_12_float, var_20_float); // 0x2b NEW_2
	var_27_float = 0; // 0x2d PushV
	var_27_float = var_12_float; // 0x2e Mov
	func_20(var_11_float, var_12_float, var_27_float); // 0x2f NEW_2
	return 6; // 0x31 Return
}


