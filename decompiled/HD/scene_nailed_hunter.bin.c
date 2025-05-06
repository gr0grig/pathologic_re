task_0_event_5(var_0_object, var_1_object)
{
	var_2_int = 0; var_3_int = 0; var_4_int = 0; var_5_int = 0; var_6_int = 0; var_7_string = ""; var_8_string = ""; var_9_string = ""; var_10_int = 0; var_11_int = 0; var_12_int = 0; var_13_int = 0; var_14_int = 0; var_15_string = ""; var_16_string = ""; var_17_string = ""; // 0x1b1 PushV
	var_18_bool = var_1_object == 0; // 0x1b2 Not
	if(var_18_bool == 0) goto Label_440; // 0x1b3 JumpB
	var_19_object = Obj(); // 0x1b4 PushV
	func_565(var_19_object); // 0x1b5 NEW_2
	var_1_object = var_19_object; // 0x1b6 TMov
	
Label_440:
	var_22_bool = var_0_object == 0; // 0x1b8 Not
	if(var_22_bool == 0) goto Label_444; // 0x1b9 JumpB
	CreateIntVector(var_0_object); // 0x1ba Func
	
Label_444:
	var_23_object = Obj(); // 0x1bc PushV
	var_23_object = var_1_object; // 0x1bd MovT
	func_603(var_23_object); // 0x1be NEW_2
	size(var_10_int); // 0x1c0 TObjFunc
	var_11_int = 0; // 0x1c2 MovI
	
Label_451:
	var_34_bool = var_11_int < var_10_int; // 0x1c3 LT
	if(var_34_bool == 0) goto Label_496; // 0x1c4 JumpB
	get(var_12_int, var_11_int); // 0x1c5 TObjFunc
	var_35_int = 1; // 0x1c7 PushI
	var_36_int = var_11_int + var_35_int; // 0x1c8 Add
	get(var_13_int, var_36_int); // 0x1c9 TObjFunc
	var_37_int = 2; // 0x1cb PushI
	var_38_int = var_11_int + var_37_int; // 0x1cc Add
	get(var_14_int, var_38_int); // 0x1cd TObjFunc
	var_39_string = ""; var_40_int = 0; var_41_int = 0; // 0x1cf PushV
	var_40_int = var_12_int; // 0x1d0 Mov
	var_41_int = var_13_int; // 0x1d1 Mov
	func_81(var_39_string, var_40_int, var_41_int); // 0x1d2 NEW_2
	var_15_string = var_39_string; // 0x1d3 Mov
	var_48_string = ""; var_49_int = 0; var_50_int = 0; // 0x1d5 PushV
	var_49_int = var_12_int; // 0x1d6 Mov
	var_50_int = var_14_int; // 0x1d7 Mov
	func_97(var_50_int); // 0x1d8 NEW_2
	var_16_string = var_48_string; // 0x1d9 Mov
	var_51_string = ""; var_52_int = 0; var_53_int = 0; // 0x1db PushV
	var_52_int = var_12_int; // 0x1dc Mov
	var_53_int = var_14_int; // 0x1dd Mov
	func_100(var_52_int, var_53_int); // 0x1de NEW_2
	var_17_string = var_51_string; // 0x1df Mov
	var_58_object = Obj(); var_59_object = Obj(); var_60_string = ""; var_61_string = ""; var_62_string = ""; // 0x1e1 PushV
	var_63_object = Obj(); // 0x1e2 PushV
	func_554(var_63_object); // 0x1e3 NEW_2
	var_59_object = var_63_object; // 0x1e4 Mov
	var_60_string = var_15_string; // 0x1e6 Mov
	var_61_string = var_16_string; // 0x1e7 Mov
	var_62_string = var_17_string; // 0x1e8 Mov
	func_585(var_58_object, var_59_object, var_60_string, var_61_string, var_62_string); // 0x1e9 NEW_2
	add(var_58_object); // 0x1eb TObjFunc
	var_79_int = 3; // 0x1ed PushI
	var_11_int = var_11_int + var_79_int; // 0x1ee Add2
	goto Label_451; // 0x1ef Jump
	
Label_496:
	return 16; // 0x1f0 Return
}


