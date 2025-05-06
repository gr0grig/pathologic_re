main()
{
	func_4(); // 0x1 NEW_2
	return 0; // 0x3 Return
}


func_4()
{
	var_0_object = Obj(); var_1_object = Obj(); var_2_bool = 0; var_3_cvector = CVector(0,0,0); var_4_cvector = CVector(0,0,0); var_5_object = Obj(); var_6_object = Obj(); var_7_bool = 0; var_8_cvector = CVector(0,0,0); var_9_cvector = CVector(0,0,0); // 0x4 PushV
	var_10_string = "player"; // 0x5 PushS
	FindActor(var_5_object, var_10_string); // 0x6 Func
	var_11_string = "test_scene"; // 0x8 PushS
	GetSceneByName(var_6_object, var_11_string); // 0x9 Func
	var_12_string = "birth"; // 0xb PushS
	GetLocator(var_12_string, var_7_bool, var_8_cvector, var_9_cvector); // 0xc ObjFunc
	var_13_bool = var_7_bool; // 0xe Push
	if(var_13_bool == 0) goto Label_18; // 0xf JumpB
	Teleport(var_5_object, var_6_object, var_8_cvector, var_9_cvector); // 0x10 Func
	
Label_18:
	return 10; // 0x12 Return
}


