task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_cvector)
{
	var_43_int = 1; // 0xb5 PushI
	if(var_43_int == 0) goto Label_561; // 0xb6 JumpB
	func_3973(); // 0xb8 NEW_2
	var_45_int = 36133; // 0xba PushI
	var_46_bool = var_42_cvector == var_45_int; // 0xbb Eq
	if(var_46_bool == 0) goto Label_194; // 0xbc JumpB
	var_47_object = Obj(); var_48_object = Obj(); // 0xbd PushV
	var_47_object = var_1_object; // 0xbe MovT
	var_48_object = var_0_object; // 0xbf MovT
	func_4080(); // 0xc0 NEW_2
	
Label_194:
	var_80_int = 38442; // 0xc2 PushI
	var_81_bool = var_42_cvector == var_80_int; // 0xc3 Eq
	if(var_81_bool == 0) goto Label_202; // 0xc4 JumpB
	var_82_object = Obj(); var_83_object = Obj(); // 0xc5 PushV
	var_82_object = var_1_object; // 0xc6 MovT
	var_83_object = var_0_object; // 0xc7 MovT
	func_4080(); // 0xc8 NEW_2
	
Label_202:
	var_84_int = 41671; // 0xca PushI
	var_85_bool = var_42_cvector == var_84_int; // 0xcb Eq
	if(var_85_bool == 0) goto Label_210; // 0xcc JumpB
	var_86_object = Obj(); var_87_object = Obj(); // 0xcd PushV
	var_86_object = var_1_object; // 0xce MovT
	var_87_object = var_0_object; // 0xcf MovT
	func_4080(); // 0xd0 NEW_2
	
Label_210:
	var_88_int = 36126; // 0xd2 PushI
	var_89_bool = var_41_bool == var_88_int; // 0xd3 Eq
	if(var_89_bool == 0) goto Label_252; // 0xd4 JumpB
	var_90_string = ""; // 0xd5 PushV
	var_90_string = "Suspicion"; // 0xd6 MovS
	func_158(var_42_cvector, var_90_string); // 0xd7 NEW_2
	var_107_int = 534481; // 0xd9 PushI
	SetMessage(var_107_int); // 0xda TObjFunc
	ClearReplies(); // 0xdc TObjFunc
	var_108_bool = 0; // 0xde PushV
	var_108_bool = 0; // 0xdf MovB
	var_109_bool = 0; var_110_object = Obj(); // 0xe0 PushV
	var_110_object = var_1_object; // 0xe1 MovT
	func_4222(var_110_object); // 0xe2 NEW_2
	if(var_109_bool == 0) goto Label_235; // 0xe4 JumpB
	var_117_bool = 0; var_118_object = Obj(); // 0xe5 PushV
	var_118_object = var_1_object; // 0xe6 MovT
	func_4234(var_117_bool, var_118_object); // 0xe7 NEW_2
	if(var_117_bool == 0) goto Label_235; // 0xe9 JumpB
	var_108_bool = 1; // 0xea MovB
	
Label_235:
	if(var_108_bool == 0) goto Label_241; // 0xeb JumpB
	var_126_int = 534482; // 0xec PushI
	var_127_int = 38410; // 0xed PushI
	var_128_int = 36127; // 0xee PushI
	AddReply(var_126_int, var_127_int, var_128_int); // 0xef TObjFunc
	
Label_241:
	var_129_int = 534489; // 0xf1 PushI
	var_130_int = -1; // 0xf2 PushI
	var_131_int = 36134; // 0xf3 PushI
	AddReply(var_129_int, var_130_int, var_131_int); // 0xf4 TObjFunc
	var_132_int = 536587; // 0xf6 PushI
	var_133_int = -1; // 0xf7 PushI
	var_134_int = 38409; // 0xf8 PushI
	AddReply(var_132_int, var_133_int, var_134_int); // 0xf9 TObjFunc
	return 0; // 0xfb Return
	
Label_252:
	var_135_int = 38410; // 0xfc PushI
	var_136_bool = var_41_bool == var_135_int; // 0xfd Eq
	if(var_136_bool == 0) goto Label_275; // 0xfe JumpB
	var_137_string = ""; // 0xff PushV
	var_137_string = "Suspicion"; // 0x100 MovS
	func_158(var_42_cvector, var_137_string); // 0x101 NEW_2
	var_138_int = 536588; // 0x103 PushI
	SetMessage(var_138_int); // 0x104 TObjFunc
	ClearReplies(); // 0x106 TObjFunc
	var_139_int = 536589; // 0x108 PushI
	var_140_int = 38412; // 0x109 PushI
	var_141_int = 38411; // 0x10a PushI
	AddReply(var_139_int, var_140_int, var_141_int); // 0x10b TObjFunc
	var_142_int = 536598; // 0x10d PushI
	var_143_int = 38421; // 0x10e PushI
	var_144_int = 38420; // 0x10f PushI
	AddReply(var_142_int, var_143_int, var_144_int); // 0x110 TObjFunc
	return 0; // 0x112 Return
	
Label_275:
	var_145_int = 38421; // 0x113 PushI
	var_146_bool = var_41_bool == var_145_int; // 0x114 Eq
	if(var_146_bool == 0) goto Label_293; // 0x115 JumpB
	var_147_string = ""; // 0x116 PushV
	var_147_string = "Neutral"; // 0x117 MovS
	func_158(var_42_cvector, var_147_string); // 0x118 NEW_2
	var_148_int = 536599; // 0x11a PushI
	SetMessage(var_148_int); // 0x11b TObjFunc
	ClearReplies(); // 0x11d TObjFunc
	var_149_int = 536600; // 0x11f PushI
	var_150_int = 36128; // 0x120 PushI
	var_151_int = 38422; // 0x121 PushI
	AddReply(var_149_int, var_150_int, var_151_int); // 0x122 TObjFunc
	return 0; // 0x124 Return
	
Label_293:
	var_152_int = 38412; // 0x125 PushI
	var_153_bool = var_41_bool == var_152_int; // 0x126 Eq
	if(var_153_bool == 0) goto Label_316; // 0x127 JumpB
	var_154_string = ""; // 0x128 PushV
	var_154_string = "Grin"; // 0x129 MovS
	func_158(var_42_cvector, var_154_string); // 0x12a NEW_2
	var_155_int = 536590; // 0x12c PushI
	SetMessage(var_155_int); // 0x12d TObjFunc
	ClearReplies(); // 0x12f TObjFunc
	var_156_int = 536591; // 0x131 PushI
	var_157_int = 38414; // 0x132 PushI
	var_158_int = 38413; // 0x133 PushI
	AddReply(var_156_int, var_157_int, var_158_int); // 0x134 TObjFunc
	var_159_int = 536601; // 0x136 PushI
	var_160_int = 38418; // 0x137 PushI
	var_161_int = 38424; // 0x138 PushI
	AddReply(var_159_int, var_160_int, var_161_int); // 0x139 TObjFunc
	return 0; // 0x13b Return
	
Label_316:
	var_162_int = 38414; // 0x13c PushI
	var_163_bool = var_41_bool == var_162_int; // 0x13d Eq
	if(var_163_bool == 0) goto Label_339; // 0x13e JumpB
	var_164_string = ""; // 0x13f PushV
	var_164_string = "Grin"; // 0x140 MovS
	func_158(var_42_cvector, var_164_string); // 0x141 NEW_2
	var_165_int = 536592; // 0x143 PushI
	SetMessage(var_165_int); // 0x144 TObjFunc
	ClearReplies(); // 0x146 TObjFunc
	var_166_int = 536595; // 0x148 PushI
	var_167_int = 38418; // 0x149 PushI
	var_168_int = 38417; // 0x14a PushI
	AddReply(var_166_int, var_167_int, var_168_int); // 0x14b TObjFunc
	var_169_int = 539710; // 0x14d PushI
	var_170_int = 41666; // 0x14e PushI
	var_171_int = 41668; // 0x14f PushI
	AddReply(var_169_int, var_170_int, var_171_int); // 0x150 TObjFunc
	return 0; // 0x152 Return
	
Label_339:
	var_172_int = 38418; // 0x153 PushI
	var_173_bool = var_41_bool == var_172_int; // 0x154 Eq
	if(var_173_bool == 0) goto Label_362; // 0x155 JumpB
	var_174_string = ""; // 0x156 PushV
	var_174_string = "Grin"; // 0x157 MovS
	func_158(var_42_cvector, var_174_string); // 0x158 NEW_2
	var_175_int = 536596; // 0x15a PushI
	SetMessage(var_175_int); // 0x15b TObjFunc
	ClearReplies(); // 0x15d TObjFunc
	var_176_int = 536610; // 0x15f PushI
	var_177_int = 38437; // 0x160 PushI
	var_178_int = 38436; // 0x161 PushI
	AddReply(var_176_int, var_177_int, var_178_int); // 0x162 TObjFunc
	var_179_int = 536612; // 0x164 PushI
	var_180_int = 38437; // 0x165 PushI
	var_181_int = 38438; // 0x166 PushI
	AddReply(var_179_int, var_180_int, var_181_int); // 0x167 TObjFunc
	return 0; // 0x169 Return
	
Label_362:
	var_182_int = 38437; // 0x16a PushI
	var_183_bool = var_41_bool == var_182_int; // 0x16b Eq
	if(var_183_bool == 0) goto Label_385; // 0x16c JumpB
	var_184_string = ""; // 0x16d PushV
	var_184_string = "Neutral"; // 0x16e MovS
	func_158(var_42_cvector, var_184_string); // 0x16f NEW_2
	var_185_int = 536611; // 0x171 PushI
	SetMessage(var_185_int); // 0x172 TObjFunc
	ClearReplies(); // 0x174 TObjFunc
	var_186_int = 536603; // 0x176 PushI
	var_187_int = 36130; // 0x177 PushI
	var_188_int = 38427; // 0x178 PushI
	AddReply(var_186_int, var_187_int, var_188_int); // 0x179 TObjFunc
	var_189_int = 534484; // 0x17b PushI
	var_190_int = 36132; // 0x17c PushI
	var_191_int = 36129; // 0x17d PushI
	AddReply(var_189_int, var_190_int, var_191_int); // 0x17e TObjFunc
	return 0; // 0x180 Return
	
Label_385:
	var_192_int = 36130; // 0x181 PushI
	var_193_bool = var_41_bool == var_192_int; // 0x182 Eq
	if(var_193_bool == 0) goto Label_408; // 0x183 JumpB
	var_194_string = ""; // 0x184 PushV
	var_194_string = "Doubt"; // 0x185 MovS
	func_158(var_42_cvector, var_194_string); // 0x186 NEW_2
	var_195_int = 534485; // 0x188 PushI
	SetMessage(var_195_int); // 0x189 TObjFunc
	ClearReplies(); // 0x18b TObjFunc
	var_196_int = 534486; // 0x18d PushI
	var_197_int = 36132; // 0x18e PushI
	var_198_int = 36131; // 0x18f PushI
	AddReply(var_196_int, var_197_int, var_198_int); // 0x190 TObjFunc
	var_199_int = 536605; // 0x192 PushI
	var_200_int = 41666; // 0x193 PushI
	var_201_int = 38430; // 0x194 PushI
	AddReply(var_199_int, var_200_int, var_201_int); // 0x195 TObjFunc
	return 0; // 0x197 Return
	
Label_408:
	var_202_int = 41666; // 0x198 PushI
	var_203_bool = var_41_bool == var_202_int; // 0x199 Eq
	if(var_203_bool == 0) goto Label_431; // 0x19a JumpB
	var_204_string = ""; // 0x19b PushV
	var_204_string = "Doubt"; // 0x19c MovS
	func_158(var_42_cvector, var_204_string); // 0x19d NEW_2
	var_205_int = 539708; // 0x19f PushI
	SetMessage(var_205_int); // 0x1a0 TObjFunc
	ClearReplies(); // 0x1a2 TObjFunc
	var_206_int = 539709; // 0x1a4 PushI
	var_207_int = 38431; // 0x1a5 PushI
	var_208_int = 41667; // 0x1a6 PushI
	AddReply(var_206_int, var_207_int, var_208_int); // 0x1a7 TObjFunc
	var_209_int = 536593; // 0x1a9 PushI
	var_210_int = 38416; // 0x1aa PushI
	var_211_int = 38415; // 0x1ab PushI
	AddReply(var_209_int, var_210_int, var_211_int); // 0x1ac TObjFunc
	return 0; // 0x1ae Return
	
Label_431:
	var_212_int = 38416; // 0x1af PushI
	var_213_bool = var_41_bool == var_212_int; // 0x1b0 Eq
	if(var_213_bool == 0) goto Label_449; // 0x1b1 JumpB
	var_214_string = ""; // 0x1b2 PushV
	var_214_string = "Neutral"; // 0x1b3 MovS
	func_158(var_42_cvector, var_214_string); // 0x1b4 NEW_2
	var_215_int = 536594; // 0x1b6 PushI
	SetMessage(var_215_int); // 0x1b7 TObjFunc
	ClearReplies(); // 0x1b9 TObjFunc
	var_216_int = 539711; // 0x1bb PushI
	var_217_int = 36132; // 0x1bc PushI
	var_218_int = 41669; // 0x1bd PushI
	AddReply(var_216_int, var_217_int, var_218_int); // 0x1be TObjFunc
	return 0; // 0x1c0 Return
	
Label_449:
	var_219_int = 38431; // 0x1c1 PushI
	var_220_bool = var_41_bool == var_219_int; // 0x1c2 Eq
	if(var_220_bool == 0) goto Label_472; // 0x1c3 JumpB
	var_221_string = ""; // 0x1c4 PushV
	var_221_string = "Neutral"; // 0x1c5 MovS
	func_158(var_42_cvector, var_221_string); // 0x1c6 NEW_2
	var_222_int = 536606; // 0x1c8 PushI
	SetMessage(var_222_int); // 0x1c9 TObjFunc
	ClearReplies(); // 0x1cb TObjFunc
	var_223_int = 536607; // 0x1cd PushI
	var_224_int = 38433; // 0x1ce PushI
	var_225_int = 38432; // 0x1cf PushI
	AddReply(var_223_int, var_224_int, var_225_int); // 0x1d0 TObjFunc
	var_226_int = 539712; // 0x1d2 PushI
	var_227_int = -1; // 0x1d3 PushI
	var_228_int = 41671; // 0x1d4 PushI
	AddReply(var_226_int, var_227_int, var_228_int); // 0x1d5 TObjFunc
	return 0; // 0x1d7 Return
	
Label_472:
	var_229_int = 38433; // 0x1d8 PushI
	var_230_bool = var_41_bool == var_229_int; // 0x1d9 Eq
	if(var_230_bool == 0) goto Label_490; // 0x1da JumpB
	var_231_string = ""; // 0x1db PushV
	var_231_string = "Neutral"; // 0x1dc MovS
	func_158(var_42_cvector, var_231_string); // 0x1dd NEW_2
	var_232_int = 536608; // 0x1df PushI
	SetMessage(var_232_int); // 0x1e0 TObjFunc
	ClearReplies(); // 0x1e2 TObjFunc
	var_233_int = 536609; // 0x1e4 PushI
	var_234_int = 36128; // 0x1e5 PushI
	var_235_int = 38434; // 0x1e6 PushI
	AddReply(var_233_int, var_234_int, var_235_int); // 0x1e7 TObjFunc
	return 0; // 0x1e9 Return
	
Label_490:
	var_236_int = 36132; // 0x1ea PushI
	var_237_bool = var_41_bool == var_236_int; // 0x1eb Eq
	if(var_237_bool == 0) goto Label_508; // 0x1ec JumpB
	var_238_string = ""; // 0x1ed PushV
	var_238_string = "Doubt"; // 0x1ee MovS
	func_158(var_42_cvector, var_238_string); // 0x1ef NEW_2
	var_239_int = 534487; // 0x1f1 PushI
	SetMessage(var_239_int); // 0x1f2 TObjFunc
	ClearReplies(); // 0x1f4 TObjFunc
	var_240_int = 536597; // 0x1f6 PushI
	var_241_int = 36128; // 0x1f7 PushI
	var_242_int = 38419; // 0x1f8 PushI
	AddReply(var_240_int, var_241_int, var_242_int); // 0x1f9 TObjFunc
	return 0; // 0x1fb Return
	
Label_508:
	var_243_int = 36128; // 0x1fc PushI
	var_244_bool = var_41_bool == var_243_int; // 0x1fd Eq
	if(var_244_bool == 0) goto Label_531; // 0x1fe JumpB
	var_245_string = ""; // 0x1ff PushV
	var_245_string = "Neutral"; // 0x200 MovS
	func_158(var_42_cvector, var_245_string); // 0x201 NEW_2
	var_246_int = 534483; // 0x203 PushI
	SetMessage(var_246_int); // 0x204 TObjFunc
	ClearReplies(); // 0x206 TObjFunc
	var_247_int = 534488; // 0x208 PushI
	var_248_int = -1; // 0x209 PushI
	var_249_int = 36133; // 0x20a PushI
	AddReply(var_247_int, var_248_int, var_249_int); // 0x20b TObjFunc
	var_250_int = 536613; // 0x20d PushI
	var_251_int = 38441; // 0x20e PushI
	var_252_int = 38440; // 0x20f PushI
	AddReply(var_250_int, var_251_int, var_252_int); // 0x210 TObjFunc
	return 0; // 0x212 Return
	
Label_531:
	var_253_int = 38441; // 0x213 PushI
	var_254_bool = var_41_bool == var_253_int; // 0x214 Eq
	if(var_254_bool == 0) goto Label_549; // 0x215 JumpB
	var_255_string = ""; // 0x216 PushV
	var_255_string = "Neutral"; // 0x217 MovS
	func_158(var_42_cvector, var_255_string); // 0x218 NEW_2
	var_256_int = 536614; // 0x21a PushI
	SetMessage(var_256_int); // 0x21b TObjFunc
	ClearReplies(); // 0x21d TObjFunc
	var_257_int = 536615; // 0x21f PushI
	var_258_int = -1; // 0x220 PushI
	var_259_int = 38442; // 0x221 PushI
	AddReply(var_257_int, var_258_int, var_259_int); // 0x222 TObjFunc
	return 0; // 0x224 Return
	
Label_549:
	var_3_string = 1; // 0x225 TMovB
	var_260_bool = 0; // 0x226 PushV
	func_4072(var_260_bool); // 0x227 NEW_2
	if(var_260_bool == 0) goto Label_557; // 0x229 JumpB
	lshStopAnimation(); // 0x22a Func
	goto Label_559; // 0x22c Jump
	
Label_559:
	return 0; // 0x22f Return
	
Label_557:
	StopAnimation(); // 0x22d Func
	
Label_561:
	return 0; // 0x231 Return
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_cvector)
{
	var_43_int = 1; // 0x2d9 PushI
	if(var_43_int == 0) goto Label_820; // 0x2da JumpB
	func_3973(); // 0x2dc NEW_2
	var_45_int = 36960; // 0x2de PushI
	var_46_bool = var_41_bool == var_45_int; // 0x2df Eq
	if(var_46_bool == 0) goto Label_762; // 0x2e0 JumpB
	var_47_string = ""; // 0x2e1 PushV
	var_47_string = "Neutral"; // 0x2e2 MovS
	func_706(var_42_cvector, var_47_string); // 0x2e3 NEW_2
	var_64_int = 535284; // 0x2e5 PushI
	SetMessage(var_64_int); // 0x2e6 TObjFunc
	ClearReplies(); // 0x2e8 TObjFunc
	var_65_int = 535285; // 0x2ea PushI
	var_66_int = 36962; // 0x2eb PushI
	var_67_int = 36961; // 0x2ec PushI
	AddReply(var_65_int, var_66_int, var_67_int); // 0x2ed TObjFunc
	var_68_int = 535292; // 0x2ef PushI
	var_69_int = -1; // 0x2f0 PushI
	var_70_int = 36968; // 0x2f1 PushI
	AddReply(var_68_int, var_69_int, var_70_int); // 0x2f2 TObjFunc
	var_71_int = 535293; // 0x2f4 PushI
	var_72_int = -1; // 0x2f5 PushI
	var_73_int = 36969; // 0x2f6 PushI
	AddReply(var_71_int, var_72_int, var_73_int); // 0x2f7 TObjFunc
	return 0; // 0x2f9 Return
	
Label_762:
	var_74_int = 36962; // 0x2fa PushI
	var_75_bool = var_41_bool == var_74_int; // 0x2fb Eq
	if(var_75_bool == 0) goto Label_785; // 0x2fc JumpB
	var_76_string = ""; // 0x2fd PushV
	var_76_string = "Neutral"; // 0x2fe MovS
	func_706(var_42_cvector, var_76_string); // 0x2ff NEW_2
	var_77_int = 535286; // 0x301 PushI
	SetMessage(var_77_int); // 0x302 TObjFunc
	ClearReplies(); // 0x304 TObjFunc
	var_78_int = 535287; // 0x306 PushI
	var_79_int = 36964; // 0x307 PushI
	var_80_int = 36963; // 0x308 PushI
	AddReply(var_78_int, var_79_int, var_80_int); // 0x309 TObjFunc
	var_81_int = 535291; // 0x30b PushI
	var_82_int = -1; // 0x30c PushI
	var_83_int = 36967; // 0x30d PushI
	AddReply(var_81_int, var_82_int, var_83_int); // 0x30e TObjFunc
	return 0; // 0x310 Return
	
Label_785:
	var_84_int = 36964; // 0x311 PushI
	var_85_bool = var_41_bool == var_84_int; // 0x312 Eq
	if(var_85_bool == 0) goto Label_808; // 0x313 JumpB
	var_86_string = ""; // 0x314 PushV
	var_86_string = "Neutral"; // 0x315 MovS
	func_706(var_42_cvector, var_86_string); // 0x316 NEW_2
	var_87_int = 535288; // 0x318 PushI
	SetMessage(var_87_int); // 0x319 TObjFunc
	ClearReplies(); // 0x31b TObjFunc
	var_88_int = 535289; // 0x31d PushI
	var_89_int = -1; // 0x31e PushI
	var_90_int = 36965; // 0x31f PushI
	AddReply(var_88_int, var_89_int, var_90_int); // 0x320 TObjFunc
	var_91_int = 535290; // 0x322 PushI
	var_92_int = -1; // 0x323 PushI
	var_93_int = 36966; // 0x324 PushI
	AddReply(var_91_int, var_92_int, var_93_int); // 0x325 TObjFunc
	return 0; // 0x327 Return
	
Label_808:
	var_3_string = 1; // 0x328 TMovB
	var_94_bool = 0; // 0x329 PushV
	func_4072(var_94_bool); // 0x32a NEW_2
	if(var_94_bool == 0) goto Label_816; // 0x32c JumpB
	lshStopAnimation(); // 0x32d Func
	goto Label_818; // 0x32f Jump
	
Label_818:
	return 0; // 0x332 Return
	
Label_816:
	StopAnimation(); // 0x330 Func
	
Label_820:
	return 0; // 0x334 Return
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_cvector)
{
	var_43_int = 1; // 0x3f9 PushI
	if(var_43_int == 0) goto Label_1377; // 0x3fa JumpB
	func_3973(); // 0x3fc NEW_2
	var_45_int = 11509; // 0x3fe PushI
	var_46_bool = var_42_cvector == var_45_int; // 0x3ff Eq
	if(var_46_bool == 0) goto Label_1030; // 0x400 JumpB
	var_47_object = Obj(); var_48_object = Obj(); // 0x401 PushV
	var_47_object = var_1_object; // 0x402 MovT
	var_48_object = var_0_object; // 0x403 MovT
	func_4148(); // 0x404 NEW_2
	
Label_1030:
	var_90_int = 11510; // 0x406 PushI
	var_91_bool = var_42_cvector == var_90_int; // 0x407 Eq
	if(var_91_bool == 0) goto Label_1038; // 0x408 JumpB
	var_92_object = Obj(); var_93_object = Obj(); // 0x409 PushV
	var_92_object = var_1_object; // 0x40a MovT
	var_93_object = var_0_object; // 0x40b MovT
	func_4148(); // 0x40c NEW_2
	
Label_1038:
	var_94_int = 11505; // 0x40e PushI
	var_95_bool = var_42_cvector == var_94_int; // 0x40f Eq
	if(var_95_bool == 0) goto Label_1046; // 0x410 JumpB
	var_96_object = Obj(); var_97_object = Obj(); // 0x411 PushV
	var_96_object = var_1_object; // 0x412 MovT
	var_97_object = var_0_object; // 0x413 MovT
	func_4148(); // 0x414 NEW_2
	
Label_1046:
	var_98_int = 11498; // 0x416 PushI
	var_99_bool = var_42_cvector == var_98_int; // 0x417 Eq
	if(var_99_bool == 0) goto Label_1054; // 0x418 JumpB
	var_100_object = Obj(); var_101_object = Obj(); // 0x419 PushV
	var_100_object = var_1_object; // 0x41a MovT
	var_101_object = var_0_object; // 0x41b MovT
	func_4148(); // 0x41c NEW_2
	
Label_1054:
	var_102_int = 11488; // 0x41e PushI
	var_103_bool = var_41_bool == var_102_int; // 0x41f Eq
	if(var_103_bool == 0) goto Label_1111; // 0x420 JumpB
	var_104_bool = 0; // 0x421 PushV
	var_104_bool = 0; // 0x422 MovB
	var_105_bool = 0; var_106_object = Obj(); // 0x423 PushV
	var_106_object = var_1_object; // 0x424 MovT
	func_4274(var_106_object); // 0x425 NEW_2
	if(var_105_bool == 0) goto Label_1070; // 0x427 JumpB
	var_113_bool = 0; var_114_object = Obj(); // 0x428 PushV
	var_114_object = var_1_object; // 0x429 MovT
	func_4269(var_114_object); // 0x42a NEW_2
	if(var_113_bool == 0) goto Label_1070; // 0x42c JumpB
	var_104_bool = 1; // 0x42d MovB
	
Label_1070:
	if(var_104_bool == 0) goto Label_1091; // 0x42e JumpB
	var_115_object = Obj(); var_116_object = Obj(); // 0x42f PushV
	var_115_object = var_1_object; // 0x430 MovT
	var_116_object = var_0_object; // 0x431 MovT
	func_4146(); // 0x432 NEW_2
	var_117_string = ""; // 0x434 PushV
	var_117_string = "Questioning"; // 0x435 MovS
	func_994(var_42_cvector, var_117_string); // 0x436 NEW_2
	var_134_int = 510420; // 0x438 PushI
	SetMessage(var_134_int); // 0x439 TObjFunc
	ClearReplies(); // 0x43b TObjFunc
	var_135_int = 510421; // 0x43d PushI
	var_136_int = 11490; // 0x43e PushI
	var_137_int = 11489; // 0x43f PushI
	AddReply(var_135_int, var_136_int, var_137_int); // 0x440 TObjFunc
	return 0; // 0x442 Return
	
Label_1091:
	var_138_string = ""; // 0x443 PushV
	var_138_string = "Neutral"; // 0x444 MovS
	func_994(var_42_cvector, var_138_string); // 0x445 NEW_2
	var_139_int = 534418; // 0x447 PushI
	SetMessage(var_139_int); // 0x448 TObjFunc
	ClearReplies(); // 0x44a TObjFunc
	var_140_int = 534419; // 0x44c PushI
	var_141_int = -1; // 0x44d PushI
	var_142_int = 36046; // 0x44e PushI
	AddReply(var_140_int, var_141_int, var_142_int); // 0x44f TObjFunc
	var_143_int = 536096; // 0x451 PushI
	var_144_int = -1; // 0x452 PushI
	var_145_int = 37848; // 0x453 PushI
	AddReply(var_143_int, var_144_int, var_145_int); // 0x454 TObjFunc
	return 0; // 0x456 Return
	
Label_1111:
	var_146_int = 36001; // 0x457 PushI
	var_147_bool = var_41_bool == var_146_int; // 0x458 Eq
	if(var_147_bool == 0) goto Label_1114; // 0x459 JumpB
	
Label_1114:
	var_148_int = 36003; // 0x45a PushI
	var_149_bool = var_41_bool == var_148_int; // 0x45b Eq
	if(var_149_bool == 0) goto Label_1137; // 0x45c JumpB
	var_150_string = ""; // 0x45d PushV
	var_150_string = "Questioning"; // 0x45e MovS
	func_994(var_42_cvector, var_150_string); // 0x45f NEW_2
	var_151_int = 534388; // 0x461 PushI
	SetMessage(var_151_int); // 0x462 TObjFunc
	ClearReplies(); // 0x464 TObjFunc
	var_152_int = 534389; // 0x466 PushI
	var_153_int = 36006; // 0x467 PushI
	var_154_int = 36004; // 0x468 PushI
	AddReply(var_152_int, var_153_int, var_154_int); // 0x469 TObjFunc
	var_155_int = 534390; // 0x46b PushI
	var_156_int = 36006; // 0x46c PushI
	var_157_int = 36005; // 0x46d PushI
	AddReply(var_155_int, var_156_int, var_157_int); // 0x46e TObjFunc
	return 0; // 0x470 Return
	
Label_1137:
	var_158_int = 36006; // 0x471 PushI
	var_159_bool = var_41_bool == var_158_int; // 0x472 Eq
	if(var_159_bool == 0) goto Label_1160; // 0x473 JumpB
	var_160_string = ""; // 0x474 PushV
	var_160_string = "Questioning"; // 0x475 MovS
	func_994(var_42_cvector, var_160_string); // 0x476 NEW_2
	var_161_int = 534391; // 0x478 PushI
	SetMessage(var_161_int); // 0x479 TObjFunc
	ClearReplies(); // 0x47b TObjFunc
	var_162_int = 534392; // 0x47d PushI
	var_163_int = 36009; // 0x47e PushI
	var_164_int = 36007; // 0x47f PushI
	AddReply(var_162_int, var_163_int, var_164_int); // 0x480 TObjFunc
	var_165_int = 534393; // 0x482 PushI
	var_166_int = 36009; // 0x483 PushI
	var_167_int = 36008; // 0x484 PushI
	AddReply(var_165_int, var_166_int, var_167_int); // 0x485 TObjFunc
	return 0; // 0x487 Return
	
Label_1160:
	var_168_int = 36009; // 0x488 PushI
	var_169_bool = var_41_bool == var_168_int; // 0x489 Eq
	if(var_169_bool == 0) goto Label_1178; // 0x48a JumpB
	var_170_string = ""; // 0x48b PushV
	var_170_string = "Suspicion"; // 0x48c MovS
	func_994(var_42_cvector, var_170_string); // 0x48d NEW_2
	var_171_int = 534394; // 0x48f PushI
	SetMessage(var_171_int); // 0x490 TObjFunc
	ClearReplies(); // 0x492 TObjFunc
	var_172_int = 534395; // 0x494 PushI
	var_173_int = 36013; // 0x495 PushI
	var_174_int = 36012; // 0x496 PushI
	AddReply(var_172_int, var_173_int, var_174_int); // 0x497 TObjFunc
	return 0; // 0x499 Return
	
Label_1178:
	var_175_int = 36013; // 0x49a PushI
	var_176_bool = var_41_bool == var_175_int; // 0x49b Eq
	if(var_176_bool == 0) goto Label_1196; // 0x49c JumpB
	var_177_string = ""; // 0x49d PushV
	var_177_string = "Neutral"; // 0x49e MovS
	func_994(var_42_cvector, var_177_string); // 0x49f NEW_2
	var_178_int = 534396; // 0x4a1 PushI
	SetMessage(var_178_int); // 0x4a2 TObjFunc
	ClearReplies(); // 0x4a4 TObjFunc
	var_179_int = 534397; // 0x4a6 PushI
	var_180_int = 11492; // 0x4a7 PushI
	var_181_int = 36014; // 0x4a8 PushI
	AddReply(var_179_int, var_180_int, var_181_int); // 0x4a9 TObjFunc
	return 0; // 0x4ab Return
	
Label_1196:
	var_182_int = 11490; // 0x4ac PushI
	var_183_bool = var_41_bool == var_182_int; // 0x4ad Eq
	if(var_183_bool == 0) goto Label_1219; // 0x4ae JumpB
	var_184_string = ""; // 0x4af PushV
	var_184_string = "Doubt"; // 0x4b0 MovS
	func_994(var_42_cvector, var_184_string); // 0x4b1 NEW_2
	var_185_int = 510422; // 0x4b3 PushI
	SetMessage(var_185_int); // 0x4b4 TObjFunc
	ClearReplies(); // 0x4b6 TObjFunc
	var_186_int = 510423; // 0x4b8 PushI
	var_187_int = 11492; // 0x4b9 PushI
	var_188_int = 11491; // 0x4ba PushI
	AddReply(var_186_int, var_187_int, var_188_int); // 0x4bb TObjFunc
	var_189_int = 534385; // 0x4bd PushI
	var_190_int = 11502; // 0x4be PushI
	var_191_int = 36000; // 0x4bf PushI
	AddReply(var_189_int, var_190_int, var_191_int); // 0x4c0 TObjFunc
	return 0; // 0x4c2 Return
	
Label_1219:
	var_192_int = 11492; // 0x4c3 PushI
	var_193_bool = var_41_bool == var_192_int; // 0x4c4 Eq
	if(var_193_bool == 0) goto Label_1237; // 0x4c5 JumpB
	var_194_string = ""; // 0x4c6 PushV
	var_194_string = "Doubt"; // 0x4c7 MovS
	func_994(var_42_cvector, var_194_string); // 0x4c8 NEW_2
	var_195_int = 510424; // 0x4ca PushI
	SetMessage(var_195_int); // 0x4cb TObjFunc
	ClearReplies(); // 0x4cd TObjFunc
	var_196_int = 510425; // 0x4cf PushI
	var_197_int = 11494; // 0x4d0 PushI
	var_198_int = 11493; // 0x4d1 PushI
	AddReply(var_196_int, var_197_int, var_198_int); // 0x4d2 TObjFunc
	return 0; // 0x4d4 Return
	
Label_1237:
	var_199_int = 11494; // 0x4d5 PushI
	var_200_bool = var_41_bool == var_199_int; // 0x4d6 Eq
	if(var_200_bool == 0) goto Label_1255; // 0x4d7 JumpB
	var_201_string = ""; // 0x4d8 PushV
	var_201_string = "Grin"; // 0x4d9 MovS
	func_994(var_42_cvector, var_201_string); // 0x4da NEW_2
	var_202_int = 510426; // 0x4dc PushI
	SetMessage(var_202_int); // 0x4dd TObjFunc
	ClearReplies(); // 0x4df TObjFunc
	var_203_int = 510427; // 0x4e1 PushI
	var_204_int = 11496; // 0x4e2 PushI
	var_205_int = 11495; // 0x4e3 PushI
	AddReply(var_203_int, var_204_int, var_205_int); // 0x4e4 TObjFunc
	return 0; // 0x4e6 Return
	
Label_1255:
	var_206_int = 11496; // 0x4e7 PushI
	var_207_bool = var_41_bool == var_206_int; // 0x4e8 Eq
	if(var_207_bool == 0) goto Label_1278; // 0x4e9 JumpB
	var_208_string = ""; // 0x4ea PushV
	var_208_string = "Questioning"; // 0x4eb MovS
	func_994(var_42_cvector, var_208_string); // 0x4ec NEW_2
	var_209_int = 510428; // 0x4ee PushI
	SetMessage(var_209_int); // 0x4ef TObjFunc
	ClearReplies(); // 0x4f1 TObjFunc
	var_210_int = 510429; // 0x4f3 PushI
	var_211_int = 11499; // 0x4f4 PushI
	var_212_int = 11497; // 0x4f5 PushI
	AddReply(var_210_int, var_211_int, var_212_int); // 0x4f6 TObjFunc
	var_213_int = 510430; // 0x4f8 PushI
	var_214_int = -1; // 0x4f9 PushI
	var_215_int = 11498; // 0x4fa PushI
	AddReply(var_213_int, var_214_int, var_215_int); // 0x4fb TObjFunc
	return 0; // 0x4fd Return
	
Label_1278:
	var_216_int = 11499; // 0x4fe PushI
	var_217_bool = var_41_bool == var_216_int; // 0x4ff Eq
	if(var_217_bool == 0) goto Label_1301; // 0x500 JumpB
	var_218_string = ""; // 0x501 PushV
	var_218_string = "Suspicion"; // 0x502 MovS
	func_994(var_42_cvector, var_218_string); // 0x503 NEW_2
	var_219_int = 510431; // 0x505 PushI
	SetMessage(var_219_int); // 0x506 TObjFunc
	ClearReplies(); // 0x508 TObjFunc
	var_220_int = 510432; // 0x50a PushI
	var_221_int = 11502; // 0x50b PushI
	var_222_int = 11500; // 0x50c PushI
	AddReply(var_220_int, var_221_int, var_222_int); // 0x50d TObjFunc
	var_223_int = 510433; // 0x50f PushI
	var_224_int = 11502; // 0x510 PushI
	var_225_int = 11501; // 0x511 PushI
	AddReply(var_223_int, var_224_int, var_225_int); // 0x512 TObjFunc
	return 0; // 0x514 Return
	
Label_1301:
	var_226_int = 11502; // 0x515 PushI
	var_227_bool = var_41_bool == var_226_int; // 0x516 Eq
	if(var_227_bool == 0) goto Label_1324; // 0x517 JumpB
	var_228_string = ""; // 0x518 PushV
	var_228_string = "Suspicion"; // 0x519 MovS
	func_994(var_42_cvector, var_228_string); // 0x51a NEW_2
	var_229_int = 510434; // 0x51c PushI
	SetMessage(var_229_int); // 0x51d TObjFunc
	ClearReplies(); // 0x51f TObjFunc
	var_230_int = 510435; // 0x521 PushI
	var_231_int = 11504; // 0x522 PushI
	var_232_int = 11503; // 0x523 PushI
	AddReply(var_230_int, var_231_int, var_232_int); // 0x524 TObjFunc
	var_233_int = 510437; // 0x526 PushI
	var_234_int = -1; // 0x527 PushI
	var_235_int = 11505; // 0x528 PushI
	AddReply(var_233_int, var_234_int, var_235_int); // 0x529 TObjFunc
	return 0; // 0x52b Return
	
Label_1324:
	var_236_int = 11504; // 0x52c PushI
	var_237_bool = var_41_bool == var_236_int; // 0x52d Eq
	if(var_237_bool == 0) goto Label_1342; // 0x52e JumpB
	var_238_string = ""; // 0x52f PushV
	var_238_string = "Neutral"; // 0x530 MovS
	func_994(var_42_cvector, var_238_string); // 0x531 NEW_2
	var_239_int = 510436; // 0x533 PushI
	SetMessage(var_239_int); // 0x534 TObjFunc
	ClearReplies(); // 0x536 TObjFunc
	var_240_int = 510438; // 0x538 PushI
	var_241_int = 11508; // 0x539 PushI
	var_242_int = 11507; // 0x53a PushI
	AddReply(var_240_int, var_241_int, var_242_int); // 0x53b TObjFunc
	return 0; // 0x53d Return
	
Label_1342:
	var_243_int = 11508; // 0x53e PushI
	var_244_bool = var_41_bool == var_243_int; // 0x53f Eq
	if(var_244_bool == 0) goto Label_1365; // 0x540 JumpB
	var_245_string = ""; // 0x541 PushV
	var_245_string = "Neutral"; // 0x542 MovS
	func_994(var_42_cvector, var_245_string); // 0x543 NEW_2
	var_246_int = 510439; // 0x545 PushI
	SetMessage(var_246_int); // 0x546 TObjFunc
	ClearReplies(); // 0x548 TObjFunc
	var_247_int = 510440; // 0x54a PushI
	var_248_int = -1; // 0x54b PushI
	var_249_int = 11509; // 0x54c PushI
	AddReply(var_247_int, var_248_int, var_249_int); // 0x54d TObjFunc
	var_250_int = 510441; // 0x54f PushI
	var_251_int = -1; // 0x550 PushI
	var_252_int = 11510; // 0x551 PushI
	AddReply(var_250_int, var_251_int, var_252_int); // 0x552 TObjFunc
	return 0; // 0x554 Return
	
Label_1365:
	var_3_string = 1; // 0x555 TMovB
	var_253_bool = 0; // 0x556 PushV
	func_4072(var_253_bool); // 0x557 NEW_2
	if(var_253_bool == 0) goto Label_1373; // 0x559 JumpB
	lshStopAnimation(); // 0x55a Func
	goto Label_1375; // 0x55c Jump
	
Label_1375:
	return 0; // 0x55f Return
	
Label_1373:
	StopAnimation(); // 0x55d Func
	
Label_1377:
	return 0; // 0x561 Return
}


