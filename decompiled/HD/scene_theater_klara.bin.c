task_0_event_5()
{
	func_24(); // 0x1 NEW_2
	var_111_bool = 0; var_112_string = ""; var_113_string = ""; // 0x3 PushV
	var_112_string = "quest_k7_01"; // 0x4 MovS
	var_113_string = "theater_load"; // 0x5 MovS
	func_186(var_111_bool, var_112_string, var_113_string); // 0x6 NEW_2
	var_117_bool = 0; var_118_string = ""; var_119_string = ""; // 0x8 PushV
	var_118_string = "quest_k12_01"; // 0x9 MovS
	var_119_string = "theater_load"; // 0xa MovS
	func_186(var_117_bool, var_118_string, var_119_string); // 0xb NEW_2
	return 0; // 0xd Return
}


task_0_event_6()
{
	var_0_bool = 0; var_1_string = ""; var_2_string = ""; // 0xe PushV
	var_1_string = "quest_k12_01"; // 0xf MovS
	var_2_string = "theater_unload"; // 0x10 MovS
	func_186(var_0_bool, var_1_string, var_2_string); // 0x11 NEW_2
	return 0; // 0x13 Return
}


main()
{
	
Label_20:
	Hold(); // 0x14 Func
	goto Label_20; // 0x16 Jump
}


func_160(var_79_object)
{
	var_80_int = 0; var_81_int = 0; // 0xa0 PushV
	var_82_bool = var_79_object == 0; // 0xa1 Not
	if(var_82_bool == 0) goto Label_164; // 0xa2 JumpB
	return 2; // 0xa3 Return
	
Label_164:
	var_83_string = "noaccess"; // 0xa4 PushS
	GetProperty(var_83_string, var_81_int); // 0xa5 ObjFunc
	var_84_int = 1; // 0xa7 PushI
	var_85_bool = var_81_int > var_84_int; // 0xa8 GT
	if(var_85_bool == 0) goto Label_176; // 0xa9 JumpB
	var_86_string = "noaccess"; // 0xaa PushS
	var_87_int = 1; // 0xab PushI
	var_88_int = var_81_int - var_87_int; // 0xac Sub
	SetProperty(var_86_string, var_88_int); // 0xad ObjFunc
	goto Label_179; // 0xaf Jump
	
Label_179:
	return 2; // 0xb3 Return
	
Label_176:
	var_89_string = "noaccess"; // 0xb0 PushS
	RemoveProperty(var_89_string); // 0xb1 ObjFunc
}


func_130(var_48_object)
{
	var_49_object = Obj(); var_50_object = Obj(); // 0x82 PushV
	var_51_string = "player"; // 0x83 PushS
	FindActor(var_50_object, var_51_string); // 0x84 Func
	var_48_object = var_50_object; // 0x86 Mov
	return 2; // 0x87 Return
}


func_198(var_26_int)
{
	var_27_float = 0; var_28_float = 0; // 0xc6 PushV
	GetGameTime(var_28_float); // 0xc7 Func
	var_29_int = 1; // 0xc9 PushI
	var_30_int = 0; // 0xca PushV
	var_31_int = 24; // 0xcb PushI
	var_30_int = var_28_float / var_28_float; // 0xcc Div2
	var_26_int = var_29_int + var_30_int; // 0xcd Add2
	return 2; // 0xce Return
}


func_137(var_52_object)
{
	var_53_bool = 0; var_54_int = 0; var_55_bool = 0; var_56_int = 0; // 0x89 PushV
	var_57_bool = var_52_object == 0; // 0x8a Not
	if(var_57_bool == 0) goto Label_141; // 0x8b JumpB
	return 4; // 0x8c Return
	
Label_141:
	var_58_string = "noaccess"; // 0x8d PushS
	HasProperty(var_58_string, var_55_bool); // 0x8e ObjFunc
	var_59_bool = var_55_bool; // 0x90 Push
	if(var_59_bool == 0) goto Label_155; // 0x91 JumpB
	var_60_string = "noaccess"; // 0x92 PushS
	GetProperty(var_60_string, var_56_int); // 0x93 ObjFunc
	var_61_string = "noaccess"; // 0x95 PushS
	var_62_int = 1; // 0x96 PushI
	var_63_int = var_56_int + var_62_int; // 0x97 Add
	SetProperty(var_61_string, var_63_int); // 0x98 ObjFunc
	goto Label_159; // 0x9a Jump
	
Label_159:
	return 4; // 0x9f Return
	
Label_155:
	var_64_string = "noaccess"; // 0x9b PushS
	var_65_int = 1; // 0x9c PushI
	SetProperty(var_64_string, var_65_int); // 0x9d ObjFunc
}


