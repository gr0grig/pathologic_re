task_0_event_5(var_0_object, var_1_float, var_2_float)
{
	StopGroup0(); // 0x8 Func
	sync(); // 0xa Func
	return 0; // 0xc Return
}


task_1_event_7(var_0_object, var_1_float, var_2_float, var_3_int)
{
	var_4_object = Obj(); var_5_cvector = CVector(0,0,0); var_6_cvector = CVector(0,0,0); var_7_cvector = CVector(0,0,0); var_8_float = 0; var_9_object = Obj(); var_10_cvector = CVector(0,0,0); var_11_cvector = CVector(0,0,0); var_12_cvector = CVector(0,0,0); var_13_float = 0; // 0x3f PushV
	var_14_object = Obj(); // 0x40 PushV
	func_155(var_14_object); // 0x41 NEW_2
	var_9_object = var_14_object; // 0x42 Mov
	var_18_bool = var_9_object == 0; // 0x44 NullEq
	if(var_18_bool == 0) goto Label_74; // 0x45 JumpB
	var_19_string = "Null player"; // 0x46 PushS
	Trace(var_19_string); // 0x47 Func
	return 10; // 0x49 Return
	
Label_74:
	var_20_cvector = CVector(0,0,0); var_21_object = Obj(); // 0x4a PushV
	var_21_object = var_9_object; // 0x4b Mov
	func_150(var_21_object); // 0x4c NEW_2
	var_10_cvector = var_20_cvector; // 0x4d Mov
	var_24_cvector = CVector(0,0,0); // 0x4f PushV
	func_145(var_24_cvector); // 0x50 NEW_2
	var_11_cvector = var_24_cvector; // 0x51 Mov
	var_12_cvector = var_10_cvector - var_11_cvector; // 0x53 Sub2
	var_13_float = var_12_cvector | var_12_cvector; // 0x54 Or2
	var_27_bool = 0; // 0x55 PushV
	var_27_bool = 0; // 0x56 MovB
	var_28_bool = var_0_object != 0; // 0x57 NullNeq
	if(var_28_bool == 0) goto Label_92; // 0x58 JumpB
	var_29_bool = var_13_float > var_1_float; // 0x59 GT
	if(var_29_bool == 0) goto Label_92; // 0x5a JumpB
	var_27_bool = 1; // 0x5b MovB
	
Label_92:
	if(var_27_bool == 0) goto Label_100; // 0x5c JumpB
	var_30_string = "stopped"; // 0x5d PushS
	Trace(var_30_string); // 0x5e Func
	Stop(); // 0x60 TObjFunc
	var_0_object = 0; // 0x62 SetNullT
	return 10; // 0x63 Return
	
Label_100:
	var_31_bool = 0; // 0x64 PushV
	var_31_bool = 0; // 0x65 MovB
	var_32_bool = var_0_object == 0; // 0x66 NullEq
	if(var_32_bool == 0) goto Label_107; // 0x67 JumpB
	var_33_bool = var_13_float < var_1_float; // 0x68 LT
	if(var_33_bool == 0) goto Label_107; // 0x69 JumpB
	var_31_bool = 1; // 0x6a MovB
	
Label_107:
	if(var_31_bool == 0) goto Label_130; // 0x6b JumpB
	EventDisable(7); // 0x6c EventDisable
	var_34_string = "started"; // 0x6d PushS
	Trace(var_34_string); // 0x6e Func
	var_35_string = "envsound"; // 0x70 PushS
	WaitFor3DSoundToLoad(var_35_string); // 0x71 Func
	var_36_string = "envsound"; // 0x73 PushS
	var_37_cvector = CVector(0.0, 0.0, 0.0); // 0x74 PushVec
	var_38_float = 0.0; // 0x75 PushF
	PlayLoopedGlobalSound(var_0_object, var_36_string, var_37_cvector, var_38_float, var_37_cvector); // 0x76 Func
	var_39_bool = var_0_object == 0; // 0x78 NullEq
	if(var_39_bool == 0) goto Label_126; // 0x79 JumpB
	var_40_string = "Sound was not found"; // 0x7a PushS
	Trace(var_40_string); // 0x7b Func
	goto Label_129; // 0x7d Jump
	
Label_129:
	EventEnable(7); // 0x81 EventEnable
	
Label_130:
	return 10; // 0x82 Return
	
Label_126:
	var_41_float = 0.5; // 0x7e PushF
	FadeIn(var_41_float); // 0x7f TObjFunc
}


task_1_event_6(var_0_object, var_1_float, var_2_float)
{
	var_3_int = 101; // 0x84 PushI
	KillTimer(var_3_int); // 0x85 Func
	TaskCall(0); // 0x88 TaskCall
	func_0(); // 0x89 NEW_2
	TaskReturn(); // 0x8a TaskReturn
	var_8_int = 101; // 0x8c PushI
	var_9_float = 1.0; // 0x8d PushF
	SetTimer(var_8_int, var_9_float); // 0x8e Func
	return 0; // 0x90 Return
}


