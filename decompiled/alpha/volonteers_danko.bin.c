task_0_event_26(var_0_object, var_1_object, var_2_object, var_3_object, var_4_int, var_5_string, var_6_string)
{
	var_7_int = 0; var_8_int = 0; // 0x1a5 PushV
	Trace(var_5_string); // 0x1a6 Func
	var_9_string = "rescue"; // 0x1a8 PushS
	var_10_bool = var_5_string == var_9_string; // 0x1a9 Eq
	if(var_10_bool == 0) goto Label_440; // 0x1aa JumpB
	var_11_int = 0; // 0x1ab PushV
	var_12_int = 0; var_13_int = 0; // 0x1ac PushV
	var_14_int = 0; var_15_string = ""; // 0x1ad PushV
	var_15_string = var_6_string; // 0x1ae Mov
	func_948(var_14_int, var_15_string); // 0x1af Call
	var_13_int = var_14_int; // 0x1b0 Mov
	func_742(var_12_int, var_13_int); // 0x1b2 Call
	var_11_int = var_12_int; // 0x1b3 Mov
	func_856(var_11_int); // 0x1b5 Call
	goto Label_475; // 0x1b7 Jump
	
Label_475:
	return 2; // 0x1db Return
	
Label_440:
	var_201_string = "rescue_locked"; // 0x1b8 PushS
	var_202_bool = var_5_string == var_201_string; // 0x1b9 Eq
	if(var_202_bool == 0) goto Label_462; // 0x1ba JumpB
	var_8_int = 0; // 0x1bb MovI
	
Label_444:
	var_203_int = 0; // 0x1bc PushV
	func_737(var_203_int); // 0x1bd Call
	var_204_bool = var_8_int < var_203_int; // 0x1bf LT
	if(var_204_bool == 0) goto Label_461; // 0x1c0 JumpB
	var_205_bool = 0; var_206_int = 0; // 0x1c1 PushV
	var_206_int = var_8_int; // 0x1c2 Mov
	func_771(var_205_bool, var_206_int); // 0x1c3 Call
	if(var_205_bool == 0) goto Label_458; // 0x1c5 JumpB
	var_214_int = 0; // 0x1c6 PushV
	var_214_int = var_8_int; // 0x1c7 Mov
	func_856(var_214_int); // 0x1c8 Call
	
Label_458:
	var_215_int = 1; // 0x1ca PushI
	var_8_int = var_8_int + var_215_int; // 0x1cb Add2
	goto Label_444; // 0x1cc Jump
	
Label_461:
	goto Label_475; // 0x1cd Jump
	
Label_462:
	var_216_string = "update"; // 0x1ce PushS
	var_217_bool = var_5_string == var_216_string; // 0x1cf Eq
	if(var_217_bool == 0) goto Label_469; // 0x1d0 JumpB
	func_528(var_8_int); // 0x1d2 Call
	goto Label_475; // 0x1d4 Jump
	
Label_469:
	var_530_string = "cleanup"; // 0x1d5 PushS
	var_531_bool = var_5_string == var_530_string; // 0x1d6 Eq
	if(var_531_bool == 0) goto Label_475; // 0x1d7 JumpB
	func_657(); // 0x1d9 Call
}


main(var_0_object, var_1_object, var_2_object, var_3_object, var_4_int)
{
	func_679(var_0_object, var_1_object, var_2_object, var_3_object, var_4_int); // 0x19f Call
	
Label_417:
	Hold(); // 0x1a1 Func
	goto Label_417; // 0x1a3 Jump
}


func_896(var_488_int)
{
	var_489_int = 0; var_490_int = 0; // 0x380 PushV
	var_491_string = ""; var_492_int = 0; // 0x381 PushV
	var_492_int = var_488_int; // 0x382 Mov
	func_765(var_491_string, var_492_int); // 0x383 Call
	GetVariable(var_491_string, var_490_int); // 0x385 Func
	var_493_string = ""; var_494_int = 0; // 0x387 PushV
	var_494_int = var_488_int; // 0x388 Mov
	func_765(var_493_string, var_494_int); // 0x389 Call
	var_495_int = 8; // 0x38b PushI
	var_496_int = var_490_int & var_495_int; // 0x38c And
	var_497_int = 3; // 0x38d PushI
	var_498_int = var_496_int | var_497_int; // 0x38e Or
	SetVariable(var_493_string, var_498_int); // 0x38f Func
	return 2; // 0x391 Return
}


func_0()
{
	var_74_int = 0; var_75_object = Obj(); var_76_object = Obj(); var_77_int = 0; var_78_object = Obj(); var_79_object = Obj(); // 0x0 PushV
	var_77_int = 0; // 0x1 MovI
	
Label_2:
	var_80_int = 12; // 0x2 PushI
	var_81_bool = var_77_int < var_80_int; // 0x3 LT
	if(var_81_bool == 0) goto Label_13; // 0x4 JumpB
	CreateIntVector(var_78_object); // 0x5 Func
	add(var_78_object); // 0x7 ObjFunc
	var_78_object = 0; // 0x9 SetNull
	var_82_int = 1; // 0xa PushI
	var_77_int = var_77_int + var_82_int; // 0xb Add2
	goto Label_2; // 0xc Jump
	
Label_13:
	var_83_int = 0; // 0xd PushI
	get(var_79_object, var_83_int); // 0xe ObjFunc
	var_84_int = 1; // 0x10 PushI
	get(var_79_object, var_84_int); // 0x11 ObjFunc
	var_85_int = 0; var_86_int = 0; // 0x13 PushV
	var_86_int = 11; // 0x14 MovI
	func_742(var_85_int, var_86_int); // 0x15 Call
	add(var_85_int); // 0x17 ObjFunc
	var_97_int = 0; var_98_int = 0; // 0x19 PushV
	var_98_int = 18; // 0x1a MovI
	func_742(var_97_int, var_98_int); // 0x1b Call
	add(var_97_int); // 0x1d ObjFunc
	var_99_int = 0; var_100_int = 0; // 0x1f PushV
	var_100_int = 21; // 0x20 MovI
	func_742(var_99_int, var_100_int); // 0x21 Call
	add(var_99_int); // 0x23 ObjFunc
	var_101_int = 2; // 0x25 PushI
	get(var_79_object, var_101_int); // 0x26 ObjFunc
	var_102_int = 0; var_103_int = 0; // 0x28 PushV
	var_103_int = 2; // 0x29 MovI
	func_742(var_102_int, var_103_int); // 0x2a Call
	add(var_102_int); // 0x2c ObjFunc
	var_104_int = 0; var_105_int = 0; // 0x2e PushV
	var_105_int = 9; // 0x2f MovI
	func_742(var_104_int, var_105_int); // 0x30 Call
	add(var_104_int); // 0x32 ObjFunc
	var_106_int = 0; var_107_int = 0; // 0x34 PushV
	var_107_int = 11; // 0x35 MovI
	func_742(var_106_int, var_107_int); // 0x36 Call
	add(var_106_int); // 0x38 ObjFunc
	var_108_int = 0; var_109_int = 0; // 0x3a PushV
	var_109_int = 13; // 0x3b MovI
	func_742(var_108_int, var_109_int); // 0x3c Call
	add(var_108_int); // 0x3e ObjFunc
	var_110_int = 0; var_111_int = 0; // 0x40 PushV
	var_111_int = 24; // 0x41 MovI
	func_742(var_110_int, var_111_int); // 0x42 Call
	add(var_110_int); // 0x44 ObjFunc
	var_112_int = 3; // 0x46 PushI
	get(var_79_object, var_112_int); // 0x47 ObjFunc
	var_113_int = 0; var_114_int = 0; // 0x49 PushV
	var_114_int = 10; // 0x4a MovI
	func_742(var_113_int, var_114_int); // 0x4b Call
	add(var_113_int); // 0x4d ObjFunc
	var_115_int = 0; var_116_int = 0; // 0x4f PushV
	var_116_int = 11; // 0x50 MovI
	func_742(var_115_int, var_116_int); // 0x51 Call
	add(var_115_int); // 0x53 ObjFunc
	var_117_int = 0; var_118_int = 0; // 0x55 PushV
	var_118_int = 18; // 0x56 MovI
	func_742(var_117_int, var_118_int); // 0x57 Call
	add(var_117_int); // 0x59 ObjFunc
	var_119_int = 0; var_120_int = 0; // 0x5b PushV
	var_120_int = 20; // 0x5c MovI
	func_742(var_119_int, var_120_int); // 0x5d Call
	add(var_119_int); // 0x5f ObjFunc
	var_121_int = 0; var_122_int = 0; // 0x61 PushV
	var_122_int = 24; // 0x62 MovI
	func_742(var_121_int, var_122_int); // 0x63 Call
	add(var_121_int); // 0x65 ObjFunc
	var_123_int = 0; var_124_int = 0; // 0x67 PushV
	var_124_int = 26; // 0x68 MovI
	func_742(var_123_int, var_124_int); // 0x69 Call
	add(var_123_int); // 0x6b ObjFunc
	var_125_int = 4; // 0x6d PushI
	get(var_79_object, var_125_int); // 0x6e ObjFunc
	var_126_int = 0; var_127_int = 0; // 0x70 PushV
	var_127_int = 9; // 0x71 MovI
	func_742(var_126_int, var_127_int); // 0x72 Call
	add(var_126_int); // 0x74 ObjFunc
	var_128_int = 0; var_129_int = 0; // 0x76 PushV
	var_129_int = 10; // 0x77 MovI
	func_742(var_128_int, var_129_int); // 0x78 Call
	add(var_128_int); // 0x7a ObjFunc
	var_130_int = 0; var_131_int = 0; // 0x7c PushV
	var_131_int = 18; // 0x7d MovI
	func_742(var_130_int, var_131_int); // 0x7e Call
	add(var_130_int); // 0x80 ObjFunc
	var_132_int = 0; var_133_int = 0; // 0x82 PushV
	var_133_int = 20; // 0x83 MovI
	func_742(var_132_int, var_133_int); // 0x84 Call
	add(var_132_int); // 0x86 ObjFunc
	var_134_int = 0; var_135_int = 0; // 0x88 PushV
	var_135_int = 21; // 0x89 MovI
	func_742(var_134_int, var_135_int); // 0x8a Call
	add(var_134_int); // 0x8c ObjFunc
	var_136_int = 0; var_137_int = 0; // 0x8e PushV
	var_137_int = 24; // 0x8f MovI
	func_742(var_136_int, var_137_int); // 0x90 Call
	add(var_136_int); // 0x92 ObjFunc
	var_138_int = 5; // 0x94 PushI
	get(var_79_object, var_138_int); // 0x95 ObjFunc
	var_139_int = 0; var_140_int = 0; // 0x97 PushV
	var_140_int = 20; // 0x98 MovI
	func_742(var_139_int, var_140_int); // 0x99 Call
	add(var_139_int); // 0x9b ObjFunc
	var_141_int = 6; // 0x9d PushI
	get(var_79_object, var_141_int); // 0x9e ObjFunc
	var_142_int = 0; var_143_int = 0; // 0xa0 PushV
	var_143_int = 3; // 0xa1 MovI
	func_742(var_142_int, var_143_int); // 0xa2 Call
	add(var_142_int); // 0xa4 ObjFunc
	var_144_int = 0; var_145_int = 0; // 0xa6 PushV
	var_145_int = 9; // 0xa7 MovI
	func_742(var_144_int, var_145_int); // 0xa8 Call
	add(var_144_int); // 0xaa ObjFunc
	var_146_int = 0; var_147_int = 0; // 0xac PushV
	var_147_int = 10; // 0xad MovI
	func_742(var_146_int, var_147_int); // 0xae Call
	add(var_146_int); // 0xb0 ObjFunc
	var_148_int = 0; var_149_int = 0; // 0xb2 PushV
	var_149_int = 11; // 0xb3 MovI
	func_742(var_148_int, var_149_int); // 0xb4 Call
	add(var_148_int); // 0xb6 ObjFunc
	var_150_int = 0; var_151_int = 0; // 0xb8 PushV
	var_151_int = 13; // 0xb9 MovI
	func_742(var_150_int, var_151_int); // 0xba Call
	add(var_150_int); // 0xbc ObjFunc
	var_152_int = 0; var_153_int = 0; // 0xbe PushV
	var_153_int = 18; // 0xbf MovI
	func_742(var_152_int, var_153_int); // 0xc0 Call
	add(var_152_int); // 0xc2 ObjFunc
	var_154_int = 0; var_155_int = 0; // 0xc4 PushV
	var_155_int = 19; // 0xc5 MovI
	func_742(var_154_int, var_155_int); // 0xc6 Call
	add(var_154_int); // 0xc8 ObjFunc
	var_156_int = 0; var_157_int = 0; // 0xca PushV
	var_157_int = 20; // 0xcb MovI
	func_742(var_156_int, var_157_int); // 0xcc Call
	add(var_156_int); // 0xce ObjFunc
	var_158_int = 0; var_159_int = 0; // 0xd0 PushV
	var_159_int = 21; // 0xd1 MovI
	func_742(var_158_int, var_159_int); // 0xd2 Call
	add(var_158_int); // 0xd4 ObjFunc
	var_160_int = 0; var_161_int = 0; // 0xd6 PushV
	var_161_int = 24; // 0xd7 MovI
	func_742(var_160_int, var_161_int); // 0xd8 Call
	add(var_160_int); // 0xda ObjFunc
	var_162_int = 0; var_163_int = 0; // 0xdc PushV
	var_163_int = 26; // 0xdd MovI
	func_742(var_162_int, var_163_int); // 0xde Call
	add(var_162_int); // 0xe0 ObjFunc
	var_164_int = 7; // 0xe2 PushI
	get(var_79_object, var_164_int); // 0xe3 ObjFunc
	var_165_int = 0; var_166_int = 0; // 0xe5 PushV
	var_166_int = 3; // 0xe6 MovI
	func_742(var_165_int, var_166_int); // 0xe7 Call
	add(var_165_int); // 0xe9 ObjFunc
	var_167_int = 0; var_168_int = 0; // 0xeb PushV
	var_168_int = 9; // 0xec MovI
	func_742(var_167_int, var_168_int); // 0xed Call
	add(var_167_int); // 0xef ObjFunc
	var_169_int = 0; var_170_int = 0; // 0xf1 PushV
	var_170_int = 11; // 0xf2 MovI
	func_742(var_169_int, var_170_int); // 0xf3 Call
	add(var_169_int); // 0xf5 ObjFunc
	var_171_int = 0; var_172_int = 0; // 0xf7 PushV
	var_172_int = 13; // 0xf8 MovI
	func_742(var_171_int, var_172_int); // 0xf9 Call
	add(var_171_int); // 0xfb ObjFunc
	var_173_int = 0; var_174_int = 0; // 0xfd PushV
	var_174_int = 18; // 0xfe MovI
	func_742(var_173_int, var_174_int); // 0xff Call
	add(var_173_int); // 0x101 ObjFunc
	var_175_int = 0; var_176_int = 0; // 0x103 PushV
	var_176_int = 19; // 0x104 MovI
	func_742(var_175_int, var_176_int); // 0x105 Call
	add(var_175_int); // 0x107 ObjFunc
	var_177_int = 0; var_178_int = 0; // 0x109 PushV
	var_178_int = 20; // 0x10a MovI
	func_742(var_177_int, var_178_int); // 0x10b Call
	add(var_177_int); // 0x10d ObjFunc
	var_179_int = 0; var_180_int = 0; // 0x10f PushV
	var_180_int = 21; // 0x110 MovI
	func_742(var_179_int, var_180_int); // 0x111 Call
	add(var_179_int); // 0x113 ObjFunc
	var_181_int = 0; var_182_int = 0; // 0x115 PushV
	var_182_int = 24; // 0x116 MovI
	func_742(var_181_int, var_182_int); // 0x117 Call
	add(var_181_int); // 0x119 ObjFunc
	var_183_int = 0; var_184_int = 0; // 0x11b PushV
	var_184_int = 26; // 0x11c MovI
	func_742(var_183_int, var_184_int); // 0x11d Call
	add(var_183_int); // 0x11f ObjFunc
	var_185_int = 8; // 0x121 PushI
	get(var_79_object, var_185_int); // 0x122 ObjFunc
	var_186_int = 0; var_187_int = 0; // 0x124 PushV
	var_187_int = 3; // 0x125 MovI
	func_742(var_186_int, var_187_int); // 0x126 Call
	add(var_186_int); // 0x128 ObjFunc
	var_188_int = 0; var_189_int = 0; // 0x12a PushV
	var_189_int = 9; // 0x12b MovI
	func_742(var_188_int, var_189_int); // 0x12c Call
	add(var_188_int); // 0x12e ObjFunc
	var_190_int = 0; var_191_int = 0; // 0x130 PushV
	var_191_int = 10; // 0x131 MovI
	func_742(var_190_int, var_191_int); // 0x132 Call
	add(var_190_int); // 0x134 ObjFunc
	var_192_int = 0; var_193_int = 0; // 0x136 PushV
	var_193_int = 11; // 0x137 MovI
	func_742(var_192_int, var_193_int); // 0x138 Call
	add(var_192_int); // 0x13a ObjFunc
	var_194_int = 0; var_195_int = 0; // 0x13c PushV
	var_195_int = 13; // 0x13d MovI
	func_742(var_194_int, var_195_int); // 0x13e Call
	add(var_194_int); // 0x140 ObjFunc
	var_196_int = 0; var_197_int = 0; // 0x142 PushV
	var_197_int = 18; // 0x143 MovI
	func_742(var_196_int, var_197_int); // 0x144 Call
	add(var_196_int); // 0x146 ObjFunc
	var_198_int = 0; var_199_int = 0; // 0x148 PushV
	var_199_int = 19; // 0x149 MovI
	func_742(var_198_int, var_199_int); // 0x14a Call
	add(var_198_int); // 0x14c ObjFunc
	var_200_int = 0; var_201_int = 0; // 0x14e PushV
	var_201_int = 20; // 0x14f MovI
	func_742(var_200_int, var_201_int); // 0x150 Call
	add(var_200_int); // 0x152 ObjFunc
	var_202_int = 0; var_203_int = 0; // 0x154 PushV
	var_203_int = 21; // 0x155 MovI
	func_742(var_202_int, var_203_int); // 0x156 Call
	add(var_202_int); // 0x158 ObjFunc
	var_204_int = 0; var_205_int = 0; // 0x15a PushV
	var_205_int = 24; // 0x15b MovI
	func_742(var_204_int, var_205_int); // 0x15c Call
	add(var_204_int); // 0x15e ObjFunc
	var_206_int = 9; // 0x160 PushI
	get(var_79_object, var_206_int); // 0x161 ObjFunc
	var_207_int = 0; var_208_int = 0; // 0x163 PushV
	var_208_int = 3; // 0x164 MovI
	func_742(var_207_int, var_208_int); // 0x165 Call
	add(var_207_int); // 0x167 ObjFunc
	var_209_int = 0; var_210_int = 0; // 0x169 PushV
	var_210_int = 9; // 0x16a MovI
	func_742(var_209_int, var_210_int); // 0x16b Call
	add(var_209_int); // 0x16d ObjFunc
	var_211_int = 0; var_212_int = 0; // 0x16f PushV
	var_212_int = 10; // 0x170 MovI
	func_742(var_211_int, var_212_int); // 0x171 Call
	add(var_211_int); // 0x173 ObjFunc
	var_213_int = 0; var_214_int = 0; // 0x175 PushV
	var_214_int = 11; // 0x176 MovI
	func_742(var_213_int, var_214_int); // 0x177 Call
	add(var_213_int); // 0x179 ObjFunc
	var_215_int = 0; var_216_int = 0; // 0x17b PushV
	var_216_int = 13; // 0x17c MovI
	func_742(var_215_int, var_216_int); // 0x17d Call
	add(var_215_int); // 0x17f ObjFunc
	var_217_int = 0; var_218_int = 0; // 0x181 PushV
	var_218_int = 18; // 0x182 MovI
	func_742(var_217_int, var_218_int); // 0x183 Call
	add(var_217_int); // 0x185 ObjFunc
	var_219_int = 0; var_220_int = 0; // 0x187 PushV
	var_220_int = 19; // 0x188 MovI
	func_742(var_219_int, var_220_int); // 0x189 Call
	add(var_219_int); // 0x18b ObjFunc
	var_221_int = 0; var_222_int = 0; // 0x18d PushV
	var_222_int = 21; // 0x18e MovI
	func_742(var_221_int, var_222_int); // 0x18f Call
	add(var_221_int); // 0x191 ObjFunc
	var_223_int = 0; var_224_int = 0; // 0x193 PushV
	var_224_int = 24; // 0x194 MovI
	func_742(var_223_int, var_224_int); // 0x195 Call
	add(var_223_int); // 0x197 ObjFunc
	return 6; // 0x199 Return
}


