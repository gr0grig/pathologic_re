task_0_event_0(var_0_object)
{
	var_1_bool = 0; var_2_bool = 0; var_3_bool = 0; var_4_bool = 0; // 0x32 PushV
	var_5_bool = 0; // 0x33 PushV
	func_70(var_5_bool); // 0x34 Call
	var_9_bool = var_5_bool == 0; // 0x36 Not
	if(var_9_bool == 0) goto Label_57; // 0x37 JumpB
	return 4; // 0x38 Return
	
Label_57:
	IsOnGround(var_3_bool); // 0x39 ObjFunc
	var_10_bool = var_3_bool; // 0x3b Push
	if(var_10_bool == 0) goto Label_69; // 0x3c JumpB
	EventDisable(0); // 0x3d EventDisable
	IsOverrideActive(var_4_bool); // 0x3e Func
	var_11_bool = var_4_bool == 0; // 0x40 Not
	if(var_11_bool == 0) goto Label_68; // 0x41 JumpB
	Barter(var_0_object); // 0x42 Func
	
Label_68:
	EventEnable(0); // 0x44 EventEnable
	
Label_69:
	return 4; // 0x45 Return
}


main()
{
	var_0_float = 0; var_1_float = 0; // 0x0 PushV
	var_2_bool = 1; // 0x1 PushB
	SetVisibility(var_2_bool); // 0x2 Func
	func_26(); // 0x5 Call
	var_18_int = 13; // 0x7 PushI
	rand(var_1_float, var_18_int); // 0x8 Func
	var_19_int = 1; // 0xa PushI
	var_20_int = var_1_float + var_19_int; // 0xb Add
	GameSleep(var_20_int); // 0xc Func
	
Label_14:
	func_26(); // 0xf Call
	var_21_int = 2; // 0x11 PushI
	rand(var_1_float, var_21_int); // 0x12 Func
	var_22_int = 12; // 0x14 PushI
	var_23_int = var_1_float + var_22_int; // 0x15 Add
	GameSleep(var_23_int); // 0x16 Func
	goto Label_14; // 0x18 Jump
}


func_26()
{
	var_3_int = 0; var_4_bool = 0; var_5_int = 0; var_6_bool = 0; // 0x1a PushV
	RemoveAllItems(); // 0x1b Func
	var_7_int = 20; // 0x1d PushI
	irand(var_5_int, var_7_int); // 0x1e Func
	var_8_int = 15; // 0x20 PushI
	var_9_bool = var_5_int > var_8_int; // 0x21 GT
	if(var_9_bool == 0) goto Label_41; // 0x22 JumpB
	var_10_string = "bottle_empty"; // 0x23 PushS
	var_11_int = 0; // 0x24 PushI
	var_12_int = 2; // 0x25 PushI
	AddItem(var_6_bool, var_10_string, var_11_int, var_12_int); // 0x26 Func
	goto Label_49; // 0x28 Jump
	
Label_49:
	return 4; // 0x31 Return
	
Label_41:
	var_13_int = 3; // 0x29 PushI
	var_14_bool = var_5_int > var_13_int; // 0x2a GT
	if(var_14_bool == 0) goto Label_49; // 0x2b JumpB
	var_15_string = "bottle_empty"; // 0x2c PushS
	var_16_int = 0; // 0x2d PushI
	var_17_int = 1; // 0x2e PushI
	AddItem(var_6_bool, var_15_string, var_16_int, var_17_int); // 0x2f Func
}


func_70(var_5_bool)
{
	var_6_int = 0; var_7_int = 0; // 0x46 PushV
	var_8_string = "nouse_container"; // 0x47 PushS
	GetVariable(var_8_string, var_7_int); // 0x48 Func
	var_5_bool = !var_7_int; // 0x4a Not2
	return 2; // 0x4b Return
}


