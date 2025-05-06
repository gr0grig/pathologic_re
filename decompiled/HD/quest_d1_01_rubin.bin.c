task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_cvector, var_8_bool)
{
	var_9_int = 1; // 0xc0 PushI
	if(var_9_int == 0) goto Label_629; // 0xc1 JumpB
	func_1234(); // 0xc3 NEW_2
	var_11_int = 10088; // 0xc5 PushI
	var_12_bool = var_8_bool == var_11_int; // 0xc6 Eq
	if(var_12_bool == 0) goto Label_205; // 0xc7 JumpB
	var_13_object = Obj(); var_14_object = Obj(); // 0xc8 PushV
	var_13_object = var_1_object; // 0xc9 MovT
	var_14_object = var_0_object; // 0xca MovT
	func_1295(); // 0xcb NEW_2
	
Label_205:
	var_40_int = 34358; // 0xcd PushI
	var_41_bool = var_8_bool == var_40_int; // 0xce Eq
	if(var_41_bool == 0) goto Label_213; // 0xcf JumpB
	var_42_object = Obj(); var_43_object = Obj(); // 0xd0 PushV
	var_42_object = var_1_object; // 0xd1 MovT
	var_43_object = var_0_object; // 0xd2 MovT
	func_1295(); // 0xd3 NEW_2
	
Label_213:
	var_44_int = 10081; // 0xd5 PushI
	var_45_bool = var_8_bool == var_44_int; // 0xd6 Eq
	if(var_45_bool == 0) goto Label_221; // 0xd7 JumpB
	var_46_object = Obj(); var_47_object = Obj(); // 0xd8 PushV
	var_46_object = var_1_object; // 0xd9 MovT
	var_47_object = var_0_object; // 0xda MovT
	func_1295(); // 0xdb NEW_2
	
Label_221:
	var_48_int = 10054; // 0xdd PushI
	var_49_bool = var_7_cvector == var_48_int; // 0xde Eq
	if(var_49_bool == 0) goto Label_274; // 0xdf JumpB
	var_50_bool = 0; var_51_object = Obj(); // 0xe0 PushV
	var_51_object = var_1_object; // 0xe1 MovT
	func_1304(var_51_object); // 0xe2 NEW_2
	if(var_50_bool == 0) goto Label_254; // 0xe4 JumpB
	var_58_string = ""; // 0xe5 PushV
	var_58_string = "Neutral"; // 0xe6 MovS
	func_169(var_8_bool, var_58_string); // 0xe7 NEW_2
	var_75_int = 509170; // 0xe9 PushI
	SetMessage(var_75_int); // 0xea TObjFunc
	ClearReplies(); // 0xec TObjFunc
	var_76_int = 509171; // 0xee PushI
	var_77_int = 10056; // 0xef PushI
	var_78_int = 10055; // 0xf0 PushI
	AddReply(var_76_int, var_77_int, var_78_int); // 0xf1 TObjFunc
	var_79_int = 509175; // 0xf3 PushI
	var_80_int = 10062; // 0xf4 PushI
	var_81_int = 10061; // 0xf5 PushI
	AddReply(var_79_int, var_80_int, var_81_int); // 0xf6 TObjFunc
	var_82_int = 509187; // 0xf8 PushI
	var_83_int = 10077; // 0xf9 PushI
	var_84_int = 10076; // 0xfa PushI
	AddReply(var_82_int, var_83_int, var_84_int); // 0xfb TObjFunc
	return 0; // 0xfd Return
	
Label_254:
	var_85_string = ""; // 0xfe PushV
	var_85_string = "Warning"; // 0xff MovS
	func_169(var_8_bool, var_85_string); // 0x100 NEW_2
	var_86_int = 531961; // 0x102 PushI
	SetMessage(var_86_int); // 0x103 TObjFunc
	ClearReplies(); // 0x105 TObjFunc
	var_87_int = 532856; // 0x107 PushI
	var_88_int = -1; // 0x108 PushI
	var_89_int = 34341; // 0x109 PushI
	AddReply(var_87_int, var_88_int, var_89_int); // 0x10a TObjFunc
	var_90_int = 531962; // 0x10c PushI
	var_91_int = -1; // 0x10d PushI
	var_92_int = 33366; // 0x10e PushI
	AddReply(var_90_int, var_91_int, var_92_int); // 0x10f TObjFunc
	return 0; // 0x111 Return
	
Label_274:
	var_93_int = 10077; // 0x112 PushI
	var_94_bool = var_7_cvector == var_93_int; // 0x113 Eq
	if(var_94_bool == 0) goto Label_297; // 0x114 JumpB
	var_95_string = ""; // 0x115 PushV
	var_95_string = "Warning"; // 0x116 MovS
	func_169(var_8_bool, var_95_string); // 0x117 NEW_2
	var_96_int = 509188; // 0x119 PushI
	SetMessage(var_96_int); // 0x11a TObjFunc
	ClearReplies(); // 0x11c TObjFunc
	var_97_int = 509190; // 0x11e PushI
	var_98_int = 10080; // 0x11f PushI
	var_99_int = 10079; // 0x120 PushI
	AddReply(var_97_int, var_98_int, var_99_int); // 0x121 TObjFunc
	var_100_int = 509189; // 0x123 PushI
	var_101_int = -1; // 0x124 PushI
	var_102_int = 10078; // 0x125 PushI
	AddReply(var_100_int, var_101_int, var_102_int); // 0x126 TObjFunc
	return 0; // 0x128 Return
	
Label_297:
	var_103_int = 10080; // 0x129 PushI
	var_104_bool = var_7_cvector == var_103_int; // 0x12a Eq
	if(var_104_bool == 0) goto Label_320; // 0x12b JumpB
	var_105_string = ""; // 0x12c PushV
	var_105_string = "Warning"; // 0x12d MovS
	func_169(var_8_bool, var_105_string); // 0x12e NEW_2
	var_106_int = 509191; // 0x130 PushI
	SetMessage(var_106_int); // 0x131 TObjFunc
	ClearReplies(); // 0x133 TObjFunc
	var_107_int = 509193; // 0x135 PushI
	var_108_int = 10083; // 0x136 PushI
	var_109_int = 10082; // 0x137 PushI
	AddReply(var_107_int, var_108_int, var_109_int); // 0x138 TObjFunc
	var_110_int = 509192; // 0x13a PushI
	var_111_int = -1; // 0x13b PushI
	var_112_int = 10081; // 0x13c PushI
	AddReply(var_110_int, var_111_int, var_112_int); // 0x13d TObjFunc
	return 0; // 0x13f Return
	
Label_320:
	var_113_int = 10083; // 0x140 PushI
	var_114_bool = var_7_cvector == var_113_int; // 0x141 Eq
	if(var_114_bool == 0) goto Label_343; // 0x142 JumpB
	var_115_string = ""; // 0x143 PushV
	var_115_string = "Warning"; // 0x144 MovS
	func_169(var_8_bool, var_115_string); // 0x145 NEW_2
	var_116_int = 509194; // 0x147 PushI
	SetMessage(var_116_int); // 0x148 TObjFunc
	ClearReplies(); // 0x14a TObjFunc
	var_117_int = 509195; // 0x14c PushI
	var_118_int = 10085; // 0x14d PushI
	var_119_int = 10084; // 0x14e PushI
	AddReply(var_117_int, var_118_int, var_119_int); // 0x14f TObjFunc
	var_120_int = 509202; // 0x151 PushI
	var_121_int = 10085; // 0x152 PushI
	var_122_int = 10093; // 0x153 PushI
	AddReply(var_120_int, var_121_int, var_122_int); // 0x154 TObjFunc
	return 0; // 0x156 Return
	
Label_343:
	var_123_int = 10085; // 0x157 PushI
	var_124_bool = var_7_cvector == var_123_int; // 0x158 Eq
	if(var_124_bool == 0) goto Label_371; // 0x159 JumpB
	var_125_string = ""; // 0x15a PushV
	var_125_string = "Warning"; // 0x15b MovS
	func_169(var_8_bool, var_125_string); // 0x15c NEW_2
	var_126_int = 509196; // 0x15e PushI
	SetMessage(var_126_int); // 0x15f TObjFunc
	ClearReplies(); // 0x161 TObjFunc
	var_127_int = 509197; // 0x163 PushI
	var_128_int = 10087; // 0x164 PushI
	var_129_int = 10086; // 0x165 PushI
	AddReply(var_127_int, var_128_int, var_129_int); // 0x166 TObjFunc
	var_130_int = 509200; // 0x168 PushI
	var_131_int = 34347; // 0x169 PushI
	var_132_int = 10089; // 0x16a PushI
	AddReply(var_130_int, var_131_int, var_132_int); // 0x16b TObjFunc
	var_133_int = 509201; // 0x16d PushI
	var_134_int = 34339; // 0x16e PushI
	var_135_int = 10091; // 0x16f PushI
	AddReply(var_133_int, var_134_int, var_135_int); // 0x170 TObjFunc
	return 0; // 0x172 Return
	
Label_371:
	var_136_int = 34339; // 0x173 PushI
	var_137_bool = var_7_cvector == var_136_int; // 0x174 Eq
	if(var_137_bool == 0) goto Label_389; // 0x175 JumpB
	var_138_string = ""; // 0x176 PushV
	var_138_string = "Rage"; // 0x177 MovS
	func_169(var_8_bool, var_138_string); // 0x178 NEW_2
	var_139_int = 532854; // 0x17a PushI
	SetMessage(var_139_int); // 0x17b TObjFunc
	ClearReplies(); // 0x17d TObjFunc
	var_140_int = 532855; // 0x17f PushI
	var_141_int = 10087; // 0x180 PushI
	var_142_int = 34340; // 0x181 PushI
	AddReply(var_140_int, var_141_int, var_142_int); // 0x182 TObjFunc
	return 0; // 0x184 Return
	
Label_389:
	var_143_int = 34347; // 0x185 PushI
	var_144_bool = var_7_cvector == var_143_int; // 0x186 Eq
	if(var_144_bool == 0) goto Label_412; // 0x187 JumpB
	var_145_string = ""; // 0x188 PushV
	var_145_string = "Confusion"; // 0x189 MovS
	func_169(var_8_bool, var_145_string); // 0x18a NEW_2
	var_146_int = 532861; // 0x18c PushI
	SetMessage(var_146_int); // 0x18d TObjFunc
	ClearReplies(); // 0x18f TObjFunc
	var_147_int = 532862; // 0x191 PushI
	var_148_int = 34349; // 0x192 PushI
	var_149_int = 34348; // 0x193 PushI
	AddReply(var_147_int, var_148_int, var_149_int); // 0x194 TObjFunc
	var_150_int = 532865; // 0x196 PushI
	var_151_int = 34352; // 0x197 PushI
	var_152_int = 34351; // 0x198 PushI
	AddReply(var_150_int, var_151_int, var_152_int); // 0x199 TObjFunc
	return 0; // 0x19b Return
	
Label_412:
	var_153_int = 34352; // 0x19c PushI
	var_154_bool = var_7_cvector == var_153_int; // 0x19d Eq
	if(var_154_bool == 0) goto Label_430; // 0x19e JumpB
	var_155_string = ""; // 0x19f PushV
	var_155_string = "Confusion"; // 0x1a0 MovS
	func_169(var_8_bool, var_155_string); // 0x1a1 NEW_2
	var_156_int = 532866; // 0x1a3 PushI
	SetMessage(var_156_int); // 0x1a4 TObjFunc
	ClearReplies(); // 0x1a6 TObjFunc
	var_157_int = 532867; // 0x1a8 PushI
	var_158_int = 34354; // 0x1a9 PushI
	var_159_int = 34353; // 0x1aa PushI
	AddReply(var_157_int, var_158_int, var_159_int); // 0x1ab TObjFunc
	return 0; // 0x1ad Return
	
Label_430:
	var_160_int = 34349; // 0x1ae PushI
	var_161_bool = var_7_cvector == var_160_int; // 0x1af Eq
	if(var_161_bool == 0) goto Label_448; // 0x1b0 JumpB
	var_162_string = ""; // 0x1b1 PushV
	var_162_string = "Warning"; // 0x1b2 MovS
	func_169(var_8_bool, var_162_string); // 0x1b3 NEW_2
	var_163_int = 532863; // 0x1b5 PushI
	SetMessage(var_163_int); // 0x1b6 TObjFunc
	ClearReplies(); // 0x1b8 TObjFunc
	var_164_int = 532864; // 0x1ba PushI
	var_165_int = 34354; // 0x1bb PushI
	var_166_int = 34350; // 0x1bc PushI
	AddReply(var_164_int, var_165_int, var_166_int); // 0x1bd TObjFunc
	return 0; // 0x1bf Return
	
Label_448:
	var_167_int = 34354; // 0x1c0 PushI
	var_168_bool = var_7_cvector == var_167_int; // 0x1c1 Eq
	if(var_168_bool == 0) goto Label_466; // 0x1c2 JumpB
	var_169_string = ""; // 0x1c3 PushV
	var_169_string = "Warning"; // 0x1c4 MovS
	func_169(var_8_bool, var_169_string); // 0x1c5 NEW_2
	var_170_int = 532868; // 0x1c7 PushI
	SetMessage(var_170_int); // 0x1c8 TObjFunc
	ClearReplies(); // 0x1ca TObjFunc
	var_171_int = 532869; // 0x1cc PushI
	var_172_int = 10087; // 0x1cd PushI
	var_173_int = 34356; // 0x1ce PushI
	AddReply(var_171_int, var_172_int, var_173_int); // 0x1cf TObjFunc
	return 0; // 0x1d1 Return
	
Label_466:
	var_174_int = 10087; // 0x1d2 PushI
	var_175_bool = var_7_cvector == var_174_int; // 0x1d3 Eq
	if(var_175_bool == 0) goto Label_489; // 0x1d4 JumpB
	var_176_string = ""; // 0x1d5 PushV
	var_176_string = "Rage"; // 0x1d6 MovS
	func_169(var_8_bool, var_176_string); // 0x1d7 NEW_2
	var_177_int = 509198; // 0x1d9 PushI
	SetMessage(var_177_int); // 0x1da TObjFunc
	ClearReplies(); // 0x1dc TObjFunc
	var_178_int = 509199; // 0x1de PushI
	var_179_int = -1; // 0x1df PushI
	var_180_int = 10088; // 0x1e0 PushI
	AddReply(var_178_int, var_179_int, var_180_int); // 0x1e1 TObjFunc
	var_181_int = 532870; // 0x1e3 PushI
	var_182_int = -1; // 0x1e4 PushI
	var_183_int = 34358; // 0x1e5 PushI
	AddReply(var_181_int, var_182_int, var_183_int); // 0x1e6 TObjFunc
	return 0; // 0x1e8 Return
	
Label_489:
	var_184_int = 10062; // 0x1e9 PushI
	var_185_bool = var_7_cvector == var_184_int; // 0x1ea Eq
	if(var_185_bool == 0) goto Label_507; // 0x1eb JumpB
	var_186_string = ""; // 0x1ec PushV
	var_186_string = "Neutral"; // 0x1ed MovS
	func_169(var_8_bool, var_186_string); // 0x1ee NEW_2
	var_187_int = 509176; // 0x1f0 PushI
	SetMessage(var_187_int); // 0x1f1 TObjFunc
	ClearReplies(); // 0x1f3 TObjFunc
	var_188_int = 509177; // 0x1f5 PushI
	var_189_int = 10064; // 0x1f6 PushI
	var_190_int = 10063; // 0x1f7 PushI
	AddReply(var_188_int, var_189_int, var_190_int); // 0x1f8 TObjFunc
	return 0; // 0x1fa Return
	
Label_507:
	var_191_int = 10064; // 0x1fb PushI
	var_192_bool = var_7_cvector == var_191_int; // 0x1fc Eq
	if(var_192_bool == 0) goto Label_530; // 0x1fd JumpB
	var_193_string = ""; // 0x1fe PushV
	var_193_string = "Confusion"; // 0x1ff MovS
	func_169(var_8_bool, var_193_string); // 0x200 NEW_2
	var_194_int = 509178; // 0x202 PushI
	SetMessage(var_194_int); // 0x203 TObjFunc
	ClearReplies(); // 0x205 TObjFunc
	var_195_int = 509179; // 0x207 PushI
	var_196_int = 10066; // 0x208 PushI
	var_197_int = 10065; // 0x209 PushI
	AddReply(var_195_int, var_196_int, var_197_int); // 0x20a TObjFunc
	var_198_int = 509185; // 0x20c PushI
	var_199_int = 10066; // 0x20d PushI
	var_200_int = 10073; // 0x20e PushI
	AddReply(var_198_int, var_199_int, var_200_int); // 0x20f TObjFunc
	return 0; // 0x211 Return
	
Label_530:
	var_201_int = 10066; // 0x212 PushI
	var_202_bool = var_7_cvector == var_201_int; // 0x213 Eq
	if(var_202_bool == 0) goto Label_553; // 0x214 JumpB
	var_203_string = ""; // 0x215 PushV
	var_203_string = "Confusion"; // 0x216 MovS
	func_169(var_8_bool, var_203_string); // 0x217 NEW_2
	var_204_int = 509180; // 0x219 PushI
	SetMessage(var_204_int); // 0x21a TObjFunc
	ClearReplies(); // 0x21c TObjFunc
	var_205_int = 509181; // 0x21e PushI
	var_206_int = 10068; // 0x21f PushI
	var_207_int = 10067; // 0x220 PushI
	AddReply(var_205_int, var_206_int, var_207_int); // 0x221 TObjFunc
	var_208_int = 509184; // 0x223 PushI
	var_209_int = 10068; // 0x224 PushI
	var_210_int = 10071; // 0x225 PushI
	AddReply(var_208_int, var_209_int, var_210_int); // 0x226 TObjFunc
	return 0; // 0x228 Return
	
Label_553:
	var_211_int = 10068; // 0x229 PushI
	var_212_bool = var_7_cvector == var_211_int; // 0x22a Eq
	if(var_212_bool == 0) goto Label_571; // 0x22b JumpB
	var_213_string = ""; // 0x22c PushV
	var_213_string = "Confusion"; // 0x22d MovS
	func_169(var_8_bool, var_213_string); // 0x22e NEW_2
	var_214_int = 509182; // 0x230 PushI
	SetMessage(var_214_int); // 0x231 TObjFunc
	ClearReplies(); // 0x233 TObjFunc
	var_215_int = 509183; // 0x235 PushI
	var_216_int = 10085; // 0x236 PushI
	var_217_int = 10069; // 0x237 PushI
	AddReply(var_215_int, var_216_int, var_217_int); // 0x238 TObjFunc
	return 0; // 0x23a Return
	
Label_571:
	var_218_int = 10056; // 0x23b PushI
	var_219_bool = var_7_cvector == var_218_int; // 0x23c Eq
	if(var_219_bool == 0) goto Label_594; // 0x23d JumpB
	var_220_string = ""; // 0x23e PushV
	var_220_string = "Neutral"; // 0x23f MovS
	func_169(var_8_bool, var_220_string); // 0x240 NEW_2
	var_221_int = 509172; // 0x242 PushI
	SetMessage(var_221_int); // 0x243 TObjFunc
	ClearReplies(); // 0x245 TObjFunc
	var_222_int = 509173; // 0x247 PushI
	var_223_int = 34342; // 0x248 PushI
	var_224_int = 10057; // 0x249 PushI
	AddReply(var_222_int, var_223_int, var_224_int); // 0x24a TObjFunc
	var_225_int = 509174; // 0x24c PushI
	var_226_int = 34342; // 0x24d PushI
	var_227_int = 10059; // 0x24e PushI
	AddReply(var_225_int, var_226_int, var_227_int); // 0x24f TObjFunc
	return 0; // 0x251 Return
	
Label_594:
	var_228_int = 34342; // 0x252 PushI
	var_229_bool = var_7_cvector == var_228_int; // 0x253 Eq
	if(var_229_bool == 0) goto Label_617; // 0x254 JumpB
	var_230_string = ""; // 0x255 PushV
	var_230_string = "Warning"; // 0x256 MovS
	func_169(var_8_bool, var_230_string); // 0x257 NEW_2
	var_231_int = 532857; // 0x259 PushI
	SetMessage(var_231_int); // 0x25a TObjFunc
	ClearReplies(); // 0x25c TObjFunc
	var_232_int = 532858; // 0x25e PushI
	var_233_int = 10064; // 0x25f PushI
	var_234_int = 34343; // 0x260 PushI
	AddReply(var_232_int, var_233_int, var_234_int); // 0x261 TObjFunc
	var_235_int = 532860; // 0x263 PushI
	var_236_int = 10064; // 0x264 PushI
	var_237_int = 34345; // 0x265 PushI
	AddReply(var_235_int, var_236_int, var_237_int); // 0x266 TObjFunc
	return 0; // 0x268 Return
	
Label_617:
	var_3_string = 1; // 0x269 TMovB
	var_238_bool = 0; // 0x26a PushV
	func_1395(var_238_bool); // 0x26b NEW_2
	if(var_238_bool == 0) goto Label_625; // 0x26d JumpB
	lshStopAnimation(); // 0x26e Func
	goto Label_627; // 0x270 Jump
	
Label_627:
	return 0; // 0x273 Return
	
Label_625:
	StopAnimation(); // 0x271 Func
	
Label_629:
	return 0; // 0x275 Return
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_string)
{
	var_8_bool = 0; var_9_bool = 0; // 0x282 PushV
	var_10_string = "cleanup"; // 0x283 PushS
	var_11_bool = var_7_string == var_10_string; // 0x284 Eq
	if(var_11_bool == 0) goto Label_657; // 0x285 JumpB
	var_1_object = 1; // 0x286 TMovB
	IsLoaded(var_9_bool); // 0x287 Func
	var_12_bool = var_9_bool == 0; // 0x289 Not
	if(var_12_bool == 0) goto Label_656; // 0x28a JumpB
	var_13_object = Obj(); // 0x28b PushV
	func_1241(var_13_object); // 0x28c NEW_2
	RemoveActor(var_13_object); // 0x28e Func
	
Label_656:
	goto Label_661; // 0x290 Jump
	
Label_661:
	return 2; // 0x295 Return
	
Label_657:
	var_16_string = "restore"; // 0x291 PushS
	var_17_bool = var_7_string == var_16_string; // 0x292 Eq
	if(var_17_bool == 0) goto Label_661; // 0x293 JumpB
	var_1_object = 0; // 0x294 TMovB
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	var_7_object = var_1_object; // 0x296 PushT
	if(var_7_object == 0) goto Label_671; // 0x297 JumpB
	var_8_object = Obj(); // 0x298 PushV
	func_1241(var_8_object); // 0x299 NEW_2
	RemoveActor(var_8_object); // 0x29b Func
	Hold(); // 0x29d Func
	
Label_671:
	func_786(); // 0x2a0 NEW_2
	return 0; // 0x2a2 Return
}