task_0_event_6(var_0_object, var_1_object)
{
	var_2_int = 0; var_3_int = 0; var_4_object = Obj(); var_5_bool = 0; var_6_int = 0; var_7_int = 0; var_8_object = Obj(); var_9_bool = 0; // 0x1f1 PushV
	size(var_6_int); // 0x1f2 TObjFunc
	var_7_int = 0; // 0x1f4 MovI
	
Label_501:
	var_10_bool = var_7_int < var_6_int; // 0x1f5 LT
	if(var_10_bool == 0) goto Label_537; // 0x1f6 JumpB
	get(var_8_object, var_7_int); // 0x1f7 TObjFunc
	var_11_bool = var_8_object != 0; // 0x1f9 NullNeq
	if(var_11_bool == 0) goto Label_523; // 0x1fa JumpB
	IsDead(var_9_bool); // 0x1fb ObjFunc
	var_12_bool = var_9_bool == 0; // 0x1fd Not
	if(var_12_bool == 0) goto Label_521; // 0x1fe JumpB
	var_13_bool = 0; var_14_object = Obj(); var_15_string = ""; // 0x1ff PushV
	var_14_object = var_8_object; // 0x200 Mov
	var_15_string = "ToDie"; // 0x201 MovS
	func_542(var_13_bool, var_14_object, var_15_string); // 0x202 NEW_2
	var_22_bool = var_13_bool == 0; // 0x204 Not
	if(var_22_bool == 0) goto Label_521; // 0x205 JumpB
	var_23_int = 1; // 0x206 PushI
	var_7_int = var_7_int + var_23_int; // 0x207 Add2
	goto Label_536; // 0x208 Jump
	
Label_536:
	goto Label_501; // 0x218 Jump
	
Label_521:
	RemoveActor(var_8_object); // 0x209 Func
	
Label_523:
	remove(var_7_int); // 0x20b TObjFunc
	var_24_int = 3; // 0x20d PushI
	var_25_float = var_7_int * var_24_int; // 0x20e Mult
	var_26_int = 1; // 0x20f PushI
	var_27_int = var_7_int + var_26_int; // 0x210 Add
	var_28_int = 3; // 0x211 PushI
	var_29_float = var_27_int * var_28_int; // 0x212 Mult
	remove(var_25_float, var_29_float); // 0x213 TObjFunc
	var_30_int = -1; // 0x215 PushI
	var_6_int = var_6_int + var_30_int; // 0x216 Add2
	var_8_object = 0; // 0x217 SetNull
	
Label_537:
	var_31_object = Obj(); // 0x219 PushV
	var_31_object = var_1_object; // 0x21a MovT
	func_603(var_31_object); // 0x21b NEW_2
	return 8; // 0x21d Return
}


main(var_0_object, var_1_object)
{
	func_121(); // 0x73 NEW_2
	func_415(var_0_object, var_1_object); // 0x76 NEW_2
	return 0; // 0x78 Return
}


func_0()
{
	var_208_int = 0; var_209_float = 0; var_210_bool = 0; var_211_int = 0; var_212_int = 0; var_213_object = Obj(); var_214_int = 0; var_215_int = 0; var_216_int = 0; var_217_int = 0; var_218_float = 0; var_219_bool = 0; var_220_int = 0; var_221_int = 0; var_222_object = Obj(); var_223_int = 0; var_224_int = 0; var_225_int = 0; // 0x0 PushV
	var_226_string = "HunterCount"; // 0x1 PushS
	GetProperty(var_226_string, var_217_int); // 0x2 Func
	var_227_string = "HunterProb"; // 0x4 PushS
	HasProperty(var_227_string, var_219_bool); // 0x5 Func
	var_228_bool = var_219_bool; // 0x7 Push
	if(var_228_bool == 0) goto Label_13; // 0x8 JumpB
	var_229_string = "HunterProb"; // 0x9 PushS
	GetProperty(var_229_string, var_218_float); // 0xa Func
	goto Label_14; // 0xc Jump
	
Label_14:
	var_230_bool = 0; var_231_float = 0; // 0xe PushV
	var_231_float = 0.33; // 0xf MovF
	func_560(var_230_bool, var_231_float); // 0x10 NEW_2
	var_232_bool = var_230_bool == 0; // 0x12 Not
	if(var_232_bool == 0) goto Label_22; // 0x13 JumpB
	var_233_int = -1; // 0x14 PushI
	var_217_int = var_217_int + var_233_int; // 0x15 Add2
	
Label_22:
	var_234_int = 0; var_235_string = ""; // 0x16 PushV
	var_235_string = "pt_lmarauders"; // 0x17 MovS
	func_571(var_234_int, var_235_string); // 0x18 NEW_2
	irand(var_220_int, var_234_int); // 0x1a Func
	var_244_int = 0; // 0x1c PushI
	add(var_244_int); // 0x1d ObjFunc
	var_245_int = 1; // 0x1f PushI
	var_246_int = var_220_int + var_245_int; // 0x20 Add
	add(var_246_int); // 0x21 ObjFunc
	var_247_int = 0; // 0x23 PushI
	add(var_247_int); // 0x24 ObjFunc
	var_248_int = 0; var_249_string = ""; // 0x26 PushV
	var_249_string = "pt_umarauders"; // 0x27 MovS
	func_571(var_248_int, var_249_string); // 0x28 NEW_2
	var_221_int = var_248_int; // 0x29 Mov
	CreateIntVector(var_222_object); // 0x2b Func
	resize(var_221_int); // 0x2d ObjFunc
	var_223_int = 0; // 0x2f MovI
	
Label_48:
	var_250_bool = var_223_int < var_221_int; // 0x30 LT
	if(var_250_bool == 0) goto Label_55; // 0x31 JumpB
	set(var_223_int, var_223_int); // 0x32 ObjFunc
	var_251_int = 1; // 0x34 PushI
	var_223_int = var_223_int + var_251_int; // 0x35 Add2
	goto Label_48; // 0x36 Jump
	
Label_55:
	var_224_int = 0; // 0x37 MovI
	
Label_56:
	var_252_bool = var_224_int < var_217_int; // 0x38 LT
	if(var_252_bool == 0) goto Label_79; // 0x39 JumpB
	irand(var_225_int, var_221_int); // 0x3a Func
	get(var_220_int, var_225_int); // 0x3c ObjFunc
	var_253_int = 1; // 0x3e PushI
	add(var_253_int); // 0x3f ObjFunc
	var_254_int = 1; // 0x41 PushI
	var_255_int = var_220_int + var_254_int; // 0x42 Add
	add(var_255_int); // 0x43 ObjFunc
	var_256_int = 0; // 0x45 PushI
	add(var_256_int); // 0x46 ObjFunc
	remove(var_225_int); // 0x48 ObjFunc
	var_257_int = -1; // 0x4a PushI
	var_221_int = var_221_int + var_257_int; // 0x4b Add2
	var_258_int = 1; // 0x4c PushI
	var_224_int = var_224_int + var_258_int; // 0x4d Add2
	goto Label_56; // 0x4e Jump
	
Label_79:
	return 18; // 0x4f Return
	
Label_13:
	var_218_float = 0.33; // 0xd MovF
}