task_7_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_cvector)
{
	var_43_int = 1; // 0x609 PushI
	if(var_43_int == 0) goto Label_1690; // 0x60a JumpB
	func_3973(); // 0x60c NEW_2
	var_45_int = 13388; // 0x60e PushI
	var_46_bool = var_42_cvector == var_45_int; // 0x60f Eq
	if(var_46_bool == 0) goto Label_1558; // 0x610 JumpB
	var_47_object = Obj(); var_48_object = Obj(); // 0x611 PushV
	var_47_object = var_1_object; // 0x612 MovT
	var_48_object = var_0_object; // 0x613 MovT
	func_4074(); // 0x614 NEW_2
	
Label_1558:
	var_51_int = 13387; // 0x616 PushI
	var_52_bool = var_41_bool == var_51_int; // 0x617 Eq
	if(var_52_bool == 0) goto Label_1586; // 0x618 JumpB
	var_53_string = ""; // 0x619 PushV
	var_53_string = "Suspicion"; // 0x61a MovS
	func_1522(var_42_cvector, var_53_string); // 0x61b NEW_2
	var_70_int = 512232; // 0x61d PushI
	SetMessage(var_70_int); // 0x61e TObjFunc
	ClearReplies(); // 0x620 TObjFunc
	var_71_bool = 0; var_72_object = Obj(); // 0x622 PushV
	var_72_object = var_1_object; // 0x623 MovT
	func_4210(var_72_object); // 0x624 NEW_2
	if(var_71_bool == 0) goto Label_1580; // 0x626 JumpB
	var_79_int = 512233; // 0x627 PushI
	var_80_int = 13389; // 0x628 PushI
	var_81_int = 13388; // 0x629 PushI
	AddReply(var_79_int, var_80_int, var_81_int); // 0x62a TObjFunc
	
Label_1580:
	var_82_int = 533144; // 0x62c PushI
	var_83_int = -1; // 0x62d PushI
	var_84_int = 34662; // 0x62e PushI
	AddReply(var_82_int, var_83_int, var_84_int); // 0x62f TObjFunc
	return 0; // 0x631 Return
	
Label_1586:
	var_85_int = 13389; // 0x632 PushI
	var_86_bool = var_41_bool == var_85_int; // 0x633 Eq
	if(var_86_bool == 0) goto Label_1614; // 0x634 JumpB
	var_87_string = ""; // 0x635 PushV
	var_87_string = "Questioning"; // 0x636 MovS
	func_1522(var_42_cvector, var_87_string); // 0x637 NEW_2
	var_88_int = 512234; // 0x639 PushI
	SetMessage(var_88_int); // 0x63a TObjFunc
	ClearReplies(); // 0x63c TObjFunc
	var_89_int = 512235; // 0x63e PushI
	var_90_int = 13393; // 0x63f PushI
	var_91_int = 13390; // 0x640 PushI
	AddReply(var_89_int, var_90_int, var_91_int); // 0x641 TObjFunc
	var_92_int = 512236; // 0x643 PushI
	var_93_int = 13393; // 0x644 PushI
	var_94_int = 13391; // 0x645 PushI
	AddReply(var_92_int, var_93_int, var_94_int); // 0x646 TObjFunc
	var_95_int = 512237; // 0x648 PushI
	var_96_int = 13393; // 0x649 PushI
	var_97_int = 13392; // 0x64a PushI
	AddReply(var_95_int, var_96_int, var_97_int); // 0x64b TObjFunc
	return 0; // 0x64d Return
	
Label_1614:
	var_98_int = 13393; // 0x64e PushI
	var_99_bool = var_41_bool == var_98_int; // 0x64f Eq
	if(var_99_bool == 0) goto Label_1637; // 0x650 JumpB
	var_100_string = ""; // 0x651 PushV
	var_100_string = "Questioning"; // 0x652 MovS
	func_1522(var_42_cvector, var_100_string); // 0x653 NEW_2
	var_101_int = 512238; // 0x655 PushI
	SetMessage(var_101_int); // 0x656 TObjFunc
	ClearReplies(); // 0x658 TObjFunc
	var_102_int = 535824; // 0x65a PushI
	var_103_int = 37518; // 0x65b PushI
	var_104_int = 37517; // 0x65c PushI
	AddReply(var_102_int, var_103_int, var_104_int); // 0x65d TObjFunc
	var_105_int = 535826; // 0x65f PushI
	var_106_int = 37518; // 0x660 PushI
	var_107_int = 37519; // 0x661 PushI
	AddReply(var_105_int, var_106_int, var_107_int); // 0x662 TObjFunc
	return 0; // 0x664 Return
	
Label_1637:
	var_108_int = 37518; // 0x665 PushI
	var_109_bool = var_41_bool == var_108_int; // 0x666 Eq
	if(var_109_bool == 0) goto Label_1655; // 0x667 JumpB
	var_110_string = ""; // 0x668 PushV
	var_110_string = "Questioning"; // 0x669 MovS
	func_1522(var_42_cvector, var_110_string); // 0x66a NEW_2
	var_111_int = 535825; // 0x66c PushI
	SetMessage(var_111_int); // 0x66d TObjFunc
	ClearReplies(); // 0x66f TObjFunc
	var_112_int = 512240; // 0x671 PushI
	var_113_int = 13397; // 0x672 PushI
	var_114_int = 13396; // 0x673 PushI
	AddReply(var_112_int, var_113_int, var_114_int); // 0x674 TObjFunc
	return 0; // 0x676 Return
	
Label_1655:
	var_115_int = 13397; // 0x677 PushI
	var_116_bool = var_41_bool == var_115_int; // 0x678 Eq
	if(var_116_bool == 0) goto Label_1678; // 0x679 JumpB
	var_117_string = ""; // 0x67a PushV
	var_117_string = "Doubt"; // 0x67b MovS
	func_1522(var_42_cvector, var_117_string); // 0x67c NEW_2
	var_118_int = 512241; // 0x67e PushI
	SetMessage(var_118_int); // 0x67f TObjFunc
	ClearReplies(); // 0x681 TObjFunc
	var_119_int = 512242; // 0x683 PushI
	var_120_int = -1; // 0x684 PushI
	var_121_int = 13398; // 0x685 PushI
	AddReply(var_119_int, var_120_int, var_121_int); // 0x686 TObjFunc
	var_122_int = 535827; // 0x688 PushI
	var_123_int = -1; // 0x689 PushI
	var_124_int = 37521; // 0x68a PushI
	AddReply(var_122_int, var_123_int, var_124_int); // 0x68b TObjFunc
	return 0; // 0x68d Return
	
Label_1678:
	var_3_string = 1; // 0x68e TMovB
	var_125_bool = 0; // 0x68f PushV
	func_4072(var_125_bool); // 0x690 NEW_2
	if(var_125_bool == 0) goto Label_1686; // 0x692 JumpB
	lshStopAnimation(); // 0x693 Func
	goto Label_1688; // 0x695 Jump
	
Label_1688:
	return 0; // 0x698 Return
	
Label_1686:
	StopAnimation(); // 0x696 Func
	
Label_1690:
	return 0; // 0x69a Return
}


task_9_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_int, var_26_int, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_cvector)
{
	var_43_int = 1; // 0x75b PushI
	if(var_43_int == 0) goto Label_2069; // 0x75c JumpB
	func_3973(); // 0x75e NEW_2
	var_45_int = 13489; // 0x760 PushI
	var_46_bool = var_41_bool == var_45_int; // 0x761 Eq
	if(var_46_bool == 0) goto Label_1941; // 0x762 JumpB
	var_47_bool = 0; var_48_object = Obj(); // 0x763 PushV
	var_48_object = var_1_object; // 0x764 MovT
	func_4286(var_48_object); // 0x765 NEW_2
	if(var_47_bool == 0) goto Label_1921; // 0x767 JumpB
	var_55_object = Obj(); var_56_object = Obj(); // 0x768 PushV
	var_55_object = var_1_object; // 0x769 MovT
	var_56_object = var_0_object; // 0x76a MovT
	func_4171(); // 0x76b NEW_2
	var_59_string = ""; // 0x76d PushV
	var_59_string = "Grin"; // 0x76e MovS
	func_1860(var_42_cvector, var_59_string); // 0x76f NEW_2
	var_76_int = 512330; // 0x771 PushI
	SetMessage(var_76_int); // 0x772 TObjFunc
	ClearReplies(); // 0x774 TObjFunc
	var_77_int = 512331; // 0x776 PushI
	var_78_int = 13491; // 0x777 PushI
	var_79_int = 13490; // 0x778 PushI
	AddReply(var_77_int, var_78_int, var_79_int); // 0x779 TObjFunc
	var_80_int = 512336; // 0x77b PushI
	var_81_int = -1; // 0x77c PushI
	var_82_int = 13495; // 0x77d PushI
	AddReply(var_80_int, var_81_int, var_82_int); // 0x77e TObjFunc
	return 0; // 0x780 Return
	
Label_1921:
	var_83_string = ""; // 0x781 PushV
	var_83_string = "Neutral"; // 0x782 MovS
	func_1860(var_42_cvector, var_83_string); // 0x783 NEW_2
	var_84_int = 513781; // 0x785 PushI
	SetMessage(var_84_int); // 0x786 TObjFunc
	ClearReplies(); // 0x788 TObjFunc
	var_85_int = 513782; // 0x78a PushI
	var_86_int = -1; // 0x78b PushI
	var_87_int = 15018; // 0x78c PushI
	AddReply(var_85_int, var_86_int, var_87_int); // 0x78d TObjFunc
	var_88_int = 541839; // 0x78f PushI
	var_89_int = -1; // 0x790 PushI
	var_90_int = 44056; // 0x791 PushI
	AddReply(var_88_int, var_89_int, var_90_int); // 0x792 TObjFunc
	return 0; // 0x794 Return
	
Label_1941:
	var_91_int = 13491; // 0x795 PushI
	var_92_bool = var_41_bool == var_91_int; // 0x796 Eq
	if(var_92_bool == 0) goto Label_1959; // 0x797 JumpB
	var_93_string = ""; // 0x798 PushV
	var_93_string = "Grin"; // 0x799 MovS
	func_1860(var_42_cvector, var_93_string); // 0x79a NEW_2
	var_94_int = 512332; // 0x79c PushI
	SetMessage(var_94_int); // 0x79d TObjFunc
	ClearReplies(); // 0x79f TObjFunc
	var_95_int = 512333; // 0x7a1 PushI
	var_96_int = 13493; // 0x7a2 PushI
	var_97_int = 13492; // 0x7a3 PushI
	AddReply(var_95_int, var_96_int, var_97_int); // 0x7a4 TObjFunc
	return 0; // 0x7a6 Return
	
Label_1959:
	var_98_int = 13497; // 0x7a7 PushI
	var_99_bool = var_41_bool == var_98_int; // 0x7a8 Eq
	if(var_99_bool == 0) goto Label_1962; // 0x7a9 JumpB
	
Label_1962:
	var_100_int = 13499; // 0x7aa PushI
	var_101_bool = var_41_bool == var_100_int; // 0x7ab Eq
	if(var_101_bool == 0) goto Label_1985; // 0x7ac JumpB
	var_102_string = ""; // 0x7ad PushV
	var_102_string = "Neutral"; // 0x7ae MovS
	func_1860(var_42_cvector, var_102_string); // 0x7af NEW_2
	var_103_int = 512340; // 0x7b1 PushI
	SetMessage(var_103_int); // 0x7b2 TObjFunc
	ClearReplies(); // 0x7b4 TObjFunc
	var_104_int = 512341; // 0x7b6 PushI
	var_105_int = -1; // 0x7b7 PushI
	var_106_int = 13500; // 0x7b8 PushI
	AddReply(var_104_int, var_105_int, var_106_int); // 0x7b9 TObjFunc
	var_107_int = 512342; // 0x7bb PushI
	var_108_int = 13502; // 0x7bc PushI
	var_109_int = 13501; // 0x7bd PushI
	AddReply(var_107_int, var_108_int, var_109_int); // 0x7be TObjFunc
	return 0; // 0x7c0 Return
	
Label_1985:
	var_110_int = 13502; // 0x7c1 PushI
	var_111_bool = var_41_bool == var_110_int; // 0x7c2 Eq
	if(var_111_bool == 0) goto Label_2003; // 0x7c3 JumpB
	var_112_string = ""; // 0x7c4 PushV
	var_112_string = "Neutral"; // 0x7c5 MovS
	func_1860(var_42_cvector, var_112_string); // 0x7c6 NEW_2
	var_113_int = 512343; // 0x7c8 PushI
	SetMessage(var_113_int); // 0x7c9 TObjFunc
	ClearReplies(); // 0x7cb TObjFunc
	var_114_int = 512344; // 0x7cd PushI
	var_115_int = -1; // 0x7ce PushI
	var_116_int = 13503; // 0x7cf PushI
	AddReply(var_114_int, var_115_int, var_116_int); // 0x7d0 TObjFunc
	return 0; // 0x7d2 Return
	
Label_2003:
	var_117_int = 13493; // 0x7d3 PushI
	var_118_bool = var_41_bool == var_117_int; // 0x7d4 Eq
	if(var_118_bool == 0) goto Label_2021; // 0x7d5 JumpB
	var_119_string = ""; // 0x7d6 PushV
	var_119_string = "Grin"; // 0x7d7 MovS
	func_1860(var_42_cvector, var_119_string); // 0x7d8 NEW_2
	var_120_int = 512334; // 0x7da PushI
	SetMessage(var_120_int); // 0x7db TObjFunc
	ClearReplies(); // 0x7dd TObjFunc
	var_121_int = 512335; // 0x7df PushI
	var_122_int = 13504; // 0x7e0 PushI
	var_123_int = 13494; // 0x7e1 PushI
	AddReply(var_121_int, var_122_int, var_123_int); // 0x7e2 TObjFunc
	return 0; // 0x7e4 Return
	
Label_2021:
	var_124_int = 13504; // 0x7e5 PushI
	var_125_bool = var_41_bool == var_124_int; // 0x7e6 Eq
	if(var_125_bool == 0) goto Label_2039; // 0x7e7 JumpB
	var_126_string = ""; // 0x7e8 PushV
	var_126_string = "Grin"; // 0x7e9 MovS
	func_1860(var_42_cvector, var_126_string); // 0x7ea NEW_2
	var_127_int = 512345; // 0x7ec PushI
	SetMessage(var_127_int); // 0x7ed TObjFunc
	ClearReplies(); // 0x7ef TObjFunc
	var_128_int = 512346; // 0x7f1 PushI
	var_129_int = 13506; // 0x7f2 PushI
	var_130_int = 13505; // 0x7f3 PushI
	AddReply(var_128_int, var_129_int, var_130_int); // 0x7f4 TObjFunc
	return 0; // 0x7f6 Return
	
Label_2039:
	var_131_int = 13506; // 0x7f7 PushI
	var_132_bool = var_41_bool == var_131_int; // 0x7f8 Eq
	if(var_132_bool == 0) goto Label_2057; // 0x7f9 JumpB
	var_133_string = ""; // 0x7fa PushV
	var_133_string = "Grin"; // 0x7fb MovS
	func_1860(var_42_cvector, var_133_string); // 0x7fc NEW_2
	var_134_int = 512347; // 0x7fe PushI
	SetMessage(var_134_int); // 0x7ff TObjFunc
	ClearReplies(); // 0x801 TObjFunc
	var_135_int = 512348; // 0x803 PushI
	var_136_int = -1; // 0x804 PushI
	var_137_int = 13507; // 0x805 PushI
	AddReply(var_135_int, var_136_int, var_137_int); // 0x806 TObjFunc
	return 0; // 0x808 Return
	
Label_2057:
	var_3_string = 1; // 0x809 TMovB
	var_138_bool = 0; // 0x80a PushV
	func_4072(var_138_bool); // 0x80b NEW_2
	if(var_138_bool == 0) goto Label_2065; // 0x80d JumpB
	lshStopAnimation(); // 0x80e Func
	goto Label_2067; // 0x810 Jump
	
Label_2067:
	return 0; // 0x813 Return
	
Label_2065:
	StopAnimation(); // 0x811 Func
	
Label_2069:
	return 0; // 0x815 Return
}


