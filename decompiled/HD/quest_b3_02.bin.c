task_0_event_26(var_0_object, var_1_int, var_2_string)
{
	var_3_object = Obj(); var_4_int = 0; var_5_int = 0; var_6_object = Obj(); var_7_object = Obj(); var_8_int = 0; var_9_object = Obj(); var_10_int = 0; var_11_object = Obj(); var_12_int = 0; var_13_int = 0; var_14_object = Obj(); var_15_object = Obj(); var_16_int = 0; var_17_object = Obj(); var_18_int = 0; // 0xd PushV
	Trace(var_2_string); // 0xe Func
	var_19_string = "place_grabitel1"; // 0x10 PushS
	var_20_bool = var_2_string == var_19_string; // 0x11 Eq
	if(var_20_bool == 0) goto Label_46; // 0x12 JumpB
	var_21_string = ""; var_22_bool = 0; // 0x13 PushV
	var_21_string = "warehouse_notkin@door1"; // 0x14 MovS
	var_22_bool = 1; // 0x15 MovB
	func_248(var_21_string, var_22_bool); // 0x16 NEW_2
	GetMainOutdoorScene(var_11_object); // 0x18 Func
	var_31_object = Obj(); var_32_object = Obj(); var_33_string = ""; var_34_string = ""; var_35_string = ""; // 0x1a PushV
	var_32_object = var_11_object; // 0x1b Mov
	var_33_string = "pt_b3q02_grabitel1_1"; // 0x1c MovS
	var_34_string = "pers_grabitel"; // 0x1d MovS
	var_35_string = "b3q02_grabitel1.xml"; // 0x1e MovS
	func_230(var_32_object, var_33_string, var_34_string, var_35_string); // 0x1f NEW_2
	add(var_31_object); // 0x21 TObjFunc
	var_49_object = Obj(); var_50_object = Obj(); var_51_string = ""; var_52_string = ""; var_53_string = ""; // 0x23 PushV
	var_50_object = var_11_object; // 0x24 Mov
	var_51_string = "pt_b3q02_grabitel1_2"; // 0x25 MovS
	var_52_string = "pers_grabitel"; // 0x26 MovS
	var_53_string = "b3q02_grabitel1.xml"; // 0x27 MovS
	func_230(var_50_object, var_51_string, var_52_string, var_53_string); // 0x28 NEW_2
	add(var_49_object); // 0x2a TObjFunc
	var_11_object = 0; // 0x2c SetNull
	goto Label_129; // 0x2d Jump
	
Label_129:
	return 16; // 0x81 Return
	
Label_46:
	var_54_string = "remove_grabitel"; // 0x2e PushS
	var_55_bool = var_2_string == var_54_string; // 0x2f Eq
	if(var_55_bool == 0) goto Label_54; // 0x30 JumpB
	var_56_object = Obj(); // 0x31 PushV
	var_56_object = var_0_object; // 0x32 MovT
	func_265(var_56_object); // 0x33 NEW_2
	goto Label_129; // 0x35 Jump
	
Label_54:
	var_67_string = "grabitel_attack"; // 0x36 PushS
	var_68_bool = var_2_string == var_67_string; // 0x37 Eq
	if(var_68_bool == 0) goto Label_79; // 0x38 JumpB
	size(var_12_int); // 0x39 TObjFunc
	var_13_int = 0; // 0x3b MovI
	
Label_60:
	var_69_bool = var_13_int < var_12_int; // 0x3c LT
	if(var_69_bool == 0) goto Label_78; // 0x3d JumpB
	get(var_14_object, var_13_int); // 0x3e TObjFunc
	var_70_object = var_14_object; // 0x40 Push
	if(var_70_object == 0) goto Label_74; // 0x41 JumpB
	GetActor(var_15_object); // 0x42 ObjFunc
	var_71_object = var_15_object; // 0x44 Push
	if(var_71_object == 0) goto Label_73; // 0x45 JumpB
	var_72_string = "attack"; // 0x46 PushS
	Trigger(var_15_object, var_72_string); // 0x47 Func
	
Label_73:
	var_15_object = 0; // 0x49 SetNull
	
Label_74:
	var_14_object = 0; // 0x4a SetNull
	var_73_int = 1; // 0x4b PushI
	var_13_int = var_13_int + var_73_int; // 0x4c Add2
	goto Label_60; // 0x4d Jump
	
Label_78:
	goto Label_129; // 0x4e Jump
	
Label_79:
	var_74_string = "grabitel_dead"; // 0x4f PushS
	var_75_bool = var_2_string == var_74_string; // 0x50 Eq
	if(var_75_bool == 0) goto Label_92; // 0x51 JumpB
	size(var_16_int); // 0x52 TObjFunc
	var_76_int = 1; // 0x54 PushI
	var_1_int = var_1_int + var_76_int; // 0x55 Add2
	var_77_bool = var_1_int == var_16_int; // 0x56 Eq
	if(var_77_bool == 0) goto Label_91; // 0x57 JumpB
	func_173(); // 0x59 NEW_2
	
Label_91:
	goto Label_129; // 0x5b Jump
	
Label_92:
	var_108_string = "place_grabitel2"; // 0x5c PushS
	var_109_bool = var_2_string == var_108_string; // 0x5d Eq
	if(var_109_bool == 0) goto Label_116; // 0x5e JumpB
	GetMainOutdoorScene(var_17_object); // 0x5f Func
	var_18_int = 1; // 0x61 MovI
	
Label_98:
	var_110_int = 4; // 0x62 PushI
	var_111_bool = var_18_int <= var_110_int; // 0x63 LE
	if(var_111_bool == 0) goto Label_114; // 0x64 JumpB
	var_112_object = Obj(); var_113_object = Obj(); var_114_string = ""; var_115_string = ""; var_116_string = ""; // 0x65 PushV
	var_113_object = var_17_object; // 0x66 Mov
	var_117_string = "pt_b3q02_grabitel2_"; // 0x67 PushS
	var_114_string = var_117_string + var_18_int; // 0x68 Add2
	var_115_string = "pers_grabitel"; // 0x69 MovS
	var_116_string = "b3q02_grabitel2.xml"; // 0x6a MovS
	func_230(var_113_object, var_114_string, var_115_string, var_116_string); // 0x6b NEW_2
	add(var_112_object); // 0x6d TObjFunc
	var_118_int = 1; // 0x6f PushI
	var_18_int = var_18_int + var_118_int; // 0x70 Add2
	goto Label_98; // 0x71 Jump
	
Label_114:
	var_17_object = 0; // 0x72 SetNull
	goto Label_129; // 0x73 Jump
	
Label_116:
	var_119_string = "fail"; // 0x74 PushS
	var_120_bool = var_2_string == var_119_string; // 0x75 Eq
	if(var_120_bool == 0) goto Label_123; // 0x76 JumpB
	func_141(); // 0x78 NEW_2
	goto Label_129; // 0x7a Jump
	
Label_123:
	var_129_string = "completed"; // 0x7b PushS
	var_130_bool = var_2_string == var_129_string; // 0x7c Eq
	if(var_130_bool == 0) goto Label_129; // 0x7d JumpB
	func_149(); // 0x7f NEW_2
}


