task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_int = 1; // 0x15a PushI
	if(var_19_int == 0) goto Label_1798; // 0x15b JumpB
	func_3913(); // 0x15d NEW_2
	var_21_int = 40087; // 0x15f PushI
	var_22_bool = var_18_bool == var_21_int; // 0x160 Eq
	if(var_22_bool == 0) goto Label_359; // 0x161 JumpB
	var_23_object = Obj(); var_24_object = Obj(); // 0x162 PushV
	var_23_object = var_1_object; // 0x163 MovT
	var_24_object = var_0_object; // 0x164 MovT
	func_4081(); // 0x165 NEW_2
	
Label_359:
	var_26_int = 45510; // 0x167 PushI
	var_27_bool = var_18_bool == var_26_int; // 0x168 Eq
	if(var_27_bool == 0) goto Label_367; // 0x169 JumpB
	var_28_object = Obj(); var_29_object = Obj(); // 0x16a PushV
	var_28_object = var_1_object; // 0x16b MovT
	var_29_object = var_0_object; // 0x16c MovT
	func_4081(); // 0x16d NEW_2
	
Label_367:
	var_30_int = 45517; // 0x16f PushI
	var_31_bool = var_18_bool == var_30_int; // 0x170 Eq
	if(var_31_bool == 0) goto Label_375; // 0x171 JumpB
	var_32_object = Obj(); var_33_object = Obj(); // 0x172 PushV
	var_32_object = var_1_object; // 0x173 MovT
	var_33_object = var_0_object; // 0x174 MovT
	func_4081(); // 0x175 NEW_2
	
Label_375:
	var_34_int = 40085; // 0x177 PushI
	var_35_bool = var_18_bool == var_34_int; // 0x178 Eq
	if(var_35_bool == 0) goto Label_383; // 0x179 JumpB
	var_36_object = Obj(); var_37_object = Obj(); // 0x17a PushV
	var_36_object = var_1_object; // 0x17b MovT
	var_37_object = var_0_object; // 0x17c MovT
	func_4081(); // 0x17d NEW_2
	
Label_383:
	var_38_int = 40086; // 0x17f PushI
	var_39_bool = var_18_bool == var_38_int; // 0x180 Eq
	if(var_39_bool == 0) goto Label_391; // 0x181 JumpB
	var_40_object = Obj(); var_41_object = Obj(); // 0x182 PushV
	var_40_object = var_1_object; // 0x183 MovT
	var_41_object = var_0_object; // 0x184 MovT
	func_4081(); // 0x185 NEW_2
	
Label_391:
	var_42_int = 45493; // 0x187 PushI
	var_43_bool = var_17_object == var_42_int; // 0x188 Eq
	if(var_43_bool == 0) goto Label_605; // 0x189 JumpB
	var_44_bool = 0; var_45_object = Obj(); // 0x18a PushV
	var_45_object = var_1_object; // 0x18b MovT
	func_4110(var_45_object); // 0x18c NEW_2
	if(var_44_bool == 0) goto Label_551; // 0x18e JumpB
	var_52_string = ""; // 0x18f PushV
	var_52_string = "Neutral"; // 0x190 MovS
	func_323(var_18_bool, var_52_string); // 0x191 NEW_2
	var_69_int = 543041; // 0x193 PushI
	SetMessage(var_69_int); // 0x194 TObjFunc
	ClearReplies(); // 0x196 TObjFunc
	var_70_bool = 0; var_71_object = Obj(); // 0x198 PushV
	var_71_object = var_1_object; // 0x199 MovT
	func_4122(var_70_bool, var_71_object); // 0x19a NEW_2
	if(var_70_bool == 0) goto Label_418; // 0x19c JumpB
	var_81_int = 538210; // 0x19d PushI
	var_82_int = -1; // 0x19e PushI
	var_83_int = 40087; // 0x19f PushI
	AddReply(var_81_int, var_82_int, var_83_int); // 0x1a0 TObjFunc
	
Label_418:
	var_84_bool = 0; var_85_object = Obj(); // 0x1a2 PushV
	var_85_object = var_1_object; // 0x1a3 MovT
	func_4122(var_84_bool, var_85_object); // 0x1a4 NEW_2
	if(var_84_bool == 0) goto Label_428; // 0x1a6 JumpB
	var_86_int = 543042; // 0x1a7 PushI
	var_87_int = -1; // 0x1a8 PushI
	var_88_int = 45494; // 0x1a9 PushI
	AddReply(var_86_int, var_87_int, var_88_int); // 0x1aa TObjFunc
	
Label_428:
	var_89_bool = 0; var_90_object = Obj(); // 0x1ac PushV
	var_90_object = var_1_object; // 0x1ad MovT
	func_4122(var_89_bool, var_90_object); // 0x1ae NEW_2
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
	func_4142(var_96_bool, var_97_object); // 0x1bc NEW_2
	if(var_96_bool == 0) goto Label_453; // 0x1be JumpB
	var_102_bool = 0; var_103_object = Obj(); // 0x1bf PushV
	var_103_object = var_1_object; // 0x1c0 MovT
	func_4152(var_102_bool, var_103_object); // 0x1c1 NEW_2
	if(var_102_bool == 0) goto Label_453; // 0x1c3 JumpB
	var_95_bool = 0; // 0x1c4 MovB
	
Label_453:
	if(var_95_bool == 0) goto Label_460; // 0x1c5 JumpB
	var_108_bool = 0; var_109_object = Obj(); // 0x1c6 PushV
	var_109_object = var_1_object; // 0x1c7 MovT
	func_4162(var_108_bool, var_109_object); // 0x1c8 NEW_2
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
	func_4142(var_118_bool, var_119_object); // 0x1d6 NEW_2
	if(var_118_bool == 0) goto Label_479; // 0x1d8 JumpB
	var_120_bool = 0; var_121_object = Obj(); // 0x1d9 PushV
	var_121_object = var_1_object; // 0x1da MovT
	func_4152(var_120_bool, var_121_object); // 0x1db NEW_2
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
	func_4172(var_127_bool, var_128_object); // 0x1eb NEW_2
	if(var_127_bool == 0) goto Label_500; // 0x1ed JumpB
	var_133_bool = 0; var_134_object = Obj(); // 0x1ee PushV
	var_134_object = var_1_object; // 0x1ef MovT
	func_4182(var_133_bool, var_134_object); // 0x1f0 NEW_2
	if(var_133_bool == 0) goto Label_500; // 0x1f2 JumpB
	var_126_bool = 0; // 0x1f3 MovB
	
Label_500:
	if(var_126_bool == 0) goto Label_507; // 0x1f4 JumpB
	var_139_bool = 0; var_140_object = Obj(); // 0x1f5 PushV
	var_140_object = var_1_object; // 0x1f6 MovT
	func_4192(var_139_bool, var_140_object); // 0x1f7 NEW_2
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
	func_4162(var_151_bool, var_152_object); // 0x209 NEW_2
	if(var_151_bool == 0) goto Label_530; // 0x20b JumpB
	var_153_bool = 0; var_154_object = Obj(); // 0x20c PushV
	var_154_object = var_1_object; // 0x20d MovT
	func_4172(var_153_bool, var_154_object); // 0x20e NEW_2
	if(var_153_bool == 0) goto Label_530; // 0x210 JumpB
	var_150_bool = 0; // 0x211 MovB
	
Label_530:
	if(var_150_bool == 0) goto Label_537; // 0x212 JumpB
	var_155_bool = 0; var_156_object = Obj(); // 0x213 PushV
	var_156_object = var_1_object; // 0x214 MovT
	func_4182(var_155_bool, var_156_object); // 0x215 NEW_2
	if(var_155_bool == 0) goto Label_537; // 0x217 JumpB
	var_149_bool = 0; // 0x218 MovB
	
Label_537:
	if(var_149_bool == 0) goto Label_544; // 0x219 JumpB
	var_157_bool = 0; var_158_object = Obj(); // 0x21a PushV
	var_158_object = var_1_object; // 0x21b MovT
	func_4192(var_157_bool, var_158_object); // 0x21c NEW_2
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
	func_4086(var_165_object); // 0x232 NEW_2
	if(var_164_bool == 0) goto Label_570; // 0x234 JumpB
	var_170_int = 538208; // 0x235 PushI
	var_171_int = -1; // 0x236 PushI
	var_172_int = 40085; // 0x237 PushI
	AddReply(var_170_int, var_171_int, var_172_int); // 0x238 TObjFunc
	
Label_570:
	var_173_bool = 0; var_174_object = Obj(); // 0x23a PushV
	var_174_object = var_1_object; // 0x23b MovT
	func_4098(var_174_object); // 0x23c NEW_2
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
	func_4086(var_184_object); // 0x248 NEW_2
	if(var_183_bool == 0) goto Label_593; // 0x24a JumpB
	var_185_bool = 0; var_186_object = Obj(); // 0x24b PushV
	var_186_object = var_1_object; // 0x24c MovT
	func_4132(var_185_bool, var_186_object); // 0x24d NEW_2
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
	func_4086(var_457_object); // 0x4b6 NEW_2
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
	func_5198(var_710_bool); // 0x6fc NEW_2
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


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	var_18_int = 0; var_19_int = 0; // 0x716 PushV
	var_20_int = 0; var_21_object = Obj(); // 0x717 PushV
	var_21_object = var_17_bool; // 0x718 Mov
	func_4940(var_21_object); // 0x719 NEW_2
	var_19_int = var_20_int; // 0x71a Mov
	var_22_int = 0; // 0x71c PushI
	var_23_bool = var_19_int > var_22_int; // 0x71d GT
	if(var_23_bool == 0) goto Label_1827; // 0x71e JumpB
	var_24_object = Obj(); // 0x71f PushV
	var_24_object = var_17_bool; // 0x720 Mov
	func_4943(var_24_object); // 0x721 NEW_2
	
Label_1827:
	return 2; // 0x723 Return
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool)
{
	func_4949(); // 0x725 NEW_2
	return 0; // 0x727 Return
}


task_2_event_22(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_float, var_8_float, var_9_bool, var_10_bool, var_11_object, var_12_object, var_13_int, var_14_int, var_15_bool, var_16_float, var_17_int, var_18_bool, var_19_object, var_20_bool)
{
	return 0; // 0x79e Return
}


task_2_event_16(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_string, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	return 0; // 0x7a0 Return
}


task_2_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	return 0; // 0x7a2 Return
}


task_3_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	var_18_int = 0; var_19_int = 0; // 0x7ce PushV
	var_20_int = 0; var_21_object = Obj(); // 0x7cf PushV
	var_21_object = var_17_bool; // 0x7d0 Mov
	func_4940(var_21_object); // 0x7d1 NEW_2
	var_19_int = var_20_int; // 0x7d2 Mov
	var_22_int = 0; // 0x7d4 PushI
	var_23_bool = var_19_int > var_22_int; // 0x7d5 GT
	if(var_23_bool == 0) goto Label_2017; // 0x7d6 JumpB
	var_24_int = 1; // 0x7d7 PushI
	var_25_bool = var_19_int > var_24_int; // 0x7d8 GT
	if(var_25_bool == 0) goto Label_2013; // 0x7d9 JumpB
	func_2191(var_19_int); // 0x7db NEW_2
	
Label_2013:
	var_28_object = Obj(); // 0x7dd PushV
	var_28_object = var_17_bool; // 0x7de Mov
	func_4943(var_28_object); // 0x7df NEW_2
	
Label_2017:
	return 2; // 0x7e1 Return
}


task_3_event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	var_18_int = 0; var_19_int = 0; // 0x7e2 PushV
	var_20_object = Obj(); // 0x7e3 PushV
	var_20_object = var_17_bool; // 0x7e4 Mov
	func_4746(var_20_object); // 0x7e5 NEW_2
	var_29_int = 0; var_30_object = Obj(); // 0x7e7 PushV
	var_30_object = var_17_bool; // 0x7e8 Mov
	func_4805(var_29_int, var_30_object); // 0x7e9 NEW_2
	var_19_int = var_29_int; // 0x7ea Mov
	var_65_int = 0; // 0x7ec PushI
	var_66_bool = var_19_int > var_65_int; // 0x7ed GT
	if(var_66_bool == 0) goto Label_2041; // 0x7ee JumpB
	var_67_int = 1; // 0x7ef PushI
	var_68_bool = var_19_int > var_67_int; // 0x7f0 GT
	if(var_68_bool == 0) goto Label_2037; // 0x7f1 JumpB
	func_2191(var_19_int); // 0x7f3 NEW_2
	
Label_2037:
	var_71_object = Obj(); // 0x7f5 PushV
	var_71_object = var_17_bool; // 0x7f6 Mov
	func_4815(var_71_object); // 0x7f7 NEW_2
	
Label_2041:
	return 2; // 0x7f9 Return
}


task_3_event_30(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_bool, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_int = 0; var_21_int = 0; // 0x7fa PushV
	var_22_bool = 0; var_23_object = Obj(); var_24_object = Obj(); var_25_bool = 0; // 0x7fb PushV
	var_23_object = var_17_bool; // 0x7fc Mov
	var_24_object = var_18_object; // 0x7fd Mov
	var_25_bool = var_19_bool; // 0x7fe Mov
	func_5258(var_22_bool, var_23_object, var_24_object, var_25_bool); // 0x7ff NEW_2
	if(var_22_bool == 0) goto Label_2069; // 0x801 JumpB
	var_84_int = 0; var_85_object = Obj(); var_86_bool = 0; // 0x802 PushV
	var_85_object = var_17_bool; // 0x803 Mov
	var_86_bool = var_19_bool; // 0x804 Mov
	func_4898(var_85_object, var_86_bool); // 0x805 NEW_2
	var_21_int = var_84_int; // 0x806 Mov
	var_117_int = 0; // 0x808 PushI
	var_118_bool = var_21_int > var_117_int; // 0x809 GT
	if(var_118_bool == 0) goto Label_2069; // 0x80a JumpB
	var_119_int = 1; // 0x80b PushI
	var_120_bool = var_21_int > var_119_int; // 0x80c GT
	if(var_120_bool == 0) goto Label_2065; // 0x80d JumpB
	func_2191(var_21_int); // 0x80f NEW_2
	
Label_2065:
	var_123_object = Obj(); // 0x811 PushV
	var_123_object = var_17_bool; // 0x812 Mov
	func_4905(var_123_object); // 0x813 NEW_2
	
Label_2069:
	return 2; // 0x815 Return
}


task_3_event_40(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	var_18_int = 0; var_19_int = 0; // 0x816 PushV
	var_20_int = 0; var_21_object = Obj(); // 0x817 PushV
	var_21_object = var_17_bool; // 0x818 Mov
	func_4950(var_20_int, var_21_object); // 0x819 NEW_2
	var_19_int = var_20_int; // 0x81a Mov
	var_62_int = 0; // 0x81c PushI
	var_63_bool = var_19_int > var_62_int; // 0x81d GT
	if(var_63_bool == 0) goto Label_2089; // 0x81e JumpB
	var_64_int = 1; // 0x81f PushI
	var_65_bool = var_19_int > var_64_int; // 0x820 GT
	if(var_65_bool == 0) goto Label_2085; // 0x821 JumpB
	func_2191(var_19_int); // 0x823 NEW_2
	
Label_2085:
	var_68_object = Obj(); // 0x825 PushV
	var_68_object = var_17_bool; // 0x826 Mov
	func_4966(var_68_object); // 0x827 NEW_2
	
Label_2089:
	return 2; // 0x829 Return
}


task_3_event_42(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_string, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_int = 0; var_20_int = 0; // 0x82a PushV
	var_21_bool = 0; var_22_object = Obj(); var_23_string = ""; // 0x82b PushV
	var_22_object = var_17_object; // 0x82c Mov
	var_23_string = var_18_bool; // 0x82d Mov
	func_4660(var_21_bool, var_22_object, var_23_string); // 0x82e NEW_2
	if(var_21_bool == 0) goto Label_2106; // 0x830 JumpB
	func_2191(var_20_int); // 0x832 NEW_2
	var_51_object = Obj(); var_52_string = ""; // 0x834 PushV
	var_51_object = var_17_object; // 0x835 Mov
	var_52_string = var_18_bool; // 0x836 Mov
	func_4692(var_51_object, var_52_string); // 0x837 NEW_2
	goto Label_2126; // 0x839 Jump
	
Label_2126:
	return 2; // 0x84e Return
	
Label_2106:
	var_127_int = 0; var_128_string = ""; var_129_object = Obj(); // 0x83a PushV
	var_128_string = var_18_bool; // 0x83b Mov
	var_129_object = var_17_object; // 0x83c Mov
	func_4972(var_129_object); // 0x83d NEW_2
	var_20_int = var_127_int; // 0x83e Mov
	var_130_int = 0; // 0x840 PushI
	var_131_bool = var_20_int > var_130_int; // 0x841 GT
	if(var_131_bool == 0) goto Label_2126; // 0x842 JumpB
	var_132_int = 1; // 0x843 PushI
	var_133_bool = var_20_int > var_132_int; // 0x844 GT
	if(var_133_bool == 0) goto Label_2121; // 0x845 JumpB
	func_2191(var_20_int); // 0x847 NEW_2
	
Label_2121:
	var_134_string = ""; var_135_object = Obj(); // 0x849 PushV
	var_134_string = var_18_bool; // 0x84a Mov
	var_135_object = var_17_object; // 0x84b Mov
	func_4975(); // 0x84c NEW_2
}


task_3_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_string, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	var_18_bool = 0; var_19_string = ""; // 0x850 PushV
	var_19_string = var_17_bool; // 0x851 Mov
	func_4759(var_18_bool, var_19_string); // 0x852 NEW_2
	if(var_18_bool == 0) goto Label_2140; // 0x854 JumpB
	func_2191(var_17_bool); // 0x856 NEW_2
	var_29_string = ""; // 0x858 PushV
	var_29_string = var_17_bool; // 0x859 Mov
	func_4775(var_29_string); // 0x85a NEW_2
	
Label_2140:
	return 0; // 0x85c Return
}


task_3_event_1(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	var_18_object = var_0_object; // 0x85e PushT
	if(var_18_object == 0) goto Label_2145; // 0x85f JumpB
	return 0; // 0x860 Return
	
Label_2145:
	var_19_bool = 0; var_20_object = Obj(); // 0x861 PushV
	var_20_object = var_17_bool; // 0x862 Mov
	func_4717(var_19_bool, var_20_object); // 0x863 NEW_2
	if(var_19_bool == 0) goto Label_2158; // 0x865 JumpB
	func_2191(var_17_bool); // 0x867 NEW_2
	var_33_object = Obj(); // 0x869 PushV
	var_33_object = var_17_bool; // 0x86a Mov
	func_4740(var_33_object); // 0x86b NEW_2
	goto Label_2162; // 0x86d Jump
	
Label_2162:
	return 0; // 0x872 Return
	
Label_2158:
	var_35_object = Obj(); // 0x86e PushV
	var_35_object = var_17_bool; // 0x86f Mov
	func_2213(var_17_bool, var_35_object); // 0x870 NEW_2
}


task_3_event_3(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	var_18_object = var_0_object; // 0x874 PushT
	if(var_18_object == 0) goto Label_2167; // 0x875 JumpB
	return 0; // 0x876 Return
	
Label_2167:
	var_19_object = Obj(); // 0x877 PushV
	var_19_object = var_17_bool; // 0x878 Mov
	func_2213(var_17_bool, var_19_object); // 0x879 NEW_2
	return 0; // 0x87b Return
}


task_3_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_int, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	var_18_int = 110; // 0x87d PushI
	var_19_bool = var_17_bool != var_18_int; // 0x87e Neq
	if(var_19_bool == 0) goto Label_2177; // 0x87f JumpB
	return 0; // 0x880 Return
	
Label_2177:
	var_1_object = 0; // 0x881 TMovB
	var_20_int = 110; // 0x882 PushI
	KillTimer(var_20_int); // 0x883 Func
	ResetAAS(); // 0x885 Func
	return 0; // 0x887 Return
}


task_3_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool)
{
	func_2191(var_16_bool); // 0x889 NEW_2
	func_4949(); // 0x88c NEW_2
	return 0; // 0x88e Return
}


task_3_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	func_2191(var_17_bool); // 0x89e NEW_2
	var_20_object = Obj(); // 0x8a0 PushV
	var_20_object = var_17_bool; // 0x8a1 Mov
	func_4636(); // 0x8a2 NEW_2
	return 0; // 0x8a4 Return
}


task_4_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	var_18_int = 0; var_19_int = 0; // 0x8fe PushV
	var_20_int = 0; var_21_object = Obj(); // 0x8ff PushV
	var_21_object = var_17_bool; // 0x900 Mov
	func_4940(var_21_object); // 0x901 NEW_2
	var_19_int = var_20_int; // 0x902 Mov
	var_22_int = 0; // 0x904 PushI
	var_23_bool = var_19_int > var_22_int; // 0x905 GT
	if(var_23_bool == 0) goto Label_2321; // 0x906 JumpB
	var_24_int = 1; // 0x907 PushI
	var_25_bool = var_19_int > var_24_int; // 0x908 GT
	if(var_25_bool == 0) goto Label_2317; // 0x909 JumpB
	func_2445(); // 0x90b NEW_2
	
Label_2317:
	var_28_object = Obj(); // 0x90d PushV
	var_28_object = var_17_bool; // 0x90e Mov
	func_4943(var_28_object); // 0x90f NEW_2
	
Label_2321:
	return 2; // 0x911 Return
}


task_4_event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	var_18_int = 0; var_19_int = 0; // 0x912 PushV
	var_20_object = Obj(); // 0x913 PushV
	var_20_object = var_17_bool; // 0x914 Mov
	func_4746(var_20_object); // 0x915 NEW_2
	var_29_int = 0; var_30_object = Obj(); // 0x917 PushV
	var_30_object = var_17_bool; // 0x918 Mov
	func_4805(var_29_int, var_30_object); // 0x919 NEW_2
	var_19_int = var_29_int; // 0x91a Mov
	var_65_int = 0; // 0x91c PushI
	var_66_bool = var_19_int > var_65_int; // 0x91d GT
	if(var_66_bool == 0) goto Label_2345; // 0x91e JumpB
	var_67_int = 1; // 0x91f PushI
	var_68_bool = var_19_int > var_67_int; // 0x920 GT
	if(var_68_bool == 0) goto Label_2341; // 0x921 JumpB
	func_2445(); // 0x923 NEW_2
	
Label_2341:
	var_71_object = Obj(); // 0x925 PushV
	var_71_object = var_17_bool; // 0x926 Mov
	func_4815(var_71_object); // 0x927 NEW_2
	
Label_2345:
	return 2; // 0x929 Return
}


task_4_event_30(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_bool, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_int = 0; var_21_int = 0; // 0x92a PushV
	var_22_bool = 0; var_23_object = Obj(); var_24_object = Obj(); var_25_bool = 0; // 0x92b PushV
	var_23_object = var_17_bool; // 0x92c Mov
	var_24_object = var_18_object; // 0x92d Mov
	var_25_bool = var_19_bool; // 0x92e Mov
	func_5258(var_22_bool, var_23_object, var_24_object, var_25_bool); // 0x92f NEW_2
	if(var_22_bool == 0) goto Label_2373; // 0x931 JumpB
	var_84_int = 0; var_85_object = Obj(); var_86_bool = 0; // 0x932 PushV
	var_85_object = var_17_bool; // 0x933 Mov
	var_86_bool = var_19_bool; // 0x934 Mov
	func_4898(var_85_object, var_86_bool); // 0x935 NEW_2
	var_21_int = var_84_int; // 0x936 Mov
	var_117_int = 0; // 0x938 PushI
	var_118_bool = var_21_int > var_117_int; // 0x939 GT
	if(var_118_bool == 0) goto Label_2373; // 0x93a JumpB
	var_119_int = 1; // 0x93b PushI
	var_120_bool = var_21_int > var_119_int; // 0x93c GT
	if(var_120_bool == 0) goto Label_2369; // 0x93d JumpB
	func_2445(); // 0x93f NEW_2
	
Label_2369:
	var_123_object = Obj(); // 0x941 PushV
	var_123_object = var_17_bool; // 0x942 Mov
	func_4905(var_123_object); // 0x943 NEW_2
	
Label_2373:
	return 2; // 0x945 Return
}


task_4_event_40(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	var_18_int = 0; var_19_int = 0; // 0x946 PushV
	var_20_int = 0; var_21_object = Obj(); // 0x947 PushV
	var_21_object = var_17_bool; // 0x948 Mov
	func_4950(var_20_int, var_21_object); // 0x949 NEW_2
	var_19_int = var_20_int; // 0x94a Mov
	var_62_int = 0; // 0x94c PushI
	var_63_bool = var_19_int > var_62_int; // 0x94d GT
	if(var_63_bool == 0) goto Label_2393; // 0x94e JumpB
	var_64_int = 1; // 0x94f PushI
	var_65_bool = var_19_int > var_64_int; // 0x950 GT
	if(var_65_bool == 0) goto Label_2389; // 0x951 JumpB
	func_2445(); // 0x953 NEW_2
	
Label_2389:
	var_68_object = Obj(); // 0x955 PushV
	var_68_object = var_17_bool; // 0x956 Mov
	func_4966(var_68_object); // 0x957 NEW_2
	
Label_2393:
	return 2; // 0x959 Return
}


task_4_event_42(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_string, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_int = 0; var_20_int = 0; // 0x95a PushV
	var_21_bool = 0; var_22_object = Obj(); var_23_string = ""; // 0x95b PushV
	var_22_object = var_17_object; // 0x95c Mov
	var_23_string = var_18_bool; // 0x95d Mov
	func_4660(var_21_bool, var_22_object, var_23_string); // 0x95e NEW_2
	if(var_21_bool == 0) goto Label_2410; // 0x960 JumpB
	func_2445(); // 0x962 NEW_2
	var_51_object = Obj(); var_52_string = ""; // 0x964 PushV
	var_51_object = var_17_object; // 0x965 Mov
	var_52_string = var_18_bool; // 0x966 Mov
	func_4692(var_51_object, var_52_string); // 0x967 NEW_2
	goto Label_2430; // 0x969 Jump
	
Label_2430:
	return 2; // 0x97e Return
	
Label_2410:
	var_127_int = 0; var_128_string = ""; var_129_object = Obj(); // 0x96a PushV
	var_128_string = var_18_bool; // 0x96b Mov
	var_129_object = var_17_object; // 0x96c Mov
	func_4972(var_129_object); // 0x96d NEW_2
	var_20_int = var_127_int; // 0x96e Mov
	var_130_int = 0; // 0x970 PushI
	var_131_bool = var_20_int > var_130_int; // 0x971 GT
	if(var_131_bool == 0) goto Label_2430; // 0x972 JumpB
	var_132_int = 1; // 0x973 PushI
	var_133_bool = var_20_int > var_132_int; // 0x974 GT
	if(var_133_bool == 0) goto Label_2425; // 0x975 JumpB
	func_2445(); // 0x977 NEW_2
	
Label_2425:
	var_134_string = ""; var_135_object = Obj(); // 0x979 PushV
	var_134_string = var_18_bool; // 0x97a Mov
	var_135_object = var_17_object; // 0x97b Mov
	func_4975(); // 0x97c NEW_2
}


