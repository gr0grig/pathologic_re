task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool)
{
	var_8_int = 1; // 0x128 PushI
	if(var_8_int == 0) goto Label_1213; // 0x129 JumpB
	func_1541(); // 0x12b NEW_2
	var_10_int = 23336; // 0x12d PushI
	var_11_bool = var_7_bool == var_10_int; // 0x12e Eq
	if(var_11_bool == 0) goto Label_309; // 0x12f JumpB
	var_12_object = Obj(); var_13_object = Obj(); // 0x130 PushV
	var_12_object = var_1_object; // 0x131 MovT
	var_13_object = var_0_object; // 0x132 MovT
	func_1578(); // 0x133 NEW_2
	
Label_309:
	var_16_int = 23902; // 0x135 PushI
	var_17_bool = var_7_bool == var_16_int; // 0x136 Eq
	if(var_17_bool == 0) goto Label_317; // 0x137 JumpB
	var_18_object = Obj(); var_19_object = Obj(); // 0x138 PushV
	var_18_object = var_1_object; // 0x139 MovT
	var_19_object = var_0_object; // 0x13a MovT
	func_1584(); // 0x13b NEW_2
	
Label_317:
	var_22_int = 23903; // 0x13d PushI
	var_23_bool = var_7_bool == var_22_int; // 0x13e Eq
	if(var_23_bool == 0) goto Label_325; // 0x13f JumpB
	var_24_object = Obj(); var_25_object = Obj(); // 0x140 PushV
	var_24_object = var_1_object; // 0x141 MovT
	var_25_object = var_0_object; // 0x142 MovT
	func_1590(); // 0x143 NEW_2
	
Label_325:
	var_28_int = 23909; // 0x145 PushI
	var_29_bool = var_7_bool == var_28_int; // 0x146 Eq
	if(var_29_bool == 0) goto Label_333; // 0x147 JumpB
	var_30_object = Obj(); var_31_object = Obj(); // 0x148 PushV
	var_30_object = var_1_object; // 0x149 MovT
	var_31_object = var_0_object; // 0x14a MovT
	func_1596(); // 0x14b NEW_2
	
Label_333:
	var_34_int = 23916; // 0x14d PushI
	var_35_bool = var_7_bool == var_34_int; // 0x14e Eq
	if(var_35_bool == 0) goto Label_341; // 0x14f JumpB
	var_36_object = Obj(); var_37_object = Obj(); // 0x150 PushV
	var_36_object = var_1_object; // 0x151 MovT
	var_37_object = var_0_object; // 0x152 MovT
	func_1602(); // 0x153 NEW_2
	
Label_341:
	var_40_int = 23957; // 0x155 PushI
	var_41_bool = var_7_bool == var_40_int; // 0x156 Eq
	if(var_41_bool == 0) goto Label_349; // 0x157 JumpB
	var_42_object = Obj(); var_43_object = Obj(); // 0x158 PushV
	var_42_object = var_1_object; // 0x159 MovT
	var_43_object = var_0_object; // 0x15a MovT
	func_1608(); // 0x15b NEW_2
	
Label_349:
	var_46_int = 23967; // 0x15d PushI
	var_47_bool = var_7_bool == var_46_int; // 0x15e Eq
	if(var_47_bool == 0) goto Label_357; // 0x15f JumpB
	var_48_object = Obj(); var_49_object = Obj(); // 0x160 PushV
	var_48_object = var_1_object; // 0x161 MovT
	var_49_object = var_0_object; // 0x162 MovT
	func_1614(); // 0x163 NEW_2
	
Label_357:
	var_52_int = 23335; // 0x165 PushI
	var_53_bool = var_6_int == var_52_int; // 0x166 Eq
	if(var_53_bool == 0) goto Label_514; // 0x167 JumpB
	var_54_bool = 0; var_55_object = Obj(); // 0x168 PushV
	var_55_object = var_1_object; // 0x169 MovT
	func_1728(var_55_object); // 0x16a NEW_2
	var_62_bool = var_54_bool == 0; // 0x16c Not
	if(var_62_bool == 0) goto Label_489; // 0x16d JumpB
	var_63_string = ""; // 0x16e PushV
	var_63_string = "Confusion"; // 0x16f MovS
	func_273(var_7_bool, var_63_string); // 0x170 NEW_2
	var_80_int = 522168; // 0x172 PushI
	SetMessage(var_80_int); // 0x173 TObjFunc
	ClearReplies(); // 0x175 TObjFunc
	var_81_bool = 0; var_82_object = Obj(); // 0x177 PushV
	var_82_object = var_1_object; // 0x178 MovT
	func_1644(var_82_object); // 0x179 NEW_2
	if(var_81_bool == 0) goto Label_385; // 0x17b JumpB
	var_87_int = 522169; // 0x17c PushI
	var_88_int = 23901; // 0x17d PushI
	var_89_int = 23336; // 0x17e PushI
	AddReply(var_87_int, var_88_int, var_89_int); // 0x17f TObjFunc
	
Label_385:
	var_90_bool = 0; var_91_object = Obj(); // 0x181 PushV
	var_91_object = var_1_object; // 0x182 MovT
	func_1656(var_91_object); // 0x183 NEW_2
	if(var_90_bool == 0) goto Label_395; // 0x185 JumpB
	var_96_int = 522721; // 0x186 PushI
	var_97_int = 23904; // 0x187 PushI
	var_98_int = 23902; // 0x188 PushI
	AddReply(var_96_int, var_97_int, var_98_int); // 0x189 TObjFunc
	
Label_395:
	var_99_bool = 0; var_100_object = Obj(); // 0x18b PushV
	var_100_object = var_1_object; // 0x18c MovT
	func_1668(var_100_object); // 0x18d NEW_2
	if(var_99_bool == 0) goto Label_405; // 0x18f JumpB
	var_105_int = 522722; // 0x190 PushI
	var_106_int = 23905; // 0x191 PushI
	var_107_int = 23903; // 0x192 PushI
	AddReply(var_105_int, var_106_int, var_107_int); // 0x193 TObjFunc
	
Label_405:
	var_108_bool = 0; // 0x195 PushV
	var_108_bool = 0; // 0x196 MovB
	var_109_bool = 0; // 0x197 PushV
	var_109_bool = 0; // 0x198 MovB
	var_110_bool = 0; var_111_object = Obj(); // 0x199 PushV
	var_111_object = var_1_object; // 0x19a MovT
	func_1620(var_111_object); // 0x19b NEW_2
	var_116_bool = var_110_bool == 0; // 0x19d Not
	if(var_116_bool == 0) goto Label_422; // 0x19e JumpB
	var_117_bool = 0; var_118_object = Obj(); // 0x19f PushV
	var_118_object = var_1_object; // 0x1a0 MovT
	func_1632(var_118_object); // 0x1a1 NEW_2
	var_123_bool = var_117_bool == 0; // 0x1a3 Not
	if(var_123_bool == 0) goto Label_422; // 0x1a4 JumpB
	var_109_bool = 1; // 0x1a5 MovB
	
Label_422:
	if(var_109_bool == 0) goto Label_429; // 0x1a6 JumpB
	var_124_bool = 0; var_125_object = Obj(); // 0x1a7 PushV
	var_125_object = var_1_object; // 0x1a8 MovT
	func_1680(var_125_object); // 0x1a9 NEW_2
	if(var_124_bool == 0) goto Label_429; // 0x1ab JumpB
	var_108_bool = 1; // 0x1ac MovB
	
Label_429:
	if(var_108_bool == 0) goto Label_435; // 0x1ad JumpB
	var_130_int = 522728; // 0x1ae PushI
	var_131_int = 23910; // 0x1af PushI
	var_132_int = 23909; // 0x1b0 PushI
	AddReply(var_130_int, var_131_int, var_132_int); // 0x1b1 TObjFunc
	
Label_435:
	var_133_bool = 0; var_134_object = Obj(); // 0x1b3 PushV
	var_134_object = var_1_object; // 0x1b4 MovT
	func_1692(var_134_object); // 0x1b5 NEW_2
	if(var_133_bool == 0) goto Label_445; // 0x1b7 JumpB
	var_139_int = 522735; // 0x1b8 PushI
	var_140_int = 23921; // 0x1b9 PushI
	var_141_int = 23916; // 0x1ba PushI
	AddReply(var_139_int, var_140_int, var_141_int); // 0x1bb TObjFunc
	
Label_445:
	var_142_bool = 0; // 0x1bd PushV
	var_142_bool = 0; // 0x1be MovB
	var_143_bool = 0; var_144_object = Obj(); // 0x1bf PushV
	var_144_object = var_1_object; // 0x1c0 MovT
	func_1620(var_144_object); // 0x1c1 NEW_2
	if(var_143_bool == 0) goto Label_458; // 0x1c3 JumpB
	var_145_bool = 0; var_146_object = Obj(); // 0x1c4 PushV
	var_146_object = var_1_object; // 0x1c5 MovT
	func_1704(var_146_object); // 0x1c6 NEW_2
	if(var_145_bool == 0) goto Label_458; // 0x1c8 JumpB
	var_142_bool = 1; // 0x1c9 MovB
	
Label_458:
	if(var_142_bool == 0) goto Label_464; // 0x1ca JumpB
	var_151_int = 522774; // 0x1cb PushI
	var_152_int = 23968; // 0x1cc PushI
	var_153_int = 23957; // 0x1cd PushI
	AddReply(var_151_int, var_152_int, var_153_int); // 0x1ce TObjFunc
	
Label_464:
	var_154_bool = 0; // 0x1d0 PushV
	var_154_bool = 0; // 0x1d1 MovB
	var_155_bool = 0; var_156_object = Obj(); // 0x1d2 PushV
	var_156_object = var_1_object; // 0x1d3 MovT
	func_1632(var_156_object); // 0x1d4 NEW_2
	if(var_155_bool == 0) goto Label_477; // 0x1d6 JumpB
	var_157_bool = 0; var_158_object = Obj(); // 0x1d7 PushV
	var_158_object = var_1_object; // 0x1d8 MovT
	func_1716(var_158_object); // 0x1d9 NEW_2
	if(var_157_bool == 0) goto Label_477; // 0x1db JumpB
	var_154_bool = 1; // 0x1dc MovB
	
Label_477:
	if(var_154_bool == 0) goto Label_483; // 0x1dd JumpB
	var_163_int = 522784; // 0x1de PushI
	var_164_int = 23978; // 0x1df PushI
	var_165_int = 23967; // 0x1e0 PushI
	AddReply(var_163_int, var_164_int, var_165_int); // 0x1e1 TObjFunc
	
Label_483:
	var_166_int = 522727; // 0x1e3 PushI
	var_167_int = -1; // 0x1e4 PushI
	var_168_int = 23908; // 0x1e5 PushI
	AddReply(var_166_int, var_167_int, var_168_int); // 0x1e6 TObjFunc
	return 0; // 0x1e8 Return
	
Label_489:
	var_169_string = ""; // 0x1e9 PushV
	var_169_string = "Neutral"; // 0x1ea MovS
	func_273(var_7_bool, var_169_string); // 0x1eb NEW_2
	var_170_int = 523161; // 0x1ed PushI
	SetMessage(var_170_int); // 0x1ee TObjFunc
	ClearReplies(); // 0x1f0 TObjFunc
	var_171_int = 523162; // 0x1f2 PushI
	var_172_int = -1; // 0x1f3 PushI
	var_173_int = 24364; // 0x1f4 PushI
	AddReply(var_171_int, var_172_int, var_173_int); // 0x1f5 TObjFunc
	var_174_int = 523168; // 0x1f7 PushI
	var_175_int = -1; // 0x1f8 PushI
	var_176_int = 24370; // 0x1f9 PushI
	AddReply(var_174_int, var_175_int, var_176_int); // 0x1fa TObjFunc
	var_177_int = 523169; // 0x1fc PushI
	var_178_int = -1; // 0x1fd PushI
	var_179_int = 24371; // 0x1fe PushI
	AddReply(var_177_int, var_178_int, var_179_int); // 0x1ff TObjFunc
	return 0; // 0x201 Return
	
Label_514:
	var_180_int = 23978; // 0x202 PushI
	var_181_bool = var_6_int == var_180_int; // 0x203 Eq
	if(var_181_bool == 0) goto Label_537; // 0x204 JumpB
	var_182_string = ""; // 0x205 PushV
	var_182_string = "Threat"; // 0x206 MovS
	func_273(var_7_bool, var_182_string); // 0x207 NEW_2
	var_183_int = 522795; // 0x209 PushI
	SetMessage(var_183_int); // 0x20a TObjFunc
	ClearReplies(); // 0x20c TObjFunc
	var_184_int = 522798; // 0x20e PushI
	var_185_int = -1; // 0x20f PushI
	var_186_int = 23981; // 0x210 PushI
	AddReply(var_184_int, var_185_int, var_186_int); // 0x211 TObjFunc
	var_187_int = 522796; // 0x213 PushI
	var_188_int = 23980; // 0x214 PushI
	var_189_int = 23979; // 0x215 PushI
	AddReply(var_187_int, var_188_int, var_189_int); // 0x216 TObjFunc
	return 0; // 0x218 Return
	
Label_537:
	var_190_int = 23980; // 0x219 PushI
	var_191_bool = var_6_int == var_190_int; // 0x21a Eq
	if(var_191_bool == 0) goto Label_560; // 0x21b JumpB
	var_192_string = ""; // 0x21c PushV
	var_192_string = "Arrogance"; // 0x21d MovS
	func_273(var_7_bool, var_192_string); // 0x21e NEW_2
	var_193_int = 522797; // 0x220 PushI
	SetMessage(var_193_int); // 0x221 TObjFunc
	ClearReplies(); // 0x223 TObjFunc
	var_194_int = 522800; // 0x225 PushI
	var_195_int = -1; // 0x226 PushI
	var_196_int = 23983; // 0x227 PushI
	AddReply(var_194_int, var_195_int, var_196_int); // 0x228 TObjFunc
	var_197_int = 522799; // 0x22a PushI
	var_198_int = 23984; // 0x22b PushI
	var_199_int = 23982; // 0x22c PushI
	AddReply(var_197_int, var_198_int, var_199_int); // 0x22d TObjFunc
	return 0; // 0x22f Return
	
Label_560:
	var_200_int = 23984; // 0x230 PushI
	var_201_bool = var_6_int == var_200_int; // 0x231 Eq
	if(var_201_bool == 0) goto Label_583; // 0x232 JumpB
	var_202_string = ""; // 0x233 PushV
	var_202_string = "Arrogance"; // 0x234 MovS
	func_273(var_7_bool, var_202_string); // 0x235 NEW_2
	var_203_int = 522801; // 0x237 PushI
	SetMessage(var_203_int); // 0x238 TObjFunc
	ClearReplies(); // 0x23a TObjFunc
	var_204_int = 522802; // 0x23c PushI
	var_205_int = -1; // 0x23d PushI
	var_206_int = 23985; // 0x23e PushI
	AddReply(var_204_int, var_205_int, var_206_int); // 0x23f TObjFunc
	var_207_int = 522803; // 0x241 PushI
	var_208_int = 23987; // 0x242 PushI
	var_209_int = 23986; // 0x243 PushI
	AddReply(var_207_int, var_208_int, var_209_int); // 0x244 TObjFunc
	return 0; // 0x246 Return
	
Label_583:
	var_210_int = 23987; // 0x247 PushI
	var_211_bool = var_6_int == var_210_int; // 0x248 Eq
	if(var_211_bool == 0) goto Label_606; // 0x249 JumpB
	var_212_string = ""; // 0x24a PushV
	var_212_string = "Arrogance"; // 0x24b MovS
	func_273(var_7_bool, var_212_string); // 0x24c NEW_2
	var_213_int = 522804; // 0x24e PushI
	SetMessage(var_213_int); // 0x24f TObjFunc
	ClearReplies(); // 0x251 TObjFunc
	var_214_int = 522805; // 0x253 PushI
	var_215_int = -1; // 0x254 PushI
	var_216_int = 23988; // 0x255 PushI
	AddReply(var_214_int, var_215_int, var_216_int); // 0x256 TObjFunc
	var_217_int = 522806; // 0x258 PushI
	var_218_int = -1; // 0x259 PushI
	var_219_int = 23989; // 0x25a PushI
	AddReply(var_217_int, var_218_int, var_219_int); // 0x25b TObjFunc
	return 0; // 0x25d Return
	
Label_606:
	var_220_int = 23968; // 0x25e PushI
	var_221_bool = var_6_int == var_220_int; // 0x25f Eq
	if(var_221_bool == 0) goto Label_624; // 0x260 JumpB
	var_222_string = ""; // 0x261 PushV
	var_222_string = "Threat"; // 0x262 MovS
	func_273(var_7_bool, var_222_string); // 0x263 NEW_2
	var_223_int = 522785; // 0x265 PushI
	SetMessage(var_223_int); // 0x266 TObjFunc
	ClearReplies(); // 0x268 TObjFunc
	var_224_int = 522786; // 0x26a PushI
	var_225_int = 23970; // 0x26b PushI
	var_226_int = 23969; // 0x26c PushI
	AddReply(var_224_int, var_225_int, var_226_int); // 0x26d TObjFunc
	return 0; // 0x26f Return
	
Label_624:
	var_227_int = 23970; // 0x270 PushI
	var_228_bool = var_6_int == var_227_int; // 0x271 Eq
	if(var_228_bool == 0) goto Label_642; // 0x272 JumpB
	var_229_string = ""; // 0x273 PushV
	var_229_string = "Threat"; // 0x274 MovS
	func_273(var_7_bool, var_229_string); // 0x275 NEW_2
	var_230_int = 522787; // 0x277 PushI
	SetMessage(var_230_int); // 0x278 TObjFunc
	ClearReplies(); // 0x27a TObjFunc
	var_231_int = 522788; // 0x27c PushI
	var_232_int = 23972; // 0x27d PushI
	var_233_int = 23971; // 0x27e PushI
	AddReply(var_231_int, var_232_int, var_233_int); // 0x27f TObjFunc
	return 0; // 0x281 Return
	
Label_642:
	var_234_int = 23972; // 0x282 PushI
	var_235_bool = var_6_int == var_234_int; // 0x283 Eq
	if(var_235_bool == 0) goto Label_660; // 0x284 JumpB
	var_236_string = ""; // 0x285 PushV
	var_236_string = "Neutral"; // 0x286 MovS
	func_273(var_7_bool, var_236_string); // 0x287 NEW_2
	var_237_int = 522789; // 0x289 PushI
	SetMessage(var_237_int); // 0x28a TObjFunc
	ClearReplies(); // 0x28c TObjFunc
	var_238_int = 522790; // 0x28e PushI
	var_239_int = 23974; // 0x28f PushI
	var_240_int = 23973; // 0x290 PushI
	AddReply(var_238_int, var_239_int, var_240_int); // 0x291 TObjFunc
	return 0; // 0x293 Return
	
Label_660:
	var_241_int = 23974; // 0x294 PushI
	var_242_bool = var_6_int == var_241_int; // 0x295 Eq
	if(var_242_bool == 0) goto Label_683; // 0x296 JumpB
	var_243_string = ""; // 0x297 PushV
	var_243_string = "Neutral"; // 0x298 MovS
	func_273(var_7_bool, var_243_string); // 0x299 NEW_2
	var_244_int = 522791; // 0x29b PushI
	SetMessage(var_244_int); // 0x29c TObjFunc
	ClearReplies(); // 0x29e TObjFunc
	var_245_int = 522792; // 0x2a0 PushI
	var_246_int = 23976; // 0x2a1 PushI
	var_247_int = 23975; // 0x2a2 PushI
	AddReply(var_245_int, var_246_int, var_247_int); // 0x2a3 TObjFunc
	var_248_int = 540111; // 0x2a5 PushI
	var_249_int = -1; // 0x2a6 PushI
	var_250_int = 42078; // 0x2a7 PushI
	AddReply(var_248_int, var_249_int, var_250_int); // 0x2a8 TObjFunc
	return 0; // 0x2aa Return
	
Label_683:
	var_251_int = 23976; // 0x2ab PushI
	var_252_bool = var_6_int == var_251_int; // 0x2ac Eq
	if(var_252_bool == 0) goto Label_701; // 0x2ad JumpB
	var_253_string = ""; // 0x2ae PushV
	var_253_string = "Neutral"; // 0x2af MovS
	func_273(var_7_bool, var_253_string); // 0x2b0 NEW_2
	var_254_int = 522793; // 0x2b2 PushI
	SetMessage(var_254_int); // 0x2b3 TObjFunc
	ClearReplies(); // 0x2b5 TObjFunc
	var_255_int = 522794; // 0x2b7 PushI
	var_256_int = -1; // 0x2b8 PushI
	var_257_int = 23977; // 0x2b9 PushI
	AddReply(var_255_int, var_256_int, var_257_int); // 0x2ba TObjFunc
	return 0; // 0x2bc Return
	
Label_701:
	var_258_int = 23921; // 0x2bd PushI
	var_259_bool = var_6_int == var_258_int; // 0x2be Eq
	if(var_259_bool == 0) goto Label_719; // 0x2bf JumpB
	var_260_string = ""; // 0x2c0 PushV
	var_260_string = "Isee"; // 0x2c1 MovS
	func_273(var_7_bool, var_260_string); // 0x2c2 NEW_2
	var_261_int = 522740; // 0x2c4 PushI
	SetMessage(var_261_int); // 0x2c5 TObjFunc
	ClearReplies(); // 0x2c7 TObjFunc
	var_262_int = 522741; // 0x2c9 PushI
	var_263_int = 23923; // 0x2ca PushI
	var_264_int = 23922; // 0x2cb PushI
	AddReply(var_262_int, var_263_int, var_264_int); // 0x2cc TObjFunc
	return 0; // 0x2ce Return
	
Label_719:
	var_265_int = 23923; // 0x2cf PushI
	var_266_bool = var_6_int == var_265_int; // 0x2d0 Eq
	if(var_266_bool == 0) goto Label_742; // 0x2d1 JumpB
	var_267_string = ""; // 0x2d2 PushV
	var_267_string = "Confusion"; // 0x2d3 MovS
	func_273(var_7_bool, var_267_string); // 0x2d4 NEW_2
	var_268_int = 522742; // 0x2d6 PushI
	SetMessage(var_268_int); // 0x2d7 TObjFunc
	ClearReplies(); // 0x2d9 TObjFunc
	var_269_int = 522743; // 0x2db PushI
	var_270_int = -1; // 0x2dc PushI
	var_271_int = 23924; // 0x2dd PushI
	AddReply(var_269_int, var_270_int, var_271_int); // 0x2de TObjFunc
	var_272_int = 522744; // 0x2e0 PushI
	var_273_int = -1; // 0x2e1 PushI
	var_274_int = 23925; // 0x2e2 PushI
	AddReply(var_272_int, var_273_int, var_274_int); // 0x2e3 TObjFunc
	return 0; // 0x2e5 Return
	
Label_742:
	var_275_int = 23910; // 0x2e6 PushI
	var_276_bool = var_6_int == var_275_int; // 0x2e7 Eq
	if(var_276_bool == 0) goto Label_765; // 0x2e8 JumpB
	var_277_string = ""; // 0x2e9 PushV
	var_277_string = "Neutral"; // 0x2ea MovS
	func_273(var_7_bool, var_277_string); // 0x2eb NEW_2
	var_278_int = 522729; // 0x2ed PushI
	SetMessage(var_278_int); // 0x2ee TObjFunc
	ClearReplies(); // 0x2f0 TObjFunc
	var_279_int = 522730; // 0x2f2 PushI
	var_280_int = -1; // 0x2f3 PushI
	var_281_int = 23911; // 0x2f4 PushI
	AddReply(var_279_int, var_280_int, var_281_int); // 0x2f5 TObjFunc
	var_282_int = 540108; // 0x2f7 PushI
	var_283_int = 42076; // 0x2f8 PushI
	var_284_int = 42075; // 0x2f9 PushI
	AddReply(var_282_int, var_283_int, var_284_int); // 0x2fa TObjFunc
	return 0; // 0x2fc Return
	
Label_765:
	var_285_int = 42076; // 0x2fd PushI
	var_286_bool = var_6_int == var_285_int; // 0x2fe Eq
	if(var_286_bool == 0) goto Label_783; // 0x2ff JumpB
	var_287_string = ""; // 0x300 PushV
	var_287_string = "Neutral"; // 0x301 MovS
	func_273(var_7_bool, var_287_string); // 0x302 NEW_2
	var_288_int = 540109; // 0x304 PushI
	SetMessage(var_288_int); // 0x305 TObjFunc
	ClearReplies(); // 0x307 TObjFunc
	var_289_int = 540110; // 0x309 PushI
	var_290_int = -1; // 0x30a PushI
	var_291_int = 42077; // 0x30b PushI
	AddReply(var_289_int, var_290_int, var_291_int); // 0x30c TObjFunc
	return 0; // 0x30e Return
	
Label_783:
	var_292_int = 23905; // 0x30f PushI
	var_293_bool = var_6_int == var_292_int; // 0x310 Eq
	if(var_293_bool == 0) goto Label_806; // 0x311 JumpB
	var_294_string = ""; // 0x312 PushV
	var_294_string = "Confusion"; // 0x313 MovS
	func_273(var_7_bool, var_294_string); // 0x314 NEW_2
	var_295_int = 522724; // 0x316 PushI
	SetMessage(var_295_int); // 0x317 TObjFunc
	ClearReplies(); // 0x319 TObjFunc
	var_296_int = 522725; // 0x31b PushI
	var_297_int = 23920; // 0x31c PushI
	var_298_int = 23906; // 0x31d PushI
	AddReply(var_296_int, var_297_int, var_298_int); // 0x31e TObjFunc
	var_299_int = 522726; // 0x320 PushI
	var_300_int = -1; // 0x321 PushI
	var_301_int = 23907; // 0x322 PushI
	AddReply(var_299_int, var_300_int, var_301_int); // 0x323 TObjFunc
	return 0; // 0x325 Return
	
Label_806:
	var_302_int = 23920; // 0x326 PushI
	var_303_bool = var_6_int == var_302_int; // 0x327 Eq
	if(var_303_bool == 0) goto Label_829; // 0x328 JumpB
	var_304_string = ""; // 0x329 PushV
	var_304_string = "Confusion"; // 0x32a MovS
	func_273(var_7_bool, var_304_string); // 0x32b NEW_2
	var_305_int = 522739; // 0x32d PushI
	SetMessage(var_305_int); // 0x32e TObjFunc
	ClearReplies(); // 0x330 TObjFunc
	var_306_int = 522770; // 0x332 PushI
	var_307_int = 23954; // 0x333 PushI
	var_308_int = 23953; // 0x334 PushI
	AddReply(var_306_int, var_307_int, var_308_int); // 0x335 TObjFunc
	var_309_int = 522769; // 0x337 PushI
	var_310_int = -1; // 0x338 PushI
	var_311_int = 23952; // 0x339 PushI
	AddReply(var_309_int, var_310_int, var_311_int); // 0x33a TObjFunc
	return 0; // 0x33c Return
	
Label_829:
	var_312_int = 23954; // 0x33d PushI
	var_313_bool = var_6_int == var_312_int; // 0x33e Eq
	if(var_313_bool == 0) goto Label_852; // 0x33f JumpB
	var_314_string = ""; // 0x340 PushV
	var_314_string = "Threat"; // 0x341 MovS
	func_273(var_7_bool, var_314_string); // 0x342 NEW_2
	var_315_int = 522771; // 0x344 PushI
	SetMessage(var_315_int); // 0x345 TObjFunc
	ClearReplies(); // 0x347 TObjFunc
	var_316_int = 522772; // 0x349 PushI
	var_317_int = -1; // 0x34a PushI
	var_318_int = 23955; // 0x34b PushI
	AddReply(var_316_int, var_317_int, var_318_int); // 0x34c TObjFunc
	var_319_int = 522773; // 0x34e PushI
	var_320_int = -1; // 0x34f PushI
	var_321_int = 23956; // 0x350 PushI
	AddReply(var_319_int, var_320_int, var_321_int); // 0x351 TObjFunc
	return 0; // 0x353 Return
	
Label_852:
	var_322_int = 23904; // 0x354 PushI
	var_323_bool = var_6_int == var_322_int; // 0x355 Eq
	if(var_323_bool == 0) goto Label_870; // 0x356 JumpB
	var_324_string = ""; // 0x357 PushV
	var_324_string = "Confusion"; // 0x358 MovS
	func_273(var_7_bool, var_324_string); // 0x359 NEW_2
	var_325_int = 522723; // 0x35b PushI
	SetMessage(var_325_int); // 0x35c TObjFunc
	ClearReplies(); // 0x35e TObjFunc
	var_326_int = 522732; // 0x360 PushI
	var_327_int = 23914; // 0x361 PushI
	var_328_int = 23913; // 0x362 PushI
	AddReply(var_326_int, var_327_int, var_328_int); // 0x363 TObjFunc
	return 0; // 0x365 Return
	
Label_870:
	var_329_int = 23914; // 0x366 PushI
	var_330_bool = var_6_int == var_329_int; // 0x367 Eq
	if(var_330_bool == 0) goto Label_888; // 0x368 JumpB
	var_331_string = ""; // 0x369 PushV
	var_331_string = "Threat"; // 0x36a MovS
	func_273(var_7_bool, var_331_string); // 0x36b NEW_2
	var_332_int = 522733; // 0x36d PushI
	SetMessage(var_332_int); // 0x36e TObjFunc
	ClearReplies(); // 0x370 TObjFunc
	var_333_int = 522734; // 0x372 PushI
	var_334_int = -1; // 0x373 PushI
	var_335_int = 23915; // 0x374 PushI
	AddReply(var_333_int, var_334_int, var_335_int); // 0x375 TObjFunc
	return 0; // 0x377 Return
	
Label_888:
	var_336_int = 23901; // 0x378 PushI
	var_337_bool = var_6_int == var_336_int; // 0x379 Eq
	if(var_337_bool == 0) goto Label_921; // 0x37a JumpB
	var_338_string = ""; // 0x37b PushV
	var_338_string = "Confusion"; // 0x37c MovS
	func_273(var_7_bool, var_338_string); // 0x37d NEW_2
	var_339_int = 522720; // 0x37f PushI
	SetMessage(var_339_int); // 0x380 TObjFunc
	ClearReplies(); // 0x382 TObjFunc
	var_340_int = 522731; // 0x384 PushI
	var_341_int = 23917; // 0x385 PushI
	var_342_int = 23912; // 0x386 PushI
	AddReply(var_340_int, var_341_int, var_342_int); // 0x387 TObjFunc
	var_343_int = 522745; // 0x389 PushI
	var_344_int = 23927; // 0x38a PushI
	var_345_int = 23926; // 0x38b PushI
	AddReply(var_343_int, var_344_int, var_345_int); // 0x38c TObjFunc
	var_346_int = 522753; // 0x38e PushI
	var_347_int = 23936; // 0x38f PushI
	var_348_int = 23935; // 0x390 PushI
	AddReply(var_346_int, var_347_int, var_348_int); // 0x391 TObjFunc
	var_349_int = 522766; // 0x393 PushI
	var_350_int = 23950; // 0x394 PushI
	var_351_int = 23949; // 0x395 PushI
	AddReply(var_349_int, var_350_int, var_351_int); // 0x396 TObjFunc
	return 0; // 0x398 Return
	
Label_921:
	var_352_int = 23950; // 0x399 PushI
	var_353_bool = var_6_int == var_352_int; // 0x39a Eq
	if(var_353_bool == 0) goto Label_939; // 0x39b JumpB
	var_354_string = ""; // 0x39c PushV
	var_354_string = "Neutral"; // 0x39d MovS
	func_273(var_7_bool, var_354_string); // 0x39e NEW_2
	var_355_int = 522767; // 0x3a0 PushI
	SetMessage(var_355_int); // 0x3a1 TObjFunc
	ClearReplies(); // 0x3a3 TObjFunc
	var_356_int = 522768; // 0x3a5 PushI
	var_357_int = -1; // 0x3a6 PushI
	var_358_int = 23951; // 0x3a7 PushI
	AddReply(var_356_int, var_357_int, var_358_int); // 0x3a8 TObjFunc
	return 0; // 0x3aa Return
	
Label_939:
	var_359_int = 23936; // 0x3ab PushI
	var_360_bool = var_6_int == var_359_int; // 0x3ac Eq
	if(var_360_bool == 0) goto Label_957; // 0x3ad JumpB
	var_361_string = ""; // 0x3ae PushV
	var_361_string = "Neutral"; // 0x3af MovS
	func_273(var_7_bool, var_361_string); // 0x3b0 NEW_2
	var_362_int = 522754; // 0x3b2 PushI
	SetMessage(var_362_int); // 0x3b3 TObjFunc
	ClearReplies(); // 0x3b5 TObjFunc
	var_363_int = 522755; // 0x3b7 PushI
	var_364_int = 23938; // 0x3b8 PushI
	var_365_int = 23937; // 0x3b9 PushI
	AddReply(var_363_int, var_364_int, var_365_int); // 0x3ba TObjFunc
	return 0; // 0x3bc Return
	
Label_957:
	var_366_int = 23938; // 0x3bd PushI
	var_367_bool = var_6_int == var_366_int; // 0x3be Eq
	if(var_367_bool == 0) goto Label_980; // 0x3bf JumpB
	var_368_string = ""; // 0x3c0 PushV
	var_368_string = "Arrogance"; // 0x3c1 MovS
	func_273(var_7_bool, var_368_string); // 0x3c2 NEW_2
	var_369_int = 522756; // 0x3c4 PushI
	SetMessage(var_369_int); // 0x3c5 TObjFunc
	ClearReplies(); // 0x3c7 TObjFunc
	var_370_int = 522757; // 0x3c9 PushI
	var_371_int = -1; // 0x3ca PushI
	var_372_int = 23939; // 0x3cb PushI
	AddReply(var_370_int, var_371_int, var_372_int); // 0x3cc TObjFunc
	var_373_int = 522758; // 0x3ce PushI
	var_374_int = -1; // 0x3cf PushI
	var_375_int = 23940; // 0x3d0 PushI
	AddReply(var_373_int, var_374_int, var_375_int); // 0x3d1 TObjFunc
	return 0; // 0x3d3 Return
	
Label_980:
	var_376_int = 23927; // 0x3d4 PushI
	var_377_bool = var_6_int == var_376_int; // 0x3d5 Eq
	if(var_377_bool == 0) goto Label_1003; // 0x3d6 JumpB
	var_378_string = ""; // 0x3d7 PushV
	var_378_string = "Confusion"; // 0x3d8 MovS
	func_273(var_7_bool, var_378_string); // 0x3d9 NEW_2
	var_379_int = 522746; // 0x3db PushI
	SetMessage(var_379_int); // 0x3dc TObjFunc
	ClearReplies(); // 0x3de TObjFunc
	var_380_int = 522747; // 0x3e0 PushI
	var_381_int = 23929; // 0x3e1 PushI
	var_382_int = 23928; // 0x3e2 PushI
	AddReply(var_380_int, var_381_int, var_382_int); // 0x3e3 TObjFunc
	var_383_int = 522775; // 0x3e5 PushI
	var_384_int = 23959; // 0x3e6 PushI
	var_385_int = 23958; // 0x3e7 PushI
	AddReply(var_383_int, var_384_int, var_385_int); // 0x3e8 TObjFunc
	return 0; // 0x3ea Return
	
Label_1003:
	var_386_int = 23959; // 0x3eb PushI
	var_387_bool = var_6_int == var_386_int; // 0x3ec Eq
	if(var_387_bool == 0) goto Label_1021; // 0x3ed JumpB
	var_388_string = ""; // 0x3ee PushV
	var_388_string = "Confusion"; // 0x3ef MovS
	func_273(var_7_bool, var_388_string); // 0x3f0 NEW_2
	var_389_int = 522776; // 0x3f2 PushI
	SetMessage(var_389_int); // 0x3f3 TObjFunc
	ClearReplies(); // 0x3f5 TObjFunc
	var_390_int = 522777; // 0x3f7 PushI
	var_391_int = 23961; // 0x3f8 PushI
	var_392_int = 23960; // 0x3f9 PushI
	AddReply(var_390_int, var_391_int, var_392_int); // 0x3fa TObjFunc
	return 0; // 0x3fc Return
	
Label_1021:
	var_393_int = 23961; // 0x3fd PushI
	var_394_bool = var_6_int == var_393_int; // 0x3fe Eq
	if(var_394_bool == 0) goto Label_1055; // 0x3ff JumpB
	var_395_string = ""; // 0x400 PushV
	var_395_string = "Threat"; // 0x401 MovS
	func_273(var_7_bool, var_395_string); // 0x402 NEW_2
	var_396_int = 522778; // 0x404 PushI
	SetMessage(var_396_int); // 0x405 TObjFunc
	ClearReplies(); // 0x407 TObjFunc
	var_397_bool = 0; var_398_object = Obj(); // 0x409 PushV
	var_398_object = var_1_object; // 0x40a MovT
	func_1620(var_398_object); // 0x40b NEW_2
	var_399_bool = var_397_bool == 0; // 0x40d Not
	if(var_399_bool == 0) goto Label_1044; // 0x40e JumpB
	var_400_int = 522779; // 0x40f PushI
	var_401_int = -1; // 0x410 PushI
	var_402_int = 23962; // 0x411 PushI
	AddReply(var_400_int, var_401_int, var_402_int); // 0x412 TObjFunc
	
Label_1044:
	var_403_bool = 0; var_404_object = Obj(); // 0x414 PushV
	var_404_object = var_1_object; // 0x415 MovT
	func_1620(var_404_object); // 0x416 NEW_2
	if(var_403_bool == 0) goto Label_1054; // 0x418 JumpB
	var_405_int = 522780; // 0x419 PushI
	var_406_int = 23964; // 0x41a PushI
	var_407_int = 23963; // 0x41b PushI
	AddReply(var_405_int, var_406_int, var_407_int); // 0x41c TObjFunc
	
Label_1054:
	return 0; // 0x41e Return
	
Label_1055:
	var_408_int = 23964; // 0x41f PushI
	var_409_bool = var_6_int == var_408_int; // 0x420 Eq
	if(var_409_bool == 0) goto Label_1078; // 0x421 JumpB
	var_410_string = ""; // 0x422 PushV
	var_410_string = "Arrogance"; // 0x423 MovS
	func_273(var_7_bool, var_410_string); // 0x424 NEW_2
	var_411_int = 522781; // 0x426 PushI
	SetMessage(var_411_int); // 0x427 TObjFunc
	ClearReplies(); // 0x429 TObjFunc
	var_412_int = 522783; // 0x42b PushI
	var_413_int = -1; // 0x42c PushI
	var_414_int = 23966; // 0x42d PushI
	AddReply(var_412_int, var_413_int, var_414_int); // 0x42e TObjFunc
	var_415_int = 522782; // 0x430 PushI
	var_416_int = -1; // 0x431 PushI
	var_417_int = 23965; // 0x432 PushI
	AddReply(var_415_int, var_416_int, var_417_int); // 0x433 TObjFunc
	return 0; // 0x435 Return
	
Label_1078:
	var_418_int = 23929; // 0x436 PushI
	var_419_bool = var_6_int == var_418_int; // 0x437 Eq
	if(var_419_bool == 0) goto Label_1101; // 0x438 JumpB
	var_420_string = ""; // 0x439 PushV
	var_420_string = "Confusion"; // 0x43a MovS
	func_273(var_7_bool, var_420_string); // 0x43b NEW_2
	var_421_int = 522748; // 0x43d PushI
	SetMessage(var_421_int); // 0x43e TObjFunc
	ClearReplies(); // 0x440 TObjFunc
	var_422_int = 522749; // 0x442 PushI
	var_423_int = 23932; // 0x443 PushI
	var_424_int = 23930; // 0x444 PushI
	AddReply(var_422_int, var_423_int, var_424_int); // 0x445 TObjFunc
	var_425_int = 522750; // 0x447 PushI
	var_426_int = -1; // 0x448 PushI
	var_427_int = 23931; // 0x449 PushI
	AddReply(var_425_int, var_426_int, var_427_int); // 0x44a TObjFunc
	return 0; // 0x44c Return
	
Label_1101:
	var_428_int = 23932; // 0x44d PushI
	var_429_bool = var_6_int == var_428_int; // 0x44e Eq
	if(var_429_bool == 0) goto Label_1119; // 0x44f JumpB
	var_430_string = ""; // 0x450 PushV
	var_430_string = "Threat"; // 0x451 MovS
	func_273(var_7_bool, var_430_string); // 0x452 NEW_2
	var_431_int = 522751; // 0x454 PushI
	SetMessage(var_431_int); // 0x455 TObjFunc
	ClearReplies(); // 0x457 TObjFunc
	var_432_int = 522752; // 0x459 PushI
	var_433_int = 23917; // 0x45a PushI
	var_434_int = 23933; // 0x45b PushI
	AddReply(var_432_int, var_433_int, var_434_int); // 0x45c TObjFunc
	return 0; // 0x45e Return
	
Label_1119:
	var_435_int = 23917; // 0x45f PushI
	var_436_bool = var_6_int == var_435_int; // 0x460 Eq
	if(var_436_bool == 0) goto Label_1137; // 0x461 JumpB
	var_437_string = ""; // 0x462 PushV
	var_437_string = "Confusion"; // 0x463 MovS
	func_273(var_7_bool, var_437_string); // 0x464 NEW_2
	var_438_int = 522736; // 0x466 PushI
	SetMessage(var_438_int); // 0x467 TObjFunc
	ClearReplies(); // 0x469 TObjFunc
	var_439_int = 522737; // 0x46b PushI
	var_440_int = 23919; // 0x46c PushI
	var_441_int = 23918; // 0x46d PushI
	AddReply(var_439_int, var_440_int, var_441_int); // 0x46e TObjFunc
	return 0; // 0x470 Return
	
Label_1137:
	var_442_int = 23919; // 0x471 PushI
	var_443_bool = var_6_int == var_442_int; // 0x472 Eq
	if(var_443_bool == 0) goto Label_1160; // 0x473 JumpB
	var_444_string = ""; // 0x474 PushV
	var_444_string = "Threat"; // 0x475 MovS
	func_273(var_7_bool, var_444_string); // 0x476 NEW_2
	var_445_int = 522738; // 0x478 PushI
	SetMessage(var_445_int); // 0x479 TObjFunc
	ClearReplies(); // 0x47b TObjFunc
	var_446_int = 522759; // 0x47d PushI
	var_447_int = 23945; // 0x47e PushI
	var_448_int = 23941; // 0x47f PushI
	AddReply(var_446_int, var_447_int, var_448_int); // 0x480 TObjFunc
	var_449_int = 522760; // 0x482 PushI
	var_450_int = 23943; // 0x483 PushI
	var_451_int = 23942; // 0x484 PushI
	AddReply(var_449_int, var_450_int, var_451_int); // 0x485 TObjFunc
	return 0; // 0x487 Return
	
Label_1160:
	var_452_int = 23943; // 0x488 PushI
	var_453_bool = var_6_int == var_452_int; // 0x489 Eq
	if(var_453_bool == 0) goto Label_1178; // 0x48a JumpB
	var_454_string = ""; // 0x48b PushV
	var_454_string = "Confusion"; // 0x48c MovS
	func_273(var_7_bool, var_454_string); // 0x48d NEW_2
	var_455_int = 522761; // 0x48f PushI
	SetMessage(var_455_int); // 0x490 TObjFunc
	ClearReplies(); // 0x492 TObjFunc
	var_456_int = 522762; // 0x494 PushI
	var_457_int = 23945; // 0x495 PushI
	var_458_int = 23944; // 0x496 PushI
	AddReply(var_456_int, var_457_int, var_458_int); // 0x497 TObjFunc
	return 0; // 0x499 Return
	
Label_1178:
	var_459_int = 23945; // 0x49a PushI
	var_460_bool = var_6_int == var_459_int; // 0x49b Eq
	if(var_460_bool == 0) goto Label_1201; // 0x49c JumpB
	var_461_string = ""; // 0x49d PushV
	var_461_string = "Threat"; // 0x49e MovS
	func_273(var_7_bool, var_461_string); // 0x49f NEW_2
	var_462_int = 522763; // 0x4a1 PushI
	SetMessage(var_462_int); // 0x4a2 TObjFunc
	ClearReplies(); // 0x4a4 TObjFunc
	var_463_int = 522764; // 0x4a6 PushI
	var_464_int = -1; // 0x4a7 PushI
	var_465_int = 23947; // 0x4a8 PushI
	AddReply(var_463_int, var_464_int, var_465_int); // 0x4a9 TObjFunc
	var_466_int = 522765; // 0x4ab PushI
	var_467_int = -1; // 0x4ac PushI
	var_468_int = 23948; // 0x4ad PushI
	AddReply(var_466_int, var_467_int, var_468_int); // 0x4ae TObjFunc
	return 0; // 0x4b0 Return
	
Label_1201:
	var_3_string = 1; // 0x4b1 TMovB
	var_469_bool = 0; // 0x4b2 PushV
	func_1765(var_469_bool); // 0x4b3 NEW_2
	if(var_469_bool == 0) goto Label_1209; // 0x4b5 JumpB
	lshStopAnimation(); // 0x4b6 Func
	goto Label_1211; // 0x4b8 Jump
	
Label_1211:
	return 0; // 0x4bb Return
	
Label_1209:
	StopAnimation(); // 0x4b9 Func
	
Label_1213:
	return 0; // 0x4bd Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object)
{
	var_7_int = 0; var_8_object = Obj(); // 0x4c3 PushV
	var_8_object = var_6_object; // 0x4c4 Mov
	TaskCall(0); // 0x4c5 TaskCall
	func_0(var_9_object, var_7_int, var_8_object); // 0x4c6 NEW_2
	TaskReturn(); // 0x4c7 TaskReturn
	return 0; // 0x4c9 Return
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_string)
{
	var_7_bool = 0; var_8_bool = 0; // 0x4ca PushV
	var_9_string = "cleanup"; // 0x4cb PushS
	var_10_bool = var_6_string == var_9_string; // 0x4cc Eq
	if(var_10_bool == 0) goto Label_1249; // 0x4cd JumpB
	var_0_object = 1; // 0x4ce TMovB
	IsLoaded(var_8_bool); // 0x4cf Func
	var_11_bool = 0; // 0x4d1 PushV
	var_11_bool = 0; // 0x4d2 MovB
	var_12_bool = var_8_bool == 0; // 0x4d3 Not
	if(var_12_bool == 0) goto Label_1242; // 0x4d4 JumpB
	var_13_bool = 0; // 0x4d5 PushV
	func_1270(var_13_bool); // 0x4d6 NEW_2
	if(var_13_bool == 0) goto Label_1242; // 0x4d8 JumpB
	var_11_bool = 1; // 0x4d9 MovB
	
Label_1242:
	if(var_11_bool == 0) goto Label_1248; // 0x4da JumpB
	var_14_object = Obj(); // 0x4db PushV
	func_1548(var_14_object); // 0x4dc NEW_2
	RemoveActor(var_14_object); // 0x4de Func
	
Label_1248:
	goto Label_1253; // 0x4e0 Jump
	
Label_1253:
	return 2; // 0x4e5 Return
	
Label_1249:
	var_17_string = "restore"; // 0x4e1 PushS
	var_18_bool = var_6_string == var_17_string; // 0x4e2 Eq
	if(var_18_bool == 0) goto Label_1253; // 0x4e3 JumpB
	var_0_object = 0; // 0x4e4 TMovB
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	var_6_bool = 0; // 0x4e6 PushV
	var_6_bool = 0; // 0x4e7 MovB
	var_7_object = var_0_object; // 0x4e8 PushT
	if(var_7_object == 0) goto Label_1263; // 0x4e9 JumpB
	var_8_bool = 0; // 0x4ea PushV
	func_1270(var_8_bool); // 0x4eb NEW_2
	if(var_8_bool == 0) goto Label_1263; // 0x4ed JumpB
	var_6_bool = 1; // 0x4ee MovB
	
Label_1263:
	if(var_6_bool == 0) goto Label_1269; // 0x4ef JumpB
	var_9_object = Obj(); // 0x4f0 PushV
	func_1548(var_9_object); // 0x4f1 NEW_2
	RemoveActor(var_9_object); // 0x4f3 Func
	
Label_1269:
	return 0; // 0x4f5 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	
Label_1214:
	Hold(); // 0x4be Func
	goto Label_1214; // 0x4c0 Jump
}


func_0(var_0_object, var_7_int, var_8_object)
{
	var_10_object = Obj(); var_11_bool = 0; var_12_int = 0; var_13_bool = 0; var_14_object = Obj(); var_15_bool = 0; var_16_int = 0; var_17_bool = 0; // 0x0 PushV
	var_0_object = var_8_object; // 0x1 TMov
	var_18_bool = 0; var_19_object = Obj(); var_20_float = 0; // 0x2 PushV
	var_19_object = var_8_object; // 0x3 Mov
	var_20_float = 70.0; // 0x4 MovF
	func_1272(var_19_object, var_20_float); // 0x5 NEW_2
	var_64_bool = var_18_bool == 0; // 0x7 Not
	if(var_64_bool == 0) goto Label_11; // 0x8 JumpB
	var_7_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_14_object); // 0xb Func
	var_65_int = 0; // 0xd PushV
	func_1759(var_65_int); // 0xe NEW_2
	SetNPCName(var_65_int); // 0x10 ObjFunc
	var_66_int = 0; // 0x12 PushV
	func_1757(var_66_int); // 0x13 NEW_2
	SetNPCDescription(var_66_int); // 0x15 ObjFunc
	var_67_string = ""; // 0x17 PushV
	func_1761(var_67_string); // 0x18 NEW_2
	SetPhoto(var_67_string); // 0x1a ObjFunc
	var_68_string = ""; // 0x1c PushV
	func_1763(var_68_string); // 0x1d NEW_2
	SetPhoto2(var_68_string); // 0x1f ObjFunc
	var_69_int = 0; // 0x21 PushV
	func_1740(var_69_int); // 0x22 NEW_2
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
	func_1548(var_80_object); // 0x31 NEW_2
	var_79_object = var_80_object; // 0x32 Mov
	func_1357(var_78_bool, var_79_object); // 0x34 NEW_2
	var_173_object = Obj(); var_174_object = Obj(); // 0x36 PushV
	var_173_object = var_8_object; // 0x37 Mov
	var_174_object = var_14_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_175_object, var_176_object, var_177_string, var_178_bool, var_173_object, var_174_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	IsDialogEnd(var_17_bool); // 0x3d ObjFunc
	
Label_63:
	var_324_bool = var_17_bool == 0; // 0x3f Not
	if(var_324_bool == 0) goto Label_70; // 0x40 JumpB
	sync(); // 0x41 Func
	IsDialogEnd(var_17_bool); // 0x43 ObjFunc
	goto Label_63; // 0x45 Jump
	
Label_70:
	var_325_object = Obj(); // 0x46 PushV
	var_325_object = var_8_object; // 0x47 Mov
	func_1340(); // 0x48 NEW_2
	StopDialog(var_14_object); // 0x4a Func
	GetReturnValue(var_16_int); // 0x4c ObjFunc
	var_7_int = var_16_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_1668(var_225_bool)
{
	var_227_int = 0; var_228_string = ""; // 0x685 PushV
	var_228_string = "oob12AglajaSobor3"; // 0x686 MovS
	func_1564(var_227_int, var_228_string); // 0x687 NEW_2
	var_229_int = 0; // 0x689 PushI
	var_230_bool = var_227_int == var_229_int; // 0x68a Eq
	if(var_230_bool == 0) goto Label_1678; // 0x68b JumpB
	var_225_bool = 1; // 0x68c MovB
	return 0; // 0x68d Return
	
Label_1678:
	var_225_bool = 0; // 0x68e MovB
	return 0; // 0x68f Return
}


func_1541()
{
	var_9_bool = 0; // 0x605 PushV
	func_1765(var_9_bool); // 0x606 NEW_2
	if(var_9_bool == 0) goto Label_1547; // 0x608 JumpB
	lshStopSpeech(); // 0x609 Func
	
Label_1547:
	return 0; // 0x60b Return
}


func_1415(var_89_bool)
{
	var_91_string = ""; var_92_int = 0; var_93_bool = 0; var_94_int = 0; var_95_string = ""; var_96_string = ""; var_97_int = 0; var_98_bool = 0; var_99_int = 0; var_100_string = ""; // 0x587 PushV
	var_96_string = "c"; // 0x588 MovS
	var_97_int = 0; // 0x589 MovI
	
Label_1418:
	var_101_int = 1; // 0x58a PushI
	if(var_101_int == 0) goto Label_1431; // 0x58b JumpB
	var_102_int = 1; // 0x58c PushI
	var_103_int = var_97_int + var_102_int; // 0x58d Add
	var_104_int = var_96_string + var_103_int; // 0x58e Add
	HasProperty(var_104_int, var_98_bool); // 0x58f ObjFunc
	var_105_bool = var_98_bool == 0; // 0x591 Not
	if(var_105_bool == 0) goto Label_1428; // 0x592 JumpB
	goto Label_1431; // 0x593 Jump
	
Label_1431:
	var_106_bool = var_97_int == 0; // 0x597 Not
	if(var_106_bool == 0) goto Label_1435; // 0x598 JumpB
	var_89_bool = 0; // 0x599 MovB
	return 10; // 0x59a Return
	
Label_1435:
	var_99_int = 0; // 0x59b MovI
	var_107_int = 1; // 0x59c PushI
	var_108_bool = var_97_int > var_107_int; // 0x59d GT
	if(var_108_bool == 0) goto Label_1441; // 0x59e JumpB
	irand(var_99_int, var_97_int); // 0x59f Func
	
Label_1441:
	var_109_int = 1; // 0x5a1 PushI
	var_110_int = var_99_int + var_109_int; // 0x5a2 Add
	var_111_int = var_96_string + var_110_int; // 0x5a3 Add
	GetProperty(var_111_int, var_100_string); // 0x5a4 ObjFunc
	var_112_bool = 0; var_113_string = ""; // 0x5a6 PushV
	var_113_string = var_100_string; // 0x5a7 Mov
	func_1526(var_112_bool, var_113_string); // 0x5a8 NEW_2
	var_89_bool = var_112_bool; // 0x5a9 Mov
	return 10; // 0x5ab Return
	
Label_1428:
	var_118_int = 1; // 0x594 PushI
	var_97_int = var_97_int + var_118_int; // 0x595 Add2
	goto Label_1418; // 0x596 Jump
}


func_1548(var_9_object)
{
	var_10_object = Obj(); var_11_object = Obj(); // 0x60c PushV
	self(var_11_object); // 0x60d Func
	var_9_object = var_11_object; // 0x60f Mov
	return 2; // 0x610 Return
}


func_1656(var_216_bool)
{
	var_218_int = 0; var_219_string = ""; // 0x679 PushV
	var_219_string = "oob12AglajaSobor2"; // 0x67a MovS
	func_1564(var_218_int, var_219_string); // 0x67b NEW_2
	var_220_int = 0; // 0x67d PushI
	var_221_bool = var_218_int == var_220_int; // 0x67e Eq
	if(var_221_bool == 0) goto Label_1666; // 0x67f JumpB
	var_216_bool = 1; // 0x680 MovB
	return 0; // 0x681 Return
	
Label_1666:
	var_216_bool = 0; // 0x682 MovB
	return 0; // 0x683 Return
}


func_1680(var_250_bool)
{
	var_252_int = 0; var_253_string = ""; // 0x691 PushV
	var_253_string = "oob12AglajaSobor4"; // 0x692 MovS
	func_1564(var_252_int, var_253_string); // 0x693 NEW_2
	var_254_int = 0; // 0x695 PushI
	var_255_bool = var_252_int == var_254_int; // 0x696 Eq
	if(var_255_bool == 0) goto Label_1690; // 0x697 JumpB
	var_250_bool = 1; // 0x698 MovB
	return 0; // 0x699 Return
	
Label_1690:
	var_250_bool = 0; // 0x69a MovB
	return 0; // 0x69b Return
}


func_273(var_2_object, var_189_string)
{
	var_190_bool = 0; // 0x112 PushV
	func_1765(var_190_bool); // 0x113 NEW_2
	var_191_bool = var_190_bool == 0; // 0x115 Not
	if(var_191_bool == 0) goto Label_280; // 0x116 JumpB
	return 0; // 0x117 Return
	
Label_280:
	var_192_bool = var_189_string == var_2_object; // 0x118 Eq
	if(var_192_bool == 0) goto Label_283; // 0x119 JumpB
	return 0; // 0x11a Return
	
Label_283:
	var_193_string = ""; var_194_bool = 0; // 0x11b PushV
	var_193_string = var_189_string; // 0x11c Mov
	var_195_string = ""; // 0x11d PushS
	var_196_bool = var_189_string == var_195_string; // 0x11e Eq
	if(var_196_bool == 0) goto Label_290; // 0x11f JumpB
	var_194_bool = 0; // 0x120 MovB
	goto Label_291; // 0x121 Jump
	
Label_291:
	func_1511(var_193_string, var_194_bool); // 0x123 NEW_2
	var_2_object = var_189_string; // 0x125 TMov
	return 0; // 0x126 Return
	
Label_290:
	var_194_bool = 1; // 0x122 MovB
}


func_1554(var_45_cvector, var_46_cvector)
{
	var_48_float = 0; var_49_float = 0; // 0x612 PushV
	var_50_int = var_46_cvector | var_46_cvector; // 0x613 Or
	var_49_float = sqrt(var_50_int); // 0x614 Sqrt2
	var_51_float = 0.0; // 0x615 PushF
	var_52_bool = var_49_float < var_51_float; // 0x616 LT
	if(var_52_bool == 0) goto Label_1562; // 0x617 JumpB
	var_45_cvector = CVector(0.0, 0.0, 0.0); // 0x618 MovV
	return 2; // 0x619 Return
	
Label_1562:
	var_45_cvector = var_46_cvector / var_46_cvector; // 0x61a Div2
	return 2; // 0x61b Return
}


func_1692(var_259_bool)
{
	var_261_int = 0; var_262_string = ""; // 0x69d PushV
	var_262_string = "oob12AglajaSobor5"; // 0x69e MovS
	func_1564(var_261_int, var_262_string); // 0x69f NEW_2
	var_263_int = 0; // 0x6a1 PushI
	var_264_bool = var_261_int == var_263_int; // 0x6a2 Eq
	if(var_264_bool == 0) goto Label_1702; // 0x6a3 JumpB
	var_259_bool = 1; // 0x6a4 MovB
	return 0; // 0x6a5 Return
	
Label_1702:
	var_259_bool = 0; // 0x6a6 MovB
	return 0; // 0x6a7 Return
}


func_1564(var_182_int, var_183_string)
{
	var_184_int = 0; var_185_int = 0; // 0x61c PushV
	GetVariable(var_183_string, var_185_int); // 0x61d Func
	var_182_int = var_185_int; // 0x61f Mov
	return 2; // 0x620 Return
}


func_1569(var_133_int)
{
	var_134_float = 0; var_135_float = 0; // 0x621 PushV
	GetGameTime(var_135_float); // 0x622 Func
	var_136_int = 1; // 0x624 PushI
	var_137_int = 0; // 0x625 PushV
	var_138_int = 24; // 0x626 PushI
	var_137_int = var_135_float / var_135_float; // 0x627 Div2
	var_133_int = var_136_int + var_137_int; // 0x628 Add2
	return 2; // 0x629 Return
}


func_1704(var_271_bool)
{
	var_273_int = 0; var_274_string = ""; // 0x6a9 PushV
	var_274_string = "oob12AglajaSobor6"; // 0x6aa MovS
	func_1564(var_273_int, var_274_string); // 0x6ab NEW_2
	var_275_int = 0; // 0x6ad PushI
	var_276_bool = var_273_int == var_275_int; // 0x6ae Eq
	if(var_276_bool == 0) goto Label_1714; // 0x6af JumpB
	var_271_bool = 1; // 0x6b0 MovB
	return 0; // 0x6b1 Return
	
Label_1714:
	var_271_bool = 0; // 0x6b2 MovB
	return 0; // 0x6b3 Return
}


func_1578()
{
	var_14_string = "oob12AglajaSobor1"; // 0x62b PushS
	var_15_int = 1; // 0x62c PushI
	SetVariable(var_14_string, var_15_int); // 0x62d Func
	return 0; // 0x62f Return
}


func_1452(var_120_bool)
{
	var_122_string = ""; var_123_int = 0; var_124_bool = 0; var_125_int = 0; var_126_string = ""; var_127_string = ""; var_128_int = 0; var_129_bool = 0; var_130_int = 0; var_131_string = ""; // 0x5ac PushV
	var_132_string = "d"; // 0x5ad PushS
	var_133_int = 0; // 0x5ae PushV
	func_1569(var_133_int); // 0x5af NEW_2
	var_139_int = var_132_string + var_133_int; // 0x5b1 Add
	var_140_string = "m"; // 0x5b2 PushS
	var_127_string = var_139_int + var_140_string; // 0x5b3 Add2
	var_128_int = 0; // 0x5b4 MovI
	
Label_1461:
	var_141_int = 1; // 0x5b5 PushI
	if(var_141_int == 0) goto Label_1474; // 0x5b6 JumpB
	var_142_int = 1; // 0x5b7 PushI
	var_143_int = var_128_int + var_142_int; // 0x5b8 Add
	var_144_int = var_127_string + var_143_int; // 0x5b9 Add
	HasProperty(var_144_int, var_129_bool); // 0x5ba ObjFunc
	var_145_bool = var_129_bool == 0; // 0x5bc Not
	if(var_145_bool == 0) goto Label_1471; // 0x5bd JumpB
	goto Label_1474; // 0x5be Jump
	
Label_1474:
	var_146_bool = var_128_int == 0; // 0x5c2 Not
	if(var_146_bool == 0) goto Label_1478; // 0x5c3 JumpB
	var_120_bool = 0; // 0x5c4 MovB
	return 10; // 0x5c5 Return
	
Label_1478:
	var_130_int = 0; // 0x5c6 MovI
	var_147_int = 1; // 0x5c7 PushI
	var_148_bool = var_128_int > var_147_int; // 0x5c8 GT
	if(var_148_bool == 0) goto Label_1484; // 0x5c9 JumpB
	irand(var_130_int, var_128_int); // 0x5ca Func
	
Label_1484:
	var_149_int = 1; // 0x5cc PushI
	var_150_int = var_130_int + var_149_int; // 0x5cd Add
	var_151_int = var_127_string + var_150_int; // 0x5ce Add
	GetProperty(var_151_int, var_131_string); // 0x5cf ObjFunc
	var_152_bool = 0; var_153_string = ""; // 0x5d1 PushV
	var_153_string = var_131_string; // 0x5d2 Mov
	func_1526(var_152_bool, var_153_string); // 0x5d3 NEW_2
	var_120_bool = var_152_bool; // 0x5d4 Mov
	return 10; // 0x5d6 Return
	
Label_1471:
	var_154_int = 1; // 0x5bf PushI
	var_128_int = var_128_int + var_154_int; // 0x5c0 Add2
	goto Label_1461; // 0x5c1 Jump
}


func_1584()
{
	var_20_string = "oob12AglajaSobor2"; // 0x631 PushS
	var_21_int = 1; // 0x632 PushI
	SetVariable(var_20_string, var_21_int); // 0x633 Func
	return 0; // 0x635 Return
}


func_1716(var_283_bool)
{
	var_285_int = 0; var_286_string = ""; // 0x6b5 PushV
	var_286_string = "oob12AglajaSobor7"; // 0x6b6 MovS
	func_1564(var_285_int, var_286_string); // 0x6b7 NEW_2
	var_287_int = 0; // 0x6b9 PushI
	var_288_bool = var_285_int == var_287_int; // 0x6ba Eq
	if(var_288_bool == 0) goto Label_1726; // 0x6bb JumpB
	var_283_bool = 1; // 0x6bc MovB
	return 0; // 0x6bd Return
	
Label_1726:
	var_283_bool = 0; // 0x6be MovB
	return 0; // 0x6bf Return
}


func_1590()
{
	var_26_string = "oob12AglajaSobor3"; // 0x637 PushS
	var_27_int = 1; // 0x638 PushI
	SetVariable(var_26_string, var_27_int); // 0x639 Func
	return 0; // 0x63b Return
}


func_1340()
{
	var_326_bool = 0; var_327_bool = 0; // 0x53c PushV
	CameraSwitchToNormal(); // 0x53d Func
	var_328_bool = 0; // 0x53f PushV
	func_1765(var_328_bool); // 0x540 NEW_2
	if(var_328_bool == 0) goto Label_1348; // 0x542 JumpB
	goto Label_1356; // 0x543 Jump
	
Label_1356:
	return 2; // 0x54c Return
	
Label_1348:
	var_329_string = "head"; // 0x544 PushS
	HasAnimationTrack(var_327_bool, var_329_string); // 0x545 Func
	var_330_bool = var_327_bool; // 0x547 Push
	if(var_330_bool == 0) goto Label_1356; // 0x548 JumpB
	var_331_string = "head"; // 0x549 PushS
	UnlookAsync(var_331_string); // 0x54a Func
}


func_1596()
{
	var_32_string = "oob12AglajaSobor4"; // 0x63d PushS
	var_33_int = 1; // 0x63e PushI
	SetVariable(var_32_string, var_33_int); // 0x63f Func
	return 0; // 0x641 Return
}


func_1728(var_180_bool)
{
	var_182_int = 0; var_183_string = ""; // 0x6c1 PushV
	var_183_string = "game_final"; // 0x6c2 MovS
	func_1564(var_182_int, var_183_string); // 0x6c3 NEW_2
	var_186_int = 0; // 0x6c5 PushI
	var_187_bool = var_182_int != var_186_int; // 0x6c6 Neq
	if(var_187_bool == 0) goto Label_1738; // 0x6c7 JumpB
	var_180_bool = 1; // 0x6c8 MovB
	return 0; // 0x6c9 Return
	
Label_1738:
	var_180_bool = 0; // 0x6ca MovB
	return 0; // 0x6cb Return
}


func_1602()
{
	var_38_string = "oob12AglajaSobor5"; // 0x643 PushS
	var_39_int = 1; // 0x644 PushI
	SetVariable(var_38_string, var_39_int); // 0x645 Func
	return 0; // 0x647 Return
}


func_1608()
{
	var_44_string = "oob12AglajaSobor6"; // 0x649 PushS
	var_45_int = 1; // 0x64a PushI
	SetVariable(var_44_string, var_45_int); // 0x64b Func
	return 0; // 0x64d Return
}


func_1740(var_69_int)
{
	var_70_int = 0; var_71_int = 0; // 0x6cc PushV
	var_72_string = "branch"; // 0x6cd PushS
	GetVariable(var_72_string, var_71_int); // 0x6ce Func
	var_73_int = 0; // 0x6d0 PushI
	var_74_bool = var_71_int == var_73_int; // 0x6d1 Eq
	if(var_74_bool == 0) goto Label_1750; // 0x6d2 JumpB
	var_69_int = 1; // 0x6d3 MovI
	return 2; // 0x6d4 Return
	
Label_1750:
	var_75_int = 1; // 0x6d6 PushI
	var_76_bool = var_71_int == var_75_int; // 0x6d7 Eq
	if(var_76_bool == 0) goto Label_1755; // 0x6d8 JumpB
	var_69_int = 2; // 0x6d9 MovI
	return 2; // 0x6da Return
	
Label_1755:
	var_69_int = 3; // 0x6db MovI
	return 2; // 0x6dc Return
}


func_1357(var_78_bool, var_79_object)
{
	var_83_int = 0; var_84_int = 0; var_85_int = 0; var_86_int = 0; // 0x54d PushV
	var_87_string = "voice_common"; // 0x54e PushS
	GetVariable(var_87_string, var_85_int); // 0x54f Func
	var_88_int = var_85_int; // 0x551 Push
	if(var_88_int == 0) goto Label_1395; // 0x552 JumpB
	var_89_bool = 0; var_90_object = Obj(); // 0x553 PushV
	var_90_object = var_79_object; // 0x554 Mov
	func_1415(var_90_object); // 0x555 NEW_2
	var_119_bool = var_89_bool == 0; // 0x557 Not
	if(var_119_bool == 0) goto Label_1377; // 0x558 JumpB
	var_120_bool = 0; var_121_object = Obj(); // 0x559 PushV
	var_121_object = var_79_object; // 0x55a Mov
	func_1452(var_121_object); // 0x55b NEW_2
	var_155_bool = var_120_bool == 0; // 0x55d Not
	if(var_155_bool == 0) goto Label_1377; // 0x55e JumpB
	var_78_bool = 0; // 0x55f MovB
	return 4; // 0x560 Return
	
Label_1377:
	var_156_int = 2; // 0x561 PushI
	irand(var_86_int, var_156_int); // 0x562 Func
	var_157_int = var_86_int; // 0x564 Push
	if(var_157_int == 0) goto Label_1390; // 0x565 JumpB
	var_158_string = "voice_common"; // 0x566 PushS
	var_159_int = 1; // 0x567 PushI
	var_160_int = var_85_int + var_159_int; // 0x568 Add
	var_161_int = 3; // 0x569 PushI
	var_162_int = var_160_int / var_161_int; // 0x56a Mod
	SetVariable(var_158_string, var_162_int); // 0x56b Func
	goto Label_1394; // 0x56d Jump
	
Label_1394:
	goto Label_1413; // 0x572 Jump
	
Label_1413:
	var_78_bool = 1; // 0x585 MovB
	return 4; // 0x586 Return
	
Label_1390:
	var_163_string = "voice_common"; // 0x56e PushS
	var_164_int = 0; // 0x56f PushI
	SetVariable(var_163_string, var_164_int); // 0x570 Func
	
Label_1395:
	var_165_bool = 0; var_166_object = Obj(); // 0x573 PushV
	var_166_object = var_79_object; // 0x574 Mov
	func_1452(var_166_object); // 0x575 NEW_2
	var_167_bool = var_165_bool == 0; // 0x577 Not
	if(var_167_bool == 0) goto Label_1409; // 0x578 JumpB
	var_168_bool = 0; var_169_object = Obj(); // 0x579 PushV
	var_169_object = var_79_object; // 0x57a Mov
	func_1415(var_169_object); // 0x57b NEW_2
	var_170_bool = var_168_bool == 0; // 0x57d Not
	if(var_170_bool == 0) goto Label_1409; // 0x57e JumpB
	var_78_bool = 0; // 0x57f MovB
	return 4; // 0x580 Return
	
Label_1409:
	var_171_string = "voice_common"; // 0x581 PushS
	var_172_int = 1; // 0x582 PushI
	SetVariable(var_171_string, var_172_int); // 0x583 Func
}


func_1614()
{
	var_50_string = "oob12AglajaSobor7"; // 0x64f PushS
	var_51_int = 1; // 0x650 PushI
	SetVariable(var_50_string, var_51_int); // 0x651 Func
	return 0; // 0x653 Return
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_173_object, var_174_object)
{
	var_0_object = var_174_object; // 0x52 TMov
	var_1_object = var_173_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_179_int = 1; // 0x55 PushI
	if(var_179_int == 0) goto Label_243; // 0x56 JumpB
	var_180_bool = 0; var_181_object = Obj(); // 0x57 PushV
	var_181_object = var_1_object; // 0x58 MovT
	func_1728(var_181_object); // 0x59 NEW_2
	var_188_bool = var_180_bool == 0; // 0x5b Not
	if(var_188_bool == 0) goto Label_216; // 0x5c JumpB
	var_189_string = ""; // 0x5d PushV
	var_189_string = "Confusion"; // 0x5e MovS
	func_273(var_174_object, var_189_string); // 0x5f NEW_2
	var_206_int = 522168; // 0x61 PushI
	SetMessage(var_206_int); // 0x62 TObjFunc
	ClearReplies(); // 0x64 TObjFunc
	var_207_bool = 0; var_208_object = Obj(); // 0x66 PushV
	var_208_object = var_1_object; // 0x67 MovT
	func_1644(var_208_object); // 0x68 NEW_2
	if(var_207_bool == 0) goto Label_112; // 0x6a JumpB
	var_213_int = 522169; // 0x6b PushI
	var_214_int = 23901; // 0x6c PushI
	var_215_int = 23336; // 0x6d PushI
	AddReply(var_213_int, var_214_int, var_215_int); // 0x6e TObjFunc
	
Label_112:
	var_216_bool = 0; var_217_object = Obj(); // 0x70 PushV
	var_217_object = var_1_object; // 0x71 MovT
	func_1656(var_217_object); // 0x72 NEW_2
	if(var_216_bool == 0) goto Label_122; // 0x74 JumpB
	var_222_int = 522721; // 0x75 PushI
	var_223_int = 23904; // 0x76 PushI
	var_224_int = 23902; // 0x77 PushI
	AddReply(var_222_int, var_223_int, var_224_int); // 0x78 TObjFunc
	
Label_122:
	var_225_bool = 0; var_226_object = Obj(); // 0x7a PushV
	var_226_object = var_1_object; // 0x7b MovT
	func_1668(var_226_object); // 0x7c NEW_2
	if(var_225_bool == 0) goto Label_132; // 0x7e JumpB
	var_231_int = 522722; // 0x7f PushI
	var_232_int = 23905; // 0x80 PushI
	var_233_int = 23903; // 0x81 PushI
	AddReply(var_231_int, var_232_int, var_233_int); // 0x82 TObjFunc
	
Label_132:
	var_234_bool = 0; // 0x84 PushV
	var_234_bool = 0; // 0x85 MovB
	var_235_bool = 0; // 0x86 PushV
	var_235_bool = 0; // 0x87 MovB
	var_236_bool = 0; var_237_object = Obj(); // 0x88 PushV
	var_237_object = var_1_object; // 0x89 MovT
	func_1620(var_237_object); // 0x8a NEW_2
	var_242_bool = var_236_bool == 0; // 0x8c Not
	if(var_242_bool == 0) goto Label_149; // 0x8d JumpB
	var_243_bool = 0; var_244_object = Obj(); // 0x8e PushV
	var_244_object = var_1_object; // 0x8f MovT
	func_1632(var_244_object); // 0x90 NEW_2
	var_249_bool = var_243_bool == 0; // 0x92 Not
	if(var_249_bool == 0) goto Label_149; // 0x93 JumpB
	var_235_bool = 1; // 0x94 MovB
	
Label_149:
	if(var_235_bool == 0) goto Label_156; // 0x95 JumpB
	var_250_bool = 0; var_251_object = Obj(); // 0x96 PushV
	var_251_object = var_1_object; // 0x97 MovT
	func_1680(var_251_object); // 0x98 NEW_2
	if(var_250_bool == 0) goto Label_156; // 0x9a JumpB
	var_234_bool = 1; // 0x9b MovB
	
Label_156:
	if(var_234_bool == 0) goto Label_162; // 0x9c JumpB
	var_256_int = 522728; // 0x9d PushI
	var_257_int = 23910; // 0x9e PushI
	var_258_int = 23909; // 0x9f PushI
	AddReply(var_256_int, var_257_int, var_258_int); // 0xa0 TObjFunc
	
Label_162:
	var_259_bool = 0; var_260_object = Obj(); // 0xa2 PushV
	var_260_object = var_1_object; // 0xa3 MovT
	func_1692(var_260_object); // 0xa4 NEW_2
	if(var_259_bool == 0) goto Label_172; // 0xa6 JumpB
	var_265_int = 522735; // 0xa7 PushI
	var_266_int = 23921; // 0xa8 PushI
	var_267_int = 23916; // 0xa9 PushI
	AddReply(var_265_int, var_266_int, var_267_int); // 0xaa TObjFunc
	
Label_172:
	var_268_bool = 0; // 0xac PushV
	var_268_bool = 0; // 0xad MovB
	var_269_bool = 0; var_270_object = Obj(); // 0xae PushV
	var_270_object = var_1_object; // 0xaf MovT
	func_1620(var_270_object); // 0xb0 NEW_2
	if(var_269_bool == 0) goto Label_185; // 0xb2 JumpB
	var_271_bool = 0; var_272_object = Obj(); // 0xb3 PushV
	var_272_object = var_1_object; // 0xb4 MovT
	func_1704(var_272_object); // 0xb5 NEW_2
	if(var_271_bool == 0) goto Label_185; // 0xb7 JumpB
	var_268_bool = 1; // 0xb8 MovB
	
Label_185:
	if(var_268_bool == 0) goto Label_191; // 0xb9 JumpB
	var_277_int = 522774; // 0xba PushI
	var_278_int = 23968; // 0xbb PushI
	var_279_int = 23957; // 0xbc PushI
	AddReply(var_277_int, var_278_int, var_279_int); // 0xbd TObjFunc
	
Label_191:
	var_280_bool = 0; // 0xbf PushV
	var_280_bool = 0; // 0xc0 MovB
	var_281_bool = 0; var_282_object = Obj(); // 0xc1 PushV
	var_282_object = var_1_object; // 0xc2 MovT
	func_1632(var_282_object); // 0xc3 NEW_2
	if(var_281_bool == 0) goto Label_204; // 0xc5 JumpB
	var_283_bool = 0; var_284_object = Obj(); // 0xc6 PushV
	var_284_object = var_1_object; // 0xc7 MovT
	func_1716(var_284_object); // 0xc8 NEW_2
	if(var_283_bool == 0) goto Label_204; // 0xca JumpB
	var_280_bool = 1; // 0xcb MovB
	
Label_204:
	if(var_280_bool == 0) goto Label_210; // 0xcc JumpB
	var_289_int = 522784; // 0xcd PushI
	var_290_int = 23978; // 0xce PushI
	var_291_int = 23967; // 0xcf PushI
	AddReply(var_289_int, var_290_int, var_291_int); // 0xd0 TObjFunc
	
Label_210:
	var_292_int = 522727; // 0xd2 PushI
	var_293_int = -1; // 0xd3 PushI
	var_294_int = 23908; // 0xd4 PushI
	AddReply(var_292_int, var_293_int, var_294_int); // 0xd5 TObjFunc
	goto Label_243; // 0xd7 Jump
	
Label_243:
	var_295_bool = 0; // 0xf3 PushV
	func_1765(var_295_bool); // 0xf4 NEW_2
	if(var_295_bool == 0) goto Label_258; // 0xf6 JumpB
	
Label_247:
	lshWaitForAnimEnd(); // 0xf7 Func
	var_296_string = var_3_string; // 0xf9 PushT
	if(var_296_string == 0) goto Label_252; // 0xfa JumpB
	goto Label_257; // 0xfb Jump
	
Label_257:
	goto Label_272; // 0x101 Jump
	
Label_272:
	return 0; // 0x110 Return
	
Label_252:
	var_297_string = ""; // 0xfc PushV
	var_297_string = var_2_object; // 0xfd MovT
	func_1495(var_297_string); // 0xfe NEW_2
	goto Label_247; // 0x100 Jump
	
Label_258:
	var_308_string = "all"; // 0x102 PushS
	var_309_string = "idle"; // 0x103 PushS
	PlayAnimation(var_308_string, var_309_string); // 0x104 Func
	
Label_262:
	WaitForAnimEnd(); // 0x106 Func
	var_310_string = var_3_string; // 0x108 PushT
	if(var_310_string == 0) goto Label_267; // 0x109 JumpB
	goto Label_272; // 0x10a Jump
	
Label_267:
	var_311_string = "all"; // 0x10b PushS
	var_312_string = "idle"; // 0x10c PushS
	PlayAnimation(var_311_string, var_312_string); // 0x10d Func
	goto Label_262; // 0x10f Jump
	
Label_216:
	var_313_string = ""; // 0xd8 PushV
	var_313_string = "Neutral"; // 0xd9 MovS
	func_273(var_174_object, var_313_string); // 0xda NEW_2
	var_314_int = 523161; // 0xdc PushI
	SetMessage(var_314_int); // 0xdd TObjFunc
	ClearReplies(); // 0xdf TObjFunc
	var_315_int = 523162; // 0xe1 PushI
	var_316_int = -1; // 0xe2 PushI
	var_317_int = 24364; // 0xe3 PushI
	AddReply(var_315_int, var_316_int, var_317_int); // 0xe4 TObjFunc
	var_318_int = 523168; // 0xe6 PushI
	var_319_int = -1; // 0xe7 PushI
	var_320_int = 24370; // 0xe8 PushI
	AddReply(var_318_int, var_319_int, var_320_int); // 0xe9 TObjFunc
	var_321_int = 523169; // 0xeb PushI
	var_322_int = -1; // 0xec PushI
	var_323_int = 24371; // 0xed PushI
	AddReply(var_321_int, var_322_int, var_323_int); // 0xee TObjFunc
	goto Label_243; // 0xf0 Jump
}


func_1620(var_236_bool)
{
	var_238_int = 0; var_239_string = ""; // 0x655 PushV
	var_239_string = "b12q01ChildsAreVisited"; // 0x656 MovS
	func_1564(var_238_int, var_239_string); // 0x657 NEW_2
	var_240_int = 0; // 0x659 PushI
	var_241_bool = var_238_int != var_240_int; // 0x65a Neq
	if(var_241_bool == 0) goto Label_1630; // 0x65b JumpB
	var_236_bool = 1; // 0x65c MovB
	return 0; // 0x65d Return
	
Label_1630:
	var_236_bool = 0; // 0x65e MovB
	return 0; // 0x65f Return
}


func_1495(var_297_string)
{
	var_298_bool = 0; var_299_float = 0; var_300_float = 0; var_301_bool = 0; var_302_float = 0; var_303_float = 0; // 0x5d7 PushV
	lshHasAnimation(var_301_bool, var_297_string); // 0x5d8 Func
	var_304_bool = var_301_bool; // 0x5da Push
	if(var_304_bool == 0) goto Label_1506; // 0x5db JumpB
	lshGetAnimTimes(var_297_string, var_302_float, var_303_float); // 0x5dc Func
	var_305_bool = 0; // 0x5de PushB
	lshPlayAnimation(var_302_float, var_303_float, var_305_bool); // 0x5df Func
	goto Label_1510; // 0x5e1 Jump
	
Label_1510:
	return 6; // 0x5e6 Return
	
Label_1506:
	var_306_string = "Can't find lsh animation : "; // 0x5e2 PushS
	var_307_int = var_306_string + var_297_string; // 0x5e3 Add
	Trace(var_307_int); // 0x5e4 Func
}


func_1757(var_66_int)
{
	var_66_int = 515527; // 0x6dd MovI
	return 0; // 0x6de Return
}


func_1759(var_65_int)
{
	var_65_int = 513334; // 0x6df MovI
	return 0; // 0x6e0 Return
}


func_1632(var_243_bool)
{
	var_245_int = 0; var_246_string = ""; // 0x661 PushV
	var_246_string = "b12q01TheaterIsVisited"; // 0x662 MovS
	func_1564(var_245_int, var_246_string); // 0x663 NEW_2
	var_247_int = 0; // 0x665 PushI
	var_248_bool = var_245_int != var_247_int; // 0x666 Neq
	if(var_248_bool == 0) goto Label_1642; // 0x667 JumpB
	var_243_bool = 1; // 0x668 MovB
	return 0; // 0x669 Return
	
Label_1642:
	var_243_bool = 0; // 0x66a MovB
	return 0; // 0x66b Return
}


func_1761(var_67_string)
{
	var_67_string = "ui/NPC_Aglaja.png"; // 0x6e1 MovS
	return 0; // 0x6e2 Return
}


func_1763(var_68_string)
{
	var_68_string = "ui/NPC_Aglaja_b.png"; // 0x6e3 MovS
	return 0; // 0x6e4 Return
}


func_1765(var_60_bool)
{
	var_60_bool = 1; // 0x6e5 MovB
	return 0; // 0x6e6 Return
}


func_1511(var_193_string, var_194_bool)
{
	var_197_bool = 0; var_198_float = 0; var_199_float = 0; var_200_bool = 0; var_201_float = 0; var_202_float = 0; // 0x5e7 PushV
	lshHasAnimation(var_200_bool, var_193_string); // 0x5e8 Func
	var_203_bool = var_200_bool; // 0x5ea Push
	if(var_203_bool == 0) goto Label_1521; // 0x5eb JumpB
	lshGetAnimTimes(var_193_string, var_201_float, var_202_float); // 0x5ec Func
	lshPlayAnimation(var_201_float, var_202_float, var_194_bool); // 0x5ee Func
	goto Label_1525; // 0x5f0 Jump
	
Label_1525:
	return 6; // 0x5f5 Return
	
Label_1521:
	var_204_string = "Can't find lsh animation : "; // 0x5f1 PushS
	var_205_int = var_204_string + var_193_string; // 0x5f2 Add
	Trace(var_205_int); // 0x5f3 Func
}


func_1644(var_207_bool)
{
	var_209_int = 0; var_210_string = ""; // 0x66d PushV
	var_210_string = "oob12AglajaSobor1"; // 0x66e MovS
	func_1564(var_209_int, var_210_string); // 0x66f NEW_2
	var_211_int = 0; // 0x671 PushI
	var_212_bool = var_209_int == var_211_int; // 0x672 Eq
	if(var_212_bool == 0) goto Label_1654; // 0x673 JumpB
	var_207_bool = 1; // 0x674 MovB
	return 0; // 0x675 Return
	
Label_1654:
	var_207_bool = 0; // 0x676 MovB
	return 0; // 0x677 Return
}


func_1270(var_8_bool)
{
	var_8_bool = 1; // 0x4f6 MovB
	return 0; // 0x4f7 Return
}


func_1526(var_112_bool, var_113_string)
{
	var_114_bool = 0; var_115_bool = 0; // 0x5f6 PushV
	var_116_bool = 0; // 0x5f7 PushV
	func_1765(var_116_bool); // 0x5f8 NEW_2
	if(var_116_bool == 0) goto Label_1539; // 0x5fa JumpB
	lshHasSpeech(var_115_bool, var_113_string); // 0x5fb Func
	var_117_bool = var_115_bool; // 0x5fd Push
	if(var_117_bool == 0) goto Label_1539; // 0x5fe JumpB
	lshPlaySpeech(var_113_string); // 0x5ff Func
	var_112_bool = 1; // 0x601 MovB
	return 2; // 0x602 Return
	
Label_1539:
	var_112_bool = 0; // 0x603 MovB
	return 2; // 0x604 Return
}


func_1272(var_18_bool, var_20_float)
{
	var_21_float = 0; var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_bool = 0; var_29_bool = 0; var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_bool = 0; var_38_bool = 0; // 0x4f8 PushV
	GetPosition(var_31_cvector); // 0x4f9 ObjFunc
	GetEyesHeight(var_30_float); // 0x4fb ObjFunc
	var_39_float = GetByIndex(var_31_cvector, 1); // 0x4fd PushE
	var_39_float = var_39_float + var_30_float; // 0x4fe Add2
	SetByIndex(var_31_cvector, 1) = var_39_float; // 0x4ff PopE
	GetPosition(var_32_cvector); // 0x500 Func
	GetEyesHeight(var_30_float); // 0x502 Func
	var_40_float = GetByIndex(var_32_cvector, 1); // 0x504 PushE
	var_40_float = var_40_float + var_30_float; // 0x505 Add2
	SetByIndex(var_32_cvector, 1) = var_40_float; // 0x506 PopE
	var_33_cvector = var_31_cvector - var_32_cvector; // 0x507 Sub2
	var_41_float = GetByIndex(var_33_cvector, 1); // 0x508 PushE
	var_41_float = 0; // 0x509 MovI
	SetByIndex(var_33_cvector, 1) = var_41_float; // 0x50a PopE
	var_42_int = var_33_cvector | var_33_cvector; // 0x50b Or
	var_43_float = sqrt(var_42_int); // 0x50c Sqrt
	var_33_cvector = var_33_cvector / var_33_cvector; // 0x50d Div2
	var_34_cvector = -var_33_cvector; // 0x50e Neg2
	var_44_float = var_33_cvector * var_20_float; // 0x50f Mult
	var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); // 0x510 PushV
	var_47_cvector = CVector(0.0, 1.0, 0.0); // 0x511 PushVec
	var_46_cvector = var_34_cvector ^ var_47_cvector; // 0x512 Xor2
	func_1554(var_45_cvector, var_46_cvector); // 0x513 NEW_2
	var_53_int = 25; // 0x515 PushI
	var_54_float = var_45_cvector * var_53_int; // 0x516 Mult
	var_55_int = var_44_float + var_54_float; // 0x517 Add
	var_56_cvector = CVector(0.0, 10.0, 0.0); // 0x518 PushVec
	var_35_cvector = var_55_int - var_56_cvector; // 0x519 Sub2
	var_36_cvector = var_32_cvector + var_35_cvector; // 0x51a Add2
	IsOverrideActive(var_37_bool); // 0x51b Func
	var_57_bool = var_37_bool; // 0x51d Push
	if(var_57_bool == 0) goto Label_1313; // 0x51e JumpB
	var_18_bool = 0; // 0x51f MovB
	return 18; // 0x520 Return
	
Label_1313:
	StopWorld(); // 0x521 Func
	CameraTransit(var_36_cvector, var_34_cvector); // 0x523 Func
	var_58_float = GetByIndex(var_35_cvector, 0); // 0x525 PushE
	var_59_float = GetByIndex(var_35_cvector, 2); // 0x526 PushE
	Rotate(var_58_float, var_59_float); // 0x527 Func
	var_60_bool = 0; // 0x529 PushV
	func_1765(var_60_bool); // 0x52a NEW_2
	if(var_60_bool == 0) goto Label_1326; // 0x52c JumpB
	goto Label_1334; // 0x52d Jump
	
Label_1334:
	CameraWaitForPlayFinish(); // 0x536 Func
	ResumeWorld(); // 0x538 Func
	var_18_bool = 1; // 0x53a MovB
	return 18; // 0x53b Return
	
Label_1326:
	var_61_string = "head"; // 0x52e PushS
	HasAnimationTrack(var_38_bool, var_61_string); // 0x52f Func
	var_62_bool = var_38_bool; // 0x531 Push
	if(var_62_bool == 0) goto Label_1334; // 0x532 JumpB
	var_63_string = "head"; // 0x533 PushS
	LookAsyncCamera(var_63_string); // 0x534 Func
}


