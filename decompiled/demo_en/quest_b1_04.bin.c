task_0_event_9(var_0_object, var_1_int, var_2_float)
{
	func_49(); // 0x57 NEW_2
	return 0; // 0x59 Return
}


main(var_0_object)
{
	var_1_object = Obj(); var_2_object = Obj(); // 0x0 PushV
	var_3_object = Obj(); // 0x1 PushV
	func_96(var_3_object); // 0x2 NEW_2
	var_0_object = var_3_object; // 0x3 TMov
	GetMainOutdoorScene(var_2_object); // 0x5 Func
	var_6_object = Obj(); var_7_object = Obj(); var_8_string = ""; var_9_string = ""; var_10_string = ""; // 0x7 PushV
	var_7_object = var_2_object; // 0x8 Mov
	var_8_string = "pt_b1q04_grabitel1"; // 0x9 MovS
	var_9_string = "pers_grabitel"; // 0xa MovS
	var_10_string = "b1q04_grabitel.xml"; // 0xb MovS
	func_102(var_7_object, var_8_string, var_9_string, var_10_string); // 0xc NEW_2
	add(var_6_object); // 0xe TObjFunc
	var_24_object = Obj(); var_25_object = Obj(); var_26_string = ""; var_27_string = ""; var_28_string = ""; // 0x10 PushV
	var_25_object = var_2_object; // 0x11 Mov
	var_26_string = "pt_b1q04_grabitel2"; // 0x12 MovS
	var_27_string = "pers_grabitel"; // 0x13 MovS
	var_28_string = "b1q04_grabitel2.xml"; // 0x14 MovS
	func_102(var_25_object, var_26_string, var_27_string, var_28_string); // 0x15 NEW_2
	add(var_24_object); // 0x17 TObjFunc
	var_29_object = Obj(); var_30_object = Obj(); var_31_string = ""; var_32_string = ""; var_33_string = ""; // 0x19 PushV
	var_30_object = var_2_object; // 0x1a Mov
	var_31_string = "pt_b1q04_worker1"; // 0x1b MovS
	var_32_string = "pers_worker"; // 0x1c MovS
	var_33_string = "b1q04_worker.xml"; // 0x1d MovS
	func_102(var_30_object, var_31_string, var_32_string, var_33_string); // 0x1e NEW_2
	add(var_29_object); // 0x20 TObjFunc
	var_34_object = Obj(); var_35_object = Obj(); var_36_string = ""; var_37_string = ""; var_38_string = ""; // 0x22 PushV
	var_35_object = var_2_object; // 0x23 Mov
	var_36_string = "pt_b1q04_worker2"; // 0x24 MovS
	var_37_string = "pers_worker"; // 0x25 MovS
	var_38_string = "b1q04_worker.xml"; // 0x26 MovS
	func_102(var_35_object, var_36_string, var_37_string, var_38_string); // 0x27 NEW_2
	add(var_34_object); // 0x29 TObjFunc
	var_39_int = 0; // 0x2b PushV
	var_39_int = 1; // 0x2c MovI
	func_66(var_39_int); // 0x2d NEW_2
	return 2; // 0x2f Return
}


func_96(var_3_object)
{
	var_4_object = Obj(); var_5_object = Obj(); // 0x60 PushV
	CreateObjectVector(var_5_object); // 0x61 Func
	var_3_object = var_5_object; // 0x63 Mov
	return 2; // 0x64 Return
}


func_66(var_39_int)
{
	var_40_float = 0; var_41_float = 0; // 0x42 PushV
	GetGameTime(var_41_float); // 0x43 Func
	var_42_int = 24; // 0x45 PushI
	var_43_float = var_39_int * var_42_int; // 0x46 Mult
	var_44_bool = var_41_float >= var_43_float; // 0x47 GE
	if(var_44_bool == 0) goto Label_77; // 0x48 JumpB
	func_53(var_41_float); // 0x4a NEW_2
	goto Label_84; // 0x4c Jump
	
Label_84:
	return 2; // 0x54 Return
	
Label_77:
	var_60_int = 0; // 0x4d PushI
	var_61_int = 24; // 0x4e PushI
	var_62_float = var_39_int * var_61_int; // 0x4f Mult
	SetTimeEvent(var_60_int, var_62_float); // 0x50 Func
	Hold(); // 0x52 Func
}


