task_0_event_16(var_0_object, var_1_string, var_2_float, var_3_int)
{
	var_4_string = "disease"; // 0x5 PushS
	var_5_bool = var_3_int == var_4_string; // 0x6 Eq
	if(var_5_bool == 0) goto Label_18; // 0x7 JumpB
	var_6_bool = 0; // 0x8 PushV
	func_420(var_6_bool); // 0x9 NEW_2
	var_11_bool = var_6_bool == 0; // 0xb Not
	if(var_11_bool == 0) goto Label_18; // 0xc JumpB
	TaskCall(1); // 0xe TaskCall
	func_19(var_3_int); // 0xf NEW_2
	TaskReturn(); // 0x10 TaskReturn
	
Label_18:
	return 0; // 0x12 Return
}


task_2_event_16(var_0_float, var_1_int, var_2_object, var_3_string)
{
	var_4_float = 0; var_5_float = 0; // 0x15c PushV
	var_6_string = "disease"; // 0x15d PushS
	var_7_bool = var_3_string == var_6_string; // 0x15e Eq
	if(var_7_bool == 0) goto Label_385; // 0x15f JumpB
	var_8_bool = 0; // 0x160 PushV
	func_420(var_8_bool); // 0x161 NEW_2
	if(var_8_bool == 0) goto Label_359; // 0x163 JumpB
	var_1_int = 1; // 0x164 TMovI
	StopGroup0(); // 0x165 Func
	
Label_359:
	var_13_string = "disease"; // 0x167 PushS
	GetProperty(var_13_string, var_5_float); // 0x168 Func
	var_14_float = 0; var_15_float = 0; var_16_float = 0; var_17_float = 0; // 0x16a PushV
	var_15_float = var_5_float; // 0x16b Mov
	var_16_float = 0; // 0x16c MovI
	var_17_float = 1; // 0x16d MovI
	func_409(var_14_float, var_15_float, var_16_float, var_17_float); // 0x16e NEW_2
	var_5_float = var_14_float; // 0x16f Mov
	var_20_float = 0.001; // 0x171 PushF
	var_21_int = var_0_float + var_20_float; // 0x172 Add
	var_22_bool = var_5_float > var_21_int; // 0x173 GT
	if(var_22_bool == 0) goto Label_376; // 0x174 JumpB
	StopGroup0(); // 0x175 Func
	goto Label_385; // 0x177 Jump
	
Label_385:
	return 2; // 0x181 Return
	
Label_376:
	var_23_float = 0.001; // 0x178 PushF
	var_24_int = var_5_float + var_23_float; // 0x179 Add
	var_25_bool = var_24_int < var_0_float; // 0x17a LT
	if(var_25_bool == 0) goto Label_384; // 0x17b JumpB
	var_1_int = 2; // 0x17c TMovI
	StopGroup0(); // 0x17d Func
	goto Label_385; // 0x17f Jump
	
Label_384:
	var_0_float = var_5_float; // 0x180 TMov
}


main(var_0_float, var_1_int)
{
	
Label_0:
	Hold(); // 0x0 Func
	goto Label_0; // 0x2 Jump
}


func_386(var_18_bool)
{
	var_19_bool = 0; var_20_bool = 0; var_21_bool = 0; var_22_bool = 0; // 0x182 PushV
	var_23_string = "sleeping"; // 0x183 PushS
	HasProperty(var_23_string, var_21_bool); // 0x184 Func
	var_24_bool = var_21_bool == 0; // 0x186 Not
	if(var_24_bool == 0) goto Label_394; // 0x187 JumpB
	var_18_bool = 0; // 0x188 MovB
	return 4; // 0x189 Return
	
Label_394:
	var_25_string = "sleeping"; // 0x18a PushS
	GetProperty(var_25_string, var_22_bool); // 0x18b Func
	var_18_bool = var_22_bool; // 0x18d Mov
	return 4; // 0x18e Return
}


func_323(var_92_float, var_93_float)
{
	var_94_int = 1; // 0x144 PushI
	var_95_float = 0.75; // 0x145 PushF
	var_96_float = var_92_float * var_95_float; // 0x146 Mult
	var_97_int = var_94_int - var_96_float; // 0x147 Sub
	var_98_float = var_93_float * var_97_int; // 0x148 Mult
	SetCameraFOV(var_98_float); // 0x149 Func
	return 0; // 0x14b Return
}


