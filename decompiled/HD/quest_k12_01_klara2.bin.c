task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool)
{
	var_8_int = 1; // 0xe3 PushI
	if(var_8_int == 0) goto Label_719; // 0xe4 JumpB
	func_1049(); // 0xe6 NEW_2
	var_10_int = 41158; // 0xe8 PushI
	var_11_bool = var_7_bool == var_10_int; // 0xe9 Eq
	if(var_11_bool == 0) goto Label_240; // 0xea JumpB
	var_12_object = Obj(); var_13_object = Obj(); // 0xeb PushV
	var_12_object = var_1_object; // 0xec MovT
	var_13_object = var_0_object; // 0xed MovT
	func_1086(); // 0xee NEW_2
	
Label_240:
	var_16_int = 41160; // 0xf0 PushI
	var_17_bool = var_7_bool == var_16_int; // 0xf1 Eq
	if(var_17_bool == 0) goto Label_248; // 0xf2 JumpB
	var_18_object = Obj(); var_19_object = Obj(); // 0xf3 PushV
	var_18_object = var_1_object; // 0xf4 MovT
	var_19_object = var_0_object; // 0xf5 MovT
	func_1092(); // 0xf6 NEW_2
	
Label_248:
	var_22_int = 43422; // 0xf8 PushI
	var_23_bool = var_7_bool == var_22_int; // 0xf9 Eq
	if(var_23_bool == 0) goto Label_256; // 0xfa JumpB
	var_24_object = Obj(); var_25_object = Obj(); // 0xfb PushV
	var_24_object = var_1_object; // 0xfc MovT
	var_25_object = var_0_object; // 0xfd MovT
	func_1098(); // 0xfe NEW_2
	
Label_256:
	var_28_int = 41157; // 0x100 PushI
	var_29_bool = var_6_int == var_28_int; // 0x101 Eq
	if(var_29_bool == 0) goto Label_344; // 0x102 JumpB
	var_30_bool = 0; var_31_object = Obj(); // 0x103 PushV
	var_31_object = var_1_object; // 0x104 MovT
	func_1104(var_31_object); // 0x105 NEW_2
	var_38_bool = var_30_bool == 0; // 0x107 Not
	if(var_38_bool == 0) goto Label_290; // 0x108 JumpB
	var_39_string = ""; // 0x109 PushV
	var_39_string = "Neutral"; // 0x10a MovS
	func_204(var_7_bool, var_39_string); // 0x10b NEW_2
	var_56_int = 539214; // 0x10d PushI
	SetMessage(var_56_int); // 0x10e TObjFunc
	ClearReplies(); // 0x110 TObjFunc
	var_57_bool = 0; var_58_object = Obj(); // 0x112 PushV
	var_58_object = var_1_object; // 0x113 MovT
	func_1128(var_58_object); // 0x114 NEW_2
	if(var_57_bool == 0) goto Label_284; // 0x116 JumpB
	var_63_int = 539215; // 0x117 PushI
	var_64_int = 43417; // 0x118 PushI
	var_65_int = 41158; // 0x119 PushI
	AddReply(var_63_int, var_64_int, var_65_int); // 0x11a TObjFunc
	
Label_284:
	var_66_int = 541312; // 0x11c PushI
	var_67_int = -1; // 0x11d PushI
	var_68_int = 43448; // 0x11e PushI
	AddReply(var_66_int, var_67_int, var_68_int); // 0x11f TObjFunc
	return 0; // 0x121 Return
	
Label_290:
	var_69_string = ""; // 0x122 PushV
	var_69_string = "Sly"; // 0x123 MovS
	func_204(var_7_bool, var_69_string); // 0x124 NEW_2
	var_70_int = 539216; // 0x126 PushI
	SetMessage(var_70_int); // 0x127 TObjFunc
	ClearReplies(); // 0x129 TObjFunc
	var_71_bool = 0; // 0x12b PushV
	var_71_bool = 0; // 0x12c MovB
	var_72_bool = 0; var_73_object = Obj(); // 0x12d PushV
	var_73_object = var_1_object; // 0x12e MovT
	func_1116(var_73_object); // 0x12f NEW_2
	var_78_bool = var_72_bool == 0; // 0x131 Not
	if(var_78_bool == 0) goto Label_313; // 0x132 JumpB
	var_79_bool = 0; var_80_object = Obj(); // 0x133 PushV
	var_80_object = var_1_object; // 0x134 MovT
	func_1140(var_80_object); // 0x135 NEW_2
	if(var_79_bool == 0) goto Label_313; // 0x137 JumpB
	var_71_bool = 1; // 0x138 MovB
	
Label_313:
	if(var_71_bool == 0) goto Label_319; // 0x139 JumpB
	var_85_int = 539217; // 0x13a PushI
	var_86_int = 43420; // 0x13b PushI
	var_87_int = 41160; // 0x13c PushI
	AddReply(var_85_int, var_86_int, var_87_int); // 0x13d TObjFunc
	
Label_319:
	var_88_bool = 0; // 0x13f PushV
	var_88_bool = 0; // 0x140 MovB
	var_89_bool = 0; var_90_object = Obj(); // 0x141 PushV
	var_90_object = var_1_object; // 0x142 MovT
	func_1116(var_90_object); // 0x143 NEW_2
	if(var_89_bool == 0) goto Label_332; // 0x145 JumpB
	var_91_bool = 0; var_92_object = Obj(); // 0x146 PushV
	var_92_object = var_1_object; // 0x147 MovT
	func_1152(var_92_object); // 0x148 NEW_2
	if(var_91_bool == 0) goto Label_332; // 0x14a JumpB
	var_88_bool = 1; // 0x14b MovB
	
Label_332:
	if(var_88_bool == 0) goto Label_338; // 0x14c JumpB
	var_97_int = 541289; // 0x14d PushI
	var_98_int = 43423; // 0x14e PushI
	var_99_int = 43422; // 0x14f PushI
	AddReply(var_97_int, var_98_int, var_99_int); // 0x150 TObjFunc
	
Label_338:
	var_100_int = 541288; // 0x152 PushI
	var_101_int = -1; // 0x153 PushI
	var_102_int = 43421; // 0x154 PushI
	AddReply(var_100_int, var_101_int, var_102_int); // 0x155 TObjFunc
	return 0; // 0x157 Return
	
Label_344:
	var_103_int = 43423; // 0x158 PushI
	var_104_bool = var_6_int == var_103_int; // 0x159 Eq
	if(var_104_bool == 0) goto Label_367; // 0x15a JumpB
	var_105_string = ""; // 0x15b PushV
	var_105_string = "Neutral"; // 0x15c MovS
	func_204(var_7_bool, var_105_string); // 0x15d NEW_2
	var_106_int = 541290; // 0x15f PushI
	SetMessage(var_106_int); // 0x160 TObjFunc
	ClearReplies(); // 0x162 TObjFunc
	var_107_int = 541303; // 0x164 PushI
	var_108_int = 43441; // 0x165 PushI
	var_109_int = 43438; // 0x166 PushI
	AddReply(var_107_int, var_108_int, var_109_int); // 0x167 TObjFunc
	var_110_int = 541304; // 0x169 PushI
	var_111_int = 43441; // 0x16a PushI
	var_112_int = 43439; // 0x16b PushI
	AddReply(var_110_int, var_111_int, var_112_int); // 0x16c TObjFunc
	return 0; // 0x16e Return
	
Label_367:
	var_113_int = 43441; // 0x16f PushI
	var_114_bool = var_6_int == var_113_int; // 0x170 Eq
	if(var_114_bool == 0) goto Label_390; // 0x171 JumpB
	var_115_string = ""; // 0x172 PushV
	var_115_string = "Neutral"; // 0x173 MovS
	func_204(var_7_bool, var_115_string); // 0x174 NEW_2
	var_116_int = 541306; // 0x176 PushI
	SetMessage(var_116_int); // 0x177 TObjFunc
	ClearReplies(); // 0x179 TObjFunc
	var_117_int = 541307; // 0x17b PushI
	var_118_int = -1; // 0x17c PushI
	var_119_int = 43443; // 0x17d PushI
	AddReply(var_117_int, var_118_int, var_119_int); // 0x17e TObjFunc
	var_120_int = 541308; // 0x180 PushI
	var_121_int = 43445; // 0x181 PushI
	var_122_int = 43444; // 0x182 PushI
	AddReply(var_120_int, var_121_int, var_122_int); // 0x183 TObjFunc
	return 0; // 0x185 Return
	
Label_390:
	var_123_int = 43445; // 0x186 PushI
	var_124_bool = var_6_int == var_123_int; // 0x187 Eq
	if(var_124_bool == 0) goto Label_413; // 0x188 JumpB
	var_125_string = ""; // 0x189 PushV
	var_125_string = "Saveyouall"; // 0x18a MovS
	func_204(var_7_bool, var_125_string); // 0x18b NEW_2
	var_126_int = 541309; // 0x18d PushI
	SetMessage(var_126_int); // 0x18e TObjFunc
	ClearReplies(); // 0x190 TObjFunc
	var_127_int = 541310; // 0x192 PushI
	var_128_int = -1; // 0x193 PushI
	var_129_int = 43446; // 0x194 PushI
	AddReply(var_127_int, var_128_int, var_129_int); // 0x195 TObjFunc
	var_130_int = 541311; // 0x197 PushI
	var_131_int = -1; // 0x198 PushI
	var_132_int = 43447; // 0x199 PushI
	AddReply(var_130_int, var_131_int, var_132_int); // 0x19a TObjFunc
	return 0; // 0x19c Return
	
Label_413:
	var_133_int = 43420; // 0x19d PushI
	var_134_bool = var_6_int == var_133_int; // 0x19e Eq
	if(var_134_bool == 0) goto Label_436; // 0x19f JumpB
	var_135_string = ""; // 0x1a0 PushV
	var_135_string = "Sly"; // 0x1a1 MovS
	func_204(var_7_bool, var_135_string); // 0x1a2 NEW_2
	var_136_int = 541287; // 0x1a4 PushI
	SetMessage(var_136_int); // 0x1a5 TObjFunc
	ClearReplies(); // 0x1a7 TObjFunc
	var_137_int = 541296; // 0x1a9 PushI
	var_138_int = 43430; // 0x1aa PushI
	var_139_int = 43429; // 0x1ab PushI
	AddReply(var_137_int, var_138_int, var_139_int); // 0x1ac TObjFunc
	var_140_int = 541291; // 0x1ae PushI
	var_141_int = 43425; // 0x1af PushI
	var_142_int = 43424; // 0x1b0 PushI
	AddReply(var_140_int, var_141_int, var_142_int); // 0x1b1 TObjFunc
	return 0; // 0x1b3 Return
	
Label_436:
	var_143_int = 43425; // 0x1b4 PushI
	var_144_bool = var_6_int == var_143_int; // 0x1b5 Eq
	if(var_144_bool == 0) goto Label_459; // 0x1b6 JumpB
	var_145_string = ""; // 0x1b7 PushV
	var_145_string = "Neutral"; // 0x1b8 MovS
	func_204(var_7_bool, var_145_string); // 0x1b9 NEW_2
	var_146_int = 541292; // 0x1bb PushI
	SetMessage(var_146_int); // 0x1bc TObjFunc
	ClearReplies(); // 0x1be TObjFunc
	var_147_int = 541293; // 0x1c0 PushI
	var_148_int = 43427; // 0x1c1 PushI
	var_149_int = 43426; // 0x1c2 PushI
	AddReply(var_147_int, var_148_int, var_149_int); // 0x1c3 TObjFunc
	var_150_int = 541298; // 0x1c5 PushI
	var_151_int = -1; // 0x1c6 PushI
	var_152_int = 43431; // 0x1c7 PushI
	AddReply(var_150_int, var_151_int, var_152_int); // 0x1c8 TObjFunc
	return 0; // 0x1ca Return
	
Label_459:
	var_153_int = 43427; // 0x1cb PushI
	var_154_bool = var_6_int == var_153_int; // 0x1cc Eq
	if(var_154_bool == 0) goto Label_477; // 0x1cd JumpB
	var_155_string = ""; // 0x1ce PushV
	var_155_string = "Neutral"; // 0x1cf MovS
	func_204(var_7_bool, var_155_string); // 0x1d0 NEW_2
	var_156_int = 541294; // 0x1d2 PushI
	SetMessage(var_156_int); // 0x1d3 TObjFunc
	ClearReplies(); // 0x1d5 TObjFunc
	var_157_int = 541295; // 0x1d7 PushI
	var_158_int = -1; // 0x1d8 PushI
	var_159_int = 43428; // 0x1d9 PushI
	AddReply(var_157_int, var_158_int, var_159_int); // 0x1da TObjFunc
	return 0; // 0x1dc Return
	
Label_477:
	var_160_int = 43430; // 0x1dd PushI
	var_161_bool = var_6_int == var_160_int; // 0x1de Eq
	if(var_161_bool == 0) goto Label_495; // 0x1df JumpB
	var_162_string = ""; // 0x1e0 PushV
	var_162_string = "Smile"; // 0x1e1 MovS
	func_204(var_7_bool, var_162_string); // 0x1e2 NEW_2
	var_163_int = 541297; // 0x1e4 PushI
	SetMessage(var_163_int); // 0x1e5 TObjFunc
	ClearReplies(); // 0x1e7 TObjFunc
	var_164_int = 541299; // 0x1e9 PushI
	var_165_int = 43433; // 0x1ea PushI
	var_166_int = 43432; // 0x1eb PushI
	AddReply(var_164_int, var_165_int, var_166_int); // 0x1ec TObjFunc
	return 0; // 0x1ee Return
	
Label_495:
	var_167_int = 43433; // 0x1ef PushI
	var_168_bool = var_6_int == var_167_int; // 0x1f0 Eq
	if(var_168_bool == 0) goto Label_518; // 0x1f1 JumpB
	var_169_string = ""; // 0x1f2 PushV
	var_169_string = "Smile"; // 0x1f3 MovS
	func_204(var_7_bool, var_169_string); // 0x1f4 NEW_2
	var_170_int = 541300; // 0x1f6 PushI
	SetMessage(var_170_int); // 0x1f7 TObjFunc
	ClearReplies(); // 0x1f9 TObjFunc
	var_171_int = 541301; // 0x1fb PushI
	var_172_int = 43427; // 0x1fc PushI
	var_173_int = 43434; // 0x1fd PushI
	AddReply(var_171_int, var_172_int, var_173_int); // 0x1fe TObjFunc
	var_174_int = 541302; // 0x200 PushI
	var_175_int = 43427; // 0x201 PushI
	var_176_int = 43436; // 0x202 PushI
	AddReply(var_174_int, var_175_int, var_176_int); // 0x203 TObjFunc
	return 0; // 0x205 Return
	
Label_518:
	var_177_int = 43417; // 0x206 PushI
	var_178_bool = var_6_int == var_177_int; // 0x207 Eq
	if(var_178_bool == 0) goto Label_541; // 0x208 JumpB
	var_179_string = ""; // 0x209 PushV
	var_179_string = "Grin"; // 0x20a MovS
	func_204(var_7_bool, var_179_string); // 0x20b NEW_2
	var_180_int = 541284; // 0x20d PushI
	SetMessage(var_180_int); // 0x20e TObjFunc
	ClearReplies(); // 0x210 TObjFunc
	var_181_int = 541320; // 0x212 PushI
	var_182_int = 43457; // 0x213 PushI
	var_183_int = 43456; // 0x214 PushI
	AddReply(var_181_int, var_182_int, var_183_int); // 0x215 TObjFunc
	var_184_int = 541285; // 0x217 PushI
	var_185_int = 43419; // 0x218 PushI
	var_186_int = 43418; // 0x219 PushI
	AddReply(var_184_int, var_185_int, var_186_int); // 0x21a TObjFunc
	return 0; // 0x21c Return
	
Label_541:
	var_187_int = 43457; // 0x21d PushI
	var_188_bool = var_6_int == var_187_int; // 0x21e Eq
	if(var_188_bool == 0) goto Label_564; // 0x21f JumpB
	var_189_string = ""; // 0x220 PushV
	var_189_string = "Sly"; // 0x221 MovS
	func_204(var_7_bool, var_189_string); // 0x222 NEW_2
	var_190_int = 541321; // 0x224 PushI
	SetMessage(var_190_int); // 0x225 TObjFunc
	ClearReplies(); // 0x227 TObjFunc
	var_191_int = 541322; // 0x229 PushI
	var_192_int = 43459; // 0x22a PushI
	var_193_int = 43458; // 0x22b PushI
	AddReply(var_191_int, var_192_int, var_193_int); // 0x22c TObjFunc
	var_194_int = 541325; // 0x22e PushI
	var_195_int = 43450; // 0x22f PushI
	var_196_int = 43462; // 0x230 PushI
	AddReply(var_194_int, var_195_int, var_196_int); // 0x231 TObjFunc
	return 0; // 0x233 Return
	
Label_564:
	var_197_int = 43459; // 0x234 PushI
	var_198_bool = var_6_int == var_197_int; // 0x235 Eq
	if(var_198_bool == 0) goto Label_587; // 0x236 JumpB
	var_199_string = ""; // 0x237 PushV
	var_199_string = "Sly"; // 0x238 MovS
	func_204(var_7_bool, var_199_string); // 0x239 NEW_2
	var_200_int = 541323; // 0x23b PushI
	SetMessage(var_200_int); // 0x23c TObjFunc
	ClearReplies(); // 0x23e TObjFunc
	var_201_int = 541324; // 0x240 PushI
	var_202_int = 43419; // 0x241 PushI
	var_203_int = 43460; // 0x242 PushI
	AddReply(var_201_int, var_202_int, var_203_int); // 0x243 TObjFunc
	var_204_int = 541326; // 0x245 PushI
	var_205_int = 43419; // 0x246 PushI
	var_206_int = 43464; // 0x247 PushI
	AddReply(var_204_int, var_205_int, var_206_int); // 0x248 TObjFunc
	return 0; // 0x24a Return
	
Label_587:
	var_207_int = 43419; // 0x24b PushI
	var_208_bool = var_6_int == var_207_int; // 0x24c Eq
	if(var_208_bool == 0) goto Label_610; // 0x24d JumpB
	var_209_string = ""; // 0x24e PushV
	var_209_string = "Saveyouall"; // 0x24f MovS
	func_204(var_7_bool, var_209_string); // 0x250 NEW_2
	var_210_int = 541286; // 0x252 PushI
	SetMessage(var_210_int); // 0x253 TObjFunc
	ClearReplies(); // 0x255 TObjFunc
	var_211_int = 541313; // 0x257 PushI
	var_212_int = 43450; // 0x258 PushI
	var_213_int = 43449; // 0x259 PushI
	AddReply(var_211_int, var_212_int, var_213_int); // 0x25a TObjFunc
	var_214_int = 541327; // 0x25c PushI
	var_215_int = 43452; // 0x25d PushI
	var_216_int = 43466; // 0x25e PushI
	AddReply(var_214_int, var_215_int, var_216_int); // 0x25f TObjFunc
	return 0; // 0x261 Return
	
Label_610:
	var_217_int = 43450; // 0x262 PushI
	var_218_bool = var_6_int == var_217_int; // 0x263 Eq
	if(var_218_bool == 0) goto Label_638; // 0x264 JumpB
	var_219_string = ""; // 0x265 PushV
	var_219_string = "Saveyouall"; // 0x266 MovS
	func_204(var_7_bool, var_219_string); // 0x267 NEW_2
	var_220_int = 541314; // 0x269 PushI
	SetMessage(var_220_int); // 0x26a TObjFunc
	ClearReplies(); // 0x26c TObjFunc
	var_221_int = 541315; // 0x26e PushI
	var_222_int = 43452; // 0x26f PushI
	var_223_int = 43451; // 0x270 PushI
	AddReply(var_221_int, var_222_int, var_223_int); // 0x271 TObjFunc
	var_224_int = 541328; // 0x273 PushI
	var_225_int = 43474; // 0x274 PushI
	var_226_int = 43468; // 0x275 PushI
	AddReply(var_224_int, var_225_int, var_226_int); // 0x276 TObjFunc
	var_227_int = 541330; // 0x278 PushI
	var_228_int = 43474; // 0x279 PushI
	var_229_int = 43470; // 0x27a PushI
	AddReply(var_227_int, var_228_int, var_229_int); // 0x27b TObjFunc
	return 0; // 0x27d Return
	
Label_638:
	var_230_int = 43452; // 0x27e PushI
	var_231_bool = var_6_int == var_230_int; // 0x27f Eq
	if(var_231_bool == 0) goto Label_661; // 0x280 JumpB
	var_232_string = ""; // 0x281 PushV
	var_232_string = "Smile"; // 0x282 MovS
	func_204(var_7_bool, var_232_string); // 0x283 NEW_2
	var_233_int = 541316; // 0x285 PushI
	SetMessage(var_233_int); // 0x286 TObjFunc
	ClearReplies(); // 0x288 TObjFunc
	var_234_int = 541317; // 0x28a PushI
	var_235_int = 43474; // 0x28b PushI
	var_236_int = 43453; // 0x28c PushI
	AddReply(var_234_int, var_235_int, var_236_int); // 0x28d TObjFunc
	var_237_int = 541334; // 0x28f PushI
	var_238_int = 43474; // 0x290 PushI
	var_239_int = 43477; // 0x291 PushI
	AddReply(var_237_int, var_238_int, var_239_int); // 0x292 TObjFunc
	return 0; // 0x294 Return
	
Label_661:
	var_240_int = 43474; // 0x295 PushI
	var_241_bool = var_6_int == var_240_int; // 0x296 Eq
	if(var_241_bool == 0) goto Label_684; // 0x297 JumpB
	var_242_string = ""; // 0x298 PushV
	var_242_string = "Neutral"; // 0x299 MovS
	func_204(var_7_bool, var_242_string); // 0x29a NEW_2
	var_243_int = 541331; // 0x29c PushI
	SetMessage(var_243_int); // 0x29d TObjFunc
	ClearReplies(); // 0x29f TObjFunc
	var_244_int = 541332; // 0x2a1 PushI
	var_245_int = -1; // 0x2a2 PushI
	var_246_int = 43475; // 0x2a3 PushI
	AddReply(var_244_int, var_245_int, var_246_int); // 0x2a4 TObjFunc
	var_247_int = 541335; // 0x2a6 PushI
	var_248_int = 43482; // 0x2a7 PushI
	var_249_int = 43481; // 0x2a8 PushI
	AddReply(var_247_int, var_248_int, var_249_int); // 0x2a9 TObjFunc
	return 0; // 0x2ab Return
	
Label_684:
	var_250_int = 43482; // 0x2ac PushI
	var_251_bool = var_6_int == var_250_int; // 0x2ad Eq
	if(var_251_bool == 0) goto Label_707; // 0x2ae JumpB
	var_252_string = ""; // 0x2af PushV
	var_252_string = "Smile"; // 0x2b0 MovS
	func_204(var_7_bool, var_252_string); // 0x2b1 NEW_2
	var_253_int = 541336; // 0x2b3 PushI
	SetMessage(var_253_int); // 0x2b4 TObjFunc
	ClearReplies(); // 0x2b6 TObjFunc
	var_254_int = 541333; // 0x2b8 PushI
	var_255_int = -1; // 0x2b9 PushI
	var_256_int = 43476; // 0x2ba PushI
	AddReply(var_254_int, var_255_int, var_256_int); // 0x2bb TObjFunc
	var_257_int = 541337; // 0x2bd PushI
	var_258_int = -1; // 0x2be PushI
	var_259_int = 43483; // 0x2bf PushI
	AddReply(var_257_int, var_258_int, var_259_int); // 0x2c0 TObjFunc
	return 0; // 0x2c2 Return
	
Label_707:
	var_3_string = 1; // 0x2c3 TMovB
	var_260_bool = 0; // 0x2c4 PushV
	func_1189(var_260_bool); // 0x2c5 NEW_2
	if(var_260_bool == 0) goto Label_715; // 0x2c7 JumpB
	lshStopAnimation(); // 0x2c8 Func
	goto Label_717; // 0x2ca Jump
	
Label_717:
	return 0; // 0x2cd Return
	
Label_715:
	StopAnimation(); // 0x2cb Func
	
Label_719:
	return 0; // 0x2cf Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object)
{
	var_7_int = 0; var_8_object = Obj(); // 0x2d5 PushV
	var_8_object = var_6_object; // 0x2d6 Mov
	TaskCall(0); // 0x2d7 TaskCall
	func_0(var_9_object, var_7_int, var_8_object); // 0x2d8 NEW_2
	TaskReturn(); // 0x2d9 TaskReturn
	return 0; // 0x2db Return
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_string)
{
	var_7_bool = 0; var_8_bool = 0; // 0x2dc PushV
	var_9_string = "cleanup"; // 0x2dd PushS
	var_10_bool = var_6_string == var_9_string; // 0x2de Eq
	if(var_10_bool == 0) goto Label_755; // 0x2df JumpB
	var_0_object = 1; // 0x2e0 TMovB
	IsLoaded(var_8_bool); // 0x2e1 Func
	var_11_bool = 0; // 0x2e3 PushV
	var_11_bool = 0; // 0x2e4 MovB
	var_12_bool = var_8_bool == 0; // 0x2e5 Not
	if(var_12_bool == 0) goto Label_748; // 0x2e6 JumpB
	var_13_bool = 0; // 0x2e7 PushV
	func_776(var_13_bool); // 0x2e8 NEW_2
	if(var_13_bool == 0) goto Label_748; // 0x2ea JumpB
	var_11_bool = 1; // 0x2eb MovB
	
Label_748:
	if(var_11_bool == 0) goto Label_754; // 0x2ec JumpB
	var_14_object = Obj(); // 0x2ed PushV
	func_1056(var_14_object); // 0x2ee NEW_2
	RemoveActor(var_14_object); // 0x2f0 Func
	
Label_754:
	goto Label_759; // 0x2f2 Jump
	
Label_759:
	return 2; // 0x2f7 Return
	
Label_755:
	var_17_string = "restore"; // 0x2f3 PushS
	var_18_bool = var_6_string == var_17_string; // 0x2f4 Eq
	if(var_18_bool == 0) goto Label_759; // 0x2f5 JumpB
	var_0_object = 0; // 0x2f6 TMovB
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	var_6_bool = 0; // 0x2f8 PushV
	var_6_bool = 0; // 0x2f9 MovB
	var_7_object = var_0_object; // 0x2fa PushT
	if(var_7_object == 0) goto Label_769; // 0x2fb JumpB
	var_8_bool = 0; // 0x2fc PushV
	func_776(var_8_bool); // 0x2fd NEW_2
	if(var_8_bool == 0) goto Label_769; // 0x2ff JumpB
	var_6_bool = 1; // 0x300 MovB
	
Label_769:
	if(var_6_bool == 0) goto Label_775; // 0x301 JumpB
	var_9_object = Obj(); // 0x302 PushV
	func_1056(var_9_object); // 0x303 NEW_2
	RemoveActor(var_9_object); // 0x305 Func
	
Label_775:
	return 0; // 0x307 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	
Label_720:
	Hold(); // 0x2d0 Func
	goto Label_720; // 0x2d2 Jump
}


func_1152(var_260_bool)
{
	var_262_int = 0; var_263_string = ""; // 0x481 PushV
	var_263_string = "ook12Klara2Sobor3"; // 0x482 MovS
	func_1072(var_262_int, var_263_string); // 0x483 NEW_2
	var_264_int = 0; // 0x485 PushI
	var_265_bool = var_262_int == var_264_int; // 0x486 Eq
	if(var_265_bool == 0) goto Label_1162; // 0x487 JumpB
	var_260_bool = 1; // 0x488 MovB
	return 0; // 0x489 Return
	
Label_1162:
	var_260_bool = 0; // 0x48a MovB
	return 0; // 0x48b Return
}


func_0(var_0_object, var_7_int, var_8_object)
{
	var_10_object = Obj(); var_11_bool = 0; var_12_int = 0; var_13_bool = 0; var_14_object = Obj(); var_15_bool = 0; var_16_int = 0; var_17_bool = 0; // 0x0 PushV
	var_0_object = var_8_object; // 0x1 TMov
	var_18_bool = 0; var_19_object = Obj(); var_20_float = 0; // 0x2 PushV
	var_19_object = var_8_object; // 0x3 Mov
	var_20_float = 70.0; // 0x4 MovF
	func_778(var_19_object, var_20_float); // 0x5 NEW_2
	var_65_bool = var_18_bool == 0; // 0x7 Not
	if(var_65_bool == 0) goto Label_11; // 0x8 JumpB
	var_7_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_14_object); // 0xb Func
	var_66_int = 0; // 0xd PushV
	func_1183(var_66_int); // 0xe NEW_2
	SetNPCName(var_66_int); // 0x10 ObjFunc
	var_67_int = 0; // 0x12 PushV
	func_1181(var_67_int); // 0x13 NEW_2
	SetNPCDescription(var_67_int); // 0x15 ObjFunc
	var_68_string = ""; // 0x17 PushV
	func_1185(var_68_string); // 0x18 NEW_2
	SetPhoto(var_68_string); // 0x1a ObjFunc
	var_69_string = ""; // 0x1c PushV
	func_1187(var_69_string); // 0x1d NEW_2
	SetPhoto2(var_69_string); // 0x1f ObjFunc
	var_70_int = 0; // 0x21 PushV
	func_1164(var_70_int); // 0x22 NEW_2
	SetPlayerName(var_70_int); // 0x24 ObjFunc
	var_16_int = -1; // 0x26 MovI
	IsOverrideActive(var_15_bool); // 0x27 Func
	var_78_bool = var_15_bool; // 0x29 Push
	if(var_78_bool == 0) goto Label_45; // 0x2a JumpB
	var_7_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_14_object); // 0x2d Func
	var_79_bool = 0; var_80_object = Obj(); // 0x2f PushV
	var_81_object = Obj(); // 0x30 PushV
	func_1056(var_81_object); // 0x31 NEW_2
	var_80_object = var_81_object; // 0x32 Mov
	func_865(var_79_bool, var_80_object); // 0x34 NEW_2
	var_174_object = Obj(); var_175_object = Obj(); // 0x36 PushV
	var_174_object = var_8_object; // 0x37 Mov
	var_175_object = var_14_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_176_object, var_177_object, var_178_string, var_179_bool, var_174_object, var_175_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	IsDialogEnd(var_17_bool); // 0x3d ObjFunc
	
