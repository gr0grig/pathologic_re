task_0_event_26(var_0_object, var_1_object, var_2_object, var_3_object, var_4_string)
{
	var_5_object = Obj(); var_6_object = Obj(); // 0x33 PushV
	Trace(var_4_string); // 0x34 Func
	var_7_string = "sobor_load"; // 0x36 PushS
	var_8_bool = var_4_string == var_7_string; // 0x37 Eq
	if(var_8_bool == 0) goto Label_193; // 0x38 JumpB
	func_401(); // 0x3a NEW_2
	var_32_string = "k5q04SoborVisit"; // 0x3c PushS
	var_33_int = 1; // 0x3d PushI
	SetVariable(var_32_string, var_33_int); // 0x3e Func
	var_34_string = "sobor"; // 0x40 PushS
	GetSceneByName(var_6_object, var_34_string); // 0x41 Func
	var_35_string = "k5q04_crowd1"; // 0x43 PushS
	var_36_cvector = CVector(0.0, 0.0, 0.0); // 0x44 PushVec
	var_37_cvector = CVector(0.0, 0.0, 1.0); // 0x45 PushVec
	var_38_string = "static_keep.xml"; // 0x46 PushS
	AddActor(var_37_cvector, var_35_string, var_6_object, var_36_cvector, var_37_cvector, var_38_string); // 0x47 Func
	Trace(var_5_object); // 0x49 Func
	var_39_string = "k5q04_crowd2"; // 0x4b PushS
	var_40_cvector = CVector(0.0, 0.0, 0.0); // 0x4c PushVec
	var_41_cvector = CVector(0.0, 0.0, 1.0); // 0x4d PushVec
	var_42_string = "static_keep.xml"; // 0x4e PushS
	AddActor(var_40_cvector, var_39_string, var_6_object, var_40_cvector, var_41_cvector, var_42_string); // 0x4f Func
	Trace(var_4_string); // 0x51 Func
	var_43_object = Obj(); var_44_object = Obj(); var_45_string = ""; var_46_string = ""; var_47_string = ""; // 0x53 PushV
	var_44_object = var_6_object; // 0x54 Mov
	var_45_string = "pt_k5q04_people1"; // 0x55 MovS
	var_46_string = "pers_woman"; // 0x56 MovS
	var_47_string = "k5q04_sobor_woman.xml"; // 0x57 MovS
	func_306(var_43_object, var_44_object, var_45_string, var_46_string, var_47_string); // 0x58 NEW_2
	add(var_43_object); // 0x5a TObjFunc
	var_61_object = Obj(); var_62_object = Obj(); var_63_string = ""; var_64_string = ""; var_65_string = ""; // 0x5c PushV
	var_62_object = var_6_object; // 0x5d Mov
	var_63_string = "pt_k5q04_people2"; // 0x5e MovS
	var_64_string = "pers_nudegirl"; // 0x5f MovS
	var_65_string = "k5q04_sobor_nudegirl.xml"; // 0x60 MovS
	func_306(var_61_object, var_62_object, var_63_string, var_64_string, var_65_string); // 0x61 NEW_2
	add(var_61_object); // 0x63 TObjFunc
	var_66_object = Obj(); var_67_object = Obj(); var_68_string = ""; var_69_string = ""; var_70_string = ""; // 0x65 PushV
	var_67_object = var_6_object; // 0x66 Mov
	var_68_string = "pt_k5q04_people3"; // 0x67 MovS
	var_69_string = "pers_worker"; // 0x68 MovS
	var_70_string = "k5q04_sobor_worker.xml"; // 0x69 MovS
	func_306(var_66_object, var_67_object, var_68_string, var_69_string, var_70_string); // 0x6a NEW_2
	add(var_66_object); // 0x6c TObjFunc
	var_71_object = Obj(); var_72_object = Obj(); var_73_string = ""; var_74_string = ""; var_75_string = ""; // 0x6e PushV
	var_72_object = var_6_object; // 0x6f Mov
	var_73_string = "pt_k5q04_people4"; // 0x70 MovS
	var_74_string = "pers_boy"; // 0x71 MovS
	var_75_string = "k5q04_sobor_boy.xml"; // 0x72 MovS
	func_306(var_71_object, var_72_object, var_73_string, var_74_string, var_75_string); // 0x73 NEW_2
	add(var_71_object); // 0x75 TObjFunc
	var_76_object = Obj(); var_77_object = Obj(); var_78_string = ""; var_79_string = ""; var_80_string = ""; // 0x77 PushV
	var_77_object = var_6_object; // 0x78 Mov
	var_78_string = "pt_k5q04_people5"; // 0x79 MovS
	var_79_string = "pers_salesman"; // 0x7a MovS
	var_80_string = "k5q04_sobor_salesman.xml"; // 0x7b MovS
	func_306(var_76_object, var_77_object, var_78_string, var_79_string, var_80_string); // 0x7c NEW_2
	add(var_76_object); // 0x7e TObjFunc
	var_81_object = Obj(); var_82_object = Obj(); var_83_string = ""; var_84_string = ""; var_85_string = ""; // 0x80 PushV
	var_82_object = var_6_object; // 0x81 Mov
	var_83_string = "pt_k5q04_people6"; // 0x82 MovS
	var_84_string = "pers_woman"; // 0x83 MovS
	var_85_string = "k5q04_sobor_woman.xml"; // 0x84 MovS
	func_306(var_81_object, var_82_object, var_83_string, var_84_string, var_85_string); // 0x85 NEW_2
	add(var_81_object); // 0x87 TObjFunc
	var_86_object = Obj(); var_87_object = Obj(); var_88_string = ""; var_89_string = ""; var_90_string = ""; // 0x89 PushV
	var_87_object = var_6_object; // 0x8a Mov
	var_88_string = "pt_k5q04_people7"; // 0x8b MovS
	var_89_string = "pers_worker"; // 0x8c MovS
	var_90_string = "k5q04_sobor_worker.xml"; // 0x8d MovS
	func_306(var_86_object, var_87_object, var_88_string, var_89_string, var_90_string); // 0x8e NEW_2
	add(var_86_object); // 0x90 TObjFunc
	var_91_object = Obj(); var_92_object = Obj(); var_93_string = ""; var_94_string = ""; var_95_string = ""; // 0x92 PushV
	var_92_object = var_6_object; // 0x93 Mov
	var_93_string = "pt_k5q04_people8"; // 0x94 MovS
	var_94_string = "pers_unosha"; // 0x95 MovS
	var_95_string = "k5q04_sobor_unosha.xml"; // 0x96 MovS
	func_306(var_91_object, var_92_object, var_93_string, var_94_string, var_95_string); // 0x97 NEW_2
	add(var_91_object); // 0x99 TObjFunc
	var_96_object = Obj(); var_97_object = Obj(); var_98_string = ""; var_99_string = ""; var_100_string = ""; // 0x9b PushV
	var_97_object = var_6_object; // 0x9c Mov
	var_98_string = "pt_k5q04_people9"; // 0x9d MovS
	var_99_string = "pers_girl"; // 0x9e MovS
	var_100_string = "k5q04_sobor_girl.xml"; // 0x9f MovS
	func_306(var_96_object, var_97_object, var_98_string, var_99_string, var_100_string); // 0xa0 NEW_2
	add(var_96_object); // 0xa2 TObjFunc
	var_101_object = Obj(); var_102_object = Obj(); var_103_string = ""; var_104_string = ""; var_105_string = ""; // 0xa4 PushV
	var_102_object = var_6_object; // 0xa5 Mov
	var_103_string = "pt_k5q04_people10"; // 0xa6 MovS
	var_104_string = "pers_worker"; // 0xa7 MovS
	var_105_string = "k5q04_sobor_worker.xml"; // 0xa8 MovS
	func_306(var_101_object, var_102_object, var_103_string, var_104_string, var_105_string); // 0xa9 NEW_2
	add(var_101_object); // 0xab TObjFunc
	var_106_object = Obj(); var_107_object = Obj(); var_108_string = ""; var_109_string = ""; var_110_string = ""; // 0xad PushV
	var_107_object = var_6_object; // 0xae Mov
	var_108_string = "pt_k5q04_people11"; // 0xaf MovS
	var_109_string = "pers_woman"; // 0xb0 MovS
	var_110_string = "k5q04_sobor_woman.xml"; // 0xb1 MovS
	func_306(var_106_object, var_107_object, var_108_string, var_109_string, var_110_string); // 0xb2 NEW_2
	add(var_106_object); // 0xb4 TObjFunc
	var_111_object = Obj(); var_112_object = Obj(); var_113_string = ""; var_114_string = ""; var_115_string = ""; // 0xb6 PushV
	var_112_object = var_6_object; // 0xb7 Mov
	var_113_string = "pt_k5q04_people12"; // 0xb8 MovS
	var_114_string = "pers_unosha"; // 0xb9 MovS
	var_115_string = "k5q04_sobor_unosha.xml"; // 0xba MovS
	func_306(var_111_object, var_112_object, var_113_string, var_114_string, var_115_string); // 0xbb NEW_2
	add(var_111_object); // 0xbd TObjFunc
	var_6_object = 0; // 0xbf SetNull
	goto Label_220; // 0xc0 Jump
	
Label_220:
	return 2; // 0xdc Return
	
Label_193:
	var_116_string = "sobor_unload"; // 0xc1 PushS
	var_117_bool = var_4_string == var_116_string; // 0xc2 Eq
	if(var_117_bool == 0) goto Label_214; // 0xc3 JumpB
	var_118_object = Obj(); // 0xc4 PushV
	var_118_object = var_1_object; // 0xc5 MovT
	func_359(var_118_object); // 0xc6 NEW_2
	var_129_string = ""; var_130_bool = 0; // 0xc8 PushV
	var_129_string = "sobor@door1"; // 0xc9 MovS
	var_130_bool = 1; // 0xca MovB
	func_342(var_129_string, var_130_bool); // 0xcb NEW_2
	Trace(var_5_object); // 0xcd Func
	RemoveActor(var_5_object); // 0xcf Func
	Trace(var_4_string); // 0xd1 Func
	RemoveActor(var_4_string); // 0xd3 Func
	goto Label_220; // 0xd5 Jump
	
Label_214:
	var_139_string = "completed"; // 0xd6 PushS
	var_140_bool = var_4_string == var_139_string; // 0xd7 Eq
	if(var_140_bool == 0) goto Label_220; // 0xd8 JumpB
	func_243(); // 0xda NEW_2
}


