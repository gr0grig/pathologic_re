task_0_event_26(var_0_object, var_1_object, var_2_object, var_3_string)
{
	var_4_object = Obj(); var_5_object = Obj(); // 0x4 PushV
	Trace(var_3_string); // 0x5 Func
	var_6_string = "place_birdmasks"; // 0x7 PushS
	var_7_bool = var_3_string == var_6_string; // 0x8 Eq
	if(var_7_bool == 0) goto Label_38; // 0x9 JumpB
	GetMainOutdoorScene(var_5_object); // 0xa Func
	var_8_object = Obj(); var_9_object = Obj(); var_10_string = ""; var_11_string = ""; var_12_string = ""; // 0xc PushV
	var_9_object = var_5_object; // 0xd Mov
	var_10_string = "pt_d7q01_ubirdmask"; // 0xe MovS
	var_11_string = "pers_birdmask"; // 0xf MovS
	var_12_string = "d7q01_birdmask1.xml"; // 0x10 MovS
	func_124(var_9_object, var_10_string, var_11_string, var_12_string); // 0x11 Call
	var_0_object = var_8_object; // 0x12 TMov
	var_26_object = Obj(); var_27_object = Obj(); var_28_string = ""; var_29_string = ""; var_30_string = ""; // 0x14 PushV
	var_27_object = var_5_object; // 0x15 Mov
	var_28_string = "pt_d7q01_dbirdmask"; // 0x16 MovS
	var_29_string = "pers_birdmask"; // 0x17 MovS
	var_30_string = "d7q01_birdmask2.xml"; // 0x18 MovS
	func_124(var_27_object, var_28_string, var_29_string, var_30_string); // 0x19 Call
	var_1_object = var_26_object; // 0x1a TMov
	var_31_object = Obj(); var_32_object = Obj(); var_33_string = ""; var_34_string = ""; var_35_string = ""; // 0x1c PushV
	var_32_object = var_5_object; // 0x1d Mov
	var_33_string = "pt_d7q01_mbirdmask"; // 0x1e MovS
	var_34_string = "pers_birdmask"; // 0x1f MovS
	var_35_string = "d7q01_birdmask3.xml"; // 0x20 MovS
	func_124(var_32_object, var_33_string, var_34_string, var_35_string); // 0x21 Call
	var_2_object = var_31_object; // 0x22 TMov
	var_5_object = 0; // 0x24 SetNull
	goto Label_82; // 0x25 Jump
	
Label_82:
	return 2; // 0x52 Return
	
Label_38:
	var_36_string = "remove_birdmasks"; // 0x26 PushS
	var_37_bool = var_3_string == var_36_string; // 0x27 Eq
	if(var_37_bool == 0) goto Label_45; // 0x28 JumpB
	func_99(); // 0x2a Call
	goto Label_82; // 0x2c Jump
	
Label_45:
	var_41_string = "kill_player"; // 0x2d PushS
	var_42_bool = var_3_string == var_41_string; // 0x2e Eq
	if(var_42_bool == 0) goto Label_54; // 0x2f JumpB
	var_43_bool = 0; var_44_string = ""; var_45_string = ""; // 0x30 PushV
	var_44_string = "player"; // 0x31 MovS
	var_45_string = "die"; // 0x32 MovS
	func_142(var_43_bool, var_44_string, var_45_string); // 0x33 Call
	goto Label_82; // 0x35 Jump
	
Label_54:
	var_49_string = "sobor_teleport"; // 0x36 PushS
	var_50_bool = var_3_string == var_49_string; // 0x37 Eq
	if(var_50_bool == 0) goto Label_69; // 0x38 JumpB
	var_51_object = Obj(); var_52_string = ""; var_53_string = ""; // 0x39 PushV
	var_54_object = Obj(); // 0x3a PushV
	func_117(var_54_object); // 0x3b Call
	var_51_object = var_54_object; // 0x3c Mov
	var_52_string = "sobor"; // 0x3e MovS
	var_53_string = "pt_d7q01_birth"; // 0x3f MovS
	func_154(var_51_object, var_52_string, var_53_string); // 0x40 Call
	sync(); // 0x42 Func
	goto Label_82; // 0x44 Jump
	
Label_69:
	var_75_string = "fail"; // 0x45 PushS
	var_76_bool = var_3_string == var_75_string; // 0x46 Eq
	if(var_76_bool == 0) goto Label_76; // 0x47 JumpB
	func_83(); // 0x49 Call
	goto Label_82; // 0x4b Jump
	
Label_76:
	var_79_string = "completed"; // 0x4c PushS
	var_80_bool = var_3_string == var_79_string; // 0x4d Eq
	if(var_80_bool == 0) goto Label_82; // 0x4e JumpB
	func_91(); // 0x50 Call
}


main(var_0_object, var_1_object, var_2_object)
{
	
Label_0:
	Hold(); // 0x0 Func
	goto Label_0; // 0x2 Jump
}