func_1666(var_19_object)
{
	var_20_object = Obj(); var_21_object = Obj(); // 0x682 PushV
	var_22_int = 1; // 0x683 PushI
	add(var_22_int); // 0x684 ObjFunc
	var_23_object = var_19_object; // 0x686 Push
	if(var_23_object == 0) goto Label_1679; // 0x687 JumpB
	CreateStringVector(var_21_object); // 0x688 Func
	var_24_string = "cot_alexandr@door1"; // 0x68a PushS
	add(var_24_string); // 0x68b ObjFunc
	add(var_21_object); // 0x68d ObjFunc
	
Label_1679:
	var_25_int = 2; // 0x68f PushI
	add(var_25_int); // 0x690 ObjFunc
	var_26_object = var_19_object; // 0x692 Push
	if(var_26_object == 0) goto Label_1691; // 0x693 JumpB
	CreateStringVector(var_21_object); // 0x694 Func
	var_27_string = "shouse1_kabak@door1"; // 0x696 PushS
	add(var_27_string); // 0x697 ObjFunc
	add(var_21_object); // 0x699 ObjFunc
	
Label_1691:
	var_28_int = 3; // 0x69b PushI
	add(var_28_int); // 0x69c ObjFunc
	var_29_object = var_19_object; // 0x69e Push
	if(var_29_object == 0) goto Label_1703; // 0x69f JumpB
	CreateStringVector(var_21_object); // 0x6a0 Func
	var_30_string = "cot_anna@door1"; // 0x6a2 PushS
	add(var_30_string); // 0x6a3 ObjFunc
	add(var_21_object); // 0x6a5 ObjFunc
	
Label_1703:
	var_31_int = 4; // 0x6a7 PushI
	add(var_31_int); // 0x6a8 ObjFunc
	var_32_object = var_19_object; // 0x6aa Push
	if(var_32_object == 0) goto Label_1715; // 0x6ab JumpB
	CreateStringVector(var_21_object); // 0x6ac Func
	var_33_string = "cot_bigvad@door1"; // 0x6ae PushS
	add(var_33_string); // 0x6af ObjFunc
	add(var_21_object); // 0x6b1 ObjFunc
	
Label_1715:
	var_34_int = 6; // 0x6b3 PushI
	add(var_34_int); // 0x6b4 ObjFunc
	var_35_object = var_19_object; // 0x6b6 Push
	if(var_35_object == 0) goto Label_1730; // 0x6b7 JumpB
	CreateStringVector(var_21_object); // 0x6b8 Func
	var_36_string = "cot_georg@door1"; // 0x6ba PushS
	add(var_36_string); // 0x6bb ObjFunc
	var_37_string = "cot_georg@door2"; // 0x6bd PushS
	add(var_37_string); // 0x6be ObjFunc
	add(var_21_object); // 0x6c0 ObjFunc
	
Label_1730:
	var_38_int = 9; // 0x6c2 PushI
	add(var_38_int); // 0x6c3 ObjFunc
	var_39_object = var_19_object; // 0x6c5 Push
	if(var_39_object == 0) goto Label_1742; // 0x6c6 JumpB
	CreateStringVector(var_21_object); // 0x6c7 Func
	var_40_string = "cot_julia@door1"; // 0x6c9 PushS
	add(var_40_string); // 0x6ca ObjFunc
	add(var_21_object); // 0x6cc ObjFunc
	
Label_1742:
	var_41_int = 10; // 0x6ce PushI
	add(var_41_int); // 0x6cf ObjFunc
	var_42_object = var_19_object; // 0x6d1 Push
	if(var_42_object == 0) goto Label_1754; // 0x6d2 JumpB
	CreateStringVector(var_21_object); // 0x6d3 Func
	var_43_string = "cot_kapella@door1"; // 0x6d5 PushS
	add(var_43_string); // 0x6d6 ObjFunc
	add(var_21_object); // 0x6d8 ObjFunc
	
Label_1754:
	var_44_int = 11; // 0x6da PushI
	add(var_44_int); // 0x6db ObjFunc
	var_45_object = var_19_object; // 0x6dd Push
	if(var_45_object == 0) goto Label_1766; // 0x6de JumpB
	CreateStringVector(var_21_object); // 0x6df Func
	var_46_string = "cot_katerina@door1"; // 0x6e1 PushS
	add(var_46_string); // 0x6e2 ObjFunc
	add(var_21_object); // 0x6e4 ObjFunc
	
Label_1766:
	var_47_int = 13; // 0x6e6 PushI
	add(var_47_int); // 0x6e7 ObjFunc
	var_48_object = var_19_object; // 0x6e9 Push
	if(var_48_object == 0) goto Label_1778; // 0x6ea JumpB
	CreateStringVector(var_21_object); // 0x6eb Func
	var_49_string = "cot_lara@door1"; // 0x6ed PushS
	add(var_49_string); // 0x6ee ObjFunc
	add(var_21_object); // 0x6f0 ObjFunc
	
Label_1778:
	var_50_int = 18; // 0x6f2 PushI
	add(var_50_int); // 0x6f3 ObjFunc
	var_51_object = var_19_object; // 0x6f5 Push
	if(var_51_object == 0) goto Label_1790; // 0x6f6 JumpB
	CreateStringVector(var_21_object); // 0x6f7 Func
	var_52_string = "vagon_mishka@door1"; // 0x6f9 PushS
	add(var_52_string); // 0x6fa ObjFunc
	add(var_21_object); // 0x6fc ObjFunc
	
Label_1790:
	var_53_int = 19; // 0x6fe PushI
	add(var_53_int); // 0x6ff ObjFunc
	var_54_object = var_19_object; // 0x701 Push
	if(var_54_object == 0) goto Label_1802; // 0x702 JumpB
	CreateStringVector(var_21_object); // 0x703 Func
	var_55_string = "house_vlad@door1"; // 0x705 PushS
	add(var_55_string); // 0x706 ObjFunc
	add(var_21_object); // 0x708 ObjFunc
	
Label_1802:
	var_56_int = 20; // 0x70a PushI
	add(var_56_int); // 0x70b ObjFunc
	var_57_object = var_19_object; // 0x70d Push
	if(var_57_object == 0) goto Label_1814; // 0x70e JumpB
	CreateStringVector(var_21_object); // 0x70f Func
	var_58_string = "warehouse_notkin@door1"; // 0x711 PushS
	add(var_58_string); // 0x712 ObjFunc
	add(var_21_object); // 0x714 ObjFunc
	
Label_1814:
	var_59_int = 21; // 0x716 PushI
	add(var_59_int); // 0x717 ObjFunc
	var_60_object = var_19_object; // 0x719 Push
	if(var_60_object == 0) goto Label_1826; // 0x71a JumpB
	CreateStringVector(var_21_object); // 0x71b Func
	var_61_string = "dt_house_1_04@door1"; // 0x71d PushS
	add(var_61_string); // 0x71e ObjFunc
	add(var_21_object); // 0x720 ObjFunc
	
Label_1826:
	var_62_int = 22; // 0x722 PushI
	add(var_62_int); // 0x723 ObjFunc
	var_63_object = var_19_object; // 0x725 Push
	if(var_63_object == 0) goto Label_1838; // 0x726 JumpB
	CreateStringVector(var_21_object); // 0x727 Func
	var_64_string = "house_petr@door1"; // 0x729 PushS
	add(var_64_string); // 0x72a ObjFunc
	add(var_21_object); // 0x72c ObjFunc
	
Label_1838:
	var_65_int = 24; // 0x72e PushI
	add(var_65_int); // 0x72f ObjFunc
	var_66_object = var_19_object; // 0x731 Push
	if(var_66_object == 0) goto Label_1853; // 0x732 JumpB
	CreateStringVector(var_21_object); // 0x733 Func
	var_67_string = "house_spi4ka@door1"; // 0x735 PushS
	add(var_67_string); // 0x736 ObjFunc
	var_68_string = "house_spi4ka@door2"; // 0x738 PushS
	add(var_68_string); // 0x739 ObjFunc
	add(var_21_object); // 0x73b ObjFunc
	
Label_1853:
	var_69_int = 26; // 0x73d PushI
	add(var_69_int); // 0x73e ObjFunc
	var_70_object = var_19_object; // 0x740 Push
	if(var_70_object == 0) goto Label_1868; // 0x741 JumpB
	CreateStringVector(var_21_object); // 0x742 Func
	var_71_string = "cot_viktor@door1"; // 0x744 PushS
	add(var_71_string); // 0x745 ObjFunc
	var_72_string = "cot_viktor@door2"; // 0x747 PushS
	add(var_72_string); // 0x748 ObjFunc
	add(var_21_object); // 0x74a ObjFunc
	
Label_1868:
	return 2; // 0x74c Return
}


