task_0_event_0(var_0_object)
{
	var_1_int = 0; var_2_string = ""; var_3_int = 0; var_4_string = ""; var_5_string = ""; var_6_object = Obj(); var_7_bool = 0; var_8_cvector = CVector(0,0,0); var_9_cvector = CVector(0,0,0); var_10_int = 0; var_11_string = ""; var_12_int = 0; var_13_string = ""; var_14_string = ""; var_15_object = Obj(); var_16_bool = 0; var_17_cvector = CVector(0,0,0); var_18_cvector = CVector(0,0,0); // 0xd PushV
	var_19_int = 0; // 0xe PushV
	func_151(var_19_int); // 0xf NEW_2
	var_10_int = var_19_int; // 0x10 Mov
	var_23_int = 0; // 0x12 PushI
	var_24_bool = var_10_int == var_23_int; // 0x13 Eq
	if(var_24_bool == 0) goto Label_37; // 0x14 JumpB
	var_25_bool = 0; // 0x15 PushV
	func_144(var_25_bool); // 0x16 NEW_2
	if(var_25_bool == 0) goto Label_36; // 0x18 JumpB
	var_30_string = "door_closed"; // 0x19 PushS
	PlaySound(var_30_string); // 0x1a Func
	var_31_int = 0; // 0x1c PushV
	var_31_int = 403; // 0x1d MovI
	func_134(var_31_int); // 0x1e NEW_2
	var_35_string = "Door is locked"; // 0x20 PushS
	Trace(var_35_string); // 0x21 Func
	return 18; // 0x23 Return
	
Label_36:
	goto Label_59; // 0x24 Jump
	
Label_59:
	GetActorName(var_11_string); // 0x3b Func
	var_36_int = 0; var_37_string = ""; var_38_string = ""; // 0x3d PushV
	var_37_string = var_11_string; // 0x3e Mov
	var_38_string = "@"; // 0x3f MovS
	func_119(var_36_int, var_37_string, var_38_string); // 0x40 NEW_2
	var_12_int = var_36_int; // 0x41 Mov
	var_41_int = -1; // 0x43 PushI
	var_42_bool = var_12_int == var_41_int; // 0x44 Eq
	if(var_42_bool == 0) goto Label_74; // 0x45 JumpB
	var_43_string = "Wrong door name"; // 0x46 PushS
	Trace(var_43_string); // 0x47 Func
	return 18; // 0x49 Return
	
Label_74:
	var_44_string = ""; var_45_string = ""; var_46_int = 0; var_47_int = 0; // 0x4a PushV
	var_45_string = var_11_string; // 0x4b Mov
	var_46_int = 0; // 0x4c MovI
	var_47_int = var_12_int; // 0x4d Mov
	func_129(var_44_string, var_45_string, var_46_int, var_47_int); // 0x4e NEW_2
	var_13_string = var_44_string; // 0x4f Mov
	var_50_string = "pt_"; // 0x51 PushS
	var_51_string = ""; var_52_string = ""; var_53_int = 0; // 0x52 PushV
	var_52_string = var_11_string; // 0x53 Mov
	var_54_int = 1; // 0x54 PushI
	var_53_int = var_12_int + var_54_int; // 0x55 Add2
	func_124(var_51_string, var_52_string, var_53_int); // 0x56 NEW_2
	var_14_string = var_50_string + var_51_string; // 0x58 Add2
	GetSceneByName(var_15_object, var_13_string); // 0x59 Func
	var_57_bool = var_15_object == 0; // 0x5b NullEq
	if(var_57_bool == 0) goto Label_100; // 0x5c JumpB
	var_58_string = "Destination scene '"; // 0x5d PushS
	var_59_int = var_58_string + var_13_string; // 0x5e Add
	var_60_string = "' not found"; // 0x5f PushS
	var_61_int = var_59_int + var_60_string; // 0x60 Add
	Trace(var_61_int); // 0x61 Func
	return 18; // 0x63 Return
	
Label_100:
	GetLocator(var_14_string, var_16_bool, var_17_cvector, var_18_cvector); // 0x64 ObjFunc
	var_62_bool = var_16_bool; // 0x66 Push
	if(var_62_bool == 0) goto Label_110; // 0x67 JumpB
	var_63_string = "door_open"; // 0x68 PushS
	PlaySharedSound(var_63_string); // 0x69 Func
	Teleport(var_0_object, var_15_object, var_17_cvector, var_18_cvector); // 0x6b Func
	goto Label_117; // 0x6d Jump
	
Label_117:
	return 18; // 0x75 Return
	
Label_110:
	var_64_string = "Locator "; // 0x6e PushS
	var_65_int = var_64_string + var_14_string; // 0x6f Add
	var_66_string = " not found in destination scene "; // 0x70 PushS
	var_67_int = var_65_int + var_66_string; // 0x71 Add
	var_68_int = var_67_int + var_13_string; // 0x72 Add
	Trace(var_68_int); // 0x73 Func
	
Label_37:
	var_69_string = "door_closed"; // 0x25 PushS
	PlaySound(var_69_string); // 0x26 Func
	var_70_int = 1; // 0x28 PushI
	var_71_bool = var_10_int == var_70_int; // 0x29 Eq
	if(var_71_bool == 0) goto Label_51; // 0x2a JumpB
	var_72_string = "Door is disease locked"; // 0x2b PushS
	Trace(var_72_string); // 0x2c Func
	var_73_int = 0; // 0x2e PushV
	var_73_int = 401; // 0x2f MovI
	func_134(var_73_int); // 0x30 NEW_2
	goto Label_58; // 0x32 Jump
	
Label_58:
	return 18; // 0x3a Return
	
Label_51:
	var_74_string = "Door is dead locked"; // 0x33 PushS
	Trace(var_74_string); // 0x34 Func
	var_75_int = 0; // 0x36 PushV
	var_75_int = 402; // 0x37 MovI
	func_134(var_75_int); // 0x38 NEW_2
}


