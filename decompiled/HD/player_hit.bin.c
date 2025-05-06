	task_0_event_22(var_0_object, var_1_int, var_2_float, var_3_float, var_4_cvector, var_5_cvector, var_6_float, var_7_float, var_8_object, var_9_int, var_10_float, var_11_float)
	{
	var_12_int = 5; // 0x8 PushI
	var_13_bool = var_9_int != var_12_int; // 0x9 Neq
	if(var_13_bool == 0) goto Label_23; // 0xa JumpB
	var_14_object = Obj(); var_15_int = 0; var_16_float = 0; // 0xb PushV
	var_14_object = var_8_object; // 0xc Mov
	var_15_int = var_9_int; // 0xd Mov
	var_16_float = var_10_float; // 0xe Mov
	func_353(var_15_int, var_16_float); // 0xf NEW_2
	var_109_float = 0; // 0x11 PushV
	var_109_float = var_10_float; // 0x12 Mov
	TaskCall(1); // 0x13 TaskCall
	func_33(var_110_float, var_111_float, var_109_float); // 0x14 NEW_2
	TaskReturn(); // 0x15 TaskReturn
	
Label_23:
	return 0; // 0x17 Return
	}


task_0_event_43(var_0_object, var_1_int, var_2_float, var_3_float, var_4_cvector, var_5_cvector, var_6_float, var_7_float)
{
	var_8_object = Obj(); var_9_int = 0; var_10_float = 0; var_11_float = 0; // 0x19 PushV
	var_8_object = var_2_float; // 0x1a Mov
	var_9_int = var_3_float; // 0x1b Mov
	var_10_float = var_4_cvector; // 0x1c Mov
	var_11_float = var_5_cvector; // 0x1d Mov
	func_7(); // 0x1e NEW_2
	return 0; // 0x20 Return
}


	task_1_event_22(var_0_float, var_1_float, var_2_object, var_3_int, var_4_float, var_5_float, var_6_cvector, var_7_cvector, var_8_object, var_9_int, var_10_float, var_11_float)
	{
	var_12_float = 0; var_13_float = 0; // 0x81 PushV
	var_14_object = Obj(); var_15_int = 0; var_16_float = 0; // 0x82 PushV
	var_14_object = var_8_object; // 0x83 Mov
	var_15_int = var_9_int; // 0x84 Mov
	var_16_float = var_10_float; // 0x85 Mov
	func_353(var_15_int, var_16_float); // 0x86 NEW_2
	var_109_float = 0; var_110_float = 0; // 0x88 PushV
	var_110_float = var_10_float; // 0x89 Mov
	func_215(var_109_float, var_110_float); // 0x8a NEW_2
	var_13_float = var_109_float; // 0x8b Mov
	var_117_bool = var_1_float < var_0_float; // 0x8d LT
	if(var_117_bool == 0) goto Label_147; // 0x8e JumpB
	var_118_bool = var_13_float > var_0_float; // 0x8f GT
	if(var_118_bool == 0) goto Label_146; // 0x90 JumpB
	var_1_float = var_13_float; // 0x91 TMov
	
Label_146:
	goto Label_150; // 0x92 Jump
	
Label_150:
	return 2; // 0x96 Return
	
Label_147:
	var_119_bool = var_13_float > var_1_float; // 0x93 GT
	if(var_119_bool == 0) goto Label_150; // 0x94 JumpB
	var_1_float = var_13_float; // 0x95 TMov
	}


task_1_event_43(var_0_float, var_1_float, var_2_object, var_3_int, var_4_float, var_5_float, var_6_cvector, var_7_cvector)
{
	var_8_object = Obj(); var_9_int = 0; var_10_float = 0; var_11_float = 0; // 0x98 PushV
	var_8_object = var_2_object; // 0x99 Mov
	var_9_int = var_3_int; // 0x9a Mov
	var_10_float = var_4_float; // 0x9b Mov
	var_11_float = var_5_float; // 0x9c Mov
	func_129(); // 0x9d NEW_2
	return 0; // 0x9f Return
}


event_7(var_0_float, var_1_float, var_2_int)
{
	var_3_int = 0; // 0xc3 PushI
	var_4_bool = var_2_int == var_3_int; // 0xc4 Eq
	if(var_4_bool == 0) goto Label_204; // 0xc5 JumpB
	var_5_bool = GlobalVars[0]; // 0xc6 PushGE
	var_5_bool = 1; // 0xc7 MovB
	GlobalVars[0] = var_5_bool; // 0xc8 PopGE
	var_6_int = 0; // 0xc9 PushI
	KillTimer(var_6_int); // 0xca Func
	
Label_204:
	return 0; // 0xcc Return
}