func_771(var_205_bool, var_206_int)
{
	var_207_int = 0; var_208_int = 0; // 0x303 PushV
	var_209_string = ""; var_210_int = 0; // 0x304 PushV
	var_210_int = var_206_int; // 0x305 Mov
	func_765(var_209_string, var_210_int); // 0x306 Call
	GetVariable(var_209_string, var_208_int); // 0x308 Func
	var_211_int = 2; // 0x30a PushI
	var_212_int = var_208_int & var_211_int; // 0x30b And
	var_213_int = 0; // 0x30c PushI
	var_205_bool = var_212_int != var_213_int; // 0x30d Neq2
	return 2; // 0x30e Return
}


func_783(var_479_bool, var_480_int)
{
	var_481_int = 0; var_482_int = 0; // 0x30f PushV
	var_483_string = ""; var_484_int = 0; // 0x310 PushV
	var_484_int = var_480_int; // 0x311 Mov
	func_765(var_483_string, var_484_int); // 0x312 Call
	GetVariable(var_483_string, var_482_int); // 0x314 Func
	var_485_int = 1; // 0x316 PushI
	var_486_int = var_482_int & var_485_int; // 0x317 And
	var_487_int = 0; // 0x318 PushI
	var_479_bool = var_486_int == var_487_int; // 0x319 Eq2
	return 2; // 0x31a Return
}


func_528(var_4_int)
{
	var_218_int = 0; var_219_int = 0; var_220_object = Obj(); var_221_int = 0; var_222_int = 0; var_223_string = ""; var_224_int = 0; var_225_int = 0; var_226_int = 0; var_227_int = 0; var_228_int = 0; var_229_int = 0; var_230_int = 0; var_231_int = 0; var_232_object = Obj(); var_233_int = 0; var_234_int = 0; var_235_string = ""; var_236_int = 0; var_237_int = 0; var_238_int = 0; var_239_int = 0; var_240_int = 0; var_241_int = 0; // 0x210 PushV
	var_242_string = "Volonteers update..."; // 0x211 PushS
	Trace(var_242_string); // 0x212 Func
	var_230_int = 0; // 0x214 MovI
	
Label_533:
	var_243_int = 0; // 0x215 PushV
	func_737(var_243_int); // 0x216 Call
	var_244_bool = var_230_int < var_243_int; // 0x218 LT
	if(var_244_bool == 0) goto Label_578; // 0x219 JumpB
	var_245_int = 0; var_246_int = 0; // 0x21a PushV
	var_246_int = var_230_int; // 0x21b Mov
	func_760(var_245_int, var_246_int); // 0x21c Call
	var_231_int = var_245_int; // 0x21d Mov
	var_249_bool = 0; var_250_int = 0; // 0x21f PushV
	var_250_int = var_230_int; // 0x220 Mov
	func_771(var_249_bool, var_250_int); // 0x221 Call
	if(var_249_bool == 0) goto Label_552; // 0x223 JumpB
	var_251_int = 0; // 0x224 PushV
	var_251_int = var_230_int; // 0x225 Mov
	func_807(var_251_int); // 0x226 Call
	
Label_552:
	var_437_bool = 0; var_438_int = 0; // 0x228 PushV
	var_438_int = var_230_int; // 0x229 Mov
	func_795(var_437_bool, var_438_int); // 0x22a Call
	if(var_437_bool == 0) goto Label_575; // 0x22c JumpB
	get(var_232_object, var_230_int); // 0x22d TObjFunc
	size(var_233_int); // 0x22f ObjFunc
	var_234_int = 0; // 0x231 MovI
	
Label_562:
	var_446_bool = var_234_int < var_233_int; // 0x232 LT
	if(var_446_bool == 0) goto Label_574; // 0x233 JumpB
	get(var_235_string, var_234_int); // 0x234 ObjFunc
	var_447_string = ""; var_448_bool = 0; // 0x236 PushV
	var_447_string = var_235_string; // 0x237 Mov
	var_448_bool = 1; // 0x238 MovB
	func_932(var_447_string, var_448_bool); // 0x239 Call
	var_449_int = 1; // 0x23b PushI
	var_234_int = var_234_int + var_449_int; // 0x23c Add2
	goto Label_562; // 0x23d Jump
	
Label_574:
	var_232_object = 0; // 0x23e SetNull
	
Label_575:
	var_450_int = 1; // 0x23f PushI
	var_230_int = var_230_int + var_450_int; // 0x240 Add2
	goto Label_533; // 0x241 Jump
	
Label_578:
	var_451_int = 1; // 0x242 PushI
	var_4_int = var_4_int + var_451_int; // 0x243 Add2
	var_452_int = 0; var_453_int = 0; // 0x244 PushV
	var_454_int = 0; var_455_int = 0; // 0x245 PushV
	var_455_int = var_4_int; // 0x246 MovT
	func_411(var_455_int); // 0x247 Call
	var_452_int = var_454_int; // 0x248 Mov
	var_453_int = var_4_int; // 0x24a MovT
	func_476(var_452_int, var_453_int); // 0x24b Call
	var_236_int = 0; // 0x24d MovI
	var_237_int = 0; // 0x24e MovI
	
Label_591:
	var_501_int = 0; // 0x24f PushV
	func_737(var_501_int); // 0x250 Call
	var_502_bool = var_237_int < var_501_int; // 0x252 LT
	if(var_502_bool == 0) goto Label_619; // 0x253 JumpB
	var_503_int = 0; var_504_int = 0; // 0x254 PushV
	var_504_int = var_237_int; // 0x255 Mov
	func_760(var_503_int, var_504_int); // 0x256 Call
	var_238_int = var_503_int; // 0x257 Mov
	var_505_bool = 0; var_506_int = 0; // 0x259 PushV
	var_506_int = var_237_int; // 0x25a Mov
	func_771(var_505_bool, var_506_int); // 0x25b Call
	if(var_505_bool == 0) goto Label_616; // 0x25d JumpB
	var_507_string = "Volonteer : "; // 0x25e PushS
	var_508_string = ""; var_509_int = 0; // 0x25f PushV
	var_509_int = var_238_int; // 0x260 Mov
	func_1308(var_508_string, var_509_int); // 0x261 Call
	var_510_int = var_507_string + var_508_string; // 0x263 Add
	Trace(var_510_int); // 0x264 Func
	var_511_int = 1; // 0x266 PushI
	var_236_int = var_236_int + var_511_int; // 0x267 Add2
	
Label_616:
	var_512_int = 1; // 0x268 PushI
	var_237_int = var_237_int + var_512_int; // 0x269 Add2
	goto Label_591; // 0x26a Jump
	
Label_619:
	var_239_int = 0; // 0x26b MovI
	var_240_int = 0; // 0x26c MovI
	
Label_621:
	var_513_int = 0; // 0x26d PushV
	func_737(var_513_int); // 0x26e Call
	var_514_bool = var_240_int < var_513_int; // 0x270 LT
	if(var_514_bool == 0) goto Label_649; // 0x271 JumpB
	var_515_int = 0; var_516_int = 0; // 0x272 PushV
	var_516_int = var_240_int; // 0x273 Mov
	func_760(var_515_int, var_516_int); // 0x274 Call
	var_241_int = var_515_int; // 0x275 Mov
	var_517_bool = 0; var_518_int = 0; // 0x277 PushV
	var_518_int = var_240_int; // 0x278 Mov
	func_795(var_517_bool, var_518_int); // 0x279 Call
	if(var_517_bool == 0) goto Label_646; // 0x27b JumpB
	var_519_int = 1; // 0x27c PushI
	var_239_int = var_239_int + var_519_int; // 0x27d Add2
	var_520_string = "Diseased volonteer : "; // 0x27e PushS
	var_521_string = ""; var_522_int = 0; // 0x27f PushV
	var_522_int = var_241_int; // 0x280 Mov
	func_1308(var_521_string, var_522_int); // 0x281 Call
	var_523_int = var_520_string + var_521_string; // 0x283 Add
	Trace(var_523_int); // 0x284 Func
	
Label_646:
	var_524_int = 1; // 0x286 PushI
	var_240_int = var_240_int + var_524_int; // 0x287 Add2
	goto Label_621; // 0x288 Jump
	
Label_649:
	var_525_string = "Today volonteers: "; // 0x289 PushS
	var_526_int = var_525_string + var_236_int; // 0x28a Add
	var_527_string = ", diseased: "; // 0x28b PushS
	var_528_int = var_526_int + var_527_string; // 0x28c Add
	var_529_int = var_528_int + var_239_int; // 0x28d Add
	Trace(var_529_int); // 0x28e Func
	return 24; // 0x290 Return
}


