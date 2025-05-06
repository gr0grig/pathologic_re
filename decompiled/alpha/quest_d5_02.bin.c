task_0_event_26(var_0_object, var_1_object, var_2_string)
{
	var_3_object = Obj(); var_4_object = Obj(); var_5_object = Obj(); var_6_object = Obj(); // 0x9 PushV
	Trace(var_2_string); // 0xa Func
	var_7_string = "place_girl"; // 0xc PushS
	var_8_bool = var_2_string == var_7_string; // 0xd Eq
	if(var_8_bool == 0) goto Label_38; // 0xe JumpB
	var_9_string = "d5q01NudeInKabak"; // 0xf PushS
	var_10_int = 1; // 0x10 PushI
	SetVariable(var_9_string, var_10_int); // 0x11 Func
	var_11_bool = var_0_object == 0; // 0x13 Not
	if(var_11_bool == 0) goto Label_34; // 0x14 JumpB
	var_12_string = "shouse1_kabak"; // 0x15 PushS
	GetSceneByName(var_5_object, var_12_string); // 0x16 Func
	var_13_object = Obj(); var_14_object = Obj(); var_15_string = ""; var_16_string = ""; var_17_string = ""; // 0x18 PushV
	var_14_object = var_5_object; // 0x19 Mov
	var_15_string = "pt_d5q02_girl"; // 0x1a MovS
	var_16_string = "pers_nudegirl"; // 0x1b MovS
	var_17_string = "d5q02_girl.xml"; // 0x1c MovS
	func_185(var_13_object, var_14_object, var_15_string, var_16_string, var_17_string); // 0x1d Call
	var_0_object = var_13_object; // 0x1e TMov
	var_5_object = 0; // 0x20 SetNull
	goto Label_37; // 0x21 Jump
	
Label_37:
	goto Label_96; // 0x25 Jump
	
Label_96:
	return 4; // 0x60 Return
	
Label_34:
	var_31_string = "restore"; // 0x22 PushS
	Trigger(var_0_object, var_31_string); // 0x23 Func
	
Label_38:
	var_32_string = "remove_girl"; // 0x26 PushS
	var_33_bool = var_2_string == var_32_string; // 0x27 Eq
	if(var_33_bool == 0) goto Label_51; // 0x28 JumpB
	var_34_string = "d5q01NudeInKabak"; // 0x29 PushS
	var_35_int = 0; // 0x2a PushI
	SetVariable(var_34_string, var_35_int); // 0x2b Func
	var_36_object = var_0_object; // 0x2d PushT
	if(var_36_object == 0) goto Label_50; // 0x2e JumpB
	var_37_string = "cleanup"; // 0x2f PushS
	Trigger(var_0_object, var_37_string); // 0x30 Func
	
Label_50:
	goto Label_96; // 0x32 Jump
	
Label_51:
	var_38_string = "place_gorbun"; // 0x33 PushS
	var_39_bool = var_2_string == var_38_string; // 0x34 Eq
	if(var_39_bool == 0) goto Label_77; // 0x35 JumpB
	var_40_string = "d5q01Gorbun"; // 0x36 PushS
	var_41_int = 1; // 0x37 PushI
	SetVariable(var_40_string, var_41_int); // 0x38 Func
	var_42_bool = var_1_object == 0; // 0x3a Not
	if(var_42_bool == 0) goto Label_73; // 0x3b JumpB
	var_43_string = "lc_House6_05"; // 0x3c PushS
	GetSceneByName(var_6_object, var_43_string); // 0x3d Func
	var_44_object = Obj(); var_45_object = Obj(); var_46_string = ""; var_47_string = ""; var_48_string = ""; // 0x3f PushV
	var_45_object = var_6_object; // 0x40 Mov
	var_46_string = "pt_gorbun"; // 0x41 MovS
	var_47_string = "pers_bomber"; // 0x42 MovS
	var_48_string = "d5q02_gorbun.xml"; // 0x43 MovS
	func_185(var_44_object, var_45_object, var_46_string, var_47_string, var_48_string); // 0x44 Call
	var_1_object = var_44_object; // 0x45 TMov
	var_6_object = 0; // 0x47 SetNull
	goto Label_76; // 0x48 Jump
	
Label_76:
	goto Label_96; // 0x4c Jump
	
Label_73:
	var_49_string = "restore"; // 0x49 PushS
	Trigger(var_49_string, var_49_string); // 0x4a Func
	
Label_77:
	var_50_string = "remove_gorbun"; // 0x4d PushS
	var_51_bool = var_2_string == var_50_string; // 0x4e Eq
	if(var_51_bool == 0) goto Label_90; // 0x4f JumpB
	var_52_string = "d5q01Gorbun"; // 0x50 PushS
	var_53_int = 0; // 0x51 PushI
	SetVariable(var_52_string, var_53_int); // 0x52 Func
	var_54_object = var_1_object; // 0x54 PushT
	if(var_54_object == 0) goto Label_89; // 0x55 JumpB
	var_55_string = "cleanup"; // 0x56 PushS
	Trigger(var_55_string, var_55_string); // 0x57 Func
	
Label_89:
	goto Label_96; // 0x59 Jump
	
Label_90:
	var_56_string = "completed"; // 0x5a PushS
	var_57_bool = var_2_string == var_56_string; // 0x5b Eq
	if(var_57_bool == 0) goto Label_96; // 0x5c JumpB
	func_116(); // 0x5e Call
}


task_0_event_9(var_0_object, var_1_object, var_2_int, var_3_float)
{
	func_97(); // 0xb0 Call
	return 0; // 0xb2 Return
}