task_4_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_string, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	var_18_bool = 0; var_19_string = ""; // 0x980 PushV
	var_19_string = var_17_bool; // 0x981 Mov
	func_4759(var_18_bool, var_19_string); // 0x982 NEW_2
	if(var_18_bool == 0) goto Label_2444; // 0x984 JumpB
	func_2445(); // 0x986 NEW_2
	var_29_string = ""; // 0x988 PushV
	var_29_string = var_17_bool; // 0x989 Mov
	func_4775(var_29_string); // 0x98a NEW_2
	
Label_2444:
	return 0; // 0x98c Return
}


task_4_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	func_2445(); // 0x99a NEW_2
	var_20_object = Obj(); // 0x99c PushV
	var_20_object = var_17_bool; // 0x99d Mov
	func_4636(); // 0x99e NEW_2
	return 0; // 0x9a0 Return
}


task_4_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_int, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	var_18_cvector = CVector(0,0,0); var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); // 0x9a1 PushV
	var_22_int = 111; // 0x9a2 PushI
	var_23_bool = var_17_bool != var_22_int; // 0x9a3 Neq
	if(var_23_bool == 0) goto Label_2470; // 0x9a4 JumpB
	return 4; // 0x9a5 Return
	
Label_2470:
	var_24_bool = 0; var_25_object = Obj(); // 0x9a6 PushV
	var_25_object = var_0_object; // 0x9a7 MovT
	func_3620(var_24_bool, var_25_object); // 0x9a8 NEW_2
	var_58_bool = var_24_bool == 0; // 0x9aa Not
	if(var_58_bool == 0) goto Label_2480; // 0x9ab JumpB
	func_2445(); // 0x9ad NEW_2
	return 4; // 0x9af Return
	
Label_2480:
	GetDirection(var_20_cvector); // 0x9b0 Func
	var_61_cvector = CVector(0,0,0); var_62_object = Obj(); // 0x9b2 PushV
	var_62_object = var_0_object; // 0x9b3 MovT
	func_3474(var_62_object); // 0x9b4 NEW_2
	var_21_cvector = var_61_cvector; // 0x9b5 Mov
	var_67_float = 0; var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0); // 0x9b7 PushV
	var_68_cvector = var_20_cvector; // 0x9b8 Mov
	var_69_cvector = var_21_cvector; // 0x9b9 Mov
	func_4020(var_67_float, var_68_cvector, var_69_cvector); // 0x9ba NEW_2
	var_91_float = 0.5; // 0x9bc PushF
	var_92_bool = var_67_float < var_91_float; // 0x9bd LT
	if(var_92_bool == 0) goto Label_2499; // 0x9be JumpB
	var_93_object = Obj(); // 0x9bf PushV
	var_93_object = var_0_object; // 0x9c0 MovT
	func_3770(); // 0x9c1 NEW_2
	
Label_2499:
	return 4; // 0x9c3 Return
}


task_4_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool)
{
	func_2445(); // 0x9c5 NEW_2
	func_4949(); // 0x9c8 NEW_2
	return 0; // 0x9ca Return
}


task_4_event_1(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	var_18_bool = 0; var_19_object = Obj(); // 0x9cc PushV
	var_19_object = var_17_bool; // 0x9cd Mov
	func_4717(var_18_bool, var_19_object); // 0x9ce NEW_2
	if(var_18_bool == 0) goto Label_2520; // 0x9d0 JumpB
	func_2445(); // 0x9d2 NEW_2
	var_32_object = Obj(); // 0x9d4 PushV
	var_32_object = var_17_bool; // 0x9d5 Mov
	func_4740(var_32_object); // 0x9d6 NEW_2
	
Label_2520:
	return 0; // 0x9d8 Return
}


task_6_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool)
{
	func_3267(var_16_bool); // 0xc7e NEW_2
	func_4949(); // 0xc81 NEW_2
	return 0; // 0xc83 Return
}


task_6_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool, var_17_int)
{
	var_18_int = 1; // 0xcb6 PushI
	var_19_bool = var_17_int == var_18_int; // 0xcb7 Eq
	if(var_19_bool == 0) goto Label_3262; // 0xcb8 JumpB
	var_20_object = Obj(); // 0xcb9 PushV
	var_20_object = var_1_object; // 0xcba MovT
	func_4061(var_20_object); // 0xcbb NEW_2
	goto Label_3266; // 0xcbd Jump
	
Label_3266:
	return 0; // 0xcc2 Return
	
Label_3262:
	var_25_int = 0; // 0xcbe PushV
	var_25_int = var_17_int; // 0xcbf Mov
	func_3411(var_16_bool, var_17_int, var_25_int); // 0xcc0 NEW_2
}


task_6_event_1(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool, var_17_object)
{
	var_18_bool = 0; // 0xcd1 PushV
	var_18_bool = 0; // 0xcd2 MovB
	var_19_bool = var_1_object == var_17_object; // 0xcd3 Eq
	if(var_19_bool == 0) goto Label_3288; // 0xcd4 JumpB
	var_20_bool = var_2_object == 0; // 0xcd5 Not
	if(var_20_bool == 0) goto Label_3288; // 0xcd6 JumpB
	var_18_bool = 1; // 0xcd7 MovB
	
Label_3288:
	if(var_18_bool == 0) goto Label_3294; // 0xcd8 JumpB
	var_2_object = 1; // 0xcd9 TMovB
	var_21_object = Obj(); // 0xcda PushV
	var_21_object = var_17_object; // 0xcdb Mov
	func_3902(var_21_object); // 0xcdc NEW_2
	
Label_3294:
	return 0; // 0xcde Return
}


task_6_event_2(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool, var_17_object)
{
	var_18_bool = 0; // 0xce0 PushV
	var_18_bool = 0; // 0xce1 MovB
	var_19_bool = var_1_object == var_17_object; // 0xce2 Eq
	if(var_19_bool == 0) goto Label_3303; // 0xce3 JumpB
	var_20_object = var_2_object; // 0xce4 PushT
	if(var_20_object == 0) goto Label_3303; // 0xce5 JumpB
	var_18_bool = 1; // 0xce6 MovB
	
Label_3303:
	if(var_18_bool == 0) goto Label_3308; // 0xce7 JumpB
	var_2_object = 0; // 0xce8 TMovB
	var_21_string = "head"; // 0xce9 PushS
	UnlookAsync(var_21_string); // 0xcea Func
	
Label_3308:
	return 0; // 0xcec Return
}


task_6_event_10(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool, var_17_object)
{
	RequestClearPath(var_17_object); // 0xd66 Func
	return 0; // 0xd68 Return
}


task_6_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool, var_17_object)
{
	func_3267(var_17_object); // 0xd72 NEW_2
	var_22_object = Obj(); // 0xd74 PushV
	var_22_object = var_17_object; // 0xd75 Mov
	func_4636(); // 0xd76 NEW_2
	return 0; // 0xd78 Return
}


event_16(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool, var_17_object, var_18_string)
{
	var_19_float = 0; var_20_float = 0; // 0x120f PushV
	var_21_string = "health"; // 0x1210 PushS
	var_22_bool = var_18_string == var_21_string; // 0x1211 Eq
	if(var_22_bool == 0) goto Label_4635; // 0x1212 JumpB
	var_23_string = "health"; // 0x1213 PushS
	GetProperty(var_23_string, var_20_float); // 0x1214 Func
	var_24_int = 0; // 0x1216 PushI
	var_25_bool = var_20_float <= var_24_int; // 0x1217 LE
	if(var_25_bool == 0) goto Label_4635; // 0x1218 JumpB
	SignalDeath(var_17_object); // 0x1219 Func
	
Label_4635:
	return 2; // 0x121b Return
}


event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool, var_17_object)
{
	var_18_object = Obj(); // 0x121d PushV
	var_18_object = var_17_object; // 0x121e Mov
	func_4615(var_18_object); // 0x121f NEW_2
	return 0; // 0x1221 Return
}


event_22(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool, var_17_object, var_18_int, var_19_float, var_20_float)
{
	var_21_object = Obj(); var_22_int = 0; var_23_float = 0; // 0x1223 PushV
	var_21_object = var_17_object; // 0x1224 Mov
	var_22_int = var_18_int; // 0x1225 Mov
	var_23_float = var_19_float; // 0x1226 Mov
	func_3688(var_21_object, var_22_int, var_23_float); // 0x1227 NEW_2
	return 0; // 0x1229 Return
}


event_43(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool, var_17_object, var_18_int, var_19_float, var_20_float, var_21_cvector, var_22_cvector)
{
	var_23_object = Obj(); var_24_int = 0; var_25_float = 0; var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); // 0x122b PushV
	var_23_object = var_17_object; // 0x122c Mov
	var_24_int = var_18_int; // 0x122d Mov
	var_25_float = var_19_float; // 0x122e Mov
	var_26_cvector = var_21_cvector; // 0x122f Mov
	var_27_cvector = var_22_cvector; // 0x1230 Mov
	func_3756(var_25_float, var_26_cvector, var_27_cvector); // 0x1231 NEW_2
	return 0; // 0x1233 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool)
{
	var_17_int = 0; var_18_int = 0; var_19_int = 0; var_20_int = 0; // 0x7a3 PushV
	var_0_object = 0; // 0x7a4 TMovB
	var_21_bool = 1; // 0x7a5 PushB
	SensePlayerOnly(var_21_bool); // 0x7a6 Func
	func_5200(); // 0x7a9 NEW_2
	func_1989(); // 0x7ac NEW_2
	
Label_1966:
	var_141_int = 2; // 0x7ae PushI
	irand(var_19_int, var_141_int); // 0x7af Func
	var_142_int = 0; // 0x7b1 PushI
	var_143_bool = var_19_int == var_142_int; // 0x7b2 Eq
	if(var_143_bool == 0) goto Label_1980; // 0x7b3 JumpB
	var_0_object = 1; // 0x7b4 TMovB
	func_5226(); // 0x7b6 NEW_2
	var_0_object = 0; // 0x7b8 TMovB
	ResetAAS(); // 0x7b9 Func
	goto Label_1987; // 0x7bb Jump
	
Label_1987:
	goto Label_1966; // 0x7c3 Jump
	
Label_1980:
	var_161_int = 4; // 0x7bc PushI
	irand(var_20_int, var_161_int); // 0x7bd Func
	var_162_int = 1; // 0x7bf PushI
	var_163_int = var_20_int + var_162_int; // 0x7c0 Add
	Sleep(var_163_int); // 0x7c1 Func
}


func_3584(var_34_bool, var_35_object)
{
	var_36_object = Obj(); var_37_object = Obj(); var_38_object = Obj(); var_39_object = Obj(); // 0xe00 PushV
	var_40_bool = var_35_object == 0; // 0xe01 NullEq
	if(var_40_bool == 0) goto Label_3589; // 0xe02 JumpB
	var_34_bool = 0; // 0xe03 MovB
	return 4; // 0xe04 Return
	
Label_3589:
	var_41_bool = 0; // 0xe05 PushV
	var_41_bool = 0; // 0xe06 MovB
	var_42_string = "IsDead"; // 0xe07 PushS
	var_43_int = 1; // 0xe08 PushI
	var_44_bool = IsFuncExist(var_35_object, var_42_string, var_43_int); // 0xe09 FuncExist
	if(var_44_bool == 0) goto Label_3601; // 0xe0a JumpB
	var_45_bool = 0; var_46_object = Obj(); // 0xe0b PushV
	var_46_object = var_35_object; // 0xe0c Mov
	func_3579(var_46_object); // 0xe0d NEW_2
	if(var_45_bool == 0) goto Label_3601; // 0xe0f JumpB
	var_41_bool = 1; // 0xe10 MovB
	
Label_3601:
	if(var_41_bool == 0) goto Label_3604; // 0xe11 JumpB
	var_34_bool = 0; // 0xe12 MovB
	return 4; // 0xe13 Return
	
Label_3604:
	GetScene(var_38_object); // 0xe14 Func
	var_49_bool = var_38_object == 0; // 0xe16 NullEq
	if(var_49_bool == 0) goto Label_3610; // 0xe17 JumpB
	var_34_bool = 0; // 0xe18 MovB
	return 4; // 0xe19 Return
	
Label_3610:
	GetScene(var_39_object); // 0xe1a ObjFunc
	var_50_bool = var_38_object != var_39_object; // 0xe1c Neq
	if(var_50_bool == 0) goto Label_3616; // 0xe1d JumpB
	var_34_bool = 0; // 0xe1e MovB
	return 4; // 0xe1f Return
	
Label_3616:
	var_34_bool = 1; // 0xe20 MovB
	return 4; // 0xe21 Return
}


func_3073(var_318_bool)
{
	var_319_bool = 0; // 0xc01 PushV
	var_319_bool = 0; // 0xc02 MovB
	var_320_bool = 0; // 0xc03 PushV
	func_3045(var_319_bool, var_320_bool); // 0xc04 NEW_2
	if(var_320_bool == 0) goto Label_3084; // 0xc06 JumpB
	var_337_bool = 0; // 0xc07 PushV
	func_3089(var_318_bool, var_319_bool, var_337_bool); // 0xc08 NEW_2
	if(var_337_bool == 0) goto Label_3084; // 0xc0a JumpB
	var_319_bool = 1; // 0xc0b MovB
	
Label_3084:
	if(var_319_bool == 0) goto Label_3087; // 0xc0c JumpB
	var_318_bool = 1; // 0xc0d MovB
	return 0; // 0xc0e Return
	
Label_3087:
	var_318_bool = 0; // 0xc0f MovB
	return 0; // 0xc10 Return
}


func_4098(var_267_bool)
{
	var_269_int = 0; var_270_string = ""; // 0x1003 PushV
	var_270_string = "branch"; // 0x1004 MovS
	func_4037(var_269_int, var_270_string); // 0x1005 NEW_2
	var_271_int = 1; // 0x1007 PushI
	var_272_bool = var_269_int == var_271_int; // 0x1008 Eq
	if(var_272_bool == 0) goto Label_4108; // 0x1009 JumpB
	var_267_bool = 1; // 0x100a MovB
	return 0; // 0x100b Return
	
Label_4108:
	var_267_bool = 0; // 0x100c MovB
	return 0; // 0x100d Return
}


func_4610(var_50_int, var_51_string)
{
	var_52_int = 0; var_53_int = 0; // 0x1202 PushV
	GetInvItemByName(var_53_int, var_51_string); // 0x1203 Func
	var_50_int = var_53_int; // 0x1205 Mov
	return 2; // 0x1206 Return
}


func_0(var_0_object, var_42_int, var_43_object)
{
	var_45_object = Obj(); var_46_bool = 0; var_47_int = 0; var_48_bool = 0; var_49_object = Obj(); var_50_bool = 0; var_51_int = 0; var_52_bool = 0; // 0x0 PushV
	var_0_object = var_43_object; // 0x1 TMov
	var_53_bool = 0; var_54_object = Obj(); var_55_float = 0; // 0x2 PushV
	var_54_object = var_43_object; // 0x3 Mov
	var_55_float = 70.0; // 0x4 MovF
	func_3786(var_54_object, var_55_float); // 0x5 NEW_2
	var_99_bool = var_53_bool == 0; // 0x7 Not
	if(var_99_bool == 0) goto Label_11; // 0x8 JumpB
	var_42_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_49_object); // 0xb Func
	var_100_int = 0; // 0xd PushV
	func_5192(var_100_int); // 0xe NEW_2
	SetNPCName(var_100_int); // 0x10 ObjFunc
	var_101_int = 0; // 0x12 PushV
	func_5190(var_101_int); // 0x13 NEW_2
	SetNPCDescription(var_101_int); // 0x15 ObjFunc
	var_102_string = ""; // 0x17 PushV
	func_5194(var_102_string); // 0x18 NEW_2
	SetPhoto(var_102_string); // 0x1a ObjFunc
	var_103_string = ""; // 0x1c PushV
	func_5196(var_103_string); // 0x1d NEW_2
	SetPhoto2(var_103_string); // 0x1f ObjFunc
	var_104_int = 0; // 0x21 PushV
	func_4258(var_104_int); // 0x22 NEW_2
	SetPlayerName(var_104_int); // 0x24 ObjFunc
	var_51_int = -1; // 0x26 MovI
	IsOverrideActive(var_50_bool); // 0x27 Func
	var_112_bool = var_50_bool; // 0x29 Push
	if(var_112_bool == 0) goto Label_45; // 0x2a JumpB
	var_42_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_49_object); // 0x2d Func
	var_113_object = Obj(); var_114_object = Obj(); // 0x2f PushV
	var_113_object = var_43_object; // 0x30 Mov
	var_114_object = var_49_object; // 0x31 Mov
	TaskCall(1); // 0x32 TaskCall
	func_74(var_115_object, var_116_object, var_117_string, var_118_bool, var_113_object, var_114_object); // 0x33 NEW_2
	TaskReturn(); // 0x34 TaskReturn
	IsDialogEnd(var_52_bool); // 0x36 ObjFunc
	
