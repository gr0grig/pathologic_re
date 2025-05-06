task_0_event_0(var_0_object)
{
	var_1_bool = 0; var_2_bool = 0; var_3_bool = 0; var_4_bool = 0; // 0x24 PushV
	var_5_bool = 0; // 0x25 PushV
	func_76(var_5_bool); // 0x26 NEW_2
	var_9_bool = var_5_bool == 0; // 0x28 Not
	if(var_9_bool == 0) goto Label_43; // 0x29 JumpB
	return 4; // 0x2a Return
	
Label_43:
	IsOnGround(var_3_bool); // 0x2b ObjFunc
	var_10_bool = var_3_bool; // 0x2d Push
	if(var_10_bool == 0) goto Label_55; // 0x2e JumpB
	EventDisable(0); // 0x2f EventDisable
	IsOverrideActive(var_4_bool); // 0x30 Func
	var_11_bool = var_4_bool == 0; // 0x32 Not
	if(var_11_bool == 0) goto Label_54; // 0x33 JumpB
	Barter(var_0_object); // 0x34 Func
	
Label_54:
	EventEnable(0); // 0x36 EventEnable
	
Label_55:
	return 4; // 0x37 Return
}


main()
{
	var_0_float = 0; var_1_float = 0; // 0x0 PushV
	var_2_bool = 1; // 0x1 PushB
	SetVisibility(var_2_bool); // 0x2 Func
	func_26(); // 0x5 NEW_2
	var_19_int = 13; // 0x7 PushI
	rand(var_1_float, var_19_int); // 0x8 Func
	var_20_int = 1; // 0xa PushI
	var_21_int = var_1_float + var_20_int; // 0xb Add
	GameSleep(var_21_int); // 0xc Func
	
Label_14:
	func_26(); // 0xf NEW_2
	var_22_int = 2; // 0x11 PushI
	rand(var_1_float, var_22_int); // 0x12 Func
	var_23_int = 12; // 0x14 PushI
	var_24_int = var_1_float + var_23_int; // 0x15 Add
	GameSleep(var_24_int); // 0x16 Func
	goto Label_14; // 0x18 Jump
}


func_56(var_3_string, var_4_int, var_5_int, var_6_int)
{
	var_7_int = 0; var_8_bool = 0; var_9_int = 0; var_10_bool = 0; // 0x38 PushV
	var_11_bool = 0; var_12_int = 0; var_13_int = 0; // 0x39 PushV
	var_12_int = var_4_int; // 0x3a Mov
	var_13_int = var_5_int; // 0x3b Mov
	func_71(var_11_bool, var_12_int, var_13_int); // 0x3c NEW_2
	if(var_11_bool == 0) goto Label_70; // 0x3e JumpB
	irand(var_9_int, var_6_int); // 0x3f Func
	var_16_int = 0; // 0x41 PushI
	var_17_int = 1; // 0x42 PushI
	var_18_int = var_9_int + var_17_int; // 0x43 Add
	AddItem(var_10_bool, var_3_string, var_16_int, var_18_int); // 0x44 Func
	
Label_70:
	return 4; // 0x46 Return
}


func_26()
{
	RemoveAllItems(); // 0x1a Func
	var_3_string = ""; var_4_int = 0; var_5_int = 0; var_6_int = 0; // 0x1c PushV
	var_3_string = "bottle_empty"; // 0x1d MovS
	var_4_int = 1; // 0x1e MovI
	var_5_int = 2; // 0x1f MovI
	var_6_int = 2; // 0x20 MovI
	func_56(var_3_string, var_4_int, var_5_int, var_6_int); // 0x21 NEW_2
	return 0; // 0x23 Return
}


func_76(var_5_bool)
{
	var_6_int = 0; var_7_int = 0; // 0x4c PushV
	var_8_string = "nouse_container"; // 0x4d PushS
	GetVariable(var_8_string, var_7_int); // 0x4e Func
	var_5_bool = !var_7_int; // 0x50 Not2
	return 2; // 0x51 Return
}


func_71(var_11_bool, var_12_int, var_13_int)
{
	var_14_int = 0; var_15_int = 0; // 0x47 PushV
	irand(var_15_int, var_13_int); // 0x48 Func
	var_11_bool = var_15_int < var_12_int; // 0x4a LT2
	return 2; // 0x4b Return
}