task_0_event_9(var_0_object, var_1_int, var_2_int, var_3_float)
{
	func_130(); // 0xd7 NEW_2
	return 0; // 0xd9 Return
}


main(var_0_object, var_1_int)
{
	var_2_string = "b3q02"; // 0x0 PushS
	var_3_int = 1; // 0x1 PushI
	SetVariable(var_2_string, var_3_int); // 0x2 Func
	var_4_object = Obj(); // 0x4 PushV
	func_224(var_4_object); // 0x5 NEW_2
	var_0_object = var_4_object; // 0x6 TMov
	var_7_int = 0; // 0x8 PushV
	var_7_int = 3; // 0x9 MovI
	func_194(var_7_int); // 0xa NEW_2
	return 0; // 0xc Return
}


func_224(var_4_object)
{
	var_5_object = Obj(); var_6_object = Obj(); // 0xe0 PushV
	CreateObjectVector(var_6_object); // 0xe1 Func
	var_4_object = var_6_object; // 0xe3 Mov
	return 2; // 0xe4 Return
}


func_194(var_7_int)
{
	var_8_float = 0; var_9_float = 0; // 0xc2 PushV
	GetGameTime(var_9_float); // 0xc3 Func
	var_10_int = 24; // 0xc5 PushI
	var_11_float = var_7_int * var_10_int; // 0xc6 Mult
	var_12_bool = var_9_float >= var_11_float; // 0xc7 GE
	if(var_12_bool == 0) goto Label_205; // 0xc8 JumpB
	func_157(var_9_float); // 0xca NEW_2
	goto Label_212; // 0xcc Jump
	
Label_212:
	return 2; // 0xd4 Return
	
Label_205:
	var_37_int = 0; // 0xcd PushI
	var_38_int = 24; // 0xce PushI
	var_39_float = var_7_int * var_38_int; // 0xcf Mult
	SetTimeEvent(var_37_int, var_39_float); // 0xd0 Func
	Hold(); // 0xd2 Func
}


