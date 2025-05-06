task_0_event_26(var_0_object, var_1_object, var_2_string)
{
	var_3_object = Obj(); var_4_object = Obj(); var_5_object = Obj(); var_6_object = Obj(); // 0xd PushV
	Trace(var_2_string); // 0xe Func
	var_7_string = "completed"; // 0x10 PushS
	var_8_bool = var_2_string == var_7_string; // 0x11 Eq
	if(var_8_bool == 0) goto Label_27; // 0x12 JumpB
	var_9_object = Obj(); var_10_string = ""; // 0x13 PushV
	var_10_string = "quest_d5_03_cutscene"; // 0x14 MovS
	func_223(var_9_object, var_10_string); // 0x15 NEW_2
	func_144(); // 0x18 NEW_2
	goto Label_115; // 0x1a Jump
	
Label_115:
	return 4; // 0x73 Return
	
Label_27:
	var_53_string = "fail"; // 0x1b PushS
	var_54_bool = var_2_string == var_53_string; // 0x1c Eq
	if(var_54_bool == 0) goto Label_34; // 0x1d JumpB
	func_131(); // 0x1f NEW_2
	goto Label_115; // 0x21 Jump
	
Label_34:
	var_59_string = "place_prisoners"; // 0x22 PushS
	var_60_bool = var_2_string == var_59_string; // 0x23 Eq
	if(var_60_bool == 0) goto Label_115; // 0x24 JumpB
	var_61_string = ""; var_62_bool = 0; // 0x25 PushV
	var_61_string = "uprava_prison@door1"; // 0x26 MovS
	var_62_bool = 0; // 0x27 MovB
	func_252(var_61_string, var_62_bool); // 0x28 NEW_2
	var_63_string = "uprava_prison"; // 0x2a PushS
	GetSceneByName(var_5_object, var_63_string); // 0x2b Func
	var_64_object = Obj(); var_65_object = Obj(); var_66_string = ""; var_67_string = ""; var_68_string = ""; // 0x2d PushV
	var_65_object = var_5_object; // 0x2e Mov
	var_66_string = "pt_guard"; // 0x2f MovS
	var_67_string = "pers_birdmask"; // 0x30 MovS
	var_68_string = "d5q03_birdmask.xml"; // 0x31 MovS
	func_234(var_64_object, var_65_object, var_66_string, var_67_string, var_68_string); // 0x32 NEW_2
	var_1_object = var_64_object; // 0x33 TMov
	var_82_object = Obj(); var_83_object = Obj(); var_84_string = ""; var_85_string = ""; var_86_string = ""; // 0x35 PushV
	var_83_object = var_5_object; // 0x36 Mov
	var_84_string = "pt_prisoner1"; // 0x37 MovS
	var_85_string = "pers_unosha"; // 0x38 MovS
	var_86_string = "d5q03_unosha.xml"; // 0x39 MovS
	func_234(var_82_object, var_83_object, var_84_string, var_85_string, var_86_string); // 0x3a NEW_2
	var_6_object = var_82_object; // 0x3b Mov
	add(var_6_object); // 0x3d TObjFunc
	var_87_object = Obj(); var_88_object = Obj(); var_89_string = ""; var_90_string = ""; var_91_string = ""; // 0x3f PushV
	var_88_object = var_5_object; // 0x40 Mov
	var_89_string = "pt_prisoner2"; // 0x41 MovS
	var_90_string = "pers_worker"; // 0x42 MovS
	var_91_string = "d5q03_worker.xml"; // 0x43 MovS
	func_234(var_87_object, var_88_object, var_89_string, var_90_string, var_91_string); // 0x44 NEW_2
	var_6_object = var_87_object; // 0x45 Mov
	add(var_6_object); // 0x47 TObjFunc
	var_92_object = Obj(); var_93_object = Obj(); var_94_string = ""; var_95_string = ""; var_96_string = ""; // 0x49 PushV
	var_93_object = var_5_object; // 0x4a Mov
	var_94_string = "pt_prisoner3"; // 0x4b MovS
	var_95_string = "pers_wasted_male"; // 0x4c MovS
	var_96_string = "d5q03_wastedmale.xml"; // 0x4d MovS
	func_234(var_92_object, var_93_object, var_94_string, var_95_string, var_96_string); // 0x4e NEW_2
	var_6_object = var_92_object; // 0x4f Mov
	add(var_6_object); // 0x51 TObjFunc
	var_97_object = Obj(); var_98_object = Obj(); var_99_string = ""; var_100_string = ""; var_101_string = ""; // 0x53 PushV
	var_98_object = var_5_object; // 0x54 Mov
	var_99_string = "pt_prisoner4"; // 0x55 MovS
	var_100_string = "pers_alkash"; // 0x56 MovS
	var_101_string = "d5q03_alkash.xml"; // 0x57 MovS
	func_234(var_97_object, var_98_object, var_99_string, var_100_string, var_101_string); // 0x58 NEW_2
	var_6_object = var_97_object; // 0x59 Mov
	add(var_6_object); // 0x5b TObjFunc
	var_102_object = Obj(); var_103_object = Obj(); var_104_string = ""; var_105_string = ""; var_106_string = ""; // 0x5d PushV
	var_103_object = var_5_object; // 0x5e Mov
	var_104_string = "pt_prisoner5"; // 0x5f MovS
	var_105_string = "pers_worker"; // 0x60 MovS
	var_106_string = "d5q03_worker.xml"; // 0x61 MovS
	func_234(var_102_object, var_103_object, var_104_string, var_105_string, var_106_string); // 0x62 NEW_2
	var_6_object = var_102_object; // 0x63 Mov
	add(var_6_object); // 0x65 TObjFunc
	var_107_object = Obj(); var_108_object = Obj(); var_109_string = ""; var_110_string = ""; var_111_string = ""; // 0x67 PushV
	var_108_object = var_5_object; // 0x68 Mov
	var_109_string = "pt_prisoner6"; // 0x69 MovS
	var_110_string = "pers_unosha"; // 0x6a MovS
	var_111_string = "d5q03_unosha.xml"; // 0x6b MovS
	func_234(var_107_object, var_108_object, var_109_string, var_110_string, var_111_string); // 0x6c NEW_2
	var_6_object = var_107_object; // 0x6d Mov
	add(var_6_object); // 0x6f TObjFunc
	var_6_object = 0; // 0x71 SetNull
	var_5_object = 0; // 0x72 SetNull
}


