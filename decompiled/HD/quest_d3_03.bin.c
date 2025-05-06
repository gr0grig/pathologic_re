task_0_event_26(var_0_object, var_1_string)
{
	var_2_object = Obj(); var_3_int = 0; var_4_object = Obj(); var_5_int = 0; // 0x9 PushV
	Trace(var_1_string); // 0xa Func
	var_6_string = "boy"; // 0xc PushS
	var_7_bool = var_1_string == var_6_string; // 0xd Eq
	if(var_7_bool == 0) goto Label_27; // 0xe JumpB
	GetMainOutdoorScene(var_4_object); // 0xf Func
	var_8_object = Obj(); var_9_object = Obj(); var_10_string = ""; var_11_string = ""; var_12_string = ""; // 0x11 PushV
	var_9_object = var_4_object; // 0x12 Mov
	var_10_string = "pt_d3q03_boy"; // 0x13 MovS
	var_11_string = "pers_littleboy"; // 0x14 MovS
	var_12_string = "d3q03_boy.xml"; // 0x15 MovS
	func_145(var_9_object, var_10_string, var_11_string, var_12_string); // 0x16 NEW_2
	var_0_object = var_8_object; // 0x17 TMov
	var_4_object = 0; // 0x19 SetNull
	goto Label_63; // 0x1a Jump
	
Label_63:
	return 4; // 0x3f Return
	
Label_27:
	var_26_string = "boy_attacked"; // 0x1b PushS
	var_27_bool = var_1_string == var_26_string; // 0x1c Eq
	if(var_27_bool == 0) goto Label_42; // 0x1d JumpB
	var_28_string = "d3q03"; // 0x1e PushS
	GetVariable(var_28_string, var_5_int); // 0x1f Func
	var_29_bool = 0; var_30_int = 0; // 0x21 PushV
	var_30_int = var_5_int; // 0x22 Mov
	func_163(var_29_bool, var_30_int); // 0x23 NEW_2
	if(var_29_bool == 0) goto Label_41; // 0x25 JumpB
	func_75(); // 0x27 NEW_2
	
Label_41:
	goto Label_63; // 0x29 Jump
	
Label_42:
	var_41_string = "boy_free"; // 0x2a PushS
	var_42_bool = var_1_string == var_41_string; // 0x2b Eq
	if(var_42_bool == 0) goto Label_50; // 0x2c JumpB
	var_43_object = var_0_object; // 0x2d PushT
	if(var_43_object == 0) goto Label_49; // 0x2e JumpB
	Remove(); // 0x2f TObjFunc
	
Label_49:
	goto Label_63; // 0x31 Jump
	
Label_50:
	var_44_string = "fail"; // 0x32 PushS
	var_45_bool = var_1_string == var_44_string; // 0x33 Eq
	if(var_45_bool == 0) goto Label_57; // 0x34 JumpB
	func_75(); // 0x36 NEW_2
	goto Label_63; // 0x38 Jump
	
Label_57:
	var_46_string = "completed"; // 0x39 PushS
	var_47_bool = var_1_string == var_46_string; // 0x3a Eq
	if(var_47_bool == 0) goto Label_63; // 0x3b JumpB
	func_83(); // 0x3d NEW_2
}


task_0_event_9(var_0_object, var_1_int, var_2_float)
{
	func_64(); // 0x88 NEW_2
	return 0; // 0x8a Return
}


main(var_0_object)
{
	var_1_string = "d3q03"; // 0x0 PushS
	var_2_int = 1; // 0x1 PushI
	SetVariable(var_1_string, var_2_int); // 0x2 Func
	var_3_int = 0; // 0x4 PushV
	var_3_int = 3; // 0x5 MovI
	func_115(var_3_int); // 0x6 NEW_2
	return 0; // 0x8 Return
}


func_64()
{
	var_3_int = 0; var_4_int = 0; // 0x40 PushV
	var_5_string = "d3q03"; // 0x41 PushS
	GetVariable(var_5_string, var_4_int); // 0x42 Func
	var_6_int = 1000; // 0x44 PushI
	var_7_bool = var_4_int != var_6_int; // 0x45 Neq
	if(var_7_bool == 0) goto Label_74; // 0x46 JumpB
	func_75(); // 0x48 NEW_2
	
Label_74:
	return 2; // 0x4a Return
}


func_163(var_29_bool, var_30_int)
{
	var_29_bool = 0; // 0xa4 MovB
	var_31_int = 1; // 0xa5 PushI
	var_32_bool = var_30_int >= var_31_int; // 0xa6 GE
	if(var_32_bool == 0) goto Label_172; // 0xa7 JumpB
	var_33_int = 1000; // 0xa8 PushI
	var_34_bool = var_30_int < var_33_int; // 0xa9 LT
	if(var_34_bool == 0) goto Label_172; // 0xaa JumpB
	var_29_bool = 1; // 0xab MovB
	
Label_172:
	return 0; // 0xac Return
}