task_2_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	func_801(); // 0x2a4 NEW_2
	return 0; // 0x2a6 Return
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_int)
{
	var_8_int = 10; // 0x2ed PushI
	var_9_bool = var_7_int == var_8_int; // 0x2ee Eq
	if(var_9_bool == 0) goto Label_785; // 0x2ef JumpB
	func_744(); // 0x2f1 NEW_2
	var_11_bool = 0; // 0x2f3 PushV
	var_11_bool = 0; // 0x2f4 MovB
	var_12_bool = 0; // 0x2f5 PushV
	func_958(var_12_bool); // 0x2f6 NEW_2
	if(var_12_bool == 0) goto Label_766; // 0x2f8 JumpB
	var_15_bool = 0; // 0x2f9 PushV
	func_713(var_15_bool); // 0x2fa NEW_2
	if(var_15_bool == 0) goto Label_766; // 0x2fc JumpB
	var_11_bool = 1; // 0x2fd MovB
	
Label_766:
	if(var_11_bool == 0) goto Label_779; // 0x2fe JumpB
	var_32_bool = 0; // 0x2ff PushV
	func_693(var_32_bool); // 0x300 NEW_2
	if(var_32_bool == 0) goto Label_778; // 0x302 JumpB
	var_51_bool = 0; var_52_object = Obj(); // 0x303 PushV
	var_53_object = Obj(); // 0x304 PushV
	func_1241(var_53_object); // 0x305 NEW_2
	var_52_object = var_53_object; // 0x306 Mov
	func_1108(var_52_object); // 0x308 NEW_2
	
Label_778:
	goto Label_785; // 0x30a Jump
	
Label_785:
	return 0; // 0x311 Return
	
Label_779:
	func_708(var_7_int); // 0x30c NEW_2
	func_735(); // 0x30f NEW_2
}


