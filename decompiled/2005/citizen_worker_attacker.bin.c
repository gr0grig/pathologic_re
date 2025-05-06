task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_bool, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_int = 1; // 0x15a PushI
	if(var_19_int == 0) goto Label_1798; // 0x15b JumpB
	func_3966(); // 0x15d NEW_2
	var_21_int = 40087; // 0x15f PushI
	var_22_bool = var_18_bool == var_21_int; // 0x160 Eq
	if(var_22_bool == 0) goto Label_359; // 0x161 JumpB
	var_23_object = Obj(); var_24_object = Obj(); // 0x162 PushV
	var_23_object = var_1_object; // 0x163 MovT
	var_24_object = var_0_object; // 0x164 MovT
	func_4098(); // 0x165 NEW_2
	
Label_359:
	var_26_int = 45510; // 0x167 PushI
	var_27_bool = var_18_bool == var_26_int; // 0x168 Eq
	if(var_27_bool == 0) goto Label_367; // 0x169 JumpB
	var_28_object = Obj(); var_29_object = Obj(); // 0x16a PushV
	var_28_object = var_1_object; // 0x16b MovT
	var_29_object = var_0_object; // 0x16c MovT
	func_4098(); // 0x16d NEW_2
	
Label_367:
	var_30_int = 45517; // 0x16f PushI
	var_31_bool = var_18_bool == var_30_int; // 0x170 Eq
	if(var_31_bool == 0) goto Label_375; // 0x171 JumpB
	var_32_object = Obj(); var_33_object = Obj(); // 0x172 PushV
	var_32_object = var_1_object; // 0x173 MovT
	var_33_object = var_0_object; // 0x174 MovT
	func_4098(); // 0x175 NEW_2
	
Label_375:
	var_34_int = 40085; // 0x177 PushI
	var_35_bool = var_18_bool == var_34_int; // 0x178 Eq
	if(var_35_bool == 0) goto Label_383; // 0x179 JumpB
	var_36_object = Obj(); var_37_object = Obj(); // 0x17a PushV
	var_36_object = var_1_object; // 0x17b MovT
	var_37_object = var_0_object; // 0x17c MovT
	func_4098(); // 0x17d NEW_2
	
Label_383:
	var_38_int = 40086; // 0x17f PushI
	var_39_bool = var_18_bool == var_38_int; // 0x180 Eq
	if(var_39_bool == 0) goto Label_391; // 0x181 JumpB
	var_40_object = Obj(); var_41_object = Obj(); // 0x182 PushV
	var_40_object = var_1_object; // 0x183 MovT
	var_41_object = var_0_object; // 0x184 MovT
	func_4098(); // 0x185 NEW_2
	
Label_391:
	var_42_int = 45493; // 0x187 PushI
	var_43_bool = var_17_object == var_42_int; // 0x188 Eq
	if(var_43_bool == 0) goto Label_605; // 0x189 JumpB
	var_44_bool = 0; var_45_object = Obj(); // 0x18a PushV
	var_45_object = var_1_object; // 0x18b MovT
	func_4127(var_45_object); // 0x18c NEW_2
	if(var_44_bool == 0) goto Label_551; // 0x18e JumpB
	var_52_string = ""; // 0x18f PushV
	var_52_string = "Neutral"; // 0x190 MovS
	func_323(var_18_bool, var_52_string); // 0x191 NEW_2
	var_69_int = 543041; // 0x193 PushI
	SetMessage(var_69_int); // 0x194 TObjFunc
	ClearReplies(); // 0x196 TObjFunc
	var_70_bool = 0; var_71_object = Obj(); // 0x198 PushV
	var_71_object = var_1_object; // 0x199 MovT
	func_4139(var_70_bool, var_71_object); // 0x19a NEW_2
	if(var_70_bool == 0) goto Label_418; // 0x19c JumpB
	var_81_int = 538210; // 0x19d PushI
	var_82_int = -1; // 0x19e PushI
	var_83_int = 40087; // 0x19f PushI
	AddReply(var_81_int, var_82_int, var_83_int); // 0x1a0 TObjFunc
	
Label_418:
	var_84_bool = 0; var_85_object = Obj(); // 0x1a2 PushV
	var_85_object = var_1_object; // 0x1a3 MovT
	func_4139(var_84_bool, var_85_object); // 0x1a4 NEW_2
	if(var_84_bool == 0) goto Label_428; // 0x1a6 JumpB
	var_86_int = 543042; // 0x1a7 PushI
	var_87_int = -1; // 0x1a8 PushI
	var_88_int = 45494; // 0x1a9 PushI
	AddReply(var_86_int, var_87_int, var_88_int); // 0x1aa TObjFunc
	
Label_428:
	var_89_bool = 0; var_90_object = Obj(); // 0x1ac PushV
	var_90_object = var_1_object; // 0x1ad MovT
	func_4139(var_89_bool, var_90_object); // 0x1ae NEW_2
	if(var_89_bool == 0) goto Label_438; // 0x1b0 JumpB
	var_91_int = 543043; // 0x1b1 PushI
	var_92_int = -1; // 0x1b2 PushI
	var_93_int = 45495; // 0x1b3 PushI
	AddReply(var_91_int, var_92_int, var_93_int); // 0x1b4 TObjFunc
	
Label_438:
	var_94_bool = 0; // 0x1b6 PushV
	var_94_bool = 1; // 0x1b7 MovB
	var_95_bool = 0; // 0x1b8 PushV
	var_95_bool = 1; // 0x1b9 MovB
	var_96_bool = 0; var_97_object = Obj(); // 0x1ba PushV
	var_97_object = var_1_object; // 0x1bb MovT
	func_4159(var_96_bool, var_97_object); // 0x1bc NEW_2
	if(var_96_bool == 0) goto Label_453; // 0x1be JumpB
	var_102_bool = 0; var_103_object = Obj(); // 0x1bf PushV
	var_103_object = var_1_object; // 0x1c0 MovT
	func_4169(var_102_bool, var_103_object); // 0x1c1 NEW_2
	if(var_102_bool == 0) goto Label_453; // 0x1c3 JumpB
	var_95_bool = 0; // 0x1c4 MovB
	
Label_453:
	if(var_95_bool == 0) goto Label_460; // 0x1c5 JumpB
	var_108_bool = 0; var_109_object = Obj(); // 0x1c6 PushV
	var_109_object = var_1_object; // 0x1c7 MovT
	func_4179(var_108_bool, var_109_object); // 0x1c8 NEW_2
	if(var_108_bool == 0) goto Label_460; // 0x1ca JumpB
	var_94_bool = 0; // 0x1cb MovB
	
Label_460:
	if(var_94_bool == 0) goto Label_466; // 0x1cc JumpB
	var_114_int = 543055; // 0x1cd PushI
	var_115_int = -1; // 0x1ce PushI
	var_116_int = 45510; // 0x1cf PushI
	AddReply(var_114_int, var_115_int, var_116_int); // 0x1d0 TObjFunc
	
Label_466:
	var_117_bool = 0; // 0x1d2 PushV
	var_117_bool = 1; // 0x1d3 MovB
	var_118_bool = 0; var_119_object = Obj(); // 0x1d4 PushV
	var_119_object = var_1_object; // 0x1d5 MovT
	func_4159(var_118_bool, var_119_object); // 0x1d6 NEW_2
	if(var_118_bool == 0) goto Label_479; // 0x1d8 JumpB
	var_120_bool = 0; var_121_object = Obj(); // 0x1d9 PushV
	var_121_object = var_1_object; // 0x1da MovT
	func_4169(var_120_bool, var_121_object); // 0x1db NEW_2
	if(var_120_bool == 0) goto Label_479; // 0x1dd JumpB
	var_117_bool = 0; // 0x1de MovB
	
Label_479:
	if(var_117_bool == 0) goto Label_485; // 0x1df JumpB
	var_122_int = 543056; // 0x1e0 PushI
	var_123_int = -1; // 0x1e1 PushI
	var_124_int = 45511; // 0x1e2 PushI
	AddReply(var_122_int, var_123_int, var_124_int); // 0x1e3 TObjFunc
	
Label_485:
	var_125_bool = 0; // 0x1e5 PushV
	var_125_bool = 1; // 0x1e6 MovB
	var_126_bool = 0; // 0x1e7 PushV
	var_126_bool = 1; // 0x1e8 MovB
	var_127_bool = 0; var_128_object = Obj(); // 0x1e9 PushV
	var_128_object = var_1_object; // 0x1ea MovT
	func_4189(var_127_bool, var_128_object); // 0x1eb NEW_2
	if(var_127_bool == 0) goto Label_500; // 0x1ed JumpB
	var_133_bool = 0; var_134_object = Obj(); // 0x1ee PushV
	var_134_object = var_1_object; // 0x1ef MovT
	func_4199(var_133_bool, var_134_object); // 0x1f0 NEW_2
	if(var_133_bool == 0) goto Label_500; // 0x1f2 JumpB
	var_126_bool = 0; // 0x1f3 MovB
	
Label_500:
	if(var_126_bool == 0) goto Label_507; // 0x1f4 JumpB
	var_139_bool = 0; var_140_object = Obj(); // 0x1f5 PushV
	var_140_object = var_1_object; // 0x1f6 MovT
	func_4209(var_139_bool, var_140_object); // 0x1f7 NEW_2
	if(var_139_bool == 0) goto Label_507; // 0x1f9 JumpB
	var_125_bool = 0; // 0x1fa MovB
	
Label_507:
	if(var_125_bool == 0) goto Label_513; // 0x1fb JumpB
	var_145_int = 543062; // 0x1fc PushI
	var_146_int = -1; // 0x1fd PushI
	var_147_int = 45517; // 0x1fe PushI
	AddReply(var_145_int, var_146_int, var_147_int); // 0x1ff TObjFunc
	
Label_513:
	var_148_bool = 0; // 0x201 PushV
	var_148_bool = 1; // 0x202 MovB
	var_149_bool = 0; // 0x203 PushV
	var_149_bool = 1; // 0x204 MovB
	var_150_bool = 0; // 0x205 PushV
	var_150_bool = 1; // 0x206 MovB
	var_151_bool = 0; var_152_object = Obj(); // 0x207 PushV
	var_152_object = var_1_object; // 0x208 MovT
	func_4179(var_151_bool, var_152_object); // 0x209 NEW_2
	if(var_151_bool == 0) goto Label_530; // 0x20b JumpB
	var_153_bool = 0; var_154_object = Obj(); // 0x20c PushV
	var_154_object = var_1_object; // 0x20d MovT
	func_4189(var_153_bool, var_154_object); // 0x20e NEW_2
	if(var_153_bool == 0) goto Label_530; // 0x210 JumpB
	var_150_bool = 0; // 0x211 MovB
	
Label_530:
	if(var_150_bool == 0) goto Label_537; // 0x212 JumpB
	var_155_bool = 0; var_156_object = Obj(); // 0x213 PushV
	var_156_object = var_1_object; // 0x214 MovT
	func_4199(var_155_bool, var_156_object); // 0x215 NEW_2
	if(var_155_bool == 0) goto Label_537; // 0x217 JumpB
	var_149_bool = 0; // 0x218 MovB
	
Label_537:
	if(var_149_bool == 0) goto Label_544; // 0x219 JumpB
	var_157_bool = 0; var_158_object = Obj(); // 0x21a PushV
	var_158_object = var_1_object; // 0x21b MovT
	func_4209(var_157_bool, var_158_object); // 0x21c NEW_2
	if(var_157_bool == 0) goto Label_544; // 0x21e JumpB
	var_148_bool = 0; // 0x21f MovB
	
Label_544:
	if(var_148_bool == 0) goto Label_550; // 0x220 JumpB
	var_159_int = 543064; // 0x221 PushI
	var_160_int = -1; // 0x222 PushI
	var_161_int = 45519; // 0x223 PushI
	AddReply(var_159_int, var_160_int, var_161_int); // 0x224 TObjFunc
	
Label_550:
	return 0; // 0x226 Return
	
Label_551:
	var_162_string = ""; // 0x227 PushV
	var_162_string = "Neutral"; // 0x228 MovS
	func_323(var_18_bool, var_162_string); // 0x229 NEW_2
	var_163_int = 538207; // 0x22b PushI
	SetMessage(var_163_int); // 0x22c TObjFunc
	ClearReplies(); // 0x22e TObjFunc
	var_164_bool = 0; var_165_object = Obj(); // 0x230 PushV
	var_165_object = var_1_object; // 0x231 MovT
	func_4103(var_165_object); // 0x232 NEW_2
	if(var_164_bool == 0) goto Label_570; // 0x234 JumpB
	var_170_int = 538208; // 0x235 PushI
	var_171_int = -1; // 0x236 PushI
	var_172_int = 40085; // 0x237 PushI
	AddReply(var_170_int, var_171_int, var_172_int); // 0x238 TObjFunc
	
Label_570:
	var_173_bool = 0; var_174_object = Obj(); // 0x23a PushV
	var_174_object = var_1_object; // 0x23b MovT
	func_4115(var_174_object); // 0x23c NEW_2
	if(var_173_bool == 0) goto Label_580; // 0x23e JumpB
	var_179_int = 538209; // 0x23f PushI
	var_180_int = -1; // 0x240 PushI
	var_181_int = 40086; // 0x241 PushI
	AddReply(var_179_int, var_180_int, var_181_int); // 0x242 TObjFunc
	
Label_580:
	var_182_bool = 0; // 0x244 PushV
	var_182_bool = 0; // 0x245 MovB
	var_183_bool = 0; var_184_object = Obj(); // 0x246 PushV
	var_184_object = var_1_object; // 0x247 MovT
	func_4103(var_184_object); // 0x248 NEW_2
	if(var_183_bool == 0) goto Label_593; // 0x24a JumpB
	var_185_bool = 0; var_186_object = Obj(); // 0x24b PushV
	var_186_object = var_1_object; // 0x24c MovT
	func_4149(var_185_bool, var_186_object); // 0x24d NEW_2
	if(var_185_bool == 0) goto Label_593; // 0x24f JumpB
	var_182_bool = 1; // 0x250 MovB
	
Label_593:
	if(var_182_bool == 0) goto Label_599; // 0x251 JumpB
	var_191_int = 538235; // 0x252 PushI
	var_192_int = 40114; // 0x253 PushI
	var_193_int = 40113; // 0x254 PushI
	AddReply(var_191_int, var_192_int, var_193_int); // 0x255 TObjFunc
	
Label_599:
	var_194_int = 538396; // 0x257 PushI
	var_195_int = -1; // 0x258 PushI
	var_196_int = 40282; // 0x259 PushI
	AddReply(var_194_int, var_195_int, var_196_int); // 0x25a TObjFunc
	return 0; // 0x25c Return
	
Label_605:
	var_197_int = 40272; // 0x25d PushI
	var_198_bool = var_17_object == var_197_int; // 0x25e Eq
	if(var_198_bool == 0) goto Label_608; // 0x25f JumpB
	
Label_608:
	var_199_int = 40274; // 0x260 PushI
	var_200_bool = var_17_object == var_199_int; // 0x261 Eq
	if(var_200_bool == 0) goto Label_631; // 0x262 JumpB
	var_201_string = ""; // 0x263 PushV
	var_201_string = "Neutral"; // 0x264 MovS
	func_323(var_18_bool, var_201_string); // 0x265 NEW_2
	var_202_int = 538388; // 0x267 PushI
	SetMessage(var_202_int); // 0x268 TObjFunc
	ClearReplies(); // 0x26a TObjFunc
	var_203_int = 538389; // 0x26c PushI
	var_204_int = 40276; // 0x26d PushI
	var_205_int = 40275; // 0x26e PushI
	AddReply(var_203_int, var_204_int, var_205_int); // 0x26f TObjFunc
	var_206_int = 538392; // 0x271 PushI
	var_207_int = 40279; // 0x272 PushI
	var_208_int = 40278; // 0x273 PushI
	AddReply(var_206_int, var_207_int, var_208_int); // 0x274 TObjFunc
	return 0; // 0x276 Return
	
Label_631:
	var_209_int = 40279; // 0x277 PushI
	var_210_bool = var_17_object == var_209_int; // 0x278 Eq
	if(var_210_bool == 0) goto Label_649; // 0x279 JumpB
	var_211_string = ""; // 0x27a PushV
	var_211_string = "Neutral"; // 0x27b MovS
	func_323(var_18_bool, var_211_string); // 0x27c NEW_2
	var_212_int = 538393; // 0x27e PushI
	SetMessage(var_212_int); // 0x27f TObjFunc
	ClearReplies(); // 0x281 TObjFunc
	var_213_int = 538394; // 0x283 PushI
	var_214_int = -1; // 0x284 PushI
	var_215_int = 40280; // 0x285 PushI
	AddReply(var_213_int, var_214_int, var_215_int); // 0x286 TObjFunc
	return 0; // 0x288 Return
	
Label_649:
	var_216_int = 40276; // 0x289 PushI
	var_217_bool = var_17_object == var_216_int; // 0x28a Eq
	if(var_217_bool == 0) goto Label_667; // 0x28b JumpB
	var_218_string = ""; // 0x28c PushV
	var_218_string = "Neutral"; // 0x28d MovS
	func_323(var_18_bool, var_218_string); // 0x28e NEW_2
	var_219_int = 538390; // 0x290 PushI
	SetMessage(var_219_int); // 0x291 TObjFunc
	ClearReplies(); // 0x293 TObjFunc
	var_220_int = 538391; // 0x295 PushI
	var_221_int = -1; // 0x296 PushI
	var_222_int = 40277; // 0x297 PushI
	AddReply(var_220_int, var_221_int, var_222_int); // 0x298 TObjFunc
	return 0; // 0x29a Return
	
Label_667:
	var_223_int = 40262; // 0x29b PushI
	var_224_bool = var_17_object == var_223_int; // 0x29c Eq
	if(var_224_bool == 0) goto Label_670; // 0x29d JumpB
	
Label_670:
	var_225_int = 40264; // 0x29e PushI
	var_226_bool = var_17_object == var_225_int; // 0x29f Eq
	if(var_226_bool == 0) goto Label_693; // 0x2a0 JumpB
	var_227_string = ""; // 0x2a1 PushV
	var_227_string = "Neutral"; // 0x2a2 MovS
	func_323(var_18_bool, var_227_string); // 0x2a3 NEW_2
	var_228_int = 538378; // 0x2a5 PushI
	SetMessage(var_228_int); // 0x2a6 TObjFunc
	ClearReplies(); // 0x2a8 TObjFunc
	var_229_int = 538379; // 0x2aa PushI
	var_230_int = 40266; // 0x2ab PushI
	var_231_int = 40265; // 0x2ac PushI
	AddReply(var_229_int, var_230_int, var_231_int); // 0x2ad TObjFunc
	var_232_int = 538383; // 0x2af PushI
	var_233_int = -1; // 0x2b0 PushI
	var_234_int = 40269; // 0x2b1 PushI
	AddReply(var_232_int, var_233_int, var_234_int); // 0x2b2 TObjFunc
	return 0; // 0x2b4 Return
	
Label_693:
	var_235_int = 40266; // 0x2b5 PushI
	var_236_bool = var_17_object == var_235_int; // 0x2b6 Eq
	if(var_236_bool == 0) goto Label_716; // 0x2b7 JumpB
	var_237_string = ""; // 0x2b8 PushV
	var_237_string = "Neutral"; // 0x2b9 MovS
	func_323(var_18_bool, var_237_string); // 0x2ba NEW_2
	var_238_int = 538380; // 0x2bc PushI
	SetMessage(var_238_int); // 0x2bd TObjFunc
	ClearReplies(); // 0x2bf TObjFunc
	var_239_int = 538381; // 0x2c1 PushI
	var_240_int = -1; // 0x2c2 PushI
	var_241_int = 40267; // 0x2c3 PushI
	AddReply(var_239_int, var_240_int, var_241_int); // 0x2c4 TObjFunc
	var_242_int = 538382; // 0x2c6 PushI
	var_243_int = -1; // 0x2c7 PushI
	var_244_int = 40268; // 0x2c8 PushI
	AddReply(var_242_int, var_243_int, var_244_int); // 0x2c9 TObjFunc
	return 0; // 0x2cb Return
	
Label_716:
	var_245_int = 40250; // 0x2cc PushI
	var_246_bool = var_17_object == var_245_int; // 0x2cd Eq
	if(var_246_bool == 0) goto Label_719; // 0x2ce JumpB
	
Label_719:
	var_247_int = 40256; // 0x2cf PushI
	var_248_bool = var_17_object == var_247_int; // 0x2d0 Eq
	if(var_248_bool == 0) goto Label_742; // 0x2d1 JumpB
	var_249_string = ""; // 0x2d2 PushV
	var_249_string = "Neutral"; // 0x2d3 MovS
	func_323(var_18_bool, var_249_string); // 0x2d4 NEW_2
	var_250_int = 538371; // 0x2d6 PushI
	SetMessage(var_250_int); // 0x2d7 TObjFunc
	ClearReplies(); // 0x2d9 TObjFunc
	var_251_int = 538372; // 0x2db PushI
	var_252_int = 40252; // 0x2dc PushI
	var_253_int = 40257; // 0x2dd PushI
	AddReply(var_251_int, var_252_int, var_253_int); // 0x2de TObjFunc
	var_254_int = 538373; // 0x2e0 PushI
	var_255_int = -1; // 0x2e1 PushI
	var_256_int = 40259; // 0x2e2 PushI
	AddReply(var_254_int, var_255_int, var_256_int); // 0x2e3 TObjFunc
	return 0; // 0x2e5 Return
	
Label_742:
	var_257_int = 40252; // 0x2e6 PushI
	var_258_bool = var_17_object == var_257_int; // 0x2e7 Eq
	if(var_258_bool == 0) goto Label_765; // 0x2e8 JumpB
	var_259_string = ""; // 0x2e9 PushV
	var_259_string = "Neutral"; // 0x2ea MovS
	func_323(var_18_bool, var_259_string); // 0x2eb NEW_2
	var_260_int = 538367; // 0x2ed PushI
	SetMessage(var_260_int); // 0x2ee TObjFunc
	ClearReplies(); // 0x2f0 TObjFunc
	var_261_int = 538368; // 0x2f2 PushI
	var_262_int = -1; // 0x2f3 PushI
	var_263_int = 40253; // 0x2f4 PushI
	AddReply(var_261_int, var_262_int, var_263_int); // 0x2f5 TObjFunc
	var_264_int = 538369; // 0x2f7 PushI
	var_265_int = -1; // 0x2f8 PushI
	var_266_int = 40254; // 0x2f9 PushI
	AddReply(var_264_int, var_265_int, var_266_int); // 0x2fa TObjFunc
	return 0; // 0x2fc Return
	
Label_765:
	var_267_int = 40233; // 0x2fd PushI
	var_268_bool = var_17_object == var_267_int; // 0x2fe Eq
	if(var_268_bool == 0) goto Label_768; // 0x2ff JumpB
	
Label_768:
	var_269_int = 40235; // 0x300 PushI
	var_270_bool = var_17_object == var_269_int; // 0x301 Eq
	if(var_270_bool == 0) goto Label_791; // 0x302 JumpB
	var_271_string = ""; // 0x303 PushV
	var_271_string = "Neutral"; // 0x304 MovS
	func_323(var_18_bool, var_271_string); // 0x305 NEW_2
	var_272_int = 538350; // 0x307 PushI
	SetMessage(var_272_int); // 0x308 TObjFunc
	ClearReplies(); // 0x30a TObjFunc
	var_273_int = 538351; // 0x30c PushI
	var_274_int = 40237; // 0x30d PushI
	var_275_int = 40236; // 0x30e PushI
	AddReply(var_273_int, var_274_int, var_275_int); // 0x30f TObjFunc
	var_276_int = 538362; // 0x311 PushI
	var_277_int = -1; // 0x312 PushI
	var_278_int = 40247; // 0x313 PushI
	AddReply(var_276_int, var_277_int, var_278_int); // 0x314 TObjFunc
	return 0; // 0x316 Return
	
Label_791:
	var_279_int = 40237; // 0x317 PushI
	var_280_bool = var_17_object == var_279_int; // 0x318 Eq
	if(var_280_bool == 0) goto Label_814; // 0x319 JumpB
	var_281_string = ""; // 0x31a PushV
	var_281_string = "Neutral"; // 0x31b MovS
	func_323(var_18_bool, var_281_string); // 0x31c NEW_2
	var_282_int = 538352; // 0x31e PushI
	SetMessage(var_282_int); // 0x31f TObjFunc
	ClearReplies(); // 0x321 TObjFunc
	var_283_int = 538353; // 0x323 PushI
	var_284_int = 40239; // 0x324 PushI
	var_285_int = 40238; // 0x325 PushI
	AddReply(var_283_int, var_284_int, var_285_int); // 0x326 TObjFunc
	var_286_int = 538359; // 0x328 PushI
	var_287_int = 40245; // 0x329 PushI
	var_288_int = 40244; // 0x32a PushI
	AddReply(var_286_int, var_287_int, var_288_int); // 0x32b TObjFunc
	return 0; // 0x32d Return
	
Label_814:
	var_289_int = 40245; // 0x32e PushI
	var_290_bool = var_17_object == var_289_int; // 0x32f Eq
	if(var_290_bool == 0) goto Label_832; // 0x330 JumpB
	var_291_string = ""; // 0x331 PushV
	var_291_string = "Neutral"; // 0x332 MovS
	func_323(var_18_bool, var_291_string); // 0x333 NEW_2
	var_292_int = 538360; // 0x335 PushI
	SetMessage(var_292_int); // 0x336 TObjFunc
	ClearReplies(); // 0x338 TObjFunc
	var_293_int = 538361; // 0x33a PushI
	var_294_int = -1; // 0x33b PushI
	var_295_int = 40246; // 0x33c PushI
	AddReply(var_293_int, var_294_int, var_295_int); // 0x33d TObjFunc
	return 0; // 0x33f Return
	
Label_832:
	var_296_int = 40239; // 0x340 PushI
	var_297_bool = var_17_object == var_296_int; // 0x341 Eq
	if(var_297_bool == 0) goto Label_855; // 0x342 JumpB
	var_298_string = ""; // 0x343 PushV
	var_298_string = "Neutral"; // 0x344 MovS
	func_323(var_18_bool, var_298_string); // 0x345 NEW_2
	var_299_int = 538354; // 0x347 PushI
	SetMessage(var_299_int); // 0x348 TObjFunc
	ClearReplies(); // 0x34a TObjFunc
	var_300_int = 538355; // 0x34c PushI
	var_301_int = -1; // 0x34d PushI
	var_302_int = 40240; // 0x34e PushI
	AddReply(var_300_int, var_301_int, var_302_int); // 0x34f TObjFunc
	var_303_int = 538356; // 0x351 PushI
	var_304_int = 40242; // 0x352 PushI
	var_305_int = 40241; // 0x353 PushI
	AddReply(var_303_int, var_304_int, var_305_int); // 0x354 TObjFunc
	return 0; // 0x356 Return
	
Label_855:
	var_306_int = 40242; // 0x357 PushI
	var_307_bool = var_17_object == var_306_int; // 0x358 Eq
	if(var_307_bool == 0) goto Label_873; // 0x359 JumpB
	var_308_string = ""; // 0x35a PushV
	var_308_string = "Neutral"; // 0x35b MovS
	func_323(var_18_bool, var_308_string); // 0x35c NEW_2
	var_309_int = 538357; // 0x35e PushI
	SetMessage(var_309_int); // 0x35f TObjFunc
	ClearReplies(); // 0x361 TObjFunc
	var_310_int = 538358; // 0x363 PushI
	var_311_int = -1; // 0x364 PushI
	var_312_int = 40243; // 0x365 PushI
	AddReply(var_310_int, var_311_int, var_312_int); // 0x366 TObjFunc
	return 0; // 0x368 Return
	
Label_873:
	var_313_int = 40216; // 0x369 PushI
	var_314_bool = var_17_object == var_313_int; // 0x36a Eq
	if(var_314_bool == 0) goto Label_876; // 0x36b JumpB
	
Label_876:
	var_315_int = 40218; // 0x36c PushI
	var_316_bool = var_17_object == var_315_int; // 0x36d Eq
	if(var_316_bool == 0) goto Label_899; // 0x36e JumpB
	var_317_string = ""; // 0x36f PushV
	var_317_string = "Neutral"; // 0x370 MovS
	func_323(var_18_bool, var_317_string); // 0x371 NEW_2
	var_318_int = 538335; // 0x373 PushI
	SetMessage(var_318_int); // 0x374 TObjFunc
	ClearReplies(); // 0x376 TObjFunc
	var_319_int = 538336; // 0x378 PushI
	var_320_int = 40220; // 0x379 PushI
	var_321_int = 40219; // 0x37a PushI
	AddReply(var_319_int, var_320_int, var_321_int); // 0x37b TObjFunc
	var_322_int = 538343; // 0x37d PushI
	var_323_int = 40228; // 0x37e PushI
	var_324_int = 40227; // 0x37f PushI
	AddReply(var_322_int, var_323_int, var_324_int); // 0x380 TObjFunc
	return 0; // 0x382 Return
	
Label_899:
	var_325_int = 40228; // 0x383 PushI
	var_326_bool = var_17_object == var_325_int; // 0x384 Eq
	if(var_326_bool == 0) goto Label_917; // 0x385 JumpB
	var_327_string = ""; // 0x386 PushV
	var_327_string = "Neutral"; // 0x387 MovS
	func_323(var_18_bool, var_327_string); // 0x388 NEW_2
	var_328_int = 538344; // 0x38a PushI
	SetMessage(var_328_int); // 0x38b TObjFunc
	ClearReplies(); // 0x38d TObjFunc
	var_329_int = 538345; // 0x38f PushI
	var_330_int = 40220; // 0x390 PushI
	var_331_int = 40229; // 0x391 PushI
	AddReply(var_329_int, var_330_int, var_331_int); // 0x392 TObjFunc
	return 0; // 0x394 Return
	
Label_917:
	var_332_int = 40220; // 0x395 PushI
	var_333_bool = var_17_object == var_332_int; // 0x396 Eq
	if(var_333_bool == 0) goto Label_940; // 0x397 JumpB
	var_334_string = ""; // 0x398 PushV
	var_334_string = "Neutral"; // 0x399 MovS
	func_323(var_18_bool, var_334_string); // 0x39a NEW_2
	var_335_int = 538337; // 0x39c PushI
	SetMessage(var_335_int); // 0x39d TObjFunc
	ClearReplies(); // 0x39f TObjFunc
	var_336_int = 538338; // 0x3a1 PushI
	var_337_int = 40222; // 0x3a2 PushI
	var_338_int = 40221; // 0x3a3 PushI
	AddReply(var_336_int, var_337_int, var_338_int); // 0x3a4 TObjFunc
	var_339_int = 538342; // 0x3a6 PushI
	var_340_int = 40222; // 0x3a7 PushI
	var_341_int = 40225; // 0x3a8 PushI
	AddReply(var_339_int, var_340_int, var_341_int); // 0x3a9 TObjFunc
	return 0; // 0x3ab Return
	
Label_940:
	var_342_int = 40222; // 0x3ac PushI
	var_343_bool = var_17_object == var_342_int; // 0x3ad Eq
	if(var_343_bool == 0) goto Label_963; // 0x3ae JumpB
	var_344_string = ""; // 0x3af PushV
	var_344_string = "Neutral"; // 0x3b0 MovS
	func_323(var_18_bool, var_344_string); // 0x3b1 NEW_2
	var_345_int = 538339; // 0x3b3 PushI
	SetMessage(var_345_int); // 0x3b4 TObjFunc
	ClearReplies(); // 0x3b6 TObjFunc
	var_346_int = 538340; // 0x3b8 PushI
	var_347_int = -1; // 0x3b9 PushI
	var_348_int = 40223; // 0x3ba PushI
	AddReply(var_346_int, var_347_int, var_348_int); // 0x3bb TObjFunc
	var_349_int = 538341; // 0x3bd PushI
	var_350_int = -1; // 0x3be PushI
	var_351_int = 40224; // 0x3bf PushI
	AddReply(var_349_int, var_350_int, var_351_int); // 0x3c0 TObjFunc
	return 0; // 0x3c2 Return
	
Label_963:
	var_352_int = 40206; // 0x3c3 PushI
	var_353_bool = var_17_object == var_352_int; // 0x3c4 Eq
	if(var_353_bool == 0) goto Label_966; // 0x3c5 JumpB
	
Label_966:
	var_354_int = 40208; // 0x3c6 PushI
	var_355_bool = var_17_object == var_354_int; // 0x3c7 Eq
	if(var_355_bool == 0) goto Label_989; // 0x3c8 JumpB
	var_356_string = ""; // 0x3c9 PushV
	var_356_string = "Neutral"; // 0x3ca MovS
	func_323(var_18_bool, var_356_string); // 0x3cb NEW_2
	var_357_int = 538325; // 0x3cd PushI
	SetMessage(var_357_int); // 0x3ce TObjFunc
	ClearReplies(); // 0x3d0 TObjFunc
	var_358_int = 538326; // 0x3d2 PushI
	var_359_int = 40210; // 0x3d3 PushI
	var_360_int = 40209; // 0x3d4 PushI
	AddReply(var_358_int, var_359_int, var_360_int); // 0x3d5 TObjFunc
	var_361_int = 538330; // 0x3d7 PushI
	var_362_int = -1; // 0x3d8 PushI
	var_363_int = 40213; // 0x3d9 PushI
	AddReply(var_361_int, var_362_int, var_363_int); // 0x3da TObjFunc
	return 0; // 0x3dc Return
	
Label_989:
	var_364_int = 40210; // 0x3dd PushI
	var_365_bool = var_17_object == var_364_int; // 0x3de Eq
	if(var_365_bool == 0) goto Label_1012; // 0x3df JumpB
	var_366_string = ""; // 0x3e0 PushV
	var_366_string = "Neutral"; // 0x3e1 MovS
	func_323(var_18_bool, var_366_string); // 0x3e2 NEW_2
	var_367_int = 538327; // 0x3e4 PushI
	SetMessage(var_367_int); // 0x3e5 TObjFunc
	ClearReplies(); // 0x3e7 TObjFunc
	var_368_int = 538328; // 0x3e9 PushI
	var_369_int = -1; // 0x3ea PushI
	var_370_int = 40211; // 0x3eb PushI
	AddReply(var_368_int, var_369_int, var_370_int); // 0x3ec TObjFunc
	var_371_int = 538329; // 0x3ee PushI
	var_372_int = -1; // 0x3ef PushI
	var_373_int = 40212; // 0x3f0 PushI
	AddReply(var_371_int, var_372_int, var_373_int); // 0x3f1 TObjFunc
	return 0; // 0x3f3 Return
	
Label_1012:
	var_374_int = 40192; // 0x3f4 PushI
	var_375_bool = var_17_object == var_374_int; // 0x3f5 Eq
	if(var_375_bool == 0) goto Label_1015; // 0x3f6 JumpB
	
Label_1015:
	var_376_int = 40194; // 0x3f7 PushI
	var_377_bool = var_17_object == var_376_int; // 0x3f8 Eq
	if(var_377_bool == 0) goto Label_1038; // 0x3f9 JumpB
	var_378_string = ""; // 0x3fa PushV
	var_378_string = "Neutral"; // 0x3fb MovS
	func_323(var_18_bool, var_378_string); // 0x3fc NEW_2
	var_379_int = 538311; // 0x3fe PushI
	SetMessage(var_379_int); // 0x3ff TObjFunc
	ClearReplies(); // 0x401 TObjFunc
	var_380_int = 538312; // 0x403 PushI
	var_381_int = 40196; // 0x404 PushI
	var_382_int = 40195; // 0x405 PushI
	AddReply(var_380_int, var_381_int, var_382_int); // 0x406 TObjFunc
	var_383_int = 538316; // 0x408 PushI
	var_384_int = 40200; // 0x409 PushI
	var_385_int = 40199; // 0x40a PushI
	AddReply(var_383_int, var_384_int, var_385_int); // 0x40b TObjFunc
	return 0; // 0x40d Return
	
