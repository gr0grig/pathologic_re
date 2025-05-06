task_0_event_0(var_0_object)
{
	var_1_bool = 0; var_2_bool = 0; var_3_bool = 0; var_4_bool = 0; // 0x50 PushV
	var_5_bool = 0; // 0x51 PushV
	func_100(var_5_bool); // 0x52 Call
	var_9_bool = var_5_bool == 0; // 0x54 Not
	if(var_9_bool == 0) goto Label_87; // 0x55 JumpB
	return 4; // 0x56 Return
	
Label_87:
	IsOnGround(var_3_bool); // 0x57 ObjFunc
	var_10_bool = var_3_bool; // 0x59 Push
	if(var_10_bool == 0) goto Label_99; // 0x5a JumpB
	EventDisable(0); // 0x5b EventDisable
	IsOverrideActive(var_4_bool); // 0x5c Func
	var_11_bool = var_4_bool == 0; // 0x5e Not
	if(var_11_bool == 0) goto Label_98; // 0x5f JumpB
	Barter(var_0_object); // 0x60 Func
	
Label_98:
	EventEnable(0); // 0x62 EventEnable
	
Label_99:
	return 4; // 0x63 Return
}


main()
{
	var_0_float = 0; var_1_float = 0; // 0x0 PushV
	var_2_bool = 1; // 0x1 PushB
	SetVisibility(var_2_bool); // 0x2 Func
	func_26(); // 0x5 Call
	var_34_int = 13; // 0x7 PushI
	rand(var_1_float, var_34_int); // 0x8 Func
	var_35_int = 1; // 0xa PushI
	var_36_int = var_1_float + var_35_int; // 0xb Add
	GameSleep(var_36_int); // 0xc Func
	
Label_14:
	func_26(); // 0xf Call
	var_37_int = 2; // 0x11 PushI
	rand(var_1_float, var_37_int); // 0x12 Func
	var_38_int = 12; // 0x14 PushI
	var_39_int = var_1_float + var_38_int; // 0x15 Add
	GameSleep(var_39_int); // 0x16 Func
	goto Label_14; // 0x18 Jump
}


func_26()
{
	var_3_int = 0; var_4_bool = 0; var_5_int = 0; var_6_bool = 0; // 0x1a PushV
	RemoveAllItems(); // 0x1b Func
	var_7_int = 20; // 0x1d PushI
	irand(var_5_int, var_7_int); // 0x1e Func
	var_8_int = 18; // 0x20 PushI
	var_9_bool = var_5_int > var_8_int; // 0x21 GT
	if(var_9_bool == 0) goto Label_40; // 0x22 JumpB
	var_10_string = "watch"; // 0x23 PushS
	var_11_int = 0; // 0x24 PushI
	AddItem(var_6_bool, var_10_string, var_11_int); // 0x25 Func
	goto Label_57; // 0x27 Jump
	
Label_57:
	var_12_int = 20; // 0x39 PushI
	irand(var_5_int, var_12_int); // 0x3a Func
	var_13_int = 16; // 0x3c PushI
	var_14_bool = var_5_int > var_13_int; // 0x3d GT
	if(var_14_bool == 0) goto Label_68; // 0x3e JumpB
	var_15_string = "razor"; // 0x3f PushS
	var_16_int = 0; // 0x40 PushI
	var_17_int = 1; // 0x41 PushI
	AddItem(var_6_bool, var_15_string, var_16_int, var_17_int); // 0x42 Func
	
Label_68:
	var_18_int = 60; // 0x44 PushI
	irand(var_5_int, var_18_int); // 0x45 Func
	var_19_int = 0; // 0x47 PushI
	var_20_bool = var_5_int == var_19_int; // 0x48 Eq
	if(var_20_bool == 0) goto Label_79; // 0x49 JumpB
	var_21_string = "gold_ring"; // 0x4a PushS
	var_22_int = 0; // 0x4b PushI
	var_23_int = 1; // 0x4c PushI
	AddItem(var_6_bool, var_21_string, var_22_int, var_23_int); // 0x4d Func
	
Label_79:
	return 4; // 0x4f Return
	
Label_40:
	var_24_int = 10; // 0x28 PushI
	var_25_bool = var_5_int > var_24_int; // 0x29 GT
	if(var_25_bool == 0) goto Label_49; // 0x2a JumpB
	var_26_string = "bottle_empty"; // 0x2b PushS
	var_27_int = 0; // 0x2c PushI
	var_28_int = 2; // 0x2d PushI
	AddItem(var_6_bool, var_26_string, var_27_int, var_28_int); // 0x2e Func
	goto Label_57; // 0x30 Jump
	
Label_49:
	var_29_int = 3; // 0x31 PushI
	var_30_bool = var_5_int > var_29_int; // 0x32 GT
	if(var_30_bool == 0) goto Label_57; // 0x33 JumpB
	var_31_string = "bottle_empty"; // 0x34 PushS
	var_32_int = 0; // 0x35 PushI
	var_33_int = 1; // 0x36 PushI
	AddItem(var_6_bool, var_31_string, var_32_int, var_33_int); // 0x37 Func
}


func_100(var_5_bool)
{
	var_6_int = 0; var_7_int = 0; // 0x64 PushV
	var_8_string = "nouse_container"; // 0x65 PushS
	GetVariable(var_8_string, var_7_int); // 0x66 Func
	var_5_bool = !var_7_int; // 0x68 Not2
	return 2; // 0x69 Return
}