task_11_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_int, var_31_int, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_cvector)
{
	var_43_int = 1; // 0x90e PushI
	if(var_43_int == 0) goto Label_2945; // 0x90f JumpB
	func_3973(); // 0x911 NEW_2
	var_45_int = 15289; // 0x913 PushI
	var_46_bool = var_42_cvector == var_45_int; // 0x914 Eq
	if(var_46_bool == 0) goto Label_2331; // 0x915 JumpB
	var_47_object = Obj(); var_48_object = Obj(); // 0x916 PushV
	var_47_object = var_1_object; // 0x917 MovT
	var_48_object = var_0_object; // 0x918 MovT
	func_4183(); // 0x919 NEW_2
	
Label_2331:
	var_74_int = 15310; // 0x91b PushI
	var_75_bool = var_42_cvector == var_74_int; // 0x91c Eq
	if(var_75_bool == 0) goto Label_2354; // 0x91d JumpB
	var_76_object = Obj(); var_77_object = Obj(); // 0x91e PushV
	var_76_object = var_1_object; // 0x91f MovT
	var_77_object = var_0_object; // 0x920 MovT
	func_4140(); // 0x921 NEW_2
	var_80_object = Obj(); var_81_object = Obj(); // 0x923 PushV
	var_80_object = var_1_object; // 0x924 MovT
	var_81_object = var_0_object; // 0x925 MovT
	func_4192(); // 0x926 NEW_2
	var_86_object = Obj(); var_87_object = Obj(); // 0x928 PushV
	var_86_object = var_1_object; // 0x929 MovT
	var_87_object = var_0_object; // 0x92a MovT
	func_4094(); // 0x92b NEW_2
	var_94_object = Obj(); var_95_object = Obj(); // 0x92d PushV
	var_94_object = var_1_object; // 0x92e MovT
	var_95_object = var_0_object; // 0x92f MovT
	func_4200(); // 0x930 NEW_2
	
Label_2354:
	var_107_int = 40764; // 0x932 PushI
	var_108_bool = var_42_cvector == var_107_int; // 0x933 Eq
	if(var_108_bool == 0) goto Label_2362; // 0x934 JumpB
	var_109_object = Obj(); var_110_object = Obj(); // 0x935 PushV
	var_109_object = var_1_object; // 0x936 MovT
	var_110_object = var_0_object; // 0x937 MovT
	func_4134(); // 0x938 NEW_2
	
Label_2362:
	var_113_int = 40789; // 0x93a PushI
	var_114_bool = var_42_cvector == var_113_int; // 0x93b Eq
	if(var_114_bool == 0) goto Label_2375; // 0x93c JumpB
	var_115_object = Obj(); var_116_object = Obj(); // 0x93d PushV
	var_115_object = var_1_object; // 0x93e MovT
	var_116_object = var_0_object; // 0x93f MovT
	func_4101(); // 0x940 NEW_2
	var_127_object = Obj(); var_128_object = Obj(); // 0x942 PushV
	var_127_object = var_1_object; // 0x943 MovT
	var_128_object = var_0_object; // 0x944 MovT
	func_4118(); // 0x945 NEW_2
	
Label_2375:
	var_159_int = 40790; // 0x947 PushI
	var_160_bool = var_42_cvector == var_159_int; // 0x948 Eq
	if(var_160_bool == 0) goto Label_2388; // 0x949 JumpB
	var_161_object = Obj(); var_162_object = Obj(); // 0x94a PushV
	var_161_object = var_1_object; // 0x94b MovT
	var_162_object = var_0_object; // 0x94c MovT
	func_4101(); // 0x94d NEW_2
	var_163_object = Obj(); var_164_object = Obj(); // 0x94f PushV
	var_163_object = var_1_object; // 0x950 MovT
	var_164_object = var_0_object; // 0x951 MovT
	func_4118(); // 0x952 NEW_2
	
Label_2388:
	var_165_int = 40787; // 0x954 PushI
	var_166_bool = var_42_cvector == var_165_int; // 0x955 Eq
	if(var_166_bool == 0) goto Label_2401; // 0x956 JumpB
	var_167_object = Obj(); var_168_object = Obj(); // 0x957 PushV
	var_167_object = var_1_object; // 0x958 MovT
	var_168_object = var_0_object; // 0x959 MovT
	func_4101(); // 0x95a NEW_2
	var_169_object = Obj(); var_170_object = Obj(); // 0x95c PushV
	var_169_object = var_1_object; // 0x95d MovT
	var_170_object = var_0_object; // 0x95e MovT
	func_4118(); // 0x95f NEW_2
	
Label_2401:
	var_171_int = 15276; // 0x961 PushI
	var_172_bool = var_41_bool == var_171_int; // 0x962 Eq
	if(var_172_bool == 0) goto Label_2510; // 0x963 JumpB
	var_173_bool = 0; // 0x964 PushV
	var_173_bool = 0; // 0x965 MovB
	var_174_bool = 0; var_175_object = Obj(); // 0x966 PushV
	var_175_object = var_1_object; // 0x967 MovT
	func_4298(var_175_object); // 0x968 NEW_2
	if(var_174_bool == 0) goto Label_2417; // 0x96a JumpB
	var_180_bool = 0; var_181_object = Obj(); // 0x96b PushV
	var_181_object = var_1_object; // 0x96c MovT
	func_4310(var_181_object); // 0x96d NEW_2
	if(var_180_bool == 0) goto Label_2417; // 0x96f JumpB
	var_173_bool = 1; // 0x970 MovB
	
Label_2417:
	if(var_173_bool == 0) goto Label_2438; // 0x971 JumpB
	var_186_object = Obj(); var_187_object = Obj(); // 0x972 PushV
	var_186_object = var_1_object; // 0x973 MovT
	var_187_object = var_0_object; // 0x974 MovT
	func_4177(); // 0x975 NEW_2
	var_190_string = ""; // 0x977 PushV
	var_190_string = "Neutral"; // 0x978 MovS
	func_2295(var_42_cvector, var_190_string); // 0x979 NEW_2
	var_207_int = 514041; // 0x97b PushI
	SetMessage(var_207_int); // 0x97c TObjFunc
	ClearReplies(); // 0x97e TObjFunc
	var_208_int = 514042; // 0x980 PushI
	var_209_int = 15278; // 0x981 PushI
	var_210_int = 15277; // 0x982 PushI
	AddReply(var_208_int, var_209_int, var_210_int); // 0x983 TObjFunc
	return 0; // 0x985 Return
	
Label_2438:
	var_211_string = ""; // 0x986 PushV
	var_211_string = "Suspicion"; // 0x987 MovS
	func_2295(var_42_cvector, var_211_string); // 0x988 NEW_2
	var_212_int = 514063; // 0x98a PushI
	SetMessage(var_212_int); // 0x98b TObjFunc
	ClearReplies(); // 0x98d TObjFunc
	var_213_bool = 0; // 0x98f PushV
	var_213_bool = 0; // 0x990 MovB
	var_214_bool = 0; var_215_object = Obj(); // 0x991 PushV
	var_215_object = var_1_object; // 0x992 MovT
	func_4334(var_214_bool, var_215_object); // 0x993 NEW_2
	if(var_214_bool == 0) goto Label_2460; // 0x995 JumpB
	var_223_bool = 0; var_224_object = Obj(); // 0x996 PushV
	var_224_object = var_1_object; // 0x997 MovT
	func_4322(var_224_object); // 0x998 NEW_2
	if(var_223_bool == 0) goto Label_2460; // 0x99a JumpB
	var_213_bool = 1; // 0x99b MovB
	
Label_2460:
	if(var_213_bool == 0) goto Label_2466; // 0x99c JumpB
	var_229_int = 514068; // 0x99d PushI
	var_230_int = 40760; // 0x99e PushI
	var_231_int = 15305; // 0x99f PushI
	AddReply(var_229_int, var_230_int, var_231_int); // 0x9a0 TObjFunc
	
Label_2466:
	var_232_bool = 0; // 0x9a2 PushV
	var_232_bool = 0; // 0x9a3 MovB
	var_233_bool = 0; var_234_object = Obj(); // 0x9a4 PushV
	var_234_object = var_1_object; // 0x9a5 MovT
	func_4344(var_233_bool, var_234_object); // 0x9a6 NEW_2
	if(var_233_bool == 0) goto Label_2479; // 0x9a8 JumpB
	var_245_bool = 0; var_246_object = Obj(); // 0x9a9 PushV
	var_246_object = var_1_object; // 0x9aa MovT
	func_4322(var_246_object); // 0x9ab NEW_2
	if(var_245_bool == 0) goto Label_2479; // 0x9ad JumpB
	var_232_bool = 1; // 0x9ae MovB
	
Label_2479:
	if(var_232_bool == 0) goto Label_2485; // 0x9af JumpB
	var_247_int = 514069; // 0x9b0 PushI
	var_248_int = 15307; // 0x9b1 PushI
	var_249_int = 15306; // 0x9b2 PushI
	AddReply(var_247_int, var_248_int, var_249_int); // 0x9b3 TObjFunc
	
Label_2485:
	var_250_bool = 0; // 0x9b5 PushV
	var_250_bool = 0; // 0x9b6 MovB
	var_251_bool = 0; var_252_object = Obj(); // 0x9b7 PushV
	var_252_object = var_1_object; // 0x9b8 MovT
	func_4245(var_252_object); // 0x9b9 NEW_2
	if(var_251_bool == 0) goto Label_2498; // 0x9bb JumpB
	var_257_bool = 0; var_258_object = Obj(); // 0x9bc PushV
	var_258_object = var_1_object; // 0x9bd MovT
	func_4257(var_258_object); // 0x9be NEW_2
	if(var_257_bool == 0) goto Label_2498; // 0x9c0 JumpB
	var_250_bool = 1; // 0x9c1 MovB
	
Label_2498:
	if(var_250_bool == 0) goto Label_2504; // 0x9c2 JumpB
	var_263_int = 538835; // 0x9c3 PushI
	var_264_int = 40765; // 0x9c4 PushI
	var_265_int = 40764; // 0x9c5 PushI
	AddReply(var_263_int, var_264_int, var_265_int); // 0x9c6 TObjFunc
	
Label_2504:
	var_266_int = 514064; // 0x9c8 PushI
	var_267_int = -1; // 0x9c9 PushI
	var_268_int = 15300; // 0x9ca PushI
	AddReply(var_266_int, var_267_int, var_268_int); // 0x9cb TObjFunc
	return 0; // 0x9cd Return
	
Label_2510:
	var_269_int = 40765; // 0x9ce PushI
	var_270_bool = var_41_bool == var_269_int; // 0x9cf Eq
	if(var_270_bool == 0) goto Label_2538; // 0x9d0 JumpB
	var_271_string = ""; // 0x9d1 PushV
	var_271_string = "Neutral"; // 0x9d2 MovS
	func_2295(var_42_cvector, var_271_string); // 0x9d3 NEW_2
	var_272_int = 538836; // 0x9d5 PushI
	SetMessage(var_272_int); // 0x9d6 TObjFunc
	ClearReplies(); // 0x9d8 TObjFunc
	var_273_int = 538837; // 0x9da PushI
	var_274_int = 40775; // 0x9db PushI
	var_275_int = 40766; // 0x9dc PushI
	AddReply(var_273_int, var_274_int, var_275_int); // 0x9dd TObjFunc
	var_276_int = 538838; // 0x9df PushI
	var_277_int = 40774; // 0x9e0 PushI
	var_278_int = 40767; // 0x9e1 PushI
	AddReply(var_276_int, var_277_int, var_278_int); // 0x9e2 TObjFunc
	var_279_int = 538839; // 0x9e4 PushI
	var_280_int = 40769; // 0x9e5 PushI
	var_281_int = 40768; // 0x9e6 PushI
	AddReply(var_279_int, var_280_int, var_281_int); // 0x9e7 TObjFunc
	return 0; // 0x9e9 Return
	
Label_2538:
	var_282_int = 40769; // 0x9ea PushI
	var_283_bool = var_41_bool == var_282_int; // 0x9eb Eq
	if(var_283_bool == 0) goto Label_2556; // 0x9ec JumpB
	var_284_string = ""; // 0x9ed PushV
	var_284_string = "Neutral"; // 0x9ee MovS
	func_2295(var_42_cvector, var_284_string); // 0x9ef NEW_2
	var_285_int = 538840; // 0x9f1 PushI
	SetMessage(var_285_int); // 0x9f2 TObjFunc
	ClearReplies(); // 0x9f4 TObjFunc
	var_286_int = 538841; // 0x9f6 PushI
	var_287_int = 40773; // 0x9f7 PushI
	var_288_int = 40772; // 0x9f8 PushI
	AddReply(var_286_int, var_287_int, var_288_int); // 0x9f9 TObjFunc
	return 0; // 0x9fb Return
	
Label_2556:
	var_289_int = 40773; // 0x9fc PushI
	var_290_bool = var_41_bool == var_289_int; // 0x9fd Eq
	if(var_290_bool == 0) goto Label_2574; // 0x9fe JumpB
	var_291_string = ""; // 0x9ff PushV
	var_291_string = "Neutral"; // 0xa00 MovS
	func_2295(var_42_cvector, var_291_string); // 0xa01 NEW_2
	var_292_int = 538842; // 0xa03 PushI
	SetMessage(var_292_int); // 0xa04 TObjFunc
	ClearReplies(); // 0xa06 TObjFunc
	var_293_int = 538847; // 0xa08 PushI
	var_294_int = 40780; // 0xa09 PushI
	var_295_int = 40779; // 0xa0a PushI
	AddReply(var_293_int, var_294_int, var_295_int); // 0xa0b TObjFunc
	return 0; // 0xa0d Return
	
Label_2574:
	var_296_int = 40774; // 0xa0e PushI
	var_297_bool = var_41_bool == var_296_int; // 0xa0f Eq
	if(var_297_bool == 0) goto Label_2597; // 0xa10 JumpB
	var_298_string = ""; // 0xa11 PushV
	var_298_string = "Neutral"; // 0xa12 MovS
	func_2295(var_42_cvector, var_298_string); // 0xa13 NEW_2
	var_299_int = 538843; // 0xa15 PushI
	SetMessage(var_299_int); // 0xa16 TObjFunc
	ClearReplies(); // 0xa18 TObjFunc
	var_300_int = 538846; // 0xa1a PushI
	var_301_int = 40769; // 0xa1b PushI
	var_302_int = 40777; // 0xa1c PushI
	AddReply(var_300_int, var_301_int, var_302_int); // 0xa1d TObjFunc
	var_303_int = 538849; // 0xa1f PushI
	var_304_int = 40780; // 0xa20 PushI
	var_305_int = 40781; // 0xa21 PushI
	AddReply(var_303_int, var_304_int, var_305_int); // 0xa22 TObjFunc
	return 0; // 0xa24 Return
	
Label_2597:
	var_306_int = 40775; // 0xa25 PushI
	var_307_bool = var_41_bool == var_306_int; // 0xa26 Eq
	if(var_307_bool == 0) goto Label_2615; // 0xa27 JumpB
	var_308_string = ""; // 0xa28 PushV
	var_308_string = "Neutral"; // 0xa29 MovS
	func_2295(var_42_cvector, var_308_string); // 0xa2a NEW_2
	var_309_int = 538844; // 0xa2c PushI
	SetMessage(var_309_int); // 0xa2d TObjFunc
	ClearReplies(); // 0xa2f TObjFunc
	var_310_int = 538845; // 0xa31 PushI
	var_311_int = 40780; // 0xa32 PushI
	var_312_int = 40776; // 0xa33 PushI
	AddReply(var_310_int, var_311_int, var_312_int); // 0xa34 TObjFunc
	return 0; // 0xa36 Return
	
Label_2615:
	var_313_int = 40780; // 0xa37 PushI
	var_314_bool = var_41_bool == var_313_int; // 0xa38 Eq
	if(var_314_bool == 0) goto Label_2633; // 0xa39 JumpB
	var_315_string = ""; // 0xa3a PushV
	var_315_string = "Questioning"; // 0xa3b MovS
	func_2295(var_42_cvector, var_315_string); // 0xa3c NEW_2
	var_316_int = 538848; // 0xa3e PushI
	SetMessage(var_316_int); // 0xa3f TObjFunc
	ClearReplies(); // 0xa41 TObjFunc
	var_317_int = 538850; // 0xa43 PushI
	var_318_int = 40783; // 0xa44 PushI
	var_319_int = 40782; // 0xa45 PushI
	AddReply(var_317_int, var_318_int, var_319_int); // 0xa46 TObjFunc
	return 0; // 0xa48 Return
	
Label_2633:
	var_320_int = 40783; // 0xa49 PushI
	var_321_bool = var_41_bool == var_320_int; // 0xa4a Eq
	if(var_321_bool == 0) goto Label_2656; // 0xa4b JumpB
	var_322_string = ""; // 0xa4c PushV
	var_322_string = "Neutral"; // 0xa4d MovS
	func_2295(var_42_cvector, var_322_string); // 0xa4e NEW_2
	var_323_int = 538851; // 0xa50 PushI
	SetMessage(var_323_int); // 0xa51 TObjFunc
	ClearReplies(); // 0xa53 TObjFunc
	var_324_int = 538852; // 0xa55 PushI
	var_325_int = 40788; // 0xa56 PushI
	var_326_int = 40786; // 0xa57 PushI
	AddReply(var_324_int, var_325_int, var_326_int); // 0xa58 TObjFunc
	var_327_int = 538853; // 0xa5a PushI
	var_328_int = -1; // 0xa5b PushI
	var_329_int = 40787; // 0xa5c PushI
	AddReply(var_327_int, var_328_int, var_329_int); // 0xa5d TObjFunc
	return 0; // 0xa5f Return
	
Label_2656:
	var_330_int = 40788; // 0xa60 PushI
	var_331_bool = var_41_bool == var_330_int; // 0xa61 Eq
	if(var_331_bool == 0) goto Label_2679; // 0xa62 JumpB
	var_332_string = ""; // 0xa63 PushV
	var_332_string = "Neutral"; // 0xa64 MovS
	func_2295(var_42_cvector, var_332_string); // 0xa65 NEW_2
	var_333_int = 538854; // 0xa67 PushI
	SetMessage(var_333_int); // 0xa68 TObjFunc
	ClearReplies(); // 0xa6a TObjFunc
	var_334_int = 538855; // 0xa6c PushI
	var_335_int = -1; // 0xa6d PushI
	var_336_int = 40789; // 0xa6e PushI
	AddReply(var_334_int, var_335_int, var_336_int); // 0xa6f TObjFunc
	var_337_int = 538856; // 0xa71 PushI
	var_338_int = -1; // 0xa72 PushI
	var_339_int = 40790; // 0xa73 PushI
	AddReply(var_337_int, var_338_int, var_339_int); // 0xa74 TObjFunc
	return 0; // 0xa76 Return
	
Label_2679:
	var_340_int = 15307; // 0xa77 PushI
	var_341_bool = var_41_bool == var_340_int; // 0xa78 Eq
	if(var_341_bool == 0) goto Label_2697; // 0xa79 JumpB
	var_342_string = ""; // 0xa7a PushV
	var_342_string = "Suspicion"; // 0xa7b MovS
	func_2295(var_42_cvector, var_342_string); // 0xa7c NEW_2
	var_343_int = 514070; // 0xa7e PushI
	SetMessage(var_343_int); // 0xa7f TObjFunc
	ClearReplies(); // 0xa81 TObjFunc
	var_344_int = 514071; // 0xa83 PushI
	var_345_int = -1; // 0xa84 PushI
	var_346_int = 15308; // 0xa85 PushI
	AddReply(var_344_int, var_345_int, var_346_int); // 0xa86 TObjFunc
	return 0; // 0xa88 Return
	
Label_2697:
	var_347_int = 40760; // 0xa89 PushI
	var_348_bool = var_41_bool == var_347_int; // 0xa8a Eq
	if(var_348_bool == 0) goto Label_2715; // 0xa8b JumpB
	var_349_string = ""; // 0xa8c PushV
	var_349_string = "Suspicion"; // 0xa8d MovS
	func_2295(var_42_cvector, var_349_string); // 0xa8e NEW_2
	var_350_int = 538831; // 0xa90 PushI
	SetMessage(var_350_int); // 0xa91 TObjFunc
	ClearReplies(); // 0xa93 TObjFunc
	var_351_int = 538832; // 0xa95 PushI
	var_352_int = 40762; // 0xa96 PushI
	var_353_int = 40761; // 0xa97 PushI
	AddReply(var_351_int, var_352_int, var_353_int); // 0xa98 TObjFunc
	return 0; // 0xa9a Return
	
Label_2715:
	var_354_int = 40762; // 0xa9b PushI
	var_355_bool = var_41_bool == var_354_int; // 0xa9c Eq
	if(var_355_bool == 0) goto Label_2733; // 0xa9d JumpB
	var_356_string = ""; // 0xa9e PushV
	var_356_string = "Grin"; // 0xa9f MovS
	func_2295(var_42_cvector, var_356_string); // 0xaa0 NEW_2
	var_357_int = 538833; // 0xaa2 PushI
	SetMessage(var_357_int); // 0xaa3 TObjFunc
	ClearReplies(); // 0xaa5 TObjFunc
	var_358_int = 538834; // 0xaa7 PushI
	var_359_int = 15309; // 0xaa8 PushI
	var_360_int = 40763; // 0xaa9 PushI
	AddReply(var_358_int, var_359_int, var_360_int); // 0xaaa TObjFunc
	return 0; // 0xaac Return
	
Label_2733:
	var_361_int = 15309; // 0xaad PushI
	var_362_bool = var_41_bool == var_361_int; // 0xaae Eq
	if(var_362_bool == 0) goto Label_2751; // 0xaaf JumpB
	var_363_string = ""; // 0xab0 PushV
	var_363_string = "Neutral"; // 0xab1 MovS
	func_2295(var_42_cvector, var_363_string); // 0xab2 NEW_2
	var_364_int = 514072; // 0xab4 PushI
	SetMessage(var_364_int); // 0xab5 TObjFunc
	ClearReplies(); // 0xab7 TObjFunc
	var_365_int = 514073; // 0xab9 PushI
	var_366_int = -1; // 0xaba PushI
	var_367_int = 15310; // 0xabb PushI
	AddReply(var_365_int, var_366_int, var_367_int); // 0xabc TObjFunc
	return 0; // 0xabe Return
	
Label_2751:
	var_368_int = 15278; // 0xabf PushI
	var_369_bool = var_41_bool == var_368_int; // 0xac0 Eq
	if(var_369_bool == 0) goto Label_2774; // 0xac1 JumpB
	var_370_string = ""; // 0xac2 PushV
	var_370_string = "Neutral"; // 0xac3 MovS
	func_2295(var_42_cvector, var_370_string); // 0xac4 NEW_2
	var_371_int = 514043; // 0xac6 PushI
	SetMessage(var_371_int); // 0xac7 TObjFunc
	ClearReplies(); // 0xac9 TObjFunc
	var_372_int = 514044; // 0xacb PushI
	var_373_int = 15280; // 0xacc PushI
	var_374_int = 15279; // 0xacd PushI
	AddReply(var_372_int, var_373_int, var_374_int); // 0xace TObjFunc
	var_375_int = 538829; // 0xad0 PushI
	var_376_int = 15280; // 0xad1 PushI
	var_377_int = 40756; // 0xad2 PushI
	AddReply(var_375_int, var_376_int, var_377_int); // 0xad3 TObjFunc
	return 0; // 0xad5 Return
	
Label_2774:
	var_378_int = 15280; // 0xad6 PushI
	var_379_bool = var_41_bool == var_378_int; // 0xad7 Eq
	if(var_379_bool == 0) goto Label_2792; // 0xad8 JumpB
	var_380_string = ""; // 0xad9 PushV
	var_380_string = "Neutral"; // 0xada MovS
	func_2295(var_42_cvector, var_380_string); // 0xadb NEW_2
	var_381_int = 514045; // 0xadd PushI
	SetMessage(var_381_int); // 0xade TObjFunc
	ClearReplies(); // 0xae0 TObjFunc
	var_382_int = 514046; // 0xae2 PushI
	var_383_int = 15282; // 0xae3 PushI
	var_384_int = 15281; // 0xae4 PushI
	AddReply(var_382_int, var_383_int, var_384_int); // 0xae5 TObjFunc
	return 0; // 0xae7 Return
	
Label_2792:
	var_385_int = 15282; // 0xae8 PushI
	var_386_bool = var_41_bool == var_385_int; // 0xae9 Eq
	if(var_386_bool == 0) goto Label_2815; // 0xaea JumpB
	var_387_string = ""; // 0xaeb PushV
	var_387_string = "Neutral"; // 0xaec MovS
	func_2295(var_42_cvector, var_387_string); // 0xaed NEW_2
	var_388_int = 514047; // 0xaef PushI
	SetMessage(var_388_int); // 0xaf0 TObjFunc
	ClearReplies(); // 0xaf2 TObjFunc
	var_389_int = 514048; // 0xaf4 PushI
	var_390_int = 15284; // 0xaf5 PushI
	var_391_int = 15283; // 0xaf6 PushI
	AddReply(var_389_int, var_390_int, var_391_int); // 0xaf7 TObjFunc
	var_392_int = 514060; // 0xaf9 PushI
	var_393_int = 15297; // 0xafa PushI
	var_394_int = 15296; // 0xafb PushI
	AddReply(var_392_int, var_393_int, var_394_int); // 0xafc TObjFunc
	return 0; // 0xafe Return
	
Label_2815:
	var_395_int = 15297; // 0xaff PushI
	var_396_bool = var_41_bool == var_395_int; // 0xb00 Eq
	if(var_396_bool == 0) goto Label_2838; // 0xb01 JumpB
	var_397_string = ""; // 0xb02 PushV
	var_397_string = "Neutral"; // 0xb03 MovS
	func_2295(var_42_cvector, var_397_string); // 0xb04 NEW_2
	var_398_int = 514061; // 0xb06 PushI
	SetMessage(var_398_int); // 0xb07 TObjFunc
	ClearReplies(); // 0xb09 TObjFunc
	var_399_int = 514062; // 0xb0b PushI
	var_400_int = 15286; // 0xb0c PushI
	var_401_int = 15298; // 0xb0d PushI
	AddReply(var_399_int, var_400_int, var_401_int); // 0xb0e TObjFunc
	var_402_int = 538830; // 0xb10 PushI
	var_403_int = 15286; // 0xb11 PushI
	var_404_int = 40758; // 0xb12 PushI
	AddReply(var_402_int, var_403_int, var_404_int); // 0xb13 TObjFunc
	return 0; // 0xb15 Return
	
Label_2838:
	var_405_int = 15284; // 0xb16 PushI
	var_406_bool = var_41_bool == var_405_int; // 0xb17 Eq
	if(var_406_bool == 0) goto Label_2861; // 0xb18 JumpB
	var_407_string = ""; // 0xb19 PushV
	var_407_string = "Questioning"; // 0xb1a MovS
	func_2295(var_42_cvector, var_407_string); // 0xb1b NEW_2
	var_408_int = 514049; // 0xb1d PushI
	SetMessage(var_408_int); // 0xb1e TObjFunc
	ClearReplies(); // 0xb20 TObjFunc
	var_409_int = 514050; // 0xb22 PushI
	var_410_int = 15286; // 0xb23 PushI
	var_411_int = 15285; // 0xb24 PushI
	AddReply(var_409_int, var_410_int, var_411_int); // 0xb25 TObjFunc
	var_412_int = 514055; // 0xb27 PushI
	var_413_int = 15291; // 0xb28 PushI
	var_414_int = 15290; // 0xb29 PushI
	AddReply(var_412_int, var_413_int, var_414_int); // 0xb2a TObjFunc
	return 0; // 0xb2c Return
	
Label_2861:
	var_415_int = 15291; // 0xb2d PushI
	var_416_bool = var_41_bool == var_415_int; // 0xb2e Eq
	if(var_416_bool == 0) goto Label_2879; // 0xb2f JumpB
	var_417_string = ""; // 0xb30 PushV
	var_417_string = "Questioning"; // 0xb31 MovS
	func_2295(var_42_cvector, var_417_string); // 0xb32 NEW_2
	var_418_int = 514056; // 0xb34 PushI
	SetMessage(var_418_int); // 0xb35 TObjFunc
	ClearReplies(); // 0xb37 TObjFunc
	var_419_int = 514057; // 0xb39 PushI
	var_420_int = 15293; // 0xb3a PushI
	var_421_int = 15292; // 0xb3b PushI
	AddReply(var_419_int, var_420_int, var_421_int); // 0xb3c TObjFunc
	return 0; // 0xb3e Return
	
Label_2879:
	var_422_int = 15293; // 0xb3f PushI
	var_423_bool = var_41_bool == var_422_int; // 0xb40 Eq
	if(var_423_bool == 0) goto Label_2897; // 0xb41 JumpB
	var_424_string = ""; // 0xb42 PushV
	var_424_string = "Questioning"; // 0xb43 MovS
	func_2295(var_42_cvector, var_424_string); // 0xb44 NEW_2
	var_425_int = 514058; // 0xb46 PushI
	SetMessage(var_425_int); // 0xb47 TObjFunc
	ClearReplies(); // 0xb49 TObjFunc
	var_426_int = 514059; // 0xb4b PushI
	var_427_int = 15286; // 0xb4c PushI
	var_428_int = 15294; // 0xb4d PushI
	AddReply(var_426_int, var_427_int, var_428_int); // 0xb4e TObjFunc
	return 0; // 0xb50 Return
	
Label_2897:
	var_429_int = 15286; // 0xb51 PushI
	var_430_bool = var_41_bool == var_429_int; // 0xb52 Eq
	if(var_430_bool == 0) goto Label_2915; // 0xb53 JumpB
	var_431_string = ""; // 0xb54 PushV
	var_431_string = "Questioning"; // 0xb55 MovS
	func_2295(var_42_cvector, var_431_string); // 0xb56 NEW_2
	var_432_int = 514051; // 0xb58 PushI
	SetMessage(var_432_int); // 0xb59 TObjFunc
	ClearReplies(); // 0xb5b TObjFunc
	var_433_int = 514052; // 0xb5d PushI
	var_434_int = 15288; // 0xb5e PushI
	var_435_int = 15287; // 0xb5f PushI
	AddReply(var_433_int, var_434_int, var_435_int); // 0xb60 TObjFunc
	return 0; // 0xb62 Return
	
Label_2915:
	var_436_int = 15288; // 0xb63 PushI
	var_437_bool = var_41_bool == var_436_int; // 0xb64 Eq
	if(var_437_bool == 0) goto Label_2933; // 0xb65 JumpB
	var_438_string = ""; // 0xb66 PushV
	var_438_string = "Grin"; // 0xb67 MovS
	func_2295(var_42_cvector, var_438_string); // 0xb68 NEW_2
	var_439_int = 514053; // 0xb6a PushI
	SetMessage(var_439_int); // 0xb6b TObjFunc
	ClearReplies(); // 0xb6d TObjFunc
	var_440_int = 514054; // 0xb6f PushI
	var_441_int = -1; // 0xb70 PushI
	var_442_int = 15289; // 0xb71 PushI
	AddReply(var_440_int, var_441_int, var_442_int); // 0xb72 TObjFunc
	return 0; // 0xb74 Return
	
Label_2933:
	var_3_string = 1; // 0xb75 TMovB
	var_443_bool = 0; // 0xb76 PushV
	func_4072(var_443_bool); // 0xb77 NEW_2
	if(var_443_bool == 0) goto Label_2941; // 0xb79 JumpB
	lshStopAnimation(); // 0xb7a Func
	goto Label_2943; // 0xb7c Jump
	
Label_2943:
	return 0; // 0xb7f Return
	
Label_2941:
	StopAnimation(); // 0xb7d Func
	
Label_2945:
	return 0; // 0xb81 Return
}


