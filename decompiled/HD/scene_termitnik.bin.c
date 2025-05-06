task_0_event_5(var_0_object, var_1_object, var_2_object)
{
	var_3_int = 0; var_4_bool = 0; var_5_object = Obj(); var_6_int = 0; var_7_int = 0; var_8_int = 0; var_9_int = 0; var_10_int = 0; var_11_int = 0; var_12_int = 0; var_13_int = 0; var_14_bool = 0; var_15_object = Obj(); var_16_int = 0; var_17_int = 0; var_18_int = 0; var_19_int = 0; var_20_int = 0; var_21_int = 0; var_22_int = 0; // 0x8 PushV
	var_23_bool = 0; var_24_string = ""; var_25_string = ""; // 0x9 PushV
	var_24_string = "quest_d8_04"; // 0xa MovS
	var_25_string = "termitnik_load"; // 0xb MovS
	func_318(var_23_bool, var_24_string, var_25_string); // 0xc NEW_2
	var_29_bool = 0; var_30_string = ""; var_31_string = ""; // 0xe PushV
	var_30_string = "quest_d8_03"; // 0xf MovS
	var_31_string = "termitnik_load"; // 0x10 MovS
	func_318(var_29_bool, var_30_string, var_31_string); // 0x11 NEW_2
	var_13_int = 0; // 0x13 MovI
	
Label_20:
	var_32_string = "pt_spawn"; // 0x14 PushS
	var_33_int = 1; // 0x15 PushI
	var_34_int = var_13_int + var_33_int; // 0x16 Add
	var_35_int = var_32_string + var_34_int; // 0x17 Add
	GetLocator(var_35_int, var_14_bool); // 0x18 Func
	var_36_bool = var_14_bool == 0; // 0x1a Not
	if(var_36_bool == 0) goto Label_29; // 0x1b JumpB
	goto Label_32; // 0x1c Jump
	
Label_32:
	var_37_int = 18; // 0x20 PushI
	var_38_bool = var_13_int < var_37_int; // 0x21 LT
	if(var_38_bool == 0) goto Label_39; // 0x22 JumpB
	var_39_string = "Not enough spawn points"; // 0x23 PushS
	Trace(var_39_string); // 0x24 Func
	goto Label_106; // 0x26 Jump
	
Label_106:
	func_167(var_21_int, var_22_int); // 0x6b NEW_2
	return 20; // 0x6d Return
	
Label_39:
	CreateIntVector(var_15_object); // 0x27 Func
	var_16_int = 1; // 0x29 MovI
	
Label_42:
	var_109_bool = var_16_int <= var_13_int; // 0x2a LE
	if(var_109_bool == 0) goto Label_49; // 0x2b JumpB
	add(var_16_int); // 0x2c ObjFunc
	var_110_int = 1; // 0x2e PushI
	var_16_int = var_16_int + var_110_int; // 0x2f Add2
	goto Label_42; // 0x30 Jump
	
Label_49:
	var_17_int = 0; // 0x31 MovI
	
Label_50:
	var_111_int = 12; // 0x32 PushI
	var_112_bool = var_17_int < var_111_int; // 0x33 LT
	if(var_112_bool == 0) goto Label_77; // 0x34 JumpB
	irand(var_18_int, var_13_int); // 0x35 Func
	get(var_19_int, var_18_int); // 0x37 ObjFunc
	remove(var_18_int); // 0x39 ObjFunc
	var_113_int = -1; // 0x3b PushI
	var_13_int = var_13_int + var_113_int; // 0x3c Add2
	var_114_object = Obj(); var_115_object = Obj(); var_116_string = ""; var_117_string = ""; var_118_string = ""; // 0x3d PushV
	var_119_object = Obj(); // 0x3e PushV
	func_288(var_119_object); // 0x3f NEW_2
	var_115_object = var_119_object; // 0x40 Mov
	var_120_string = "pt_spawn"; // 0x42 PushS
	var_116_string = var_120_string + var_19_int; // 0x43 Add2
	var_117_string = "pers_butcher"; // 0x44 MovS
	var_118_string = "termitnik_butcher.xml"; // 0x45 MovS
	func_300(var_114_object, var_115_object, var_116_string, var_117_string, var_118_string); // 0x46 NEW_2
	add(var_114_object); // 0x48 TObjFunc
	var_121_int = 1; // 0x4a PushI
	var_17_int = var_17_int + var_121_int; // 0x4b Add2
	goto Label_50; // 0x4c Jump
	
Label_77:
	var_20_int = 0; // 0x4d MovI
	
Label_78:
	var_122_int = 6; // 0x4e PushI
	var_123_bool = var_20_int < var_122_int; // 0x4f LT
	if(var_123_bool == 0) goto Label_105; // 0x50 JumpB
	irand(var_21_int, var_13_int); // 0x51 Func
	get(var_22_int, var_21_int); // 0x53 ObjFunc
	remove(var_21_int); // 0x55 ObjFunc
	var_124_int = -1; // 0x57 PushI
	var_13_int = var_13_int + var_124_int; // 0x58 Add2
	var_125_object = Obj(); var_126_object = Obj(); var_127_string = ""; var_128_string = ""; var_129_string = ""; // 0x59 PushV
	var_130_object = Obj(); // 0x5a PushV
	func_288(var_130_object); // 0x5b NEW_2
	var_126_object = var_130_object; // 0x5c Mov
	var_131_string = "pt_spawn"; // 0x5e PushS
	var_127_string = var_131_string + var_22_int; // 0x5f Add2
	var_128_string = "pers_morlok"; // 0x60 MovS
	var_129_string = "termitnik_morlok.xml"; // 0x61 MovS
	func_300(var_125_object, var_126_object, var_127_string, var_128_string, var_129_string); // 0x62 NEW_2
	add(var_125_object); // 0x64 TObjFunc
	var_132_int = 1; // 0x66 PushI
	var_20_int = var_20_int + var_132_int; // 0x67 Add2
	goto Label_78; // 0x68 Jump
	
Label_105:
	var_15_object = 0; // 0x69 SetNull
	
Label_29:
	var_133_int = 1; // 0x1d PushI
	var_13_int = var_13_int + var_133_int; // 0x1e Add2
	goto Label_20; // 0x1f Jump
}