func_657()
{
	var_532_int = 0; var_533_object = Obj(); var_534_int = 0; var_535_object = Obj(); // 0x291 PushV
	EventDisable(26); // 0x292 EventDisable
	var_536_string = "Volonteers Cleanup..."; // 0x293 PushS
	Trace(var_536_string); // 0x294 Func
	var_534_int = 0; // 0x296 MovI
	
Label_663:
	var_537_int = 0; // 0x297 PushV
	func_737(var_537_int); // 0x298 Call
	var_538_bool = var_534_int < var_537_int; // 0x29a LT
	if(var_538_bool == 0) goto Label_678; // 0x29b JumpB
	get(var_535_object, var_534_int); // 0x29c TObjFunc
	var_539_bool = var_535_object != 0; // 0x29e NullNeq
	if(var_539_bool == 0) goto Label_674; // 0x29f JumpB
	Remove(); // 0x2a0 ObjFunc
	
Label_674:
	var_535_object = 0; // 0x2a2 SetNull
	var_540_int = 1; // 0x2a3 PushI
	var_534_int = var_534_int + var_540_int; // 0x2a4 Add2
	goto Label_663; // 0x2a5 Jump
	
Label_678:
	return 4; // 0x2a6 Return
}


func_914(var_415_object, var_417_string, var_418_string, var_419_string)
{
	var_424_bool = 0; var_425_cvector = CVector(0,0,0); var_426_cvector = CVector(0,0,0); var_427_object = Obj(); var_428_bool = 0; var_429_cvector = CVector(0,0,0); var_430_cvector = CVector(0,0,0); var_431_object = Obj(); // 0x392 PushV
	GetLocator(var_417_string, var_428_bool, var_429_cvector, var_430_cvector); // 0x393 ObjFunc
	var_432_bool = var_428_bool == 0; // 0x395 Not
	if(var_432_bool == 0) goto Label_927; // 0x396 JumpB
	var_433_string = "Locator "; // 0x397 PushS
	var_434_int = var_433_string + var_417_string; // 0x398 Add
	var_435_string = " doesn't exist"; // 0x399 PushS
	var_436_int = var_434_int + var_435_string; // 0x39a Add
	Trace(var_436_int); // 0x39b Func
	var_431_object = 0; // 0x39d SetNull
	goto Label_929; // 0x39e Jump
	
Label_929:
	var_415_object = var_431_object; // 0x3a1 Mov
	return 8; // 0x3a2 Return
	
Label_927:
	AddStationaryActor(var_431_object, var_429_cvector, var_430_cvector, var_418_string, var_419_string); // 0x39f ObjFunc
}


func_856(var_11_int)
{
	var_168_int = 0; var_169_object = Obj(); var_170_object = Obj(); var_171_int = 0; var_172_int = 0; var_173_string = ""; var_174_int = 0; var_175_object = Obj(); var_176_object = Obj(); var_177_int = 0; var_178_int = 0; var_179_string = ""; // 0x358 PushV
	var_180_string = ""; var_181_int = 0; // 0x359 PushV
	var_181_int = var_11_int; // 0x35a Mov
	func_765(var_180_string, var_181_int); // 0x35b Call
	GetVariable(var_180_string, var_174_int); // 0x35d Func
	var_185_string = ""; var_186_int = 0; // 0x35f PushV
	var_186_int = var_11_int; // 0x360 Mov
	func_765(var_185_string, var_186_int); // 0x361 Call
	var_187_int = 1; // 0x363 PushI
	SetVariable(var_185_string, var_187_int); // 0x364 Func
	get(var_175_object, var_11_int); // 0x366 TObjFunc
	var_188_bool = var_175_object != 0; // 0x368 NullNeq
	if(var_188_bool == 0) goto Label_876; // 0x369 JumpB
	Remove(); // 0x36a ObjFunc
	
Label_876:
	get(var_176_object, var_11_int); // 0x36c TObjFunc
	size(var_177_int); // 0x36e ObjFunc
	var_178_int = 0; // 0x370 MovI
	
Label_881:
	var_189_bool = var_178_int < var_177_int; // 0x371 LT
	if(var_189_bool == 0) goto Label_893; // 0x372 JumpB
	get(var_179_string, var_178_int); // 0x373 ObjFunc
	var_190_string = ""; var_191_bool = 0; // 0x375 PushV
	var_190_string = var_179_string; // 0x376 Mov
	var_191_bool = 0; // 0x377 MovB
	func_932(var_190_string, var_191_bool); // 0x378 Call
	var_200_int = 1; // 0x37a PushI
	var_178_int = var_178_int + var_200_int; // 0x37b Add2
	goto Label_881; // 0x37c Jump
	
Label_893:
	return 12; // 0x37d Return
}


func_795(var_437_bool, var_438_int)
{
	var_439_int = 0; var_440_int = 0; // 0x31b PushV
	var_441_string = ""; var_442_int = 0; // 0x31c PushV
	var_442_int = var_438_int; // 0x31d Mov
	func_765(var_441_string, var_442_int); // 0x31e Call
	GetVariable(var_441_string, var_440_int); // 0x320 Func
	var_443_int = 4; // 0x322 PushI
	var_444_int = var_440_int & var_443_int; // 0x323 And
	var_445_int = 0; // 0x324 PushI
	var_437_bool = var_444_int != var_445_int; // 0x325 Neq2
	return 2; // 0x326 Return
}


func_411(var_454_int)
{
	var_454_int = 2; // 0x19c MovI
	return 0; // 0x19d Return
}


