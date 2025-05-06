task_0_event_11(var_0_bool, var_1_int, var_2_object, var_3_object, var_4_object, var_5_string, var_6_bool, var_7_bool, var_8_bool, var_9_bool, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_bool = 0; // 0x1b PushV
	func_5511(var_20_bool); // 0x1c NEW_2
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
	var_21_int = 1; // 0x1bf PushI
	if(var_21_int == 0) goto Label_1942; // 0x1c0 JumpB
	func_4448(); // 0x1c2 NEW_2
	var_23_int = 45786; // 0x1c4 PushI
	var_24_bool = var_19_object == var_23_int; // 0x1c5 Eq
	if(var_24_bool == 0) goto Label_727; // 0x1c6 JumpB
	var_25_bool = 0; // 0x1c7 PushV
	var_25_bool = 0; // 0x1c8 MovB
	var_26_bool = 0; var_27_object = Obj(); // 0x1c9 PushV
	var_27_object = var_1_object; // 0x1ca MovT
	func_4637(var_27_object); // 0x1cb NEW_2
	if(var_26_bool == 0) goto Label_468; // 0x1cd JumpB
	var_34_bool = 0; var_35_object = Obj(); // 0x1ce PushV
	var_35_object = var_1_object; // 0x1cf MovT
	func_4669(var_34_bool, var_35_object); // 0x1d0 NEW_2
	if(var_34_bool == 0) goto Label_468; // 0x1d2 JumpB
	var_25_bool = 1; // 0x1d3 MovB
	
Label_468:
	if(var_25_bool == 0) goto Label_494; // 0x1d4 JumpB
	var_45_string = ""; // 0x1d5 PushV
	var_45_string = "Neutral"; // 0x1d6 MovS
	func_424(var_20_bool, var_45_string); // 0x1d7 NEW_2
	var_62_int = 543329; // 0x1d9 PushI
	SetMessage(var_62_int); // 0x1da TObjFunc
	ClearReplies(); // 0x1dc TObjFunc
	var_63_int = 543330; // 0x1de PushI
	var_64_int = 45790; // 0x1df PushI
	var_65_int = 45787; // 0x1e0 PushI
	AddReply(var_63_int, var_64_int, var_65_int); // 0x1e1 TObjFunc
	var_66_int = 543332; // 0x1e3 PushI
	var_67_int = 45790; // 0x1e4 PushI
	var_68_int = 45789; // 0x1e5 PushI
	AddReply(var_66_int, var_67_int, var_68_int); // 0x1e6 TObjFunc
	var_69_int = 543331; // 0x1e8 PushI
	var_70_int = -1; // 0x1e9 PushI
	var_71_int = 45788; // 0x1ea PushI
	AddReply(var_69_int, var_70_int, var_71_int); // 0x1eb TObjFunc
	return 0; // 0x1ed Return
	
Label_494:
	var_72_bool = 0; // 0x1ee PushV
	var_72_bool = 0; // 0x1ef MovB
	var_73_bool = 0; var_74_object = Obj(); // 0x1f0 PushV
	var_74_object = var_1_object; // 0x1f1 MovT
	func_4637(var_74_object); // 0x1f2 NEW_2
	if(var_73_bool == 0) goto Label_508; // 0x1f4 JumpB
	var_75_bool = 0; var_76_object = Obj(); // 0x1f5 PushV
	var_76_object = var_1_object; // 0x1f6 MovT
	func_4669(var_75_bool, var_76_object); // 0x1f7 NEW_2
	var_77_bool = var_75_bool == 0; // 0x1f9 Not
	if(var_77_bool == 0) goto Label_508; // 0x1fa JumpB
	var_72_bool = 1; // 0x1fb MovB
	
Label_508:
	if(var_72_bool == 0) goto Label_524; // 0x1fc JumpB
	var_78_string = ""; // 0x1fd PushV
	var_78_string = "Neutral"; // 0x1fe MovS
	func_424(var_20_bool, var_78_string); // 0x1ff NEW_2
	var_79_int = 543328; // 0x201 PushI
	SetMessage(var_79_int); // 0x202 TObjFunc
	ClearReplies(); // 0x204 TObjFunc
	var_80_int = 543336; // 0x206 PushI
	var_81_int = -1; // 0x207 PushI
	var_82_int = 45794; // 0x208 PushI
	AddReply(var_80_int, var_81_int, var_82_int); // 0x209 TObjFunc
	return 0; // 0x20b Return
	
Label_524:
	var_83_string = ""; // 0x20c PushV
	var_83_string = "Neutral"; // 0x20d MovS
	func_424(var_20_bool, var_83_string); // 0x20e NEW_2
	var_84_int = 537969; // 0x210 PushI
	SetMessage(var_84_int); // 0x211 TObjFunc
	ClearReplies(); // 0x213 TObjFunc
	var_85_bool = 0; // 0x215 PushV
	var_85_bool = 0; // 0x216 MovB
	var_86_bool = 0; var_87_object = Obj(); // 0x217 PushV
	var_87_object = var_1_object; // 0x218 MovT
	func_4649(var_86_bool, var_87_object); // 0x219 NEW_2
	if(var_86_bool == 0) goto Label_546; // 0x21b JumpB
	var_92_bool = 0; var_93_object = Obj(); // 0x21c PushV
	var_93_object = var_1_object; // 0x21d MovT
	func_4625(var_93_object); // 0x21e NEW_2
	if(var_92_bool == 0) goto Label_546; // 0x220 JumpB
	var_85_bool = 1; // 0x221 MovB
	
Label_546:
	if(var_85_bool == 0) goto Label_552; // 0x222 JumpB
	var_98_int = 537970; // 0x223 PushI
	var_99_int = 39833; // 0x224 PushI
	var_100_int = 39832; // 0x225 PushI
	AddReply(var_98_int, var_99_int, var_100_int); // 0x226 TObjFunc
	
Label_552:
	var_101_bool = 0; // 0x228 PushV
	var_101_bool = 0; // 0x229 MovB
	var_102_bool = 0; var_103_object = Obj(); // 0x22a PushV
	var_103_object = var_1_object; // 0x22b MovT
	func_4649(var_102_bool, var_103_object); // 0x22c NEW_2
	if(var_102_bool == 0) goto Label_565; // 0x22e JumpB
	var_104_bool = 0; var_105_object = Obj(); // 0x22f PushV
	var_105_object = var_1_object; // 0x230 MovT
	func_4625(var_105_object); // 0x231 NEW_2
	if(var_104_bool == 0) goto Label_565; // 0x233 JumpB
	var_101_bool = 1; // 0x234 MovB
	
Label_565:
	if(var_101_bool == 0) goto Label_571; // 0x235 JumpB
	var_106_int = 537995; // 0x236 PushI
	var_107_int = 39861; // 0x237 PushI
	var_108_int = 39860; // 0x238 PushI
	AddReply(var_106_int, var_107_int, var_108_int); // 0x239 TObjFunc
	
Label_571:
	var_109_bool = 0; // 0x23b PushV
	var_109_bool = 0; // 0x23c MovB
	var_110_bool = 0; var_111_object = Obj(); // 0x23d PushV
	var_111_object = var_1_object; // 0x23e MovT
	func_4649(var_110_bool, var_111_object); // 0x23f NEW_2
	if(var_110_bool == 0) goto Label_584; // 0x241 JumpB
	var_112_bool = 0; var_113_object = Obj(); // 0x242 PushV
	var_113_object = var_1_object; // 0x243 MovT
	func_4625(var_113_object); // 0x244 NEW_2
	if(var_112_bool == 0) goto Label_584; // 0x246 JumpB
	var_109_bool = 1; // 0x247 MovB
	
Label_584:
	if(var_109_bool == 0) goto Label_590; // 0x248 JumpB
	var_114_int = 538003; // 0x249 PushI
	var_115_int = 39869; // 0x24a PushI
	var_116_int = 39868; // 0x24b PushI
	AddReply(var_114_int, var_115_int, var_116_int); // 0x24c TObjFunc
	
Label_590:
	var_117_bool = 0; // 0x24e PushV
	var_117_bool = 0; // 0x24f MovB
	var_118_bool = 0; var_119_object = Obj(); // 0x250 PushV
	var_119_object = var_1_object; // 0x251 MovT
	func_4649(var_118_bool, var_119_object); // 0x252 NEW_2
	if(var_118_bool == 0) goto Label_603; // 0x254 JumpB
	var_120_bool = 0; var_121_object = Obj(); // 0x255 PushV
	var_121_object = var_1_object; // 0x256 MovT
	func_4625(var_121_object); // 0x257 NEW_2
	if(var_120_bool == 0) goto Label_603; // 0x259 JumpB
	var_117_bool = 1; // 0x25a MovB
	
Label_603:
	if(var_117_bool == 0) goto Label_609; // 0x25b JumpB
	var_122_int = 538012; // 0x25c PushI
	var_123_int = 39878; // 0x25d PushI
	var_124_int = 39877; // 0x25e PushI
	AddReply(var_122_int, var_123_int, var_124_int); // 0x25f TObjFunc
	
Label_609:
	var_125_bool = 0; // 0x261 PushV
	var_125_bool = 0; // 0x262 MovB
	var_126_bool = 0; // 0x263 PushV
	var_126_bool = 0; // 0x264 MovB
	var_127_bool = 0; var_128_object = Obj(); // 0x265 PushV
	var_128_object = var_1_object; // 0x266 MovT
	func_4649(var_127_bool, var_128_object); // 0x267 NEW_2
	if(var_127_bool == 0) goto Label_624; // 0x269 JumpB
	var_129_bool = 0; var_130_object = Obj(); // 0x26a PushV
	var_130_object = var_1_object; // 0x26b MovT
	func_4699(var_129_bool, var_130_object); // 0x26c NEW_2
	if(var_129_bool == 0) goto Label_624; // 0x26e JumpB
	var_126_bool = 1; // 0x26f MovB
	
Label_624:
	if(var_126_bool == 0) goto Label_631; // 0x270 JumpB
	var_140_bool = 0; var_141_object = Obj(); // 0x271 PushV
	var_141_object = var_1_object; // 0x272 MovT
	func_4625(var_141_object); // 0x273 NEW_2
	if(var_140_bool == 0) goto Label_631; // 0x275 JumpB
	var_125_bool = 1; // 0x276 MovB
	
Label_631:
	if(var_125_bool == 0) goto Label_637; // 0x277 JumpB
	var_142_int = 538017; // 0x278 PushI
	var_143_int = 39883; // 0x279 PushI
	var_144_int = 39882; // 0x27a PushI
	AddReply(var_142_int, var_143_int, var_144_int); // 0x27b TObjFunc
	
Label_637:
	var_145_bool = 0; // 0x27d PushV
	var_145_bool = 0; // 0x27e MovB
	var_146_bool = 0; // 0x27f PushV
	var_146_bool = 0; // 0x280 MovB
	var_147_bool = 0; var_148_object = Obj(); // 0x281 PushV
	var_148_object = var_1_object; // 0x282 MovT
	func_4659(var_147_bool, var_148_object); // 0x283 NEW_2
	if(var_147_bool == 0) goto Label_652; // 0x285 JumpB
	var_153_bool = 0; var_154_object = Obj(); // 0x286 PushV
	var_154_object = var_1_object; // 0x287 MovT
	func_4689(var_153_bool, var_154_object); // 0x288 NEW_2
	if(var_153_bool == 0) goto Label_652; // 0x28a JumpB
	var_146_bool = 1; // 0x28b MovB
	
Label_652:
	if(var_146_bool == 0) goto Label_659; // 0x28c JumpB
	var_164_bool = 0; var_165_object = Obj(); // 0x28d PushV
	var_165_object = var_1_object; // 0x28e MovT
	func_4625(var_165_object); // 0x28f NEW_2
	if(var_164_bool == 0) goto Label_659; // 0x291 JumpB
	var_145_bool = 1; // 0x292 MovB
	
Label_659:
	if(var_145_bool == 0) goto Label_665; // 0x293 JumpB
	var_166_int = 538043; // 0x294 PushI
	var_167_int = 39911; // 0x295 PushI
	var_168_int = 39910; // 0x296 PushI
	AddReply(var_166_int, var_167_int, var_168_int); // 0x297 TObjFunc
	
Label_665:
	var_169_bool = 0; // 0x299 PushV
	var_169_bool = 0; // 0x29a MovB
	var_170_bool = 0; // 0x29b PushV
	var_170_bool = 0; // 0x29c MovB
	var_171_bool = 0; var_172_object = Obj(); // 0x29d PushV
	var_172_object = var_1_object; // 0x29e MovT
	func_4679(var_171_bool, var_172_object); // 0x29f NEW_2
	if(var_171_bool == 0) goto Label_680; // 0x2a1 JumpB
	var_177_bool = 0; var_178_object = Obj(); // 0x2a2 PushV
	var_178_object = var_1_object; // 0x2a3 MovT
	func_4689(var_177_bool, var_178_object); // 0x2a4 NEW_2
	if(var_177_bool == 0) goto Label_680; // 0x2a6 JumpB
	var_170_bool = 1; // 0x2a7 MovB
	
Label_680:
	if(var_170_bool == 0) goto Label_687; // 0x2a8 JumpB
	var_179_bool = 0; var_180_object = Obj(); // 0x2a9 PushV
	var_180_object = var_1_object; // 0x2aa MovT
	func_4625(var_180_object); // 0x2ab NEW_2
	if(var_179_bool == 0) goto Label_687; // 0x2ad JumpB
	var_169_bool = 1; // 0x2ae MovB
	
Label_687:
	if(var_169_bool == 0) goto Label_693; // 0x2af JumpB
	var_181_int = 538083; // 0x2b0 PushI
	var_182_int = 39952; // 0x2b1 PushI
	var_183_int = 39951; // 0x2b2 PushI
	AddReply(var_181_int, var_182_int, var_183_int); // 0x2b3 TObjFunc
	
Label_693:
	var_184_bool = 0; // 0x2b5 PushV
	var_184_bool = 0; // 0x2b6 MovB
	var_185_bool = 0; // 0x2b7 PushV
	var_185_bool = 0; // 0x2b8 MovB
	var_186_bool = 0; var_187_object = Obj(); // 0x2b9 PushV
	var_187_object = var_1_object; // 0x2ba MovT
	func_4679(var_186_bool, var_187_object); // 0x2bb NEW_2
	if(var_186_bool == 0) goto Label_708; // 0x2bd JumpB
	var_188_bool = 0; var_189_object = Obj(); // 0x2be PushV
	var_189_object = var_1_object; // 0x2bf MovT
	func_4699(var_188_bool, var_189_object); // 0x2c0 NEW_2
	if(var_188_bool == 0) goto Label_708; // 0x2c2 JumpB
	var_185_bool = 1; // 0x2c3 MovB
	
Label_708:
	if(var_185_bool == 0) goto Label_715; // 0x2c4 JumpB
	var_190_bool = 0; var_191_object = Obj(); // 0x2c5 PushV
	var_191_object = var_1_object; // 0x2c6 MovT
	func_4625(var_191_object); // 0x2c7 NEW_2
	if(var_190_bool == 0) goto Label_715; // 0x2c9 JumpB
	var_184_bool = 1; // 0x2ca MovB
	
Label_715:
	if(var_184_bool == 0) goto Label_721; // 0x2cb JumpB
	var_192_int = 538110; // 0x2cc PushI
	var_193_int = 39980; // 0x2cd PushI
	var_194_int = 39979; // 0x2ce PushI
	AddReply(var_192_int, var_193_int, var_194_int); // 0x2cf TObjFunc
	
Label_721:
	var_195_int = 538126; // 0x2d1 PushI
	var_196_int = -1; // 0x2d2 PushI
	var_197_int = 39997; // 0x2d3 PushI
	AddReply(var_195_int, var_196_int, var_197_int); // 0x2d4 TObjFunc
	return 0; // 0x2d6 Return
	
Label_727:
	var_198_int = 39980; // 0x2d7 PushI
	var_199_bool = var_19_object == var_198_int; // 0x2d8 Eq
	if(var_199_bool == 0) goto Label_755; // 0x2d9 JumpB
	var_200_string = ""; // 0x2da PushV
	var_200_string = "Neutral"; // 0x2db MovS
	func_424(var_20_bool, var_200_string); // 0x2dc NEW_2
	var_201_int = 538111; // 0x2de PushI
	SetMessage(var_201_int); // 0x2df TObjFunc
	ClearReplies(); // 0x2e1 TObjFunc
	var_202_int = 538112; // 0x2e3 PushI
	var_203_int = 39982; // 0x2e4 PushI
	var_204_int = 39981; // 0x2e5 PushI
	AddReply(var_202_int, var_203_int, var_204_int); // 0x2e6 TObjFunc
	var_205_int = 538124; // 0x2e8 PushI
	var_206_int = 39982; // 0x2e9 PushI
	var_207_int = 39994; // 0x2ea PushI
	AddReply(var_205_int, var_206_int, var_207_int); // 0x2eb TObjFunc
	var_208_int = 538125; // 0x2ed PushI
	var_209_int = -1; // 0x2ee PushI
	var_210_int = 39996; // 0x2ef PushI
	AddReply(var_208_int, var_209_int, var_210_int); // 0x2f0 TObjFunc
	return 0; // 0x2f2 Return
	
Label_755:
	var_211_int = 39982; // 0x2f3 PushI
	var_212_bool = var_19_object == var_211_int; // 0x2f4 Eq
	if(var_212_bool == 0) goto Label_778; // 0x2f5 JumpB
	var_213_string = ""; // 0x2f6 PushV
	var_213_string = "Neutral"; // 0x2f7 MovS
	func_424(var_20_bool, var_213_string); // 0x2f8 NEW_2
	var_214_int = 538113; // 0x2fa PushI
	SetMessage(var_214_int); // 0x2fb TObjFunc
	ClearReplies(); // 0x2fd TObjFunc
	var_215_int = 538114; // 0x2ff PushI
	var_216_int = 39984; // 0x300 PushI
	var_217_int = 39983; // 0x301 PushI
	AddReply(var_215_int, var_216_int, var_217_int); // 0x302 TObjFunc
	var_218_int = 538118; // 0x304 PushI
	var_219_int = 39989; // 0x305 PushI
	var_220_int = 39988; // 0x306 PushI
	AddReply(var_218_int, var_219_int, var_220_int); // 0x307 TObjFunc
	return 0; // 0x309 Return
	
Label_778:
	var_221_int = 39989; // 0x30a PushI
	var_222_bool = var_19_object == var_221_int; // 0x30b Eq
	if(var_222_bool == 0) goto Label_796; // 0x30c JumpB
	var_223_string = ""; // 0x30d PushV
	var_223_string = "Neutral"; // 0x30e MovS
	func_424(var_20_bool, var_223_string); // 0x30f NEW_2
	var_224_int = 538119; // 0x311 PushI
	SetMessage(var_224_int); // 0x312 TObjFunc
	ClearReplies(); // 0x314 TObjFunc
	var_225_int = 538120; // 0x316 PushI
	var_226_int = 39991; // 0x317 PushI
	var_227_int = 39990; // 0x318 PushI
	AddReply(var_225_int, var_226_int, var_227_int); // 0x319 TObjFunc
	return 0; // 0x31b Return
	
Label_796:
	var_228_int = 39991; // 0x31c PushI
	var_229_bool = var_19_object == var_228_int; // 0x31d Eq
	if(var_229_bool == 0) goto Label_819; // 0x31e JumpB
	var_230_string = ""; // 0x31f PushV
	var_230_string = "Neutral"; // 0x320 MovS
	func_424(var_20_bool, var_230_string); // 0x321 NEW_2
	var_231_int = 538121; // 0x323 PushI
	SetMessage(var_231_int); // 0x324 TObjFunc
	ClearReplies(); // 0x326 TObjFunc
	var_232_int = 538122; // 0x328 PushI
	var_233_int = -1; // 0x329 PushI
	var_234_int = 39992; // 0x32a PushI
	AddReply(var_232_int, var_233_int, var_234_int); // 0x32b TObjFunc
	var_235_int = 538123; // 0x32d PushI
	var_236_int = -1; // 0x32e PushI
	var_237_int = 39993; // 0x32f PushI
	AddReply(var_235_int, var_236_int, var_237_int); // 0x330 TObjFunc
	return 0; // 0x332 Return
	
Label_819:
	var_238_int = 39984; // 0x333 PushI
	var_239_bool = var_19_object == var_238_int; // 0x334 Eq
	if(var_239_bool == 0) goto Label_842; // 0x335 JumpB
	var_240_string = ""; // 0x336 PushV
	var_240_string = "Neutral"; // 0x337 MovS
	func_424(var_20_bool, var_240_string); // 0x338 NEW_2
	var_241_int = 538115; // 0x33a PushI
	SetMessage(var_241_int); // 0x33b TObjFunc
	ClearReplies(); // 0x33d TObjFunc
	var_242_int = 538116; // 0x33f PushI
	var_243_int = -1; // 0x340 PushI
	var_244_int = 39985; // 0x341 PushI
	AddReply(var_242_int, var_243_int, var_244_int); // 0x342 TObjFunc
	var_245_int = 538117; // 0x344 PushI
	var_246_int = 39991; // 0x345 PushI
	var_247_int = 39986; // 0x346 PushI
	AddReply(var_245_int, var_246_int, var_247_int); // 0x347 TObjFunc
	return 0; // 0x349 Return
	
Label_842:
	var_248_int = 39952; // 0x34a PushI
	var_249_bool = var_19_object == var_248_int; // 0x34b Eq
	if(var_249_bool == 0) goto Label_875; // 0x34c JumpB
	var_250_string = ""; // 0x34d PushV
	var_250_string = "Neutral"; // 0x34e MovS
	func_424(var_20_bool, var_250_string); // 0x34f NEW_2
	var_251_int = 538084; // 0x351 PushI
	SetMessage(var_251_int); // 0x352 TObjFunc
	ClearReplies(); // 0x354 TObjFunc
	var_252_int = 538085; // 0x356 PushI
	var_253_int = 39954; // 0x357 PushI
	var_254_int = 39953; // 0x358 PushI
	AddReply(var_252_int, var_253_int, var_254_int); // 0x359 TObjFunc
	var_255_int = 538094; // 0x35b PushI
	var_256_int = 39963; // 0x35c PushI
	var_257_int = 39962; // 0x35d PushI
	AddReply(var_255_int, var_256_int, var_257_int); // 0x35e TObjFunc
	var_258_int = 538103; // 0x360 PushI
	var_259_int = 39972; // 0x361 PushI
	var_260_int = 39971; // 0x362 PushI
	AddReply(var_258_int, var_259_int, var_260_int); // 0x363 TObjFunc
	var_261_int = 538109; // 0x365 PushI
	var_262_int = -1; // 0x366 PushI
	var_263_int = 39978; // 0x367 PushI
	AddReply(var_261_int, var_262_int, var_263_int); // 0x368 TObjFunc
	return 0; // 0x36a Return
	
Label_875:
	var_264_int = 39972; // 0x36b PushI
	var_265_bool = var_19_object == var_264_int; // 0x36c Eq
	if(var_265_bool == 0) goto Label_898; // 0x36d JumpB
	var_266_string = ""; // 0x36e PushV
	var_266_string = "Neutral"; // 0x36f MovS
	func_424(var_20_bool, var_266_string); // 0x370 NEW_2
	var_267_int = 538104; // 0x372 PushI
	SetMessage(var_267_int); // 0x373 TObjFunc
	ClearReplies(); // 0x375 TObjFunc
	var_268_int = 538105; // 0x377 PushI
	var_269_int = 39974; // 0x378 PushI
	var_270_int = 39973; // 0x379 PushI
	AddReply(var_268_int, var_269_int, var_270_int); // 0x37a TObjFunc
	var_271_int = 538108; // 0x37c PushI
	var_272_int = -1; // 0x37d PushI
	var_273_int = 39977; // 0x37e PushI
	AddReply(var_271_int, var_272_int, var_273_int); // 0x37f TObjFunc
	return 0; // 0x381 Return
	
Label_898:
	var_274_int = 39974; // 0x382 PushI
	var_275_bool = var_19_object == var_274_int; // 0x383 Eq
	if(var_275_bool == 0) goto Label_916; // 0x384 JumpB
	var_276_string = ""; // 0x385 PushV
	var_276_string = "Neutral"; // 0x386 MovS
	func_424(var_20_bool, var_276_string); // 0x387 NEW_2
	var_277_int = 538106; // 0x389 PushI
	SetMessage(var_277_int); // 0x38a TObjFunc
	ClearReplies(); // 0x38c TObjFunc
	var_278_int = 538107; // 0x38e PushI
	var_279_int = 39963; // 0x38f PushI
	var_280_int = 39975; // 0x390 PushI
	AddReply(var_278_int, var_279_int, var_280_int); // 0x391 TObjFunc
	return 0; // 0x393 Return
	
Label_916:
	var_281_int = 39963; // 0x394 PushI
	var_282_bool = var_19_object == var_281_int; // 0x395 Eq
	if(var_282_bool == 0) goto Label_939; // 0x396 JumpB
	var_283_string = ""; // 0x397 PushV
	var_283_string = "Neutral"; // 0x398 MovS
	func_424(var_20_bool, var_283_string); // 0x399 NEW_2
	var_284_int = 538095; // 0x39b PushI
	SetMessage(var_284_int); // 0x39c TObjFunc
	ClearReplies(); // 0x39e TObjFunc
	var_285_int = 538096; // 0x3a0 PushI
	var_286_int = 39965; // 0x3a1 PushI
	var_287_int = 39964; // 0x3a2 PushI
	AddReply(var_285_int, var_286_int, var_287_int); // 0x3a3 TObjFunc
	var_288_int = 538100; // 0x3a5 PushI
	var_289_int = 39969; // 0x3a6 PushI
	var_290_int = 39968; // 0x3a7 PushI
	AddReply(var_288_int, var_289_int, var_290_int); // 0x3a8 TObjFunc
	return 0; // 0x3aa Return
	
Label_939:
	var_291_int = 39969; // 0x3ab PushI
	var_292_bool = var_19_object == var_291_int; // 0x3ac Eq
	if(var_292_bool == 0) goto Label_957; // 0x3ad JumpB
	var_293_string = ""; // 0x3ae PushV
	var_293_string = "Neutral"; // 0x3af MovS
	func_424(var_20_bool, var_293_string); // 0x3b0 NEW_2
	var_294_int = 538101; // 0x3b2 PushI
	SetMessage(var_294_int); // 0x3b3 TObjFunc
	ClearReplies(); // 0x3b5 TObjFunc
	var_295_int = 538102; // 0x3b7 PushI
	var_296_int = -1; // 0x3b8 PushI
	var_297_int = 39970; // 0x3b9 PushI
	AddReply(var_295_int, var_296_int, var_297_int); // 0x3ba TObjFunc
	return 0; // 0x3bc Return
	
Label_957:
	var_298_int = 39965; // 0x3bd PushI
	var_299_bool = var_19_object == var_298_int; // 0x3be Eq
	if(var_299_bool == 0) goto Label_980; // 0x3bf JumpB
	var_300_string = ""; // 0x3c0 PushV
	var_300_string = "Neutral"; // 0x3c1 MovS
	func_424(var_20_bool, var_300_string); // 0x3c2 NEW_2
	var_301_int = 538097; // 0x3c4 PushI
	SetMessage(var_301_int); // 0x3c5 TObjFunc
	ClearReplies(); // 0x3c7 TObjFunc
	var_302_int = 538098; // 0x3c9 PushI
	var_303_int = -1; // 0x3ca PushI
	var_304_int = 39966; // 0x3cb PushI
	AddReply(var_302_int, var_303_int, var_304_int); // 0x3cc TObjFunc
	var_305_int = 538099; // 0x3ce PushI
	var_306_int = -1; // 0x3cf PushI
	var_307_int = 39967; // 0x3d0 PushI
	AddReply(var_305_int, var_306_int, var_307_int); // 0x3d1 TObjFunc
	return 0; // 0x3d3 Return
	
Label_980:
	var_308_int = 39954; // 0x3d4 PushI
	var_309_bool = var_19_object == var_308_int; // 0x3d5 Eq
	if(var_309_bool == 0) goto Label_1003; // 0x3d6 JumpB
	var_310_string = ""; // 0x3d7 PushV
	var_310_string = "Neutral"; // 0x3d8 MovS
	func_424(var_20_bool, var_310_string); // 0x3d9 NEW_2
	var_311_int = 538086; // 0x3db PushI
	SetMessage(var_311_int); // 0x3dc TObjFunc
	ClearReplies(); // 0x3de TObjFunc
	var_312_int = 538087; // 0x3e0 PushI
	var_313_int = 39956; // 0x3e1 PushI
	var_314_int = 39955; // 0x3e2 PushI
	AddReply(var_312_int, var_313_int, var_314_int); // 0x3e3 TObjFunc
	var_315_int = 538093; // 0x3e5 PushI
	var_316_int = -1; // 0x3e6 PushI
	var_317_int = 39961; // 0x3e7 PushI
	AddReply(var_315_int, var_316_int, var_317_int); // 0x3e8 TObjFunc
	return 0; // 0x3ea Return
	
Label_1003:
	var_318_int = 39956; // 0x3eb PushI
	var_319_bool = var_19_object == var_318_int; // 0x3ec Eq
	if(var_319_bool == 0) goto Label_1021; // 0x3ed JumpB
	var_320_string = ""; // 0x3ee PushV
	var_320_string = "Neutral"; // 0x3ef MovS
	func_424(var_20_bool, var_320_string); // 0x3f0 NEW_2
	var_321_int = 538088; // 0x3f2 PushI
	SetMessage(var_321_int); // 0x3f3 TObjFunc
	ClearReplies(); // 0x3f5 TObjFunc
	var_322_int = 538089; // 0x3f7 PushI
	var_323_int = 39958; // 0x3f8 PushI
	var_324_int = 39957; // 0x3f9 PushI
	AddReply(var_322_int, var_323_int, var_324_int); // 0x3fa TObjFunc
	return 0; // 0x3fc Return
	
Label_1021:
	var_325_int = 39958; // 0x3fd PushI
	var_326_bool = var_19_object == var_325_int; // 0x3fe Eq
	if(var_326_bool == 0) goto Label_1044; // 0x3ff JumpB
	var_327_string = ""; // 0x400 PushV
	var_327_string = "Neutral"; // 0x401 MovS
	func_424(var_20_bool, var_327_string); // 0x402 NEW_2
	var_328_int = 538090; // 0x404 PushI
	SetMessage(var_328_int); // 0x405 TObjFunc
	ClearReplies(); // 0x407 TObjFunc
	var_329_int = 538091; // 0x409 PushI
	var_330_int = -1; // 0x40a PushI
	var_331_int = 39959; // 0x40b PushI
	AddReply(var_329_int, var_330_int, var_331_int); // 0x40c TObjFunc
	var_332_int = 538092; // 0x40e PushI
	var_333_int = -1; // 0x40f PushI
	var_334_int = 39960; // 0x410 PushI
	AddReply(var_332_int, var_333_int, var_334_int); // 0x411 TObjFunc
	return 0; // 0x413 Return
	
Label_1044:
	var_335_int = 39911; // 0x414 PushI
	var_336_bool = var_19_object == var_335_int; // 0x415 Eq
	if(var_336_bool == 0) goto Label_1067; // 0x416 JumpB
	var_337_string = ""; // 0x417 PushV
	var_337_string = "Neutral"; // 0x418 MovS
	func_424(var_20_bool, var_337_string); // 0x419 NEW_2
	var_338_int = 538044; // 0x41b PushI
	SetMessage(var_338_int); // 0x41c TObjFunc
	ClearReplies(); // 0x41e TObjFunc
	var_339_int = 538045; // 0x420 PushI
	var_340_int = 39913; // 0x421 PushI
	var_341_int = 39912; // 0x422 PushI
	AddReply(var_339_int, var_340_int, var_341_int); // 0x423 TObjFunc
	var_342_int = 538063; // 0x425 PushI
	var_343_int = 39932; // 0x426 PushI
	var_344_int = 39931; // 0x427 PushI
	AddReply(var_342_int, var_343_int, var_344_int); // 0x428 TObjFunc
	return 0; // 0x42a Return
	
Label_1067:
	var_345_int = 39932; // 0x42b PushI
	var_346_bool = var_19_object == var_345_int; // 0x42c Eq
	if(var_346_bool == 0) goto Label_1085; // 0x42d JumpB
	var_347_string = ""; // 0x42e PushV
	var_347_string = "Neutral"; // 0x42f MovS
	func_424(var_20_bool, var_347_string); // 0x430 NEW_2
	var_348_int = 538064; // 0x432 PushI
	SetMessage(var_348_int); // 0x433 TObjFunc
	ClearReplies(); // 0x435 TObjFunc
	var_349_int = 538065; // 0x437 PushI
	var_350_int = 39934; // 0x438 PushI
	var_351_int = 39933; // 0x439 PushI
	AddReply(var_349_int, var_350_int, var_351_int); // 0x43a TObjFunc
	return 0; // 0x43c Return
	
Label_1085:
	var_352_int = 39934; // 0x43d PushI
	var_353_bool = var_19_object == var_352_int; // 0x43e Eq
	if(var_353_bool == 0) goto Label_1103; // 0x43f JumpB
	var_354_string = ""; // 0x440 PushV
	var_354_string = "Neutral"; // 0x441 MovS
	func_424(var_20_bool, var_354_string); // 0x442 NEW_2
	var_355_int = 538066; // 0x444 PushI
	SetMessage(var_355_int); // 0x445 TObjFunc
	ClearReplies(); // 0x447 TObjFunc
	var_356_int = 538067; // 0x449 PushI
	var_357_int = 39936; // 0x44a PushI
	var_358_int = 39935; // 0x44b PushI
	AddReply(var_356_int, var_357_int, var_358_int); // 0x44c TObjFunc
	return 0; // 0x44e Return
	
Label_1103:
	var_359_int = 39936; // 0x44f PushI
	var_360_bool = var_19_object == var_359_int; // 0x450 Eq
	if(var_360_bool == 0) goto Label_1126; // 0x451 JumpB
	var_361_string = ""; // 0x452 PushV
	var_361_string = "Neutral"; // 0x453 MovS
	func_424(var_20_bool, var_361_string); // 0x454 NEW_2
	var_362_int = 538068; // 0x456 PushI
	SetMessage(var_362_int); // 0x457 TObjFunc
	ClearReplies(); // 0x459 TObjFunc
	var_363_int = 538069; // 0x45b PushI
	var_364_int = 39938; // 0x45c PushI
	var_365_int = 39937; // 0x45d PushI
	AddReply(var_363_int, var_364_int, var_365_int); // 0x45e TObjFunc
	var_366_int = 538075; // 0x460 PushI
	var_367_int = 39944; // 0x461 PushI
	var_368_int = 39943; // 0x462 PushI
	AddReply(var_366_int, var_367_int, var_368_int); // 0x463 TObjFunc
	return 0; // 0x465 Return
	
Label_1126:
	var_369_int = 39944; // 0x466 PushI
	var_370_bool = var_19_object == var_369_int; // 0x467 Eq
	if(var_370_bool == 0) goto Label_1149; // 0x468 JumpB
	var_371_string = ""; // 0x469 PushV
	var_371_string = "Neutral"; // 0x46a MovS
	func_424(var_20_bool, var_371_string); // 0x46b NEW_2
	var_372_int = 538076; // 0x46d PushI
	SetMessage(var_372_int); // 0x46e TObjFunc
	ClearReplies(); // 0x470 TObjFunc
	var_373_int = 538077; // 0x472 PushI
	var_374_int = 39946; // 0x473 PushI
	var_375_int = 39945; // 0x474 PushI
	AddReply(var_373_int, var_374_int, var_375_int); // 0x475 TObjFunc
	var_376_int = 538082; // 0x477 PushI
	var_377_int = -1; // 0x478 PushI
	var_378_int = 39950; // 0x479 PushI
	AddReply(var_376_int, var_377_int, var_378_int); // 0x47a TObjFunc
	return 0; // 0x47c Return
	
Label_1149:
	var_379_int = 39946; // 0x47d PushI
	var_380_bool = var_19_object == var_379_int; // 0x47e Eq
	if(var_380_bool == 0) goto Label_1167; // 0x47f JumpB
	var_381_string = ""; // 0x480 PushV
	var_381_string = "Neutral"; // 0x481 MovS
	func_424(var_20_bool, var_381_string); // 0x482 NEW_2
	var_382_int = 538078; // 0x484 PushI
	SetMessage(var_382_int); // 0x485 TObjFunc
	ClearReplies(); // 0x487 TObjFunc
	var_383_int = 538079; // 0x489 PushI
	var_384_int = 39948; // 0x48a PushI
	var_385_int = 39947; // 0x48b PushI
	AddReply(var_383_int, var_384_int, var_385_int); // 0x48c TObjFunc
	return 0; // 0x48e Return
	
Label_1167:
	var_386_int = 39948; // 0x48f PushI
	var_387_bool = var_19_object == var_386_int; // 0x490 Eq
	if(var_387_bool == 0) goto Label_1185; // 0x491 JumpB
	var_388_string = ""; // 0x492 PushV
	var_388_string = "Neutral"; // 0x493 MovS
	func_424(var_20_bool, var_388_string); // 0x494 NEW_2
	var_389_int = 538080; // 0x496 PushI
	SetMessage(var_389_int); // 0x497 TObjFunc
	ClearReplies(); // 0x499 TObjFunc
	var_390_int = 538081; // 0x49b PushI
	var_391_int = -1; // 0x49c PushI
	var_392_int = 39949; // 0x49d PushI
	AddReply(var_390_int, var_391_int, var_392_int); // 0x49e TObjFunc
	return 0; // 0x4a0 Return
	
Label_1185:
	var_393_int = 39938; // 0x4a1 PushI
	var_394_bool = var_19_object == var_393_int; // 0x4a2 Eq
	if(var_394_bool == 0) goto Label_1208; // 0x4a3 JumpB
	var_395_string = ""; // 0x4a4 PushV
	var_395_string = "Neutral"; // 0x4a5 MovS
	func_424(var_20_bool, var_395_string); // 0x4a6 NEW_2
	var_396_int = 538070; // 0x4a8 PushI
	SetMessage(var_396_int); // 0x4a9 TObjFunc
	ClearReplies(); // 0x4ab TObjFunc
	var_397_int = 538071; // 0x4ad PushI
	var_398_int = 39940; // 0x4ae PushI
	var_399_int = 39939; // 0x4af PushI
	AddReply(var_397_int, var_398_int, var_399_int); // 0x4b0 TObjFunc
	var_400_int = 538074; // 0x4b2 PushI
	var_401_int = -1; // 0x4b3 PushI
	var_402_int = 39942; // 0x4b4 PushI
	AddReply(var_400_int, var_401_int, var_402_int); // 0x4b5 TObjFunc
	return 0; // 0x4b7 Return
	
Label_1208:
	var_403_int = 39940; // 0x4b8 PushI
	var_404_bool = var_19_object == var_403_int; // 0x4b9 Eq
	if(var_404_bool == 0) goto Label_1226; // 0x4ba JumpB
	var_405_string = ""; // 0x4bb PushV
	var_405_string = "Neutral"; // 0x4bc MovS
	func_424(var_20_bool, var_405_string); // 0x4bd NEW_2
	var_406_int = 538072; // 0x4bf PushI
	SetMessage(var_406_int); // 0x4c0 TObjFunc
	ClearReplies(); // 0x4c2 TObjFunc
	var_407_int = 538073; // 0x4c4 PushI
	var_408_int = -1; // 0x4c5 PushI
	var_409_int = 39941; // 0x4c6 PushI
	AddReply(var_407_int, var_408_int, var_409_int); // 0x4c7 TObjFunc
	return 0; // 0x4c9 Return
	
Label_1226:
	var_410_int = 39913; // 0x4ca PushI
	var_411_bool = var_19_object == var_410_int; // 0x4cb Eq
	if(var_411_bool == 0) goto Label_1249; // 0x4cc JumpB
	var_412_string = ""; // 0x4cd PushV
	var_412_string = "Neutral"; // 0x4ce MovS
	func_424(var_20_bool, var_412_string); // 0x4cf NEW_2
	var_413_int = 538046; // 0x4d1 PushI
	SetMessage(var_413_int); // 0x4d2 TObjFunc
	ClearReplies(); // 0x4d4 TObjFunc
	var_414_int = 538047; // 0x4d6 PushI
	var_415_int = 39915; // 0x4d7 PushI
	var_416_int = 39914; // 0x4d8 PushI
	AddReply(var_414_int, var_415_int, var_416_int); // 0x4d9 TObjFunc
	var_417_int = 538060; // 0x4db PushI
	var_418_int = 39928; // 0x4dc PushI
	var_419_int = 39927; // 0x4dd PushI
	AddReply(var_417_int, var_418_int, var_419_int); // 0x4de TObjFunc
	return 0; // 0x4e0 Return
	
Label_1249:
	var_420_int = 39928; // 0x4e1 PushI
	var_421_bool = var_19_object == var_420_int; // 0x4e2 Eq
	if(var_421_bool == 0) goto Label_1267; // 0x4e3 JumpB
	var_422_string = ""; // 0x4e4 PushV
	var_422_string = "Neutral"; // 0x4e5 MovS
	func_424(var_20_bool, var_422_string); // 0x4e6 NEW_2
	var_423_int = 538061; // 0x4e8 PushI
	SetMessage(var_423_int); // 0x4e9 TObjFunc
	ClearReplies(); // 0x4eb TObjFunc
	var_424_int = 538062; // 0x4ed PushI
	var_425_int = 39915; // 0x4ee PushI
	var_426_int = 39929; // 0x4ef PushI
	AddReply(var_424_int, var_425_int, var_426_int); // 0x4f0 TObjFunc
	return 0; // 0x4f2 Return
	
Label_1267:
	var_427_int = 39915; // 0x4f3 PushI
	var_428_bool = var_19_object == var_427_int; // 0x4f4 Eq
	if(var_428_bool == 0) goto Label_1290; // 0x4f5 JumpB
	var_429_string = ""; // 0x4f6 PushV
	var_429_string = "Neutral"; // 0x4f7 MovS
	func_424(var_20_bool, var_429_string); // 0x4f8 NEW_2
	var_430_int = 538048; // 0x4fa PushI
	SetMessage(var_430_int); // 0x4fb TObjFunc
	ClearReplies(); // 0x4fd TObjFunc
	var_431_int = 538049; // 0x4ff PushI
	var_432_int = 39917; // 0x500 PushI
	var_433_int = 39916; // 0x501 PushI
	AddReply(var_431_int, var_432_int, var_433_int); // 0x502 TObjFunc
	var_434_int = 538057; // 0x504 PushI
	var_435_int = 39925; // 0x505 PushI
	var_436_int = 39924; // 0x506 PushI
	AddReply(var_434_int, var_435_int, var_436_int); // 0x507 TObjFunc
	return 0; // 0x509 Return
	
Label_1290:
	var_437_int = 39925; // 0x50a PushI
	var_438_bool = var_19_object == var_437_int; // 0x50b Eq
	if(var_438_bool == 0) goto Label_1308; // 0x50c JumpB
	var_439_string = ""; // 0x50d PushV
	var_439_string = "Neutral"; // 0x50e MovS
	func_424(var_20_bool, var_439_string); // 0x50f NEW_2
	var_440_int = 538058; // 0x511 PushI
	SetMessage(var_440_int); // 0x512 TObjFunc
	ClearReplies(); // 0x514 TObjFunc
	var_441_int = 538059; // 0x516 PushI
	var_442_int = -1; // 0x517 PushI
	var_443_int = 39926; // 0x518 PushI
	AddReply(var_441_int, var_442_int, var_443_int); // 0x519 TObjFunc
	return 0; // 0x51b Return
	
Label_1308:
	var_444_int = 39917; // 0x51c PushI
	var_445_bool = var_19_object == var_444_int; // 0x51d Eq
	if(var_445_bool == 0) goto Label_1331; // 0x51e JumpB
	var_446_string = ""; // 0x51f PushV
	var_446_string = "Neutral"; // 0x520 MovS
	func_424(var_20_bool, var_446_string); // 0x521 NEW_2
	var_447_int = 538050; // 0x523 PushI
	SetMessage(var_447_int); // 0x524 TObjFunc
	ClearReplies(); // 0x526 TObjFunc
	var_448_int = 538051; // 0x528 PushI
	var_449_int = 39919; // 0x529 PushI
	var_450_int = 39918; // 0x52a PushI
	AddReply(var_448_int, var_449_int, var_450_int); // 0x52b TObjFunc
	var_451_int = 538056; // 0x52d PushI
	var_452_int = -1; // 0x52e PushI
	var_453_int = 39923; // 0x52f PushI
	AddReply(var_451_int, var_452_int, var_453_int); // 0x530 TObjFunc
	return 0; // 0x532 Return
	
Label_1331:
	var_454_int = 39919; // 0x533 PushI
	var_455_bool = var_19_object == var_454_int; // 0x534 Eq
	if(var_455_bool == 0) goto Label_1349; // 0x535 JumpB
	var_456_string = ""; // 0x536 PushV
	var_456_string = "Neutral"; // 0x537 MovS
	func_424(var_20_bool, var_456_string); // 0x538 NEW_2
	var_457_int = 538052; // 0x53a PushI
	SetMessage(var_457_int); // 0x53b TObjFunc
	ClearReplies(); // 0x53d TObjFunc
	var_458_int = 538053; // 0x53f PushI
	var_459_int = 39921; // 0x540 PushI
	var_460_int = 39920; // 0x541 PushI
	AddReply(var_458_int, var_459_int, var_460_int); // 0x542 TObjFunc
	return 0; // 0x544 Return
	
Label_1349:
	var_461_int = 39921; // 0x545 PushI
	var_462_bool = var_19_object == var_461_int; // 0x546 Eq
	if(var_462_bool == 0) goto Label_1367; // 0x547 JumpB
	var_463_string = ""; // 0x548 PushV
	var_463_string = "Neutral"; // 0x549 MovS
	func_424(var_20_bool, var_463_string); // 0x54a NEW_2
	var_464_int = 538054; // 0x54c PushI
	SetMessage(var_464_int); // 0x54d TObjFunc
	ClearReplies(); // 0x54f TObjFunc
	var_465_int = 538055; // 0x551 PushI
	var_466_int = -1; // 0x552 PushI
	var_467_int = 39922; // 0x553 PushI
	AddReply(var_465_int, var_466_int, var_467_int); // 0x554 TObjFunc
	return 0; // 0x556 Return
	
Label_1367:
	var_468_int = 39883; // 0x557 PushI
	var_469_bool = var_19_object == var_468_int; // 0x558 Eq
	if(var_469_bool == 0) goto Label_1400; // 0x559 JumpB
	var_470_string = ""; // 0x55a PushV
	var_470_string = "Neutral"; // 0x55b MovS
	func_424(var_20_bool, var_470_string); // 0x55c NEW_2
	var_471_int = 538018; // 0x55e PushI
	SetMessage(var_471_int); // 0x55f TObjFunc
	ClearReplies(); // 0x561 TObjFunc
	var_472_int = 538019; // 0x563 PushI
	var_473_int = 39885; // 0x564 PushI
	var_474_int = 39884; // 0x565 PushI
	AddReply(var_472_int, var_473_int, var_474_int); // 0x566 TObjFunc
	var_475_int = 538030; // 0x568 PushI
	var_476_int = 39897; // 0x569 PushI
	var_477_int = 39896; // 0x56a PushI
	AddReply(var_475_int, var_476_int, var_477_int); // 0x56b TObjFunc
	var_478_int = 538039; // 0x56d PushI
	var_479_int = 39907; // 0x56e PushI
	var_480_int = 39906; // 0x56f PushI
	AddReply(var_478_int, var_479_int, var_480_int); // 0x570 TObjFunc
	var_481_int = 538042; // 0x572 PushI
	var_482_int = -1; // 0x573 PushI
	var_483_int = 39909; // 0x574 PushI
	AddReply(var_481_int, var_482_int, var_483_int); // 0x575 TObjFunc
	return 0; // 0x577 Return
	
Label_1400:
	var_484_int = 39907; // 0x578 PushI
	var_485_bool = var_19_object == var_484_int; // 0x579 Eq
	if(var_485_bool == 0) goto Label_1418; // 0x57a JumpB
	var_486_string = ""; // 0x57b PushV
	var_486_string = "Neutral"; // 0x57c MovS
	func_424(var_20_bool, var_486_string); // 0x57d NEW_2
	var_487_int = 538040; // 0x57f PushI
	SetMessage(var_487_int); // 0x580 TObjFunc
	ClearReplies(); // 0x582 TObjFunc
	var_488_int = 538041; // 0x584 PushI
	var_489_int = -1; // 0x585 PushI
	var_490_int = 39908; // 0x586 PushI
	AddReply(var_488_int, var_489_int, var_490_int); // 0x587 TObjFunc
	return 0; // 0x589 Return
	
Label_1418:
	var_491_int = 39897; // 0x58a PushI
	var_492_bool = var_19_object == var_491_int; // 0x58b Eq
	if(var_492_bool == 0) goto Label_1441; // 0x58c JumpB
	var_493_string = ""; // 0x58d PushV
	var_493_string = "Neutral"; // 0x58e MovS
	func_424(var_20_bool, var_493_string); // 0x58f NEW_2
	var_494_int = 538031; // 0x591 PushI
	SetMessage(var_494_int); // 0x592 TObjFunc
	ClearReplies(); // 0x594 TObjFunc
	var_495_int = 538032; // 0x596 PushI
	var_496_int = 39899; // 0x597 PushI
	var_497_int = 39898; // 0x598 PushI
	AddReply(var_495_int, var_496_int, var_497_int); // 0x599 TObjFunc
	var_498_int = 538038; // 0x59b PushI
	var_499_int = 39899; // 0x59c PushI
	var_500_int = 39904; // 0x59d PushI
	AddReply(var_498_int, var_499_int, var_500_int); // 0x59e TObjFunc
	return 0; // 0x5a0 Return
	
Label_1441:
	var_501_int = 39899; // 0x5a1 PushI
	var_502_bool = var_19_object == var_501_int; // 0x5a2 Eq
	if(var_502_bool == 0) goto Label_1464; // 0x5a3 JumpB
	var_503_string = ""; // 0x5a4 PushV
	var_503_string = "Neutral"; // 0x5a5 MovS
	func_424(var_20_bool, var_503_string); // 0x5a6 NEW_2
	var_504_int = 538033; // 0x5a8 PushI
	SetMessage(var_504_int); // 0x5a9 TObjFunc
	ClearReplies(); // 0x5ab TObjFunc
	var_505_int = 538034; // 0x5ad PushI
	var_506_int = 39901; // 0x5ae PushI
	var_507_int = 39900; // 0x5af PushI
	AddReply(var_505_int, var_506_int, var_507_int); // 0x5b0 TObjFunc
	var_508_int = 538037; // 0x5b2 PushI
	var_509_int = -1; // 0x5b3 PushI
	var_510_int = 39903; // 0x5b4 PushI
	AddReply(var_508_int, var_509_int, var_510_int); // 0x5b5 TObjFunc
	return 0; // 0x5b7 Return
	
Label_1464:
	var_511_int = 39901; // 0x5b8 PushI
	var_512_bool = var_19_object == var_511_int; // 0x5b9 Eq
	if(var_512_bool == 0) goto Label_1482; // 0x5ba JumpB
	var_513_string = ""; // 0x5bb PushV
	var_513_string = "Neutral"; // 0x5bc MovS
	func_424(var_20_bool, var_513_string); // 0x5bd NEW_2
	var_514_int = 538035; // 0x5bf PushI
	SetMessage(var_514_int); // 0x5c0 TObjFunc
	ClearReplies(); // 0x5c2 TObjFunc
	var_515_int = 538036; // 0x5c4 PushI
	var_516_int = -1; // 0x5c5 PushI
	var_517_int = 39902; // 0x5c6 PushI
	AddReply(var_515_int, var_516_int, var_517_int); // 0x5c7 TObjFunc
	return 0; // 0x5c9 Return
	
Label_1482:
	var_518_int = 39885; // 0x5ca PushI
	var_519_bool = var_19_object == var_518_int; // 0x5cb Eq
	if(var_519_bool == 0) goto Label_1505; // 0x5cc JumpB
	var_520_string = ""; // 0x5cd PushV
	var_520_string = "Neutral"; // 0x5ce MovS
	func_424(var_20_bool, var_520_string); // 0x5cf NEW_2
	var_521_int = 538020; // 0x5d1 PushI
	SetMessage(var_521_int); // 0x5d2 TObjFunc
	ClearReplies(); // 0x5d4 TObjFunc
	var_522_int = 538021; // 0x5d6 PushI
	var_523_int = 39887; // 0x5d7 PushI
	var_524_int = 39886; // 0x5d8 PushI
	AddReply(var_522_int, var_523_int, var_524_int); // 0x5d9 TObjFunc
	var_525_int = 538027; // 0x5db PushI
	var_526_int = 39894; // 0x5dc PushI
	var_527_int = 39893; // 0x5dd PushI
	AddReply(var_525_int, var_526_int, var_527_int); // 0x5de TObjFunc
	return 0; // 0x5e0 Return
	
Label_1505:
	var_528_int = 39894; // 0x5e1 PushI
	var_529_bool = var_19_object == var_528_int; // 0x5e2 Eq
	if(var_529_bool == 0) goto Label_1523; // 0x5e3 JumpB
	var_530_string = ""; // 0x5e4 PushV
	var_530_string = "Neutral"; // 0x5e5 MovS
	func_424(var_20_bool, var_530_string); // 0x5e6 NEW_2
	var_531_int = 538028; // 0x5e8 PushI
	SetMessage(var_531_int); // 0x5e9 TObjFunc
	ClearReplies(); // 0x5eb TObjFunc
	var_532_int = 538029; // 0x5ed PushI
	var_533_int = -1; // 0x5ee PushI
	var_534_int = 39895; // 0x5ef PushI
	AddReply(var_532_int, var_533_int, var_534_int); // 0x5f0 TObjFunc
	return 0; // 0x5f2 Return
	
Label_1523:
	var_535_int = 39887; // 0x5f3 PushI
	var_536_bool = var_19_object == var_535_int; // 0x5f4 Eq
	if(var_536_bool == 0) goto Label_1546; // 0x5f5 JumpB
	var_537_string = ""; // 0x5f6 PushV
	var_537_string = "Neutral"; // 0x5f7 MovS
	func_424(var_20_bool, var_537_string); // 0x5f8 NEW_2
	var_538_int = 538022; // 0x5fa PushI
	SetMessage(var_538_int); // 0x5fb TObjFunc
	ClearReplies(); // 0x5fd TObjFunc
	var_539_int = 538023; // 0x5ff PushI
	var_540_int = 39889; // 0x600 PushI
	var_541_int = 39888; // 0x601 PushI
	AddReply(var_539_int, var_540_int, var_541_int); // 0x602 TObjFunc
	var_542_int = 538026; // 0x604 PushI
	var_543_int = 39889; // 0x605 PushI
	var_544_int = 39891; // 0x606 PushI
	AddReply(var_542_int, var_543_int, var_544_int); // 0x607 TObjFunc
	return 0; // 0x609 Return
	
Label_1546:
	var_545_int = 39889; // 0x60a PushI
	var_546_bool = var_19_object == var_545_int; // 0x60b Eq
	if(var_546_bool == 0) goto Label_1564; // 0x60c JumpB
	var_547_string = ""; // 0x60d PushV
	var_547_string = "Neutral"; // 0x60e MovS
	func_424(var_20_bool, var_547_string); // 0x60f NEW_2
	var_548_int = 538024; // 0x611 PushI
	SetMessage(var_548_int); // 0x612 TObjFunc
	ClearReplies(); // 0x614 TObjFunc
	var_549_int = 538025; // 0x616 PushI
	var_550_int = -1; // 0x617 PushI
	var_551_int = 39890; // 0x618 PushI
	AddReply(var_549_int, var_550_int, var_551_int); // 0x619 TObjFunc
	return 0; // 0x61b Return
	
Label_1564:
	var_552_int = 39878; // 0x61c PushI
	var_553_bool = var_19_object == var_552_int; // 0x61d Eq
	if(var_553_bool == 0) goto Label_1582; // 0x61e JumpB
	var_554_string = ""; // 0x61f PushV
	var_554_string = "Neutral"; // 0x620 MovS
	func_424(var_20_bool, var_554_string); // 0x621 NEW_2
	var_555_int = 538013; // 0x623 PushI
	SetMessage(var_555_int); // 0x624 TObjFunc
	ClearReplies(); // 0x626 TObjFunc
	var_556_int = 538014; // 0x628 PushI
	var_557_int = 39880; // 0x629 PushI
	var_558_int = 39879; // 0x62a PushI
	AddReply(var_556_int, var_557_int, var_558_int); // 0x62b TObjFunc
	return 0; // 0x62d Return
	
Label_1582:
	var_559_int = 39880; // 0x62e PushI
	var_560_bool = var_19_object == var_559_int; // 0x62f Eq
	if(var_560_bool == 0) goto Label_1600; // 0x630 JumpB
	var_561_string = ""; // 0x631 PushV
	var_561_string = "Neutral"; // 0x632 MovS
	func_424(var_20_bool, var_561_string); // 0x633 NEW_2
	var_562_int = 538015; // 0x635 PushI
	SetMessage(var_562_int); // 0x636 TObjFunc
	ClearReplies(); // 0x638 TObjFunc
	var_563_int = 538016; // 0x63a PushI
	var_564_int = -1; // 0x63b PushI
	var_565_int = 39881; // 0x63c PushI
	AddReply(var_563_int, var_564_int, var_565_int); // 0x63d TObjFunc
	return 0; // 0x63f Return
	
Label_1600:
	var_566_int = 39869; // 0x640 PushI
	var_567_bool = var_19_object == var_566_int; // 0x641 Eq
	if(var_567_bool == 0) goto Label_1623; // 0x642 JumpB
	var_568_string = ""; // 0x643 PushV
	var_568_string = "Neutral"; // 0x644 MovS
	func_424(var_20_bool, var_568_string); // 0x645 NEW_2
	var_569_int = 538004; // 0x647 PushI
	SetMessage(var_569_int); // 0x648 TObjFunc
	ClearReplies(); // 0x64a TObjFunc
	var_570_int = 538005; // 0x64c PushI
	var_571_int = 39871; // 0x64d PushI
	var_572_int = 39870; // 0x64e PushI
	AddReply(var_570_int, var_571_int, var_572_int); // 0x64f TObjFunc
	var_573_int = 538011; // 0x651 PushI
	var_574_int = -1; // 0x652 PushI
	var_575_int = 39876; // 0x653 PushI
	AddReply(var_573_int, var_574_int, var_575_int); // 0x654 TObjFunc
	return 0; // 0x656 Return
	
Label_1623:
	var_576_int = 39871; // 0x657 PushI
	var_577_bool = var_19_object == var_576_int; // 0x658 Eq
	if(var_577_bool == 0) goto Label_1641; // 0x659 JumpB
	var_578_string = ""; // 0x65a PushV
	var_578_string = "Neutral"; // 0x65b MovS
	func_424(var_20_bool, var_578_string); // 0x65c NEW_2
	var_579_int = 538006; // 0x65e PushI
	SetMessage(var_579_int); // 0x65f TObjFunc
	ClearReplies(); // 0x661 TObjFunc
	var_580_int = 538007; // 0x663 PushI
	var_581_int = 39873; // 0x664 PushI
	var_582_int = 39872; // 0x665 PushI
	AddReply(var_580_int, var_581_int, var_582_int); // 0x666 TObjFunc
	return 0; // 0x668 Return
	
Label_1641:
	var_583_int = 39873; // 0x669 PushI
	var_584_bool = var_19_object == var_583_int; // 0x66a Eq
	if(var_584_bool == 0) goto Label_1664; // 0x66b JumpB
	var_585_string = ""; // 0x66c PushV
	var_585_string = "Neutral"; // 0x66d MovS
	func_424(var_20_bool, var_585_string); // 0x66e NEW_2
	var_586_int = 538008; // 0x670 PushI
	SetMessage(var_586_int); // 0x671 TObjFunc
	ClearReplies(); // 0x673 TObjFunc
	var_587_int = 538009; // 0x675 PushI
	var_588_int = -1; // 0x676 PushI
	var_589_int = 39874; // 0x677 PushI
	AddReply(var_587_int, var_588_int, var_589_int); // 0x678 TObjFunc
	var_590_int = 538010; // 0x67a PushI
	var_591_int = -1; // 0x67b PushI
	var_592_int = 39875; // 0x67c PushI
	AddReply(var_590_int, var_591_int, var_592_int); // 0x67d TObjFunc
	return 0; // 0x67f Return
	
Label_1664:
	var_593_int = 39861; // 0x680 PushI
	var_594_bool = var_19_object == var_593_int; // 0x681 Eq
	if(var_594_bool == 0) goto Label_1682; // 0x682 JumpB
	var_595_string = ""; // 0x683 PushV
	var_595_string = "Neutral"; // 0x684 MovS
	func_424(var_20_bool, var_595_string); // 0x685 NEW_2
	var_596_int = 537996; // 0x687 PushI
	SetMessage(var_596_int); // 0x688 TObjFunc
	ClearReplies(); // 0x68a TObjFunc
	var_597_int = 537997; // 0x68c PushI
	var_598_int = 39863; // 0x68d PushI
	var_599_int = 39862; // 0x68e PushI
	AddReply(var_597_int, var_598_int, var_599_int); // 0x68f TObjFunc
	return 0; // 0x691 Return
	
Label_1682:
	var_600_int = 39863; // 0x692 PushI
	var_601_bool = var_19_object == var_600_int; // 0x693 Eq
	if(var_601_bool == 0) goto Label_1705; // 0x694 JumpB
	var_602_string = ""; // 0x695 PushV
	var_602_string = "Neutral"; // 0x696 MovS
	func_424(var_20_bool, var_602_string); // 0x697 NEW_2
	var_603_int = 537998; // 0x699 PushI
	SetMessage(var_603_int); // 0x69a TObjFunc
	ClearReplies(); // 0x69c TObjFunc
	var_604_int = 537999; // 0x69e PushI
	var_605_int = 39865; // 0x69f PushI
	var_606_int = 39864; // 0x6a0 PushI
	AddReply(var_604_int, var_605_int, var_606_int); // 0x6a1 TObjFunc
	var_607_int = 538002; // 0x6a3 PushI
	var_608_int = -1; // 0x6a4 PushI
	var_609_int = 39867; // 0x6a5 PushI
	AddReply(var_607_int, var_608_int, var_609_int); // 0x6a6 TObjFunc
	return 0; // 0x6a8 Return
	
Label_1705:
	var_610_int = 39865; // 0x6a9 PushI
	var_611_bool = var_19_object == var_610_int; // 0x6aa Eq
	if(var_611_bool == 0) goto Label_1723; // 0x6ab JumpB
	var_612_string = ""; // 0x6ac PushV
	var_612_string = "Neutral"; // 0x6ad MovS
	func_424(var_20_bool, var_612_string); // 0x6ae NEW_2
	var_613_int = 538000; // 0x6b0 PushI
	SetMessage(var_613_int); // 0x6b1 TObjFunc
	ClearReplies(); // 0x6b3 TObjFunc
	var_614_int = 538001; // 0x6b5 PushI
	var_615_int = -1; // 0x6b6 PushI
	var_616_int = 39866; // 0x6b7 PushI
	AddReply(var_614_int, var_615_int, var_616_int); // 0x6b8 TObjFunc
	return 0; // 0x6ba Return
	
Label_1723:
	var_617_int = 39833; // 0x6bb PushI
	var_618_bool = var_19_object == var_617_int; // 0x6bc Eq
	if(var_618_bool == 0) goto Label_1756; // 0x6bd JumpB
	var_619_string = ""; // 0x6be PushV
	var_619_string = "Neutral"; // 0x6bf MovS
	func_424(var_20_bool, var_619_string); // 0x6c0 NEW_2
	var_620_int = 537971; // 0x6c2 PushI
	SetMessage(var_620_int); // 0x6c3 TObjFunc
	ClearReplies(); // 0x6c5 TObjFunc
	var_621_int = 537972; // 0x6c7 PushI
	var_622_int = 39835; // 0x6c8 PushI
	var_623_int = 39834; // 0x6c9 PushI
	AddReply(var_621_int, var_622_int, var_623_int); // 0x6ca TObjFunc
	var_624_int = 537976; // 0x6cc PushI
	var_625_int = 39840; // 0x6cd PushI
	var_626_int = 39839; // 0x6ce PushI
	AddReply(var_624_int, var_625_int, var_626_int); // 0x6cf TObjFunc
	var_627_int = 537988; // 0x6d1 PushI
	var_628_int = 39852; // 0x6d2 PushI
	var_629_int = 39851; // 0x6d3 PushI
	AddReply(var_627_int, var_628_int, var_629_int); // 0x6d4 TObjFunc
	var_630_int = 537994; // 0x6d6 PushI
	var_631_int = -1; // 0x6d7 PushI
	var_632_int = 39859; // 0x6d8 PushI
	AddReply(var_630_int, var_631_int, var_632_int); // 0x6d9 TObjFunc
	return 0; // 0x6db Return
	
Label_1756:
	var_633_int = 39852; // 0x6dc PushI
	var_634_bool = var_19_object == var_633_int; // 0x6dd Eq
	if(var_634_bool == 0) goto Label_1779; // 0x6de JumpB
	var_635_string = ""; // 0x6df PushV
	var_635_string = "Neutral"; // 0x6e0 MovS
	func_424(var_20_bool, var_635_string); // 0x6e1 NEW_2
	var_636_int = 537989; // 0x6e3 PushI
	SetMessage(var_636_int); // 0x6e4 TObjFunc
	ClearReplies(); // 0x6e6 TObjFunc
	var_637_int = 537990; // 0x6e8 PushI
	var_638_int = 39835; // 0x6e9 PushI
	var_639_int = 39853; // 0x6ea PushI
	AddReply(var_637_int, var_638_int, var_639_int); // 0x6eb TObjFunc
	var_640_int = 537991; // 0x6ed PushI
	var_641_int = 39856; // 0x6ee PushI
	var_642_int = 39855; // 0x6ef PushI
	AddReply(var_640_int, var_641_int, var_642_int); // 0x6f0 TObjFunc
	return 0; // 0x6f2 Return
	
Label_1779:
	var_643_int = 39856; // 0x6f3 PushI
	var_644_bool = var_19_object == var_643_int; // 0x6f4 Eq
	if(var_644_bool == 0) goto Label_1797; // 0x6f5 JumpB
	var_645_string = ""; // 0x6f6 PushV
	var_645_string = "Neutral"; // 0x6f7 MovS
	func_424(var_20_bool, var_645_string); // 0x6f8 NEW_2
	var_646_int = 537992; // 0x6fa PushI
	SetMessage(var_646_int); // 0x6fb TObjFunc
	ClearReplies(); // 0x6fd TObjFunc
	var_647_int = 537993; // 0x6ff PushI
	var_648_int = 39840; // 0x700 PushI
	var_649_int = 39857; // 0x701 PushI
	AddReply(var_647_int, var_648_int, var_649_int); // 0x702 TObjFunc
	return 0; // 0x704 Return
	
Label_1797:
	var_650_int = 39840; // 0x705 PushI
	var_651_bool = var_19_object == var_650_int; // 0x706 Eq
	if(var_651_bool == 0) goto Label_1820; // 0x707 JumpB
	var_652_string = ""; // 0x708 PushV
	var_652_string = "Neutral"; // 0x709 MovS
	func_424(var_20_bool, var_652_string); // 0x70a NEW_2
	var_653_int = 537977; // 0x70c PushI
	SetMessage(var_653_int); // 0x70d TObjFunc
	ClearReplies(); // 0x70f TObjFunc
	var_654_int = 537978; // 0x711 PushI
	var_655_int = 39842; // 0x712 PushI
	var_656_int = 39841; // 0x713 PushI
	AddReply(var_654_int, var_655_int, var_656_int); // 0x714 TObjFunc
	var_657_int = 537987; // 0x716 PushI
	var_658_int = -1; // 0x717 PushI
	var_659_int = 39850; // 0x718 PushI
	AddReply(var_657_int, var_658_int, var_659_int); // 0x719 TObjFunc
	return 0; // 0x71b Return
	
Label_1820:
	var_660_int = 39842; // 0x71c PushI
	var_661_bool = var_19_object == var_660_int; // 0x71d Eq
	if(var_661_bool == 0) goto Label_1843; // 0x71e JumpB
	var_662_string = ""; // 0x71f PushV
	var_662_string = "Neutral"; // 0x720 MovS
	func_424(var_20_bool, var_662_string); // 0x721 NEW_2
	var_663_int = 537979; // 0x723 PushI
	SetMessage(var_663_int); // 0x724 TObjFunc
	ClearReplies(); // 0x726 TObjFunc
	var_664_int = 537980; // 0x728 PushI
	var_665_int = 39844; // 0x729 PushI
	var_666_int = 39843; // 0x72a PushI
	AddReply(var_664_int, var_665_int, var_666_int); // 0x72b TObjFunc
	var_667_int = 537986; // 0x72d PushI
	var_668_int = -1; // 0x72e PushI
	var_669_int = 39849; // 0x72f PushI
	AddReply(var_667_int, var_668_int, var_669_int); // 0x730 TObjFunc
	return 0; // 0x732 Return
	
Label_1843:
	var_670_int = 39844; // 0x733 PushI
	var_671_bool = var_19_object == var_670_int; // 0x734 Eq
	if(var_671_bool == 0) goto Label_1866; // 0x735 JumpB
	var_672_string = ""; // 0x736 PushV
	var_672_string = "Neutral"; // 0x737 MovS
	func_424(var_20_bool, var_672_string); // 0x738 NEW_2
	var_673_int = 537981; // 0x73a PushI
	SetMessage(var_673_int); // 0x73b TObjFunc
	ClearReplies(); // 0x73d TObjFunc
	var_674_int = 537982; // 0x73f PushI
	var_675_int = 39846; // 0x740 PushI
	var_676_int = 39845; // 0x741 PushI
	AddReply(var_674_int, var_675_int, var_676_int); // 0x742 TObjFunc
	var_677_int = 537985; // 0x744 PushI
	var_678_int = -1; // 0x745 PushI
	var_679_int = 39848; // 0x746 PushI
	AddReply(var_677_int, var_678_int, var_679_int); // 0x747 TObjFunc
	return 0; // 0x749 Return
	
Label_1866:
	var_680_int = 39846; // 0x74a PushI
	var_681_bool = var_19_object == var_680_int; // 0x74b Eq
	if(var_681_bool == 0) goto Label_1884; // 0x74c JumpB
	var_682_string = ""; // 0x74d PushV
	var_682_string = "Neutral"; // 0x74e MovS
	func_424(var_20_bool, var_682_string); // 0x74f NEW_2
	var_683_int = 537983; // 0x751 PushI
	SetMessage(var_683_int); // 0x752 TObjFunc
	ClearReplies(); // 0x754 TObjFunc
	var_684_int = 537984; // 0x756 PushI
	var_685_int = -1; // 0x757 PushI
	var_686_int = 39847; // 0x758 PushI
	AddReply(var_684_int, var_685_int, var_686_int); // 0x759 TObjFunc
	return 0; // 0x75b Return
	
Label_1884:
	var_687_int = 39835; // 0x75c PushI
	var_688_bool = var_19_object == var_687_int; // 0x75d Eq
	if(var_688_bool == 0) goto Label_1907; // 0x75e JumpB
	var_689_string = ""; // 0x75f PushV
	var_689_string = "Neutral"; // 0x760 MovS
	func_424(var_20_bool, var_689_string); // 0x761 NEW_2
	var_690_int = 537973; // 0x763 PushI
	SetMessage(var_690_int); // 0x764 TObjFunc
	ClearReplies(); // 0x766 TObjFunc
	var_691_int = 537974; // 0x768 PushI
	var_692_int = 39840; // 0x769 PushI
	var_693_int = 39836; // 0x76a PushI
	AddReply(var_691_int, var_692_int, var_693_int); // 0x76b TObjFunc
	var_694_int = 537975; // 0x76d PushI
	var_695_int = -1; // 0x76e PushI
	var_696_int = 39838; // 0x76f PushI
	AddReply(var_694_int, var_695_int, var_696_int); // 0x770 TObjFunc
	return 0; // 0x772 Return
	
Label_1907:
	var_697_int = 45790; // 0x773 PushI
	var_698_bool = var_19_object == var_697_int; // 0x774 Eq
	if(var_698_bool == 0) goto Label_1930; // 0x775 JumpB
	var_699_string = ""; // 0x776 PushV
	var_699_string = "Neutral"; // 0x777 MovS
	func_424(var_20_bool, var_699_string); // 0x778 NEW_2
	var_700_int = 543333; // 0x77a PushI
	SetMessage(var_700_int); // 0x77b TObjFunc
	ClearReplies(); // 0x77d TObjFunc
	var_701_int = 543334; // 0x77f PushI
	var_702_int = -1; // 0x780 PushI
	var_703_int = 45791; // 0x781 PushI
	AddReply(var_701_int, var_702_int, var_703_int); // 0x782 TObjFunc
	var_704_int = 543335; // 0x784 PushI
	var_705_int = -1; // 0x785 PushI
	var_706_int = 45792; // 0x786 PushI
	AddReply(var_704_int, var_705_int, var_706_int); // 0x787 TObjFunc
	return 0; // 0x789 Return
	
Label_1930:
	var_3_object = 1; // 0x78a TMovB
	var_707_bool = 0; // 0x78b PushV
	func_5511(var_707_bool); // 0x78c NEW_2
	if(var_707_bool == 0) goto Label_1938; // 0x78e JumpB
	lshStopAnimation(); // 0x78f Func
	goto Label_1940; // 0x791 Jump
	
Label_1940:
	return 0; // 0x794 Return
	
Label_1938:
	StopAnimation(); // 0x792 Func
	
Label_1942:
	return 0; // 0x796 Return
}


