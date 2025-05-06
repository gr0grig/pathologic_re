task_0_event_6()
{
	SetDeathStateAndRemove(); // 0x2d Func
	sync(); // 0x2f Func
	return 0; // 0x31 Return
}


main()
{
	var_0_object = Obj(); var_1_cvector = CVector(0,0,0); var_2_object = Obj(); var_3_object = Obj(); var_4_cvector = CVector(0,0,0); var_5_object = Obj(); // 0x0 PushV
	var_6_string = "player"; // 0x1 PushS
	FindActor(var_3_object, var_6_string); // 0x2 Func
	var_7_bool = var_3_object == 0; // 0x4 NullEq
	if(var_7_bool == 0) goto Label_7; // 0x5 JumpB
	return 6; // 0x6 Return
	
Label_7:
	GetDirection(var_4_cvector); // 0x7 ObjFunc
	var_8_string = "smoke"; // 0x9 PushS
	var_9_int = 20; // 0xa PushI
	CreateSmoke(var_5_object, var_8_string, var_9_int); // 0xb Func
	var_10_int = 100; // 0xd PushI
	var_11_float = var_4_cvector * var_10_int; // 0xe Mult
	AddSource(var_11_float, var_4_cvector); // 0xf ObjFunc
	var_12_float = 0.8; // 0x11 PushF
	SetOpacity(var_12_float); // 0x12 ObjFunc
	var_13_int = 500; // 0x14 PushI
	var_14_int = 100; // 0x15 PushI
	SetSpeed(var_13_int, var_14_int); // 0x16 ObjFunc
	var_15_float = 1.5; // 0x18 PushF
	SetLifeTime(var_15_float); // 0x19 ObjFunc
	Enable(); // 0x1b ObjFunc
	var_16_bool = 0; // 0x1d PushB
	Fade(var_16_bool); // 0x1e ObjFunc
	var_17_float = 1.5; // 0x20 PushF
	Sleep(var_17_float); // 0x21 Func
	Fade(); // 0x23 ObjFunc
	var_18_float = 1.5; // 0x25 PushF
	Sleep(var_18_float); // 0x26 Func
	SetDeathStateAndRemove(); // 0x28 Func
	return 6; // 0x2a Return
}


