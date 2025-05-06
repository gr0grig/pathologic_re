task_0_event_26(var_0_object, var_1_object, var_2_object, var_3_string)
{
	var_4_object = Obj(); var_5_object = Obj(); // 0x19 PushV
	Trace(var_3_string); // 0x1a Func
	var_6_string = "init_storojka"; // 0x1c PushS
	var_7_bool = var_3_string == var_6_string; // 0x1d Eq
	if(var_7_bool == 0) goto Label_52; // 0x1e JumpB
	var_8_string = "storojka"; // 0x1f PushS
	GetSceneByName(var_5_object, var_8_string); // 0x20 Func
	var_9_object = Obj(); var_10_object = Obj(); var_11_string = ""; var_12_string = ""; var_13_string = ""; // 0x22 PushV
	var_10_object = var_5_object; // 0x23 Mov
	var_11_string = "pt_d1q02_salesman"; // 0x24 MovS
	var_12_string = "pers_salesman"; // 0x25 MovS
	var_13_string = "d1q02_salesman.xml"; // 0x26 MovS
	func_158(var_9_object, var_10_object, var_11_string, var_12_string, var_13_string); // 0x27 NEW_2
	var_1_object = var_9_object; // 0x28 TMov
	var_27_object = Obj(); var_28_object = Obj(); var_29_string = ""; var_30_string = ""; var_31_string = ""; // 0x2a PushV
	var_28_object = var_5_object; // 0x2b Mov
	var_29_string = "pt_d1q02_gorbun"; // 0x2c MovS
	var_30_string = "pers_gorbun"; // 0x2d MovS
	var_31_string = "d1q02_gorbun.xml"; // 0x2e MovS
	func_158(var_27_object, var_28_object, var_29_string, var_30_string, var_31_string); // 0x2f NEW_2
	var_2_object = var_27_object; // 0x30 TMov
	var_5_object = 0; // 0x32 SetNull
	goto Label_65; // 0x33 Jump
	
Label_65:
	return 2; // 0x41 Return
	
Label_52:
	var_32_string = "completed"; // 0x34 PushS
	var_33_bool = var_3_string == var_32_string; // 0x35 Eq
	if(var_33_bool == 0) goto Label_59; // 0x36 JumpB
	func_88(); // 0x38 NEW_2
	goto Label_65; // 0x3a Jump
	
Label_59:
	var_38_string = "fail"; // 0x3b PushS
	var_39_bool = var_3_string == var_38_string; // 0x3c Eq
	if(var_39_bool == 0) goto Label_65; // 0x3d JumpB
	func_80(); // 0x3f NEW_2
}


task_0_event_9(var_0_object, var_1_object, var_2_object, var_3_int, var_4_float)
{
	func_66(); // 0x95 NEW_2
	return 0; // 0x97 Return
}


main(var_0_object, var_1_object, var_2_object)
{
	var_3_object = Obj(); var_4_object = Obj(); // 0x0 PushV
	var_5_string = "d1q02"; // 0x1 PushS
	var_6_int = 1; // 0x2 PushI
	SetVariable(var_5_string, var_6_int); // 0x3 Func
	var_7_string = "cot_anna"; // 0x5 PushS
	GetSceneByName(var_4_object, var_7_string); // 0x6 Func
	var_8_string = "cot_anna_corpse"; // 0x8 PushS
	var_9_string = "actor_disp.bin"; // 0x9 PushS
	var_10_cvector = CVector(0.0, 0.0, 0.0); // 0xa PushVec
	AddScriptedActor(var_0_object, var_8_string, var_9_string, var_4_object, var_10_cvector); // 0xb Func
	var_11_string = "storojka"; // 0xd PushS
	GetSceneByName(var_4_object, var_11_string); // 0xe Func
	var_12_string = "nolaska"; // 0x10 PushS
	Trigger(var_4_object, var_12_string); // 0x11 Func
	var_13_int = 0; // 0x13 PushV
	var_13_int = 1; // 0x14 MovI
	func_128(var_13_int); // 0x15 NEW_2
	return 2; // 0x17 Return
}


func_128(var_13_int)
{
	var_14_float = 0; var_15_float = 0; // 0x80 PushV
	GetGameTime(var_15_float); // 0x81 Func
	var_16_int = 24; // 0x83 PushI
	var_17_float = var_13_int * var_16_int; // 0x84 Mult
	var_18_bool = var_15_float >= var_17_float; // 0x85 GE
	if(var_18_bool == 0) goto Label_139; // 0x86 JumpB
	func_103(); // 0x88 NEW_2
	goto Label_146; // 0x8a Jump
	
Label_146:
	return 2; // 0x92 Return
	
Label_139:
	var_30_int = 0; // 0x8b PushI
	var_31_int = 24; // 0x8c PushI
	var_32_float = var_13_int * var_31_int; // 0x8d Mult
	SetTimeEvent(var_30_int, var_32_float); // 0x8e Func
	Hold(); // 0x90 Func
}


