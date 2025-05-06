task_0_event_6()
{
	var_0_object = Obj(); // 0x26 PushV
	func_51(var_0_object); // 0x27 NEW_2
	RemoveActor(var_0_object); // 0x29 Func
	sync(); // 0x2b Func
	return 0; // 0x2d Return
}


main()
{
	var_0_object = Obj(); var_1_object = Obj(); // 0x0 PushV
	var_2_bool = 0; // 0x1 PushV
	func_46(var_2_bool); // 0x2 NEW_2
	var_5_bool = var_2_bool == 0; // 0x4 Not
	if(var_5_bool == 0) goto Label_12; // 0x5 JumpB
	var_6_object = Obj(); // 0x6 PushV
	func_51(var_6_object); // 0x7 NEW_2
	RemoveActor(var_6_object); // 0x9 Func
	return 2; // 0xb Return
	
Label_12:
	var_9_string = "richochet"; // 0xc PushS
	FindParticleSystem(var_9_string, var_1_object); // 0xd Func
	Enable(); // 0xf ObjFunc
	var_10_cvector = CVector(0.0, 0.0, 0.0); // 0x11 PushVec
	var_11_cvector = CVector(0.0, 400.0, 0.0); // 0x12 PushVec
	var_12_float = 1.5; // 0x13 PushF
	AddSource(var_10_cvector, var_11_cvector, var_12_float); // 0x14 ObjFunc
	var_13_float = 0.5; // 0x16 PushF
	Sleep(var_13_float); // 0x17 Func
	var_14_bool = 1; // 0x19 PushB
	Fade(var_14_bool); // 0x1a ObjFunc
	var_15_float = 0.5; // 0x1c PushF
	Sleep(var_15_float); // 0x1d Func
	var_16_object = Obj(); // 0x1f PushV
	func_51(var_16_object); // 0x20 NEW_2
	RemoveActor(var_16_object); // 0x22 Func
	return 2; // 0x24 Return
}


func_51(var_6_object)
{
	var_7_object = Obj(); var_8_object = Obj(); // 0x33 PushV
	self(var_8_object); // 0x34 Func
	var_6_object = var_8_object; // 0x36 Mov
	return 2; // 0x37 Return
}


func_46(var_2_bool)
{
	var_3_bool = 0; var_4_bool = 0; // 0x2e PushV
	IsLoaded(var_4_bool); // 0x2f Func
	var_2_bool = var_4_bool; // 0x31 Mov
	return 2; // 0x32 Return
}


