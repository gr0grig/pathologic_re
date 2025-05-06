task_0_event_26(var_0_object, var_1_string)
{
	var_2_object = Obj(); var_3_object = Obj(); // 0x9 PushV
	Trace(var_1_string); // 0xa Func
	var_4_string = "birdmask"; // 0xc PushS
	var_5_bool = var_1_string == var_4_string; // 0xd Eq
	if(var_5_bool == 0) goto Label_38; // 0xe JumpB
	var_6_string = "r4_house_2_02"; // 0xf PushS
	GetSceneByName(var_3_object, var_6_string); // 0x10 Func
	var_7_string = ""; var_8_bool = 0; // 0x12 PushV
	var_7_string = "r4_house_2_02@door1"; // 0x13 MovS
	var_8_bool = 0; // 0x14 MovB
	func_151(var_7_string, var_8_bool); // 0x15 NEW_2
	var_17_string = ""; var_18_bool = 0; // 0x17 PushV
	var_17_string = "r4_house_2_02@door2"; // 0x18 MovS
	var_18_bool = 0; // 0x19 MovB
	func_151(var_17_string, var_18_bool); // 0x1a NEW_2
	var_19_object = Obj(); var_20_object = Obj(); var_21_string = ""; var_22_string = ""; var_23_string = ""; // 0x1c PushV
	var_20_object = var_3_object; // 0x1d Mov
	var_21_string = "pt_d2q03_birdmask"; // 0x1e MovS
	var_22_string = "pers_birdmask"; // 0x1f MovS
	var_23_string = "d2q03_birdmask.xml"; // 0x20 MovS
	func_133(var_19_object, var_20_object, var_21_string, var_22_string, var_23_string); // 0x21 NEW_2
	var_0_object = var_19_object; // 0x22 TMov
	var_3_object = 0; // 0x24 SetNull
	goto Label_44; // 0x25 Jump
	
Label_44:
	return 2; // 0x2c Return
	
Label_38:
	var_37_string = "completed"; // 0x26 PushS
	var_38_bool = var_1_string == var_37_string; // 0x27 Eq
	if(var_38_bool == 0) goto Label_44; // 0x28 JumpB
	func_71(); // 0x2a NEW_2
}


task_0_event_9(var_0_object, var_1_int, var_2_float)
{
	func_45(); // 0x7c NEW_2
	return 0; // 0x7e Return
}


main(var_0_object)
{
	var_1_string = "d2q03"; // 0x0 PushS
	var_2_int = 1; // 0x1 PushI
	SetVariable(var_1_string, var_2_int); // 0x2 Func
	var_3_int = 0; // 0x4 PushV
	var_3_int = 2; // 0x5 MovI
	func_103(var_3_int); // 0x6 NEW_2
	return 0; // 0x8 Return
}


func_133(var_19_object, var_20_object, var_21_string, var_22_string, var_23_string)
{
	var_24_bool = 0; var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_object = Obj(); var_28_bool = 0; var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_object = Obj(); // 0x85 PushV
	GetLocator(var_21_string, var_28_bool, var_29_cvector, var_30_cvector); // 0x86 ObjFunc
	var_32_bool = var_28_bool == 0; // 0x88 Not
	if(var_32_bool == 0) goto Label_146; // 0x89 JumpB
	var_33_string = "Locator "; // 0x8a PushS
	var_34_int = var_33_string + var_21_string; // 0x8b Add
	var_35_string = " doesn't exist"; // 0x8c PushS
	var_36_int = var_34_int + var_35_string; // 0x8d Add
	Trace(var_36_int); // 0x8e Func
	var_31_object = 0; // 0x90 SetNull
	goto Label_148; // 0x91 Jump
	
Label_148:
	var_19_object = var_31_object; // 0x94 Mov
	return 8; // 0x95 Return
	
Label_146:
	AddActor(var_31_object, var_22_string, var_20_object, var_29_cvector, var_30_cvector, var_23_string); // 0x92 Func
}


func_71()
{
	var_39_object = Obj(); var_40_object = Obj(); // 0x47 PushV
	var_41_string = "icot_lara_supply"; // 0x48 PushS
	FindActor(var_40_object, var_41_string); // 0x49 Func
	var_42_string = "enabled"; // 0x4b PushS
	var_43_bool = 1; // 0x4c PushB
	SetProperty(var_42_string, var_43_bool); // 0x4d ObjFunc
	var_44_string = "d2q03"; // 0x4f PushS
	var_45_int = 1000; // 0x50 PushI
	SetVariable(var_44_string, var_45_int); // 0x51 Func
	func_88(var_40_object); // 0x54 NEW_2
	return 2; // 0x56 Return
}


func_168()
{
	var_9_bool = 0; var_10_int = 0; // 0xa8 PushV
	var_10_int = 37; // 0xa9 MovI
	func_186(var_9_bool, var_10_int); // 0xaa NEW_2
	return 0; // 0xac Return
}