func_130()
{
	var_4_int = 0; var_5_int = 0; // 0x82 PushV
	var_6_string = "b3q02"; // 0x83 PushS
	GetVariable(var_6_string, var_5_int); // 0x84 Func
	var_7_int = 1000; // 0x86 PushI
	var_8_bool = var_5_int != var_7_int; // 0x87 Neq
	if(var_8_bool == 0) goto Label_140; // 0x88 JumpB
	func_141(); // 0x8a NEW_2
	
Label_140:
	return 2; // 0x8c Return
}


func_312(var_86_bool, var_87_object, var_88_int)
{
	var_89_object = Obj(); var_90_object = Obj(); var_91_int = 0; var_92_object = Obj(); var_93_object = Obj(); var_94_int = 0; // 0x138 PushV
	var_95_object = Obj(); // 0x139 PushV
	func_299(var_95_object); // 0x13a NEW_2
	var_92_object = var_95_object; // 0x13b Mov
	Find(var_88_int, var_93_object); // 0x13d ObjFunc
	var_100_bool = var_93_object == 0; // 0x13f Not
	if(var_100_bool == 0) goto Label_327; // 0x140 JumpB
	var_101_string = "Can't find diary parent with id: "; // 0x141 PushS
	var_102_int = var_101_string + var_88_int; // 0x142 Add
	Trace(var_102_int); // 0x143 Func
	var_86_bool = 0; // 0x145 MovB
	return 6; // 0x146 Return
	
Label_327:
	AddChild(var_87_object); // 0x147 ObjFunc
	var_103_int = 7; // 0x149 PushI
	SendWorldWndMessage(var_103_int); // 0x14a Func
	GetCategory(var_94_int); // 0x14c ObjFunc
	SetDiarySection(var_94_int); // 0x14e Func
	var_86_bool = 0; // 0x150 MovB
	return 6; // 0x151 Return
}


func_230(var_31_object, var_33_string, var_34_string, var_35_string)
{
	var_36_bool = 0; var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_object = Obj(); var_40_bool = 0; var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_object = Obj(); // 0xe6 PushV
	GetLocator(var_33_string, var_40_bool, var_41_cvector, var_42_cvector); // 0xe7 ObjFunc
	var_44_bool = var_40_bool == 0; // 0xe9 Not
	if(var_44_bool == 0) goto Label_243; // 0xea JumpB
	var_45_string = "Locator "; // 0xeb PushS
	var_46_int = var_45_string + var_33_string; // 0xec Add
	var_47_string = " doesn't exist"; // 0xed PushS
	var_48_int = var_46_int + var_47_string; // 0xee Add
	Trace(var_48_int); // 0xef Func
	var_43_object = 0; // 0xf1 SetNull
	goto Label_245; // 0xf2 Jump
	
Label_245:
	var_31_object = var_43_object; // 0xf5 Mov
	return 8; // 0xf6 Return
	
Label_243:
	AddStationaryActor(var_43_object, var_41_cvector, var_42_cvector, var_34_string, var_35_string); // 0xf3 ObjFunc
}


func_265(var_13_object)
{
	var_14_int = 0; var_15_int = 0; var_16_object = Obj(); var_17_int = 0; var_18_int = 0; var_19_object = Obj(); // 0x109 PushV
	var_20_object = var_13_object; // 0x10a Push
	if(var_20_object == 0) goto Label_285; // 0x10b JumpB
	size(var_17_int); // 0x10c ObjFunc
	var_18_int = 0; // 0x10e MovI
	
Label_271:
	var_21_bool = var_18_int < var_17_int; // 0x10f LT
	if(var_21_bool == 0) goto Label_283; // 0x110 JumpB
	get(var_19_object, var_18_int); // 0x111 ObjFunc
	var_22_object = var_19_object; // 0x113 Push
	if(var_22_object == 0) goto Label_279; // 0x114 JumpB
	Remove(); // 0x115 ObjFunc
	
Label_279:
	var_19_object = 0; // 0x117 SetNull
	var_23_int = 1; // 0x118 PushI
	var_18_int = var_18_int + var_23_int; // 0x119 Add2
	goto Label_271; // 0x11a Jump
	
Label_283:
	clear(); // 0x11b ObjFunc
	
Label_285:
	return 6; // 0x11d Return
}


