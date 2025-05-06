task_0_event_26(var_0_object, var_1_string)
{
	var_2_bool = 0; var_3_object = Obj(); var_4_bool = 0; var_5_object = Obj(); // 0x1f PushV
	Trace(var_1_string); // 0x20 Func
	var_6_string = "scene_load"; // 0x22 PushS
	var_7_bool = var_1_string == var_6_string; // 0x23 Eq
	if(var_7_bool == 0) goto Label_50; // 0x24 JumpB
	var_8_string = "d4q02_survived"; // 0x25 PushS
	GetVariable(var_8_string, var_4_bool); // 0x26 Func
	var_9_bool = var_4_bool == 0; // 0x28 Not
	if(var_9_bool == 0) goto Label_49; // 0x29 JumpB
	var_10_string = "door_close"; // 0x2a PushS
	PlaySound(var_10_string); // 0x2b Func
	var_11_object = Obj(); var_12_string = ""; // 0x2d PushV
	var_12_string = "quest_d4_02_survival"; // 0x2e MovS
	func_215(var_11_object, var_12_string); // 0x2f NEW_2
	
Label_49:
	goto Label_112; // 0x31 Jump
	
Label_112:
	return 4; // 0x70 Return
	
Label_50:
	var_19_string = "scene_unload"; // 0x32 PushS
	var_20_bool = var_1_string == var_19_string; // 0x33 Eq
	if(var_20_bool == 0) goto Label_63; // 0x34 JumpB
	var_21_object = var_0_object; // 0x35 PushT
	if(var_21_object == 0) goto Label_57; // 0x36 JumpB
	Remove(); // 0x37 TObjFunc
	
Label_57:
	var_22_string = ""; var_23_bool = 0; // 0x39 PushV
	var_22_string = "s_house7_03_door2"; // 0x3a MovS
	var_23_bool = 0; // 0x3b MovB
	func_244(var_22_string, var_23_bool); // 0x3c NEW_2
	goto Label_112; // 0x3e Jump
	
Label_63:
	var_32_string = "birdmask"; // 0x3f PushS
	var_33_bool = var_1_string == var_32_string; // 0x40 Eq
	if(var_33_bool == 0) goto Label_78; // 0x41 JumpB
	GetMainOutdoorScene(var_5_object); // 0x42 Func
	var_34_object = Obj(); var_35_object = Obj(); var_36_string = ""; var_37_string = ""; var_38_string = ""; // 0x44 PushV
	var_35_object = var_5_object; // 0x45 Mov
	var_36_string = "pt_d4q02_birdmask"; // 0x46 MovS
	var_37_string = "pers_birdmask"; // 0x47 MovS
	var_38_string = "d4q02_birdmask.xml"; // 0x48 MovS
	func_226(var_35_object, var_36_string, var_37_string, var_38_string); // 0x49 NEW_2
	var_0_object = var_34_object; // 0x4a TMov
	var_5_object = 0; // 0x4c SetNull
	goto Label_112; // 0x4d Jump
	
Label_78:
	var_52_string = "birdmask_talk"; // 0x4e PushS
	var_53_bool = var_1_string == var_52_string; // 0x4f Eq
	if(var_53_bool == 0) goto Label_87; // 0x50 JumpB
	var_54_string = ""; var_55_bool = 0; // 0x51 PushV
	var_54_string = "house7_03@door1"; // 0x52 MovS
	var_55_bool = 0; // 0x53 MovB
	func_244(var_54_string, var_55_bool); // 0x54 NEW_2
	goto Label_112; // 0x56 Jump
	
Label_87:
	var_56_string = "survived"; // 0x57 PushS
	var_57_bool = var_1_string == var_56_string; // 0x58 Eq
	if(var_57_bool == 0) goto Label_106; // 0x59 JumpB
	var_58_string = ""; var_59_bool = 0; // 0x5a PushV
	var_58_string = "s_house7_03_door1"; // 0x5b MovS
	var_59_bool = 0; // 0x5c MovB
	func_244(var_58_string, var_59_bool); // 0x5d NEW_2
	var_60_string = "d4q02_survived"; // 0x5f PushS
	var_61_int = 1; // 0x60 PushI
	SetVariable(var_60_string, var_61_int); // 0x61 Func
	var_62_string = "door_open"; // 0x63 PushS
	PlaySound(var_62_string); // 0x64 Func
	func_281(); // 0x67 NEW_2
	goto Label_112; // 0x69 Jump
	
Label_106:
	var_86_string = "completed"; // 0x6a PushS
	var_87_bool = var_1_string == var_86_string; // 0x6b Eq
	if(var_87_bool == 0) goto Label_112; // 0x6c JumpB
	func_132(); // 0x6e NEW_2
}


