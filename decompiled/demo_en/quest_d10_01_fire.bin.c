task_0_event_6(var_0_bool, var_1_object)
{
	func_111(); // 0x44 NEW_2
	Hold(); // 0x46 Func
	return 0; // 0x48 Return
}


task_0_event_5(var_0_bool, var_1_object)
{
	StopGroup0(); // 0x49 Func
	sync(); // 0x4b Func
	return 0; // 0x4d Return
}


task_0_event_32(var_0_bool, var_1_object)
{
	var_2_object = var_1_object; // 0x4e PushT
	if(var_2_object == 0) goto Label_82; // 0x4f JumpB
	RemoveActor(var_1_object); // 0x50 Func
	
Label_82:
	return 0; // 0x52 Return
}


task_0_event_26(var_0_bool, var_1_object, var_2_string)
{
	var_3_bool = 0; var_4_bool = 0; // 0x53 PushV
	var_5_string = "cleanup"; // 0x54 PushS
	var_6_bool = var_2_string == var_5_string; // 0x55 Eq
	if(var_6_bool == 0) goto Label_106; // 0x56 JumpB
	var_0_bool = 1; // 0x57 TMovB
	IsLoaded(var_4_bool); // 0x58 Func
	var_7_bool = 0; // 0x5a PushV
	var_7_bool = 0; // 0x5b MovB
	var_8_bool = var_4_bool == 0; // 0x5c Not
	if(var_8_bool == 0) goto Label_99; // 0x5d JumpB
	var_9_bool = 0; // 0x5e PushV
	func_127(var_9_bool); // 0x5f NEW_2
	if(var_9_bool == 0) goto Label_99; // 0x61 JumpB
	var_7_bool = 1; // 0x62 MovB
	
Label_99:
	if(var_7_bool == 0) goto Label_105; // 0x63 JumpB
	var_10_object = Obj(); // 0x64 PushV
	func_134(var_10_object); // 0x65 NEW_2
	RemoveActor(var_10_object); // 0x67 Func
	
Label_105:
	goto Label_110; // 0x69 Jump
	
Label_110:
	return 2; // 0x6e Return
	
Label_106:
	var_13_string = "restore"; // 0x6a PushS
	var_14_bool = var_2_string == var_13_string; // 0x6b Eq
	if(var_14_bool == 0) goto Label_110; // 0x6c JumpB
	var_0_bool = 0; // 0x6d TMovB
}