task_0_event_6(var_0_object, var_1_object, var_2_object)
{
	var_3_object = Obj(); // 0x6e PushV
	var_3_object = var_2_object; // 0x6f MovT
	func_330(var_3_object); // 0x70 NEW_2
	func_231(var_2_object); // 0x73 NEW_2
	return 0; // 0x75 Return
}


main(var_0_object, var_1_object, var_2_object)
{
	var_3_object = Obj(); // 0x0 PushV
	func_294(var_3_object); // 0x1 NEW_2
	var_2_object = var_3_object; // 0x2 TMov
	func_149(var_1_object, var_2_object); // 0x5 NEW_2
	return 0; // 0x7 Return
}


func_288(var_92_object)
{
	var_93_object = Obj(); var_94_object = Obj(); // 0x120 PushV
	self(var_94_object); // 0x121 Func
	var_92_object = var_94_object; // 0x123 Mov
	return 2; // 0x124 Return
}


func_294(var_3_object)
{
	var_4_object = Obj(); var_5_object = Obj(); // 0x126 PushV
	CreateObjectVector(var_5_object); // 0x127 Func
	var_3_object = var_5_object; // 0x129 Mov
	return 2; // 0x12a Return
}


func_167(var_0_object, var_1_object)
{
	var_40_int = 0; var_41_int = 0; var_42_int = 0; var_43_int = 0; var_44_int = 0; var_45_string = ""; var_46_string = ""; var_47_string = ""; var_48_int = 0; var_49_int = 0; var_50_int = 0; var_51_int = 0; var_52_int = 0; var_53_string = ""; var_54_string = ""; var_55_string = ""; // 0xa7 PushV
	var_56_bool = var_1_object == 0; // 0xa8 Not
	if(var_56_bool == 0) goto Label_174; // 0xa9 JumpB
	var_57_object = Obj(); // 0xaa PushV
	func_294(var_57_object); // 0xab NEW_2
	var_1_object = var_57_object; // 0xac TMov
	
Label_174:
	var_60_bool = var_0_object == 0; // 0xae Not
	if(var_60_bool == 0) goto Label_178; // 0xaf JumpB
	CreateIntVector(var_0_object); // 0xb0 Func
	
Label_178:
	var_61_object = Obj(); // 0xb2 PushV
	var_61_object = var_1_object; // 0xb3 MovT
	func_330(var_61_object); // 0xb4 NEW_2
	size(var_48_int); // 0xb6 TObjFunc
	var_49_int = 0; // 0xb8 MovI
	
Label_185:
	var_72_bool = var_49_int < var_48_int; // 0xb9 LT
	if(var_72_bool == 0) goto Label_230; // 0xba JumpB
	get(var_50_int, var_49_int); // 0xbb TObjFunc
	var_73_int = 1; // 0xbd PushI
	var_74_int = var_49_int + var_73_int; // 0xbe Add
	get(var_51_int, var_74_int); // 0xbf TObjFunc
	var_75_int = 2; // 0xc1 PushI
	var_76_int = var_49_int + var_75_int; // 0xc2 Add
	get(var_52_int, var_76_int); // 0xc3 TObjFunc
	var_77_string = ""; var_78_int = 0; var_79_int = 0; // 0xc5 PushV
	var_78_int = var_50_int; // 0xc6 Mov
	var_79_int = var_51_int; // 0xc7 Mov
	func_139(var_78_int, var_79_int); // 0xc8 NEW_2
	var_53_string = var_77_string; // 0xc9 Mov
	var_81_string = ""; var_82_int = 0; var_83_int = 0; // 0xcb PushV
	var_82_int = var_50_int; // 0xcc Mov
	var_83_int = var_52_int; // 0xcd Mov
	func_143(var_83_int); // 0xce NEW_2
	var_54_string = var_81_string; // 0xcf Mov
	var_84_string = ""; var_85_int = 0; var_86_int = 0; // 0xd1 PushV
	var_85_int = var_50_int; // 0xd2 Mov
	var_86_int = var_52_int; // 0xd3 Mov
	func_146(var_86_int); // 0xd4 NEW_2
	var_55_string = var_84_string; // 0xd5 Mov
	var_87_object = Obj(); var_88_object = Obj(); var_89_string = ""; var_90_string = ""; var_91_string = ""; // 0xd7 PushV
	var_92_object = Obj(); // 0xd8 PushV
	func_288(var_92_object); // 0xd9 NEW_2
	var_88_object = var_92_object; // 0xda Mov
	var_89_string = var_53_string; // 0xdc Mov
	var_90_string = var_54_string; // 0xdd Mov
	var_91_string = var_55_string; // 0xde Mov
	func_300(var_87_object, var_88_object, var_89_string, var_90_string, var_91_string); // 0xdf NEW_2
	add(var_87_object); // 0xe1 TObjFunc
	var_108_int = 3; // 0xe3 PushI
	var_49_int = var_49_int + var_108_int; // 0xe4 Add2
	goto Label_185; // 0xe5 Jump
	
Label_230:
	return 16; // 0xe6 Return
}