task_13_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_int, var_36_int, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_cvector)
{
	var_43_int = 1; // 0xc24 PushI
	if(var_43_int == 0) goto Label_3212; // 0xc25 JumpB
	func_3973(); // 0xc27 NEW_2
	var_45_int = 19139; // 0xc29 PushI
	var_46_bool = var_41_bool == var_45_int; // 0xc2a Eq
	if(var_46_bool == 0) goto Label_3136; // 0xc2b JumpB
	var_47_string = ""; // 0xc2c PushV
	var_47_string = "Neutral"; // 0xc2d MovS
	func_3085(var_42_cvector, var_47_string); // 0xc2e NEW_2
	var_64_int = 518006; // 0xc30 PushI
	SetMessage(var_64_int); // 0xc31 TObjFunc
	ClearReplies(); // 0xc33 TObjFunc
	var_65_int = 518007; // 0xc35 PushI
	var_66_int = 36191; // 0xc36 PushI
	var_67_int = 19140; // 0xc37 PushI
	AddReply(var_65_int, var_66_int, var_67_int); // 0xc38 TObjFunc
	var_68_int = 534556; // 0xc3a PushI
	var_69_int = 36189; // 0xc3b PushI
	var_70_int = 36188; // 0xc3c PushI
	AddReply(var_68_int, var_69_int, var_70_int); // 0xc3d TObjFunc
	return 0; // 0xc3f Return
	
Label_3136:
	var_71_int = 36189; // 0xc40 PushI
	var_72_bool = var_41_bool == var_71_int; // 0xc41 Eq
	if(var_72_bool == 0) goto Label_3154; // 0xc42 JumpB
	var_73_string = ""; // 0xc43 PushV
	var_73_string = "Neutral"; // 0xc44 MovS
	func_3085(var_42_cvector, var_73_string); // 0xc45 NEW_2
	var_74_int = 534557; // 0xc47 PushI
	SetMessage(var_74_int); // 0xc48 TObjFunc
	ClearReplies(); // 0xc4a TObjFunc
	var_75_int = 534558; // 0xc4c PushI
	var_76_int = 36195; // 0xc4d PushI
	var_77_int = 36190; // 0xc4e PushI
	AddReply(var_75_int, var_76_int, var_77_int); // 0xc4f TObjFunc
	return 0; // 0xc51 Return
	
Label_3154:
	var_78_int = 36195; // 0xc52 PushI
	var_79_bool = var_41_bool == var_78_int; // 0xc53 Eq
	if(var_79_bool == 0) goto Label_3182; // 0xc54 JumpB
	var_80_string = ""; // 0xc55 PushV
	var_80_string = "Neutral"; // 0xc56 MovS
	func_3085(var_42_cvector, var_80_string); // 0xc57 NEW_2
	var_81_int = 534562; // 0xc59 PushI
	SetMessage(var_81_int); // 0xc5a TObjFunc
	ClearReplies(); // 0xc5c TObjFunc
	var_82_int = 534563; // 0xc5e PushI
	var_83_int = -1; // 0xc5f PushI
	var_84_int = 36196; // 0xc60 PushI
	AddReply(var_82_int, var_83_int, var_84_int); // 0xc61 TObjFunc
	var_85_int = 534565; // 0xc63 PushI
	var_86_int = -1; // 0xc64 PushI
	var_87_int = 36198; // 0xc65 PushI
	AddReply(var_85_int, var_86_int, var_87_int); // 0xc66 TObjFunc
	var_88_int = 534564; // 0xc68 PushI
	var_89_int = -1; // 0xc69 PushI
	var_90_int = 36197; // 0xc6a PushI
	AddReply(var_88_int, var_89_int, var_90_int); // 0xc6b TObjFunc
	return 0; // 0xc6d Return
	
Label_3182:
	var_91_int = 36191; // 0xc6e PushI
	var_92_bool = var_41_bool == var_91_int; // 0xc6f Eq
	if(var_92_bool == 0) goto Label_3200; // 0xc70 JumpB
	var_93_string = ""; // 0xc71 PushV
	var_93_string = "Neutral"; // 0xc72 MovS
	func_3085(var_42_cvector, var_93_string); // 0xc73 NEW_2
	var_94_int = 534559; // 0xc75 PushI
	SetMessage(var_94_int); // 0xc76 TObjFunc
	ClearReplies(); // 0xc78 TObjFunc
	var_95_int = 534560; // 0xc7a PushI
	var_96_int = 36189; // 0xc7b PushI
	var_97_int = 36192; // 0xc7c PushI
	AddReply(var_95_int, var_96_int, var_97_int); // 0xc7d TObjFunc
	return 0; // 0xc7f Return
	
Label_3200:
	var_3_string = 1; // 0xc80 TMovB
	var_98_bool = 0; // 0xc81 PushV
	func_4072(var_98_bool); // 0xc82 NEW_2
	if(var_98_bool == 0) goto Label_3208; // 0xc84 JumpB
	lshStopAnimation(); // 0xc85 Func
	goto Label_3210; // 0xc87 Jump
	
Label_3210:
	return 0; // 0xc8a Return
	
Label_3208:
	StopAnimation(); // 0xc88 Func
	
Label_3212:
	return 0; // 0xc8c Return
}


task_15_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_int, var_41_int, var_42_cvector)
{
	var_43_int = 1; // 0xd2f PushI
	if(var_43_int == 0) goto Label_3415; // 0xd30 JumpB
	func_3973(); // 0xd32 NEW_2
	var_45_int = 42551; // 0xd34 PushI
	var_46_bool = var_41_int == var_45_int; // 0xd35 Eq
	if(var_46_bool == 0) goto Label_3403; // 0xd36 JumpB
	var_47_string = ""; // 0xd37 PushV
	var_47_string = "Neutral"; // 0xd38 MovS
	func_3352(var_42_cvector, var_47_string); // 0xd39 NEW_2
	var_64_int = 540542; // 0xd3b PushI
	SetMessage(var_64_int); // 0xd3c TObjFunc
	ClearReplies(); // 0xd3e TObjFunc
	var_65_int = 540543; // 0xd40 PushI
	var_66_int = -1; // 0xd41 PushI
	var_67_int = 42552; // 0xd42 PushI
	AddReply(var_65_int, var_66_int, var_67_int); // 0xd43 TObjFunc
	var_68_int = 540796; // 0xd45 PushI
	var_69_int = -1; // 0xd46 PushI
	var_70_int = 42845; // 0xd47 PushI
	AddReply(var_68_int, var_69_int, var_70_int); // 0xd48 TObjFunc
	return 0; // 0xd4a Return
	
Label_3403:
	var_3_string = 1; // 0xd4b TMovB
	var_71_bool = 0; // 0xd4c PushV
	func_4072(var_71_bool); // 0xd4d NEW_2
	if(var_71_bool == 0) goto Label_3411; // 0xd4f JumpB
	lshStopAnimation(); // 0xd50 Func
	goto Label_3413; // 0xd52 Jump
	
Label_3413:
	return 0; // 0xd55 Return
	
Label_3411:
	StopAnimation(); // 0xd53 Func
	
Label_3415:
	return 0; // 0xd57 Return
}


task_16_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_cvector, var_41_int)
{
	var_42_int = 10; // 0xda2 PushI
	var_43_bool = var_41_int == var_42_int; // 0xda3 Eq
	if(var_43_bool == 0) goto Label_3526; // 0xda4 JumpB
	func_3485(); // 0xda6 NEW_2
	var_45_bool = 0; // 0xda8 PushV
	var_45_bool = 0; // 0xda9 MovB
	var_46_bool = 0; // 0xdaa PushV
	func_3699(var_46_bool); // 0xdab NEW_2
	if(var_46_bool == 0) goto Label_3507; // 0xdad JumpB
	var_49_bool = 0; // 0xdae PushV
	func_3454(var_49_bool); // 0xdaf NEW_2
	if(var_49_bool == 0) goto Label_3507; // 0xdb1 JumpB
	var_45_bool = 1; // 0xdb2 MovB
	
Label_3507:
	if(var_45_bool == 0) goto Label_3520; // 0xdb3 JumpB
	var_66_bool = 0; // 0xdb4 PushV
	func_3434(var_66_bool); // 0xdb5 NEW_2
	if(var_66_bool == 0) goto Label_3519; // 0xdb7 JumpB
	var_85_bool = 0; var_86_object = Obj(); // 0xdb8 PushV
	var_87_object = Obj(); // 0xdb9 PushV
	func_3980(var_87_object); // 0xdba NEW_2
	var_86_object = var_87_object; // 0xdbb Mov
	func_3847(var_86_object); // 0xdbd NEW_2
	
Label_3519:
	goto Label_3526; // 0xdbf Jump
	
Label_3526:
	return 0; // 0xdc6 Return
	
Label_3520:
	func_3449(var_41_int); // 0xdc1 NEW_2
	func_3476(); // 0xdc4 NEW_2
}


task_16_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_cvector)
{
	func_3667(); // 0xdc8 NEW_2
	func_3485(); // 0xdcb NEW_2
	lshStopSpeech(); // 0xdcd Func
	lshStopAnimation(); // 0xdcf Func
	StopAsync(); // 0xdd1 Func
	Hold(); // 0xdd3 Func
	return 0; // 0xdd5 Return
}


task_16_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_cvector)
{
	StopGroup0(); // 0xdd6 Func
	func_3485(); // 0xdd9 NEW_2
	var_42_string = ""; // 0xddb PushV
	var_42_string = "Neutral"; // 0xddc MovS
	func_3927(var_42_string); // 0xddd NEW_2
	func_3476(); // 0xde0 NEW_2
	return 0; // 0xde2 Return
}


task_16_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_cvector, var_41_bool)
{
	var_42_bool = var_41_bool; // 0xde4 Push
	if(var_42_bool == 0) goto Label_3562; // 0xde5 JumpB
	func_3476(); // 0xde7 NEW_2
	goto Label_3566; // 0xde9 Jump
	
Label_3566:
	return 0; // 0xdee Return
	
Label_3562:
	var_48_string = ""; // 0xdea PushV
	var_48_string = "Neutral"; // 0xdeb MovS
	func_3927(var_48_string); // 0xdec NEW_2
}


task_16_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_cvector, var_41_object)
{
	var_42_bool = 0; var_43_bool = 0; // 0xdef PushV
	IsOverrideActive(var_43_bool); // 0xdf0 Func
	var_44_bool = var_43_bool == 0; // 0xdf2 Not
	if(var_44_bool == 0) goto Label_3595; // 0xdf3 JumpB
	EventDisable(0); // 0xdf4 EventDisable
	func_3667(); // 0xdf6 NEW_2
	var_45_bool = 0; var_46_object = Obj(); // 0xdf8 PushV
	var_46_object = var_41_object; // 0xdf9 Mov
	func_3690(var_46_object); // 0xdfa NEW_2
	EventEnable(0); // 0xdfc EventEnable
	var_59_object = Obj(); // 0xdfd PushV
	var_59_object = var_41_object; // 0xdfe Mov
	func_4543(var_59_object); // 0xdff NEW_2
	var_832_string = ""; // 0xe01 PushV
	var_832_string = "Neutral"; // 0xe02 MovS
	func_3927(var_832_string); // 0xe03 NEW_2
	func_3485(); // 0xe06 NEW_2
	func_3476(); // 0xe09 NEW_2
	
Label_3595:
	return 2; // 0xe0b Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_cvector)
{
	func_3420(var_40_cvector); // 0xd59 NEW_2
	return 0; // 0xd5b Return
}


func_0(var_0_object, var_640_int, var_641_object)
{
	var_643_object = Obj(); var_644_bool = 0; var_645_int = 0; var_646_bool = 0; var_647_object = Obj(); var_648_bool = 0; var_649_int = 0; var_650_bool = 0; // 0x0 PushV
	var_0_object = var_641_object; // 0x1 TMov
	var_651_bool = 0; var_652_object = Obj(); var_653_float = 0; // 0x2 PushV
	var_652_object = var_641_object; // 0x3 Mov
	var_653_float = 70.0; // 0x4 MovF
	func_3704(var_652_object, var_653_float); // 0x5 NEW_2
	var_654_bool = var_651_bool == 0; // 0x7 Not
	if(var_654_bool == 0) goto Label_11; // 0x8 JumpB
	var_640_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_647_object); // 0xb Func
	var_655_int = 0; // 0xd PushV
	func_4066(var_655_int); // 0xe NEW_2
	SetNPCName(var_655_int); // 0x10 ObjFunc
	var_656_int = 0; // 0x12 PushV
	func_4064(var_656_int); // 0x13 NEW_2
	SetNPCDescription(var_656_int); // 0x15 ObjFunc
	var_657_string = ""; // 0x17 PushV
	func_4068(var_657_string); // 0x18 NEW_2
	SetPhoto(var_657_string); // 0x1a ObjFunc
	var_658_string = ""; // 0x1c PushV
	func_4070(var_658_string); // 0x1d NEW_2
	SetPhoto2(var_658_string); // 0x1f ObjFunc
	var_659_int = 0; // 0x21 PushV
	func_4526(var_659_int); // 0x22 NEW_2
	SetPlayerName(var_659_int); // 0x24 ObjFunc
	var_649_int = -1; // 0x26 MovI
	IsOverrideActive(var_648_bool); // 0x27 Func
	var_660_bool = var_648_bool; // 0x29 Push
	if(var_660_bool == 0) goto Label_45; // 0x2a JumpB
	var_640_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_647_object); // 0x2d Func
	var_661_bool = 0; var_662_object = Obj(); // 0x2f PushV
	var_663_object = Obj(); // 0x30 PushV
	func_3980(var_663_object); // 0x31 NEW_2
	var_662_object = var_663_object; // 0x32 Mov
	func_3789(var_661_bool, var_662_object); // 0x34 NEW_2
	var_664_object = Obj(); var_665_object = Obj(); // 0x36 PushV
	var_664_object = var_641_object; // 0x37 Mov
	var_665_object = var_647_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_666_object, var_667_object, var_668_string, var_669_bool, var_664_object, var_665_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	IsDialogEnd(var_650_bool); // 0x3d ObjFunc
	
Label_63:
	var_713_bool = var_650_bool == 0; // 0x3f Not
	if(var_713_bool == 0) goto Label_70; // 0x40 JumpB
	sync(); // 0x41 Func
	IsDialogEnd(var_650_bool); // 0x43 ObjFunc
	goto Label_63; // 0x45 Jump
	
Label_70:
	var_714_object = Obj(); // 0x46 PushV
	var_714_object = var_641_object; // 0x47 Mov
	func_3772(); // 0x48 NEW_2
	StopDialog(var_647_object); // 0x4a Func
	GetReturnValue(var_649_int); // 0x4c ObjFunc
	var_640_int = var_649_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_4354(var_583_bool)
{
	var_585_int = 0; var_586_int = 0; // 0x1102 PushV
	var_587_string = "Rifle"; // 0x1103 PushS
	GetItemCountOfType(var_586_int, var_587_string); // 0x1104 ObjFunc
	var_588_int = 5; // 0x1106 PushI
	var_589_bool = var_586_int >= var_588_int; // 0x1107 GE
	if(var_589_bool == 0) goto Label_4363; // 0x1108 JumpB
	var_583_bool = 1; // 0x1109 MovB
	return 2; // 0x110a Return
	
Label_4363:
	var_583_bool = 0; // 0x110b MovB
	return 2; // 0x110c Return
}


func_4101()
{
	var_117_int = 0; var_118_string = ""; // 0x1006 PushV
	var_118_string = "map_chertez_state"; // 0x1007 MovS
	func_3996(var_117_int, var_118_string); // 0x1008 NEW_2
	var_121_int = 3; // 0x100a PushI
	var_122_bool = var_117_int <= var_121_int; // 0x100b LE
	if(var_122_bool == 0) goto Label_4117; // 0x100c JumpB
	var_123_string = "map_chertez_state"; // 0x100d PushS
	var_124_int = 3; // 0x100e PushI
	SetVariable(var_123_string, var_124_int); // 0x100f Func
	var_125_string = "map_chertez_force"; // 0x1011 PushS
	var_126_int = 1; // 0x1012 PushI
	SetVariable(var_125_string, var_126_int); // 0x1013 Func
	
Label_4117:
	return 0; // 0x1015 Return
}


func_3847(var_146_bool)
{
	var_148_string = ""; var_149_int = 0; var_150_bool = 0; var_151_int = 0; var_152_string = ""; var_153_string = ""; var_154_int = 0; var_155_bool = 0; var_156_int = 0; var_157_string = ""; // 0xf07 PushV
	var_153_string = "c"; // 0xf08 MovS
	var_154_int = 0; // 0xf09 MovI
	
Label_3850:
	var_158_int = 1; // 0xf0a PushI
	if(var_158_int == 0) goto Label_3863; // 0xf0b JumpB
	var_159_int = 1; // 0xf0c PushI
	var_160_int = var_154_int + var_159_int; // 0xf0d Add
	var_161_int = var_153_string + var_160_int; // 0xf0e Add
	HasProperty(var_161_int, var_155_bool); // 0xf0f ObjFunc
	var_162_bool = var_155_bool == 0; // 0xf11 Not
	if(var_162_bool == 0) goto Label_3860; // 0xf12 JumpB
	goto Label_3863; // 0xf13 Jump
	
Label_3863:
	var_163_bool = var_154_int == 0; // 0xf17 Not
	if(var_163_bool == 0) goto Label_3867; // 0xf18 JumpB
	var_146_bool = 0; // 0xf19 MovB
	return 10; // 0xf1a Return
	
Label_3867:
	var_156_int = 0; // 0xf1b MovI
	var_164_int = 1; // 0xf1c PushI
	var_165_bool = var_154_int > var_164_int; // 0xf1d GT
	if(var_165_bool == 0) goto Label_3873; // 0xf1e JumpB
	irand(var_156_int, var_154_int); // 0xf1f Func
	
Label_3873:
	var_166_int = 1; // 0xf21 PushI
	var_167_int = var_156_int + var_166_int; // 0xf22 Add
	var_168_int = var_153_string + var_167_int; // 0xf23 Add
	GetProperty(var_168_int, var_157_string); // 0xf24 ObjFunc
	var_169_bool = 0; var_170_string = ""; // 0xf26 PushV
	var_170_string = var_157_string; // 0xf27 Mov
	func_3958(var_169_bool, var_170_string); // 0xf28 NEW_2
	var_146_bool = var_169_bool; // 0xf29 Mov
	return 10; // 0xf2b Return
	
Label_3860:
	var_175_int = 1; // 0xf14 PushI
	var_154_int = var_154_int + var_175_int; // 0xf15 Add2
	goto Label_3850; // 0xf16 Jump
}


func_3596()
{
	var_45_int = 0; var_46_int = 0; var_47_bool = 0; var_48_int = 0; var_49_int = 0; var_50_bool = 0; var_51_int = 0; var_52_int = 0; var_53_bool = 0; var_54_int = 0; var_55_int = 0; var_56_bool = 0; // 0xe0c PushV
	WaitForAnimEnd(); // 0xe0d Func
	var_57_bool = 0; // 0xe0f PushV
	func_3699(var_57_bool); // 0xe10 NEW_2
	var_58_bool = var_57_bool == 0; // 0xe12 Not
	if(var_58_bool == 0) goto Label_3605; // 0xe13 JumpB
	return 12; // 0xe14 Return
	
Label_3605:
	var_59_int = 0; // 0xe15 PushV
	func_4047(var_59_int); // 0xe16 NEW_2
	var_51_int = var_59_int; // 0xe17 Mov
	var_52_int = 0; // 0xe19 MovI
	
Label_3610:
	var_72_bool = 0; // 0xe1a PushV
	var_72_bool = 0; // 0xe1b MovB
	var_73_int = 5; // 0xe1c PushI
	var_74_bool = var_52_int < var_73_int; // 0xe1d LT
	if(var_74_bool == 0) goto Label_3620; // 0xe1e JumpB
	var_75_bool = 0; // 0xe1f PushV
	func_3699(var_75_bool); // 0xe20 NEW_2
	if(var_75_bool == 0) goto Label_3620; // 0xe22 JumpB
	var_72_bool = 1; // 0xe23 MovB
	
Label_3620:
	if(var_72_bool == 0) goto Label_3662; // 0xe24 JumpB
	var_76_bool = var_51_int == 0; // 0xe25 Not
	if(var_76_bool == 0) goto Label_3630; // 0xe26 JumpB
	var_77_int = 3; // 0xe27 PushI
	Sleep(var_77_int, var_53_bool); // 0xe28 Func
	var_78_bool = var_53_bool == 0; // 0xe2a Not
	if(var_78_bool == 0) goto Label_3629; // 0xe2b JumpB
	goto Label_3662; // 0xe2c Jump
	
Label_3662:
	ResetAAS(); // 0xe4e Func
	return 12; // 0xe50 Return
	
Label_3629:
	goto Label_3651; // 0xe2d Jump
	
Label_3651:
	var_79_bool = 0; // 0xe43 PushV
	func_3665(var_79_bool); // 0xe44 NEW_2
	var_80_bool = var_79_bool == 0; // 0xe46 Not
	if(var_80_bool == 0) goto Label_3657; // 0xe47 JumpB
	goto Label_3662; // 0xe48 Jump
	
Label_3657:
	ResetAAS(); // 0xe49 Func
	var_81_int = 1; // 0xe4b PushI
	var_52_int = var_52_int + var_81_int; // 0xe4c Add2
	goto Label_3610; // 0xe4d Jump
	
Label_3630:
	irand(var_54_int, var_51_int); // 0xe2e Func
	var_82_int = 5; // 0xe30 PushI
	irand(var_55_int, var_82_int); // 0xe31 Func
	var_83_int = 0; // 0xe33 PushI
	var_84_bool = var_55_int != var_83_int; // 0xe34 Neq
	if(var_84_bool == 0) goto Label_3639; // 0xe35 JumpB
	var_54_int = 0; // 0xe36 MovI
	
Label_3639:
	var_85_string = "all"; // 0xe37 PushS
	var_86_string = ""; var_87_int = 0; // 0xe38 PushV
	var_87_int = var_54_int; // 0xe39 Mov
	func_4040(var_86_string, var_87_int); // 0xe3a NEW_2
	PlayAnimation(var_85_string, var_86_string); // 0xe3c Func
	WaitForAnimEnd(var_56_bool); // 0xe3e Func
	var_88_bool = var_56_bool == 0; // 0xe40 Not
	if(var_88_bool == 0) goto Label_3651; // 0xe41 JumpB
	goto Label_3662; // 0xe42 Jump
}


func_3085(var_2_object, var_237_string)
{
	var_238_bool = 0; // 0xc0e PushV
	func_4072(var_238_bool); // 0xc0f NEW_2
	var_239_bool = var_238_bool == 0; // 0xc11 Not
	if(var_239_bool == 0) goto Label_3092; // 0xc12 JumpB
	return 0; // 0xc13 Return
	
Label_3092:
	var_240_bool = var_237_string == var_2_object; // 0xc14 Eq
	if(var_240_bool == 0) goto Label_3095; // 0xc15 JumpB
	return 0; // 0xc16 Return
	
Label_3095:
	var_241_string = ""; var_242_bool = 0; // 0xc17 PushV
	var_241_string = var_237_string; // 0xc18 Mov
	var_243_string = ""; // 0xc19 PushS
	var_244_bool = var_237_string == var_243_string; // 0xc1a Eq
	if(var_244_bool == 0) goto Label_3102; // 0xc1b JumpB
	var_242_bool = 0; // 0xc1c MovB
	goto Label_3103; // 0xc1d Jump
	
Label_3103:
	func_3943(var_241_string, var_242_bool); // 0xc1f NEW_2
	var_2_object = var_237_string; // 0xc21 TMov
	return 0; // 0xc22 Return
	
Label_3102:
	var_242_bool = 1; // 0xc1e MovB
}


func_4365(var_602_bool)
{
	var_604_int = 0; var_605_int = 0; // 0x110d PushV
	var_606_string = "Rifle"; // 0x110e PushS
	GetItemCountOfType(var_605_int, var_606_string); // 0x110f ObjFunc
	var_607_bool = 0; // 0x1111 PushV
	var_607_bool = 0; // 0x1112 MovB
	var_608_int = 0; // 0x1113 PushI
	var_609_bool = var_605_int > var_608_int; // 0x1114 GT
	if(var_609_bool == 0) goto Label_4378; // 0x1115 JumpB
	var_610_int = 5; // 0x1116 PushI
	var_611_bool = var_605_int < var_610_int; // 0x1117 LT
	if(var_611_bool == 0) goto Label_4378; // 0x1118 JumpB
	var_607_bool = 1; // 0x1119 MovB
	
Label_4378:
	if(var_607_bool == 0) goto Label_4381; // 0x111a JumpB
	var_602_bool = 1; // 0x111b MovB
	return 2; // 0x111c Return
	
Label_4381:
	var_602_bool = 0; // 0x111d MovB
	return 2; // 0x111e Return
}


func_4118()
{
	var_129_object = Obj(); var_130_string = ""; var_131_float = 0; // 0x1017 PushV
	var_132_object = Obj(); // 0x1018 PushV
	func_4476(var_132_object); // 0x1019 NEW_2
	var_129_object = var_132_object; // 0x101a Mov
	var_130_string = "pt_map_aglaja"; // 0x101c MovS
	var_131_float = -1; // 0x101d MovI
	func_4493(var_129_object, var_130_string, var_131_float); // 0x101e NEW_2
	var_158_object = Obj(); // 0x1020 PushV
	func_4476(var_158_object); // 0x1021 NEW_2
	ShowMap(var_158_object); // 0x1023 ObjFunc
	return 0; // 0x1025 Return
}


func_2070(var_0_object, var_510_int, var_511_object)
{
	var_513_object = Obj(); var_514_bool = 0; var_515_int = 0; var_516_bool = 0; var_517_object = Obj(); var_518_bool = 0; var_519_int = 0; var_520_bool = 0; // 0x816 PushV
	var_0_object = var_511_object; // 0x817 TMov
	var_521_bool = 0; var_522_object = Obj(); var_523_float = 0; // 0x818 PushV
	var_522_object = var_511_object; // 0x819 Mov
	var_523_float = 70.0; // 0x81a MovF
	func_3704(var_522_object, var_523_float); // 0x81b NEW_2
	var_524_bool = var_521_bool == 0; // 0x81d Not
	if(var_524_bool == 0) goto Label_2081; // 0x81e JumpB
	var_510_int = -2; // 0x81f MovI
	return 8; // 0x820 Return
	
Label_2081:
	CreateDialog(var_517_object); // 0x821 Func
	var_525_int = 0; // 0x823 PushV
	func_4066(var_525_int); // 0x824 NEW_2
	SetNPCName(var_525_int); // 0x826 ObjFunc
	var_526_int = 0; // 0x828 PushV
	func_4064(var_526_int); // 0x829 NEW_2
	SetNPCDescription(var_526_int); // 0x82b ObjFunc
	var_527_string = ""; // 0x82d PushV
	func_4068(var_527_string); // 0x82e NEW_2
	SetPhoto(var_527_string); // 0x830 ObjFunc
	var_528_string = ""; // 0x832 PushV
	func_4070(var_528_string); // 0x833 NEW_2
	SetPhoto2(var_528_string); // 0x835 ObjFunc
	var_529_int = 0; // 0x837 PushV
	func_4526(var_529_int); // 0x838 NEW_2
	SetPlayerName(var_529_int); // 0x83a ObjFunc
	var_519_int = -1; // 0x83c MovI
	IsOverrideActive(var_518_bool); // 0x83d Func
	var_530_bool = var_518_bool; // 0x83f Push
	if(var_530_bool == 0) goto Label_2115; // 0x840 JumpB
	var_510_int = -2; // 0x841 MovI
	return 8; // 0x842 Return
	
Label_2115:
	DoDialog(var_517_object); // 0x843 Func
	var_531_bool = 0; var_532_object = Obj(); // 0x845 PushV
	var_533_object = Obj(); // 0x846 PushV
	func_3980(var_533_object); // 0x847 NEW_2
	var_532_object = var_533_object; // 0x848 Mov
	func_3789(var_531_bool, var_532_object); // 0x84a NEW_2
	var_534_object = Obj(); var_535_object = Obj(); // 0x84c PushV
	var_534_object = var_511_object; // 0x84d Mov
	var_535_object = var_517_object; // 0x84e Mov
	TaskCall(11); // 0x84f TaskCall
	func_2151(var_536_object, var_537_object, var_538_string, var_539_bool, var_534_object, var_535_object); // 0x850 NEW_2
	TaskReturn(); // 0x851 TaskReturn
	IsDialogEnd(var_520_bool); // 0x853 ObjFunc
	
Label_2133:
	var_636_bool = var_520_bool == 0; // 0x855 Not
	if(var_636_bool == 0) goto Label_2140; // 0x856 JumpB
	sync(); // 0x857 Func
	IsDialogEnd(var_520_bool); // 0x859 ObjFunc
	goto Label_2133; // 0x85b Jump
	
Label_2140:
	var_637_object = Obj(); // 0x85c PushV
	var_637_object = var_511_object; // 0x85d Mov
	func_3772(); // 0x85e NEW_2
	StopDialog(var_517_object); // 0x860 Func
	GetReturnValue(var_519_int); // 0x862 ObjFunc
	var_510_int = var_519_int; // 0x864 Mov
	return 8; // 0x865 Return
}


