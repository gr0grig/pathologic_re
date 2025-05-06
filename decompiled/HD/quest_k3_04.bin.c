task_0_event_26(var_0_object, var_1_object, var_2_object, var_3_string)
{
	var_4_object = Obj(); var_5_object = Obj(); // 0x1b PushV
	Trace(var_3_string); // 0x1c Func
	var_6_string = "place_burah_lopuh"; // 0x1e PushS
	var_7_bool = var_3_string == var_6_string; // 0x1f Eq
	if(var_7_bool == 0) goto Label_61; // 0x20 JumpB
	var_8_string = ""; var_9_bool = 0; // 0x21 PushV
	var_8_string = "burah_home@door1"; // 0x22 MovS
	var_9_bool = 1; // 0x23 MovB
	func_199(var_8_string, var_9_bool); // 0x24 NEW_2
	var_18_string = "house5_23"; // 0x26 PushS
	GetSceneByName(var_5_object, var_18_string); // 0x27 Func
	var_19_object = Obj(); var_20_object = Obj(); var_21_string = ""; var_22_string = ""; var_23_string = ""; // 0x29 PushV
	var_20_object = var_5_object; // 0x2a Mov
	var_21_string = "pt_k3q04_burah"; // 0x2b MovS
	var_22_string = "NPC_Burah"; // 0x2c MovS
	var_23_string = "k3q04_burah.xml"; // 0x2d MovS
	func_163(var_19_object, var_20_object, var_21_string, var_22_string, var_23_string); // 0x2e NEW_2
	var_1_object = var_19_object; // 0x2f TMov
	GetMainOutdoorScene(var_5_object); // 0x31 Func
	var_37_object = Obj(); var_38_object = Obj(); var_39_string = ""; var_40_string = ""; var_41_string = ""; // 0x33 PushV
	var_38_object = var_5_object; // 0x34 Mov
	var_39_string = "pt_d3q03_boy"; // 0x35 MovS
	var_40_string = "pers_littleboy"; // 0x36 MovS
	var_41_string = "k3q04_boy.xml"; // 0x37 MovS
	func_181(var_38_object, var_39_string, var_40_string, var_41_string); // 0x38 NEW_2
	var_2_object = var_37_object; // 0x39 TMov
	var_5_object = 0; // 0x3b SetNull
	goto Label_74; // 0x3c Jump
	
Label_74:
	return 2; // 0x4a Return
	
Label_61:
	var_55_string = "completed"; // 0x3d PushS
	var_56_bool = var_3_string == var_55_string; // 0x3e Eq
	if(var_56_bool == 0) goto Label_68; // 0x3f JumpB
	func_94(); // 0x41 NEW_2
	goto Label_74; // 0x43 Jump
	
Label_68:
	var_80_string = "fail"; // 0x44 PushS
	var_81_bool = var_3_string == var_80_string; // 0x45 Eq
	if(var_81_bool == 0) goto Label_74; // 0x46 JumpB
	func_86(); // 0x48 NEW_2
}


task_0_event_9(var_0_object, var_1_object, var_2_object, var_3_int, var_4_float)
{
	func_75(); // 0x9a NEW_2
	return 0; // 0x9c Return
}


main(var_0_object, var_1_object, var_2_object)
{
	var_3_object = Obj(); var_4_object = Obj(); // 0x0 PushV
	var_5_string = ""; var_6_bool = 0; // 0x1 PushV
	var_5_string = "icot_eva_door"; // 0x2 MovS
	var_6_bool = 1; // 0x3 MovB
	func_216(var_5_string, var_6_bool); // 0x4 NEW_2
	var_16_string = "k3q04"; // 0x6 PushS
	var_17_int = 1; // 0x7 PushI
	SetVariable(var_16_string, var_17_int); // 0x8 Func
	var_18_string = "dt_house2_08"; // 0xa PushS
	GetSceneByName(var_4_object, var_18_string); // 0xb Func
	var_19_object = Obj(); var_20_object = Obj(); var_21_string = ""; var_22_string = ""; var_23_string = ""; // 0xd PushV
	var_20_object = var_4_object; // 0xe Mov
	var_21_string = "pt_k3q04_danko"; // 0xf MovS
	var_22_string = "NPC_Bakalavr"; // 0x10 MovS
	var_23_string = "k3q04_danko.xml"; // 0x11 MovS
	func_163(var_19_object, var_20_object, var_21_string, var_22_string, var_23_string); // 0x12 NEW_2
	var_0_object = var_19_object; // 0x13 TMov
	var_37_int = 0; // 0x15 PushV
	var_37_int = 3; // 0x16 MovI
	func_133(var_37_int); // 0x17 NEW_2
	return 2; // 0x19 Return
}