func_99()
{
	var_38_object = var_0_object; // 0x63 PushT
	if(var_38_object == 0) goto Label_103; // 0x64 JumpB
	Remove(); // 0x65 TObjFunc
	
Label_103:
	var_39_object = var_1_object; // 0x67 PushT
	if(var_39_object == 0) goto Label_107; // 0x68 JumpB
	Remove(); // 0x69 TObjFunc
	
Label_107:
	var_40_object = var_2_object; // 0x6b PushT
	if(var_40_object == 0) goto Label_111; // 0x6c JumpB
	Remove(); // 0x6d TObjFunc
	
Label_111:
	return 0; // 0x6f Return
}


func_142(var_43_bool, var_44_string, var_45_string)
{
	var_46_object = Obj(); var_47_object = Obj(); // 0x8e PushV
	FindActor(var_47_object, var_44_string); // 0x8f Func
	var_48_bool = var_47_object == 0; // 0x91 NullEq
	if(var_48_bool == 0) goto Label_149; // 0x92 JumpB
	var_43_bool = 0; // 0x93 MovB
	return 2; // 0x94 Return
	
Label_149:
	Trigger(var_47_object, var_45_string); // 0x95 Func
	var_43_bool = 1; // 0x97 MovB
	return 2; // 0x98 Return
}


func_112()
{
	EventDisable(26); // 0x70 EventDisable
	func_99(); // 0x72 Call
	return 0; // 0x74 Return
}


func_83()
{
	var_77_string = "d7q01"; // 0x53 PushS
	var_78_int = -1; // 0x54 PushI
	SetVariable(var_77_string, var_78_int); // 0x55 Func
	func_112(); // 0x58 Call
	return 0; // 0x5a Return
}


func_117(var_54_object)
{
	var_55_object = Obj(); var_56_object = Obj(); // 0x75 PushV
	var_57_string = "player"; // 0x76 PushS
	FindActor(var_56_object, var_57_string); // 0x77 Func
	var_54_object = var_56_object; // 0x79 Mov
	return 2; // 0x7a Return
}


func_154(var_51_object, var_52_string, var_53_string)
{
	var_58_object = Obj(); var_59_bool = 0; var_60_cvector = CVector(0,0,0); var_61_cvector = CVector(0,0,0); var_62_object = Obj(); var_63_bool = 0; var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); // 0x9a PushV
	var_66_bool = var_51_object == 0; // 0x9b Not
	if(var_66_bool == 0) goto Label_158; // 0x9c JumpB
	return 8; // 0x9d Return
	
Label_158:
	GetSceneByName(var_62_object, var_52_string); // 0x9e Func
	GetLocator(var_53_string, var_63_bool, var_64_cvector, var_65_cvector); // 0xa0 ObjFunc
	var_67_bool = var_63_bool == 0; // 0xa2 Not
	if(var_67_bool == 0) goto Label_174; // 0xa3 JumpB
	var_68_string = "Teleport location '"; // 0xa4 PushS
	var_69_int = var_68_string + var_53_string; // 0xa5 Add
	var_70_string = "' not found in scene '"; // 0xa6 PushS
	var_71_int = var_69_int + var_70_string; // 0xa7 Add
	var_72_int = var_71_int + var_52_string; // 0xa8 Add
	var_73_string = "'"; // 0xa9 PushS
	var_74_int = var_72_int + var_73_string; // 0xaa Add
	Trace(var_74_int); // 0xab Func
	goto Label_176; // 0xad Jump
	
Label_176:
	return 8; // 0xb0 Return
	
Label_174:
	Teleport(var_51_object, var_62_object, var_64_cvector, var_65_cvector); // 0xae Func
}


func_91()
{
	var_81_string = "d7q01"; // 0x5b PushS
	var_82_int = 1000; // 0x5c PushI
	SetVariable(var_81_string, var_82_int); // 0x5d Func
	func_112(); // 0x60 Call
	return 0; // 0x62 Return
}


func_124(var_8_object, var_10_string, var_11_string, var_12_string)
{
	var_13_bool = 0; var_14_cvector = CVector(0,0,0); var_15_cvector = CVector(0,0,0); var_16_object = Obj(); var_17_bool = 0; var_18_cvector = CVector(0,0,0); var_19_cvector = CVector(0,0,0); var_20_object = Obj(); // 0x7c PushV
	GetLocator(var_10_string, var_17_bool, var_18_cvector, var_19_cvector); // 0x7d ObjFunc
	var_21_bool = var_17_bool == 0; // 0x7f Not
	if(var_21_bool == 0) goto Label_137; // 0x80 JumpB
	var_22_string = "Locator "; // 0x81 PushS
	var_23_int = var_22_string + var_10_string; // 0x82 Add
	var_24_string = " doesn't exist"; // 0x83 PushS
	var_25_int = var_23_int + var_24_string; // 0x84 Add
	Trace(var_25_int); // 0x85 Func
	var_20_object = 0; // 0x87 SetNull
	goto Label_139; // 0x88 Jump
	
Label_139:
	var_8_object = var_20_object; // 0x8b Mov
	return 8; // 0x8c Return
	
Label_137:
	AddStationaryActor(var_20_object, var_18_cvector, var_19_cvector, var_11_string, var_12_string); // 0x89 ObjFunc
}


