task_0_event_0(var_0_bool, var_1_object)
{
	var_2_float = 0; var_3_cvector = CVector(0,0,0); var_4_float = 0; var_5_cvector = CVector(0,0,0); // 0x4 PushV
	GetEyesHeight(var_4_float); // 0x5 ObjFunc
	var_5_cvector = CVector(0.0, 0.0, 0.0); // 0x7 MovV
	var_6_float = GetByIndex(var_5_cvector, 1); // 0x8 PushE
	var_6_float = var_4_float; // 0x9 Mov
	SetByIndex(var_5_cvector, 1) = var_6_float; // 0xa PopE
	lshLookAsync(var_1_object, var_5_cvector); // 0xb Func
	var_7_string = "LOOK ASYNC"; // 0xd PushS
	Trace(var_7_string); // 0xe Func
	return 4; // 0x10 Return
}


task_0_event_26(var_0_bool, var_1_string)
{
	var_2_bool = 0; var_3_bool = 0; // 0x15 PushV
	var_4_string = "cleanup"; // 0x16 PushS
	var_5_bool = var_1_string == var_4_string; // 0x17 Eq
	if(var_5_bool == 0) goto Label_44; // 0x18 JumpB
	var_0_bool = 1; // 0x19 TMovB
	IsLoaded(var_3_bool); // 0x1a Func
	var_6_bool = 0; // 0x1c PushV
	var_6_bool = 0; // 0x1d MovB
	var_7_bool = var_3_bool == 0; // 0x1e Not
	if(var_7_bool == 0) goto Label_37; // 0x1f JumpB
	var_8_bool = 0; // 0x20 PushV
	func_65(var_8_bool); // 0x21 NEW_2
	if(var_8_bool == 0) goto Label_37; // 0x23 JumpB
	var_6_bool = 1; // 0x24 MovB
	
Label_37:
	if(var_6_bool == 0) goto Label_43; // 0x25 JumpB
	var_9_object = Obj(); // 0x26 PushV
	func_67(var_9_object); // 0x27 NEW_2
	RemoveActor(var_9_object); // 0x29 Func
	
Label_43:
	goto Label_48; // 0x2b Jump
	
Label_48:
	return 2; // 0x30 Return
	
Label_44:
	var_12_string = "restore"; // 0x2c PushS
	var_13_bool = var_1_string == var_12_string; // 0x2d Eq
	if(var_13_bool == 0) goto Label_48; // 0x2e JumpB
	var_0_bool = 0; // 0x2f TMovB
}


task_0_event_6(var_0_bool)
{
	var_1_bool = 0; // 0x31 PushV
	var_1_bool = 0; // 0x32 MovB
	var_2_bool = var_0_bool; // 0x33 PushT
	if(var_2_bool == 0) goto Label_58; // 0x34 JumpB
	var_3_bool = 0; // 0x35 PushV
	func_65(var_3_bool); // 0x36 NEW_2
	if(var_3_bool == 0) goto Label_58; // 0x38 JumpB
	var_1_bool = 1; // 0x39 MovB
	
Label_58:
	if(var_1_bool == 0) goto Label_64; // 0x3a JumpB
	var_4_object = Obj(); // 0x3b PushV
	func_67(var_4_object); // 0x3c NEW_2
	RemoveActor(var_4_object); // 0x3e Func
	
Label_64:
	return 0; // 0x40 Return
}


main(var_0_bool)
{
	func_17(); // 0x1 NEW_2
	return 0; // 0x3 Return
}


func_65(var_3_bool)
{
	var_3_bool = 1; // 0x41 MovB
	return 0; // 0x42 Return
}


func_67(var_4_object)
{
	var_5_object = Obj(); var_6_object = Obj(); // 0x43 PushV
	self(var_6_object); // 0x44 Func
	var_4_object = var_6_object; // 0x46 Mov
	return 2; // 0x47 Return
}


func_17()
{
	
Label_17:
	Hold(); // 0x11 Func
	goto Label_17; // 0x13 Jump
}


