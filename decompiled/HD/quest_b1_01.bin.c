task_0_event_9(var_0_object, var_1_object, var_2_object, var_3_object, var_4_int, var_5_float)
{
	var_6_object = var_3_object; // 0x2c PushT
	if(var_6_object == 0) goto Label_49; // 0x2d JumpB
	var_7_string = "cleanup"; // 0x2e PushS
	Trigger(var_4_int, var_7_string); // 0x2f Func
	
Label_49:
	return 0; // 0x31 Return
}


task_0_event_26(var_0_object, var_1_object, var_2_object, var_3_object, var_4_string)
{
	var_5_int = 0; var_6_int = 0; // 0x32 PushV
	Trace(var_4_string); // 0x33 Func
	var_7_string = "remove_whitemask"; // 0x35 PushS
	var_8_bool = var_4_string == var_7_string; // 0x36 Eq
	if(var_8_bool == 0) goto Label_61; // 0x37 JumpB
	var_9_object = var_0_object; // 0x38 PushT
	if(var_9_object == 0) goto Label_60; // 0x39 JumpB
	Remove(); // 0x3a TObjFunc
	
Label_60:
	goto Label_112; // 0x3c Jump
	
Label_112:
	return 2; // 0x70 Return
	
Label_61:
	var_10_string = "remove1"; // 0x3d PushS
	var_11_bool = var_4_string == var_10_string; // 0x3e Eq
	if(var_11_bool == 0) goto Label_67; // 0x3f JumpB
	Remove(); // 0x40 TObjFunc
	goto Label_112; // 0x42 Jump
	
Label_67:
	var_12_string = "remove2"; // 0x43 PushS
	var_13_bool = var_4_string == var_12_string; // 0x44 Eq
	if(var_13_bool == 0) goto Label_73; // 0x45 JumpB
	Remove(); // 0x46 TObjFunc
	goto Label_112; // 0x48 Jump
	
Label_73:
	var_14_string = "remove_cutscene"; // 0x49 PushS
	var_15_bool = var_4_string == var_14_string; // 0x4a Eq
	if(var_15_bool == 0) goto Label_82; // 0x4b JumpB
	var_16_object = var_3_object; // 0x4c PushT
	if(var_16_object == 0) goto Label_81; // 0x4d JumpB
	var_17_string = "cleanup"; // 0x4e PushS
	Trigger(var_5_int, var_17_string); // 0x4f Func
	
Label_81:
	goto Label_112; // 0x51 Jump
	
Label_82:
	var_18_string = "cleanup"; // 0x52 PushS
	var_19_bool = var_4_string == var_18_string; // 0x53 Eq
	if(var_19_bool == 0) goto Label_99; // 0x54 JumpB
	var_20_string = "b1q01"; // 0x55 PushS
	GetVariable(var_20_string, var_6_int); // 0x56 Func
	var_21_int = 1000; // 0x58 PushI
	var_22_bool = var_6_int != var_21_int; // 0x59 Neq
	if(var_22_bool == 0) goto Label_95; // 0x5a JumpB
	func_113(); // 0x5c NEW_2
	goto Label_98; // 0x5e Jump
	
Label_98:
	goto Label_112; // 0x62 Jump
	
Label_95:
	func_129(var_6_int); // 0x60 NEW_2
	
Label_99:
	var_33_string = "fail"; // 0x63 PushS
	var_34_bool = var_4_string == var_33_string; // 0x64 Eq
	if(var_34_bool == 0) goto Label_106; // 0x65 JumpB
	func_113(); // 0x67 NEW_2
	goto Label_112; // 0x69 Jump
	
Label_106:
	var_35_string = "completed"; // 0x6a PushS
	var_36_bool = var_4_string == var_35_string; // 0x6b Eq
	if(var_36_bool == 0) goto Label_112; // 0x6c JumpB
	func_121(); // 0x6e NEW_2
}


main(var_0_object, var_1_object, var_2_object, var_3_object)
{
	var_4_object = Obj(); var_5_object = Obj(); // 0x0 PushV
	var_6_int = 0; // 0x1 PushI
	var_7_int = 11; // 0x2 PushI
	SetTimeEvent(var_6_int, var_7_int); // 0x3 Func
	GetMainOutdoorScene(var_5_object); // 0x5 Func
	var_8_object = Obj(); var_9_object = Obj(); var_10_string = ""; var_11_string = ""; var_12_string = ""; // 0x7 PushV
	var_9_object = var_5_object; // 0x8 Mov
	var_10_string = "pt_b1q01_whitemask"; // 0x9 MovS
	var_11_string = "pers_whitemask"; // 0xa MovS
	var_12_string = "b1q01_whitemask.xml"; // 0xb MovS
	func_167(var_9_object, var_10_string, var_11_string, var_12_string); // 0xc NEW_2
	var_0_object = var_8_object; // 0xd TMov
	var_27_object = Obj(); var_28_object = Obj(); var_29_string = ""; var_30_string = ""; var_31_string = ""; // 0xf PushV
	var_28_object = var_5_object; // 0x10 Mov
	var_29_string = "pt_b1q01_birdmask1"; // 0x11 MovS
	var_30_string = "pers_birdmask"; // 0x12 MovS
	var_31_string = "b1q01_birdmask1.xml"; // 0x13 MovS
	func_167(var_28_object, var_29_string, var_30_string, var_31_string); // 0x14 NEW_2
	var_1_object = var_27_object; // 0x15 TMov
	var_32_object = Obj(); var_33_object = Obj(); var_34_string = ""; var_35_string = ""; var_36_string = ""; // 0x17 PushV
	var_33_object = var_5_object; // 0x18 Mov
	var_34_string = "pt_b1q01_birdmask2"; // 0x19 MovS
	var_35_string = "pers_birdmask"; // 0x1a MovS
	var_36_string = "b1q01_birdmask2.xml"; // 0x1b MovS
	func_167(var_33_object, var_34_string, var_35_string, var_36_string); // 0x1c NEW_2
	var_2_object = var_32_object; // 0x1d TMov
	var_37_object = Obj(); var_38_object = Obj(); var_39_string = ""; var_40_string = ""; // 0x1f PushV
	var_38_object = var_5_object; // 0x20 Mov
	var_39_string = "b1q01_trigger"; // 0x21 MovS
	var_40_string = "b1q01_trigger.xml"; // 0x22 MovS
	func_159(var_37_object, var_38_object, var_39_string, var_40_string); // 0x23 NEW_2
	var_3_object = var_37_object; // 0x24 TMov
	
Label_38:
	Hold(); // 0x26 Func
	goto Label_38; // 0x28 Jump
}


