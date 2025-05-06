task_0_event_0(var_0_object)
{
	var_1_string = ""; var_2_int = 0; var_3_string = ""; var_4_string = ""; var_5_object = Obj(); var_6_bool = 0; var_7_cvector = CVector(0,0,0); var_8_cvector = CVector(0,0,0); var_9_string = ""; var_10_int = 0; var_11_string = ""; var_12_string = ""; var_13_object = Obj(); var_14_bool = 0; var_15_cvector = CVector(0,0,0); var_16_cvector = CVector(0,0,0); // 0xd PushV
	var_17_bool = 0; // 0xe PushV
	func_100(var_17_bool); // 0xf NEW_2
	if(var_17_bool == 0) goto Label_25; // 0x11 JumpB
	var_22_string = "door_closed"; // 0x12 PushS
	PlaySound(var_22_string); // 0x13 Func
	var_23_string = "Door is locked"; // 0x15 PushS
	Trace(var_23_string); // 0x16 Func
	return 16; // 0x18 Return
	
Label_25:
	GetActorName(var_9_string); // 0x19 Func
	var_24_int = 0; var_25_string = ""; var_26_string = ""; // 0x1b PushV
	var_25_string = var_9_string; // 0x1c Mov
	var_26_string = "@"; // 0x1d MovS
	func_85(var_24_int, var_25_string, var_26_string); // 0x1e NEW_2
	var_10_int = var_24_int; // 0x1f Mov
	var_29_int = -1; // 0x21 PushI
	var_30_bool = var_10_int == var_29_int; // 0x22 Eq
	if(var_30_bool == 0) goto Label_40; // 0x23 JumpB
	var_31_string = "Wrong door name"; // 0x24 PushS
	Trace(var_31_string); // 0x25 Func
	return 16; // 0x27 Return
	
Label_40:
	var_32_string = ""; var_33_string = ""; var_34_int = 0; var_35_int = 0; // 0x28 PushV
	var_33_string = var_9_string; // 0x29 Mov
	var_34_int = 0; // 0x2a MovI
	var_35_int = var_10_int; // 0x2b Mov
	func_95(var_32_string, var_33_string, var_34_int, var_35_int); // 0x2c NEW_2
	var_11_string = var_32_string; // 0x2d Mov
	var_38_string = "pt_"; // 0x2f PushS
	var_39_string = ""; var_40_string = ""; var_41_int = 0; // 0x30 PushV
	var_40_string = var_9_string; // 0x31 Mov
	var_42_int = 1; // 0x32 PushI
	var_41_int = var_10_int + var_42_int; // 0x33 Add2
	func_90(var_39_string, var_40_string, var_41_int); // 0x34 NEW_2
	var_12_string = var_38_string + var_39_string; // 0x36 Add2
	GetSceneByName(var_13_object, var_11_string); // 0x37 Func
	var_45_bool = var_13_object == 0; // 0x39 NullEq
	if(var_45_bool == 0) goto Label_66; // 0x3a JumpB
	var_46_string = "Destination scene '"; // 0x3b PushS
	var_47_int = var_46_string + var_11_string; // 0x3c Add
	var_48_string = "' not found"; // 0x3d PushS
	var_49_int = var_47_int + var_48_string; // 0x3e Add
	Trace(var_49_int); // 0x3f Func
	return 16; // 0x41 Return
	
Label_66:
	GetLocator(var_12_string, var_14_bool, var_15_cvector, var_16_cvector); // 0x42 ObjFunc
	var_50_bool = var_14_bool; // 0x44 Push
	if(var_50_bool == 0) goto Label_76; // 0x45 JumpB
	var_51_string = "door_open"; // 0x46 PushS
	PlaySharedSound(var_51_string); // 0x47 Func
	Teleport(var_0_object, var_13_object, var_15_cvector, var_16_cvector); // 0x49 Func
	goto Label_83; // 0x4b Jump
	
Label_83:
	return 16; // 0x53 Return
	
Label_76:
	var_52_string = "Locator "; // 0x4c PushS
	var_53_int = var_52_string + var_12_string; // 0x4d Add
	var_54_string = " not found in destination scene "; // 0x4e PushS
	var_55_int = var_53_int + var_54_string; // 0x4f Add
	var_56_int = var_55_int + var_11_string; // 0x50 Add
	Trace(var_56_int); // 0x51 Func
}


main()
{
	DisableUpdate(); // 0x0 Func
	func_6(); // 0x3 NEW_2
	return 0; // 0x5 Return
}


func_100(var_17_bool)
{
	var_18_int = 0; var_19_int = 0; // 0x64 PushV
	var_20_string = "locked"; // 0x65 PushS
	GetProperty(var_20_string, var_19_int); // 0x66 Func
	var_21_int = 0; // 0x68 PushI
	var_17_bool = var_19_int != var_21_int; // 0x69 Neq2
	return 2; // 0x6a Return
}


func_6()
{
	var_0_bool = 1; // 0x6 PushB
	SetVisibility(var_0_bool); // 0x7 Func
	
Label_9:
	Hold(); // 0x9 Func
	goto Label_9; // 0xb Jump
}


func_85(var_24_int, var_25_string, var_26_string)
{
	var_27_int = 0; var_28_int = 0; // 0x55 PushV
	_strchr(var_28_int, var_25_string, var_26_string); // 0x56 Func
	var_24_int = var_28_int; // 0x58 Mov
	return 2; // 0x59 Return
}


func_90(var_39_string, var_40_string, var_41_int)
{
	var_43_string = ""; var_44_string = ""; // 0x5a PushV
	_strsub(var_44_string, var_40_string, var_41_int); // 0x5b Func
	var_39_string = var_44_string; // 0x5d Mov
	return 2; // 0x5e Return
}


func_95(var_32_string, var_33_string, var_34_int, var_35_int)
{
	var_36_string = ""; var_37_string = ""; // 0x5f PushV
	_strsub(var_37_string, var_33_string, var_34_int, var_35_int); // 0x60 Func
	var_32_string = var_37_string; // 0x62 Mov
	return 2; // 0x63 Return
}