Label_1038:
	var_386_int = 40200; // 0x40e PushI
	var_387_bool = var_17_object == var_386_int; // 0x40f Eq
	if(var_387_bool == 0) goto Label_1056; // 0x410 JumpB
	var_388_string = ""; // 0x411 PushV
	var_388_string = "Neutral"; // 0x412 MovS
	func_323(var_18_bool, var_388_string); // 0x413 NEW_2
	var_389_int = 538317; // 0x415 PushI
	SetMessage(var_389_int); // 0x416 TObjFunc
	ClearReplies(); // 0x418 TObjFunc
	var_390_int = 538318; // 0x41a PushI
	var_391_int = 40202; // 0x41b PushI
	var_392_int = 40201; // 0x41c PushI
	AddReply(var_390_int, var_391_int, var_392_int); // 0x41d TObjFunc
	return 0; // 0x41f Return
	
Label_1056:
	var_393_int = 40202; // 0x420 PushI
	var_394_bool = var_17_object == var_393_int; // 0x421 Eq
	if(var_394_bool == 0) goto Label_1079; // 0x422 JumpB
	var_395_string = ""; // 0x423 PushV
	var_395_string = "Neutral"; // 0x424 MovS
	func_323(var_18_bool, var_395_string); // 0x425 NEW_2
	var_396_int = 538319; // 0x427 PushI
	SetMessage(var_396_int); // 0x428 TObjFunc
	ClearReplies(); // 0x42a TObjFunc
	var_397_int = 538320; // 0x42c PushI
	var_398_int = -1; // 0x42d PushI
	var_399_int = 40203; // 0x42e PushI
	AddReply(var_397_int, var_398_int, var_399_int); // 0x42f TObjFunc
	var_400_int = 538321; // 0x431 PushI
	var_401_int = -1; // 0x432 PushI
	var_402_int = 40204; // 0x433 PushI
	AddReply(var_400_int, var_401_int, var_402_int); // 0x434 TObjFunc
	return 0; // 0x436 Return
	
Label_1079:
	var_403_int = 40196; // 0x437 PushI
	var_404_bool = var_17_object == var_403_int; // 0x438 Eq
	if(var_404_bool == 0) goto Label_1102; // 0x439 JumpB
	var_405_string = ""; // 0x43a PushV
	var_405_string = "Neutral"; // 0x43b MovS
	func_323(var_18_bool, var_405_string); // 0x43c NEW_2
	var_406_int = 538313; // 0x43e PushI
	SetMessage(var_406_int); // 0x43f TObjFunc
	ClearReplies(); // 0x441 TObjFunc
	var_407_int = 538314; // 0x443 PushI
	var_408_int = -1; // 0x444 PushI
	var_409_int = 40197; // 0x445 PushI
	AddReply(var_407_int, var_408_int, var_409_int); // 0x446 TObjFunc
	var_410_int = 538315; // 0x448 PushI
	var_411_int = -1; // 0x449 PushI
	var_412_int = 40198; // 0x44a PushI
	AddReply(var_410_int, var_411_int, var_412_int); // 0x44b TObjFunc
	return 0; // 0x44d Return
	
Label_1102:
	var_413_int = 40174; // 0x44e PushI
	var_414_bool = var_17_object == var_413_int; // 0x44f Eq
	if(var_414_bool == 0) goto Label_1105; // 0x450 JumpB
	
Label_1105:
	var_415_int = 40186; // 0x451 PushI
	var_416_bool = var_17_object == var_415_int; // 0x452 Eq
	if(var_416_bool == 0) goto Label_1123; // 0x453 JumpB
	var_417_string = ""; // 0x454 PushV
	var_417_string = "Neutral"; // 0x455 MovS
	func_323(var_18_bool, var_417_string); // 0x456 NEW_2
	var_418_int = 538303; // 0x458 PushI
	SetMessage(var_418_int); // 0x459 TObjFunc
	ClearReplies(); // 0x45b TObjFunc
	var_419_int = 538304; // 0x45d PushI
	var_420_int = 40188; // 0x45e PushI
	var_421_int = 40187; // 0x45f PushI
	AddReply(var_419_int, var_420_int, var_421_int); // 0x460 TObjFunc
	return 0; // 0x462 Return
	
Label_1123:
	var_422_int = 40188; // 0x463 PushI
	var_423_bool = var_17_object == var_422_int; // 0x464 Eq
	if(var_423_bool == 0) goto Label_1146; // 0x465 JumpB
	var_424_string = ""; // 0x466 PushV
	var_424_string = "Neutral"; // 0x467 MovS
	func_323(var_18_bool, var_424_string); // 0x468 NEW_2
	var_425_int = 538305; // 0x46a PushI
	SetMessage(var_425_int); // 0x46b TObjFunc
	ClearReplies(); // 0x46d TObjFunc
	var_426_int = 538306; // 0x46f PushI
	var_427_int = -1; // 0x470 PushI
	var_428_int = 40189; // 0x471 PushI
	AddReply(var_426_int, var_427_int, var_428_int); // 0x472 TObjFunc
	var_429_int = 538307; // 0x474 PushI
	var_430_int = -1; // 0x475 PushI
	var_431_int = 40190; // 0x476 PushI
	AddReply(var_429_int, var_430_int, var_431_int); // 0x477 TObjFunc
	return 0; // 0x479 Return
	
Label_1146:
	var_432_int = 40176; // 0x47a PushI
	var_433_bool = var_17_object == var_432_int; // 0x47b Eq
	if(var_433_bool == 0) goto Label_1169; // 0x47c JumpB
	var_434_string = ""; // 0x47d PushV
	var_434_string = "Neutral"; // 0x47e MovS
	func_323(var_18_bool, var_434_string); // 0x47f NEW_2
	var_435_int = 538294; // 0x481 PushI
	SetMessage(var_435_int); // 0x482 TObjFunc
	ClearReplies(); // 0x484 TObjFunc
	var_436_int = 538295; // 0x486 PushI
	var_437_int = 40178; // 0x487 PushI
	var_438_int = 40177; // 0x488 PushI
	AddReply(var_436_int, var_437_int, var_438_int); // 0x489 TObjFunc
	var_439_int = 538299; // 0x48b PushI
	var_440_int = 40182; // 0x48c PushI
	var_441_int = 40181; // 0x48d PushI
	AddReply(var_439_int, var_440_int, var_441_int); // 0x48e TObjFunc
	return 0; // 0x490 Return
	
Label_1169:
	var_442_int = 40182; // 0x491 PushI
	var_443_bool = var_17_object == var_442_int; // 0x492 Eq
	if(var_443_bool == 0) goto Label_1187; // 0x493 JumpB
	var_444_string = ""; // 0x494 PushV
	var_444_string = "Neutral"; // 0x495 MovS
	func_323(var_18_bool, var_444_string); // 0x496 NEW_2
	var_445_int = 538300; // 0x498 PushI
	SetMessage(var_445_int); // 0x499 TObjFunc
	ClearReplies(); // 0x49b TObjFunc
	var_446_int = 538301; // 0x49d PushI
	var_447_int = 40178; // 0x49e PushI
	var_448_int = 40183; // 0x49f PushI
	AddReply(var_446_int, var_447_int, var_448_int); // 0x4a0 TObjFunc
	return 0; // 0x4a2 Return
	
Label_1187:
	var_449_int = 40178; // 0x4a3 PushI
	var_450_bool = var_17_object == var_449_int; // 0x4a4 Eq
	if(var_450_bool == 0) goto Label_1215; // 0x4a5 JumpB
	var_451_string = ""; // 0x4a6 PushV
	var_451_string = "Neutral"; // 0x4a7 MovS
	func_323(var_18_bool, var_451_string); // 0x4a8 NEW_2
	var_452_int = 538296; // 0x4aa PushI
	SetMessage(var_452_int); // 0x4ab TObjFunc
	ClearReplies(); // 0x4ad TObjFunc
	var_453_int = 538297; // 0x4af PushI
	var_454_int = -1; // 0x4b0 PushI
	var_455_int = 40179; // 0x4b1 PushI
	AddReply(var_453_int, var_454_int, var_455_int); // 0x4b2 TObjFunc
	var_456_bool = 0; var_457_object = Obj(); // 0x4b4 PushV
	var_457_object = var_1_object; // 0x4b5 MovT
	func_4103(var_457_object); // 0x4b6 NEW_2
	if(var_456_bool == 0) goto Label_1214; // 0x4b8 JumpB
	var_458_int = 538298; // 0x4b9 PushI
	var_459_int = -1; // 0x4ba PushI
	var_460_int = 40180; // 0x4bb PushI
	AddReply(var_458_int, var_459_int, var_460_int); // 0x4bc TObjFunc
	
Label_1214:
	return 0; // 0x4be Return
	
Label_1215:
	var_461_int = 40155; // 0x4bf PushI
	var_462_bool = var_17_object == var_461_int; // 0x4c0 Eq
	if(var_462_bool == 0) goto Label_1218; // 0x4c1 JumpB
	
Label_1218:
	var_463_int = 40157; // 0x4c2 PushI
	var_464_bool = var_17_object == var_463_int; // 0x4c3 Eq
	if(var_464_bool == 0) goto Label_1241; // 0x4c4 JumpB
	var_465_string = ""; // 0x4c5 PushV
	var_465_string = "Neutral"; // 0x4c6 MovS
	func_323(var_18_bool, var_465_string); // 0x4c7 NEW_2
	var_466_int = 538275; // 0x4c9 PushI
	SetMessage(var_466_int); // 0x4ca TObjFunc
	ClearReplies(); // 0x4cc TObjFunc
	var_467_int = 538276; // 0x4ce PushI
	var_468_int = 40159; // 0x4cf PushI
	var_469_int = 40158; // 0x4d0 PushI
	AddReply(var_467_int, var_468_int, var_469_int); // 0x4d1 TObjFunc
	var_470_int = 538288; // 0x4d3 PushI
	var_471_int = -1; // 0x4d4 PushI
	var_472_int = 40170; // 0x4d5 PushI
	AddReply(var_470_int, var_471_int, var_472_int); // 0x4d6 TObjFunc
	return 0; // 0x4d8 Return
	
Label_1241:
	var_473_int = 40159; // 0x4d9 PushI
	var_474_bool = var_17_object == var_473_int; // 0x4da Eq
	if(var_474_bool == 0) goto Label_1259; // 0x4db JumpB
	var_475_string = ""; // 0x4dc PushV
	var_475_string = "Neutral"; // 0x4dd MovS
	func_323(var_18_bool, var_475_string); // 0x4de NEW_2
	var_476_int = 538277; // 0x4e0 PushI
	SetMessage(var_476_int); // 0x4e1 TObjFunc
	ClearReplies(); // 0x4e3 TObjFunc
	var_477_int = 538278; // 0x4e5 PushI
	var_478_int = 40161; // 0x4e6 PushI
	var_479_int = 40160; // 0x4e7 PushI
	AddReply(var_477_int, var_478_int, var_479_int); // 0x4e8 TObjFunc
	return 0; // 0x4ea Return
	
Label_1259:
	var_480_int = 40161; // 0x4eb PushI
	var_481_bool = var_17_object == var_480_int; // 0x4ec Eq
	if(var_481_bool == 0) goto Label_1282; // 0x4ed JumpB
	var_482_string = ""; // 0x4ee PushV
	var_482_string = "Neutral"; // 0x4ef MovS
	func_323(var_18_bool, var_482_string); // 0x4f0 NEW_2
	var_483_int = 538279; // 0x4f2 PushI
	SetMessage(var_483_int); // 0x4f3 TObjFunc
	ClearReplies(); // 0x4f5 TObjFunc
	var_484_int = 538280; // 0x4f7 PushI
	var_485_int = 40163; // 0x4f8 PushI
	var_486_int = 40162; // 0x4f9 PushI
	AddReply(var_484_int, var_485_int, var_486_int); // 0x4fa TObjFunc
	var_487_int = 538284; // 0x4fc PushI
	var_488_int = 40167; // 0x4fd PushI
	var_489_int = 40166; // 0x4fe PushI
	AddReply(var_487_int, var_488_int, var_489_int); // 0x4ff TObjFunc
	return 0; // 0x501 Return
	
Label_1282:
	var_490_int = 40167; // 0x502 PushI
	var_491_bool = var_17_object == var_490_int; // 0x503 Eq
	if(var_491_bool == 0) goto Label_1305; // 0x504 JumpB
	var_492_string = ""; // 0x505 PushV
	var_492_string = "Neutral"; // 0x506 MovS
	func_323(var_18_bool, var_492_string); // 0x507 NEW_2
	var_493_int = 538285; // 0x509 PushI
	SetMessage(var_493_int); // 0x50a TObjFunc
	ClearReplies(); // 0x50c TObjFunc
	var_494_int = 538286; // 0x50e PushI
	var_495_int = -1; // 0x50f PushI
	var_496_int = 40168; // 0x510 PushI
	AddReply(var_494_int, var_495_int, var_496_int); // 0x511 TObjFunc
	var_497_int = 538287; // 0x513 PushI
	var_498_int = -1; // 0x514 PushI
	var_499_int = 40169; // 0x515 PushI
	AddReply(var_497_int, var_498_int, var_499_int); // 0x516 TObjFunc
	return 0; // 0x518 Return
	
Label_1305:
	var_500_int = 40163; // 0x519 PushI
	var_501_bool = var_17_object == var_500_int; // 0x51a Eq
	if(var_501_bool == 0) goto Label_1328; // 0x51b JumpB
	var_502_string = ""; // 0x51c PushV
	var_502_string = "Neutral"; // 0x51d MovS
	func_323(var_18_bool, var_502_string); // 0x51e NEW_2
	var_503_int = 538281; // 0x520 PushI
	SetMessage(var_503_int); // 0x521 TObjFunc
	ClearReplies(); // 0x523 TObjFunc
	var_504_int = 538282; // 0x525 PushI
	var_505_int = -1; // 0x526 PushI
	var_506_int = 40164; // 0x527 PushI
	AddReply(var_504_int, var_505_int, var_506_int); // 0x528 TObjFunc
	var_507_int = 538283; // 0x52a PushI
	var_508_int = -1; // 0x52b PushI
	var_509_int = 40165; // 0x52c PushI
	AddReply(var_507_int, var_508_int, var_509_int); // 0x52d TObjFunc
	return 0; // 0x52f Return
	
Label_1328:
	var_510_int = 40135; // 0x530 PushI
	var_511_bool = var_17_object == var_510_int; // 0x531 Eq
	if(var_511_bool == 0) goto Label_1331; // 0x532 JumpB
	
Label_1331:
	var_512_int = 40137; // 0x533 PushI
	var_513_bool = var_17_object == var_512_int; // 0x534 Eq
	if(var_513_bool == 0) goto Label_1359; // 0x535 JumpB
	var_514_string = ""; // 0x536 PushV
	var_514_string = "Neutral"; // 0x537 MovS
	func_323(var_18_bool, var_514_string); // 0x538 NEW_2
	var_515_int = 538256; // 0x53a PushI
	SetMessage(var_515_int); // 0x53b TObjFunc
	ClearReplies(); // 0x53d TObjFunc
	var_516_int = 538257; // 0x53f PushI
	var_517_int = 40139; // 0x540 PushI
	var_518_int = 40138; // 0x541 PushI
	AddReply(var_516_int, var_517_int, var_518_int); // 0x542 TObjFunc
	var_519_int = 538269; // 0x544 PushI
	var_520_int = 40139; // 0x545 PushI
	var_521_int = 40150; // 0x546 PushI
	AddReply(var_519_int, var_520_int, var_521_int); // 0x547 TObjFunc
	var_522_int = 538270; // 0x549 PushI
	var_523_int = -1; // 0x54a PushI
	var_524_int = 40152; // 0x54b PushI
	AddReply(var_522_int, var_523_int, var_524_int); // 0x54c TObjFunc
	return 0; // 0x54e Return
	
Label_1359:
	var_525_int = 40139; // 0x54f PushI
	var_526_bool = var_17_object == var_525_int; // 0x550 Eq
	if(var_526_bool == 0) goto Label_1377; // 0x551 JumpB
	var_527_string = ""; // 0x552 PushV
	var_527_string = "Neutral"; // 0x553 MovS
	func_323(var_18_bool, var_527_string); // 0x554 NEW_2
	var_528_int = 538258; // 0x556 PushI
	SetMessage(var_528_int); // 0x557 TObjFunc
	ClearReplies(); // 0x559 TObjFunc
	var_529_int = 538259; // 0x55b PushI
	var_530_int = 40141; // 0x55c PushI
	var_531_int = 40140; // 0x55d PushI
	AddReply(var_529_int, var_530_int, var_531_int); // 0x55e TObjFunc
	return 0; // 0x560 Return
	
Label_1377:
	var_532_int = 40141; // 0x561 PushI
	var_533_bool = var_17_object == var_532_int; // 0x562 Eq
	if(var_533_bool == 0) goto Label_1400; // 0x563 JumpB
	var_534_string = ""; // 0x564 PushV
	var_534_string = "Neutral"; // 0x565 MovS
	func_323(var_18_bool, var_534_string); // 0x566 NEW_2
	var_535_int = 538260; // 0x568 PushI
	SetMessage(var_535_int); // 0x569 TObjFunc
	ClearReplies(); // 0x56b TObjFunc
	var_536_int = 538261; // 0x56d PushI
	var_537_int = 40143; // 0x56e PushI
	var_538_int = 40142; // 0x56f PushI
	AddReply(var_536_int, var_537_int, var_538_int); // 0x570 TObjFunc
	var_539_int = 538265; // 0x572 PushI
	var_540_int = 40147; // 0x573 PushI
	var_541_int = 40146; // 0x574 PushI
	AddReply(var_539_int, var_540_int, var_541_int); // 0x575 TObjFunc
	return 0; // 0x577 Return
	
Label_1400:
	var_542_int = 40147; // 0x578 PushI
	var_543_bool = var_17_object == var_542_int; // 0x579 Eq
	if(var_543_bool == 0) goto Label_1423; // 0x57a JumpB
	var_544_string = ""; // 0x57b PushV
	var_544_string = "Neutral"; // 0x57c MovS
	func_323(var_18_bool, var_544_string); // 0x57d NEW_2
	var_545_int = 538266; // 0x57f PushI
	SetMessage(var_545_int); // 0x580 TObjFunc
	ClearReplies(); // 0x582 TObjFunc
	var_546_int = 538267; // 0x584 PushI
	var_547_int = -1; // 0x585 PushI
	var_548_int = 40148; // 0x586 PushI
	AddReply(var_546_int, var_547_int, var_548_int); // 0x587 TObjFunc
	var_549_int = 538268; // 0x589 PushI
	var_550_int = -1; // 0x58a PushI
	var_551_int = 40149; // 0x58b PushI
	AddReply(var_549_int, var_550_int, var_551_int); // 0x58c TObjFunc
	return 0; // 0x58e Return
	
Label_1423:
	var_552_int = 40143; // 0x58f PushI
	var_553_bool = var_17_object == var_552_int; // 0x590 Eq
	if(var_553_bool == 0) goto Label_1446; // 0x591 JumpB
	var_554_string = ""; // 0x592 PushV
	var_554_string = "Neutral"; // 0x593 MovS
	func_323(var_18_bool, var_554_string); // 0x594 NEW_2
	var_555_int = 538262; // 0x596 PushI
	SetMessage(var_555_int); // 0x597 TObjFunc
	ClearReplies(); // 0x599 TObjFunc
	var_556_int = 538263; // 0x59b PushI
	var_557_int = -1; // 0x59c PushI
	var_558_int = 40144; // 0x59d PushI
	AddReply(var_556_int, var_557_int, var_558_int); // 0x59e TObjFunc
	var_559_int = 538264; // 0x5a0 PushI
	var_560_int = -1; // 0x5a1 PushI
	var_561_int = 40145; // 0x5a2 PushI
	AddReply(var_559_int, var_560_int, var_561_int); // 0x5a3 TObjFunc
	return 0; // 0x5a5 Return
	
Label_1446:
	var_562_int = 40114; // 0x5a6 PushI
	var_563_bool = var_17_object == var_562_int; // 0x5a7 Eq
	if(var_563_bool == 0) goto Label_1469; // 0x5a8 JumpB
	var_564_string = ""; // 0x5a9 PushV
	var_564_string = "Neutral"; // 0x5aa MovS
	func_323(var_18_bool, var_564_string); // 0x5ab NEW_2
	var_565_int = 538236; // 0x5ad PushI
	SetMessage(var_565_int); // 0x5ae TObjFunc
	ClearReplies(); // 0x5b0 TObjFunc
	var_566_int = 538237; // 0x5b2 PushI
	var_567_int = 40116; // 0x5b3 PushI
	var_568_int = 40115; // 0x5b4 PushI
	AddReply(var_566_int, var_567_int, var_568_int); // 0x5b5 TObjFunc
	var_569_int = 538252; // 0x5b7 PushI
	var_570_int = -1; // 0x5b8 PushI
	var_571_int = 40133; // 0x5b9 PushI
	AddReply(var_569_int, var_570_int, var_571_int); // 0x5ba TObjFunc
	return 0; // 0x5bc Return
	
Label_1469:
	var_572_int = 40116; // 0x5bd PushI
	var_573_bool = var_17_object == var_572_int; // 0x5be Eq
	if(var_573_bool == 0) goto Label_1492; // 0x5bf JumpB
	var_574_string = ""; // 0x5c0 PushV
	var_574_string = "Neutral"; // 0x5c1 MovS
	func_323(var_18_bool, var_574_string); // 0x5c2 NEW_2
	var_575_int = 538238; // 0x5c4 PushI
	SetMessage(var_575_int); // 0x5c5 TObjFunc
	ClearReplies(); // 0x5c7 TObjFunc
	var_576_int = 538239; // 0x5c9 PushI
	var_577_int = 40118; // 0x5ca PushI
	var_578_int = 40117; // 0x5cb PushI
	AddReply(var_576_int, var_577_int, var_578_int); // 0x5cc TObjFunc
	var_579_int = 538251; // 0x5ce PushI
	var_580_int = 40120; // 0x5cf PushI
	var_581_int = 40131; // 0x5d0 PushI
	AddReply(var_579_int, var_580_int, var_581_int); // 0x5d1 TObjFunc
	return 0; // 0x5d3 Return
	
Label_1492:
	var_582_int = 40118; // 0x5d4 PushI
	var_583_bool = var_17_object == var_582_int; // 0x5d5 Eq
	if(var_583_bool == 0) goto Label_1515; // 0x5d6 JumpB
	var_584_string = ""; // 0x5d7 PushV
	var_584_string = "Neutral"; // 0x5d8 MovS
	func_323(var_18_bool, var_584_string); // 0x5d9 NEW_2
	var_585_int = 538240; // 0x5db PushI
	SetMessage(var_585_int); // 0x5dc TObjFunc
	ClearReplies(); // 0x5de TObjFunc
	var_586_int = 538241; // 0x5e0 PushI
	var_587_int = 40120; // 0x5e1 PushI
	var_588_int = 40119; // 0x5e2 PushI
	AddReply(var_586_int, var_587_int, var_588_int); // 0x5e3 TObjFunc
	var_589_int = 538250; // 0x5e5 PushI
	var_590_int = 40120; // 0x5e6 PushI
	var_591_int = 40129; // 0x5e7 PushI
	AddReply(var_589_int, var_590_int, var_591_int); // 0x5e8 TObjFunc
	return 0; // 0x5ea Return
	
Label_1515:
	var_592_int = 40120; // 0x5eb PushI
	var_593_bool = var_17_object == var_592_int; // 0x5ec Eq
	if(var_593_bool == 0) goto Label_1538; // 0x5ed JumpB
	var_594_string = ""; // 0x5ee PushV
	var_594_string = "Neutral"; // 0x5ef MovS
	func_323(var_18_bool, var_594_string); // 0x5f0 NEW_2
	var_595_int = 538242; // 0x5f2 PushI
	SetMessage(var_595_int); // 0x5f3 TObjFunc
	ClearReplies(); // 0x5f5 TObjFunc
	var_596_int = 538243; // 0x5f7 PushI
	var_597_int = 40122; // 0x5f8 PushI
	var_598_int = 40121; // 0x5f9 PushI
	AddReply(var_596_int, var_597_int, var_598_int); // 0x5fa TObjFunc
	var_599_int = 538249; // 0x5fc PushI
	var_600_int = 40124; // 0x5fd PushI
	var_601_int = 40127; // 0x5fe PushI
	AddReply(var_599_int, var_600_int, var_601_int); // 0x5ff TObjFunc
	return 0; // 0x601 Return
	
Label_1538:
	var_602_int = 40122; // 0x602 PushI
	var_603_bool = var_17_object == var_602_int; // 0x603 Eq
	if(var_603_bool == 0) goto Label_1556; // 0x604 JumpB
	var_604_string = ""; // 0x605 PushV
	var_604_string = "Neutral"; // 0x606 MovS
	func_323(var_18_bool, var_604_string); // 0x607 NEW_2
	var_605_int = 538244; // 0x609 PushI
	SetMessage(var_605_int); // 0x60a TObjFunc
	ClearReplies(); // 0x60c TObjFunc
	var_606_int = 538245; // 0x60e PushI
	var_607_int = 40124; // 0x60f PushI
	var_608_int = 40123; // 0x610 PushI
	AddReply(var_606_int, var_607_int, var_608_int); // 0x611 TObjFunc
	return 0; // 0x613 Return
	
Label_1556:
	var_609_int = 40124; // 0x614 PushI
	var_610_bool = var_17_object == var_609_int; // 0x615 Eq
	if(var_610_bool == 0) goto Label_1579; // 0x616 JumpB
	var_611_string = ""; // 0x617 PushV
	var_611_string = "Neutral"; // 0x618 MovS
	func_323(var_18_bool, var_611_string); // 0x619 NEW_2
	var_612_int = 538246; // 0x61b PushI
	SetMessage(var_612_int); // 0x61c TObjFunc
	ClearReplies(); // 0x61e TObjFunc
	var_613_int = 538247; // 0x620 PushI
	var_614_int = -1; // 0x621 PushI
	var_615_int = 40125; // 0x622 PushI
	AddReply(var_613_int, var_614_int, var_615_int); // 0x623 TObjFunc
	var_616_int = 538248; // 0x625 PushI
	var_617_int = -1; // 0x626 PushI
	var_618_int = 40126; // 0x627 PushI
	AddReply(var_616_int, var_617_int, var_618_int); // 0x628 TObjFunc
	return 0; // 0x62a Return
	
Label_1579:
	var_619_int = 40100; // 0x62b PushI
	var_620_bool = var_17_object == var_619_int; // 0x62c Eq
	if(var_620_bool == 0) goto Label_1582; // 0x62d JumpB
	
Label_1582:
	var_621_int = 40102; // 0x62e PushI
	var_622_bool = var_17_object == var_621_int; // 0x62f Eq
	if(var_622_bool == 0) goto Label_1605; // 0x630 JumpB
	var_623_string = ""; // 0x631 PushV
	var_623_string = "Neutral"; // 0x632 MovS
	func_323(var_18_bool, var_623_string); // 0x633 NEW_2
	var_624_int = 538225; // 0x635 PushI
	SetMessage(var_624_int); // 0x636 TObjFunc
	ClearReplies(); // 0x638 TObjFunc
	var_625_int = 538226; // 0x63a PushI
	var_626_int = 40104; // 0x63b PushI
	var_627_int = 40103; // 0x63c PushI
	AddReply(var_625_int, var_626_int, var_627_int); // 0x63d TObjFunc
	var_628_int = 538230; // 0x63f PushI
	var_629_int = 40108; // 0x640 PushI
	var_630_int = 40107; // 0x641 PushI
	AddReply(var_628_int, var_629_int, var_630_int); // 0x642 TObjFunc
	return 0; // 0x644 Return
	
Label_1605:
	var_631_int = 40108; // 0x645 PushI
	var_632_bool = var_17_object == var_631_int; // 0x646 Eq
	if(var_632_bool == 0) goto Label_1628; // 0x647 JumpB
	var_633_string = ""; // 0x648 PushV
	var_633_string = "Neutral"; // 0x649 MovS
	func_323(var_18_bool, var_633_string); // 0x64a NEW_2
	var_634_int = 538231; // 0x64c PushI
	SetMessage(var_634_int); // 0x64d TObjFunc
	ClearReplies(); // 0x64f TObjFunc
	var_635_int = 538232; // 0x651 PushI
	var_636_int = 40104; // 0x652 PushI
	var_637_int = 40109; // 0x653 PushI
	AddReply(var_635_int, var_636_int, var_637_int); // 0x654 TObjFunc
	var_638_int = 538233; // 0x656 PushI
	var_639_int = -1; // 0x657 PushI
	var_640_int = 40111; // 0x658 PushI
	AddReply(var_638_int, var_639_int, var_640_int); // 0x659 TObjFunc
	return 0; // 0x65b Return
	
Label_1628:
	var_641_int = 40104; // 0x65c PushI
	var_642_bool = var_17_object == var_641_int; // 0x65d Eq
	if(var_642_bool == 0) goto Label_1651; // 0x65e JumpB
	var_643_string = ""; // 0x65f PushV
	var_643_string = "Neutral"; // 0x660 MovS
	func_323(var_18_bool, var_643_string); // 0x661 NEW_2
	var_644_int = 538227; // 0x663 PushI
	SetMessage(var_644_int); // 0x664 TObjFunc
	ClearReplies(); // 0x666 TObjFunc
	var_645_int = 538228; // 0x668 PushI
	var_646_int = -1; // 0x669 PushI
	var_647_int = 40105; // 0x66a PushI
	AddReply(var_645_int, var_646_int, var_647_int); // 0x66b TObjFunc
	var_648_int = 538229; // 0x66d PushI
	var_649_int = -1; // 0x66e PushI
	var_650_int = 40106; // 0x66f PushI
	AddReply(var_648_int, var_649_int, var_650_int); // 0x670 TObjFunc
	return 0; // 0x672 Return
	
Label_1651:
	var_651_int = 40089; // 0x673 PushI
	var_652_bool = var_17_object == var_651_int; // 0x674 Eq
	if(var_652_bool == 0) goto Label_1654; // 0x675 JumpB
	
Label_1654:
	var_653_int = 40091; // 0x676 PushI
	var_654_bool = var_17_object == var_653_int; // 0x677 Eq
	if(var_654_bool == 0) goto Label_1677; // 0x678 JumpB
	var_655_string = ""; // 0x679 PushV
	var_655_string = "Neutral"; // 0x67a MovS
	func_323(var_18_bool, var_655_string); // 0x67b NEW_2
	var_656_int = 538214; // 0x67d PushI
	SetMessage(var_656_int); // 0x67e TObjFunc
	ClearReplies(); // 0x680 TObjFunc
	var_657_int = 538215; // 0x682 PushI
	var_658_int = 40093; // 0x683 PushI
	var_659_int = 40092; // 0x684 PushI
	AddReply(var_657_int, var_658_int, var_659_int); // 0x685 TObjFunc
	var_660_int = 538221; // 0x687 PushI
	var_661_int = -1; // 0x688 PushI
	var_662_int = 40098; // 0x689 PushI
	AddReply(var_660_int, var_661_int, var_662_int); // 0x68a TObjFunc
	return 0; // 0x68c Return
	
Label_1677:
	var_663_int = 40093; // 0x68d PushI
	var_664_bool = var_17_object == var_663_int; // 0x68e Eq
	if(var_664_bool == 0) goto Label_1695; // 0x68f JumpB
	var_665_string = ""; // 0x690 PushV
	var_665_string = "Neutral"; // 0x691 MovS
	func_323(var_18_bool, var_665_string); // 0x692 NEW_2
	var_666_int = 538216; // 0x694 PushI
	SetMessage(var_666_int); // 0x695 TObjFunc
	ClearReplies(); // 0x697 TObjFunc
	var_667_int = 538217; // 0x699 PushI
	var_668_int = 40095; // 0x69a PushI
	var_669_int = 40094; // 0x69b PushI
	AddReply(var_667_int, var_668_int, var_669_int); // 0x69c TObjFunc
	return 0; // 0x69e Return
	
Label_1695:
	var_670_int = 40095; // 0x69f PushI
	var_671_bool = var_17_object == var_670_int; // 0x6a0 Eq
	if(var_671_bool == 0) goto Label_1718; // 0x6a1 JumpB
	var_672_string = ""; // 0x6a2 PushV
	var_672_string = "Neutral"; // 0x6a3 MovS
	func_323(var_18_bool, var_672_string); // 0x6a4 NEW_2
	var_673_int = 538218; // 0x6a6 PushI
	SetMessage(var_673_int); // 0x6a7 TObjFunc
	ClearReplies(); // 0x6a9 TObjFunc
	var_674_int = 538219; // 0x6ab PushI
	var_675_int = -1; // 0x6ac PushI
	var_676_int = 40096; // 0x6ad PushI
	AddReply(var_674_int, var_675_int, var_676_int); // 0x6ae TObjFunc
	var_677_int = 538220; // 0x6b0 PushI
	var_678_int = -1; // 0x6b1 PushI
	var_679_int = 40097; // 0x6b2 PushI
	AddReply(var_677_int, var_678_int, var_679_int); // 0x6b3 TObjFunc
	return 0; // 0x6b5 Return
	
Label_1718:
	var_680_int = 45520; // 0x6b6 PushI
	var_681_bool = var_17_object == var_680_int; // 0x6b7 Eq
	if(var_681_bool == 0) goto Label_1721; // 0x6b8 JumpB
	
Label_1721:
	var_682_int = 45524; // 0x6b9 PushI
	var_683_bool = var_17_object == var_682_int; // 0x6ba Eq
	if(var_683_bool == 0) goto Label_1744; // 0x6bb JumpB
	var_684_string = ""; // 0x6bc PushV
	var_684_string = "Neutral"; // 0x6bd MovS
	func_323(var_18_bool, var_684_string); // 0x6be NEW_2
	var_685_int = 543069; // 0x6c0 PushI
	SetMessage(var_685_int); // 0x6c1 TObjFunc
	ClearReplies(); // 0x6c3 TObjFunc
	var_686_int = 543070; // 0x6c5 PushI
	var_687_int = -1; // 0x6c6 PushI
	var_688_int = 45525; // 0x6c7 PushI
	AddReply(var_686_int, var_687_int, var_688_int); // 0x6c8 TObjFunc
	var_689_int = 543071; // 0x6ca PushI
	var_690_int = -1; // 0x6cb PushI
	var_691_int = 45526; // 0x6cc PushI
	AddReply(var_689_int, var_690_int, var_691_int); // 0x6cd TObjFunc
	return 0; // 0x6cf Return
	
Label_1744:
	var_692_int = 45513; // 0x6d0 PushI
	var_693_bool = var_17_object == var_692_int; // 0x6d1 Eq
	if(var_693_bool == 0) goto Label_1747; // 0x6d2 JumpB
	
Label_1747:
	var_694_int = 45498; // 0x6d3 PushI
	var_695_bool = var_17_object == var_694_int; // 0x6d4 Eq
	if(var_695_bool == 0) goto Label_1750; // 0x6d5 JumpB
	
Label_1750:
	var_696_int = 45503; // 0x6d6 PushI
	var_697_bool = var_17_object == var_696_int; // 0x6d7 Eq
	if(var_697_bool == 0) goto Label_1768; // 0x6d8 JumpB
	var_698_string = ""; // 0x6d9 PushV
	var_698_string = "Neutral"; // 0x6da MovS
	func_323(var_18_bool, var_698_string); // 0x6db NEW_2
	var_699_int = 543051; // 0x6dd PushI
	SetMessage(var_699_int); // 0x6de TObjFunc
	ClearReplies(); // 0x6e0 TObjFunc
	var_700_int = 543054; // 0x6e2 PushI
	var_701_int = -1; // 0x6e3 PushI
	var_702_int = 45509; // 0x6e4 PushI
	AddReply(var_700_int, var_701_int, var_702_int); // 0x6e5 TObjFunc
	return 0; // 0x6e7 Return
	