task_0_event_9(var_0_object, var_1_int, var_2_float)
{
	func_113(); // 0xce NEW_2
	return 0; // 0xd0 Return
}


main(var_0_object)
{
	var_1_string = "d4q02"; // 0x0 PushS
	var_2_int = 1; // 0x1 PushI
	SetVariable(var_1_string, var_2_int); // 0x2 Func
	var_3_string = ""; var_4_bool = 0; // 0x4 PushV
	var_3_string = "s_house7_03_door1"; // 0x5 MovS
	var_4_bool = 1; // 0x6 MovB
	func_244(var_3_string, var_4_bool); // 0x7 NEW_2
	var_13_string = ""; var_14_bool = 0; // 0x9 PushV
	var_13_string = "s_house7_03_door2"; // 0xa MovS
	var_14_bool = 1; // 0xb MovB
	func_244(var_13_string, var_14_bool); // 0xc NEW_2
	var_15_string = ""; var_16_bool = 0; var_17_bool = 0; // 0xe PushV
	var_15_string = "house7_03@door1"; // 0xf MovS
	var_16_bool = 1; // 0x10 MovB
	var_17_bool = 0; // 0x11 MovB
	func_261(var_15_string, var_16_bool, var_17_bool); // 0x12 NEW_2
	var_27_string = ""; var_28_bool = 0; var_29_bool = 0; // 0x14 PushV
	var_27_string = "house7_03@door2"; // 0x15 MovS
	var_28_bool = 1; // 0x16 MovB
	var_29_bool = 0; // 0x17 MovB
	func_261(var_27_string, var_28_bool, var_29_bool); // 0x18 NEW_2
	var_30_int = 0; // 0x1a PushV
	var_30_int = 4; // 0x1b MovI
	func_185(var_30_int); // 0x1c NEW_2
	return 0; // 0x1e Return
}


func_226(var_34_object, var_36_string, var_37_string, var_38_string)
{
	var_39_bool = 0; var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_object = Obj(); var_43_bool = 0; var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_object = Obj(); // 0xe2 PushV
	GetLocator(var_36_string, var_43_bool, var_44_cvector, var_45_cvector); // 0xe3 ObjFunc
	var_47_bool = var_43_bool == 0; // 0xe5 Not
	if(var_47_bool == 0) goto Label_239; // 0xe6 JumpB
	var_48_string = "Locator "; // 0xe7 PushS
	var_49_int = var_48_string + var_36_string; // 0xe8 Add
	var_50_string = " doesn't exist"; // 0xe9 PushS
	var_51_int = var_49_int + var_50_string; // 0xea Add
	Trace(var_51_int); // 0xeb Func
	var_46_object = 0; // 0xed SetNull
	goto Label_241; // 0xee Jump
	
Label_241:
	var_34_object = var_46_object; // 0xf1 Mov
	return 8; // 0xf2 Return
	
Label_239:
	AddStationaryActor(var_46_object, var_44_cvector, var_45_cvector, var_37_string, var_38_string); // 0xef ObjFunc
}


func_132()
{
	var_88_int = 0; var_89_int = 0; // 0x84 PushV
	var_90_string = "d4q02"; // 0x85 PushS
	GetVariable(var_90_string, var_89_int); // 0x86 Func
	var_91_bool = 0; // 0x88 PushV
	var_91_bool = 0; // 0x89 MovB
	var_92_int = 1000; // 0x8a PushI
	var_93_bool = var_89_int != var_92_int; // 0x8b Neq
	if(var_93_bool == 0) goto Label_145; // 0x8c JumpB
	var_94_int = -1; // 0x8d PushI
	var_95_bool = var_89_int != var_94_int; // 0x8e Neq
	if(var_95_bool == 0) goto Label_145; // 0x8f JumpB
	var_91_bool = 1; // 0x90 MovB
	
Label_145:
	if(var_91_bool == 0) goto Label_153; // 0x91 JumpB
	var_96_string = "d4q02"; // 0x92 PushS
	var_97_int = 1000; // 0x93 PushI
	SetVariable(var_96_string, var_97_int); // 0x94 Func
	func_154(); // 0x97 NEW_2
	
Label_153:
	return 2; // 0x99 Return
}


