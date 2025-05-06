task_0_event_5(var_0_object, var_1_object)
{
	var_2_int = 0; var_3_int = 0; var_4_int = 0; var_5_int = 0; var_6_int = 0; var_7_string = ""; var_8_string = ""; var_9_string = ""; var_10_int = 0; var_11_int = 0; var_12_int = 0; var_13_int = 0; var_14_int = 0; var_15_string = ""; var_16_string = ""; var_17_string = ""; // 0x178 PushV
	var_18_bool = var_1_object == 0; // 0x179 Not
	if(var_18_bool == 0) goto Label_383; // 0x17a JumpB
	var_19_object = Obj(); // 0x17b PushV
	func_508(var_19_object); // 0x17c NEW_2
	var_1_object = var_19_object; // 0x17d TMov
	
Label_383:
	var_22_bool = var_0_object == 0; // 0x17f Not
	if(var_22_bool == 0) goto Label_387; // 0x180 JumpB
	CreateIntVector(var_0_object); // 0x181 Func
	
Label_387:
	var_23_object = Obj(); // 0x183 PushV
	var_23_object = var_1_object; // 0x184 MovT
	func_532(var_23_object); // 0x185 NEW_2
	size(var_10_int); // 0x187 TObjFunc
	var_11_int = 0; // 0x189 MovI
	
Label_394:
	var_34_bool = var_11_int < var_10_int; // 0x18a LT
	if(var_34_bool == 0) goto Label_439; // 0x18b JumpB
	get(var_12_int, var_11_int); // 0x18c TObjFunc
	var_35_int = 1; // 0x18e PushI
	var_36_int = var_11_int + var_35_int; // 0x18f Add
	get(var_13_int, var_36_int); // 0x190 TObjFunc
	var_37_int = 2; // 0x192 PushI
	var_38_int = var_11_int + var_37_int; // 0x193 Add
	get(var_14_int, var_38_int); // 0x194 TObjFunc
	var_39_string = ""; var_40_int = 0; var_41_int = 0; // 0x196 PushV
	var_40_int = var_12_int; // 0x197 Mov
	var_41_int = var_13_int; // 0x198 Mov
	func_28(var_39_string, var_40_int, var_41_int); // 0x199 NEW_2
	var_15_string = var_39_string; // 0x19a Mov
	var_45_string = ""; var_46_int = 0; var_47_int = 0; // 0x19c PushV
	var_46_int = var_12_int; // 0x19d Mov
	var_47_int = var_14_int; // 0x19e Mov
	func_37(var_47_int); // 0x19f NEW_2
	var_16_string = var_45_string; // 0x1a0 Mov
	var_48_string = ""; var_49_int = 0; var_50_int = 0; // 0x1a2 PushV
	var_49_int = var_12_int; // 0x1a3 Mov
	var_50_int = var_14_int; // 0x1a4 Mov
	func_40(var_48_string, var_49_int, var_50_int); // 0x1a5 NEW_2
	var_17_string = var_48_string; // 0x1a6 Mov
	var_57_object = Obj(); var_58_object = Obj(); var_59_string = ""; var_60_string = ""; var_61_string = ""; // 0x1a8 PushV
	var_62_object = Obj(); // 0x1a9 PushV
	func_497(var_62_object); // 0x1aa NEW_2
	var_58_object = var_62_object; // 0x1ab Mov
	var_59_string = var_15_string; // 0x1ad Mov
	var_60_string = var_16_string; // 0x1ae Mov
	var_61_string = var_17_string; // 0x1af Mov
	func_514(var_57_object, var_58_object, var_59_string, var_60_string, var_61_string); // 0x1b0 NEW_2
	add(var_57_object); // 0x1b2 TObjFunc
	var_78_int = 3; // 0x1b4 PushI
	var_11_int = var_11_int + var_78_int; // 0x1b5 Add2
	goto Label_394; // 0x1b6 Jump
	
Label_439:
	return 16; // 0x1b7 Return
}


