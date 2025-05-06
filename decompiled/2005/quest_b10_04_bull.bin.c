task_0_event_6(var_0_bool)
{
	StopAnimation(); // 0x22 Func
	var_1_bool = var_0_bool; // 0x24 PushT
	if(var_1_bool == 0) goto Label_43; // 0x25 JumpB
	var_2_object = Obj(); // 0x26 PushV
	func_74(var_2_object); // 0x27 NEW_2
	RemoveActor(var_2_object); // 0x29 Func
	
Label_43:
	Hold(); // 0x2b Func
	return 0; // 0x2d Return
}


task_0_event_5(var_0_bool)
{
	StopGroup0(); // 0x2e Func
	return 0; // 0x30 Return
}


task_0_event_26(var_0_bool, var_1_string)
{
	var_2_bool = 0; var_3_bool = 0; // 0x31 PushV
	var_4_string = "cleanup"; // 0x32 PushS
	var_5_bool = var_1_string == var_4_string; // 0x33 Eq
	if(var_5_bool == 0) goto Label_64; // 0x34 JumpB
	var_0_bool = 1; // 0x35 TMovB
	IsLoaded(var_3_bool); // 0x36 Func
	var_6_bool = var_3_bool == 0; // 0x38 Not
	if(var_6_bool == 0) goto Label_63; // 0x39 JumpB
	var_7_object = Obj(); // 0x3a PushV
	func_74(var_7_object); // 0x3b NEW_2
	RemoveActor(var_7_object); // 0x3d Func
	
Label_63:
	goto Label_68; // 0x3f Jump
	
Label_68:
	return 2; // 0x44 Return
	
Label_64:
	var_10_string = "restore"; // 0x40 PushS
	var_11_bool = var_1_string == var_10_string; // 0x41 Eq
	if(var_11_bool == 0) goto Label_68; // 0x42 JumpB
	var_0_bool = 0; // 0x43 TMovB
}


event_32(var_0_bool)
{
	var_1_object = GlobalVars[0]; // 0x50 PushGE
	if(var_1_object == 0) goto Label_85; // 0x51 JumpB
	var_2_object = GlobalVars[0]; // 0x52 PushGE
	RemoveActor(var_2_object); // 0x53 Func
	
Label_85:
	return 0; // 0x55 Return
}


main(var_0_bool)
{
	var_1_bool = 0; // 0x0 PushV
	func_69(var_1_bool); // 0x1 NEW_2
	var_4_bool = var_1_bool == 0; // 0x3 Not
	if(var_4_bool == 0) goto Label_7; // 0x4 JumpB
	Hold(); // 0x5 Func
	
Label_7:
	func_20(); // 0x8 NEW_2
	
Label_10:
	var_13_bool = 1; // 0xa PushB
	if(var_13_bool == 0) goto Label_19; // 0xb JumpB
	var_14_string = "all"; // 0xc PushS
	var_15_string = "ill"; // 0xd PushS
	PlayAnimation(var_14_string, var_15_string); // 0xe Func
	WaitForAnimEnd(); // 0x10 Func
	goto Label_10; // 0x12 Jump
	
Label_19:
	return 0; // 0x13 Return
}


func_74(var_7_object)
{
	var_8_object = Obj(); var_9_object = Obj(); // 0x4a PushV
	self(var_9_object); // 0x4b Func
	var_7_object = var_9_object; // 0x4d Mov
	return 2; // 0x4e Return
}


func_20()
{
	var_5_object = Obj(); var_6_object = Obj(); var_7_object = Obj(); var_8_object = Obj(); // 0x14 PushV
	GetScene(var_7_object); // 0x15 Func
	var_9_string = "b10q04_bull_envelope"; // 0x17 PushS
	var_10_cvector = CVector(0.0, 0.0, 0.0); // 0x18 PushVec
	var_11_cvector = CVector(0.0, 0.0, 1.0); // 0x19 PushVec
	AddActor(var_8_object, var_9_string, var_7_object, var_10_cvector, var_11_cvector); // 0x1a Func
	var_12_object = GlobalVars[0]; // 0x1c PushGE
	var_12_object = var_8_object; // 0x1d Mov
	GlobalVars[0] = var_12_object; // 0x1e PopGE
	return 4; // 0x1f Return
}


func_69(var_1_bool)
{
	var_2_bool = 0; var_3_bool = 0; // 0x45 PushV
	IsLoaded(var_3_bool); // 0x46 Func
	var_1_bool = var_3_bool; // 0x48 Mov
	return 2; // 0x49 Return
}


