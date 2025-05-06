task_0_event_5()
{
	TaskCall(1); // 0xf TaskCall
	func_60(); // 0x10 NEW_2
	TaskReturn(); // 0x11 TaskReturn
	return 0; // 0x13 Return
}


task_1_event_6()
{
	StopGroup0(); // 0x55 Func
	return 0; // 0x57 Return
}


main()
{
	var_0_string = ""; var_1_string = ""; // 0x0 PushV
	var_0_string = "woman"; // 0x1 MovS
	var_1_string = "woman"; // 0x2 MovS
	func_20(var_0_string, var_1_string); // 0x3 NEW_2
	var_34_string = ""; var_35_string = ""; // 0x5 PushV
	var_34_string = "worker"; // 0x6 MovS
	var_35_string = "man"; // 0x7 MovS
	func_20(var_34_string, var_35_string); // 0x8 NEW_2
	
Label_10:
	Hold(); // 0xa Func
	goto Label_10; // 0xc Jump
}


func_103()
{
	var_4_int = 0; var_5_bool = 0; var_6_cvector = CVector(0,0,0); var_7_cvector = CVector(0,0,0); var_8_int = 0; var_9_bool = 0; var_10_cvector = CVector(0,0,0); var_11_cvector = CVector(0,0,0); // 0x67 PushV
	var_8_int = 1; // 0x68 MovI
	
Label_105:
	var_12_string = "pt_fog"; // 0x69 PushS
	var_13_int = var_12_string + var_8_int; // 0x6a Add
	GetLocator(var_13_int, var_9_bool, var_10_cvector, var_11_cvector); // 0x6b Func
	var_14_bool = var_9_bool == 0; // 0x6d Not
	if(var_14_bool == 0) goto Label_112; // 0x6e JumpB
	goto Label_120; // 0x6f Jump
	
Label_120:
	return 8; // 0x78 Return
	
Label_112:
	var_15_cvector = CVector(0,0,0); var_16_cvector = CVector(0,0,0); // 0x70 PushV
	var_15_cvector = var_10_cvector; // 0x71 Mov
	var_16_cvector = var_11_cvector; // 0x72 Mov
	func_121(var_15_cvector, var_16_cvector); // 0x73 NEW_2
	var_28_int = 1; // 0x75 PushI
	var_8_int = var_8_int + var_28_int; // 0x76 Add2
	goto Label_105; // 0x77 Jump
}


func_136(var_26_object)
{
	var_27_object = Obj(); var_28_object = Obj(); // 0x88 PushV
	self(var_28_object); // 0x89 Func
	var_26_object = var_28_object; // 0x8b Mov
	return 2; // 0x8c Return
}


func_41(var_14_string, var_15_string, var_16_cvector, var_17_cvector)
{
	var_18_object = Obj(); var_19_object = Obj(); // 0x29 PushV
	var_20_bool = 0; var_21_float = 0; // 0x2a PushV
	var_21_float = 0.5; // 0x2b MovF
	func_142(var_20_bool, var_21_float); // 0x2c NEW_2
	if(var_20_bool == 0) goto Label_59; // 0x2e JumpB
	var_24_string = "pers_"; // 0x2f PushS
	var_25_int = var_24_string + var_14_string; // 0x30 Add
	var_26_object = Obj(); // 0x31 PushV
	func_136(var_26_object); // 0x32 NEW_2
	var_29_string = "agony1_"; // 0x34 PushS
	var_30_int = var_29_string + var_15_string; // 0x35 Add
	var_31_string = ".xml"; // 0x36 PushS
	var_32_int = var_30_int + var_31_string; // 0x37 Add
	AddActor(var_19_object, var_25_int, var_26_object, var_16_cvector, var_17_cvector, var_32_int); // 0x38 Func
	var_19_object = 0; // 0x3a SetNull
	
Label_59:
	return 2; // 0x3b Return
}


func_142(var_20_bool, var_21_float)
{
	var_22_float = 0; var_23_float = 0; // 0x8e PushV
	rand(var_23_float); // 0x8f Func
	var_20_bool = var_23_float < var_21_float; // 0x91 LT2
	return 2; // 0x92 Return
}


