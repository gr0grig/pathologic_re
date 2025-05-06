task_0_event_11(var_0_bool, var_1_int, var_2_object, var_3_object, var_4_object, var_5_string, var_6_bool, var_7_bool, var_8_bool, var_9_bool, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_bool = 0; // 0x1b PushV
	func_5319(var_20_bool); // 0x1c NEW_2
	if(var_20_bool == 0) goto Label_34; // 0x1e JumpB
	lshStopAnimation(); // 0x1f Func
	goto Label_36; // 0x21 Jump
	
Label_36:
	StopTrade(); // 0x24 Func
	var_0_bool = 1; // 0x26 TMovB
	return 0; // 0x27 Return
	
Label_34:
	StopAnimation(); // 0x22 Func
}


task_2_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_int, var_7_int, var_8_bool, var_9_bool, var_10_bool, var_11_object, var_12_object, var_13_int, var_14_int, var_15_bool, var_16_float, var_17_int, var_18_bool, var_19_object, var_20_bool)
{
	var_21_int = 1; // 0x15c PushI
	if(var_21_int == 0) goto Label_1940; // 0x15d JumpB
	func_4442(); // 0x15f NEW_2
	var_23_int = 38471; // 0x161 PushI
	var_24_bool = var_20_bool == var_23_int; // 0x162 Eq
	if(var_24_bool == 0) goto Label_361; // 0x163 JumpB
	var_25_object = Obj(); var_26_object = Obj(); // 0x164 PushV
	var_25_object = var_1_object; // 0x165 MovT
	var_26_object = var_0_bool; // 0x166 MovT
	func_4620(); // 0x167 NEW_2
	
Label_361:
	var_28_int = 38466; // 0x169 PushI
	var_29_bool = var_20_bool == var_28_int; // 0x16a Eq
	if(var_29_bool == 0) goto Label_369; // 0x16b JumpB
	var_30_object = Obj(); var_31_object = Obj(); // 0x16c PushV
	var_30_object = var_1_object; // 0x16d MovT
	var_31_object = var_0_bool; // 0x16e MovT
	func_4620(); // 0x16f NEW_2
	
Label_369:
	var_32_int = 38472; // 0x171 PushI
	var_33_bool = var_20_bool == var_32_int; // 0x172 Eq
	if(var_33_bool == 0) goto Label_377; // 0x173 JumpB
	var_34_object = Obj(); var_35_object = Obj(); // 0x174 PushV
	var_34_object = var_1_object; // 0x175 MovT
	var_35_object = var_0_bool; // 0x176 MovT
	func_4620(); // 0x177 NEW_2
	
Label_377:
	var_36_int = 38469; // 0x179 PushI
	var_37_bool = var_20_bool == var_36_int; // 0x17a Eq
	if(var_37_bool == 0) goto Label_385; // 0x17b JumpB
	var_38_object = Obj(); var_39_object = Obj(); // 0x17c PushV
	var_38_object = var_1_object; // 0x17d MovT
	var_39_object = var_0_bool; // 0x17e MovT
	func_4620(); // 0x17f NEW_2
	
Label_385:
	var_40_int = 38470; // 0x181 PushI
	var_41_bool = var_20_bool == var_40_int; // 0x182 Eq
	if(var_41_bool == 0) goto Label_393; // 0x183 JumpB
	var_42_object = Obj(); var_43_object = Obj(); // 0x184 PushV
	var_42_object = var_1_object; // 0x185 MovT
	var_43_object = var_0_bool; // 0x186 MovT
	func_4620(); // 0x187 NEW_2
	
Label_393:
	var_44_int = 45464; // 0x189 PushI
	var_45_bool = var_19_object == var_44_int; // 0x18a Eq
	if(var_45_bool == 0) goto Label_569; // 0x18b JumpB
	var_46_bool = 0; var_47_object = Obj(); // 0x18c PushV
	var_47_object = var_1_object; // 0x18d MovT
	func_4649(var_47_object); // 0x18e NEW_2
	if(var_46_bool == 0) goto Label_442; // 0x190 JumpB
	var_54_string = ""; // 0x191 PushV
	var_54_string = "Neutral"; // 0x192 MovS
	func_325(var_20_bool, var_54_string); // 0x193 NEW_2
	var_71_int = 543012; // 0x195 PushI
	SetMessage(var_71_int); // 0x196 TObjFunc
	ClearReplies(); // 0x198 TObjFunc
	var_72_int = 536643; // 0x19a PushI
	var_73_int = -1; // 0x19b PushI
	var_74_int = 38471; // 0x19c PushI
	AddReply(var_72_int, var_73_int, var_74_int); // 0x19d TObjFunc
	var_75_bool = 0; var_76_object = Obj(); // 0x19f PushV
	var_76_object = var_1_object; // 0x1a0 MovT
	func_4671(var_75_bool, var_76_object); // 0x1a1 NEW_2
	if(var_75_bool == 0) goto Label_425; // 0x1a3 JumpB
	var_86_int = 543014; // 0x1a4 PushI
	var_87_int = -1; // 0x1a5 PushI
	var_88_int = 45466; // 0x1a6 PushI
	AddReply(var_86_int, var_87_int, var_88_int); // 0x1a7 TObjFunc
	
Label_425:
	var_89_bool = 0; var_90_object = Obj(); // 0x1a9 PushV
	var_90_object = var_1_object; // 0x1aa MovT
	func_4671(var_89_bool, var_90_object); // 0x1ab NEW_2
	var_91_bool = var_89_bool == 0; // 0x1ad Not
	if(var_91_bool == 0) goto Label_436; // 0x1ae JumpB
	var_92_int = 543027; // 0x1af PushI
	var_93_int = -1; // 0x1b0 PushI
	var_94_int = 45479; // 0x1b1 PushI
	AddReply(var_92_int, var_93_int, var_94_int); // 0x1b2 TObjFunc
	
Label_436:
	var_95_int = 536852; // 0x1b4 PushI
	var_96_int = -1; // 0x1b5 PushI
	var_97_int = 38688; // 0x1b6 PushI
	AddReply(var_95_int, var_96_int, var_97_int); // 0x1b7 TObjFunc
	return 0; // 0x1b9 Return
	
Label_442:
	var_98_string = ""; // 0x1ba PushV
	var_98_string = "Neutral"; // 0x1bb MovS
	func_325(var_20_bool, var_98_string); // 0x1bc NEW_2
	var_99_int = 536636; // 0x1be PushI
	SetMessage(var_99_int); // 0x1bf TObjFunc
	ClearReplies(); // 0x1c1 TObjFunc
	var_100_bool = 0; // 0x1c3 PushV
	var_100_bool = 0; // 0x1c4 MovB
	var_101_bool = 0; var_102_object = Obj(); // 0x1c5 PushV
	var_102_object = var_1_object; // 0x1c6 MovT
	func_4625(var_102_object); // 0x1c7 NEW_2
	if(var_101_bool == 0) goto Label_464; // 0x1c9 JumpB
	var_107_bool = 0; var_108_object = Obj(); // 0x1ca PushV
	var_108_object = var_1_object; // 0x1cb MovT
	func_4661(var_107_bool, var_108_object); // 0x1cc NEW_2
	if(var_107_bool == 0) goto Label_464; // 0x1ce JumpB
	var_100_bool = 1; // 0x1cf MovB
	
Label_464:
	if(var_100_bool == 0) goto Label_470; // 0x1d0 JumpB
	var_113_int = 536638; // 0x1d1 PushI
	var_114_int = -1; // 0x1d2 PushI
	var_115_int = 38466; // 0x1d3 PushI
	AddReply(var_113_int, var_114_int, var_115_int); // 0x1d4 TObjFunc
	
Label_470:
	var_116_bool = 0; // 0x1d6 PushV
	var_116_bool = 0; // 0x1d7 MovB
	var_117_bool = 0; var_118_object = Obj(); // 0x1d8 PushV
	var_118_object = var_1_object; // 0x1d9 MovT
	func_4625(var_118_object); // 0x1da NEW_2
	if(var_117_bool == 0) goto Label_484; // 0x1dc JumpB
	var_119_bool = 0; var_120_object = Obj(); // 0x1dd PushV
	var_120_object = var_1_object; // 0x1de MovT
	func_4661(var_119_bool, var_120_object); // 0x1df NEW_2
	var_121_bool = var_119_bool == 0; // 0x1e1 Not
	if(var_121_bool == 0) goto Label_484; // 0x1e2 JumpB
	var_116_bool = 1; // 0x1e3 MovB
	
Label_484:
	if(var_116_bool == 0) goto Label_490; // 0x1e4 JumpB
	var_122_int = 536644; // 0x1e5 PushI
	var_123_int = -1; // 0x1e6 PushI
	var_124_int = 38472; // 0x1e7 PushI
	AddReply(var_122_int, var_123_int, var_124_int); // 0x1e8 TObjFunc
	
Label_490:
	var_125_bool = 0; // 0x1ea PushV
	var_125_bool = 0; // 0x1eb MovB
	var_126_bool = 0; var_127_object = Obj(); // 0x1ec PushV
	var_127_object = var_1_object; // 0x1ed MovT
	func_4637(var_127_object); // 0x1ee NEW_2
	if(var_126_bool == 0) goto Label_503; // 0x1f0 JumpB
	var_132_bool = 0; var_133_object = Obj(); // 0x1f1 PushV
	var_133_object = var_1_object; // 0x1f2 MovT
	func_4661(var_132_bool, var_133_object); // 0x1f3 NEW_2
	if(var_132_bool == 0) goto Label_503; // 0x1f5 JumpB
	var_125_bool = 1; // 0x1f6 MovB
	
Label_503:
	if(var_125_bool == 0) goto Label_509; // 0x1f7 JumpB
	var_134_int = 536639; // 0x1f8 PushI
	var_135_int = 38468; // 0x1f9 PushI
	var_136_int = 38467; // 0x1fa PushI
	AddReply(var_134_int, var_135_int, var_136_int); // 0x1fb TObjFunc
	
Label_509:
	var_137_bool = 0; // 0x1fd PushV
	var_137_bool = 0; // 0x1fe MovB
	var_138_bool = 0; var_139_object = Obj(); // 0x1ff PushV
	var_139_object = var_1_object; // 0x200 MovT
	func_4637(var_139_object); // 0x201 NEW_2
	if(var_138_bool == 0) goto Label_523; // 0x203 JumpB
	var_140_bool = 0; var_141_object = Obj(); // 0x204 PushV
	var_141_object = var_1_object; // 0x205 MovT
	func_4661(var_140_bool, var_141_object); // 0x206 NEW_2
	var_142_bool = var_140_bool == 0; // 0x208 Not
	if(var_142_bool == 0) goto Label_523; // 0x209 JumpB
	var_137_bool = 1; // 0x20a MovB
	
Label_523:
	if(var_137_bool == 0) goto Label_529; // 0x20b JumpB
	var_143_int = 536642; // 0x20c PushI
	var_144_int = -1; // 0x20d PushI
	var_145_int = 38470; // 0x20e PushI
	AddReply(var_143_int, var_144_int, var_145_int); // 0x20f TObjFunc
	
Label_529:
	var_146_bool = 0; // 0x211 PushV
	var_146_bool = 0; // 0x212 MovB
	var_147_bool = 0; var_148_object = Obj(); // 0x213 PushV
	var_148_object = var_1_object; // 0x214 MovT
	func_4671(var_147_bool, var_148_object); // 0x215 NEW_2
	if(var_147_bool == 0) goto Label_542; // 0x217 JumpB
	var_149_bool = 0; var_150_object = Obj(); // 0x218 PushV
	var_150_object = var_1_object; // 0x219 MovT
	func_4625(var_150_object); // 0x21a NEW_2
	if(var_149_bool == 0) goto Label_542; // 0x21c JumpB
	var_146_bool = 1; // 0x21d MovB
	
Label_542:
	if(var_146_bool == 0) goto Label_548; // 0x21e JumpB
	var_151_int = 536645; // 0x21f PushI
	var_152_int = 38474; // 0x220 PushI
	var_153_int = 38473; // 0x221 PushI
	AddReply(var_151_int, var_152_int, var_153_int); // 0x222 TObjFunc
	
Label_548:
	var_154_bool = 0; var_155_object = Obj(); // 0x224 PushV
	var_155_object = var_1_object; // 0x225 MovT
	func_4625(var_155_object); // 0x226 NEW_2
	if(var_154_bool == 0) goto Label_558; // 0x228 JumpB
	var_156_int = 536850; // 0x229 PushI
	var_157_int = -1; // 0x22a PushI
	var_158_int = 38686; // 0x22b PushI
	AddReply(var_156_int, var_157_int, var_158_int); // 0x22c TObjFunc
	
Label_558:
	var_159_bool = 0; var_160_object = Obj(); // 0x22e PushV
	var_160_object = var_1_object; // 0x22f MovT
	func_4637(var_160_object); // 0x230 NEW_2
	if(var_159_bool == 0) goto Label_568; // 0x232 JumpB
	var_161_int = 536851; // 0x233 PushI
	var_162_int = -1; // 0x234 PushI
	var_163_int = 38687; // 0x235 PushI
	AddReply(var_161_int, var_162_int, var_163_int); // 0x236 TObjFunc
	
Label_568:
	return 0; // 0x238 Return
	
Label_569:
	var_164_int = 38680; // 0x239 PushI
	var_165_bool = var_19_object == var_164_int; // 0x23a Eq
	if(var_165_bool == 0) goto Label_572; // 0x23b JumpB
	
Label_572:
	var_166_int = 38682; // 0x23c PushI
	var_167_bool = var_19_object == var_166_int; // 0x23d Eq
	if(var_167_bool == 0) goto Label_595; // 0x23e JumpB
	var_168_string = ""; // 0x23f PushV
	var_168_string = "Neutral"; // 0x240 MovS
	func_325(var_20_bool, var_168_string); // 0x241 NEW_2
	var_169_int = 536846; // 0x243 PushI
	SetMessage(var_169_int); // 0x244 TObjFunc
	ClearReplies(); // 0x246 TObjFunc
	var_170_int = 536847; // 0x248 PushI
	var_171_int = -1; // 0x249 PushI
	var_172_int = 38683; // 0x24a PushI
	AddReply(var_170_int, var_171_int, var_172_int); // 0x24b TObjFunc
	var_173_int = 536848; // 0x24d PushI
	var_174_int = -1; // 0x24e PushI
	var_175_int = 38684; // 0x24f PushI
	AddReply(var_173_int, var_174_int, var_175_int); // 0x250 TObjFunc
	return 0; // 0x252 Return
	
Label_595:
	var_176_int = 38670; // 0x253 PushI
	var_177_bool = var_19_object == var_176_int; // 0x254 Eq
	if(var_177_bool == 0) goto Label_598; // 0x255 JumpB
	
Label_598:
	var_178_int = 38672; // 0x256 PushI
	var_179_bool = var_19_object == var_178_int; // 0x257 Eq
	if(var_179_bool == 0) goto Label_621; // 0x258 JumpB
	var_180_string = ""; // 0x259 PushV
	var_180_string = "Neutral"; // 0x25a MovS
	func_325(var_20_bool, var_180_string); // 0x25b NEW_2
	var_181_int = 536836; // 0x25d PushI
	SetMessage(var_181_int); // 0x25e TObjFunc
	ClearReplies(); // 0x260 TObjFunc
	var_182_int = 536837; // 0x262 PushI
	var_183_int = 38674; // 0x263 PushI
	var_184_int = 38673; // 0x264 PushI
	AddReply(var_182_int, var_183_int, var_184_int); // 0x265 TObjFunc
	var_185_int = 536841; // 0x267 PushI
	var_186_int = -1; // 0x268 PushI
	var_187_int = 38677; // 0x269 PushI
	AddReply(var_185_int, var_186_int, var_187_int); // 0x26a TObjFunc
	return 0; // 0x26c Return
	
Label_621:
	var_188_int = 38674; // 0x26d PushI
	var_189_bool = var_19_object == var_188_int; // 0x26e Eq
	if(var_189_bool == 0) goto Label_644; // 0x26f JumpB
	var_190_string = ""; // 0x270 PushV
	var_190_string = "Neutral"; // 0x271 MovS
	func_325(var_20_bool, var_190_string); // 0x272 NEW_2
	var_191_int = 536838; // 0x274 PushI
	SetMessage(var_191_int); // 0x275 TObjFunc
	ClearReplies(); // 0x277 TObjFunc
	var_192_int = 536839; // 0x279 PushI
	var_193_int = -1; // 0x27a PushI
	var_194_int = 38675; // 0x27b PushI
	AddReply(var_192_int, var_193_int, var_194_int); // 0x27c TObjFunc
	var_195_int = 536840; // 0x27e PushI
	var_196_int = -1; // 0x27f PushI
	var_197_int = 38676; // 0x280 PushI
	AddReply(var_195_int, var_196_int, var_197_int); // 0x281 TObjFunc
	return 0; // 0x283 Return
	
Label_644:
	var_198_int = 38651; // 0x284 PushI
	var_199_bool = var_19_object == var_198_int; // 0x285 Eq
	if(var_199_bool == 0) goto Label_647; // 0x286 JumpB
	
Label_647:
	var_200_int = 38660; // 0x287 PushI
	var_201_bool = var_19_object == var_200_int; // 0x288 Eq
	if(var_201_bool == 0) goto Label_675; // 0x289 JumpB
	var_202_string = ""; // 0x28a PushV
	var_202_string = "Neutral"; // 0x28b MovS
	func_325(var_20_bool, var_202_string); // 0x28c NEW_2
	var_203_int = 536824; // 0x28e PushI
	SetMessage(var_203_int); // 0x28f TObjFunc
	ClearReplies(); // 0x291 TObjFunc
	var_204_int = 536825; // 0x293 PushI
	var_205_int = 38662; // 0x294 PushI
	var_206_int = 38661; // 0x295 PushI
	AddReply(var_204_int, var_205_int, var_206_int); // 0x296 TObjFunc
	var_207_int = 536830; // 0x298 PushI
	var_208_int = -1; // 0x299 PushI
	var_209_int = 38666; // 0x29a PushI
	AddReply(var_207_int, var_208_int, var_209_int); // 0x29b TObjFunc
	var_210_int = 536831; // 0x29d PushI
	var_211_int = -1; // 0x29e PushI
	var_212_int = 38667; // 0x29f PushI
	AddReply(var_210_int, var_211_int, var_212_int); // 0x2a0 TObjFunc
	return 0; // 0x2a2 Return
	
Label_675:
	var_213_int = 38662; // 0x2a3 PushI
	var_214_bool = var_19_object == var_213_int; // 0x2a4 Eq
	if(var_214_bool == 0) goto Label_693; // 0x2a5 JumpB
	var_215_string = ""; // 0x2a6 PushV
	var_215_string = "Neutral"; // 0x2a7 MovS
	func_325(var_20_bool, var_215_string); // 0x2a8 NEW_2
	var_216_int = 536826; // 0x2aa PushI
	SetMessage(var_216_int); // 0x2ab TObjFunc
	ClearReplies(); // 0x2ad TObjFunc
	var_217_int = 536827; // 0x2af PushI
	var_218_int = 38664; // 0x2b0 PushI
	var_219_int = 38663; // 0x2b1 PushI
	AddReply(var_217_int, var_218_int, var_219_int); // 0x2b2 TObjFunc
	return 0; // 0x2b4 Return
	
Label_693:
	var_220_int = 38664; // 0x2b5 PushI
	var_221_bool = var_19_object == var_220_int; // 0x2b6 Eq
	if(var_221_bool == 0) goto Label_711; // 0x2b7 JumpB
	var_222_string = ""; // 0x2b8 PushV
	var_222_string = "Neutral"; // 0x2b9 MovS
	func_325(var_20_bool, var_222_string); // 0x2ba NEW_2
	var_223_int = 536828; // 0x2bc PushI
	SetMessage(var_223_int); // 0x2bd TObjFunc
	ClearReplies(); // 0x2bf TObjFunc
	var_224_int = 536829; // 0x2c1 PushI
	var_225_int = -1; // 0x2c2 PushI
	var_226_int = 38665; // 0x2c3 PushI
	AddReply(var_224_int, var_225_int, var_226_int); // 0x2c4 TObjFunc
	return 0; // 0x2c6 Return
	
Label_711:
	var_227_int = 38653; // 0x2c7 PushI
	var_228_bool = var_19_object == var_227_int; // 0x2c8 Eq
	if(var_228_bool == 0) goto Label_734; // 0x2c9 JumpB
	var_229_string = ""; // 0x2ca PushV
	var_229_string = "Neutral"; // 0x2cb MovS
	func_325(var_20_bool, var_229_string); // 0x2cc NEW_2
	var_230_int = 536817; // 0x2ce PushI
	SetMessage(var_230_int); // 0x2cf TObjFunc
	ClearReplies(); // 0x2d1 TObjFunc
	var_231_int = 536818; // 0x2d3 PushI
	var_232_int = 38655; // 0x2d4 PushI
	var_233_int = 38654; // 0x2d5 PushI
	AddReply(var_231_int, var_232_int, var_233_int); // 0x2d6 TObjFunc
	var_234_int = 536822; // 0x2d8 PushI
	var_235_int = -1; // 0x2d9 PushI
	var_236_int = 38658; // 0x2da PushI
	AddReply(var_234_int, var_235_int, var_236_int); // 0x2db TObjFunc
	return 0; // 0x2dd Return
	
Label_734:
	var_237_int = 38655; // 0x2de PushI
	var_238_bool = var_19_object == var_237_int; // 0x2df Eq
	if(var_238_bool == 0) goto Label_757; // 0x2e0 JumpB
	var_239_string = ""; // 0x2e1 PushV
	var_239_string = "Neutral"; // 0x2e2 MovS
	func_325(var_20_bool, var_239_string); // 0x2e3 NEW_2
	var_240_int = 536819; // 0x2e5 PushI
	SetMessage(var_240_int); // 0x2e6 TObjFunc
	ClearReplies(); // 0x2e8 TObjFunc
	var_241_int = 536820; // 0x2ea PushI
	var_242_int = -1; // 0x2eb PushI
	var_243_int = 38656; // 0x2ec PushI
	AddReply(var_241_int, var_242_int, var_243_int); // 0x2ed TObjFunc
	var_244_int = 536821; // 0x2ef PushI
	var_245_int = -1; // 0x2f0 PushI
	var_246_int = 38657; // 0x2f1 PushI
	AddReply(var_244_int, var_245_int, var_246_int); // 0x2f2 TObjFunc
	return 0; // 0x2f4 Return
	
Label_757:
	var_247_int = 38627; // 0x2f5 PushI
	var_248_bool = var_19_object == var_247_int; // 0x2f6 Eq
	if(var_248_bool == 0) goto Label_760; // 0x2f7 JumpB
	
Label_760:
	var_249_int = 38642; // 0x2f8 PushI
	var_250_bool = var_19_object == var_249_int; // 0x2f9 Eq
	if(var_250_bool == 0) goto Label_783; // 0x2fa JumpB
	var_251_string = ""; // 0x2fb PushV
	var_251_string = "Neutral"; // 0x2fc MovS
	func_325(var_20_bool, var_251_string); // 0x2fd NEW_2
	var_252_int = 536807; // 0x2ff PushI
	SetMessage(var_252_int); // 0x300 TObjFunc
	ClearReplies(); // 0x302 TObjFunc
	var_253_int = 536808; // 0x304 PushI
	var_254_int = 38644; // 0x305 PushI
	var_255_int = 38643; // 0x306 PushI
	AddReply(var_253_int, var_254_int, var_255_int); // 0x307 TObjFunc
	var_256_int = 536812; // 0x309 PushI
	var_257_int = 38644; // 0x30a PushI
	var_258_int = 38647; // 0x30b PushI
	AddReply(var_256_int, var_257_int, var_258_int); // 0x30c TObjFunc
	return 0; // 0x30e Return
	
Label_783:
	var_259_int = 38644; // 0x30f PushI
	var_260_bool = var_19_object == var_259_int; // 0x310 Eq
	if(var_260_bool == 0) goto Label_806; // 0x311 JumpB
	var_261_string = ""; // 0x312 PushV
	var_261_string = "Neutral"; // 0x313 MovS
	func_325(var_20_bool, var_261_string); // 0x314 NEW_2
	var_262_int = 536809; // 0x316 PushI
	SetMessage(var_262_int); // 0x317 TObjFunc
	ClearReplies(); // 0x319 TObjFunc
	var_263_int = 536810; // 0x31b PushI
	var_264_int = -1; // 0x31c PushI
	var_265_int = 38645; // 0x31d PushI
	AddReply(var_263_int, var_264_int, var_265_int); // 0x31e TObjFunc
	var_266_int = 536811; // 0x320 PushI
	var_267_int = -1; // 0x321 PushI
	var_268_int = 38646; // 0x322 PushI
	AddReply(var_266_int, var_267_int, var_268_int); // 0x323 TObjFunc
	return 0; // 0x325 Return
	
Label_806:
	var_269_int = 38629; // 0x326 PushI
	var_270_bool = var_19_object == var_269_int; // 0x327 Eq
	if(var_270_bool == 0) goto Label_829; // 0x328 JumpB
	var_271_string = ""; // 0x329 PushV
	var_271_string = "Neutral"; // 0x32a MovS
	func_325(var_20_bool, var_271_string); // 0x32b NEW_2
	var_272_int = 536795; // 0x32d PushI
	SetMessage(var_272_int); // 0x32e TObjFunc
	ClearReplies(); // 0x330 TObjFunc
	var_273_int = 536796; // 0x332 PushI
	var_274_int = 38631; // 0x333 PushI
	var_275_int = 38630; // 0x334 PushI
	AddReply(var_273_int, var_274_int, var_275_int); // 0x335 TObjFunc
	var_276_int = 536805; // 0x337 PushI
	var_277_int = -1; // 0x338 PushI
	var_278_int = 38640; // 0x339 PushI
	AddReply(var_276_int, var_277_int, var_278_int); // 0x33a TObjFunc
	return 0; // 0x33c Return
	
Label_829:
	var_279_int = 38631; // 0x33d PushI
	var_280_bool = var_19_object == var_279_int; // 0x33e Eq
	if(var_280_bool == 0) goto Label_852; // 0x33f JumpB
	var_281_string = ""; // 0x340 PushV
	var_281_string = "Neutral"; // 0x341 MovS
	func_325(var_20_bool, var_281_string); // 0x342 NEW_2
	var_282_int = 536797; // 0x344 PushI
	SetMessage(var_282_int); // 0x345 TObjFunc
	ClearReplies(); // 0x347 TObjFunc
	var_283_int = 536798; // 0x349 PushI
	var_284_int = 38633; // 0x34a PushI
	var_285_int = 38632; // 0x34b PushI
	AddReply(var_283_int, var_284_int, var_285_int); // 0x34c TObjFunc
	var_286_int = 536804; // 0x34e PushI
	var_287_int = -1; // 0x34f PushI
	var_288_int = 38639; // 0x350 PushI
	AddReply(var_286_int, var_287_int, var_288_int); // 0x351 TObjFunc
	return 0; // 0x353 Return
	
Label_852:
	var_289_int = 38633; // 0x354 PushI
	var_290_bool = var_19_object == var_289_int; // 0x355 Eq
	if(var_290_bool == 0) goto Label_875; // 0x356 JumpB
	var_291_string = ""; // 0x357 PushV
	var_291_string = "Neutral"; // 0x358 MovS
	func_325(var_20_bool, var_291_string); // 0x359 NEW_2
	var_292_int = 536799; // 0x35b PushI
	SetMessage(var_292_int); // 0x35c TObjFunc
	ClearReplies(); // 0x35e TObjFunc
	var_293_int = 536800; // 0x360 PushI
	var_294_int = 38635; // 0x361 PushI
	var_295_int = 38634; // 0x362 PushI
	AddReply(var_293_int, var_294_int, var_295_int); // 0x363 TObjFunc
	var_296_int = 536803; // 0x365 PushI
	var_297_int = 38635; // 0x366 PushI
	var_298_int = 38637; // 0x367 PushI
	AddReply(var_296_int, var_297_int, var_298_int); // 0x368 TObjFunc
	return 0; // 0x36a Return
	
Label_875:
	var_299_int = 38635; // 0x36b PushI
	var_300_bool = var_19_object == var_299_int; // 0x36c Eq
	if(var_300_bool == 0) goto Label_893; // 0x36d JumpB
	var_301_string = ""; // 0x36e PushV
	var_301_string = "Neutral"; // 0x36f MovS
	func_325(var_20_bool, var_301_string); // 0x370 NEW_2
	var_302_int = 536801; // 0x372 PushI
	SetMessage(var_302_int); // 0x373 TObjFunc
	ClearReplies(); // 0x375 TObjFunc
	var_303_int = 536802; // 0x377 PushI
	var_304_int = -1; // 0x378 PushI
	var_305_int = 38636; // 0x379 PushI
	AddReply(var_303_int, var_304_int, var_305_int); // 0x37a TObjFunc
	return 0; // 0x37c Return
	
Label_893:
	var_306_int = 38617; // 0x37d PushI
	var_307_bool = var_19_object == var_306_int; // 0x37e Eq
	if(var_307_bool == 0) goto Label_896; // 0x37f JumpB
	
Label_896:
	var_308_int = 38619; // 0x380 PushI
	var_309_bool = var_19_object == var_308_int; // 0x381 Eq
	if(var_309_bool == 0) goto Label_919; // 0x382 JumpB
	var_310_string = ""; // 0x383 PushV
	var_310_string = "Neutral"; // 0x384 MovS
	func_325(var_20_bool, var_310_string); // 0x385 NEW_2
	var_311_int = 536785; // 0x387 PushI
	SetMessage(var_311_int); // 0x388 TObjFunc
	ClearReplies(); // 0x38a TObjFunc
	var_312_int = 536786; // 0x38c PushI
	var_313_int = 38621; // 0x38d PushI
	var_314_int = 38620; // 0x38e PushI
	AddReply(var_312_int, var_313_int, var_314_int); // 0x38f TObjFunc
	var_315_int = 536790; // 0x391 PushI
	var_316_int = -1; // 0x392 PushI
	var_317_int = 38624; // 0x393 PushI
	AddReply(var_315_int, var_316_int, var_317_int); // 0x394 TObjFunc
	return 0; // 0x396 Return
	
Label_919:
	var_318_int = 38621; // 0x397 PushI
	var_319_bool = var_19_object == var_318_int; // 0x398 Eq
	if(var_319_bool == 0) goto Label_947; // 0x399 JumpB
	var_320_string = ""; // 0x39a PushV
	var_320_string = "Neutral"; // 0x39b MovS
	func_325(var_20_bool, var_320_string); // 0x39c NEW_2
	var_321_int = 536787; // 0x39e PushI
	SetMessage(var_321_int); // 0x39f TObjFunc
	ClearReplies(); // 0x3a1 TObjFunc
	var_322_bool = 0; var_323_object = Obj(); // 0x3a3 PushV
	var_323_object = var_1_object; // 0x3a4 MovT
	func_4625(var_323_object); // 0x3a5 NEW_2
	if(var_322_bool == 0) goto Label_941; // 0x3a7 JumpB
	var_324_int = 536788; // 0x3a8 PushI
	var_325_int = -1; // 0x3a9 PushI
	var_326_int = 38622; // 0x3aa PushI
	AddReply(var_324_int, var_325_int, var_326_int); // 0x3ab TObjFunc
	
Label_941:
	var_327_int = 536789; // 0x3ad PushI
	var_328_int = -1; // 0x3ae PushI
	var_329_int = 38623; // 0x3af PushI
	AddReply(var_327_int, var_328_int, var_329_int); // 0x3b0 TObjFunc
	return 0; // 0x3b2 Return
	
Label_947:
	var_330_int = 38602; // 0x3b3 PushI
	var_331_bool = var_19_object == var_330_int; // 0x3b4 Eq
	if(var_331_bool == 0) goto Label_950; // 0x3b5 JumpB
	
Label_950:
	var_332_int = 38604; // 0x3b6 PushI
	var_333_bool = var_19_object == var_332_int; // 0x3b7 Eq
	if(var_333_bool == 0) goto Label_973; // 0x3b8 JumpB
	var_334_string = ""; // 0x3b9 PushV
	var_334_string = "Neutral"; // 0x3ba MovS
	func_325(var_20_bool, var_334_string); // 0x3bb NEW_2
	var_335_int = 536772; // 0x3bd PushI
	SetMessage(var_335_int); // 0x3be TObjFunc
	ClearReplies(); // 0x3c0 TObjFunc
	var_336_int = 536773; // 0x3c2 PushI
	var_337_int = 38606; // 0x3c3 PushI
	var_338_int = 38605; // 0x3c4 PushI
	AddReply(var_336_int, var_337_int, var_338_int); // 0x3c5 TObjFunc
	var_339_int = 536780; // 0x3c7 PushI
	var_340_int = 38606; // 0x3c8 PushI
	var_341_int = 38613; // 0x3c9 PushI
	AddReply(var_339_int, var_340_int, var_341_int); // 0x3ca TObjFunc
	return 0; // 0x3cc Return
	
Label_973:
	var_342_int = 38606; // 0x3cd PushI
	var_343_bool = var_19_object == var_342_int; // 0x3ce Eq
	if(var_343_bool == 0) goto Label_996; // 0x3cf JumpB
	var_344_string = ""; // 0x3d0 PushV
	var_344_string = "Neutral"; // 0x3d1 MovS
	func_325(var_20_bool, var_344_string); // 0x3d2 NEW_2
	var_345_int = 536774; // 0x3d4 PushI
	SetMessage(var_345_int); // 0x3d5 TObjFunc
	ClearReplies(); // 0x3d7 TObjFunc
	var_346_int = 536775; // 0x3d9 PushI
	var_347_int = 38608; // 0x3da PushI
	var_348_int = 38607; // 0x3db PushI
	AddReply(var_346_int, var_347_int, var_348_int); // 0x3dc TObjFunc
	var_349_int = 536779; // 0x3de PushI
	var_350_int = 38608; // 0x3df PushI
	var_351_int = 38611; // 0x3e0 PushI
	AddReply(var_349_int, var_350_int, var_351_int); // 0x3e1 TObjFunc
	return 0; // 0x3e3 Return
	
Label_996:
	var_352_int = 38608; // 0x3e4 PushI
	var_353_bool = var_19_object == var_352_int; // 0x3e5 Eq
	if(var_353_bool == 0) goto Label_1019; // 0x3e6 JumpB
	var_354_string = ""; // 0x3e7 PushV
	var_354_string = "Neutral"; // 0x3e8 MovS
	func_325(var_20_bool, var_354_string); // 0x3e9 NEW_2
	var_355_int = 536776; // 0x3eb PushI
	SetMessage(var_355_int); // 0x3ec TObjFunc
	ClearReplies(); // 0x3ee TObjFunc
	var_356_int = 536777; // 0x3f0 PushI
	var_357_int = -1; // 0x3f1 PushI
	var_358_int = 38609; // 0x3f2 PushI
	AddReply(var_356_int, var_357_int, var_358_int); // 0x3f3 TObjFunc
	var_359_int = 536778; // 0x3f5 PushI
	var_360_int = -1; // 0x3f6 PushI
	var_361_int = 38610; // 0x3f7 PushI
	AddReply(var_359_int, var_360_int, var_361_int); // 0x3f8 TObjFunc
	return 0; // 0x3fa Return
	
Label_1019:
	var_362_int = 38579; // 0x3fb PushI
	var_363_bool = var_19_object == var_362_int; // 0x3fc Eq
	if(var_363_bool == 0) goto Label_1022; // 0x3fd JumpB
	
Label_1022:
	var_364_int = 38593; // 0x3fe PushI
	var_365_bool = var_19_object == var_364_int; // 0x3ff Eq
	if(var_365_bool == 0) goto Label_1045; // 0x400 JumpB
	var_366_string = ""; // 0x401 PushV
	var_366_string = "Neutral"; // 0x402 MovS
	func_325(var_20_bool, var_366_string); // 0x403 NEW_2
	var_367_int = 536762; // 0x405 PushI
	SetMessage(var_367_int); // 0x406 TObjFunc
	ClearReplies(); // 0x408 TObjFunc
	var_368_int = 536763; // 0x40a PushI
	var_369_int = 38595; // 0x40b PushI
	var_370_int = 38594; // 0x40c PushI
	AddReply(var_368_int, var_369_int, var_370_int); // 0x40d TObjFunc
	var_371_int = 536767; // 0x40f PushI
	var_372_int = 38595; // 0x410 PushI
	var_373_int = 38598; // 0x411 PushI
	AddReply(var_371_int, var_372_int, var_373_int); // 0x412 TObjFunc
	return 0; // 0x414 Return
	
Label_1045:
	var_374_int = 38595; // 0x415 PushI
	var_375_bool = var_19_object == var_374_int; // 0x416 Eq
	if(var_375_bool == 0) goto Label_1068; // 0x417 JumpB
	var_376_string = ""; // 0x418 PushV
	var_376_string = "Neutral"; // 0x419 MovS
	func_325(var_20_bool, var_376_string); // 0x41a NEW_2
	var_377_int = 536764; // 0x41c PushI
	SetMessage(var_377_int); // 0x41d TObjFunc
	ClearReplies(); // 0x41f TObjFunc
	var_378_int = 536765; // 0x421 PushI
	var_379_int = -1; // 0x422 PushI
	var_380_int = 38596; // 0x423 PushI
	AddReply(var_378_int, var_379_int, var_380_int); // 0x424 TObjFunc
	var_381_int = 536766; // 0x426 PushI
	var_382_int = -1; // 0x427 PushI
	var_383_int = 38597; // 0x428 PushI
	AddReply(var_381_int, var_382_int, var_383_int); // 0x429 TObjFunc
	return 0; // 0x42b Return
	
Label_1068:
	var_384_int = 38581; // 0x42c PushI
	var_385_bool = var_19_object == var_384_int; // 0x42d Eq
	if(var_385_bool == 0) goto Label_1091; // 0x42e JumpB
	var_386_string = ""; // 0x42f PushV
	var_386_string = "Neutral"; // 0x430 MovS
	func_325(var_20_bool, var_386_string); // 0x431 NEW_2
	var_387_int = 536750; // 0x433 PushI
	SetMessage(var_387_int); // 0x434 TObjFunc
	ClearReplies(); // 0x436 TObjFunc
	var_388_int = 536751; // 0x438 PushI
	var_389_int = 38583; // 0x439 PushI
	var_390_int = 38582; // 0x43a PushI
	AddReply(var_388_int, var_389_int, var_390_int); // 0x43b TObjFunc
	var_391_int = 536760; // 0x43d PushI
	var_392_int = -1; // 0x43e PushI
	var_393_int = 38591; // 0x43f PushI
	AddReply(var_391_int, var_392_int, var_393_int); // 0x440 TObjFunc
	return 0; // 0x442 Return
	
Label_1091:
	var_394_int = 38583; // 0x443 PushI
	var_395_bool = var_19_object == var_394_int; // 0x444 Eq
	if(var_395_bool == 0) goto Label_1109; // 0x445 JumpB
	var_396_string = ""; // 0x446 PushV
	var_396_string = "Neutral"; // 0x447 MovS
	func_325(var_20_bool, var_396_string); // 0x448 NEW_2
	var_397_int = 536752; // 0x44a PushI
	SetMessage(var_397_int); // 0x44b TObjFunc
	ClearReplies(); // 0x44d TObjFunc
	var_398_int = 536753; // 0x44f PushI
	var_399_int = 38585; // 0x450 PushI
	var_400_int = 38584; // 0x451 PushI
	AddReply(var_398_int, var_399_int, var_400_int); // 0x452 TObjFunc
	return 0; // 0x454 Return
	
Label_1109:
	var_401_int = 38585; // 0x455 PushI
	var_402_bool = var_19_object == var_401_int; // 0x456 Eq
	if(var_402_bool == 0) goto Label_1132; // 0x457 JumpB
	var_403_string = ""; // 0x458 PushV
	var_403_string = "Neutral"; // 0x459 MovS
	func_325(var_20_bool, var_403_string); // 0x45a NEW_2
	var_404_int = 536754; // 0x45c PushI
	SetMessage(var_404_int); // 0x45d TObjFunc
	ClearReplies(); // 0x45f TObjFunc
	var_405_int = 536755; // 0x461 PushI
	var_406_int = 38587; // 0x462 PushI
	var_407_int = 38586; // 0x463 PushI
	AddReply(var_405_int, var_406_int, var_407_int); // 0x464 TObjFunc
	var_408_int = 536759; // 0x466 PushI
	var_409_int = -1; // 0x467 PushI
	var_410_int = 38590; // 0x468 PushI
	AddReply(var_408_int, var_409_int, var_410_int); // 0x469 TObjFunc
	return 0; // 0x46b Return
	
Label_1132:
	var_411_int = 38587; // 0x46c PushI
	var_412_bool = var_19_object == var_411_int; // 0x46d Eq
	if(var_412_bool == 0) goto Label_1155; // 0x46e JumpB
	var_413_string = ""; // 0x46f PushV
	var_413_string = "Neutral"; // 0x470 MovS
	func_325(var_20_bool, var_413_string); // 0x471 NEW_2
	var_414_int = 536756; // 0x473 PushI
	SetMessage(var_414_int); // 0x474 TObjFunc
	ClearReplies(); // 0x476 TObjFunc
	var_415_int = 536757; // 0x478 PushI
	var_416_int = -1; // 0x479 PushI
	var_417_int = 38588; // 0x47a PushI
	AddReply(var_415_int, var_416_int, var_417_int); // 0x47b TObjFunc
	var_418_int = 536758; // 0x47d PushI
	var_419_int = -1; // 0x47e PushI
	var_420_int = 38589; // 0x47f PushI
	AddReply(var_418_int, var_419_int, var_420_int); // 0x480 TObjFunc
	return 0; // 0x482 Return
	
Label_1155:
	var_421_int = 38542; // 0x483 PushI
	var_422_bool = var_19_object == var_421_int; // 0x484 Eq
	if(var_422_bool == 0) goto Label_1158; // 0x485 JumpB
	
Label_1158:
	var_423_int = 38562; // 0x486 PushI
	var_424_bool = var_19_object == var_423_int; // 0x487 Eq
	if(var_424_bool == 0) goto Label_1181; // 0x488 JumpB
	var_425_string = ""; // 0x489 PushV
	var_425_string = "Neutral"; // 0x48a MovS
	func_325(var_20_bool, var_425_string); // 0x48b NEW_2
	var_426_int = 536731; // 0x48d PushI
	SetMessage(var_426_int); // 0x48e TObjFunc
	ClearReplies(); // 0x490 TObjFunc
	var_427_int = 536732; // 0x492 PushI
	var_428_int = 38564; // 0x493 PushI
	var_429_int = 38563; // 0x494 PushI
	AddReply(var_427_int, var_428_int, var_429_int); // 0x495 TObjFunc
	var_430_int = 536745; // 0x497 PushI
	var_431_int = -1; // 0x498 PushI
	var_432_int = 38576; // 0x499 PushI
	AddReply(var_430_int, var_431_int, var_432_int); // 0x49a TObjFunc
	return 0; // 0x49c Return
	
Label_1181:
	var_433_int = 38564; // 0x49d PushI
	var_434_bool = var_19_object == var_433_int; // 0x49e Eq
	if(var_434_bool == 0) goto Label_1204; // 0x49f JumpB
	var_435_string = ""; // 0x4a0 PushV
	var_435_string = "Neutral"; // 0x4a1 MovS
	func_325(var_20_bool, var_435_string); // 0x4a2 NEW_2
	var_436_int = 536733; // 0x4a4 PushI
	SetMessage(var_436_int); // 0x4a5 TObjFunc
	ClearReplies(); // 0x4a7 TObjFunc
	var_437_int = 536734; // 0x4a9 PushI
	var_438_int = 38566; // 0x4aa PushI
	var_439_int = 38565; // 0x4ab PushI
	AddReply(var_437_int, var_438_int, var_439_int); // 0x4ac TObjFunc
	var_440_int = 536744; // 0x4ae PushI
	var_441_int = -1; // 0x4af PushI
	var_442_int = 38575; // 0x4b0 PushI
	AddReply(var_440_int, var_441_int, var_442_int); // 0x4b1 TObjFunc
	return 0; // 0x4b3 Return
	
Label_1204:
	var_443_int = 38566; // 0x4b4 PushI
	var_444_bool = var_19_object == var_443_int; // 0x4b5 Eq
	if(var_444_bool == 0) goto Label_1227; // 0x4b6 JumpB
	var_445_string = ""; // 0x4b7 PushV
	var_445_string = "Neutral"; // 0x4b8 MovS
	func_325(var_20_bool, var_445_string); // 0x4b9 NEW_2
	var_446_int = 536735; // 0x4bb PushI
	SetMessage(var_446_int); // 0x4bc TObjFunc
	ClearReplies(); // 0x4be TObjFunc
	var_447_int = 536736; // 0x4c0 PushI
	var_448_int = -1; // 0x4c1 PushI
	var_449_int = 38567; // 0x4c2 PushI
	AddReply(var_447_int, var_448_int, var_449_int); // 0x4c3 TObjFunc
	var_450_int = 536737; // 0x4c5 PushI
	var_451_int = 38569; // 0x4c6 PushI
	var_452_int = 38568; // 0x4c7 PushI
	AddReply(var_450_int, var_451_int, var_452_int); // 0x4c8 TObjFunc
	return 0; // 0x4ca Return
	
Label_1227:
	var_453_int = 38569; // 0x4cb PushI
	var_454_bool = var_19_object == var_453_int; // 0x4cc Eq
	if(var_454_bool == 0) goto Label_1250; // 0x4cd JumpB
	var_455_string = ""; // 0x4ce PushV
	var_455_string = "Neutral"; // 0x4cf MovS
	func_325(var_20_bool, var_455_string); // 0x4d0 NEW_2
	var_456_int = 536738; // 0x4d2 PushI
	SetMessage(var_456_int); // 0x4d3 TObjFunc
	ClearReplies(); // 0x4d5 TObjFunc
	var_457_int = 536739; // 0x4d7 PushI
	var_458_int = 38571; // 0x4d8 PushI
	var_459_int = 38570; // 0x4d9 PushI
	AddReply(var_457_int, var_458_int, var_459_int); // 0x4da TObjFunc
	var_460_int = 536743; // 0x4dc PushI
	var_461_int = -1; // 0x4dd PushI
	var_462_int = 38574; // 0x4de PushI
	AddReply(var_460_int, var_461_int, var_462_int); // 0x4df TObjFunc
	return 0; // 0x4e1 Return
	
Label_1250:
	var_463_int = 38571; // 0x4e2 PushI
	var_464_bool = var_19_object == var_463_int; // 0x4e3 Eq
	if(var_464_bool == 0) goto Label_1273; // 0x4e4 JumpB
	var_465_string = ""; // 0x4e5 PushV
	var_465_string = "Neutral"; // 0x4e6 MovS
	func_325(var_20_bool, var_465_string); // 0x4e7 NEW_2
	var_466_int = 536740; // 0x4e9 PushI
	SetMessage(var_466_int); // 0x4ea TObjFunc
	ClearReplies(); // 0x4ec TObjFunc
	var_467_int = 536741; // 0x4ee PushI
	var_468_int = -1; // 0x4ef PushI
	var_469_int = 38572; // 0x4f0 PushI
	AddReply(var_467_int, var_468_int, var_469_int); // 0x4f1 TObjFunc
	var_470_int = 536742; // 0x4f3 PushI
	var_471_int = -1; // 0x4f4 PushI
	var_472_int = 38573; // 0x4f5 PushI
	AddReply(var_470_int, var_471_int, var_472_int); // 0x4f6 TObjFunc
	return 0; // 0x4f8 Return
	
Label_1273:
	var_473_int = 38544; // 0x4f9 PushI
	var_474_bool = var_19_object == var_473_int; // 0x4fa Eq
	if(var_474_bool == 0) goto Label_1296; // 0x4fb JumpB
	var_475_string = ""; // 0x4fc PushV
	var_475_string = "Neutral"; // 0x4fd MovS
	func_325(var_20_bool, var_475_string); // 0x4fe NEW_2
	var_476_int = 536713; // 0x500 PushI
	SetMessage(var_476_int); // 0x501 TObjFunc
	ClearReplies(); // 0x503 TObjFunc
	var_477_int = 536714; // 0x505 PushI
	var_478_int = 38546; // 0x506 PushI
	var_479_int = 38545; // 0x507 PushI
	AddReply(var_477_int, var_478_int, var_479_int); // 0x508 TObjFunc
	var_480_int = 536729; // 0x50a PushI
	var_481_int = -1; // 0x50b PushI
	var_482_int = 38560; // 0x50c PushI
	AddReply(var_480_int, var_481_int, var_482_int); // 0x50d TObjFunc
	return 0; // 0x50f Return
	
Label_1296:
	var_483_int = 38546; // 0x510 PushI
	var_484_bool = var_19_object == var_483_int; // 0x511 Eq
	if(var_484_bool == 0) goto Label_1319; // 0x512 JumpB
	var_485_string = ""; // 0x513 PushV
	var_485_string = "Neutral"; // 0x514 MovS
	func_325(var_20_bool, var_485_string); // 0x515 NEW_2
	var_486_int = 536715; // 0x517 PushI
	SetMessage(var_486_int); // 0x518 TObjFunc
	ClearReplies(); // 0x51a TObjFunc
	var_487_int = 536716; // 0x51c PushI
	var_488_int = 38548; // 0x51d PushI
	var_489_int = 38547; // 0x51e PushI
	AddReply(var_487_int, var_488_int, var_489_int); // 0x51f TObjFunc
	var_490_int = 536726; // 0x521 PushI
	var_491_int = 38558; // 0x522 PushI
	var_492_int = 38557; // 0x523 PushI
	AddReply(var_490_int, var_491_int, var_492_int); // 0x524 TObjFunc
	return 0; // 0x526 Return
	
Label_1319:
	var_493_int = 38558; // 0x527 PushI
	var_494_bool = var_19_object == var_493_int; // 0x528 Eq
	if(var_494_bool == 0) goto Label_1337; // 0x529 JumpB
	var_495_string = ""; // 0x52a PushV
	var_495_string = "Neutral"; // 0x52b MovS
	func_325(var_20_bool, var_495_string); // 0x52c NEW_2
	var_496_int = 536727; // 0x52e PushI
	SetMessage(var_496_int); // 0x52f TObjFunc
	ClearReplies(); // 0x531 TObjFunc
	var_497_int = 536728; // 0x533 PushI
	var_498_int = -1; // 0x534 PushI
	var_499_int = 38559; // 0x535 PushI
	AddReply(var_497_int, var_498_int, var_499_int); // 0x536 TObjFunc
	return 0; // 0x538 Return
	
Label_1337:
	var_500_int = 38548; // 0x539 PushI
	var_501_bool = var_19_object == var_500_int; // 0x53a Eq
	if(var_501_bool == 0) goto Label_1355; // 0x53b JumpB
	var_502_string = ""; // 0x53c PushV
	var_502_string = "Neutral"; // 0x53d MovS
	func_325(var_20_bool, var_502_string); // 0x53e NEW_2
	var_503_int = 536717; // 0x540 PushI
	SetMessage(var_503_int); // 0x541 TObjFunc
	ClearReplies(); // 0x543 TObjFunc
	var_504_int = 536718; // 0x545 PushI
	var_505_int = 38550; // 0x546 PushI
	var_506_int = 38549; // 0x547 PushI
	AddReply(var_504_int, var_505_int, var_506_int); // 0x548 TObjFunc
	return 0; // 0x54a Return
	
Label_1355:
	var_507_int = 38550; // 0x54b PushI
	var_508_bool = var_19_object == var_507_int; // 0x54c Eq
	if(var_508_bool == 0) goto Label_1378; // 0x54d JumpB
	var_509_string = ""; // 0x54e PushV
	var_509_string = "Neutral"; // 0x54f MovS
	func_325(var_20_bool, var_509_string); // 0x550 NEW_2
	var_510_int = 536719; // 0x552 PushI
	SetMessage(var_510_int); // 0x553 TObjFunc
	ClearReplies(); // 0x555 TObjFunc
	var_511_int = 536720; // 0x557 PushI
	var_512_int = 38552; // 0x558 PushI
	var_513_int = 38551; // 0x559 PushI
	AddReply(var_511_int, var_512_int, var_513_int); // 0x55a TObjFunc
	var_514_int = 536723; // 0x55c PushI
	var_515_int = 38555; // 0x55d PushI
	var_516_int = 38554; // 0x55e PushI
	AddReply(var_514_int, var_515_int, var_516_int); // 0x55f TObjFunc
	return 0; // 0x561 Return
	
Label_1378:
	var_517_int = 38555; // 0x562 PushI
	var_518_bool = var_19_object == var_517_int; // 0x563 Eq
	if(var_518_bool == 0) goto Label_1396; // 0x564 JumpB
	var_519_string = ""; // 0x565 PushV
	var_519_string = "Neutral"; // 0x566 MovS
	func_325(var_20_bool, var_519_string); // 0x567 NEW_2
	var_520_int = 536724; // 0x569 PushI
	SetMessage(var_520_int); // 0x56a TObjFunc
	ClearReplies(); // 0x56c TObjFunc
	var_521_int = 536725; // 0x56e PushI
	var_522_int = -1; // 0x56f PushI
	var_523_int = 38556; // 0x570 PushI
	AddReply(var_521_int, var_522_int, var_523_int); // 0x571 TObjFunc
	return 0; // 0x573 Return
	
Label_1396:
	var_524_int = 38552; // 0x574 PushI
	var_525_bool = var_19_object == var_524_int; // 0x575 Eq
	if(var_525_bool == 0) goto Label_1414; // 0x576 JumpB
	var_526_string = ""; // 0x577 PushV
	var_526_string = "Neutral"; // 0x578 MovS
	func_325(var_20_bool, var_526_string); // 0x579 NEW_2
	var_527_int = 536721; // 0x57b PushI
	SetMessage(var_527_int); // 0x57c TObjFunc
	ClearReplies(); // 0x57e TObjFunc
	var_528_int = 536722; // 0x580 PushI
	var_529_int = -1; // 0x581 PushI
	var_530_int = 38553; // 0x582 PushI
	AddReply(var_528_int, var_529_int, var_530_int); // 0x583 TObjFunc
	return 0; // 0x585 Return
	
Label_1414:
	var_531_int = 38517; // 0x586 PushI
	var_532_bool = var_19_object == var_531_int; // 0x587 Eq
	if(var_532_bool == 0) goto Label_1417; // 0x588 JumpB
	
Label_1417:
	var_533_int = 38531; // 0x589 PushI
	var_534_bool = var_19_object == var_533_int; // 0x58a Eq
	if(var_534_bool == 0) goto Label_1445; // 0x58b JumpB
	var_535_string = ""; // 0x58c PushV
	var_535_string = "Neutral"; // 0x58d MovS
	func_325(var_20_bool, var_535_string); // 0x58e NEW_2
	var_536_int = 536700; // 0x590 PushI
	SetMessage(var_536_int); // 0x591 TObjFunc
	ClearReplies(); // 0x593 TObjFunc
	var_537_int = 536701; // 0x595 PushI
	var_538_int = 38533; // 0x596 PushI
	var_539_int = 38532; // 0x597 PushI
	AddReply(var_537_int, var_538_int, var_539_int); // 0x598 TObjFunc
	var_540_bool = 0; var_541_object = Obj(); // 0x59a PushV
	var_541_object = var_1_object; // 0x59b MovT
	func_4625(var_541_object); // 0x59c NEW_2
	if(var_540_bool == 0) goto Label_1444; // 0x59e JumpB
	var_542_int = 536705; // 0x59f PushI
	var_543_int = 38537; // 0x5a0 PushI
	var_544_int = 38536; // 0x5a1 PushI
	AddReply(var_542_int, var_543_int, var_544_int); // 0x5a2 TObjFunc
	
Label_1444:
	return 0; // 0x5a4 Return
	
Label_1445:
	var_545_int = 38537; // 0x5a5 PushI
	var_546_bool = var_19_object == var_545_int; // 0x5a6 Eq
	if(var_546_bool == 0) goto Label_1468; // 0x5a7 JumpB
	var_547_string = ""; // 0x5a8 PushV
	var_547_string = "Neutral"; // 0x5a9 MovS
	func_325(var_20_bool, var_547_string); // 0x5aa NEW_2
	var_548_int = 536706; // 0x5ac PushI
	SetMessage(var_548_int); // 0x5ad TObjFunc
	ClearReplies(); // 0x5af TObjFunc
	var_549_int = 536707; // 0x5b1 PushI
	var_550_int = -1; // 0x5b2 PushI
	var_551_int = 38538; // 0x5b3 PushI
	AddReply(var_549_int, var_550_int, var_551_int); // 0x5b4 TObjFunc
	var_552_int = 536708; // 0x5b6 PushI
	var_553_int = -1; // 0x5b7 PushI
	var_554_int = 38539; // 0x5b8 PushI
	AddReply(var_552_int, var_553_int, var_554_int); // 0x5b9 TObjFunc
	return 0; // 0x5bb Return
	
Label_1468:
	var_555_int = 38533; // 0x5bc PushI
	var_556_bool = var_19_object == var_555_int; // 0x5bd Eq
	if(var_556_bool == 0) goto Label_1496; // 0x5be JumpB
	var_557_string = ""; // 0x5bf PushV
	var_557_string = "Neutral"; // 0x5c0 MovS
	func_325(var_20_bool, var_557_string); // 0x5c1 NEW_2
	var_558_int = 536702; // 0x5c3 PushI
	SetMessage(var_558_int); // 0x5c4 TObjFunc
	ClearReplies(); // 0x5c6 TObjFunc
	var_559_bool = 0; var_560_object = Obj(); // 0x5c8 PushV
	var_560_object = var_1_object; // 0x5c9 MovT
	func_4625(var_560_object); // 0x5ca NEW_2
	if(var_559_bool == 0) goto Label_1490; // 0x5cc JumpB
	var_561_int = 536703; // 0x5cd PushI
	var_562_int = -1; // 0x5ce PushI
	var_563_int = 38534; // 0x5cf PushI
	AddReply(var_561_int, var_562_int, var_563_int); // 0x5d0 TObjFunc
	
Label_1490:
	var_564_int = 536704; // 0x5d2 PushI
	var_565_int = -1; // 0x5d3 PushI
	var_566_int = 38535; // 0x5d4 PushI
	AddReply(var_564_int, var_565_int, var_566_int); // 0x5d5 TObjFunc
	return 0; // 0x5d7 Return
	
Label_1496:
	var_567_int = 38519; // 0x5d8 PushI
	var_568_bool = var_19_object == var_567_int; // 0x5d9 Eq
	if(var_568_bool == 0) goto Label_1519; // 0x5da JumpB
	var_569_string = ""; // 0x5db PushV
	var_569_string = "Neutral"; // 0x5dc MovS
	func_325(var_20_bool, var_569_string); // 0x5dd NEW_2
	var_570_int = 536688; // 0x5df PushI
	SetMessage(var_570_int); // 0x5e0 TObjFunc
	ClearReplies(); // 0x5e2 TObjFunc
	var_571_int = 536689; // 0x5e4 PushI
	var_572_int = 38521; // 0x5e5 PushI
	var_573_int = 38520; // 0x5e6 PushI
	AddReply(var_571_int, var_572_int, var_573_int); // 0x5e7 TObjFunc
	var_574_int = 536695; // 0x5e9 PushI
	var_575_int = 38527; // 0x5ea PushI
	var_576_int = 38526; // 0x5eb PushI
	AddReply(var_574_int, var_575_int, var_576_int); // 0x5ec TObjFunc
	return 0; // 0x5ee Return
	
Label_1519:
	var_577_int = 38527; // 0x5ef PushI
	var_578_bool = var_19_object == var_577_int; // 0x5f0 Eq
	if(var_578_bool == 0) goto Label_1542; // 0x5f1 JumpB
	var_579_string = ""; // 0x5f2 PushV
	var_579_string = "Neutral"; // 0x5f3 MovS
	func_325(var_20_bool, var_579_string); // 0x5f4 NEW_2
	var_580_int = 536696; // 0x5f6 PushI
	SetMessage(var_580_int); // 0x5f7 TObjFunc
	ClearReplies(); // 0x5f9 TObjFunc
	var_581_int = 536697; // 0x5fb PushI
	var_582_int = -1; // 0x5fc PushI
	var_583_int = 38528; // 0x5fd PushI
	AddReply(var_581_int, var_582_int, var_583_int); // 0x5fe TObjFunc
	var_584_int = 536698; // 0x600 PushI
	var_585_int = -1; // 0x601 PushI
	var_586_int = 38529; // 0x602 PushI
	AddReply(var_584_int, var_585_int, var_586_int); // 0x603 TObjFunc
	return 0; // 0x605 Return
	
Label_1542:
	var_587_int = 38521; // 0x606 PushI
	var_588_bool = var_19_object == var_587_int; // 0x607 Eq
	if(var_588_bool == 0) goto Label_1565; // 0x608 JumpB
	var_589_string = ""; // 0x609 PushV
	var_589_string = "Neutral"; // 0x60a MovS
	func_325(var_20_bool, var_589_string); // 0x60b NEW_2
	var_590_int = 536690; // 0x60d PushI
	SetMessage(var_590_int); // 0x60e TObjFunc
	ClearReplies(); // 0x610 TObjFunc
	var_591_int = 536691; // 0x612 PushI
	var_592_int = -1; // 0x613 PushI
	var_593_int = 38522; // 0x614 PushI
	AddReply(var_591_int, var_592_int, var_593_int); // 0x615 TObjFunc
	var_594_int = 536692; // 0x617 PushI
	var_595_int = 38524; // 0x618 PushI
	var_596_int = 38523; // 0x619 PushI
	AddReply(var_594_int, var_595_int, var_596_int); // 0x61a TObjFunc
	return 0; // 0x61c Return
	
Label_1565:
	var_597_int = 38524; // 0x61d PushI
	var_598_bool = var_19_object == var_597_int; // 0x61e Eq
	if(var_598_bool == 0) goto Label_1583; // 0x61f JumpB
	var_599_string = ""; // 0x620 PushV
	var_599_string = "Neutral"; // 0x621 MovS
	func_325(var_20_bool, var_599_string); // 0x622 NEW_2
	var_600_int = 536693; // 0x624 PushI
	SetMessage(var_600_int); // 0x625 TObjFunc
	ClearReplies(); // 0x627 TObjFunc
	var_601_int = 536694; // 0x629 PushI
	var_602_int = -1; // 0x62a PushI
	var_603_int = 38525; // 0x62b PushI
	AddReply(var_601_int, var_602_int, var_603_int); // 0x62c TObjFunc
	return 0; // 0x62e Return
	
Label_1583:
	var_604_int = 38493; // 0x62f PushI
	var_605_bool = var_19_object == var_604_int; // 0x630 Eq
	if(var_605_bool == 0) goto Label_1586; // 0x631 JumpB
	
Label_1586:
	var_606_int = 38507; // 0x632 PushI
	var_607_bool = var_19_object == var_606_int; // 0x633 Eq
	if(var_607_bool == 0) goto Label_1604; // 0x634 JumpB
	var_608_string = ""; // 0x635 PushV
	var_608_string = "Neutral"; // 0x636 MovS
	func_325(var_20_bool, var_608_string); // 0x637 NEW_2
	var_609_int = 536676; // 0x639 PushI
	SetMessage(var_609_int); // 0x63a TObjFunc
	ClearReplies(); // 0x63c TObjFunc
	var_610_int = 536677; // 0x63e PushI
	var_611_int = 38509; // 0x63f PushI
	var_612_int = 38508; // 0x640 PushI
	AddReply(var_610_int, var_611_int, var_612_int); // 0x641 TObjFunc
	return 0; // 0x643 Return
	
Label_1604:
	var_613_int = 38509; // 0x644 PushI
	var_614_bool = var_19_object == var_613_int; // 0x645 Eq
	if(var_614_bool == 0) goto Label_1627; // 0x646 JumpB
	var_615_string = ""; // 0x647 PushV
	var_615_string = "Neutral"; // 0x648 MovS
	func_325(var_20_bool, var_615_string); // 0x649 NEW_2
	var_616_int = 536678; // 0x64b PushI
	SetMessage(var_616_int); // 0x64c TObjFunc
	ClearReplies(); // 0x64e TObjFunc
	var_617_int = 536679; // 0x650 PushI
	var_618_int = 38511; // 0x651 PushI
	var_619_int = 38510; // 0x652 PushI
	AddReply(var_617_int, var_618_int, var_619_int); // 0x653 TObjFunc
	var_620_int = 536683; // 0x655 PushI
	var_621_int = -1; // 0x656 PushI
	var_622_int = 38514; // 0x657 PushI
	AddReply(var_620_int, var_621_int, var_622_int); // 0x658 TObjFunc
	return 0; // 0x65a Return
	
Label_1627:
	var_623_int = 38511; // 0x65b PushI
	var_624_bool = var_19_object == var_623_int; // 0x65c Eq
	if(var_624_bool == 0) goto Label_1650; // 0x65d JumpB
	var_625_string = ""; // 0x65e PushV
	var_625_string = "Neutral"; // 0x65f MovS
	func_325(var_20_bool, var_625_string); // 0x660 NEW_2
	var_626_int = 536680; // 0x662 PushI
	SetMessage(var_626_int); // 0x663 TObjFunc
	ClearReplies(); // 0x665 TObjFunc
	var_627_int = 536681; // 0x667 PushI
	var_628_int = -1; // 0x668 PushI
	var_629_int = 38512; // 0x669 PushI
	AddReply(var_627_int, var_628_int, var_629_int); // 0x66a TObjFunc
	var_630_int = 536682; // 0x66c PushI
	var_631_int = -1; // 0x66d PushI
	var_632_int = 38513; // 0x66e PushI
	AddReply(var_630_int, var_631_int, var_632_int); // 0x66f TObjFunc
	return 0; // 0x671 Return
	
Label_1650:
	var_633_int = 38495; // 0x672 PushI
	var_634_bool = var_19_object == var_633_int; // 0x673 Eq
	if(var_634_bool == 0) goto Label_1673; // 0x674 JumpB
	var_635_string = ""; // 0x675 PushV
	var_635_string = "Neutral"; // 0x676 MovS
	func_325(var_20_bool, var_635_string); // 0x677 NEW_2
	var_636_int = 536666; // 0x679 PushI
	SetMessage(var_636_int); // 0x67a TObjFunc
	ClearReplies(); // 0x67c TObjFunc
	var_637_int = 536667; // 0x67e PushI
	var_638_int = 38497; // 0x67f PushI
	var_639_int = 38496; // 0x680 PushI
	AddReply(var_637_int, var_638_int, var_639_int); // 0x681 TObjFunc
	var_640_int = 536674; // 0x683 PushI
	var_641_int = 38499; // 0x684 PushI
	var_642_int = 38504; // 0x685 PushI
	AddReply(var_640_int, var_641_int, var_642_int); // 0x686 TObjFunc
	return 0; // 0x688 Return
	
Label_1673:
	var_643_int = 38497; // 0x689 PushI
	var_644_bool = var_19_object == var_643_int; // 0x68a Eq
	if(var_644_bool == 0) goto Label_1696; // 0x68b JumpB
	var_645_string = ""; // 0x68c PushV
	var_645_string = "Neutral"; // 0x68d MovS
	func_325(var_20_bool, var_645_string); // 0x68e NEW_2
	var_646_int = 536668; // 0x690 PushI
	SetMessage(var_646_int); // 0x691 TObjFunc
	ClearReplies(); // 0x693 TObjFunc
	var_647_int = 536669; // 0x695 PushI
	var_648_int = 38499; // 0x696 PushI
	var_649_int = 38498; // 0x697 PushI
	AddReply(var_647_int, var_648_int, var_649_int); // 0x698 TObjFunc
	var_650_int = 536673; // 0x69a PushI
	var_651_int = 38499; // 0x69b PushI
	var_652_int = 38502; // 0x69c PushI
	AddReply(var_650_int, var_651_int, var_652_int); // 0x69d TObjFunc
	return 0; // 0x69f Return
	
Label_1696:
	var_653_int = 38499; // 0x6a0 PushI
	var_654_bool = var_19_object == var_653_int; // 0x6a1 Eq
	if(var_654_bool == 0) goto Label_1719; // 0x6a2 JumpB
	var_655_string = ""; // 0x6a3 PushV
	var_655_string = "Neutral"; // 0x6a4 MovS
	func_325(var_20_bool, var_655_string); // 0x6a5 NEW_2
	var_656_int = 536670; // 0x6a7 PushI
	SetMessage(var_656_int); // 0x6a8 TObjFunc
	ClearReplies(); // 0x6aa TObjFunc
	var_657_int = 536671; // 0x6ac PushI
	var_658_int = -1; // 0x6ad PushI
	var_659_int = 38500; // 0x6ae PushI
	AddReply(var_657_int, var_658_int, var_659_int); // 0x6af TObjFunc
	var_660_int = 536672; // 0x6b1 PushI
	var_661_int = -1; // 0x6b2 PushI
	var_662_int = 38501; // 0x6b3 PushI
	AddReply(var_660_int, var_661_int, var_662_int); // 0x6b4 TObjFunc
	return 0; // 0x6b6 Return
	
Label_1719:
	var_663_int = 38474; // 0x6b7 PushI
	var_664_bool = var_19_object == var_663_int; // 0x6b8 Eq
	if(var_664_bool == 0) goto Label_1747; // 0x6b9 JumpB
	var_665_string = ""; // 0x6ba PushV
	var_665_string = "Neutral"; // 0x6bb MovS
	func_325(var_20_bool, var_665_string); // 0x6bc NEW_2
	var_666_int = 536646; // 0x6be PushI
	SetMessage(var_666_int); // 0x6bf TObjFunc
	ClearReplies(); // 0x6c1 TObjFunc
	var_667_int = 536647; // 0x6c3 PushI
	var_668_int = 38476; // 0x6c4 PushI
	var_669_int = 38475; // 0x6c5 PushI
	AddReply(var_667_int, var_668_int, var_669_int); // 0x6c6 TObjFunc
	var_670_int = 536653; // 0x6c8 PushI
	var_671_int = 38482; // 0x6c9 PushI
	var_672_int = 38481; // 0x6ca PushI
	AddReply(var_670_int, var_671_int, var_672_int); // 0x6cb TObjFunc
	var_673_int = 536662; // 0x6cd PushI
	var_674_int = -1; // 0x6ce PushI
	var_675_int = 38491; // 0x6cf PushI
	AddReply(var_673_int, var_674_int, var_675_int); // 0x6d0 TObjFunc
	return 0; // 0x6d2 Return
	
Label_1747:
	var_676_int = 38482; // 0x6d3 PushI
	var_677_bool = var_19_object == var_676_int; // 0x6d4 Eq
	if(var_677_bool == 0) goto Label_1770; // 0x6d5 JumpB
	var_678_string = ""; // 0x6d6 PushV
	var_678_string = "Neutral"; // 0x6d7 MovS
	func_325(var_20_bool, var_678_string); // 0x6d8 NEW_2
	var_679_int = 536654; // 0x6da PushI
	SetMessage(var_679_int); // 0x6db TObjFunc
	ClearReplies(); // 0x6dd TObjFunc
	var_680_int = 536655; // 0x6df PushI
	var_681_int = 38484; // 0x6e0 PushI
	var_682_int = 38483; // 0x6e1 PushI
	AddReply(var_680_int, var_681_int, var_682_int); // 0x6e2 TObjFunc
	var_683_int = 536659; // 0x6e4 PushI
	var_684_int = 38488; // 0x6e5 PushI
	var_685_int = 38487; // 0x6e6 PushI
	AddReply(var_683_int, var_684_int, var_685_int); // 0x6e7 TObjFunc
	return 0; // 0x6e9 Return
	
Label_1770:
	var_686_int = 38488; // 0x6ea PushI
	var_687_bool = var_19_object == var_686_int; // 0x6eb Eq
	if(var_687_bool == 0) goto Label_1788; // 0x6ec JumpB
	var_688_string = ""; // 0x6ed PushV
	var_688_string = "Neutral"; // 0x6ee MovS
	func_325(var_20_bool, var_688_string); // 0x6ef NEW_2
	var_689_int = 536660; // 0x6f1 PushI
	SetMessage(var_689_int); // 0x6f2 TObjFunc
	ClearReplies(); // 0x6f4 TObjFunc
	var_690_int = 536661; // 0x6f6 PushI
	var_691_int = 38484; // 0x6f7 PushI
	var_692_int = 38489; // 0x6f8 PushI
	AddReply(var_690_int, var_691_int, var_692_int); // 0x6f9 TObjFunc
	return 0; // 0x6fb Return
	
Label_1788:
	var_693_int = 38484; // 0x6fc PushI
	var_694_bool = var_19_object == var_693_int; // 0x6fd Eq
	if(var_694_bool == 0) goto Label_1811; // 0x6fe JumpB
	var_695_string = ""; // 0x6ff PushV
	var_695_string = "Neutral"; // 0x700 MovS
	func_325(var_20_bool, var_695_string); // 0x701 NEW_2
	var_696_int = 536656; // 0x703 PushI
	SetMessage(var_696_int); // 0x704 TObjFunc
	ClearReplies(); // 0x706 TObjFunc
	var_697_int = 536657; // 0x708 PushI
	var_698_int = -1; // 0x709 PushI
	var_699_int = 38485; // 0x70a PushI
	AddReply(var_697_int, var_698_int, var_699_int); // 0x70b TObjFunc
	var_700_int = 536658; // 0x70d PushI
	var_701_int = -1; // 0x70e PushI
	var_702_int = 38486; // 0x70f PushI
	AddReply(var_700_int, var_701_int, var_702_int); // 0x710 TObjFunc
	return 0; // 0x712 Return
	
Label_1811:
	var_703_int = 38476; // 0x713 PushI
	var_704_bool = var_19_object == var_703_int; // 0x714 Eq
	if(var_704_bool == 0) goto Label_1834; // 0x715 JumpB
	var_705_string = ""; // 0x716 PushV
	var_705_string = "Neutral"; // 0x717 MovS
	func_325(var_20_bool, var_705_string); // 0x718 NEW_2
	var_706_int = 536648; // 0x71a PushI
	SetMessage(var_706_int); // 0x71b TObjFunc
	ClearReplies(); // 0x71d TObjFunc
	var_707_int = 536649; // 0x71f PushI
	var_708_int = 38478; // 0x720 PushI
	var_709_int = 38477; // 0x721 PushI
	AddReply(var_707_int, var_708_int, var_709_int); // 0x722 TObjFunc
	var_710_int = 536652; // 0x724 PushI
	var_711_int = -1; // 0x725 PushI
	var_712_int = 38480; // 0x726 PushI
	AddReply(var_710_int, var_711_int, var_712_int); // 0x727 TObjFunc
	return 0; // 0x729 Return
	
Label_1834:
	var_713_int = 38478; // 0x72a PushI
	var_714_bool = var_19_object == var_713_int; // 0x72b Eq
	if(var_714_bool == 0) goto Label_1852; // 0x72c JumpB
	var_715_string = ""; // 0x72d PushV
	var_715_string = "Neutral"; // 0x72e MovS
	func_325(var_20_bool, var_715_string); // 0x72f NEW_2
	var_716_int = 536650; // 0x731 PushI
	SetMessage(var_716_int); // 0x732 TObjFunc
	ClearReplies(); // 0x734 TObjFunc
	var_717_int = 536651; // 0x736 PushI
	var_718_int = -1; // 0x737 PushI
	var_719_int = 38479; // 0x738 PushI
	AddReply(var_717_int, var_718_int, var_719_int); // 0x739 TObjFunc
	return 0; // 0x73b Return
	
Label_1852:
	var_720_int = 38468; // 0x73c PushI
	var_721_bool = var_19_object == var_720_int; // 0x73d Eq
	if(var_721_bool == 0) goto Label_1870; // 0x73e JumpB
	var_722_string = ""; // 0x73f PushV
	var_722_string = "Neutral"; // 0x740 MovS
	func_325(var_20_bool, var_722_string); // 0x741 NEW_2
	var_723_int = 536640; // 0x743 PushI
	SetMessage(var_723_int); // 0x744 TObjFunc
	ClearReplies(); // 0x746 TObjFunc
	var_724_int = 536641; // 0x748 PushI
	var_725_int = -1; // 0x749 PushI
	var_726_int = 38469; // 0x74a PushI
	AddReply(var_724_int, var_725_int, var_726_int); // 0x74b TObjFunc
	return 0; // 0x74d Return
	
Label_1870:
	var_727_int = 45487; // 0x74e PushI
	var_728_bool = var_19_object == var_727_int; // 0x74f Eq
	if(var_728_bool == 0) goto Label_1873; // 0x750 JumpB
	
Label_1873:
	var_729_int = 45480; // 0x751 PushI
	var_730_bool = var_19_object == var_729_int; // 0x752 Eq
	if(var_730_bool == 0) goto Label_1876; // 0x753 JumpB
	
Label_1876:
	var_731_int = 45483; // 0x754 PushI
	var_732_bool = var_19_object == var_731_int; // 0x755 Eq
	if(var_732_bool == 0) goto Label_1899; // 0x756 JumpB
	var_733_string = ""; // 0x757 PushV
	var_733_string = "Neutral"; // 0x758 MovS
	func_325(var_20_bool, var_733_string); // 0x759 NEW_2
	var_734_int = 543031; // 0x75b PushI
	SetMessage(var_734_int); // 0x75c TObjFunc
	ClearReplies(); // 0x75e TObjFunc
	var_735_int = 543032; // 0x760 PushI
	var_736_int = -1; // 0x761 PushI
	var_737_int = 45484; // 0x762 PushI
	AddReply(var_735_int, var_736_int, var_737_int); // 0x763 TObjFunc
	var_738_int = 543033; // 0x765 PushI
	var_739_int = -1; // 0x766 PushI
	var_740_int = 45485; // 0x767 PushI
	AddReply(var_738_int, var_739_int, var_740_int); // 0x768 TObjFunc
	return 0; // 0x76a Return
	
Label_1899:
	var_741_int = 45475; // 0x76b PushI
	var_742_bool = var_19_object == var_741_int; // 0x76c Eq
	if(var_742_bool == 0) goto Label_1902; // 0x76d JumpB
	
Label_1902:
	var_743_int = 45468; // 0x76e PushI
	var_744_bool = var_19_object == var_743_int; // 0x76f Eq
	if(var_744_bool == 0) goto Label_1905; // 0x770 JumpB
	
Label_1905:
	var_745_int = 45471; // 0x771 PushI
	var_746_bool = var_19_object == var_745_int; // 0x772 Eq
	if(var_746_bool == 0) goto Label_1928; // 0x773 JumpB
	var_747_string = ""; // 0x774 PushV
	var_747_string = "Neutral"; // 0x775 MovS
	func_325(var_20_bool, var_747_string); // 0x776 NEW_2
	var_748_int = 543019; // 0x778 PushI
	SetMessage(var_748_int); // 0x779 TObjFunc
	ClearReplies(); // 0x77b TObjFunc
	var_749_int = 543020; // 0x77d PushI
	var_750_int = -1; // 0x77e PushI
	var_751_int = 45472; // 0x77f PushI
	AddReply(var_749_int, var_750_int, var_751_int); // 0x780 TObjFunc
	var_752_int = 543021; // 0x782 PushI
	var_753_int = -1; // 0x783 PushI
	var_754_int = 45473; // 0x784 PushI
	AddReply(var_752_int, var_753_int, var_754_int); // 0x785 TObjFunc
	return 0; // 0x787 Return
	
Label_1928:
	var_3_object = 1; // 0x788 TMovB
	var_755_bool = 0; // 0x789 PushV
	func_5319(var_755_bool); // 0x78a NEW_2
	if(var_755_bool == 0) goto Label_1936; // 0x78c JumpB
	lshStopAnimation(); // 0x78d Func
	goto Label_1938; // 0x78f Jump
	
Label_1938:
	return 0; // 0x792 Return
	
Label_1936:
	StopAnimation(); // 0x790 Func
	
Label_1940:
	return 0; // 0x794 Return
}


