task_0_event_5(var_0_object, var_1_object)
{
	var_2_int = 0; var_3_int = 0; var_4_int = 0; var_5_int = 0; var_6_int = 0; var_7_string = ""; var_8_string = ""; var_9_string = ""; var_10_int = 0; var_11_int = 0; var_12_int = 0; var_13_int = 0; var_14_int = 0; var_15_string = ""; var_16_string = ""; var_17_string = ""; // 0x14a PushV
	var_18_bool = var_1_object == 0; // 0x14b Not
	if(var_18_bool == 0) goto Label_337; // 0x14c JumpB
	var_19_object = Obj(); // 0x14d PushV
	func_462(var_19_object); // 0x14e NEW_2
	var_1_object = var_19_object; // 0x14f TMov
	
Label_337:
	var_22_bool = var_0_object == 0; // 0x151 Not
	if(var_22_bool == 0) goto Label_341; // 0x152 JumpB
	CreateIntVector(var_0_object); // 0x153 Func
	
Label_341:
	var_23_object = Obj(); // 0x155 PushV
	var_23_object = var_1_object; // 0x156 MovT
	func_486(var_23_object); // 0x157 NEW_2
	size(var_10_int); // 0x159 TObjFunc
	var_11_int = 0; // 0x15b MovI
	
Label_348:
	var_34_bool = var_11_int < var_10_int; // 0x15c LT
	if(var_34_bool == 0) goto Label_393; // 0x15d JumpB
	get(var_12_int, var_11_int); // 0x15e TObjFunc
	var_35_int = 1; // 0x160 PushI
	var_36_int = var_11_int + var_35_int; // 0x161 Add
	get(var_13_int, var_36_int); // 0x162 TObjFunc
	var_37_int = 2; // 0x164 PushI
	var_38_int = var_11_int + var_37_int; // 0x165 Add
	get(var_14_int, var_38_int); // 0x166 TObjFunc
	var_39_string = ""; var_40_int = 0; var_41_int = 0; // 0x168 PushV
	var_40_int = var_12_int; // 0x169 Mov
	var_41_int = var_13_int; // 0x16a Mov
	func_2(var_41_int); // 0x16b NEW_2
	var_15_string = var_39_string; // 0x16c Mov
	var_42_string = ""; var_43_int = 0; var_44_int = 0; // 0x16e PushV
	var_43_int = var_12_int; // 0x16f Mov
	var_44_int = var_14_int; // 0x170 Mov
	func_5(var_44_int); // 0x171 NEW_2
	var_16_string = var_42_string; // 0x172 Mov
	var_45_string = ""; var_46_int = 0; var_47_int = 0; // 0x174 PushV
	var_46_int = var_12_int; // 0x175 Mov
	var_47_int = var_14_int; // 0x176 Mov
	func_8(var_47_int); // 0x177 NEW_2
	var_17_string = var_45_string; // 0x178 Mov
	var_48_object = Obj(); var_49_object = Obj(); var_50_string = ""; var_51_string = ""; var_52_string = ""; // 0x17a PushV
	var_53_object = Obj(); // 0x17b PushV
	func_451(var_53_object); // 0x17c NEW_2
	var_49_object = var_53_object; // 0x17d Mov
	var_50_string = var_15_string; // 0x17f Mov
	var_51_string = var_16_string; // 0x180 Mov
	var_52_string = var_17_string; // 0x181 Mov
	func_468(var_48_object, var_49_object, var_50_string, var_51_string, var_52_string); // 0x182 NEW_2
	add(var_48_object); // 0x184 TObjFunc
	var_69_int = 3; // 0x186 PushI
	var_11_int = var_11_int + var_69_int; // 0x187 Add2
	goto Label_348; // 0x188 Jump
	
Label_393:
	return 16; // 0x189 Return
}


