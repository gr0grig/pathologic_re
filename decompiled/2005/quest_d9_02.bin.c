task_0_event_26(var_0_object, var_1_string)
{
	var_2_object = Obj(); var_3_object = Obj(); // 0x7 PushV
	Trace(var_1_string); // 0x8 Func
	var_4_string = "init_soldiers"; // 0xa PushS
	var_5_bool = var_1_string == var_4_string; // 0xb Eq
	if(var_5_bool == 0) goto Label_71; // 0xc JumpB
	GetMainOutdoorScene(var_3_object); // 0xd Func
	var_6_object = Obj(); var_7_object = Obj(); var_8_string = ""; var_9_string = ""; var_10_string = ""; // 0xf PushV
	var_7_object = var_3_object; // 0x10 Mov
	var_8_string = "pt_d9q02_enemy1"; // 0x11 MovS
	var_9_string = "pers_soldat_hand"; // 0x12 MovS
	var_10_string = "d9q02_e_soldat.xml"; // 0x13 MovS
	func_158(var_6_object, var_7_object, var_8_string, var_9_string, var_10_string); // 0x14 NEW_2
	add(var_6_object); // 0x16 TObjFunc
	var_24_object = Obj(); var_25_object = Obj(); var_26_string = ""; var_27_string = ""; var_28_string = ""; // 0x18 PushV
	var_25_object = var_3_object; // 0x19 Mov
	var_26_string = "pt_d9q02_enemy2"; // 0x1a MovS
	var_27_string = "pers_soldat_hand"; // 0x1b MovS
	var_28_string = "d9q02_e_soldat.xml"; // 0x1c MovS
	func_158(var_24_object, var_25_object, var_26_string, var_27_string, var_28_string); // 0x1d NEW_2
	add(var_24_object); // 0x1f TObjFunc
	var_29_object = Obj(); var_30_object = Obj(); var_31_string = ""; var_32_string = ""; var_33_string = ""; // 0x21 PushV
	var_30_object = var_3_object; // 0x22 Mov
	var_31_string = "pt_d9q02_enemy3"; // 0x23 MovS
	var_32_string = "pers_soldat_hand"; // 0x24 MovS
	var_33_string = "d9q02_e_soldat_rifle.xml"; // 0x25 MovS
	func_158(var_29_object, var_30_object, var_31_string, var_32_string, var_33_string); // 0x26 NEW_2
	add(var_29_object); // 0x28 TObjFunc
	var_34_object = Obj(); var_35_object = Obj(); var_36_string = ""; var_37_string = ""; var_38_string = ""; // 0x2a PushV
	var_35_object = var_3_object; // 0x2b Mov
	var_36_string = "pt_d9q02_enemy4"; // 0x2c MovS
	var_37_string = "pers_soldat_hand"; // 0x2d MovS
	var_38_string = "d9q02_e_soldat_rifle.xml"; // 0x2e MovS
	func_158(var_34_object, var_35_object, var_36_string, var_37_string, var_38_string); // 0x2f NEW_2
	add(var_34_object); // 0x31 TObjFunc
	var_39_object = Obj(); var_40_object = Obj(); var_41_string = ""; var_42_string = ""; var_43_string = ""; // 0x33 PushV
	var_40_object = var_3_object; // 0x34 Mov
	var_41_string = "pt_d9q02_enemy5"; // 0x35 MovS
	var_42_string = "pers_soldat_hand"; // 0x36 MovS
	var_43_string = "d9q02_e_soldat_rifle.xml"; // 0x37 MovS
	func_158(var_39_object, var_40_object, var_41_string, var_42_string, var_43_string); // 0x38 NEW_2
	add(var_39_object); // 0x3a TObjFunc
	var_44_object = Obj(); var_45_object = Obj(); var_46_string = ""; var_47_string = ""; var_48_string = ""; // 0x3c PushV
	var_45_object = var_3_object; // 0x3d Mov
	var_46_string = "pt_d9q02_enemy6"; // 0x3e MovS
	var_47_string = "pers_soldat_hand"; // 0x3f MovS
	var_48_string = "d9q02_e_soldat_rifle.xml"; // 0x40 MovS
	func_158(var_44_object, var_45_object, var_46_string, var_47_string, var_48_string); // 0x41 NEW_2
	add(var_44_object); // 0x43 TObjFunc
	var_3_object = 0; // 0x45 SetNull
	goto Label_84; // 0x46 Jump
	
Label_84:
	return 2; // 0x54 Return
	
Label_71:
	var_49_string = "fail"; // 0x47 PushS
	var_50_bool = var_1_string == var_49_string; // 0x48 Eq
	if(var_50_bool == 0) goto Label_78; // 0x49 JumpB
	func_99(); // 0x4b NEW_2
	goto Label_84; // 0x4d Jump
	
Label_78:
	var_53_string = "completed"; // 0x4e PushS
	var_54_bool = var_1_string == var_53_string; // 0x4f Eq
	if(var_54_bool == 0) goto Label_84; // 0x50 JumpB
	func_107(); // 0x52 NEW_2
}


task_0_event_9(var_0_object, var_1_int, var_2_float)
{
	func_85(); // 0x95 NEW_2
	return 0; // 0x97 Return
}


main(var_0_object)
{
	CreateObjectVector(var_0_object); // 0x0 Func
	var_1_int = 0; // 0x2 PushV
	var_1_int = 9; // 0x3 MovI
	func_128(var_1_int); // 0x4 NEW_2
	return 0; // 0x6 Return
}


