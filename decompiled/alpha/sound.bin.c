task_0_event_5(var_0_object, var_1_float, var_2_float)
{
	StopGroup0(); // 0x3 Func
	return 0; // 0x5 Return
}


task_1_event_7(var_0_object, var_1_float, var_2_float, var_3_int)
{
	var_4_object = Obj(); var_5_cvector = CVector(0,0,0); var_6_cvector = CVector(0,0,0); var_7_cvector = CVector(0,0,0); var_8_float = 0; var_9_object = Obj(); var_10_cvector = CVector(0,0,0); var_11_cvector = CVector(0,0,0); var_12_cvector = CVector(0,0,0); var_13_float = 0; // 0x38 PushV
	var_14_object = Obj(); // 0x39 PushV
	func_148(var_14_object); // 0x3a Call
	var_9_object = var_14_object; // 0x3b Mov
	var_18_bool = var_9_object == 0; // 0x3d NullEq
	if(var_18_bool == 0) goto Label_67; // 0x3e JumpB
	var_19_string = "Null player"; // 0x3f PushS
	Trace(var_19_string); // 0x40 Func
	return 10; // 0x42 Return
	
Label_67:
	var_20_cvector = CVector(0,0,0); var_21_object = Obj(); // 0x43 PushV
	var_21_object = var_9_object; // 0x44 Mov
	func_143(var_21_object); // 0x45 Call
	var_10_cvector = var_20_cvector; // 0x46 Mov
	var_24_cvector = CVector(0,0,0); // 0x48 PushV
	func_138(var_24_cvector); // 0x49 Call
	var_11_cvector = var_24_cvector; // 0x4a Mov
	var_12_cvector = var_10_cvector - var_11_cvector; // 0x4c Sub2
	var_13_float = var_12_cvector | var_12_cvector; // 0x4d Or2
	var_27_bool = 0; // 0x4e PushV
	var_27_bool = 0; // 0x4f MovB
	var_28_bool = var_0_object != 0; // 0x50 NullNeq
	if(var_28_bool == 0) goto Label_85; // 0x51 JumpB
	var_29_bool = var_13_float > var_1_float; // 0x52 GT
	if(var_29_bool == 0) goto Label_85; // 0x53 JumpB
	var_27_bool = 1; // 0x54 MovB
	
Label_85:
	if(var_27_bool == 0) goto Label_93; // 0x55 JumpB
	var_30_string = "stopped"; // 0x56 PushS
	Trace(var_30_string); // 0x57 Func
	Stop(); // 0x59 TObjFunc
	var_0_object = 0; // 0x5b SetNullT
	return 10; // 0x5c Return
	
Label_93:
	var_31_bool = 0; // 0x5d PushV
	var_31_bool = 0; // 0x5e MovB
	var_32_bool = var_0_object == 0; // 0x5f NullEq
	if(var_32_bool == 0) goto Label_100; // 0x60 JumpB
	var_33_bool = var_13_float < var_1_float; // 0x61 LT
	if(var_33_bool == 0) goto Label_100; // 0x62 JumpB
	var_31_bool = 1; // 0x63 MovB
	
Label_100:
	if(var_31_bool == 0) goto Label_123; // 0x64 JumpB
	EventDisable(7); // 0x65 EventDisable
	var_34_string = "started"; // 0x66 PushS
	Trace(var_34_string); // 0x67 Func
	var_35_string = "envsound"; // 0x69 PushS
	WaitFor3DSoundToLoad(var_35_string); // 0x6a Func
	var_36_string = "envsound"; // 0x6c PushS
	var_37_cvector = CVector(0.0, 0.0, 0.0); // 0x6d PushVec
	var_38_float = 0.0; // 0x6e PushF
	PlayLoopedGlobalSound(var_0_object, var_36_string, var_37_cvector, var_38_float, var_37_cvector); // 0x6f Func
	var_39_bool = var_0_object == 0; // 0x71 NullEq
	if(var_39_bool == 0) goto Label_119; // 0x72 JumpB
	var_40_string = "Sound was not found"; // 0x73 PushS
	Trace(var_40_string); // 0x74 Func
	goto Label_122; // 0x76 Jump
	
Label_122:
	EventEnable(7); // 0x7a EventEnable
	
Label_123:
	return 10; // 0x7b Return
	
Label_119:
	var_41_float = 0.5; // 0x77 PushF
	FadeIn(var_41_float); // 0x78 TObjFunc
}


task_1_event_6(var_0_object, var_1_float, var_2_float)
{
	var_3_int = 101; // 0x7d PushI
	KillTimer(var_3_int); // 0x7e Func
	TaskCall(0); // 0x81 TaskCall
	func_0(); // 0x82 Call
	TaskReturn(); // 0x83 TaskReturn
	var_4_int = 101; // 0x85 PushI
	var_5_float = 1.0; // 0x86 PushF
	SetTimer(var_4_int, var_5_float); // 0x87 Func
	return 0; // 0x89 Return
}


