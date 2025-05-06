task_0_event_5()
{
	func_19(); // 0x1 NEW_2
	var_92_bool = 0; var_93_string = ""; var_94_string = ""; // 0x3 PushV
	var_93_string = "quest_d12_01"; // 0x4 MovS
	var_94_string = "theater_load"; // 0x5 MovS
	func_148(var_92_bool, var_93_string, var_94_string); // 0x6 NEW_2
	return 0; // 0x8 Return
}


task_0_event_6()
{
	var_0_bool = 0; var_1_string = ""; var_2_string = ""; // 0x9 PushV
	var_1_string = "quest_d12_01"; // 0xa MovS
	var_2_string = "theater_unload"; // 0xb MovS
	func_148(var_0_bool, var_1_string, var_2_string); // 0xc NEW_2
	return 0; // 0xe Return
}


main()
{
	
Label_15:
	Hold(); // 0xf Func
	goto Label_15; // 0x11 Jump
}


func_160(var_22_int)
{
	var_23_float = 0; var_24_float = 0; // 0xa0 PushV
	GetGameTime(var_24_float); // 0xa1 Func
	var_25_int = 1; // 0xa3 PushI
	var_26_int = 0; // 0xa4 PushV
	var_27_int = 24; // 0xa5 PushI
	var_26_int = var_24_float / var_24_float; // 0xa6 Div2
	var_22_int = var_25_int + var_26_int; // 0xa7 Add2
	return 2; // 0xa8 Return
}


func_99(var_48_object)
{
	var_49_bool = 0; var_50_int = 0; var_51_bool = 0; var_52_int = 0; // 0x63 PushV
	var_53_bool = var_48_object == 0; // 0x64 Not
	if(var_53_bool == 0) goto Label_103; // 0x65 JumpB
	return 4; // 0x66 Return
	
Label_103:
	var_54_string = "noaccess"; // 0x67 PushS
	HasProperty(var_54_string, var_51_bool); // 0x68 ObjFunc
	var_55_bool = var_51_bool; // 0x6a Push
	if(var_55_bool == 0) goto Label_117; // 0x6b JumpB
	var_56_string = "noaccess"; // 0x6c PushS
	GetProperty(var_56_string, var_52_int); // 0x6d ObjFunc
	var_57_string = "noaccess"; // 0x6f PushS
	var_58_int = 1; // 0x70 PushI
	var_59_int = var_52_int + var_58_int; // 0x71 Add
	SetProperty(var_57_string, var_59_int); // 0x72 ObjFunc
	goto Label_121; // 0x74 Jump
	
Label_121:
	return 4; // 0x79 Return
	
Label_117:
	var_60_string = "noaccess"; // 0x75 PushS
	var_61_int = 1; // 0x76 PushI
	SetProperty(var_60_string, var_61_int); // 0x77 ObjFunc
}


func_169(var_15_int)
{
	var_16_float = 0; var_17_float = 0; // 0xa9 PushV
	GetGameTime(var_17_float); // 0xaa Func
	var_18_int = 0; // 0xac PushV
	var_18_int = var_17_float; // 0xad Mov
	var_19_int = 24; // 0xae PushI
	var_15_int = var_18_int % var_19_int; // 0xaf Mod2
	return 2; // 0xb0 Return
}


func_142(var_38_object)
{
	var_39_object = Obj(); var_40_object = Obj(); // 0x8e PushV
	self(var_40_object); // 0x8f Func
	var_38_object = var_40_object; // 0x91 Mov
	return 2; // 0x92 Return
}


func_177(var_8_bool)
{
	var_9_int = 0; var_10_int = 0; var_11_int = 0; var_12_int = 0; var_13_int = 0; var_14_int = 0; // 0xb1 PushV
	var_15_int = 0; // 0xb2 PushV
	func_169(var_15_int); // 0xb3 NEW_2
	var_12_int = var_15_int; // 0xb4 Mov
	var_20_int = 7; // 0xb6 PushI
	var_21_bool = var_12_int < var_20_int; // 0xb7 LT
	if(var_21_bool == 0) goto Label_199; // 0xb8 JumpB
	var_22_int = 0; // 0xb9 PushV
	func_160(var_22_int); // 0xba NEW_2
	var_13_int = var_22_int; // 0xbb Mov
	var_28_int = 1; // 0xbd PushI
	var_29_bool = var_13_int > var_28_int; // 0xbe GT
	if(var_29_bool == 0) goto Label_199; // 0xbf JumpB
	var_30_string = "Performance"; // 0xc0 PushS
	var_31_int = var_30_string + var_13_int; // 0xc1 Add
	GetVariable(var_31_int, var_14_int); // 0xc2 Func
	var_32_int = 0; // 0xc4 PushI
	var_8_bool = var_14_int == var_32_int; // 0xc5 Eq2
	return 6; // 0xc6 Return
	
Label_199:
	var_8_bool = 0; // 0xc7 MovB
	return 6; // 0xc8 Return
}