task_3_event_0(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_bool, var_8_bool, var_9_bool, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_int = 0; var_21_int = 0; // 0x7a6 PushV
	var_22_int = 0; var_23_object = Obj(); // 0x7a7 PushV
	var_23_object = var_19_bool; // 0x7a8 Mov
	func_5457(var_23_object); // 0x7a9 NEW_2
	var_21_int = var_22_int; // 0x7aa Mov
	var_24_int = 0; // 0x7ac PushI
	var_25_bool = var_21_int > var_24_int; // 0x7ad GT
	if(var_25_bool == 0) goto Label_1971; // 0x7ae JumpB
	var_26_object = Obj(); // 0x7af PushV
	var_26_object = var_19_bool; // 0x7b0 Mov
	func_5460(var_26_object); // 0x7b1 NEW_2
	
Label_1971:
	return 2; // 0x7b3 Return
}


task_3_event_6(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	func_5466(); // 0x7b5 NEW_2
	return 0; // 0x7b7 Return
}


task_3_event_22(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_int, var_8_float, var_9_float, var_10_bool, var_11_bool, var_12_bool, var_13_object, var_14_object, var_15_int, var_16_int, var_17_bool, var_18_float, var_19_int, var_20_bool, var_21_object, var_22_bool)
{
	return 0; // 0x82e Return
}