task_2_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_bool)
{
	var_8_bool = var_7_bool; // 0x32f Push
	if(var_8_bool == 0) goto Label_821; // 0x330 JumpB
	func_735(); // 0x332 NEW_2
	goto Label_825; // 0x334 Jump
	
Label_825:
	return 0; // 0x339 Return
	
Label_821:
	var_14_string = ""; // 0x335 PushV
	var_14_string = "Neutral"; // 0x336 MovS
	func_1188(var_14_string); // 0x337 NEW_2
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_object)
{
	var_8_bool = 0; var_9_bool = 0; // 0x33a PushV
	IsOverrideActive(var_9_bool); // 0x33b Func
	var_10_bool = var_9_bool == 0; // 0x33d Not
	if(var_10_bool == 0) goto Label_854; // 0x33e JumpB
	EventDisable(0); // 0x33f EventDisable
	func_926(); // 0x341 NEW_2
	var_11_bool = 0; var_12_object = Obj(); // 0x343 PushV
	var_12_object = var_7_object; // 0x344 Mov
	func_949(var_12_object); // 0x345 NEW_2
	EventEnable(0); // 0x347 EventEnable
	var_25_object = Obj(); // 0x348 PushV
	var_25_object = var_7_object; // 0x349 Mov
	func_630(var_25_object); // 0x34a NEW_2
	var_270_string = ""; // 0x34c PushV
	var_270_string = "Neutral"; // 0x34d MovS
	func_1188(var_270_string); // 0x34e NEW_2
	func_744(); // 0x351 NEW_2
	func_735(); // 0x354 NEW_2
	
Label_854:
	return 2; // 0x356 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	func_679(var_6_bool); // 0x27f NEW_2
	return 0; // 0x281 Return
}