Label_63:
	var_272_bool = var_17_bool == 0; // 0x3f Not
	if(var_272_bool == 0) goto Label_70; // 0x40 JumpB
	sync(); // 0x41 Func
	IsDialogEnd(var_17_bool); // 0x43 ObjFunc
	goto Label_63; // 0x45 Jump
	
Label_70:
	var_273_object = Obj(); // 0x46 PushV
	var_273_object = var_8_object; // 0x47 Mov
	func_847(); // 0x48 NEW_2
	StopDialog(var_14_object); // 0x4a Func
	GetReturnValue(var_16_int); // 0x4c ObjFunc
	var_7_int = var_16_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_960(var_121_bool)
{
	var_123_string = ""; var_124_int = 0; var_125_bool = 0; var_126_int = 0; var_127_string = ""; var_128_string = ""; var_129_int = 0; var_130_bool = 0; var_131_int = 0; var_132_string = ""; // 0x3c0 PushV
	var_133_string = "d"; // 0x3c1 PushS
	var_134_int = 0; // 0x3c2 PushV
	func_1077(var_134_int); // 0x3c3 NEW_2
	var_140_int = var_133_string + var_134_int; // 0x3c5 Add
	var_141_string = "m"; // 0x3c6 PushS
	var_128_string = var_140_int + var_141_string; // 0x3c7 Add2
	var_129_int = 0; // 0x3c8 MovI
	
Label_969:
	var_142_int = 1; // 0x3c9 PushI
	if(var_142_int == 0) goto Label_982; // 0x3ca JumpB
	var_143_int = 1; // 0x3cb PushI
	var_144_int = var_129_int + var_143_int; // 0x3cc Add
	var_145_int = var_128_string + var_144_int; // 0x3cd Add
	HasProperty(var_145_int, var_130_bool); // 0x3ce ObjFunc
	var_146_bool = var_130_bool == 0; // 0x3d0 Not
	if(var_146_bool == 0) goto Label_979; // 0x3d1 JumpB
	goto Label_982; // 0x3d2 Jump
	
Label_982:
	var_147_bool = var_129_int == 0; // 0x3d6 Not
	if(var_147_bool == 0) goto Label_986; // 0x3d7 JumpB
	var_121_bool = 0; // 0x3d8 MovB
	return 10; // 0x3d9 Return
	
Label_986:
	var_131_int = 0; // 0x3da MovI
	var_148_int = 1; // 0x3db PushI
	var_149_bool = var_129_int > var_148_int; // 0x3dc GT
	if(var_149_bool == 0) goto Label_992; // 0x3dd JumpB
	irand(var_131_int, var_129_int); // 0x3de Func
	
Label_992:
	var_150_int = 1; // 0x3e0 PushI
	var_151_int = var_131_int + var_150_int; // 0x3e1 Add
	var_152_int = var_128_string + var_151_int; // 0x3e2 Add
	GetProperty(var_152_int, var_132_string); // 0x3e3 ObjFunc
	var_153_bool = 0; var_154_string = ""; // 0x3e5 PushV
	var_154_string = var_132_string; // 0x3e6 Mov
	func_1034(var_153_bool, var_154_string); // 0x3e7 NEW_2
	var_121_bool = var_153_bool; // 0x3e8 Mov
	return 10; // 0x3ea Return
	
Label_979:
	var_155_int = 1; // 0x3d3 PushI
	var_129_int = var_129_int + var_155_int; // 0x3d4 Add2
	goto Label_969; // 0x3d5 Jump
}


