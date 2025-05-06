task_0_event_16(var_0_object, var_1_string)
{
	var_2_float = 0; var_3_object = Obj(); var_4_float = 0; var_5_object = Obj(); // 0x0 PushV
	var_6_string = "fire"; // 0x1 PushS
	var_7_bool = var_1_string == var_6_string; // 0x2 Eq
	if(var_7_bool == 0) goto Label_75; // 0x3 JumpB
	var_8_string = "fire"; // 0x4 PushS
	GetProperty(var_8_string, var_4_float); // 0x5 Func
	var_9_float = 0.0; // 0x7 PushF
	var_10_bool = var_4_float > var_9_float; // 0x8 GT
	if(var_10_bool == 0) goto Label_55; // 0x9 JumpB
	var_11_bool = GlobalVars[3]; // 0xa PushGE
	var_12_bool = var_11_bool == 0; // 0xb Not
	if(var_12_bool == 0) goto Label_54; // 0xc JumpB
	var_13_bool = GlobalVars[3]; // 0xd PushGE
	var_13_bool = 1; // 0xe MovB
	GlobalVars[3] = var_13_bool; // 0xf PopGE
	var_14_object = GlobalVars[0]; // 0x10 PushGE
	var_15_bool = 0; // 0x11 PushB
	Fade(var_15_bool); // 0x12 ObjFunc
	var_16_object = GlobalVars[1]; // 0x14 PushGE
	var_17_bool = 0; // 0x15 PushB
	Fade(var_17_bool); // 0x16 ObjFunc
	var_18_bool = GlobalVars[4]; // 0x18 PushGE
	var_19_bool = var_18_bool == 0; // 0x19 Not
	if(var_19_bool == 0) goto Label_34; // 0x1a JumpB
	var_20_bool = GlobalVars[4]; // 0x1b PushGE
	var_20_bool = 1; // 0x1c MovB
	GlobalVars[4] = var_20_bool; // 0x1d PopGE
	var_21_int = 81; // 0x1e PushI
	var_22_int = 3; // 0x1f PushI
	SetTimer(var_21_int, var_22_int); // 0x20 Func
	
Label_34:
	var_23_string = "fire_begin"; // 0x22 PushS
	var_24_cvector = CVector(0.0, 10.0, 0.0); // 0x23 PushVec
	PlayGlobalSound(var_23_string, var_24_cvector); // 0x24 Func
	var_25_object = GlobalVars[2]; // 0x26 PushGE
	var_26_bool = var_25_object != 0; // 0x27 NullNeq
	if(var_26_bool == 0) goto Label_46; // 0x28 JumpB
	var_27_object = GlobalVars[2]; // 0x29 PushGE
	var_28_float = 1.5; // 0x2a PushF
	FadeIn(var_28_float); // 0x2b ObjFunc
	goto Label_54; // 0x2d Jump
	
Label_54:
	goto Label_75; // 0x36 Jump
	
Label_75:
	return 4; // 0x4b Return
	
Label_46:
	var_29_string = "fire_loop"; // 0x2e PushS
	var_30_cvector = CVector(0.0, 10.0, 0.0); // 0x2f PushVec
	PlayLoopedGlobalSound(var_5_object, var_29_string, var_30_cvector); // 0x30 Func
	var_31_object = GlobalVars[2]; // 0x32 PushGE
	var_31_object = var_5_object; // 0x33 Mov
	GlobalVars[2] = var_31_object; // 0x34 PopGE
	var_5_object = 0; // 0x35 SetNull
	
Label_55:
	var_32_bool = GlobalVars[3]; // 0x37 PushGE
	if(var_32_bool == 0) goto Label_75; // 0x38 JumpB
	var_33_bool = GlobalVars[3]; // 0x39 PushGE
	var_33_bool = 0; // 0x3a MovB
	GlobalVars[3] = var_33_bool; // 0x3b PopGE
	var_34_object = GlobalVars[0]; // 0x3c PushGE
	var_35_bool = 1; // 0x3d PushB
	Fade(var_35_bool); // 0x3e ObjFunc
	var_36_object = GlobalVars[1]; // 0x40 PushGE
	var_37_bool = 1; // 0x41 PushB
	Fade(var_37_bool); // 0x42 ObjFunc
	var_38_object = GlobalVars[2]; // 0x44 PushGE
	var_39_bool = var_38_object != 0; // 0x45 NullNeq
	if(var_39_bool == 0) goto Label_75; // 0x46 JumpB
	var_40_object = GlobalVars[2]; // 0x47 PushGE
	var_41_float = 1.5; // 0x48 PushF
	FadeOut(var_41_float); // 0x49 ObjFunc
}