func_199(var_161_bool)
{
	var_162_int = 0; var_163_bool = 0; var_164_cvector = CVector(0,0,0); var_165_cvector = CVector(0,0,0); var_166_int = 0; var_167_bool = 0; var_168_cvector = CVector(0,0,0); var_169_cvector = CVector(0,0,0); // 0xc7 PushV
	var_166_int = 1; // 0xc8 MovI
	
Label_201:
	var_170_string = "pt_item_bottle"; // 0xc9 PushS
	var_171_int = var_170_string + var_166_int; // 0xca Add
	GetLocator(var_171_int, var_167_bool, var_168_cvector, var_169_cvector); // 0xcb Func
	var_172_bool = var_167_bool == 0; // 0xcd Not
	if(var_172_bool == 0) goto Label_208; // 0xce JumpB
	goto Label_217; // 0xcf Jump
	
Label_217:
	return 8; // 0xd9 Return
	
Label_208:
	var_173_cvector = CVector(0,0,0); var_174_cvector = CVector(0,0,0); var_175_bool = 0; // 0xd0 PushV
	var_173_cvector = var_168_cvector; // 0xd1 Mov
	var_174_cvector = var_169_cvector; // 0xd2 Mov
	var_175_bool = var_161_bool; // 0xd3 Mov
	func_379(var_173_cvector, var_174_cvector, var_175_bool); // 0xd4 NEW_2
	var_201_int = 1; // 0xd6 PushI
	var_166_int = var_166_int + var_201_int; // 0xd7 Add2
	goto Label_201; // 0xd8 Jump
}


func_585(var_58_object, var_59_object, var_60_string, var_61_string, var_62_string)
{
	var_66_bool = 0; var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0); var_69_object = Obj(); var_70_bool = 0; var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); var_73_object = Obj(); // 0x249 PushV
	GetLocator(var_60_string, var_70_bool, var_71_cvector, var_72_cvector); // 0x24a ObjFunc
	var_74_bool = var_70_bool == 0; // 0x24c Not
	if(var_74_bool == 0) goto Label_598; // 0x24d JumpB
	var_75_string = "Locator "; // 0x24e PushS
	var_76_int = var_75_string + var_60_string; // 0x24f Add
	var_77_string = " doesn't exist"; // 0x250 PushS
	var_78_int = var_76_int + var_77_string; // 0x251 Add
	Trace(var_78_int); // 0x252 Func
	var_73_object = 0; // 0x254 SetNull
	goto Label_600; // 0x255 Jump
	
Label_600:
	var_58_object = var_73_object; // 0x258 Mov
	return 8; // 0x259 Return
	
Label_598:
	AddActor(var_73_object, var_61_string, var_59_object, var_71_cvector, var_72_cvector, var_62_string); // 0x256 Func
}


