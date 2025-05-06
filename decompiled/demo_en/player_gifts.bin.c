main(var_0_object, var_1_cvector, var_2_float)
{
	var_3_float = 0; var_4_float = 0; // 0x0 PushV
	GetScene(var_0_object); // 0x1 Func
	GetPosition(var_4_float); // 0x3 Func
	var_5_float = GetByIndex(var_4_float, 1); // 0x5 PushE
	var_5_float = 0; // 0x6 MovI
	SetByIndex(var_1_cvector, 1) = var_5_float; // 0x7 PopE
	
Label_8:
	sync(var_4_float); // 0x8 Func
	var_6_float = 0; // 0xa PushV
	var_6_float = var_4_float; // 0xb Mov
	func_16(var_3_float, var_4_float, var_6_float); // 0xc NEW_2
	goto Label_8; // 0xe Jump
}


func_450(var_69_bool, var_71_object, var_72_int)
{
	var_77_int = 0; var_78_int = 0; var_79_bool = 0; var_80_int = 0; var_81_int = 0; var_82_bool = 0; // 0x1c2 PushV
	GetItemID(var_80_int); // 0x1c3 ObjFunc
	var_83_string = "Category"; // 0x1c5 PushS
	GetInvItemProperty(var_81_int, var_80_int, var_83_string); // 0x1c6 Func
	AddItem(var_82_bool, var_71_object, var_81_int, var_72_int); // 0x1c8 ObjFunc
	var_84_bool = var_82_bool; // 0x1ca Push
	if(var_84_bool == 0) goto Label_465; // 0x1cb JumpB
	var_85_int = 0; var_86_int = 0; // 0x1cc PushV
	var_85_int = var_80_int; // 0x1cd Mov
	var_86_int = var_72_int; // 0x1ce Mov
	func_419(var_85_int, var_86_int); // 0x1cf NEW_2
	
Label_465:
	var_69_bool = var_82_bool; // 0x1d1 Mov
	return 6; // 0x1d2 Return
}


func_391(var_138_string, var_139_int)
{
	var_140_int = 0; var_141_int = 0; // 0x187 PushV
	GetProperty(var_138_string, var_141_int); // 0x188 ObjFunc
	var_142_int = var_141_int + var_139_int; // 0x18a Add
	SetProperty(var_138_string, var_142_int); // 0x18b ObjFunc
	return 2; // 0x18d Return
}


func_136()
{
	var_47_int = 0; var_48_int = 0; // 0x88 PushV
	var_49_bool = 0; var_50_float = 0; // 0x89 PushV
	var_50_float = 0.14; // 0x8a MovF
	func_409(var_49_bool, var_50_float); // 0x8b NEW_2
	if(var_49_bool == 0) goto Label_177; // 0x8d JumpB
	var_53_int = 3; // 0x8e PushI
	irand(var_48_int, var_53_int); // 0x8f Func
	var_54_int = 0; // 0x91 PushI
	var_55_bool = var_48_int == var_54_int; // 0x92 Eq
	if(var_55_bool == 0) goto Label_156; // 0x93 JumpB
	var_56_string = ""; var_57_int = 0; var_58_int = 0; var_59_int = 0; // 0x94 PushV
	var_56_string = "flower"; // 0x95 MovS
	var_57_int = 1; // 0x96 MovI
	var_58_int = 5; // 0x97 MovI
	var_59_int = 1; // 0x98 MovI
	func_467(var_56_string, var_57_int, var_58_int, var_59_int); // 0x99 NEW_2
	goto Label_177; // 0x9b Jump
	
Label_177:
	return 2; // 0xb1 Return
	
Label_156:
	var_90_int = 1; // 0x9c PushI
	var_91_bool = var_48_int == var_90_int; // 0x9d Eq
	if(var_91_bool == 0) goto Label_167; // 0x9e JumpB
	var_92_string = ""; var_93_int = 0; var_94_int = 0; var_95_int = 0; // 0x9f PushV
	var_92_string = "peanut"; // 0xa0 MovS
	var_93_int = 1; // 0xa1 MovI
	var_94_int = 5; // 0xa2 MovI
	var_95_int = 1; // 0xa3 MovI
	func_467(var_92_string, var_93_int, var_94_int, var_95_int); // 0xa4 NEW_2
	goto Label_177; // 0xa6 Jump
	
Label_167:
	var_96_int = 2; // 0xa7 PushI
	var_97_bool = var_48_int == var_96_int; // 0xa8 Eq
	if(var_97_bool == 0) goto Label_177; // 0xa9 JumpB
	var_98_string = ""; var_99_int = 0; var_100_int = 0; var_101_int = 0; // 0xaa PushV
	var_98_string = "hook"; // 0xab MovS
	var_99_int = 1; // 0xac MovI
	var_100_int = 5; // 0xad MovI
	var_101_int = 1; // 0xae MovI
	func_467(var_98_string, var_99_int, var_100_int, var_101_int); // 0xaf NEW_2
}