task_0_event_9(var_0_object, var_1_object, var_2_object, var_3_object, var_4_int, var_5_float)
{
	func_221(); // 0x129 NEW_2
	return 0; // 0x12b Return
}


main(var_0_object, var_1_object, var_2_object, var_3_object)
{
	var_4_object = Obj(); var_5_object = Obj(); // 0x0 PushV
	var_6_string = ""; var_7_bool = 0; // 0x1 PushV
	var_6_string = "sobor@door1"; // 0x2 MovS
	var_7_bool = 1; // 0x3 MovB
	func_342(var_6_string, var_7_bool); // 0x4 NEW_2
	CreateObjectVector(var_0_object); // 0x6 Func
	CreateObjectVector(var_5_object); // 0x8 Func
	GetMainOutdoorScene(var_5_object); // 0xa Func
	var_16_object = Obj(); var_17_object = Obj(); var_18_string = ""; var_19_string = ""; var_20_string = ""; // 0xc PushV
	var_17_object = var_5_object; // 0xd Mov
	var_18_string = "pt_k5q04_sobor_patrol1"; // 0xe MovS
	var_19_string = "pers_patrool"; // 0xf MovS
	var_20_string = "k5q04_sobor_guard_patrol.xml"; // 0x10 MovS
	func_324(var_17_object, var_18_string, var_19_string, var_20_string); // 0x11 NEW_2
	add(var_16_object); // 0x13 TObjFunc
	var_34_object = Obj(); var_35_object = Obj(); var_36_string = ""; var_37_string = ""; var_38_string = ""; // 0x15 PushV
	var_35_object = var_5_object; // 0x16 Mov
	var_36_string = "pt_k5q04_sobor_wasted"; // 0x17 MovS
	var_37_string = "pers_wasted_male"; // 0x18 MovS
	var_38_string = "k5q04_sobor_guard_wasted.xml"; // 0x19 MovS
	func_324(var_35_object, var_36_string, var_37_string, var_38_string); // 0x1a NEW_2
	add(var_34_object); // 0x1c TObjFunc
	var_39_object = Obj(); var_40_object = Obj(); var_41_string = ""; var_42_string = ""; var_43_string = ""; // 0x1e PushV
	var_40_object = var_5_object; // 0x1f Mov
	var_41_string = "pt_k5q04_sobor_patrol2"; // 0x20 MovS
	var_42_string = "pers_patrool"; // 0x21 MovS
	var_43_string = "k5q04_sobor_guard_patrol.xml"; // 0x22 MovS
	func_324(var_40_object, var_41_string, var_42_string, var_43_string); // 0x23 NEW_2
	add(var_39_object); // 0x25 TObjFunc
	var_44_string = "cot_eva"; // 0x27 PushS
	GetSceneByName(var_5_object, var_44_string); // 0x28 Func
	var_45_string = "danko"; // 0x2a PushS
	Trigger(var_5_object, var_45_string); // 0x2b Func
	var_46_int = 0; // 0x2d PushV
	var_46_int = 5; // 0x2e MovI
	func_276(var_46_int); // 0x2f NEW_2
	return 2; // 0x31 Return
}