func_142(var_5_bool)
{
	var_6_int = 0; var_7_bool = 0; var_8_cvector = CVector(0,0,0); var_9_cvector = CVector(0,0,0); var_10_int = 0; var_11_bool = 0; var_12_cvector = CVector(0,0,0); var_13_cvector = CVector(0,0,0); // 0x8e PushV
	var_10_int = 1; // 0x8f MovI
	
Label_144:
	var_14_string = "pt_item_food"; // 0x90 PushS
	var_15_int = var_14_string + var_10_int; // 0x91 Add
	GetLocator(var_15_int, var_11_bool, var_12_cvector, var_13_cvector); // 0x92 Func
	var_16_bool = var_11_bool == 0; // 0x94 Not
	if(var_16_bool == 0) goto Label_151; // 0x95 JumpB
	goto Label_160; // 0x96 Jump
	
Label_160:
	return 8; // 0xa0 Return
	
Label_151:
	var_17_cvector = CVector(0,0,0); var_18_cvector = CVector(0,0,0); var_19_bool = 0; // 0x97 PushV
	var_17_cvector = var_12_cvector; // 0x98 Mov
	var_18_cvector = var_13_cvector; // 0x99 Mov
	var_19_bool = var_5_bool; // 0x9a Mov
	func_218(var_17_cvector, var_18_cvector, var_19_bool); // 0x9b NEW_2
	var_63_int = 1; // 0x9d PushI
	var_10_int = var_10_int + var_63_int; // 0x9e Add2
	goto Label_144; // 0x9f Jump
}


func_81(var_39_string, var_40_int, var_41_int)
{
	var_42_int = 0; // 0x52 PushI
	var_43_bool = var_40_int == var_42_int; // 0x53 Eq
	if(var_43_bool == 0) goto Label_89; // 0x54 JumpB
	var_44_string = "pt_lmarauders"; // 0x55 PushS
	var_39_string = var_44_string + var_41_int; // 0x56 Add2
	return 0; // 0x57 Return
	
Label_89:
	var_45_int = 1; // 0x59 PushI
	var_46_bool = var_40_int == var_45_int; // 0x5a Eq
	if(var_46_bool == 0) goto Label_95; // 0x5b JumpB
	var_47_string = "pt_umarauders"; // 0x5c PushS
	var_39_string = var_47_string + var_41_int; // 0x5d Add2
	return 0; // 0x5e Return
	
Label_95:
	var_39_string = ""; // 0x5f MovS
	return 0; // 0x60 Return
}


func_277(var_76_cvector, var_77_cvector, var_78_bool)
{
	var_79_string = ""; var_80_object = Obj(); var_81_float = 0; var_82_float = 0; var_83_cvector = CVector(0,0,0); var_84_object = Obj(); var_85_float = 0; var_86_float = 0; var_87_cvector = CVector(0,0,0); var_88_string = ""; var_89_object = Obj(); var_90_float = 0; var_91_float = 0; var_92_cvector = CVector(0,0,0); var_93_object = Obj(); var_94_float = 0; var_95_float = 0; var_96_cvector = CVector(0,0,0); // 0x115 PushV
	var_97_bool = 0; var_98_float = 0; // 0x116 PushV
	var_99_bool = var_78_bool; // 0x117 Push
	if(var_99_bool == 0) goto Label_283; // 0x118 JumpB
	var_98_float = 0.05; // 0x119 MovF
	goto Label_284; // 0x11a Jump
	
Label_284:
	func_560(var_97_bool, var_98_float); // 0x11c NEW_2
	if(var_97_bool == 0) goto Label_335; // 0x11e JumpB
	var_100_int = 8; // 0x11f PushI
	var_101_int = 3; // 0x120 PushI
	var_102_int = 3; // 0x121 PushI
	var_103_int = 3; // 0x122 PushI
	var_104_int = 2; // 0x123 PushI
	var_105_int = 2; // 0x124 PushI
	var_106_int = 1; // 0x125 PushI
	var_107_string = "rusk"; // 0x126 PushS
	var_108_string = "dried_fish"; // 0x127 PushS
	var_109_string = "dried_meat"; // 0x128 PushS
	var_110_string = "smoked_meat"; // 0x129 PushS
	var_111_string = "fresh_fish"; // 0x12a PushS
	var_112_string = "fresh_meat"; // 0x12b PushS
	var_113_string = "tvirin"; // 0x12c PushS
	RandOneOf(var_88_string, var_100_int, var_101_int, var_102_int, var_103_int, var_104_int, var_105_int, var_106_int, var_107_string, var_108_string, var_109_string, var_110_string, var_111_string, var_112_string, var_113_string); // 0x12d Func
	RandVec2D(var_90_float, var_91_float); // 0x12f Func
	var_114_float = GetByIndex(var_92_cvector, 0); // 0x131 PushE
	var_114_float = var_90_float; // 0x132 Mov
	SetByIndex(var_92_cvector, 0) = var_114_float; // 0x133 PopE
	var_115_float = GetByIndex(var_92_cvector, 1); // 0x134 PushE
	var_115_float = 0; // 0x135 MovI
	SetByIndex(var_92_cvector, 1) = var_115_float; // 0x136 PopE
	var_116_float = GetByIndex(var_92_cvector, 2); // 0x137 PushE
	var_116_float = var_91_float; // 0x138 Mov
	SetByIndex(var_92_cvector, 2) = var_116_float; // 0x139 PopE
	var_117_string = "scripted_container"; // 0x13a PushS
	var_118_object = Obj(); // 0x13b PushV
	func_554(var_118_object); // 0x13c NEW_2
	var_119_string = "item_plate.xml"; // 0x13e PushS
	AddActorByType(var_89_object, var_117_string, var_118_object, var_76_cvector, var_92_cvector, var_119_string); // 0x13f Func
	var_120_string = "scripted_container"; // 0x141 PushS
	var_121_object = Obj(); // 0x142 PushV
	func_554(var_121_object); // 0x143 NEW_2
	var_122_cvector = CVector(0.0, 5.0, 0.0); // 0x145 PushVec
	var_123_int = var_76_cvector + var_122_cvector; // 0x146 Add
	var_124_string = "item_"; // 0x147 PushS
	var_125_int = var_124_string + var_88_string; // 0x148 Add
	var_126_string = "_steal.xml"; // 0x149 PushS
	var_127_int = var_125_int + var_126_string; // 0x14a Add
	AddActorByType(var_89_object, var_120_string, var_121_object, var_123_int, var_77_cvector, var_127_int); // 0x14b Func
	var_89_object = 0; // 0x14d SetNull
	goto Label_359; // 0x14e Jump
	
Label_359:
	return 18; // 0x167 Return
	
Label_335:
	var_128_bool = 0; var_129_float = 0; // 0x14f PushV
	var_129_float = 0.5; // 0x150 MovF
	func_560(var_128_bool, var_129_float); // 0x151 NEW_2
	if(var_128_bool == 0) goto Label_359; // 0x153 JumpB
	RandVec2D(var_94_float, var_95_float); // 0x154 Func
	var_130_float = GetByIndex(var_96_cvector, 0); // 0x156 PushE
	var_130_float = var_94_float; // 0x157 Mov
	SetByIndex(var_96_cvector, 0) = var_130_float; // 0x158 PopE
	var_131_float = GetByIndex(var_96_cvector, 1); // 0x159 PushE
	var_131_float = 0; // 0x15a MovI
	SetByIndex(var_96_cvector, 1) = var_131_float; // 0x15b PopE
	var_132_float = GetByIndex(var_96_cvector, 2); // 0x15c PushE
	var_132_float = var_95_float; // 0x15d Mov
	SetByIndex(var_96_cvector, 2) = var_132_float; // 0x15e PopE
	var_133_string = "scripted_container"; // 0x15f PushS
	var_134_object = Obj(); // 0x160 PushV
	func_554(var_134_object); // 0x161 NEW_2
	var_135_string = "item_plate.xml"; // 0x163 PushS
	AddActorByType(var_93_object, var_133_string, var_134_object, var_76_cvector, var_96_cvector, var_135_string); // 0x164 Func
	var_93_object = 0; // 0x166 SetNull
	
Label_283:
	var_98_float = 0.2; // 0x11b MovF
}


