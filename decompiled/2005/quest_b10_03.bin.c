task_0_event_26(var_0_object, var_1_object, var_2_string)
{
	var_3_object = Obj(); var_4_bool = 0; var_5_cvector = CVector(0,0,0); var_6_cvector = CVector(0,0,0); var_7_int = 0; var_8_string = ""; var_9_object = Obj(); var_10_object = Obj(); var_11_object = Obj(); var_12_object = Obj(); var_13_bool = 0; var_14_cvector = CVector(0,0,0); var_15_cvector = CVector(0,0,0); var_16_int = 0; var_17_string = ""; var_18_object = Obj(); var_19_object = Obj(); var_20_object = Obj(); // 0xa PushV
	Trace(var_2_string); // 0xb Func
	var_21_string = "place_doll"; // 0xd PushS
	var_22_bool = var_2_string == var_21_string; // 0xe Eq
	if(var_22_bool == 0) goto Label_79; // 0xf JumpB
	GetMainOutdoorScene(var_12_object); // 0x10 Func
	var_16_int = 0; // 0x12 MovI
	
Label_19:
	var_23_string = "pt_b10q03_plant"; // 0x13 PushS
	var_24_int = 1; // 0x14 PushI
	var_25_int = var_16_int + var_24_int; // 0x15 Add
	var_26_int = var_23_string + var_25_int; // 0x16 Add
	GetLocator(var_26_int, var_13_bool, var_14_cvector, var_15_cvector); // 0x17 ObjFunc
	var_27_bool = var_13_bool == 0; // 0x19 Not
	if(var_27_bool == 0) goto Label_28; // 0x1a JumpB
	goto Label_60; // 0x1b Jump
	
Label_60:
	var_28_string = "Total b10q03 plants: "; // 0x3c PushS
	var_29_int = var_28_string + var_16_int; // 0x3d Add
	Trace(var_29_int); // 0x3e Func
	var_30_string = "pt_b10q03_toy"; // 0x40 PushS
	GetLocator(var_30_string, var_13_bool, var_14_cvector, var_15_cvector); // 0x41 ObjFunc
	var_31_bool = var_13_bool; // 0x43 Push
	if(var_31_bool == 0) goto Label_74; // 0x44 JumpB
	var_32_string = "scripted"; // 0x45 PushS
	var_33_string = "b10q03_toy_burah.xml"; // 0x46 PushS
	AddStationaryActorByType(var_0_object, var_14_cvector, var_15_cvector, var_32_string, var_33_string); // 0x47 ObjFunc
	goto Label_77; // 0x49 Jump
	
Label_77:
	var_12_object = 0; // 0x4d SetNull
	goto Label_111; // 0x4e Jump
	
Label_111:
	return 18; // 0x6f Return
	
Label_74:
	var_34_string = "pt_b10q03_toy locator not found"; // 0x4a PushS
	Trace(var_34_string); // 0x4b Func
	
Label_28:
	var_35_int = 1; // 0x1c PushI
	var_36_int = 1; // 0x1d PushI
	var_37_int = 1; // 0x1e PushI
	var_38_int = 2; // 0x1f PushI
	var_39_int = 2; // 0x20 PushI
	var_40_string = "grass_black_tvir"; // 0x21 PushS
	var_41_string = "grass_blood_tvir"; // 0x22 PushS
	var_42_string = "grass_brown_tvir"; // 0x23 PushS
	var_43_string = "grass_savyur"; // 0x24 PushS
	var_44_string = "grass_white_plet"; // 0x25 PushS
	RandOneOf(var_17_string, var_35_int, var_36_int, var_37_int, var_38_int, var_39_int, var_40_string, var_41_string, var_42_string, var_43_string, var_44_string); // 0x26 Func
	var_45_string = "scripted"; // 0x28 PushS
	var_46_string = "item_"; // 0x29 PushS
	var_47_int = var_46_string + var_17_string; // 0x2a Add
	var_48_string = "_stat.xml"; // 0x2b PushS
	var_49_int = var_47_int + var_48_string; // 0x2c Add
	AddStationaryActorByType(var_18_object, var_14_cvector, var_15_cvector, var_45_string, var_49_int); // 0x2d ObjFunc
	var_50_string = "New b10q03 plant: ""; // 0x2f PushS
	var_51_int = var_50_string + var_17_string; // 0x30 Add
	var_52_string = "" at location #"; // 0x31 PushS
	var_53_int = var_51_int + var_52_string; // 0x32 Add
	var_54_int = 1; // 0x33 PushI
	var_55_int = var_16_int + var_54_int; // 0x34 Add
	var_56_int = var_53_int + var_55_int; // 0x35 Add
	Trace(var_56_int); // 0x36 Func
	var_18_object = 0; // 0x38 SetNull
	var_57_int = 1; // 0x39 PushI
	var_16_int = var_16_int + var_57_int; // 0x3a Add2
	goto Label_19; // 0x3b Jump
	
Label_79:
	var_58_string = "place_blood"; // 0x4f PushS
	var_59_bool = var_2_string == var_58_string; // 0x50 Eq
	if(var_59_bool == 0) goto Label_98; // 0x51 JumpB
	GetMainOutdoorScene(var_19_object); // 0x52 Func
	var_60_string = "b10q03_blood"; // 0x54 PushS
	var_61_cvector = CVector(0.0, 0.0, 0.0); // 0x55 PushVec
	var_62_cvector = CVector(0.0, 0.0, 1.0); // 0x56 PushVec
	AddActor(var_20_object, var_60_string, var_19_object, var_61_cvector, var_62_cvector); // 0x57 Func
	var_63_string = "b10q03_blood_sel"; // 0x59 PushS
	var_64_cvector = CVector(0.0, 0.0, 0.0); // 0x5a PushVec
	var_65_cvector = CVector(0.0, 0.0, 1.0); // 0x5b PushVec
	var_66_string = "b10q03_blood.xml"; // 0x5c PushS
	AddActor(var_66_string, var_63_string, var_19_object, var_64_cvector, var_65_cvector, var_66_string); // 0x5d Func
	var_20_object = 0; // 0x5f SetNull
	var_19_object = 0; // 0x60 SetNull
	goto Label_111; // 0x61 Jump
	
Label_98:
	var_67_string = "fail"; // 0x62 PushS
	var_68_bool = var_2_string == var_67_string; // 0x63 Eq
	if(var_68_bool == 0) goto Label_105; // 0x64 JumpB
	func_123(); // 0x66 NEW_2
	goto Label_111; // 0x68 Jump
	
Label_105:
	var_75_string = "completed"; // 0x69 PushS
	var_76_bool = var_2_string == var_75_string; // 0x6a Eq
	if(var_76_bool == 0) goto Label_111; // 0x6b JumpB
	func_131(); // 0x6d NEW_2
}