func_324(var_16_object, var_18_string, var_19_string, var_20_string)
{
	var_21_bool = 0; var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_object = Obj(); var_25_bool = 0; var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_object = Obj(); // 0x144 PushV
	GetLocator(var_18_string, var_25_bool, var_26_cvector, var_27_cvector); // 0x145 ObjFunc
	var_29_bool = var_25_bool == 0; // 0x147 Not
	if(var_29_bool == 0) goto Label_337; // 0x148 JumpB
	var_30_string = "Locator "; // 0x149 PushS
	var_31_int = var_30_string + var_18_string; // 0x14a Add
	var_32_string = " doesn't exist"; // 0x14b PushS
	var_33_int = var_31_int + var_32_string; // 0x14c Add
	Trace(var_33_int); // 0x14d Func
	var_28_object = 0; // 0x14f SetNull
	goto Label_339; // 0x150 Jump
	
Label_339:
	var_16_object = var_28_object; // 0x153 Mov
	return 8; // 0x154 Return
	
Label_337:
	AddStationaryActor(var_28_object, var_26_cvector, var_27_cvector, var_19_string, var_20_string); // 0x151 ObjFunc
}


func_359(var_118_object)
{
	var_119_int = 0; var_120_int = 0; var_121_object = Obj(); var_122_int = 0; var_123_int = 0; var_124_object = Obj(); // 0x167 PushV
	var_125_object = var_118_object; // 0x168 Push
	if(var_125_object == 0) goto Label_379; // 0x169 JumpB
	size(var_122_int); // 0x16a ObjFunc
	var_123_int = 0; // 0x16c MovI
	
Label_365:
	var_126_bool = var_123_int < var_122_int; // 0x16d LT
	if(var_126_bool == 0) goto Label_377; // 0x16e JumpB
	get(var_124_object, var_123_int); // 0x16f ObjFunc
	var_127_object = var_124_object; // 0x171 Push
	if(var_127_object == 0) goto Label_373; // 0x172 JumpB
	RemoveActor(var_124_object); // 0x173 Func
	
Label_373:
	var_124_object = 0; // 0x175 SetNull
	var_128_int = 1; // 0x176 PushI
	var_123_int = var_123_int + var_128_int; // 0x177 Add2
	goto Label_365; // 0x178 Jump
	
Label_377:
	clear(); // 0x179 ObjFunc
	
Label_379:
	return 6; // 0x17b Return
}