func_207(var_19_int)
{
	var_20_float = 0; var_21_float = 0; // 0xcf PushV
	GetGameTime(var_21_float); // 0xd0 Func
	var_22_int = 0; // 0xd2 PushV
	var_22_int = var_21_float; // 0xd3 Mov
	var_23_int = 24; // 0xd4 PushI
	var_19_int = var_22_int % var_23_int; // 0xd5 Mod2
	return 2; // 0xd6 Return
}


func_180(var_42_object)
{
	var_43_object = Obj(); var_44_object = Obj(); // 0xb4 PushV
	self(var_44_object); // 0xb5 Func
	var_42_object = var_44_object; // 0xb7 Mov
	return 2; // 0xb8 Return
}


func_215(var_12_bool)
{
	var_13_int = 0; var_14_int = 0; var_15_int = 0; var_16_int = 0; var_17_int = 0; var_18_int = 0; // 0xd7 PushV
	var_19_int = 0; // 0xd8 PushV
	func_207(var_19_int); // 0xd9 NEW_2
	var_16_int = var_19_int; // 0xda Mov
	var_24_int = 7; // 0xdc PushI
	var_25_bool = var_16_int < var_24_int; // 0xdd LT
	if(var_25_bool == 0) goto Label_237; // 0xde JumpB
	var_26_int = 0; // 0xdf PushV
	func_198(var_26_int); // 0xe0 NEW_2
	var_17_int = var_26_int; // 0xe1 Mov
	var_32_int = 1; // 0xe3 PushI
	var_33_bool = var_17_int > var_32_int; // 0xe4 GT
	if(var_33_bool == 0) goto Label_237; // 0xe5 JumpB
	var_34_string = "Performance"; // 0xe6 PushS
	var_35_int = var_34_string + var_17_int; // 0xe7 Add
	GetVariable(var_35_int, var_18_int); // 0xe8 Func
	var_36_int = 0; // 0xea PushI
	var_12_bool = var_18_int == var_36_int; // 0xeb Eq2
	return 6; // 0xec Return
	
Label_237:
	var_12_bool = 0; // 0xed MovB
	return 6; // 0xee Return
}