func_20(var_0_string, var_1_string)
{
	var_2_int = 0; var_3_bool = 0; var_4_cvector = CVector(0,0,0); var_5_cvector = CVector(0,0,0); var_6_int = 0; var_7_bool = 0; var_8_cvector = CVector(0,0,0); var_9_cvector = CVector(0,0,0); // 0x14 PushV
	var_6_int = 1; // 0x15 MovI
	
Label_22:
	var_10_string = "pt_agony_"; // 0x16 PushS
	var_11_int = var_10_string + var_0_string; // 0x17 Add
	var_12_int = var_11_int + var_6_int; // 0x18 Add
	GetLocator(var_12_int, var_7_bool, var_8_cvector, var_9_cvector); // 0x19 Func
	var_13_bool = var_7_bool == 0; // 0x1b Not
	if(var_13_bool == 0) goto Label_30; // 0x1c JumpB
	goto Label_40; // 0x1d Jump
	
Label_40:
	return 8; // 0x28 Return
	
Label_30:
	var_14_string = ""; var_15_string = ""; var_16_cvector = CVector(0,0,0); var_17_cvector = CVector(0,0,0); // 0x1e PushV
	var_14_string = var_0_string; // 0x1f Mov
	var_15_string = var_1_string; // 0x20 Mov
	var_16_cvector = var_8_cvector; // 0x21 Mov
	var_17_cvector = var_9_cvector; // 0x22 Mov
	func_41(var_14_string, var_15_string, var_16_cvector, var_17_cvector); // 0x23 NEW_2
	var_33_int = 1; // 0x25 PushI
	var_6_int = var_6_int + var_33_int; // 0x26 Add2
	goto Label_22; // 0x27 Jump
}


func_88(var_33_cvector)
{
	var_34_object = Obj(); var_35_object = Obj(); // 0x58 PushV
	var_36_string = "New fog at "; // 0x59 PushS
	var_37_int = var_36_string + var_33_cvector; // 0x5a Add
	Trace(var_37_int); // 0x5b Func
	var_38_string = "fog"; // 0x5d PushS
	var_39_object = Obj(); // 0x5e PushV
	func_136(var_39_object); // 0x5f NEW_2
	var_40_cvector = CVector(0.0, 0.0, 1.0); // 0x61 PushVec
	var_41_string = "horror_fog.xml"; // 0x62 PushS
	AddActorByType(var_35_object, var_38_string, var_39_object, var_33_cvector, var_40_cvector, var_41_string); // 0x63 Func
	return 2; // 0x65 Return
}


func_121(var_15_cvector, var_16_cvector)
{
	var_17_object = Obj(); var_18_object = Obj(); // 0x79 PushV
	var_19_bool = 0; var_20_float = 0; // 0x7a PushV
	var_20_float = 0.5; // 0x7b MovF
	func_142(var_19_bool, var_20_float); // 0x7c NEW_2
	if(var_19_bool == 0) goto Label_135; // 0x7e JumpB
	var_23_string = "fog"; // 0x7f PushS
	var_24_object = Obj(); // 0x80 PushV
	func_136(var_24_object); // 0x81 NEW_2
	var_27_string = "fog_stat.xml"; // 0x83 PushS
	AddActorByType(var_18_object, var_23_string, var_24_object, var_15_cvector, var_16_cvector, var_27_string); // 0x84 Func
	var_18_object = 0; // 0x86 SetNull
	
Label_135:
	return 2; // 0x87 Return
}


func_60()
{
	var_0_bool = 0; var_1_cvector = CVector(0,0,0); var_2_bool = 0; var_3_cvector = CVector(0,0,0); // 0x3c PushV
	func_103(); // 0x3e NEW_2
	var_29_int = 3; // 0x40 PushI
	Sleep(var_29_int, var_2_bool); // 0x41 Func
	var_30_bool = var_2_bool; // 0x43 Push
	if(var_30_bool == 0) goto Label_84; // 0x44 JumpB
	
Label_69:
	var_31_int = 0; // 0x45 PushI
	var_32_int = 0; // 0x46 PushI
	GetRandomPFPoint(var_3_cvector, var_31_int, var_32_int); // 0x47 Func
	var_33_cvector = CVector(0,0,0); // 0x49 PushV
	var_33_cvector = var_3_cvector; // 0x4a Mov
	func_88(var_33_cvector); // 0x4b NEW_2
	var_42_int = 30; // 0x4d PushI
	Sleep(var_42_int, var_2_bool); // 0x4e Func
	var_43_bool = var_2_bool == 0; // 0x50 Not
	if(var_43_bool == 0) goto Label_83; // 0x51 JumpB
	goto Label_84; // 0x52 Jump
	
Label_84:
	return 4; // 0x54 Return
	
Label_83:
	goto Label_69; // 0x53 Jump
}


