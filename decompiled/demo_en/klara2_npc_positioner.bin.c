task_0_event_26(var_0_int, var_1_string)
{
	var_2_int = 0; var_3_float = 0; var_4_float = 0; var_5_float = 0; var_6_object = Obj(); var_7_object = Obj(); var_8_int = 0; var_9_float = 0; var_10_float = 0; var_11_float = 0; var_12_object = Obj(); var_13_object = Obj(); // 0x5 PushV
	Trace(var_1_string); // 0x6 Func
	var_14_string = "init"; // 0x8 PushS
	var_15_bool = var_1_string == var_14_string; // 0x9 Eq
	if(var_15_bool == 0) goto Label_59; // 0xa JumpB
	var_16_int = 0; // 0xb PushV
	func_204(var_16_int); // 0xc NEW_2
	var_8_int = var_16_int; // 0xd Mov
	var_21_int = 22; // 0xf PushI
	var_22_bool = var_8_int > var_21_int; // 0x10 GT
	if(var_22_bool == 0) goto Label_22; // 0x11 JumpB
	var_23_string = "to late for k2system quest"; // 0x12 PushS
	Trace(var_23_string); // 0x13 Func
	return 12; // 0x15 Return
	
Label_22:
	var_9_float = 0; // 0x16 MovI
	var_24_int = 0; // 0x17 PushV
	func_204(var_24_int); // 0x18 NEW_2
	var_25_int = 7; // 0x1a PushI
	var_26_bool = var_24_int < var_25_int; // 0x1b LT
	if(var_26_bool == 0) goto Label_34; // 0x1c JumpB
	var_27_int = 7; // 0x1d PushI
	var_28_int = 0; // 0x1e PushV
	func_204(var_28_int); // 0x1f NEW_2
	var_9_float = var_27_int - var_28_int; // 0x21 Sub2
	
Label_34:
	GetGameTime(var_10_float); // 0x22 Func
	var_29_float = 0.3; // 0x24 PushF
	var_30_int = 1; // 0x25 PushI
	rand(var_11_float, var_29_float, var_30_int); // 0x26 Func
	var_31_int = 0; // 0x28 PushI
	var_32_int = var_10_float + var_11_float; // 0x29 Add
	var_33_int = var_32_int + var_9_float; // 0x2a Add
	SetTimeEvent(var_31_int, var_33_int); // 0x2b Func
	var_34_float = 0.3; // 0x2d PushF
	var_35_int = 1; // 0x2e PushI
	rand(var_11_float, var_34_float, var_35_int); // 0x2f Func
	var_36_int = 1; // 0x31 PushI
	var_37_int = var_10_float + var_11_float; // 0x32 Add
	var_38_int = var_37_int + var_9_float; // 0x33 Add
	SetTimeEvent(var_36_int, var_38_int); // 0x34 Func
	var_39_int = 0; // 0x36 PushV
	func_195(var_39_int); // 0x37 NEW_2
	var_0_int = var_39_int; // 0x38 TMov
	goto Label_92; // 0x3a Jump
	
Label_92:
	return 12; // 0x5c Return
	
Label_59:
	var_45_string = "remove_danko"; // 0x3b PushS
	var_46_bool = var_1_string == var_45_string; // 0x3c Eq
	if(var_46_bool == 0) goto Label_76; // 0x3d JumpB
	var_47_string = ""; var_48_int = 0; // 0x3e PushV
	var_48_int = var_0_int; // 0x3f MovT
	func_421(var_47_string, var_48_int); // 0x40 NEW_2
	GetSceneByName(var_12_object, var_47_string); // 0x42 Func
	var_57_object = var_12_object; // 0x44 Push
	if(var_57_object == 0) goto Label_74; // 0x45 JumpB
	var_58_string = "inited"; // 0x46 PushS
	var_59_int = 0; // 0x47 PushI
	SetProperty(var_58_string, var_59_int); // 0x48 ObjFunc
	
Label_74:
	var_12_object = 0; // 0x4a SetNull
	goto Label_92; // 0x4b Jump
	
Label_76:
	var_60_string = "remove_burah"; // 0x4c PushS
	var_61_bool = var_1_string == var_60_string; // 0x4d Eq
	if(var_61_bool == 0) goto Label_92; // 0x4e JumpB
	var_62_string = ""; var_63_int = 0; // 0x4f PushV
	var_63_int = var_0_int; // 0x50 MovT
	func_395(var_62_string, var_63_int); // 0x51 NEW_2
	GetSceneByName(var_13_object, var_62_string); // 0x53 Func
	var_72_object = var_13_object; // 0x55 Push
	if(var_72_object == 0) goto Label_91; // 0x56 JumpB
	var_73_string = "inited"; // 0x57 PushS
	var_74_int = 0; // 0x58 PushI
	SetProperty(var_73_string, var_74_int); // 0x59 ObjFunc
	
Label_91:
	var_13_object = 0; // 0x5b SetNull
}