main(var_0_bool, var_1_object)
{
	var_2_object = Obj(); var_3_object = Obj(); var_4_float = 0; var_5_float = 0; var_6_float = 0; var_7_cvector = CVector(0,0,0); var_8_object = Obj(); var_9_object = Obj(); var_10_float = 0; var_11_float = 0; var_12_float = 0; var_13_cvector = CVector(0,0,0); // 0x0 PushV
	GetScene(var_8_object); // 0x1 Func
	var_14_string = "trigger_d10q01_fire"; // 0x3 PushS
	var_15_string = "trigger_fire_damage.bin"; // 0x4 PushS
	var_16_cvector = CVector(0.0, 0.0, 0.0); // 0x5 PushVec
	AddScriptedActor(var_16_cvector, var_14_string, var_15_string, var_8_object, var_16_cvector); // 0x6 Func
	var_17_bool = 0; // 0x8 PushV
	func_129(var_17_bool); // 0x9 NEW_2
	var_20_bool = var_17_bool == 0; // 0xb Not
	if(var_20_bool == 0) goto Label_15; // 0xc JumpB
	Hold(); // 0xd Func
	
Label_15:
	var_21_string = "fire"; // 0xf PushS
	FindParticleSystem(var_21_string, var_9_object); // 0x10 Func
	var_22_bool = var_9_object == 0; // 0x12 NullEq
	if(var_22_bool == 0) goto Label_24; // 0x13 JumpB
	var_23_string = "Can't find fire particle system"; // 0x14 PushS
	Trace(var_23_string); // 0x15 Func
	return 12; // 0x17 Return
	
Label_24:
	var_10_float = 60.0; // 0x18 MovF
	var_11_float = -var_10_float; // 0x19 Neg2
	
Label_26:
	var_24_bool = var_11_float < var_10_float; // 0x1a LT
	if(var_24_bool == 0) goto Label_59; // 0x1b JumpB
	var_12_float = -var_10_float; // 0x1c Neg2
	
Label_29:
	var_25_bool = var_12_float < var_10_float; // 0x1d LT
	if(var_25_bool == 0) goto Label_55; // 0x1e JumpB
	var_26_float = var_11_float * var_11_float; // 0x1f Mult
	var_27_float = var_12_float * var_12_float; // 0x20 Mult
	var_28_int = var_26_float + var_27_float; // 0x21 Add
	var_29_float = var_10_float * var_10_float; // 0x22 Mult
	var_30_bool = var_28_int > var_29_float; // 0x23 GT
	if(var_30_bool == 0) goto Label_38; // 0x24 JumpB
	goto Label_51; // 0x25 Jump
	
Label_51:
	var_31_int = 10; // 0x33 PushI
	var_32_float = var_10_float / var_31_int; // 0x34 Div
	var_12_float = var_12_float + var_32_float; // 0x35 Add2
	goto Label_29; // 0x36 Jump
	
Label_38:
	var_33_float = GetByIndex(var_13_cvector, 0); // 0x26 PushE
	var_33_float = var_11_float; // 0x27 Mov
	SetByIndex(var_13_cvector, 0) = var_33_float; // 0x28 PopE
	var_34_float = GetByIndex(var_13_cvector, 1); // 0x29 PushE
	var_34_float = 0; // 0x2a MovI
	SetByIndex(var_13_cvector, 1) = var_34_float; // 0x2b PopE
	var_35_float = GetByIndex(var_13_cvector, 2); // 0x2c PushE
	var_35_float = var_12_float; // 0x2d Mov
	SetByIndex(var_13_cvector, 2) = var_35_float; // 0x2e PopE
	var_36_cvector = CVector(0.0, 1.0, 0.0); // 0x2f PushVec
	var_37_float = 0.0; // 0x30 PushF
	AddSource(var_13_cvector, var_36_cvector, var_37_float); // 0x31 ObjFunc
	
Label_55:
	var_38_int = 10; // 0x37 PushI
	var_39_float = var_10_float / var_38_int; // 0x38 Div
	var_11_float = var_11_float + var_39_float; // 0x39 Add2
	goto Label_26; // 0x3a Jump
	
Label_59:
	Enable(); // 0x3b ObjFunc
	
Label_61:
	Hold(); // 0x3d Func
	goto Label_61; // 0x3f Jump
}


func_129(var_17_bool)
{
	var_18_bool = 0; var_19_bool = 0; // 0x81 PushV
	IsLoaded(var_19_bool); // 0x82 Func
	var_17_bool = var_19_bool; // 0x84 Mov
	return 2; // 0x85 Return
}


func_127(var_9_bool)
{
	var_9_bool = 1; // 0x7f MovB
	return 0; // 0x80 Return
}


func_134(var_10_object)
{
	var_11_object = Obj(); var_12_object = Obj(); // 0x86 PushV
	self(var_12_object); // 0x87 Func
	var_10_object = var_12_object; // 0x89 Mov
	return 2; // 0x8a Return
}


func_111()
{
	var_2_bool = 0; // 0x6f PushV
	var_2_bool = 0; // 0x70 MovB
	var_3_bool = var_0_bool; // 0x71 PushT
	if(var_3_bool == 0) goto Label_120; // 0x72 JumpB
	var_4_bool = 0; // 0x73 PushV
	func_127(var_4_bool); // 0x74 NEW_2
	if(var_4_bool == 0) goto Label_120; // 0x76 JumpB
	var_2_bool = 1; // 0x77 MovB
	
Label_120:
	if(var_2_bool == 0) goto Label_126; // 0x78 JumpB
	var_5_object = Obj(); // 0x79 PushV
	func_134(var_5_object); // 0x7a NEW_2
	RemoveActor(var_5_object); // 0x7c Func
	
Label_126:
	return 0; // 0x7e Return
}