func_218(var_17_cvector, var_18_cvector, var_19_bool)
{
	var_20_string = ""; var_21_object = Obj(); var_22_object = Obj(); var_23_float = 0; var_24_float = 0; var_25_cvector = CVector(0,0,0); var_26_string = ""; var_27_object = Obj(); var_28_object = Obj(); var_29_float = 0; var_30_float = 0; var_31_cvector = CVector(0,0,0); // 0xda PushV
	var_32_bool = 0; var_33_float = 0; // 0xdb PushV
	var_34_bool = var_19_bool; // 0xdc Push
	if(var_34_bool == 0) goto Label_224; // 0xdd JumpB
	var_33_float = 0.05; // 0xde MovF
	goto Label_225; // 0xdf Jump
	
Label_225:
	func_560(var_32_bool, var_33_float); // 0xe1 NEW_2
	if(var_32_bool == 0) goto Label_252; // 0xe3 JumpB
	var_37_int = 5; // 0xe4 PushI
	var_38_int = 5; // 0xe5 PushI
	var_39_int = 3; // 0xe6 PushI
	var_40_int = 2; // 0xe7 PushI
	var_41_int = 3; // 0xe8 PushI
	var_42_string = "bread"; // 0xe9 PushS
	var_43_string = "bottle_water"; // 0xea PushS
	var_44_string = "milk"; // 0xeb PushS
	var_45_string = "vegetables"; // 0xec PushS
	var_46_string = "lemon"; // 0xed PushS
	RandOneOf(var_26_string, var_37_int, var_38_int, var_39_int, var_40_int, var_41_int, var_42_string, var_43_string, var_44_string, var_45_string, var_46_string); // 0xee Func
	var_47_string = "scripted_container"; // 0xf0 PushS
	var_48_object = Obj(); // 0xf1 PushV
	func_554(var_48_object); // 0xf2 NEW_2
	var_51_string = "item_"; // 0xf4 PushS
	var_52_int = var_51_string + var_26_string; // 0xf5 Add
	var_53_string = "_steal.xml"; // 0xf6 PushS
	var_54_int = var_52_int + var_53_string; // 0xf7 Add
	AddActorByType(var_27_object, var_47_string, var_48_object, var_17_cvector, var_18_cvector, var_54_int); // 0xf8 Func
	var_27_object = 0; // 0xfa SetNull
	goto Label_276; // 0xfb Jump
	
Label_276:
	return 12; // 0x114 Return
	
Label_252:
	var_55_bool = 0; var_56_float = 0; // 0xfc PushV
	var_56_float = 0.5; // 0xfd MovF
	func_560(var_55_bool, var_56_float); // 0xfe NEW_2
	if(var_55_bool == 0) goto Label_276; // 0x100 JumpB
	RandVec2D(var_29_float, var_30_float); // 0x101 Func
	var_57_float = GetByIndex(var_31_cvector, 0); // 0x103 PushE
	var_57_float = var_29_float; // 0x104 Mov
	SetByIndex(var_31_cvector, 0) = var_57_float; // 0x105 PopE
	var_58_float = GetByIndex(var_31_cvector, 1); // 0x106 PushE
	var_58_float = 0; // 0x107 MovI
	SetByIndex(var_31_cvector, 1) = var_58_float; // 0x108 PopE
	var_59_float = GetByIndex(var_31_cvector, 2); // 0x109 PushE
	var_59_float = var_30_float; // 0x10a Mov
	SetByIndex(var_31_cvector, 2) = var_59_float; // 0x10b PopE
	var_60_string = "scripted_container"; // 0x10c PushS
	var_61_object = Obj(); // 0x10d PushV
	func_554(var_61_object); // 0x10e NEW_2
	var_62_string = "item_plate.xml"; // 0x110 PushS
	AddActorByType(var_28_object, var_60_string, var_61_object, var_17_cvector, var_31_cvector, var_62_string); // 0x111 Func
	var_28_object = 0; // 0x113 SetNull
	
Label_224:
	var_33_float = 0.2; // 0xe0 MovF
}


