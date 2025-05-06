task_0_event_5()
{
	func_24(); // 0x1 NEW_2
	var_92_bool = 0; var_93_string = ""; var_94_string = ""; // 0x3 PushV
	var_93_string = "quest_k7_01"; // 0x4 MovS
	var_94_string = "theater_load"; // 0x5 MovS
	func_153(var_92_bool, var_93_string, var_94_string); // 0x6 NEW_2
	var_98_bool = 0; var_99_string = ""; var_100_string = ""; // 0x8 PushV
	var_99_string = "quest_k12_01"; // 0x9 MovS
	var_100_string = "theater_load"; // 0xa MovS
	func_153(var_98_bool, var_99_string, var_100_string); // 0xb NEW_2
	return 0; // 0xd Return
}


task_0_event_6()
{
	var_0_bool = 0; var_1_string = ""; var_2_string = ""; // 0xe PushV
	var_1_string = "quest_k12_01"; // 0xf MovS
	var_2_string = "theater_unload"; // 0x10 MovS
	func_153(var_0_bool, var_1_string, var_2_string); // 0x11 NEW_2
	return 0; // 0x13 Return
}


main()
{
	
Label_20:
	Hold(); // 0x14 Func
	goto Label_20; // 0x16 Jump
}


func_97(var_44_object)
{
	var_45_object = Obj(); var_46_object = Obj(); // 0x61 PushV
	var_47_string = "player"; // 0x62 PushS
	FindActor(var_46_object, var_47_string); // 0x63 Func
	var_44_object = var_46_object; // 0x65 Mov
	return 2; // 0x66 Return
}


func_165(var_22_int)
{
	var_23_float = 0; var_24_float = 0; // 0xa5 PushV
	GetGameTime(var_24_float); // 0xa6 Func
	var_25_int = 1; // 0xa8 PushI
	var_26_int = 0; // 0xa9 PushV
	var_27_int = 24; // 0xaa PushI
	var_26_int = var_24_float / var_24_float; // 0xab Div2
	var_22_int = var_25_int + var_26_int; // 0xac Add2
	return 2; // 0xad Return
}


func_104(var_48_object)
{
	var_49_bool = 0; var_50_int = 0; var_51_bool = 0; var_52_int = 0; // 0x68 PushV
	var_53_bool = var_48_object == 0; // 0x69 Not
	if(var_53_bool == 0) goto Label_108; // 0x6a JumpB
	return 4; // 0x6b Return
	
Label_108:
	var_54_string = "noaccess"; // 0x6c PushS
	HasProperty(var_54_string, var_51_bool); // 0x6d ObjFunc
	var_55_bool = var_51_bool; // 0x6f Push
	if(var_55_bool == 0) goto Label_122; // 0x70 JumpB
	var_56_string = "noaccess"; // 0x71 PushS
	GetProperty(var_56_string, var_52_int); // 0x72 ObjFunc
	var_57_string = "noaccess"; // 0x74 PushS
	var_58_int = 1; // 0x75 PushI
	var_59_int = var_52_int + var_58_int; // 0x76 Add
	SetProperty(var_57_string, var_59_int); // 0x77 ObjFunc
	goto Label_126; // 0x79 Jump
	
Label_126:
	return 4; // 0x7e Return
	
Label_122:
	var_60_string = "noaccess"; // 0x7a PushS
	var_61_int = 1; // 0x7b PushI
	SetProperty(var_60_string, var_61_int); // 0x7c ObjFunc
}


func_174(var_15_int)
{
	var_16_float = 0; var_17_float = 0; // 0xae PushV
	GetGameTime(var_17_float); // 0xaf Func
	var_18_int = 0; // 0xb1 PushV
	var_18_int = var_17_float; // 0xb2 Mov
	var_19_int = 24; // 0xb3 PushI
	var_15_int = var_18_int % var_19_int; // 0xb4 Mod2
	return 2; // 0xb5 Return
}


func_147(var_38_object)
{
	var_39_object = Obj(); var_40_object = Obj(); // 0x93 PushV
	self(var_40_object); // 0x94 Func
	var_38_object = var_40_object; // 0x96 Mov
	return 2; // 0x97 Return
}


func_182(var_8_bool)
{
	var_9_int = 0; var_10_int = 0; var_11_int = 0; var_12_int = 0; var_13_int = 0; var_14_int = 0; // 0xb6 PushV
	var_15_int = 0; // 0xb7 PushV
	func_174(var_15_int); // 0xb8 NEW_2
	var_12_int = var_15_int; // 0xb9 Mov
	var_20_int = 7; // 0xbb PushI
	var_21_bool = var_12_int < var_20_int; // 0xbc LT
	if(var_21_bool == 0) goto Label_204; // 0xbd JumpB
	var_22_int = 0; // 0xbe PushV
	func_165(var_22_int); // 0xbf NEW_2
	var_13_int = var_22_int; // 0xc0 Mov
	var_28_int = 1; // 0xc2 PushI
	var_29_bool = var_13_int > var_28_int; // 0xc3 GT
	if(var_29_bool == 0) goto Label_204; // 0xc4 JumpB
	var_30_string = "Performance"; // 0xc5 PushS
	var_31_int = var_30_string + var_13_int; // 0xc6 Add
	GetVariable(var_31_int, var_14_int); // 0xc7 Func
	var_32_int = 0; // 0xc9 PushI
	var_8_bool = var_14_int == var_32_int; // 0xca Eq2
	return 6; // 0xcb Return
	
Label_204:
	var_8_bool = 0; // 0xcc MovB
	return 6; // 0xcd Return
}