Label_1768:
	var_703_int = 45506; // 0x6e8 PushI
	var_704_bool = var_17_object == var_703_int; // 0x6e9 Eq
	if(var_704_bool == 0) goto Label_1786; // 0x6ea JumpB
	var_705_string = ""; // 0x6eb PushV
	var_705_string = "Neutral"; // 0x6ec MovS
	func_323(var_18_bool, var_705_string); // 0x6ed NEW_2
	var_706_int = 543052; // 0x6ef PushI
	SetMessage(var_706_int); // 0x6f0 TObjFunc
	ClearReplies(); // 0x6f2 TObjFunc
	var_707_int = 543053; // 0x6f4 PushI
	var_708_int = -1; // 0x6f5 PushI
	var_709_int = 45507; // 0x6f6 PushI
	AddReply(var_707_int, var_708_int, var_709_int); // 0x6f7 TObjFunc
	return 0; // 0x6f9 Return
	
Label_1786:
	var_3_string = 1; // 0x6fa TMovB
	var_710_bool = 0; // 0x6fb PushV
	func_5239(var_710_bool); // 0x6fc NEW_2
	if(var_710_bool == 0) goto Label_1794; // 0x6fe JumpB
	lshStopAnimation(); // 0x6ff Func
	goto Label_1796; // 0x701 Jump
	
Label_1796:
	return 0; // 0x704 Return
	
Label_1794:
	StopAnimation(); // 0x702 Func
	
Label_1798:
	return 0; // 0x706 Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	var_18_int = 0; var_19_int = 0; // 0x716 PushV
	var_20_int = 0; var_21_object = Obj(); // 0x717 PushV
	var_21_object = var_17_bool; // 0x718 Mov
	func_5031(var_21_object); // 0x719 NEW_2
	var_19_int = var_20_int; // 0x71a Mov
	var_22_int = 0; // 0x71c PushI
	var_23_bool = var_19_int > var_22_int; // 0x71d GT
	if(var_23_bool == 0) goto Label_1827; // 0x71e JumpB
	var_24_object = Obj(); // 0x71f PushV
	var_24_object = var_17_bool; // 0x720 Mov
	func_5034(var_24_object); // 0x721 NEW_2
	
Label_1827:
	return 2; // 0x723 Return
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool)
{
	func_5040(); // 0x725 NEW_2
	return 0; // 0x727 Return
}


task_2_event_22(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_float, var_8_float, var_9_bool, var_10_bool, var_11_bool, var_12_object, var_13_int, var_14_int, var_15_bool, var_16_float, var_17_int, var_18_bool, var_19_object, var_20_bool)
{
	return 0; // 0x79e Return
}


task_2_event_16(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_string, var_7_bool, var_8_bool, var_9_bool, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	return 0; // 0x7a0 Return
}


task_2_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	return 0; // 0x7a2 Return
}


task_3_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	var_18_int = 0; var_19_int = 0; // 0x7bb PushV
	var_20_int = 0; var_21_object = Obj(); // 0x7bc PushV
	var_21_object = var_17_bool; // 0x7bd Mov
	func_5031(var_21_object); // 0x7be NEW_2
	var_19_int = var_20_int; // 0x7bf Mov
	var_22_int = 0; // 0x7c1 PushI
	var_23_bool = var_19_int > var_22_int; // 0x7c2 GT
	if(var_23_bool == 0) goto Label_1998; // 0x7c3 JumpB
	var_24_int = 1; // 0x7c4 PushI
	var_25_bool = var_19_int > var_24_int; // 0x7c5 GT
	if(var_25_bool == 0) goto Label_1994; // 0x7c6 JumpB
	func_2166(var_19_int); // 0x7c8 NEW_2
	
Label_1994:
	var_27_object = Obj(); // 0x7ca PushV
	var_27_object = var_17_bool; // 0x7cb Mov
	func_5034(var_27_object); // 0x7cc NEW_2
	
Label_1998:
	return 2; // 0x7ce Return
}


task_3_event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	var_18_int = 0; var_19_int = 0; // 0x7cf PushV
	var_20_object = Obj(); // 0x7d0 PushV
	var_20_object = var_17_bool; // 0x7d1 Mov
	func_4763(var_20_object); // 0x7d2 NEW_2
	var_29_int = 0; var_30_object = Obj(); // 0x7d4 PushV
	var_30_object = var_17_bool; // 0x7d5 Mov
	func_4845(var_29_int, var_30_object); // 0x7d6 NEW_2
	var_19_int = var_29_int; // 0x7d7 Mov
	var_65_int = 0; // 0x7d9 PushI
	var_66_bool = var_19_int > var_65_int; // 0x7da GT
	if(var_66_bool == 0) goto Label_2022; // 0x7db JumpB
	var_67_int = 1; // 0x7dc PushI
	var_68_bool = var_19_int > var_67_int; // 0x7dd GT
	if(var_68_bool == 0) goto Label_2018; // 0x7de JumpB
	func_2166(var_19_int); // 0x7e0 NEW_2
	
Label_2018:
	var_70_object = Obj(); // 0x7e2 PushV
	var_70_object = var_17_bool; // 0x7e3 Mov
	func_4855(var_70_object); // 0x7e4 NEW_2
	
Label_2022:
	return 2; // 0x7e6 Return
}


task_3_event_30(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_bool, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_int = 0; var_21_int = 0; // 0x7e7 PushV
	var_22_bool = 0; var_23_object = Obj(); var_24_object = Obj(); var_25_bool = 0; // 0x7e8 PushV
	var_23_object = var_17_bool; // 0x7e9 Mov
	var_24_object = var_18_object; // 0x7ea Mov
	var_25_bool = var_19_bool; // 0x7eb Mov
	func_5288(var_22_bool, var_23_object, var_24_object, var_25_bool); // 0x7ec NEW_2
	if(var_22_bool == 0) goto Label_2050; // 0x7ee JumpB
	var_84_int = 0; var_85_object = Obj(); var_86_bool = 0; // 0x7ef PushV
	var_85_object = var_17_bool; // 0x7f0 Mov
	var_86_bool = var_19_bool; // 0x7f1 Mov
	func_4938(var_85_object, var_86_bool); // 0x7f2 NEW_2
	var_21_int = var_84_int; // 0x7f3 Mov
	var_117_int = 0; // 0x7f5 PushI
	var_118_bool = var_21_int > var_117_int; // 0x7f6 GT
	if(var_118_bool == 0) goto Label_2050; // 0x7f7 JumpB
	var_119_int = 1; // 0x7f8 PushI
	var_120_bool = var_21_int > var_119_int; // 0x7f9 GT
	if(var_120_bool == 0) goto Label_2046; // 0x7fa JumpB
	func_2166(var_21_int); // 0x7fc NEW_2
	
Label_2046:
	var_122_object = Obj(); // 0x7fe PushV
	var_122_object = var_17_bool; // 0x7ff Mov
	func_4945(var_122_object); // 0x800 NEW_2
	
Label_2050:
	return 2; // 0x802 Return
}


task_3_event_40(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	var_18_int = 0; var_19_int = 0; // 0x803 PushV
	var_20_int = 0; var_21_object = Obj(); // 0x804 PushV
	var_21_object = var_17_bool; // 0x805 Mov
	func_4980(var_21_object); // 0x806 NEW_2
	var_19_int = var_20_int; // 0x807 Mov
	var_22_int = 0; // 0x809 PushI
	var_23_bool = var_19_int > var_22_int; // 0x80a GT
	if(var_23_bool == 0) goto Label_2070; // 0x80b JumpB
	var_24_int = 1; // 0x80c PushI
	var_25_bool = var_19_int > var_24_int; // 0x80d GT
	if(var_25_bool == 0) goto Label_2066; // 0x80e JumpB
	func_2166(var_19_int); // 0x810 NEW_2
	
Label_2066:
	var_27_object = Obj(); // 0x812 PushV
	var_27_object = var_17_bool; // 0x813 Mov
	func_4983(); // 0x814 NEW_2
	
Label_2070:
	return 2; // 0x816 Return
}


task_3_event_42(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_string, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_int = 0; var_20_int = 0; // 0x817 PushV
	var_21_bool = 0; var_22_object = Obj(); var_23_string = ""; // 0x818 PushV
	var_22_object = var_17_object; // 0x819 Mov
	var_23_string = var_18_bool; // 0x81a Mov
	func_4677(var_21_bool, var_22_object, var_23_string); // 0x81b NEW_2
	if(var_21_bool == 0) goto Label_2087; // 0x81d JumpB
	func_2166(var_20_int); // 0x81f NEW_2
	var_37_object = Obj(); var_38_string = ""; // 0x821 PushV
	var_37_object = var_17_object; // 0x822 Mov
	var_38_string = var_18_bool; // 0x823 Mov
	func_4709(var_37_object, var_38_string); // 0x824 NEW_2
	goto Label_2107; // 0x826 Jump
	
Label_2107:
	return 2; // 0x83b Return
	
Label_2087:
	var_48_int = 0; var_49_string = ""; var_50_object = Obj(); // 0x827 PushV
	var_49_string = var_18_bool; // 0x828 Mov
	var_50_object = var_17_object; // 0x829 Mov
	func_4985(var_48_int, var_49_string, var_50_object); // 0x82a NEW_2
	var_20_int = var_48_int; // 0x82b Mov
	var_92_int = 0; // 0x82d PushI
	var_93_bool = var_20_int > var_92_int; // 0x82e GT
	if(var_93_bool == 0) goto Label_2107; // 0x82f JumpB
	var_94_int = 1; // 0x830 PushI
	var_95_bool = var_20_int > var_94_int; // 0x831 GT
	if(var_95_bool == 0) goto Label_2102; // 0x832 JumpB
	func_2166(var_20_int); // 0x834 NEW_2
	
Label_2102:
	var_96_string = ""; var_97_object = Obj(); // 0x836 PushV
	var_96_string = var_18_bool; // 0x837 Mov
	var_97_object = var_17_object; // 0x838 Mov
	func_4997(var_96_string, var_97_object); // 0x839 NEW_2
}


task_3_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_string, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	var_18_bool = 0; var_19_string = ""; // 0x83d PushV
	var_19_string = var_17_bool; // 0x83e Mov
	func_4776(var_18_bool, var_19_string); // 0x83f NEW_2
	if(var_18_bool == 0) goto Label_2121; // 0x841 JumpB
	func_2166(var_17_bool); // 0x843 NEW_2
	var_28_string = ""; // 0x845 PushV
	var_28_string = var_17_bool; // 0x846 Mov
	func_4792(var_28_string); // 0x847 NEW_2
	
Label_2121:
	return 0; // 0x849 Return
}


task_3_event_1(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	var_18_bool = 0; var_19_object = Obj(); // 0x84b PushV
	var_19_object = var_17_bool; // 0x84c Mov
	func_4734(var_18_bool, var_19_object); // 0x84d NEW_2
	if(var_18_bool == 0) goto Label_2136; // 0x84f JumpB
	func_2166(var_17_bool); // 0x851 NEW_2
	var_31_object = Obj(); // 0x853 PushV
	var_31_object = var_17_bool; // 0x854 Mov
	func_4757(var_31_object); // 0x855 NEW_2
	goto Label_2140; // 0x857 Jump
	
Label_2140:
	return 0; // 0x85c Return
	
Label_2136:
	var_33_object = Obj(); // 0x858 PushV
	var_33_object = var_17_bool; // 0x859 Mov
	func_2191(var_17_bool, var_33_object); // 0x85a NEW_2
}


task_3_event_3(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	var_18_object = Obj(); // 0x85e PushV
	var_18_object = var_17_bool; // 0x85f Mov
	func_2191(var_17_bool, var_18_object); // 0x860 NEW_2
	return 0; // 0x862 Return
}


task_3_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_int, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	var_18_int = 110; // 0x864 PushI
	var_19_bool = var_17_bool != var_18_int; // 0x865 Neq
	if(var_19_bool == 0) goto Label_2152; // 0x866 JumpB
	return 0; // 0x867 Return
	
Label_2152:
	var_2_object = 0; // 0x868 TMovB
	var_20_int = 110; // 0x869 PushI
	KillTimer(var_20_int); // 0x86a Func
	ResetAAS(); // 0x86c Func
	return 0; // 0x86e Return
}


task_3_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool)
{
	func_2166(var_16_bool); // 0x870 NEW_2
	func_5040(); // 0x873 NEW_2
	return 0; // 0x875 Return
}


task_3_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	func_2166(var_17_bool); // 0x888 NEW_2
	var_19_object = Obj(); // 0x88a PushV
	var_19_object = var_17_bool; // 0x88b Mov
	func_4653(); // 0x88c NEW_2
	return 0; // 0x88e Return
}


task_3_event_10(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	RequestClearPath(var_17_bool); // 0x8f8 Func
	return 0; // 0x8fa Return
}


task_3_event_28(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool)
{
	Stop(); // 0x8fb Func
	return 0; // 0x8fd Return
}


task_4_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	var_18_int = 0; var_19_int = 0; // 0x914 PushV
	var_20_int = 0; var_21_object = Obj(); // 0x915 PushV
	var_21_object = var_17_bool; // 0x916 Mov
	func_5031(var_21_object); // 0x917 NEW_2
	var_19_int = var_20_int; // 0x918 Mov
	var_22_int = 0; // 0x91a PushI
	var_23_bool = var_19_int > var_22_int; // 0x91b GT
	if(var_23_bool == 0) goto Label_2343; // 0x91c JumpB
	var_24_int = 1; // 0x91d PushI
	var_25_bool = var_19_int > var_24_int; // 0x91e GT
	if(var_25_bool == 0) goto Label_2339; // 0x91f JumpB
	func_2569(); // 0x921 NEW_2
	
Label_2339:
	var_26_object = Obj(); // 0x923 PushV
	var_26_object = var_17_bool; // 0x924 Mov
	func_5034(var_26_object); // 0x925 NEW_2
	
Label_2343:
	return 2; // 0x927 Return
}


task_4_event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	var_18_int = 0; var_19_int = 0; // 0x928 PushV
	var_20_object = Obj(); // 0x929 PushV
	var_20_object = var_17_bool; // 0x92a Mov
	func_4763(var_20_object); // 0x92b NEW_2
	var_29_int = 0; var_30_object = Obj(); // 0x92d PushV
	var_30_object = var_17_bool; // 0x92e Mov
	func_4845(var_29_int, var_30_object); // 0x92f NEW_2
	var_19_int = var_29_int; // 0x930 Mov
	var_65_int = 0; // 0x932 PushI
	var_66_bool = var_19_int > var_65_int; // 0x933 GT
	if(var_66_bool == 0) goto Label_2367; // 0x934 JumpB
	var_67_int = 1; // 0x935 PushI
	var_68_bool = var_19_int > var_67_int; // 0x936 GT
	if(var_68_bool == 0) goto Label_2363; // 0x937 JumpB
	func_2569(); // 0x939 NEW_2
	
Label_2363:
	var_69_object = Obj(); // 0x93b PushV
	var_69_object = var_17_bool; // 0x93c Mov
	func_4855(var_69_object); // 0x93d NEW_2
	
Label_2367:
	return 2; // 0x93f Return
}


task_4_event_30(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_bool, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_int = 0; var_21_int = 0; // 0x940 PushV
	var_22_bool = 0; var_23_object = Obj(); var_24_object = Obj(); var_25_bool = 0; // 0x941 PushV
	var_23_object = var_17_bool; // 0x942 Mov
	var_24_object = var_18_object; // 0x943 Mov
	var_25_bool = var_19_bool; // 0x944 Mov
	func_5288(var_22_bool, var_23_object, var_24_object, var_25_bool); // 0x945 NEW_2
	if(var_22_bool == 0) goto Label_2395; // 0x947 JumpB
	var_84_int = 0; var_85_object = Obj(); var_86_bool = 0; // 0x948 PushV
	var_85_object = var_17_bool; // 0x949 Mov
	var_86_bool = var_19_bool; // 0x94a Mov
	func_4938(var_85_object, var_86_bool); // 0x94b NEW_2
	var_21_int = var_84_int; // 0x94c Mov
	var_117_int = 0; // 0x94e PushI
	var_118_bool = var_21_int > var_117_int; // 0x94f GT
	if(var_118_bool == 0) goto Label_2395; // 0x950 JumpB
	var_119_int = 1; // 0x951 PushI
	var_120_bool = var_21_int > var_119_int; // 0x952 GT
	if(var_120_bool == 0) goto Label_2391; // 0x953 JumpB
	func_2569(); // 0x955 NEW_2
	
Label_2391:
	var_121_object = Obj(); // 0x957 PushV
	var_121_object = var_17_bool; // 0x958 Mov
	func_4945(var_121_object); // 0x959 NEW_2
	
Label_2395:
	return 2; // 0x95b Return
}


task_4_event_40(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	var_18_int = 0; var_19_int = 0; // 0x95c PushV
	var_20_int = 0; var_21_object = Obj(); // 0x95d PushV
	var_21_object = var_17_bool; // 0x95e Mov
	func_4980(var_21_object); // 0x95f NEW_2
	var_19_int = var_20_int; // 0x960 Mov
	var_22_int = 0; // 0x962 PushI
	var_23_bool = var_19_int > var_22_int; // 0x963 GT
	if(var_23_bool == 0) goto Label_2415; // 0x964 JumpB
	var_24_int = 1; // 0x965 PushI
	var_25_bool = var_19_int > var_24_int; // 0x966 GT
	if(var_25_bool == 0) goto Label_2411; // 0x967 JumpB
	func_2569(); // 0x969 NEW_2
	
Label_2411:
	var_26_object = Obj(); // 0x96b PushV
	var_26_object = var_17_bool; // 0x96c Mov
	func_4983(); // 0x96d NEW_2
	
Label_2415:
	return 2; // 0x96f Return
}


task_4_event_42(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_string, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_int = 0; var_20_int = 0; // 0x970 PushV
	var_21_bool = 0; var_22_object = Obj(); var_23_string = ""; // 0x971 PushV
	var_22_object = var_17_object; // 0x972 Mov
	var_23_string = var_18_bool; // 0x973 Mov
	func_4677(var_21_bool, var_22_object, var_23_string); // 0x974 NEW_2
	if(var_21_bool == 0) goto Label_2432; // 0x976 JumpB
	func_2569(); // 0x978 NEW_2
	var_36_object = Obj(); var_37_string = ""; // 0x97a PushV
	var_36_object = var_17_object; // 0x97b Mov
	var_37_string = var_18_bool; // 0x97c Mov
	func_4709(var_36_object, var_37_string); // 0x97d NEW_2
	goto Label_2452; // 0x97f Jump
	
Label_2452:
	return 2; // 0x994 Return
	
Label_2432:
	var_47_int = 0; var_48_string = ""; var_49_object = Obj(); // 0x980 PushV
	var_48_string = var_18_bool; // 0x981 Mov
	var_49_object = var_17_object; // 0x982 Mov
	func_4985(var_47_int, var_48_string, var_49_object); // 0x983 NEW_2
	var_20_int = var_47_int; // 0x984 Mov
	var_91_int = 0; // 0x986 PushI
	var_92_bool = var_20_int > var_91_int; // 0x987 GT
	if(var_92_bool == 0) goto Label_2452; // 0x988 JumpB
	var_93_int = 1; // 0x989 PushI
	var_94_bool = var_20_int > var_93_int; // 0x98a GT
	if(var_94_bool == 0) goto Label_2447; // 0x98b JumpB
	func_2569(); // 0x98d NEW_2
	
Label_2447:
	var_95_string = ""; var_96_object = Obj(); // 0x98f PushV
	var_95_string = var_18_bool; // 0x990 Mov
	var_96_object = var_17_object; // 0x991 Mov
	func_4997(var_95_string, var_96_object); // 0x992 NEW_2
}


task_4_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_string, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	var_18_bool = 0; var_19_string = ""; // 0x996 PushV
	var_19_string = var_17_bool; // 0x997 Mov
	func_4776(var_18_bool, var_19_string); // 0x998 NEW_2
	if(var_18_bool == 0) goto Label_2466; // 0x99a JumpB
	func_2569(); // 0x99c NEW_2
	var_27_string = ""; // 0x99e PushV
	var_27_string = var_17_bool; // 0x99f Mov
	func_4792(var_27_string); // 0x9a0 NEW_2
	
Label_2466:
	return 0; // 0x9a2 Return
}


task_4_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool)
{
	func_2569(); // 0x9a4 NEW_2
	func_5040(); // 0x9a7 NEW_2
	return 0; // 0x9a9 Return
}


task_4_event_1(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	var_18_bool = 0; var_19_object = Obj(); // 0x9ab PushV
	var_19_object = var_17_bool; // 0x9ac Mov
	func_4734(var_18_bool, var_19_object); // 0x9ad NEW_2
	if(var_18_bool == 0) goto Label_2487; // 0x9af JumpB
	func_2569(); // 0x9b1 NEW_2
	var_30_object = Obj(); // 0x9b3 PushV
	var_30_object = var_17_bool; // 0x9b4 Mov
	func_4757(var_30_object); // 0x9b5 NEW_2
	
Label_2487:
	return 0; // 0x9b7 Return
}


task_6_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool)
{
	func_3320(var_16_bool); // 0xcb3 NEW_2
	func_5040(); // 0xcb6 NEW_2
	return 0; // 0xcb8 Return
}


task_6_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool, var_17_int)
{
	var_18_int = 1; // 0xceb PushI
	var_19_bool = var_17_int == var_18_int; // 0xcec Eq
	if(var_19_bool == 0) goto Label_3315; // 0xced JumpB
	var_20_object = Obj(); // 0xcee PushV
	var_20_object = var_1_object; // 0xcef MovT
	func_4078(var_20_object); // 0xcf0 NEW_2
	goto Label_3319; // 0xcf2 Jump
	
Label_3319:
	return 0; // 0xcf7 Return
	
Label_3315:
	var_25_int = 0; // 0xcf3 PushV
	var_25_int = var_17_int; // 0xcf4 Mov
	func_3464(var_16_bool, var_17_int, var_25_int); // 0xcf5 NEW_2
}


task_6_event_1(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool, var_17_object)
{
	var_18_bool = 0; // 0xd06 PushV
	var_18_bool = 0; // 0xd07 MovB
	var_19_bool = var_1_object == var_17_object; // 0xd08 Eq
	if(var_19_bool == 0) goto Label_3341; // 0xd09 JumpB
	var_20_bool = var_2_object == 0; // 0xd0a Not
	if(var_20_bool == 0) goto Label_3341; // 0xd0b JumpB
	var_18_bool = 1; // 0xd0c MovB
	
Label_3341:
	if(var_18_bool == 0) goto Label_3347; // 0xd0d JumpB
	var_2_object = 1; // 0xd0e TMovB
	var_21_object = Obj(); // 0xd0f PushV
	var_21_object = var_17_object; // 0xd10 Mov
	func_3955(var_21_object); // 0xd11 NEW_2
	
Label_3347:
	return 0; // 0xd13 Return
}


task_6_event_2(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool, var_17_object)
{
	var_18_bool = 0; // 0xd15 PushV
	var_18_bool = 0; // 0xd16 MovB
	var_19_bool = var_1_object == var_17_object; // 0xd17 Eq
	if(var_19_bool == 0) goto Label_3356; // 0xd18 JumpB
	var_20_object = var_2_object; // 0xd19 PushT
	if(var_20_object == 0) goto Label_3356; // 0xd1a JumpB
	var_18_bool = 1; // 0xd1b MovB
	
Label_3356:
	if(var_18_bool == 0) goto Label_3361; // 0xd1c JumpB
	var_2_object = 0; // 0xd1d TMovB
	var_21_string = "head"; // 0xd1e PushS
	UnlookAsync(var_21_string); // 0xd1f Func
	
Label_3361:
	return 0; // 0xd21 Return
}


task_6_event_10(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool, var_17_object)
{
	RequestClearPath(var_17_object); // 0xd9b Func
	return 0; // 0xd9d Return
}


task_6_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool, var_17_object)
{
	func_3320(var_17_object); // 0xda7 NEW_2
	var_22_object = Obj(); // 0xda9 PushV
	var_22_object = var_17_object; // 0xdaa Mov
	func_4653(); // 0xdab NEW_2
	return 0; // 0xdad Return
}


event_16(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool, var_17_object, var_18_string)
{
	var_19_float = 0; var_20_float = 0; // 0x1220 PushV
	var_21_string = "health"; // 0x1221 PushS
	var_22_bool = var_18_string == var_21_string; // 0x1222 Eq
	if(var_22_bool == 0) goto Label_4652; // 0x1223 JumpB
	var_23_string = "health"; // 0x1224 PushS
	GetProperty(var_23_string, var_20_float); // 0x1225 Func
	var_24_int = 0; // 0x1227 PushI
	var_25_bool = var_20_float <= var_24_int; // 0x1228 LE
	if(var_25_bool == 0) goto Label_4652; // 0x1229 JumpB
	SignalDeath(var_17_object); // 0x122a Func
	
Label_4652:
	return 2; // 0x122c Return
}


event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool, var_17_object)
{
	var_18_object = Obj(); // 0x122e PushV
	var_18_object = var_17_object; // 0x122f Mov
	func_4632(var_18_object); // 0x1230 NEW_2
	return 0; // 0x1232 Return
}


event_22(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool, var_17_object, var_18_int, var_19_float, var_20_float)
{
	var_21_object = Obj(); var_22_int = 0; var_23_float = 0; // 0x1234 PushV
	var_21_object = var_17_object; // 0x1235 Mov
	var_22_int = var_18_int; // 0x1236 Mov
	var_23_float = var_19_float; // 0x1237 Mov
	func_3741(var_21_object, var_22_int, var_23_float); // 0x1238 NEW_2
	return 0; // 0x123a Return
}


event_43(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool, var_17_object, var_18_int, var_19_float, var_20_float, var_21_cvector, var_22_cvector)
{
	var_23_object = Obj(); var_24_int = 0; var_25_float = 0; var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); // 0x123c PushV
	var_23_object = var_17_object; // 0x123d Mov
	var_24_int = var_18_int; // 0x123e Mov
	var_25_float = var_19_float; // 0x123f Mov
	var_26_cvector = var_21_cvector; // 0x1240 Mov
	var_27_cvector = var_22_cvector; // 0x1241 Mov
	func_3809(var_25_float, var_26_cvector, var_27_cvector); // 0x1242 NEW_2
	return 0; // 0x1244 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool)
{
	var_17_bool = 1; // 0x7a3 PushB
	SensePlayerOnly(var_17_bool); // 0x7a4 Func
	func_5241(); // 0x7a7 NEW_2
	func_1970(); // 0x7aa NEW_2
	
Label_1964:
	var_2_object = 0; // 0x7ac TMovB
	func_2231(var_15_object, var_16_bool); // 0x7ae NEW_2
	goto Label_1964; // 0x7b0 Jump
}


func_0(var_0_object, var_52_int, var_53_object)
{
	var_55_object = Obj(); var_56_bool = 0; var_57_int = 0; var_58_bool = 0; var_59_object = Obj(); var_60_bool = 0; var_61_int = 0; var_62_bool = 0; // 0x0 PushV
	var_0_object = var_53_object; // 0x1 TMov
	var_63_bool = 0; var_64_object = Obj(); var_65_float = 0; // 0x2 PushV
	var_64_object = var_53_object; // 0x3 Mov
	var_65_float = 70.0; // 0x4 MovF
	func_3839(var_64_object, var_65_float); // 0x5 NEW_2
	var_109_bool = var_63_bool == 0; // 0x7 Not
	if(var_109_bool == 0) goto Label_11; // 0x8 JumpB
	var_52_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_59_object); // 0xb Func
	var_110_int = 0; // 0xd PushV
	func_5233(var_110_int); // 0xe NEW_2
	SetNPCName(var_110_int); // 0x10 ObjFunc
	var_111_int = 0; // 0x12 PushV
	func_5231(var_111_int); // 0x13 NEW_2
	SetNPCDescription(var_111_int); // 0x15 ObjFunc
	var_112_string = ""; // 0x17 PushV
	func_5235(var_112_string); // 0x18 NEW_2
	SetPhoto(var_112_string); // 0x1a ObjFunc
	var_113_string = ""; // 0x1c PushV
	func_5237(var_113_string); // 0x1d NEW_2
	SetPhoto2(var_113_string); // 0x1f ObjFunc
	var_114_int = 0; // 0x21 PushV
	func_4275(var_114_int); // 0x22 NEW_2
	SetPlayerName(var_114_int); // 0x24 ObjFunc
	var_61_int = -1; // 0x26 MovI
	IsOverrideActive(var_60_bool); // 0x27 Func
	var_122_bool = var_60_bool; // 0x29 Push
	if(var_122_bool == 0) goto Label_45; // 0x2a JumpB
	var_52_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_59_object); // 0x2d Func
	var_123_object = Obj(); var_124_object = Obj(); // 0x2f PushV
	var_123_object = var_53_object; // 0x30 Mov
	var_124_object = var_59_object; // 0x31 Mov
	TaskCall(1); // 0x32 TaskCall
	func_74(var_125_object, var_126_object, var_127_string, var_128_bool, var_123_object, var_124_object); // 0x33 NEW_2
	TaskReturn(); // 0x34 TaskReturn
	IsDialogEnd(var_62_bool); // 0x36 ObjFunc
	