func_603(var_31_object)
{
	var_32_int = 0; var_33_int = 0; var_34_object = Obj(); var_35_int = 0; var_36_int = 0; var_37_object = Obj(); // 0x25b PushV
	var_38_object = var_31_object; // 0x25c Push
	if(var_38_object == 0) goto Label_623; // 0x25d JumpB
	size(var_35_int); // 0x25e ObjFunc
	var_36_int = 0; // 0x260 MovI
	
Label_609:
	var_39_bool = var_36_int < var_35_int; // 0x261 LT
	if(var_39_bool == 0) goto Label_621; // 0x262 JumpB
	get(var_37_object, var_36_int); // 0x263 ObjFunc
	var_40_object = var_37_object; // 0x265 Push
	if(var_40_object == 0) goto Label_617; // 0x266 JumpB
	RemoveActor(var_37_object); // 0x267 Func
	
Label_617:
	var_37_object = 0; // 0x269 SetNull
	var_41_int = 1; // 0x26a PushI
	var_36_int = var_36_int + var_41_int; // 0x26b Add2
	goto Label_609; // 0x26c Jump
	
Label_621:
	clear(); // 0x26d ObjFunc
	
Label_623:
	return 6; // 0x26f Return
}


func_542(var_13_bool, var_14_object, var_15_string)
{
	var_16_bool = 0; var_17_bool = 0; // 0x21e PushV
	var_18_string = "HasProperty"; // 0x21f PushS
	var_19_int = 2; // 0x220 PushI
	var_20_bool = IsFuncExist(var_14_object, var_18_string, var_19_int); // 0x221 FuncExist
	var_21_bool = var_20_bool == 0; // 0x222 Not
	if(var_21_bool == 0) goto Label_550; // 0x223 JumpB
	var_13_bool = 0; // 0x224 MovB
	return 2; // 0x225 Return
	
Label_550:
	HasProperty(var_15_string, var_17_bool); // 0x226 ObjFunc
	var_13_bool = var_17_bool; // 0x228 Mov
	return 2; // 0x229 Return
}


func_415(var_0_object, var_1_object)
{
	var_202_bool = var_1_object == 0; // 0x19f Not
	if(var_202_bool == 0) goto Label_421; // 0x1a0 JumpB
	var_203_object = Obj(); // 0x1a1 PushV
	func_565(var_203_object); // 0x1a2 NEW_2
	var_1_object = var_203_object; // 0x1a3 TMov
	
Label_421:
	var_206_bool = var_0_object == 0; // 0x1a5 Not
	if(var_206_bool == 0) goto Label_425; // 0x1a6 JumpB
	CreateIntVector(var_0_object); // 0x1a7 Func
	
Label_425:
	var_207_object = Obj(); // 0x1a9 PushV
	var_207_object = var_0_object; // 0x1aa MovT
	func_0(); // 0x1ab NEW_2
	
Label_429:
	Hold(); // 0x1ad Func
	goto Label_429; // 0x1af Jump
}


func_161(var_64_bool)
{
	var_65_int = 0; var_66_bool = 0; var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0); var_69_int = 0; var_70_bool = 0; var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); // 0xa1 PushV
	var_69_int = 1; // 0xa2 MovI
	
