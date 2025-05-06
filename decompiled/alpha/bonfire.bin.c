task_0_event_5()
{
	StopGroup0(); // 0x3 Func
	return 0; // 0x5 Return
}


task_1_event_6()
{
	TaskCall(0); // 0x4f TaskCall
	func_0(); // 0x50 Call
	TaskReturn(); // 0x51 TaskReturn
	return 0; // 0x53 Return
}


main()
{
	var_0_object = Obj(); var_1_object = Obj(); // 0x6 PushV
	var_2_bool = 0; // 0x7 PushV
	func_84(var_2_bool); // 0x8 Call
	var_5_bool = var_2_bool == 0; // 0xa Not
	if(var_5_bool == 0) goto Label_17; // 0xb JumpB
	TaskCall(0); // 0xd TaskCall
	func_0(); // 0xe Call
	TaskReturn(); // 0xf TaskReturn
	
Label_17:
	var_6_string = "bonfire"; // 0x11 PushS
	FindParticleSystem(var_6_string, var_1_object); // 0x12 Func
	var_7_bool = var_1_object == 0; // 0x14 NullEq
	if(var_7_bool == 0) goto Label_26; // 0x15 JumpB
	var_8_string = "Can't find fire particle system"; // 0x16 PushS
	Trace(var_8_string); // 0x17 Func
	return 2; // 0x19 Return
	
Label_26:
	var_9_cvector = CVector(0.0, 0.0, 0.0); // 0x1a PushVec
	var_10_cvector = CVector(0.0, 1.0, 0.0); // 0x1b PushVec
	var_11_float = 0.0; // 0x1c PushF
	AddSource(var_9_cvector, var_10_cvector, var_11_float); // 0x1d ObjFunc
	var_12_cvector = CVector(10.0, 0.0, 0.0); // 0x1f PushVec
	var_13_cvector = CVector(0.0, 1.0, 0.0); // 0x20 PushVec
	var_14_float = 0.0; // 0x21 PushF
	AddSource(var_12_cvector, var_13_cvector, var_14_float); // 0x22 ObjFunc
	var_15_cvector = CVector(0.0, 0.0, 10.0); // 0x24 PushVec
	var_16_cvector = CVector(0.0, 1.0, 0.0); // 0x25 PushVec
	var_17_float = 0.0; // 0x26 PushF
	AddSource(var_15_cvector, var_16_cvector, var_17_float); // 0x27 ObjFunc
	var_18_cvector = CVector(-10.0, 0.0, 0.0); // 0x29 PushVec
	var_19_cvector = CVector(0.0, 1.0, 0.0); // 0x2a PushVec
	var_20_float = 0.0; // 0x2b PushF
	AddSource(var_18_cvector, var_19_cvector, var_20_float); // 0x2c ObjFunc
	var_21_cvector = CVector(0.0, 0.0, -10.0); // 0x2e PushVec
	var_22_cvector = CVector(0.0, 1.0, 0.0); // 0x2f PushVec
	var_23_float = 0.0; // 0x30 PushF
	AddSource(var_21_cvector, var_22_cvector, var_23_float); // 0x31 ObjFunc
	var_24_cvector = CVector(10.0, 0.0, 10.0); // 0x33 PushVec
	var_25_cvector = CVector(0.0, 1.0, 0.0); // 0x34 PushVec
	var_26_float = 0.0; // 0x35 PushF
	AddSource(var_24_cvector, var_25_cvector, var_26_float); // 0x36 ObjFunc
	var_27_cvector = CVector(-10.0, 0.0, -10.0); // 0x38 PushVec
	var_28_cvector = CVector(0.0, 1.0, 0.0); // 0x39 PushVec
	var_29_float = 0.0; // 0x3a PushF
	AddSource(var_27_cvector, var_28_cvector, var_29_float); // 0x3b ObjFunc
	var_30_cvector = CVector(-10.0, 0.0, 10.0); // 0x3d PushVec
	var_31_cvector = CVector(0.0, 1.0, 0.0); // 0x3e PushVec
	var_32_float = 0.0; // 0x3f PushF
	AddSource(var_30_cvector, var_31_cvector, var_32_float); // 0x40 ObjFunc
	var_33_cvector = CVector(10.0, 0.0, -10.0); // 0x42 PushVec
	var_34_cvector = CVector(0.0, 1.0, 0.0); // 0x43 PushVec
	var_35_float = 0.0; // 0x44 PushF
	AddSource(var_33_cvector, var_34_cvector, var_35_float); // 0x45 ObjFunc
	Enable(); // 0x47 ObjFunc
	
Label_73:
	Hold(); // 0x49 Func
	goto Label_73; // 0x4b Jump
}


func_0()
{
	Hold(); // 0x0 Func
	return 0; // 0x2 Return
}


func_84(var_2_bool)
{
	var_3_bool = 0; var_4_bool = 0; // 0x54 PushV
	IsLoaded(var_4_bool); // 0x55 Func
	var_2_bool = var_4_bool; // 0x57 Mov
	return 2; // 0x58 Return
}


