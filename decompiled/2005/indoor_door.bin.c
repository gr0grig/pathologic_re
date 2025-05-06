task_0_event_0(var_0_object)
{
	var_1_string = ""; var_2_int = 0; var_3_object = Obj(); var_4_object = Obj(); var_5_string = ""; var_6_string = ""; var_7_string = ""; var_8_bool = 0; var_9_cvector = CVector(0,0,0); var_10_cvector = CVector(0,0,0); var_11_object = Obj(); var_12_bool = 0; var_13_string = ""; var_14_int = 0; var_15_object = Obj(); var_16_object = Obj(); var_17_string = ""; var_18_string = ""; var_19_string = ""; var_20_bool = 0; var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_object = Obj(); var_24_bool = 0; // 0x9 PushV
	var_25_bool = 0; // 0xa PushV
	func_122(var_25_bool); // 0xb NEW_2
	if(var_25_bool == 0) goto Label_21; // 0xd JumpB
	var_30_string = "door_closed"; // 0xe PushS
	PlaySound(var_30_string); // 0xf Func
	var_31_string = "Door is locked"; // 0x11 PushS
	Trace(var_31_string); // 0x12 Func
	return 24; // 0x14 Return
	
Label_21:
	GetActorName(var_13_string); // 0x15 Func
	var_32_int = 0; var_33_string = ""; var_34_string = ""; // 0x17 PushV
	var_33_string = var_13_string; // 0x18 Mov
	var_34_string = "@"; // 0x19 MovS
	func_112(var_32_int, var_33_string, var_34_string); // 0x1a NEW_2
	var_14_int = var_32_int; // 0x1b Mov
	var_37_int = -1; // 0x1d PushI
	var_38_bool = var_14_int == var_37_int; // 0x1e Eq
	if(var_38_bool == 0) goto Label_36; // 0x1f JumpB
	var_39_string = "Wrong door name"; // 0x20 PushS
	Trace(var_39_string); // 0x21 Func
	return 24; // 0x23 Return
	
Label_36:
	GetMainOutdoorScene(var_15_object); // 0x24 Func
	var_40_bool = var_15_object == 0; // 0x26 NullEq
	if(var_40_bool == 0) goto Label_44; // 0x27 JumpB
	var_41_string = "No main outdoor scene"; // 0x28 PushS
	Trace(var_41_string); // 0x29 Func
	return 24; // 0x2b Return
	
Label_44:
	GetScene(var_16_object); // 0x2c Func
	GetName(var_17_string); // 0x2e ObjFunc
	var_42_string = ""; var_43_string = ""; var_44_int = 0; // 0x30 PushV
	var_43_string = var_13_string; // 0x31 Mov
	var_45_int = 1; // 0x32 PushI
	var_44_int = var_14_int + var_45_int; // 0x33 Add2
	func_117(var_42_string, var_43_string, var_44_int); // 0x34 NEW_2
	var_18_string = var_42_string; // 0x35 Mov
	var_48_string = "pt_"; // 0x37 PushS
	var_49_int = var_48_string + var_17_string; // 0x38 Add
	var_50_string = "@"; // 0x39 PushS
	var_51_int = var_49_int + var_50_string; // 0x3a Add
	var_19_string = var_51_int + var_18_string; // 0x3b Add2
	Trace(var_19_string); // 0x3c Func
	GetLocator(var_19_string, var_20_bool, var_21_cvector, var_22_cvector); // 0x3e ObjFunc
	var_52_bool = var_20_bool; // 0x40 Push
	if(var_52_bool == 0) goto Label_97; // 0x41 JumpB
	var_53_string = "@"; // 0x42 PushS
	var_54_int = var_17_string + var_53_string; // 0x43 Add
	var_55_int = var_54_int + var_18_string; // 0x44 Add
	FindActor(var_23_object, var_55_int); // 0x45 Func
	var_56_object = var_23_object; // 0x47 Push
	if(var_56_object == 0) goto Label_91; // 0x48 JumpB
	var_57_bool = 0; var_58_object = Obj(); var_59_string = ""; // 0x49 PushV
	var_58_object = var_23_object; // 0x4a Mov
	var_59_string = "lp"; // 0x4b MovS
	func_100(var_57_bool, var_58_object, var_59_string); // 0x4c NEW_2
	if(var_57_bool == 0) goto Label_91; // 0x4e JumpB
	var_66_string = "lp"; // 0x4f PushS
	GetProperty(var_66_string, var_24_bool); // 0x50 ObjFunc
	var_67_bool = var_24_bool; // 0x52 Push
	if(var_67_bool == 0) goto Label_91; // 0x53 JumpB
	var_68_string = "Outdoor door was unlocked"; // 0x54 PushS
	Trace(var_68_string); // 0x55 Func
	var_69_string = "locked"; // 0x57 PushS
	var_70_bool = 0; // 0x58 PushB
	SetProperty(var_69_string, var_70_bool); // 0x59 ObjFunc
	
Label_91:
	var_71_string = "door_open"; // 0x5b PushS
	PlaySharedSound(var_71_string); // 0x5c Func
	Teleport(var_0_object, var_15_object, var_21_cvector, var_22_cvector); // 0x5e Func
	var_23_object = 0; // 0x60 SetNull
	
Label_97:
	return 24; // 0x61 Return
}


main()
{
	DisableUpdate(); // 0x0 Func
	var_0_bool = 1; // 0x2 PushB
	SetVisibility(var_0_bool); // 0x3 Func
	
Label_5:
	Hold(); // 0x5 Func
	goto Label_5; // 0x7 Jump
}


func_112(var_32_int, var_33_string, var_34_string)
{
	var_35_int = 0; var_36_int = 0; // 0x70 PushV
	_strchr(var_36_int, var_33_string, var_34_string); // 0x71 Func
	var_32_int = var_36_int; // 0x73 Mov
	return 2; // 0x74 Return
}


func_122(var_25_bool)
{
	var_26_int = 0; var_27_int = 0; // 0x7a PushV
	var_28_string = "locked"; // 0x7b PushS
	GetProperty(var_28_string, var_27_int); // 0x7c Func
	var_29_int = 0; // 0x7e PushI
	var_25_bool = var_27_int != var_29_int; // 0x7f Neq2
	return 2; // 0x80 Return
}


func_100(var_57_bool, var_58_object, var_59_string)
{
	var_60_bool = 0; var_61_bool = 0; // 0x64 PushV
	var_62_string = "HasProperty"; // 0x65 PushS
	var_63_int = 2; // 0x66 PushI
	var_64_bool = IsFuncExist(var_58_object, var_62_string, var_63_int); // 0x67 FuncExist
	var_65_bool = var_64_bool == 0; // 0x68 Not
	if(var_65_bool == 0) goto Label_108; // 0x69 JumpB
	var_57_bool = 0; // 0x6a MovB
	return 2; // 0x6b Return
	
Label_108:
	HasProperty(var_59_string, var_61_bool); // 0x6c ObjFunc
	var_57_bool = var_61_bool; // 0x6e Mov
	return 2; // 0x6f Return
}


func_117(var_42_string, var_43_string, var_44_int)
{
	var_46_string = ""; var_47_string = ""; // 0x75 PushV
	_strsub(var_47_string, var_43_string, var_44_int); // 0x76 Func
	var_42_string = var_47_string; // 0x78 Mov
	return 2; // 0x79 Return
}