func_24()
{
	var_0_int = 0; var_1_int = 0; var_2_object = Obj(); var_3_object = Obj(); var_4_int = 0; var_5_int = 0; var_6_int = 0; var_7_int = 0; var_8_object = Obj(); var_9_object = Obj(); var_10_int = 0; var_11_int = 0; // 0x18 PushV
	var_12_bool = 0; // 0x19 PushV
	func_215(var_12_bool); // 0x1a NEW_2
	if(var_12_bool == 0) goto Label_129; // 0x1c JumpB
	var_37_int = 0; // 0x1d PushV
	func_198(var_37_int); // 0x1e NEW_2
	var_6_int = var_37_int; // 0x1f Mov
	var_38_string = "Performance"; // 0x21 PushS
	var_39_int = var_38_string + var_6_int; // 0x22 Add
	var_40_int = 1; // 0x23 PushI
	SetVariable(var_39_int, var_40_int); // 0x24 Func
	var_41_string = "cs_mask_klara"; // 0x26 PushS
	var_42_object = Obj(); // 0x27 PushV
	func_180(var_42_object); // 0x28 NEW_2
	var_45_cvector = CVector(0.0, 0.0, 0.0); // 0x2a PushVec
	var_46_cvector = CVector(0.0, 0.0, 1.0); // 0x2b PushVec
	var_47_string = "cs_mask_klara.xml"; // 0x2c PushS
	AddActor(var_8_object, var_41_string, var_42_object, var_45_cvector, var_46_cvector, var_47_string); // 0x2d Func
	ForceGeometryLoad(); // 0x2f ObjFunc
	var_48_object = Obj(); // 0x31 PushV
	func_130(var_48_object); // 0x32 NEW_2
	var_9_object = var_48_object; // 0x33 Mov
	var_52_object = Obj(); // 0x35 PushV
	var_52_object = var_9_object; // 0x36 Mov
	func_137(var_52_object); // 0x37 NEW_2
	var_66_string = "cs_mask_klara"; // 0x39 PushS
	var_67_int = 1; // 0x3a PushI
	var_68_int = var_6_int - var_67_int; // 0x3b Sub
	var_69_int = var_66_string + var_68_int; // 0x3c Add
	var_70_string = ".mot"; // 0x3d PushS
	var_71_int = var_69_int + var_70_string; // 0x3e Add
	CameraPlay(var_71_int); // 0x3f Func
	var_72_string = "nightmask"; // 0x41 PushS
	var_73_int = 1; // 0x42 PushI
	var_74_int = var_6_int - var_73_int; // 0x43 Sub
	var_75_int = var_72_string + var_74_int; // 0x44 Add
	var_76_string = ".ogg"; // 0x45 PushS
	var_77_int = var_75_int + var_76_string; // 0x46 Add
	PlayGlobalMusic(var_77_int); // 0x47 Func
	CameraWaitForPlayFinish(); // 0x49 Func
	var_78_string = ""; // 0x4b PushS
	PlayGlobalMusic(var_78_string); // 0x4c Func
	var_79_object = Obj(); // 0x4e PushV
	var_79_object = var_9_object; // 0x4f Mov
	func_160(var_79_object); // 0x50 NEW_2
	CameraSwitchToNormal(); // 0x52 Func
	RemoveActor(var_8_object); // 0x54 Func
	var_90_string = "NightMasks"; // 0x56 PushS
	var_91_int = 1; // 0x57 PushI
	var_92_int = var_6_int - var_91_int; // 0x58 Sub
	var_93_int = var_90_string + var_92_int; // 0x59 Add
	var_94_string = ".wmv"; // 0x5a PushS
	var_95_int = var_93_int + var_94_string; // 0x5b Add
	PlayMovie(var_95_int); // 0x5c Func
	var_96_string = "STAT_LOOK"; // 0x5e PushS
	GetStat(var_96_string, var_10_int); // 0x5f Func
	var_97_string = "Day: "; // 0x61 PushS
	var_98_int = var_97_string + var_6_int; // 0x62 Add
	Trace(var_98_int); // 0x63 Func
	var_99_string = "Before stat "; // 0x65 PushS
	var_100_int = var_99_string + var_10_int; // 0x66 Add
	Trace(var_100_int); // 0x67 Func
	var_101_int = 1; // 0x69 PushI
	var_102_int = 1; // 0x6a PushI
	var_103_int = var_6_int - var_102_int; // 0x6b Sub
	shift(var_11_int, var_101_int, var_103_int); // 0x6c Func
	var_10_int = var_10_int | var_11_int; // 0x6e Or2
	var_104_string = "STAT_LOOK"; // 0x6f PushS
	SetStat(var_104_string, var_10_int); // 0x70 Func
	var_105_string = "After stat "; // 0x72 PushS
	var_106_int = var_105_string + var_10_int; // 0x73 Add
	Trace(var_106_int); // 0x74 Func
	var_107_int = 4095; // 0x76 PushI
	var_108_bool = var_10_int == var_107_int; // 0x77 Eq
	if(var_108_bool == 0) goto Label_127; // 0x78 JumpB
	var_109_string = "ACHIEVEMENT_LOOK"; // 0x79 PushS
	UnlockAchievement(var_109_string); // 0x7a Func
	var_110_string = "Achievement Unlocked!!!"; // 0x7c PushS
	Trace(var_110_string); // 0x7d Func
	
Label_127:
	var_9_object = 0; // 0x7f SetNull
	var_8_object = 0; // 0x80 SetNull
	
Label_129:
	return 12; // 0x81 Return
}


func_186(var_0_bool, var_1_string, var_2_string)
{
	var_3_object = Obj(); var_4_object = Obj(); // 0xba PushV
	FindActor(var_4_object, var_1_string); // 0xbb Func
	var_5_bool = var_4_object == 0; // 0xbd NullEq
	if(var_5_bool == 0) goto Label_193; // 0xbe JumpB
	var_0_bool = 0; // 0xbf MovB
	return 2; // 0xc0 Return
	
Label_193:
	Trigger(var_4_object, var_2_string); // 0xc1 Func
	var_0_bool = 1; // 0xc3 MovB
	return 2; // 0xc4 Return
}