Label_56:
	var_301_bool = var_62_bool == 0; // 0x38 Not
	if(var_301_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_62_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_302_object = Obj(); // 0x3f PushV
	var_302_object = var_53_object; // 0x40 Mov
	func_3907(); // 0x41 NEW_2
	StopDialog(var_59_object); // 0x43 Func
	GetReturnValue(var_61_int); // 0x45 ObjFunc
	var_52_int = var_61_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_4098()
{
	var_25_int = 100; // 0x1003 PushI
	SetReturnValue(var_25_int); // 0x1004 ObjFunc
	return 0; // 0x1006 Return
}


func_2567(var_91_bool)
{
	var_91_bool = 1; // 0xa07 MovB
	return 0; // 0xa08 Return
}


func_4103(var_268_bool)
{
	var_270_int = 0; var_271_string = ""; // 0x1008 PushV
	var_271_string = "branch"; // 0x1009 MovS
	func_4054(var_270_int, var_271_string); // 0x100a NEW_2
	var_272_int = 0; // 0x100c PushI
	var_273_bool = var_270_int == var_272_int; // 0x100d Eq
	if(var_273_bool == 0) goto Label_4113; // 0x100e JumpB
	var_268_bool = 1; // 0x100f MovB
	return 0; // 0x1010 Return
	
Label_4113:
	var_268_bool = 0; // 0x1011 MovB
	return 0; // 0x1012 Return
}


func_2569()
{
	StopAnimation(); // 0xa09 Func
	StopGroup0(); // 0xa0b Func
	return 0; // 0xa0d Return
}


func_2574(var_101_object)
{
	var_108_object = Obj(); var_109_bool = 0; var_110_float = 0; // 0xa0f PushV
	var_108_object = var_101_object; // 0xa10 Mov
	var_109_bool = 1; // 0xa11 MovB
	var_110_float = 180.0; // 0xa12 MovF
	func_2588(var_104_int, var_105_bool, var_106_float, var_107_int, var_101_object, var_108_object, var_109_bool, var_110_float); // 0xa13 NEW_2
	return 0; // 0xa15 Return
}


func_4115(var_277_bool)
{
	var_279_int = 0; var_280_string = ""; // 0x1014 PushV
	var_280_string = "branch"; // 0x1015 MovS
	func_4054(var_279_int, var_280_string); // 0x1016 NEW_2
	var_281_int = 1; // 0x1018 PushI
	var_282_bool = var_279_int == var_281_int; // 0x1019 Eq
	if(var_282_bool == 0) goto Label_4125; // 0x101a JumpB
	var_277_bool = 1; // 0x101b MovB
	return 0; // 0x101c Return
	
Label_4125:
	var_277_bool = 0; // 0x101d MovB
	return 0; // 0x101e Return
}


func_4627(var_137_int, var_138_string)
{
	var_139_int = 0; var_140_int = 0; // 0x1213 PushV
	GetInvItemByName(var_140_int, var_138_string); // 0x1214 Func
	var_137_int = var_140_int; // 0x1216 Mov
	return 2; // 0x1217 Return
}


func_2582(var_445_float)
{
	var_445_float = 0.05; // 0xa17 MovF
	return 0; // 0xa18 Return
}


func_4632(var_18_object)
{
	var_19_object = Obj(); // 0x1219 PushV
	var_19_object = var_18_object; // 0x121a Mov
	TaskCall(2); // 0x121b TaskCall
	func_1799(var_19_object); // 0x121c NEW_2
	TaskReturn(); // 0x121d TaskReturn
	return 0; // 0x121f Return
}


func_2585(var_452_int)
{
	var_452_int = 0; // 0xa1a MovI
	return 0; // 0xa1b Return
}


func_3098(var_0_object, var_351_bool)
{
	var_352_cvector = CVector(0,0,0); var_353_cvector = CVector(0,0,0); var_354_cvector = CVector(0,0,0); var_355_float = 0; var_356_float = 0; var_357_cvector = CVector(0,0,0); var_358_cvector = CVector(0,0,0); var_359_cvector = CVector(0,0,0); var_360_float = 0; var_361_float = 0; // 0xc1a PushV
	var_362_bool = 0; var_363_object = Obj(); // 0xc1b PushV
	var_363_object = var_0_object; // 0xc1c MovT
	func_3673(var_362_bool, var_363_object); // 0xc1d NEW_2
	var_364_bool = var_362_bool == 0; // 0xc1f Not
	if(var_364_bool == 0) goto Label_3107; // 0xc20 JumpB
	var_351_bool = 0; // 0xc21 MovB
	return 10; // 0xc22 Return
	
Label_3107:
	var_365_bool = 0; // 0xc23 PushV
	func_3187(var_361_float, var_365_bool); // 0xc24 NEW_2
	if(var_365_bool == 0) goto Label_3124; // 0xc26 JumpB
	GetPFPosition(var_357_cvector); // 0xc27 TObjFunc
	GetPFPosition(var_358_cvector); // 0xc29 Func
	var_359_cvector = var_357_cvector - var_358_cvector; // 0xc2b Sub2
	var_360_float = var_359_cvector | var_359_cvector; // 0xc2c Or2
	GetAttackDistance(var_361_float); // 0xc2d TObjFunc
	var_366_int = 50; // 0xc2f PushI
	var_361_float = var_361_float + var_366_int; // 0xc30 Add2
	var_367_float = var_361_float * var_361_float; // 0xc31 Mult
	var_351_bool = var_360_float <= var_367_float; // 0xc32 LE2
	return 10; // 0xc33 Return
	
Label_3124:
	var_351_bool = 0; // 0xc34 MovB
	return 10; // 0xc35 Return
}


func_2588(var_0_object, var_3_string, var_5_bool, var_108_object, var_109_bool, var_110_float, var_185_bool, var_277_bool)
{
	var_111_float = 0; var_112_cvector = CVector(0,0,0); var_113_cvector = CVector(0,0,0); var_114_bool = 0; var_115_bool = 0; var_116_float = 0; var_117_cvector = CVector(0,0,0); var_118_float = 0; var_119_cvector = CVector(0,0,0); var_120_bool = 0; var_121_float = 0; var_122_float = 0; var_123_cvector = CVector(0,0,0); var_124_cvector = CVector(0,0,0); var_125_bool = 0; var_126_bool = 0; var_127_float = 0; var_128_cvector = CVector(0,0,0); var_129_float = 0; var_130_cvector = CVector(0,0,0); var_131_bool = 0; var_132_float = 0; // 0xa1c PushV
	func_2817(var_130_cvector, var_131_bool, var_132_float); // 0xa1e NEW_2
	var_5_bool = 0; // 0xa20 TMovI
	var_155_string = "@GetAttackDistance"; // 0xa21 PushS
	var_156_int = 1; // 0xa22 PushI
	var_157_bool = IsFuncExist(var_108_object, var_155_string, var_156_int); // 0xa23 FuncExist
	if(var_157_bool == 0) goto Label_2602; // 0xa24 JumpB
	GetAttackDistance(var_122_float); // 0xa25 ObjFunc
	var_158_int = 50; // 0xa27 PushI
	var_122_float = var_122_float + var_158_int; // 0xa28 Add2
	goto Label_2603; // 0xa29 Jump
	
Label_2603:
	var_159_int = 150; // 0xa2b PushI
	var_160_bool = var_122_float >= var_159_int; // 0xa2c GE
	if(var_160_bool == 0) goto Label_2607; // 0xa2d JumpB
	var_122_float = 150; // 0xa2e MovI
	
Label_2607:
	var_3_string = 0; // 0xa2f TMovB
	var_0_object = var_108_object; // 0xa30 TMov
	IsPlayerActor(var_0_object, var_125_bool); // 0xa31 Func
	var_161_bool = var_125_bool; // 0xa33 Push
	if(var_161_bool == 0) goto Label_2621; // 0xa34 JumpB
	var_162_string = "attack"; // 0xa35 PushS
	PlayGlobalMusic(var_162_string); // 0xa36 Func
	var_163_object = Obj(); // 0xa38 PushV
	func_4014(var_163_object); // 0xa39 NEW_2
	SendPlayerEnemy(var_108_object, var_163_object); // 0xa3b Func
	
Label_2621:
	var_166_bool = var_109_bool; // 0xa3d Push
	if(var_166_bool == 0) goto Label_2625; // 0xa3e JumpB
	var_126_bool = 0; // 0xa3f MovB
	goto Label_2626; // 0xa40 Jump
	
Label_2626:
	var_167_float = 400.0; // 0xa42 PushF
	var_127_float = var_167_float + var_122_float; // 0xa43 Add2
	
Label_2628:
	var_168_bool = 0; // 0xa44 PushV
	var_168_bool = 0; // 0xa45 MovB
	var_169_bool = 0; var_170_object = Obj(); // 0xa46 PushV
	var_170_object = var_0_object; // 0xa47 MovT
	func_3673(var_169_bool, var_170_object); // 0xa48 NEW_2
	if(var_169_bool == 0) goto Label_2638; // 0xa4a JumpB
	var_171_bool = var_3_string == 0; // 0xa4b Not
	if(var_171_bool == 0) goto Label_2638; // 0xa4c JumpB
	var_168_bool = 1; // 0xa4d MovB
	
Label_2638:
	if(var_168_bool == 0) goto Label_2800; // 0xa4e JumpB
	func_3230(var_132_float); // 0xa50 NEW_2
	GetPFPosition(var_123_cvector); // 0xa52 TObjFunc
	GetPFPosition(var_124_cvector); // 0xa54 Func
	var_128_cvector = var_123_cvector - var_124_cvector; // 0xa56 Sub2
	var_129_float = var_128_cvector | var_128_cvector; // 0xa57 Or2
	var_177_float = var_127_float * var_127_float; // 0xa58 Mult
	var_178_bool = var_129_float >= var_177_float; // 0xa59 GE
	if(var_178_bool == 0) goto Label_2666; // 0xa5a JumpB
	var_179_bool = 0; var_180_object = Obj(); var_181_float = 0; var_182_float = 0; var_183_bool = 0; var_184_bool = 0; // 0xa5b PushV
	var_180_object = var_0_object; // 0xa5c MovT
	var_181_float = var_122_float; // 0xa5d Mov
	var_182_float = 3000.0; // 0xa5e MovF
	var_183_bool = 1; // 0xa5f MovB
	var_184_bool = 0; // 0xa60 MovB
	TaskCall(6); // 0xa61 TaskCall
	func_3257(var_187_bool, var_179_bool, var_180_object, var_181_float, var_182_float, var_183_bool, var_184_bool); // 0xa62 NEW_2
	TaskReturn(); // 0xa63 TaskReturn
	var_262_bool = var_185_bool == 0; // 0xa65 Not
	if(var_262_bool == 0) goto Label_2664; // 0xa66 JumpB
	goto Label_2800; // 0xa67 Jump
	
Label_2800:
	WaitForAnimEnd(); // 0xaf0 Func
	var_263_string = var_3_string; // 0xaf2 PushT
	if(var_263_string == 0) goto Label_2805; // 0xaf3 JumpB
	return 22; // 0xaf4 Return
	
Label_2805:
	var_264_string = "all"; // 0xaf5 PushS
	var_265_string = "attack_off"; // 0xaf6 PushS
	PlayAnimation(var_264_string, var_265_string); // 0xaf7 Func
	WaitForAnimEnd(); // 0xaf9 Func
	var_266_bool = var_125_bool; // 0xafb Push
	if(var_266_bool == 0) goto Label_2816; // 0xafc JumpB
	var_267_float = 2.0; // 0xafd PushF
	Sleep(var_267_float); // 0xafe Func
	
Label_2816:
	return 22; // 0xb00 Return
	
Label_2664:
	var_126_bool = 0; // 0xa68 MovB
	goto Label_2799; // 0xa69 Jump
	
Label_2799:
	goto Label_2628; // 0xaef Jump
	
Label_2666:
	var_268_float = var_110_float * var_110_float; // 0xa6a Mult
	var_269_bool = var_129_float >= var_268_float; // 0xa6b GE
	if(var_269_bool == 0) goto Label_2791; // 0xa6c JumpB
	GetPFPosition(var_130_cvector); // 0xa6d TObjFunc
	CanReachByPF(var_131_bool, var_130_cvector); // 0xa6f Func
	var_270_bool = var_131_bool == 0; // 0xa71 Not
	if(var_270_bool == 0) goto Label_2690; // 0xa72 JumpB
	var_271_bool = 0; var_272_object = Obj(); var_273_float = 0; var_274_float = 0; var_275_bool = 0; var_276_bool = 0; // 0xa73 PushV
	var_272_object = var_0_object; // 0xa74 MovT
	var_273_float = var_122_float; // 0xa75 Mov
	var_274_float = 3000.0; // 0xa76 MovF
	var_275_bool = 1; // 0xa77 MovB
	var_276_bool = 0; // 0xa78 MovB
	TaskCall(6); // 0xa79 TaskCall
	func_3257(var_279_bool, var_271_bool, var_272_object, var_273_float, var_274_float, var_275_bool, var_276_bool); // 0xa7a NEW_2
	TaskReturn(); // 0xa7b TaskReturn
	var_280_bool = var_277_bool == 0; // 0xa7d Not
	if(var_280_bool == 0) goto Label_2688; // 0xa7e JumpB
	goto Label_2800; // 0xa7f Jump
	
Label_2688:
	var_126_bool = 0; // 0xa80 MovB
	goto Label_2628; // 0xa81 Jump
	
Label_2690:
	var_281_bool = var_126_bool == 0; // 0xa82 Not
	if(var_281_bool == 0) goto Label_2715; // 0xa83 JumpB
	var_282_object = Obj(); // 0xa84 PushV
	var_282_object = var_0_object; // 0xa85 MovT
	func_3823(); // 0xa86 NEW_2
	var_291_string = "all"; // 0xa88 PushS
	var_292_string = "attack_on"; // 0xa89 PushS
	PlayAnimation(var_291_string, var_292_string); // 0xa8a Func
	WaitForAnimEnd(); // 0xa8c Func
	func_3230(var_132_float); // 0xa8f NEW_2
	StopAsync(); // 0xa91 Func
	var_126_bool = 1; // 0xa93 MovB
	var_293_bool = 0; var_294_object = Obj(); // 0xa94 PushV
	var_294_object = var_0_object; // 0xa95 MovT
	func_3673(var_293_bool, var_294_object); // 0xa96 NEW_2
	var_295_bool = var_293_bool == 0; // 0xa98 Not
	if(var_295_bool == 0) goto Label_2715; // 0xa99 JumpB
	goto Label_2800; // 0xa9a Jump
	
Label_2715:
	rand(var_132_float); // 0xa9b Func
	var_296_bool = 0; // 0xa9d PushV
	var_296_bool = 1; // 0xa9e MovB
	var_297_float = 0.25; // 0xa9f PushF
	var_298_bool = var_132_float < var_297_float; // 0xaa0 LT
	if(var_298_bool == 0) goto Label_2727; // 0xaa1 JumpB
	var_299_bool = 0; // 0xaa2 PushV
	func_3187(var_296_bool, var_299_bool); // 0xaa3 NEW_2
	if(var_299_bool == 0) goto Label_2727; // 0xaa5 JumpB
	var_296_bool = 0; // 0xaa6 MovB
	
Label_2727:
	if(var_296_bool == 0) goto Label_2744; // 0xaa7 JumpB
	Face(var_0_object); // 0xaa8 Func
	func_3237(); // 0xaab NEW_2
	var_334_string = "all"; // 0xaad PushS
	var_335_string = "attack_stay"; // 0xaae PushS
	PlayAnimation(var_334_string, var_335_string); // 0xaaf Func
	var_336_bool = 0; var_337_float = 0; // 0xab1 PushV
	var_337_float = var_110_float; // 0xab2 Mov
	func_3055(var_132_float, var_336_bool, var_337_float); // 0xab3 NEW_2
	StopAsync(); // 0xab5 Func
	goto Label_2790; // 0xab7 Jump
	
Label_2790:
	goto Label_2799; // 0xae6 Jump
	
Label_2744:
	Face(var_0_object); // 0xab8 Func
	var_551_string = "all"; // 0xaba PushS
	var_552_string = "fjump"; // 0xabb PushS
	PlayAnimation(var_551_string, var_552_string); // 0xabc Func
	WaitForAnimEnd(); // 0xabe Func
	func_3230(var_132_float); // 0xac1 NEW_2
	var_553_cvector = CVector(0.0, 0.0, 0.0); // 0xac3 PushVec
	SetSpeed(var_553_cvector); // 0xac4 Func
	Stop(); // 0xac6 Func
	StopAsync(); // 0xac8 Func
	var_554_bool = 0; // 0xaca PushV
	func_3187(var_132_float, var_554_bool); // 0xacb NEW_2
	var_555_bool = var_554_bool == 0; // 0xacd Not
	if(var_555_bool == 0) goto Label_2790; // 0xace JumpB
	var_556_bool = 0; var_557_object = Obj(); // 0xacf PushV
	var_557_object = var_0_object; // 0xad0 MovT
	func_3673(var_556_bool, var_557_object); // 0xad1 NEW_2
	var_558_bool = var_556_bool == 0; // 0xad3 Not
	if(var_558_bool == 0) goto Label_2774; // 0xad4 JumpB
	goto Label_2800; // 0xad5 Jump
	
Label_2774:
	GetPFPosition(var_123_cvector); // 0xad6 TObjFunc
	GetPFPosition(var_124_cvector); // 0xad8 Func
	var_128_cvector = var_123_cvector - var_124_cvector; // 0xada Sub2
	var_129_float = var_128_cvector | var_128_cvector; // 0xadb Or2
	var_559_float = var_110_float * var_110_float; // 0xadc Mult
	var_560_bool = var_129_float < var_559_float; // 0xadd LT
	if(var_560_bool == 0) goto Label_2790; // 0xade JumpB
	var_561_bool = 0; var_562_float = 0; // 0xadf PushV
	var_562_float = var_110_float; // 0xae0 Mov
	func_2891(var_132_float, var_561_bool, var_562_float); // 0xae1 NEW_2
	var_563_bool = var_561_bool == 0; // 0xae3 Not
	if(var_563_bool == 0) goto Label_2790; // 0xae4 JumpB
	goto Label_2800; // 0xae5 Jump
	
Label_2791:
	var_564_bool = 0; var_565_float = 0; // 0xae7 PushV
	var_565_float = var_110_float; // 0xae8 Mov
	func_2891(var_132_float, var_564_bool, var_565_float); // 0xae9 NEW_2
	var_566_bool = var_564_bool == 0; // 0xaeb Not
	if(var_566_bool == 0) goto Label_2798; // 0xaec JumpB
	goto Label_2800; // 0xaed Jump
	
Label_2798:
	var_126_bool = 1; // 0xaee MovB
	
Label_2625:
	var_126_bool = 1; // 0xa41 MovB
	
Label_2602:
	var_122_float = var_110_float; // 0xa2a Mov
}


func_4127(var_130_bool)
{
	var_132_int = 0; var_133_string = ""; // 0x1020 PushV
	var_133_string = "branch"; // 0x1021 MovS
	func_4054(var_132_int, var_133_string); // 0x1022 NEW_2
	var_136_int = 2; // 0x1024 PushI
	var_137_bool = var_132_int == var_136_int; // 0x1025 Eq
	if(var_137_bool == 0) goto Label_4137; // 0x1026 JumpB
	var_130_bool = 1; // 0x1027 MovB
	return 0; // 0x1028 Return
	
Label_4137:
	var_130_bool = 0; // 0x1029 MovB
	return 0; // 0x102a Return
}


func_4139(var_156_bool, var_157_object)
{
	var_158_bool = 0; var_159_object = Obj(); // 0x102c PushV
	var_159_object = var_157_object; // 0x102d Mov
	func_4219(var_159_object); // 0x102e NEW_2
	if(var_158_bool == 0) goto Label_4147; // 0x1030 JumpB
	var_156_bool = 1; // 0x1031 MovB
	return 0; // 0x1032 Return
	
Label_4147:
	var_156_bool = 0; // 0x1033 MovB
	return 0; // 0x1034 Return
}


func_3632(var_45_bool)
{
	var_47_bool = 0; var_48_bool = 0; // 0xe30 PushV
	IsDead(var_48_bool); // 0xe31 ObjFunc
	var_45_bool = var_48_bool; // 0xe33 Mov
	return 2; // 0xe34 Return
}


func_4149(var_289_bool, var_290_object)
{
	var_291_bool = 0; var_292_object = Obj(); // 0x1036 PushV
	var_292_object = var_290_object; // 0x1037 Mov
	func_4226(var_292_object); // 0x1038 NEW_2
	if(var_291_bool == 0) goto Label_4157; // 0x103a JumpB
	var_289_bool = 1; // 0x103b MovB
	return 0; // 0x103c Return
	
Label_4157:
	var_289_bool = 0; // 0x103d MovB
	return 0; // 0x103e Return
}


func_3126(var_349_bool)
{
	var_350_bool = 0; // 0xc36 PushV
	var_350_bool = 0; // 0xc37 MovB
	var_351_bool = 0; // 0xc38 PushV
	func_3098(var_350_bool, var_351_bool); // 0xc39 NEW_2
	if(var_351_bool == 0) goto Label_3137; // 0xc3b JumpB
	var_368_bool = 0; // 0xc3c PushV
	func_3142(var_349_bool, var_350_bool, var_368_bool); // 0xc3d NEW_2
	if(var_368_bool == 0) goto Label_3137; // 0xc3f JumpB
	var_350_bool = 1; // 0xc40 MovB
	
Label_3137:
	if(var_350_bool == 0) goto Label_3140; // 0xc41 JumpB
	var_349_bool = 1; // 0xc42 MovB
	return 0; // 0xc43 Return
	
Label_3140:
	var_349_bool = 0; // 0xc44 MovB
	return 0; // 0xc45 Return
}


func_3637(var_34_bool, var_35_object)
{
	var_36_object = Obj(); var_37_object = Obj(); var_38_object = Obj(); var_39_object = Obj(); // 0xe35 PushV
	var_40_bool = var_35_object == 0; // 0xe36 NullEq
	if(var_40_bool == 0) goto Label_3642; // 0xe37 JumpB
	var_34_bool = 0; // 0xe38 MovB
	return 4; // 0xe39 Return
	
Label_3642:
	var_41_bool = 0; // 0xe3a PushV
	var_41_bool = 0; // 0xe3b MovB
	var_42_string = "IsDead"; // 0xe3c PushS
	var_43_int = 1; // 0xe3d PushI
	var_44_bool = IsFuncExist(var_35_object, var_42_string, var_43_int); // 0xe3e FuncExist
	if(var_44_bool == 0) goto Label_3654; // 0xe3f JumpB
	var_45_bool = 0; var_46_object = Obj(); // 0xe40 PushV
	var_46_object = var_35_object; // 0xe41 Mov
	func_3632(var_46_object); // 0xe42 NEW_2
	if(var_45_bool == 0) goto Label_3654; // 0xe44 JumpB
	var_41_bool = 1; // 0xe45 MovB
	
Label_3654:
	if(var_41_bool == 0) goto Label_3657; // 0xe46 JumpB
	var_34_bool = 0; // 0xe47 MovB
	return 4; // 0xe48 Return
	
Label_3657:
	GetScene(var_38_object); // 0xe49 Func
	var_49_bool = var_38_object == 0; // 0xe4b NullEq
	if(var_49_bool == 0) goto Label_3663; // 0xe4c JumpB
	var_34_bool = 0; // 0xe4d MovB
	return 4; // 0xe4e Return
	
Label_3663:
	GetScene(var_39_object); // 0xe4f ObjFunc
	var_50_bool = var_38_object != var_39_object; // 0xe51 Neq
	if(var_50_bool == 0) goto Label_3669; // 0xe52 JumpB
	var_34_bool = 0; // 0xe53 MovB
	return 4; // 0xe54 Return
	
Label_3669:
	var_34_bool = 1; // 0xe55 MovB
	return 4; // 0xe56 Return
}


func_4159(var_182_bool, var_183_object)
{
	var_184_bool = 0; var_185_object = Obj(); // 0x1040 PushV
	var_185_object = var_183_object; // 0x1041 Mov
	func_4233(var_185_object); // 0x1042 NEW_2
	if(var_184_bool == 0) goto Label_4167; // 0x1044 JumpB
	var_182_bool = 1; // 0x1045 MovB
	return 0; // 0x1046 Return
	
Label_4167:
	var_182_bool = 0; // 0x1047 MovB
	return 0; // 0x1048 Return
}


func_4677(var_21_bool, var_22_object, var_23_string)
{
	var_24_string = "unholster"; // 0x1246 PushS
	var_25_bool = var_23_string == var_24_string; // 0x1247 Eq
	if(var_25_bool == 0) goto Label_4688; // 0x1248 JumpB
	var_26_bool = 0; var_27_object = Obj(); // 0x1249 PushV
	var_27_object = var_22_object; // 0x124a Mov
	func_5041(var_27_object); // 0x124b NEW_2
	var_21_bool = var_26_bool; // 0x124c Mov
	return 0; // 0x124e Return
	
Label_4688:
	var_28_string = "player_shot"; // 0x1250 PushS
	var_29_bool = var_23_string == var_28_string; // 0x1251 Eq
	if(var_29_bool == 0) goto Label_4698; // 0x1252 JumpB
	var_30_bool = 0; var_31_object = Obj(); // 0x1253 PushV
	var_31_object = var_22_object; // 0x1254 Mov
	func_5046(var_31_object); // 0x1255 NEW_2
	var_21_bool = var_30_bool; // 0x1256 Mov
	return 0; // 0x1258 Return
	
Label_4698:
	var_32_string = "battle"; // 0x125a PushS
	var_33_bool = var_23_string == var_32_string; // 0x125b Eq
	if(var_33_bool == 0) goto Label_4707; // 0x125c JumpB
	var_34_bool = 0; var_35_object = Obj(); // 0x125d PushV
	var_35_object = var_22_object; // 0x125e Mov
	func_5051(var_35_object); // 0x125f NEW_2
	var_21_bool = var_34_bool; // 0x1260 Mov
	return 0; // 0x1262 Return
	
Label_4707:
	var_21_bool = 0; // 0x1263 MovB
	return 0; // 0x1264 Return
}


func_3142(var_0_object, var_4_bool, var_368_bool)
{
	var_369_object = Obj(); var_370_bool = 0; var_371_float = 0; var_372_cvector = CVector(0,0,0); var_373_cvector = CVector(0,0,0); var_374_object = Obj(); var_375_bool = 0; var_376_float = 0; var_377_cvector = CVector(0,0,0); var_378_cvector = CVector(0,0,0); // 0xc46 PushV
	GetScene(var_374_object); // 0xc47 Func
	var_375_bool = 0; // 0xc49 MovB
	
Label_3146:
	var_379_cvector = CVector(0,0,0); var_380_object = Obj(); // 0xc4a PushV
	var_380_object = var_0_object; // 0xc4b MovT
	func_3527(var_380_object); // 0xc4c NEW_2
	var_385_int = -var_379_cvector; // 0xc4e Neg
	FindDirLength(var_376_float, var_385_int, var_376_float); // 0xc4f Func
	var_386_bool = var_376_float < var_4_bool; // 0xc51 LT
	if(var_386_bool == 0) goto Label_3156; // 0xc52 JumpB
	goto Label_3184; // 0xc53 Jump
	
Label_3184:
	var_368_bool = var_375_bool; // 0xc70 Mov
	return 10; // 0xc71 Return
	
Label_3156:
	Face(var_0_object); // 0xc54 Func
	var_387_string = "all"; // 0xc56 PushS
	var_388_string = "bjump"; // 0xc57 PushS
	PlayAnimation(var_387_string, var_388_string); // 0xc58 Func
	GetPFPosition(var_377_cvector); // 0xc5a TObjFunc
	GetPFPosition(var_378_cvector); // 0xc5c Func
	WaitForAnimEnd(); // 0xc5e Func
	func_3230(var_378_cvector); // 0xc61 NEW_2
	StopAsync(); // 0xc63 Func
	var_389_cvector = CVector(0.0, 0.0, 0.0); // 0xc65 PushVec
	SetSpeed(var_389_cvector); // 0xc66 Func
	var_375_bool = 1; // 0xc68 MovB
	var_390_bool = 0; // 0xc69 PushV
	func_3098(var_378_cvector, var_390_bool); // 0xc6a NEW_2
	var_391_bool = var_390_bool == 0; // 0xc6c Not
	if(var_391_bool == 0) goto Label_3183; // 0xc6d JumpB
	goto Label_3184; // 0xc6e Jump
	
Label_3183:
	goto Label_3146; // 0xc6f Jump
}


func_4169(var_188_bool, var_189_object)
{
	var_190_bool = 0; var_191_object = Obj(); // 0x104a PushV
	var_191_object = var_189_object; // 0x104b Mov
	func_4240(var_191_object); // 0x104c NEW_2
	if(var_190_bool == 0) goto Label_4177; // 0x104e JumpB
	var_188_bool = 1; // 0x104f MovB
	return 0; // 0x1050 Return
	
Label_4177:
	var_188_bool = 0; // 0x1051 MovB
	return 0; // 0x1052 Return
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_123_object, var_124_object)
{
	var_0_object = var_124_object; // 0x4b TMov
	var_1_object = var_123_object; // 0x4c TMov
	var_3_string = 0; // 0x4d TMovB
	var_129_int = 1; // 0x4e PushI
	if(var_129_int == 0) goto Label_293; // 0x4f JumpB
	var_130_bool = 0; var_131_object = Obj(); // 0x50 PushV
	var_131_object = var_1_object; // 0x51 MovT
	func_4127(var_131_object); // 0x52 NEW_2
	if(var_130_bool == 0) goto Label_237; // 0x54 JumpB
	var_138_string = ""; // 0x55 PushV
	var_138_string = "Neutral"; // 0x56 MovS
	func_323(var_124_object, var_138_string); // 0x57 NEW_2
	var_155_int = 543041; // 0x59 PushI
	SetMessage(var_155_int); // 0x5a TObjFunc
	ClearReplies(); // 0x5c TObjFunc
	var_156_bool = 0; var_157_object = Obj(); // 0x5e PushV
	var_157_object = var_1_object; // 0x5f MovT
	func_4139(var_156_bool, var_157_object); // 0x60 NEW_2
	if(var_156_bool == 0) goto Label_104; // 0x62 JumpB
	var_167_int = 538210; // 0x63 PushI
	var_168_int = -1; // 0x64 PushI
	var_169_int = 40087; // 0x65 PushI
	AddReply(var_167_int, var_168_int, var_169_int); // 0x66 TObjFunc
	
Label_104:
	var_170_bool = 0; var_171_object = Obj(); // 0x68 PushV
	var_171_object = var_1_object; // 0x69 MovT
	func_4139(var_170_bool, var_171_object); // 0x6a NEW_2
	if(var_170_bool == 0) goto Label_114; // 0x6c JumpB
	var_172_int = 543042; // 0x6d PushI
	var_173_int = -1; // 0x6e PushI
	var_174_int = 45494; // 0x6f PushI
	AddReply(var_172_int, var_173_int, var_174_int); // 0x70 TObjFunc
	
Label_114:
	var_175_bool = 0; var_176_object = Obj(); // 0x72 PushV
	var_176_object = var_1_object; // 0x73 MovT
	func_4139(var_175_bool, var_176_object); // 0x74 NEW_2
	if(var_175_bool == 0) goto Label_124; // 0x76 JumpB
	var_177_int = 543043; // 0x77 PushI
	var_178_int = -1; // 0x78 PushI
	var_179_int = 45495; // 0x79 PushI
	AddReply(var_177_int, var_178_int, var_179_int); // 0x7a TObjFunc
	
Label_124:
	var_180_bool = 0; // 0x7c PushV
	var_180_bool = 1; // 0x7d MovB
	var_181_bool = 0; // 0x7e PushV
	var_181_bool = 1; // 0x7f MovB
	var_182_bool = 0; var_183_object = Obj(); // 0x80 PushV
	var_183_object = var_1_object; // 0x81 MovT
	func_4159(var_182_bool, var_183_object); // 0x82 NEW_2
	if(var_182_bool == 0) goto Label_139; // 0x84 JumpB
	var_188_bool = 0; var_189_object = Obj(); // 0x85 PushV
	var_189_object = var_1_object; // 0x86 MovT
	func_4169(var_188_bool, var_189_object); // 0x87 NEW_2
	if(var_188_bool == 0) goto Label_139; // 0x89 JumpB
	var_181_bool = 0; // 0x8a MovB
	
Label_139:
	if(var_181_bool == 0) goto Label_146; // 0x8b JumpB
	var_194_bool = 0; var_195_object = Obj(); // 0x8c PushV
	var_195_object = var_1_object; // 0x8d MovT
	func_4179(var_194_bool, var_195_object); // 0x8e NEW_2
	if(var_194_bool == 0) goto Label_146; // 0x90 JumpB
	var_180_bool = 0; // 0x91 MovB
	
Label_146:
	if(var_180_bool == 0) goto Label_152; // 0x92 JumpB
	var_200_int = 543055; // 0x93 PushI
	var_201_int = -1; // 0x94 PushI
	var_202_int = 45510; // 0x95 PushI
	AddReply(var_200_int, var_201_int, var_202_int); // 0x96 TObjFunc
	
Label_152:
	var_203_bool = 0; // 0x98 PushV
	var_203_bool = 1; // 0x99 MovB
	var_204_bool = 0; var_205_object = Obj(); // 0x9a PushV
	var_205_object = var_1_object; // 0x9b MovT
	func_4159(var_204_bool, var_205_object); // 0x9c NEW_2
	if(var_204_bool == 0) goto Label_165; // 0x9e JumpB
	var_206_bool = 0; var_207_object = Obj(); // 0x9f PushV
	var_207_object = var_1_object; // 0xa0 MovT
	func_4169(var_206_bool, var_207_object); // 0xa1 NEW_2
	if(var_206_bool == 0) goto Label_165; // 0xa3 JumpB
	var_203_bool = 0; // 0xa4 MovB
	
Label_165:
	if(var_203_bool == 0) goto Label_171; // 0xa5 JumpB
	var_208_int = 543056; // 0xa6 PushI
	var_209_int = -1; // 0xa7 PushI
	var_210_int = 45511; // 0xa8 PushI
	AddReply(var_208_int, var_209_int, var_210_int); // 0xa9 TObjFunc
	
Label_171:
	var_211_bool = 0; // 0xab PushV
	var_211_bool = 1; // 0xac MovB
	var_212_bool = 0; // 0xad PushV
	var_212_bool = 1; // 0xae MovB
	var_213_bool = 0; var_214_object = Obj(); // 0xaf PushV
	var_214_object = var_1_object; // 0xb0 MovT
	func_4189(var_213_bool, var_214_object); // 0xb1 NEW_2
	if(var_213_bool == 0) goto Label_186; // 0xb3 JumpB
	var_219_bool = 0; var_220_object = Obj(); // 0xb4 PushV
	var_220_object = var_1_object; // 0xb5 MovT
	func_4199(var_219_bool, var_220_object); // 0xb6 NEW_2
	if(var_219_bool == 0) goto Label_186; // 0xb8 JumpB
	var_212_bool = 0; // 0xb9 MovB
	
Label_186:
	if(var_212_bool == 0) goto Label_193; // 0xba JumpB
	var_225_bool = 0; var_226_object = Obj(); // 0xbb PushV
	var_226_object = var_1_object; // 0xbc MovT
	func_4209(var_225_bool, var_226_object); // 0xbd NEW_2
	if(var_225_bool == 0) goto Label_193; // 0xbf JumpB
	var_211_bool = 0; // 0xc0 MovB
	
Label_193:
	if(var_211_bool == 0) goto Label_199; // 0xc1 JumpB
	var_231_int = 543062; // 0xc2 PushI
	var_232_int = -1; // 0xc3 PushI
	var_233_int = 45517; // 0xc4 PushI
	AddReply(var_231_int, var_232_int, var_233_int); // 0xc5 TObjFunc
	
Label_199:
	var_234_bool = 0; // 0xc7 PushV
	var_234_bool = 1; // 0xc8 MovB
	var_235_bool = 0; // 0xc9 PushV
	var_235_bool = 1; // 0xca MovB
	var_236_bool = 0; // 0xcb PushV
	var_236_bool = 1; // 0xcc MovB
	var_237_bool = 0; var_238_object = Obj(); // 0xcd PushV
	var_238_object = var_1_object; // 0xce MovT
	func_4179(var_237_bool, var_238_object); // 0xcf NEW_2
	if(var_237_bool == 0) goto Label_216; // 0xd1 JumpB
	var_239_bool = 0; var_240_object = Obj(); // 0xd2 PushV
	var_240_object = var_1_object; // 0xd3 MovT
	func_4189(var_239_bool, var_240_object); // 0xd4 NEW_2
	if(var_239_bool == 0) goto Label_216; // 0xd6 JumpB
	var_236_bool = 0; // 0xd7 MovB
	
Label_216:
	if(var_236_bool == 0) goto Label_223; // 0xd8 JumpB
	var_241_bool = 0; var_242_object = Obj(); // 0xd9 PushV
	var_242_object = var_1_object; // 0xda MovT
	func_4199(var_241_bool, var_242_object); // 0xdb NEW_2
	if(var_241_bool == 0) goto Label_223; // 0xdd JumpB
	var_235_bool = 0; // 0xde MovB
	
Label_223:
	if(var_235_bool == 0) goto Label_230; // 0xdf JumpB
	var_243_bool = 0; var_244_object = Obj(); // 0xe0 PushV
	var_244_object = var_1_object; // 0xe1 MovT
	func_4209(var_243_bool, var_244_object); // 0xe2 NEW_2
	if(var_243_bool == 0) goto Label_230; // 0xe4 JumpB
	var_234_bool = 0; // 0xe5 MovB
	
Label_230:
	if(var_234_bool == 0) goto Label_236; // 0xe6 JumpB
	var_245_int = 543064; // 0xe7 PushI
	var_246_int = -1; // 0xe8 PushI
	var_247_int = 45519; // 0xe9 PushI
	AddReply(var_245_int, var_246_int, var_247_int); // 0xea TObjFunc
	
Label_236:
	goto Label_293; // 0xec Jump
	
Label_293:
	var_248_bool = 0; // 0x125 PushV
	func_5239(var_248_bool); // 0x126 NEW_2
	if(var_248_bool == 0) goto Label_308; // 0x128 JumpB
	
Label_297:
	lshWaitForAnimEnd(); // 0x129 Func
	var_249_string = var_3_string; // 0x12b PushT
	if(var_249_string == 0) goto Label_302; // 0x12c JumpB
	goto Label_307; // 0x12d Jump
	
Label_307:
	goto Label_322; // 0x133 Jump
	
Label_322:
	return 0; // 0x142 Return
	
Label_302:
	var_250_string = ""; // 0x12e PushV
	var_250_string = var_2_object; // 0x12f MovT
	func_3924(var_250_string); // 0x130 NEW_2
	goto Label_297; // 0x132 Jump
	
Label_308:
	var_261_string = "all"; // 0x134 PushS
	var_262_string = "idle"; // 0x135 PushS
	PlayAnimation(var_261_string, var_262_string); // 0x136 Func
	
Label_312:
	WaitForAnimEnd(); // 0x138 Func
	var_263_string = var_3_string; // 0x13a PushT
	if(var_263_string == 0) goto Label_317; // 0x13b JumpB
	goto Label_322; // 0x13c Jump
	
Label_317:
	var_264_string = "all"; // 0x13d PushS
	var_265_string = "idle"; // 0x13e PushS
	PlayAnimation(var_264_string, var_265_string); // 0x13f Func
	goto Label_312; // 0x141 Jump
	
Label_237:
	var_266_string = ""; // 0xed PushV
	var_266_string = "Neutral"; // 0xee MovS
	func_323(var_124_object, var_266_string); // 0xef NEW_2
	var_267_int = 538207; // 0xf1 PushI
	SetMessage(var_267_int); // 0xf2 TObjFunc
	ClearReplies(); // 0xf4 TObjFunc
	var_268_bool = 0; var_269_object = Obj(); // 0xf6 PushV
	var_269_object = var_1_object; // 0xf7 MovT
	func_4103(var_269_object); // 0xf8 NEW_2
	if(var_268_bool == 0) goto Label_256; // 0xfa JumpB
	var_274_int = 538208; // 0xfb PushI
	var_275_int = -1; // 0xfc PushI
	var_276_int = 40085; // 0xfd PushI
	AddReply(var_274_int, var_275_int, var_276_int); // 0xfe TObjFunc
	
Label_256:
	var_277_bool = 0; var_278_object = Obj(); // 0x100 PushV
	var_278_object = var_1_object; // 0x101 MovT
	func_4115(var_278_object); // 0x102 NEW_2
	if(var_277_bool == 0) goto Label_266; // 0x104 JumpB
	var_283_int = 538209; // 0x105 PushI
	var_284_int = -1; // 0x106 PushI
	var_285_int = 40086; // 0x107 PushI
	AddReply(var_283_int, var_284_int, var_285_int); // 0x108 TObjFunc
	
Label_266:
	var_286_bool = 0; // 0x10a PushV
	var_286_bool = 0; // 0x10b MovB
	var_287_bool = 0; var_288_object = Obj(); // 0x10c PushV
	var_288_object = var_1_object; // 0x10d MovT
	func_4103(var_288_object); // 0x10e NEW_2
	if(var_287_bool == 0) goto Label_279; // 0x110 JumpB
	var_289_bool = 0; var_290_object = Obj(); // 0x111 PushV
	var_290_object = var_1_object; // 0x112 MovT
	func_4149(var_289_bool, var_290_object); // 0x113 NEW_2
	if(var_289_bool == 0) goto Label_279; // 0x115 JumpB
	var_286_bool = 1; // 0x116 MovB
	
Label_279:
	if(var_286_bool == 0) goto Label_285; // 0x117 JumpB
	var_295_int = 538235; // 0x118 PushI
	var_296_int = 40114; // 0x119 PushI
	var_297_int = 40113; // 0x11a PushI
	AddReply(var_295_int, var_296_int, var_297_int); // 0x11b TObjFunc
	
Label_285:
	var_298_int = 538396; // 0x11d PushI
	var_299_int = -1; // 0x11e PushI
	var_300_int = 40282; // 0x11f PushI
	AddReply(var_298_int, var_299_int, var_300_int); // 0x120 TObjFunc
	goto Label_293; // 0x122 Jump
}


func_4179(var_194_bool, var_195_object)
{
	var_196_bool = 0; var_197_object = Obj(); // 0x1054 PushV
	var_197_object = var_195_object; // 0x1055 Mov
	func_4247(var_197_object); // 0x1056 NEW_2
	if(var_196_bool == 0) goto Label_4187; // 0x1058 JumpB
	var_194_bool = 1; // 0x1059 MovB
	return 0; // 0x105a Return
	
Label_4187:
	var_194_bool = 0; // 0x105b MovB
	return 0; // 0x105c Return
}


func_5208(var_377_bool)
{
	var_379_int = 0; var_380_bool = 0; var_381_int = 0; var_382_bool = 0; // 0x1458 PushV
	GetItemID(var_381_int); // 0x1459 ObjFunc
	var_383_string = "Weapon"; // 0x145b PushS
	HasInvItemProperty(var_382_bool, var_381_int, var_383_string); // 0x145c Func
	var_377_bool = var_382_bool; // 0x145e Mov
	return 4; // 0x145f Return
}


func_3673(var_30_bool, var_31_object)
{
	var_32_int = 0; var_33_int = 0; // 0xe59 PushV
	var_34_bool = 0; var_35_object = Obj(); // 0xe5a PushV
	var_35_object = var_31_object; // 0xe5b Mov
	func_3637(var_34_bool, var_35_object); // 0xe5c NEW_2
	var_51_bool = var_34_bool == 0; // 0xe5e Not
	if(var_51_bool == 0) goto Label_3682; // 0xe5f JumpB
	var_30_bool = 0; // 0xe60 MovB
	return 2; // 0xe61 Return
	
Label_3682:
	var_52_bool = 0; var_53_object = Obj(); var_54_string = ""; // 0xe62 PushV
	var_53_object = var_31_object; // 0xe63 Mov
	var_54_string = "noaccess"; // 0xe64 MovS
	func_3547(var_52_bool, var_53_object, var_54_string); // 0xe65 NEW_2
	var_61_bool = var_52_bool == 0; // 0xe67 Not
	if(var_61_bool == 0) goto Label_3691; // 0xe68 JumpB
	var_30_bool = 1; // 0xe69 MovB
	return 2; // 0xe6a Return
	
Label_3691:
	var_62_string = "noaccess"; // 0xe6b PushS
	GetProperty(var_62_string, var_33_int); // 0xe6c ObjFunc
	var_63_int = 0; // 0xe6e PushI
	var_30_bool = var_33_int == var_63_int; // 0xe6f Eq2
	return 2; // 0xe70 Return
}


func_4189(var_213_bool, var_214_object)
{
	var_215_bool = 0; var_216_object = Obj(); // 0x105e PushV
	var_216_object = var_214_object; // 0x105f Mov
	func_4254(var_216_object); // 0x1060 NEW_2
	if(var_215_bool == 0) goto Label_4197; // 0x1062 JumpB
	var_213_bool = 1; // 0x1063 MovB
	return 0; // 0x1064 Return
	
Label_4197:
	var_213_bool = 0; // 0x1065 MovB
	return 0; // 0x1066 Return
}


func_5216(var_51_object, var_54_object)
{
	var_52_int = 0; var_53_object = Obj(); // 0x1461 PushV
	var_53_object = var_51_object; // 0x1462 Mov
	TaskCall(0); // 0x1463 TaskCall
	func_0(var_54_object, var_52_int, var_53_object); // 0x1464 NEW_2
	TaskReturn(); // 0x1465 TaskReturn
	var_309_int = 100; // 0x1467 PushI
	var_310_bool = var_54_object == var_309_int; // 0x1468 Eq
	if(var_310_bool == 0) goto Label_5230; // 0x1469 JumpB
	var_311_object = Obj(); // 0x146a PushV
	var_311_object = var_51_object; // 0x146b Mov
	func_5061(); // 0x146c NEW_2
	
Label_5230:
	return 0; // 0x146e Return
}


func_4709(var_36_object, var_37_string)
{
	var_38_string = "unholster"; // 0x1266 PushS
	var_39_bool = var_37_string == var_38_string; // 0x1267 Eq
	if(var_39_bool == 0) goto Label_4718; // 0x1268 JumpB
	var_40_object = Obj(); // 0x1269 PushV
	var_40_object = var_36_object; // 0x126a Mov
	func_5044(); // 0x126b NEW_2
	goto Label_4733; // 0x126d Jump
	
Label_4733:
	return 0; // 0x127d Return
	
Label_4718:
	var_41_string = "player_shot"; // 0x126e PushS
	var_42_bool = var_37_string == var_41_string; // 0x126f Eq
	if(var_42_bool == 0) goto Label_4726; // 0x1270 JumpB
	var_43_object = Obj(); // 0x1271 PushV
	var_43_object = var_36_object; // 0x1272 Mov
	func_5049(); // 0x1273 NEW_2
	goto Label_4733; // 0x1275 Jump
	
Label_4726:
	var_44_string = "battle"; // 0x1276 PushS
	var_45_bool = var_37_string == var_44_string; // 0x1277 Eq
	if(var_45_bool == 0) goto Label_4733; // 0x1278 JumpB
	var_46_object = Obj(); // 0x1279 PushV
	var_46_object = var_36_object; // 0x127a Mov
	func_5054(); // 0x127b NEW_2
}


func_4199(var_219_bool, var_220_object)
{
	var_221_bool = 0; var_222_object = Obj(); // 0x1068 PushV
	var_222_object = var_220_object; // 0x1069 Mov
	func_4261(var_222_object); // 0x106a NEW_2
	if(var_221_bool == 0) goto Label_4207; // 0x106c JumpB
	var_219_bool = 1; // 0x106d MovB
	return 0; // 0x106e Return
	
Label_4207:
	var_219_bool = 0; // 0x106f MovB
	return 0; // 0x1070 Return
}


func_5231(var_111_int)
{
	var_111_int = 515568; // 0x146f MovI
	return 0; // 0x1470 Return
}


func_5233(var_110_int)
{
	var_110_int = 503353; // 0x1471 MovI
	return 0; // 0x1472 Return
}


func_4209(var_225_bool, var_226_object)
{
	var_227_bool = 0; var_228_object = Obj(); // 0x1072 PushV
	var_228_object = var_226_object; // 0x1073 Mov
	func_4268(var_228_object); // 0x1074 NEW_2
	if(var_227_bool == 0) goto Label_4217; // 0x1076 JumpB
	var_225_bool = 1; // 0x1077 MovB
	return 0; // 0x1078 Return
	
Label_4217:
	var_225_bool = 0; // 0x1079 MovB
	return 0; // 0x107a Return
}


func_5235(var_112_string)
{
	var_112_string = "ui/NPC_Citizen1.png"; // 0x1473 MovS
	return 0; // 0x1474 Return
}


func_3187(var_0_object, var_299_bool)
{
	var_300_bool = 0; var_301_bool = 0; // 0xc73 PushV
	var_302_string = "IsAttacking"; // 0xc74 PushS
	var_303_int = 1; // 0xc75 PushI
	var_304_bool = IsFuncExist(var_0_object, var_302_string, var_303_int); // 0xc76 FuncExist
	if(var_304_bool == 0) goto Label_3196; // 0xc77 JumpB
	IsAttacking(var_301_bool); // 0xc78 TObjFunc
	var_299_bool = var_301_bool; // 0xc7a Mov
	return 2; // 0xc7b Return
	
Label_3196:
	var_299_bool = 0; // 0xc7c MovB
	return 2; // 0xc7d Return
}


func_5237(var_113_string)
{
	var_113_string = "ui/NPC_Citizen1_b.png"; // 0x1475 MovS
	return 0; // 0x1476 Return
}


func_2166(var_2_object)
{
	var_18_int = 110; // 0x876 PushI
	KillTimer(var_18_int); // 0x877 Func
	var_2_object = 0; // 0x879 TMovB
	func_2302(var_16_object, var_17_bool); // 0x87b NEW_2
	return 0; // 0x87d Return
}


func_5239(var_105_bool)
{
	var_105_bool = 0; // 0x1477 MovB
	return 0; // 0x1478 Return
}


func_3697(var_34_object)
{
	var_35_bool = 0; var_36_int = 0; var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_string = ""; var_42_bool = 0; var_43_int = 0; var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_string = ""; // 0xe71 PushV
	var_49_bool = var_34_object == 0; // 0xe72 NullEq
	if(var_49_bool == 0) goto Label_3701; // 0xe73 JumpB
	return 14; // 0xe74 Return
	
Label_3701:
	IsDead(var_42_bool); // 0xe75 Func
	var_50_bool = var_42_bool; // 0xe77 Push
	if(var_50_bool == 0) goto Label_3706; // 0xe78 JumpB
	return 14; // 0xe79 Return
	
Label_3706:
	GetSecondaryAnimationType(var_43_int); // 0xe7a Func
	var_51_int = 0; // 0xe7c PushI
	var_52_bool = var_43_int < var_51_int; // 0xe7d LT
	if(var_52_bool == 0) goto Label_3712; // 0xe7e JumpB
	return 14; // 0xe7f Return
	
Label_3712:
	GetPosition(var_44_cvector); // 0xe80 ObjFunc
	GetPosition(var_45_cvector); // 0xe82 Func
	GetDirection(var_46_cvector); // 0xe84 Func
	var_47_cvector = var_45_cvector - var_44_cvector; // 0xe86 Sub2
	var_53_float = GetByIndex(var_47_cvector, 0); // 0xe87 PushE
	var_54_float = GetByIndex(var_46_cvector, 0); // 0xe88 PushE
	var_55_float = var_53_float * var_54_float; // 0xe89 Mult
	var_56_float = GetByIndex(var_47_cvector, 2); // 0xe8a PushE
	var_57_float = GetByIndex(var_46_cvector, 2); // 0xe8b PushE
	var_58_float = var_56_float * var_57_float; // 0xe8c Mult
	var_59_int = var_55_float + var_58_float; // 0xe8d Add
	var_60_int = 0; // 0xe8e PushI
	var_61_bool = var_59_int >= var_60_int; // 0xe8f GE
	if(var_61_bool == 0) goto Label_3731; // 0xe90 JumpB
	var_48_string = "fhit"; // 0xe91 MovS
	goto Label_3732; // 0xe92 Jump
	
Label_3732:
	var_62_string = "hit_react"; // 0xe94 PushS
	var_63_string = "1"; // 0xe95 PushS
	var_64_int = var_48_string + var_63_string; // 0xe96 Add
	var_65_string = "2"; // 0xe97 PushS
	var_66_int = var_48_string + var_65_string; // 0xe98 Add
	var_67_int = -10; // 0xe99 PushI
	FadeSecondaryAnimation(var_62_string, var_64_int, var_66_int, var_67_int); // 0xe9a Func
	return 14; // 0xe9c Return
	
Label_3731:
	var_48_string = "bhit"; // 0xe93 MovS
}


func_5241()
{
	var_18_bool = GlobalVars[0]; // 0x1479 PushGE
	var_18_bool = 0; // 0x147a MovB
	GlobalVars[0] = var_18_bool; // 0x147b PopGE
	return 0; // 0x147c Return
}


func_4219(var_158_bool)
{
	var_160_int = 0; // 0x107c PushV
	func_4069(var_160_int); // 0x107d NEW_2
	var_166_int = 6; // 0x107f PushI
	var_158_bool = var_160_int <= var_166_int; // 0x1080 LE2
	return 0; // 0x1081 Return
}


func_5245(var_27_object)
{
	var_28_bool = 0; var_29_bool = 0; // 0x147d PushV
	var_30_bool = GlobalVars[0]; // 0x147e PushGE
	if(var_30_bool == 0) goto Label_5258; // 0x147f JumpB
	IsOverrideActive(var_29_bool); // 0x1480 Func
	var_31_bool = var_29_bool == 0; // 0x1482 Not
	if(var_31_bool == 0) goto Label_5256; // 0x1483 JumpB
	var_32_object = Obj(); // 0x1484 PushV
	var_32_object = var_27_object; // 0x1485 Mov
	func_4367(var_32_object); // 0x1486 NEW_2
	
Label_5256:
	return 2; // 0x1488 Return
	
Label_5258:
	var_39_bool = 0; var_40_object = Obj(); // 0x148a PushV
	var_40_object = var_27_object; // 0x148b Mov
	func_5269(var_39_bool, var_40_object); // 0x148c NEW_2
	var_50_bool = var_39_bool == 0; // 0x148e Not
	if(var_50_bool == 0) goto Label_5268; // 0x148f JumpB
	var_51_object = Obj(); // 0x1490 PushV
	var_51_object = var_27_object; // 0x1491 Mov
	func_5216(var_29_bool, var_51_object); // 0x1492 NEW_2
	
Label_5268:
	return 2; // 0x1494 Return
}


func_2174(var_2_object)
{
	var_77_int = 110; // 0x87e PushI
	KillTimer(var_77_int); // 0x87f Func
	var_2_object = 0; // 0x881 TMovB
	func_2309(var_21_bool, var_22_int); // 0x883 NEW_2
	return 0; // 0x885 Return
}


func_3198(var_2_object, var_5_bool)
{
	var_416_float = 0; var_417_int = 0; var_418_float = 0; var_419_int = 0; // 0xc7e PushV
	var_420_bool = var_2_object == 0; // 0xc7f Not
	if(var_420_bool == 0) goto Label_3202; // 0xc80 JumpB
	return 4; // 0xc81 Return
	
Label_3202:
	var_421_bool = var_5_bool; // 0xc82 PushT
	if(var_421_bool == 0) goto Label_3210; // 0xc83 JumpB
	var_422_int = -1; // 0xc84 PushI
	var_5_bool = var_5_bool + var_422_int; // 0xc85 Add2
	var_423_int = 0; // 0xc86 PushI
	var_424_bool = var_5_bool > var_423_int; // 0xc87 GT
	if(var_424_bool == 0) goto Label_3210; // 0xc88 JumpB
	return 4; // 0xc89 Return
	
Label_3210:
	rand(var_418_float); // 0xc8a Func
	var_425_float = 0; // 0xc8c PushV
	func_3248(var_425_float); // 0xc8d NEW_2
	var_426_bool = var_418_float < var_425_float; // 0xc8f LT
	if(var_426_bool == 0) goto Label_3229; // 0xc90 JumpB
	irand(var_419_int, var_418_float); // 0xc91 Func
	var_427_int = 1; // 0xc93 PushI
	var_419_int = var_419_int + var_427_int; // 0xc94 Add2
	var_428_string = "attack"; // 0xc95 PushS
	var_429_int = var_428_string + var_419_int; // 0xc96 Add
	Speak(var_429_int); // 0xc97 Func
	var_430_int = 0; // 0xc99 PushV
	func_3246(var_430_int); // 0xc9a NEW_2
	var_5_bool = var_430_int; // 0xc9b TMov
	
Label_3229:
	return 4; // 0xc9d Return
}


func_4734(var_18_bool, var_19_object)
{
	var_20_bool = 0; var_21_bool = 0; // 0x127e PushV
	var_22_bool = 0; // 0x127f PushV
	var_22_bool = 0; // 0x1280 MovB
	var_23_bool = 0; var_24_object = Obj(); // 0x1281 PushV
	var_24_object = var_19_object; // 0x1282 Mov
	func_5041(var_24_object); // 0x1283 NEW_2
	if(var_23_bool == 0) goto Label_4748; // 0x1285 JumpB
	var_25_bool = 0; var_26_object = Obj(); // 0x1286 PushV
	var_26_object = var_19_object; // 0x1287 Mov
	func_3542(var_25_bool, var_26_object); // 0x1288 NEW_2
	if(var_25_bool == 0) goto Label_4748; // 0x128a JumpB
	var_22_bool = 1; // 0x128b MovB
	
Label_4748:
	if(var_22_bool == 0) goto Label_4755; // 0x128c JumpB
	IsWeaponHolstered(var_21_bool); // 0x128d ObjFunc
	var_29_bool = var_21_bool == 0; // 0x128f Not
	if(var_29_bool == 0) goto Label_4755; // 0x1290 JumpB
	var_18_bool = 1; // 0x1291 MovB
	return 2; // 0x1292 Return
	
Label_4755:
	var_18_bool = 0; // 0x1293 MovB
	return 2; // 0x1294 Return
}


func_4226(var_291_bool)
{
	var_293_int = 0; // 0x1083 PushV
	func_4069(var_293_int); // 0x1084 NEW_2
	var_294_int = 2; // 0x1086 PushI
	var_291_bool = var_293_int == var_294_int; // 0x1087 Eq2
	return 0; // 0x1088 Return
}


func_4233(var_184_bool)
{
	var_186_int = 0; // 0x108a PushV
	func_4069(var_186_int); // 0x108b NEW_2
	var_187_int = 7; // 0x108d PushI
	var_184_bool = var_186_int == var_187_int; // 0x108e Eq2
	return 0; // 0x108f Return
}


func_2191(var_2_object, var_18_object)
{
	var_19_bool = 0; var_20_int = 0; var_21_bool = 0; var_22_int = 0; // 0x88f PushV
	var_23_bool = 0; var_24_object = Obj(); // 0x890 PushV
	var_24_object = var_18_object; // 0x891 Mov
	func_3673(var_23_bool, var_24_object); // 0x892 NEW_2
	var_57_bool = var_23_bool == 0; // 0x894 Not
	if(var_57_bool == 0) goto Label_2199; // 0x895 JumpB
	return 4; // 0x896 Return
	
Label_2199:
	var_58_object = var_2_object; // 0x897 PushT
	if(var_58_object == 0) goto Label_2202; // 0x898 JumpB
	return 4; // 0x899 Return
	
Label_2202:
	IsPlayerActor(var_18_object, var_21_bool); // 0x89a Func
	var_59_bool = var_21_bool == 0; // 0x89c Not
	if(var_59_bool == 0) goto Label_2207; // 0x89d JumpB
	return 4; // 0x89e Return
	
Label_2207:
	var_60_int = 0; var_61_object = Obj(); // 0x89f PushV
	var_61_object = var_18_object; // 0x8a0 Mov
	func_4829(var_60_int, var_61_object); // 0x8a1 NEW_2
	var_22_int = var_60_int; // 0x8a2 Mov
	var_73_int = 0; // 0x8a4 PushI
	var_74_bool = var_22_int > var_73_int; // 0x8a5 GT
	if(var_74_bool == 0) goto Label_2230; // 0x8a6 JumpB
	var_75_int = 1; // 0x8a7 PushI
	var_76_bool = var_22_int > var_75_int; // 0x8a8 GT
	if(var_76_bool == 0) goto Label_2221; // 0x8a9 JumpB
	func_2174(var_22_int); // 0x8ab NEW_2
	
Label_2221:
	var_78_object = Obj(); // 0x8ad PushV
	var_78_object = var_18_object; // 0x8ae Mov
	func_4839(var_78_object); // 0x8af NEW_2
	var_2_object = 1; // 0x8b1 TMovB
	var_544_int = 110; // 0x8b2 PushI
	var_545_float = 10.0; // 0x8b3 PushF
	SetTimer(var_544_int, var_545_float); // 0x8b4 Func
	
Label_2230:
	return 4; // 0x8b6 Return
}


func_4240(var_190_bool)
{
	var_192_int = 0; // 0x1091 PushV
	func_4069(var_192_int); // 0x1092 NEW_2
	var_193_int = 8; // 0x1094 PushI
	var_190_bool = var_192_int == var_193_int; // 0x1095 Eq2
	return 0; // 0x1096 Return
}


func_4757(var_30_object)
{
	var_31_object = Obj(); // 0x1296 PushV
	var_31_object = var_30_object; // 0x1297 Mov
	func_5044(); // 0x1298 NEW_2
	return 0; // 0x129a Return
}


func_5269(var_39_bool, var_40_object)
{
	var_41_float = 0; var_42_float = 0; // 0x1495 PushV
	var_43_bool = 0; var_44_object = Obj(); // 0x1496 PushV
	var_44_object = var_40_object; // 0x1497 Mov
	func_3542(var_43_bool, var_44_object); // 0x1498 NEW_2
	if(var_43_bool == 0) goto Label_5283; // 0x149a JumpB
	var_47_string = "reputation"; // 0x149b PushS
	GetProperty(var_47_string, var_42_float); // 0x149c ObjFunc
	var_48_float = 0.4; // 0x149e PushF
	var_49_bool = var_42_float < var_48_float; // 0x149f LT
	if(var_49_bool == 0) goto Label_5283; // 0x14a0 JumpB
	var_39_bool = 1; // 0x14a1 MovB
	return 2; // 0x14a2 Return
	
Label_5283:
	var_39_bool = 0; // 0x14a3 MovB
	return 2; // 0x14a4 Return
}


func_4247(var_196_bool)
{
	var_198_int = 0; // 0x1098 PushV
	func_4069(var_198_int); // 0x1099 NEW_2
	var_199_int = 9; // 0x109b PushI
	var_196_bool = var_198_int == var_199_int; // 0x109c Eq2
	return 0; // 0x109d Return
}


func_4763(var_20_object)
{
	var_21_bool = 0; var_22_object = Obj(); // 0x129c PushV
	var_22_object = var_20_object; // 0x129d Mov
	func_3542(var_21_bool, var_22_object); // 0x129e NEW_2
	if(var_21_bool == 0) goto Label_4775; // 0x12a0 JumpB
	var_25_object = Obj(); // 0x12a1 PushV
	func_4014(var_25_object); // 0x12a2 NEW_2
	var_28_float = -0.01; // 0x12a4 PushF
	ReportReputationChange(var_20_object, var_25_object, var_28_float); // 0x12a5 Func
	
Label_4775:
	return 0; // 0x12a7 Return
}


func_3741(var_21_object, var_22_int, var_23_float)
{
	var_24_cvector = CVector(0,0,0); var_25_object = Obj(); var_26_int = 0; var_27_bool = 0; var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_int = 0; var_31_int = 0; var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_object = Obj(); var_35_int = 0; var_36_bool = 0; var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_int = 0; var_40_int = 0; var_41_cvector = CVector(0,0,0); // 0xe9d PushV
	var_42_bool = 0; // 0xe9e PushV
	var_42_bool = 0; // 0xe9f MovB
	var_43_bool = 0; // 0xea0 PushV
	var_43_bool = 0; // 0xea1 MovB
	var_44_object = var_21_object; // 0xea2 Push
	if(var_44_object == 0) goto Label_3752; // 0xea3 JumpB
	var_45_int = 4; // 0xea4 PushI
	var_46_bool = var_22_int != var_45_int; // 0xea5 Neq
	if(var_46_bool == 0) goto Label_3752; // 0xea6 JumpB
	var_43_bool = 1; // 0xea7 MovB
	
Label_3752:
	if(var_43_bool == 0) goto Label_3757; // 0xea8 JumpB
	var_47_int = 5; // 0xea9 PushI
	var_48_bool = var_22_int != var_47_int; // 0xeaa Neq
	if(var_48_bool == 0) goto Label_3757; // 0xeab JumpB
	var_42_bool = 1; // 0xeac MovB
	
Label_3757:
	if(var_42_bool == 0) goto Label_3804; // 0xead JumpB
	var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); // 0xeae PushV
	var_51_cvector = CVector(0,0,0); var_52_object = Obj(); // 0xeaf PushV
	var_52_object = var_21_object; // 0xeb0 Mov
	func_3527(var_52_object); // 0xeb1 NEW_2
	var_50_cvector = var_51_cvector; // 0xeb2 Mov
	func_4020(var_49_cvector, var_50_cvector); // 0xeb4 NEW_2
	var_33_cvector = var_49_cvector; // 0xeb5 Mov
	CreateVectorVector(var_34_object); // 0xeb7 Func
	var_35_int = 1; // 0xeb9 MovI
	
Label_3770:
	var_62_string = "hit"; // 0xeba PushS
	var_63_int = var_62_string + var_35_int; // 0xebb Add
	GetGeometryLocator(var_63_int, var_36_bool, var_37_cvector, var_38_cvector); // 0xebc Func
	var_64_bool = var_36_bool == 0; // 0xebe Not
	if(var_64_bool == 0) goto Label_3777; // 0xebf JumpB
	goto Label_3786; // 0xec0 Jump
	
Label_3786:
	size(var_39_int); // 0xeca ObjFunc
	var_65_int = var_39_int; // 0xecc Push
	if(var_65_int == 0) goto Label_3803; // 0xecd JumpB
	irand(var_40_int, var_39_int); // 0xece Func
	get(var_41_cvector, var_40_int); // 0xed0 ObjFunc
	var_66_object = Obj(); var_67_int = 0; var_68_float = 0; var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); // 0xed2 PushV
	var_66_object = var_21_object; // 0xed3 Mov
	var_67_int = var_22_int; // 0xed4 Mov
	var_68_float = var_23_float; // 0xed5 Mov
	var_69_cvector = var_41_cvector; // 0xed6 Mov
	var_70_cvector = -var_33_cvector; // 0xed7 Neg2
	func_3809(var_68_float, var_69_cvector, var_70_cvector); // 0xed8 NEW_2
	return 18; // 0xeda Return
	