task_0_event_24(var_0_object, var_1_object, var_2_int)
{
	CameraSwitchToNormal(); // 0x75 Func
	return 0; // 0x77 Return
}


task_0_event_9(var_0_object, var_1_object, var_2_int, var_3_float)
{
	func_120(); // 0xd0 NEW_2
	return 0; // 0xd2 Return
}


main(var_0_object, var_1_object)
{
	var_2_string = "d5q03"; // 0x0 PushS
	var_3_int = 1; // 0x1 PushI
	SetVariable(var_2_string, var_3_int); // 0x2 Func
	var_4_object = Obj(); // 0x4 PushV
	func_217(var_4_object); // 0x5 NEW_2
	var_0_object = var_4_object; // 0x6 TMov
	var_7_int = 0; // 0x8 PushV
	var_7_int = 5; // 0x9 MovI
	func_187(var_7_int); // 0xa NEW_2
	return 0; // 0xc Return
}


func_131()
{
	var_9_string = "d5q03"; // 0x83 PushS
	var_10_int = -1; // 0x84 PushI
	SetVariable(var_9_string, var_10_int); // 0x85 Func
	var_11_string = ""; var_12_bool = 0; // 0x87 PushV
	var_11_string = "uprava_prison@door1"; // 0x88 MovS
	var_12_bool = 1; // 0x89 MovB
	func_252(var_11_string, var_12_bool); // 0x8a NEW_2
	func_171(var_5_int); // 0x8d NEW_2
	return 0; // 0x8f Return
}


