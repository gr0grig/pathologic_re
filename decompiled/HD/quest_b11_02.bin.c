task_0_event_26(var_0_object, var_1_string)
{
	Trace(var_1_string); // 0x29 Func
	var_2_string = "teleport"; // 0x2b PushS
	var_3_bool = var_1_string == var_2_string; // 0x2c Eq
	if(var_3_bool == 0) goto Label_56; // 0x2d JumpB
	var_4_object = Obj(); var_5_string = ""; var_6_string = ""; // 0x2e PushV
	var_7_object = Obj(); // 0x2f PushV
	func_149(var_7_object); // 0x30 NEW_2
	var_4_object = var_7_object; // 0x31 Mov
	var_5_string = "mnogogrannik_han"; // 0x33 MovS
	var_6_string = "pt_b11q02_teleport"; // 0x34 MovS
	func_186(var_4_object, var_5_string, var_6_string); // 0x35 NEW_2
	goto Label_69; // 0x37 Jump
	
Label_69:
	return 0; // 0x45 Return
	
Label_56:
	var_28_string = "fail"; // 0x38 PushS
	var_29_bool = var_1_string == var_28_string; // 0x39 Eq
	if(var_29_bool == 0) goto Label_63; // 0x3a JumpB
	func_84(); // 0x3c NEW_2
	goto Label_69; // 0x3e Jump
	
Label_63:
	var_46_string = "completed"; // 0x3f PushS
	var_47_bool = var_1_string == var_46_string; // 0x40 Eq
	if(var_47_bool == 0) goto Label_69; // 0x41 JumpB
	func_92(); // 0x43 NEW_2
}


task_0_event_9(var_0_object, var_1_int, var_2_float)
{
	func_70(); // 0x92 NEW_2
	return 0; // 0x94 Return
}


main(var_0_object)
{
	var_1_object = Obj(); var_2_object = Obj(); // 0x0 PushV
	var_3_object = Obj(); // 0x1 PushV
	func_162(var_3_object); // 0x2 NEW_2
	var_0_object = var_3_object; // 0x3 TMov
	GetMainOutdoorScene(var_2_object); // 0x5 Func
	var_6_object = Obj(); var_7_object = Obj(); var_8_string = ""; var_9_string = ""; var_10_string = ""; // 0x7 PushV
	var_7_object = var_2_object; // 0x8 Mov
	var_8_string = "pt_b11q02_doberman1"; // 0x9 MovS
	var_9_string = "pers_doberman"; // 0xa MovS
	var_10_string = "b11q02_doberman.xml"; // 0xb MovS
	func_168(var_7_object, var_8_string, var_9_string, var_10_string); // 0xc NEW_2
	add(var_6_object); // 0xe TObjFunc
	var_24_object = Obj(); var_25_object = Obj(); var_26_string = ""; var_27_string = ""; var_28_string = ""; // 0x10 PushV
	var_25_object = var_2_object; // 0x11 Mov
	var_26_string = "pt_b11q02_doberman2"; // 0x12 MovS
	var_27_string = "pers_doberman"; // 0x13 MovS
	var_28_string = "b11q02_doberman.xml"; // 0x14 MovS
	func_168(var_25_object, var_26_string, var_27_string, var_28_string); // 0x15 NEW_2
	add(var_24_object); // 0x17 TObjFunc
	var_29_object = Obj(); var_30_object = Obj(); var_31_string = ""; var_32_string = ""; var_33_string = ""; // 0x19 PushV
	var_30_object = var_2_object; // 0x1a Mov
	var_31_string = "pt_b11q02_doberman3"; // 0x1b MovS
	var_32_string = "pers_doberman"; // 0x1c MovS
	var_33_string = "b11q02_doberman.xml"; // 0x1d MovS
	func_168(var_30_object, var_31_string, var_32_string, var_33_string); // 0x1e NEW_2
	add(var_29_object); // 0x20 TObjFunc
	var_34_int = 0; // 0x22 PushV
	var_34_int = 11; // 0x23 MovI
	func_125(var_34_int); // 0x24 NEW_2
	return 2; // 0x26 Return
}