task_0_event_6(var_0_object, var_1_object)
{
	var_2_int = 0; var_3_int = 0; var_4_object = Obj(); var_5_bool = 0; var_6_int = 0; var_7_int = 0; var_8_object = Obj(); var_9_bool = 0; // 0x1b8 PushV
	size(var_6_int); // 0x1b9 TObjFunc
	var_7_int = 0; // 0x1bb MovI
	
Label_444:
	var_10_bool = var_7_int < var_6_int; // 0x1bc LT
	if(var_10_bool == 0) goto Label_480; // 0x1bd JumpB
	get(var_8_object, var_7_int); // 0x1be TObjFunc
	var_11_bool = var_8_object != 0; // 0x1c0 NullNeq
	if(var_11_bool == 0) goto Label_466; // 0x1c1 JumpB
	IsDead(var_9_bool); // 0x1c2 ObjFunc
	var_12_bool = var_9_bool == 0; // 0x1c4 Not
	if(var_12_bool == 0) goto Label_464; // 0x1c5 JumpB
	var_13_bool = 0; var_14_object = Obj(); var_15_string = ""; // 0x1c6 PushV
	var_14_object = var_8_object; // 0x1c7 Mov
	var_15_string = "ToDie"; // 0x1c8 MovS
	func_485(var_13_bool, var_14_object, var_15_string); // 0x1c9 NEW_2
	var_22_bool = var_13_bool == 0; // 0x1cb Not
	if(var_22_bool == 0) goto Label_464; // 0x1cc JumpB
	var_23_int = 1; // 0x1cd PushI
	var_7_int = var_7_int + var_23_int; // 0x1ce Add2
	goto Label_479; // 0x1cf Jump
	
Label_479:
	goto Label_444; // 0x1df Jump
	
Label_464:
	RemoveActor(var_8_object); // 0x1d0 Func
	
Label_466:
	remove(var_7_int); // 0x1d2 TObjFunc
	var_24_int = 3; // 0x1d4 PushI
	var_25_float = var_7_int * var_24_int; // 0x1d5 Mult
	var_26_int = 1; // 0x1d6 PushI
	var_27_int = var_7_int + var_26_int; // 0x1d7 Add
	var_28_int = 3; // 0x1d8 PushI
	var_29_float = var_27_int * var_28_int; // 0x1d9 Mult
	remove(var_25_float, var_29_float); // 0x1da TObjFunc
	var_30_int = -1; // 0x1dc PushI
	var_6_int = var_6_int + var_30_int; // 0x1dd Add2
	var_8_object = 0; // 0x1de SetNull
	
Label_480:
	var_31_object = Obj(); // 0x1e0 PushV
	var_31_object = var_1_object; // 0x1e1 MovT
	func_532(var_31_object); // 0x1e2 NEW_2
	return 8; // 0x1e4 Return
}


main(var_0_object, var_1_object)
{
	func_64(); // 0x3a NEW_2
	func_358(var_0_object, var_1_object); // 0x3d NEW_2
	return 0; // 0x3f Return
}


func_0()
{
	var_208_int = 0; var_209_string = ""; var_210_bool = 0; var_211_cvector = CVector(0,0,0); var_212_int = 0; var_213_int = 0; var_214_string = ""; var_215_bool = 0; var_216_cvector = CVector(0,0,0); var_217_int = 0; // 0x0 PushV
	var_213_int = 1; // 0x1 MovI
	
Label_2:
	var_218_int = 2; // 0x2 PushI
	var_219_bool = var_213_int <= var_218_int; // 0x3 LE
	if(var_219_bool == 0) goto Label_27; // 0x4 JumpB
	var_220_string = "pt_child"; // 0x5 PushS
	var_214_string = var_220_string + var_213_int; // 0x6 Add2
	GetLocator(var_214_string, var_215_bool, var_216_cvector); // 0x7 Func
	var_221_bool = var_215_bool == 0; // 0x9 Not
	if(var_221_bool == 0) goto Label_15; // 0xa JumpB
	var_222_string = "not enough locators for quest b4q01"; // 0xb PushS
	Trace(var_222_string); // 0xc Func
	goto Label_27; // 0xe Jump
	
Label_27:
	return 10; // 0x1b Return
	
Label_15:
	var_223_int = 0; // 0xf PushI
	add(var_223_int); // 0x10 ObjFunc
	add(var_213_int); // 0x12 ObjFunc
	var_224_int = 1; // 0x14 PushI
	var_217_int = var_213_int - var_224_int; // 0x15 Sub2
	add(var_217_int); // 0x16 ObjFunc
	var_225_int = 1; // 0x18 PushI
	var_213_int = var_213_int + var_225_int; // 0x19 Add2
	goto Label_2; // 0x1a Jump
}


