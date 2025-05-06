task_0_event_24(var_0_int)
{
	CameraSwitchToNormal(); // 0x47 Func
	return 0; // 0x49 Return
}


main()
{
	var_0_object = Obj(); var_1_object = Obj(); var_2_object = Obj(); var_3_object = Obj(); var_4_object = Obj(); var_5_object = Obj(); // 0x0 PushV
	var_6_object = Obj(); var_7_object = Obj(); var_8_string = ""; var_9_string = ""; // 0x1 PushV
	var_10_object = Obj(); // 0x2 PushV
	func_74(var_10_object); // 0x3 NEW_2
	var_7_object = var_10_object; // 0x4 Mov
	var_8_string = "cs_final_theater_klara"; // 0x6 MovS
	var_9_string = "cs_final_theater_klara.xml"; // 0x7 MovS
	func_80(var_6_object, var_7_object, var_8_string, var_9_string); // 0x8 NEW_2
	var_3_object = var_6_object; // 0x9 Mov
	var_17_object = Obj(); var_18_object = Obj(); var_19_string = ""; var_20_string = ""; // 0xb PushV
	var_21_object = Obj(); // 0xc PushV
	func_74(var_21_object); // 0xd NEW_2
	var_18_object = var_21_object; // 0xe Mov
	var_19_string = "cs_final_theater_danko"; // 0x10 MovS
	var_20_string = "cs_final_theater_danko.xml"; // 0x11 MovS
	func_80(var_17_object, var_18_object, var_19_string, var_20_string); // 0x12 NEW_2
	var_4_object = var_17_object; // 0x13 Mov
	var_22_object = Obj(); var_23_object = Obj(); var_24_string = ""; var_25_string = ""; // 0x15 PushV
	var_26_object = Obj(); // 0x16 PushV
	func_74(var_26_object); // 0x17 NEW_2
	var_23_object = var_26_object; // 0x18 Mov
	var_24_string = "cs_final_theater_burah"; // 0x1a MovS
	var_25_string = "cs_final_theater_burah.xml"; // 0x1b MovS
	func_80(var_22_object, var_23_object, var_24_string, var_25_string); // 0x1c NEW_2
	var_5_object = var_22_object; // 0x1d Mov
	ForceGeometryLoad(); // 0x1f ObjFunc
	ForceGeometryLoad(); // 0x21 ObjFunc
	ForceGeometryLoad(); // 0x23 ObjFunc
	func_100(); // 0x26 NEW_2
	var_29_string = "space"; // 0x28 PushS
	RegisterKeyCallback(var_29_string); // 0x29 Func
	var_30_string = "cs_final_theater.mot"; // 0x2b PushS
	CameraPlay(var_30_string); // 0x2c Func
	sync(); // 0x2e Func
	var_31_bool = 0; var_32_string = ""; var_33_string = ""; // 0x30 PushV
	var_32_string = "final_quest_actor"; // 0x31 MovS
	var_33_string = "voices"; // 0x32 MovS
	func_88(var_31_bool, var_32_string, var_33_string); // 0x33 NEW_2
	CameraWaitForPlayFinish(); // 0x35 Func
	var_37_string = "space"; // 0x37 PushS
	UnregisterKeyCallback(var_37_string); // 0x38 Func
	func_105(); // 0x3b NEW_2
	CameraSwitchToNormal(); // 0x3d Func
	
Label_63:
	Hold(); // 0x3f Func
	goto Label_63; // 0x41 Jump
}


func_100()
{
	var_27_float = 0.5; // 0x64 PushF
	var_28_float = 0.886; // 0x65 PushF
	SetSepia(var_27_float, var_28_float); // 0x66 Func
	return 0; // 0x68 Return
}


func_105()
{
	var_38_int = 0; // 0x69 PushI
	var_39_int = 0; // 0x6a PushI
	SetSepia(var_38_int, var_39_int); // 0x6b Func
	return 0; // 0x6d Return
}


func_74(var_10_object)
{
	var_11_object = Obj(); var_12_object = Obj(); // 0x4a PushV
	self(var_12_object); // 0x4b Func
	var_10_object = var_12_object; // 0x4d Mov
	return 2; // 0x4e Return
}


func_80(var_6_object, var_7_object, var_8_string, var_9_string)
{
	var_13_object = Obj(); var_14_object = Obj(); // 0x50 PushV
	var_15_cvector = CVector(0.0, 0.0, 0.0); // 0x51 PushVec
	var_16_cvector = CVector(0.0, 0.0, 1.0); // 0x52 PushVec
	AddActor(var_14_object, var_8_string, var_7_object, var_15_cvector, var_16_cvector, var_9_string); // 0x53 Func
	var_6_object = var_14_object; // 0x55 Mov
	return 2; // 0x56 Return
}


func_88(var_31_bool, var_32_string, var_33_string)
{
	var_34_object = Obj(); var_35_object = Obj(); // 0x58 PushV
	FindActor(var_35_object, var_32_string); // 0x59 Func
	var_36_bool = var_35_object == 0; // 0x5b NullEq
	if(var_36_bool == 0) goto Label_95; // 0x5c JumpB
	var_31_bool = 0; // 0x5d MovB
	return 2; // 0x5e Return
	
Label_95:
	Trigger(var_35_object, var_33_string); // 0x5f Func
	var_31_bool = 1; // 0x61 MovB
	return 2; // 0x62 Return
}