func_231(var_1_object)
{
	var_14_int = 0; var_15_int = 0; var_16_object = Obj(); var_17_bool = 0; var_18_int = 0; var_19_int = 0; var_20_object = Obj(); var_21_bool = 0; // 0xe7 PushV
	size(var_18_int); // 0xe8 TObjFunc
	var_19_int = 0; // 0xea MovI
	
Label_235:
	var_22_bool = var_19_int < var_18_int; // 0xeb LT
	if(var_22_bool == 0) goto Label_271; // 0xec JumpB
	get(var_20_object, var_19_int); // 0xed TObjFunc
	var_23_bool = var_20_object != 0; // 0xef NullNeq
	if(var_23_bool == 0) goto Label_257; // 0xf0 JumpB
	IsDead(var_21_bool); // 0xf1 ObjFunc
	var_24_bool = var_21_bool == 0; // 0xf3 Not
	if(var_24_bool == 0) goto Label_255; // 0xf4 JumpB
	var_25_bool = 0; var_26_object = Obj(); var_27_string = ""; // 0xf5 PushV
	var_26_object = var_20_object; // 0xf6 Mov
	var_27_string = "ToDie"; // 0xf7 MovS
	func_276(var_25_bool, var_26_object, var_27_string); // 0xf8 NEW_2
	var_34_bool = var_25_bool == 0; // 0xfa Not
	if(var_34_bool == 0) goto Label_255; // 0xfb JumpB
	var_35_int = 1; // 0xfc PushI
	var_19_int = var_19_int + var_35_int; // 0xfd Add2
	goto Label_270; // 0xfe Jump
	
Label_270:
	goto Label_235; // 0x10e Jump
	
Label_255:
	RemoveActor(var_20_object); // 0xff Func
	
Label_257:
	remove(var_19_int); // 0x101 TObjFunc
	var_36_int = 3; // 0x103 PushI
	var_37_float = var_19_int * var_36_int; // 0x104 Mult
	var_38_int = 1; // 0x105 PushI
	var_39_int = var_19_int + var_38_int; // 0x106 Add
	var_40_int = 3; // 0x107 PushI
	var_41_float = var_39_int * var_40_int; // 0x108 Mult
	remove(var_37_float, var_41_float); // 0x109 TObjFunc
	var_42_int = -1; // 0x10b PushI
	var_18_int = var_18_int + var_42_int; // 0x10c Add2
	var_20_object = 0; // 0x10d SetNull
	
Label_271:
	var_43_object = Obj(); // 0x10f PushV
	var_43_object = var_1_object; // 0x110 MovT
	func_330(var_43_object); // 0x111 NEW_2
	return 8; // 0x113 Return
}