func_398(var_73_object)
{
	var_74_object = Obj(); var_75_object = Obj(); // 0x18e PushV
	self(var_75_object); // 0x18f Func
	var_73_object = var_75_object; // 0x191 Mov
	return 2; // 0x192 Return
}


func_79(var_36_int)
{
	var_45_int = 6; // 0x50 PushI
	var_46_bool = var_36_int == var_45_int; // 0x51 Eq
	if(var_46_bool == 0) goto Label_87; // 0x52 JumpB
	func_136(); // 0x54 NEW_2
	goto Label_135; // 0x56 Jump
	
Label_135:
	return 0; // 0x87 Return
	
Label_87:
	var_102_bool = 0; // 0x57 PushV
	var_102_bool = 0; // 0x58 MovB
	var_103_int = 1; // 0x59 PushI
	var_104_bool = var_36_int >= var_103_int; // 0x5a GE
	if(var_104_bool == 0) goto Label_96; // 0x5b JumpB
	var_105_int = 5; // 0x5c PushI
	var_106_bool = var_36_int <= var_105_int; // 0x5d LE
	if(var_106_bool == 0) goto Label_96; // 0x5e JumpB
	var_102_bool = 1; // 0x5f MovB
	
Label_96:
	if(var_102_bool == 0) goto Label_101; // 0x60 JumpB
	func_178(); // 0x62 NEW_2
	goto Label_135; // 0x64 Jump
	
Label_101:
	var_153_bool = 0; // 0x65 PushV
	var_153_bool = 1; // 0x66 MovB
	var_154_int = 0; // 0x67 PushI
	var_155_bool = var_36_int == var_154_int; // 0x68 Eq
	if(var_155_bool == 0) goto Label_117; // 0x69 JumpB
	var_156_bool = 0; // 0x6a PushV
	var_156_bool = 0; // 0x6b MovB
	var_157_int = 7; // 0x6c PushI
	var_158_bool = var_36_int >= var_157_int; // 0x6d GE
	if(var_158_bool == 0) goto Label_115; // 0x6e JumpB
	var_159_int = 13; // 0x6f PushI
	var_160_bool = var_36_int <= var_159_int; // 0x70 LE
	if(var_160_bool == 0) goto Label_115; // 0x71 JumpB
	var_156_bool = 1; // 0x72 MovB
	
Label_115:
	if(var_156_bool == 0) goto Label_117; // 0x73 JumpB
	var_153_bool = 0; // 0x74 MovB
	
Label_117:
	if(var_153_bool == 0) goto Label_122; // 0x75 JumpB
	func_240(); // 0x77 NEW_2
	goto Label_135; // 0x79 Jump
	
Label_122:
	var_200_bool = 0; // 0x7a PushV
	var_200_bool = 1; // 0x7b MovB
	var_201_int = 14; // 0x7c PushI
	var_202_bool = var_36_int == var_201_int; // 0x7d Eq
	if(var_202_bool == 0) goto Label_131; // 0x7e JumpB
	var_203_int = 15; // 0x7f PushI
	var_204_bool = var_36_int == var_203_int; // 0x80 Eq
	if(var_204_bool == 0) goto Label_131; // 0x81 JumpB
	var_200_bool = 0; // 0x82 MovB
	
Label_131:
	if(var_200_bool == 0) goto Label_135; // 0x83 JumpB
	func_313(); // 0x85 NEW_2
}


