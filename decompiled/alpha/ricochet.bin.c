task_0_event_6()
{
	SetDeathStateAndRemove(); // 0x2a Func
	sync(); // 0x2c Func
	return 0; // 0x2e Return
}


main()
{
	var_0_object = Obj(); var_1_object = Obj(); // 0x0 PushV
	var_2_bool = 0; // 0x1 PushV
	func_67(var_2_bool); // 0x2 Call
	var_5_bool = var_2_bool == 0; // 0x4 Not
	if(var_5_bool == 0) goto Label_9; // 0x5 JumpB
	SetDeathStateAndRemove(); // 0x6 Func
	return 2; // 0x8 Return
	
Label_9:
	var_6_string = ""; var_7_int = 0; // 0x9 PushV
	var_8_int = GlobalVars[0]; // 0xa PushGE
	var_7_int = var_8_int; // 0xb Mov
	func_47(var_6_string, var_7_int); // 0xd Call
	var_15_cvector = CVector(0.0, 0.0, 0.0); // 0xf PushVec
	var_16_int = 500; // 0x10 PushI
	PlayGlobalSound(var_6_string, var_15_cvector, var_16_int); // 0x11 Func
	var_17_string = "richochet"; // 0x13 PushS
	FindParticleSystem(var_17_string, var_1_object); // 0x14 Func
	Enable(); // 0x16 ObjFunc
	var_18_cvector = CVector(0.0, 0.0, 0.0); // 0x18 PushVec
	var_19_cvector = CVector(0.0, 400.0, 0.0); // 0x19 PushVec
	var_20_float = 1.5; // 0x1a PushF
	AddSource(var_18_cvector, var_19_cvector, var_20_float); // 0x1b ObjFunc
	var_21_float = 0.5; // 0x1d PushF
	Sleep(var_21_float); // 0x1e Func
	var_22_bool = 1; // 0x20 PushB
	Fade(var_22_bool); // 0x21 ObjFunc
	var_23_float = 0.5; // 0x23 PushF
	Sleep(var_23_float); // 0x24 Func
	SetDeathStateAndRemove(); // 0x26 Func
	return 2; // 0x28 Return
}


func_67(var_2_bool)
{
	var_3_bool = 0; var_4_bool = 0; // 0x43 PushV
	IsLoaded(var_4_bool); // 0x44 Func
	var_2_bool = var_4_bool; // 0x46 Mov
	return 2; // 0x47 Return
}


func_47(var_6_string, var_7_int)
{
	var_9_int = 1; // 0x30 PushI
	var_10_bool = var_7_int == var_9_int; // 0x31 Eq
	if(var_10_bool == 0) goto Label_54; // 0x32 JumpB
	var_6_string = "wood"; // 0x33 MovS
	return 0; // 0x34 Return
	
Label_54:
	var_11_int = 2; // 0x36 PushI
	var_12_bool = var_7_int == var_11_int; // 0x37 Eq
	if(var_12_bool == 0) goto Label_60; // 0x38 JumpB
	var_6_string = "metal"; // 0x39 MovS
	return 0; // 0x3a Return
	
Label_60:
	var_13_int = 3; // 0x3c PushI
	var_14_bool = var_7_int == var_13_int; // 0x3d Eq
	if(var_14_bool == 0) goto Label_65; // 0x3e JumpB
	var_6_string = "ground"; // 0x3f MovS
	return 0; // 0x40 Return
	
Label_65:
	var_6_string = "stone"; // 0x41 MovS
	return 0; // 0x42 Return
}