func_3352(var_2_object, var_807_string)
{
	var_808_bool = 0; // 0xd19 PushV
	func_4072(var_808_bool); // 0xd1a NEW_2
	var_809_bool = var_808_bool == 0; // 0xd1c Not
	if(var_809_bool == 0) goto Label_3359; // 0xd1d JumpB
	return 0; // 0xd1e Return
	
Label_3359:
	var_810_bool = var_807_string == var_2_object; // 0xd1f Eq
	if(var_810_bool == 0) goto Label_3362; // 0xd20 JumpB
	return 0; // 0xd21 Return
	
Label_3362:
	var_811_string = ""; var_812_bool = 0; // 0xd22 PushV
	var_811_string = var_807_string; // 0xd23 Mov
	var_813_string = ""; // 0xd24 PushS
	var_814_bool = var_807_string == var_813_string; // 0xd25 Eq
	if(var_814_bool == 0) goto Label_3369; // 0xd26 JumpB
	var_812_bool = 0; // 0xd27 MovB
	goto Label_3370; // 0xd28 Jump
	
Label_3370:
	func_3943(var_811_string, var_812_bool); // 0xd2a NEW_2
	var_2_object = var_807_string; // 0xd2c TMov
	return 0; // 0xd2d Return
	
Label_3369:
	var_812_bool = 1; // 0xd29 MovB
}


func_4383()
{
	var_51_object = Obj(); var_52_object = Obj(); // 0x111f PushV
	var_53_int = 684; // 0x1120 PushI
	var_54_int = 2; // 0x1121 PushI
	var_55_int = 534499; // 0x1122 PushI
	CreateDiaryEntry(var_52_object, var_53_int, var_54_int, var_55_int); // 0x1123 Func
	var_56_bool = 0; var_57_object = Obj(); var_58_int = 0; // 0x1125 PushV
	var_57_object = var_52_object; // 0x1126 Mov
	var_58_int = 682; // 0x1127 MovI
	func_4448(var_56_bool, var_57_object, var_58_int); // 0x1128 NEW_2
	return 2; // 0x112a Return
}


func_4134()
{
	var_111_string = "ood9Xan3"; // 0x1027 PushS
	var_112_int = 1; // 0x1028 PushI
	SetVariable(var_111_string, var_112_int); // 0x1029 Func
	return 0; // 0x102b Return
}


func_4140()
{
	var_78_string = "playsound"; // 0x102d PushS
	var_79_string = "giveitem"; // 0x102e PushS
	TriggerWorld(var_78_string, var_79_string); // 0x102f Func
	return 0; // 0x1031 Return
}


func_3884(var_177_bool)
{
	var_179_string = ""; var_180_int = 0; var_181_bool = 0; var_182_int = 0; var_183_string = ""; var_184_string = ""; var_185_int = 0; var_186_bool = 0; var_187_int = 0; var_188_string = ""; // 0xf2c PushV
	var_189_string = "d"; // 0xf2d PushS
	var_190_int = 0; // 0xf2e PushV
	func_4025(var_190_int); // 0xf2f NEW_2
	var_196_int = var_189_string + var_190_int; // 0xf31 Add
	var_197_string = "m"; // 0xf32 PushS
	var_184_string = var_196_int + var_197_string; // 0xf33 Add2
	var_185_int = 0; // 0xf34 MovI
	
Label_3893:
	var_198_int = 1; // 0xf35 PushI
	if(var_198_int == 0) goto Label_3906; // 0xf36 JumpB
	var_199_int = 1; // 0xf37 PushI
	var_200_int = var_185_int + var_199_int; // 0xf38 Add
	var_201_int = var_184_string + var_200_int; // 0xf39 Add
	HasProperty(var_201_int, var_186_bool); // 0xf3a ObjFunc
	var_202_bool = var_186_bool == 0; // 0xf3c Not
	if(var_202_bool == 0) goto Label_3903; // 0xf3d JumpB
	goto Label_3906; // 0xf3e Jump
	
Label_3906:
	var_203_bool = var_185_int == 0; // 0xf42 Not
	if(var_203_bool == 0) goto Label_3910; // 0xf43 JumpB
	var_177_bool = 0; // 0xf44 MovB
	return 10; // 0xf45 Return
	
Label_3910:
	var_187_int = 0; // 0xf46 MovI
	var_204_int = 1; // 0xf47 PushI
	var_205_bool = var_185_int > var_204_int; // 0xf48 GT
	if(var_205_bool == 0) goto Label_3916; // 0xf49 JumpB
	irand(var_187_int, var_185_int); // 0xf4a Func
	
Label_3916:
	var_206_int = 1; // 0xf4c PushI
	var_207_int = var_187_int + var_206_int; // 0xf4d Add
	var_208_int = var_184_string + var_207_int; // 0xf4e Add
	GetProperty(var_208_int, var_188_string); // 0xf4f ObjFunc
	var_209_bool = 0; var_210_string = ""; // 0xf51 PushV
	var_210_string = var_188_string; // 0xf52 Mov
	func_3958(var_209_bool, var_210_string); // 0xf53 NEW_2
	var_177_bool = var_209_bool; // 0xf54 Mov
	return 10; // 0xf56 Return
	
Label_3903:
	var_211_int = 1; // 0xf3f PushI
	var_185_int = var_185_int + var_211_int; // 0xf40 Add2
	goto Label_3893; // 0xf41 Jump
}


func_4396()
{
	var_67_object = Obj(); var_68_object = Obj(); // 0x112c PushV
	var_69_int = 679; // 0x112d PushI
	var_70_int = 2; // 0x112e PushI
	var_71_int = 534420; // 0x112f PushI
	CreateDiaryEntry(var_68_object, var_69_int, var_70_int, var_71_int); // 0x1130 Func
	var_72_bool = 0; var_73_object = Obj(); var_74_int = 0; // 0x1132 PushV
	var_73_object = var_68_object; // 0x1133 Mov
	var_74_int = 26; // 0x1134 MovI
	func_4448(var_72_bool, var_73_object, var_74_int); // 0x1135 NEW_2
	return 2; // 0x1137 Return
}


func_4146()
{
	return 0; // 0x1033 Return
}


func_562(var_0_object, var_717_int, var_718_object)
{
	var_720_object = Obj(); var_721_bool = 0; var_722_int = 0; var_723_bool = 0; var_724_object = Obj(); var_725_bool = 0; var_726_int = 0; var_727_bool = 0; // 0x232 PushV
	var_0_object = var_718_object; // 0x233 TMov
	var_728_bool = 0; var_729_object = Obj(); var_730_float = 0; // 0x234 PushV
	var_729_object = var_718_object; // 0x235 Mov
	var_730_float = 70.0; // 0x236 MovF
	func_3704(var_729_object, var_730_float); // 0x237 NEW_2
	var_731_bool = var_728_bool == 0; // 0x239 Not
	if(var_731_bool == 0) goto Label_573; // 0x23a JumpB
	var_717_int = -2; // 0x23b MovI
	return 8; // 0x23c Return
	
Label_573:
	CreateDialog(var_724_object); // 0x23d Func
	var_732_int = 0; // 0x23f PushV
	func_4066(var_732_int); // 0x240 NEW_2
	SetNPCName(var_732_int); // 0x242 ObjFunc
	var_733_int = 0; // 0x244 PushV
	func_4064(var_733_int); // 0x245 NEW_2
	SetNPCDescription(var_733_int); // 0x247 ObjFunc
	var_734_string = ""; // 0x249 PushV
	func_4068(var_734_string); // 0x24a NEW_2
	SetPhoto(var_734_string); // 0x24c ObjFunc
	var_735_string = ""; // 0x24e PushV
	func_4070(var_735_string); // 0x24f NEW_2
	SetPhoto2(var_735_string); // 0x251 ObjFunc
	var_736_int = 0; // 0x253 PushV
	func_4526(var_736_int); // 0x254 NEW_2
	SetPlayerName(var_736_int); // 0x256 ObjFunc
	var_726_int = -1; // 0x258 MovI
	IsOverrideActive(var_725_bool); // 0x259 Func
	var_737_bool = var_725_bool; // 0x25b Push
	if(var_737_bool == 0) goto Label_607; // 0x25c JumpB
	var_717_int = -2; // 0x25d MovI
	return 8; // 0x25e Return
	
Label_607:
	DoDialog(var_724_object); // 0x25f Func
	var_738_bool = 0; var_739_object = Obj(); // 0x261 PushV
	var_740_object = Obj(); // 0x262 PushV
	func_3980(var_740_object); // 0x263 NEW_2
	var_739_object = var_740_object; // 0x264 Mov
	func_3789(var_738_bool, var_739_object); // 0x266 NEW_2
	var_741_object = Obj(); var_742_object = Obj(); // 0x268 PushV
	var_741_object = var_718_object; // 0x269 Mov
	var_742_object = var_724_object; // 0x26a Mov
	TaskCall(3); // 0x26b TaskCall
	func_643(var_743_object, var_744_object, var_745_string, var_746_bool, var_741_object, var_742_object); // 0x26c NEW_2
	TaskReturn(); // 0x26d TaskReturn
	IsDialogEnd(var_727_bool); // 0x26f ObjFunc
	
Label_625:
	var_774_bool = var_727_bool == 0; // 0x271 Not
	if(var_774_bool == 0) goto Label_632; // 0x272 JumpB
	sync(); // 0x273 Func
	IsDialogEnd(var_727_bool); // 0x275 ObjFunc
	goto Label_625; // 0x277 Jump
	
Label_632:
	var_775_object = Obj(); // 0x278 PushV
	var_775_object = var_718_object; // 0x279 Mov
	func_3772(); // 0x27a NEW_2
	StopDialog(var_724_object); // 0x27c Func
	GetReturnValue(var_726_int); // 0x27e ObjFunc
	var_717_int = var_726_int; // 0x280 Mov
	return 8; // 0x281 Return
}


func_4148()
{
	var_49_object = Obj(); var_50_object = Obj(); // 0x1034 PushV
	var_51_string = "d3q02"; // 0x1035 PushS
	var_52_int = 4; // 0x1036 PushI
	SetVariable(var_51_string, var_52_int); // 0x1037 Func
	var_53_object = Obj(); // 0x1039 PushV
	func_4476(var_53_object); // 0x103a NEW_2
	var_50_object = var_53_object; // 0x103b Mov
	var_60_string = "d3q02HanGotoMladVlad"; // 0x103d PushS
	var_61_string = "pt_map_mladvlad"; // 0x103e PushS
	var_62_int = 0; // 0x103f PushI
	var_63_int = 511386; // 0x1040 PushI
	var_64_float = 0; // 0x1041 PushV
	func_4020(var_64_float); // 0x1042 NEW_2
	AddMark(var_60_string, var_61_string, var_62_int, var_63_int, var_64_float); // 0x1044 ObjFunc
	func_4396(); // 0x1047 NEW_2
	return 2; // 0x1049 Return
}


func_821(var_0_object, var_294_int, var_295_object)
{
	var_297_object = Obj(); var_298_bool = 0; var_299_int = 0; var_300_bool = 0; var_301_object = Obj(); var_302_bool = 0; var_303_int = 0; var_304_bool = 0; // 0x335 PushV
	var_0_object = var_295_object; // 0x336 TMov
	var_305_bool = 0; var_306_object = Obj(); var_307_float = 0; // 0x337 PushV
	var_306_object = var_295_object; // 0x338 Mov
	var_307_float = 70.0; // 0x339 MovF
	func_3704(var_306_object, var_307_float); // 0x33a NEW_2
	var_308_bool = var_305_bool == 0; // 0x33c Not
	if(var_308_bool == 0) goto Label_832; // 0x33d JumpB
	var_294_int = -2; // 0x33e MovI
	return 8; // 0x33f Return
	
Label_832:
	CreateDialog(var_301_object); // 0x340 Func
	var_309_int = 0; // 0x342 PushV
	func_4066(var_309_int); // 0x343 NEW_2
	SetNPCName(var_309_int); // 0x345 ObjFunc
	var_310_int = 0; // 0x347 PushV
	func_4064(var_310_int); // 0x348 NEW_2
	SetNPCDescription(var_310_int); // 0x34a ObjFunc
	var_311_string = ""; // 0x34c PushV
	func_4068(var_311_string); // 0x34d NEW_2
	SetPhoto(var_311_string); // 0x34f ObjFunc
	var_312_string = ""; // 0x351 PushV
	func_4070(var_312_string); // 0x352 NEW_2
	SetPhoto2(var_312_string); // 0x354 ObjFunc
	var_313_int = 0; // 0x356 PushV
	func_4526(var_313_int); // 0x357 NEW_2
	SetPlayerName(var_313_int); // 0x359 ObjFunc
	var_303_int = -1; // 0x35b MovI
	IsOverrideActive(var_302_bool); // 0x35c Func
	var_314_bool = var_302_bool; // 0x35e Push
	if(var_314_bool == 0) goto Label_866; // 0x35f JumpB
	var_294_int = -2; // 0x360 MovI
	return 8; // 0x361 Return
	
Label_866:
	DoDialog(var_301_object); // 0x362 Func
	var_315_bool = 0; var_316_object = Obj(); // 0x364 PushV
	var_317_object = Obj(); // 0x365 PushV
	func_3980(var_317_object); // 0x366 NEW_2
	var_316_object = var_317_object; // 0x367 Mov
	func_3789(var_315_bool, var_316_object); // 0x369 NEW_2
	var_318_object = Obj(); var_319_object = Obj(); // 0x36b PushV
	var_318_object = var_295_object; // 0x36c Mov
	var_319_object = var_301_object; // 0x36d Mov
	TaskCall(5); // 0x36e TaskCall
	func_902(var_320_object, var_321_object, var_322_string, var_323_bool, var_318_object, var_319_object); // 0x36f NEW_2
	TaskReturn(); // 0x370 TaskReturn
	IsDialogEnd(var_304_bool); // 0x372 ObjFunc
	
Label_884:
	var_366_bool = var_304_bool == 0; // 0x374 Not
	if(var_366_bool == 0) goto Label_891; // 0x375 JumpB
	sync(); // 0x376 Func
	IsDialogEnd(var_304_bool); // 0x378 ObjFunc
	goto Label_884; // 0x37a Jump
	
Label_891:
	var_367_object = Obj(); // 0x37b PushV
	var_367_object = var_295_object; // 0x37c Mov
	func_3772(); // 0x37d NEW_2
	StopDialog(var_301_object); // 0x37f Func
	GetReturnValue(var_303_int); // 0x381 ObjFunc
	var_294_int = var_303_int; // 0x383 Mov
	return 8; // 0x384 Return
}


func_4409()
{
	var_96_object = Obj(); var_97_object = Obj(); // 0x1139 PushV
	var_98_int = 185; // 0x113a PushI
	var_99_int = 1; // 0x113b PushI
	var_100_int = 515448; // 0x113c PushI
	CreateDiaryEntry(var_97_object, var_98_int, var_99_int, var_100_int); // 0x113d Func
	var_101_bool = 0; var_102_object = Obj(); var_103_int = 0; // 0x113f PushV
	var_102_object = var_97_object; // 0x1140 Mov
	var_103_int = 182; // 0x1141 MovI
	func_4448(var_101_bool, var_102_object, var_103_int); // 0x1142 NEW_2
	return 2; // 0x1144 Return
}


func_1860(var_2_object, var_475_string)
{
	var_476_bool = 0; // 0x745 PushV
	func_4072(var_476_bool); // 0x746 NEW_2
	var_477_bool = var_476_bool == 0; // 0x748 Not
	if(var_477_bool == 0) goto Label_1867; // 0x749 JumpB
	return 0; // 0x74a Return
	
Label_1867:
	var_478_bool = var_475_string == var_2_object; // 0x74b Eq
	if(var_478_bool == 0) goto Label_1870; // 0x74c JumpB
	return 0; // 0x74d Return
	
Label_1870:
	var_479_string = ""; var_480_bool = 0; // 0x74e PushV
	var_479_string = var_475_string; // 0x74f Mov
	var_481_string = ""; // 0x750 PushS
	var_482_bool = var_475_string == var_481_string; // 0x751 Eq
	if(var_482_bool == 0) goto Label_1877; // 0x752 JumpB
	var_480_bool = 0; // 0x753 MovB
	goto Label_1878; // 0x754 Jump
	
Label_1878:
	func_3943(var_479_string, var_480_bool); // 0x756 NEW_2
	var_2_object = var_475_string; // 0x758 TMov
	return 0; // 0x759 Return
	
Label_1877:
	var_480_bool = 1; // 0x755 MovB
}


func_4422()
{
	var_51_object = Obj(); var_52_object = Obj(); // 0x1146 PushV
	var_53_int = 184; // 0x1147 PushI
	var_54_int = 1; // 0x1148 PushI
	var_55_int = 515447; // 0x1149 PushI
	CreateDiaryEntry(var_52_object, var_53_int, var_54_int, var_55_int); // 0x114a Func
	var_56_bool = 0; var_57_object = Obj(); var_58_int = 0; // 0x114c PushV
	var_57_object = var_52_object; // 0x114d Mov
	var_58_int = 182; // 0x114e MovI
	func_4448(var_56_bool, var_57_object, var_58_int); // 0x114f NEW_2
	return 2; // 0x1151 Return
}


func_4171()
{
	var_473_string = "ood8Han1"; // 0x104c PushS
	var_474_int = 1; // 0x104d PushI
	SetVariable(var_473_string, var_474_int); // 0x104e Func
	return 0; // 0x1050 Return
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_664_object, var_665_object)
{
	var_0_object = var_665_object; // 0x52 TMov
	var_1_object = var_664_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_670_int = 1; // 0x55 PushI
	if(var_670_int == 0) goto Label_128; // 0x56 JumpB
	var_671_string = ""; // 0x57 PushV
	var_671_string = "Suspicion"; // 0x58 MovS
	func_158(var_665_object, var_671_string); // 0x59 NEW_2
	var_679_int = 534481; // 0x5b PushI
	SetMessage(var_679_int); // 0x5c TObjFunc
	ClearReplies(); // 0x5e TObjFunc
	var_680_bool = 0; // 0x60 PushV
	var_680_bool = 0; // 0x61 MovB
	var_681_bool = 0; var_682_object = Obj(); // 0x62 PushV
	var_682_object = var_1_object; // 0x63 MovT
	func_4222(var_682_object); // 0x64 NEW_2
	if(var_681_bool == 0) goto Label_109; // 0x66 JumpB
	var_687_bool = 0; var_688_object = Obj(); // 0x67 PushV
	var_688_object = var_1_object; // 0x68 MovT
	func_4234(var_687_bool, var_688_object); // 0x69 NEW_2
	if(var_687_bool == 0) goto Label_109; // 0x6b JumpB
	var_680_bool = 1; // 0x6c MovB
	
Label_109:
	if(var_680_bool == 0) goto Label_115; // 0x6d JumpB
	var_696_int = 534482; // 0x6e PushI
	var_697_int = 38410; // 0x6f PushI
	var_698_int = 36127; // 0x70 PushI
	AddReply(var_696_int, var_697_int, var_698_int); // 0x71 TObjFunc
	
Label_115:
	var_699_int = 534489; // 0x73 PushI
	var_700_int = -1; // 0x74 PushI
	var_701_int = 36134; // 0x75 PushI
	AddReply(var_699_int, var_700_int, var_701_int); // 0x76 TObjFunc
	var_702_int = 536587; // 0x78 PushI
	var_703_int = -1; // 0x79 PushI
	var_704_int = 38409; // 0x7a PushI
	AddReply(var_702_int, var_703_int, var_704_int); // 0x7b TObjFunc
	goto Label_128; // 0x7d Jump
	
Label_128:
	var_705_bool = 0; // 0x80 PushV
	func_4072(var_705_bool); // 0x81 NEW_2
	if(var_705_bool == 0) goto Label_143; // 0x83 JumpB
	
Label_132:
	lshWaitForAnimEnd(); // 0x84 Func
	var_706_string = var_3_string; // 0x86 PushT
	if(var_706_string == 0) goto Label_137; // 0x87 JumpB
	goto Label_142; // 0x88 Jump
	
Label_142:
	goto Label_157; // 0x8e Jump
	
Label_157:
	return 0; // 0x9d Return
	
Label_137:
	var_707_string = ""; // 0x89 PushV
	var_707_string = var_2_object; // 0x8a MovT
	func_3927(var_707_string); // 0x8b NEW_2
	goto Label_132; // 0x8d Jump
	
Label_143:
	var_708_string = "all"; // 0x8f PushS
	var_709_string = "idle"; // 0x90 PushS
	PlayAnimation(var_708_string, var_709_string); // 0x91 Func
	
Label_147:
	WaitForAnimEnd(); // 0x93 Func
	var_710_string = var_3_string; // 0x95 PushT
	if(var_710_string == 0) goto Label_152; // 0x96 JumpB
	goto Label_157; // 0x97 Jump
	
Label_152:
	var_711_string = "all"; // 0x98 PushS
	var_712_string = "idle"; // 0x99 PushS
	PlayAnimation(var_711_string, var_712_string); // 0x9a Func
	goto Label_147; // 0x9c Jump
}


func_4177()
{
	var_556_string = "ood9Xan1"; // 0x1052 PushS
	var_557_int = 1; // 0x1053 PushI
	SetVariable(var_556_string, var_557_int); // 0x1054 Func
	return 0; // 0x1056 Return
}


func_3667()
{
	StopAnimation(); // 0xe53 Func
	StopGroup0(); // 0xe55 Func
	return 0; // 0xe57 Return
}


func_3665(var_79_bool)
{
	var_79_bool = 1; // 0xe51 MovB
	return 0; // 0xe52 Return
}


func_4435(var_65_object)
{
	var_66_object = Obj(); var_67_object = Obj(); // 0x1153 PushV
	GetDiaryRoot(var_67_object); // 0x1154 Func
	var_68_bool = var_67_object == 0; // 0x1156 Not
	if(var_68_bool == 0) goto Label_4445; // 0x1157 JumpB
	var_69_string = "Can't retrieve diary root"; // 0x1158 PushS
	Trace(var_69_string); // 0x1159 Func
	var_65_object = 0; // 0x115b MovB
	return 2; // 0x115c Return
	
Label_4445:
	var_65_object = var_67_object; // 0x115d Mov
	return 2; // 0x115e Return
}


func_4183()
{
	var_49_string = "d9q01"; // 0x1058 PushS
	var_50_int = 2; // 0x1059 PushI
	SetVariable(var_49_string, var_50_int); // 0x105a Func
	func_4422(); // 0x105d NEW_2
	return 0; // 0x105f Return
}


func_3672(var_56_float)
{
	var_58_cvector = CVector(0,0,0); var_59_cvector = CVector(0,0,0); var_60_cvector = CVector(0,0,0); var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0); // 0xe58 PushV
	GetPosition(var_61_cvector); // 0xe59 Func
	GetPosition(var_62_cvector); // 0xe5b ObjFunc
	var_63_cvector = var_62_cvector - var_61_cvector; // 0xe5d Sub2
	var_56_float = var_63_cvector | var_63_cvector; // 0xe5e Or2
	return 6; // 0xe5f Return
}


func_3927(var_263_string)
{
	var_264_bool = 0; var_265_float = 0; var_266_float = 0; var_267_bool = 0; var_268_float = 0; var_269_float = 0; // 0xf57 PushV
	lshHasAnimation(var_267_bool, var_263_string); // 0xf58 Func
	var_270_bool = var_267_bool; // 0xf5a Push
	if(var_270_bool == 0) goto Label_3938; // 0xf5b JumpB
	lshGetAnimTimes(var_263_string, var_268_float, var_269_float); // 0xf5c Func
	var_271_bool = 0; // 0xf5e PushB
	lshPlayAnimation(var_268_float, var_269_float, var_271_bool); // 0xf5f Func
	goto Label_3942; // 0xf61 Jump
	
Label_3942:
	return 6; // 0xf66 Return
	
Label_3938:
	var_272_string = "Can't find lsh animation : "; // 0xf62 PushS
	var_273_int = var_272_string + var_263_string; // 0xf63 Add
	Trace(var_273_int); // 0xf64 Func
}


func_3420(var_0_object)
{
	var_41_bool = 0; // 0xd5c PushV
	func_3699(var_41_bool); // 0xd5d NEW_2
	var_44_bool = var_41_bool == 0; // 0xd5f Not
	if(var_44_bool == 0) goto Label_3427; // 0xd60 JumpB
	Hold(); // 0xd61 Func
	
Label_3427:
	GetDirection(var_0_object); // 0xd63 Func
	
Label_3429:
	func_3596(); // 0xd66 NEW_2
	goto Label_3429; // 0xd68 Jump
}


func_3680(var_49_bool, var_50_cvector)
{
	var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_bool = 0; var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); var_56_bool = 0; // 0xe60 PushV
	GetPosition(var_54_cvector); // 0xe61 Func
	var_55_cvector = var_50_cvector - var_54_cvector; // 0xe63 Sub2
	var_57_float = GetByIndex(var_55_cvector, 0); // 0xe64 PushE
	var_58_float = GetByIndex(var_55_cvector, 2); // 0xe65 PushE
	Rotate(var_57_float, var_58_float, var_56_bool); // 0xe66 Func
	var_49_bool = var_56_bool; // 0xe68 Mov
	return 6; // 0xe69 Return
}


func_4192()
{
	var_82_int = 0; var_83_int = 0; // 0x1060 PushV
	var_84_string = "Rifle"; // 0x1061 PushS
	var_85_int = 5; // 0x1062 PushI
	RemoveItemByType(var_83_int, var_84_string, var_85_int); // 0x1063 ObjFunc
	SelectWeapon(); // 0x1065 ObjFunc
	return 2; // 0x1067 Return
}


func_4448(var_56_bool, var_57_object, var_58_int)
{
	var_59_object = Obj(); var_60_object = Obj(); var_61_int = 0; var_62_object = Obj(); var_63_object = Obj(); var_64_int = 0; // 0x1160 PushV
	var_65_object = Obj(); // 0x1161 PushV
	func_4435(var_65_object); // 0x1162 NEW_2
	var_62_object = var_65_object; // 0x1163 Mov
	Find(var_58_int, var_63_object); // 0x1165 ObjFunc
	var_70_bool = var_63_object == 0; // 0x1167 Not
	if(var_70_bool == 0) goto Label_4463; // 0x1168 JumpB
	var_71_string = "Can't find diary parent with id: "; // 0x1169 PushS
	var_72_int = var_71_string + var_58_int; // 0x116a Add
	Trace(var_72_int); // 0x116b Func
	var_56_bool = 0; // 0x116d MovB
	return 6; // 0x116e Return
	
Label_4463:
	AddChild(var_57_object); // 0x116f ObjFunc
	var_73_int = 7; // 0x1171 PushI
	SendWorldWndMessage(var_73_int); // 0x1172 Func
	GetCategory(var_64_int); // 0x1174 ObjFunc
	SetDiarySection(var_64_int); // 0x1176 Func
	var_56_bool = 0; // 0x1178 MovB
	return 6; // 0x1179 Return
}


func_1378(var_0_object, var_370_int, var_371_object)
{
	var_373_object = Obj(); var_374_bool = 0; var_375_int = 0; var_376_bool = 0; var_377_object = Obj(); var_378_bool = 0; var_379_int = 0; var_380_bool = 0; // 0x562 PushV
	var_0_object = var_371_object; // 0x563 TMov
	var_381_bool = 0; var_382_object = Obj(); var_383_float = 0; // 0x564 PushV
	var_382_object = var_371_object; // 0x565 Mov
	var_383_float = 70.0; // 0x566 MovF
	func_3704(var_382_object, var_383_float); // 0x567 NEW_2
	var_384_bool = var_381_bool == 0; // 0x569 Not
	if(var_384_bool == 0) goto Label_1389; // 0x56a JumpB
	var_370_int = -2; // 0x56b MovI
	return 8; // 0x56c Return
	
Label_1389:
	CreateDialog(var_377_object); // 0x56d Func
	var_385_int = 0; // 0x56f PushV
	func_4066(var_385_int); // 0x570 NEW_2
	SetNPCName(var_385_int); // 0x572 ObjFunc
	var_386_int = 0; // 0x574 PushV
	func_4064(var_386_int); // 0x575 NEW_2
	SetNPCDescription(var_386_int); // 0x577 ObjFunc
	var_387_string = ""; // 0x579 PushV
	func_4068(var_387_string); // 0x57a NEW_2
	SetPhoto(var_387_string); // 0x57c ObjFunc
	var_388_string = ""; // 0x57e PushV
	func_4070(var_388_string); // 0x57f NEW_2
	SetPhoto2(var_388_string); // 0x581 ObjFunc
	var_389_int = 0; // 0x583 PushV
	func_4526(var_389_int); // 0x584 NEW_2
	SetPlayerName(var_389_int); // 0x586 ObjFunc
	var_379_int = -1; // 0x588 MovI
	IsOverrideActive(var_378_bool); // 0x589 Func
	var_390_bool = var_378_bool; // 0x58b Push
	if(var_390_bool == 0) goto Label_1423; // 0x58c JumpB
	var_370_int = -2; // 0x58d MovI
	return 8; // 0x58e Return
	
Label_1423:
	DoDialog(var_377_object); // 0x58f Func
	var_391_bool = 0; var_392_object = Obj(); // 0x591 PushV
	var_393_object = Obj(); // 0x592 PushV
	func_3980(var_393_object); // 0x593 NEW_2
	var_392_object = var_393_object; // 0x594 Mov
	func_3789(var_391_bool, var_392_object); // 0x596 NEW_2
	var_394_object = Obj(); var_395_object = Obj(); // 0x598 PushV
	var_394_object = var_371_object; // 0x599 Mov
	var_395_object = var_377_object; // 0x59a Mov
	TaskCall(7); // 0x59b TaskCall
	func_1459(var_396_object, var_397_object, var_398_string, var_399_bool, var_394_object, var_395_object); // 0x59c NEW_2
	TaskReturn(); // 0x59d TaskReturn
	IsDialogEnd(var_380_bool); // 0x59f ObjFunc
	
Label_1441:
	var_430_bool = var_380_bool == 0; // 0x5a1 Not
	if(var_430_bool == 0) goto Label_1448; // 0x5a2 JumpB
	sync(); // 0x5a3 Func
	IsDialogEnd(var_380_bool); // 0x5a5 ObjFunc
	goto Label_1441; // 0x5a7 Jump
	
Label_1448:
	var_431_object = Obj(); // 0x5a8 PushV
	var_431_object = var_371_object; // 0x5a9 Mov
	func_3772(); // 0x5aa NEW_2
	StopDialog(var_377_object); // 0x5ac Func
	GetReturnValue(var_379_int); // 0x5ae ObjFunc
	var_370_int = var_379_int; // 0x5b0 Mov
	return 8; // 0x5b1 Return
}


