task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool)
{
	var_8_int = 1; // 0xe3 PushI
	if(var_8_int == 0) goto Label_719; // 0xe4 JumpB
	func_1047(); // 0xe6 NEW_2
	var_10_int = 41158; // 0xe8 PushI
	var_11_bool = var_7_bool == var_10_int; // 0xe9 Eq
	if(var_11_bool == 0) goto Label_240; // 0xea JumpB
	var_12_object = Obj(); var_13_object = Obj(); // 0xeb PushV
	var_12_object = var_1_object; // 0xec MovT
	var_13_object = var_0_object; // 0xed MovT
	func_1084(); // 0xee NEW_2
	
Label_240:
	var_16_int = 41160; // 0xf0 PushI
	var_17_bool = var_7_bool == var_16_int; // 0xf1 Eq
	if(var_17_bool == 0) goto Label_248; // 0xf2 JumpB
	var_18_object = Obj(); var_19_object = Obj(); // 0xf3 PushV
	var_18_object = var_1_object; // 0xf4 MovT
	var_19_object = var_0_object; // 0xf5 MovT
	func_1090(); // 0xf6 NEW_2
	
Label_248:
	var_22_int = 43422; // 0xf8 PushI
	var_23_bool = var_7_bool == var_22_int; // 0xf9 Eq
	if(var_23_bool == 0) goto Label_256; // 0xfa JumpB
	var_24_object = Obj(); var_25_object = Obj(); // 0xfb PushV
	var_24_object = var_1_object; // 0xfc MovT
	var_25_object = var_0_object; // 0xfd MovT
	func_1096(); // 0xfe NEW_2
	
Label_256:
	var_28_int = 41157; // 0x100 PushI
	var_29_bool = var_6_int == var_28_int; // 0x101 Eq
	if(var_29_bool == 0) goto Label_344; // 0x102 JumpB
	var_30_bool = 0; var_31_object = Obj(); // 0x103 PushV
	var_31_object = var_1_object; // 0x104 MovT
	func_1102(var_31_object); // 0x105 NEW_2
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
	func_1126(var_58_object); // 0x114 NEW_2
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
	func_1114(var_73_object); // 0x12f NEW_2
	var_78_bool = var_72_bool == 0; // 0x131 Not
	if(var_78_bool == 0) goto Label_313; // 0x132 JumpB
	var_79_bool = 0; var_80_object = Obj(); // 0x133 PushV
	var_80_object = var_1_object; // 0x134 MovT
	func_1138(var_80_object); // 0x135 NEW_2
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
	func_1114(var_90_object); // 0x143 NEW_2
	if(var_89_bool == 0) goto Label_332; // 0x145 JumpB
	var_91_bool = 0; var_92_object = Obj(); // 0x146 PushV
	var_92_object = var_1_object; // 0x147 MovT
	func_1150(var_92_object); // 0x148 NEW_2
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
	func_1187(var_260_bool); // 0x2c5 NEW_2
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
	func_1054(var_14_object); // 0x2ee NEW_2
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
	func_1054(var_9_object); // 0x303 NEW_2
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


func_0(var_0_object, var_7_int, var_8_object)
{
	var_10_object = Obj(); var_11_bool = 0; var_12_int = 0; var_13_bool = 0; var_14_object = Obj(); var_15_bool = 0; var_16_int = 0; var_17_bool = 0; // 0x0 PushV
	var_0_object = var_8_object; // 0x1 TMov
	var_18_bool = 0; var_19_object = Obj(); var_20_float = 0; // 0x2 PushV
	var_19_object = var_8_object; // 0x3 Mov
	var_20_float = 70.0; // 0x4 MovF
	func_778(var_19_object, var_20_float); // 0x5 NEW_2
	var_64_bool = var_18_bool == 0; // 0x7 Not
	if(var_64_bool == 0) goto Label_11; // 0x8 JumpB
	var_7_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_14_object); // 0xb Func
	var_65_int = 0; // 0xd PushV
	func_1181(var_65_int); // 0xe NEW_2
	SetNPCName(var_65_int); // 0x10 ObjFunc
	var_66_int = 0; // 0x12 PushV
	func_1179(var_66_int); // 0x13 NEW_2
	SetNPCDescription(var_66_int); // 0x15 ObjFunc
	var_67_string = ""; // 0x17 PushV
	func_1183(var_67_string); // 0x18 NEW_2
	SetPhoto(var_67_string); // 0x1a ObjFunc
	var_68_string = ""; // 0x1c PushV
	func_1185(var_68_string); // 0x1d NEW_2
	SetPhoto2(var_68_string); // 0x1f ObjFunc
	var_69_int = 0; // 0x21 PushV
	func_1162(var_69_int); // 0x22 NEW_2
	SetPlayerName(var_69_int); // 0x24 ObjFunc
	var_16_int = -1; // 0x26 MovI
	IsOverrideActive(var_15_bool); // 0x27 Func
	var_77_bool = var_15_bool; // 0x29 Push
	if(var_77_bool == 0) goto Label_45; // 0x2a JumpB
	var_7_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_14_object); // 0x2d Func
	var_78_bool = 0; var_79_object = Obj(); // 0x2f PushV
	var_80_object = Obj(); // 0x30 PushV
	func_1054(var_80_object); // 0x31 NEW_2
	var_79_object = var_80_object; // 0x32 Mov
	func_863(var_78_bool, var_79_object); // 0x34 NEW_2
	var_173_object = Obj(); var_174_object = Obj(); // 0x36 PushV
	var_173_object = var_8_object; // 0x37 Mov
	var_174_object = var_14_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_175_object, var_176_object, var_177_string, var_178_bool, var_173_object, var_174_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	IsDialogEnd(var_17_bool); // 0x3d ObjFunc
	
