task_0_event_5(var_0_object, var_1_bool)
{
	var_2_float = 0; var_3_object = Obj(); var_4_float = 0; var_5_object = Obj(); // 0x0 PushV
	var_6_bool = var_1_bool == 0; // 0x1 Not
	if(var_6_bool == 0) goto Label_17; // 0x2 JumpB
	GetGameTime(var_4_float); // 0x3 Func
	var_7_int = 168; // 0x5 PushI
	var_8_bool = var_4_float >= var_7_int; // 0x6 GE
	if(var_8_bool == 0) goto Label_17; // 0x7 JumpB
	var_1_bool = 1; // 0x8 TMovB
	var_9_string = "d8q01_well_block"; // 0x9 PushS
	var_10_object = Obj(); // 0xa PushV
	func_44(var_10_object); // 0xb NEW_2
	var_13_cvector = CVector(0.0, 0.0, 0.0); // 0xd PushVec
	AddActor(var_5_object, var_9_string, var_10_object, var_13_cvector); // 0xe Func
	var_5_object = 0; // 0x10 SetNull
	
Label_17:
	func_21(); // 0x12 NEW_2
	return 4; // 0x14 Return
}


task_0_event_6(var_0_object, var_1_bool)
{
	func_39(var_1_bool); // 0x1d NEW_2
	sync(); // 0x1f Func
	return 0; // 0x21 Return
}


main(var_0_object, var_1_bool)
{
	func_34(var_1_bool); // 0x16 NEW_2
	
Label_24:
	Hold(); // 0x18 Func
	goto Label_24; // 0x1a Jump
}


func_34(var_0_object)
{
	var_2_object = Obj(); // 0x22 PushV
	func_50(var_2_object); // 0x23 NEW_2
	var_0_object = var_2_object; // 0x24 TMov
	return 0; // 0x26 Return
}


func_39(var_0_object)
{
	var_2_object = Obj(); // 0x27 PushV
	var_2_object = var_0_object; // 0x28 MovT
	func_56(var_2_object); // 0x29 NEW_2
	return 0; // 0x2b Return
}


func_44(var_10_object)
{
	var_11_object = Obj(); var_12_object = Obj(); // 0x2c PushV
	self(var_12_object); // 0x2d Func
	var_10_object = var_12_object; // 0x2f Mov
	return 2; // 0x30 Return
}


func_50(var_2_object)
{
	var_3_object = Obj(); var_4_object = Obj(); // 0x32 PushV
	CreateObjectVector(var_4_object); // 0x33 Func
	var_2_object = var_4_object; // 0x35 Mov
	return 2; // 0x36 Return
}


func_56(var_2_object)
{
	var_3_int = 0; var_4_int = 0; var_5_object = Obj(); var_6_int = 0; var_7_int = 0; var_8_object = Obj(); // 0x38 PushV
	var_9_object = var_2_object; // 0x39 Push
	if(var_9_object == 0) goto Label_76; // 0x3a JumpB
	size(var_6_int); // 0x3b ObjFunc
	var_7_int = 0; // 0x3d MovI
	
Label_62:
	var_10_bool = var_7_int < var_6_int; // 0x3e LT
	if(var_10_bool == 0) goto Label_74; // 0x3f JumpB
	get(var_8_object, var_7_int); // 0x40 ObjFunc
	var_11_object = var_8_object; // 0x42 Push
	if(var_11_object == 0) goto Label_70; // 0x43 JumpB
	RemoveActor(var_8_object); // 0x44 Func
	
Label_70:
	var_8_object = 0; // 0x46 SetNull
	var_12_int = 1; // 0x47 PushI
	var_7_int = var_7_int + var_12_int; // 0x48 Add2
	goto Label_62; // 0x49 Jump
	
Label_74:
	clear(); // 0x4a ObjFunc
	
Label_76:
	return 6; // 0x4c Return
}