func_64()
{
	var_2_bool = 0; var_3_bool = 0; // 0x40 PushV
	var_4_string = "nailed"; // 0x41 PushS
	GetProperty(var_4_string, var_3_bool); // 0x42 Func
	var_5_bool = 0; // 0x44 PushV
	var_5_bool = var_3_bool; // 0x45 Mov
	func_85(var_5_bool); // 0x46 NEW_2
	var_64_bool = 0; // 0x48 PushV
	var_64_bool = var_3_bool; // 0x49 Mov
	func_104(var_64_bool); // 0x4a NEW_2
	var_137_bool = 0; // 0x4c PushV
	var_137_bool = var_3_bool; // 0x4d Mov
	func_123(var_137_bool); // 0x4e NEW_2
	var_161_bool = 0; // 0x50 PushV
	var_161_bool = var_3_bool; // 0x51 Mov
	func_142(var_161_bool); // 0x52 NEW_2
	return 2; // 0x54 Return
}


func_514(var_57_object, var_58_object, var_59_string, var_60_string, var_61_string)
{
	var_65_bool = 0; var_66_cvector = CVector(0,0,0); var_67_cvector = CVector(0,0,0); var_68_object = Obj(); var_69_bool = 0; var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); var_72_object = Obj(); // 0x202 PushV
	GetLocator(var_59_string, var_69_bool, var_70_cvector, var_71_cvector); // 0x203 ObjFunc
	var_73_bool = var_69_bool == 0; // 0x205 Not
	if(var_73_bool == 0) goto Label_527; // 0x206 JumpB
	var_74_string = "Locator "; // 0x207 PushS
	var_75_int = var_74_string + var_59_string; // 0x208 Add
	var_76_string = " doesn't exist"; // 0x209 PushS
	var_77_int = var_75_int + var_76_string; // 0x20a Add
	Trace(var_77_int); // 0x20b Func
	var_72_object = 0; // 0x20d SetNull
	goto Label_529; // 0x20e Jump
	
Label_529:
	var_57_object = var_72_object; // 0x211 Mov
	return 8; // 0x212 Return
	
Label_527:
	AddActor(var_72_object, var_60_string, var_58_object, var_70_cvector, var_71_cvector, var_61_string); // 0x20f Func
}


func_322(var_173_cvector, var_174_cvector, var_175_bool)
{
	var_176_string = ""; var_177_object = Obj(); var_178_string = ""; var_179_object = Obj(); // 0x142 PushV
	var_180_bool = 0; var_181_float = 0; // 0x143 PushV
	var_182_bool = var_175_bool; // 0x144 Push
	if(var_182_bool == 0) goto Label_328; // 0x145 JumpB
	var_181_float = 0.2; // 0x146 MovF
	goto Label_329; // 0x147 Jump
	
Label_329:
	func_503(var_180_bool, var_181_float); // 0x149 NEW_2
	if(var_180_bool == 0) goto Label_357; // 0x14b JumpB
	var_183_int = 10; // 0x14c PushI
	var_184_int = 15; // 0x14d PushI
	var_185_int = 3; // 0x14e PushI
	var_186_int = 3; // 0x14f PushI
	var_187_int = 3; // 0x150 PushI
	var_188_int = 1; // 0x151 PushI
	var_189_string = "bottle_water"; // 0x152 PushS
	var_190_string = "bottle_empty"; // 0x153 PushS
	var_191_string = "vegetables"; // 0x154 PushS
	var_192_string = "milk"; // 0x155 PushS
	var_193_string = "egg"; // 0x156 PushS
	var_194_string = "tvirin"; // 0x157 PushS
	RandOneOf(var_178_string, var_183_int, var_184_int, var_185_int, var_186_int, var_187_int, var_188_int, var_189_string, var_190_string, var_191_string, var_192_string, var_193_string, var_194_string); // 0x158 Func
	var_195_string = "scripted_container"; // 0x15a PushS
	var_196_object = Obj(); // 0x15b PushV
	func_497(var_196_object); // 0x15c NEW_2
	var_197_string = "item_"; // 0x15e PushS
	var_198_int = var_197_string + var_178_string; // 0x15f Add
	var_199_string = "_steal.xml"; // 0x160 PushS
	var_200_int = var_198_int + var_199_string; // 0x161 Add
	AddActorByType(var_179_object, var_195_string, var_196_object, var_173_cvector, var_174_cvector, var_200_int); // 0x162 Func
	var_179_object = 0; // 0x164 SetNull
	
Label_357:
	return 4; // 0x165 Return
	
Label_328:
	var_181_float = 0.4; // 0x148 MovF
}