func_0(var_0_object, var_26_int, var_27_object)
{
	var_29_object = Obj(); var_30_bool = 0; var_31_int = 0; var_32_bool = 0; var_33_object = Obj(); var_34_bool = 0; var_35_int = 0; var_36_bool = 0; // 0x0 PushV
	var_0_object = var_27_object; // 0x1 TMov
	var_37_bool = 0; var_38_object = Obj(); var_39_float = 0; // 0x2 PushV
	var_38_object = var_27_object; // 0x3 Mov
	var_39_float = 70.0; // 0x4 MovF
	func_963(var_38_object, var_39_float); // 0x5 NEW_2
	var_84_bool = var_37_bool == 0; // 0x7 Not
	if(var_84_bool == 0) goto Label_11; // 0x8 JumpB
	var_26_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_33_object); // 0xb Func
	var_85_int = 0; // 0xd PushV
	func_1389(var_85_int); // 0xe NEW_2
	SetNPCName(var_85_int); // 0x10 ObjFunc
	var_86_int = 0; // 0x12 PushV
	func_1387(var_86_int); // 0x13 NEW_2
	SetNPCDescription(var_86_int); // 0x15 ObjFunc
	var_87_string = ""; // 0x17 PushV
	func_1391(var_87_string); // 0x18 NEW_2
	SetPhoto(var_87_string); // 0x1a ObjFunc
	var_88_string = ""; // 0x1c PushV
	func_1393(var_88_string); // 0x1d NEW_2
	SetPhoto2(var_88_string); // 0x1f ObjFunc
	var_89_int = 0; // 0x21 PushV
	func_1370(var_89_int); // 0x22 NEW_2
	SetPlayerName(var_89_int); // 0x24 ObjFunc
	var_35_int = -1; // 0x26 MovI
	IsOverrideActive(var_34_bool); // 0x27 Func
	var_97_bool = var_34_bool; // 0x29 Push
	if(var_97_bool == 0) goto Label_45; // 0x2a JumpB
	var_26_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_33_object); // 0x2d Func
	var_98_bool = 0; var_99_object = Obj(); // 0x2f PushV
	var_100_object = Obj(); // 0x30 PushV
	func_1241(var_100_object); // 0x31 NEW_2
	var_99_object = var_100_object; // 0x32 Mov
	func_1050(var_98_bool, var_99_object); // 0x34 NEW_2
	var_193_object = Obj(); var_194_object = Obj(); // 0x36 PushV
	var_193_object = var_27_object; // 0x37 Mov
	var_194_object = var_33_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_195_object, var_196_object, var_197_string, var_198_bool, var_193_object, var_194_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	IsDialogEnd(var_36_bool); // 0x3d ObjFunc
	
Label_63:
	var_261_bool = var_36_bool == 0; // 0x3f Not
	if(var_261_bool == 0) goto Label_70; // 0x40 JumpB
	sync(); // 0x41 Func
	IsDialogEnd(var_36_bool); // 0x43 ObjFunc
	goto Label_63; // 0x45 Jump
	
Label_70:
	var_262_object = Obj(); // 0x46 PushV
	var_262_object = var_27_object; // 0x47 Mov
	func_1032(); // 0x48 NEW_2
	StopDialog(var_33_object); // 0x4a Func
	GetReturnValue(var_35_int); // 0x4c ObjFunc
	var_26_int = var_35_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_1032()
{
	var_263_bool = 0; var_264_bool = 0; // 0x408 PushV
	var_265_bool = 1; // 0x409 PushB
	CameraSwitchToNormal(var_265_bool); // 0x40a Func
	var_266_bool = 0; // 0x40c PushV
	func_1395(var_266_bool); // 0x40d NEW_2
	if(var_266_bool == 0) goto Label_1041; // 0x40f JumpB
	goto Label_1049; // 0x410 Jump
	
Label_1049:
	return 2; // 0x419 Return
	
Label_1041:
	var_267_string = "head"; // 0x411 PushS
	HasAnimationTrack(var_264_bool, var_267_string); // 0x412 Func
	var_268_bool = var_264_bool; // 0x414 Push
	if(var_268_bool == 0) goto Label_1049; // 0x415 JumpB
	var_269_string = "head"; // 0x416 PushS
	UnlookAsync(var_269_string); // 0x417 Func
}


func_1295()
{
	var_15_string = "d1q01"; // 0x510 PushS
	var_16_int = 8; // 0x511 PushI
	SetVariable(var_15_string, var_16_int); // 0x512 Func
	func_1316(); // 0x515 NEW_2
	return 0; // 0x517 Return
}


func_786()
{
	func_926(); // 0x313 NEW_2
	func_744(); // 0x316 NEW_2
	lshStopSpeech(); // 0x318 Func
	lshStopAnimation(); // 0x31a Func
	StopAsync(); // 0x31c Func
	Hold(); // 0x31e Func
	return 0; // 0x320 Return
}


func_1304(var_200_bool)
{
	var_202_int = 0; var_203_string = ""; // 0x519 PushV
	var_203_string = "d1q01"; // 0x51a MovS
	func_1257(var_202_int, var_203_string); // 0x51b NEW_2
	var_206_int = 7; // 0x51d PushI
	var_207_bool = var_202_int == var_206_int; // 0x51e Eq
	if(var_207_bool == 0) goto Label_1314; // 0x51f JumpB
	var_200_bool = 1; // 0x520 MovB
	return 0; // 0x521 Return
	
Label_1314:
	var_200_bool = 0; // 0x522 MovB
	return 0; // 0x523 Return
}


func_1050(var_98_bool, var_99_object)
{
	var_103_int = 0; var_104_int = 0; var_105_int = 0; var_106_int = 0; // 0x41a PushV
	var_107_string = "voice_common"; // 0x41b PushS
	GetVariable(var_107_string, var_105_int); // 0x41c Func
	var_108_int = var_105_int; // 0x41e Push
	if(var_108_int == 0) goto Label_1088; // 0x41f JumpB
	var_109_bool = 0; var_110_object = Obj(); // 0x420 PushV
	var_110_object = var_99_object; // 0x421 Mov
	func_1108(var_110_object); // 0x422 NEW_2
	var_139_bool = var_109_bool == 0; // 0x424 Not
	if(var_139_bool == 0) goto Label_1070; // 0x425 JumpB
	var_140_bool = 0; var_141_object = Obj(); // 0x426 PushV
	var_141_object = var_99_object; // 0x427 Mov
	func_1145(var_141_object); // 0x428 NEW_2
	var_175_bool = var_140_bool == 0; // 0x42a Not
	if(var_175_bool == 0) goto Label_1070; // 0x42b JumpB
	var_98_bool = 0; // 0x42c MovB
	return 4; // 0x42d Return
	
Label_1070:
	var_176_int = 2; // 0x42e PushI
	irand(var_106_int, var_176_int); // 0x42f Func
	var_177_int = var_106_int; // 0x431 Push
	if(var_177_int == 0) goto Label_1083; // 0x432 JumpB
	var_178_string = "voice_common"; // 0x433 PushS
	var_179_int = 1; // 0x434 PushI
	var_180_int = var_105_int + var_179_int; // 0x435 Add
	var_181_int = 3; // 0x436 PushI
	var_182_int = var_180_int / var_181_int; // 0x437 Mod
	SetVariable(var_178_string, var_182_int); // 0x438 Func
	goto Label_1087; // 0x43a Jump
	
Label_1087:
	goto Label_1106; // 0x43f Jump
	
Label_1106:
	var_98_bool = 1; // 0x452 MovB
	return 4; // 0x453 Return
	
Label_1083:
	var_183_string = "voice_common"; // 0x43b PushS
	var_184_int = 0; // 0x43c PushI
	SetVariable(var_183_string, var_184_int); // 0x43d Func
	
Label_1088:
	var_185_bool = 0; var_186_object = Obj(); // 0x440 PushV
	var_186_object = var_99_object; // 0x441 Mov
	func_1145(var_186_object); // 0x442 NEW_2
	var_187_bool = var_185_bool == 0; // 0x444 Not
	if(var_187_bool == 0) goto Label_1102; // 0x445 JumpB
	var_188_bool = 0; var_189_object = Obj(); // 0x446 PushV
	var_189_object = var_99_object; // 0x447 Mov
	func_1108(var_189_object); // 0x448 NEW_2
	var_190_bool = var_188_bool == 0; // 0x44a Not
	if(var_190_bool == 0) goto Label_1102; // 0x44b JumpB
	var_98_bool = 0; // 0x44c MovB
	return 4; // 0x44d Return
	
Label_1102:
	var_191_string = "voice_common"; // 0x44e PushS
	var_192_int = 1; // 0x44f PushI
	SetVariable(var_191_string, var_192_int); // 0x450 Func
}


func_924(var_45_bool)
{
	var_45_bool = 1; // 0x39c MovB
	return 0; // 0x39d Return
}


func_926()
{
	StopAnimation(); // 0x39e Func
	StopGroup0(); // 0x3a0 Func
	return 0; // 0x3a2 Return
}