func_1308(var_269_string, var_270_int)
{
	var_273_int = 1; // 0x51d PushI
	var_274_bool = var_270_int == var_273_int; // 0x51e Eq
	if(var_274_bool == 0) goto Label_1314; // 0x51f JumpB
	var_269_string = "alexandr"; // 0x520 MovS
	return 0; // 0x521 Return
	
Label_1314:
	var_275_int = 2; // 0x522 PushI
	var_276_bool = var_270_int == var_275_int; // 0x523 Eq
	if(var_276_bool == 0) goto Label_1319; // 0x524 JumpB
	var_269_string = "andrei"; // 0x525 MovS
	return 0; // 0x526 Return
	
Label_1319:
	var_277_int = 3; // 0x527 PushI
	var_278_bool = var_270_int == var_277_int; // 0x528 Eq
	if(var_278_bool == 0) goto Label_1324; // 0x529 JumpB
	var_269_string = "anna"; // 0x52a MovS
	return 0; // 0x52b Return
	
Label_1324:
	var_279_int = 4; // 0x52c PushI
	var_280_bool = var_270_int == var_279_int; // 0x52d Eq
	if(var_280_bool == 0) goto Label_1329; // 0x52e JumpB
	var_269_string = "bigvlad"; // 0x52f MovS
	return 0; // 0x530 Return
	
Label_1329:
	var_281_int = 5; // 0x531 PushI
	var_282_bool = var_270_int == var_281_int; // 0x532 Eq
	if(var_282_bool == 0) goto Label_1334; // 0x533 JumpB
	var_269_string = "eva"; // 0x534 MovS
	return 0; // 0x535 Return
	
Label_1334:
	var_283_int = 6; // 0x536 PushI
	var_284_bool = var_270_int == var_283_int; // 0x537 Eq
	if(var_284_bool == 0) goto Label_1339; // 0x538 JumpB
	var_269_string = "georg"; // 0x539 MovS
	return 0; // 0x53a Return
	
Label_1339:
	var_285_int = 7; // 0x53b PushI
	var_286_bool = var_270_int == var_285_int; // 0x53c Eq
	if(var_286_bool == 0) goto Label_1344; // 0x53d JumpB
	var_269_string = "grif"; // 0x53e MovS
	return 0; // 0x53f Return
	
Label_1344:
	var_287_int = 8; // 0x540 PushI
	var_288_bool = var_270_int == var_287_int; // 0x541 Eq
	if(var_288_bool == 0) goto Label_1349; // 0x542 JumpB
	var_269_string = "han"; // 0x543 MovS
	return 0; // 0x544 Return
	
Label_1349:
	var_289_int = 9; // 0x545 PushI
	var_290_bool = var_270_int == var_289_int; // 0x546 Eq
	if(var_290_bool == 0) goto Label_1354; // 0x547 JumpB
	var_269_string = "julia"; // 0x548 MovS
	return 0; // 0x549 Return
	
Label_1354:
	var_291_int = 10; // 0x54a PushI
	var_292_bool = var_270_int == var_291_int; // 0x54b Eq
	if(var_292_bool == 0) goto Label_1359; // 0x54c JumpB
	var_269_string = "kapella"; // 0x54d MovS
	return 0; // 0x54e Return
	
Label_1359:
	var_293_int = 11; // 0x54f PushI
	var_294_bool = var_270_int == var_293_int; // 0x550 Eq
	if(var_294_bool == 0) goto Label_1364; // 0x551 JumpB
	var_269_string = "katerina"; // 0x552 MovS
	return 0; // 0x553 Return
	
Label_1364:
	var_295_int = 12; // 0x554 PushI
	var_296_bool = var_270_int == var_295_int; // 0x555 Eq
	if(var_296_bool == 0) goto Label_1369; // 0x556 JumpB
	var_269_string = "klara"; // 0x557 MovS
	return 0; // 0x558 Return
	
Label_1369:
	var_297_int = 13; // 0x559 PushI
	var_298_bool = var_270_int == var_297_int; // 0x55a Eq
	if(var_298_bool == 0) goto Label_1374; // 0x55b JumpB
	var_269_string = "lara"; // 0x55c MovS
	return 0; // 0x55d Return
	
Label_1374:
	var_299_int = 14; // 0x55e PushI
	var_300_bool = var_270_int == var_299_int; // 0x55f Eq
	if(var_300_bool == 0) goto Label_1379; // 0x560 JumpB
	var_269_string = "laska"; // 0x561 MovS
	return 0; // 0x562 Return
	
Label_1379:
	var_301_int = 15; // 0x563 PushI
	var_302_bool = var_270_int == var_301_int; // 0x564 Eq
	if(var_302_bool == 0) goto Label_1384; // 0x565 JumpB
	var_269_string = "maria"; // 0x566 MovS
	return 0; // 0x567 Return
	
Label_1384:
	var_303_int = 16; // 0x568 PushI
	var_304_bool = var_270_int == var_303_int; // 0x569 Eq
	if(var_304_bool == 0) goto Label_1389; // 0x56a JumpB
	var_269_string = "mark"; // 0x56b MovS
	return 0; // 0x56c Return
	
Label_1389:
	var_305_int = 17; // 0x56d PushI
	var_306_bool = var_270_int == var_305_int; // 0x56e Eq
	if(var_306_bool == 0) goto Label_1394; // 0x56f JumpB
	var_269_string = "mat"; // 0x570 MovS
	return 0; // 0x571 Return
	
Label_1394:
	var_307_int = 18; // 0x572 PushI
	var_308_bool = var_270_int == var_307_int; // 0x573 Eq
	if(var_308_bool == 0) goto Label_1399; // 0x574 JumpB
	var_269_string = "mishka"; // 0x575 MovS
	return 0; // 0x576 Return
	
Label_1399:
	var_309_int = 19; // 0x577 PushI
	var_310_bool = var_270_int == var_309_int; // 0x578 Eq
	if(var_310_bool == 0) goto Label_1404; // 0x579 JumpB
	var_269_string = "mladvlad"; // 0x57a MovS
	return 0; // 0x57b Return
	
Label_1404:
	var_311_int = 20; // 0x57c PushI
	var_312_bool = var_270_int == var_311_int; // 0x57d Eq
	if(var_312_bool == 0) goto Label_1409; // 0x57e JumpB
	var_269_string = "notkin"; // 0x57f MovS
	return 0; // 0x580 Return
	
Label_1409:
	var_313_int = 21; // 0x581 PushI
	var_314_bool = var_270_int == var_313_int; // 0x582 Eq
	if(var_314_bool == 0) goto Label_1414; // 0x583 JumpB
	var_269_string = "ospina"; // 0x584 MovS
	return 0; // 0x585 Return
	
Label_1414:
	var_315_int = 22; // 0x586 PushI
	var_316_bool = var_270_int == var_315_int; // 0x587 Eq
	if(var_316_bool == 0) goto Label_1419; // 0x588 JumpB
	var_269_string = "petr"; // 0x589 MovS
	return 0; // 0x58a Return
	
Label_1419:
	var_317_int = 23; // 0x58b PushI
	var_318_bool = var_270_int == var_317_int; // 0x58c Eq
	if(var_318_bool == 0) goto Label_1424; // 0x58d JumpB
	var_269_string = "rubin"; // 0x58e MovS
	return 0; // 0x58f Return
	
Label_1424:
	var_319_int = 24; // 0x590 PushI
	var_320_bool = var_270_int == var_319_int; // 0x591 Eq
	if(var_320_bool == 0) goto Label_1429; // 0x592 JumpB
	var_269_string = "spi4ka"; // 0x593 MovS
	return 0; // 0x594 Return
	
Label_1429:
	var_321_int = 25; // 0x595 PushI
	var_322_bool = var_270_int == var_321_int; // 0x596 Eq
	if(var_322_bool == 0) goto Label_1434; // 0x597 JumpB
	var_269_string = "starshina"; // 0x598 MovS
	return 0; // 0x599 Return
	
Label_1434:
	var_323_int = 26; // 0x59a PushI
	var_324_bool = var_270_int == var_323_int; // 0x59b Eq
	if(var_324_bool == 0) goto Label_1439; // 0x59c JumpB
	var_269_string = "viktor"; // 0x59d MovS
	return 0; // 0x59e Return
	
Label_1439:
	var_325_int = 27; // 0x59f PushI
	var_326_bool = var_270_int == var_325_int; // 0x5a0 Eq
	if(var_326_bool == 0) goto Label_1444; // 0x5a1 JumpB
	var_269_string = "wasted_woman"; // 0x5a2 MovS
	return 0; // 0x5a3 Return
	
Label_1444:
	var_327_int = 28; // 0x5a4 PushI
	var_328_bool = var_270_int == var_327_int; // 0x5a5 Eq
	if(var_328_bool == 0) goto Label_1449; // 0x5a6 JumpB
	var_269_string = "wasted_male"; // 0x5a7 MovS
	return 0; // 0x5a8 Return
	
Label_1449:
	var_329_int = 29; // 0x5a9 PushI
	var_330_bool = var_270_int == var_329_int; // 0x5aa Eq
	if(var_330_bool == 0) goto Label_1454; // 0x5ab JumpB
	var_269_string = "alkash"; // 0x5ac MovS
	return 0; // 0x5ad Return
	
Label_1454:
	var_331_int = 30; // 0x5ae PushI
	var_332_bool = var_270_int == var_331_int; // 0x5af Eq
	if(var_332_bool == 0) goto Label_1459; // 0x5b0 JumpB
	var_269_string = "boy"; // 0x5b1 MovS
	return 0; // 0x5b2 Return
	
Label_1459:
	var_333_int = 31; // 0x5b3 PushI
	var_334_bool = var_270_int == var_333_int; // 0x5b4 Eq
	if(var_334_bool == 0) goto Label_1464; // 0x5b5 JumpB
	var_269_string = "girl"; // 0x5b6 MovS
	return 0; // 0x5b7 Return
	
Label_1464:
	var_335_int = 32; // 0x5b8 PushI
	var_336_bool = var_270_int == var_335_int; // 0x5b9 Eq
	if(var_336_bool == 0) goto Label_1469; // 0x5ba JumpB
	var_269_string = "littleboy"; // 0x5bb MovS
	return 0; // 0x5bc Return
	
Label_1469:
	var_337_int = 33; // 0x5bd PushI
	var_338_bool = var_270_int == var_337_int; // 0x5be Eq
	if(var_338_bool == 0) goto Label_1474; // 0x5bf JumpB
	var_269_string = "littlegirl"; // 0x5c0 MovS
	return 0; // 0x5c1 Return
	
Label_1474:
	var_339_int = 34; // 0x5c2 PushI
	var_340_bool = var_270_int == var_339_int; // 0x5c3 Eq
	if(var_340_bool == 0) goto Label_1479; // 0x5c4 JumpB
	var_269_string = "butcher"; // 0x5c5 MovS
	return 0; // 0x5c6 Return
	
Label_1479:
	var_341_int = 35; // 0x5c7 PushI
	var_342_bool = var_270_int == var_341_int; // 0x5c8 Eq
	if(var_342_bool == 0) goto Label_1484; // 0x5c9 JumpB
	var_269_string = "dohodyaga"; // 0x5ca MovS
	return 0; // 0x5cb Return
	
Label_1484:
	var_343_int = 36; // 0x5cc PushI
	var_344_bool = var_270_int == var_343_int; // 0x5cd Eq
	if(var_344_bool == 0) goto Label_1489; // 0x5ce JumpB
	var_269_string = "unosha"; // 0x5cf MovS
	return 0; // 0x5d0 Return
	
Label_1489:
	var_345_int = 37; // 0x5d1 PushI
	var_346_bool = var_270_int == var_345_int; // 0x5d2 Eq
	if(var_346_bool == 0) goto Label_1494; // 0x5d3 JumpB
	var_269_string = "vaxxabit"; // 0x5d4 MovS
	return 0; // 0x5d5 Return
	
Label_1494:
	var_347_int = 38; // 0x5d6 PushI
	var_348_bool = var_270_int == var_347_int; // 0x5d7 Eq
	if(var_348_bool == 0) goto Label_1499; // 0x5d8 JumpB
	var_269_string = "vaxxabitka"; // 0x5d9 MovS
	return 0; // 0x5da Return
	
Label_1499:
	var_349_int = 39; // 0x5db PushI
	var_350_bool = var_270_int == var_349_int; // 0x5dc Eq
	if(var_350_bool == 0) goto Label_1504; // 0x5dd JumpB
	var_269_string = "woman"; // 0x5de MovS
	return 0; // 0x5df Return
	
Label_1504:
	var_351_int = 40; // 0x5e0 PushI
	var_352_bool = var_270_int == var_351_int; // 0x5e1 Eq
	if(var_352_bool == 0) goto Label_1509; // 0x5e2 JumpB
	var_269_string = "worker"; // 0x5e3 MovS
	return 0; // 0x5e4 Return
	
Label_1509:
	var_353_int = 42; // 0x5e5 PushI
	var_354_bool = var_270_int == var_353_int; // 0x5e6 Eq
	if(var_354_bool == 0) goto Label_1514; // 0x5e7 JumpB
	var_269_string = "whitemask"; // 0x5e8 MovS
	return 0; // 0x5e9 Return
	
Label_1514:
	var_355_int = 43; // 0x5ea PushI
	var_356_bool = var_270_int == var_355_int; // 0x5eb Eq
	if(var_356_bool == 0) goto Label_1519; // 0x5ec JumpB
	var_269_string = "birdmask"; // 0x5ed MovS
	return 0; // 0x5ee Return
	
Label_1519:
	var_357_int = 44; // 0x5ef PushI
	var_358_bool = var_270_int == var_357_int; // 0x5f0 Eq
	if(var_358_bool == 0) goto Label_1524; // 0x5f1 JumpB
	var_269_string = "birdmask"; // 0x5f2 MovS
	return 0; // 0x5f3 Return
	
Label_1524:
	var_359_int = 46; // 0x5f4 PushI
	var_360_bool = var_270_int == var_359_int; // 0x5f5 Eq
	if(var_360_bool == 0) goto Label_1529; // 0x5f6 JumpB
	var_269_string = "patrol"; // 0x5f7 MovS
	return 0; // 0x5f8 Return
	
Label_1529:
	var_361_int = 47; // 0x5f9 PushI
	var_362_bool = var_270_int == var_361_int; // 0x5fa Eq
	if(var_362_bool == 0) goto Label_1534; // 0x5fb JumpB
	var_269_string = "danko"; // 0x5fc MovS
	return 0; // 0x5fd Return
	
Label_1534:
	var_363_int = 48; // 0x5fe PushI
	var_364_bool = var_270_int == var_363_int; // 0x5ff Eq
	if(var_364_bool == 0) goto Label_1539; // 0x600 JumpB
	var_269_string = "alkash_d"; // 0x601 MovS
	return 0; // 0x602 Return
	
Label_1539:
	var_365_int = 49; // 0x603 PushI
	var_366_bool = var_270_int == var_365_int; // 0x604 Eq
	if(var_366_bool == 0) goto Label_1544; // 0x605 JumpB
	var_269_string = "boy_d"; // 0x606 MovS
	return 0; // 0x607 Return
	
Label_1544:
	var_367_int = 50; // 0x608 PushI
	var_368_bool = var_270_int == var_367_int; // 0x609 Eq
	if(var_368_bool == 0) goto Label_1549; // 0x60a JumpB
	var_269_string = "butcher_d"; // 0x60b MovS
	return 0; // 0x60c Return
	
Label_1549:
	var_369_int = 51; // 0x60d PushI
	var_370_bool = var_270_int == var_369_int; // 0x60e Eq
	if(var_370_bool == 0) goto Label_1554; // 0x60f JumpB
	var_269_string = "dohodyaga_d"; // 0x610 MovS
	return 0; // 0x611 Return
	
Label_1554:
	var_371_int = 52; // 0x612 PushI
	var_372_bool = var_270_int == var_371_int; // 0x613 Eq
	if(var_372_bool == 0) goto Label_1559; // 0x614 JumpB
	var_269_string = "girl_d"; // 0x615 MovS
	return 0; // 0x616 Return
	
Label_1559:
	var_373_int = 53; // 0x617 PushI
	var_374_bool = var_270_int == var_373_int; // 0x618 Eq
	if(var_374_bool == 0) goto Label_1564; // 0x619 JumpB
	var_269_string = "littleboy_d"; // 0x61a MovS
	return 0; // 0x61b Return
	
Label_1564:
	var_375_int = 54; // 0x61c PushI
	var_376_bool = var_270_int == var_375_int; // 0x61d Eq
	if(var_376_bool == 0) goto Label_1569; // 0x61e JumpB
	var_269_string = "littlegirl_d"; // 0x61f MovS
	return 0; // 0x620 Return
	
Label_1569:
	var_377_int = 55; // 0x621 PushI
	var_378_bool = var_270_int == var_377_int; // 0x622 Eq
	if(var_378_bool == 0) goto Label_1574; // 0x623 JumpB
	var_269_string = "unosha2"; // 0x624 MovS
	return 0; // 0x625 Return
	
Label_1574:
	var_379_int = 56; // 0x626 PushI
	var_380_bool = var_270_int == var_379_int; // 0x627 Eq
	if(var_380_bool == 0) goto Label_1579; // 0x628 JumpB
	var_269_string = "unosha_d"; // 0x629 MovS
	return 0; // 0x62a Return
	
Label_1579:
	var_381_int = 57; // 0x62b PushI
	var_382_bool = var_270_int == var_381_int; // 0x62c Eq
	if(var_382_bool == 0) goto Label_1584; // 0x62d JumpB
	var_269_string = "unosha2_d"; // 0x62e MovS
	return 0; // 0x62f Return
	
Label_1584:
	var_383_int = 58; // 0x630 PushI
	var_384_bool = var_270_int == var_383_int; // 0x631 Eq
	if(var_384_bool == 0) goto Label_1589; // 0x632 JumpB
	var_269_string = "vaxxabit_d"; // 0x633 MovS
	return 0; // 0x634 Return
	
Label_1589:
	var_385_int = 59; // 0x635 PushI
	var_386_bool = var_270_int == var_385_int; // 0x636 Eq
	if(var_386_bool == 0) goto Label_1594; // 0x637 JumpB
	var_269_string = "vaxxabitka_d"; // 0x638 MovS
	return 0; // 0x639 Return
	
Label_1594:
	var_387_int = 60; // 0x63a PushI
	var_388_bool = var_270_int == var_387_int; // 0x63b Eq
	if(var_388_bool == 0) goto Label_1599; // 0x63c JumpB
	var_269_string = "wasted_male_d"; // 0x63d MovS
	return 0; // 0x63e Return
	
Label_1599:
	var_389_int = 61; // 0x63f PushI
	var_390_bool = var_270_int == var_389_int; // 0x640 Eq
	if(var_390_bool == 0) goto Label_1604; // 0x641 JumpB
	var_269_string = "wasted_woman_d"; // 0x642 MovS
	return 0; // 0x643 Return
	
Label_1604:
	var_391_int = 62; // 0x644 PushI
	var_392_bool = var_270_int == var_391_int; // 0x645 Eq
	if(var_392_bool == 0) goto Label_1609; // 0x646 JumpB
	var_269_string = "woman_d"; // 0x647 MovS
	return 0; // 0x648 Return
	
Label_1609:
	var_393_int = 63; // 0x649 PushI
	var_394_bool = var_270_int == var_393_int; // 0x64a Eq
	if(var_394_bool == 0) goto Label_1614; // 0x64b JumpB
	var_269_string = "worker2"; // 0x64c MovS
	return 0; // 0x64d Return
	
Label_1614:
	var_395_int = 64; // 0x64e PushI
	var_396_bool = var_270_int == var_395_int; // 0x64f Eq
	if(var_396_bool == 0) goto Label_1619; // 0x650 JumpB
	var_269_string = "worker_d"; // 0x651 MovS
	return 0; // 0x652 Return
	
Label_1619:
	var_397_int = 65; // 0x653 PushI
	var_398_bool = var_270_int == var_397_int; // 0x654 Eq
	if(var_398_bool == 0) goto Label_1624; // 0x655 JumpB
	var_269_string = "worker2_d"; // 0x656 MovS
	return 0; // 0x657 Return
	
Label_1624:
	var_399_int = 66; // 0x658 PushI
	var_400_bool = var_270_int == var_399_int; // 0x659 Eq
	if(var_400_bool == 0) goto Label_1629; // 0x65a JumpB
	var_269_string = "burah"; // 0x65b MovS
	return 0; // 0x65c Return
	
Label_1629:
	var_401_int = 67; // 0x65d PushI
	var_402_bool = var_270_int == var_401_int; // 0x65e Eq
	if(var_402_bool == 0) goto Label_1634; // 0x65f JumpB
	var_269_string = "gorbun_daughter"; // 0x660 MovS
	return 0; // 0x661 Return
	
Label_1634:
	var_403_int = 68; // 0x662 PushI
	var_404_bool = var_270_int == var_403_int; // 0x663 Eq
	if(var_404_bool == 0) goto Label_1639; // 0x664 JumpB
	var_269_string = "gorbun"; // 0x665 MovS
	return 0; // 0x666 Return
	
Label_1639:
	var_405_int = 69; // 0x667 PushI
	var_406_bool = var_270_int == var_405_int; // 0x668 Eq
	if(var_406_bool == 0) goto Label_1644; // 0x669 JumpB
	var_269_string = "albinos"; // 0x66a MovS
	return 0; // 0x66b Return
	
Label_1644:
	var_407_int = 70; // 0x66c PushI
	var_408_bool = var_270_int == var_407_int; // 0x66d Eq
	if(var_408_bool == 0) goto Label_1649; // 0x66e JumpB
	var_269_string = "aglaja"; // 0x66f MovS
	return 0; // 0x670 Return
	
Label_1649:
	var_409_int = 71; // 0x671 PushI
	var_410_bool = var_270_int == var_409_int; // 0x672 Eq
	if(var_410_bool == 0) goto Label_1654; // 0x673 JumpB
	var_269_string = "nude"; // 0x674 MovS
	return 0; // 0x675 Return
	
Label_1654:
	var_411_int = 72; // 0x676 PushI
	var_412_bool = var_270_int == var_411_int; // 0x677 Eq
	if(var_412_bool == 0) goto Label_1659; // 0x678 JumpB
	var_269_string = "block"; // 0x679 MovS
	return 0; // 0x67a Return
	
Label_1659:
	var_413_int = 73; // 0x67b PushI
	var_414_bool = var_270_int == var_413_int; // 0x67c Eq
	if(var_414_bool == 0) goto Label_1664; // 0x67d JumpB
	var_269_string = "officer"; // 0x67e MovS
	return 0; // 0x67f Return
	
Label_1664:
	var_269_string = ""; // 0x680 MovS
	return 0; // 0x681 Return
}


