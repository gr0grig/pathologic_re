task_0_event_0(var_0_object)
{
	var_1_string = ""; var_2_int = 0; var_3_object = Obj(); var_4_object = Obj(); var_5_string = ""; var_6_string = ""; var_7_bool = 0; var_8_cvector = CVector(0,0,0); var_9_cvector = CVector(0,0,0); var_10_string = ""; var_11_int = 0; var_12_object = Obj(); var_13_object = Obj(); var_14_string = ""; var_15_string = ""; var_16_bool = 0; var_17_cvector = CVector(0,0,0); var_18_cvector = CVector(0,0,0); // 0x7 PushV
	var_19_bool = 0; // 0x8 PushV
	func_81(var_19_bool); // 0x9 Call
	if(var_19_bool == 0) goto Label_19; // 0xb JumpB
	var_24_string = "door_closed"; // 0xc PushS
	PlaySound(var_24_string); // 0xd Func
	var_25_string = "Door is locked"; // 0xf PushS
	Trace(var_25_string); // 0x10 Func
	return 18; // 0x12 Return
	
Label_19:
	GetActorName(var_10_string); // 0x13 Func
	var_26_int = 0; var_27_string = ""; var_28_string = ""; // 0x15 PushV
	var_27_string = var_10_string; // 0x16 Mov
	var_28_string = "@"; // 0x17 MovS
	func_71(var_26_int, var_27_string, var_28_string); // 0x18 Call
	var_11_int = var_26_int; // 0x19 Mov
	var_31_int = -1; // 0x1b PushI
	var_32_bool = var_11_int == var_31_int; // 0x1c Eq
	if(var_32_bool == 0) goto Label_34; // 0x1d JumpB
	var_33_string = "Wrong door name"; // 0x1e PushS
	Trace(var_33_string); // 0x1f Func
	return 18; // 0x21 Return
	
Label_34:
	GetMainOutdoorScene(var_12_object); // 0x22 Func
	var_34_bool = var_12_object == 0; // 0x24 NullEq
	if(var_34_bool == 0) goto Label_42; // 0x25 JumpB
	var_35_string = "No main outdoor scene"; // 0x26 PushS
	Trace(var_35_string); // 0x27 Func
	return 18; // 0x29 Return
	
Label_42:
	GetScene(var_13_object); // 0x2a Func
	GetName(var_14_string); // 0x2c ObjFunc
	var_36_string = "pt_"; // 0x2e PushS
	var_37_int = var_36_string + var_14_string; // 0x2f Add
	var_38_string = "@"; // 0x30 PushS
	var_39_int = var_37_int + var_38_string; // 0x31 Add
	var_40_string = ""; var_41_string = ""; var_42_int = 0; // 0x32 PushV
	var_41_string = var_10_string; // 0x33 Mov
	var_43_int = 1; // 0x34 PushI
	var_42_int = var_11_int + var_43_int; // 0x35 Add2
	func_76(var_40_string, var_41_string, var_42_int); // 0x36 Call
	var_15_string = var_39_int + var_40_string; // 0x38 Add2
	Trace(var_15_string); // 0x39 Func
	GetLocator(var_15_string, var_16_bool, var_17_cvector, var_18_cvector); // 0x3b ObjFunc
	var_46_bool = var_16_bool; // 0x3d Push
	if(var_46_bool == 0) goto Label_68; // 0x3e JumpB
	var_47_string = "door_open"; // 0x3f PushS
	PlaySharedSound(var_47_string); // 0x40 Func
	Teleport(var_0_object, var_12_object, var_17_cvector, var_18_cvector); // 0x42 Func
	
Label_68:
	return 18; // 0x44 Return
}


main()
{
	var_0_bool = 1; // 0x0 PushB
	SetVisibility(var_0_bool); // 0x1 Func
	
Label_3:
	Hold(); // 0x3 Func
	goto Label_3; // 0x5 Jump
}


func_81(var_19_bool)
{
	var_20_int = 0; var_21_int = 0; // 0x51 PushV
	var_22_string = "locked"; // 0x52 PushS
	GetProperty(var_22_string, var_21_int); // 0x53 Func
	var_23_int = 0; // 0x55 PushI
	var_19_bool = var_21_int != var_23_int; // 0x56 Neq2
	return 2; // 0x57 Return
}


func_76(var_40_string, var_41_string, var_42_int)
{
	var_44_string = ""; var_45_string = ""; // 0x4c PushV
	_strsub(var_45_string, var_41_string, var_42_int); // 0x4d Func
	var_40_string = var_45_string; // 0x4f Mov
	return 2; // 0x50 Return
}


func_71(var_26_int, var_27_string, var_28_string)
{
	var_29_int = 0; var_30_int = 0; // 0x47 PushV
	_strchr(var_30_int, var_27_string, var_28_string); // 0x48 Func
	var_26_int = var_30_int; // 0x4a Mov
	return 2; // 0x4b Return
}


