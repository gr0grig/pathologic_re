task_0_event_23(var_0_object)
{
	var_1_bool = 0; var_2_string = ""; var_3_int = 0; var_4_string = ""; var_5_string = ""; var_6_object = Obj(); var_7_bool = 0; var_8_cvector = CVector(0,0,0); var_9_cvector = CVector(0,0,0); var_10_bool = 0; var_11_string = ""; var_12_int = 0; var_13_string = ""; var_14_string = ""; var_15_object = Obj(); var_16_bool = 0; var_17_cvector = CVector(0,0,0); var_18_cvector = CVector(0,0,0); // 0x4 PushV
	IsPlayerActor(var_0_object, var_10_bool); // 0x5 Func
	var_19_bool = var_10_bool == 0; // 0x7 Not
	if(var_19_bool == 0) goto Label_10; // 0x8 JumpB
	return 18; // 0x9 Return
	
Label_10:
	var_20_bool = 0; // 0xa PushV
	func_90(var_20_bool); // 0xb Call
	if(var_20_bool == 0) goto Label_18; // 0xd JumpB
	var_25_string = "Trigger is locked"; // 0xe PushS
	Trace(var_25_string); // 0xf Func
	return 18; // 0x11 Return
	
Label_18:
	GetActorName(var_11_string); // 0x12 Func
	var_26_int = 0; var_27_string = ""; var_28_string = ""; // 0x14 PushV
	var_27_string = var_11_string; // 0x15 Mov
	var_28_string = "@"; // 0x16 MovS
	func_75(var_26_int, var_27_string, var_28_string); // 0x17 Call
	var_12_int = var_26_int; // 0x18 Mov
	var_31_int = -1; // 0x1a PushI
	var_32_bool = var_12_int == var_31_int; // 0x1b Eq
	if(var_32_bool == 0) goto Label_33; // 0x1c JumpB
	var_33_string = "Wrong door name"; // 0x1d PushS
	Trace(var_33_string); // 0x1e Func
	return 18; // 0x20 Return
	
Label_33:
	var_34_string = ""; var_35_string = ""; var_36_int = 0; var_37_int = 0; // 0x21 PushV
	var_35_string = var_11_string; // 0x22 Mov
	var_36_int = 0; // 0x23 MovI
	var_37_int = var_12_int; // 0x24 Mov
	func_85(var_34_string, var_35_string, var_36_int, var_37_int); // 0x25 Call
	var_13_string = var_34_string; // 0x26 Mov
	var_40_string = "pt_"; // 0x28 PushS
	var_41_string = ""; var_42_string = ""; var_43_int = 0; // 0x29 PushV
	var_42_string = var_11_string; // 0x2a Mov
	var_44_int = 1; // 0x2b PushI
	var_43_int = var_12_int + var_44_int; // 0x2c Add2
	func_80(var_41_string, var_42_string, var_43_int); // 0x2d Call
	var_14_string = var_40_string + var_41_string; // 0x2f Add2
	GetSceneByName(var_15_object, var_13_string); // 0x30 Func
	var_47_bool = var_15_object == 0; // 0x32 NullEq
	if(var_47_bool == 0) goto Label_59; // 0x33 JumpB
	var_48_string = "Destination scene '"; // 0x34 PushS
	var_49_int = var_48_string + var_13_string; // 0x35 Add
	var_50_string = "' not found"; // 0x36 PushS
	var_51_int = var_49_int + var_50_string; // 0x37 Add
	Trace(var_51_int); // 0x38 Func
	return 18; // 0x3a Return
	
Label_59:
	GetLocator(var_14_string, var_16_bool, var_17_cvector, var_18_cvector); // 0x3b ObjFunc
	var_52_bool = var_16_bool; // 0x3d Push
	if(var_52_bool == 0) goto Label_66; // 0x3e JumpB
	Teleport(var_0_object, var_15_object, var_17_cvector, var_18_cvector); // 0x3f Func
	goto Label_73; // 0x41 Jump
	
Label_73:
	return 18; // 0x49 Return
	
Label_66:
	var_53_string = "Locator "; // 0x42 PushS
	var_54_int = var_53_string + var_14_string; // 0x43 Add
	var_55_string = " not found in destination scene "; // 0x44 PushS
	var_56_int = var_54_int + var_55_string; // 0x45 Add
	var_57_int = var_56_int + var_13_string; // 0x46 Add
	Trace(var_57_int); // 0x47 Func
}


main()
{
	
Label_0:
	Hold(); // 0x0 Func
	goto Label_0; // 0x2 Jump
}


func_80(var_41_string, var_42_string, var_43_int)
{
	var_45_string = ""; var_46_string = ""; // 0x50 PushV
	_strsub(var_46_string, var_42_string, var_43_int); // 0x51 Func
	var_41_string = var_46_string; // 0x53 Mov
	return 2; // 0x54 Return
}


func_90(var_20_bool)
{
	var_21_int = 0; var_22_int = 0; // 0x5a PushV
	var_23_string = "locked"; // 0x5b PushS
	GetProperty(var_23_string, var_22_int); // 0x5c Func
	var_24_int = 0; // 0x5e PushI
	var_20_bool = var_22_int != var_24_int; // 0x5f Neq2
	return 2; // 0x60 Return
}


func_75(var_26_int, var_27_string, var_28_string)
{
	var_29_int = 0; var_30_int = 0; // 0x4b PushV
	_strchr(var_30_int, var_27_string, var_28_string); // 0x4c Func
	var_26_int = var_30_int; // 0x4e Mov
	return 2; // 0x4f Return
}


func_85(var_34_string, var_35_string, var_36_int, var_37_int)
{
	var_38_string = ""; var_39_string = ""; // 0x55 PushV
	_strsub(var_39_string, var_35_string, var_36_int, var_37_int); // 0x56 Func
	var_34_string = var_39_string; // 0x58 Mov
	return 2; // 0x59 Return
}