func_234(var_64_object, var_65_object, var_66_string, var_67_string, var_68_string)
{
	var_69_bool = 0; var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); var_72_object = Obj(); var_73_bool = 0; var_74_cvector = CVector(0,0,0); var_75_cvector = CVector(0,0,0); var_76_object = Obj(); // 0xea PushV
	GetLocator(var_66_string, var_73_bool, var_74_cvector, var_75_cvector); // 0xeb ObjFunc
	var_77_bool = var_73_bool == 0; // 0xed Not
	if(var_77_bool == 0) goto Label_247; // 0xee JumpB
	var_78_string = "Locator "; // 0xef PushS
	var_79_int = var_78_string + var_66_string; // 0xf0 Add
	var_80_string = " doesn't exist"; // 0xf1 PushS
	var_81_int = var_79_int + var_80_string; // 0xf2 Add
	Trace(var_81_int); // 0xf3 Func
	var_76_object = 0; // 0xf5 SetNull
	goto Label_249; // 0xf6 Jump
	
Label_249:
	var_64_object = var_76_object; // 0xf9 Mov
	return 8; // 0xfa Return
	
Label_247:
	AddActor(var_76_object, var_67_string, var_65_object, var_74_cvector, var_75_cvector, var_68_string); // 0xf7 Func
}


func_171(var_0_object)
{
	EventDisable(26); // 0xab EventDisable
	var_13_object = Obj(); // 0xac PushV
	var_13_object = var_0_object; // 0xad MovT
	func_269(var_13_object); // 0xae NEW_2
	var_24_object = var_1_object; // 0xb0 PushT
	if(var_24_object == 0) goto Label_181; // 0xb1 JumpB
	var_25_string = "cleanup"; // 0xb2 PushS
	Trigger(var_25_string, var_25_string); // 0xb3 Func
	
Label_181:
	var_26_object = Obj(); // 0xb5 PushV
	func_211(var_26_object); // 0xb6 NEW_2
	RemoveActor(var_26_object); // 0xb8 Func
	return 0; // 0xba Return
}


func_269(var_13_object)
{
	var_14_int = 0; var_15_int = 0; var_16_object = Obj(); var_17_int = 0; var_18_int = 0; var_19_object = Obj(); // 0x10d PushV
	var_20_object = var_13_object; // 0x10e Push
	if(var_20_object == 0) goto Label_289; // 0x10f JumpB
	size(var_17_int); // 0x110 ObjFunc
	var_18_int = 0; // 0x112 MovI
	
Label_275:
	var_21_bool = var_18_int < var_17_int; // 0x113 LT
	if(var_21_bool == 0) goto Label_287; // 0x114 JumpB
	get(var_19_object, var_18_int); // 0x115 ObjFunc
	var_22_object = var_19_object; // 0x117 Push
	if(var_22_object == 0) goto Label_283; // 0x118 JumpB
	RemoveActor(var_19_object); // 0x119 Func
	
Label_283:
	var_19_object = 0; // 0x11b SetNull
	var_23_int = 1; // 0x11c PushI
	var_18_int = var_18_int + var_23_int; // 0x11d Add2
	goto Label_275; // 0x11e Jump
	
Label_287:
	clear(); // 0x11f ObjFunc
	
Label_289:
	return 6; // 0x121 Return
}


func_144()
{
	var_17_int = 0; var_18_int = 0; // 0x90 PushV
	var_19_string = "d5q03"; // 0x91 PushS
	GetVariable(var_19_string, var_18_int); // 0x92 Func
	var_20_bool = 0; // 0x94 PushV
	var_20_bool = 0; // 0x95 MovB
	var_21_int = 1000; // 0x96 PushI
	var_22_bool = var_18_int != var_21_int; // 0x97 Neq
	if(var_22_bool == 0) goto Label_157; // 0x98 JumpB
	var_23_int = -1; // 0x99 PushI
	var_24_bool = var_18_int != var_23_int; // 0x9a Neq
	if(var_24_bool == 0) goto Label_157; // 0x9b JumpB
	var_20_bool = 1; // 0x9c MovB
	
Label_157:
	if(var_20_bool == 0) goto Label_170; // 0x9d JumpB
	var_25_string = "d5q03"; // 0x9e PushS
	var_26_int = 1000; // 0x9f PushI
	SetVariable(var_25_string, var_26_int); // 0xa0 Func
	var_27_string = ""; var_28_bool = 0; // 0xa2 PushV
	var_27_string = "uprava_prison@door1"; // 0xa3 MovS
	var_28_bool = 1; // 0xa4 MovB
	func_252(var_27_string, var_28_bool); // 0xa5 NEW_2
	func_171(var_18_int); // 0xa8 NEW_2
	
Label_170:
	return 2; // 0xaa Return
}