task_0_event_9(var_0_int, var_1_int, var_2_float)
{
	var_3_object = Obj(); var_4_object = Obj(); var_5_object = Obj(); var_6_object = Obj(); // 0x5d PushV
	var_7_string = "id = "; // 0x5e PushS
	var_8_int = var_7_string + var_1_int; // 0x5f Add
	var_9_string = ", fTime = "; // 0x60 PushS
	var_10_int = var_8_int + var_9_string; // 0x61 Add
	var_11_int = var_10_int + var_2_float; // 0x62 Add
	var_12_string = ", GetDay() = "; // 0x63 PushS
	var_13_int = var_11_int + var_12_string; // 0x64 Add
	var_14_int = 0; // 0x65 PushV
	func_195(var_14_int); // 0x66 NEW_2
	var_20_int = var_13_int + var_14_int; // 0x68 Add
	Trace(var_20_int); // 0x69 Func
	var_21_bool = 0; // 0x6b PushV
	var_21_bool = 0; // 0x6c MovB
	var_22_int = 0; // 0x6d PushI
	var_23_bool = var_1_int == var_22_int; // 0x6e Eq
	if(var_23_bool == 0) goto Label_118; // 0x6f JumpB
	var_24_int = 0; // 0x70 PushV
	func_195(var_24_int); // 0x71 NEW_2
	var_25_bool = var_0_int == var_24_int; // 0x73 Eq
	if(var_25_bool == 0) goto Label_118; // 0x74 JumpB
	var_21_bool = 1; // 0x75 MovB
	
Label_118:
	if(var_21_bool == 0) goto Label_151; // 0x76 JumpB
	var_26_int = 0; var_27_float = 0; // 0x77 PushV
	var_26_int = var_0_int; // 0x78 MovT
	var_27_float = var_2_float; // 0x79 Mov
	func_504(var_26_int, var_27_float); // 0x7a NEW_2
	var_94_string = ""; var_95_int = 0; // 0x7c PushV
	var_95_int = var_0_int; // 0x7d MovT
	func_421(var_94_string, var_95_int); // 0x7e NEW_2
	GetSceneByName(var_5_object, var_94_string); // 0x80 Func
	var_104_bool = var_5_object == 0; // 0x82 Not
	if(var_104_bool == 0) goto Label_141; // 0x83 JumpB
	var_105_string = "K2System wrong danko scene: "; // 0x84 PushS
	var_106_string = ""; var_107_int = 0; // 0x85 PushV
	var_107_int = var_0_int; // 0x86 MovT
	func_421(var_106_string, var_107_int); // 0x87 NEW_2
	var_108_int = var_105_string + var_106_string; // 0x89 Add
	Trace(var_108_int); // 0x8a Func
	goto Label_149; // 0x8c Jump
	
Label_149:
	var_5_object = 0; // 0x95 SetNull
	goto Label_194; // 0x96 Jump
	
Label_194:
	return 4; // 0xc2 Return
	
Label_141:
	var_109_string = "inited"; // 0x8d PushS
	var_110_int = 1; // 0x8e PushI
	SetProperty(var_109_string, var_110_int); // 0x8f ObjFunc
	var_111_int = 0; // 0x91 PushV
	var_111_int = var_0_int; // 0x92 MovT
	func_390(var_111_int); // 0x93 NEW_2
	
Label_151:
	var_113_bool = 0; // 0x97 PushV
	var_113_bool = 0; // 0x98 MovB
	var_114_int = 1; // 0x99 PushI
	var_115_bool = var_1_int == var_114_int; // 0x9a Eq
	if(var_115_bool == 0) goto Label_162; // 0x9b JumpB
	var_116_int = 0; // 0x9c PushV
	func_195(var_116_int); // 0x9d NEW_2
	var_117_bool = var_0_int == var_116_int; // 0x9f Eq
	if(var_117_bool == 0) goto Label_162; // 0xa0 JumpB
	var_113_bool = 1; // 0xa1 MovB
	
Label_162:
	if(var_113_bool == 0) goto Label_194; // 0xa2 JumpB
	var_118_int = 0; var_119_float = 0; // 0xa3 PushV
	var_118_int = var_0_int; // 0xa4 MovT
	var_119_float = var_2_float; // 0xa5 Mov
	func_447(var_118_int, var_119_float); // 0xa6 NEW_2
	var_168_string = ""; var_169_int = 0; // 0xa8 PushV
	var_169_int = var_0_int; // 0xa9 MovT
	func_395(var_168_string, var_169_int); // 0xaa NEW_2
	GetSceneByName(var_6_object, var_168_string); // 0xac Func
	var_178_bool = var_6_object == 0; // 0xae Not
	if(var_178_bool == 0) goto Label_185; // 0xaf JumpB
	var_179_string = "K2System wrong burah scene: "; // 0xb0 PushS
	var_180_string = ""; var_181_int = 0; // 0xb1 PushV
	var_181_int = var_0_int; // 0xb2 MovT
	func_395(var_180_string, var_181_int); // 0xb3 NEW_2
	var_182_int = var_179_string + var_180_string; // 0xb5 Add
	Trace(var_182_int); // 0xb6 Func
	goto Label_193; // 0xb8 Jump
	
Label_193:
	var_6_object = 0; // 0xc1 SetNull
	
Label_185:
	var_183_string = "inited"; // 0xb9 PushS
	var_184_int = 1; // 0xba PushI
	SetProperty(var_183_string, var_184_int); // 0xbb ObjFunc
	var_185_int = 0; // 0xbd PushV
	var_185_int = var_0_int; // 0xbe MovT
	func_385(var_185_int); // 0xbf NEW_2
}


