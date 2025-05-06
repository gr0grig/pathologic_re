task_0_event_26(var_0_object, var_1_string)
{
	Trace(var_1_string); // 0x1a Func
	var_2_string = "place_gatherer"; // 0x1c PushS
	var_3_bool = var_1_string == var_2_string; // 0x1d Eq
	if(var_3_bool == 0) goto Label_32; // 0x1e JumpB
	goto Label_38; // 0x1f Jump
	
Label_38:
	return 0; // 0x26 Return
	
Label_32:
	var_4_string = "completed"; // 0x20 PushS
	var_5_bool = var_1_string == var_4_string; // 0x21 Eq
	if(var_5_bool == 0) goto Label_38; // 0x22 JumpB
	func_58(); // 0x24 NEW_2
}


task_0_event_9(var_0_object, var_1_int, var_2_float)
{
	func_39(); // 0x62 NEW_2
	return 0; // 0x64 Return
}


main(var_0_object)
{
	var_1_object = Obj(); var_2_object = Obj(); // 0x0 PushV
	var_3_string = "k7q02"; // 0x1 PushS
	var_4_int = 1; // 0x2 PushI
	SetVariable(var_3_string, var_4_int); // 0x3 Func
	var_5_bool = 0; var_6_string = ""; // 0x5 PushV
	var_6_string = "gatherer3"; // 0x6 MovS
	func_125(var_5_bool, var_6_string); // 0x7 NEW_2
	GetMainOutdoorScene(var_2_object); // 0x9 Func
	var_10_object = Obj(); var_11_object = Obj(); var_12_string = ""; var_13_string = ""; var_14_string = ""; // 0xb PushV
	var_11_object = var_2_object; // 0xc Mov
	var_12_string = "pt_gatherer3"; // 0xd MovS
	var_13_string = "pers_morlok"; // 0xe MovS
	var_14_string = "k7q02_gatherer.xml"; // 0xf MovS
	func_107(var_11_object, var_12_string, var_13_string, var_14_string); // 0x10 NEW_2
	var_0_object = var_10_object; // 0x11 TMov
	var_28_int = 0; // 0x13 PushV
	var_28_int = 7; // 0x14 MovI
	func_77(var_28_int); // 0x15 NEW_2
	return 2; // 0x17 Return
}


func_66()
{
	EventDisable(26); // 0x42 EventDisable
	var_34_object = var_0_object; // 0x43 PushT
	if(var_34_object == 0) goto Label_71; // 0x44 JumpB
	Remove(); // 0x45 TObjFunc
	
Label_71:
	var_35_object = Obj(); // 0x47 PushV
	func_101(var_35_object); // 0x48 NEW_2
	RemoveActor(var_35_object); // 0x4a Func
	return 0; // 0x4c Return
}


func_101(var_35_object)
{
	var_36_object = Obj(); var_37_object = Obj(); // 0x65 PushV
	self(var_37_object); // 0x66 Func
	var_35_object = var_37_object; // 0x68 Mov
	return 2; // 0x69 Return
}


func_39()
{
	var_3_int = 0; var_4_int = 0; // 0x27 PushV
	var_5_string = "k7q02"; // 0x28 PushS
	GetVariable(var_5_string, var_4_int); // 0x29 Func
	var_6_int = 1000; // 0x2b PushI
	var_7_bool = var_4_int != var_6_int; // 0x2c Neq
	if(var_7_bool == 0) goto Label_49; // 0x2d JumpB
	func_50(); // 0x2f NEW_2
	
Label_49:
	return 2; // 0x31 Return
}


func_107(var_10_object, var_12_string, var_13_string, var_14_string)
{
	var_15_bool = 0; var_16_cvector = CVector(0,0,0); var_17_cvector = CVector(0,0,0); var_18_object = Obj(); var_19_bool = 0; var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_object = Obj(); // 0x6b PushV
	GetLocator(var_12_string, var_19_bool, var_20_cvector, var_21_cvector); // 0x6c ObjFunc
	var_23_bool = var_19_bool == 0; // 0x6e Not
	if(var_23_bool == 0) goto Label_120; // 0x6f JumpB
	var_24_string = "Locator "; // 0x70 PushS
	var_25_int = var_24_string + var_12_string; // 0x71 Add
	var_26_string = " doesn't exist"; // 0x72 PushS
	var_27_int = var_25_int + var_26_string; // 0x73 Add
	Trace(var_27_int); // 0x74 Func
	var_22_object = 0; // 0x76 SetNull
	goto Label_122; // 0x77 Jump
	
Label_122:
	var_10_object = var_22_object; // 0x7a Mov
	return 8; // 0x7b Return
	
Label_120:
	AddStationaryActor(var_22_object, var_20_cvector, var_21_cvector, var_13_string, var_14_string); // 0x78 ObjFunc
}


func_77(var_28_int)
{
	var_29_float = 0; var_30_float = 0; // 0x4d PushV
	GetGameTime(var_30_float); // 0x4e Func
	var_31_int = 24; // 0x50 PushI
	var_32_float = var_28_int * var_31_int; // 0x51 Mult
	var_33_bool = var_30_float >= var_32_float; // 0x52 GE
	if(var_33_bool == 0) goto Label_88; // 0x53 JumpB
	func_66(); // 0x55 NEW_2
	goto Label_95; // 0x57 Jump
	
Label_95:
	return 2; // 0x5f Return
	
Label_88:
	var_38_int = 0; // 0x58 PushI
	var_39_int = 24; // 0x59 PushI
	var_40_float = var_28_int * var_39_int; // 0x5a Mult
	SetTimeEvent(var_38_int, var_40_float); // 0x5b Func
	Hold(); // 0x5d Func
}


func_50()
{
	var_8_string = "k7q02"; // 0x32 PushS
	var_9_int = -1; // 0x33 PushI
	SetVariable(var_8_string, var_9_int); // 0x34 Func
	func_66(); // 0x37 NEW_2
	return 0; // 0x39 Return
}


func_58()
{
	var_6_string = "k7q02"; // 0x3a PushS
	var_7_int = 1000; // 0x3b PushI
	SetVariable(var_6_string, var_7_int); // 0x3c Func
	func_66(); // 0x3f NEW_2
	return 0; // 0x41 Return
}


func_125(var_5_bool, var_6_string)
{
	var_7_object = Obj(); var_8_object = Obj(); // 0x7d PushV
	FindActor(var_8_object, var_6_string); // 0x7e Func
	var_9_bool = var_8_object == 0; // 0x80 Not
	if(var_9_bool == 0) goto Label_132; // 0x81 JumpB
	var_5_bool = 0; // 0x82 MovB
	return 2; // 0x83 Return
	
Label_132:
	RemoveActor(var_8_object); // 0x84 Func
	var_5_bool = 1; // 0x86 MovB
	return 2; // 0x87 Return
}