func_1092()
{
	var_20_string = "ook12Klara2Sobor2"; // 0x445 PushS
	var_21_int = 1; // 0x446 PushI
	SetVariable(var_20_string, var_21_int); // 0x447 Func
	return 0; // 0x449 Return
}


func_776(var_8_bool)
{
	var_8_bool = 1; // 0x308 MovB
	return 0; // 0x309 Return
}


func_778(var_18_bool, var_20_float)
{
	var_21_float = 0; var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_bool = 0; var_29_bool = 0; var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_bool = 0; var_38_bool = 0; // 0x30a PushV
	GetPosition(var_31_cvector); // 0x30b ObjFunc
	GetEyesHeight(var_30_float); // 0x30d ObjFunc
	var_39_float = GetByIndex(var_31_cvector, 1); // 0x30f PushE
	var_39_float = var_39_float + var_30_float; // 0x310 Add2
	SetByIndex(var_31_cvector, 1) = var_39_float; // 0x311 PopE
	GetPosition(var_32_cvector); // 0x312 Func
	GetEyesHeight(var_30_float); // 0x314 Func
	var_40_float = GetByIndex(var_32_cvector, 1); // 0x316 PushE
	var_40_float = var_40_float + var_30_float; // 0x317 Add2
	SetByIndex(var_32_cvector, 1) = var_40_float; // 0x318 PopE
	var_33_cvector = var_31_cvector - var_32_cvector; // 0x319 Sub2
	var_41_float = GetByIndex(var_33_cvector, 1); // 0x31a PushE
	var_41_float = 0; // 0x31b MovI
	SetByIndex(var_33_cvector, 1) = var_41_float; // 0x31c PopE
	var_42_int = var_33_cvector | var_33_cvector; // 0x31d Or
	var_43_float = sqrt(var_42_int); // 0x31e Sqrt
	var_33_cvector = var_33_cvector / var_33_cvector; // 0x31f Div2
	var_34_cvector = -var_33_cvector; // 0x320 Neg2
	var_44_float = var_33_cvector * var_20_float; // 0x321 Mult
	var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); // 0x322 PushV
	var_47_cvector = CVector(0.0, 1.0, 0.0); // 0x323 PushVec
	var_46_cvector = var_34_cvector ^ var_47_cvector; // 0x324 Xor2
	func_1062(var_45_cvector, var_46_cvector); // 0x325 NEW_2
	var_53_int = 25; // 0x327 PushI
	var_54_float = var_45_cvector * var_53_int; // 0x328 Mult
	var_55_int = var_44_float + var_54_float; // 0x329 Add
	var_56_cvector = CVector(0.0, 10.0, 0.0); // 0x32a PushVec
	var_35_cvector = var_55_int - var_56_cvector; // 0x32b Sub2
	var_36_cvector = var_32_cvector + var_35_cvector; // 0x32c Add2
	IsOverrideActive(var_37_bool); // 0x32d Func
	var_57_bool = var_37_bool; // 0x32f Push
	if(var_57_bool == 0) goto Label_819; // 0x330 JumpB
	var_18_bool = 0; // 0x331 MovB
	return 18; // 0x332 Return
	