func_162(var_3_object)
{
	var_4_object = Obj(); var_5_object = Obj(); // 0xa2 PushV
	CreateObjectVector(var_5_object); // 0xa3 Func
	var_3_object = var_5_object; // 0xa5 Mov
	return 2; // 0xa6 Return
}


func_70()
{
	var_3_int = 0; var_4_int = 0; // 0x46 PushV
	var_5_string = "b11q02"; // 0x47 PushS
	GetVariable(var_5_string, var_4_int); // 0x48 Func
	var_6_int = 1000; // 0x4a PushI
	var_7_bool = var_4_int != var_6_int; // 0x4b Neq
	if(var_7_bool == 0) goto Label_80; // 0x4c JumpB
	func_84(); // 0x4e NEW_2
	
Label_80:
	func_114(var_4_int); // 0x51 NEW_2
	return 2; // 0x53 Return
}


func_168(var_6_object, var_8_string, var_9_string, var_10_string)
{
	var_11_bool = 0; var_12_cvector = CVector(0,0,0); var_13_cvector = CVector(0,0,0); var_14_object = Obj(); var_15_bool = 0; var_16_cvector = CVector(0,0,0); var_17_cvector = CVector(0,0,0); var_18_object = Obj(); // 0xa8 PushV
	GetLocator(var_8_string, var_15_bool, var_16_cvector, var_17_cvector); // 0xa9 ObjFunc
	var_19_bool = var_15_bool == 0; // 0xab Not
	if(var_19_bool == 0) goto Label_181; // 0xac JumpB
	var_20_string = "Locator "; // 0xad PushS
	var_21_int = var_20_string + var_8_string; // 0xae Add
	var_22_string = " doesn't exist"; // 0xaf PushS
	var_23_int = var_21_int + var_22_string; // 0xb0 Add
	Trace(var_23_int); // 0xb1 Func
	var_18_object = 0; // 0xb3 SetNull
	goto Label_183; // 0xb4 Jump
	
Label_183:
	var_6_object = var_18_object; // 0xb7 Mov
	return 8; // 0xb8 Return
	
Label_181:
	AddStationaryActor(var_18_object, var_16_cvector, var_17_cvector, var_9_string, var_10_string); // 0xb5 ObjFunc
}


func_156(var_51_object)
{
	var_52_object = Obj(); var_53_object = Obj(); // 0x9c PushV
	self(var_53_object); // 0x9d Func
	var_51_object = var_53_object; // 0x9f Mov
	return 2; // 0xa0 Return
}


func_114(var_0_object)
{
	EventDisable(26); // 0x72 EventDisable
	var_40_object = Obj(); // 0x73 PushV
	var_40_object = var_0_object; // 0x74 MovT
	func_210(var_40_object); // 0x75 NEW_2
	var_51_object = Obj(); // 0x77 PushV
	func_156(var_51_object); // 0x78 NEW_2
	RemoveActor(var_51_object); // 0x7a Func
	return 0; // 0x7c Return
}


func_210(var_40_object)
{
	var_41_int = 0; var_42_int = 0; var_43_object = Obj(); var_44_int = 0; var_45_int = 0; var_46_object = Obj(); // 0xd2 PushV
	var_47_object = var_40_object; // 0xd3 Push
	if(var_47_object == 0) goto Label_230; // 0xd4 JumpB
	size(var_44_int); // 0xd5 ObjFunc
	var_45_int = 0; // 0xd7 MovI
	
Label_216:
	var_48_bool = var_45_int < var_44_int; // 0xd8 LT
	if(var_48_bool == 0) goto Label_228; // 0xd9 JumpB
	get(var_46_object, var_45_int); // 0xda ObjFunc
	var_49_object = var_46_object; // 0xdc Push
	if(var_49_object == 0) goto Label_224; // 0xdd JumpB
	Remove(); // 0xde ObjFunc
	
Label_224:
	var_46_object = 0; // 0xe0 SetNull
	var_50_int = 1; // 0xe1 PushI
	var_45_int = var_45_int + var_50_int; // 0xe2 Add2
	goto Label_216; // 0xe3 Jump
	
Label_228:
	clear(); // 0xe4 ObjFunc
	
Label_230:
	return 6; // 0xe6 Return
}