task_0_event_7(var_0_int)
{
	var_1_int = 0; // 0xaa PushV
	var_1_int = var_0_int; // 0xab Mov
	func_175(var_1_int); // 0xac Call
	return 0; // 0xae Return
}


main()
{
	var_0_object = Obj(); var_1_object = Obj(); var_2_object = Obj(); var_3_cvector = CVector(0,0,0); var_4_cvector = CVector(0,0,0); var_5_cvector = CVector(0,0,0); var_6_float = 0; var_7_object = Obj(); var_8_object = Obj(); var_9_object = Obj(); var_10_cvector = CVector(0,0,0); var_11_cvector = CVector(0,0,0); var_12_cvector = CVector(0,0,0); var_13_float = 0; // 0x4c PushV
	var_14_string = "loading"; // 0x4d PushS
	Trace(var_14_string); // 0x4e Func
	var_15_bool = GlobalVars[3]; // 0x50 PushGE
	var_15_bool = 0; // 0x51 MovB
	GlobalVars[3] = var_15_bool; // 0x52 PopGE
	var_16_bool = GlobalVars[4]; // 0x53 PushGE
	var_16_bool = 0; // 0x54 MovB
	GlobalVars[4] = var_16_bool; // 0x55 PopGE
	SetDeathState(); // 0x56 Func
	var_17_string = "disease"; // 0x58 PushS
	var_18_float = 0.2; // 0x59 PushF
	SetProperty(var_17_string, var_18_float); // 0x5a Func
	PlaceOnGround(); // 0x5c Func
	GetPosition(var_10_cvector); // 0x5e Func
	var_11_cvector = CVector(0.0, 1.0, 0.0); // 0x60 MovV
	var_12_cvector = CVector(0.0, 0.0, 0.0); // 0x61 MovV
	var_19_string = "corpse"; // 0x62 PushS
	var_20_bool = 1; // 0x63 PushB
	EnableGeometry(var_19_string, var_20_bool); // 0x64 Func
	var_21_string = "corpse"; // 0x66 PushS
	FindGeometry(var_21_string, var_9_object); // 0x67 Func
	var_22_float = 6.28319; // 0x69 PushF
	rand(var_13_float, var_22_float); // 0x6a Func
	SetRotationY(var_13_float); // 0x6c ObjFunc
	var_23_string = "corpse1"; // 0x6e PushS
	FindGeometry(var_23_string, var_9_object); // 0x6f Func
	SetRotationY(var_13_float); // 0x71 ObjFunc
	var_24_string = "fire"; // 0x73 PushS
	var_25_int = 50; // 0x74 PushI
	CreateFire(var_7_object, var_24_string, var_25_int); // 0x75 Func
	var_26_cvector = CVector(0.0, 0.0, 0.0); // 0x77 PushVec
	AddSource(var_26_cvector, var_11_cvector); // 0x78 ObjFunc
	var_27_cvector = CVector(0.0, 0.0, 50.0); // 0x7a PushVec
	AddSource(var_27_cvector, var_11_cvector); // 0x7b ObjFunc
	var_28_cvector = CVector(0.0, 0.0, -50.0); // 0x7d PushVec
	AddSource(var_28_cvector, var_11_cvector); // 0x7e ObjFunc
	var_29_cvector = CVector(50.0, 0.0, 0.0); // 0x80 PushVec
	AddSource(var_29_cvector, var_11_cvector); // 0x81 ObjFunc
	var_30_cvector = CVector(-50.0, 0.0, 0.0); // 0x83 PushVec
	AddSource(var_30_cvector, var_11_cvector); // 0x84 ObjFunc
	Enable(); // 0x86 ObjFunc
	Fade(); // 0x88 ObjFunc
	var_31_string = "smoke"; // 0x8a PushS
	var_32_int = 20; // 0x8b PushI
	CreateSmoke(var_8_object, var_31_string, var_32_int); // 0x8c Func
	var_33_cvector = CVector(0.0, 0.0, 0.0); // 0x8e PushVec
	AddSource(var_33_cvector, var_11_cvector); // 0x8f ObjFunc
	var_34_float = 0.7; // 0x91 PushF
	SetOpacity(var_34_float); // 0x92 ObjFunc
	Enable(); // 0x94 ObjFunc
	Fade(); // 0x96 ObjFunc
	var_35_object = GlobalVars[0]; // 0x98 PushGE
	var_35_object = var_7_object; // 0x99 Mov
	GlobalVars[0] = var_35_object; // 0x9a PopGE
	var_36_object = GlobalVars[1]; // 0x9b PushGE
	var_36_object = var_8_object; // 0x9c Mov
	GlobalVars[1] = var_36_object; // 0x9d PopGE
	var_37_int = 80; // 0x9e PushI
	var_38_int = 1; // 0x9f PushI
	SetTimer(var_37_int, var_38_int); // 0xa0 Func
	
Label_162:
	Hold(); // 0xa2 Func
	goto Label_162; // 0xa4 Jump
}