func_142(var_161_bool)
{
	var_162_int = 0; var_163_bool = 0; var_164_cvector = CVector(0,0,0); var_165_cvector = CVector(0,0,0); var_166_int = 0; var_167_bool = 0; var_168_cvector = CVector(0,0,0); var_169_cvector = CVector(0,0,0); // 0x8e PushV
	var_166_int = 1; // 0x8f MovI
	
Label_144:
	var_170_string = "pt_item_bottle"; // 0x90 PushS
	var_171_int = var_170_string + var_166_int; // 0x91 Add
	GetLocator(var_171_int, var_167_bool, var_168_cvector, var_169_cvector); // 0x92 Func
	var_172_bool = var_167_bool == 0; // 0x94 Not
	if(var_172_bool == 0) goto Label_151; // 0x95 JumpB
	goto Label_160; // 0x96 Jump
	
Label_160:
	return 8; // 0xa0 Return
	
Label_151:
	var_173_cvector = CVector(0,0,0); var_174_cvector = CVector(0,0,0); var_175_bool = 0; // 0x97 PushV
	var_173_cvector = var_168_cvector; // 0x98 Mov
	var_174_cvector = var_169_cvector; // 0x99 Mov
	var_175_bool = var_161_bool; // 0x9a Mov
	func_322(var_173_cvector, var_174_cvector, var_175_bool); // 0x9b NEW_2
	var_201_int = 1; // 0x9d PushI
	var_166_int = var_166_int + var_201_int; // 0x9e Add2
	goto Label_144; // 0x9f Jump
}


func_532(var_31_object)
{
	var_32_int = 0; var_33_int = 0; var_34_object = Obj(); var_35_int = 0; var_36_int = 0; var_37_object = Obj(); // 0x214 PushV
	var_38_object = var_31_object; // 0x215 Push
	if(var_38_object == 0) goto Label_552; // 0x216 JumpB
	size(var_35_int); // 0x217 ObjFunc
	var_36_int = 0; // 0x219 MovI
	
Label_538:
	var_39_bool = var_36_int < var_35_int; // 0x21a LT
	if(var_39_bool == 0) goto Label_550; // 0x21b JumpB
	get(var_37_object, var_36_int); // 0x21c ObjFunc
	var_40_object = var_37_object; // 0x21e Push
	if(var_40_object == 0) goto Label_546; // 0x21f JumpB
	RemoveActor(var_37_object); // 0x220 Func
	
Label_546:
	var_37_object = 0; // 0x222 SetNull
	var_41_int = 1; // 0x223 PushI
	var_36_int = var_36_int + var_41_int; // 0x224 Add2
	goto Label_538; // 0x225 Jump
	
Label_550:
	clear(); // 0x226 ObjFunc
	
Label_552:
	return 6; // 0x228 Return
}


func_85(var_5_bool)
{
	var_6_int = 0; var_7_bool = 0; var_8_cvector = CVector(0,0,0); var_9_cvector = CVector(0,0,0); var_10_int = 0; var_11_bool = 0; var_12_cvector = CVector(0,0,0); var_13_cvector = CVector(0,0,0); // 0x55 PushV
	var_10_int = 1; // 0x56 MovI
	
Label_87:
	var_14_string = "pt_item_food"; // 0x57 PushS
	var_15_int = var_14_string + var_10_int; // 0x58 Add
	GetLocator(var_15_int, var_11_bool, var_12_cvector, var_13_cvector); // 0x59 Func
	var_16_bool = var_11_bool == 0; // 0x5b Not
	if(var_16_bool == 0) goto Label_94; // 0x5c JumpB
	goto Label_103; // 0x5d Jump
	
Label_103:
	return 8; // 0x67 Return
	
Label_94:
	var_17_cvector = CVector(0,0,0); var_18_cvector = CVector(0,0,0); var_19_bool = 0; // 0x5e PushV
	var_17_cvector = var_12_cvector; // 0x5f Mov
	var_18_cvector = var_13_cvector; // 0x60 Mov
	var_19_bool = var_5_bool; // 0x61 Mov
	func_161(var_17_cvector, var_18_cvector, var_19_bool); // 0x62 NEW_2
	var_63_int = 1; // 0x64 PushI
	var_10_int = var_10_int + var_63_int; // 0x65 Add2
	goto Label_87; // 0x66 Jump
}


func_28(var_39_string, var_40_int, var_41_int)
{
	var_42_int = 0; // 0x1d PushI
	var_43_bool = var_40_int == var_42_int; // 0x1e Eq
	if(var_43_bool == 0) goto Label_35; // 0x1f JumpB
	var_44_string = "pt_child"; // 0x20 PushS
	var_39_string = var_44_string + var_41_int; // 0x21 Add2
	return 0; // 0x22 Return
	
Label_35:
	var_39_string = ""; // 0x23 MovS
	return 0; // 0x24 Return
}


