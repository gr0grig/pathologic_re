	task_0_event_22(var_0_object, var_1_int, var_2_float, var_3_float, var_4_cvector, var_5_cvector, var_6_float, var_7_float, var_8_object, var_9_int, var_10_float, var_11_float)
	{
	var_12_int = 5; // 0x8 PushI
	var_13_bool = var_9_int != var_12_int; // 0x9 Neq
	if(var_13_bool == 0) goto Label_23; // 0xa JumpB
	var_14_object = Obj(); var_15_int = 0; var_16_float = 0; // 0xb PushV
	var_14_object = var_8_object; // 0xc Mov
	var_15_int = var_9_int; // 0xd Mov
	var_16_float = var_10_float; // 0xe Mov
	func_327(var_15_int, var_16_float); // 0xf NEW_2
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
	var_12_float = 0; var_13_float = 0; // 0x67 PushV
	var_14_object = Obj(); var_15_int = 0; var_16_float = 0; // 0x68 PushV
	var_14_object = var_8_object; // 0x69 Mov
	var_15_int = var_9_int; // 0x6a Mov
	var_16_float = var_10_float; // 0x6b Mov
	func_327(var_15_int, var_16_float); // 0x6c NEW_2
	var_109_float = 0; var_110_float = 0; // 0x6e PushV
	var_110_float = var_10_float; // 0x6f Mov
	func_189(var_109_float, var_110_float); // 0x70 NEW_2
	var_13_float = var_109_float; // 0x71 Mov
	var_117_bool = var_1_float < var_0_float; // 0x73 LT
	if(var_117_bool == 0) goto Label_121; // 0x74 JumpB
	var_118_bool = var_13_float > var_0_float; // 0x75 GT
	if(var_118_bool == 0) goto Label_120; // 0x76 JumpB
	var_1_float = var_13_float; // 0x77 TMov
	
Label_120:
	goto Label_124; // 0x78 Jump
	
Label_124:
	return 2; // 0x7c Return
	
Label_121:
	var_119_bool = var_13_float > var_1_float; // 0x79 GT
	if(var_119_bool == 0) goto Label_124; // 0x7a JumpB
	var_1_float = var_13_float; // 0x7b TMov
	}


task_1_event_43(var_0_float, var_1_float, var_2_object, var_3_int, var_4_float, var_5_float, var_6_cvector, var_7_cvector)
{
	var_8_object = Obj(); var_9_int = 0; var_10_float = 0; var_11_float = 0; // 0x7e PushV
	var_8_object = var_2_object; // 0x7f Mov
	var_9_int = var_3_int; // 0x80 Mov
	var_10_float = var_4_float; // 0x81 Mov
	var_11_float = var_5_float; // 0x82 Mov
	func_103(); // 0x83 NEW_2
	return 0; // 0x85 Return
}