task_3_event_0(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_bool, var_8_bool, var_9_bool, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_int = 0; var_21_int = 0; // 0x7a4 PushV
	var_22_int = 0; var_23_object = Obj(); // 0x7a5 PushV
	var_23_object = var_19_bool; // 0x7a6 Mov
	func_5265(var_23_object); // 0x7a7 NEW_2
	var_21_int = var_22_int; // 0x7a8 Mov
	var_24_int = 0; // 0x7aa PushI
	var_25_bool = var_21_int > var_24_int; // 0x7ab GT
	if(var_25_bool == 0) goto Label_1969; // 0x7ac JumpB
	var_26_object = Obj(); // 0x7ad PushV
	var_26_object = var_19_bool; // 0x7ae Mov
	func_5268(var_26_object); // 0x7af NEW_2
	
Label_1969:
	return 2; // 0x7b1 Return
}


task_3_event_6(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	func_5274(); // 0x7b3 NEW_2
	return 0; // 0x7b5 Return
}


task_3_event_22(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_int, var_8_float, var_9_float, var_10_bool, var_11_bool, var_12_bool, var_13_object, var_14_object, var_15_int, var_16_int, var_17_bool, var_18_float, var_19_int, var_20_bool, var_21_object, var_22_bool)
{
	return 0; // 0x82c Return
}