task_3_event_16(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_string, var_8_bool, var_9_bool, var_10_bool, var_11_object, var_12_object, var_13_int, var_14_int, var_15_bool, var_16_float, var_17_int, var_18_bool, var_19_object, var_20_bool)
{
	return 0; // 0x830 Return
}


task_3_event_41(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_bool, var_8_bool, var_9_bool, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	return 0; // 0x832 Return
}


task_4_event_0(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_int = 0; var_21_int = 0; // 0x84b PushV
	var_22_int = 0; var_23_object = Obj(); // 0x84c PushV
	var_23_object = var_19_bool; // 0x84d Mov
	func_5457(var_23_object); // 0x84e NEW_2
	var_21_int = var_22_int; // 0x84f Mov
	var_24_int = 0; // 0x851 PushI
	var_25_bool = var_21_int > var_24_int; // 0x852 GT
	if(var_25_bool == 0) goto Label_2142; // 0x853 JumpB
	var_26_int = 1; // 0x854 PushI
	var_27_bool = var_21_int > var_26_int; // 0x855 GT
	if(var_27_bool == 0) goto Label_2138; // 0x856 JumpB
	func_2310(var_21_int); // 0x858 NEW_2
	
Label_2138:
	var_29_object = Obj(); // 0x85a PushV
	var_29_object = var_19_bool; // 0x85b Mov
	func_5460(var_29_object); // 0x85c NEW_2
	
Label_2142:
	return 2; // 0x85e Return
}


task_4_event_17(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_int = 0; var_21_int = 0; // 0x85f PushV
	var_22_object = Obj(); // 0x860 PushV
	var_22_object = var_19_bool; // 0x861 Mov
	func_5188(var_22_object); // 0x862 NEW_2
	var_31_int = 0; var_32_object = Obj(); // 0x864 PushV
	var_32_object = var_19_bool; // 0x865 Mov
	func_5271(var_31_int, var_32_object); // 0x866 NEW_2
	var_21_int = var_31_int; // 0x867 Mov
	var_67_int = 0; // 0x869 PushI
	var_68_bool = var_21_int > var_67_int; // 0x86a GT
	if(var_68_bool == 0) goto Label_2166; // 0x86b JumpB
	var_69_int = 1; // 0x86c PushI
	var_70_bool = var_21_int > var_69_int; // 0x86d GT
	if(var_70_bool == 0) goto Label_2162; // 0x86e JumpB
	func_2310(var_21_int); // 0x870 NEW_2
	
Label_2162:
	var_72_object = Obj(); // 0x872 PushV
	var_72_object = var_19_bool; // 0x873 Mov
	func_5281(var_72_object); // 0x874 NEW_2
	
Label_2166:
	return 2; // 0x876 Return
}


task_4_event_30(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_bool, var_12_object, var_13_object, var_14_int, var_15_int, var_16_bool, var_17_float, var_18_int, var_19_bool, var_20_object, var_21_bool)
{
	var_22_int = 0; var_23_int = 0; // 0x877 PushV
	var_24_bool = 0; var_25_object = Obj(); var_26_object = Obj(); var_27_bool = 0; // 0x878 PushV
	var_25_object = var_19_bool; // 0x879 Mov
	var_26_object = var_20_object; // 0x87a Mov
	var_27_bool = var_21_bool; // 0x87b Mov
	func_5562(var_24_bool, var_25_object, var_26_object, var_27_bool); // 0x87c NEW_2
	if(var_24_bool == 0) goto Label_2194; // 0x87e JumpB
	var_86_int = 0; var_87_object = Obj(); var_88_bool = 0; // 0x87f PushV
	var_87_object = var_19_bool; // 0x880 Mov
	var_88_bool = var_21_bool; // 0x881 Mov
	func_5364(var_87_object, var_88_bool); // 0x882 NEW_2
	var_23_int = var_86_int; // 0x883 Mov
	var_119_int = 0; // 0x885 PushI
	var_120_bool = var_23_int > var_119_int; // 0x886 GT
	if(var_120_bool == 0) goto Label_2194; // 0x887 JumpB
	var_121_int = 1; // 0x888 PushI
	var_122_bool = var_23_int > var_121_int; // 0x889 GT
	if(var_122_bool == 0) goto Label_2190; // 0x88a JumpB
	func_2310(var_23_int); // 0x88c NEW_2
	
Label_2190:
	var_124_object = Obj(); // 0x88e PushV
	var_124_object = var_19_bool; // 0x88f Mov
	func_5371(var_124_object); // 0x890 NEW_2
	
Label_2194:
	return 2; // 0x892 Return
}


task_4_event_40(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_int = 0; var_21_int = 0; // 0x893 PushV
	var_22_int = 0; var_23_object = Obj(); // 0x894 PushV
	var_23_object = var_19_bool; // 0x895 Mov
	func_5406(var_23_object); // 0x896 NEW_2
	var_21_int = var_22_int; // 0x897 Mov
	var_24_int = 0; // 0x899 PushI
	var_25_bool = var_21_int > var_24_int; // 0x89a GT
	if(var_25_bool == 0) goto Label_2214; // 0x89b JumpB
	var_26_int = 1; // 0x89c PushI
	var_27_bool = var_21_int > var_26_int; // 0x89d GT
	if(var_27_bool == 0) goto Label_2210; // 0x89e JumpB
	func_2310(var_21_int); // 0x8a0 NEW_2
	
Label_2210:
	var_29_object = Obj(); // 0x8a2 PushV
	var_29_object = var_19_bool; // 0x8a3 Mov
	func_5409(); // 0x8a4 NEW_2
	
Label_2214:
	return 2; // 0x8a6 Return
}


task_4_event_42(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_string, var_11_object, var_12_object, var_13_int, var_14_int, var_15_bool, var_16_float, var_17_int, var_18_bool, var_19_object, var_20_bool)
{
	var_21_int = 0; var_22_int = 0; // 0x8a7 PushV
	var_23_bool = 0; var_24_object = Obj(); var_25_string = ""; // 0x8a8 PushV
	var_24_object = var_19_object; // 0x8a9 Mov
	var_25_string = var_20_bool; // 0x8aa Mov
	func_5102(var_23_bool, var_24_object, var_25_string); // 0x8ab NEW_2
	if(var_23_bool == 0) goto Label_2231; // 0x8ad JumpB
	func_2310(var_22_int); // 0x8af NEW_2
	var_52_object = Obj(); var_53_string = ""; // 0x8b1 PushV
	var_52_object = var_19_object; // 0x8b2 Mov
	var_53_string = var_20_bool; // 0x8b3 Mov
	func_5134(var_52_object, var_53_string); // 0x8b4 NEW_2
	goto Label_2251; // 0x8b6 Jump
	
Label_2251:
	return 2; // 0x8cb Return
	
Label_2231:
	var_128_int = 0; var_129_string = ""; var_130_object = Obj(); // 0x8b7 PushV
	var_129_string = var_20_bool; // 0x8b8 Mov
	var_130_object = var_19_object; // 0x8b9 Mov
	func_5411(var_128_int, var_129_string, var_130_object); // 0x8ba NEW_2
	var_22_int = var_128_int; // 0x8bb Mov
	var_172_int = 0; // 0x8bd PushI
	var_173_bool = var_22_int > var_172_int; // 0x8be GT
	if(var_173_bool == 0) goto Label_2251; // 0x8bf JumpB
	var_174_int = 1; // 0x8c0 PushI
	var_175_bool = var_22_int > var_174_int; // 0x8c1 GT
	if(var_175_bool == 0) goto Label_2246; // 0x8c2 JumpB
	func_2310(var_22_int); // 0x8c4 NEW_2
	
Label_2246:
	var_176_string = ""; var_177_object = Obj(); // 0x8c6 PushV
	var_176_string = var_20_bool; // 0x8c7 Mov
	var_177_object = var_19_object; // 0x8c8 Mov
	func_5423(var_176_string, var_177_object); // 0x8c9 NEW_2
}


task_4_event_26(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_string, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_bool = 0; var_21_string = ""; // 0x8cd PushV
	var_21_string = var_19_bool; // 0x8ce Mov
	func_5201(var_20_bool, var_21_string); // 0x8cf NEW_2
	if(var_20_bool == 0) goto Label_2265; // 0x8d1 JumpB
	func_2310(var_19_bool); // 0x8d3 NEW_2
	var_30_string = ""; // 0x8d5 PushV
	var_30_string = var_19_bool; // 0x8d6 Mov
	func_5217(var_30_string); // 0x8d7 NEW_2
	
Label_2265:
	return 0; // 0x8d9 Return
}


task_4_event_1(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_bool = 0; var_21_object = Obj(); // 0x8db PushV
	var_21_object = var_19_bool; // 0x8dc Mov
	func_5159(var_20_bool, var_21_object); // 0x8dd NEW_2
	if(var_20_bool == 0) goto Label_2280; // 0x8df JumpB
	func_2310(var_19_bool); // 0x8e1 NEW_2
	var_33_object = Obj(); // 0x8e3 PushV
	var_33_object = var_19_bool; // 0x8e4 Mov
	func_5182(var_33_object); // 0x8e5 NEW_2
	goto Label_2284; // 0x8e7 Jump
	
Label_2284:
	return 0; // 0x8ec Return
	
Label_2280:
	var_35_object = Obj(); // 0x8e8 PushV
	var_35_object = var_19_bool; // 0x8e9 Mov
	func_2335(var_19_bool, var_35_object); // 0x8ea NEW_2
}


task_4_event_3(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_object = Obj(); // 0x8ee PushV
	var_20_object = var_19_bool; // 0x8ef Mov
	func_2335(var_19_bool, var_20_object); // 0x8f0 NEW_2
	return 0; // 0x8f2 Return
}


task_4_event_7(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_int, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_int = 110; // 0x8f4 PushI
	var_21_bool = var_19_bool != var_20_int; // 0x8f5 Neq
	if(var_21_bool == 0) goto Label_2296; // 0x8f6 JumpB
	return 0; // 0x8f7 Return
	
Label_2296:
	var_2_object = 0; // 0x8f8 TMovB
	var_22_int = 110; // 0x8f9 PushI
	KillTimer(var_22_int); // 0x8fa Func
	ResetAAS(); // 0x8fc Func
	return 0; // 0x8fe Return
}


task_4_event_6(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	func_2310(var_18_bool); // 0x900 NEW_2
	func_5466(); // 0x903 NEW_2
	return 0; // 0x905 Return
}


task_4_event_41(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	func_2310(var_19_bool); // 0x918 NEW_2
	var_21_object = Obj(); // 0x91a PushV
	var_21_object = var_19_bool; // 0x91b Mov
	func_5078(); // 0x91c NEW_2
	return 0; // 0x91e Return
}


task_4_event_10(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	RequestClearPath(var_19_bool); // 0x988 Func
	return 0; // 0x98a Return
}


task_4_event_28(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	Stop(); // 0x98b Func
	return 0; // 0x98d Return
}


task_5_event_0(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_int = 0; var_21_int = 0; // 0x9a4 PushV
	var_22_int = 0; var_23_object = Obj(); // 0x9a5 PushV
	var_23_object = var_19_bool; // 0x9a6 Mov
	func_5457(var_23_object); // 0x9a7 NEW_2
	var_21_int = var_22_int; // 0x9a8 Mov
	var_24_int = 0; // 0x9aa PushI
	var_25_bool = var_21_int > var_24_int; // 0x9ab GT
	if(var_25_bool == 0) goto Label_2487; // 0x9ac JumpB
	var_26_int = 1; // 0x9ad PushI
	var_27_bool = var_21_int > var_26_int; // 0x9ae GT
	if(var_27_bool == 0) goto Label_2483; // 0x9af JumpB
	func_2713(); // 0x9b1 NEW_2
	
Label_2483:
	var_28_object = Obj(); // 0x9b3 PushV
	var_28_object = var_19_bool; // 0x9b4 Mov
	func_5460(var_28_object); // 0x9b5 NEW_2
	
Label_2487:
	return 2; // 0x9b7 Return
}


task_5_event_17(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_int = 0; var_21_int = 0; // 0x9b8 PushV
	var_22_object = Obj(); // 0x9b9 PushV
	var_22_object = var_19_bool; // 0x9ba Mov
	func_5188(var_22_object); // 0x9bb NEW_2
	var_31_int = 0; var_32_object = Obj(); // 0x9bd PushV
	var_32_object = var_19_bool; // 0x9be Mov
	func_5271(var_31_int, var_32_object); // 0x9bf NEW_2
	var_21_int = var_31_int; // 0x9c0 Mov
	var_67_int = 0; // 0x9c2 PushI
	var_68_bool = var_21_int > var_67_int; // 0x9c3 GT
	if(var_68_bool == 0) goto Label_2511; // 0x9c4 JumpB
	var_69_int = 1; // 0x9c5 PushI
	var_70_bool = var_21_int > var_69_int; // 0x9c6 GT
	if(var_70_bool == 0) goto Label_2507; // 0x9c7 JumpB
	func_2713(); // 0x9c9 NEW_2
	
Label_2507:
	var_71_object = Obj(); // 0x9cb PushV
	var_71_object = var_19_bool; // 0x9cc Mov
	func_5281(var_71_object); // 0x9cd NEW_2
	
Label_2511:
	return 2; // 0x9cf Return
}


task_5_event_30(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_bool, var_12_object, var_13_object, var_14_int, var_15_int, var_16_bool, var_17_float, var_18_int, var_19_bool, var_20_object, var_21_bool)
{
	var_22_int = 0; var_23_int = 0; // 0x9d0 PushV
	var_24_bool = 0; var_25_object = Obj(); var_26_object = Obj(); var_27_bool = 0; // 0x9d1 PushV
	var_25_object = var_19_bool; // 0x9d2 Mov
	var_26_object = var_20_object; // 0x9d3 Mov
	var_27_bool = var_21_bool; // 0x9d4 Mov
	func_5562(var_24_bool, var_25_object, var_26_object, var_27_bool); // 0x9d5 NEW_2
	if(var_24_bool == 0) goto Label_2539; // 0x9d7 JumpB
	var_86_int = 0; var_87_object = Obj(); var_88_bool = 0; // 0x9d8 PushV
	var_87_object = var_19_bool; // 0x9d9 Mov
	var_88_bool = var_21_bool; // 0x9da Mov
	func_5364(var_87_object, var_88_bool); // 0x9db NEW_2
	var_23_int = var_86_int; // 0x9dc Mov
	var_119_int = 0; // 0x9de PushI
	var_120_bool = var_23_int > var_119_int; // 0x9df GT
	if(var_120_bool == 0) goto Label_2539; // 0x9e0 JumpB
	var_121_int = 1; // 0x9e1 PushI
	var_122_bool = var_23_int > var_121_int; // 0x9e2 GT
	if(var_122_bool == 0) goto Label_2535; // 0x9e3 JumpB
	func_2713(); // 0x9e5 NEW_2
	
Label_2535:
	var_123_object = Obj(); // 0x9e7 PushV
	var_123_object = var_19_bool; // 0x9e8 Mov
	func_5371(var_123_object); // 0x9e9 NEW_2
	
Label_2539:
	return 2; // 0x9eb Return
}


task_5_event_40(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_int = 0; var_21_int = 0; // 0x9ec PushV
	var_22_int = 0; var_23_object = Obj(); // 0x9ed PushV
	var_23_object = var_19_bool; // 0x9ee Mov
	func_5406(var_23_object); // 0x9ef NEW_2
	var_21_int = var_22_int; // 0x9f0 Mov
	var_24_int = 0; // 0x9f2 PushI
	var_25_bool = var_21_int > var_24_int; // 0x9f3 GT
	if(var_25_bool == 0) goto Label_2559; // 0x9f4 JumpB
	var_26_int = 1; // 0x9f5 PushI
	var_27_bool = var_21_int > var_26_int; // 0x9f6 GT
	if(var_27_bool == 0) goto Label_2555; // 0x9f7 JumpB
	func_2713(); // 0x9f9 NEW_2
	
Label_2555:
	var_28_object = Obj(); // 0x9fb PushV
	var_28_object = var_19_bool; // 0x9fc Mov
	func_5409(); // 0x9fd NEW_2
	
Label_2559:
	return 2; // 0x9ff Return
}


task_5_event_42(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_string, var_11_object, var_12_object, var_13_int, var_14_int, var_15_bool, var_16_float, var_17_int, var_18_bool, var_19_object, var_20_bool)
{
	var_21_int = 0; var_22_int = 0; // 0xa00 PushV
	var_23_bool = 0; var_24_object = Obj(); var_25_string = ""; // 0xa01 PushV
	var_24_object = var_19_object; // 0xa02 Mov
	var_25_string = var_20_bool; // 0xa03 Mov
	func_5102(var_23_bool, var_24_object, var_25_string); // 0xa04 NEW_2
	if(var_23_bool == 0) goto Label_2576; // 0xa06 JumpB
	func_2713(); // 0xa08 NEW_2
	var_51_object = Obj(); var_52_string = ""; // 0xa0a PushV
	var_51_object = var_19_object; // 0xa0b Mov
	var_52_string = var_20_bool; // 0xa0c Mov
	func_5134(var_51_object, var_52_string); // 0xa0d NEW_2
	goto Label_2596; // 0xa0f Jump
	
Label_2596:
	return 2; // 0xa24 Return
	
Label_2576:
	var_127_int = 0; var_128_string = ""; var_129_object = Obj(); // 0xa10 PushV
	var_128_string = var_20_bool; // 0xa11 Mov
	var_129_object = var_19_object; // 0xa12 Mov
	func_5411(var_127_int, var_128_string, var_129_object); // 0xa13 NEW_2
	var_22_int = var_127_int; // 0xa14 Mov
	var_171_int = 0; // 0xa16 PushI
	var_172_bool = var_22_int > var_171_int; // 0xa17 GT
	if(var_172_bool == 0) goto Label_2596; // 0xa18 JumpB
	var_173_int = 1; // 0xa19 PushI
	var_174_bool = var_22_int > var_173_int; // 0xa1a GT
	if(var_174_bool == 0) goto Label_2591; // 0xa1b JumpB
	func_2713(); // 0xa1d NEW_2
	
Label_2591:
	var_175_string = ""; var_176_object = Obj(); // 0xa1f PushV
	var_175_string = var_20_bool; // 0xa20 Mov
	var_176_object = var_19_object; // 0xa21 Mov
	func_5423(var_175_string, var_176_object); // 0xa22 NEW_2
}


task_5_event_26(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_string, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_bool = 0; var_21_string = ""; // 0xa26 PushV
	var_21_string = var_19_bool; // 0xa27 Mov
	func_5201(var_20_bool, var_21_string); // 0xa28 NEW_2
	if(var_20_bool == 0) goto Label_2610; // 0xa2a JumpB
	func_2713(); // 0xa2c NEW_2
	var_29_string = ""; // 0xa2e PushV
	var_29_string = var_19_bool; // 0xa2f Mov
	func_5217(var_29_string); // 0xa30 NEW_2
	
Label_2610:
	return 0; // 0xa32 Return
}


task_5_event_6(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	func_2713(); // 0xa34 NEW_2
	func_5466(); // 0xa37 NEW_2
	return 0; // 0xa39 Return
}


task_5_event_1(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_bool = 0; var_21_object = Obj(); // 0xa3b PushV
	var_21_object = var_19_bool; // 0xa3c Mov
	func_5159(var_20_bool, var_21_object); // 0xa3d NEW_2
	if(var_20_bool == 0) goto Label_2631; // 0xa3f JumpB
	func_2713(); // 0xa41 NEW_2
	var_32_object = Obj(); // 0xa43 PushV
	var_32_object = var_19_bool; // 0xa44 Mov
	func_5182(var_32_object); // 0xa45 NEW_2
	
Label_2631:
	return 0; // 0xa47 Return
}


task_6_event_0(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_int = 0; var_21_int = 0; // 0xad6 PushV
	var_22_int = 0; var_23_object = Obj(); // 0xad7 PushV
	var_23_object = var_19_bool; // 0xad8 Mov
	func_5457(var_23_object); // 0xad9 NEW_2
	var_21_int = var_22_int; // 0xada Mov
	var_24_int = 0; // 0xadc PushI
	var_25_bool = var_21_int > var_24_int; // 0xadd GT
	if(var_25_bool == 0) goto Label_2793; // 0xade JumpB
	var_26_int = 1; // 0xadf PushI
	var_27_bool = var_21_int > var_26_int; // 0xae0 GT
	if(var_27_bool == 0) goto Label_2789; // 0xae1 JumpB
	func_2917(); // 0xae3 NEW_2
	
Label_2789:
	var_30_object = Obj(); // 0xae5 PushV
	var_30_object = var_19_bool; // 0xae6 Mov
	func_5460(var_30_object); // 0xae7 NEW_2
	
Label_2793:
	return 2; // 0xae9 Return
}


task_6_event_17(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_int = 0; var_21_int = 0; // 0xaea PushV
	var_22_object = Obj(); // 0xaeb PushV
	var_22_object = var_19_bool; // 0xaec Mov
	func_5188(var_22_object); // 0xaed NEW_2
	var_31_int = 0; var_32_object = Obj(); // 0xaef PushV
	var_32_object = var_19_bool; // 0xaf0 Mov
	func_5271(var_31_int, var_32_object); // 0xaf1 NEW_2
	var_21_int = var_31_int; // 0xaf2 Mov
	var_67_int = 0; // 0xaf4 PushI
	var_68_bool = var_21_int > var_67_int; // 0xaf5 GT
	if(var_68_bool == 0) goto Label_2817; // 0xaf6 JumpB
	var_69_int = 1; // 0xaf7 PushI
	var_70_bool = var_21_int > var_69_int; // 0xaf8 GT
	if(var_70_bool == 0) goto Label_2813; // 0xaf9 JumpB
	func_2917(); // 0xafb NEW_2
	
Label_2813:
	var_73_object = Obj(); // 0xafd PushV
	var_73_object = var_19_bool; // 0xafe Mov
	func_5281(var_73_object); // 0xaff NEW_2
	
Label_2817:
	return 2; // 0xb01 Return
}


task_6_event_30(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_bool, var_13_object, var_14_int, var_15_int, var_16_bool, var_17_float, var_18_int, var_19_bool, var_20_object, var_21_bool)
{
	var_22_int = 0; var_23_int = 0; // 0xb02 PushV
	var_24_bool = 0; var_25_object = Obj(); var_26_object = Obj(); var_27_bool = 0; // 0xb03 PushV
	var_25_object = var_19_bool; // 0xb04 Mov
	var_26_object = var_20_object; // 0xb05 Mov
	var_27_bool = var_21_bool; // 0xb06 Mov
	func_5562(var_24_bool, var_25_object, var_26_object, var_27_bool); // 0xb07 NEW_2
	if(var_24_bool == 0) goto Label_2845; // 0xb09 JumpB
	var_86_int = 0; var_87_object = Obj(); var_88_bool = 0; // 0xb0a PushV
	var_87_object = var_19_bool; // 0xb0b Mov
	var_88_bool = var_21_bool; // 0xb0c Mov
	func_5364(var_87_object, var_88_bool); // 0xb0d NEW_2
	var_23_int = var_86_int; // 0xb0e Mov
	var_119_int = 0; // 0xb10 PushI
	var_120_bool = var_23_int > var_119_int; // 0xb11 GT
	if(var_120_bool == 0) goto Label_2845; // 0xb12 JumpB
	var_121_int = 1; // 0xb13 PushI
	var_122_bool = var_23_int > var_121_int; // 0xb14 GT
	if(var_122_bool == 0) goto Label_2841; // 0xb15 JumpB
	func_2917(); // 0xb17 NEW_2
	
Label_2841:
	var_125_object = Obj(); // 0xb19 PushV
	var_125_object = var_19_bool; // 0xb1a Mov
	func_5371(var_125_object); // 0xb1b NEW_2
	
Label_2845:
	return 2; // 0xb1d Return
}


task_6_event_40(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_int = 0; var_21_int = 0; // 0xb1e PushV
	var_22_int = 0; var_23_object = Obj(); // 0xb1f PushV
	var_23_object = var_19_bool; // 0xb20 Mov
	func_5406(var_23_object); // 0xb21 NEW_2
	var_21_int = var_22_int; // 0xb22 Mov
	var_24_int = 0; // 0xb24 PushI
	var_25_bool = var_21_int > var_24_int; // 0xb25 GT
	if(var_25_bool == 0) goto Label_2865; // 0xb26 JumpB
	var_26_int = 1; // 0xb27 PushI
	var_27_bool = var_21_int > var_26_int; // 0xb28 GT
	if(var_27_bool == 0) goto Label_2861; // 0xb29 JumpB
	func_2917(); // 0xb2b NEW_2
	
Label_2861:
	var_30_object = Obj(); // 0xb2d PushV
	var_30_object = var_19_bool; // 0xb2e Mov
	func_5409(); // 0xb2f NEW_2
	
Label_2865:
	return 2; // 0xb31 Return
}


task_6_event_42(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_string, var_12_object, var_13_int, var_14_int, var_15_bool, var_16_float, var_17_int, var_18_bool, var_19_object, var_20_bool)
{
	var_21_int = 0; var_22_int = 0; // 0xb32 PushV
	var_23_bool = 0; var_24_object = Obj(); var_25_string = ""; // 0xb33 PushV
	var_24_object = var_19_object; // 0xb34 Mov
	var_25_string = var_20_bool; // 0xb35 Mov
	func_5102(var_23_bool, var_24_object, var_25_string); // 0xb36 NEW_2
	if(var_23_bool == 0) goto Label_2882; // 0xb38 JumpB
	func_2917(); // 0xb3a NEW_2
	var_53_object = Obj(); var_54_string = ""; // 0xb3c PushV
	var_53_object = var_19_object; // 0xb3d Mov
	var_54_string = var_20_bool; // 0xb3e Mov
	func_5134(var_53_object, var_54_string); // 0xb3f NEW_2
	goto Label_2902; // 0xb41 Jump
	
Label_2902:
	return 2; // 0xb56 Return
	
Label_2882:
	var_129_int = 0; var_130_string = ""; var_131_object = Obj(); // 0xb42 PushV
	var_130_string = var_20_bool; // 0xb43 Mov
	var_131_object = var_19_object; // 0xb44 Mov
	func_5411(var_129_int, var_130_string, var_131_object); // 0xb45 NEW_2
	var_22_int = var_129_int; // 0xb46 Mov
	var_173_int = 0; // 0xb48 PushI
	var_174_bool = var_22_int > var_173_int; // 0xb49 GT
	if(var_174_bool == 0) goto Label_2902; // 0xb4a JumpB
	var_175_int = 1; // 0xb4b PushI
	var_176_bool = var_22_int > var_175_int; // 0xb4c GT
	if(var_176_bool == 0) goto Label_2897; // 0xb4d JumpB
	func_2917(); // 0xb4f NEW_2
	
Label_2897:
	var_177_string = ""; var_178_object = Obj(); // 0xb51 PushV
	var_177_string = var_20_bool; // 0xb52 Mov
	var_178_object = var_19_object; // 0xb53 Mov
	func_5423(var_177_string, var_178_object); // 0xb54 NEW_2
}


task_6_event_26(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_string, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_bool = 0; var_21_string = ""; // 0xb58 PushV
	var_21_string = var_19_bool; // 0xb59 Mov
	func_5201(var_20_bool, var_21_string); // 0xb5a NEW_2
	if(var_20_bool == 0) goto Label_2916; // 0xb5c JumpB
	func_2917(); // 0xb5e NEW_2
	var_31_string = ""; // 0xb60 PushV
	var_31_string = var_19_bool; // 0xb61 Mov
	func_5217(var_31_string); // 0xb62 NEW_2
	
Label_2916:
	return 0; // 0xb64 Return
}


task_6_event_41(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	func_2917(); // 0xb72 NEW_2
	var_22_object = Obj(); // 0xb74 PushV
	var_22_object = var_19_bool; // 0xb75 Mov
	func_5078(); // 0xb76 NEW_2
	return 0; // 0xb78 Return
}


task_6_event_7(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_int, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); // 0xb79 PushV
	var_24_int = 111; // 0xb7a PushI
	var_25_bool = var_19_bool != var_24_int; // 0xb7b Neq
	if(var_25_bool == 0) goto Label_2942; // 0xb7c JumpB
	return 4; // 0xb7d Return
	
Label_2942:
	var_26_bool = 0; var_27_object = Obj(); // 0xb7e PushV
	var_27_object = var_0_bool; // 0xb7f MovT
	func_4092(var_26_bool, var_27_object); // 0xb80 NEW_2
	var_60_bool = var_26_bool == 0; // 0xb82 Not
	if(var_60_bool == 0) goto Label_2952; // 0xb83 JumpB
	func_2917(); // 0xb85 NEW_2
	return 4; // 0xb87 Return
	
Label_2952:
	GetDirection(var_22_cvector); // 0xb88 Func
	var_63_cvector = CVector(0,0,0); var_64_object = Obj(); // 0xb8a PushV
	var_64_object = var_0_bool; // 0xb8b MovT
	func_3946(var_64_object); // 0xb8c NEW_2
	var_23_cvector = var_63_cvector; // 0xb8d Mov
	var_69_float = 0; var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); // 0xb8f PushV
	var_70_cvector = var_22_cvector; // 0xb90 Mov
	var_71_cvector = var_23_cvector; // 0xb91 Mov
	func_4549(var_69_float, var_70_cvector, var_71_cvector); // 0xb92 NEW_2
	var_93_float = 0.5; // 0xb94 PushF
	var_94_bool = var_69_float < var_93_float; // 0xb95 LT
	if(var_94_bool == 0) goto Label_2971; // 0xb96 JumpB
	var_95_object = Obj(); // 0xb97 PushV
	var_95_object = var_0_bool; // 0xb98 MovT
	func_4242(); // 0xb99 NEW_2
	
Label_2971:
	return 4; // 0xb9b Return
}


task_6_event_6(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	func_2917(); // 0xb9d NEW_2
	func_5466(); // 0xba0 NEW_2
	return 0; // 0xba2 Return
}


task_6_event_1(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_bool = 0; var_21_object = Obj(); // 0xba4 PushV
	var_21_object = var_19_bool; // 0xba5 Mov
	func_5159(var_20_bool, var_21_object); // 0xba6 NEW_2
	if(var_20_bool == 0) goto Label_2992; // 0xba8 JumpB
	func_2917(); // 0xbaa NEW_2
	var_34_object = Obj(); // 0xbac PushV
	var_34_object = var_19_bool; // 0xbad Mov
	func_5182(var_34_object); // 0xbae NEW_2
	
Label_2992:
	return 0; // 0xbb0 Return
}


task_8_event_6(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	func_3739(var_18_bool); // 0xe56 NEW_2
	func_5466(); // 0xe59 NEW_2
	return 0; // 0xe5b Return
}


task_8_event_7(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool, var_19_int)
{
	var_20_int = 1; // 0xe8e PushI
	var_21_bool = var_19_int == var_20_int; // 0xe8f Eq
	if(var_21_bool == 0) goto Label_3734; // 0xe90 JumpB
	var_22_object = Obj(); // 0xe91 PushV
	var_22_object = var_1_object; // 0xe92 MovT
	func_4605(var_22_object); // 0xe93 NEW_2
	goto Label_3738; // 0xe95 Jump
	
Label_3738:
	return 0; // 0xe9a Return
	
Label_3734:
	var_27_int = 0; // 0xe96 PushV
	var_27_int = var_19_int; // 0xe97 Mov
	func_3883(var_18_bool, var_19_int, var_27_int); // 0xe98 NEW_2
}


task_8_event_1(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool, var_19_object)
{
	var_20_bool = 0; // 0xea9 PushV
	var_20_bool = 0; // 0xeaa MovB
	var_21_bool = var_1_object == var_19_object; // 0xeab Eq
	if(var_21_bool == 0) goto Label_3760; // 0xeac JumpB
	var_22_bool = var_2_object == 0; // 0xead Not
	if(var_22_bool == 0) goto Label_3760; // 0xeae JumpB
	var_20_bool = 1; // 0xeaf MovB
	
Label_3760:
	if(var_20_bool == 0) goto Label_3766; // 0xeb0 JumpB
	var_2_object = 1; // 0xeb1 TMovB
	var_23_object = Obj(); // 0xeb2 PushV
	var_23_object = var_19_object; // 0xeb3 Mov
	func_4437(var_23_object); // 0xeb4 NEW_2
	
Label_3766:
	return 0; // 0xeb6 Return
}


task_8_event_2(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool, var_19_object)
{
	var_20_bool = 0; // 0xeb8 PushV
	var_20_bool = 0; // 0xeb9 MovB
	var_21_bool = var_1_object == var_19_object; // 0xeba Eq
	if(var_21_bool == 0) goto Label_3775; // 0xebb JumpB
	var_22_object = var_2_object; // 0xebc PushT
	if(var_22_object == 0) goto Label_3775; // 0xebd JumpB
	var_20_bool = 1; // 0xebe MovB
	
Label_3775:
	if(var_20_bool == 0) goto Label_3780; // 0xebf JumpB
	var_2_object = 0; // 0xec0 TMovB
	var_23_string = "head"; // 0xec1 PushS
	UnlookAsync(var_23_string); // 0xec2 Func
	
Label_3780:
	return 0; // 0xec4 Return
}


task_8_event_10(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool, var_19_object)
{
	RequestClearPath(var_19_object); // 0xf3e Func
	return 0; // 0xf40 Return
}


task_8_event_41(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool, var_19_object)
{
	func_3739(var_19_object); // 0xf4a NEW_2
	var_24_object = Obj(); // 0xf4c PushV
	var_24_object = var_19_object; // 0xf4d Mov
	func_5078(); // 0xf4e NEW_2
	return 0; // 0xf50 Return
}


event_16(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool, var_19_object, var_20_string)
{
	var_21_float = 0; var_22_float = 0; // 0x13c9 PushV
	var_23_string = "health"; // 0x13ca PushS
	var_24_bool = var_20_string == var_23_string; // 0x13cb Eq
	if(var_24_bool == 0) goto Label_5077; // 0x13cc JumpB
	var_25_string = "health"; // 0x13cd PushS
	GetProperty(var_25_string, var_22_float); // 0x13ce Func
	var_26_int = 0; // 0x13d0 PushI
	var_27_bool = var_22_float <= var_26_int; // 0x13d1 LE
	if(var_27_bool == 0) goto Label_5077; // 0x13d2 JumpB
	SignalDeath(var_19_object); // 0x13d3 Func
	
Label_5077:
	return 2; // 0x13d5 Return
}


event_41(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool, var_19_object)
{
	var_20_object = Obj(); // 0x13d7 PushV
	var_20_object = var_19_object; // 0x13d8 Mov
	func_5057(var_20_object); // 0x13d9 NEW_2
	return 0; // 0x13db Return
}


event_22(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool, var_19_object, var_20_int, var_21_float, var_22_float)
{
	var_23_object = Obj(); var_24_int = 0; var_25_float = 0; // 0x13dd PushV
	var_23_object = var_19_object; // 0x13de Mov
	var_24_int = var_20_int; // 0x13df Mov
	var_25_float = var_21_float; // 0x13e0 Mov
	func_4160(var_23_object, var_24_int, var_25_float); // 0x13e1 NEW_2
	return 0; // 0x13e3 Return
}


event_43(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool, var_19_object, var_20_int, var_21_float, var_22_float, var_23_cvector, var_24_cvector)
{
	var_25_object = Obj(); var_26_int = 0; var_27_float = 0; var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); // 0x13e5 PushV
	var_25_object = var_19_object; // 0x13e6 Mov
	var_26_int = var_20_int; // 0x13e7 Mov
	var_27_float = var_21_float; // 0x13e8 Mov
	var_28_cvector = var_23_cvector; // 0x13e9 Mov
	var_29_cvector = var_24_cvector; // 0x13ea Mov
	func_4228(var_27_float, var_28_cvector, var_29_cvector); // 0x13eb NEW_2
	return 0; // 0x13ed Return
}


main(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_bool = 1; // 0x833 PushB
	SensePlayerOnly(var_19_bool); // 0x834 Func
	func_5513(); // 0x837 NEW_2
	func_2114(); // 0x83a NEW_2
	
Label_2108:
	var_2_object = 0; // 0x83c TMovB
	func_2375(var_17_object, var_18_bool); // 0x83e NEW_2
	goto Label_2108; // 0x840 Jump
}


func_0(var_0_bool)
{
	DoTrade(); // 0x1 Func
	var_0_bool = 0; // 0x3 TMovB
	
Label_4:
	var_359_bool = 0; // 0x4 PushV
	func_5511(var_359_bool); // 0x5 NEW_2
	if(var_359_bool == 0) goto Label_15; // 0x7 JumpB
	var_360_string = ""; // 0x8 PushV
	var_360_string = "Neutral"; // 0x9 MovS
	func_4406(var_360_string); // 0xa NEW_2
	lshWaitForAnimEnd(); // 0xc Func
	goto Label_21; // 0xe Jump
	
Label_21:
	var_361_bool = var_0_bool; // 0x15 PushT
	if(var_361_bool == 0) goto Label_24; // 0x16 JumpB
	return 0; // 0x17 Return
	
Label_24:
	goto Label_4; // 0x18 Jump
	
Label_15:
	WaitForAnimEnd(); // 0xf Func
	var_362_string = "all"; // 0x11 PushS
	var_363_string = "idle"; // 0x12 PushS
	PlayAnimation(var_362_string, var_363_string); // 0x13 Func
}