main(var_0_float, var_1_float)
{
	var_2_bool = GlobalVars[0]; // 0x0 PushGE
	var_2_bool = 1; // 0x1 MovB
	GlobalVars[0] = var_2_bool; // 0x2 PopGE
	
Label_3:
	Hold(); // 0x3 Func
	goto Label_3; // 0x5 Jump
}


func_224(var_27_int, var_28_string)
{
	var_30_int = 0; var_31_bool = 0; var_32_int = 0; var_33_bool = 0; // 0xe0 PushV
	var_32_int = 0; // 0xe1 MovI
	
Label_226:
	var_34_int = 1; // 0xe2 PushI
	var_35_int = var_32_int + var_34_int; // 0xe3 Add
	var_36_int = var_28_string + var_35_int; // 0xe4 Add
	IsExistingSound(var_33_bool, var_36_int); // 0xe5 Func
	var_37_bool = var_33_bool == 0; // 0xe7 Not
	if(var_37_bool == 0) goto Label_234; // 0xe8 JumpB
	goto Label_237; // 0xe9 Jump
	
Label_237:
	var_27_int = var_32_int; // 0xed Mov
	return 4; // 0xee Return
	
Label_234:
	var_38_int = 1; // 0xea PushI
	var_32_int = var_32_int + var_38_int; // 0xeb Add2
	goto Label_226; // 0xec Jump
}


func_353(var_14_object, var_15_int)
{
	var_17_cvector = CVector(0,0,0); var_18_cvector = CVector(0,0,0); // 0x161 PushV
	var_19_int = 0; // 0x162 PushV
	var_19_int = var_15_int; // 0x163 Mov
	func_276(var_19_int); // 0x164 NEW_2
	var_78_bool = 0; // 0x166 PushV
	var_78_bool = 0; // 0x167 MovB
	var_79_int = 5; // 0x168 PushI
	var_80_bool = var_15_int != var_79_int; // 0x169 Neq
	if(var_80_bool == 0) goto Label_367; // 0x16a JumpB
	var_81_int = 6; // 0x16b PushI
	var_82_bool = var_15_int != var_81_int; // 0x16c Neq
	if(var_82_bool == 0) goto Label_367; // 0x16d JumpB
	var_78_bool = 1; // 0x16e MovB
	
Label_367:
	if(var_78_bool == 0) goto Label_400; // 0x16f JumpB
	var_83_bool = 0; // 0x170 PushV
	var_83_bool = 0; // 0x171 MovB
	var_84_object = Obj(); // 0x172 PushV
	func_167(var_84_object); // 0x173 NEW_2
	var_87_bool = var_14_object != var_84_object; // 0x175 Neq
	if(var_87_bool == 0) goto Label_380; // 0x176 JumpB
	var_88_string = "GetPosition"; // 0x177 PushS
	var_89_int = 1; // 0x178 PushI
	var_90_bool = IsFuncExist(var_14_object, var_88_string, var_89_int); // 0x179 FuncExist
	if(var_90_bool == 0) goto Label_380; // 0x17a JumpB
	var_83_bool = 1; // 0x17b MovB
	
Label_380:
	if(var_83_bool == 0) goto Label_400; // 0x17c JumpB
	GetSpeed(var_18_cvector); // 0x17d Func
	var_91_cvector = CVector(0,0,0); var_92_cvector = CVector(0,0,0); // 0x17f PushV
	var_93_cvector = CVector(0,0,0); var_94_object = Obj(); // 0x180 PushV
	var_94_object = var_14_object; // 0x181 Mov
	func_160(var_94_object); // 0x182 NEW_2
	var_92_cvector = var_93_cvector; // 0x183 Mov
	func_173(var_91_cvector, var_92_cvector); // 0x185 NEW_2
	var_104_int = 400; // 0x187 PushI
	var_105_float = var_91_cvector * var_104_int; // 0x188 Mult
	var_18_cvector = var_18_cvector - var_105_float; // 0x189 Sub2
	var_106_int = var_18_cvector | var_18_cvector; // 0x18a Or
	var_107_int = 160000; // 0x18b PushI
	var_108_bool = var_106_int < var_107_int; // 0x18c LT
	if(var_108_bool == 0) goto Label_400; // 0x18d JumpB
	SetSpeed(var_18_cvector); // 0x18e Func
	
Label_400:
	return 2; // 0x190 Return
}