task_3_event_16(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_string, var_8_bool, var_9_bool, var_10_bool, var_11_object, var_12_object, var_13_int, var_14_int, var_15_bool, var_16_float, var_17_int, var_18_bool, var_19_object, var_20_bool)
{
	return 0; // 0x82e Return
}


task_3_event_41(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_bool, var_8_bool, var_9_bool, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	return 0; // 0x830 Return
}


task_4_event_0(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_int = 0; var_21_int = 0; // 0x849 PushV
	var_22_int = 0; var_23_object = Obj(); // 0x84a PushV
	var_23_object = var_19_bool; // 0x84b Mov
	func_5265(var_23_object); // 0x84c NEW_2
	var_21_int = var_22_int; // 0x84d Mov
	var_24_int = 0; // 0x84f PushI
	var_25_bool = var_21_int > var_24_int; // 0x850 GT
	if(var_25_bool == 0) goto Label_2140; // 0x851 JumpB
	var_26_int = 1; // 0x852 PushI
	var_27_bool = var_21_int > var_26_int; // 0x853 GT
	if(var_27_bool == 0) goto Label_2136; // 0x854 JumpB
	func_2308(var_21_int); // 0x856 NEW_2
	
Label_2136:
	var_29_object = Obj(); // 0x858 PushV
	var_29_object = var_19_bool; // 0x859 Mov
	func_5268(var_29_object); // 0x85a NEW_2
	
Label_2140:
	return 2; // 0x85c Return
}


task_4_event_17(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_int = 0; var_21_int = 0; // 0x85d PushV
	var_22_object = Obj(); // 0x85e PushV
	var_22_object = var_19_bool; // 0x85f Mov
	func_4996(var_22_object); // 0x860 NEW_2
	var_31_int = 0; var_32_object = Obj(); // 0x862 PushV
	var_32_object = var_19_bool; // 0x863 Mov
	func_5079(var_31_int, var_32_object); // 0x864 NEW_2
	var_21_int = var_31_int; // 0x865 Mov
	var_67_int = 0; // 0x867 PushI
	var_68_bool = var_21_int > var_67_int; // 0x868 GT
	if(var_68_bool == 0) goto Label_2164; // 0x869 JumpB
	var_69_int = 1; // 0x86a PushI
	var_70_bool = var_21_int > var_69_int; // 0x86b GT
	if(var_70_bool == 0) goto Label_2160; // 0x86c JumpB
	func_2308(var_21_int); // 0x86e NEW_2
	
Label_2160:
	var_72_object = Obj(); // 0x870 PushV
	var_72_object = var_19_bool; // 0x871 Mov
	func_5089(var_72_object); // 0x872 NEW_2
	
Label_2164:
	return 2; // 0x874 Return
}


task_4_event_30(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_bool, var_12_object, var_13_object, var_14_int, var_15_int, var_16_bool, var_17_float, var_18_int, var_19_bool, var_20_object, var_21_bool)
{
	var_22_int = 0; var_23_int = 0; // 0x875 PushV
	var_24_bool = 0; var_25_object = Obj(); var_26_object = Obj(); var_27_bool = 0; // 0x876 PushV
	var_25_object = var_19_bool; // 0x877 Mov
	var_26_object = var_20_object; // 0x878 Mov
	var_27_bool = var_21_bool; // 0x879 Mov
	func_5373(var_24_bool, var_25_object, var_26_object, var_27_bool); // 0x87a NEW_2
	if(var_24_bool == 0) goto Label_2192; // 0x87c JumpB
	var_86_int = 0; var_87_object = Obj(); var_88_bool = 0; // 0x87d PushV
	var_87_object = var_19_bool; // 0x87e Mov
	var_88_bool = var_21_bool; // 0x87f Mov
	func_5172(var_87_object, var_88_bool); // 0x880 NEW_2
	var_23_int = var_86_int; // 0x881 Mov
	var_119_int = 0; // 0x883 PushI
	var_120_bool = var_23_int > var_119_int; // 0x884 GT
	if(var_120_bool == 0) goto Label_2192; // 0x885 JumpB
	var_121_int = 1; // 0x886 PushI
	var_122_bool = var_23_int > var_121_int; // 0x887 GT
	if(var_122_bool == 0) goto Label_2188; // 0x888 JumpB
	func_2308(var_23_int); // 0x88a NEW_2
	
Label_2188:
	var_124_object = Obj(); // 0x88c PushV
	var_124_object = var_19_bool; // 0x88d Mov
	func_5179(var_124_object); // 0x88e NEW_2
	
Label_2192:
	return 2; // 0x890 Return
}


task_4_event_40(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_int = 0; var_21_int = 0; // 0x891 PushV
	var_22_int = 0; var_23_object = Obj(); // 0x892 PushV
	var_23_object = var_19_bool; // 0x893 Mov
	func_5214(var_23_object); // 0x894 NEW_2
	var_21_int = var_22_int; // 0x895 Mov
	var_24_int = 0; // 0x897 PushI
	var_25_bool = var_21_int > var_24_int; // 0x898 GT
	if(var_25_bool == 0) goto Label_2212; // 0x899 JumpB
	var_26_int = 1; // 0x89a PushI
	var_27_bool = var_21_int > var_26_int; // 0x89b GT
	if(var_27_bool == 0) goto Label_2208; // 0x89c JumpB
	func_2308(var_21_int); // 0x89e NEW_2
	
Label_2208:
	var_29_object = Obj(); // 0x8a0 PushV
	var_29_object = var_19_bool; // 0x8a1 Mov
	func_5217(); // 0x8a2 NEW_2
	
Label_2212:
	return 2; // 0x8a4 Return
}


task_4_event_42(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_string, var_11_object, var_12_object, var_13_int, var_14_int, var_15_bool, var_16_float, var_17_int, var_18_bool, var_19_object, var_20_bool)
{
	var_21_int = 0; var_22_int = 0; // 0x8a5 PushV
	var_23_bool = 0; var_24_object = Obj(); var_25_string = ""; // 0x8a6 PushV
	var_24_object = var_19_object; // 0x8a7 Mov
	var_25_string = var_20_bool; // 0x8a8 Mov
	func_4910(var_23_bool, var_24_object, var_25_string); // 0x8a9 NEW_2
	if(var_23_bool == 0) goto Label_2229; // 0x8ab JumpB
	func_2308(var_22_int); // 0x8ad NEW_2
	var_52_object = Obj(); var_53_string = ""; // 0x8af PushV
	var_52_object = var_19_object; // 0x8b0 Mov
	var_53_string = var_20_bool; // 0x8b1 Mov
	func_4942(var_52_object, var_53_string); // 0x8b2 NEW_2
	goto Label_2249; // 0x8b4 Jump
	
Label_2249:
	return 2; // 0x8c9 Return
	
Label_2229:
	var_128_int = 0; var_129_string = ""; var_130_object = Obj(); // 0x8b5 PushV
	var_129_string = var_20_bool; // 0x8b6 Mov
	var_130_object = var_19_object; // 0x8b7 Mov
	func_5219(var_128_int, var_129_string, var_130_object); // 0x8b8 NEW_2
	var_22_int = var_128_int; // 0x8b9 Mov
	var_172_int = 0; // 0x8bb PushI
	var_173_bool = var_22_int > var_172_int; // 0x8bc GT
	if(var_173_bool == 0) goto Label_2249; // 0x8bd JumpB
	var_174_int = 1; // 0x8be PushI
	var_175_bool = var_22_int > var_174_int; // 0x8bf GT
	if(var_175_bool == 0) goto Label_2244; // 0x8c0 JumpB
	func_2308(var_22_int); // 0x8c2 NEW_2
	
Label_2244:
	var_176_string = ""; var_177_object = Obj(); // 0x8c4 PushV
	var_176_string = var_20_bool; // 0x8c5 Mov
	var_177_object = var_19_object; // 0x8c6 Mov
	func_5231(var_176_string, var_177_object); // 0x8c7 NEW_2
}


task_4_event_26(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_string, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_bool = 0; var_21_string = ""; // 0x8cb PushV
	var_21_string = var_19_bool; // 0x8cc Mov
	func_5009(var_20_bool, var_21_string); // 0x8cd NEW_2
	if(var_20_bool == 0) goto Label_2263; // 0x8cf JumpB
	func_2308(var_19_bool); // 0x8d1 NEW_2
	var_30_string = ""; // 0x8d3 PushV
	var_30_string = var_19_bool; // 0x8d4 Mov
	func_5025(var_30_string); // 0x8d5 NEW_2
	
Label_2263:
	return 0; // 0x8d7 Return
}


task_4_event_1(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_bool = 0; var_21_object = Obj(); // 0x8d9 PushV
	var_21_object = var_19_bool; // 0x8da Mov
	func_4967(var_20_bool, var_21_object); // 0x8db NEW_2
	if(var_20_bool == 0) goto Label_2278; // 0x8dd JumpB
	func_2308(var_19_bool); // 0x8df NEW_2
	var_33_object = Obj(); // 0x8e1 PushV
	var_33_object = var_19_bool; // 0x8e2 Mov
	func_4990(var_33_object); // 0x8e3 NEW_2
	goto Label_2282; // 0x8e5 Jump
	
Label_2282:
	return 0; // 0x8ea Return
	
Label_2278:
	var_35_object = Obj(); // 0x8e6 PushV
	var_35_object = var_19_bool; // 0x8e7 Mov
	func_2333(var_19_bool, var_35_object); // 0x8e8 NEW_2
}


task_4_event_3(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_object = Obj(); // 0x8ec PushV
	var_20_object = var_19_bool; // 0x8ed Mov
	func_2333(var_19_bool, var_20_object); // 0x8ee NEW_2
	return 0; // 0x8f0 Return
}


task_4_event_7(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_int, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_int = 110; // 0x8f2 PushI
	var_21_bool = var_19_bool != var_20_int; // 0x8f3 Neq
	if(var_21_bool == 0) goto Label_2294; // 0x8f4 JumpB
	return 0; // 0x8f5 Return
	
Label_2294:
	var_2_object = 0; // 0x8f6 TMovB
	var_22_int = 110; // 0x8f7 PushI
	KillTimer(var_22_int); // 0x8f8 Func
	ResetAAS(); // 0x8fa Func
	return 0; // 0x8fc Return
}


task_4_event_6(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	func_2308(var_18_bool); // 0x8fe NEW_2
	func_5274(); // 0x901 NEW_2
	return 0; // 0x903 Return
}


task_4_event_41(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	func_2308(var_19_bool); // 0x916 NEW_2
	var_21_object = Obj(); // 0x918 PushV
	var_21_object = var_19_bool; // 0x919 Mov
	func_4886(); // 0x91a NEW_2
	return 0; // 0x91c Return
}


task_4_event_10(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	RequestClearPath(var_19_bool); // 0x986 Func
	return 0; // 0x988 Return
}


task_4_event_28(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	Stop(); // 0x989 Func
	return 0; // 0x98b Return
}


task_5_event_0(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_int = 0; var_21_int = 0; // 0x9a2 PushV
	var_22_int = 0; var_23_object = Obj(); // 0x9a3 PushV
	var_23_object = var_19_bool; // 0x9a4 Mov
	func_5265(var_23_object); // 0x9a5 NEW_2
	var_21_int = var_22_int; // 0x9a6 Mov
	var_24_int = 0; // 0x9a8 PushI
	var_25_bool = var_21_int > var_24_int; // 0x9a9 GT
	if(var_25_bool == 0) goto Label_2485; // 0x9aa JumpB
	var_26_int = 1; // 0x9ab PushI
	var_27_bool = var_21_int > var_26_int; // 0x9ac GT
	if(var_27_bool == 0) goto Label_2481; // 0x9ad JumpB
	func_2711(); // 0x9af NEW_2
	
Label_2481:
	var_28_object = Obj(); // 0x9b1 PushV
	var_28_object = var_19_bool; // 0x9b2 Mov
	func_5268(var_28_object); // 0x9b3 NEW_2
	
Label_2485:
	return 2; // 0x9b5 Return
}


task_5_event_17(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_int = 0; var_21_int = 0; // 0x9b6 PushV
	var_22_object = Obj(); // 0x9b7 PushV
	var_22_object = var_19_bool; // 0x9b8 Mov
	func_4996(var_22_object); // 0x9b9 NEW_2
	var_31_int = 0; var_32_object = Obj(); // 0x9bb PushV
	var_32_object = var_19_bool; // 0x9bc Mov
	func_5079(var_31_int, var_32_object); // 0x9bd NEW_2
	var_21_int = var_31_int; // 0x9be Mov
	var_67_int = 0; // 0x9c0 PushI
	var_68_bool = var_21_int > var_67_int; // 0x9c1 GT
	if(var_68_bool == 0) goto Label_2509; // 0x9c2 JumpB
	var_69_int = 1; // 0x9c3 PushI
	var_70_bool = var_21_int > var_69_int; // 0x9c4 GT
	if(var_70_bool == 0) goto Label_2505; // 0x9c5 JumpB
	func_2711(); // 0x9c7 NEW_2
	
Label_2505:
	var_71_object = Obj(); // 0x9c9 PushV
	var_71_object = var_19_bool; // 0x9ca Mov
	func_5089(var_71_object); // 0x9cb NEW_2
	
Label_2509:
	return 2; // 0x9cd Return
}


task_5_event_30(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_bool, var_12_object, var_13_object, var_14_int, var_15_int, var_16_bool, var_17_float, var_18_int, var_19_bool, var_20_object, var_21_bool)
{
	var_22_int = 0; var_23_int = 0; // 0x9ce PushV
	var_24_bool = 0; var_25_object = Obj(); var_26_object = Obj(); var_27_bool = 0; // 0x9cf PushV
	var_25_object = var_19_bool; // 0x9d0 Mov
	var_26_object = var_20_object; // 0x9d1 Mov
	var_27_bool = var_21_bool; // 0x9d2 Mov
	func_5373(var_24_bool, var_25_object, var_26_object, var_27_bool); // 0x9d3 NEW_2
	if(var_24_bool == 0) goto Label_2537; // 0x9d5 JumpB
	var_86_int = 0; var_87_object = Obj(); var_88_bool = 0; // 0x9d6 PushV
	var_87_object = var_19_bool; // 0x9d7 Mov
	var_88_bool = var_21_bool; // 0x9d8 Mov
	func_5172(var_87_object, var_88_bool); // 0x9d9 NEW_2
	var_23_int = var_86_int; // 0x9da Mov
	var_119_int = 0; // 0x9dc PushI
	var_120_bool = var_23_int > var_119_int; // 0x9dd GT
	if(var_120_bool == 0) goto Label_2537; // 0x9de JumpB
	var_121_int = 1; // 0x9df PushI
	var_122_bool = var_23_int > var_121_int; // 0x9e0 GT
	if(var_122_bool == 0) goto Label_2533; // 0x9e1 JumpB
	func_2711(); // 0x9e3 NEW_2
	
Label_2533:
	var_123_object = Obj(); // 0x9e5 PushV
	var_123_object = var_19_bool; // 0x9e6 Mov
	func_5179(var_123_object); // 0x9e7 NEW_2
	
Label_2537:
	return 2; // 0x9e9 Return
}


task_5_event_40(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_int = 0; var_21_int = 0; // 0x9ea PushV
	var_22_int = 0; var_23_object = Obj(); // 0x9eb PushV
	var_23_object = var_19_bool; // 0x9ec Mov
	func_5214(var_23_object); // 0x9ed NEW_2
	var_21_int = var_22_int; // 0x9ee Mov
	var_24_int = 0; // 0x9f0 PushI
	var_25_bool = var_21_int > var_24_int; // 0x9f1 GT
	if(var_25_bool == 0) goto Label_2557; // 0x9f2 JumpB
	var_26_int = 1; // 0x9f3 PushI
	var_27_bool = var_21_int > var_26_int; // 0x9f4 GT
	if(var_27_bool == 0) goto Label_2553; // 0x9f5 JumpB
	func_2711(); // 0x9f7 NEW_2
	
Label_2553:
	var_28_object = Obj(); // 0x9f9 PushV
	var_28_object = var_19_bool; // 0x9fa Mov
	func_5217(); // 0x9fb NEW_2
	
Label_2557:
	return 2; // 0x9fd Return
}


task_5_event_42(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_string, var_11_object, var_12_object, var_13_int, var_14_int, var_15_bool, var_16_float, var_17_int, var_18_bool, var_19_object, var_20_bool)
{
	var_21_int = 0; var_22_int = 0; // 0x9fe PushV
	var_23_bool = 0; var_24_object = Obj(); var_25_string = ""; // 0x9ff PushV
	var_24_object = var_19_object; // 0xa00 Mov
	var_25_string = var_20_bool; // 0xa01 Mov
	func_4910(var_23_bool, var_24_object, var_25_string); // 0xa02 NEW_2
	if(var_23_bool == 0) goto Label_2574; // 0xa04 JumpB
	func_2711(); // 0xa06 NEW_2
	var_51_object = Obj(); var_52_string = ""; // 0xa08 PushV
	var_51_object = var_19_object; // 0xa09 Mov
	var_52_string = var_20_bool; // 0xa0a Mov
	func_4942(var_51_object, var_52_string); // 0xa0b NEW_2
	goto Label_2594; // 0xa0d Jump
	
Label_2594:
	return 2; // 0xa22 Return
	
Label_2574:
	var_127_int = 0; var_128_string = ""; var_129_object = Obj(); // 0xa0e PushV
	var_128_string = var_20_bool; // 0xa0f Mov
	var_129_object = var_19_object; // 0xa10 Mov
	func_5219(var_127_int, var_128_string, var_129_object); // 0xa11 NEW_2
	var_22_int = var_127_int; // 0xa12 Mov
	var_171_int = 0; // 0xa14 PushI
	var_172_bool = var_22_int > var_171_int; // 0xa15 GT
	if(var_172_bool == 0) goto Label_2594; // 0xa16 JumpB
	var_173_int = 1; // 0xa17 PushI
	var_174_bool = var_22_int > var_173_int; // 0xa18 GT
	if(var_174_bool == 0) goto Label_2589; // 0xa19 JumpB
	func_2711(); // 0xa1b NEW_2
	
Label_2589:
	var_175_string = ""; var_176_object = Obj(); // 0xa1d PushV
	var_175_string = var_20_bool; // 0xa1e Mov
	var_176_object = var_19_object; // 0xa1f Mov
	func_5231(var_175_string, var_176_object); // 0xa20 NEW_2
}


task_5_event_26(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_string, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_bool = 0; var_21_string = ""; // 0xa24 PushV
	var_21_string = var_19_bool; // 0xa25 Mov
	func_5009(var_20_bool, var_21_string); // 0xa26 NEW_2
	if(var_20_bool == 0) goto Label_2608; // 0xa28 JumpB
	func_2711(); // 0xa2a NEW_2
	var_29_string = ""; // 0xa2c PushV
	var_29_string = var_19_bool; // 0xa2d Mov
	func_5025(var_29_string); // 0xa2e NEW_2
	
Label_2608:
	return 0; // 0xa30 Return
}


task_5_event_6(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	func_2711(); // 0xa32 NEW_2
	func_5274(); // 0xa35 NEW_2
	return 0; // 0xa37 Return
}


task_5_event_1(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_bool = 0; var_21_object = Obj(); // 0xa39 PushV
	var_21_object = var_19_bool; // 0xa3a Mov
	func_4967(var_20_bool, var_21_object); // 0xa3b NEW_2
	if(var_20_bool == 0) goto Label_2629; // 0xa3d JumpB
	func_2711(); // 0xa3f NEW_2
	var_32_object = Obj(); // 0xa41 PushV
	var_32_object = var_19_bool; // 0xa42 Mov
	func_4990(var_32_object); // 0xa43 NEW_2
	
Label_2629:
	return 0; // 0xa45 Return
}


task_6_event_0(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_int = 0; var_21_int = 0; // 0xad4 PushV
	var_22_int = 0; var_23_object = Obj(); // 0xad5 PushV
	var_23_object = var_19_bool; // 0xad6 Mov
	func_5265(var_23_object); // 0xad7 NEW_2
	var_21_int = var_22_int; // 0xad8 Mov
	var_24_int = 0; // 0xada PushI
	var_25_bool = var_21_int > var_24_int; // 0xadb GT
	if(var_25_bool == 0) goto Label_2791; // 0xadc JumpB
	var_26_int = 1; // 0xadd PushI
	var_27_bool = var_21_int > var_26_int; // 0xade GT
	if(var_27_bool == 0) goto Label_2787; // 0xadf JumpB
	func_2915(); // 0xae1 NEW_2
	
Label_2787:
	var_30_object = Obj(); // 0xae3 PushV
	var_30_object = var_19_bool; // 0xae4 Mov
	func_5268(var_30_object); // 0xae5 NEW_2
	
Label_2791:
	return 2; // 0xae7 Return
}


task_6_event_17(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_int = 0; var_21_int = 0; // 0xae8 PushV
	var_22_object = Obj(); // 0xae9 PushV
	var_22_object = var_19_bool; // 0xaea Mov
	func_4996(var_22_object); // 0xaeb NEW_2
	var_31_int = 0; var_32_object = Obj(); // 0xaed PushV
	var_32_object = var_19_bool; // 0xaee Mov
	func_5079(var_31_int, var_32_object); // 0xaef NEW_2
	var_21_int = var_31_int; // 0xaf0 Mov
	var_67_int = 0; // 0xaf2 PushI
	var_68_bool = var_21_int > var_67_int; // 0xaf3 GT
	if(var_68_bool == 0) goto Label_2815; // 0xaf4 JumpB
	var_69_int = 1; // 0xaf5 PushI
	var_70_bool = var_21_int > var_69_int; // 0xaf6 GT
	if(var_70_bool == 0) goto Label_2811; // 0xaf7 JumpB
	func_2915(); // 0xaf9 NEW_2
	
Label_2811:
	var_73_object = Obj(); // 0xafb PushV
	var_73_object = var_19_bool; // 0xafc Mov
	func_5089(var_73_object); // 0xafd NEW_2
	
Label_2815:
	return 2; // 0xaff Return
}


task_6_event_30(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_bool, var_13_object, var_14_int, var_15_int, var_16_bool, var_17_float, var_18_int, var_19_bool, var_20_object, var_21_bool)
{
	var_22_int = 0; var_23_int = 0; // 0xb00 PushV
	var_24_bool = 0; var_25_object = Obj(); var_26_object = Obj(); var_27_bool = 0; // 0xb01 PushV
	var_25_object = var_19_bool; // 0xb02 Mov
	var_26_object = var_20_object; // 0xb03 Mov
	var_27_bool = var_21_bool; // 0xb04 Mov
	func_5373(var_24_bool, var_25_object, var_26_object, var_27_bool); // 0xb05 NEW_2
	if(var_24_bool == 0) goto Label_2843; // 0xb07 JumpB
	var_86_int = 0; var_87_object = Obj(); var_88_bool = 0; // 0xb08 PushV
	var_87_object = var_19_bool; // 0xb09 Mov
	var_88_bool = var_21_bool; // 0xb0a Mov
	func_5172(var_87_object, var_88_bool); // 0xb0b NEW_2
	var_23_int = var_86_int; // 0xb0c Mov
	var_119_int = 0; // 0xb0e PushI
	var_120_bool = var_23_int > var_119_int; // 0xb0f GT
	if(var_120_bool == 0) goto Label_2843; // 0xb10 JumpB
	var_121_int = 1; // 0xb11 PushI
	var_122_bool = var_23_int > var_121_int; // 0xb12 GT
	if(var_122_bool == 0) goto Label_2839; // 0xb13 JumpB
	func_2915(); // 0xb15 NEW_2
	
Label_2839:
	var_125_object = Obj(); // 0xb17 PushV
	var_125_object = var_19_bool; // 0xb18 Mov
	func_5179(var_125_object); // 0xb19 NEW_2
	
Label_2843:
	return 2; // 0xb1b Return
}


task_6_event_40(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_int = 0; var_21_int = 0; // 0xb1c PushV
	var_22_int = 0; var_23_object = Obj(); // 0xb1d PushV
	var_23_object = var_19_bool; // 0xb1e Mov
	func_5214(var_23_object); // 0xb1f NEW_2
	var_21_int = var_22_int; // 0xb20 Mov
	var_24_int = 0; // 0xb22 PushI
	var_25_bool = var_21_int > var_24_int; // 0xb23 GT
	if(var_25_bool == 0) goto Label_2863; // 0xb24 JumpB
	var_26_int = 1; // 0xb25 PushI
	var_27_bool = var_21_int > var_26_int; // 0xb26 GT
	if(var_27_bool == 0) goto Label_2859; // 0xb27 JumpB
	func_2915(); // 0xb29 NEW_2
	
Label_2859:
	var_30_object = Obj(); // 0xb2b PushV
	var_30_object = var_19_bool; // 0xb2c Mov
	func_5217(); // 0xb2d NEW_2
	
Label_2863:
	return 2; // 0xb2f Return
}


task_6_event_42(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_string, var_12_object, var_13_int, var_14_int, var_15_bool, var_16_float, var_17_int, var_18_bool, var_19_object, var_20_bool)
{
	var_21_int = 0; var_22_int = 0; // 0xb30 PushV
	var_23_bool = 0; var_24_object = Obj(); var_25_string = ""; // 0xb31 PushV
	var_24_object = var_19_object; // 0xb32 Mov
	var_25_string = var_20_bool; // 0xb33 Mov
	func_4910(var_23_bool, var_24_object, var_25_string); // 0xb34 NEW_2
	if(var_23_bool == 0) goto Label_2880; // 0xb36 JumpB
	func_2915(); // 0xb38 NEW_2
	var_53_object = Obj(); var_54_string = ""; // 0xb3a PushV
	var_53_object = var_19_object; // 0xb3b Mov
	var_54_string = var_20_bool; // 0xb3c Mov
	func_4942(var_53_object, var_54_string); // 0xb3d NEW_2
	goto Label_2900; // 0xb3f Jump
	
Label_2900:
	return 2; // 0xb54 Return
	
Label_2880:
	var_129_int = 0; var_130_string = ""; var_131_object = Obj(); // 0xb40 PushV
	var_130_string = var_20_bool; // 0xb41 Mov
	var_131_object = var_19_object; // 0xb42 Mov
	func_5219(var_129_int, var_130_string, var_131_object); // 0xb43 NEW_2
	var_22_int = var_129_int; // 0xb44 Mov
	var_173_int = 0; // 0xb46 PushI
	var_174_bool = var_22_int > var_173_int; // 0xb47 GT
	if(var_174_bool == 0) goto Label_2900; // 0xb48 JumpB
	var_175_int = 1; // 0xb49 PushI
	var_176_bool = var_22_int > var_175_int; // 0xb4a GT
	if(var_176_bool == 0) goto Label_2895; // 0xb4b JumpB
	func_2915(); // 0xb4d NEW_2
	
Label_2895:
	var_177_string = ""; var_178_object = Obj(); // 0xb4f PushV
	var_177_string = var_20_bool; // 0xb50 Mov
	var_178_object = var_19_object; // 0xb51 Mov
	func_5231(var_177_string, var_178_object); // 0xb52 NEW_2
}


task_6_event_26(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_string, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_bool = 0; var_21_string = ""; // 0xb56 PushV
	var_21_string = var_19_bool; // 0xb57 Mov
	func_5009(var_20_bool, var_21_string); // 0xb58 NEW_2
	if(var_20_bool == 0) goto Label_2914; // 0xb5a JumpB
	func_2915(); // 0xb5c NEW_2
	var_31_string = ""; // 0xb5e PushV
	var_31_string = var_19_bool; // 0xb5f Mov
	func_5025(var_31_string); // 0xb60 NEW_2
	
Label_2914:
	return 0; // 0xb62 Return
}