Label_63:
	var_271_bool = var_17_bool == 0; // 0x3f Not
	if(var_271_bool == 0) goto Label_70; // 0x40 JumpB
	sync(); // 0x41 Func
	IsDialogEnd(var_17_bool); // 0x43 ObjFunc
	goto Label_63; // 0x45 Jump
	
Label_70:
	var_272_object = Obj(); // 0x46 PushV
	var_272_object = var_8_object; // 0x47 Mov
	func_846(); // 0x48 NEW_2
	StopDialog(var_14_object); // 0x4a Func
	GetReturnValue(var_16_int); // 0x4c ObjFunc
	var_7_int = var_16_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_1090()
{
	var_20_string = "ook12Klara2Sobor2"; // 0x443 PushS
	var_21_int = 1; // 0x444 PushI
	SetVariable(var_20_string, var_21_int); // 0x445 Func
	return 0; // 0x447 Return
}


func_776(var_8_bool)
{
	var_8_bool = 1; // 0x308 MovB
	return 0; // 0x309 Return
}


func_1032(var_112_bool, var_113_string)
{
	var_114_bool = 0; var_115_bool = 0; // 0x408 PushV
	var_116_bool = 0; // 0x409 PushV
	func_1187(var_116_bool); // 0x40a NEW_2
	if(var_116_bool == 0) goto Label_1045; // 0x40c JumpB
	lshHasSpeech(var_115_bool, var_113_string); // 0x40d Func
	var_117_bool = var_115_bool; // 0x40f Push
	if(var_117_bool == 0) goto Label_1045; // 0x410 JumpB
	lshPlaySpeech(var_113_string); // 0x411 Func
	var_112_bool = 1; // 0x413 MovB
	return 2; // 0x414 Return
	
Label_1045:
	var_112_bool = 0; // 0x415 MovB
	return 2; // 0x416 Return
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
	func_1060(var_45_cvector, var_46_cvector); // 0x325 NEW_2
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
	CameraTransit(var_36_cvector, var_34_cvector); // 0x335 Func
	var_58_float = GetByIndex(var_35_cvector, 0); // 0x337 PushE
	var_59_float = GetByIndex(var_35_cvector, 2); // 0x338 PushE
	Rotate(var_58_float, var_59_float); // 0x339 Func
	var_60_bool = 0; // 0x33b PushV
	func_1187(var_60_bool); // 0x33c NEW_2
	if(var_60_bool == 0) goto Label_832; // 0x33e JumpB
	goto Label_840; // 0x33f Jump
	
Label_840:
	CameraWaitForPlayFinish(); // 0x348 Func
	ResumeWorld(); // 0x34a Func
	var_18_bool = 1; // 0x34c MovB
	return 18; // 0x34d Return
	
Label_832:
	var_61_string = "head"; // 0x340 PushS
	HasAnimationTrack(var_38_bool, var_61_string); // 0x341 Func
	var_62_bool = var_38_bool; // 0x343 Push
	if(var_62_bool == 0) goto Label_840; // 0x344 JumpB
	var_63_string = "head"; // 0x345 PushS
	LookAsyncCamera(var_63_string); // 0x346 Func
}


