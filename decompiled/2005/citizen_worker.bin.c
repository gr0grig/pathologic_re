task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_bool, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_int = 1; // 0x15a PushI
	if(var_20_int == 0) goto Label_1798; // 0x15b JumpB
	func_4241(); // 0x15d NEW_2
	var_22_int = 40087; // 0x15f PushI
	var_23_bool = var_19_bool == var_22_int; // 0x160 Eq
	if(var_23_bool == 0) goto Label_359; // 0x161 JumpB
	var_24_object = Obj(); var_25_object = Obj(); // 0x162 PushV
	var_24_object = var_1_object; // 0x163 MovT
	var_25_object = var_0_object; // 0x164 MovT
	func_4409(); // 0x165 NEW_2
	
Label_359:
	var_27_int = 45510; // 0x167 PushI
	var_28_bool = var_19_bool == var_27_int; // 0x168 Eq
	if(var_28_bool == 0) goto Label_367; // 0x169 JumpB
	var_29_object = Obj(); var_30_object = Obj(); // 0x16a PushV
	var_29_object = var_1_object; // 0x16b MovT
	var_30_object = var_0_object; // 0x16c MovT
	func_4409(); // 0x16d NEW_2
	
Label_367:
	var_31_int = 45517; // 0x16f PushI
	var_32_bool = var_19_bool == var_31_int; // 0x170 Eq
	if(var_32_bool == 0) goto Label_375; // 0x171 JumpB
	var_33_object = Obj(); var_34_object = Obj(); // 0x172 PushV
	var_33_object = var_1_object; // 0x173 MovT
	var_34_object = var_0_object; // 0x174 MovT
	func_4409(); // 0x175 NEW_2
	
Label_375:
	var_35_int = 40085; // 0x177 PushI
	var_36_bool = var_19_bool == var_35_int; // 0x178 Eq
	if(var_36_bool == 0) goto Label_383; // 0x179 JumpB
	var_37_object = Obj(); var_38_object = Obj(); // 0x17a PushV
	var_37_object = var_1_object; // 0x17b MovT
	var_38_object = var_0_object; // 0x17c MovT
	func_4409(); // 0x17d NEW_2
	
Label_383:
	var_39_int = 40086; // 0x17f PushI
	var_40_bool = var_19_bool == var_39_int; // 0x180 Eq
	if(var_40_bool == 0) goto Label_391; // 0x181 JumpB
	var_41_object = Obj(); var_42_object = Obj(); // 0x182 PushV
	var_41_object = var_1_object; // 0x183 MovT
	var_42_object = var_0_object; // 0x184 MovT
	func_4409(); // 0x185 NEW_2
	
Label_391:
	var_43_int = 45493; // 0x187 PushI
	var_44_bool = var_18_object == var_43_int; // 0x188 Eq
	if(var_44_bool == 0) goto Label_605; // 0x189 JumpB
	var_45_bool = 0; var_46_object = Obj(); // 0x18a PushV
	var_46_object = var_1_object; // 0x18b MovT
	func_4438(var_46_object); // 0x18c NEW_2
	if(var_45_bool == 0) goto Label_551; // 0x18e JumpB
	var_53_string = ""; // 0x18f PushV
	var_53_string = "Neutral"; // 0x190 MovS
	func_323(var_19_bool, var_53_string); // 0x191 NEW_2
	var_70_int = 543041; // 0x193 PushI
	SetMessage(var_70_int); // 0x194 TObjFunc
	ClearReplies(); // 0x196 TObjFunc
	var_71_bool = 0; var_72_object = Obj(); // 0x198 PushV
	var_72_object = var_1_object; // 0x199 MovT
	func_4450(var_71_bool, var_72_object); // 0x19a NEW_2
	if(var_71_bool == 0) goto Label_418; // 0x19c JumpB
	var_82_int = 538210; // 0x19d PushI
	var_83_int = -1; // 0x19e PushI
	var_84_int = 40087; // 0x19f PushI
	AddReply(var_82_int, var_83_int, var_84_int); // 0x1a0 TObjFunc
	
Label_418:
	var_85_bool = 0; var_86_object = Obj(); // 0x1a2 PushV
	var_86_object = var_1_object; // 0x1a3 MovT
	func_4450(var_85_bool, var_86_object); // 0x1a4 NEW_2
	if(var_85_bool == 0) goto Label_428; // 0x1a6 JumpB
	var_87_int = 543042; // 0x1a7 PushI
	var_88_int = -1; // 0x1a8 PushI
	var_89_int = 45494; // 0x1a9 PushI
	AddReply(var_87_int, var_88_int, var_89_int); // 0x1aa TObjFunc
	
Label_428:
	var_90_bool = 0; var_91_object = Obj(); // 0x1ac PushV
	var_91_object = var_1_object; // 0x1ad MovT
	func_4450(var_90_bool, var_91_object); // 0x1ae NEW_2
	if(var_90_bool == 0) goto Label_438; // 0x1b0 JumpB
	var_92_int = 543043; // 0x1b1 PushI
	var_93_int = -1; // 0x1b2 PushI
	var_94_int = 45495; // 0x1b3 PushI
	AddReply(var_92_int, var_93_int, var_94_int); // 0x1b4 TObjFunc
	
Label_438:
	var_95_bool = 0; // 0x1b6 PushV
	var_95_bool = 1; // 0x1b7 MovB
	var_96_bool = 0; // 0x1b8 PushV
	var_96_bool = 1; // 0x1b9 MovB
	var_97_bool = 0; var_98_object = Obj(); // 0x1ba PushV
	var_98_object = var_1_object; // 0x1bb MovT
	func_4470(var_97_bool, var_98_object); // 0x1bc NEW_2
	if(var_97_bool == 0) goto Label_453; // 0x1be JumpB
	var_103_bool = 0; var_104_object = Obj(); // 0x1bf PushV
	var_104_object = var_1_object; // 0x1c0 MovT
	func_4480(var_103_bool, var_104_object); // 0x1c1 NEW_2
	if(var_103_bool == 0) goto Label_453; // 0x1c3 JumpB
	var_96_bool = 0; // 0x1c4 MovB
	
Label_453:
	if(var_96_bool == 0) goto Label_460; // 0x1c5 JumpB
	var_109_bool = 0; var_110_object = Obj(); // 0x1c6 PushV
	var_110_object = var_1_object; // 0x1c7 MovT
	func_4490(var_109_bool, var_110_object); // 0x1c8 NEW_2
	if(var_109_bool == 0) goto Label_460; // 0x1ca JumpB
	var_95_bool = 0; // 0x1cb MovB
	
Label_460:
	if(var_95_bool == 0) goto Label_466; // 0x1cc JumpB
	var_115_int = 543055; // 0x1cd PushI
	var_116_int = -1; // 0x1ce PushI
	var_117_int = 45510; // 0x1cf PushI
	AddReply(var_115_int, var_116_int, var_117_int); // 0x1d0 TObjFunc
	
Label_466:
	var_118_bool = 0; // 0x1d2 PushV
	var_118_bool = 1; // 0x1d3 MovB
	var_119_bool = 0; var_120_object = Obj(); // 0x1d4 PushV
	var_120_object = var_1_object; // 0x1d5 MovT
	func_4470(var_119_bool, var_120_object); // 0x1d6 NEW_2
	if(var_119_bool == 0) goto Label_479; // 0x1d8 JumpB
	var_121_bool = 0; var_122_object = Obj(); // 0x1d9 PushV
	var_122_object = var_1_object; // 0x1da MovT
	func_4480(var_121_bool, var_122_object); // 0x1db NEW_2
	if(var_121_bool == 0) goto Label_479; // 0x1dd JumpB
	var_118_bool = 0; // 0x1de MovB
	
Label_479:
	if(var_118_bool == 0) goto Label_485; // 0x1df JumpB
	var_123_int = 543056; // 0x1e0 PushI
	var_124_int = -1; // 0x1e1 PushI
	var_125_int = 45511; // 0x1e2 PushI
	AddReply(var_123_int, var_124_int, var_125_int); // 0x1e3 TObjFunc
	
Label_485:
	var_126_bool = 0; // 0x1e5 PushV
	var_126_bool = 1; // 0x1e6 MovB
	var_127_bool = 0; // 0x1e7 PushV
	var_127_bool = 1; // 0x1e8 MovB
	var_128_bool = 0; var_129_object = Obj(); // 0x1e9 PushV
	var_129_object = var_1_object; // 0x1ea MovT
	func_4500(var_128_bool, var_129_object); // 0x1eb NEW_2
	if(var_128_bool == 0) goto Label_500; // 0x1ed JumpB
	var_134_bool = 0; var_135_object = Obj(); // 0x1ee PushV
	var_135_object = var_1_object; // 0x1ef MovT
	func_4510(var_134_bool, var_135_object); // 0x1f0 NEW_2
	if(var_134_bool == 0) goto Label_500; // 0x1f2 JumpB
	var_127_bool = 0; // 0x1f3 MovB
	
Label_500:
	if(var_127_bool == 0) goto Label_507; // 0x1f4 JumpB
	var_140_bool = 0; var_141_object = Obj(); // 0x1f5 PushV
	var_141_object = var_1_object; // 0x1f6 MovT
	func_4520(var_140_bool, var_141_object); // 0x1f7 NEW_2
	if(var_140_bool == 0) goto Label_507; // 0x1f9 JumpB
	var_126_bool = 0; // 0x1fa MovB
	
Label_507:
	if(var_126_bool == 0) goto Label_513; // 0x1fb JumpB
	var_146_int = 543062; // 0x1fc PushI
	var_147_int = -1; // 0x1fd PushI
	var_148_int = 45517; // 0x1fe PushI
	AddReply(var_146_int, var_147_int, var_148_int); // 0x1ff TObjFunc
	
Label_513:
	var_149_bool = 0; // 0x201 PushV
	var_149_bool = 1; // 0x202 MovB
	var_150_bool = 0; // 0x203 PushV
	var_150_bool = 1; // 0x204 MovB
	var_151_bool = 0; // 0x205 PushV
	var_151_bool = 1; // 0x206 MovB
	var_152_bool = 0; var_153_object = Obj(); // 0x207 PushV
	var_153_object = var_1_object; // 0x208 MovT
	func_4490(var_152_bool, var_153_object); // 0x209 NEW_2
	if(var_152_bool == 0) goto Label_530; // 0x20b JumpB
	var_154_bool = 0; var_155_object = Obj(); // 0x20c PushV
	var_155_object = var_1_object; // 0x20d MovT
	func_4500(var_154_bool, var_155_object); // 0x20e NEW_2
	if(var_154_bool == 0) goto Label_530; // 0x210 JumpB
	var_151_bool = 0; // 0x211 MovB
	
Label_530:
	if(var_151_bool == 0) goto Label_537; // 0x212 JumpB
	var_156_bool = 0; var_157_object = Obj(); // 0x213 PushV
	var_157_object = var_1_object; // 0x214 MovT
	func_4510(var_156_bool, var_157_object); // 0x215 NEW_2
	if(var_156_bool == 0) goto Label_537; // 0x217 JumpB
	var_150_bool = 0; // 0x218 MovB
	
Label_537:
	if(var_150_bool == 0) goto Label_544; // 0x219 JumpB
	var_158_bool = 0; var_159_object = Obj(); // 0x21a PushV
	var_159_object = var_1_object; // 0x21b MovT
	func_4520(var_158_bool, var_159_object); // 0x21c NEW_2
	if(var_158_bool == 0) goto Label_544; // 0x21e JumpB
	var_149_bool = 0; // 0x21f MovB
	
Label_544:
	if(var_149_bool == 0) goto Label_550; // 0x220 JumpB
	var_160_int = 543064; // 0x221 PushI
	var_161_int = -1; // 0x222 PushI
	var_162_int = 45519; // 0x223 PushI
	AddReply(var_160_int, var_161_int, var_162_int); // 0x224 TObjFunc
	
Label_550:
	return 0; // 0x226 Return
	
Label_551:
	var_163_string = ""; // 0x227 PushV
	var_163_string = "Neutral"; // 0x228 MovS
	func_323(var_19_bool, var_163_string); // 0x229 NEW_2
	var_164_int = 538207; // 0x22b PushI
	SetMessage(var_164_int); // 0x22c TObjFunc
	ClearReplies(); // 0x22e TObjFunc
	var_165_bool = 0; var_166_object = Obj(); // 0x230 PushV
	var_166_object = var_1_object; // 0x231 MovT
	func_4414(var_166_object); // 0x232 NEW_2
	if(var_165_bool == 0) goto Label_570; // 0x234 JumpB
	var_171_int = 538208; // 0x235 PushI
	var_172_int = -1; // 0x236 PushI
	var_173_int = 40085; // 0x237 PushI
	AddReply(var_171_int, var_172_int, var_173_int); // 0x238 TObjFunc
	
Label_570:
	var_174_bool = 0; var_175_object = Obj(); // 0x23a PushV
	var_175_object = var_1_object; // 0x23b MovT
	func_4426(var_175_object); // 0x23c NEW_2
	if(var_174_bool == 0) goto Label_580; // 0x23e JumpB
	var_180_int = 538209; // 0x23f PushI
	var_181_int = -1; // 0x240 PushI
	var_182_int = 40086; // 0x241 PushI
	AddReply(var_180_int, var_181_int, var_182_int); // 0x242 TObjFunc
	
Label_580:
	var_183_bool = 0; // 0x244 PushV
	var_183_bool = 0; // 0x245 MovB
	var_184_bool = 0; var_185_object = Obj(); // 0x246 PushV
	var_185_object = var_1_object; // 0x247 MovT
	func_4414(var_185_object); // 0x248 NEW_2
	if(var_184_bool == 0) goto Label_593; // 0x24a JumpB
	var_186_bool = 0; var_187_object = Obj(); // 0x24b PushV
	var_187_object = var_1_object; // 0x24c MovT
	func_4460(var_186_bool, var_187_object); // 0x24d NEW_2
	if(var_186_bool == 0) goto Label_593; // 0x24f JumpB
	var_183_bool = 1; // 0x250 MovB
	
Label_593:
	if(var_183_bool == 0) goto Label_599; // 0x251 JumpB
	var_192_int = 538235; // 0x252 PushI
	var_193_int = 40114; // 0x253 PushI
	var_194_int = 40113; // 0x254 PushI
	AddReply(var_192_int, var_193_int, var_194_int); // 0x255 TObjFunc
	
Label_599:
	var_195_int = 538396; // 0x257 PushI
	var_196_int = -1; // 0x258 PushI
	var_197_int = 40282; // 0x259 PushI
	AddReply(var_195_int, var_196_int, var_197_int); // 0x25a TObjFunc
	return 0; // 0x25c Return
	
Label_605:
	var_198_int = 40272; // 0x25d PushI
	var_199_bool = var_18_object == var_198_int; // 0x25e Eq
	if(var_199_bool == 0) goto Label_608; // 0x25f JumpB
	
Label_608:
	var_200_int = 40274; // 0x260 PushI
	var_201_bool = var_18_object == var_200_int; // 0x261 Eq
	if(var_201_bool == 0) goto Label_631; // 0x262 JumpB
	var_202_string = ""; // 0x263 PushV
	var_202_string = "Neutral"; // 0x264 MovS
	func_323(var_19_bool, var_202_string); // 0x265 NEW_2
	var_203_int = 538388; // 0x267 PushI
	SetMessage(var_203_int); // 0x268 TObjFunc
	ClearReplies(); // 0x26a TObjFunc
	var_204_int = 538389; // 0x26c PushI
	var_205_int = 40276; // 0x26d PushI
	var_206_int = 40275; // 0x26e PushI
	AddReply(var_204_int, var_205_int, var_206_int); // 0x26f TObjFunc
	var_207_int = 538392; // 0x271 PushI
	var_208_int = 40279; // 0x272 PushI
	var_209_int = 40278; // 0x273 PushI
	AddReply(var_207_int, var_208_int, var_209_int); // 0x274 TObjFunc
	return 0; // 0x276 Return
	
Label_631:
	var_210_int = 40279; // 0x277 PushI
	var_211_bool = var_18_object == var_210_int; // 0x278 Eq
	if(var_211_bool == 0) goto Label_649; // 0x279 JumpB
	var_212_string = ""; // 0x27a PushV
	var_212_string = "Neutral"; // 0x27b MovS
	func_323(var_19_bool, var_212_string); // 0x27c NEW_2
	var_213_int = 538393; // 0x27e PushI
	SetMessage(var_213_int); // 0x27f TObjFunc
	ClearReplies(); // 0x281 TObjFunc
	var_214_int = 538394; // 0x283 PushI
	var_215_int = -1; // 0x284 PushI
	var_216_int = 40280; // 0x285 PushI
	AddReply(var_214_int, var_215_int, var_216_int); // 0x286 TObjFunc
	return 0; // 0x288 Return
	
Label_649:
	var_217_int = 40276; // 0x289 PushI
	var_218_bool = var_18_object == var_217_int; // 0x28a Eq
	if(var_218_bool == 0) goto Label_667; // 0x28b JumpB
	var_219_string = ""; // 0x28c PushV
	var_219_string = "Neutral"; // 0x28d MovS
	func_323(var_19_bool, var_219_string); // 0x28e NEW_2
	var_220_int = 538390; // 0x290 PushI
	SetMessage(var_220_int); // 0x291 TObjFunc
	ClearReplies(); // 0x293 TObjFunc
	var_221_int = 538391; // 0x295 PushI
	var_222_int = -1; // 0x296 PushI
	var_223_int = 40277; // 0x297 PushI
	AddReply(var_221_int, var_222_int, var_223_int); // 0x298 TObjFunc
	return 0; // 0x29a Return
	
Label_667:
	var_224_int = 40262; // 0x29b PushI
	var_225_bool = var_18_object == var_224_int; // 0x29c Eq
	if(var_225_bool == 0) goto Label_670; // 0x29d JumpB
	
Label_670:
	var_226_int = 40264; // 0x29e PushI
	var_227_bool = var_18_object == var_226_int; // 0x29f Eq
	if(var_227_bool == 0) goto Label_693; // 0x2a0 JumpB
	var_228_string = ""; // 0x2a1 PushV
	var_228_string = "Neutral"; // 0x2a2 MovS
	func_323(var_19_bool, var_228_string); // 0x2a3 NEW_2
	var_229_int = 538378; // 0x2a5 PushI
	SetMessage(var_229_int); // 0x2a6 TObjFunc
	ClearReplies(); // 0x2a8 TObjFunc
	var_230_int = 538379; // 0x2aa PushI
	var_231_int = 40266; // 0x2ab PushI
	var_232_int = 40265; // 0x2ac PushI
	AddReply(var_230_int, var_231_int, var_232_int); // 0x2ad TObjFunc
	var_233_int = 538383; // 0x2af PushI
	var_234_int = -1; // 0x2b0 PushI
	var_235_int = 40269; // 0x2b1 PushI
	AddReply(var_233_int, var_234_int, var_235_int); // 0x2b2 TObjFunc
	return 0; // 0x2b4 Return
	
Label_693:
	var_236_int = 40266; // 0x2b5 PushI
	var_237_bool = var_18_object == var_236_int; // 0x2b6 Eq
	if(var_237_bool == 0) goto Label_716; // 0x2b7 JumpB
	var_238_string = ""; // 0x2b8 PushV
	var_238_string = "Neutral"; // 0x2b9 MovS
	func_323(var_19_bool, var_238_string); // 0x2ba NEW_2
	var_239_int = 538380; // 0x2bc PushI
	SetMessage(var_239_int); // 0x2bd TObjFunc
	ClearReplies(); // 0x2bf TObjFunc
	var_240_int = 538381; // 0x2c1 PushI
	var_241_int = -1; // 0x2c2 PushI
	var_242_int = 40267; // 0x2c3 PushI
	AddReply(var_240_int, var_241_int, var_242_int); // 0x2c4 TObjFunc
	var_243_int = 538382; // 0x2c6 PushI
	var_244_int = -1; // 0x2c7 PushI
	var_245_int = 40268; // 0x2c8 PushI
	AddReply(var_243_int, var_244_int, var_245_int); // 0x2c9 TObjFunc
	return 0; // 0x2cb Return
	
Label_716:
	var_246_int = 40250; // 0x2cc PushI
	var_247_bool = var_18_object == var_246_int; // 0x2cd Eq
	if(var_247_bool == 0) goto Label_719; // 0x2ce JumpB
	
Label_719:
	var_248_int = 40256; // 0x2cf PushI
	var_249_bool = var_18_object == var_248_int; // 0x2d0 Eq
	if(var_249_bool == 0) goto Label_742; // 0x2d1 JumpB
	var_250_string = ""; // 0x2d2 PushV
	var_250_string = "Neutral"; // 0x2d3 MovS
	func_323(var_19_bool, var_250_string); // 0x2d4 NEW_2
	var_251_int = 538371; // 0x2d6 PushI
	SetMessage(var_251_int); // 0x2d7 TObjFunc
	ClearReplies(); // 0x2d9 TObjFunc
	var_252_int = 538372; // 0x2db PushI
	var_253_int = 40252; // 0x2dc PushI
	var_254_int = 40257; // 0x2dd PushI
	AddReply(var_252_int, var_253_int, var_254_int); // 0x2de TObjFunc
	var_255_int = 538373; // 0x2e0 PushI
	var_256_int = -1; // 0x2e1 PushI
	var_257_int = 40259; // 0x2e2 PushI
	AddReply(var_255_int, var_256_int, var_257_int); // 0x2e3 TObjFunc
	return 0; // 0x2e5 Return
	
Label_742:
	var_258_int = 40252; // 0x2e6 PushI
	var_259_bool = var_18_object == var_258_int; // 0x2e7 Eq
	if(var_259_bool == 0) goto Label_765; // 0x2e8 JumpB
	var_260_string = ""; // 0x2e9 PushV
	var_260_string = "Neutral"; // 0x2ea MovS
	func_323(var_19_bool, var_260_string); // 0x2eb NEW_2
	var_261_int = 538367; // 0x2ed PushI
	SetMessage(var_261_int); // 0x2ee TObjFunc
	ClearReplies(); // 0x2f0 TObjFunc
	var_262_int = 538368; // 0x2f2 PushI
	var_263_int = -1; // 0x2f3 PushI
	var_264_int = 40253; // 0x2f4 PushI
	AddReply(var_262_int, var_263_int, var_264_int); // 0x2f5 TObjFunc
	var_265_int = 538369; // 0x2f7 PushI
	var_266_int = -1; // 0x2f8 PushI
	var_267_int = 40254; // 0x2f9 PushI
	AddReply(var_265_int, var_266_int, var_267_int); // 0x2fa TObjFunc
	return 0; // 0x2fc Return
	
Label_765:
	var_268_int = 40233; // 0x2fd PushI
	var_269_bool = var_18_object == var_268_int; // 0x2fe Eq
	if(var_269_bool == 0) goto Label_768; // 0x2ff JumpB
	
Label_768:
	var_270_int = 40235; // 0x300 PushI
	var_271_bool = var_18_object == var_270_int; // 0x301 Eq
	if(var_271_bool == 0) goto Label_791; // 0x302 JumpB
	var_272_string = ""; // 0x303 PushV
	var_272_string = "Neutral"; // 0x304 MovS
	func_323(var_19_bool, var_272_string); // 0x305 NEW_2
	var_273_int = 538350; // 0x307 PushI
	SetMessage(var_273_int); // 0x308 TObjFunc
	ClearReplies(); // 0x30a TObjFunc
	var_274_int = 538351; // 0x30c PushI
	var_275_int = 40237; // 0x30d PushI
	var_276_int = 40236; // 0x30e PushI
	AddReply(var_274_int, var_275_int, var_276_int); // 0x30f TObjFunc
	var_277_int = 538362; // 0x311 PushI
	var_278_int = -1; // 0x312 PushI
	var_279_int = 40247; // 0x313 PushI
	AddReply(var_277_int, var_278_int, var_279_int); // 0x314 TObjFunc
	return 0; // 0x316 Return
	
Label_791:
	var_280_int = 40237; // 0x317 PushI
	var_281_bool = var_18_object == var_280_int; // 0x318 Eq
	if(var_281_bool == 0) goto Label_814; // 0x319 JumpB
	var_282_string = ""; // 0x31a PushV
	var_282_string = "Neutral"; // 0x31b MovS
	func_323(var_19_bool, var_282_string); // 0x31c NEW_2
	var_283_int = 538352; // 0x31e PushI
	SetMessage(var_283_int); // 0x31f TObjFunc
	ClearReplies(); // 0x321 TObjFunc
	var_284_int = 538353; // 0x323 PushI
	var_285_int = 40239; // 0x324 PushI
	var_286_int = 40238; // 0x325 PushI
	AddReply(var_284_int, var_285_int, var_286_int); // 0x326 TObjFunc
	var_287_int = 538359; // 0x328 PushI
	var_288_int = 40245; // 0x329 PushI
	var_289_int = 40244; // 0x32a PushI
	AddReply(var_287_int, var_288_int, var_289_int); // 0x32b TObjFunc
	return 0; // 0x32d Return
	
Label_814:
	var_290_int = 40245; // 0x32e PushI
	var_291_bool = var_18_object == var_290_int; // 0x32f Eq
	if(var_291_bool == 0) goto Label_832; // 0x330 JumpB
	var_292_string = ""; // 0x331 PushV
	var_292_string = "Neutral"; // 0x332 MovS
	func_323(var_19_bool, var_292_string); // 0x333 NEW_2
	var_293_int = 538360; // 0x335 PushI
	SetMessage(var_293_int); // 0x336 TObjFunc
	ClearReplies(); // 0x338 TObjFunc
	var_294_int = 538361; // 0x33a PushI
	var_295_int = -1; // 0x33b PushI
	var_296_int = 40246; // 0x33c PushI
	AddReply(var_294_int, var_295_int, var_296_int); // 0x33d TObjFunc
	return 0; // 0x33f Return
	
Label_832:
	var_297_int = 40239; // 0x340 PushI
	var_298_bool = var_18_object == var_297_int; // 0x341 Eq
	if(var_298_bool == 0) goto Label_855; // 0x342 JumpB
	var_299_string = ""; // 0x343 PushV
	var_299_string = "Neutral"; // 0x344 MovS
	func_323(var_19_bool, var_299_string); // 0x345 NEW_2
	var_300_int = 538354; // 0x347 PushI
	SetMessage(var_300_int); // 0x348 TObjFunc
	ClearReplies(); // 0x34a TObjFunc
	var_301_int = 538355; // 0x34c PushI
	var_302_int = -1; // 0x34d PushI
	var_303_int = 40240; // 0x34e PushI
	AddReply(var_301_int, var_302_int, var_303_int); // 0x34f TObjFunc
	var_304_int = 538356; // 0x351 PushI
	var_305_int = 40242; // 0x352 PushI
	var_306_int = 40241; // 0x353 PushI
	AddReply(var_304_int, var_305_int, var_306_int); // 0x354 TObjFunc
	return 0; // 0x356 Return
	
Label_855:
	var_307_int = 40242; // 0x357 PushI
	var_308_bool = var_18_object == var_307_int; // 0x358 Eq
	if(var_308_bool == 0) goto Label_873; // 0x359 JumpB
	var_309_string = ""; // 0x35a PushV
	var_309_string = "Neutral"; // 0x35b MovS
	func_323(var_19_bool, var_309_string); // 0x35c NEW_2
	var_310_int = 538357; // 0x35e PushI
	SetMessage(var_310_int); // 0x35f TObjFunc
	ClearReplies(); // 0x361 TObjFunc
	var_311_int = 538358; // 0x363 PushI
	var_312_int = -1; // 0x364 PushI
	var_313_int = 40243; // 0x365 PushI
	AddReply(var_311_int, var_312_int, var_313_int); // 0x366 TObjFunc
	return 0; // 0x368 Return
	
Label_873:
	var_314_int = 40216; // 0x369 PushI
	var_315_bool = var_18_object == var_314_int; // 0x36a Eq
	if(var_315_bool == 0) goto Label_876; // 0x36b JumpB
	
Label_876:
	var_316_int = 40218; // 0x36c PushI
	var_317_bool = var_18_object == var_316_int; // 0x36d Eq
	if(var_317_bool == 0) goto Label_899; // 0x36e JumpB
	var_318_string = ""; // 0x36f PushV
	var_318_string = "Neutral"; // 0x370 MovS
	func_323(var_19_bool, var_318_string); // 0x371 NEW_2
	var_319_int = 538335; // 0x373 PushI
	SetMessage(var_319_int); // 0x374 TObjFunc
	ClearReplies(); // 0x376 TObjFunc
	var_320_int = 538336; // 0x378 PushI
	var_321_int = 40220; // 0x379 PushI
	var_322_int = 40219; // 0x37a PushI
	AddReply(var_320_int, var_321_int, var_322_int); // 0x37b TObjFunc
	var_323_int = 538343; // 0x37d PushI
	var_324_int = 40228; // 0x37e PushI
	var_325_int = 40227; // 0x37f PushI
	AddReply(var_323_int, var_324_int, var_325_int); // 0x380 TObjFunc
	return 0; // 0x382 Return
	
Label_899:
	var_326_int = 40228; // 0x383 PushI
	var_327_bool = var_18_object == var_326_int; // 0x384 Eq
	if(var_327_bool == 0) goto Label_917; // 0x385 JumpB
	var_328_string = ""; // 0x386 PushV
	var_328_string = "Neutral"; // 0x387 MovS
	func_323(var_19_bool, var_328_string); // 0x388 NEW_2
	var_329_int = 538344; // 0x38a PushI
	SetMessage(var_329_int); // 0x38b TObjFunc
	ClearReplies(); // 0x38d TObjFunc
	var_330_int = 538345; // 0x38f PushI
	var_331_int = 40220; // 0x390 PushI
	var_332_int = 40229; // 0x391 PushI
	AddReply(var_330_int, var_331_int, var_332_int); // 0x392 TObjFunc
	return 0; // 0x394 Return
	
Label_917:
	var_333_int = 40220; // 0x395 PushI
	var_334_bool = var_18_object == var_333_int; // 0x396 Eq
	if(var_334_bool == 0) goto Label_940; // 0x397 JumpB
	var_335_string = ""; // 0x398 PushV
	var_335_string = "Neutral"; // 0x399 MovS
	func_323(var_19_bool, var_335_string); // 0x39a NEW_2
	var_336_int = 538337; // 0x39c PushI
	SetMessage(var_336_int); // 0x39d TObjFunc
	ClearReplies(); // 0x39f TObjFunc
	var_337_int = 538338; // 0x3a1 PushI
	var_338_int = 40222; // 0x3a2 PushI
	var_339_int = 40221; // 0x3a3 PushI
	AddReply(var_337_int, var_338_int, var_339_int); // 0x3a4 TObjFunc
	var_340_int = 538342; // 0x3a6 PushI
	var_341_int = 40222; // 0x3a7 PushI
	var_342_int = 40225; // 0x3a8 PushI
	AddReply(var_340_int, var_341_int, var_342_int); // 0x3a9 TObjFunc
	return 0; // 0x3ab Return
	
Label_940:
	var_343_int = 40222; // 0x3ac PushI
	var_344_bool = var_18_object == var_343_int; // 0x3ad Eq
	if(var_344_bool == 0) goto Label_963; // 0x3ae JumpB
	var_345_string = ""; // 0x3af PushV
	var_345_string = "Neutral"; // 0x3b0 MovS
	func_323(var_19_bool, var_345_string); // 0x3b1 NEW_2
	var_346_int = 538339; // 0x3b3 PushI
	SetMessage(var_346_int); // 0x3b4 TObjFunc
	ClearReplies(); // 0x3b6 TObjFunc
	var_347_int = 538340; // 0x3b8 PushI
	var_348_int = -1; // 0x3b9 PushI
	var_349_int = 40223; // 0x3ba PushI
	AddReply(var_347_int, var_348_int, var_349_int); // 0x3bb TObjFunc
	var_350_int = 538341; // 0x3bd PushI
	var_351_int = -1; // 0x3be PushI
	var_352_int = 40224; // 0x3bf PushI
	AddReply(var_350_int, var_351_int, var_352_int); // 0x3c0 TObjFunc
	return 0; // 0x3c2 Return
	
Label_963:
	var_353_int = 40206; // 0x3c3 PushI
	var_354_bool = var_18_object == var_353_int; // 0x3c4 Eq
	if(var_354_bool == 0) goto Label_966; // 0x3c5 JumpB
	
Label_966:
	var_355_int = 40208; // 0x3c6 PushI
	var_356_bool = var_18_object == var_355_int; // 0x3c7 Eq
	if(var_356_bool == 0) goto Label_989; // 0x3c8 JumpB
	var_357_string = ""; // 0x3c9 PushV
	var_357_string = "Neutral"; // 0x3ca MovS
	func_323(var_19_bool, var_357_string); // 0x3cb NEW_2
	var_358_int = 538325; // 0x3cd PushI
	SetMessage(var_358_int); // 0x3ce TObjFunc
	ClearReplies(); // 0x3d0 TObjFunc
	var_359_int = 538326; // 0x3d2 PushI
	var_360_int = 40210; // 0x3d3 PushI
	var_361_int = 40209; // 0x3d4 PushI
	AddReply(var_359_int, var_360_int, var_361_int); // 0x3d5 TObjFunc
	var_362_int = 538330; // 0x3d7 PushI
	var_363_int = -1; // 0x3d8 PushI
	var_364_int = 40213; // 0x3d9 PushI
	AddReply(var_362_int, var_363_int, var_364_int); // 0x3da TObjFunc
	return 0; // 0x3dc Return
	
Label_989:
	var_365_int = 40210; // 0x3dd PushI
	var_366_bool = var_18_object == var_365_int; // 0x3de Eq
	if(var_366_bool == 0) goto Label_1012; // 0x3df JumpB
	var_367_string = ""; // 0x3e0 PushV
	var_367_string = "Neutral"; // 0x3e1 MovS
	func_323(var_19_bool, var_367_string); // 0x3e2 NEW_2
	var_368_int = 538327; // 0x3e4 PushI
	SetMessage(var_368_int); // 0x3e5 TObjFunc
	ClearReplies(); // 0x3e7 TObjFunc
	var_369_int = 538328; // 0x3e9 PushI
	var_370_int = -1; // 0x3ea PushI
	var_371_int = 40211; // 0x3eb PushI
	AddReply(var_369_int, var_370_int, var_371_int); // 0x3ec TObjFunc
	var_372_int = 538329; // 0x3ee PushI
	var_373_int = -1; // 0x3ef PushI
	var_374_int = 40212; // 0x3f0 PushI
	AddReply(var_372_int, var_373_int, var_374_int); // 0x3f1 TObjFunc
	return 0; // 0x3f3 Return
	
Label_1012:
	var_375_int = 40192; // 0x3f4 PushI
	var_376_bool = var_18_object == var_375_int; // 0x3f5 Eq
	if(var_376_bool == 0) goto Label_1015; // 0x3f6 JumpB
	
Label_1015:
	var_377_int = 40194; // 0x3f7 PushI
	var_378_bool = var_18_object == var_377_int; // 0x3f8 Eq
	if(var_378_bool == 0) goto Label_1038; // 0x3f9 JumpB
	var_379_string = ""; // 0x3fa PushV
	var_379_string = "Neutral"; // 0x3fb MovS
	func_323(var_19_bool, var_379_string); // 0x3fc NEW_2
	var_380_int = 538311; // 0x3fe PushI
	SetMessage(var_380_int); // 0x3ff TObjFunc
	ClearReplies(); // 0x401 TObjFunc
	var_381_int = 538312; // 0x403 PushI
	var_382_int = 40196; // 0x404 PushI
	var_383_int = 40195; // 0x405 PushI
	AddReply(var_381_int, var_382_int, var_383_int); // 0x406 TObjFunc
	var_384_int = 538316; // 0x408 PushI
	var_385_int = 40200; // 0x409 PushI
	var_386_int = 40199; // 0x40a PushI
	AddReply(var_384_int, var_385_int, var_386_int); // 0x40b TObjFunc
	return 0; // 0x40d Return
	
Label_1038:
	var_387_int = 40200; // 0x40e PushI
	var_388_bool = var_18_object == var_387_int; // 0x40f Eq
	if(var_388_bool == 0) goto Label_1056; // 0x410 JumpB
	var_389_string = ""; // 0x411 PushV
	var_389_string = "Neutral"; // 0x412 MovS
	func_323(var_19_bool, var_389_string); // 0x413 NEW_2
	var_390_int = 538317; // 0x415 PushI
	SetMessage(var_390_int); // 0x416 TObjFunc
	ClearReplies(); // 0x418 TObjFunc
	var_391_int = 538318; // 0x41a PushI
	var_392_int = 40202; // 0x41b PushI
	var_393_int = 40201; // 0x41c PushI
	AddReply(var_391_int, var_392_int, var_393_int); // 0x41d TObjFunc
	return 0; // 0x41f Return
	
Label_1056:
	var_394_int = 40202; // 0x420 PushI
	var_395_bool = var_18_object == var_394_int; // 0x421 Eq
	if(var_395_bool == 0) goto Label_1079; // 0x422 JumpB
	var_396_string = ""; // 0x423 PushV
	var_396_string = "Neutral"; // 0x424 MovS
	func_323(var_19_bool, var_396_string); // 0x425 NEW_2
	var_397_int = 538319; // 0x427 PushI
	SetMessage(var_397_int); // 0x428 TObjFunc
	ClearReplies(); // 0x42a TObjFunc
	var_398_int = 538320; // 0x42c PushI
	var_399_int = -1; // 0x42d PushI
	var_400_int = 40203; // 0x42e PushI
	AddReply(var_398_int, var_399_int, var_400_int); // 0x42f TObjFunc
	var_401_int = 538321; // 0x431 PushI
	var_402_int = -1; // 0x432 PushI
	var_403_int = 40204; // 0x433 PushI
	AddReply(var_401_int, var_402_int, var_403_int); // 0x434 TObjFunc
	return 0; // 0x436 Return
	