main(var_0_object, var_1_float, var_2_float)
{
	var_0_object = 0; // 0xd SetNullT
	var_3_bool = 0; // 0xe PushV
	func_174(var_3_bool); // 0xf NEW_2
	var_6_bool = var_3_bool == 0; // 0x11 Not
	if(var_6_bool == 0) goto Label_24; // 0x12 JumpB
	TaskCall(0); // 0x14 TaskCall
	func_0(); // 0x15 NEW_2
	TaskReturn(); // 0x16 TaskReturn
	
Label_24:
	var_9_bool = 0; var_10_object = Obj(); var_11_string = ""; // 0x18 PushV
	var_12_object = Obj(); // 0x19 PushV
	func_179(var_12_object); // 0x1a NEW_2
	var_10_object = var_12_object; // 0x1b Mov
	var_11_string = "distance"; // 0x1d MovS
	func_162(var_9_bool, var_10_object, var_11_string); // 0x1e NEW_2
	var_21_bool = var_9_bool == 0; // 0x20 Not
	if(var_21_bool == 0) goto Label_36; // 0x21 JumpB
	var_1_float = 250000; // 0x22 TMovI
	goto Label_40; // 0x23 Jump
	
Label_40:
	var_22_bool = 0; var_23_object = Obj(); var_24_string = ""; // 0x28 PushV
	var_25_object = Obj(); // 0x29 PushV
	func_179(var_25_object); // 0x2a NEW_2
	var_23_object = var_25_object; // 0x2b Mov
	var_24_string = "mindistance"; // 0x2d MovS
	func_162(var_22_bool, var_23_object, var_24_string); // 0x2e NEW_2
	var_26_bool = var_22_bool == 0; // 0x30 Not
	if(var_26_bool == 0) goto Label_52; // 0x31 JumpB
	var_2_float = 100; // 0x32 TMovI
	goto Label_55; // 0x33 Jump
	
Label_55:
	var_27_int = 101; // 0x37 PushI
	var_28_float = 1.0; // 0x38 PushF
	SetTimer(var_27_int, var_28_float); // 0x39 Func
	
Label_59:
	Hold(); // 0x3b Func
	goto Label_59; // 0x3d Jump
	
Label_52:
	var_29_string = "mindistance"; // 0x34 PushS
	GetProperty(var_29_string, var_2_float); // 0x35 Func
	
Label_36:
	var_30_string = "distance"; // 0x24 PushS
	GetProperty(var_30_string, var_30_string); // 0x25 Func
	var_1_float = var_1_float * var_1_float; // 0x27 Mult2
}


func_0()
{
	
Label_0:
	Hold(); // 0x0 Func
	var_7_bool = 0; // 0x2 PushV
	func_174(var_7_bool); // 0x3 NEW_2
	var_8_bool = var_7_bool == 0; // 0x5 Not
	if(var_8_bool == 0) goto Label_0; // 0x6 JumpB
	return 0; // 0x7 Return
}


func_162(var_9_bool, var_10_object, var_11_string)
{
	var_15_bool = 0; var_16_bool = 0; // 0xa2 PushV
	var_17_string = "HasProperty"; // 0xa3 PushS
	var_18_int = 2; // 0xa4 PushI
	var_19_bool = IsFuncExist(var_10_object, var_17_string, var_18_int); // 0xa5 FuncExist
	var_20_bool = var_19_bool == 0; // 0xa6 Not
	if(var_20_bool == 0) goto Label_170; // 0xa7 JumpB
	var_9_bool = 0; // 0xa8 MovB
	return 2; // 0xa9 Return
	
Label_170:
	HasProperty(var_11_string, var_16_bool); // 0xaa ObjFunc
	var_9_bool = var_16_bool; // 0xac Mov
	return 2; // 0xad Return
}


func_174(var_3_bool)
{
	var_4_bool = 0; var_5_bool = 0; // 0xae PushV
	IsLoaded(var_5_bool); // 0xaf Func
	var_3_bool = var_5_bool; // 0xb1 Mov
	return 2; // 0xb2 Return
}


func_145(var_24_cvector)
{
	var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); // 0x91 PushV
	GetPosition(var_26_cvector); // 0x92 Func
	var_24_cvector = var_26_cvector; // 0x94 Mov
	return 2; // 0x95 Return
}


func_179(var_12_object)
{
	var_13_object = Obj(); var_14_object = Obj(); // 0xb3 PushV
	self(var_14_object); // 0xb4 Func
	var_12_object = var_14_object; // 0xb6 Mov
	return 2; // 0xb7 Return
}


func_150(var_20_cvector)
{
	var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); // 0x96 PushV
	GetPosition(var_23_cvector); // 0x97 ObjFunc
	var_20_cvector = var_23_cvector; // 0x99 Mov
	return 2; // 0x9a Return
}


func_155(var_14_object)
{
	var_15_object = Obj(); var_16_object = Obj(); // 0x9b PushV
	var_17_string = "player"; // 0x9c PushS
	FindActor(var_16_object, var_17_string); // 0x9d Func
	var_14_object = var_16_object; // 0x9f Mov
	return 2; // 0xa0 Return
}