func_801()
{
	StopGroup0(); // 0x321 Func
	func_744(); // 0x324 NEW_2
	var_8_string = ""; // 0x326 PushV
	var_8_string = "Neutral"; // 0x327 MovS
	func_1188(var_8_string); // 0x328 NEW_2
	func_735(); // 0x32b NEW_2
	return 0; // 0x32d Return
}


func_931(var_22_float)
{
	var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); // 0x3a3 PushV
	GetPosition(var_27_cvector); // 0x3a4 Func
	GetPosition(var_28_cvector); // 0x3a6 ObjFunc
	var_29_cvector = var_28_cvector - var_27_cvector; // 0x3a8 Sub2
	var_22_float = var_29_cvector | var_29_cvector; // 0x3a9 Or2
	return 6; // 0x3aa Return
}


func_1188(var_237_string)
{
	var_238_bool = 0; var_239_float = 0; var_240_float = 0; var_241_bool = 0; var_242_float = 0; var_243_float = 0; // 0x4a4 PushV
	lshHasAnimation(var_241_bool, var_237_string); // 0x4a5 Func
	var_244_bool = var_241_bool; // 0x4a7 Push
	if(var_244_bool == 0) goto Label_1199; // 0x4a8 JumpB
	lshGetAnimTimes(var_237_string, var_242_float, var_243_float); // 0x4a9 Func
	var_245_bool = 0; // 0x4ab PushB
	lshPlayAnimation(var_242_float, var_243_float, var_245_bool); // 0x4ac Func
	goto Label_1203; // 0x4ae Jump
	
Label_1203:
	return 6; // 0x4b3 Return
	
Label_1199:
	var_246_string = "Can't find lsh animation : "; // 0x4af PushS
	var_247_int = var_246_string + var_237_string; // 0x4b0 Add
	Trace(var_247_int); // 0x4b1 Func
}


func_1316()
{
	var_17_object = Obj(); var_18_object = Obj(); // 0x524 PushV
	var_19_int = 621; // 0x525 PushI
	var_20_int = 1; // 0x526 PushI
	var_21_int = 532195; // 0x527 PushI
	CreateDiaryEntry(var_18_object, var_19_int, var_20_int, var_21_int); // 0x528 Func
	var_22_bool = 0; var_23_object = Obj(); var_24_int = 0; // 0x52a PushV
	var_23_object = var_18_object; // 0x52b Mov
	var_24_int = 2; // 0x52c MovI
	func_1342(var_22_bool, var_23_object, var_24_int); // 0x52d NEW_2
	return 2; // 0x52f Return
}


func_679(var_0_object)
{
	var_7_bool = 0; // 0x2a7 PushV
	func_958(var_7_bool); // 0x2a8 NEW_2
	var_10_bool = var_7_bool == 0; // 0x2aa Not
	if(var_10_bool == 0) goto Label_686; // 0x2ab JumpB
	Hold(); // 0x2ac Func
	
Label_686:
	GetDirection(var_0_object); // 0x2ae Func
	
Label_688:
	func_855(); // 0x2b1 NEW_2
	goto Label_688; // 0x2b3 Jump
}


func_169(var_2_object, var_208_string)
{
	var_209_bool = 0; // 0xaa PushV
	func_1395(var_209_bool); // 0xab NEW_2
	var_210_bool = var_209_bool == 0; // 0xad Not
	if(var_210_bool == 0) goto Label_176; // 0xae JumpB
	return 0; // 0xaf Return
	
Label_176:
	var_211_bool = var_208_string == var_2_object; // 0xb0 Eq
	if(var_211_bool == 0) goto Label_179; // 0xb1 JumpB
	return 0; // 0xb2 Return
	
Label_179:
	var_212_string = ""; var_213_bool = 0; // 0xb3 PushV
	var_212_string = var_208_string; // 0xb4 Mov
	var_214_string = ""; // 0xb5 PushS
	var_215_bool = var_208_string == var_214_string; // 0xb6 Eq
	if(var_215_bool == 0) goto Label_186; // 0xb7 JumpB
	var_213_bool = 0; // 0xb8 MovB
	goto Label_187; // 0xb9 Jump
	
Label_187:
	func_1204(var_212_string, var_213_bool); // 0xbb NEW_2
	var_2_object = var_208_string; // 0xbd TMov
	return 0; // 0xbe Return
	
Label_186:
	var_213_bool = 1; // 0xba MovB
}


func_939(var_15_bool, var_16_cvector)
{
	var_17_cvector = CVector(0,0,0); var_18_cvector = CVector(0,0,0); var_19_bool = 0; var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_bool = 0; // 0x3ab PushV
	GetPosition(var_20_cvector); // 0x3ac Func
	var_21_cvector = var_16_cvector - var_20_cvector; // 0x3ae Sub2
	var_23_float = GetByIndex(var_21_cvector, 0); // 0x3af PushE
	var_24_float = GetByIndex(var_21_cvector, 2); // 0x3b0 PushE
	Rotate(var_23_float, var_24_float, var_22_bool); // 0x3b1 Func
	var_15_bool = var_22_bool; // 0x3b3 Mov
	return 6; // 0x3b4 Return
}


func_1329(var_31_object)
{
	var_32_object = Obj(); var_33_object = Obj(); // 0x531 PushV
	GetDiaryRoot(var_33_object); // 0x532 Func
	var_34_bool = var_33_object == 0; // 0x534 Not
	if(var_34_bool == 0) goto Label_1339; // 0x535 JumpB
	var_35_string = "Can't retrieve diary root"; // 0x536 PushS
	Trace(var_35_string); // 0x537 Func
	var_31_object = 0; // 0x539 MovB
	return 2; // 0x53a Return
	
Label_1339:
	var_31_object = var_33_object; // 0x53b Mov
	return 2; // 0x53c Return
}


func_1204(var_212_string, var_213_bool)
{
	var_216_bool = 0; var_217_float = 0; var_218_float = 0; var_219_bool = 0; var_220_float = 0; var_221_float = 0; // 0x4b4 PushV
	lshHasAnimation(var_219_bool, var_212_string); // 0x4b5 Func
	var_222_bool = var_219_bool; // 0x4b7 Push
	if(var_222_bool == 0) goto Label_1214; // 0x4b8 JumpB
	lshGetAnimTimes(var_212_string, var_220_float, var_221_float); // 0x4b9 Func
	lshPlayAnimation(var_220_float, var_221_float, var_213_bool); // 0x4bb Func
	goto Label_1218; // 0x4bd Jump
	
Label_1218:
	return 6; // 0x4c2 Return
	
Label_1214:
	var_223_string = "Can't find lsh animation : "; // 0x4be PushS
	var_224_int = var_223_string + var_212_string; // 0x4bf Add
	Trace(var_224_int); // 0x4c0 Func
}


func_949(var_11_bool)
{
	var_13_cvector = CVector(0,0,0); var_14_cvector = CVector(0,0,0); // 0x3b5 PushV
	GetPosition(var_14_cvector); // 0x3b6 ObjFunc
	var_15_bool = 0; var_16_cvector = CVector(0,0,0); // 0x3b8 PushV
	var_16_cvector = var_14_cvector; // 0x3b9 Mov
	func_939(var_15_bool, var_16_cvector); // 0x3ba NEW_2
	var_11_bool = var_15_bool; // 0x3bb Mov
	return 2; // 0x3bd Return
}


func_693(var_32_bool)
{
	var_33_object = Obj(); var_34_object = Obj(); // 0x2b5 PushV
	var_35_string = "player"; // 0x2b6 PushS
	FindActor(var_34_object, var_35_string); // 0x2b7 Func
	var_36_bool = var_34_object == 0; // 0x2b9 Not
	if(var_36_bool == 0) goto Label_701; // 0x2ba JumpB
	var_32_bool = 0; // 0x2bb MovB
	return 2; // 0x2bc Return
	
Label_701:
	var_37_bool = 0; var_38_object = Obj(); // 0x2bd PushV
	var_38_object = var_34_object; // 0x2be Mov
	func_949(var_38_object); // 0x2bf NEW_2
	var_32_bool = var_37_bool; // 0x2c0 Mov
	return 2; // 0x2c2 Return
}


func_958(var_7_bool)
{
	var_8_bool = 0; var_9_bool = 0; // 0x3be PushV
	IsLoaded(var_9_bool); // 0x3bf Func
	var_7_bool = var_9_bool; // 0x3c1 Mov
	return 2; // 0x3c2 Return
}


