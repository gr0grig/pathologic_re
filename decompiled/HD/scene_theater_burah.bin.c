task_0_event_5()
{
	func_19(); // 0x1 NEW_2
	var_111_bool = 0; var_112_string = ""; var_113_string = ""; // 0x3 PushV
	var_112_string = "quest_b12_01"; // 0x4 MovS
	var_113_string = "theater_load"; // 0x5 MovS
	func_181(var_111_bool, var_112_string, var_113_string); // 0x6 NEW_2
	return 0; // 0x8 Return
}


task_0_event_6()
{
	var_0_bool = 0; var_1_string = ""; var_2_string = ""; // 0x9 PushV
	var_1_string = "quest_b12_01"; // 0xa MovS
	var_2_string = "theater_unload"; // 0xb MovS
	func_181(var_0_bool, var_1_string, var_2_string); // 0xc NEW_2
	return 0; // 0xe Return
}


main()
{
	
Label_15:
	Hold(); // 0xf Func
	goto Label_15; // 0x11 Jump
}


func_193(var_26_int)
{
	var_27_float = 0; var_28_float = 0; // 0xc1 PushV
	GetGameTime(var_28_float); // 0xc2 Func
	var_29_int = 1; // 0xc4 PushI
	var_30_int = 0; // 0xc5 PushV
	var_31_int = 24; // 0xc6 PushI
	var_30_int = var_28_float / var_28_float; // 0xc7 Div2
	var_26_int = var_29_int + var_30_int; // 0xc8 Add2
	return 2; // 0xc9 Return
}


func_132(var_52_object)
{
	var_53_bool = 0; var_54_int = 0; var_55_bool = 0; var_56_int = 0; // 0x84 PushV
	var_57_bool = var_52_object == 0; // 0x85 Not
	if(var_57_bool == 0) goto Label_136; // 0x86 JumpB
	return 4; // 0x87 Return
	
Label_136:
	var_58_string = "noaccess"; // 0x88 PushS
	HasProperty(var_58_string, var_55_bool); // 0x89 ObjFunc
	var_59_bool = var_55_bool; // 0x8b Push
	if(var_59_bool == 0) goto Label_150; // 0x8c JumpB
	var_60_string = "noaccess"; // 0x8d PushS
	GetProperty(var_60_string, var_56_int); // 0x8e ObjFunc
	var_61_string = "noaccess"; // 0x90 PushS
	var_62_int = 1; // 0x91 PushI
	var_63_int = var_56_int + var_62_int; // 0x92 Add
	SetProperty(var_61_string, var_63_int); // 0x93 ObjFunc
	goto Label_154; // 0x95 Jump
	
Label_154:
	return 4; // 0x9a Return
	
Label_150:
	var_64_string = "noaccess"; // 0x96 PushS
	var_65_int = 1; // 0x97 PushI
	SetProperty(var_64_string, var_65_int); // 0x98 ObjFunc
}


func_202(var_19_int)
{
	var_20_float = 0; var_21_float = 0; // 0xca PushV
	GetGameTime(var_21_float); // 0xcb Func
	var_22_int = 0; // 0xcd PushV
	var_22_int = var_21_float; // 0xce Mov
	var_23_int = 24; // 0xcf PushI
	var_19_int = var_22_int % var_23_int; // 0xd0 Mod2
	return 2; // 0xd1 Return
}


func_175(var_42_object)
{
	var_43_object = Obj(); var_44_object = Obj(); // 0xaf PushV
	self(var_44_object); // 0xb0 Func
	var_42_object = var_44_object; // 0xb2 Mov
	return 2; // 0xb3 Return
}


