task_0_event_0(var_0_object)
{
	var_1_bool = 0; var_2_bool = 0; var_3_bool = 0; var_4_bool = 0; // 0x3c PushV
	var_5_bool = 0; // 0x3d PushV
	func_111(var_5_bool); // 0x3e NEW_2
	var_9_bool = var_5_bool == 0; // 0x40 Not
	if(var_9_bool == 0) goto Label_67; // 0x41 JumpB
	return 4; // 0x42 Return
	
Label_67:
	IsOnGround(var_3_bool); // 0x43 ObjFunc
	var_10_bool = var_3_bool; // 0x45 Push
	if(var_10_bool == 0) goto Label_79; // 0x46 JumpB
	EventDisable(0); // 0x47 EventDisable
	IsOverrideActive(var_4_bool); // 0x48 Func
	var_11_bool = var_4_bool == 0; // 0x4a Not
	if(var_11_bool == 0) goto Label_78; // 0x4b JumpB
	Barter(var_0_object); // 0x4c Func
	
Label_78:
	EventEnable(0); // 0x4e EventEnable
	
Label_79:
	return 4; // 0x4f Return
}


main()
{
	var_0_float = 0; var_1_float = 0; // 0x0 PushV
	var_2_bool = 1; // 0x1 PushB
	SetVisibility(var_2_bool); // 0x2 Func
	func_26(); // 0x5 NEW_2
	var_37_int = 13; // 0x7 PushI
	rand(var_1_float, var_37_int); // 0x8 Func
	var_38_int = 1; // 0xa PushI
	var_39_int = var_1_float + var_38_int; // 0xb Add
	GameSleep(var_39_int); // 0xc Func
	
Label_14:
	func_26(); // 0xf NEW_2
	var_40_int = 2; // 0x11 PushI
	rand(var_1_float, var_40_int); // 0x12 Func
	var_41_int = 12; // 0x14 PushI
	var_42_int = var_1_float + var_41_int; // 0x15 Add
	GameSleep(var_42_int); // 0x16 Func
	goto Label_14; // 0x18 Jump
}


func_106(var_11_bool, var_12_int, var_13_int)
{
	var_14_int = 0; var_15_int = 0; // 0x6a PushV
	irand(var_15_int, var_13_int); // 0x6b Func
	var_11_bool = var_15_int < var_12_int; // 0x6d LT2
	return 2; // 0x6e Return
}


func_111(var_5_bool)
{
	var_6_int = 0; var_7_int = 0; // 0x6f PushV
	var_8_string = "nouse_container"; // 0x70 PushS
	GetVariable(var_8_string, var_7_int); // 0x71 Func
	var_5_bool = !var_7_int; // 0x73 Not2
	return 2; // 0x74 Return
}


func_80(var_19_string, var_20_int, var_21_int)
{
	var_22_bool = 0; var_23_bool = 0; // 0x50 PushV
	var_24_bool = 0; var_25_int = 0; var_26_int = 0; // 0x51 PushV
	var_25_int = var_20_int; // 0x52 Mov
	var_26_int = var_21_int; // 0x53 Mov
	func_106(var_24_bool, var_25_int, var_26_int); // 0x54 NEW_2
	if(var_24_bool == 0) goto Label_90; // 0x56 JumpB
	var_27_int = 0; // 0x57 PushI
	AddItem(var_23_bool, var_19_string, var_27_int); // 0x58 Func
	
Label_90:
	return 2; // 0x5a Return
}


func_26()
{
	RemoveAllItems(); // 0x1a Func
	var_3_string = ""; var_4_int = 0; var_5_int = 0; var_6_int = 0; // 0x1c PushV
	var_3_string = "bottle_empty"; // 0x1d MovS
	var_4_int = 1; // 0x1e MovI
	var_5_int = 2; // 0x1f MovI
	var_6_int = 1; // 0x20 MovI
	func_91(var_3_string, var_4_int, var_5_int, var_6_int); // 0x21 NEW_2
	var_19_string = ""; var_20_int = 0; var_21_int = 0; // 0x23 PushV
	var_19_string = "watch"; // 0x24 MovS
	var_20_int = 1; // 0x25 MovI
	var_21_int = 20; // 0x26 MovI
	func_80(var_19_string, var_20_int, var_21_int); // 0x27 NEW_2
	var_28_string = ""; var_29_int = 0; var_30_int = 0; // 0x29 PushV
	var_28_string = "razor"; // 0x2a MovS
	var_29_int = 1; // 0x2b MovI
	var_30_int = 12; // 0x2c MovI
	func_80(var_28_string, var_29_int, var_30_int); // 0x2d NEW_2
	var_31_string = ""; var_32_int = 0; var_33_int = 0; // 0x2f PushV
	var_31_string = "needle"; // 0x30 MovS
	var_32_int = 1; // 0x31 MovI
	var_33_int = 12; // 0x32 MovI
	func_80(var_31_string, var_32_int, var_33_int); // 0x33 NEW_2
	var_34_string = ""; var_35_int = 0; var_36_int = 0; // 0x35 PushV
	var_34_string = "gold_ring"; // 0x36 MovS
	var_35_int = 1; // 0x37 MovI
	var_36_int = 60; // 0x38 MovI
	func_80(var_34_string, var_35_int, var_36_int); // 0x39 NEW_2
	return 0; // 0x3b Return
}


func_91(var_3_string, var_4_int, var_5_int, var_6_int)
{
	var_7_int = 0; var_8_bool = 0; var_9_int = 0; var_10_bool = 0; // 0x5b PushV
	var_11_bool = 0; var_12_int = 0; var_13_int = 0; // 0x5c PushV
	var_12_int = var_4_int; // 0x5d Mov
	var_13_int = var_5_int; // 0x5e Mov
	func_106(var_11_bool, var_12_int, var_13_int); // 0x5f NEW_2
	if(var_11_bool == 0) goto Label_105; // 0x61 JumpB
	irand(var_9_int, var_6_int); // 0x62 Func
	var_16_int = 0; // 0x64 PushI
	var_17_int = 1; // 0x65 PushI
	var_18_int = var_9_int + var_17_int; // 0x66 Add
	AddItem(var_10_bool, var_3_string, var_16_int, var_18_int); // 0x67 Func
	
Label_105:
	return 4; // 0x69 Return
}


