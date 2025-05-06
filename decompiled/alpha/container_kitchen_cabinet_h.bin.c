task_0_event_0(var_0_object)
{
	var_1_bool = 0; var_2_bool = 0; var_3_bool = 0; var_4_bool = 0; // 0x30 PushV
	var_5_bool = 0; // 0x31 PushV
	func_99(var_5_bool); // 0x32 Call
	var_9_bool = var_5_bool == 0; // 0x34 Not
	if(var_9_bool == 0) goto Label_55; // 0x35 JumpB
	return 4; // 0x36 Return
	
Label_55:
	IsOnGround(var_3_bool); // 0x37 ObjFunc
	var_10_bool = var_3_bool; // 0x39 Push
	if(var_10_bool == 0) goto Label_67; // 0x3a JumpB
	EventDisable(0); // 0x3b EventDisable
	IsOverrideActive(var_4_bool); // 0x3c Func
	var_11_bool = var_4_bool == 0; // 0x3e Not
	if(var_11_bool == 0) goto Label_66; // 0x3f JumpB
	Barter(var_0_object); // 0x40 Func
	
Label_66:
	EventEnable(0); // 0x42 EventEnable
	
Label_67:
	return 4; // 0x43 Return
}


main()
{
	var_0_bool = 1; // 0x0 PushB
	SetVisibility(var_0_bool); // 0x1 Func
	var_1_string = ""; var_2_int = 0; var_3_int = 0; // 0x3 PushV
	var_1_string = "Knife"; // 0x4 MovS
	var_2_int = 1; // 0x5 MovI
	var_3_int = 10; // 0x6 MovI
	func_68(var_1_string, var_2_int, var_3_int); // 0x7 Call
	var_12_string = ""; var_13_int = 0; var_14_int = 0; // 0x9 PushV
	var_12_string = "Tvirin"; // 0xa MovS
	var_13_int = 1; // 0xb MovI
	var_14_int = 7; // 0xc MovI
	func_68(var_12_string, var_13_int, var_14_int); // 0xd Call
	var_15_string = ""; var_16_int = 0; var_17_int = 0; var_18_int = 0; // 0xf PushV
	var_15_string = "Lemon"; // 0x10 MovS
	var_16_int = 1; // 0x11 MovI
	var_17_int = 5; // 0x12 MovI
	var_18_int = 2; // 0x13 MovI
	func_79(var_15_string, var_16_int, var_17_int, var_18_int); // 0x14 Call
	var_29_string = ""; var_30_int = 0; var_31_int = 0; // 0x16 PushV
	var_29_string = "Funduk"; // 0x17 MovS
	var_30_int = 1; // 0x18 MovI
	var_31_int = 30; // 0x19 MovI
	func_68(var_29_string, var_30_int, var_31_int); // 0x1a Call
	var_32_string = ""; var_33_int = 0; var_34_int = 0; // 0x1c PushV
	var_32_string = "Peanut"; // 0x1d MovS
	var_33_int = 1; // 0x1e MovI
	var_34_int = 30; // 0x1f MovI
	func_68(var_32_string, var_33_int, var_34_int); // 0x20 Call
	var_35_string = ""; var_36_int = 0; var_37_int = 0; // 0x22 PushV
	var_35_string = "Walnut"; // 0x23 MovS
	var_36_int = 1; // 0x24 MovI
	var_37_int = 30; // 0x25 MovI
	func_68(var_35_string, var_36_int, var_37_int); // 0x26 Call
	func_44(); // 0x29 Call
	return 0; // 0x2b Return
}


func_99(var_5_bool)
{
	var_6_int = 0; var_7_int = 0; // 0x63 PushV
	var_8_string = "nouse_container"; // 0x64 PushS
	GetVariable(var_8_string, var_7_int); // 0x65 Func
	var_5_bool = !var_7_int; // 0x67 Not2
	return 2; // 0x68 Return
}


func_68(var_1_string, var_2_int, var_3_int)
{
	var_4_bool = 0; var_5_bool = 0; // 0x44 PushV
	var_6_bool = 0; var_7_int = 0; var_8_int = 0; // 0x45 PushV
	var_7_int = var_2_int; // 0x46 Mov
	var_8_int = var_3_int; // 0x47 Mov
	func_94(var_6_bool, var_7_int, var_8_int); // 0x48 Call
	if(var_6_bool == 0) goto Label_78; // 0x4a JumpB
	var_11_int = 0; // 0x4b PushI
	AddItem(var_5_bool, var_1_string, var_11_int); // 0x4c Func
	
Label_78:
	return 2; // 0x4e Return
}


func_44()
{
	
Label_44:
	Hold(); // 0x2c Func
	goto Label_44; // 0x2e Jump
}


func_79(var_15_string, var_16_int, var_17_int, var_18_int)
{
	var_19_int = 0; var_20_bool = 0; var_21_int = 0; var_22_bool = 0; // 0x4f PushV
	var_23_bool = 0; var_24_int = 0; var_25_int = 0; // 0x50 PushV
	var_24_int = var_16_int; // 0x51 Mov
	var_25_int = var_17_int; // 0x52 Mov
	func_94(var_23_bool, var_24_int, var_25_int); // 0x53 Call
	if(var_23_bool == 0) goto Label_93; // 0x55 JumpB
	irand(var_21_int, var_18_int); // 0x56 Func
	var_26_int = 0; // 0x58 PushI
	var_27_int = 1; // 0x59 PushI
	var_28_int = var_18_int + var_27_int; // 0x5a Add
	AddItem(var_22_bool, var_15_string, var_26_int, var_28_int); // 0x5b Func
	
Label_93:
	return 4; // 0x5d Return
}


func_94(var_6_bool, var_7_int, var_8_int)
{
	var_9_int = 0; var_10_int = 0; // 0x5e PushV
	irand(var_10_int, var_8_int); // 0x5f Func
	var_6_bool = var_10_int < var_7_int; // 0x61 LT2
	return 2; // 0x62 Return
}


