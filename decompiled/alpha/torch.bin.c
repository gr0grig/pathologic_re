task_0_event_26(var_0_string)
{
	var_1_string = "remove"; // 0x1a PushS
	var_2_bool = var_0_string == var_1_string; // 0x1b Eq
	if(var_2_bool == 0) goto Label_34; // 0x1c JumpB
	TaskCall(1); // 0x1e TaskCall
	func_35(); // 0x1f Call
	TaskReturn(); // 0x20 TaskReturn
	
Label_34:
	return 0; // 0x22 Return
}


main()
{
	var_0_object = Obj(); var_1_object = Obj(); // 0x0 PushV
	var_2_string = "torch"; // 0x1 PushS
	FindParticleSystem(var_2_string, var_1_object); // 0x2 Func
	var_3_bool = var_1_object == 0; // 0x4 NullEq
	if(var_3_bool == 0) goto Label_10; // 0x5 JumpB
	var_4_string = "Can't find torch particle system"; // 0x6 PushS
	Trace(var_4_string); // 0x7 Func
	return 2; // 0x9 Return
	
Label_10:
	var_5_cvector = CVector(0.0, 0.0, 0.0); // 0xa PushVec
	var_6_cvector = CVector(0.0, 1.0, 0.0); // 0xb PushVec
	var_7_float = 0.0; // 0xc PushF
	AddSource(var_5_cvector, var_6_cvector, var_7_float); // 0xd ObjFunc
	Enable(); // 0xf ObjFunc
	var_8_object = GlobalVars[0]; // 0x11 PushGE
	var_8_object = var_1_object; // 0x12 Mov
	GlobalVars[0] = var_8_object; // 0x13 PopGE
	
Label_20:
	Hold(); // 0x14 Func
	goto Label_20; // 0x16 Jump
}


func_51(var_6_object)
{
	var_7_object = Obj(); var_8_object = Obj(); // 0x33 PushV
	self(var_8_object); // 0x34 Func
	var_6_object = var_8_object; // 0x36 Mov
	return 2; // 0x37 Return
}


func_35()
{
	var_3_object = GlobalVars[0]; // 0x23 PushGE
	if(var_3_object == 0) goto Label_40; // 0x24 JumpB
	var_4_object = GlobalVars[0]; // 0x25 PushGE
	Fade(); // 0x26 ObjFunc
	
Label_40:
	var_5_int = 1; // 0x28 PushI
	Sleep(var_5_int); // 0x29 Func
	var_6_object = Obj(); // 0x2b PushV
	func_51(var_6_object); // 0x2c Call
	RemoveActor(var_6_object); // 0x2e Func
	Hold(); // 0x30 Func
	return 0; // 0x32 Return
}