main(var_0_int)
{
	var_0_int = -1; // 0x0 TMovI
	
Label_1:
	Hold(); // 0x1 Func
	goto Label_1; // 0x3 Jump
}


func_385(var_185_int)
{
	var_186_string = "k2system_burah_day"; // 0x182 PushS
	SetVariable(var_186_string, var_185_int); // 0x183 Func
	return 0; // 0x185 Return
}


func_257(var_61_int, var_62_float)
{
	var_63_int = 0; var_64_int = 0; var_65_int = 0; var_66_float = 0; // 0x102 PushV
	var_64_int = 539101; // 0x103 MovI
	var_65_int = 539100; // 0x104 MovI
	var_66_float = var_62_float; // 0x105 Mov
	func_377(var_63_int, var_64_int, var_65_int, var_66_float); // 0x106 NEW_2
	var_61_int = var_63_int; // 0x107 Mov
	return 0; // 0x109 Return
}


func_195(var_14_int)
{
	var_15_float = 0; var_16_float = 0; // 0xc3 PushV
	GetGameTime(var_16_float); // 0xc4 Func
	var_17_int = 1; // 0xc6 PushI
	var_18_int = 0; // 0xc7 PushV
	var_19_int = 24; // 0xc8 PushI
	var_18_int = var_16_float / var_16_float; // 0xc9 Div2
	var_14_int = var_17_int + var_18_int; // 0xca Add2
	return 2; // 0xcb Return
}


func_323()
{
	var_53_object = Obj(); var_54_object = Obj(); // 0x143 PushV
	var_55_int = 758; // 0x144 PushI
	var_56_int = 2; // 0x145 PushI
	var_57_int = 539743; // 0x146 PushI
	CreateDiaryEntry(var_54_object, var_55_int, var_56_int, var_57_int); // 0x147 Func
	var_58_bool = 0; var_59_object = Obj(); var_60_int = 0; // 0x149 PushV
	var_59_object = var_54_object; // 0x14a Mov
	var_60_int = 757; // 0x14b MovI
	func_349(var_58_bool, var_59_object, var_60_int); // 0x14c NEW_2
	return 2; // 0x14e Return
}