func_1342(var_22_bool, var_23_object, var_24_int)
{
	var_25_object = Obj(); var_26_object = Obj(); var_27_int = 0; var_28_object = Obj(); var_29_object = Obj(); var_30_int = 0; // 0x53e PushV
	var_31_object = Obj(); // 0x53f PushV
	func_1329(var_31_object); // 0x540 NEW_2
	var_28_object = var_31_object; // 0x541 Mov
	Find(var_24_int, var_29_object); // 0x543 ObjFunc
	var_36_bool = var_29_object == 0; // 0x545 Not
	if(var_36_bool == 0) goto Label_1357; // 0x546 JumpB
	var_37_string = "Can't find diary parent with id: "; // 0x547 PushS
	var_38_int = var_37_string + var_24_int; // 0x548 Add
	Trace(var_38_int); // 0x549 Func
	var_22_bool = 0; // 0x54b MovB
	return 6; // 0x54c Return
	
Label_1357:
	AddChild(var_23_object); // 0x54d ObjFunc
	var_39_int = 7; // 0x54f PushI
	SendWorldWndMessage(var_39_int); // 0x550 Func
	GetCategory(var_30_int); // 0x552 ObjFunc
	SetDiarySection(var_30_int); // 0x554 Func
	var_22_bool = 0; // 0x556 MovB
	return 6; // 0x557 Return
}


func_963(var_37_bool, var_39_float)
{
	var_40_float = 0; var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_bool = 0; var_48_bool = 0; var_49_float = 0; var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); var_56_bool = 0; var_57_bool = 0; // 0x3c3 PushV
	GetPosition(var_50_cvector); // 0x3c4 ObjFunc
	GetEyesHeight(var_49_float); // 0x3c6 ObjFunc
	var_58_float = GetByIndex(var_50_cvector, 1); // 0x3c8 PushE
	var_58_float = var_58_float + var_49_float; // 0x3c9 Add2
	SetByIndex(var_50_cvector, 1) = var_58_float; // 0x3ca PopE
	GetPosition(var_51_cvector); // 0x3cb Func
	GetEyesHeight(var_49_float); // 0x3cd Func
	var_59_float = GetByIndex(var_51_cvector, 1); // 0x3cf PushE
	var_59_float = var_59_float + var_49_float; // 0x3d0 Add2
	SetByIndex(var_51_cvector, 1) = var_59_float; // 0x3d1 PopE
	var_52_cvector = var_50_cvector - var_51_cvector; // 0x3d2 Sub2
	var_60_float = GetByIndex(var_52_cvector, 1); // 0x3d3 PushE
	var_60_float = 0; // 0x3d4 MovI
	SetByIndex(var_52_cvector, 1) = var_60_float; // 0x3d5 PopE
	var_61_int = var_52_cvector | var_52_cvector; // 0x3d6 Or
	var_62_float = sqrt(var_61_int); // 0x3d7 Sqrt
	var_52_cvector = var_52_cvector / var_52_cvector; // 0x3d8 Div2
	var_53_cvector = -var_52_cvector; // 0x3d9 Neg2
	var_63_float = var_52_cvector * var_39_float; // 0x3da Mult
	var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); // 0x3db PushV
	var_66_cvector = CVector(0.0, 1.0, 0.0); // 0x3dc PushVec
	var_65_cvector = var_53_cvector ^ var_66_cvector; // 0x3dd Xor2
	func_1247(var_64_cvector, var_65_cvector); // 0x3de NEW_2
	var_72_int = 25; // 0x3e0 PushI
	var_73_float = var_64_cvector * var_72_int; // 0x3e1 Mult
	var_74_int = var_63_float + var_73_float; // 0x3e2 Add
	var_75_cvector = CVector(0.0, 10.0, 0.0); // 0x3e3 PushVec
	var_54_cvector = var_74_int - var_75_cvector; // 0x3e4 Sub2
	var_55_cvector = var_51_cvector + var_54_cvector; // 0x3e5 Add2
	IsOverrideActive(var_56_bool); // 0x3e6 Func
	var_76_bool = var_56_bool; // 0x3e8 Push
	if(var_76_bool == 0) goto Label_1004; // 0x3e9 JumpB
	var_37_bool = 0; // 0x3ea MovB
	return 18; // 0x3eb Return
	
Label_1004:
	StopWorld(); // 0x3ec Func
	var_77_bool = 1; // 0x3ee PushB
	CameraTransit(var_55_cvector, var_53_cvector, var_77_bool); // 0x3ef Func
	var_78_float = GetByIndex(var_54_cvector, 0); // 0x3f1 PushE
	var_79_float = GetByIndex(var_54_cvector, 2); // 0x3f2 PushE
	Rotate(var_78_float, var_79_float); // 0x3f3 Func
	var_80_bool = 0; // 0x3f5 PushV
	func_1395(var_80_bool); // 0x3f6 NEW_2
	if(var_80_bool == 0) goto Label_1018; // 0x3f8 JumpB
	goto Label_1026; // 0x3f9 Jump
	
Label_1026:
	CameraWaitForPlayFinish(); // 0x402 Func
	ResumeWorld(); // 0x404 Func
	var_37_bool = 1; // 0x406 MovB
	return 18; // 0x407 Return
	
Label_1018:
	var_81_string = "head"; // 0x3fa PushS
	HasAnimationTrack(var_57_bool, var_81_string); // 0x3fb Func
	var_82_bool = var_57_bool; // 0x3fd Push
	if(var_82_bool == 0) goto Label_1026; // 0x3fe JumpB
	var_83_string = "head"; // 0x3ff PushS
	LookAsyncCamera(var_83_string); // 0x400 Func
}


func_708(var_0_object)
{
	var_84_float = GetByIndex(var_0_object, 0); // 0x2c4 PushE
	var_85_float = GetByIndex(var_0_object, 2); // 0x2c5 PushE
	RotateAsync(var_84_float, var_85_float); // 0x2c6 Func
	return 0; // 0x2c8 Return
}


func_1219(var_132_bool, var_133_string)
{
	var_134_bool = 0; var_135_bool = 0; // 0x4c3 PushV
	var_136_bool = 0; // 0x4c4 PushV
	func_1395(var_136_bool); // 0x4c5 NEW_2
	if(var_136_bool == 0) goto Label_1232; // 0x4c7 JumpB
	lshHasSpeech(var_135_bool, var_133_string); // 0x4c8 Func
	var_137_bool = var_135_bool; // 0x4ca Push
	if(var_137_bool == 0) goto Label_1232; // 0x4cb JumpB
	lshPlaySpeech(var_133_string); // 0x4cc Func
	var_132_bool = 1; // 0x4ce MovB
	return 2; // 0x4cf Return
	
Label_1232:
	var_132_bool = 0; // 0x4d0 MovB
	return 2; // 0x4d1 Return
}


func_713(var_15_bool)
{
	var_16_object = Obj(); var_17_bool = 0; var_18_object = Obj(); var_19_bool = 0; // 0x2c9 PushV
	var_20_string = "player"; // 0x2ca PushS
	FindActor(var_18_object, var_20_string); // 0x2cb Func
	var_21_bool = var_18_object == 0; // 0x2cd Not
	if(var_21_bool == 0) goto Label_721; // 0x2ce JumpB
	var_15_bool = 0; // 0x2cf MovB
	return 4; // 0x2d0 Return
	
Label_721:
	var_22_float = 0; var_23_object = Obj(); // 0x2d1 PushV
	var_23_object = var_18_object; // 0x2d2 Mov
	func_931(var_23_object); // 0x2d3 NEW_2
	var_30_float = 90000.0; // 0x2d5 PushF
	var_31_bool = var_22_float > var_30_float; // 0x2d6 GT
	if(var_31_bool == 0) goto Label_730; // 0x2d7 JumpB
	var_15_bool = 0; // 0x2d8 MovB
	return 4; // 0x2d9 Return
	
Label_730:
	CanSee(var_19_bool, var_18_object); // 0x2da Func
	var_15_bool = var_19_bool; // 0x2dc Mov
	return 4; // 0x2dd Return
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_193_object, var_194_object)
{
	var_0_object = var_194_object; // 0x52 TMov
	var_1_object = var_193_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_199_int = 1; // 0x55 PushI
	if(var_199_int == 0) goto Label_139; // 0x56 JumpB
	var_200_bool = 0; var_201_object = Obj(); // 0x57 PushV
	var_201_object = var_1_object; // 0x58 MovT
	func_1304(var_201_object); // 0x59 NEW_2
	if(var_200_bool == 0) goto Label_117; // 0x5b JumpB
	var_208_string = ""; // 0x5c PushV
	var_208_string = "Neutral"; // 0x5d MovS
	func_169(var_194_object, var_208_string); // 0x5e NEW_2
	var_225_int = 509170; // 0x60 PushI
	SetMessage(var_225_int); // 0x61 TObjFunc
	ClearReplies(); // 0x63 TObjFunc
	var_226_int = 509171; // 0x65 PushI
	var_227_int = 10056; // 0x66 PushI
	var_228_int = 10055; // 0x67 PushI
	AddReply(var_226_int, var_227_int, var_228_int); // 0x68 TObjFunc
	var_229_int = 509175; // 0x6a PushI
	var_230_int = 10062; // 0x6b PushI
	var_231_int = 10061; // 0x6c PushI
	AddReply(var_229_int, var_230_int, var_231_int); // 0x6d TObjFunc
	var_232_int = 509187; // 0x6f PushI
	var_233_int = 10077; // 0x70 PushI
	var_234_int = 10076; // 0x71 PushI
	AddReply(var_232_int, var_233_int, var_234_int); // 0x72 TObjFunc
	goto Label_139; // 0x74 Jump
	
Label_139:
	var_235_bool = 0; // 0x8b PushV
	func_1395(var_235_bool); // 0x8c NEW_2
	if(var_235_bool == 0) goto Label_154; // 0x8e JumpB
	
Label_143:
	lshWaitForAnimEnd(); // 0x8f Func
	var_236_string = var_3_string; // 0x91 PushT
	if(var_236_string == 0) goto Label_148; // 0x92 JumpB
	goto Label_153; // 0x93 Jump
	
Label_153:
	goto Label_168; // 0x99 Jump
	
Label_168:
	return 0; // 0xa8 Return
	
Label_148:
	var_237_string = ""; // 0x94 PushV
	var_237_string = var_2_object; // 0x95 MovT
	func_1188(var_237_string); // 0x96 NEW_2
	goto Label_143; // 0x98 Jump
	
Label_154:
	var_248_string = "all"; // 0x9a PushS
	var_249_string = "idle"; // 0x9b PushS
	PlayAnimation(var_248_string, var_249_string); // 0x9c Func
	
Label_158:
	WaitForAnimEnd(); // 0x9e Func
	var_250_string = var_3_string; // 0xa0 PushT
	if(var_250_string == 0) goto Label_163; // 0xa1 JumpB
	goto Label_168; // 0xa2 Jump
	
Label_163:
	var_251_string = "all"; // 0xa3 PushS
	var_252_string = "idle"; // 0xa4 PushS
	PlayAnimation(var_251_string, var_252_string); // 0xa5 Func
	goto Label_158; // 0xa7 Jump
	
Label_117:
	var_253_string = ""; // 0x75 PushV
	var_253_string = "Warning"; // 0x76 MovS
	func_169(var_194_object, var_253_string); // 0x77 NEW_2
	var_254_int = 531961; // 0x79 PushI
	SetMessage(var_254_int); // 0x7a TObjFunc
	ClearReplies(); // 0x7c TObjFunc
	var_255_int = 532856; // 0x7e PushI
	var_256_int = -1; // 0x7f PushI
	var_257_int = 34341; // 0x80 PushI
	AddReply(var_255_int, var_256_int, var_257_int); // 0x81 TObjFunc
	var_258_int = 531962; // 0x83 PushI
	var_259_int = -1; // 0x84 PushI
	var_260_int = 33366; // 0x85 PushI
	AddReply(var_258_int, var_259_int, var_260_int); // 0x86 TObjFunc
	goto Label_139; // 0x88 Jump
}