func_160(var_93_cvector)
{
	var_95_cvector = CVector(0,0,0); var_96_cvector = CVector(0,0,0); var_97_cvector = CVector(0,0,0); var_98_cvector = CVector(0,0,0); // 0xa0 PushV
	GetPosition(var_97_cvector); // 0xa1 Func
	GetPosition(var_98_cvector); // 0xa3 ObjFunc
	var_93_cvector = var_98_cvector - var_97_cvector; // 0xa5 Sub2
	return 4; // 0xa6 Return
}


func_33(var_0_object, var_1_int, var_109_float)
{
	var_112_float = 0; var_113_bool = 0; var_114_float = 0; var_115_bool = 0; var_116_float = 0; var_117_float = 0; var_118_float = 0; var_119_float = 0; var_120_float = 0; var_121_float = 0; var_122_bool = 0; var_123_float = 0; var_124_bool = 0; var_125_float = 0; var_126_float = 0; var_127_float = 0; var_128_float = 0; var_129_float = 0; // 0x21 PushV
	var_0_object = 0.0; // 0x22 TMovF
	var_121_float = var_109_float; // 0x23 Mov
	var_130_float = 0.2; // 0x24 PushF
	var_131_bool = var_121_float < var_130_float; // 0x25 LT
	if(var_131_bool == 0) goto Label_40; // 0x26 JumpB
	var_121_float = 0.2; // 0x27 MovF
	
Label_40:
	var_132_bool = 0; // 0x28 PushV
	func_471(var_132_bool); // 0x29 NEW_2
	var_138_bool = var_132_bool == 0; // 0x2b Not
	if(var_138_bool == 0) goto Label_51; // 0x2c JumpB
	var_139_float = 0; var_140_float = 0; // 0x2d PushV
	var_141_float = 2.0; // 0x2e PushF
	var_140_float = var_141_float * var_121_float; // 0x2f Mult2
	func_215(var_139_float, var_140_float); // 0x30 NEW_2
	var_1_int = var_139_float; // 0x31 TMov
	
Label_51:
	LockCameraFOV(var_122_bool); // 0x33 Func
	GetCameraCurrentFOV(var_123_float); // 0x35 Func
	ModIsDOFEnabled(var_124_bool); // 0x37 Func
	var_148_bool = var_124_bool; // 0x39 Push
	if(var_148_bool == 0) goto Label_62; // 0x3a JumpB
	ModGetDOFParams(var_125_float, var_126_float, var_127_float, var_128_float); // 0x3b Func
	goto Label_69; // 0x3d Jump
	
Label_69:
	sync(var_129_float); // 0x45 Func
	var_149_bool = var_1_int < var_0_object; // 0x47 LT
	if(var_149_bool == 0) goto Label_93; // 0x48 JumpB
	var_150_float = 2.0; // 0x49 PushF
	var_151_float = var_129_float * var_150_float; // 0x4a Mult
	var_152_int = 2; // 0x4b PushI
	var_153_float = var_151_float / var_152_int; // 0x4c Div
	var_0_object = var_0_object - var_153_float; // 0x4d Sub2
	var_154_int = 0; // 0x4e PushI
	var_155_bool = var_0_object <= var_154_int; // 0x4f LE
	if(var_155_bool == 0) goto Label_92; // 0x50 JumpB
	var_156_float = 0; var_157_float = 0; var_158_bool = 0; var_159_float = 0; var_160_float = 0; var_161_float = 0; var_162_float = 0; // 0x51 PushV
	var_156_float = 0; // 0x52 MovI
	var_157_float = var_123_float; // 0x53 Mov
	var_158_bool = var_122_bool; // 0x54 Mov
	var_159_float = var_125_float; // 0x55 Mov
	var_160_float = var_126_float; // 0x56 Mov
	var_161_float = var_127_float; // 0x57 Mov
	var_162_float = var_128_float; // 0x58 Mov
	func_401(var_156_float, var_157_float, var_158_bool, var_159_float, var_160_float, var_161_float, var_162_float); // 0x59 NEW_2
	goto Label_124; // 0x5b Jump
	
Label_124:
	var_209_bool = var_122_bool; // 0x7c Push
	if(var_209_bool == 0) goto Label_128; // 0x7d JumpB
	UnlockCameraFOV(var_122_bool); // 0x7e Func
	
Label_128:
	return 18; // 0x80 Return
	
Label_92:
	goto Label_113; // 0x5c Jump
	
Label_113:
	var_210_float = 0; var_211_float = 0; var_212_bool = 0; var_213_float = 0; var_214_float = 0; var_215_float = 0; var_216_float = 0; // 0x71 PushV
	var_210_float = var_0_object; // 0x72 MovT
	var_211_float = var_123_float; // 0x73 Mov
	var_212_bool = var_122_bool; // 0x74 Mov
	var_213_float = var_125_float; // 0x75 Mov
	var_214_float = var_126_float; // 0x76 Mov
	var_215_float = var_127_float; // 0x77 Mov
	var_216_float = var_128_float; // 0x78 Mov
	func_401(var_210_float, var_211_float, var_212_bool, var_213_float, var_214_float, var_215_float, var_216_float); // 0x79 NEW_2
	goto Label_69; // 0x7b Jump
	
Label_93:
	var_217_float = 2.0; // 0x5d PushF
	var_218_float = var_129_float * var_217_float; // 0x5e Mult
	var_0_object = var_0_object + var_218_float; // 0x5f Add2
	var_219_bool = var_0_object >= var_1_int; // 0x60 GE
	if(var_219_bool == 0) goto Label_113; // 0x61 JumpB
	var_220_bool = var_0_object == 0; // 0x62 Not
	if(var_220_bool == 0) goto Label_111; // 0x63 JumpB
	var_221_float = 0; var_222_float = 0; var_223_bool = 0; var_224_float = 0; var_225_float = 0; var_226_float = 0; var_227_float = 0; // 0x64 PushV
	var_221_float = 0; // 0x65 MovI
	var_222_float = var_123_float; // 0x66 Mov
	var_223_bool = var_122_bool; // 0x67 Mov
	var_224_float = var_125_float; // 0x68 Mov
	var_225_float = var_126_float; // 0x69 Mov
	var_226_float = var_127_float; // 0x6a Mov
	var_227_float = var_128_float; // 0x6b Mov
	func_401(var_221_float, var_222_float, var_223_bool, var_224_float, var_225_float, var_226_float, var_227_float); // 0x6c NEW_2
	goto Label_124; // 0x6e Jump
	
Label_111:
	var_0_object = var_1_int; // 0x6f TMovT
	var_1_int = 0; // 0x70 TMovI
	
Label_62:
	var_125_float = 0; // 0x3e MovI
	var_126_float = 0; // 0x3f MovI
	var_127_float = 4000.0; // 0x40 MovF
	var_128_float = 4000.0; // 0x41 MovF
	var_228_bool = 1; // 0x42 PushB
	ModSetDOFEnabled(var_228_bool); // 0x43 Func
}