Label_56:
	var_291_bool = var_52_bool == 0; // 0x38 Not
	if(var_291_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_52_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_292_object = Obj(); // 0x3f PushV
	var_292_object = var_43_object; // 0x40 Mov
	func_3854(); // 0x41 NEW_2
	StopDialog(var_49_object); // 0x43 Func
	GetReturnValue(var_51_int); // 0x45 ObjFunc
	var_42_int = var_51_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_4615(var_18_object)
{
	var_19_object = Obj(); // 0x1208 PushV
	var_19_object = var_18_object; // 0x1209 Mov
	TaskCall(2); // 0x120a TaskCall
	func_1799(var_19_object); // 0x120b NEW_2
	TaskReturn(); // 0x120c TaskReturn
	return 0; // 0x120e Return
}


func_4110(var_120_bool)
{
	var_122_int = 0; var_123_string = ""; // 0x100f PushV
	var_123_string = "branch"; // 0x1010 MovS
	func_4037(var_122_int, var_123_string); // 0x1011 NEW_2
	var_126_int = 2; // 0x1013 PushI
	var_127_bool = var_122_int == var_126_int; // 0x1014 Eq
	if(var_127_bool == 0) goto Label_4120; // 0x1015 JumpB
	var_120_bool = 1; // 0x1016 MovB
	return 0; // 0x1017 Return
	
Label_4120:
	var_120_bool = 0; // 0x1018 MovB
	return 0; // 0x1019 Return
}


func_3089(var_0_object, var_4_bool, var_337_bool)
{
	var_338_object = Obj(); var_339_bool = 0; var_340_float = 0; var_341_cvector = CVector(0,0,0); var_342_cvector = CVector(0,0,0); var_343_object = Obj(); var_344_bool = 0; var_345_float = 0; var_346_cvector = CVector(0,0,0); var_347_cvector = CVector(0,0,0); // 0xc11 PushV
	GetScene(var_343_object); // 0xc12 Func
	var_344_bool = 0; // 0xc14 MovB
	
Label_3093:
	var_348_cvector = CVector(0,0,0); var_349_object = Obj(); // 0xc15 PushV
	var_349_object = var_0_object; // 0xc16 MovT
	func_3474(var_349_object); // 0xc17 NEW_2
	var_354_int = -var_348_cvector; // 0xc19 Neg
	FindDirLength(var_345_float, var_354_int, var_345_float); // 0xc1a Func
	var_355_bool = var_345_float < var_4_bool; // 0xc1c LT
	if(var_355_bool == 0) goto Label_3103; // 0xc1d JumpB
	goto Label_3131; // 0xc1e Jump
	
Label_3131:
	var_337_bool = var_344_bool; // 0xc3b Mov
	return 10; // 0xc3c Return
	
Label_3103:
	Face(var_0_object); // 0xc1f Func
	var_356_string = "all"; // 0xc21 PushS
	var_357_string = "bjump"; // 0xc22 PushS
	PlayAnimation(var_356_string, var_357_string); // 0xc23 Func
	GetPFPosition(var_346_cvector); // 0xc25 TObjFunc
	GetPFPosition(var_347_cvector); // 0xc27 Func
	WaitForAnimEnd(); // 0xc29 Func
	func_3177(var_347_cvector); // 0xc2c NEW_2
	StopAsync(); // 0xc2e Func
	var_358_cvector = CVector(0.0, 0.0, 0.0); // 0xc30 PushVec
	SetSpeed(var_358_cvector); // 0xc31 Func
	var_344_bool = 1; // 0xc33 MovB
	var_359_bool = 0; // 0xc34 PushV
	func_3045(var_347_cvector, var_359_bool); // 0xc35 NEW_2
	var_360_bool = var_359_bool == 0; // 0xc37 Not
	if(var_360_bool == 0) goto Label_3130; // 0xc38 JumpB
	goto Label_3131; // 0xc39 Jump
	
Label_3130:
	goto Label_3093; // 0xc3a Jump
}


func_4122(var_146_bool, var_147_object)
{
	var_148_bool = 0; var_149_object = Obj(); // 0x101b PushV
	var_149_object = var_147_object; // 0x101c Mov
	func_4202(var_149_object); // 0x101d NEW_2
	if(var_148_bool == 0) goto Label_4130; // 0x101f JumpB
	var_146_bool = 1; // 0x1020 MovB
	return 0; // 0x1021 Return
	
Label_4130:
	var_146_bool = 0; // 0x1022 MovB
	return 0; // 0x1023 Return
}


func_4132(var_279_bool, var_280_object)
{
	var_281_bool = 0; var_282_object = Obj(); // 0x1025 PushV
	var_282_object = var_280_object; // 0x1026 Mov
	func_4209(var_282_object); // 0x1027 NEW_2
	if(var_281_bool == 0) goto Label_4140; // 0x1029 JumpB
	var_279_bool = 1; // 0x102a MovB
	return 0; // 0x102b Return
	
Label_4140:
	var_279_bool = 0; // 0x102c MovB
	return 0; // 0x102d Return
}


func_3620(var_30_bool, var_31_object)
{
	var_32_int = 0; var_33_int = 0; // 0xe24 PushV
	var_34_bool = 0; var_35_object = Obj(); // 0xe25 PushV
	var_35_object = var_31_object; // 0xe26 Mov
	func_3584(var_34_bool, var_35_object); // 0xe27 NEW_2
	var_51_bool = var_34_bool == 0; // 0xe29 Not
	if(var_51_bool == 0) goto Label_3629; // 0xe2a JumpB
	var_30_bool = 0; // 0xe2b MovB
	return 2; // 0xe2c Return
	
Label_3629:
	var_52_bool = 0; var_53_object = Obj(); var_54_string = ""; // 0xe2d PushV
	var_53_object = var_31_object; // 0xe2e Mov
	var_54_string = "noaccess"; // 0xe2f MovS
	func_3494(var_52_bool, var_53_object, var_54_string); // 0xe30 NEW_2
	var_61_bool = var_52_bool == 0; // 0xe32 Not
	if(var_61_bool == 0) goto Label_3638; // 0xe33 JumpB
	var_30_bool = 1; // 0xe34 MovB
	return 2; // 0xe35 Return
	
Label_3638:
	var_62_string = "noaccess"; // 0xe36 PushS
	GetProperty(var_62_string, var_33_int); // 0xe37 ObjFunc
	var_63_int = 0; // 0xe39 PushI
	var_30_bool = var_33_int == var_63_int; // 0xe3a Eq2
	return 2; // 0xe3b Return
}


func_4142(var_172_bool, var_173_object)
{
	var_174_bool = 0; var_175_object = Obj(); // 0x102f PushV
	var_175_object = var_173_object; // 0x1030 Mov
	func_4216(var_175_object); // 0x1031 NEW_2
	if(var_174_bool == 0) goto Label_4150; // 0x1033 JumpB
	var_172_bool = 1; // 0x1034 MovB
	return 0; // 0x1035 Return
	
Label_4150:
	var_172_bool = 0; // 0x1036 MovB
	return 0; // 0x1037 Return
}


func_5167(var_367_bool)
{
	var_369_int = 0; var_370_bool = 0; var_371_int = 0; var_372_bool = 0; // 0x142f PushV
	GetItemID(var_371_int); // 0x1430 ObjFunc
	var_373_string = "Weapon"; // 0x1432 PushS
	HasInvItemProperty(var_372_bool, var_371_int, var_373_string); // 0x1433 Func
	var_367_bool = var_372_bool; // 0x1435 Mov
	return 4; // 0x1436 Return
}


func_4660(var_21_bool, var_22_object, var_23_string)
{
	var_24_string = "unholster"; // 0x1235 PushS
	var_25_bool = var_23_string == var_24_string; // 0x1236 Eq
	if(var_25_bool == 0) goto Label_4671; // 0x1237 JumpB
	var_26_bool = 0; var_27_object = Obj(); // 0x1238 PushV
	var_27_object = var_22_object; // 0x1239 Mov
	func_4977(var_27_object); // 0x123a NEW_2
	var_21_bool = var_26_bool; // 0x123b Mov
	return 0; // 0x123d Return
	
Label_4671:
	var_28_string = "player_shot"; // 0x123f PushS
	var_29_bool = var_23_string == var_28_string; // 0x1240 Eq
	if(var_29_bool == 0) goto Label_4681; // 0x1241 JumpB
	var_30_bool = 0; var_31_object = Obj(); // 0x1242 PushV
	var_31_object = var_22_object; // 0x1243 Mov
	func_4982(var_30_bool, var_31_object); // 0x1244 NEW_2
	var_21_bool = var_30_bool; // 0x1245 Mov
	return 0; // 0x1247 Return
	
Label_4681:
	var_45_string = "battle"; // 0x1249 PushS
	var_46_bool = var_23_string == var_45_string; // 0x124a Eq
	if(var_46_bool == 0) goto Label_4690; // 0x124b JumpB
	var_47_bool = 0; var_48_object = Obj(); // 0x124c PushV
	var_48_object = var_22_object; // 0x124d Mov
	func_5003(var_48_object); // 0x124e NEW_2
	var_21_bool = var_47_bool; // 0x124f Mov
	return 0; // 0x1251 Return
	
Label_4690:
	var_21_bool = 0; // 0x1252 MovB
	return 0; // 0x1253 Return
}


func_5175(var_41_object, var_44_object)
{
	var_42_int = 0; var_43_object = Obj(); // 0x1438 PushV
	var_43_object = var_41_object; // 0x1439 Mov
	TaskCall(0); // 0x143a TaskCall
	func_0(var_44_object, var_42_int, var_43_object); // 0x143b NEW_2
	TaskReturn(); // 0x143c TaskReturn
	var_299_int = 100; // 0x143e PushI
	var_300_bool = var_44_object == var_299_int; // 0x143f Eq
	if(var_300_bool == 0) goto Label_5189; // 0x1440 JumpB
	var_301_object = Obj(); // 0x1441 PushV
	var_301_object = var_41_object; // 0x1442 Mov
	func_5020(); // 0x1443 NEW_2
	
Label_5189:
	return 0; // 0x1445 Return
}


func_4152(var_178_bool, var_179_object)
{
	var_180_bool = 0; var_181_object = Obj(); // 0x1039 PushV
	var_181_object = var_179_object; // 0x103a Mov
	func_4223(var_181_object); // 0x103b NEW_2
	if(var_180_bool == 0) goto Label_4160; // 0x103d JumpB
	var_178_bool = 1; // 0x103e MovB
	return 0; // 0x103f Return
	
Label_4160:
	var_178_bool = 0; // 0x1040 MovB
	return 0; // 0x1041 Return
}


func_3644(var_34_object)
{
	var_35_bool = 0; var_36_int = 0; var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_string = ""; var_42_bool = 0; var_43_int = 0; var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_string = ""; // 0xe3c PushV
	var_49_bool = var_34_object == 0; // 0xe3d NullEq
	if(var_49_bool == 0) goto Label_3648; // 0xe3e JumpB
	return 14; // 0xe3f Return
	
Label_3648:
	IsDead(var_42_bool); // 0xe40 Func
	var_50_bool = var_42_bool; // 0xe42 Push
	if(var_50_bool == 0) goto Label_3653; // 0xe43 JumpB
	return 14; // 0xe44 Return
	
Label_3653:
	GetSecondaryAnimationType(var_43_int); // 0xe45 Func
	var_51_int = 0; // 0xe47 PushI
	var_52_bool = var_43_int < var_51_int; // 0xe48 LT
	if(var_52_bool == 0) goto Label_3659; // 0xe49 JumpB
	return 14; // 0xe4a Return
	
Label_3659:
	GetPosition(var_44_cvector); // 0xe4b ObjFunc
	GetPosition(var_45_cvector); // 0xe4d Func
	GetDirection(var_46_cvector); // 0xe4f Func
	var_47_cvector = var_45_cvector - var_44_cvector; // 0xe51 Sub2
	var_53_float = GetByIndex(var_47_cvector, 0); // 0xe52 PushE
	var_54_float = GetByIndex(var_46_cvector, 0); // 0xe53 PushE
	var_55_float = var_53_float * var_54_float; // 0xe54 Mult
	var_56_float = GetByIndex(var_47_cvector, 2); // 0xe55 PushE
	var_57_float = GetByIndex(var_46_cvector, 2); // 0xe56 PushE
	var_58_float = var_56_float * var_57_float; // 0xe57 Mult
	var_59_int = var_55_float + var_58_float; // 0xe58 Add
	var_60_int = 0; // 0xe59 PushI
	var_61_bool = var_59_int >= var_60_int; // 0xe5a GE
	if(var_61_bool == 0) goto Label_3678; // 0xe5b JumpB
	var_48_string = "fhit"; // 0xe5c MovS
	goto Label_3679; // 0xe5d Jump
	
Label_3679:
	var_62_string = "hit_react"; // 0xe5f PushS
	var_63_string = "1"; // 0xe60 PushS
	var_64_int = var_48_string + var_63_string; // 0xe61 Add
	var_65_string = "2"; // 0xe62 PushS
	var_66_int = var_48_string + var_65_string; // 0xe63 Add
	var_67_int = -10; // 0xe64 PushI
	FadeSecondaryAnimation(var_62_string, var_64_int, var_66_int, var_67_int); // 0xe65 Func
	return 14; // 0xe67 Return
	
Label_3678:
	var_48_string = "bhit"; // 0xe5e MovS
}


func_3134(var_0_object, var_268_bool)
{
	var_269_bool = 0; var_270_bool = 0; // 0xc3e PushV
	var_271_string = "IsAttacking"; // 0xc3f PushS
	var_272_int = 1; // 0xc40 PushI
	var_273_bool = IsFuncExist(var_0_object, var_271_string, var_272_int); // 0xc41 FuncExist
	if(var_273_bool == 0) goto Label_3143; // 0xc42 JumpB
	IsAttacking(var_270_bool); // 0xc43 TObjFunc
	var_268_bool = var_270_bool; // 0xc45 Mov
	return 2; // 0xc46 Return
	
Label_3143:
	var_268_bool = 0; // 0xc47 MovB
	return 2; // 0xc48 Return
}


func_4162(var_184_bool, var_185_object)
{
	var_186_bool = 0; var_187_object = Obj(); // 0x1043 PushV
	var_187_object = var_185_object; // 0x1044 Mov
	func_4230(var_187_object); // 0x1045 NEW_2
	if(var_186_bool == 0) goto Label_4170; // 0x1047 JumpB
	var_184_bool = 1; // 0x1048 MovB
	return 0; // 0x1049 Return
	
Label_4170:
	var_184_bool = 0; // 0x104a MovB
	return 0; // 0x104b Return
}


func_5190(var_101_int)
{
	var_101_int = 515568; // 0x1446 MovI
	return 0; // 0x1447 Return
}


func_5192(var_100_int)
{
	var_100_int = 503353; // 0x1448 MovI
	return 0; // 0x1449 Return
}


func_3145(var_2_object, var_5_bool)
{
	var_385_float = 0; var_386_int = 0; var_387_float = 0; var_388_int = 0; // 0xc49 PushV
	var_389_bool = var_2_object == 0; // 0xc4a Not
	if(var_389_bool == 0) goto Label_3149; // 0xc4b JumpB
	return 4; // 0xc4c Return
	
Label_3149:
	var_390_bool = var_5_bool; // 0xc4d PushT
	if(var_390_bool == 0) goto Label_3157; // 0xc4e JumpB
	var_391_int = -1; // 0xc4f PushI
	var_5_bool = var_5_bool + var_391_int; // 0xc50 Add2
	var_392_int = 0; // 0xc51 PushI
	var_393_bool = var_5_bool > var_392_int; // 0xc52 GT
	if(var_393_bool == 0) goto Label_3157; // 0xc53 JumpB
	return 4; // 0xc54 Return
	
Label_3157:
	rand(var_387_float); // 0xc55 Func
	var_394_float = 0; // 0xc57 PushV
	func_3195(var_394_float); // 0xc58 NEW_2
	var_395_bool = var_387_float < var_394_float; // 0xc5a LT
	if(var_395_bool == 0) goto Label_3176; // 0xc5b JumpB
	irand(var_388_int, var_387_float); // 0xc5c Func
	var_396_int = 1; // 0xc5e PushI
	var_388_int = var_388_int + var_396_int; // 0xc5f Add2
	var_397_string = "attack"; // 0xc60 PushS
	var_398_int = var_397_string + var_388_int; // 0xc61 Add
	Speak(var_398_int); // 0xc62 Func
	var_399_int = 0; // 0xc64 PushV
	func_3193(var_399_int); // 0xc65 NEW_2
	var_5_bool = var_399_int; // 0xc66 TMov
	
Label_3176:
	return 4; // 0xc68 Return
}


func_5194(var_102_string)
{
	var_102_string = "ui/NPC_Citizen1.png"; // 0x144a MovS
	return 0; // 0x144b Return
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_113_object, var_114_object)
{
	var_0_object = var_114_object; // 0x4b TMov
	var_1_object = var_113_object; // 0x4c TMov
	var_3_string = 0; // 0x4d TMovB
	var_119_int = 1; // 0x4e PushI
	if(var_119_int == 0) goto Label_293; // 0x4f JumpB
	var_120_bool = 0; var_121_object = Obj(); // 0x50 PushV
	var_121_object = var_1_object; // 0x51 MovT
	func_4110(var_121_object); // 0x52 NEW_2
	if(var_120_bool == 0) goto Label_237; // 0x54 JumpB
	var_128_string = ""; // 0x55 PushV
	var_128_string = "Neutral"; // 0x56 MovS
	func_323(var_114_object, var_128_string); // 0x57 NEW_2
	var_145_int = 543041; // 0x59 PushI
	SetMessage(var_145_int); // 0x5a TObjFunc
	ClearReplies(); // 0x5c TObjFunc
	var_146_bool = 0; var_147_object = Obj(); // 0x5e PushV
	var_147_object = var_1_object; // 0x5f MovT
	func_4122(var_146_bool, var_147_object); // 0x60 NEW_2
	if(var_146_bool == 0) goto Label_104; // 0x62 JumpB
	var_157_int = 538210; // 0x63 PushI
	var_158_int = -1; // 0x64 PushI
	var_159_int = 40087; // 0x65 PushI
	AddReply(var_157_int, var_158_int, var_159_int); // 0x66 TObjFunc
	
Label_104:
	var_160_bool = 0; var_161_object = Obj(); // 0x68 PushV
	var_161_object = var_1_object; // 0x69 MovT
	func_4122(var_160_bool, var_161_object); // 0x6a NEW_2
	if(var_160_bool == 0) goto Label_114; // 0x6c JumpB
	var_162_int = 543042; // 0x6d PushI
	var_163_int = -1; // 0x6e PushI
	var_164_int = 45494; // 0x6f PushI
	AddReply(var_162_int, var_163_int, var_164_int); // 0x70 TObjFunc
	
Label_114:
	var_165_bool = 0; var_166_object = Obj(); // 0x72 PushV
	var_166_object = var_1_object; // 0x73 MovT
	func_4122(var_165_bool, var_166_object); // 0x74 NEW_2
	if(var_165_bool == 0) goto Label_124; // 0x76 JumpB
	var_167_int = 543043; // 0x77 PushI
	var_168_int = -1; // 0x78 PushI
	var_169_int = 45495; // 0x79 PushI
	AddReply(var_167_int, var_168_int, var_169_int); // 0x7a TObjFunc
	
Label_124:
	var_170_bool = 0; // 0x7c PushV
	var_170_bool = 1; // 0x7d MovB
	var_171_bool = 0; // 0x7e PushV
	var_171_bool = 1; // 0x7f MovB
	var_172_bool = 0; var_173_object = Obj(); // 0x80 PushV
	var_173_object = var_1_object; // 0x81 MovT
	func_4142(var_172_bool, var_173_object); // 0x82 NEW_2
	if(var_172_bool == 0) goto Label_139; // 0x84 JumpB
	var_178_bool = 0; var_179_object = Obj(); // 0x85 PushV
	var_179_object = var_1_object; // 0x86 MovT
	func_4152(var_178_bool, var_179_object); // 0x87 NEW_2
	if(var_178_bool == 0) goto Label_139; // 0x89 JumpB
	var_171_bool = 0; // 0x8a MovB
	
Label_139:
	if(var_171_bool == 0) goto Label_146; // 0x8b JumpB
	var_184_bool = 0; var_185_object = Obj(); // 0x8c PushV
	var_185_object = var_1_object; // 0x8d MovT
	func_4162(var_184_bool, var_185_object); // 0x8e NEW_2
	if(var_184_bool == 0) goto Label_146; // 0x90 JumpB
	var_170_bool = 0; // 0x91 MovB
	
Label_146:
	if(var_170_bool == 0) goto Label_152; // 0x92 JumpB
	var_190_int = 543055; // 0x93 PushI
	var_191_int = -1; // 0x94 PushI
	var_192_int = 45510; // 0x95 PushI
	AddReply(var_190_int, var_191_int, var_192_int); // 0x96 TObjFunc
	
Label_152:
	var_193_bool = 0; // 0x98 PushV
	var_193_bool = 1; // 0x99 MovB
	var_194_bool = 0; var_195_object = Obj(); // 0x9a PushV
	var_195_object = var_1_object; // 0x9b MovT
	func_4142(var_194_bool, var_195_object); // 0x9c NEW_2
	if(var_194_bool == 0) goto Label_165; // 0x9e JumpB
	var_196_bool = 0; var_197_object = Obj(); // 0x9f PushV
	var_197_object = var_1_object; // 0xa0 MovT
	func_4152(var_196_bool, var_197_object); // 0xa1 NEW_2
	if(var_196_bool == 0) goto Label_165; // 0xa3 JumpB
	var_193_bool = 0; // 0xa4 MovB
	
Label_165:
	if(var_193_bool == 0) goto Label_171; // 0xa5 JumpB
	var_198_int = 543056; // 0xa6 PushI
	var_199_int = -1; // 0xa7 PushI
	var_200_int = 45511; // 0xa8 PushI
	AddReply(var_198_int, var_199_int, var_200_int); // 0xa9 TObjFunc
	
Label_171:
	var_201_bool = 0; // 0xab PushV
	var_201_bool = 1; // 0xac MovB
	var_202_bool = 0; // 0xad PushV
	var_202_bool = 1; // 0xae MovB
	var_203_bool = 0; var_204_object = Obj(); // 0xaf PushV
	var_204_object = var_1_object; // 0xb0 MovT
	func_4172(var_203_bool, var_204_object); // 0xb1 NEW_2
	if(var_203_bool == 0) goto Label_186; // 0xb3 JumpB
	var_209_bool = 0; var_210_object = Obj(); // 0xb4 PushV
	var_210_object = var_1_object; // 0xb5 MovT
	func_4182(var_209_bool, var_210_object); // 0xb6 NEW_2
	if(var_209_bool == 0) goto Label_186; // 0xb8 JumpB
	var_202_bool = 0; // 0xb9 MovB
	
Label_186:
	if(var_202_bool == 0) goto Label_193; // 0xba JumpB
	var_215_bool = 0; var_216_object = Obj(); // 0xbb PushV
	var_216_object = var_1_object; // 0xbc MovT
	func_4192(var_215_bool, var_216_object); // 0xbd NEW_2
	if(var_215_bool == 0) goto Label_193; // 0xbf JumpB
	var_201_bool = 0; // 0xc0 MovB
	
Label_193:
	if(var_201_bool == 0) goto Label_199; // 0xc1 JumpB
	var_221_int = 543062; // 0xc2 PushI
	var_222_int = -1; // 0xc3 PushI
	var_223_int = 45517; // 0xc4 PushI
	AddReply(var_221_int, var_222_int, var_223_int); // 0xc5 TObjFunc
	
Label_199:
	var_224_bool = 0; // 0xc7 PushV
	var_224_bool = 1; // 0xc8 MovB
	var_225_bool = 0; // 0xc9 PushV
	var_225_bool = 1; // 0xca MovB
	var_226_bool = 0; // 0xcb PushV
	var_226_bool = 1; // 0xcc MovB
	var_227_bool = 0; var_228_object = Obj(); // 0xcd PushV
	var_228_object = var_1_object; // 0xce MovT
	func_4162(var_227_bool, var_228_object); // 0xcf NEW_2
	if(var_227_bool == 0) goto Label_216; // 0xd1 JumpB
	var_229_bool = 0; var_230_object = Obj(); // 0xd2 PushV
	var_230_object = var_1_object; // 0xd3 MovT
	func_4172(var_229_bool, var_230_object); // 0xd4 NEW_2
	if(var_229_bool == 0) goto Label_216; // 0xd6 JumpB
	var_226_bool = 0; // 0xd7 MovB
	
Label_216:
	if(var_226_bool == 0) goto Label_223; // 0xd8 JumpB
	var_231_bool = 0; var_232_object = Obj(); // 0xd9 PushV
	var_232_object = var_1_object; // 0xda MovT
	func_4182(var_231_bool, var_232_object); // 0xdb NEW_2
	if(var_231_bool == 0) goto Label_223; // 0xdd JumpB
	var_225_bool = 0; // 0xde MovB
	
Label_223:
	if(var_225_bool == 0) goto Label_230; // 0xdf JumpB
	var_233_bool = 0; var_234_object = Obj(); // 0xe0 PushV
	var_234_object = var_1_object; // 0xe1 MovT
	func_4192(var_233_bool, var_234_object); // 0xe2 NEW_2
	if(var_233_bool == 0) goto Label_230; // 0xe4 JumpB
	var_224_bool = 0; // 0xe5 MovB
	
Label_230:
	if(var_224_bool == 0) goto Label_236; // 0xe6 JumpB
	var_235_int = 543064; // 0xe7 PushI
	var_236_int = -1; // 0xe8 PushI
	var_237_int = 45519; // 0xe9 PushI
	AddReply(var_235_int, var_236_int, var_237_int); // 0xea TObjFunc
	
Label_236:
	goto Label_293; // 0xec Jump
	
Label_293:
	var_238_bool = 0; // 0x125 PushV
	func_5198(var_238_bool); // 0x126 NEW_2
	if(var_238_bool == 0) goto Label_308; // 0x128 JumpB
	
Label_297:
	lshWaitForAnimEnd(); // 0x129 Func
	var_239_string = var_3_string; // 0x12b PushT
	if(var_239_string == 0) goto Label_302; // 0x12c JumpB
	goto Label_307; // 0x12d Jump
	
Label_307:
	goto Label_322; // 0x133 Jump
	
Label_322:
	return 0; // 0x142 Return
	
Label_302:
	var_240_string = ""; // 0x12e PushV
	var_240_string = var_2_object; // 0x12f MovT
	func_3871(var_240_string); // 0x130 NEW_2
	goto Label_297; // 0x132 Jump
	
Label_308:
	var_251_string = "all"; // 0x134 PushS
	var_252_string = "idle"; // 0x135 PushS
	PlayAnimation(var_251_string, var_252_string); // 0x136 Func
	
Label_312:
	WaitForAnimEnd(); // 0x138 Func
	var_253_string = var_3_string; // 0x13a PushT
	if(var_253_string == 0) goto Label_317; // 0x13b JumpB
	goto Label_322; // 0x13c Jump
	
Label_317:
	var_254_string = "all"; // 0x13d PushS
	var_255_string = "idle"; // 0x13e PushS
	PlayAnimation(var_254_string, var_255_string); // 0x13f Func
	goto Label_312; // 0x141 Jump
	
Label_237:
	var_256_string = ""; // 0xed PushV
	var_256_string = "Neutral"; // 0xee MovS
	func_323(var_114_object, var_256_string); // 0xef NEW_2
	var_257_int = 538207; // 0xf1 PushI
	SetMessage(var_257_int); // 0xf2 TObjFunc
	ClearReplies(); // 0xf4 TObjFunc
	var_258_bool = 0; var_259_object = Obj(); // 0xf6 PushV
	var_259_object = var_1_object; // 0xf7 MovT
	func_4086(var_259_object); // 0xf8 NEW_2
	if(var_258_bool == 0) goto Label_256; // 0xfa JumpB
	var_264_int = 538208; // 0xfb PushI
	var_265_int = -1; // 0xfc PushI
	var_266_int = 40085; // 0xfd PushI
	AddReply(var_264_int, var_265_int, var_266_int); // 0xfe TObjFunc
	
Label_256:
	var_267_bool = 0; var_268_object = Obj(); // 0x100 PushV
	var_268_object = var_1_object; // 0x101 MovT
	func_4098(var_268_object); // 0x102 NEW_2
	if(var_267_bool == 0) goto Label_266; // 0x104 JumpB
	var_273_int = 538209; // 0x105 PushI
	var_274_int = -1; // 0x106 PushI
	var_275_int = 40086; // 0x107 PushI
	AddReply(var_273_int, var_274_int, var_275_int); // 0x108 TObjFunc
	
Label_266:
	var_276_bool = 0; // 0x10a PushV
	var_276_bool = 0; // 0x10b MovB
	var_277_bool = 0; var_278_object = Obj(); // 0x10c PushV
	var_278_object = var_1_object; // 0x10d MovT
	func_4086(var_278_object); // 0x10e NEW_2
	if(var_277_bool == 0) goto Label_279; // 0x110 JumpB
	var_279_bool = 0; var_280_object = Obj(); // 0x111 PushV
	var_280_object = var_1_object; // 0x112 MovT
	func_4132(var_279_bool, var_280_object); // 0x113 NEW_2
	if(var_279_bool == 0) goto Label_279; // 0x115 JumpB
	var_276_bool = 1; // 0x116 MovB
	
Label_279:
	if(var_276_bool == 0) goto Label_285; // 0x117 JumpB
	var_285_int = 538235; // 0x118 PushI
	var_286_int = 40114; // 0x119 PushI
	var_287_int = 40113; // 0x11a PushI
	AddReply(var_285_int, var_286_int, var_287_int); // 0x11b TObjFunc
	
Label_285:
	var_288_int = 538396; // 0x11d PushI
	var_289_int = -1; // 0x11e PushI
	var_290_int = 40282; // 0x11f PushI
	AddReply(var_288_int, var_289_int, var_290_int); // 0x120 TObjFunc
	goto Label_293; // 0x122 Jump
}


func_5196(var_103_string)
{
	var_103_string = "ui/NPC_Citizen1_b.png"; // 0x144c MovS
	return 0; // 0x144d Return
}


func_4172(var_203_bool, var_204_object)
{
	var_205_bool = 0; var_206_object = Obj(); // 0x104d PushV
	var_206_object = var_204_object; // 0x104e Mov
	func_4237(var_206_object); // 0x104f NEW_2
	if(var_205_bool == 0) goto Label_4180; // 0x1051 JumpB
	var_203_bool = 1; // 0x1052 MovB
	return 0; // 0x1053 Return
	
Label_4180:
	var_203_bool = 0; // 0x1054 MovB
	return 0; // 0x1055 Return
}


func_5198(var_95_bool)
{
	var_95_bool = 0; // 0x144e MovB
	return 0; // 0x144f Return
}


func_5200()
{
	var_22_bool = GlobalVars[0]; // 0x1450 PushGE
	var_22_bool = 0; // 0x1451 MovB
	GlobalVars[0] = var_22_bool; // 0x1452 PopGE
	var_23_bool = 0; // 0x1453 PushV
	var_23_bool = 1; // 0x1454 MovB
	func_4435(var_23_bool); // 0x1455 NEW_2
	return 0; // 0x1457 Return
}


func_4692(var_51_object, var_52_string)
{
	var_53_string = "unholster"; // 0x1255 PushS
	var_54_bool = var_52_string == var_53_string; // 0x1256 Eq
	if(var_54_bool == 0) goto Label_4701; // 0x1257 JumpB
	var_55_object = Obj(); // 0x1258 PushV
	var_55_object = var_51_object; // 0x1259 Mov
	func_4980(); // 0x125a NEW_2
	goto Label_4716; // 0x125c Jump
	
Label_4716:
	return 0; // 0x126c Return
	
Label_4701:
	var_56_string = "player_shot"; // 0x125d PushS
	var_57_bool = var_52_string == var_56_string; // 0x125e Eq
	if(var_57_bool == 0) goto Label_4709; // 0x125f JumpB
	var_58_object = Obj(); // 0x1260 PushV
	var_58_object = var_51_object; // 0x1261 Mov
	func_4997(var_58_object); // 0x1262 NEW_2
	goto Label_4716; // 0x1264 Jump
	
Label_4709:
	var_124_string = "battle"; // 0x1265 PushS
	var_125_bool = var_52_string == var_124_string; // 0x1266 Eq
	if(var_125_bool == 0) goto Label_4716; // 0x1267 JumpB
	var_126_object = Obj(); // 0x1268 PushV
	var_126_object = var_51_object; // 0x1269 Mov
	func_5006(); // 0x126a NEW_2
}


func_4182(var_209_bool, var_210_object)
{
	var_211_bool = 0; var_212_object = Obj(); // 0x1057 PushV
	var_212_object = var_210_object; // 0x1058 Mov
	func_4244(var_212_object); // 0x1059 NEW_2
	if(var_211_bool == 0) goto Label_4190; // 0x105b JumpB
	var_209_bool = 1; // 0x105c MovB
	return 0; // 0x105d Return
	
Label_4190:
	var_209_bool = 0; // 0x105e MovB
	return 0; // 0x105f Return
}


func_5208(var_29_object)
{
	var_30_bool = 0; var_31_bool = 0; // 0x1458 PushV
	var_32_bool = GlobalVars[0]; // 0x1459 PushGE
	if(var_32_bool == 0) goto Label_5221; // 0x145a JumpB
	IsOverrideActive(var_31_bool); // 0x145b Func
	var_33_bool = var_31_bool == 0; // 0x145d Not
	if(var_33_bool == 0) goto Label_5219; // 0x145e JumpB
	var_34_object = Obj(); // 0x145f PushV
	var_34_object = var_29_object; // 0x1460 Mov
	func_4350(var_34_object); // 0x1461 NEW_2
	
Label_5219:
	return 2; // 0x1463 Return
	
Label_5221:
	var_41_object = Obj(); // 0x1465 PushV
	var_41_object = var_29_object; // 0x1466 Mov
	func_5175(var_31_bool, var_41_object); // 0x1467 NEW_2
	return 2; // 0x1469 Return
}


func_4192(var_215_bool, var_216_object)
{
	var_217_bool = 0; var_218_object = Obj(); // 0x1061 PushV
	var_218_object = var_216_object; // 0x1062 Mov
	func_4251(var_218_object); // 0x1063 NEW_2
	if(var_217_bool == 0) goto Label_4200; // 0x1065 JumpB
	var_215_bool = 1; // 0x1066 MovB
	return 0; // 0x1067 Return
	
Label_4200:
	var_215_bool = 0; // 0x1068 MovB
	return 0; // 0x1069 Return
}


func_3688(var_21_object, var_22_int, var_23_float)
{
	var_24_cvector = CVector(0,0,0); var_25_object = Obj(); var_26_int = 0; var_27_bool = 0; var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_int = 0; var_31_int = 0; var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_object = Obj(); var_35_int = 0; var_36_bool = 0; var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_int = 0; var_40_int = 0; var_41_cvector = CVector(0,0,0); // 0xe68 PushV
	var_42_bool = 0; // 0xe69 PushV
	var_42_bool = 0; // 0xe6a MovB
	var_43_bool = 0; // 0xe6b PushV
	var_43_bool = 0; // 0xe6c MovB
	var_44_object = var_21_object; // 0xe6d Push
	if(var_44_object == 0) goto Label_3699; // 0xe6e JumpB
	var_45_int = 4; // 0xe6f PushI
	var_46_bool = var_22_int != var_45_int; // 0xe70 Neq
	if(var_46_bool == 0) goto Label_3699; // 0xe71 JumpB
	var_43_bool = 1; // 0xe72 MovB
	
Label_3699:
	if(var_43_bool == 0) goto Label_3704; // 0xe73 JumpB
	var_47_int = 5; // 0xe74 PushI
	var_48_bool = var_22_int != var_47_int; // 0xe75 Neq
	if(var_48_bool == 0) goto Label_3704; // 0xe76 JumpB
	var_42_bool = 1; // 0xe77 MovB
	
Label_3704:
	if(var_42_bool == 0) goto Label_3751; // 0xe78 JumpB
	var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); // 0xe79 PushV
	var_51_cvector = CVector(0,0,0); var_52_object = Obj(); // 0xe7a PushV
	var_52_object = var_21_object; // 0xe7b Mov
	func_3474(var_52_object); // 0xe7c NEW_2
	var_50_cvector = var_51_cvector; // 0xe7d Mov
	func_3967(var_49_cvector, var_50_cvector); // 0xe7f NEW_2
	var_33_cvector = var_49_cvector; // 0xe80 Mov
	CreateVectorVector(var_34_object); // 0xe82 Func
	var_35_int = 1; // 0xe84 MovI
	
Label_3717:
	var_62_string = "hit"; // 0xe85 PushS
	var_63_int = var_62_string + var_35_int; // 0xe86 Add
	GetGeometryLocator(var_63_int, var_36_bool, var_37_cvector, var_38_cvector); // 0xe87 Func
	var_64_bool = var_36_bool == 0; // 0xe89 Not
	if(var_64_bool == 0) goto Label_3724; // 0xe8a JumpB
	goto Label_3733; // 0xe8b Jump
	
Label_3733:
	size(var_39_int); // 0xe95 ObjFunc
	var_65_int = var_39_int; // 0xe97 Push
	if(var_65_int == 0) goto Label_3750; // 0xe98 JumpB
	irand(var_40_int, var_39_int); // 0xe99 Func
	get(var_41_cvector, var_40_int); // 0xe9b ObjFunc
	var_66_object = Obj(); var_67_int = 0; var_68_float = 0; var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); // 0xe9d PushV
	var_66_object = var_21_object; // 0xe9e Mov
	var_67_int = var_22_int; // 0xe9f Mov
	var_68_float = var_23_float; // 0xea0 Mov
	var_69_cvector = var_41_cvector; // 0xea1 Mov
	var_70_cvector = -var_33_cvector; // 0xea2 Neg2
	func_3756(var_68_float, var_69_cvector, var_70_cvector); // 0xea3 NEW_2
	return 18; // 0xea5 Return
	