Label_819:
	StopWorld(); // 0x333 Func
	var_58_bool = 1; // 0x335 PushB
	CameraTransit(var_36_cvector, var_34_cvector, var_58_bool); // 0x336 Func
	var_59_float = GetByIndex(var_35_cvector, 0); // 0x338 PushE
	var_60_float = GetByIndex(var_35_cvector, 2); // 0x339 PushE
	Rotate(var_59_float, var_60_float); // 0x33a Func
	var_61_bool = 0; // 0x33c PushV
	func_1189(var_61_bool); // 0x33d NEW_2
	if(var_61_bool == 0) goto Label_833; // 0x33f JumpB
	goto Label_841; // 0x340 Jump
	
Label_841:
	CameraWaitForPlayFinish(); // 0x349 Func
	ResumeWorld(); // 0x34b Func
	var_18_bool = 1; // 0x34d MovB
	return 18; // 0x34e Return
	
Label_833:
	var_62_string = "head"; // 0x341 PushS
	HasAnimationTrack(var_38_bool, var_62_string); // 0x342 Func
	var_63_bool = var_38_bool; // 0x344 Push
	if(var_63_bool == 0) goto Label_841; // 0x345 JumpB
	var_64_string = "head"; // 0x346 PushS
	LookAsyncCamera(var_64_string); // 0x347 Func
}