func_163(var_19_object, var_20_object, var_21_string, var_22_string, var_23_string)
{
	var_24_bool = 0; var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_object = Obj(); var_28_bool = 0; var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_object = Obj(); // 0xa3 PushV
	GetLocator(var_21_string, var_28_bool, var_29_cvector, var_30_cvector); // 0xa4 ObjFunc
	var_32_bool = var_28_bool == 0; // 0xa6 Not
	if(var_32_bool == 0) goto Label_176; // 0xa7 JumpB
	var_33_string = "Locator "; // 0xa8 PushS
	var_34_int = var_33_string + var_21_string; // 0xa9 Add
	var_35_string = " doesn't exist"; // 0xaa PushS
	var_36_int = var_34_int + var_35_string; // 0xab Add
	Trace(var_36_int); // 0xac Func
	var_31_object = 0; // 0xae SetNull
	goto Label_178; // 0xaf Jump
	
Label_178:
	var_19_object = var_31_object; // 0xb2 Mov
	return 8; // 0xb3 Return
	
Label_176:
	AddActor(var_31_object, var_22_string, var_20_object, var_29_cvector, var_30_cvector, var_23_string); // 0xb0 Func
}


func_133(var_37_int)
{
	var_38_float = 0; var_39_float = 0; // 0x85 PushV
	GetGameTime(var_39_float); // 0x86 Func
	var_40_int = 24; // 0x88 PushI
	var_41_float = var_37_int * var_40_int; // 0x89 Mult
	var_42_bool = var_39_float >= var_41_float; // 0x8a GE
	if(var_42_bool == 0) goto Label_144; // 0x8b JumpB
	func_102(var_39_float); // 0x8d NEW_2
	goto Label_151; // 0x8f Jump
	
Label_151:
	return 2; // 0x97 Return
	
Label_144:
	var_63_int = 0; // 0x90 PushI
	var_64_int = 24; // 0x91 PushI
	var_65_float = var_37_int * var_64_int; // 0x92 Mult
	SetTimeEvent(var_63_int, var_65_float); // 0x93 Func
	Hold(); // 0x95 Func
}


func_102(var_0_object)
{
	EventDisable(26); // 0x66 EventDisable
	var_43_string = ""; var_44_bool = 0; // 0x67 PushV
	var_43_string = "icot_eva_door"; // 0x68 MovS
	var_44_bool = 0; // 0x69 MovB
	func_216(var_43_string, var_44_bool); // 0x6a NEW_2
	var_45_string = ""; var_46_bool = 0; // 0x6c PushV
	var_45_string = "burah_home@door1"; // 0x6d MovS
	var_46_bool = 0; // 0x6e MovB
	func_199(var_45_string, var_46_bool); // 0x6f NEW_2
	var_55_object = var_0_object; // 0x71 PushT
	if(var_55_object == 0) goto Label_118; // 0x72 JumpB
	var_56_string = "cleanup"; // 0x73 PushS
	Trigger(var_0_object, var_56_string); // 0x74 Func
	
Label_118:
	var_57_object = var_1_object; // 0x76 PushT
	if(var_57_object == 0) goto Label_123; // 0x77 JumpB
	var_58_string = "cleanup"; // 0x78 PushS
	Trigger(var_58_string, var_58_string); // 0x79 Func
	
Label_123:
	var_59_object = var_2_object; // 0x7b PushT
	if(var_59_object == 0) goto Label_127; // 0x7c JumpB
	Remove(); // 0x7d TObjFunc
	
Label_127:
	var_60_object = Obj(); // 0x7f PushV
	func_157(var_60_object); // 0x80 NEW_2
	RemoveActor(var_60_object); // 0x82 Func
	return 0; // 0x84 Return
}