task_6_event_41(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	func_2915(); // 0xb70 NEW_2
	var_22_object = Obj(); // 0xb72 PushV
	var_22_object = var_19_bool; // 0xb73 Mov
	func_4886(); // 0xb74 NEW_2
	return 0; // 0xb76 Return
}


task_6_event_7(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_int, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); // 0xb77 PushV
	var_24_int = 111; // 0xb78 PushI
	var_25_bool = var_19_bool != var_24_int; // 0xb79 Neq
	if(var_25_bool == 0) goto Label_2940; // 0xb7a JumpB
	return 4; // 0xb7b Return
	
Label_2940:
	var_26_bool = 0; var_27_object = Obj(); // 0xb7c PushV
	var_27_object = var_0_bool; // 0xb7d MovT
	func_4090(var_26_bool, var_27_object); // 0xb7e NEW_2
	var_60_bool = var_26_bool == 0; // 0xb80 Not
	if(var_60_bool == 0) goto Label_2950; // 0xb81 JumpB
	func_2915(); // 0xb83 NEW_2
	return 4; // 0xb85 Return
	
Label_2950:
	GetDirection(var_22_cvector); // 0xb86 Func
	var_63_cvector = CVector(0,0,0); var_64_object = Obj(); // 0xb88 PushV
	var_64_object = var_0_bool; // 0xb89 MovT
	func_3944(var_64_object); // 0xb8a NEW_2
	var_23_cvector = var_63_cvector; // 0xb8b Mov
	var_69_float = 0; var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); // 0xb8d PushV
	var_70_cvector = var_22_cvector; // 0xb8e Mov
	var_71_cvector = var_23_cvector; // 0xb8f Mov
	func_4559(var_69_float, var_70_cvector, var_71_cvector); // 0xb90 NEW_2
	var_93_float = 0.5; // 0xb92 PushF
	var_94_bool = var_69_float < var_93_float; // 0xb93 LT
	if(var_94_bool == 0) goto Label_2969; // 0xb94 JumpB
	var_95_object = Obj(); // 0xb95 PushV
	var_95_object = var_0_bool; // 0xb96 MovT
	func_4240(); // 0xb97 NEW_2
	
Label_2969:
	return 4; // 0xb99 Return
}


task_6_event_6(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	func_2915(); // 0xb9b NEW_2
	func_5274(); // 0xb9e NEW_2
	return 0; // 0xba0 Return
}


task_6_event_1(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_bool = 0; var_21_object = Obj(); // 0xba2 PushV
	var_21_object = var_19_bool; // 0xba3 Mov
	func_4967(var_20_bool, var_21_object); // 0xba4 NEW_2
	if(var_20_bool == 0) goto Label_2990; // 0xba6 JumpB
	func_2915(); // 0xba8 NEW_2
	var_34_object = Obj(); // 0xbaa PushV
	var_34_object = var_19_bool; // 0xbab Mov
	func_4990(var_34_object); // 0xbac NEW_2
	
Label_2990:
	return 0; // 0xbae Return
}


task_8_event_6(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	func_3737(var_18_bool); // 0xe54 NEW_2
	func_5274(); // 0xe57 NEW_2
	return 0; // 0xe59 Return
}


task_8_event_7(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool, var_19_int)
{
	var_20_int = 1; // 0xe8c PushI
	var_21_bool = var_19_int == var_20_int; // 0xe8d Eq
	if(var_21_bool == 0) goto Label_3732; // 0xe8e JumpB
	var_22_object = Obj(); // 0xe8f PushV
	var_22_object = var_1_object; // 0xe90 MovT
	func_4600(var_22_object); // 0xe91 NEW_2
	goto Label_3736; // 0xe93 Jump
	
Label_3736:
	return 0; // 0xe98 Return
	
Label_3732:
	var_27_int = 0; // 0xe94 PushV
	var_27_int = var_19_int; // 0xe95 Mov
	func_3881(var_18_bool, var_19_int, var_27_int); // 0xe96 NEW_2
}


task_8_event_1(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool, var_19_object)
{
	var_20_bool = 0; // 0xea7 PushV
	var_20_bool = 0; // 0xea8 MovB
	var_21_bool = var_1_object == var_19_object; // 0xea9 Eq
	if(var_21_bool == 0) goto Label_3758; // 0xeaa JumpB
	var_22_bool = var_2_object == 0; // 0xeab Not
	if(var_22_bool == 0) goto Label_3758; // 0xeac JumpB
	var_20_bool = 1; // 0xead MovB
	
Label_3758:
	if(var_20_bool == 0) goto Label_3764; // 0xeae JumpB
	var_2_object = 1; // 0xeaf TMovB
	var_23_object = Obj(); // 0xeb0 PushV
	var_23_object = var_19_object; // 0xeb1 Mov
	func_4431(var_23_object); // 0xeb2 NEW_2
	
Label_3764:
	return 0; // 0xeb4 Return
}


task_8_event_2(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool, var_19_object)
{
	var_20_bool = 0; // 0xeb6 PushV
	var_20_bool = 0; // 0xeb7 MovB
	var_21_bool = var_1_object == var_19_object; // 0xeb8 Eq
	if(var_21_bool == 0) goto Label_3773; // 0xeb9 JumpB
	var_22_object = var_2_object; // 0xeba PushT
	if(var_22_object == 0) goto Label_3773; // 0xebb JumpB
	var_20_bool = 1; // 0xebc MovB
	
Label_3773:
	if(var_20_bool == 0) goto Label_3778; // 0xebd JumpB
	var_2_object = 0; // 0xebe TMovB
	var_23_string = "head"; // 0xebf PushS
	UnlookAsync(var_23_string); // 0xec0 Func
	
Label_3778:
	return 0; // 0xec2 Return
}


task_8_event_10(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool, var_19_object)
{
	RequestClearPath(var_19_object); // 0xf3c Func
	return 0; // 0xf3e Return
}


task_8_event_41(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool, var_19_object)
{
	func_3737(var_19_object); // 0xf48 NEW_2
	var_24_object = Obj(); // 0xf4a PushV
	var_24_object = var_19_object; // 0xf4b Mov
	func_4886(); // 0xf4c NEW_2
	return 0; // 0xf4e Return
}


event_16(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool, var_19_object, var_20_string)
{
	var_21_float = 0; var_22_float = 0; // 0x1309 PushV
	var_23_string = "health"; // 0x130a PushS
	var_24_bool = var_20_string == var_23_string; // 0x130b Eq
	if(var_24_bool == 0) goto Label_4885; // 0x130c JumpB
	var_25_string = "health"; // 0x130d PushS
	GetProperty(var_25_string, var_22_float); // 0x130e Func
	var_26_int = 0; // 0x1310 PushI
	var_27_bool = var_22_float <= var_26_int; // 0x1311 LE
	if(var_27_bool == 0) goto Label_4885; // 0x1312 JumpB
	SignalDeath(var_19_object); // 0x1313 Func
	
Label_4885:
	return 2; // 0x1315 Return
}


event_41(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool, var_19_object)
{
	var_20_object = Obj(); // 0x1317 PushV
	var_20_object = var_19_object; // 0x1318 Mov
	func_4865(var_20_object); // 0x1319 NEW_2
	return 0; // 0x131b Return
}


event_22(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool, var_19_object, var_20_int, var_21_float, var_22_float)
{
	var_23_object = Obj(); var_24_int = 0; var_25_float = 0; // 0x131d PushV
	var_23_object = var_19_object; // 0x131e Mov
	var_24_int = var_20_int; // 0x131f Mov
	var_25_float = var_21_float; // 0x1320 Mov
	func_4158(var_23_object, var_24_int, var_25_float); // 0x1321 NEW_2
	return 0; // 0x1323 Return
}


event_43(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool, var_19_object, var_20_int, var_21_float, var_22_float, var_23_cvector, var_24_cvector)
{
	var_25_object = Obj(); var_26_int = 0; var_27_float = 0; var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); // 0x1325 PushV
	var_25_object = var_19_object; // 0x1326 Mov
	var_26_int = var_20_int; // 0x1327 Mov
	var_27_float = var_21_float; // 0x1328 Mov
	var_28_cvector = var_23_cvector; // 0x1329 Mov
	var_29_cvector = var_24_cvector; // 0x132a Mov
	func_4226(var_27_float, var_28_cvector, var_29_cvector); // 0x132b NEW_2
	return 0; // 0x132d Return
}


main(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_bool = 1; // 0x831 PushB
	SensePlayerOnly(var_19_bool); // 0x832 Func
	func_5321(); // 0x835 NEW_2
	func_2112(); // 0x838 NEW_2
	
Label_2106:
	var_2_object = 0; // 0x83a TMovB
	func_2373(var_17_object, var_18_bool); // 0x83c NEW_2
	goto Label_2106; // 0x83e Jump
}


func_0(var_0_bool)
{
	DoTrade(); // 0x1 Func
	var_0_bool = 0; // 0x3 TMovB
	
Label_4:
	var_301_bool = 0; // 0x4 PushV
	func_5319(var_301_bool); // 0x5 NEW_2
	if(var_301_bool == 0) goto Label_15; // 0x7 JumpB
	var_302_string = ""; // 0x8 PushV
	var_302_string = "Neutral"; // 0x9 MovS
	func_4400(var_302_string); // 0xa NEW_2
	lshWaitForAnimEnd(); // 0xc Func
	goto Label_21; // 0xe Jump
	
Label_21:
	var_303_bool = var_0_bool; // 0x15 PushT
	if(var_303_bool == 0) goto Label_24; // 0x16 JumpB
	return 0; // 0x17 Return
	
Label_24:
	goto Label_4; // 0x18 Jump
	
Label_15:
	WaitForAnimEnd(); // 0xf Func
	var_304_string = "all"; // 0x11 PushS
	var_305_string = "idle"; // 0x12 PushS
	PlayAnimation(var_304_string, var_305_string); // 0x13 Func
}


func_4609()
{
	var_473_object = Obj(); var_474_object = Obj(); // 0x1201 PushV
	GetScene(var_474_object); // 0x1202 Func
	var_475_string = "battle"; // 0x1204 PushS
	var_476_object = Obj(); // 0x1205 PushV
	func_4501(var_476_object); // 0x1206 NEW_2
	BroadcastMessage(var_475_string, var_476_object, var_474_object); // 0x1208 Func
	return 2; // 0x120a Return
}


func_4620()
{
	var_27_int = 1000; // 0x120d PushI
	SetReturnValue(var_27_int); // 0x120e ObjFunc
	return 0; // 0x1210 Return
}


func_4625(var_195_bool)
{
	var_197_int = 0; var_198_string = ""; // 0x1212 PushV
	var_198_string = "branch"; // 0x1213 MovS
	func_4576(var_197_int, var_198_string); // 0x1214 NEW_2
	var_199_int = 0; // 0x1216 PushI
	var_200_bool = var_197_int == var_199_int; // 0x1217 Eq
	if(var_200_bool == 0) goto Label_4635; // 0x1218 JumpB
	var_195_bool = 1; // 0x1219 MovB
	return 0; // 0x121a Return
	
Label_4635:
	var_195_bool = 0; // 0x121b MovB
	return 0; // 0x121c Return
}


func_2065(var_44_string)
{
	RemoveRTEnvelope(); // 0x812 Func
	SetDeathState(); // 0x814 Func
	Stop(); // 0x816 Func
	StopAsync(); // 0x818 Func
	StopSecondaryAnimation(); // 0x81a Func
	var_45_string = ""; // 0x81c PushV
	var_45_string = var_44_string; // 0x81d Mov
	func_4460(var_45_string); // 0x81e NEW_2
	var_74_string = "all"; // 0x820 PushS
	PlayAnimation(var_74_string, var_44_string); // 0x821 Func
	WaitForAnimEnd(); // 0x823 Func
	var_75_string = "all"; // 0x825 PushS
	LockAnimationEnd(var_75_string, var_44_string); // 0x826 Func
	RemoveEnvelope(); // 0x828 Func
	return 0; // 0x82a Return
}


func_4114(var_36_object)
{
	var_37_bool = 0; var_38_int = 0; var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_string = ""; var_44_bool = 0; var_45_int = 0; var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); var_50_string = ""; // 0x1012 PushV
	var_51_bool = var_36_object == 0; // 0x1013 NullEq
	if(var_51_bool == 0) goto Label_4118; // 0x1014 JumpB
	return 14; // 0x1015 Return
	
Label_4118:
	IsDead(var_44_bool); // 0x1016 Func
	var_52_bool = var_44_bool; // 0x1018 Push
	if(var_52_bool == 0) goto Label_4123; // 0x1019 JumpB
	return 14; // 0x101a Return
	
Label_4123:
	GetSecondaryAnimationType(var_45_int); // 0x101b Func
	var_53_int = 0; // 0x101d PushI
	var_54_bool = var_45_int < var_53_int; // 0x101e LT
	if(var_54_bool == 0) goto Label_4129; // 0x101f JumpB
	return 14; // 0x1020 Return
	
Label_4129:
	GetPosition(var_46_cvector); // 0x1021 ObjFunc
	GetPosition(var_47_cvector); // 0x1023 Func
	GetDirection(var_48_cvector); // 0x1025 Func
	var_49_cvector = var_47_cvector - var_46_cvector; // 0x1027 Sub2
	var_55_float = GetByIndex(var_49_cvector, 0); // 0x1028 PushE
	var_56_float = GetByIndex(var_48_cvector, 0); // 0x1029 PushE
	var_57_float = var_55_float * var_56_float; // 0x102a Mult
	var_58_float = GetByIndex(var_49_cvector, 2); // 0x102b PushE
	var_59_float = GetByIndex(var_48_cvector, 2); // 0x102c PushE
	var_60_float = var_58_float * var_59_float; // 0x102d Mult
	var_61_int = var_57_float + var_60_float; // 0x102e Add
	var_62_int = 0; // 0x102f PushI
	var_63_bool = var_61_int >= var_62_int; // 0x1030 GE
	if(var_63_bool == 0) goto Label_4148; // 0x1031 JumpB
	var_50_string = "fhit"; // 0x1032 MovS
	goto Label_4149; // 0x1033 Jump
	
Label_4149:
	var_64_string = "hit_react"; // 0x1035 PushS
	var_65_string = "1"; // 0x1036 PushS
	var_66_int = var_50_string + var_65_string; // 0x1037 Add
	var_67_string = "2"; // 0x1038 PushS
	var_68_int = var_50_string + var_67_string; // 0x1039 Add
	var_69_int = -10; // 0x103a PushI
	FadeSecondaryAnimation(var_64_string, var_66_int, var_68_int, var_69_int); // 0x103b Func
	return 14; // 0x103d Return
	
Label_4148:
	var_50_string = "bhit"; // 0x1034 MovS
}


func_3604(var_0_bool, var_367_bool)
{
	var_368_bool = 0; var_369_bool = 0; // 0xe14 PushV
	var_370_string = "IsAttacking"; // 0xe15 PushS
	var_371_int = 1; // 0xe16 PushI
	var_372_bool = IsFuncExist(var_0_bool, var_370_string, var_371_int); // 0xe17 FuncExist
	if(var_372_bool == 0) goto Label_3613; // 0xe18 JumpB
	IsAttacking(var_369_bool); // 0xe19 TObjFunc
	var_367_bool = var_369_bool; // 0xe1b Mov
	return 2; // 0xe1c Return
	
Label_3613:
	var_367_bool = 0; // 0xe1d MovB
	return 2; // 0xe1e Return
}


func_4637(var_220_bool)
{
	var_222_int = 0; var_223_string = ""; // 0x121e PushV
	var_223_string = "branch"; // 0x121f MovS
	func_4576(var_222_int, var_223_string); // 0x1220 NEW_2
	var_224_int = 1; // 0x1222 PushI
	var_225_bool = var_222_int == var_224_int; // 0x1223 Eq
	if(var_225_bool == 0) goto Label_4647; // 0x1224 JumpB
	var_220_bool = 1; // 0x1225 MovB
	return 0; // 0x1226 Return
	
Label_4647:
	var_220_bool = 0; // 0x1227 MovB
	return 0; // 0x1228 Return
}


func_3615(var_2_object, var_5_bool)
{
	var_480_float = 0; var_481_int = 0; var_482_float = 0; var_483_int = 0; // 0xe1f PushV
	var_484_bool = var_2_object == 0; // 0xe20 Not
	if(var_484_bool == 0) goto Label_3619; // 0xe21 JumpB
	return 4; // 0xe22 Return
	
Label_3619:
	var_485_bool = var_5_bool; // 0xe23 PushT
	if(var_485_bool == 0) goto Label_3627; // 0xe24 JumpB
	var_486_int = -1; // 0xe25 PushI
	var_5_bool = var_5_bool + var_486_int; // 0xe26 Add2
	var_487_int = 0; // 0xe27 PushI
	var_488_bool = var_5_bool > var_487_int; // 0xe28 GT
	if(var_488_bool == 0) goto Label_3627; // 0xe29 JumpB
	return 4; // 0xe2a Return
	
Label_3627:
	rand(var_482_float); // 0xe2b Func
	var_489_float = 0; // 0xe2d PushV
	func_3665(var_489_float); // 0xe2e NEW_2
	var_490_bool = var_482_float < var_489_float; // 0xe30 LT
	if(var_490_bool == 0) goto Label_3646; // 0xe31 JumpB
	irand(var_483_int, var_482_float); // 0xe32 Func
	var_491_int = 1; // 0xe34 PushI
	var_483_int = var_483_int + var_491_int; // 0xe35 Add2
	var_492_string = "attack"; // 0xe36 PushS
	var_493_int = var_492_string + var_483_int; // 0xe37 Add
	Speak(var_493_int); // 0xe38 Func
	var_494_int = 0; // 0xe3a PushV
	func_3663(var_494_int); // 0xe3b NEW_2
	var_5_bool = var_494_int; // 0xe3c TMov
	
Label_3646:
	return 4; // 0xe3e Return
}


func_40(var_0_bool, var_44_int, var_45_object)
{
	var_47_object = Obj(); var_48_bool = 0; var_49_int = 0; var_50_bool = 0; var_51_object = Obj(); var_52_bool = 0; var_53_int = 0; var_54_bool = 0; // 0x28 PushV
	var_0_bool = var_45_object; // 0x29 TMov
	var_55_bool = 0; var_56_object = Obj(); var_57_float = 0; // 0x2a PushV
	var_56_object = var_45_object; // 0x2b Mov
	var_57_float = 70.0; // 0x2c MovF
	func_4256(var_56_object, var_57_float); // 0x2d NEW_2
	var_101_bool = var_55_bool == 0; // 0x2f Not
	if(var_101_bool == 0) goto Label_51; // 0x30 JumpB
	var_44_int = -2; // 0x31 MovI
	return 8; // 0x32 Return
	
Label_51:
	CreateDialog(var_51_object); // 0x33 Func
	var_102_int = 0; // 0x35 PushV
	func_5313(var_102_int); // 0x36 NEW_2
	SetNPCName(var_102_int); // 0x38 ObjFunc
	var_103_int = 0; // 0x3a PushV
	func_5311(var_103_int); // 0x3b NEW_2
	SetNPCDescription(var_103_int); // 0x3d ObjFunc
	var_104_string = ""; // 0x3f PushV
	func_5315(var_104_string); // 0x40 NEW_2
	SetPhoto(var_104_string); // 0x42 ObjFunc
	var_105_string = ""; // 0x44 PushV
	func_5317(var_105_string); // 0x45 NEW_2
	SetPhoto2(var_105_string); // 0x47 ObjFunc
	var_106_int = 0; // 0x49 PushV
	func_4695(var_106_int); // 0x4a NEW_2
	SetPlayerName(var_106_int); // 0x4c ObjFunc
	var_53_int = -1; // 0x4e MovI
	IsOverrideActive(var_52_bool); // 0x4f Func
	var_114_bool = var_52_bool; // 0x51 Push
	if(var_114_bool == 0) goto Label_85; // 0x52 JumpB
	var_44_int = -2; // 0x53 MovI
	return 8; // 0x54 Return
	
Label_85:
	DoDialog(var_51_object); // 0x55 Func
	var_115_object = Obj(); var_116_object = Obj(); // 0x57 PushV
	var_115_object = var_45_object; // 0x58 Mov
	var_116_object = var_51_object; // 0x59 Mov
	TaskCall(2); // 0x5a TaskCall
	func_114(var_117_object, var_118_object, var_119_string, var_120_bool, var_115_object, var_116_object); // 0x5b NEW_2
	TaskReturn(); // 0x5c TaskReturn
	IsDialogEnd(var_54_bool); // 0x5e ObjFunc
	
Label_96:
	var_258_bool = var_54_bool == 0; // 0x60 Not
	if(var_258_bool == 0) goto Label_103; // 0x61 JumpB
	sync(); // 0x62 Func
	IsDialogEnd(var_54_bool); // 0x64 ObjFunc
	goto Label_96; // 0x66 Jump
	
Label_103:
	var_259_object = Obj(); // 0x67 PushV
	var_259_object = var_45_object; // 0x68 Mov
	func_4324(); // 0x69 NEW_2
	StopDialog(var_51_object); // 0x6b Func
	GetReturnValue(var_53_int); // 0x6d ObjFunc
	var_44_int = var_53_int; // 0x6f Mov
	return 8; // 0x70 Return
}


func_4649(var_122_bool)
{
	var_124_int = 0; var_125_string = ""; // 0x122a PushV
	var_125_string = "branch"; // 0x122b MovS
	func_4576(var_124_int, var_125_string); // 0x122c NEW_2
	var_128_int = 2; // 0x122e PushI
	var_129_bool = var_124_int == var_128_int; // 0x122f Eq
	if(var_129_bool == 0) goto Label_4659; // 0x1230 JumpB
	var_122_bool = 1; // 0x1231 MovB
	return 0; // 0x1232 Return
	
Label_4659:
	var_122_bool = 0; // 0x1233 MovB
	return 0; // 0x1234 Return
}


func_5172(var_86_int, var_87_object)
{
	var_89_int = 0; var_90_object = Obj(); // 0x1435 PushV
	var_90_object = var_87_object; // 0x1436 Mov
	func_5079(var_89_int, var_90_object); // 0x1437 NEW_2
	var_86_int = var_89_int; // 0x1438 Mov
	return 0; // 0x143a Return
}


func_4661(var_201_bool, var_202_object)
{
	var_203_bool = 0; var_204_object = Obj(); // 0x1236 PushV
	var_204_object = var_202_object; // 0x1237 Mov
	func_4681(var_204_object); // 0x1238 NEW_2
	if(var_203_bool == 0) goto Label_4669; // 0x123a JumpB
	var_201_bool = 1; // 0x123b MovB
	return 0; // 0x123c Return
	
Label_4669:
	var_201_bool = 0; // 0x123d MovB
	return 0; // 0x123e Return
}


func_5179(var_125_object)
{
	var_126_object = Obj(); // 0x143c PushV
	var_126_object = var_125_object; // 0x143d Mov
	func_5089(var_126_object); // 0x143e NEW_2
	return 0; // 0x1440 Return
}


func_4158(var_23_object, var_24_int, var_25_float)
{
	var_26_cvector = CVector(0,0,0); var_27_object = Obj(); var_28_int = 0; var_29_bool = 0; var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_int = 0; var_33_int = 0; var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_object = Obj(); var_37_int = 0; var_38_bool = 0; var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_int = 0; var_42_int = 0; var_43_cvector = CVector(0,0,0); // 0x103e PushV
	var_44_bool = 0; // 0x103f PushV
	var_44_bool = 0; // 0x1040 MovB
	var_45_bool = 0; // 0x1041 PushV
	var_45_bool = 0; // 0x1042 MovB
	var_46_object = var_23_object; // 0x1043 Push
	if(var_46_object == 0) goto Label_4169; // 0x1044 JumpB
	var_47_int = 4; // 0x1045 PushI
	var_48_bool = var_24_int != var_47_int; // 0x1046 Neq
	if(var_48_bool == 0) goto Label_4169; // 0x1047 JumpB
	var_45_bool = 1; // 0x1048 MovB
	
Label_4169:
	if(var_45_bool == 0) goto Label_4174; // 0x1049 JumpB
	var_49_int = 5; // 0x104a PushI
	var_50_bool = var_24_int != var_49_int; // 0x104b Neq
	if(var_50_bool == 0) goto Label_4174; // 0x104c JumpB
	var_44_bool = 1; // 0x104d MovB
	
Label_4174:
	if(var_44_bool == 0) goto Label_4221; // 0x104e JumpB
	var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); // 0x104f PushV
	var_53_cvector = CVector(0,0,0); var_54_object = Obj(); // 0x1050 PushV
	var_54_object = var_23_object; // 0x1051 Mov
	func_3944(var_54_object); // 0x1052 NEW_2
	var_52_cvector = var_53_cvector; // 0x1053 Mov
	func_4507(var_51_cvector, var_52_cvector); // 0x1055 NEW_2
	var_35_cvector = var_51_cvector; // 0x1056 Mov
	CreateVectorVector(var_36_object); // 0x1058 Func
	var_37_int = 1; // 0x105a MovI
	
Label_4187:
	var_64_string = "hit"; // 0x105b PushS
	var_65_int = var_64_string + var_37_int; // 0x105c Add
	GetGeometryLocator(var_65_int, var_38_bool, var_39_cvector, var_40_cvector); // 0x105d Func
	var_66_bool = var_38_bool == 0; // 0x105f Not
	if(var_66_bool == 0) goto Label_4194; // 0x1060 JumpB
	goto Label_4203; // 0x1061 Jump
	
Label_4203:
	size(var_41_int); // 0x106b ObjFunc
	var_67_int = var_41_int; // 0x106d Push
	if(var_67_int == 0) goto Label_4220; // 0x106e JumpB
	irand(var_42_int, var_41_int); // 0x106f Func
	get(var_43_cvector, var_42_int); // 0x1071 ObjFunc
	var_68_object = Obj(); var_69_int = 0; var_70_float = 0; var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); // 0x1073 PushV
	var_68_object = var_23_object; // 0x1074 Mov
	var_69_int = var_24_int; // 0x1075 Mov
	var_70_float = var_25_float; // 0x1076 Mov
	var_71_cvector = var_43_cvector; // 0x1077 Mov
	var_72_cvector = -var_35_cvector; // 0x1078 Neg2
	func_4226(var_70_float, var_71_cvector, var_72_cvector); // 0x1079 NEW_2
	return 18; // 0x107b Return
	
Label_4220:
	var_36_object = 0; // 0x107c SetNull
	
Label_4221:
	var_113_object = Obj(); // 0x107d PushV
	var_113_object = var_23_object; // 0x107e Mov
	func_4114(var_113_object); // 0x107f NEW_2
	return 18; // 0x1081 Return
	
Label_4194:
	var_114_int = var_40_cvector | var_35_cvector; // 0x1062 Or
	var_115_float = 0.70711; // 0x1063 PushF
	var_116_bool = var_114_int >= var_115_float; // 0x1064 GE
	if(var_116_bool == 0) goto Label_4200; // 0x1065 JumpB
	add(var_39_cvector); // 0x1066 ObjFunc
	
Label_4200:
	var_117_int = 1; // 0x1068 PushI
	var_37_int = var_37_int + var_117_int; // 0x1069 Add2
	goto Label_4187; // 0x106a Jump
}


func_3647(var_0_bool)
{
	var_254_object = Obj(); // 0xe3f PushV
	var_254_object = var_0_bool; // 0xe40 MovT
	func_4600(var_254_object); // 0xe41 NEW_2
	return 0; // 0xe43 Return
}


func_2112()
{
	var_38_bool = 0; // 0x840 PushV
	func_4251(var_38_bool); // 0x841 NEW_2
	var_41_bool = var_38_bool == 0; // 0x843 Not
	if(var_41_bool == 0) goto Label_2120; // 0x844 JumpB
	func_5274(); // 0x846 NEW_2
	
Label_2120:
	return 0; // 0x848 Return
}


func_5185(var_28_bool, var_29_object, var_30_object, var_31_float, var_32_bool)
{
	var_33_bool = 0; var_34_bool = 0; // 0x1441 PushV
	var_35_bool = 0; var_36_object = Obj(); var_37_bool = 0; // 0x1442 PushV
	var_36_object = var_30_object; // 0x1443 Mov
	var_37_bool = !var_32_bool; // 0x1444 Not2
	func_5097(var_35_bool, var_36_object, var_37_bool); // 0x1445 NEW_2
	var_73_bool = var_35_bool == 0; // 0x1447 Not
	if(var_73_bool == 0) goto Label_5195; // 0x1448 JumpB
	var_28_bool = 0; // 0x1449 MovB
	return 2; // 0x144a Return
	
Label_5195:
	CanSee(var_34_bool, var_29_object); // 0x144b Func
	var_74_bool = 0; // 0x144d PushV
	var_74_bool = 1; // 0x144e MovB
	var_75_bool = var_34_bool; // 0x144f Push
	if(var_75_bool == 0) goto Label_5209; // 0x1450 JumpB
	var_76_float = 0; var_77_object = Obj(); // 0x1451 PushV
	var_77_object = var_29_object; // 0x1452 Mov
	func_3951(var_77_object); // 0x1453 NEW_2
	var_84_float = var_31_float * var_31_float; // 0x1455 Mult
	var_85_bool = var_76_float <= var_84_float; // 0x1456 LE
	if(var_85_bool == 0) goto Label_5209; // 0x1457 JumpB
	var_74_bool = 0; // 0x1458 MovB
	
Label_5209:
	if(var_74_bool == 0) goto Label_5212; // 0x1459 JumpB
	var_28_bool = 1; // 0x145a MovB
	return 2; // 0x145b Return
	
Label_5212:
	var_28_bool = 0; // 0x145c MovB
	return 2; // 0x145d Return
}


func_4671(var_151_bool, var_152_object)
{
	var_153_bool = 0; var_154_object = Obj(); // 0x1240 PushV
	var_154_object = var_152_object; // 0x1241 Mov
	func_4688(var_154_object); // 0x1242 NEW_2
	if(var_153_bool == 0) goto Label_4679; // 0x1244 JumpB
	var_151_bool = 1; // 0x1245 MovB
	return 0; // 0x1246 Return
	
Label_4679:
	var_151_bool = 0; // 0x1247 MovB
	return 0; // 0x1248 Return
}


func_3652(var_573_int)
{
	var_573_int = 0; // 0xe44 MovI
	return 0; // 0xe45 Return
}


func_2630()
{
	var_69_int = 0; var_70_int = 0; var_71_int = 0; var_72_int = 0; var_73_bool = 0; var_74_float = 0; var_75_bool = 0; var_76_int = 0; var_77_int = 0; var_78_int = 0; var_79_int = 0; var_80_bool = 0; var_81_float = 0; var_82_bool = 0; // 0xa46 PushV
	WaitForAnimEnd(); // 0xa47 Func
	var_83_bool = 0; // 0xa49 PushV
	func_4251(var_83_bool); // 0xa4a NEW_2
	var_84_bool = var_83_bool == 0; // 0xa4c Not
	if(var_84_bool == 0) goto Label_2639; // 0xa4d JumpB
	return 14; // 0xa4e Return
	
Label_2639:
	var_85_int = 0; // 0xa4f PushV
	func_5045(var_85_int); // 0xa50 NEW_2
	var_76_int = var_85_int; // 0xa51 Mov
	var_77_int = 0; // 0xa53 MovI
	
Label_2644:
	var_98_bool = 0; // 0xa54 PushV
	var_98_bool = 0; // 0xa55 MovB
	var_99_int = 5; // 0xa56 PushI
	var_100_bool = var_77_int < var_99_int; // 0xa57 LT
	if(var_100_bool == 0) goto Label_2654; // 0xa58 JumpB
	var_101_bool = 0; // 0xa59 PushV
	func_4251(var_101_bool); // 0xa5a NEW_2
	if(var_101_bool == 0) goto Label_2654; // 0xa5c JumpB
	var_98_bool = 1; // 0xa5d MovB
	
Label_2654:
	if(var_98_bool == 0) goto Label_2706; // 0xa5e JumpB
	var_102_int = 3; // 0xa5f PushI
	irand(var_78_int, var_102_int); // 0xa60 Func
	var_103_int = 0; // 0xa62 PushI
	var_104_bool = var_78_int == var_103_int; // 0xa63 Eq
	if(var_104_bool == 0) goto Label_2678; // 0xa64 JumpB
	var_105_int = var_76_int; // 0xa65 Push
	if(var_105_int == 0) goto Label_2677; // 0xa66 JumpB
	irand(var_79_int, var_76_int); // 0xa67 Func
	var_106_string = "all"; // 0xa69 PushS
	var_107_string = ""; var_108_int = 0; // 0xa6a PushV
	var_108_int = var_79_int; // 0xa6b Mov
	func_5038(var_107_string, var_108_int); // 0xa6c NEW_2
	PlayAnimation(var_106_string, var_107_string); // 0xa6e Func
	WaitForAnimEnd(var_80_bool); // 0xa70 Func
	var_109_bool = var_80_bool == 0; // 0xa72 Not
	if(var_109_bool == 0) goto Label_2677; // 0xa73 JumpB
	goto Label_2706; // 0xa74 Jump
	
Label_2706:
	ResetAAS(); // 0xa92 Func
	return 14; // 0xa94 Return
	
Label_2677:
	goto Label_2695; // 0xa75 Jump
	
Label_2695:
	var_110_bool = 0; // 0xa87 PushV
	func_2709(var_110_bool); // 0xa88 NEW_2
	var_111_bool = var_110_bool == 0; // 0xa8a Not
	if(var_111_bool == 0) goto Label_2701; // 0xa8b JumpB
	goto Label_2706; // 0xa8c Jump
	
Label_2701:
	ResetAAS(); // 0xa8d Func
	var_112_int = 1; // 0xa8f PushI
	var_77_int = var_77_int + var_112_int; // 0xa90 Add2
	goto Label_2644; // 0xa91 Jump
	
Label_2678:
	var_113_int = 1; // 0xa76 PushI
	var_114_bool = var_78_int == var_113_int; // 0xa77 Eq
	if(var_114_bool == 0) goto Label_2692; // 0xa78 JumpB
	var_115_int = 4; // 0xa79 PushI
	rand(var_81_float, var_115_int); // 0xa7a Func
	var_116_int = 1; // 0xa7c PushI
	var_117_int = var_81_float + var_116_int; // 0xa7d Add
	Sleep(var_117_int, var_82_bool); // 0xa7e Func
	var_118_bool = var_82_bool == 0; // 0xa80 Not
	if(var_118_bool == 0) goto Label_2691; // 0xa81 JumpB
	goto Label_2706; // 0xa82 Jump
	
Label_2691:
	goto Label_2695; // 0xa83 Jump
	
Label_2692:
	var_119_int = var_77_int; // 0xa84 Push
	if(var_119_int == 0) goto Label_2695; // 0xa85 JumpB
	goto Label_2706; // 0xa86 Jump
}


func_3654()
{
	var_373_string = ""; // 0xe46 PushV
	var_373_string = "attack_stay"; // 0xe47 MovS
	func_4460(var_373_string); // 0xe48 NEW_2
	return 0; // 0xe4a Return
}


func_4681(var_203_bool)
{
	var_205_int = 0; // 0x124a PushV
	func_4591(var_205_int); // 0x124b NEW_2
	var_206_int = 6; // 0x124d PushI
	var_203_bool = var_205_int <= var_206_int; // 0x124e LE2
	return 0; // 0x124f Return
}


func_3659()
{
	return 0; // 0xe4c Return
}


func_3661(var_598_bool)
{
	var_598_bool = 1; // 0xe4d MovB
	return 0; // 0xe4e Return
}


func_3663(var_494_int)
{
	var_494_int = 1; // 0xe4f MovI
	return 0; // 0xe50 Return
}


func_4688(var_153_bool)
{
	var_155_int = 0; // 0x1251 PushV
	func_4591(var_155_int); // 0x1252 NEW_2
	var_161_int = 1; // 0x1254 PushI
	var_153_bool = var_155_int == var_161_int; // 0x1255 Eq2
	return 0; // 0x1256 Return
}


func_3665(var_489_float)
{
	var_489_float = 0.5; // 0xe51 MovF
	return 0; // 0xe52 Return
}