func_167(var_84_object)
{
	var_85_object = Obj(); var_86_object = Obj(); // 0xa7 PushV
	self(var_86_object); // 0xa8 Func
	var_84_object = var_86_object; // 0xaa Mov
	return 2; // 0xab Return
}


func_265(var_49_string)
{
	var_50_bool = GlobalVars[0]; // 0x10a PushGE
	if(var_50_bool == 0) goto Label_275; // 0x10b JumpB
	func_205(); // 0x10d NEW_2
	var_55_string = ""; // 0x10f PushV
	var_55_string = var_49_string; // 0x110 Mov
	func_239(var_55_string); // 0x111 NEW_2
	
Label_275:
	return 0; // 0x113 Return
}


func_205()
{
	var_51_bool = GlobalVars[0]; // 0xcd PushGE
	if(var_51_bool == 0) goto Label_214; // 0xce JumpB
	var_52_bool = GlobalVars[0]; // 0xcf PushGE
	var_52_bool = 0; // 0xd0 MovB
	GlobalVars[0] = var_52_bool; // 0xd1 PopGE
	var_53_int = 0; // 0xd2 PushI
	var_54_float = 3.0; // 0xd3 PushF
	SetTimer(var_53_int, var_54_float); // 0xd4 Func
	
Label_214:
	return 0; // 0xd6 Return
}