func_390(var_111_int)
{
	var_112_string = "k2system_danko_day"; // 0x187 PushS
	SetVariable(var_112_string, var_111_int); // 0x188 Func
	return 0; // 0x18a Return
}


func_266(var_146_int, var_147_float)
{
	var_148_int = 0; var_149_int = 0; var_150_int = 0; var_151_float = 0; // 0x10b PushV
	var_149_int = 539087; // 0x10c MovI
	var_150_int = 539086; // 0x10d MovI
	var_151_float = var_147_float; // 0x10e Mov
	func_377(var_148_int, var_149_int, var_150_int, var_151_float); // 0x10f NEW_2
	var_146_int = var_148_int; // 0x110 Mov
	return 0; // 0x112 Return
}


func_395(var_168_string, var_169_int)
{
	var_170_int = 8; // 0x18c PushI
	var_171_bool = var_169_int == var_170_int; // 0x18d Eq
	if(var_171_bool == 0) goto Label_402; // 0x18e JumpB
	var_168_string = "house5_unoin_solidl"; // 0x18f MovS
	return 0; // 0x190 Return
	
Label_402:
	var_172_int = 9; // 0x192 PushI
	var_173_bool = var_169_int == var_172_int; // 0x193 Eq
	if(var_173_bool == 0) goto Label_408; // 0x194 JumpB
	var_168_string = "r4_house4_02_i2"; // 0x195 MovS
	return 0; // 0x196 Return
	
Label_408:
	var_174_int = 10; // 0x198 PushI
	var_175_bool = var_169_int == var_174_int; // 0x199 Eq
	if(var_175_bool == 0) goto Label_414; // 0x19a JumpB
	var_168_string = "dt_house1_union2_01r"; // 0x19b MovS
	return 0; // 0x19c Return
	
Label_414:
	var_176_int = 11; // 0x19e PushI
	var_177_bool = var_169_int == var_176_int; // 0x19f Eq
	if(var_177_bool == 0) goto Label_419; // 0x1a0 JumpB
	var_168_string = "dt_house_1_03"; // 0x1a1 MovS
	return 0; // 0x1a2 Return
	
Label_419:
	var_168_string = ""; // 0x1a3 MovS
	return 0; // 0x1a4 Return
}


func_204(var_16_int)
{
	var_17_float = 0; var_18_float = 0; // 0xcc PushV
	GetGameTime(var_18_float); // 0xcd Func
	var_19_int = 0; // 0xcf PushV
	var_19_int = var_18_float; // 0xd0 Mov
	var_20_int = 24; // 0xd1 PushI
	var_16_int = var_19_int % var_20_int; // 0xd2 Mod2
	return 2; // 0xd3 Return
}


func_336(var_44_object)
{
	var_45_object = Obj(); var_46_object = Obj(); // 0x150 PushV
	GetDiaryRoot(var_46_object); // 0x151 Func
	var_47_bool = var_46_object == 0; // 0x153 Not
	if(var_47_bool == 0) goto Label_346; // 0x154 JumpB
	var_48_string = "Can't retrieve diary root"; // 0x155 PushS
	Trace(var_48_string); // 0x156 Func
	var_44_object = 0; // 0x158 MovB
	return 2; // 0x159 Return
	
Label_346:
	var_44_object = var_46_object; // 0x15a Mov
	return 2; // 0x15b Return
}


func_275(var_72_int, var_73_float)
{
	var_74_int = 0; var_75_int = 0; var_76_int = 0; var_77_float = 0; // 0x114 PushV
	var_75_int = 539095; // 0x115 MovI
	var_76_int = 539094; // 0x116 MovI
	var_77_float = var_73_float; // 0x117 Mov
	func_377(var_74_int, var_75_int, var_76_int, var_77_float); // 0x118 NEW_2
	var_72_int = var_74_int; // 0x119 Mov
	return 0; // 0x11b Return
}


