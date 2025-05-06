task_0_event_100(var_0_int, var_1_int)
{
	DestroyWindow(); // 0x26 Func
	return 0; // 0x28 Return
}


task_0_event_101(var_0_int, var_1_int)
{
	var_2_int = 266; // 0x2a PushI
	var_3_bool = var_1_int == var_2_int; // 0x2b Eq
	if(var_3_bool == 0) goto Label_57; // 0x2c JumpB
	var_4_int = 11; // 0x2d PushI
	var_5_bool = var_0_int < var_4_int; // 0x2e LT
	if(var_5_bool == 0) goto Label_51; // 0x2f JumpB
	var_6_int = 1; // 0x30 PushI
	var_0_int = var_0_int + var_6_int; // 0x31 Add2
	goto Label_52; // 0x32 Jump
	
Label_52:
	var_7_int = 0; // 0x34 PushV
	var_7_int = var_0_int; // 0x35 MovT
	func_126(var_7_int); // 0x36 NEW_2
	goto Label_87; // 0x38 Jump
	
Label_87:
	return 0; // 0x57 Return
	
Label_51:
	var_0_int = 0; // 0x33 TMovI
	
Label_57:
	var_25_int = 265; // 0x39 PushI
	var_26_bool = var_1_int == var_25_int; // 0x3a Eq
	if(var_26_bool == 0) goto Label_72; // 0x3b JumpB
	var_27_int = 0; // 0x3c PushI
	var_28_bool = var_0_int > var_27_int; // 0x3d GT
	if(var_28_bool == 0) goto Label_66; // 0x3e JumpB
	var_29_int = -1; // 0x3f PushI
	var_0_int = var_0_int + var_29_int; // 0x40 Add2
	goto Label_67; // 0x41 Jump
	
Label_67:
	var_30_int = 0; // 0x43 PushV
	var_30_int = var_0_int; // 0x44 MovT
	func_126(var_30_int); // 0x45 NEW_2
	goto Label_87; // 0x47 Jump
	
Label_66:
	var_0_int = 11; // 0x42 TMovI
	
Label_72:
	var_31_int = 267; // 0x48 PushI
	var_32_bool = var_1_int == var_31_int; // 0x49 Eq
	if(var_32_bool == 0) goto Label_80; // 0x4a JumpB
	var_33_int = 1001; // 0x4b PushI
	var_34_string = "text"; // 0x4c PushS
	SendMessage(var_33_int, var_34_string); // 0x4d Func
	goto Label_87; // 0x4f Jump
	
Label_80:
	var_35_int = 268; // 0x50 PushI
	var_36_bool = var_1_int == var_35_int; // 0x51 Eq
	if(var_36_bool == 0) goto Label_87; // 0x52 JumpB
	var_37_int = 1000; // 0x53 PushI
	var_38_string = "text"; // 0x54 PushS
	SendMessage(var_37_int, var_38_string); // 0x55 Func
}


task_0_event_102(var_0_int, var_1_int)
{
	var_2_int = 272; // 0x59 PushI
	var_3_bool = var_1_int == var_2_int; // 0x5a Eq
	if(var_3_bool == 0) goto Label_97; // 0x5b JumpB
	var_4_int = 1001; // 0x5c PushI
	var_5_string = "text"; // 0x5d PushS
	SendMessage(var_4_int, var_5_string); // 0x5e Func
	goto Label_104; // 0x60 Jump
	
Label_104:
	return 0; // 0x68 Return
	
Label_97:
	var_6_int = 274; // 0x61 PushI
	var_7_bool = var_1_int == var_6_int; // 0x62 Eq
	if(var_7_bool == 0) goto Label_104; // 0x63 JumpB
	var_8_int = 1000; // 0x64 PushI
	var_9_string = "text"; // 0x65 PushS
	SendMessage(var_8_int, var_9_string); // 0x66 Func
}


task_0_event_200(var_0_int, var_1_int, var_2_string, var_3_object)
{
	var_4_int = 0; var_5_int = 0; // 0x69 PushV
	var_5_int = 0; // 0x6a MovI
	
Label_107:
	var_6_int = 12; // 0x6b PushI
	var_7_bool = var_5_int < var_6_int; // 0x6c LT
	if(var_7_bool == 0) goto Label_121; // 0x6d JumpB
	var_8_string = "button_day"; // 0x6e PushS
	var_9_int = 1; // 0x6f PushI
	var_10_int = var_5_int + var_9_int; // 0x70 Add
	var_11_int = var_8_string + var_10_int; // 0x71 Add
	var_12_bool = var_2_string == var_11_int; // 0x72 Eq
	if(var_12_bool == 0) goto Label_118; // 0x73 JumpB
	var_0_int = var_5_int; // 0x74 TMov
	goto Label_121; // 0x75 Jump
	
Label_121:
	var_13_int = 0; // 0x79 PushV
	var_13_int = var_0_int; // 0x7a MovT
	func_126(var_13_int); // 0x7b NEW_2
	return 2; // 0x7d Return
	
Label_118:
	var_31_int = 1; // 0x76 PushI
	var_5_int = var_5_int + var_31_int; // 0x77 Add2
	goto Label_107; // 0x78 Jump
}