func_299(var_95_object)
{
	var_96_object = Obj(); var_97_object = Obj(); // 0x12b PushV
	GetDiaryRoot(var_97_object); // 0x12c Func
	var_98_bool = var_97_object == 0; // 0x12e Not
	if(var_98_bool == 0) goto Label_309; // 0x12f JumpB
	var_99_string = "Can't retrieve diary root"; // 0x130 PushS
	Trace(var_99_string); // 0x131 Func
	var_95_object = 0; // 0x133 MovB
	return 2; // 0x134 Return
	
Label_309:
	var_95_object = var_97_object; // 0x135 Mov
	return 2; // 0x136 Return
}


func_173()
{
	var_78_int = 0; var_79_int = 0; // 0xad PushV
	size(var_79_int); // 0xae TObjFunc
	var_80_bool = var_79_int == 0; // 0xb0 Not
	if(var_80_bool == 0) goto Label_179; // 0xb1 JumpB
	return 2; // 0xb2 Return
	
Label_179:
	clear(); // 0xb3 TObjFunc
	func_286(); // 0xb6 NEW_2
	var_104_string = ""; var_105_bool = 0; // 0xb8 PushV
	var_104_string = "warehouse_notkin@door1"; // 0xb9 MovS
	var_105_bool = 0; // 0xba MovB
	func_248(var_104_string, var_105_bool); // 0xbb NEW_2
	var_106_string = "b3q02Dead"; // 0xbd PushS
	var_107_bool = 1; // 0xbe PushB
	SetVariable(var_106_string, var_107_bool); // 0xbf Func
	return 2; // 0xc1 Return
}


func_141()
{
	var_9_string = "b3q02"; // 0x8d PushS
	var_10_int = -1; // 0x8e PushI
	SetVariable(var_9_string, var_10_int); // 0x8f Func
	func_157(var_5_int); // 0x92 NEW_2
	return 0; // 0x94 Return
}


func_149()
{
	var_131_string = "b3q02"; // 0x95 PushS
	var_132_int = 1000; // 0x96 PushI
	SetVariable(var_131_string, var_132_int); // 0x97 Func
	func_157(var_18_int); // 0x9a NEW_2
	return 0; // 0x9c Return
}


func_248(var_24_string, var_25_bool)
{
	var_26_object = Obj(); var_27_object = Obj(); // 0xf8 PushV
	FindActor(var_27_object, var_24_string); // 0xf9 Func
	var_28_bool = var_27_object == 0; // 0xfb Not
	if(var_28_bool == 0) goto Label_260; // 0xfc JumpB
	var_29_string = "Door "; // 0xfd PushS
	var_30_int = var_29_string + var_24_string; // 0xfe Add
	var_31_string = " not found"; // 0xff PushS
	var_32_int = var_30_int + var_31_string; // 0x100 Add
	Trace(var_32_int); // 0x101 Func
	goto Label_263; // 0x103 Jump
	
Label_263:
	return 2; // 0x107 Return
	
Label_260:
	var_33_string = "locked"; // 0x104 PushS
	SetProperty(var_33_string, var_25_bool); // 0x105 ObjFunc
}


func_218(var_34_object)
{
	var_35_object = Obj(); var_36_object = Obj(); // 0xda PushV
	self(var_36_object); // 0xdb Func
	var_34_object = var_36_object; // 0xdd Mov
	return 2; // 0xde Return
}


func_157(var_0_object)
{
	EventDisable(26); // 0x9d EventDisable
	var_13_object = Obj(); // 0x9e PushV
	var_13_object = var_0_object; // 0x9f MovT
	func_265(var_13_object); // 0xa0 NEW_2
	var_24_string = ""; var_25_bool = 0; // 0xa2 PushV
	var_24_string = "warehouse_notkin@door1"; // 0xa3 MovS
	var_25_bool = 0; // 0xa4 MovB
	func_248(var_24_string, var_25_bool); // 0xa5 NEW_2
	var_34_object = Obj(); // 0xa7 PushV
	func_218(var_34_object); // 0xa8 NEW_2
	RemoveActor(var_34_object); // 0xaa Func
	return 0; // 0xac Return
}


func_286()
{
	var_81_object = Obj(); var_82_object = Obj(); // 0x11e PushV
	var_83_int = 231; // 0x11f PushI
	var_84_int = 2; // 0x120 PushI
	var_85_int = 519659; // 0x121 PushI
	CreateDiaryEntry(var_82_object, var_83_int, var_84_int, var_85_int); // 0x122 Func
	var_86_bool = 0; var_87_object = Obj(); var_88_int = 0; // 0x124 PushV
	var_87_object = var_82_object; // 0x125 Mov
	var_88_int = 227; // 0x126 MovI
	func_312(var_86_bool, var_87_object, var_88_int); // 0x127 NEW_2
	return 2; // 0x129 Return
}