func_19()
{
	var_0_int = 0; var_1_int = 0; var_2_object = Obj(); var_3_object = Obj(); var_4_int = 0; var_5_int = 0; var_6_object = Obj(); var_7_object = Obj(); // 0x13 PushV
	var_8_bool = 0; // 0x14 PushV
	func_177(var_8_bool); // 0x15 NEW_2
	if(var_8_bool == 0) goto Label_91; // 0x17 JumpB
	var_33_int = 0; // 0x18 PushV
	func_160(var_33_int); // 0x19 NEW_2
	var_4_int = var_33_int; // 0x1a Mov
	var_34_string = "Performance"; // 0x1c PushS
	var_35_int = var_34_string + var_4_int; // 0x1d Add
	var_36_int = 1; // 0x1e PushI
	SetVariable(var_35_int, var_36_int); // 0x1f Func
	var_37_string = "cs_mask_danko"; // 0x21 PushS
	var_38_object = Obj(); // 0x22 PushV
	func_142(var_38_object); // 0x23 NEW_2
	var_41_cvector = CVector(0.0, 0.0, 0.0); // 0x25 PushVec
	var_42_cvector = CVector(0.0, 0.0, 1.0); // 0x26 PushVec
	var_43_string = "cs_mask_danko.xml"; // 0x27 PushS
	AddActor(var_6_object, var_37_string, var_38_object, var_41_cvector, var_42_cvector, var_43_string); // 0x28 Func
	ForceGeometryLoad(); // 0x2a ObjFunc
	var_44_object = Obj(); // 0x2c PushV
	func_92(var_44_object); // 0x2d NEW_2
	var_7_object = var_44_object; // 0x2e Mov
	var_48_object = Obj(); // 0x30 PushV
	var_48_object = var_7_object; // 0x31 Mov
	func_99(var_48_object); // 0x32 NEW_2
	var_62_string = "cs_mask_danko"; // 0x34 PushS
	var_63_int = 1; // 0x35 PushI
	var_64_int = var_4_int - var_63_int; // 0x36 Sub
	var_65_int = var_62_string + var_64_int; // 0x37 Add
	var_66_string = ".mot"; // 0x38 PushS
	var_67_int = var_65_int + var_66_string; // 0x39 Add
	CameraPlay(var_67_int); // 0x3a Func
	var_68_string = "nightmask"; // 0x3c PushS
	var_69_int = 1; // 0x3d PushI
	var_70_int = var_4_int - var_69_int; // 0x3e Sub
	var_71_int = var_68_string + var_70_int; // 0x3f Add
	var_72_string = ".ogg"; // 0x40 PushS
	var_73_int = var_71_int + var_72_string; // 0x41 Add
	PlayGlobalMusic(var_73_int); // 0x42 Func
	CameraWaitForPlayFinish(); // 0x44 Func
	var_74_string = ""; // 0x46 PushS
	PlayGlobalMusic(var_74_string); // 0x47 Func
	var_75_object = Obj(); // 0x49 PushV
	var_75_object = var_7_object; // 0x4a Mov
	func_122(var_75_object); // 0x4b NEW_2
	CameraSwitchToNormal(); // 0x4d Func
	RemoveActor(var_6_object); // 0x4f Func
	var_86_string = "NightMasks"; // 0x51 PushS
	var_87_int = 1; // 0x52 PushI
	var_88_int = var_4_int - var_87_int; // 0x53 Sub
	var_89_int = var_86_string + var_88_int; // 0x54 Add
	var_90_string = ".wmv"; // 0x55 PushS
	var_91_int = var_89_int + var_90_string; // 0x56 Add
	PlayMovie(var_91_int); // 0x57 Func
	var_7_object = 0; // 0x59 SetNull
	var_6_object = 0; // 0x5a SetNull
	
Label_91:
	return 8; // 0x5b Return
}


func_148(var_0_bool, var_1_string, var_2_string)
{
	var_3_object = Obj(); var_4_object = Obj(); // 0x94 PushV
	FindActor(var_4_object, var_1_string); // 0x95 Func
	var_5_bool = var_4_object == 0; // 0x97 NullEq
	if(var_5_bool == 0) goto Label_155; // 0x98 JumpB
	var_0_bool = 0; // 0x99 MovB
	return 2; // 0x9a Return
	
Label_155:
	Trigger(var_4_object, var_2_string); // 0x9b Func
	var_0_bool = 1; // 0x9d MovB
	return 2; // 0x9e Return
}


func_122(var_75_object)
{
	var_76_int = 0; var_77_int = 0; // 0x7a PushV
	var_78_bool = var_75_object == 0; // 0x7b Not
	if(var_78_bool == 0) goto Label_126; // 0x7c JumpB
	return 2; // 0x7d Return
	
Label_126:
	var_79_string = "noaccess"; // 0x7e PushS
	GetProperty(var_79_string, var_77_int); // 0x7f ObjFunc
	var_80_int = 1; // 0x81 PushI
	var_81_bool = var_77_int > var_80_int; // 0x82 GT
	if(var_81_bool == 0) goto Label_138; // 0x83 JumpB
	var_82_string = "noaccess"; // 0x84 PushS
	var_83_int = 1; // 0x85 PushI
	var_84_int = var_77_int - var_83_int; // 0x86 Sub
	SetProperty(var_82_string, var_84_int); // 0x87 ObjFunc
	goto Label_141; // 0x89 Jump
	
Label_141:
	return 2; // 0x8d Return
	
Label_138:
	var_85_string = "noaccess"; // 0x8a PushS
	RemoveProperty(var_85_string); // 0x8b ObjFunc
}


func_92(var_44_object)
{
	var_45_object = Obj(); var_46_object = Obj(); // 0x5c PushV
	var_47_string = "player"; // 0x5d PushS
	FindActor(var_46_object, var_47_string); // 0x5e Func
	var_44_object = var_46_object; // 0x60 Mov
	return 2; // 0x61 Return
}