task_0_event_6(var_0_object, var_1_object)
{
	var_2_int = 0; var_3_int = 0; var_4_object = Obj(); var_5_bool = 0; var_6_int = 0; var_7_int = 0; var_8_object = Obj(); var_9_bool = 0; // 0x18a PushV
	size(var_6_int); // 0x18b TObjFunc
	var_7_int = 0; // 0x18d MovI
	
Label_398:
	var_10_bool = var_7_int < var_6_int; // 0x18e LT
	if(var_10_bool == 0) goto Label_434; // 0x18f JumpB
	get(var_8_object, var_7_int); // 0x190 TObjFunc
	var_11_bool = var_8_object != 0; // 0x192 NullNeq
	if(var_11_bool == 0) goto Label_420; // 0x193 JumpB
	IsDead(var_9_bool); // 0x194 ObjFunc
	var_12_bool = var_9_bool == 0; // 0x196 Not
	if(var_12_bool == 0) goto Label_418; // 0x197 JumpB
	var_13_bool = 0; var_14_object = Obj(); var_15_string = ""; // 0x198 PushV
	var_14_object = var_8_object; // 0x199 Mov
	var_15_string = "ToDie"; // 0x19a MovS
	func_439(var_13_bool, var_14_object, var_15_string); // 0x19b NEW_2
	var_22_bool = var_13_bool == 0; // 0x19d Not
	if(var_22_bool == 0) goto Label_418; // 0x19e JumpB
	var_23_int = 1; // 0x19f PushI
	var_7_int = var_7_int + var_23_int; // 0x1a0 Add2
	goto Label_433; // 0x1a1 Jump
	
Label_433:
	goto Label_398; // 0x1b1 Jump
	
Label_418:
	RemoveActor(var_8_object); // 0x1a2 Func
	
Label_420:
	remove(var_7_int); // 0x1a4 TObjFunc
	var_24_int = 3; // 0x1a6 PushI
	var_25_float = var_7_int * var_24_int; // 0x1a7 Mult
	var_26_int = 1; // 0x1a8 PushI
	var_27_int = var_7_int + var_26_int; // 0x1a9 Add
	var_28_int = 3; // 0x1aa PushI
	var_29_float = var_27_int * var_28_int; // 0x1ab Mult
	remove(var_25_float, var_29_float); // 0x1ac TObjFunc
	var_30_int = -1; // 0x1ae PushI
	var_6_int = var_6_int + var_30_int; // 0x1af Add2
	var_8_object = 0; // 0x1b0 SetNull
	
Label_434:
	var_31_object = Obj(); // 0x1b2 PushV
	var_31_object = var_1_object; // 0x1b3 MovT
	func_486(var_31_object); // 0x1b4 NEW_2
	return 8; // 0x1b6 Return
}


main(var_0_object, var_1_object)
{
	func_18(); // 0xc NEW_2
	func_312(var_0_object, var_1_object); // 0xf NEW_2
	return 0; // 0x11 Return
}


func_0()
{
	return 0; // 0x1 Return
}


func_257(var_149_cvector, var_150_cvector, var_151_bool)
{
	var_152_object = Obj(); var_153_object = Obj(); // 0x101 PushV
	var_154_bool = 0; var_155_float = 0; // 0x102 PushV
	var_156_bool = var_151_bool; // 0x103 Push
	if(var_156_bool == 0) goto Label_263; // 0x104 JumpB
	var_155_float = 0.05; // 0x105 MovF
	goto Label_264; // 0x106 Jump
	
Label_264:
	func_457(var_154_bool, var_155_float); // 0x108 NEW_2
	if(var_154_bool == 0) goto Label_275; // 0x10a JumpB
	var_157_string = "scripted_container"; // 0x10b PushS
	var_158_object = Obj(); // 0x10c PushV
	func_451(var_158_object); // 0x10d NEW_2
	var_159_string = "item_knife_steal.xml"; // 0x10f PushS
	AddActorByType(var_153_object, var_157_string, var_158_object, var_149_cvector, var_150_cvector, var_159_string); // 0x110 Func
	var_153_object = 0; // 0x112 SetNull
	
Label_275:
	return 2; // 0x113 Return
	
Label_263:
	var_155_float = 0.05; // 0x107 MovF
}


func_2(var_39_string)
{
	var_39_string = ""; // 0x3 MovS
	return 0; // 0x4 Return
}


