task_0_event_26(var_0_object, var_1_string)
{
	var_2_object = Obj(); var_3_int = 0; var_4_object = Obj(); var_5_int = 0; // 0x4 PushV
	Trace(var_1_string); // 0x5 Func
	var_6_string = "place_butcher"; // 0x7 PushS
	var_7_bool = var_1_string == var_6_string; // 0x8 Eq
	if(var_7_bool == 0) goto Label_23; // 0x9 JumpB
	var_8_string = "house5_24"; // 0xa PushS
	GetSceneByName(var_4_object, var_8_string); // 0xb Func
	var_9_object = Obj(); var_10_object = Obj(); var_11_string = ""; var_12_string = ""; var_13_string = ""; // 0xd PushV
	var_10_object = var_4_object; // 0xe Mov
	var_11_string = "pt_b3q01_butcher"; // 0xf MovS
	var_12_string = "pers_butcher"; // 0x10 MovS
	var_13_string = "b3q01_butcher.xml"; // 0x11 MovS
	func_88(var_9_object, var_10_object, var_11_string, var_12_string, var_13_string); // 0x12 NEW_2
	var_0_object = var_9_object; // 0x13 TMov
	var_4_object = 0; // 0x15 SetNull
	goto Label_53; // 0x16 Jump
	
Label_53:
	return 4; // 0x35 Return
	
Label_23:
	var_27_string = "cleanup"; // 0x17 PushS
	var_28_bool = var_1_string == var_27_string; // 0x18 Eq
	if(var_28_bool == 0) goto Label_40; // 0x19 JumpB
	var_29_string = "b3q01"; // 0x1a PushS
	GetVariable(var_29_string, var_5_int); // 0x1b Func
	var_30_int = 1000; // 0x1d PushI
	var_31_bool = var_5_int != var_30_int; // 0x1e Neq
	if(var_31_bool == 0) goto Label_36; // 0x1f JumpB
	func_54(); // 0x21 NEW_2
	goto Label_39; // 0x23 Jump
	
Label_39:
	goto Label_53; // 0x27 Jump
	
Label_36:
	func_70(var_5_int); // 0x25 NEW_2
	
Label_40:
	var_39_string = "fail"; // 0x28 PushS
	var_40_bool = var_1_string == var_39_string; // 0x29 Eq
	if(var_40_bool == 0) goto Label_47; // 0x2a JumpB
	func_54(); // 0x2c NEW_2
	goto Label_53; // 0x2e Jump
	
Label_47:
	var_41_string = "completed"; // 0x2f PushS
	var_42_bool = var_1_string == var_41_string; // 0x30 Eq
	if(var_42_bool == 0) goto Label_53; // 0x31 JumpB
	func_62(); // 0x33 NEW_2
}


main(var_0_object)
{
	
Label_0:
	Hold(); // 0x0 Func
	goto Label_0; // 0x2 Jump
}


func_70(var_0_object)
{
	EventDisable(26); // 0x46 EventDisable
	var_34_object = var_0_object; // 0x47 PushT
	if(var_34_object == 0) goto Label_76; // 0x48 JumpB
	var_35_string = "cleanup"; // 0x49 PushS
	Trigger(var_0_object, var_35_string); // 0x4a Func
	
Label_76:
	var_36_object = Obj(); // 0x4c PushV
	func_82(var_36_object); // 0x4d NEW_2
	RemoveActor(var_36_object); // 0x4f Func
	return 0; // 0x51 Return
}


func_82(var_36_object)
{
	var_37_object = Obj(); var_38_object = Obj(); // 0x52 PushV
	self(var_38_object); // 0x53 Func
	var_36_object = var_38_object; // 0x55 Mov
	return 2; // 0x56 Return
}


func_54()
{
	var_32_string = "b3q01"; // 0x36 PushS
	var_33_int = -1; // 0x37 PushI
	SetVariable(var_32_string, var_33_int); // 0x38 Func
	func_70(var_5_int); // 0x3b NEW_2
	return 0; // 0x3d Return
}


func_88(var_9_object, var_10_object, var_11_string, var_12_string, var_13_string)
{
	var_14_bool = 0; var_15_cvector = CVector(0,0,0); var_16_cvector = CVector(0,0,0); var_17_object = Obj(); var_18_bool = 0; var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); var_21_object = Obj(); // 0x58 PushV
	GetLocator(var_11_string, var_18_bool, var_19_cvector, var_20_cvector); // 0x59 ObjFunc
	var_22_bool = var_18_bool == 0; // 0x5b Not
	if(var_22_bool == 0) goto Label_101; // 0x5c JumpB
	var_23_string = "Locator "; // 0x5d PushS
	var_24_int = var_23_string + var_11_string; // 0x5e Add
	var_25_string = " doesn't exist"; // 0x5f PushS
	var_26_int = var_24_int + var_25_string; // 0x60 Add
	Trace(var_26_int); // 0x61 Func
	var_21_object = 0; // 0x63 SetNull
	goto Label_103; // 0x64 Jump
	
Label_103:
	var_9_object = var_21_object; // 0x67 Mov
	return 8; // 0x68 Return
	
Label_101:
	AddActor(var_21_object, var_12_string, var_10_object, var_19_cvector, var_20_cvector, var_13_string); // 0x65 Func
}


func_62()
{
	var_43_string = "b3q01"; // 0x3e PushS
	var_44_int = 1000; // 0x3f PushI
	SetVariable(var_43_string, var_44_int); // 0x40 Func
	func_70(var_5_int); // 0x43 NEW_2
	return 0; // 0x45 Return
}


