task_0_event_6(var_0_cvector, var_1_cvector)
{
	var_2_object = Obj(); // 0x40 PushV
	func_77(var_2_object); // 0x41 NEW_2
	RemoveActor(var_2_object); // 0x43 Func
	sync(); // 0x45 Func
	return 0; // 0x47 Return
}


main(var_0_cvector, var_1_cvector)
{
	var_2_object = Obj(); var_3_float = 0; var_4_float = 0; var_5_float = 0; var_6_object = Obj(); var_7_float = 0; var_8_float = 0; var_9_float = 0; // 0x0 PushV
	var_10_bool = 0; // 0x1 PushV
	func_72(var_10_bool); // 0x2 NEW_2
	var_13_bool = var_10_bool == 0; // 0x4 Not
	if(var_13_bool == 0) goto Label_12; // 0x5 JumpB
	var_14_object = Obj(); // 0x6 PushV
	func_77(var_14_object); // 0x7 NEW_2
	RemoveActor(var_14_object); // 0x9 Func
	return 8; // 0xb Return
	
Label_12:
	var_17_string = "blood"; // 0xc PushS
	FindParticleSystem(var_17_string, var_6_object); // 0xd Func
	Enable(); // 0xf ObjFunc
	var_0_cvector = CVector(0.0, 0.0, 0.0); // 0x11 TMovV
	var_1_cvector = CVector(-100.0, 100.0, 0.0); // 0x12 TMovV
	var_18_float = 0.3; // 0x13 PushF
	AddSource(var_0_cvector, var_18_float, var_18_float); // 0x14 ObjFunc
	var_7_float = 0.4; // 0x16 MovF
	
Label_23:
	var_19_int = 0; // 0x17 PushI
	var_20_bool = var_7_float > var_19_int; // 0x18 GT
	if(var_20_bool == 0) goto Label_38; // 0x19 JumpB
	sync(var_8_float); // 0x1a Func
	var_7_float = var_7_float - var_8_float; // 0x1c Sub2
	var_21_float = GetByIndex(var_0_cvector, 1); // 0x1d PushE
	var_22_int = 150; // 0x1e PushI
	var_23_float = var_22_int * var_8_float; // 0x1f Mult
	var_21_float = var_21_float - var_23_float; // 0x20 Sub2
	SetByIndex(var_0_cvector, 1) = var_21_float; // 0x21 PopE
	var_24_float = 0.3; // 0x22 PushF
	AddSource(var_0_cvector, var_24_float, var_24_float); // 0x23 ObjFunc
	goto Label_23; // 0x25 Jump
	
Label_38:
	var_25_bool = 1; // 0x26 PushB
	Fade(var_25_bool); // 0x27 ObjFunc
	var_7_float = 0.4; // 0x29 MovF
	
Label_42:
	var_26_int = 0; // 0x2a PushI
	var_27_bool = var_7_float > var_26_int; // 0x2b GT
	if(var_27_bool == 0) goto Label_57; // 0x2c JumpB
	sync(var_9_float); // 0x2d Func
	var_7_float = var_7_float - var_9_float; // 0x2f Sub2
	var_28_float = GetByIndex(var_0_cvector, 1); // 0x30 PushE
	var_29_int = 150; // 0x31 PushI
	var_30_float = var_29_int * var_9_float; // 0x32 Mult
	var_28_float = var_28_float - var_30_float; // 0x33 Sub2
	SetByIndex(var_0_cvector, 1) = var_28_float; // 0x34 PopE
	var_31_float = 0.3; // 0x35 PushF
	AddSource(var_0_cvector, var_31_float, var_31_float); // 0x36 ObjFunc
	goto Label_42; // 0x38 Jump
	
Label_57:
	var_32_object = Obj(); // 0x39 PushV
	func_77(var_32_object); // 0x3a NEW_2
	RemoveActor(var_32_object); // 0x3c Func
	return 8; // 0x3e Return
}


func_72(var_10_bool)
{
	var_11_bool = 0; var_12_bool = 0; // 0x48 PushV
	IsLoaded(var_12_bool); // 0x49 Func
	var_10_bool = var_12_bool; // 0x4b Mov
	return 2; // 0x4c Return
}


func_77(var_14_object)
{
	var_15_object = Obj(); var_16_object = Obj(); // 0x4d PushV
	self(var_16_object); // 0x4e Func
	var_14_object = var_16_object; // 0x50 Mov
	return 2; // 0x51 Return
}


