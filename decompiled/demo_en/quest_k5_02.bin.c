task_0_event_26(var_0_object, var_1_object, var_2_object, var_3_string)
{
	var_4_object = Obj(); var_5_object = Obj(); var_6_object = Obj(); var_7_object = Obj(); // 0x21 PushV
	Trace(var_3_string); // 0x22 Func
	var_8_string = "init_kabak"; // 0x24 PushS
	var_9_bool = var_3_string == var_8_string; // 0x25 Eq
	if(var_9_bool == 0) goto Label_52; // 0x26 JumpB
	var_10_string = "shouse1_kabak"; // 0x27 PushS
	GetSceneByName(var_6_object, var_10_string); // 0x28 Func
	var_11_object = Obj(); var_12_object = Obj(); var_13_string = ""; var_14_string = ""; var_15_string = ""; // 0x2a PushV
	var_12_object = var_6_object; // 0x2b Mov
	var_13_string = "pt_k5q02_kabatchik"; // 0x2c MovS
	var_14_string = "pers_dohodyaga"; // 0x2d MovS
	var_15_string = "k5q02_kabatchik.xml"; // 0x2e MovS
	func_172(var_11_object, var_12_object, var_13_string, var_14_string, var_15_string); // 0x2f NEW_2
	var_2_object = var_11_object; // 0x30 TMov
	var_6_object = 0; // 0x32 SetNull
	goto Label_84; // 0x33 Jump
	
Label_84:
	return 4; // 0x54 Return
	
Label_52:
	var_29_string = "place_andrei"; // 0x34 PushS
	var_30_bool = var_3_string == var_29_string; // 0x35 Eq
	if(var_30_bool == 0) goto Label_78; // 0x36 JumpB
	var_31_string = "shouse1_kabak"; // 0x37 PushS
	GetSceneByName(var_7_object, var_31_string); // 0x38 Func
	var_32_string = "andrei"; // 0x3a PushS
	Trigger(var_7_object, var_32_string); // 0x3b Func
	var_33_object = var_2_object; // 0x3d PushT
	if(var_33_object == 0) goto Label_66; // 0x3e JumpB
	var_34_string = "cleanup"; // 0x3f PushS
	Trigger(var_7_object, var_34_string); // 0x40 Func
	
Label_66:
	var_35_object = var_0_object; // 0x42 PushT
	if(var_35_object == 0) goto Label_71; // 0x43 JumpB
	var_36_string = "cleanup"; // 0x44 PushS
	Trigger(var_0_object, var_36_string); // 0x45 Func
	
Label_71:
	var_37_object = var_1_object; // 0x47 PushT
	if(var_37_object == 0) goto Label_76; // 0x48 JumpB
	var_38_string = "cleanup"; // 0x49 PushS
	Trigger(var_38_string, var_38_string); // 0x4a Func
	
Label_76:
	var_7_object = 0; // 0x4c SetNull
	goto Label_84; // 0x4d Jump
	
Label_78:
	var_39_string = "completed"; // 0x4e PushS
	var_40_bool = var_3_string == var_39_string; // 0x4f Eq
	if(var_40_bool == 0) goto Label_84; // 0x50 JumpB
	func_104(); // 0x52 NEW_2
}


task_0_event_9(var_0_object, var_1_object, var_2_object, var_3_int, var_4_float)
{
	func_85(); // 0xa3 NEW_2
	return 0; // 0xa5 Return
}


main(var_0_object, var_1_object, var_2_object)
{
	var_3_object = Obj(); var_4_object = Obj(); // 0x0 PushV
	var_5_string = "k5q02"; // 0x1 PushS
	var_6_int = 1; // 0x2 PushI
	SetVariable(var_5_string, var_6_int); // 0x3 Func
	var_7_string = "shouse1_kabak"; // 0x5 PushS
	GetSceneByName(var_4_object, var_7_string); // 0x6 Func
	var_8_string = "noandrei"; // 0x8 PushS
	Trigger(var_4_object, var_8_string); // 0x9 Func
	var_9_object = Obj(); var_10_object = Obj(); var_11_string = ""; var_12_string = ""; var_13_string = ""; // 0xb PushV
	var_10_object = var_4_object; // 0xc Mov
	var_11_string = "pt_k5q02_patrol1"; // 0xd MovS
	var_12_string = "pers_patrool"; // 0xe MovS
	var_13_string = "k5q02_patrol.xml"; // 0xf MovS
	func_172(var_9_object, var_10_object, var_11_string, var_12_string, var_13_string); // 0x10 NEW_2
	var_0_object = var_9_object; // 0x11 TMov
	var_27_object = Obj(); var_28_object = Obj(); var_29_string = ""; var_30_string = ""; var_31_string = ""; // 0x13 PushV
	var_28_object = var_4_object; // 0x14 Mov
	var_29_string = "pt_k5q02_patrol2"; // 0x15 MovS
	var_30_string = "pers_patrool"; // 0x16 MovS
	var_31_string = "k5q02_patrol.xml"; // 0x17 MovS
	func_172(var_27_object, var_28_object, var_29_string, var_30_string, var_31_string); // 0x18 NEW_2
	var_1_object = var_27_object; // 0x19 TMov
	var_32_int = 0; // 0x1b PushV
	var_32_int = 5; // 0x1c MovI
	func_142(var_32_int); // 0x1d NEW_2
	return 2; // 0x1f Return
}