func_220(var_76_cvector, var_77_cvector, var_78_bool)
{
	var_79_string = ""; var_80_object = Obj(); var_81_float = 0; var_82_float = 0; var_83_cvector = CVector(0,0,0); var_84_object = Obj(); var_85_float = 0; var_86_float = 0; var_87_cvector = CVector(0,0,0); var_88_string = ""; var_89_object = Obj(); var_90_float = 0; var_91_float = 0; var_92_cvector = CVector(0,0,0); var_93_object = Obj(); var_94_float = 0; var_95_float = 0; var_96_cvector = CVector(0,0,0); // 0xdc PushV
	var_97_bool = 0; var_98_float = 0; // 0xdd PushV
	var_99_bool = var_78_bool; // 0xde Push
	if(var_99_bool == 0) goto Label_226; // 0xdf JumpB
	var_98_float = 0.05; // 0xe0 MovF
	goto Label_227; // 0xe1 Jump
	
Label_227:
	func_503(var_97_bool, var_98_float); // 0xe3 NEW_2
	if(var_97_bool == 0) goto Label_278; // 0xe5 JumpB
	var_100_int = 8; // 0xe6 PushI
	var_101_int = 3; // 0xe7 PushI
	var_102_int = 3; // 0xe8 PushI
	var_103_int = 3; // 0xe9 PushI
	var_104_int = 2; // 0xea PushI
	var_105_int = 2; // 0xeb PushI
	var_106_int = 1; // 0xec PushI
	var_107_string = "rusk"; // 0xed PushS
	var_108_string = "dried_fish"; // 0xee PushS
	var_109_string = "dried_meat"; // 0xef PushS
	var_110_string = "smoked_meat"; // 0xf0 PushS
	var_111_string = "fresh_fish"; // 0xf1 PushS
	var_112_string = "fresh_meat"; // 0xf2 PushS
	var_113_string = "tvirin"; // 0xf3 PushS
	RandOneOf(var_88_string, var_100_int, var_101_int, var_102_int, var_103_int, var_104_int, var_105_int, var_106_int, var_107_string, var_108_string, var_109_string, var_110_string, var_111_string, var_112_string, var_113_string); // 0xf4 Func
	RandVec2D(var_90_float, var_91_float); // 0xf6 Func
	var_114_float = GetByIndex(var_92_cvector, 0); // 0xf8 PushE
	var_114_float = var_90_float; // 0xf9 Mov
	SetByIndex(var_92_cvector, 0) = var_114_float; // 0xfa PopE
	var_115_float = GetByIndex(var_92_cvector, 1); // 0xfb PushE
	var_115_float = 0; // 0xfc MovI
	SetByIndex(var_92_cvector, 1) = var_115_float; // 0xfd PopE
	var_116_float = GetByIndex(var_92_cvector, 2); // 0xfe PushE
	var_116_float = var_91_float; // 0xff Mov
	SetByIndex(var_92_cvector, 2) = var_116_float; // 0x100 PopE
	var_117_string = "scripted_container"; // 0x101 PushS
	var_118_object = Obj(); // 0x102 PushV
	func_497(var_118_object); // 0x103 NEW_2
	var_119_string = "item_plate.xml"; // 0x105 PushS
	AddActorByType(var_89_object, var_117_string, var_118_object, var_76_cvector, var_92_cvector, var_119_string); // 0x106 Func
	var_120_string = "scripted_container"; // 0x108 PushS
	var_121_object = Obj(); // 0x109 PushV
	func_497(var_121_object); // 0x10a NEW_2
	var_122_cvector = CVector(0.0, 5.0, 0.0); // 0x10c PushVec
	var_123_int = var_76_cvector + var_122_cvector; // 0x10d Add
	var_124_string = "item_"; // 0x10e PushS
	var_125_int = var_124_string + var_88_string; // 0x10f Add
	var_126_string = "_steal.xml"; // 0x110 PushS
	var_127_int = var_125_int + var_126_string; // 0x111 Add
	AddActorByType(var_89_object, var_120_string, var_121_object, var_123_int, var_77_cvector, var_127_int); // 0x112 Func
	var_89_object = 0; // 0x114 SetNull
	goto Label_302; // 0x115 Jump
	
Label_302:
	return 18; // 0x12e Return
	
Label_278:
	var_128_bool = 0; var_129_float = 0; // 0x116 PushV
	var_129_float = 0.5; // 0x117 MovF
	func_503(var_128_bool, var_129_float); // 0x118 NEW_2
	if(var_128_bool == 0) goto Label_302; // 0x11a JumpB
	RandVec2D(var_94_float, var_95_float); // 0x11b Func
	var_130_float = GetByIndex(var_96_cvector, 0); // 0x11d PushE
	var_130_float = var_94_float; // 0x11e Mov
	SetByIndex(var_96_cvector, 0) = var_130_float; // 0x11f PopE
	var_131_float = GetByIndex(var_96_cvector, 1); // 0x120 PushE
	var_131_float = 0; // 0x121 MovI
	SetByIndex(var_96_cvector, 1) = var_131_float; // 0x122 PopE
	var_132_float = GetByIndex(var_96_cvector, 2); // 0x123 PushE
	var_132_float = var_95_float; // 0x124 Mov
	SetByIndex(var_96_cvector, 2) = var_132_float; // 0x125 PopE
	var_133_string = "scripted_container"; // 0x126 PushS
	var_134_object = Obj(); // 0x127 PushV
	func_497(var_134_object); // 0x128 NEW_2
	var_135_string = "item_plate.xml"; // 0x12a PushS
	AddActorByType(var_93_object, var_133_string, var_134_object, var_76_cvector, var_96_cvector, var_135_string); // 0x12b Func
	var_93_object = 0; // 0x12d SetNull
	
Label_226:
	var_98_float = 0.2; // 0xe2 MovF
}