main(var_0_int)
{
	var_1_int = 0; // 0x0 PushV
	func_155(var_1_int); // 0x1 NEW_2
	var_7_int = 1; // 0x3 PushI
	var_0_int = var_1_int - var_7_int; // 0x4 Sub2
	var_8_bool = 0; // 0x5 PushV
	var_8_bool = 0; // 0x6 MovB
	var_9_int = 0; // 0x7 PushV
	func_164(var_9_int); // 0x8 NEW_2
	var_14_int = 7; // 0xa PushI
	var_15_bool = var_9_int < var_14_int; // 0xb LT
	if(var_15_bool == 0) goto Label_17; // 0xc JumpB
	var_16_int = 0; // 0xd PushI
	var_17_bool = var_0_int > var_16_int; // 0xe GT
	if(var_17_bool == 0) goto Label_17; // 0xf JumpB
	var_8_bool = 1; // 0x10 MovB
	
Label_17:
	if(var_8_bool == 0) goto Label_20; // 0x11 JumpB
	var_18_int = -1; // 0x12 PushI
	var_0_int = var_0_int + var_18_int; // 0x13 Add2
	
Label_20:
	var_19_string = "text"; // 0x14 PushS
	SendMessage(var_0_int, var_19_string); // 0x15 Func
	ShowCursor(); // 0x17 Func
	var_20_string = "default"; // 0x19 PushS
	SetCursor(var_20_string); // 0x1a Func
	var_21_int = 0; // 0x1c PushV
	var_21_int = var_0_int; // 0x1d MovT
	func_126(var_21_int); // 0x1e NEW_2
	CaptureKeyboard(); // 0x20 Func
	ProcessEvents(); // 0x22 Func
	return 0; // 0x24 Return
}


func_155(var_1_int)
{
	var_2_float = 0; var_3_float = 0; // 0x9b PushV
	GetGameTime(var_3_float); // 0x9c Func
	var_4_int = 1; // 0x9e PushI
	var_5_int = 0; // 0x9f PushV
	var_6_int = 24; // 0xa0 PushI
	var_5_int = var_3_float / var_3_float; // 0xa1 Div2
	var_1_int = var_4_int + var_5_int; // 0xa2 Add2
	return 2; // 0xa3 Return
}


func_164(var_9_int)
{
	var_10_float = 0; var_11_float = 0; // 0xa4 PushV
	GetGameTime(var_11_float); // 0xa5 Func
	var_12_int = 0; // 0xa7 PushV
	var_12_int = var_11_float; // 0xa8 Mov
	var_13_int = 24; // 0xa9 PushI
	var_9_int = var_12_int % var_13_int; // 0xaa Mod2
	return 2; // 0xab Return
}


func_126(var_21_int)
{
	var_22_int = 0; var_23_int = 0; // 0x7e PushV
	var_23_int = 0; // 0x7f MovI
	
Label_128:
	var_24_int = 12; // 0x80 PushI
	var_25_bool = var_23_int < var_24_int; // 0x81 LT
	if(var_25_bool == 0) goto Label_151; // 0x82 JumpB
	var_26_bool = var_23_int == var_21_int; // 0x83 Eq
	if(var_26_bool == 0) goto Label_141; // 0x84 JumpB
	var_27_int = 1; // 0x85 PushI
	var_28_string = "button_day"; // 0x86 PushS
	var_29_int = 1; // 0x87 PushI
	var_30_int = var_23_int + var_29_int; // 0x88 Add
	var_31_int = var_28_string + var_30_int; // 0x89 Add
	SendMessage(var_27_int, var_31_int); // 0x8a Func
	goto Label_148; // 0x8c Jump
	
Label_148:
	var_32_int = 1; // 0x94 PushI
	var_23_int = var_23_int + var_32_int; // 0x95 Add2
	goto Label_128; // 0x96 Jump
	
Label_141:
	var_33_int = 0; // 0x8d PushI
	var_34_string = "button_day"; // 0x8e PushS
	var_35_int = 1; // 0x8f PushI
	var_36_int = var_23_int + var_35_int; // 0x90 Add
	var_37_int = var_34_string + var_36_int; // 0x91 Add
	SendMessage(var_33_int, var_37_int); // 0x92 Func
	
Label_151:
	var_38_string = "text"; // 0x97 PushS
	SendMessage(var_21_int, var_38_string); // 0x98 Func
	return 2; // 0x9a Return
}


