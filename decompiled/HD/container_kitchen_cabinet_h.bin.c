task_0_event_0(var_0_object)
{
	var_1_bool = 0; var_2_bool = 0; var_3_bool = 0; var_4_bool = 0; // 0x45 PushV
	var_5_bool = 0; // 0x46 PushV
	var_5_bool = 1; // 0x47 MovB
	var_6_bool = var_0_object == 0; // 0x48 Not
	if(var_6_bool == 0) goto Label_80; // 0x49 JumpB
	var_7_bool = 0; // 0x4a PushV
	func_126(var_7_bool); // 0x4b NEW_2
	var_11_bool = var_7_bool == 0; // 0x4d Not
	if(var_11_bool == 0) goto Label_80; // 0x4e JumpB
	var_5_bool = 0; // 0x4f MovB
	
Label_80:
	if(var_5_bool == 0) goto Label_82; // 0x50 JumpB
	return 4; // 0x51 Return
	
Label_82:
	IsOnGround(var_3_bool); // 0x52 ObjFunc
	var_12_bool = var_3_bool; // 0x54 Push
	if(var_12_bool == 0) goto Label_94; // 0x55 JumpB
	EventDisable(0); // 0x56 EventDisable
	IsOverrideActive(var_4_bool); // 0x57 Func
	var_13_bool = var_4_bool == 0; // 0x59 Not
	if(var_13_bool == 0) goto Label_93; // 0x5a JumpB
	Barter(var_0_object); // 0x5b Func
	
Label_93:
	EventEnable(0); // 0x5d EventEnable
	
Label_94:
	return 4; // 0x5e Return
}


main()
{
	var_0_bool = 1; // 0x0 PushB
	SetVisibility(var_0_bool); // 0x1 Func
	DisableUpdate(); // 0x3 Func
	var_1_string = ""; var_2_int = 0; var_3_int = 0; // 0x5 PushV
	var_1_string = "Knife"; // 0x6 MovS
	var_2_int = 1; // 0x7 MovI
	var_3_int = 15; // 0x8 MovI
	func_95(var_1_string, var_2_int, var_3_int); // 0x9 NEW_2
	var_12_string = ""; var_13_int = 0; var_14_int = 0; // 0xb PushV
	var_12_string = "tvirin"; // 0xc MovS
	var_13_int = 1; // 0xd MovI
	var_14_int = 7; // 0xe MovI
	func_95(var_12_string, var_13_int, var_14_int); // 0xf NEW_2
	var_15_string = ""; var_16_int = 0; var_17_int = 0; var_18_int = 0; // 0x11 PushV
	var_15_string = "lemon"; // 0x12 MovS
	var_16_int = 1; // 0x13 MovI
	var_17_int = 5; // 0x14 MovI
	var_18_int = 2; // 0x15 MovI
	func_106(var_15_string, var_16_int, var_17_int, var_18_int); // 0x16 NEW_2
	var_29_string = ""; var_30_int = 0; var_31_int = 0; // 0x18 PushV
	var_29_string = "funduk"; // 0x19 MovS
	var_30_int = 1; // 0x1a MovI
	var_31_int = 30; // 0x1b MovI
	func_95(var_29_string, var_30_int, var_31_int); // 0x1c NEW_2
	var_32_string = ""; var_33_int = 0; var_34_int = 0; // 0x1e PushV
	var_32_string = "peanut"; // 0x1f MovS
	var_33_int = 1; // 0x20 MovI
	var_34_int = 30; // 0x21 MovI
	func_95(var_32_string, var_33_int, var_34_int); // 0x22 NEW_2
	var_35_string = ""; var_36_int = 0; var_37_int = 0; // 0x24 PushV
	var_35_string = "walnut"; // 0x25 MovS
	var_36_int = 1; // 0x26 MovI
	var_37_int = 30; // 0x27 MovI
	func_95(var_35_string, var_36_int, var_37_int); // 0x28 NEW_2
	var_38_string = ""; var_39_int = 0; var_40_int = 0; // 0x2a PushV
	var_38_string = "rifle_ammo"; // 0x2b MovS
	var_39_int = 1; // 0x2c MovI
	var_40_int = 10; // 0x2d MovI
	func_95(var_38_string, var_39_int, var_40_int); // 0x2e NEW_2
	var_41_string = ""; var_42_int = 0; var_43_int = 0; var_44_int = 0; // 0x30 PushV
	var_41_string = "revolver_ammo"; // 0x31 MovS
	var_42_int = 1; // 0x32 MovI
	var_43_int = 10; // 0x33 MovI
	var_44_int = 2; // 0x34 MovI
	func_106(var_41_string, var_42_int, var_43_int, var_44_int); // 0x35 NEW_2
	var_45_string = ""; var_46_int = 0; var_47_int = 0; // 0x37 PushV
	var_45_string = "samopal_ammo"; // 0x38 MovS
	var_46_int = 1; // 0x39 MovI
	var_47_int = 13; // 0x3a MovI
	func_95(var_45_string, var_46_int, var_47_int); // 0x3b NEW_2
	func_65(); // 0x3e NEW_2
	return 0; // 0x40 Return
}


func_65()
{
	
Label_65:
	Hold(); // 0x41 Func
	goto Label_65; // 0x43 Jump
}


func_106(var_15_string, var_16_int, var_17_int, var_18_int)
{
	var_19_int = 0; var_20_bool = 0; var_21_int = 0; var_22_bool = 0; // 0x6a PushV
	var_23_bool = 0; var_24_int = 0; var_25_int = 0; // 0x6b PushV
	var_24_int = var_16_int; // 0x6c Mov
	var_25_int = var_17_int; // 0x6d Mov
	func_121(var_23_bool, var_24_int, var_25_int); // 0x6e NEW_2
	if(var_23_bool == 0) goto Label_120; // 0x70 JumpB
	irand(var_21_int, var_18_int); // 0x71 Func
	var_26_int = 0; // 0x73 PushI
	var_27_int = 1; // 0x74 PushI
	var_28_int = var_21_int + var_27_int; // 0x75 Add
	AddItem(var_22_bool, var_15_string, var_26_int, var_28_int); // 0x76 Func
	
Label_120:
	return 4; // 0x78 Return
}


func_121(var_6_bool, var_7_int, var_8_int)
{
	var_9_int = 0; var_10_int = 0; // 0x79 PushV
	irand(var_10_int, var_8_int); // 0x7a Func
	var_6_bool = var_10_int < var_7_int; // 0x7c LT2
	return 2; // 0x7d Return
}


func_126(var_7_bool)
{
	var_8_int = 0; var_9_int = 0; // 0x7e PushV
	var_10_string = "nouse_container"; // 0x7f PushS
	GetVariable(var_10_string, var_9_int); // 0x80 Func
	var_7_bool = !var_9_int; // 0x82 Not2
	return 2; // 0x83 Return
}


func_95(var_1_string, var_2_int, var_3_int)
{
	var_4_bool = 0; var_5_bool = 0; // 0x5f PushV
	var_6_bool = 0; var_7_int = 0; var_8_int = 0; // 0x60 PushV
	var_7_int = var_2_int; // 0x61 Mov
	var_8_int = var_3_int; // 0x62 Mov
	func_121(var_6_bool, var_7_int, var_8_int); // 0x63 NEW_2
	if(var_6_bool == 0) goto Label_105; // 0x65 JumpB
	var_11_int = 0; // 0x66 PushI
	AddItem(var_5_bool, var_1_string, var_11_int); // 0x67 Func
	
Label_105:
	return 2; // 0x69 Return
}