func_235()
{
	var_11_string = "k5q04"; // 0xeb PushS
	var_12_int = -1; // 0xec PushI
	SetVariable(var_11_string, var_12_int); // 0xed Func
	func_251(); // 0xf0 NEW_2
	return 0; // 0xf2 Return
}


func_427(var_14_bool, var_15_object, var_16_int)
{
	var_17_object = Obj(); var_18_object = Obj(); var_19_int = 0; var_20_object = Obj(); var_21_object = Obj(); var_22_int = 0; // 0x1ab PushV
	var_23_object = Obj(); // 0x1ac PushV
	func_414(var_23_object); // 0x1ad NEW_2
	var_20_object = var_23_object; // 0x1ae Mov
	Find(var_16_int, var_21_object); // 0x1b0 ObjFunc
	var_28_bool = var_21_object == 0; // 0x1b2 Not
	if(var_28_bool == 0) goto Label_442; // 0x1b3 JumpB
	var_29_string = "Can't find diary parent with id: "; // 0x1b4 PushS
	var_30_int = var_29_string + var_16_int; // 0x1b5 Add
	Trace(var_30_int); // 0x1b6 Func
	var_14_bool = 0; // 0x1b8 MovB
	return 6; // 0x1b9 Return
	
Label_442:
	AddChild(var_15_object); // 0x1ba ObjFunc
	var_31_int = 7; // 0x1bc PushI
	SendWorldWndMessage(var_31_int); // 0x1bd Func
	GetCategory(var_22_int); // 0x1bf ObjFunc
	SetDiarySection(var_22_int); // 0x1c1 Func
	var_14_bool = 0; // 0x1c3 MovB
	return 6; // 0x1c4 Return
}


