task_0_event_26(var_0_object, var_1_string)
{
	var_2_object = Obj(); var_3_object = Obj(); // 0x9 PushV
	Trace(var_1_string); // 0xa Func
	var_4_string = "birdmask"; // 0xc PushS
	var_5_bool = var_1_string == var_4_string; // 0xd Eq
	if(var_5_bool == 0) goto Label_28; // 0xe JumpB
	var_6_string = "r4_house_2_02"; // 0xf PushS
	GetSceneByName(var_3_object, var_6_string); // 0x10 Func
	var_7_object = Obj(); var_8_object = Obj(); var_9_string = ""; var_10_string = ""; var_11_string = ""; // 0x12 PushV
	var_8_object = var_3_object; // 0x13 Mov
	var_9_string = "pt_d2q03_birdmask"; // 0x14 MovS
	var_10_string = "pers_birdmask"; // 0x15 MovS
	var_11_string = "d2q03_birdmask.xml"; // 0x16 MovS
	func_116(var_7_object, var_8_object, var_9_string, var_10_string, var_11_string); // 0x17 Call
	var_0_object = var_7_object; // 0x18 TMov
	var_3_object = 0; // 0x1a SetNull
	goto Label_34; // 0x1b Jump
	
Label_34:
	return 2; // 0x22 Return
	
Label_28:
	var_25_string = "completed"; // 0x1c PushS
	var_26_bool = var_1_string == var_25_string; // 0x1d Eq
	if(var_26_bool == 0) goto Label_34; // 0x1e JumpB
	func_54(); // 0x20 Call
}


task_0_event_9(var_0_object, var_1_int, var_2_float)
{
	func_35(); // 0x6b Call
	return 0; // 0x6d Return
}


main(var_0_object)
{
	var_1_string = "d2q03"; // 0x0 PushS
	var_2_int = 1; // 0x1 PushI
	SetVariable(var_1_string, var_2_int); // 0x2 Func
	var_3_int = 0; // 0x4 PushV
	var_3_int = 2; // 0x5 MovI
	func_86(var_3_int); // 0x6 Call
	return 0; // 0x8 Return
}


func_35()
{
	var_3_int = 0; var_4_int = 0; // 0x23 PushV
	var_5_string = "d2q03"; // 0x24 PushS
	GetVariable(var_5_string, var_4_int); // 0x25 Func
	var_6_int = 1000; // 0x27 PushI
	var_7_bool = var_4_int != var_6_int; // 0x28 Neq
	if(var_7_bool == 0) goto Label_45; // 0x29 JumpB
	func_46(); // 0x2b Call
	
Label_45:
	return 2; // 0x2d Return
}


func_164()
{
	var_9_bool = 0; var_10_int = 0; // 0xa4 PushV
	var_10_int = 37; // 0xa5 MovI
	func_147(var_9_bool, var_10_int); // 0xa6 Call
	return 0; // 0xa8 Return
}


func_134(var_15_object)
{
	var_16_object = Obj(); var_17_object = Obj(); // 0x86 PushV
	GetDiaryRoot(var_17_object); // 0x87 Func
	var_18_bool = var_17_object == 0; // 0x89 Not
	if(var_18_bool == 0) goto Label_144; // 0x8a JumpB
	var_19_string = "Can't retrieve diary root"; // 0x8b PushS
	Trace(var_19_string); // 0x8c Func
	var_15_object = 0; // 0x8e MovB
	return 2; // 0x8f Return
	
Label_144:
	var_15_object = var_17_object; // 0x90 Mov
	return 2; // 0x91 Return
}


func_71(var_0_object)
{
	EventDisable(26); // 0x47 EventDisable
	func_169(); // 0x49 Call
	var_21_object = var_0_object; // 0x4b PushT
	if(var_21_object == 0) goto Label_80; // 0x4c JumpB
	var_22_string = "cleanup"; // 0x4d PushS
	Trigger(var_0_object, var_22_string); // 0x4e Func
	
Label_80:
	var_23_object = Obj(); // 0x50 PushV
	func_110(var_23_object); // 0x51 Call
	RemoveActor(var_23_object); // 0x53 Func
	return 0; // 0x55 Return
}


func_169()
{
	func_164(); // 0xaa Call
	return 0; // 0xac Return
}


