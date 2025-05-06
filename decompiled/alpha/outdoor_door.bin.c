task_0_event_0(var_0_object)
{
	var_1_string = ""; var_2_int = 0; var_3_string = ""; var_4_string = ""; var_5_object = Obj(); var_6_bool = 0; var_7_cvector = CVector(0,0,0); var_8_cvector = CVector(0,0,0); var_9_string = ""; var_10_int = 0; var_11_string = ""; var_12_string = ""; var_13_object = Obj(); var_14_bool = 0; var_15_cvector = CVector(0,0,0); var_16_cvector = CVector(0,0,0); // 0x7 PushV
	var_17_bool = 0; // 0x8 PushV
	func_94(var_17_bool); // 0x9 Call
	if(var_17_bool == 0) goto Label_19; // 0xb JumpB
	var_22_string = "door_closed"; // 0xc PushS
	PlaySound(var_22_string); // 0xd Func
	var_23_string = "Door is locked"; // 0xf PushS
	Trace(var_23_string); // 0x10 Func
	return 16; // 0x12 Return
	
Label_19:
	GetActorName(var_9_string); // 0x13 Func
	var_24_int = 0; var_25_string = ""; var_26_string = ""; // 0x15 PushV
	var_25_string = var_9_string; // 0x16 Mov
	var_26_string = "@"; // 0x17 MovS
	func_79(var_24_int, var_25_string, var_26_string); // 0x18 Call
	var_10_int = var_24_int; // 0x19 Mov
	var_29_int = -1; // 0x1b PushI
	var_30_bool = var_10_int == var_29_int; // 0x1c Eq
	if(var_30_bool == 0) goto Label_34; // 0x1d JumpB
	var_31_string = "Wrong door name"; // 0x1e PushS
	Trace(var_31_string); // 0x1f Func
	return 16; // 0x21 Return
	
Label_34:
	var_32_string = ""; var_33_string = ""; var_34_int = 0; var_35_int = 0; // 0x22 PushV
	var_33_string = var_9_string; // 0x23 Mov
	var_34_int = 0; // 0x24 MovI
	var_35_int = var_10_int; // 0x25 Mov
	func_89(var_32_string, var_33_string, var_34_int, var_35_int); // 0x26 Call
	var_11_string = var_32_string; // 0x27 Mov
	var_38_string = "pt_"; // 0x29 PushS
	var_39_string = ""; var_40_string = ""; var_41_int = 0; // 0x2a PushV
	var_40_string = var_9_string; // 0x2b Mov
	var_42_int = 1; // 0x2c PushI
	var_41_int = var_10_int + var_42_int; // 0x2d Add2
	func_84(var_39_string, var_40_string, var_41_int); // 0x2e Call
	var_12_string = var_38_string + var_39_string; // 0x30 Add2
	GetSceneByName(var_13_object, var_11_string); // 0x31 Func
	var_45_bool = var_13_object == 0; // 0x33 NullEq
	if(var_45_bool == 0) goto Label_60; // 0x34 JumpB
	var_46_string = "Destination scene '"; // 0x35 PushS
	var_47_int = var_46_string + var_11_string; // 0x36 Add
	var_48_string = "' not found"; // 0x37 PushS
	var_49_int = var_47_int + var_48_string; // 0x38 Add
	Trace(var_49_int); // 0x39 Func
	return 16; // 0x3b Return
	
Label_60:
	GetLocator(var_12_string, var_14_bool, var_15_cvector, var_16_cvector); // 0x3c ObjFunc
	var_50_bool = var_14_bool; // 0x3e Push
	if(var_50_bool == 0) goto Label_70; // 0x3f JumpB
	var_51_string = "door_open"; // 0x40 PushS
	PlaySharedSound(var_51_string); // 0x41 Func
	Teleport(var_0_object, var_13_object, var_15_cvector, var_16_cvector); // 0x43 Func
	goto Label_77; // 0x45 Jump
	
Label_77:
	return 16; // 0x4d Return
	
Label_70:
	var_52_string = "Locator "; // 0x46 PushS
	var_53_int = var_52_string + var_12_string; // 0x47 Add
	var_54_string = " not found in destination scene "; // 0x48 PushS
	var_55_int = var_53_int + var_54_string; // 0x49 Add
	var_56_int = var_55_int + var_11_string; // 0x4a Add
	Trace(var_56_int); // 0x4b Func
}


main()
{
	var_0_bool = 1; // 0x0 PushB
	SetVisibility(var_0_bool); // 0x1 Func
	
Label_3:
	Hold(); // 0x3 Func
	goto Label_3; // 0x5 Jump
}


func_89(var_32_string, var_33_string, var_34_int, var_35_int)
{
	var_36_string = ""; var_37_string = ""; // 0x59 PushV
	_strsub(var_37_string, var_33_string, var_34_int, var_35_int); // 0x5a Func
	var_32_string = var_37_string; // 0x5c Mov
	return 2; // 0x5d Return
}


func_84(var_39_string, var_40_string, var_41_int)
{
	var_43_string = ""; var_44_string = ""; // 0x54 PushV
	_strsub(var_44_string, var_40_string, var_41_int); // 0x55 Func
	var_39_string = var_44_string; // 0x57 Mov
	return 2; // 0x58 Return
}


func_94(var_17_bool)
{
	var_18_int = 0; var_19_int = 0; // 0x5e PushV
	var_20_string = "locked"; // 0x5f PushS
	GetProperty(var_20_string, var_19_int); // 0x60 Func
	var_21_int = 0; // 0x62 PushI
	var_17_bool = var_19_int != var_21_int; // 0x63 Neq2
	return 2; // 0x64 Return
}


func_79(var_24_int, var_25_string, var_26_string)
{
	var_27_int = 0; var_28_int = 0; // 0x4f PushV
	_strchr(var_28_int, var_25_string, var_26_string); // 0x50 Func
	var_24_int = var_28_int; // 0x52 Mov
	return 2; // 0x53 Return
}


