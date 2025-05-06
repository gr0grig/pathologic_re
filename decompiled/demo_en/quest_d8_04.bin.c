task_0_event_26(var_0_object, var_1_int, var_2_string)
{
	var_3_object = Obj(); var_4_int = 0; var_5_object = Obj(); var_6_int = 0; // 0xd PushV
	Trace(var_2_string); // 0xe Func
	var_7_string = "termitnik_load"; // 0x10 PushS
	var_8_bool = var_2_string == var_7_string; // 0x11 Eq
	if(var_8_bool == 0) goto Label_48; // 0x12 JumpB
	var_9_object = Obj(); // 0x13 PushV
	var_9_object = var_0_object; // 0x14 MovT
	func_184(var_9_object); // 0x15 NEW_2
	clear(); // 0x17 TObjFunc
	var_20_string = "termitnik"; // 0x19 PushS
	GetSceneByName(var_5_object, var_20_string); // 0x1a Func
	var_6_int = 0; // 0x1c MovI
	
Label_29:
	var_21_bool = var_6_int < var_1_int; // 0x1d LT
	if(var_21_bool == 0) goto Label_46; // 0x1e JumpB
	var_22_object = Obj(); var_23_object = Obj(); var_24_string = ""; var_25_string = ""; var_26_string = ""; // 0x1f PushV
	var_23_object = var_5_object; // 0x20 Mov
	var_27_string = "pt_d8q04_morlok"; // 0x21 PushS
	var_28_int = 1; // 0x22 PushI
	var_29_int = var_6_int + var_28_int; // 0x23 Add
	var_24_string = var_27_string + var_29_int; // 0x24 Add2
	var_25_string = "pers_morlok"; // 0x25 MovS
	var_26_string = "d8q04_morlok.xml"; // 0x26 MovS
	func_149(var_22_object, var_23_object, var_24_string, var_25_string, var_26_string); // 0x27 NEW_2
	add(var_22_object); // 0x29 TObjFunc
	var_43_int = 1; // 0x2b PushI
	var_6_int = var_6_int + var_43_int; // 0x2c Add2
	goto Label_29; // 0x2d Jump
	
Label_46:
	var_5_object = 0; // 0x2e SetNull
	goto Label_76; // 0x2f Jump
	
Label_76:
	return 4; // 0x4c Return
	
Label_48:
	var_44_string = "death"; // 0x30 PushS
	var_45_bool = var_2_string == var_44_string; // 0x31 Eq
	if(var_45_bool == 0) goto Label_54; // 0x32 JumpB
	var_46_int = -1; // 0x33 PushI
	var_1_int = var_1_int + var_46_int; // 0x34 Add2
	goto Label_76; // 0x35 Jump
	
Label_54:
	var_47_string = "attack"; // 0x36 PushS
	var_48_bool = var_2_string == var_47_string; // 0x37 Eq
	if(var_48_bool == 0) goto Label_63; // 0x38 JumpB
	var_49_object = Obj(); var_50_string = ""; // 0x39 PushV
	var_49_object = var_0_object; // 0x3a MovT
	var_50_string = "attack"; // 0x3b MovS
	func_205(var_49_object, var_50_string); // 0x3c NEW_2
	goto Label_76; // 0x3e Jump
	
Label_63:
	var_61_string = "fail"; // 0x3f PushS
	var_62_bool = var_2_string == var_61_string; // 0x40 Eq
	if(var_62_bool == 0) goto Label_70; // 0x41 JumpB
	func_91(); // 0x43 NEW_2
	goto Label_76; // 0x45 Jump
	
Label_70:
	var_65_string = "completed"; // 0x46 PushS
	var_66_bool = var_2_string == var_65_string; // 0x47 Eq
	if(var_66_bool == 0) goto Label_76; // 0x48 JumpB
	func_99(); // 0x4a NEW_2
}


task_0_event_9(var_0_object, var_1_int, var_2_int, var_3_float)
{
	func_77(); // 0x8c NEW_2
	return 0; // 0x8e Return
}


