task_0_event_26(var_0_object, var_1_string)
{
	Trace(var_1_string); // 0x26 Func
	var_2_string = "fail"; // 0x28 PushS
	var_3_bool = var_1_string == var_2_string; // 0x29 Eq
	if(var_3_bool == 0) goto Label_47; // 0x2a JumpB
	func_62(); // 0x2c NEW_2
	goto Label_53; // 0x2e Jump
	
Label_53:
	return 0; // 0x35 Return
	
Label_47:
	var_9_string = "completed"; // 0x2f PushS
	var_10_bool = var_1_string == var_9_string; // 0x30 Eq
	if(var_10_bool == 0) goto Label_53; // 0x31 JumpB
	func_54(); // 0x33 NEW_2
}


task_0_event_9(var_0_object, var_1_int, var_2_float)
{
	func_70(); // 0x6d NEW_2
	return 0; // 0x6f Return
}


main(var_0_object)
{
	var_1_object = Obj(); var_2_bool = 0; var_3_cvector = CVector(0,0,0); var_4_cvector = CVector(0,0,0); var_5_object = Obj(); var_6_bool = 0; var_7_cvector = CVector(0,0,0); var_8_cvector = CVector(0,0,0); // 0x0 PushV
	var_9_string = "d1q04"; // 0x1 PushS
	var_10_int = 1; // 0x2 PushI
	SetVariable(var_9_string, var_10_int); // 0x3 Func
	var_11_string = "r2_house_2_02"; // 0x5 PushS
	GetSceneByName(var_5_object, var_11_string); // 0x6 Func
	var_12_string = "pt_powder"; // 0x8 PushS
	GetLocator(var_12_string, var_6_bool, var_7_cvector, var_8_cvector); // 0x9 ObjFunc
	var_13_bool = var_6_bool == 0; // 0xb Not
	if(var_13_bool == 0) goto Label_17; // 0xc JumpB
	var_14_string = "Locator doesn't exist for d1_04_powder"; // 0xd PushS
	Trace(var_14_string); // 0xe Func
	goto Label_21; // 0x10 Jump
	
Label_21:
	var_15_string = ""; var_16_bool = 0; // 0x15 PushV
	var_15_string = "r2_house_2_02@door1"; // 0x16 MovS
	var_16_bool = 0; // 0x17 MovB
	func_118(var_15_string, var_16_bool); // 0x18 NEW_2
	var_25_string = ""; var_26_bool = 0; // 0x1a PushV
	var_25_string = "r2_house_2_02@door2"; // 0x1b MovS
	var_26_bool = 0; // 0x1c MovB
	func_118(var_25_string, var_26_bool); // 0x1d NEW_2
	var_27_int = 0; // 0x1f PushV
	var_27_int = 1; // 0x20 MovI
	func_88(var_27_int); // 0x21 NEW_2
	return 8; // 0x23 Return
	
Label_17:
	var_39_string = "scripted_container"; // 0x11 PushS
	var_40_string = "d1q04_item_powder.xml"; // 0x12 PushS
	AddActorByType(var_0_object, var_39_string, var_5_object, var_7_cvector, var_8_cvector, var_40_string); // 0x13 Func
}


func_70()
{
	var_3_int = 0; var_4_int = 0; // 0x46 PushV
	var_5_string = "d1q04"; // 0x47 PushS
	GetVariable(var_5_string, var_4_int); // 0x48 Func
	var_6_int = 1000; // 0x4a PushI
	var_7_bool = var_4_int != var_6_int; // 0x4b Neq
	if(var_7_bool == 0) goto Label_80; // 0x4c JumpB
	func_62(); // 0x4e NEW_2
	
Label_80:
	return 2; // 0x50 Return
}


func_112(var_33_object)
{
	var_34_object = Obj(); var_35_object = Obj(); // 0x70 PushV
	self(var_35_object); // 0x71 Func
	var_33_object = var_35_object; // 0x73 Mov
	return 2; // 0x74 Return
}


func_81()
{
	EventDisable(26); // 0x51 EventDisable
	var_33_object = Obj(); // 0x52 PushV
	func_112(var_33_object); // 0x53 NEW_2
	RemoveActor(var_33_object); // 0x55 Func
	return 0; // 0x57 Return
}


func_118(var_15_string, var_16_bool)
{
	var_17_object = Obj(); var_18_object = Obj(); // 0x76 PushV
	FindActor(var_18_object, var_15_string); // 0x77 Func
	var_19_bool = var_18_object == 0; // 0x79 Not
	if(var_19_bool == 0) goto Label_130; // 0x7a JumpB
	var_20_string = "Door "; // 0x7b PushS
	var_21_int = var_20_string + var_15_string; // 0x7c Add
	var_22_string = " not found"; // 0x7d PushS
	var_23_int = var_21_int + var_22_string; // 0x7e Add
	Trace(var_23_int); // 0x7f Func
	goto Label_133; // 0x81 Jump
	
Label_133:
	return 2; // 0x85 Return
	
Label_130:
	var_24_string = "locked"; // 0x82 PushS
	SetProperty(var_24_string, var_16_bool); // 0x83 ObjFunc
}


func_54()
{
	var_11_string = "d1q04"; // 0x36 PushS
	var_12_int = 1000; // 0x37 PushI
	SetVariable(var_11_string, var_12_int); // 0x38 Func
	func_81(); // 0x3b NEW_2
	return 0; // 0x3d Return
}


func_88(var_27_int)
{
	var_28_float = 0; var_29_float = 0; // 0x58 PushV
	GetGameTime(var_29_float); // 0x59 Func
	var_30_int = 24; // 0x5b PushI
	var_31_float = var_27_int * var_30_int; // 0x5c Mult
	var_32_bool = var_29_float >= var_31_float; // 0x5d GE
	if(var_32_bool == 0) goto Label_99; // 0x5e JumpB
	func_81(); // 0x60 NEW_2
	goto Label_106; // 0x62 Jump
	
Label_106:
	return 2; // 0x6a Return
	
Label_99:
	var_36_int = 0; // 0x63 PushI
	var_37_int = 24; // 0x64 PushI
	var_38_float = var_27_int * var_37_int; // 0x65 Mult
	SetTimeEvent(var_36_int, var_38_float); // 0x66 Func
	Hold(); // 0x68 Func
}


func_62()
{
	var_8_string = "d1q04"; // 0x3e PushS
	var_9_int = -1; // 0x3f PushI
	SetVariable(var_8_string, var_9_int); // 0x40 Func
	func_81(); // 0x43 NEW_2
	return 0; // 0x45 Return
}