func_420(var_8_bool)
{
	var_9_float = 0; var_10_float = 0; // 0x1a4 PushV
	var_11_string = "disease"; // 0x1a5 PushS
	GetProperty(var_11_string, var_10_float); // 0x1a6 Func
	var_12_float = 0.001; // 0x1a8 PushF
	var_8_bool = var_10_float <= var_12_float; // 0x1a9 LE2
	return 2; // 0x1aa Return
}


func_200(var_35_bool, var_36_float)
{
	var_37_bool = 0; var_38_bool = 0; var_39_float = 0; var_40_float = 0; var_41_float = 0; var_42_float = 0; var_43_float = 0; var_44_float = 0; var_45_float = 0; var_46_bool = 0; var_47_bool = 0; var_48_float = 0; var_49_float = 0; var_50_float = 0; var_51_float = 0; var_52_float = 0; var_53_float = 0; var_54_float = 0; // 0xc8 PushV
	var_55_bool = 0; // 0xc9 PushV
	func_386(var_55_bool); // 0xca NEW_2
	if(var_55_bool == 0) goto Label_207; // 0xcc JumpB
	var_35_bool = 0; // 0xcd MovB
	return 18; // 0xce Return
	
Label_207:
	var_56_string = "sick"; // 0xcf PushS
	PlaySound(var_56_string); // 0xd0 Func
	LockCameraRoll(var_46_bool); // 0xd2 Func
	LockCameraFOV(var_47_bool); // 0xd4 Func
	var_57_int = 2; // 0xd6 PushI
	irand(var_48_float, var_57_int); // 0xd7 Func
	var_58_float = 0.62832; // 0xd9 PushF
	var_59_float = 0.5; // 0xda PushF
	var_60_int = var_48_float - var_59_float; // 0xdb Sub
	var_48_float = var_58_float * var_60_int; // 0xdc Mult2
	var_61_float = 0.25; // 0xdd PushF
	var_62_bool = var_36_float < var_61_float; // 0xde LT
	if(var_62_bool == 0) goto Label_226; // 0xdf JumpB
	var_63_float = 0.25; // 0xe0 PushF
	goto Label_227; // 0xe1 Jump
	
Label_227:
	var_48_float = var_48_float * var_63_float; // 0xe3 Mult2
	GetCameraCurrentFOV(var_49_float); // 0xe4 Func
	var_64_float = 0.5; // 0xe6 PushF
	var_65_float = 0.5; // 0xe7 PushF
	var_66_float = var_65_float * var_36_float; // 0xe8 Mult
	var_50_float = var_64_float + var_66_float; // 0xe9 Add2
	var_67_float = 0.25; // 0xea PushF
	var_68_float = 0.75; // 0xeb PushF
	var_69_float = var_68_float * var_36_float; // 0xec Mult
	var_51_float = var_67_float + var_69_float; // 0xed Add2
	var_52_float = 0; // 0xee MovI
	
Label_239:
	sync(var_53_float); // 0xef Func
	var_70_float = var_53_float * var_50_float; // 0xf1 Mult
	var_52_float = var_52_float + var_70_float; // 0xf2 Add2
	var_71_bool = var_46_bool; // 0xf3 Push
	if(var_71_bool == 0) goto Label_250; // 0xf4 JumpB
	var_72_float = 0; var_73_float = 0; // 0xf5 PushV
	var_72_float = var_52_float; // 0xf6 Mov
	var_73_float = var_48_float; // 0xf7 Mov
	func_303(var_72_float, var_73_float); // 0xf8 NEW_2
	
Label_250:
	var_91_bool = var_47_bool; // 0xfa Push
	if(var_91_bool == 0) goto Label_257; // 0xfb JumpB
	var_92_float = 0; var_93_float = 0; // 0xfc PushV
	var_92_float = var_52_float; // 0xfd Mov
	var_93_float = var_49_float; // 0xfe Mov
	func_323(var_92_float, var_93_float); // 0xff NEW_2
	
Label_257:
	ModDarkenLevel(var_52_float); // 0x101 Func
	var_99_bool = var_52_float < var_51_float; // 0x103 LT
	if(var_99_bool == 0) goto Label_239; // 0x104 JumpB
	var_52_float = var_51_float; // 0x105 Mov
	
Label_262:
	sync(var_54_float); // 0x106 Func
	var_100_float = var_54_float * var_50_float; // 0x108 Mult
	var_101_int = 5; // 0x109 PushI
	var_102_float = var_100_float / var_101_int; // 0x10a Div
	var_52_float = var_52_float - var_102_float; // 0x10b Sub2
	var_103_bool = var_46_bool; // 0x10c Push
	if(var_103_bool == 0) goto Label_275; // 0x10d JumpB
	var_104_float = 0; var_105_float = 0; // 0x10e PushV
	var_104_float = var_52_float; // 0x10f Mov
	var_105_float = var_48_float; // 0x110 Mov
	func_303(var_104_float, var_105_float); // 0x111 NEW_2
	
Label_275:
	var_106_bool = var_47_bool; // 0x113 Push
	if(var_106_bool == 0) goto Label_282; // 0x114 JumpB
	var_107_float = 0; var_108_float = 0; // 0x115 PushV
	var_107_float = var_52_float; // 0x116 Mov
	var_108_float = var_49_float; // 0x117 Mov
	func_323(var_107_float, var_108_float); // 0x118 NEW_2
	
Label_282:
	ModDarkenLevel(var_52_float); // 0x11a Func
	var_109_int = 0; // 0x11c PushI
	var_110_bool = var_52_float > var_109_int; // 0x11d GT
	if(var_110_bool == 0) goto Label_262; // 0x11e JumpB
	UnlockCameraFOV(var_47_bool); // 0x11f Func
	UnlockCameraRoll(var_46_bool); // 0x121 Func
	var_111_int = 2; // 0x123 PushI
	var_112_float = var_36_float / var_111_int; // 0x124 Div
	ModBlurLevel(var_112_float); // 0x125 Func
	var_113_int = 10; // 0x127 PushI
	Sleep(var_113_int); // 0x128 Func
	var_114_int = 0; // 0x12a PushI
	ModBlurLevel(var_114_int); // 0x12b Func
	var_35_bool = 1; // 0x12d MovB
	return 18; // 0x12e Return
	
Label_226:
	var_115_float = var_36_float; // 0xe2 Push
}