main(var_0_object, var_1_int)
{
	var_1_int = 3; // 0x0 TMovI
	CreateObjectVector(var_0_object); // 0x1 Func
	var_2_string = ""; var_3_bool = 0; // 0x3 PushV
	var_2_string = "theater@door1"; // 0x4 MovS
	var_3_bool = 0; // 0x5 MovB
	func_167(var_2_string, var_3_bool); // 0x6 NEW_2
	var_12_int = 0; // 0x8 PushV
	var_12_int = 8; // 0x9 MovI
	func_119(var_12_int); // 0xa NEW_2
	return 0; // 0xc Return
}


func_99()
{
	var_67_string = "d8q04"; // 0x63 PushS
	var_68_int = 1000; // 0x64 PushI
	SetVariable(var_67_string, var_68_int); // 0x65 Func
	func_107(); // 0x68 NEW_2
	return 0; // 0x6a Return
}


func_167(var_2_string, var_3_bool)
{
	var_4_object = Obj(); var_5_object = Obj(); // 0xa7 PushV
	FindActor(var_5_object, var_2_string); // 0xa8 Func
	var_6_bool = var_5_object == 0; // 0xaa Not
	if(var_6_bool == 0) goto Label_179; // 0xab JumpB
	var_7_string = "Door "; // 0xac PushS
	var_8_int = var_7_string + var_2_string; // 0xad Add
	var_9_string = " not found"; // 0xae PushS
	var_10_int = var_8_int + var_9_string; // 0xaf Add
	Trace(var_10_int); // 0xb0 Func
	goto Label_182; // 0xb2 Jump
	
Label_182:
	return 2; // 0xb6 Return
	
Label_179:
	var_11_string = "locked"; // 0xb3 PushS
	SetProperty(var_11_string, var_3_bool); // 0xb4 ObjFunc
}


func_107()
{
	return 0; // 0x6b Return
}


func_108(var_0_object)
{
	EventDisable(26); // 0x6c EventDisable
	var_18_object = Obj(); // 0x6d PushV
	var_18_object = var_0_object; // 0x6e MovT
	func_184(var_18_object); // 0x6f NEW_2
	var_29_object = Obj(); // 0x71 PushV
	func_143(var_29_object); // 0x72 NEW_2
	RemoveActor(var_29_object); // 0x74 Func
	return 0; // 0x76 Return
}


func_205(var_49_object, var_50_string)
{
	var_51_int = 0; var_52_int = 0; var_53_object = Obj(); var_54_int = 0; var_55_int = 0; var_56_object = Obj(); // 0xcd PushV
	var_57_object = var_49_object; // 0xce Push
	if(var_57_object == 0) goto Label_223; // 0xcf JumpB
	size(var_54_int); // 0xd0 ObjFunc
	var_55_int = 0; // 0xd2 MovI
	
Label_211:
	var_58_bool = var_55_int < var_54_int; // 0xd3 LT
	if(var_58_bool == 0) goto Label_223; // 0xd4 JumpB
	get(var_56_object, var_55_int); // 0xd5 ObjFunc
	var_59_object = var_56_object; // 0xd7 Push
	if(var_59_object == 0) goto Label_219; // 0xd8 JumpB
	Trigger(var_56_object, var_50_string); // 0xd9 Func
	
Label_219:
	var_56_object = 0; // 0xdb SetNull
	var_60_int = 1; // 0xdc PushI
	var_55_int = var_55_int + var_60_int; // 0xdd Add2
	goto Label_211; // 0xde Jump
	
Label_223:
	return 6; // 0xdf Return
}


func_77()
{
	var_4_int = 0; var_5_int = 0; // 0x4d PushV
	var_6_string = "d8q04"; // 0x4e PushS
	GetVariable(var_6_string, var_5_int); // 0x4f Func
	var_7_int = 1000; // 0x51 PushI
	var_8_bool = var_5_int != var_7_int; // 0x52 Neq
	if(var_8_bool == 0) goto Label_87; // 0x53 JumpB
	func_91(); // 0x55 NEW_2
	
Label_87:
	func_108(var_5_int); // 0x58 NEW_2
	return 2; // 0x5a Return
}