func_451(var_48_object)
{
	var_49_object = Obj(); var_50_object = Obj(); // 0x1c3 PushV
	self(var_50_object); // 0x1c4 Func
	var_48_object = var_50_object; // 0x1c6 Mov
	return 2; // 0x1c7 Return
}


func_5(var_42_string)
{
	var_42_string = ""; // 0x6 MovS
	return 0; // 0x7 Return
}


func_8(var_45_string)
{
	var_45_string = ""; // 0x9 MovS
	return 0; // 0xa Return
}


func_457(var_32_bool, var_33_float)
{
	var_35_float = 0; var_36_float = 0; // 0x1c9 PushV
	rand(var_36_float); // 0x1ca Func
	var_32_bool = var_36_float < var_33_float; // 0x1cc LT2
	return 2; // 0x1cd Return
}


func_77(var_137_bool)
{
	var_138_int = 0; var_139_bool = 0; var_140_cvector = CVector(0,0,0); var_141_cvector = CVector(0,0,0); var_142_int = 0; var_143_bool = 0; var_144_cvector = CVector(0,0,0); var_145_cvector = CVector(0,0,0); // 0x4d PushV
	var_142_int = 1; // 0x4e MovI
	
Label_79:
	var_146_string = "pt_item_knife"; // 0x4f PushS
	var_147_int = var_146_string + var_142_int; // 0x50 Add
	GetLocator(var_147_int, var_143_bool, var_144_cvector, var_145_cvector); // 0x51 Func
	var_148_bool = var_143_bool == 0; // 0x53 Not
	if(var_148_bool == 0) goto Label_86; // 0x54 JumpB
	goto Label_95; // 0x55 Jump
	
Label_95:
	return 8; // 0x5f Return
	
Label_86:
	var_149_cvector = CVector(0,0,0); var_150_cvector = CVector(0,0,0); var_151_bool = 0; // 0x56 PushV
	var_149_cvector = var_144_cvector; // 0x57 Mov
	var_150_cvector = var_145_cvector; // 0x58 Mov
	var_151_bool = var_137_bool; // 0x59 Mov
	func_257(var_149_cvector, var_150_cvector, var_151_bool); // 0x5a NEW_2
	var_160_int = 1; // 0x5c PushI
	var_142_int = var_142_int + var_160_int; // 0x5d Add2
	goto Label_79; // 0x5e Jump
}


func_462(var_203_object)
{
	var_204_object = Obj(); var_205_object = Obj(); // 0x1ce PushV
	CreateObjectVector(var_205_object); // 0x1cf Func
	var_203_object = var_205_object; // 0x1d1 Mov
	return 2; // 0x1d2 Return
}


func_18()
{
	var_2_bool = 0; var_3_bool = 0; // 0x12 PushV
	var_4_string = "nailed"; // 0x13 PushS
	GetProperty(var_4_string, var_3_bool); // 0x14 Func
	var_5_bool = 0; // 0x16 PushV
	var_5_bool = var_3_bool; // 0x17 Mov
	func_39(var_5_bool); // 0x18 NEW_2
	var_64_bool = 0; // 0x1a PushV
	var_64_bool = var_3_bool; // 0x1b Mov
	func_58(var_64_bool); // 0x1c NEW_2
	var_137_bool = 0; // 0x1e PushV
	var_137_bool = var_3_bool; // 0x1f Mov
	func_77(var_137_bool); // 0x20 NEW_2
	var_161_bool = 0; // 0x22 PushV
	var_161_bool = var_3_bool; // 0x23 Mov
	func_96(var_161_bool); // 0x24 NEW_2
	return 2; // 0x26 Return
}