task_0_event_9(var_0_object, var_1_object, var_2_int, var_3_float)
{
	func_112(); // 0xab NEW_2
	return 0; // 0xad Return
}


main(var_0_object, var_1_object)
{
	var_2_string = ""; var_3_bool = 0; // 0x0 PushV
	var_2_string = "vagon_mishka@door1"; // 0x1 MovS
	var_3_bool = 0; // 0x2 MovB
	func_180(var_2_string, var_3_bool); // 0x3 NEW_2
	var_12_int = 0; // 0x5 PushV
	var_12_int = 10; // 0x6 MovI
	func_150(var_12_int); // 0x7 NEW_2
	return 0; // 0x9 Return
}


func_131()
{
	var_77_string = "b10q03"; // 0x83 PushS
	var_78_int = 1000; // 0x84 PushI
	SetVariable(var_77_string, var_78_int); // 0x85 Func
	func_139(); // 0x88 NEW_2
	return 0; // 0x8a Return
}


func_139()
{
	EventDisable(26); // 0x8b EventDisable
	var_18_object = var_0_object; // 0x8c PushT
	if(var_18_object == 0) goto Label_144; // 0x8d JumpB
	Remove(); // 0x8e TObjFunc
	
Label_144:
	var_19_object = Obj(); // 0x90 PushV
	func_174(var_19_object); // 0x91 NEW_2
	RemoveActor(var_19_object); // 0x93 Func
	return 0; // 0x95 Return
}


func_174(var_19_object)
{
	var_20_object = Obj(); var_21_object = Obj(); // 0xae PushV
	self(var_21_object); // 0xaf Func
	var_19_object = var_21_object; // 0xb1 Mov
	return 2; // 0xb2 Return
}


func_112()
{
	var_4_int = 0; var_5_int = 0; // 0x70 PushV
	var_6_string = "b10q03"; // 0x71 PushS
	GetVariable(var_6_string, var_5_int); // 0x72 Func
	var_7_int = 1000; // 0x74 PushI
	var_8_bool = var_5_int != var_7_int; // 0x75 Neq
	if(var_8_bool == 0) goto Label_122; // 0x76 JumpB
	func_123(); // 0x78 NEW_2
	
Label_122:
	return 2; // 0x7a Return
}


func_180(var_2_string, var_3_bool)
{
	var_4_object = Obj(); var_5_object = Obj(); // 0xb4 PushV
	FindActor(var_5_object, var_2_string); // 0xb5 Func
	var_6_bool = var_5_object == 0; // 0xb7 Not
	if(var_6_bool == 0) goto Label_192; // 0xb8 JumpB
	var_7_string = "Door "; // 0xb9 PushS
	var_8_int = var_7_string + var_2_string; // 0xba Add
	var_9_string = " not found"; // 0xbb PushS
	var_10_int = var_8_int + var_9_string; // 0xbc Add
	Trace(var_10_int); // 0xbd Func
	goto Label_195; // 0xbf Jump
	
Label_195:
	return 2; // 0xc3 Return
	
Label_192:
	var_11_string = "locked"; // 0xc0 PushS
	SetProperty(var_11_string, var_3_bool); // 0xc1 ObjFunc
}


func_150(var_12_int)
{
	var_13_float = 0; var_14_float = 0; // 0x96 PushV
	GetGameTime(var_14_float); // 0x97 Func
	var_15_int = 24; // 0x99 PushI
	var_16_float = var_12_int * var_15_int; // 0x9a Mult
	var_17_bool = var_14_float >= var_16_float; // 0x9b GE
	if(var_17_bool == 0) goto Label_161; // 0x9c JumpB
	func_139(); // 0x9e NEW_2
	goto Label_168; // 0xa0 Jump
	
Label_168:
	return 2; // 0xa8 Return
	
Label_161:
	var_22_int = 0; // 0xa1 PushI
	var_23_int = 24; // 0xa2 PushI
	var_24_float = var_12_int * var_23_int; // 0xa3 Mult
	SetTimeEvent(var_22_int, var_24_float); // 0xa4 Func
	Hold(); // 0xa6 Func
}


func_123()
{
	var_9_string = "b10q03"; // 0x7b PushS
	var_10_int = -1; // 0x7c PushI
	SetVariable(var_9_string, var_10_int); // 0x7d Func
	func_139(); // 0x80 NEW_2
	return 0; // 0x82 Return
}