func_1162(var_69_int)
{
	var_70_int = 0; var_71_int = 0; // 0x48a PushV
	var_72_string = "branch"; // 0x48b PushS
	GetVariable(var_72_string, var_71_int); // 0x48c Func
	var_73_int = 0; // 0x48e PushI
	var_74_bool = var_71_int == var_73_int; // 0x48f Eq
	if(var_74_bool == 0) goto Label_1172; // 0x490 JumpB
	var_69_int = 1; // 0x491 MovI
	return 2; // 0x492 Return
	
Label_1172:
	var_75_int = 1; // 0x494 PushI
	var_76_bool = var_71_int == var_75_int; // 0x495 Eq
	if(var_76_bool == 0) goto Label_1177; // 0x496 JumpB
	var_69_int = 2; // 0x497 MovI
	return 2; // 0x498 Return
	
Label_1177:
	var_69_int = 3; // 0x499 MovI
	return 2; // 0x49a Return
}


func_1096()
{
	var_26_string = "ook12Klara2Sobor3"; // 0x449 PushS
	var_27_int = 1; // 0x44a PushI
	SetVariable(var_26_string, var_27_int); // 0x44b Func
	return 0; // 0x44d Return
}


func_204(var_2_object, var_189_string)
{
	var_190_bool = 0; // 0xcd PushV
	func_1187(var_190_bool); // 0xce NEW_2
	var_191_bool = var_190_bool == 0; // 0xd0 Not
	if(var_191_bool == 0) goto Label_211; // 0xd1 JumpB
	return 0; // 0xd2 Return
	
Label_211:
	var_192_bool = var_189_string == var_2_object; // 0xd3 Eq
	if(var_192_bool == 0) goto Label_214; // 0xd4 JumpB
	return 0; // 0xd5 Return
	
Label_214:
	var_193_string = ""; var_194_bool = 0; // 0xd6 PushV
	var_193_string = var_189_string; // 0xd7 Mov
	var_195_string = ""; // 0xd8 PushS
	var_196_bool = var_189_string == var_195_string; // 0xd9 Eq
	if(var_196_bool == 0) goto Label_221; // 0xda JumpB
	var_194_bool = 0; // 0xdb MovB
	goto Label_222; // 0xdc Jump
	
Label_222:
	func_1017(var_193_string, var_194_bool); // 0xde NEW_2
	var_2_object = var_189_string; // 0xe0 TMov
	return 0; // 0xe1 Return
	
Label_221:
	var_194_bool = 1; // 0xdd MovB
}


func_846()
{
	var_273_bool = 0; var_274_bool = 0; // 0x34e PushV
	CameraSwitchToNormal(); // 0x34f Func
	var_275_bool = 0; // 0x351 PushV
	func_1187(var_275_bool); // 0x352 NEW_2
	if(var_275_bool == 0) goto Label_854; // 0x354 JumpB
	goto Label_862; // 0x355 Jump
	
Label_862:
	return 2; // 0x35e Return
	
Label_854:
	var_276_string = "head"; // 0x356 PushS
	HasAnimationTrack(var_274_bool, var_276_string); // 0x357 Func
	var_277_bool = var_274_bool; // 0x359 Push
	if(var_277_bool == 0) goto Label_862; // 0x35a JumpB
	var_278_string = "head"; // 0x35b PushS
	UnlookAsync(var_278_string); // 0x35c Func
}


