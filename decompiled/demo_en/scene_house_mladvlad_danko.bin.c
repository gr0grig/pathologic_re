task_0_event_5(var_0_object)
{
	var_1_string = ""; // 0x7 PushV
	var_1_string = "pt_rat"; // 0x8 MovS
	func_36(var_1_string); // 0x9 NEW_2
	sync(); // 0xb Func
	return 0; // 0xd Return
}


task_0_event_6(var_0_object)
{
	func_31(var_0_object); // 0xf NEW_2
	sync(); // 0x11 Func
	return 0; // 0x13 Return
}


main(var_0_object)
{
	func_26(var_0_object); // 0x1 NEW_2
	
Label_3:
	Hold(); // 0x3 Func
	goto Label_3; // 0x5 Jump
}


func_36(var_1_string)
{
	var_2_int = 0; var_3_bool = 0; var_4_cvector = CVector(0,0,0); var_5_cvector = CVector(0,0,0); var_6_int = 0; var_7_bool = 0; var_8_cvector = CVector(0,0,0); var_9_cvector = CVector(0,0,0); // 0x24 PushV
	func_31(var_9_cvector); // 0x26 NEW_2
	var_6_int = 1; // 0x28 MovI
	
Label_41:
	var_21_int = var_1_string + var_6_int; // 0x29 Add
	GetLocator(var_21_int, var_7_bool, var_8_cvector, var_9_cvector); // 0x2a Func
	var_22_bool = var_7_bool == 0; // 0x2c Not
	if(var_22_bool == 0) goto Label_47; // 0x2d JumpB
	goto Label_58; // 0x2e Jump
	
Label_58:
	return 8; // 0x3a Return
	
Label_47:
	var_23_object = Obj(); var_24_int = 0; var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); // 0x2f PushV
	var_24_int = var_6_int; // 0x30 Mov
	var_25_cvector = var_8_cvector; // 0x31 Mov
	var_26_cvector = var_9_cvector; // 0x32 Mov
	func_59(var_23_object, var_24_int, var_25_cvector, var_26_cvector); // 0x33 NEW_2
	add(var_23_object); // 0x35 TObjFunc
	var_36_int = 1; // 0x37 PushI
	var_6_int = var_6_int + var_36_int; // 0x38 Add2
	goto Label_41; // 0x39 Jump
}


func_76(var_31_object)
{
	var_32_object = Obj(); var_33_object = Obj(); // 0x4c PushV
	self(var_33_object); // 0x4d Func
	var_31_object = var_33_object; // 0x4f Mov
	return 2; // 0x50 Return
}


func_82(var_1_object)
{
	var_2_object = Obj(); var_3_object = Obj(); // 0x52 PushV
	CreateObjectVector(var_3_object); // 0x53 Func
	var_1_object = var_3_object; // 0x55 Mov
	return 2; // 0x56 Return
}


func_20(var_29_string)
{
	var_29_string = "pers_rat"; // 0x15 MovS
	return 0; // 0x16 Return
}


func_23(var_34_string)
{
	var_34_string = "rat_indoor.xml"; // 0x18 MovS
	return 0; // 0x19 Return
}


func_88(var_1_object)
{
	var_2_int = 0; var_3_int = 0; var_4_object = Obj(); var_5_int = 0; var_6_int = 0; var_7_object = Obj(); // 0x58 PushV
	var_8_object = var_1_object; // 0x59 Push
	if(var_8_object == 0) goto Label_108; // 0x5a JumpB
	size(var_5_int); // 0x5b ObjFunc
	var_6_int = 0; // 0x5d MovI
	
Label_94:
	var_9_bool = var_6_int < var_5_int; // 0x5e LT
	if(var_9_bool == 0) goto Label_106; // 0x5f JumpB
	get(var_7_object, var_6_int); // 0x60 ObjFunc
	var_10_object = var_7_object; // 0x62 Push
	if(var_10_object == 0) goto Label_102; // 0x63 JumpB
	RemoveActor(var_7_object); // 0x64 Func
	
Label_102:
	var_7_object = 0; // 0x66 SetNull
	var_11_int = 1; // 0x67 PushI
	var_6_int = var_6_int + var_11_int; // 0x68 Add2
	goto Label_94; // 0x69 Jump
	
Label_106:
	clear(); // 0x6a ObjFunc
	
Label_108:
	return 6; // 0x6c Return
}


func_26(var_0_object)
{
	var_1_object = Obj(); // 0x1a PushV
	func_82(var_1_object); // 0x1b NEW_2
	var_0_object = var_1_object; // 0x1c TMov
	return 0; // 0x1e Return
}


func_59(var_23_object, var_24_int, var_25_cvector, var_26_cvector)
{
	var_27_object = Obj(); var_28_object = Obj(); // 0x3b PushV
	var_29_string = ""; var_30_int = 0; // 0x3c PushV
	var_30_int = var_24_int; // 0x3d Mov
	func_20(var_30_int); // 0x3e NEW_2
	var_31_object = Obj(); // 0x40 PushV
	func_76(var_31_object); // 0x41 NEW_2
	var_34_string = ""; var_35_int = 0; // 0x43 PushV
	var_35_int = var_24_int; // 0x44 Mov
	func_23(var_35_int); // 0x45 NEW_2
	AddActor(var_28_object, var_29_string, var_31_object, var_25_cvector, var_26_cvector, var_34_string); // 0x47 Func
	var_23_object = var_28_object; // 0x49 Mov
	return 2; // 0x4a Return
}


func_31(var_0_object)
{
	var_1_object = Obj(); // 0x1f PushV
	var_1_object = var_0_object; // 0x20 MovT
	func_88(var_1_object); // 0x21 NEW_2
	return 0; // 0x23 Return
}