func_476(var_452_int, var_453_int)
{
	var_456_int = 0; var_457_int = 0; // 0x1dc PushV
	var_457_int = 0; // 0x1dd MovI
	
Label_478:
	var_458_bool = var_457_int < var_452_int; // 0x1de LT
	if(var_458_bool == 0) goto Label_487; // 0x1df JumpB
	var_459_int = 0; var_460_int = 0; // 0x1e0 PushV
	var_460_int = var_453_int; // 0x1e1 Mov
	func_488(var_459_int, var_460_int); // 0x1e2 Call
	var_500_int = 1; // 0x1e4 PushI
	var_457_int = var_457_int + var_500_int; // 0x1e5 Add2
	goto Label_478; // 0x1e6 Jump
	
Label_487:
	return 2; // 0x1e7 Return
}


func_737(var_91_int)
{
	var_92_int = 0; var_93_int = 0; // 0x2e1 PushV
	size(var_93_int); // 0x2e2 TObjFunc
	var_91_int = var_93_int; // 0x2e4 Mov
	return 2; // 0x2e5 Return
}


func_932(var_190_string, var_191_bool)
{
	var_192_object = Obj(); var_193_object = Obj(); // 0x3a4 PushV
	FindActor(var_193_object, var_190_string); // 0x3a5 Func
	var_194_bool = var_193_object == 0; // 0x3a7 Not
	if(var_194_bool == 0) goto Label_943; // 0x3a8 JumpB
	var_195_string = "Door "; // 0x3a9 PushS
	var_196_int = var_195_string + var_190_string; // 0x3aa Add
	var_197_string = " not found"; // 0x3ab PushS
	var_198_int = var_196_int + var_197_string; // 0x3ac Add
	Trace(var_198_int); // 0x3ad Func
	
Label_943:
	var_199_string = "locked"; // 0x3af PushS
	SetProperty(var_199_string, var_191_bool); // 0x3b0 ObjFunc
	return 2; // 0x3b2 Return
}


func_742(var_85_int, var_86_int)
{
	var_87_int = 0; var_88_int = 0; var_89_int = 0; var_90_int = 0; // 0x2e6 PushV
	var_89_int = 0; // 0x2e7 MovI
	
Label_744:
	var_91_int = 0; // 0x2e8 PushV
	func_737(var_91_int); // 0x2e9 Call
	var_94_bool = var_89_int < var_91_int; // 0x2eb LT
	if(var_94_bool == 0) goto Label_758; // 0x2ec JumpB
	get(var_90_int, var_89_int); // 0x2ed TObjFunc
	var_95_bool = var_86_int == var_90_int; // 0x2ef Eq
	if(var_95_bool == 0) goto Label_755; // 0x2f0 JumpB
	var_85_int = var_89_int; // 0x2f1 Mov
	return 4; // 0x2f2 Return
	
Label_755:
	var_96_int = 1; // 0x2f3 PushI
	var_89_int = var_89_int + var_96_int; // 0x2f4 Add2
	goto Label_744; // 0x2f5 Jump
	
Label_758:
	var_85_int = -1; // 0x2f6 MovI
	return 4; // 0x2f7 Return
}


func_679(var_0_object, var_1_object, var_2_object, var_3_object, var_4_int)
{
	var_5_object = Obj(); var_6_object = Obj(); var_7_object = Obj(); var_8_object = Obj(); var_9_int = 0; var_10_object = Obj(); var_11_object = Obj(); var_12_object = Obj(); var_13_object = Obj(); var_14_object = Obj(); var_15_int = 0; var_16_object = Obj(); // 0x2a7 PushV
	var_17_string = "Volonteers Init..."; // 0x2a8 PushS
	Trace(var_17_string); // 0x2a9 Func
	CreateIntVector(var_11_object); // 0x2ab Func
	CreateObjectVector(var_12_object); // 0x2ad Func
	var_18_object = Obj(); var_19_object = Obj(); // 0x2af PushV
	var_18_object = var_11_object; // 0x2b0 Mov
	var_19_object = var_12_object; // 0x2b1 Mov
	func_1666(var_19_object); // 0x2b2 Call
	var_0_object = var_11_object; // 0x2b4 TMov
	var_3_object = var_12_object; // 0x2b5 TMov
	CreateObjectVector(var_13_object); // 0x2b6 Func
	var_73_object = Obj(); // 0x2b8 PushV
	var_73_object = var_13_object; // 0x2b9 Mov
	func_0(); // 0x2ba Call
	var_1_object = var_13_object; // 0x2bc TMov
	CreateObjectVector(var_14_object); // 0x2bd Func
	var_2_object = var_14_object; // 0x2bf TMov
	var_15_int = 0; // 0x2c0 MovI
	
Label_705:
	var_225_int = 0; // 0x2c1 PushV
	func_737(var_225_int); // 0x2c2 Call
	var_226_bool = var_15_int < var_225_int; // 0x2c4 LT
	if(var_226_bool == 0) goto Label_724; // 0x2c5 JumpB
	var_227_string = ""; var_228_int = 0; // 0x2c6 PushV
	var_228_int = var_15_int; // 0x2c7 Mov
	func_765(var_227_string, var_228_int); // 0x2c8 Call
	var_232_int = 0; // 0x2ca PushI
	SetVariable(var_227_string, var_232_int); // 0x2cb Func
	var_16_object = 0; // 0x2cd SetNull
	add(var_16_object); // 0x2ce TObjFunc
	var_16_object = 0; // 0x2d0 SetNull
	var_233_int = 1; // 0x2d1 PushI
	var_15_int = var_15_int + var_233_int; // 0x2d2 Add2
	goto Label_705; // 0x2d3 Jump
	
Label_724:
	var_4_int = 0; // 0x2d4 TMovI
	var_234_string = "Volonteers count: "; // 0x2d5 PushS
	var_235_int = 0; // 0x2d6 PushV
	func_737(var_235_int); // 0x2d7 Call
	var_236_int = var_234_string + var_235_int; // 0x2d9 Add
	Trace(var_236_int); // 0x2da Func
	return 12; // 0x2dc Return
}


func_807(var_251_int)
{
	var_252_int = 0; var_253_object = Obj(); var_254_object = Obj(); var_255_string = ""; var_256_int = 0; var_257_object = Obj(); var_258_object = Obj(); var_259_string = ""; // 0x327 PushV
	var_260_string = ""; var_261_int = 0; // 0x328 PushV
	var_261_int = var_251_int; // 0x329 Mov
	func_765(var_260_string, var_261_int); // 0x32a Call
	GetVariable(var_260_string, var_256_int); // 0x32c Func
	var_262_string = ""; var_263_int = 0; // 0x32e PushV
	var_263_int = var_251_int; // 0x32f Mov
	func_765(var_262_string, var_263_int); // 0x330 Call
	var_264_int = 8; // 0x332 PushI
	var_265_int = var_256_int & var_264_int; // 0x333 And
	var_266_int = 5; // 0x334 PushI
	var_267_int = var_265_int | var_266_int; // 0x335 Or
	SetVariable(var_262_string, var_267_int); // 0x336 Func
	get(var_257_object, var_251_int); // 0x338 TObjFunc
	var_268_bool = var_257_object == 0; // 0x33a NullEq
	if(var_268_bool == 0) goto Label_854; // 0x33b JumpB
	GetMainOutdoorScene(var_258_object); // 0x33c Func
	var_269_string = ""; var_270_int = 0; // 0x33e PushV
	var_271_int = 0; var_272_int = 0; // 0x33f PushV
	var_272_int = var_251_int; // 0x340 Mov
	func_760(var_271_int, var_272_int); // 0x341 Call
	var_270_int = var_271_int; // 0x342 Mov
	func_1308(var_269_string, var_270_int); // 0x344 Call
	var_259_string = var_269_string; // 0x345 Mov
	var_415_object = Obj(); var_416_object = Obj(); var_417_string = ""; var_418_string = ""; var_419_string = ""; // 0x347 PushV
	var_416_object = var_258_object; // 0x348 Mov
	var_420_string = "pt_volonteer_"; // 0x349 PushS
	var_417_string = var_420_string + var_259_string; // 0x34a Add2
	var_418_string = "pers_birdmask"; // 0x34b MovS
	var_421_string = "vbirdmask_"; // 0x34c PushS
	var_422_int = var_421_string + var_259_string; // 0x34d Add
	var_423_string = ".xml"; // 0x34e PushS
	var_419_string = var_422_int + var_423_string; // 0x34f Add2
	func_914(var_416_object, var_417_string, var_418_string, var_419_string); // 0x350 Call
	var_257_object = var_415_object; // 0x351 Mov
	set(var_251_int, var_257_object); // 0x353 TObjFunc
	var_258_object = 0; // 0x355 SetNull
	
Label_854:
	return 8; // 0x356 Return
}


