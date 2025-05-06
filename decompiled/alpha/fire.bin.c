task_0_event_5()
{
	StopGroup0(); // 0x3 Func
	return 0; // 0x5 Return
}


task_1_event_6()
{
	TaskCall(0); // 0x27 TaskCall
	func_0(); // 0x28 Call
	TaskReturn(); // 0x29 TaskReturn
	return 0; // 0x2b Return
}


main()
{
	var_0_object = Obj(); var_1_object = Obj(); // 0x6 PushV
	var_2_bool = 0; // 0x7 PushV
	func_44(var_2_bool); // 0x8 Call
	var_5_bool = var_2_bool == 0; // 0xa Not
	if(var_5_bool == 0) goto Label_17; // 0xb JumpB
	TaskCall(0); // 0xd TaskCall
	func_0(); // 0xe Call
	TaskReturn(); // 0xf TaskReturn
	
Label_17:
	var_6_string = "fire"; // 0x11 PushS
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
	Enable(); // 0x1f ObjFunc
	
Label_33:
	Hold(); // 0x21 Func
	goto Label_33; // 0x23 Jump
}


func_0()
{
	Hold(); // 0x0 Func
	return 0; // 0x2 Return
}


func_44(var_2_bool)
{
	var_3_bool = 0; var_4_bool = 0; // 0x2c PushV
	IsLoaded(var_4_bool); // 0x2d Func
	var_2_bool = var_4_bool; // 0x2f Mov
	return 2; // 0x30 Return
}