Label_3803:
	var_34_object = 0; // 0xedb SetNull
	
Label_3804:
	var_111_object = Obj(); // 0xedc PushV
	var_111_object = var_21_object; // 0xedd Mov
	func_3697(var_111_object); // 0xede NEW_2
	return 18; // 0xee0 Return
	
Label_3777:
	var_112_int = var_38_cvector | var_33_cvector; // 0xec1 Or
	var_113_float = 0.70711; // 0xec2 PushF
	var_114_bool = var_112_int >= var_113_float; // 0xec3 GE
	if(var_114_bool == 0) goto Label_3783; // 0xec4 JumpB
	add(var_37_cvector); // 0xec5 ObjFunc
	
Label_3783:
	var_115_int = 1; // 0xec7 PushI
	var_35_int = var_35_int + var_115_int; // 0xec8 Add2
	goto Label_3770; // 0xec9 Jump
}


func_3230(var_0_object)
{
	var_172_object = Obj(); // 0xc9e PushV
	var_172_object = var_0_object; // 0xc9f MovT
	func_4078(var_172_object); // 0xca0 NEW_2
	return 0; // 0xca2 Return
}


func_4254(var_215_bool)
{
	var_217_int = 0; // 0x109f PushV
	func_4069(var_217_int); // 0x10a0 NEW_2
	var_218_int = 10; // 0x10a2 PushI
	var_215_bool = var_217_int == var_218_int; // 0x10a3 Eq2
	return 0; // 0x10a4 Return
}


func_3235(var_509_int)
{
	var_509_int = 0; // 0xca3 MovI
	return 0; // 0xca4 Return
}


func_3237()
{
	var_305_string = ""; // 0xca5 PushV
	var_305_string = "attack_stay"; // 0xca6 MovS
	func_3973(var_305_string); // 0xca7 NEW_2
	return 0; // 0xca9 Return
}


func_4261(var_221_bool)
{
	var_223_int = 0; // 0x10a6 PushV
	func_4069(var_223_int); // 0x10a7 NEW_2
	var_224_int = 11; // 0x10a9 PushI
	var_221_bool = var_223_int == var_224_int; // 0x10aa Eq2
	return 0; // 0x10ab Return
}


func_5285(var_89_bool)
{
	var_89_bool = 1; // 0x14a6 MovB
	return 0; // 0x14a7 Return
}


func_5288(var_22_bool, var_23_object, var_24_object, var_25_bool)
{
	var_26_bool = 0; var_27_object = Obj(); var_28_object = Obj(); var_29_float = 0; var_30_bool = 0; // 0x14a9 PushV
	var_27_object = var_23_object; // 0x14aa Mov
	var_28_object = var_24_object; // 0x14ab Mov
	var_29_float = 700.0; // 0x14ac MovF
	var_30_bool = var_25_bool; // 0x14ad Mov
	func_4951(var_26_bool, var_27_object, var_28_object, var_29_float, var_30_bool); // 0x14ae NEW_2
	var_22_bool = var_26_bool; // 0x14af Mov
	return 0; // 0x14b1 Return
}


func_4776(var_18_bool, var_19_string)
{
	var_20_object = Obj(); var_21_object = Obj(); // 0x12a8 PushV
	var_22_string = "heal"; // 0x12a9 PushS
	var_23_bool = var_19_string == var_22_string; // 0x12aa Eq
	if(var_23_bool == 0) goto Label_4790; // 0x12ab JumpB
	var_24_string = "player"; // 0x12ac PushS
	FindActor(var_21_object, var_24_string); // 0x12ad Func
	var_25_bool = 0; var_26_object = Obj(); // 0x12af PushV
	var_26_object = var_21_object; // 0x12b0 Mov
	func_5056(var_26_object); // 0x12b1 NEW_2
	var_18_bool = var_25_bool; // 0x12b2 Mov
	return 2; // 0x12b4 Return
	
Label_4790:
	var_18_bool = 0; // 0x12b6 MovB
	return 2; // 0x12b7 Return
}


func_3242()
{
	return 0; // 0xcab Return
}


func_3244(var_534_bool)
{
	var_534_bool = 1; // 0xcac MovB
	return 0; // 0xcad Return
}


func_4268(var_227_bool)
{
	var_229_int = 0; // 0x10ad PushV
	func_4069(var_229_int); // 0x10ae NEW_2
	var_230_int = 12; // 0x10b0 PushI
	var_227_bool = var_229_int == var_230_int; // 0x10b1 Eq2
	return 0; // 0x10b2 Return
}


func_3246(var_430_int)
{
	var_430_int = 1; // 0xcae MovI
	return 0; // 0xcaf Return
}


func_3248(var_425_float)
{
	var_425_float = 0.5; // 0xcb0 MovF
	return 0; // 0xcb1 Return
}


func_5298(var_100_object)
{
	var_101_bool = 0; var_102_object = Obj(); // 0x14b3 PushV
	var_102_object = var_100_object; // 0x14b4 Mov
	func_3542(var_101_bool, var_102_object); // 0x14b5 NEW_2
	if(var_101_bool == 0) goto Label_5315; // 0x14b7 JumpB
	var_105_object = Obj(); // 0x14b8 PushV
	func_4014(var_105_object); // 0x14b9 NEW_2
	var_108_float = -0.04; // 0x14bb PushF
	var_109_bool = 1; // 0x14bc PushB
	ReportReputationChange(var_100_object, var_105_object, var_108_float, var_109_bool); // 0x14bd Func
	var_110_bool = 0; // 0x14bf PushV
	var_110_bool = 1; // 0x14c0 MovB
	func_4452(var_110_bool); // 0x14c1 NEW_2
	
Label_5315:
	func_4428(); // 0x14c4 NEW_2
	var_244_bool = GlobalVars[0]; // 0x14c6 PushGE
	var_244_bool = 1; // 0x14c7 MovB
	GlobalVars[0] = var_244_bool; // 0x14c8 PopGE
	var_245_int = 50; // 0x14c9 PushI
	var_246_int = 40; // 0x14ca PushI
	SetRTEnvelope(var_245_int, var_246_int); // 0x14cb Func
	return 0; // 0x14cd Return
}


func_4275(var_114_int)
{
	var_115_int = 0; var_116_int = 0; // 0x10b3 PushV
	var_117_string = "branch"; // 0x10b4 PushS
	GetVariable(var_117_string, var_116_int); // 0x10b5 Func
	var_118_int = 0; // 0x10b7 PushI
	var_119_bool = var_116_int == var_118_int; // 0x10b8 Eq
	if(var_119_bool == 0) goto Label_4285; // 0x10b9 JumpB
	var_114_int = 1; // 0x10ba MovI
	return 2; // 0x10bb Return
	
Label_4285:
	var_120_int = 1; // 0x10bd PushI
	var_121_bool = var_116_int == var_120_int; // 0x10be Eq
	if(var_121_bool == 0) goto Label_4290; // 0x10bf JumpB
	var_114_int = 2; // 0x10c0 MovI
	return 2; // 0x10c1 Return
	
Label_4290:
	var_114_int = 3; // 0x10c2 MovI
	return 2; // 0x10c3 Return
}


func_2231(var_0_object, var_1_object)
{
	var_23_float = 0; var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_bool = 0; var_27_object = Obj(); var_28_bool = 0; var_29_float = 0; var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_bool = 0; var_33_object = Obj(); var_34_bool = 0; // 0x8b7 PushV
	var_0_object = 0; // 0x8b8 TMovB
	var_1_object = 0; // 0x8b9 TMovB
	var_35_float = 0.5; // 0x8ba PushF
	rand(var_29_float, var_35_float); // 0x8bb Func
	Sleep(var_29_float); // 0x8bd Func
	
Label_2239:
	var_36_bool = var_0_object == 0; // 0x8bf Not
	if(var_36_bool == 0) goto Label_2289; // 0x8c0 JumpB
	var_37_bool = var_1_object == 0; // 0x8c1 Not
	if(var_37_bool == 0) goto Label_2258; // 0x8c2 JumpB
	
Label_2243:
	GetPosition(var_31_cvector); // 0x8c3 Func
	var_38_float = 0; // 0x8c5 PushV
	func_2290(var_38_float); // 0x8c6 NEW_2
	GetRandomPFPointInCircle(var_30_cvector, var_31_cvector, var_38_float, var_32_bool); // 0x8c8 Func
	var_41_bool = var_32_bool; // 0x8ca Push
	if(var_41_bool == 0) goto Label_2253; // 0x8cb JumpB
	goto Label_2257; // 0x8cc Jump
	
Label_2257:
	goto Label_2259; // 0x8d1 Jump
	
Label_2259:
	var_42_object = Obj(); var_43_cvector = CVector(0,0,0); // 0x8d3 PushV
	var_43_cvector = var_30_cvector; // 0x8d4 Mov
	func_2318(var_42_object, var_43_cvector); // 0x8d5 NEW_2
	var_33_object = var_42_object; // 0x8d6 Mov
	var_46_bool = var_33_object != 0; // 0x8d8 NullNeq
	if(var_46_bool == 0) goto Label_2284; // 0x8d9 JumpB
	RotatePath(var_33_object, var_34_bool); // 0x8da Func
	var_47_bool = var_34_bool; // 0x8dc Push
	if(var_47_bool == 0) goto Label_2283; // 0x8dd JumpB
	var_48_bool = 0; // 0x8de PushV
	func_2316(var_48_bool); // 0x8df NEW_2
	FollowPath(var_33_object, var_48_bool, var_34_bool); // 0x8e1 Func
	var_33_object = 0; // 0x8e3 SetNull
	var_49_bool = var_34_bool; // 0x8e4 Push
	if(var_49_bool == 0) goto Label_2283; // 0x8e5 JumpB
	TaskCall(4); // 0x8e7 TaskCall
	func_2488(); // 0x8e8 NEW_2
	TaskReturn(); // 0x8e9 TaskReturn
	
Label_2283:
	goto Label_2287; // 0x8eb Jump
	
Label_2287:
	var_33_object = 0; // 0x8ef SetNull
	goto Label_2239; // 0x8f0 Jump
	
Label_2284:
	var_101_int = 1; // 0x8ec PushI
	Sleep(var_101_int); // 0x8ed Func
	
Label_2253:
	var_102_int = 1; // 0x8cd PushI
	Sleep(var_102_int); // 0x8ce Func
	goto Label_2243; // 0x8d0 Jump
	
Label_2258:
	var_1_object = 0; // 0x8d2 TMovB
	
Label_2289:
	return 12; // 0x8f1 Return
}


func_4792(var_27_string)
{
	var_28_object = Obj(); var_29_object = Obj(); // 0x12b8 PushV
	var_30_string = "heal"; // 0x12b9 PushS
	var_31_bool = var_27_string == var_30_string; // 0x12ba Eq
	if(var_31_bool == 0) goto Label_4804; // 0x12bb JumpB
	var_32_string = "player"; // 0x12bc PushS
	FindActor(var_29_object, var_32_string); // 0x12bd Func
	var_33_object = Obj(); // 0x12bf PushV
	var_33_object = var_29_object; // 0x12c0 Mov
	func_5059(); // 0x12c1 NEW_2
	var_29_object = 0; // 0x12c3 SetNull
	
Label_4804:
	return 2; // 0x12c4 Return
}


