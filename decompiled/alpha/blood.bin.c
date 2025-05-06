task_0_event_6()
{
	SetDeathStateAndRemove(); // 0x20 Func
	sync(); // 0x22 Func
	return 0; // 0x24 Return
}


main()
{
	var_0_object = Obj(); var_1_object = Obj(); // 0x0 PushV
	var_2_bool = 0; // 0x1 PushV
	func_37(var_2_bool); // 0x2 Call
	var_5_bool = var_2_bool == 0; // 0x4 Not
	if(var_5_bool == 0) goto Label_9; // 0x5 JumpB
	SetDeathStateAndRemove(); // 0x6 Func
	return 2; // 0x8 Return
	
Label_9:
	var_6_string = "blood"; // 0x9 PushS
	FindParticleSystem(var_6_string, var_1_object); // 0xa Func
	Enable(); // 0xc ObjFunc
	var_7_cvector = CVector(0.0, 0.0, 0.0); // 0xe PushVec
	var_8_cvector = CVector(0.0, 400.0, 0.0); // 0xf PushVec
	var_9_float = 1.5; // 0x10 PushF
	AddSource(var_7_cvector, var_8_cvector, var_9_float); // 0x11 ObjFunc
	var_10_float = 0.5; // 0x13 PushF
	Sleep(var_10_float); // 0x14 Func
	var_11_bool = 1; // 0x16 PushB
	Fade(var_11_bool); // 0x17 ObjFunc
	var_12_float = 1.0; // 0x19 PushF
	Sleep(var_12_float); // 0x1a Func
	SetDeathStateAndRemove(); // 0x1c Func
	return 2; // 0x1e Return
}


func_37(var_2_bool)
{
	var_3_bool = 0; var_4_bool = 0; // 0x25 PushV
	IsLoaded(var_4_bool); // 0x26 Func
	var_2_bool = var_4_bool; // 0x28 Mov
	return 2; // 0x29 Return
}