func_128(var_1_int)
{
	var_2_float = 0; var_3_float = 0; // 0x80 PushV
	GetGameTime(var_3_float); // 0x81 Func
	var_4_int = 24; // 0x83 PushI
	var_5_float = var_1_int * var_4_int; // 0x84 Mult
	var_6_bool = var_3_float >= var_5_float; // 0x85 GE
	if(var_6_bool == 0) goto Label_139; // 0x86 JumpB
	func_116(var_3_float); // 0x88 NEW_2
	goto Label_146; // 0x8a Jump
	
Label_146:
	return 2; // 0x92 Return
	
Label_139:
	var_22_int = 0; // 0x8b PushI
	var_23_int = 24; // 0x8c PushI
	var_24_float = var_1_int * var_23_int; // 0x8d Mult
	SetTimeEvent(var_22_int, var_24_float); // 0x8e Func
	Hold(); // 0x90 Func
}


func_99()
{
	var_8_string = "d9q02"; // 0x63 PushS
	var_9_int = -1; // 0x64 PushI
	SetVariable(var_8_string, var_9_int); // 0x65 Func
	func_115(); // 0x68 NEW_2
	return 0; // 0x6a Return
}


func_107()
{
	var_55_string = "d9q02"; // 0x6b PushS
	var_56_int = 1000; // 0x6c PushI
	SetVariable(var_55_string, var_56_int); // 0x6d Func
	func_115(); // 0x70 NEW_2
	return 0; // 0x72 Return
}


func_176(var_7_object, var_8_string)
{
	var_9_int = 0; var_10_int = 0; var_11_object = Obj(); var_12_int = 0; var_13_int = 0; var_14_object = Obj(); // 0xb0 PushV
	var_15_object = var_7_object; // 0xb1 Push
	if(var_15_object == 0) goto Label_194; // 0xb2 JumpB
	size(var_12_int); // 0xb3 ObjFunc
	var_13_int = 0; // 0xb5 MovI
	
Label_182:
	var_16_bool = var_13_int < var_12_int; // 0xb6 LT
	if(var_16_bool == 0) goto Label_194; // 0xb7 JumpB
	get(var_14_object, var_13_int); // 0xb8 ObjFunc
	var_17_object = var_14_object; // 0xba Push
	if(var_17_object == 0) goto Label_190; // 0xbb JumpB
	Trigger(var_14_object, var_8_string); // 0xbc Func
	
Label_190:
	var_14_object = 0; // 0xbe SetNull
	var_18_int = 1; // 0xbf PushI
	var_13_int = var_13_int + var_18_int; // 0xc0 Add2
	goto Label_182; // 0xc1 Jump
	
Label_194:
	return 6; // 0xc2 Return
}


func_115()
{
	return 0; // 0x73 Return
}


func_116(var_0_object)
{
	EventDisable(26); // 0x74 EventDisable
	var_7_object = Obj(); var_8_string = ""; // 0x75 PushV
	var_7_object = var_0_object; // 0x76 MovT
	var_8_string = "cleanup"; // 0x77 MovS
	func_176(var_7_object, var_8_string); // 0x78 NEW_2
	var_19_object = Obj(); // 0x7a PushV
	func_152(var_19_object); // 0x7b NEW_2
	RemoveActor(var_19_object); // 0x7d Func
	return 0; // 0x7f Return
}


func_85()
{
	var_3_int = 0; var_4_int = 0; // 0x55 PushV
	var_5_string = "d9q02"; // 0x56 PushS
	GetVariable(var_5_string, var_4_int); // 0x57 Func
	var_6_int = 1000; // 0x59 PushI
	var_7_bool = var_4_int != var_6_int; // 0x5a Neq
	if(var_7_bool == 0) goto Label_95; // 0x5b JumpB
	func_99(); // 0x5d NEW_2
	
Label_95:
	func_116(var_4_int); // 0x60 NEW_2
	return 2; // 0x62 Return
}


func_152(var_19_object)
{
	var_20_object = Obj(); var_21_object = Obj(); // 0x98 PushV
	self(var_21_object); // 0x99 Func
	var_19_object = var_21_object; // 0x9b Mov
	return 2; // 0x9c Return
}


func_158(var_6_object, var_7_object, var_8_string, var_9_string, var_10_string)
{
	var_11_bool = 0; var_12_cvector = CVector(0,0,0); var_13_cvector = CVector(0,0,0); var_14_object = Obj(); var_15_bool = 0; var_16_cvector = CVector(0,0,0); var_17_cvector = CVector(0,0,0); var_18_object = Obj(); // 0x9e PushV
	GetLocator(var_8_string, var_15_bool, var_16_cvector, var_17_cvector); // 0x9f ObjFunc
	var_19_bool = var_15_bool == 0; // 0xa1 Not
	if(var_19_bool == 0) goto Label_171; // 0xa2 JumpB
	var_20_string = "Locator "; // 0xa3 PushS
	var_21_int = var_20_string + var_8_string; // 0xa4 Add
	var_22_string = " doesn't exist"; // 0xa5 PushS
	var_23_int = var_21_int + var_22_string; // 0xa6 Add
	Trace(var_23_int); // 0xa7 Func
	var_18_object = 0; // 0xa9 SetNull
	goto Label_173; // 0xaa Jump
	
Label_173:
	var_6_object = var_18_object; // 0xad Mov
	return 8; // 0xae Return
	
Label_171:
	AddActor(var_18_object, var_9_string, var_7_object, var_16_cvector, var_17_cvector, var_10_string); // 0xab Func
}