Label_163:
	var_73_string = "pt_item_pfood"; // 0xa3 PushS
	var_74_int = var_73_string + var_69_int; // 0xa4 Add
	GetLocator(var_74_int, var_70_bool, var_71_cvector, var_72_cvector); // 0xa5 Func
	var_75_bool = var_70_bool == 0; // 0xa7 Not
	if(var_75_bool == 0) goto Label_170; // 0xa8 JumpB
	goto Label_179; // 0xa9 Jump
	
Label_179:
	return 8; // 0xb3 Return
	
Label_170:
	var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0); var_78_bool = 0; // 0xaa PushV
	var_76_cvector = var_71_cvector; // 0xab Mov
	var_77_cvector = var_72_cvector; // 0xac Mov
	var_78_bool = var_64_bool; // 0xad Mov
	func_277(var_76_cvector, var_77_cvector, var_78_bool); // 0xae NEW_2
	var_136_int = 1; // 0xb0 PushI
	var_69_int = var_69_int + var_136_int; // 0xb1 Add2
	goto Label_163; // 0xb2 Jump
}


func_97(var_48_string)
{
	var_48_string = "pers_hunter"; // 0x62 MovS
	return 0; // 0x63 Return
}


func_100(var_51_string, var_52_int)
{
	var_54_int = 0; // 0x65 PushI
	var_55_bool = var_52_int == var_54_int; // 0x66 Eq
	if(var_55_bool == 0) goto Label_107; // 0x67 JumpB
	var_51_string = "hunter.xml"; // 0x68 MovS
	return 0; // 0x69 Return
	
Label_107:
	var_56_int = 1; // 0x6b PushI
	var_57_bool = var_52_int == var_56_int; // 0x6c Eq
	if(var_57_bool == 0) goto Label_112; // 0x6d JumpB
	var_51_string = "hunter2.xml"; // 0x6e MovS
	return 0; // 0x6f Return
	
Label_112:
	var_51_string = ""; // 0x70 MovS
	return 0; // 0x71 Return
}


func_360(var_149_cvector, var_150_cvector, var_151_bool)
{
	var_152_object = Obj(); var_153_object = Obj(); // 0x168 PushV
	var_154_bool = 0; var_155_float = 0; // 0x169 PushV
	var_156_bool = var_151_bool; // 0x16a Push
	if(var_156_bool == 0) goto Label_366; // 0x16b JumpB
	var_155_float = 0.05; // 0x16c MovF
	goto Label_367; // 0x16d Jump
	
Label_367:
	func_560(var_154_bool, var_155_float); // 0x16f NEW_2
	if(var_154_bool == 0) goto Label_378; // 0x171 JumpB
	var_157_string = "scripted_container"; // 0x172 PushS
	var_158_object = Obj(); // 0x173 PushV
	func_554(var_158_object); // 0x174 NEW_2
	var_159_string = "item_knife_steal.xml"; // 0x176 PushS
	AddActorByType(var_153_object, var_157_string, var_158_object, var_149_cvector, var_150_cvector, var_159_string); // 0x177 Func
	var_153_object = 0; // 0x179 SetNull
	
Label_378:
	return 2; // 0x17a Return
	
Label_366:
	var_155_float = 0.05; // 0x16e MovF
}


func_554(var_48_object)
{
	var_49_object = Obj(); var_50_object = Obj(); // 0x22a PushV
	self(var_50_object); // 0x22b Func
	var_48_object = var_50_object; // 0x22d Mov
	return 2; // 0x22e Return
}


func_560(var_32_bool, var_33_float)
{
	var_35_float = 0; var_36_float = 0; // 0x230 PushV
	rand(var_36_float); // 0x231 Func
	var_32_bool = var_36_float < var_33_float; // 0x233 LT2
	return 2; // 0x234 Return
}