func_96(var_0_object)
{
	EventDisable(26); // 0x60 EventDisable
	var_12_object = var_0_object; // 0x61 PushT
	if(var_12_object == 0) goto Label_102; // 0x62 JumpB
	var_13_string = "cleanup"; // 0x63 PushS
	Trigger(var_0_object, var_13_string); // 0x64 Func
	
Label_102:
	return 0; // 0x66 Return
}


func_66()
{
	var_5_int = 0; var_6_int = 0; // 0x42 PushV
	var_7_string = "d1q02"; // 0x43 PushS
	GetVariable(var_7_string, var_6_int); // 0x44 Func
	var_8_int = 1000; // 0x46 PushI
	var_9_bool = var_6_int != var_8_int; // 0x47 Neq
	if(var_9_bool == 0) goto Label_76; // 0x48 JumpB
	func_80(); // 0x4a NEW_2
	
Label_76:
	func_103(); // 0x4d NEW_2
	return 2; // 0x4f Return
}


func_103()
{
	var_19_object = Obj(); var_20_object = Obj(); // 0x67 PushV
	EventDisable(26); // 0x68 EventDisable
	var_21_string = "storojka"; // 0x69 PushS
	GetSceneByName(var_20_object, var_21_string); // 0x6a Func
	var_22_string = "laska"; // 0x6c PushS
	Trigger(var_20_object, var_22_string); // 0x6d Func
	var_23_object = var_2_object; // 0x6f PushT
	if(var_23_object == 0) goto Label_116; // 0x70 JumpB
	var_24_string = "cleanup"; // 0x71 PushS
	Trigger(var_20_object, var_24_string); // 0x72 Func
	
Label_116:
	var_25_object = var_1_object; // 0x74 PushT
	if(var_25_object == 0) goto Label_121; // 0x75 JumpB
	var_26_string = "cleanup"; // 0x76 PushS
	Trigger(var_26_string, var_26_string); // 0x77 Func
	
Label_121:
	var_27_object = Obj(); // 0x79 PushV
	func_152(var_27_object); // 0x7a NEW_2
	RemoveActor(var_27_object); // 0x7c Func
	return 2; // 0x7e Return
}


func_80()
{
	var_10_string = "d1q02"; // 0x50 PushS
	var_11_int = -1; // 0x51 PushI
	SetVariable(var_10_string, var_11_int); // 0x52 Func
	func_96(var_6_int); // 0x55 NEW_2
	return 0; // 0x57 Return
}


func_88()
{
	var_34_string = "d1q02"; // 0x58 PushS
	var_35_int = 1000; // 0x59 PushI
	SetVariable(var_34_string, var_35_int); // 0x5a Func
	func_96(var_5_object); // 0x5d NEW_2
	return 0; // 0x5f Return
}


func_152(var_27_object)
{
	var_28_object = Obj(); var_29_object = Obj(); // 0x98 PushV
	self(var_29_object); // 0x99 Func
	var_27_object = var_29_object; // 0x9b Mov
	return 2; // 0x9c Return
}


func_158(var_9_object, var_10_object, var_11_string, var_12_string, var_13_string)
{
	var_14_bool = 0; var_15_cvector = CVector(0,0,0); var_16_cvector = CVector(0,0,0); var_17_object = Obj(); var_18_bool = 0; var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); var_21_object = Obj(); // 0x9e PushV
	GetLocator(var_11_string, var_18_bool, var_19_cvector, var_20_cvector); // 0x9f ObjFunc
	var_22_bool = var_18_bool == 0; // 0xa1 Not
	if(var_22_bool == 0) goto Label_171; // 0xa2 JumpB
	var_23_string = "Locator "; // 0xa3 PushS
	var_24_int = var_23_string + var_11_string; // 0xa4 Add
	var_25_string = " doesn't exist"; // 0xa5 PushS
	var_26_int = var_24_int + var_25_string; // 0xa6 Add
	Trace(var_26_int); // 0xa7 Func
	var_21_object = 0; // 0xa9 SetNull
	goto Label_173; // 0xaa Jump
	
Label_173:
	var_9_object = var_21_object; // 0xad Mov
	return 8; // 0xae Return
	
Label_171:
	AddActor(var_21_object, var_12_string, var_10_object, var_19_cvector, var_20_cvector, var_13_string); // 0xab Func
}