func_212(var_154_int, var_155_float)
{
	var_156_int = 0; var_157_int = 0; var_158_int = 0; var_159_float = 0; // 0xd5 PushV
	var_157_int = 539089; // 0xd6 MovI
	var_158_int = 539088; // 0xd7 MovI
	var_159_float = var_155_float; // 0xd8 Mov
	func_377(var_156_int, var_157_int, var_158_int, var_159_float); // 0xd9 NEW_2
	var_154_int = var_156_int; // 0xda Mov
	return 0; // 0xdc Return
}


func_284()
{
	var_122_object = Obj(); var_123_object = Obj(); // 0x11c PushV
	var_124_int = 751; // 0x11d PushI
	var_125_int = 2; // 0x11e PushI
	var_126_int = 539736; // 0x11f PushI
	CreateDiaryEntry(var_123_object, var_124_int, var_125_int, var_126_int); // 0x120 Func
	var_127_bool = 0; var_128_object = Obj(); var_129_int = 0; // 0x122 PushV
	var_128_object = var_123_object; // 0x123 Mov
	var_129_int = -1; // 0x124 MovI
	func_349(var_127_bool, var_128_object, var_129_int); // 0x125 NEW_2
	return 2; // 0x127 Return
}


func_221(var_80_int, var_81_float)
{
	var_82_int = 0; var_83_int = 0; var_84_int = 0; var_85_float = 0; // 0xde PushV
	var_83_int = 539097; // 0xdf MovI
	var_84_int = 539096; // 0xe0 MovI
	var_85_float = var_81_float; // 0xe1 Mov
	func_377(var_82_int, var_83_int, var_84_int, var_85_float); // 0xe2 NEW_2
	var_80_int = var_82_int; // 0xe3 Mov
	return 0; // 0xe5 Return
}


func_349(var_35_bool, var_36_object, var_37_int)
{
	var_38_object = Obj(); var_39_object = Obj(); var_40_int = 0; var_41_object = Obj(); var_42_object = Obj(); var_43_int = 0; // 0x15d PushV
	var_44_object = Obj(); // 0x15e PushV
	func_336(var_44_object); // 0x15f NEW_2
	var_41_object = var_44_object; // 0x160 Mov
	Find(var_37_int, var_42_object); // 0x162 ObjFunc
	var_49_bool = var_42_object == 0; // 0x164 Not
	if(var_49_bool == 0) goto Label_364; // 0x165 JumpB
	var_50_string = "Can't find diary parent with id: "; // 0x166 PushS
	var_51_int = var_50_string + var_37_int; // 0x167 Add
	Trace(var_51_int); // 0x168 Func
	var_35_bool = 0; // 0x16a MovB
	return 6; // 0x16b Return
	
Label_364:
	AddChild(var_36_object); // 0x16c ObjFunc
	var_52_int = 7; // 0x16e PushI
	SendWorldWndMessage(var_52_int); // 0x16f Func
	GetCategory(var_43_int); // 0x171 ObjFunc
	SetDiarySection(var_43_int); // 0x173 Func
	var_35_bool = 0; // 0x175 MovB
	return 6; // 0x176 Return
}


func_421(var_94_string, var_95_int)
{
	var_96_int = 8; // 0x1a6 PushI
	var_97_bool = var_95_int == var_96_int; // 0x1a7 Eq
	if(var_97_bool == 0) goto Label_428; // 0x1a8 JumpB
	var_94_string = "r5_House6_01"; // 0x1a9 MovS
	return 0; // 0x1aa Return
	
Label_428:
	var_98_int = 9; // 0x1ac PushI
	var_99_bool = var_95_int == var_98_int; // 0x1ad Eq
	if(var_99_bool == 0) goto Label_434; // 0x1ae JumpB
	var_94_string = "dt_house2_01"; // 0x1af MovS
	return 0; // 0x1b0 Return
	
Label_434:
	var_100_int = 10; // 0x1b2 PushI
	var_101_bool = var_95_int == var_100_int; // 0x1b3 Eq
	if(var_101_bool == 0) goto Label_440; // 0x1b4 JumpB
	var_94_string = "house7_02"; // 0x1b5 MovS
	return 0; // 0x1b6 Return
	
Label_440:
	var_102_int = 11; // 0x1b8 PushI
	var_103_bool = var_95_int == var_102_int; // 0x1b9 Eq
	if(var_103_bool == 0) goto Label_445; // 0x1ba JumpB
	var_94_string = "lc_house3_05"; // 0x1bb MovS
	return 0; // 0x1bc Return
	
Label_445:
	var_94_string = ""; // 0x1bd MovS
	return 0; // 0x1be Return
}


