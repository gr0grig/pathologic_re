task_0_event_9(var_0_bool, var_1_int, var_2_float)
{
	var_3_int = 0; // 0x11 PushI
	var_4_bool = var_1_int == var_3_int; // 0x12 Eq
	if(var_4_bool == 0) goto Label_23; // 0x13 JumpB
	StopGroup0(); // 0x14 Func
	var_0_bool = 1; // 0x16 TMovB
	
Label_23:
	return 0; // 0x17 Return
}


task_0_event_0(var_0_bool, var_1_object)
{
	EventDisable(0); // 0x19 EventDisable
	var_2_bool = 0; var_3_object = Obj(); var_4_string = ""; var_5_float = 0; var_6_float = 0; var_7_float = 0; // 0x1a PushV
	var_3_object = var_1_object; // 0x1b Mov
	var_4_string = "hunger"; // 0x1c MovS
	var_5_float = -0.01; // 0x1d MovF
	var_6_float = 0; // 0x1e MovI
	var_7_float = 1; // 0x1f MovI
	func_70(var_2_bool, var_3_object, var_4_string, var_5_float, var_6_float, var_7_float); // 0x20 NEW_2
	var_26_float = 0; // 0x22 PushV
	var_26_float = -0.01; // 0x23 MovF
	func_113(var_26_float); // 0x24 NEW_2
	var_30_bool = 0; var_31_object = Obj(); var_32_string = ""; var_33_float = 0; var_34_float = 0; var_35_float = 0; // 0x26 PushV
	var_31_object = var_1_object; // 0x27 Mov
	var_32_string = "tiredness"; // 0x28 MovS
	var_33_float = 0.03; // 0x29 MovF
	var_34_float = 0; // 0x2a MovI
	var_35_float = 1; // 0x2b MovI
	func_70(var_30_bool, var_31_object, var_32_string, var_33_float, var_34_float, var_35_float); // 0x2c NEW_2
	var_36_float = 0; // 0x2e PushV
	var_36_float = 0.03; // 0x2f MovF
	func_103(var_36_float); // 0x30 NEW_2
	var_40_string = "drink"; // 0x32 PushS
	PlaySound(var_40_string); // 0x33 Func
	var_41_int = 1; // 0x35 PushI
	Sleep(var_41_int); // 0x36 Func
	EventEnable(0); // 0x38 EventEnable
	return 0; // 0x39 Return
}


main(var_0_bool)
{
	var_1_bool = 1; // 0x0 PushB
	SetVisibility(var_1_bool); // 0x1 Func
	var_2_int = 0; // 0x3 PushI
	var_3_int = 24; // 0x4 PushI
	SetTimeEvent(var_2_int, var_3_int); // 0x5 Func
	var_0_bool = 0; // 0x7 TMovB
	
Label_8:
	Hold(); // 0x8 Func
	var_4_bool = var_0_bool == 0; // 0xa Not
	if(var_4_bool == 0) goto Label_8; // 0xb JumpB
	var_5_bool = 0; // 0xc PushB
	SetUsable(var_5_bool); // 0xd Func
	return 0; // 0xf Return
}


func_70(var_2_bool, var_3_object, var_4_string, var_5_float, var_6_float, var_7_float)
{
	var_8_float = 0; var_9_float = 0; // 0x46 PushV
	var_10_bool = 0; var_11_object = Obj(); var_12_string = ""; // 0x47 PushV
	var_11_object = var_3_object; // 0x48 Mov
	var_12_string = var_4_string; // 0x49 Mov
	func_58(var_10_bool, var_11_object, var_12_string); // 0x4a NEW_2
	var_19_bool = var_10_bool == 0; // 0x4c Not
	if(var_19_bool == 0) goto Label_80; // 0x4d JumpB
	var_2_bool = 0; // 0x4e MovB
	return 2; // 0x4f Return
	
Label_80:
	GetProperty(var_4_string, var_9_float); // 0x50 ObjFunc
	var_20_float = 0; var_21_float = 0; var_22_float = 0; var_23_float = 0; // 0x52 PushV
	var_21_float = var_9_float + var_5_float; // 0x53 Add2
	var_22_float = var_6_float; // 0x54 Mov
	var_23_float = var_7_float; // 0x55 Mov
	func_92(var_20_float, var_21_float, var_22_float, var_23_float); // 0x56 NEW_2
	SetProperty(var_4_string, var_20_float); // 0x58 ObjFunc
	var_2_bool = 1; // 0x5a MovB
	return 2; // 0x5b Return
}


func_103(var_36_float)
{
	var_37_object = Obj(); var_38_object = Obj(); // 0x67 PushV
	CreateFloatVector(var_38_object); // 0x68 Func
	add(var_36_float); // 0x6a ObjFunc
	var_39_int = 11; // 0x6c PushI
	SendWorldWndMessage(var_39_int, var_38_object); // 0x6d Func
	return 2; // 0x6f Return
}


func_113(var_26_float)
{
	var_27_object = Obj(); var_28_object = Obj(); // 0x71 PushV
	CreateFloatVector(var_28_object); // 0x72 Func
	add(var_26_float); // 0x74 ObjFunc
	var_29_int = 12; // 0x76 PushI
	SendWorldWndMessage(var_29_int, var_28_object); // 0x77 Func
	return 2; // 0x79 Return
}


func_58(var_10_bool, var_11_object, var_12_string)
{
	var_13_bool = 0; var_14_bool = 0; // 0x3a PushV
	var_15_string = "HasProperty"; // 0x3b PushS
	var_16_int = 2; // 0x3c PushI
	var_17_bool = IsFuncExist(var_11_object, var_15_string, var_16_int); // 0x3d FuncExist
	var_18_bool = var_17_bool == 0; // 0x3e Not
	if(var_18_bool == 0) goto Label_66; // 0x3f JumpB
	var_10_bool = 0; // 0x40 MovB
	return 2; // 0x41 Return
	
Label_66:
	HasProperty(var_12_string, var_14_bool); // 0x42 ObjFunc
	var_10_bool = var_14_bool; // 0x44 Mov
	return 2; // 0x45 Return
}


func_92(var_20_float, var_21_float, var_22_float, var_23_float)
{
	var_24_bool = var_21_float < var_22_float; // 0x5d LT
	if(var_24_bool == 0) goto Label_97; // 0x5e JumpB
	var_20_float = var_22_float; // 0x5f Mov
	return 0; // 0x60 Return
	
Label_97:
	var_25_bool = var_21_float > var_23_float; // 0x61 GT
	if(var_25_bool == 0) goto Label_101; // 0x62 JumpB
	var_20_float = var_23_float; // 0x63 Mov
	return 0; // 0x64 Return
	
Label_101:
	var_20_float = var_21_float; // 0x65 Mov
	return 0; // 0x66 Return
}


