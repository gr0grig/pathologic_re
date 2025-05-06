task_0_event_5(var_0_bool, var_1_object)
{
	StopGroup0(); // 0x3 Func
	return 0; // 0x5 Return
}


task_1_event_6(var_0_bool, var_1_object)
{
	TaskCall(0); // 0x4d TaskCall
	func_0(); // 0x4e Call
	TaskReturn(); // 0x4f TaskReturn
	return 0; // 0x51 Return
}


task_1_event_32(var_0_bool, var_1_object)
{
	RemoveActor(var_1_object); // 0x52 Func
	return 0; // 0x54 Return
}


task_1_event_26(var_0_bool, var_1_object, var_2_string)
{
	var_3_bool = 0; var_4_bool = 0; // 0x55 PushV
	var_5_string = "cleanup"; // 0x56 PushS
	var_6_bool = var_2_string == var_5_string; // 0x57 Eq
	if(var_6_bool == 0) goto Label_108; // 0x58 JumpB
	var_0_bool = 1; // 0x59 TMovB
	IsLoaded(var_4_bool); // 0x5a Func
	var_7_bool = 0; // 0x5c PushV
	var_7_bool = 0; // 0x5d MovB
	var_8_bool = var_4_bool == 0; // 0x5e Not
	if(var_8_bool == 0) goto Label_101; // 0x5f JumpB
	var_9_bool = 0; // 0x60 PushV
	func_113(var_9_bool); // 0x61 Call
	if(var_9_bool == 0) goto Label_101; // 0x63 JumpB
	var_7_bool = 1; // 0x64 MovB
	
Label_101:
	if(var_7_bool == 0) goto Label_107; // 0x65 JumpB
	var_10_object = Obj(); // 0x66 PushV
	func_120(var_10_object); // 0x67 Call
	RemoveActor(var_10_object); // 0x69 Func
	
Label_107:
	goto Label_112; // 0x6b Jump
	
Label_112:
	return 2; // 0x70 Return
	
Label_108:
	var_13_string = "restore"; // 0x6c PushS
	var_14_bool = var_2_string == var_13_string; // 0x6d Eq
	if(var_14_bool == 0) goto Label_112; // 0x6e JumpB
	var_0_bool = 0; // 0x6f TMovB
}


main(var_0_bool, var_1_object)
{
	var_2_object = Obj(); var_3_object = Obj(); var_4_float = 0; var_5_float = 0; var_6_float = 0; var_7_cvector = CVector(0,0,0); var_8_object = Obj(); var_9_object = Obj(); var_10_float = 0; var_11_float = 0; var_12_float = 0; var_13_cvector = CVector(0,0,0); // 0x6 PushV
	GetScene(var_8_object); // 0x7 Func
	var_14_string = "trigger_d10q01_fire"; // 0x9 PushS
	var_15_string = "trigger_fire_damage.bin"; // 0xa PushS
	var_16_cvector = CVector(0.0, 0.0, 0.0); // 0xb PushVec
	AddScriptedActor(var_16_cvector, var_14_string, var_15_string, var_8_object, var_16_cvector); // 0xc Func
	var_17_bool = 0; // 0xe PushV
	func_115(var_17_bool); // 0xf Call
	var_20_bool = var_17_bool == 0; // 0x11 Not
	if(var_20_bool == 0) goto Label_24; // 0x12 JumpB
	TaskCall(0); // 0x14 TaskCall
	func_0(); // 0x15 Call
	TaskReturn(); // 0x16 TaskReturn
	
Label_24:
	var_21_string = "fire"; // 0x18 PushS
	FindParticleSystem(var_21_string, var_9_object); // 0x19 Func
	var_22_bool = var_9_object == 0; // 0x1b NullEq
	if(var_22_bool == 0) goto Label_33; // 0x1c JumpB
	var_23_string = "Can't find fire particle system"; // 0x1d PushS
	Trace(var_23_string); // 0x1e Func
	return 12; // 0x20 Return
	
Label_33:
	var_10_float = 60.0; // 0x21 MovF
	var_11_float = -var_10_float; // 0x22 Neg2
	
Label_35:
	var_24_bool = var_11_float < var_10_float; // 0x23 LT
	if(var_24_bool == 0) goto Label_68; // 0x24 JumpB
	var_12_float = -var_10_float; // 0x25 Neg2
	
Label_38:
	var_25_bool = var_12_float < var_10_float; // 0x26 LT
	if(var_25_bool == 0) goto Label_64; // 0x27 JumpB
	var_26_float = var_11_float * var_11_float; // 0x28 Mult
	var_27_float = var_12_float * var_12_float; // 0x29 Mult
	var_28_int = var_26_float + var_27_float; // 0x2a Add
	var_29_float = var_10_float * var_10_float; // 0x2b Mult
	var_30_bool = var_28_int > var_29_float; // 0x2c GT
	if(var_30_bool == 0) goto Label_47; // 0x2d JumpB
	goto Label_60; // 0x2e Jump
	
Label_60:
	var_31_int = 10; // 0x3c PushI
	var_32_float = var_10_float / var_31_int; // 0x3d Div
	var_12_float = var_12_float + var_32_float; // 0x3e Add2
	goto Label_38; // 0x3f Jump
	
Label_47:
	var_33_float = GetByIndex(var_13_cvector, 0); // 0x2f PushE
	var_33_float = var_11_float; // 0x30 Mov
	SetByIndex(var_13_cvector, 0) = var_33_float; // 0x31 PopE
	var_34_float = GetByIndex(var_13_cvector, 1); // 0x32 PushE
	var_34_float = 0; // 0x33 MovI
	SetByIndex(var_13_cvector, 1) = var_34_float; // 0x34 PopE
	var_35_float = GetByIndex(var_13_cvector, 2); // 0x35 PushE
	var_35_float = var_12_float; // 0x36 Mov
	SetByIndex(var_13_cvector, 2) = var_35_float; // 0x37 PopE
	var_36_cvector = CVector(0.0, 1.0, 0.0); // 0x38 PushVec
	var_37_float = 0.0; // 0x39 PushF
	AddSource(var_13_cvector, var_36_cvector, var_37_float); // 0x3a ObjFunc
	
Label_64:
	var_38_int = 10; // 0x40 PushI
	var_39_float = var_10_float / var_38_int; // 0x41 Div
	var_11_float = var_11_float + var_39_float; // 0x42 Add2
	goto Label_35; // 0x43 Jump
	
Label_68:
	Enable(); // 0x44 ObjFunc
	
Label_70:
	Hold(); // 0x46 Func
	goto Label_70; // 0x48 Jump
}


func_0()
{
	Hold(); // 0x0 Func
	return 0; // 0x2 Return
}


func_113(var_9_bool)
{
	var_9_bool = 1; // 0x71 MovB
	return 0; // 0x72 Return
}


func_115(var_17_bool)
{
	var_18_bool = 0; var_19_bool = 0; // 0x73 PushV
	IsLoaded(var_19_bool); // 0x74 Func
	var_17_bool = var_19_bool; // 0x76 Mov
	return 2; // 0x77 Return
}


func_120(var_10_object)
{
	var_11_object = Obj(); var_12_object = Obj(); // 0x78 PushV
	self(var_12_object); // 0x79 Func
	var_10_object = var_12_object; // 0x7b Mov
	return 2; // 0x7c Return
}