func_2151(var_0_object, var_1_object, var_2_object, var_3_string, var_534_object, var_535_object)
{
	var_0_object = var_535_object; // 0x868 TMov
	var_1_object = var_534_object; // 0x869 TMov
	var_3_string = 0; // 0x86a TMovB
	var_540_int = 1; // 0x86b PushI
	if(var_540_int == 0) goto Label_2265; // 0x86c JumpB
	var_541_bool = 0; // 0x86d PushV
	var_541_bool = 0; // 0x86e MovB
	var_542_bool = 0; var_543_object = Obj(); // 0x86f PushV
	var_543_object = var_1_object; // 0x870 MovT
	func_4298(var_543_object); // 0x871 NEW_2
	if(var_542_bool == 0) goto Label_2170; // 0x873 JumpB
	var_548_bool = 0; var_549_object = Obj(); // 0x874 PushV
	var_549_object = var_1_object; // 0x875 MovT
	func_4310(var_549_object); // 0x876 NEW_2
	if(var_548_bool == 0) goto Label_2170; // 0x878 JumpB
	var_541_bool = 1; // 0x879 MovB
	
Label_2170:
	if(var_541_bool == 0) goto Label_2191; // 0x87a JumpB
	var_554_object = Obj(); var_555_object = Obj(); // 0x87b PushV
	var_554_object = var_1_object; // 0x87c MovT
	var_555_object = var_0_object; // 0x87d MovT
	func_4177(); // 0x87e NEW_2
	var_558_string = ""; // 0x880 PushV
	var_558_string = "Neutral"; // 0x881 MovS
	func_2295(var_535_object, var_558_string); // 0x882 NEW_2
	var_566_int = 514041; // 0x884 PushI
	SetMessage(var_566_int); // 0x885 TObjFunc
	ClearReplies(); // 0x887 TObjFunc
	var_567_int = 514042; // 0x889 PushI
	var_568_int = 15278; // 0x88a PushI
	var_569_int = 15277; // 0x88b PushI
	AddReply(var_567_int, var_568_int, var_569_int); // 0x88c TObjFunc
	goto Label_2265; // 0x88e Jump
	
Label_2265:
	var_570_bool = 0; // 0x8d9 PushV
	func_4072(var_570_bool); // 0x8da NEW_2
	if(var_570_bool == 0) goto Label_2280; // 0x8dc JumpB
	
Label_2269:
	lshWaitForAnimEnd(); // 0x8dd Func
	var_571_string = var_3_string; // 0x8df PushT
	if(var_571_string == 0) goto Label_2274; // 0x8e0 JumpB
	goto Label_2279; // 0x8e1 Jump
	
Label_2279:
	goto Label_2294; // 0x8e7 Jump
	
Label_2294:
	return 0; // 0x8f6 Return
	
Label_2274:
	var_572_string = ""; // 0x8e2 PushV
	var_572_string = var_2_object; // 0x8e3 MovT
	func_3927(var_572_string); // 0x8e4 NEW_2
	goto Label_2269; // 0x8e6 Jump
	
Label_2280:
	var_573_string = "all"; // 0x8e8 PushS
	var_574_string = "idle"; // 0x8e9 PushS
	PlayAnimation(var_573_string, var_574_string); // 0x8ea Func
	
Label_2284:
	WaitForAnimEnd(); // 0x8ec Func
	var_575_string = var_3_string; // 0x8ee PushT
	if(var_575_string == 0) goto Label_2289; // 0x8ef JumpB
	goto Label_2294; // 0x8f0 Jump
	
Label_2289:
	var_576_string = "all"; // 0x8f1 PushS
	var_577_string = "idle"; // 0x8f2 PushS
	PlayAnimation(var_576_string, var_577_string); // 0x8f3 Func
	goto Label_2284; // 0x8f5 Jump
	
Label_2191:
	var_578_string = ""; // 0x88f PushV
	var_578_string = "Suspicion"; // 0x890 MovS
	func_2295(var_535_object, var_578_string); // 0x891 NEW_2
	var_579_int = 514063; // 0x893 PushI
	SetMessage(var_579_int); // 0x894 TObjFunc
	ClearReplies(); // 0x896 TObjFunc
	var_580_bool = 0; // 0x898 PushV
	var_580_bool = 0; // 0x899 MovB
	var_581_bool = 0; var_582_object = Obj(); // 0x89a PushV
	var_582_object = var_1_object; // 0x89b MovT
	func_4334(var_581_bool, var_582_object); // 0x89c NEW_2
	if(var_581_bool == 0) goto Label_2213; // 0x89e JumpB
	var_590_bool = 0; var_591_object = Obj(); // 0x89f PushV
	var_591_object = var_1_object; // 0x8a0 MovT
	func_4322(var_591_object); // 0x8a1 NEW_2
	if(var_590_bool == 0) goto Label_2213; // 0x8a3 JumpB
	var_580_bool = 1; // 0x8a4 MovB
	
Label_2213:
	if(var_580_bool == 0) goto Label_2219; // 0x8a5 JumpB
	var_596_int = 514068; // 0x8a6 PushI
	var_597_int = 40760; // 0x8a7 PushI
	var_598_int = 15305; // 0x8a8 PushI
	AddReply(var_596_int, var_597_int, var_598_int); // 0x8a9 TObjFunc
	
Label_2219:
	var_599_bool = 0; // 0x8ab PushV
	var_599_bool = 0; // 0x8ac MovB
	var_600_bool = 0; var_601_object = Obj(); // 0x8ad PushV
	var_601_object = var_1_object; // 0x8ae MovT
	func_4344(var_600_bool, var_601_object); // 0x8af NEW_2
	if(var_600_bool == 0) goto Label_2232; // 0x8b1 JumpB
	var_612_bool = 0; var_613_object = Obj(); // 0x8b2 PushV
	var_613_object = var_1_object; // 0x8b3 MovT
	func_4322(var_613_object); // 0x8b4 NEW_2
	if(var_612_bool == 0) goto Label_2232; // 0x8b6 JumpB
	var_599_bool = 1; // 0x8b7 MovB
	
Label_2232:
	if(var_599_bool == 0) goto Label_2238; // 0x8b8 JumpB
	var_614_int = 514069; // 0x8b9 PushI
	var_615_int = 15307; // 0x8ba PushI
	var_616_int = 15306; // 0x8bb PushI
	AddReply(var_614_int, var_615_int, var_616_int); // 0x8bc TObjFunc
	
Label_2238:
	var_617_bool = 0; // 0x8be PushV
	var_617_bool = 0; // 0x8bf MovB
	var_618_bool = 0; var_619_object = Obj(); // 0x8c0 PushV
	var_619_object = var_1_object; // 0x8c1 MovT
	func_4245(var_619_object); // 0x8c2 NEW_2
	if(var_618_bool == 0) goto Label_2251; // 0x8c4 JumpB
	var_624_bool = 0; var_625_object = Obj(); // 0x8c5 PushV
	var_625_object = var_1_object; // 0x8c6 MovT
	func_4257(var_625_object); // 0x8c7 NEW_2
	if(var_624_bool == 0) goto Label_2251; // 0x8c9 JumpB
	var_617_bool = 1; // 0x8ca MovB
	
Label_2251:
	if(var_617_bool == 0) goto Label_2257; // 0x8cb JumpB
	var_630_int = 538835; // 0x8cc PushI
	var_631_int = 40765; // 0x8cd PushI
	var_632_int = 40764; // 0x8ce PushI
	AddReply(var_630_int, var_631_int, var_632_int); // 0x8cf TObjFunc
	
Label_2257:
	var_633_int = 514064; // 0x8d1 PushI
	var_634_int = -1; // 0x8d2 PushI
	var_635_int = 15300; // 0x8d3 PushI
	AddReply(var_633_int, var_634_int, var_635_int); // 0x8d4 TObjFunc
	goto Label_2265; // 0x8d6 Jump
}


func_4200()
{
	func_4409(); // 0x106a NEW_2
	var_104_bool = 0; var_105_string = ""; var_106_string = ""; // 0x106c PushV
	var_105_string = "quest_d9_01"; // 0x106d MovS
	var_106_string = "completed"; // 0x106e MovS
	func_4008(var_104_bool, var_105_string, var_106_string); // 0x106f NEW_2
	return 0; // 0x1071 Return
}


func_3943(var_241_string, var_242_bool)
{
	var_245_bool = 0; var_246_float = 0; var_247_float = 0; var_248_bool = 0; var_249_float = 0; var_250_float = 0; // 0xf67 PushV
	lshHasAnimation(var_248_bool, var_241_string); // 0xf68 Func
	var_251_bool = var_248_bool; // 0xf6a Push
	if(var_251_bool == 0) goto Label_3953; // 0xf6b JumpB
	lshGetAnimTimes(var_241_string, var_249_float, var_250_float); // 0xf6c Func
	lshPlayAnimation(var_249_float, var_250_float, var_242_bool); // 0xf6e Func
	goto Label_3957; // 0xf70 Jump
	
Label_3957:
	return 6; // 0xf75 Return
	
Label_3953:
	var_252_string = "Can't find lsh animation : "; // 0xf71 PushS
	var_253_int = var_252_string + var_241_string; // 0xf72 Add
	Trace(var_253_int); // 0xf73 Func
}


func_3690(var_45_bool)
{
	var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); // 0xe6a PushV
	GetPosition(var_48_cvector); // 0xe6b ObjFunc
	var_49_bool = 0; var_50_cvector = CVector(0,0,0); // 0xe6d PushV
	var_50_cvector = var_48_cvector; // 0xe6e Mov
	func_3680(var_49_bool, var_50_cvector); // 0xe6f NEW_2
	var_45_bool = var_49_bool; // 0xe70 Mov
	return 2; // 0xe72 Return
}


func_3434(var_66_bool)
{
	var_67_object = Obj(); var_68_object = Obj(); // 0xd6a PushV
	var_69_string = "player"; // 0xd6b PushS
	FindActor(var_68_object, var_69_string); // 0xd6c Func
	var_70_bool = var_68_object == 0; // 0xd6e Not
	if(var_70_bool == 0) goto Label_3442; // 0xd6f JumpB
	var_66_bool = 0; // 0xd70 MovB
	return 2; // 0xd71 Return
	
Label_3442:
	var_71_bool = 0; var_72_object = Obj(); // 0xd72 PushV
	var_72_object = var_68_object; // 0xd73 Mov
	func_3690(var_72_object); // 0xd74 NEW_2
	var_66_bool = var_71_bool; // 0xd75 Mov
	return 2; // 0xd77 Return
}


func_4210(var_410_bool)
{
	var_412_int = 0; var_413_string = ""; // 0x1073 PushV
	var_413_string = "ood7Han1"; // 0x1074 MovS
	func_3996(var_412_int, var_413_string); // 0x1075 NEW_2
	var_414_int = 0; // 0x1077 PushI
	var_415_bool = var_412_int == var_414_int; // 0x1078 Eq
	if(var_415_bool == 0) goto Label_4220; // 0x1079 JumpB
	var_410_bool = 1; // 0x107a MovB
	return 0; // 0x107b Return
	
Label_4220:
	var_410_bool = 0; // 0x107c MovB
	return 0; // 0x107d Return
}


func_3699(var_41_bool)
{
	var_42_bool = 0; var_43_bool = 0; // 0xe73 PushV
	IsLoaded(var_43_bool); // 0xe74 Func
	var_41_bool = var_43_bool; // 0xe76 Mov
	return 2; // 0xe77 Return
}


func_3958(var_169_bool, var_170_string)
{
	var_171_bool = 0; var_172_bool = 0; // 0xf76 PushV
	var_173_bool = 0; // 0xf77 PushV
	func_4072(var_173_bool); // 0xf78 NEW_2
	if(var_173_bool == 0) goto Label_3971; // 0xf7a JumpB
	lshHasSpeech(var_172_bool, var_170_string); // 0xf7b Func
	var_174_bool = var_172_bool; // 0xf7d Push
	if(var_174_bool == 0) goto Label_3971; // 0xf7e JumpB
	lshPlaySpeech(var_170_string); // 0xf7f Func
	var_169_bool = 1; // 0xf81 MovB
	return 2; // 0xf82 Return
	
Label_3971:
	var_169_bool = 0; // 0xf83 MovB
	return 2; // 0xf84 Return
}


func_3704(var_75_bool, var_77_float)
{
	var_78_float = 0; var_79_cvector = CVector(0,0,0); var_80_cvector = CVector(0,0,0); var_81_cvector = CVector(0,0,0); var_82_cvector = CVector(0,0,0); var_83_cvector = CVector(0,0,0); var_84_cvector = CVector(0,0,0); var_85_bool = 0; var_86_bool = 0; var_87_float = 0; var_88_cvector = CVector(0,0,0); var_89_cvector = CVector(0,0,0); var_90_cvector = CVector(0,0,0); var_91_cvector = CVector(0,0,0); var_92_cvector = CVector(0,0,0); var_93_cvector = CVector(0,0,0); var_94_bool = 0; var_95_bool = 0; // 0xe78 PushV
	GetPosition(var_88_cvector); // 0xe79 ObjFunc
	GetEyesHeight(var_87_float); // 0xe7b ObjFunc
	var_96_float = GetByIndex(var_88_cvector, 1); // 0xe7d PushE
	var_96_float = var_96_float + var_87_float; // 0xe7e Add2
	SetByIndex(var_88_cvector, 1) = var_96_float; // 0xe7f PopE
	GetPosition(var_89_cvector); // 0xe80 Func
	GetEyesHeight(var_87_float); // 0xe82 Func
	var_97_float = GetByIndex(var_89_cvector, 1); // 0xe84 PushE
	var_97_float = var_97_float + var_87_float; // 0xe85 Add2
	SetByIndex(var_89_cvector, 1) = var_97_float; // 0xe86 PopE
	var_90_cvector = var_88_cvector - var_89_cvector; // 0xe87 Sub2
	var_98_float = GetByIndex(var_90_cvector, 1); // 0xe88 PushE
	var_98_float = 0; // 0xe89 MovI
	SetByIndex(var_90_cvector, 1) = var_98_float; // 0xe8a PopE
	var_99_int = var_90_cvector | var_90_cvector; // 0xe8b Or
	var_100_float = sqrt(var_99_int); // 0xe8c Sqrt
	var_90_cvector = var_90_cvector / var_90_cvector; // 0xe8d Div2
	var_91_cvector = -var_90_cvector; // 0xe8e Neg2
	var_101_float = var_90_cvector * var_77_float; // 0xe8f Mult
	var_102_cvector = CVector(0,0,0); var_103_cvector = CVector(0,0,0); // 0xe90 PushV
	var_104_cvector = CVector(0.0, 1.0, 0.0); // 0xe91 PushVec
	var_103_cvector = var_91_cvector ^ var_104_cvector; // 0xe92 Xor2
	func_3986(var_102_cvector, var_103_cvector); // 0xe93 NEW_2
	var_110_int = 25; // 0xe95 PushI
	var_111_float = var_102_cvector * var_110_int; // 0xe96 Mult
	var_112_int = var_101_float + var_111_float; // 0xe97 Add
	var_113_cvector = CVector(0.0, 10.0, 0.0); // 0xe98 PushVec
	var_92_cvector = var_112_int - var_113_cvector; // 0xe99 Sub2
	var_93_cvector = var_89_cvector + var_92_cvector; // 0xe9a Add2
	IsOverrideActive(var_94_bool); // 0xe9b Func
	var_114_bool = var_94_bool; // 0xe9d Push
	if(var_114_bool == 0) goto Label_3745; // 0xe9e JumpB
	var_75_bool = 0; // 0xe9f MovB
	return 18; // 0xea0 Return
	
Label_3745:
	StopWorld(); // 0xea1 Func
	CameraTransit(var_93_cvector, var_91_cvector); // 0xea3 Func
	var_115_float = GetByIndex(var_92_cvector, 0); // 0xea5 PushE
	var_116_float = GetByIndex(var_92_cvector, 2); // 0xea6 PushE
	Rotate(var_115_float, var_116_float); // 0xea7 Func
	var_117_bool = 0; // 0xea9 PushV
	func_4072(var_117_bool); // 0xeaa NEW_2
	if(var_117_bool == 0) goto Label_3758; // 0xeac JumpB
	goto Label_3766; // 0xead Jump
	
Label_3766:
	CameraWaitForPlayFinish(); // 0xeb6 Func
	ResumeWorld(); // 0xeb8 Func
	var_75_bool = 1; // 0xeba MovB
	return 18; // 0xebb Return
	
Label_3758:
	var_118_string = "head"; // 0xeae PushS
	HasAnimationTrack(var_95_bool, var_118_string); // 0xeaf Func
	var_119_bool = var_95_bool; // 0xeb1 Push
	if(var_119_bool == 0) goto Label_3766; // 0xeb2 JumpB
	var_120_string = "head"; // 0xeb3 PushS
	LookAsyncCamera(var_120_string); // 0xeb4 Func
}


func_3449(var_0_object)
{
	var_118_float = GetByIndex(var_0_object, 0); // 0xd79 PushE
	var_119_float = GetByIndex(var_0_object, 2); // 0xd7a PushE
	RotateAsync(var_118_float, var_119_float); // 0xd7b Func
	return 0; // 0xd7d Return
}


func_4476(var_132_object)
{
	var_133_object = Obj(); var_134_object = Obj(); var_135_object = Obj(); var_136_object = Obj(); // 0x117c PushV
	GetMainOutdoorScene(var_135_object); // 0x117d Func
	var_137_bool = var_135_object == 0; // 0x117f NullEq
	if(var_137_bool == 0) goto Label_4487; // 0x1180 JumpB
	var_138_string = "Can't find main outdoor scene"; // 0x1181 PushS
	Trace(var_138_string); // 0x1182 Func
	var_136_object = 0; // 0x1184 SetNull
	var_132_object = var_136_object; // 0x1185 Mov
	return 4; // 0x1186 Return
	
Label_4487:
	GetMap(var_136_object); // 0x1187 ObjFunc
	var_132_object = var_136_object; // 0x1189 Mov
	return 4; // 0x118a Return
}


func_4222(var_681_bool)
{
	var_683_int = 0; var_684_string = ""; // 0x107f PushV
	var_684_string = "d11q05"; // 0x1080 MovS
	func_3996(var_683_int, var_684_string); // 0x1081 NEW_2
	var_685_int = 1; // 0x1083 PushI
	var_686_bool = var_683_int == var_685_int; // 0x1084 Eq
	if(var_686_bool == 0) goto Label_4232; // 0x1085 JumpB
	var_681_bool = 1; // 0x1086 MovB
	return 0; // 0x1087 Return
	
Label_4232:
	var_681_bool = 0; // 0x1088 MovB
	return 0; // 0x1089 Return
}


func_3454(var_49_bool)
{
	var_50_object = Obj(); var_51_bool = 0; var_52_object = Obj(); var_53_bool = 0; // 0xd7e PushV
	var_54_string = "player"; // 0xd7f PushS
	FindActor(var_52_object, var_54_string); // 0xd80 Func
	var_55_bool = var_52_object == 0; // 0xd82 Not
	if(var_55_bool == 0) goto Label_3462; // 0xd83 JumpB
	var_49_bool = 0; // 0xd84 MovB
	return 4; // 0xd85 Return
	
Label_3462:
	var_56_float = 0; var_57_object = Obj(); // 0xd86 PushV
	var_57_object = var_52_object; // 0xd87 Mov
	func_3672(var_57_object); // 0xd88 NEW_2
	var_64_float = 90000.0; // 0xd8a PushF
	var_65_bool = var_56_float > var_64_float; // 0xd8b GT
	if(var_65_bool == 0) goto Label_3471; // 0xd8c JumpB
	var_49_bool = 0; // 0xd8d MovB
	return 4; // 0xd8e Return
	
Label_3471:
	CanSee(var_53_bool, var_52_object); // 0xd8f Func
	var_49_bool = var_53_bool; // 0xd91 Mov
	return 4; // 0xd92 Return
}


func_2946(var_0_object, var_64_int, var_65_object)
{
	var_67_object = Obj(); var_68_bool = 0; var_69_int = 0; var_70_bool = 0; var_71_object = Obj(); var_72_bool = 0; var_73_int = 0; var_74_bool = 0; // 0xb82 PushV
	var_0_object = var_65_object; // 0xb83 TMov
	var_75_bool = 0; var_76_object = Obj(); var_77_float = 0; // 0xb84 PushV
	var_76_object = var_65_object; // 0xb85 Mov
	var_77_float = 70.0; // 0xb86 MovF
	func_3704(var_76_object, var_77_float); // 0xb87 NEW_2
	var_121_bool = var_75_bool == 0; // 0xb89 Not
	if(var_121_bool == 0) goto Label_2957; // 0xb8a JumpB
	var_64_int = -2; // 0xb8b MovI
	return 8; // 0xb8c Return
	
Label_2957:
	CreateDialog(var_71_object); // 0xb8d Func
	var_122_int = 0; // 0xb8f PushV
	func_4066(var_122_int); // 0xb90 NEW_2
	SetNPCName(var_122_int); // 0xb92 ObjFunc
	var_123_int = 0; // 0xb94 PushV
	func_4064(var_123_int); // 0xb95 NEW_2
	SetNPCDescription(var_123_int); // 0xb97 ObjFunc
	var_124_string = ""; // 0xb99 PushV
	func_4068(var_124_string); // 0xb9a NEW_2
	SetPhoto(var_124_string); // 0xb9c ObjFunc
	var_125_string = ""; // 0xb9e PushV
	func_4070(var_125_string); // 0xb9f NEW_2
	SetPhoto2(var_125_string); // 0xba1 ObjFunc
	var_126_int = 0; // 0xba3 PushV
	func_4526(var_126_int); // 0xba4 NEW_2
	SetPlayerName(var_126_int); // 0xba6 ObjFunc
	var_73_int = -1; // 0xba8 MovI
	IsOverrideActive(var_72_bool); // 0xba9 Func
	var_134_bool = var_72_bool; // 0xbab Push
	if(var_134_bool == 0) goto Label_2991; // 0xbac JumpB
	var_64_int = -2; // 0xbad MovI
	return 8; // 0xbae Return
	
Label_2991:
	DoDialog(var_71_object); // 0xbaf Func
	var_135_bool = 0; var_136_object = Obj(); // 0xbb1 PushV
	var_137_object = Obj(); // 0xbb2 PushV
	func_3980(var_137_object); // 0xbb3 NEW_2
	var_136_object = var_137_object; // 0xbb4 Mov
	func_3789(var_135_bool, var_136_object); // 0xbb6 NEW_2
	var_230_object = Obj(); var_231_object = Obj(); // 0xbb8 PushV
	var_230_object = var_65_object; // 0xbb9 Mov
	var_231_object = var_71_object; // 0xbba Mov
	TaskCall(13); // 0xbbb TaskCall
	func_3027(var_232_object, var_233_object, var_234_string, var_235_bool, var_230_object, var_231_object); // 0xbbc NEW_2
	TaskReturn(); // 0xbbd TaskReturn
	IsDialogEnd(var_74_bool); // 0xbbf ObjFunc
	
Label_3009:
	var_279_bool = var_74_bool == 0; // 0xbc1 Not
	if(var_279_bool == 0) goto Label_3016; // 0xbc2 JumpB
	sync(); // 0xbc3 Func
	IsDialogEnd(var_74_bool); // 0xbc5 ObjFunc
	goto Label_3009; // 0xbc7 Jump
	
Label_3016:
	var_280_object = Obj(); // 0xbc8 PushV
	var_280_object = var_65_object; // 0xbc9 Mov
	func_3772(); // 0xbca NEW_2
	StopDialog(var_71_object); // 0xbcc Func
	GetReturnValue(var_73_int); // 0xbce ObjFunc
	var_64_int = var_73_int; // 0xbd0 Mov
	return 8; // 0xbd1 Return
}


func_643(var_0_object, var_1_object, var_2_object, var_3_string, var_741_object, var_742_object)
{
	var_0_object = var_742_object; // 0x284 TMov
	var_1_object = var_741_object; // 0x285 TMov
	var_3_string = 0; // 0x286 TMovB
	var_747_int = 1; // 0x287 PushI
	if(var_747_int == 0) goto Label_676; // 0x288 JumpB
	var_748_string = ""; // 0x289 PushV
	var_748_string = "Neutral"; // 0x28a MovS
	func_706(var_742_object, var_748_string); // 0x28b NEW_2
	var_756_int = 535284; // 0x28d PushI
	SetMessage(var_756_int); // 0x28e TObjFunc
	ClearReplies(); // 0x290 TObjFunc
	var_757_int = 535285; // 0x292 PushI
	var_758_int = 36962; // 0x293 PushI
	var_759_int = 36961; // 0x294 PushI
	AddReply(var_757_int, var_758_int, var_759_int); // 0x295 TObjFunc
	var_760_int = 535292; // 0x297 PushI
	var_761_int = -1; // 0x298 PushI
	var_762_int = 36968; // 0x299 PushI
	AddReply(var_760_int, var_761_int, var_762_int); // 0x29a TObjFunc
	var_763_int = 535293; // 0x29c PushI
	var_764_int = -1; // 0x29d PushI
	var_765_int = 36969; // 0x29e PushI
	AddReply(var_763_int, var_764_int, var_765_int); // 0x29f TObjFunc
	goto Label_676; // 0x2a1 Jump
	
Label_676:
	var_766_bool = 0; // 0x2a4 PushV
	func_4072(var_766_bool); // 0x2a5 NEW_2
	if(var_766_bool == 0) goto Label_691; // 0x2a7 JumpB
	
Label_680:
	lshWaitForAnimEnd(); // 0x2a8 Func
	var_767_string = var_3_string; // 0x2aa PushT
	if(var_767_string == 0) goto Label_685; // 0x2ab JumpB
	goto Label_690; // 0x2ac Jump
	
Label_690:
	goto Label_705; // 0x2b2 Jump
	
Label_705:
	return 0; // 0x2c1 Return
	
Label_685:
	var_768_string = ""; // 0x2ad PushV
	var_768_string = var_2_object; // 0x2ae MovT
	func_3927(var_768_string); // 0x2af NEW_2
	goto Label_680; // 0x2b1 Jump
	
Label_691:
	var_769_string = "all"; // 0x2b3 PushS
	var_770_string = "idle"; // 0x2b4 PushS
	PlayAnimation(var_769_string, var_770_string); // 0x2b5 Func
	
Label_695:
	WaitForAnimEnd(); // 0x2b7 Func
	var_771_string = var_3_string; // 0x2b9 PushT
	if(var_771_string == 0) goto Label_700; // 0x2ba JumpB
	goto Label_705; // 0x2bb Jump
	
Label_700:
	var_772_string = "all"; // 0x2bc PushS
	var_773_string = "idle"; // 0x2bd PushS
	PlayAnimation(var_772_string, var_773_string); // 0x2be Func
	goto Label_695; // 0x2c0 Jump
}


func_3973()
{
	var_44_bool = 0; // 0xf85 PushV
	func_4072(var_44_bool); // 0xf86 NEW_2
	if(var_44_bool == 0) goto Label_3979; // 0xf88 JumpB
	lshStopSpeech(); // 0xf89 Func
	
Label_3979:
	return 0; // 0xf8b Return
}