func_199(var_45_string, var_46_bool)
{
	var_47_object = Obj(); var_48_object = Obj(); // 0xc7 PushV
	FindActor(var_48_object, var_45_string); // 0xc8 Func
	var_49_bool = var_48_object == 0; // 0xca Not
	if(var_49_bool == 0) goto Label_211; // 0xcb JumpB
	var_50_string = "Door "; // 0xcc PushS
	var_51_int = var_50_string + var_45_string; // 0xcd Add
	var_52_string = " not found"; // 0xce PushS
	var_53_int = var_51_int + var_52_string; // 0xcf Add
	Trace(var_53_int); // 0xd0 Func
	goto Label_214; // 0xd2 Jump
	
Label_214:
	return 2; // 0xd6 Return
	
Label_211:
	var_54_string = "locked"; // 0xd3 PushS
	SetProperty(var_54_string, var_46_bool); // 0xd4 ObjFunc
}


func_75()
{
	var_5_int = 0; var_6_int = 0; // 0x4b PushV
	var_7_string = "k3q04"; // 0x4c PushS
	GetVariable(var_7_string, var_6_int); // 0x4d Func
	var_8_int = 1000; // 0x4f PushI
	var_9_bool = var_6_int != var_8_int; // 0x50 Neq
	if(var_9_bool == 0) goto Label_85; // 0x51 JumpB
	func_86(); // 0x53 NEW_2
	
Label_85:
	return 2; // 0x55 Return
}


func_181(var_37_object, var_39_string, var_40_string, var_41_string)
{
	var_42_bool = 0; var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_object = Obj(); var_46_bool = 0; var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); var_49_object = Obj(); // 0xb5 PushV
	GetLocator(var_39_string, var_46_bool, var_47_cvector, var_48_cvector); // 0xb6 ObjFunc
	var_50_bool = var_46_bool == 0; // 0xb8 Not
	if(var_50_bool == 0) goto Label_194; // 0xb9 JumpB
	var_51_string = "Locator "; // 0xba PushS
	var_52_int = var_51_string + var_39_string; // 0xbb Add
	var_53_string = " doesn't exist"; // 0xbc PushS
	var_54_int = var_52_int + var_53_string; // 0xbd Add
	Trace(var_54_int); // 0xbe Func
	var_49_object = 0; // 0xc0 SetNull
	goto Label_196; // 0xc1 Jump
	
Label_196:
	var_37_object = var_49_object; // 0xc4 Mov
	return 8; // 0xc5 Return
	
Label_194:
	AddStationaryActor(var_49_object, var_47_cvector, var_48_cvector, var_40_string, var_41_string); // 0xc2 ObjFunc
}


func_86()
{
	var_10_string = "k3q04"; // 0x56 PushS
	var_11_int = -1; // 0x57 PushI
	SetVariable(var_10_string, var_11_int); // 0x58 Func
	func_102(var_6_int); // 0x5b NEW_2
	return 0; // 0x5d Return
}


func_216(var_5_string, var_6_bool)
{
	var_7_object = Obj(); var_8_object = Obj(); // 0xd8 PushV
	FindActor(var_8_object, var_5_string); // 0xd9 Func
	var_9_bool = var_8_object == 0; // 0xdb Not
	if(var_9_bool == 0) goto Label_228; // 0xdc JumpB
	var_10_string = "Door "; // 0xdd PushS
	var_11_int = var_10_string + var_5_string; // 0xde Add
	var_12_string = " not found"; // 0xdf PushS
	var_13_int = var_11_int + var_12_string; // 0xe0 Add
	Trace(var_13_int); // 0xe1 Func
	goto Label_235; // 0xe3 Jump
	
Label_235:
	return 2; // 0xeb Return
	
Label_228:
	var_14_bool = var_6_bool; // 0xe4 Push
	if(var_14_bool == 0) goto Label_232; // 0xe5 JumpB
	Close(); // 0xe6 ObjFunc
	
Label_232:
	var_15_string = "locked"; // 0xe8 PushS
	SetProperty(var_15_string, var_6_bool); // 0xe9 ObjFunc
}


func_157(var_60_object)
{
	var_61_object = Obj(); var_62_object = Obj(); // 0x9d PushV
	self(var_62_object); // 0x9e Func
	var_60_object = var_62_object; // 0xa0 Mov
	return 2; // 0xa1 Return
}


func_94()
{
	var_57_string = "k3q04"; // 0x5e PushS
	var_58_int = 1000; // 0x5f PushI
	SetVariable(var_57_string, var_58_int); // 0x60 Func
	func_102(var_5_object); // 0x63 NEW_2
	return 0; // 0x65 Return
}