func_276(var_173_cvector, var_174_cvector, var_175_bool)
{
	var_176_string = ""; var_177_object = Obj(); var_178_string = ""; var_179_object = Obj(); // 0x114 PushV
	var_180_bool = 0; var_181_float = 0; // 0x115 PushV
	var_182_bool = var_175_bool; // 0x116 Push
	if(var_182_bool == 0) goto Label_282; // 0x117 JumpB
	var_181_float = 0.2; // 0x118 MovF
	goto Label_283; // 0x119 Jump
	
Label_283:
	func_457(var_180_bool, var_181_float); // 0x11b NEW_2
	if(var_180_bool == 0) goto Label_311; // 0x11d JumpB
	var_183_int = 10; // 0x11e PushI
	var_184_int = 15; // 0x11f PushI
	var_185_int = 3; // 0x120 PushI
	var_186_int = 3; // 0x121 PushI
	var_187_int = 3; // 0x122 PushI
	var_188_int = 1; // 0x123 PushI
	var_189_string = "bottle_water"; // 0x124 PushS
	var_190_string = "bottle_empty"; // 0x125 PushS
	var_191_string = "vegetables"; // 0x126 PushS
	var_192_string = "milk"; // 0x127 PushS
	var_193_string = "egg"; // 0x128 PushS
	var_194_string = "tvirin"; // 0x129 PushS
	RandOneOf(var_178_string, var_183_int, var_184_int, var_185_int, var_186_int, var_187_int, var_188_int, var_189_string, var_190_string, var_191_string, var_192_string, var_193_string, var_194_string); // 0x12a Func
	var_195_string = "scripted_container"; // 0x12c PushS
	var_196_object = Obj(); // 0x12d PushV
	func_451(var_196_object); // 0x12e NEW_2
	var_197_string = "item_"; // 0x130 PushS
	var_198_int = var_197_string + var_178_string; // 0x131 Add
	var_199_string = "_steal.xml"; // 0x132 PushS
	var_200_int = var_198_int + var_199_string; // 0x133 Add
	AddActorByType(var_179_object, var_195_string, var_196_object, var_173_cvector, var_174_cvector, var_200_int); // 0x134 Func
	var_179_object = 0; // 0x136 SetNull
	
Label_311:
	return 4; // 0x137 Return
	
Label_282:
	var_181_float = 0.4; // 0x11a MovF
}


func_468(var_48_object, var_49_object, var_50_string, var_51_string, var_52_string)
{
	var_56_bool = 0; var_57_cvector = CVector(0,0,0); var_58_cvector = CVector(0,0,0); var_59_object = Obj(); var_60_bool = 0; var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0); var_63_object = Obj(); // 0x1d4 PushV
	GetLocator(var_50_string, var_60_bool, var_61_cvector, var_62_cvector); // 0x1d5 ObjFunc
	var_64_bool = var_60_bool == 0; // 0x1d7 Not
	if(var_64_bool == 0) goto Label_481; // 0x1d8 JumpB
	var_65_string = "Locator "; // 0x1d9 PushS
	var_66_int = var_65_string + var_50_string; // 0x1da Add
	var_67_string = " doesn't exist"; // 0x1db PushS
	var_68_int = var_66_int + var_67_string; // 0x1dc Add
	Trace(var_68_int); // 0x1dd Func
	var_63_object = 0; // 0x1df SetNull
	goto Label_483; // 0x1e0 Jump
	
Label_483:
	var_48_object = var_63_object; // 0x1e3 Mov
	return 8; // 0x1e4 Return
	
Label_481:
	AddActor(var_63_object, var_51_string, var_49_object, var_61_cvector, var_62_cvector, var_52_string); // 0x1e1 Func
}


func_96(var_161_bool)
{
	var_162_int = 0; var_163_bool = 0; var_164_cvector = CVector(0,0,0); var_165_cvector = CVector(0,0,0); var_166_int = 0; var_167_bool = 0; var_168_cvector = CVector(0,0,0); var_169_cvector = CVector(0,0,0); // 0x60 PushV
	var_166_int = 1; // 0x61 MovI
	
Label_98:
	var_170_string = "pt_item_bottle"; // 0x62 PushS
	var_171_int = var_170_string + var_166_int; // 0x63 Add
	GetLocator(var_171_int, var_167_bool, var_168_cvector, var_169_cvector); // 0x64 Func
	var_172_bool = var_167_bool == 0; // 0x66 Not
	if(var_172_bool == 0) goto Label_105; // 0x67 JumpB
	goto Label_114; // 0x68 Jump
	
Label_114:
	return 8; // 0x72 Return
	
Label_105:
	var_173_cvector = CVector(0,0,0); var_174_cvector = CVector(0,0,0); var_175_bool = 0; // 0x69 PushV
	var_173_cvector = var_168_cvector; // 0x6a Mov
	var_174_cvector = var_169_cvector; // 0x6b Mov
	var_175_bool = var_161_bool; // 0x6c Mov
	func_276(var_173_cvector, var_174_cvector, var_175_bool); // 0x6d NEW_2
	var_201_int = 1; // 0x6f PushI
	var_166_int = var_166_int + var_201_int; // 0x70 Add2
	goto Label_98; // 0x71 Jump
}