func_4695(var_106_int)
{
	var_107_int = 0; var_108_int = 0; // 0x1257 PushV
	var_109_string = "branch"; // 0x1258 PushS
	GetVariable(var_109_string, var_108_int); // 0x1259 Func
	var_110_int = 0; // 0x125b PushI
	var_111_bool = var_108_int == var_110_int; // 0x125c Eq
	if(var_111_bool == 0) goto Label_4705; // 0x125d JumpB
	var_106_int = 1; // 0x125e MovI
	return 2; // 0x125f Return
	
Label_4705:
	var_112_int = 1; // 0x1261 PushI
	var_113_bool = var_108_int == var_112_int; // 0x1262 Eq
	if(var_113_bool == 0) goto Label_4710; // 0x1263 JumpB
	var_106_int = 2; // 0x1264 MovI
	return 2; // 0x1265 Return
	
Label_4710:
	var_106_int = 3; // 0x1266 MovI
	return 2; // 0x1267 Return
}


func_3674(var_2_object, var_261_bool, var_262_object, var_263_float, var_264_float, var_265_bool, var_266_bool)
{
	var_270_bool = 0; var_271_bool = 0; var_272_bool = 0; var_273_bool = 0; // 0xe5a PushV
	var_274_object = Obj(); // 0xe5b PushV
	var_274_object = var_262_object; // 0xe5c Mov
	func_4600(var_274_object); // 0xe5d NEW_2
	var_275_int = 1; // 0xe5f PushI
	var_276_int = 5; // 0xe60 PushI
	SetTimer(var_275_int, var_276_int); // 0xe61 Func
	CanSee(var_272_bool, var_262_object); // 0xe63 Func
	var_277_bool = var_272_bool; // 0xe65 Push
	if(var_277_bool == 0) goto Label_3693; // 0xe66 JumpB
	var_2_object = 1; // 0xe67 TMovB
	var_278_object = Obj(); // 0xe68 PushV
	var_278_object = var_262_object; // 0xe69 Mov
	func_4431(var_278_object); // 0xe6a NEW_2
	goto Label_3694; // 0xe6c Jump
	
Label_3694:
	var_279_bool = 0; var_280_object = Obj(); // 0xe6e PushV
	var_280_object = var_262_object; // 0xe6f Mov
	func_3959(var_279_bool, var_280_object); // 0xe70 NEW_2
	if(var_279_bool == 0) goto Label_3704; // 0xe72 JumpB
	var_283_object = Obj(); // 0xe73 PushV
	func_4501(var_283_object); // 0xe74 NEW_2
	SendPlayerEnemy(var_262_object, var_283_object); // 0xe76 Func
	
Label_3704:
	var_284_bool = 0; var_285_object = Obj(); var_286_float = 0; var_287_float = 0; var_288_bool = 0; var_289_bool = 0; // 0xe78 PushV
	var_285_object = var_262_object; // 0xe79 Mov
	var_286_float = var_263_float; // 0xe7a Mov
	var_287_float = var_264_float; // 0xe7b Mov
	var_288_bool = var_265_bool; // 0xe7c Mov
	var_289_bool = var_266_bool; // 0xe7d Mov
	func_3779(var_272_bool, var_273_bool, var_284_bool, var_285_object, var_286_float, var_287_float, var_288_bool, var_289_bool); // 0xe7e NEW_2
	var_273_bool = var_284_bool; // 0xe7f Mov
	var_335_object = var_2_object; // 0xe81 PushT
	if(var_335_object == 0) goto Label_3718; // 0xe82 JumpB
	var_336_string = "head"; // 0xe83 PushS
	UnlookAsync(var_336_string); // 0xe84 Func
	
Label_3718:
	var_337_int = 1; // 0xe86 PushI
	KillTimer(var_337_int); // 0xe87 Func
	var_261_bool = var_273_bool; // 0xe89 Mov
	return 4; // 0xe8a Return
	
Label_3693:
	var_2_object = 0; // 0xe6d TMovB
}


func_5214(var_22_int)
{
	var_22_int = 0; // 0x145f MovI
	return 0; // 0x1460 Return
}


func_5217()
{
	return 0; // 0x1462 Return
}


func_5219(var_129_int, var_130_string, var_131_object)
{
	var_132_string = "killme"; // 0x1464 PushS
	var_133_bool = var_130_string == var_132_string; // 0x1465 Eq
	if(var_133_bool == 0) goto Label_5229; // 0x1466 JumpB
	var_134_int = 0; var_135_object = Obj(); // 0x1467 PushV
	var_135_object = var_131_object; // 0x1468 Mov
	func_5241(var_134_int, var_135_object); // 0x1469 NEW_2
	var_129_int = var_134_int; // 0x146a Mov
	return 0; // 0x146c Return
	
Label_5229:
	var_129_int = 0; // 0x146d MovI
	return 0; // 0x146e Return
}


func_4712(var_163_int)
{
	var_164_int = 0; var_165_int = 0; // 0x1268 PushV
	var_166_string = "branch"; // 0x1269 PushS
	GetVariable(var_166_string, var_165_int); // 0x126a Func
	var_163_int = var_165_int; // 0x126c Mov
	return 2; // 0x126d Return
}


func_4718(var_36_object)
{
	var_37_int = 0; // 0x126f PushV
	func_4712(var_37_int); // 0x1270 NEW_2
	var_41_int = 1; // 0x1272 PushI
	var_42_bool = var_37_int == var_41_int; // 0x1273 Eq
	if(var_42_bool == 0) goto Label_4728; // 0x1274 JumpB
	WorkWithCorpse(var_36_object); // 0x1275 Func
	goto Label_4730; // 0x1277 Jump
	
Label_4730:
	return 0; // 0x127a Return
	
Label_4728:
	Barter(var_36_object); // 0x1278 Func
}


func_5231(var_177_string, var_178_object)
{
	var_179_string = "killme"; // 0x1470 PushS
	var_180_bool = var_177_string == var_179_string; // 0x1471 Eq
	if(var_180_bool == 0) goto Label_5240; // 0x1472 JumpB
	var_181_object = Obj(); // 0x1473 PushV
	var_181_object = var_178_object; // 0x1474 Mov
	func_5259(var_181_object); // 0x1475 NEW_2
	return 0; // 0x1477 Return
	
Label_5240:
	return 0; // 0x1478 Return
}


func_114(var_0_bool, var_1_object, var_2_object, var_3_object, var_115_object, var_116_object)
{
	var_0_bool = var_116_object; // 0x73 TMov
	var_1_object = var_115_object; // 0x74 TMov
	var_3_object = 0; // 0x75 TMovB
	var_121_int = 1; // 0x76 PushI
	if(var_121_int == 0) goto Label_295; // 0x77 JumpB
	var_122_bool = 0; var_123_object = Obj(); // 0x78 PushV
	var_123_object = var_1_object; // 0x79 MovT
	func_4649(var_123_object); // 0x7a NEW_2
	if(var_122_bool == 0) goto Label_166; // 0x7c JumpB
	var_130_string = ""; // 0x7d PushV
	var_130_string = "Neutral"; // 0x7e MovS
	func_325(var_116_object, var_130_string); // 0x7f NEW_2
	var_147_int = 543012; // 0x81 PushI
	SetMessage(var_147_int); // 0x82 TObjFunc
	ClearReplies(); // 0x84 TObjFunc
	var_148_int = 536643; // 0x86 PushI
	var_149_int = -1; // 0x87 PushI
	var_150_int = 38471; // 0x88 PushI
	AddReply(var_148_int, var_149_int, var_150_int); // 0x89 TObjFunc
	var_151_bool = 0; var_152_object = Obj(); // 0x8b PushV
	var_152_object = var_1_object; // 0x8c MovT
	func_4671(var_151_bool, var_152_object); // 0x8d NEW_2
	if(var_151_bool == 0) goto Label_149; // 0x8f JumpB
	var_162_int = 543014; // 0x90 PushI
	var_163_int = -1; // 0x91 PushI
	var_164_int = 45466; // 0x92 PushI
	AddReply(var_162_int, var_163_int, var_164_int); // 0x93 TObjFunc
	
Label_149:
	var_165_bool = 0; var_166_object = Obj(); // 0x95 PushV
	var_166_object = var_1_object; // 0x96 MovT
	func_4671(var_165_bool, var_166_object); // 0x97 NEW_2
	var_167_bool = var_165_bool == 0; // 0x99 Not
	if(var_167_bool == 0) goto Label_160; // 0x9a JumpB
	var_168_int = 543027; // 0x9b PushI
	var_169_int = -1; // 0x9c PushI
	var_170_int = 45479; // 0x9d PushI
	AddReply(var_168_int, var_169_int, var_170_int); // 0x9e TObjFunc
	
Label_160:
	var_171_int = 536852; // 0xa0 PushI
	var_172_int = -1; // 0xa1 PushI
	var_173_int = 38688; // 0xa2 PushI
	AddReply(var_171_int, var_172_int, var_173_int); // 0xa3 TObjFunc
	goto Label_295; // 0xa5 Jump
	
Label_295:
	var_174_bool = 0; // 0x127 PushV
	func_5319(var_174_bool); // 0x128 NEW_2
	if(var_174_bool == 0) goto Label_310; // 0x12a JumpB
	
Label_299:
	lshWaitForAnimEnd(); // 0x12b Func
	var_175_object = var_3_object; // 0x12d PushT
	if(var_175_object == 0) goto Label_304; // 0x12e JumpB
	goto Label_309; // 0x12f Jump
	
Label_309:
	goto Label_324; // 0x135 Jump
	
Label_324:
	return 0; // 0x144 Return
	
Label_304:
	var_176_string = ""; // 0x130 PushV
	var_176_string = var_2_object; // 0x131 MovT
	func_4400(var_176_string); // 0x132 NEW_2
	goto Label_299; // 0x134 Jump
	
Label_310:
	var_187_string = "all"; // 0x136 PushS
	var_188_string = "idle"; // 0x137 PushS
	PlayAnimation(var_187_string, var_188_string); // 0x138 Func
	
Label_314:
	WaitForAnimEnd(); // 0x13a Func
	var_189_object = var_3_object; // 0x13c PushT
	if(var_189_object == 0) goto Label_319; // 0x13d JumpB
	goto Label_324; // 0x13e Jump
	
Label_319:
	var_190_string = "all"; // 0x13f PushS
	var_191_string = "idle"; // 0x140 PushS
	PlayAnimation(var_190_string, var_191_string); // 0x141 Func
	goto Label_314; // 0x143 Jump
	
Label_166:
	var_192_string = ""; // 0xa6 PushV
	var_192_string = "Neutral"; // 0xa7 MovS
	func_325(var_116_object, var_192_string); // 0xa8 NEW_2
	var_193_int = 536636; // 0xaa PushI
	SetMessage(var_193_int); // 0xab TObjFunc
	ClearReplies(); // 0xad TObjFunc
	var_194_bool = 0; // 0xaf PushV
	var_194_bool = 0; // 0xb0 MovB
	var_195_bool = 0; var_196_object = Obj(); // 0xb1 PushV
	var_196_object = var_1_object; // 0xb2 MovT
	func_4625(var_196_object); // 0xb3 NEW_2
	if(var_195_bool == 0) goto Label_188; // 0xb5 JumpB
	var_201_bool = 0; var_202_object = Obj(); // 0xb6 PushV
	var_202_object = var_1_object; // 0xb7 MovT
	func_4661(var_201_bool, var_202_object); // 0xb8 NEW_2
	if(var_201_bool == 0) goto Label_188; // 0xba JumpB
	var_194_bool = 1; // 0xbb MovB
	
Label_188:
	if(var_194_bool == 0) goto Label_194; // 0xbc JumpB
	var_207_int = 536638; // 0xbd PushI
	var_208_int = -1; // 0xbe PushI
	var_209_int = 38466; // 0xbf PushI
	AddReply(var_207_int, var_208_int, var_209_int); // 0xc0 TObjFunc
	
Label_194:
	var_210_bool = 0; // 0xc2 PushV
	var_210_bool = 0; // 0xc3 MovB
	var_211_bool = 0; var_212_object = Obj(); // 0xc4 PushV
	var_212_object = var_1_object; // 0xc5 MovT
	func_4625(var_212_object); // 0xc6 NEW_2
	if(var_211_bool == 0) goto Label_208; // 0xc8 JumpB
	var_213_bool = 0; var_214_object = Obj(); // 0xc9 PushV
	var_214_object = var_1_object; // 0xca MovT
	func_4661(var_213_bool, var_214_object); // 0xcb NEW_2
	var_215_bool = var_213_bool == 0; // 0xcd Not
	if(var_215_bool == 0) goto Label_208; // 0xce JumpB
	var_210_bool = 1; // 0xcf MovB
	
Label_208:
	if(var_210_bool == 0) goto Label_214; // 0xd0 JumpB
	var_216_int = 536644; // 0xd1 PushI
	var_217_int = -1; // 0xd2 PushI
	var_218_int = 38472; // 0xd3 PushI
	AddReply(var_216_int, var_217_int, var_218_int); // 0xd4 TObjFunc
	
Label_214:
	var_219_bool = 0; // 0xd6 PushV
	var_219_bool = 0; // 0xd7 MovB
	var_220_bool = 0; var_221_object = Obj(); // 0xd8 PushV
	var_221_object = var_1_object; // 0xd9 MovT
	func_4637(var_221_object); // 0xda NEW_2
	if(var_220_bool == 0) goto Label_227; // 0xdc JumpB
	var_226_bool = 0; var_227_object = Obj(); // 0xdd PushV
	var_227_object = var_1_object; // 0xde MovT
	func_4661(var_226_bool, var_227_object); // 0xdf NEW_2
	if(var_226_bool == 0) goto Label_227; // 0xe1 JumpB
	var_219_bool = 1; // 0xe2 MovB
	
Label_227:
	if(var_219_bool == 0) goto Label_233; // 0xe3 JumpB
	var_228_int = 536639; // 0xe4 PushI
	var_229_int = 38468; // 0xe5 PushI
	var_230_int = 38467; // 0xe6 PushI
	AddReply(var_228_int, var_229_int, var_230_int); // 0xe7 TObjFunc
	
Label_233:
	var_231_bool = 0; // 0xe9 PushV
	var_231_bool = 0; // 0xea MovB
	var_232_bool = 0; var_233_object = Obj(); // 0xeb PushV
	var_233_object = var_1_object; // 0xec MovT
	func_4637(var_233_object); // 0xed NEW_2
	if(var_232_bool == 0) goto Label_247; // 0xef JumpB
	var_234_bool = 0; var_235_object = Obj(); // 0xf0 PushV
	var_235_object = var_1_object; // 0xf1 MovT
	func_4661(var_234_bool, var_235_object); // 0xf2 NEW_2
	var_236_bool = var_234_bool == 0; // 0xf4 Not
	if(var_236_bool == 0) goto Label_247; // 0xf5 JumpB
	var_231_bool = 1; // 0xf6 MovB
	
Label_247:
	if(var_231_bool == 0) goto Label_253; // 0xf7 JumpB
	var_237_int = 536642; // 0xf8 PushI
	var_238_int = -1; // 0xf9 PushI
	var_239_int = 38470; // 0xfa PushI
	AddReply(var_237_int, var_238_int, var_239_int); // 0xfb TObjFunc
	
Label_253:
	var_240_bool = 0; // 0xfd PushV
	var_240_bool = 0; // 0xfe MovB
	var_241_bool = 0; var_242_object = Obj(); // 0xff PushV
	var_242_object = var_1_object; // 0x100 MovT
	func_4671(var_241_bool, var_242_object); // 0x101 NEW_2
	if(var_241_bool == 0) goto Label_266; // 0x103 JumpB
	var_243_bool = 0; var_244_object = Obj(); // 0x104 PushV
	var_244_object = var_1_object; // 0x105 MovT
	func_4625(var_244_object); // 0x106 NEW_2
	if(var_243_bool == 0) goto Label_266; // 0x108 JumpB
	var_240_bool = 1; // 0x109 MovB
	
Label_266:
	if(var_240_bool == 0) goto Label_272; // 0x10a JumpB
	var_245_int = 536645; // 0x10b PushI
	var_246_int = 38474; // 0x10c PushI
	var_247_int = 38473; // 0x10d PushI
	AddReply(var_245_int, var_246_int, var_247_int); // 0x10e TObjFunc
	
Label_272:
	var_248_bool = 0; var_249_object = Obj(); // 0x110 PushV
	var_249_object = var_1_object; // 0x111 MovT
	func_4625(var_249_object); // 0x112 NEW_2
	if(var_248_bool == 0) goto Label_282; // 0x114 JumpB
	var_250_int = 536850; // 0x115 PushI
	var_251_int = -1; // 0x116 PushI
	var_252_int = 38686; // 0x117 PushI
	AddReply(var_250_int, var_251_int, var_252_int); // 0x118 TObjFunc
	
Label_282:
	var_253_bool = 0; var_254_object = Obj(); // 0x11a PushV
	var_254_object = var_1_object; // 0x11b MovT
	func_4637(var_254_object); // 0x11c NEW_2
	if(var_253_bool == 0) goto Label_292; // 0x11e JumpB
	var_255_int = 536851; // 0x11f PushI
	var_256_int = -1; // 0x120 PushI
	var_257_int = 38687; // 0x121 PushI
	AddReply(var_255_int, var_256_int, var_257_int); // 0x122 TObjFunc
	
Label_292:
	goto Label_295; // 0x124 Jump
}


func_5241(var_134_int, var_135_object)
{
	var_136_bool = 0; var_137_object = Obj(); // 0x147a PushV
	var_137_object = var_135_object; // 0x147b Mov
	func_4090(var_136_bool, var_137_object); // 0x147c NEW_2
	var_170_bool = var_136_bool == 0; // 0x147e Not
	if(var_170_bool == 0) goto Label_5250; // 0x147f JumpB
	var_134_int = 0; // 0x1480 MovI
	return 0; // 0x1481 Return
	
Label_5250:
	var_171_bool = 0; var_172_object = Obj(); // 0x1482 PushV
	var_172_object = var_135_object; // 0x1483 Mov
	func_5370(var_172_object); // 0x1484 NEW_2
	if(var_171_bool == 0) goto Label_5257; // 0x1486 JumpB
	var_134_int = 2; // 0x1487 MovI
	goto Label_5258; // 0x1488 Jump
	
Label_5258:
	return 0; // 0x148a Return
	
Label_5257:
	var_134_int = 0; // 0x1489 MovI
}


func_4731(var_115_int, var_116_int)
{
	var_126_int = 0; var_127_bool = 0; var_128_int = 0; var_129_bool = 0; // 0x127b PushV
	var_130_bool = var_115_int > var_116_int; // 0x127c GT
	if(var_130_bool == 0) goto Label_4738; // 0x127d JumpB
	var_131_string = "GenerateMoney: iMin > iMax"; // 0x127e PushS
	Trace(var_131_string); // 0x127f Func
	return 4; // 0x1281 Return
	
Label_4738:
	var_128_int = 0; // 0x1282 MovI
	var_132_bool = var_115_int != var_116_int; // 0x1283 Neq
	if(var_132_bool == 0) goto Label_4745; // 0x1284 JumpB
	var_133_int = var_116_int - var_115_int; // 0x1285 Sub
	irand(var_128_int, var_133_int); // 0x1286 Func
	goto Label_4749; // 0x1288 Jump
	
Label_4749:
	var_128_int = var_128_int + var_115_int; // 0x128d Add2
	var_134_int = 0; // 0x128e PushI
	var_135_bool = var_128_int == var_134_int; // 0x128f Eq
	if(var_135_bool == 0) goto Label_4754; // 0x1290 JumpB
	return 4; // 0x1291 Return
	
Label_4754:
	var_136_int = 0; var_137_string = ""; // 0x1292 PushV
	var_137_string = "Money"; // 0x1293 MovS
	func_4860(var_136_int, var_137_string); // 0x1294 NEW_2
	var_140_int = 0; // 0x1296 PushI
	AddItem(var_129_bool, var_136_int, var_140_int, var_128_int); // 0x1297 Func
	return 4; // 0x1299 Return
	
Label_4745:
	var_141_int = 0; // 0x1289 PushI
	var_142_bool = var_115_int == var_141_int; // 0x128a Eq
	if(var_142_bool == 0) goto Label_4749; // 0x128b JumpB
	return 4; // 0x128c Return
}


func_4226(var_25_object, var_28_cvector, var_29_cvector)
{
	var_30_object = Obj(); var_31_object = Obj(); var_32_object = Obj(); var_33_object = Obj(); // 0x1082 PushV
	GetScene(var_32_object); // 0x1083 Func
	var_34_string = "scripted"; // 0x1085 PushS
	var_35_string = "blood_dir.xml"; // 0x1086 PushS
	AddActorByType(var_33_object, var_34_string, var_32_object, var_28_cvector, var_29_cvector, var_35_string); // 0x1087 Func
	var_36_object = Obj(); // 0x1089 PushV
	var_36_object = var_25_object; // 0x108a Mov
	func_4114(var_36_object); // 0x108b NEW_2
	return 4; // 0x108d Return
}


func_5259(var_181_object)
{
	var_182_object = Obj(); // 0x148c PushV
	var_182_object = var_181_object; // 0x148d Mov
	func_5089(var_182_object); // 0x148e NEW_2
	return 0; // 0x1490 Return
}


func_4240()
{
	var_96_cvector = CVector(0,0,0); var_97_cvector = CVector(0,0,0); var_98_cvector = CVector(0,0,0); var_99_cvector = CVector(0,0,0); var_100_cvector = CVector(0,0,0); var_101_cvector = CVector(0,0,0); // 0x1090 PushV
	GetPosition(var_99_cvector); // 0x1091 ObjFunc
	GetPosition(var_100_cvector); // 0x1093 Func
	var_101_cvector = var_99_cvector - var_100_cvector; // 0x1095 Sub2
	var_102_float = GetByIndex(var_101_cvector, 0); // 0x1096 PushE
	var_103_float = GetByIndex(var_101_cvector, 2); // 0x1097 PushE
	RotateAsync(var_102_float, var_103_float); // 0x1098 Func
	return 6; // 0x109a Return
}


func_5265(var_22_int)
{
	var_22_int = 2; // 0x1492 MovI
	return 0; // 0x1493 Return
}


func_5268(var_30_object)
{
	var_31_object = Obj(); // 0x1495 PushV
	var_31_object = var_30_object; // 0x1496 Mov
	func_5328(var_30_object, var_31_object); // 0x1497 NEW_2
	return 0; // 0x1499 Return
}


func_2709(var_110_bool)
{
	var_110_bool = 1; // 0xa95 MovB
	return 0; // 0xa96 Return
}


func_2711()
{
	StopAnimation(); // 0xa97 Func
	StopGroup0(); // 0xa99 Func
	return 0; // 0xa9b Return
}


func_3737(var_2_object)
{
	var_20_int = 1; // 0xe99 PushI
	KillTimer(var_20_int); // 0xe9a Func
	var_21_object = var_2_object; // 0xe9c PushT
	if(var_21_object == 0) goto Label_3746; // 0xe9d JumpB
	var_2_object = 0; // 0xe9e TMovB
	var_22_string = "head"; // 0xe9f PushS
	UnlookAsync(var_22_string); // 0xea0 Func
	
Label_3746:
	func_3903(var_19_object); // 0xea3 NEW_2
	return 0; // 0xea5 Return
}


func_5274()
{
	return 0; // 0x149a Return
}


func_4251(var_38_bool)
{
	var_39_bool = 0; var_40_bool = 0; // 0x109b PushV
	IsLoaded(var_40_bool); // 0x109c Func
	var_38_bool = var_40_bool; // 0x109e Mov
	return 2; // 0x109f Return
}


func_4762(var_169_string)
{
	var_170_object = Obj(); var_171_int = 0; var_172_bool = 0; var_173_object = Obj(); var_174_int = 0; var_175_bool = 0; // 0x129a PushV
	CreateInvItem(var_173_object); // 0x129b Func
	SetItemName(var_169_string); // 0x129d ObjFunc
	var_176_string = "Organ"; // 0x129f PushS
	var_177_int = 1; // 0x12a0 PushI
	SetProperty(var_176_string, var_177_int); // 0x12a1 ObjFunc
	GetItemID(var_174_int); // 0x12a3 ObjFunc
	var_178_int = 0; // 0x12a5 PushI
	var_179_int = 1; // 0x12a6 PushI
	AddItem(var_175_bool, var_173_object, var_178_int, var_179_int); // 0x12a7 Func
	return 6; // 0x12a9 Return
}


func_5275(var_25_bool)
{
	var_25_bool = 0; // 0x149c MovB
	return 0; // 0x149d Return
}


func_5278()
{
	return 0; // 0x149f Return
}


func_2716(var_0_bool, var_62_object)
{
	var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); var_66_bool = 0; var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0); var_69_bool = 0; // 0xa9c PushV
	var_0_bool = var_62_object; // 0xa9d TMov
	func_2767(var_69_bool); // 0xa9f NEW_2
	GetDirection(var_67_cvector); // 0xaa1 Func
	var_77_cvector = CVector(0,0,0); var_78_object = Obj(); // 0xaa3 PushV
	var_78_object = var_0_bool; // 0xaa4 MovT
	func_3944(var_78_object); // 0xaa5 NEW_2
	var_68_cvector = var_77_cvector; // 0xaa6 Mov
	var_83_float = 0; var_84_cvector = CVector(0,0,0); var_85_cvector = CVector(0,0,0); // 0xaa8 PushV
	var_84_cvector = var_67_cvector; // 0xaa9 Mov
	var_85_cvector = var_68_cvector; // 0xaaa Mov
	func_4559(var_83_float, var_84_cvector, var_85_cvector); // 0xaab NEW_2
	var_107_int = 0; // 0xaad PushI
	var_108_bool = var_83_float < var_107_int; // 0xaae LT
	if(var_108_bool == 0) goto Label_2742; // 0xaaf JumpB
	var_109_object = Obj(); // 0xab0 PushV
	var_109_object = var_0_bool; // 0xab1 MovT
	func_4240(); // 0xab2 NEW_2
	var_69_bool = 1; // 0xab4 MovB
	goto Label_2745; // 0xab5 Jump
	
Label_2745:
	var_118_bool = var_69_bool; // 0xab9 Push
	if(var_118_bool == 0) goto Label_2761; // 0xaba JumpB
	var_119_object = Obj(); // 0xabb PushV
	var_119_object = var_0_bool; // 0xabc MovT
	func_4240(); // 0xabd NEW_2
	var_120_int = 111; // 0xabf PushI
	var_121_float = 0.5; // 0xac0 PushF
	SetTimer(var_120_int, var_121_float); // 0xac1 Func
	var_122_float = 5.0; // 0xac3 PushF
	Sleep(var_122_float); // 0xac4 Func
	var_123_int = 111; // 0xac6 PushI
	KillTimer(var_123_int); // 0xac7 Func
	
Label_2761:
	StopAsync(); // 0xac9 Func
	var_124_string = "head"; // 0xacb PushS
	UnlookAsync(var_124_string); // 0xacc Func
	return 6; // 0xace Return
	
Label_2742:
	var_125_float = 1.5; // 0xab6 PushF
	Sleep(var_125_float, var_69_bool); // 0xab7 Func
}


func_4256(var_55_bool, var_57_float)
{
	var_58_float = 0; var_59_cvector = CVector(0,0,0); var_60_cvector = CVector(0,0,0); var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0); var_65_bool = 0; var_66_bool = 0; var_67_float = 0; var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); var_73_cvector = CVector(0,0,0); var_74_bool = 0; var_75_bool = 0; // 0x10a0 PushV
	GetPosition(var_68_cvector); // 0x10a1 ObjFunc
	GetEyesHeight(var_67_float); // 0x10a3 ObjFunc
	var_76_float = GetByIndex(var_68_cvector, 1); // 0x10a5 PushE
	var_76_float = var_76_float + var_67_float; // 0x10a6 Add2
	SetByIndex(var_68_cvector, 1) = var_76_float; // 0x10a7 PopE
	GetPosition(var_69_cvector); // 0x10a8 Func
	GetEyesHeight(var_67_float); // 0x10aa Func
	var_77_float = GetByIndex(var_69_cvector, 1); // 0x10ac PushE
	var_77_float = var_77_float + var_67_float; // 0x10ad Add2
	SetByIndex(var_69_cvector, 1) = var_77_float; // 0x10ae PopE
	var_70_cvector = var_68_cvector - var_69_cvector; // 0x10af Sub2
	var_78_float = GetByIndex(var_70_cvector, 1); // 0x10b0 PushE
	var_78_float = 0; // 0x10b1 MovI
	SetByIndex(var_70_cvector, 1) = var_78_float; // 0x10b2 PopE
	var_79_int = var_70_cvector | var_70_cvector; // 0x10b3 Or
	var_80_float = sqrt(var_79_int); // 0x10b4 Sqrt
	var_70_cvector = var_70_cvector / var_70_cvector; // 0x10b5 Div2
	var_71_cvector = -var_70_cvector; // 0x10b6 Neg2
	var_81_float = var_70_cvector * var_57_float; // 0x10b7 Mult
	var_82_cvector = CVector(0,0,0); var_83_cvector = CVector(0,0,0); // 0x10b8 PushV
	var_84_cvector = CVector(0.0, 1.0, 0.0); // 0x10b9 PushVec
	var_83_cvector = var_71_cvector ^ var_84_cvector; // 0x10ba Xor2
	func_4507(var_82_cvector, var_83_cvector); // 0x10bb NEW_2
	var_90_int = 25; // 0x10bd PushI
	var_91_float = var_82_cvector * var_90_int; // 0x10be Mult
	var_92_int = var_81_float + var_91_float; // 0x10bf Add
	var_93_cvector = CVector(0.0, 10.0, 0.0); // 0x10c0 PushVec
	var_72_cvector = var_92_int - var_93_cvector; // 0x10c1 Sub2
	var_73_cvector = var_69_cvector + var_72_cvector; // 0x10c2 Add2
	IsOverrideActive(var_74_bool); // 0x10c3 Func
	var_94_bool = var_74_bool; // 0x10c5 Push
	if(var_94_bool == 0) goto Label_4297; // 0x10c6 JumpB
	var_55_bool = 0; // 0x10c7 MovB
	return 18; // 0x10c8 Return
	
Label_4297:
	StopWorld(); // 0x10c9 Func
	CameraTransit(var_73_cvector, var_71_cvector); // 0x10cb Func
	var_95_float = GetByIndex(var_72_cvector, 0); // 0x10cd PushE
	var_96_float = GetByIndex(var_72_cvector, 2); // 0x10ce PushE
	Rotate(var_95_float, var_96_float); // 0x10cf Func
	var_97_bool = 0; // 0x10d1 PushV
	func_5319(var_97_bool); // 0x10d2 NEW_2
	if(var_97_bool == 0) goto Label_4310; // 0x10d4 JumpB
	goto Label_4318; // 0x10d5 Jump
	
Label_4318:
	CameraWaitForPlayFinish(); // 0x10de Func
	ResumeWorld(); // 0x10e0 Func
	var_55_bool = 1; // 0x10e2 MovB
	return 18; // 0x10e3 Return
	
Label_4310:
	var_98_string = "head"; // 0x10d6 PushS
	HasAnimationTrack(var_75_bool, var_98_string); // 0x10d7 Func
	var_99_bool = var_75_bool; // 0x10d9 Push
	if(var_99_bool == 0) goto Label_4318; // 0x10da JumpB
	var_100_string = "head"; // 0x10db PushS
	LookAsyncCamera(var_100_string); // 0x10dc Func
}


func_5280(var_32_bool, var_33_object)
{
	var_34_bool = 0; var_35_bool = 0; // 0x14a0 PushV
	CanSee(var_35_bool, var_33_object); // 0x14a1 Func
	var_32_bool = 1; // 0x14a3 MovB
	var_36_bool = var_35_bool; // 0x14a4 Push
	if(var_36_bool == 0) goto Label_5294; // 0x14a5 JumpB
	var_37_float = 0; var_38_object = Obj(); // 0x14a6 PushV
	var_38_object = var_33_object; // 0x14a7 Mov
	func_3951(var_38_object); // 0x14a8 NEW_2
	var_45_int = 2250000; // 0x14aa PushI
	var_46_bool = var_37_float <= var_45_int; // 0x14ab LE
	if(var_46_bool == 0) goto Label_5294; // 0x14ac JumpB
	var_32_bool = 0; // 0x14ad MovB
	
Label_5294:
	return 2; // 0x14ae Return
}


func_3234(var_1_object, var_2_object, var_4_string)
{
	var_215_bool = 0; var_216_bool = 0; var_217_cvector = CVector(0,0,0); var_218_bool = 0; var_219_bool = 0; var_220_cvector = CVector(0,0,0); // 0xca2 PushV
	var_1_object = 0; // 0xca3 TMovI
	
Label_3236:
	var_221_string = "all"; // 0xca4 PushS
	var_222_string = "attack_begin"; // 0xca5 PushS
	var_223_int = 1; // 0xca6 PushI
	var_224_int = var_1_object + var_223_int; // 0xca7 Add
	var_225_int = var_222_string + var_224_int; // 0xca8 Add
	HasAnimation(var_218_bool, var_221_string, var_225_int); // 0xca9 Func
	var_226_bool = var_218_bool == 0; // 0xcab Not
	if(var_226_bool == 0) goto Label_3246; // 0xcac JumpB
	goto Label_3249; // 0xcad Jump
	
Label_3249:
	var_2_object = 0; // 0xcb1 TMovI
	
Label_3250:
	var_227_string = "attack"; // 0xcb2 PushS
	var_228_int = 1; // 0xcb3 PushI
	var_229_int = var_2_object + var_228_int; // 0xcb4 Add
	var_230_int = var_227_string + var_229_int; // 0xcb5 Add
	IsExisting3DSound(var_219_bool, var_230_int); // 0xcb6 Func
	var_231_bool = var_219_bool == 0; // 0xcb8 Not
	if(var_231_bool == 0) goto Label_3259; // 0xcb9 JumpB
	goto Label_3262; // 0xcba Jump
	
Label_3262:
	var_232_string = "all"; // 0xcbe PushS
	var_233_string = "bjump"; // 0xcbf PushS
	GetAnimationOffset(var_220_cvector, var_232_string, var_233_string); // 0xcc0 Func
	var_234_float = GetByIndex(var_220_cvector, 2); // 0xcc2 PushE
	var_4_string = -var_234_float; // 0xcc3 Neg2
	return 6; // 0xcc4 Return
	
Label_3259:
	var_235_int = 1; // 0xcbb PushI
	var_2_object = var_2_object + var_235_int; // 0xcbc Add2
	goto Label_3250; // 0xcbd Jump
	
Label_3246:
	var_236_int = 1; // 0xcae PushI
	var_1_object = var_1_object + var_236_int; // 0xcaf Add2
	goto Label_3236; // 0xcb0 Jump
}


func_4779()
{
	var_163_int = 0; // 0x12ab PushV
	func_4712(var_163_int); // 0x12ac NEW_2
	var_167_int = 1; // 0x12ae PushI
	var_168_bool = var_163_int != var_167_int; // 0x12af Neq
	if(var_168_bool == 0) goto Label_4786; // 0x12b0 JumpB
	return 0; // 0x12b1 Return
	
Label_4786:
	var_169_string = ""; // 0x12b2 PushV
	var_169_string = "liver"; // 0x12b3 MovS
	func_4762(var_169_string); // 0x12b4 NEW_2
	var_180_string = ""; // 0x12b6 PushV
	var_180_string = "kidney"; // 0x12b7 MovS
	func_4762(var_180_string); // 0x12b8 NEW_2
	var_181_string = ""; // 0x12ba PushV
	var_181_string = "heart"; // 0x12bb MovS
	func_4762(var_181_string); // 0x12bc NEW_2
	var_182_string = ""; // 0x12be PushV
	var_182_string = "blood"; // 0x12bf MovS
	func_4762(var_182_string); // 0x12c0 NEW_2
	return 0; // 0x12c2 Return
}


func_5295(var_60_object)
{
	var_61_object = Obj(); // 0x14b0 PushV
	var_61_object = var_60_object; // 0x14b1 Mov
	func_5071(var_61_object); // 0x14b2 NEW_2
	return 0; // 0x14b4 Return
}


func_5301(var_49_bool)
{
	var_49_bool = 0; // 0x14b6 MovB
	return 0; // 0x14b7 Return
}


func_5304()
{
	return 0; // 0x14b9 Return
}


func_5306(var_27_bool)
{
	var_27_bool = 0; // 0x14bb MovB
	return 0; // 0x14bc Return
}


func_5309()
{
	return 0; // 0x14be Return
}


func_5311(var_103_int)
{
	var_103_int = 515557; // 0x14bf MovI
	return 0; // 0x14c0 Return
}