func_1234()
{
	var_10_bool = 0; // 0x4d2 PushV
	func_1395(var_10_bool); // 0x4d3 NEW_2
	if(var_10_bool == 0) goto Label_1240; // 0x4d5 JumpB
	lshStopSpeech(); // 0x4d6 Func
	
Label_1240:
	return 0; // 0x4d8 Return
}


func_1108(var_109_bool)
{
	var_111_string = ""; var_112_int = 0; var_113_bool = 0; var_114_int = 0; var_115_string = ""; var_116_string = ""; var_117_int = 0; var_118_bool = 0; var_119_int = 0; var_120_string = ""; // 0x454 PushV
	var_116_string = "c"; // 0x455 MovS
	var_117_int = 0; // 0x456 MovI
	
Label_1111:
	var_121_int = 1; // 0x457 PushI
	if(var_121_int == 0) goto Label_1124; // 0x458 JumpB
	var_122_int = 1; // 0x459 PushI
	var_123_int = var_117_int + var_122_int; // 0x45a Add
	var_124_int = var_116_string + var_123_int; // 0x45b Add
	HasProperty(var_124_int, var_118_bool); // 0x45c ObjFunc
	var_125_bool = var_118_bool == 0; // 0x45e Not
	if(var_125_bool == 0) goto Label_1121; // 0x45f JumpB
	goto Label_1124; // 0x460 Jump
	
Label_1124:
	var_126_bool = var_117_int == 0; // 0x464 Not
	if(var_126_bool == 0) goto Label_1128; // 0x465 JumpB
	var_109_bool = 0; // 0x466 MovB
	return 10; // 0x467 Return
	
Label_1128:
	var_119_int = 0; // 0x468 MovI
	var_127_int = 1; // 0x469 PushI
	var_128_bool = var_117_int > var_127_int; // 0x46a GT
	if(var_128_bool == 0) goto Label_1134; // 0x46b JumpB
	irand(var_119_int, var_117_int); // 0x46c Func
	
Label_1134:
	var_129_int = 1; // 0x46e PushI
	var_130_int = var_119_int + var_129_int; // 0x46f Add
	var_131_int = var_116_string + var_130_int; // 0x470 Add
	GetProperty(var_131_int, var_120_string); // 0x471 ObjFunc
	var_132_bool = 0; var_133_string = ""; // 0x473 PushV
	var_133_string = var_120_string; // 0x474 Mov
	func_1219(var_132_bool, var_133_string); // 0x475 NEW_2
	var_109_bool = var_132_bool; // 0x476 Mov
	return 10; // 0x478 Return
	
Label_1121:
	var_138_int = 1; // 0x461 PushI
	var_117_int = var_117_int + var_138_int; // 0x462 Add2
	goto Label_1111; // 0x463 Jump
}


func_855()
{
	var_11_int = 0; var_12_int = 0; var_13_bool = 0; var_14_int = 0; var_15_int = 0; var_16_bool = 0; var_17_int = 0; var_18_int = 0; var_19_bool = 0; var_20_int = 0; var_21_int = 0; var_22_bool = 0; // 0x357 PushV
	WaitForAnimEnd(); // 0x358 Func
	var_23_bool = 0; // 0x35a PushV
	func_958(var_23_bool); // 0x35b NEW_2
	var_24_bool = var_23_bool == 0; // 0x35d Not
	if(var_24_bool == 0) goto Label_864; // 0x35e JumpB
	return 12; // 0x35f Return
	
Label_864:
	var_25_int = 0; // 0x360 PushV
	func_1278(var_25_int); // 0x361 NEW_2
	var_17_int = var_25_int; // 0x362 Mov
	var_18_int = 0; // 0x364 MovI
	
Label_869:
	var_38_bool = 0; // 0x365 PushV
	var_38_bool = 0; // 0x366 MovB
	var_39_int = 5; // 0x367 PushI
	var_40_bool = var_18_int < var_39_int; // 0x368 LT
	if(var_40_bool == 0) goto Label_879; // 0x369 JumpB
	var_41_bool = 0; // 0x36a PushV
	func_958(var_41_bool); // 0x36b NEW_2
	if(var_41_bool == 0) goto Label_879; // 0x36d JumpB
	var_38_bool = 1; // 0x36e MovB
	
Label_879:
	if(var_38_bool == 0) goto Label_921; // 0x36f JumpB
	var_42_bool = var_17_int == 0; // 0x370 Not
	if(var_42_bool == 0) goto Label_889; // 0x371 JumpB
	var_43_int = 3; // 0x372 PushI
	Sleep(var_43_int, var_19_bool); // 0x373 Func
	var_44_bool = var_19_bool == 0; // 0x375 Not
	if(var_44_bool == 0) goto Label_888; // 0x376 JumpB
	goto Label_921; // 0x377 Jump
	
Label_921:
	ResetAAS(); // 0x399 Func
	return 12; // 0x39b Return
	
Label_888:
	goto Label_910; // 0x378 Jump
	
Label_910:
	var_45_bool = 0; // 0x38e PushV
	func_924(var_45_bool); // 0x38f NEW_2
	var_46_bool = var_45_bool == 0; // 0x391 Not
	if(var_46_bool == 0) goto Label_916; // 0x392 JumpB
	goto Label_921; // 0x393 Jump
	
Label_916:
	ResetAAS(); // 0x394 Func
	var_47_int = 1; // 0x396 PushI
	var_18_int = var_18_int + var_47_int; // 0x397 Add2
	goto Label_869; // 0x398 Jump
	
Label_889:
	irand(var_20_int, var_17_int); // 0x379 Func
	var_48_int = 5; // 0x37b PushI
	irand(var_21_int, var_48_int); // 0x37c Func
	var_49_int = 0; // 0x37e PushI
	var_50_bool = var_21_int != var_49_int; // 0x37f Neq
	if(var_50_bool == 0) goto Label_898; // 0x380 JumpB
	var_20_int = 0; // 0x381 MovI
	
Label_898:
	var_51_string = "all"; // 0x382 PushS
	var_52_string = ""; var_53_int = 0; // 0x383 PushV
	var_53_int = var_20_int; // 0x384 Mov
	func_1271(var_52_string, var_53_int); // 0x385 NEW_2
	PlayAnimation(var_51_string, var_52_string); // 0x387 Func
	WaitForAnimEnd(var_22_bool); // 0x389 Func
	var_54_bool = var_22_bool == 0; // 0x38b Not
	if(var_54_bool == 0) goto Label_910; // 0x38c JumpB
	goto Label_921; // 0x38d Jump
}