func_16(var_0_object, var_1_cvector, var_2_float)
{
	var_7_object = Obj(); var_8_object = Obj(); var_9_cvector = CVector(0,0,0); var_10_float = 0; var_11_float = 0; var_12_object = Obj(); var_13_object = Obj(); var_14_cvector = CVector(0,0,0); var_15_float = 0; var_16_float = 0; // 0x10 PushV
	GetScene(var_12_object); // 0x11 Func
	GetMainOutdoorScene(var_13_object); // 0x13 Func
	var_17_bool = var_13_object != var_12_object; // 0x15 Neq
	if(var_17_bool == 0) goto Label_24; // 0x16 JumpB
	return 10; // 0x17 Return
	
Label_24:
	GetPosition(var_14_cvector); // 0x18 Func
	var_18_float = GetByIndex(var_14_cvector, 1); // 0x1a PushE
	var_18_float = 0; // 0x1b MovI
	SetByIndex(var_14_cvector, 1) = var_18_float; // 0x1c PopE
	var_19_float = 0; var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); // 0x1d PushV
	var_20_cvector = var_14_cvector; // 0x1e Mov
	var_21_cvector = var_1_cvector; // 0x1f MovT
	func_404(var_19_float, var_20_cvector, var_21_cvector); // 0x20 NEW_2
	var_15_float = var_19_float; // 0x21 Mov
	var_25_bool = 0; // 0x23 PushV
	var_25_bool = 1; // 0x24 MovB
	var_26_bool = var_12_object != var_0_object; // 0x25 Neq
	if(var_26_bool == 0) goto Label_43; // 0x26 JumpB
	var_27_int = 1000; // 0x27 PushI
	var_28_bool = var_15_float > var_27_int; // 0x28 GT
	if(var_28_bool == 0) goto Label_43; // 0x29 JumpB
	var_25_bool = 0; // 0x2a MovB
	
Label_43:
	if(var_25_bool == 0) goto Label_47; // 0x2b JumpB
	var_0_object = var_12_object; // 0x2c TMov
	var_1_cvector = var_14_cvector; // 0x2d TMov
	return 10; // 0x2e Return
	
Label_47:
	var_29_float = 0.5; // 0x2f PushF
	rand(var_16_float, var_29_float); // 0x30 Func
	var_30_float = 0.5; // 0x32 PushF
	var_16_float = var_16_float + var_30_float; // 0x33 Add2
	var_31_float = var_16_float * var_15_float; // 0x34 Mult
	var_32_float = 100.0; // 0x35 PushF
	var_33_float = var_31_float / var_32_float; // 0x36 Div
	var_2_float = var_2_float + var_33_float; // 0x37 Add2
	var_1_cvector = var_14_cvector; // 0x38 TMov
	var_0_object = var_12_object; // 0x39 TMov
	var_34_float = 50.0; // 0x3a PushF
	var_35_bool = var_2_float > var_34_float; // 0x3b GT
	if(var_35_bool == 0) goto Label_69; // 0x3c JumpB
	var_36_int = 0; // 0x3d PushV
	var_37_int = 0; // 0x3e PushV
	func_380(var_37_int); // 0x3f NEW_2
	var_36_int = var_37_int; // 0x40 Mov
	func_79(var_36_int); // 0x42 NEW_2
	var_2_float = 0; // 0x44 TMovI
	
Label_69:
	var_238_string = "walk_distance"; // 0x45 PushS
	var_239_int = 1000; // 0x46 PushI
	var_240_float = var_239_int * var_2_float; // 0x47 Mult
	var_241_float = 50.0; // 0x48 PushF
	var_242_float = var_240_float / var_241_float; // 0x49 Div
	SetProperty(var_238_string, var_242_float); // 0x4a Func
	return 10; // 0x4c Return
}