func_488(var_459_int, var_460_int)
{
	var_461_object = Obj(); var_462_int = 0; var_463_int = 0; var_464_int = 0; var_465_int = 0; var_466_int = 0; var_467_object = Obj(); var_468_int = 0; var_469_int = 0; var_470_int = 0; var_471_int = 0; var_472_int = 0; // 0x1e8 PushV
	get(var_467_object, var_460_int); // 0x1e9 TObjFunc
	size(var_468_int); // 0x1eb ObjFunc
	var_473_int = 0; // 0x1ed PushI
	var_474_bool = var_468_int == var_473_int; // 0x1ee Eq
	if(var_474_bool == 0) goto Label_498; // 0x1ef JumpB
	var_459_int = -1; // 0x1f0 MovI
	return 12; // 0x1f1 Return
	
Label_498:
	var_469_int = 0; // 0x1f2 MovI
	var_475_int = 1; // 0x1f3 PushI
	var_476_bool = var_468_int > var_475_int; // 0x1f4 GT
	if(var_476_bool == 0) goto Label_504; // 0x1f5 JumpB
	irand(var_469_int, var_468_int); // 0x1f6 Func
	
Label_504:
	var_470_int = 0; // 0x1f8 MovI
	
Label_505:
	var_477_bool = var_470_int < var_468_int; // 0x1f9 LT
	if(var_477_bool == 0) goto Label_525; // 0x1fa JumpB
	var_478_int = var_470_int + var_469_int; // 0x1fb Add
	var_471_int = var_478_int % var_468_int; // 0x1fc Mod2
	get(var_472_int, var_471_int); // 0x1fd ObjFunc
	var_479_bool = 0; var_480_int = 0; // 0x1ff PushV
	var_480_int = var_472_int; // 0x200 Mov
	func_783(var_479_bool, var_480_int); // 0x201 Call
	if(var_479_bool == 0) goto Label_522; // 0x203 JumpB
	var_488_int = 0; // 0x204 PushV
	var_488_int = var_472_int; // 0x205 Mov
	func_896(var_488_int); // 0x206 Call
	var_459_int = var_472_int; // 0x208 Mov
	return 12; // 0x209 Return
	
Label_522:
	var_499_int = 1; // 0x20a PushI
	var_470_int = var_470_int + var_499_int; // 0x20b Add2
	goto Label_505; // 0x20c Jump
	
Label_525:
	var_459_int = -1; // 0x20d MovI
	return 12; // 0x20e Return
}


