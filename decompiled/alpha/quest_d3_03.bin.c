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
	func_143(var_9_object, var_10_string, var_11_string, var_12_string); // 0x16 Call
	var_0_object = var_8_object; // 0x17 TMov
	var_4_object = 0; // 0x19 SetNull
	goto Label_61; // 0x1a Jump
	
Label_61:
	return 4; // 0x3d Return
	
Label_27:
	var_26_string = "boy_attacked"; // 0x1b PushS
	var_27_bool = var_1_string == var_26_string; // 0x1c Eq
	if(var_27_bool == 0) goto Label_42; // 0x1d JumpB
	var_28_string = "d3q03"; // 0x1e PushS
	GetVariable(var_28_string, var_5_int); // 0x1f Func
	var_29_bool = 0; var_30_int = 0; // 0x21 PushV
	var_30_int = var_5_int; // 0x22 Mov
	func_161(var_29_bool, var_30_int); // 0x23 Call
	if(var_29_bool == 0) goto Label_41; // 0x25 JumpB
	func_73(); // 0x27 Call
	
Label_41:
	goto Label_61; // 0x29 Jump
	
Label_42:
	var_41_string = "boy_free"; // 0x2a PushS
	var_42_bool = var_1_string == var_41_string; // 0x2b Eq
	if(var_42_bool == 0) goto Label_48; // 0x2c JumpB
	Remove(); // 0x2d TObjFunc
	goto Label_61; // 0x2f Jump
	
Label_48:
	var_43_string = "fail"; // 0x30 PushS
	var_44_bool = var_1_string == var_43_string; // 0x31 Eq
	if(var_44_bool == 0) goto Label_55; // 0x32 JumpB
	func_73(); // 0x34 Call
	goto Label_61; // 0x36 Jump
	
Label_55:
	var_45_string = "completed"; // 0x37 PushS
	var_46_bool = var_1_string == var_45_string; // 0x38 Eq
	if(var_46_bool == 0) goto Label_61; // 0x39 JumpB
	func_81(); // 0x3b Call
}


task_0_event_9(var_0_object, var_1_int, var_2_float)
{
	func_62(); // 0x86 Call
	return 0; // 0x88 Return
}


main(var_0_object)
{
	var_1_string = "d3q03"; // 0x0 PushS
	var_2_int = 1; // 0x1 PushI
	SetVariable(var_1_string, var_2_int); // 0x2 Func
	var_3_int = 0; // 0x4 PushV
	var_3_int = 3; // 0x5 MovI
	func_113(var_3_int); // 0x6 Call
	return 0; // 0x8 Return
}


func_161(var_29_bool, var_30_int)
{
	var_29_bool = 0; // 0xa2 MovB
	var_31_int = 1; // 0xa3 PushI
	var_32_bool = var_30_int >= var_31_int; // 0xa4 GE
	if(var_32_bool == 0) goto Label_170; // 0xa5 JumpB
	var_33_int = 1000; // 0xa6 PushI
	var_34_bool = var_30_int < var_33_int; // 0xa7 LT
	if(var_34_bool == 0) goto Label_170; // 0xa8 JumpB
	var_29_bool = 1; // 0xa9 MovB
	
Label_170:
	return 0; // 0xaa Return
}


func_103()
{
	var_9_object = var_0_object; // 0x67 PushT
	if(var_9_object == 0) goto Label_107; // 0x68 JumpB
	Remove(); // 0x69 TObjFunc
	
Label_107:
	var_10_object = Obj(); // 0x6b PushV
	func_137(var_10_object); // 0x6c Call
	RemoveActor(var_10_object); // 0x6e Func
	return 0; // 0x70 Return
}


func_73()
{
	var_8_string = "d3q03"; // 0x49 PushS
	var_9_int = -1; // 0x4a PushI
	SetVariable(var_8_string, var_9_int); // 0x4b Func
	func_103(); // 0x4e Call
	return 0; // 0x50 Return
}


func_137(var_10_object)
{
	var_11_object = Obj(); var_12_object = Obj(); // 0x89 PushV
	self(var_12_object); // 0x8a Func
	var_10_object = var_12_object; // 0x8c Mov
	return 2; // 0x8d Return
}