func_486(var_31_object)
{
	var_32_int = 0; var_33_int = 0; var_34_object = Obj(); var_35_int = 0; var_36_int = 0; var_37_object = Obj(); // 0x1e6 PushV
	var_38_object = var_31_object; // 0x1e7 Push
	if(var_38_object == 0) goto Label_506; // 0x1e8 JumpB
	size(var_35_int); // 0x1e9 ObjFunc
	var_36_int = 0; // 0x1eb MovI
	
Label_492:
	var_39_bool = var_36_int < var_35_int; // 0x1ec LT
	if(var_39_bool == 0) goto Label_504; // 0x1ed JumpB
	get(var_37_object, var_36_int); // 0x1ee ObjFunc
	var_40_object = var_37_object; // 0x1f0 Push
	if(var_40_object == 0) goto Label_500; // 0x1f1 JumpB
	RemoveActor(var_37_object); // 0x1f2 Func
	
Label_500:
	var_37_object = 0; // 0x1f4 SetNull
	var_41_int = 1; // 0x1f5 PushI
	var_36_int = var_36_int + var_41_int; // 0x1f6 Add2
	goto Label_492; // 0x1f7 Jump
	
Label_504:
	clear(); // 0x1f8 ObjFunc
	
Label_506:
	return 6; // 0x1fa Return
}


func_39(var_5_bool)
{
	var_6_int = 0; var_7_bool = 0; var_8_cvector = CVector(0,0,0); var_9_cvector = CVector(0,0,0); var_10_int = 0; var_11_bool = 0; var_12_cvector = CVector(0,0,0); var_13_cvector = CVector(0,0,0); // 0x27 PushV
	var_10_int = 1; // 0x28 MovI
	
Label_41:
	var_14_string = "pt_item_food"; // 0x29 PushS
	var_15_int = var_14_string + var_10_int; // 0x2a Add
	GetLocator(var_15_int, var_11_bool, var_12_cvector, var_13_cvector); // 0x2b Func
	var_16_bool = var_11_bool == 0; // 0x2d Not
	if(var_16_bool == 0) goto Label_48; // 0x2e JumpB
	goto Label_57; // 0x2f Jump
	
Label_57:
	return 8; // 0x39 Return
	
Label_48:
	var_17_cvector = CVector(0,0,0); var_18_cvector = CVector(0,0,0); var_19_bool = 0; // 0x30 PushV
	var_17_cvector = var_12_cvector; // 0x31 Mov
	var_18_cvector = var_13_cvector; // 0x32 Mov
	var_19_bool = var_5_bool; // 0x33 Mov
	func_115(var_17_cvector, var_18_cvector, var_19_bool); // 0x34 NEW_2
	var_63_int = 1; // 0x36 PushI
	var_10_int = var_10_int + var_63_int; // 0x37 Add2
	goto Label_41; // 0x38 Jump
}