func_379(var_173_cvector, var_174_cvector, var_175_bool)
{
	var_176_string = ""; var_177_object = Obj(); var_178_string = ""; var_179_object = Obj(); // 0x17b PushV
	var_180_bool = 0; var_181_float = 0; // 0x17c PushV
	var_182_bool = var_175_bool; // 0x17d Push
	if(var_182_bool == 0) goto Label_385; // 0x17e JumpB
	var_181_float = 0.2; // 0x17f MovF
	goto Label_386; // 0x180 Jump
	
Label_386:
	func_560(var_180_bool, var_181_float); // 0x182 NEW_2
	if(var_180_bool == 0) goto Label_414; // 0x184 JumpB
	var_183_int = 10; // 0x185 PushI
	var_184_int = 15; // 0x186 PushI
	var_185_int = 3; // 0x187 PushI
	var_186_int = 3; // 0x188 PushI
	var_187_int = 3; // 0x189 PushI
	var_188_int = 1; // 0x18a PushI
	var_189_string = "bottle_water"; // 0x18b PushS
	var_190_string = "bottle_empty"; // 0x18c PushS
	var_191_string = "vegetables"; // 0x18d PushS
	var_192_string = "milk"; // 0x18e PushS
	var_193_string = "egg"; // 0x18f PushS
	var_194_string = "tvirin"; // 0x190 PushS
	RandOneOf(var_178_string, var_183_int, var_184_int, var_185_int, var_186_int, var_187_int, var_188_int, var_189_string, var_190_string, var_191_string, var_192_string, var_193_string, var_194_string); // 0x191 Func
	var_195_string = "scripted_container"; // 0x193 PushS
	var_196_object = Obj(); // 0x194 PushV
	func_554(var_196_object); // 0x195 NEW_2
	var_197_string = "item_"; // 0x197 PushS
	var_198_int = var_197_string + var_178_string; // 0x198 Add
	var_199_string = "_steal.xml"; // 0x199 PushS
	var_200_int = var_198_int + var_199_string; // 0x19a Add
	AddActorByType(var_179_object, var_195_string, var_196_object, var_173_cvector, var_174_cvector, var_200_int); // 0x19b Func
	var_179_object = 0; // 0x19d SetNull
	
Label_414:
	return 4; // 0x19e Return
	
Label_385:
	var_181_float = 0.4; // 0x181 MovF
}


func_180(var_137_bool)
{
	var_138_int = 0; var_139_bool = 0; var_140_cvector = CVector(0,0,0); var_141_cvector = CVector(0,0,0); var_142_int = 0; var_143_bool = 0; var_144_cvector = CVector(0,0,0); var_145_cvector = CVector(0,0,0); // 0xb4 PushV
	var_142_int = 1; // 0xb5 MovI
	
Label_182:
	var_146_string = "pt_item_knife"; // 0xb6 PushS
	var_147_int = var_146_string + var_142_int; // 0xb7 Add
	GetLocator(var_147_int, var_143_bool, var_144_cvector, var_145_cvector); // 0xb8 Func
	var_148_bool = var_143_bool == 0; // 0xba Not
	if(var_148_bool == 0) goto Label_189; // 0xbb JumpB
	goto Label_198; // 0xbc Jump
	
Label_198:
	return 8; // 0xc6 Return
	
Label_189:
	var_149_cvector = CVector(0,0,0); var_150_cvector = CVector(0,0,0); var_151_bool = 0; // 0xbd PushV
	var_149_cvector = var_144_cvector; // 0xbe Mov
	var_150_cvector = var_145_cvector; // 0xbf Mov
	var_151_bool = var_137_bool; // 0xc0 Mov
	func_360(var_149_cvector, var_150_cvector, var_151_bool); // 0xc1 NEW_2
	var_160_int = 1; // 0xc3 PushI
	var_142_int = var_142_int + var_160_int; // 0xc4 Add2
	goto Label_182; // 0xc5 Jump
}


func_565(var_203_object)
{
	var_204_object = Obj(); var_205_object = Obj(); // 0x235 PushV
	CreateObjectVector(var_205_object); // 0x236 Func
	var_203_object = var_205_object; // 0x238 Mov
	return 2; // 0x239 Return
}


func_121()
{
	var_2_bool = 0; var_3_bool = 0; // 0x79 PushV
	var_4_string = "nailed"; // 0x7a PushS
	GetProperty(var_4_string, var_3_bool); // 0x7b Func
	var_5_bool = 0; // 0x7d PushV
	var_5_bool = var_3_bool; // 0x7e Mov
	func_142(var_5_bool); // 0x7f NEW_2
	var_64_bool = 0; // 0x81 PushV
	var_64_bool = var_3_bool; // 0x82 Mov
	func_161(var_64_bool); // 0x83 NEW_2
	var_137_bool = 0; // 0x85 PushV
	var_137_bool = var_3_bool; // 0x86 Mov
	func_180(var_137_bool); // 0x87 NEW_2
	var_161_bool = 0; // 0x89 PushV
	var_161_bool = var_3_bool; // 0x8a Mov
	func_199(var_161_bool); // 0x8b NEW_2
	return 2; // 0x8d Return
}


func_571(var_234_int, var_235_string)
{
	var_236_int = 0; var_237_bool = 0; var_238_int = 0; var_239_bool = 0; // 0x23b PushV
	var_238_int = 1; // 0x23c MovI
	
Label_573:
	var_240_int = var_235_string + var_238_int; // 0x23d Add
	GetLocator(var_240_int, var_239_bool); // 0x23e Func
	var_241_bool = var_239_bool == 0; // 0x240 Not
	if(var_241_bool == 0) goto Label_579; // 0x241 JumpB
	goto Label_582; // 0x242 Jump
	
Label_582:
	var_242_int = 1; // 0x246 PushI
	var_234_int = var_238_int - var_242_int; // 0x247 Sub2
	return 4; // 0x248 Return
	
Label_579:
	var_243_int = 1; // 0x243 PushI
	var_238_int = var_238_int + var_243_int; // 0x244 Add2
	goto Label_573; // 0x245 Jump
}


