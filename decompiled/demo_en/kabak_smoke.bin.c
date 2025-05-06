task_0_event_6()
{
	var_0_object = Obj(); // 0x2f PushV
	func_60(var_0_object); // 0x30 NEW_2
	RemoveActor(var_0_object); // 0x32 Func
	sync(); // 0x34 Func
	return 0; // 0x36 Return
}


main()
{
	var_0_object = Obj(); var_1_object = Obj(); // 0x0 PushV
	var_2_bool = 0; // 0x1 PushV
	func_55(var_2_bool); // 0x2 NEW_2
	var_5_bool = var_2_bool == 0; // 0x4 Not
	if(var_5_bool == 0) goto Label_12; // 0x5 JumpB
	var_6_object = Obj(); // 0x6 PushV
	func_60(var_6_object); // 0x7 NEW_2
	RemoveActor(var_6_object); // 0x9 Func
	return 2; // 0xb Return
	
Label_12:
	var_9_string = "smoke"; // 0xc PushS
	FindParticleSystem(var_9_string, var_1_object); // 0xd Func
	Enable(); // 0xf ObjFunc
	var_10_cvector = CVector(0.0, 0.0, 0.0); // 0x11 PushVec
	var_11_cvector = CVector(0.0, 0.0, 0.0); // 0x12 PushVec
	var_12_float = 1.5; // 0x13 PushF
	AddSource(var_10_cvector, var_11_cvector, var_12_float); // 0x14 ObjFunc
	var_13_cvector = CVector(150.0, 0.0, 150.0); // 0x16 PushVec
	var_14_cvector = CVector(0.0, 0.0, 0.0); // 0x17 PushVec
	var_15_float = 1.5; // 0x18 PushF
	AddSource(var_13_cvector, var_14_cvector, var_15_float); // 0x19 ObjFunc
	var_16_cvector = CVector(-150.0, 0.0, -150.0); // 0x1b PushVec
	var_17_cvector = CVector(0.0, 0.0, 0.0); // 0x1c PushVec
	var_18_float = 1.5; // 0x1d PushF
	AddSource(var_16_cvector, var_17_cvector, var_18_float); // 0x1e ObjFunc
	var_19_cvector = CVector(-150.0, 0.0, 150.0); // 0x20 PushVec
	var_20_cvector = CVector(0.0, 0.0, 0.0); // 0x21 PushVec
	var_21_float = 1.5; // 0x22 PushF
	AddSource(var_19_cvector, var_20_cvector, var_21_float); // 0x23 ObjFunc
	var_22_cvector = CVector(150.0, 0.0, -150.0); // 0x25 PushVec
	var_23_cvector = CVector(0.0, 0.0, 0.0); // 0x26 PushVec
	var_24_float = 1.5; // 0x27 PushF
	AddSource(var_22_cvector, var_23_cvector, var_24_float); // 0x28 ObjFunc
	
Label_42:
	Hold(); // 0x2a Func
	goto Label_42; // 0x2c Jump
}


func_60(var_6_object)
{
	var_7_object = Obj(); var_8_object = Obj(); // 0x3c PushV
	self(var_8_object); // 0x3d Func
	var_6_object = var_8_object; // 0x3f Mov
	return 2; // 0x40 Return
}


func_55(var_2_bool)
{
	var_3_bool = 0; var_4_bool = 0; // 0x37 PushV
	IsLoaded(var_4_bool); // 0x38 Func
	var_2_bool = var_4_bool; // 0x3a Mov
	return 2; // 0x3b Return
}