func_174(var_76_cvector, var_77_cvector, var_78_bool)
{
	var_79_string = ""; var_80_object = Obj(); var_81_float = 0; var_82_float = 0; var_83_cvector = CVector(0,0,0); var_84_object = Obj(); var_85_float = 0; var_86_float = 0; var_87_cvector = CVector(0,0,0); var_88_string = ""; var_89_object = Obj(); var_90_float = 0; var_91_float = 0; var_92_cvector = CVector(0,0,0); var_93_object = Obj(); var_94_float = 0; var_95_float = 0; var_96_cvector = CVector(0,0,0); // 0xae PushV
	var_97_bool = 0; var_98_float = 0; // 0xaf PushV
	var_99_bool = var_78_bool; // 0xb0 Push
	if(var_99_bool == 0) goto Label_180; // 0xb1 JumpB
	var_98_float = 0.05; // 0xb2 MovF
	goto Label_181; // 0xb3 Jump
	
Label_181:
	func_457(var_97_bool, var_98_float); // 0xb5 NEW_2
	if(var_97_bool == 0) goto Label_232; // 0xb7 JumpB
	var_100_int = 8; // 0xb8 PushI
	var_101_int = 3; // 0xb9 PushI
	var_102_int = 3; // 0xba PushI
	var_103_int = 3; // 0xbb PushI
	var_104_int = 2; // 0xbc PushI
	var_105_int = 2; // 0xbd PushI
	var_106_int = 1; // 0xbe PushI
	var_107_string = "rusk"; // 0xbf PushS
	var_108_string = "dried_fish"; // 0xc0 PushS
	var_109_string = "dried_meat"; // 0xc1 PushS
	var_110_string = "smoked_meat"; // 0xc2 PushS
	var_111_string = "fresh_fish"; // 0xc3 PushS
	var_112_string = "fresh_meat"; // 0xc4 PushS
	var_113_string = "tvirin"; // 0xc5 PushS
	RandOneOf(var_88_string, var_100_int, var_101_int, var_102_int, var_103_int, var_104_int, var_105_int, var_106_int, var_107_string, var_108_string, var_109_string, var_110_string, var_111_string, var_112_string, var_113_string); // 0xc6 Func
	RandVec2D(var_90_float, var_91_float); // 0xc8 Func
	var_114_float = GetByIndex(var_92_cvector, 0); // 0xca PushE
	var_114_float = var_90_float; // 0xcb Mov
	SetByIndex(var_92_cvector, 0) = var_114_float; // 0xcc PopE
	var_115_float = GetByIndex(var_92_cvector, 1); // 0xcd PushE
	var_115_float = 0; // 0xce MovI
	SetByIndex(var_92_cvector, 1) = var_115_float; // 0xcf PopE
	var_116_float = GetByIndex(var_92_cvector, 2); // 0xd0 PushE
	var_116_float = var_91_float; // 0xd1 Mov
	SetByIndex(var_92_cvector, 2) = var_116_float; // 0xd2 PopE
	var_117_string = "scripted_container"; // 0xd3 PushS
	var_118_object = Obj(); // 0xd4 PushV
	func_451(var_118_object); // 0xd5 NEW_2
	var_119_string = "item_plate.xml"; // 0xd7 PushS
	AddActorByType(var_89_object, var_117_string, var_118_object, var_76_cvector, var_92_cvector, var_119_string); // 0xd8 Func
	var_120_string = "scripted_container"; // 0xda PushS
	var_121_object = Obj(); // 0xdb PushV
	func_451(var_121_object); // 0xdc NEW_2
	var_122_cvector = CVector(0.0, 5.0, 0.0); // 0xde PushVec
	var_123_int = var_76_cvector + var_122_cvector; // 0xdf Add
	var_124_string = "item_"; // 0xe0 PushS
	var_125_int = var_124_string + var_88_string; // 0xe1 Add
	var_126_string = "_steal.xml"; // 0xe2 PushS
	var_127_int = var_125_int + var_126_string; // 0xe3 Add
	AddActorByType(var_89_object, var_120_string, var_121_object, var_123_int, var_77_cvector, var_127_int); // 0xe4 Func
	var_89_object = 0; // 0xe6 SetNull
	goto Label_256; // 0xe7 Jump
	
Label_256:
	return 18; // 0x100 Return
	
Label_232:
	var_128_bool = 0; var_129_float = 0; // 0xe8 PushV
	var_129_float = 0.5; // 0xe9 MovF
	func_457(var_128_bool, var_129_float); // 0xea NEW_2
	if(var_128_bool == 0) goto Label_256; // 0xec JumpB
	RandVec2D(var_94_float, var_95_float); // 0xed Func
	var_130_float = GetByIndex(var_96_cvector, 0); // 0xef PushE
	var_130_float = var_94_float; // 0xf0 Mov
	SetByIndex(var_96_cvector, 0) = var_130_float; // 0xf1 PopE
	var_131_float = GetByIndex(var_96_cvector, 1); // 0xf2 PushE
	var_131_float = 0; // 0xf3 MovI
	SetByIndex(var_96_cvector, 1) = var_131_float; // 0xf4 PopE
	var_132_float = GetByIndex(var_96_cvector, 2); // 0xf5 PushE
	var_132_float = var_95_float; // 0xf6 Mov
	SetByIndex(var_96_cvector, 2) = var_132_float; // 0xf7 PopE
	var_133_string = "scripted_container"; // 0xf8 PushS
	var_134_object = Obj(); // 0xf9 PushV
	func_451(var_134_object); // 0xfa NEW_2
	var_135_string = "item_plate.xml"; // 0xfc PushS
	AddActorByType(var_93_object, var_133_string, var_134_object, var_76_cvector, var_96_cvector, var_135_string); // 0xfd Func
	var_93_object = 0; // 0xff SetNull
	
Label_180:
	var_98_float = 0.2; // 0xb4 MovF
}