func_211(var_26_object)
{
	var_27_object = Obj(); var_28_object = Obj(); // 0xd3 PushV
	self(var_28_object); // 0xd4 Func
	var_26_object = var_28_object; // 0xd6 Mov
	return 2; // 0xd7 Return
}


func_120()
{
	var_4_int = 0; var_5_int = 0; // 0x78 PushV
	var_6_string = "d5q03"; // 0x79 PushS
	GetVariable(var_6_string, var_5_int); // 0x7a Func
	var_7_int = 1000; // 0x7c PushI
	var_8_bool = var_5_int != var_7_int; // 0x7d Neq
	if(var_8_bool == 0) goto Label_130; // 0x7e JumpB
	func_131(); // 0x80 NEW_2
	
Label_130:
	return 2; // 0x82 Return
}


func_217(var_4_object)
{
	var_5_object = Obj(); var_6_object = Obj(); // 0xd9 PushV
	CreateObjectVector(var_6_object); // 0xda Func
	var_4_object = var_6_object; // 0xdc Mov
	return 2; // 0xdd Return
}


func_187(var_7_int)
{
	var_8_float = 0; var_9_float = 0; // 0xbb PushV
	GetGameTime(var_9_float); // 0xbc Func
	var_10_int = 24; // 0xbe PushI
	var_11_float = var_7_int * var_10_int; // 0xbf Mult
	var_12_bool = var_9_float >= var_11_float; // 0xc0 GE
	if(var_12_bool == 0) goto Label_198; // 0xc1 JumpB
	func_171(var_9_float); // 0xc3 NEW_2
	goto Label_205; // 0xc5 Jump
	
Label_205:
	return 2; // 0xcd Return
	
Label_198:
	var_29_int = 0; // 0xc6 PushI
	var_30_int = 24; // 0xc7 PushI
	var_31_float = var_7_int * var_30_int; // 0xc8 Mult
	SetTimeEvent(var_29_int, var_31_float); // 0xc9 Func
	Hold(); // 0xcb Func
}


func_252(var_11_string, var_12_bool)
{
	var_13_object = Obj(); var_14_object = Obj(); // 0xfc PushV
	FindActor(var_14_object, var_11_string); // 0xfd Func
	var_15_bool = var_14_object == 0; // 0xff Not
	if(var_15_bool == 0) goto Label_264; // 0x100 JumpB
	var_16_string = "Door "; // 0x101 PushS
	var_17_int = var_16_string + var_11_string; // 0x102 Add
	var_18_string = " not found"; // 0x103 PushS
	var_19_int = var_17_int + var_18_string; // 0x104 Add
	Trace(var_19_int); // 0x105 Func
	goto Label_267; // 0x107 Jump
	
Label_267:
	return 2; // 0x10b Return
	
Label_264:
	var_20_string = "locked"; // 0x108 PushS
	SetProperty(var_20_string, var_12_bool); // 0x109 ObjFunc
}


func_223(var_9_object, var_10_string)
{
	var_11_object = Obj(); var_12_object = Obj(); var_13_object = Obj(); var_14_object = Obj(); // 0xdf PushV
	GetMainOutdoorScene(var_13_object); // 0xe0 Func
	var_15_string = ".bin"; // 0xe2 PushS
	var_16_int = var_10_string + var_15_string; // 0xe3 Add
	AddBlankActor(var_14_object, var_13_object, var_10_string, var_16_int); // 0xe4 Func
	var_9_object = var_14_object; // 0xe6 Mov
	return 4; // 0xe7 Return
}