func_261(var_15_string, var_16_bool, var_17_bool)
{
	var_18_object = Obj(); var_19_object = Obj(); // 0x105 PushV
	FindActor(var_19_object, var_15_string); // 0x106 Func
	var_20_bool = var_19_object == 0; // 0x108 Not
	if(var_20_bool == 0) goto Label_273; // 0x109 JumpB
	var_21_string = "Door "; // 0x10a PushS
	var_22_int = var_21_string + var_15_string; // 0x10b Add
	var_23_string = " not found"; // 0x10c PushS
	var_24_int = var_22_int + var_23_string; // 0x10d Add
	Trace(var_24_int); // 0x10e Func
	goto Label_279; // 0x110 Jump
	
Label_279:
	return 2; // 0x117 Return
	
Label_273:
	var_25_string = "locked"; // 0x111 PushS
	SetProperty(var_25_string, var_16_bool); // 0x112 ObjFunc
	var_26_string = "lp"; // 0x114 PushS
	SetProperty(var_26_string, var_17_bool); // 0x115 ObjFunc
}


func_294(var_77_object)
{
	var_78_object = Obj(); var_79_object = Obj(); // 0x126 PushV
	GetDiaryRoot(var_79_object); // 0x127 Func
	var_80_bool = var_79_object == 0; // 0x129 Not
	if(var_80_bool == 0) goto Label_304; // 0x12a JumpB
	var_81_string = "Can't retrieve diary root"; // 0x12b PushS
	Trace(var_81_string); // 0x12c Func
	var_77_object = 0; // 0x12e MovB
	return 2; // 0x12f Return
	
Label_304:
	var_77_object = var_79_object; // 0x130 Mov
	return 2; // 0x131 Return
}


func_281()
{
	var_63_object = Obj(); var_64_object = Obj(); // 0x119 PushV
	var_65_int = 629; // 0x11a PushI
	var_66_int = 2; // 0x11b PushI
	var_67_int = 532893; // 0x11c PushI
	CreateDiaryEntry(var_64_object, var_65_int, var_66_int, var_67_int); // 0x11d Func
	var_68_bool = 0; var_69_object = Obj(); var_70_int = 0; // 0x11f PushV
	var_69_object = var_64_object; // 0x120 Mov
	var_70_int = 21; // 0x121 MovI
	func_307(var_68_bool, var_69_object, var_70_int); // 0x122 NEW_2
	return 2; // 0x124 Return
}


func_209(var_45_object)
{
	var_46_object = Obj(); var_47_object = Obj(); // 0xd1 PushV
	self(var_47_object); // 0xd2 Func
	var_45_object = var_47_object; // 0xd4 Mov
	return 2; // 0xd5 Return
}


func_113()
{
	var_3_int = 0; var_4_int = 0; // 0x71 PushV
	var_5_string = "d4q02"; // 0x72 PushS
	GetVariable(var_5_string, var_4_int); // 0x73 Func
	var_6_int = 1000; // 0x75 PushI
	var_7_bool = var_4_int != var_6_int; // 0x76 Neq
	if(var_7_bool == 0) goto Label_123; // 0x77 JumpB
	func_124(); // 0x79 NEW_2
	
Label_123:
	return 2; // 0x7b Return
}


func_307(var_68_bool, var_69_object, var_70_int)
{
	var_71_object = Obj(); var_72_object = Obj(); var_73_int = 0; var_74_object = Obj(); var_75_object = Obj(); var_76_int = 0; // 0x133 PushV
	var_77_object = Obj(); // 0x134 PushV
	func_294(var_77_object); // 0x135 NEW_2
	var_74_object = var_77_object; // 0x136 Mov
	Find(var_70_int, var_75_object); // 0x138 ObjFunc
	var_82_bool = var_75_object == 0; // 0x13a Not
	if(var_82_bool == 0) goto Label_322; // 0x13b JumpB
	var_83_string = "Can't find diary parent with id: "; // 0x13c PushS
	var_84_int = var_83_string + var_70_int; // 0x13d Add
	Trace(var_84_int); // 0x13e Func
	var_68_bool = 0; // 0x140 MovB
	return 6; // 0x141 Return
	
Label_322:
	AddChild(var_69_object); // 0x142 ObjFunc
	var_85_int = 7; // 0x144 PushI
	SendWorldWndMessage(var_85_int); // 0x145 Func
	GetCategory(var_76_int); // 0x147 ObjFunc
	SetDiarySection(var_76_int); // 0x149 Func
	var_68_bool = 0; // 0x14b MovB
	return 6; // 0x14c Return
}