func_1102(var_180_bool)
{
	var_182_int = 0; var_183_string = ""; // 0x44f PushV
	var_183_string = "game_final"; // 0x450 MovS
	func_1070(var_182_int, var_183_string); // 0x451 NEW_2
	var_186_int = 0; // 0x453 PushI
	var_187_bool = var_182_int != var_186_int; // 0x454 Neq
	if(var_187_bool == 0) goto Label_1112; // 0x455 JumpB
	var_180_bool = 1; // 0x456 MovB
	return 0; // 0x457 Return
	
Label_1112:
	var_180_bool = 0; // 0x458 MovB
	return 0; // 0x459 Return
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_173_object, var_174_object)
{
	var_0_object = var_174_object; // 0x52 TMov
	var_1_object = var_173_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_179_int = 1; // 0x55 PushI
	if(var_179_int == 0) goto Label_174; // 0x56 JumpB
	var_180_bool = 0; var_181_object = Obj(); // 0x57 PushV
	var_181_object = var_1_object; // 0x58 MovT
	func_1102(var_181_object); // 0x59 NEW_2
	var_188_bool = var_180_bool == 0; // 0x5b Not
	if(var_188_bool == 0) goto Label_118; // 0x5c JumpB
	var_189_string = ""; // 0x5d PushV
	var_189_string = "Neutral"; // 0x5e MovS
	func_204(var_174_object, var_189_string); // 0x5f NEW_2
	var_206_int = 539214; // 0x61 PushI
	SetMessage(var_206_int); // 0x62 TObjFunc
	ClearReplies(); // 0x64 TObjFunc
	var_207_bool = 0; var_208_object = Obj(); // 0x66 PushV
	var_208_object = var_1_object; // 0x67 MovT
	func_1126(var_208_object); // 0x68 NEW_2
	if(var_207_bool == 0) goto Label_112; // 0x6a JumpB
	var_213_int = 539215; // 0x6b PushI
	var_214_int = 43417; // 0x6c PushI
	var_215_int = 41158; // 0x6d PushI
	AddReply(var_213_int, var_214_int, var_215_int); // 0x6e TObjFunc
	
Label_112:
	var_216_int = 541312; // 0x70 PushI
	var_217_int = -1; // 0x71 PushI
	var_218_int = 43448; // 0x72 PushI
	AddReply(var_216_int, var_217_int, var_218_int); // 0x73 TObjFunc
	goto Label_174; // 0x75 Jump
	
Label_174:
	var_219_bool = 0; // 0xae PushV
	func_1187(var_219_bool); // 0xaf NEW_2
	if(var_219_bool == 0) goto Label_189; // 0xb1 JumpB
	
Label_178:
	lshWaitForAnimEnd(); // 0xb2 Func
	var_220_string = var_3_string; // 0xb4 PushT
	if(var_220_string == 0) goto Label_183; // 0xb5 JumpB
	goto Label_188; // 0xb6 Jump
	
Label_188:
	goto Label_203; // 0xbc Jump
	
Label_203:
	return 0; // 0xcb Return
	
Label_183:
	var_221_string = ""; // 0xb7 PushV
	var_221_string = var_2_object; // 0xb8 MovT
	func_1001(var_221_string); // 0xb9 NEW_2
	goto Label_178; // 0xbb Jump
	
Label_189:
	var_232_string = "all"; // 0xbd PushS
	var_233_string = "idle"; // 0xbe PushS
	PlayAnimation(var_232_string, var_233_string); // 0xbf Func
	
Label_193:
	WaitForAnimEnd(); // 0xc1 Func
	var_234_string = var_3_string; // 0xc3 PushT
	if(var_234_string == 0) goto Label_198; // 0xc4 JumpB
	goto Label_203; // 0xc5 Jump
	
Label_198:
	var_235_string = "all"; // 0xc6 PushS
	var_236_string = "idle"; // 0xc7 PushS
	PlayAnimation(var_235_string, var_236_string); // 0xc8 Func
	goto Label_193; // 0xca Jump
	
Label_118:
	var_237_string = ""; // 0x76 PushV
	var_237_string = "Sly"; // 0x77 MovS
	func_204(var_174_object, var_237_string); // 0x78 NEW_2
	var_238_int = 539216; // 0x7a PushI
	SetMessage(var_238_int); // 0x7b TObjFunc
	ClearReplies(); // 0x7d TObjFunc
	var_239_bool = 0; // 0x7f PushV
	var_239_bool = 0; // 0x80 MovB
	var_240_bool = 0; var_241_object = Obj(); // 0x81 PushV
	var_241_object = var_1_object; // 0x82 MovT
	func_1114(var_241_object); // 0x83 NEW_2
	var_246_bool = var_240_bool == 0; // 0x85 Not
	if(var_246_bool == 0) goto Label_141; // 0x86 JumpB
	var_247_bool = 0; var_248_object = Obj(); // 0x87 PushV
	var_248_object = var_1_object; // 0x88 MovT
	func_1138(var_248_object); // 0x89 NEW_2
	if(var_247_bool == 0) goto Label_141; // 0x8b JumpB
	var_239_bool = 1; // 0x8c MovB
	
Label_141:
	if(var_239_bool == 0) goto Label_147; // 0x8d JumpB
	var_253_int = 539217; // 0x8e PushI
	var_254_int = 43420; // 0x8f PushI
	var_255_int = 41160; // 0x90 PushI
	AddReply(var_253_int, var_254_int, var_255_int); // 0x91 TObjFunc
	
Label_147:
	var_256_bool = 0; // 0x93 PushV
	var_256_bool = 0; // 0x94 MovB
	var_257_bool = 0; var_258_object = Obj(); // 0x95 PushV
	var_258_object = var_1_object; // 0x96 MovT
	func_1114(var_258_object); // 0x97 NEW_2
	if(var_257_bool == 0) goto Label_160; // 0x99 JumpB
	var_259_bool = 0; var_260_object = Obj(); // 0x9a PushV
	var_260_object = var_1_object; // 0x9b MovT
	func_1150(var_260_object); // 0x9c NEW_2
	if(var_259_bool == 0) goto Label_160; // 0x9e JumpB
	var_256_bool = 1; // 0x9f MovB
	
Label_160:
	if(var_256_bool == 0) goto Label_166; // 0xa0 JumpB
	var_265_int = 541289; // 0xa1 PushI
	var_266_int = 43423; // 0xa2 PushI
	var_267_int = 43422; // 0xa3 PushI
	AddReply(var_265_int, var_266_int, var_267_int); // 0xa4 TObjFunc
	
Label_166:
	var_268_int = 541288; // 0xa6 PushI
	var_269_int = -1; // 0xa7 PushI
	var_270_int = 43421; // 0xa8 PushI
	AddReply(var_268_int, var_269_int, var_270_int); // 0xa9 TObjFunc
	goto Label_174; // 0xab Jump
}