func_1034(var_113_bool, var_114_string)
{
	var_115_bool = 0; var_116_bool = 0; // 0x40a PushV
	var_117_bool = 0; // 0x40b PushV
	func_1189(var_117_bool); // 0x40c NEW_2
	if(var_117_bool == 0) goto Label_1047; // 0x40e JumpB
	lshHasSpeech(var_116_bool, var_114_string); // 0x40f Func
	var_118_bool = var_116_bool; // 0x411 Push
	if(var_118_bool == 0) goto Label_1047; // 0x412 JumpB
	lshPlaySpeech(var_114_string); // 0x413 Func
	var_113_bool = 1; // 0x415 MovB
	return 2; // 0x416 Return
	
Label_1047:
	var_113_bool = 0; // 0x417 MovB
	return 2; // 0x418 Return
}


func_1164(var_70_int)
{
	var_71_int = 0; var_72_int = 0; // 0x48c PushV
	var_73_string = "branch"; // 0x48d PushS
	GetVariable(var_73_string, var_72_int); // 0x48e Func
	var_74_int = 0; // 0x490 PushI
	var_75_bool = var_72_int == var_74_int; // 0x491 Eq
	if(var_75_bool == 0) goto Label_1174; // 0x492 JumpB
	var_70_int = 1; // 0x493 MovI
	return 2; // 0x494 Return
	
Label_1174:
	var_76_int = 1; // 0x496 PushI
	var_77_bool = var_72_int == var_76_int; // 0x497 Eq
	if(var_77_bool == 0) goto Label_1179; // 0x498 JumpB
	var_70_int = 2; // 0x499 MovI
	return 2; // 0x49a Return
	
Label_1179:
	var_70_int = 3; // 0x49b MovI
	return 2; // 0x49c Return
}


