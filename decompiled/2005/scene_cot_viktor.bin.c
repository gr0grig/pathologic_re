task_0_event_5(var_0_object, var_1_object)
{
	func_14(); // 0x3a NEW_2
	func_38(var_1_object); // 0x3d NEW_2
	return 0; // 0x3f Return
}


task_0_event_6(var_0_object, var_1_object)
{
	func_43(var_1_object); // 0x41 NEW_2
	func_50(var_1_object); // 0x44 NEW_2
	return 0; // 0x46 Return
}


main(var_0_object, var_1_object)
{
	func_6(var_0_object, var_1_object); // 0x1 NEW_2
	return 0; // 0x3 Return
}


func_4()
{
	return 0; // 0x5 Return
}


func_38(var_1_object)
{
	var_21_object = Obj(); // 0x26 PushV
	var_21_object = var_1_object; // 0x27 MovT
	func_4(); // 0x28 NEW_2
	return 0; // 0x2a Return
}


func_71(var_15_object)
{
	var_16_object = Obj(); var_17_object = Obj(); // 0x47 PushV
	self(var_17_object); // 0x48 Func
	var_15_object = var_17_object; // 0x4a Mov
	return 2; // 0x4b Return
}


func_6(var_0_object, var_1_object)
{
	CreateObjectVector(var_0_object); // 0x6 Func
	CreateObjectVector(var_1_object); // 0x8 Func
	
Label_10:
	Hold(); // 0xa Func
	goto Label_10; // 0xc Jump
}


func_43(var_0_object)
{
	var_2_object = Obj(); // 0x2b PushV
	var_2_object = var_0_object; // 0x2c MovT
	func_77(var_2_object); // 0x2d NEW_2
	clear(); // 0x2f TObjFunc
	return 0; // 0x31 Return
}


func_77(var_2_object)
{
	var_3_int = 0; var_4_int = 0; var_5_object = Obj(); var_6_int = 0; var_7_int = 0; var_8_object = Obj(); // 0x4d PushV
	var_9_object = var_2_object; // 0x4e Push
	if(var_9_object == 0) goto Label_97; // 0x4f JumpB
	size(var_6_int); // 0x50 ObjFunc
	var_7_int = 0; // 0x52 MovI
	
Label_83:
	var_10_bool = var_7_int < var_6_int; // 0x53 LT
	if(var_10_bool == 0) goto Label_95; // 0x54 JumpB
	get(var_8_object, var_7_int); // 0x55 ObjFunc
	var_11_object = var_8_object; // 0x57 Push
	if(var_11_object == 0) goto Label_91; // 0x58 JumpB
	RemoveActor(var_8_object); // 0x59 Func
	
Label_91:
	var_8_object = 0; // 0x5b SetNull
	var_12_int = 1; // 0x5c PushI
	var_7_int = var_7_int + var_12_int; // 0x5d Add2
	goto Label_83; // 0x5e Jump
	
Label_95:
	clear(); // 0x5f ObjFunc
	
Label_97:
	return 6; // 0x61 Return
}


func_14()
{
	var_2_int = 0; var_3_string = ""; var_4_bool = 0; var_5_cvector = CVector(0,0,0); var_6_object = Obj(); var_7_int = 0; var_8_string = ""; var_9_bool = 0; var_10_cvector = CVector(0,0,0); var_11_object = Obj(); // 0xe PushV
	var_7_int = 1; // 0xf MovI
	
Label_16:
	var_12_string = "pt_fireplace"; // 0x10 PushS
	var_8_string = var_12_string + var_7_int; // 0x11 Add2
	GetLocator(var_8_string, var_9_bool, var_10_cvector); // 0x12 Func
	var_13_bool = var_9_bool == 0; // 0x14 Not
	if(var_13_bool == 0) goto Label_23; // 0x15 JumpB
	goto Label_37; // 0x16 Jump
	
Label_37:
	return 10; // 0x25 Return
	
Label_23:
	var_14_string = "scripted"; // 0x17 PushS
	var_15_object = Obj(); // 0x18 PushV
	func_71(var_15_object); // 0x19 NEW_2
	var_18_cvector = CVector(0.0, 0.0, 1.0); // 0x1b PushVec
	var_19_string = "fireplace.xml"; // 0x1c PushS
	AddActorByType(var_11_object, var_14_string, var_15_object, var_10_cvector, var_18_cvector, var_19_string); // 0x1d Func
	add(var_11_object); // 0x1f TObjFunc
	var_11_object = 0; // 0x21 SetNull
	var_20_int = 1; // 0x22 PushI
	var_7_int = var_7_int + var_20_int; // 0x23 Add2
	goto Label_16; // 0x24 Jump
}


func_50(var_1_object)
{
	var_13_object = Obj(); // 0x32 PushV
	var_13_object = var_1_object; // 0x33 MovT
	func_77(var_13_object); // 0x34 NEW_2
	clear(); // 0x36 TObjFunc
	return 0; // 0x38 Return
}