Label_1079:
	var_404_int = 40196; // 0x437 PushI
	var_405_bool = var_18_object == var_404_int; // 0x438 Eq
	if(var_405_bool == 0) goto Label_1102; // 0x439 JumpB
	var_406_string = ""; // 0x43a PushV
	var_406_string = "Neutral"; // 0x43b MovS
	func_323(var_19_bool, var_406_string); // 0x43c NEW_2
	var_407_int = 538313; // 0x43e PushI
	SetMessage(var_407_int); // 0x43f TObjFunc
	ClearReplies(); // 0x441 TObjFunc
	var_408_int = 538314; // 0x443 PushI
	var_409_int = -1; // 0x444 PushI
	var_410_int = 40197; // 0x445 PushI
	AddReply(var_408_int, var_409_int, var_410_int); // 0x446 TObjFunc
	var_411_int = 538315; // 0x448 PushI
	var_412_int = -1; // 0x449 PushI
	var_413_int = 40198; // 0x44a PushI
	AddReply(var_411_int, var_412_int, var_413_int); // 0x44b TObjFunc
	return 0; // 0x44d Return
	
Label_1102:
	var_414_int = 40174; // 0x44e PushI
	var_415_bool = var_18_object == var_414_int; // 0x44f Eq
	if(var_415_bool == 0) goto Label_1105; // 0x450 JumpB
	
Label_1105:
	var_416_int = 40186; // 0x451 PushI
	var_417_bool = var_18_object == var_416_int; // 0x452 Eq
	if(var_417_bool == 0) goto Label_1123; // 0x453 JumpB
	var_418_string = ""; // 0x454 PushV
	var_418_string = "Neutral"; // 0x455 MovS
	func_323(var_19_bool, var_418_string); // 0x456 NEW_2
	var_419_int = 538303; // 0x458 PushI
	SetMessage(var_419_int); // 0x459 TObjFunc
	ClearReplies(); // 0x45b TObjFunc
	var_420_int = 538304; // 0x45d PushI
	var_421_int = 40188; // 0x45e PushI
	var_422_int = 40187; // 0x45f PushI
	AddReply(var_420_int, var_421_int, var_422_int); // 0x460 TObjFunc
	return 0; // 0x462 Return
	
Label_1123:
	var_423_int = 40188; // 0x463 PushI
	var_424_bool = var_18_object == var_423_int; // 0x464 Eq
	if(var_424_bool == 0) goto Label_1146; // 0x465 JumpB
	var_425_string = ""; // 0x466 PushV
	var_425_string = "Neutral"; // 0x467 MovS
	func_323(var_19_bool, var_425_string); // 0x468 NEW_2
	var_426_int = 538305; // 0x46a PushI
	SetMessage(var_426_int); // 0x46b TObjFunc
	ClearReplies(); // 0x46d TObjFunc
	var_427_int = 538306; // 0x46f PushI
	var_428_int = -1; // 0x470 PushI
	var_429_int = 40189; // 0x471 PushI
	AddReply(var_427_int, var_428_int, var_429_int); // 0x472 TObjFunc
	var_430_int = 538307; // 0x474 PushI
	var_431_int = -1; // 0x475 PushI
	var_432_int = 40190; // 0x476 PushI
	AddReply(var_430_int, var_431_int, var_432_int); // 0x477 TObjFunc
	return 0; // 0x479 Return
	
Label_1146:
	var_433_int = 40176; // 0x47a PushI
	var_434_bool = var_18_object == var_433_int; // 0x47b Eq
	if(var_434_bool == 0) goto Label_1169; // 0x47c JumpB
	var_435_string = ""; // 0x47d PushV
	var_435_string = "Neutral"; // 0x47e MovS
	func_323(var_19_bool, var_435_string); // 0x47f NEW_2
	var_436_int = 538294; // 0x481 PushI
	SetMessage(var_436_int); // 0x482 TObjFunc
	ClearReplies(); // 0x484 TObjFunc
	var_437_int = 538295; // 0x486 PushI
	var_438_int = 40178; // 0x487 PushI
	var_439_int = 40177; // 0x488 PushI
	AddReply(var_437_int, var_438_int, var_439_int); // 0x489 TObjFunc
	var_440_int = 538299; // 0x48b PushI
	var_441_int = 40182; // 0x48c PushI
	var_442_int = 40181; // 0x48d PushI
	AddReply(var_440_int, var_441_int, var_442_int); // 0x48e TObjFunc
	return 0; // 0x490 Return
	
Label_1169:
	var_443_int = 40182; // 0x491 PushI
	var_444_bool = var_18_object == var_443_int; // 0x492 Eq
	if(var_444_bool == 0) goto Label_1187; // 0x493 JumpB
	var_445_string = ""; // 0x494 PushV
	var_445_string = "Neutral"; // 0x495 MovS
	func_323(var_19_bool, var_445_string); // 0x496 NEW_2
	var_446_int = 538300; // 0x498 PushI
	SetMessage(var_446_int); // 0x499 TObjFunc
	ClearReplies(); // 0x49b TObjFunc
	var_447_int = 538301; // 0x49d PushI
	var_448_int = 40178; // 0x49e PushI
	var_449_int = 40183; // 0x49f PushI
	AddReply(var_447_int, var_448_int, var_449_int); // 0x4a0 TObjFunc
	return 0; // 0x4a2 Return
	
Label_1187:
	var_450_int = 40178; // 0x4a3 PushI
	var_451_bool = var_18_object == var_450_int; // 0x4a4 Eq
	if(var_451_bool == 0) goto Label_1215; // 0x4a5 JumpB
	var_452_string = ""; // 0x4a6 PushV
	var_452_string = "Neutral"; // 0x4a7 MovS
	func_323(var_19_bool, var_452_string); // 0x4a8 NEW_2
	var_453_int = 538296; // 0x4aa PushI
	SetMessage(var_453_int); // 0x4ab TObjFunc
	ClearReplies(); // 0x4ad TObjFunc
	var_454_int = 538297; // 0x4af PushI
	var_455_int = -1; // 0x4b0 PushI
	var_456_int = 40179; // 0x4b1 PushI
	AddReply(var_454_int, var_455_int, var_456_int); // 0x4b2 TObjFunc
	var_457_bool = 0; var_458_object = Obj(); // 0x4b4 PushV
	var_458_object = var_1_object; // 0x4b5 MovT
	func_4414(var_458_object); // 0x4b6 NEW_2
	if(var_457_bool == 0) goto Label_1214; // 0x4b8 JumpB
	var_459_int = 538298; // 0x4b9 PushI
	var_460_int = -1; // 0x4ba PushI
	var_461_int = 40180; // 0x4bb PushI
	AddReply(var_459_int, var_460_int, var_461_int); // 0x4bc TObjFunc
	
Label_1214:
	return 0; // 0x4be Return
	
Label_1215:
	var_462_int = 40155; // 0x4bf PushI
	var_463_bool = var_18_object == var_462_int; // 0x4c0 Eq
	if(var_463_bool == 0) goto Label_1218; // 0x4c1 JumpB
	
Label_1218:
	var_464_int = 40157; // 0x4c2 PushI
	var_465_bool = var_18_object == var_464_int; // 0x4c3 Eq
	if(var_465_bool == 0) goto Label_1241; // 0x4c4 JumpB
	var_466_string = ""; // 0x4c5 PushV
	var_466_string = "Neutral"; // 0x4c6 MovS
	func_323(var_19_bool, var_466_string); // 0x4c7 NEW_2
	var_467_int = 538275; // 0x4c9 PushI
	SetMessage(var_467_int); // 0x4ca TObjFunc
	ClearReplies(); // 0x4cc TObjFunc
	var_468_int = 538276; // 0x4ce PushI
	var_469_int = 40159; // 0x4cf PushI
	var_470_int = 40158; // 0x4d0 PushI
	AddReply(var_468_int, var_469_int, var_470_int); // 0x4d1 TObjFunc
	var_471_int = 538288; // 0x4d3 PushI
	var_472_int = -1; // 0x4d4 PushI
	var_473_int = 40170; // 0x4d5 PushI
	AddReply(var_471_int, var_472_int, var_473_int); // 0x4d6 TObjFunc
	return 0; // 0x4d8 Return
	
Label_1241:
	var_474_int = 40159; // 0x4d9 PushI
	var_475_bool = var_18_object == var_474_int; // 0x4da Eq
	if(var_475_bool == 0) goto Label_1259; // 0x4db JumpB
	var_476_string = ""; // 0x4dc PushV
	var_476_string = "Neutral"; // 0x4dd MovS
	func_323(var_19_bool, var_476_string); // 0x4de NEW_2
	var_477_int = 538277; // 0x4e0 PushI
	SetMessage(var_477_int); // 0x4e1 TObjFunc
	ClearReplies(); // 0x4e3 TObjFunc
	var_478_int = 538278; // 0x4e5 PushI
	var_479_int = 40161; // 0x4e6 PushI
	var_480_int = 40160; // 0x4e7 PushI
	AddReply(var_478_int, var_479_int, var_480_int); // 0x4e8 TObjFunc
	return 0; // 0x4ea Return
	
Label_1259:
	var_481_int = 40161; // 0x4eb PushI
	var_482_bool = var_18_object == var_481_int; // 0x4ec Eq
	if(var_482_bool == 0) goto Label_1282; // 0x4ed JumpB
	var_483_string = ""; // 0x4ee PushV
	var_483_string = "Neutral"; // 0x4ef MovS
	func_323(var_19_bool, var_483_string); // 0x4f0 NEW_2
	var_484_int = 538279; // 0x4f2 PushI
	SetMessage(var_484_int); // 0x4f3 TObjFunc
	ClearReplies(); // 0x4f5 TObjFunc
	var_485_int = 538280; // 0x4f7 PushI
	var_486_int = 40163; // 0x4f8 PushI
	var_487_int = 40162; // 0x4f9 PushI
	AddReply(var_485_int, var_486_int, var_487_int); // 0x4fa TObjFunc
	var_488_int = 538284; // 0x4fc PushI
	var_489_int = 40167; // 0x4fd PushI
	var_490_int = 40166; // 0x4fe PushI
	AddReply(var_488_int, var_489_int, var_490_int); // 0x4ff TObjFunc
	return 0; // 0x501 Return
	
Label_1282:
	var_491_int = 40167; // 0x502 PushI
	var_492_bool = var_18_object == var_491_int; // 0x503 Eq
	if(var_492_bool == 0) goto Label_1305; // 0x504 JumpB
	var_493_string = ""; // 0x505 PushV
	var_493_string = "Neutral"; // 0x506 MovS
	func_323(var_19_bool, var_493_string); // 0x507 NEW_2
	var_494_int = 538285; // 0x509 PushI
	SetMessage(var_494_int); // 0x50a TObjFunc
	ClearReplies(); // 0x50c TObjFunc
	var_495_int = 538286; // 0x50e PushI
	var_496_int = -1; // 0x50f PushI
	var_497_int = 40168; // 0x510 PushI
	AddReply(var_495_int, var_496_int, var_497_int); // 0x511 TObjFunc
	var_498_int = 538287; // 0x513 PushI
	var_499_int = -1; // 0x514 PushI
	var_500_int = 40169; // 0x515 PushI
	AddReply(var_498_int, var_499_int, var_500_int); // 0x516 TObjFunc
	return 0; // 0x518 Return
	
Label_1305:
	var_501_int = 40163; // 0x519 PushI
	var_502_bool = var_18_object == var_501_int; // 0x51a Eq
	if(var_502_bool == 0) goto Label_1328; // 0x51b JumpB
	var_503_string = ""; // 0x51c PushV
	var_503_string = "Neutral"; // 0x51d MovS
	func_323(var_19_bool, var_503_string); // 0x51e NEW_2
	var_504_int = 538281; // 0x520 PushI
	SetMessage(var_504_int); // 0x521 TObjFunc
	ClearReplies(); // 0x523 TObjFunc
	var_505_int = 538282; // 0x525 PushI
	var_506_int = -1; // 0x526 PushI
	var_507_int = 40164; // 0x527 PushI
	AddReply(var_505_int, var_506_int, var_507_int); // 0x528 TObjFunc
	var_508_int = 538283; // 0x52a PushI
	var_509_int = -1; // 0x52b PushI
	var_510_int = 40165; // 0x52c PushI
	AddReply(var_508_int, var_509_int, var_510_int); // 0x52d TObjFunc
	return 0; // 0x52f Return
	
Label_1328:
	var_511_int = 40135; // 0x530 PushI
	var_512_bool = var_18_object == var_511_int; // 0x531 Eq
	if(var_512_bool == 0) goto Label_1331; // 0x532 JumpB
	
Label_1331:
	var_513_int = 40137; // 0x533 PushI
	var_514_bool = var_18_object == var_513_int; // 0x534 Eq
	if(var_514_bool == 0) goto Label_1359; // 0x535 JumpB
	var_515_string = ""; // 0x536 PushV
	var_515_string = "Neutral"; // 0x537 MovS
	func_323(var_19_bool, var_515_string); // 0x538 NEW_2
	var_516_int = 538256; // 0x53a PushI
	SetMessage(var_516_int); // 0x53b TObjFunc
	ClearReplies(); // 0x53d TObjFunc
	var_517_int = 538257; // 0x53f PushI
	var_518_int = 40139; // 0x540 PushI
	var_519_int = 40138; // 0x541 PushI
	AddReply(var_517_int, var_518_int, var_519_int); // 0x542 TObjFunc
	var_520_int = 538269; // 0x544 PushI
	var_521_int = 40139; // 0x545 PushI
	var_522_int = 40150; // 0x546 PushI
	AddReply(var_520_int, var_521_int, var_522_int); // 0x547 TObjFunc
	var_523_int = 538270; // 0x549 PushI
	var_524_int = -1; // 0x54a PushI
	var_525_int = 40152; // 0x54b PushI
	AddReply(var_523_int, var_524_int, var_525_int); // 0x54c TObjFunc
	return 0; // 0x54e Return
	
Label_1359:
	var_526_int = 40139; // 0x54f PushI
	var_527_bool = var_18_object == var_526_int; // 0x550 Eq
	if(var_527_bool == 0) goto Label_1377; // 0x551 JumpB
	var_528_string = ""; // 0x552 PushV
	var_528_string = "Neutral"; // 0x553 MovS
	func_323(var_19_bool, var_528_string); // 0x554 NEW_2
	var_529_int = 538258; // 0x556 PushI
	SetMessage(var_529_int); // 0x557 TObjFunc
	ClearReplies(); // 0x559 TObjFunc
	var_530_int = 538259; // 0x55b PushI
	var_531_int = 40141; // 0x55c PushI
	var_532_int = 40140; // 0x55d PushI
	AddReply(var_530_int, var_531_int, var_532_int); // 0x55e TObjFunc
	return 0; // 0x560 Return
	
Label_1377:
	var_533_int = 40141; // 0x561 PushI
	var_534_bool = var_18_object == var_533_int; // 0x562 Eq
	if(var_534_bool == 0) goto Label_1400; // 0x563 JumpB
	var_535_string = ""; // 0x564 PushV
	var_535_string = "Neutral"; // 0x565 MovS
	func_323(var_19_bool, var_535_string); // 0x566 NEW_2
	var_536_int = 538260; // 0x568 PushI
	SetMessage(var_536_int); // 0x569 TObjFunc
	ClearReplies(); // 0x56b TObjFunc
	var_537_int = 538261; // 0x56d PushI
	var_538_int = 40143; // 0x56e PushI
	var_539_int = 40142; // 0x56f PushI
	AddReply(var_537_int, var_538_int, var_539_int); // 0x570 TObjFunc
	var_540_int = 538265; // 0x572 PushI
	var_541_int = 40147; // 0x573 PushI
	var_542_int = 40146; // 0x574 PushI
	AddReply(var_540_int, var_541_int, var_542_int); // 0x575 TObjFunc
	return 0; // 0x577 Return
	
Label_1400:
	var_543_int = 40147; // 0x578 PushI
	var_544_bool = var_18_object == var_543_int; // 0x579 Eq
	if(var_544_bool == 0) goto Label_1423; // 0x57a JumpB
	var_545_string = ""; // 0x57b PushV
	var_545_string = "Neutral"; // 0x57c MovS
	func_323(var_19_bool, var_545_string); // 0x57d NEW_2
	var_546_int = 538266; // 0x57f PushI
	SetMessage(var_546_int); // 0x580 TObjFunc
	ClearReplies(); // 0x582 TObjFunc
	var_547_int = 538267; // 0x584 PushI
	var_548_int = -1; // 0x585 PushI
	var_549_int = 40148; // 0x586 PushI
	AddReply(var_547_int, var_548_int, var_549_int); // 0x587 TObjFunc
	var_550_int = 538268; // 0x589 PushI
	var_551_int = -1; // 0x58a PushI
	var_552_int = 40149; // 0x58b PushI
	AddReply(var_550_int, var_551_int, var_552_int); // 0x58c TObjFunc
	return 0; // 0x58e Return
	
Label_1423:
	var_553_int = 40143; // 0x58f PushI
	var_554_bool = var_18_object == var_553_int; // 0x590 Eq
	if(var_554_bool == 0) goto Label_1446; // 0x591 JumpB
	var_555_string = ""; // 0x592 PushV
	var_555_string = "Neutral"; // 0x593 MovS
	func_323(var_19_bool, var_555_string); // 0x594 NEW_2
	var_556_int = 538262; // 0x596 PushI
	SetMessage(var_556_int); // 0x597 TObjFunc
	ClearReplies(); // 0x599 TObjFunc
	var_557_int = 538263; // 0x59b PushI
	var_558_int = -1; // 0x59c PushI
	var_559_int = 40144; // 0x59d PushI
	AddReply(var_557_int, var_558_int, var_559_int); // 0x59e TObjFunc
	var_560_int = 538264; // 0x5a0 PushI
	var_561_int = -1; // 0x5a1 PushI
	var_562_int = 40145; // 0x5a2 PushI
	AddReply(var_560_int, var_561_int, var_562_int); // 0x5a3 TObjFunc
	return 0; // 0x5a5 Return
	
Label_1446:
	var_563_int = 40114; // 0x5a6 PushI
	var_564_bool = var_18_object == var_563_int; // 0x5a7 Eq
	if(var_564_bool == 0) goto Label_1469; // 0x5a8 JumpB
	var_565_string = ""; // 0x5a9 PushV
	var_565_string = "Neutral"; // 0x5aa MovS
	func_323(var_19_bool, var_565_string); // 0x5ab NEW_2
	var_566_int = 538236; // 0x5ad PushI
	SetMessage(var_566_int); // 0x5ae TObjFunc
	ClearReplies(); // 0x5b0 TObjFunc
	var_567_int = 538237; // 0x5b2 PushI
	var_568_int = 40116; // 0x5b3 PushI
	var_569_int = 40115; // 0x5b4 PushI
	AddReply(var_567_int, var_568_int, var_569_int); // 0x5b5 TObjFunc
	var_570_int = 538252; // 0x5b7 PushI
	var_571_int = -1; // 0x5b8 PushI
	var_572_int = 40133; // 0x5b9 PushI
	AddReply(var_570_int, var_571_int, var_572_int); // 0x5ba TObjFunc
	return 0; // 0x5bc Return
	
Label_1469:
	var_573_int = 40116; // 0x5bd PushI
	var_574_bool = var_18_object == var_573_int; // 0x5be Eq
	if(var_574_bool == 0) goto Label_1492; // 0x5bf JumpB
	var_575_string = ""; // 0x5c0 PushV
	var_575_string = "Neutral"; // 0x5c1 MovS
	func_323(var_19_bool, var_575_string); // 0x5c2 NEW_2
	var_576_int = 538238; // 0x5c4 PushI
	SetMessage(var_576_int); // 0x5c5 TObjFunc
	ClearReplies(); // 0x5c7 TObjFunc
	var_577_int = 538239; // 0x5c9 PushI
	var_578_int = 40118; // 0x5ca PushI
	var_579_int = 40117; // 0x5cb PushI
	AddReply(var_577_int, var_578_int, var_579_int); // 0x5cc TObjFunc
	var_580_int = 538251; // 0x5ce PushI
	var_581_int = 40120; // 0x5cf PushI
	var_582_int = 40131; // 0x5d0 PushI
	AddReply(var_580_int, var_581_int, var_582_int); // 0x5d1 TObjFunc
	return 0; // 0x5d3 Return
	
Label_1492:
	var_583_int = 40118; // 0x5d4 PushI
	var_584_bool = var_18_object == var_583_int; // 0x5d5 Eq
	if(var_584_bool == 0) goto Label_1515; // 0x5d6 JumpB
	var_585_string = ""; // 0x5d7 PushV
	var_585_string = "Neutral"; // 0x5d8 MovS
	func_323(var_19_bool, var_585_string); // 0x5d9 NEW_2
	var_586_int = 538240; // 0x5db PushI
	SetMessage(var_586_int); // 0x5dc TObjFunc
	ClearReplies(); // 0x5de TObjFunc
	var_587_int = 538241; // 0x5e0 PushI
	var_588_int = 40120; // 0x5e1 PushI
	var_589_int = 40119; // 0x5e2 PushI
	AddReply(var_587_int, var_588_int, var_589_int); // 0x5e3 TObjFunc
	var_590_int = 538250; // 0x5e5 PushI
	var_591_int = 40120; // 0x5e6 PushI
	var_592_int = 40129; // 0x5e7 PushI
	AddReply(var_590_int, var_591_int, var_592_int); // 0x5e8 TObjFunc
	return 0; // 0x5ea Return
	
Label_1515:
	var_593_int = 40120; // 0x5eb PushI
	var_594_bool = var_18_object == var_593_int; // 0x5ec Eq
	if(var_594_bool == 0) goto Label_1538; // 0x5ed JumpB
	var_595_string = ""; // 0x5ee PushV
	var_595_string = "Neutral"; // 0x5ef MovS
	func_323(var_19_bool, var_595_string); // 0x5f0 NEW_2
	var_596_int = 538242; // 0x5f2 PushI
	SetMessage(var_596_int); // 0x5f3 TObjFunc
	ClearReplies(); // 0x5f5 TObjFunc
	var_597_int = 538243; // 0x5f7 PushI
	var_598_int = 40122; // 0x5f8 PushI
	var_599_int = 40121; // 0x5f9 PushI
	AddReply(var_597_int, var_598_int, var_599_int); // 0x5fa TObjFunc
	var_600_int = 538249; // 0x5fc PushI
	var_601_int = 40124; // 0x5fd PushI
	var_602_int = 40127; // 0x5fe PushI
	AddReply(var_600_int, var_601_int, var_602_int); // 0x5ff TObjFunc
	return 0; // 0x601 Return
	
Label_1538:
	var_603_int = 40122; // 0x602 PushI
	var_604_bool = var_18_object == var_603_int; // 0x603 Eq
	if(var_604_bool == 0) goto Label_1556; // 0x604 JumpB
	var_605_string = ""; // 0x605 PushV
	var_605_string = "Neutral"; // 0x606 MovS
	func_323(var_19_bool, var_605_string); // 0x607 NEW_2
	var_606_int = 538244; // 0x609 PushI
	SetMessage(var_606_int); // 0x60a TObjFunc
	ClearReplies(); // 0x60c TObjFunc
	var_607_int = 538245; // 0x60e PushI
	var_608_int = 40124; // 0x60f PushI
	var_609_int = 40123; // 0x610 PushI
	AddReply(var_607_int, var_608_int, var_609_int); // 0x611 TObjFunc
	return 0; // 0x613 Return
	
Label_1556:
	var_610_int = 40124; // 0x614 PushI
	var_611_bool = var_18_object == var_610_int; // 0x615 Eq
	if(var_611_bool == 0) goto Label_1579; // 0x616 JumpB
	var_612_string = ""; // 0x617 PushV
	var_612_string = "Neutral"; // 0x618 MovS
	func_323(var_19_bool, var_612_string); // 0x619 NEW_2
	var_613_int = 538246; // 0x61b PushI
	SetMessage(var_613_int); // 0x61c TObjFunc
	ClearReplies(); // 0x61e TObjFunc
	var_614_int = 538247; // 0x620 PushI
	var_615_int = -1; // 0x621 PushI
	var_616_int = 40125; // 0x622 PushI
	AddReply(var_614_int, var_615_int, var_616_int); // 0x623 TObjFunc
	var_617_int = 538248; // 0x625 PushI
	var_618_int = -1; // 0x626 PushI
	var_619_int = 40126; // 0x627 PushI
	AddReply(var_617_int, var_618_int, var_619_int); // 0x628 TObjFunc
	return 0; // 0x62a Return
	
Label_1579:
	var_620_int = 40100; // 0x62b PushI
	var_621_bool = var_18_object == var_620_int; // 0x62c Eq
	if(var_621_bool == 0) goto Label_1582; // 0x62d JumpB
	
Label_1582:
	var_622_int = 40102; // 0x62e PushI
	var_623_bool = var_18_object == var_622_int; // 0x62f Eq
	if(var_623_bool == 0) goto Label_1605; // 0x630 JumpB
	var_624_string = ""; // 0x631 PushV
	var_624_string = "Neutral"; // 0x632 MovS
	func_323(var_19_bool, var_624_string); // 0x633 NEW_2
	var_625_int = 538225; // 0x635 PushI
	SetMessage(var_625_int); // 0x636 TObjFunc
	ClearReplies(); // 0x638 TObjFunc
	var_626_int = 538226; // 0x63a PushI
	var_627_int = 40104; // 0x63b PushI
	var_628_int = 40103; // 0x63c PushI
	AddReply(var_626_int, var_627_int, var_628_int); // 0x63d TObjFunc
	var_629_int = 538230; // 0x63f PushI
	var_630_int = 40108; // 0x640 PushI
	var_631_int = 40107; // 0x641 PushI
	AddReply(var_629_int, var_630_int, var_631_int); // 0x642 TObjFunc
	return 0; // 0x644 Return
	
Label_1605:
	var_632_int = 40108; // 0x645 PushI
	var_633_bool = var_18_object == var_632_int; // 0x646 Eq
	if(var_633_bool == 0) goto Label_1628; // 0x647 JumpB
	var_634_string = ""; // 0x648 PushV
	var_634_string = "Neutral"; // 0x649 MovS
	func_323(var_19_bool, var_634_string); // 0x64a NEW_2
	var_635_int = 538231; // 0x64c PushI
	SetMessage(var_635_int); // 0x64d TObjFunc
	ClearReplies(); // 0x64f TObjFunc
	var_636_int = 538232; // 0x651 PushI
	var_637_int = 40104; // 0x652 PushI
	var_638_int = 40109; // 0x653 PushI
	AddReply(var_636_int, var_637_int, var_638_int); // 0x654 TObjFunc
	var_639_int = 538233; // 0x656 PushI
	var_640_int = -1; // 0x657 PushI
	var_641_int = 40111; // 0x658 PushI
	AddReply(var_639_int, var_640_int, var_641_int); // 0x659 TObjFunc
	return 0; // 0x65b Return
	
Label_1628:
	var_642_int = 40104; // 0x65c PushI
	var_643_bool = var_18_object == var_642_int; // 0x65d Eq
	if(var_643_bool == 0) goto Label_1651; // 0x65e JumpB
	var_644_string = ""; // 0x65f PushV
	var_644_string = "Neutral"; // 0x660 MovS
	func_323(var_19_bool, var_644_string); // 0x661 NEW_2
	var_645_int = 538227; // 0x663 PushI
	SetMessage(var_645_int); // 0x664 TObjFunc
	ClearReplies(); // 0x666 TObjFunc
	var_646_int = 538228; // 0x668 PushI
	var_647_int = -1; // 0x669 PushI
	var_648_int = 40105; // 0x66a PushI
	AddReply(var_646_int, var_647_int, var_648_int); // 0x66b TObjFunc
	var_649_int = 538229; // 0x66d PushI
	var_650_int = -1; // 0x66e PushI
	var_651_int = 40106; // 0x66f PushI
	AddReply(var_649_int, var_650_int, var_651_int); // 0x670 TObjFunc
	return 0; // 0x672 Return
	
Label_1651:
	var_652_int = 40089; // 0x673 PushI
	var_653_bool = var_18_object == var_652_int; // 0x674 Eq
	if(var_653_bool == 0) goto Label_1654; // 0x675 JumpB
	
Label_1654:
	var_654_int = 40091; // 0x676 PushI
	var_655_bool = var_18_object == var_654_int; // 0x677 Eq
	if(var_655_bool == 0) goto Label_1677; // 0x678 JumpB
	var_656_string = ""; // 0x679 PushV
	var_656_string = "Neutral"; // 0x67a MovS
	func_323(var_19_bool, var_656_string); // 0x67b NEW_2
	var_657_int = 538214; // 0x67d PushI
	SetMessage(var_657_int); // 0x67e TObjFunc
	ClearReplies(); // 0x680 TObjFunc
	var_658_int = 538215; // 0x682 PushI
	var_659_int = 40093; // 0x683 PushI
	var_660_int = 40092; // 0x684 PushI
	AddReply(var_658_int, var_659_int, var_660_int); // 0x685 TObjFunc
	var_661_int = 538221; // 0x687 PushI
	var_662_int = -1; // 0x688 PushI
	var_663_int = 40098; // 0x689 PushI
	AddReply(var_661_int, var_662_int, var_663_int); // 0x68a TObjFunc
	return 0; // 0x68c Return
	
Label_1677:
	var_664_int = 40093; // 0x68d PushI
	var_665_bool = var_18_object == var_664_int; // 0x68e Eq
	if(var_665_bool == 0) goto Label_1695; // 0x68f JumpB
	var_666_string = ""; // 0x690 PushV
	var_666_string = "Neutral"; // 0x691 MovS
	func_323(var_19_bool, var_666_string); // 0x692 NEW_2
	var_667_int = 538216; // 0x694 PushI
	SetMessage(var_667_int); // 0x695 TObjFunc
	ClearReplies(); // 0x697 TObjFunc
	var_668_int = 538217; // 0x699 PushI
	var_669_int = 40095; // 0x69a PushI
	var_670_int = 40094; // 0x69b PushI
	AddReply(var_668_int, var_669_int, var_670_int); // 0x69c TObjFunc
	return 0; // 0x69e Return
	
Label_1695:
	var_671_int = 40095; // 0x69f PushI
	var_672_bool = var_18_object == var_671_int; // 0x6a0 Eq
	if(var_672_bool == 0) goto Label_1718; // 0x6a1 JumpB
	var_673_string = ""; // 0x6a2 PushV
	var_673_string = "Neutral"; // 0x6a3 MovS
	func_323(var_19_bool, var_673_string); // 0x6a4 NEW_2
	var_674_int = 538218; // 0x6a6 PushI
	SetMessage(var_674_int); // 0x6a7 TObjFunc
	ClearReplies(); // 0x6a9 TObjFunc
	var_675_int = 538219; // 0x6ab PushI
	var_676_int = -1; // 0x6ac PushI
	var_677_int = 40096; // 0x6ad PushI
	AddReply(var_675_int, var_676_int, var_677_int); // 0x6ae TObjFunc
	var_678_int = 538220; // 0x6b0 PushI
	var_679_int = -1; // 0x6b1 PushI
	var_680_int = 40097; // 0x6b2 PushI
	AddReply(var_678_int, var_679_int, var_680_int); // 0x6b3 TObjFunc
	return 0; // 0x6b5 Return
	
Label_1718:
	var_681_int = 45520; // 0x6b6 PushI
	var_682_bool = var_18_object == var_681_int; // 0x6b7 Eq
	if(var_682_bool == 0) goto Label_1721; // 0x6b8 JumpB
	
Label_1721:
	var_683_int = 45524; // 0x6b9 PushI
	var_684_bool = var_18_object == var_683_int; // 0x6ba Eq
	if(var_684_bool == 0) goto Label_1744; // 0x6bb JumpB
	var_685_string = ""; // 0x6bc PushV
	var_685_string = "Neutral"; // 0x6bd MovS
	func_323(var_19_bool, var_685_string); // 0x6be NEW_2
	var_686_int = 543069; // 0x6c0 PushI
	SetMessage(var_686_int); // 0x6c1 TObjFunc
	ClearReplies(); // 0x6c3 TObjFunc
	var_687_int = 543070; // 0x6c5 PushI
	var_688_int = -1; // 0x6c6 PushI
	var_689_int = 45525; // 0x6c7 PushI
	AddReply(var_687_int, var_688_int, var_689_int); // 0x6c8 TObjFunc
	var_690_int = 543071; // 0x6ca PushI
	var_691_int = -1; // 0x6cb PushI
	var_692_int = 45526; // 0x6cc PushI
	AddReply(var_690_int, var_691_int, var_692_int); // 0x6cd TObjFunc
	return 0; // 0x6cf Return
	
Label_1744:
	var_693_int = 45513; // 0x6d0 PushI
	var_694_bool = var_18_object == var_693_int; // 0x6d1 Eq
	if(var_694_bool == 0) goto Label_1747; // 0x6d2 JumpB
	
Label_1747:
	var_695_int = 45498; // 0x6d3 PushI
	var_696_bool = var_18_object == var_695_int; // 0x6d4 Eq
	if(var_696_bool == 0) goto Label_1750; // 0x6d5 JumpB
	
Label_1750:
	var_697_int = 45503; // 0x6d6 PushI
	var_698_bool = var_18_object == var_697_int; // 0x6d7 Eq
	if(var_698_bool == 0) goto Label_1768; // 0x6d8 JumpB
	var_699_string = ""; // 0x6d9 PushV
	var_699_string = "Neutral"; // 0x6da MovS
	func_323(var_19_bool, var_699_string); // 0x6db NEW_2
	var_700_int = 543051; // 0x6dd PushI
	SetMessage(var_700_int); // 0x6de TObjFunc
	ClearReplies(); // 0x6e0 TObjFunc
	var_701_int = 543054; // 0x6e2 PushI
	var_702_int = -1; // 0x6e3 PushI
	var_703_int = 45509; // 0x6e4 PushI
	AddReply(var_701_int, var_702_int, var_703_int); // 0x6e5 TObjFunc
	return 0; // 0x6e7 Return
	
Label_1768:
	var_704_int = 45506; // 0x6e8 PushI
	var_705_bool = var_18_object == var_704_int; // 0x6e9 Eq
	if(var_705_bool == 0) goto Label_1786; // 0x6ea JumpB
	var_706_string = ""; // 0x6eb PushV
	var_706_string = "Neutral"; // 0x6ec MovS
	func_323(var_19_bool, var_706_string); // 0x6ed NEW_2
	var_707_int = 543052; // 0x6ef PushI
	SetMessage(var_707_int); // 0x6f0 TObjFunc
	ClearReplies(); // 0x6f2 TObjFunc
	var_708_int = 543053; // 0x6f4 PushI
	var_709_int = -1; // 0x6f5 PushI
	var_710_int = 45507; // 0x6f6 PushI
	AddReply(var_708_int, var_709_int, var_710_int); // 0x6f7 TObjFunc
	return 0; // 0x6f9 Return
	
Label_1786:
	var_3_string = 1; // 0x6fa TMovB
	var_711_bool = 0; // 0x6fb PushV
	func_5567(var_711_bool); // 0x6fc NEW_2
	if(var_711_bool == 0) goto Label_1794; // 0x6fe JumpB
	lshStopAnimation(); // 0x6ff Func
	goto Label_1796; // 0x701 Jump
	
Label_1796:
	return 0; // 0x704 Return
	
Label_1794:
	StopAnimation(); // 0x702 Func
	
Label_1798:
	return 0; // 0x706 Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_int = 0; var_20_int = 0; // 0x716 PushV
	var_21_int = 0; var_22_object = Obj(); // 0x717 PushV
	var_22_object = var_18_bool; // 0x718 Mov
	func_5343(var_22_object); // 0x719 NEW_2
	var_20_int = var_21_int; // 0x71a Mov
	var_23_int = 0; // 0x71c PushI
	var_24_bool = var_20_int > var_23_int; // 0x71d GT
	if(var_24_bool == 0) goto Label_1827; // 0x71e JumpB
	var_25_object = Obj(); // 0x71f PushV
	var_25_object = var_18_bool; // 0x720 Mov
	func_5346(var_25_object); // 0x721 NEW_2
	
Label_1827:
	return 2; // 0x723 Return
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	func_5352(); // 0x725 NEW_2
	return 0; // 0x727 Return
}


task_2_event_22(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_float, var_8_float, var_9_bool, var_10_bool, var_11_bool, var_12_object, var_13_object, var_14_int, var_15_int, var_16_bool, var_17_float, var_18_int, var_19_bool, var_20_object, var_21_bool)
{
	return 0; // 0x79e Return
}


task_2_event_16(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_string, var_7_bool, var_8_bool, var_9_bool, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	return 0; // 0x7a0 Return
}


task_2_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	return 0; // 0x7a2 Return
}


task_3_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_int = 0; var_20_int = 0; // 0x7bb PushV
	var_21_int = 0; var_22_object = Obj(); // 0x7bc PushV
	var_22_object = var_18_bool; // 0x7bd Mov
	func_5343(var_22_object); // 0x7be NEW_2
	var_20_int = var_21_int; // 0x7bf Mov
	var_23_int = 0; // 0x7c1 PushI
	var_24_bool = var_20_int > var_23_int; // 0x7c2 GT
	if(var_24_bool == 0) goto Label_1998; // 0x7c3 JumpB
	var_25_int = 1; // 0x7c4 PushI
	var_26_bool = var_20_int > var_25_int; // 0x7c5 GT
	if(var_26_bool == 0) goto Label_1994; // 0x7c6 JumpB
	func_2166(var_20_int); // 0x7c8 NEW_2
	
Label_1994:
	var_28_object = Obj(); // 0x7ca PushV
	var_28_object = var_18_bool; // 0x7cb Mov
	func_5346(var_28_object); // 0x7cc NEW_2
	
Label_1998:
	return 2; // 0x7ce Return
}