func_1098()
{
	var_26_string = "ook12Klara2Sobor3"; // 0x44b PushS
	var_27_int = 1; // 0x44c PushI
	SetVariable(var_26_string, var_27_int); // 0x44d Func
	return 0; // 0x44f Return
}


func_204(var_2_object, var_190_string)
{
	var_191_bool = 0; // 0xcd PushV
	func_1189(var_191_bool); // 0xce NEW_2
	var_192_bool = var_191_bool == 0; // 0xd0 Not
	if(var_192_bool == 0) goto Label_211; // 0xd1 JumpB
	return 0; // 0xd2 Return
	
Label_211:
	var_193_bool = var_190_string == var_2_object; // 0xd3 Eq
	if(var_193_bool == 0) goto Label_214; // 0xd4 JumpB
	return 0; // 0xd5 Return
	
Label_214:
	var_194_string = ""; var_195_bool = 0; // 0xd6 PushV
	var_194_string = var_190_string; // 0xd7 Mov
	var_196_string = ""; // 0xd8 PushS
	var_197_bool = var_190_string == var_196_string; // 0xd9 Eq
	if(var_197_bool == 0) goto Label_221; // 0xda JumpB
	var_195_bool = 0; // 0xdb MovB
	goto Label_222; // 0xdc Jump
	
Label_222:
	func_1019(var_194_string, var_195_bool); // 0xde NEW_2
	var_2_object = var_190_string; // 0xe0 TMov
	return 0; // 0xe1 Return
	
Label_221:
	var_195_bool = 1; // 0xdd MovB
}


func_847()
{
	var_274_bool = 0; var_275_bool = 0; // 0x34f PushV
	var_276_bool = 1; // 0x350 PushB
	CameraSwitchToNormal(var_276_bool); // 0x351 Func
	var_277_bool = 0; // 0x353 PushV
	func_1189(var_277_bool); // 0x354 NEW_2
	if(var_277_bool == 0) goto Label_856; // 0x356 JumpB
	goto Label_864; // 0x357 Jump
	
Label_864:
	return 2; // 0x360 Return
	
Label_856:
	var_278_string = "head"; // 0x358 PushS
	HasAnimationTrack(var_275_bool, var_278_string); // 0x359 Func
	var_279_bool = var_275_bool; // 0x35b Push
	if(var_279_bool == 0) goto Label_864; // 0x35c JumpB
	var_280_string = "head"; // 0x35d PushS
	UnlookAsync(var_280_string); // 0x35e Func
}


func_1104(var_181_bool)
{
	var_183_int = 0; var_184_string = ""; // 0x451 PushV
	var_184_string = "game_final"; // 0x452 MovS
	func_1072(var_183_int, var_184_string); // 0x453 NEW_2
	var_187_int = 0; // 0x455 PushI
	var_188_bool = var_183_int != var_187_int; // 0x456 Neq
	if(var_188_bool == 0) goto Label_1114; // 0x457 JumpB
	var_181_bool = 1; // 0x458 MovB
	return 0; // 0x459 Return
	
Label_1114:
	var_181_bool = 0; // 0x45a MovB
	return 0; // 0x45b Return
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_174_object, var_175_object)
{
	var_0_object = var_175_object; // 0x52 TMov
	var_1_object = var_174_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_180_int = 1; // 0x55 PushI
	if(var_180_int == 0) goto Label_174; // 0x56 JumpB
	var_181_bool = 0; var_182_object = Obj(); // 0x57 PushV
	var_182_object = var_1_object; // 0x58 MovT
	func_1104(var_182_object); // 0x59 NEW_2
	var_189_bool = var_181_bool == 0; // 0x5b Not
	if(var_189_bool == 0) goto Label_118; // 0x5c JumpB
	var_190_string = ""; // 0x5d PushV
	var_190_string = "Neutral"; // 0x5e MovS
	func_204(var_175_object, var_190_string); // 0x5f NEW_2
	var_207_int = 539214; // 0x61 PushI
	SetMessage(var_207_int); // 0x62 TObjFunc
	ClearReplies(); // 0x64 TObjFunc
	var_208_bool = 0; var_209_object = Obj(); // 0x66 PushV
	var_209_object = var_1_object; // 0x67 MovT
	func_1128(var_209_object); // 0x68 NEW_2
	if(var_208_bool == 0) goto Label_112; // 0x6a JumpB
	var_214_int = 539215; // 0x6b PushI
	var_215_int = 43417; // 0x6c PushI
	var_216_int = 41158; // 0x6d PushI
	AddReply(var_214_int, var_215_int, var_216_int); // 0x6e TObjFunc
	
Label_112:
	var_217_int = 541312; // 0x70 PushI
	var_218_int = -1; // 0x71 PushI
	var_219_int = 43448; // 0x72 PushI
	AddReply(var_217_int, var_218_int, var_219_int); // 0x73 TObjFunc
	goto Label_174; // 0x75 Jump
	
Label_174:
	var_220_bool = 0; // 0xae PushV
	func_1189(var_220_bool); // 0xaf NEW_2
	if(var_220_bool == 0) goto Label_189; // 0xb1 JumpB
	
Label_178:
	lshWaitForAnimEnd(); // 0xb2 Func
	var_221_string = var_3_string; // 0xb4 PushT
	if(var_221_string == 0) goto Label_183; // 0xb5 JumpB
	goto Label_188; // 0xb6 Jump
	
Label_188:
	goto Label_203; // 0xbc Jump
	
Label_203:
	return 0; // 0xcb Return
	
Label_183:
	var_222_string = ""; // 0xb7 PushV
	var_222_string = var_2_object; // 0xb8 MovT
	func_1003(var_222_string); // 0xb9 NEW_2
	goto Label_178; // 0xbb Jump
	
Label_189:
	var_233_string = "all"; // 0xbd PushS
	var_234_string = "idle"; // 0xbe PushS
	PlayAnimation(var_233_string, var_234_string); // 0xbf Func
	
Label_193:
	WaitForAnimEnd(); // 0xc1 Func
	var_235_string = var_3_string; // 0xc3 PushT
	if(var_235_string == 0) goto Label_198; // 0xc4 JumpB
	goto Label_203; // 0xc5 Jump
	
Label_198:
	var_236_string = "all"; // 0xc6 PushS
	var_237_string = "idle"; // 0xc7 PushS
	PlayAnimation(var_236_string, var_237_string); // 0xc8 Func
	goto Label_193; // 0xca Jump
	
Label_118:
	var_238_string = ""; // 0x76 PushV
	var_238_string = "Sly"; // 0x77 MovS
	func_204(var_175_object, var_238_string); // 0x78 NEW_2
	var_239_int = 539216; // 0x7a PushI
	SetMessage(var_239_int); // 0x7b TObjFunc
	ClearReplies(); // 0x7d TObjFunc
	var_240_bool = 0; // 0x7f PushV
	var_240_bool = 0; // 0x80 MovB
	var_241_bool = 0; var_242_object = Obj(); // 0x81 PushV
	var_242_object = var_1_object; // 0x82 MovT
	func_1116(var_242_object); // 0x83 NEW_2
	var_247_bool = var_241_bool == 0; // 0x85 Not
	if(var_247_bool == 0) goto Label_141; // 0x86 JumpB
	var_248_bool = 0; var_249_object = Obj(); // 0x87 PushV
	var_249_object = var_1_object; // 0x88 MovT
	func_1140(var_249_object); // 0x89 NEW_2
	if(var_248_bool == 0) goto Label_141; // 0x8b JumpB
	var_240_bool = 1; // 0x8c MovB
	
Label_141:
	if(var_240_bool == 0) goto Label_147; // 0x8d JumpB
	var_254_int = 539217; // 0x8e PushI
	var_255_int = 43420; // 0x8f PushI
	var_256_int = 41160; // 0x90 PushI
	AddReply(var_254_int, var_255_int, var_256_int); // 0x91 TObjFunc
	
Label_147:
	var_257_bool = 0; // 0x93 PushV
	var_257_bool = 0; // 0x94 MovB
	var_258_bool = 0; var_259_object = Obj(); // 0x95 PushV
	var_259_object = var_1_object; // 0x96 MovT
	func_1116(var_259_object); // 0x97 NEW_2
	if(var_258_bool == 0) goto Label_160; // 0x99 JumpB
	var_260_bool = 0; var_261_object = Obj(); // 0x9a PushV
	var_261_object = var_1_object; // 0x9b MovT
	func_1152(var_261_object); // 0x9c NEW_2
	if(var_260_bool == 0) goto Label_160; // 0x9e JumpB
	var_257_bool = 1; // 0x9f MovB
	
Label_160:
	if(var_257_bool == 0) goto Label_166; // 0xa0 JumpB
	var_266_int = 541289; // 0xa1 PushI
	var_267_int = 43423; // 0xa2 PushI
	var_268_int = 43422; // 0xa3 PushI
	AddReply(var_266_int, var_267_int, var_268_int); // 0xa4 TObjFunc
	
Label_166:
	var_269_int = 541288; // 0xa6 PushI
	var_270_int = -1; // 0xa7 PushI
	var_271_int = 43421; // 0xa8 PushI
	AddReply(var_269_int, var_270_int, var_271_int); // 0xa9 TObjFunc
	goto Label_174; // 0xab Jump
}