func_5313(var_102_int)
{
	var_102_int = 503342; // 0x14c1 MovI
	return 0; // 0x14c2 Return
}


func_5315(var_104_string)
{
	var_104_string = "ui/NPC_Citizen1.png"; // 0x14c3 MovS
	return 0; // 0x14c4 Return
}


func_3779(var_0_bool, var_1_object, var_284_bool, var_285_object, var_286_float, var_287_float, var_288_bool, var_289_bool)
{
	var_290_bool = 0; var_291_bool = 0; var_292_object = Obj(); var_293_cvector = CVector(0,0,0); var_294_cvector = CVector(0,0,0); var_295_cvector = CVector(0,0,0); var_296_float = 0; var_297_object = Obj(); var_298_bool = 0; var_299_bool = 0; var_300_object = Obj(); var_301_cvector = CVector(0,0,0); var_302_cvector = CVector(0,0,0); var_303_cvector = CVector(0,0,0); var_304_float = 0; var_305_object = Obj(); // 0xec3 PushV
	var_0_bool = 0; // 0xec4 TMovB
	var_1_object = var_285_object; // 0xec5 TMov
	var_299_bool = var_289_bool; // 0xec6 Mov
	
Label_3783:
	var_306_bool = 0; var_307_object = Obj(); // 0xec7 PushV
	var_307_object = var_285_object; // 0xec8 Mov
	func_3919(var_306_bool, var_307_object); // 0xec9 NEW_2
	var_310_bool = var_306_bool == 0; // 0xecb Not
	if(var_310_bool == 0) goto Label_3791; // 0xecc JumpB
	var_284_bool = 0; // 0xecd MovB
	return 16; // 0xece Return
	
Label_3791:
	GetPosition(var_301_cvector); // 0xecf ObjFunc
	GetPosition(var_302_cvector); // 0xed1 Func
	var_303_cvector = var_301_cvector - var_302_cvector; // 0xed3 Sub2
	var_304_float = var_303_cvector | var_303_cvector; // 0xed4 Or2
	var_311_bool = 0; // 0xed5 PushV
	var_311_bool = 0; // 0xed6 MovB
	var_312_int = 0; // 0xed7 PushI
	var_313_bool = var_287_float > var_312_int; // 0xed8 GT
	if(var_313_bool == 0) goto Label_3806; // 0xed9 JumpB
	var_314_float = var_287_float * var_287_float; // 0xeda Mult
	var_315_bool = var_304_float > var_314_float; // 0xedb GT
	if(var_315_bool == 0) goto Label_3806; // 0xedc JumpB
	var_311_bool = 1; // 0xedd MovB
	
Label_3806:
	if(var_311_bool == 0) goto Label_3811; // 0xede JumpB
	Stop(); // 0xedf Func
	var_284_bool = 0; // 0xee1 MovB
	return 16; // 0xee2 Return
	
Label_3811:
	var_316_float = var_286_float * var_286_float; // 0xee3 Mult
	var_317_bool = var_304_float > var_316_float; // 0xee4 GT
	if(var_317_bool == 0) goto Label_3873; // 0xee5 JumpB
	GetPFPosition(var_301_cvector); // 0xee6 ObjFunc
	FindPathTo(var_305_object, var_301_cvector); // 0xee8 Func
	var_318_bool = var_305_object != 0; // 0xeea NullNeq
	if(var_318_bool == 0) goto Label_3822; // 0xeeb JumpB
	var_300_object = var_305_object; // 0xeec Mov
	var_305_object = 0; // 0xeed SetNull
	
Label_3822:
	var_319_bool = var_300_object != 0; // 0xeee NullNeq
	if(var_319_bool == 0) goto Label_3855; // 0xeef JumpB
	var_320_bool = var_299_bool; // 0xef0 Push
	if(var_320_bool == 0) goto Label_3832; // 0xef1 JumpB
	var_299_bool = 0; // 0xef2 MovB
	RotatePath(var_300_object, var_298_bool); // 0xef3 Func
	var_321_bool = var_298_bool == 0; // 0xef5 Not
	if(var_321_bool == 0) goto Label_3832; // 0xef6 JumpB
	goto Label_3879; // 0xef7 Jump
	
Label_3879:
	var_284_bool = !var_0_bool; // 0xf27 Not2
	return 16; // 0xf28 Return
	
Label_3832:
	var_322_int = 0; // 0xef8 PushI
	var_323_float = 0.3; // 0xef9 PushF
	SetTimer(var_322_int, var_323_float); // 0xefa Func
	var_324_string = ""; // 0xefc PushV
	func_3926(var_324_string); // 0xefd NEW_2
	var_325_string = ""; // 0xeff PushV
	func_3928(var_325_string); // 0xf00 NEW_2
	FollowPath(var_300_object, var_288_bool, var_298_bool, var_324_string, var_325_string); // 0xf02 Func
	var_326_bool = var_298_bool == 0; // 0xf04 Not
	if(var_326_bool == 0) goto Label_3853; // 0xf05 JumpB
	var_327_bool = var_0_bool; // 0xf06 PushT
	if(var_327_bool == 0) goto Label_3851; // 0xf07 JumpB
	var_300_object = 0; // 0xf08 SetNull
	goto Label_3879; // 0xf09 Jump
	
Label_3851:
	goto Label_3878; // 0xf0b Jump
	
Label_3878:
	goto Label_3783; // 0xf26 Jump
	
Label_3853:
	var_300_object = 0; // 0xf0d SetNull
	goto Label_3871; // 0xf0e Jump
	
Label_3871:
	var_305_object = 0; // 0xf1f SetNull
	goto Label_3877; // 0xf20 Jump
	
Label_3877:
	var_300_object = 0; // 0xf25 SetNull
	
Label_3855:
	var_328_int = 0; // 0xf0f PushI
	KillTimer(var_328_int); // 0xf10 Func
	var_329_float = 0.5; // 0xf12 PushF
	Sleep(var_329_float, var_298_bool); // 0xf13 Func
	var_330_bool = var_298_bool == 0; // 0xf15 Not
	if(var_330_bool == 0) goto Label_3867; // 0xf16 JumpB
	var_331_bool = var_0_bool; // 0xf17 PushT
	if(var_331_bool == 0) goto Label_3867; // 0xf18 JumpB
	var_300_object = 0; // 0xf19 SetNull
	goto Label_3879; // 0xf1a Jump
	
Label_3867:
	var_332_int = 0; // 0xf1b PushI
	var_333_float = 0.3; // 0xf1c PushF
	SetTimer(var_332_int, var_333_float); // 0xf1d Func
	
Label_3873:
	var_334_int = 0; // 0xf21 PushI
	KillTimer(var_334_int); // 0xf22 Func
	goto Label_3879; // 0xf24 Jump
}


func_5317(var_105_string)
{
	var_105_string = "ui/NPC_Citizen1_b.png"; // 0x14c5 MovS
	return 0; // 0x14c6 Return
}


func_3269(var_0_bool, var_498_float, var_499_int)
{
	var_500_object = Obj(); var_501_float = 0; var_502_float = 0; var_503_object = Obj(); var_504_float = 0; var_505_float = 0; // 0xcc5 PushV
	var_506_float = 0.9; // 0xcc6 PushF
	var_507_float = var_498_float * var_506_float; // 0xcc7 Mult
	GetVictim(var_507_float, var_503_object); // 0xcc8 Func
	ReportAttack(var_0_bool); // 0xcca Func
	var_508_bool = var_503_object == var_0_bool; // 0xccc Eq
	if(var_508_bool == 0) goto Label_3306; // 0xccd JumpB
	var_509_float = 0; var_510_object = Obj(); var_511_int = 0; // 0xcce PushV
	var_510_object = var_503_object; // 0xccf Mov
	var_511_int = var_499_int; // 0xcd0 Mov
	func_2999(var_511_int); // 0xcd1 NEW_2
	var_504_float = var_509_float; // 0xcd2 Mov
	var_512_float = 0; var_513_object = Obj(); var_514_float = 0; var_515_int = 0; // 0xcd4 PushV
	var_513_object = var_503_object; // 0xcd5 Mov
	var_514_float = var_504_float; // 0xcd6 Mov
	var_516_int = 0; var_517_object = Obj(); var_518_int = 0; // 0xcd7 PushV
	var_517_object = var_503_object; // 0xcd8 Mov
	var_518_int = var_499_int; // 0xcd9 Mov
	func_3002(var_518_int); // 0xcda NEW_2
	var_515_int = var_516_int; // 0xcdb Mov
	func_3976(var_512_float, var_513_object, var_514_float, var_515_int); // 0xcdd NEW_2
	var_505_float = var_512_float; // 0xcde Mov
	var_573_int = 0; // 0xce0 PushV
	func_3652(var_573_int); // 0xce1 NEW_2
	ReportHit(var_0_bool, var_573_int, var_505_float, var_504_float); // 0xce3 Func
	var_574_object = Obj(); var_575_float = 0; // 0xce5 PushV
	var_574_object = var_503_object; // 0xce6 Mov
	var_575_float = var_505_float; // 0xce7 Mov
	func_3659(); // 0xce8 NEW_2
	
Label_3306:
	return 6; // 0xcea Return
}


func_5319(var_97_bool)
{
	var_97_bool = 0; // 0x14c7 MovB
	return 0; // 0x14c8 Return
}


func_4803()
{
	var_112_bool = 0; var_113_bool = 0; // 0x12c3 PushV
	var_114_int = 0; // 0x12c4 PushI
	ClearSubContainer(var_114_int); // 0x12c5 Func
	var_115_int = 0; var_116_int = 0; // 0x12c7 PushV
	var_115_int = 30; // 0x12c8 MovI
	var_117_int = 50; // 0x12c9 PushI
	var_118_int = 0; // 0x12ca PushV
	func_4591(var_118_int); // 0x12cb NEW_2
	var_124_int = 40; // 0x12cd PushI
	var_125_float = var_118_int * var_124_int; // 0x12ce Mult
	var_116_int = var_117_int + var_125_float; // 0x12cf Add2
	func_4731(var_115_int, var_116_int); // 0x12d0 NEW_2
	var_143_string = ""; var_144_int = 0; var_145_int = 0; // 0x12d2 PushV
	var_143_string = "tourniquet"; // 0x12d3 MovS
	var_144_int = 1; // 0x12d4 MovI
	var_145_int = 10; // 0x12d5 MovI
	func_4449(var_143_string, var_144_int, var_145_int); // 0x12d6 NEW_2
	var_154_string = ""; var_155_int = 0; var_156_int = 0; // 0x12d8 PushV
	var_154_string = "bandage"; // 0x12d9 MovS
	var_155_int = 1; // 0x12da MovI
	var_156_int = 10; // 0x12db MovI
	func_4449(var_154_string, var_155_int, var_156_int); // 0x12dc NEW_2
	var_157_string = ""; var_158_int = 0; var_159_int = 0; // 0x12de PushV
	var_157_string = "bottle_empty"; // 0x12df MovS
	var_158_int = 1; // 0x12e0 MovI
	var_159_int = 2; // 0x12e1 MovI
	func_4449(var_157_string, var_158_int, var_159_int); // 0x12e2 NEW_2
	var_160_string = ""; var_161_int = 0; var_162_int = 0; // 0x12e4 PushV
	var_160_string = "tvirin"; // 0x12e5 MovS
	var_161_int = 1; // 0x12e6 MovI
	var_162_int = 8; // 0x12e7 MovI
	func_4449(var_160_string, var_161_int, var_162_int); // 0x12e8 NEW_2
	return 2; // 0x12ea Return
}


func_5321()
{
	var_20_bool = GlobalVars[0]; // 0x14c9 PushGE
	var_20_bool = 0; // 0x14ca MovB
	GlobalVars[0] = var_20_bool; // 0x14cb PopGE
	func_4843(); // 0x14cd NEW_2
	return 0; // 0x14cf Return
}


func_2767(var_0_bool)
{
	var_70_object = Obj(); // 0xacf PushV
	var_70_object = var_0_bool; // 0xad0 MovT
	func_4431(var_70_object); // 0xad1 NEW_2
	return 0; // 0xad3 Return
}


func_5328(var_31_object, var_46_object)
{
	var_32_bool = 0; var_33_bool = 0; // 0x14d0 PushV
	var_34_bool = GlobalVars[0]; // 0x14d1 PushGE
	if(var_34_bool == 0) goto Label_5341; // 0x14d2 JumpB
	IsOverrideActive(var_33_bool); // 0x14d3 Func
	var_35_bool = var_33_bool == 0; // 0x14d5 Not
	if(var_35_bool == 0) goto Label_5339; // 0x14d6 JumpB
	var_36_object = Obj(); // 0x14d7 PushV
	var_36_object = var_31_object; // 0x14d8 Mov
	func_4718(var_36_object); // 0x14d9 NEW_2
	
Label_5339:
	return 2; // 0x14db Return
	
Label_5341:
	var_43_int = 1000; // 0x14dd PushI
	var_44_int = 0; var_45_object = Obj(); // 0x14de PushV
	var_45_object = var_31_object; // 0x14df Mov
	TaskCall(1); // 0x14e0 TaskCall
	func_40(var_46_object, var_44_int, var_45_object); // 0x14e1 NEW_2
	TaskReturn(); // 0x14e2 TaskReturn
	var_266_bool = var_43_int == var_46_object; // 0x14e4 Eq
	if(var_266_bool == 0) goto Label_5367; // 0x14e5 JumpB
	var_267_bool = 0; var_268_object = Obj(); // 0x14e6 PushV
	var_268_object = var_31_object; // 0x14e7 Mov
	func_4341(var_267_bool, var_268_object); // 0x14e8 NEW_2
	var_298_bool = var_267_bool == 0; // 0x14ea Not
	if(var_298_bool == 0) goto Label_5357; // 0x14eb JumpB
	return 2; // 0x14ec Return
	
Label_5357:
	var_299_object = Obj(); // 0x14ed PushV
	var_299_object = var_31_object; // 0x14ee Mov
	TaskCall(0); // 0x14ef TaskCall
	func_0(var_299_object); // 0x14f0 NEW_2
	TaskReturn(); // 0x14f1 TaskReturn
	var_306_object = Obj(); // 0x14f3 PushV
	var_306_object = var_31_object; // 0x14f4 Mov
	func_4396(); // 0x14f5 NEW_2
	
Label_5367:
	return 2; // 0x14f7 Return
}


func_4324()
{
	var_260_bool = 0; var_261_bool = 0; // 0x10e4 PushV
	CameraSwitchToNormal(); // 0x10e5 Func
	var_262_bool = 0; // 0x10e7 PushV
	func_5319(var_262_bool); // 0x10e8 NEW_2
	if(var_262_bool == 0) goto Label_4332; // 0x10ea JumpB
	goto Label_4340; // 0x10eb Jump
	
Label_4340:
	return 2; // 0x10f4 Return
	
Label_4332:
	var_263_string = "head"; // 0x10ec PushS
	HasAnimationTrack(var_261_bool, var_263_string); // 0x10ed Func
	var_264_bool = var_261_bool; // 0x10ef Push
	if(var_264_bool == 0) goto Label_4340; // 0x10f0 JumpB
	var_265_string = "head"; // 0x10f1 PushS
	UnlookAsync(var_265_string); // 0x10f2 Func
}


func_4843()
{
	var_21_bool = 0; var_22_bool = 0; // 0x12eb PushV
	var_23_int = 0; // 0x12ec PushI
	ClearSubContainer(var_23_int); // 0x12ed Func
	var_24_string = ""; var_25_int = 0; var_26_int = 0; // 0x12ef PushV
	var_24_string = "tourniquet"; // 0x12f0 MovS
	var_25_int = 1; // 0x12f1 MovI
	var_26_int = 4; // 0x12f2 MovI
	func_4449(var_24_string, var_25_int, var_26_int); // 0x12f3 NEW_2
	var_35_string = ""; var_36_int = 0; var_37_int = 0; // 0x12f5 PushV
	var_35_string = "bandage"; // 0x12f6 MovS
	var_36_int = 1; // 0x12f7 MovI
	var_37_int = 2; // 0x12f8 MovI
	func_4449(var_35_string, var_36_int, var_37_int); // 0x12f9 NEW_2
	return 2; // 0x12fb Return
}


func_3308(var_0_bool, var_461_bool, var_462_float)
{
	var_463_int = 0; var_464_bool = 0; var_465_int = 0; var_466_string = ""; var_467_int = 0; var_468_bool = 0; var_469_int = 0; var_470_string = ""; // 0xcec PushV
	func_3647(var_470_string); // 0xcee NEW_2
	irand(var_467_int, var_470_string); // 0xcf0 Func
	var_471_int = 1; // 0xcf2 PushI
	var_467_int = var_467_int + var_471_int; // 0xcf3 Add2
	Face(var_0_bool); // 0xcf4 Func
	var_472_bool = 1; // 0xcf6 PushB
	SetAttackState(var_472_bool); // 0xcf7 Func
	func_4609(); // 0xcfa NEW_2
	var_477_string = "all"; // 0xcfc PushS
	var_478_string = "attack_begin"; // 0xcfd PushS
	var_479_int = var_478_string + var_467_int; // 0xcfe Add
	PlayAnimation(var_477_string, var_479_int); // 0xcff Func
	WaitForAnimEnd(); // 0xd01 Func
	func_3615(var_469_int, var_470_string); // 0xd04 NEW_2
	var_495_bool = 0; var_496_object = Obj(); // 0xd06 PushV
	var_496_object = var_0_bool; // 0xd07 MovT
	func_4090(var_495_bool, var_496_object); // 0xd08 NEW_2
	var_497_bool = var_495_bool == 0; // 0xd0a Not
	if(var_497_bool == 0) goto Label_3344; // 0xd0b JumpB
	StopAsync(); // 0xd0c Func
	var_461_bool = 0; // 0xd0e MovB
	return 8; // 0xd0f Return
	
Label_3344:
	var_498_float = 0; var_499_int = 0; // 0xd10 PushV
	var_498_float = var_462_float; // 0xd11 Mov
	var_499_int = var_467_int; // 0xd12 Mov
	func_3269(var_470_string, var_498_float, var_499_int); // 0xd13 NEW_2
	var_576_string = "all"; // 0xd15 PushS
	var_577_string = "attack_middle"; // 0xd16 PushS
	var_578_int = var_577_string + var_467_int; // 0xd17 Add
	HasAnimation(var_468_bool, var_576_string, var_578_int); // 0xd18 Func
	var_579_bool = var_468_bool; // 0xd1a Push
	if(var_579_bool == 0) goto Label_3425; // 0xd1b JumpB
	func_4609(); // 0xd1d NEW_2
	var_580_string = "all"; // 0xd1f PushS
	var_581_string = "attack_middle"; // 0xd20 PushS
	var_582_int = var_581_string + var_467_int; // 0xd21 Add
	PlayAnimation(var_580_string, var_582_int); // 0xd22 Func
	WaitForAnimEnd(); // 0xd24 Func
	func_3647(var_470_string); // 0xd27 NEW_2
	var_583_bool = 0; var_584_object = Obj(); // 0xd29 PushV
	var_584_object = var_0_bool; // 0xd2a MovT
	func_4090(var_583_bool, var_584_object); // 0xd2b NEW_2
	var_585_bool = var_583_bool == 0; // 0xd2d Not
	if(var_585_bool == 0) goto Label_3379; // 0xd2e JumpB
	StopAsync(); // 0xd2f Func
	var_461_bool = 0; // 0xd31 MovB
	return 8; // 0xd32 Return
	
Label_3379:
	var_586_float = 0; var_587_int = 0; // 0xd33 PushV
	var_586_float = var_462_float; // 0xd34 Mov
	var_587_int = var_467_int; // 0xd35 Mov
	func_3269(var_470_string, var_586_float, var_587_int); // 0xd36 NEW_2
	var_469_int = 1; // 0xd38 MovI
	
Label_3385:
	var_588_string = "attack_middle"; // 0xd39 PushS
	var_589_int = var_588_string + var_467_int; // 0xd3a Add
	var_590_string = "_"; // 0xd3b PushS
	var_591_int = var_589_int + var_590_string; // 0xd3c Add
	var_470_string = var_591_int + var_469_int; // 0xd3d Add2
	var_592_string = "all"; // 0xd3e PushS
	HasAnimation(var_468_bool, var_592_string, var_470_string); // 0xd3f Func
	var_593_bool = var_468_bool == 0; // 0xd41 Not
	if(var_593_bool == 0) goto Label_3396; // 0xd42 JumpB
	goto Label_3425; // 0xd43 Jump
	
Label_3425:
	var_594_bool = 0; // 0xd61 PushB
	SetAttackState(var_594_bool); // 0xd62 Func
	var_595_string = "all"; // 0xd64 PushS
	var_596_string = "attack_end"; // 0xd65 PushS
	var_597_int = var_596_string + var_467_int; // 0xd66 Add
	PlayAnimation(var_595_string, var_597_int); // 0xd67 Func
	var_598_bool = 0; // 0xd69 PushV
	func_3661(var_598_bool); // 0xd6a NEW_2
	if(var_598_bool == 0) goto Label_3443; // 0xd6c JumpB
	var_599_bool = 0; var_600_float = 0; // 0xd6d PushV
	var_600_float = 0.75; // 0xd6e MovF
	func_3445(var_599_bool, var_600_float); // 0xd6f NEW_2
	StopAsync(); // 0xd71 Func
	
Label_3443:
	var_461_bool = 1; // 0xd73 MovB
	return 8; // 0xd74 Return
	
Label_3396:
	func_4609(); // 0xd45 NEW_2
	var_608_string = "all"; // 0xd47 PushS
	PlayAnimation(var_608_string, var_470_string); // 0xd48 Func
	WaitForAnimEnd(); // 0xd4a Func
	func_3647(var_470_string); // 0xd4d NEW_2
	var_609_bool = 0; var_610_object = Obj(); // 0xd4f PushV
	var_610_object = var_0_bool; // 0xd50 MovT
	func_4090(var_609_bool, var_610_object); // 0xd51 NEW_2
	var_611_bool = var_609_bool == 0; // 0xd53 Not
	if(var_611_bool == 0) goto Label_3417; // 0xd54 JumpB
	StopAsync(); // 0xd55 Func
	var_461_bool = 0; // 0xd57 MovB
	return 8; // 0xd58 Return
	
Label_3417:
	var_612_float = 0; var_613_int = 0; // 0xd59 PushV
	var_612_float = var_462_float; // 0xd5a Mov
	var_613_int = var_467_int; // 0xd5b Mov
	func_3269(var_470_string, var_612_float, var_613_int); // 0xd5c NEW_2
	var_614_int = 1; // 0xd5e PushI
	var_469_int = var_469_int + var_614_int; // 0xd5f Add2
	goto Label_3385; // 0xd60 Jump
}


func_4341(var_267_bool, var_268_object)
{
	var_269_bool = 0; var_270_object = Obj(); var_271_float = 0; // 0x10f6 PushV
	var_270_object = var_268_object; // 0x10f7 Mov
	var_271_float = 70; // 0x10f8 MovI
	func_4349(var_270_object, var_271_float); // 0x10f9 NEW_2
	var_267_bool = var_269_bool; // 0x10fa Mov
	return 0; // 0x10fc Return
}


func_5368(var_64_bool)
{
	var_64_bool = 0; // 0x14f8 MovB
	return 0; // 0x14f9 Return
}


func_5370(var_171_bool)
{
	var_171_bool = 1; // 0x14fb MovB
	return 0; // 0x14fc Return
}


func_4860(var_136_int, var_137_string)
{
	var_138_int = 0; var_139_int = 0; // 0x12fc PushV
	GetInvItemByName(var_139_int, var_137_string); // 0x12fd Func
	var_136_int = var_139_int; // 0x12ff Mov
	return 2; // 0x1300 Return
}


func_5373(var_24_bool, var_25_object, var_26_object, var_27_bool)
{
	var_28_bool = 0; var_29_object = Obj(); var_30_object = Obj(); var_31_float = 0; var_32_bool = 0; // 0x14fe PushV
	var_29_object = var_25_object; // 0x14ff Mov
	var_30_object = var_26_object; // 0x1500 Mov
	var_31_float = 700.0; // 0x1501 MovF
	var_32_bool = var_27_bool; // 0x1502 Mov
	func_5185(var_28_bool, var_29_object, var_30_object, var_31_float, var_32_bool); // 0x1503 NEW_2
	var_24_bool = var_28_bool; // 0x1504 Mov
	return 0; // 0x1506 Return
}


func_4349(var_269_bool, var_271_float)
{
	var_272_float = 0; var_273_cvector = CVector(0,0,0); var_274_cvector = CVector(0,0,0); var_275_cvector = CVector(0,0,0); var_276_cvector = CVector(0,0,0); var_277_cvector = CVector(0,0,0); var_278_cvector = CVector(0,0,0); var_279_bool = 0; var_280_float = 0; var_281_cvector = CVector(0,0,0); var_282_cvector = CVector(0,0,0); var_283_cvector = CVector(0,0,0); var_284_cvector = CVector(0,0,0); var_285_cvector = CVector(0,0,0); var_286_cvector = CVector(0,0,0); var_287_bool = 0; // 0x10fd PushV
	GetPosition(var_281_cvector); // 0x10fe ObjFunc
	GetEyesHeight(var_280_float); // 0x1100 ObjFunc
	var_288_float = GetByIndex(var_281_cvector, 1); // 0x1102 PushE
	var_288_float = var_288_float + var_280_float; // 0x1103 Add2
	SetByIndex(var_281_cvector, 1) = var_288_float; // 0x1104 PopE
	GetPosition(var_282_cvector); // 0x1105 Func
	GetEyesHeight(var_280_float); // 0x1107 Func
	var_289_float = GetByIndex(var_282_cvector, 1); // 0x1109 PushE
	var_289_float = var_289_float + var_280_float; // 0x110a Add2
	SetByIndex(var_282_cvector, 1) = var_289_float; // 0x110b PopE
	var_283_cvector = var_281_cvector - var_282_cvector; // 0x110c Sub2
	var_290_float = GetByIndex(var_283_cvector, 1); // 0x110d PushE
	var_290_float = 0; // 0x110e MovI
	SetByIndex(var_283_cvector, 1) = var_290_float; // 0x110f PopE
	var_291_int = var_283_cvector | var_283_cvector; // 0x1110 Or
	var_292_float = sqrt(var_291_int); // 0x1111 Sqrt
	var_283_cvector = var_283_cvector / var_283_cvector; // 0x1112 Div2
	var_284_cvector = -var_283_cvector; // 0x1113 Neg2
	var_293_float = var_283_cvector * var_271_float; // 0x1114 Mult
	var_294_cvector = CVector(0.0, 10.0, 0.0); // 0x1115 PushVec
	var_285_cvector = var_293_float - var_294_cvector; // 0x1116 Sub2
	var_286_cvector = var_282_cvector + var_285_cvector; // 0x1117 Add2
	IsOverrideActive(var_287_bool); // 0x1118 Func
	var_295_bool = var_287_bool; // 0x111a Push
	if(var_295_bool == 0) goto Label_4382; // 0x111b JumpB
	var_269_bool = 0; // 0x111c MovB
	return 16; // 0x111d Return
	
Label_4382:
	StopWorld(); // 0x111e Func
	CameraTransit(var_286_cvector, var_284_cvector); // 0x1120 Func
	var_296_float = GetByIndex(var_285_cvector, 0); // 0x1122 PushE
	var_297_float = GetByIndex(var_285_cvector, 2); // 0x1123 PushE
	Rotate(var_296_float, var_297_float); // 0x1124 Func
	CameraWaitForPlayFinish(); // 0x1126 Func
	ResumeWorld(); // 0x1128 Func
	var_269_bool = 1; // 0x112a MovB
	return 16; // 0x112b Return
}


func_4865(var_20_object)
{
	var_21_object = Obj(); // 0x1302 PushV
	var_21_object = var_20_object; // 0x1303 Mov
	TaskCall(3); // 0x1304 TaskCall
	func_1941(var_21_object); // 0x1305 NEW_2
	TaskReturn(); // 0x1306 TaskReturn
	return 0; // 0x1308 Return
}


func_2308(var_2_object)
{
	var_20_int = 110; // 0x904 PushI
	KillTimer(var_20_int); // 0x905 Func
	var_2_object = 0; // 0x907 TMovB
	func_2444(var_18_object, var_19_bool); // 0x909 NEW_2
	return 0; // 0x90b Return
}


func_5383(var_102_object)
{
	var_103_bool = 0; var_104_object = Obj(); // 0x1508 PushV
	var_104_object = var_102_object; // 0x1509 Mov
	func_3959(var_103_bool, var_104_object); // 0x150a NEW_2
	if(var_103_bool == 0) goto Label_5399; // 0x150c JumpB
	var_107_object = Obj(); // 0x150d PushV
	func_4501(var_107_object); // 0x150e NEW_2
	var_110_float = -0.03; // 0x1510 PushF
	var_111_bool = 1; // 0x1511 PushB
	ReportReputationChange(var_102_object, var_107_object, var_110_float, var_111_bool); // 0x1512 Func
	func_4803(); // 0x1515 NEW_2
	
Label_5399:
	func_4779(); // 0x1518 NEW_2
	var_183_bool = GlobalVars[0]; // 0x151a PushGE
	var_183_bool = 1; // 0x151b MovB
	GlobalVars[0] = var_183_bool; // 0x151c PopGE
	var_184_int = 50; // 0x151d PushI
	var_185_int = 40; // 0x151e PushI
	SetRTEnvelope(var_184_int, var_185_int); // 0x151f Func
	return 0; // 0x1521 Return
}


func_2316(var_2_object)
{
	var_69_int = 110; // 0x90c PushI
	KillTimer(var_69_int); // 0x90d Func
	var_2_object = 0; // 0x90f TMovB
	func_2451(var_23_bool, var_24_int); // 0x911 NEW_2
	return 0; // 0x913 Return
}


func_2333(var_2_object, var_20_object)
{
	var_21_bool = 0; var_22_int = 0; var_23_bool = 0; var_24_int = 0; // 0x91d PushV
	var_25_bool = 0; var_26_object = Obj(); // 0x91e PushV
	var_26_object = var_20_object; // 0x91f Mov
	func_4090(var_25_bool, var_26_object); // 0x920 NEW_2
	var_59_bool = var_25_bool == 0; // 0x922 Not
	if(var_59_bool == 0) goto Label_2341; // 0x923 JumpB
	return 4; // 0x924 Return
	
Label_2341:
	var_60_object = var_2_object; // 0x925 PushT
	if(var_60_object == 0) goto Label_2344; // 0x926 JumpB
	return 4; // 0x927 Return
	
Label_2344:
	IsPlayerActor(var_20_object, var_23_bool); // 0x928 Func
	var_61_bool = var_23_bool == 0; // 0x92a Not
	if(var_61_bool == 0) goto Label_2349; // 0x92b JumpB
	return 4; // 0x92c Return
	
Label_2349:
	var_62_int = 0; var_63_object = Obj(); // 0x92d PushV
	var_63_object = var_20_object; // 0x92e Mov
	func_5062(var_63_object); // 0x92f NEW_2
	var_24_int = var_62_int; // 0x930 Mov
	var_65_int = 0; // 0x932 PushI
	var_66_bool = var_24_int > var_65_int; // 0x933 GT
	if(var_66_bool == 0) goto Label_2372; // 0x934 JumpB
	var_67_int = 1; // 0x935 PushI
	var_68_bool = var_24_int > var_67_int; // 0x936 GT
	if(var_68_bool == 0) goto Label_2363; // 0x937 JumpB
	func_2316(var_24_int); // 0x939 NEW_2
	
Label_2363:
	var_70_object = Obj(); // 0x93b PushV
	var_70_object = var_20_object; // 0x93c Mov
	func_5071(var_70_object); // 0x93d NEW_2
	var_2_object = 1; // 0x93f TMovB
	var_135_int = 110; // 0x940 PushI
	var_136_float = 10.0; // 0x941 PushF
	SetTimer(var_135_int, var_136_float); // 0x942 Func
	
Label_2372:
	return 4; // 0x944 Return
}


func_3881(var_0_bool, var_1_object, var_27_int)
{
	var_28_int = 0; // 0xf2a PushI
	var_29_bool = var_27_int != var_28_int; // 0xf2b Neq
	if(var_29_bool == 0) goto Label_3886; // 0xf2c JumpB
	return 0; // 0xf2d Return
	
Label_3886:
	var_30_bool = 0; var_31_object = Obj(); // 0xf2e PushV
	var_31_object = var_1_object; // 0xf2f MovT
	func_3919(var_30_bool, var_31_object); // 0xf30 NEW_2
	var_66_bool = var_30_bool == 0; // 0xf32 Not
	if(var_66_bool == 0) goto Label_3893; // 0xf33 JumpB
	var_0_bool = 1; // 0xf34 TMovB
	
Label_3893:
	var_67_int = 0; // 0xf35 PushI
	KillTimer(var_67_int); // 0xf36 Func
	Stop(); // 0xf38 Func
	return 0; // 0xf3a Return
}


func_4396()
{
	CameraSwitchToNormal(); // 0x112d Func
	return 0; // 0x112f Return
}


func_4910(var_23_bool, var_24_object, var_25_string)
{
	var_26_string = "unholster"; // 0x132f PushS
	var_27_bool = var_25_string == var_26_string; // 0x1330 Eq
	if(var_27_bool == 0) goto Label_4921; // 0x1331 JumpB
	var_28_bool = 0; var_29_object = Obj(); // 0x1332 PushV
	var_29_object = var_24_object; // 0x1333 Mov
	func_5275(var_29_object); // 0x1334 NEW_2
	var_23_bool = var_28_bool; // 0x1335 Mov
	return 0; // 0x1337 Return
	
Label_4921:
	var_30_string = "player_shot"; // 0x1339 PushS
	var_31_bool = var_25_string == var_30_string; // 0x133a Eq
	if(var_31_bool == 0) goto Label_4931; // 0x133b JumpB
	var_32_bool = 0; var_33_object = Obj(); // 0x133c PushV
	var_33_object = var_24_object; // 0x133d Mov
	func_5280(var_32_bool, var_33_object); // 0x133e NEW_2
	var_23_bool = var_32_bool; // 0x133f Mov
	return 0; // 0x1341 Return
	
Label_4931:
	var_47_string = "battle"; // 0x1343 PushS
	var_48_bool = var_25_string == var_47_string; // 0x1344 Eq
	if(var_48_bool == 0) goto Label_4940; // 0x1345 JumpB
	var_49_bool = 0; var_50_object = Obj(); // 0x1346 PushV
	var_50_object = var_24_object; // 0x1347 Mov
	func_5301(var_50_object); // 0x1348 NEW_2
	var_23_bool = var_49_bool; // 0x1349 Mov
	return 0; // 0x134b Return
	
Label_4940:
	var_23_bool = 0; // 0x134c MovB
	return 0; // 0x134d Return
}


func_4400(var_176_string)
{
	var_177_bool = 0; var_178_float = 0; var_179_float = 0; var_180_bool = 0; var_181_float = 0; var_182_float = 0; // 0x1130 PushV
	lshHasAnimation(var_180_bool, var_176_string); // 0x1131 Func
	var_183_bool = var_180_bool; // 0x1133 Push
	if(var_183_bool == 0) goto Label_4411; // 0x1134 JumpB
	lshGetAnimTimes(var_176_string, var_181_float, var_182_float); // 0x1135 Func
	var_184_bool = 0; // 0x1137 PushB
	lshPlayAnimation(var_181_float, var_182_float, var_184_bool); // 0x1138 Func
	goto Label_4415; // 0x113a Jump
	
Label_4415:
	return 6; // 0x113f Return
	
Label_4411:
	var_185_string = "Can't find lsh animation : "; // 0x113b PushS
	var_186_int = var_185_string + var_176_string; // 0x113c Add
	Trace(var_186_int); // 0x113d Func
}


func_3903(var_0_bool)
{
	var_0_bool = 1; // 0xf3f TMovB
	var_23_int = 0; // 0xf40 PushI
	KillTimer(var_23_int); // 0xf41 Func
	Stop(); // 0xf43 Func
	return 0; // 0xf45 Return
}