func_300(var_69_object)
{
	var_70_object = Obj(); var_71_object = Obj(); // 0x12c PushV
	self(var_71_object); // 0x12d Func
	var_69_object = var_71_object; // 0x12f Mov
	return 2; // 0x130 Return
}


func_401()
{
	var_9_object = Obj(); var_10_object = Obj(); // 0x191 PushV
	var_11_int = 746; // 0x192 PushI
	var_12_int = 2; // 0x193 PushI
	var_13_int = 539463; // 0x194 PushI
	CreateDiaryEntry(var_10_object, var_11_int, var_12_int, var_13_int); // 0x195 Func
	var_14_bool = 0; var_15_object = Obj(); var_16_int = 0; // 0x197 PushV
	var_15_object = var_10_object; // 0x198 Mov
	var_16_int = 740; // 0x199 MovI
	func_427(var_14_bool, var_15_object, var_16_int); // 0x19a NEW_2
	return 2; // 0x19c Return
}


func_306(var_43_object, var_44_object, var_45_string, var_46_string, var_47_string)
{
	var_48_bool = 0; var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); var_51_object = Obj(); var_52_bool = 0; var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); var_55_object = Obj(); // 0x132 PushV
	GetLocator(var_45_string, var_52_bool, var_53_cvector, var_54_cvector); // 0x133 ObjFunc
	var_56_bool = var_52_bool == 0; // 0x135 Not
	if(var_56_bool == 0) goto Label_319; // 0x136 JumpB
	var_57_string = "Locator "; // 0x137 PushS
	var_58_int = var_57_string + var_45_string; // 0x138 Add
	var_59_string = " doesn't exist"; // 0x139 PushS
	var_60_int = var_58_int + var_59_string; // 0x13a Add
	Trace(var_60_int); // 0x13b Func
	var_55_object = 0; // 0x13d SetNull
	goto Label_321; // 0x13e Jump
	
Label_321:
	var_43_object = var_55_object; // 0x141 Mov
	return 8; // 0x142 Return
	
Label_319:
	AddActor(var_55_object, var_46_string, var_44_object, var_53_cvector, var_54_cvector, var_47_string); // 0x13f Func
}


func_243()
{
	var_141_string = "k5q04"; // 0xf3 PushS
	var_142_int = 1000; // 0xf4 PushI
	SetVariable(var_141_string, var_142_int); // 0xf5 Func
	func_251(); // 0xf8 NEW_2
	return 0; // 0xfa Return
}


func_276(var_46_int)
{
	var_47_float = 0; var_48_float = 0; // 0x114 PushV
	GetGameTime(var_48_float); // 0x115 Func
	var_49_int = 24; // 0x117 PushI
	var_50_float = var_46_int * var_49_int; // 0x118 Mult
	var_51_bool = var_48_float >= var_50_float; // 0x119 GE
	if(var_51_bool == 0) goto Label_287; // 0x11a JumpB
	func_252(var_48_float); // 0x11c NEW_2
	goto Label_294; // 0x11e Jump
	
Label_294:
	return 2; // 0x126 Return
	
Label_287:
	var_72_int = 0; // 0x11f PushI
	var_73_int = 24; // 0x120 PushI
	var_74_float = var_46_int * var_73_int; // 0x121 Mult
	SetTimeEvent(var_72_int, var_74_float); // 0x122 Func
	Hold(); // 0x124 Func
}