func_161(var_17_cvector, var_18_cvector, var_19_bool)
{
	var_20_string = ""; var_21_object = Obj(); var_22_object = Obj(); var_23_float = 0; var_24_float = 0; var_25_cvector = CVector(0,0,0); var_26_string = ""; var_27_object = Obj(); var_28_object = Obj(); var_29_float = 0; var_30_float = 0; var_31_cvector = CVector(0,0,0); // 0xa1 PushV
	var_32_bool = 0; var_33_float = 0; // 0xa2 PushV
	var_34_bool = var_19_bool; // 0xa3 Push
	if(var_34_bool == 0) goto Label_167; // 0xa4 JumpB
	var_33_float = 0.05; // 0xa5 MovF
	goto Label_168; // 0xa6 Jump
	
Label_168:
	func_503(var_32_bool, var_33_float); // 0xa8 NEW_2
	if(var_32_bool == 0) goto Label_195; // 0xaa JumpB
	var_37_int = 5; // 0xab PushI
	var_38_int = 5; // 0xac PushI
	var_39_int = 3; // 0xad PushI
	var_40_int = 2; // 0xae PushI
	var_41_int = 3; // 0xaf PushI
	var_42_string = "bread"; // 0xb0 PushS
	var_43_string = "bottle_water"; // 0xb1 PushS
	var_44_string = "milk"; // 0xb2 PushS
	var_45_string = "vegetables"; // 0xb3 PushS
	var_46_string = "lemon"; // 0xb4 PushS
	RandOneOf(var_26_string, var_37_int, var_38_int, var_39_int, var_40_int, var_41_int, var_42_string, var_43_string, var_44_string, var_45_string, var_46_string); // 0xb5 Func
	var_47_string = "scripted_container"; // 0xb7 PushS
	var_48_object = Obj(); // 0xb8 PushV
	func_497(var_48_object); // 0xb9 NEW_2
	var_51_string = "item_"; // 0xbb PushS
	var_52_int = var_51_string + var_26_string; // 0xbc Add
	var_53_string = "_steal.xml"; // 0xbd PushS
	var_54_int = var_52_int + var_53_string; // 0xbe Add
	AddActorByType(var_27_object, var_47_string, var_48_object, var_17_cvector, var_18_cvector, var_54_int); // 0xbf Func
	var_27_object = 0; // 0xc1 SetNull
	goto Label_219; // 0xc2 Jump
	
Label_219:
	return 12; // 0xdb Return
	
Label_195:
	var_55_bool = 0; var_56_float = 0; // 0xc3 PushV
	var_56_float = 0.5; // 0xc4 MovF
	func_503(var_55_bool, var_56_float); // 0xc5 NEW_2
	if(var_55_bool == 0) goto Label_219; // 0xc7 JumpB
	RandVec2D(var_29_float, var_30_float); // 0xc8 Func
	var_57_float = GetByIndex(var_31_cvector, 0); // 0xca PushE
	var_57_float = var_29_float; // 0xcb Mov
	SetByIndex(var_31_cvector, 0) = var_57_float; // 0xcc PopE
	var_58_float = GetByIndex(var_31_cvector, 1); // 0xcd PushE
	var_58_float = 0; // 0xce MovI
	SetByIndex(var_31_cvector, 1) = var_58_float; // 0xcf PopE
	var_59_float = GetByIndex(var_31_cvector, 2); // 0xd0 PushE
	var_59_float = var_30_float; // 0xd1 Mov
	SetByIndex(var_31_cvector, 2) = var_59_float; // 0xd2 PopE
	var_60_string = "scripted_container"; // 0xd3 PushS
	var_61_object = Obj(); // 0xd4 PushV
	func_497(var_61_object); // 0xd5 NEW_2
	var_62_string = "item_plate.xml"; // 0xd7 PushS
	AddActorByType(var_28_object, var_60_string, var_61_object, var_17_cvector, var_31_cvector, var_62_string); // 0xd8 Func
	var_28_object = 0; // 0xda SetNull
	
Label_167:
	var_33_float = 0.2; // 0xa7 MovF
}