func_143(var_8_object, var_10_string, var_11_string, var_12_string)
{
	var_13_bool = 0; var_14_cvector = CVector(0,0,0); var_15_cvector = CVector(0,0,0); var_16_object = Obj(); var_17_bool = 0; var_18_cvector = CVector(0,0,0); var_19_cvector = CVector(0,0,0); var_20_object = Obj(); // 0x8f PushV
	GetLocator(var_10_string, var_17_bool, var_18_cvector, var_19_cvector); // 0x90 ObjFunc
	var_21_bool = var_17_bool == 0; // 0x92 Not
	if(var_21_bool == 0) goto Label_156; // 0x93 JumpB
	var_22_string = "Locator "; // 0x94 PushS
	var_23_int = var_22_string + var_10_string; // 0x95 Add
	var_24_string = " doesn't exist"; // 0x96 PushS
	var_25_int = var_23_int + var_24_string; // 0x97 Add
	Trace(var_25_int); // 0x98 Func
	var_20_object = 0; // 0x9a SetNull
	goto Label_158; // 0x9b Jump
	
Label_158:
	var_8_object = var_20_object; // 0x9e Mov
	return 8; // 0x9f Return
	
Label_156:
	AddStationaryActor(var_20_object, var_18_cvector, var_19_cvector, var_11_string, var_12_string); // 0x9c ObjFunc
}


func_113(var_3_int)
{
	var_4_float = 0; var_5_float = 0; // 0x71 PushV
	GetGameTime(var_5_float); // 0x72 Func
	var_6_int = 24; // 0x74 PushI
	var_7_float = var_3_int * var_6_int; // 0x75 Mult
	var_8_bool = var_5_float >= var_7_float; // 0x76 GE
	if(var_8_bool == 0) goto Label_124; // 0x77 JumpB
	func_103(); // 0x79 Call
	goto Label_131; // 0x7b Jump
	
Label_131:
	return 2; // 0x83 Return
	
Label_124:
	var_13_int = 0; // 0x7c PushI
	var_14_int = 24; // 0x7d PushI
	var_15_float = var_3_int * var_14_int; // 0x7e Mult
	SetTimeEvent(var_13_int, var_15_float); // 0x7f Func
	Hold(); // 0x81 Func
}


func_81()
{
	var_47_int = 0; var_48_int = 0; // 0x51 PushV
	var_49_string = "d3q03"; // 0x52 PushS
	GetVariable(var_49_string, var_48_int); // 0x53 Func
	var_50_bool = 0; // 0x55 PushV
	var_50_bool = 0; // 0x56 MovB
	var_51_int = 1000; // 0x57 PushI
	var_52_bool = var_48_int != var_51_int; // 0x58 Neq
	if(var_52_bool == 0) goto Label_94; // 0x59 JumpB
	var_53_int = -1; // 0x5a PushI
	var_54_bool = var_48_int != var_53_int; // 0x5b Neq
	if(var_54_bool == 0) goto Label_94; // 0x5c JumpB
	var_50_bool = 1; // 0x5d MovB
	
Label_94:
	if(var_50_bool == 0) goto Label_102; // 0x5e JumpB
	var_55_string = "d3q03"; // 0x5f PushS
	var_56_int = 1000; // 0x60 PushI
	SetVariable(var_55_string, var_56_int); // 0x61 Func
	func_103(); // 0x64 Call
	
Label_102:
	return 2; // 0x66 Return
}


func_62()
{
	var_3_int = 0; var_4_int = 0; // 0x3e PushV
	var_5_string = "d3q03"; // 0x3f PushS
	GetVariable(var_5_string, var_4_int); // 0x40 Func
	var_6_int = 1000; // 0x42 PushI
	var_7_bool = var_4_int != var_6_int; // 0x43 Neq
	if(var_7_bool == 0) goto Label_72; // 0x44 JumpB
	func_73(); // 0x46 Call
	
Label_72:
	return 2; // 0x48 Return
}