func_332(var_0_object, var_1_string, var_131_int, var_132_float)
{
	var_135_bool = 0; var_136_bool = 0; // 0x14c PushV
	var_1_string = 0; // 0x14d TMovI
	var_137_string = "disease"; // 0x14e PushS
	GetProperty(var_137_string, var_0_object); // 0x14f Func
	var_138_float = 0; var_139_float = 0; var_140_float = 0; var_141_float = 0; // 0x151 PushV
	var_139_float = var_0_object; // 0x152 MovT
	var_140_float = 0; // 0x153 MovI
	var_141_float = 1; // 0x154 MovI
	func_409(var_138_float, var_139_float, var_140_float, var_141_float); // 0x155 NEW_2
	var_0_object = var_138_float; // 0x156 TMov
	Sleep(var_132_float, var_136_bool); // 0x158 Func
	var_131_int = var_1_string; // 0x15a MovT
	return 2; // 0x15b Return
}


func_303(var_72_float, var_73_float)
{
	var_74_float = 0; var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0); var_77_float = 0; var_78_cvector = CVector(0,0,0); var_79_cvector = CVector(0,0,0); // 0x12f PushV
	var_77_float = var_72_float * var_73_float; // 0x130 Mult2
	SetCameraRoll(var_77_float); // 0x131 Func
	GetForce(var_78_cvector); // 0x133 Func
	GetDirection(var_79_cvector); // 0x135 Func
	var_80_cvector = CVector(0,0,0); var_81_cvector = CVector(0,0,0); // 0x137 PushV
	var_82_cvector = CVector(0.0, 1.0, 0.0); // 0x138 PushVec
	var_81_cvector = var_79_cvector ^ var_82_cvector; // 0x139 Xor2
	func_399(var_80_cvector, var_81_cvector); // 0x13a NEW_2
	var_88_float = var_80_cvector * var_77_float; // 0x13c Mult
	var_89_int = 1500; // 0x13d PushI
	var_90_float = var_88_float * var_89_int; // 0x13e Mult
	var_78_cvector = var_78_cvector + var_90_float; // 0x13f Add2
	SetForce(var_78_cvector); // 0x140 Func
	return 6; // 0x142 Return
}