func_230(var_162_int, var_163_float)
{
	var_164_int = 0; var_165_int = 0; var_166_int = 0; var_167_float = 0; // 0xe7 PushV
	var_165_int = 539091; // 0xe8 MovI
	var_166_int = 539090; // 0xe9 MovI
	var_167_float = var_163_float; // 0xea Mov
	func_377(var_164_int, var_165_int, var_166_int, var_167_float); // 0xeb NEW_2
	var_162_int = var_164_int; // 0xec Mov
	return 0; // 0xee Return
}


func_504(var_26_int, var_27_float)
{
	var_28_int = 8; // 0x1f9 PushI
	var_29_bool = var_26_int == var_28_int; // 0x1fa Eq
	if(var_29_bool == 0) goto Label_519; // 0x1fb JumpB
	func_310(); // 0x1fd NEW_2
	func_323(); // 0x200 NEW_2
	var_61_int = 0; var_62_float = 0; // 0x202 PushV
	var_62_float = var_27_float; // 0x203 Mov
	func_257(var_61_int, var_62_float); // 0x204 NEW_2
	goto Label_560; // 0x206 Jump
	
Label_560:
	return 0; // 0x230 Return
	
Label_519:
	var_70_int = 9; // 0x207 PushI
	var_71_bool = var_26_int == var_70_int; // 0x208 Eq
	if(var_71_bool == 0) goto Label_533; // 0x209 JumpB
	func_310(); // 0x20b NEW_2
	func_323(); // 0x20e NEW_2
	var_72_int = 0; var_73_float = 0; // 0x210 PushV
	var_73_float = var_27_float; // 0x211 Mov
	func_275(var_72_int, var_73_float); // 0x212 NEW_2
	goto Label_560; // 0x214 Jump
	
Label_533:
	var_78_int = 10; // 0x215 PushI
	var_79_bool = var_26_int == var_78_int; // 0x216 Eq
	if(var_79_bool == 0) goto Label_547; // 0x217 JumpB
	func_310(); // 0x219 NEW_2
	func_323(); // 0x21c NEW_2
	var_80_int = 0; var_81_float = 0; // 0x21e PushV
	var_81_float = var_27_float; // 0x21f Mov
	func_221(var_80_int, var_81_float); // 0x220 NEW_2
	goto Label_560; // 0x222 Jump
	
Label_547:
	var_86_int = 11; // 0x223 PushI
	var_87_bool = var_26_int == var_86_int; // 0x224 Eq
	if(var_87_bool == 0) goto Label_560; // 0x225 JumpB
	func_310(); // 0x227 NEW_2
	func_323(); // 0x22a NEW_2
	var_88_int = 0; var_89_float = 0; // 0x22c PushV
	var_89_float = var_27_float; // 0x22d Mov
	func_239(var_88_int, var_89_float); // 0x22e NEW_2
}


func_297()
{
	var_130_object = Obj(); var_131_object = Obj(); // 0x129 PushV
	var_132_int = 752; // 0x12a PushI
	var_133_int = 2; // 0x12b PushI
	var_134_int = 539737; // 0x12c PushI
	CreateDiaryEntry(var_131_object, var_132_int, var_133_int, var_134_int); // 0x12d Func
	var_135_bool = 0; var_136_object = Obj(); var_137_int = 0; // 0x12f PushV
	var_136_object = var_131_object; // 0x130 Mov
	var_137_int = 751; // 0x131 MovI
	func_349(var_135_bool, var_136_object, var_137_int); // 0x132 NEW_2
	return 2; // 0x134 Return
}


func_239(var_88_int, var_89_float)
{
	var_90_int = 0; var_91_int = 0; var_92_int = 0; var_93_float = 0; // 0xf0 PushV
	var_91_int = 539099; // 0xf1 MovI
	var_92_int = 539098; // 0xf2 MovI
	var_93_float = var_89_float; // 0xf3 Mov
	func_377(var_90_int, var_91_int, var_92_int, var_93_float); // 0xf4 NEW_2
	var_88_int = var_90_int; // 0xf5 Mov
	return 0; // 0xf7 Return
}