func_948(var_14_int, var_15_string)
{
	_strlwr(var_15_string); // 0x3b5 Func
	var_16_string = "alexandr"; // 0x3b7 PushS
	var_17_bool = var_15_string == var_16_string; // 0x3b8 Eq
	if(var_17_bool == 0) goto Label_956; // 0x3b9 JumpB
	var_14_int = 1; // 0x3ba MovI
	return 0; // 0x3bb Return
	
Label_956:
	var_18_string = "andrei"; // 0x3bc PushS
	var_19_bool = var_15_string == var_18_string; // 0x3bd Eq
	if(var_19_bool == 0) goto Label_961; // 0x3be JumpB
	var_14_int = 2; // 0x3bf MovI
	return 0; // 0x3c0 Return
	
Label_961:
	var_20_string = "anna"; // 0x3c1 PushS
	var_21_bool = var_15_string == var_20_string; // 0x3c2 Eq
	if(var_21_bool == 0) goto Label_966; // 0x3c3 JumpB
	var_14_int = 3; // 0x3c4 MovI
	return 0; // 0x3c5 Return
	
Label_966:
	var_22_string = "bigvlad"; // 0x3c6 PushS
	var_23_bool = var_15_string == var_22_string; // 0x3c7 Eq
	if(var_23_bool == 0) goto Label_971; // 0x3c8 JumpB
	var_14_int = 4; // 0x3c9 MovI
	return 0; // 0x3ca Return
	
Label_971:
	var_24_string = "eva"; // 0x3cb PushS
	var_25_bool = var_15_string == var_24_string; // 0x3cc Eq
	if(var_25_bool == 0) goto Label_976; // 0x3cd JumpB
	var_14_int = 5; // 0x3ce MovI
	return 0; // 0x3cf Return
	
Label_976:
	var_26_string = "georg"; // 0x3d0 PushS
	var_27_bool = var_15_string == var_26_string; // 0x3d1 Eq
	if(var_27_bool == 0) goto Label_981; // 0x3d2 JumpB
	var_14_int = 6; // 0x3d3 MovI
	return 0; // 0x3d4 Return
	
Label_981:
	var_28_string = "grif"; // 0x3d5 PushS
	var_29_bool = var_15_string == var_28_string; // 0x3d6 Eq
	if(var_29_bool == 0) goto Label_986; // 0x3d7 JumpB
	var_14_int = 7; // 0x3d8 MovI
	return 0; // 0x3d9 Return
	
Label_986:
	var_30_string = "han"; // 0x3da PushS
	var_31_bool = var_15_string == var_30_string; // 0x3db Eq
	if(var_31_bool == 0) goto Label_991; // 0x3dc JumpB
	var_14_int = 8; // 0x3dd MovI
	return 0; // 0x3de Return
	
Label_991:
	var_32_string = "julia"; // 0x3df PushS
	var_33_bool = var_15_string == var_32_string; // 0x3e0 Eq
	if(var_33_bool == 0) goto Label_996; // 0x3e1 JumpB
	var_14_int = 9; // 0x3e2 MovI
	return 0; // 0x3e3 Return
	
Label_996:
	var_34_string = "kapella"; // 0x3e4 PushS
	var_35_bool = var_15_string == var_34_string; // 0x3e5 Eq
	if(var_35_bool == 0) goto Label_1001; // 0x3e6 JumpB
	var_14_int = 10; // 0x3e7 MovI
	return 0; // 0x3e8 Return
	
Label_1001:
	var_36_string = "katerina"; // 0x3e9 PushS
	var_37_bool = var_15_string == var_36_string; // 0x3ea Eq
	if(var_37_bool == 0) goto Label_1006; // 0x3eb JumpB
	var_14_int = 11; // 0x3ec MovI
	return 0; // 0x3ed Return
	
Label_1006:
	var_38_string = "klara"; // 0x3ee PushS
	var_39_bool = var_15_string == var_38_string; // 0x3ef Eq
	if(var_39_bool == 0) goto Label_1011; // 0x3f0 JumpB
	var_14_int = 12; // 0x3f1 MovI
	return 0; // 0x3f2 Return
	
Label_1011:
	var_40_string = "lara"; // 0x3f3 PushS
	var_41_bool = var_15_string == var_40_string; // 0x3f4 Eq
	if(var_41_bool == 0) goto Label_1016; // 0x3f5 JumpB
	var_14_int = 13; // 0x3f6 MovI
	return 0; // 0x3f7 Return
	
Label_1016:
	var_42_string = "laska"; // 0x3f8 PushS
	var_43_bool = var_15_string == var_42_string; // 0x3f9 Eq
	if(var_43_bool == 0) goto Label_1021; // 0x3fa JumpB
	var_14_int = 14; // 0x3fb MovI
	return 0; // 0x3fc Return
	
Label_1021:
	var_44_string = "maria"; // 0x3fd PushS
	var_45_bool = var_15_string == var_44_string; // 0x3fe Eq
	if(var_45_bool == 0) goto Label_1026; // 0x3ff JumpB
	var_14_int = 15; // 0x400 MovI
	return 0; // 0x401 Return
	
Label_1026:
	var_46_string = "mark"; // 0x402 PushS
	var_47_bool = var_15_string == var_46_string; // 0x403 Eq
	if(var_47_bool == 0) goto Label_1031; // 0x404 JumpB
	var_14_int = 16; // 0x405 MovI
	return 0; // 0x406 Return
	
Label_1031:
	var_48_string = "mat"; // 0x407 PushS
	var_49_bool = var_15_string == var_48_string; // 0x408 Eq
	if(var_49_bool == 0) goto Label_1036; // 0x409 JumpB
	var_14_int = 17; // 0x40a MovI
	return 0; // 0x40b Return
	
Label_1036:
	var_50_string = "mishka"; // 0x40c PushS
	var_51_bool = var_15_string == var_50_string; // 0x40d Eq
	if(var_51_bool == 0) goto Label_1041; // 0x40e JumpB
	var_14_int = 18; // 0x40f MovI
	return 0; // 0x410 Return
	
Label_1041:
	var_52_string = "mladvlad"; // 0x411 PushS
	var_53_bool = var_15_string == var_52_string; // 0x412 Eq
	if(var_53_bool == 0) goto Label_1046; // 0x413 JumpB
	var_14_int = 19; // 0x414 MovI
	return 0; // 0x415 Return
	
Label_1046:
	var_54_string = "notkin"; // 0x416 PushS
	var_55_bool = var_15_string == var_54_string; // 0x417 Eq
	if(var_55_bool == 0) goto Label_1051; // 0x418 JumpB
	var_14_int = 20; // 0x419 MovI
	return 0; // 0x41a Return
	
Label_1051:
	var_56_string = "ospina"; // 0x41b PushS
	var_57_bool = var_15_string == var_56_string; // 0x41c Eq
	if(var_57_bool == 0) goto Label_1056; // 0x41d JumpB
	var_14_int = 21; // 0x41e MovI
	return 0; // 0x41f Return
	
Label_1056:
	var_58_string = "petr"; // 0x420 PushS
	var_59_bool = var_15_string == var_58_string; // 0x421 Eq
	if(var_59_bool == 0) goto Label_1061; // 0x422 JumpB
	var_14_int = 22; // 0x423 MovI
	return 0; // 0x424 Return
	
Label_1061:
	var_60_string = "rubin"; // 0x425 PushS
	var_61_bool = var_15_string == var_60_string; // 0x426 Eq
	if(var_61_bool == 0) goto Label_1066; // 0x427 JumpB
	var_14_int = 23; // 0x428 MovI
	return 0; // 0x429 Return
	
Label_1066:
	var_62_string = "spi4ka"; // 0x42a PushS
	var_63_bool = var_15_string == var_62_string; // 0x42b Eq
	if(var_63_bool == 0) goto Label_1071; // 0x42c JumpB
	var_14_int = 24; // 0x42d MovI
	return 0; // 0x42e Return
	
Label_1071:
	var_64_string = "starshina"; // 0x42f PushS
	var_65_bool = var_15_string == var_64_string; // 0x430 Eq
	if(var_65_bool == 0) goto Label_1076; // 0x431 JumpB
	var_14_int = 25; // 0x432 MovI
	return 0; // 0x433 Return
	
Label_1076:
	var_66_string = "viktor"; // 0x434 PushS
	var_67_bool = var_15_string == var_66_string; // 0x435 Eq
	if(var_67_bool == 0) goto Label_1081; // 0x436 JumpB
	var_14_int = 26; // 0x437 MovI
	return 0; // 0x438 Return
	
Label_1081:
	var_68_string = "wasted_woman"; // 0x439 PushS
	var_69_bool = var_15_string == var_68_string; // 0x43a Eq
	if(var_69_bool == 0) goto Label_1086; // 0x43b JumpB
	var_14_int = 27; // 0x43c MovI
	return 0; // 0x43d Return
	
Label_1086:
	var_70_string = "wasted_male"; // 0x43e PushS
	var_71_bool = var_15_string == var_70_string; // 0x43f Eq
	if(var_71_bool == 0) goto Label_1091; // 0x440 JumpB
	var_14_int = 28; // 0x441 MovI
	return 0; // 0x442 Return
	
Label_1091:
	var_72_string = "alkash"; // 0x443 PushS
	var_73_bool = var_15_string == var_72_string; // 0x444 Eq
	if(var_73_bool == 0) goto Label_1096; // 0x445 JumpB
	var_14_int = 29; // 0x446 MovI
	return 0; // 0x447 Return
	
Label_1096:
	var_74_string = "boy"; // 0x448 PushS
	var_75_bool = var_15_string == var_74_string; // 0x449 Eq
	if(var_75_bool == 0) goto Label_1101; // 0x44a JumpB
	var_14_int = 30; // 0x44b MovI
	return 0; // 0x44c Return
	
Label_1101:
	var_76_string = "girl"; // 0x44d PushS
	var_77_bool = var_15_string == var_76_string; // 0x44e Eq
	if(var_77_bool == 0) goto Label_1106; // 0x44f JumpB
	var_14_int = 31; // 0x450 MovI
	return 0; // 0x451 Return
	
Label_1106:
	var_78_string = "littleboy"; // 0x452 PushS
	var_79_bool = var_15_string == var_78_string; // 0x453 Eq
	if(var_79_bool == 0) goto Label_1111; // 0x454 JumpB
	var_14_int = 32; // 0x455 MovI
	return 0; // 0x456 Return
	
Label_1111:
	var_80_string = "littlegirl"; // 0x457 PushS
	var_81_bool = var_15_string == var_80_string; // 0x458 Eq
	if(var_81_bool == 0) goto Label_1116; // 0x459 JumpB
	var_14_int = 33; // 0x45a MovI
	return 0; // 0x45b Return
	
Label_1116:
	var_82_string = "butcher"; // 0x45c PushS
	var_83_bool = var_15_string == var_82_string; // 0x45d Eq
	if(var_83_bool == 0) goto Label_1121; // 0x45e JumpB
	var_14_int = 34; // 0x45f MovI
	return 0; // 0x460 Return
	
Label_1121:
	var_84_string = "dohodyaga"; // 0x461 PushS
	var_85_bool = var_15_string == var_84_string; // 0x462 Eq
	if(var_85_bool == 0) goto Label_1126; // 0x463 JumpB
	var_14_int = 35; // 0x464 MovI
	return 0; // 0x465 Return
	
Label_1126:
	var_86_string = "unosha"; // 0x466 PushS
	var_87_bool = var_15_string == var_86_string; // 0x467 Eq
	if(var_87_bool == 0) goto Label_1131; // 0x468 JumpB
	var_14_int = 36; // 0x469 MovI
	return 0; // 0x46a Return
	
Label_1131:
	var_88_string = "vaxxabit"; // 0x46b PushS
	var_89_bool = var_15_string == var_88_string; // 0x46c Eq
	if(var_89_bool == 0) goto Label_1136; // 0x46d JumpB
	var_14_int = 37; // 0x46e MovI
	return 0; // 0x46f Return
	
Label_1136:
	var_90_string = "vaxxabitka"; // 0x470 PushS
	var_91_bool = var_15_string == var_90_string; // 0x471 Eq
	if(var_91_bool == 0) goto Label_1141; // 0x472 JumpB
	var_14_int = 38; // 0x473 MovI
	return 0; // 0x474 Return
	
Label_1141:
	var_92_string = "woman"; // 0x475 PushS
	var_93_bool = var_15_string == var_92_string; // 0x476 Eq
	if(var_93_bool == 0) goto Label_1146; // 0x477 JumpB
	var_14_int = 39; // 0x478 MovI
	return 0; // 0x479 Return
	
Label_1146:
	var_94_string = "worker"; // 0x47a PushS
	var_95_bool = var_15_string == var_94_string; // 0x47b Eq
	if(var_95_bool == 0) goto Label_1151; // 0x47c JumpB
	var_14_int = 40; // 0x47d MovI
	return 0; // 0x47e Return
	
Label_1151:
	var_96_string = "whitemask"; // 0x47f PushS
	var_97_bool = var_15_string == var_96_string; // 0x480 Eq
	if(var_97_bool == 0) goto Label_1156; // 0x481 JumpB
	var_14_int = 42; // 0x482 MovI
	return 0; // 0x483 Return
	
Label_1156:
	var_98_string = "birdmask"; // 0x484 PushS
	var_99_bool = var_15_string == var_98_string; // 0x485 Eq
	if(var_99_bool == 0) goto Label_1161; // 0x486 JumpB
	var_14_int = 43; // 0x487 MovI
	return 0; // 0x488 Return
	
Label_1161:
	var_100_string = "birdmask"; // 0x489 PushS
	var_101_bool = var_15_string == var_100_string; // 0x48a Eq
	if(var_101_bool == 0) goto Label_1166; // 0x48b JumpB
	var_14_int = 44; // 0x48c MovI
	return 0; // 0x48d Return
	
Label_1166:
	var_102_string = "patrol"; // 0x48e PushS
	var_103_bool = var_15_string == var_102_string; // 0x48f Eq
	if(var_103_bool == 0) goto Label_1171; // 0x490 JumpB
	var_14_int = 46; // 0x491 MovI
	return 0; // 0x492 Return
	
Label_1171:
	var_104_string = "danko"; // 0x493 PushS
	var_105_bool = var_15_string == var_104_string; // 0x494 Eq
	if(var_105_bool == 0) goto Label_1176; // 0x495 JumpB
	var_14_int = 47; // 0x496 MovI
	return 0; // 0x497 Return
	
Label_1176:
	var_106_string = "alkash_d"; // 0x498 PushS
	var_107_bool = var_15_string == var_106_string; // 0x499 Eq
	if(var_107_bool == 0) goto Label_1181; // 0x49a JumpB
	var_14_int = 48; // 0x49b MovI
	return 0; // 0x49c Return
	
Label_1181:
	var_108_string = "boy_d"; // 0x49d PushS
	var_109_bool = var_15_string == var_108_string; // 0x49e Eq
	if(var_109_bool == 0) goto Label_1186; // 0x49f JumpB
	var_14_int = 49; // 0x4a0 MovI
	return 0; // 0x4a1 Return
	
Label_1186:
	var_110_string = "butcher_d"; // 0x4a2 PushS
	var_111_bool = var_15_string == var_110_string; // 0x4a3 Eq
	if(var_111_bool == 0) goto Label_1191; // 0x4a4 JumpB
	var_14_int = 50; // 0x4a5 MovI
	return 0; // 0x4a6 Return
	
Label_1191:
	var_112_string = "dohodyaga_d"; // 0x4a7 PushS
	var_113_bool = var_15_string == var_112_string; // 0x4a8 Eq
	if(var_113_bool == 0) goto Label_1196; // 0x4a9 JumpB
	var_14_int = 51; // 0x4aa MovI
	return 0; // 0x4ab Return
	
Label_1196:
	var_114_string = "girl_d"; // 0x4ac PushS
	var_115_bool = var_15_string == var_114_string; // 0x4ad Eq
	if(var_115_bool == 0) goto Label_1201; // 0x4ae JumpB
	var_14_int = 52; // 0x4af MovI
	return 0; // 0x4b0 Return
	
Label_1201:
	var_116_string = "littleboy_d"; // 0x4b1 PushS
	var_117_bool = var_15_string == var_116_string; // 0x4b2 Eq
	if(var_117_bool == 0) goto Label_1206; // 0x4b3 JumpB
	var_14_int = 53; // 0x4b4 MovI
	return 0; // 0x4b5 Return
	
Label_1206:
	var_118_string = "littlegirl_d"; // 0x4b6 PushS
	var_119_bool = var_15_string == var_118_string; // 0x4b7 Eq
	if(var_119_bool == 0) goto Label_1211; // 0x4b8 JumpB
	var_14_int = 54; // 0x4b9 MovI
	return 0; // 0x4ba Return
	
Label_1211:
	var_120_string = "unosha2"; // 0x4bb PushS
	var_121_bool = var_15_string == var_120_string; // 0x4bc Eq
	if(var_121_bool == 0) goto Label_1216; // 0x4bd JumpB
	var_14_int = 55; // 0x4be MovI
	return 0; // 0x4bf Return
	
Label_1216:
	var_122_string = "unosha_d"; // 0x4c0 PushS
	var_123_bool = var_15_string == var_122_string; // 0x4c1 Eq
	if(var_123_bool == 0) goto Label_1221; // 0x4c2 JumpB
	var_14_int = 56; // 0x4c3 MovI
	return 0; // 0x4c4 Return
	
Label_1221:
	var_124_string = "unosha2_d"; // 0x4c5 PushS
	var_125_bool = var_15_string == var_124_string; // 0x4c6 Eq
	if(var_125_bool == 0) goto Label_1226; // 0x4c7 JumpB
	var_14_int = 57; // 0x4c8 MovI
	return 0; // 0x4c9 Return
	
Label_1226:
	var_126_string = "vaxxabit_d"; // 0x4ca PushS
	var_127_bool = var_15_string == var_126_string; // 0x4cb Eq
	if(var_127_bool == 0) goto Label_1231; // 0x4cc JumpB
	var_14_int = 58; // 0x4cd MovI
	return 0; // 0x4ce Return
	
Label_1231:
	var_128_string = "vaxxabitka_d"; // 0x4cf PushS
	var_129_bool = var_15_string == var_128_string; // 0x4d0 Eq
	if(var_129_bool == 0) goto Label_1236; // 0x4d1 JumpB
	var_14_int = 59; // 0x4d2 MovI
	return 0; // 0x4d3 Return
	
Label_1236:
	var_130_string = "wasted_male_d"; // 0x4d4 PushS
	var_131_bool = var_15_string == var_130_string; // 0x4d5 Eq
	if(var_131_bool == 0) goto Label_1241; // 0x4d6 JumpB
	var_14_int = 60; // 0x4d7 MovI
	return 0; // 0x4d8 Return
	
Label_1241:
	var_132_string = "wasted_woman_d"; // 0x4d9 PushS
	var_133_bool = var_15_string == var_132_string; // 0x4da Eq
	if(var_133_bool == 0) goto Label_1246; // 0x4db JumpB
	var_14_int = 61; // 0x4dc MovI
	return 0; // 0x4dd Return
	
Label_1246:
	var_134_string = "woman_d"; // 0x4de PushS
	var_135_bool = var_15_string == var_134_string; // 0x4df Eq
	if(var_135_bool == 0) goto Label_1251; // 0x4e0 JumpB
	var_14_int = 62; // 0x4e1 MovI
	return 0; // 0x4e2 Return
	
Label_1251:
	var_136_string = "worker2"; // 0x4e3 PushS
	var_137_bool = var_15_string == var_136_string; // 0x4e4 Eq
	if(var_137_bool == 0) goto Label_1256; // 0x4e5 JumpB
	var_14_int = 63; // 0x4e6 MovI
	return 0; // 0x4e7 Return
	
Label_1256:
	var_138_string = "worker_d"; // 0x4e8 PushS
	var_139_bool = var_15_string == var_138_string; // 0x4e9 Eq
	if(var_139_bool == 0) goto Label_1261; // 0x4ea JumpB
	var_14_int = 64; // 0x4eb MovI
	return 0; // 0x4ec Return
	
Label_1261:
	var_140_string = "worker2_d"; // 0x4ed PushS
	var_141_bool = var_15_string == var_140_string; // 0x4ee Eq
	if(var_141_bool == 0) goto Label_1266; // 0x4ef JumpB
	var_14_int = 65; // 0x4f0 MovI
	return 0; // 0x4f1 Return
	
Label_1266:
	var_142_string = "burah"; // 0x4f2 PushS
	var_143_bool = var_15_string == var_142_string; // 0x4f3 Eq
	if(var_143_bool == 0) goto Label_1271; // 0x4f4 JumpB
	var_14_int = 66; // 0x4f5 MovI
	return 0; // 0x4f6 Return
	
Label_1271:
	var_144_string = "gorbun_daughter"; // 0x4f7 PushS
	var_145_bool = var_15_string == var_144_string; // 0x4f8 Eq
	if(var_145_bool == 0) goto Label_1276; // 0x4f9 JumpB
	var_14_int = 67; // 0x4fa MovI
	return 0; // 0x4fb Return
	
Label_1276:
	var_146_string = "gorbun"; // 0x4fc PushS
	var_147_bool = var_15_string == var_146_string; // 0x4fd Eq
	if(var_147_bool == 0) goto Label_1281; // 0x4fe JumpB
	var_14_int = 68; // 0x4ff MovI
	return 0; // 0x500 Return
	
Label_1281:
	var_148_string = "albinos"; // 0x501 PushS
	var_149_bool = var_15_string == var_148_string; // 0x502 Eq
	if(var_149_bool == 0) goto Label_1286; // 0x503 JumpB
	var_14_int = 69; // 0x504 MovI
	return 0; // 0x505 Return
	
Label_1286:
	var_150_string = "aglaja"; // 0x506 PushS
	var_151_bool = var_15_string == var_150_string; // 0x507 Eq
	if(var_151_bool == 0) goto Label_1291; // 0x508 JumpB
	var_14_int = 70; // 0x509 MovI
	return 0; // 0x50a Return
	
Label_1291:
	var_152_string = "nude"; // 0x50b PushS
	var_153_bool = var_15_string == var_152_string; // 0x50c Eq
	if(var_153_bool == 0) goto Label_1296; // 0x50d JumpB
	var_14_int = 71; // 0x50e MovI
	return 0; // 0x50f Return
	
Label_1296:
	var_154_string = "block"; // 0x510 PushS
	var_155_bool = var_15_string == var_154_string; // 0x511 Eq
	if(var_155_bool == 0) goto Label_1301; // 0x512 JumpB
	var_14_int = 72; // 0x513 MovI
	return 0; // 0x514 Return
	
Label_1301:
	var_156_string = "officer"; // 0x515 PushS
	var_157_bool = var_15_string == var_156_string; // 0x516 Eq
	if(var_157_bool == 0) goto Label_1306; // 0x517 JumpB
	var_14_int = 73; // 0x518 MovI
	return 0; // 0x519 Return
	
Label_1306:
	var_14_int = -1; // 0x51a MovI
	return 0; // 0x51b Return
}


func_760(var_245_int, var_246_int)
{
	var_247_int = 0; var_248_int = 0; // 0x2f8 PushV
	get(var_248_int, var_246_int); // 0x2f9 TObjFunc
	var_245_int = var_248_int; // 0x2fb Mov
	return 2; // 0x2fc Return
}


func_765(var_227_string, var_228_int)
{
	var_229_int = 0; var_230_int = 0; // 0x2fd PushV
	get(var_230_int, var_228_int); // 0x2fe TObjFunc
	var_231_string = "vol_"; // 0x300 PushS
	var_227_string = var_231_string + var_230_int; // 0x301 Add2
	return 2; // 0x302 Return
}