func_330(var_3_object)
{
	var_4_int = 0; var_5_int = 0; var_6_object = Obj(); var_7_int = 0; var_8_int = 0; var_9_object = Obj(); // 0x14a PushV
	var_10_object = var_3_object; // 0x14b Push
	if(var_10_object == 0) goto Label_350; // 0x14c JumpB
	size(var_7_int); // 0x14d ObjFunc
	var_8_int = 0; // 0x14f MovI
	
Label_336:
	var_11_bool = var_8_int < var_7_int; // 0x150 LT
	if(var_11_bool == 0) goto Label_348; // 0x151 JumpB
	get(var_9_object, var_8_int); // 0x152 ObjFunc
	var_12_object = var_9_object; // 0x154 Push
	if(var_12_object == 0) goto Label_344; // 0x155 JumpB
	RemoveActor(var_9_object); // 0x156 Func
	
Label_344:
	var_9_object = 0; // 0x158 SetNull
	var_13_int = 1; // 0x159 PushI
	var_8_int = var_8_int + var_13_int; // 0x15a Add2
	goto Label_336; // 0x15b Jump
	
Label_348:
	clear(); // 0x15c ObjFunc
	
Label_350:
	return 6; // 0x15e Return
}


func_139(var_77_string, var_79_int)
{
	var_80_string = "pt_agony"; // 0x8c PushS
	var_77_string = var_80_string + var_79_int; // 0x8d Add2
	return 0; // 0x8e Return
}


func_300(var_87_object, var_88_object, var_89_string, var_90_string, var_91_string)
{
	var_95_bool = 0; var_96_cvector = CVector(0,0,0); var_97_cvector = CVector(0,0,0); var_98_object = Obj(); var_99_bool = 0; var_100_cvector = CVector(0,0,0); var_101_cvector = CVector(0,0,0); var_102_object = Obj(); // 0x12c PushV
	GetLocator(var_89_string, var_99_bool, var_100_cvector, var_101_cvector); // 0x12d ObjFunc
	var_103_bool = var_99_bool == 0; // 0x12f Not
	if(var_103_bool == 0) goto Label_313; // 0x130 JumpB
	var_104_string = "Locator "; // 0x131 PushS
	var_105_int = var_104_string + var_89_string; // 0x132 Add
	var_106_string = " doesn't exist"; // 0x133 PushS
	var_107_int = var_105_int + var_106_string; // 0x134 Add
	Trace(var_107_int); // 0x135 Func
	var_102_object = 0; // 0x137 SetNull
	goto Label_315; // 0x138 Jump
	
Label_315:
	var_87_object = var_102_object; // 0x13b Mov
	return 8; // 0x13c Return
	
Label_313:
	AddActor(var_102_object, var_90_string, var_88_object, var_100_cvector, var_101_cvector, var_91_string); // 0x139 Func
}