task_3_event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_int = 0; var_20_int = 0; // 0x7cf PushV
	var_21_object = Obj(); // 0x7d0 PushV
	var_21_object = var_18_bool; // 0x7d1 Mov
	func_5074(var_21_object); // 0x7d2 NEW_2
	var_30_int = 0; var_31_object = Obj(); // 0x7d4 PushV
	var_31_object = var_18_bool; // 0x7d5 Mov
	func_5157(var_30_int, var_31_object); // 0x7d6 NEW_2
	var_20_int = var_30_int; // 0x7d7 Mov
	var_66_int = 0; // 0x7d9 PushI
	var_67_bool = var_20_int > var_66_int; // 0x7da GT
	if(var_67_bool == 0) goto Label_2022; // 0x7db JumpB
	var_68_int = 1; // 0x7dc PushI
	var_69_bool = var_20_int > var_68_int; // 0x7dd GT
	if(var_69_bool == 0) goto Label_2018; // 0x7de JumpB
	func_2166(var_20_int); // 0x7e0 NEW_2
	
Label_2018:
	var_71_object = Obj(); // 0x7e2 PushV
	var_71_object = var_18_bool; // 0x7e3 Mov
	func_5167(var_71_object); // 0x7e4 NEW_2
	
Label_2022:
	return 2; // 0x7e6 Return
}


task_3_event_30(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_bool, var_11_object, var_12_object, var_13_int, var_14_int, var_15_bool, var_16_float, var_17_int, var_18_bool, var_19_object, var_20_bool)
{
	var_21_int = 0; var_22_int = 0; // 0x7e7 PushV
	var_23_bool = 0; var_24_object = Obj(); var_25_object = Obj(); var_26_bool = 0; // 0x7e8 PushV
	var_24_object = var_18_bool; // 0x7e9 Mov
	var_25_object = var_19_object; // 0x7ea Mov
	var_26_bool = var_20_bool; // 0x7eb Mov
	func_5596(var_23_bool, var_24_object, var_25_object, var_26_bool); // 0x7ec NEW_2
	if(var_23_bool == 0) goto Label_2050; // 0x7ee JumpB
	var_85_int = 0; var_86_object = Obj(); var_87_bool = 0; // 0x7ef PushV
	var_86_object = var_18_bool; // 0x7f0 Mov
	var_87_bool = var_20_bool; // 0x7f1 Mov
	func_5250(var_86_object, var_87_bool); // 0x7f2 NEW_2
	var_22_int = var_85_int; // 0x7f3 Mov
	var_118_int = 0; // 0x7f5 PushI
	var_119_bool = var_22_int > var_118_int; // 0x7f6 GT
	if(var_119_bool == 0) goto Label_2050; // 0x7f7 JumpB
	var_120_int = 1; // 0x7f8 PushI
	var_121_bool = var_22_int > var_120_int; // 0x7f9 GT
	if(var_121_bool == 0) goto Label_2046; // 0x7fa JumpB
	func_2166(var_22_int); // 0x7fc NEW_2
	
Label_2046:
	var_123_object = Obj(); // 0x7fe PushV
	var_123_object = var_18_bool; // 0x7ff Mov
	func_5257(var_123_object); // 0x800 NEW_2
	
Label_2050:
	return 2; // 0x802 Return
}


task_3_event_40(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_int = 0; var_20_int = 0; // 0x803 PushV
	var_21_int = 0; var_22_object = Obj(); // 0x804 PushV
	var_22_object = var_18_bool; // 0x805 Mov
	func_5292(var_22_object); // 0x806 NEW_2
	var_20_int = var_21_int; // 0x807 Mov
	var_23_int = 0; // 0x809 PushI
	var_24_bool = var_20_int > var_23_int; // 0x80a GT
	if(var_24_bool == 0) goto Label_2070; // 0x80b JumpB
	var_25_int = 1; // 0x80c PushI
	var_26_bool = var_20_int > var_25_int; // 0x80d GT
	if(var_26_bool == 0) goto Label_2066; // 0x80e JumpB
	func_2166(var_20_int); // 0x810 NEW_2
	
Label_2066:
	var_28_object = Obj(); // 0x812 PushV
	var_28_object = var_18_bool; // 0x813 Mov
	func_5295(); // 0x814 NEW_2
	
Label_2070:
	return 2; // 0x816 Return
}


task_3_event_42(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_string, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_int = 0; var_21_int = 0; // 0x817 PushV
	var_22_bool = 0; var_23_object = Obj(); var_24_string = ""; // 0x818 PushV
	var_23_object = var_18_object; // 0x819 Mov
	var_24_string = var_19_bool; // 0x81a Mov
	func_4988(var_22_bool, var_23_object, var_24_string); // 0x81b NEW_2
	if(var_22_bool == 0) goto Label_2087; // 0x81d JumpB
	func_2166(var_21_int); // 0x81f NEW_2
	var_51_object = Obj(); var_52_string = ""; // 0x821 PushV
	var_51_object = var_18_object; // 0x822 Mov
	var_52_string = var_19_bool; // 0x823 Mov
	func_5020(var_51_object, var_52_string); // 0x824 NEW_2
	goto Label_2107; // 0x826 Jump
	
Label_2107:
	return 2; // 0x83b Return
	
Label_2087:
	var_127_int = 0; var_128_string = ""; var_129_object = Obj(); // 0x827 PushV
	var_128_string = var_19_bool; // 0x828 Mov
	var_129_object = var_18_object; // 0x829 Mov
	func_5297(var_127_int, var_128_string, var_129_object); // 0x82a NEW_2
	var_21_int = var_127_int; // 0x82b Mov
	var_171_int = 0; // 0x82d PushI
	var_172_bool = var_21_int > var_171_int; // 0x82e GT
	if(var_172_bool == 0) goto Label_2107; // 0x82f JumpB
	var_173_int = 1; // 0x830 PushI
	var_174_bool = var_21_int > var_173_int; // 0x831 GT
	if(var_174_bool == 0) goto Label_2102; // 0x832 JumpB
	func_2166(var_21_int); // 0x834 NEW_2
	
Label_2102:
	var_175_string = ""; var_176_object = Obj(); // 0x836 PushV
	var_175_string = var_19_bool; // 0x837 Mov
	var_176_object = var_18_object; // 0x838 Mov
	func_5309(var_175_string, var_176_object); // 0x839 NEW_2
}


task_3_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_string, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_bool = 0; var_20_string = ""; // 0x83d PushV
	var_20_string = var_18_bool; // 0x83e Mov
	func_5087(var_19_bool, var_20_string); // 0x83f NEW_2
	if(var_19_bool == 0) goto Label_2121; // 0x841 JumpB
	func_2166(var_18_bool); // 0x843 NEW_2
	var_29_string = ""; // 0x845 PushV
	var_29_string = var_18_bool; // 0x846 Mov
	func_5103(var_29_string); // 0x847 NEW_2
	
Label_2121:
	return 0; // 0x849 Return
}


task_3_event_1(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_bool = 0; var_20_object = Obj(); // 0x84b PushV
	var_20_object = var_18_bool; // 0x84c Mov
	func_5045(var_19_bool, var_20_object); // 0x84d NEW_2
	if(var_19_bool == 0) goto Label_2136; // 0x84f JumpB
	func_2166(var_18_bool); // 0x851 NEW_2
	var_32_object = Obj(); // 0x853 PushV
	var_32_object = var_18_bool; // 0x854 Mov
	func_5068(var_32_object); // 0x855 NEW_2
	goto Label_2140; // 0x857 Jump
	
Label_2140:
	return 0; // 0x85c Return
	
Label_2136:
	var_34_object = Obj(); // 0x858 PushV
	var_34_object = var_18_bool; // 0x859 Mov
	func_2191(var_18_bool, var_34_object); // 0x85a NEW_2
}


task_3_event_3(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_object = Obj(); // 0x85e PushV
	var_19_object = var_18_bool; // 0x85f Mov
	func_2191(var_18_bool, var_19_object); // 0x860 NEW_2
	return 0; // 0x862 Return
}


task_3_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_int, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_int = 110; // 0x864 PushI
	var_20_bool = var_18_bool != var_19_int; // 0x865 Neq
	if(var_20_bool == 0) goto Label_2152; // 0x866 JumpB
	return 0; // 0x867 Return
	
Label_2152:
	var_2_object = 0; // 0x868 TMovB
	var_21_int = 110; // 0x869 PushI
	KillTimer(var_21_int); // 0x86a Func
	ResetAAS(); // 0x86c Func
	return 0; // 0x86e Return
}


task_3_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	func_2166(var_17_bool); // 0x870 NEW_2
	func_5352(); // 0x873 NEW_2
	return 0; // 0x875 Return
}


task_3_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	func_2166(var_18_bool); // 0x888 NEW_2
	var_20_object = Obj(); // 0x88a PushV
	var_20_object = var_18_bool; // 0x88b Mov
	func_4964(); // 0x88c NEW_2
	return 0; // 0x88e Return
}


task_3_event_10(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	RequestClearPath(var_18_bool); // 0x8f8 Func
	return 0; // 0x8fa Return
}


task_3_event_28(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	Stop(); // 0x8fb Func
	return 0; // 0x8fd Return
}


task_4_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_int = 0; var_20_int = 0; // 0x914 PushV
	var_21_int = 0; var_22_object = Obj(); // 0x915 PushV
	var_22_object = var_18_bool; // 0x916 Mov
	func_5343(var_22_object); // 0x917 NEW_2
	var_20_int = var_21_int; // 0x918 Mov
	var_23_int = 0; // 0x91a PushI
	var_24_bool = var_20_int > var_23_int; // 0x91b GT
	if(var_24_bool == 0) goto Label_2343; // 0x91c JumpB
	var_25_int = 1; // 0x91d PushI
	var_26_bool = var_20_int > var_25_int; // 0x91e GT
	if(var_26_bool == 0) goto Label_2339; // 0x91f JumpB
	func_2569(); // 0x921 NEW_2
	
Label_2339:
	var_27_object = Obj(); // 0x923 PushV
	var_27_object = var_18_bool; // 0x924 Mov
	func_5346(var_27_object); // 0x925 NEW_2
	
Label_2343:
	return 2; // 0x927 Return
}


task_4_event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_int = 0; var_20_int = 0; // 0x928 PushV
	var_21_object = Obj(); // 0x929 PushV
	var_21_object = var_18_bool; // 0x92a Mov
	func_5074(var_21_object); // 0x92b NEW_2
	var_30_int = 0; var_31_object = Obj(); // 0x92d PushV
	var_31_object = var_18_bool; // 0x92e Mov
	func_5157(var_30_int, var_31_object); // 0x92f NEW_2
	var_20_int = var_30_int; // 0x930 Mov
	var_66_int = 0; // 0x932 PushI
	var_67_bool = var_20_int > var_66_int; // 0x933 GT
	if(var_67_bool == 0) goto Label_2367; // 0x934 JumpB
	var_68_int = 1; // 0x935 PushI
	var_69_bool = var_20_int > var_68_int; // 0x936 GT
	if(var_69_bool == 0) goto Label_2363; // 0x937 JumpB
	func_2569(); // 0x939 NEW_2
	
Label_2363:
	var_70_object = Obj(); // 0x93b PushV
	var_70_object = var_18_bool; // 0x93c Mov
	func_5167(var_70_object); // 0x93d NEW_2
	
Label_2367:
	return 2; // 0x93f Return
}


task_4_event_30(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_bool, var_11_object, var_12_object, var_13_int, var_14_int, var_15_bool, var_16_float, var_17_int, var_18_bool, var_19_object, var_20_bool)
{
	var_21_int = 0; var_22_int = 0; // 0x940 PushV
	var_23_bool = 0; var_24_object = Obj(); var_25_object = Obj(); var_26_bool = 0; // 0x941 PushV
	var_24_object = var_18_bool; // 0x942 Mov
	var_25_object = var_19_object; // 0x943 Mov
	var_26_bool = var_20_bool; // 0x944 Mov
	func_5596(var_23_bool, var_24_object, var_25_object, var_26_bool); // 0x945 NEW_2
	if(var_23_bool == 0) goto Label_2395; // 0x947 JumpB
	var_85_int = 0; var_86_object = Obj(); var_87_bool = 0; // 0x948 PushV
	var_86_object = var_18_bool; // 0x949 Mov
	var_87_bool = var_20_bool; // 0x94a Mov
	func_5250(var_86_object, var_87_bool); // 0x94b NEW_2
	var_22_int = var_85_int; // 0x94c Mov
	var_118_int = 0; // 0x94e PushI
	var_119_bool = var_22_int > var_118_int; // 0x94f GT
	if(var_119_bool == 0) goto Label_2395; // 0x950 JumpB
	var_120_int = 1; // 0x951 PushI
	var_121_bool = var_22_int > var_120_int; // 0x952 GT
	if(var_121_bool == 0) goto Label_2391; // 0x953 JumpB
	func_2569(); // 0x955 NEW_2
	
Label_2391:
	var_122_object = Obj(); // 0x957 PushV
	var_122_object = var_18_bool; // 0x958 Mov
	func_5257(var_122_object); // 0x959 NEW_2
	
Label_2395:
	return 2; // 0x95b Return
}


task_4_event_40(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_int = 0; var_20_int = 0; // 0x95c PushV
	var_21_int = 0; var_22_object = Obj(); // 0x95d PushV
	var_22_object = var_18_bool; // 0x95e Mov
	func_5292(var_22_object); // 0x95f NEW_2
	var_20_int = var_21_int; // 0x960 Mov
	var_23_int = 0; // 0x962 PushI
	var_24_bool = var_20_int > var_23_int; // 0x963 GT
	if(var_24_bool == 0) goto Label_2415; // 0x964 JumpB
	var_25_int = 1; // 0x965 PushI
	var_26_bool = var_20_int > var_25_int; // 0x966 GT
	if(var_26_bool == 0) goto Label_2411; // 0x967 JumpB
	func_2569(); // 0x969 NEW_2
	
Label_2411:
	var_27_object = Obj(); // 0x96b PushV
	var_27_object = var_18_bool; // 0x96c Mov
	func_5295(); // 0x96d NEW_2
	
Label_2415:
	return 2; // 0x96f Return
}


task_4_event_42(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_string, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_int = 0; var_21_int = 0; // 0x970 PushV
	var_22_bool = 0; var_23_object = Obj(); var_24_string = ""; // 0x971 PushV
	var_23_object = var_18_object; // 0x972 Mov
	var_24_string = var_19_bool; // 0x973 Mov
	func_4988(var_22_bool, var_23_object, var_24_string); // 0x974 NEW_2
	if(var_22_bool == 0) goto Label_2432; // 0x976 JumpB
	func_2569(); // 0x978 NEW_2
	var_50_object = Obj(); var_51_string = ""; // 0x97a PushV
	var_50_object = var_18_object; // 0x97b Mov
	var_51_string = var_19_bool; // 0x97c Mov
	func_5020(var_50_object, var_51_string); // 0x97d NEW_2
	goto Label_2452; // 0x97f Jump
	
Label_2452:
	return 2; // 0x994 Return
	
Label_2432:
	var_126_int = 0; var_127_string = ""; var_128_object = Obj(); // 0x980 PushV
	var_127_string = var_19_bool; // 0x981 Mov
	var_128_object = var_18_object; // 0x982 Mov
	func_5297(var_126_int, var_127_string, var_128_object); // 0x983 NEW_2
	var_21_int = var_126_int; // 0x984 Mov
	var_170_int = 0; // 0x986 PushI
	var_171_bool = var_21_int > var_170_int; // 0x987 GT
	if(var_171_bool == 0) goto Label_2452; // 0x988 JumpB
	var_172_int = 1; // 0x989 PushI
	var_173_bool = var_21_int > var_172_int; // 0x98a GT
	if(var_173_bool == 0) goto Label_2447; // 0x98b JumpB
	func_2569(); // 0x98d NEW_2
	
Label_2447:
	var_174_string = ""; var_175_object = Obj(); // 0x98f PushV
	var_174_string = var_19_bool; // 0x990 Mov
	var_175_object = var_18_object; // 0x991 Mov
	func_5309(var_174_string, var_175_object); // 0x992 NEW_2
}


task_4_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_string, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_bool = 0; var_20_string = ""; // 0x996 PushV
	var_20_string = var_18_bool; // 0x997 Mov
	func_5087(var_19_bool, var_20_string); // 0x998 NEW_2
	if(var_19_bool == 0) goto Label_2466; // 0x99a JumpB
	func_2569(); // 0x99c NEW_2
	var_28_string = ""; // 0x99e PushV
	var_28_string = var_18_bool; // 0x99f Mov
	func_5103(var_28_string); // 0x9a0 NEW_2
	
Label_2466:
	return 0; // 0x9a2 Return
}


task_4_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	func_2569(); // 0x9a4 NEW_2
	func_5352(); // 0x9a7 NEW_2
	return 0; // 0x9a9 Return
}


task_4_event_1(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_bool = 0; var_20_object = Obj(); // 0x9ab PushV
	var_20_object = var_18_bool; // 0x9ac Mov
	func_5045(var_19_bool, var_20_object); // 0x9ad NEW_2
	if(var_19_bool == 0) goto Label_2487; // 0x9af JumpB
	func_2569(); // 0x9b1 NEW_2
	var_31_object = Obj(); // 0x9b3 PushV
	var_31_object = var_18_bool; // 0x9b4 Mov
	func_5068(var_31_object); // 0x9b5 NEW_2
	
Label_2487:
	return 0; // 0x9b7 Return
}


task_5_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_int = 0; var_20_int = 0; // 0xa46 PushV
	var_21_int = 0; var_22_object = Obj(); // 0xa47 PushV
	var_22_object = var_18_bool; // 0xa48 Mov
	func_5343(var_22_object); // 0xa49 NEW_2
	var_20_int = var_21_int; // 0xa4a Mov
	var_23_int = 0; // 0xa4c PushI
	var_24_bool = var_20_int > var_23_int; // 0xa4d GT
	if(var_24_bool == 0) goto Label_2649; // 0xa4e JumpB
	var_25_int = 1; // 0xa4f PushI
	var_26_bool = var_20_int > var_25_int; // 0xa50 GT
	if(var_26_bool == 0) goto Label_2645; // 0xa51 JumpB
	func_2773(); // 0xa53 NEW_2
	
Label_2645:
	var_29_object = Obj(); // 0xa55 PushV
	var_29_object = var_18_bool; // 0xa56 Mov
	func_5346(var_29_object); // 0xa57 NEW_2
	
Label_2649:
	return 2; // 0xa59 Return
}


task_5_event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_int = 0; var_20_int = 0; // 0xa5a PushV
	var_21_object = Obj(); // 0xa5b PushV
	var_21_object = var_18_bool; // 0xa5c Mov
	func_5074(var_21_object); // 0xa5d NEW_2
	var_30_int = 0; var_31_object = Obj(); // 0xa5f PushV
	var_31_object = var_18_bool; // 0xa60 Mov
	func_5157(var_30_int, var_31_object); // 0xa61 NEW_2
	var_20_int = var_30_int; // 0xa62 Mov
	var_66_int = 0; // 0xa64 PushI
	var_67_bool = var_20_int > var_66_int; // 0xa65 GT
	if(var_67_bool == 0) goto Label_2673; // 0xa66 JumpB
	var_68_int = 1; // 0xa67 PushI
	var_69_bool = var_20_int > var_68_int; // 0xa68 GT
	if(var_69_bool == 0) goto Label_2669; // 0xa69 JumpB
	func_2773(); // 0xa6b NEW_2
	
Label_2669:
	var_72_object = Obj(); // 0xa6d PushV
	var_72_object = var_18_bool; // 0xa6e Mov
	func_5167(var_72_object); // 0xa6f NEW_2
	
Label_2673:
	return 2; // 0xa71 Return
}


task_5_event_30(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_bool, var_12_object, var_13_int, var_14_int, var_15_bool, var_16_float, var_17_int, var_18_bool, var_19_object, var_20_bool)
{
	var_21_int = 0; var_22_int = 0; // 0xa72 PushV
	var_23_bool = 0; var_24_object = Obj(); var_25_object = Obj(); var_26_bool = 0; // 0xa73 PushV
	var_24_object = var_18_bool; // 0xa74 Mov
	var_25_object = var_19_object; // 0xa75 Mov
	var_26_bool = var_20_bool; // 0xa76 Mov
	func_5596(var_23_bool, var_24_object, var_25_object, var_26_bool); // 0xa77 NEW_2
	if(var_23_bool == 0) goto Label_2701; // 0xa79 JumpB
	var_85_int = 0; var_86_object = Obj(); var_87_bool = 0; // 0xa7a PushV
	var_86_object = var_18_bool; // 0xa7b Mov
	var_87_bool = var_20_bool; // 0xa7c Mov
	func_5250(var_86_object, var_87_bool); // 0xa7d NEW_2
	var_22_int = var_85_int; // 0xa7e Mov
	var_118_int = 0; // 0xa80 PushI
	var_119_bool = var_22_int > var_118_int; // 0xa81 GT
	if(var_119_bool == 0) goto Label_2701; // 0xa82 JumpB
	var_120_int = 1; // 0xa83 PushI
	var_121_bool = var_22_int > var_120_int; // 0xa84 GT
	if(var_121_bool == 0) goto Label_2697; // 0xa85 JumpB
	func_2773(); // 0xa87 NEW_2
	
Label_2697:
	var_124_object = Obj(); // 0xa89 PushV
	var_124_object = var_18_bool; // 0xa8a Mov
	func_5257(var_124_object); // 0xa8b NEW_2
	
Label_2701:
	return 2; // 0xa8d Return
}


task_5_event_40(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_int = 0; var_20_int = 0; // 0xa8e PushV
	var_21_int = 0; var_22_object = Obj(); // 0xa8f PushV
	var_22_object = var_18_bool; // 0xa90 Mov
	func_5292(var_22_object); // 0xa91 NEW_2
	var_20_int = var_21_int; // 0xa92 Mov
	var_23_int = 0; // 0xa94 PushI
	var_24_bool = var_20_int > var_23_int; // 0xa95 GT
	if(var_24_bool == 0) goto Label_2721; // 0xa96 JumpB
	var_25_int = 1; // 0xa97 PushI
	var_26_bool = var_20_int > var_25_int; // 0xa98 GT
	if(var_26_bool == 0) goto Label_2717; // 0xa99 JumpB
	func_2773(); // 0xa9b NEW_2
	
Label_2717:
	var_29_object = Obj(); // 0xa9d PushV
	var_29_object = var_18_bool; // 0xa9e Mov
	func_5295(); // 0xa9f NEW_2
	
Label_2721:
	return 2; // 0xaa1 Return
}


task_5_event_42(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_string, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_int = 0; var_21_int = 0; // 0xaa2 PushV
	var_22_bool = 0; var_23_object = Obj(); var_24_string = ""; // 0xaa3 PushV
	var_23_object = var_18_object; // 0xaa4 Mov
	var_24_string = var_19_bool; // 0xaa5 Mov
	func_4988(var_22_bool, var_23_object, var_24_string); // 0xaa6 NEW_2
	if(var_22_bool == 0) goto Label_2738; // 0xaa8 JumpB
	func_2773(); // 0xaaa NEW_2
	var_52_object = Obj(); var_53_string = ""; // 0xaac PushV
	var_52_object = var_18_object; // 0xaad Mov
	var_53_string = var_19_bool; // 0xaae Mov
	func_5020(var_52_object, var_53_string); // 0xaaf NEW_2
	goto Label_2758; // 0xab1 Jump
	
Label_2758:
	return 2; // 0xac6 Return
	
Label_2738:
	var_128_int = 0; var_129_string = ""; var_130_object = Obj(); // 0xab2 PushV
	var_129_string = var_19_bool; // 0xab3 Mov
	var_130_object = var_18_object; // 0xab4 Mov
	func_5297(var_128_int, var_129_string, var_130_object); // 0xab5 NEW_2
	var_21_int = var_128_int; // 0xab6 Mov
	var_172_int = 0; // 0xab8 PushI
	var_173_bool = var_21_int > var_172_int; // 0xab9 GT
	if(var_173_bool == 0) goto Label_2758; // 0xaba JumpB
	var_174_int = 1; // 0xabb PushI
	var_175_bool = var_21_int > var_174_int; // 0xabc GT
	if(var_175_bool == 0) goto Label_2753; // 0xabd JumpB
	func_2773(); // 0xabf NEW_2
	
Label_2753:
	var_176_string = ""; var_177_object = Obj(); // 0xac1 PushV
	var_176_string = var_19_bool; // 0xac2 Mov
	var_177_object = var_18_object; // 0xac3 Mov
	func_5309(var_176_string, var_177_object); // 0xac4 NEW_2
}


task_5_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_string, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_bool = 0; var_20_string = ""; // 0xac8 PushV
	var_20_string = var_18_bool; // 0xac9 Mov
	func_5087(var_19_bool, var_20_string); // 0xaca NEW_2
	if(var_19_bool == 0) goto Label_2772; // 0xacc JumpB
	func_2773(); // 0xace NEW_2
	var_30_string = ""; // 0xad0 PushV
	var_30_string = var_18_bool; // 0xad1 Mov
	func_5103(var_30_string); // 0xad2 NEW_2
	
Label_2772:
	return 0; // 0xad4 Return
}


task_5_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	func_2773(); // 0xae2 NEW_2
	var_21_object = Obj(); // 0xae4 PushV
	var_21_object = var_18_bool; // 0xae5 Mov
	func_4964(); // 0xae6 NEW_2
	return 0; // 0xae8 Return
}


task_5_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_int, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); // 0xae9 PushV
	var_23_int = 111; // 0xaea PushI
	var_24_bool = var_18_bool != var_23_int; // 0xaeb Neq
	if(var_24_bool == 0) goto Label_2798; // 0xaec JumpB
	return 4; // 0xaed Return
	
Label_2798:
	var_25_bool = 0; var_26_object = Obj(); // 0xaee PushV
	var_26_object = var_0_object; // 0xaef MovT
	func_3948(var_25_bool, var_26_object); // 0xaf0 NEW_2
	var_59_bool = var_25_bool == 0; // 0xaf2 Not
	if(var_59_bool == 0) goto Label_2808; // 0xaf3 JumpB
	func_2773(); // 0xaf5 NEW_2
	return 4; // 0xaf7 Return
	
Label_2808:
	GetDirection(var_21_cvector); // 0xaf8 Func
	var_62_cvector = CVector(0,0,0); var_63_object = Obj(); // 0xafa PushV
	var_63_object = var_0_object; // 0xafb MovT
	func_3802(var_63_object); // 0xafc NEW_2
	var_22_cvector = var_62_cvector; // 0xafd Mov
	var_68_float = 0; var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); // 0xaff PushV
	var_69_cvector = var_21_cvector; // 0xb00 Mov
	var_70_cvector = var_22_cvector; // 0xb01 Mov
	func_4348(var_68_float, var_69_cvector, var_70_cvector); // 0xb02 NEW_2
	var_92_float = 0.5; // 0xb04 PushF
	var_93_bool = var_68_float < var_92_float; // 0xb05 LT
	if(var_93_bool == 0) goto Label_2827; // 0xb06 JumpB
	var_94_object = Obj(); // 0xb07 PushV
	var_94_object = var_0_object; // 0xb08 MovT
	func_4098(); // 0xb09 NEW_2
	
Label_2827:
	return 4; // 0xb0b Return
}


task_5_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	func_2773(); // 0xb0d NEW_2
	func_5352(); // 0xb10 NEW_2
	return 0; // 0xb12 Return
}


task_5_event_1(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_bool = 0; var_20_object = Obj(); // 0xb14 PushV
	var_20_object = var_18_bool; // 0xb15 Mov
	func_5045(var_19_bool, var_20_object); // 0xb16 NEW_2
	if(var_19_bool == 0) goto Label_2848; // 0xb18 JumpB
	func_2773(); // 0xb1a NEW_2
	var_33_object = Obj(); // 0xb1c PushV
	var_33_object = var_18_bool; // 0xb1d Mov
	func_5068(var_33_object); // 0xb1e NEW_2
	
Label_2848:
	return 0; // 0xb20 Return
}


task_7_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	func_3595(var_17_bool); // 0xdc6 NEW_2
	func_5352(); // 0xdc9 NEW_2
	return 0; // 0xdcb Return
}


task_7_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool, var_18_int)
{
	var_19_int = 1; // 0xdfe PushI
	var_20_bool = var_18_int == var_19_int; // 0xdff Eq
	if(var_20_bool == 0) goto Label_3590; // 0xe00 JumpB
	var_21_object = Obj(); // 0xe01 PushV
	var_21_object = var_1_object; // 0xe02 MovT
	func_4389(var_21_object); // 0xe03 NEW_2
	goto Label_3594; // 0xe05 Jump
	
Label_3594:
	return 0; // 0xe0a Return
	
Label_3590:
	var_26_int = 0; // 0xe06 PushV
	var_26_int = var_18_int; // 0xe07 Mov
	func_3739(var_17_bool, var_18_int, var_26_int); // 0xe08 NEW_2
}


task_7_event_1(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool, var_18_object)
{
	var_19_bool = 0; // 0xe19 PushV
	var_19_bool = 0; // 0xe1a MovB
	var_20_bool = var_1_object == var_18_object; // 0xe1b Eq
	if(var_20_bool == 0) goto Label_3616; // 0xe1c JumpB
	var_21_bool = var_2_object == 0; // 0xe1d Not
	if(var_21_bool == 0) goto Label_3616; // 0xe1e JumpB
	var_19_bool = 1; // 0xe1f MovB
	
Label_3616:
	if(var_19_bool == 0) goto Label_3622; // 0xe20 JumpB
	var_2_object = 1; // 0xe21 TMovB
	var_22_object = Obj(); // 0xe22 PushV
	var_22_object = var_18_object; // 0xe23 Mov
	func_4230(var_22_object); // 0xe24 NEW_2
	
Label_3622:
	return 0; // 0xe26 Return
}


task_7_event_2(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool, var_18_object)
{
	var_19_bool = 0; // 0xe28 PushV
	var_19_bool = 0; // 0xe29 MovB
	var_20_bool = var_1_object == var_18_object; // 0xe2a Eq
	if(var_20_bool == 0) goto Label_3631; // 0xe2b JumpB
	var_21_object = var_2_object; // 0xe2c PushT
	if(var_21_object == 0) goto Label_3631; // 0xe2d JumpB
	var_19_bool = 1; // 0xe2e MovB
	
Label_3631:
	if(var_19_bool == 0) goto Label_3636; // 0xe2f JumpB
	var_2_object = 0; // 0xe30 TMovB
	var_22_string = "head"; // 0xe31 PushS
	UnlookAsync(var_22_string); // 0xe32 Func
	
Label_3636:
	return 0; // 0xe34 Return
}


task_7_event_10(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool, var_18_object)
{
	RequestClearPath(var_18_object); // 0xeae Func
	return 0; // 0xeb0 Return
}


task_7_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool, var_18_object)
{
	func_3595(var_18_object); // 0xeba NEW_2
	var_23_object = Obj(); // 0xebc PushV
	var_23_object = var_18_object; // 0xebd Mov
	func_4964(); // 0xebe NEW_2
	return 0; // 0xec0 Return
}


event_16(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool, var_18_object, var_19_string)
{
	var_20_float = 0; var_21_float = 0; // 0x1357 PushV
	var_22_string = "health"; // 0x1358 PushS
	var_23_bool = var_19_string == var_22_string; // 0x1359 Eq
	if(var_23_bool == 0) goto Label_4963; // 0x135a JumpB
	var_24_string = "health"; // 0x135b PushS
	GetProperty(var_24_string, var_21_float); // 0x135c Func
	var_25_int = 0; // 0x135e PushI
	var_26_bool = var_21_float <= var_25_int; // 0x135f LE
	if(var_26_bool == 0) goto Label_4963; // 0x1360 JumpB
	SignalDeath(var_18_object); // 0x1361 Func
	
Label_4963:
	return 2; // 0x1363 Return
}


event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool, var_18_object)
{
	var_19_object = Obj(); // 0x1365 PushV
	var_19_object = var_18_object; // 0x1366 Mov
	func_4943(var_19_object); // 0x1367 NEW_2
	return 0; // 0x1369 Return
}


event_22(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool, var_18_object, var_19_int, var_20_float, var_21_float)
{
	var_22_object = Obj(); var_23_int = 0; var_24_float = 0; // 0x136b PushV
	var_22_object = var_18_object; // 0x136c Mov
	var_23_int = var_19_int; // 0x136d Mov
	var_24_float = var_20_float; // 0x136e Mov
	func_4016(var_22_object, var_23_int, var_24_float); // 0x136f NEW_2
	return 0; // 0x1371 Return
}


event_43(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool, var_18_object, var_19_int, var_20_float, var_21_float, var_22_cvector, var_23_cvector)
{
	var_24_object = Obj(); var_25_int = 0; var_26_float = 0; var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); // 0x1373 PushV
	var_24_object = var_18_object; // 0x1374 Mov
	var_25_int = var_19_int; // 0x1375 Mov
	var_26_float = var_20_float; // 0x1376 Mov
	var_27_cvector = var_22_cvector; // 0x1377 Mov
	var_28_cvector = var_23_cvector; // 0x1378 Mov
	func_4084(var_26_float, var_27_cvector, var_28_cvector); // 0x1379 NEW_2
	return 0; // 0x137b Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	var_18_bool = 1; // 0x7a3 PushB
	SensePlayerOnly(var_18_bool); // 0x7a4 Func
	func_5569(); // 0x7a7 NEW_2
	func_1970(); // 0x7aa NEW_2
	
Label_1964:
	var_2_object = 0; // 0x7ac TMovB
	func_2231(var_16_object, var_17_bool); // 0x7ae NEW_2
	goto Label_1964; // 0x7b0 Jump
}


func_0(var_0_object, var_43_int, var_44_object)
{
	var_46_object = Obj(); var_47_bool = 0; var_48_int = 0; var_49_bool = 0; var_50_object = Obj(); var_51_bool = 0; var_52_int = 0; var_53_bool = 0; // 0x0 PushV
	var_0_object = var_44_object; // 0x1 TMov
	var_54_bool = 0; var_55_object = Obj(); var_56_float = 0; // 0x2 PushV
	var_55_object = var_44_object; // 0x3 Mov
	var_56_float = 70.0; // 0x4 MovF
	func_4114(var_55_object, var_56_float); // 0x5 NEW_2
	var_100_bool = var_54_bool == 0; // 0x7 Not
	if(var_100_bool == 0) goto Label_11; // 0x8 JumpB
	var_43_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_50_object); // 0xb Func
	var_101_int = 0; // 0xd PushV
	func_5561(var_101_int); // 0xe NEW_2
	SetNPCName(var_101_int); // 0x10 ObjFunc
	var_102_int = 0; // 0x12 PushV
	func_5559(var_102_int); // 0x13 NEW_2
	SetNPCDescription(var_102_int); // 0x15 ObjFunc
	var_103_string = ""; // 0x17 PushV
	func_5563(var_103_string); // 0x18 NEW_2
	SetPhoto(var_103_string); // 0x1a ObjFunc
	var_104_string = ""; // 0x1c PushV
	func_5565(var_104_string); // 0x1d NEW_2
	SetPhoto2(var_104_string); // 0x1f ObjFunc
	var_105_int = 0; // 0x21 PushV
	func_4586(var_105_int); // 0x22 NEW_2
	SetPlayerName(var_105_int); // 0x24 ObjFunc
	var_52_int = -1; // 0x26 MovI
	IsOverrideActive(var_51_bool); // 0x27 Func
	var_113_bool = var_51_bool; // 0x29 Push
	if(var_113_bool == 0) goto Label_45; // 0x2a JumpB
	var_43_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_50_object); // 0x2d Func
	var_114_object = Obj(); var_115_object = Obj(); // 0x2f PushV
	var_114_object = var_44_object; // 0x30 Mov
	var_115_object = var_50_object; // 0x31 Mov
	TaskCall(1); // 0x32 TaskCall
	func_74(var_116_object, var_117_object, var_118_string, var_119_bool, var_114_object, var_115_object); // 0x33 NEW_2
	TaskReturn(); // 0x34 TaskReturn
	IsDialogEnd(var_53_bool); // 0x36 ObjFunc
	