main(var_0_object, var_1_object)
{
	var_2_string = "d5q02"; // 0x0 PushS
	var_3_int = 1; // 0x1 PushI
	SetVariable(var_2_string, var_3_int); // 0x2 Func
	var_4_int = 0; // 0x4 PushV
	var_4_int = 5; // 0x5 MovI
	func_155(var_4_int); // 0x6 Call
	return 0; // 0x8 Return
}


func_97()
{
	var_4_int = 0; var_5_int = 0; // 0x61 PushV
	var_6_string = "d5q02"; // 0x62 PushS
	GetVariable(var_6_string, var_5_int); // 0x63 Func
	var_7_int = 1000; // 0x65 PushI
	var_8_bool = var_5_int != var_7_int; // 0x66 Neq
	if(var_8_bool == 0) goto Label_107; // 0x67 JumpB
	func_108(); // 0x69 Call
	
Label_107:
	return 2; // 0x6b Return
}


func_138(var_0_object)
{
	EventDisable(26); // 0x8a EventDisable
	var_10_object = var_0_object; // 0x8b PushT
	if(var_10_object == 0) goto Label_144; // 0x8c JumpB
	var_11_string = "cleanup"; // 0x8d PushS
	Trigger(var_0_object, var_11_string); // 0x8e Func
	
Label_144:
	var_12_object = var_1_object; // 0x90 PushT
	if(var_12_object == 0) goto Label_149; // 0x91 JumpB
	var_13_string = "cleanup"; // 0x92 PushS
	Trigger(var_13_string, var_13_string); // 0x93 Func
	
Label_149:
	var_14_object = Obj(); // 0x95 PushV
	func_179(var_14_object); // 0x96 Call
	RemoveActor(var_14_object); // 0x98 Func
	return 0; // 0x9a Return
}


func_108()
{
	var_9_string = "d5q02"; // 0x6c PushS
	var_10_int = -1; // 0x6d PushI
	SetVariable(var_9_string, var_10_int); // 0x6e Func
	func_138(var_5_int); // 0x71 Call
	return 0; // 0x73 Return
}


func_179(var_14_object)
{
	var_15_object = Obj(); var_16_object = Obj(); // 0xb3 PushV
	self(var_16_object); // 0xb4 Func
	var_14_object = var_16_object; // 0xb6 Mov
	return 2; // 0xb7 Return
}


func_116()
{
	var_58_int = 0; var_59_int = 0; // 0x74 PushV
	var_60_string = "d5q02"; // 0x75 PushS
	GetVariable(var_60_string, var_59_int); // 0x76 Func
	var_61_bool = 0; // 0x78 PushV
	var_61_bool = 0; // 0x79 MovB
	var_62_int = 1000; // 0x7a PushI
	var_63_bool = var_59_int != var_62_int; // 0x7b Neq
	if(var_63_bool == 0) goto Label_129; // 0x7c JumpB
	var_64_int = -1; // 0x7d PushI
	var_65_bool = var_59_int != var_64_int; // 0x7e Neq
	if(var_65_bool == 0) goto Label_129; // 0x7f JumpB
	var_61_bool = 1; // 0x80 MovB
	
Label_129:
	if(var_61_bool == 0) goto Label_137; // 0x81 JumpB
	var_66_string = "d5q02"; // 0x82 PushS
	var_67_int = 1000; // 0x83 PushI
	SetVariable(var_66_string, var_67_int); // 0x84 Func
	func_138(var_59_int); // 0x87 Call
	
Label_137:
	return 2; // 0x89 Return
}


func_185(var_13_object, var_14_object, var_15_string, var_16_string, var_17_string)
{
	var_18_bool = 0; var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); var_21_object = Obj(); var_22_bool = 0; var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_object = Obj(); // 0xb9 PushV
	GetLocator(var_15_string, var_22_bool, var_23_cvector, var_24_cvector); // 0xba ObjFunc
	var_26_bool = var_22_bool == 0; // 0xbc Not
	if(var_26_bool == 0) goto Label_198; // 0xbd JumpB
	var_27_string = "Locator "; // 0xbe PushS
	var_28_int = var_27_string + var_15_string; // 0xbf Add
	var_29_string = " doesn't exist"; // 0xc0 PushS
	var_30_int = var_28_int + var_29_string; // 0xc1 Add
	Trace(var_30_int); // 0xc2 Func
	var_25_object = 0; // 0xc4 SetNull
	goto Label_200; // 0xc5 Jump
	
Label_200:
	var_13_object = var_25_object; // 0xc8 Mov
	return 8; // 0xc9 Return
	
Label_198:
	AddActor(var_25_object, var_16_string, var_14_object, var_23_cvector, var_24_cvector, var_17_string); // 0xc6 Func
}


func_155(var_4_int)
{
	var_5_float = 0; var_6_float = 0; // 0x9b PushV
	GetGameTime(var_6_float); // 0x9c Func
	var_7_int = 24; // 0x9e PushI
	var_8_float = var_4_int * var_7_int; // 0x9f Mult
	var_9_bool = var_6_float >= var_8_float; // 0xa0 GE
	if(var_9_bool == 0) goto Label_166; // 0xa1 JumpB
	func_138(var_6_float); // 0xa3 Call
	goto Label_173; // 0xa5 Jump
	
Label_173:
	return 2; // 0xad Return
	
Label_166:
	var_17_int = 0; // 0xa6 PushI
	var_18_int = 24; // 0xa7 PushI
	var_19_float = var_4_int * var_18_int; // 0xa8 Mult
	SetTimeEvent(var_17_int, var_19_float); // 0xa9 Func
	Hold(); // 0xab Func
}