func_3257(var_2_object, var_179_bool, var_180_object, var_181_float, var_182_float, var_183_bool, var_184_bool)
{
	var_188_bool = 0; var_189_bool = 0; var_190_bool = 0; var_191_bool = 0; // 0xcb9 PushV
	var_192_object = Obj(); // 0xcba PushV
	var_192_object = var_180_object; // 0xcbb Mov
	func_4078(var_192_object); // 0xcbc NEW_2
	var_193_int = 1; // 0xcbe PushI
	var_194_int = 5; // 0xcbf PushI
	SetTimer(var_193_int, var_194_int); // 0xcc0 Func
	CanSee(var_190_bool, var_180_object); // 0xcc2 Func
	var_195_bool = var_190_bool; // 0xcc4 Push
	if(var_195_bool == 0) goto Label_3276; // 0xcc5 JumpB
	var_2_object = 1; // 0xcc6 TMovB
	var_196_object = Obj(); // 0xcc7 PushV
	var_196_object = var_180_object; // 0xcc8 Mov
	func_3955(var_196_object); // 0xcc9 NEW_2
	goto Label_3277; // 0xccb Jump
	
Label_3277:
	var_203_bool = 0; var_204_object = Obj(); // 0xccd PushV
	var_204_object = var_180_object; // 0xcce Mov
	func_3542(var_203_bool, var_204_object); // 0xccf NEW_2
	if(var_203_bool == 0) goto Label_3287; // 0xcd1 JumpB
	var_207_object = Obj(); // 0xcd2 PushV
	func_4014(var_207_object); // 0xcd3 NEW_2
	SendPlayerEnemy(var_180_object, var_207_object); // 0xcd5 Func
	
Label_3287:
	var_208_bool = 0; var_209_object = Obj(); var_210_float = 0; var_211_float = 0; var_212_bool = 0; var_213_bool = 0; // 0xcd7 PushV
	var_209_object = var_180_object; // 0xcd8 Mov
	var_210_float = var_181_float; // 0xcd9 Mov
	var_211_float = var_182_float; // 0xcda Mov
	var_212_bool = var_183_bool; // 0xcdb Mov
	var_213_bool = var_184_bool; // 0xcdc Mov
	func_3362(var_190_bool, var_191_bool, var_208_bool, var_209_object, var_210_float, var_211_float, var_212_bool, var_213_bool); // 0xcdd NEW_2
	var_191_bool = var_208_bool; // 0xcde Mov
	var_259_object = var_2_object; // 0xce0 PushT
	if(var_259_object == 0) goto Label_3301; // 0xce1 JumpB
	var_260_string = "head"; // 0xce2 PushS
	UnlookAsync(var_260_string); // 0xce3 Func
	
Label_3301:
	var_261_int = 1; // 0xce5 PushI
	KillTimer(var_261_int); // 0xce6 Func
	var_179_bool = var_191_bool; // 0xce8 Mov
	return 4; // 0xce9 Return
	
Label_3276:
	var_2_object = 0; // 0xccc TMovB
}


func_4292(var_224_int)
{
	var_225_int = 0; var_226_int = 0; // 0x10c4 PushV
	var_227_string = "branch"; // 0x10c5 PushS
	GetVariable(var_227_string, var_226_int); // 0x10c6 Func
	var_224_int = var_226_int; // 0x10c8 Mov
	return 2; // 0x10c9 Return
}


func_4805(var_72_string, var_73_int)
{
	var_74_string = ""; var_75_string = ""; // 0x12c5 PushV
	var_75_string = "idle"; // 0x12c6 MovS
	var_76_int = var_73_int; // 0x12c7 Push
	if(var_76_int == 0) goto Label_4810; // 0x12c8 JumpB
	var_75_string = var_75_string + var_73_int; // 0x12c9 Add2
	
Label_4810:
	var_72_string = var_75_string; // 0x12ca Mov
	return 2; // 0x12cb Return
}


func_4298(var_407_int)
{
	var_409_int = 0; var_410_int = 0; // 0x10ca PushV
	GetItemID(var_410_int); // 0x10cb ObjFunc
	var_407_int = var_410_int; // 0x10cd Mov
	return 2; // 0x10ce Return
}


func_4812(var_66_int)
{
	var_67_int = 0; var_68_bool = 0; var_69_int = 0; var_70_bool = 0; // 0x12cc PushV
	var_69_int = 0; // 0x12cd MovI
	
Label_4814:
	var_71_string = "all"; // 0x12ce PushS
	var_72_string = ""; var_73_int = 0; // 0x12cf PushV
	var_73_int = var_69_int; // 0x12d0 Mov
	func_4805(var_72_string, var_73_int); // 0x12d1 NEW_2
	HasAnimation(var_70_bool, var_71_string, var_72_string); // 0x12d3 Func
	var_77_bool = var_70_bool == 0; // 0x12d5 Not
	if(var_77_bool == 0) goto Label_4824; // 0x12d6 JumpB
	goto Label_4827; // 0x12d7 Jump
	
Label_4827:
	var_66_int = var_69_int; // 0x12db Mov
	return 4; // 0x12dc Return
	
Label_4824:
	var_78_int = 1; // 0x12d8 PushI
	var_69_int = var_69_int + var_78_int; // 0x12d9 Add2
	goto Label_4814; // 0x12da Jump
}


func_4303(var_384_int, var_385_object, var_386_int)
{
	var_387_int = 0; var_388_int = 0; var_389_int = 0; var_390_string = ""; var_391_bool = 0; var_392_bool = 0; var_393_int = 0; var_394_int = 0; var_395_int = 0; var_396_int = 0; var_397_string = ""; var_398_bool = 0; var_399_bool = 0; var_400_int = 0; // 0x10cf PushV
	var_401_int = 0; // 0x10d0 PushI
	var_402_bool = var_386_int == var_401_int; // 0x10d1 Eq
	if(var_402_bool == 0) goto Label_4340; // 0x10d2 JumpB
	var_403_int = 0; // 0x10d3 PushV
	func_4069(var_403_int); // 0x10d4 NEW_2
	var_394_int = var_403_int; // 0x10d5 Mov
	var_395_int = 0; // 0x10d7 MovI
	var_396_int = 1; // 0x10d8 MovI
	
Label_4313:
	var_404_bool = var_396_int <= var_394_int; // 0x10d9 LE
	if(var_404_bool == 0) goto Label_4338; // 0x10da JumpB
	var_397_string = "Price"; // 0x10db MovS
	var_405_int = 1; // 0x10dc PushI
	var_406_bool = var_396_int != var_405_int; // 0x10dd Neq
	if(var_406_bool == 0) goto Label_4320; // 0x10de JumpB
	var_397_string = var_397_string + var_396_int; // 0x10df Add2
	
Label_4320:
	var_407_int = 0; var_408_object = Obj(); // 0x10e0 PushV
	var_408_object = var_385_object; // 0x10e1 Mov
	func_4298(var_408_object); // 0x10e2 NEW_2
	HasInvItemProperty(var_398_bool, var_407_int, var_397_string); // 0x10e4 Func
	var_411_bool = var_398_bool == 0; // 0x10e6 Not
	if(var_411_bool == 0) goto Label_4329; // 0x10e7 JumpB
	goto Label_4335; // 0x10e8 Jump
	
Label_4335:
	var_412_int = 1; // 0x10ef PushI
	var_396_int = var_396_int + var_412_int; // 0x10f0 Add2
	goto Label_4313; // 0x10f1 Jump
	
Label_4329:
	var_413_int = 0; var_414_object = Obj(); // 0x10e9 PushV
	var_414_object = var_385_object; // 0x10ea Mov
	func_4298(var_414_object); // 0x10eb NEW_2
	GetInvItemProperty(var_395_int, var_413_int, var_397_string); // 0x10ed Func
	
Label_4338:
	var_384_int = var_395_int; // 0x10f2 Mov
	return 14; // 0x10f3 Return
	
Label_4340:
	var_415_int = 0; var_416_object = Obj(); // 0x10f4 PushV
	var_416_object = var_385_object; // 0x10f5 Mov
	func_4298(var_416_object); // 0x10f6 NEW_2
	var_417_string = "BarterPrice"; // 0x10f8 PushS
	var_418_int = var_417_string + var_386_int; // 0x10f9 Add
	HasInvItemProperty(var_399_bool, var_415_int, var_418_int); // 0x10fa Func
	var_419_bool = var_399_bool == 0; // 0x10fc Not
	if(var_419_bool == 0) goto Label_4352; // 0x10fd JumpB
	var_384_int = 0; // 0x10fe MovI
	return 14; // 0x10ff Return
	
Label_4352:
	var_420_int = 0; var_421_object = Obj(); // 0x1100 PushV
	var_421_object = var_385_object; // 0x1101 Mov
	func_4298(var_421_object); // 0x1102 NEW_2
	var_422_string = "BarterPrice"; // 0x1104 PushS
	var_423_int = var_422_string + var_386_int; // 0x1105 Add
	GetInvItemProperty(var_400_int, var_420_int, var_423_int); // 0x1106 Func
	var_424_int = 0; // 0x1108 PushI
	var_425_bool = var_400_int > var_424_int; // 0x1109 GT
	if(var_425_bool == 0) goto Label_4365; // 0x110a JumpB
	var_384_int = var_400_int; // 0x110b Mov
	return 14; // 0x110c Return
	
Label_4365:
	var_384_int = -var_400_int; // 0x110d Neg2
	return 14; // 0x110e Return
}


func_4829(var_60_int, var_61_object)
{
	var_62_bool = 0; var_63_object = Obj(); // 0x12de PushV
	var_63_object = var_61_object; // 0x12df Mov
	func_5269(var_62_bool, var_63_object); // 0x12e0 NEW_2
	if(var_62_bool == 0) goto Label_4837; // 0x12e2 JumpB
	var_60_int = 2; // 0x12e3 MovI
	goto Label_4838; // 0x12e4 Jump
	
Label_4838:
	return 0; // 0x12e6 Return
	
Label_4837:
	var_60_int = 0; // 0x12e5 MovI
}


func_3809(var_23_object, var_26_cvector, var_27_cvector)
{
	var_28_object = Obj(); var_29_object = Obj(); var_30_object = Obj(); var_31_object = Obj(); // 0xee1 PushV
	GetScene(var_30_object); // 0xee2 Func
	var_32_string = "scripted"; // 0xee4 PushS
	var_33_string = "blood_dir.xml"; // 0xee5 PushS
	AddActorByType(var_31_object, var_32_string, var_30_object, var_26_cvector, var_27_cvector, var_33_string); // 0xee6 Func
	var_34_object = Obj(); // 0xee8 PushV
	var_34_object = var_23_object; // 0xee9 Mov
	func_3697(var_34_object); // 0xeea NEW_2
	return 4; // 0xeec Return
}


func_4839(var_78_object)
{
	var_79_object = Obj(); // 0x12e8 PushV
	var_79_object = var_78_object; // 0x12e9 Mov
	func_4855(var_79_object); // 0x12ea NEW_2
	return 0; // 0x12ec Return
}


func_4845(var_87_int, var_88_object)
{
	var_89_bool = 0; var_90_object = Obj(); // 0x12ee PushV
	var_90_object = var_88_object; // 0x12ef Mov
	func_3673(var_89_bool, var_90_object); // 0x12f0 NEW_2
	if(var_89_bool == 0) goto Label_4853; // 0x12f2 JumpB
	var_87_int = 2; // 0x12f3 MovI
	goto Label_4854; // 0x12f4 Jump
	
Label_4854:
	return 0; // 0x12f6 Return
	
Label_4853:
	var_87_int = 0; // 0x12f5 MovI
}


func_3823()
{
	var_283_cvector = CVector(0,0,0); var_284_cvector = CVector(0,0,0); var_285_cvector = CVector(0,0,0); var_286_cvector = CVector(0,0,0); var_287_cvector = CVector(0,0,0); var_288_cvector = CVector(0,0,0); // 0xeef PushV
	GetPosition(var_286_cvector); // 0xef0 ObjFunc
	GetPosition(var_287_cvector); // 0xef2 Func
	var_288_cvector = var_286_cvector - var_287_cvector; // 0xef4 Sub2
	var_289_float = GetByIndex(var_288_cvector, 0); // 0xef5 PushE
	var_290_float = GetByIndex(var_288_cvector, 2); // 0xef6 PushE
	RotateAsync(var_289_float, var_290_float); // 0xef7 Func
	return 6; // 0xef9 Return
}


func_2290(var_38_float)
{
	var_39_float = 0; var_40_float = 0; // 0x8f2 PushV
	GetCameraFarDistance(var_40_float); // 0x8f3 Func
	var_38_float = var_40_float; // 0x8f5 Mov
	return 2; // 0x8f6 Return
}


func_4855(var_100_object)
{
	var_101_object = Obj(); // 0x12f8 PushV
	var_101_object = var_100_object; // 0x12f9 Mov
	TaskCall(5); // 0x12fa TaskCall
	func_2574(var_101_object); // 0x12fb NEW_2
	TaskReturn(); // 0x12fc TaskReturn
	return 0; // 0x12fe Return
}


func_3320(var_2_object)
{
	var_18_int = 1; // 0xcf8 PushI
	KillTimer(var_18_int); // 0xcf9 Func
	var_19_object = var_2_object; // 0xcfb PushT
	if(var_19_object == 0) goto Label_3329; // 0xcfc JumpB
	var_2_object = 0; // 0xcfd TMovB
	var_20_string = "head"; // 0xcfe PushS
	UnlookAsync(var_20_string); // 0xcff Func
	
Label_3329:
	func_3486(var_17_object); // 0xd02 NEW_2
	return 0; // 0xd04 Return
}


func_3834(var_19_bool)
{
	var_20_bool = 0; var_21_bool = 0; // 0xefa PushV
	IsLoaded(var_21_bool); // 0xefb Func
	var_19_bool = var_21_bool; // 0xefd Mov
	return 2; // 0xefe Return
}


func_2302(var_0_object, var_1_object)
{
	var_0_object = 1; // 0x8fe TMovB
	var_1_object = 0; // 0x8ff TMovB
	Stop(); // 0x900 Func
	StopGroup0(); // 0x902 Func
	return 0; // 0x904 Return
}


func_3839(var_63_bool, var_65_float)
{
	var_66_float = 0; var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); var_73_bool = 0; var_74_bool = 0; var_75_float = 0; var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0); var_79_cvector = CVector(0,0,0); var_80_cvector = CVector(0,0,0); var_81_cvector = CVector(0,0,0); var_82_bool = 0; var_83_bool = 0; // 0xeff PushV
	GetPosition(var_76_cvector); // 0xf00 ObjFunc
	GetEyesHeight(var_75_float); // 0xf02 ObjFunc
	var_84_float = GetByIndex(var_76_cvector, 1); // 0xf04 PushE
	var_84_float = var_84_float + var_75_float; // 0xf05 Add2
	SetByIndex(var_76_cvector, 1) = var_84_float; // 0xf06 PopE
	GetPosition(var_77_cvector); // 0xf07 Func
	GetEyesHeight(var_75_float); // 0xf09 Func
	var_85_float = GetByIndex(var_77_cvector, 1); // 0xf0b PushE
	var_85_float = var_85_float + var_75_float; // 0xf0c Add2
	SetByIndex(var_77_cvector, 1) = var_85_float; // 0xf0d PopE
	var_78_cvector = var_76_cvector - var_77_cvector; // 0xf0e Sub2
	var_86_float = GetByIndex(var_78_cvector, 1); // 0xf0f PushE
	var_86_float = 0; // 0xf10 MovI
	SetByIndex(var_78_cvector, 1) = var_86_float; // 0xf11 PopE
	var_87_int = var_78_cvector | var_78_cvector; // 0xf12 Or
	var_88_float = sqrt(var_87_int); // 0xf13 Sqrt
	var_78_cvector = var_78_cvector / var_78_cvector; // 0xf14 Div2
	var_79_cvector = -var_78_cvector; // 0xf15 Neg2
	var_89_float = var_78_cvector * var_65_float; // 0xf16 Mult
	var_90_cvector = CVector(0,0,0); var_91_cvector = CVector(0,0,0); // 0xf17 PushV
	var_92_cvector = CVector(0.0, 1.0, 0.0); // 0xf18 PushVec
	var_91_cvector = var_79_cvector ^ var_92_cvector; // 0xf19 Xor2
	func_4020(var_90_cvector, var_91_cvector); // 0xf1a NEW_2
	var_98_int = 25; // 0xf1c PushI
	var_99_float = var_90_cvector * var_98_int; // 0xf1d Mult
	var_100_int = var_89_float + var_99_float; // 0xf1e Add
	var_101_cvector = CVector(0.0, 10.0, 0.0); // 0xf1f PushVec
	var_80_cvector = var_100_int - var_101_cvector; // 0xf20 Sub2
	var_81_cvector = var_77_cvector + var_80_cvector; // 0xf21 Add2
	IsOverrideActive(var_82_bool); // 0xf22 Func
	var_102_bool = var_82_bool; // 0xf24 Push
	if(var_102_bool == 0) goto Label_3880; // 0xf25 JumpB
	var_63_bool = 0; // 0xf26 MovB
	return 18; // 0xf27 Return
	
Label_3880:
	StopWorld(); // 0xf28 Func
	CameraTransit(var_81_cvector, var_79_cvector); // 0xf2a Func
	var_103_float = GetByIndex(var_80_cvector, 0); // 0xf2c PushE
	var_104_float = GetByIndex(var_80_cvector, 2); // 0xf2d PushE
	Rotate(var_103_float, var_104_float); // 0xf2e Func
	var_105_bool = 0; // 0xf30 PushV
	func_5239(var_105_bool); // 0xf31 NEW_2
	if(var_105_bool == 0) goto Label_3893; // 0xf33 JumpB
	goto Label_3901; // 0xf34 Jump
	
Label_3901:
	CameraWaitForPlayFinish(); // 0xf3d Func
	ResumeWorld(); // 0xf3f Func
	var_63_bool = 1; // 0xf41 MovB
	return 18; // 0xf42 Return
	
Label_3893:
	var_106_string = "head"; // 0xf35 PushS
	HasAnimationTrack(var_83_bool, var_106_string); // 0xf36 Func
	var_107_bool = var_83_bool; // 0xf38 Push
	if(var_107_bool == 0) goto Label_3901; // 0xf39 JumpB
	var_108_string = "head"; // 0xf3a PushS
	LookAsyncCamera(var_108_string); // 0xf3b Func
}


func_4863(var_33_bool, var_34_object, var_35_bool)
{
	var_36_string = ""; var_37_string = ""; var_38_string = ""; var_39_string = ""; // 0x12ff PushV
	var_40_bool = 0; var_41_object = Obj(); var_42_string = ""; // 0x1300 PushV
	var_41_object = var_34_object; // 0x1301 Mov
	var_42_string = "class"; // 0x1302 MovS
	func_3547(var_40_bool, var_41_object, var_42_string); // 0x1303 NEW_2
	var_49_bool = var_40_bool == 0; // 0x1305 Not
	if(var_49_bool == 0) goto Label_4873; // 0x1306 JumpB
	var_33_bool = 0; // 0x1307 MovB
	return 4; // 0x1308 Return
	
Label_4873:
	var_50_string = "class"; // 0x1309 PushS
	GetProperty(var_50_string, var_38_string); // 0x130a Func
	var_51_string = "class"; // 0x130c PushS
	GetProperty(var_51_string, var_39_string); // 0x130d ObjFunc
	var_52_bool = 0; // 0x130f PushV
	var_52_bool = 0; // 0x1310 MovB
	var_53_bool = var_35_bool == 0; // 0x1311 Not
	if(var_53_bool == 0) goto Label_4886; // 0x1312 JumpB
	var_54_bool = var_38_string == var_39_string; // 0x1313 Eq
	if(var_54_bool == 0) goto Label_4886; // 0x1314 JumpB
	var_52_bool = 1; // 0x1315 MovB
	
Label_4886:
	if(var_52_bool == 0) goto Label_4889; // 0x1316 JumpB
	var_33_bool = 1; // 0x1317 MovB
	return 4; // 0x1318 Return
	
Label_4889:
	var_55_string = "rat"; // 0x1319 PushS
	var_56_bool = var_39_string == var_55_string; // 0x131a Eq
	if(var_56_bool == 0) goto Label_4895; // 0x131b JumpB
	var_33_bool = 0; // 0x131c MovB
	return 4; // 0x131d Return
	
Label_4895:
	var_57_string = "rat_big"; // 0x131f PushS
	var_58_bool = var_39_string == var_57_string; // 0x1320 Eq
	if(var_58_bool == 0) goto Label_4901; // 0x1321 JumpB
	var_33_bool = 0; // 0x1322 MovB
	return 4; // 0x1323 Return
	
Label_4901:
	var_59_string = "dog"; // 0x1325 PushS
	var_60_bool = var_39_string == var_59_string; // 0x1326 Eq
	if(var_60_bool == 0) goto Label_4907; // 0x1327 JumpB
	var_33_bool = 0; // 0x1328 MovB
	return 4; // 0x1329 Return
	
Label_4907:
	var_61_string = "grabitel"; // 0x132b PushS
	var_62_bool = var_39_string == var_61_string; // 0x132c Eq
	if(var_62_bool == 0) goto Label_4913; // 0x132d JumpB
	var_33_bool = 0; // 0x132e MovB
	return 4; // 0x132f Return
	
Label_4913:
	var_63_string = "bomber"; // 0x1331 PushS
	var_64_bool = var_39_string == var_63_string; // 0x1332 Eq
	if(var_64_bool == 0) goto Label_4919; // 0x1333 JumpB
	var_33_bool = 0; // 0x1334 MovB
	return 4; // 0x1335 Return
	
Label_4919:
	var_65_string = "sanitar"; // 0x1337 PushS
	var_66_bool = var_39_string == var_65_string; // 0x1338 Eq
	if(var_66_bool == 0) goto Label_4925; // 0x1339 JumpB
	var_33_bool = 0; // 0x133a MovB
	return 4; // 0x133b Return
	
Label_4925:
	var_67_string = "hunter"; // 0x133d PushS
	var_68_bool = var_39_string == var_67_string; // 0x133e Eq
	if(var_68_bool == 0) goto Label_4931; // 0x133f JumpB
	var_33_bool = 0; // 0x1340 MovB
	return 4; // 0x1341 Return
	
Label_4931:
	var_69_string = "soldier"; // 0x1343 PushS
	var_70_bool = var_39_string == var_69_string; // 0x1344 Eq
	if(var_70_bool == 0) goto Label_4936; // 0x1345 JumpB
	var_33_bool = 0; // 0x1346 MovB
	return 4; // 0x1347 Return
	
Label_4936:
	var_33_bool = 1; // 0x1348 MovB
	return 4; // 0x1349 Return
}


func_2817(var_1_object, var_2_object, var_4_bool)
{
	var_133_bool = 0; var_134_bool = 0; var_135_cvector = CVector(0,0,0); var_136_bool = 0; var_137_bool = 0; var_138_cvector = CVector(0,0,0); // 0xb01 PushV
	var_1_object = 0; // 0xb02 TMovI
	
Label_2819:
	var_139_string = "all"; // 0xb03 PushS
	var_140_string = "attack_begin"; // 0xb04 PushS
	var_141_int = 1; // 0xb05 PushI
	var_142_int = var_1_object + var_141_int; // 0xb06 Add
	var_143_int = var_140_string + var_142_int; // 0xb07 Add
	HasAnimation(var_136_bool, var_139_string, var_143_int); // 0xb08 Func
	var_144_bool = var_136_bool == 0; // 0xb0a Not
	if(var_144_bool == 0) goto Label_2829; // 0xb0b JumpB
	goto Label_2832; // 0xb0c Jump
	
Label_2832:
	var_2_object = 0; // 0xb10 TMovI
	
Label_2833:
	var_145_string = "attack"; // 0xb11 PushS
	var_146_int = 1; // 0xb12 PushI
	var_147_int = var_2_object + var_146_int; // 0xb13 Add
	var_148_int = var_145_string + var_147_int; // 0xb14 Add
	IsExisting3DSound(var_137_bool, var_148_int); // 0xb15 Func
	var_149_bool = var_137_bool == 0; // 0xb17 Not
	if(var_149_bool == 0) goto Label_2842; // 0xb18 JumpB
	goto Label_2845; // 0xb19 Jump
	
Label_2845:
	var_150_string = "all"; // 0xb1d PushS
	var_151_string = "bjump"; // 0xb1e PushS
	GetAnimationOffset(var_138_cvector, var_150_string, var_151_string); // 0xb1f Func
	var_152_float = GetByIndex(var_138_cvector, 2); // 0xb21 PushE
	var_4_bool = -var_152_float; // 0xb22 Neg2
	return 6; // 0xb23 Return
	
Label_2842:
	var_153_int = 1; // 0xb1a PushI
	var_2_object = var_2_object + var_153_int; // 0xb1b Add2
	goto Label_2833; // 0xb1c Jump
	
Label_2829:
	var_154_int = 1; // 0xb0d PushI
	var_1_object = var_1_object + var_154_int; // 0xb0e Add2
	goto Label_2819; // 0xb0f Jump
}


func_2309(var_0_object, var_1_object)
{
	var_0_object = 1; // 0x905 TMovB
	var_1_object = 1; // 0x906 TMovB
	Stop(); // 0x907 Func
	StopGroup0(); // 0x909 Func
	return 0; // 0x90b Return
}


func_1799(var_19_object)
{
	EventDisable(0); // 0x708 EventDisable
	var_20_object = Obj(); // 0x709 PushV
	var_20_object = var_19_object; // 0x70a Mov
	func_1832(var_20_object); // 0x70b NEW_2
	var_100_object = Obj(); // 0x70d PushV
	var_100_object = var_19_object; // 0x70e Mov
	func_5298(var_100_object); // 0x70f NEW_2
	EventEnable(0); // 0x711 EventEnable
	
Label_1810:
	Hold(); // 0x712 Func
	goto Label_1810; // 0x714 Jump
}


func_2316(var_48_bool)
{
	var_48_bool = 0; // 0x90c MovB
	return 0; // 0x90d Return
}


func_2318(var_42_object, var_43_cvector)
{
	var_44_object = Obj(); var_45_object = Obj(); // 0x90e PushV
	FindShiftedPathTo(var_45_object, var_43_cvector); // 0x90f Func
	var_42_object = var_45_object; // 0x911 Mov
	return 2; // 0x912 Return
}


func_4367(var_32_object)
{
	var_33_int = 0; // 0x1110 PushV
	func_4292(var_33_int); // 0x1111 NEW_2
	var_37_int = 1; // 0x1113 PushI
	var_38_bool = var_33_int == var_37_int; // 0x1114 Eq
	if(var_38_bool == 0) goto Label_4377; // 0x1115 JumpB
	WorkWithCorpse(var_32_object); // 0x1116 Func
	goto Label_4379; // 0x1118 Jump
	
Label_4379:
	return 0; // 0x111b Return
	
Label_4377:
	Barter(var_32_object); // 0x1119 Func
}


func_4380(var_116_int, var_117_int)
{
	var_127_int = 0; var_128_bool = 0; var_129_int = 0; var_130_bool = 0; // 0x111c PushV
	var_131_bool = var_116_int > var_117_int; // 0x111d GT
	if(var_131_bool == 0) goto Label_4387; // 0x111e JumpB
	var_132_string = "GenerateMoney: iMin > iMax"; // 0x111f PushS
	Trace(var_132_string); // 0x1120 Func
	return 4; // 0x1122 Return
	
Label_4387:
	var_129_int = 0; // 0x1123 MovI
	var_133_bool = var_116_int != var_117_int; // 0x1124 Neq
	if(var_133_bool == 0) goto Label_4394; // 0x1125 JumpB
	var_134_int = var_117_int - var_116_int; // 0x1126 Sub
	irand(var_129_int, var_134_int); // 0x1127 Func
	goto Label_4398; // 0x1129 Jump
	
Label_4398:
	var_129_int = var_129_int + var_116_int; // 0x112e Add2
	var_135_int = 0; // 0x112f PushI
	var_136_bool = var_129_int == var_135_int; // 0x1130 Eq
	if(var_136_bool == 0) goto Label_4403; // 0x1131 JumpB
	return 4; // 0x1132 Return
	
Label_4403:
	var_137_int = 0; var_138_string = ""; // 0x1133 PushV
	var_138_string = "Money"; // 0x1134 MovS
	func_4627(var_137_int, var_138_string); // 0x1135 NEW_2
	var_141_int = 0; // 0x1137 PushI
	AddItem(var_130_bool, var_137_int, var_141_int, var_129_int); // 0x1138 Func
	return 4; // 0x113a Return
	
Label_4394:
	var_142_int = 0; // 0x112a PushI
	var_143_bool = var_116_int == var_142_int; // 0x112b Eq
	if(var_143_bool == 0) goto Label_4398; // 0x112c JumpB
	return 4; // 0x112d Return
}


func_3362(var_0_object, var_1_object, var_208_bool, var_209_object, var_210_float, var_211_float, var_212_bool, var_213_bool)
{
	var_214_bool = 0; var_215_bool = 0; var_216_object = Obj(); var_217_cvector = CVector(0,0,0); var_218_cvector = CVector(0,0,0); var_219_cvector = CVector(0,0,0); var_220_float = 0; var_221_object = Obj(); var_222_bool = 0; var_223_bool = 0; var_224_object = Obj(); var_225_cvector = CVector(0,0,0); var_226_cvector = CVector(0,0,0); var_227_cvector = CVector(0,0,0); var_228_float = 0; var_229_object = Obj(); // 0xd22 PushV
	var_0_object = 0; // 0xd23 TMovB
	var_1_object = var_209_object; // 0xd24 TMov
	var_223_bool = var_213_bool; // 0xd25 Mov
	
Label_3366:
	var_230_bool = 0; var_231_object = Obj(); // 0xd26 PushV
	var_231_object = var_209_object; // 0xd27 Mov
	func_3502(var_230_bool, var_231_object); // 0xd28 NEW_2
	var_234_bool = var_230_bool == 0; // 0xd2a Not
	if(var_234_bool == 0) goto Label_3374; // 0xd2b JumpB
	var_208_bool = 0; // 0xd2c MovB
	return 16; // 0xd2d Return
	
Label_3374:
	GetPosition(var_225_cvector); // 0xd2e ObjFunc
	GetPosition(var_226_cvector); // 0xd30 Func
	var_227_cvector = var_225_cvector - var_226_cvector; // 0xd32 Sub2
	var_228_float = var_227_cvector | var_227_cvector; // 0xd33 Or2
	var_235_bool = 0; // 0xd34 PushV
	var_235_bool = 0; // 0xd35 MovB
	var_236_int = 0; // 0xd36 PushI
	var_237_bool = var_211_float > var_236_int; // 0xd37 GT
	if(var_237_bool == 0) goto Label_3389; // 0xd38 JumpB
	var_238_float = var_211_float * var_211_float; // 0xd39 Mult
	var_239_bool = var_228_float > var_238_float; // 0xd3a GT
	if(var_239_bool == 0) goto Label_3389; // 0xd3b JumpB
	var_235_bool = 1; // 0xd3c MovB
	
Label_3389:
	if(var_235_bool == 0) goto Label_3394; // 0xd3d JumpB
	Stop(); // 0xd3e Func
	var_208_bool = 0; // 0xd40 MovB
	return 16; // 0xd41 Return
	
Label_3394:
	var_240_float = var_210_float * var_210_float; // 0xd42 Mult
	var_241_bool = var_228_float > var_240_float; // 0xd43 GT
	if(var_241_bool == 0) goto Label_3456; // 0xd44 JumpB
	GetPFPosition(var_225_cvector); // 0xd45 ObjFunc
	FindPathTo(var_229_object, var_225_cvector); // 0xd47 Func
	var_242_bool = var_229_object != 0; // 0xd49 NullNeq
	if(var_242_bool == 0) goto Label_3405; // 0xd4a JumpB
	var_224_object = var_229_object; // 0xd4b Mov
	var_229_object = 0; // 0xd4c SetNull
	
Label_3405:
	var_243_bool = var_224_object != 0; // 0xd4d NullNeq
	if(var_243_bool == 0) goto Label_3438; // 0xd4e JumpB
	var_244_bool = var_223_bool; // 0xd4f Push
	if(var_244_bool == 0) goto Label_3415; // 0xd50 JumpB
	var_223_bool = 0; // 0xd51 MovB
	RotatePath(var_224_object, var_222_bool); // 0xd52 Func
	var_245_bool = var_222_bool == 0; // 0xd54 Not
	if(var_245_bool == 0) goto Label_3415; // 0xd55 JumpB
	goto Label_3462; // 0xd56 Jump
	
Label_3462:
	var_208_bool = !var_0_object; // 0xd86 Not2
	return 16; // 0xd87 Return
	
Label_3415:
	var_246_int = 0; // 0xd57 PushI
	var_247_float = 0.3; // 0xd58 PushF
	SetTimer(var_246_int, var_247_float); // 0xd59 Func
	var_248_string = ""; // 0xd5b PushV
	func_3509(var_248_string); // 0xd5c NEW_2
	var_249_string = ""; // 0xd5e PushV
	func_3511(var_249_string); // 0xd5f NEW_2
	FollowPath(var_224_object, var_212_bool, var_222_bool, var_248_string, var_249_string); // 0xd61 Func
	var_250_bool = var_222_bool == 0; // 0xd63 Not
	if(var_250_bool == 0) goto Label_3436; // 0xd64 JumpB
	var_251_object = var_0_object; // 0xd65 PushT
	if(var_251_object == 0) goto Label_3434; // 0xd66 JumpB
	var_224_object = 0; // 0xd67 SetNull
	goto Label_3462; // 0xd68 Jump
	
Label_3434:
	goto Label_3461; // 0xd6a Jump
	
Label_3461:
	goto Label_3366; // 0xd85 Jump
	
Label_3436:
	var_224_object = 0; // 0xd6c SetNull
	goto Label_3454; // 0xd6d Jump
	
Label_3454:
	var_229_object = 0; // 0xd7e SetNull
	goto Label_3460; // 0xd7f Jump
	
Label_3460:
	var_224_object = 0; // 0xd84 SetNull
	
Label_3438:
	var_252_int = 0; // 0xd6e PushI
	KillTimer(var_252_int); // 0xd6f Func
	var_253_float = 0.5; // 0xd71 PushF
	Sleep(var_253_float, var_222_bool); // 0xd72 Func
	var_254_bool = var_222_bool == 0; // 0xd74 Not
	if(var_254_bool == 0) goto Label_3450; // 0xd75 JumpB
	var_255_object = var_0_object; // 0xd76 PushT
	if(var_255_object == 0) goto Label_3450; // 0xd77 JumpB
	var_224_object = 0; // 0xd78 SetNull
	goto Label_3462; // 0xd79 Jump
	
Label_3450:
	var_256_int = 0; // 0xd7a PushI
	var_257_float = 0.3; // 0xd7b PushF
	SetTimer(var_256_int, var_257_float); // 0xd7c Func
	
Label_3456:
	var_258_int = 0; // 0xd80 PushI
	KillTimer(var_258_int); // 0xd81 Func
	goto Label_3462; // 0xd83 Jump
}