Label_56:
	var_292_bool = var_53_bool == 0; // 0x38 Not
	if(var_292_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_53_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_293_object = Obj(); // 0x3f PushV
	var_293_object = var_44_object; // 0x40 Mov
	func_4182(); // 0x41 NEW_2
	StopDialog(var_50_object); // 0x43 Func
	GetReturnValue(var_52_int); // 0x45 ObjFunc
	var_43_int = var_52_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_4609(var_398_int)
{
	var_400_int = 0; var_401_int = 0; // 0x1201 PushV
	GetItemID(var_401_int); // 0x1202 ObjFunc
	var_398_int = var_401_int; // 0x1204 Mov
	return 2; // 0x1205 Return
}


func_4098()
{
	var_95_cvector = CVector(0,0,0); var_96_cvector = CVector(0,0,0); var_97_cvector = CVector(0,0,0); var_98_cvector = CVector(0,0,0); var_99_cvector = CVector(0,0,0); var_100_cvector = CVector(0,0,0); // 0x1002 PushV
	GetPosition(var_98_cvector); // 0x1003 ObjFunc
	GetPosition(var_99_cvector); // 0x1005 Func
	var_100_cvector = var_98_cvector - var_99_cvector; // 0x1007 Sub2
	var_101_float = GetByIndex(var_100_cvector, 0); // 0x1008 PushE
	var_102_float = GetByIndex(var_100_cvector, 2); // 0x1009 PushE
	RotateAsync(var_101_float, var_102_float); // 0x100a Func
	return 6; // 0x100c Return
}


func_5123(var_67_int)
{
	var_68_int = 0; var_69_bool = 0; var_70_int = 0; var_71_bool = 0; // 0x1403 PushV
	var_70_int = 0; // 0x1404 MovI
	
Label_5125:
	var_72_string = "all"; // 0x1405 PushS
	var_73_string = ""; var_74_int = 0; // 0x1406 PushV
	var_74_int = var_70_int; // 0x1407 Mov
	func_5116(var_73_string, var_74_int); // 0x1408 NEW_2
	HasAnimation(var_71_bool, var_72_string, var_73_string); // 0x140a Func
	var_78_bool = var_71_bool == 0; // 0x140c Not
	if(var_78_bool == 0) goto Label_5135; // 0x140d JumpB
	goto Label_5138; // 0x140e Jump
	
Label_5138:
	var_67_int = var_70_int; // 0x1412 Mov
	return 4; // 0x1413 Return
	
Label_5135:
	var_79_int = 1; // 0x140f PushI
	var_70_int = var_70_int + var_79_int; // 0x1410 Add2
	goto Label_5125; // 0x1411 Jump
}


func_4614(var_375_int, var_376_object, var_377_int)
{
	var_378_int = 0; var_379_int = 0; var_380_int = 0; var_381_string = ""; var_382_bool = 0; var_383_bool = 0; var_384_int = 0; var_385_int = 0; var_386_int = 0; var_387_int = 0; var_388_string = ""; var_389_bool = 0; var_390_bool = 0; var_391_int = 0; // 0x1206 PushV
	var_392_int = 0; // 0x1207 PushI
	var_393_bool = var_377_int == var_392_int; // 0x1208 Eq
	if(var_393_bool == 0) goto Label_4651; // 0x1209 JumpB
	var_394_int = 0; // 0x120a PushV
	func_4380(var_394_int); // 0x120b NEW_2
	var_385_int = var_394_int; // 0x120c Mov
	var_386_int = 0; // 0x120e MovI
	var_387_int = 1; // 0x120f MovI
	
Label_4624:
	var_395_bool = var_387_int <= var_385_int; // 0x1210 LE
	if(var_395_bool == 0) goto Label_4649; // 0x1211 JumpB
	var_388_string = "Price"; // 0x1212 MovS
	var_396_int = 1; // 0x1213 PushI
	var_397_bool = var_387_int != var_396_int; // 0x1214 Neq
	if(var_397_bool == 0) goto Label_4631; // 0x1215 JumpB
	var_388_string = var_388_string + var_387_int; // 0x1216 Add2
	
Label_4631:
	var_398_int = 0; var_399_object = Obj(); // 0x1217 PushV
	var_399_object = var_376_object; // 0x1218 Mov
	func_4609(var_399_object); // 0x1219 NEW_2
	HasInvItemProperty(var_389_bool, var_398_int, var_388_string); // 0x121b Func
	var_402_bool = var_389_bool == 0; // 0x121d Not
	if(var_402_bool == 0) goto Label_4640; // 0x121e JumpB
	goto Label_4646; // 0x121f Jump
	
Label_4646:
	var_403_int = 1; // 0x1226 PushI
	var_387_int = var_387_int + var_403_int; // 0x1227 Add2
	goto Label_4624; // 0x1228 Jump
	
Label_4640:
	var_404_int = 0; var_405_object = Obj(); // 0x1220 PushV
	var_405_object = var_376_object; // 0x1221 Mov
	func_4609(var_405_object); // 0x1222 NEW_2
	GetInvItemProperty(var_386_int, var_404_int, var_388_string); // 0x1224 Func
	
Label_4649:
	var_375_int = var_386_int; // 0x1229 Mov
	return 14; // 0x122a Return
	
Label_4651:
	var_406_int = 0; var_407_object = Obj(); // 0x122b PushV
	var_407_object = var_376_object; // 0x122c Mov
	func_4609(var_407_object); // 0x122d NEW_2
	var_408_string = "BarterPrice"; // 0x122f PushS
	var_409_int = var_408_string + var_377_int; // 0x1230 Add
	HasInvItemProperty(var_390_bool, var_406_int, var_409_int); // 0x1231 Func
	var_410_bool = var_390_bool == 0; // 0x1233 Not
	if(var_410_bool == 0) goto Label_4663; // 0x1234 JumpB
	var_375_int = 0; // 0x1235 MovI
	return 14; // 0x1236 Return
	
Label_4663:
	var_411_int = 0; var_412_object = Obj(); // 0x1237 PushV
	var_412_object = var_376_object; // 0x1238 Mov
	func_4609(var_412_object); // 0x1239 NEW_2
	var_413_string = "BarterPrice"; // 0x123b PushS
	var_414_int = var_413_string + var_377_int; // 0x123c Add
	GetInvItemProperty(var_391_int, var_411_int, var_414_int); // 0x123d Func
	var_415_int = 0; // 0x123f PushI
	var_416_bool = var_391_int > var_415_int; // 0x1240 GT
	if(var_416_bool == 0) goto Label_4676; // 0x1241 JumpB
	var_375_int = var_391_int; // 0x1242 Mov
	return 14; // 0x1243 Return
	
Label_4676:
	var_375_int = -var_391_int; // 0x1244 Neg2
	return 14; // 0x1245 Return
}


func_2567(var_92_bool)
{
	var_92_bool = 1; // 0xa07 MovB
	return 0; // 0xa08 Return
}


func_2569()
{
	StopAnimation(); // 0xa09 Func
	StopGroup0(); // 0xa0b Func
	return 0; // 0xa0d Return
}


func_3595(var_2_object)
{
	var_19_int = 1; // 0xe0b PushI
	KillTimer(var_19_int); // 0xe0c Func
	var_20_object = var_2_object; // 0xe0e PushT
	if(var_20_object == 0) goto Label_3604; // 0xe0f JumpB
	var_2_object = 0; // 0xe10 TMovB
	var_21_string = "head"; // 0xe11 PushS
	UnlookAsync(var_21_string); // 0xe12 Func
	
Label_3604:
	func_3761(var_18_object); // 0xe15 NEW_2
	return 0; // 0xe17 Return
}


func_4109(var_20_bool)
{
	var_21_bool = 0; var_22_bool = 0; // 0x100d PushV
	IsLoaded(var_22_bool); // 0x100e Func
	var_20_bool = var_22_bool; // 0x1010 Mov
	return 2; // 0x1011 Return
}


func_2574(var_0_object, var_61_object)
{
	var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0); var_65_bool = 0; var_66_cvector = CVector(0,0,0); var_67_cvector = CVector(0,0,0); var_68_bool = 0; // 0xa0e PushV
	var_0_object = var_61_object; // 0xa0f TMov
	func_2625(var_68_bool); // 0xa11 NEW_2
	GetDirection(var_66_cvector); // 0xa13 Func
	var_76_cvector = CVector(0,0,0); var_77_object = Obj(); // 0xa15 PushV
	var_77_object = var_0_object; // 0xa16 MovT
	func_3802(var_77_object); // 0xa17 NEW_2
	var_67_cvector = var_76_cvector; // 0xa18 Mov
	var_82_float = 0; var_83_cvector = CVector(0,0,0); var_84_cvector = CVector(0,0,0); // 0xa1a PushV
	var_83_cvector = var_66_cvector; // 0xa1b Mov
	var_84_cvector = var_67_cvector; // 0xa1c Mov
	func_4348(var_82_float, var_83_cvector, var_84_cvector); // 0xa1d NEW_2
	var_106_int = 0; // 0xa1f PushI
	var_107_bool = var_82_float < var_106_int; // 0xa20 LT
	if(var_107_bool == 0) goto Label_2600; // 0xa21 JumpB
	var_108_object = Obj(); // 0xa22 PushV
	var_108_object = var_0_object; // 0xa23 MovT
	func_4098(); // 0xa24 NEW_2
	var_68_bool = 1; // 0xa26 MovB
	goto Label_2603; // 0xa27 Jump
	
Label_2603:
	var_117_bool = var_68_bool; // 0xa2b Push
	if(var_117_bool == 0) goto Label_2619; // 0xa2c JumpB
	var_118_object = Obj(); // 0xa2d PushV
	var_118_object = var_0_object; // 0xa2e MovT
	func_4098(); // 0xa2f NEW_2
	var_119_int = 111; // 0xa31 PushI
	var_120_float = 0.5; // 0xa32 PushF
	SetTimer(var_119_int, var_120_float); // 0xa33 Func
	var_121_float = 5.0; // 0xa35 PushF
	Sleep(var_121_float); // 0xa36 Func
	var_122_int = 111; // 0xa38 PushI
	KillTimer(var_122_int); // 0xa39 Func
	
Label_2619:
	StopAsync(); // 0xa3b Func
	var_123_string = "head"; // 0xa3d PushS
	UnlookAsync(var_123_string); // 0xa3e Func
	return 6; // 0xa40 Return
	
Label_2600:
	var_124_float = 1.5; // 0xa28 PushF
	Sleep(var_124_float, var_68_bool); // 0xa29 Func
}


func_4114(var_54_bool, var_56_float)
{
	var_57_float = 0; var_58_cvector = CVector(0,0,0); var_59_cvector = CVector(0,0,0); var_60_cvector = CVector(0,0,0); var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0); var_64_bool = 0; var_65_bool = 0; var_66_float = 0; var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); var_73_bool = 0; var_74_bool = 0; // 0x1012 PushV
	GetPosition(var_67_cvector); // 0x1013 ObjFunc
	GetEyesHeight(var_66_float); // 0x1015 ObjFunc
	var_75_float = GetByIndex(var_67_cvector, 1); // 0x1017 PushE
	var_75_float = var_75_float + var_66_float; // 0x1018 Add2
	SetByIndex(var_67_cvector, 1) = var_75_float; // 0x1019 PopE
	GetPosition(var_68_cvector); // 0x101a Func
	GetEyesHeight(var_66_float); // 0x101c Func
	var_76_float = GetByIndex(var_68_cvector, 1); // 0x101e PushE
	var_76_float = var_76_float + var_66_float; // 0x101f Add2
	SetByIndex(var_68_cvector, 1) = var_76_float; // 0x1020 PopE
	var_69_cvector = var_67_cvector - var_68_cvector; // 0x1021 Sub2
	var_77_float = GetByIndex(var_69_cvector, 1); // 0x1022 PushE
	var_77_float = 0; // 0x1023 MovI
	SetByIndex(var_69_cvector, 1) = var_77_float; // 0x1024 PopE
	var_78_int = var_69_cvector | var_69_cvector; // 0x1025 Or
	var_79_float = sqrt(var_78_int); // 0x1026 Sqrt
	var_69_cvector = var_69_cvector / var_69_cvector; // 0x1027 Div2
	var_70_cvector = -var_69_cvector; // 0x1028 Neg2
	var_80_float = var_69_cvector * var_56_float; // 0x1029 Mult
	var_81_cvector = CVector(0,0,0); var_82_cvector = CVector(0,0,0); // 0x102a PushV
	var_83_cvector = CVector(0.0, 1.0, 0.0); // 0x102b PushVec
	var_82_cvector = var_70_cvector ^ var_83_cvector; // 0x102c Xor2
	func_4295(var_81_cvector, var_82_cvector); // 0x102d NEW_2
	var_89_int = 25; // 0x102f PushI
	var_90_float = var_81_cvector * var_89_int; // 0x1030 Mult
	var_91_int = var_80_float + var_90_float; // 0x1031 Add
	var_92_cvector = CVector(0.0, 10.0, 0.0); // 0x1032 PushVec
	var_71_cvector = var_91_int - var_92_cvector; // 0x1033 Sub2
	var_72_cvector = var_68_cvector + var_71_cvector; // 0x1034 Add2
	IsOverrideActive(var_73_bool); // 0x1035 Func
	var_93_bool = var_73_bool; // 0x1037 Push
	if(var_93_bool == 0) goto Label_4155; // 0x1038 JumpB
	var_54_bool = 0; // 0x1039 MovB
	return 18; // 0x103a Return
	
Label_4155:
	StopWorld(); // 0x103b Func
	CameraTransit(var_72_cvector, var_70_cvector); // 0x103d Func
	var_94_float = GetByIndex(var_71_cvector, 0); // 0x103f PushE
	var_95_float = GetByIndex(var_71_cvector, 2); // 0x1040 PushE
	Rotate(var_94_float, var_95_float); // 0x1041 Func
	var_96_bool = 0; // 0x1043 PushV
	func_5567(var_96_bool); // 0x1044 NEW_2
	if(var_96_bool == 0) goto Label_4168; // 0x1046 JumpB
	goto Label_4176; // 0x1047 Jump
	
Label_4176:
	CameraWaitForPlayFinish(); // 0x1050 Func
	ResumeWorld(); // 0x1052 Func
	var_54_bool = 1; // 0x1054 MovB
	return 18; // 0x1055 Return
	
Label_4168:
	var_97_string = "head"; // 0x1048 PushS
	HasAnimationTrack(var_74_bool, var_97_string); // 0x1049 Func
	var_98_bool = var_74_bool; // 0x104b Push
	if(var_98_bool == 0) goto Label_4176; // 0x104c JumpB
	var_99_string = "head"; // 0x104d PushS
	LookAsyncCamera(var_99_string); // 0x104e Func
}


func_5140(var_61_int)
{
	var_63_bool = 0; // 0x1415 PushV
	func_5591(var_63_bool); // 0x1416 NEW_2
	if(var_63_bool == 0) goto Label_5147; // 0x1418 JumpB
	var_61_int = 2; // 0x1419 MovI
	goto Label_5148; // 0x141a Jump
	
Label_5148:
	return 0; // 0x141c Return
	
Label_5147:
	var_61_int = 0; // 0x141b MovI
}


func_3092(var_1_object, var_2_object, var_4_bool)
{
	var_214_bool = 0; var_215_bool = 0; var_216_cvector = CVector(0,0,0); var_217_bool = 0; var_218_bool = 0; var_219_cvector = CVector(0,0,0); // 0xc14 PushV
	var_1_object = 0; // 0xc15 TMovI
	
Label_3094:
	var_220_string = "all"; // 0xc16 PushS
	var_221_string = "attack_begin"; // 0xc17 PushS
	var_222_int = 1; // 0xc18 PushI
	var_223_int = var_1_object + var_222_int; // 0xc19 Add
	var_224_int = var_221_string + var_223_int; // 0xc1a Add
	HasAnimation(var_217_bool, var_220_string, var_224_int); // 0xc1b Func
	var_225_bool = var_217_bool == 0; // 0xc1d Not
	if(var_225_bool == 0) goto Label_3104; // 0xc1e JumpB
	goto Label_3107; // 0xc1f Jump
	
Label_3107:
	var_2_object = 0; // 0xc23 TMovI
	
Label_3108:
	var_226_string = "attack"; // 0xc24 PushS
	var_227_int = 1; // 0xc25 PushI
	var_228_int = var_2_object + var_227_int; // 0xc26 Add
	var_229_int = var_226_string + var_228_int; // 0xc27 Add
	IsExisting3DSound(var_218_bool, var_229_int); // 0xc28 Func
	var_230_bool = var_218_bool == 0; // 0xc2a Not
	if(var_230_bool == 0) goto Label_3117; // 0xc2b JumpB
	goto Label_3120; // 0xc2c Jump
	
Label_3120:
	var_231_string = "all"; // 0xc30 PushS
	var_232_string = "bjump"; // 0xc31 PushS
	GetAnimationOffset(var_219_cvector, var_231_string, var_232_string); // 0xc32 Func
	var_233_float = GetByIndex(var_219_cvector, 2); // 0xc34 PushE
	var_4_bool = -var_233_float; // 0xc35 Neg2
	return 6; // 0xc36 Return
	
Label_3117:
	var_234_int = 1; // 0xc2d PushI
	var_2_object = var_2_object + var_234_int; // 0xc2e Add2
	goto Label_3108; // 0xc2f Jump
	
Label_3104:
	var_235_int = 1; // 0xc20 PushI
	var_1_object = var_1_object + var_235_int; // 0xc21 Add2
	goto Label_3094; // 0xc22 Jump
}


func_5149(var_60_object)
{
	var_61_object = Obj(); // 0x141e PushV
	var_61_object = var_60_object; // 0x141f Mov
	TaskCall(5); // 0x1420 TaskCall
	func_2574(var_62_object, var_61_object); // 0x1421 NEW_2
	TaskReturn(); // 0x1422 TaskReturn
	return 0; // 0x1424 Return
}


func_5157(var_88_int, var_89_object)
{
	var_90_bool = 0; var_91_object = Obj(); // 0x1426 PushV
	var_91_object = var_89_object; // 0x1427 Mov
	func_3948(var_90_bool, var_91_object); // 0x1428 NEW_2
	if(var_90_bool == 0) goto Label_5165; // 0x142a JumpB
	var_88_int = 2; // 0x142b MovI
	goto Label_5166; // 0x142c Jump
	
Label_5166:
	return 0; // 0x142e Return
	
Label_5165:
	var_88_int = 0; // 0x142d MovI
}


func_5167(var_181_object)
{
	var_182_object = Obj(); // 0x1430 PushV
	var_182_object = var_181_object; // 0x1431 Mov
	TaskCall(6); // 0x1432 TaskCall
	func_2849(var_182_object); // 0x1433 NEW_2
	TaskReturn(); // 0x1434 TaskReturn
	return 0; // 0x1436 Return
}


func_3637(var_0_object, var_1_object, var_283_bool, var_284_object, var_285_float, var_286_float, var_287_bool, var_288_bool)
{
	var_289_bool = 0; var_290_bool = 0; var_291_object = Obj(); var_292_cvector = CVector(0,0,0); var_293_cvector = CVector(0,0,0); var_294_cvector = CVector(0,0,0); var_295_float = 0; var_296_object = Obj(); var_297_bool = 0; var_298_bool = 0; var_299_object = Obj(); var_300_cvector = CVector(0,0,0); var_301_cvector = CVector(0,0,0); var_302_cvector = CVector(0,0,0); var_303_float = 0; var_304_object = Obj(); // 0xe35 PushV
	var_0_object = 0; // 0xe36 TMovB
	var_1_object = var_284_object; // 0xe37 TMov
	var_298_bool = var_288_bool; // 0xe38 Mov
	
Label_3641:
	var_305_bool = 0; var_306_object = Obj(); // 0xe39 PushV
	var_306_object = var_284_object; // 0xe3a Mov
	func_3777(var_305_bool, var_306_object); // 0xe3b NEW_2
	var_309_bool = var_305_bool == 0; // 0xe3d Not
	if(var_309_bool == 0) goto Label_3649; // 0xe3e JumpB
	var_283_bool = 0; // 0xe3f MovB
	return 16; // 0xe40 Return
	
Label_3649:
	GetPosition(var_300_cvector); // 0xe41 ObjFunc
	GetPosition(var_301_cvector); // 0xe43 Func
	var_302_cvector = var_300_cvector - var_301_cvector; // 0xe45 Sub2
	var_303_float = var_302_cvector | var_302_cvector; // 0xe46 Or2
	var_310_bool = 0; // 0xe47 PushV
	var_310_bool = 0; // 0xe48 MovB
	var_311_int = 0; // 0xe49 PushI
	var_312_bool = var_286_float > var_311_int; // 0xe4a GT
	if(var_312_bool == 0) goto Label_3664; // 0xe4b JumpB
	var_313_float = var_286_float * var_286_float; // 0xe4c Mult
	var_314_bool = var_303_float > var_313_float; // 0xe4d GT
	if(var_314_bool == 0) goto Label_3664; // 0xe4e JumpB
	var_310_bool = 1; // 0xe4f MovB
	
Label_3664:
	if(var_310_bool == 0) goto Label_3669; // 0xe50 JumpB
	Stop(); // 0xe51 Func
	var_283_bool = 0; // 0xe53 MovB
	return 16; // 0xe54 Return
	
Label_3669:
	var_315_float = var_285_float * var_285_float; // 0xe55 Mult
	var_316_bool = var_303_float > var_315_float; // 0xe56 GT
	if(var_316_bool == 0) goto Label_3731; // 0xe57 JumpB
	GetPFPosition(var_300_cvector); // 0xe58 ObjFunc
	FindPathTo(var_304_object, var_300_cvector); // 0xe5a Func
	var_317_bool = var_304_object != 0; // 0xe5c NullNeq
	if(var_317_bool == 0) goto Label_3680; // 0xe5d JumpB
	var_299_object = var_304_object; // 0xe5e Mov
	var_304_object = 0; // 0xe5f SetNull
	
Label_3680:
	var_318_bool = var_299_object != 0; // 0xe60 NullNeq
	if(var_318_bool == 0) goto Label_3713; // 0xe61 JumpB
	var_319_bool = var_298_bool; // 0xe62 Push
	if(var_319_bool == 0) goto Label_3690; // 0xe63 JumpB
	var_298_bool = 0; // 0xe64 MovB
	RotatePath(var_299_object, var_297_bool); // 0xe65 Func
	var_320_bool = var_297_bool == 0; // 0xe67 Not
	if(var_320_bool == 0) goto Label_3690; // 0xe68 JumpB
	goto Label_3737; // 0xe69 Jump
	
Label_3737:
	var_283_bool = !var_0_object; // 0xe99 Not2
	return 16; // 0xe9a Return
	
Label_3690:
	var_321_int = 0; // 0xe6a PushI
	var_322_float = 0.3; // 0xe6b PushF
	SetTimer(var_321_int, var_322_float); // 0xe6c Func
	var_323_string = ""; // 0xe6e PushV
	func_3784(var_323_string); // 0xe6f NEW_2
	var_324_string = ""; // 0xe71 PushV
	func_3786(var_324_string); // 0xe72 NEW_2
	FollowPath(var_299_object, var_287_bool, var_297_bool, var_323_string, var_324_string); // 0xe74 Func
	var_325_bool = var_297_bool == 0; // 0xe76 Not
	if(var_325_bool == 0) goto Label_3711; // 0xe77 JumpB
	var_326_object = var_0_object; // 0xe78 PushT
	if(var_326_object == 0) goto Label_3709; // 0xe79 JumpB
	var_299_object = 0; // 0xe7a SetNull
	goto Label_3737; // 0xe7b Jump
	
Label_3709:
	goto Label_3736; // 0xe7d Jump
	
Label_3736:
	goto Label_3641; // 0xe98 Jump
	
Label_3711:
	var_299_object = 0; // 0xe7f SetNull
	goto Label_3729; // 0xe80 Jump
	
Label_3729:
	var_304_object = 0; // 0xe91 SetNull
	goto Label_3735; // 0xe92 Jump
	
Label_3735:
	var_299_object = 0; // 0xe97 SetNull
	
Label_3713:
	var_327_int = 0; // 0xe81 PushI
	KillTimer(var_327_int); // 0xe82 Func
	var_328_float = 0.5; // 0xe84 PushF
	Sleep(var_328_float, var_297_bool); // 0xe85 Func
	var_329_bool = var_297_bool == 0; // 0xe87 Not
	if(var_329_bool == 0) goto Label_3725; // 0xe88 JumpB
	var_330_object = var_0_object; // 0xe89 PushT
	if(var_330_object == 0) goto Label_3725; // 0xe8a JumpB
	var_299_object = 0; // 0xe8b SetNull
	goto Label_3737; // 0xe8c Jump
	
Label_3725:
	var_331_int = 0; // 0xe8d PushI
	var_332_float = 0.3; // 0xe8e PushF
	SetTimer(var_331_int, var_332_float); // 0xe8f Func
	
Label_3731:
	var_333_int = 0; // 0xe93 PushI
	KillTimer(var_333_int); // 0xe94 Func
	goto Label_3737; // 0xe96 Jump
}


func_3127(var_0_object, var_497_float, var_498_int)
{
	var_499_object = Obj(); var_500_float = 0; var_501_float = 0; var_502_object = Obj(); var_503_float = 0; var_504_float = 0; // 0xc37 PushV
	var_505_float = 0.9; // 0xc38 PushF
	var_506_float = var_497_float * var_505_float; // 0xc39 Mult
	GetVictim(var_506_float, var_502_object); // 0xc3a Func
	ReportAttack(var_0_object); // 0xc3c Func
	var_507_bool = var_502_object == var_0_object; // 0xc3e Eq
	if(var_507_bool == 0) goto Label_3164; // 0xc3f JumpB
	var_508_float = 0; var_509_object = Obj(); var_510_int = 0; // 0xc40 PushV
	var_509_object = var_502_object; // 0xc41 Mov
	var_510_int = var_498_int; // 0xc42 Mov
	func_2857(var_510_int); // 0xc43 NEW_2
	var_503_float = var_508_float; // 0xc44 Mov
	var_511_float = 0; var_512_object = Obj(); var_513_float = 0; var_514_int = 0; // 0xc46 PushV
	var_512_object = var_502_object; // 0xc47 Mov
	var_513_float = var_503_float; // 0xc48 Mov
	var_515_int = 0; var_516_object = Obj(); var_517_int = 0; // 0xc49 PushV
	var_516_object = var_502_object; // 0xc4a Mov
	var_517_int = var_498_int; // 0xc4b Mov
	func_2860(var_517_int); // 0xc4c NEW_2
	var_514_int = var_515_int; // 0xc4d Mov
	func_3834(var_511_float, var_512_object, var_513_float, var_514_int); // 0xc4f NEW_2
	var_504_float = var_511_float; // 0xc50 Mov
	var_572_int = 0; // 0xc52 PushV
	func_3510(var_572_int); // 0xc53 NEW_2
	ReportHit(var_0_object, var_572_int, var_504_float, var_503_float); // 0xc55 Func
	var_573_object = Obj(); var_574_float = 0; // 0xc57 PushV
	var_573_object = var_502_object; // 0xc58 Mov
	var_574_float = var_504_float; // 0xc59 Mov
	func_3517(); // 0xc5a NEW_2
	
Label_3164:
	return 6; // 0xc5c Return
}


func_5175(var_34_bool, var_35_object, var_36_bool)
{
	var_37_string = ""; var_38_string = ""; var_39_string = ""; var_40_string = ""; // 0x1437 PushV
	var_41_bool = 0; var_42_object = Obj(); var_43_string = ""; // 0x1438 PushV
	var_42_object = var_35_object; // 0x1439 Mov
	var_43_string = "class"; // 0x143a MovS
	func_3822(var_41_bool, var_42_object, var_43_string); // 0x143b NEW_2
	var_50_bool = var_41_bool == 0; // 0x143d Not
	if(var_50_bool == 0) goto Label_5185; // 0x143e JumpB
	var_34_bool = 0; // 0x143f MovB
	return 4; // 0x1440 Return
	
Label_5185:
	var_51_string = "class"; // 0x1441 PushS
	GetProperty(var_51_string, var_39_string); // 0x1442 Func
	var_52_string = "class"; // 0x1444 PushS
	GetProperty(var_52_string, var_40_string); // 0x1445 ObjFunc
	var_53_bool = 0; // 0x1447 PushV
	var_53_bool = 0; // 0x1448 MovB
	var_54_bool = var_36_bool == 0; // 0x1449 Not
	if(var_54_bool == 0) goto Label_5198; // 0x144a JumpB
	var_55_bool = var_39_string == var_40_string; // 0x144b Eq
	if(var_55_bool == 0) goto Label_5198; // 0x144c JumpB
	var_53_bool = 1; // 0x144d MovB
	
Label_5198:
	if(var_53_bool == 0) goto Label_5201; // 0x144e JumpB
	var_34_bool = 1; // 0x144f MovB
	return 4; // 0x1450 Return
	
Label_5201:
	var_56_string = "rat"; // 0x1451 PushS
	var_57_bool = var_40_string == var_56_string; // 0x1452 Eq
	if(var_57_bool == 0) goto Label_5207; // 0x1453 JumpB
	var_34_bool = 0; // 0x1454 MovB
	return 4; // 0x1455 Return
	
Label_5207:
	var_58_string = "rat_big"; // 0x1457 PushS
	var_59_bool = var_40_string == var_58_string; // 0x1458 Eq
	if(var_59_bool == 0) goto Label_5213; // 0x1459 JumpB
	var_34_bool = 0; // 0x145a MovB
	return 4; // 0x145b Return
	
Label_5213:
	var_60_string = "dog"; // 0x145d PushS
	var_61_bool = var_40_string == var_60_string; // 0x145e Eq
	if(var_61_bool == 0) goto Label_5219; // 0x145f JumpB
	var_34_bool = 0; // 0x1460 MovB
	return 4; // 0x1461 Return
	
Label_5219:
	var_62_string = "grabitel"; // 0x1463 PushS
	var_63_bool = var_40_string == var_62_string; // 0x1464 Eq
	if(var_63_bool == 0) goto Label_5225; // 0x1465 JumpB
	var_34_bool = 0; // 0x1466 MovB
	return 4; // 0x1467 Return
	
Label_5225:
	var_64_string = "bomber"; // 0x1469 PushS
	var_65_bool = var_40_string == var_64_string; // 0x146a Eq
	if(var_65_bool == 0) goto Label_5231; // 0x146b JumpB
	var_34_bool = 0; // 0x146c MovB
	return 4; // 0x146d Return
	
Label_5231:
	var_66_string = "sanitar"; // 0x146f PushS
	var_67_bool = var_40_string == var_66_string; // 0x1470 Eq
	if(var_67_bool == 0) goto Label_5237; // 0x1471 JumpB
	var_34_bool = 0; // 0x1472 MovB
	return 4; // 0x1473 Return
	
Label_5237:
	var_68_string = "hunter"; // 0x1475 PushS
	var_69_bool = var_40_string == var_68_string; // 0x1476 Eq
	if(var_69_bool == 0) goto Label_5243; // 0x1477 JumpB
	var_34_bool = 0; // 0x1478 MovB
	return 4; // 0x1479 Return
	
Label_5243:
	var_70_string = "soldier"; // 0x147b PushS
	var_71_bool = var_40_string == var_70_string; // 0x147c Eq
	if(var_71_bool == 0) goto Label_5248; // 0x147d JumpB
	var_34_bool = 0; // 0x147e MovB
	return 4; // 0x147f Return
	
Label_5248:
	var_34_bool = 1; // 0x1480 MovB
	return 4; // 0x1481 Return
}


func_2625(var_0_object)
{
	var_69_object = Obj(); // 0xa41 PushV
	var_69_object = var_0_object; // 0xa42 MovT
	func_4230(var_69_object); // 0xa43 NEW_2
	return 0; // 0xa45 Return
}


func_4678(var_35_object)
{
	var_36_int = 0; // 0x1247 PushV
	func_4603(var_36_int); // 0x1248 NEW_2
	var_40_int = 1; // 0x124a PushI
	var_41_bool = var_36_int == var_40_int; // 0x124b Eq
	if(var_41_bool == 0) goto Label_4688; // 0x124c JumpB
	WorkWithCorpse(var_35_object); // 0x124d Func
	goto Label_4690; // 0x124f Jump
	
Label_4690:
	return 0; // 0x1252 Return
	
Label_4688:
	Barter(var_35_object); // 0x1250 Func
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_114_object, var_115_object)
{
	var_0_object = var_115_object; // 0x4b TMov
	var_1_object = var_114_object; // 0x4c TMov
	var_3_string = 0; // 0x4d TMovB
	var_120_int = 1; // 0x4e PushI
	if(var_120_int == 0) goto Label_293; // 0x4f JumpB
	var_121_bool = 0; var_122_object = Obj(); // 0x50 PushV
	var_122_object = var_1_object; // 0x51 MovT
	func_4438(var_122_object); // 0x52 NEW_2
	if(var_121_bool == 0) goto Label_237; // 0x54 JumpB
	var_129_string = ""; // 0x55 PushV
	var_129_string = "Neutral"; // 0x56 MovS
	func_323(var_115_object, var_129_string); // 0x57 NEW_2
	var_146_int = 543041; // 0x59 PushI
	SetMessage(var_146_int); // 0x5a TObjFunc
	ClearReplies(); // 0x5c TObjFunc
	var_147_bool = 0; var_148_object = Obj(); // 0x5e PushV
	var_148_object = var_1_object; // 0x5f MovT
	func_4450(var_147_bool, var_148_object); // 0x60 NEW_2
	if(var_147_bool == 0) goto Label_104; // 0x62 JumpB
	var_158_int = 538210; // 0x63 PushI
	var_159_int = -1; // 0x64 PushI
	var_160_int = 40087; // 0x65 PushI
	AddReply(var_158_int, var_159_int, var_160_int); // 0x66 TObjFunc
	
Label_104:
	var_161_bool = 0; var_162_object = Obj(); // 0x68 PushV
	var_162_object = var_1_object; // 0x69 MovT
	func_4450(var_161_bool, var_162_object); // 0x6a NEW_2
	if(var_161_bool == 0) goto Label_114; // 0x6c JumpB
	var_163_int = 543042; // 0x6d PushI
	var_164_int = -1; // 0x6e PushI
	var_165_int = 45494; // 0x6f PushI
	AddReply(var_163_int, var_164_int, var_165_int); // 0x70 TObjFunc
	
Label_114:
	var_166_bool = 0; var_167_object = Obj(); // 0x72 PushV
	var_167_object = var_1_object; // 0x73 MovT
	func_4450(var_166_bool, var_167_object); // 0x74 NEW_2
	if(var_166_bool == 0) goto Label_124; // 0x76 JumpB
	var_168_int = 543043; // 0x77 PushI
	var_169_int = -1; // 0x78 PushI
	var_170_int = 45495; // 0x79 PushI
	AddReply(var_168_int, var_169_int, var_170_int); // 0x7a TObjFunc
	
Label_124:
	var_171_bool = 0; // 0x7c PushV
	var_171_bool = 1; // 0x7d MovB
	var_172_bool = 0; // 0x7e PushV
	var_172_bool = 1; // 0x7f MovB
	var_173_bool = 0; var_174_object = Obj(); // 0x80 PushV
	var_174_object = var_1_object; // 0x81 MovT
	func_4470(var_173_bool, var_174_object); // 0x82 NEW_2
	if(var_173_bool == 0) goto Label_139; // 0x84 JumpB
	var_179_bool = 0; var_180_object = Obj(); // 0x85 PushV
	var_180_object = var_1_object; // 0x86 MovT
	func_4480(var_179_bool, var_180_object); // 0x87 NEW_2
	if(var_179_bool == 0) goto Label_139; // 0x89 JumpB
	var_172_bool = 0; // 0x8a MovB
	
Label_139:
	if(var_172_bool == 0) goto Label_146; // 0x8b JumpB
	var_185_bool = 0; var_186_object = Obj(); // 0x8c PushV
	var_186_object = var_1_object; // 0x8d MovT
	func_4490(var_185_bool, var_186_object); // 0x8e NEW_2
	if(var_185_bool == 0) goto Label_146; // 0x90 JumpB
	var_171_bool = 0; // 0x91 MovB
	
Label_146:
	if(var_171_bool == 0) goto Label_152; // 0x92 JumpB
	var_191_int = 543055; // 0x93 PushI
	var_192_int = -1; // 0x94 PushI
	var_193_int = 45510; // 0x95 PushI
	AddReply(var_191_int, var_192_int, var_193_int); // 0x96 TObjFunc
	
Label_152:
	var_194_bool = 0; // 0x98 PushV
	var_194_bool = 1; // 0x99 MovB
	var_195_bool = 0; var_196_object = Obj(); // 0x9a PushV
	var_196_object = var_1_object; // 0x9b MovT
	func_4470(var_195_bool, var_196_object); // 0x9c NEW_2
	if(var_195_bool == 0) goto Label_165; // 0x9e JumpB
	var_197_bool = 0; var_198_object = Obj(); // 0x9f PushV
	var_198_object = var_1_object; // 0xa0 MovT
	func_4480(var_197_bool, var_198_object); // 0xa1 NEW_2
	if(var_197_bool == 0) goto Label_165; // 0xa3 JumpB
	var_194_bool = 0; // 0xa4 MovB
	
Label_165:
	if(var_194_bool == 0) goto Label_171; // 0xa5 JumpB
	var_199_int = 543056; // 0xa6 PushI
	var_200_int = -1; // 0xa7 PushI
	var_201_int = 45511; // 0xa8 PushI
	AddReply(var_199_int, var_200_int, var_201_int); // 0xa9 TObjFunc
	
Label_171:
	var_202_bool = 0; // 0xab PushV
	var_202_bool = 1; // 0xac MovB
	var_203_bool = 0; // 0xad PushV
	var_203_bool = 1; // 0xae MovB
	var_204_bool = 0; var_205_object = Obj(); // 0xaf PushV
	var_205_object = var_1_object; // 0xb0 MovT
	func_4500(var_204_bool, var_205_object); // 0xb1 NEW_2
	if(var_204_bool == 0) goto Label_186; // 0xb3 JumpB
	var_210_bool = 0; var_211_object = Obj(); // 0xb4 PushV
	var_211_object = var_1_object; // 0xb5 MovT
	func_4510(var_210_bool, var_211_object); // 0xb6 NEW_2
	if(var_210_bool == 0) goto Label_186; // 0xb8 JumpB
	var_203_bool = 0; // 0xb9 MovB
	
Label_186:
	if(var_203_bool == 0) goto Label_193; // 0xba JumpB
	var_216_bool = 0; var_217_object = Obj(); // 0xbb PushV
	var_217_object = var_1_object; // 0xbc MovT
	func_4520(var_216_bool, var_217_object); // 0xbd NEW_2
	if(var_216_bool == 0) goto Label_193; // 0xbf JumpB
	var_202_bool = 0; // 0xc0 MovB
	
Label_193:
	if(var_202_bool == 0) goto Label_199; // 0xc1 JumpB
	var_222_int = 543062; // 0xc2 PushI
	var_223_int = -1; // 0xc3 PushI
	var_224_int = 45517; // 0xc4 PushI
	AddReply(var_222_int, var_223_int, var_224_int); // 0xc5 TObjFunc
	
Label_199:
	var_225_bool = 0; // 0xc7 PushV
	var_225_bool = 1; // 0xc8 MovB
	var_226_bool = 0; // 0xc9 PushV
	var_226_bool = 1; // 0xca MovB
	var_227_bool = 0; // 0xcb PushV
	var_227_bool = 1; // 0xcc MovB
	var_228_bool = 0; var_229_object = Obj(); // 0xcd PushV
	var_229_object = var_1_object; // 0xce MovT
	func_4490(var_228_bool, var_229_object); // 0xcf NEW_2
	if(var_228_bool == 0) goto Label_216; // 0xd1 JumpB
	var_230_bool = 0; var_231_object = Obj(); // 0xd2 PushV
	var_231_object = var_1_object; // 0xd3 MovT
	func_4500(var_230_bool, var_231_object); // 0xd4 NEW_2
	if(var_230_bool == 0) goto Label_216; // 0xd6 JumpB
	var_227_bool = 0; // 0xd7 MovB
	
Label_216:
	if(var_227_bool == 0) goto Label_223; // 0xd8 JumpB
	var_232_bool = 0; var_233_object = Obj(); // 0xd9 PushV
	var_233_object = var_1_object; // 0xda MovT
	func_4510(var_232_bool, var_233_object); // 0xdb NEW_2
	if(var_232_bool == 0) goto Label_223; // 0xdd JumpB
	var_226_bool = 0; // 0xde MovB
	
Label_223:
	if(var_226_bool == 0) goto Label_230; // 0xdf JumpB
	var_234_bool = 0; var_235_object = Obj(); // 0xe0 PushV
	var_235_object = var_1_object; // 0xe1 MovT
	func_4520(var_234_bool, var_235_object); // 0xe2 NEW_2
	if(var_234_bool == 0) goto Label_230; // 0xe4 JumpB
	var_225_bool = 0; // 0xe5 MovB
	
Label_230:
	if(var_225_bool == 0) goto Label_236; // 0xe6 JumpB
	var_236_int = 543064; // 0xe7 PushI
	var_237_int = -1; // 0xe8 PushI
	var_238_int = 45519; // 0xe9 PushI
	AddReply(var_236_int, var_237_int, var_238_int); // 0xea TObjFunc
	
Label_236:
	goto Label_293; // 0xec Jump
	
Label_293:
	var_239_bool = 0; // 0x125 PushV
	func_5567(var_239_bool); // 0x126 NEW_2
	if(var_239_bool == 0) goto Label_308; // 0x128 JumpB
	
Label_297:
	lshWaitForAnimEnd(); // 0x129 Func
	var_240_string = var_3_string; // 0x12b PushT
	if(var_240_string == 0) goto Label_302; // 0x12c JumpB
	goto Label_307; // 0x12d Jump
	
Label_307:
	goto Label_322; // 0x133 Jump
	
Label_322:
	return 0; // 0x142 Return
	
Label_302:
	var_241_string = ""; // 0x12e PushV
	var_241_string = var_2_object; // 0x12f MovT
	func_4199(var_241_string); // 0x130 NEW_2
	goto Label_297; // 0x132 Jump
	
Label_308:
	var_252_string = "all"; // 0x134 PushS
	var_253_string = "idle"; // 0x135 PushS
	PlayAnimation(var_252_string, var_253_string); // 0x136 Func
	
Label_312:
	WaitForAnimEnd(); // 0x138 Func
	var_254_string = var_3_string; // 0x13a PushT
	if(var_254_string == 0) goto Label_317; // 0x13b JumpB
	goto Label_322; // 0x13c Jump
	
Label_317:
	var_255_string = "all"; // 0x13d PushS
	var_256_string = "idle"; // 0x13e PushS
	PlayAnimation(var_255_string, var_256_string); // 0x13f Func
	goto Label_312; // 0x141 Jump
	
Label_237:
	var_257_string = ""; // 0xed PushV
	var_257_string = "Neutral"; // 0xee MovS
	func_323(var_115_object, var_257_string); // 0xef NEW_2
	var_258_int = 538207; // 0xf1 PushI
	SetMessage(var_258_int); // 0xf2 TObjFunc
	ClearReplies(); // 0xf4 TObjFunc
	var_259_bool = 0; var_260_object = Obj(); // 0xf6 PushV
	var_260_object = var_1_object; // 0xf7 MovT
	func_4414(var_260_object); // 0xf8 NEW_2
	if(var_259_bool == 0) goto Label_256; // 0xfa JumpB
	var_265_int = 538208; // 0xfb PushI
	var_266_int = -1; // 0xfc PushI
	var_267_int = 40085; // 0xfd PushI
	AddReply(var_265_int, var_266_int, var_267_int); // 0xfe TObjFunc
	
Label_256:
	var_268_bool = 0; var_269_object = Obj(); // 0x100 PushV
	var_269_object = var_1_object; // 0x101 MovT
	func_4426(var_269_object); // 0x102 NEW_2
	if(var_268_bool == 0) goto Label_266; // 0x104 JumpB
	var_274_int = 538209; // 0x105 PushI
	var_275_int = -1; // 0x106 PushI
	var_276_int = 40086; // 0x107 PushI
	AddReply(var_274_int, var_275_int, var_276_int); // 0x108 TObjFunc
	
Label_266:
	var_277_bool = 0; // 0x10a PushV
	var_277_bool = 0; // 0x10b MovB
	var_278_bool = 0; var_279_object = Obj(); // 0x10c PushV
	var_279_object = var_1_object; // 0x10d MovT
	func_4414(var_279_object); // 0x10e NEW_2
	if(var_278_bool == 0) goto Label_279; // 0x110 JumpB
	var_280_bool = 0; var_281_object = Obj(); // 0x111 PushV
	var_281_object = var_1_object; // 0x112 MovT
	func_4460(var_280_bool, var_281_object); // 0x113 NEW_2
	if(var_280_bool == 0) goto Label_279; // 0x115 JumpB
	var_277_bool = 1; // 0x116 MovB
	
Label_279:
	if(var_277_bool == 0) goto Label_285; // 0x117 JumpB
	var_286_int = 538235; // 0x118 PushI
	var_287_int = 40114; // 0x119 PushI
	var_288_int = 40113; // 0x11a PushI
	AddReply(var_286_int, var_287_int, var_288_int); // 0x11b TObjFunc
	
Label_285:
	var_289_int = 538396; // 0x11d PushI
	var_290_int = -1; // 0x11e PushI
	var_291_int = 40282; // 0x11f PushI
	AddReply(var_289_int, var_290_int, var_291_int); // 0x120 TObjFunc
	goto Label_293; // 0x122 Jump
}