func_902(var_0_object, var_1_object, var_2_object, var_3_string, var_318_object, var_319_object)
{
	var_0_object = var_319_object; // 0x387 TMov
	var_1_object = var_318_object; // 0x388 TMov
	var_3_string = 0; // 0x389 TMovB
	var_324_int = 1; // 0x38a PushI
	if(var_324_int == 0) goto Label_964; // 0x38b JumpB
	var_325_bool = 0; // 0x38c PushV
	var_325_bool = 0; // 0x38d MovB
	var_326_bool = 0; var_327_object = Obj(); // 0x38e PushV
	var_327_object = var_1_object; // 0x38f MovT
	func_4274(var_327_object); // 0x390 NEW_2
	if(var_326_bool == 0) goto Label_921; // 0x392 JumpB
	var_334_bool = 0; var_335_object = Obj(); // 0x393 PushV
	var_335_object = var_1_object; // 0x394 MovT
	func_4269(var_335_object); // 0x395 NEW_2
	if(var_334_bool == 0) goto Label_921; // 0x397 JumpB
	var_325_bool = 1; // 0x398 MovB
	
Label_921:
	if(var_325_bool == 0) goto Label_942; // 0x399 JumpB
	var_336_object = Obj(); var_337_object = Obj(); // 0x39a PushV
	var_336_object = var_1_object; // 0x39b MovT
	var_337_object = var_0_object; // 0x39c MovT
	func_4146(); // 0x39d NEW_2
	var_338_string = ""; // 0x39f PushV
	var_338_string = "Questioning"; // 0x3a0 MovS
	func_994(var_319_object, var_338_string); // 0x3a1 NEW_2
	var_346_int = 510420; // 0x3a3 PushI
	SetMessage(var_346_int); // 0x3a4 TObjFunc
	ClearReplies(); // 0x3a6 TObjFunc
	var_347_int = 510421; // 0x3a8 PushI
	var_348_int = 11490; // 0x3a9 PushI
	var_349_int = 11489; // 0x3aa PushI
	AddReply(var_347_int, var_348_int, var_349_int); // 0x3ab TObjFunc
	goto Label_964; // 0x3ad Jump
	
Label_964:
	var_350_bool = 0; // 0x3c4 PushV
	func_4072(var_350_bool); // 0x3c5 NEW_2
	if(var_350_bool == 0) goto Label_979; // 0x3c7 JumpB
	
Label_968:
	lshWaitForAnimEnd(); // 0x3c8 Func
	var_351_string = var_3_string; // 0x3ca PushT
	if(var_351_string == 0) goto Label_973; // 0x3cb JumpB
	goto Label_978; // 0x3cc Jump
	
Label_978:
	goto Label_993; // 0x3d2 Jump
	
Label_993:
	return 0; // 0x3e1 Return
	
Label_973:
	var_352_string = ""; // 0x3cd PushV
	var_352_string = var_2_object; // 0x3ce MovT
	func_3927(var_352_string); // 0x3cf NEW_2
	goto Label_968; // 0x3d1 Jump
	
Label_979:
	var_353_string = "all"; // 0x3d3 PushS
	var_354_string = "idle"; // 0x3d4 PushS
	PlayAnimation(var_353_string, var_354_string); // 0x3d5 Func
	
Label_983:
	WaitForAnimEnd(); // 0x3d7 Func
	var_355_string = var_3_string; // 0x3d9 PushT
	if(var_355_string == 0) goto Label_988; // 0x3da JumpB
	goto Label_993; // 0x3db Jump
	
Label_988:
	var_356_string = "all"; // 0x3dc PushS
	var_357_string = "idle"; // 0x3dd PushS
	PlayAnimation(var_356_string, var_357_string); // 0x3de Func
	goto Label_983; // 0x3e0 Jump
	
Label_942:
	var_358_string = ""; // 0x3ae PushV
	var_358_string = "Neutral"; // 0x3af MovS
	func_994(var_319_object, var_358_string); // 0x3b0 NEW_2
	var_359_int = 534418; // 0x3b2 PushI
	SetMessage(var_359_int); // 0x3b3 TObjFunc
	ClearReplies(); // 0x3b5 TObjFunc
	var_360_int = 534419; // 0x3b7 PushI
	var_361_int = -1; // 0x3b8 PushI
	var_362_int = 36046; // 0x3b9 PushI
	AddReply(var_360_int, var_361_int, var_362_int); // 0x3ba TObjFunc
	var_363_int = 536096; // 0x3bc PushI
	var_364_int = -1; // 0x3bd PushI
	var_365_int = 37848; // 0x3be PushI
	AddReply(var_363_int, var_364_int, var_365_int); // 0x3bf TObjFunc
	goto Label_964; // 0x3c1 Jump
}


func_4234(var_687_bool, var_688_object)
{
	var_689_bool = 0; var_690_object = Obj(); var_691_string = ""; // 0x108b PushV
	var_690_object = var_688_object; // 0x108c Mov
	var_691_string = "burah_serum"; // 0x108d MovS
	func_4001(var_690_object, var_691_string); // 0x108e NEW_2
	if(var_689_bool == 0) goto Label_4243; // 0x1090 JumpB
	var_687_bool = 1; // 0x1091 MovB
	return 0; // 0x1092 Return
	
Label_4243:
	var_687_bool = 0; // 0x1093 MovB
	return 0; // 0x1094 Return
}


func_3980(var_137_object)
{
	var_138_object = Obj(); var_139_object = Obj(); // 0xf8c PushV
	self(var_139_object); // 0xf8d Func
	var_137_object = var_139_object; // 0xf8f Mov
	return 2; // 0xf90 Return
}


func_3213(var_0_object, var_776_int, var_777_object)
{
	var_779_object = Obj(); var_780_bool = 0; var_781_int = 0; var_782_bool = 0; var_783_object = Obj(); var_784_bool = 0; var_785_int = 0; var_786_bool = 0; // 0xc8d PushV
	var_0_object = var_777_object; // 0xc8e TMov
	var_787_bool = 0; var_788_object = Obj(); var_789_float = 0; // 0xc8f PushV
	var_788_object = var_777_object; // 0xc90 Mov
	var_789_float = 70.0; // 0xc91 MovF
	func_3704(var_788_object, var_789_float); // 0xc92 NEW_2
	var_790_bool = var_787_bool == 0; // 0xc94 Not
	if(var_790_bool == 0) goto Label_3224; // 0xc95 JumpB
	var_776_int = -2; // 0xc96 MovI
	return 8; // 0xc97 Return
	
Label_3224:
	CreateDialog(var_783_object); // 0xc98 Func
	var_791_int = 0; // 0xc9a PushV
	func_4066(var_791_int); // 0xc9b NEW_2
	SetNPCName(var_791_int); // 0xc9d ObjFunc
	var_792_int = 0; // 0xc9f PushV
	func_4064(var_792_int); // 0xca0 NEW_2
	SetNPCDescription(var_792_int); // 0xca2 ObjFunc
	var_793_string = ""; // 0xca4 PushV
	func_4068(var_793_string); // 0xca5 NEW_2
	SetPhoto(var_793_string); // 0xca7 ObjFunc
	var_794_string = ""; // 0xca9 PushV
	func_4070(var_794_string); // 0xcaa NEW_2
	SetPhoto2(var_794_string); // 0xcac ObjFunc
	var_795_int = 0; // 0xcae PushV
	func_4526(var_795_int); // 0xcaf NEW_2
	SetPlayerName(var_795_int); // 0xcb1 ObjFunc
	var_785_int = -1; // 0xcb3 MovI
	IsOverrideActive(var_784_bool); // 0xcb4 Func
	var_796_bool = var_784_bool; // 0xcb6 Push
	if(var_796_bool == 0) goto Label_3258; // 0xcb7 JumpB
	var_776_int = -2; // 0xcb8 MovI
	return 8; // 0xcb9 Return
	
Label_3258:
	DoDialog(var_783_object); // 0xcba Func
	var_797_bool = 0; var_798_object = Obj(); // 0xcbc PushV
	var_799_object = Obj(); // 0xcbd PushV
	func_3980(var_799_object); // 0xcbe NEW_2
	var_798_object = var_799_object; // 0xcbf Mov
	func_3789(var_797_bool, var_798_object); // 0xcc1 NEW_2
	var_800_object = Obj(); var_801_object = Obj(); // 0xcc3 PushV
	var_800_object = var_777_object; // 0xcc4 Mov
	var_801_object = var_783_object; // 0xcc5 Mov
	TaskCall(15); // 0xcc6 TaskCall
	func_3294(var_802_object, var_803_object, var_804_string, var_805_bool, var_800_object, var_801_object); // 0xcc7 NEW_2
	TaskReturn(); // 0xcc8 TaskReturn
	IsDialogEnd(var_786_bool); // 0xcca ObjFunc
	
Label_3276:
	var_830_bool = var_786_bool == 0; // 0xccc Not
	if(var_830_bool == 0) goto Label_3283; // 0xccd JumpB
	sync(); // 0xcce Func
	IsDialogEnd(var_786_bool); // 0xcd0 ObjFunc
	goto Label_3276; // 0xcd2 Jump
	
Label_3283:
	var_831_object = Obj(); // 0xcd3 PushV
	var_831_object = var_777_object; // 0xcd4 Mov
	func_3772(); // 0xcd5 NEW_2
	StopDialog(var_783_object); // 0xcd7 Func
	GetReturnValue(var_785_int); // 0xcd9 ObjFunc
	var_776_int = var_785_int; // 0xcdb Mov
	return 8; // 0xcdc Return
}


func_4493(var_129_object, var_130_string, var_131_float)
{
	var_139_cvector = CVector(0,0,0); var_140_cvector = CVector(0,0,0); var_141_object = Obj(); var_142_bool = 0; var_143_cvector = CVector(0,0,0); var_144_cvector = CVector(0,0,0); var_145_object = Obj(); var_146_bool = 0; // 0x118d PushV
	GetMainOutdoorScene(var_145_object); // 0x118e Func
	var_147_bool = var_145_object == 0; // 0x1190 NullEq
	if(var_147_bool == 0) goto Label_4502; // 0x1191 JumpB
	var_148_string = "Can't find main outdoor scene"; // 0x1192 PushS
	Trace(var_148_string); // 0x1193 Func
	return 8; // 0x1195 Return
	
Label_4502:
	GetLocator(var_130_string, var_146_bool, var_143_cvector, var_144_cvector); // 0x1196 ObjFunc
	var_149_bool = var_146_bool == 0; // 0x1198 Not
	if(var_149_bool == 0) goto Label_4512; // 0x1199 JumpB
	var_150_string = "Warning: outdoor scene locator "; // 0x119a PushS
	var_151_int = var_150_string + var_130_string; // 0x119b Add
	var_152_string = " doesnt exist"; // 0x119c PushS
	var_153_int = var_151_int + var_152_string; // 0x119d Add
	Trace(var_153_int); // 0x119e Func
	
Label_4512:
	GetMap(var_129_object); // 0x11a0 ObjFunc
	var_154_bool = var_129_object == 0; // 0x11a2 NullEq
	if(var_154_bool == 0) goto Label_4520; // 0x11a3 JumpB
	var_155_string = "Can't find map"; // 0x11a4 PushS
	Trace(var_155_string); // 0x11a5 Func
	return 8; // 0x11a7 Return
	
Label_4520:
	var_156_float = GetByIndex(var_143_cvector, 0); // 0x11a8 PushE
	var_157_float = GetByIndex(var_143_cvector, 2); // 0x11a9 PushE
	SetMapParams(var_156_float, var_157_float, var_131_float); // 0x11aa ObjFunc
	return 8; // 0x11ac Return
}


func_3986(var_102_cvector, var_103_cvector)
{
	var_105_float = 0; var_106_float = 0; // 0xf92 PushV
	var_107_int = var_103_cvector | var_103_cvector; // 0xf93 Or
	var_106_float = sqrt(var_107_int); // 0xf94 Sqrt2
	var_108_float = 0.0; // 0xf95 PushF
	var_109_bool = var_106_float < var_108_float; // 0xf96 LT
	if(var_109_bool == 0) goto Label_3994; // 0xf97 JumpB
	var_102_cvector = CVector(0.0, 0.0, 0.0); // 0xf98 MovV
	return 2; // 0xf99 Return
	
Label_3994:
	var_102_cvector = var_103_cvector / var_103_cvector; // 0xf9a Div2
	return 2; // 0xf9b Return
}


func_3476()
{
	var_834_float = 0; var_835_float = 0; // 0xd94 PushV
	var_836_int = 8; // 0xd95 PushI
	var_837_int = 16; // 0xd96 PushI
	rand(var_835_float, var_836_int, var_837_int); // 0xd97 Func
	var_838_int = 10; // 0xd99 PushI
	SetTimer(var_838_int, var_835_float); // 0xd9a Func
	return 2; // 0xd9c Return
}


func_4245(var_618_bool)
{
	var_620_int = 0; var_621_string = ""; // 0x1096 PushV
	var_621_string = "d9q01"; // 0x1097 MovS
	func_3996(var_620_int, var_621_string); // 0x1098 NEW_2
	var_622_int = 1000; // 0x109a PushI
	var_623_bool = var_620_int == var_622_int; // 0x109b Eq
	if(var_623_bool == 0) goto Label_4255; // 0x109c JumpB
	var_618_bool = 1; // 0x109d MovB
	return 0; // 0x109e Return
	
Label_4255:
	var_618_bool = 0; // 0x109f MovB
	return 0; // 0x10a0 Return
}


func_1691(var_0_object, var_434_int, var_435_object)
{
	var_437_object = Obj(); var_438_bool = 0; var_439_int = 0; var_440_bool = 0; var_441_object = Obj(); var_442_bool = 0; var_443_int = 0; var_444_bool = 0; // 0x69b PushV
	var_0_object = var_435_object; // 0x69c TMov
	var_445_bool = 0; var_446_object = Obj(); var_447_float = 0; // 0x69d PushV
	var_446_object = var_435_object; // 0x69e Mov
	var_447_float = 70.0; // 0x69f MovF
	func_3704(var_446_object, var_447_float); // 0x6a0 NEW_2
	var_448_bool = var_445_bool == 0; // 0x6a2 Not
	if(var_448_bool == 0) goto Label_1702; // 0x6a3 JumpB
	var_434_int = -2; // 0x6a4 MovI
	return 8; // 0x6a5 Return
	
Label_1702:
	CreateDialog(var_441_object); // 0x6a6 Func
	var_449_int = 0; // 0x6a8 PushV
	func_4066(var_449_int); // 0x6a9 NEW_2
	SetNPCName(var_449_int); // 0x6ab ObjFunc
	var_450_int = 0; // 0x6ad PushV
	func_4064(var_450_int); // 0x6ae NEW_2
	SetNPCDescription(var_450_int); // 0x6b0 ObjFunc
	var_451_string = ""; // 0x6b2 PushV
	func_4068(var_451_string); // 0x6b3 NEW_2
	SetPhoto(var_451_string); // 0x6b5 ObjFunc
	var_452_string = ""; // 0x6b7 PushV
	func_4070(var_452_string); // 0x6b8 NEW_2
	SetPhoto2(var_452_string); // 0x6ba ObjFunc
	var_453_int = 0; // 0x6bc PushV
	func_4526(var_453_int); // 0x6bd NEW_2
	SetPlayerName(var_453_int); // 0x6bf ObjFunc
	var_443_int = -1; // 0x6c1 MovI
	IsOverrideActive(var_442_bool); // 0x6c2 Func
	var_454_bool = var_442_bool; // 0x6c4 Push
	if(var_454_bool == 0) goto Label_1736; // 0x6c5 JumpB
	var_434_int = -2; // 0x6c6 MovI
	return 8; // 0x6c7 Return
	
Label_1736:
	DoDialog(var_441_object); // 0x6c8 Func
	var_455_bool = 0; var_456_object = Obj(); // 0x6ca PushV
	var_457_object = Obj(); // 0x6cb PushV
	func_3980(var_457_object); // 0x6cc NEW_2
	var_456_object = var_457_object; // 0x6cd Mov
	func_3789(var_455_bool, var_456_object); // 0x6cf NEW_2
	var_458_object = Obj(); var_459_object = Obj(); // 0x6d1 PushV
	var_458_object = var_435_object; // 0x6d2 Mov
	var_459_object = var_441_object; // 0x6d3 Mov
	TaskCall(9); // 0x6d4 TaskCall
	func_1772(var_460_object, var_461_object, var_462_string, var_463_bool, var_458_object, var_459_object); // 0x6d5 NEW_2
	TaskReturn(); // 0x6d6 TaskReturn
	IsDialogEnd(var_444_bool); // 0x6d8 ObjFunc
	
Label_1754:
	var_506_bool = var_444_bool == 0; // 0x6da Not
	if(var_506_bool == 0) goto Label_1761; // 0x6db JumpB
	sync(); // 0x6dc Func
	IsDialogEnd(var_444_bool); // 0x6de ObjFunc
	goto Label_1754; // 0x6e0 Jump
	
Label_1761:
	var_507_object = Obj(); // 0x6e1 PushV
	var_507_object = var_435_object; // 0x6e2 Mov
	func_3772(); // 0x6e3 NEW_2
	StopDialog(var_441_object); // 0x6e5 Func
	GetReturnValue(var_443_int); // 0x6e7 ObjFunc
	var_434_int = var_443_int; // 0x6e9 Mov
	return 8; // 0x6ea Return
}


func_3996(var_328_int, var_329_string)
{
	var_330_int = 0; var_331_int = 0; // 0xf9c PushV
	GetVariable(var_329_string, var_331_int); // 0xf9d Func
	var_328_int = var_331_int; // 0xf9f Mov
	return 2; // 0xfa0 Return
}


func_3485()
{
	var_833_int = 10; // 0xd9d PushI
	KillTimer(var_833_int); // 0xd9e Func
	return 0; // 0xda0 Return
}


func_158(var_2_object, var_671_string)
{
	var_672_bool = 0; // 0x9f PushV
	func_4072(var_672_bool); // 0xa0 NEW_2
	var_673_bool = var_672_bool == 0; // 0xa2 Not
	if(var_673_bool == 0) goto Label_165; // 0xa3 JumpB
	return 0; // 0xa4 Return
	
Label_165:
	var_674_bool = var_671_string == var_2_object; // 0xa5 Eq
	if(var_674_bool == 0) goto Label_168; // 0xa6 JumpB
	return 0; // 0xa7 Return
	
Label_168:
	var_675_string = ""; var_676_bool = 0; // 0xa8 PushV
	var_675_string = var_671_string; // 0xa9 Mov
	var_677_string = ""; // 0xaa PushS
	var_678_bool = var_671_string == var_677_string; // 0xab Eq
	if(var_678_bool == 0) goto Label_175; // 0xac JumpB
	var_676_bool = 0; // 0xad MovB
	goto Label_176; // 0xae Jump
	
Label_176:
	func_3943(var_675_string, var_676_bool); // 0xb0 NEW_2
	var_2_object = var_671_string; // 0xb2 TMov
	return 0; // 0xb3 Return
	
Label_175:
	var_676_bool = 1; // 0xaf MovB
}


func_4257(var_624_bool)
{
	var_626_int = 0; var_627_string = ""; // 0x10a2 PushV
	var_627_string = "ood9Xan3"; // 0x10a3 MovS
	func_3996(var_626_int, var_627_string); // 0x10a4 NEW_2
	var_628_int = 0; // 0x10a6 PushI
	var_629_bool = var_626_int == var_628_int; // 0x10a7 Eq
	if(var_629_bool == 0) goto Label_4267; // 0x10a8 JumpB
	var_624_bool = 1; // 0x10a9 MovB
	return 0; // 0x10aa Return
	
Label_4267:
	var_624_bool = 0; // 0x10ab MovB
	return 0; // 0x10ac Return
}


func_4001(var_689_bool, var_691_string)
{
	var_692_int = 0; var_693_bool = 0; var_694_int = 0; var_695_bool = 0; // 0xfa1 PushV
	GetInvItemByName(var_694_int, var_691_string); // 0xfa2 Func
	HasItem(var_694_int, var_695_bool); // 0xfa4 ObjFunc
	var_689_bool = var_695_bool; // 0xfa6 Mov
	return 4; // 0xfa7 Return
}


func_4008(var_88_bool, var_89_string, var_90_string)
{
	var_91_object = Obj(); var_92_object = Obj(); // 0xfa8 PushV
	FindActor(var_92_object, var_89_string); // 0xfa9 Func
	var_93_bool = var_92_object == 0; // 0xfab NullEq
	if(var_93_bool == 0) goto Label_4015; // 0xfac JumpB
	var_88_bool = 0; // 0xfad MovB
	return 2; // 0xfae Return
	
Label_4015:
	Trigger(var_92_object, var_90_string); // 0xfaf Func
	var_88_bool = 1; // 0xfb1 MovB
	return 2; // 0xfb2 Return
}


func_4269(var_334_bool)
{
	var_334_bool = 1; // 0x10ae MovB
	return 0; // 0x10af Return
}


func_4526(var_126_int)
{
	var_127_int = 0; var_128_int = 0; // 0x11ae PushV
	var_129_string = "branch"; // 0x11af PushS
	GetVariable(var_129_string, var_128_int); // 0x11b0 Func
	var_130_int = 0; // 0x11b2 PushI
	var_131_bool = var_128_int == var_130_int; // 0x11b3 Eq
	if(var_131_bool == 0) goto Label_4536; // 0x11b4 JumpB
	var_126_int = 1; // 0x11b5 MovI
	return 2; // 0x11b6 Return
	
Label_4536:
	var_132_int = 1; // 0x11b8 PushI
	var_133_bool = var_128_int == var_132_int; // 0x11b9 Eq
	if(var_133_bool == 0) goto Label_4541; // 0x11ba JumpB
	var_126_int = 2; // 0x11bb MovI
	return 2; // 0x11bc Return
	
Label_4541:
	var_126_int = 3; // 0x11bd MovI
	return 2; // 0x11be Return
}


func_4274(var_326_bool)
{
	var_328_int = 0; var_329_string = ""; // 0x10b3 PushV
	var_329_string = "d3q02"; // 0x10b4 MovS
	func_3996(var_328_int, var_329_string); // 0x10b5 NEW_2
	var_332_int = 3; // 0x10b7 PushI
	var_333_bool = var_328_int == var_332_int; // 0x10b8 Eq
	if(var_333_bool == 0) goto Label_4284; // 0x10b9 JumpB
	var_326_bool = 1; // 0x10ba MovB
	return 0; // 0x10bb Return
	
Label_4284:
	var_326_bool = 0; // 0x10bc MovB
	return 0; // 0x10bd Return
}


func_1459(var_0_object, var_1_object, var_2_object, var_3_string, var_394_object, var_395_object)
{
	var_0_object = var_395_object; // 0x5b4 TMov
	var_1_object = var_394_object; // 0x5b5 TMov
	var_3_string = 0; // 0x5b6 TMovB
	var_400_int = 1; // 0x5b7 PushI
	if(var_400_int == 0) goto Label_1492; // 0x5b8 JumpB
	var_401_string = ""; // 0x5b9 PushV
	var_401_string = "Suspicion"; // 0x5ba MovS
	func_1522(var_395_object, var_401_string); // 0x5bb NEW_2
	var_409_int = 512232; // 0x5bd PushI
	SetMessage(var_409_int); // 0x5be TObjFunc
	ClearReplies(); // 0x5c0 TObjFunc
	var_410_bool = 0; var_411_object = Obj(); // 0x5c2 PushV
	var_411_object = var_1_object; // 0x5c3 MovT
	func_4210(var_411_object); // 0x5c4 NEW_2
	if(var_410_bool == 0) goto Label_1484; // 0x5c6 JumpB
	var_416_int = 512233; // 0x5c7 PushI
	var_417_int = 13389; // 0x5c8 PushI
	var_418_int = 13388; // 0x5c9 PushI
	AddReply(var_416_int, var_417_int, var_418_int); // 0x5ca TObjFunc
	
Label_1484:
	var_419_int = 533144; // 0x5cc PushI
	var_420_int = -1; // 0x5cd PushI
	var_421_int = 34662; // 0x5ce PushI
	AddReply(var_419_int, var_420_int, var_421_int); // 0x5cf TObjFunc
	goto Label_1492; // 0x5d1 Jump
	
Label_1492:
	var_422_bool = 0; // 0x5d4 PushV
	func_4072(var_422_bool); // 0x5d5 NEW_2
	if(var_422_bool == 0) goto Label_1507; // 0x5d7 JumpB
	
Label_1496:
	lshWaitForAnimEnd(); // 0x5d8 Func
	var_423_string = var_3_string; // 0x5da PushT
	if(var_423_string == 0) goto Label_1501; // 0x5db JumpB
	goto Label_1506; // 0x5dc Jump
	
Label_1506:
	goto Label_1521; // 0x5e2 Jump
	
Label_1521:
	return 0; // 0x5f1 Return
	
Label_1501:
	var_424_string = ""; // 0x5dd PushV
	var_424_string = var_2_object; // 0x5de MovT
	func_3927(var_424_string); // 0x5df NEW_2
	goto Label_1496; // 0x5e1 Jump
	
Label_1507:
	var_425_string = "all"; // 0x5e3 PushS
	var_426_string = "idle"; // 0x5e4 PushS
	PlayAnimation(var_425_string, var_426_string); // 0x5e5 Func
	
Label_1511:
	WaitForAnimEnd(); // 0x5e7 Func
	var_427_string = var_3_string; // 0x5e9 PushT
	if(var_427_string == 0) goto Label_1516; // 0x5ea JumpB
	goto Label_1521; // 0x5eb Jump
	
Label_1516:
	var_428_string = "all"; // 0x5ec PushS
	var_429_string = "idle"; // 0x5ed PushS
	PlayAnimation(var_428_string, var_429_string); // 0x5ee Func
	goto Label_1511; // 0x5f0 Jump
}


func_4020(var_64_float)
{
	var_65_float = 0; var_66_float = 0; // 0xfb4 PushV
	GetGameTime(var_66_float); // 0xfb5 Func
	var_64_float = var_66_float; // 0xfb7 Mov
	return 2; // 0xfb8 Return
}


func_4025(var_190_int)
{
	var_191_float = 0; var_192_float = 0; // 0xfb9 PushV
	GetGameTime(var_192_float); // 0xfba Func
	var_193_int = 1; // 0xfbc PushI
	var_194_int = 0; // 0xfbd PushV
	var_195_int = 24; // 0xfbe PushI
	var_194_int = var_192_float / var_192_float; // 0xfbf Div2
	var_190_int = var_193_int + var_194_int; // 0xfc0 Add2
	return 2; // 0xfc1 Return
}


func_3772()
{
	var_281_bool = 0; var_282_bool = 0; // 0xebc PushV
	CameraSwitchToNormal(); // 0xebd Func
	var_283_bool = 0; // 0xebf PushV
	func_4072(var_283_bool); // 0xec0 NEW_2
	if(var_283_bool == 0) goto Label_3780; // 0xec2 JumpB
	goto Label_3788; // 0xec3 Jump
	
Label_3788:
	return 2; // 0xecc Return
	
Label_3780:
	var_284_string = "head"; // 0xec4 PushS
	HasAnimationTrack(var_282_bool, var_284_string); // 0xec5 Func
	var_285_bool = var_282_bool; // 0xec7 Push
	if(var_285_bool == 0) goto Label_3788; // 0xec8 JumpB
	var_286_string = "head"; // 0xec9 PushS
	UnlookAsync(var_286_string); // 0xeca Func
}


func_4286(var_465_bool)
{
	var_467_int = 0; var_468_string = ""; // 0x10bf PushV
	var_468_string = "ood8Han1"; // 0x10c0 MovS
	func_3996(var_467_int, var_468_string); // 0x10c1 NEW_2
	var_469_int = 0; // 0x10c3 PushI
	var_470_bool = var_467_int == var_469_int; // 0x10c4 Eq
	if(var_470_bool == 0) goto Label_4296; // 0x10c5 JumpB
	var_465_bool = 1; // 0x10c6 MovB
	return 0; // 0x10c7 Return
	
Label_4296:
	var_465_bool = 0; // 0x10c8 MovB
	return 0; // 0x10c9 Return
}