Label_3750:
	var_34_object = 0; // 0xea6 SetNull
	
Label_3751:
	var_111_object = Obj(); // 0xea7 PushV
	var_111_object = var_21_object; // 0xea8 Mov
	func_3644(var_111_object); // 0xea9 NEW_2
	return 18; // 0xeab Return
	
Label_3724:
	var_112_int = var_38_cvector | var_33_cvector; // 0xe8c Or
	var_113_float = 0.70711; // 0xe8d PushF
	var_114_bool = var_112_int >= var_113_float; // 0xe8e GE
	if(var_114_bool == 0) goto Label_3730; // 0xe8f JumpB
	add(var_37_cvector); // 0xe90 ObjFunc
	
Label_3730:
	var_115_int = 1; // 0xe92 PushI
	var_35_int = var_35_int + var_115_int; // 0xe93 Add2
	goto Label_3717; // 0xe94 Jump
}


func_3177(var_0_object)
{
	var_141_object = Obj(); // 0xc69 PushV
	var_141_object = var_0_object; // 0xc6a MovT
	func_4061(var_141_object); // 0xc6b NEW_2
	return 0; // 0xc6d Return
}


func_5226()
{
	var_144_int = 0; var_145_bool = 0; var_146_int = 0; var_147_int = 0; var_148_bool = 0; var_149_int = 0; // 0x146a PushV
	var_147_int = 0; // 0x146b MovI
	
Label_5228:
	var_150_string = "all"; // 0x146c PushS
	var_151_string = ""; var_152_int = 0; // 0x146d PushV
	var_152_int = var_147_int; // 0x146e Mov
	func_5013(var_151_string, var_152_int); // 0x146f NEW_2
	HasAnimation(var_148_bool, var_150_string, var_151_string); // 0x1471 Func
	var_156_bool = var_148_bool == 0; // 0x1473 Not
	if(var_156_bool == 0) goto Label_5238; // 0x1474 JumpB
	goto Label_5241; // 0x1475 Jump
	
Label_5241:
	irand(var_149_int, var_147_int); // 0x1479 Func
	var_157_string = "all"; // 0x147b PushS
	var_158_string = ""; var_159_int = 0; // 0x147c PushV
	var_159_int = var_149_int; // 0x147d Mov
	func_5013(var_158_string, var_159_int); // 0x147e NEW_2
	PlayAnimation(var_157_string, var_158_string); // 0x1480 Func
	WaitForAnimEnd(); // 0x1482 Func
	return 6; // 0x1484 Return
	
Label_5238:
	var_160_int = 1; // 0x1476 PushI
	var_147_int = var_147_int + var_160_int; // 0x1477 Add2
	goto Label_5228; // 0x1478 Jump
}


func_4202(var_148_bool)
{
	var_150_int = 0; // 0x106b PushV
	func_4052(var_150_int); // 0x106c NEW_2
	var_156_int = 6; // 0x106e PushI
	var_148_bool = var_150_int <= var_156_int; // 0x106f LE2
	return 0; // 0x1070 Return
}


func_4717(var_18_bool, var_19_object)
{
	var_20_bool = 0; var_21_bool = 0; // 0x126d PushV
	var_22_bool = 0; // 0x126e PushV
	var_22_bool = 0; // 0x126f MovB
	var_23_bool = 0; var_24_object = Obj(); // 0x1270 PushV
	var_24_object = var_19_object; // 0x1271 Mov
	func_4977(var_24_object); // 0x1272 NEW_2
	if(var_23_bool == 0) goto Label_4731; // 0x1274 JumpB
	var_25_bool = 0; var_26_object = Obj(); // 0x1275 PushV
	var_26_object = var_19_object; // 0x1276 Mov
	func_3489(var_25_bool, var_26_object); // 0x1277 NEW_2
	if(var_25_bool == 0) goto Label_4731; // 0x1279 JumpB
	var_22_bool = 1; // 0x127a MovB
	
Label_4731:
	if(var_22_bool == 0) goto Label_4738; // 0x127b JumpB
	IsWeaponHolstered(var_21_bool); // 0x127c ObjFunc
	var_29_bool = var_21_bool == 0; // 0x127e Not
	if(var_29_bool == 0) goto Label_4738; // 0x127f JumpB
	var_18_bool = 1; // 0x1280 MovB
	return 2; // 0x1281 Return
	
Label_4738:
	var_18_bool = 0; // 0x1282 MovB
	return 2; // 0x1283 Return
}


func_3182(var_478_int)
{
	var_478_int = 0; // 0xc6e MovI
	return 0; // 0xc6f Return
}


func_3184()
{
	var_274_string = ""; // 0xc70 PushV
	var_274_string = "attack_stay"; // 0xc71 MovS
	func_3920(var_274_string); // 0xc72 NEW_2
	return 0; // 0xc74 Return
}


func_4209(var_281_bool)
{
	var_283_int = 0; // 0x1072 PushV
	func_4052(var_283_int); // 0x1073 NEW_2
	var_284_int = 2; // 0x1075 PushI
	var_281_bool = var_283_int == var_284_int; // 0x1076 Eq2
	return 0; // 0x1077 Return
}


func_3189()
{
	return 0; // 0xc76 Return
}


func_3191(var_503_bool)
{
	var_503_bool = 1; // 0xc77 MovB
	return 0; // 0xc78 Return
}


func_4216(var_174_bool)
{
	var_176_int = 0; // 0x1079 PushV
	func_4052(var_176_int); // 0x107a NEW_2
	var_177_int = 7; // 0x107c PushI
	var_174_bool = var_176_int == var_177_int; // 0x107d Eq2
	return 0; // 0x107e Return
}


func_3193(var_399_int)
{
	var_399_int = 1; // 0xc79 MovI
	return 0; // 0xc7a Return
}


func_3195(var_394_float)
{
	var_394_float = 0.5; // 0xc7b MovF
	return 0; // 0xc7c Return
}


func_4223(var_180_bool)
{
	var_182_int = 0; // 0x1080 PushV
	func_4052(var_182_int); // 0x1081 NEW_2
	var_183_int = 8; // 0x1083 PushI
	var_180_bool = var_182_int == var_183_int; // 0x1084 Eq2
	return 0; // 0x1085 Return
}


func_4740(var_32_object)
{
	var_33_object = Obj(); // 0x1285 PushV
	var_33_object = var_32_object; // 0x1286 Mov
	func_4980(); // 0x1287 NEW_2
	return 0; // 0x1289 Return
}


func_5253()
{
	StopAnimation(); // 0x1485 Func
	return 0; // 0x1487 Return
}


func_3204(var_2_object, var_148_bool, var_149_object, var_150_float, var_151_float, var_152_bool, var_153_bool)
{
	var_157_bool = 0; var_158_bool = 0; var_159_bool = 0; var_160_bool = 0; // 0xc84 PushV
	var_161_object = Obj(); // 0xc85 PushV
	var_161_object = var_149_object; // 0xc86 Mov
	func_4061(var_161_object); // 0xc87 NEW_2
	var_162_int = 1; // 0xc89 PushI
	var_163_int = 5; // 0xc8a PushI
	SetTimer(var_162_int, var_163_int); // 0xc8b Func
	CanSee(var_159_bool, var_149_object); // 0xc8d Func
	var_164_bool = var_159_bool; // 0xc8f Push
	if(var_164_bool == 0) goto Label_3223; // 0xc90 JumpB
	var_2_object = 1; // 0xc91 TMovB
	var_165_object = Obj(); // 0xc92 PushV
	var_165_object = var_149_object; // 0xc93 Mov
	func_3902(var_165_object); // 0xc94 NEW_2
	goto Label_3224; // 0xc96 Jump
	
Label_3224:
	var_172_bool = 0; var_173_object = Obj(); // 0xc98 PushV
	var_173_object = var_149_object; // 0xc99 Mov
	func_3489(var_172_bool, var_173_object); // 0xc9a NEW_2
	if(var_172_bool == 0) goto Label_3234; // 0xc9c JumpB
	var_176_object = Obj(); // 0xc9d PushV
	func_3961(var_176_object); // 0xc9e NEW_2
	SendPlayerEnemy(var_149_object, var_176_object); // 0xca0 Func
	
Label_3234:
	var_177_bool = 0; var_178_object = Obj(); var_179_float = 0; var_180_float = 0; var_181_bool = 0; var_182_bool = 0; // 0xca2 PushV
	var_178_object = var_149_object; // 0xca3 Mov
	var_179_float = var_150_float; // 0xca4 Mov
	var_180_float = var_151_float; // 0xca5 Mov
	var_181_bool = var_152_bool; // 0xca6 Mov
	var_182_bool = var_153_bool; // 0xca7 Mov
	func_3309(var_159_bool, var_160_bool, var_177_bool, var_178_object, var_179_float, var_180_float, var_181_bool, var_182_bool); // 0xca8 NEW_2
	var_160_bool = var_177_bool; // 0xca9 Mov
	var_228_object = var_2_object; // 0xcab PushT
	if(var_228_object == 0) goto Label_3248; // 0xcac JumpB
	var_229_string = "head"; // 0xcad PushS
	UnlookAsync(var_229_string); // 0xcae Func
	
Label_3248:
	var_230_int = 1; // 0xcb0 PushI
	KillTimer(var_230_int); // 0xcb1 Func
	var_148_bool = var_160_bool; // 0xcb3 Mov
	return 4; // 0xcb4 Return
	
Label_3223:
	var_2_object = 0; // 0xc97 TMovB
}


func_4230(var_186_bool)
{
	var_188_int = 0; // 0x1087 PushV
	func_4052(var_188_int); // 0x1088 NEW_2
	var_189_int = 9; // 0x108a PushI
	var_186_bool = var_188_int == var_189_int; // 0x108b Eq2
	return 0; // 0x108c Return
}


func_5256(var_28_bool)
{
	var_28_bool = 1; // 0x1488 MovB
	return 0; // 0x1489 Return
}


func_4746(var_20_object)
{
	var_21_bool = 0; var_22_object = Obj(); // 0x128b PushV
	var_22_object = var_20_object; // 0x128c Mov
	func_3489(var_21_bool, var_22_object); // 0x128d NEW_2
	if(var_21_bool == 0) goto Label_4758; // 0x128f JumpB
	var_25_object = Obj(); // 0x1290 PushV
	func_3961(var_25_object); // 0x1291 NEW_2
	var_28_float = -0.03; // 0x1293 PushF
	ReportReputationChange(var_20_object, var_25_object, var_28_float); // 0x1294 Func
	
Label_4758:
	return 0; // 0x1296 Return
}


func_5258(var_22_bool, var_23_object, var_24_object, var_25_bool)
{
	var_26_bool = 0; var_27_object = Obj(); var_28_object = Obj(); var_29_float = 0; var_30_bool = 0; // 0x148b PushV
	var_27_object = var_23_object; // 0x148c Mov
	var_28_object = var_24_object; // 0x148d Mov
	var_29_float = 500.0; // 0x148e MovF
	var_30_bool = var_25_bool; // 0x148f Mov
	func_4911(var_26_bool, var_27_object, var_28_object, var_29_float, var_30_bool); // 0x1490 NEW_2
	var_22_bool = var_26_bool; // 0x1491 Mov
	return 0; // 0x1493 Return
}


func_4237(var_205_bool)
{
	var_207_int = 0; // 0x108e PushV
	func_4052(var_207_int); // 0x108f NEW_2
	var_208_int = 10; // 0x1091 PushI
	var_205_bool = var_207_int == var_208_int; // 0x1092 Eq2
	return 0; // 0x1093 Return
}


func_2191(var_1_object)
{
	var_18_int = 110; // 0x88f PushI
	KillTimer(var_18_int); // 0x890 Func
	var_1_object = 0; // 0x892 TMovB
	var_19_object = var_0_object; // 0x893 PushT
	if(var_19_object == 0) goto Label_2201; // 0x894 JumpB
	func_5253(); // 0x896 NEW_2
	goto Label_2203; // 0x898 Jump
	
Label_2203:
	return 0; // 0x89b Return
	
Label_2201:
	Stop(); // 0x899 Func
}


func_5268(var_100_object)
{
	var_101_bool = 0; var_102_object = Obj(); // 0x1495 PushV
	var_102_object = var_100_object; // 0x1496 Mov
	func_3489(var_101_bool, var_102_object); // 0x1497 NEW_2
	if(var_101_bool == 0) goto Label_5285; // 0x1499 JumpB
	var_105_object = Obj(); // 0x149a PushV
	func_3961(var_105_object); // 0x149b NEW_2
	var_108_float = -0.07; // 0x149d PushF
	var_109_bool = 1; // 0x149e PushB
	ReportReputationChange(var_100_object, var_105_object, var_108_float, var_109_bool); // 0x149f Func
	var_110_bool = 0; // 0x14a1 PushV
	var_110_bool = 1; // 0x14a2 MovB
	func_4435(var_110_bool); // 0x14a3 NEW_2
	
Label_5285:
	func_4411(); // 0x14a6 NEW_2
	var_244_bool = GlobalVars[0]; // 0x14a8 PushGE
	var_244_bool = 1; // 0x14a9 MovB
	GlobalVars[0] = var_244_bool; // 0x14aa PopGE
	var_245_int = 50; // 0x14ab PushI
	var_246_int = 40; // 0x14ac PushI
	SetRTEnvelope(var_245_int, var_246_int); // 0x14ad Func
	return 0; // 0x14af Return
}


func_4244(var_211_bool)
{
	var_213_int = 0; // 0x1095 PushV
	func_4052(var_213_int); // 0x1096 NEW_2
	var_214_int = 11; // 0x1098 PushI
	var_211_bool = var_213_int == var_214_int; // 0x1099 Eq2
	return 0; // 0x109a Return
}


func_4759(var_18_bool, var_19_string)
{
	var_20_object = Obj(); var_21_object = Obj(); // 0x1297 PushV
	var_22_string = "heal"; // 0x1298 PushS
	var_23_bool = var_19_string == var_22_string; // 0x1299 Eq
	if(var_23_bool == 0) goto Label_4773; // 0x129a JumpB
	var_24_string = "player"; // 0x129b PushS
	FindActor(var_21_object, var_24_string); // 0x129c Func
	var_25_bool = 0; var_26_object = Obj(); // 0x129e PushV
	var_26_object = var_21_object; // 0x129f Mov
	func_5008(var_26_object); // 0x12a0 NEW_2
	var_18_bool = var_25_bool; // 0x12a1 Mov
	return 2; // 0x12a3 Return
	
Label_4773:
	var_18_bool = 0; // 0x12a5 MovB
	return 2; // 0x12a6 Return
}


func_4251(var_217_bool)
{
	var_219_int = 0; // 0x109c PushV
	func_4052(var_219_int); // 0x109d NEW_2
	var_220_int = 12; // 0x109f PushI
	var_217_bool = var_219_int == var_220_int; // 0x10a0 Eq2
	return 0; // 0x10a1 Return
}


func_4258(var_104_int)
{
	var_105_int = 0; var_106_int = 0; // 0x10a2 PushV
	var_107_string = "branch"; // 0x10a3 PushS
	GetVariable(var_107_string, var_106_int); // 0x10a4 Func
	var_108_int = 0; // 0x10a6 PushI
	var_109_bool = var_106_int == var_108_int; // 0x10a7 Eq
	if(var_109_bool == 0) goto Label_4268; // 0x10a8 JumpB
	var_104_int = 1; // 0x10a9 MovI
	return 2; // 0x10aa Return
	
Label_4268:
	var_110_int = 1; // 0x10ac PushI
	var_111_bool = var_106_int == var_110_int; // 0x10ad Eq
	if(var_111_bool == 0) goto Label_4273; // 0x10ae JumpB
	var_104_int = 2; // 0x10af MovI
	return 2; // 0x10b0 Return
	
Label_4273:
	var_104_int = 3; // 0x10b1 MovI
	return 2; // 0x10b2 Return
}


func_2213(var_1_object, var_19_object)
{
	var_20_bool = 0; var_21_int = 0; var_22_bool = 0; var_23_int = 0; // 0x8a5 PushV
	var_24_object = var_1_object; // 0x8a6 PushT
	if(var_24_object == 0) goto Label_2217; // 0x8a7 JumpB
	return 4; // 0x8a8 Return
	
Label_2217:
	IsPlayerActor(var_19_object, var_22_bool); // 0x8a9 Func
	var_25_bool = var_22_bool == 0; // 0x8ab Not
	if(var_25_bool == 0) goto Label_2222; // 0x8ac JumpB
	return 4; // 0x8ad Return
	
Label_2222:
	var_26_int = 0; var_27_object = Obj(); // 0x8ae PushV
	var_27_object = var_19_object; // 0x8af Mov
	func_4788(var_27_object); // 0x8b0 NEW_2
	var_23_int = var_26_int; // 0x8b1 Mov
	var_29_int = 0; // 0x8b3 PushI
	var_30_bool = var_23_int > var_29_int; // 0x8b4 GT
	if(var_30_bool == 0) goto Label_2245; // 0x8b5 JumpB
	var_31_int = 1; // 0x8b6 PushI
	var_32_bool = var_23_int > var_31_int; // 0x8b7 GT
	if(var_32_bool == 0) goto Label_2236; // 0x8b8 JumpB
	func_2191(var_23_int); // 0x8ba NEW_2
	
Label_2236:
	var_35_object = Obj(); // 0x8bc PushV
	var_35_object = var_19_object; // 0x8bd Mov
	func_4797(var_35_object); // 0x8be NEW_2
	var_1_object = 1; // 0x8c0 TMovB
	var_100_int = 110; // 0x8c1 PushI
	var_101_float = 5.0; // 0x8c2 PushF
	SetTimer(var_100_int, var_101_float); // 0x8c3 Func
	
Label_2245:
	return 4; // 0x8c5 Return
}


func_4775(var_29_string)
{
	var_30_object = Obj(); var_31_object = Obj(); // 0x12a7 PushV
	var_32_string = "heal"; // 0x12a8 PushS
	var_33_bool = var_29_string == var_32_string; // 0x12a9 Eq
	if(var_33_bool == 0) goto Label_4787; // 0x12aa JumpB
	var_34_string = "player"; // 0x12ab PushS
	FindActor(var_31_object, var_34_string); // 0x12ac Func
	var_35_object = Obj(); // 0x12ae PushV
	var_35_object = var_31_object; // 0x12af Mov
	func_5011(); // 0x12b0 NEW_2
	var_31_object = 0; // 0x12b2 SetNull
	
Label_4787:
	return 2; // 0x12b3 Return
}


func_3756(var_23_object, var_26_cvector, var_27_cvector)
{
	var_28_object = Obj(); var_29_object = Obj(); var_30_object = Obj(); var_31_object = Obj(); // 0xeac PushV
	GetScene(var_30_object); // 0xead Func
	var_32_string = "scripted"; // 0xeaf PushS
	var_33_string = "blood_dir.xml"; // 0xeb0 PushS
	AddActorByType(var_31_object, var_32_string, var_30_object, var_26_cvector, var_27_cvector, var_33_string); // 0xeb1 Func
	var_34_object = Obj(); // 0xeb3 PushV
	var_34_object = var_23_object; // 0xeb4 Mov
	func_3644(var_34_object); // 0xeb5 NEW_2
	return 4; // 0xeb7 Return
}


func_4275(var_224_int)
{
	var_225_int = 0; var_226_int = 0; // 0x10b3 PushV
	var_227_string = "branch"; // 0x10b4 PushS
	GetVariable(var_227_string, var_226_int); // 0x10b5 Func
	var_224_int = var_226_int; // 0x10b7 Mov
	return 2; // 0x10b8 Return
}


func_4788(var_26_int)
{
	var_28_bool = 0; // 0x12b5 PushV
	func_5256(var_28_bool); // 0x12b6 NEW_2
	if(var_28_bool == 0) goto Label_4795; // 0x12b8 JumpB
	var_26_int = 2; // 0x12b9 MovI
	goto Label_4796; // 0x12ba Jump
	
Label_4796:
	return 0; // 0x12bc Return
	
Label_4795:
	var_26_int = 0; // 0x12bb MovI
}


func_4281(var_397_int)
{
	var_399_int = 0; var_400_int = 0; // 0x10b9 PushV
	GetItemID(var_400_int); // 0x10ba ObjFunc
	var_397_int = var_400_int; // 0x10bc Mov
	return 2; // 0x10bd Return
}


func_3770()
{
	var_94_cvector = CVector(0,0,0); var_95_cvector = CVector(0,0,0); var_96_cvector = CVector(0,0,0); var_97_cvector = CVector(0,0,0); var_98_cvector = CVector(0,0,0); var_99_cvector = CVector(0,0,0); // 0xeba PushV
	GetPosition(var_97_cvector); // 0xebb ObjFunc
	GetPosition(var_98_cvector); // 0xebd Func
	var_99_cvector = var_97_cvector - var_98_cvector; // 0xebf Sub2
	var_100_float = GetByIndex(var_99_cvector, 0); // 0xec0 PushE
	var_101_float = GetByIndex(var_99_cvector, 2); // 0xec1 PushE
	RotateAsync(var_100_float, var_101_float); // 0xec2 Func
	return 6; // 0xec4 Return
}


func_4797(var_59_object)
{
	var_60_object = Obj(); // 0x12be PushV
	var_60_object = var_59_object; // 0x12bf Mov
	TaskCall(4); // 0x12c0 TaskCall
	func_2246(var_61_object, var_60_object); // 0x12c1 NEW_2
	TaskReturn(); // 0x12c2 TaskReturn
	return 0; // 0x12c4 Return
}


func_4286(var_374_int, var_375_object, var_376_int)
{
	var_377_int = 0; var_378_int = 0; var_379_int = 0; var_380_string = ""; var_381_bool = 0; var_382_bool = 0; var_383_int = 0; var_384_int = 0; var_385_int = 0; var_386_int = 0; var_387_string = ""; var_388_bool = 0; var_389_bool = 0; var_390_int = 0; // 0x10be PushV
	var_391_int = 0; // 0x10bf PushI
	var_392_bool = var_376_int == var_391_int; // 0x10c0 Eq
	if(var_392_bool == 0) goto Label_4323; // 0x10c1 JumpB
	var_393_int = 0; // 0x10c2 PushV
	func_4052(var_393_int); // 0x10c3 NEW_2
	var_384_int = var_393_int; // 0x10c4 Mov
	var_385_int = 0; // 0x10c6 MovI
	var_386_int = 1; // 0x10c7 MovI
	
Label_4296:
	var_394_bool = var_386_int <= var_384_int; // 0x10c8 LE
	if(var_394_bool == 0) goto Label_4321; // 0x10c9 JumpB
	var_387_string = "Price"; // 0x10ca MovS
	var_395_int = 1; // 0x10cb PushI
	var_396_bool = var_386_int != var_395_int; // 0x10cc Neq
	if(var_396_bool == 0) goto Label_4303; // 0x10cd JumpB
	var_387_string = var_387_string + var_386_int; // 0x10ce Add2
	
Label_4303:
	var_397_int = 0; var_398_object = Obj(); // 0x10cf PushV
	var_398_object = var_375_object; // 0x10d0 Mov
	func_4281(var_398_object); // 0x10d1 NEW_2
	HasInvItemProperty(var_388_bool, var_397_int, var_387_string); // 0x10d3 Func
	var_401_bool = var_388_bool == 0; // 0x10d5 Not
	if(var_401_bool == 0) goto Label_4312; // 0x10d6 JumpB
	goto Label_4318; // 0x10d7 Jump
	
Label_4318:
	var_402_int = 1; // 0x10de PushI
	var_386_int = var_386_int + var_402_int; // 0x10df Add2
	goto Label_4296; // 0x10e0 Jump
	
Label_4312:
	var_403_int = 0; var_404_object = Obj(); // 0x10d8 PushV
	var_404_object = var_375_object; // 0x10d9 Mov
	func_4281(var_404_object); // 0x10da NEW_2
	GetInvItemProperty(var_385_int, var_403_int, var_387_string); // 0x10dc Func
	
Label_4321:
	var_374_int = var_385_int; // 0x10e1 Mov
	return 14; // 0x10e2 Return
	
Label_4323:
	var_405_int = 0; var_406_object = Obj(); // 0x10e3 PushV
	var_406_object = var_375_object; // 0x10e4 Mov
	func_4281(var_406_object); // 0x10e5 NEW_2
	var_407_string = "BarterPrice"; // 0x10e7 PushS
	var_408_int = var_407_string + var_376_int; // 0x10e8 Add
	HasInvItemProperty(var_389_bool, var_405_int, var_408_int); // 0x10e9 Func
	var_409_bool = var_389_bool == 0; // 0x10eb Not
	if(var_409_bool == 0) goto Label_4335; // 0x10ec JumpB
	var_374_int = 0; // 0x10ed MovI
	return 14; // 0x10ee Return
	
Label_4335:
	var_410_int = 0; var_411_object = Obj(); // 0x10ef PushV
	var_411_object = var_375_object; // 0x10f0 Mov
	func_4281(var_411_object); // 0x10f1 NEW_2
	var_412_string = "BarterPrice"; // 0x10f3 PushS
	var_413_int = var_412_string + var_376_int; // 0x10f4 Add
	GetInvItemProperty(var_390_int, var_410_int, var_413_int); // 0x10f5 Func
	var_414_int = 0; // 0x10f7 PushI
	var_415_bool = var_390_int > var_414_int; // 0x10f8 GT
	if(var_415_bool == 0) goto Label_4348; // 0x10f9 JumpB
	var_374_int = var_390_int; // 0x10fa Mov
	return 14; // 0x10fb Return
	
Label_4348:
	var_374_int = -var_390_int; // 0x10fc Neg2
	return 14; // 0x10fd Return
}