func_467(var_56_string, var_57_int, var_58_int, var_59_int)
{
	var_60_int = 0; var_61_object = Obj(); var_62_int = 0; var_63_object = Obj(); // 0x1d3 PushV
	var_64_bool = 0; var_65_int = 0; var_66_int = 0; // 0x1d4 PushV
	var_65_int = var_57_int; // 0x1d5 Mov
	var_66_int = var_58_int; // 0x1d6 Mov
	func_414(var_64_bool, var_65_int, var_66_int); // 0x1d7 NEW_2
	if(var_64_bool == 0) goto Label_491; // 0x1d9 JumpB
	irand(var_62_int, var_59_int); // 0x1da Func
	CreateInvItem(var_63_object); // 0x1dc Func
	SetItemName(var_56_string); // 0x1de ObjFunc
	var_69_bool = 0; var_70_object = Obj(); var_71_object = Obj(); var_72_int = 0; // 0x1e0 PushV
	var_73_object = Obj(); // 0x1e1 PushV
	func_398(var_73_object); // 0x1e2 NEW_2
	var_70_object = var_73_object; // 0x1e3 Mov
	var_71_object = var_63_object; // 0x1e5 Mov
	var_76_int = 1; // 0x1e6 PushI
	var_72_int = var_62_int + var_76_int; // 0x1e7 Add2
	func_450(var_70_object, var_71_object, var_72_int); // 0x1e8 NEW_2
	var_63_object = 0; // 0x1ea SetNull
	
Label_491:
	return 4; // 0x1eb Return
}


func_404(var_19_float, var_20_cvector, var_21_cvector)
{
	var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); // 0x194 PushV
	var_23_cvector = var_21_cvector - var_20_cvector; // 0x195 Sub2
	var_24_int = var_23_cvector | var_23_cvector; // 0x196 Or
	var_19_float = sqrt(var_24_int); // 0x197 Sqrt2
	return 2; // 0x198 Return
}


func_409(var_49_bool, var_50_float)
{
	var_51_float = 0; var_52_float = 0; // 0x199 PushV
	rand(var_52_float); // 0x19a Func
	var_49_bool = var_52_float < var_50_float; // 0x19c LT2
	return 2; // 0x19d Return
}


func_414(var_64_bool, var_65_int, var_66_int)
{
	var_67_int = 0; var_68_int = 0; // 0x19e PushV
	irand(var_68_int, var_66_int); // 0x19f Func
	var_64_bool = var_68_int < var_65_int; // 0x1a1 LT2
	return 2; // 0x1a2 Return
}


func_419(var_85_int, var_86_int)
{
	var_87_object = Obj(); var_88_object = Obj(); // 0x1a3 PushV
	CreateIntVector(var_88_object); // 0x1a4 Func
	add(var_85_int); // 0x1a6 ObjFunc
	add(var_86_int); // 0x1a8 ObjFunc
	var_89_int = 3; // 0x1aa PushI
	SendWorldWndMessage(var_89_int, var_88_object); // 0x1ab Func
	return 2; // 0x1ad Return
}


func_431(var_131_object, var_132_int)
{
	var_135_int = 0; var_136_int = 0; // 0x1af PushV
	var_137_object = Obj(); var_138_string = ""; var_139_int = 0; // 0x1b0 PushV
	var_137_object = var_131_object; // 0x1b1 Mov
	var_138_string = "money"; // 0x1b2 MovS
	var_139_int = var_132_int; // 0x1b3 Mov
	func_391(var_138_string, var_139_int); // 0x1b4 NEW_2
	var_143_int = 0; // 0x1b6 PushI
	var_144_bool = var_132_int > var_143_int; // 0x1b7 GT
	if(var_144_bool == 0) goto Label_449; // 0x1b8 JumpB
	var_145_string = "Money"; // 0x1b9 PushS
	GetInvItemByName(var_136_int, var_145_string); // 0x1ba Func
	var_146_int = 0; var_147_int = 0; // 0x1bc PushV
	var_146_int = var_136_int; // 0x1bd Mov
	var_147_int = var_132_int; // 0x1be Mov
	func_419(var_146_int, var_147_int); // 0x1bf NEW_2
	
Label_449:
	return 2; // 0x1c1 Return
}


