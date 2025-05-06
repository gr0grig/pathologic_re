task_0_event_23(var_0_object)
{
	var_1_bool = 0; var_2_string = ""; var_3_int = 0; var_4_object = Obj(); var_5_object = Obj(); var_6_string = ""; var_7_string = ""; var_8_bool = 0; var_9_cvector = CVector(0,0,0); var_10_cvector = CVector(0,0,0); var_11_bool = 0; var_12_string = ""; var_13_int = 0; var_14_object = Obj(); var_15_object = Obj(); var_16_string = ""; var_17_string = ""; var_18_bool = 0; var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); // 0x4 PushV
	IsPlayerActor(var_0_object, var_11_bool); // 0x5 Func
	var_21_bool = var_11_bool == 0; // 0x7 Not
	if(var_21_bool == 0) goto Label_10; // 0x8 JumpB
	return 20; // 0x9 Return
	
Label_10:
	var_22_bool = 0; // 0xa PushV
	func_74(var_22_bool); // 0xb Call
	if(var_22_bool == 0) goto Label_15; // 0xd JumpB
	return 20; // 0xe Return
	
Label_15:
	GetActorName(var_12_string); // 0xf Func
	var_27_int = 0; var_28_string = ""; var_29_string = ""; // 0x11 PushV
	var_28_string = var_12_string; // 0x12 Mov
	var_29_string = "@"; // 0x13 MovS
	func_64(var_27_int, var_28_string, var_29_string); // 0x14 Call
	var_13_int = var_27_int; // 0x15 Mov
	var_32_int = -1; // 0x17 PushI
	var_33_bool = var_13_int == var_32_int; // 0x18 Eq
	if(var_33_bool == 0) goto Label_30; // 0x19 JumpB
	var_34_string = "Wrong door name"; // 0x1a PushS
	Trace(var_34_string); // 0x1b Func
	return 20; // 0x1d Return
	
Label_30:
	GetMainOutdoorScene(var_14_object); // 0x1e Func
	var_35_bool = var_14_object == 0; // 0x20 NullEq
	if(var_35_bool == 0) goto Label_38; // 0x21 JumpB
	var_36_string = "No main outdoor scene"; // 0x22 PushS
	Trace(var_36_string); // 0x23 Func
	return 20; // 0x25 Return
	
Label_38:
	GetScene(var_15_object); // 0x26 Func
	GetName(var_16_string); // 0x28 ObjFunc
	var_37_string = "pt_"; // 0x2a PushS
	var_38_int = var_37_string + var_16_string; // 0x2b Add
	var_39_string = "@"; // 0x2c PushS
	var_40_int = var_38_int + var_39_string; // 0x2d Add
	var_41_string = ""; var_42_string = ""; var_43_int = 0; // 0x2e PushV
	var_42_string = var_12_string; // 0x2f Mov
	var_44_int = 1; // 0x30 PushI
	var_43_int = var_13_int + var_44_int; // 0x31 Add2
	func_69(var_41_string, var_42_string, var_43_int); // 0x32 Call
	var_17_string = var_40_int + var_41_string; // 0x34 Add2
	Trace(var_17_string); // 0x35 Func
	GetLocator(var_17_string, var_18_bool, var_19_cvector, var_20_cvector); // 0x37 ObjFunc
	var_47_bool = var_18_bool; // 0x39 Push
	if(var_47_bool == 0) goto Label_61; // 0x3a JumpB
	Teleport(var_0_object, var_14_object, var_19_cvector, var_20_cvector); // 0x3b Func
	
Label_61:
	return 20; // 0x3d Return
}


main()
{
	
Label_0:
	Hold(); // 0x0 Func
	goto Label_0; // 0x2 Jump
}


func_64(var_27_int, var_28_string, var_29_string)
{
	var_30_int = 0; var_31_int = 0; // 0x40 PushV
	_strchr(var_31_int, var_28_string, var_29_string); // 0x41 Func
	var_27_int = var_31_int; // 0x43 Mov
	return 2; // 0x44 Return
}


func_74(var_22_bool)
{
	var_23_int = 0; var_24_int = 0; // 0x4a PushV
	var_25_string = "locked"; // 0x4b PushS
	GetProperty(var_25_string, var_24_int); // 0x4c Func
	var_26_int = 0; // 0x4e PushI
	var_22_bool = var_24_int != var_26_int; // 0x4f Neq2
	return 2; // 0x50 Return
}


func_69(var_41_string, var_42_string, var_43_int)
{
	var_45_string = ""; var_46_string = ""; // 0x45 PushV
	_strsub(var_46_string, var_42_string, var_43_int); // 0x46 Func
	var_41_string = var_46_string; // 0x48 Mov
	return 2; // 0x49 Return
}


