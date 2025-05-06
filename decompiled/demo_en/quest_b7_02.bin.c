task_0_event_26(var_0_object, var_1_object, var_2_object, var_3_object, var_4_string)
{
	var_5_object = Obj(); var_6_int = 0; var_7_bool = 0; var_8_cvector = CVector(0,0,0); var_9_cvector = CVector(0,0,0); var_10_object = Obj(); var_11_object = Obj(); var_12_object = Obj(); var_13_int = 0; var_14_bool = 0; var_15_cvector = CVector(0,0,0); var_16_cvector = CVector(0,0,0); var_17_object = Obj(); var_18_object = Obj(); // 0xd PushV
	Trace(var_4_string); // 0xe Func
	var_19_string = "init_termitnik2"; // 0x10 PushS
	var_20_bool = var_4_string == var_19_string; // 0x11 Eq
	if(var_20_bool == 0) goto Label_63; // 0x12 JumpB
	var_21_string = ""; var_22_bool = 0; // 0x13 PushV
	var_21_string = "termitnik2@door1"; // 0x14 MovS
	var_22_bool = 0; // 0x15 MovB
	func_215(var_21_string, var_22_bool); // 0x16 NEW_2
	var_31_string = "termitnik2"; // 0x18 PushS
	GetSceneByName(var_12_object, var_31_string); // 0x19 Func
	var_32_object = Obj(); var_33_object = Obj(); var_34_string = ""; var_35_string = ""; var_36_string = ""; // 0x1b PushV
	var_33_object = var_12_object; // 0x1c Mov
	var_34_string = "pt_b7q02_mmorlok"; // 0x1d MovS
	var_35_string = "pers_morlok"; // 0x1e MovS
	var_36_string = "b7q02_mmorlok.xml"; // 0x1f MovS
	func_197(var_32_object, var_33_object, var_34_string, var_35_string, var_36_string); // 0x20 NEW_2
	var_1_object = var_32_object; // 0x21 TMov
	var_50_object = Obj(); var_51_object = Obj(); var_52_string = ""; var_53_string = ""; var_54_string = ""; // 0x23 PushV
	var_51_object = var_12_object; // 0x24 Mov
	var_52_string = "pt_b7q02_morlok"; // 0x25 MovS
	var_53_string = "pers_morlok"; // 0x26 MovS
	var_54_string = "b7q02_morlok.xml"; // 0x27 MovS
	func_197(var_50_object, var_51_object, var_52_string, var_53_string, var_54_string); // 0x28 NEW_2
	var_0_object = var_50_object; // 0x29 TMov
	var_13_int = 1; // 0x2b MovI
	
Label_44:
	var_55_string = "pt_b7q02_fog"; // 0x2c PushS
	var_56_int = var_55_string + var_13_int; // 0x2d Add
	GetLocator(var_56_int, var_14_bool, var_15_cvector, var_16_cvector); // 0x2e ObjFunc
	var_57_bool = var_14_bool == 0; // 0x30 Not
	if(var_57_bool == 0) goto Label_51; // 0x31 JumpB
	goto Label_61; // 0x32 Jump
	
Label_61:
	var_12_object = 0; // 0x3d SetNull
	goto Label_101; // 0x3e Jump
	
Label_101:
	return 14; // 0x65 Return
	
Label_51:
	var_58_string = "fog"; // 0x33 PushS
	var_59_string = "fog_stat_indoor.xml"; // 0x34 PushS
	AddActorByType(var_17_object, var_58_string, var_12_object, var_15_cvector, var_16_cvector, var_59_string); // 0x35 Func
	add(var_17_object); // 0x37 TObjFunc
	var_17_object = 0; // 0x39 SetNull
	var_60_int = 1; // 0x3a PushI
	var_13_int = var_13_int + var_60_int; // 0x3b Add2
	goto Label_44; // 0x3c Jump
	
Label_63:
	var_61_string = "place_grabitels"; // 0x3f PushS
	var_62_bool = var_4_string == var_61_string; // 0x40 Eq
	if(var_62_bool == 0) goto Label_88; // 0x41 JumpB
	GetMainOutdoorScene(var_18_object); // 0x42 Func
	var_63_object = Obj(); var_64_object = Obj(); var_65_string = ""; var_66_string = ""; var_67_string = ""; // 0x44 PushV
	var_64_object = var_18_object; // 0x45 Mov
	var_65_string = "pt_b7q02_grabitel1"; // 0x46 MovS
	var_66_string = "pers_grabitel"; // 0x47 MovS
	var_67_string = "b7q02_grabitel.xml"; // 0x48 MovS
	func_197(var_63_object, var_64_object, var_65_string, var_66_string, var_67_string); // 0x49 NEW_2
	add(var_63_object); // 0x4b TObjFunc
	var_68_object = Obj(); var_69_object = Obj(); var_70_string = ""; var_71_string = ""; var_72_string = ""; // 0x4d PushV
	var_69_object = var_18_object; // 0x4e Mov
	var_70_string = "pt_b7q02_grabitel2"; // 0x4f MovS
	var_71_string = "pers_grabitel"; // 0x50 MovS
	var_72_string = "b7q02_grabitel.xml"; // 0x51 MovS
	func_197(var_68_object, var_69_object, var_70_string, var_71_string, var_72_string); // 0x52 NEW_2
	add(var_68_object); // 0x54 TObjFunc
	var_18_object = 0; // 0x56 SetNull
	goto Label_101; // 0x57 Jump
	
Label_88:
	var_73_string = "fail"; // 0x58 PushS
	var_74_bool = var_4_string == var_73_string; // 0x59 Eq
	if(var_74_bool == 0) goto Label_95; // 0x5a JumpB
	func_113(); // 0x5c NEW_2
	goto Label_101; // 0x5e Jump
	
Label_95:
	var_100_string = "completed"; // 0x5f PushS
	var_101_bool = var_4_string == var_100_string; // 0x60 Eq
	if(var_101_bool == 0) goto Label_101; // 0x61 JumpB
	func_121(); // 0x63 NEW_2
}