func_310()
{
	var_30_object = Obj(); var_31_object = Obj(); // 0x136 PushV
	var_32_int = 757; // 0x137 PushI
	var_33_int = 2; // 0x138 PushI
	var_34_int = 539742; // 0x139 PushI
	CreateDiaryEntry(var_31_object, var_32_int, var_33_int, var_34_int); // 0x13a Func
	var_35_bool = 0; var_36_object = Obj(); var_37_int = 0; // 0x13c PushV
	var_36_object = var_31_object; // 0x13d Mov
	var_37_int = -1; // 0x13e MovI
	func_349(var_35_bool, var_36_object, var_37_int); // 0x13f NEW_2
	return 2; // 0x141 Return
}


func_248(var_138_int, var_139_float)
{
	var_140_int = 0; var_141_int = 0; var_142_int = 0; var_143_float = 0; // 0xf9 PushV
	var_141_int = 539085; // 0xfa MovI
	var_142_int = 539084; // 0xfb MovI
	var_143_float = var_139_float; // 0xfc Mov
	func_377(var_140_int, var_141_int, var_142_int, var_143_float); // 0xfd NEW_2
	var_138_int = var_140_int; // 0xfe Mov
	return 0; // 0x100 Return
}


func_377(var_63_int, var_64_int, var_65_int, var_66_float)
{
	var_67_int = 0; var_68_int = 0; // 0x179 PushV
	AddMessage(var_64_int, var_65_int, var_66_float, var_68_int); // 0x17a Func
	var_69_int = 6; // 0x17c PushI
	SendWorldWndMessage(var_69_int); // 0x17d Func
	var_63_int = var_68_int; // 0x17f Mov
	return 2; // 0x180 Return
}


func_447(var_118_int, var_119_float)
{
	var_120_int = 8; // 0x1c0 PushI
	var_121_bool = var_118_int == var_120_int; // 0x1c1 Eq
	if(var_121_bool == 0) goto Label_462; // 0x1c2 JumpB
	func_284(); // 0x1c4 NEW_2
	func_297(); // 0x1c7 NEW_2
	var_138_int = 0; var_139_float = 0; // 0x1c9 PushV
	var_139_float = var_119_float; // 0x1ca Mov
	func_248(var_138_int, var_139_float); // 0x1cb NEW_2
	goto Label_503; // 0x1cd Jump
	
Label_503:
	return 0; // 0x1f7 Return
	
Label_462:
	var_144_int = 9; // 0x1ce PushI
	var_145_bool = var_118_int == var_144_int; // 0x1cf Eq
	if(var_145_bool == 0) goto Label_476; // 0x1d0 JumpB
	func_284(); // 0x1d2 NEW_2
	func_297(); // 0x1d5 NEW_2
	var_146_int = 0; var_147_float = 0; // 0x1d7 PushV
	var_147_float = var_119_float; // 0x1d8 Mov
	func_266(var_146_int, var_147_float); // 0x1d9 NEW_2
	goto Label_503; // 0x1db Jump
	
Label_476:
	var_152_int = 10; // 0x1dc PushI
	var_153_bool = var_118_int == var_152_int; // 0x1dd Eq
	if(var_153_bool == 0) goto Label_490; // 0x1de JumpB
	func_284(); // 0x1e0 NEW_2
	func_297(); // 0x1e3 NEW_2
	var_154_int = 0; var_155_float = 0; // 0x1e5 PushV
	var_155_float = var_119_float; // 0x1e6 Mov
	func_212(var_154_int, var_155_float); // 0x1e7 NEW_2
	goto Label_503; // 0x1e9 Jump
	
Label_490:
	var_160_int = 11; // 0x1ea PushI
	var_161_bool = var_118_int == var_160_int; // 0x1eb Eq
	if(var_161_bool == 0) goto Label_503; // 0x1ec JumpB
	func_284(); // 0x1ee NEW_2
	func_297(); // 0x1f1 NEW_2
	var_162_int = 0; var_163_float = 0; // 0x1f3 PushV
	var_163_float = var_119_float; // 0x1f4 Mov
	func_230(var_162_int, var_163_float); // 0x1f5 NEW_2
}