func_46()
{
	var_8_string = "d2q03"; // 0x2e PushS
	var_9_int = -1; // 0x2f PushI
	SetVariable(var_8_string, var_9_int); // 0x30 Func
	func_71(var_4_int); // 0x33 Call
	return 0; // 0x35 Return
}


func_110(var_23_object)
{
	var_24_object = Obj(); var_25_object = Obj(); // 0x6e PushV
	self(var_25_object); // 0x6f Func
	var_23_object = var_25_object; // 0x71 Mov
	return 2; // 0x72 Return
}


func_147(var_9_bool, var_10_int)
{
	var_11_object = Obj(); var_12_object = Obj(); var_13_object = Obj(); var_14_object = Obj(); // 0x93 PushV
	var_15_object = Obj(); // 0x94 PushV
	func_134(var_15_object); // 0x95 Call
	var_13_object = var_15_object; // 0x96 Mov
	Find(var_10_int, var_14_object); // 0x98 ObjFunc
	var_20_bool = var_14_object == 0; // 0x9a Not
	if(var_20_bool == 0) goto Label_158; // 0x9b JumpB
	var_9_bool = 0; // 0x9c MovB
	return 4; // 0x9d Return
	
Label_158:
	Remove(); // 0x9e ObjFunc
	var_9_bool = 1; // 0xa0 MovB
	return 4; // 0xa1 Return
}


func_116(var_7_object, var_8_object, var_9_string, var_10_string, var_11_string)
{
	var_12_bool = 0; var_13_cvector = CVector(0,0,0); var_14_cvector = CVector(0,0,0); var_15_object = Obj(); var_16_bool = 0; var_17_cvector = CVector(0,0,0); var_18_cvector = CVector(0,0,0); var_19_object = Obj(); // 0x74 PushV
	GetLocator(var_9_string, var_16_bool, var_17_cvector, var_18_cvector); // 0x75 ObjFunc
	var_20_bool = var_16_bool == 0; // 0x77 Not
	if(var_20_bool == 0) goto Label_129; // 0x78 JumpB
	var_21_string = "Locator "; // 0x79 PushS
	var_22_int = var_21_string + var_9_string; // 0x7a Add
	var_23_string = " doesn't exist"; // 0x7b PushS
	var_24_int = var_22_int + var_23_string; // 0x7c Add
	Trace(var_24_int); // 0x7d Func
	var_19_object = 0; // 0x7f SetNull
	goto Label_131; // 0x80 Jump
	
Label_131:
	var_7_object = var_19_object; // 0x83 Mov
	return 8; // 0x84 Return
	
Label_129:
	AddActor(var_19_object, var_10_string, var_8_object, var_17_cvector, var_18_cvector, var_11_string); // 0x81 Func
}


func_54()
{
	var_27_object = Obj(); var_28_object = Obj(); // 0x36 PushV
	var_29_string = "icot_lara_supply"; // 0x37 PushS
	FindActor(var_28_object, var_29_string); // 0x38 Func
	var_30_string = "enabled"; // 0x3a PushS
	var_31_bool = 1; // 0x3b PushB
	SetProperty(var_30_string, var_31_bool); // 0x3c ObjFunc
	var_32_string = "d2q03"; // 0x3e PushS
	var_33_int = 1000; // 0x3f PushI
	SetVariable(var_32_string, var_33_int); // 0x40 Func
	func_71(var_28_object); // 0x43 Call
	return 2; // 0x45 Return
}


func_86(var_3_int)
{
	var_4_float = 0; var_5_float = 0; // 0x56 PushV
	GetGameTime(var_5_float); // 0x57 Func
	var_6_int = 24; // 0x59 PushI
	var_7_float = var_3_int * var_6_int; // 0x5a Mult
	var_8_bool = var_5_float >= var_7_float; // 0x5b GE
	if(var_8_bool == 0) goto Label_97; // 0x5c JumpB
	func_71(var_5_float); // 0x5e Call
	goto Label_104; // 0x60 Jump
	
Label_104:
	return 2; // 0x68 Return
	
Label_97:
	var_26_int = 0; // 0x61 PushI
	var_27_int = 24; // 0x62 PushI
	var_28_float = var_3_int * var_27_int; // 0x63 Mult
	SetTimeEvent(var_26_int, var_28_float); // 0x64 Func
	Hold(); // 0x66 Func
}


