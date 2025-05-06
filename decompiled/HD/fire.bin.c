task_0_event_5()
{
	StopGroup0(); // 0x8 Func
	sync(); // 0xa Func
	return 0; // 0xc Return
}


task_1_event_6()
{
	TaskCall(0); // 0x2e TaskCall
	func_0(); // 0x2f NEW_2
	TaskReturn(); // 0x30 TaskReturn
	return 0; // 0x32 Return
}


main()
{
	var_0_object = Obj(); var_1_object = Obj(); // 0xd PushV
	var_2_bool = 0; // 0xe PushV
	func_51(var_2_bool); // 0xf NEW_2
	var_5_bool = var_2_bool == 0; // 0x11 Not
	if(var_5_bool == 0) goto Label_24; // 0x12 JumpB
	TaskCall(0); // 0x14 TaskCall
	func_0(); // 0x15 NEW_2
	TaskReturn(); // 0x16 TaskReturn
	
Label_24:
	var_8_string = "fire"; // 0x18 PushS
	FindParticleSystem(var_8_string, var_1_object); // 0x19 Func
	var_9_bool = var_1_object == 0; // 0x1b NullEq
	if(var_9_bool == 0) goto Label_33; // 0x1c JumpB
	var_10_string = "Can't find fire particle system"; // 0x1d PushS
	Trace(var_10_string); // 0x1e Func
	return 2; // 0x20 Return
	
Label_33:
	var_11_cvector = CVector(0.0, 0.0, 0.0); // 0x21 PushVec
	var_12_cvector = CVector(0.0, 1.0, 0.0); // 0x22 PushVec
	var_13_float = 0.0; // 0x23 PushF
	AddSource(var_11_cvector, var_12_cvector, var_13_float); // 0x24 ObjFunc
	Enable(); // 0x26 ObjFunc
	
Label_40:
	Hold(); // 0x28 Func
	goto Label_40; // 0x2a Jump
}


func_0()
{
	
Label_0:
	Hold(); // 0x0 Func
	var_6_bool = 0; // 0x2 PushV
	func_51(var_6_bool); // 0x3 NEW_2
	var_7_bool = var_6_bool == 0; // 0x5 Not
	if(var_7_bool == 0) goto Label_0; // 0x6 JumpB
	return 0; // 0x7 Return
}


func_51(var_2_bool)
{
	var_3_bool = 0; var_4_bool = 0; // 0x33 PushV
	IsLoaded(var_4_bool); // 0x34 Func
	var_2_bool = var_4_bool; // 0x36 Mov
	return 2; // 0x37 Return
}