func_4543(var_59_object)
{
	var_60_int = 0; var_61_int = 0; // 0x11bf PushV
	var_62_string = "mt_han"; // 0x11c0 PushS
	GetVariable(var_62_string, var_61_int); // 0x11c1 Func
	var_63_bool = var_61_int == 0; // 0x11c3 Not
	if(var_63_bool == 0) goto Label_4559; // 0x11c4 JumpB
	var_64_int = 0; var_65_object = Obj(); // 0x11c5 PushV
	var_65_object = var_59_object; // 0x11c6 Mov
	TaskCall(12); // 0x11c7 TaskCall
	func_2946(var_66_object, var_64_int, var_65_object); // 0x11c8 NEW_2
	TaskReturn(); // 0x11c9 TaskReturn
	var_287_string = "mt_han"; // 0x11cb PushS
	var_288_int = 1; // 0x11cc PushI
	SetVariable(var_287_string, var_288_int); // 0x11cd Func
	
Label_4559:
	var_289_bool = 0; var_290_int = 0; // 0x11cf PushV
	var_290_int = 1; // 0x11d0 MovI
	func_4034(var_289_bool, var_290_int); // 0x11d1 NEW_2
	if(var_289_bool == 0) goto Label_4565; // 0x11d3 JumpB
	return 2; // 0x11d4 Return
	
Label_4565:
	var_292_bool = 0; var_293_int = 0; // 0x11d5 PushV
	var_293_int = 3; // 0x11d6 MovI
	func_4034(var_292_bool, var_293_int); // 0x11d7 NEW_2
	if(var_292_bool == 0) goto Label_4577; // 0x11d9 JumpB
	var_294_int = 0; var_295_object = Obj(); // 0x11da PushV
	var_295_object = var_59_object; // 0x11db Mov
	TaskCall(4); // 0x11dc TaskCall
	func_821(var_296_object, var_294_int, var_295_object); // 0x11dd NEW_2
	TaskReturn(); // 0x11de TaskReturn
	return 2; // 0x11e0 Return
	
Label_4577:
	var_368_bool = 0; var_369_int = 0; // 0x11e1 PushV
	var_369_int = 7; // 0x11e2 MovI
	func_4034(var_368_bool, var_369_int); // 0x11e3 NEW_2
	if(var_368_bool == 0) goto Label_4589; // 0x11e5 JumpB
	var_370_int = 0; var_371_object = Obj(); // 0x11e6 PushV
	var_371_object = var_59_object; // 0x11e7 Mov
	TaskCall(6); // 0x11e8 TaskCall
	func_1378(var_372_object, var_370_int, var_371_object); // 0x11e9 NEW_2
	TaskReturn(); // 0x11ea TaskReturn
	return 2; // 0x11ec Return
	
Label_4589:
	var_432_bool = 0; var_433_int = 0; // 0x11ed PushV
	var_433_int = 8; // 0x11ee MovI
	func_4034(var_432_bool, var_433_int); // 0x11ef NEW_2
	if(var_432_bool == 0) goto Label_4601; // 0x11f1 JumpB
	var_434_int = 0; var_435_object = Obj(); // 0x11f2 PushV
	var_435_object = var_59_object; // 0x11f3 Mov
	TaskCall(8); // 0x11f4 TaskCall
	func_1691(var_436_object, var_434_int, var_435_object); // 0x11f5 NEW_2
	TaskReturn(); // 0x11f6 TaskReturn
	return 2; // 0x11f8 Return
	
Label_4601:
	var_508_bool = 0; var_509_int = 0; // 0x11f9 PushV
	var_509_int = 9; // 0x11fa MovI
	func_4034(var_508_bool, var_509_int); // 0x11fb NEW_2
	if(var_508_bool == 0) goto Label_4613; // 0x11fd JumpB
	var_510_int = 0; var_511_object = Obj(); // 0x11fe PushV
	var_511_object = var_59_object; // 0x11ff Mov
	TaskCall(10); // 0x1200 TaskCall
	func_2070(var_512_object, var_510_int, var_511_object); // 0x1201 NEW_2
	TaskReturn(); // 0x1202 TaskReturn
	return 2; // 0x1204 Return
	
Label_4613:
	var_638_bool = 0; var_639_int = 0; // 0x1205 PushV
	var_639_int = 11; // 0x1206 MovI
	func_4034(var_638_bool, var_639_int); // 0x1207 NEW_2
	if(var_638_bool == 0) goto Label_4625; // 0x1209 JumpB
	var_640_int = 0; var_641_object = Obj(); // 0x120a PushV
	var_641_object = var_59_object; // 0x120b Mov
	TaskCall(0); // 0x120c TaskCall
	func_0(var_642_object, var_640_int, var_641_object); // 0x120d NEW_2
	TaskReturn(); // 0x120e TaskReturn
	return 2; // 0x1210 Return
	
Label_4625:
	var_715_bool = 0; var_716_int = 0; // 0x1211 PushV
	var_716_int = 12; // 0x1212 MovI
	func_4034(var_715_bool, var_716_int); // 0x1213 NEW_2
	if(var_715_bool == 0) goto Label_4637; // 0x1215 JumpB
	var_717_int = 0; var_718_object = Obj(); // 0x1216 PushV
	var_718_object = var_59_object; // 0x1217 Mov
	TaskCall(2); // 0x1218 TaskCall
	func_562(var_719_object, var_717_int, var_718_object); // 0x1219 NEW_2
	TaskReturn(); // 0x121a TaskReturn
	return 2; // 0x121c Return
	
Label_4637:
	var_776_int = 0; var_777_object = Obj(); // 0x121d PushV
	var_777_object = var_59_object; // 0x121e Mov
	TaskCall(14); // 0x121f TaskCall
	func_3213(var_778_object, var_776_int, var_777_object); // 0x1220 NEW_2
	TaskReturn(); // 0x1221 TaskReturn
	return 2; // 0x1223 Return
}


func_706(var_2_object, var_748_string)
{
	var_749_bool = 0; // 0x2c3 PushV
	func_4072(var_749_bool); // 0x2c4 NEW_2
	var_750_bool = var_749_bool == 0; // 0x2c6 Not
	if(var_750_bool == 0) goto Label_713; // 0x2c7 JumpB
	return 0; // 0x2c8 Return
	
Label_713:
	var_751_bool = var_748_string == var_2_object; // 0x2c9 Eq
	if(var_751_bool == 0) goto Label_716; // 0x2ca JumpB
	return 0; // 0x2cb Return
	
Label_716:
	var_752_string = ""; var_753_bool = 0; // 0x2cc PushV
	var_752_string = var_748_string; // 0x2cd Mov
	var_754_string = ""; // 0x2ce PushS
	var_755_bool = var_748_string == var_754_string; // 0x2cf Eq
	if(var_755_bool == 0) goto Label_723; // 0x2d0 JumpB
	var_753_bool = 0; // 0x2d1 MovB
	goto Label_724; // 0x2d2 Jump
	
Label_724:
	func_3943(var_752_string, var_753_bool); // 0x2d4 NEW_2
	var_2_object = var_748_string; // 0x2d6 TMov
	return 0; // 0x2d7 Return
	
Label_723:
	var_753_bool = 1; // 0x2d3 MovB
}


func_4034(var_289_bool, var_290_int)
{
	var_291_int = 0; // 0xfc3 PushV
	func_4025(var_291_int); // 0xfc4 NEW_2
	var_289_bool = var_291_int == var_290_int; // 0xfc6 Eq2
	return 0; // 0xfc7 Return
}


func_4040(var_65_string, var_66_int)
{
	var_67_string = ""; var_68_string = ""; // 0xfc8 PushV
	var_68_string = "idle"; // 0xfc9 MovS
	var_69_int = var_66_int; // 0xfca Push
	if(var_69_int == 0) goto Label_4045; // 0xfcb JumpB
	var_68_string = var_68_string + var_66_int; // 0xfcc Add2
	
Label_4045:
	var_65_string = var_68_string; // 0xfcd Mov
	return 2; // 0xfce Return
}


func_4298(var_542_bool)
{
	var_544_int = 0; var_545_string = ""; // 0x10cb PushV
	var_545_string = "d9q01"; // 0x10cc MovS
	func_3996(var_544_int, var_545_string); // 0x10cd NEW_2
	var_546_int = 1; // 0x10cf PushI
	var_547_bool = var_544_int == var_546_int; // 0x10d0 Eq
	if(var_547_bool == 0) goto Label_4308; // 0x10d1 JumpB
	var_542_bool = 1; // 0x10d2 MovB
	return 0; // 0x10d3 Return
	
Label_4308:
	var_542_bool = 0; // 0x10d4 MovB
	return 0; // 0x10d5 Return
}


func_3789(var_135_bool, var_136_object)
{
	var_140_int = 0; var_141_int = 0; var_142_int = 0; var_143_int = 0; // 0xecd PushV
	var_144_string = "voice_common"; // 0xece PushS
	GetVariable(var_144_string, var_142_int); // 0xecf Func
	var_145_int = var_142_int; // 0xed1 Push
	if(var_145_int == 0) goto Label_3827; // 0xed2 JumpB
	var_146_bool = 0; var_147_object = Obj(); // 0xed3 PushV
	var_147_object = var_136_object; // 0xed4 Mov
	func_3847(var_147_object); // 0xed5 NEW_2
	var_176_bool = var_146_bool == 0; // 0xed7 Not
	if(var_176_bool == 0) goto Label_3809; // 0xed8 JumpB
	var_177_bool = 0; var_178_object = Obj(); // 0xed9 PushV
	var_178_object = var_136_object; // 0xeda Mov
	func_3884(var_178_object); // 0xedb NEW_2
	var_212_bool = var_177_bool == 0; // 0xedd Not
	if(var_212_bool == 0) goto Label_3809; // 0xede JumpB
	var_135_bool = 0; // 0xedf MovB
	return 4; // 0xee0 Return
	
Label_3809:
	var_213_int = 2; // 0xee1 PushI
	irand(var_143_int, var_213_int); // 0xee2 Func
	var_214_int = var_143_int; // 0xee4 Push
	if(var_214_int == 0) goto Label_3822; // 0xee5 JumpB
	var_215_string = "voice_common"; // 0xee6 PushS
	var_216_int = 1; // 0xee7 PushI
	var_217_int = var_142_int + var_216_int; // 0xee8 Add
	var_218_int = 3; // 0xee9 PushI
	var_219_int = var_217_int / var_218_int; // 0xeea Mod
	SetVariable(var_215_string, var_219_int); // 0xeeb Func
	goto Label_3826; // 0xeed Jump
	
Label_3826:
	goto Label_3845; // 0xef2 Jump
	
Label_3845:
	var_135_bool = 1; // 0xf05 MovB
	return 4; // 0xf06 Return
	
Label_3822:
	var_220_string = "voice_common"; // 0xeee PushS
	var_221_int = 0; // 0xeef PushI
	SetVariable(var_220_string, var_221_int); // 0xef0 Func
	
Label_3827:
	var_222_bool = 0; var_223_object = Obj(); // 0xef3 PushV
	var_223_object = var_136_object; // 0xef4 Mov
	func_3884(var_223_object); // 0xef5 NEW_2
	var_224_bool = var_222_bool == 0; // 0xef7 Not
	if(var_224_bool == 0) goto Label_3841; // 0xef8 JumpB
	var_225_bool = 0; var_226_object = Obj(); // 0xef9 PushV
	var_226_object = var_136_object; // 0xefa Mov
	func_3847(var_226_object); // 0xefb NEW_2
	var_227_bool = var_225_bool == 0; // 0xefd Not
	if(var_227_bool == 0) goto Label_3841; // 0xefe JumpB
	var_135_bool = 0; // 0xeff MovB
	return 4; // 0xf00 Return
	
Label_3841:
	var_228_string = "voice_common"; // 0xf01 PushS
	var_229_int = 1; // 0xf02 PushI
	SetVariable(var_228_string, var_229_int); // 0xf03 Func
}


func_4047(var_59_int)
{
	var_60_int = 0; var_61_bool = 0; var_62_int = 0; var_63_bool = 0; // 0xfcf PushV
	var_62_int = 0; // 0xfd0 MovI
	
Label_4049:
	var_64_string = "all"; // 0xfd1 PushS
	var_65_string = ""; var_66_int = 0; // 0xfd2 PushV
	var_66_int = var_62_int; // 0xfd3 Mov
	func_4040(var_65_string, var_66_int); // 0xfd4 NEW_2
	HasAnimation(var_63_bool, var_64_string, var_65_string); // 0xfd6 Func
	var_70_bool = var_63_bool == 0; // 0xfd8 Not
	if(var_70_bool == 0) goto Label_4059; // 0xfd9 JumpB
	goto Label_4062; // 0xfda Jump
	
Label_4062:
	var_59_int = var_62_int; // 0xfde Mov
	return 4; // 0xfdf Return
	
Label_4059:
	var_71_int = 1; // 0xfdb PushI
	var_62_int = var_62_int + var_71_int; // 0xfdc Add2
	goto Label_4049; // 0xfdd Jump
}


func_3027(var_0_object, var_1_object, var_2_object, var_3_string, var_230_object, var_231_object)
{
	var_0_object = var_231_object; // 0xbd4 TMov
	var_1_object = var_230_object; // 0xbd5 TMov
	var_3_string = 0; // 0xbd6 TMovB
	var_236_int = 1; // 0xbd7 PushI
	if(var_236_int == 0) goto Label_3055; // 0xbd8 JumpB
	var_237_string = ""; // 0xbd9 PushV
	var_237_string = "Neutral"; // 0xbda MovS
	func_3085(var_231_object, var_237_string); // 0xbdb NEW_2
	var_254_int = 518006; // 0xbdd PushI
	SetMessage(var_254_int); // 0xbde TObjFunc
	ClearReplies(); // 0xbe0 TObjFunc
	var_255_int = 518007; // 0xbe2 PushI
	var_256_int = 36191; // 0xbe3 PushI
	var_257_int = 19140; // 0xbe4 PushI
	AddReply(var_255_int, var_256_int, var_257_int); // 0xbe5 TObjFunc
	var_258_int = 534556; // 0xbe7 PushI
	var_259_int = 36189; // 0xbe8 PushI
	var_260_int = 36188; // 0xbe9 PushI
	AddReply(var_258_int, var_259_int, var_260_int); // 0xbea TObjFunc
	goto Label_3055; // 0xbec Jump
	
Label_3055:
	var_261_bool = 0; // 0xbef PushV
	func_4072(var_261_bool); // 0xbf0 NEW_2
	if(var_261_bool == 0) goto Label_3070; // 0xbf2 JumpB
	
Label_3059:
	lshWaitForAnimEnd(); // 0xbf3 Func
	var_262_string = var_3_string; // 0xbf5 PushT
	if(var_262_string == 0) goto Label_3064; // 0xbf6 JumpB
	goto Label_3069; // 0xbf7 Jump
	
Label_3069:
	goto Label_3084; // 0xbfd Jump
	
Label_3084:
	return 0; // 0xc0c Return
	
Label_3064:
	var_263_string = ""; // 0xbf8 PushV
	var_263_string = var_2_object; // 0xbf9 MovT
	func_3927(var_263_string); // 0xbfa NEW_2
	goto Label_3059; // 0xbfc Jump
	
Label_3070:
	var_274_string = "all"; // 0xbfe PushS
	var_275_string = "idle"; // 0xbff PushS
	PlayAnimation(var_274_string, var_275_string); // 0xc00 Func
	
Label_3074:
	WaitForAnimEnd(); // 0xc02 Func
	var_276_string = var_3_string; // 0xc04 PushT
	if(var_276_string == 0) goto Label_3079; // 0xc05 JumpB
	goto Label_3084; // 0xc06 Jump
	
Label_3079:
	var_277_string = "all"; // 0xc07 PushS
	var_278_string = "idle"; // 0xc08 PushS
	PlayAnimation(var_277_string, var_278_string); // 0xc09 Func
	goto Label_3074; // 0xc0b Jump
}


func_4310(var_548_bool)
{
	var_550_int = 0; var_551_string = ""; // 0x10d7 PushV
	var_551_string = "ood9Xan1"; // 0x10d8 MovS
	func_3996(var_550_int, var_551_string); // 0x10d9 NEW_2
	var_552_int = 0; // 0x10db PushI
	var_553_bool = var_550_int == var_552_int; // 0x10dc Eq
	if(var_553_bool == 0) goto Label_4320; // 0x10dd JumpB
	var_548_bool = 1; // 0x10de MovB
	return 0; // 0x10df Return
	
Label_4320:
	var_548_bool = 0; // 0x10e0 MovB
	return 0; // 0x10e1 Return
}


func_3294(var_0_object, var_1_object, var_2_object, var_3_string, var_800_object, var_801_object)
{
	var_0_object = var_801_object; // 0xcdf TMov
	var_1_object = var_800_object; // 0xce0 TMov
	var_3_string = 0; // 0xce1 TMovB
	var_806_int = 1; // 0xce2 PushI
	if(var_806_int == 0) goto Label_3322; // 0xce3 JumpB
	var_807_string = ""; // 0xce4 PushV
	var_807_string = "Neutral"; // 0xce5 MovS
	func_3352(var_801_object, var_807_string); // 0xce6 NEW_2
	var_815_int = 540542; // 0xce8 PushI
	SetMessage(var_815_int); // 0xce9 TObjFunc
	ClearReplies(); // 0xceb TObjFunc
	var_816_int = 540543; // 0xced PushI
	var_817_int = -1; // 0xcee PushI
	var_818_int = 42552; // 0xcef PushI
	AddReply(var_816_int, var_817_int, var_818_int); // 0xcf0 TObjFunc
	var_819_int = 540796; // 0xcf2 PushI
	var_820_int = -1; // 0xcf3 PushI
	var_821_int = 42845; // 0xcf4 PushI
	AddReply(var_819_int, var_820_int, var_821_int); // 0xcf5 TObjFunc
	goto Label_3322; // 0xcf7 Jump
	
Label_3322:
	var_822_bool = 0; // 0xcfa PushV
	func_4072(var_822_bool); // 0xcfb NEW_2
	if(var_822_bool == 0) goto Label_3337; // 0xcfd JumpB
	
Label_3326:
	lshWaitForAnimEnd(); // 0xcfe Func
	var_823_string = var_3_string; // 0xd00 PushT
	if(var_823_string == 0) goto Label_3331; // 0xd01 JumpB
	goto Label_3336; // 0xd02 Jump
	
Label_3336:
	goto Label_3351; // 0xd08 Jump
	
Label_3351:
	return 0; // 0xd17 Return
	
Label_3331:
	var_824_string = ""; // 0xd03 PushV
	var_824_string = var_2_object; // 0xd04 MovT
	func_3927(var_824_string); // 0xd05 NEW_2
	goto Label_3326; // 0xd07 Jump
	
Label_3337:
	var_825_string = "all"; // 0xd09 PushS
	var_826_string = "idle"; // 0xd0a PushS
	PlayAnimation(var_825_string, var_826_string); // 0xd0b Func
	
Label_3341:
	WaitForAnimEnd(); // 0xd0d Func
	var_827_string = var_3_string; // 0xd0f PushT
	if(var_827_string == 0) goto Label_3346; // 0xd10 JumpB
	goto Label_3351; // 0xd11 Jump
	
Label_3346:
	var_828_string = "all"; // 0xd12 PushS
	var_829_string = "idle"; // 0xd13 PushS
	PlayAnimation(var_828_string, var_829_string); // 0xd14 Func
	goto Label_3341; // 0xd16 Jump
}


func_4064(var_123_int)
{
	var_123_int = 515536; // 0xfe0 MovI
	return 0; // 0xfe1 Return
}


func_4322(var_590_bool)
{
	var_592_int = 0; var_593_string = ""; // 0x10e3 PushV
	var_593_string = "d9q01"; // 0x10e4 MovS
	func_3996(var_592_int, var_593_string); // 0x10e5 NEW_2
	var_594_int = 2; // 0x10e7 PushI
	var_595_bool = var_592_int == var_594_int; // 0x10e8 Eq
	if(var_595_bool == 0) goto Label_4332; // 0x10e9 JumpB
	var_590_bool = 1; // 0x10ea MovB
	return 0; // 0x10eb Return
	
Label_4332:
	var_590_bool = 0; // 0x10ec MovB
	return 0; // 0x10ed Return
}


func_4066(var_122_int)
{
	var_122_int = 502861; // 0xfe2 MovI
	return 0; // 0xfe3 Return
}


func_994(var_2_object, var_338_string)
{
	var_339_bool = 0; // 0x3e3 PushV
	func_4072(var_339_bool); // 0x3e4 NEW_2
	var_340_bool = var_339_bool == 0; // 0x3e6 Not
	if(var_340_bool == 0) goto Label_1001; // 0x3e7 JumpB
	return 0; // 0x3e8 Return
	
Label_1001:
	var_341_bool = var_338_string == var_2_object; // 0x3e9 Eq
	if(var_341_bool == 0) goto Label_1004; // 0x3ea JumpB
	return 0; // 0x3eb Return
	
Label_1004:
	var_342_string = ""; var_343_bool = 0; // 0x3ec PushV
	var_342_string = var_338_string; // 0x3ed Mov
	var_344_string = ""; // 0x3ee PushS
	var_345_bool = var_338_string == var_344_string; // 0x3ef Eq
	if(var_345_bool == 0) goto Label_1011; // 0x3f0 JumpB
	var_343_bool = 0; // 0x3f1 MovB
	goto Label_1012; // 0x3f2 Jump
	
Label_1012:
	func_3943(var_342_string, var_343_bool); // 0x3f4 NEW_2
	var_2_object = var_338_string; // 0x3f6 TMov
	return 0; // 0x3f7 Return
	
Label_1011:
	var_343_bool = 1; // 0x3f3 MovB
}


func_4068(var_124_string)
{
	var_124_string = "ui/NPC_Han.png"; // 0xfe4 MovS
	return 0; // 0xfe5 Return
}


func_4070(var_125_string)
{
	var_125_string = "ui/NPC_Han_b.png"; // 0xfe6 MovS
	return 0; // 0xfe7 Return
}


func_4072(var_117_bool)
{
	var_117_bool = 1; // 0xfe8 MovB
	return 0; // 0xfe9 Return
}


func_4074()
{
	var_49_string = "ood7Han1"; // 0xfeb PushS
	var_50_int = 1; // 0xfec PushI
	SetVariable(var_49_string, var_50_int); // 0xfed Func
	return 0; // 0xfef Return
}


func_1772(var_0_object, var_1_object, var_2_object, var_3_string, var_458_object, var_459_object)
{
	var_0_object = var_459_object; // 0x6ed TMov
	var_1_object = var_458_object; // 0x6ee TMov
	var_3_string = 0; // 0x6ef TMovB
	var_464_int = 1; // 0x6f0 PushI
	if(var_464_int == 0) goto Label_1830; // 0x6f1 JumpB
	var_465_bool = 0; var_466_object = Obj(); // 0x6f2 PushV
	var_466_object = var_1_object; // 0x6f3 MovT
	func_4286(var_466_object); // 0x6f4 NEW_2
	if(var_465_bool == 0) goto Label_1808; // 0x6f6 JumpB
	var_471_object = Obj(); var_472_object = Obj(); // 0x6f7 PushV
	var_471_object = var_1_object; // 0x6f8 MovT
	var_472_object = var_0_object; // 0x6f9 MovT
	func_4171(); // 0x6fa NEW_2
	var_475_string = ""; // 0x6fc PushV
	var_475_string = "Grin"; // 0x6fd MovS
	func_1860(var_459_object, var_475_string); // 0x6fe NEW_2
	var_483_int = 512330; // 0x700 PushI
	SetMessage(var_483_int); // 0x701 TObjFunc
	ClearReplies(); // 0x703 TObjFunc
	var_484_int = 512331; // 0x705 PushI
	var_485_int = 13491; // 0x706 PushI
	var_486_int = 13490; // 0x707 PushI
	AddReply(var_484_int, var_485_int, var_486_int); // 0x708 TObjFunc
	var_487_int = 512336; // 0x70a PushI
	var_488_int = -1; // 0x70b PushI
	var_489_int = 13495; // 0x70c PushI
	AddReply(var_487_int, var_488_int, var_489_int); // 0x70d TObjFunc
	goto Label_1830; // 0x70f Jump
	
Label_1830:
	var_490_bool = 0; // 0x726 PushV
	func_4072(var_490_bool); // 0x727 NEW_2
	if(var_490_bool == 0) goto Label_1845; // 0x729 JumpB
	
Label_1834:
	lshWaitForAnimEnd(); // 0x72a Func
	var_491_string = var_3_string; // 0x72c PushT
	if(var_491_string == 0) goto Label_1839; // 0x72d JumpB
	goto Label_1844; // 0x72e Jump
	
Label_1844:
	goto Label_1859; // 0x734 Jump
	
Label_1859:
	return 0; // 0x743 Return
	
Label_1839:
	var_492_string = ""; // 0x72f PushV
	var_492_string = var_2_object; // 0x730 MovT
	func_3927(var_492_string); // 0x731 NEW_2
	goto Label_1834; // 0x733 Jump
	
Label_1845:
	var_493_string = "all"; // 0x735 PushS
	var_494_string = "idle"; // 0x736 PushS
	PlayAnimation(var_493_string, var_494_string); // 0x737 Func
	
Label_1849:
	WaitForAnimEnd(); // 0x739 Func
	var_495_string = var_3_string; // 0x73b PushT
	if(var_495_string == 0) goto Label_1854; // 0x73c JumpB
	goto Label_1859; // 0x73d Jump
	
Label_1854:
	var_496_string = "all"; // 0x73e PushS
	var_497_string = "idle"; // 0x73f PushS
	PlayAnimation(var_496_string, var_497_string); // 0x740 Func
	goto Label_1849; // 0x742 Jump
	
Label_1808:
	var_498_string = ""; // 0x710 PushV
	var_498_string = "Neutral"; // 0x711 MovS
	func_1860(var_459_object, var_498_string); // 0x712 NEW_2
	var_499_int = 513781; // 0x714 PushI
	SetMessage(var_499_int); // 0x715 TObjFunc
	ClearReplies(); // 0x717 TObjFunc
	var_500_int = 513782; // 0x719 PushI
	var_501_int = -1; // 0x71a PushI
	var_502_int = 15018; // 0x71b PushI
	AddReply(var_500_int, var_501_int, var_502_int); // 0x71c TObjFunc
	var_503_int = 541839; // 0x71e PushI
	var_504_int = -1; // 0x71f PushI
	var_505_int = 44056; // 0x720 PushI
	AddReply(var_503_int, var_504_int, var_505_int); // 0x721 TObjFunc
	goto Label_1830; // 0x723 Jump
}


func_4334(var_581_bool, var_582_object)
{
	var_583_bool = 0; var_584_object = Obj(); // 0x10ef PushV
	var_584_object = var_582_object; // 0x10f0 Mov
	func_4354(var_584_object); // 0x10f1 NEW_2
	if(var_583_bool == 0) goto Label_4342; // 0x10f3 JumpB
	var_581_bool = 1; // 0x10f4 MovB
	return 0; // 0x10f5 Return
	
Label_4342:
	var_581_bool = 0; // 0x10f6 MovB
	return 0; // 0x10f7 Return
}


func_4080()
{
	var_49_string = "d11q05"; // 0xff1 PushS
	var_50_int = 2; // 0xff2 PushI
	SetVariable(var_49_string, var_50_int); // 0xff3 Func
	func_4383(); // 0xff6 NEW_2
	var_74_bool = 0; var_75_string = ""; var_76_string = ""; // 0xff8 PushV
	var_75_string = "quest_d11_05"; // 0xff9 MovS
	var_76_string = "place_enemy_before"; // 0xffa MovS
	func_4008(var_74_bool, var_75_string, var_76_string); // 0xffb NEW_2
	return 0; // 0xffd Return
}


func_1522(var_2_object, var_401_string)
{
	var_402_bool = 0; // 0x5f3 PushV
	func_4072(var_402_bool); // 0x5f4 NEW_2
	var_403_bool = var_402_bool == 0; // 0x5f6 Not
	if(var_403_bool == 0) goto Label_1529; // 0x5f7 JumpB
	return 0; // 0x5f8 Return
	
Label_1529:
	var_404_bool = var_401_string == var_2_object; // 0x5f9 Eq
	if(var_404_bool == 0) goto Label_1532; // 0x5fa JumpB
	return 0; // 0x5fb Return
	
Label_1532:
	var_405_string = ""; var_406_bool = 0; // 0x5fc PushV
	var_405_string = var_401_string; // 0x5fd Mov
	var_407_string = ""; // 0x5fe PushS
	var_408_bool = var_401_string == var_407_string; // 0x5ff Eq
	if(var_408_bool == 0) goto Label_1539; // 0x600 JumpB
	var_406_bool = 0; // 0x601 MovB
	goto Label_1540; // 0x602 Jump
	
Label_1540:
	func_3943(var_405_string, var_406_bool); // 0x604 NEW_2
	var_2_object = var_401_string; // 0x606 TMov
	return 0; // 0x607 Return
	
Label_1539:
	var_406_bool = 1; // 0x603 MovB
}


func_2295(var_2_object, var_558_string)
{
	var_559_bool = 0; // 0x8f8 PushV
	func_4072(var_559_bool); // 0x8f9 NEW_2
	var_560_bool = var_559_bool == 0; // 0x8fb Not
	if(var_560_bool == 0) goto Label_2302; // 0x8fc JumpB
	return 0; // 0x8fd Return
	
Label_2302:
	var_561_bool = var_558_string == var_2_object; // 0x8fe Eq
	if(var_561_bool == 0) goto Label_2305; // 0x8ff JumpB
	return 0; // 0x900 Return
	
Label_2305:
	var_562_string = ""; var_563_bool = 0; // 0x901 PushV
	var_562_string = var_558_string; // 0x902 Mov
	var_564_string = ""; // 0x903 PushS
	var_565_bool = var_558_string == var_564_string; // 0x904 Eq
	if(var_565_bool == 0) goto Label_2312; // 0x905 JumpB
	var_563_bool = 0; // 0x906 MovB
	goto Label_2313; // 0x907 Jump
	
Label_2313:
	func_3943(var_562_string, var_563_bool); // 0x909 NEW_2
	var_2_object = var_558_string; // 0x90b TMov
	return 0; // 0x90c Return
	
Label_2312:
	var_563_bool = 1; // 0x908 MovB
}


func_4344(var_600_bool, var_601_object)
{
	var_602_bool = 0; var_603_object = Obj(); // 0x10f9 PushV
	var_603_object = var_601_object; // 0x10fa Mov
	func_4365(var_603_object); // 0x10fb NEW_2
	if(var_602_bool == 0) goto Label_4352; // 0x10fd JumpB
	var_600_bool = 1; // 0x10fe MovB
	return 0; // 0x10ff Return
	
Label_4352:
	var_600_bool = 0; // 0x1100 MovB
	return 0; // 0x1101 Return
}


func_4094()
{
	var_88_bool = 0; var_89_string = ""; var_90_string = ""; // 0xfff PushV
	var_89_string = "quest_d9_01"; // 0x1000 MovS
	var_90_string = "teleport_to_mnogogrannik"; // 0x1001 MovS
	func_4008(var_88_bool, var_89_string, var_90_string); // 0x1002 NEW_2
	return 0; // 0x1004 Return
}