func_4416(var_134_string, var_135_bool)
{
	var_138_bool = 0; var_139_float = 0; var_140_float = 0; var_141_bool = 0; var_142_float = 0; var_143_float = 0; // 0x1140 PushV
	lshHasAnimation(var_141_bool, var_134_string); // 0x1141 Func
	var_144_bool = var_141_bool; // 0x1143 Push
	if(var_144_bool == 0) goto Label_4426; // 0x1144 JumpB
	lshGetAnimTimes(var_134_string, var_142_float, var_143_float); // 0x1145 Func
	lshPlayAnimation(var_142_float, var_143_float, var_135_bool); // 0x1147 Func
	goto Label_4430; // 0x1149 Jump
	
Label_4430:
	return 6; // 0x114e Return
	
Label_4426:
	var_145_string = "Can't find lsh animation : "; // 0x114a PushS
	var_146_int = var_145_string + var_134_string; // 0x114b Add
	Trace(var_146_int); // 0x114c Func
}


func_325(var_2_object, var_130_string)
{
	var_131_bool = 0; // 0x146 PushV
	func_5319(var_131_bool); // 0x147 NEW_2
	var_132_bool = var_131_bool == 0; // 0x149 Not
	if(var_132_bool == 0) goto Label_332; // 0x14a JumpB
	return 0; // 0x14b Return
	
Label_332:
	var_133_bool = var_130_string == var_2_object; // 0x14c Eq
	if(var_133_bool == 0) goto Label_335; // 0x14d JumpB
	return 0; // 0x14e Return
	
Label_335:
	var_134_string = ""; var_135_bool = 0; // 0x14f PushV
	var_134_string = var_130_string; // 0x150 Mov
	var_136_string = ""; // 0x151 PushS
	var_137_bool = var_130_string == var_136_string; // 0x152 Eq
	if(var_137_bool == 0) goto Label_342; // 0x153 JumpB
	var_135_bool = 0; // 0x154 MovB
	goto Label_343; // 0x155 Jump
	
Label_343:
	func_4416(var_134_string, var_135_bool); // 0x157 NEW_2
	var_2_object = var_130_string; // 0x159 TMov
	return 0; // 0x15a Return
	
Label_342:
	var_135_bool = 1; // 0x156 MovB
}


func_2373(var_0_bool, var_1_object)
{
	var_42_float = 0; var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_bool = 0; var_46_object = Obj(); var_47_bool = 0; var_48_float = 0; var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); var_51_bool = 0; var_52_object = Obj(); var_53_bool = 0; // 0x945 PushV
	var_0_bool = 0; // 0x946 TMovB
	var_1_object = 0; // 0x947 TMovB
	var_54_float = 0.5; // 0x948 PushF
	rand(var_48_float, var_54_float); // 0x949 Func
	Sleep(var_48_float); // 0x94b Func
	
Label_2381:
	var_55_bool = var_0_bool == 0; // 0x94d Not
	if(var_55_bool == 0) goto Label_2431; // 0x94e JumpB
	var_56_bool = var_1_object == 0; // 0x94f Not
	if(var_56_bool == 0) goto Label_2400; // 0x950 JumpB
	
Label_2385:
	GetPosition(var_50_cvector); // 0x951 Func
	var_57_float = 0; // 0x953 PushV
	func_2432(var_57_float); // 0x954 NEW_2
	GetRandomPFPointInCircle(var_49_cvector, var_50_cvector, var_57_float, var_51_bool); // 0x956 Func
	var_60_bool = var_51_bool; // 0x958 Push
	if(var_60_bool == 0) goto Label_2395; // 0x959 JumpB
	goto Label_2399; // 0x95a Jump
	
Label_2399:
	goto Label_2401; // 0x95f Jump
	
Label_2401:
	var_61_object = Obj(); var_62_cvector = CVector(0,0,0); // 0x961 PushV
	var_62_cvector = var_49_cvector; // 0x962 Mov
	func_2460(var_61_object, var_62_cvector); // 0x963 NEW_2
	var_52_object = var_61_object; // 0x964 Mov
	var_65_bool = var_52_object != 0; // 0x966 NullNeq
	if(var_65_bool == 0) goto Label_2426; // 0x967 JumpB
	RotatePath(var_52_object, var_53_bool); // 0x968 Func
	var_66_bool = var_53_bool; // 0x96a Push
	if(var_66_bool == 0) goto Label_2425; // 0x96b JumpB
	var_67_bool = 0; // 0x96c PushV
	func_2458(var_67_bool); // 0x96d NEW_2
	FollowPath(var_52_object, var_67_bool, var_53_bool); // 0x96f Func
	var_52_object = 0; // 0x971 SetNull
	var_68_bool = var_53_bool; // 0x972 Push
	if(var_68_bool == 0) goto Label_2425; // 0x973 JumpB
	TaskCall(5); // 0x975 TaskCall
	func_2630(); // 0x976 NEW_2
	TaskReturn(); // 0x977 TaskReturn
	
Label_2425:
	goto Label_2429; // 0x979 Jump
	
Label_2429:
	var_52_object = 0; // 0x97d SetNull
	goto Label_2381; // 0x97e Jump
	
Label_2426:
	var_120_int = 1; // 0x97a PushI
	Sleep(var_120_int); // 0x97b Func
	
Label_2395:
	var_121_int = 1; // 0x95b PushI
	Sleep(var_121_int); // 0x95c Func
	goto Label_2385; // 0x95e Jump
	
Label_2400:
	var_1_object = 0; // 0x960 TMovB
	
Label_2431:
	return 12; // 0x97f Return
}


func_4942(var_53_object, var_54_string)
{
	var_55_string = "unholster"; // 0x134f PushS
	var_56_bool = var_54_string == var_55_string; // 0x1350 Eq
	if(var_56_bool == 0) goto Label_4951; // 0x1351 JumpB
	var_57_object = Obj(); // 0x1352 PushV
	var_57_object = var_53_object; // 0x1353 Mov
	func_5278(); // 0x1354 NEW_2
	goto Label_4966; // 0x1356 Jump
	
Label_4966:
	return 0; // 0x1366 Return
	
Label_4951:
	var_58_string = "player_shot"; // 0x1357 PushS
	var_59_bool = var_54_string == var_58_string; // 0x1358 Eq
	if(var_59_bool == 0) goto Label_4959; // 0x1359 JumpB
	var_60_object = Obj(); // 0x135a PushV
	var_60_object = var_53_object; // 0x135b Mov
	func_5295(var_60_object); // 0x135c NEW_2
	goto Label_4966; // 0x135e Jump
	
Label_4959:
	var_126_string = "battle"; // 0x135f PushS
	var_127_bool = var_54_string == var_126_string; // 0x1360 Eq
	if(var_127_bool == 0) goto Label_4966; // 0x1361 JumpB
	var_128_object = Obj(); // 0x1362 PushV
	var_128_object = var_53_object; // 0x1363 Mov
	func_5304(); // 0x1364 NEW_2
}


func_4431(var_23_object)
{
	var_24_float = 0; var_25_cvector = CVector(0,0,0); var_26_float = 0; var_27_cvector = CVector(0,0,0); // 0x114f PushV
	GetEyesHeight(var_26_float); // 0x1150 ObjFunc
	var_27_cvector = CVector(0.0, 0.0, 0.0); // 0x1152 MovV
	var_28_float = GetByIndex(var_27_cvector, 1); // 0x1153 PushE
	var_28_float = var_26_float; // 0x1154 Mov
	SetByIndex(var_27_cvector, 1) = var_28_float; // 0x1155 PopE
	var_29_string = "head"; // 0x1156 PushS
	LookAsync(var_23_object, var_29_string, var_27_cvector); // 0x1157 Func
	return 4; // 0x1159 Return
}


func_3919(var_30_bool, var_31_object)
{
	var_32_bool = 0; var_33_object = Obj(); // 0xf50 PushV
	var_33_object = var_31_object; // 0xf51 Mov
	func_4090(var_32_bool, var_33_object); // 0xf52 NEW_2
	var_30_bool = var_32_bool; // 0xf53 Mov
	return 0; // 0xf55 Return
}


func_3926(var_324_string)
{
	var_324_string = "walk"; // 0xf56 MovS
	return 0; // 0xf57 Return
}


func_3928(var_325_string)
{
	var_325_string = "run"; // 0xf58 MovS
	return 0; // 0xf59 Return
}


func_4442()
{
	var_22_bool = 0; // 0x115a PushV
	func_5319(var_22_bool); // 0x115b NEW_2
	if(var_22_bool == 0) goto Label_4448; // 0x115d JumpB
	lshStopSpeech(); // 0x115e Func
	
Label_4448:
	return 0; // 0x1160 Return
}


func_3930(var_540_string, var_541_int)
{
	var_542_int = 2; // 0xf5b PushI
	var_543_bool = var_541_int == var_542_int; // 0xf5c Eq
	if(var_543_bool == 0) goto Label_3937; // 0xf5d JumpB
	var_540_string = "fire"; // 0xf5e MovS
	return 0; // 0xf5f Return
	
Label_3937:
	var_544_int = 1; // 0xf61 PushI
	var_545_bool = var_541_int == var_544_int; // 0xf62 Eq
	if(var_545_bool == 0) goto Label_3942; // 0xf63 JumpB
	var_540_string = "bullet"; // 0xf64 MovS
	return 0; // 0xf65 Return
	
Label_3942:
	var_540_string = "phys"; // 0xf66 MovS
	return 0; // 0xf67 Return
}


func_4449(var_24_string, var_25_int, var_26_int)
{
	var_27_bool = 0; var_28_bool = 0; // 0x1161 PushV
	var_29_bool = 0; var_30_int = 0; var_31_int = 0; // 0x1162 PushV
	var_30_int = var_25_int; // 0x1163 Mov
	var_31_int = var_26_int; // 0x1164 Mov
	func_4535(var_29_bool, var_30_int, var_31_int); // 0x1165 NEW_2
	if(var_29_bool == 0) goto Label_4459; // 0x1167 JumpB
	var_34_int = 0; // 0x1168 PushI
	AddItem(var_28_bool, var_24_string, var_34_int); // 0x1169 Func
	
Label_4459:
	return 2; // 0x116b Return
}


func_2915()
{
	StopGroup0(); // 0xb63 Func
	StopAsync(); // 0xb65 Func
	var_32_string = "head"; // 0xb67 PushS
	UnlookAsync(var_32_string); // 0xb68 Func
	var_33_int = 111; // 0xb6a PushI
	KillTimer(var_33_int); // 0xb6b Func
	return 0; // 0xb6d Return
}


func_4967(var_20_bool, var_21_object)
{
	var_22_bool = 0; var_23_bool = 0; // 0x1367 PushV
	var_24_bool = 0; // 0x1368 PushV
	var_24_bool = 0; // 0x1369 MovB
	var_25_bool = 0; var_26_object = Obj(); // 0x136a PushV
	var_26_object = var_21_object; // 0x136b Mov
	func_5275(var_26_object); // 0x136c NEW_2
	if(var_25_bool == 0) goto Label_4981; // 0x136e JumpB
	var_27_bool = 0; var_28_object = Obj(); // 0x136f PushV
	var_28_object = var_21_object; // 0x1370 Mov
	func_3959(var_27_bool, var_28_object); // 0x1371 NEW_2
	if(var_27_bool == 0) goto Label_4981; // 0x1373 JumpB
	var_24_bool = 1; // 0x1374 MovB
	
Label_4981:
	if(var_24_bool == 0) goto Label_4988; // 0x1375 JumpB
	IsWeaponHolstered(var_23_bool); // 0x1376 ObjFunc
	var_31_bool = var_23_bool == 0; // 0x1378 Not
	if(var_31_bool == 0) goto Label_4988; // 0x1379 JumpB
	var_20_bool = 1; // 0x137a MovB
	return 2; // 0x137b Return
	
Label_4988:
	var_20_bool = 0; // 0x137c MovB
	return 2; // 0x137d Return
}


func_3944(var_53_cvector)
{
	var_55_cvector = CVector(0,0,0); var_56_cvector = CVector(0,0,0); var_57_cvector = CVector(0,0,0); var_58_cvector = CVector(0,0,0); // 0xf68 PushV
	GetPosition(var_57_cvector); // 0xf69 Func
	GetPosition(var_58_cvector); // 0xf6b ObjFunc
	var_53_cvector = var_58_cvector - var_57_cvector; // 0xf6d Sub2
	return 4; // 0xf6e Return
}


func_4460(var_45_string)
{
	var_46_bool = 0; var_47_int = 0; var_48_bool = 0; var_49_int = 0; var_50_bool = 0; var_51_float = 0; var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_bool = 0; var_55_int = 0; var_56_bool = 0; var_57_int = 0; var_58_bool = 0; var_59_float = 0; var_60_cvector = CVector(0,0,0); var_61_cvector = CVector(0,0,0); // 0x116c PushV
	IsExisting3DSound(var_54_bool, var_45_string); // 0x116d Func
	var_62_bool = var_54_bool == 0; // 0x116f Not
	if(var_62_bool == 0) goto Label_4485; // 0x1170 JumpB
	var_55_int = 0; // 0x1171 MovI
	
Label_4466:
	var_63_int = 1; // 0x1172 PushI
	var_64_int = var_55_int + var_63_int; // 0x1173 Add
	var_65_int = var_45_string + var_64_int; // 0x1174 Add
	IsExisting3DSound(var_56_bool, var_65_int); // 0x1175 Func
	var_66_bool = var_56_bool == 0; // 0x1177 Not
	if(var_66_bool == 0) goto Label_4474; // 0x1178 JumpB
	goto Label_4477; // 0x1179 Jump
	
Label_4477:
	var_67_bool = var_55_int == 0; // 0x117d Not
	if(var_67_bool == 0) goto Label_4480; // 0x117e JumpB
	return 16; // 0x117f Return
	
Label_4480:
	irand(var_57_int, var_55_int); // 0x1180 Func
	var_68_int = 1; // 0x1182 PushI
	var_69_int = var_57_int + var_68_int; // 0x1183 Add
	var_45_string = var_45_string + var_69_int; // 0x1184 Add2
	
Label_4485:
	Is3DSoundLoaded(var_58_bool, var_45_string); // 0x1185 Func
	var_70_bool = var_58_bool; // 0x1187 Push
	if(var_70_bool == 0) goto Label_4500; // 0x1188 JumpB
	GetEyesHeight(var_59_float); // 0x1189 Func
	GetDirection(var_60_cvector); // 0x118b Func
	var_71_int = 50; // 0x118d PushI
	var_61_cvector = var_60_cvector * var_71_int; // 0x118e Mult2
	var_72_float = GetByIndex(var_61_cvector, 1); // 0x118f PushE
	var_72_float = var_72_float + var_59_float; // 0x1190 Add2
	SetByIndex(var_61_cvector, 1) = var_72_float; // 0x1191 PopE
	PlayGlobalSound(var_45_string, var_61_cvector); // 0x1192 Func
	
Label_4500:
	return 16; // 0x1194 Return
	
Label_4474:
	var_73_int = 1; // 0x117a PushI
	var_55_int = var_55_int + var_73_int; // 0x117b Add2
	goto Label_4466; // 0x117c Jump
}


func_3951(var_37_float)
{
	var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); // 0xf6f PushV
	GetPosition(var_42_cvector); // 0xf70 Func
	GetPosition(var_43_cvector); // 0xf72 ObjFunc
	var_44_cvector = var_43_cvector - var_42_cvector; // 0xf74 Sub2
	var_37_float = var_44_cvector | var_44_cvector; // 0xf75 Or2
	return 6; // 0xf76 Return
}


func_3445(var_599_bool, var_600_float)
{
	var_601_float = 0; var_602_bool = 0; var_603_float = 0; var_604_bool = 0; // 0xd75 PushV
	rand(var_603_float); // 0xd76 Func
	var_605_bool = var_603_float < var_600_float; // 0xd78 LT
	if(var_605_bool == 0) goto Label_3465; // 0xd79 JumpB
	
Label_3450:
	IsAnimationPlaying(var_604_bool); // 0xd7a Func
	var_606_bool = var_604_bool == 0; // 0xd7c Not
	if(var_606_bool == 0) goto Label_3455; // 0xd7d JumpB
	goto Label_3464; // 0xd7e Jump
	
Label_3464:
	goto Label_3470; // 0xd88 Jump
	
Label_3470:
	var_599_bool = 0; // 0xd8e MovB
	return 4; // 0xd8f Return
	
Label_3455:
	var_607_bool = 0; // 0xd7f PushV
	func_3543(var_607_bool); // 0xd80 NEW_2
	if(var_607_bool == 0) goto Label_3461; // 0xd82 JumpB
	var_599_bool = 1; // 0xd83 MovB
	return 4; // 0xd84 Return
	
Label_3461:
	sync(); // 0xd85 Func
	goto Label_3450; // 0xd87 Jump
	
Label_3465:
	WaitForAnimEnd(); // 0xd89 Func
	func_3647(var_604_bool); // 0xd8c NEW_2
}


func_3959(var_103_bool, var_104_object)
{
	var_105_bool = 0; var_106_bool = 0; // 0xf77 PushV
	IsPlayerActor(var_104_object, var_106_bool); // 0xf78 Func
	var_103_bool = var_106_bool; // 0xf7a Mov
	return 2; // 0xf7b Return
}


func_3964(var_54_bool, var_55_object, var_56_string)
{
	var_57_bool = 0; var_58_bool = 0; // 0xf7c PushV
	var_59_string = "HasProperty"; // 0xf7d PushS
	var_60_int = 2; // 0xf7e PushI
	var_61_bool = IsFuncExist(var_55_object, var_59_string, var_60_int); // 0xf7f FuncExist
	var_62_bool = var_61_bool == 0; // 0xf80 Not
	if(var_62_bool == 0) goto Label_3972; // 0xf81 JumpB
	var_54_bool = 0; // 0xf82 MovB
	return 2; // 0xf83 Return
	
Label_3972:
	HasProperty(var_56_string, var_58_bool); // 0xf84 ObjFunc
	var_54_bool = var_58_bool; // 0xf86 Mov
	return 2; // 0xf87 Return
}


func_4990(var_34_object)
{
	var_35_object = Obj(); // 0x137f PushV
	var_35_object = var_34_object; // 0x1380 Mov
	func_5278(); // 0x1381 NEW_2
	return 0; // 0x1383 Return
}


func_2432(var_57_float)
{
	var_58_float = 0; var_59_float = 0; // 0x980 PushV
	GetCameraFarDistance(var_59_float); // 0x981 Func
	var_57_float = var_59_float; // 0x983 Mov
	return 2; // 0x984 Return
}


func_4996(var_22_object)
{
	var_23_bool = 0; var_24_object = Obj(); // 0x1385 PushV
	var_24_object = var_22_object; // 0x1386 Mov
	func_3959(var_23_bool, var_24_object); // 0x1387 NEW_2
	if(var_23_bool == 0) goto Label_5008; // 0x1389 JumpB
	var_27_object = Obj(); // 0x138a PushV
	func_4501(var_27_object); // 0x138b NEW_2
	var_30_float = -0.02; // 0x138d PushF
	ReportReputationChange(var_22_object, var_27_object, var_30_float); // 0x138e Func
	
Label_5008:
	return 0; // 0x1390 Return
}


func_3976(var_512_float, var_513_object, var_514_float, var_515_int)
{
	var_519_int = 0; var_520_string = ""; var_521_int = 0; var_522_float = 0; var_523_float = 0; var_524_float = 0; var_525_int = 0; var_526_string = ""; var_527_int = 0; var_528_float = 0; var_529_float = 0; var_530_float = 0; // 0xf88 PushV
	var_531_bool = 0; var_532_object = Obj(); var_533_string = ""; // 0xf89 PushV
	var_532_object = var_513_object; // 0xf8a Mov
	var_533_string = "health"; // 0xf8b MovS
	func_3964(var_531_bool, var_532_object, var_533_string); // 0xf8c NEW_2
	var_534_bool = var_531_bool == 0; // 0xf8e Not
	if(var_534_bool == 0) goto Label_3986; // 0xf8f JumpB
	var_512_float = 0.0; // 0xf90 MovF
	return 12; // 0xf91 Return
	
Label_3986:
	var_535_bool = 0; var_536_object = Obj(); var_537_string = ""; // 0xf92 PushV
	var_536_object = var_513_object; // 0xf93 Mov
	var_537_string = "armor"; // 0xf94 MovS
	func_3964(var_535_bool, var_536_object, var_537_string); // 0xf95 NEW_2
	var_538_bool = var_535_bool == 0; // 0xf97 Not
	if(var_538_bool == 0) goto Label_3995; // 0xf98 JumpB
	var_525_int = 0; // 0xf99 MovI
	goto Label_3998; // 0xf9a Jump
	
Label_3998:
	var_539_string = "armor_"; // 0xf9e PushS
	var_540_string = ""; var_541_int = 0; // 0xf9f PushV
	var_541_int = var_515_int; // 0xfa0 Mov
	func_3930(var_540_string, var_541_int); // 0xfa1 NEW_2
	var_526_string = var_539_string + var_540_string; // 0xfa3 Add2
	var_546_bool = 0; var_547_object = Obj(); var_548_string = ""; // 0xfa4 PushV
	var_547_object = var_513_object; // 0xfa5 Mov
	var_548_string = var_526_string; // 0xfa6 Mov
	func_3964(var_546_bool, var_547_object, var_548_string); // 0xfa7 NEW_2
	var_549_bool = var_546_bool == 0; // 0xfa9 Not
	if(var_549_bool == 0) goto Label_4013; // 0xfaa JumpB
	var_527_int = 0; // 0xfab MovI
	goto Label_4015; // 0xfac Jump
	
Label_4015:
	var_550_float = 0; var_551_float = 0; var_552_float = 0; // 0xfaf PushV
	var_553_int = var_525_int + var_527_int; // 0xfb0 Add
	var_554_float = 100.0; // 0xfb1 PushF
	var_551_float = var_553_int / var_553_int; // 0xfb2 Div2
	var_552_float = 1; // 0xfb3 MovI
	func_4517(var_550_float, var_551_float, var_552_float); // 0xfb4 NEW_2
	var_528_float = var_550_float; // 0xfb5 Mov
	var_556_string = "health"; // 0xfb7 PushS
	GetProperty(var_556_string, var_529_float); // 0xfb8 ObjFunc
	var_557_int = 1; // 0xfba PushI
	var_558_int = var_557_int - var_528_float; // 0xfbb Sub
	var_530_float = var_514_float * var_558_int; // 0xfbc Mult2
	var_559_string = "health"; // 0xfbd PushS
	var_560_float = 0; var_561_float = 0; var_562_float = 0; var_563_float = 0; // 0xfbe PushV
	var_561_float = var_529_float - var_530_float; // 0xfbf Sub2
	var_562_float = 0; // 0xfc0 MovI
	var_563_float = 1; // 0xfc1 MovI
	func_4524(var_560_float, var_561_float, var_562_float, var_563_float); // 0xfc2 NEW_2
	SetProperty(var_559_string, var_560_float); // 0xfc4 ObjFunc
	var_566_bool = 0; var_567_object = Obj(); // 0xfc6 PushV
	var_567_object = var_513_object; // 0xfc7 Mov
	func_3959(var_566_bool, var_567_object); // 0xfc8 NEW_2
	if(var_566_bool == 0) goto Label_4047; // 0xfca JumpB
	var_568_float = 0; // 0xfcb PushV
	var_568_float = -var_530_float; // 0xfcc Neg2
	func_4581(var_568_float); // 0xfcd NEW_2
	
Label_4047:
	var_512_float = var_530_float; // 0xfcf Mov
	return 12; // 0xfd0 Return
	
Label_4013:
	GetProperty(var_526_string, var_527_int); // 0xfad ObjFunc
	
Label_3995:
	var_572_string = "armor"; // 0xf9b PushS
	GetProperty(var_572_string, var_525_int); // 0xf9c ObjFunc
}


func_2444(var_0_bool, var_1_object)
{
	var_0_bool = 1; // 0x98c TMovB
	var_1_object = 0; // 0x98d TMovB
	Stop(); // 0x98e Func
	StopGroup0(); // 0x990 Func
	return 0; // 0x992 Return
}


func_3472(var_0_bool, var_404_bool, var_405_float)
{
	var_406_bool = 0; var_407_cvector = CVector(0,0,0); var_408_cvector = CVector(0,0,0); var_409_cvector = CVector(0,0,0); var_410_float = 0; var_411_bool = 0; var_412_cvector = CVector(0,0,0); var_413_cvector = CVector(0,0,0); var_414_cvector = CVector(0,0,0); var_415_float = 0; // 0xd90 PushV
	
Label_3473:
	IsAnimationPlaying(var_411_bool); // 0xd91 Func
	var_416_bool = var_411_bool == 0; // 0xd93 Not
	if(var_416_bool == 0) goto Label_3478; // 0xd94 JumpB
	goto Label_3510; // 0xd95 Jump
	
Label_3510:
	func_3647(var_415_float); // 0xdb7 NEW_2
	var_404_bool = 0; // 0xdb9 MovB
	return 10; // 0xdba Return
	
Label_3478:
	var_417_bool = 0; // 0xd96 PushV
	func_3543(var_417_bool); // 0xd97 NEW_2
	if(var_417_bool == 0) goto Label_3484; // 0xd99 JumpB
	var_404_bool = 1; // 0xd9a MovB
	return 10; // 0xd9b Return
	
Label_3484:
	var_456_bool = 0; var_457_object = Obj(); // 0xd9c PushV
	var_457_object = var_0_bool; // 0xd9d MovT
	func_4090(var_456_bool, var_457_object); // 0xd9e NEW_2
	var_458_bool = var_456_bool == 0; // 0xda0 Not
	if(var_458_bool == 0) goto Label_3492; // 0xda1 JumpB
	var_404_bool = 0; // 0xda2 MovB
	return 10; // 0xda3 Return
	
Label_3492:
	GetPFPosition(var_412_cvector); // 0xda4 TObjFunc
	GetPFPosition(var_413_cvector); // 0xda6 Func
	var_414_cvector = var_412_cvector - var_413_cvector; // 0xda8 Sub2
	var_415_float = var_414_cvector | var_414_cvector; // 0xda9 Or2
	var_459_float = var_405_float * var_405_float; // 0xdaa Mult
	var_460_bool = var_415_float < var_459_float; // 0xdab LT
	if(var_460_bool == 0) goto Label_3507; // 0xdac JumpB
	var_461_bool = 0; var_462_float = 0; // 0xdad PushV
	var_462_float = var_405_float; // 0xdae Mov
	func_3308(var_415_float, var_461_bool, var_462_float); // 0xdaf NEW_2
	var_404_bool = 1; // 0xdb1 MovB
	return 10; // 0xdb2 Return
	
Label_3507:
	sync(); // 0xdb3 Func
	goto Label_3473; // 0xdb5 Jump
}


func_5009(var_20_bool, var_21_string)
{
	var_22_object = Obj(); var_23_object = Obj(); // 0x1391 PushV
	var_24_string = "heal"; // 0x1392 PushS
	var_25_bool = var_21_string == var_24_string; // 0x1393 Eq
	if(var_25_bool == 0) goto Label_5023; // 0x1394 JumpB
	var_26_string = "player"; // 0x1395 PushS
	FindActor(var_23_object, var_26_string); // 0x1396 Func
	var_27_bool = 0; var_28_object = Obj(); // 0x1398 PushV
	var_28_object = var_23_object; // 0x1399 Mov
	func_5306(var_28_object); // 0x139a NEW_2
	var_20_bool = var_27_bool; // 0x139b Mov
	return 2; // 0x139d Return
	
Label_5023:
	var_20_bool = 0; // 0x139f MovB
	return 2; // 0x13a0 Return
}


func_2451(var_0_bool, var_1_object)
{
	var_0_bool = 1; // 0x993 TMovB
	var_1_object = 1; // 0x994 TMovB
	Stop(); // 0x995 Func
	StopGroup0(); // 0x997 Func
	return 0; // 0x999 Return
}


func_4501(var_107_object)
{
	var_108_object = Obj(); var_109_object = Obj(); // 0x1195 PushV
	self(var_109_object); // 0x1196 Func
	var_107_object = var_109_object; // 0x1198 Mov
	return 2; // 0x1199 Return
}


func_1941(var_21_object)
{
	EventDisable(0); // 0x796 EventDisable
	var_22_object = Obj(); // 0x797 PushV
	var_22_object = var_21_object; // 0x798 Mov
	func_1974(var_22_object); // 0x799 NEW_2
	var_102_object = Obj(); // 0x79b PushV
	var_102_object = var_21_object; // 0x79c Mov
	func_5383(var_102_object); // 0x79d NEW_2
	EventEnable(0); // 0x79f EventEnable
	
Label_1952:
	Hold(); // 0x7a0 Func
	goto Label_1952; // 0x7a2 Jump
}


func_2458(var_67_bool)
{
	var_67_bool = 0; // 0x99a MovB
	return 0; // 0x99b Return
}


func_4507(var_51_cvector, var_52_cvector)
{
	var_59_float = 0; var_60_float = 0; // 0x119b PushV
	var_61_int = var_52_cvector | var_52_cvector; // 0x119c Or
	var_60_float = sqrt(var_61_int); // 0x119d Sqrt2
	var_62_float = 0.0; // 0x119e PushF
	var_63_bool = var_60_float < var_62_float; // 0x119f LT
	if(var_63_bool == 0) goto Label_4515; // 0x11a0 JumpB
	var_51_cvector = CVector(0.0, 0.0, 0.0); // 0x11a1 MovV
	return 2; // 0x11a2 Return
	
Label_4515:
	var_51_cvector = var_52_cvector / var_52_cvector; // 0x11a3 Div2
	return 2; // 0x11a4 Return
}


func_2460(var_61_object, var_62_cvector)
{
	var_63_object = Obj(); var_64_object = Obj(); // 0x99c PushV
	FindShiftedPathTo(var_64_object, var_62_cvector); // 0x99d Func
	var_61_object = var_64_object; // 0x99f Mov
	return 2; // 0x9a0 Return
}


func_5025(var_31_string)
{
	var_32_object = Obj(); var_33_object = Obj(); // 0x13a1 PushV
	var_34_string = "heal"; // 0x13a2 PushS
	var_35_bool = var_31_string == var_34_string; // 0x13a3 Eq
	if(var_35_bool == 0) goto Label_5037; // 0x13a4 JumpB
	var_36_string = "player"; // 0x13a5 PushS
	FindActor(var_33_object, var_36_string); // 0x13a6 Func
	var_37_object = Obj(); // 0x13a8 PushV
	var_37_object = var_33_object; // 0x13a9 Mov
	func_5309(); // 0x13aa NEW_2
	var_33_object = 0; // 0x13ac SetNull
	
Label_5037:
	return 2; // 0x13ad Return
}


func_4517(var_550_float, var_551_float, var_552_float)
{
	var_555_bool = var_551_float < var_552_float; // 0x11a6 LT
	if(var_555_bool == 0) goto Label_4522; // 0x11a7 JumpB
	var_550_float = var_551_float; // 0x11a8 Mov
	goto Label_4523; // 0x11a9 Jump
	
Label_4523:
	return 0; // 0x11ab Return
	
Label_4522:
	var_550_float = var_552_float; // 0x11aa Mov
}


func_4524(var_560_float, var_561_float, var_562_float, var_563_float)
{
	var_564_bool = var_561_float < var_562_float; // 0x11ad LT
	if(var_564_bool == 0) goto Label_4529; // 0x11ae JumpB
	var_560_float = var_562_float; // 0x11af Mov
	return 0; // 0x11b0 Return
	
Label_4529:
	var_565_bool = var_561_float > var_563_float; // 0x11b1 GT
	if(var_565_bool == 0) goto Label_4533; // 0x11b2 JumpB
	var_560_float = var_563_float; // 0x11b3 Mov
	return 0; // 0x11b4 Return
	
Label_4533:
	var_560_float = var_561_float; // 0x11b5 Mov
	return 0; // 0x11b6 Return
}


func_5038(var_91_string, var_92_int)
{
	var_93_string = ""; var_94_string = ""; // 0x13ae PushV
	var_94_string = "idle"; // 0x13af MovS
	var_95_int = var_92_int; // 0x13b0 Push
	if(var_95_int == 0) goto Label_5043; // 0x13b1 JumpB
	var_94_string = var_94_string + var_92_int; // 0x13b2 Add2
	
Label_5043:
	var_91_string = var_94_string; // 0x13b3 Mov
	return 2; // 0x13b4 Return
}


func_2991(var_183_object)
{
	var_190_object = Obj(); var_191_bool = 0; var_192_float = 0; // 0xbb0 PushV
	var_190_object = var_183_object; // 0xbb1 Mov
	var_191_bool = 1; // 0xbb2 MovB
	var_192_float = 180.0; // 0xbb3 MovF
	func_3005(var_186_int, var_187_bool, var_188_float, var_189_int, var_183_object, var_190_object, var_191_bool, var_192_float); // 0xbb4 NEW_2
	return 0; // 0xbb6 Return
}


func_5045(var_85_int)
{
	var_86_int = 0; var_87_bool = 0; var_88_int = 0; var_89_bool = 0; // 0x13b5 PushV
	var_88_int = 0; // 0x13b6 MovI
	
Label_5047:
	var_90_string = "all"; // 0x13b7 PushS
	var_91_string = ""; var_92_int = 0; // 0x13b8 PushV
	var_92_int = var_88_int; // 0x13b9 Mov
	func_5038(var_91_string, var_92_int); // 0x13ba NEW_2
	HasAnimation(var_89_bool, var_90_string, var_91_string); // 0x13bc Func
	var_96_bool = var_89_bool == 0; // 0x13be Not
	if(var_96_bool == 0) goto Label_5057; // 0x13bf JumpB
	goto Label_5060; // 0x13c0 Jump
	
Label_5060:
	var_85_int = var_88_int; // 0x13c4 Mov
	return 4; // 0x13c5 Return
	
Label_5057:
	var_97_int = 1; // 0x13c1 PushI
	var_88_int = var_88_int + var_97_int; // 0x13c2 Add2
	goto Label_5047; // 0x13c3 Jump
}