task_0_event_9(var_0_object, var_1_object, var_2_object, var_3_object, var_4_int, var_5_float)
{
	func_102(); // 0xb6 NEW_2
	return 0; // 0xb8 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_object)
{
	var_4_object = Obj(); // 0x0 PushV
	func_191(var_4_object); // 0x1 NEW_2
	var_2_object = var_4_object; // 0x2 TMov
	var_7_object = Obj(); // 0x4 PushV
	func_191(var_7_object); // 0x5 NEW_2
	var_3_object = var_7_object; // 0x6 TMov
	var_8_int = 0; // 0x8 PushV
	var_8_int = 7; // 0x9 MovI
	func_161(var_8_int); // 0xa NEW_2
	return 0; // 0xc Return
}


func_161(var_8_int)
{
	var_9_float = 0; var_10_float = 0; // 0xa1 PushV
	GetGameTime(var_10_float); // 0xa2 Func
	var_11_int = 24; // 0xa4 PushI
	var_12_float = var_8_int * var_11_int; // 0xa5 Mult
	var_13_bool = var_10_float >= var_12_float; // 0xa6 GE
	if(var_13_bool == 0) goto Label_172; // 0xa7 JumpB
	func_129(var_8_int, var_9_float, var_10_float); // 0xa9 NEW_2
	goto Label_179; // 0xab Jump
	
Label_179:
	return 2; // 0xb3 Return
	
Label_172:
	var_45_int = 0; // 0xac PushI
	var_46_int = 24; // 0xad PushI
	var_47_float = var_8_int * var_46_int; // 0xae Mult
	SetTimeEvent(var_45_int, var_47_float); // 0xaf Func
	Hold(); // 0xb1 Func
}


func_129(var_0_object, var_2_object, var_3_object)
{
	EventDisable(26); // 0x81 EventDisable
	var_14_string = ""; var_15_bool = 0; // 0x82 PushV
	var_14_string = "termitnik2@door1"; // 0x83 MovS
	var_15_bool = 1; // 0x84 MovB
	func_215(var_14_string, var_15_bool); // 0x85 NEW_2
	var_24_object = var_0_object; // 0x87 PushT
	if(var_24_object == 0) goto Label_140; // 0x88 JumpB
	var_25_string = "cleanup"; // 0x89 PushS
	Trigger(var_0_object, var_25_string); // 0x8a Func
	
Label_140:
	var_26_object = var_1_object; // 0x8c PushT
	if(var_26_object == 0) goto Label_145; // 0x8d JumpB
	var_27_string = "cleanup"; // 0x8e PushS
	Trigger(var_27_string, var_27_string); // 0x8f Func
	
Label_145:
	var_28_object = Obj(); var_29_string = ""; // 0x91 PushV
	var_28_object = var_2_object; // 0x92 MovT
	var_29_string = "cleanup"; // 0x93 MovS
	func_232(var_28_object, var_29_string); // 0x94 NEW_2
	var_40_object = Obj(); var_41_string = ""; // 0x96 PushV
	var_40_object = var_3_object; // 0x97 MovT
	var_41_string = "cleanup"; // 0x98 MovS
	func_232(var_40_object, var_41_string); // 0x99 NEW_2
	var_42_object = Obj(); // 0x9b PushV
	func_185(var_42_object); // 0x9c NEW_2
	RemoveActor(var_42_object); // 0x9e Func
	return 0; // 0xa0 Return
}


func_185(var_42_object)
{
	var_43_object = Obj(); var_44_object = Obj(); // 0xb9 PushV
	self(var_44_object); // 0xba Func
	var_42_object = var_44_object; // 0xbc Mov
	return 2; // 0xbd Return
}


func_197(var_32_object, var_33_object, var_34_string, var_35_string, var_36_string)
{
	var_37_bool = 0; var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_object = Obj(); var_41_bool = 0; var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_object = Obj(); // 0xc5 PushV
	GetLocator(var_34_string, var_41_bool, var_42_cvector, var_43_cvector); // 0xc6 ObjFunc
	var_45_bool = var_41_bool == 0; // 0xc8 Not
	if(var_45_bool == 0) goto Label_210; // 0xc9 JumpB
	var_46_string = "Locator "; // 0xca PushS
	var_47_int = var_46_string + var_34_string; // 0xcb Add
	var_48_string = " doesn't exist"; // 0xcc PushS
	var_49_int = var_47_int + var_48_string; // 0xcd Add
	Trace(var_49_int); // 0xce Func
	var_44_object = 0; // 0xd0 SetNull
	goto Label_212; // 0xd1 Jump
	
Label_212:
	var_32_object = var_44_object; // 0xd4 Mov
	return 8; // 0xd5 Return
	
Label_210:
	AddActor(var_44_object, var_35_string, var_33_object, var_42_cvector, var_43_cvector, var_36_string); // 0xd2 Func
}


func_102()
{
	var_6_int = 0; var_7_int = 0; // 0x66 PushV
	var_8_string = "b7q02"; // 0x67 PushS
	GetVariable(var_8_string, var_7_int); // 0x68 Func
	var_9_int = 1000; // 0x6a PushI
	var_10_bool = var_7_int != var_9_int; // 0x6b Neq
	if(var_10_bool == 0) goto Label_112; // 0x6c JumpB
	func_113(); // 0x6e NEW_2
	
Label_112:
	return 2; // 0x70 Return
}


func_232(var_28_object, var_29_string)
{
	var_30_int = 0; var_31_int = 0; var_32_object = Obj(); var_33_int = 0; var_34_int = 0; var_35_object = Obj(); // 0xe8 PushV
	var_36_object = var_28_object; // 0xe9 Push
	if(var_36_object == 0) goto Label_250; // 0xea JumpB
	size(var_33_int); // 0xeb ObjFunc
	var_34_int = 0; // 0xed MovI
	
Label_238:
	var_37_bool = var_34_int < var_33_int; // 0xee LT
	if(var_37_bool == 0) goto Label_250; // 0xef JumpB
	get(var_35_object, var_34_int); // 0xf0 ObjFunc
	var_38_object = var_35_object; // 0xf2 Push
	if(var_38_object == 0) goto Label_246; // 0xf3 JumpB
	Trigger(var_35_object, var_29_string); // 0xf4 Func
	
Label_246:
	var_35_object = 0; // 0xf6 SetNull
	var_39_int = 1; // 0xf7 PushI
	var_34_int = var_34_int + var_39_int; // 0xf8 Add2
	goto Label_238; // 0xf9 Jump
	
Label_250:
	return 6; // 0xfa Return
}


func_113()
{
	var_11_string = "b7q02"; // 0x71 PushS
	var_12_int = -1; // 0x72 PushI
	SetVariable(var_11_string, var_12_int); // 0x73 Func
	func_129(var_5_float, var_6_int, var_7_int); // 0x76 NEW_2
	return 0; // 0x78 Return
}


func_215(var_14_string, var_15_bool)
{
	var_16_object = Obj(); var_17_object = Obj(); // 0xd7 PushV
	FindActor(var_17_object, var_14_string); // 0xd8 Func
	var_18_bool = var_17_object == 0; // 0xda Not
	if(var_18_bool == 0) goto Label_227; // 0xdb JumpB
	var_19_string = "Door "; // 0xdc PushS
	var_20_int = var_19_string + var_14_string; // 0xdd Add
	var_21_string = " not found"; // 0xde PushS
	var_22_int = var_20_int + var_21_string; // 0xdf Add
	Trace(var_22_int); // 0xe0 Func
	goto Label_230; // 0xe2 Jump
	
Label_230:
	return 2; // 0xe6 Return
	
Label_227:
	var_23_string = "locked"; // 0xe3 PushS
	SetProperty(var_23_string, var_15_bool); // 0xe4 ObjFunc
}


func_121()
{
	var_102_string = "b7q02"; // 0x79 PushS
	var_103_int = 1000; // 0x7a PushI
	SetVariable(var_102_string, var_103_int); // 0x7b Func
	func_129(var_16_cvector, var_17_object, var_18_object); // 0x7e NEW_2
	return 0; // 0x80 Return
}


func_191(var_4_object)
{
	var_5_object = Obj(); var_6_object = Obj(); // 0xbf PushV
	CreateObjectVector(var_6_object); // 0xc0 Func
	var_4_object = var_6_object; // 0xc2 Mov
	return 2; // 0xc3 Return
}