func_3267(var_2_object)
{
	var_18_int = 1; // 0xcc3 PushI
	KillTimer(var_18_int); // 0xcc4 Func
	var_19_object = var_2_object; // 0xcc6 PushT
	if(var_19_object == 0) goto Label_3276; // 0xcc7 JumpB
	var_2_object = 0; // 0xcc8 TMovB
	var_20_string = "head"; // 0xcc9 PushS
	UnlookAsync(var_20_string); // 0xcca Func
	
Label_3276:
	func_3433(var_17_object); // 0xccd NEW_2
	return 0; // 0xccf Return
}


func_3781(var_137_bool)
{
	var_138_bool = 0; var_139_bool = 0; // 0xec5 PushV
	IsLoaded(var_139_bool); // 0xec6 Func
	var_137_bool = var_139_bool; // 0xec8 Mov
	return 2; // 0xec9 Return
}


func_4805(var_26_int, var_27_object)
{
	var_28_bool = 0; var_29_object = Obj(); // 0x12c6 PushV
	var_29_object = var_27_object; // 0x12c7 Mov
	func_3620(var_28_bool, var_29_object); // 0x12c8 NEW_2
	if(var_28_bool == 0) goto Label_4813; // 0x12ca JumpB
	var_26_int = 2; // 0x12cb MovI
	goto Label_4814; // 0x12cc Jump
	
Label_4814:
	return 0; // 0x12ce Return
	
Label_4813:
	var_26_int = 0; // 0x12cd MovI
}


func_2246(var_0_object, var_60_object)
{
	var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0); var_64_bool = 0; var_65_cvector = CVector(0,0,0); var_66_cvector = CVector(0,0,0); var_67_bool = 0; // 0x8c6 PushV
	var_0_object = var_60_object; // 0x8c7 TMov
	func_2297(var_67_bool); // 0x8c9 NEW_2
	GetDirection(var_65_cvector); // 0x8cb Func
	var_75_cvector = CVector(0,0,0); var_76_object = Obj(); // 0x8cd PushV
	var_76_object = var_0_object; // 0x8ce MovT
	func_3474(var_76_object); // 0x8cf NEW_2
	var_66_cvector = var_75_cvector; // 0x8d0 Mov
	var_81_float = 0; var_82_cvector = CVector(0,0,0); var_83_cvector = CVector(0,0,0); // 0x8d2 PushV
	var_82_cvector = var_65_cvector; // 0x8d3 Mov
	var_83_cvector = var_66_cvector; // 0x8d4 Mov
	func_4020(var_81_float, var_82_cvector, var_83_cvector); // 0x8d5 NEW_2
	var_105_int = 0; // 0x8d7 PushI
	var_106_bool = var_81_float < var_105_int; // 0x8d8 LT
	if(var_106_bool == 0) goto Label_2272; // 0x8d9 JumpB
	var_107_object = Obj(); // 0x8da PushV
	var_107_object = var_0_object; // 0x8db MovT
	func_3770(); // 0x8dc NEW_2
	var_67_bool = 1; // 0x8de MovB
	goto Label_2275; // 0x8df Jump
	
Label_2275:
	var_116_bool = var_67_bool; // 0x8e3 Push
	if(var_116_bool == 0) goto Label_2291; // 0x8e4 JumpB
	var_117_object = Obj(); // 0x8e5 PushV
	var_117_object = var_0_object; // 0x8e6 MovT
	func_3770(); // 0x8e7 NEW_2
	var_118_int = 111; // 0x8e9 PushI
	var_119_float = 0.5; // 0x8ea PushF
	SetTimer(var_118_int, var_119_float); // 0x8eb Func
	var_120_float = 5.0; // 0x8ed PushF
	Sleep(var_120_float); // 0x8ee Func
	var_121_int = 111; // 0x8f0 PushI
	KillTimer(var_121_int); // 0x8f1 Func
	
Label_2291:
	StopAsync(); // 0x8f3 Func
	var_122_string = "head"; // 0x8f5 PushS
	UnlookAsync(var_122_string); // 0x8f6 Func
	return 6; // 0x8f8 Return
	
Label_2272:
	var_123_float = 1.5; // 0x8e0 PushF
	Sleep(var_123_float, var_67_bool); // 0x8e1 Func
}


func_3786(var_53_bool, var_55_float)
{
	var_56_float = 0; var_57_cvector = CVector(0,0,0); var_58_cvector = CVector(0,0,0); var_59_cvector = CVector(0,0,0); var_60_cvector = CVector(0,0,0); var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0); var_63_bool = 0; var_64_bool = 0; var_65_float = 0; var_66_cvector = CVector(0,0,0); var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); var_72_bool = 0; var_73_bool = 0; // 0xeca PushV
	GetPosition(var_66_cvector); // 0xecb ObjFunc
	GetEyesHeight(var_65_float); // 0xecd ObjFunc
	var_74_float = GetByIndex(var_66_cvector, 1); // 0xecf PushE
	var_74_float = var_74_float + var_65_float; // 0xed0 Add2
	SetByIndex(var_66_cvector, 1) = var_74_float; // 0xed1 PopE
	GetPosition(var_67_cvector); // 0xed2 Func
	GetEyesHeight(var_65_float); // 0xed4 Func
	var_75_float = GetByIndex(var_67_cvector, 1); // 0xed6 PushE
	var_75_float = var_75_float + var_65_float; // 0xed7 Add2
	SetByIndex(var_67_cvector, 1) = var_75_float; // 0xed8 PopE
	var_68_cvector = var_66_cvector - var_67_cvector; // 0xed9 Sub2
	var_76_float = GetByIndex(var_68_cvector, 1); // 0xeda PushE
	var_76_float = 0; // 0xedb MovI
	SetByIndex(var_68_cvector, 1) = var_76_float; // 0xedc PopE
	var_77_int = var_68_cvector | var_68_cvector; // 0xedd Or
	var_78_float = sqrt(var_77_int); // 0xede Sqrt
	var_68_cvector = var_68_cvector / var_68_cvector; // 0xedf Div2
	var_69_cvector = -var_68_cvector; // 0xee0 Neg2
	var_79_float = var_68_cvector * var_55_float; // 0xee1 Mult
	var_80_cvector = CVector(0,0,0); var_81_cvector = CVector(0,0,0); // 0xee2 PushV
	var_82_cvector = CVector(0.0, 1.0, 0.0); // 0xee3 PushVec
	var_81_cvector = var_69_cvector ^ var_82_cvector; // 0xee4 Xor2
	func_3967(var_80_cvector, var_81_cvector); // 0xee5 NEW_2
	var_88_int = 25; // 0xee7 PushI
	var_89_float = var_80_cvector * var_88_int; // 0xee8 Mult
	var_90_int = var_79_float + var_89_float; // 0xee9 Add
	var_91_cvector = CVector(0.0, 10.0, 0.0); // 0xeea PushVec
	var_70_cvector = var_90_int - var_91_cvector; // 0xeeb Sub2
	var_71_cvector = var_67_cvector + var_70_cvector; // 0xeec Add2
	IsOverrideActive(var_72_bool); // 0xeed Func
	var_92_bool = var_72_bool; // 0xeef Push
	if(var_92_bool == 0) goto Label_3827; // 0xef0 JumpB
	var_53_bool = 0; // 0xef1 MovB
	return 18; // 0xef2 Return
	
Label_3827:
	StopWorld(); // 0xef3 Func
	CameraTransit(var_71_cvector, var_69_cvector); // 0xef5 Func
	var_93_float = GetByIndex(var_70_cvector, 0); // 0xef7 PushE
	var_94_float = GetByIndex(var_70_cvector, 2); // 0xef8 PushE
	Rotate(var_93_float, var_94_float); // 0xef9 Func
	var_95_bool = 0; // 0xefb PushV
	func_5198(var_95_bool); // 0xefc NEW_2
	if(var_95_bool == 0) goto Label_3840; // 0xefe JumpB
	goto Label_3848; // 0xeff Jump
	
Label_3848:
	CameraWaitForPlayFinish(); // 0xf08 Func
	ResumeWorld(); // 0xf0a Func
	var_53_bool = 1; // 0xf0c MovB
	return 18; // 0xf0d Return
	
Label_3840:
	var_96_string = "head"; // 0xf00 PushS
	HasAnimationTrack(var_73_bool, var_96_string); // 0xf01 Func
	var_97_bool = var_73_bool; // 0xf03 Push
	if(var_97_bool == 0) goto Label_3848; // 0xf04 JumpB
	var_98_string = "head"; // 0xf05 PushS
	LookAsyncCamera(var_98_string); // 0xf06 Func
}


func_2764(var_1_object, var_2_object, var_4_bool)
{
	var_102_bool = 0; var_103_bool = 0; var_104_cvector = CVector(0,0,0); var_105_bool = 0; var_106_bool = 0; var_107_cvector = CVector(0,0,0); // 0xacc PushV
	var_1_object = 0; // 0xacd TMovI
	
Label_2766:
	var_108_string = "all"; // 0xace PushS
	var_109_string = "attack_begin"; // 0xacf PushS
	var_110_int = 1; // 0xad0 PushI
	var_111_int = var_1_object + var_110_int; // 0xad1 Add
	var_112_int = var_109_string + var_111_int; // 0xad2 Add
	HasAnimation(var_105_bool, var_108_string, var_112_int); // 0xad3 Func
	var_113_bool = var_105_bool == 0; // 0xad5 Not
	if(var_113_bool == 0) goto Label_2776; // 0xad6 JumpB
	goto Label_2779; // 0xad7 Jump
	
Label_2779:
	var_2_object = 0; // 0xadb TMovI
	
Label_2780:
	var_114_string = "attack"; // 0xadc PushS
	var_115_int = 1; // 0xadd PushI
	var_116_int = var_2_object + var_115_int; // 0xade Add
	var_117_int = var_114_string + var_116_int; // 0xadf Add
	IsExisting3DSound(var_106_bool, var_117_int); // 0xae0 Func
	var_118_bool = var_106_bool == 0; // 0xae2 Not
	if(var_118_bool == 0) goto Label_2789; // 0xae3 JumpB
	goto Label_2792; // 0xae4 Jump
	
Label_2792:
	var_119_string = "all"; // 0xae8 PushS
	var_120_string = "bjump"; // 0xae9 PushS
	GetAnimationOffset(var_107_cvector, var_119_string, var_120_string); // 0xaea Func
	var_121_float = GetByIndex(var_107_cvector, 2); // 0xaec PushE
	var_4_bool = -var_121_float; // 0xaed Neg2
	return 6; // 0xaee Return
	
Label_2789:
	var_122_int = 1; // 0xae5 PushI
	var_2_object = var_2_object + var_122_int; // 0xae6 Add2
	goto Label_2780; // 0xae7 Jump
	
Label_2776:
	var_123_int = 1; // 0xad8 PushI
	var_1_object = var_1_object + var_123_int; // 0xad9 Add2
	goto Label_2766; // 0xada Jump
}


func_4815(var_69_object)
{
	var_70_object = Obj(); // 0x12d0 PushV
	var_70_object = var_69_object; // 0x12d1 Mov
	TaskCall(5); // 0x12d2 TaskCall
	func_2521(var_70_object); // 0x12d3 NEW_2
	TaskReturn(); // 0x12d4 TaskReturn
	return 0; // 0x12d6 Return
}


func_4823(var_33_bool, var_34_object, var_35_bool)
{
	var_36_string = ""; var_37_string = ""; var_38_string = ""; var_39_string = ""; // 0x12d7 PushV
	var_40_bool = 0; var_41_object = Obj(); var_42_string = ""; // 0x12d8 PushV
	var_41_object = var_34_object; // 0x12d9 Mov
	var_42_string = "class"; // 0x12da MovS
	func_3494(var_40_bool, var_41_object, var_42_string); // 0x12db NEW_2
	var_49_bool = var_40_bool == 0; // 0x12dd Not
	if(var_49_bool == 0) goto Label_4833; // 0x12de JumpB
	var_33_bool = 0; // 0x12df MovB
	return 4; // 0x12e0 Return
	
Label_4833:
	var_50_string = "class"; // 0x12e1 PushS
	GetProperty(var_50_string, var_38_string); // 0x12e2 Func
	var_51_string = "class"; // 0x12e4 PushS
	GetProperty(var_51_string, var_39_string); // 0x12e5 ObjFunc
	var_52_bool = 0; // 0x12e7 PushV
	var_52_bool = 0; // 0x12e8 MovB
	var_53_bool = var_35_bool == 0; // 0x12e9 Not
	if(var_53_bool == 0) goto Label_4846; // 0x12ea JumpB
	var_54_bool = var_38_string == var_39_string; // 0x12eb Eq
	if(var_54_bool == 0) goto Label_4846; // 0x12ec JumpB
	var_52_bool = 1; // 0x12ed MovB
	
Label_4846:
	if(var_52_bool == 0) goto Label_4849; // 0x12ee JumpB
	var_33_bool = 1; // 0x12ef MovB
	return 4; // 0x12f0 Return
	
Label_4849:
	var_55_string = "rat"; // 0x12f1 PushS
	var_56_bool = var_39_string == var_55_string; // 0x12f2 Eq
	if(var_56_bool == 0) goto Label_4855; // 0x12f3 JumpB
	var_33_bool = 0; // 0x12f4 MovB
	return 4; // 0x12f5 Return
	
Label_4855:
	var_57_string = "rat_big"; // 0x12f7 PushS
	var_58_bool = var_39_string == var_57_string; // 0x12f8 Eq
	if(var_58_bool == 0) goto Label_4861; // 0x12f9 JumpB
	var_33_bool = 0; // 0x12fa MovB
	return 4; // 0x12fb Return
	
Label_4861:
	var_59_string = "dog"; // 0x12fd PushS
	var_60_bool = var_39_string == var_59_string; // 0x12fe Eq
	if(var_60_bool == 0) goto Label_4867; // 0x12ff JumpB
	var_33_bool = 0; // 0x1300 MovB
	return 4; // 0x1301 Return
	
Label_4867:
	var_61_string = "grabitel"; // 0x1303 PushS
	var_62_bool = var_39_string == var_61_string; // 0x1304 Eq
	if(var_62_bool == 0) goto Label_4873; // 0x1305 JumpB
	var_33_bool = 0; // 0x1306 MovB
	return 4; // 0x1307 Return
	
Label_4873:
	var_63_string = "bomber"; // 0x1309 PushS
	var_64_bool = var_39_string == var_63_string; // 0x130a Eq
	if(var_64_bool == 0) goto Label_4879; // 0x130b JumpB
	var_33_bool = 0; // 0x130c MovB
	return 4; // 0x130d Return
	
Label_4879:
	var_65_string = "sanitar"; // 0x130f PushS
	var_66_bool = var_39_string == var_65_string; // 0x1310 Eq
	if(var_66_bool == 0) goto Label_4885; // 0x1311 JumpB
	var_33_bool = 0; // 0x1312 MovB
	return 4; // 0x1313 Return
	
Label_4885:
	var_67_string = "hunter"; // 0x1315 PushS
	var_68_bool = var_39_string == var_67_string; // 0x1316 Eq
	if(var_68_bool == 0) goto Label_4891; // 0x1317 JumpB
	var_33_bool = 0; // 0x1318 MovB
	return 4; // 0x1319 Return
	
Label_4891:
	var_69_string = "soldier"; // 0x131b PushS
	var_70_bool = var_39_string == var_69_string; // 0x131c Eq
	if(var_70_bool == 0) goto Label_4896; // 0x131d JumpB
	var_33_bool = 0; // 0x131e MovB
	return 4; // 0x131f Return
	
Label_4896:
	var_33_bool = 1; // 0x1320 MovB
	return 4; // 0x1321 Return
}


func_3309(var_0_object, var_1_object, var_177_bool, var_178_object, var_179_float, var_180_float, var_181_bool, var_182_bool)
{
	var_183_bool = 0; var_184_bool = 0; var_185_object = Obj(); var_186_cvector = CVector(0,0,0); var_187_cvector = CVector(0,0,0); var_188_cvector = CVector(0,0,0); var_189_float = 0; var_190_object = Obj(); var_191_bool = 0; var_192_bool = 0; var_193_object = Obj(); var_194_cvector = CVector(0,0,0); var_195_cvector = CVector(0,0,0); var_196_cvector = CVector(0,0,0); var_197_float = 0; var_198_object = Obj(); // 0xced PushV
	var_0_object = 0; // 0xcee TMovB
	var_1_object = var_178_object; // 0xcef TMov
	var_192_bool = var_182_bool; // 0xcf0 Mov
	
Label_3313:
	var_199_bool = 0; var_200_object = Obj(); // 0xcf1 PushV
	var_200_object = var_178_object; // 0xcf2 Mov
	func_3449(var_199_bool, var_200_object); // 0xcf3 NEW_2
	var_203_bool = var_199_bool == 0; // 0xcf5 Not
	if(var_203_bool == 0) goto Label_3321; // 0xcf6 JumpB
	var_177_bool = 0; // 0xcf7 MovB
	return 16; // 0xcf8 Return
	
Label_3321:
	GetPosition(var_194_cvector); // 0xcf9 ObjFunc
	GetPosition(var_195_cvector); // 0xcfb Func
	var_196_cvector = var_194_cvector - var_195_cvector; // 0xcfd Sub2
	var_197_float = var_196_cvector | var_196_cvector; // 0xcfe Or2
	var_204_bool = 0; // 0xcff PushV
	var_204_bool = 0; // 0xd00 MovB
	var_205_int = 0; // 0xd01 PushI
	var_206_bool = var_180_float > var_205_int; // 0xd02 GT
	if(var_206_bool == 0) goto Label_3336; // 0xd03 JumpB
	var_207_float = var_180_float * var_180_float; // 0xd04 Mult
	var_208_bool = var_197_float > var_207_float; // 0xd05 GT
	if(var_208_bool == 0) goto Label_3336; // 0xd06 JumpB
	var_204_bool = 1; // 0xd07 MovB
	
Label_3336:
	if(var_204_bool == 0) goto Label_3341; // 0xd08 JumpB
	Stop(); // 0xd09 Func
	var_177_bool = 0; // 0xd0b MovB
	return 16; // 0xd0c Return
	
Label_3341:
	var_209_float = var_179_float * var_179_float; // 0xd0d Mult
	var_210_bool = var_197_float > var_209_float; // 0xd0e GT
	if(var_210_bool == 0) goto Label_3403; // 0xd0f JumpB
	GetPFPosition(var_194_cvector); // 0xd10 ObjFunc
	FindPathTo(var_198_object, var_194_cvector); // 0xd12 Func
	var_211_bool = var_198_object != 0; // 0xd14 NullNeq
	if(var_211_bool == 0) goto Label_3352; // 0xd15 JumpB
	var_193_object = var_198_object; // 0xd16 Mov
	var_198_object = 0; // 0xd17 SetNull
	
Label_3352:
	var_212_bool = var_193_object != 0; // 0xd18 NullNeq
	if(var_212_bool == 0) goto Label_3385; // 0xd19 JumpB
	var_213_bool = var_192_bool; // 0xd1a Push
	if(var_213_bool == 0) goto Label_3362; // 0xd1b JumpB
	var_192_bool = 0; // 0xd1c MovB
	RotatePath(var_193_object, var_191_bool); // 0xd1d Func
	var_214_bool = var_191_bool == 0; // 0xd1f Not
	if(var_214_bool == 0) goto Label_3362; // 0xd20 JumpB
	goto Label_3409; // 0xd21 Jump
	
Label_3409:
	var_177_bool = !var_0_object; // 0xd51 Not2
	return 16; // 0xd52 Return
	
Label_3362:
	var_215_int = 0; // 0xd22 PushI
	var_216_float = 0.3; // 0xd23 PushF
	SetTimer(var_215_int, var_216_float); // 0xd24 Func
	var_217_string = ""; // 0xd26 PushV
	func_3456(var_217_string); // 0xd27 NEW_2
	var_218_string = ""; // 0xd29 PushV
	func_3458(var_218_string); // 0xd2a NEW_2
	FollowPath(var_193_object, var_181_bool, var_191_bool, var_217_string, var_218_string); // 0xd2c Func
	var_219_bool = var_191_bool == 0; // 0xd2e Not
	if(var_219_bool == 0) goto Label_3383; // 0xd2f JumpB
	var_220_object = var_0_object; // 0xd30 PushT
	if(var_220_object == 0) goto Label_3381; // 0xd31 JumpB
	var_193_object = 0; // 0xd32 SetNull
	goto Label_3409; // 0xd33 Jump
	
Label_3381:
	goto Label_3408; // 0xd35 Jump
	
Label_3408:
	goto Label_3313; // 0xd50 Jump
	
Label_3383:
	var_193_object = 0; // 0xd37 SetNull
	goto Label_3401; // 0xd38 Jump
	
Label_3401:
	var_198_object = 0; // 0xd49 SetNull
	goto Label_3407; // 0xd4a Jump
	
Label_3407:
	var_193_object = 0; // 0xd4f SetNull
	
Label_3385:
	var_221_int = 0; // 0xd39 PushI
	KillTimer(var_221_int); // 0xd3a Func
	var_222_float = 0.5; // 0xd3c PushF
	Sleep(var_222_float, var_191_bool); // 0xd3d Func
	var_223_bool = var_191_bool == 0; // 0xd3f Not
	if(var_223_bool == 0) goto Label_3397; // 0xd40 JumpB
	var_224_object = var_0_object; // 0xd41 PushT
	if(var_224_object == 0) goto Label_3397; // 0xd42 JumpB
	var_193_object = 0; // 0xd43 SetNull
	goto Label_3409; // 0xd44 Jump
	
Label_3397:
	var_225_int = 0; // 0xd45 PushI
	var_226_float = 0.3; // 0xd46 PushF
	SetTimer(var_225_int, var_226_float); // 0xd47 Func
	
Label_3403:
	var_227_int = 0; // 0xd4b PushI
	KillTimer(var_227_int); // 0xd4c Func
	goto Label_3409; // 0xd4e Jump
}


func_2799(var_0_object, var_403_float, var_404_int)
{
	var_405_object = Obj(); var_406_float = 0; var_407_float = 0; var_408_object = Obj(); var_409_float = 0; var_410_float = 0; // 0xaef PushV
	var_411_float = 0.9; // 0xaf0 PushF
	var_412_float = var_403_float * var_411_float; // 0xaf1 Mult
	GetVictim(var_412_float, var_408_object); // 0xaf2 Func
	ReportAttack(var_0_object); // 0xaf4 Func
	var_413_bool = var_408_object == var_0_object; // 0xaf6 Eq
	if(var_413_bool == 0) goto Label_2836; // 0xaf7 JumpB
	var_414_float = 0; var_415_object = Obj(); var_416_int = 0; // 0xaf8 PushV
	var_415_object = var_408_object; // 0xaf9 Mov
	var_416_int = var_404_int; // 0xafa Mov
	func_2529(var_416_int); // 0xafb NEW_2
	var_409_float = var_414_float; // 0xafc Mov
	var_417_float = 0; var_418_object = Obj(); var_419_float = 0; var_420_int = 0; // 0xafe PushV
	var_418_object = var_408_object; // 0xaff Mov
	var_419_float = var_409_float; // 0xb00 Mov
	var_421_int = 0; var_422_object = Obj(); var_423_int = 0; // 0xb01 PushV
	var_422_object = var_408_object; // 0xb02 Mov
	var_423_int = var_404_int; // 0xb03 Mov
	func_2532(var_423_int); // 0xb04 NEW_2
	var_420_int = var_421_int; // 0xb05 Mov
	func_3506(var_417_float, var_418_object, var_419_float, var_420_int); // 0xb07 NEW_2
	var_410_float = var_417_float; // 0xb08 Mov
	var_478_int = 0; // 0xb0a PushV
	func_3182(var_478_int); // 0xb0b NEW_2
	ReportHit(var_0_object, var_478_int, var_410_float, var_409_float); // 0xb0d Func
	var_479_object = Obj(); var_480_float = 0; // 0xb0f PushV
	var_479_object = var_408_object; // 0xb10 Mov
	var_480_float = var_410_float; // 0xb11 Mov
	func_3189(); // 0xb12 NEW_2
	
Label_2836:
	return 6; // 0xb14 Return
}


func_2297(var_0_object)
{
	var_68_object = Obj(); // 0x8f9 PushV
	var_68_object = var_0_object; // 0x8fa MovT
	func_3902(var_68_object); // 0x8fb NEW_2
	return 0; // 0x8fd Return
}


func_4350(var_34_object)
{
	var_35_int = 0; // 0x10ff PushV
	func_4275(var_35_int); // 0x1100 NEW_2
	var_39_int = 1; // 0x1102 PushI
	var_40_bool = var_35_int == var_39_int; // 0x1103 Eq
	if(var_40_bool == 0) goto Label_4360; // 0x1104 JumpB
	WorkWithCorpse(var_34_object); // 0x1105 Func
	goto Label_4362; // 0x1107 Jump
	
Label_4362:
	return 0; // 0x110a Return
	
Label_4360:
	Barter(var_34_object); // 0x1108 Func
}


func_1799(var_19_object)
{
	EventDisable(0); // 0x708 EventDisable
	var_20_object = Obj(); // 0x709 PushV
	var_20_object = var_19_object; // 0x70a Mov
	func_1832(var_20_object); // 0x70b NEW_2
	var_100_object = Obj(); // 0x70d PushV
	var_100_object = var_19_object; // 0x70e Mov
	func_5268(var_100_object); // 0x70f NEW_2
	EventEnable(0); // 0x711 EventEnable
	
Label_1810:
	Hold(); // 0x712 Func
	goto Label_1810; // 0x714 Jump
}


func_4363(var_29_int, var_30_int)
{
	var_40_int = 0; var_41_bool = 0; var_42_int = 0; var_43_bool = 0; // 0x110b PushV
	var_44_bool = var_29_int > var_30_int; // 0x110c GT
	if(var_44_bool == 0) goto Label_4370; // 0x110d JumpB
	var_45_string = "GenerateMoney: iMin > iMax"; // 0x110e PushS
	Trace(var_45_string); // 0x110f Func
	return 4; // 0x1111 Return
	
Label_4370:
	var_42_int = 0; // 0x1112 MovI
	var_46_bool = var_29_int != var_30_int; // 0x1113 Neq
	if(var_46_bool == 0) goto Label_4377; // 0x1114 JumpB
	var_47_int = var_30_int - var_29_int; // 0x1115 Sub
	irand(var_42_int, var_47_int); // 0x1116 Func
	goto Label_4381; // 0x1118 Jump
	
Label_4381:
	var_42_int = var_42_int + var_29_int; // 0x111d Add2
	var_48_int = 0; // 0x111e PushI
	var_49_bool = var_42_int == var_48_int; // 0x111f Eq
	if(var_49_bool == 0) goto Label_4386; // 0x1120 JumpB
	return 4; // 0x1121 Return
	
Label_4386:
	var_50_int = 0; var_51_string = ""; // 0x1122 PushV
	var_51_string = "Money"; // 0x1123 MovS
	func_4610(var_50_int, var_51_string); // 0x1124 NEW_2
	var_54_int = 0; // 0x1126 PushI
	AddItem(var_43_bool, var_50_int, var_54_int, var_42_int); // 0x1127 Func
	return 4; // 0x1129 Return
	
Label_4377:
	var_55_int = 0; // 0x1119 PushI
	var_56_bool = var_29_int == var_55_int; // 0x111a Eq
	if(var_56_bool == 0) goto Label_4381; // 0x111b JumpB
	return 4; // 0x111c Return
}


