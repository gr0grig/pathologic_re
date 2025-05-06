main()
{
	var_0_object = Obj(); var_1_object = Obj(); // 0x0 PushV
	var_2_string = "player"; // 0x1 PushS
	FindActor(var_1_object, var_2_string); // 0x2 Func
	var_3_object = Obj(); // 0x4 PushV
	var_3_object = var_1_object; // 0x5 Mov
	func_12(var_3_object); // 0x6 Call
	Hold(); // 0x8 Func
	return 2; // 0xa Return
}


func_12(var_3_object)
{
	var_4_float = 0; var_5_cvector = CVector(0,0,0); var_6_float = 0; var_7_cvector = CVector(0,0,0); // 0xc PushV
	GetEyesHeight(var_6_float); // 0xd ObjFunc
	var_7_cvector = CVector(0.0, 0.0, 0.0); // 0xf MovV
	var_8_float = GetByIndex(var_7_cvector, 1); // 0x10 PushE
	var_8_float = var_6_float; // 0x11 Mov
	SetByIndex(var_7_cvector, 1) = var_8_float; // 0x12 PopE
	var_9_string = "head"; // 0x13 PushS
	LookAsync(var_3_object, var_9_string, var_7_cvector); // 0x14 Func
	return 4; // 0x16 Return
}