func_2852(var_0_object, var_434_float, var_435_int)
{
	var_436_object = Obj(); var_437_float = 0; var_438_float = 0; var_439_object = Obj(); var_440_float = 0; var_441_float = 0; // 0xb24 PushV
	var_442_float = 0.9; // 0xb25 PushF
	var_443_float = var_434_float * var_442_float; // 0xb26 Mult
	GetVictim(var_443_float, var_439_object); // 0xb27 Func
	ReportAttack(var_0_object); // 0xb29 Func
	var_444_bool = var_439_object == var_0_object; // 0xb2b Eq
	if(var_444_bool == 0) goto Label_2889; // 0xb2c JumpB
	var_445_float = 0; var_446_object = Obj(); var_447_int = 0; // 0xb2d PushV
	var_446_object = var_439_object; // 0xb2e Mov
	var_447_int = var_435_int; // 0xb2f Mov
	func_2582(var_447_int); // 0xb30 NEW_2
	var_440_float = var_445_float; // 0xb31 Mov
	var_448_float = 0; var_449_object = Obj(); var_450_float = 0; var_451_int = 0; // 0xb33 PushV
	var_449_object = var_439_object; // 0xb34 Mov
	var_450_float = var_440_float; // 0xb35 Mov
	var_452_int = 0; var_453_object = Obj(); var_454_int = 0; // 0xb36 PushV
	var_453_object = var_439_object; // 0xb37 Mov
	var_454_int = var_435_int; // 0xb38 Mov
	func_2585(var_454_int); // 0xb39 NEW_2
	var_451_int = var_452_int; // 0xb3a Mov
	func_3559(var_448_float, var_449_object, var_450_float, var_451_int); // 0xb3c NEW_2
	var_441_float = var_448_float; // 0xb3d Mov
	var_509_int = 0; // 0xb3f PushV
	func_3235(var_509_int); // 0xb40 NEW_2
	ReportHit(var_0_object, var_509_int, var_441_float, var_440_float); // 0xb42 Func
	var_510_object = Obj(); var_511_float = 0; // 0xb44 PushV
	var_510_object = var_439_object; // 0xb45 Mov
	var_511_float = var_441_float; // 0xb46 Mov
	func_3242(); // 0xb47 NEW_2
	
Label_2889:
	return 6; // 0xb49 Return
}


func_1832(var_20_object)
{
	var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_string = ""; var_26_object = Obj(); var_27_bool = 0; var_28_bool = 0; var_29_float = 0; var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_string = ""; var_36_object = Obj(); var_37_bool = 0; var_38_bool = 0; var_39_float = 0; var_40_cvector = CVector(0,0,0); // 0x728 PushV
	var_41_bool = var_20_object == 0; // 0x729 NullEq
	if(var_41_bool == 0) goto Label_1840; // 0x72a JumpB
	var_42_string = ""; // 0x72b PushV
	var_42_string = "fdie"; // 0x72c MovS
	func_1923(var_42_string); // 0x72d NEW_2
	goto Label_1922; // 0x72f Jump
	
Label_1922:
	return 20; // 0x782 Return
	
Label_1840:
	GetPosition(var_31_cvector); // 0x730 ObjFunc
	GetPosition(var_32_cvector); // 0x732 Func
	GetDirection(var_33_cvector); // 0x734 Func
	var_34_cvector = var_32_cvector - var_31_cvector; // 0x736 Sub2
	var_74_float = GetByIndex(var_34_cvector, 0); // 0x737 PushE
	var_75_float = GetByIndex(var_33_cvector, 0); // 0x738 PushE
	var_76_float = var_74_float * var_75_float; // 0x739 Mult
	var_77_float = GetByIndex(var_34_cvector, 2); // 0x73a PushE
	var_78_float = GetByIndex(var_33_cvector, 2); // 0x73b PushE
	var_79_float = var_77_float * var_78_float; // 0x73c Mult
	var_80_int = var_76_float + var_79_float; // 0x73d Add
	var_81_int = 0; // 0x73e PushI
	var_82_bool = var_80_int >= var_81_int; // 0x73f GE
	if(var_82_bool == 0) goto Label_1859; // 0x740 JumpB
	var_35_string = "fdie"; // 0x741 MovS
	goto Label_1860; // 0x742 Jump
	
Label_1860:
	RemoveRTEnvelope(); // 0x744 Func
	SetDeathState(); // 0x746 Func
	Stop(); // 0x748 Func
	StopAsync(); // 0x74a Func
	var_36_object = var_20_object; // 0x74c Mov
	var_83_string = "GetScriptProperty"; // 0x74d PushS
	var_84_int = 2; // 0x74e PushI
	var_85_bool = IsFuncExist(var_20_object, var_83_string, var_84_int); // 0x74f FuncExist
	if(var_85_bool == 0) goto Label_1884; // 0x750 JumpB
	var_86_string = "Owner"; // 0x751 PushS
	HasScriptProperty(var_37_bool, var_86_string); // 0x752 ObjFunc
	var_87_bool = var_37_bool; // 0x754 Push
	if(var_87_bool == 0) goto Label_1884; // 0x755 JumpB
	var_88_string = "Owner"; // 0x756 PushS
	GetScriptProperty(var_36_object, var_88_string); // 0x757 ObjFunc
	var_89_bool = var_36_object == 0; // 0x759 NullEq
	if(var_89_bool == 0) goto Label_1884; // 0x75a JumpB
	var_36_object = var_20_object; // 0x75b Mov
	
Label_1884:
	var_90_string = "@GetEyesHeight"; // 0x75c PushS
	var_91_int = 1; // 0x75d PushI
	var_92_bool = IsFuncExist(var_36_object, var_90_string, var_91_int); // 0x75e FuncExist
	if(var_92_bool == 0) goto Label_1899; // 0x75f JumpB
	GetEyesHeight(var_39_float); // 0x760 ObjFunc
	var_40_cvector = CVector(0.0, 0.0, 0.0); // 0x762 MovV
	var_93_float = GetByIndex(var_40_cvector, 1); // 0x763 PushE
	var_93_float = var_39_float; // 0x764 Mov
	SetByIndex(var_40_cvector, 1) = var_93_float; // 0x765 PopE
	var_94_string = "head"; // 0x766 PushS
	LookAsync(var_20_object, var_94_string, var_40_cvector); // 0x767 Func
	var_38_bool = 1; // 0x769 MovB
	goto Label_1900; // 0x76a Jump
	
Label_1900:
	var_95_string = ""; // 0x76c PushV
	var_95_string = var_35_string; // 0x76d Mov
	func_3973(var_95_string); // 0x76e NEW_2
	var_96_string = "all"; // 0x770 PushS
	PlayAnimation(var_96_string, var_35_string); // 0x771 Func
	WaitForAnimEnd(); // 0x773 Func
	var_97_bool = var_38_bool; // 0x775 Push
	if(var_97_bool == 0) goto Label_1916; // 0x776 JumpB
	StopAsync(); // 0x777 Func
	var_98_string = "head"; // 0x779 PushS
	UnlookAsync(var_98_string); // 0x77a Func
	
Label_1916:
	var_99_string = "all"; // 0x77c PushS
	LockAnimationEnd(var_99_string, var_35_string); // 0x77d Func
	RemoveEnvelope(); // 0x77f Func
	var_36_object = 0; // 0x781 SetNull
	
Label_1899:
	var_38_bool = 0; // 0x76b MovB
	
Label_1859:
	var_35_string = "bdie"; // 0x743 MovS
}


func_4411(var_230_string)
{
	var_231_object = Obj(); var_232_int = 0; var_233_bool = 0; var_234_object = Obj(); var_235_int = 0; var_236_bool = 0; // 0x113b PushV
	CreateInvItem(var_234_object); // 0x113c Func
	SetItemName(var_230_string); // 0x113e ObjFunc
	var_237_string = "Organ"; // 0x1140 PushS
	var_238_int = 1; // 0x1141 PushI
	SetProperty(var_237_string, var_238_int); // 0x1142 ObjFunc
	GetItemID(var_235_int); // 0x1144 ObjFunc
	var_239_int = 0; // 0x1146 PushI
	var_240_int = 1; // 0x1147 PushI
	AddItem(var_236_bool, var_234_object, var_239_int, var_240_int); // 0x1148 Func
	return 6; // 0x114a Return
}


func_3907()
{
	var_303_bool = 0; var_304_bool = 0; // 0xf43 PushV
	CameraSwitchToNormal(); // 0xf44 Func
	var_305_bool = 0; // 0xf46 PushV
	func_5239(var_305_bool); // 0xf47 NEW_2
	if(var_305_bool == 0) goto Label_3915; // 0xf49 JumpB
	goto Label_3923; // 0xf4a Jump
	
Label_3923:
	return 2; // 0xf53 Return
	
Label_3915:
	var_306_string = "head"; // 0xf4b PushS
	HasAnimationTrack(var_304_bool, var_306_string); // 0xf4c Func
	var_307_bool = var_304_bool; // 0xf4e Push
	if(var_307_bool == 0) goto Label_3923; // 0xf4f JumpB
	var_308_string = "head"; // 0xf50 PushS
	UnlookAsync(var_308_string); // 0xf51 Func
}


func_323(var_2_object, var_138_string)
{
	var_139_bool = 0; // 0x144 PushV
	func_5239(var_139_bool); // 0x145 NEW_2
	var_140_bool = var_139_bool == 0; // 0x147 Not
	if(var_140_bool == 0) goto Label_330; // 0x148 JumpB
	return 0; // 0x149 Return
	
Label_330:
	var_141_bool = var_138_string == var_2_object; // 0x14a Eq
	if(var_141_bool == 0) goto Label_333; // 0x14b JumpB
	return 0; // 0x14c Return
	
Label_333:
	var_142_string = ""; var_143_bool = 0; // 0x14d PushV
	var_142_string = var_138_string; // 0x14e Mov
	var_144_string = ""; // 0x14f PushS
	var_145_bool = var_138_string == var_144_string; // 0x150 Eq
	if(var_145_bool == 0) goto Label_340; // 0x151 JumpB
	var_143_bool = 0; // 0x152 MovB
	goto Label_341; // 0x153 Jump
	
Label_341:
	func_3940(var_142_string, var_143_bool); // 0x155 NEW_2
	var_2_object = var_138_string; // 0x157 TMov
	return 0; // 0x158 Return
	
Label_340:
	var_143_bool = 1; // 0x154 MovB
}


func_4938(var_84_int, var_85_object)
{
	var_87_int = 0; var_88_object = Obj(); // 0x134b PushV
	var_88_object = var_85_object; // 0x134c Mov
	func_4845(var_87_int, var_88_object); // 0x134d NEW_2
	var_84_int = var_87_int; // 0x134e Mov
	return 0; // 0x1350 Return
}


func_2891(var_0_object, var_397_bool, var_398_float)
{
	var_399_int = 0; var_400_bool = 0; var_401_int = 0; var_402_string = ""; var_403_int = 0; var_404_bool = 0; var_405_int = 0; var_406_string = ""; // 0xb4b PushV
	func_3230(var_406_string); // 0xb4d NEW_2
	irand(var_403_int, var_406_string); // 0xb4f Func
	var_407_int = 1; // 0xb51 PushI
	var_403_int = var_403_int + var_407_int; // 0xb52 Add2
	Face(var_0_object); // 0xb53 Func
	var_408_bool = 1; // 0xb55 PushB
	SetAttackState(var_408_bool); // 0xb56 Func
	func_4087(); // 0xb59 NEW_2
	var_413_string = "all"; // 0xb5b PushS
	var_414_string = "attack_begin"; // 0xb5c PushS
	var_415_int = var_414_string + var_403_int; // 0xb5d Add
	PlayAnimation(var_413_string, var_415_int); // 0xb5e Func
	WaitForAnimEnd(); // 0xb60 Func
	func_3198(var_405_int, var_406_string); // 0xb63 NEW_2
	var_431_bool = 0; var_432_object = Obj(); // 0xb65 PushV
	var_432_object = var_0_object; // 0xb66 MovT
	func_3673(var_431_bool, var_432_object); // 0xb67 NEW_2
	var_433_bool = var_431_bool == 0; // 0xb69 Not
	if(var_433_bool == 0) goto Label_2927; // 0xb6a JumpB
	StopAsync(); // 0xb6b Func
	var_397_bool = 0; // 0xb6d MovB
	return 8; // 0xb6e Return
	
Label_2927:
	var_434_float = 0; var_435_int = 0; // 0xb6f PushV
	var_434_float = var_398_float; // 0xb70 Mov
	var_435_int = var_403_int; // 0xb71 Mov
	func_2852(var_406_string, var_434_float, var_435_int); // 0xb72 NEW_2
	var_512_string = "all"; // 0xb74 PushS
	var_513_string = "attack_middle"; // 0xb75 PushS
	var_514_int = var_513_string + var_403_int; // 0xb76 Add
	HasAnimation(var_404_bool, var_512_string, var_514_int); // 0xb77 Func
	var_515_bool = var_404_bool; // 0xb79 Push
	if(var_515_bool == 0) goto Label_3008; // 0xb7a JumpB
	func_4087(); // 0xb7c NEW_2
	var_516_string = "all"; // 0xb7e PushS
	var_517_string = "attack_middle"; // 0xb7f PushS
	var_518_int = var_517_string + var_403_int; // 0xb80 Add
	PlayAnimation(var_516_string, var_518_int); // 0xb81 Func
	WaitForAnimEnd(); // 0xb83 Func
	func_3230(var_406_string); // 0xb86 NEW_2
	var_519_bool = 0; var_520_object = Obj(); // 0xb88 PushV
	var_520_object = var_0_object; // 0xb89 MovT
	func_3673(var_519_bool, var_520_object); // 0xb8a NEW_2
	var_521_bool = var_519_bool == 0; // 0xb8c Not
	if(var_521_bool == 0) goto Label_2962; // 0xb8d JumpB
	StopAsync(); // 0xb8e Func
	var_397_bool = 0; // 0xb90 MovB
	return 8; // 0xb91 Return
	
Label_2962:
	var_522_float = 0; var_523_int = 0; // 0xb92 PushV
	var_522_float = var_398_float; // 0xb93 Mov
	var_523_int = var_403_int; // 0xb94 Mov
	func_2852(var_406_string, var_522_float, var_523_int); // 0xb95 NEW_2
	var_405_int = 1; // 0xb97 MovI
	
Label_2968:
	var_524_string = "attack_middle"; // 0xb98 PushS
	var_525_int = var_524_string + var_403_int; // 0xb99 Add
	var_526_string = "_"; // 0xb9a PushS
	var_527_int = var_525_int + var_526_string; // 0xb9b Add
	var_406_string = var_527_int + var_405_int; // 0xb9c Add2
	var_528_string = "all"; // 0xb9d PushS
	HasAnimation(var_404_bool, var_528_string, var_406_string); // 0xb9e Func
	var_529_bool = var_404_bool == 0; // 0xba0 Not
	if(var_529_bool == 0) goto Label_2979; // 0xba1 JumpB
	goto Label_3008; // 0xba2 Jump
	
Label_3008:
	var_530_bool = 0; // 0xbc0 PushB
	SetAttackState(var_530_bool); // 0xbc1 Func
	var_531_string = "all"; // 0xbc3 PushS
	var_532_string = "attack_end"; // 0xbc4 PushS
	var_533_int = var_532_string + var_403_int; // 0xbc5 Add
	PlayAnimation(var_531_string, var_533_int); // 0xbc6 Func
	var_534_bool = 0; // 0xbc8 PushV
	func_3244(var_534_bool); // 0xbc9 NEW_2
	if(var_534_bool == 0) goto Label_3026; // 0xbcb JumpB
	var_535_bool = 0; var_536_float = 0; // 0xbcc PushV
	var_536_float = 0.75; // 0xbcd MovF
	func_3028(var_535_bool, var_536_float); // 0xbce NEW_2
	StopAsync(); // 0xbd0 Func
	
Label_3026:
	var_397_bool = 1; // 0xbd2 MovB
	return 8; // 0xbd3 Return
	
Label_2979:
	func_4087(); // 0xba4 NEW_2
	var_544_string = "all"; // 0xba6 PushS
	PlayAnimation(var_544_string, var_406_string); // 0xba7 Func
	WaitForAnimEnd(); // 0xba9 Func
	func_3230(var_406_string); // 0xbac NEW_2
	var_545_bool = 0; var_546_object = Obj(); // 0xbae PushV
	var_546_object = var_0_object; // 0xbaf MovT
	func_3673(var_545_bool, var_546_object); // 0xbb0 NEW_2
	var_547_bool = var_545_bool == 0; // 0xbb2 Not
	if(var_547_bool == 0) goto Label_3000; // 0xbb3 JumpB
	StopAsync(); // 0xbb4 Func
	var_397_bool = 0; // 0xbb6 MovB
	return 8; // 0xbb7 Return
	
Label_3000:
	var_548_float = 0; var_549_int = 0; // 0xbb8 PushV
	var_548_float = var_398_float; // 0xbb9 Mov
	var_549_int = var_403_int; // 0xbba Mov
	func_2852(var_406_string, var_548_float, var_549_int); // 0xbbb NEW_2
	var_550_int = 1; // 0xbbd PushI
	var_405_int = var_405_int + var_550_int; // 0xbbe Add2
	goto Label_2968; // 0xbbf Jump
}


func_4428()
{
	var_224_int = 0; // 0x114c PushV
	func_4292(var_224_int); // 0x114d NEW_2
	var_228_int = 1; // 0x114f PushI
	var_229_bool = var_224_int != var_228_int; // 0x1150 Neq
	if(var_229_bool == 0) goto Label_4435; // 0x1151 JumpB
	return 0; // 0x1152 Return
	
Label_4435:
	var_230_string = ""; // 0x1153 PushV
	var_230_string = "liver"; // 0x1154 MovS
	func_4411(var_230_string); // 0x1155 NEW_2
	var_241_string = ""; // 0x1157 PushV
	var_241_string = "kidney"; // 0x1158 MovS
	func_4411(var_241_string); // 0x1159 NEW_2
	var_242_string = ""; // 0x115b PushV
	var_242_string = "heart"; // 0x115c MovS
	func_4411(var_242_string); // 0x115d NEW_2
	var_243_string = ""; // 0x115f PushV
	var_243_string = "blood"; // 0x1160 MovS
	func_4411(var_243_string); // 0x1161 NEW_2
	return 0; // 0x1163 Return
}


func_4945(var_121_object)
{
	var_122_object = Obj(); // 0x1352 PushV
	var_122_object = var_121_object; // 0x1353 Mov
	func_4855(var_122_object); // 0x1354 NEW_2
	return 0; // 0x1356 Return
}


func_3924(var_250_string)
{
	var_251_bool = 0; var_252_float = 0; var_253_float = 0; var_254_bool = 0; var_255_float = 0; var_256_float = 0; // 0xf54 PushV
	lshHasAnimation(var_254_bool, var_250_string); // 0xf55 Func
	var_257_bool = var_254_bool; // 0xf57 Push
	if(var_257_bool == 0) goto Label_3935; // 0xf58 JumpB
	lshGetAnimTimes(var_250_string, var_255_float, var_256_float); // 0xf59 Func
	var_258_bool = 0; // 0xf5b PushB
	lshPlayAnimation(var_255_float, var_256_float, var_258_bool); // 0xf5c Func
	goto Label_3939; // 0xf5e Jump
	
Label_3939:
	return 6; // 0xf63 Return
	
Label_3935:
	var_259_string = "Can't find lsh animation : "; // 0xf5f PushS
	var_260_int = var_259_string + var_250_string; // 0xf60 Add
	Trace(var_260_int); // 0xf61 Func
}


func_4951(var_26_bool, var_27_object, var_28_object, var_29_float, var_30_bool)
{
	var_31_bool = 0; var_32_bool = 0; // 0x1357 PushV
	var_33_bool = 0; var_34_object = Obj(); var_35_bool = 0; // 0x1358 PushV
	var_34_object = var_28_object; // 0x1359 Mov
	var_35_bool = !var_30_bool; // 0x135a Not2
	func_4863(var_33_bool, var_34_object, var_35_bool); // 0x135b NEW_2
	var_71_bool = var_33_bool == 0; // 0x135d Not
	if(var_71_bool == 0) goto Label_4961; // 0x135e JumpB
	var_26_bool = 0; // 0x135f MovB
	return 2; // 0x1360 Return
	
Label_4961:
	CanSee(var_32_bool, var_27_object); // 0x1361 Func
	var_72_bool = 0; // 0x1363 PushV
	var_72_bool = 1; // 0x1364 MovB
	var_73_bool = var_32_bool; // 0x1365 Push
	if(var_73_bool == 0) goto Label_4975; // 0x1366 JumpB
	var_74_float = 0; var_75_object = Obj(); // 0x1367 PushV
	var_75_object = var_27_object; // 0x1368 Mov
	func_3534(var_75_object); // 0x1369 NEW_2
	var_82_float = var_29_float * var_29_float; // 0x136b Mult
	var_83_bool = var_74_float <= var_82_float; // 0x136c LE
	if(var_83_bool == 0) goto Label_4975; // 0x136d JumpB
	var_72_bool = 0; // 0x136e MovB
	
Label_4975:
	if(var_72_bool == 0) goto Label_4978; // 0x136f JumpB
	var_26_bool = 1; // 0x1370 MovB
	return 2; // 0x1371 Return
	
Label_4978:
	var_26_bool = 0; // 0x1372 MovB
	return 2; // 0x1373 Return
}


func_3940(var_142_string, var_143_bool)
{
	var_146_bool = 0; var_147_float = 0; var_148_float = 0; var_149_bool = 0; var_150_float = 0; var_151_float = 0; // 0xf64 PushV
	lshHasAnimation(var_149_bool, var_142_string); // 0xf65 Func
	var_152_bool = var_149_bool; // 0xf67 Push
	if(var_152_bool == 0) goto Label_3950; // 0xf68 JumpB
	lshGetAnimTimes(var_142_string, var_150_float, var_151_float); // 0xf69 Func
	lshPlayAnimation(var_150_float, var_151_float, var_143_bool); // 0xf6b Func
	goto Label_3954; // 0xf6d Jump
	
Label_3954:
	return 6; // 0xf72 Return
	
Label_3950:
	var_153_string = "Can't find lsh animation : "; // 0xf6e PushS
	var_154_int = var_153_string + var_142_string; // 0xf6f Add
	Trace(var_154_int); // 0xf70 Func
}


func_4452(var_110_bool)
{
	var_111_int = 0; var_112_bool = 0; var_113_int = 0; var_114_bool = 0; // 0x1164 PushV
	var_115_bool = var_110_bool; // 0x1165 Push
	if(var_115_bool == 0) goto Label_4541; // 0x1166 JumpB
	var_116_int = 0; var_117_int = 0; // 0x1167 PushV
	var_116_int = 0; // 0x1168 MovI
	var_118_int = 100; // 0x1169 PushI
	var_119_int = 0; // 0x116a PushV
	func_4069(var_119_int); // 0x116b NEW_2
	var_125_int = 100; // 0x116d PushI
	var_126_float = var_119_int * var_125_int; // 0x116e Mult
	var_117_int = var_118_int + var_126_float; // 0x116f Add2
	func_4380(var_116_int, var_117_int); // 0x1170 NEW_2
	var_144_int = 8; // 0x1172 PushI
	irand(var_113_int, var_144_int); // 0x1173 Func
	var_145_int = 0; // 0x1175 PushI
	var_146_bool = var_113_int == var_145_int; // 0x1176 Eq
	if(var_146_bool == 0) goto Label_4481; // 0x1177 JumpB
	var_147_int = 0; var_148_string = ""; // 0x1178 PushV
	var_148_string = "lemon"; // 0x1179 MovS
	func_4627(var_147_int, var_148_string); // 0x117a NEW_2
	var_149_int = 0; // 0x117c PushI
	var_150_int = 1; // 0x117d PushI
	AddItem(var_114_bool, var_147_int, var_149_int, var_150_int); // 0x117e Func
	goto Label_4540; // 0x1180 Jump
	
Label_4540:
	goto Label_4626; // 0x11bc Jump
	
Label_4626:
	return 4; // 0x1212 Return
	
Label_4481:
	var_151_int = 1; // 0x1181 PushI
	var_152_bool = var_113_int == var_151_int; // 0x1182 Eq
	if(var_152_bool == 0) goto Label_4493; // 0x1183 JumpB
	var_153_int = 0; var_154_string = ""; // 0x1184 PushV
	var_154_string = "rusk"; // 0x1185 MovS
	func_4627(var_153_int, var_154_string); // 0x1186 NEW_2
	var_155_int = 0; // 0x1188 PushI
	var_156_int = 1; // 0x1189 PushI
	AddItem(var_114_bool, var_153_int, var_155_int, var_156_int); // 0x118a Func
	goto Label_4540; // 0x118c Jump
	
Label_4493:
	var_157_int = 2; // 0x118d PushI
	var_158_bool = var_113_int == var_157_int; // 0x118e Eq
	if(var_158_bool == 0) goto Label_4505; // 0x118f JumpB
	var_159_int = 0; var_160_string = ""; // 0x1190 PushV
	var_160_string = "hook"; // 0x1191 MovS
	func_4627(var_159_int, var_160_string); // 0x1192 NEW_2
	var_161_int = 0; // 0x1194 PushI
	var_162_int = 1; // 0x1195 PushI
	AddItem(var_114_bool, var_159_int, var_161_int, var_162_int); // 0x1196 Func
	goto Label_4540; // 0x1198 Jump
	
Label_4505:
	var_163_int = 4; // 0x1199 PushI
	var_164_bool = var_113_int == var_163_int; // 0x119a Eq
	if(var_164_bool == 0) goto Label_4517; // 0x119b JumpB
	var_165_int = 0; var_166_string = ""; // 0x119c PushV
	var_166_string = "syringe"; // 0x119d MovS
	func_4627(var_165_int, var_166_string); // 0x119e NEW_2
	var_167_int = 0; // 0x11a0 PushI
	var_168_int = 1; // 0x11a1 PushI
	AddItem(var_114_bool, var_165_int, var_167_int, var_168_int); // 0x11a2 Func
	goto Label_4540; // 0x11a4 Jump
	
Label_4517:
	var_169_int = 5; // 0x11a5 PushI
	var_170_bool = var_113_int == var_169_int; // 0x11a6 Eq
	if(var_170_bool == 0) goto Label_4529; // 0x11a7 JumpB
	var_171_int = 0; var_172_string = ""; // 0x11a8 PushV
	var_172_string = "watch"; // 0x11a9 MovS
	func_4627(var_171_int, var_172_string); // 0x11aa NEW_2
	var_173_int = 0; // 0x11ac PushI
	var_174_int = 1; // 0x11ad PushI
	AddItem(var_114_bool, var_171_int, var_173_int, var_174_int); // 0x11ae Func
	goto Label_4540; // 0x11b0 Jump
	
Label_4529:
	var_175_int = 6; // 0x11b1 PushI
	var_176_bool = var_113_int == var_175_int; // 0x11b2 Eq
	if(var_176_bool == 0) goto Label_4540; // 0x11b3 JumpB
	var_177_int = 0; var_178_string = ""; // 0x11b4 PushV
	var_178_string = "razor"; // 0x11b5 MovS
	func_4627(var_177_int, var_178_string); // 0x11b6 NEW_2
	var_179_int = 0; // 0x11b8 PushI
	var_180_int = 1; // 0x11b9 PushI
	AddItem(var_114_bool, var_177_int, var_179_int, var_180_int); // 0x11ba Func
	
Label_4541:
	var_181_int = 0; var_182_int = 0; // 0x11bd PushV
	var_181_int = 0; // 0x11be MovI
	var_183_int = 50; // 0x11bf PushI
	var_184_int = 0; // 0x11c0 PushV
	func_4069(var_184_int); // 0x11c1 NEW_2
	var_185_int = 50; // 0x11c3 PushI
	var_186_float = var_184_int * var_185_int; // 0x11c4 Mult
	var_182_int = var_183_int + var_186_float; // 0x11c5 Add2
	func_4380(var_181_int, var_182_int); // 0x11c6 NEW_2
	var_187_int = 7; // 0x11c8 PushI
	irand(var_113_int, var_187_int); // 0x11c9 Func
	var_188_int = 0; // 0x11cb PushI
	var_189_bool = var_113_int == var_188_int; // 0x11cc Eq
	if(var_189_bool == 0) goto Label_4567; // 0x11cd JumpB
	var_190_int = 0; var_191_string = ""; // 0x11ce PushV
	var_191_string = "beads"; // 0x11cf MovS
	func_4627(var_190_int, var_191_string); // 0x11d0 NEW_2
	var_192_int = 0; // 0x11d2 PushI
	var_193_int = 1; // 0x11d3 PushI
	AddItem(var_114_bool, var_190_int, var_192_int, var_193_int); // 0x11d4 Func
	goto Label_4626; // 0x11d6 Jump
	
Label_4567:
	var_194_int = 1; // 0x11d7 PushI
	var_195_bool = var_113_int == var_194_int; // 0x11d8 Eq
	if(var_195_bool == 0) goto Label_4579; // 0x11d9 JumpB
	var_196_int = 0; var_197_string = ""; // 0x11da PushV
	var_197_string = "bracelet"; // 0x11db MovS
	func_4627(var_196_int, var_197_string); // 0x11dc NEW_2
	var_198_int = 0; // 0x11de PushI
	var_199_int = 1; // 0x11df PushI
	AddItem(var_114_bool, var_196_int, var_198_int, var_199_int); // 0x11e0 Func
	goto Label_4626; // 0x11e2 Jump
	
Label_4579:
	var_200_int = 2; // 0x11e3 PushI
	var_201_bool = var_113_int == var_200_int; // 0x11e4 Eq
	if(var_201_bool == 0) goto Label_4591; // 0x11e5 JumpB
	var_202_int = 0; var_203_string = ""; // 0x11e6 PushV
	var_203_string = "ear_ring"; // 0x11e7 MovS
	func_4627(var_202_int, var_203_string); // 0x11e8 NEW_2
	var_204_int = 0; // 0x11ea PushI
	var_205_int = 1; // 0x11eb PushI
	AddItem(var_114_bool, var_202_int, var_204_int, var_205_int); // 0x11ec Func
	goto Label_4626; // 0x11ee Jump
	
Label_4591:
	var_206_int = 3; // 0x11ef PushI
	var_207_bool = var_113_int == var_206_int; // 0x11f0 Eq
	if(var_207_bool == 0) goto Label_4603; // 0x11f1 JumpB
	var_208_int = 0; var_209_string = ""; // 0x11f2 PushV
	var_209_string = "gold_ring"; // 0x11f3 MovS
	func_4627(var_208_int, var_209_string); // 0x11f4 NEW_2
	var_210_int = 0; // 0x11f6 PushI
	var_211_int = 1; // 0x11f7 PushI
	AddItem(var_114_bool, var_208_int, var_210_int, var_211_int); // 0x11f8 Func
	goto Label_4626; // 0x11fa Jump
	
Label_4603:
	var_212_int = 4; // 0x11fb PushI
	var_213_bool = var_113_int == var_212_int; // 0x11fc Eq
	if(var_213_bool == 0) goto Label_4615; // 0x11fd JumpB
	var_214_int = 0; var_215_string = ""; // 0x11fe PushV
	var_215_string = "silver_ring"; // 0x11ff MovS
	func_4627(var_214_int, var_215_string); // 0x1200 NEW_2
	var_216_int = 0; // 0x1202 PushI
	var_217_int = 1; // 0x1203 PushI
	AddItem(var_114_bool, var_214_int, var_216_int, var_217_int); // 0x1204 Func
	goto Label_4626; // 0x1206 Jump
	
Label_4615:
	var_218_int = 5; // 0x1207 PushI
	var_219_bool = var_113_int == var_218_int; // 0x1208 Eq
	if(var_219_bool == 0) goto Label_4626; // 0x1209 JumpB
	var_220_int = 0; var_221_string = ""; // 0x120a PushV
	var_221_string = "flower"; // 0x120b MovS
	func_4627(var_220_int, var_221_string); // 0x120c NEW_2
	var_222_int = 0; // 0x120e PushI
	var_223_int = 1; // 0x120f PushI
	AddItem(var_114_bool, var_220_int, var_222_int, var_223_int); // 0x1210 Func
}


func_3955(var_21_object)
{
	var_22_float = 0; var_23_cvector = CVector(0,0,0); var_24_float = 0; var_25_cvector = CVector(0,0,0); // 0xf73 PushV
	GetEyesHeight(var_24_float); // 0xf74 ObjFunc
	var_25_cvector = CVector(0.0, 0.0, 0.0); // 0xf76 MovV
	var_26_float = GetByIndex(var_25_cvector, 1); // 0xf77 PushE
	var_26_float = var_24_float; // 0xf78 Mov
	SetByIndex(var_25_cvector, 1) = var_26_float; // 0xf79 PopE
	var_27_string = "head"; // 0xf7a PushS
	LookAsync(var_21_object, var_27_string, var_25_cvector); // 0xf7b Func
	return 4; // 0xf7d Return
}


func_4980(var_20_int)
{
	var_20_int = 0; // 0x1375 MovI
	return 0; // 0x1376 Return
}


func_4983()
{
	return 0; // 0x1378 Return
}


func_4985(var_47_int, var_48_string, var_49_object)
{
	var_50_string = "killme"; // 0x137a PushS
	var_51_bool = var_48_string == var_50_string; // 0x137b Eq
	if(var_51_bool == 0) goto Label_4995; // 0x137c JumpB
	var_52_int = 0; var_53_object = Obj(); // 0x137d PushV
	var_53_object = var_49_object; // 0x137e Mov
	func_5007(var_52_int, var_53_object); // 0x137f NEW_2
	var_47_int = var_52_int; // 0x1380 Mov
	return 0; // 0x1382 Return
	
Label_4995:
	var_47_int = 0; // 0x1383 MovI
	return 0; // 0x1384 Return
}


func_3966()
{
	var_20_bool = 0; // 0xf7e PushV
	func_5239(var_20_bool); // 0xf7f NEW_2
	if(var_20_bool == 0) goto Label_3972; // 0xf81 JumpB
	lshStopSpeech(); // 0xf82 Func
	
Label_3972:
	return 0; // 0xf84 Return
}


func_1923(var_42_string)
{
	RemoveRTEnvelope(); // 0x784 Func
	SetDeathState(); // 0x786 Func
	Stop(); // 0x788 Func
	StopAsync(); // 0x78a Func
	StopSecondaryAnimation(); // 0x78c Func
	var_43_string = ""; // 0x78e PushV
	var_43_string = var_42_string; // 0x78f Mov
	func_3973(var_43_string); // 0x790 NEW_2
	var_72_string = "all"; // 0x792 PushS
	PlayAnimation(var_72_string, var_42_string); // 0x793 Func
	WaitForAnimEnd(); // 0x795 Func
	var_73_string = "all"; // 0x797 PushS
	LockAnimationEnd(var_73_string, var_42_string); // 0x798 Func
	RemoveEnvelope(); // 0x79a Func
	return 0; // 0x79c Return
}


func_3973(var_43_string)
{
	var_44_bool = 0; var_45_int = 0; var_46_bool = 0; var_47_int = 0; var_48_bool = 0; var_49_float = 0; var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_bool = 0; var_53_int = 0; var_54_bool = 0; var_55_int = 0; var_56_bool = 0; var_57_float = 0; var_58_cvector = CVector(0,0,0); var_59_cvector = CVector(0,0,0); // 0xf85 PushV
	IsExisting3DSound(var_52_bool, var_43_string); // 0xf86 Func
	var_60_bool = var_52_bool == 0; // 0xf88 Not
	if(var_60_bool == 0) goto Label_3998; // 0xf89 JumpB
	var_53_int = 0; // 0xf8a MovI
	
Label_3979:
	var_61_int = 1; // 0xf8b PushI
	var_62_int = var_53_int + var_61_int; // 0xf8c Add
	var_63_int = var_43_string + var_62_int; // 0xf8d Add
	IsExisting3DSound(var_54_bool, var_63_int); // 0xf8e Func
	var_64_bool = var_54_bool == 0; // 0xf90 Not
	if(var_64_bool == 0) goto Label_3987; // 0xf91 JumpB
	goto Label_3990; // 0xf92 Jump
	
Label_3990:
	var_65_bool = var_53_int == 0; // 0xf96 Not
	if(var_65_bool == 0) goto Label_3993; // 0xf97 JumpB
	return 16; // 0xf98 Return
	
Label_3993:
	irand(var_55_int, var_53_int); // 0xf99 Func
	var_66_int = 1; // 0xf9b PushI
	var_67_int = var_55_int + var_66_int; // 0xf9c Add
	var_43_string = var_43_string + var_67_int; // 0xf9d Add2
	
Label_3998:
	Is3DSoundLoaded(var_56_bool, var_43_string); // 0xf9e Func
	var_68_bool = var_56_bool; // 0xfa0 Push
	if(var_68_bool == 0) goto Label_4013; // 0xfa1 JumpB
	GetEyesHeight(var_57_float); // 0xfa2 Func
	GetDirection(var_58_cvector); // 0xfa4 Func
	var_69_int = 50; // 0xfa6 PushI
	var_59_cvector = var_58_cvector * var_69_int; // 0xfa7 Mult2
	var_70_float = GetByIndex(var_59_cvector, 1); // 0xfa8 PushE
	var_70_float = var_70_float + var_57_float; // 0xfa9 Add2
	SetByIndex(var_59_cvector, 1) = var_70_float; // 0xfaa PopE
	PlayGlobalSound(var_43_string, var_59_cvector); // 0xfab Func
	
Label_4013:
	return 16; // 0xfad Return
	
Label_3987:
	var_71_int = 1; // 0xf93 PushI
	var_53_int = var_53_int + var_71_int; // 0xf94 Add2
	goto Label_3979; // 0xf95 Jump
}