func_1047()
{
	var_9_bool = 0; // 0x417 PushV
	func_1187(var_9_bool); // 0x418 NEW_2
	if(var_9_bool == 0) goto Label_1053; // 0x41a JumpB
	lshStopSpeech(); // 0x41b Func
	
Label_1053:
	return 0; // 0x41d Return
}


func_921(var_89_bool)
{
	var_91_string = ""; var_92_int = 0; var_93_bool = 0; var_94_int = 0; var_95_string = ""; var_96_string = ""; var_97_int = 0; var_98_bool = 0; var_99_int = 0; var_100_string = ""; // 0x399 PushV
	var_96_string = "c"; // 0x39a MovS
	var_97_int = 0; // 0x39b MovI
	
Label_924:
	var_101_int = 1; // 0x39c PushI
	if(var_101_int == 0) goto Label_937; // 0x39d JumpB
	var_102_int = 1; // 0x39e PushI
	var_103_int = var_97_int + var_102_int; // 0x39f Add
	var_104_int = var_96_string + var_103_int; // 0x3a0 Add
	HasProperty(var_104_int, var_98_bool); // 0x3a1 ObjFunc
	var_105_bool = var_98_bool == 0; // 0x3a3 Not
	if(var_105_bool == 0) goto Label_934; // 0x3a4 JumpB
	goto Label_937; // 0x3a5 Jump
	
Label_937:
	var_106_bool = var_97_int == 0; // 0x3a9 Not
	if(var_106_bool == 0) goto Label_941; // 0x3aa JumpB
	var_89_bool = 0; // 0x3ab MovB
	return 10; // 0x3ac Return
	
Label_941:
	var_99_int = 0; // 0x3ad MovI
	var_107_int = 1; // 0x3ae PushI
	var_108_bool = var_97_int > var_107_int; // 0x3af GT
	if(var_108_bool == 0) goto Label_947; // 0x3b0 JumpB
	irand(var_99_int, var_97_int); // 0x3b1 Func
	
Label_947:
	var_109_int = 1; // 0x3b3 PushI
	var_110_int = var_99_int + var_109_int; // 0x3b4 Add
	var_111_int = var_96_string + var_110_int; // 0x3b5 Add
	GetProperty(var_111_int, var_100_string); // 0x3b6 ObjFunc
	var_112_bool = 0; var_113_string = ""; // 0x3b8 PushV
	var_113_string = var_100_string; // 0x3b9 Mov
	func_1032(var_112_bool, var_113_string); // 0x3ba NEW_2
	var_89_bool = var_112_bool; // 0x3bb Mov
	return 10; // 0x3bd Return
	
Label_934:
	var_118_int = 1; // 0x3a6 PushI
	var_97_int = var_97_int + var_118_int; // 0x3a7 Add2
	goto Label_924; // 0x3a8 Jump
}