func_3854()
{
	var_293_bool = 0; var_294_bool = 0; // 0xf0e PushV
	CameraSwitchToNormal(); // 0xf0f Func
	var_295_bool = 0; // 0xf11 PushV
	func_5198(var_295_bool); // 0xf12 NEW_2
	if(var_295_bool == 0) goto Label_3862; // 0xf14 JumpB
	goto Label_3870; // 0xf15 Jump
	
Label_3870:
	return 2; // 0xf1e Return
	
Label_3862:
	var_296_string = "head"; // 0xf16 PushS
	HasAnimationTrack(var_294_bool, var_296_string); // 0xf17 Func
	var_297_bool = var_294_bool; // 0xf19 Push
	if(var_297_bool == 0) goto Label_3870; // 0xf1a JumpB
	var_298_string = "head"; // 0xf1b PushS
	UnlookAsync(var_298_string); // 0xf1c Func
}


func_2838(var_0_object, var_366_bool, var_367_float)
{
	var_368_int = 0; var_369_bool = 0; var_370_int = 0; var_371_string = ""; var_372_int = 0; var_373_bool = 0; var_374_int = 0; var_375_string = ""; // 0xb16 PushV
	func_3177(var_375_string); // 0xb18 NEW_2
	irand(var_372_int, var_375_string); // 0xb1a Func
	var_376_int = 1; // 0xb1c PushI
	var_372_int = var_372_int + var_376_int; // 0xb1d Add2
	Face(var_0_object); // 0xb1e Func
	var_377_bool = 1; // 0xb20 PushB
	SetAttackState(var_377_bool); // 0xb21 Func
	func_4070(); // 0xb24 NEW_2
	var_382_string = "all"; // 0xb26 PushS
	var_383_string = "attack_begin"; // 0xb27 PushS
	var_384_int = var_383_string + var_372_int; // 0xb28 Add
	PlayAnimation(var_382_string, var_384_int); // 0xb29 Func
	WaitForAnimEnd(); // 0xb2b Func
	func_3145(var_374_int, var_375_string); // 0xb2e NEW_2
	var_400_bool = 0; var_401_object = Obj(); // 0xb30 PushV
	var_401_object = var_0_object; // 0xb31 MovT
	func_3620(var_400_bool, var_401_object); // 0xb32 NEW_2
	var_402_bool = var_400_bool == 0; // 0xb34 Not
	if(var_402_bool == 0) goto Label_2874; // 0xb35 JumpB
	StopAsync(); // 0xb36 Func
	var_366_bool = 0; // 0xb38 MovB
	return 8; // 0xb39 Return
	
Label_2874:
	var_403_float = 0; var_404_int = 0; // 0xb3a PushV
	var_403_float = var_367_float; // 0xb3b Mov
	var_404_int = var_372_int; // 0xb3c Mov
	func_2799(var_375_string, var_403_float, var_404_int); // 0xb3d NEW_2
	var_481_string = "all"; // 0xb3f PushS
	var_482_string = "attack_middle"; // 0xb40 PushS
	var_483_int = var_482_string + var_372_int; // 0xb41 Add
	HasAnimation(var_373_bool, var_481_string, var_483_int); // 0xb42 Func
	var_484_bool = var_373_bool; // 0xb44 Push
	if(var_484_bool == 0) goto Label_2955; // 0xb45 JumpB
	func_4070(); // 0xb47 NEW_2
	var_485_string = "all"; // 0xb49 PushS
	var_486_string = "attack_middle"; // 0xb4a PushS
	var_487_int = var_486_string + var_372_int; // 0xb4b Add
	PlayAnimation(var_485_string, var_487_int); // 0xb4c Func
	WaitForAnimEnd(); // 0xb4e Func
	func_3177(var_375_string); // 0xb51 NEW_2
	var_488_bool = 0; var_489_object = Obj(); // 0xb53 PushV
	var_489_object = var_0_object; // 0xb54 MovT
	func_3620(var_488_bool, var_489_object); // 0xb55 NEW_2
	var_490_bool = var_488_bool == 0; // 0xb57 Not
	if(var_490_bool == 0) goto Label_2909; // 0xb58 JumpB
	StopAsync(); // 0xb59 Func
	var_366_bool = 0; // 0xb5b MovB
	return 8; // 0xb5c Return
	
Label_2909:
	var_491_float = 0; var_492_int = 0; // 0xb5d PushV
	var_491_float = var_367_float; // 0xb5e Mov
	var_492_int = var_372_int; // 0xb5f Mov
	func_2799(var_375_string, var_491_float, var_492_int); // 0xb60 NEW_2
	var_374_int = 1; // 0xb62 MovI
	
Label_2915:
	var_493_string = "attack_middle"; // 0xb63 PushS
	var_494_int = var_493_string + var_372_int; // 0xb64 Add
	var_495_string = "_"; // 0xb65 PushS
	var_496_int = var_494_int + var_495_string; // 0xb66 Add
	var_375_string = var_496_int + var_374_int; // 0xb67 Add2
	var_497_string = "all"; // 0xb68 PushS
	HasAnimation(var_373_bool, var_497_string, var_375_string); // 0xb69 Func
	var_498_bool = var_373_bool == 0; // 0xb6b Not
	if(var_498_bool == 0) goto Label_2926; // 0xb6c JumpB
	goto Label_2955; // 0xb6d Jump
	
Label_2955:
	var_499_bool = 0; // 0xb8b PushB
	SetAttackState(var_499_bool); // 0xb8c Func
	var_500_string = "all"; // 0xb8e PushS
	var_501_string = "attack_end"; // 0xb8f PushS
	var_502_int = var_501_string + var_372_int; // 0xb90 Add
	PlayAnimation(var_500_string, var_502_int); // 0xb91 Func
	var_503_bool = 0; // 0xb93 PushV
	func_3191(var_503_bool); // 0xb94 NEW_2
	if(var_503_bool == 0) goto Label_2973; // 0xb96 JumpB
	var_504_bool = 0; var_505_float = 0; // 0xb97 PushV
	var_505_float = 0.75; // 0xb98 MovF
	func_2975(var_504_bool, var_505_float); // 0xb99 NEW_2
	StopAsync(); // 0xb9b Func
	
Label_2973:
	var_366_bool = 1; // 0xb9d MovB
	return 8; // 0xb9e Return
	
Label_2926:
	func_4070(); // 0xb6f NEW_2
	var_513_string = "all"; // 0xb71 PushS
	PlayAnimation(var_513_string, var_375_string); // 0xb72 Func
	WaitForAnimEnd(); // 0xb74 Func
	func_3177(var_375_string); // 0xb77 NEW_2
	var_514_bool = 0; var_515_object = Obj(); // 0xb79 PushV
	var_515_object = var_0_object; // 0xb7a MovT
	func_3620(var_514_bool, var_515_object); // 0xb7b NEW_2
	var_516_bool = var_514_bool == 0; // 0xb7d Not
	if(var_516_bool == 0) goto Label_2947; // 0xb7e JumpB
	StopAsync(); // 0xb7f Func
	var_366_bool = 0; // 0xb81 MovB
	return 8; // 0xb82 Return
	
Label_2947:
	var_517_float = 0; var_518_int = 0; // 0xb83 PushV
	var_517_float = var_367_float; // 0xb84 Mov
	var_518_int = var_372_int; // 0xb85 Mov
	func_2799(var_375_string, var_517_float, var_518_int); // 0xb86 NEW_2
	var_519_int = 1; // 0xb88 PushI
	var_374_int = var_374_int + var_519_int; // 0xb89 Add2
	goto Label_2915; // 0xb8a Jump
}


func_3871(var_240_string)
{
	var_241_bool = 0; var_242_float = 0; var_243_float = 0; var_244_bool = 0; var_245_float = 0; var_246_float = 0; // 0xf1f PushV
	lshHasAnimation(var_244_bool, var_240_string); // 0xf20 Func
	var_247_bool = var_244_bool; // 0xf22 Push
	if(var_247_bool == 0) goto Label_3882; // 0xf23 JumpB
	lshGetAnimTimes(var_240_string, var_245_float, var_246_float); // 0xf24 Func
	var_248_bool = 0; // 0xf26 PushB
	lshPlayAnimation(var_245_float, var_246_float, var_248_bool); // 0xf27 Func
	goto Label_3886; // 0xf29 Jump
	
Label_3886:
	return 6; // 0xf2e Return
	
Label_3882:
	var_249_string = "Can't find lsh animation : "; // 0xf2a PushS
	var_250_int = var_249_string + var_240_string; // 0xf2b Add
	Trace(var_250_int); // 0xf2c Func
}


func_4898(var_84_int, var_85_object)
{
	var_87_int = 0; var_88_object = Obj(); // 0x1323 PushV
	var_88_object = var_85_object; // 0x1324 Mov
	func_4805(var_87_int, var_88_object); // 0x1325 NEW_2
	var_84_int = var_87_int; // 0x1326 Mov
	return 0; // 0x1328 Return
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
	func_3920(var_95_string); // 0x76e NEW_2
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


func_4905(var_123_object)
{
	var_124_object = Obj(); // 0x132a PushV
	var_124_object = var_123_object; // 0x132b Mov
	func_4815(var_124_object); // 0x132c NEW_2
	return 0; // 0x132e Return
}


func_4394(var_230_string)
{
	var_231_object = Obj(); var_232_int = 0; var_233_bool = 0; var_234_object = Obj(); var_235_int = 0; var_236_bool = 0; // 0x112a PushV
	CreateInvItem(var_234_object); // 0x112b Func
	SetItemName(var_230_string); // 0x112d ObjFunc
	var_237_string = "Organ"; // 0x112f PushS
	var_238_int = 1; // 0x1130 PushI
	SetProperty(var_237_string, var_238_int); // 0x1131 ObjFunc
	GetItemID(var_235_int); // 0x1133 ObjFunc
	var_239_int = 0; // 0x1135 PushI
	var_240_int = 1; // 0x1136 PushI
	AddItem(var_236_bool, var_234_object, var_239_int, var_240_int); // 0x1137 Func
	return 6; // 0x1139 Return
}


func_3887(var_132_string, var_133_bool)
{
	var_136_bool = 0; var_137_float = 0; var_138_float = 0; var_139_bool = 0; var_140_float = 0; var_141_float = 0; // 0xf2f PushV
	lshHasAnimation(var_139_bool, var_132_string); // 0xf30 Func
	var_142_bool = var_139_bool; // 0xf32 Push
	if(var_142_bool == 0) goto Label_3897; // 0xf33 JumpB
	lshGetAnimTimes(var_132_string, var_140_float, var_141_float); // 0xf34 Func
	lshPlayAnimation(var_140_float, var_141_float, var_133_bool); // 0xf36 Func
	goto Label_3901; // 0xf38 Jump
	
Label_3901:
	return 6; // 0xf3d Return
	
Label_3897:
	var_143_string = "Can't find lsh animation : "; // 0xf39 PushS
	var_144_int = var_143_string + var_132_string; // 0xf3a Add
	Trace(var_144_int); // 0xf3b Func
}


func_4911(var_26_bool, var_27_object, var_28_object, var_29_float, var_30_bool)
{
	var_31_bool = 0; var_32_bool = 0; // 0x132f PushV
	var_33_bool = 0; var_34_object = Obj(); var_35_bool = 0; // 0x1330 PushV
	var_34_object = var_28_object; // 0x1331 Mov
	var_35_bool = !var_30_bool; // 0x1332 Not2
	func_4823(var_33_bool, var_34_object, var_35_bool); // 0x1333 NEW_2
	var_71_bool = var_33_bool == 0; // 0x1335 Not
	if(var_71_bool == 0) goto Label_4921; // 0x1336 JumpB
	var_26_bool = 0; // 0x1337 MovB
	return 2; // 0x1338 Return
	
Label_4921:
	CanSee(var_32_bool, var_27_object); // 0x1339 Func
	var_72_bool = 0; // 0x133b PushV
	var_72_bool = 1; // 0x133c MovB
	var_73_bool = var_32_bool; // 0x133d Push
	if(var_73_bool == 0) goto Label_4935; // 0x133e JumpB
	var_74_float = 0; var_75_object = Obj(); // 0x133f PushV
	var_75_object = var_27_object; // 0x1340 Mov
	func_3481(var_75_object); // 0x1341 NEW_2
	var_82_float = var_29_float * var_29_float; // 0x1343 Mult
	var_83_bool = var_74_float <= var_82_float; // 0x1344 LE
	if(var_83_bool == 0) goto Label_4935; // 0x1345 JumpB
	var_72_bool = 0; // 0x1346 MovB
	
Label_4935:
	if(var_72_bool == 0) goto Label_4938; // 0x1347 JumpB
	var_26_bool = 1; // 0x1348 MovB
	return 2; // 0x1349 Return
	
Label_4938:
	var_26_bool = 0; // 0x134a MovB
	return 2; // 0x134b Return
}


func_4411()
{
	var_224_int = 0; // 0x113b PushV
	func_4275(var_224_int); // 0x113c NEW_2
	var_228_int = 1; // 0x113e PushI
	var_229_bool = var_224_int != var_228_int; // 0x113f Neq
	if(var_229_bool == 0) goto Label_4418; // 0x1140 JumpB
	return 0; // 0x1141 Return
	
Label_4418:
	var_230_string = ""; // 0x1142 PushV
	var_230_string = "liver"; // 0x1143 MovS
	func_4394(var_230_string); // 0x1144 NEW_2
	var_241_string = ""; // 0x1146 PushV
	var_241_string = "kidney"; // 0x1147 MovS
	func_4394(var_241_string); // 0x1148 NEW_2
	var_242_string = ""; // 0x114a PushV
	var_242_string = "heart"; // 0x114b MovS
	func_4394(var_242_string); // 0x114c NEW_2
	var_243_string = ""; // 0x114e PushV
	var_243_string = "blood"; // 0x114f MovS
	func_4394(var_243_string); // 0x1150 NEW_2
	return 0; // 0x1152 Return
}


func_3902(var_21_object)
{
	var_22_float = 0; var_23_cvector = CVector(0,0,0); var_24_float = 0; var_25_cvector = CVector(0,0,0); // 0xf3e PushV
	GetEyesHeight(var_24_float); // 0xf3f ObjFunc
	var_25_cvector = CVector(0.0, 0.0, 0.0); // 0xf41 MovV
	var_26_float = GetByIndex(var_25_cvector, 1); // 0xf42 PushE
	var_26_float = var_24_float; // 0xf43 Mov
	SetByIndex(var_25_cvector, 1) = var_26_float; // 0xf44 PopE
	var_27_string = "head"; // 0xf45 PushS
	LookAsync(var_21_object, var_27_string, var_25_cvector); // 0xf46 Func
	return 4; // 0xf48 Return
}


func_323(var_2_object, var_128_string)
{
	var_129_bool = 0; // 0x144 PushV
	func_5198(var_129_bool); // 0x145 NEW_2
	var_130_bool = var_129_bool == 0; // 0x147 Not
	if(var_130_bool == 0) goto Label_330; // 0x148 JumpB
	return 0; // 0x149 Return
	
Label_330:
	var_131_bool = var_128_string == var_2_object; // 0x14a Eq
	if(var_131_bool == 0) goto Label_333; // 0x14b JumpB
	return 0; // 0x14c Return
	
Label_333:
	var_132_string = ""; var_133_bool = 0; // 0x14d PushV
	var_132_string = var_128_string; // 0x14e Mov
	var_134_string = ""; // 0x14f PushS
	var_135_bool = var_128_string == var_134_string; // 0x150 Eq
	if(var_135_bool == 0) goto Label_340; // 0x151 JumpB
	var_133_bool = 0; // 0x152 MovB
	goto Label_341; // 0x153 Jump
	
Label_341:
	func_3887(var_132_string, var_133_bool); // 0x155 NEW_2
	var_2_object = var_128_string; // 0x157 TMov
	return 0; // 0x158 Return
	
Label_340:
	var_133_bool = 1; // 0x154 MovB
}


func_3913()
{
	var_20_bool = 0; // 0xf49 PushV
	func_5198(var_20_bool); // 0xf4a NEW_2
	if(var_20_bool == 0) goto Label_3919; // 0xf4c JumpB
	lshStopSpeech(); // 0xf4d Func
	
Label_3919:
	return 0; // 0xf4f Return
}


func_4940(var_20_int)
{
	var_20_int = 2; // 0x134d MovI
	return 0; // 0x134e Return
}


func_4943(var_28_object)
{
	var_29_object = Obj(); // 0x1350 PushV
	var_29_object = var_28_object; // 0x1351 Mov
	func_5208(var_29_object); // 0x1352 NEW_2
	return 0; // 0x1354 Return
}


func_3920(var_43_string)
{
	var_44_bool = 0; var_45_int = 0; var_46_bool = 0; var_47_int = 0; var_48_bool = 0; var_49_float = 0; var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_bool = 0; var_53_int = 0; var_54_bool = 0; var_55_int = 0; var_56_bool = 0; var_57_float = 0; var_58_cvector = CVector(0,0,0); var_59_cvector = CVector(0,0,0); // 0xf50 PushV
	IsExisting3DSound(var_52_bool, var_43_string); // 0xf51 Func
	var_60_bool = var_52_bool == 0; // 0xf53 Not
	if(var_60_bool == 0) goto Label_3945; // 0xf54 JumpB
	var_53_int = 0; // 0xf55 MovI
	
Label_3926:
	var_61_int = 1; // 0xf56 PushI
	var_62_int = var_53_int + var_61_int; // 0xf57 Add
	var_63_int = var_43_string + var_62_int; // 0xf58 Add
	IsExisting3DSound(var_54_bool, var_63_int); // 0xf59 Func
	var_64_bool = var_54_bool == 0; // 0xf5b Not
	if(var_64_bool == 0) goto Label_3934; // 0xf5c JumpB
	goto Label_3937; // 0xf5d Jump
	
Label_3937:
	var_65_bool = var_53_int == 0; // 0xf61 Not
	if(var_65_bool == 0) goto Label_3940; // 0xf62 JumpB
	return 16; // 0xf63 Return
	
Label_3940:
	irand(var_55_int, var_53_int); // 0xf64 Func
	var_66_int = 1; // 0xf66 PushI
	var_67_int = var_55_int + var_66_int; // 0xf67 Add
	var_43_string = var_43_string + var_67_int; // 0xf68 Add2
	
Label_3945:
	Is3DSoundLoaded(var_56_bool, var_43_string); // 0xf69 Func
	var_68_bool = var_56_bool; // 0xf6b Push
	if(var_68_bool == 0) goto Label_3960; // 0xf6c JumpB
	GetEyesHeight(var_57_float); // 0xf6d Func
	GetDirection(var_58_cvector); // 0xf6f Func
	var_69_int = 50; // 0xf71 PushI
	var_59_cvector = var_58_cvector * var_69_int; // 0xf72 Mult2
	var_70_float = GetByIndex(var_59_cvector, 1); // 0xf73 PushE
	var_70_float = var_70_float + var_57_float; // 0xf74 Add2
	SetByIndex(var_59_cvector, 1) = var_70_float; // 0xf75 PopE
	PlayGlobalSound(var_43_string, var_59_cvector); // 0xf76 Func
	
Label_3960:
	return 16; // 0xf78 Return
	
Label_3934:
	var_71_int = 1; // 0xf5e PushI
	var_53_int = var_53_int + var_71_int; // 0xf5f Add2
	goto Label_3926; // 0xf60 Jump
}


func_3411(var_0_object, var_1_object, var_25_int)
{
	var_26_int = 0; // 0xd54 PushI
	var_27_bool = var_25_int != var_26_int; // 0xd55 Neq
	if(var_27_bool == 0) goto Label_3416; // 0xd56 JumpB
	return 0; // 0xd57 Return
	
Label_3416:
	var_28_bool = 0; var_29_object = Obj(); // 0xd58 PushV
	var_29_object = var_1_object; // 0xd59 MovT
	func_3449(var_28_bool, var_29_object); // 0xd5a NEW_2
	var_64_bool = var_28_bool == 0; // 0xd5c Not
	if(var_64_bool == 0) goto Label_3423; // 0xd5d JumpB
	var_0_object = 1; // 0xd5e TMovB
	
Label_3423:
	var_65_int = 0; // 0xd5f PushI
	KillTimer(var_65_int); // 0xd60 Func
	Stop(); // 0xd62 Func
	return 0; // 0xd64 Return
}


func_4435(var_23_bool)
{
	var_24_int = 0; var_25_bool = 0; var_26_int = 0; var_27_bool = 0; // 0x1153 PushV
	var_28_bool = var_23_bool; // 0x1154 Push
	if(var_28_bool == 0) goto Label_4524; // 0x1155 JumpB
	var_29_int = 0; var_30_int = 0; // 0x1156 PushV
	var_29_int = 0; // 0x1157 MovI
	var_31_int = 100; // 0x1158 PushI
	var_32_int = 0; // 0x1159 PushV
	func_4052(var_32_int); // 0x115a NEW_2
	var_38_int = 100; // 0x115c PushI
	var_39_float = var_32_int * var_38_int; // 0x115d Mult
	var_30_int = var_31_int + var_39_float; // 0x115e Add2
	func_4363(var_29_int, var_30_int); // 0x115f NEW_2
	var_57_int = 8; // 0x1161 PushI
	irand(var_26_int, var_57_int); // 0x1162 Func
	var_58_int = 0; // 0x1164 PushI
	var_59_bool = var_26_int == var_58_int; // 0x1165 Eq
	if(var_59_bool == 0) goto Label_4464; // 0x1166 JumpB
	var_60_int = 0; var_61_string = ""; // 0x1167 PushV
	var_61_string = "lemon"; // 0x1168 MovS
	func_4610(var_60_int, var_61_string); // 0x1169 NEW_2
	var_62_int = 0; // 0x116b PushI
	var_63_int = 1; // 0x116c PushI
	AddItem(var_27_bool, var_60_int, var_62_int, var_63_int); // 0x116d Func
	goto Label_4523; // 0x116f Jump
	
Label_4523:
	goto Label_4609; // 0x11ab Jump
	
Label_4609:
	return 4; // 0x1201 Return
	
Label_4464:
	var_64_int = 1; // 0x1170 PushI
	var_65_bool = var_26_int == var_64_int; // 0x1171 Eq
	if(var_65_bool == 0) goto Label_4476; // 0x1172 JumpB
	var_66_int = 0; var_67_string = ""; // 0x1173 PushV
	var_67_string = "rusk"; // 0x1174 MovS
	func_4610(var_66_int, var_67_string); // 0x1175 NEW_2
	var_68_int = 0; // 0x1177 PushI
	var_69_int = 1; // 0x1178 PushI
	AddItem(var_27_bool, var_66_int, var_68_int, var_69_int); // 0x1179 Func
	goto Label_4523; // 0x117b Jump
	
Label_4476:
	var_70_int = 2; // 0x117c PushI
	var_71_bool = var_26_int == var_70_int; // 0x117d Eq
	if(var_71_bool == 0) goto Label_4488; // 0x117e JumpB
	var_72_int = 0; var_73_string = ""; // 0x117f PushV
	var_73_string = "hook"; // 0x1180 MovS
	func_4610(var_72_int, var_73_string); // 0x1181 NEW_2
	var_74_int = 0; // 0x1183 PushI
	var_75_int = 1; // 0x1184 PushI
	AddItem(var_27_bool, var_72_int, var_74_int, var_75_int); // 0x1185 Func
	goto Label_4523; // 0x1187 Jump
	
Label_4488:
	var_76_int = 4; // 0x1188 PushI
	var_77_bool = var_26_int == var_76_int; // 0x1189 Eq
	if(var_77_bool == 0) goto Label_4500; // 0x118a JumpB
	var_78_int = 0; var_79_string = ""; // 0x118b PushV
	var_79_string = "syringe"; // 0x118c MovS
	func_4610(var_78_int, var_79_string); // 0x118d NEW_2
	var_80_int = 0; // 0x118f PushI
	var_81_int = 1; // 0x1190 PushI
	AddItem(var_27_bool, var_78_int, var_80_int, var_81_int); // 0x1191 Func
	goto Label_4523; // 0x1193 Jump
	
Label_4500:
	var_82_int = 5; // 0x1194 PushI
	var_83_bool = var_26_int == var_82_int; // 0x1195 Eq
	if(var_83_bool == 0) goto Label_4512; // 0x1196 JumpB
	var_84_int = 0; var_85_string = ""; // 0x1197 PushV
	var_85_string = "watch"; // 0x1198 MovS
	func_4610(var_84_int, var_85_string); // 0x1199 NEW_2
	var_86_int = 0; // 0x119b PushI
	var_87_int = 1; // 0x119c PushI
	AddItem(var_27_bool, var_84_int, var_86_int, var_87_int); // 0x119d Func
	goto Label_4523; // 0x119f Jump
	
Label_4512:
	var_88_int = 6; // 0x11a0 PushI
	var_89_bool = var_26_int == var_88_int; // 0x11a1 Eq
	if(var_89_bool == 0) goto Label_4523; // 0x11a2 JumpB
	var_90_int = 0; var_91_string = ""; // 0x11a3 PushV
	var_91_string = "razor"; // 0x11a4 MovS
	func_4610(var_90_int, var_91_string); // 0x11a5 NEW_2
	var_92_int = 0; // 0x11a7 PushI
	var_93_int = 1; // 0x11a8 PushI
	AddItem(var_27_bool, var_90_int, var_92_int, var_93_int); // 0x11a9 Func
	
Label_4524:
	var_94_int = 0; var_95_int = 0; // 0x11ac PushV
	var_94_int = 0; // 0x11ad MovI
	var_96_int = 50; // 0x11ae PushI
	var_97_int = 0; // 0x11af PushV
	func_4052(var_97_int); // 0x11b0 NEW_2
	var_98_int = 50; // 0x11b2 PushI
	var_99_float = var_97_int * var_98_int; // 0x11b3 Mult
	var_95_int = var_96_int + var_99_float; // 0x11b4 Add2
	func_4363(var_94_int, var_95_int); // 0x11b5 NEW_2
	var_100_int = 7; // 0x11b7 PushI
	irand(var_26_int, var_100_int); // 0x11b8 Func
	var_101_int = 0; // 0x11ba PushI
	var_102_bool = var_26_int == var_101_int; // 0x11bb Eq
	if(var_102_bool == 0) goto Label_4550; // 0x11bc JumpB
	var_103_int = 0; var_104_string = ""; // 0x11bd PushV
	var_104_string = "beads"; // 0x11be MovS
	func_4610(var_103_int, var_104_string); // 0x11bf NEW_2
	var_105_int = 0; // 0x11c1 PushI
	var_106_int = 1; // 0x11c2 PushI
	AddItem(var_27_bool, var_103_int, var_105_int, var_106_int); // 0x11c3 Func
	goto Label_4609; // 0x11c5 Jump
	
Label_4550:
	var_107_int = 1; // 0x11c6 PushI
	var_108_bool = var_26_int == var_107_int; // 0x11c7 Eq
	if(var_108_bool == 0) goto Label_4562; // 0x11c8 JumpB
	var_109_int = 0; var_110_string = ""; // 0x11c9 PushV
	var_110_string = "bracelet"; // 0x11ca MovS
	func_4610(var_109_int, var_110_string); // 0x11cb NEW_2
	var_111_int = 0; // 0x11cd PushI
	var_112_int = 1; // 0x11ce PushI
	AddItem(var_27_bool, var_109_int, var_111_int, var_112_int); // 0x11cf Func
	goto Label_4609; // 0x11d1 Jump
	
Label_4562:
	var_113_int = 2; // 0x11d2 PushI
	var_114_bool = var_26_int == var_113_int; // 0x11d3 Eq
	if(var_114_bool == 0) goto Label_4574; // 0x11d4 JumpB
	var_115_int = 0; var_116_string = ""; // 0x11d5 PushV
	var_116_string = "ear_ring"; // 0x11d6 MovS
	func_4610(var_115_int, var_116_string); // 0x11d7 NEW_2
	var_117_int = 0; // 0x11d9 PushI
	var_118_int = 1; // 0x11da PushI
	AddItem(var_27_bool, var_115_int, var_117_int, var_118_int); // 0x11db Func
	goto Label_4609; // 0x11dd Jump
	
Label_4574:
	var_119_int = 3; // 0x11de PushI
	var_120_bool = var_26_int == var_119_int; // 0x11df Eq
	if(var_120_bool == 0) goto Label_4586; // 0x11e0 JumpB
	var_121_int = 0; var_122_string = ""; // 0x11e1 PushV
	var_122_string = "gold_ring"; // 0x11e2 MovS
	func_4610(var_121_int, var_122_string); // 0x11e3 NEW_2
	var_123_int = 0; // 0x11e5 PushI
	var_124_int = 1; // 0x11e6 PushI
	AddItem(var_27_bool, var_121_int, var_123_int, var_124_int); // 0x11e7 Func
	goto Label_4609; // 0x11e9 Jump
	
Label_4586:
	var_125_int = 4; // 0x11ea PushI
	var_126_bool = var_26_int == var_125_int; // 0x11eb Eq
	if(var_126_bool == 0) goto Label_4598; // 0x11ec JumpB
	var_127_int = 0; var_128_string = ""; // 0x11ed PushV
	var_128_string = "silver_ring"; // 0x11ee MovS
	func_4610(var_127_int, var_128_string); // 0x11ef NEW_2
	var_129_int = 0; // 0x11f1 PushI
	var_130_int = 1; // 0x11f2 PushI
	AddItem(var_27_bool, var_127_int, var_129_int, var_130_int); // 0x11f3 Func
	goto Label_4609; // 0x11f5 Jump
	
Label_4598:
	var_131_int = 5; // 0x11f6 PushI
	var_132_bool = var_26_int == var_131_int; // 0x11f7 Eq
	if(var_132_bool == 0) goto Label_4609; // 0x11f8 JumpB
	var_133_int = 0; var_134_string = ""; // 0x11f9 PushV
	var_134_string = "flower"; // 0x11fa MovS
	func_4610(var_133_int, var_134_string); // 0x11fb NEW_2
	var_135_int = 0; // 0x11fd PushI
	var_136_int = 1; // 0x11fe PushI
	AddItem(var_27_bool, var_133_int, var_135_int, var_136_int); // 0x11ff Func
}


func_4949()
{
	return 0; // 0x1355 Return
}


func_4950(var_20_int, var_21_object)
{
	var_22_bool = 0; var_23_bool = 0; // 0x1356 PushV
	var_24_string = "Received steal"; // 0x1357 PushS
	Trace(var_24_string); // 0x1358 Func
	CanSee(var_23_bool, var_21_object); // 0x135a Func
	var_25_bool = var_23_bool; // 0x135c Push
	if(var_25_bool == 0) goto Label_4964; // 0x135d JumpB
	var_26_int = 0; var_27_object = Obj(); // 0x135e PushV
	var_27_object = var_21_object; // 0x135f Mov
	func_4805(var_26_int, var_27_object); // 0x1360 NEW_2
	var_20_int = var_26_int; // 0x1361 Mov
	return 2; // 0x1363 Return
	
Label_4964:
	var_20_int = 0; // 0x1364 MovI
	return 2; // 0x1365 Return
}


func_4966(var_68_object)
{
	var_69_object = Obj(); // 0x1367 PushV
	var_69_object = var_68_object; // 0x1368 Mov
	func_4815(var_69_object); // 0x1369 NEW_2
	return 0; // 0x136b Return
}


func_3433(var_0_object)
{
	var_0_object = 1; // 0xd69 TMovB
	var_21_int = 0; // 0xd6a PushI
	KillTimer(var_21_int); // 0xd6b Func
	Stop(); // 0xd6d Func
	return 0; // 0xd6f Return
}


func_4972(var_127_int)
{
	var_127_int = 0; // 0x136d MovI
	return 0; // 0x136e Return
}


func_4975()
{
	return 0; // 0x1370 Return
}


func_4977(var_23_bool)
{
	var_23_bool = 0; // 0x1372 MovB
	return 0; // 0x1373 Return
}


func_4980()
{
	return 0; // 0x1375 Return
}


func_4982(var_30_bool, var_31_object)
{
	var_32_bool = 0; var_33_bool = 0; // 0x1376 PushV
	CanSee(var_33_bool, var_31_object); // 0x1377 Func
	var_30_bool = 1; // 0x1379 MovB
	var_34_bool = var_33_bool; // 0x137a Push
	if(var_34_bool == 0) goto Label_4996; // 0x137b JumpB
	var_35_float = 0; var_36_object = Obj(); // 0x137c PushV
	var_36_object = var_31_object; // 0x137d Mov
	func_3481(var_36_object); // 0x137e NEW_2
	var_43_int = 2250000; // 0x1380 PushI
	var_44_bool = var_35_float <= var_43_int; // 0x1381 LE
	if(var_44_bool == 0) goto Label_4996; // 0x1382 JumpB
	var_30_bool = 0; // 0x1383 MovB
	
Label_4996:
	return 2; // 0x1384 Return
}


func_3961(var_105_object)
{
	var_106_object = Obj(); var_107_object = Obj(); // 0xf79 PushV
	self(var_107_object); // 0xf7a Func
	var_105_object = var_107_object; // 0xf7c Mov
	return 2; // 0xf7d Return
}


func_3449(var_28_bool, var_29_object)
{
	var_30_bool = 0; var_31_object = Obj(); // 0xd7a PushV
	var_31_object = var_29_object; // 0xd7b Mov
	func_3620(var_30_bool, var_31_object); // 0xd7c NEW_2
	var_28_bool = var_30_bool; // 0xd7d Mov
	return 0; // 0xd7f Return
}


func_3967(var_49_cvector, var_50_cvector)
{
	var_57_float = 0; var_58_float = 0; // 0xf7f PushV
	var_59_int = var_50_cvector | var_50_cvector; // 0xf80 Or
	var_58_float = sqrt(var_59_int); // 0xf81 Sqrt2
	var_60_float = 0.0; // 0xf82 PushF
	var_61_bool = var_58_float < var_60_float; // 0xf83 LT
	if(var_61_bool == 0) goto Label_3975; // 0xf84 JumpB
	var_49_cvector = CVector(0.0, 0.0, 0.0); // 0xf85 MovV
	return 2; // 0xf86 Return
	
Label_3975:
	var_49_cvector = var_50_cvector / var_50_cvector; // 0xf87 Div2
	return 2; // 0xf88 Return
}


func_3456(var_217_string)
{
	var_217_string = "walk"; // 0xd80 MovS
	return 0; // 0xd81 Return
}


func_3458(var_218_string)
{
	var_218_string = "run"; // 0xd82 MovS
	return 0; // 0xd83 Return
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
	func_3920(var_43_string); // 0x790 NEW_2
	var_72_string = "all"; // 0x792 PushS
	PlayAnimation(var_72_string, var_42_string); // 0x793 Func
	WaitForAnimEnd(); // 0x795 Func
	var_73_string = "all"; // 0x797 PushS
	LockAnimationEnd(var_73_string, var_42_string); // 0x798 Func
	RemoveEnvelope(); // 0x79a Func
	return 0; // 0x79c Return
}


func_3460(var_445_string, var_446_int)
{
	var_447_int = 2; // 0xd85 PushI
	var_448_bool = var_446_int == var_447_int; // 0xd86 Eq
	if(var_448_bool == 0) goto Label_3467; // 0xd87 JumpB
	var_445_string = "fire"; // 0xd88 MovS
	return 0; // 0xd89 Return
	
Label_3467:
	var_449_int = 1; // 0xd8b PushI
	var_450_bool = var_446_int == var_449_int; // 0xd8c Eq
	if(var_450_bool == 0) goto Label_3472; // 0xd8d JumpB
	var_445_string = "bullet"; // 0xd8e MovS
	return 0; // 0xd8f Return
	
Label_3472:
	var_445_string = "phys"; // 0xd90 MovS
	return 0; // 0xd91 Return
}


func_4997(var_58_object)
{
	var_59_object = Obj(); // 0x1386 PushV
	var_59_object = var_58_object; // 0x1387 Mov
	func_4797(var_59_object); // 0x1388 NEW_2
	return 0; // 0x138a Return
}


func_3977(var_455_float, var_456_float, var_457_float)
{
	var_460_bool = var_456_float < var_457_float; // 0xf8a LT
	if(var_460_bool == 0) goto Label_3982; // 0xf8b JumpB
	var_455_float = var_456_float; // 0xf8c Mov
	goto Label_3983; // 0xf8d Jump
	
Label_3983:
	return 0; // 0xf8f Return
	
Label_3982:
	var_455_float = var_457_float; // 0xf8e Mov
}


func_5003(var_47_bool)
{
	var_47_bool = 0; // 0x138c MovB
	return 0; // 0x138d Return
}


func_2445()
{
	StopGroup0(); // 0x98d Func
	StopAsync(); // 0x98f Func
	var_30_string = "head"; // 0x991 PushS
	UnlookAsync(var_30_string); // 0x992 Func
	var_31_int = 111; // 0x994 PushI
	KillTimer(var_31_int); // 0x995 Func
	return 0; // 0x997 Return
}


func_5006()
{
	return 0; // 0x138f Return
}


func_3984(var_465_float, var_466_float, var_467_float, var_468_float)
{
	var_469_bool = var_466_float < var_467_float; // 0xf91 LT
	if(var_469_bool == 0) goto Label_3989; // 0xf92 JumpB
	var_465_float = var_467_float; // 0xf93 Mov
	return 0; // 0xf94 Return
	
Label_3989:
	var_470_bool = var_466_float > var_468_float; // 0xf95 GT
	if(var_470_bool == 0) goto Label_3993; // 0xf96 JumpB
	var_465_float = var_468_float; // 0xf97 Mov
	return 0; // 0xf98 Return
	
Label_3993:
	var_465_float = var_466_float; // 0xf99 Mov
	return 0; // 0xf9a Return
}


func_5008(var_25_bool)
{
	var_25_bool = 0; // 0x1391 MovB
	return 0; // 0x1392 Return
}


func_3474(var_51_cvector)
{
	var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); var_56_cvector = CVector(0,0,0); // 0xd92 PushV
	GetPosition(var_55_cvector); // 0xd93 Func
	GetPosition(var_56_cvector); // 0xd95 ObjFunc
	var_51_cvector = var_56_cvector - var_55_cvector; // 0xd97 Sub2
	return 4; // 0xd98 Return
}


