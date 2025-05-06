task_0_event_26(var_0_object, var_1_object, var_2_object, var_3_string)
{
	var_4_object = Obj(); var_5_object = Obj(); // 0x9 PushV
	Trace(var_3_string); // 0xa Func
	var_6_string = "place_family"; // 0xc PushS
	var_7_bool = var_3_string == var_6_string; // 0xd Eq
	if(var_7_bool == 0) goto Label_44; // 0xe JumpB
	var_8_string = "burah_home"; // 0xf PushS
	GetSceneByName(var_5_object, var_8_string); // 0x10 Func
	var_9_object = Obj(); var_10_object = Obj(); var_11_string = ""; var_12_string = ""; var_13_string = ""; // 0x12 PushV
	var_10_object = var_5_object; // 0x13 Mov
	var_11_string = "pt_k7q03_father"; // 0x14 MovS
	var_12_string = "pers_unosha"; // 0x15 MovS
	var_13_string = "k7q03_father.xml"; // 0x16 MovS
	func_137(var_9_object, var_10_object, var_11_string, var_12_string, var_13_string); // 0x17 NEW_2
	var_0_object = var_9_object; // 0x18 TMov
	var_27_object = Obj(); var_28_object = Obj(); var_29_string = ""; var_30_string = ""; var_31_string = ""; // 0x1a PushV
	var_28_object = var_5_object; // 0x1b Mov
	var_29_string = "pt_k7q03_daughter"; // 0x1c MovS
	var_30_string = "pers_littlegirl"; // 0x1d MovS
	var_31_string = "k7q03_daughter.xml"; // 0x1e MovS
	func_137(var_27_object, var_28_object, var_29_string, var_30_string, var_31_string); // 0x1f NEW_2
	var_1_object = var_27_object; // 0x20 TMov
	var_32_object = Obj(); var_33_object = Obj(); var_34_string = ""; var_35_string = ""; var_36_string = ""; // 0x22 PushV
	var_33_object = var_5_object; // 0x23 Mov
	var_34_string = "pt_k7q03_son"; // 0x24 MovS
	var_35_string = "pers_littleboy"; // 0x25 MovS
	var_36_string = "k7q03_son.xml"; // 0x26 MovS
	func_137(var_32_object, var_33_object, var_34_string, var_35_string, var_36_string); // 0x27 NEW_2
	var_2_object = var_32_object; // 0x28 TMov
	var_5_object = 0; // 0x2a SetNull
	goto Label_57; // 0x2b Jump
	
Label_57:
	return 2; // 0x39 Return
	
Label_44:
	var_37_string = "completed"; // 0x2c PushS
	var_38_bool = var_3_string == var_37_string; // 0x2d Eq
	if(var_38_bool == 0) goto Label_51; // 0x2e JumpB
	func_77(); // 0x30 NEW_2
	goto Label_57; // 0x32 Jump
	
Label_51:
	var_50_string = "fail"; // 0x33 PushS
	var_51_bool = var_3_string == var_50_string; // 0x34 Eq
	if(var_51_bool == 0) goto Label_57; // 0x35 JumpB
	func_69(); // 0x37 NEW_2
}


task_0_event_9(var_0_object, var_1_object, var_2_object, var_3_int, var_4_float)
{
	func_58(); // 0x80 NEW_2
	return 0; // 0x82 Return
}


main(var_0_object, var_1_object, var_2_object)
{
	var_3_string = "k7q03"; // 0x0 PushS
	var_4_int = 1; // 0x1 PushI
	SetVariable(var_3_string, var_4_int); // 0x2 Func
	var_5_int = 0; // 0x4 PushV
	var_5_int = 7; // 0x5 MovI
	func_107(var_5_int); // 0x6 NEW_2
	return 0; // 0x8 Return
}


func_131(var_17_object)
{
	var_18_object = Obj(); var_19_object = Obj(); // 0x83 PushV
	self(var_19_object); // 0x84 Func
	var_17_object = var_19_object; // 0x86 Mov
	return 2; // 0x87 Return
}


func_69()
{
	var_10_string = "k7q03"; // 0x45 PushS
	var_11_int = -1; // 0x46 PushI
	SetVariable(var_10_string, var_11_int); // 0x47 Func
	func_85(var_5_int, var_6_int); // 0x4a NEW_2
	return 0; // 0x4c Return
}