func_115(var_17_cvector, var_18_cvector, var_19_bool)
{
	var_20_string = ""; var_21_object = Obj(); var_22_object = Obj(); var_23_float = 0; var_24_float = 0; var_25_cvector = CVector(0,0,0); var_26_string = ""; var_27_object = Obj(); var_28_object = Obj(); var_29_float = 0; var_30_float = 0; var_31_cvector = CVector(0,0,0); // 0x73 PushV
	var_32_bool = 0; var_33_float = 0; // 0x74 PushV
	var_34_bool = var_19_bool; // 0x75 Push
	if(var_34_bool == 0) goto Label_121; // 0x76 JumpB
	var_33_float = 0.05; // 0x77 MovF
	goto Label_122; // 0x78 Jump
	
Label_122:
	func_457(var_32_bool, var_33_float); // 0x7a NEW_2
	if(var_32_bool == 0) goto Label_149; // 0x7c JumpB
	var_37_int = 5; // 0x7d PushI
	var_38_int = 5; // 0x7e PushI
	var_39_int = 3; // 0x7f PushI
	var_40_int = 2; // 0x80 PushI
	var_41_int = 3; // 0x81 PushI
	var_42_string = "bread"; // 0x82 PushS
	var_43_string = "bottle_water"; // 0x83 PushS
	var_44_string = "milk"; // 0x84 PushS
	var_45_string = "vegetables"; // 0x85 PushS
	var_46_string = "lemon"; // 0x86 PushS
	RandOneOf(var_26_string, var_37_int, var_38_int, var_39_int, var_40_int, var_41_int, var_42_string, var_43_string, var_44_string, var_45_string, var_46_string); // 0x87 Func
	var_47_string = "scripted_container"; // 0x89 PushS
	var_48_object = Obj(); // 0x8a PushV
	func_451(var_48_object); // 0x8b NEW_2
	var_51_string = "item_"; // 0x8d PushS
	var_52_int = var_51_string + var_26_string; // 0x8e Add
	var_53_string = "_steal.xml"; // 0x8f PushS
	var_54_int = var_52_int + var_53_string; // 0x90 Add
	AddActorByType(var_27_object, var_47_string, var_48_object, var_17_cvector, var_18_cvector, var_54_int); // 0x91 Func
	var_27_object = 0; // 0x93 SetNull
	goto Label_173; // 0x94 Jump
	
Label_173:
	return 12; // 0xad Return
	
Label_149:
	var_55_bool = 0; var_56_float = 0; // 0x95 PushV
	var_56_float = 0.5; // 0x96 MovF
	func_457(var_55_bool, var_56_float); // 0x97 NEW_2
	if(var_55_bool == 0) goto Label_173; // 0x99 JumpB
	RandVec2D(var_29_float, var_30_float); // 0x9a Func
	var_57_float = GetByIndex(var_31_cvector, 0); // 0x9c PushE
	var_57_float = var_29_float; // 0x9d Mov
	SetByIndex(var_31_cvector, 0) = var_57_float; // 0x9e PopE
	var_58_float = GetByIndex(var_31_cvector, 1); // 0x9f PushE
	var_58_float = 0; // 0xa0 MovI
	SetByIndex(var_31_cvector, 1) = var_58_float; // 0xa1 PopE
	var_59_float = GetByIndex(var_31_cvector, 2); // 0xa2 PushE
	var_59_float = var_30_float; // 0xa3 Mov
	SetByIndex(var_31_cvector, 2) = var_59_float; // 0xa4 PopE
	var_60_string = "scripted_container"; // 0xa5 PushS
	var_61_object = Obj(); // 0xa6 PushV
	func_451(var_61_object); // 0xa7 NEW_2
	var_62_string = "item_plate.xml"; // 0xa9 PushS
	AddActorByType(var_28_object, var_60_string, var_61_object, var_17_cvector, var_31_cvector, var_62_string); // 0xaa Func
	var_28_object = 0; // 0xac SetNull
	
Label_121:
	var_33_float = 0.2; // 0x79 MovF
}