func_4691(var_117_int, var_118_int)
{
	var_128_int = 0; var_129_bool = 0; var_130_int = 0; var_131_bool = 0; // 0x1253 PushV
	var_132_bool = var_117_int > var_118_int; // 0x1254 GT
	if(var_132_bool == 0) goto Label_4698; // 0x1255 JumpB
	var_133_string = "GenerateMoney: iMin > iMax"; // 0x1256 PushS
	Trace(var_133_string); // 0x1257 Func
	return 4; // 0x1259 Return
	
Label_4698:
	var_130_int = 0; // 0x125a MovI
	var_134_bool = var_117_int != var_118_int; // 0x125b Neq
	if(var_134_bool == 0) goto Label_4705; // 0x125c JumpB
	var_135_int = var_118_int - var_117_int; // 0x125d Sub
	irand(var_130_int, var_135_int); // 0x125e Func
	goto Label_4709; // 0x1260 Jump
	
Label_4709:
	var_130_int = var_130_int + var_117_int; // 0x1265 Add2
	var_136_int = 0; // 0x1266 PushI
	var_137_bool = var_130_int == var_136_int; // 0x1267 Eq
	if(var_137_bool == 0) goto Label_4714; // 0x1268 JumpB
	return 4; // 0x1269 Return
	
Label_4714:
	var_138_int = 0; var_139_string = ""; // 0x126a PushV
	var_139_string = "Money"; // 0x126b MovS
	func_4938(var_138_int, var_139_string); // 0x126c NEW_2
	var_142_int = 0; // 0x126e PushI
	AddItem(var_131_bool, var_138_int, var_142_int, var_130_int); // 0x126f Func
	return 4; // 0x1271 Return
	
Label_4705:
	var_143_int = 0; // 0x1261 PushI
	var_144_bool = var_117_int == var_143_int; // 0x1262 Eq
	if(var_144_bool == 0) goto Label_4709; // 0x1263 JumpB
	return 4; // 0x1264 Return
}


func_4182()
{
	var_294_bool = 0; var_295_bool = 0; // 0x1056 PushV
	CameraSwitchToNormal(); // 0x1057 Func
	var_296_bool = 0; // 0x1059 PushV
	func_5567(var_296_bool); // 0x105a NEW_2
	if(var_296_bool == 0) goto Label_4190; // 0x105c JumpB
	goto Label_4198; // 0x105d Jump
	
Label_4198:
	return 2; // 0x1066 Return
	
Label_4190:
	var_297_string = "head"; // 0x105e PushS
	HasAnimationTrack(var_295_bool, var_297_string); // 0x105f Func
	var_298_bool = var_295_bool; // 0x1061 Push
	if(var_298_bool == 0) goto Label_4198; // 0x1062 JumpB
	var_299_string = "head"; // 0x1063 PushS
	UnlookAsync(var_299_string); // 0x1064 Func
}


func_3166(var_0_object, var_460_bool, var_461_float)
{
	var_462_int = 0; var_463_bool = 0; var_464_int = 0; var_465_string = ""; var_466_int = 0; var_467_bool = 0; var_468_int = 0; var_469_string = ""; // 0xc5e PushV
	func_3505(var_469_string); // 0xc60 NEW_2
	irand(var_466_int, var_469_string); // 0xc62 Func
	var_470_int = 1; // 0xc64 PushI
	var_466_int = var_466_int + var_470_int; // 0xc65 Add2
	Face(var_0_object); // 0xc66 Func
	var_471_bool = 1; // 0xc68 PushB
	SetAttackState(var_471_bool); // 0xc69 Func
	func_4398(); // 0xc6c NEW_2
	var_476_string = "all"; // 0xc6e PushS
	var_477_string = "attack_begin"; // 0xc6f PushS
	var_478_int = var_477_string + var_466_int; // 0xc70 Add
	PlayAnimation(var_476_string, var_478_int); // 0xc71 Func
	WaitForAnimEnd(); // 0xc73 Func
	func_3473(var_468_int, var_469_string); // 0xc76 NEW_2
	var_494_bool = 0; var_495_object = Obj(); // 0xc78 PushV
	var_495_object = var_0_object; // 0xc79 MovT
	func_3948(var_494_bool, var_495_object); // 0xc7a NEW_2
	var_496_bool = var_494_bool == 0; // 0xc7c Not
	if(var_496_bool == 0) goto Label_3202; // 0xc7d JumpB
	StopAsync(); // 0xc7e Func
	var_460_bool = 0; // 0xc80 MovB
	return 8; // 0xc81 Return
	
Label_3202:
	var_497_float = 0; var_498_int = 0; // 0xc82 PushV
	var_497_float = var_461_float; // 0xc83 Mov
	var_498_int = var_466_int; // 0xc84 Mov
	func_3127(var_469_string, var_497_float, var_498_int); // 0xc85 NEW_2
	var_575_string = "all"; // 0xc87 PushS
	var_576_string = "attack_middle"; // 0xc88 PushS
	var_577_int = var_576_string + var_466_int; // 0xc89 Add
	HasAnimation(var_467_bool, var_575_string, var_577_int); // 0xc8a Func
	var_578_bool = var_467_bool; // 0xc8c Push
	if(var_578_bool == 0) goto Label_3283; // 0xc8d JumpB
	func_4398(); // 0xc8f NEW_2
	var_579_string = "all"; // 0xc91 PushS
	var_580_string = "attack_middle"; // 0xc92 PushS
	var_581_int = var_580_string + var_466_int; // 0xc93 Add
	PlayAnimation(var_579_string, var_581_int); // 0xc94 Func
	WaitForAnimEnd(); // 0xc96 Func
	func_3505(var_469_string); // 0xc99 NEW_2
	var_582_bool = 0; var_583_object = Obj(); // 0xc9b PushV
	var_583_object = var_0_object; // 0xc9c MovT
	func_3948(var_582_bool, var_583_object); // 0xc9d NEW_2
	var_584_bool = var_582_bool == 0; // 0xc9f Not
	if(var_584_bool == 0) goto Label_3237; // 0xca0 JumpB
	StopAsync(); // 0xca1 Func
	var_460_bool = 0; // 0xca3 MovB
	return 8; // 0xca4 Return
	
Label_3237:
	var_585_float = 0; var_586_int = 0; // 0xca5 PushV
	var_585_float = var_461_float; // 0xca6 Mov
	var_586_int = var_466_int; // 0xca7 Mov
	func_3127(var_469_string, var_585_float, var_586_int); // 0xca8 NEW_2
	var_468_int = 1; // 0xcaa MovI
	
Label_3243:
	var_587_string = "attack_middle"; // 0xcab PushS
	var_588_int = var_587_string + var_466_int; // 0xcac Add
	var_589_string = "_"; // 0xcad PushS
	var_590_int = var_588_int + var_589_string; // 0xcae Add
	var_469_string = var_590_int + var_468_int; // 0xcaf Add2
	var_591_string = "all"; // 0xcb0 PushS
	HasAnimation(var_467_bool, var_591_string, var_469_string); // 0xcb1 Func
	var_592_bool = var_467_bool == 0; // 0xcb3 Not
	if(var_592_bool == 0) goto Label_3254; // 0xcb4 JumpB
	goto Label_3283; // 0xcb5 Jump
	
Label_3283:
	var_593_bool = 0; // 0xcd3 PushB
	SetAttackState(var_593_bool); // 0xcd4 Func
	var_594_string = "all"; // 0xcd6 PushS
	var_595_string = "attack_end"; // 0xcd7 PushS
	var_596_int = var_595_string + var_466_int; // 0xcd8 Add
	PlayAnimation(var_594_string, var_596_int); // 0xcd9 Func
	var_597_bool = 0; // 0xcdb PushV
	func_3519(var_597_bool); // 0xcdc NEW_2
	if(var_597_bool == 0) goto Label_3301; // 0xcde JumpB
	var_598_bool = 0; var_599_float = 0; // 0xcdf PushV
	var_599_float = 0.75; // 0xce0 MovF
	func_3303(var_598_bool, var_599_float); // 0xce1 NEW_2
	StopAsync(); // 0xce3 Func
	
Label_3301:
	var_460_bool = 1; // 0xce5 MovB
	return 8; // 0xce6 Return
	
Label_3254:
	func_4398(); // 0xcb7 NEW_2
	var_607_string = "all"; // 0xcb9 PushS
	PlayAnimation(var_607_string, var_469_string); // 0xcba Func
	WaitForAnimEnd(); // 0xcbc Func
	func_3505(var_469_string); // 0xcbf NEW_2
	var_608_bool = 0; var_609_object = Obj(); // 0xcc1 PushV
	var_609_object = var_0_object; // 0xcc2 MovT
	func_3948(var_608_bool, var_609_object); // 0xcc3 NEW_2
	var_610_bool = var_608_bool == 0; // 0xcc5 Not
	if(var_610_bool == 0) goto Label_3275; // 0xcc6 JumpB
	StopAsync(); // 0xcc7 Func
	var_460_bool = 0; // 0xcc9 MovB
	return 8; // 0xcca Return
	
Label_3275:
	var_611_float = 0; var_612_int = 0; // 0xccb PushV
	var_611_float = var_461_float; // 0xccc Mov
	var_612_int = var_466_int; // 0xccd Mov
	func_3127(var_469_string, var_611_float, var_612_int); // 0xcce NEW_2
	var_613_int = 1; // 0xcd0 PushI
	var_468_int = var_468_int + var_613_int; // 0xcd1 Add2
	goto Label_3243; // 0xcd2 Jump
}


func_4199(var_241_string)
{
	var_242_bool = 0; var_243_float = 0; var_244_float = 0; var_245_bool = 0; var_246_float = 0; var_247_float = 0; // 0x1067 PushV
	lshHasAnimation(var_245_bool, var_241_string); // 0x1068 Func
	var_248_bool = var_245_bool; // 0x106a Push
	if(var_248_bool == 0) goto Label_4210; // 0x106b JumpB
	lshGetAnimTimes(var_241_string, var_246_float, var_247_float); // 0x106c Func
	var_249_bool = 0; // 0x106e PushB
	lshPlayAnimation(var_246_float, var_247_float, var_249_bool); // 0x106f Func
	goto Label_4214; // 0x1071 Jump
	
Label_4214:
	return 6; // 0x1076 Return
	
Label_4210:
	var_250_string = "Can't find lsh animation : "; // 0x1072 PushS
	var_251_int = var_250_string + var_241_string; // 0x1073 Add
	Trace(var_251_int); // 0x1074 Func
}


func_4722(var_231_string)
{
	var_232_object = Obj(); var_233_int = 0; var_234_bool = 0; var_235_object = Obj(); var_236_int = 0; var_237_bool = 0; // 0x1272 PushV
	CreateInvItem(var_235_object); // 0x1273 Func
	SetItemName(var_231_string); // 0x1275 ObjFunc
	var_238_string = "Organ"; // 0x1277 PushS
	var_239_int = 1; // 0x1278 PushI
	SetProperty(var_238_string, var_239_int); // 0x1279 ObjFunc
	GetItemID(var_236_int); // 0x127b ObjFunc
	var_240_int = 0; // 0x127d PushI
	var_241_int = 1; // 0x127e PushI
	AddItem(var_237_bool, var_235_object, var_240_int, var_241_int); // 0x127f Func
	return 6; // 0x1281 Return
}


func_2166(var_2_object)
{
	var_19_int = 110; // 0x876 PushI
	KillTimer(var_19_int); // 0x877 Func
	var_2_object = 0; // 0x879 TMovB
	func_2302(var_17_object, var_18_bool); // 0x87b NEW_2
	return 0; // 0x87d Return
}


func_4215(var_133_string, var_134_bool)
{
	var_137_bool = 0; var_138_float = 0; var_139_float = 0; var_140_bool = 0; var_141_float = 0; var_142_float = 0; // 0x1077 PushV
	lshHasAnimation(var_140_bool, var_133_string); // 0x1078 Func
	var_143_bool = var_140_bool; // 0x107a Push
	if(var_143_bool == 0) goto Label_4225; // 0x107b JumpB
	lshGetAnimTimes(var_133_string, var_141_float, var_142_float); // 0x107c Func
	lshPlayAnimation(var_141_float, var_142_float, var_134_bool); // 0x107e Func
	goto Label_4229; // 0x1080 Jump
	
Label_4229:
	return 6; // 0x1085 Return
	
Label_4225:
	var_144_string = "Can't find lsh animation : "; // 0x1081 PushS
	var_145_int = var_144_string + var_133_string; // 0x1082 Add
	Trace(var_145_int); // 0x1083 Func
}


func_2174(var_2_object)
{
	var_68_int = 110; // 0x87e PushI
	KillTimer(var_68_int); // 0x87f Func
	var_2_object = 0; // 0x881 TMovB
	func_2309(var_22_bool, var_23_int); // 0x883 NEW_2
	return 0; // 0x885 Return
}


func_5250(var_85_int, var_86_object)
{
	var_88_int = 0; var_89_object = Obj(); // 0x1483 PushV
	var_89_object = var_86_object; // 0x1484 Mov
	func_5157(var_88_int, var_89_object); // 0x1485 NEW_2
	var_85_int = var_88_int; // 0x1486 Mov
	return 0; // 0x1488 Return
}


func_4739()
{
	var_225_int = 0; // 0x1283 PushV
	func_4603(var_225_int); // 0x1284 NEW_2
	var_229_int = 1; // 0x1286 PushI
	var_230_bool = var_225_int != var_229_int; // 0x1287 Neq
	if(var_230_bool == 0) goto Label_4746; // 0x1288 JumpB
	return 0; // 0x1289 Return
	
Label_4746:
	var_231_string = ""; // 0x128a PushV
	var_231_string = "liver"; // 0x128b MovS
	func_4722(var_231_string); // 0x128c NEW_2
	var_242_string = ""; // 0x128e PushV
	var_242_string = "kidney"; // 0x128f MovS
	func_4722(var_242_string); // 0x1290 NEW_2
	var_243_string = ""; // 0x1292 PushV
	var_243_string = "heart"; // 0x1293 MovS
	func_4722(var_243_string); // 0x1294 NEW_2
	var_244_string = ""; // 0x1296 PushV
	var_244_string = "blood"; // 0x1297 MovS
	func_4722(var_244_string); // 0x1298 NEW_2
	return 0; // 0x129a Return
}


func_4230(var_22_object)
{
	var_23_float = 0; var_24_cvector = CVector(0,0,0); var_25_float = 0; var_26_cvector = CVector(0,0,0); // 0x1086 PushV
	GetEyesHeight(var_25_float); // 0x1087 ObjFunc
	var_26_cvector = CVector(0.0, 0.0, 0.0); // 0x1089 MovV
	var_27_float = GetByIndex(var_26_cvector, 1); // 0x108a PushE
	var_27_float = var_25_float; // 0x108b Mov
	SetByIndex(var_26_cvector, 1) = var_27_float; // 0x108c PopE
	var_28_string = "head"; // 0x108d PushS
	LookAsync(var_22_object, var_28_string, var_26_cvector); // 0x108e Func
	return 4; // 0x1090 Return
}


func_5257(var_124_object)
{
	var_125_object = Obj(); // 0x148a PushV
	var_125_object = var_124_object; // 0x148b Mov
	func_5167(var_125_object); // 0x148c NEW_2
	return 0; // 0x148e Return
}


func_2191(var_2_object, var_19_object)
{
	var_20_bool = 0; var_21_int = 0; var_22_bool = 0; var_23_int = 0; // 0x88f PushV
	var_24_bool = 0; var_25_object = Obj(); // 0x890 PushV
	var_25_object = var_19_object; // 0x891 Mov
	func_3948(var_24_bool, var_25_object); // 0x892 NEW_2
	var_58_bool = var_24_bool == 0; // 0x894 Not
	if(var_58_bool == 0) goto Label_2199; // 0x895 JumpB
	return 4; // 0x896 Return
	
Label_2199:
	var_59_object = var_2_object; // 0x897 PushT
	if(var_59_object == 0) goto Label_2202; // 0x898 JumpB
	return 4; // 0x899 Return
	
Label_2202:
	IsPlayerActor(var_19_object, var_22_bool); // 0x89a Func
	var_60_bool = var_22_bool == 0; // 0x89c Not
	if(var_60_bool == 0) goto Label_2207; // 0x89d JumpB
	return 4; // 0x89e Return
	
Label_2207:
	var_61_int = 0; var_62_object = Obj(); // 0x89f PushV
	var_62_object = var_19_object; // 0x8a0 Mov
	func_5140(var_62_object); // 0x8a1 NEW_2
	var_23_int = var_61_int; // 0x8a2 Mov
	var_64_int = 0; // 0x8a4 PushI
	var_65_bool = var_23_int > var_64_int; // 0x8a5 GT
	if(var_65_bool == 0) goto Label_2230; // 0x8a6 JumpB
	var_66_int = 1; // 0x8a7 PushI
	var_67_bool = var_23_int > var_66_int; // 0x8a8 GT
	if(var_67_bool == 0) goto Label_2221; // 0x8a9 JumpB
	func_2174(var_23_int); // 0x8ab NEW_2
	
Label_2221:
	var_69_object = Obj(); // 0x8ad PushV
	var_69_object = var_19_object; // 0x8ae Mov
	func_5149(var_69_object); // 0x8af NEW_2
	var_2_object = 1; // 0x8b1 TMovB
	var_134_int = 110; // 0x8b2 PushI
	var_135_float = 10.0; // 0x8b3 PushF
	SetTimer(var_134_int, var_135_float); // 0x8b4 Func
	
Label_2230:
	return 4; // 0x8b6 Return
}


func_5263(var_27_bool, var_28_object, var_29_object, var_30_float, var_31_bool)
{
	var_32_bool = 0; var_33_bool = 0; // 0x148f PushV
	var_34_bool = 0; var_35_object = Obj(); var_36_bool = 0; // 0x1490 PushV
	var_35_object = var_29_object; // 0x1491 Mov
	var_36_bool = !var_31_bool; // 0x1492 Not2
	func_5175(var_34_bool, var_35_object, var_36_bool); // 0x1493 NEW_2
	var_72_bool = var_34_bool == 0; // 0x1495 Not
	if(var_72_bool == 0) goto Label_5273; // 0x1496 JumpB
	var_27_bool = 0; // 0x1497 MovB
	return 2; // 0x1498 Return
	
Label_5273:
	CanSee(var_33_bool, var_28_object); // 0x1499 Func
	var_73_bool = 0; // 0x149b PushV
	var_73_bool = 1; // 0x149c MovB
	var_74_bool = var_33_bool; // 0x149d Push
	if(var_74_bool == 0) goto Label_5287; // 0x149e JumpB
	var_75_float = 0; var_76_object = Obj(); // 0x149f PushV
	var_76_object = var_28_object; // 0x14a0 Mov
	func_3809(var_76_object); // 0x14a1 NEW_2
	var_83_float = var_30_float * var_30_float; // 0x14a3 Mult
	var_84_bool = var_75_float <= var_83_float; // 0x14a4 LE
	if(var_84_bool == 0) goto Label_5287; // 0x14a5 JumpB
	var_73_bool = 0; // 0x14a6 MovB
	
Label_5287:
	if(var_73_bool == 0) goto Label_5290; // 0x14a7 JumpB
	var_27_bool = 1; // 0x14a8 MovB
	return 2; // 0x14a9 Return
	
Label_5290:
	var_27_bool = 0; // 0x14aa MovB
	return 2; // 0x14ab Return
}


func_4241()
{
	var_21_bool = 0; // 0x1091 PushV
	func_5567(var_21_bool); // 0x1092 NEW_2
	if(var_21_bool == 0) goto Label_4247; // 0x1094 JumpB
	lshStopSpeech(); // 0x1095 Func
	
Label_4247:
	return 0; // 0x1097 Return
}


func_4248(var_44_string)
{
	var_45_bool = 0; var_46_int = 0; var_47_bool = 0; var_48_int = 0; var_49_bool = 0; var_50_float = 0; var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_bool = 0; var_54_int = 0; var_55_bool = 0; var_56_int = 0; var_57_bool = 0; var_58_float = 0; var_59_cvector = CVector(0,0,0); var_60_cvector = CVector(0,0,0); // 0x1098 PushV
	IsExisting3DSound(var_53_bool, var_44_string); // 0x1099 Func
	var_61_bool = var_53_bool == 0; // 0x109b Not
	if(var_61_bool == 0) goto Label_4273; // 0x109c JumpB
	var_54_int = 0; // 0x109d MovI
	
Label_4254:
	var_62_int = 1; // 0x109e PushI
	var_63_int = var_54_int + var_62_int; // 0x109f Add
	var_64_int = var_44_string + var_63_int; // 0x10a0 Add
	IsExisting3DSound(var_55_bool, var_64_int); // 0x10a1 Func
	var_65_bool = var_55_bool == 0; // 0x10a3 Not
	if(var_65_bool == 0) goto Label_4262; // 0x10a4 JumpB
	goto Label_4265; // 0x10a5 Jump
	
Label_4265:
	var_66_bool = var_54_int == 0; // 0x10a9 Not
	if(var_66_bool == 0) goto Label_4268; // 0x10aa JumpB
	return 16; // 0x10ab Return
	
Label_4268:
	irand(var_56_int, var_54_int); // 0x10ac Func
	var_67_int = 1; // 0x10ae PushI
	var_68_int = var_56_int + var_67_int; // 0x10af Add
	var_44_string = var_44_string + var_68_int; // 0x10b0 Add2
	
Label_4273:
	Is3DSoundLoaded(var_57_bool, var_44_string); // 0x10b1 Func
	var_69_bool = var_57_bool; // 0x10b3 Push
	if(var_69_bool == 0) goto Label_4288; // 0x10b4 JumpB
	GetEyesHeight(var_58_float); // 0x10b5 Func
	GetDirection(var_59_cvector); // 0x10b7 Func
	var_70_int = 50; // 0x10b9 PushI
	var_60_cvector = var_59_cvector * var_70_int; // 0x10ba Mult2
	var_71_float = GetByIndex(var_60_cvector, 1); // 0x10bb PushE
	var_71_float = var_71_float + var_58_float; // 0x10bc Add2
	SetByIndex(var_60_cvector, 1) = var_71_float; // 0x10bd PopE
	PlayGlobalSound(var_44_string, var_60_cvector); // 0x10be Func
	
Label_4288:
	return 16; // 0x10c0 Return
	
Label_4262:
	var_72_int = 1; // 0x10a6 PushI
	var_54_int = var_54_int + var_72_int; // 0x10a7 Add2
	goto Label_4254; // 0x10a8 Jump
}


func_3739(var_0_object, var_1_object, var_26_int)
{
	var_27_int = 0; // 0xe9c PushI
	var_28_bool = var_26_int != var_27_int; // 0xe9d Neq
	if(var_28_bool == 0) goto Label_3744; // 0xe9e JumpB
	return 0; // 0xe9f Return
	
Label_3744:
	var_29_bool = 0; var_30_object = Obj(); // 0xea0 PushV
	var_30_object = var_1_object; // 0xea1 MovT
	func_3777(var_29_bool, var_30_object); // 0xea2 NEW_2
	var_65_bool = var_29_bool == 0; // 0xea4 Not
	if(var_65_bool == 0) goto Label_3751; // 0xea5 JumpB
	var_0_object = 1; // 0xea6 TMovB
	
Label_3751:
	var_66_int = 0; // 0xea7 PushI
	KillTimer(var_66_int); // 0xea8 Func
	Stop(); // 0xeaa Func
	return 0; // 0xeac Return
}


func_4763(var_111_bool)
{
	var_112_int = 0; var_113_bool = 0; var_114_int = 0; var_115_bool = 0; // 0x129b PushV
	var_116_bool = var_111_bool; // 0x129c Push
	if(var_116_bool == 0) goto Label_4852; // 0x129d JumpB
	var_117_int = 0; var_118_int = 0; // 0x129e PushV
	var_117_int = 0; // 0x129f MovI
	var_119_int = 100; // 0x12a0 PushI
	var_120_int = 0; // 0x12a1 PushV
	func_4380(var_120_int); // 0x12a2 NEW_2
	var_126_int = 100; // 0x12a4 PushI
	var_127_float = var_120_int * var_126_int; // 0x12a5 Mult
	var_118_int = var_119_int + var_127_float; // 0x12a6 Add2
	func_4691(var_117_int, var_118_int); // 0x12a7 NEW_2
	var_145_int = 8; // 0x12a9 PushI
	irand(var_114_int, var_145_int); // 0x12aa Func
	var_146_int = 0; // 0x12ac PushI
	var_147_bool = var_114_int == var_146_int; // 0x12ad Eq
	if(var_147_bool == 0) goto Label_4792; // 0x12ae JumpB
	var_148_int = 0; var_149_string = ""; // 0x12af PushV
	var_149_string = "lemon"; // 0x12b0 MovS
	func_4938(var_148_int, var_149_string); // 0x12b1 NEW_2
	var_150_int = 0; // 0x12b3 PushI
	var_151_int = 1; // 0x12b4 PushI
	AddItem(var_115_bool, var_148_int, var_150_int, var_151_int); // 0x12b5 Func
	goto Label_4851; // 0x12b7 Jump
	
Label_4851:
	goto Label_4937; // 0x12f3 Jump
	
Label_4937:
	return 4; // 0x1349 Return
	
Label_4792:
	var_152_int = 1; // 0x12b8 PushI
	var_153_bool = var_114_int == var_152_int; // 0x12b9 Eq
	if(var_153_bool == 0) goto Label_4804; // 0x12ba JumpB
	var_154_int = 0; var_155_string = ""; // 0x12bb PushV
	var_155_string = "rusk"; // 0x12bc MovS
	func_4938(var_154_int, var_155_string); // 0x12bd NEW_2
	var_156_int = 0; // 0x12bf PushI
	var_157_int = 1; // 0x12c0 PushI
	AddItem(var_115_bool, var_154_int, var_156_int, var_157_int); // 0x12c1 Func
	goto Label_4851; // 0x12c3 Jump
	
Label_4804:
	var_158_int = 2; // 0x12c4 PushI
	var_159_bool = var_114_int == var_158_int; // 0x12c5 Eq
	if(var_159_bool == 0) goto Label_4816; // 0x12c6 JumpB
	var_160_int = 0; var_161_string = ""; // 0x12c7 PushV
	var_161_string = "hook"; // 0x12c8 MovS
	func_4938(var_160_int, var_161_string); // 0x12c9 NEW_2
	var_162_int = 0; // 0x12cb PushI
	var_163_int = 1; // 0x12cc PushI
	AddItem(var_115_bool, var_160_int, var_162_int, var_163_int); // 0x12cd Func
	goto Label_4851; // 0x12cf Jump
	
Label_4816:
	var_164_int = 4; // 0x12d0 PushI
	var_165_bool = var_114_int == var_164_int; // 0x12d1 Eq
	if(var_165_bool == 0) goto Label_4828; // 0x12d2 JumpB
	var_166_int = 0; var_167_string = ""; // 0x12d3 PushV
	var_167_string = "syringe"; // 0x12d4 MovS
	func_4938(var_166_int, var_167_string); // 0x12d5 NEW_2
	var_168_int = 0; // 0x12d7 PushI
	var_169_int = 1; // 0x12d8 PushI
	AddItem(var_115_bool, var_166_int, var_168_int, var_169_int); // 0x12d9 Func
	goto Label_4851; // 0x12db Jump
	
Label_4828:
	var_170_int = 5; // 0x12dc PushI
	var_171_bool = var_114_int == var_170_int; // 0x12dd Eq
	if(var_171_bool == 0) goto Label_4840; // 0x12de JumpB
	var_172_int = 0; var_173_string = ""; // 0x12df PushV
	var_173_string = "watch"; // 0x12e0 MovS
	func_4938(var_172_int, var_173_string); // 0x12e1 NEW_2
	var_174_int = 0; // 0x12e3 PushI
	var_175_int = 1; // 0x12e4 PushI
	AddItem(var_115_bool, var_172_int, var_174_int, var_175_int); // 0x12e5 Func
	goto Label_4851; // 0x12e7 Jump
	
Label_4840:
	var_176_int = 6; // 0x12e8 PushI
	var_177_bool = var_114_int == var_176_int; // 0x12e9 Eq
	if(var_177_bool == 0) goto Label_4851; // 0x12ea JumpB
	var_178_int = 0; var_179_string = ""; // 0x12eb PushV
	var_179_string = "razor"; // 0x12ec MovS
	func_4938(var_178_int, var_179_string); // 0x12ed NEW_2
	var_180_int = 0; // 0x12ef PushI
	var_181_int = 1; // 0x12f0 PushI
	AddItem(var_115_bool, var_178_int, var_180_int, var_181_int); // 0x12f1 Func
	
Label_4852:
	var_182_int = 0; var_183_int = 0; // 0x12f4 PushV
	var_182_int = 0; // 0x12f5 MovI
	var_184_int = 50; // 0x12f6 PushI
	var_185_int = 0; // 0x12f7 PushV
	func_4380(var_185_int); // 0x12f8 NEW_2
	var_186_int = 50; // 0x12fa PushI
	var_187_float = var_185_int * var_186_int; // 0x12fb Mult
	var_183_int = var_184_int + var_187_float; // 0x12fc Add2
	func_4691(var_182_int, var_183_int); // 0x12fd NEW_2
	var_188_int = 7; // 0x12ff PushI
	irand(var_114_int, var_188_int); // 0x1300 Func
	var_189_int = 0; // 0x1302 PushI
	var_190_bool = var_114_int == var_189_int; // 0x1303 Eq
	if(var_190_bool == 0) goto Label_4878; // 0x1304 JumpB
	var_191_int = 0; var_192_string = ""; // 0x1305 PushV
	var_192_string = "beads"; // 0x1306 MovS
	func_4938(var_191_int, var_192_string); // 0x1307 NEW_2
	var_193_int = 0; // 0x1309 PushI
	var_194_int = 1; // 0x130a PushI
	AddItem(var_115_bool, var_191_int, var_193_int, var_194_int); // 0x130b Func
	goto Label_4937; // 0x130d Jump
	
Label_4878:
	var_195_int = 1; // 0x130e PushI
	var_196_bool = var_114_int == var_195_int; // 0x130f Eq
	if(var_196_bool == 0) goto Label_4890; // 0x1310 JumpB
	var_197_int = 0; var_198_string = ""; // 0x1311 PushV
	var_198_string = "bracelet"; // 0x1312 MovS
	func_4938(var_197_int, var_198_string); // 0x1313 NEW_2
	var_199_int = 0; // 0x1315 PushI
	var_200_int = 1; // 0x1316 PushI
	AddItem(var_115_bool, var_197_int, var_199_int, var_200_int); // 0x1317 Func
	goto Label_4937; // 0x1319 Jump
	
Label_4890:
	var_201_int = 2; // 0x131a PushI
	var_202_bool = var_114_int == var_201_int; // 0x131b Eq
	if(var_202_bool == 0) goto Label_4902; // 0x131c JumpB
	var_203_int = 0; var_204_string = ""; // 0x131d PushV
	var_204_string = "ear_ring"; // 0x131e MovS
	func_4938(var_203_int, var_204_string); // 0x131f NEW_2
	var_205_int = 0; // 0x1321 PushI
	var_206_int = 1; // 0x1322 PushI
	AddItem(var_115_bool, var_203_int, var_205_int, var_206_int); // 0x1323 Func
	goto Label_4937; // 0x1325 Jump
	
Label_4902:
	var_207_int = 3; // 0x1326 PushI
	var_208_bool = var_114_int == var_207_int; // 0x1327 Eq
	if(var_208_bool == 0) goto Label_4914; // 0x1328 JumpB
	var_209_int = 0; var_210_string = ""; // 0x1329 PushV
	var_210_string = "gold_ring"; // 0x132a MovS
	func_4938(var_209_int, var_210_string); // 0x132b NEW_2
	var_211_int = 0; // 0x132d PushI
	var_212_int = 1; // 0x132e PushI
	AddItem(var_115_bool, var_209_int, var_211_int, var_212_int); // 0x132f Func
	goto Label_4937; // 0x1331 Jump
	
Label_4914:
	var_213_int = 4; // 0x1332 PushI
	var_214_bool = var_114_int == var_213_int; // 0x1333 Eq
	if(var_214_bool == 0) goto Label_4926; // 0x1334 JumpB
	var_215_int = 0; var_216_string = ""; // 0x1335 PushV
	var_216_string = "silver_ring"; // 0x1336 MovS
	func_4938(var_215_int, var_216_string); // 0x1337 NEW_2
	var_217_int = 0; // 0x1339 PushI
	var_218_int = 1; // 0x133a PushI
	AddItem(var_115_bool, var_215_int, var_217_int, var_218_int); // 0x133b Func
	goto Label_4937; // 0x133d Jump
	
Label_4926:
	var_219_int = 5; // 0x133e PushI
	var_220_bool = var_114_int == var_219_int; // 0x133f Eq
	if(var_220_bool == 0) goto Label_4937; // 0x1340 JumpB
	var_221_int = 0; var_222_string = ""; // 0x1341 PushV
	var_222_string = "flower"; // 0x1342 MovS
	func_4938(var_221_int, var_222_string); // 0x1343 NEW_2
	var_223_int = 0; // 0x1345 PushI
	var_224_int = 1; // 0x1346 PushI
	AddItem(var_115_bool, var_221_int, var_223_int, var_224_int); // 0x1347 Func
}