func_37(var_45_string)
{
	var_45_string = "pers_doberman"; // 0x26 MovS
	return 0; // 0x27 Return
}


func_485(var_13_bool, var_14_object, var_15_string)
{
	var_16_bool = 0; var_17_bool = 0; // 0x1e5 PushV
	var_18_string = "HasProperty"; // 0x1e6 PushS
	var_19_int = 2; // 0x1e7 PushI
	var_20_bool = IsFuncExist(var_14_object, var_18_string, var_19_int); // 0x1e8 FuncExist
	var_21_bool = var_20_bool == 0; // 0x1e9 Not
	if(var_21_bool == 0) goto Label_493; // 0x1ea JumpB
	var_13_bool = 0; // 0x1eb MovB
	return 2; // 0x1ec Return
	
Label_493:
	HasProperty(var_15_string, var_17_bool); // 0x1ed ObjFunc
	var_13_bool = var_17_bool; // 0x1ef Mov
	return 2; // 0x1f0 Return
}


func_358(var_0_object, var_1_object)
{
	var_202_bool = var_1_object == 0; // 0x166 Not
	if(var_202_bool == 0) goto Label_364; // 0x167 JumpB
	var_203_object = Obj(); // 0x168 PushV
	func_508(var_203_object); // 0x169 NEW_2
	var_1_object = var_203_object; // 0x16a TMov
	
Label_364:
	var_206_bool = var_0_object == 0; // 0x16c Not
	if(var_206_bool == 0) goto Label_368; // 0x16d JumpB
	CreateIntVector(var_0_object); // 0x16e Func
	
Label_368:
	var_207_object = Obj(); // 0x170 PushV
	var_207_object = var_0_object; // 0x171 MovT
	func_0(); // 0x172 NEW_2
	
Label_372:
	Hold(); // 0x174 Func
	goto Label_372; // 0x176 Jump
}


func_40(var_48_string, var_49_int, var_50_int)
{
	var_51_int = 0; // 0x29 PushI
	var_52_bool = var_49_int == var_51_int; // 0x2a Eq
	if(var_52_bool == 0) goto Label_55; // 0x2b JumpB
	var_53_int = 0; // 0x2c PushI
	var_54_bool = var_50_int == var_53_int; // 0x2d Eq
	if(var_54_bool == 0) goto Label_50; // 0x2e JumpB
	var_48_string = "d1q04_doberman1.xml"; // 0x2f MovS
	return 0; // 0x30 Return
	
Label_50:
	var_55_int = 1; // 0x32 PushI
	var_56_bool = var_50_int == var_55_int; // 0x33 Eq
	if(var_56_bool == 0) goto Label_55; // 0x34 JumpB
	var_48_string = "d1q04_doberman2.xml"; // 0x35 MovS
	return 0; // 0x36 Return
	
Label_55:
	var_48_string = ""; // 0x37 MovS
	return 0; // 0x38 Return
}


func_104(var_64_bool)
{
	var_65_int = 0; var_66_bool = 0; var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0); var_69_int = 0; var_70_bool = 0; var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); // 0x68 PushV
	var_69_int = 1; // 0x69 MovI
	