func_96()
{
	var_10_string = "k5q02"; // 0x60 PushS
	var_11_int = -1; // 0x61 PushI
	SetVariable(var_10_string, var_11_int); // 0x62 Func
	func_112(var_6_int); // 0x65 NEW_2
	return 0; // 0x67 Return
}


func_166(var_48_object)
{
	var_49_object = Obj(); var_50_object = Obj(); // 0xa6 PushV
	self(var_50_object); // 0xa7 Func
	var_48_object = var_50_object; // 0xa9 Mov
	return 2; // 0xaa Return
}


func_104()
{
	var_41_string = "k5q02"; // 0x68 PushS
	var_42_int = 1000; // 0x69 PushI
	SetVariable(var_41_string, var_42_int); // 0x6a Func
	func_112(var_7_object); // 0x6d NEW_2
	return 0; // 0x6f Return
}


func_172(var_9_object, var_10_object, var_11_string, var_12_string, var_13_string)
{
	var_14_bool = 0; var_15_cvector = CVector(0,0,0); var_16_cvector = CVector(0,0,0); var_17_object = Obj(); var_18_bool = 0; var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); var_21_object = Obj(); // 0xac PushV
	GetLocator(var_11_string, var_18_bool, var_19_cvector, var_20_cvector); // 0xad ObjFunc
	var_22_bool = var_18_bool == 0; // 0xaf Not
	if(var_22_bool == 0) goto Label_185; // 0xb0 JumpB
	var_23_string = "Locator "; // 0xb1 PushS
	var_24_int = var_23_string + var_11_string; // 0xb2 Add
	var_25_string = " doesn't exist"; // 0xb3 PushS
	var_26_int = var_24_int + var_25_string; // 0xb4 Add
	Trace(var_26_int); // 0xb5 Func
	var_21_object = 0; // 0xb7 SetNull
	goto Label_187; // 0xb8 Jump
	
Label_187:
	var_9_object = var_21_object; // 0xbb Mov
	return 8; // 0xbc Return
	
Label_185:
	AddActor(var_21_object, var_12_string, var_10_object, var_19_cvector, var_20_cvector, var_13_string); // 0xb9 Func
}


func_142(var_32_int)
{
	var_33_float = 0; var_34_float = 0; // 0x8e PushV
	GetGameTime(var_34_float); // 0x8f Func
	var_35_int = 24; // 0x91 PushI
	var_36_float = var_32_int * var_35_int; // 0x92 Mult
	var_37_bool = var_34_float >= var_36_float; // 0x93 GE
	if(var_37_bool == 0) goto Label_153; // 0x94 JumpB
	func_112(var_34_float); // 0x96 NEW_2
	goto Label_160; // 0x98 Jump
	
Label_160:
	return 2; // 0xa0 Return
	
Label_153:
	var_51_int = 0; // 0x99 PushI
	var_52_int = 24; // 0x9a PushI
	var_53_float = var_32_int * var_52_int; // 0x9b Mult
	SetTimeEvent(var_51_int, var_53_float); // 0x9c Func
	Hold(); // 0x9e Func
}


func_112(var_0_object)
{
	var_38_object = Obj(); var_39_object = Obj(); // 0x70 PushV
	EventDisable(26); // 0x71 EventDisable
	var_40_object = var_2_object; // 0x72 PushT
	if(var_40_object == 0) goto Label_119; // 0x73 JumpB
	var_41_string = "cleanup"; // 0x74 PushS
	Trigger(var_39_object, var_41_string); // 0x75 Func
	
Label_119:
	var_42_object = var_0_object; // 0x77 PushT
	if(var_42_object == 0) goto Label_124; // 0x78 JumpB
	var_43_string = "cleanup"; // 0x79 PushS
	Trigger(var_0_object, var_43_string); // 0x7a Func
	
Label_124:
	var_44_object = var_1_object; // 0x7c PushT
	if(var_44_object == 0) goto Label_129; // 0x7d JumpB
	var_45_string = "cleanup"; // 0x7e PushS
	Trigger(var_45_string, var_45_string); // 0x7f Func
	
Label_129:
	var_46_string = "shouse1_kabak"; // 0x81 PushS
	GetSceneByName(var_39_object, var_46_string); // 0x82 Func
	var_47_string = "andrei"; // 0x84 PushS
	Trigger(var_39_object, var_47_string); // 0x85 Func
	var_48_object = Obj(); // 0x87 PushV
	func_166(var_48_object); // 0x88 NEW_2
	RemoveActor(var_48_object); // 0x8a Func
	return 2; // 0x8c Return
}


func_85()
{
	var_5_int = 0; var_6_int = 0; // 0x55 PushV
	var_7_string = "k5q02"; // 0x56 PushS
	GetVariable(var_7_string, var_6_int); // 0x57 Func
	var_8_int = 1000; // 0x59 PushI
	var_9_bool = var_6_int != var_8_int; // 0x5a Neq
	if(var_9_bool == 0) goto Label_95; // 0x5b JumpB
	func_96(); // 0x5d NEW_2
	
Label_95:
	return 2; // 0x5f Return
}