func_143(var_81_string)
{
	var_81_string = "pers_morlok"; // 0x90 MovS
	return 0; // 0x91 Return
}


func_146(var_84_string)
{
	var_84_string = "agony1_morlok.xml"; // 0x93 MovS
	return 0; // 0x94 Return
}


func_276(var_25_bool, var_26_object, var_27_string)
{
	var_28_bool = 0; var_29_bool = 0; // 0x114 PushV
	var_30_string = "HasProperty"; // 0x115 PushS
	var_31_int = 2; // 0x116 PushI
	var_32_bool = IsFuncExist(var_26_object, var_30_string, var_31_int); // 0x117 FuncExist
	var_33_bool = var_32_bool == 0; // 0x118 Not
	if(var_33_bool == 0) goto Label_284; // 0x119 JumpB
	var_25_bool = 0; // 0x11a MovB
	return 2; // 0x11b Return
	
Label_284:
	HasProperty(var_27_string, var_29_bool); // 0x11c ObjFunc
	var_25_bool = var_29_bool; // 0x11e Mov
	return 2; // 0x11f Return
}


func_149(var_0_object, var_1_object)
{
	var_6_bool = var_1_object == 0; // 0x95 Not
	if(var_6_bool == 0) goto Label_155; // 0x96 JumpB
	var_7_object = Obj(); // 0x97 PushV
	func_294(var_7_object); // 0x98 NEW_2
	var_1_object = var_7_object; // 0x99 TMov
	
Label_155:
	var_8_bool = var_0_object == 0; // 0x9b Not
	if(var_8_bool == 0) goto Label_159; // 0x9c JumpB
	CreateIntVector(var_0_object); // 0x9d Func
	
Label_159:
	var_9_object = Obj(); // 0x9f PushV
	var_9_object = var_0_object; // 0xa0 MovT
	func_118(); // 0xa1 NEW_2
	
Label_163:
	Hold(); // 0xa3 Func
	goto Label_163; // 0xa5 Jump
}


func_118()
{
	var_10_int = 0; var_11_bool = 0; var_12_int = 0; var_13_bool = 0; // 0x76 PushV
	var_12_int = 1; // 0x77 MovI
	
Label_120:
	var_14_string = "pt_agony"; // 0x78 PushS
	var_15_int = var_14_string + var_12_int; // 0x79 Add
	GetLocator(var_15_int, var_13_bool); // 0x7a Func
	var_16_bool = var_13_bool == 0; // 0x7c Not
	if(var_16_bool == 0) goto Label_127; // 0x7d JumpB
	goto Label_138; // 0x7e Jump
	
Label_138:
	return 4; // 0x8a Return
	
Label_127:
	var_17_int = 0; // 0x7f PushI
	add(var_17_int); // 0x80 ObjFunc
	add(var_12_int); // 0x82 ObjFunc
	var_18_int = 0; // 0x84 PushI
	add(var_18_int); // 0x85 ObjFunc
	var_19_int = 1; // 0x87 PushI
	var_12_int = var_12_int + var_19_int; // 0x88 Add2
	goto Label_120; // 0x89 Jump
}


func_318(var_23_bool, var_24_string, var_25_string)
{
	var_26_object = Obj(); var_27_object = Obj(); // 0x13e PushV
	FindActor(var_27_object, var_24_string); // 0x13f Func
	var_28_bool = var_27_object == 0; // 0x141 NullEq
	if(var_28_bool == 0) goto Label_325; // 0x142 JumpB
	var_23_bool = 0; // 0x143 MovB
	return 2; // 0x144 Return
	
Label_325:
	Trigger(var_27_object, var_25_string); // 0x145 Func
	var_23_bool = 1; // 0x147 MovB
	return 2; // 0x148 Return
}