func_102(var_6_object, var_8_string, var_9_string, var_10_string)
{
	var_11_bool = 0; var_12_cvector = CVector(0,0,0); var_13_cvector = CVector(0,0,0); var_14_object = Obj(); var_15_bool = 0; var_16_cvector = CVector(0,0,0); var_17_cvector = CVector(0,0,0); var_18_object = Obj(); // 0x66 PushV
	GetLocator(var_8_string, var_15_bool, var_16_cvector, var_17_cvector); // 0x67 ObjFunc
	var_19_bool = var_15_bool == 0; // 0x69 Not
	if(var_19_bool == 0) goto Label_115; // 0x6a JumpB
	var_20_string = "Locator "; // 0x6b PushS
	var_21_int = var_20_string + var_8_string; // 0x6c Add
	var_22_string = " doesn't exist"; // 0x6d PushS
	var_23_int = var_21_int + var_22_string; // 0x6e Add
	Trace(var_23_int); // 0x6f Func
	var_18_object = 0; // 0x71 SetNull
	goto Label_117; // 0x72 Jump
	
Label_117:
	var_6_object = var_18_object; // 0x75 Mov
	return 8; // 0x76 Return
	
Label_115:
	AddStationaryActor(var_18_object, var_16_cvector, var_17_cvector, var_9_string, var_10_string); // 0x73 ObjFunc
}


func_49()
{
	func_53(var_2_float); // 0x32 NEW_2
	return 0; // 0x34 Return
}


func_53(var_0_object)
{
	var_45_object = var_0_object; // 0x35 PushT
	if(var_45_object == 0) goto Label_60; // 0x36 JumpB
	var_46_object = Obj(); // 0x37 PushV
	var_46_object = var_0_object; // 0x38 MovT
	func_120(var_46_object); // 0x39 NEW_2
	var_0_object = 0; // 0x3b SetNullT
	
Label_60:
	var_57_object = Obj(); // 0x3c PushV
	func_90(var_57_object); // 0x3d NEW_2
	RemoveActor(var_57_object); // 0x3f Func
	return 0; // 0x41 Return
}


func_120(var_46_object)
{
	var_47_int = 0; var_48_int = 0; var_49_object = Obj(); var_50_int = 0; var_51_int = 0; var_52_object = Obj(); // 0x78 PushV
	var_53_object = var_46_object; // 0x79 Push
	if(var_53_object == 0) goto Label_140; // 0x7a JumpB
	size(var_50_int); // 0x7b ObjFunc
	var_51_int = 0; // 0x7d MovI
	
Label_126:
	var_54_bool = var_51_int < var_50_int; // 0x7e LT
	if(var_54_bool == 0) goto Label_138; // 0x7f JumpB
	get(var_52_object, var_51_int); // 0x80 ObjFunc
	var_55_object = var_52_object; // 0x82 Push
	if(var_55_object == 0) goto Label_134; // 0x83 JumpB
	Remove(); // 0x84 ObjFunc
	
Label_134:
	var_52_object = 0; // 0x86 SetNull
	var_56_int = 1; // 0x87 PushI
	var_51_int = var_51_int + var_56_int; // 0x88 Add2
	goto Label_126; // 0x89 Jump
	
Label_138:
	clear(); // 0x8a ObjFunc
	
Label_140:
	return 6; // 0x8c Return
}


func_90(var_57_object)
{
	var_58_object = Obj(); var_59_object = Obj(); // 0x5a PushV
	self(var_59_object); // 0x5b Func
	var_57_object = var_59_object; // 0x5d Mov
	return 2; // 0x5e Return
}