func_105()
{
	var_9_object = var_0_object; // 0x69 PushT
	if(var_9_object == 0) goto Label_109; // 0x6a JumpB
	Remove(); // 0x6b TObjFunc
	
Label_109:
	var_10_object = Obj(); // 0x6d PushV
	func_139(var_10_object); // 0x6e NEW_2
	RemoveActor(var_10_object); // 0x70 Func
	return 0; // 0x72 Return
}


func_75()
{
	var_8_string = "d3q03"; // 0x4b PushS
	var_9_int = -1; // 0x4c PushI
	SetVariable(var_8_string, var_9_int); // 0x4d Func
	func_105(); // 0x50 NEW_2
	return 0; // 0x52 Return
}


func_139(var_10_object)
{
	var_11_object = Obj(); var_12_object = Obj(); // 0x8b PushV
	self(var_12_object); // 0x8c Func
	var_10_object = var_12_object; // 0x8e Mov
	return 2; // 0x8f Return
}


func_145(var_8_object, var_10_string, var_11_string, var_12_string)
{
	var_13_bool = 0; var_14_cvector = CVector(0,0,0); var_15_cvector = CVector(0,0,0); var_16_object = Obj(); var_17_bool = 0; var_18_cvector = CVector(0,0,0); var_19_cvector = CVector(0,0,0); var_20_object = Obj(); // 0x91 PushV
	GetLocator(var_10_string, var_17_bool, var_18_cvector, var_19_cvector); // 0x92 ObjFunc
	var_21_bool = var_17_bool == 0; // 0x94 Not
	if(var_21_bool == 0) goto Label_158; // 0x95 JumpB
	var_22_string = "Locator "; // 0x96 PushS
	var_23_int = var_22_string + var_10_string; // 0x97 Add
	var_24_string = " doesn't exist"; // 0x98 PushS
	var_25_int = var_23_int + var_24_string; // 0x99 Add
	Trace(var_25_int); // 0x9a Func
	var_20_object = 0; // 0x9c SetNull
	goto Label_160; // 0x9d Jump
	
Label_160:
	var_8_object = var_20_object; // 0xa0 Mov
	return 8; // 0xa1 Return
	
Label_158:
	AddStationaryActor(var_20_object, var_18_cvector, var_19_cvector, var_11_string, var_12_string); // 0x9e ObjFunc
}


func_83()
{
	var_48_int = 0; var_49_int = 0; // 0x53 PushV
	var_50_string = "d3q03"; // 0x54 PushS
	GetVariable(var_50_string, var_49_int); // 0x55 Func
	var_51_bool = 0; // 0x57 PushV
	var_51_bool = 0; // 0x58 MovB
	var_52_int = 1000; // 0x59 PushI
	var_53_bool = var_49_int != var_52_int; // 0x5a Neq
	if(var_53_bool == 0) goto Label_96; // 0x5b JumpB
	var_54_int = -1; // 0x5c PushI
	var_55_bool = var_49_int != var_54_int; // 0x5d Neq
	if(var_55_bool == 0) goto Label_96; // 0x5e JumpB
	var_51_bool = 1; // 0x5f MovB
	
Label_96:
	if(var_51_bool == 0) goto Label_104; // 0x60 JumpB
	var_56_string = "d3q03"; // 0x61 PushS
	var_57_int = 1000; // 0x62 PushI
	SetVariable(var_56_string, var_57_int); // 0x63 Func
	func_105(); // 0x66 NEW_2
	
Label_104:
	return 2; // 0x68 Return
}


func_115(var_3_int)
{
	var_4_float = 0; var_5_float = 0; // 0x73 PushV
	GetGameTime(var_5_float); // 0x74 Func
	var_6_int = 24; // 0x76 PushI
	var_7_float = var_3_int * var_6_int; // 0x77 Mult
	var_8_bool = var_5_float >= var_7_float; // 0x78 GE
	if(var_8_bool == 0) goto Label_126; // 0x79 JumpB
	func_105(); // 0x7b NEW_2
	goto Label_133; // 0x7d Jump
	
Label_133:
	return 2; // 0x85 Return
	
Label_126:
	var_13_int = 0; // 0x7e PushI
	var_14_int = 24; // 0x7f PushI
	var_15_float = var_3_int * var_14_int; // 0x80 Mult
	SetTimeEvent(var_13_int, var_15_float); // 0x81 Func
	Hold(); // 0x83 Func
}