func_4614()
{
	var_473_object = Obj(); var_474_object = Obj(); // 0x1206 PushV
	GetScene(var_474_object); // 0x1207 Func
	var_475_string = "battle"; // 0x1209 PushS
	var_476_object = Obj(); // 0x120a PushV
	func_4496(var_476_object); // 0x120b NEW_2
	BroadcastMessage(var_475_string, var_476_object, var_474_object); // 0x120d Func
	return 2; // 0x120f Return
}


func_5134(var_53_object, var_54_string)
{
	var_55_string = "unholster"; // 0x140f PushS
	var_56_bool = var_54_string == var_55_string; // 0x1410 Eq
	if(var_56_bool == 0) goto Label_5143; // 0x1411 JumpB
	var_57_object = Obj(); // 0x1412 PushV
	var_57_object = var_53_object; // 0x1413 Mov
	func_5470(); // 0x1414 NEW_2
	goto Label_5158; // 0x1416 Jump
	
Label_5158:
	return 0; // 0x1426 Return
	
Label_5143:
	var_58_string = "player_shot"; // 0x1417 PushS
	var_59_bool = var_54_string == var_58_string; // 0x1418 Eq
	if(var_59_bool == 0) goto Label_5151; // 0x1419 JumpB
	var_60_object = Obj(); // 0x141a PushV
	var_60_object = var_53_object; // 0x141b Mov
	func_5487(var_60_object); // 0x141c NEW_2
	goto Label_5158; // 0x141e Jump
	
Label_5151:
	var_126_string = "battle"; // 0x141f PushS
	var_127_bool = var_54_string == var_126_string; // 0x1420 Eq
	if(var_127_bool == 0) goto Label_5158; // 0x1421 JumpB
	var_128_object = Obj(); // 0x1422 PushV
	var_128_object = var_53_object; // 0x1423 Mov
	func_5496(); // 0x1424 NEW_2
}


func_4625(var_208_bool)
{
	var_210_int = 0; var_211_string = ""; // 0x1212 PushV
	var_211_string = "branch"; // 0x1213 MovS
	func_4566(var_210_int, var_211_string); // 0x1214 NEW_2
	var_212_int = 0; // 0x1216 PushI
	var_213_bool = var_210_int == var_212_int; // 0x1217 Eq
	if(var_213_bool == 0) goto Label_4635; // 0x1218 JumpB
	var_208_bool = 1; // 0x1219 MovB
	return 0; // 0x121a Return
	
Label_4635:
	var_208_bool = 0; // 0x121b MovB
	return 0; // 0x121c Return
}


func_2067(var_44_string)
{
	RemoveRTEnvelope(); // 0x814 Func
	SetDeathState(); // 0x816 Func
	Stop(); // 0x818 Func
	StopAsync(); // 0x81a Func
	StopSecondaryAnimation(); // 0x81c Func
	var_45_string = ""; // 0x81e PushV
	var_45_string = var_44_string; // 0x81f Mov
	func_4455(var_45_string); // 0x820 NEW_2
	var_74_string = "all"; // 0x822 PushS
	PlayAnimation(var_74_string, var_44_string); // 0x823 Func
	WaitForAnimEnd(); // 0x825 Func
	var_75_string = "all"; // 0x827 PushS
	LockAnimationEnd(var_75_string, var_44_string); // 0x828 Func
	RemoveEnvelope(); // 0x82a Func
	return 0; // 0x82c Return
}


func_4116(var_36_object)
{
	var_37_bool = 0; var_38_int = 0; var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_string = ""; var_44_bool = 0; var_45_int = 0; var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); var_50_string = ""; // 0x1014 PushV
	var_51_bool = var_36_object == 0; // 0x1015 NullEq
	if(var_51_bool == 0) goto Label_4120; // 0x1016 JumpB
	return 14; // 0x1017 Return
	
Label_4120:
	IsDead(var_44_bool); // 0x1018 Func
	var_52_bool = var_44_bool; // 0x101a Push
	if(var_52_bool == 0) goto Label_4125; // 0x101b JumpB
	return 14; // 0x101c Return
	
Label_4125:
	GetSecondaryAnimationType(var_45_int); // 0x101d Func
	var_53_int = 0; // 0x101f PushI
	var_54_bool = var_45_int < var_53_int; // 0x1020 LT
	if(var_54_bool == 0) goto Label_4131; // 0x1021 JumpB
	return 14; // 0x1022 Return
	
Label_4131:
	GetPosition(var_46_cvector); // 0x1023 ObjFunc
	GetPosition(var_47_cvector); // 0x1025 Func
	GetDirection(var_48_cvector); // 0x1027 Func
	var_49_cvector = var_47_cvector - var_46_cvector; // 0x1029 Sub2
	var_55_float = GetByIndex(var_49_cvector, 0); // 0x102a PushE
	var_56_float = GetByIndex(var_48_cvector, 0); // 0x102b PushE
	var_57_float = var_55_float * var_56_float; // 0x102c Mult
	var_58_float = GetByIndex(var_49_cvector, 2); // 0x102d PushE
	var_59_float = GetByIndex(var_48_cvector, 2); // 0x102e PushE
	var_60_float = var_58_float * var_59_float; // 0x102f Mult
	var_61_int = var_57_float + var_60_float; // 0x1030 Add
	var_62_int = 0; // 0x1031 PushI
	var_63_bool = var_61_int >= var_62_int; // 0x1032 GE
	if(var_63_bool == 0) goto Label_4150; // 0x1033 JumpB
	var_50_string = "fhit"; // 0x1034 MovS
	goto Label_4151; // 0x1035 Jump
	
Label_4151:
	var_64_string = "hit_react"; // 0x1037 PushS
	var_65_string = "1"; // 0x1038 PushS
	var_66_int = var_50_string + var_65_string; // 0x1039 Add
	var_67_string = "2"; // 0x103a PushS
	var_68_int = var_50_string + var_67_string; // 0x103b Add
	var_69_int = -10; // 0x103c PushI
	FadeSecondaryAnimation(var_64_string, var_66_int, var_68_int, var_69_int); // 0x103d Func
	return 14; // 0x103f Return
	
Label_4150:
	var_50_string = "bhit"; // 0x1036 MovS
}


func_3606(var_0_bool, var_367_bool)
{
	var_368_bool = 0; var_369_bool = 0; // 0xe16 PushV
	var_370_string = "IsAttacking"; // 0xe17 PushS
	var_371_int = 1; // 0xe18 PushI
	var_372_bool = IsFuncExist(var_0_bool, var_370_string, var_371_int); // 0xe19 FuncExist
	if(var_372_bool == 0) goto Label_3615; // 0xe1a JumpB
	IsAttacking(var_369_bool); // 0xe1b TObjFunc
	var_367_bool = var_369_bool; // 0xe1d Mov
	return 2; // 0xe1e Return
	
Label_3615:
	var_367_bool = 0; // 0xe1f MovB
	return 2; // 0xe20 Return
}


func_4637(var_124_bool)
{
	var_126_int = 0; var_127_string = ""; // 0x121e PushV
	var_127_string = "branch"; // 0x121f MovS
	func_4566(var_126_int, var_127_string); // 0x1220 NEW_2
	var_130_int = 2; // 0x1222 PushI
	var_131_bool = var_126_int == var_130_int; // 0x1223 Eq
	if(var_131_bool == 0) goto Label_4647; // 0x1224 JumpB
	var_124_bool = 1; // 0x1225 MovB
	return 0; // 0x1226 Return
	
Label_4647:
	var_124_bool = 0; // 0x1227 MovB
	return 0; // 0x1228 Return
}


func_3617(var_2_object, var_5_bool)
{
	var_480_float = 0; var_481_int = 0; var_482_float = 0; var_483_int = 0; // 0xe21 PushV
	var_484_bool = var_2_object == 0; // 0xe22 Not
	if(var_484_bool == 0) goto Label_3621; // 0xe23 JumpB
	return 4; // 0xe24 Return
	
Label_3621:
	var_485_bool = var_5_bool; // 0xe25 PushT
	if(var_485_bool == 0) goto Label_3629; // 0xe26 JumpB
	var_486_int = -1; // 0xe27 PushI
	var_5_bool = var_5_bool + var_486_int; // 0xe28 Add2
	var_487_int = 0; // 0xe29 PushI
	var_488_bool = var_5_bool > var_487_int; // 0xe2a GT
	if(var_488_bool == 0) goto Label_3629; // 0xe2b JumpB
	return 4; // 0xe2c Return
	
Label_3629:
	rand(var_482_float); // 0xe2d Func
	var_489_float = 0; // 0xe2f PushV
	func_3667(var_489_float); // 0xe30 NEW_2
	var_490_bool = var_482_float < var_489_float; // 0xe32 LT
	if(var_490_bool == 0) goto Label_3648; // 0xe33 JumpB
	irand(var_483_int, var_482_float); // 0xe34 Func
	var_491_int = 1; // 0xe36 PushI
	var_483_int = var_483_int + var_491_int; // 0xe37 Add2
	var_492_string = "attack"; // 0xe38 PushS
	var_493_int = var_492_string + var_483_int; // 0xe39 Add
	Speak(var_493_int); // 0xe3a Func
	var_494_int = 0; // 0xe3c PushV
	func_3665(var_494_int); // 0xe3d NEW_2
	var_5_bool = var_494_int; // 0xe3e TMov
	
Label_3648:
	return 4; // 0xe40 Return
}


func_5159(var_20_bool, var_21_object)
{
	var_22_bool = 0; var_23_bool = 0; // 0x1427 PushV
	var_24_bool = 0; // 0x1428 PushV
	var_24_bool = 0; // 0x1429 MovB
	var_25_bool = 0; var_26_object = Obj(); // 0x142a PushV
	var_26_object = var_21_object; // 0x142b Mov
	func_5467(var_26_object); // 0x142c NEW_2
	if(var_25_bool == 0) goto Label_5173; // 0x142e JumpB
	var_27_bool = 0; var_28_object = Obj(); // 0x142f PushV
	var_28_object = var_21_object; // 0x1430 Mov
	func_3961(var_27_bool, var_28_object); // 0x1431 NEW_2
	if(var_27_bool == 0) goto Label_5173; // 0x1433 JumpB
	var_24_bool = 1; // 0x1434 MovB
	
Label_5173:
	if(var_24_bool == 0) goto Label_5180; // 0x1435 JumpB
	IsWeaponHolstered(var_23_bool); // 0x1436 ObjFunc
	var_31_bool = var_23_bool == 0; // 0x1438 Not
	if(var_31_bool == 0) goto Label_5180; // 0x1439 JumpB
	var_20_bool = 1; // 0x143a MovB
	return 2; // 0x143b Return
	
Label_5180:
	var_20_bool = 0; // 0x143c MovB
	return 2; // 0x143d Return
}


func_40(var_0_bool, var_44_int, var_45_object)
{
	var_47_object = Obj(); var_48_bool = 0; var_49_int = 0; var_50_bool = 0; var_51_object = Obj(); var_52_bool = 0; var_53_int = 0; var_54_bool = 0; // 0x28 PushV
	var_0_bool = var_45_object; // 0x29 TMov
	var_55_bool = 0; var_56_object = Obj(); var_57_float = 0; // 0x2a PushV
	var_56_object = var_45_object; // 0x2b Mov
	var_57_float = 70.0; // 0x2c MovF
	func_4258(var_56_object, var_57_float); // 0x2d NEW_2
	var_102_bool = var_55_bool == 0; // 0x2f Not
	if(var_102_bool == 0) goto Label_51; // 0x30 JumpB
	var_44_int = -2; // 0x31 MovI
	return 8; // 0x32 Return
	
Label_51:
	CreateDialog(var_51_object); // 0x33 Func
	var_103_int = 0; // 0x35 PushV
	func_5505(var_103_int); // 0x36 NEW_2
	SetNPCName(var_103_int); // 0x38 ObjFunc
	var_104_int = 0; // 0x3a PushV
	func_5503(var_104_int); // 0x3b NEW_2
	SetNPCDescription(var_104_int); // 0x3d ObjFunc
	var_105_string = ""; // 0x3f PushV
	func_5507(var_105_string); // 0x40 NEW_2
	SetPhoto(var_105_string); // 0x42 ObjFunc
	var_106_string = ""; // 0x44 PushV
	func_5509(var_106_string); // 0x45 NEW_2
	SetPhoto2(var_106_string); // 0x47 ObjFunc
	var_107_int = 0; // 0x49 PushV
	func_4769(var_107_int); // 0x4a NEW_2
	SetPlayerName(var_107_int); // 0x4c ObjFunc
	var_53_int = -1; // 0x4e MovI
	IsOverrideActive(var_52_bool); // 0x4f Func
	var_115_bool = var_52_bool; // 0x51 Push
	if(var_115_bool == 0) goto Label_85; // 0x52 JumpB
	var_44_int = -2; // 0x53 MovI
	return 8; // 0x54 Return
	
Label_85:
	DoDialog(var_51_object); // 0x55 Func
	var_116_object = Obj(); var_117_object = Obj(); // 0x57 PushV
	var_116_object = var_45_object; // 0x58 Mov
	var_117_object = var_51_object; // 0x59 Mov
	TaskCall(2); // 0x5a TaskCall
	func_114(var_118_object, var_119_object, var_120_string, var_121_bool, var_116_object, var_117_object); // 0x5b NEW_2
	TaskReturn(); // 0x5c TaskReturn
	IsDialogEnd(var_54_bool); // 0x5e ObjFunc
	
Label_96:
	var_314_bool = var_54_bool == 0; // 0x60 Not
	if(var_314_bool == 0) goto Label_103; // 0x61 JumpB
	sync(); // 0x62 Func
	IsDialogEnd(var_54_bool); // 0x64 ObjFunc
	goto Label_96; // 0x66 Jump
	
Label_103:
	var_315_object = Obj(); // 0x67 PushV
	var_315_object = var_45_object; // 0x68 Mov
	func_4327(); // 0x69 NEW_2
	StopDialog(var_51_object); // 0x6b Func
	GetReturnValue(var_53_int); // 0x6d ObjFunc
	var_44_int = var_53_int; // 0x6f Mov
	return 8; // 0x70 Return
}


func_4649(var_202_bool, var_203_object)
{
	var_204_bool = 0; var_205_object = Obj(); // 0x122a PushV
	var_205_object = var_203_object; // 0x122b Mov
	func_4709(var_205_object); // 0x122c NEW_2
	if(var_204_bool == 0) goto Label_4657; // 0x122e JumpB
	var_202_bool = 1; // 0x122f MovB
	return 0; // 0x1230 Return
	
Label_4657:
	var_202_bool = 0; // 0x1231 MovB
	return 0; // 0x1232 Return
}


func_4659(var_263_bool, var_264_object)
{
	var_265_bool = 0; var_266_object = Obj(); // 0x1234 PushV
	var_266_object = var_264_object; // 0x1235 Mov
	func_4716(var_266_object); // 0x1236 NEW_2
	if(var_265_bool == 0) goto Label_4667; // 0x1238 JumpB
	var_263_bool = 1; // 0x1239 MovB
	return 0; // 0x123a Return
	
Label_4667:
	var_263_bool = 0; // 0x123b MovB
	return 0; // 0x123c Return
}


func_4669(var_132_bool, var_133_object)
{
	var_134_bool = 0; var_135_object = Obj(); // 0x123e PushV
	var_135_object = var_133_object; // 0x123f Mov
	func_4723(var_135_object); // 0x1240 NEW_2
	if(var_134_bool == 0) goto Label_4677; // 0x1242 JumpB
	var_132_bool = 1; // 0x1243 MovB
	return 0; // 0x1244 Return
	
Label_4677:
	var_132_bool = 0; // 0x1245 MovB
	return 0; // 0x1246 Return
}


func_5182(var_34_object)
{
	var_35_object = Obj(); // 0x143f PushV
	var_35_object = var_34_object; // 0x1440 Mov
	func_5470(); // 0x1441 NEW_2
	return 0; // 0x1443 Return
}


func_4160(var_23_object, var_24_int, var_25_float)
{
	var_26_cvector = CVector(0,0,0); var_27_object = Obj(); var_28_int = 0; var_29_bool = 0; var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_int = 0; var_33_int = 0; var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_object = Obj(); var_37_int = 0; var_38_bool = 0; var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_int = 0; var_42_int = 0; var_43_cvector = CVector(0,0,0); // 0x1040 PushV
	var_44_bool = 0; // 0x1041 PushV
	var_44_bool = 0; // 0x1042 MovB
	var_45_bool = 0; // 0x1043 PushV
	var_45_bool = 0; // 0x1044 MovB
	var_46_object = var_23_object; // 0x1045 Push
	if(var_46_object == 0) goto Label_4171; // 0x1046 JumpB
	var_47_int = 4; // 0x1047 PushI
	var_48_bool = var_24_int != var_47_int; // 0x1048 Neq
	if(var_48_bool == 0) goto Label_4171; // 0x1049 JumpB
	var_45_bool = 1; // 0x104a MovB
	
Label_4171:
	if(var_45_bool == 0) goto Label_4176; // 0x104b JumpB
	var_49_int = 5; // 0x104c PushI
	var_50_bool = var_24_int != var_49_int; // 0x104d Neq
	if(var_50_bool == 0) goto Label_4176; // 0x104e JumpB
	var_44_bool = 1; // 0x104f MovB
	
Label_4176:
	if(var_44_bool == 0) goto Label_4223; // 0x1050 JumpB
	var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); // 0x1051 PushV
	var_53_cvector = CVector(0,0,0); var_54_object = Obj(); // 0x1052 PushV
	var_54_object = var_23_object; // 0x1053 Mov
	func_3946(var_54_object); // 0x1054 NEW_2
	var_52_cvector = var_53_cvector; // 0x1055 Mov
	func_4502(var_51_cvector, var_52_cvector); // 0x1057 NEW_2
	var_35_cvector = var_51_cvector; // 0x1058 Mov
	CreateVectorVector(var_36_object); // 0x105a Func
	var_37_int = 1; // 0x105c MovI
	
Label_4189:
	var_64_string = "hit"; // 0x105d PushS
	var_65_int = var_64_string + var_37_int; // 0x105e Add
	GetGeometryLocator(var_65_int, var_38_bool, var_39_cvector, var_40_cvector); // 0x105f Func
	var_66_bool = var_38_bool == 0; // 0x1061 Not
	if(var_66_bool == 0) goto Label_4196; // 0x1062 JumpB
	goto Label_4205; // 0x1063 Jump
	
Label_4205:
	size(var_41_int); // 0x106d ObjFunc
	var_67_int = var_41_int; // 0x106f Push
	if(var_67_int == 0) goto Label_4222; // 0x1070 JumpB
	irand(var_42_int, var_41_int); // 0x1071 Func
	get(var_43_cvector, var_42_int); // 0x1073 ObjFunc
	var_68_object = Obj(); var_69_int = 0; var_70_float = 0; var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); // 0x1075 PushV
	var_68_object = var_23_object; // 0x1076 Mov
	var_69_int = var_24_int; // 0x1077 Mov
	var_70_float = var_25_float; // 0x1078 Mov
	var_71_cvector = var_43_cvector; // 0x1079 Mov
	var_72_cvector = -var_35_cvector; // 0x107a Neg2
	func_4228(var_70_float, var_71_cvector, var_72_cvector); // 0x107b NEW_2
	return 18; // 0x107d Return
	
Label_4222:
	var_36_object = 0; // 0x107e SetNull
	
Label_4223:
	var_113_object = Obj(); // 0x107f PushV
	var_113_object = var_23_object; // 0x1080 Mov
	func_4116(var_113_object); // 0x1081 NEW_2
	return 18; // 0x1083 Return
	
Label_4196:
	var_114_int = var_40_cvector | var_35_cvector; // 0x1064 Or
	var_115_float = 0.70711; // 0x1065 PushF
	var_116_bool = var_114_int >= var_115_float; // 0x1066 GE
	if(var_116_bool == 0) goto Label_4202; // 0x1067 JumpB
	add(var_39_cvector); // 0x1068 ObjFunc
	
Label_4202:
	var_117_int = 1; // 0x106a PushI
	var_37_int = var_37_int + var_117_int; // 0x106b Add2
	goto Label_4189; // 0x106c Jump
}


func_3649(var_0_bool)
{
	var_254_object = Obj(); // 0xe41 PushV
	var_254_object = var_0_bool; // 0xe42 MovT
	func_4605(var_254_object); // 0xe43 NEW_2
	return 0; // 0xe45 Return
}


func_2114()
{
	var_21_bool = 0; // 0x842 PushV
	func_4253(var_21_bool); // 0x843 NEW_2
	var_24_bool = var_21_bool == 0; // 0x845 Not
	if(var_24_bool == 0) goto Label_2122; // 0x846 JumpB
	func_5466(); // 0x848 NEW_2
	
Label_2122:
	return 0; // 0x84a Return
}


func_5188(var_22_object)
{
	var_23_bool = 0; var_24_object = Obj(); // 0x1445 PushV
	var_24_object = var_22_object; // 0x1446 Mov
	func_3961(var_23_bool, var_24_object); // 0x1447 NEW_2
	if(var_23_bool == 0) goto Label_5200; // 0x1449 JumpB
	var_27_object = Obj(); // 0x144a PushV
	func_4496(var_27_object); // 0x144b NEW_2
	var_30_float = -0.03; // 0x144d PushF
	ReportReputationChange(var_22_object, var_27_object, var_30_float); // 0x144e Func
	
Label_5200:
	return 0; // 0x1450 Return
}


func_3654(var_577_int)
{
	var_577_int = 0; // 0xe46 MovI
	return 0; // 0xe47 Return
}


func_4679(var_287_bool, var_288_object)
{
	var_289_bool = 0; var_290_object = Obj(); // 0x1248 PushV
	var_290_object = var_288_object; // 0x1249 Mov
	func_4730(var_290_object); // 0x124a NEW_2
	if(var_289_bool == 0) goto Label_4687; // 0x124c JumpB
	var_287_bool = 1; // 0x124d MovB
	return 0; // 0x124e Return
	
Label_4687:
	var_287_bool = 0; // 0x124f MovB
	return 0; // 0x1250 Return
}


func_2632()
{
	var_52_int = 0; var_53_int = 0; var_54_int = 0; var_55_int = 0; var_56_bool = 0; var_57_float = 0; var_58_bool = 0; var_59_int = 0; var_60_int = 0; var_61_int = 0; var_62_int = 0; var_63_bool = 0; var_64_float = 0; var_65_bool = 0; // 0xa48 PushV
	WaitForAnimEnd(); // 0xa49 Func
	var_66_bool = 0; // 0xa4b PushV
	func_4253(var_66_bool); // 0xa4c NEW_2
	var_67_bool = var_66_bool == 0; // 0xa4e Not
	if(var_67_bool == 0) goto Label_2641; // 0xa4f JumpB
	return 14; // 0xa50 Return
	
Label_2641:
	var_68_int = 0; // 0xa51 PushV
	func_5237(var_68_int); // 0xa52 NEW_2
	var_59_int = var_68_int; // 0xa53 Mov
	var_60_int = 0; // 0xa55 MovI
	
Label_2646:
	var_81_bool = 0; // 0xa56 PushV
	var_81_bool = 0; // 0xa57 MovB
	var_82_int = 5; // 0xa58 PushI
	var_83_bool = var_60_int < var_82_int; // 0xa59 LT
	if(var_83_bool == 0) goto Label_2656; // 0xa5a JumpB
	var_84_bool = 0; // 0xa5b PushV
	func_4253(var_84_bool); // 0xa5c NEW_2
	if(var_84_bool == 0) goto Label_2656; // 0xa5e JumpB
	var_81_bool = 1; // 0xa5f MovB
	
Label_2656:
	if(var_81_bool == 0) goto Label_2708; // 0xa60 JumpB
	var_85_int = 3; // 0xa61 PushI
	irand(var_61_int, var_85_int); // 0xa62 Func
	var_86_int = 0; // 0xa64 PushI
	var_87_bool = var_61_int == var_86_int; // 0xa65 Eq
	if(var_87_bool == 0) goto Label_2680; // 0xa66 JumpB
	var_88_int = var_59_int; // 0xa67 Push
	if(var_88_int == 0) goto Label_2679; // 0xa68 JumpB
	irand(var_62_int, var_59_int); // 0xa69 Func
	var_89_string = "all"; // 0xa6b PushS
	var_90_string = ""; var_91_int = 0; // 0xa6c PushV
	var_91_int = var_62_int; // 0xa6d Mov
	func_5230(var_90_string, var_91_int); // 0xa6e NEW_2
	PlayAnimation(var_89_string, var_90_string); // 0xa70 Func
	WaitForAnimEnd(var_63_bool); // 0xa72 Func
	var_92_bool = var_63_bool == 0; // 0xa74 Not
	if(var_92_bool == 0) goto Label_2679; // 0xa75 JumpB
	goto Label_2708; // 0xa76 Jump
	
Label_2708:
	ResetAAS(); // 0xa94 Func
	return 14; // 0xa96 Return
	
Label_2679:
	goto Label_2697; // 0xa77 Jump
	
Label_2697:
	var_93_bool = 0; // 0xa89 PushV
	func_2711(var_93_bool); // 0xa8a NEW_2
	var_94_bool = var_93_bool == 0; // 0xa8c Not
	if(var_94_bool == 0) goto Label_2703; // 0xa8d JumpB
	goto Label_2708; // 0xa8e Jump
	
Label_2703:
	ResetAAS(); // 0xa8f Func
	var_95_int = 1; // 0xa91 PushI
	var_60_int = var_60_int + var_95_int; // 0xa92 Add2
	goto Label_2646; // 0xa93 Jump
	
Label_2680:
	var_96_int = 1; // 0xa78 PushI
	var_97_bool = var_61_int == var_96_int; // 0xa79 Eq
	if(var_97_bool == 0) goto Label_2694; // 0xa7a JumpB
	var_98_int = 4; // 0xa7b PushI
	rand(var_64_float, var_98_int); // 0xa7c Func
	var_99_int = 1; // 0xa7e PushI
	var_100_int = var_64_float + var_99_int; // 0xa7f Add
	Sleep(var_100_int, var_65_bool); // 0xa80 Func
	var_101_bool = var_65_bool == 0; // 0xa82 Not
	if(var_101_bool == 0) goto Label_2693; // 0xa83 JumpB
	goto Label_2708; // 0xa84 Jump
	
Label_2693:
	goto Label_2697; // 0xa85 Jump
	
Label_2694:
	var_102_int = var_60_int; // 0xa86 Push
	if(var_102_int == 0) goto Label_2697; // 0xa87 JumpB
	goto Label_2708; // 0xa88 Jump
}


func_3656()
{
	var_373_string = ""; // 0xe48 PushV
	var_373_string = "attack_stay"; // 0xe49 MovS
	func_4455(var_373_string); // 0xe4a NEW_2
	return 0; // 0xe4c Return
}


func_3661()
{
	return 0; // 0xe4e Return
}


func_3663(var_602_bool)
{
	var_602_bool = 1; // 0xe4f MovB
	return 0; // 0xe50 Return
}


func_4689(var_269_bool, var_270_object)
{
	var_271_bool = 0; var_272_object = Obj(); // 0x1252 PushV
	var_272_object = var_270_object; // 0x1253 Mov
	func_4737(var_272_object); // 0x1254 NEW_2
	if(var_271_bool == 0) goto Label_4697; // 0x1256 JumpB
	var_269_bool = 1; // 0x1257 MovB
	return 0; // 0x1258 Return
	
Label_4697:
	var_269_bool = 0; // 0x1259 MovB
	return 0; // 0x125a Return
}


func_5201(var_20_bool, var_21_string)
{
	var_22_object = Obj(); var_23_object = Obj(); // 0x1451 PushV
	var_24_string = "heal"; // 0x1452 PushS
	var_25_bool = var_21_string == var_24_string; // 0x1453 Eq
	if(var_25_bool == 0) goto Label_5215; // 0x1454 JumpB
	var_26_string = "player"; // 0x1455 PushS
	FindActor(var_23_object, var_26_string); // 0x1456 Func
	var_27_bool = 0; var_28_object = Obj(); // 0x1458 PushV
	var_28_object = var_23_object; // 0x1459 Mov
	func_5498(var_28_object); // 0x145a NEW_2
	var_20_bool = var_27_bool; // 0x145b Mov
	return 2; // 0x145d Return
	
Label_5215:
	var_20_bool = 0; // 0x145f MovB
	return 2; // 0x1460 Return
}


func_3667(var_489_float)
{
	var_489_float = 0.5; // 0xe53 MovF
	return 0; // 0xe54 Return
}


func_3665(var_494_int)
{
	var_494_int = 1; // 0xe51 MovI
	return 0; // 0xe52 Return
}


func_4699(var_245_bool, var_246_object)
{
	var_247_bool = 0; var_248_object = Obj(); // 0x125c PushV
	var_248_object = var_246_object; // 0x125d Mov
	func_4758(var_248_object); // 0x125e NEW_2
	if(var_247_bool == 0) goto Label_4707; // 0x1260 JumpB
	var_245_bool = 1; // 0x1261 MovB
	return 0; // 0x1262 Return
	
Label_4707:
	var_245_bool = 0; // 0x1263 MovB
	return 0; // 0x1264 Return
}


func_3676(var_2_object, var_261_bool, var_262_object, var_263_float, var_264_float, var_265_bool, var_266_bool)
{
	var_270_bool = 0; var_271_bool = 0; var_272_bool = 0; var_273_bool = 0; // 0xe5c PushV
	var_274_object = Obj(); // 0xe5d PushV
	var_274_object = var_262_object; // 0xe5e Mov
	func_4605(var_274_object); // 0xe5f NEW_2
	var_275_int = 1; // 0xe61 PushI
	var_276_int = 5; // 0xe62 PushI
	SetTimer(var_275_int, var_276_int); // 0xe63 Func
	CanSee(var_272_bool, var_262_object); // 0xe65 Func
	var_277_bool = var_272_bool; // 0xe67 Push
	if(var_277_bool == 0) goto Label_3695; // 0xe68 JumpB
	var_2_object = 1; // 0xe69 TMovB
	var_278_object = Obj(); // 0xe6a PushV
	var_278_object = var_262_object; // 0xe6b Mov
	func_4437(var_278_object); // 0xe6c NEW_2
	goto Label_3696; // 0xe6e Jump
	
Label_3696:
	var_279_bool = 0; var_280_object = Obj(); // 0xe70 PushV
	var_280_object = var_262_object; // 0xe71 Mov
	func_3961(var_279_bool, var_280_object); // 0xe72 NEW_2
	if(var_279_bool == 0) goto Label_3706; // 0xe74 JumpB
	var_283_object = Obj(); // 0xe75 PushV
	func_4496(var_283_object); // 0xe76 NEW_2
	SendPlayerEnemy(var_262_object, var_283_object); // 0xe78 Func
	
Label_3706:
	var_284_bool = 0; var_285_object = Obj(); var_286_float = 0; var_287_float = 0; var_288_bool = 0; var_289_bool = 0; // 0xe7a PushV
	var_285_object = var_262_object; // 0xe7b Mov
	var_286_float = var_263_float; // 0xe7c Mov
	var_287_float = var_264_float; // 0xe7d Mov
	var_288_bool = var_265_bool; // 0xe7e Mov
	var_289_bool = var_266_bool; // 0xe7f Mov
	func_3781(var_272_bool, var_273_bool, var_284_bool, var_285_object, var_286_float, var_287_float, var_288_bool, var_289_bool); // 0xe80 NEW_2
	var_273_bool = var_284_bool; // 0xe81 Mov
	var_335_object = var_2_object; // 0xe83 PushT
	if(var_335_object == 0) goto Label_3720; // 0xe84 JumpB
	var_336_string = "head"; // 0xe85 PushS
	UnlookAsync(var_336_string); // 0xe86 Func
	
Label_3720:
	var_337_int = 1; // 0xe88 PushI
	KillTimer(var_337_int); // 0xe89 Func
	var_261_bool = var_273_bool; // 0xe8b Mov
	return 4; // 0xe8c Return
	
Label_3695:
	var_2_object = 0; // 0xe6f TMovB
}


func_5217(var_31_string)
{
	var_32_object = Obj(); var_33_object = Obj(); // 0x1461 PushV
	var_34_string = "heal"; // 0x1462 PushS
	var_35_bool = var_31_string == var_34_string; // 0x1463 Eq
	if(var_35_bool == 0) goto Label_5229; // 0x1464 JumpB
	var_36_string = "player"; // 0x1465 PushS
	FindActor(var_33_object, var_36_string); // 0x1466 Func
	var_37_object = Obj(); // 0x1468 PushV
	var_37_object = var_33_object; // 0x1469 Mov
	func_5501(); // 0x146a NEW_2
	var_33_object = 0; // 0x146c SetNull
	
Label_5229:
	return 2; // 0x146d Return
}


func_4709(var_204_bool)
{
	var_206_int = 0; // 0x1266 PushV
	func_4588(var_206_int); // 0x1267 NEW_2
	var_207_int = 1; // 0x1269 PushI
	var_204_bool = var_206_int == var_207_int; // 0x126a Eq2
	return 0; // 0x126b Return
}


func_4716(var_265_bool)
{
	var_267_int = 0; // 0x126d PushV
	func_4588(var_267_int); // 0x126e NEW_2
	var_268_int = 2; // 0x1270 PushI
	var_265_bool = var_267_int == var_268_int; // 0x1271 Eq2
	return 0; // 0x1272 Return
}


func_5230(var_74_string, var_75_int)
{
	var_76_string = ""; var_77_string = ""; // 0x146e PushV
	var_77_string = "idle"; // 0x146f MovS
	var_78_int = var_75_int; // 0x1470 Push
	if(var_78_int == 0) goto Label_5235; // 0x1471 JumpB
	var_77_string = var_77_string + var_75_int; // 0x1472 Add2
	
Label_5235:
	var_74_string = var_77_string; // 0x1473 Mov
	return 2; // 0x1474 Return
}