func_439(var_13_bool, var_14_object, var_15_string)
{
	var_16_bool = 0; var_17_bool = 0; // 0x1b7 PushV
	var_18_string = "HasProperty"; // 0x1b8 PushS
	var_19_int = 2; // 0x1b9 PushI
	var_20_bool = IsFuncExist(var_14_object, var_18_string, var_19_int); // 0x1ba FuncExist
	var_21_bool = var_20_bool == 0; // 0x1bb Not
	if(var_21_bool == 0) goto Label_447; // 0x1bc JumpB
	var_13_bool = 0; // 0x1bd MovB
	return 2; // 0x1be Return
	
Label_447:
	HasProperty(var_15_string, var_17_bool); // 0x1bf ObjFunc
	var_13_bool = var_17_bool; // 0x1c1 Mov
	return 2; // 0x1c2 Return
}


func_312(var_0_object, var_1_object)
{
	var_202_bool = var_1_object == 0; // 0x138 Not
	if(var_202_bool == 0) goto Label_318; // 0x139 JumpB
	var_203_object = Obj(); // 0x13a PushV
	func_462(var_203_object); // 0x13b NEW_2
	var_1_object = var_203_object; // 0x13c TMov
	
Label_318:
	var_206_bool = var_0_object == 0; // 0x13e Not
	if(var_206_bool == 0) goto Label_322; // 0x13f JumpB
	CreateIntVector(var_0_object); // 0x140 Func
	
Label_322:
	var_207_object = Obj(); // 0x142 PushV
	var_207_object = var_0_object; // 0x143 MovT
	func_0(); // 0x144 NEW_2
	
Label_326:
	Hold(); // 0x146 Func
	goto Label_326; // 0x148 Jump
}


func_58(var_64_bool)
{
	var_65_int = 0; var_66_bool = 0; var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0); var_69_int = 0; var_70_bool = 0; var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); // 0x3a PushV
	var_69_int = 1; // 0x3b MovI
	
Label_60:
	var_73_string = "pt_item_pfood"; // 0x3c PushS
	var_74_int = var_73_string + var_69_int; // 0x3d Add
	GetLocator(var_74_int, var_70_bool, var_71_cvector, var_72_cvector); // 0x3e Func
	var_75_bool = var_70_bool == 0; // 0x40 Not
	if(var_75_bool == 0) goto Label_67; // 0x41 JumpB
	goto Label_76; // 0x42 Jump
	
Label_76:
	return 8; // 0x4c Return
	
Label_67:
	var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0); var_78_bool = 0; // 0x43 PushV
	var_76_cvector = var_71_cvector; // 0x44 Mov
	var_77_cvector = var_72_cvector; // 0x45 Mov
	var_78_bool = var_64_bool; // 0x46 Mov
	func_174(var_76_cvector, var_77_cvector, var_78_bool); // 0x47 NEW_2
	var_136_int = 1; // 0x49 PushI
	var_69_int = var_69_int + var_136_int; // 0x4a Add2
	goto Label_60; // 0x4b Jump
}