func_240()
{
	var_161_int = 0; var_162_int = 0; var_163_int = 0; var_164_int = 0; var_165_int = 0; var_166_int = 0; // 0xf0 PushV
	var_167_bool = 0; var_168_float = 0; // 0xf1 PushV
	var_168_float = 0.14; // 0xf2 MovF
	func_409(var_167_bool, var_168_float); // 0xf3 NEW_2
	if(var_167_bool == 0) goto Label_282; // 0xf5 JumpB
	var_169_int = 3; // 0xf6 PushI
	irand(var_164_int, var_169_int); // 0xf7 Func
	var_170_int = 0; // 0xf9 PushI
	var_171_bool = var_164_int == var_170_int; // 0xfa Eq
	if(var_171_bool == 0) goto Label_260; // 0xfb JumpB
	var_172_string = ""; var_173_int = 0; var_174_int = 0; var_175_int = 0; // 0xfc PushV
	var_172_string = "silver_ring"; // 0xfd MovS
	var_173_int = 1; // 0xfe MovI
	var_174_int = 5; // 0xff MovI
	var_175_int = 1; // 0x100 MovI
	func_467(var_172_string, var_173_int, var_174_int, var_175_int); // 0x101 NEW_2
	goto Label_281; // 0x103 Jump
	
Label_281:
	goto Label_312; // 0x119 Jump
	
Label_312:
	return 6; // 0x138 Return
	
Label_260:
	var_176_int = 1; // 0x104 PushI
	var_177_bool = var_164_int == var_176_int; // 0x105 Eq
	if(var_177_bool == 0) goto Label_271; // 0x106 JumpB
	var_178_string = ""; var_179_int = 0; var_180_int = 0; var_181_int = 0; // 0x107 PushV
	var_178_string = "gold_ring"; // 0x108 MovS
	var_179_int = 1; // 0x109 MovI
	var_180_int = 10; // 0x10a MovI
	var_181_int = 1; // 0x10b MovI
	func_467(var_178_string, var_179_int, var_180_int, var_181_int); // 0x10c NEW_2
	goto Label_281; // 0x10e Jump
	
Label_271:
	var_182_int = 2; // 0x10f PushI
	var_183_bool = var_164_int == var_182_int; // 0x110 Eq
	if(var_183_bool == 0) goto Label_281; // 0x111 JumpB
	var_184_string = ""; var_185_int = 0; var_186_int = 0; var_187_int = 0; // 0x112 PushV
	var_184_string = "funduk"; // 0x113 MovS
	var_185_int = 1; // 0x114 MovI
	var_186_int = 5; // 0x115 MovI
	var_187_int = 1; // 0x116 MovI
	func_467(var_184_string, var_185_int, var_186_int, var_187_int); // 0x117 NEW_2
	
Label_282:
	var_188_bool = 0; var_189_float = 0; // 0x11a PushV
	var_189_float = 0.1; // 0x11b MovF
	func_409(var_188_bool, var_189_float); // 0x11c NEW_2
	if(var_188_bool == 0) goto Label_300; // 0x11e JumpB
	var_190_int = 10; // 0x11f PushI
	irand(var_165_int, var_190_int); // 0x120 Func
	var_191_object = Obj(); var_192_int = 0; // 0x122 PushV
	var_193_object = Obj(); // 0x123 PushV
	func_398(var_193_object); // 0x124 NEW_2
	var_191_object = var_193_object; // 0x125 Mov
	var_194_int = 1; // 0x127 PushI
	var_192_int = var_165_int + var_194_int; // 0x128 Add2
	func_431(var_191_object, var_192_int); // 0x129 NEW_2
	goto Label_312; // 0x12b Jump
	
Label_300:
	var_195_int = 3; // 0x12c PushI
	irand(var_166_int, var_195_int); // 0x12d Func
	var_196_object = Obj(); var_197_int = 0; // 0x12f PushV
	var_198_object = Obj(); // 0x130 PushV
	func_398(var_198_object); // 0x131 NEW_2
	var_196_object = var_198_object; // 0x132 Mov
	var_199_int = 1; // 0x134 PushI
	var_197_int = var_166_int + var_199_int; // 0x135 Add2
	func_431(var_196_object, var_197_int); // 0x136 NEW_2
}


