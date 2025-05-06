main()
{
	var_0_int = 0; var_1_int = 0; var_2_int = 0; var_3_int = 0; // 0x0 PushV
	var_4_string = "visir"; // 0x1 PushS
	GetProperty(var_4_string, var_2_int); // 0x2 Func
	var_5_bool = 0; // 0x4 PushV
	var_5_bool = 0; // 0x5 MovB
	var_6_int = var_2_int; // 0x6 Push
	if(var_6_int == 0) goto Label_12; // 0x7 JumpB
	var_7_int = 4; // 0x8 PushI
	var_8_bool = var_2_int < var_7_int; // 0x9 LT
	if(var_8_bool == 0) goto Label_12; // 0xa JumpB
	var_5_bool = 1; // 0xb MovB
	
Label_12:
	if(var_5_bool == 0) goto Label_27; // 0xc JumpB
	var_9_string = "visir"; // 0xd PushS
	var_10_int = 1; // 0xe PushI
	var_11_int = var_2_int + var_10_int; // 0xf Add
	SetProperty(var_9_string, var_11_int); // 0x10 Func
	var_12_int = GlobalVars[0]; // 0x12 PushGE
	var_13_int = GlobalVars[1]; // 0x13 PushGE
	var_14_int = GlobalVars[2]; // 0x14 PushGE
	GetItemPosByID(var_3_int, var_12_int, var_13_int, var_14_int); // 0x15 Func
	var_15_int = 1; // 0x17 PushI
	var_16_int = GlobalVars[2]; // 0x18 PushGE
	RemoveItem(var_3_int, var_15_int, var_16_int); // 0x19 Func
	
Label_27:
	return 4; // 0x1b Return
}