func_210(var_12_bool)
{
	var_13_int = 0; var_14_int = 0; var_15_int = 0; var_16_int = 0; var_17_int = 0; var_18_int = 0; // 0xd2 PushV
	var_19_int = 0; // 0xd3 PushV
	func_202(var_19_int); // 0xd4 NEW_2
	var_16_int = var_19_int; // 0xd5 Mov
	var_24_int = 7; // 0xd7 PushI
	var_25_bool = var_16_int < var_24_int; // 0xd8 LT
	if(var_25_bool == 0) goto Label_232; // 0xd9 JumpB
	var_26_int = 0; // 0xda PushV
	func_193(var_26_int); // 0xdb NEW_2
	var_17_int = var_26_int; // 0xdc Mov
	var_32_int = 1; // 0xde PushI
	var_33_bool = var_17_int > var_32_int; // 0xdf GT
	if(var_33_bool == 0) goto Label_232; // 0xe0 JumpB
	var_34_string = "Performance"; // 0xe1 PushS
	var_35_int = var_34_string + var_17_int; // 0xe2 Add
	GetVariable(var_35_int, var_18_int); // 0xe3 Func
	var_36_int = 0; // 0xe5 PushI
	var_12_bool = var_18_int == var_36_int; // 0xe6 Eq2
	return 6; // 0xe7 Return
	
Label_232:
	var_12_bool = 0; // 0xe8 MovB
	return 6; // 0xe9 Return
}


func_19()
{
	var_0_int = 0; var_1_int = 0; var_2_object = Obj(); var_3_object = Obj(); var_4_int = 0; var_5_int = 0; var_6_int = 0; var_7_int = 0; var_8_object = Obj(); var_9_object = Obj(); var_10_int = 0; var_11_int = 0; // 0x13 PushV
	var_12_bool = 0; // 0x14 PushV
	func_210(var_12_bool); // 0x15 NEW_2
	if(var_12_bool == 0) goto Label_124; // 0x17 JumpB
	var_37_int = 0; // 0x18 PushV
	func_193(var_37_int); // 0x19 NEW_2
	var_6_int = var_37_int; // 0x1a Mov
	var_38_string = "Performance"; // 0x1c PushS
	var_39_int = var_38_string + var_6_int; // 0x1d Add
	var_40_int = 1; // 0x1e PushI
	SetVariable(var_39_int, var_40_int); // 0x1f Func
	var_41_string = "cs_mask_burah"; // 0x21 PushS
	var_42_object = Obj(); // 0x22 PushV
	func_175(var_42_object); // 0x23 NEW_2
	var_45_cvector = CVector(0.0, 0.0, 0.0); // 0x25 PushVec
	var_46_cvector = CVector(0.0, 0.0, 1.0); // 0x26 PushVec
	var_47_string = "cs_mask_burah.xml"; // 0x27 PushS
	AddActor(var_8_object, var_41_string, var_42_object, var_45_cvector, var_46_cvector, var_47_string); // 0x28 Func
	ForceGeometryLoad(); // 0x2a ObjFunc
	var_48_object = Obj(); // 0x2c PushV
	func_125(var_48_object); // 0x2d NEW_2
	var_9_object = var_48_object; // 0x2e Mov
	var_52_object = Obj(); // 0x30 PushV
	var_52_object = var_9_object; // 0x31 Mov
	func_132(var_52_object); // 0x32 NEW_2
	var_66_string = "cs_mask_burah"; // 0x34 PushS
	var_67_int = 1; // 0x35 PushI
	var_68_int = var_6_int - var_67_int; // 0x36 Sub
	var_69_int = var_66_string + var_68_int; // 0x37 Add
	var_70_string = ".mot"; // 0x38 PushS
	var_71_int = var_69_int + var_70_string; // 0x39 Add
	CameraPlay(var_71_int); // 0x3a Func
	var_72_string = "nightmask"; // 0x3c PushS
	var_73_int = 1; // 0x3d PushI
	var_74_int = var_6_int - var_73_int; // 0x3e Sub
	var_75_int = var_72_string + var_74_int; // 0x3f Add
	var_76_string = ".ogg"; // 0x40 PushS
	var_77_int = var_75_int + var_76_string; // 0x41 Add
	PlayGlobalMusic(var_77_int); // 0x42 Func
	CameraWaitForPlayFinish(); // 0x44 Func
	var_78_string = ""; // 0x46 PushS
	PlayGlobalMusic(var_78_string); // 0x47 Func
	var_79_object = Obj(); // 0x49 PushV
	var_79_object = var_9_object; // 0x4a Mov
	func_155(var_79_object); // 0x4b NEW_2
	CameraSwitchToNormal(); // 0x4d Func
	RemoveActor(var_8_object); // 0x4f Func
	var_90_string = "NightMasks"; // 0x51 PushS
	var_91_int = 1; // 0x52 PushI
	var_92_int = var_6_int - var_91_int; // 0x53 Sub
	var_93_int = var_90_string + var_92_int; // 0x54 Add
	var_94_string = ".wmv"; // 0x55 PushS
	var_95_int = var_93_int + var_94_string; // 0x56 Add
	PlayMovie(var_95_int); // 0x57 Func
	var_96_string = "STAT_LOOK"; // 0x59 PushS
	GetStat(var_96_string, var_10_int); // 0x5a Func
	var_97_string = "Day: "; // 0x5c PushS
	var_98_int = var_97_string + var_6_int; // 0x5d Add
	Trace(var_98_int); // 0x5e Func
	var_99_string = "Before stat "; // 0x60 PushS
	var_100_int = var_99_string + var_10_int; // 0x61 Add
	Trace(var_100_int); // 0x62 Func
	var_101_int = 1; // 0x64 PushI
	var_102_int = 1; // 0x65 PushI
	var_103_int = var_6_int - var_102_int; // 0x66 Sub
	shift(var_11_int, var_101_int, var_103_int); // 0x67 Func
	var_10_int = var_10_int | var_11_int; // 0x69 Or2
	var_104_string = "STAT_LOOK"; // 0x6a PushS
	SetStat(var_104_string, var_10_int); // 0x6b Func
	var_105_string = "After stat "; // 0x6d PushS
	var_106_int = var_105_string + var_10_int; // 0x6e Add
	Trace(var_106_int); // 0x6f Func
	var_107_int = 4095; // 0x71 PushI
	var_108_bool = var_10_int == var_107_int; // 0x72 Eq
	if(var_108_bool == 0) goto Label_122; // 0x73 JumpB
	var_109_string = "ACHIEVEMENT_LOOK"; // 0x74 PushS
	UnlockAchievement(var_109_string); // 0x75 Func
	var_110_string = "Achievement Unlocked!!!"; // 0x77 PushS
	Trace(var_110_string); // 0x78 Func
	
Label_122:
	var_9_object = 0; // 0x7a SetNull
	var_8_object = 0; // 0x7b SetNull
	
Label_124:
	return 12; // 0x7c Return
}