func_114(var_0_bool, var_1_object, var_2_object, var_3_object, var_116_object, var_117_object)
{
	var_0_bool = var_117_object; // 0x73 TMov
	var_1_object = var_116_object; // 0x74 TMov
	var_3_object = 0; // 0x75 TMovB
	var_122_int = 1; // 0x76 PushI
	if(var_122_int == 0) goto Label_394; // 0x77 JumpB
	var_123_bool = 0; // 0x78 PushV
	var_123_bool = 0; // 0x79 MovB
	var_124_bool = 0; var_125_object = Obj(); // 0x7a PushV
	var_125_object = var_1_object; // 0x7b MovT
	func_4637(var_125_object); // 0x7c NEW_2
	if(var_124_bool == 0) goto Label_133; // 0x7e JumpB
	var_132_bool = 0; var_133_object = Obj(); // 0x7f PushV
	var_133_object = var_1_object; // 0x80 MovT
	func_4669(var_132_bool, var_133_object); // 0x81 NEW_2
	if(var_132_bool == 0) goto Label_133; // 0x83 JumpB
	var_123_bool = 1; // 0x84 MovB
	
Label_133:
	if(var_123_bool == 0) goto Label_159; // 0x85 JumpB
	var_143_string = ""; // 0x86 PushV
	var_143_string = "Neutral"; // 0x87 MovS
	func_424(var_117_object, var_143_string); // 0x88 NEW_2
	var_160_int = 543329; // 0x8a PushI
	SetMessage(var_160_int); // 0x8b TObjFunc
	ClearReplies(); // 0x8d TObjFunc
	var_161_int = 543330; // 0x8f PushI
	var_162_int = 45790; // 0x90 PushI
	var_163_int = 45787; // 0x91 PushI
	AddReply(var_161_int, var_162_int, var_163_int); // 0x92 TObjFunc
	var_164_int = 543332; // 0x94 PushI
	var_165_int = 45790; // 0x95 PushI
	var_166_int = 45789; // 0x96 PushI
	AddReply(var_164_int, var_165_int, var_166_int); // 0x97 TObjFunc
	var_167_int = 543331; // 0x99 PushI
	var_168_int = -1; // 0x9a PushI
	var_169_int = 45788; // 0x9b PushI
	AddReply(var_167_int, var_168_int, var_169_int); // 0x9c TObjFunc
	goto Label_394; // 0x9e Jump
	
Label_394:
	var_170_bool = 0; // 0x18a PushV
	func_5511(var_170_bool); // 0x18b NEW_2
	if(var_170_bool == 0) goto Label_409; // 0x18d JumpB
	
Label_398:
	lshWaitForAnimEnd(); // 0x18e Func
	var_171_object = var_3_object; // 0x190 PushT
	if(var_171_object == 0) goto Label_403; // 0x191 JumpB
	goto Label_408; // 0x192 Jump
	
Label_408:
	goto Label_423; // 0x198 Jump
	
Label_423:
	return 0; // 0x1a7 Return
	
Label_403:
	var_172_string = ""; // 0x193 PushV
	var_172_string = var_2_object; // 0x194 MovT
	func_4406(var_172_string); // 0x195 NEW_2
	goto Label_398; // 0x197 Jump
	
Label_409:
	var_183_string = "all"; // 0x199 PushS
	var_184_string = "idle"; // 0x19a PushS
	PlayAnimation(var_183_string, var_184_string); // 0x19b Func
	
Label_413:
	WaitForAnimEnd(); // 0x19d Func
	var_185_object = var_3_object; // 0x19f PushT
	if(var_185_object == 0) goto Label_418; // 0x1a0 JumpB
	goto Label_423; // 0x1a1 Jump
	
Label_418:
	var_186_string = "all"; // 0x1a2 PushS
	var_187_string = "idle"; // 0x1a3 PushS
	PlayAnimation(var_186_string, var_187_string); // 0x1a4 Func
	goto Label_413; // 0x1a6 Jump
	
Label_159:
	var_188_bool = 0; // 0x9f PushV
	var_188_bool = 0; // 0xa0 MovB
	var_189_bool = 0; var_190_object = Obj(); // 0xa1 PushV
	var_190_object = var_1_object; // 0xa2 MovT
	func_4637(var_190_object); // 0xa3 NEW_2
	if(var_189_bool == 0) goto Label_173; // 0xa5 JumpB
	var_191_bool = 0; var_192_object = Obj(); // 0xa6 PushV
	var_192_object = var_1_object; // 0xa7 MovT
	func_4669(var_191_bool, var_192_object); // 0xa8 NEW_2
	var_193_bool = var_191_bool == 0; // 0xaa Not
	if(var_193_bool == 0) goto Label_173; // 0xab JumpB
	var_188_bool = 1; // 0xac MovB
	
Label_173:
	if(var_188_bool == 0) goto Label_189; // 0xad JumpB
	var_194_string = ""; // 0xae PushV
	var_194_string = "Neutral"; // 0xaf MovS
	func_424(var_117_object, var_194_string); // 0xb0 NEW_2
	var_195_int = 543328; // 0xb2 PushI
	SetMessage(var_195_int); // 0xb3 TObjFunc
	ClearReplies(); // 0xb5 TObjFunc
	var_196_int = 543336; // 0xb7 PushI
	var_197_int = -1; // 0xb8 PushI
	var_198_int = 45794; // 0xb9 PushI
	AddReply(var_196_int, var_197_int, var_198_int); // 0xba TObjFunc
	goto Label_394; // 0xbc Jump
	
Label_189:
	var_199_string = ""; // 0xbd PushV
	var_199_string = "Neutral"; // 0xbe MovS
	func_424(var_117_object, var_199_string); // 0xbf NEW_2
	var_200_int = 537969; // 0xc1 PushI
	SetMessage(var_200_int); // 0xc2 TObjFunc
	ClearReplies(); // 0xc4 TObjFunc
	var_201_bool = 0; // 0xc6 PushV
	var_201_bool = 0; // 0xc7 MovB
	var_202_bool = 0; var_203_object = Obj(); // 0xc8 PushV
	var_203_object = var_1_object; // 0xc9 MovT
	func_4649(var_202_bool, var_203_object); // 0xca NEW_2
	if(var_202_bool == 0) goto Label_211; // 0xcc JumpB
	var_208_bool = 0; var_209_object = Obj(); // 0xcd PushV
	var_209_object = var_1_object; // 0xce MovT
	func_4625(var_209_object); // 0xcf NEW_2
	if(var_208_bool == 0) goto Label_211; // 0xd1 JumpB
	var_201_bool = 1; // 0xd2 MovB
	
Label_211:
	if(var_201_bool == 0) goto Label_217; // 0xd3 JumpB
	var_214_int = 537970; // 0xd4 PushI
	var_215_int = 39833; // 0xd5 PushI
	var_216_int = 39832; // 0xd6 PushI
	AddReply(var_214_int, var_215_int, var_216_int); // 0xd7 TObjFunc
	
Label_217:
	var_217_bool = 0; // 0xd9 PushV
	var_217_bool = 0; // 0xda MovB
	var_218_bool = 0; var_219_object = Obj(); // 0xdb PushV
	var_219_object = var_1_object; // 0xdc MovT
	func_4649(var_218_bool, var_219_object); // 0xdd NEW_2
	if(var_218_bool == 0) goto Label_230; // 0xdf JumpB
	var_220_bool = 0; var_221_object = Obj(); // 0xe0 PushV
	var_221_object = var_1_object; // 0xe1 MovT
	func_4625(var_221_object); // 0xe2 NEW_2
	if(var_220_bool == 0) goto Label_230; // 0xe4 JumpB
	var_217_bool = 1; // 0xe5 MovB
	
Label_230:
	if(var_217_bool == 0) goto Label_236; // 0xe6 JumpB
	var_222_int = 537995; // 0xe7 PushI
	var_223_int = 39861; // 0xe8 PushI
	var_224_int = 39860; // 0xe9 PushI
	AddReply(var_222_int, var_223_int, var_224_int); // 0xea TObjFunc
	
Label_236:
	var_225_bool = 0; // 0xec PushV
	var_225_bool = 0; // 0xed MovB
	var_226_bool = 0; var_227_object = Obj(); // 0xee PushV
	var_227_object = var_1_object; // 0xef MovT
	func_4649(var_226_bool, var_227_object); // 0xf0 NEW_2
	if(var_226_bool == 0) goto Label_249; // 0xf2 JumpB
	var_228_bool = 0; var_229_object = Obj(); // 0xf3 PushV
	var_229_object = var_1_object; // 0xf4 MovT
	func_4625(var_229_object); // 0xf5 NEW_2
	if(var_228_bool == 0) goto Label_249; // 0xf7 JumpB
	var_225_bool = 1; // 0xf8 MovB
	
Label_249:
	if(var_225_bool == 0) goto Label_255; // 0xf9 JumpB
	var_230_int = 538003; // 0xfa PushI
	var_231_int = 39869; // 0xfb PushI
	var_232_int = 39868; // 0xfc PushI
	AddReply(var_230_int, var_231_int, var_232_int); // 0xfd TObjFunc
	
Label_255:
	var_233_bool = 0; // 0xff PushV
	var_233_bool = 0; // 0x100 MovB
	var_234_bool = 0; var_235_object = Obj(); // 0x101 PushV
	var_235_object = var_1_object; // 0x102 MovT
	func_4649(var_234_bool, var_235_object); // 0x103 NEW_2
	if(var_234_bool == 0) goto Label_268; // 0x105 JumpB
	var_236_bool = 0; var_237_object = Obj(); // 0x106 PushV
	var_237_object = var_1_object; // 0x107 MovT
	func_4625(var_237_object); // 0x108 NEW_2
	if(var_236_bool == 0) goto Label_268; // 0x10a JumpB
	var_233_bool = 1; // 0x10b MovB
	
Label_268:
	if(var_233_bool == 0) goto Label_274; // 0x10c JumpB
	var_238_int = 538012; // 0x10d PushI
	var_239_int = 39878; // 0x10e PushI
	var_240_int = 39877; // 0x10f PushI
	AddReply(var_238_int, var_239_int, var_240_int); // 0x110 TObjFunc
	
Label_274:
	var_241_bool = 0; // 0x112 PushV
	var_241_bool = 0; // 0x113 MovB
	var_242_bool = 0; // 0x114 PushV
	var_242_bool = 0; // 0x115 MovB
	var_243_bool = 0; var_244_object = Obj(); // 0x116 PushV
	var_244_object = var_1_object; // 0x117 MovT
	func_4649(var_243_bool, var_244_object); // 0x118 NEW_2
	if(var_243_bool == 0) goto Label_289; // 0x11a JumpB
	var_245_bool = 0; var_246_object = Obj(); // 0x11b PushV
	var_246_object = var_1_object; // 0x11c MovT
	func_4699(var_245_bool, var_246_object); // 0x11d NEW_2
	if(var_245_bool == 0) goto Label_289; // 0x11f JumpB
	var_242_bool = 1; // 0x120 MovB
	
Label_289:
	if(var_242_bool == 0) goto Label_296; // 0x121 JumpB
	var_256_bool = 0; var_257_object = Obj(); // 0x122 PushV
	var_257_object = var_1_object; // 0x123 MovT
	func_4625(var_257_object); // 0x124 NEW_2
	if(var_256_bool == 0) goto Label_296; // 0x126 JumpB
	var_241_bool = 1; // 0x127 MovB
	
Label_296:
	if(var_241_bool == 0) goto Label_302; // 0x128 JumpB
	var_258_int = 538017; // 0x129 PushI
	var_259_int = 39883; // 0x12a PushI
	var_260_int = 39882; // 0x12b PushI
	AddReply(var_258_int, var_259_int, var_260_int); // 0x12c TObjFunc
	
Label_302:
	var_261_bool = 0; // 0x12e PushV
	var_261_bool = 0; // 0x12f MovB
	var_262_bool = 0; // 0x130 PushV
	var_262_bool = 0; // 0x131 MovB
	var_263_bool = 0; var_264_object = Obj(); // 0x132 PushV
	var_264_object = var_1_object; // 0x133 MovT
	func_4659(var_263_bool, var_264_object); // 0x134 NEW_2
	if(var_263_bool == 0) goto Label_317; // 0x136 JumpB
	var_269_bool = 0; var_270_object = Obj(); // 0x137 PushV
	var_270_object = var_1_object; // 0x138 MovT
	func_4689(var_269_bool, var_270_object); // 0x139 NEW_2
	if(var_269_bool == 0) goto Label_317; // 0x13b JumpB
	var_262_bool = 1; // 0x13c MovB
	
Label_317:
	if(var_262_bool == 0) goto Label_324; // 0x13d JumpB
	var_280_bool = 0; var_281_object = Obj(); // 0x13e PushV
	var_281_object = var_1_object; // 0x13f MovT
	func_4625(var_281_object); // 0x140 NEW_2
	if(var_280_bool == 0) goto Label_324; // 0x142 JumpB
	var_261_bool = 1; // 0x143 MovB
	
Label_324:
	if(var_261_bool == 0) goto Label_330; // 0x144 JumpB
	var_282_int = 538043; // 0x145 PushI
	var_283_int = 39911; // 0x146 PushI
	var_284_int = 39910; // 0x147 PushI
	AddReply(var_282_int, var_283_int, var_284_int); // 0x148 TObjFunc
	
Label_330:
	var_285_bool = 0; // 0x14a PushV
	var_285_bool = 0; // 0x14b MovB
	var_286_bool = 0; // 0x14c PushV
	var_286_bool = 0; // 0x14d MovB
	var_287_bool = 0; var_288_object = Obj(); // 0x14e PushV
	var_288_object = var_1_object; // 0x14f MovT
	func_4679(var_287_bool, var_288_object); // 0x150 NEW_2
	if(var_287_bool == 0) goto Label_345; // 0x152 JumpB
	var_293_bool = 0; var_294_object = Obj(); // 0x153 PushV
	var_294_object = var_1_object; // 0x154 MovT
	func_4689(var_293_bool, var_294_object); // 0x155 NEW_2
	if(var_293_bool == 0) goto Label_345; // 0x157 JumpB
	var_286_bool = 1; // 0x158 MovB
	
Label_345:
	if(var_286_bool == 0) goto Label_352; // 0x159 JumpB
	var_295_bool = 0; var_296_object = Obj(); // 0x15a PushV
	var_296_object = var_1_object; // 0x15b MovT
	func_4625(var_296_object); // 0x15c NEW_2
	if(var_295_bool == 0) goto Label_352; // 0x15e JumpB
	var_285_bool = 1; // 0x15f MovB
	
Label_352:
	if(var_285_bool == 0) goto Label_358; // 0x160 JumpB
	var_297_int = 538083; // 0x161 PushI
	var_298_int = 39952; // 0x162 PushI
	var_299_int = 39951; // 0x163 PushI
	AddReply(var_297_int, var_298_int, var_299_int); // 0x164 TObjFunc
	
Label_358:
	var_300_bool = 0; // 0x166 PushV
	var_300_bool = 0; // 0x167 MovB
	var_301_bool = 0; // 0x168 PushV
	var_301_bool = 0; // 0x169 MovB
	var_302_bool = 0; var_303_object = Obj(); // 0x16a PushV
	var_303_object = var_1_object; // 0x16b MovT
	func_4679(var_302_bool, var_303_object); // 0x16c NEW_2
	if(var_302_bool == 0) goto Label_373; // 0x16e JumpB
	var_304_bool = 0; var_305_object = Obj(); // 0x16f PushV
	var_305_object = var_1_object; // 0x170 MovT
	func_4699(var_304_bool, var_305_object); // 0x171 NEW_2
	if(var_304_bool == 0) goto Label_373; // 0x173 JumpB
	var_301_bool = 1; // 0x174 MovB
	
Label_373:
	if(var_301_bool == 0) goto Label_380; // 0x175 JumpB
	var_306_bool = 0; var_307_object = Obj(); // 0x176 PushV
	var_307_object = var_1_object; // 0x177 MovT
	func_4625(var_307_object); // 0x178 NEW_2
	if(var_306_bool == 0) goto Label_380; // 0x17a JumpB
	var_300_bool = 1; // 0x17b MovB
	
Label_380:
	if(var_300_bool == 0) goto Label_386; // 0x17c JumpB
	var_308_int = 538110; // 0x17d PushI
	var_309_int = 39980; // 0x17e PushI
	var_310_int = 39979; // 0x17f PushI
	AddReply(var_308_int, var_309_int, var_310_int); // 0x180 TObjFunc
	
Label_386:
	var_311_int = 538126; // 0x182 PushI
	var_312_int = -1; // 0x183 PushI
	var_313_int = 39997; // 0x184 PushI
	AddReply(var_311_int, var_312_int, var_313_int); // 0x185 TObjFunc
	goto Label_394; // 0x187 Jump
}


func_4723(var_134_bool)
{
	var_136_int = 0; // 0x1274 PushV
	func_4588(var_136_int); // 0x1275 NEW_2
	var_142_int = 4; // 0x1277 PushI
	var_134_bool = var_136_int == var_142_int; // 0x1278 Eq2
	return 0; // 0x1279 Return
}


func_5237(var_68_int)
{
	var_69_int = 0; var_70_bool = 0; var_71_int = 0; var_72_bool = 0; // 0x1475 PushV
	var_71_int = 0; // 0x1476 MovI
	
Label_5239:
	var_73_string = "all"; // 0x1477 PushS
	var_74_string = ""; var_75_int = 0; // 0x1478 PushV
	var_75_int = var_71_int; // 0x1479 Mov
	func_5230(var_74_string, var_75_int); // 0x147a NEW_2
	HasAnimation(var_72_bool, var_73_string, var_74_string); // 0x147c Func
	var_79_bool = var_72_bool == 0; // 0x147e Not
	if(var_79_bool == 0) goto Label_5249; // 0x147f JumpB
	goto Label_5252; // 0x1480 Jump
	
Label_5252:
	var_68_int = var_71_int; // 0x1484 Mov
	return 4; // 0x1485 Return
	
Label_5249:
	var_80_int = 1; // 0x1481 PushI
	var_71_int = var_71_int + var_80_int; // 0x1482 Add2
	goto Label_5239; // 0x1483 Jump
}


func_4730(var_289_bool)
{
	var_291_int = 0; // 0x127b PushV
	func_4588(var_291_int); // 0x127c NEW_2
	var_292_int = 5; // 0x127e PushI
	var_289_bool = var_291_int == var_292_int; // 0x127f Eq2
	return 0; // 0x1280 Return
}


func_4737(var_271_bool)
{
	var_273_bool = 0; // 0x1282 PushV
	var_273_bool = 0; // 0x1283 MovB
	var_274_int = 0; // 0x1284 PushV
	func_4597(var_274_int); // 0x1285 NEW_2
	var_275_int = 0; // 0x1287 PushI
	var_276_bool = var_274_int >= var_275_int; // 0x1288 GE
	if(var_276_bool == 0) goto Label_4753; // 0x1289 JumpB
	var_277_int = 0; // 0x128a PushV
	func_4597(var_277_int); // 0x128b NEW_2
	var_278_int = 12; // 0x128d PushI
	var_279_bool = var_277_int < var_278_int; // 0x128e LT
	if(var_279_bool == 0) goto Label_4753; // 0x128f JumpB
	var_273_bool = 1; // 0x1290 MovB
	
Label_4753:
	if(var_273_bool == 0) goto Label_4756; // 0x1291 JumpB
	var_271_bool = 1; // 0x1292 MovB
	return 0; // 0x1293 Return
	
Label_4756:
	var_271_bool = 0; // 0x1294 MovB
	return 0; // 0x1295 Return
}


func_4228(var_25_object, var_28_cvector, var_29_cvector)
{
	var_30_object = Obj(); var_31_object = Obj(); var_32_object = Obj(); var_33_object = Obj(); // 0x1084 PushV
	GetScene(var_32_object); // 0x1085 Func
	var_34_string = "scripted"; // 0x1087 PushS
	var_35_string = "blood_dir.xml"; // 0x1088 PushS
	AddActorByType(var_33_object, var_34_string, var_32_object, var_28_cvector, var_29_cvector, var_35_string); // 0x1089 Func
	var_36_object = Obj(); // 0x108b PushV
	var_36_object = var_25_object; // 0x108c Mov
	func_4116(var_36_object); // 0x108d NEW_2
	return 4; // 0x108f Return
}


func_5254(var_62_int)
{
	var_64_bool = 0; // 0x1487 PushV
	func_5557(var_64_bool); // 0x1488 NEW_2
	if(var_64_bool == 0) goto Label_5261; // 0x148a JumpB
	var_62_int = 2; // 0x148b MovI
	goto Label_5262; // 0x148c Jump
	
Label_5262:
	return 0; // 0x148e Return
	
Label_5261:
	var_62_int = 0; // 0x148d MovI
}


func_5263(var_61_object)
{
	var_62_object = Obj(); // 0x1490 PushV
	var_62_object = var_61_object; // 0x1491 Mov
	TaskCall(6); // 0x1492 TaskCall
	func_2718(var_63_object, var_62_object); // 0x1493 NEW_2
	TaskReturn(); // 0x1494 TaskReturn
	return 0; // 0x1496 Return
}


func_4242()
{
	var_96_cvector = CVector(0,0,0); var_97_cvector = CVector(0,0,0); var_98_cvector = CVector(0,0,0); var_99_cvector = CVector(0,0,0); var_100_cvector = CVector(0,0,0); var_101_cvector = CVector(0,0,0); // 0x1092 PushV
	GetPosition(var_99_cvector); // 0x1093 ObjFunc
	GetPosition(var_100_cvector); // 0x1095 Func
	var_101_cvector = var_99_cvector - var_100_cvector; // 0x1097 Sub2
	var_102_float = GetByIndex(var_101_cvector, 0); // 0x1098 PushE
	var_103_float = GetByIndex(var_101_cvector, 2); // 0x1099 PushE
	RotateAsync(var_102_float, var_103_float); // 0x109a Func
	return 6; // 0x109c Return
}


func_4758(var_247_bool)
{
	var_249_int = 0; // 0x1297 PushV
	func_4597(var_249_int); // 0x1298 NEW_2
	var_254_int = 12; // 0x129a PushI
	var_255_bool = var_249_int >= var_254_int; // 0x129b GE
	if(var_255_bool == 0) goto Label_4767; // 0x129c JumpB
	var_247_bool = 1; // 0x129d MovB
	return 0; // 0x129e Return
	
Label_4767:
	var_247_bool = 0; // 0x129f MovB
	return 0; // 0x12a0 Return
}


func_5271(var_89_int, var_90_object)
{
	var_91_bool = 0; var_92_object = Obj(); // 0x1498 PushV
	var_92_object = var_90_object; // 0x1499 Mov
	func_4092(var_91_bool, var_92_object); // 0x149a NEW_2
	if(var_91_bool == 0) goto Label_5279; // 0x149c JumpB
	var_89_int = 2; // 0x149d MovI
	goto Label_5280; // 0x149e Jump
	
Label_5280:
	return 0; // 0x14a0 Return
	
Label_5279:
	var_89_int = 0; // 0x149f MovI
}


func_2711(var_93_bool)
{
	var_93_bool = 1; // 0xa97 MovB
	return 0; // 0xa98 Return
}


func_2713()
{
	StopAnimation(); // 0xa99 Func
	StopGroup0(); // 0xa9b Func
	return 0; // 0xa9d Return
}


func_3739(var_2_object)
{
	var_20_int = 1; // 0xe9b PushI
	KillTimer(var_20_int); // 0xe9c Func
	var_21_object = var_2_object; // 0xe9e PushT
	if(var_21_object == 0) goto Label_3748; // 0xe9f JumpB
	var_2_object = 0; // 0xea0 TMovB
	var_22_string = "head"; // 0xea1 PushS
	UnlookAsync(var_22_string); // 0xea2 Func
	
Label_3748:
	func_3905(var_19_object); // 0xea5 NEW_2
	return 0; // 0xea7 Return
}


func_4253(var_21_bool)
{
	var_22_bool = 0; var_23_bool = 0; // 0x109d PushV
	IsLoaded(var_23_bool); // 0x109e Func
	var_21_bool = var_23_bool; // 0x10a0 Mov
	return 2; // 0x10a1 Return
}


func_2718(var_0_bool, var_62_object)
{
	var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); var_66_bool = 0; var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0); var_69_bool = 0; // 0xa9e PushV
	var_0_bool = var_62_object; // 0xa9f TMov
	func_2769(var_69_bool); // 0xaa1 NEW_2
	GetDirection(var_67_cvector); // 0xaa3 Func
	var_77_cvector = CVector(0,0,0); var_78_object = Obj(); // 0xaa5 PushV
	var_78_object = var_0_bool; // 0xaa6 MovT
	func_3946(var_78_object); // 0xaa7 NEW_2
	var_68_cvector = var_77_cvector; // 0xaa8 Mov
	var_83_float = 0; var_84_cvector = CVector(0,0,0); var_85_cvector = CVector(0,0,0); // 0xaaa PushV
	var_84_cvector = var_67_cvector; // 0xaab Mov
	var_85_cvector = var_68_cvector; // 0xaac Mov
	func_4549(var_83_float, var_84_cvector, var_85_cvector); // 0xaad NEW_2
	var_107_int = 0; // 0xaaf PushI
	var_108_bool = var_83_float < var_107_int; // 0xab0 LT
	if(var_108_bool == 0) goto Label_2744; // 0xab1 JumpB
	var_109_object = Obj(); // 0xab2 PushV
	var_109_object = var_0_bool; // 0xab3 MovT
	func_4242(); // 0xab4 NEW_2
	var_69_bool = 1; // 0xab6 MovB
	goto Label_2747; // 0xab7 Jump
	
Label_2747:
	var_118_bool = var_69_bool; // 0xabb Push
	if(var_118_bool == 0) goto Label_2763; // 0xabc JumpB
	var_119_object = Obj(); // 0xabd PushV
	var_119_object = var_0_bool; // 0xabe MovT
	func_4242(); // 0xabf NEW_2
	var_120_int = 111; // 0xac1 PushI
	var_121_float = 0.5; // 0xac2 PushF
	SetTimer(var_120_int, var_121_float); // 0xac3 Func
	var_122_float = 5.0; // 0xac5 PushF
	Sleep(var_122_float); // 0xac6 Func
	var_123_int = 111; // 0xac8 PushI
	KillTimer(var_123_int); // 0xac9 Func
	
Label_2763:
	StopAsync(); // 0xacb Func
	var_124_string = "head"; // 0xacd PushS
	UnlookAsync(var_124_string); // 0xace Func
	return 6; // 0xad0 Return
	
Label_2744:
	var_125_float = 1.5; // 0xab8 PushF
	Sleep(var_125_float, var_69_bool); // 0xab9 Func
}


func_4769(var_107_int)
{
	var_108_int = 0; var_109_int = 0; // 0x12a1 PushV
	var_110_string = "branch"; // 0x12a2 PushS
	GetVariable(var_110_string, var_109_int); // 0x12a3 Func
	var_111_int = 0; // 0x12a5 PushI
	var_112_bool = var_109_int == var_111_int; // 0x12a6 Eq
	if(var_112_bool == 0) goto Label_4779; // 0x12a7 JumpB
	var_107_int = 1; // 0x12a8 MovI
	return 2; // 0x12a9 Return
	
Label_4779:
	var_113_int = 1; // 0x12ab PushI
	var_114_bool = var_109_int == var_113_int; // 0x12ac Eq
	if(var_114_bool == 0) goto Label_4784; // 0x12ad JumpB
	var_107_int = 2; // 0x12ae MovI
	return 2; // 0x12af Return
	
Label_4784:
	var_107_int = 3; // 0x12b0 MovI
	return 2; // 0x12b1 Return
}


func_4258(var_55_bool, var_57_float)
{
	var_58_float = 0; var_59_cvector = CVector(0,0,0); var_60_cvector = CVector(0,0,0); var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0); var_65_bool = 0; var_66_bool = 0; var_67_float = 0; var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); var_73_cvector = CVector(0,0,0); var_74_bool = 0; var_75_bool = 0; // 0x10a2 PushV
	GetPosition(var_68_cvector); // 0x10a3 ObjFunc
	GetEyesHeight(var_67_float); // 0x10a5 ObjFunc
	var_76_float = GetByIndex(var_68_cvector, 1); // 0x10a7 PushE
	var_76_float = var_76_float + var_67_float; // 0x10a8 Add2
	SetByIndex(var_68_cvector, 1) = var_76_float; // 0x10a9 PopE
	GetPosition(var_69_cvector); // 0x10aa Func
	GetEyesHeight(var_67_float); // 0x10ac Func
	var_77_float = GetByIndex(var_69_cvector, 1); // 0x10ae PushE
	var_77_float = var_77_float + var_67_float; // 0x10af Add2
	SetByIndex(var_69_cvector, 1) = var_77_float; // 0x10b0 PopE
	var_70_cvector = var_68_cvector - var_69_cvector; // 0x10b1 Sub2
	var_78_float = GetByIndex(var_70_cvector, 1); // 0x10b2 PushE
	var_78_float = 0; // 0x10b3 MovI
	SetByIndex(var_70_cvector, 1) = var_78_float; // 0x10b4 PopE
	var_79_int = var_70_cvector | var_70_cvector; // 0x10b5 Or
	var_80_float = sqrt(var_79_int); // 0x10b6 Sqrt
	var_70_cvector = var_70_cvector / var_70_cvector; // 0x10b7 Div2
	var_71_cvector = -var_70_cvector; // 0x10b8 Neg2
	var_81_float = var_70_cvector * var_57_float; // 0x10b9 Mult
	var_82_cvector = CVector(0,0,0); var_83_cvector = CVector(0,0,0); // 0x10ba PushV
	var_84_cvector = CVector(0.0, 1.0, 0.0); // 0x10bb PushVec
	var_83_cvector = var_71_cvector ^ var_84_cvector; // 0x10bc Xor2
	func_4502(var_82_cvector, var_83_cvector); // 0x10bd NEW_2
	var_90_int = 25; // 0x10bf PushI
	var_91_float = var_82_cvector * var_90_int; // 0x10c0 Mult
	var_92_int = var_81_float + var_91_float; // 0x10c1 Add
	var_93_cvector = CVector(0.0, 10.0, 0.0); // 0x10c2 PushVec
	var_72_cvector = var_92_int - var_93_cvector; // 0x10c3 Sub2
	var_73_cvector = var_69_cvector + var_72_cvector; // 0x10c4 Add2
	IsOverrideActive(var_74_bool); // 0x10c5 Func
	var_94_bool = var_74_bool; // 0x10c7 Push
	if(var_94_bool == 0) goto Label_4299; // 0x10c8 JumpB
	var_55_bool = 0; // 0x10c9 MovB
	return 18; // 0x10ca Return
	
Label_4299:
	StopWorld(); // 0x10cb Func
	var_95_bool = 1; // 0x10cd PushB
	CameraTransit(var_73_cvector, var_71_cvector, var_95_bool); // 0x10ce Func
	var_96_float = GetByIndex(var_72_cvector, 0); // 0x10d0 PushE
	var_97_float = GetByIndex(var_72_cvector, 2); // 0x10d1 PushE
	Rotate(var_96_float, var_97_float); // 0x10d2 Func
	var_98_bool = 0; // 0x10d4 PushV
	func_5511(var_98_bool); // 0x10d5 NEW_2
	if(var_98_bool == 0) goto Label_4313; // 0x10d7 JumpB
	goto Label_4321; // 0x10d8 Jump
	
Label_4321:
	CameraWaitForPlayFinish(); // 0x10e1 Func
	ResumeWorld(); // 0x10e3 Func
	var_55_bool = 1; // 0x10e5 MovB
	return 18; // 0x10e6 Return
	
Label_4313:
	var_99_string = "head"; // 0x10d9 PushS
	HasAnimationTrack(var_75_bool, var_99_string); // 0x10da Func
	var_100_bool = var_75_bool; // 0x10dc Push
	if(var_100_bool == 0) goto Label_4321; // 0x10dd JumpB
	var_101_string = "head"; // 0x10de PushS
	LookAsyncCamera(var_101_string); // 0x10df Func
}


func_5281(var_182_object)
{
	var_183_object = Obj(); // 0x14a2 PushV
	var_183_object = var_182_object; // 0x14a3 Mov
	TaskCall(7); // 0x14a4 TaskCall
	func_2993(var_183_object); // 0x14a5 NEW_2
	TaskReturn(); // 0x14a6 TaskReturn
	return 0; // 0x14a8 Return
}


func_3236(var_1_object, var_2_object, var_4_string)
{
	var_215_bool = 0; var_216_bool = 0; var_217_cvector = CVector(0,0,0); var_218_bool = 0; var_219_bool = 0; var_220_cvector = CVector(0,0,0); // 0xca4 PushV
	var_1_object = 0; // 0xca5 TMovI
	
Label_3238:
	var_221_string = "all"; // 0xca6 PushS
	var_222_string = "attack_begin"; // 0xca7 PushS
	var_223_int = 1; // 0xca8 PushI
	var_224_int = var_1_object + var_223_int; // 0xca9 Add
	var_225_int = var_222_string + var_224_int; // 0xcaa Add
	HasAnimation(var_218_bool, var_221_string, var_225_int); // 0xcab Func
	var_226_bool = var_218_bool == 0; // 0xcad Not
	if(var_226_bool == 0) goto Label_3248; // 0xcae JumpB
	goto Label_3251; // 0xcaf Jump
	
Label_3251:
	var_2_object = 0; // 0xcb3 TMovI
	
Label_3252:
	var_227_string = "attack"; // 0xcb4 PushS
	var_228_int = 1; // 0xcb5 PushI
	var_229_int = var_2_object + var_228_int; // 0xcb6 Add
	var_230_int = var_227_string + var_229_int; // 0xcb7 Add
	IsExisting3DSound(var_219_bool, var_230_int); // 0xcb8 Func
	var_231_bool = var_219_bool == 0; // 0xcba Not
	if(var_231_bool == 0) goto Label_3261; // 0xcbb JumpB
	goto Label_3264; // 0xcbc Jump
	
Label_3264:
	var_232_string = "all"; // 0xcc0 PushS
	var_233_string = "bjump"; // 0xcc1 PushS
	GetAnimationOffset(var_220_cvector, var_232_string, var_233_string); // 0xcc2 Func
	var_234_float = GetByIndex(var_220_cvector, 2); // 0xcc4 PushE
	var_4_string = -var_234_float; // 0xcc5 Neg2
	return 6; // 0xcc6 Return
	
Label_3261:
	var_235_int = 1; // 0xcbd PushI
	var_2_object = var_2_object + var_235_int; // 0xcbe Add2
	goto Label_3252; // 0xcbf Jump
	
Label_3248:
	var_236_int = 1; // 0xcb0 PushI
	var_1_object = var_1_object + var_236_int; // 0xcb1 Add2
	goto Label_3238; // 0xcb2 Jump
}


func_5289(var_35_bool, var_36_object, var_37_bool)
{
	var_38_string = ""; var_39_string = ""; var_40_string = ""; var_41_string = ""; // 0x14a9 PushV
	var_42_bool = 0; var_43_object = Obj(); var_44_string = ""; // 0x14aa PushV
	var_43_object = var_36_object; // 0x14ab Mov
	var_44_string = "class"; // 0x14ac MovS
	func_3966(var_42_bool, var_43_object, var_44_string); // 0x14ad NEW_2
	var_51_bool = var_42_bool == 0; // 0x14af Not
	if(var_51_bool == 0) goto Label_5299; // 0x14b0 JumpB
	var_35_bool = 0; // 0x14b1 MovB
	return 4; // 0x14b2 Return
	
Label_5299:
	var_52_string = "class"; // 0x14b3 PushS
	GetProperty(var_52_string, var_40_string); // 0x14b4 Func
	var_53_string = "class"; // 0x14b6 PushS
	GetProperty(var_53_string, var_41_string); // 0x14b7 ObjFunc
	var_54_bool = 0; // 0x14b9 PushV
	var_54_bool = 0; // 0x14ba MovB
	var_55_bool = var_37_bool == 0; // 0x14bb Not
	if(var_55_bool == 0) goto Label_5312; // 0x14bc JumpB
	var_56_bool = var_40_string == var_41_string; // 0x14bd Eq
	if(var_56_bool == 0) goto Label_5312; // 0x14be JumpB
	var_54_bool = 1; // 0x14bf MovB
	
Label_5312:
	if(var_54_bool == 0) goto Label_5315; // 0x14c0 JumpB
	var_35_bool = 1; // 0x14c1 MovB
	return 4; // 0x14c2 Return
	
Label_5315:
	var_57_string = "rat"; // 0x14c3 PushS
	var_58_bool = var_41_string == var_57_string; // 0x14c4 Eq
	if(var_58_bool == 0) goto Label_5321; // 0x14c5 JumpB
	var_35_bool = 0; // 0x14c6 MovB
	return 4; // 0x14c7 Return
	
Label_5321:
	var_59_string = "rat_big"; // 0x14c9 PushS
	var_60_bool = var_41_string == var_59_string; // 0x14ca Eq
	if(var_60_bool == 0) goto Label_5327; // 0x14cb JumpB
	var_35_bool = 0; // 0x14cc MovB
	return 4; // 0x14cd Return
	
Label_5327:
	var_61_string = "dog"; // 0x14cf PushS
	var_62_bool = var_41_string == var_61_string; // 0x14d0 Eq
	if(var_62_bool == 0) goto Label_5333; // 0x14d1 JumpB
	var_35_bool = 0; // 0x14d2 MovB
	return 4; // 0x14d3 Return
	
Label_5333:
	var_63_string = "grabitel"; // 0x14d5 PushS
	var_64_bool = var_41_string == var_63_string; // 0x14d6 Eq
	if(var_64_bool == 0) goto Label_5339; // 0x14d7 JumpB
	var_35_bool = 0; // 0x14d8 MovB
	return 4; // 0x14d9 Return
	
Label_5339:
	var_65_string = "bomber"; // 0x14db PushS
	var_66_bool = var_41_string == var_65_string; // 0x14dc Eq
	if(var_66_bool == 0) goto Label_5345; // 0x14dd JumpB
	var_35_bool = 0; // 0x14de MovB
	return 4; // 0x14df Return
	
Label_5345:
	var_67_string = "sanitar"; // 0x14e1 PushS
	var_68_bool = var_41_string == var_67_string; // 0x14e2 Eq
	if(var_68_bool == 0) goto Label_5351; // 0x14e3 JumpB
	var_35_bool = 0; // 0x14e4 MovB
	return 4; // 0x14e5 Return
	
Label_5351:
	var_69_string = "hunter"; // 0x14e7 PushS
	var_70_bool = var_41_string == var_69_string; // 0x14e8 Eq
	if(var_70_bool == 0) goto Label_5357; // 0x14e9 JumpB
	var_35_bool = 0; // 0x14ea MovB
	return 4; // 0x14eb Return
	
Label_5357:
	var_71_string = "soldier"; // 0x14ed PushS
	var_72_bool = var_41_string == var_71_string; // 0x14ee Eq
	if(var_72_bool == 0) goto Label_5362; // 0x14ef JumpB
	var_35_bool = 0; // 0x14f0 MovB
	return 4; // 0x14f1 Return
	
Label_5362:
	var_35_bool = 1; // 0x14f2 MovB
	return 4; // 0x14f3 Return
}


func_4786(var_226_int)
{
	var_227_int = 0; var_228_int = 0; // 0x12b2 PushV
	var_229_string = "branch"; // 0x12b3 PushS
	GetVariable(var_229_string, var_228_int); // 0x12b4 Func
	var_226_int = var_228_int; // 0x12b6 Mov
	return 2; // 0x12b7 Return
}


func_4792(var_36_object)
{
	var_37_int = 0; // 0x12b9 PushV
	func_4786(var_37_int); // 0x12ba NEW_2
	var_41_int = 1; // 0x12bc PushI
	var_42_bool = var_37_int == var_41_int; // 0x12bd Eq
	if(var_42_bool == 0) goto Label_4802; // 0x12be JumpB
	WorkWithCorpse(var_36_object); // 0x12bf Func
	goto Label_4804; // 0x12c1 Jump
	
Label_4804:
	return 0; // 0x12c4 Return
	
Label_4802:
	Barter(var_36_object); // 0x12c2 Func
}