func_399(var_80_cvector, var_81_cvector)
{
	var_83_float = 0; var_84_float = 0; // 0x18f PushV
	var_85_int = var_81_cvector | var_81_cvector; // 0x190 Or
	var_84_float = sqrt(var_85_int); // 0x191 Sqrt2
	var_86_float = 0.0; // 0x192 PushF
	var_87_bool = var_84_float < var_86_float; // 0x193 LT
	if(var_87_bool == 0) goto Label_407; // 0x194 JumpB
	var_80_cvector = CVector(0.0, 0.0, 0.0); // 0x195 MovV
	return 2; // 0x196 Return
	
Label_407:
	var_80_cvector = var_81_cvector / var_81_cvector; // 0x197 Div2
	return 2; // 0x198 Return
}


func_19(var_133_float)
{
	var_12_float = 0; var_13_float = 0; var_14_int = 0; var_15_float = 0; var_16_float = 0; var_17_int = 0; // 0x13 PushV
	var_18_bool = 0; // 0x14 PushV
	func_386(var_18_bool); // 0x15 NEW_2
	if(var_18_bool == 0) goto Label_25; // 0x17 JumpB
	return 6; // 0x18 Return
	
Label_25:
	var_26_string = "Disease effect started"; // 0x19 PushS
	Trace(var_26_string); // 0x1a Func
	var_27_string = "disease"; // 0x1c PushS
	GetProperty(var_27_string, var_15_float); // 0x1d Func
	var_28_float = 0; var_29_float = 0; var_30_float = 0; var_31_float = 0; // 0x1f PushV
	var_32_int = 2; // 0x20 PushI
	var_29_float = var_15_float * var_32_int; // 0x21 Mult2
	var_30_float = 0; // 0x22 MovI
	var_31_float = 1; // 0x23 MovI
	func_409(var_28_float, var_29_float, var_30_float, var_31_float); // 0x24 NEW_2
	var_15_float = var_28_float; // 0x25 Mov
	var_35_bool = 0; var_36_float = 0; // 0x27 PushV
	var_36_float = var_15_float; // 0x28 Mov
	func_200(var_35_bool, var_36_float); // 0x29 NEW_2
	if(var_35_bool == 0) goto Label_114; // 0x2b JumpB
	
Label_44:
	var_116_bool = 0; // 0x2c PushV
	func_420(var_116_bool); // 0x2d NEW_2
	var_117_bool = var_116_bool == 0; // 0x2f Not
	if(var_117_bool == 0) goto Label_114; // 0x30 JumpB
	var_118_string = "disease"; // 0x31 PushS
	GetProperty(var_118_string, var_15_float); // 0x32 Func
	var_119_float = 0; var_120_float = 0; var_121_float = 0; var_122_float = 0; // 0x34 PushV
	var_120_float = var_15_float; // 0x35 Mov
	var_121_float = 0; // 0x36 MovI
	var_122_float = 1; // 0x37 MovI
	func_409(var_119_float, var_120_float, var_121_float, var_122_float); // 0x38 NEW_2
	var_15_float = var_119_float; // 0x39 Mov
	var_123_int = 600; // 0x3b PushI
	var_124_int = 500; // 0x3c PushI
	var_125_float = var_15_float * var_124_int; // 0x3d Mult
	var_126_int = var_123_int - var_125_float; // 0x3e Sub
	var_127_int = 1200; // 0x3f PushI
	var_128_int = 1000; // 0x40 PushI
	var_129_float = var_15_float * var_128_int; // 0x41 Mult
	var_130_int = var_127_int - var_129_float; // 0x42 Sub
	rand(var_16_float, var_126_int, var_130_int); // 0x43 Func
	var_131_int = 0; var_132_float = 0; // 0x45 PushV
	var_132_float = var_16_float; // 0x46 Mov
	TaskCall(2); // 0x47 TaskCall
	func_332(var_133_float, var_134_int, var_131_int, var_132_float); // 0x48 NEW_2
	TaskReturn(); // 0x49 TaskReturn
	var_17_int = var_133_float; // 0x4a Mov
	var_142_string = "disease"; // 0x4c PushS
	GetProperty(var_142_string, var_15_float); // 0x4d Func
	var_143_float = 0; var_144_float = 0; var_145_float = 0; var_146_float = 0; // 0x4f PushV
	var_144_float = var_15_float; // 0x50 Mov
	var_145_float = 0; // 0x51 MovI
	var_146_float = 1; // 0x52 MovI
	func_409(var_143_float, var_144_float, var_145_float, var_146_float); // 0x53 NEW_2
	var_15_float = var_143_float; // 0x54 Mov
	var_147_int = 1; // 0x56 PushI
	var_148_bool = var_147_int == var_17_int; // 0x57 Eq
	if(var_148_bool == 0) goto Label_95; // 0x58 JumpB
	var_149_bool = 0; var_150_float = 0; // 0x59 PushV
	var_150_float = 0.1; // 0x5a MovF
	func_118(var_149_bool, var_150_float); // 0x5b NEW_2
	goto Label_114; // 0x5d Jump
	
Label_114:
	var_200_string = "Disease effect stopped"; // 0x72 PushS
	Trace(var_200_string); // 0x73 Func
	return 6; // 0x75 Return
	
Label_95:
	var_201_int = 2; // 0x5f PushI
	var_202_bool = var_201_int == var_17_int; // 0x60 Eq
	if(var_202_bool == 0) goto Label_106; // 0x61 JumpB
	var_203_bool = 0; var_204_float = 0; // 0x62 PushV
	var_204_float = var_15_float; // 0x63 Mov
	func_118(var_203_bool, var_204_float); // 0x64 NEW_2
	var_205_bool = var_203_bool == 0; // 0x66 Not
	if(var_205_bool == 0) goto Label_105; // 0x67 JumpB
	goto Label_114; // 0x68 Jump
	
Label_105:
	goto Label_113; // 0x69 Jump
	
Label_113:
	goto Label_44; // 0x71 Jump
	
Label_106:
	var_206_bool = 0; var_207_float = 0; // 0x6a PushV
	var_207_float = var_15_float; // 0x6b Mov
	func_200(var_206_bool, var_207_float); // 0x6c NEW_2
	var_208_bool = var_206_bool == 0; // 0x6e Not
	if(var_208_bool == 0) goto Label_113; // 0x6f JumpB
	goto Label_114; // 0x70 Jump
}