func_1049()
{
	var_9_bool = 0; // 0x419 PushV
	func_1189(var_9_bool); // 0x41a NEW_2
	if(var_9_bool == 0) goto Label_1055; // 0x41c JumpB
	lshStopSpeech(); // 0x41d Func
	
Label_1055:
	return 0; // 0x41f Return
}


func_923(var_90_bool)
{
	var_92_string = ""; var_93_int = 0; var_94_bool = 0; var_95_int = 0; var_96_string = ""; var_97_string = ""; var_98_int = 0; var_99_bool = 0; var_100_int = 0; var_101_string = ""; // 0x39b PushV
	var_97_string = "c"; // 0x39c MovS
	var_98_int = 0; // 0x39d MovI
	
Label_926:
	var_102_int = 1; // 0x39e PushI
	if(var_102_int == 0) goto Label_939; // 0x39f JumpB
	var_103_int = 1; // 0x3a0 PushI
	var_104_int = var_98_int + var_103_int; // 0x3a1 Add
	var_105_int = var_97_string + var_104_int; // 0x3a2 Add
	HasProperty(var_105_int, var_99_bool); // 0x3a3 ObjFunc
	var_106_bool = var_99_bool == 0; // 0x3a5 Not
	if(var_106_bool == 0) goto Label_936; // 0x3a6 JumpB
	goto Label_939; // 0x3a7 Jump
	
Label_939:
	var_107_bool = var_98_int == 0; // 0x3ab Not
	if(var_107_bool == 0) goto Label_943; // 0x3ac JumpB
	var_90_bool = 0; // 0x3ad MovB
	return 10; // 0x3ae Return
	
Label_943:
	var_100_int = 0; // 0x3af MovI
	var_108_int = 1; // 0x3b0 PushI
	var_109_bool = var_98_int > var_108_int; // 0x3b1 GT
	if(var_109_bool == 0) goto Label_949; // 0x3b2 JumpB
	irand(var_100_int, var_98_int); // 0x3b3 Func
	
Label_949:
	var_110_int = 1; // 0x3b5 PushI
	var_111_int = var_100_int + var_110_int; // 0x3b6 Add
	var_112_int = var_97_string + var_111_int; // 0x3b7 Add
	GetProperty(var_112_int, var_101_string); // 0x3b8 ObjFunc
	var_113_bool = 0; var_114_string = ""; // 0x3ba PushV
	var_114_string = var_101_string; // 0x3bb Mov
	func_1034(var_113_bool, var_114_string); // 0x3bc NEW_2
	var_90_bool = var_113_bool; // 0x3bd Mov
	return 10; // 0x3bf Return
	
Label_936:
	var_119_int = 1; // 0x3a8 PushI
	var_98_int = var_98_int + var_119_int; // 0x3a9 Add2
	goto Label_926; // 0x3aa Jump
}


func_1116(var_241_bool)
{
	var_243_int = 0; var_244_string = ""; // 0x45d PushV
	var_244_string = "game_final"; // 0x45e MovS
	func_1072(var_243_int, var_244_string); // 0x45f NEW_2
	var_245_int = 3; // 0x461 PushI
	var_246_bool = var_243_int == var_245_int; // 0x462 Eq
	if(var_246_bool == 0) goto Label_1126; // 0x463 JumpB
	var_241_bool = 1; // 0x464 MovB
	return 0; // 0x465 Return
	
Label_1126:
	var_241_bool = 0; // 0x466 MovB
	return 0; // 0x467 Return
}


func_1181(var_67_int)
{
	var_67_int = 515540; // 0x49d MovI
	return 0; // 0x49e Return
}


func_1183(var_66_int)
{
	var_66_int = 502865; // 0x49f MovI
	return 0; // 0x4a0 Return
}


func_1056(var_9_object)
{
	var_10_object = Obj(); var_11_object = Obj(); // 0x420 PushV
	self(var_11_object); // 0x421 Func
	var_9_object = var_11_object; // 0x423 Mov
	return 2; // 0x424 Return
}


func_1185(var_68_string)
{
	var_68_string = "ui/NPC_Klara.png"; // 0x4a1 MovS
	return 0; // 0x4a2 Return
}