func_5011()
{
	return 0; // 0x1394 Return
}


func_5013(var_151_string, var_152_int)
{
	var_153_string = ""; var_154_string = ""; // 0x1395 PushV
	var_154_string = "idle"; // 0x1396 MovS
	var_155_int = var_152_int; // 0x1397 Push
	if(var_155_int == 0) goto Label_5018; // 0x1398 JumpB
	var_154_string = var_154_string + var_152_int; // 0x1399 Add2
	
Label_5018:
	var_151_string = var_154_string; // 0x139a Mov
	return 2; // 0x139b Return
}


func_3481(var_35_float)
{
	var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); // 0xd99 PushV
	GetPosition(var_40_cvector); // 0xd9a Func
	GetPosition(var_41_cvector); // 0xd9c ObjFunc
	var_42_cvector = var_41_cvector - var_40_cvector; // 0xd9e Sub2
	var_35_float = var_42_cvector | var_42_cvector; // 0xd9f Or2
	return 6; // 0xda0 Return
}


func_3995(var_354_object)
{
	var_355_object = Obj(); var_356_object = Obj(); // 0xf9b PushV
	CreateObjectVector(var_356_object); // 0xf9c Func
	var_354_object = var_356_object; // 0xf9e Mov
	return 2; // 0xf9f Return
}


func_5020()
{
	var_302_object = Obj(); var_303_object = Obj(); var_304_object = Obj(); var_305_object = Obj(); var_306_int = 0; var_307_int = 0; var_308_int = 0; var_309_int = 0; var_310_object = Obj(); var_311_int = 0; var_312_bool = 0; var_313_int = 0; var_314_float = 0; var_315_int = 0; var_316_object = Obj(); var_317_int = 0; var_318_int = 0; var_319_int = 0; var_320_int = 0; var_321_int = 0; var_322_int = 0; var_323_int = 0; var_324_int = 0; var_325_int = 0; var_326_int = 0; var_327_object = Obj(); var_328_object = Obj(); var_329_object = Obj(); var_330_object = Obj(); var_331_object = Obj(); var_332_int = 0; var_333_int = 0; var_334_int = 0; var_335_int = 0; var_336_object = Obj(); var_337_int = 0; var_338_bool = 0; var_339_int = 0; var_340_float = 0; var_341_int = 0; var_342_object = Obj(); var_343_int = 0; var_344_int = 0; var_345_int = 0; var_346_int = 0; var_347_int = 0; var_348_int = 0; var_349_int = 0; var_350_int = 0; var_351_int = 0; var_352_int = 0; var_353_object = Obj(); // 0x139c PushV
	var_354_object = Obj(); // 0x139d PushV
	func_3995(var_354_object); // 0x139e NEW_2
	var_328_object = var_354_object; // 0x139f Mov
	CreateIntVector(var_329_object); // 0x13a1 Func
	CreateIntVector(var_330_object); // 0x13a3 Func
	CreateIntVector(var_331_object); // 0x13a5 Func
	GetSubContainerCount(var_332_int); // 0x13a7 ObjFunc
	var_333_int = 0; // 0x13a9 MovI
	
Label_5034:
	var_357_bool = var_333_int < var_332_int; // 0x13aa LT
	if(var_357_bool == 0) goto Label_5106; // 0x13ab JumpB
	GetItemCount(var_334_int, var_333_int); // 0x13ac ObjFunc
	var_335_int = 0; // 0x13ae MovI
	
Label_5039:
	var_358_bool = var_335_int < var_334_int; // 0x13af LT
	if(var_358_bool == 0) goto Label_5103; // 0x13b0 JumpB
	GetItem(var_336_object, var_335_int, var_333_int); // 0x13b1 ObjFunc
	GetItemID(var_337_int); // 0x13b3 ObjFunc
	var_359_string = "HasDurability"; // 0x13b5 PushS
	HasInvItemProperty(var_338_bool, var_337_int, var_359_string); // 0x13b6 Func
	var_360_bool = var_338_bool; // 0x13b8 Push
	if(var_360_bool == 0) goto Label_5099; // 0x13b9 JumpB
	var_361_string = "durability"; // 0x13ba PushS
	HasProperty(var_338_bool, var_361_string); // 0x13bb ObjFunc
	var_362_bool = var_338_bool; // 0x13bd Push
	if(var_362_bool == 0) goto Label_5099; // 0x13be JumpB
	var_363_string = "durability"; // 0x13bf PushS
	GetProperty(var_339_int, var_363_string); // 0x13c0 ObjFunc
	var_364_bool = 0; // 0x13c2 PushV
	var_364_bool = 0; // 0x13c3 MovB
	var_365_int = 100; // 0x13c4 PushI
	var_366_bool = var_339_int < var_365_int; // 0x13c5 LT
	if(var_366_bool == 0) goto Label_5069; // 0x13c6 JumpB
	var_367_bool = 0; var_368_object = Obj(); // 0x13c7 PushV
	var_368_object = var_336_object; // 0x13c8 Mov
	func_5167(var_368_object); // 0x13c9 NEW_2
	if(var_367_bool == 0) goto Label_5069; // 0x13cb JumpB
	var_364_bool = 1; // 0x13cc MovB
	
Label_5069:
	if(var_364_bool == 0) goto Label_5099; // 0x13cd JumpB
	add(var_336_object); // 0x13ce ObjFunc
	add(var_333_int); // 0x13d0 ObjFunc
	add(var_335_int); // 0x13d2 ObjFunc
	var_374_int = 0; var_375_object = Obj(); var_376_int = 0; // 0x13d4 PushV
	var_375_object = var_336_object; // 0x13d5 Mov
	var_376_int = 0; // 0x13d6 MovI
	func_4286(var_374_int, var_375_object, var_376_int); // 0x13d7 NEW_2
	var_340_float = var_374_int; // 0x13d8 Mov
	var_416_float = 1.0; // 0x13da PushF
	var_417_float = 2.0; // 0x13db PushF
	var_418_float = var_417_float * var_339_int; // 0x13dc Mult
	var_419_float = 100.0; // 0x13dd PushF
	var_420_float = var_418_float / var_419_float; // 0x13de Div
	var_421_int = var_416_float + var_420_float; // 0x13df Add
	var_422_float = var_340_float * var_421_int; // 0x13e0 Mult
	var_423_int = 100; // 0x13e1 PushI
	var_424_int = var_423_int - var_339_int; // 0x13e2 Sub
	var_425_float = var_422_float * var_424_int; // 0x13e3 Mult
	var_426_int = 300; // 0x13e4 PushI
	var_341_int = var_425_float / var_425_float; // 0x13e5 Div2
	var_427_bool = var_341_int == 0; // 0x13e6 Not
	if(var_427_bool == 0) goto Label_5097; // 0x13e7 JumpB
	var_341_int = 1; // 0x13e8 MovI
	
Label_5097:
	add(var_341_int); // 0x13e9 ObjFunc
	
Label_5099:
	var_336_object = 0; // 0x13eb SetNull
	var_428_int = 1; // 0x13ec PushI
	var_335_int = var_335_int + var_428_int; // 0x13ed Add2
	goto Label_5039; // 0x13ee Jump
	
Label_5103:
	var_429_int = 1; // 0x13ef PushI
	var_333_int = var_333_int + var_429_int; // 0x13f0 Add2
	goto Label_5034; // 0x13f1 Jump
	
Label_5106:
	CreateIntVector(var_342_object); // 0x13f2 Func
	var_430_string = "repair.xml"; // 0x13f4 PushS
	ChooseItem(var_328_object, var_342_object, var_331_object, var_430_string); // 0x13f5 Func
	size(var_343_int); // 0x13f7 ObjFunc
	var_431_bool = var_343_int == 0; // 0x13f9 Not
	if(var_431_bool == 0) goto Label_5116; // 0x13fa JumpB
	return 52; // 0x13fb Return
	
Label_5116:
	var_344_int = 0; // 0x13fc MovI
	var_345_int = 0; // 0x13fd MovI
	
Label_5118:
	var_432_bool = var_345_int < var_343_int; // 0x13fe LT
	if(var_432_bool == 0) goto Label_5128; // 0x13ff JumpB
	get(var_346_int, var_345_int); // 0x1400 ObjFunc
	get(var_347_int, var_346_int); // 0x1402 ObjFunc
	var_344_int = var_344_int + var_347_int; // 0x1404 Add2
	var_433_int = 1; // 0x1405 PushI
	var_345_int = var_345_int + var_433_int; // 0x1406 Add2
	goto Label_5118; // 0x1407 Jump
	
Label_5128:
	var_434_string = "money"; // 0x1408 PushS
	GetProperty(var_434_string, var_348_int); // 0x1409 ObjFunc
	var_348_int = var_348_int - var_344_int; // 0x140b Sub2
	var_435_int = 0; // 0x140c PushI
	var_436_bool = var_348_int < var_435_int; // 0x140d LT
	if(var_436_bool == 0) goto Label_5136; // 0x140e JumpB
	return 52; // 0x140f Return
	
Label_5136:
	var_437_string = "money"; // 0x1410 PushS
	SetProperty(var_437_string, var_348_int); // 0x1411 ObjFunc
	var_349_int = 0; // 0x1413 MovI
	
Label_5140:
	var_438_bool = var_349_int < var_343_int; // 0x1414 LT
	if(var_438_bool == 0) goto Label_5161; // 0x1415 JumpB
	get(var_350_int, var_349_int); // 0x1416 ObjFunc
	get(var_351_int, var_350_int); // 0x1418 ObjFunc
	get(var_352_int, var_350_int); // 0x141a ObjFunc
	GetItem(var_353_object, var_352_int, var_351_int); // 0x141c ObjFunc
	var_439_string = "durability"; // 0x141e PushS
	var_440_int = 100; // 0x141f PushI
	SetProperty(var_439_string, var_440_int); // 0x1420 ObjFunc
	var_441_int = 1; // 0x1422 PushI
	SetItem(var_353_object, var_441_int, var_352_int, var_351_int); // 0x1423 ObjFunc
	var_353_object = 0; // 0x1425 SetNull
	var_442_int = 1; // 0x1426 PushI
	var_349_int = var_349_int + var_442_int; // 0x1427 Add2
	goto Label_5140; // 0x1428 Jump
	
Label_5161:
	return 52; // 0x1429 Return
}


func_2975(var_504_bool, var_505_float)
{
	var_506_float = 0; var_507_bool = 0; var_508_float = 0; var_509_bool = 0; // 0xb9f PushV
	rand(var_508_float); // 0xba0 Func
	var_510_bool = var_508_float < var_505_float; // 0xba2 LT
	if(var_510_bool == 0) goto Label_2995; // 0xba3 JumpB
	
Label_2980:
	IsAnimationPlaying(var_509_bool); // 0xba4 Func
	var_511_bool = var_509_bool == 0; // 0xba6 Not
	if(var_511_bool == 0) goto Label_2985; // 0xba7 JumpB
	goto Label_2994; // 0xba8 Jump
	
Label_2994:
	goto Label_3000; // 0xbb2 Jump
	
Label_3000:
	var_504_bool = 0; // 0xbb8 MovB
	return 4; // 0xbb9 Return
	
Label_2985:
	var_512_bool = 0; // 0xba9 PushV
	func_3073(var_512_bool); // 0xbaa NEW_2
	if(var_512_bool == 0) goto Label_2991; // 0xbac JumpB
	var_504_bool = 1; // 0xbad MovB
	return 4; // 0xbae Return
	
Label_2991:
	sync(); // 0xbaf Func
	goto Label_2980; // 0xbb1 Jump
	
Label_2995:
	WaitForAnimEnd(); // 0xbb3 Func
	func_3177(var_509_bool); // 0xbb6 NEW_2
}


func_3489(var_101_bool, var_102_object)
{
	var_103_bool = 0; var_104_bool = 0; // 0xda1 PushV
	IsPlayerActor(var_102_object, var_104_bool); // 0xda2 Func
	var_101_bool = var_104_bool; // 0xda4 Mov
	return 2; // 0xda5 Return
}


func_4001(var_70_float, var_71_cvector, var_72_cvector)
{
	var_73_float = GetByIndex(var_71_cvector, 0); // 0xfa2 PushE
	var_74_float = GetByIndex(var_72_cvector, 0); // 0xfa3 PushE
	var_75_float = var_73_float * var_74_float; // 0xfa4 Mult
	var_76_float = GetByIndex(var_71_cvector, 2); // 0xfa5 PushE
	var_77_float = GetByIndex(var_72_cvector, 2); // 0xfa6 PushE
	var_78_float = var_76_float * var_77_float; // 0xfa7 Mult
	var_70_float = var_75_float + var_78_float; // 0xfa8 Add2
	return 0; // 0xfa9 Return
}


func_3494(var_52_bool, var_53_object, var_54_string)
{
	var_55_bool = 0; var_56_bool = 0; // 0xda6 PushV
	var_57_string = "HasProperty"; // 0xda7 PushS
	var_58_int = 2; // 0xda8 PushI
	var_59_bool = IsFuncExist(var_53_object, var_57_string, var_58_int); // 0xda9 FuncExist
	var_60_bool = var_59_bool == 0; // 0xdaa Not
	if(var_60_bool == 0) goto Label_3502; // 0xdab JumpB
	var_52_bool = 0; // 0xdac MovB
	return 2; // 0xdad Return
	
Label_3502:
	HasProperty(var_54_string, var_56_bool); // 0xdae ObjFunc
	var_52_bool = var_56_bool; // 0xdb0 Mov
	return 2; // 0xdb1 Return
}


func_4010(var_79_float, var_80_cvector)
{
	var_81_float = GetByIndex(var_80_cvector, 0); // 0xfab PushE
	var_82_float = GetByIndex(var_80_cvector, 0); // 0xfac PushE
	var_83_float = var_81_float * var_82_float; // 0xfad Mult
	var_84_float = GetByIndex(var_80_cvector, 2); // 0xfae PushE
	var_85_float = GetByIndex(var_80_cvector, 2); // 0xfaf PushE
	var_86_float = var_84_float * var_85_float; // 0xfb0 Mult
	var_87_int = var_83_float + var_86_float; // 0xfb1 Add
	var_79_float = sqrt(var_87_int); // 0xfb2 Sqrt2
	return 0; // 0xfb3 Return
}


