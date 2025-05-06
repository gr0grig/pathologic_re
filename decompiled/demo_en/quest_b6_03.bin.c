task_0_event_26(var_0_object, var_1_object, var_2_object, var_3_object, var_4_object, var_5_bool, var_6_string)
{
	var_7_object = Obj(); var_8_object = Obj(); var_9_object = Obj(); var_10_object = Obj(); // 0x5 PushV
	Trace(var_6_string); // 0x6 Func
	var_11_string = "init_grave"; // 0x8 PushS
	var_12_bool = var_6_string == var_11_string; // 0x9 Eq
	if(var_12_bool == 0) goto Label_56; // 0xa JumpB
	var_13_string = "crypt2"; // 0xb PushS
	GetSceneByName(var_9_object, var_13_string); // 0xc Func
	var_14_object = Obj(); var_15_object = Obj(); var_16_string = ""; var_17_string = ""; var_18_string = ""; // 0xe PushV
	var_15_object = var_9_object; // 0xf Mov
	var_16_string = "pt_b6q03_diary"; // 0x10 MovS
	var_17_string = "scripted_container"; // 0x11 MovS
	var_18_string = "b6q03_item_diary.xml"; // 0x12 MovS
	func_241(var_14_object, var_15_object, var_16_string, var_17_string, var_18_string); // 0x13 NEW_2
	var_2_object = var_14_object; // 0x14 TMov
	GetMainOutdoorScene(var_9_object); // 0x16 Func
	var_32_string = "b6q03_light_fire"; // 0x18 PushS
	var_33_cvector = CVector(0.0, 0.0, 0.0); // 0x19 PushVec
	var_34_cvector = CVector(0.0, 0.0, 1.0); // 0x1a PushVec
	var_35_string = "light_fire.xml"; // 0x1b PushS
	AddActor(var_0_object, var_32_string, var_9_object, var_33_cvector, var_34_cvector, var_35_string); // 0x1c Func
	var_36_object = Obj(); var_37_object = Obj(); var_38_string = ""; var_39_string = ""; var_40_string = ""; // 0x1e PushV
	var_37_object = var_9_object; // 0x1f Mov
	var_38_string = "pt_b6q03_fire"; // 0x20 MovS
	var_39_string = "scripted"; // 0x21 MovS
	var_40_string = "fire.xml"; // 0x22 MovS
	func_241(var_36_object, var_37_object, var_38_string, var_39_string, var_40_string); // 0x23 NEW_2
	var_1_object = var_36_object; // 0x24 TMov
	var_41_object = Obj(); var_42_object = Obj(); var_43_string = ""; var_44_string = ""; var_45_string = ""; // 0x26 PushV
	var_42_object = var_9_object; // 0x27 Mov
	var_43_string = "pt_b6q03_agony1"; // 0x28 MovS
	var_44_string = "pers_worker"; // 0x29 MovS
	var_45_string = "agony1_man.xml"; // 0x2a MovS
	func_223(var_41_object, var_42_object, var_43_string, var_44_string, var_45_string); // 0x2b NEW_2
	var_3_object = var_41_object; // 0x2c TMov
	var_59_object = Obj(); var_60_object = Obj(); var_61_string = ""; var_62_string = ""; var_63_string = ""; // 0x2e PushV
	var_60_object = var_9_object; // 0x2f Mov
	var_61_string = "pt_b6q03_agony2"; // 0x30 MovS
	var_62_string = "pers_woman"; // 0x31 MovS
	var_63_string = "agony1_woman.xml"; // 0x32 MovS
	func_223(var_59_object, var_60_object, var_61_string, var_62_string, var_63_string); // 0x33 NEW_2
	var_4_object = var_59_object; // 0x34 TMov
	var_9_object = 0; // 0x36 SetNull
	goto Label_135; // 0x37 Jump
	
Label_135:
	return 4; // 0x87 Return
	
Label_56:
	var_64_string = "crypt2_load"; // 0x38 PushS
	var_65_bool = var_6_string == var_64_string; // 0x39 Eq
	if(var_65_bool == 0) goto Label_60; // 0x3a JumpB
	goto Label_135; // 0x3b Jump
	
Label_60:
	var_66_string = "crypt2_unload"; // 0x3c PushS
	var_67_bool = var_6_string == var_66_string; // 0x3d Eq
	if(var_67_bool == 0) goto Label_112; // 0x3e JumpB
	var_68_bool = var_5_bool == 0; // 0x3f Not
	if(var_68_bool == 0) goto Label_111; // 0x40 JumpB
	var_5_bool = 1; // 0x41 TMovB
	GetMainOutdoorScene(var_10_object); // 0x42 Func
	var_69_object = Obj(); var_70_object = Obj(); var_71_string = ""; var_72_string = ""; var_73_string = ""; // 0x44 PushV
	var_70_object = var_10_object; // 0x45 Mov
	var_71_string = "pt_b6q03_bomber1"; // 0x46 MovS
	var_72_string = "pers_bomber"; // 0x47 MovS
	var_73_string = "b6q03_bomber.xml"; // 0x48 MovS
	func_223(var_69_object, var_70_object, var_71_string, var_72_string, var_73_string); // 0x49 NEW_2
	var_74_object = Obj(); var_75_object = Obj(); var_76_string = ""; var_77_string = ""; var_78_string = ""; // 0x4b PushV
	var_75_object = var_10_object; // 0x4c Mov
	var_76_string = "pt_b6q03_bomber2"; // 0x4d MovS
	var_77_string = "pers_bomber"; // 0x4e MovS
	var_78_string = "b6q03_bomber.xml"; // 0x4f MovS
	func_223(var_74_object, var_75_object, var_76_string, var_77_string, var_78_string); // 0x50 NEW_2
	var_79_object = Obj(); var_80_object = Obj(); var_81_string = ""; var_82_string = ""; var_83_string = ""; // 0x52 PushV
	var_80_object = var_10_object; // 0x53 Mov
	var_81_string = "pt_b6q03_diseased1"; // 0x54 MovS
	var_82_string = "pers_vaxxabit"; // 0x55 MovS
	var_83_string = "vaxxabit_d.xml"; // 0x56 MovS
	func_223(var_79_object, var_80_object, var_81_string, var_82_string, var_83_string); // 0x57 NEW_2
	var_84_object = Obj(); var_85_object = Obj(); var_86_string = ""; var_87_string = ""; var_88_string = ""; // 0x59 PushV
	var_85_object = var_10_object; // 0x5a Mov
	var_86_string = "pt_b6q03_diseased2"; // 0x5b MovS
	var_87_string = "pers_vaxxabit"; // 0x5c MovS
	var_88_string = "vaxxabit_d.xml"; // 0x5d MovS
	func_223(var_84_object, var_85_object, var_86_string, var_87_string, var_88_string); // 0x5e NEW_2
	var_89_object = Obj(); var_90_object = Obj(); var_91_string = ""; var_92_string = ""; var_93_string = ""; // 0x60 PushV
	var_90_object = var_10_object; // 0x61 Mov
	var_91_string = "pt_b6q03_diseased3"; // 0x62 MovS
	var_92_string = "pers_vaxxabitka"; // 0x63 MovS
	var_93_string = "vaxxabitka_d.xml"; // 0x64 MovS
	func_223(var_89_object, var_90_object, var_91_string, var_92_string, var_93_string); // 0x65 NEW_2
	var_94_object = Obj(); var_95_object = Obj(); var_96_string = ""; var_97_string = ""; var_98_string = ""; // 0x67 PushV
	var_95_object = var_10_object; // 0x68 Mov
	var_96_string = "pt_b6q03_diseased4"; // 0x69 MovS
	var_97_string = "pers_vaxxabitka"; // 0x6a MovS
	var_98_string = "vaxxabitka_d.xml"; // 0x6b MovS
	func_223(var_94_object, var_95_object, var_96_string, var_97_string, var_98_string); // 0x6c NEW_2
	var_10_object = 0; // 0x6e SetNull
	
Label_111:
	goto Label_135; // 0x6f Jump
	
Label_112:
	var_99_string = "diary_taken"; // 0x70 PushS
	var_100_bool = var_6_string == var_99_string; // 0x71 Eq
	if(var_100_bool == 0) goto Label_122; // 0x72 JumpB
	func_259(); // 0x74 NEW_2
	var_124_string = "explode"; // 0x76 PushS
	PlaySound(var_124_string); // 0x77 Func
	goto Label_135; // 0x79 Jump
	
Label_122:
	var_125_string = "fail"; // 0x7a PushS
	var_126_bool = var_6_string == var_125_string; // 0x7b Eq
	if(var_126_bool == 0) goto Label_129; // 0x7c JumpB
	func_147(); // 0x7e NEW_2
	goto Label_135; // 0x80 Jump
	
Label_129:
	var_140_string = "completed"; // 0x81 PushS
	var_141_bool = var_6_string == var_140_string; // 0x82 Eq
	if(var_141_bool == 0) goto Label_135; // 0x83 JumpB
	func_155(); // 0x85 NEW_2
}