func_1114(var_240_bool)
{
	var_242_int = 0; var_243_string = ""; // 0x45b PushV
	var_243_string = "game_final"; // 0x45c MovS
	func_1070(var_242_int, var_243_string); // 0x45d NEW_2
	var_244_int = 3; // 0x45f PushI
	var_245_bool = var_242_int == var_244_int; // 0x460 Eq
	if(var_245_bool == 0) goto Label_1124; // 0x461 JumpB
	var_240_bool = 1; // 0x462 MovB
	return 0; // 0x463 Return
	
Label_1124:
	var_240_bool = 0; // 0x464 MovB
	return 0; // 0x465 Return
}


func_1179(var_66_int)
{
	var_66_int = 515540; // 0x49b MovI
	return 0; // 0x49c Return
}


func_1150(var_259_bool)
{
	var_261_int = 0; var_262_string = ""; // 0x47f PushV
	var_262_string = "ook12Klara2Sobor3"; // 0x480 MovS
	func_1070(var_261_int, var_262_string); // 0x481 NEW_2
	var_263_int = 0; // 0x483 PushI
	var_264_bool = var_261_int == var_263_int; // 0x484 Eq
	if(var_264_bool == 0) goto Label_1160; // 0x485 JumpB
	var_259_bool = 1; // 0x486 MovB
	return 0; // 0x487 Return
	
Label_1160:
	var_259_bool = 0; // 0x488 MovB
	return 0; // 0x489 Return
}


func_1181(var_65_int)
{
	var_65_int = 502865; // 0x49d MovI
	return 0; // 0x49e Return
}


func_1054(var_9_object)
{
	var_10_object = Obj(); var_11_object = Obj(); // 0x41e PushV
	self(var_11_object); // 0x41f Func
	var_9_object = var_11_object; // 0x421 Mov
	return 2; // 0x422 Return
}


func_1183(var_67_string)
{
	var_67_string = "ui/NPC_Klara.png"; // 0x49f MovS
	return 0; // 0x4a0 Return
}


func_863(var_78_bool, var_79_object)
{
	var_83_int = 0; var_84_int = 0; var_85_int = 0; var_86_int = 0; // 0x35f PushV
	var_87_string = "voice_common"; // 0x360 PushS
	GetVariable(var_87_string, var_85_int); // 0x361 Func
	var_88_int = var_85_int; // 0x363 Push
	if(var_88_int == 0) goto Label_901; // 0x364 JumpB
	var_89_bool = 0; var_90_object = Obj(); // 0x365 PushV
	var_90_object = var_79_object; // 0x366 Mov
	func_921(var_90_object); // 0x367 NEW_2
	var_119_bool = var_89_bool == 0; // 0x369 Not
	if(var_119_bool == 0) goto Label_883; // 0x36a JumpB
	var_120_bool = 0; var_121_object = Obj(); // 0x36b PushV
	var_121_object = var_79_object; // 0x36c Mov
	func_958(var_121_object); // 0x36d NEW_2
	var_155_bool = var_120_bool == 0; // 0x36f Not
	if(var_155_bool == 0) goto Label_883; // 0x370 JumpB
	var_78_bool = 0; // 0x371 MovB
	return 4; // 0x372 Return
	
Label_883:
	var_156_int = 2; // 0x373 PushI
	irand(var_86_int, var_156_int); // 0x374 Func
	var_157_int = var_86_int; // 0x376 Push
	if(var_157_int == 0) goto Label_896; // 0x377 JumpB
	var_158_string = "voice_common"; // 0x378 PushS
	var_159_int = 1; // 0x379 PushI
	var_160_int = var_85_int + var_159_int; // 0x37a Add
	var_161_int = 3; // 0x37b PushI
	var_162_int = var_160_int / var_161_int; // 0x37c Mod
	SetVariable(var_158_string, var_162_int); // 0x37d Func
	goto Label_900; // 0x37f Jump
	
Label_900:
	goto Label_919; // 0x384 Jump
	
Label_919:
	var_78_bool = 1; // 0x397 MovB
	return 4; // 0x398 Return
	
Label_896:
	var_163_string = "voice_common"; // 0x380 PushS
	var_164_int = 0; // 0x381 PushI
	SetVariable(var_163_string, var_164_int); // 0x382 Func
	
Label_901:
	var_165_bool = 0; var_166_object = Obj(); // 0x385 PushV
	var_166_object = var_79_object; // 0x386 Mov
	func_958(var_166_object); // 0x387 NEW_2
	var_167_bool = var_165_bool == 0; // 0x389 Not
	if(var_167_bool == 0) goto Label_915; // 0x38a JumpB
	var_168_bool = 0; var_169_object = Obj(); // 0x38b PushV
	var_169_object = var_79_object; // 0x38c Mov
	func_921(var_169_object); // 0x38d NEW_2
	var_170_bool = var_168_bool == 0; // 0x38f Not
	if(var_170_bool == 0) goto Label_915; // 0x390 JumpB
	var_78_bool = 0; // 0x391 MovB
	return 4; // 0x392 Return
	
Label_915:
	var_171_string = "voice_common"; // 0x393 PushS
	var_172_int = 1; // 0x394 PushI
	SetVariable(var_171_string, var_172_int); // 0x395 Func
}