main(var_0_object, var_1_float, var_2_float)
{
	var_0_object = 0; // 0x6 SetNullT
	var_3_bool = 0; // 0x7 PushV
	func_167(var_3_bool); // 0x8 Call
	var_6_bool = var_3_bool == 0; // 0xa Not
	if(var_6_bool == 0) goto Label_17; // 0xb JumpB
	TaskCall(0); // 0xd TaskCall
	func_0(); // 0xe Call
	TaskReturn(); // 0xf TaskReturn
	
Label_17:
	var_7_bool = 0; var_8_object = Obj(); var_9_string = ""; // 0x11 PushV
	var_10_object = Obj(); // 0x12 PushV
	func_172(var_10_object); // 0x13 Call
	var_8_object = var_10_object; // 0x14 Mov
	var_9_string = "distance"; // 0x16 MovS
	func_155(var_7_bool, var_8_object, var_9_string); // 0x17 Call
	var_19_bool = var_7_bool == 0; // 0x19 Not
	if(var_19_bool == 0) goto Label_29; // 0x1a JumpB
	var_1_float = 250000; // 0x1b TMovI
	goto Label_33; // 0x1c Jump
	
Label_33:
	var_20_bool = 0; var_21_object = Obj(); var_22_string = ""; // 0x21 PushV
	var_23_object = Obj(); // 0x22 PushV
	func_172(var_23_object); // 0x23 Call
	var_21_object = var_23_object; // 0x24 Mov
	var_22_string = "mindistance"; // 0x26 MovS
	func_155(var_20_bool, var_21_object, var_22_string); // 0x27 Call
	var_24_bool = var_20_bool == 0; // 0x29 Not
	if(var_24_bool == 0) goto Label_45; // 0x2a JumpB
	var_2_float = 100; // 0x2b TMovI
	goto Label_48; // 0x2c Jump
	
Label_48:
	var_25_int = 101; // 0x30 PushI
	var_26_float = 1.0; // 0x31 PushF
	SetTimer(var_25_int, var_26_float); // 0x32 Func
	
Label_52:
	Hold(); // 0x34 Func
	goto Label_52; // 0x36 Jump
	
Label_45:
	var_27_string = "mindistance"; // 0x2d PushS
	GetProperty(var_27_string, var_2_float); // 0x2e Func
	
Label_29:
	var_28_string = "distance"; // 0x1d PushS
	GetProperty(var_28_string, var_28_string); // 0x1e Func
	var_1_float = var_1_float * var_1_float; // 0x20 Mult2
}


func_0()
{
	Hold(); // 0x0 Func
	return 0; // 0x2 Return
}


func_167(var_3_bool)
{
	var_4_bool = 0; var_5_bool = 0; // 0xa7 PushV
	IsLoaded(var_5_bool); // 0xa8 Func
	var_3_bool = var_5_bool; // 0xaa Mov
	return 2; // 0xab Return
}


func_138(var_24_cvector)
{
	var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); // 0x8a PushV
	GetPosition(var_26_cvector); // 0x8b Func
	var_24_cvector = var_26_cvector; // 0x8d Mov
	return 2; // 0x8e Return
}


func_172(var_10_object)
{
	var_11_object = Obj(); var_12_object = Obj(); // 0xac PushV
	self(var_12_object); // 0xad Func
	var_10_object = var_12_object; // 0xaf Mov
	return 2; // 0xb0 Return
}


func_143(var_20_cvector)
{
	var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); // 0x8f PushV
	GetPosition(var_23_cvector); // 0x90 ObjFunc
	var_20_cvector = var_23_cvector; // 0x92 Mov
	return 2; // 0x93 Return
}


func_148(var_14_object)
{
	var_15_object = Obj(); var_16_object = Obj(); // 0x94 PushV
	var_17_string = "player"; // 0x95 PushS
	FindActor(var_16_object, var_17_string); // 0x96 Func
	var_14_object = var_16_object; // 0x98 Mov
	return 2; // 0x99 Return
}


func_155(var_7_bool, var_8_object, var_9_string)
{
	var_13_bool = 0; var_14_bool = 0; // 0x9b PushV
	var_15_string = "HasProperty"; // 0x9c PushS
	var_16_int = 2; // 0x9d PushI
	var_17_bool = IsFuncExist(var_8_object, var_15_string, var_16_int); // 0x9e FuncExist
	var_18_bool = var_17_bool == 0; // 0x9f Not
	if(var_18_bool == 0) goto Label_163; // 0xa0 JumpB
	var_7_bool = 0; // 0xa1 MovB
	return 2; // 0xa2 Return
	
Label_163:
	HasProperty(var_9_string, var_14_bool); // 0xa3 ObjFunc
	var_7_bool = var_14_bool; // 0xa5 Mov
	return 2; // 0xa6 Return
}