func_5292(var_21_int)
{
	var_21_int = 0; // 0x14ad MovI
	return 0; // 0x14ae Return
}


func_5295()
{
	return 0; // 0x14b0 Return
}


func_5297(var_128_int, var_129_string, var_130_object)
{
	var_131_string = "killme"; // 0x14b2 PushS
	var_132_bool = var_129_string == var_131_string; // 0x14b3 Eq
	if(var_132_bool == 0) goto Label_5307; // 0x14b4 JumpB
	var_133_int = 0; var_134_object = Obj(); // 0x14b5 PushV
	var_134_object = var_130_object; // 0x14b6 Mov
	func_5319(var_133_int, var_134_object); // 0x14b7 NEW_2
	var_128_int = var_133_int; // 0x14b8 Mov
	return 0; // 0x14ba Return
	
Label_5307:
	var_128_int = 0; // 0x14bb MovI
	return 0; // 0x14bc Return
}


func_3761(var_0_object)
{
	var_0_object = 1; // 0xeb1 TMovB
	var_22_int = 0; // 0xeb2 PushI
	KillTimer(var_22_int); // 0xeb3 Func
	Stop(); // 0xeb5 Func
	return 0; // 0xeb7 Return
}


func_2231(var_0_object, var_1_object)
{
	var_24_float = 0; var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_bool = 0; var_28_object = Obj(); var_29_bool = 0; var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_bool = 0; var_34_object = Obj(); var_35_bool = 0; // 0x8b7 PushV
	var_0_object = 0; // 0x8b8 TMovB
	var_1_object = 0; // 0x8b9 TMovB
	var_36_float = 0.5; // 0x8ba PushF
	rand(var_30_float, var_36_float); // 0x8bb Func
	Sleep(var_30_float); // 0x8bd Func
	
Label_2239:
	var_37_bool = var_0_object == 0; // 0x8bf Not
	if(var_37_bool == 0) goto Label_2289; // 0x8c0 JumpB
	var_38_bool = var_1_object == 0; // 0x8c1 Not
	if(var_38_bool == 0) goto Label_2258; // 0x8c2 JumpB
	
Label_2243:
	GetPosition(var_32_cvector); // 0x8c3 Func
	var_39_float = 0; // 0x8c5 PushV
	func_2290(var_39_float); // 0x8c6 NEW_2
	GetRandomPFPointInCircle(var_31_cvector, var_32_cvector, var_39_float, var_33_bool); // 0x8c8 Func
	var_42_bool = var_33_bool; // 0x8ca Push
	if(var_42_bool == 0) goto Label_2253; // 0x8cb JumpB
	goto Label_2257; // 0x8cc Jump
	
Label_2257:
	goto Label_2259; // 0x8d1 Jump
	
Label_2259:
	var_43_object = Obj(); var_44_cvector = CVector(0,0,0); // 0x8d3 PushV
	var_44_cvector = var_31_cvector; // 0x8d4 Mov
	func_2318(var_43_object, var_44_cvector); // 0x8d5 NEW_2
	var_34_object = var_43_object; // 0x8d6 Mov
	var_47_bool = var_34_object != 0; // 0x8d8 NullNeq
	if(var_47_bool == 0) goto Label_2284; // 0x8d9 JumpB
	RotatePath(var_34_object, var_35_bool); // 0x8da Func
	var_48_bool = var_35_bool; // 0x8dc Push
	if(var_48_bool == 0) goto Label_2283; // 0x8dd JumpB
	var_49_bool = 0; // 0x8de PushV
	func_2316(var_49_bool); // 0x8df NEW_2
	FollowPath(var_34_object, var_49_bool, var_35_bool); // 0x8e1 Func
	var_34_object = 0; // 0x8e3 SetNull
	var_50_bool = var_35_bool; // 0x8e4 Push
	if(var_50_bool == 0) goto Label_2283; // 0x8e5 JumpB
	TaskCall(4); // 0x8e7 TaskCall
	func_2488(); // 0x8e8 NEW_2
	TaskReturn(); // 0x8e9 TaskReturn
	
Label_2283:
	goto Label_2287; // 0x8eb Jump
	
Label_2287:
	var_34_object = 0; // 0x8ef SetNull
	goto Label_2239; // 0x8f0 Jump
	
Label_2284:
	var_102_int = 1; // 0x8ec PushI
	Sleep(var_102_int); // 0x8ed Func
	
Label_2253:
	var_103_int = 1; // 0x8cd PushI
	Sleep(var_103_int); // 0x8ce Func
	goto Label_2243; // 0x8d0 Jump
	
Label_2258:
	var_1_object = 0; // 0x8d2 TMovB
	
Label_2289:
	return 12; // 0x8f1 Return
}


func_5309(var_176_string, var_177_object)
{
	var_178_string = "killme"; // 0x14be PushS
	var_179_bool = var_176_string == var_178_string; // 0x14bf Eq
	if(var_179_bool == 0) goto Label_5318; // 0x14c0 JumpB
	var_180_object = Obj(); // 0x14c1 PushV
	var_180_object = var_177_object; // 0x14c2 Mov
	func_5337(var_180_object); // 0x14c3 NEW_2
	return 0; // 0x14c5 Return
	
Label_5318:
	return 0; // 0x14c6 Return
}


func_4289(var_106_object)
{
	var_107_object = Obj(); var_108_object = Obj(); // 0x10c1 PushV
	self(var_108_object); // 0x10c2 Func
	var_106_object = var_108_object; // 0x10c4 Mov
	return 2; // 0x10c5 Return
}


func_3777(var_29_bool, var_30_object)
{
	var_31_bool = 0; var_32_object = Obj(); // 0xec2 PushV
	var_32_object = var_30_object; // 0xec3 Mov
	func_3948(var_31_bool, var_32_object); // 0xec4 NEW_2
	var_29_bool = var_31_bool; // 0xec5 Mov
	return 0; // 0xec7 Return
}


func_4295(var_50_cvector, var_51_cvector)
{
	var_58_float = 0; var_59_float = 0; // 0x10c7 PushV
	var_60_int = var_51_cvector | var_51_cvector; // 0x10c8 Or
	var_59_float = sqrt(var_60_int); // 0x10c9 Sqrt2
	var_61_float = 0.0; // 0x10ca PushF
	var_62_bool = var_59_float < var_61_float; // 0x10cb LT
	if(var_62_bool == 0) goto Label_4303; // 0x10cc JumpB
	var_50_cvector = CVector(0.0, 0.0, 0.0); // 0x10cd MovV
	return 2; // 0x10ce Return
	
Label_4303:
	var_50_cvector = var_51_cvector / var_51_cvector; // 0x10cf Div2
	return 2; // 0x10d0 Return
}


func_3784(var_323_string)
{
	var_323_string = "walk"; // 0xec8 MovS
	return 0; // 0xec9 Return
}


func_5319(var_133_int, var_134_object)
{
	var_135_bool = 0; var_136_object = Obj(); // 0x14c8 PushV
	var_136_object = var_134_object; // 0x14c9 Mov
	func_3948(var_135_bool, var_136_object); // 0x14ca NEW_2
	var_169_bool = var_135_bool == 0; // 0x14cc Not
	if(var_169_bool == 0) goto Label_5328; // 0x14cd JumpB
	var_133_int = 0; // 0x14ce MovI
	return 0; // 0x14cf Return
	
Label_5328:
	var_170_bool = 0; var_171_object = Obj(); // 0x14d0 PushV
	var_171_object = var_134_object; // 0x14d1 Mov
	func_5593(var_171_object); // 0x14d2 NEW_2
	if(var_170_bool == 0) goto Label_5335; // 0x14d4 JumpB
	var_133_int = 2; // 0x14d5 MovI
	goto Label_5336; // 0x14d6 Jump
	
Label_5336:
	return 0; // 0x14d8 Return
	
Label_5335:
	var_133_int = 0; // 0x14d7 MovI
}


func_3786(var_324_string)
{
	var_324_string = "run"; // 0xeca MovS
	return 0; // 0xecb Return
}


func_3788(var_539_string, var_540_int)
{
	var_541_int = 2; // 0xecd PushI
	var_542_bool = var_540_int == var_541_int; // 0xece Eq
	if(var_542_bool == 0) goto Label_3795; // 0xecf JumpB
	var_539_string = "fire"; // 0xed0 MovS
	return 0; // 0xed1 Return
	
Label_3795:
	var_543_int = 1; // 0xed3 PushI
	var_544_bool = var_540_int == var_543_int; // 0xed4 Eq
	if(var_544_bool == 0) goto Label_3800; // 0xed5 JumpB
	var_539_string = "bullet"; // 0xed6 MovS
	return 0; // 0xed7 Return
	
Label_3800:
	var_539_string = "phys"; // 0xed8 MovS
	return 0; // 0xed9 Return
}


func_4305(var_549_float, var_550_float, var_551_float)
{
	var_554_bool = var_550_float < var_551_float; // 0x10d2 LT
	if(var_554_bool == 0) goto Label_4310; // 0x10d3 JumpB
	var_549_float = var_550_float; // 0x10d4 Mov
	goto Label_4311; // 0x10d5 Jump
	
Label_4311:
	return 0; // 0x10d7 Return
	
Label_4310:
	var_549_float = var_551_float; // 0x10d6 Mov
}


func_2773()
{
	StopGroup0(); // 0xad5 Func
	StopAsync(); // 0xad7 Func
	var_31_string = "head"; // 0xad9 PushS
	UnlookAsync(var_31_string); // 0xada Func
	var_32_int = 111; // 0xadc PushI
	KillTimer(var_32_int); // 0xadd Func
	return 0; // 0xadf Return
}


func_4312(var_559_float, var_560_float, var_561_float, var_562_float)
{
	var_563_bool = var_560_float < var_561_float; // 0x10d9 LT
	if(var_563_bool == 0) goto Label_4317; // 0x10da JumpB
	var_559_float = var_561_float; // 0x10db Mov
	return 0; // 0x10dc Return
	
Label_4317:
	var_564_bool = var_560_float > var_562_float; // 0x10dd GT
	if(var_564_bool == 0) goto Label_4321; // 0x10de JumpB
	var_559_float = var_562_float; // 0x10df Mov
	return 0; // 0x10e0 Return
	
Label_4321:
	var_559_float = var_560_float; // 0x10e1 Mov
	return 0; // 0x10e2 Return
}


func_5337(var_180_object)
{
	var_181_object = Obj(); // 0x14da PushV
	var_181_object = var_180_object; // 0x14db Mov
	func_5167(var_181_object); // 0x14dc NEW_2
	return 0; // 0x14de Return
}


func_3802(var_52_cvector)
{
	var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); var_56_cvector = CVector(0,0,0); var_57_cvector = CVector(0,0,0); // 0xeda PushV
	GetPosition(var_56_cvector); // 0xedb Func
	GetPosition(var_57_cvector); // 0xedd ObjFunc
	var_52_cvector = var_57_cvector - var_56_cvector; // 0xedf Sub2
	return 4; // 0xee0 Return
}


func_5343(var_21_int)
{
	var_21_int = 2; // 0x14e0 MovI
	return 0; // 0x14e1 Return
}


func_3809(var_36_float)
{
	var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); // 0xee1 PushV
	GetPosition(var_41_cvector); // 0xee2 Func
	GetPosition(var_42_cvector); // 0xee4 ObjFunc
	var_43_cvector = var_42_cvector - var_41_cvector; // 0xee6 Sub2
	var_36_float = var_43_cvector | var_43_cvector; // 0xee7 Or2
	return 6; // 0xee8 Return
}


func_5346(var_29_object)
{
	var_30_object = Obj(); // 0x14e3 PushV
	var_30_object = var_29_object; // 0x14e4 Mov
	func_5573(var_30_object); // 0x14e5 NEW_2
	return 0; // 0x14e7 Return
}


func_4323(var_355_object)
{
	var_356_object = Obj(); var_357_object = Obj(); // 0x10e3 PushV
	CreateObjectVector(var_357_object); // 0x10e4 Func
	var_355_object = var_357_object; // 0x10e6 Mov
	return 2; // 0x10e7 Return
}


func_3303(var_598_bool, var_599_float)
{
	var_600_float = 0; var_601_bool = 0; var_602_float = 0; var_603_bool = 0; // 0xce7 PushV
	rand(var_602_float); // 0xce8 Func
	var_604_bool = var_602_float < var_599_float; // 0xcea LT
	if(var_604_bool == 0) goto Label_3323; // 0xceb JumpB
	
Label_3308:
	IsAnimationPlaying(var_603_bool); // 0xcec Func
	var_605_bool = var_603_bool == 0; // 0xcee Not
	if(var_605_bool == 0) goto Label_3313; // 0xcef JumpB
	goto Label_3322; // 0xcf0 Jump
	
Label_3322:
	goto Label_3328; // 0xcfa Jump
	
Label_3328:
	var_598_bool = 0; // 0xd00 MovB
	return 4; // 0xd01 Return
	
Label_3313:
	var_606_bool = 0; // 0xcf1 PushV
	func_3401(var_606_bool); // 0xcf2 NEW_2
	if(var_606_bool == 0) goto Label_3319; // 0xcf4 JumpB
	var_598_bool = 1; // 0xcf5 MovB
	return 4; // 0xcf6 Return
	
Label_3319:
	sync(); // 0xcf7 Func
	goto Label_3308; // 0xcf9 Jump
	
Label_3323:
	WaitForAnimEnd(); // 0xcfb Func
	func_3505(var_603_bool); // 0xcfe NEW_2
}


func_5352()
{
	return 0; // 0x14e8 Return
}


func_3817(var_102_bool, var_103_object)
{
	var_104_bool = 0; var_105_bool = 0; // 0xee9 PushV
	IsPlayerActor(var_103_object, var_105_bool); // 0xeea Func
	var_102_bool = var_105_bool; // 0xeec Mov
	return 2; // 0xeed Return
}


func_4329(var_71_float, var_72_cvector, var_73_cvector)
{
	var_74_float = GetByIndex(var_72_cvector, 0); // 0x10ea PushE
	var_75_float = GetByIndex(var_73_cvector, 0); // 0x10eb PushE
	var_76_float = var_74_float * var_75_float; // 0x10ec Mult
	var_77_float = GetByIndex(var_72_cvector, 2); // 0x10ed PushE
	var_78_float = GetByIndex(var_73_cvector, 2); // 0x10ee PushE
	var_79_float = var_77_float * var_78_float; // 0x10ef Mult
	var_71_float = var_76_float + var_79_float; // 0x10f0 Add2
	return 0; // 0x10f1 Return
}


func_5353(var_24_bool)
{
	var_24_bool = 0; // 0x14ea MovB
	return 0; // 0x14eb Return
}


func_5356()
{
	return 0; // 0x14ed Return
}


func_3822(var_53_bool, var_54_object, var_55_string)
{
	var_56_bool = 0; var_57_bool = 0; // 0xeee PushV
	var_58_string = "HasProperty"; // 0xeef PushS
	var_59_int = 2; // 0xef0 PushI
	var_60_bool = IsFuncExist(var_54_object, var_58_string, var_59_int); // 0xef1 FuncExist
	var_61_bool = var_60_bool == 0; // 0xef2 Not
	if(var_61_bool == 0) goto Label_3830; // 0xef3 JumpB
	var_53_bool = 0; // 0xef4 MovB
	return 2; // 0xef5 Return
	
Label_3830:
	HasProperty(var_55_string, var_57_bool); // 0xef6 ObjFunc
	var_53_bool = var_57_bool; // 0xef8 Mov
	return 2; // 0xef9 Return
}


func_5358(var_31_bool, var_32_object)
{
	var_33_bool = 0; var_34_bool = 0; // 0x14ee PushV
	CanSee(var_34_bool, var_32_object); // 0x14ef Func
	var_31_bool = 1; // 0x14f1 MovB
	var_35_bool = var_34_bool; // 0x14f2 Push
	if(var_35_bool == 0) goto Label_5372; // 0x14f3 JumpB
	var_36_float = 0; var_37_object = Obj(); // 0x14f4 PushV
	var_37_object = var_32_object; // 0x14f5 Mov
	func_3809(var_37_object); // 0x14f6 NEW_2
	var_44_int = 2250000; // 0x14f8 PushI
	var_45_bool = var_36_float <= var_44_int; // 0x14f9 LE
	if(var_45_bool == 0) goto Label_5372; // 0x14fa JumpB
	var_31_bool = 0; // 0x14fb MovB
	
Label_5372:
	return 2; // 0x14fc Return
}


func_2290(var_39_float)
{
	var_40_float = 0; var_41_float = 0; // 0x8f2 PushV
	GetCameraFarDistance(var_41_float); // 0x8f3 Func
	var_39_float = var_41_float; // 0x8f5 Mov
	return 2; // 0x8f6 Return
}


func_4338(var_80_float, var_81_cvector)
{
	var_82_float = GetByIndex(var_81_cvector, 0); // 0x10f3 PushE
	var_83_float = GetByIndex(var_81_cvector, 0); // 0x10f4 PushE
	var_84_float = var_82_float * var_83_float; // 0x10f5 Mult
	var_85_float = GetByIndex(var_81_cvector, 2); // 0x10f6 PushE
	var_86_float = GetByIndex(var_81_cvector, 2); // 0x10f7 PushE
	var_87_float = var_85_float * var_86_float; // 0x10f8 Mult
	var_88_int = var_84_float + var_87_float; // 0x10f9 Add
	var_80_float = sqrt(var_88_int); // 0x10fa Sqrt2
	return 0; // 0x10fb Return
}


func_3834(var_511_float, var_512_object, var_513_float, var_514_int)
{
	var_518_int = 0; var_519_string = ""; var_520_int = 0; var_521_float = 0; var_522_float = 0; var_523_float = 0; var_524_int = 0; var_525_string = ""; var_526_int = 0; var_527_float = 0; var_528_float = 0; var_529_float = 0; // 0xefa PushV
	var_530_bool = 0; var_531_object = Obj(); var_532_string = ""; // 0xefb PushV
	var_531_object = var_512_object; // 0xefc Mov
	var_532_string = "health"; // 0xefd MovS
	func_3822(var_530_bool, var_531_object, var_532_string); // 0xefe NEW_2
	var_533_bool = var_530_bool == 0; // 0xf00 Not
	if(var_533_bool == 0) goto Label_3844; // 0xf01 JumpB
	var_511_float = 0.0; // 0xf02 MovF
	return 12; // 0xf03 Return
	
Label_3844:
	var_534_bool = 0; var_535_object = Obj(); var_536_string = ""; // 0xf04 PushV
	var_535_object = var_512_object; // 0xf05 Mov
	var_536_string = "armor"; // 0xf06 MovS
	func_3822(var_534_bool, var_535_object, var_536_string); // 0xf07 NEW_2
	var_537_bool = var_534_bool == 0; // 0xf09 Not
	if(var_537_bool == 0) goto Label_3853; // 0xf0a JumpB
	var_524_int = 0; // 0xf0b MovI
	goto Label_3856; // 0xf0c Jump
	
Label_3856:
	var_538_string = "armor_"; // 0xf10 PushS
	var_539_string = ""; var_540_int = 0; // 0xf11 PushV
	var_540_int = var_514_int; // 0xf12 Mov
	func_3788(var_539_string, var_540_int); // 0xf13 NEW_2
	var_525_string = var_538_string + var_539_string; // 0xf15 Add2
	var_545_bool = 0; var_546_object = Obj(); var_547_string = ""; // 0xf16 PushV
	var_546_object = var_512_object; // 0xf17 Mov
	var_547_string = var_525_string; // 0xf18 Mov
	func_3822(var_545_bool, var_546_object, var_547_string); // 0xf19 NEW_2
	var_548_bool = var_545_bool == 0; // 0xf1b Not
	if(var_548_bool == 0) goto Label_3871; // 0xf1c JumpB
	var_526_int = 0; // 0xf1d MovI
	goto Label_3873; // 0xf1e Jump
	
Label_3873:
	var_549_float = 0; var_550_float = 0; var_551_float = 0; // 0xf21 PushV
	var_552_int = var_524_int + var_526_int; // 0xf22 Add
	var_553_float = 100.0; // 0xf23 PushF
	var_550_float = var_552_int / var_552_int; // 0xf24 Div2
	var_551_float = 1; // 0xf25 MovI
	func_4305(var_549_float, var_550_float, var_551_float); // 0xf26 NEW_2
	var_527_float = var_549_float; // 0xf27 Mov
	var_555_string = "health"; // 0xf29 PushS
	GetProperty(var_555_string, var_528_float); // 0xf2a ObjFunc
	var_556_int = 1; // 0xf2c PushI
	var_557_int = var_556_int - var_527_float; // 0xf2d Sub
	var_529_float = var_513_float * var_557_int; // 0xf2e Mult2
	var_558_string = "health"; // 0xf2f PushS
	var_559_float = 0; var_560_float = 0; var_561_float = 0; var_562_float = 0; // 0xf30 PushV
	var_560_float = var_528_float - var_529_float; // 0xf31 Sub2
	var_561_float = 0; // 0xf32 MovI
	var_562_float = 1; // 0xf33 MovI
	func_4312(var_559_float, var_560_float, var_561_float, var_562_float); // 0xf34 NEW_2
	SetProperty(var_558_string, var_559_float); // 0xf36 ObjFunc
	var_565_bool = 0; var_566_object = Obj(); // 0xf38 PushV
	var_566_object = var_512_object; // 0xf39 Mov
	func_3817(var_565_bool, var_566_object); // 0xf3a NEW_2
	if(var_565_bool == 0) goto Label_3905; // 0xf3c JumpB
	var_567_float = 0; // 0xf3d PushV
	var_567_float = -var_529_float; // 0xf3e Neg2
	func_4370(var_567_float); // 0xf3f NEW_2
	
Label_3905:
	var_511_float = var_529_float; // 0xf41 Mov
	return 12; // 0xf42 Return
	
Label_3871:
	GetProperty(var_525_string, var_526_int); // 0xf1f ObjFunc
	
Label_3853:
	var_571_string = "armor"; // 0xf0d PushS
	GetProperty(var_571_string, var_524_int); // 0xf0e ObjFunc
}


func_4348(var_68_float, var_69_cvector, var_70_cvector)
{
	var_71_float = 0; var_72_cvector = CVector(0,0,0); var_73_cvector = CVector(0,0,0); // 0x10fd PushV
	var_72_cvector = var_69_cvector; // 0x10fe Mov
	var_73_cvector = var_70_cvector; // 0x10ff Mov
	func_4329(var_71_float, var_72_cvector, var_73_cvector); // 0x1100 NEW_2
	var_80_float = 0; var_81_cvector = CVector(0,0,0); // 0x1102 PushV
	var_81_cvector = var_69_cvector; // 0x1103 Mov
	func_4338(var_80_float, var_81_cvector); // 0x1104 NEW_2
	var_89_float = 0; var_90_cvector = CVector(0,0,0); // 0x1106 PushV
	var_90_cvector = var_70_cvector; // 0x1107 Mov
	func_4338(var_89_float, var_90_cvector); // 0x1108 NEW_2
	var_91_float = var_80_float * var_89_float; // 0x110a Mult
	var_68_float = var_71_float / var_71_float; // 0x110b Div2
	return 0; // 0x110c Return
}


func_5373(var_59_object)
{
	var_60_object = Obj(); // 0x14fe PushV
	var_60_object = var_59_object; // 0x14ff Mov
	func_5149(var_60_object); // 0x1500 NEW_2
	return 0; // 0x1502 Return
}


func_2302(var_0_object, var_1_object)
{
	var_0_object = 1; // 0x8fe TMovB
	var_1_object = 0; // 0x8ff TMovB
	Stop(); // 0x900 Func
	StopGroup0(); // 0x902 Func
	return 0; // 0x904 Return
}


func_3330(var_0_object, var_403_bool, var_404_float)
{
	var_405_bool = 0; var_406_cvector = CVector(0,0,0); var_407_cvector = CVector(0,0,0); var_408_cvector = CVector(0,0,0); var_409_float = 0; var_410_bool = 0; var_411_cvector = CVector(0,0,0); var_412_cvector = CVector(0,0,0); var_413_cvector = CVector(0,0,0); var_414_float = 0; // 0xd02 PushV
	
Label_3331:
	IsAnimationPlaying(var_410_bool); // 0xd03 Func
	var_415_bool = var_410_bool == 0; // 0xd05 Not
	if(var_415_bool == 0) goto Label_3336; // 0xd06 JumpB
	goto Label_3368; // 0xd07 Jump
	
Label_3368:
	func_3505(var_414_float); // 0xd29 NEW_2
	var_403_bool = 0; // 0xd2b MovB
	return 10; // 0xd2c Return
	
Label_3336:
	var_416_bool = 0; // 0xd08 PushV
	func_3401(var_416_bool); // 0xd09 NEW_2
	if(var_416_bool == 0) goto Label_3342; // 0xd0b JumpB
	var_403_bool = 1; // 0xd0c MovB
	return 10; // 0xd0d Return
	
Label_3342:
	var_455_bool = 0; var_456_object = Obj(); // 0xd0e PushV
	var_456_object = var_0_object; // 0xd0f MovT
	func_3948(var_455_bool, var_456_object); // 0xd10 NEW_2
	var_457_bool = var_455_bool == 0; // 0xd12 Not
	if(var_457_bool == 0) goto Label_3350; // 0xd13 JumpB
	var_403_bool = 0; // 0xd14 MovB
	return 10; // 0xd15 Return
	
Label_3350:
	GetPFPosition(var_411_cvector); // 0xd16 TObjFunc
	GetPFPosition(var_412_cvector); // 0xd18 Func
	var_413_cvector = var_411_cvector - var_412_cvector; // 0xd1a Sub2
	var_414_float = var_413_cvector | var_413_cvector; // 0xd1b Or2
	var_458_float = var_404_float * var_404_float; // 0xd1c Mult
	var_459_bool = var_414_float < var_458_float; // 0xd1d LT
	if(var_459_bool == 0) goto Label_3365; // 0xd1e JumpB
	var_460_bool = 0; var_461_float = 0; // 0xd1f PushV
	var_461_float = var_404_float; // 0xd20 Mov
	func_3166(var_414_float, var_460_bool, var_461_float); // 0xd21 NEW_2
	var_403_bool = 1; // 0xd23 MovB
	return 10; // 0xd24 Return
	
Label_3365:
	sync(); // 0xd25 Func
	goto Label_3331; // 0xd27 Jump
}


func_5379(var_48_bool)
{
	var_48_bool = 0; // 0x1504 MovB
	return 0; // 0x1505 Return
}


func_2309(var_0_object, var_1_object)
{
	var_0_object = 1; // 0x905 TMovB
	var_1_object = 1; // 0x906 TMovB
	Stop(); // 0x907 Func
	StopGroup0(); // 0x909 Func
	return 0; // 0x90b Return
}


func_5382()
{
	return 0; // 0x1507 Return
}


func_1799(var_20_object)
{
	EventDisable(0); // 0x708 EventDisable
	var_21_object = Obj(); // 0x709 PushV
	var_21_object = var_20_object; // 0x70a Mov
	func_1832(var_21_object); // 0x70b NEW_2
	var_101_object = Obj(); // 0x70d PushV
	var_101_object = var_20_object; // 0x70e Mov
	func_5606(var_101_object); // 0x70f NEW_2
	EventEnable(0); // 0x711 EventEnable
	
Label_1810:
	Hold(); // 0x712 Func
	goto Label_1810; // 0x714 Jump
}


func_5384(var_26_bool)
{
	var_26_bool = 0; // 0x1509 MovB
	return 0; // 0x150a Return
}


func_5387()
{
	return 0; // 0x150c Return
}


func_2316(var_49_bool)
{
	var_49_bool = 0; // 0x90c MovB
	return 0; // 0x90d Return
}


func_4365(var_123_int, var_124_string)
{
	var_125_int = 0; var_126_int = 0; // 0x110d PushV
	GetVariable(var_124_string, var_126_int); // 0x110e Func
	var_123_int = var_126_int; // 0x1110 Mov
	return 2; // 0x1111 Return
}


func_2318(var_43_object, var_44_cvector)
{
	var_45_object = Obj(); var_46_object = Obj(); // 0x90e PushV
	FindShiftedPathTo(var_46_object, var_44_cvector); // 0x90f Func
	var_43_object = var_46_object; // 0x911 Mov
	return 2; // 0x912 Return
}


func_5389()
{
	var_303_object = Obj(); var_304_object = Obj(); var_305_object = Obj(); var_306_object = Obj(); var_307_int = 0; var_308_int = 0; var_309_int = 0; var_310_int = 0; var_311_object = Obj(); var_312_int = 0; var_313_bool = 0; var_314_int = 0; var_315_float = 0; var_316_int = 0; var_317_object = Obj(); var_318_int = 0; var_319_int = 0; var_320_int = 0; var_321_int = 0; var_322_int = 0; var_323_int = 0; var_324_int = 0; var_325_int = 0; var_326_int = 0; var_327_int = 0; var_328_object = Obj(); var_329_object = Obj(); var_330_object = Obj(); var_331_object = Obj(); var_332_object = Obj(); var_333_int = 0; var_334_int = 0; var_335_int = 0; var_336_int = 0; var_337_object = Obj(); var_338_int = 0; var_339_bool = 0; var_340_int = 0; var_341_float = 0; var_342_int = 0; var_343_object = Obj(); var_344_int = 0; var_345_int = 0; var_346_int = 0; var_347_int = 0; var_348_int = 0; var_349_int = 0; var_350_int = 0; var_351_int = 0; var_352_int = 0; var_353_int = 0; var_354_object = Obj(); // 0x150d PushV
	var_355_object = Obj(); // 0x150e PushV
	func_4323(var_355_object); // 0x150f NEW_2
	var_329_object = var_355_object; // 0x1510 Mov
	CreateIntVector(var_330_object); // 0x1512 Func
	CreateIntVector(var_331_object); // 0x1514 Func
	CreateIntVector(var_332_object); // 0x1516 Func
	GetSubContainerCount(var_333_int); // 0x1518 ObjFunc
	var_334_int = 0; // 0x151a MovI
	
Label_5403:
	var_358_bool = var_334_int < var_333_int; // 0x151b LT
	if(var_358_bool == 0) goto Label_5475; // 0x151c JumpB
	GetItemCount(var_335_int, var_334_int); // 0x151d ObjFunc
	var_336_int = 0; // 0x151f MovI
	
Label_5408:
	var_359_bool = var_336_int < var_335_int; // 0x1520 LT
	if(var_359_bool == 0) goto Label_5472; // 0x1521 JumpB
	GetItem(var_337_object, var_336_int, var_334_int); // 0x1522 ObjFunc
	GetItemID(var_338_int); // 0x1524 ObjFunc
	var_360_string = "HasDurability"; // 0x1526 PushS
	HasInvItemProperty(var_339_bool, var_338_int, var_360_string); // 0x1527 Func
	var_361_bool = var_339_bool; // 0x1529 Push
	if(var_361_bool == 0) goto Label_5468; // 0x152a JumpB
	var_362_string = "durability"; // 0x152b PushS
	HasProperty(var_339_bool, var_362_string); // 0x152c ObjFunc
	var_363_bool = var_339_bool; // 0x152e Push
	if(var_363_bool == 0) goto Label_5468; // 0x152f JumpB
	var_364_string = "durability"; // 0x1530 PushS
	GetProperty(var_340_int, var_364_string); // 0x1531 ObjFunc
	var_365_bool = 0; // 0x1533 PushV
	var_365_bool = 0; // 0x1534 MovB
	var_366_int = 100; // 0x1535 PushI
	var_367_bool = var_340_int < var_366_int; // 0x1536 LT
	if(var_367_bool == 0) goto Label_5438; // 0x1537 JumpB
	var_368_bool = 0; var_369_object = Obj(); // 0x1538 PushV
	var_369_object = var_337_object; // 0x1539 Mov
	func_5536(var_369_object); // 0x153a NEW_2
	if(var_368_bool == 0) goto Label_5438; // 0x153c JumpB
	var_365_bool = 1; // 0x153d MovB
	
Label_5438:
	if(var_365_bool == 0) goto Label_5468; // 0x153e JumpB
	add(var_337_object); // 0x153f ObjFunc
	add(var_334_int); // 0x1541 ObjFunc
	add(var_336_int); // 0x1543 ObjFunc
	var_375_int = 0; var_376_object = Obj(); var_377_int = 0; // 0x1545 PushV
	var_376_object = var_337_object; // 0x1546 Mov
	var_377_int = 0; // 0x1547 MovI
	func_4614(var_375_int, var_376_object, var_377_int); // 0x1548 NEW_2
	var_341_float = var_375_int; // 0x1549 Mov
	var_417_float = 1.0; // 0x154b PushF
	var_418_float = 2.0; // 0x154c PushF
	var_419_float = var_418_float * var_340_int; // 0x154d Mult
	var_420_float = 100.0; // 0x154e PushF
	var_421_float = var_419_float / var_420_float; // 0x154f Div
	var_422_int = var_417_float + var_421_float; // 0x1550 Add
	var_423_float = var_341_float * var_422_int; // 0x1551 Mult
	var_424_int = 100; // 0x1552 PushI
	var_425_int = var_424_int - var_340_int; // 0x1553 Sub
	var_426_float = var_423_float * var_425_int; // 0x1554 Mult
	var_427_int = 300; // 0x1555 PushI
	var_342_int = var_426_float / var_426_float; // 0x1556 Div2
	var_428_bool = var_342_int == 0; // 0x1557 Not
	if(var_428_bool == 0) goto Label_5466; // 0x1558 JumpB
	var_342_int = 1; // 0x1559 MovI
	
Label_5466:
	add(var_342_int); // 0x155a ObjFunc
	
Label_5468:
	var_337_object = 0; // 0x155c SetNull
	var_429_int = 1; // 0x155d PushI
	var_336_int = var_336_int + var_429_int; // 0x155e Add2
	goto Label_5408; // 0x155f Jump
	
Label_5472:
	var_430_int = 1; // 0x1560 PushI
	var_334_int = var_334_int + var_430_int; // 0x1561 Add2
	goto Label_5403; // 0x1562 Jump
	
Label_5475:
	CreateIntVector(var_343_object); // 0x1563 Func
	var_431_string = "repair.xml"; // 0x1565 PushS
	ChooseItem(var_329_object, var_343_object, var_332_object, var_431_string); // 0x1566 Func
	size(var_344_int); // 0x1568 ObjFunc
	var_432_bool = var_344_int == 0; // 0x156a Not
	if(var_432_bool == 0) goto Label_5485; // 0x156b JumpB
	return 52; // 0x156c Return
	
Label_5485:
	var_345_int = 0; // 0x156d MovI
	var_346_int = 0; // 0x156e MovI
	
Label_5487:
	var_433_bool = var_346_int < var_344_int; // 0x156f LT
	if(var_433_bool == 0) goto Label_5497; // 0x1570 JumpB
	get(var_347_int, var_346_int); // 0x1571 ObjFunc
	get(var_348_int, var_347_int); // 0x1573 ObjFunc
	var_345_int = var_345_int + var_348_int; // 0x1575 Add2
	var_434_int = 1; // 0x1576 PushI
	var_346_int = var_346_int + var_434_int; // 0x1577 Add2
	goto Label_5487; // 0x1578 Jump
	
Label_5497:
	var_435_string = "money"; // 0x1579 PushS
	GetProperty(var_435_string, var_349_int); // 0x157a ObjFunc
	var_349_int = var_349_int - var_345_int; // 0x157c Sub2
	var_436_int = 0; // 0x157d PushI
	var_437_bool = var_349_int < var_436_int; // 0x157e LT
	if(var_437_bool == 0) goto Label_5505; // 0x157f JumpB
	return 52; // 0x1580 Return
	
Label_5505:
	var_438_string = "money"; // 0x1581 PushS
	SetProperty(var_438_string, var_349_int); // 0x1582 ObjFunc
	var_350_int = 0; // 0x1584 MovI
	
Label_5509:
	var_439_bool = var_350_int < var_344_int; // 0x1585 LT
	if(var_439_bool == 0) goto Label_5530; // 0x1586 JumpB
	get(var_351_int, var_350_int); // 0x1587 ObjFunc
	get(var_352_int, var_351_int); // 0x1589 ObjFunc
	get(var_353_int, var_351_int); // 0x158b ObjFunc
	GetItem(var_354_object, var_353_int, var_352_int); // 0x158d ObjFunc
	var_440_string = "durability"; // 0x158f PushS
	var_441_int = 100; // 0x1590 PushI
	SetProperty(var_440_string, var_441_int); // 0x1591 ObjFunc
	var_442_int = 1; // 0x1593 PushI
	SetItem(var_354_object, var_442_int, var_353_int, var_352_int); // 0x1594 ObjFunc
	var_354_object = 0; // 0x1596 SetNull
	var_443_int = 1; // 0x1597 PushI
	var_350_int = var_350_int + var_443_int; // 0x1598 Add2
	goto Label_5509; // 0x1599 Jump
	
Label_5530:
	return 52; // 0x159a Return
}