main()
{
	DisableUpdate(); // 0x0 Func
	func_6(); // 0x3 NEW_2
	return 0; // 0x5 Return
}


func_129(var_44_string, var_45_string, var_46_int, var_47_int)
{
	var_48_string = ""; var_49_string = ""; // 0x81 PushV
	_strsub(var_49_string, var_45_string, var_46_int, var_47_int); // 0x82 Func
	var_44_string = var_49_string; // 0x84 Mov
	return 2; // 0x85 Return
}


func_134(var_31_int)
{
	var_32_object = Obj(); var_33_object = Obj(); // 0x86 PushV
	CreateIntVector(var_33_object); // 0x87 Func
	add(var_31_int); // 0x89 ObjFunc
	var_34_int = 200; // 0x8b PushI
	SendWorldWndMessage(var_34_int, var_33_object); // 0x8c Func
	return 2; // 0x8e Return
}


func_6()
{
	var_0_bool = 1; // 0x6 PushB
	SetVisibility(var_0_bool); // 0x7 Func
	
Label_9:
	Hold(); // 0x9 Func
	goto Label_9; // 0xb Jump
}


func_144(var_25_bool)
{
	var_26_int = 0; var_27_int = 0; // 0x90 PushV
	var_28_string = "locked"; // 0x91 PushS
	GetProperty(var_28_string, var_27_int); // 0x92 Func
	var_29_int = 0; // 0x94 PushI
	var_25_bool = var_27_int != var_29_int; // 0x95 Neq2
	return 2; // 0x96 Return
}


func_119(var_36_int, var_37_string, var_38_string)
{
	var_39_int = 0; var_40_int = 0; // 0x77 PushV
	_strchr(var_40_int, var_37_string, var_38_string); // 0x78 Func
	var_36_int = var_40_int; // 0x7a Mov
	return 2; // 0x7b Return
}


func_151(var_19_int)
{
	var_20_int = 0; var_21_int = 0; // 0x97 PushV
	var_22_string = "dlocked"; // 0x98 PushS
	GetProperty(var_22_string, var_21_int); // 0x99 Func
	var_19_int = var_21_int; // 0x9b Mov
	return 2; // 0x9c Return
}


func_124(var_51_string, var_52_string, var_53_int)
{
	var_55_string = ""; var_56_string = ""; // 0x7c PushV
	_strsub(var_56_string, var_52_string, var_53_int); // 0x7d Func
	var_51_string = var_56_string; // 0x7f Mov
	return 2; // 0x80 Return
}