func_178()
{
	var_107_int = 0; var_108_int = 0; var_109_int = 0; var_110_int = 0; var_111_int = 0; var_112_int = 0; // 0xb2 PushV
	var_113_bool = 0; var_114_float = 0; // 0xb3 PushV
	var_114_float = 0.14; // 0xb4 MovF
	func_409(var_113_bool, var_114_float); // 0xb5 NEW_2
	if(var_113_bool == 0) goto Label_209; // 0xb7 JumpB
	var_115_int = 2; // 0xb8 PushI
	irand(var_110_int, var_115_int); // 0xb9 Func
	var_116_int = 0; // 0xbb PushI
	var_117_bool = var_110_int == var_116_int; // 0xbc Eq
	if(var_117_bool == 0) goto Label_198; // 0xbd JumpB
	var_118_string = ""; var_119_int = 0; var_120_int = 0; var_121_int = 0; // 0xbe PushV
	var_118_string = "beads"; // 0xbf MovS
	var_119_int = 1; // 0xc0 MovI
	var_120_int = 9; // 0xc1 MovI
	var_121_int = 1; // 0xc2 MovI
	func_467(var_118_string, var_119_int, var_120_int, var_121_int); // 0xc3 NEW_2
	goto Label_208; // 0xc5 Jump
	
Label_208:
	goto Label_239; // 0xd0 Jump
	
Label_239:
	return 6; // 0xef Return
	
Label_198:
	var_122_int = 1; // 0xc6 PushI
	var_123_bool = var_110_int == var_122_int; // 0xc7 Eq
	if(var_123_bool == 0) goto Label_208; // 0xc8 JumpB
	var_124_string = ""; var_125_int = 0; var_126_int = 0; var_127_int = 0; // 0xc9 PushV
	var_124_string = "bracelet"; // 0xca MovS
	var_125_int = 1; // 0xcb MovI
	var_126_int = 5; // 0xcc MovI
	var_127_int = 1; // 0xcd MovI
	func_467(var_124_string, var_125_int, var_126_int, var_127_int); // 0xce NEW_2
	
Label_209:
	var_128_bool = 0; var_129_float = 0; // 0xd1 PushV
	var_129_float = 0.1; // 0xd2 MovF
	func_409(var_128_bool, var_129_float); // 0xd3 NEW_2
	if(var_128_bool == 0) goto Label_227; // 0xd5 JumpB
	var_130_int = 10; // 0xd6 PushI
	irand(var_111_int, var_130_int); // 0xd7 Func
	var_131_object = Obj(); var_132_int = 0; // 0xd9 PushV
	var_133_object = Obj(); // 0xda PushV
	func_398(var_133_object); // 0xdb NEW_2
	var_131_object = var_133_object; // 0xdc Mov
	var_134_int = 1; // 0xde PushI
	var_132_int = var_111_int + var_134_int; // 0xdf Add2
	func_431(var_131_object, var_132_int); // 0xe0 NEW_2
	goto Label_239; // 0xe2 Jump
	
Label_227:
	var_148_int = 3; // 0xe3 PushI
	irand(var_112_int, var_148_int); // 0xe4 Func
	var_149_object = Obj(); var_150_int = 0; // 0xe6 PushV
	var_151_object = Obj(); // 0xe7 PushV
	func_398(var_151_object); // 0xe8 NEW_2
	var_149_object = var_151_object; // 0xe9 Mov
	var_152_int = 1; // 0xeb PushI
	var_150_int = var_112_int + var_152_int; // 0xec Add2
	func_431(var_149_object, var_150_int); // 0xed NEW_2
}


func_375(var_42_cvector)
{
	var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); // 0x177 PushV
	GetPosition(var_44_cvector); // 0x178 Func
	var_42_cvector = var_44_cvector; // 0x17a Mov
	return 2; // 0x17b Return
}


