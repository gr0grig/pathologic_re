task_0_event_32(var_0_bool, var_1_object, var_2_object)
{
	var_3_object = var_2_object; // 0x23 PushT
	if(var_3_object == 0) goto Label_39; // 0x24 JumpB
	RemoveActor(var_1_object); // 0x25 Func
	
Label_39:
	var_4_object = var_1_object; // 0x27 PushT
	if(var_4_object == 0) goto Label_44; // 0x28 JumpB
	var_5_bool = 0; // 0x29 PushB
	Switch(var_5_bool); // 0x2a TObjFunc
	
Label_44:
	return 0; // 0x2c Return
}


task_0_event_26(var_0_bool, var_1_object, var_2_object, var_3_string)
{
	var_4_bool = 0; var_5_bool = 0; // 0x31 PushV
	var_6_string = "cleanup"; // 0x32 PushS
	var_7_bool = var_3_string == var_6_string; // 0x33 Eq
	if(var_7_bool == 0) goto Label_72; // 0x34 JumpB
	var_0_bool = 1; // 0x35 TMovB
	IsLoaded(var_5_bool); // 0x36 Func
	var_8_bool = 0; // 0x38 PushV
	var_8_bool = 0; // 0x39 MovB
	var_9_bool = var_5_bool == 0; // 0x3a Not
	if(var_9_bool == 0) goto Label_65; // 0x3b JumpB
	var_10_bool = 0; // 0x3c PushV
	func_93(var_10_bool); // 0x3d NEW_2
	if(var_10_bool == 0) goto Label_65; // 0x3f JumpB
	var_8_bool = 1; // 0x40 MovB
	
Label_65:
	if(var_8_bool == 0) goto Label_71; // 0x41 JumpB
	var_11_object = Obj(); // 0x42 PushV
	func_95(var_11_object); // 0x43 NEW_2
	RemoveActor(var_11_object); // 0x45 Func
	
Label_71:
	goto Label_76; // 0x47 Jump
	
Label_76:
	return 2; // 0x4c Return
	
Label_72:
	var_14_string = "restore"; // 0x48 PushS
	var_15_bool = var_3_string == var_14_string; // 0x49 Eq
	if(var_15_bool == 0) goto Label_76; // 0x4a JumpB
	var_0_bool = 0; // 0x4b TMovB
}


task_0_event_6(var_0_bool, var_1_object, var_2_object)
{
	var_3_bool = 0; // 0x4d PushV
	var_3_bool = 0; // 0x4e MovB
	var_4_bool = var_0_bool; // 0x4f PushT
	if(var_4_bool == 0) goto Label_86; // 0x50 JumpB
	var_5_bool = 0; // 0x51 PushV
	func_93(var_5_bool); // 0x52 NEW_2
	if(var_5_bool == 0) goto Label_86; // 0x54 JumpB
	var_3_bool = 1; // 0x55 MovB
	
Label_86:
	if(var_3_bool == 0) goto Label_92; // 0x56 JumpB
	var_6_object = Obj(); // 0x57 PushV
	func_95(var_6_object); // 0x58 NEW_2
	RemoveActor(var_6_object); // 0x5a Func
	
Label_92:
	return 0; // 0x5c Return
}


main(var_0_bool, var_1_object, var_2_object)
{
	var_3_string = ""; var_4_string = ""; // 0x0 PushV
	var_5_string = "light"; // 0x1 PushS
	GetProperty(var_5_string, var_4_string); // 0x2 Func
	FindActor(var_4_string, var_4_string); // 0x4 Func
	var_6_bool = 1; // 0x6 PushB
	Switch(var_6_bool); // 0x7 TObjFunc
	var_7_bool = 1; // 0x9 PushB
	SetVisibility(var_7_bool); // 0xa Func
	func_19(var_4_string); // 0xd NEW_2
	func_45(); // 0x10 NEW_2
	return 2; // 0x12 Return
}


func_101(var_13_object, var_14_object, var_15_string, var_16_string, var_17_string)
{
	var_18_bool = 0; var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); var_21_object = Obj(); var_22_bool = 0; var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_object = Obj(); // 0x65 PushV
	GetLocator(var_15_string, var_22_bool, var_23_cvector, var_24_cvector); // 0x66 ObjFunc
	var_26_bool = var_22_bool == 0; // 0x68 Not
	if(var_26_bool == 0) goto Label_114; // 0x69 JumpB
	var_27_string = "Locator "; // 0x6a PushS
	var_28_int = var_27_string + var_15_string; // 0x6b Add
	var_29_string = " doesn't exist"; // 0x6c PushS
	var_30_int = var_28_int + var_29_string; // 0x6d Add
	Trace(var_30_int); // 0x6e Func
	var_25_object = 0; // 0x70 SetNull
	goto Label_116; // 0x71 Jump
	
Label_116:
	var_13_object = var_25_object; // 0x74 Mov
	return 8; // 0x75 Return
	
Label_114:
	AddActorByType(var_25_object, var_16_string, var_14_object, var_23_cvector, var_24_cvector, var_17_string); // 0x72 Func
}


func_45()
{
	
Label_45:
	Hold(); // 0x2d Func
	goto Label_45; // 0x2f Jump
}


func_19(var_2_object)
{
	var_8_object = Obj(); var_9_string = ""; var_10_object = Obj(); var_11_string = ""; // 0x13 PushV
	GetScene(var_10_object); // 0x14 Func
	var_12_string = "fire_loc"; // 0x16 PushS
	GetProperty(var_12_string, var_11_string); // 0x17 Func
	var_13_object = Obj(); var_14_object = Obj(); var_15_string = ""; var_16_string = ""; var_17_string = ""; // 0x19 PushV
	var_14_object = var_10_object; // 0x1a Mov
	var_15_string = var_11_string; // 0x1b Mov
	var_16_string = "scripted"; // 0x1c MovS
	var_17_string = "bonfire.xml"; // 0x1d MovS
	func_101(var_13_object, var_14_object, var_15_string, var_16_string, var_17_string); // 0x1e NEW_2
	var_2_object = var_13_object; // 0x1f TMov
	return 4; // 0x21 Return
}


func_93(var_5_bool)
{
	var_5_bool = 1; // 0x5d MovB
	return 0; // 0x5e Return
}


func_95(var_6_object)
{
	var_7_object = Obj(); var_8_object = Obj(); // 0x5f PushV
	self(var_8_object); // 0x60 Func
	var_6_object = var_8_object; // 0x62 Mov
	return 2; // 0x63 Return
}