func_103(var_3_int)
{
	var_4_float = 0; var_5_float = 0; // 0x67 PushV
	GetGameTime(var_5_float); // 0x68 Func
	var_6_int = 24; // 0x6a PushI
	var_7_float = var_3_int * var_6_int; // 0x6b Mult
	var_8_bool = var_5_float >= var_7_float; // 0x6c GE
	if(var_8_bool == 0) goto Label_114; // 0x6d JumpB
	func_88(var_5_float); // 0x6f NEW_2
	goto Label_121; // 0x71 Jump
	
Label_121:
	return 2; // 0x79 Return
	
Label_114:
	var_26_int = 0; // 0x72 PushI
	var_27_int = 24; // 0x73 PushI
	var_28_float = var_3_int * var_27_int; // 0x74 Mult
	SetTimeEvent(var_26_int, var_28_float); // 0x75 Func
	Hold(); // 0x77 Func
}


func_203()
{
	func_168(); // 0xcc NEW_2
	return 0; // 0xce Return
}


func_45()
{
	var_3_int = 0; var_4_int = 0; // 0x2d PushV
	var_5_string = "d2q03"; // 0x2e PushS
	GetVariable(var_5_string, var_4_int); // 0x2f Func
	var_6_int = 1000; // 0x31 PushI
	var_7_bool = var_4_int != var_6_int; // 0x32 Neq
	if(var_7_bool == 0) goto Label_62; // 0x33 JumpB
	var_8_int = 0; // 0x34 PushI
	var_9_bool = var_4_int != var_8_int; // 0x35 Neq
	if(var_9_bool == 0) goto Label_59; // 0x36 JumpB
	var_10_string = "d2q03RepDown"; // 0x37 PushS
	var_11_int = 1; // 0x38 PushI
	SetVariable(var_10_string, var_11_int); // 0x39 Func
	
Label_59:
	func_63(); // 0x3c NEW_2
	
Label_62:
	return 2; // 0x3e Return
}


func_173(var_15_object)
{
	var_16_object = Obj(); var_17_object = Obj(); // 0xad PushV
	GetDiaryRoot(var_17_object); // 0xae Func
	var_18_bool = var_17_object == 0; // 0xb0 Not
	if(var_18_bool == 0) goto Label_183; // 0xb1 JumpB
	var_19_string = "Can't retrieve diary root"; // 0xb2 PushS
	Trace(var_19_string); // 0xb3 Func
	var_15_object = 0; // 0xb5 MovB
	return 2; // 0xb6 Return
	
Label_183:
	var_15_object = var_17_object; // 0xb7 Mov
	return 2; // 0xb8 Return
}


func_151(var_7_string, var_8_bool)
{
	var_9_object = Obj(); var_10_object = Obj(); // 0x97 PushV
	FindActor(var_10_object, var_7_string); // 0x98 Func
	var_11_bool = var_10_object == 0; // 0x9a Not
	if(var_11_bool == 0) goto Label_163; // 0x9b JumpB
	var_12_string = "Door "; // 0x9c PushS
	var_13_int = var_12_string + var_7_string; // 0x9d Add
	var_14_string = " not found"; // 0x9e PushS
	var_15_int = var_13_int + var_14_string; // 0x9f Add
	Trace(var_15_int); // 0xa0 Func
	goto Label_166; // 0xa2 Jump
	
Label_166:
	return 2; // 0xa6 Return
	
Label_163:
	var_16_string = "locked"; // 0xa3 PushS
	SetProperty(var_16_string, var_8_bool); // 0xa4 ObjFunc
}


func_88(var_0_object)
{
	EventDisable(26); // 0x58 EventDisable
	func_203(); // 0x5a NEW_2
	var_21_object = var_0_object; // 0x5c PushT
	if(var_21_object == 0) goto Label_97; // 0x5d JumpB
	var_22_string = "cleanup"; // 0x5e PushS
	Trigger(var_0_object, var_22_string); // 0x5f Func
	
Label_97:
	var_23_object = Obj(); // 0x61 PushV
	func_127(var_23_object); // 0x62 NEW_2
	RemoveActor(var_23_object); // 0x64 Func
	return 0; // 0x66 Return
}


func_186(var_9_bool, var_10_int)
{
	var_11_object = Obj(); var_12_object = Obj(); var_13_object = Obj(); var_14_object = Obj(); // 0xba PushV
	var_15_object = Obj(); // 0xbb PushV
	func_173(var_15_object); // 0xbc NEW_2
	var_13_object = var_15_object; // 0xbd Mov
	Find(var_10_int, var_14_object); // 0xbf ObjFunc
	var_20_bool = var_14_object == 0; // 0xc1 Not
	if(var_20_bool == 0) goto Label_197; // 0xc2 JumpB
	var_9_bool = 0; // 0xc3 MovB
	return 4; // 0xc4 Return
	
Label_197:
	Remove(); // 0xc5 ObjFunc
	var_9_bool = 1; // 0xc7 MovB
	return 4; // 0xc8 Return
}


func_127(var_23_object)
{
	var_24_object = Obj(); var_25_object = Obj(); // 0x7f PushV
	self(var_25_object); // 0x80 Func
	var_23_object = var_25_object; // 0x82 Mov
	return 2; // 0x83 Return
}


func_63()
{
	var_12_string = "d2q03"; // 0x3f PushS
	var_13_int = -1; // 0x40 PushI
	SetVariable(var_12_string, var_13_int); // 0x41 Func
	func_88(var_4_int); // 0x44 NEW_2
	return 0; // 0x46 Return
}