func_4370(var_567_float)
{
	var_568_object = Obj(); var_569_object = Obj(); // 0x1112 PushV
	CreateFloatVector(var_569_object); // 0x1113 Func
	add(var_567_float); // 0x1115 ObjFunc
	var_570_int = 15; // 0x1117 PushI
	SendWorldWndMessage(var_570_int, var_569_object); // 0x1118 Func
	return 2; // 0x111a Return
}


func_4380(var_120_int)
{
	var_121_float = 0; var_122_float = 0; // 0x111c PushV
	GetGameTime(var_122_float); // 0x111d Func
	var_123_int = 1; // 0x111f PushI
	var_124_int = 0; // 0x1120 PushV
	var_125_int = 24; // 0x1121 PushI
	var_124_int = var_122_float / var_122_float; // 0x1122 Div2
	var_120_int = var_123_int + var_124_int; // 0x1123 Add2
	return 2; // 0x1124 Return
}


func_2849(var_182_object)
{
	var_189_object = Obj(); var_190_bool = 0; var_191_float = 0; // 0xb22 PushV
	var_189_object = var_182_object; // 0xb23 Mov
	var_190_bool = 1; // 0xb24 MovB
	var_191_float = 180.0; // 0xb25 MovF
	func_2863(var_185_int, var_186_bool, var_187_float, var_188_int, var_182_object, var_189_object, var_190_bool, var_191_float); // 0xb26 NEW_2
	return 0; // 0xb28 Return
}


func_4389(var_21_object)
{
	var_22_bool = 0; var_23_bool = 0; // 0x1125 PushV
	IsPlayerActor(var_21_object, var_23_bool); // 0x1126 Func
	var_24_bool = var_23_bool; // 0x1128 Push
	if(var_24_bool == 0) goto Label_4397; // 0x1129 JumpB
	var_25_string = "attack"; // 0x112a PushS
	PlayGlobalMusic(var_25_string); // 0x112b Func
	
Label_4397:
	return 2; // 0x112d Return
}


func_1832(var_21_object)
{
	var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_string = ""; var_27_object = Obj(); var_28_bool = 0; var_29_bool = 0; var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_string = ""; var_37_object = Obj(); var_38_bool = 0; var_39_bool = 0; var_40_float = 0; var_41_cvector = CVector(0,0,0); // 0x728 PushV
	var_42_bool = var_21_object == 0; // 0x729 NullEq
	if(var_42_bool == 0) goto Label_1840; // 0x72a JumpB
	var_43_string = ""; // 0x72b PushV
	var_43_string = "fdie"; // 0x72c MovS
	func_1923(var_43_string); // 0x72d NEW_2
	goto Label_1922; // 0x72f Jump
	
Label_1922:
	return 20; // 0x782 Return
	
Label_1840:
	GetPosition(var_32_cvector); // 0x730 ObjFunc
	GetPosition(var_33_cvector); // 0x732 Func
	GetDirection(var_34_cvector); // 0x734 Func
	var_35_cvector = var_33_cvector - var_32_cvector; // 0x736 Sub2
	var_75_float = GetByIndex(var_35_cvector, 0); // 0x737 PushE
	var_76_float = GetByIndex(var_34_cvector, 0); // 0x738 PushE
	var_77_float = var_75_float * var_76_float; // 0x739 Mult
	var_78_float = GetByIndex(var_35_cvector, 2); // 0x73a PushE
	var_79_float = GetByIndex(var_34_cvector, 2); // 0x73b PushE
	var_80_float = var_78_float * var_79_float; // 0x73c Mult
	var_81_int = var_77_float + var_80_float; // 0x73d Add
	var_82_int = 0; // 0x73e PushI
	var_83_bool = var_81_int >= var_82_int; // 0x73f GE
	if(var_83_bool == 0) goto Label_1859; // 0x740 JumpB
	var_36_string = "fdie"; // 0x741 MovS
	goto Label_1860; // 0x742 Jump
	
Label_1860:
	RemoveRTEnvelope(); // 0x744 Func
	SetDeathState(); // 0x746 Func
	Stop(); // 0x748 Func
	StopAsync(); // 0x74a Func
	var_37_object = var_21_object; // 0x74c Mov
	var_84_string = "GetScriptProperty"; // 0x74d PushS
	var_85_int = 2; // 0x74e PushI
	var_86_bool = IsFuncExist(var_21_object, var_84_string, var_85_int); // 0x74f FuncExist
	if(var_86_bool == 0) goto Label_1884; // 0x750 JumpB
	var_87_string = "Owner"; // 0x751 PushS
	HasScriptProperty(var_38_bool, var_87_string); // 0x752 ObjFunc
	var_88_bool = var_38_bool; // 0x754 Push
	if(var_88_bool == 0) goto Label_1884; // 0x755 JumpB
	var_89_string = "Owner"; // 0x756 PushS
	GetScriptProperty(var_37_object, var_89_string); // 0x757 ObjFunc
	var_90_bool = var_37_object == 0; // 0x759 NullEq
	if(var_90_bool == 0) goto Label_1884; // 0x75a JumpB
	var_37_object = var_21_object; // 0x75b Mov
	
Label_1884:
	var_91_string = "@GetEyesHeight"; // 0x75c PushS
	var_92_int = 1; // 0x75d PushI
	var_93_bool = IsFuncExist(var_37_object, var_91_string, var_92_int); // 0x75e FuncExist
	if(var_93_bool == 0) goto Label_1899; // 0x75f JumpB
	GetEyesHeight(var_40_float); // 0x760 ObjFunc
	var_41_cvector = CVector(0.0, 0.0, 0.0); // 0x762 MovV
	var_94_float = GetByIndex(var_41_cvector, 1); // 0x763 PushE
	var_94_float = var_40_float; // 0x764 Mov
	SetByIndex(var_41_cvector, 1) = var_94_float; // 0x765 PopE
	var_95_string = "head"; // 0x766 PushS
	LookAsync(var_21_object, var_95_string, var_41_cvector); // 0x767 Func
	var_39_bool = 1; // 0x769 MovB
	goto Label_1900; // 0x76a Jump
	
Label_1900:
	var_96_string = ""; // 0x76c PushV
	var_96_string = var_36_string; // 0x76d Mov
	func_4248(var_96_string); // 0x76e NEW_2
	var_97_string = "all"; // 0x770 PushS
	PlayAnimation(var_97_string, var_36_string); // 0x771 Func
	WaitForAnimEnd(); // 0x773 Func
	var_98_bool = var_39_bool; // 0x775 Push
	if(var_98_bool == 0) goto Label_1916; // 0x776 JumpB
	StopAsync(); // 0x777 Func
	var_99_string = "head"; // 0x779 PushS
	UnlookAsync(var_99_string); // 0x77a Func
	
Label_1916:
	var_100_string = "all"; // 0x77c PushS
	LockAnimationEnd(var_100_string, var_36_string); // 0x77d Func
	RemoveEnvelope(); // 0x77f Func
	var_37_object = 0; // 0x781 SetNull
	
Label_1899:
	var_39_bool = 0; // 0x76b MovB
	
Label_1859:
	var_36_string = "bdie"; // 0x743 MovS
}


func_2857(var_508_float)
{
	var_508_float = 0.05; // 0xb2a MovF
	return 0; // 0xb2b Return
}


func_2860(var_515_int)
{
	var_515_int = 0; // 0xb2d MovI
	return 0; // 0xb2e Return
}


func_3373(var_0_object, var_418_bool)
{
	var_419_cvector = CVector(0,0,0); var_420_cvector = CVector(0,0,0); var_421_cvector = CVector(0,0,0); var_422_float = 0; var_423_float = 0; var_424_cvector = CVector(0,0,0); var_425_cvector = CVector(0,0,0); var_426_cvector = CVector(0,0,0); var_427_float = 0; var_428_float = 0; // 0xd2d PushV
	var_429_bool = 0; var_430_object = Obj(); // 0xd2e PushV
	var_430_object = var_0_object; // 0xd2f MovT
	func_3948(var_429_bool, var_430_object); // 0xd30 NEW_2
	var_431_bool = var_429_bool == 0; // 0xd32 Not
	if(var_431_bool == 0) goto Label_3382; // 0xd33 JumpB
	var_418_bool = 0; // 0xd34 MovB
	return 10; // 0xd35 Return
	
Label_3382:
	var_432_bool = 0; // 0xd36 PushV
	func_3462(var_428_float, var_432_bool); // 0xd37 NEW_2
	if(var_432_bool == 0) goto Label_3399; // 0xd39 JumpB
	GetPFPosition(var_424_cvector); // 0xd3a TObjFunc
	GetPFPosition(var_425_cvector); // 0xd3c Func
	var_426_cvector = var_424_cvector - var_425_cvector; // 0xd3e Sub2
	var_427_float = var_426_cvector | var_426_cvector; // 0xd3f Or2
	GetAttackDistance(var_428_float); // 0xd40 TObjFunc
	var_433_int = 50; // 0xd42 PushI
	var_428_float = var_428_float + var_433_int; // 0xd43 Add2
	var_434_float = var_428_float * var_428_float; // 0xd44 Mult
	var_418_bool = var_427_float <= var_434_float; // 0xd45 LE2
	return 10; // 0xd46 Return
	
Label_3399:
	var_418_bool = 0; // 0xd47 MovB
	return 10; // 0xd48 Return
}


func_4398()
{
	var_472_object = Obj(); var_473_object = Obj(); // 0x112e PushV
	GetScene(var_473_object); // 0x112f Func
	var_474_string = "battle"; // 0x1131 PushS
	var_475_object = Obj(); // 0x1132 PushV
	func_4289(var_475_object); // 0x1133 NEW_2
	BroadcastMessage(var_474_string, var_475_object, var_473_object); // 0x1135 Func
	return 2; // 0x1137 Return
}


func_2863(var_0_object, var_3_string, var_5_bool, var_189_object, var_190_bool, var_191_float, var_266_bool, var_352_bool)
{
	var_192_float = 0; var_193_cvector = CVector(0,0,0); var_194_cvector = CVector(0,0,0); var_195_bool = 0; var_196_bool = 0; var_197_float = 0; var_198_cvector = CVector(0,0,0); var_199_float = 0; var_200_cvector = CVector(0,0,0); var_201_bool = 0; var_202_float = 0; var_203_float = 0; var_204_cvector = CVector(0,0,0); var_205_cvector = CVector(0,0,0); var_206_bool = 0; var_207_bool = 0; var_208_float = 0; var_209_cvector = CVector(0,0,0); var_210_float = 0; var_211_cvector = CVector(0,0,0); var_212_bool = 0; var_213_float = 0; // 0xb2f PushV
	func_3092(var_211_cvector, var_212_bool, var_213_float); // 0xb31 NEW_2
	var_5_bool = 0; // 0xb33 TMovI
	var_236_string = "@GetAttackDistance"; // 0xb34 PushS
	var_237_int = 1; // 0xb35 PushI
	var_238_bool = IsFuncExist(var_189_object, var_236_string, var_237_int); // 0xb36 FuncExist
	if(var_238_bool == 0) goto Label_2877; // 0xb37 JumpB
	GetAttackDistance(var_203_float); // 0xb38 ObjFunc
	var_239_int = 50; // 0xb3a PushI
	var_203_float = var_203_float + var_239_int; // 0xb3b Add2
	goto Label_2878; // 0xb3c Jump
	
Label_2878:
	var_240_int = 150; // 0xb3e PushI
	var_241_bool = var_203_float >= var_240_int; // 0xb3f GE
	if(var_241_bool == 0) goto Label_2882; // 0xb40 JumpB
	var_203_float = 150; // 0xb41 MovI
	
Label_2882:
	var_3_string = 0; // 0xb42 TMovB
	var_0_object = var_189_object; // 0xb43 TMov
	IsPlayerActor(var_0_object, var_206_bool); // 0xb44 Func
	var_242_bool = var_206_bool; // 0xb46 Push
	if(var_242_bool == 0) goto Label_2896; // 0xb47 JumpB
	var_243_string = "attack"; // 0xb48 PushS
	PlayGlobalMusic(var_243_string); // 0xb49 Func
	var_244_object = Obj(); // 0xb4b PushV
	func_4289(var_244_object); // 0xb4c NEW_2
	SendPlayerEnemy(var_189_object, var_244_object); // 0xb4e Func
	
Label_2896:
	var_247_bool = var_190_bool; // 0xb50 Push
	if(var_247_bool == 0) goto Label_2900; // 0xb51 JumpB
	var_207_bool = 0; // 0xb52 MovB
	goto Label_2901; // 0xb53 Jump
	
Label_2901:
	var_248_float = 400.0; // 0xb55 PushF
	var_208_float = var_248_float + var_203_float; // 0xb56 Add2
	
Label_2903:
	var_249_bool = 0; // 0xb57 PushV
	var_249_bool = 0; // 0xb58 MovB
	var_250_bool = 0; var_251_object = Obj(); // 0xb59 PushV
	var_251_object = var_0_object; // 0xb5a MovT
	func_3948(var_250_bool, var_251_object); // 0xb5b NEW_2
	if(var_250_bool == 0) goto Label_2913; // 0xb5d JumpB
	var_252_bool = var_3_string == 0; // 0xb5e Not
	if(var_252_bool == 0) goto Label_2913; // 0xb5f JumpB
	var_249_bool = 1; // 0xb60 MovB
	
Label_2913:
	if(var_249_bool == 0) goto Label_3075; // 0xb61 JumpB
	func_3505(var_213_float); // 0xb63 NEW_2
	GetPFPosition(var_204_cvector); // 0xb65 TObjFunc
	GetPFPosition(var_205_cvector); // 0xb67 Func
	var_209_cvector = var_204_cvector - var_205_cvector; // 0xb69 Sub2
	var_210_float = var_209_cvector | var_209_cvector; // 0xb6a Or2
	var_258_float = var_208_float * var_208_float; // 0xb6b Mult
	var_259_bool = var_210_float >= var_258_float; // 0xb6c GE
	if(var_259_bool == 0) goto Label_2941; // 0xb6d JumpB
	var_260_bool = 0; var_261_object = Obj(); var_262_float = 0; var_263_float = 0; var_264_bool = 0; var_265_bool = 0; // 0xb6e PushV
	var_261_object = var_0_object; // 0xb6f MovT
	var_262_float = var_203_float; // 0xb70 Mov
	var_263_float = 3000.0; // 0xb71 MovF
	var_264_bool = 1; // 0xb72 MovB
	var_265_bool = 0; // 0xb73 MovB
	TaskCall(7); // 0xb74 TaskCall
	func_3532(var_268_bool, var_260_bool, var_261_object, var_262_float, var_263_float, var_264_bool, var_265_bool); // 0xb75 NEW_2
	TaskReturn(); // 0xb76 TaskReturn
	var_337_bool = var_266_bool == 0; // 0xb78 Not
	if(var_337_bool == 0) goto Label_2939; // 0xb79 JumpB
	goto Label_3075; // 0xb7a Jump
	
Label_3075:
	WaitForAnimEnd(); // 0xc03 Func
	var_338_string = var_3_string; // 0xc05 PushT
	if(var_338_string == 0) goto Label_3080; // 0xc06 JumpB
	return 22; // 0xc07 Return
	
Label_3080:
	var_339_string = "all"; // 0xc08 PushS
	var_340_string = "attack_off"; // 0xc09 PushS
	PlayAnimation(var_339_string, var_340_string); // 0xc0a Func
	WaitForAnimEnd(); // 0xc0c Func
	var_341_bool = var_206_bool; // 0xc0e Push
	if(var_341_bool == 0) goto Label_3091; // 0xc0f JumpB
	var_342_float = 2.0; // 0xc10 PushF
	Sleep(var_342_float); // 0xc11 Func
	
Label_3091:
	return 22; // 0xc13 Return
	
Label_2939:
	var_207_bool = 0; // 0xb7b MovB
	goto Label_3074; // 0xb7c Jump
	
Label_3074:
	goto Label_2903; // 0xc02 Jump
	
Label_2941:
	var_343_float = var_191_float * var_191_float; // 0xb7d Mult
	var_344_bool = var_210_float >= var_343_float; // 0xb7e GE
	if(var_344_bool == 0) goto Label_3066; // 0xb7f JumpB
	GetPFPosition(var_211_cvector); // 0xb80 TObjFunc
	CanReachByPF(var_212_bool, var_211_cvector); // 0xb82 Func
	var_345_bool = var_212_bool == 0; // 0xb84 Not
	if(var_345_bool == 0) goto Label_2965; // 0xb85 JumpB
	var_346_bool = 0; var_347_object = Obj(); var_348_float = 0; var_349_float = 0; var_350_bool = 0; var_351_bool = 0; // 0xb86 PushV
	var_347_object = var_0_object; // 0xb87 MovT
	var_348_float = var_203_float; // 0xb88 Mov
	var_349_float = 3000.0; // 0xb89 MovF
	var_350_bool = 1; // 0xb8a MovB
	var_351_bool = 0; // 0xb8b MovB
	TaskCall(7); // 0xb8c TaskCall
	func_3532(var_354_bool, var_346_bool, var_347_object, var_348_float, var_349_float, var_350_bool, var_351_bool); // 0xb8d NEW_2
	TaskReturn(); // 0xb8e TaskReturn
	var_355_bool = var_352_bool == 0; // 0xb90 Not
	if(var_355_bool == 0) goto Label_2963; // 0xb91 JumpB
	goto Label_3075; // 0xb92 Jump
	
Label_2963:
	var_207_bool = 0; // 0xb93 MovB
	goto Label_2903; // 0xb94 Jump
	
Label_2965:
	var_356_bool = var_207_bool == 0; // 0xb95 Not
	if(var_356_bool == 0) goto Label_2990; // 0xb96 JumpB
	var_357_object = Obj(); // 0xb97 PushV
	var_357_object = var_0_object; // 0xb98 MovT
	func_4098(); // 0xb99 NEW_2
	var_358_string = "all"; // 0xb9b PushS
	var_359_string = "attack_on"; // 0xb9c PushS
	PlayAnimation(var_358_string, var_359_string); // 0xb9d Func
	WaitForAnimEnd(); // 0xb9f Func
	func_3505(var_213_float); // 0xba2 NEW_2
	StopAsync(); // 0xba4 Func
	var_207_bool = 1; // 0xba6 MovB
	var_360_bool = 0; var_361_object = Obj(); // 0xba7 PushV
	var_361_object = var_0_object; // 0xba8 MovT
	func_3948(var_360_bool, var_361_object); // 0xba9 NEW_2
	var_362_bool = var_360_bool == 0; // 0xbab Not
	if(var_362_bool == 0) goto Label_2990; // 0xbac JumpB
	goto Label_3075; // 0xbad Jump
	
Label_2990:
	rand(var_213_float); // 0xbae Func
	var_363_bool = 0; // 0xbb0 PushV
	var_363_bool = 1; // 0xbb1 MovB
	var_364_float = 0.25; // 0xbb2 PushF
	var_365_bool = var_213_float < var_364_float; // 0xbb3 LT
	if(var_365_bool == 0) goto Label_3002; // 0xbb4 JumpB
	var_366_bool = 0; // 0xbb5 PushV
	func_3462(var_363_bool, var_366_bool); // 0xbb6 NEW_2
	if(var_366_bool == 0) goto Label_3002; // 0xbb8 JumpB
	var_363_bool = 0; // 0xbb9 MovB
	
Label_3002:
	if(var_363_bool == 0) goto Label_3019; // 0xbba JumpB
	Face(var_0_object); // 0xbbb Func
	func_3512(); // 0xbbe NEW_2
	var_401_string = "all"; // 0xbc0 PushS
	var_402_string = "attack_stay"; // 0xbc1 PushS
	PlayAnimation(var_401_string, var_402_string); // 0xbc2 Func
	var_403_bool = 0; var_404_float = 0; // 0xbc4 PushV
	var_404_float = var_191_float; // 0xbc5 Mov
	func_3330(var_213_float, var_403_bool, var_404_float); // 0xbc6 NEW_2
	StopAsync(); // 0xbc8 Func
	goto Label_3065; // 0xbca Jump
	
Label_3065:
	goto Label_3074; // 0xbf9 Jump
	
Label_3019:
	Face(var_0_object); // 0xbcb Func
	var_614_string = "all"; // 0xbcd PushS
	var_615_string = "fjump"; // 0xbce PushS
	PlayAnimation(var_614_string, var_615_string); // 0xbcf Func
	WaitForAnimEnd(); // 0xbd1 Func
	func_3505(var_213_float); // 0xbd4 NEW_2
	var_616_cvector = CVector(0.0, 0.0, 0.0); // 0xbd6 PushVec
	SetSpeed(var_616_cvector); // 0xbd7 Func
	Stop(); // 0xbd9 Func
	StopAsync(); // 0xbdb Func
	var_617_bool = 0; // 0xbdd PushV
	func_3462(var_213_float, var_617_bool); // 0xbde NEW_2
	var_618_bool = var_617_bool == 0; // 0xbe0 Not
	if(var_618_bool == 0) goto Label_3065; // 0xbe1 JumpB
	var_619_bool = 0; var_620_object = Obj(); // 0xbe2 PushV
	var_620_object = var_0_object; // 0xbe3 MovT
	func_3948(var_619_bool, var_620_object); // 0xbe4 NEW_2
	var_621_bool = var_619_bool == 0; // 0xbe6 Not
	if(var_621_bool == 0) goto Label_3049; // 0xbe7 JumpB
	goto Label_3075; // 0xbe8 Jump
	
Label_3049:
	GetPFPosition(var_204_cvector); // 0xbe9 TObjFunc
	GetPFPosition(var_205_cvector); // 0xbeb Func
	var_209_cvector = var_204_cvector - var_205_cvector; // 0xbed Sub2
	var_210_float = var_209_cvector | var_209_cvector; // 0xbee Or2
	var_622_float = var_191_float * var_191_float; // 0xbef Mult
	var_623_bool = var_210_float < var_622_float; // 0xbf0 LT
	if(var_623_bool == 0) goto Label_3065; // 0xbf1 JumpB
	var_624_bool = 0; var_625_float = 0; // 0xbf2 PushV
	var_625_float = var_191_float; // 0xbf3 Mov
	func_3166(var_213_float, var_624_bool, var_625_float); // 0xbf4 NEW_2
	var_626_bool = var_624_bool == 0; // 0xbf6 Not
	if(var_626_bool == 0) goto Label_3065; // 0xbf7 JumpB
	goto Label_3075; // 0xbf8 Jump
	
Label_3066:
	var_627_bool = 0; var_628_float = 0; // 0xbfa PushV
	var_628_float = var_191_float; // 0xbfb Mov
	func_3166(var_213_float, var_627_bool, var_628_float); // 0xbfc NEW_2
	var_629_bool = var_627_bool == 0; // 0xbfe Not
	if(var_629_bool == 0) goto Label_3073; // 0xbff JumpB
	goto Label_3075; // 0xc00 Jump
	
Label_3073:
	var_207_bool = 1; // 0xc01 MovB
	
Label_2900:
	var_207_bool = 1; // 0xb54 MovB
	
Label_2877:
	var_203_float = var_191_float; // 0xb3d Mov
}


func_4409()
{
	var_26_int = 100; // 0x113a PushI
	SetReturnValue(var_26_int); // 0x113b ObjFunc
	return 0; // 0x113d Return
}


func_4414(var_259_bool)
{
	var_261_int = 0; var_262_string = ""; // 0x113f PushV
	var_262_string = "branch"; // 0x1140 MovS
	func_4365(var_261_int, var_262_string); // 0x1141 NEW_2
	var_263_int = 0; // 0x1143 PushI
	var_264_bool = var_261_int == var_263_int; // 0x1144 Eq
	if(var_264_bool == 0) goto Label_4424; // 0x1145 JumpB
	var_259_bool = 1; // 0x1146 MovB
	return 0; // 0x1147 Return
	
Label_4424:
	var_259_bool = 0; // 0x1148 MovB
	return 0; // 0x1149 Return
}


func_323(var_2_object, var_129_string)
{
	var_130_bool = 0; // 0x144 PushV
	func_5567(var_130_bool); // 0x145 NEW_2
	var_131_bool = var_130_bool == 0; // 0x147 Not
	if(var_131_bool == 0) goto Label_330; // 0x148 JumpB
	return 0; // 0x149 Return
	
Label_330:
	var_132_bool = var_129_string == var_2_object; // 0x14a Eq
	if(var_132_bool == 0) goto Label_333; // 0x14b JumpB
	return 0; // 0x14c Return
	
Label_333:
	var_133_string = ""; var_134_bool = 0; // 0x14d PushV
	var_133_string = var_129_string; // 0x14e Mov
	var_135_string = ""; // 0x14f PushS
	var_136_bool = var_129_string == var_135_string; // 0x150 Eq
	if(var_136_bool == 0) goto Label_340; // 0x151 JumpB
	var_134_bool = 0; // 0x152 MovB
	goto Label_341; // 0x153 Jump
	
Label_341:
	func_4215(var_133_string, var_134_bool); // 0x155 NEW_2
	var_2_object = var_129_string; // 0x157 TMov
	return 0; // 0x158 Return
	
Label_340:
	var_134_bool = 1; // 0x154 MovB
}


func_3907(var_46_bool)
{
	var_48_bool = 0; var_49_bool = 0; // 0xf43 PushV
	IsDead(var_49_bool); // 0xf44 ObjFunc
	var_46_bool = var_49_bool; // 0xf46 Mov
	return 2; // 0xf47 Return
}


func_3912(var_35_bool, var_36_object)
{
	var_37_object = Obj(); var_38_object = Obj(); var_39_object = Obj(); var_40_object = Obj(); // 0xf48 PushV
	var_41_bool = var_36_object == 0; // 0xf49 NullEq
	if(var_41_bool == 0) goto Label_3917; // 0xf4a JumpB
	var_35_bool = 0; // 0xf4b MovB
	return 4; // 0xf4c Return
	
Label_3917:
	var_42_bool = 0; // 0xf4d PushV
	var_42_bool = 0; // 0xf4e MovB
	var_43_string = "IsDead"; // 0xf4f PushS
	var_44_int = 1; // 0xf50 PushI
	var_45_bool = IsFuncExist(var_36_object, var_43_string, var_44_int); // 0xf51 FuncExist
	if(var_45_bool == 0) goto Label_3929; // 0xf52 JumpB
	var_46_bool = 0; var_47_object = Obj(); // 0xf53 PushV
	var_47_object = var_36_object; // 0xf54 Mov
	func_3907(var_47_object); // 0xf55 NEW_2
	if(var_46_bool == 0) goto Label_3929; // 0xf57 JumpB
	var_42_bool = 1; // 0xf58 MovB
	
Label_3929:
	if(var_42_bool == 0) goto Label_3932; // 0xf59 JumpB
	var_35_bool = 0; // 0xf5a MovB
	return 4; // 0xf5b Return
	
Label_3932:
	GetScene(var_39_object); // 0xf5c Func
	var_50_bool = var_39_object == 0; // 0xf5e NullEq
	if(var_50_bool == 0) goto Label_3938; // 0xf5f JumpB
	var_35_bool = 0; // 0xf60 MovB
	return 4; // 0xf61 Return
	
Label_3938:
	GetScene(var_40_object); // 0xf62 ObjFunc
	var_51_bool = var_39_object != var_40_object; // 0xf64 Neq
	if(var_51_bool == 0) goto Label_3944; // 0xf65 JumpB
	var_35_bool = 0; // 0xf66 MovB
	return 4; // 0xf67 Return
	
Label_3944:
	var_35_bool = 1; // 0xf68 MovB
	return 4; // 0xf69 Return
}


func_3401(var_416_bool)
{
	var_417_bool = 0; // 0xd49 PushV
	var_417_bool = 0; // 0xd4a MovB
	var_418_bool = 0; // 0xd4b PushV
	func_3373(var_417_bool, var_418_bool); // 0xd4c NEW_2
	if(var_418_bool == 0) goto Label_3412; // 0xd4e JumpB
	var_435_bool = 0; // 0xd4f PushV
	func_3417(var_416_bool, var_417_bool, var_435_bool); // 0xd50 NEW_2
	if(var_435_bool == 0) goto Label_3412; // 0xd52 JumpB
	var_417_bool = 1; // 0xd53 MovB
	
Label_3412:
	if(var_417_bool == 0) goto Label_3415; // 0xd54 JumpB
	var_416_bool = 1; // 0xd55 MovB
	return 0; // 0xd56 Return
	
Label_3415:
	var_416_bool = 0; // 0xd57 MovB
	return 0; // 0xd58 Return
}


func_4426(var_268_bool)
{
	var_270_int = 0; var_271_string = ""; // 0x114b PushV
	var_271_string = "branch"; // 0x114c MovS
	func_4365(var_270_int, var_271_string); // 0x114d NEW_2
	var_272_int = 1; // 0x114f PushI
	var_273_bool = var_270_int == var_272_int; // 0x1150 Eq
	if(var_273_bool == 0) goto Label_4436; // 0x1151 JumpB
	var_268_bool = 1; // 0x1152 MovB
	return 0; // 0x1153 Return
	
Label_4436:
	var_268_bool = 0; // 0x1154 MovB
	return 0; // 0x1155 Return
}


func_4938(var_138_int, var_139_string)
{
	var_140_int = 0; var_141_int = 0; // 0x134a PushV
	GetInvItemByName(var_141_int, var_139_string); // 0x134b Func
	var_138_int = var_141_int; // 0x134d Mov
	return 2; // 0x134e Return
}


func_4943(var_19_object)
{
	var_20_object = Obj(); // 0x1350 PushV
	var_20_object = var_19_object; // 0x1351 Mov
	TaskCall(2); // 0x1352 TaskCall
	func_1799(var_20_object); // 0x1353 NEW_2
	TaskReturn(); // 0x1354 TaskReturn
	return 0; // 0x1356 Return
}


func_4438(var_121_bool)
{
	var_123_int = 0; var_124_string = ""; // 0x1157 PushV
	var_124_string = "branch"; // 0x1158 MovS
	func_4365(var_123_int, var_124_string); // 0x1159 NEW_2
	var_127_int = 2; // 0x115b PushI
	var_128_bool = var_123_int == var_127_int; // 0x115c Eq
	if(var_128_bool == 0) goto Label_4448; // 0x115d JumpB
	var_121_bool = 1; // 0x115e MovB
	return 0; // 0x115f Return
	
Label_4448:
	var_121_bool = 0; // 0x1160 MovB
	return 0; // 0x1161 Return
}


func_3417(var_0_object, var_4_bool, var_435_bool)
{
	var_436_object = Obj(); var_437_bool = 0; var_438_float = 0; var_439_cvector = CVector(0,0,0); var_440_cvector = CVector(0,0,0); var_441_object = Obj(); var_442_bool = 0; var_443_float = 0; var_444_cvector = CVector(0,0,0); var_445_cvector = CVector(0,0,0); // 0xd59 PushV
	GetScene(var_441_object); // 0xd5a Func
	var_442_bool = 0; // 0xd5c MovB
	
Label_3421:
	var_446_cvector = CVector(0,0,0); var_447_object = Obj(); // 0xd5d PushV
	var_447_object = var_0_object; // 0xd5e MovT
	func_3802(var_447_object); // 0xd5f NEW_2
	var_448_int = -var_446_cvector; // 0xd61 Neg
	FindDirLength(var_443_float, var_448_int, var_443_float); // 0xd62 Func
	var_449_bool = var_443_float < var_4_bool; // 0xd64 LT
	if(var_449_bool == 0) goto Label_3431; // 0xd65 JumpB
	goto Label_3459; // 0xd66 Jump
	
Label_3459:
	var_435_bool = var_442_bool; // 0xd83 Mov
	return 10; // 0xd84 Return
	
Label_3431:
	Face(var_0_object); // 0xd67 Func
	var_450_string = "all"; // 0xd69 PushS
	var_451_string = "bjump"; // 0xd6a PushS
	PlayAnimation(var_450_string, var_451_string); // 0xd6b Func
	GetPFPosition(var_444_cvector); // 0xd6d TObjFunc
	GetPFPosition(var_445_cvector); // 0xd6f Func
	WaitForAnimEnd(); // 0xd71 Func
	func_3505(var_445_cvector); // 0xd74 NEW_2
	StopAsync(); // 0xd76 Func
	var_452_cvector = CVector(0.0, 0.0, 0.0); // 0xd78 PushVec
	SetSpeed(var_452_cvector); // 0xd79 Func
	var_442_bool = 1; // 0xd7b MovB
	var_453_bool = 0; // 0xd7c PushV
	func_3373(var_445_cvector, var_453_bool); // 0xd7d NEW_2
	var_454_bool = var_453_bool == 0; // 0xd7f Not
	if(var_454_bool == 0) goto Label_3458; // 0xd80 JumpB
	goto Label_3459; // 0xd81 Jump
	
Label_3458:
	goto Label_3421; // 0xd82 Jump
}


func_4450(var_147_bool, var_148_object)
{
	var_149_bool = 0; var_150_object = Obj(); // 0x1163 PushV
	var_150_object = var_148_object; // 0x1164 Mov
	func_4530(var_150_object); // 0x1165 NEW_2
	if(var_149_bool == 0) goto Label_4458; // 0x1167 JumpB
	var_147_bool = 1; // 0x1168 MovB
	return 0; // 0x1169 Return
	
Label_4458:
	var_147_bool = 0; // 0x116a MovB
	return 0; // 0x116b Return
}


func_4460(var_280_bool, var_281_object)
{
	var_282_bool = 0; var_283_object = Obj(); // 0x116d PushV
	var_283_object = var_281_object; // 0x116e Mov
	func_4537(var_283_object); // 0x116f NEW_2
	if(var_282_bool == 0) goto Label_4468; // 0x1171 JumpB
	var_280_bool = 1; // 0x1172 MovB
	return 0; // 0x1173 Return
	
Label_4468:
	var_280_bool = 0; // 0x1174 MovB
	return 0; // 0x1175 Return
}


func_3948(var_31_bool, var_32_object)
{
	var_33_int = 0; var_34_int = 0; // 0xf6c PushV
	var_35_bool = 0; var_36_object = Obj(); // 0xf6d PushV
	var_36_object = var_32_object; // 0xf6e Mov
	func_3912(var_35_bool, var_36_object); // 0xf6f NEW_2
	var_52_bool = var_35_bool == 0; // 0xf71 Not
	if(var_52_bool == 0) goto Label_3957; // 0xf72 JumpB
	var_31_bool = 0; // 0xf73 MovB
	return 2; // 0xf74 Return
	
Label_3957:
	var_53_bool = 0; var_54_object = Obj(); var_55_string = ""; // 0xf75 PushV
	var_54_object = var_32_object; // 0xf76 Mov
	var_55_string = "noaccess"; // 0xf77 MovS
	func_3822(var_53_bool, var_54_object, var_55_string); // 0xf78 NEW_2
	var_62_bool = var_53_bool == 0; // 0xf7a Not
	if(var_62_bool == 0) goto Label_3966; // 0xf7b JumpB
	var_31_bool = 1; // 0xf7c MovB
	return 2; // 0xf7d Return
	
Label_3966:
	var_63_string = "noaccess"; // 0xf7e PushS
	GetProperty(var_63_string, var_34_int); // 0xf7f ObjFunc
	var_64_int = 0; // 0xf81 PushI
	var_31_bool = var_34_int == var_64_int; // 0xf82 Eq2
	return 2; // 0xf83 Return
}


func_4470(var_173_bool, var_174_object)
{
	var_175_bool = 0; var_176_object = Obj(); // 0x1177 PushV
	var_176_object = var_174_object; // 0x1178 Mov
	func_4544(var_176_object); // 0x1179 NEW_2
	if(var_175_bool == 0) goto Label_4478; // 0x117b JumpB
	var_173_bool = 1; // 0x117c MovB
	return 0; // 0x117d Return
	
Label_4478:
	var_173_bool = 0; // 0x117e MovB
	return 0; // 0x117f Return
}


func_4988(var_22_bool, var_23_object, var_24_string)
{
	var_25_string = "unholster"; // 0x137d PushS
	var_26_bool = var_24_string == var_25_string; // 0x137e Eq
	if(var_26_bool == 0) goto Label_4999; // 0x137f JumpB
	var_27_bool = 0; var_28_object = Obj(); // 0x1380 PushV
	var_28_object = var_23_object; // 0x1381 Mov
	func_5353(var_28_object); // 0x1382 NEW_2
	var_22_bool = var_27_bool; // 0x1383 Mov
	return 0; // 0x1385 Return
	
Label_4999:
	var_29_string = "player_shot"; // 0x1387 PushS
	var_30_bool = var_24_string == var_29_string; // 0x1388 Eq
	if(var_30_bool == 0) goto Label_5009; // 0x1389 JumpB
	var_31_bool = 0; var_32_object = Obj(); // 0x138a PushV
	var_32_object = var_23_object; // 0x138b Mov
	func_5358(var_31_bool, var_32_object); // 0x138c NEW_2
	var_22_bool = var_31_bool; // 0x138d Mov
	return 0; // 0x138f Return
	
Label_5009:
	var_46_string = "battle"; // 0x1391 PushS
	var_47_bool = var_24_string == var_46_string; // 0x1392 Eq
	if(var_47_bool == 0) goto Label_5018; // 0x1393 JumpB
	var_48_bool = 0; var_49_object = Obj(); // 0x1394 PushV
	var_49_object = var_23_object; // 0x1395 Mov
	func_5379(var_49_object); // 0x1396 NEW_2
	var_22_bool = var_48_bool; // 0x1397 Mov
	return 0; // 0x1399 Return
	
Label_5018:
	var_22_bool = 0; // 0x139a MovB
	return 0; // 0x139b Return
}


func_4480(var_179_bool, var_180_object)
{
	var_181_bool = 0; var_182_object = Obj(); // 0x1181 PushV
	var_182_object = var_180_object; // 0x1182 Mov
	func_4551(var_182_object); // 0x1183 NEW_2
	if(var_181_bool == 0) goto Label_4488; // 0x1185 JumpB
	var_179_bool = 1; // 0x1186 MovB
	return 0; // 0x1187 Return
	
Label_4488:
	var_179_bool = 0; // 0x1188 MovB
	return 0; // 0x1189 Return
}