func_24()
{
	var_0_int = 0; var_1_int = 0; var_2_object = Obj(); var_3_object = Obj(); var_4_int = 0; var_5_int = 0; var_6_object = Obj(); var_7_object = Obj(); // 0x18 PushV
	var_8_bool = 0; // 0x19 PushV
	func_182(var_8_bool); // 0x1a NEW_2
	if(var_8_bool == 0) goto Label_96; // 0x1c JumpB
	var_33_int = 0; // 0x1d PushV
	func_165(var_33_int); // 0x1e NEW_2
	var_4_int = var_33_int; // 0x1f Mov
	var_34_string = "Performance"; // 0x21 PushS
	var_35_int = var_34_string + var_4_int; // 0x22 Add
	var_36_int = 1; // 0x23 PushI
	SetVariable(var_35_int, var_36_int); // 0x24 Func
	var_37_string = "cs_mask_klara"; // 0x26 PushS
	var_38_object = Obj(); // 0x27 PushV
	func_147(var_38_object); // 0x28 NEW_2
	var_41_cvector = CVector(0.0, 0.0, 0.0); // 0x2a PushVec
	var_42_cvector = CVector(0.0, 0.0, 1.0); // 0x2b PushVec
	var_43_string = "cs_mask_klara.xml"; // 0x2c PushS
	AddActor(var_6_object, var_37_string, var_38_object, var_41_cvector, var_42_cvector, var_43_string); // 0x2d Func
	ForceGeometryLoad(); // 0x2f ObjFunc
	var_44_object = Obj(); // 0x31 PushV
	func_97(var_44_object); // 0x32 NEW_2
	var_7_object = var_44_object; // 0x33 Mov
	var_48_object = Obj(); // 0x35 PushV
	var_48_object = var_7_object; // 0x36 Mov
	func_104(var_48_object); // 0x37 NEW_2
	var_62_string = "cs_mask_klara"; // 0x39 PushS
	var_63_int = 1; // 0x3a PushI
	var_64_int = var_4_int - var_63_int; // 0x3b Sub
	var_65_int = var_62_string + var_64_int; // 0x3c Add
	var_66_string = ".mot"; // 0x3d PushS
	var_67_int = var_65_int + var_66_string; // 0x3e Add
	CameraPlay(var_67_int); // 0x3f Func
	var_68_string = "nightmask"; // 0x41 PushS
	var_69_int = 1; // 0x42 PushI
	var_70_int = var_4_int - var_69_int; // 0x43 Sub
	var_71_int = var_68_string + var_70_int; // 0x44 Add
	var_72_string = ".ogg"; // 0x45 PushS
	var_73_int = var_71_int + var_72_string; // 0x46 Add
	PlayGlobalMusic(var_73_int); // 0x47 Func
	CameraWaitForPlayFinish(); // 0x49 Func
	var_74_string = ""; // 0x4b PushS
	PlayGlobalMusic(var_74_string); // 0x4c Func
	var_75_object = Obj(); // 0x4e PushV
	var_75_object = var_7_object; // 0x4f Mov
	func_127(var_75_object); // 0x50 NEW_2
	CameraSwitchToNormal(); // 0x52 Func
	RemoveActor(var_6_object); // 0x54 Func
	var_86_string = "NightMasks"; // 0x56 PushS
	var_87_int = 1; // 0x57 PushI
	var_88_int = var_4_int - var_87_int; // 0x58 Sub
	var_89_int = var_86_string + var_88_int; // 0x59 Add
	var_90_string = ".wmv"; // 0x5a PushS
	var_91_int = var_89_int + var_90_string; // 0x5b Add
	PlayMovie(var_91_int); // 0x5c Func
	var_7_object = 0; // 0x5e SetNull
	var_6_object = 0; // 0x5f SetNull
	
Label_96:
	return 8; // 0x60 Return
}


func_153(var_0_bool, var_1_string, var_2_string)
{
	var_3_object = Obj(); var_4_object = Obj(); // 0x99 PushV
	FindActor(var_4_object, var_1_string); // 0x9a Func
	var_5_bool = var_4_object == 0; // 0x9c NullEq
	if(var_5_bool == 0) goto Label_160; // 0x9d JumpB
	var_0_bool = 0; // 0x9e MovB
	return 2; // 0x9f Return
	
Label_160:
	Trigger(var_4_object, var_2_string); // 0xa0 Func
	var_0_bool = 1; // 0xa2 MovB
	return 2; // 0xa3 Return
}


func_127(var_75_object)
{
	var_76_int = 0; var_77_int = 0; // 0x7f PushV
	var_78_bool = var_75_object == 0; // 0x80 Not
	if(var_78_bool == 0) goto Label_131; // 0x81 JumpB
	return 2; // 0x82 Return
	
Label_131:
	var_79_string = "noaccess"; // 0x83 PushS
	GetProperty(var_79_string, var_77_int); // 0x84 ObjFunc
	var_80_int = 1; // 0x86 PushI
	var_81_bool = var_77_int > var_80_int; // 0x87 GT
	if(var_81_bool == 0) goto Label_143; // 0x88 JumpB
	var_82_string = "noaccess"; // 0x89 PushS
	var_83_int = 1; // 0x8a PushI
	var_84_int = var_77_int - var_83_int; // 0x8b Sub
	SetProperty(var_82_string, var_84_int); // 0x8c ObjFunc
	goto Label_146; // 0x8e Jump
	
Label_146:
	return 2; // 0x92 Return
	
Label_143:
	var_85_string = "noaccess"; // 0x8f PushS
	RemoveProperty(var_85_string); // 0x90 ObjFunc
}