func_1185(var_68_string)
{
	var_68_string = "ui/NPC_Klara_b.png"; // 0x4a1 MovS
	return 0; // 0x4a2 Return
}


func_1187(var_60_bool)
{
	var_60_bool = 1; // 0x4a3 MovB
	return 0; // 0x4a4 Return
}


func_1060(var_45_cvector, var_46_cvector)
{
	var_48_float = 0; var_49_float = 0; // 0x424 PushV
	var_50_int = var_46_cvector | var_46_cvector; // 0x425 Or
	var_49_float = sqrt(var_50_int); // 0x426 Sqrt2
	var_51_float = 0.0; // 0x427 PushF
	var_52_bool = var_49_float < var_51_float; // 0x428 LT
	if(var_52_bool == 0) goto Label_1068; // 0x429 JumpB
	var_45_cvector = CVector(0.0, 0.0, 0.0); // 0x42a MovV
	return 2; // 0x42b Return
	
Label_1068:
	var_45_cvector = var_46_cvector / var_46_cvector; // 0x42c Div2
	return 2; // 0x42d Return
}


func_1126(var_207_bool)
{
	var_209_int = 0; var_210_string = ""; // 0x467 PushV
	var_210_string = "ook12Klara2Sobor1"; // 0x468 MovS
	func_1070(var_209_int, var_210_string); // 0x469 NEW_2
	var_211_int = 0; // 0x46b PushI
	var_212_bool = var_209_int == var_211_int; // 0x46c Eq
	if(var_212_bool == 0) goto Label_1136; // 0x46d JumpB
	var_207_bool = 1; // 0x46e MovB
	return 0; // 0x46f Return
	
Label_1136:
	var_207_bool = 0; // 0x470 MovB
	return 0; // 0x471 Return
}


func_1001(var_221_string)
{
	var_222_bool = 0; var_223_float = 0; var_224_float = 0; var_225_bool = 0; var_226_float = 0; var_227_float = 0; // 0x3e9 PushV
	lshHasAnimation(var_225_bool, var_221_string); // 0x3ea Func
	var_228_bool = var_225_bool; // 0x3ec Push
	if(var_228_bool == 0) goto Label_1012; // 0x3ed JumpB
	lshGetAnimTimes(var_221_string, var_226_float, var_227_float); // 0x3ee Func
	var_229_bool = 0; // 0x3f0 PushB
	lshPlayAnimation(var_226_float, var_227_float, var_229_bool); // 0x3f1 Func
	goto Label_1016; // 0x3f3 Jump
	
Label_1016:
	return 6; // 0x3f8 Return
	
Label_1012:
	var_230_string = "Can't find lsh animation : "; // 0x3f4 PushS
	var_231_int = var_230_string + var_221_string; // 0x3f5 Add
	Trace(var_231_int); // 0x3f6 Func
}


func_1070(var_182_int, var_183_string)
{
	var_184_int = 0; var_185_int = 0; // 0x42e PushV
	GetVariable(var_183_string, var_185_int); // 0x42f Func
	var_182_int = var_185_int; // 0x431 Mov
	return 2; // 0x432 Return
}


func_1138(var_247_bool)
{
	var_249_int = 0; var_250_string = ""; // 0x473 PushV
	var_250_string = "ook12Klara2Sobor2"; // 0x474 MovS
	func_1070(var_249_int, var_250_string); // 0x475 NEW_2
	var_251_int = 0; // 0x477 PushI
	var_252_bool = var_249_int == var_251_int; // 0x478 Eq
	if(var_252_bool == 0) goto Label_1148; // 0x479 JumpB
	var_247_bool = 1; // 0x47a MovB
	return 0; // 0x47b Return
	
Label_1148:
	var_247_bool = 0; // 0x47c MovB
	return 0; // 0x47d Return
}


