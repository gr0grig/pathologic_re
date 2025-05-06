task_0_event_10(var_0_bool, var_1_object)
{
	var_2_bool = 0; var_3_object = Obj(); var_4_cvector = CVector(0,0,0); var_5_object = Obj(); var_6_bool = 0; var_7_object = Obj(); var_8_cvector = CVector(0,0,0); var_9_object = Obj(); // 0x7 PushV
	IsPlayerActor(var_1_object, var_6_bool); // 0x8 Func
	var_10_bool = var_6_bool; // 0xa Push
	if(var_10_bool == 0) goto Label_30; // 0xb JumpB
	var_11_string = "health"; // 0xc PushS
	var_12_int = 0; // 0xd PushI
	SetProperty(var_11_string, var_12_int); // 0xe ObjFunc
	GetScene(var_7_object); // 0x10 Func
	GetPosition(var_8_cvector); // 0x12 Func
	var_13_string = "scripted"; // 0x14 PushS
	var_14_cvector = CVector(0.0, 0.0, 0.0); // 0x15 PushVec
	var_15_string = "fire.xml"; // 0x16 PushS
	AddActorByType(var_9_object, var_13_string, var_7_object, var_8_cvector, var_14_cvector, var_15_string); // 0x17 Func
	var_16_string = "explode"; // 0x19 PushS
	PlaySound(var_16_string); // 0x1a Func
	var_9_object = 0; // 0x1c SetNull
	var_7_object = 0; // 0x1d SetNull
	
Label_30:
	return 8; // 0x1e Return
}


task_0_event_26(var_0_bool, var_1_string)
{
	var_2_bool = 0; var_3_bool = 0; // 0x23 PushV
	var_4_string = "cleanup"; // 0x24 PushS
	var_5_bool = var_1_string == var_4_string; // 0x25 Eq
	if(var_5_bool == 0) goto Label_58; // 0x26 JumpB
	var_0_bool = 1; // 0x27 TMovB
	IsLoaded(var_3_bool); // 0x28 Func
	var_6_bool = 0; // 0x2a PushV
	var_6_bool = 0; // 0x2b MovB
	var_7_bool = var_3_bool == 0; // 0x2c Not
	if(var_7_bool == 0) goto Label_51; // 0x2d JumpB
	var_8_bool = 0; // 0x2e PushV
	func_79(var_8_bool); // 0x2f NEW_2
	if(var_8_bool == 0) goto Label_51; // 0x31 JumpB
	var_6_bool = 1; // 0x32 MovB
	
Label_51:
	if(var_6_bool == 0) goto Label_57; // 0x33 JumpB
	var_9_object = Obj(); // 0x34 PushV
	func_81(var_9_object); // 0x35 NEW_2
	RemoveActor(var_9_object); // 0x37 Func
	
Label_57:
	goto Label_62; // 0x39 Jump
	
Label_62:
	return 2; // 0x3e Return
	
Label_58:
	var_12_string = "restore"; // 0x3a PushS
	var_13_bool = var_1_string == var_12_string; // 0x3b Eq
	if(var_13_bool == 0) goto Label_62; // 0x3c JumpB
	var_0_bool = 0; // 0x3d TMovB
}


task_0_event_6(var_0_bool)
{
	var_1_bool = 0; // 0x3f PushV
	var_1_bool = 0; // 0x40 MovB
	var_2_bool = var_0_bool; // 0x41 PushT
	if(var_2_bool == 0) goto Label_72; // 0x42 JumpB
	var_3_bool = 0; // 0x43 PushV
	func_79(var_3_bool); // 0x44 NEW_2
	if(var_3_bool == 0) goto Label_72; // 0x46 JumpB
	var_1_bool = 1; // 0x47 MovB
	
Label_72:
	if(var_1_bool == 0) goto Label_78; // 0x48 JumpB
	var_4_object = Obj(); // 0x49 PushV
	func_81(var_4_object); // 0x4a NEW_2
	RemoveActor(var_4_object); // 0x4c Func
	
Label_78:
	return 0; // 0x4e Return
}


main(var_0_bool)
{
	var_1_bool = 1; // 0x0 PushB
	SetVisibility(var_1_bool); // 0x1 Func
	func_31(); // 0x4 NEW_2
	return 0; // 0x6 Return
}


func_81(var_4_object)
{
	var_5_object = Obj(); var_6_object = Obj(); // 0x51 PushV
	self(var_6_object); // 0x52 Func
	var_4_object = var_6_object; // 0x54 Mov
	return 2; // 0x55 Return
}


func_79(var_3_bool)
{
	var_3_bool = 1; // 0x4f MovB
	return 0; // 0x50 Return
}


func_31()
{
	
Label_31:
	Hold(); // 0x1f Func
	goto Label_31; // 0x21 Jump
}