func_181(var_0_bool, var_1_string, var_2_string)
{
	var_3_object = Obj(); var_4_object = Obj(); // 0xb5 PushV
	FindActor(var_4_object, var_1_string); // 0xb6 Func
	var_5_bool = var_4_object == 0; // 0xb8 NullEq
	if(var_5_bool == 0) goto Label_188; // 0xb9 JumpB
	var_0_bool = 0; // 0xba MovB
	return 2; // 0xbb Return
	
Label_188:
	Trigger(var_4_object, var_2_string); // 0xbc Func
	var_0_bool = 1; // 0xbe MovB
	return 2; // 0xbf Return
}


func_155(var_79_object)
{
	var_80_int = 0; var_81_int = 0; // 0x9b PushV
	var_82_bool = var_79_object == 0; // 0x9c Not
	if(var_82_bool == 0) goto Label_159; // 0x9d JumpB
	return 2; // 0x9e Return
	
Label_159:
	var_83_string = "noaccess"; // 0x9f PushS
	GetProperty(var_83_string, var_81_int); // 0xa0 ObjFunc
	var_84_int = 1; // 0xa2 PushI
	var_85_bool = var_81_int > var_84_int; // 0xa3 GT
	if(var_85_bool == 0) goto Label_171; // 0xa4 JumpB
	var_86_string = "noaccess"; // 0xa5 PushS
	var_87_int = 1; // 0xa6 PushI
	var_88_int = var_81_int - var_87_int; // 0xa7 Sub
	SetProperty(var_86_string, var_88_int); // 0xa8 ObjFunc
	goto Label_174; // 0xaa Jump
	
Label_174:
	return 2; // 0xae Return
	
Label_171:
	var_89_string = "noaccess"; // 0xab PushS
	RemoveProperty(var_89_string); // 0xac ObjFunc
}


func_125(var_48_object)
{
	var_49_object = Obj(); var_50_object = Obj(); // 0x7d PushV
	var_51_string = "player"; // 0x7e PushS
	FindActor(var_50_object, var_51_string); // 0x7f Func
	var_48_object = var_50_object; // 0x81 Mov
	return 2; // 0x82 Return
}