func_3506(var_417_float, var_418_object, var_419_float, var_420_int)
{
	var_424_int = 0; var_425_string = ""; var_426_int = 0; var_427_float = 0; var_428_float = 0; var_429_float = 0; var_430_int = 0; var_431_string = ""; var_432_int = 0; var_433_float = 0; var_434_float = 0; var_435_float = 0; // 0xdb2 PushV
	var_436_bool = 0; var_437_object = Obj(); var_438_string = ""; // 0xdb3 PushV
	var_437_object = var_418_object; // 0xdb4 Mov
	var_438_string = "health"; // 0xdb5 MovS
	func_3494(var_436_bool, var_437_object, var_438_string); // 0xdb6 NEW_2
	var_439_bool = var_436_bool == 0; // 0xdb8 Not
	if(var_439_bool == 0) goto Label_3516; // 0xdb9 JumpB
	var_417_float = 0.0; // 0xdba MovF
	return 12; // 0xdbb Return
	
Label_3516:
	var_440_bool = 0; var_441_object = Obj(); var_442_string = ""; // 0xdbc PushV
	var_441_object = var_418_object; // 0xdbd Mov
	var_442_string = "armor"; // 0xdbe MovS
	func_3494(var_440_bool, var_441_object, var_442_string); // 0xdbf NEW_2
	var_443_bool = var_440_bool == 0; // 0xdc1 Not
	if(var_443_bool == 0) goto Label_3525; // 0xdc2 JumpB
	var_430_int = 0; // 0xdc3 MovI
	goto Label_3528; // 0xdc4 Jump
	
Label_3528:
	var_444_string = "armor_"; // 0xdc8 PushS
	var_445_string = ""; var_446_int = 0; // 0xdc9 PushV
	var_446_int = var_420_int; // 0xdca Mov
	func_3460(var_445_string, var_446_int); // 0xdcb NEW_2
	var_431_string = var_444_string + var_445_string; // 0xdcd Add2
	var_451_bool = 0; var_452_object = Obj(); var_453_string = ""; // 0xdce PushV
	var_452_object = var_418_object; // 0xdcf Mov
	var_453_string = var_431_string; // 0xdd0 Mov
	func_3494(var_451_bool, var_452_object, var_453_string); // 0xdd1 NEW_2
	var_454_bool = var_451_bool == 0; // 0xdd3 Not
	if(var_454_bool == 0) goto Label_3543; // 0xdd4 JumpB
	var_432_int = 0; // 0xdd5 MovI
	goto Label_3545; // 0xdd6 Jump
	
Label_3545:
	var_455_float = 0; var_456_float = 0; var_457_float = 0; // 0xdd9 PushV
	var_458_int = var_430_int + var_432_int; // 0xdda Add
	var_459_float = 100.0; // 0xddb PushF
	var_456_float = var_458_int / var_458_int; // 0xddc Div2
	var_457_float = 1; // 0xddd MovI
	func_3977(var_455_float, var_456_float, var_457_float); // 0xdde NEW_2
	var_433_float = var_455_float; // 0xddf Mov
	var_461_string = "health"; // 0xde1 PushS
	GetProperty(var_461_string, var_434_float); // 0xde2 ObjFunc
	var_462_int = 1; // 0xde4 PushI
	var_463_int = var_462_int - var_433_float; // 0xde5 Sub
	var_435_float = var_419_float * var_463_int; // 0xde6 Mult2
	var_464_string = "health"; // 0xde7 PushS
	var_465_float = 0; var_466_float = 0; var_467_float = 0; var_468_float = 0; // 0xde8 PushV
	var_466_float = var_434_float - var_435_float; // 0xde9 Sub2
	var_467_float = 0; // 0xdea MovI
	var_468_float = 1; // 0xdeb MovI
	func_3984(var_465_float, var_466_float, var_467_float, var_468_float); // 0xdec NEW_2
	SetProperty(var_464_string, var_465_float); // 0xdee ObjFunc
	var_471_bool = 0; var_472_object = Obj(); // 0xdf0 PushV
	var_472_object = var_418_object; // 0xdf1 Mov
	func_3489(var_471_bool, var_472_object); // 0xdf2 NEW_2
	if(var_471_bool == 0) goto Label_3577; // 0xdf4 JumpB
	var_473_float = 0; // 0xdf5 PushV
	var_473_float = -var_435_float; // 0xdf6 Neg2
	func_4042(var_473_float); // 0xdf7 NEW_2
	
Label_3577:
	var_417_float = var_435_float; // 0xdf9 Mov
	return 12; // 0xdfa Return
	
Label_3543:
	GetProperty(var_431_string, var_432_int); // 0xdd7 ObjFunc
	
Label_3525:
	var_477_string = "armor"; // 0xdc5 PushS
	GetProperty(var_477_string, var_430_int); // 0xdc6 ObjFunc
}


func_4020(var_67_float, var_68_cvector, var_69_cvector)
{
	var_70_float = 0; var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); // 0xfb5 PushV
	var_71_cvector = var_68_cvector; // 0xfb6 Mov
	var_72_cvector = var_69_cvector; // 0xfb7 Mov
	func_4001(var_70_float, var_71_cvector, var_72_cvector); // 0xfb8 NEW_2
	var_79_float = 0; var_80_cvector = CVector(0,0,0); // 0xfba PushV
	var_80_cvector = var_68_cvector; // 0xfbb Mov
	func_4010(var_79_float, var_80_cvector); // 0xfbc NEW_2
	var_88_float = 0; var_89_cvector = CVector(0,0,0); // 0xfbe PushV
	var_89_cvector = var_69_cvector; // 0xfbf Mov
	func_4010(var_88_float, var_89_cvector); // 0xfc0 NEW_2
	var_90_float = var_79_float * var_88_float; // 0xfc2 Mult
	var_67_float = var_70_float / var_70_float; // 0xfc3 Div2
	return 0; // 0xfc4 Return
}


func_3002(var_0_object, var_305_bool, var_306_float)
{
	var_307_bool = 0; var_308_cvector = CVector(0,0,0); var_309_cvector = CVector(0,0,0); var_310_cvector = CVector(0,0,0); var_311_float = 0; var_312_bool = 0; var_313_cvector = CVector(0,0,0); var_314_cvector = CVector(0,0,0); var_315_cvector = CVector(0,0,0); var_316_float = 0; // 0xbba PushV
	
Label_3003:
	IsAnimationPlaying(var_312_bool); // 0xbbb Func
	var_317_bool = var_312_bool == 0; // 0xbbd Not
	if(var_317_bool == 0) goto Label_3008; // 0xbbe JumpB
	goto Label_3040; // 0xbbf Jump
	
Label_3040:
	func_3177(var_316_float); // 0xbe1 NEW_2
	var_305_bool = 0; // 0xbe3 MovB
	return 10; // 0xbe4 Return
	
Label_3008:
	var_318_bool = 0; // 0xbc0 PushV
	func_3073(var_318_bool); // 0xbc1 NEW_2
	if(var_318_bool == 0) goto Label_3014; // 0xbc3 JumpB
	var_305_bool = 1; // 0xbc4 MovB
	return 10; // 0xbc5 Return
	
Label_3014:
	var_361_bool = 0; var_362_object = Obj(); // 0xbc6 PushV
	var_362_object = var_0_object; // 0xbc7 MovT
	func_3620(var_361_bool, var_362_object); // 0xbc8 NEW_2
	var_363_bool = var_361_bool == 0; // 0xbca Not
	if(var_363_bool == 0) goto Label_3022; // 0xbcb JumpB
	var_305_bool = 0; // 0xbcc MovB
	return 10; // 0xbcd Return
	
Label_3022:
	GetPFPosition(var_313_cvector); // 0xbce TObjFunc
	GetPFPosition(var_314_cvector); // 0xbd0 Func
	var_315_cvector = var_313_cvector - var_314_cvector; // 0xbd2 Sub2
	var_316_float = var_315_cvector | var_315_cvector; // 0xbd3 Or2
	var_364_float = var_306_float * var_306_float; // 0xbd4 Mult
	var_365_bool = var_316_float < var_364_float; // 0xbd5 LT
	if(var_365_bool == 0) goto Label_3037; // 0xbd6 JumpB
	var_366_bool = 0; var_367_float = 0; // 0xbd7 PushV
	var_367_float = var_306_float; // 0xbd8 Mov
	func_2838(var_316_float, var_366_bool, var_367_float); // 0xbd9 NEW_2
	var_305_bool = 1; // 0xbdb MovB
	return 10; // 0xbdc Return
	
Label_3037:
	sync(); // 0xbdd Func
	goto Label_3003; // 0xbdf Jump
}


func_1989()
{
	var_137_bool = 0; // 0x7c5 PushV
	func_3781(var_137_bool); // 0x7c6 NEW_2
	var_140_bool = var_137_bool == 0; // 0x7c8 Not
	if(var_140_bool == 0) goto Label_1997; // 0x7c9 JumpB
	func_4949(); // 0x7cb NEW_2
	
Label_1997:
	return 0; // 0x7cd Return
}


func_4037(var_122_int, var_123_string)
{
	var_124_int = 0; var_125_int = 0; // 0xfc5 PushV
	GetVariable(var_123_string, var_125_int); // 0xfc6 Func
	var_122_int = var_125_int; // 0xfc8 Mov
	return 2; // 0xfc9 Return
}


func_4042(var_473_float)
{
	var_474_object = Obj(); var_475_object = Obj(); // 0xfca PushV
	CreateFloatVector(var_475_object); // 0xfcb Func
	add(var_473_float); // 0xfcd ObjFunc
	var_476_int = 15; // 0xfcf PushI
	SendWorldWndMessage(var_476_int, var_475_object); // 0xfd0 Func
	return 2; // 0xfd2 Return
}


func_4052(var_32_int)
{
	var_33_float = 0; var_34_float = 0; // 0xfd4 PushV
	GetGameTime(var_34_float); // 0xfd5 Func
	var_35_int = 1; // 0xfd7 PushI
	var_36_int = 0; // 0xfd8 PushV
	var_37_int = 24; // 0xfd9 PushI
	var_36_int = var_34_float / var_34_float; // 0xfda Div2
	var_32_int = var_35_int + var_36_int; // 0xfdb Add2
	return 2; // 0xfdc Return
}


func_2521(var_70_object)
{
	var_77_object = Obj(); var_78_bool = 0; var_79_float = 0; // 0x9da PushV
	var_77_object = var_70_object; // 0x9db Mov
	var_78_bool = 1; // 0x9dc MovB
	var_79_float = 180.0; // 0x9dd MovF
	func_2535(var_73_int, var_74_bool, var_75_float, var_76_int, var_70_object, var_77_object, var_78_bool, var_79_float); // 0x9de NEW_2
	return 0; // 0x9e0 Return
}


func_4061(var_20_object)
{
	var_21_bool = 0; var_22_bool = 0; // 0xfdd PushV
	IsPlayerActor(var_20_object, var_22_bool); // 0xfde Func
	var_23_bool = var_22_bool; // 0xfe0 Push
	if(var_23_bool == 0) goto Label_4069; // 0xfe1 JumpB
	var_24_string = "attack"; // 0xfe2 PushS
	PlayGlobalMusic(var_24_string); // 0xfe3 Func
	
Label_4069:
	return 2; // 0xfe5 Return
}


func_2529(var_414_float)
{
	var_414_float = 0.05; // 0x9e2 MovF
	return 0; // 0x9e3 Return
}


func_2532(var_421_int)
{
	var_421_int = 0; // 0x9e5 MovI
	return 0; // 0x9e6 Return
}


func_3045(var_0_object, var_320_bool)
{
	var_321_cvector = CVector(0,0,0); var_322_cvector = CVector(0,0,0); var_323_cvector = CVector(0,0,0); var_324_float = 0; var_325_float = 0; var_326_cvector = CVector(0,0,0); var_327_cvector = CVector(0,0,0); var_328_cvector = CVector(0,0,0); var_329_float = 0; var_330_float = 0; // 0xbe5 PushV
	var_331_bool = 0; var_332_object = Obj(); // 0xbe6 PushV
	var_332_object = var_0_object; // 0xbe7 MovT
	func_3620(var_331_bool, var_332_object); // 0xbe8 NEW_2
	var_333_bool = var_331_bool == 0; // 0xbea Not
	if(var_333_bool == 0) goto Label_3054; // 0xbeb JumpB
	var_320_bool = 0; // 0xbec MovB
	return 10; // 0xbed Return
	
Label_3054:
	var_334_bool = 0; // 0xbee PushV
	func_3134(var_330_float, var_334_bool); // 0xbef NEW_2
	if(var_334_bool == 0) goto Label_3071; // 0xbf1 JumpB
	GetPFPosition(var_326_cvector); // 0xbf2 TObjFunc
	GetPFPosition(var_327_cvector); // 0xbf4 Func
	var_328_cvector = var_326_cvector - var_327_cvector; // 0xbf6 Sub2
	var_329_float = var_328_cvector | var_328_cvector; // 0xbf7 Or2
	GetAttackDistance(var_330_float); // 0xbf8 TObjFunc
	var_335_int = 50; // 0xbfa PushI
	var_330_float = var_330_float + var_335_int; // 0xbfb Add2
	var_336_float = var_330_float * var_330_float; // 0xbfc Mult
	var_320_bool = var_329_float <= var_336_float; // 0xbfd LE2
	return 10; // 0xbfe Return
	
Label_3071:
	var_320_bool = 0; // 0xbff MovB
	return 10; // 0xc00 Return
}


func_4070()
{
	var_378_object = Obj(); var_379_object = Obj(); // 0xfe6 PushV
	GetScene(var_379_object); // 0xfe7 Func
	var_380_string = "battle"; // 0xfe9 PushS
	var_381_object = Obj(); // 0xfea PushV
	func_3961(var_381_object); // 0xfeb NEW_2
	BroadcastMessage(var_380_string, var_381_object, var_379_object); // 0xfed Func
	return 2; // 0xfef Return
}


func_2535(var_0_object, var_3_string, var_5_bool, var_77_object, var_78_bool, var_79_float, var_154_bool, var_246_bool)
{
	var_80_float = 0; var_81_cvector = CVector(0,0,0); var_82_cvector = CVector(0,0,0); var_83_bool = 0; var_84_bool = 0; var_85_float = 0; var_86_cvector = CVector(0,0,0); var_87_float = 0; var_88_cvector = CVector(0,0,0); var_89_bool = 0; var_90_float = 0; var_91_float = 0; var_92_cvector = CVector(0,0,0); var_93_cvector = CVector(0,0,0); var_94_bool = 0; var_95_bool = 0; var_96_float = 0; var_97_cvector = CVector(0,0,0); var_98_float = 0; var_99_cvector = CVector(0,0,0); var_100_bool = 0; var_101_float = 0; // 0x9e7 PushV
	func_2764(var_99_cvector, var_100_bool, var_101_float); // 0x9e9 NEW_2
	var_5_bool = 0; // 0x9eb TMovI
	var_124_string = "@GetAttackDistance"; // 0x9ec PushS
	var_125_int = 1; // 0x9ed PushI
	var_126_bool = IsFuncExist(var_77_object, var_124_string, var_125_int); // 0x9ee FuncExist
	if(var_126_bool == 0) goto Label_2549; // 0x9ef JumpB
	GetAttackDistance(var_91_float); // 0x9f0 ObjFunc
	var_127_int = 50; // 0x9f2 PushI
	var_91_float = var_91_float + var_127_int; // 0x9f3 Add2
	goto Label_2550; // 0x9f4 Jump
	
Label_2550:
	var_128_int = 150; // 0x9f6 PushI
	var_129_bool = var_91_float >= var_128_int; // 0x9f7 GE
	if(var_129_bool == 0) goto Label_2554; // 0x9f8 JumpB
	var_91_float = 150; // 0x9f9 MovI
	
Label_2554:
	var_3_string = 0; // 0x9fa TMovB
	var_0_object = var_77_object; // 0x9fb TMov
	IsPlayerActor(var_0_object, var_94_bool); // 0x9fc Func
	var_130_bool = var_94_bool; // 0x9fe Push
	if(var_130_bool == 0) goto Label_2568; // 0x9ff JumpB
	var_131_string = "attack"; // 0xa00 PushS
	PlayGlobalMusic(var_131_string); // 0xa01 Func
	var_132_object = Obj(); // 0xa03 PushV
	func_3961(var_132_object); // 0xa04 NEW_2
	SendPlayerEnemy(var_77_object, var_132_object); // 0xa06 Func
	
Label_2568:
	var_135_bool = var_78_bool; // 0xa08 Push
	if(var_135_bool == 0) goto Label_2572; // 0xa09 JumpB
	var_95_bool = 0; // 0xa0a MovB
	goto Label_2573; // 0xa0b Jump
	
Label_2573:
	var_136_float = 400.0; // 0xa0d PushF
	var_96_float = var_136_float + var_91_float; // 0xa0e Add2
	
Label_2575:
	var_137_bool = 0; // 0xa0f PushV
	var_137_bool = 0; // 0xa10 MovB
	var_138_bool = 0; var_139_object = Obj(); // 0xa11 PushV
	var_139_object = var_0_object; // 0xa12 MovT
	func_3620(var_138_bool, var_139_object); // 0xa13 NEW_2
	if(var_138_bool == 0) goto Label_2585; // 0xa15 JumpB
	var_140_bool = var_3_string == 0; // 0xa16 Not
	if(var_140_bool == 0) goto Label_2585; // 0xa17 JumpB
	var_137_bool = 1; // 0xa18 MovB
	
Label_2585:
	if(var_137_bool == 0) goto Label_2747; // 0xa19 JumpB
	func_3177(var_101_float); // 0xa1b NEW_2
	GetPFPosition(var_92_cvector); // 0xa1d TObjFunc
	GetPFPosition(var_93_cvector); // 0xa1f Func
	var_97_cvector = var_92_cvector - var_93_cvector; // 0xa21 Sub2
	var_98_float = var_97_cvector | var_97_cvector; // 0xa22 Or2
	var_146_float = var_96_float * var_96_float; // 0xa23 Mult
	var_147_bool = var_98_float >= var_146_float; // 0xa24 GE
	if(var_147_bool == 0) goto Label_2613; // 0xa25 JumpB
	var_148_bool = 0; var_149_object = Obj(); var_150_float = 0; var_151_float = 0; var_152_bool = 0; var_153_bool = 0; // 0xa26 PushV
	var_149_object = var_0_object; // 0xa27 MovT
	var_150_float = var_91_float; // 0xa28 Mov
	var_151_float = 3000.0; // 0xa29 MovF
	var_152_bool = 1; // 0xa2a MovB
	var_153_bool = 0; // 0xa2b MovB
	TaskCall(6); // 0xa2c TaskCall
	func_3204(var_156_bool, var_148_bool, var_149_object, var_150_float, var_151_float, var_152_bool, var_153_bool); // 0xa2d NEW_2
	TaskReturn(); // 0xa2e TaskReturn
	var_231_bool = var_154_bool == 0; // 0xa30 Not
	if(var_231_bool == 0) goto Label_2611; // 0xa31 JumpB
	goto Label_2747; // 0xa32 Jump
	
Label_2747:
	WaitForAnimEnd(); // 0xabb Func
	var_232_string = var_3_string; // 0xabd PushT
	if(var_232_string == 0) goto Label_2752; // 0xabe JumpB
	return 22; // 0xabf Return
	
Label_2752:
	var_233_string = "all"; // 0xac0 PushS
	var_234_string = "attack_off"; // 0xac1 PushS
	PlayAnimation(var_233_string, var_234_string); // 0xac2 Func
	WaitForAnimEnd(); // 0xac4 Func
	var_235_bool = var_94_bool; // 0xac6 Push
	if(var_235_bool == 0) goto Label_2763; // 0xac7 JumpB
	var_236_float = 2.0; // 0xac8 PushF
	Sleep(var_236_float); // 0xac9 Func
	
Label_2763:
	return 22; // 0xacb Return
	
Label_2611:
	var_95_bool = 0; // 0xa33 MovB
	goto Label_2746; // 0xa34 Jump
	
Label_2746:
	goto Label_2575; // 0xaba Jump
	
Label_2613:
	var_237_float = var_79_float * var_79_float; // 0xa35 Mult
	var_238_bool = var_98_float >= var_237_float; // 0xa36 GE
	if(var_238_bool == 0) goto Label_2738; // 0xa37 JumpB
	GetPFPosition(var_99_cvector); // 0xa38 TObjFunc
	CanReachByPF(var_100_bool, var_99_cvector); // 0xa3a Func
	var_239_bool = var_100_bool == 0; // 0xa3c Not
	if(var_239_bool == 0) goto Label_2637; // 0xa3d JumpB
	var_240_bool = 0; var_241_object = Obj(); var_242_float = 0; var_243_float = 0; var_244_bool = 0; var_245_bool = 0; // 0xa3e PushV
	var_241_object = var_0_object; // 0xa3f MovT
	var_242_float = var_91_float; // 0xa40 Mov
	var_243_float = 3000.0; // 0xa41 MovF
	var_244_bool = 1; // 0xa42 MovB
	var_245_bool = 0; // 0xa43 MovB
	TaskCall(6); // 0xa44 TaskCall
	func_3204(var_248_bool, var_240_bool, var_241_object, var_242_float, var_243_float, var_244_bool, var_245_bool); // 0xa45 NEW_2
	TaskReturn(); // 0xa46 TaskReturn
	var_249_bool = var_246_bool == 0; // 0xa48 Not
	if(var_249_bool == 0) goto Label_2635; // 0xa49 JumpB
	goto Label_2747; // 0xa4a Jump
	
Label_2635:
	var_95_bool = 0; // 0xa4b MovB
	goto Label_2575; // 0xa4c Jump
	
Label_2637:
	var_250_bool = var_95_bool == 0; // 0xa4d Not
	if(var_250_bool == 0) goto Label_2662; // 0xa4e JumpB
	var_251_object = Obj(); // 0xa4f PushV
	var_251_object = var_0_object; // 0xa50 MovT
	func_3770(); // 0xa51 NEW_2
	var_260_string = "all"; // 0xa53 PushS
	var_261_string = "attack_on"; // 0xa54 PushS
	PlayAnimation(var_260_string, var_261_string); // 0xa55 Func
	WaitForAnimEnd(); // 0xa57 Func
	func_3177(var_101_float); // 0xa5a NEW_2
	StopAsync(); // 0xa5c Func
	var_95_bool = 1; // 0xa5e MovB
	var_262_bool = 0; var_263_object = Obj(); // 0xa5f PushV
	var_263_object = var_0_object; // 0xa60 MovT
	func_3620(var_262_bool, var_263_object); // 0xa61 NEW_2
	var_264_bool = var_262_bool == 0; // 0xa63 Not
	if(var_264_bool == 0) goto Label_2662; // 0xa64 JumpB
	goto Label_2747; // 0xa65 Jump
	
Label_2662:
	rand(var_101_float); // 0xa66 Func
	var_265_bool = 0; // 0xa68 PushV
	var_265_bool = 1; // 0xa69 MovB
	var_266_float = 0.25; // 0xa6a PushF
	var_267_bool = var_101_float < var_266_float; // 0xa6b LT
	if(var_267_bool == 0) goto Label_2674; // 0xa6c JumpB
	var_268_bool = 0; // 0xa6d PushV
	func_3134(var_265_bool, var_268_bool); // 0xa6e NEW_2
	if(var_268_bool == 0) goto Label_2674; // 0xa70 JumpB
	var_265_bool = 0; // 0xa71 MovB
	
Label_2674:
	if(var_265_bool == 0) goto Label_2691; // 0xa72 JumpB
	Face(var_0_object); // 0xa73 Func
	func_3184(); // 0xa76 NEW_2
	var_303_string = "all"; // 0xa78 PushS
	var_304_string = "attack_stay"; // 0xa79 PushS
	PlayAnimation(var_303_string, var_304_string); // 0xa7a Func
	var_305_bool = 0; var_306_float = 0; // 0xa7c PushV
	var_306_float = var_79_float; // 0xa7d Mov
	func_3002(var_101_float, var_305_bool, var_306_float); // 0xa7e NEW_2
	StopAsync(); // 0xa80 Func
	goto Label_2737; // 0xa82 Jump
	
Label_2737:
	goto Label_2746; // 0xab1 Jump
	
Label_2691:
	Face(var_0_object); // 0xa83 Func
	var_520_string = "all"; // 0xa85 PushS
	var_521_string = "fjump"; // 0xa86 PushS
	PlayAnimation(var_520_string, var_521_string); // 0xa87 Func
	WaitForAnimEnd(); // 0xa89 Func
	func_3177(var_101_float); // 0xa8c NEW_2
	var_522_cvector = CVector(0.0, 0.0, 0.0); // 0xa8e PushVec
	SetSpeed(var_522_cvector); // 0xa8f Func
	Stop(); // 0xa91 Func
	StopAsync(); // 0xa93 Func
	var_523_bool = 0; // 0xa95 PushV
	func_3134(var_101_float, var_523_bool); // 0xa96 NEW_2
	var_524_bool = var_523_bool == 0; // 0xa98 Not
	if(var_524_bool == 0) goto Label_2737; // 0xa99 JumpB
	var_525_bool = 0; var_526_object = Obj(); // 0xa9a PushV
	var_526_object = var_0_object; // 0xa9b MovT
	func_3620(var_525_bool, var_526_object); // 0xa9c NEW_2
	var_527_bool = var_525_bool == 0; // 0xa9e Not
	if(var_527_bool == 0) goto Label_2721; // 0xa9f JumpB
	goto Label_2747; // 0xaa0 Jump
	
Label_2721:
	GetPFPosition(var_92_cvector); // 0xaa1 TObjFunc
	GetPFPosition(var_93_cvector); // 0xaa3 Func
	var_97_cvector = var_92_cvector - var_93_cvector; // 0xaa5 Sub2
	var_98_float = var_97_cvector | var_97_cvector; // 0xaa6 Or2
	var_528_float = var_79_float * var_79_float; // 0xaa7 Mult
	var_529_bool = var_98_float < var_528_float; // 0xaa8 LT
	if(var_529_bool == 0) goto Label_2737; // 0xaa9 JumpB
	var_530_bool = 0; var_531_float = 0; // 0xaaa PushV
	var_531_float = var_79_float; // 0xaab Mov
	func_2838(var_101_float, var_530_bool, var_531_float); // 0xaac NEW_2
	var_532_bool = var_530_bool == 0; // 0xaae Not
	if(var_532_bool == 0) goto Label_2737; // 0xaaf JumpB
	goto Label_2747; // 0xab0 Jump
	
Label_2738:
	var_533_bool = 0; var_534_float = 0; // 0xab2 PushV
	var_534_float = var_79_float; // 0xab3 Mov
	func_2838(var_101_float, var_533_bool, var_534_float); // 0xab4 NEW_2
	var_535_bool = var_533_bool == 0; // 0xab6 Not
	if(var_535_bool == 0) goto Label_2745; // 0xab7 JumpB
	goto Label_2747; // 0xab8 Jump
	
Label_2745:
	var_95_bool = 1; // 0xab9 MovB
	
Label_2572:
	var_95_bool = 1; // 0xa0c MovB
	
Label_2549:
	var_91_float = var_79_float; // 0x9f5 Mov
}


func_4081()
{
	var_25_int = 100; // 0xff2 PushI
	SetReturnValue(var_25_int); // 0xff3 ObjFunc
	return 0; // 0xff5 Return
}


func_4086(var_258_bool)
{
	var_260_int = 0; var_261_string = ""; // 0xff7 PushV
	var_261_string = "branch"; // 0xff8 MovS
	func_4037(var_260_int, var_261_string); // 0xff9 NEW_2
	var_262_int = 0; // 0xffb PushI
	var_263_bool = var_260_int == var_262_int; // 0xffc Eq
	if(var_263_bool == 0) goto Label_4096; // 0xffd JumpB
	var_258_bool = 1; // 0xffe MovB
	return 0; // 0xfff Return
	
Label_4096:
	var_258_bool = 0; // 0x1000 MovB
	return 0; // 0x1001 Return
}


func_3579(var_45_bool)
{
	var_47_bool = 0; var_48_bool = 0; // 0xdfb PushV
	IsDead(var_48_bool); // 0xdfc ObjFunc
	var_45_bool = var_48_bool; // 0xdfe Mov
	return 2; // 0xdff Return
}