func_143(var_29_object)
{
	var_30_object = Obj(); var_31_object = Obj(); // 0x8f PushV
	self(var_31_object); // 0x90 Func
	var_29_object = var_31_object; // 0x92 Mov
	return 2; // 0x93 Return
}


func_149(var_22_object, var_23_object, var_24_string, var_25_string, var_26_string)
{
	var_30_bool = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_object = Obj(); var_34_bool = 0; var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_object = Obj(); // 0x95 PushV
	GetLocator(var_24_string, var_34_bool, var_35_cvector, var_36_cvector); // 0x96 ObjFunc
	var_38_bool = var_34_bool == 0; // 0x98 Not
	if(var_38_bool == 0) goto Label_162; // 0x99 JumpB
	var_39_string = "Locator "; // 0x9a PushS
	var_40_int = var_39_string + var_24_string; // 0x9b Add
	var_41_string = " doesn't exist"; // 0x9c PushS
	var_42_int = var_40_int + var_41_string; // 0x9d Add
	Trace(var_42_int); // 0x9e Func
	var_37_object = 0; // 0xa0 SetNull
	goto Label_164; // 0xa1 Jump
	
Label_164:
	var_22_object = var_37_object; // 0xa4 Mov
	return 8; // 0xa5 Return
	
Label_162:
	AddActor(var_37_object, var_25_string, var_23_object, var_35_cvector, var_36_cvector, var_26_string); // 0xa2 Func
}


func_119(var_12_int)
{
	var_13_float = 0; var_14_float = 0; // 0x77 PushV
	GetGameTime(var_14_float); // 0x78 Func
	var_15_int = 24; // 0x7a PushI
	var_16_float = var_12_int * var_15_int; // 0x7b Mult
	var_17_bool = var_14_float >= var_16_float; // 0x7c GE
	if(var_17_bool == 0) goto Label_130; // 0x7d JumpB
	func_108(var_14_float); // 0x7f NEW_2
	goto Label_137; // 0x81 Jump
	
Label_137:
	return 2; // 0x89 Return
	
Label_130:
	var_32_int = 0; // 0x82 PushI
	var_33_int = 24; // 0x83 PushI
	var_34_float = var_12_int * var_33_int; // 0x84 Mult
	SetTimeEvent(var_32_int, var_34_float); // 0x85 Func
	Hold(); // 0x87 Func
}


func_184(var_18_object)
{
	var_19_int = 0; var_20_int = 0; var_21_object = Obj(); var_22_int = 0; var_23_int = 0; var_24_object = Obj(); // 0xb8 PushV
	var_25_object = var_18_object; // 0xb9 Push
	if(var_25_object == 0) goto Label_204; // 0xba JumpB
	size(var_22_int); // 0xbb ObjFunc
	var_23_int = 0; // 0xbd MovI
	
Label_190:
	var_26_bool = var_23_int < var_22_int; // 0xbe LT
	if(var_26_bool == 0) goto Label_202; // 0xbf JumpB
	get(var_24_object, var_23_int); // 0xc0 ObjFunc
	var_27_object = var_24_object; // 0xc2 Push
	if(var_27_object == 0) goto Label_198; // 0xc3 JumpB
	RemoveActor(var_24_object); // 0xc4 Func
	
Label_198:
	var_24_object = 0; // 0xc6 SetNull
	var_28_int = 1; // 0xc7 PushI
	var_23_int = var_23_int + var_28_int; // 0xc8 Add2
	goto Label_190; // 0xc9 Jump
	
Label_202:
	clear(); // 0xca ObjFunc
	
Label_204:
	return 6; // 0xcc Return
}


func_91()
{
	var_9_string = "d8q04"; // 0x5b PushS
	var_10_int = -1; // 0x5c PushI
	SetVariable(var_9_string, var_10_int); // 0x5d Func
	func_107(); // 0x60 NEW_2
	return 0; // 0x62 Return
}