task_0_event_9(var_0_object, var_1_object, var_2_object, var_3_object, var_4_object, var_5_bool, var_6_int, var_7_float)
{
	func_136(); // 0xd6 NEW_2
	return 0; // 0xd8 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_object, var_4_object, var_5_bool)
{
	var_6_int = 0; // 0x0 PushV
	var_6_int = 6; // 0x1 MovI
	func_193(var_6_int); // 0x2 NEW_2
	return 0; // 0x4 Return
}


func_193(var_6_int)
{
	var_7_float = 0; var_8_float = 0; // 0xc1 PushV
	GetGameTime(var_8_float); // 0xc2 Func
	var_9_int = 24; // 0xc4 PushI
	var_10_float = var_6_int * var_9_int; // 0xc5 Mult
	var_11_bool = var_8_float >= var_10_float; // 0xc6 GE
	if(var_11_bool == 0) goto Label_204; // 0xc7 JumpB
	func_163(var_5_bool, var_6_int, var_7_float, var_8_float); // 0xc9 NEW_2
	goto Label_211; // 0xcb Jump
	
Label_211:
	return 2; // 0xd3 Return
	
Label_204:
	var_23_int = 0; // 0xcc PushI
	var_24_int = 24; // 0xcd PushI
	var_25_float = var_6_int * var_24_int; // 0xce Mult
	SetTimeEvent(var_23_int, var_25_float); // 0xcf Func
	Hold(); // 0xd1 Func
}


func_259()
{
	var_101_object = Obj(); var_102_object = Obj(); // 0x103 PushV
	var_103_int = 278; // 0x104 PushI
	var_104_int = 2; // 0x105 PushI
	var_105_int = 521339; // 0x106 PushI
	CreateDiaryEntry(var_102_object, var_103_int, var_104_int, var_105_int); // 0x107 Func
	var_106_bool = 0; var_107_object = Obj(); var_108_int = 0; // 0x109 PushV
	var_107_object = var_102_object; // 0x10a Mov
	var_108_int = 276; // 0x10b MovI
	func_285(var_106_bool, var_107_object, var_108_int); // 0x10c NEW_2
	return 2; // 0x10e Return
}


func_163(var_0_object, var_6_int, var_7_float, var_8_float)
{
	EventDisable(26); // 0xa3 EventDisable
	var_12_object = var_1_object; // 0xa4 PushT
	if(var_12_object == 0) goto Label_168; // 0xa5 JumpB
	RemoveActor(var_8_float); // 0xa6 Func
	
Label_168:
	var_13_object = var_0_object; // 0xa8 PushT
	if(var_13_object == 0) goto Label_172; // 0xa9 JumpB
	RemoveActor(var_0_object); // 0xaa Func
	
Label_172:
	var_14_object = var_2_object; // 0xac PushT
	if(var_14_object == 0) goto Label_177; // 0xad JumpB
	var_15_string = "cleanup"; // 0xae PushS
	Trigger(var_8_float, var_15_string); // 0xaf Func
	
Label_177:
	var_16_object = var_3_object; // 0xb1 PushT
	if(var_16_object == 0) goto Label_182; // 0xb2 JumpB
	var_17_string = "cleanup"; // 0xb3 PushS
	Trigger(var_7_float, var_17_string); // 0xb4 Func
	
Label_182:
	var_18_object = var_4_object; // 0xb6 PushT
	if(var_18_object == 0) goto Label_187; // 0xb7 JumpB
	var_19_string = "cleanup"; // 0xb8 PushS
	Trigger(var_6_int, var_19_string); // 0xb9 Func
	
Label_187:
	var_20_object = Obj(); // 0xbb PushV
	func_217(var_20_object); // 0xbc NEW_2
	RemoveActor(var_20_object); // 0xbe Func
	return 0; // 0xc0 Return
}


func_136()
{
	var_8_int = 0; var_9_int = 0; // 0x88 PushV
	var_10_string = "b6q03"; // 0x89 PushS
	GetVariable(var_10_string, var_9_int); // 0x8a Func
	var_11_int = 1000; // 0x8c PushI
	var_12_bool = var_9_int != var_11_int; // 0x8d Neq
	if(var_12_bool == 0) goto Label_146; // 0x8e JumpB
	func_147(); // 0x90 NEW_2
	
Label_146:
	return 2; // 0x92 Return
}


func_272(var_115_object)
{
	var_116_object = Obj(); var_117_object = Obj(); // 0x110 PushV
	GetDiaryRoot(var_117_object); // 0x111 Func
	var_118_bool = var_117_object == 0; // 0x113 Not
	if(var_118_bool == 0) goto Label_282; // 0x114 JumpB
	var_119_string = "Can't retrieve diary root"; // 0x115 PushS
	Trace(var_119_string); // 0x116 Func
	var_115_object = 0; // 0x118 MovB
	return 2; // 0x119 Return
	
Label_282:
	var_115_object = var_117_object; // 0x11a Mov
	return 2; // 0x11b Return
}


func_241(var_14_object, var_15_object, var_16_string, var_17_string, var_18_string)
{
	var_19_bool = 0; var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_object = Obj(); var_23_bool = 0; var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_object = Obj(); // 0xf1 PushV
	GetLocator(var_16_string, var_23_bool, var_24_cvector, var_25_cvector); // 0xf2 ObjFunc
	var_27_bool = var_23_bool == 0; // 0xf4 Not
	if(var_27_bool == 0) goto Label_254; // 0xf5 JumpB
	var_28_string = "Locator "; // 0xf6 PushS
	var_29_int = var_28_string + var_16_string; // 0xf7 Add
	var_30_string = " doesn't exist"; // 0xf8 PushS
	var_31_int = var_29_int + var_30_string; // 0xf9 Add
	Trace(var_31_int); // 0xfa Func
	var_26_object = 0; // 0xfc SetNull
	goto Label_256; // 0xfd Jump
	
Label_256:
	var_14_object = var_26_object; // 0x100 Mov
	return 8; // 0x101 Return
	
Label_254:
	AddActorByType(var_26_object, var_17_string, var_15_object, var_24_cvector, var_25_cvector, var_18_string); // 0xfe Func
}


func_147()
{
	var_13_string = "b6q03"; // 0x93 PushS
	var_14_int = -1; // 0x94 PushI
	SetVariable(var_13_string, var_14_int); // 0x95 Func
	func_163(var_6_int, var_7_float, var_8_int, var_9_int); // 0x98 NEW_2
	return 0; // 0x9a Return
}


func_217(var_20_object)
{
	var_21_object = Obj(); var_22_object = Obj(); // 0xd9 PushV
	self(var_22_object); // 0xda Func
	var_20_object = var_22_object; // 0xdc Mov
	return 2; // 0xdd Return
}


func_155()
{
	var_142_string = "b6q03"; // 0x9b PushS
	var_143_int = 1000; // 0x9c PushI
	SetVariable(var_142_string, var_143_int); // 0x9d Func
	func_163(var_7_object, var_8_object, var_9_object, var_10_object); // 0xa0 NEW_2
	return 0; // 0xa2 Return
}


func_285(var_106_bool, var_107_object, var_108_int)
{
	var_109_object = Obj(); var_110_object = Obj(); var_111_int = 0; var_112_object = Obj(); var_113_object = Obj(); var_114_int = 0; // 0x11d PushV
	var_115_object = Obj(); // 0x11e PushV
	func_272(var_115_object); // 0x11f NEW_2
	var_112_object = var_115_object; // 0x120 Mov
	Find(var_108_int, var_113_object); // 0x122 ObjFunc
	var_120_bool = var_113_object == 0; // 0x124 Not
	if(var_120_bool == 0) goto Label_300; // 0x125 JumpB
	var_121_string = "Can't find diary parent with id: "; // 0x126 PushS
	var_122_int = var_121_string + var_108_int; // 0x127 Add
	Trace(var_122_int); // 0x128 Func
	var_106_bool = 0; // 0x12a MovB
	return 6; // 0x12b Return
	
Label_300:
	AddChild(var_107_object); // 0x12c ObjFunc
	var_123_int = 7; // 0x12e PushI
	SendWorldWndMessage(var_123_int); // 0x12f Func
	GetCategory(var_114_int); // 0x131 ObjFunc
	SetDiarySection(var_114_int); // 0x133 Func
	var_106_bool = 0; // 0x135 MovB
	return 6; // 0x136 Return
}


func_223(var_41_object, var_42_object, var_43_string, var_44_string, var_45_string)
{
	var_46_bool = 0; var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); var_49_object = Obj(); var_50_bool = 0; var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_object = Obj(); // 0xdf PushV
	GetLocator(var_43_string, var_50_bool, var_51_cvector, var_52_cvector); // 0xe0 ObjFunc
	var_54_bool = var_50_bool == 0; // 0xe2 Not
	if(var_54_bool == 0) goto Label_236; // 0xe3 JumpB
	var_55_string = "Locator "; // 0xe4 PushS
	var_56_int = var_55_string + var_43_string; // 0xe5 Add
	var_57_string = " doesn't exist"; // 0xe6 PushS
	var_58_int = var_56_int + var_57_string; // 0xe7 Add
	Trace(var_58_int); // 0xe8 Func
	var_53_object = 0; // 0xea SetNull
	goto Label_238; // 0xeb Jump
	
Label_238:
	var_41_object = var_53_object; // 0xee Mov
	return 8; // 0xef Return
	
Label_236:
	AddActor(var_53_object, var_44_string, var_42_object, var_51_cvector, var_52_cvector, var_45_string); // 0xec Func
}


