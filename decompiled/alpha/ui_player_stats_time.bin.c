task_0_event_0(var_0_string, var_1_int, var_2_int)
{
	var_3_string = "default"; // 0x3a PushS
	var_4_float = 1.0; // 0x3b PushF
	var_5_float = 1.0; // 0x3c PushF
	var_6_float = 1.0; // 0x3d PushF
	Print(var_3_string, var_6_float, var_5_float, var_0_string, var_4_float, var_5_float, var_6_float); // 0x3e Func
	return 0; // 0x40 Return
}


main(var_0_string, var_1_int, var_2_int)
{
	var_3_string = ""; var_4_int = 0; var_5_int = 0; var_6_int = 0; var_7_int = 0; var_8_string = ""; var_9_int = 0; var_10_int = 0; var_11_int = 0; var_12_int = 0; // 0x0 PushV
	var_13_int = 0; // 0x1 PushV
	func_74(var_13_int); // 0x2 Call
	var_18_string = " : "; // 0x4 PushS
	var_19_int = var_13_int + var_18_string; // 0x5 Add
	var_0_string = var_0_string + var_19_int; // 0x6 Add2
	var_20_int = 0; // 0x7 PushV
	func_82(var_20_int); // 0x8 Call
	var_26_int = 10; // 0xa PushI
	var_27_bool = var_20_int < var_26_int; // 0xb LT
	if(var_27_bool == 0) goto Label_15; // 0xc JumpB
	var_28_string = "0"; // 0xd PushS
	var_0_string = var_0_string + var_28_string; // 0xe Add2
	
Label_15:
	var_29_int = 0; // 0xf PushV
	func_82(var_29_int); // 0x10 Call
	var_0_string = var_0_string + var_29_int; // 0x12 Add2
	var_30_int = 200004; // 0x13 PushI
	GetStringByID(var_8_string, var_30_int); // 0x14 Func
	var_31_string = " "; // 0x16 PushS
	var_32_int = var_31_string + var_8_string; // 0x17 Add
	var_33_string = " "; // 0x18 PushS
	var_34_int = var_32_int + var_33_string; // 0x19 Add
	var_35_int = 0; // 0x1a PushV
	func_65(var_35_int); // 0x1b Call
	var_41_int = var_34_int + var_35_int; // 0x1d Add
	var_0_string = var_0_string + var_41_int; // 0x1e Add2
	GetWindowSize(var_9_int, var_10_int); // 0x1f Func
	var_42_string = "default"; // 0x21 PushS
	GetTextWidth(var_11_int, var_42_string, var_0_string); // 0x22 Func
	var_9_int = var_9_int - var_11_int; // 0x24 Sub2
	var_43_int = 0; // 0x25 PushI
	var_44_bool = var_9_int < var_43_int; // 0x26 LT
	if(var_44_bool == 0) goto Label_41; // 0x27 JumpB
	var_9_int = 0; // 0x28 MovI
	
Label_41:
	var_1_int = var_9_int; // 0x29 TMov
	var_45_string = "default"; // 0x2a PushS
	GetFontHeight(var_12_int, var_45_string); // 0x2b Func
	var_46_int = var_10_int - var_12_int; // 0x2d Sub
	var_47_int = 2; // 0x2e PushI
	var_2_int = var_46_int / var_46_int; // 0x2f Div2
	var_48_int = 0; // 0x30 PushI
	var_49_bool = var_2_int < var_48_int; // 0x31 LT
	if(var_49_bool == 0) goto Label_52; // 0x32 JumpB
	var_2_int = 0; // 0x33 TMovI
	
Label_52:
	var_50_bool = 1; // 0x34 PushB
	SetOwnerDraw(var_50_bool); // 0x35 Func
	ProcessEvents(); // 0x37 Func
	return 10; // 0x39 Return
}


func_65(var_35_int)
{
	var_36_float = 0; var_37_float = 0; // 0x41 PushV
	GetGameTime(var_37_float); // 0x42 Func
	var_38_int = 1; // 0x44 PushI
	var_39_int = 0; // 0x45 PushV
	var_40_int = 24; // 0x46 PushI
	var_39_int = var_37_float / var_37_float; // 0x47 Div2
	var_35_int = var_38_int + var_39_int; // 0x48 Add2
	return 2; // 0x49 Return
}


func_74(var_13_int)
{
	var_14_float = 0; var_15_float = 0; // 0x4a PushV
	GetGameTime(var_15_float); // 0x4b Func
	var_16_int = 0; // 0x4d PushV
	var_16_int = var_15_float; // 0x4e Mov
	var_17_int = 24; // 0x4f PushI
	var_13_int = var_16_int % var_17_int; // 0x50 Mod2
	return 2; // 0x51 Return
}


func_82(var_20_int)
{
	var_21_float = 0; var_22_float = 0; // 0x52 PushV
	GetGameTime(var_22_float); // 0x53 Func
	var_23_int = 0; // 0x55 PushV
	var_23_int = var_22_float; // 0x56 Mov
	var_24_int = var_22_float - var_23_int; // 0x57 Sub
	var_25_int = 60; // 0x58 PushI
	var_20_int = var_24_int * var_25_int; // 0x59 Mult2
	return 2; // 0x5a Return
}