func_1923(var_43_string)
{
	RemoveRTEnvelope(); // 0x784 Func
	SetDeathState(); // 0x786 Func
	Stop(); // 0x788 Func
	StopAsync(); // 0x78a Func
	StopSecondaryAnimation(); // 0x78c Func
	var_44_string = ""; // 0x78e PushV
	var_44_string = var_43_string; // 0x78f Mov
	func_4248(var_44_string); // 0x790 NEW_2
	var_73_string = "all"; // 0x792 PushS
	PlayAnimation(var_73_string, var_43_string); // 0x793 Func
	WaitForAnimEnd(); // 0x795 Func
	var_74_string = "all"; // 0x797 PushS
	LockAnimationEnd(var_74_string, var_43_string); // 0x798 Func
	RemoveEnvelope(); // 0x79a Func
	return 0; // 0x79c Return
}


func_3972(var_35_object)
{
	var_36_bool = 0; var_37_int = 0; var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_string = ""; var_43_bool = 0; var_44_int = 0; var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); var_49_string = ""; // 0xf84 PushV
	var_50_bool = var_35_object == 0; // 0xf85 NullEq
	if(var_50_bool == 0) goto Label_3976; // 0xf86 JumpB
	return 14; // 0xf87 Return
	
Label_3976:
	IsDead(var_43_bool); // 0xf88 Func
	var_51_bool = var_43_bool; // 0xf8a Push
	if(var_51_bool == 0) goto Label_3981; // 0xf8b JumpB
	return 14; // 0xf8c Return
	
Label_3981:
	GetSecondaryAnimationType(var_44_int); // 0xf8d Func
	var_52_int = 0; // 0xf8f PushI
	var_53_bool = var_44_int < var_52_int; // 0xf90 LT
	if(var_53_bool == 0) goto Label_3987; // 0xf91 JumpB
	return 14; // 0xf92 Return
	
Label_3987:
	GetPosition(var_45_cvector); // 0xf93 ObjFunc
	GetPosition(var_46_cvector); // 0xf95 Func
	GetDirection(var_47_cvector); // 0xf97 Func
	var_48_cvector = var_46_cvector - var_45_cvector; // 0xf99 Sub2
	var_54_float = GetByIndex(var_48_cvector, 0); // 0xf9a PushE
	var_55_float = GetByIndex(var_47_cvector, 0); // 0xf9b PushE
	var_56_float = var_54_float * var_55_float; // 0xf9c Mult
	var_57_float = GetByIndex(var_48_cvector, 2); // 0xf9d PushE
	var_58_float = GetByIndex(var_47_cvector, 2); // 0xf9e PushE
	var_59_float = var_57_float * var_58_float; // 0xf9f Mult
	var_60_int = var_56_float + var_59_float; // 0xfa0 Add
	var_61_int = 0; // 0xfa1 PushI
	var_62_bool = var_60_int >= var_61_int; // 0xfa2 GE
	if(var_62_bool == 0) goto Label_4006; // 0xfa3 JumpB
	var_49_string = "fhit"; // 0xfa4 MovS
	goto Label_4007; // 0xfa5 Jump
	
Label_4007:
	var_63_string = "hit_react"; // 0xfa7 PushS
	var_64_string = "1"; // 0xfa8 PushS
	var_65_int = var_49_string + var_64_string; // 0xfa9 Add
	var_66_string = "2"; // 0xfaa PushS
	var_67_int = var_49_string + var_66_string; // 0xfab Add
	var_68_int = -10; // 0xfac PushI
	FadeSecondaryAnimation(var_63_string, var_65_int, var_67_int, var_68_int); // 0xfad Func
	return 14; // 0xfaf Return
	
Label_4006:
	var_49_string = "bhit"; // 0xfa6 MovS
}


func_3462(var_0_object, var_366_bool)
{
	var_367_bool = 0; var_368_bool = 0; // 0xd86 PushV
	var_369_string = "IsAttacking"; // 0xd87 PushS
	var_370_int = 1; // 0xd88 PushI
	var_371_bool = IsFuncExist(var_0_object, var_369_string, var_370_int); // 0xd89 FuncExist
	if(var_371_bool == 0) goto Label_3471; // 0xd8a JumpB
	IsAttacking(var_368_bool); // 0xd8b TObjFunc
	var_366_bool = var_368_bool; // 0xd8d Mov
	return 2; // 0xd8e Return
	
Label_3471:
	var_366_bool = 0; // 0xd8f MovB
	return 2; // 0xd90 Return
}


func_4490(var_185_bool, var_186_object)
{
	var_187_bool = 0; var_188_object = Obj(); // 0x118b PushV
	var_188_object = var_186_object; // 0x118c Mov
	func_4558(var_188_object); // 0x118d NEW_2
	if(var_187_bool == 0) goto Label_4498; // 0x118f JumpB
	var_185_bool = 1; // 0x1190 MovB
	return 0; // 0x1191 Return
	
Label_4498:
	var_185_bool = 0; // 0x1192 MovB
	return 0; // 0x1193 Return
}


func_3473(var_2_object, var_5_bool)
{
	var_479_float = 0; var_480_int = 0; var_481_float = 0; var_482_int = 0; // 0xd91 PushV
	var_483_bool = var_2_object == 0; // 0xd92 Not
	if(var_483_bool == 0) goto Label_3477; // 0xd93 JumpB
	return 4; // 0xd94 Return
	
Label_3477:
	var_484_bool = var_5_bool; // 0xd95 PushT
	if(var_484_bool == 0) goto Label_3485; // 0xd96 JumpB
	var_485_int = -1; // 0xd97 PushI
	var_5_bool = var_5_bool + var_485_int; // 0xd98 Add2
	var_486_int = 0; // 0xd99 PushI
	var_487_bool = var_5_bool > var_486_int; // 0xd9a GT
	if(var_487_bool == 0) goto Label_3485; // 0xd9b JumpB
	return 4; // 0xd9c Return
	
Label_3485:
	rand(var_481_float); // 0xd9d Func
	var_488_float = 0; // 0xd9f PushV
	func_3523(var_488_float); // 0xda0 NEW_2
	var_489_bool = var_481_float < var_488_float; // 0xda2 LT
	if(var_489_bool == 0) goto Label_3504; // 0xda3 JumpB
	irand(var_482_int, var_481_float); // 0xda4 Func
	var_490_int = 1; // 0xda6 PushI
	var_482_int = var_482_int + var_490_int; // 0xda7 Add2
	var_491_string = "attack"; // 0xda8 PushS
	var_492_int = var_491_string + var_482_int; // 0xda9 Add
	Speak(var_492_int); // 0xdaa Func
	var_493_int = 0; // 0xdac PushV
	func_3521(var_493_int); // 0xdad NEW_2
	var_5_bool = var_493_int; // 0xdae TMov
	
Label_3504:
	return 4; // 0xdb0 Return
}


func_4500(var_204_bool, var_205_object)
{
	var_206_bool = 0; var_207_object = Obj(); // 0x1195 PushV
	var_207_object = var_205_object; // 0x1196 Mov
	func_4565(var_207_object); // 0x1197 NEW_2
	if(var_206_bool == 0) goto Label_4508; // 0x1199 JumpB
	var_204_bool = 1; // 0x119a MovB
	return 0; // 0x119b Return
	
Label_4508:
	var_204_bool = 0; // 0x119c MovB
	return 0; // 0x119d Return
}


func_5020(var_52_object, var_53_string)
{
	var_54_string = "unholster"; // 0x139d PushS
	var_55_bool = var_53_string == var_54_string; // 0x139e Eq
	if(var_55_bool == 0) goto Label_5029; // 0x139f JumpB
	var_56_object = Obj(); // 0x13a0 PushV
	var_56_object = var_52_object; // 0x13a1 Mov
	func_5356(); // 0x13a2 NEW_2
	goto Label_5044; // 0x13a4 Jump
	
Label_5044:
	return 0; // 0x13b4 Return
	
Label_5029:
	var_57_string = "player_shot"; // 0x13a5 PushS
	var_58_bool = var_53_string == var_57_string; // 0x13a6 Eq
	if(var_58_bool == 0) goto Label_5037; // 0x13a7 JumpB
	var_59_object = Obj(); // 0x13a8 PushV
	var_59_object = var_52_object; // 0x13a9 Mov
	func_5373(var_59_object); // 0x13aa NEW_2
	goto Label_5044; // 0x13ac Jump
	
Label_5037:
	var_125_string = "battle"; // 0x13ad PushS
	var_126_bool = var_53_string == var_125_string; // 0x13ae Eq
	if(var_126_bool == 0) goto Label_5044; // 0x13af JumpB
	var_127_object = Obj(); // 0x13b0 PushV
	var_127_object = var_52_object; // 0x13b1 Mov
	func_5382(); // 0x13b2 NEW_2
}


func_4510(var_210_bool, var_211_object)
{
	var_212_bool = 0; var_213_object = Obj(); // 0x119f PushV
	var_213_object = var_211_object; // 0x11a0 Mov
	func_4572(var_213_object); // 0x11a1 NEW_2
	if(var_212_bool == 0) goto Label_4518; // 0x11a3 JumpB
	var_210_bool = 1; // 0x11a4 MovB
	return 0; // 0x11a5 Return
	
Label_4518:
	var_210_bool = 0; // 0x11a6 MovB
	return 0; // 0x11a7 Return
}


func_5536(var_368_bool)
{
	var_370_int = 0; var_371_bool = 0; var_372_int = 0; var_373_bool = 0; // 0x15a0 PushV
	GetItemID(var_372_int); // 0x15a1 ObjFunc
	var_374_string = "Weapon"; // 0x15a3 PushS
	HasInvItemProperty(var_373_bool, var_372_int, var_374_string); // 0x15a4 Func
	var_368_bool = var_373_bool; // 0x15a6 Mov
	return 4; // 0x15a7 Return
}


func_4520(var_216_bool, var_217_object)
{
	var_218_bool = 0; var_219_object = Obj(); // 0x11a9 PushV
	var_219_object = var_217_object; // 0x11aa Mov
	func_4579(var_219_object); // 0x11ab NEW_2
	if(var_218_bool == 0) goto Label_4528; // 0x11ad JumpB
	var_216_bool = 1; // 0x11ae MovB
	return 0; // 0x11af Return
	
Label_4528:
	var_216_bool = 0; // 0x11b0 MovB
	return 0; // 0x11b1 Return
}


func_5544(var_42_object, var_45_object)
{
	var_43_int = 0; var_44_object = Obj(); // 0x15a9 PushV
	var_44_object = var_42_object; // 0x15aa Mov
	TaskCall(0); // 0x15ab TaskCall
	func_0(var_45_object, var_43_int, var_44_object); // 0x15ac NEW_2
	TaskReturn(); // 0x15ad TaskReturn
	var_300_int = 100; // 0x15af PushI
	var_301_bool = var_45_object == var_300_int; // 0x15b0 Eq
	if(var_301_bool == 0) goto Label_5558; // 0x15b1 JumpB
	var_302_object = Obj(); // 0x15b2 PushV
	var_302_object = var_42_object; // 0x15b3 Mov
	func_5389(); // 0x15b4 NEW_2
	
Label_5558:
	return 0; // 0x15b6 Return
}


func_4016(var_22_object, var_23_int, var_24_float)
{
	var_25_cvector = CVector(0,0,0); var_26_object = Obj(); var_27_int = 0; var_28_bool = 0; var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_int = 0; var_32_int = 0; var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_object = Obj(); var_36_int = 0; var_37_bool = 0; var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_int = 0; var_41_int = 0; var_42_cvector = CVector(0,0,0); // 0xfb0 PushV
	var_43_bool = 0; // 0xfb1 PushV
	var_43_bool = 0; // 0xfb2 MovB
	var_44_bool = 0; // 0xfb3 PushV
	var_44_bool = 0; // 0xfb4 MovB
	var_45_object = var_22_object; // 0xfb5 Push
	if(var_45_object == 0) goto Label_4027; // 0xfb6 JumpB
	var_46_int = 4; // 0xfb7 PushI
	var_47_bool = var_23_int != var_46_int; // 0xfb8 Neq
	if(var_47_bool == 0) goto Label_4027; // 0xfb9 JumpB
	var_44_bool = 1; // 0xfba MovB
	
Label_4027:
	if(var_44_bool == 0) goto Label_4032; // 0xfbb JumpB
	var_48_int = 5; // 0xfbc PushI
	var_49_bool = var_23_int != var_48_int; // 0xfbd Neq
	if(var_49_bool == 0) goto Label_4032; // 0xfbe JumpB
	var_43_bool = 1; // 0xfbf MovB
	
Label_4032:
	if(var_43_bool == 0) goto Label_4079; // 0xfc0 JumpB
	var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); // 0xfc1 PushV
	var_52_cvector = CVector(0,0,0); var_53_object = Obj(); // 0xfc2 PushV
	var_53_object = var_22_object; // 0xfc3 Mov
	func_3802(var_53_object); // 0xfc4 NEW_2
	var_51_cvector = var_52_cvector; // 0xfc5 Mov
	func_4295(var_50_cvector, var_51_cvector); // 0xfc7 NEW_2
	var_34_cvector = var_50_cvector; // 0xfc8 Mov
	CreateVectorVector(var_35_object); // 0xfca Func
	var_36_int = 1; // 0xfcc MovI
	
Label_4045:
	var_63_string = "hit"; // 0xfcd PushS
	var_64_int = var_63_string + var_36_int; // 0xfce Add
	GetGeometryLocator(var_64_int, var_37_bool, var_38_cvector, var_39_cvector); // 0xfcf Func
	var_65_bool = var_37_bool == 0; // 0xfd1 Not
	if(var_65_bool == 0) goto Label_4052; // 0xfd2 JumpB
	goto Label_4061; // 0xfd3 Jump
	
Label_4061:
	size(var_40_int); // 0xfdd ObjFunc
	var_66_int = var_40_int; // 0xfdf Push
	if(var_66_int == 0) goto Label_4078; // 0xfe0 JumpB
	irand(var_41_int, var_40_int); // 0xfe1 Func
	get(var_42_cvector, var_41_int); // 0xfe3 ObjFunc
	var_67_object = Obj(); var_68_int = 0; var_69_float = 0; var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); // 0xfe5 PushV
	var_67_object = var_22_object; // 0xfe6 Mov
	var_68_int = var_23_int; // 0xfe7 Mov
	var_69_float = var_24_float; // 0xfe8 Mov
	var_70_cvector = var_42_cvector; // 0xfe9 Mov
	var_71_cvector = -var_34_cvector; // 0xfea Neg2
	func_4084(var_69_float, var_70_cvector, var_71_cvector); // 0xfeb NEW_2
	return 18; // 0xfed Return
	
Label_4078:
	var_35_object = 0; // 0xfee SetNull
	
Label_4079:
	var_112_object = Obj(); // 0xfef PushV
	var_112_object = var_22_object; // 0xff0 Mov
	func_3972(var_112_object); // 0xff1 NEW_2
	return 18; // 0xff3 Return
	
Label_4052:
	var_113_int = var_39_cvector | var_34_cvector; // 0xfd4 Or
	var_114_float = 0.70711; // 0xfd5 PushF
	var_115_bool = var_113_int >= var_114_float; // 0xfd6 GE
	if(var_115_bool == 0) goto Label_4058; // 0xfd7 JumpB
	add(var_38_cvector); // 0xfd8 ObjFunc
	
Label_4058:
	var_116_int = 1; // 0xfda PushI
	var_36_int = var_36_int + var_116_int; // 0xfdb Add2
	goto Label_4045; // 0xfdc Jump
}


func_3505(var_0_object)
{
	var_253_object = Obj(); // 0xdb1 PushV
	var_253_object = var_0_object; // 0xdb2 MovT
	func_4389(var_253_object); // 0xdb3 NEW_2
	return 0; // 0xdb5 Return
}


func_1970()
{
	var_20_bool = 0; // 0x7b2 PushV
	func_4109(var_20_bool); // 0x7b3 NEW_2
	var_23_bool = var_20_bool == 0; // 0x7b5 Not
	if(var_23_bool == 0) goto Label_1978; // 0x7b6 JumpB
	func_5352(); // 0x7b8 NEW_2
	
Label_1978:
	return 0; // 0x7ba Return
}


func_4530(var_149_bool)
{
	var_151_int = 0; // 0x11b3 PushV
	func_4380(var_151_int); // 0x11b4 NEW_2
	var_157_int = 6; // 0x11b6 PushI
	var_149_bool = var_151_int <= var_157_int; // 0x11b7 LE2
	return 0; // 0x11b8 Return
}


func_5045(var_19_bool, var_20_object)
{
	var_21_bool = 0; var_22_bool = 0; // 0x13b5 PushV
	var_23_bool = 0; // 0x13b6 PushV
	var_23_bool = 0; // 0x13b7 MovB
	var_24_bool = 0; var_25_object = Obj(); // 0x13b8 PushV
	var_25_object = var_20_object; // 0x13b9 Mov
	func_5353(var_25_object); // 0x13ba NEW_2
	if(var_24_bool == 0) goto Label_5059; // 0x13bc JumpB
	var_26_bool = 0; var_27_object = Obj(); // 0x13bd PushV
	var_27_object = var_20_object; // 0x13be Mov
	func_3817(var_26_bool, var_27_object); // 0x13bf NEW_2
	if(var_26_bool == 0) goto Label_5059; // 0x13c1 JumpB
	var_23_bool = 1; // 0x13c2 MovB
	
Label_5059:
	if(var_23_bool == 0) goto Label_5066; // 0x13c3 JumpB
	IsWeaponHolstered(var_22_bool); // 0x13c4 ObjFunc
	var_30_bool = var_22_bool == 0; // 0x13c6 Not
	if(var_30_bool == 0) goto Label_5066; // 0x13c7 JumpB
	var_19_bool = 1; // 0x13c8 MovB
	return 2; // 0x13c9 Return
	
Label_5066:
	var_19_bool = 0; // 0x13ca MovB
	return 2; // 0x13cb Return
}


func_3510(var_572_int)
{
	var_572_int = 0; // 0xdb6 MovI
	return 0; // 0xdb7 Return
}


func_5559(var_102_int)
{
	var_102_int = 515568; // 0x15b7 MovI
	return 0; // 0x15b8 Return
}


func_2488()
{
	var_51_int = 0; var_52_int = 0; var_53_int = 0; var_54_int = 0; var_55_bool = 0; var_56_float = 0; var_57_bool = 0; var_58_int = 0; var_59_int = 0; var_60_int = 0; var_61_int = 0; var_62_bool = 0; var_63_float = 0; var_64_bool = 0; // 0x9b8 PushV
	WaitForAnimEnd(); // 0x9b9 Func
	var_65_bool = 0; // 0x9bb PushV
	func_4109(var_65_bool); // 0x9bc NEW_2
	var_66_bool = var_65_bool == 0; // 0x9be Not
	if(var_66_bool == 0) goto Label_2497; // 0x9bf JumpB
	return 14; // 0x9c0 Return
	
Label_2497:
	var_67_int = 0; // 0x9c1 PushV
	func_5123(var_67_int); // 0x9c2 NEW_2
	var_58_int = var_67_int; // 0x9c3 Mov
	var_59_int = 0; // 0x9c5 MovI
	
Label_2502:
	var_80_bool = 0; // 0x9c6 PushV
	var_80_bool = 0; // 0x9c7 MovB
	var_81_int = 5; // 0x9c8 PushI
	var_82_bool = var_59_int < var_81_int; // 0x9c9 LT
	if(var_82_bool == 0) goto Label_2512; // 0x9ca JumpB
	var_83_bool = 0; // 0x9cb PushV
	func_4109(var_83_bool); // 0x9cc NEW_2
	if(var_83_bool == 0) goto Label_2512; // 0x9ce JumpB
	var_80_bool = 1; // 0x9cf MovB
	
Label_2512:
	if(var_80_bool == 0) goto Label_2564; // 0x9d0 JumpB
	var_84_int = 3; // 0x9d1 PushI
	irand(var_60_int, var_84_int); // 0x9d2 Func
	var_85_int = 0; // 0x9d4 PushI
	var_86_bool = var_60_int == var_85_int; // 0x9d5 Eq
	if(var_86_bool == 0) goto Label_2536; // 0x9d6 JumpB
	var_87_int = var_58_int; // 0x9d7 Push
	if(var_87_int == 0) goto Label_2535; // 0x9d8 JumpB
	irand(var_61_int, var_58_int); // 0x9d9 Func
	var_88_string = "all"; // 0x9db PushS
	var_89_string = ""; var_90_int = 0; // 0x9dc PushV
	var_90_int = var_61_int; // 0x9dd Mov
	func_5116(var_89_string, var_90_int); // 0x9de NEW_2
	PlayAnimation(var_88_string, var_89_string); // 0x9e0 Func
	WaitForAnimEnd(var_62_bool); // 0x9e2 Func
	var_91_bool = var_62_bool == 0; // 0x9e4 Not
	if(var_91_bool == 0) goto Label_2535; // 0x9e5 JumpB
	goto Label_2564; // 0x9e6 Jump
	
Label_2564:
	ResetAAS(); // 0xa04 Func
	return 14; // 0xa06 Return
	
Label_2535:
	goto Label_2553; // 0x9e7 Jump
	
Label_2553:
	var_92_bool = 0; // 0x9f9 PushV
	func_2567(var_92_bool); // 0x9fa NEW_2
	var_93_bool = var_92_bool == 0; // 0x9fc Not
	if(var_93_bool == 0) goto Label_2559; // 0x9fd JumpB
	goto Label_2564; // 0x9fe Jump
	
Label_2559:
	ResetAAS(); // 0x9ff Func
	var_94_int = 1; // 0xa01 PushI
	var_59_int = var_59_int + var_94_int; // 0xa02 Add2
	goto Label_2502; // 0xa03 Jump
	
Label_2536:
	var_95_int = 1; // 0x9e8 PushI
	var_96_bool = var_60_int == var_95_int; // 0x9e9 Eq
	if(var_96_bool == 0) goto Label_2550; // 0x9ea JumpB
	var_97_int = 4; // 0x9eb PushI
	rand(var_63_float, var_97_int); // 0x9ec Func
	var_98_int = 1; // 0x9ee PushI
	var_99_int = var_63_float + var_98_int; // 0x9ef Add
	Sleep(var_99_int, var_64_bool); // 0x9f0 Func
	var_100_bool = var_64_bool == 0; // 0x9f2 Not
	if(var_100_bool == 0) goto Label_2549; // 0x9f3 JumpB
	goto Label_2564; // 0x9f4 Jump
	
Label_2549:
	goto Label_2553; // 0x9f5 Jump
	
Label_2550:
	var_101_int = var_59_int; // 0x9f6 Push
	if(var_101_int == 0) goto Label_2553; // 0x9f7 JumpB
	goto Label_2564; // 0x9f8 Jump
}


func_5561(var_101_int)
{
	var_101_int = 503353; // 0x15b9 MovI
	return 0; // 0x15ba Return
}


func_3512()
{
	var_372_string = ""; // 0xdb8 PushV
	var_372_string = "attack_stay"; // 0xdb9 MovS
	func_4248(var_372_string); // 0xdba NEW_2
	return 0; // 0xdbc Return
}


func_5563(var_103_string)
{
	var_103_string = "ui/NPC_Citizen1.png"; // 0x15bb MovS
	return 0; // 0x15bc Return
}


func_4537(var_282_bool)
{
	var_284_int = 0; // 0x11ba PushV
	func_4380(var_284_int); // 0x11bb NEW_2
	var_285_int = 2; // 0x11bd PushI
	var_282_bool = var_284_int == var_285_int; // 0x11be Eq2
	return 0; // 0x11bf Return
}


func_5565(var_104_string)
{
	var_104_string = "ui/NPC_Citizen1_b.png"; // 0x15bd MovS
	return 0; // 0x15be Return
}


func_3517()
{
	return 0; // 0xdbe Return
}


func_5567(var_96_bool)
{
	var_96_bool = 0; // 0x15bf MovB
	return 0; // 0x15c0 Return
}


func_3519(var_597_bool)
{
	var_597_bool = 1; // 0xdbf MovB
	return 0; // 0xdc0 Return
}


func_5569()
{
	var_19_bool = GlobalVars[0]; // 0x15c1 PushGE
	var_19_bool = 0; // 0x15c2 MovB
	GlobalVars[0] = var_19_bool; // 0x15c3 PopGE
	return 0; // 0x15c4 Return
}


func_3521(var_493_int)
{
	var_493_int = 1; // 0xdc1 MovI
	return 0; // 0xdc2 Return
}


func_3523(var_488_float)
{
	var_488_float = 0.5; // 0xdc3 MovF
	return 0; // 0xdc4 Return
}


func_4544(var_175_bool)
{
	var_177_int = 0; // 0x11c1 PushV
	func_4380(var_177_int); // 0x11c2 NEW_2
	var_178_int = 7; // 0x11c4 PushI
	var_175_bool = var_177_int == var_178_int; // 0x11c5 Eq2
	return 0; // 0x11c6 Return
}


func_5573(var_30_object)
{
	var_31_bool = 0; var_32_bool = 0; // 0x15c5 PushV
	var_33_bool = GlobalVars[0]; // 0x15c6 PushGE
	if(var_33_bool == 0) goto Label_5586; // 0x15c7 JumpB
	IsOverrideActive(var_32_bool); // 0x15c8 Func
	var_34_bool = var_32_bool == 0; // 0x15ca Not
	if(var_34_bool == 0) goto Label_5584; // 0x15cb JumpB
	var_35_object = Obj(); // 0x15cc PushV
	var_35_object = var_30_object; // 0x15cd Mov
	func_4678(var_35_object); // 0x15ce NEW_2
	
Label_5584:
	return 2; // 0x15d0 Return
	
Label_5586:
	var_42_object = Obj(); // 0x15d2 PushV
	var_42_object = var_30_object; // 0x15d3 Mov
	func_5544(var_32_bool, var_42_object); // 0x15d4 NEW_2
	return 2; // 0x15d6 Return
}


func_4551(var_181_bool)
{
	var_183_int = 0; // 0x11c8 PushV
	func_4380(var_183_int); // 0x11c9 NEW_2
	var_184_int = 8; // 0x11cb PushI
	var_181_bool = var_183_int == var_184_int; // 0x11cc Eq2
	return 0; // 0x11cd Return
}


func_5068(var_33_object)
{
	var_34_object = Obj(); // 0x13cd PushV
	var_34_object = var_33_object; // 0x13ce Mov
	func_5356(); // 0x13cf NEW_2
	return 0; // 0x13d1 Return
}


func_3532(var_2_object, var_260_bool, var_261_object, var_262_float, var_263_float, var_264_bool, var_265_bool)
{
	var_269_bool = 0; var_270_bool = 0; var_271_bool = 0; var_272_bool = 0; // 0xdcc PushV
	var_273_object = Obj(); // 0xdcd PushV
	var_273_object = var_261_object; // 0xdce Mov
	func_4389(var_273_object); // 0xdcf NEW_2
	var_274_int = 1; // 0xdd1 PushI
	var_275_int = 5; // 0xdd2 PushI
	SetTimer(var_274_int, var_275_int); // 0xdd3 Func
	CanSee(var_271_bool, var_261_object); // 0xdd5 Func
	var_276_bool = var_271_bool; // 0xdd7 Push
	if(var_276_bool == 0) goto Label_3551; // 0xdd8 JumpB
	var_2_object = 1; // 0xdd9 TMovB
	var_277_object = Obj(); // 0xdda PushV
	var_277_object = var_261_object; // 0xddb Mov
	func_4230(var_277_object); // 0xddc NEW_2
	goto Label_3552; // 0xdde Jump
	
Label_3552:
	var_278_bool = 0; var_279_object = Obj(); // 0xde0 PushV
	var_279_object = var_261_object; // 0xde1 Mov
	func_3817(var_278_bool, var_279_object); // 0xde2 NEW_2
	if(var_278_bool == 0) goto Label_3562; // 0xde4 JumpB
	var_282_object = Obj(); // 0xde5 PushV
	func_4289(var_282_object); // 0xde6 NEW_2
	SendPlayerEnemy(var_261_object, var_282_object); // 0xde8 Func
	
Label_3562:
	var_283_bool = 0; var_284_object = Obj(); var_285_float = 0; var_286_float = 0; var_287_bool = 0; var_288_bool = 0; // 0xdea PushV
	var_284_object = var_261_object; // 0xdeb Mov
	var_285_float = var_262_float; // 0xdec Mov
	var_286_float = var_263_float; // 0xded Mov
	var_287_bool = var_264_bool; // 0xdee Mov
	var_288_bool = var_265_bool; // 0xdef Mov
	func_3637(var_271_bool, var_272_bool, var_283_bool, var_284_object, var_285_float, var_286_float, var_287_bool, var_288_bool); // 0xdf0 NEW_2
	var_272_bool = var_283_bool; // 0xdf1 Mov
	var_334_object = var_2_object; // 0xdf3 PushT
	if(var_334_object == 0) goto Label_3576; // 0xdf4 JumpB
	var_335_string = "head"; // 0xdf5 PushS
	UnlookAsync(var_335_string); // 0xdf6 Func
	
Label_3576:
	var_336_int = 1; // 0xdf8 PushI
	KillTimer(var_336_int); // 0xdf9 Func
	var_260_bool = var_272_bool; // 0xdfb Mov
	return 4; // 0xdfc Return
	
Label_3551:
	var_2_object = 0; // 0xddf TMovB
}


func_4558(var_187_bool)
{
	var_189_int = 0; // 0x11cf PushV
	func_4380(var_189_int); // 0x11d0 NEW_2
	var_190_int = 9; // 0x11d2 PushI
	var_187_bool = var_189_int == var_190_int; // 0x11d3 Eq2
	return 0; // 0x11d4 Return
}


func_5074(var_21_object)
{
	var_22_bool = 0; var_23_object = Obj(); // 0x13d3 PushV
	var_23_object = var_21_object; // 0x13d4 Mov
	func_3817(var_22_bool, var_23_object); // 0x13d5 NEW_2
	if(var_22_bool == 0) goto Label_5086; // 0x13d7 JumpB
	var_26_object = Obj(); // 0x13d8 PushV
	func_4289(var_26_object); // 0x13d9 NEW_2
	var_29_float = -0.03; // 0x13db PushF
	ReportReputationChange(var_21_object, var_26_object, var_29_float); // 0x13dc Func
	
Label_5086:
	return 0; // 0x13de Return
}


func_4565(var_206_bool)
{
	var_208_int = 0; // 0x11d6 PushV
	func_4380(var_208_int); // 0x11d7 NEW_2
	var_209_int = 10; // 0x11d9 PushI
	var_206_bool = var_208_int == var_209_int; // 0x11da Eq2
	return 0; // 0x11db Return
}


func_5591(var_63_bool)
{
	var_63_bool = 0; // 0x15d7 MovB
	return 0; // 0x15d8 Return
}


func_5593(var_170_bool)
{
	var_170_bool = 1; // 0x15da MovB
	return 0; // 0x15db Return
}


func_5596(var_23_bool, var_24_object, var_25_object, var_26_bool)
{
	var_27_bool = 0; var_28_object = Obj(); var_29_object = Obj(); var_30_float = 0; var_31_bool = 0; // 0x15dd PushV
	var_28_object = var_24_object; // 0x15de Mov
	var_29_object = var_25_object; // 0x15df Mov
	var_30_float = 700.0; // 0x15e0 MovF
	var_31_bool = var_26_bool; // 0x15e1 Mov
	func_5263(var_27_bool, var_28_object, var_29_object, var_30_float, var_31_bool); // 0x15e2 NEW_2
	var_23_bool = var_27_bool; // 0x15e3 Mov
	return 0; // 0x15e5 Return
}


func_4572(var_212_bool)
{
	var_214_int = 0; // 0x11dd PushV
	func_4380(var_214_int); // 0x11de NEW_2
	var_215_int = 11; // 0x11e0 PushI
	var_212_bool = var_214_int == var_215_int; // 0x11e1 Eq2
	return 0; // 0x11e2 Return
}


func_5087(var_19_bool, var_20_string)
{
	var_21_object = Obj(); var_22_object = Obj(); // 0x13df PushV
	var_23_string = "heal"; // 0x13e0 PushS
	var_24_bool = var_20_string == var_23_string; // 0x13e1 Eq
	if(var_24_bool == 0) goto Label_5101; // 0x13e2 JumpB
	var_25_string = "player"; // 0x13e3 PushS
	FindActor(var_22_object, var_25_string); // 0x13e4 Func
	var_26_bool = 0; var_27_object = Obj(); // 0x13e6 PushV
	var_27_object = var_22_object; // 0x13e7 Mov
	func_5384(var_27_object); // 0x13e8 NEW_2
	var_19_bool = var_26_bool; // 0x13e9 Mov
	return 2; // 0x13eb Return
	
Label_5101:
	var_19_bool = 0; // 0x13ed MovB
	return 2; // 0x13ee Return
}


func_4579(var_218_bool)
{
	var_220_int = 0; // 0x11e4 PushV
	func_4380(var_220_int); // 0x11e5 NEW_2
	var_221_int = 12; // 0x11e7 PushI
	var_218_bool = var_220_int == var_221_int; // 0x11e8 Eq2
	return 0; // 0x11e9 Return
}


func_5606(var_101_object)
{
	var_102_bool = 0; var_103_object = Obj(); // 0x15e7 PushV
	var_103_object = var_101_object; // 0x15e8 Mov
	func_3817(var_102_bool, var_103_object); // 0x15e9 NEW_2
	if(var_102_bool == 0) goto Label_5623; // 0x15eb JumpB
	var_106_object = Obj(); // 0x15ec PushV
	func_4289(var_106_object); // 0x15ed NEW_2
	var_109_float = -0.07; // 0x15ef PushF
	var_110_bool = 1; // 0x15f0 PushB
	ReportReputationChange(var_101_object, var_106_object, var_109_float, var_110_bool); // 0x15f1 Func
	var_111_bool = 0; // 0x15f3 PushV
	var_111_bool = 1; // 0x15f4 MovB
	func_4763(var_111_bool); // 0x15f5 NEW_2
	
Label_5623:
	func_4739(); // 0x15f8 NEW_2
	var_245_bool = GlobalVars[0]; // 0x15fa PushGE
	var_245_bool = 1; // 0x15fb MovB
	GlobalVars[0] = var_245_bool; // 0x15fc PopGE
	var_246_int = 50; // 0x15fd PushI
	var_247_int = 40; // 0x15fe PushI
	SetRTEnvelope(var_246_int, var_247_int); // 0x15ff Func
	return 0; // 0x1601 Return
}


func_4586(var_105_int)
{
	var_106_int = 0; var_107_int = 0; // 0x11ea PushV
	var_108_string = "branch"; // 0x11eb PushS
	GetVariable(var_108_string, var_107_int); // 0x11ec Func
	var_109_int = 0; // 0x11ee PushI
	var_110_bool = var_107_int == var_109_int; // 0x11ef Eq
	if(var_110_bool == 0) goto Label_4596; // 0x11f0 JumpB
	var_105_int = 1; // 0x11f1 MovI
	return 2; // 0x11f2 Return
	
Label_4596:
	var_111_int = 1; // 0x11f4 PushI
	var_112_bool = var_107_int == var_111_int; // 0x11f5 Eq
	if(var_112_bool == 0) goto Label_4601; // 0x11f6 JumpB
	var_105_int = 2; // 0x11f7 MovI
	return 2; // 0x11f8 Return
	
Label_4601:
	var_105_int = 3; // 0x11f9 MovI
	return 2; // 0x11fa Return
}


func_5103(var_30_string)
{
	var_31_object = Obj(); var_32_object = Obj(); // 0x13ef PushV
	var_33_string = "heal"; // 0x13f0 PushS
	var_34_bool = var_30_string == var_33_string; // 0x13f1 Eq
	if(var_34_bool == 0) goto Label_5115; // 0x13f2 JumpB
	var_35_string = "player"; // 0x13f3 PushS
	FindActor(var_32_object, var_35_string); // 0x13f4 Func
	var_36_object = Obj(); // 0x13f6 PushV
	var_36_object = var_32_object; // 0x13f7 Mov
	func_5387(); // 0x13f8 NEW_2
	var_32_object = 0; // 0x13fa SetNull
	
Label_5115:
	return 2; // 0x13fb Return
}


func_4084(var_24_object, var_27_cvector, var_28_cvector)
{
	var_29_object = Obj(); var_30_object = Obj(); var_31_object = Obj(); var_32_object = Obj(); // 0xff4 PushV
	GetScene(var_31_object); // 0xff5 Func
	var_33_string = "scripted"; // 0xff7 PushS
	var_34_string = "blood_dir.xml"; // 0xff8 PushS
	AddActorByType(var_32_object, var_33_string, var_31_object, var_27_cvector, var_28_cvector, var_34_string); // 0xff9 Func
	var_35_object = Obj(); // 0xffb PushV
	var_35_object = var_24_object; // 0xffc Mov
	func_3972(var_35_object); // 0xffd NEW_2
	return 4; // 0xfff Return
}


func_4603(var_225_int)
{
	var_226_int = 0; var_227_int = 0; // 0x11fb PushV
	var_228_string = "branch"; // 0x11fc PushS
	GetVariable(var_228_string, var_227_int); // 0x11fd Func
	var_225_int = var_227_int; // 0x11ff Mov
	return 2; // 0x1200 Return
}


func_5116(var_73_string, var_74_int)
{
	var_75_string = ""; var_76_string = ""; // 0x13fc PushV
	var_76_string = "idle"; // 0x13fd MovS
	var_77_int = var_74_int; // 0x13fe Push
	if(var_77_int == 0) goto Label_5121; // 0x13ff JumpB
	var_76_string = var_76_string + var_74_int; // 0x1400 Add2
	
Label_5121:
	var_73_string = var_76_string; // 0x1401 Mov
	return 2; // 0x1402 Return
}