event_7(var_0_float, var_1_float, var_2_int)
{
	var_3_int = 0; // 0xa9 PushI
	var_4_bool = var_2_int == var_3_int; // 0xaa Eq
	if(var_4_bool == 0) goto Label_178; // 0xab JumpB
	var_5_bool = GlobalVars[0]; // 0xac PushGE
	var_5_bool = 1; // 0xad MovB
	GlobalVars[0] = var_5_bool; // 0xae PopGE
	var_6_int = 0; // 0xaf PushI
	KillTimer(var_6_int); // 0xb0 Func
	
Label_178:
	return 0; // 0xb2 Return
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


func_33(var_0_object, var_1_int, var_109_float)
{
	var_112_float = 0; var_113_bool = 0; var_114_float = 0; var_115_float = 0; var_116_float = 0; var_117_bool = 0; var_118_float = 0; var_119_float = 0; // 0x21 PushV
	var_0_object = 0.0; // 0x22 TMovF
	var_116_float = var_109_float; // 0x23 Mov
	var_120_float = 0.2; // 0x24 PushF
	var_121_bool = var_116_float < var_120_float; // 0x25 LT
	if(var_121_bool == 0) goto Label_40; // 0x26 JumpB
	var_116_float = 0.2; // 0x27 MovF
	
Label_40:
	var_122_bool = 0; // 0x28 PushV
	func_390(var_122_bool); // 0x29 NEW_2
	var_128_bool = var_122_bool == 0; // 0x2b Not
	if(var_128_bool == 0) goto Label_51; // 0x2c JumpB
	var_129_float = 0; var_130_float = 0; // 0x2d PushV
	var_131_float = 2.0; // 0x2e PushF
	var_130_float = var_131_float * var_116_float; // 0x2f Mult2
	func_189(var_129_float, var_130_float); // 0x30 NEW_2
	var_1_int = var_129_float; // 0x31 TMov
	
Label_51:
	LockCameraFOV(var_117_bool); // 0x33 Func
	GetCameraCurrentFOV(var_118_float); // 0x35 Func
	
Label_55:
	sync(var_119_float); // 0x37 Func
	var_138_bool = var_1_int < var_0_object; // 0x39 LT
	if(var_138_bool == 0) goto Label_75; // 0x3a JumpB
	var_139_float = 2.0; // 0x3b PushF
	var_140_float = var_119_float * var_139_float; // 0x3c Mult
	var_141_int = 2; // 0x3d PushI
	var_142_float = var_140_float / var_141_int; // 0x3e Div
	var_0_object = var_0_object - var_142_float; // 0x3f Sub2
	var_143_int = 0; // 0x40 PushI
	var_144_bool = var_0_object <= var_143_int; // 0x41 LE
	if(var_144_bool == 0) goto Label_74; // 0x42 JumpB
	var_145_float = 0; var_146_float = 0; var_147_bool = 0; // 0x43 PushV
	var_145_float = 0; // 0x44 MovI
	var_146_float = var_118_float; // 0x45 Mov
	var_147_bool = var_117_bool; // 0x46 Mov
	func_375(var_145_float, var_146_float, var_147_bool); // 0x47 NEW_2
	goto Label_98; // 0x49 Jump
	
Label_98:
	var_154_bool = var_117_bool; // 0x62 Push
	if(var_154_bool == 0) goto Label_102; // 0x63 JumpB
	UnlockCameraFOV(var_117_bool); // 0x64 Func
	
Label_102:
	return 8; // 0x66 Return
	
Label_74:
	goto Label_91; // 0x4a Jump
	
Label_91:
	var_155_float = 0; var_156_float = 0; var_157_bool = 0; // 0x5b PushV
	var_155_float = var_0_object; // 0x5c MovT
	var_156_float = var_118_float; // 0x5d Mov
	var_157_bool = var_117_bool; // 0x5e Mov
	func_375(var_155_float, var_156_float, var_157_bool); // 0x5f NEW_2
	goto Label_55; // 0x61 Jump
	
Label_75:
	var_158_float = 2.0; // 0x4b PushF
	var_159_float = var_119_float * var_158_float; // 0x4c Mult
	var_0_object = var_0_object + var_159_float; // 0x4d Add2
	var_160_bool = var_0_object >= var_1_int; // 0x4e GE
	if(var_160_bool == 0) goto Label_91; // 0x4f JumpB
	var_161_bool = var_0_object == 0; // 0x50 Not
	if(var_161_bool == 0) goto Label_89; // 0x51 JumpB
	var_162_float = 0; var_163_float = 0; var_164_bool = 0; // 0x52 PushV
	var_162_float = 0; // 0x53 MovI
	var_163_float = var_118_float; // 0x54 Mov
	var_164_bool = var_117_bool; // 0x55 Mov
	func_375(var_162_float, var_163_float, var_164_bool); // 0x56 NEW_2
	goto Label_98; // 0x58 Jump
	
Label_89:
	var_0_object = var_1_int; // 0x59 TMovT
	var_1_int = 0; // 0x5a TMovI
}


func_134(var_93_cvector)
{
	var_95_cvector = CVector(0,0,0); var_96_cvector = CVector(0,0,0); var_97_cvector = CVector(0,0,0); var_98_cvector = CVector(0,0,0); // 0x86 PushV
	GetPosition(var_97_cvector); // 0x87 Func
	GetPosition(var_98_cvector); // 0x89 ObjFunc
	var_93_cvector = var_98_cvector - var_97_cvector; // 0x8b Sub2
	return 4; // 0x8c Return
}


func_198(var_27_int, var_28_string)
{
	var_30_int = 0; var_31_bool = 0; var_32_int = 0; var_33_bool = 0; // 0xc6 PushV
	var_32_int = 0; // 0xc7 MovI
	
Label_200:
	var_34_int = 1; // 0xc8 PushI
	var_35_int = var_32_int + var_34_int; // 0xc9 Add
	var_36_int = var_28_string + var_35_int; // 0xca Add
	IsExistingSound(var_33_bool, var_36_int); // 0xcb Func
	var_37_bool = var_33_bool == 0; // 0xcd Not
	if(var_37_bool == 0) goto Label_208; // 0xce JumpB
	goto Label_211; // 0xcf Jump
	
Label_211:
	var_27_int = var_32_int; // 0xd3 Mov
	return 4; // 0xd4 Return
	
Label_208:
	var_38_int = 1; // 0xd0 PushI
	var_32_int = var_32_int + var_38_int; // 0xd1 Add2
	goto Label_200; // 0xd2 Jump
}


func_390(var_122_bool)
{
	var_123_bool = 0; var_124_bool = 0; // 0x186 PushV
	var_125_string = "blocking"; // 0x187 PushS
	HasProperty(var_125_string, var_124_bool); // 0x188 Func
	var_126_bool = var_124_bool == 0; // 0x18a Not
	if(var_126_bool == 0) goto Label_398; // 0x18b JumpB
	var_122_bool = 0; // 0x18c MovB
	return 2; // 0x18d Return
	
Label_398:
	var_127_string = "blocking"; // 0x18e PushS
	GetProperty(var_127_string, var_124_bool); // 0x18f Func
	var_122_bool = var_124_bool; // 0x191 Mov
	return 2; // 0x192 Return
}


func_327(var_14_object, var_15_int)
{
	var_17_cvector = CVector(0,0,0); var_18_cvector = CVector(0,0,0); // 0x147 PushV
	var_19_int = 0; // 0x148 PushV
	var_19_int = var_15_int; // 0x149 Mov
	func_250(var_19_int); // 0x14a NEW_2
	var_78_bool = 0; // 0x14c PushV
	var_78_bool = 0; // 0x14d MovB
	var_79_int = 5; // 0x14e PushI
	var_80_bool = var_15_int != var_79_int; // 0x14f Neq
	if(var_80_bool == 0) goto Label_341; // 0x150 JumpB
	var_81_int = 6; // 0x151 PushI
	var_82_bool = var_15_int != var_81_int; // 0x152 Neq
	if(var_82_bool == 0) goto Label_341; // 0x153 JumpB
	var_78_bool = 1; // 0x154 MovB
	
Label_341:
	if(var_78_bool == 0) goto Label_374; // 0x155 JumpB
	var_83_bool = 0; // 0x156 PushV
	var_83_bool = 0; // 0x157 MovB
	var_84_object = Obj(); // 0x158 PushV
	func_141(var_84_object); // 0x159 NEW_2
	var_87_bool = var_14_object != var_84_object; // 0x15b Neq
	if(var_87_bool == 0) goto Label_354; // 0x15c JumpB
	var_88_string = "GetPosition"; // 0x15d PushS
	var_89_int = 1; // 0x15e PushI
	var_90_bool = IsFuncExist(var_14_object, var_88_string, var_89_int); // 0x15f FuncExist
	if(var_90_bool == 0) goto Label_354; // 0x160 JumpB
	var_83_bool = 1; // 0x161 MovB
	
Label_354:
	if(var_83_bool == 0) goto Label_374; // 0x162 JumpB
	GetSpeed(var_18_cvector); // 0x163 Func
	var_91_cvector = CVector(0,0,0); var_92_cvector = CVector(0,0,0); // 0x165 PushV
	var_93_cvector = CVector(0,0,0); var_94_object = Obj(); // 0x166 PushV
	var_94_object = var_14_object; // 0x167 Mov
	func_134(var_94_object); // 0x168 NEW_2
	var_92_cvector = var_93_cvector; // 0x169 Mov
	func_147(var_91_cvector, var_92_cvector); // 0x16b NEW_2
	var_104_int = 400; // 0x16d PushI
	var_105_float = var_91_cvector * var_104_int; // 0x16e Mult
	var_18_cvector = var_18_cvector - var_105_float; // 0x16f Sub2
	var_106_int = var_18_cvector | var_18_cvector; // 0x170 Or
	var_107_int = 160000; // 0x171 PushI
	var_108_bool = var_106_int < var_107_int; // 0x172 LT
	if(var_108_bool == 0) goto Label_374; // 0x173 JumpB
	SetSpeed(var_18_cvector); // 0x174 Func
	
Label_374:
	return 2; // 0x176 Return
}


func_141(var_84_object)
{
	var_85_object = Obj(); var_86_object = Obj(); // 0x8d PushV
	self(var_86_object); // 0x8e Func
	var_84_object = var_86_object; // 0x90 Mov
	return 2; // 0x91 Return
}


func_239(var_49_string)
{
	var_50_bool = GlobalVars[0]; // 0xf0 PushGE
	if(var_50_bool == 0) goto Label_249; // 0xf1 JumpB
	func_179(); // 0xf3 NEW_2
	var_55_string = ""; // 0xf5 PushV
	var_55_string = var_49_string; // 0xf6 Mov
	func_213(var_55_string); // 0xf7 NEW_2
	
Label_249:
	return 0; // 0xf9 Return
}


func_179()
{
	var_51_bool = GlobalVars[0]; // 0xb3 PushGE
	if(var_51_bool == 0) goto Label_188; // 0xb4 JumpB
	var_52_bool = GlobalVars[0]; // 0xb5 PushGE
	var_52_bool = 0; // 0xb6 MovB
	GlobalVars[0] = var_52_bool; // 0xb7 PopGE
	var_53_int = 0; // 0xb8 PushI
	var_54_float = 3.0; // 0xb9 PushF
	SetTimer(var_53_int, var_54_float); // 0xba Func
	
Label_188:
	return 0; // 0xbc Return
}


func_147(var_91_cvector, var_92_cvector)
{
	var_99_float = 0; var_100_float = 0; // 0x93 PushV
	var_101_int = var_92_cvector | var_92_cvector; // 0x94 Or
	var_100_float = sqrt(var_101_int); // 0x95 Sqrt2
	var_102_float = 0.0; // 0x96 PushF
	var_103_bool = var_100_float < var_102_float; // 0x97 LT
	if(var_103_bool == 0) goto Label_155; // 0x98 JumpB
	var_91_cvector = CVector(0.0, 0.0, 0.0); // 0x99 MovV
	return 2; // 0x9a Return
	
Label_155:
	var_91_cvector = var_92_cvector / var_92_cvector; // 0x9b Div2
	return 2; // 0x9c Return
}


func_213(var_22_string)
{
	var_23_int = 0; var_24_int = 0; var_25_int = 0; var_26_int = 0; // 0xd5 PushV
	var_27_int = 0; var_28_string = ""; // 0xd6 PushV
	var_29_string = "_"; // 0xd7 PushS
	var_28_string = var_22_string + var_29_string; // 0xd8 Add2
	func_198(var_27_int, var_28_string); // 0xd9 NEW_2
	var_25_int = var_27_int; // 0xda Mov
	var_39_bool = var_25_int == 0; // 0xdc Not
	if(var_39_bool == 0) goto Label_229; // 0xdd JumpB
	var_40_string = "No sounds for ""; // 0xde PushS
	var_41_int = var_40_string + var_22_string; // 0xdf Add
	var_42_string = """; // 0xe0 PushS
	var_43_int = var_41_int + var_42_string; // 0xe1 Add
	Trace(var_43_int); // 0xe2 Func
	goto Label_238; // 0xe4 Jump
	
Label_238:
	return 4; // 0xee Return
	
Label_229:
	irand(var_26_int, var_25_int); // 0xe5 Func
	var_44_string = "_"; // 0xe7 PushS
	var_45_int = var_22_string + var_44_string; // 0xe8 Add
	var_46_int = 1; // 0xe9 PushI
	var_47_int = var_26_int + var_46_int; // 0xea Add
	var_48_int = var_45_int + var_47_int; // 0xeb Add
	PlaySound(var_48_int); // 0xec Func
}


func_157(var_111_float, var_112_float, var_113_float, var_114_float)
{
	var_115_bool = var_112_float < var_113_float; // 0x9e LT
	if(var_115_bool == 0) goto Label_162; // 0x9f JumpB
	var_111_float = var_113_float; // 0xa0 Mov
	return 0; // 0xa1 Return
	
Label_162:
	var_116_bool = var_112_float > var_114_float; // 0xa2 GT
	if(var_116_bool == 0) goto Label_166; // 0xa3 JumpB
	var_111_float = var_114_float; // 0xa4 Mov
	return 0; // 0xa5 Return
	
Label_166:
	var_111_float = var_112_float; // 0xa6 Mov
	return 0; // 0xa7 Return
}


func_375(var_145_float, var_146_float, var_147_bool)
{
	ModDarkenLevel(var_145_float); // 0x178 Func
	ModBlurLevel(var_145_float); // 0x17a Func
	var_148_bool = var_147_bool; // 0x17c Push
	if(var_148_bool == 0) goto Label_389; // 0x17d JumpB
	var_149_int = 1; // 0x17e PushI
	var_150_float = 0.1; // 0x17f PushF
	var_151_float = var_145_float * var_150_float; // 0x180 Mult
	var_152_int = var_149_int + var_151_float; // 0x181 Add
	var_153_float = var_146_float * var_152_int; // 0x182 Mult
	SetCameraFOV(var_153_float); // 0x183 Func
	
Label_389:
	return 0; // 0x185 Return
}


func_250(var_19_int)
{
	var_20_int = 0; // 0xfb PushI
	var_21_bool = var_19_int == var_20_int; // 0xfc Eq
	if(var_21_bool == 0) goto Label_263; // 0xfd JumpB
	var_22_string = ""; // 0xfe PushV
	var_22_string = "hit_physical1"; // 0xff MovS
	func_213(var_22_string); // 0x100 NEW_2
	var_49_string = ""; // 0x102 PushV
	var_49_string = "scream_physical1"; // 0x103 MovS
	func_239(var_49_string); // 0x104 NEW_2
	goto Label_326; // 0x106 Jump
	
Label_326:
	return 0; // 0x146 Return
	
Label_263:
	var_56_int = 1; // 0x107 PushI
	var_57_bool = var_19_int == var_56_int; // 0x108 Eq
	if(var_57_bool == 0) goto Label_275; // 0x109 JumpB
	var_58_string = ""; // 0x10a PushV
	var_58_string = "hit_physical2"; // 0x10b MovS
	func_213(var_58_string); // 0x10c NEW_2
	var_59_string = ""; // 0x10e PushV
	var_59_string = "scream_physical2"; // 0x10f MovS
	func_239(var_59_string); // 0x110 NEW_2
	goto Label_326; // 0x112 Jump
	
Label_275:
	var_60_int = 2; // 0x113 PushI
	var_61_bool = var_19_int == var_60_int; // 0x114 Eq
	if(var_61_bool == 0) goto Label_287; // 0x115 JumpB
	var_62_string = ""; // 0x116 PushV
	var_62_string = "hit_bullet"; // 0x117 MovS
	func_213(var_62_string); // 0x118 NEW_2
	var_63_string = ""; // 0x11a PushV
	var_63_string = "scream_bullet"; // 0x11b MovS
	func_239(var_63_string); // 0x11c NEW_2
	goto Label_326; // 0x11e Jump
	
Label_287:
	var_64_int = 3; // 0x11f PushI
	var_65_bool = var_19_int == var_64_int; // 0x120 Eq
	if(var_65_bool == 0) goto Label_299; // 0x121 JumpB
	var_66_string = ""; // 0x122 PushV
	var_66_string = "hit_oscoloc"; // 0x123 MovS
	func_213(var_66_string); // 0x124 NEW_2
	var_67_string = ""; // 0x126 PushV
	var_67_string = "scream_oscoloc"; // 0x127 MovS
	func_239(var_67_string); // 0x128 NEW_2
	goto Label_326; // 0x12a Jump
	
Label_299:
	var_68_int = 6; // 0x12b PushI
	var_69_bool = var_19_int == var_68_int; // 0x12c Eq
	if(var_69_bool == 0) goto Label_311; // 0x12d JumpB
	var_70_string = ""; // 0x12e PushV
	var_70_string = "hit_mental"; // 0x12f MovS
	func_213(var_70_string); // 0x130 NEW_2
	var_71_string = ""; // 0x132 PushV
	var_71_string = "scream_mental"; // 0x133 MovS
	func_239(var_71_string); // 0x134 NEW_2
	goto Label_326; // 0x136 Jump
	
Label_311:
	var_72_int = 7; // 0x137 PushI
	var_73_bool = var_19_int == var_72_int; // 0x138 Eq
	if(var_73_bool == 0) goto Label_323; // 0x139 JumpB
	var_74_string = ""; // 0x13a PushV
	var_74_string = "hit_rat"; // 0x13b MovS
	func_213(var_74_string); // 0x13c NEW_2
	var_75_string = ""; // 0x13e PushV
	var_75_string = "scream_rat"; // 0x13f MovS
	func_239(var_75_string); // 0x140 NEW_2
	goto Label_326; // 0x142 Jump
	
Label_323:
	var_76_int = 4; // 0x143 PushI
	var_77_bool = var_19_int == var_76_int; // 0x144 Eq
	if(var_77_bool == 0) goto Label_326; // 0x145 JumpB
}


func_189(var_109_float, var_110_float)
{
	var_111_float = 0; var_112_float = 0; var_113_float = 0; var_114_float = 0; // 0xbe PushV
	var_112_float = sqrt(var_110_float); // 0xbf Sqrt2
	var_113_float = 0; // 0xc0 MovI
	var_114_float = 1; // 0xc1 MovI
	func_157(var_111_float, var_112_float, var_113_float, var_114_float); // 0xc2 NEW_2
	var_109_float = var_111_float; // 0xc3 Mov
	return 0; // 0xc5 Return
}