func_137(var_9_object, var_10_object, var_11_string, var_12_string, var_13_string)
{
	var_14_bool = 0; var_15_cvector = CVector(0,0,0); var_16_cvector = CVector(0,0,0); var_17_object = Obj(); var_18_bool = 0; var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); var_21_object = Obj(); // 0x89 PushV
	GetLocator(var_11_string, var_18_bool, var_19_cvector, var_20_cvector); // 0x8a ObjFunc
	var_22_bool = var_18_bool == 0; // 0x8c Not
	if(var_22_bool == 0) goto Label_150; // 0x8d JumpB
	var_23_string = "Locator "; // 0x8e PushS
	var_24_int = var_23_string + var_11_string; // 0x8f Add
	var_25_string = " doesn't exist"; // 0x90 PushS
	var_26_int = var_24_int + var_25_string; // 0x91 Add
	Trace(var_26_int); // 0x92 Func
	var_21_object = 0; // 0x94 SetNull
	goto Label_152; // 0x95 Jump
	
Label_152:
	var_9_object = var_21_object; // 0x98 Mov
	return 8; // 0x99 Return
	
Label_150:
	AddActor(var_21_object, var_12_string, var_10_object, var_19_cvector, var_20_cvector, var_13_string); // 0x96 Func
}


func_107(var_5_int)
{
	var_6_float = 0; var_7_float = 0; // 0x6b PushV
	GetGameTime(var_7_float); // 0x6c Func
	var_8_int = 24; // 0x6e PushI
	var_9_float = var_5_int * var_8_int; // 0x6f Mult
	var_10_bool = var_7_float >= var_9_float; // 0x70 GE
	if(var_10_bool == 0) goto Label_118; // 0x71 JumpB
	func_85(var_6_float, var_7_float); // 0x73 NEW_2
	goto Label_125; // 0x75 Jump
	
Label_125:
	return 2; // 0x7d Return
	
Label_118:
	var_20_int = 0; // 0x76 PushI
	var_21_int = 24; // 0x77 PushI
	var_22_float = var_5_int * var_21_int; // 0x78 Mult
	SetTimeEvent(var_20_int, var_22_float); // 0x79 Func
	Hold(); // 0x7b Func
}


func_77()
{
	var_39_string = "k7q03"; // 0x4d PushS
	var_40_int = 1000; // 0x4e PushI
	SetVariable(var_39_string, var_40_int); // 0x4f Func
	func_85(var_4_object, var_5_object); // 0x52 NEW_2
	return 0; // 0x54 Return
}


func_85(var_0_object, var_7_float)
{
	EventDisable(26); // 0x55 EventDisable
	var_11_object = var_0_object; // 0x56 PushT
	if(var_11_object == 0) goto Label_91; // 0x57 JumpB
	var_12_string = "cleanup"; // 0x58 PushS
	Trigger(var_0_object, var_12_string); // 0x59 Func
	
Label_91:
	var_13_object = var_1_object; // 0x5b PushT
	if(var_13_object == 0) goto Label_96; // 0x5c JumpB
	var_14_string = "cleanup"; // 0x5d PushS
	Trigger(var_14_string, var_14_string); // 0x5e Func
	
Label_96:
	var_15_object = var_2_object; // 0x60 PushT
	if(var_15_object == 0) goto Label_101; // 0x61 JumpB
	var_16_string = "cleanup"; // 0x62 PushS
	Trigger(var_7_float, var_16_string); // 0x63 Func
	
Label_101:
	var_17_object = Obj(); // 0x65 PushV
	func_131(var_17_object); // 0x66 NEW_2
	RemoveActor(var_17_object); // 0x68 Func
	return 0; // 0x6a Return
}


func_58()
{
	var_5_int = 0; var_6_int = 0; // 0x3a PushV
	var_7_string = "k7q03"; // 0x3b PushS
	GetVariable(var_7_string, var_6_int); // 0x3c Func
	var_8_int = 1000; // 0x3e PushI
	var_9_bool = var_6_int != var_8_int; // 0x3f Neq
	if(var_9_bool == 0) goto Label_68; // 0x40 JumpB
	func_69(); // 0x42 NEW_2
	
Label_68:
	return 2; // 0x44 Return
}


