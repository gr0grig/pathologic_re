task_0_event_26(var_0_object, var_1_string)
{
	Trace(var_1_string); // 0x1c Func
	var_2_string = "fail"; // 0x1e PushS
	var_3_bool = var_1_string == var_2_string; // 0x1f Eq
	if(var_3_bool == 0) goto Label_37; // 0x20 JumpB
	func_52(); // 0x22 Call
	goto Label_43; // 0x24 Jump
	
Label_43:
	return 0; // 0x2b Return
	
Label_37:
	var_9_string = "completed"; // 0x25 PushS
	var_10_bool = var_1_string == var_9_string; // 0x26 Eq
	if(var_10_bool == 0) goto Label_43; // 0x27 JumpB
	func_44(); // 0x29 Call
}


task_0_event_9(var_0_object, var_1_int, var_2_float)
{
	func_60(); // 0x63 Call
	return 0; // 0x65 Return
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
	var_14_string = "Locator doesn't exist for qd1_04_powder"; // 0xd PushS
	Trace(var_14_string); // 0xe Func
	goto Label_21; // 0x10 Jump
	
Label_21:
	var_15_int = 0; // 0x15 PushV
	var_15_int = 1; // 0x16 MovI
	func_78(var_15_int); // 0x17 Call
	return 8; // 0x19 Return
	
Label_17:
	var_27_string = "scripted_container"; // 0x11 PushS
	var_28_string = "d1q04_item_powder.xml"; // 0x12 PushS
	AddActorByType(var_0_object, var_27_string, var_5_object, var_7_cvector, var_8_cvector, var_28_string); // 0x13 Func
}


func_102(var_21_object)
{
	var_22_object = Obj(); var_23_object = Obj(); // 0x66 PushV
	self(var_23_object); // 0x67 Func
	var_21_object = var_23_object; // 0x69 Mov
	return 2; // 0x6a Return
}


func_71()
{
	EventDisable(26); // 0x47 EventDisable
	var_21_object = Obj(); // 0x48 PushV
	func_102(var_21_object); // 0x49 Call
	RemoveActor(var_21_object); // 0x4b Func
	return 0; // 0x4d Return
}


func_44()
{
	var_11_string = "d1q04"; // 0x2c PushS
	var_12_int = 1000; // 0x2d PushI
	SetVariable(var_11_string, var_12_int); // 0x2e Func
	func_71(); // 0x31 Call
	return 0; // 0x33 Return
}


func_78(var_15_int)
{
	var_16_float = 0; var_17_float = 0; // 0x4e PushV
	GetGameTime(var_17_float); // 0x4f Func
	var_18_int = 24; // 0x51 PushI
	var_19_float = var_15_int * var_18_int; // 0x52 Mult
	var_20_bool = var_17_float >= var_19_float; // 0x53 GE
	if(var_20_bool == 0) goto Label_89; // 0x54 JumpB
	func_71(); // 0x56 Call
	goto Label_96; // 0x58 Jump
	
Label_96:
	return 2; // 0x60 Return
	
Label_89:
	var_24_int = 0; // 0x59 PushI
	var_25_int = 24; // 0x5a PushI
	var_26_float = var_15_int * var_25_int; // 0x5b Mult
	SetTimeEvent(var_24_int, var_26_float); // 0x5c Func
	Hold(); // 0x5e Func
}


func_52()
{
	var_8_string = "d1q04"; // 0x34 PushS
	var_9_int = -1; // 0x35 PushI
	SetVariable(var_8_string, var_9_int); // 0x36 Func
	func_71(); // 0x39 Call
	return 0; // 0x3b Return
}


func_60()
{
	var_3_int = 0; var_4_int = 0; // 0x3c PushV
	var_5_string = "d1q04"; // 0x3d PushS
	GetVariable(var_5_string, var_4_int); // 0x3e Func
	var_6_int = 1000; // 0x40 PushI
	var_7_bool = var_4_int != var_6_int; // 0x41 Neq
	if(var_7_bool == 0) goto Label_70; // 0x42 JumpB
	func_52(); // 0x44 Call
	
Label_70:
	return 2; // 0x46 Return
}