func_1075(var_133_int)
{
	var_134_float = 0; var_135_float = 0; // 0x433 PushV
	GetGameTime(var_135_float); // 0x434 Func
	var_136_int = 1; // 0x436 PushI
	var_137_int = 0; // 0x437 PushV
	var_138_int = 24; // 0x438 PushI
	var_137_int = var_135_float / var_135_float; // 0x439 Div2
	var_133_int = var_136_int + var_137_int; // 0x43a Add2
	return 2; // 0x43b Return
}


func_1017(var_193_string, var_194_bool)
{
	var_197_bool = 0; var_198_float = 0; var_199_float = 0; var_200_bool = 0; var_201_float = 0; var_202_float = 0; // 0x3f9 PushV
	lshHasAnimation(var_200_bool, var_193_string); // 0x3fa Func
	var_203_bool = var_200_bool; // 0x3fc Push
	if(var_203_bool == 0) goto Label_1027; // 0x3fd JumpB
	lshGetAnimTimes(var_193_string, var_201_float, var_202_float); // 0x3fe Func
	lshPlayAnimation(var_201_float, var_202_float, var_194_bool); // 0x400 Func
	goto Label_1031; // 0x402 Jump
	
Label_1031:
	return 6; // 0x407 Return
	
Label_1027:
	var_204_string = "Can't find lsh animation : "; // 0x403 PushS
	var_205_int = var_204_string + var_193_string; // 0x404 Add
	Trace(var_205_int); // 0x405 Func
}


func_1084()
{
	var_14_string = "ook12Klara2Sobor1"; // 0x43d PushS
	var_15_int = 1; // 0x43e PushI
	SetVariable(var_14_string, var_15_int); // 0x43f Func
	return 0; // 0x441 Return
}


func_958(var_120_bool)
{
	var_122_string = ""; var_123_int = 0; var_124_bool = 0; var_125_int = 0; var_126_string = ""; var_127_string = ""; var_128_int = 0; var_129_bool = 0; var_130_int = 0; var_131_string = ""; // 0x3be PushV
	var_132_string = "d"; // 0x3bf PushS
	var_133_int = 0; // 0x3c0 PushV
	func_1075(var_133_int); // 0x3c1 NEW_2
	var_139_int = var_132_string + var_133_int; // 0x3c3 Add
	var_140_string = "m"; // 0x3c4 PushS
	var_127_string = var_139_int + var_140_string; // 0x3c5 Add2
	var_128_int = 0; // 0x3c6 MovI
	
Label_967:
	var_141_int = 1; // 0x3c7 PushI
	if(var_141_int == 0) goto Label_980; // 0x3c8 JumpB
	var_142_int = 1; // 0x3c9 PushI
	var_143_int = var_128_int + var_142_int; // 0x3ca Add
	var_144_int = var_127_string + var_143_int; // 0x3cb Add
	HasProperty(var_144_int, var_129_bool); // 0x3cc ObjFunc
	var_145_bool = var_129_bool == 0; // 0x3ce Not
	if(var_145_bool == 0) goto Label_977; // 0x3cf JumpB
	goto Label_980; // 0x3d0 Jump
	
Label_980:
	var_146_bool = var_128_int == 0; // 0x3d4 Not
	if(var_146_bool == 0) goto Label_984; // 0x3d5 JumpB
	var_120_bool = 0; // 0x3d6 MovB
	return 10; // 0x3d7 Return
	
Label_984:
	var_130_int = 0; // 0x3d8 MovI
	var_147_int = 1; // 0x3d9 PushI
	var_148_bool = var_128_int > var_147_int; // 0x3da GT
	if(var_148_bool == 0) goto Label_990; // 0x3db JumpB
	irand(var_130_int, var_128_int); // 0x3dc Func
	
Label_990:
	var_149_int = 1; // 0x3de PushI
	var_150_int = var_130_int + var_149_int; // 0x3df Add
	var_151_int = var_127_string + var_150_int; // 0x3e0 Add
	GetProperty(var_151_int, var_131_string); // 0x3e1 ObjFunc
	var_152_bool = 0; var_153_string = ""; // 0x3e3 PushV
	var_153_string = var_131_string; // 0x3e4 Mov
	func_1032(var_152_bool, var_153_string); // 0x3e5 NEW_2
	var_120_bool = var_152_bool; // 0x3e6 Mov
	return 10; // 0x3e8 Return
	
Label_977:
	var_154_int = 1; // 0x3d1 PushI
	var_128_int = var_128_int + var_154_int; // 0x3d2 Add2
	goto Label_967; // 0x3d3 Jump
}


