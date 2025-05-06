task_0_event_5()
{
	StopGroup0(); // 0x4c Func
	return 0; // 0x4e Return
}


main()
{
	var_0_object = Obj(); var_1_object = Obj(); var_2_object = Obj(); var_3_object = Obj(); // 0x0 PushV
	var_4_bool = 0; // 0x1 PushV
	func_79(var_4_bool); // 0x2 NEW_2
	var_7_bool = var_4_bool == 0; // 0x4 Not
	if(var_7_bool == 0) goto Label_8; // 0x5 JumpB
	Hold(); // 0x6 Func
	
Label_8:
	var_8_string = "bonfire"; // 0x8 PushS
	FindParticleSystem(var_8_string, var_2_object); // 0x9 Func
	var_9_bool = var_2_object == 0; // 0xb NullEq
	if(var_9_bool == 0) goto Label_17; // 0xc JumpB
	var_10_string = "Can't find fire particle system"; // 0xd PushS
	Trace(var_10_string); // 0xe Func
	return 4; // 0x10 Return
	
Label_17:
	var_11_cvector = CVector(0.0, 0.0, 0.0); // 0x11 PushVec
	var_12_cvector = CVector(0.0, 1.0, 0.0); // 0x12 PushVec
	var_13_float = 0.0; // 0x13 PushF
	AddSource(var_11_cvector, var_12_cvector, var_13_float); // 0x14 ObjFunc
	var_14_cvector = CVector(10.0, 0.0, 0.0); // 0x16 PushVec
	var_15_cvector = CVector(0.0, 1.0, 0.0); // 0x17 PushVec
	var_16_float = 0.0; // 0x18 PushF
	AddSource(var_14_cvector, var_15_cvector, var_16_float); // 0x19 ObjFunc
	var_17_cvector = CVector(0.0, 0.0, 10.0); // 0x1b PushVec
	var_18_cvector = CVector(0.0, 1.0, 0.0); // 0x1c PushVec
	var_19_float = 0.0; // 0x1d PushF
	AddSource(var_17_cvector, var_18_cvector, var_19_float); // 0x1e ObjFunc
	var_20_cvector = CVector(-10.0, 0.0, 0.0); // 0x20 PushVec
	var_21_cvector = CVector(0.0, 1.0, 0.0); // 0x21 PushVec
	var_22_float = 0.0; // 0x22 PushF
	AddSource(var_20_cvector, var_21_cvector, var_22_float); // 0x23 ObjFunc
	var_23_cvector = CVector(0.0, 0.0, -10.0); // 0x25 PushVec
	var_24_cvector = CVector(0.0, 1.0, 0.0); // 0x26 PushVec
	var_25_float = 0.0; // 0x27 PushF
	AddSource(var_23_cvector, var_24_cvector, var_25_float); // 0x28 ObjFunc
	var_26_cvector = CVector(10.0, 0.0, 10.0); // 0x2a PushVec
	var_27_cvector = CVector(0.0, 1.0, 0.0); // 0x2b PushVec
	var_28_float = 0.0; // 0x2c PushF
	AddSource(var_26_cvector, var_27_cvector, var_28_float); // 0x2d ObjFunc
	var_29_cvector = CVector(-10.0, 0.0, -10.0); // 0x2f PushVec
	var_30_cvector = CVector(0.0, 1.0, 0.0); // 0x30 PushVec
	var_31_float = 0.0; // 0x31 PushF
	AddSource(var_29_cvector, var_30_cvector, var_31_float); // 0x32 ObjFunc
	var_32_cvector = CVector(-10.0, 0.0, 10.0); // 0x34 PushVec
	var_33_cvector = CVector(0.0, 1.0, 0.0); // 0x35 PushVec
	var_34_float = 0.0; // 0x36 PushF
	AddSource(var_32_cvector, var_33_cvector, var_34_float); // 0x37 ObjFunc
	var_35_cvector = CVector(10.0, 0.0, -10.0); // 0x39 PushVec
	var_36_cvector = CVector(0.0, 1.0, 0.0); // 0x3a PushVec
	var_37_float = 0.0; // 0x3b PushF
	AddSource(var_35_cvector, var_36_cvector, var_37_float); // 0x3c ObjFunc
	Enable(); // 0x3e ObjFunc
	
Label_64:
	var_38_bool = 1; // 0x40 PushB
	if(var_38_bool == 0) goto Label_74; // 0x41 JumpB
	var_39_string = "fire_loop"; // 0x42 PushS
	var_40_cvector = CVector(0.0, 10.0, 0.0); // 0x43 PushVec
	PlayLoopedGlobalSound(var_3_object, var_39_string, var_40_cvector); // 0x44 Func
	Hold(); // 0x46 Func
	var_3_object = 0; // 0x48 SetNull
	goto Label_64; // 0x49 Jump
	
Label_74:
	return 4; // 0x4a Return
}


func_79(var_4_bool)
{
	var_5_bool = 0; var_6_bool = 0; // 0x4f PushV
	IsLoaded(var_6_bool); // 0x50 Func
	var_4_bool = var_6_bool; // 0x52 Mov
	return 2; // 0x53 Return
}