func_244(var_3_string, var_4_bool)
{
	var_5_object = Obj(); var_6_object = Obj(); // 0xf4 PushV
	FindActor(var_6_object, var_3_string); // 0xf5 Func
	var_7_bool = var_6_object == 0; // 0xf7 Not
	if(var_7_bool == 0) goto Label_256; // 0xf8 JumpB
	var_8_string = "Door "; // 0xf9 PushS
	var_9_int = var_8_string + var_3_string; // 0xfa Add
	var_10_string = " not found"; // 0xfb PushS
	var_11_int = var_9_int + var_10_string; // 0xfc Add
	Trace(var_11_int); // 0xfd Func
	goto Label_259; // 0xff Jump
	
Label_259:
	return 2; // 0x103 Return
	
Label_256:
	var_12_string = "locked"; // 0x100 PushS
	SetProperty(var_12_string, var_4_bool); // 0x101 ObjFunc
}


func_215(var_11_object, var_12_string)
{
	var_13_object = Obj(); var_14_object = Obj(); var_15_object = Obj(); var_16_object = Obj(); // 0xd7 PushV
	GetMainOutdoorScene(var_15_object); // 0xd8 Func
	var_17_string = ".bin"; // 0xda PushS
	var_18_int = var_12_string + var_17_string; // 0xdb Add
	AddBlankActor(var_16_object, var_15_object, var_12_string, var_18_int); // 0xdc Func
	var_11_object = var_16_object; // 0xde Mov
	return 4; // 0xdf Return
}


func_185(var_30_int)
{
	var_31_float = 0; var_32_float = 0; // 0xb9 PushV
	GetGameTime(var_32_float); // 0xba Func
	var_33_int = 24; // 0xbc PushI
	var_34_float = var_30_int * var_33_int; // 0xbd Mult
	var_35_bool = var_32_float >= var_34_float; // 0xbe GE
	if(var_35_bool == 0) goto Label_196; // 0xbf JumpB
	func_154(); // 0xc1 NEW_2
	goto Label_203; // 0xc3 Jump
	
Label_203:
	return 2; // 0xcb Return
	
Label_196:
	var_48_int = 0; // 0xc4 PushI
	var_49_int = 24; // 0xc5 PushI
	var_50_float = var_30_int * var_49_int; // 0xc6 Mult
	SetTimeEvent(var_48_int, var_50_float); // 0xc7 Func
	Hold(); // 0xc9 Func
}


func_154()
{
	EventDisable(26); // 0x9a EventDisable
	var_36_object = var_0_object; // 0x9b PushT
	if(var_36_object == 0) goto Label_159; // 0x9c JumpB
	Remove(); // 0x9d TObjFunc
	
Label_159:
	var_37_string = ""; var_38_bool = 0; // 0x9f PushV
	var_37_string = "s_house7_03_door1"; // 0xa0 MovS
	var_38_bool = 0; // 0xa1 MovB
	func_244(var_37_string, var_38_bool); // 0xa2 NEW_2
	var_39_string = ""; var_40_bool = 0; // 0xa4 PushV
	var_39_string = "s_house7_03_door2"; // 0xa5 MovS
	var_40_bool = 0; // 0xa6 MovB
	func_244(var_39_string, var_40_bool); // 0xa7 NEW_2
	var_41_string = ""; var_42_bool = 0; // 0xa9 PushV
	var_41_string = "house7_03@door1"; // 0xaa MovS
	var_42_bool = 0; // 0xab MovB
	func_244(var_41_string, var_42_bool); // 0xac NEW_2
	var_43_string = ""; var_44_bool = 0; // 0xae PushV
	var_43_string = "house7_03@door2"; // 0xaf MovS
	var_44_bool = 0; // 0xb0 MovB
	func_244(var_43_string, var_44_bool); // 0xb1 NEW_2
	var_45_object = Obj(); // 0xb3 PushV
	func_209(var_45_object); // 0xb4 NEW_2
	RemoveActor(var_45_object); // 0xb6 Func
	return 0; // 0xb8 Return
}


func_124()
{
	var_8_string = "d4q02"; // 0x7c PushS
	var_9_int = -1; // 0x7d PushI
	SetVariable(var_8_string, var_9_int); // 0x7e Func
	func_154(); // 0x81 NEW_2
	return 0; // 0x83 Return
}