func_3781(var_0_bool, var_1_object, var_284_bool, var_285_object, var_286_float, var_287_float, var_288_bool, var_289_bool)
{
	var_290_bool = 0; var_291_bool = 0; var_292_object = Obj(); var_293_cvector = CVector(0,0,0); var_294_cvector = CVector(0,0,0); var_295_cvector = CVector(0,0,0); var_296_float = 0; var_297_object = Obj(); var_298_bool = 0; var_299_bool = 0; var_300_object = Obj(); var_301_cvector = CVector(0,0,0); var_302_cvector = CVector(0,0,0); var_303_cvector = CVector(0,0,0); var_304_float = 0; var_305_object = Obj(); // 0xec5 PushV
	var_0_bool = 0; // 0xec6 TMovB
	var_1_object = var_285_object; // 0xec7 TMov
	var_299_bool = var_289_bool; // 0xec8 Mov
	
Label_3785:
	var_306_bool = 0; var_307_object = Obj(); // 0xec9 PushV
	var_307_object = var_285_object; // 0xeca Mov
	func_3921(var_306_bool, var_307_object); // 0xecb NEW_2
	var_310_bool = var_306_bool == 0; // 0xecd Not
	if(var_310_bool == 0) goto Label_3793; // 0xece JumpB
	var_284_bool = 0; // 0xecf MovB
	return 16; // 0xed0 Return
	
Label_3793:
	GetPosition(var_301_cvector); // 0xed1 ObjFunc
	GetPosition(var_302_cvector); // 0xed3 Func
	var_303_cvector = var_301_cvector - var_302_cvector; // 0xed5 Sub2
	var_304_float = var_303_cvector | var_303_cvector; // 0xed6 Or2
	var_311_bool = 0; // 0xed7 PushV
	var_311_bool = 0; // 0xed8 MovB
	var_312_int = 0; // 0xed9 PushI
	var_313_bool = var_287_float > var_312_int; // 0xeda GT
	if(var_313_bool == 0) goto Label_3808; // 0xedb JumpB
	var_314_float = var_287_float * var_287_float; // 0xedc Mult
	var_315_bool = var_304_float > var_314_float; // 0xedd GT
	if(var_315_bool == 0) goto Label_3808; // 0xede JumpB
	var_311_bool = 1; // 0xedf MovB
	
Label_3808:
	if(var_311_bool == 0) goto Label_3813; // 0xee0 JumpB
	Stop(); // 0xee1 Func
	var_284_bool = 0; // 0xee3 MovB
	return 16; // 0xee4 Return
	
Label_3813:
	var_316_float = var_286_float * var_286_float; // 0xee5 Mult
	var_317_bool = var_304_float > var_316_float; // 0xee6 GT
	if(var_317_bool == 0) goto Label_3875; // 0xee7 JumpB
	GetPFPosition(var_301_cvector); // 0xee8 ObjFunc
	FindPathTo(var_305_object, var_301_cvector); // 0xeea Func
	var_318_bool = var_305_object != 0; // 0xeec NullNeq
	if(var_318_bool == 0) goto Label_3824; // 0xeed JumpB
	var_300_object = var_305_object; // 0xeee Mov
	var_305_object = 0; // 0xeef SetNull
	
Label_3824:
	var_319_bool = var_300_object != 0; // 0xef0 NullNeq
	if(var_319_bool == 0) goto Label_3857; // 0xef1 JumpB
	var_320_bool = var_299_bool; // 0xef2 Push
	if(var_320_bool == 0) goto Label_3834; // 0xef3 JumpB
	var_299_bool = 0; // 0xef4 MovB
	RotatePath(var_300_object, var_298_bool); // 0xef5 Func
	var_321_bool = var_298_bool == 0; // 0xef7 Not
	if(var_321_bool == 0) goto Label_3834; // 0xef8 JumpB
	goto Label_3881; // 0xef9 Jump
	
Label_3881:
	var_284_bool = !var_0_bool; // 0xf29 Not2
	return 16; // 0xf2a Return
	
Label_3834:
	var_322_int = 0; // 0xefa PushI
	var_323_float = 0.3; // 0xefb PushF
	SetTimer(var_322_int, var_323_float); // 0xefc Func
	var_324_string = ""; // 0xefe PushV
	func_3928(var_324_string); // 0xeff NEW_2
	var_325_string = ""; // 0xf01 PushV
	func_3930(var_325_string); // 0xf02 NEW_2
	FollowPath(var_300_object, var_288_bool, var_298_bool, var_324_string, var_325_string); // 0xf04 Func
	var_326_bool = var_298_bool == 0; // 0xf06 Not
	if(var_326_bool == 0) goto Label_3855; // 0xf07 JumpB
	var_327_bool = var_0_bool; // 0xf08 PushT
	if(var_327_bool == 0) goto Label_3853; // 0xf09 JumpB
	var_300_object = 0; // 0xf0a SetNull
	goto Label_3881; // 0xf0b Jump
	
Label_3853:
	goto Label_3880; // 0xf0d Jump
	
Label_3880:
	goto Label_3785; // 0xf28 Jump
	
Label_3855:
	var_300_object = 0; // 0xf0f SetNull
	goto Label_3873; // 0xf10 Jump
	
Label_3873:
	var_305_object = 0; // 0xf21 SetNull
	goto Label_3879; // 0xf22 Jump
	
Label_3879:
	var_300_object = 0; // 0xf27 SetNull
	
Label_3857:
	var_328_int = 0; // 0xf11 PushI
	KillTimer(var_328_int); // 0xf12 Func
	var_329_float = 0.5; // 0xf14 PushF
	Sleep(var_329_float, var_298_bool); // 0xf15 Func
	var_330_bool = var_298_bool == 0; // 0xf17 Not
	if(var_330_bool == 0) goto Label_3869; // 0xf18 JumpB
	var_331_bool = var_0_bool; // 0xf19 PushT
	if(var_331_bool == 0) goto Label_3869; // 0xf1a JumpB
	var_300_object = 0; // 0xf1b SetNull
	goto Label_3881; // 0xf1c Jump
	
Label_3869:
	var_332_int = 0; // 0xf1d PushI
	var_333_float = 0.3; // 0xf1e PushF
	SetTimer(var_332_int, var_333_float); // 0xf1f Func
	
Label_3875:
	var_334_int = 0; // 0xf23 PushI
	KillTimer(var_334_int); // 0xf24 Func
	goto Label_3881; // 0xf26 Jump
}


func_4805(var_118_int, var_119_int)
{
	var_129_int = 0; var_130_bool = 0; var_131_int = 0; var_132_bool = 0; // 0x12c5 PushV
	var_133_bool = var_118_int > var_119_int; // 0x12c6 GT
	if(var_133_bool == 0) goto Label_4812; // 0x12c7 JumpB
	var_134_string = "GenerateMoney: iMin > iMax"; // 0x12c8 PushS
	Trace(var_134_string); // 0x12c9 Func
	return 4; // 0x12cb Return
	
Label_4812:
	var_131_int = 0; // 0x12cc MovI
	var_135_bool = var_118_int != var_119_int; // 0x12cd Neq
	if(var_135_bool == 0) goto Label_4819; // 0x12ce JumpB
	var_136_int = var_119_int - var_118_int; // 0x12cf Sub
	irand(var_131_int, var_136_int); // 0x12d0 Func
	goto Label_4823; // 0x12d2 Jump
	
Label_4823:
	var_131_int = var_131_int + var_118_int; // 0x12d7 Add2
	var_137_int = 0; // 0x12d8 PushI
	var_138_bool = var_131_int == var_137_int; // 0x12d9 Eq
	if(var_138_bool == 0) goto Label_4828; // 0x12da JumpB
	return 4; // 0x12db Return
	
Label_4828:
	var_139_int = 0; var_140_string = ""; // 0x12dc PushV
	var_140_string = "Money"; // 0x12dd MovS
	func_5052(var_139_int, var_140_string); // 0x12de NEW_2
	var_143_int = 0; // 0x12e0 PushI
	AddItem(var_132_bool, var_139_int, var_143_int, var_131_int); // 0x12e1 Func
	return 4; // 0x12e3 Return
	
Label_4819:
	var_144_int = 0; // 0x12d3 PushI
	var_145_bool = var_118_int == var_144_int; // 0x12d4 Eq
	if(var_145_bool == 0) goto Label_4823; // 0x12d5 JumpB
	return 4; // 0x12d6 Return
}


func_3271(var_0_bool, var_498_float, var_499_int)
{
	var_500_object = Obj(); var_501_float = 0; var_502_float = 0; var_503_object = Obj(); var_504_float = 0; var_505_float = 0; // 0xcc7 PushV
	var_506_float = 0.9; // 0xcc8 PushF
	var_507_float = var_498_float * var_506_float; // 0xcc9 Mult
	GetVictim(var_507_float, var_503_object); // 0xcca Func
	ReportAttack(var_0_bool); // 0xccc Func
	var_508_bool = var_503_object == var_0_bool; // 0xcce Eq
	if(var_508_bool == 0) goto Label_3308; // 0xccf JumpB
	var_509_float = 0; var_510_object = Obj(); var_511_int = 0; // 0xcd0 PushV
	var_510_object = var_503_object; // 0xcd1 Mov
	var_511_int = var_499_int; // 0xcd2 Mov
	func_3001(var_511_int); // 0xcd3 NEW_2
	var_504_float = var_509_float; // 0xcd4 Mov
	var_512_float = 0; var_513_object = Obj(); var_514_float = 0; var_515_int = 0; // 0xcd6 PushV
	var_513_object = var_503_object; // 0xcd7 Mov
	var_514_float = var_504_float; // 0xcd8 Mov
	var_516_int = 0; var_517_object = Obj(); var_518_int = 0; // 0xcd9 PushV
	var_517_object = var_503_object; // 0xcda Mov
	var_518_int = var_499_int; // 0xcdb Mov
	func_3004(var_518_int); // 0xcdc NEW_2
	var_515_int = var_516_int; // 0xcdd Mov
	func_3978(var_512_float, var_513_object, var_514_float, var_515_int); // 0xcdf NEW_2
	var_505_float = var_512_float; // 0xce0 Mov
	var_577_int = 0; // 0xce2 PushV
	func_3654(var_577_int); // 0xce3 NEW_2
	ReportHit(var_0_bool, var_577_int, var_505_float, var_504_float); // 0xce5 Func
	var_578_object = Obj(); var_579_float = 0; // 0xce7 PushV
	var_578_object = var_503_object; // 0xce8 Mov
	var_579_float = var_505_float; // 0xce9 Mov
	func_3661(); // 0xcea NEW_2
	
Label_3308:
	return 6; // 0xcec Return
}


func_2769(var_0_bool)
{
	var_70_object = Obj(); // 0xad1 PushV
	var_70_object = var_0_bool; // 0xad2 MovT
	func_4437(var_70_object); // 0xad3 NEW_2
	return 0; // 0xad5 Return
}


func_4836(var_232_string)
{
	var_233_object = Obj(); var_234_int = 0; var_235_bool = 0; var_236_object = Obj(); var_237_int = 0; var_238_bool = 0; // 0x12e4 PushV
	CreateInvItem(var_236_object); // 0x12e5 Func
	SetItemName(var_232_string); // 0x12e7 ObjFunc
	var_239_string = "Organ"; // 0x12e9 PushS
	var_240_int = 1; // 0x12ea PushI
	SetProperty(var_239_string, var_240_int); // 0x12eb ObjFunc
	GetItemID(var_237_int); // 0x12ed ObjFunc
	var_241_int = 0; // 0x12ef PushI
	var_242_int = 1; // 0x12f0 PushI
	AddItem(var_238_bool, var_236_object, var_241_int, var_242_int); // 0x12f1 Func
	return 6; // 0x12f3 Return
}


func_4327()
{
	var_316_bool = 0; var_317_bool = 0; // 0x10e7 PushV
	var_318_bool = 1; // 0x10e8 PushB
	CameraSwitchToNormal(var_318_bool); // 0x10e9 Func
	var_319_bool = 0; // 0x10eb PushV
	func_5511(var_319_bool); // 0x10ec NEW_2
	if(var_319_bool == 0) goto Label_4336; // 0x10ee JumpB
	goto Label_4344; // 0x10ef Jump
	
Label_4344:
	return 2; // 0x10f8 Return
	
Label_4336:
	var_320_string = "head"; // 0x10f0 PushS
	HasAnimationTrack(var_317_bool, var_320_string); // 0x10f1 Func
	var_321_bool = var_317_bool; // 0x10f3 Push
	if(var_321_bool == 0) goto Label_4344; // 0x10f4 JumpB
	var_322_string = "head"; // 0x10f5 PushS
	UnlookAsync(var_322_string); // 0x10f6 Func
}


func_3310(var_0_bool, var_461_bool, var_462_float)
{
	var_463_int = 0; var_464_bool = 0; var_465_int = 0; var_466_string = ""; var_467_int = 0; var_468_bool = 0; var_469_int = 0; var_470_string = ""; // 0xcee PushV
	func_3649(var_470_string); // 0xcf0 NEW_2
	irand(var_467_int, var_470_string); // 0xcf2 Func
	var_471_int = 1; // 0xcf4 PushI
	var_467_int = var_467_int + var_471_int; // 0xcf5 Add2
	Face(var_0_bool); // 0xcf6 Func
	var_472_bool = 1; // 0xcf8 PushB
	SetAttackState(var_472_bool); // 0xcf9 Func
	func_4614(); // 0xcfc NEW_2
	var_477_string = "all"; // 0xcfe PushS
	var_478_string = "attack_begin"; // 0xcff PushS
	var_479_int = var_478_string + var_467_int; // 0xd00 Add
	PlayAnimation(var_477_string, var_479_int); // 0xd01 Func
	WaitForAnimEnd(); // 0xd03 Func
	func_3617(var_469_int, var_470_string); // 0xd06 NEW_2
	var_495_bool = 0; var_496_object = Obj(); // 0xd08 PushV
	var_496_object = var_0_bool; // 0xd09 MovT
	func_4092(var_495_bool, var_496_object); // 0xd0a NEW_2
	var_497_bool = var_495_bool == 0; // 0xd0c Not
	if(var_497_bool == 0) goto Label_3346; // 0xd0d JumpB
	StopAsync(); // 0xd0e Func
	var_461_bool = 0; // 0xd10 MovB
	return 8; // 0xd11 Return
	
Label_3346:
	var_498_float = 0; var_499_int = 0; // 0xd12 PushV
	var_498_float = var_462_float; // 0xd13 Mov
	var_499_int = var_467_int; // 0xd14 Mov
	func_3271(var_470_string, var_498_float, var_499_int); // 0xd15 NEW_2
	var_580_string = "all"; // 0xd17 PushS
	var_581_string = "attack_middle"; // 0xd18 PushS
	var_582_int = var_581_string + var_467_int; // 0xd19 Add
	HasAnimation(var_468_bool, var_580_string, var_582_int); // 0xd1a Func
	var_583_bool = var_468_bool; // 0xd1c Push
	if(var_583_bool == 0) goto Label_3427; // 0xd1d JumpB
	func_4614(); // 0xd1f NEW_2
	var_584_string = "all"; // 0xd21 PushS
	var_585_string = "attack_middle"; // 0xd22 PushS
	var_586_int = var_585_string + var_467_int; // 0xd23 Add
	PlayAnimation(var_584_string, var_586_int); // 0xd24 Func
	WaitForAnimEnd(); // 0xd26 Func
	func_3649(var_470_string); // 0xd29 NEW_2
	var_587_bool = 0; var_588_object = Obj(); // 0xd2b PushV
	var_588_object = var_0_bool; // 0xd2c MovT
	func_4092(var_587_bool, var_588_object); // 0xd2d NEW_2
	var_589_bool = var_587_bool == 0; // 0xd2f Not
	if(var_589_bool == 0) goto Label_3381; // 0xd30 JumpB
	StopAsync(); // 0xd31 Func
	var_461_bool = 0; // 0xd33 MovB
	return 8; // 0xd34 Return
	
Label_3381:
	var_590_float = 0; var_591_int = 0; // 0xd35 PushV
	var_590_float = var_462_float; // 0xd36 Mov
	var_591_int = var_467_int; // 0xd37 Mov
	func_3271(var_470_string, var_590_float, var_591_int); // 0xd38 NEW_2
	var_469_int = 1; // 0xd3a MovI
	
Label_3387:
	var_592_string = "attack_middle"; // 0xd3b PushS
	var_593_int = var_592_string + var_467_int; // 0xd3c Add
	var_594_string = "_"; // 0xd3d PushS
	var_595_int = var_593_int + var_594_string; // 0xd3e Add
	var_470_string = var_595_int + var_469_int; // 0xd3f Add2
	var_596_string = "all"; // 0xd40 PushS
	HasAnimation(var_468_bool, var_596_string, var_470_string); // 0xd41 Func
	var_597_bool = var_468_bool == 0; // 0xd43 Not
	if(var_597_bool == 0) goto Label_3398; // 0xd44 JumpB
	goto Label_3427; // 0xd45 Jump
	
Label_3427:
	var_598_bool = 0; // 0xd63 PushB
	SetAttackState(var_598_bool); // 0xd64 Func
	var_599_string = "all"; // 0xd66 PushS
	var_600_string = "attack_end"; // 0xd67 PushS
	var_601_int = var_600_string + var_467_int; // 0xd68 Add
	PlayAnimation(var_599_string, var_601_int); // 0xd69 Func
	var_602_bool = 0; // 0xd6b PushV
	func_3663(var_602_bool); // 0xd6c NEW_2
	if(var_602_bool == 0) goto Label_3445; // 0xd6e JumpB
	var_603_bool = 0; var_604_float = 0; // 0xd6f PushV
	var_604_float = 0.75; // 0xd70 MovF
	func_3447(var_603_bool, var_604_float); // 0xd71 NEW_2
	StopAsync(); // 0xd73 Func
	
Label_3445:
	var_461_bool = 1; // 0xd75 MovB
	return 8; // 0xd76 Return
	
Label_3398:
	func_4614(); // 0xd47 NEW_2
	var_612_string = "all"; // 0xd49 PushS
	PlayAnimation(var_612_string, var_470_string); // 0xd4a Func
	WaitForAnimEnd(); // 0xd4c Func
	func_3649(var_470_string); // 0xd4f NEW_2
	var_613_bool = 0; var_614_object = Obj(); // 0xd51 PushV
	var_614_object = var_0_bool; // 0xd52 MovT
	func_4092(var_613_bool, var_614_object); // 0xd53 NEW_2
	var_615_bool = var_613_bool == 0; // 0xd55 Not
	if(var_615_bool == 0) goto Label_3419; // 0xd56 JumpB
	StopAsync(); // 0xd57 Func
	var_461_bool = 0; // 0xd59 MovB
	return 8; // 0xd5a Return
	
Label_3419:
	var_616_float = 0; var_617_int = 0; // 0xd5b PushV
	var_616_float = var_462_float; // 0xd5c Mov
	var_617_int = var_467_int; // 0xd5d Mov
	func_3271(var_470_string, var_616_float, var_617_int); // 0xd5e NEW_2
	var_618_int = 1; // 0xd60 PushI
	var_469_int = var_469_int + var_618_int; // 0xd61 Add2
	goto Label_3387; // 0xd62 Jump
}


func_5364(var_86_int, var_87_object)
{
	var_89_int = 0; var_90_object = Obj(); // 0x14f5 PushV
	var_90_object = var_87_object; // 0x14f6 Mov
	func_5271(var_89_int, var_90_object); // 0x14f7 NEW_2
	var_86_int = var_89_int; // 0x14f8 Mov
	return 0; // 0x14fa Return
}


func_4853()
{
	var_226_int = 0; // 0x12f5 PushV
	func_4786(var_226_int); // 0x12f6 NEW_2
	var_230_int = 1; // 0x12f8 PushI
	var_231_bool = var_226_int != var_230_int; // 0x12f9 Neq
	if(var_231_bool == 0) goto Label_4860; // 0x12fa JumpB
	return 0; // 0x12fb Return
	
Label_4860:
	var_232_string = ""; // 0x12fc PushV
	var_232_string = "liver"; // 0x12fd MovS
	func_4836(var_232_string); // 0x12fe NEW_2
	var_243_string = ""; // 0x1300 PushV
	var_243_string = "kidney"; // 0x1301 MovS
	func_4836(var_243_string); // 0x1302 NEW_2
	var_244_string = ""; // 0x1304 PushV
	var_244_string = "heart"; // 0x1305 MovS
	func_4836(var_244_string); // 0x1306 NEW_2
	var_245_string = ""; // 0x1308 PushV
	var_245_string = "blood"; // 0x1309 MovS
	func_4836(var_245_string); // 0x130a NEW_2
	return 0; // 0x130c Return
}


func_4345(var_324_bool, var_325_object)
{
	var_326_bool = 0; var_327_object = Obj(); var_328_float = 0; // 0x10fa PushV
	var_327_object = var_325_object; // 0x10fb Mov
	var_328_float = 70; // 0x10fc MovI
	func_4353(var_327_object, var_328_float); // 0x10fd NEW_2
	var_324_bool = var_326_bool; // 0x10fe Mov
	return 0; // 0x1100 Return
}


func_5371(var_125_object)
{
	var_126_object = Obj(); // 0x14fc PushV
	var_126_object = var_125_object; // 0x14fd Mov
	func_5281(var_126_object); // 0x14fe NEW_2
	return 0; // 0x1500 Return
}


func_4353(var_326_bool, var_328_float)
{
	var_329_float = 0; var_330_cvector = CVector(0,0,0); var_331_cvector = CVector(0,0,0); var_332_cvector = CVector(0,0,0); var_333_cvector = CVector(0,0,0); var_334_cvector = CVector(0,0,0); var_335_cvector = CVector(0,0,0); var_336_bool = 0; var_337_float = 0; var_338_cvector = CVector(0,0,0); var_339_cvector = CVector(0,0,0); var_340_cvector = CVector(0,0,0); var_341_cvector = CVector(0,0,0); var_342_cvector = CVector(0,0,0); var_343_cvector = CVector(0,0,0); var_344_bool = 0; // 0x1101 PushV
	GetPosition(var_338_cvector); // 0x1102 ObjFunc
	GetEyesHeight(var_337_float); // 0x1104 ObjFunc
	var_345_float = GetByIndex(var_338_cvector, 1); // 0x1106 PushE
	var_345_float = var_345_float + var_337_float; // 0x1107 Add2
	SetByIndex(var_338_cvector, 1) = var_345_float; // 0x1108 PopE
	GetPosition(var_339_cvector); // 0x1109 Func
	GetEyesHeight(var_337_float); // 0x110b Func
	var_346_float = GetByIndex(var_339_cvector, 1); // 0x110d PushE
	var_346_float = var_346_float + var_337_float; // 0x110e Add2
	SetByIndex(var_339_cvector, 1) = var_346_float; // 0x110f PopE
	var_340_cvector = var_338_cvector - var_339_cvector; // 0x1110 Sub2
	var_347_float = GetByIndex(var_340_cvector, 1); // 0x1111 PushE
	var_347_float = 0; // 0x1112 MovI
	SetByIndex(var_340_cvector, 1) = var_347_float; // 0x1113 PopE
	var_348_int = var_340_cvector | var_340_cvector; // 0x1114 Or
	var_349_float = sqrt(var_348_int); // 0x1115 Sqrt
	var_340_cvector = var_340_cvector / var_340_cvector; // 0x1116 Div2
	var_341_cvector = -var_340_cvector; // 0x1117 Neg2
	var_350_float = var_340_cvector * var_328_float; // 0x1118 Mult
	var_351_cvector = CVector(0.0, 10.0, 0.0); // 0x1119 PushVec
	var_342_cvector = var_350_float - var_351_cvector; // 0x111a Sub2
	var_343_cvector = var_339_cvector + var_342_cvector; // 0x111b Add2
	IsOverrideActive(var_344_bool); // 0x111c Func
	var_352_bool = var_344_bool; // 0x111e Push
	if(var_352_bool == 0) goto Label_4386; // 0x111f JumpB
	var_326_bool = 0; // 0x1120 MovB
	return 16; // 0x1121 Return
	
Label_4386:
	StopWorld(); // 0x1122 Func
	var_353_bool = 1; // 0x1124 PushB
	CameraTransit(var_343_cvector, var_341_cvector, var_353_bool); // 0x1125 Func
	var_354_float = GetByIndex(var_342_cvector, 0); // 0x1127 PushE
	var_355_float = GetByIndex(var_342_cvector, 2); // 0x1128 PushE
	Rotate(var_354_float, var_355_float); // 0x1129 Func
	CameraWaitForPlayFinish(); // 0x112b Func
	ResumeWorld(); // 0x112d Func
	var_326_bool = 1; // 0x112f MovB
	return 16; // 0x1130 Return
}


func_5377(var_28_bool, var_29_object, var_30_object, var_31_float, var_32_bool)
{
	var_33_bool = 0; var_34_bool = 0; // 0x1501 PushV
	var_35_bool = 0; var_36_object = Obj(); var_37_bool = 0; // 0x1502 PushV
	var_36_object = var_30_object; // 0x1503 Mov
	var_37_bool = !var_32_bool; // 0x1504 Not2
	func_5289(var_35_bool, var_36_object, var_37_bool); // 0x1505 NEW_2
	var_73_bool = var_35_bool == 0; // 0x1507 Not
	if(var_73_bool == 0) goto Label_5387; // 0x1508 JumpB
	var_28_bool = 0; // 0x1509 MovB
	return 2; // 0x150a Return
	
Label_5387:
	CanSee(var_34_bool, var_29_object); // 0x150b Func
	var_74_bool = 0; // 0x150d PushV
	var_74_bool = 1; // 0x150e MovB
	var_75_bool = var_34_bool; // 0x150f Push
	if(var_75_bool == 0) goto Label_5401; // 0x1510 JumpB
	var_76_float = 0; var_77_object = Obj(); // 0x1511 PushV
	var_77_object = var_29_object; // 0x1512 Mov
	func_3953(var_77_object); // 0x1513 NEW_2
	var_84_float = var_31_float * var_31_float; // 0x1515 Mult
	var_85_bool = var_76_float <= var_84_float; // 0x1516 LE
	if(var_85_bool == 0) goto Label_5401; // 0x1517 JumpB
	var_74_bool = 0; // 0x1518 MovB
	
Label_5401:
	if(var_74_bool == 0) goto Label_5404; // 0x1519 JumpB
	var_28_bool = 1; // 0x151a MovB
	return 2; // 0x151b Return
	
Label_5404:
	var_28_bool = 0; // 0x151c MovB
	return 2; // 0x151d Return
}


func_2310(var_2_object)
{
	var_20_int = 110; // 0x906 PushI
	KillTimer(var_20_int); // 0x907 Func
	var_2_object = 0; // 0x909 TMovB
	func_2446(var_18_object, var_19_bool); // 0x90b NEW_2
	return 0; // 0x90d Return
}


func_4877(var_112_bool)
{
	var_113_int = 0; var_114_bool = 0; var_115_int = 0; var_116_bool = 0; // 0x130d PushV
	var_117_bool = var_112_bool; // 0x130e Push
	if(var_117_bool == 0) goto Label_4966; // 0x130f JumpB
	var_118_int = 0; var_119_int = 0; // 0x1310 PushV
	var_118_int = 0; // 0x1311 MovI
	var_120_int = 100; // 0x1312 PushI
	var_121_int = 0; // 0x1313 PushV
	func_4588(var_121_int); // 0x1314 NEW_2
	var_127_int = 100; // 0x1316 PushI
	var_128_float = var_121_int * var_127_int; // 0x1317 Mult
	var_119_int = var_120_int + var_128_float; // 0x1318 Add2
	func_4805(var_118_int, var_119_int); // 0x1319 NEW_2
	var_146_int = 8; // 0x131b PushI
	irand(var_115_int, var_146_int); // 0x131c Func
	var_147_int = 0; // 0x131e PushI
	var_148_bool = var_115_int == var_147_int; // 0x131f Eq
	if(var_148_bool == 0) goto Label_4906; // 0x1320 JumpB
	var_149_int = 0; var_150_string = ""; // 0x1321 PushV
	var_150_string = "lemon"; // 0x1322 MovS
	func_5052(var_149_int, var_150_string); // 0x1323 NEW_2
	var_151_int = 0; // 0x1325 PushI
	var_152_int = 1; // 0x1326 PushI
	AddItem(var_116_bool, var_149_int, var_151_int, var_152_int); // 0x1327 Func
	goto Label_4965; // 0x1329 Jump
	
Label_4965:
	goto Label_5051; // 0x1365 Jump
	
Label_5051:
	return 4; // 0x13bb Return
	
Label_4906:
	var_153_int = 1; // 0x132a PushI
	var_154_bool = var_115_int == var_153_int; // 0x132b Eq
	if(var_154_bool == 0) goto Label_4918; // 0x132c JumpB
	var_155_int = 0; var_156_string = ""; // 0x132d PushV
	var_156_string = "rusk"; // 0x132e MovS
	func_5052(var_155_int, var_156_string); // 0x132f NEW_2
	var_157_int = 0; // 0x1331 PushI
	var_158_int = 1; // 0x1332 PushI
	AddItem(var_116_bool, var_155_int, var_157_int, var_158_int); // 0x1333 Func
	goto Label_4965; // 0x1335 Jump
	
Label_4918:
	var_159_int = 2; // 0x1336 PushI
	var_160_bool = var_115_int == var_159_int; // 0x1337 Eq
	if(var_160_bool == 0) goto Label_4930; // 0x1338 JumpB
	var_161_int = 0; var_162_string = ""; // 0x1339 PushV
	var_162_string = "hook"; // 0x133a MovS
	func_5052(var_161_int, var_162_string); // 0x133b NEW_2
	var_163_int = 0; // 0x133d PushI
	var_164_int = 1; // 0x133e PushI
	AddItem(var_116_bool, var_161_int, var_163_int, var_164_int); // 0x133f Func
	goto Label_4965; // 0x1341 Jump
	
Label_4930:
	var_165_int = 4; // 0x1342 PushI
	var_166_bool = var_115_int == var_165_int; // 0x1343 Eq
	if(var_166_bool == 0) goto Label_4942; // 0x1344 JumpB
	var_167_int = 0; var_168_string = ""; // 0x1345 PushV
	var_168_string = "syringe"; // 0x1346 MovS
	func_5052(var_167_int, var_168_string); // 0x1347 NEW_2
	var_169_int = 0; // 0x1349 PushI
	var_170_int = 1; // 0x134a PushI
	AddItem(var_116_bool, var_167_int, var_169_int, var_170_int); // 0x134b Func
	goto Label_4965; // 0x134d Jump
	
Label_4942:
	var_171_int = 5; // 0x134e PushI
	var_172_bool = var_115_int == var_171_int; // 0x134f Eq
	if(var_172_bool == 0) goto Label_4954; // 0x1350 JumpB
	var_173_int = 0; var_174_string = ""; // 0x1351 PushV
	var_174_string = "watch"; // 0x1352 MovS
	func_5052(var_173_int, var_174_string); // 0x1353 NEW_2
	var_175_int = 0; // 0x1355 PushI
	var_176_int = 1; // 0x1356 PushI
	AddItem(var_116_bool, var_173_int, var_175_int, var_176_int); // 0x1357 Func
	goto Label_4965; // 0x1359 Jump
	
Label_4954:
	var_177_int = 6; // 0x135a PushI
	var_178_bool = var_115_int == var_177_int; // 0x135b Eq
	if(var_178_bool == 0) goto Label_4965; // 0x135c JumpB
	var_179_int = 0; var_180_string = ""; // 0x135d PushV
	var_180_string = "razor"; // 0x135e MovS
	func_5052(var_179_int, var_180_string); // 0x135f NEW_2
	var_181_int = 0; // 0x1361 PushI
	var_182_int = 1; // 0x1362 PushI
	AddItem(var_116_bool, var_179_int, var_181_int, var_182_int); // 0x1363 Func
	
Label_4966:
	var_183_int = 0; var_184_int = 0; // 0x1366 PushV
	var_183_int = 0; // 0x1367 MovI
	var_185_int = 50; // 0x1368 PushI
	var_186_int = 0; // 0x1369 PushV
	func_4588(var_186_int); // 0x136a NEW_2
	var_187_int = 50; // 0x136c PushI
	var_188_float = var_186_int * var_187_int; // 0x136d Mult
	var_184_int = var_185_int + var_188_float; // 0x136e Add2
	func_4805(var_183_int, var_184_int); // 0x136f NEW_2
	var_189_int = 7; // 0x1371 PushI
	irand(var_115_int, var_189_int); // 0x1372 Func
	var_190_int = 0; // 0x1374 PushI
	var_191_bool = var_115_int == var_190_int; // 0x1375 Eq
	if(var_191_bool == 0) goto Label_4992; // 0x1376 JumpB
	var_192_int = 0; var_193_string = ""; // 0x1377 PushV
	var_193_string = "beads"; // 0x1378 MovS
	func_5052(var_192_int, var_193_string); // 0x1379 NEW_2
	var_194_int = 0; // 0x137b PushI
	var_195_int = 1; // 0x137c PushI
	AddItem(var_116_bool, var_192_int, var_194_int, var_195_int); // 0x137d Func
	goto Label_5051; // 0x137f Jump
	
Label_4992:
	var_196_int = 1; // 0x1380 PushI
	var_197_bool = var_115_int == var_196_int; // 0x1381 Eq
	if(var_197_bool == 0) goto Label_5004; // 0x1382 JumpB
	var_198_int = 0; var_199_string = ""; // 0x1383 PushV
	var_199_string = "bracelet"; // 0x1384 MovS
	func_5052(var_198_int, var_199_string); // 0x1385 NEW_2
	var_200_int = 0; // 0x1387 PushI
	var_201_int = 1; // 0x1388 PushI
	AddItem(var_116_bool, var_198_int, var_200_int, var_201_int); // 0x1389 Func
	goto Label_5051; // 0x138b Jump
	
Label_5004:
	var_202_int = 2; // 0x138c PushI
	var_203_bool = var_115_int == var_202_int; // 0x138d Eq
	if(var_203_bool == 0) goto Label_5016; // 0x138e JumpB
	var_204_int = 0; var_205_string = ""; // 0x138f PushV
	var_205_string = "ear_ring"; // 0x1390 MovS
	func_5052(var_204_int, var_205_string); // 0x1391 NEW_2
	var_206_int = 0; // 0x1393 PushI
	var_207_int = 1; // 0x1394 PushI
	AddItem(var_116_bool, var_204_int, var_206_int, var_207_int); // 0x1395 Func
	goto Label_5051; // 0x1397 Jump
	
Label_5016:
	var_208_int = 3; // 0x1398 PushI
	var_209_bool = var_115_int == var_208_int; // 0x1399 Eq
	if(var_209_bool == 0) goto Label_5028; // 0x139a JumpB
	var_210_int = 0; var_211_string = ""; // 0x139b PushV
	var_211_string = "gold_ring"; // 0x139c MovS
	func_5052(var_210_int, var_211_string); // 0x139d NEW_2
	var_212_int = 0; // 0x139f PushI
	var_213_int = 1; // 0x13a0 PushI
	AddItem(var_116_bool, var_210_int, var_212_int, var_213_int); // 0x13a1 Func
	goto Label_5051; // 0x13a3 Jump
	
Label_5028:
	var_214_int = 4; // 0x13a4 PushI
	var_215_bool = var_115_int == var_214_int; // 0x13a5 Eq
	if(var_215_bool == 0) goto Label_5040; // 0x13a6 JumpB
	var_216_int = 0; var_217_string = ""; // 0x13a7 PushV
	var_217_string = "silver_ring"; // 0x13a8 MovS
	func_5052(var_216_int, var_217_string); // 0x13a9 NEW_2
	var_218_int = 0; // 0x13ab PushI
	var_219_int = 1; // 0x13ac PushI
	AddItem(var_116_bool, var_216_int, var_218_int, var_219_int); // 0x13ad Func
	goto Label_5051; // 0x13af Jump
	
Label_5040:
	var_220_int = 5; // 0x13b0 PushI
	var_221_bool = var_115_int == var_220_int; // 0x13b1 Eq
	if(var_221_bool == 0) goto Label_5051; // 0x13b2 JumpB
	var_222_int = 0; var_223_string = ""; // 0x13b3 PushV
	var_223_string = "flower"; // 0x13b4 MovS
	func_5052(var_222_int, var_223_string); // 0x13b5 NEW_2
	var_224_int = 0; // 0x13b7 PushI
	var_225_int = 1; // 0x13b8 PushI
	AddItem(var_116_bool, var_222_int, var_224_int, var_225_int); // 0x13b9 Func
}


func_2318(var_2_object)
{
	var_69_int = 110; // 0x90e PushI
	KillTimer(var_69_int); // 0x90f Func
	var_2_object = 0; // 0x911 TMovB
	func_2453(var_23_bool, var_24_int); // 0x913 NEW_2
	return 0; // 0x915 Return
}


func_5406(var_22_int)
{
	var_22_int = 0; // 0x151f MovI
	return 0; // 0x1520 Return
}


func_2335(var_2_object, var_20_object)
{
	var_21_bool = 0; var_22_int = 0; var_23_bool = 0; var_24_int = 0; // 0x91f PushV
	var_25_bool = 0; var_26_object = Obj(); // 0x920 PushV
	var_26_object = var_20_object; // 0x921 Mov
	func_4092(var_25_bool, var_26_object); // 0x922 NEW_2
	var_59_bool = var_25_bool == 0; // 0x924 Not
	if(var_59_bool == 0) goto Label_2343; // 0x925 JumpB
	return 4; // 0x926 Return
	
Label_2343:
	var_60_object = var_2_object; // 0x927 PushT
	if(var_60_object == 0) goto Label_2346; // 0x928 JumpB
	return 4; // 0x929 Return
	
Label_2346:
	IsPlayerActor(var_20_object, var_23_bool); // 0x92a Func
	var_61_bool = var_23_bool == 0; // 0x92c Not
	if(var_61_bool == 0) goto Label_2351; // 0x92d JumpB
	return 4; // 0x92e Return
	
Label_2351:
	var_62_int = 0; var_63_object = Obj(); // 0x92f PushV
	var_63_object = var_20_object; // 0x930 Mov
	func_5254(var_63_object); // 0x931 NEW_2
	var_24_int = var_62_int; // 0x932 Mov
	var_65_int = 0; // 0x934 PushI
	var_66_bool = var_24_int > var_65_int; // 0x935 GT
	if(var_66_bool == 0) goto Label_2374; // 0x936 JumpB
	var_67_int = 1; // 0x937 PushI
	var_68_bool = var_24_int > var_67_int; // 0x938 GT
	if(var_68_bool == 0) goto Label_2365; // 0x939 JumpB
	func_2318(var_24_int); // 0x93b NEW_2
	
Label_2365:
	var_70_object = Obj(); // 0x93d PushV
	var_70_object = var_20_object; // 0x93e Mov
	func_5263(var_70_object); // 0x93f NEW_2
	var_2_object = 1; // 0x941 TMovB
	var_135_int = 110; // 0x942 PushI
	var_136_float = 10.0; // 0x943 PushF
	SetTimer(var_135_int, var_136_float); // 0x944 Func
	
Label_2374:
	return 4; // 0x946 Return
}