func_118(var_149_bool, var_150_float)
{
	var_151_bool = 0; var_152_bool = 0; var_153_float = 0; var_154_float = 0; var_155_float = 0; var_156_float = 0; var_157_float = 0; var_158_float = 0; var_159_float = 0; var_160_bool = 0; var_161_bool = 0; var_162_float = 0; var_163_float = 0; var_164_float = 0; var_165_float = 0; var_166_float = 0; var_167_float = 0; var_168_float = 0; // 0x76 PushV
	var_169_bool = 0; // 0x77 PushV
	func_386(var_169_bool); // 0x78 NEW_2
	if(var_169_bool == 0) goto Label_125; // 0x7a JumpB
	var_149_bool = 0; // 0x7b MovB
	return 18; // 0x7c Return
	
Label_125:
	var_170_string = "sick"; // 0x7d PushS
	PlaySound(var_170_string); // 0x7e Func
	LockCameraRoll(var_160_bool); // 0x80 Func
	LockCameraFOV(var_161_bool); // 0x82 Func
	var_171_int = 2; // 0x84 PushI
	irand(var_162_float, var_171_int); // 0x85 Func
	var_172_float = 0.62832; // 0x87 PushF
	var_173_float = 0.5; // 0x88 PushF
	var_174_int = var_162_float - var_173_float; // 0x89 Sub
	var_162_float = var_172_float * var_174_int; // 0x8a Mult2
	GetCameraCurrentFOV(var_163_float); // 0x8b Func
	var_175_float = 0.5; // 0x8d PushF
	var_176_float = 0.5; // 0x8e PushF
	var_177_float = var_176_float * var_150_float; // 0x8f Mult
	var_164_float = var_175_float + var_177_float; // 0x90 Add2
	var_178_float = 0.25; // 0x91 PushF
	var_179_float = 0.75; // 0x92 PushF
	var_180_float = var_179_float * var_150_float; // 0x93 Mult
	var_165_float = var_178_float + var_180_float; // 0x94 Add2
	var_166_float = 0; // 0x95 MovI
	
Label_150:
	sync(var_167_float); // 0x96 Func
	var_181_float = var_167_float * var_164_float; // 0x98 Mult
	var_166_float = var_166_float + var_181_float; // 0x99 Add2
	var_182_bool = var_160_bool; // 0x9a Push
	if(var_182_bool == 0) goto Label_161; // 0x9b JumpB
	var_183_float = 0; var_184_float = 0; // 0x9c PushV
	var_183_float = var_166_float; // 0x9d Mov
	var_184_float = var_162_float; // 0x9e Mov
	func_303(var_183_float, var_184_float); // 0x9f NEW_2
	
Label_161:
	var_185_bool = var_161_bool; // 0xa1 Push
	if(var_185_bool == 0) goto Label_168; // 0xa2 JumpB
	var_186_float = 0; var_187_float = 0; // 0xa3 PushV
	var_186_float = var_166_float; // 0xa4 Mov
	var_187_float = var_163_float; // 0xa5 Mov
	func_323(var_186_float, var_187_float); // 0xa6 NEW_2
	
Label_168:
	var_188_bool = var_166_float < var_165_float; // 0xa8 LT
	if(var_188_bool == 0) goto Label_150; // 0xa9 JumpB
	var_166_float = var_165_float; // 0xaa Mov
	
Label_171:
	sync(var_168_float); // 0xab Func
	var_189_float = var_168_float * var_164_float; // 0xad Mult
	var_190_int = 5; // 0xae PushI
	var_191_float = var_189_float / var_190_int; // 0xaf Div
	var_166_float = var_166_float - var_191_float; // 0xb0 Sub2
	var_192_bool = var_160_bool; // 0xb1 Push
	if(var_192_bool == 0) goto Label_184; // 0xb2 JumpB
	var_193_float = 0; var_194_float = 0; // 0xb3 PushV
	var_193_float = var_166_float; // 0xb4 Mov
	var_194_float = var_162_float; // 0xb5 Mov
	func_303(var_193_float, var_194_float); // 0xb6 NEW_2
	
Label_184:
	var_195_bool = var_161_bool; // 0xb8 Push
	if(var_195_bool == 0) goto Label_191; // 0xb9 JumpB
	var_196_float = 0; var_197_float = 0; // 0xba PushV
	var_196_float = var_166_float; // 0xbb Mov
	var_197_float = var_163_float; // 0xbc Mov
	func_323(var_196_float, var_197_float); // 0xbd NEW_2
	
Label_191:
	var_198_int = 0; // 0xbf PushI
	var_199_bool = var_166_float > var_198_int; // 0xc0 GT
	if(var_199_bool == 0) goto Label_171; // 0xc1 JumpB
	UnlockCameraFOV(var_161_bool); // 0xc2 Func
	UnlockCameraRoll(var_160_bool); // 0xc4 Func
	var_149_bool = 1; // 0xc6 MovB
	return 18; // 0xc7 Return
}


func_409(var_14_float, var_15_float, var_16_float, var_17_float)
{
	var_18_bool = var_15_float < var_16_float; // 0x19a LT
	if(var_18_bool == 0) goto Label_414; // 0x19b JumpB
	var_14_float = var_16_float; // 0x19c Mov
	return 0; // 0x19d Return
	
Label_414:
	var_19_bool = var_15_float > var_17_float; // 0x19e GT
	if(var_19_bool == 0) goto Label_418; // 0x19f JumpB
	var_14_float = var_17_float; // 0x1a0 Mov
	return 0; // 0x1a1 Return
	
Label_418:
	var_14_float = var_15_float; // 0x1a2 Mov
	return 0; // 0x1a3 Return
}