func_175(var_1_int)
{
	var_2_float = 0; var_3_float = 0; // 0xaf PushV
	var_4_int = 80; // 0xb0 PushI
	var_5_bool = var_1_int == var_4_int; // 0xb1 Eq
	if(var_5_bool == 0) goto Label_197; // 0xb2 JumpB
	var_6_string = "fire"; // 0xb3 PushS
	GetProperty(var_6_string, var_3_float); // 0xb4 Func
	var_7_float = 0.01; // 0xb6 PushF
	var_8_bool = var_3_float <= var_7_float; // 0xb7 LE
	if(var_8_bool == 0) goto Label_187; // 0xb8 JumpB
	var_3_float = 0; // 0xb9 MovI
	goto Label_193; // 0xba Jump
	
Label_193:
	var_9_string = "fire"; // 0xc1 PushS
	SetProperty(var_9_string, var_3_float); // 0xc2 Func
	goto Label_211; // 0xc4 Jump
	
Label_211:
	return 2; // 0xd3 Return
	
Label_187:
	var_10_float = 0.01; // 0xbb PushF
	var_3_float = var_3_float - var_10_float; // 0xbc Sub2
	var_11_int = 0; // 0xbd PushI
	var_12_bool = var_3_float < var_11_int; // 0xbe LT
	if(var_12_bool == 0) goto Label_193; // 0xbf JumpB
	var_3_float = 0; // 0xc0 MovI
	
Label_197:
	var_13_int = 81; // 0xc5 PushI
	var_14_bool = var_1_int == var_13_int; // 0xc6 Eq
	if(var_14_bool == 0) goto Label_211; // 0xc7 JumpB
	var_15_int = 81; // 0xc8 PushI
	KillTimer(var_15_int); // 0xc9 Func
	var_16_string = "corpse"; // 0xcb PushS
	var_17_bool = 0; // 0xcc PushB
	EnableGeometry(var_16_string, var_17_bool); // 0xcd Func
	var_18_string = "corpse1"; // 0xcf PushS
	var_19_bool = 1; // 0xd0 PushB
	EnableGeometry(var_18_string, var_19_bool); // 0xd1 Func
}