func_84()
{
	var_8_string = "b11q02"; // 0x54 PushS
	var_9_int = -1; // 0x55 PushI
	SetVariable(var_8_string, var_9_int); // 0x56 Func
	func_114(var_4_int); // 0x59 NEW_2
	return 0; // 0x5b Return
}


func_149(var_7_object)
{
	var_8_object = Obj(); var_9_object = Obj(); // 0x95 PushV
	var_10_string = "player"; // 0x96 PushS
	FindActor(var_9_object, var_10_string); // 0x97 Func
	var_7_object = var_9_object; // 0x99 Mov
	return 2; // 0x9a Return
}


func_186(var_4_object, var_5_string, var_6_string)
{
	var_11_object = Obj(); var_12_bool = 0; var_13_cvector = CVector(0,0,0); var_14_cvector = CVector(0,0,0); var_15_object = Obj(); var_16_bool = 0; var_17_cvector = CVector(0,0,0); var_18_cvector = CVector(0,0,0); // 0xba PushV
	var_19_bool = var_4_object == 0; // 0xbb Not
	if(var_19_bool == 0) goto Label_190; // 0xbc JumpB
	return 8; // 0xbd Return
	
Label_190:
	GetSceneByName(var_15_object, var_5_string); // 0xbe Func
	GetLocator(var_6_string, var_16_bool, var_17_cvector, var_18_cvector); // 0xc0 ObjFunc
	var_20_bool = var_16_bool == 0; // 0xc2 Not
	if(var_20_bool == 0) goto Label_206; // 0xc3 JumpB
	var_21_string = "Teleport location '"; // 0xc4 PushS
	var_22_int = var_21_string + var_6_string; // 0xc5 Add
	var_23_string = "' not found in scene '"; // 0xc6 PushS
	var_24_int = var_22_int + var_23_string; // 0xc7 Add
	var_25_int = var_24_int + var_5_string; // 0xc8 Add
	var_26_string = "'"; // 0xc9 PushS
	var_27_int = var_25_int + var_26_string; // 0xca Add
	Trace(var_27_int); // 0xcb Func
	goto Label_208; // 0xcd Jump
	
Label_208:
	return 8; // 0xd0 Return
	
Label_206:
	Teleport(var_4_object, var_15_object, var_17_cvector, var_18_cvector); // 0xce Func
}


func_92()
{
	var_48_object = Obj(); var_49_object = Obj(); // 0x5c PushV
	var_50_string = "b11q02"; // 0x5d PushS
	var_51_int = 1000; // 0x5e PushI
	SetVariable(var_50_string, var_51_int); // 0x5f Func
	var_52_string = "cot_kapella"; // 0x61 PushS
	GetSceneByName(var_49_object, var_52_string); // 0x62 Func
	var_53_string = "han"; // 0x64 PushS
	Trigger(var_49_object, var_53_string); // 0x65 Func
	var_54_string = "mnogogrannik_han"; // 0x67 PushS
	GetSceneByName(var_49_object, var_54_string); // 0x68 Func
	var_55_string = "nohan"; // 0x6a PushS
	Trigger(var_49_object, var_55_string); // 0x6b Func
	func_114(var_49_object); // 0x6e NEW_2
	return 2; // 0x70 Return
}


func_125(var_34_int)
{
	var_35_float = 0; var_36_float = 0; // 0x7d PushV
	GetGameTime(var_36_float); // 0x7e Func
	var_37_int = 24; // 0x80 PushI
	var_38_float = var_34_int * var_37_int; // 0x81 Mult
	var_39_bool = var_36_float >= var_38_float; // 0x82 GE
	if(var_39_bool == 0) goto Label_136; // 0x83 JumpB
	func_114(var_36_float); // 0x85 NEW_2
	goto Label_143; // 0x87 Jump
	
Label_143:
	return 2; // 0x8f Return
	
Label_136:
	var_54_int = 0; // 0x88 PushI
	var_55_int = 24; // 0x89 PushI
	var_56_float = var_34_int * var_55_int; // 0x8a Mult
	SetTimeEvent(var_54_int, var_56_float); // 0x8b Func
	Hold(); // 0x8d Func
}