func_4997(var_95_string, var_96_object)
{
	var_97_string = "killme"; // 0x1386 PushS
	var_98_bool = var_95_string == var_97_string; // 0x1387 Eq
	if(var_98_bool == 0) goto Label_5006; // 0x1388 JumpB
	var_99_object = Obj(); // 0x1389 PushV
	var_99_object = var_96_object; // 0x138a Mov
	func_5025(var_99_object); // 0x138b NEW_2
	return 0; // 0x138d Return
	
Label_5006:
	return 0; // 0x138e Return
}


func_3464(var_0_object, var_1_object, var_25_int)
{
	var_26_int = 0; // 0xd89 PushI
	var_27_bool = var_25_int != var_26_int; // 0xd8a Neq
	if(var_27_bool == 0) goto Label_3469; // 0xd8b JumpB
	return 0; // 0xd8c Return
	
Label_3469:
	var_28_bool = 0; var_29_object = Obj(); // 0xd8d PushV
	var_29_object = var_1_object; // 0xd8e MovT
	func_3502(var_28_bool, var_29_object); // 0xd8f NEW_2
	var_64_bool = var_28_bool == 0; // 0xd91 Not
	if(var_64_bool == 0) goto Label_3476; // 0xd92 JumpB
	var_0_object = 1; // 0xd93 TMovB
	
Label_3476:
	var_65_int = 0; // 0xd94 PushI
	KillTimer(var_65_int); // 0xd95 Func
	Stop(); // 0xd97 Func
	return 0; // 0xd99 Return
}


func_5007(var_52_int, var_53_object)
{
	var_54_bool = 0; var_55_object = Obj(); // 0x1390 PushV
	var_55_object = var_53_object; // 0x1391 Mov
	func_3673(var_54_bool, var_55_object); // 0x1392 NEW_2
	var_88_bool = var_54_bool == 0; // 0x1394 Not
	if(var_88_bool == 0) goto Label_5016; // 0x1395 JumpB
	var_52_int = 0; // 0x1396 MovI
	return 0; // 0x1397 Return
	
Label_5016:
	var_89_bool = 0; var_90_object = Obj(); // 0x1398 PushV
	var_90_object = var_53_object; // 0x1399 Mov
	func_5285(var_90_object); // 0x139a NEW_2
	if(var_89_bool == 0) goto Label_5023; // 0x139c JumpB
	var_52_int = 2; // 0x139d MovI
	goto Label_5024; // 0x139e Jump
	
Label_5024:
	return 0; // 0x13a0 Return
	
Label_5023:
	var_52_int = 0; // 0x139f MovI
}


func_3486(var_0_object)
{
	var_0_object = 1; // 0xd9e TMovB
	var_21_int = 0; // 0xd9f PushI
	KillTimer(var_21_int); // 0xda0 Func
	Stop(); // 0xda2 Func
	return 0; // 0xda4 Return
}


func_5025(var_99_object)
{
	var_100_object = Obj(); // 0x13a2 PushV
	var_100_object = var_99_object; // 0x13a3 Mov
	func_4855(var_100_object); // 0x13a4 NEW_2
	return 0; // 0x13a6 Return
}


func_5031(var_20_int)
{
	var_20_int = 2; // 0x13a8 MovI
	return 0; // 0x13a9 Return
}


func_5034(var_26_object)
{
	var_27_object = Obj(); // 0x13ab PushV
	var_27_object = var_26_object; // 0x13ac Mov
	func_5245(var_27_object); // 0x13ad NEW_2
	return 0; // 0x13af Return
}


func_4014(var_105_object)
{
	var_106_object = Obj(); var_107_object = Obj(); // 0xfae PushV
	self(var_107_object); // 0xfaf Func
	var_105_object = var_107_object; // 0xfb1 Mov
	return 2; // 0xfb2 Return
}


func_3502(var_28_bool, var_29_object)
{
	var_30_bool = 0; var_31_object = Obj(); // 0xdaf PushV
	var_31_object = var_29_object; // 0xdb0 Mov
	func_3673(var_30_bool, var_31_object); // 0xdb1 NEW_2
	var_28_bool = var_30_bool; // 0xdb2 Mov
	return 0; // 0xdb4 Return
}


func_5040()
{
	return 0; // 0x13b0 Return
}


func_5041(var_23_bool)
{
	var_23_bool = 0; // 0x13b2 MovB
	return 0; // 0x13b3 Return
}


func_1970()
{
	var_19_bool = 0; // 0x7b2 PushV
	func_3834(var_19_bool); // 0x7b3 NEW_2
	var_22_bool = var_19_bool == 0; // 0x7b5 Not
	if(var_22_bool == 0) goto Label_1978; // 0x7b6 JumpB
	func_5040(); // 0x7b8 NEW_2
	
Label_1978:
	return 0; // 0x7ba Return
}


func_4020(var_49_cvector, var_50_cvector)
{
	var_57_float = 0; var_58_float = 0; // 0xfb4 PushV
	var_59_int = var_50_cvector | var_50_cvector; // 0xfb5 Or
	var_58_float = sqrt(var_59_int); // 0xfb6 Sqrt2
	var_60_float = 0.0; // 0xfb7 PushF
	var_61_bool = var_58_float < var_60_float; // 0xfb8 LT
	if(var_61_bool == 0) goto Label_4028; // 0xfb9 JumpB
	var_49_cvector = CVector(0.0, 0.0, 0.0); // 0xfba MovV
	return 2; // 0xfbb Return
	
Label_4028:
	var_49_cvector = var_50_cvector / var_50_cvector; // 0xfbc Div2
	return 2; // 0xfbd Return
}


func_3509(var_248_string)
{
	var_248_string = "walk"; // 0xdb5 MovS
	return 0; // 0xdb6 Return
}


func_5046(var_30_bool)
{
	var_30_bool = 0; // 0x13b7 MovB
	return 0; // 0x13b8 Return
}


func_3511(var_249_string)
{
	var_249_string = "run"; // 0xdb7 MovS
	return 0; // 0xdb8 Return
}


func_2488()
{
	var_50_int = 0; var_51_int = 0; var_52_int = 0; var_53_int = 0; var_54_bool = 0; var_55_float = 0; var_56_bool = 0; var_57_int = 0; var_58_int = 0; var_59_int = 0; var_60_int = 0; var_61_bool = 0; var_62_float = 0; var_63_bool = 0; // 0x9b8 PushV
	WaitForAnimEnd(); // 0x9b9 Func
	var_64_bool = 0; // 0x9bb PushV
	func_3834(var_64_bool); // 0x9bc NEW_2
	var_65_bool = var_64_bool == 0; // 0x9be Not
	if(var_65_bool == 0) goto Label_2497; // 0x9bf JumpB
	return 14; // 0x9c0 Return
	
Label_2497:
	var_66_int = 0; // 0x9c1 PushV
	func_4812(var_66_int); // 0x9c2 NEW_2
	var_57_int = var_66_int; // 0x9c3 Mov
	var_58_int = 0; // 0x9c5 MovI
	
Label_2502:
	var_79_bool = 0; // 0x9c6 PushV
	var_79_bool = 0; // 0x9c7 MovB
	var_80_int = 5; // 0x9c8 PushI
	var_81_bool = var_58_int < var_80_int; // 0x9c9 LT
	if(var_81_bool == 0) goto Label_2512; // 0x9ca JumpB
	var_82_bool = 0; // 0x9cb PushV
	func_3834(var_82_bool); // 0x9cc NEW_2
	if(var_82_bool == 0) goto Label_2512; // 0x9ce JumpB
	var_79_bool = 1; // 0x9cf MovB
	
Label_2512:
	if(var_79_bool == 0) goto Label_2564; // 0x9d0 JumpB
	var_83_int = 3; // 0x9d1 PushI
	irand(var_59_int, var_83_int); // 0x9d2 Func
	var_84_int = 0; // 0x9d4 PushI
	var_85_bool = var_59_int == var_84_int; // 0x9d5 Eq
	if(var_85_bool == 0) goto Label_2536; // 0x9d6 JumpB
	var_86_int = var_57_int; // 0x9d7 Push
	if(var_86_int == 0) goto Label_2535; // 0x9d8 JumpB
	irand(var_60_int, var_57_int); // 0x9d9 Func
	var_87_string = "all"; // 0x9db PushS
	var_88_string = ""; var_89_int = 0; // 0x9dc PushV
	var_89_int = var_60_int; // 0x9dd Mov
	func_4805(var_88_string, var_89_int); // 0x9de NEW_2
	PlayAnimation(var_87_string, var_88_string); // 0x9e0 Func
	WaitForAnimEnd(var_61_bool); // 0x9e2 Func
	var_90_bool = var_61_bool == 0; // 0x9e4 Not
	if(var_90_bool == 0) goto Label_2535; // 0x9e5 JumpB
	goto Label_2564; // 0x9e6 Jump
	
Label_2564:
	ResetAAS(); // 0xa04 Func
	return 14; // 0xa06 Return
	
Label_2535:
	goto Label_2553; // 0x9e7 Jump
	
Label_2553:
	var_91_bool = 0; // 0x9f9 PushV
	func_2567(var_91_bool); // 0x9fa NEW_2
	var_92_bool = var_91_bool == 0; // 0x9fc Not
	if(var_92_bool == 0) goto Label_2559; // 0x9fd JumpB
	goto Label_2564; // 0x9fe Jump
	
Label_2559:
	ResetAAS(); // 0x9ff Func
	var_93_int = 1; // 0xa01 PushI
	var_58_int = var_58_int + var_93_int; // 0xa02 Add2
	goto Label_2502; // 0xa03 Jump
	
Label_2536:
	var_94_int = 1; // 0x9e8 PushI
	var_95_bool = var_59_int == var_94_int; // 0x9e9 Eq
	if(var_95_bool == 0) goto Label_2550; // 0x9ea JumpB
	var_96_int = 4; // 0x9eb PushI
	rand(var_62_float, var_96_int); // 0x9ec Func
	var_97_int = 1; // 0x9ee PushI
	var_98_int = var_62_float + var_97_int; // 0x9ef Add
	Sleep(var_98_int, var_63_bool); // 0x9f0 Func
	var_99_bool = var_63_bool == 0; // 0x9f2 Not
	if(var_99_bool == 0) goto Label_2549; // 0x9f3 JumpB
	goto Label_2564; // 0x9f4 Jump
	
Label_2549:
	goto Label_2553; // 0x9f5 Jump
	
Label_2550:
	var_100_int = var_58_int; // 0x9f6 Push
	if(var_100_int == 0) goto Label_2553; // 0x9f7 JumpB
	goto Label_2564; // 0x9f8 Jump
}


func_3513(var_476_string, var_477_int)
{
	var_478_int = 2; // 0xdba PushI
	var_479_bool = var_477_int == var_478_int; // 0xdbb Eq
	if(var_479_bool == 0) goto Label_3520; // 0xdbc JumpB
	var_476_string = "fire"; // 0xdbd MovS
	return 0; // 0xdbe Return
	
Label_3520:
	var_480_int = 1; // 0xdc0 PushI
	var_481_bool = var_477_int == var_480_int; // 0xdc1 Eq
	if(var_481_bool == 0) goto Label_3525; // 0xdc2 JumpB
	var_476_string = "bullet"; // 0xdc3 MovS
	return 0; // 0xdc4 Return
	
Label_3525:
	var_476_string = "phys"; // 0xdc5 MovS
	return 0; // 0xdc6 Return
}


func_5044()
{
	return 0; // 0x13b5 Return
}


func_5051(var_34_bool)
{
	var_34_bool = 0; // 0x13bc MovB
	return 0; // 0x13bd Return
}


func_5049()
{
	return 0; // 0x13ba Return
}


func_4030(var_486_float, var_487_float, var_488_float)
{
	var_491_bool = var_487_float < var_488_float; // 0xfbf LT
	if(var_491_bool == 0) goto Label_4035; // 0xfc0 JumpB
	var_486_float = var_487_float; // 0xfc1 Mov
	goto Label_4036; // 0xfc2 Jump
	
Label_4036:
	return 0; // 0xfc4 Return
	
Label_4035:
	var_486_float = var_488_float; // 0xfc3 Mov
}


func_5054()
{
	return 0; // 0x13bf Return
}


func_5056(var_25_bool)
{
	var_25_bool = 0; // 0x13c1 MovB
	return 0; // 0x13c2 Return
}


func_5059()
{
	return 0; // 0x13c4 Return
}


func_4037(var_496_float, var_497_float, var_498_float, var_499_float)
{
	var_500_bool = var_497_float < var_498_float; // 0xfc6 LT
	if(var_500_bool == 0) goto Label_4042; // 0xfc7 JumpB
	var_496_float = var_498_float; // 0xfc8 Mov
	return 0; // 0xfc9 Return
	
Label_4042:
	var_501_bool = var_497_float > var_499_float; // 0xfca GT
	if(var_501_bool == 0) goto Label_4046; // 0xfcb JumpB
	var_496_float = var_499_float; // 0xfcc Mov
	return 0; // 0xfcd Return
	
Label_4046:
	var_496_float = var_497_float; // 0xfce Mov
	return 0; // 0xfcf Return
}


func_5061()
{
	var_312_object = Obj(); var_313_object = Obj(); var_314_object = Obj(); var_315_object = Obj(); var_316_int = 0; var_317_int = 0; var_318_int = 0; var_319_int = 0; var_320_object = Obj(); var_321_int = 0; var_322_bool = 0; var_323_int = 0; var_324_float = 0; var_325_int = 0; var_326_object = Obj(); var_327_int = 0; var_328_int = 0; var_329_int = 0; var_330_int = 0; var_331_int = 0; var_332_int = 0; var_333_int = 0; var_334_int = 0; var_335_int = 0; var_336_int = 0; var_337_object = Obj(); var_338_object = Obj(); var_339_object = Obj(); var_340_object = Obj(); var_341_object = Obj(); var_342_int = 0; var_343_int = 0; var_344_int = 0; var_345_int = 0; var_346_object = Obj(); var_347_int = 0; var_348_bool = 0; var_349_int = 0; var_350_float = 0; var_351_int = 0; var_352_object = Obj(); var_353_int = 0; var_354_int = 0; var_355_int = 0; var_356_int = 0; var_357_int = 0; var_358_int = 0; var_359_int = 0; var_360_int = 0; var_361_int = 0; var_362_int = 0; var_363_object = Obj(); // 0x13c5 PushV
	var_364_object = Obj(); // 0x13c6 PushV
	func_4048(var_364_object); // 0x13c7 NEW_2
	var_338_object = var_364_object; // 0x13c8 Mov
	CreateIntVector(var_339_object); // 0x13ca Func
	CreateIntVector(var_340_object); // 0x13cc Func
	CreateIntVector(var_341_object); // 0x13ce Func
	GetSubContainerCount(var_342_int); // 0x13d0 ObjFunc
	var_343_int = 0; // 0x13d2 MovI
	
Label_5075:
	var_367_bool = var_343_int < var_342_int; // 0x13d3 LT
	if(var_367_bool == 0) goto Label_5147; // 0x13d4 JumpB
	GetItemCount(var_344_int, var_343_int); // 0x13d5 ObjFunc
	var_345_int = 0; // 0x13d7 MovI
	
Label_5080:
	var_368_bool = var_345_int < var_344_int; // 0x13d8 LT
	if(var_368_bool == 0) goto Label_5144; // 0x13d9 JumpB
	GetItem(var_346_object, var_345_int, var_343_int); // 0x13da ObjFunc
	GetItemID(var_347_int); // 0x13dc ObjFunc
	var_369_string = "HasDurability"; // 0x13de PushS
	HasInvItemProperty(var_348_bool, var_347_int, var_369_string); // 0x13df Func
	var_370_bool = var_348_bool; // 0x13e1 Push
	if(var_370_bool == 0) goto Label_5140; // 0x13e2 JumpB
	var_371_string = "durability"; // 0x13e3 PushS
	HasProperty(var_348_bool, var_371_string); // 0x13e4 ObjFunc
	var_372_bool = var_348_bool; // 0x13e6 Push
	if(var_372_bool == 0) goto Label_5140; // 0x13e7 JumpB
	var_373_string = "durability"; // 0x13e8 PushS
	GetProperty(var_349_int, var_373_string); // 0x13e9 ObjFunc
	var_374_bool = 0; // 0x13eb PushV
	var_374_bool = 0; // 0x13ec MovB
	var_375_int = 100; // 0x13ed PushI
	var_376_bool = var_349_int < var_375_int; // 0x13ee LT
	if(var_376_bool == 0) goto Label_5110; // 0x13ef JumpB
	var_377_bool = 0; var_378_object = Obj(); // 0x13f0 PushV
	var_378_object = var_346_object; // 0x13f1 Mov
	func_5208(var_378_object); // 0x13f2 NEW_2
	if(var_377_bool == 0) goto Label_5110; // 0x13f4 JumpB
	var_374_bool = 1; // 0x13f5 MovB
	
Label_5110:
	if(var_374_bool == 0) goto Label_5140; // 0x13f6 JumpB
	add(var_346_object); // 0x13f7 ObjFunc
	add(var_343_int); // 0x13f9 ObjFunc
	add(var_345_int); // 0x13fb ObjFunc
	var_384_int = 0; var_385_object = Obj(); var_386_int = 0; // 0x13fd PushV
	var_385_object = var_346_object; // 0x13fe Mov
	var_386_int = 0; // 0x13ff MovI
	func_4303(var_384_int, var_385_object, var_386_int); // 0x1400 NEW_2
	var_350_float = var_384_int; // 0x1401 Mov
	var_426_float = 1.0; // 0x1403 PushF
	var_427_float = 2.0; // 0x1404 PushF
	var_428_float = var_427_float * var_349_int; // 0x1405 Mult
	var_429_float = 100.0; // 0x1406 PushF
	var_430_float = var_428_float / var_429_float; // 0x1407 Div
	var_431_int = var_426_float + var_430_float; // 0x1408 Add
	var_432_float = var_350_float * var_431_int; // 0x1409 Mult
	var_433_int = 100; // 0x140a PushI
	var_434_int = var_433_int - var_349_int; // 0x140b Sub
	var_435_float = var_432_float * var_434_int; // 0x140c Mult
	var_436_int = 300; // 0x140d PushI
	var_351_int = var_435_float / var_435_float; // 0x140e Div2
	var_437_bool = var_351_int == 0; // 0x140f Not
	if(var_437_bool == 0) goto Label_5138; // 0x1410 JumpB
	var_351_int = 1; // 0x1411 MovI
	
Label_5138:
	add(var_351_int); // 0x1412 ObjFunc
	
Label_5140:
	var_346_object = 0; // 0x1414 SetNull
	var_438_int = 1; // 0x1415 PushI
	var_345_int = var_345_int + var_438_int; // 0x1416 Add2
	goto Label_5080; // 0x1417 Jump
	
Label_5144:
	var_439_int = 1; // 0x1418 PushI
	var_343_int = var_343_int + var_439_int; // 0x1419 Add2
	goto Label_5075; // 0x141a Jump
	
Label_5147:
	CreateIntVector(var_352_object); // 0x141b Func
	var_440_string = "repair.xml"; // 0x141d PushS
	ChooseItem(var_338_object, var_352_object, var_341_object, var_440_string); // 0x141e Func
	size(var_353_int); // 0x1420 ObjFunc
	var_441_bool = var_353_int == 0; // 0x1422 Not
	if(var_441_bool == 0) goto Label_5157; // 0x1423 JumpB
	return 52; // 0x1424 Return
	
Label_5157:
	var_354_int = 0; // 0x1425 MovI
	var_355_int = 0; // 0x1426 MovI
	
Label_5159:
	var_442_bool = var_355_int < var_353_int; // 0x1427 LT
	if(var_442_bool == 0) goto Label_5169; // 0x1428 JumpB
	get(var_356_int, var_355_int); // 0x1429 ObjFunc
	get(var_357_int, var_356_int); // 0x142b ObjFunc
	var_354_int = var_354_int + var_357_int; // 0x142d Add2
	var_443_int = 1; // 0x142e PushI
	var_355_int = var_355_int + var_443_int; // 0x142f Add2
	goto Label_5159; // 0x1430 Jump
	
Label_5169:
	var_444_string = "money"; // 0x1431 PushS
	GetProperty(var_444_string, var_358_int); // 0x1432 ObjFunc
	var_358_int = var_358_int - var_354_int; // 0x1434 Sub2
	var_445_int = 0; // 0x1435 PushI
	var_446_bool = var_358_int < var_445_int; // 0x1436 LT
	if(var_446_bool == 0) goto Label_5177; // 0x1437 JumpB
	return 52; // 0x1438 Return
	
Label_5177:
	var_447_string = "money"; // 0x1439 PushS
	SetProperty(var_447_string, var_358_int); // 0x143a ObjFunc
	var_359_int = 0; // 0x143c MovI
	
Label_5181:
	var_448_bool = var_359_int < var_353_int; // 0x143d LT
	if(var_448_bool == 0) goto Label_5202; // 0x143e JumpB
	get(var_360_int, var_359_int); // 0x143f ObjFunc
	get(var_361_int, var_360_int); // 0x1441 ObjFunc
	get(var_362_int, var_360_int); // 0x1443 ObjFunc
	GetItem(var_363_object, var_362_int, var_361_int); // 0x1445 ObjFunc
	var_449_string = "durability"; // 0x1447 PushS
	var_450_int = 100; // 0x1448 PushI
	SetProperty(var_449_string, var_450_int); // 0x1449 ObjFunc
	var_451_int = 1; // 0x144b PushI
	SetItem(var_363_object, var_451_int, var_362_int, var_361_int); // 0x144c ObjFunc
	var_363_object = 0; // 0x144e SetNull
	var_452_int = 1; // 0x144f PushI
	var_359_int = var_359_int + var_452_int; // 0x1450 Add2
	goto Label_5181; // 0x1451 Jump
	
Label_5202:
	return 52; // 0x1452 Return
}


func_3527(var_51_cvector)
{
	var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); var_56_cvector = CVector(0,0,0); // 0xdc7 PushV
	GetPosition(var_55_cvector); // 0xdc8 Func
	GetPosition(var_56_cvector); // 0xdca ObjFunc
	var_51_cvector = var_56_cvector - var_55_cvector; // 0xdcc Sub2
	return 4; // 0xdcd Return
}


func_3534(var_74_float)
{
	var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0); var_79_cvector = CVector(0,0,0); var_80_cvector = CVector(0,0,0); var_81_cvector = CVector(0,0,0); // 0xdce PushV
	GetPosition(var_79_cvector); // 0xdcf Func
	GetPosition(var_80_cvector); // 0xdd1 ObjFunc
	var_81_cvector = var_80_cvector - var_79_cvector; // 0xdd3 Sub2
	var_74_float = var_81_cvector | var_81_cvector; // 0xdd4 Or2
	return 6; // 0xdd5 Return
}


func_4048(var_364_object)
{
	var_365_object = Obj(); var_366_object = Obj(); // 0xfd0 PushV
	CreateObjectVector(var_366_object); // 0xfd1 Func
	var_364_object = var_366_object; // 0xfd3 Mov
	return 2; // 0xfd4 Return
}


func_3028(var_535_bool, var_536_float)
{
	var_537_float = 0; var_538_bool = 0; var_539_float = 0; var_540_bool = 0; // 0xbd4 PushV
	rand(var_539_float); // 0xbd5 Func
	var_541_bool = var_539_float < var_536_float; // 0xbd7 LT
	if(var_541_bool == 0) goto Label_3048; // 0xbd8 JumpB
	
Label_3033:
	IsAnimationPlaying(var_540_bool); // 0xbd9 Func
	var_542_bool = var_540_bool == 0; // 0xbdb Not
	if(var_542_bool == 0) goto Label_3038; // 0xbdc JumpB
	goto Label_3047; // 0xbdd Jump
	
Label_3047:
	goto Label_3053; // 0xbe7 Jump
	
Label_3053:
	var_535_bool = 0; // 0xbed MovB
	return 4; // 0xbee Return
	
Label_3038:
	var_543_bool = 0; // 0xbde PushV
	func_3126(var_543_bool); // 0xbdf NEW_2
	if(var_543_bool == 0) goto Label_3044; // 0xbe1 JumpB
	var_535_bool = 1; // 0xbe2 MovB
	return 4; // 0xbe3 Return
	
Label_3044:
	sync(); // 0xbe4 Func
	goto Label_3033; // 0xbe6 Jump
	
Label_3048:
	WaitForAnimEnd(); // 0xbe8 Func
	func_3230(var_540_bool); // 0xbeb NEW_2
}


func_3542(var_101_bool, var_102_object)
{
	var_103_bool = 0; var_104_bool = 0; // 0xdd6 PushV
	IsPlayerActor(var_102_object, var_104_bool); // 0xdd7 Func
	var_101_bool = var_104_bool; // 0xdd9 Mov
	return 2; // 0xdda Return
}


func_4054(var_132_int, var_133_string)
{
	var_134_int = 0; var_135_int = 0; // 0xfd6 PushV
	GetVariable(var_133_string, var_135_int); // 0xfd7 Func
	var_132_int = var_135_int; // 0xfd9 Mov
	return 2; // 0xfda Return
}


func_3547(var_52_bool, var_53_object, var_54_string)
{
	var_55_bool = 0; var_56_bool = 0; // 0xddb PushV
	var_57_string = "HasProperty"; // 0xddc PushS
	var_58_int = 2; // 0xddd PushI
	var_59_bool = IsFuncExist(var_53_object, var_57_string, var_58_int); // 0xdde FuncExist
	var_60_bool = var_59_bool == 0; // 0xddf Not
	if(var_60_bool == 0) goto Label_3555; // 0xde0 JumpB
	var_52_bool = 0; // 0xde1 MovB
	return 2; // 0xde2 Return
	
Label_3555:
	HasProperty(var_54_string, var_56_bool); // 0xde3 ObjFunc
	var_52_bool = var_56_bool; // 0xde5 Mov
	return 2; // 0xde6 Return
}


func_4059(var_504_float)
{
	var_505_object = Obj(); var_506_object = Obj(); // 0xfdb PushV
	CreateFloatVector(var_506_object); // 0xfdc Func
	add(var_504_float); // 0xfde ObjFunc
	var_507_int = 15; // 0xfe0 PushI
	SendWorldWndMessage(var_507_int, var_506_object); // 0xfe1 Func
	return 2; // 0xfe3 Return
}


func_4069(var_119_int)
{
	var_120_float = 0; var_121_float = 0; // 0xfe5 PushV
	GetGameTime(var_121_float); // 0xfe6 Func
	var_122_int = 1; // 0xfe8 PushI
	var_123_int = 0; // 0xfe9 PushV
	var_124_int = 24; // 0xfea PushI
	var_123_int = var_121_float / var_121_float; // 0xfeb Div2
	var_119_int = var_122_int + var_123_int; // 0xfec Add2
	return 2; // 0xfed Return
}


func_3559(var_448_float, var_449_object, var_450_float, var_451_int)
{
	var_455_int = 0; var_456_string = ""; var_457_int = 0; var_458_float = 0; var_459_float = 0; var_460_float = 0; var_461_int = 0; var_462_string = ""; var_463_int = 0; var_464_float = 0; var_465_float = 0; var_466_float = 0; // 0xde7 PushV
	var_467_bool = 0; var_468_object = Obj(); var_469_string = ""; // 0xde8 PushV
	var_468_object = var_449_object; // 0xde9 Mov
	var_469_string = "health"; // 0xdea MovS
	func_3547(var_467_bool, var_468_object, var_469_string); // 0xdeb NEW_2
	var_470_bool = var_467_bool == 0; // 0xded Not
	if(var_470_bool == 0) goto Label_3569; // 0xdee JumpB
	var_448_float = 0.0; // 0xdef MovF
	return 12; // 0xdf0 Return
	
Label_3569:
	var_471_bool = 0; var_472_object = Obj(); var_473_string = ""; // 0xdf1 PushV
	var_472_object = var_449_object; // 0xdf2 Mov
	var_473_string = "armor"; // 0xdf3 MovS
	func_3547(var_471_bool, var_472_object, var_473_string); // 0xdf4 NEW_2
	var_474_bool = var_471_bool == 0; // 0xdf6 Not
	if(var_474_bool == 0) goto Label_3578; // 0xdf7 JumpB
	var_461_int = 0; // 0xdf8 MovI
	goto Label_3581; // 0xdf9 Jump
	
Label_3581:
	var_475_string = "armor_"; // 0xdfd PushS
	var_476_string = ""; var_477_int = 0; // 0xdfe PushV
	var_477_int = var_451_int; // 0xdff Mov
	func_3513(var_476_string, var_477_int); // 0xe00 NEW_2
	var_462_string = var_475_string + var_476_string; // 0xe02 Add2
	var_482_bool = 0; var_483_object = Obj(); var_484_string = ""; // 0xe03 PushV
	var_483_object = var_449_object; // 0xe04 Mov
	var_484_string = var_462_string; // 0xe05 Mov
	func_3547(var_482_bool, var_483_object, var_484_string); // 0xe06 NEW_2
	var_485_bool = var_482_bool == 0; // 0xe08 Not
	if(var_485_bool == 0) goto Label_3596; // 0xe09 JumpB
	var_463_int = 0; // 0xe0a MovI
	goto Label_3598; // 0xe0b Jump
	
Label_3598:
	var_486_float = 0; var_487_float = 0; var_488_float = 0; // 0xe0e PushV
	var_489_int = var_461_int + var_463_int; // 0xe0f Add
	var_490_float = 100.0; // 0xe10 PushF
	var_487_float = var_489_int / var_489_int; // 0xe11 Div2
	var_488_float = 1; // 0xe12 MovI
	func_4030(var_486_float, var_487_float, var_488_float); // 0xe13 NEW_2
	var_464_float = var_486_float; // 0xe14 Mov
	var_492_string = "health"; // 0xe16 PushS
	GetProperty(var_492_string, var_465_float); // 0xe17 ObjFunc
	var_493_int = 1; // 0xe19 PushI
	var_494_int = var_493_int - var_464_float; // 0xe1a Sub
	var_466_float = var_450_float * var_494_int; // 0xe1b Mult2
	var_495_string = "health"; // 0xe1c PushS
	var_496_float = 0; var_497_float = 0; var_498_float = 0; var_499_float = 0; // 0xe1d PushV
	var_497_float = var_465_float - var_466_float; // 0xe1e Sub2
	var_498_float = 0; // 0xe1f MovI
	var_499_float = 1; // 0xe20 MovI
	func_4037(var_496_float, var_497_float, var_498_float, var_499_float); // 0xe21 NEW_2
	SetProperty(var_495_string, var_496_float); // 0xe23 ObjFunc
	var_502_bool = 0; var_503_object = Obj(); // 0xe25 PushV
	var_503_object = var_449_object; // 0xe26 Mov
	func_3542(var_502_bool, var_503_object); // 0xe27 NEW_2
	if(var_502_bool == 0) goto Label_3630; // 0xe29 JumpB
	var_504_float = 0; // 0xe2a PushV
	var_504_float = -var_466_float; // 0xe2b Neg2
	func_4059(var_504_float); // 0xe2c NEW_2
	
Label_3630:
	var_448_float = var_466_float; // 0xe2e Mov
	return 12; // 0xe2f Return
	
Label_3596:
	GetProperty(var_462_string, var_463_int); // 0xe0c ObjFunc
	
Label_3578:
	var_508_string = "armor"; // 0xdfa PushS
	GetProperty(var_508_string, var_461_int); // 0xdfb ObjFunc
}


func_4078(var_20_object)
{
	var_21_bool = 0; var_22_bool = 0; // 0xfee PushV
	IsPlayerActor(var_20_object, var_22_bool); // 0xfef Func
	var_23_bool = var_22_bool; // 0xff1 Push
	if(var_23_bool == 0) goto Label_4086; // 0xff2 JumpB
	var_24_string = "attack"; // 0xff3 PushS
	PlayGlobalMusic(var_24_string); // 0xff4 Func
	
Label_4086:
	return 2; // 0xff6 Return
}


func_3055(var_0_object, var_336_bool, var_337_float)
{
	var_338_bool = 0; var_339_cvector = CVector(0,0,0); var_340_cvector = CVector(0,0,0); var_341_cvector = CVector(0,0,0); var_342_float = 0; var_343_bool = 0; var_344_cvector = CVector(0,0,0); var_345_cvector = CVector(0,0,0); var_346_cvector = CVector(0,0,0); var_347_float = 0; // 0xbef PushV
	
Label_3056:
	IsAnimationPlaying(var_343_bool); // 0xbf0 Func
	var_348_bool = var_343_bool == 0; // 0xbf2 Not
	if(var_348_bool == 0) goto Label_3061; // 0xbf3 JumpB
	goto Label_3093; // 0xbf4 Jump
	
Label_3093:
	func_3230(var_347_float); // 0xc16 NEW_2
	var_336_bool = 0; // 0xc18 MovB
	return 10; // 0xc19 Return
	
Label_3061:
	var_349_bool = 0; // 0xbf5 PushV
	func_3126(var_349_bool); // 0xbf6 NEW_2
	if(var_349_bool == 0) goto Label_3067; // 0xbf8 JumpB
	var_336_bool = 1; // 0xbf9 MovB
	return 10; // 0xbfa Return
	
Label_3067:
	var_392_bool = 0; var_393_object = Obj(); // 0xbfb PushV
	var_393_object = var_0_object; // 0xbfc MovT
	func_3673(var_392_bool, var_393_object); // 0xbfd NEW_2
	var_394_bool = var_392_bool == 0; // 0xbff Not
	if(var_394_bool == 0) goto Label_3075; // 0xc00 JumpB
	var_336_bool = 0; // 0xc01 MovB
	return 10; // 0xc02 Return
	
Label_3075:
	GetPFPosition(var_344_cvector); // 0xc03 TObjFunc
	GetPFPosition(var_345_cvector); // 0xc05 Func
	var_346_cvector = var_344_cvector - var_345_cvector; // 0xc07 Sub2
	var_347_float = var_346_cvector | var_346_cvector; // 0xc08 Or2
	var_395_float = var_337_float * var_337_float; // 0xc09 Mult
	var_396_bool = var_347_float < var_395_float; // 0xc0a LT
	if(var_396_bool == 0) goto Label_3090; // 0xc0b JumpB
	var_397_bool = 0; var_398_float = 0; // 0xc0c PushV
	var_398_float = var_337_float; // 0xc0d Mov
	func_2891(var_347_float, var_397_bool, var_398_float); // 0xc0e NEW_2
	var_336_bool = 1; // 0xc10 MovB
	return 10; // 0xc11 Return
	
Label_3090:
	sync(); // 0xc12 Func
	goto Label_3056; // 0xc14 Jump
}


func_4087()
{
	var_409_object = Obj(); var_410_object = Obj(); // 0xff7 PushV
	GetScene(var_410_object); // 0xff8 Func
	var_411_string = "battle"; // 0xffa PushS
	var_412_object = Obj(); // 0xffb PushV
	func_4014(var_412_object); // 0xffc NEW_2
	BroadcastMessage(var_411_string, var_412_object, var_410_object); // 0xffe Func
	return 2; // 0x1000 Return
}