func_5409()
{
	return 0; // 0x1522 Return
}


func_5411(var_129_int, var_130_string, var_131_object)
{
	var_132_string = "killme"; // 0x1524 PushS
	var_133_bool = var_130_string == var_132_string; // 0x1525 Eq
	if(var_133_bool == 0) goto Label_5421; // 0x1526 JumpB
	var_134_int = 0; var_135_object = Obj(); // 0x1527 PushV
	var_135_object = var_131_object; // 0x1528 Mov
	func_5433(var_134_int, var_135_object); // 0x1529 NEW_2
	var_129_int = var_134_int; // 0x152a Mov
	return 0; // 0x152c Return
	
Label_5421:
	var_129_int = 0; // 0x152d MovI
	return 0; // 0x152e Return
}


func_3883(var_0_bool, var_1_object, var_27_int)
{
	var_28_int = 0; // 0xf2c PushI
	var_29_bool = var_27_int != var_28_int; // 0xf2d Neq
	if(var_29_bool == 0) goto Label_3888; // 0xf2e JumpB
	return 0; // 0xf2f Return
	
Label_3888:
	var_30_bool = 0; var_31_object = Obj(); // 0xf30 PushV
	var_31_object = var_1_object; // 0xf31 MovT
	func_3921(var_30_bool, var_31_object); // 0xf32 NEW_2
	var_66_bool = var_30_bool == 0; // 0xf34 Not
	if(var_66_bool == 0) goto Label_3895; // 0xf35 JumpB
	var_0_bool = 1; // 0xf36 TMovB
	
Label_3895:
	var_67_int = 0; // 0xf37 PushI
	KillTimer(var_67_int); // 0xf38 Func
	Stop(); // 0xf3a Func
	return 0; // 0xf3c Return
}


func_5423(var_177_string, var_178_object)
{
	var_179_string = "killme"; // 0x1530 PushS
	var_180_bool = var_177_string == var_179_string; // 0x1531 Eq
	if(var_180_bool == 0) goto Label_5432; // 0x1532 JumpB
	var_181_object = Obj(); // 0x1533 PushV
	var_181_object = var_178_object; // 0x1534 Mov
	func_5451(var_181_object); // 0x1535 NEW_2
	return 0; // 0x1537 Return
	
Label_5432:
	return 0; // 0x1538 Return
}


func_4401()
{
	var_365_bool = 1; // 0x1132 PushB
	CameraSwitchToNormal(var_365_bool); // 0x1133 Func
	return 0; // 0x1135 Return
}


func_4406(var_172_string)
{
	var_173_bool = 0; var_174_float = 0; var_175_float = 0; var_176_bool = 0; var_177_float = 0; var_178_float = 0; // 0x1136 PushV
	lshHasAnimation(var_176_bool, var_172_string); // 0x1137 Func
	var_179_bool = var_176_bool; // 0x1139 Push
	if(var_179_bool == 0) goto Label_4417; // 0x113a JumpB
	lshGetAnimTimes(var_172_string, var_177_float, var_178_float); // 0x113b Func
	var_180_bool = 0; // 0x113d PushB
	lshPlayAnimation(var_177_float, var_178_float, var_180_bool); // 0x113e Func
	goto Label_4421; // 0x1140 Jump
	
Label_4421:
	return 6; // 0x1145 Return
	
Label_4417:
	var_181_string = "Can't find lsh animation : "; // 0x1141 PushS
	var_182_int = var_181_string + var_172_string; // 0x1142 Add
	Trace(var_182_int); // 0x1143 Func
}


func_5433(var_134_int, var_135_object)
{
	var_136_bool = 0; var_137_object = Obj(); // 0x153a PushV
	var_137_object = var_135_object; // 0x153b Mov
	func_4092(var_136_bool, var_137_object); // 0x153c NEW_2
	var_170_bool = var_136_bool == 0; // 0x153e Not
	if(var_170_bool == 0) goto Label_5442; // 0x153f JumpB
	var_134_int = 0; // 0x1540 MovI
	return 0; // 0x1541 Return
	
Label_5442:
	var_171_bool = 0; var_172_object = Obj(); // 0x1542 PushV
	var_172_object = var_135_object; // 0x1543 Mov
	func_5559(var_172_object); // 0x1544 NEW_2
	if(var_171_bool == 0) goto Label_5449; // 0x1546 JumpB
	var_134_int = 2; // 0x1547 MovI
	goto Label_5450; // 0x1548 Jump
	
Label_5450:
	return 0; // 0x154a Return
	
Label_5449:
	var_134_int = 0; // 0x1549 MovI
}


func_3905(var_0_bool)
{
	var_0_bool = 1; // 0xf41 TMovB
	var_23_int = 0; // 0xf42 PushI
	KillTimer(var_23_int); // 0xf43 Func
	Stop(); // 0xf45 Func
	return 0; // 0xf47 Return
}


func_4422(var_147_string, var_148_bool)
{
	var_151_bool = 0; var_152_float = 0; var_153_float = 0; var_154_bool = 0; var_155_float = 0; var_156_float = 0; // 0x1146 PushV
	lshHasAnimation(var_154_bool, var_147_string); // 0x1147 Func
	var_157_bool = var_154_bool; // 0x1149 Push
	if(var_157_bool == 0) goto Label_4432; // 0x114a JumpB
	lshGetAnimTimes(var_147_string, var_155_float, var_156_float); // 0x114b Func
	lshPlayAnimation(var_155_float, var_156_float, var_148_bool); // 0x114d Func
	goto Label_4436; // 0x114f Jump
	
Label_4436:
	return 6; // 0x1154 Return
	
Label_4432:
	var_158_string = "Can't find lsh animation : "; // 0x1150 PushS
	var_159_int = var_158_string + var_147_string; // 0x1151 Add
	Trace(var_159_int); // 0x1152 Func
}


func_2375(var_0_bool, var_1_object)
{
	var_25_float = 0; var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_bool = 0; var_29_object = Obj(); var_30_bool = 0; var_31_float = 0; var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_bool = 0; var_35_object = Obj(); var_36_bool = 0; // 0x947 PushV
	var_0_bool = 0; // 0x948 TMovB
	var_1_object = 0; // 0x949 TMovB
	var_37_float = 0.5; // 0x94a PushF
	rand(var_31_float, var_37_float); // 0x94b Func
	Sleep(var_31_float); // 0x94d Func
	
Label_2383:
	var_38_bool = var_0_bool == 0; // 0x94f Not
	if(var_38_bool == 0) goto Label_2433; // 0x950 JumpB
	var_39_bool = var_1_object == 0; // 0x951 Not
	if(var_39_bool == 0) goto Label_2402; // 0x952 JumpB
	
Label_2387:
	GetPosition(var_33_cvector); // 0x953 Func
	var_40_float = 0; // 0x955 PushV
	func_2434(var_40_float); // 0x956 NEW_2
	GetRandomPFPointInCircle(var_32_cvector, var_33_cvector, var_40_float, var_34_bool); // 0x958 Func
	var_43_bool = var_34_bool; // 0x95a Push
	if(var_43_bool == 0) goto Label_2397; // 0x95b JumpB
	goto Label_2401; // 0x95c Jump
	
Label_2401:
	goto Label_2403; // 0x961 Jump
	
Label_2403:
	var_44_object = Obj(); var_45_cvector = CVector(0,0,0); // 0x963 PushV
	var_45_cvector = var_32_cvector; // 0x964 Mov
	func_2462(var_44_object, var_45_cvector); // 0x965 NEW_2
	var_35_object = var_44_object; // 0x966 Mov
	var_48_bool = var_35_object != 0; // 0x968 NullNeq
	if(var_48_bool == 0) goto Label_2428; // 0x969 JumpB
	RotatePath(var_35_object, var_36_bool); // 0x96a Func
	var_49_bool = var_36_bool; // 0x96c Push
	if(var_49_bool == 0) goto Label_2427; // 0x96d JumpB
	var_50_bool = 0; // 0x96e PushV
	func_2460(var_50_bool); // 0x96f NEW_2
	FollowPath(var_35_object, var_50_bool, var_36_bool); // 0x971 Func
	var_35_object = 0; // 0x973 SetNull
	var_51_bool = var_36_bool; // 0x974 Push
	if(var_51_bool == 0) goto Label_2427; // 0x975 JumpB
	TaskCall(5); // 0x977 TaskCall
	func_2632(); // 0x978 NEW_2
	TaskReturn(); // 0x979 TaskReturn
	
Label_2427:
	goto Label_2431; // 0x97b Jump
	
Label_2431:
	var_35_object = 0; // 0x97f SetNull
	goto Label_2383; // 0x980 Jump
	
Label_2428:
	var_103_int = 1; // 0x97c PushI
	Sleep(var_103_int); // 0x97d Func
	
Label_2397:
	var_104_int = 1; // 0x95d PushI
	Sleep(var_104_int); // 0x95e Func
	goto Label_2387; // 0x960 Jump
	
Label_2402:
	var_1_object = 0; // 0x962 TMovB
	
Label_2433:
	return 12; // 0x981 Return
}


func_5451(var_181_object)
{
	var_182_object = Obj(); // 0x154c PushV
	var_182_object = var_181_object; // 0x154d Mov
	func_5281(var_182_object); // 0x154e NEW_2
	return 0; // 0x1550 Return
}


func_5457(var_22_int)
{
	var_22_int = 2; // 0x1552 MovI
	return 0; // 0x1553 Return
}


func_3921(var_30_bool, var_31_object)
{
	var_32_bool = 0; var_33_object = Obj(); // 0xf52 PushV
	var_33_object = var_31_object; // 0xf53 Mov
	func_4092(var_32_bool, var_33_object); // 0xf54 NEW_2
	var_30_bool = var_32_bool; // 0xf55 Mov
	return 0; // 0xf57 Return
}


func_5460(var_30_object)
{
	var_31_object = Obj(); // 0x1555 PushV
	var_31_object = var_30_object; // 0x1556 Mov
	func_5517(var_30_object, var_31_object); // 0x1557 NEW_2
	return 0; // 0x1559 Return
}


func_4437(var_23_object)
{
	var_24_float = 0; var_25_cvector = CVector(0,0,0); var_26_float = 0; var_27_cvector = CVector(0,0,0); // 0x1155 PushV
	GetEyesHeight(var_26_float); // 0x1156 ObjFunc
	var_27_cvector = CVector(0.0, 0.0, 0.0); // 0x1158 MovV
	var_28_float = GetByIndex(var_27_cvector, 1); // 0x1159 PushE
	var_28_float = var_26_float; // 0x115a Mov
	SetByIndex(var_27_cvector, 1) = var_28_float; // 0x115b PopE
	var_29_string = "head"; // 0x115c PushS
	LookAsync(var_23_object, var_29_string, var_27_cvector); // 0x115d Func
	return 4; // 0x115f Return
}


func_3928(var_324_string)
{
	var_324_string = "walk"; // 0xf58 MovS
	return 0; // 0xf59 Return
}


func_5466()
{
	return 0; // 0x155a Return
}


func_3930(var_325_string)
{
	var_325_string = "run"; // 0xf5a MovS
	return 0; // 0xf5b Return
}


func_3932(var_540_string, var_541_int)
{
	var_542_int = 2; // 0xf5d PushI
	var_543_bool = var_541_int == var_542_int; // 0xf5e Eq
	if(var_543_bool == 0) goto Label_3939; // 0xf5f JumpB
	var_540_string = "fire"; // 0xf60 MovS
	return 0; // 0xf61 Return
	
Label_3939:
	var_544_int = 1; // 0xf63 PushI
	var_545_bool = var_541_int == var_544_int; // 0xf64 Eq
	if(var_545_bool == 0) goto Label_3944; // 0xf65 JumpB
	var_540_string = "bullet"; // 0xf66 MovS
	return 0; // 0xf67 Return
	
Label_3944:
	var_540_string = "phys"; // 0xf68 MovS
	return 0; // 0xf69 Return
}


func_5467(var_25_bool)
{
	var_25_bool = 0; // 0x155c MovB
	return 0; // 0x155d Return
}


func_5470()
{
	return 0; // 0x155f Return
}


func_4448()
{
	var_22_bool = 0; // 0x1160 PushV
	func_5511(var_22_bool); // 0x1161 NEW_2
	if(var_22_bool == 0) goto Label_4454; // 0x1163 JumpB
	lshStopSpeech(); // 0x1164 Func
	
Label_4454:
	return 0; // 0x1166 Return
}


func_5472(var_32_bool, var_33_object)
{
	var_34_bool = 0; var_35_bool = 0; // 0x1560 PushV
	CanSee(var_35_bool, var_33_object); // 0x1561 Func
	var_32_bool = 1; // 0x1563 MovB
	var_36_bool = var_35_bool; // 0x1564 Push
	if(var_36_bool == 0) goto Label_5486; // 0x1565 JumpB
	var_37_float = 0; var_38_object = Obj(); // 0x1566 PushV
	var_38_object = var_33_object; // 0x1567 Mov
	func_3953(var_38_object); // 0x1568 NEW_2
	var_45_int = 2250000; // 0x156a PushI
	var_46_bool = var_37_float <= var_45_int; // 0x156b LE
	if(var_46_bool == 0) goto Label_5486; // 0x156c JumpB
	var_32_bool = 0; // 0x156d MovB
	
Label_5486:
	return 2; // 0x156e Return
}


func_2917()
{
	StopGroup0(); // 0xb65 Func
	StopAsync(); // 0xb67 Func
	var_32_string = "head"; // 0xb69 PushS
	UnlookAsync(var_32_string); // 0xb6a Func
	var_33_int = 111; // 0xb6c PushI
	KillTimer(var_33_int); // 0xb6d Func
	return 0; // 0xb6f Return
}


func_4455(var_45_string)
{
	var_46_bool = 0; var_47_int = 0; var_48_bool = 0; var_49_int = 0; var_50_bool = 0; var_51_float = 0; var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_bool = 0; var_55_int = 0; var_56_bool = 0; var_57_int = 0; var_58_bool = 0; var_59_float = 0; var_60_cvector = CVector(0,0,0); var_61_cvector = CVector(0,0,0); // 0x1167 PushV
	IsExisting3DSound(var_54_bool, var_45_string); // 0x1168 Func
	var_62_bool = var_54_bool == 0; // 0x116a Not
	if(var_62_bool == 0) goto Label_4480; // 0x116b JumpB
	var_55_int = 0; // 0x116c MovI
	
Label_4461:
	var_63_int = 1; // 0x116d PushI
	var_64_int = var_55_int + var_63_int; // 0x116e Add
	var_65_int = var_45_string + var_64_int; // 0x116f Add
	IsExisting3DSound(var_56_bool, var_65_int); // 0x1170 Func
	var_66_bool = var_56_bool == 0; // 0x1172 Not
	if(var_66_bool == 0) goto Label_4469; // 0x1173 JumpB
	goto Label_4472; // 0x1174 Jump
	
Label_4472:
	var_67_bool = var_55_int == 0; // 0x1178 Not
	if(var_67_bool == 0) goto Label_4475; // 0x1179 JumpB
	return 16; // 0x117a Return
	
Label_4475:
	irand(var_57_int, var_55_int); // 0x117b Func
	var_68_int = 1; // 0x117d PushI
	var_69_int = var_57_int + var_68_int; // 0x117e Add
	var_45_string = var_45_string + var_69_int; // 0x117f Add2
	
Label_4480:
	Is3DSoundLoaded(var_58_bool, var_45_string); // 0x1180 Func
	var_70_bool = var_58_bool; // 0x1182 Push
	if(var_70_bool == 0) goto Label_4495; // 0x1183 JumpB
	GetEyesHeight(var_59_float); // 0x1184 Func
	GetDirection(var_60_cvector); // 0x1186 Func
	var_71_int = 50; // 0x1188 PushI
	var_61_cvector = var_60_cvector * var_71_int; // 0x1189 Mult2
	var_72_float = GetByIndex(var_61_cvector, 1); // 0x118a PushE
	var_72_float = var_72_float + var_59_float; // 0x118b Add2
	SetByIndex(var_61_cvector, 1) = var_72_float; // 0x118c PopE
	PlayGlobalSound(var_45_string, var_61_cvector); // 0x118d Func
	
Label_4495:
	return 16; // 0x118f Return
	
Label_4469:
	var_73_int = 1; // 0x1175 PushI
	var_55_int = var_55_int + var_73_int; // 0x1176 Add2
	goto Label_4461; // 0x1177 Jump
}


func_3946(var_53_cvector)
{
	var_55_cvector = CVector(0,0,0); var_56_cvector = CVector(0,0,0); var_57_cvector = CVector(0,0,0); var_58_cvector = CVector(0,0,0); // 0xf6a PushV
	GetPosition(var_57_cvector); // 0xf6b Func
	GetPosition(var_58_cvector); // 0xf6d ObjFunc
	var_53_cvector = var_58_cvector - var_57_cvector; // 0xf6f Sub2
	return 4; // 0xf70 Return
}


func_5487(var_60_object)
{
	var_61_object = Obj(); // 0x1570 PushV
	var_61_object = var_60_object; // 0x1571 Mov
	func_5263(var_61_object); // 0x1572 NEW_2
	return 0; // 0x1574 Return
}


func_3953(var_37_float)
{
	var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); // 0xf71 PushV
	GetPosition(var_42_cvector); // 0xf72 Func
	GetPosition(var_43_cvector); // 0xf74 ObjFunc
	var_44_cvector = var_43_cvector - var_42_cvector; // 0xf76 Sub2
	var_37_float = var_44_cvector | var_44_cvector; // 0xf77 Or2
	return 6; // 0xf78 Return
}


func_5493(var_49_bool)
{
	var_49_bool = 0; // 0x1576 MovB
	return 0; // 0x1577 Return
}


func_3447(var_603_bool, var_604_float)
{
	var_605_float = 0; var_606_bool = 0; var_607_float = 0; var_608_bool = 0; // 0xd77 PushV
	rand(var_607_float); // 0xd78 Func
	var_609_bool = var_607_float < var_604_float; // 0xd7a LT
	if(var_609_bool == 0) goto Label_3467; // 0xd7b JumpB
	
Label_3452:
	IsAnimationPlaying(var_608_bool); // 0xd7c Func
	var_610_bool = var_608_bool == 0; // 0xd7e Not
	if(var_610_bool == 0) goto Label_3457; // 0xd7f JumpB
	goto Label_3466; // 0xd80 Jump
	
Label_3466:
	goto Label_3472; // 0xd8a Jump
	
Label_3472:
	var_603_bool = 0; // 0xd90 MovB
	return 4; // 0xd91 Return
	
Label_3457:
	var_611_bool = 0; // 0xd81 PushV
	func_3545(var_611_bool); // 0xd82 NEW_2
	if(var_611_bool == 0) goto Label_3463; // 0xd84 JumpB
	var_603_bool = 1; // 0xd85 MovB
	return 4; // 0xd86 Return
	
Label_3463:
	sync(); // 0xd87 Func
	goto Label_3452; // 0xd89 Jump
	
Label_3467:
	WaitForAnimEnd(); // 0xd8b Func
	func_3649(var_608_bool); // 0xd8e NEW_2
}


func_5496()
{
	return 0; // 0x1579 Return
}


func_3961(var_103_bool, var_104_object)
{
	var_105_bool = 0; var_106_bool = 0; // 0xf79 PushV
	IsPlayerActor(var_104_object, var_106_bool); // 0xf7a Func
	var_103_bool = var_106_bool; // 0xf7c Mov
	return 2; // 0xf7d Return
}


func_5498(var_27_bool)
{
	var_27_bool = 0; // 0x157b MovB
	return 0; // 0x157c Return
}


func_5501()
{
	return 0; // 0x157e Return
}


func_3966(var_54_bool, var_55_object, var_56_string)
{
	var_57_bool = 0; var_58_bool = 0; // 0xf7e PushV
	var_59_string = "HasProperty"; // 0xf7f PushS
	var_60_int = 2; // 0xf80 PushI
	var_61_bool = IsFuncExist(var_55_object, var_59_string, var_60_int); // 0xf81 FuncExist
	var_62_bool = var_61_bool == 0; // 0xf82 Not
	if(var_62_bool == 0) goto Label_3974; // 0xf83 JumpB
	var_54_bool = 0; // 0xf84 MovB
	return 2; // 0xf85 Return
	
Label_3974:
	HasProperty(var_56_string, var_58_bool); // 0xf86 ObjFunc
	var_54_bool = var_58_bool; // 0xf88 Mov
	return 2; // 0xf89 Return
}


func_5503(var_104_int)
{
	var_104_int = 515564; // 0x157f MovI
	return 0; // 0x1580 Return
}


func_5505(var_103_int)
{
	var_103_int = 503349; // 0x1581 MovI
	return 0; // 0x1582 Return
}


func_2434(var_40_float)
{
	var_41_float = 0; var_42_float = 0; // 0x982 PushV
	GetCameraFarDistance(var_42_float); // 0x983 Func
	var_40_float = var_42_float; // 0x985 Mov
	return 2; // 0x986 Return
}


func_5507(var_105_string)
{
	var_105_string = "ui/NPC_Citizen2.png"; // 0x1583 MovS
	return 0; // 0x1584 Return
}


func_5509(var_106_string)
{
	var_106_string = "ui/NPC_Citizen2_b.png"; // 0x1585 MovS
	return 0; // 0x1586 Return
}


func_5511(var_98_bool)
{
	var_98_bool = 0; // 0x1587 MovB
	return 0; // 0x1588 Return
}


func_5513()
{
	var_20_bool = GlobalVars[0]; // 0x1589 PushGE
	var_20_bool = 0; // 0x158a MovB
	GlobalVars[0] = var_20_bool; // 0x158b PopGE
	return 0; // 0x158c Return
}


func_3978(var_512_float, var_513_object, var_514_float, var_515_int)
{
	var_519_int = 0; var_520_string = ""; var_521_int = 0; var_522_float = 0; var_523_float = 0; var_524_float = 0; var_525_int = 0; var_526_string = ""; var_527_int = 0; var_528_float = 0; var_529_float = 0; var_530_float = 0; // 0xf8a PushV
	var_531_bool = 0; var_532_object = Obj(); var_533_string = ""; // 0xf8b PushV
	var_532_object = var_513_object; // 0xf8c Mov
	var_533_string = "health"; // 0xf8d MovS
	func_3966(var_531_bool, var_532_object, var_533_string); // 0xf8e NEW_2
	var_534_bool = var_531_bool == 0; // 0xf90 Not
	if(var_534_bool == 0) goto Label_3988; // 0xf91 JumpB
	var_512_float = 0.0; // 0xf92 MovF
	return 12; // 0xf93 Return
	
Label_3988:
	var_535_bool = 0; var_536_object = Obj(); var_537_string = ""; // 0xf94 PushV
	var_536_object = var_513_object; // 0xf95 Mov
	var_537_string = "armor"; // 0xf96 MovS
	func_3966(var_535_bool, var_536_object, var_537_string); // 0xf97 NEW_2
	var_538_bool = var_535_bool == 0; // 0xf99 Not
	if(var_538_bool == 0) goto Label_3997; // 0xf9a JumpB
	var_525_int = 0; // 0xf9b MovI
	goto Label_4000; // 0xf9c Jump
	
Label_4000:
	var_539_string = "armor_"; // 0xfa0 PushS
	var_540_string = ""; var_541_int = 0; // 0xfa1 PushV
	var_541_int = var_515_int; // 0xfa2 Mov
	func_3932(var_540_string, var_541_int); // 0xfa3 NEW_2
	var_526_string = var_539_string + var_540_string; // 0xfa5 Add2
	var_546_bool = 0; var_547_object = Obj(); var_548_string = ""; // 0xfa6 PushV
	var_547_object = var_513_object; // 0xfa7 Mov
	var_548_string = var_526_string; // 0xfa8 Mov
	func_3966(var_546_bool, var_547_object, var_548_string); // 0xfa9 NEW_2
	var_549_bool = var_546_bool == 0; // 0xfab Not
	if(var_549_bool == 0) goto Label_4015; // 0xfac JumpB
	var_527_int = 0; // 0xfad MovI
	goto Label_4017; // 0xfae Jump
	
Label_4017:
	var_550_float = 0; var_551_float = 0; var_552_float = 0; // 0xfb1 PushV
	var_553_int = var_525_int + var_527_int; // 0xfb2 Add
	var_554_float = 100.0; // 0xfb3 PushF
	var_551_float = var_553_int / var_553_int; // 0xfb4 Div2
	var_552_float = 1; // 0xfb5 MovI
	func_4512(var_550_float, var_551_float, var_552_float); // 0xfb6 NEW_2
	var_528_float = var_550_float; // 0xfb7 Mov
	var_556_string = "health"; // 0xfb9 PushS
	GetProperty(var_556_string, var_529_float); // 0xfba ObjFunc
	var_557_int = 1; // 0xfbc PushI
	var_558_int = var_557_int - var_528_float; // 0xfbd Sub
	var_530_float = var_514_float * var_558_int; // 0xfbe Mult2
	var_559_string = "health"; // 0xfbf PushS
	var_560_float = 0; var_561_float = 0; var_562_float = 0; var_563_float = 0; // 0xfc0 PushV
	var_561_float = var_529_float - var_530_float; // 0xfc1 Sub2
	var_562_float = 0; // 0xfc2 MovI
	var_563_float = 1; // 0xfc3 MovI
	func_4519(var_560_float, var_561_float, var_562_float, var_563_float); // 0xfc4 NEW_2
	SetProperty(var_559_string, var_560_float); // 0xfc6 ObjFunc
	var_566_bool = 0; var_567_object = Obj(); // 0xfc8 PushV
	var_567_object = var_513_object; // 0xfc9 Mov
	func_3961(var_566_bool, var_567_object); // 0xfca NEW_2
	if(var_566_bool == 0) goto Label_4049; // 0xfcc JumpB
	var_568_float = 0; // 0xfcd PushV
	var_568_float = -var_530_float; // 0xfce Neg2
	func_4571(var_568_float); // 0xfcf NEW_2
	
Label_4049:
	var_512_float = var_530_float; // 0xfd1 Mov
	return 12; // 0xfd2 Return
	
Label_4015:
	GetProperty(var_526_string, var_527_int); // 0xfaf ObjFunc
	
Label_3997:
	var_576_string = "armor"; // 0xf9d PushS
	GetProperty(var_576_string, var_525_int); // 0xf9e ObjFunc
}


func_5517(var_31_object, var_46_object)
{
	var_32_bool = 0; var_33_bool = 0; // 0x158d PushV
	var_34_bool = GlobalVars[0]; // 0x158e PushGE
	if(var_34_bool == 0) goto Label_5530; // 0x158f JumpB
	IsOverrideActive(var_33_bool); // 0x1590 Func
	var_35_bool = var_33_bool == 0; // 0x1592 Not
	if(var_35_bool == 0) goto Label_5528; // 0x1593 JumpB
	var_36_object = Obj(); // 0x1594 PushV
	var_36_object = var_31_object; // 0x1595 Mov
	func_4792(var_36_object); // 0x1596 NEW_2
	
Label_5528:
	return 2; // 0x1598 Return
	
Label_5530:
	var_43_int = 1000; // 0x159a PushI
	var_44_int = 0; var_45_object = Obj(); // 0x159b PushV
	var_45_object = var_31_object; // 0x159c Mov
	TaskCall(1); // 0x159d TaskCall
	func_40(var_46_object, var_44_int, var_45_object); // 0x159e NEW_2
	TaskReturn(); // 0x159f TaskReturn
	var_323_bool = var_43_int == var_46_object; // 0x15a1 Eq
	if(var_323_bool == 0) goto Label_5556; // 0x15a2 JumpB
	var_324_bool = 0; var_325_object = Obj(); // 0x15a3 PushV
	var_325_object = var_31_object; // 0x15a4 Mov
	func_4345(var_324_bool, var_325_object); // 0x15a5 NEW_2
	var_356_bool = var_324_bool == 0; // 0x15a7 Not
	if(var_356_bool == 0) goto Label_5546; // 0x15a8 JumpB
	return 2; // 0x15a9 Return
	
Label_5546:
	var_357_object = Obj(); // 0x15aa PushV
	var_357_object = var_31_object; // 0x15ab Mov
	TaskCall(0); // 0x15ac TaskCall
	func_0(var_357_object); // 0x15ad NEW_2
	TaskReturn(); // 0x15ae TaskReturn
	var_364_object = Obj(); // 0x15b0 PushV
	var_364_object = var_31_object; // 0x15b1 Mov
	func_4401(); // 0x15b2 NEW_2
	
Label_5556:
	return 2; // 0x15b4 Return
}


func_2446(var_0_bool, var_1_object)
{
	var_0_bool = 1; // 0x98e TMovB
	var_1_object = 0; // 0x98f TMovB
	Stop(); // 0x990 Func
	StopGroup0(); // 0x992 Func
	return 0; // 0x994 Return
}


func_4496(var_107_object)
{
	var_108_object = Obj(); var_109_object = Obj(); // 0x1190 PushV
	self(var_109_object); // 0x1191 Func
	var_107_object = var_109_object; // 0x1193 Mov
	return 2; // 0x1194 Return
}


func_3474(var_0_bool, var_404_bool, var_405_float)
{
	var_406_bool = 0; var_407_cvector = CVector(0,0,0); var_408_cvector = CVector(0,0,0); var_409_cvector = CVector(0,0,0); var_410_float = 0; var_411_bool = 0; var_412_cvector = CVector(0,0,0); var_413_cvector = CVector(0,0,0); var_414_cvector = CVector(0,0,0); var_415_float = 0; // 0xd92 PushV
	
Label_3475:
	IsAnimationPlaying(var_411_bool); // 0xd93 Func
	var_416_bool = var_411_bool == 0; // 0xd95 Not
	if(var_416_bool == 0) goto Label_3480; // 0xd96 JumpB
	goto Label_3512; // 0xd97 Jump
	
Label_3512:
	func_3649(var_415_float); // 0xdb9 NEW_2
	var_404_bool = 0; // 0xdbb MovB
	return 10; // 0xdbc Return
	
Label_3480:
	var_417_bool = 0; // 0xd98 PushV
	func_3545(var_417_bool); // 0xd99 NEW_2
	if(var_417_bool == 0) goto Label_3486; // 0xd9b JumpB
	var_404_bool = 1; // 0xd9c MovB
	return 10; // 0xd9d Return
	
Label_3486:
	var_456_bool = 0; var_457_object = Obj(); // 0xd9e PushV
	var_457_object = var_0_bool; // 0xd9f MovT
	func_4092(var_456_bool, var_457_object); // 0xda0 NEW_2
	var_458_bool = var_456_bool == 0; // 0xda2 Not
	if(var_458_bool == 0) goto Label_3494; // 0xda3 JumpB
	var_404_bool = 0; // 0xda4 MovB
	return 10; // 0xda5 Return
	
Label_3494:
	GetPFPosition(var_412_cvector); // 0xda6 TObjFunc
	GetPFPosition(var_413_cvector); // 0xda8 Func
	var_414_cvector = var_412_cvector - var_413_cvector; // 0xdaa Sub2
	var_415_float = var_414_cvector | var_414_cvector; // 0xdab Or2
	var_459_float = var_405_float * var_405_float; // 0xdac Mult
	var_460_bool = var_415_float < var_459_float; // 0xdad LT
	if(var_460_bool == 0) goto Label_3509; // 0xdae JumpB
	var_461_bool = 0; var_462_float = 0; // 0xdaf PushV
	var_462_float = var_405_float; // 0xdb0 Mov
	func_3310(var_415_float, var_461_bool, var_462_float); // 0xdb1 NEW_2
	var_404_bool = 1; // 0xdb3 MovB
	return 10; // 0xdb4 Return
	
Label_3509:
	sync(); // 0xdb5 Func
	goto Label_3475; // 0xdb7 Jump
}


func_2453(var_0_bool, var_1_object)
{
	var_0_bool = 1; // 0x995 TMovB
	var_1_object = 1; // 0x996 TMovB
	Stop(); // 0x997 Func
	StopGroup0(); // 0x999 Func
	return 0; // 0x99b Return
}


func_4502(var_51_cvector, var_52_cvector)
{
	var_59_float = 0; var_60_float = 0; // 0x1196 PushV
	var_61_int = var_52_cvector | var_52_cvector; // 0x1197 Or
	var_60_float = sqrt(var_61_int); // 0x1198 Sqrt2
	var_62_float = 0.0; // 0x1199 PushF
	var_63_bool = var_60_float < var_62_float; // 0x119a LT
	if(var_63_bool == 0) goto Label_4510; // 0x119b JumpB
	var_51_cvector = CVector(0.0, 0.0, 0.0); // 0x119c MovV
	return 2; // 0x119d Return
	
Label_4510:
	var_51_cvector = var_52_cvector / var_52_cvector; // 0x119e Div2
	return 2; // 0x119f Return
}


func_1943(var_21_object)
{
	EventDisable(0); // 0x798 EventDisable
	var_22_object = Obj(); // 0x799 PushV
	var_22_object = var_21_object; // 0x79a Mov
	func_1976(var_22_object); // 0x79b NEW_2
	var_102_object = Obj(); // 0x79d PushV
	var_102_object = var_21_object; // 0x79e Mov
	func_5572(var_102_object); // 0x79f NEW_2
	EventEnable(0); // 0x7a1 EventEnable
	
Label_1954:
	Hold(); // 0x7a2 Func
	goto Label_1954; // 0x7a4 Jump
}


func_2460(var_50_bool)
{
	var_50_bool = 0; // 0x99c MovB
	return 0; // 0x99d Return
}


func_2462(var_44_object, var_45_cvector)
{
	var_46_object = Obj(); var_47_object = Obj(); // 0x99e PushV
	FindShiftedPathTo(var_47_object, var_45_cvector); // 0x99f Func
	var_44_object = var_47_object; // 0x9a1 Mov
	return 2; // 0x9a2 Return
}


func_4512(var_550_float, var_551_float, var_552_float)
{
	var_555_bool = var_551_float < var_552_float; // 0x11a1 LT
	if(var_555_bool == 0) goto Label_4517; // 0x11a2 JumpB
	var_550_float = var_551_float; // 0x11a3 Mov
	goto Label_4518; // 0x11a4 Jump
	
Label_4518:
	return 0; // 0x11a6 Return
	
Label_4517:
	var_550_float = var_552_float; // 0x11a5 Mov
}


func_4519(var_560_float, var_561_float, var_562_float, var_563_float)
{
	var_564_bool = var_561_float < var_562_float; // 0x11a8 LT
	if(var_564_bool == 0) goto Label_4524; // 0x11a9 JumpB
	var_560_float = var_562_float; // 0x11aa Mov
	return 0; // 0x11ab Return
	
Label_4524:
	var_565_bool = var_561_float > var_563_float; // 0x11ac GT
	if(var_565_bool == 0) goto Label_4528; // 0x11ad JumpB
	var_560_float = var_563_float; // 0x11ae Mov
	return 0; // 0x11af Return
	
Label_4528:
	var_560_float = var_561_float; // 0x11b0 Mov
	return 0; // 0x11b1 Return
}


func_424(var_2_object, var_143_string)
{
	var_144_bool = 0; // 0x1a9 PushV
	func_5511(var_144_bool); // 0x1aa NEW_2
	var_145_bool = var_144_bool == 0; // 0x1ac Not
	if(var_145_bool == 0) goto Label_431; // 0x1ad JumpB
	return 0; // 0x1ae Return
	
Label_431:
	var_146_bool = var_143_string == var_2_object; // 0x1af Eq
	if(var_146_bool == 0) goto Label_434; // 0x1b0 JumpB
	return 0; // 0x1b1 Return
	
Label_434:
	var_147_string = ""; var_148_bool = 0; // 0x1b2 PushV
	var_147_string = var_143_string; // 0x1b3 Mov
	var_149_string = ""; // 0x1b4 PushS
	var_150_bool = var_143_string == var_149_string; // 0x1b5 Eq
	if(var_150_bool == 0) goto Label_441; // 0x1b6 JumpB
	var_148_bool = 0; // 0x1b7 MovB
	goto Label_442; // 0x1b8 Jump
	
Label_442:
	func_4422(var_147_string, var_148_bool); // 0x1ba NEW_2
	var_2_object = var_143_string; // 0x1bc TMov
	return 0; // 0x1bd Return
	
Label_441:
	var_148_bool = 1; // 0x1b9 MovB
}


func_2993(var_183_object)
{
	var_190_object = Obj(); var_191_bool = 0; var_192_float = 0; // 0xbb2 PushV
	var_190_object = var_183_object; // 0xbb3 Mov
	var_191_bool = 1; // 0xbb4 MovB
	var_192_float = 180.0; // 0xbb5 MovF
	func_3007(var_186_int, var_187_bool, var_188_float, var_189_int, var_183_object, var_190_object, var_191_bool, var_192_float); // 0xbb6 NEW_2
	return 0; // 0xbb8 Return
}


func_4530(var_72_float, var_73_cvector, var_74_cvector)
{
	var_75_float = GetByIndex(var_73_cvector, 0); // 0x11b3 PushE
	var_76_float = GetByIndex(var_74_cvector, 0); // 0x11b4 PushE
	var_77_float = var_75_float * var_76_float; // 0x11b5 Mult
	var_78_float = GetByIndex(var_73_cvector, 2); // 0x11b6 PushE
	var_79_float = GetByIndex(var_74_cvector, 2); // 0x11b7 PushE
	var_80_float = var_78_float * var_79_float; // 0x11b8 Mult
	var_72_float = var_77_float + var_80_float; // 0x11b9 Add2
	return 0; // 0x11ba Return
}