func_129(var_5_int)
{
	EventDisable(26); // 0x81 EventDisable
	var_25_object = var_0_object; // 0x82 PushT
	if(var_25_object == 0) goto Label_134; // 0x83 JumpB
	Remove(); // 0x84 TObjFunc
	
Label_134:
	var_26_object = var_1_object; // 0x86 PushT
	if(var_26_object == 0) goto Label_138; // 0x87 JumpB
	Remove(); // 0x88 TObjFunc
	
Label_138:
	var_27_object = var_2_object; // 0x8a PushT
	if(var_27_object == 0) goto Label_142; // 0x8b JumpB
	Remove(); // 0x8c TObjFunc
	
Label_142:
	var_28_object = var_3_object; // 0x8e PushT
	if(var_28_object == 0) goto Label_147; // 0x8f JumpB
	var_29_string = "cleanup"; // 0x90 PushS
	Trigger(var_5_int, var_29_string); // 0x91 Func
	
Label_147:
	var_30_object = Obj(); // 0x93 PushV
	func_153(var_30_object); // 0x94 NEW_2
	RemoveActor(var_30_object); // 0x96 Func
	return 0; // 0x98 Return
}


func_121()
{
	var_37_string = "b1q01"; // 0x79 PushS
	var_38_int = 1000; // 0x7a PushI
	SetVariable(var_37_string, var_38_int); // 0x7b Func
	func_129(var_6_int); // 0x7e NEW_2
	return 0; // 0x80 Return
}


func_167(var_8_object, var_10_string, var_11_string, var_12_string)
{
	var_13_bool = 0; var_14_cvector = CVector(0,0,0); var_15_cvector = CVector(0,0,0); var_16_object = Obj(); var_17_bool = 0; var_18_cvector = CVector(0,0,0); var_19_cvector = CVector(0,0,0); var_20_object = Obj(); // 0xa7 PushV
	GetLocator(var_10_string, var_17_bool, var_18_cvector, var_19_cvector); // 0xa8 ObjFunc
	var_21_bool = var_17_bool == 0; // 0xaa Not
	if(var_21_bool == 0) goto Label_180; // 0xab JumpB
	var_22_string = "Locator "; // 0xac PushS
	var_23_int = var_22_string + var_10_string; // 0xad Add
	var_24_string = " doesn't exist"; // 0xae PushS
	var_25_int = var_23_int + var_24_string; // 0xaf Add
	Trace(var_25_int); // 0xb0 Func
	var_20_object = 0; // 0xb2 SetNull
	goto Label_183; // 0xb3 Jump
	
Label_183:
	var_8_object = var_20_object; // 0xb7 Mov
	return 8; // 0xb8 Return
	
Label_180:
	var_26_bool = 1; // 0xb4 PushB
	AddStationaryActor(var_20_object, var_18_cvector, var_19_cvector, var_11_string, var_12_string, var_26_bool); // 0xb5 ObjFunc
}


func_113()
{
	var_23_string = "b1q01"; // 0x71 PushS
	var_24_int = -1; // 0x72 PushI
	SetVariable(var_23_string, var_24_int); // 0x73 Func
	func_129(var_6_int); // 0x76 NEW_2
	return 0; // 0x78 Return
}


func_153(var_30_object)
{
	var_31_object = Obj(); var_32_object = Obj(); // 0x99 PushV
	self(var_32_object); // 0x9a Func
	var_30_object = var_32_object; // 0x9c Mov
	return 2; // 0x9d Return
}


func_159(var_37_object, var_38_object, var_39_string, var_40_string)
{
	var_41_object = Obj(); var_42_object = Obj(); // 0x9f PushV
	var_43_cvector = CVector(0.0, 0.0, 0.0); // 0xa0 PushVec
	var_44_cvector = CVector(0.0, 0.0, 1.0); // 0xa1 PushVec
	AddActor(var_42_object, var_39_string, var_38_object, var_43_cvector, var_44_cvector, var_40_string); // 0xa2 Func
	var_37_object = var_42_object; // 0xa4 Mov
	return 2; // 0xa5 Return
}