func_1974(var_22_object)
{
	var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_string = ""; var_28_object = Obj(); var_29_bool = 0; var_30_bool = 0; var_31_float = 0; var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_string = ""; var_38_object = Obj(); var_39_bool = 0; var_40_bool = 0; var_41_float = 0; var_42_cvector = CVector(0,0,0); // 0x7b6 PushV
	var_43_bool = var_22_object == 0; // 0x7b7 NullEq
	if(var_43_bool == 0) goto Label_1982; // 0x7b8 JumpB
	var_44_string = ""; // 0x7b9 PushV
	var_44_string = "fdie"; // 0x7ba MovS
	func_2065(var_44_string); // 0x7bb NEW_2
	goto Label_2064; // 0x7bd Jump
	
Label_2064:
	return 20; // 0x810 Return
	
Label_1982:
	GetPosition(var_33_cvector); // 0x7be ObjFunc
	GetPosition(var_34_cvector); // 0x7c0 Func
	GetDirection(var_35_cvector); // 0x7c2 Func
	var_36_cvector = var_34_cvector - var_33_cvector; // 0x7c4 Sub2
	var_76_float = GetByIndex(var_36_cvector, 0); // 0x7c5 PushE
	var_77_float = GetByIndex(var_35_cvector, 0); // 0x7c6 PushE
	var_78_float = var_76_float * var_77_float; // 0x7c7 Mult
	var_79_float = GetByIndex(var_36_cvector, 2); // 0x7c8 PushE
	var_80_float = GetByIndex(var_35_cvector, 2); // 0x7c9 PushE
	var_81_float = var_79_float * var_80_float; // 0x7ca Mult
	var_82_int = var_78_float + var_81_float; // 0x7cb Add
	var_83_int = 0; // 0x7cc PushI
	var_84_bool = var_82_int >= var_83_int; // 0x7cd GE
	if(var_84_bool == 0) goto Label_2001; // 0x7ce JumpB
	var_37_string = "fdie"; // 0x7cf MovS
	goto Label_2002; // 0x7d0 Jump
	
Label_2002:
	RemoveRTEnvelope(); // 0x7d2 Func
	SetDeathState(); // 0x7d4 Func
	Stop(); // 0x7d6 Func
	StopAsync(); // 0x7d8 Func
	var_38_object = var_22_object; // 0x7da Mov
	var_85_string = "GetScriptProperty"; // 0x7db PushS
	var_86_int = 2; // 0x7dc PushI
	var_87_bool = IsFuncExist(var_22_object, var_85_string, var_86_int); // 0x7dd FuncExist
	if(var_87_bool == 0) goto Label_2026; // 0x7de JumpB
	var_88_string = "Owner"; // 0x7df PushS
	HasScriptProperty(var_39_bool, var_88_string); // 0x7e0 ObjFunc
	var_89_bool = var_39_bool; // 0x7e2 Push
	if(var_89_bool == 0) goto Label_2026; // 0x7e3 JumpB
	var_90_string = "Owner"; // 0x7e4 PushS
	GetScriptProperty(var_38_object, var_90_string); // 0x7e5 ObjFunc
	var_91_bool = var_38_object == 0; // 0x7e7 NullEq
	if(var_91_bool == 0) goto Label_2026; // 0x7e8 JumpB
	var_38_object = var_22_object; // 0x7e9 Mov
	
Label_2026:
	var_92_string = "@GetEyesHeight"; // 0x7ea PushS
	var_93_int = 1; // 0x7eb PushI
	var_94_bool = IsFuncExist(var_38_object, var_92_string, var_93_int); // 0x7ec FuncExist
	if(var_94_bool == 0) goto Label_2041; // 0x7ed JumpB
	GetEyesHeight(var_41_float); // 0x7ee ObjFunc
	var_42_cvector = CVector(0.0, 0.0, 0.0); // 0x7f0 MovV
	var_95_float = GetByIndex(var_42_cvector, 1); // 0x7f1 PushE
	var_95_float = var_41_float; // 0x7f2 Mov
	SetByIndex(var_42_cvector, 1) = var_95_float; // 0x7f3 PopE
	var_96_string = "head"; // 0x7f4 PushS
	LookAsync(var_22_object, var_96_string, var_42_cvector); // 0x7f5 Func
	var_40_bool = 1; // 0x7f7 MovB
	goto Label_2042; // 0x7f8 Jump
	
Label_2042:
	var_97_string = ""; // 0x7fa PushV
	var_97_string = var_37_string; // 0x7fb Mov
	func_4460(var_97_string); // 0x7fc NEW_2
	var_98_string = "all"; // 0x7fe PushS
	PlayAnimation(var_98_string, var_37_string); // 0x7ff Func
	WaitForAnimEnd(); // 0x801 Func
	var_99_bool = var_40_bool; // 0x803 Push
	if(var_99_bool == 0) goto Label_2058; // 0x804 JumpB
	StopAsync(); // 0x805 Func
	var_100_string = "head"; // 0x807 PushS
	UnlookAsync(var_100_string); // 0x808 Func
	
Label_2058:
	var_101_string = "all"; // 0x80a PushS
	LockAnimationEnd(var_101_string, var_37_string); // 0x80b Func
	RemoveEnvelope(); // 0x80d Func
	var_38_object = 0; // 0x80f SetNull
	
Label_2041:
	var_40_bool = 0; // 0x7f9 MovB
	
Label_2001:
	var_37_string = "bdie"; // 0x7d1 MovS
}


func_2999(var_509_float)
{
	var_509_float = 0.05; // 0xbb8 MovF
	return 0; // 0xbb9 Return
}


func_4535(var_29_bool, var_30_int, var_31_int)
{
	var_32_int = 0; var_33_int = 0; // 0x11b7 PushV
	irand(var_33_int, var_31_int); // 0x11b8 Func
	var_29_bool = var_33_int < var_30_int; // 0x11ba LT2
	return 2; // 0x11bb Return
}


func_3002(var_516_int)
{
	var_516_int = 0; // 0xbbb MovI
	return 0; // 0xbbc Return
}


func_3515(var_0_bool, var_419_bool)
{
	var_420_cvector = CVector(0,0,0); var_421_cvector = CVector(0,0,0); var_422_cvector = CVector(0,0,0); var_423_float = 0; var_424_float = 0; var_425_cvector = CVector(0,0,0); var_426_cvector = CVector(0,0,0); var_427_cvector = CVector(0,0,0); var_428_float = 0; var_429_float = 0; // 0xdbb PushV
	var_430_bool = 0; var_431_object = Obj(); // 0xdbc PushV
	var_431_object = var_0_bool; // 0xdbd MovT
	func_4090(var_430_bool, var_431_object); // 0xdbe NEW_2
	var_432_bool = var_430_bool == 0; // 0xdc0 Not
	if(var_432_bool == 0) goto Label_3524; // 0xdc1 JumpB
	var_419_bool = 0; // 0xdc2 MovB
	return 10; // 0xdc3 Return
	
Label_3524:
	var_433_bool = 0; // 0xdc4 PushV
	func_3604(var_429_float, var_433_bool); // 0xdc5 NEW_2
	if(var_433_bool == 0) goto Label_3541; // 0xdc7 JumpB
	GetPFPosition(var_425_cvector); // 0xdc8 TObjFunc
	GetPFPosition(var_426_cvector); // 0xdca Func
	var_427_cvector = var_425_cvector - var_426_cvector; // 0xdcc Sub2
	var_428_float = var_427_cvector | var_427_cvector; // 0xdcd Or2
	GetAttackDistance(var_429_float); // 0xdce TObjFunc
	var_434_int = 50; // 0xdd0 PushI
	var_429_float = var_429_float + var_434_int; // 0xdd1 Add2
	var_435_float = var_429_float * var_429_float; // 0xdd2 Mult
	var_419_bool = var_428_float <= var_435_float; // 0xdd3 LE2
	return 10; // 0xdd4 Return
	
Label_3541:
	var_419_bool = 0; // 0xdd5 MovB
	return 10; // 0xdd6 Return
}


func_4540(var_72_float, var_73_cvector, var_74_cvector)
{
	var_75_float = GetByIndex(var_73_cvector, 0); // 0x11bd PushE
	var_76_float = GetByIndex(var_74_cvector, 0); // 0x11be PushE
	var_77_float = var_75_float * var_76_float; // 0x11bf Mult
	var_78_float = GetByIndex(var_73_cvector, 2); // 0x11c0 PushE
	var_79_float = GetByIndex(var_74_cvector, 2); // 0x11c1 PushE
	var_80_float = var_78_float * var_79_float; // 0x11c2 Mult
	var_72_float = var_77_float + var_80_float; // 0x11c3 Add2
	return 0; // 0x11c4 Return
}


func_3005(var_0_bool, var_3_object, var_5_bool, var_190_object, var_191_bool, var_192_float, var_267_bool, var_353_bool)
{
	var_193_float = 0; var_194_cvector = CVector(0,0,0); var_195_cvector = CVector(0,0,0); var_196_bool = 0; var_197_bool = 0; var_198_float = 0; var_199_cvector = CVector(0,0,0); var_200_float = 0; var_201_cvector = CVector(0,0,0); var_202_bool = 0; var_203_float = 0; var_204_float = 0; var_205_cvector = CVector(0,0,0); var_206_cvector = CVector(0,0,0); var_207_bool = 0; var_208_bool = 0; var_209_float = 0; var_210_cvector = CVector(0,0,0); var_211_float = 0; var_212_cvector = CVector(0,0,0); var_213_bool = 0; var_214_float = 0; // 0xbbd PushV
	func_3234(var_212_cvector, var_213_bool, var_214_float); // 0xbbf NEW_2
	var_5_bool = 0; // 0xbc1 TMovI
	var_237_string = "@GetAttackDistance"; // 0xbc2 PushS
	var_238_int = 1; // 0xbc3 PushI
	var_239_bool = IsFuncExist(var_190_object, var_237_string, var_238_int); // 0xbc4 FuncExist
	if(var_239_bool == 0) goto Label_3019; // 0xbc5 JumpB
	GetAttackDistance(var_204_float); // 0xbc6 ObjFunc
	var_240_int = 50; // 0xbc8 PushI
	var_204_float = var_204_float + var_240_int; // 0xbc9 Add2
	goto Label_3020; // 0xbca Jump
	
Label_3020:
	var_241_int = 150; // 0xbcc PushI
	var_242_bool = var_204_float >= var_241_int; // 0xbcd GE
	if(var_242_bool == 0) goto Label_3024; // 0xbce JumpB
	var_204_float = 150; // 0xbcf MovI
	
Label_3024:
	var_3_object = 0; // 0xbd0 TMovB
	var_0_bool = var_190_object; // 0xbd1 TMov
	IsPlayerActor(var_0_bool, var_207_bool); // 0xbd2 Func
	var_243_bool = var_207_bool; // 0xbd4 Push
	if(var_243_bool == 0) goto Label_3038; // 0xbd5 JumpB
	var_244_string = "attack"; // 0xbd6 PushS
	PlayGlobalMusic(var_244_string); // 0xbd7 Func
	var_245_object = Obj(); // 0xbd9 PushV
	func_4501(var_245_object); // 0xbda NEW_2
	SendPlayerEnemy(var_190_object, var_245_object); // 0xbdc Func
	
Label_3038:
	var_248_bool = var_191_bool; // 0xbde Push
	if(var_248_bool == 0) goto Label_3042; // 0xbdf JumpB
	var_208_bool = 0; // 0xbe0 MovB
	goto Label_3043; // 0xbe1 Jump
	
Label_3043:
	var_249_float = 400.0; // 0xbe3 PushF
	var_209_float = var_249_float + var_204_float; // 0xbe4 Add2
	
Label_3045:
	var_250_bool = 0; // 0xbe5 PushV
	var_250_bool = 0; // 0xbe6 MovB
	var_251_bool = 0; var_252_object = Obj(); // 0xbe7 PushV
	var_252_object = var_0_bool; // 0xbe8 MovT
	func_4090(var_251_bool, var_252_object); // 0xbe9 NEW_2
	if(var_251_bool == 0) goto Label_3055; // 0xbeb JumpB
	var_253_bool = var_3_object == 0; // 0xbec Not
	if(var_253_bool == 0) goto Label_3055; // 0xbed JumpB
	var_250_bool = 1; // 0xbee MovB
	
Label_3055:
	if(var_250_bool == 0) goto Label_3217; // 0xbef JumpB
	func_3647(var_214_float); // 0xbf1 NEW_2
	GetPFPosition(var_205_cvector); // 0xbf3 TObjFunc
	GetPFPosition(var_206_cvector); // 0xbf5 Func
	var_210_cvector = var_205_cvector - var_206_cvector; // 0xbf7 Sub2
	var_211_float = var_210_cvector | var_210_cvector; // 0xbf8 Or2
	var_259_float = var_209_float * var_209_float; // 0xbf9 Mult
	var_260_bool = var_211_float >= var_259_float; // 0xbfa GE
	if(var_260_bool == 0) goto Label_3083; // 0xbfb JumpB
	var_261_bool = 0; var_262_object = Obj(); var_263_float = 0; var_264_float = 0; var_265_bool = 0; var_266_bool = 0; // 0xbfc PushV
	var_262_object = var_0_bool; // 0xbfd MovT
	var_263_float = var_204_float; // 0xbfe Mov
	var_264_float = 3000.0; // 0xbff MovF
	var_265_bool = 1; // 0xc00 MovB
	var_266_bool = 0; // 0xc01 MovB
	TaskCall(8); // 0xc02 TaskCall
	func_3674(var_269_bool, var_261_bool, var_262_object, var_263_float, var_264_float, var_265_bool, var_266_bool); // 0xc03 NEW_2
	TaskReturn(); // 0xc04 TaskReturn
	var_338_bool = var_267_bool == 0; // 0xc06 Not
	if(var_338_bool == 0) goto Label_3081; // 0xc07 JumpB
	goto Label_3217; // 0xc08 Jump
	
Label_3217:
	WaitForAnimEnd(); // 0xc91 Func
	var_339_object = var_3_object; // 0xc93 PushT
	if(var_339_object == 0) goto Label_3222; // 0xc94 JumpB
	return 22; // 0xc95 Return
	
Label_3222:
	var_340_string = "all"; // 0xc96 PushS
	var_341_string = "attack_off"; // 0xc97 PushS
	PlayAnimation(var_340_string, var_341_string); // 0xc98 Func
	WaitForAnimEnd(); // 0xc9a Func
	var_342_bool = var_207_bool; // 0xc9c Push
	if(var_342_bool == 0) goto Label_3233; // 0xc9d JumpB
	var_343_float = 2.0; // 0xc9e PushF
	Sleep(var_343_float); // 0xc9f Func
	
Label_3233:
	return 22; // 0xca1 Return
	
Label_3081:
	var_208_bool = 0; // 0xc09 MovB
	goto Label_3216; // 0xc0a Jump
	
Label_3216:
	goto Label_3045; // 0xc90 Jump
	
Label_3083:
	var_344_float = var_192_float * var_192_float; // 0xc0b Mult
	var_345_bool = var_211_float >= var_344_float; // 0xc0c GE
	if(var_345_bool == 0) goto Label_3208; // 0xc0d JumpB
	GetPFPosition(var_212_cvector); // 0xc0e TObjFunc
	CanReachByPF(var_213_bool, var_212_cvector); // 0xc10 Func
	var_346_bool = var_213_bool == 0; // 0xc12 Not
	if(var_346_bool == 0) goto Label_3107; // 0xc13 JumpB
	var_347_bool = 0; var_348_object = Obj(); var_349_float = 0; var_350_float = 0; var_351_bool = 0; var_352_bool = 0; // 0xc14 PushV
	var_348_object = var_0_bool; // 0xc15 MovT
	var_349_float = var_204_float; // 0xc16 Mov
	var_350_float = 3000.0; // 0xc17 MovF
	var_351_bool = 1; // 0xc18 MovB
	var_352_bool = 0; // 0xc19 MovB
	TaskCall(8); // 0xc1a TaskCall
	func_3674(var_355_bool, var_347_bool, var_348_object, var_349_float, var_350_float, var_351_bool, var_352_bool); // 0xc1b NEW_2
	TaskReturn(); // 0xc1c TaskReturn
	var_356_bool = var_353_bool == 0; // 0xc1e Not
	if(var_356_bool == 0) goto Label_3105; // 0xc1f JumpB
	goto Label_3217; // 0xc20 Jump
	
Label_3105:
	var_208_bool = 0; // 0xc21 MovB
	goto Label_3045; // 0xc22 Jump
	
Label_3107:
	var_357_bool = var_208_bool == 0; // 0xc23 Not
	if(var_357_bool == 0) goto Label_3132; // 0xc24 JumpB
	var_358_object = Obj(); // 0xc25 PushV
	var_358_object = var_0_bool; // 0xc26 MovT
	func_4240(); // 0xc27 NEW_2
	var_359_string = "all"; // 0xc29 PushS
	var_360_string = "attack_on"; // 0xc2a PushS
	PlayAnimation(var_359_string, var_360_string); // 0xc2b Func
	WaitForAnimEnd(); // 0xc2d Func
	func_3647(var_214_float); // 0xc30 NEW_2
	StopAsync(); // 0xc32 Func
	var_208_bool = 1; // 0xc34 MovB
	var_361_bool = 0; var_362_object = Obj(); // 0xc35 PushV
	var_362_object = var_0_bool; // 0xc36 MovT
	func_4090(var_361_bool, var_362_object); // 0xc37 NEW_2
	var_363_bool = var_361_bool == 0; // 0xc39 Not
	if(var_363_bool == 0) goto Label_3132; // 0xc3a JumpB
	goto Label_3217; // 0xc3b Jump
	
Label_3132:
	rand(var_214_float); // 0xc3c Func
	var_364_bool = 0; // 0xc3e PushV
	var_364_bool = 1; // 0xc3f MovB
	var_365_float = 0.25; // 0xc40 PushF
	var_366_bool = var_214_float < var_365_float; // 0xc41 LT
	if(var_366_bool == 0) goto Label_3144; // 0xc42 JumpB
	var_367_bool = 0; // 0xc43 PushV
	func_3604(var_364_bool, var_367_bool); // 0xc44 NEW_2
	if(var_367_bool == 0) goto Label_3144; // 0xc46 JumpB
	var_364_bool = 0; // 0xc47 MovB
	
Label_3144:
	if(var_364_bool == 0) goto Label_3161; // 0xc48 JumpB
	Face(var_0_bool); // 0xc49 Func
	func_3654(); // 0xc4c NEW_2
	var_402_string = "all"; // 0xc4e PushS
	var_403_string = "attack_stay"; // 0xc4f PushS
	PlayAnimation(var_402_string, var_403_string); // 0xc50 Func
	var_404_bool = 0; var_405_float = 0; // 0xc52 PushV
	var_405_float = var_192_float; // 0xc53 Mov
	func_3472(var_214_float, var_404_bool, var_405_float); // 0xc54 NEW_2
	StopAsync(); // 0xc56 Func
	goto Label_3207; // 0xc58 Jump
	
Label_3207:
	goto Label_3216; // 0xc87 Jump
	
Label_3161:
	Face(var_0_bool); // 0xc59 Func
	var_615_string = "all"; // 0xc5b PushS
	var_616_string = "fjump"; // 0xc5c PushS
	PlayAnimation(var_615_string, var_616_string); // 0xc5d Func
	WaitForAnimEnd(); // 0xc5f Func
	func_3647(var_214_float); // 0xc62 NEW_2
	var_617_cvector = CVector(0.0, 0.0, 0.0); // 0xc64 PushVec
	SetSpeed(var_617_cvector); // 0xc65 Func
	Stop(); // 0xc67 Func
	StopAsync(); // 0xc69 Func
	var_618_bool = 0; // 0xc6b PushV
	func_3604(var_214_float, var_618_bool); // 0xc6c NEW_2
	var_619_bool = var_618_bool == 0; // 0xc6e Not
	if(var_619_bool == 0) goto Label_3207; // 0xc6f JumpB
	var_620_bool = 0; var_621_object = Obj(); // 0xc70 PushV
	var_621_object = var_0_bool; // 0xc71 MovT
	func_4090(var_620_bool, var_621_object); // 0xc72 NEW_2
	var_622_bool = var_620_bool == 0; // 0xc74 Not
	if(var_622_bool == 0) goto Label_3191; // 0xc75 JumpB
	goto Label_3217; // 0xc76 Jump
	
Label_3191:
	GetPFPosition(var_205_cvector); // 0xc77 TObjFunc
	GetPFPosition(var_206_cvector); // 0xc79 Func
	var_210_cvector = var_205_cvector - var_206_cvector; // 0xc7b Sub2
	var_211_float = var_210_cvector | var_210_cvector; // 0xc7c Or2
	var_623_float = var_192_float * var_192_float; // 0xc7d Mult
	var_624_bool = var_211_float < var_623_float; // 0xc7e LT
	if(var_624_bool == 0) goto Label_3207; // 0xc7f JumpB
	var_625_bool = 0; var_626_float = 0; // 0xc80 PushV
	var_626_float = var_192_float; // 0xc81 Mov
	func_3308(var_214_float, var_625_bool, var_626_float); // 0xc82 NEW_2
	var_627_bool = var_625_bool == 0; // 0xc84 Not
	if(var_627_bool == 0) goto Label_3207; // 0xc85 JumpB
	goto Label_3217; // 0xc86 Jump
	
Label_3208:
	var_628_bool = 0; var_629_float = 0; // 0xc88 PushV
	var_629_float = var_192_float; // 0xc89 Mov
	func_3308(var_214_float, var_628_bool, var_629_float); // 0xc8a NEW_2
	var_630_bool = var_628_bool == 0; // 0xc8c Not
	if(var_630_bool == 0) goto Label_3215; // 0xc8d JumpB
	goto Label_3217; // 0xc8e Jump
	
Label_3215:
	var_208_bool = 1; // 0xc8f MovB
	
Label_3042:
	var_208_bool = 1; // 0xbe2 MovB
	
Label_3019:
	var_204_float = var_192_float; // 0xbcb Mov
}


func_4549(var_81_float, var_82_cvector)
{
	var_83_float = GetByIndex(var_82_cvector, 0); // 0x11c6 PushE
	var_84_float = GetByIndex(var_82_cvector, 0); // 0x11c7 PushE
	var_85_float = var_83_float * var_84_float; // 0x11c8 Mult
	var_86_float = GetByIndex(var_82_cvector, 2); // 0x11c9 PushE
	var_87_float = GetByIndex(var_82_cvector, 2); // 0x11ca PushE
	var_88_float = var_86_float * var_87_float; // 0x11cb Mult
	var_89_int = var_85_float + var_88_float; // 0x11cc Add
	var_81_float = sqrt(var_89_int); // 0x11cd Sqrt2
	return 0; // 0x11ce Return
}


func_5062(var_62_int)
{
	var_64_bool = 0; // 0x13c7 PushV
	func_5368(var_64_bool); // 0x13c8 NEW_2
	if(var_64_bool == 0) goto Label_5069; // 0x13ca JumpB
	var_62_int = 2; // 0x13cb MovI
	goto Label_5070; // 0x13cc Jump
	
Label_5070:
	return 0; // 0x13ce Return
	
Label_5069:
	var_62_int = 0; // 0x13cd MovI
}


func_5071(var_61_object)
{
	var_62_object = Obj(); // 0x13d0 PushV
	var_62_object = var_61_object; // 0x13d1 Mov
	TaskCall(6); // 0x13d2 TaskCall
	func_2716(var_63_object, var_62_object); // 0x13d3 NEW_2
	TaskReturn(); // 0x13d4 TaskReturn
	return 0; // 0x13d6 Return
}


func_4559(var_69_float, var_70_cvector, var_71_cvector)
{
	var_72_float = 0; var_73_cvector = CVector(0,0,0); var_74_cvector = CVector(0,0,0); // 0x11d0 PushV
	var_73_cvector = var_70_cvector; // 0x11d1 Mov
	var_74_cvector = var_71_cvector; // 0x11d2 Mov
	func_4540(var_72_float, var_73_cvector, var_74_cvector); // 0x11d3 NEW_2
	var_81_float = 0; var_82_cvector = CVector(0,0,0); // 0x11d5 PushV
	var_82_cvector = var_70_cvector; // 0x11d6 Mov
	func_4549(var_81_float, var_82_cvector); // 0x11d7 NEW_2
	var_90_float = 0; var_91_cvector = CVector(0,0,0); // 0x11d9 PushV
	var_91_cvector = var_71_cvector; // 0x11da Mov
	func_4549(var_90_float, var_91_cvector); // 0x11db NEW_2
	var_92_float = var_81_float * var_90_float; // 0x11dd Mult
	var_69_float = var_72_float / var_72_float; // 0x11de Div2
	return 0; // 0x11df Return
}


func_4049(var_47_bool)
{
	var_49_bool = 0; var_50_bool = 0; // 0xfd1 PushV
	IsDead(var_50_bool); // 0xfd2 ObjFunc
	var_47_bool = var_50_bool; // 0xfd4 Mov
	return 2; // 0xfd5 Return
}


func_4054(var_36_bool, var_37_object)
{
	var_38_object = Obj(); var_39_object = Obj(); var_40_object = Obj(); var_41_object = Obj(); // 0xfd6 PushV
	var_42_bool = var_37_object == 0; // 0xfd7 NullEq
	if(var_42_bool == 0) goto Label_4059; // 0xfd8 JumpB
	var_36_bool = 0; // 0xfd9 MovB
	return 4; // 0xfda Return
	
Label_4059:
	var_43_bool = 0; // 0xfdb PushV
	var_43_bool = 0; // 0xfdc MovB
	var_44_string = "IsDead"; // 0xfdd PushS
	var_45_int = 1; // 0xfde PushI
	var_46_bool = IsFuncExist(var_37_object, var_44_string, var_45_int); // 0xfdf FuncExist
	if(var_46_bool == 0) goto Label_4071; // 0xfe0 JumpB
	var_47_bool = 0; var_48_object = Obj(); // 0xfe1 PushV
	var_48_object = var_37_object; // 0xfe2 Mov
	func_4049(var_48_object); // 0xfe3 NEW_2
	if(var_47_bool == 0) goto Label_4071; // 0xfe5 JumpB
	var_43_bool = 1; // 0xfe6 MovB
	
Label_4071:
	if(var_43_bool == 0) goto Label_4074; // 0xfe7 JumpB
	var_36_bool = 0; // 0xfe8 MovB
	return 4; // 0xfe9 Return
	
Label_4074:
	GetScene(var_40_object); // 0xfea Func
	var_51_bool = var_40_object == 0; // 0xfec NullEq
	if(var_51_bool == 0) goto Label_4080; // 0xfed JumpB
	var_36_bool = 0; // 0xfee MovB
	return 4; // 0xfef Return
	
Label_4080:
	GetScene(var_41_object); // 0xff0 ObjFunc
	var_52_bool = var_40_object != var_41_object; // 0xff2 Neq
	if(var_52_bool == 0) goto Label_4086; // 0xff3 JumpB
	var_36_bool = 0; // 0xff4 MovB
	return 4; // 0xff5 Return
	
Label_4086:
	var_36_bool = 1; // 0xff6 MovB
	return 4; // 0xff7 Return
}


func_5079(var_89_int, var_90_object)
{
	var_91_bool = 0; var_92_object = Obj(); // 0x13d8 PushV
	var_92_object = var_90_object; // 0x13d9 Mov
	func_4090(var_91_bool, var_92_object); // 0x13da NEW_2
	if(var_91_bool == 0) goto Label_5087; // 0x13dc JumpB
	var_89_int = 2; // 0x13dd MovI
	goto Label_5088; // 0x13de Jump
	
Label_5088:
	return 0; // 0x13e0 Return
	
Label_5087:
	var_89_int = 0; // 0x13df MovI
}


func_3543(var_417_bool)
{
	var_418_bool = 0; // 0xdd7 PushV
	var_418_bool = 0; // 0xdd8 MovB
	var_419_bool = 0; // 0xdd9 PushV
	func_3515(var_418_bool, var_419_bool); // 0xdda NEW_2
	if(var_419_bool == 0) goto Label_3554; // 0xddc JumpB
	var_436_bool = 0; // 0xddd PushV
	func_3559(var_417_bool, var_418_bool, var_436_bool); // 0xdde NEW_2
	if(var_436_bool == 0) goto Label_3554; // 0xde0 JumpB
	var_418_bool = 1; // 0xde1 MovB
	
Label_3554:
	if(var_418_bool == 0) goto Label_3557; // 0xde2 JumpB
	var_417_bool = 1; // 0xde3 MovB
	return 0; // 0xde4 Return
	
Label_3557:
	var_417_bool = 0; // 0xde5 MovB
	return 0; // 0xde6 Return
}


func_4576(var_124_int, var_125_string)
{
	var_126_int = 0; var_127_int = 0; // 0x11e0 PushV
	GetVariable(var_125_string, var_127_int); // 0x11e1 Func
	var_124_int = var_127_int; // 0x11e3 Mov
	return 2; // 0x11e4 Return
}


func_5089(var_182_object)
{
	var_183_object = Obj(); // 0x13e2 PushV
	var_183_object = var_182_object; // 0x13e3 Mov
	TaskCall(7); // 0x13e4 TaskCall
	func_2991(var_183_object); // 0x13e5 NEW_2
	TaskReturn(); // 0x13e6 TaskReturn
	return 0; // 0x13e8 Return
}


func_4581(var_568_float)
{
	var_569_object = Obj(); var_570_object = Obj(); // 0x11e5 PushV
	CreateFloatVector(var_570_object); // 0x11e6 Func
	add(var_568_float); // 0x11e8 ObjFunc
	var_571_int = 15; // 0x11ea PushI
	SendWorldWndMessage(var_571_int, var_570_object); // 0x11eb Func
	return 2; // 0x11ed Return
}


func_3559(var_0_bool, var_4_string, var_436_bool)
{
	var_437_object = Obj(); var_438_bool = 0; var_439_float = 0; var_440_cvector = CVector(0,0,0); var_441_cvector = CVector(0,0,0); var_442_object = Obj(); var_443_bool = 0; var_444_float = 0; var_445_cvector = CVector(0,0,0); var_446_cvector = CVector(0,0,0); // 0xde7 PushV
	GetScene(var_442_object); // 0xde8 Func
	var_443_bool = 0; // 0xdea MovB
	
Label_3563:
	var_447_cvector = CVector(0,0,0); var_448_object = Obj(); // 0xdeb PushV
	var_448_object = var_0_bool; // 0xdec MovT
	func_3944(var_448_object); // 0xded NEW_2
	var_449_int = -var_447_cvector; // 0xdef Neg
	FindDirLength(var_444_float, var_449_int, var_444_float); // 0xdf0 Func
	var_450_bool = var_444_float < var_4_string; // 0xdf2 LT
	if(var_450_bool == 0) goto Label_3573; // 0xdf3 JumpB
	goto Label_3601; // 0xdf4 Jump
	
Label_3601:
	var_436_bool = var_443_bool; // 0xe11 Mov
	return 10; // 0xe12 Return
	
Label_3573:
	Face(var_0_bool); // 0xdf5 Func
	var_451_string = "all"; // 0xdf7 PushS
	var_452_string = "bjump"; // 0xdf8 PushS
	PlayAnimation(var_451_string, var_452_string); // 0xdf9 Func
	GetPFPosition(var_445_cvector); // 0xdfb TObjFunc
	GetPFPosition(var_446_cvector); // 0xdfd Func
	WaitForAnimEnd(); // 0xdff Func
	func_3647(var_446_cvector); // 0xe02 NEW_2
	StopAsync(); // 0xe04 Func
	var_453_cvector = CVector(0.0, 0.0, 0.0); // 0xe06 PushVec
	SetSpeed(var_453_cvector); // 0xe07 Func
	var_443_bool = 1; // 0xe09 MovB
	var_454_bool = 0; // 0xe0a PushV
	func_3515(var_446_cvector, var_454_bool); // 0xe0b NEW_2
	var_455_bool = var_454_bool == 0; // 0xe0d Not
	if(var_455_bool == 0) goto Label_3600; // 0xe0e JumpB
	goto Label_3601; // 0xe0f Jump
	
Label_3600:
	goto Label_3563; // 0xe10 Jump
}


func_5097(var_35_bool, var_36_object, var_37_bool)
{
	var_38_string = ""; var_39_string = ""; var_40_string = ""; var_41_string = ""; // 0x13e9 PushV
	var_42_bool = 0; var_43_object = Obj(); var_44_string = ""; // 0x13ea PushV
	var_43_object = var_36_object; // 0x13eb Mov
	var_44_string = "class"; // 0x13ec MovS
	func_3964(var_42_bool, var_43_object, var_44_string); // 0x13ed NEW_2
	var_51_bool = var_42_bool == 0; // 0x13ef Not
	if(var_51_bool == 0) goto Label_5107; // 0x13f0 JumpB
	var_35_bool = 0; // 0x13f1 MovB
	return 4; // 0x13f2 Return
	
Label_5107:
	var_52_string = "class"; // 0x13f3 PushS
	GetProperty(var_52_string, var_40_string); // 0x13f4 Func
	var_53_string = "class"; // 0x13f6 PushS
	GetProperty(var_53_string, var_41_string); // 0x13f7 ObjFunc
	var_54_bool = 0; // 0x13f9 PushV
	var_54_bool = 0; // 0x13fa MovB
	var_55_bool = var_37_bool == 0; // 0x13fb Not
	if(var_55_bool == 0) goto Label_5120; // 0x13fc JumpB
	var_56_bool = var_40_string == var_41_string; // 0x13fd Eq
	if(var_56_bool == 0) goto Label_5120; // 0x13fe JumpB
	var_54_bool = 1; // 0x13ff MovB
	
Label_5120:
	if(var_54_bool == 0) goto Label_5123; // 0x1400 JumpB
	var_35_bool = 1; // 0x1401 MovB
	return 4; // 0x1402 Return
	
Label_5123:
	var_57_string = "rat"; // 0x1403 PushS
	var_58_bool = var_41_string == var_57_string; // 0x1404 Eq
	if(var_58_bool == 0) goto Label_5129; // 0x1405 JumpB
	var_35_bool = 0; // 0x1406 MovB
	return 4; // 0x1407 Return
	
Label_5129:
	var_59_string = "rat_big"; // 0x1409 PushS
	var_60_bool = var_41_string == var_59_string; // 0x140a Eq
	if(var_60_bool == 0) goto Label_5135; // 0x140b JumpB
	var_35_bool = 0; // 0x140c MovB
	return 4; // 0x140d Return
	
Label_5135:
	var_61_string = "dog"; // 0x140f PushS
	var_62_bool = var_41_string == var_61_string; // 0x1410 Eq
	if(var_62_bool == 0) goto Label_5141; // 0x1411 JumpB
	var_35_bool = 0; // 0x1412 MovB
	return 4; // 0x1413 Return
	
Label_5141:
	var_63_string = "grabitel"; // 0x1415 PushS
	var_64_bool = var_41_string == var_63_string; // 0x1416 Eq
	if(var_64_bool == 0) goto Label_5147; // 0x1417 JumpB
	var_35_bool = 0; // 0x1418 MovB
	return 4; // 0x1419 Return
	
Label_5147:
	var_65_string = "bomber"; // 0x141b PushS
	var_66_bool = var_41_string == var_65_string; // 0x141c Eq
	if(var_66_bool == 0) goto Label_5153; // 0x141d JumpB
	var_35_bool = 0; // 0x141e MovB
	return 4; // 0x141f Return
	
Label_5153:
	var_67_string = "sanitar"; // 0x1421 PushS
	var_68_bool = var_41_string == var_67_string; // 0x1422 Eq
	if(var_68_bool == 0) goto Label_5159; // 0x1423 JumpB
	var_35_bool = 0; // 0x1424 MovB
	return 4; // 0x1425 Return
	
Label_5159:
	var_69_string = "hunter"; // 0x1427 PushS
	var_70_bool = var_41_string == var_69_string; // 0x1428 Eq
	if(var_70_bool == 0) goto Label_5165; // 0x1429 JumpB
	var_35_bool = 0; // 0x142a MovB
	return 4; // 0x142b Return
	
Label_5165:
	var_71_string = "soldier"; // 0x142d PushS
	var_72_bool = var_41_string == var_71_string; // 0x142e Eq
	if(var_72_bool == 0) goto Label_5170; // 0x142f JumpB
	var_35_bool = 0; // 0x1430 MovB
	return 4; // 0x1431 Return
	
Label_5170:
	var_35_bool = 1; // 0x1432 MovB
	return 4; // 0x1433 Return
}


func_4591(var_118_int)
{
	var_119_float = 0; var_120_float = 0; // 0x11ef PushV
	GetGameTime(var_120_float); // 0x11f0 Func
	var_121_int = 1; // 0x11f2 PushI
	var_122_int = 0; // 0x11f3 PushV
	var_123_int = 24; // 0x11f4 PushI
	var_122_int = var_120_float / var_120_float; // 0x11f5 Div2
	var_118_int = var_121_int + var_122_int; // 0x11f6 Add2
	return 2; // 0x11f7 Return
}


func_4600(var_22_object)
{
	var_23_bool = 0; var_24_bool = 0; // 0x11f8 PushV
	IsPlayerActor(var_22_object, var_24_bool); // 0x11f9 Func
	var_25_bool = var_24_bool; // 0x11fb Push
	if(var_25_bool == 0) goto Label_4608; // 0x11fc JumpB
	var_26_string = "attack"; // 0x11fd PushS
	PlayGlobalMusic(var_26_string); // 0x11fe Func
	
Label_4608:
	return 2; // 0x1200 Return
}


func_4090(var_32_bool, var_33_object)
{
	var_34_int = 0; var_35_int = 0; // 0xffa PushV
	var_36_bool = 0; var_37_object = Obj(); // 0xffb PushV
	var_37_object = var_33_object; // 0xffc Mov
	func_4054(var_36_bool, var_37_object); // 0xffd NEW_2
	var_53_bool = var_36_bool == 0; // 0xfff Not
	if(var_53_bool == 0) goto Label_4099; // 0x1000 JumpB
	var_32_bool = 0; // 0x1001 MovB
	return 2; // 0x1002 Return
	
Label_4099:
	var_54_bool = 0; var_55_object = Obj(); var_56_string = ""; // 0x1003 PushV
	var_55_object = var_33_object; // 0x1004 Mov
	var_56_string = "noaccess"; // 0x1005 MovS
	func_3964(var_54_bool, var_55_object, var_56_string); // 0x1006 NEW_2
	var_63_bool = var_54_bool == 0; // 0x1008 Not
	if(var_63_bool == 0) goto Label_4108; // 0x1009 JumpB
	var_32_bool = 1; // 0x100a MovB
	return 2; // 0x100b Return
	
Label_4108:
	var_64_string = "noaccess"; // 0x100c PushS
	GetProperty(var_64_string, var_35_int); // 0x100d ObjFunc
	var_65_int = 0; // 0x100f PushI
	var_32_bool = var_35_int == var_65_int; // 0x1010 Eq2
	return 2; // 0x1011 Return
}


