task_0_event_7(var_0_int)
{
	var_1_int = 1; // 0x50 PushI
	var_2_bool = var_0_int == var_1_int; // 0x51 Eq
	if(var_2_bool == 0) goto Label_85; // 0x52 JumpB
	StopGroup0(); // 0x53 Func
	
Label_85:
	return 0; // 0x55 Return
}


task_0_event_26(var_0_string)
{
	var_1_string = "continue"; // 0x57 PushS
	var_2_bool = var_0_string == var_1_string; // 0x58 Eq
	if(var_2_bool == 0) goto Label_94; // 0x59 JumpB
	var_3_int = 1; // 0x5a PushI
	var_4_float = 5.0; // 0x5b PushF
	SetTimer(var_3_int, var_4_float); // 0x5c Func
	
Label_94:
	return 0; // 0x5e Return
}


main()
{
	var_0_object = Obj(); var_1_object = Obj(); // 0x0 PushV
	var_2_int = 1; // 0x1 PushI
	var_3_float = 5.0; // 0x2 PushF
	SetTimer(var_2_int, var_3_float); // 0x3 Func
	var_4_string = "fire"; // 0x5 PushS
	FindParticleSystem(var_4_string, var_1_object); // 0x6 Func
	var_5_bool = var_1_object == 0; // 0x8 NullEq
	if(var_5_bool == 0) goto Label_14; // 0x9 JumpB
	var_6_string = "Can't find fire particle system"; // 0xa PushS
	Trace(var_6_string); // 0xb Func
	return 2; // 0xd Return
	
Label_14:
	var_7_cvector = CVector(0.0, 0.0, 0.0); // 0xe PushVec
	var_8_cvector = CVector(0.0, 1.0, 0.0); // 0xf PushVec
	var_9_float = 0.0; // 0x10 PushF
	AddSource(var_7_cvector, var_8_cvector, var_9_float); // 0x11 ObjFunc
	var_10_cvector = CVector(10.0, 0.0, 0.0); // 0x13 PushVec
	var_11_cvector = CVector(0.0, 1.0, 0.0); // 0x14 PushVec
	var_12_float = 0.0; // 0x15 PushF
	AddSource(var_10_cvector, var_11_cvector, var_12_float); // 0x16 ObjFunc
	var_13_cvector = CVector(0.0, 0.0, 10.0); // 0x18 PushVec
	var_14_cvector = CVector(0.0, 1.0, 0.0); // 0x19 PushVec
	var_15_float = 0.0; // 0x1a PushF
	AddSource(var_13_cvector, var_14_cvector, var_15_float); // 0x1b ObjFunc
	var_16_cvector = CVector(-10.0, 0.0, 0.0); // 0x1d PushVec
	var_17_cvector = CVector(0.0, 1.0, 0.0); // 0x1e PushVec
	var_18_float = 0.0; // 0x1f PushF
	AddSource(var_16_cvector, var_17_cvector, var_18_float); // 0x20 ObjFunc
	var_19_cvector = CVector(0.0, 0.0, -10.0); // 0x22 PushVec
	var_20_cvector = CVector(0.0, 1.0, 0.0); // 0x23 PushVec
	var_21_float = 0.0; // 0x24 PushF
	AddSource(var_19_cvector, var_20_cvector, var_21_float); // 0x25 ObjFunc
	var_22_cvector = CVector(10.0, 0.0, 10.0); // 0x27 PushVec
	var_23_cvector = CVector(0.0, 1.0, 0.0); // 0x28 PushVec
	var_24_float = 0.0; // 0x29 PushF
	AddSource(var_22_cvector, var_23_cvector, var_24_float); // 0x2a ObjFunc
	var_25_cvector = CVector(-10.0, 0.0, -10.0); // 0x2c PushVec
	var_26_cvector = CVector(0.0, 1.0, 0.0); // 0x2d PushVec
	var_27_float = 0.0; // 0x2e PushF
	AddSource(var_25_cvector, var_26_cvector, var_27_float); // 0x2f ObjFunc
	var_28_cvector = CVector(-10.0, 0.0, 10.0); // 0x31 PushVec
	var_29_cvector = CVector(0.0, 1.0, 0.0); // 0x32 PushVec
	var_30_float = 0.0; // 0x33 PushF
	AddSource(var_28_cvector, var_29_cvector, var_30_float); // 0x34 ObjFunc
	var_31_cvector = CVector(10.0, 0.0, -10.0); // 0x36 PushVec
	var_32_cvector = CVector(0.0, 1.0, 0.0); // 0x37 PushVec
	var_33_float = 0.0; // 0x38 PushF
	AddSource(var_31_cvector, var_32_cvector, var_33_float); // 0x39 ObjFunc
	Enable(); // 0x3b ObjFunc
	Hold(); // 0x3d Func
	var_34_int = 1; // 0x3f PushI
	KillTimer(var_34_int); // 0x40 Func
	var_35_bool = 1; // 0x42 PushB
	Fade(var_35_bool); // 0x43 ObjFunc
	var_36_int = 2; // 0x45 PushI
	Sleep(var_36_int); // 0x46 Func
	var_37_object = Obj(); // 0x48 PushV
	func_95(var_37_object); // 0x49 NEW_2
	RemoveActor(var_37_object); // 0x4b Func
	return 2; // 0x4d Return
}


func_95(var_37_object)
{
	var_38_object = Obj(); var_39_object = Obj(); // 0x5f PushV
	self(var_39_object); // 0x60 Func
	var_37_object = var_39_object; // 0x62 Mov
	return 2; // 0x63 Return
}