func_313()
{
	var_205_int = 0; var_206_int = 0; var_207_int = 0; var_208_int = 0; var_209_int = 0; var_210_int = 0; // 0x139 PushV
	var_211_bool = 0; var_212_float = 0; // 0x13a PushV
	var_212_float = 0.14; // 0x13b MovF
	func_409(var_211_bool, var_212_float); // 0x13c NEW_2
	if(var_211_bool == 0) goto Label_344; // 0x13e JumpB
	var_213_int = 2; // 0x13f PushI
	irand(var_208_int, var_213_int); // 0x140 Func
	var_214_int = 0; // 0x142 PushI
	var_215_bool = var_208_int == var_214_int; // 0x143 Eq
	if(var_215_bool == 0) goto Label_333; // 0x144 JumpB
	var_216_string = ""; var_217_int = 0; var_218_int = 0; var_219_int = 0; // 0x145 PushV
	var_216_string = "needle"; // 0x146 MovS
	var_217_int = 1; // 0x147 MovI
	var_218_int = 6; // 0x148 MovI
	var_219_int = 1; // 0x149 MovI
	func_467(var_216_string, var_217_int, var_218_int, var_219_int); // 0x14a NEW_2
	goto Label_343; // 0x14c Jump
	
Label_343:
	goto Label_374; // 0x157 Jump
	
Label_374:
	return 6; // 0x176 Return
	
Label_333:
	var_220_int = 1; // 0x14d PushI
	var_221_bool = var_208_int == var_220_int; // 0x14e Eq
	if(var_221_bool == 0) goto Label_343; // 0x14f JumpB
	var_222_string = ""; var_223_int = 0; var_224_int = 0; var_225_int = 0; // 0x150 PushV
	var_222_string = "razor"; // 0x151 MovS
	var_223_int = 1; // 0x152 MovI
	var_224_int = 7; // 0x153 MovI
	var_225_int = 1; // 0x154 MovI
	func_467(var_222_string, var_223_int, var_224_int, var_225_int); // 0x155 NEW_2
	
Label_344:
	var_226_bool = 0; var_227_float = 0; // 0x158 PushV
	var_227_float = 0.1; // 0x159 MovF
	func_409(var_226_bool, var_227_float); // 0x15a NEW_2
	if(var_226_bool == 0) goto Label_362; // 0x15c JumpB
	var_228_int = 10; // 0x15d PushI
	irand(var_209_int, var_228_int); // 0x15e Func
	var_229_object = Obj(); var_230_int = 0; // 0x160 PushV
	var_231_object = Obj(); // 0x161 PushV
	func_398(var_231_object); // 0x162 NEW_2
	var_229_object = var_231_object; // 0x163 Mov
	var_232_int = 1; // 0x165 PushI
	var_230_int = var_209_int + var_232_int; // 0x166 Add2
	func_431(var_229_object, var_230_int); // 0x167 NEW_2
	goto Label_374; // 0x169 Jump
	
Label_362:
	var_233_int = 3; // 0x16a PushI
	irand(var_210_int, var_233_int); // 0x16b Func
	var_234_object = Obj(); var_235_int = 0; // 0x16d PushV
	var_236_object = Obj(); // 0x16e PushV
	func_398(var_236_object); // 0x16f NEW_2
	var_234_object = var_236_object; // 0x170 Mov
	var_237_int = 1; // 0x172 PushI
	var_235_int = var_210_int + var_237_int; // 0x173 Add2
	func_431(var_234_object, var_235_int); // 0x174 NEW_2
}


func_380(var_37_int)
{
	var_38_object = Obj(); var_39_int = 0; var_40_object = Obj(); var_41_int = 0; // 0x17c PushV
	GetScene(var_40_object); // 0x17d Func
	var_42_cvector = CVector(0,0,0); // 0x17f PushV
	func_375(var_42_cvector); // 0x180 NEW_2
	GetRegionByPt(var_41_int, var_42_cvector); // 0x182 ObjFunc
	var_37_int = var_41_int; // 0x184 Mov
	return 4; // 0x185 Return
}