func_5557(var_64_bool)
{
	var_64_bool = 0; // 0x15b5 MovB
	return 0; // 0x15b6 Return
}


func_5559(var_171_bool)
{
	var_171_bool = 1; // 0x15b8 MovB
	return 0; // 0x15b9 Return
}


func_1976(var_22_object)
{
	var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_string = ""; var_28_object = Obj(); var_29_bool = 0; var_30_bool = 0; var_31_float = 0; var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_string = ""; var_38_object = Obj(); var_39_bool = 0; var_40_bool = 0; var_41_float = 0; var_42_cvector = CVector(0,0,0); // 0x7b8 PushV
	var_43_bool = var_22_object == 0; // 0x7b9 NullEq
	if(var_43_bool == 0) goto Label_1984; // 0x7ba JumpB
	var_44_string = ""; // 0x7bb PushV
	var_44_string = "fdie"; // 0x7bc MovS
	func_2067(var_44_string); // 0x7bd NEW_2
	goto Label_2066; // 0x7bf Jump
	
Label_2066:
	return 20; // 0x812 Return
	
Label_1984:
	GetPosition(var_33_cvector); // 0x7c0 ObjFunc
	GetPosition(var_34_cvector); // 0x7c2 Func
	GetDirection(var_35_cvector); // 0x7c4 Func
	var_36_cvector = var_34_cvector - var_33_cvector; // 0x7c6 Sub2
	var_76_float = GetByIndex(var_36_cvector, 0); // 0x7c7 PushE
	var_77_float = GetByIndex(var_35_cvector, 0); // 0x7c8 PushE
	var_78_float = var_76_float * var_77_float; // 0x7c9 Mult
	var_79_float = GetByIndex(var_36_cvector, 2); // 0x7ca PushE
	var_80_float = GetByIndex(var_35_cvector, 2); // 0x7cb PushE
	var_81_float = var_79_float * var_80_float; // 0x7cc Mult
	var_82_int = var_78_float + var_81_float; // 0x7cd Add
	var_83_int = 0; // 0x7ce PushI
	var_84_bool = var_82_int >= var_83_int; // 0x7cf GE
	if(var_84_bool == 0) goto Label_2003; // 0x7d0 JumpB
	var_37_string = "fdie"; // 0x7d1 MovS
	goto Label_2004; // 0x7d2 Jump
	
Label_2004:
	RemoveRTEnvelope(); // 0x7d4 Func
	SetDeathState(); // 0x7d6 Func
	Stop(); // 0x7d8 Func
	StopAsync(); // 0x7da Func
	var_38_object = var_22_object; // 0x7dc Mov
	var_85_string = "GetScriptProperty"; // 0x7dd PushS
	var_86_int = 2; // 0x7de PushI
	var_87_bool = IsFuncExist(var_22_object, var_85_string, var_86_int); // 0x7df FuncExist
	if(var_87_bool == 0) goto Label_2028; // 0x7e0 JumpB
	var_88_string = "Owner"; // 0x7e1 PushS
	HasScriptProperty(var_39_bool, var_88_string); // 0x7e2 ObjFunc
	var_89_bool = var_39_bool; // 0x7e4 Push
	if(var_89_bool == 0) goto Label_2028; // 0x7e5 JumpB
	var_90_string = "Owner"; // 0x7e6 PushS
	GetScriptProperty(var_38_object, var_90_string); // 0x7e7 ObjFunc
	var_91_bool = var_38_object == 0; // 0x7e9 NullEq
	if(var_91_bool == 0) goto Label_2028; // 0x7ea JumpB
	var_38_object = var_22_object; // 0x7eb Mov
	
Label_2028:
	var_92_string = "@GetEyesHeight"; // 0x7ec PushS
	var_93_int = 1; // 0x7ed PushI
	var_94_bool = IsFuncExist(var_38_object, var_92_string, var_93_int); // 0x7ee FuncExist
	if(var_94_bool == 0) goto Label_2043; // 0x7ef JumpB
	GetEyesHeight(var_41_float); // 0x7f0 ObjFunc
	var_42_cvector = CVector(0.0, 0.0, 0.0); // 0x7f2 MovV
	var_95_float = GetByIndex(var_42_cvector, 1); // 0x7f3 PushE
	var_95_float = var_41_float; // 0x7f4 Mov
	SetByIndex(var_42_cvector, 1) = var_95_float; // 0x7f5 PopE
	var_96_string = "head"; // 0x7f6 PushS
	LookAsync(var_22_object, var_96_string, var_42_cvector); // 0x7f7 Func
	var_40_bool = 1; // 0x7f9 MovB
	goto Label_2044; // 0x7fa Jump
	
Label_2044:
	var_97_string = ""; // 0x7fc PushV
	var_97_string = var_37_string; // 0x7fd Mov
	func_4455(var_97_string); // 0x7fe NEW_2
	var_98_string = "all"; // 0x800 PushS
	PlayAnimation(var_98_string, var_37_string); // 0x801 Func
	WaitForAnimEnd(); // 0x803 Func
	var_99_bool = var_40_bool; // 0x805 Push
	if(var_99_bool == 0) goto Label_2060; // 0x806 JumpB
	StopAsync(); // 0x807 Func
	var_100_string = "head"; // 0x809 PushS
	UnlookAsync(var_100_string); // 0x80a Func
	
Label_2060:
	var_101_string = "all"; // 0x80c PushS
	LockAnimationEnd(var_101_string, var_37_string); // 0x80d Func
	RemoveEnvelope(); // 0x80f Func
	var_38_object = 0; // 0x811 SetNull
	
Label_2043:
	var_40_bool = 0; // 0x7fb MovB
	
Label_2003:
	var_37_string = "bdie"; // 0x7d3 MovS
}


func_3001(var_509_float)
{
	var_509_float = 0.05; // 0xbba MovF
	return 0; // 0xbbb Return
}


func_5562(var_24_bool, var_25_object, var_26_object, var_27_bool)
{
	var_28_bool = 0; var_29_object = Obj(); var_30_object = Obj(); var_31_float = 0; var_32_bool = 0; // 0x15bb PushV
	var_29_object = var_25_object; // 0x15bc Mov
	var_30_object = var_26_object; // 0x15bd Mov
	var_31_float = 700.0; // 0x15be MovF
	var_32_bool = var_27_bool; // 0x15bf Mov
	func_5377(var_28_bool, var_29_object, var_30_object, var_31_float, var_32_bool); // 0x15c0 NEW_2
	var_24_bool = var_28_bool; // 0x15c1 Mov
	return 0; // 0x15c3 Return
}


func_4539(var_81_float, var_82_cvector)
{
	var_83_float = GetByIndex(var_82_cvector, 0); // 0x11bc PushE
	var_84_float = GetByIndex(var_82_cvector, 0); // 0x11bd PushE
	var_85_float = var_83_float * var_84_float; // 0x11be Mult
	var_86_float = GetByIndex(var_82_cvector, 2); // 0x11bf PushE
	var_87_float = GetByIndex(var_82_cvector, 2); // 0x11c0 PushE
	var_88_float = var_86_float * var_87_float; // 0x11c1 Mult
	var_89_int = var_85_float + var_88_float; // 0x11c2 Add
	var_81_float = sqrt(var_89_int); // 0x11c3 Sqrt2
	return 0; // 0x11c4 Return
}


func_3004(var_516_int)
{
	var_516_int = 0; // 0xbbd MovI
	return 0; // 0xbbe Return
}


func_3517(var_0_bool, var_419_bool)
{
	var_420_cvector = CVector(0,0,0); var_421_cvector = CVector(0,0,0); var_422_cvector = CVector(0,0,0); var_423_float = 0; var_424_float = 0; var_425_cvector = CVector(0,0,0); var_426_cvector = CVector(0,0,0); var_427_cvector = CVector(0,0,0); var_428_float = 0; var_429_float = 0; // 0xdbd PushV
	var_430_bool = 0; var_431_object = Obj(); // 0xdbe PushV
	var_431_object = var_0_bool; // 0xdbf MovT
	func_4092(var_430_bool, var_431_object); // 0xdc0 NEW_2
	var_432_bool = var_430_bool == 0; // 0xdc2 Not
	if(var_432_bool == 0) goto Label_3526; // 0xdc3 JumpB
	var_419_bool = 0; // 0xdc4 MovB
	return 10; // 0xdc5 Return
	
Label_3526:
	var_433_bool = 0; // 0xdc6 PushV
	func_3606(var_429_float, var_433_bool); // 0xdc7 NEW_2
	if(var_433_bool == 0) goto Label_3543; // 0xdc9 JumpB
	GetPFPosition(var_425_cvector); // 0xdca TObjFunc
	GetPFPosition(var_426_cvector); // 0xdcc Func
	var_427_cvector = var_425_cvector - var_426_cvector; // 0xdce Sub2
	var_428_float = var_427_cvector | var_427_cvector; // 0xdcf Or2
	GetAttackDistance(var_429_float); // 0xdd0 TObjFunc
	var_434_int = 50; // 0xdd2 PushI
	var_429_float = var_429_float + var_434_int; // 0xdd3 Add2
	var_435_float = var_429_float * var_429_float; // 0xdd4 Mult
	var_419_bool = var_428_float <= var_435_float; // 0xdd5 LE2
	return 10; // 0xdd6 Return
	
Label_3543:
	var_419_bool = 0; // 0xdd7 MovB
	return 10; // 0xdd8 Return
}


func_5052(var_139_int, var_140_string)
{
	var_141_int = 0; var_142_int = 0; // 0x13bc PushV
	GetInvItemByName(var_142_int, var_140_string); // 0x13bd Func
	var_139_int = var_142_int; // 0x13bf Mov
	return 2; // 0x13c0 Return
}


func_3007(var_0_bool, var_3_object, var_5_bool, var_190_object, var_191_bool, var_192_float, var_267_bool, var_353_bool)
{
	var_193_float = 0; var_194_cvector = CVector(0,0,0); var_195_cvector = CVector(0,0,0); var_196_bool = 0; var_197_bool = 0; var_198_float = 0; var_199_cvector = CVector(0,0,0); var_200_float = 0; var_201_cvector = CVector(0,0,0); var_202_bool = 0; var_203_float = 0; var_204_float = 0; var_205_cvector = CVector(0,0,0); var_206_cvector = CVector(0,0,0); var_207_bool = 0; var_208_bool = 0; var_209_float = 0; var_210_cvector = CVector(0,0,0); var_211_float = 0; var_212_cvector = CVector(0,0,0); var_213_bool = 0; var_214_float = 0; // 0xbbf PushV
	func_3236(var_212_cvector, var_213_bool, var_214_float); // 0xbc1 NEW_2
	var_5_bool = 0; // 0xbc3 TMovI
	var_237_string = "@GetAttackDistance"; // 0xbc4 PushS
	var_238_int = 1; // 0xbc5 PushI
	var_239_bool = IsFuncExist(var_190_object, var_237_string, var_238_int); // 0xbc6 FuncExist
	if(var_239_bool == 0) goto Label_3021; // 0xbc7 JumpB
	GetAttackDistance(var_204_float); // 0xbc8 ObjFunc
	var_240_int = 50; // 0xbca PushI
	var_204_float = var_204_float + var_240_int; // 0xbcb Add2
	goto Label_3022; // 0xbcc Jump
	
Label_3022:
	var_241_int = 150; // 0xbce PushI
	var_242_bool = var_204_float >= var_241_int; // 0xbcf GE
	if(var_242_bool == 0) goto Label_3026; // 0xbd0 JumpB
	var_204_float = 150; // 0xbd1 MovI
	
Label_3026:
	var_3_object = 0; // 0xbd2 TMovB
	var_0_bool = var_190_object; // 0xbd3 TMov
	IsPlayerActor(var_0_bool, var_207_bool); // 0xbd4 Func
	var_243_bool = var_207_bool; // 0xbd6 Push
	if(var_243_bool == 0) goto Label_3040; // 0xbd7 JumpB
	var_244_string = "attack"; // 0xbd8 PushS
	PlayGlobalMusic(var_244_string); // 0xbd9 Func
	var_245_object = Obj(); // 0xbdb PushV
	func_4496(var_245_object); // 0xbdc NEW_2
	SendPlayerEnemy(var_190_object, var_245_object); // 0xbde Func
	
Label_3040:
	var_248_bool = var_191_bool; // 0xbe0 Push
	if(var_248_bool == 0) goto Label_3044; // 0xbe1 JumpB
	var_208_bool = 0; // 0xbe2 MovB
	goto Label_3045; // 0xbe3 Jump
	
Label_3045:
	var_249_float = 400.0; // 0xbe5 PushF
	var_209_float = var_249_float + var_204_float; // 0xbe6 Add2
	
Label_3047:
	var_250_bool = 0; // 0xbe7 PushV
	var_250_bool = 0; // 0xbe8 MovB
	var_251_bool = 0; var_252_object = Obj(); // 0xbe9 PushV
	var_252_object = var_0_bool; // 0xbea MovT
	func_4092(var_251_bool, var_252_object); // 0xbeb NEW_2
	if(var_251_bool == 0) goto Label_3057; // 0xbed JumpB
	var_253_bool = var_3_object == 0; // 0xbee Not
	if(var_253_bool == 0) goto Label_3057; // 0xbef JumpB
	var_250_bool = 1; // 0xbf0 MovB
	
Label_3057:
	if(var_250_bool == 0) goto Label_3219; // 0xbf1 JumpB
	func_3649(var_214_float); // 0xbf3 NEW_2
	GetPFPosition(var_205_cvector); // 0xbf5 TObjFunc
	GetPFPosition(var_206_cvector); // 0xbf7 Func
	var_210_cvector = var_205_cvector - var_206_cvector; // 0xbf9 Sub2
	var_211_float = var_210_cvector | var_210_cvector; // 0xbfa Or2
	var_259_float = var_209_float * var_209_float; // 0xbfb Mult
	var_260_bool = var_211_float >= var_259_float; // 0xbfc GE
	if(var_260_bool == 0) goto Label_3085; // 0xbfd JumpB
	var_261_bool = 0; var_262_object = Obj(); var_263_float = 0; var_264_float = 0; var_265_bool = 0; var_266_bool = 0; // 0xbfe PushV
	var_262_object = var_0_bool; // 0xbff MovT
	var_263_float = var_204_float; // 0xc00 Mov
	var_264_float = 3000.0; // 0xc01 MovF
	var_265_bool = 1; // 0xc02 MovB
	var_266_bool = 0; // 0xc03 MovB
	TaskCall(8); // 0xc04 TaskCall
	func_3676(var_269_bool, var_261_bool, var_262_object, var_263_float, var_264_float, var_265_bool, var_266_bool); // 0xc05 NEW_2
	TaskReturn(); // 0xc06 TaskReturn
	var_338_bool = var_267_bool == 0; // 0xc08 Not
	if(var_338_bool == 0) goto Label_3083; // 0xc09 JumpB
	goto Label_3219; // 0xc0a Jump
	
Label_3219:
	WaitForAnimEnd(); // 0xc93 Func
	var_339_object = var_3_object; // 0xc95 PushT
	if(var_339_object == 0) goto Label_3224; // 0xc96 JumpB
	return 22; // 0xc97 Return
	
Label_3224:
	var_340_string = "all"; // 0xc98 PushS
	var_341_string = "attack_off"; // 0xc99 PushS
	PlayAnimation(var_340_string, var_341_string); // 0xc9a Func
	WaitForAnimEnd(); // 0xc9c Func
	var_342_bool = var_207_bool; // 0xc9e Push
	if(var_342_bool == 0) goto Label_3235; // 0xc9f JumpB
	var_343_float = 2.0; // 0xca0 PushF
	Sleep(var_343_float); // 0xca1 Func
	
Label_3235:
	return 22; // 0xca3 Return
	
Label_3083:
	var_208_bool = 0; // 0xc0b MovB
	goto Label_3218; // 0xc0c Jump
	
Label_3218:
	goto Label_3047; // 0xc92 Jump
	
Label_3085:
	var_344_float = var_192_float * var_192_float; // 0xc0d Mult
	var_345_bool = var_211_float >= var_344_float; // 0xc0e GE
	if(var_345_bool == 0) goto Label_3210; // 0xc0f JumpB
	GetPFPosition(var_212_cvector); // 0xc10 TObjFunc
	CanReachByPF(var_213_bool, var_212_cvector); // 0xc12 Func
	var_346_bool = var_213_bool == 0; // 0xc14 Not
	if(var_346_bool == 0) goto Label_3109; // 0xc15 JumpB
	var_347_bool = 0; var_348_object = Obj(); var_349_float = 0; var_350_float = 0; var_351_bool = 0; var_352_bool = 0; // 0xc16 PushV
	var_348_object = var_0_bool; // 0xc17 MovT
	var_349_float = var_204_float; // 0xc18 Mov
	var_350_float = 3000.0; // 0xc19 MovF
	var_351_bool = 1; // 0xc1a MovB
	var_352_bool = 0; // 0xc1b MovB
	TaskCall(8); // 0xc1c TaskCall
	func_3676(var_355_bool, var_347_bool, var_348_object, var_349_float, var_350_float, var_351_bool, var_352_bool); // 0xc1d NEW_2
	TaskReturn(); // 0xc1e TaskReturn
	var_356_bool = var_353_bool == 0; // 0xc20 Not
	if(var_356_bool == 0) goto Label_3107; // 0xc21 JumpB
	goto Label_3219; // 0xc22 Jump
	
Label_3107:
	var_208_bool = 0; // 0xc23 MovB
	goto Label_3047; // 0xc24 Jump
	
Label_3109:
	var_357_bool = var_208_bool == 0; // 0xc25 Not
	if(var_357_bool == 0) goto Label_3134; // 0xc26 JumpB
	var_358_object = Obj(); // 0xc27 PushV
	var_358_object = var_0_bool; // 0xc28 MovT
	func_4242(); // 0xc29 NEW_2
	var_359_string = "all"; // 0xc2b PushS
	var_360_string = "attack_on"; // 0xc2c PushS
	PlayAnimation(var_359_string, var_360_string); // 0xc2d Func
	WaitForAnimEnd(); // 0xc2f Func
	func_3649(var_214_float); // 0xc32 NEW_2
	StopAsync(); // 0xc34 Func
	var_208_bool = 1; // 0xc36 MovB
	var_361_bool = 0; var_362_object = Obj(); // 0xc37 PushV
	var_362_object = var_0_bool; // 0xc38 MovT
	func_4092(var_361_bool, var_362_object); // 0xc39 NEW_2
	var_363_bool = var_361_bool == 0; // 0xc3b Not
	if(var_363_bool == 0) goto Label_3134; // 0xc3c JumpB
	goto Label_3219; // 0xc3d Jump
	
Label_3134:
	rand(var_214_float); // 0xc3e Func
	var_364_bool = 0; // 0xc40 PushV
	var_364_bool = 1; // 0xc41 MovB
	var_365_float = 0.25; // 0xc42 PushF
	var_366_bool = var_214_float < var_365_float; // 0xc43 LT
	if(var_366_bool == 0) goto Label_3146; // 0xc44 JumpB
	var_367_bool = 0; // 0xc45 PushV
	func_3606(var_364_bool, var_367_bool); // 0xc46 NEW_2
	if(var_367_bool == 0) goto Label_3146; // 0xc48 JumpB
	var_364_bool = 0; // 0xc49 MovB
	
Label_3146:
	if(var_364_bool == 0) goto Label_3163; // 0xc4a JumpB
	Face(var_0_bool); // 0xc4b Func
	func_3656(); // 0xc4e NEW_2
	var_402_string = "all"; // 0xc50 PushS
	var_403_string = "attack_stay"; // 0xc51 PushS
	PlayAnimation(var_402_string, var_403_string); // 0xc52 Func
	var_404_bool = 0; var_405_float = 0; // 0xc54 PushV
	var_405_float = var_192_float; // 0xc55 Mov
	func_3474(var_214_float, var_404_bool, var_405_float); // 0xc56 NEW_2
	StopAsync(); // 0xc58 Func
	goto Label_3209; // 0xc5a Jump
	
Label_3209:
	goto Label_3218; // 0xc89 Jump
	
Label_3163:
	Face(var_0_bool); // 0xc5b Func
	var_619_string = "all"; // 0xc5d PushS
	var_620_string = "fjump"; // 0xc5e PushS
	PlayAnimation(var_619_string, var_620_string); // 0xc5f Func
	WaitForAnimEnd(); // 0xc61 Func
	func_3649(var_214_float); // 0xc64 NEW_2
	var_621_cvector = CVector(0.0, 0.0, 0.0); // 0xc66 PushVec
	SetSpeed(var_621_cvector); // 0xc67 Func
	Stop(); // 0xc69 Func
	StopAsync(); // 0xc6b Func
	var_622_bool = 0; // 0xc6d PushV
	func_3606(var_214_float, var_622_bool); // 0xc6e NEW_2
	var_623_bool = var_622_bool == 0; // 0xc70 Not
	if(var_623_bool == 0) goto Label_3209; // 0xc71 JumpB
	var_624_bool = 0; var_625_object = Obj(); // 0xc72 PushV
	var_625_object = var_0_bool; // 0xc73 MovT
	func_4092(var_624_bool, var_625_object); // 0xc74 NEW_2
	var_626_bool = var_624_bool == 0; // 0xc76 Not
	if(var_626_bool == 0) goto Label_3193; // 0xc77 JumpB
	goto Label_3219; // 0xc78 Jump
	
Label_3193:
	GetPFPosition(var_205_cvector); // 0xc79 TObjFunc
	GetPFPosition(var_206_cvector); // 0xc7b Func
	var_210_cvector = var_205_cvector - var_206_cvector; // 0xc7d Sub2
	var_211_float = var_210_cvector | var_210_cvector; // 0xc7e Or2
	var_627_float = var_192_float * var_192_float; // 0xc7f Mult
	var_628_bool = var_211_float < var_627_float; // 0xc80 LT
	if(var_628_bool == 0) goto Label_3209; // 0xc81 JumpB
	var_629_bool = 0; var_630_float = 0; // 0xc82 PushV
	var_630_float = var_192_float; // 0xc83 Mov
	func_3310(var_214_float, var_629_bool, var_630_float); // 0xc84 NEW_2
	var_631_bool = var_629_bool == 0; // 0xc86 Not
	if(var_631_bool == 0) goto Label_3209; // 0xc87 JumpB
	goto Label_3219; // 0xc88 Jump
	
Label_3210:
	var_632_bool = 0; var_633_float = 0; // 0xc8a PushV
	var_633_float = var_192_float; // 0xc8b Mov
	func_3310(var_214_float, var_632_bool, var_633_float); // 0xc8c NEW_2
	var_634_bool = var_632_bool == 0; // 0xc8e Not
	if(var_634_bool == 0) goto Label_3217; // 0xc8f JumpB
	goto Label_3219; // 0xc90 Jump
	
Label_3217:
	var_208_bool = 1; // 0xc91 MovB
	
Label_3044:
	var_208_bool = 1; // 0xbe4 MovB
	
Label_3021:
	var_204_float = var_192_float; // 0xbcd Mov
}


func_5057(var_20_object)
{
	var_21_object = Obj(); // 0x13c2 PushV
	var_21_object = var_20_object; // 0x13c3 Mov
	TaskCall(3); // 0x13c4 TaskCall
	func_1943(var_21_object); // 0x13c5 NEW_2
	TaskReturn(); // 0x13c6 TaskReturn
	return 0; // 0x13c8 Return
}


func_5572(var_102_object)
{
	var_103_bool = 0; var_104_object = Obj(); // 0x15c5 PushV
	var_104_object = var_102_object; // 0x15c6 Mov
	func_3961(var_103_bool, var_104_object); // 0x15c7 NEW_2
	if(var_103_bool == 0) goto Label_5589; // 0x15c9 JumpB
	var_107_object = Obj(); // 0x15ca PushV
	func_4496(var_107_object); // 0x15cb NEW_2
	var_110_float = -0.07; // 0x15cd PushF
	var_111_bool = 1; // 0x15ce PushB
	ReportReputationChange(var_102_object, var_107_object, var_110_float, var_111_bool); // 0x15cf Func
	var_112_bool = 0; // 0x15d1 PushV
	var_112_bool = 1; // 0x15d2 MovB
	func_4877(var_112_bool); // 0x15d3 NEW_2
	
Label_5589:
	func_4853(); // 0x15d6 NEW_2
	var_246_bool = GlobalVars[0]; // 0x15d8 PushGE
	var_246_bool = 1; // 0x15d9 MovB
	GlobalVars[0] = var_246_bool; // 0x15da PopGE
	var_247_int = 50; // 0x15db PushI
	var_248_int = 40; // 0x15dc PushI
	SetRTEnvelope(var_247_int, var_248_int); // 0x15dd Func
	return 0; // 0x15df Return
}


func_4549(var_69_float, var_70_cvector, var_71_cvector)
{
	var_72_float = 0; var_73_cvector = CVector(0,0,0); var_74_cvector = CVector(0,0,0); // 0x11c6 PushV
	var_73_cvector = var_70_cvector; // 0x11c7 Mov
	var_74_cvector = var_71_cvector; // 0x11c8 Mov
	func_4530(var_72_float, var_73_cvector, var_74_cvector); // 0x11c9 NEW_2
	var_81_float = 0; var_82_cvector = CVector(0,0,0); // 0x11cb PushV
	var_82_cvector = var_70_cvector; // 0x11cc Mov
	func_4539(var_81_float, var_82_cvector); // 0x11cd NEW_2
	var_90_float = 0; var_91_cvector = CVector(0,0,0); // 0x11cf PushV
	var_91_cvector = var_71_cvector; // 0x11d0 Mov
	func_4539(var_90_float, var_91_cvector); // 0x11d1 NEW_2
	var_92_float = var_81_float * var_90_float; // 0x11d3 Mult
	var_69_float = var_72_float / var_72_float; // 0x11d4 Div2
	return 0; // 0x11d5 Return
}


func_4051(var_47_bool)
{
	var_49_bool = 0; var_50_bool = 0; // 0xfd3 PushV
	IsDead(var_50_bool); // 0xfd4 ObjFunc
	var_47_bool = var_50_bool; // 0xfd6 Mov
	return 2; // 0xfd7 Return
}


func_4566(var_126_int, var_127_string)
{
	var_128_int = 0; var_129_int = 0; // 0x11d6 PushV
	GetVariable(var_127_string, var_129_int); // 0x11d7 Func
	var_126_int = var_129_int; // 0x11d9 Mov
	return 2; // 0x11da Return
}


func_4056(var_36_bool, var_37_object)
{
	var_38_object = Obj(); var_39_object = Obj(); var_40_object = Obj(); var_41_object = Obj(); // 0xfd8 PushV
	var_42_bool = var_37_object == 0; // 0xfd9 NullEq
	if(var_42_bool == 0) goto Label_4061; // 0xfda JumpB
	var_36_bool = 0; // 0xfdb MovB
	return 4; // 0xfdc Return
	
Label_4061:
	var_43_bool = 0; // 0xfdd PushV
	var_43_bool = 0; // 0xfde MovB
	var_44_string = "IsDead"; // 0xfdf PushS
	var_45_int = 1; // 0xfe0 PushI
	var_46_bool = IsFuncExist(var_37_object, var_44_string, var_45_int); // 0xfe1 FuncExist
	if(var_46_bool == 0) goto Label_4073; // 0xfe2 JumpB
	var_47_bool = 0; var_48_object = Obj(); // 0xfe3 PushV
	var_48_object = var_37_object; // 0xfe4 Mov
	func_4051(var_48_object); // 0xfe5 NEW_2
	if(var_47_bool == 0) goto Label_4073; // 0xfe7 JumpB
	var_43_bool = 1; // 0xfe8 MovB
	
Label_4073:
	if(var_43_bool == 0) goto Label_4076; // 0xfe9 JumpB
	var_36_bool = 0; // 0xfea MovB
	return 4; // 0xfeb Return
	
Label_4076:
	GetScene(var_40_object); // 0xfec Func
	var_51_bool = var_40_object == 0; // 0xfee NullEq
	if(var_51_bool == 0) goto Label_4082; // 0xfef JumpB
	var_36_bool = 0; // 0xff0 MovB
	return 4; // 0xff1 Return
	
Label_4082:
	GetScene(var_41_object); // 0xff2 ObjFunc
	var_52_bool = var_40_object != var_41_object; // 0xff4 Neq
	if(var_52_bool == 0) goto Label_4088; // 0xff5 JumpB
	var_36_bool = 0; // 0xff6 MovB
	return 4; // 0xff7 Return
	
Label_4088:
	var_36_bool = 1; // 0xff8 MovB
	return 4; // 0xff9 Return
}


func_3545(var_417_bool)
{
	var_418_bool = 0; // 0xdd9 PushV
	var_418_bool = 0; // 0xdda MovB
	var_419_bool = 0; // 0xddb PushV
	func_3517(var_418_bool, var_419_bool); // 0xddc NEW_2
	if(var_419_bool == 0) goto Label_3556; // 0xdde JumpB
	var_436_bool = 0; // 0xddf PushV
	func_3561(var_417_bool, var_418_bool, var_436_bool); // 0xde0 NEW_2
	if(var_436_bool == 0) goto Label_3556; // 0xde2 JumpB
	var_418_bool = 1; // 0xde3 MovB
	
Label_3556:
	if(var_418_bool == 0) goto Label_3559; // 0xde4 JumpB
	var_417_bool = 1; // 0xde5 MovB
	return 0; // 0xde6 Return
	
Label_3559:
	var_417_bool = 0; // 0xde7 MovB
	return 0; // 0xde8 Return
}


func_4571(var_568_float)
{
	var_569_object = Obj(); var_570_object = Obj(); // 0x11db PushV
	CreateFloatVector(var_570_object); // 0x11dc Func
	add(var_568_float); // 0x11de ObjFunc
	var_571_int = 0; // 0x11e0 PushI
	var_572_bool = var_568_float < var_571_int; // 0x11e1 LT
	if(var_572_bool == 0) goto Label_4583; // 0x11e2 JumpB
	var_573_float = 0.7; // 0x11e3 PushF
	var_574_int = 500; // 0x11e4 PushI
	RumblePlay(var_573_float, var_574_int); // 0x11e5 Func
	
Label_4583:
	var_575_int = 15; // 0x11e7 PushI
	SendWorldWndMessage(var_575_int, var_570_object); // 0x11e8 Func
	return 2; // 0x11ea Return
}


func_3561(var_0_bool, var_4_string, var_436_bool)
{
	var_437_object = Obj(); var_438_bool = 0; var_439_float = 0; var_440_cvector = CVector(0,0,0); var_441_cvector = CVector(0,0,0); var_442_object = Obj(); var_443_bool = 0; var_444_float = 0; var_445_cvector = CVector(0,0,0); var_446_cvector = CVector(0,0,0); // 0xde9 PushV
	GetScene(var_442_object); // 0xdea Func
	var_443_bool = 0; // 0xdec MovB
	
Label_3565:
	var_447_cvector = CVector(0,0,0); var_448_object = Obj(); // 0xded PushV
	var_448_object = var_0_bool; // 0xdee MovT
	func_3946(var_448_object); // 0xdef NEW_2
	var_449_int = -var_447_cvector; // 0xdf1 Neg
	FindDirLength(var_444_float, var_449_int, var_444_float); // 0xdf2 Func
	var_450_bool = var_444_float < var_4_string; // 0xdf4 LT
	if(var_450_bool == 0) goto Label_3575; // 0xdf5 JumpB
	goto Label_3603; // 0xdf6 Jump
	
Label_3603:
	var_436_bool = var_443_bool; // 0xe13 Mov
	return 10; // 0xe14 Return
	
Label_3575:
	Face(var_0_bool); // 0xdf7 Func
	var_451_string = "all"; // 0xdf9 PushS
	var_452_string = "bjump"; // 0xdfa PushS
	PlayAnimation(var_451_string, var_452_string); // 0xdfb Func
	GetPFPosition(var_445_cvector); // 0xdfd TObjFunc
	GetPFPosition(var_446_cvector); // 0xdff Func
	WaitForAnimEnd(); // 0xe01 Func
	func_3649(var_446_cvector); // 0xe04 NEW_2
	StopAsync(); // 0xe06 Func
	var_453_cvector = CVector(0.0, 0.0, 0.0); // 0xe08 PushVec
	SetSpeed(var_453_cvector); // 0xe09 Func
	var_443_bool = 1; // 0xe0b MovB
	var_454_bool = 0; // 0xe0c PushV
	func_3517(var_446_cvector, var_454_bool); // 0xe0d NEW_2
	var_455_bool = var_454_bool == 0; // 0xe0f Not
	if(var_455_bool == 0) goto Label_3602; // 0xe10 JumpB
	goto Label_3603; // 0xe11 Jump
	
Label_3602:
	goto Label_3565; // 0xe12 Jump
}


func_4588(var_121_int)
{
	var_122_float = 0; var_123_float = 0; // 0x11ec PushV
	GetGameTime(var_123_float); // 0x11ed Func
	var_124_int = 1; // 0x11ef PushI
	var_125_int = 0; // 0x11f0 PushV
	var_126_int = 24; // 0x11f1 PushI
	var_125_int = var_123_float / var_123_float; // 0x11f2 Div2
	var_121_int = var_124_int + var_125_int; // 0x11f3 Add2
	return 2; // 0x11f4 Return
}


func_5102(var_23_bool, var_24_object, var_25_string)
{
	var_26_string = "unholster"; // 0x13ef PushS
	var_27_bool = var_25_string == var_26_string; // 0x13f0 Eq
	if(var_27_bool == 0) goto Label_5113; // 0x13f1 JumpB
	var_28_bool = 0; var_29_object = Obj(); // 0x13f2 PushV
	var_29_object = var_24_object; // 0x13f3 Mov
	func_5467(var_29_object); // 0x13f4 NEW_2
	var_23_bool = var_28_bool; // 0x13f5 Mov
	return 0; // 0x13f7 Return
	
Label_5113:
	var_30_string = "player_shot"; // 0x13f9 PushS
	var_31_bool = var_25_string == var_30_string; // 0x13fa Eq
	if(var_31_bool == 0) goto Label_5123; // 0x13fb JumpB
	var_32_bool = 0; var_33_object = Obj(); // 0x13fc PushV
	var_33_object = var_24_object; // 0x13fd Mov
	func_5472(var_32_bool, var_33_object); // 0x13fe NEW_2
	var_23_bool = var_32_bool; // 0x13ff Mov
	return 0; // 0x1401 Return
	
Label_5123:
	var_47_string = "battle"; // 0x1403 PushS
	var_48_bool = var_25_string == var_47_string; // 0x1404 Eq
	if(var_48_bool == 0) goto Label_5132; // 0x1405 JumpB
	var_49_bool = 0; var_50_object = Obj(); // 0x1406 PushV
	var_50_object = var_24_object; // 0x1407 Mov
	func_5493(var_50_object); // 0x1408 NEW_2
	var_23_bool = var_49_bool; // 0x1409 Mov
	return 0; // 0x140b Return
	
Label_5132:
	var_23_bool = 0; // 0x140c MovB
	return 0; // 0x140d Return
}


func_4597(var_249_int)
{
	var_250_float = 0; var_251_float = 0; // 0x11f5 PushV
	GetGameTime(var_251_float); // 0x11f6 Func
	var_252_int = 0; // 0x11f8 PushV
	var_252_int = var_251_float; // 0x11f9 Mov
	var_253_int = 24; // 0x11fa PushI
	var_249_int = var_252_int % var_253_int; // 0x11fb Mod2
	return 2; // 0x11fc Return
}


func_4092(var_32_bool, var_33_object)
{
	var_34_int = 0; var_35_int = 0; // 0xffc PushV
	var_36_bool = 0; var_37_object = Obj(); // 0xffd PushV
	var_37_object = var_33_object; // 0xffe Mov
	func_4056(var_36_bool, var_37_object); // 0xfff NEW_2
	var_53_bool = var_36_bool == 0; // 0x1001 Not
	if(var_53_bool == 0) goto Label_4101; // 0x1002 JumpB
	var_32_bool = 0; // 0x1003 MovB
	return 2; // 0x1004 Return
	
Label_4101:
	var_54_bool = 0; var_55_object = Obj(); var_56_string = ""; // 0x1005 PushV
	var_55_object = var_33_object; // 0x1006 Mov
	var_56_string = "noaccess"; // 0x1007 MovS
	func_3966(var_54_bool, var_55_object, var_56_string); // 0x1008 NEW_2
	var_63_bool = var_54_bool == 0; // 0x100a Not
	if(var_63_bool == 0) goto Label_4110; // 0x100b JumpB
	var_32_bool = 1; // 0x100c MovB
	return 2; // 0x100d Return
	
Label_4110:
	var_64_string = "noaccess"; // 0x100e PushS
	GetProperty(var_64_string, var_35_int); // 0x100f ObjFunc
	var_65_int = 0; // 0x1011 PushI
	var_32_bool = var_35_int == var_65_int; // 0x1012 Eq2
	return 2; // 0x1013 Return
}


func_4605(var_22_object)
{
	var_23_bool = 0; var_24_bool = 0; // 0x11fd PushV
	IsPlayerActor(var_22_object, var_24_bool); // 0x11fe Func
	var_25_bool = var_24_bool; // 0x1200 Push
	if(var_25_bool == 0) goto Label_4613; // 0x1201 JumpB
	var_26_string = "attack"; // 0x1202 PushS
	PlayGlobalMusic(var_26_string); // 0x1203 Func
	
Label_4613:
	return 2; // 0x1205 Return
}