Label_106:
	var_73_string = "pt_item_pfood"; // 0x6a PushS
	var_74_int = var_73_string + var_69_int; // 0x6b Add
	GetLocator(var_74_int, var_70_bool, var_71_cvector, var_72_cvector); // 0x6c Func
	var_75_bool = var_70_bool == 0; // 0x6e Not
	if(var_75_bool == 0) goto Label_113; // 0x6f JumpB
	goto Label_122; // 0x70 Jump
	
Label_122:
	return 8; // 0x7a Return
	
Label_113:
	var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0); var_78_bool = 0; // 0x71 PushV
	var_76_cvector = var_71_cvector; // 0x72 Mov
	var_77_cvector = var_72_cvector; // 0x73 Mov
	var_78_bool = var_64_bool; // 0x74 Mov
	func_220(var_76_cvector, var_77_cvector, var_78_bool); // 0x75 NEW_2
	var_136_int = 1; // 0x77 PushI
	var_69_int = var_69_int + var_136_int; // 0x78 Add2
	goto Label_106; // 0x79 Jump
}


func_303(var_149_cvector, var_150_cvector, var_151_bool)
{
	var_152_object = Obj(); var_153_object = Obj(); // 0x12f PushV
	var_154_bool = 0; var_155_float = 0; // 0x130 PushV
	var_156_bool = var_151_bool; // 0x131 Push
	if(var_156_bool == 0) goto Label_309; // 0x132 JumpB
	var_155_float = 0.05; // 0x133 MovF
	goto Label_310; // 0x134 Jump
	
Label_310:
	func_503(var_154_bool, var_155_float); // 0x136 NEW_2
	if(var_154_bool == 0) goto Label_321; // 0x138 JumpB
	var_157_string = "scripted_container"; // 0x139 PushS
	var_158_object = Obj(); // 0x13a PushV
	func_497(var_158_object); // 0x13b NEW_2
	var_159_string = "item_knife_steal.xml"; // 0x13d PushS
	AddActorByType(var_153_object, var_157_string, var_158_object, var_149_cvector, var_150_cvector, var_159_string); // 0x13e Func
	var_153_object = 0; // 0x140 SetNull
	
Label_321:
	return 2; // 0x141 Return
	
Label_309:
	var_155_float = 0.05; // 0x135 MovF
}


func_497(var_48_object)
{
	var_49_object = Obj(); var_50_object = Obj(); // 0x1f1 PushV
	self(var_50_object); // 0x1f2 Func
	var_48_object = var_50_object; // 0x1f4 Mov
	return 2; // 0x1f5 Return
}


func_503(var_32_bool, var_33_float)
{
	var_35_float = 0; var_36_float = 0; // 0x1f7 PushV
	rand(var_36_float); // 0x1f8 Func
	var_32_bool = var_36_float < var_33_float; // 0x1fa LT2
	return 2; // 0x1fb Return
}


func_123(var_137_bool)
{
	var_138_int = 0; var_139_bool = 0; var_140_cvector = CVector(0,0,0); var_141_cvector = CVector(0,0,0); var_142_int = 0; var_143_bool = 0; var_144_cvector = CVector(0,0,0); var_145_cvector = CVector(0,0,0); // 0x7b PushV
	var_142_int = 1; // 0x7c MovI
	
Label_125:
	var_146_string = "pt_item_knife"; // 0x7d PushS
	var_147_int = var_146_string + var_142_int; // 0x7e Add
	GetLocator(var_147_int, var_143_bool, var_144_cvector, var_145_cvector); // 0x7f Func
	var_148_bool = var_143_bool == 0; // 0x81 Not
	if(var_148_bool == 0) goto Label_132; // 0x82 JumpB
	goto Label_141; // 0x83 Jump
	
Label_141:
	return 8; // 0x8d Return
	
Label_132:
	var_149_cvector = CVector(0,0,0); var_150_cvector = CVector(0,0,0); var_151_bool = 0; // 0x84 PushV
	var_149_cvector = var_144_cvector; // 0x85 Mov
	var_150_cvector = var_145_cvector; // 0x86 Mov
	var_151_bool = var_137_bool; // 0x87 Mov
	func_303(var_149_cvector, var_150_cvector, var_151_bool); // 0x88 NEW_2
	var_160_int = 1; // 0x8a PushI
	var_142_int = var_142_int + var_160_int; // 0x8b Add2
	goto Label_125; // 0x8c Jump
}


func_508(var_203_object)
{
	var_204_object = Obj(); var_205_object = Obj(); // 0x1fc PushV
	CreateObjectVector(var_205_object); // 0x1fd Func
	var_203_object = var_205_object; // 0x1ff Mov
	return 2; // 0x200 Return
}