func_865(var_79_bool, var_80_object)
{
	var_84_int = 0; var_85_int = 0; var_86_int = 0; var_87_int = 0; // 0x361 PushV
	var_88_string = "voice_common"; // 0x362 PushS
	GetVariable(var_88_string, var_86_int); // 0x363 Func
	var_89_int = var_86_int; // 0x365 Push
	if(var_89_int == 0) goto Label_903; // 0x366 JumpB
	var_90_bool = 0; var_91_object = Obj(); // 0x367 PushV
	var_91_object = var_80_object; // 0x368 Mov
	func_923(var_91_object); // 0x369 NEW_2
	var_120_bool = var_90_bool == 0; // 0x36b Not
	if(var_120_bool == 0) goto Label_885; // 0x36c JumpB
	var_121_bool = 0; var_122_object = Obj(); // 0x36d PushV
	var_122_object = var_80_object; // 0x36e Mov
	func_960(var_122_object); // 0x36f NEW_2
	var_156_bool = var_121_bool == 0; // 0x371 Not
	if(var_156_bool == 0) goto Label_885; // 0x372 JumpB
	var_79_bool = 0; // 0x373 MovB
	return 4; // 0x374 Return
	
Label_885:
	var_157_int = 2; // 0x375 PushI
	irand(var_87_int, var_157_int); // 0x376 Func
	var_158_int = var_87_int; // 0x378 Push
	if(var_158_int == 0) goto Label_898; // 0x379 JumpB
	var_159_string = "voice_common"; // 0x37a PushS
	var_160_int = 1; // 0x37b PushI
	var_161_int = var_86_int + var_160_int; // 0x37c Add
	var_162_int = 3; // 0x37d PushI
	var_163_int = var_161_int / var_162_int; // 0x37e Mod
	SetVariable(var_159_string, var_163_int); // 0x37f Func
	goto Label_902; // 0x381 Jump
	
Label_902:
	goto Label_921; // 0x386 Jump
	
Label_921:
	var_79_bool = 1; // 0x399 MovB
	return 4; // 0x39a Return
	
Label_898:
	var_164_string = "voice_common"; // 0x382 PushS
	var_165_int = 0; // 0x383 PushI
	SetVariable(var_164_string, var_165_int); // 0x384 Func
	
Label_903:
	var_166_bool = 0; var_167_object = Obj(); // 0x387 PushV
	var_167_object = var_80_object; // 0x388 Mov
	func_960(var_167_object); // 0x389 NEW_2
	var_168_bool = var_166_bool == 0; // 0x38b Not
	if(var_168_bool == 0) goto Label_917; // 0x38c JumpB
	var_169_bool = 0; var_170_object = Obj(); // 0x38d PushV
	var_170_object = var_80_object; // 0x38e Mov
	func_923(var_170_object); // 0x38f NEW_2
	var_171_bool = var_169_bool == 0; // 0x391 Not
	if(var_171_bool == 0) goto Label_917; // 0x392 JumpB
	var_79_bool = 0; // 0x393 MovB
	return 4; // 0x394 Return
	
Label_917:
	var_172_string = "voice_common"; // 0x395 PushS
	var_173_int = 1; // 0x396 PushI
	SetVariable(var_172_string, var_173_int); // 0x397 Func
}


func_1187(var_69_string)
{
	var_69_string = "ui/NPC_Klara_b.png"; // 0x4a3 MovS
	return 0; // 0x4a4 Return
}


func_1189(var_61_bool)
{
	var_61_bool = 1; // 0x4a5 MovB
	return 0; // 0x4a6 Return
}


func_1062(var_45_cvector, var_46_cvector)
{
	var_48_float = 0; var_49_float = 0; // 0x426 PushV
	var_50_int = var_46_cvector | var_46_cvector; // 0x427 Or
	var_49_float = sqrt(var_50_int); // 0x428 Sqrt2
	var_51_float = 0.0; // 0x429 PushF
	var_52_bool = var_49_float < var_51_float; // 0x42a LT
	if(var_52_bool == 0) goto Label_1070; // 0x42b JumpB
	var_45_cvector = CVector(0.0, 0.0, 0.0); // 0x42c MovV
	return 2; // 0x42d Return
	
Label_1070:
	var_45_cvector = var_46_cvector / var_46_cvector; // 0x42e Div2
	return 2; // 0x42f Return
}


func_1128(var_208_bool)
{
	var_210_int = 0; var_211_string = ""; // 0x469 PushV
	var_211_string = "ook12Klara2Sobor1"; // 0x46a MovS
	func_1072(var_210_int, var_211_string); // 0x46b NEW_2
	var_212_int = 0; // 0x46d PushI
	var_213_bool = var_210_int == var_212_int; // 0x46e Eq
	if(var_213_bool == 0) goto Label_1138; // 0x46f JumpB
	var_208_bool = 1; // 0x470 MovB
	return 0; // 0x471 Return
	
Label_1138:
	var_208_bool = 0; // 0x472 MovB
	return 0; // 0x473 Return
}


func_1003(var_222_string)
{
	var_223_bool = 0; var_224_float = 0; var_225_float = 0; var_226_bool = 0; var_227_float = 0; var_228_float = 0; // 0x3eb PushV
	lshHasAnimation(var_226_bool, var_222_string); // 0x3ec Func
	var_229_bool = var_226_bool; // 0x3ee Push
	if(var_229_bool == 0) goto Label_1014; // 0x3ef JumpB
	lshGetAnimTimes(var_222_string, var_227_float, var_228_float); // 0x3f0 Func
	var_230_bool = 0; // 0x3f2 PushB
	lshPlayAnimation(var_227_float, var_228_float, var_230_bool); // 0x3f3 Func
	goto Label_1018; // 0x3f5 Jump
	
Label_1018:
	return 6; // 0x3fa Return
	
Label_1014:
	var_231_string = "Can't find lsh animation : "; // 0x3f6 PushS
	var_232_int = var_231_string + var_222_string; // 0x3f7 Add
	Trace(var_232_int); // 0x3f8 Func
}


func_1072(var_183_int, var_184_string)
{
	var_185_int = 0; var_186_int = 0; // 0x430 PushV
	GetVariable(var_184_string, var_186_int); // 0x431 Func
	var_183_int = var_186_int; // 0x433 Mov
	return 2; // 0x434 Return
}


func_1140(var_248_bool)
{
	var_250_int = 0; var_251_string = ""; // 0x475 PushV
	var_251_string = "ook12Klara2Sobor2"; // 0x476 MovS
	func_1072(var_250_int, var_251_string); // 0x477 NEW_2
	var_252_int = 0; // 0x479 PushI
	var_253_bool = var_250_int == var_252_int; // 0x47a Eq
	if(var_253_bool == 0) goto Label_1150; // 0x47b JumpB
	var_248_bool = 1; // 0x47c MovB
	return 0; // 0x47d Return
	
Label_1150:
	var_248_bool = 0; // 0x47e MovB
	return 0; // 0x47f Return
}


func_1077(var_134_int)
{
	var_135_float = 0; var_136_float = 0; // 0x435 PushV
	GetGameTime(var_136_float); // 0x436 Func
	var_137_int = 1; // 0x438 PushI
	var_138_int = 0; // 0x439 PushV
	var_139_int = 24; // 0x43a PushI
	var_138_int = var_136_float / var_136_float; // 0x43b Div2
	var_134_int = var_137_int + var_138_int; // 0x43c Add2
	return 2; // 0x43d Return
}


func_1019(var_194_string, var_195_bool)
{
	var_198_bool = 0; var_199_float = 0; var_200_float = 0; var_201_bool = 0; var_202_float = 0; var_203_float = 0; // 0x3fb PushV
	lshHasAnimation(var_201_bool, var_194_string); // 0x3fc Func
	var_204_bool = var_201_bool; // 0x3fe Push
	if(var_204_bool == 0) goto Label_1029; // 0x3ff JumpB
	lshGetAnimTimes(var_194_string, var_202_float, var_203_float); // 0x400 Func
	lshPlayAnimation(var_202_float, var_203_float, var_195_bool); // 0x402 Func
	goto Label_1033; // 0x404 Jump
	
Label_1033:
	return 6; // 0x409 Return
	
Label_1029:
	var_205_string = "Can't find lsh animation : "; // 0x405 PushS
	var_206_int = var_205_string + var_194_string; // 0x406 Add
	Trace(var_206_int); // 0x407 Func
}


func_1086()
{
	var_14_string = "ook12Klara2Sobor1"; // 0x43f PushS
	var_15_int = 1; // 0x440 PushI
	SetVariable(var_14_string, var_15_int); // 0x441 Func
	return 0; // 0x443 Return
}