func_173(var_91_cvector, var_92_cvector)
{
	var_99_float = 0; var_100_float = 0; // 0xad PushV
	var_101_int = var_92_cvector | var_92_cvector; // 0xae Or
	var_100_float = sqrt(var_101_int); // 0xaf Sqrt2
	var_102_float = 0.0; // 0xb0 PushF
	var_103_bool = var_100_float < var_102_float; // 0xb1 LT
	if(var_103_bool == 0) goto Label_181; // 0xb2 JumpB
	var_91_cvector = CVector(0.0, 0.0, 0.0); // 0xb3 MovV
	return 2; // 0xb4 Return
	
Label_181:
	var_91_cvector = var_92_cvector / var_92_cvector; // 0xb5 Div2
	return 2; // 0xb6 Return
}


func_239(var_22_string)
{
	var_23_int = 0; var_24_int = 0; var_25_int = 0; var_26_int = 0; // 0xef PushV
	var_27_int = 0; var_28_string = ""; // 0xf0 PushV
	var_29_string = "_"; // 0xf1 PushS
	var_28_string = var_22_string + var_29_string; // 0xf2 Add2
	func_224(var_27_int, var_28_string); // 0xf3 NEW_2
	var_25_int = var_27_int; // 0xf4 Mov
	var_39_bool = var_25_int == 0; // 0xf6 Not
	if(var_39_bool == 0) goto Label_255; // 0xf7 JumpB
	var_40_string = "No sounds for ""; // 0xf8 PushS
	var_41_int = var_40_string + var_22_string; // 0xf9 Add
	var_42_string = """; // 0xfa PushS
	var_43_int = var_41_int + var_42_string; // 0xfb Add
	Trace(var_43_int); // 0xfc Func
	goto Label_264; // 0xfe Jump
	
Label_264:
	return 4; // 0x108 Return
	
Label_255:
	irand(var_26_int, var_25_int); // 0xff Func
	var_44_string = "_"; // 0x101 PushS
	var_45_int = var_22_string + var_44_string; // 0x102 Add
	var_46_int = 1; // 0x103 PushI
	var_47_int = var_26_int + var_46_int; // 0x104 Add
	var_48_int = var_45_int + var_47_int; // 0x105 Add
	PlaySound(var_48_int); // 0x106 Func
}


func_401(var_156_float, var_157_float, var_158_bool, var_159_float, var_160_float, var_161_float, var_162_float)
{
	var_163_float = 0; var_164_float = 0; var_165_float = 0; var_166_float = 0; var_167_bool = 0; var_168_float = 0; var_169_float = 0; var_170_float = 0; var_171_float = 0; var_172_bool = 0; // 0x191 PushV
	var_173_int = 0; // 0x192 PushI
	var_174_bool = var_156_float <= var_173_int; // 0x193 LE
	if(var_174_bool == 0) goto Label_421; // 0x194 JumpB
	var_175_bool = 0; // 0x195 PushV
	var_175_bool = 0; // 0x196 MovB
	var_176_float = 4000.0; // 0x197 PushF
	var_177_bool = var_161_float == var_176_float; // 0x198 Eq
	if(var_177_bool == 0) goto Label_414; // 0x199 JumpB
	var_178_float = 4000.0; // 0x19a PushF
	var_179_bool = var_162_float == var_178_float; // 0x19b Eq
	if(var_179_bool == 0) goto Label_414; // 0x19c JumpB
	var_175_bool = 1; // 0x19d MovB
	
Label_414:
	if(var_175_bool == 0) goto Label_418; // 0x19e JumpB
	var_180_bool = 0; // 0x19f PushB
	ModSetDOFEnabled(var_180_bool); // 0x1a0 Func
	
Label_418:
	ModSetDOFParams(var_159_float, var_160_float, var_161_float, var_162_float); // 0x1a2 Func
	goto Label_455; // 0x1a4 Jump
	
Label_455:
	ModGetDOFParams(var_168_float, var_169_float, var_170_float, var_171_float); // 0x1c7 Func
	ModDarkenLevel(var_156_float); // 0x1c9 Func
	ModBlurLevel(var_156_float); // 0x1cb Func
	var_181_bool = var_158_bool; // 0x1cd Push
	if(var_181_bool == 0) goto Label_470; // 0x1ce JumpB
	var_182_int = 1; // 0x1cf PushI
	var_183_float = 0.1; // 0x1d0 PushF
	var_184_float = var_156_float * var_183_float; // 0x1d1 Mult
	var_185_int = var_182_int + var_184_float; // 0x1d2 Add
	var_186_float = var_157_float * var_185_int; // 0x1d3 Mult
	SetCameraFOV(var_186_float); // 0x1d4 Func
	
Label_470:
	return 10; // 0x1d6 Return
	
Label_421:
	var_187_float = 50.0; // 0x1a5 PushF
	var_188_int = var_161_float - var_187_float; // 0x1a6 Sub
	var_189_int = 1; // 0x1a7 PushI
	var_190_float = 0; var_191_float = 0; var_192_float = 0; var_193_float = 0; // 0x1a8 PushV
	var_194_int = 2; // 0x1a9 PushI
	var_191_float = var_156_float * var_194_int; // 0x1aa Mult2
	var_192_float = 0; // 0x1ab MovI
	var_193_float = 0.99; // 0x1ac MovF
	func_183(var_190_float, var_191_float, var_192_float, var_193_float); // 0x1ad NEW_2
	var_195_int = var_189_int - var_190_float; // 0x1af Sub
	var_170_float = var_188_int * var_195_int; // 0x1b0 Mult2
	var_196_float = 70.0; // 0x1b1 PushF
	var_197_int = var_162_float - var_196_float; // 0x1b2 Sub
	var_198_int = 1; // 0x1b3 PushI
	var_199_float = 0; var_200_float = 0; var_201_float = 0; var_202_float = 0; // 0x1b4 PushV
	var_203_int = 2; // 0x1b5 PushI
	var_200_float = var_156_float * var_203_int; // 0x1b6 Mult2
	var_201_float = 0; // 0x1b7 MovI
	var_202_float = 0.99; // 0x1b8 MovF
	func_183(var_199_float, var_200_float, var_201_float, var_202_float); // 0x1b9 NEW_2
	var_204_int = var_198_int - var_199_float; // 0x1bb Sub
	var_171_float = var_197_int * var_204_int; // 0x1bc Mult2
	var_205_float = 50.0; // 0x1bd PushF
	var_206_bool = var_170_float < var_205_float; // 0x1be LT
	if(var_206_bool == 0) goto Label_449; // 0x1bf JumpB
	var_170_float = 50.0; // 0x1c0 MovF
	
Label_449:
	var_207_float = 70.0; // 0x1c1 PushF
	var_208_bool = var_171_float < var_207_float; // 0x1c2 LT
	if(var_208_bool == 0) goto Label_453; // 0x1c3 JumpB
	var_171_float = 70.0; // 0x1c4 MovF
	
Label_453:
	ModSetDOFParams(var_159_float, var_160_float, var_170_float, var_171_float); // 0x1c5 Func
}


func_276(var_19_int)
{
	var_20_int = 0; // 0x115 PushI
	var_21_bool = var_19_int == var_20_int; // 0x116 Eq
	if(var_21_bool == 0) goto Label_289; // 0x117 JumpB
	var_22_string = ""; // 0x118 PushV
	var_22_string = "hit_physical1"; // 0x119 MovS
	func_239(var_22_string); // 0x11a NEW_2
	var_49_string = ""; // 0x11c PushV
	var_49_string = "scream_physical1"; // 0x11d MovS
	func_265(var_49_string); // 0x11e NEW_2
	goto Label_352; // 0x120 Jump
	
Label_352:
	return 0; // 0x160 Return
	
Label_289:
	var_56_int = 1; // 0x121 PushI
	var_57_bool = var_19_int == var_56_int; // 0x122 Eq
	if(var_57_bool == 0) goto Label_301; // 0x123 JumpB
	var_58_string = ""; // 0x124 PushV
	var_58_string = "hit_physical2"; // 0x125 MovS
	func_239(var_58_string); // 0x126 NEW_2
	var_59_string = ""; // 0x128 PushV
	var_59_string = "scream_physical2"; // 0x129 MovS
	func_265(var_59_string); // 0x12a NEW_2
	goto Label_352; // 0x12c Jump
	
Label_301:
	var_60_int = 2; // 0x12d PushI
	var_61_bool = var_19_int == var_60_int; // 0x12e Eq
	if(var_61_bool == 0) goto Label_313; // 0x12f JumpB
	var_62_string = ""; // 0x130 PushV
	var_62_string = "hit_bullet"; // 0x131 MovS
	func_239(var_62_string); // 0x132 NEW_2
	var_63_string = ""; // 0x134 PushV
	var_63_string = "scream_bullet"; // 0x135 MovS
	func_265(var_63_string); // 0x136 NEW_2
	goto Label_352; // 0x138 Jump
	
Label_313:
	var_64_int = 3; // 0x139 PushI
	var_65_bool = var_19_int == var_64_int; // 0x13a Eq
	if(var_65_bool == 0) goto Label_325; // 0x13b JumpB
	var_66_string = ""; // 0x13c PushV
	var_66_string = "hit_oscoloc"; // 0x13d MovS
	func_239(var_66_string); // 0x13e NEW_2
	var_67_string = ""; // 0x140 PushV
	var_67_string = "scream_oscoloc"; // 0x141 MovS
	func_265(var_67_string); // 0x142 NEW_2
	goto Label_352; // 0x144 Jump
	
Label_325:
	var_68_int = 6; // 0x145 PushI
	var_69_bool = var_19_int == var_68_int; // 0x146 Eq
	if(var_69_bool == 0) goto Label_337; // 0x147 JumpB
	var_70_string = ""; // 0x148 PushV
	var_70_string = "hit_mental"; // 0x149 MovS
	func_239(var_70_string); // 0x14a NEW_2
	var_71_string = ""; // 0x14c PushV
	var_71_string = "scream_mental"; // 0x14d MovS
	func_265(var_71_string); // 0x14e NEW_2
	goto Label_352; // 0x150 Jump
	
Label_337:
	var_72_int = 7; // 0x151 PushI
	var_73_bool = var_19_int == var_72_int; // 0x152 Eq
	if(var_73_bool == 0) goto Label_349; // 0x153 JumpB
	var_74_string = ""; // 0x154 PushV
	var_74_string = "hit_rat"; // 0x155 MovS
	func_239(var_74_string); // 0x156 NEW_2
	var_75_string = ""; // 0x158 PushV
	var_75_string = "scream_rat"; // 0x159 MovS
	func_265(var_75_string); // 0x15a NEW_2
	goto Label_352; // 0x15c Jump
	
Label_349:
	var_76_int = 4; // 0x15d PushI
	var_77_bool = var_19_int == var_76_int; // 0x15e Eq
	if(var_77_bool == 0) goto Label_352; // 0x15f JumpB
}


func_471(var_132_bool)
{
	var_133_bool = 0; var_134_bool = 0; // 0x1d7 PushV
	var_135_string = "blocking"; // 0x1d8 PushS
	HasProperty(var_135_string, var_134_bool); // 0x1d9 Func
	var_136_bool = var_134_bool == 0; // 0x1db Not
	if(var_136_bool == 0) goto Label_479; // 0x1dc JumpB
	var_132_bool = 0; // 0x1dd MovB
	return 2; // 0x1de Return
	
Label_479:
	var_137_string = "blocking"; // 0x1df PushS
	GetProperty(var_137_string, var_134_bool); // 0x1e0 Func
	var_132_bool = var_134_bool; // 0x1e2 Mov
	return 2; // 0x1e3 Return
}


func_183(var_111_float, var_112_float, var_113_float, var_114_float)
{
	var_115_bool = var_112_float < var_113_float; // 0xb8 LT
	if(var_115_bool == 0) goto Label_188; // 0xb9 JumpB
	var_111_float = var_113_float; // 0xba Mov
	return 0; // 0xbb Return
	
Label_188:
	var_116_bool = var_112_float > var_114_float; // 0xbc GT
	if(var_116_bool == 0) goto Label_192; // 0xbd JumpB
	var_111_float = var_114_float; // 0xbe Mov
	return 0; // 0xbf Return
	
Label_192:
	var_111_float = var_112_float; // 0xc0 Mov
	return 0; // 0xc1 Return
}


func_215(var_109_float, var_110_float)
{
	var_111_float = 0; var_112_float = 0; var_113_float = 0; var_114_float = 0; // 0xd8 PushV
	var_112_float = sqrt(var_110_float); // 0xd9 Sqrt2
	var_113_float = 0; // 0xda MovI
	var_114_float = 1; // 0xdb MovI
	func_183(var_111_float, var_112_float, var_113_float, var_114_float); // 0xdc NEW_2
	var_109_float = var_111_float; // 0xdd Mov
	return 0; // 0xdf Return
}