func_1241(var_100_object)
{
	var_101_object = Obj(); var_102_object = Obj(); // 0x4d9 PushV
	self(var_102_object); // 0x4da Func
	var_100_object = var_102_object; // 0x4dc Mov
	return 2; // 0x4dd Return
}


func_1370(var_89_int)
{
	var_90_int = 0; var_91_int = 0; // 0x55a PushV
	var_92_string = "branch"; // 0x55b PushS
	GetVariable(var_92_string, var_91_int); // 0x55c Func
	var_93_int = 0; // 0x55e PushI
	var_94_bool = var_91_int == var_93_int; // 0x55f Eq
	if(var_94_bool == 0) goto Label_1380; // 0x560 JumpB
	var_89_int = 1; // 0x561 MovI
	return 2; // 0x562 Return
	
Label_1380:
	var_95_int = 1; // 0x564 PushI
	var_96_bool = var_91_int == var_95_int; // 0x565 Eq
	if(var_96_bool == 0) goto Label_1385; // 0x566 JumpB
	var_89_int = 2; // 0x567 MovI
	return 2; // 0x568 Return
	
Label_1385:
	var_89_int = 3; // 0x569 MovI
	return 2; // 0x56a Return
}


func_735()
{
	var_272_float = 0; var_273_float = 0; // 0x2df PushV
	var_274_int = 8; // 0x2e0 PushI
	var_275_int = 16; // 0x2e1 PushI
	rand(var_273_float, var_274_int, var_275_int); // 0x2e2 Func
	var_276_int = 10; // 0x2e4 PushI
	SetTimer(var_276_int, var_273_float); // 0x2e5 Func
	return 2; // 0x2e7 Return
}


func_1247(var_64_cvector, var_65_cvector)
{
	var_67_float = 0; var_68_float = 0; // 0x4df PushV
	var_69_int = var_65_cvector | var_65_cvector; // 0x4e0 Or
	var_68_float = sqrt(var_69_int); // 0x4e1 Sqrt2
	var_70_float = 0.0; // 0x4e2 PushF
	var_71_bool = var_68_float < var_70_float; // 0x4e3 LT
	if(var_71_bool == 0) goto Label_1255; // 0x4e4 JumpB
	var_64_cvector = CVector(0.0, 0.0, 0.0); // 0x4e5 MovV
	return 2; // 0x4e6 Return
	
Label_1255:
	var_64_cvector = var_65_cvector / var_65_cvector; // 0x4e7 Div2
	return 2; // 0x4e8 Return
}


func_744()
{
	var_271_int = 10; // 0x2e8 PushI
	KillTimer(var_271_int); // 0x2e9 Func
	return 0; // 0x2eb Return
}


func_1257(var_202_int, var_203_string)
{
	var_204_int = 0; var_205_int = 0; // 0x4e9 PushV
	GetVariable(var_203_string, var_205_int); // 0x4ea Func
	var_202_int = var_205_int; // 0x4ec Mov
	return 2; // 0x4ed Return
}


func_1387(var_86_int)
{
	var_86_int = 515551; // 0x56b MovI
	return 0; // 0x56c Return
}


func_1389(var_85_int)
{
	var_85_int = 502876; // 0x56d MovI
	return 0; // 0x56e Return
}


func_1262(var_153_int)
{
	var_154_float = 0; var_155_float = 0; // 0x4ee PushV
	GetGameTime(var_155_float); // 0x4ef Func
	var_156_int = 1; // 0x4f1 PushI
	var_157_int = 0; // 0x4f2 PushV
	var_158_int = 24; // 0x4f3 PushI
	var_157_int = var_155_float / var_155_float; // 0x4f4 Div2
	var_153_int = var_156_int + var_157_int; // 0x4f5 Add2
	return 2; // 0x4f6 Return
}


func_1391(var_87_string)
{
	var_87_string = "ui/NPC_Rubin.png"; // 0x56f MovS
	return 0; // 0x570 Return
}


func_1393(var_88_string)
{
	var_88_string = "ui/NPC_Rubin_b.png"; // 0x571 MovS
	return 0; // 0x572 Return
}


func_1395(var_80_bool)
{
	var_80_bool = 1; // 0x573 MovB
	return 0; // 0x574 Return
}


func_630(var_25_object)
{
	var_26_int = 0; var_27_object = Obj(); // 0x277 PushV
	var_27_object = var_25_object; // 0x278 Mov
	TaskCall(0); // 0x279 TaskCall
	func_0(var_28_object, var_26_int, var_27_object); // 0x27a NEW_2
	TaskReturn(); // 0x27b TaskReturn
	return 0; // 0x27d Return
}


func_1271(var_31_string, var_32_int)
{
	var_33_string = ""; var_34_string = ""; // 0x4f7 PushV
	var_34_string = "idle"; // 0x4f8 MovS
	var_35_int = var_32_int; // 0x4f9 Push
	if(var_35_int == 0) goto Label_1276; // 0x4fa JumpB
	var_34_string = var_34_string + var_32_int; // 0x4fb Add2
	
Label_1276:
	var_31_string = var_34_string; // 0x4fc Mov
	return 2; // 0x4fd Return
}


func_1145(var_140_bool)
{
	var_142_string = ""; var_143_int = 0; var_144_bool = 0; var_145_int = 0; var_146_string = ""; var_147_string = ""; var_148_int = 0; var_149_bool = 0; var_150_int = 0; var_151_string = ""; // 0x479 PushV
	var_152_string = "d"; // 0x47a PushS
	var_153_int = 0; // 0x47b PushV
	func_1262(var_153_int); // 0x47c NEW_2
	var_159_int = var_152_string + var_153_int; // 0x47e Add
	var_160_string = "m"; // 0x47f PushS
	var_147_string = var_159_int + var_160_string; // 0x480 Add2
	var_148_int = 0; // 0x481 MovI
	
Label_1154:
	var_161_int = 1; // 0x482 PushI
	if(var_161_int == 0) goto Label_1167; // 0x483 JumpB
	var_162_int = 1; // 0x484 PushI
	var_163_int = var_148_int + var_162_int; // 0x485 Add
	var_164_int = var_147_string + var_163_int; // 0x486 Add
	HasProperty(var_164_int, var_149_bool); // 0x487 ObjFunc
	var_165_bool = var_149_bool == 0; // 0x489 Not
	if(var_165_bool == 0) goto Label_1164; // 0x48a JumpB
	goto Label_1167; // 0x48b Jump
	
Label_1167:
	var_166_bool = var_148_int == 0; // 0x48f Not
	if(var_166_bool == 0) goto Label_1171; // 0x490 JumpB
	var_140_bool = 0; // 0x491 MovB
	return 10; // 0x492 Return
	
Label_1171:
	var_150_int = 0; // 0x493 MovI
	var_167_int = 1; // 0x494 PushI
	var_168_bool = var_148_int > var_167_int; // 0x495 GT
	if(var_168_bool == 0) goto Label_1177; // 0x496 JumpB
	irand(var_150_int, var_148_int); // 0x497 Func
	
Label_1177:
	var_169_int = 1; // 0x499 PushI
	var_170_int = var_150_int + var_169_int; // 0x49a Add
	var_171_int = var_147_string + var_170_int; // 0x49b Add
	GetProperty(var_171_int, var_151_string); // 0x49c ObjFunc
	var_172_bool = 0; var_173_string = ""; // 0x49e PushV
	var_173_string = var_151_string; // 0x49f Mov
	func_1219(var_172_bool, var_173_string); // 0x4a0 NEW_2
	var_140_bool = var_172_bool; // 0x4a1 Mov
	return 10; // 0x4a3 Return
	
Label_1164:
	var_174_int = 1; // 0x48c PushI
	var_148_int = var_148_int + var_174_int; // 0x48d Add2
	goto Label_1154; // 0x48e Jump
}


func_1278(var_25_int)
{
	var_26_int = 0; var_27_bool = 0; var_28_int = 0; var_29_bool = 0; // 0x4fe PushV
	var_28_int = 0; // 0x4ff MovI
	
Label_1280:
	var_30_string = "all"; // 0x500 PushS
	var_31_string = ""; var_32_int = 0; // 0x501 PushV
	var_32_int = var_28_int; // 0x502 Mov
	func_1271(var_31_string, var_32_int); // 0x503 NEW_2
	HasAnimation(var_29_bool, var_30_string, var_31_string); // 0x505 Func
	var_36_bool = var_29_bool == 0; // 0x507 Not
	if(var_36_bool == 0) goto Label_1290; // 0x508 JumpB
	goto Label_1293; // 0x509 Jump
	
Label_1293:
	var_25_int = var_28_int; // 0x50d Mov
	return 4; // 0x50e Return
	
Label_1290:
	var_37_int = 1; // 0x50a PushI
	var_28_int = var_28_int + var_37_int; // 0x50b Add2
	goto Label_1280; // 0x50c Jump
}