func_342(var_6_string, var_7_bool)
{
	var_8_object = Obj(); var_9_object = Obj(); // 0x156 PushV
	FindActor(var_9_object, var_6_string); // 0x157 Func
	var_10_bool = var_9_object == 0; // 0x159 Not
	if(var_10_bool == 0) goto Label_354; // 0x15a JumpB
	var_11_string = "Door "; // 0x15b PushS
	var_12_int = var_11_string + var_6_string; // 0x15c Add
	var_13_string = " not found"; // 0x15d PushS
	var_14_int = var_12_int + var_13_string; // 0x15e Add
	Trace(var_14_int); // 0x15f Func
	goto Label_357; // 0x161 Jump
	
Label_357:
	return 2; // 0x165 Return
	
Label_354:
	var_15_string = "locked"; // 0x162 PushS
	SetProperty(var_15_string, var_7_bool); // 0x163 ObjFunc
}


func_380(var_54_object)
{
	var_55_int = 0; var_56_int = 0; var_57_object = Obj(); var_58_int = 0; var_59_int = 0; var_60_object = Obj(); // 0x17c PushV
	var_61_object = var_54_object; // 0x17d Push
	if(var_61_object == 0) goto Label_400; // 0x17e JumpB
	size(var_58_int); // 0x17f ObjFunc
	var_59_int = 0; // 0x181 MovI
	
Label_386:
	var_62_bool = var_59_int < var_58_int; // 0x182 LT
	if(var_62_bool == 0) goto Label_398; // 0x183 JumpB
	get(var_60_object, var_59_int); // 0x184 ObjFunc
	var_63_object = var_60_object; // 0x186 Push
	if(var_63_object == 0) goto Label_394; // 0x187 JumpB
	Remove(); // 0x188 ObjFunc
	
Label_394:
	var_60_object = 0; // 0x18a SetNull
	var_64_int = 1; // 0x18b PushI
	var_59_int = var_59_int + var_64_int; // 0x18c Add2
	goto Label_386; // 0x18d Jump
	
Label_398:
	clear(); // 0x18e ObjFunc
	
Label_400:
	return 6; // 0x190 Return
}


func_251()
{
	return 0; // 0xfb Return
}


func_252(var_0_object)
{
	var_52_object = Obj(); var_53_object = Obj(); // 0xfc PushV
	EventDisable(26); // 0xfd EventDisable
	var_54_object = Obj(); // 0xfe PushV
	var_54_object = var_0_object; // 0xff MovT
	func_380(var_54_object); // 0x100 NEW_2
	var_65_string = ""; var_66_bool = 0; // 0x102 PushV
	var_65_string = "sobor@door1"; // 0x103 MovS
	var_66_bool = 1; // 0x104 MovB
	func_342(var_65_string, var_66_bool); // 0x105 NEW_2
	var_67_string = "cot_eva"; // 0x107 PushS
	GetSceneByName(var_53_object, var_67_string); // 0x108 Func
	var_68_string = "nodanko"; // 0x10a PushS
	Trigger(var_53_object, var_68_string); // 0x10b Func
	var_69_object = Obj(); // 0x10d PushV
	func_300(var_69_object); // 0x10e NEW_2
	RemoveActor(var_69_object); // 0x110 Func
	return 2; // 0x112 Return
}


func_221()
{
	var_6_int = 0; var_7_int = 0; // 0xdd PushV
	var_8_string = "k5q04"; // 0xde PushS
	GetVariable(var_8_string, var_7_int); // 0xdf Func
	var_9_int = 1000; // 0xe1 PushI
	var_10_bool = var_7_int != var_9_int; // 0xe2 Neq
	if(var_10_bool == 0) goto Label_231; // 0xe3 JumpB
	func_235(); // 0xe5 NEW_2
	
Label_231:
	func_252(var_7_int); // 0xe8 NEW_2
	return 2; // 0xea Return
}


func_414(var_23_object)
{
	var_24_object = Obj(); var_25_object = Obj(); // 0x19e PushV
	GetDiaryRoot(var_25_object); // 0x19f Func
	var_26_bool = var_25_object == 0; // 0x1a1 Not
	if(var_26_bool == 0) goto Label_424; // 0x1a2 JumpB
	var_27_string = "Can't retrieve diary root"; // 0x1a3 PushS
	Trace(var_27_string); // 0x1a4 Func
	var_23_object = 0; // 0x1a6 MovB
	return 2; // 0x1a7 Return
	
Label_424:
	var_23_object = var_25_object; // 0x1a8 Mov
	return 2; // 0x1a9 Return
}


