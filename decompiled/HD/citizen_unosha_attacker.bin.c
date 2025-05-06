task_0_event_11(var_0_bool, var_1_int, var_2_object, var_3_object, var_4_object, var_5_string, var_6_bool, var_7_bool, var_8_bool, var_9_bool, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_bool = 0; // 0x1b PushV
	func_5183(var_19_bool); // 0x1c NEW_2
	if(var_19_bool == 0) goto Label_34; // 0x1e JumpB
	lshStopAnimation(); // 0x1f Func
	goto Label_36; // 0x21 Jump
	
Label_36:
	StopTrade(); // 0x24 Func
	var_0_bool = 1; // 0x26 TMovB
	return 0; // 0x27 Return
	
Label_34:
	StopAnimation(); // 0x22 Func
}


task_2_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_int, var_7_int, var_8_bool, var_9_bool, var_10_bool, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_int = 1; // 0x1bf PushI
	if(var_20_int == 0) goto Label_1942; // 0x1c0 JumpB
	func_4173(); // 0x1c2 NEW_2
	var_22_int = 45786; // 0x1c4 PushI
	var_23_bool = var_18_object == var_22_int; // 0x1c5 Eq
	if(var_23_bool == 0) goto Label_727; // 0x1c6 JumpB
	var_24_bool = 0; // 0x1c7 PushV
	var_24_bool = 0; // 0x1c8 MovB
	var_25_bool = 0; var_26_object = Obj(); // 0x1c9 PushV
	var_26_object = var_1_object; // 0x1ca MovT
	func_4326(var_26_object); // 0x1cb NEW_2
	if(var_25_bool == 0) goto Label_468; // 0x1cd JumpB
	var_33_bool = 0; var_34_object = Obj(); // 0x1ce PushV
	var_34_object = var_1_object; // 0x1cf MovT
	func_4358(var_33_bool, var_34_object); // 0x1d0 NEW_2
	if(var_33_bool == 0) goto Label_468; // 0x1d2 JumpB
	var_24_bool = 1; // 0x1d3 MovB
	
Label_468:
	if(var_24_bool == 0) goto Label_494; // 0x1d4 JumpB
	var_44_string = ""; // 0x1d5 PushV
	var_44_string = "Neutral"; // 0x1d6 MovS
	func_424(var_19_bool, var_44_string); // 0x1d7 NEW_2
	var_61_int = 543329; // 0x1d9 PushI
	SetMessage(var_61_int); // 0x1da TObjFunc
	ClearReplies(); // 0x1dc TObjFunc
	var_62_int = 543330; // 0x1de PushI
	var_63_int = 45790; // 0x1df PushI
	var_64_int = 45787; // 0x1e0 PushI
	AddReply(var_62_int, var_63_int, var_64_int); // 0x1e1 TObjFunc
	var_65_int = 543332; // 0x1e3 PushI
	var_66_int = 45790; // 0x1e4 PushI
	var_67_int = 45789; // 0x1e5 PushI
	AddReply(var_65_int, var_66_int, var_67_int); // 0x1e6 TObjFunc
	var_68_int = 543331; // 0x1e8 PushI
	var_69_int = -1; // 0x1e9 PushI
	var_70_int = 45788; // 0x1ea PushI
	AddReply(var_68_int, var_69_int, var_70_int); // 0x1eb TObjFunc
	return 0; // 0x1ed Return
	
Label_494:
	var_71_bool = 0; // 0x1ee PushV
	var_71_bool = 0; // 0x1ef MovB
	var_72_bool = 0; var_73_object = Obj(); // 0x1f0 PushV
	var_73_object = var_1_object; // 0x1f1 MovT
	func_4326(var_73_object); // 0x1f2 NEW_2
	if(var_72_bool == 0) goto Label_508; // 0x1f4 JumpB
	var_74_bool = 0; var_75_object = Obj(); // 0x1f5 PushV
	var_75_object = var_1_object; // 0x1f6 MovT
	func_4358(var_74_bool, var_75_object); // 0x1f7 NEW_2
	var_76_bool = var_74_bool == 0; // 0x1f9 Not
	if(var_76_bool == 0) goto Label_508; // 0x1fa JumpB
	var_71_bool = 1; // 0x1fb MovB
	
Label_508:
	if(var_71_bool == 0) goto Label_524; // 0x1fc JumpB
	var_77_string = ""; // 0x1fd PushV
	var_77_string = "Neutral"; // 0x1fe MovS
	func_424(var_19_bool, var_77_string); // 0x1ff NEW_2
	var_78_int = 543328; // 0x201 PushI
	SetMessage(var_78_int); // 0x202 TObjFunc
	ClearReplies(); // 0x204 TObjFunc
	var_79_int = 543336; // 0x206 PushI
	var_80_int = -1; // 0x207 PushI
	var_81_int = 45794; // 0x208 PushI
	AddReply(var_79_int, var_80_int, var_81_int); // 0x209 TObjFunc
	return 0; // 0x20b Return
	
Label_524:
	var_82_string = ""; // 0x20c PushV
	var_82_string = "Neutral"; // 0x20d MovS
	func_424(var_19_bool, var_82_string); // 0x20e NEW_2
	var_83_int = 537969; // 0x210 PushI
	SetMessage(var_83_int); // 0x211 TObjFunc
	ClearReplies(); // 0x213 TObjFunc
	var_84_bool = 0; // 0x215 PushV
	var_84_bool = 0; // 0x216 MovB
	var_85_bool = 0; var_86_object = Obj(); // 0x217 PushV
	var_86_object = var_1_object; // 0x218 MovT
	func_4338(var_85_bool, var_86_object); // 0x219 NEW_2
	if(var_85_bool == 0) goto Label_546; // 0x21b JumpB
	var_91_bool = 0; var_92_object = Obj(); // 0x21c PushV
	var_92_object = var_1_object; // 0x21d MovT
	func_4314(var_92_object); // 0x21e NEW_2
	if(var_91_bool == 0) goto Label_546; // 0x220 JumpB
	var_84_bool = 1; // 0x221 MovB
	
Label_546:
	if(var_84_bool == 0) goto Label_552; // 0x222 JumpB
	var_97_int = 537970; // 0x223 PushI
	var_98_int = 39833; // 0x224 PushI
	var_99_int = 39832; // 0x225 PushI
	AddReply(var_97_int, var_98_int, var_99_int); // 0x226 TObjFunc
	
Label_552:
	var_100_bool = 0; // 0x228 PushV
	var_100_bool = 0; // 0x229 MovB
	var_101_bool = 0; var_102_object = Obj(); // 0x22a PushV
	var_102_object = var_1_object; // 0x22b MovT
	func_4338(var_101_bool, var_102_object); // 0x22c NEW_2
	if(var_101_bool == 0) goto Label_565; // 0x22e JumpB
	var_103_bool = 0; var_104_object = Obj(); // 0x22f PushV
	var_104_object = var_1_object; // 0x230 MovT
	func_4314(var_104_object); // 0x231 NEW_2
	if(var_103_bool == 0) goto Label_565; // 0x233 JumpB
	var_100_bool = 1; // 0x234 MovB
	
Label_565:
	if(var_100_bool == 0) goto Label_571; // 0x235 JumpB
	var_105_int = 537995; // 0x236 PushI
	var_106_int = 39861; // 0x237 PushI
	var_107_int = 39860; // 0x238 PushI
	AddReply(var_105_int, var_106_int, var_107_int); // 0x239 TObjFunc
	
Label_571:
	var_108_bool = 0; // 0x23b PushV
	var_108_bool = 0; // 0x23c MovB
	var_109_bool = 0; var_110_object = Obj(); // 0x23d PushV
	var_110_object = var_1_object; // 0x23e MovT
	func_4338(var_109_bool, var_110_object); // 0x23f NEW_2
	if(var_109_bool == 0) goto Label_584; // 0x241 JumpB
	var_111_bool = 0; var_112_object = Obj(); // 0x242 PushV
	var_112_object = var_1_object; // 0x243 MovT
	func_4314(var_112_object); // 0x244 NEW_2
	if(var_111_bool == 0) goto Label_584; // 0x246 JumpB
	var_108_bool = 1; // 0x247 MovB
	
Label_584:
	if(var_108_bool == 0) goto Label_590; // 0x248 JumpB
	var_113_int = 538003; // 0x249 PushI
	var_114_int = 39869; // 0x24a PushI
	var_115_int = 39868; // 0x24b PushI
	AddReply(var_113_int, var_114_int, var_115_int); // 0x24c TObjFunc
	
Label_590:
	var_116_bool = 0; // 0x24e PushV
	var_116_bool = 0; // 0x24f MovB
	var_117_bool = 0; var_118_object = Obj(); // 0x250 PushV
	var_118_object = var_1_object; // 0x251 MovT
	func_4338(var_117_bool, var_118_object); // 0x252 NEW_2
	if(var_117_bool == 0) goto Label_603; // 0x254 JumpB
	var_119_bool = 0; var_120_object = Obj(); // 0x255 PushV
	var_120_object = var_1_object; // 0x256 MovT
	func_4314(var_120_object); // 0x257 NEW_2
	if(var_119_bool == 0) goto Label_603; // 0x259 JumpB
	var_116_bool = 1; // 0x25a MovB
	
Label_603:
	if(var_116_bool == 0) goto Label_609; // 0x25b JumpB
	var_121_int = 538012; // 0x25c PushI
	var_122_int = 39878; // 0x25d PushI
	var_123_int = 39877; // 0x25e PushI
	AddReply(var_121_int, var_122_int, var_123_int); // 0x25f TObjFunc
	
Label_609:
	var_124_bool = 0; // 0x261 PushV
	var_124_bool = 0; // 0x262 MovB
	var_125_bool = 0; // 0x263 PushV
	var_125_bool = 0; // 0x264 MovB
	var_126_bool = 0; var_127_object = Obj(); // 0x265 PushV
	var_127_object = var_1_object; // 0x266 MovT
	func_4338(var_126_bool, var_127_object); // 0x267 NEW_2
	if(var_126_bool == 0) goto Label_624; // 0x269 JumpB
	var_128_bool = 0; var_129_object = Obj(); // 0x26a PushV
	var_129_object = var_1_object; // 0x26b MovT
	func_4388(var_128_bool, var_129_object); // 0x26c NEW_2
	if(var_128_bool == 0) goto Label_624; // 0x26e JumpB
	var_125_bool = 1; // 0x26f MovB
	
Label_624:
	if(var_125_bool == 0) goto Label_631; // 0x270 JumpB
	var_139_bool = 0; var_140_object = Obj(); // 0x271 PushV
	var_140_object = var_1_object; // 0x272 MovT
	func_4314(var_140_object); // 0x273 NEW_2
	if(var_139_bool == 0) goto Label_631; // 0x275 JumpB
	var_124_bool = 1; // 0x276 MovB
	
Label_631:
	if(var_124_bool == 0) goto Label_637; // 0x277 JumpB
	var_141_int = 538017; // 0x278 PushI
	var_142_int = 39883; // 0x279 PushI
	var_143_int = 39882; // 0x27a PushI
	AddReply(var_141_int, var_142_int, var_143_int); // 0x27b TObjFunc
	
Label_637:
	var_144_bool = 0; // 0x27d PushV
	var_144_bool = 0; // 0x27e MovB
	var_145_bool = 0; // 0x27f PushV
	var_145_bool = 0; // 0x280 MovB
	var_146_bool = 0; var_147_object = Obj(); // 0x281 PushV
	var_147_object = var_1_object; // 0x282 MovT
	func_4348(var_146_bool, var_147_object); // 0x283 NEW_2
	if(var_146_bool == 0) goto Label_652; // 0x285 JumpB
	var_152_bool = 0; var_153_object = Obj(); // 0x286 PushV
	var_153_object = var_1_object; // 0x287 MovT
	func_4378(var_152_bool, var_153_object); // 0x288 NEW_2
	if(var_152_bool == 0) goto Label_652; // 0x28a JumpB
	var_145_bool = 1; // 0x28b MovB
	
Label_652:
	if(var_145_bool == 0) goto Label_659; // 0x28c JumpB
	var_163_bool = 0; var_164_object = Obj(); // 0x28d PushV
	var_164_object = var_1_object; // 0x28e MovT
	func_4314(var_164_object); // 0x28f NEW_2
	if(var_163_bool == 0) goto Label_659; // 0x291 JumpB
	var_144_bool = 1; // 0x292 MovB
	
Label_659:
	if(var_144_bool == 0) goto Label_665; // 0x293 JumpB
	var_165_int = 538043; // 0x294 PushI
	var_166_int = 39911; // 0x295 PushI
	var_167_int = 39910; // 0x296 PushI
	AddReply(var_165_int, var_166_int, var_167_int); // 0x297 TObjFunc
	
Label_665:
	var_168_bool = 0; // 0x299 PushV
	var_168_bool = 0; // 0x29a MovB
	var_169_bool = 0; // 0x29b PushV
	var_169_bool = 0; // 0x29c MovB
	var_170_bool = 0; var_171_object = Obj(); // 0x29d PushV
	var_171_object = var_1_object; // 0x29e MovT
	func_4368(var_170_bool, var_171_object); // 0x29f NEW_2
	if(var_170_bool == 0) goto Label_680; // 0x2a1 JumpB
	var_176_bool = 0; var_177_object = Obj(); // 0x2a2 PushV
	var_177_object = var_1_object; // 0x2a3 MovT
	func_4378(var_176_bool, var_177_object); // 0x2a4 NEW_2
	if(var_176_bool == 0) goto Label_680; // 0x2a6 JumpB
	var_169_bool = 1; // 0x2a7 MovB
	
Label_680:
	if(var_169_bool == 0) goto Label_687; // 0x2a8 JumpB
	var_178_bool = 0; var_179_object = Obj(); // 0x2a9 PushV
	var_179_object = var_1_object; // 0x2aa MovT
	func_4314(var_179_object); // 0x2ab NEW_2
	if(var_178_bool == 0) goto Label_687; // 0x2ad JumpB
	var_168_bool = 1; // 0x2ae MovB
	
Label_687:
	if(var_168_bool == 0) goto Label_693; // 0x2af JumpB
	var_180_int = 538083; // 0x2b0 PushI
	var_181_int = 39952; // 0x2b1 PushI
	var_182_int = 39951; // 0x2b2 PushI
	AddReply(var_180_int, var_181_int, var_182_int); // 0x2b3 TObjFunc
	
Label_693:
	var_183_bool = 0; // 0x2b5 PushV
	var_183_bool = 0; // 0x2b6 MovB
	var_184_bool = 0; // 0x2b7 PushV
	var_184_bool = 0; // 0x2b8 MovB
	var_185_bool = 0; var_186_object = Obj(); // 0x2b9 PushV
	var_186_object = var_1_object; // 0x2ba MovT
	func_4368(var_185_bool, var_186_object); // 0x2bb NEW_2
	if(var_185_bool == 0) goto Label_708; // 0x2bd JumpB
	var_187_bool = 0; var_188_object = Obj(); // 0x2be PushV
	var_188_object = var_1_object; // 0x2bf MovT
	func_4388(var_187_bool, var_188_object); // 0x2c0 NEW_2
	if(var_187_bool == 0) goto Label_708; // 0x2c2 JumpB
	var_184_bool = 1; // 0x2c3 MovB
	
Label_708:
	if(var_184_bool == 0) goto Label_715; // 0x2c4 JumpB
	var_189_bool = 0; var_190_object = Obj(); // 0x2c5 PushV
	var_190_object = var_1_object; // 0x2c6 MovT
	func_4314(var_190_object); // 0x2c7 NEW_2
	if(var_189_bool == 0) goto Label_715; // 0x2c9 JumpB
	var_183_bool = 1; // 0x2ca MovB
	
Label_715:
	if(var_183_bool == 0) goto Label_721; // 0x2cb JumpB
	var_191_int = 538110; // 0x2cc PushI
	var_192_int = 39980; // 0x2cd PushI
	var_193_int = 39979; // 0x2ce PushI
	AddReply(var_191_int, var_192_int, var_193_int); // 0x2cf TObjFunc
	
Label_721:
	var_194_int = 538126; // 0x2d1 PushI
	var_195_int = -1; // 0x2d2 PushI
	var_196_int = 39997; // 0x2d3 PushI
	AddReply(var_194_int, var_195_int, var_196_int); // 0x2d4 TObjFunc
	return 0; // 0x2d6 Return
	
Label_727:
	var_197_int = 39980; // 0x2d7 PushI
	var_198_bool = var_18_object == var_197_int; // 0x2d8 Eq
	if(var_198_bool == 0) goto Label_755; // 0x2d9 JumpB
	var_199_string = ""; // 0x2da PushV
	var_199_string = "Neutral"; // 0x2db MovS
	func_424(var_19_bool, var_199_string); // 0x2dc NEW_2
	var_200_int = 538111; // 0x2de PushI
	SetMessage(var_200_int); // 0x2df TObjFunc
	ClearReplies(); // 0x2e1 TObjFunc
	var_201_int = 538112; // 0x2e3 PushI
	var_202_int = 39982; // 0x2e4 PushI
	var_203_int = 39981; // 0x2e5 PushI
	AddReply(var_201_int, var_202_int, var_203_int); // 0x2e6 TObjFunc
	var_204_int = 538124; // 0x2e8 PushI
	var_205_int = 39982; // 0x2e9 PushI
	var_206_int = 39994; // 0x2ea PushI
	AddReply(var_204_int, var_205_int, var_206_int); // 0x2eb TObjFunc
	var_207_int = 538125; // 0x2ed PushI
	var_208_int = -1; // 0x2ee PushI
	var_209_int = 39996; // 0x2ef PushI
	AddReply(var_207_int, var_208_int, var_209_int); // 0x2f0 TObjFunc
	return 0; // 0x2f2 Return
	
Label_755:
	var_210_int = 39982; // 0x2f3 PushI
	var_211_bool = var_18_object == var_210_int; // 0x2f4 Eq
	if(var_211_bool == 0) goto Label_778; // 0x2f5 JumpB
	var_212_string = ""; // 0x2f6 PushV
	var_212_string = "Neutral"; // 0x2f7 MovS
	func_424(var_19_bool, var_212_string); // 0x2f8 NEW_2
	var_213_int = 538113; // 0x2fa PushI
	SetMessage(var_213_int); // 0x2fb TObjFunc
	ClearReplies(); // 0x2fd TObjFunc
	var_214_int = 538114; // 0x2ff PushI
	var_215_int = 39984; // 0x300 PushI
	var_216_int = 39983; // 0x301 PushI
	AddReply(var_214_int, var_215_int, var_216_int); // 0x302 TObjFunc
	var_217_int = 538118; // 0x304 PushI
	var_218_int = 39989; // 0x305 PushI
	var_219_int = 39988; // 0x306 PushI
	AddReply(var_217_int, var_218_int, var_219_int); // 0x307 TObjFunc
	return 0; // 0x309 Return
	
Label_778:
	var_220_int = 39989; // 0x30a PushI
	var_221_bool = var_18_object == var_220_int; // 0x30b Eq
	if(var_221_bool == 0) goto Label_796; // 0x30c JumpB
	var_222_string = ""; // 0x30d PushV
	var_222_string = "Neutral"; // 0x30e MovS
	func_424(var_19_bool, var_222_string); // 0x30f NEW_2
	var_223_int = 538119; // 0x311 PushI
	SetMessage(var_223_int); // 0x312 TObjFunc
	ClearReplies(); // 0x314 TObjFunc
	var_224_int = 538120; // 0x316 PushI
	var_225_int = 39991; // 0x317 PushI
	var_226_int = 39990; // 0x318 PushI
	AddReply(var_224_int, var_225_int, var_226_int); // 0x319 TObjFunc
	return 0; // 0x31b Return
	
Label_796:
	var_227_int = 39991; // 0x31c PushI
	var_228_bool = var_18_object == var_227_int; // 0x31d Eq
	if(var_228_bool == 0) goto Label_819; // 0x31e JumpB
	var_229_string = ""; // 0x31f PushV
	var_229_string = "Neutral"; // 0x320 MovS
	func_424(var_19_bool, var_229_string); // 0x321 NEW_2
	var_230_int = 538121; // 0x323 PushI
	SetMessage(var_230_int); // 0x324 TObjFunc
	ClearReplies(); // 0x326 TObjFunc
	var_231_int = 538122; // 0x328 PushI
	var_232_int = -1; // 0x329 PushI
	var_233_int = 39992; // 0x32a PushI
	AddReply(var_231_int, var_232_int, var_233_int); // 0x32b TObjFunc
	var_234_int = 538123; // 0x32d PushI
	var_235_int = -1; // 0x32e PushI
	var_236_int = 39993; // 0x32f PushI
	AddReply(var_234_int, var_235_int, var_236_int); // 0x330 TObjFunc
	return 0; // 0x332 Return
	
Label_819:
	var_237_int = 39984; // 0x333 PushI
	var_238_bool = var_18_object == var_237_int; // 0x334 Eq
	if(var_238_bool == 0) goto Label_842; // 0x335 JumpB
	var_239_string = ""; // 0x336 PushV
	var_239_string = "Neutral"; // 0x337 MovS
	func_424(var_19_bool, var_239_string); // 0x338 NEW_2
	var_240_int = 538115; // 0x33a PushI
	SetMessage(var_240_int); // 0x33b TObjFunc
	ClearReplies(); // 0x33d TObjFunc
	var_241_int = 538116; // 0x33f PushI
	var_242_int = -1; // 0x340 PushI
	var_243_int = 39985; // 0x341 PushI
	AddReply(var_241_int, var_242_int, var_243_int); // 0x342 TObjFunc
	var_244_int = 538117; // 0x344 PushI
	var_245_int = 39991; // 0x345 PushI
	var_246_int = 39986; // 0x346 PushI
	AddReply(var_244_int, var_245_int, var_246_int); // 0x347 TObjFunc
	return 0; // 0x349 Return
	
Label_842:
	var_247_int = 39952; // 0x34a PushI
	var_248_bool = var_18_object == var_247_int; // 0x34b Eq
	if(var_248_bool == 0) goto Label_875; // 0x34c JumpB
	var_249_string = ""; // 0x34d PushV
	var_249_string = "Neutral"; // 0x34e MovS
	func_424(var_19_bool, var_249_string); // 0x34f NEW_2
	var_250_int = 538084; // 0x351 PushI
	SetMessage(var_250_int); // 0x352 TObjFunc
	ClearReplies(); // 0x354 TObjFunc
	var_251_int = 538085; // 0x356 PushI
	var_252_int = 39954; // 0x357 PushI
	var_253_int = 39953; // 0x358 PushI
	AddReply(var_251_int, var_252_int, var_253_int); // 0x359 TObjFunc
	var_254_int = 538094; // 0x35b PushI
	var_255_int = 39963; // 0x35c PushI
	var_256_int = 39962; // 0x35d PushI
	AddReply(var_254_int, var_255_int, var_256_int); // 0x35e TObjFunc
	var_257_int = 538103; // 0x360 PushI
	var_258_int = 39972; // 0x361 PushI
	var_259_int = 39971; // 0x362 PushI
	AddReply(var_257_int, var_258_int, var_259_int); // 0x363 TObjFunc
	var_260_int = 538109; // 0x365 PushI
	var_261_int = -1; // 0x366 PushI
	var_262_int = 39978; // 0x367 PushI
	AddReply(var_260_int, var_261_int, var_262_int); // 0x368 TObjFunc
	return 0; // 0x36a Return
	
Label_875:
	var_263_int = 39972; // 0x36b PushI
	var_264_bool = var_18_object == var_263_int; // 0x36c Eq
	if(var_264_bool == 0) goto Label_898; // 0x36d JumpB
	var_265_string = ""; // 0x36e PushV
	var_265_string = "Neutral"; // 0x36f MovS
	func_424(var_19_bool, var_265_string); // 0x370 NEW_2
	var_266_int = 538104; // 0x372 PushI
	SetMessage(var_266_int); // 0x373 TObjFunc
	ClearReplies(); // 0x375 TObjFunc
	var_267_int = 538105; // 0x377 PushI
	var_268_int = 39974; // 0x378 PushI
	var_269_int = 39973; // 0x379 PushI
	AddReply(var_267_int, var_268_int, var_269_int); // 0x37a TObjFunc
	var_270_int = 538108; // 0x37c PushI
	var_271_int = -1; // 0x37d PushI
	var_272_int = 39977; // 0x37e PushI
	AddReply(var_270_int, var_271_int, var_272_int); // 0x37f TObjFunc
	return 0; // 0x381 Return
	
Label_898:
	var_273_int = 39974; // 0x382 PushI
	var_274_bool = var_18_object == var_273_int; // 0x383 Eq
	if(var_274_bool == 0) goto Label_916; // 0x384 JumpB
	var_275_string = ""; // 0x385 PushV
	var_275_string = "Neutral"; // 0x386 MovS
	func_424(var_19_bool, var_275_string); // 0x387 NEW_2
	var_276_int = 538106; // 0x389 PushI
	SetMessage(var_276_int); // 0x38a TObjFunc
	ClearReplies(); // 0x38c TObjFunc
	var_277_int = 538107; // 0x38e PushI
	var_278_int = 39963; // 0x38f PushI
	var_279_int = 39975; // 0x390 PushI
	AddReply(var_277_int, var_278_int, var_279_int); // 0x391 TObjFunc
	return 0; // 0x393 Return
	
Label_916:
	var_280_int = 39963; // 0x394 PushI
	var_281_bool = var_18_object == var_280_int; // 0x395 Eq
	if(var_281_bool == 0) goto Label_939; // 0x396 JumpB
	var_282_string = ""; // 0x397 PushV
	var_282_string = "Neutral"; // 0x398 MovS
	func_424(var_19_bool, var_282_string); // 0x399 NEW_2
	var_283_int = 538095; // 0x39b PushI
	SetMessage(var_283_int); // 0x39c TObjFunc
	ClearReplies(); // 0x39e TObjFunc
	var_284_int = 538096; // 0x3a0 PushI
	var_285_int = 39965; // 0x3a1 PushI
	var_286_int = 39964; // 0x3a2 PushI
	AddReply(var_284_int, var_285_int, var_286_int); // 0x3a3 TObjFunc
	var_287_int = 538100; // 0x3a5 PushI
	var_288_int = 39969; // 0x3a6 PushI
	var_289_int = 39968; // 0x3a7 PushI
	AddReply(var_287_int, var_288_int, var_289_int); // 0x3a8 TObjFunc
	return 0; // 0x3aa Return
	
Label_939:
	var_290_int = 39969; // 0x3ab PushI
	var_291_bool = var_18_object == var_290_int; // 0x3ac Eq
	if(var_291_bool == 0) goto Label_957; // 0x3ad JumpB
	var_292_string = ""; // 0x3ae PushV
	var_292_string = "Neutral"; // 0x3af MovS
	func_424(var_19_bool, var_292_string); // 0x3b0 NEW_2
	var_293_int = 538101; // 0x3b2 PushI
	SetMessage(var_293_int); // 0x3b3 TObjFunc
	ClearReplies(); // 0x3b5 TObjFunc
	var_294_int = 538102; // 0x3b7 PushI
	var_295_int = -1; // 0x3b8 PushI
	var_296_int = 39970; // 0x3b9 PushI
	AddReply(var_294_int, var_295_int, var_296_int); // 0x3ba TObjFunc
	return 0; // 0x3bc Return
	
Label_957:
	var_297_int = 39965; // 0x3bd PushI
	var_298_bool = var_18_object == var_297_int; // 0x3be Eq
	if(var_298_bool == 0) goto Label_980; // 0x3bf JumpB
	var_299_string = ""; // 0x3c0 PushV
	var_299_string = "Neutral"; // 0x3c1 MovS
	func_424(var_19_bool, var_299_string); // 0x3c2 NEW_2
	var_300_int = 538097; // 0x3c4 PushI
	SetMessage(var_300_int); // 0x3c5 TObjFunc
	ClearReplies(); // 0x3c7 TObjFunc
	var_301_int = 538098; // 0x3c9 PushI
	var_302_int = -1; // 0x3ca PushI
	var_303_int = 39966; // 0x3cb PushI
	AddReply(var_301_int, var_302_int, var_303_int); // 0x3cc TObjFunc
	var_304_int = 538099; // 0x3ce PushI
	var_305_int = -1; // 0x3cf PushI
	var_306_int = 39967; // 0x3d0 PushI
	AddReply(var_304_int, var_305_int, var_306_int); // 0x3d1 TObjFunc
	return 0; // 0x3d3 Return
	
Label_980:
	var_307_int = 39954; // 0x3d4 PushI
	var_308_bool = var_18_object == var_307_int; // 0x3d5 Eq
	if(var_308_bool == 0) goto Label_1003; // 0x3d6 JumpB
	var_309_string = ""; // 0x3d7 PushV
	var_309_string = "Neutral"; // 0x3d8 MovS
	func_424(var_19_bool, var_309_string); // 0x3d9 NEW_2
	var_310_int = 538086; // 0x3db PushI
	SetMessage(var_310_int); // 0x3dc TObjFunc
	ClearReplies(); // 0x3de TObjFunc
	var_311_int = 538087; // 0x3e0 PushI
	var_312_int = 39956; // 0x3e1 PushI
	var_313_int = 39955; // 0x3e2 PushI
	AddReply(var_311_int, var_312_int, var_313_int); // 0x3e3 TObjFunc
	var_314_int = 538093; // 0x3e5 PushI
	var_315_int = -1; // 0x3e6 PushI
	var_316_int = 39961; // 0x3e7 PushI
	AddReply(var_314_int, var_315_int, var_316_int); // 0x3e8 TObjFunc
	return 0; // 0x3ea Return
	
Label_1003:
	var_317_int = 39956; // 0x3eb PushI
	var_318_bool = var_18_object == var_317_int; // 0x3ec Eq
	if(var_318_bool == 0) goto Label_1021; // 0x3ed JumpB
	var_319_string = ""; // 0x3ee PushV
	var_319_string = "Neutral"; // 0x3ef MovS
	func_424(var_19_bool, var_319_string); // 0x3f0 NEW_2
	var_320_int = 538088; // 0x3f2 PushI
	SetMessage(var_320_int); // 0x3f3 TObjFunc
	ClearReplies(); // 0x3f5 TObjFunc
	var_321_int = 538089; // 0x3f7 PushI
	var_322_int = 39958; // 0x3f8 PushI
	var_323_int = 39957; // 0x3f9 PushI
	AddReply(var_321_int, var_322_int, var_323_int); // 0x3fa TObjFunc
	return 0; // 0x3fc Return
	
Label_1021:
	var_324_int = 39958; // 0x3fd PushI
	var_325_bool = var_18_object == var_324_int; // 0x3fe Eq
	if(var_325_bool == 0) goto Label_1044; // 0x3ff JumpB
	var_326_string = ""; // 0x400 PushV
	var_326_string = "Neutral"; // 0x401 MovS
	func_424(var_19_bool, var_326_string); // 0x402 NEW_2
	var_327_int = 538090; // 0x404 PushI
	SetMessage(var_327_int); // 0x405 TObjFunc
	ClearReplies(); // 0x407 TObjFunc
	var_328_int = 538091; // 0x409 PushI
	var_329_int = -1; // 0x40a PushI
	var_330_int = 39959; // 0x40b PushI
	AddReply(var_328_int, var_329_int, var_330_int); // 0x40c TObjFunc
	var_331_int = 538092; // 0x40e PushI
	var_332_int = -1; // 0x40f PushI
	var_333_int = 39960; // 0x410 PushI
	AddReply(var_331_int, var_332_int, var_333_int); // 0x411 TObjFunc
	return 0; // 0x413 Return
	
Label_1044:
	var_334_int = 39911; // 0x414 PushI
	var_335_bool = var_18_object == var_334_int; // 0x415 Eq
	if(var_335_bool == 0) goto Label_1067; // 0x416 JumpB
	var_336_string = ""; // 0x417 PushV
	var_336_string = "Neutral"; // 0x418 MovS
	func_424(var_19_bool, var_336_string); // 0x419 NEW_2
	var_337_int = 538044; // 0x41b PushI
	SetMessage(var_337_int); // 0x41c TObjFunc
	ClearReplies(); // 0x41e TObjFunc
	var_338_int = 538045; // 0x420 PushI
	var_339_int = 39913; // 0x421 PushI
	var_340_int = 39912; // 0x422 PushI
	AddReply(var_338_int, var_339_int, var_340_int); // 0x423 TObjFunc
	var_341_int = 538063; // 0x425 PushI
	var_342_int = 39932; // 0x426 PushI
	var_343_int = 39931; // 0x427 PushI
	AddReply(var_341_int, var_342_int, var_343_int); // 0x428 TObjFunc
	return 0; // 0x42a Return
	
Label_1067:
	var_344_int = 39932; // 0x42b PushI
	var_345_bool = var_18_object == var_344_int; // 0x42c Eq
	if(var_345_bool == 0) goto Label_1085; // 0x42d JumpB
	var_346_string = ""; // 0x42e PushV
	var_346_string = "Neutral"; // 0x42f MovS
	func_424(var_19_bool, var_346_string); // 0x430 NEW_2
	var_347_int = 538064; // 0x432 PushI
	SetMessage(var_347_int); // 0x433 TObjFunc
	ClearReplies(); // 0x435 TObjFunc
	var_348_int = 538065; // 0x437 PushI
	var_349_int = 39934; // 0x438 PushI
	var_350_int = 39933; // 0x439 PushI
	AddReply(var_348_int, var_349_int, var_350_int); // 0x43a TObjFunc
	return 0; // 0x43c Return
	
Label_1085:
	var_351_int = 39934; // 0x43d PushI
	var_352_bool = var_18_object == var_351_int; // 0x43e Eq
	if(var_352_bool == 0) goto Label_1103; // 0x43f JumpB
	var_353_string = ""; // 0x440 PushV
	var_353_string = "Neutral"; // 0x441 MovS
	func_424(var_19_bool, var_353_string); // 0x442 NEW_2
	var_354_int = 538066; // 0x444 PushI
	SetMessage(var_354_int); // 0x445 TObjFunc
	ClearReplies(); // 0x447 TObjFunc
	var_355_int = 538067; // 0x449 PushI
	var_356_int = 39936; // 0x44a PushI
	var_357_int = 39935; // 0x44b PushI
	AddReply(var_355_int, var_356_int, var_357_int); // 0x44c TObjFunc
	return 0; // 0x44e Return
	
Label_1103:
	var_358_int = 39936; // 0x44f PushI
	var_359_bool = var_18_object == var_358_int; // 0x450 Eq
	if(var_359_bool == 0) goto Label_1126; // 0x451 JumpB
	var_360_string = ""; // 0x452 PushV
	var_360_string = "Neutral"; // 0x453 MovS
	func_424(var_19_bool, var_360_string); // 0x454 NEW_2
	var_361_int = 538068; // 0x456 PushI
	SetMessage(var_361_int); // 0x457 TObjFunc
	ClearReplies(); // 0x459 TObjFunc
	var_362_int = 538069; // 0x45b PushI
	var_363_int = 39938; // 0x45c PushI
	var_364_int = 39937; // 0x45d PushI
	AddReply(var_362_int, var_363_int, var_364_int); // 0x45e TObjFunc
	var_365_int = 538075; // 0x460 PushI
	var_366_int = 39944; // 0x461 PushI
	var_367_int = 39943; // 0x462 PushI
	AddReply(var_365_int, var_366_int, var_367_int); // 0x463 TObjFunc
	return 0; // 0x465 Return
	
Label_1126:
	var_368_int = 39944; // 0x466 PushI
	var_369_bool = var_18_object == var_368_int; // 0x467 Eq
	if(var_369_bool == 0) goto Label_1149; // 0x468 JumpB
	var_370_string = ""; // 0x469 PushV
	var_370_string = "Neutral"; // 0x46a MovS
	func_424(var_19_bool, var_370_string); // 0x46b NEW_2
	var_371_int = 538076; // 0x46d PushI
	SetMessage(var_371_int); // 0x46e TObjFunc
	ClearReplies(); // 0x470 TObjFunc
	var_372_int = 538077; // 0x472 PushI
	var_373_int = 39946; // 0x473 PushI
	var_374_int = 39945; // 0x474 PushI
	AddReply(var_372_int, var_373_int, var_374_int); // 0x475 TObjFunc
	var_375_int = 538082; // 0x477 PushI
	var_376_int = -1; // 0x478 PushI
	var_377_int = 39950; // 0x479 PushI
	AddReply(var_375_int, var_376_int, var_377_int); // 0x47a TObjFunc
	return 0; // 0x47c Return
	
Label_1149:
	var_378_int = 39946; // 0x47d PushI
	var_379_bool = var_18_object == var_378_int; // 0x47e Eq
	if(var_379_bool == 0) goto Label_1167; // 0x47f JumpB
	var_380_string = ""; // 0x480 PushV
	var_380_string = "Neutral"; // 0x481 MovS
	func_424(var_19_bool, var_380_string); // 0x482 NEW_2
	var_381_int = 538078; // 0x484 PushI
	SetMessage(var_381_int); // 0x485 TObjFunc
	ClearReplies(); // 0x487 TObjFunc
	var_382_int = 538079; // 0x489 PushI
	var_383_int = 39948; // 0x48a PushI
	var_384_int = 39947; // 0x48b PushI
	AddReply(var_382_int, var_383_int, var_384_int); // 0x48c TObjFunc
	return 0; // 0x48e Return
	
Label_1167:
	var_385_int = 39948; // 0x48f PushI
	var_386_bool = var_18_object == var_385_int; // 0x490 Eq
	if(var_386_bool == 0) goto Label_1185; // 0x491 JumpB
	var_387_string = ""; // 0x492 PushV
	var_387_string = "Neutral"; // 0x493 MovS
	func_424(var_19_bool, var_387_string); // 0x494 NEW_2
	var_388_int = 538080; // 0x496 PushI
	SetMessage(var_388_int); // 0x497 TObjFunc
	ClearReplies(); // 0x499 TObjFunc
	var_389_int = 538081; // 0x49b PushI
	var_390_int = -1; // 0x49c PushI
	var_391_int = 39949; // 0x49d PushI
	AddReply(var_389_int, var_390_int, var_391_int); // 0x49e TObjFunc
	return 0; // 0x4a0 Return
	
Label_1185:
	var_392_int = 39938; // 0x4a1 PushI
	var_393_bool = var_18_object == var_392_int; // 0x4a2 Eq
	if(var_393_bool == 0) goto Label_1208; // 0x4a3 JumpB
	var_394_string = ""; // 0x4a4 PushV
	var_394_string = "Neutral"; // 0x4a5 MovS
	func_424(var_19_bool, var_394_string); // 0x4a6 NEW_2
	var_395_int = 538070; // 0x4a8 PushI
	SetMessage(var_395_int); // 0x4a9 TObjFunc
	ClearReplies(); // 0x4ab TObjFunc
	var_396_int = 538071; // 0x4ad PushI
	var_397_int = 39940; // 0x4ae PushI
	var_398_int = 39939; // 0x4af PushI
	AddReply(var_396_int, var_397_int, var_398_int); // 0x4b0 TObjFunc
	var_399_int = 538074; // 0x4b2 PushI
	var_400_int = -1; // 0x4b3 PushI
	var_401_int = 39942; // 0x4b4 PushI
	AddReply(var_399_int, var_400_int, var_401_int); // 0x4b5 TObjFunc
	return 0; // 0x4b7 Return
	
Label_1208:
	var_402_int = 39940; // 0x4b8 PushI
	var_403_bool = var_18_object == var_402_int; // 0x4b9 Eq
	if(var_403_bool == 0) goto Label_1226; // 0x4ba JumpB
	var_404_string = ""; // 0x4bb PushV
	var_404_string = "Neutral"; // 0x4bc MovS
	func_424(var_19_bool, var_404_string); // 0x4bd NEW_2
	var_405_int = 538072; // 0x4bf PushI
	SetMessage(var_405_int); // 0x4c0 TObjFunc
	ClearReplies(); // 0x4c2 TObjFunc
	var_406_int = 538073; // 0x4c4 PushI
	var_407_int = -1; // 0x4c5 PushI
	var_408_int = 39941; // 0x4c6 PushI
	AddReply(var_406_int, var_407_int, var_408_int); // 0x4c7 TObjFunc
	return 0; // 0x4c9 Return
	
Label_1226:
	var_409_int = 39913; // 0x4ca PushI
	var_410_bool = var_18_object == var_409_int; // 0x4cb Eq
	if(var_410_bool == 0) goto Label_1249; // 0x4cc JumpB
	var_411_string = ""; // 0x4cd PushV
	var_411_string = "Neutral"; // 0x4ce MovS
	func_424(var_19_bool, var_411_string); // 0x4cf NEW_2
	var_412_int = 538046; // 0x4d1 PushI
	SetMessage(var_412_int); // 0x4d2 TObjFunc
	ClearReplies(); // 0x4d4 TObjFunc
	var_413_int = 538047; // 0x4d6 PushI
	var_414_int = 39915; // 0x4d7 PushI
	var_415_int = 39914; // 0x4d8 PushI
	AddReply(var_413_int, var_414_int, var_415_int); // 0x4d9 TObjFunc
	var_416_int = 538060; // 0x4db PushI
	var_417_int = 39928; // 0x4dc PushI
	var_418_int = 39927; // 0x4dd PushI
	AddReply(var_416_int, var_417_int, var_418_int); // 0x4de TObjFunc
	return 0; // 0x4e0 Return
	
Label_1249:
	var_419_int = 39928; // 0x4e1 PushI
	var_420_bool = var_18_object == var_419_int; // 0x4e2 Eq
	if(var_420_bool == 0) goto Label_1267; // 0x4e3 JumpB
	var_421_string = ""; // 0x4e4 PushV
	var_421_string = "Neutral"; // 0x4e5 MovS
	func_424(var_19_bool, var_421_string); // 0x4e6 NEW_2
	var_422_int = 538061; // 0x4e8 PushI
	SetMessage(var_422_int); // 0x4e9 TObjFunc
	ClearReplies(); // 0x4eb TObjFunc
	var_423_int = 538062; // 0x4ed PushI
	var_424_int = 39915; // 0x4ee PushI
	var_425_int = 39929; // 0x4ef PushI
	AddReply(var_423_int, var_424_int, var_425_int); // 0x4f0 TObjFunc
	return 0; // 0x4f2 Return
	
Label_1267:
	var_426_int = 39915; // 0x4f3 PushI
	var_427_bool = var_18_object == var_426_int; // 0x4f4 Eq
	if(var_427_bool == 0) goto Label_1290; // 0x4f5 JumpB
	var_428_string = ""; // 0x4f6 PushV
	var_428_string = "Neutral"; // 0x4f7 MovS
	func_424(var_19_bool, var_428_string); // 0x4f8 NEW_2
	var_429_int = 538048; // 0x4fa PushI
	SetMessage(var_429_int); // 0x4fb TObjFunc
	ClearReplies(); // 0x4fd TObjFunc
	var_430_int = 538049; // 0x4ff PushI
	var_431_int = 39917; // 0x500 PushI
	var_432_int = 39916; // 0x501 PushI
	AddReply(var_430_int, var_431_int, var_432_int); // 0x502 TObjFunc
	var_433_int = 538057; // 0x504 PushI
	var_434_int = 39925; // 0x505 PushI
	var_435_int = 39924; // 0x506 PushI
	AddReply(var_433_int, var_434_int, var_435_int); // 0x507 TObjFunc
	return 0; // 0x509 Return
	
Label_1290:
	var_436_int = 39925; // 0x50a PushI
	var_437_bool = var_18_object == var_436_int; // 0x50b Eq
	if(var_437_bool == 0) goto Label_1308; // 0x50c JumpB
	var_438_string = ""; // 0x50d PushV
	var_438_string = "Neutral"; // 0x50e MovS
	func_424(var_19_bool, var_438_string); // 0x50f NEW_2
	var_439_int = 538058; // 0x511 PushI
	SetMessage(var_439_int); // 0x512 TObjFunc
	ClearReplies(); // 0x514 TObjFunc
	var_440_int = 538059; // 0x516 PushI
	var_441_int = -1; // 0x517 PushI
	var_442_int = 39926; // 0x518 PushI
	AddReply(var_440_int, var_441_int, var_442_int); // 0x519 TObjFunc
	return 0; // 0x51b Return
	
Label_1308:
	var_443_int = 39917; // 0x51c PushI
	var_444_bool = var_18_object == var_443_int; // 0x51d Eq
	if(var_444_bool == 0) goto Label_1331; // 0x51e JumpB
	var_445_string = ""; // 0x51f PushV
	var_445_string = "Neutral"; // 0x520 MovS
	func_424(var_19_bool, var_445_string); // 0x521 NEW_2
	var_446_int = 538050; // 0x523 PushI
	SetMessage(var_446_int); // 0x524 TObjFunc
	ClearReplies(); // 0x526 TObjFunc
	var_447_int = 538051; // 0x528 PushI
	var_448_int = 39919; // 0x529 PushI
	var_449_int = 39918; // 0x52a PushI
	AddReply(var_447_int, var_448_int, var_449_int); // 0x52b TObjFunc
	var_450_int = 538056; // 0x52d PushI
	var_451_int = -1; // 0x52e PushI
	var_452_int = 39923; // 0x52f PushI
	AddReply(var_450_int, var_451_int, var_452_int); // 0x530 TObjFunc
	return 0; // 0x532 Return
	
Label_1331:
	var_453_int = 39919; // 0x533 PushI
	var_454_bool = var_18_object == var_453_int; // 0x534 Eq
	if(var_454_bool == 0) goto Label_1349; // 0x535 JumpB
	var_455_string = ""; // 0x536 PushV
	var_455_string = "Neutral"; // 0x537 MovS
	func_424(var_19_bool, var_455_string); // 0x538 NEW_2
	var_456_int = 538052; // 0x53a PushI
	SetMessage(var_456_int); // 0x53b TObjFunc
	ClearReplies(); // 0x53d TObjFunc
	var_457_int = 538053; // 0x53f PushI
	var_458_int = 39921; // 0x540 PushI
	var_459_int = 39920; // 0x541 PushI
	AddReply(var_457_int, var_458_int, var_459_int); // 0x542 TObjFunc
	return 0; // 0x544 Return
	
Label_1349:
	var_460_int = 39921; // 0x545 PushI
	var_461_bool = var_18_object == var_460_int; // 0x546 Eq
	if(var_461_bool == 0) goto Label_1367; // 0x547 JumpB
	var_462_string = ""; // 0x548 PushV
	var_462_string = "Neutral"; // 0x549 MovS
	func_424(var_19_bool, var_462_string); // 0x54a NEW_2
	var_463_int = 538054; // 0x54c PushI
	SetMessage(var_463_int); // 0x54d TObjFunc
	ClearReplies(); // 0x54f TObjFunc
	var_464_int = 538055; // 0x551 PushI
	var_465_int = -1; // 0x552 PushI
	var_466_int = 39922; // 0x553 PushI
	AddReply(var_464_int, var_465_int, var_466_int); // 0x554 TObjFunc
	return 0; // 0x556 Return
	
Label_1367:
	var_467_int = 39883; // 0x557 PushI
	var_468_bool = var_18_object == var_467_int; // 0x558 Eq
	if(var_468_bool == 0) goto Label_1400; // 0x559 JumpB
	var_469_string = ""; // 0x55a PushV
	var_469_string = "Neutral"; // 0x55b MovS
	func_424(var_19_bool, var_469_string); // 0x55c NEW_2
	var_470_int = 538018; // 0x55e PushI
	SetMessage(var_470_int); // 0x55f TObjFunc
	ClearReplies(); // 0x561 TObjFunc
	var_471_int = 538019; // 0x563 PushI
	var_472_int = 39885; // 0x564 PushI
	var_473_int = 39884; // 0x565 PushI
	AddReply(var_471_int, var_472_int, var_473_int); // 0x566 TObjFunc
	var_474_int = 538030; // 0x568 PushI
	var_475_int = 39897; // 0x569 PushI
	var_476_int = 39896; // 0x56a PushI
	AddReply(var_474_int, var_475_int, var_476_int); // 0x56b TObjFunc
	var_477_int = 538039; // 0x56d PushI
	var_478_int = 39907; // 0x56e PushI
	var_479_int = 39906; // 0x56f PushI
	AddReply(var_477_int, var_478_int, var_479_int); // 0x570 TObjFunc
	var_480_int = 538042; // 0x572 PushI
	var_481_int = -1; // 0x573 PushI
	var_482_int = 39909; // 0x574 PushI
	AddReply(var_480_int, var_481_int, var_482_int); // 0x575 TObjFunc
	return 0; // 0x577 Return
	
Label_1400:
	var_483_int = 39907; // 0x578 PushI
	var_484_bool = var_18_object == var_483_int; // 0x579 Eq
	if(var_484_bool == 0) goto Label_1418; // 0x57a JumpB
	var_485_string = ""; // 0x57b PushV
	var_485_string = "Neutral"; // 0x57c MovS
	func_424(var_19_bool, var_485_string); // 0x57d NEW_2
	var_486_int = 538040; // 0x57f PushI
	SetMessage(var_486_int); // 0x580 TObjFunc
	ClearReplies(); // 0x582 TObjFunc
	var_487_int = 538041; // 0x584 PushI
	var_488_int = -1; // 0x585 PushI
	var_489_int = 39908; // 0x586 PushI
	AddReply(var_487_int, var_488_int, var_489_int); // 0x587 TObjFunc
	return 0; // 0x589 Return
	
Label_1418:
	var_490_int = 39897; // 0x58a PushI
	var_491_bool = var_18_object == var_490_int; // 0x58b Eq
	if(var_491_bool == 0) goto Label_1441; // 0x58c JumpB
	var_492_string = ""; // 0x58d PushV
	var_492_string = "Neutral"; // 0x58e MovS
	func_424(var_19_bool, var_492_string); // 0x58f NEW_2
	var_493_int = 538031; // 0x591 PushI
	SetMessage(var_493_int); // 0x592 TObjFunc
	ClearReplies(); // 0x594 TObjFunc
	var_494_int = 538032; // 0x596 PushI
	var_495_int = 39899; // 0x597 PushI
	var_496_int = 39898; // 0x598 PushI
	AddReply(var_494_int, var_495_int, var_496_int); // 0x599 TObjFunc
	var_497_int = 538038; // 0x59b PushI
	var_498_int = 39899; // 0x59c PushI
	var_499_int = 39904; // 0x59d PushI
	AddReply(var_497_int, var_498_int, var_499_int); // 0x59e TObjFunc
	return 0; // 0x5a0 Return
	
Label_1441:
	var_500_int = 39899; // 0x5a1 PushI
	var_501_bool = var_18_object == var_500_int; // 0x5a2 Eq
	if(var_501_bool == 0) goto Label_1464; // 0x5a3 JumpB
	var_502_string = ""; // 0x5a4 PushV
	var_502_string = "Neutral"; // 0x5a5 MovS
	func_424(var_19_bool, var_502_string); // 0x5a6 NEW_2
	var_503_int = 538033; // 0x5a8 PushI
	SetMessage(var_503_int); // 0x5a9 TObjFunc
	ClearReplies(); // 0x5ab TObjFunc
	var_504_int = 538034; // 0x5ad PushI
	var_505_int = 39901; // 0x5ae PushI
	var_506_int = 39900; // 0x5af PushI
	AddReply(var_504_int, var_505_int, var_506_int); // 0x5b0 TObjFunc
	var_507_int = 538037; // 0x5b2 PushI
	var_508_int = -1; // 0x5b3 PushI
	var_509_int = 39903; // 0x5b4 PushI
	AddReply(var_507_int, var_508_int, var_509_int); // 0x5b5 TObjFunc
	return 0; // 0x5b7 Return
	
Label_1464:
	var_510_int = 39901; // 0x5b8 PushI
	var_511_bool = var_18_object == var_510_int; // 0x5b9 Eq
	if(var_511_bool == 0) goto Label_1482; // 0x5ba JumpB
	var_512_string = ""; // 0x5bb PushV
	var_512_string = "Neutral"; // 0x5bc MovS
	func_424(var_19_bool, var_512_string); // 0x5bd NEW_2
	var_513_int = 538035; // 0x5bf PushI
	SetMessage(var_513_int); // 0x5c0 TObjFunc
	ClearReplies(); // 0x5c2 TObjFunc
	var_514_int = 538036; // 0x5c4 PushI
	var_515_int = -1; // 0x5c5 PushI
	var_516_int = 39902; // 0x5c6 PushI
	AddReply(var_514_int, var_515_int, var_516_int); // 0x5c7 TObjFunc
	return 0; // 0x5c9 Return
	
Label_1482:
	var_517_int = 39885; // 0x5ca PushI
	var_518_bool = var_18_object == var_517_int; // 0x5cb Eq
	if(var_518_bool == 0) goto Label_1505; // 0x5cc JumpB
	var_519_string = ""; // 0x5cd PushV
	var_519_string = "Neutral"; // 0x5ce MovS
	func_424(var_19_bool, var_519_string); // 0x5cf NEW_2
	var_520_int = 538020; // 0x5d1 PushI
	SetMessage(var_520_int); // 0x5d2 TObjFunc
	ClearReplies(); // 0x5d4 TObjFunc
	var_521_int = 538021; // 0x5d6 PushI
	var_522_int = 39887; // 0x5d7 PushI
	var_523_int = 39886; // 0x5d8 PushI
	AddReply(var_521_int, var_522_int, var_523_int); // 0x5d9 TObjFunc
	var_524_int = 538027; // 0x5db PushI
	var_525_int = 39894; // 0x5dc PushI
	var_526_int = 39893; // 0x5dd PushI
	AddReply(var_524_int, var_525_int, var_526_int); // 0x5de TObjFunc
	return 0; // 0x5e0 Return
	
Label_1505:
	var_527_int = 39894; // 0x5e1 PushI
	var_528_bool = var_18_object == var_527_int; // 0x5e2 Eq
	if(var_528_bool == 0) goto Label_1523; // 0x5e3 JumpB
	var_529_string = ""; // 0x5e4 PushV
	var_529_string = "Neutral"; // 0x5e5 MovS
	func_424(var_19_bool, var_529_string); // 0x5e6 NEW_2
	var_530_int = 538028; // 0x5e8 PushI
	SetMessage(var_530_int); // 0x5e9 TObjFunc
	ClearReplies(); // 0x5eb TObjFunc
	var_531_int = 538029; // 0x5ed PushI
	var_532_int = -1; // 0x5ee PushI
	var_533_int = 39895; // 0x5ef PushI
	AddReply(var_531_int, var_532_int, var_533_int); // 0x5f0 TObjFunc
	return 0; // 0x5f2 Return
	
Label_1523:
	var_534_int = 39887; // 0x5f3 PushI
	var_535_bool = var_18_object == var_534_int; // 0x5f4 Eq
	if(var_535_bool == 0) goto Label_1546; // 0x5f5 JumpB
	var_536_string = ""; // 0x5f6 PushV
	var_536_string = "Neutral"; // 0x5f7 MovS
	func_424(var_19_bool, var_536_string); // 0x5f8 NEW_2
	var_537_int = 538022; // 0x5fa PushI
	SetMessage(var_537_int); // 0x5fb TObjFunc
	ClearReplies(); // 0x5fd TObjFunc
	var_538_int = 538023; // 0x5ff PushI
	var_539_int = 39889; // 0x600 PushI
	var_540_int = 39888; // 0x601 PushI
	AddReply(var_538_int, var_539_int, var_540_int); // 0x602 TObjFunc
	var_541_int = 538026; // 0x604 PushI
	var_542_int = 39889; // 0x605 PushI
	var_543_int = 39891; // 0x606 PushI
	AddReply(var_541_int, var_542_int, var_543_int); // 0x607 TObjFunc
	return 0; // 0x609 Return
	
Label_1546:
	var_544_int = 39889; // 0x60a PushI
	var_545_bool = var_18_object == var_544_int; // 0x60b Eq
	if(var_545_bool == 0) goto Label_1564; // 0x60c JumpB
	var_546_string = ""; // 0x60d PushV
	var_546_string = "Neutral"; // 0x60e MovS
	func_424(var_19_bool, var_546_string); // 0x60f NEW_2
	var_547_int = 538024; // 0x611 PushI
	SetMessage(var_547_int); // 0x612 TObjFunc
	ClearReplies(); // 0x614 TObjFunc
	var_548_int = 538025; // 0x616 PushI
	var_549_int = -1; // 0x617 PushI
	var_550_int = 39890; // 0x618 PushI
	AddReply(var_548_int, var_549_int, var_550_int); // 0x619 TObjFunc
	return 0; // 0x61b Return
	
Label_1564:
	var_551_int = 39878; // 0x61c PushI
	var_552_bool = var_18_object == var_551_int; // 0x61d Eq
	if(var_552_bool == 0) goto Label_1582; // 0x61e JumpB
	var_553_string = ""; // 0x61f PushV
	var_553_string = "Neutral"; // 0x620 MovS
	func_424(var_19_bool, var_553_string); // 0x621 NEW_2
	var_554_int = 538013; // 0x623 PushI
	SetMessage(var_554_int); // 0x624 TObjFunc
	ClearReplies(); // 0x626 TObjFunc
	var_555_int = 538014; // 0x628 PushI
	var_556_int = 39880; // 0x629 PushI
	var_557_int = 39879; // 0x62a PushI
	AddReply(var_555_int, var_556_int, var_557_int); // 0x62b TObjFunc
	return 0; // 0x62d Return
	
Label_1582:
	var_558_int = 39880; // 0x62e PushI
	var_559_bool = var_18_object == var_558_int; // 0x62f Eq
	if(var_559_bool == 0) goto Label_1600; // 0x630 JumpB
	var_560_string = ""; // 0x631 PushV
	var_560_string = "Neutral"; // 0x632 MovS
	func_424(var_19_bool, var_560_string); // 0x633 NEW_2
	var_561_int = 538015; // 0x635 PushI
	SetMessage(var_561_int); // 0x636 TObjFunc
	ClearReplies(); // 0x638 TObjFunc
	var_562_int = 538016; // 0x63a PushI
	var_563_int = -1; // 0x63b PushI
	var_564_int = 39881; // 0x63c PushI
	AddReply(var_562_int, var_563_int, var_564_int); // 0x63d TObjFunc
	return 0; // 0x63f Return
	
Label_1600:
	var_565_int = 39869; // 0x640 PushI
	var_566_bool = var_18_object == var_565_int; // 0x641 Eq
	if(var_566_bool == 0) goto Label_1623; // 0x642 JumpB
	var_567_string = ""; // 0x643 PushV
	var_567_string = "Neutral"; // 0x644 MovS
	func_424(var_19_bool, var_567_string); // 0x645 NEW_2
	var_568_int = 538004; // 0x647 PushI
	SetMessage(var_568_int); // 0x648 TObjFunc
	ClearReplies(); // 0x64a TObjFunc
	var_569_int = 538005; // 0x64c PushI
	var_570_int = 39871; // 0x64d PushI
	var_571_int = 39870; // 0x64e PushI
	AddReply(var_569_int, var_570_int, var_571_int); // 0x64f TObjFunc
	var_572_int = 538011; // 0x651 PushI
	var_573_int = -1; // 0x652 PushI
	var_574_int = 39876; // 0x653 PushI
	AddReply(var_572_int, var_573_int, var_574_int); // 0x654 TObjFunc
	return 0; // 0x656 Return
	
Label_1623:
	var_575_int = 39871; // 0x657 PushI
	var_576_bool = var_18_object == var_575_int; // 0x658 Eq
	if(var_576_bool == 0) goto Label_1641; // 0x659 JumpB
	var_577_string = ""; // 0x65a PushV
	var_577_string = "Neutral"; // 0x65b MovS
	func_424(var_19_bool, var_577_string); // 0x65c NEW_2
	var_578_int = 538006; // 0x65e PushI
	SetMessage(var_578_int); // 0x65f TObjFunc
	ClearReplies(); // 0x661 TObjFunc
	var_579_int = 538007; // 0x663 PushI
	var_580_int = 39873; // 0x664 PushI
	var_581_int = 39872; // 0x665 PushI
	AddReply(var_579_int, var_580_int, var_581_int); // 0x666 TObjFunc
	return 0; // 0x668 Return
	
Label_1641:
	var_582_int = 39873; // 0x669 PushI
	var_583_bool = var_18_object == var_582_int; // 0x66a Eq
	if(var_583_bool == 0) goto Label_1664; // 0x66b JumpB
	var_584_string = ""; // 0x66c PushV
	var_584_string = "Neutral"; // 0x66d MovS
	func_424(var_19_bool, var_584_string); // 0x66e NEW_2
	var_585_int = 538008; // 0x670 PushI
	SetMessage(var_585_int); // 0x671 TObjFunc
	ClearReplies(); // 0x673 TObjFunc
	var_586_int = 538009; // 0x675 PushI
	var_587_int = -1; // 0x676 PushI
	var_588_int = 39874; // 0x677 PushI
	AddReply(var_586_int, var_587_int, var_588_int); // 0x678 TObjFunc
	var_589_int = 538010; // 0x67a PushI
	var_590_int = -1; // 0x67b PushI
	var_591_int = 39875; // 0x67c PushI
	AddReply(var_589_int, var_590_int, var_591_int); // 0x67d TObjFunc
	return 0; // 0x67f Return
	
Label_1664:
	var_592_int = 39861; // 0x680 PushI
	var_593_bool = var_18_object == var_592_int; // 0x681 Eq
	if(var_593_bool == 0) goto Label_1682; // 0x682 JumpB
	var_594_string = ""; // 0x683 PushV
	var_594_string = "Neutral"; // 0x684 MovS
	func_424(var_19_bool, var_594_string); // 0x685 NEW_2
	var_595_int = 537996; // 0x687 PushI
	SetMessage(var_595_int); // 0x688 TObjFunc
	ClearReplies(); // 0x68a TObjFunc
	var_596_int = 537997; // 0x68c PushI
	var_597_int = 39863; // 0x68d PushI
	var_598_int = 39862; // 0x68e PushI
	AddReply(var_596_int, var_597_int, var_598_int); // 0x68f TObjFunc
	return 0; // 0x691 Return
	
Label_1682:
	var_599_int = 39863; // 0x692 PushI
	var_600_bool = var_18_object == var_599_int; // 0x693 Eq
	if(var_600_bool == 0) goto Label_1705; // 0x694 JumpB
	var_601_string = ""; // 0x695 PushV
	var_601_string = "Neutral"; // 0x696 MovS
	func_424(var_19_bool, var_601_string); // 0x697 NEW_2
	var_602_int = 537998; // 0x699 PushI
	SetMessage(var_602_int); // 0x69a TObjFunc
	ClearReplies(); // 0x69c TObjFunc
	var_603_int = 537999; // 0x69e PushI
	var_604_int = 39865; // 0x69f PushI
	var_605_int = 39864; // 0x6a0 PushI
	AddReply(var_603_int, var_604_int, var_605_int); // 0x6a1 TObjFunc
	var_606_int = 538002; // 0x6a3 PushI
	var_607_int = -1; // 0x6a4 PushI
	var_608_int = 39867; // 0x6a5 PushI
	AddReply(var_606_int, var_607_int, var_608_int); // 0x6a6 TObjFunc
	return 0; // 0x6a8 Return
	
Label_1705:
	var_609_int = 39865; // 0x6a9 PushI
	var_610_bool = var_18_object == var_609_int; // 0x6aa Eq
	if(var_610_bool == 0) goto Label_1723; // 0x6ab JumpB
	var_611_string = ""; // 0x6ac PushV
	var_611_string = "Neutral"; // 0x6ad MovS
	func_424(var_19_bool, var_611_string); // 0x6ae NEW_2
	var_612_int = 538000; // 0x6b0 PushI
	SetMessage(var_612_int); // 0x6b1 TObjFunc
	ClearReplies(); // 0x6b3 TObjFunc
	var_613_int = 538001; // 0x6b5 PushI
	var_614_int = -1; // 0x6b6 PushI
	var_615_int = 39866; // 0x6b7 PushI
	AddReply(var_613_int, var_614_int, var_615_int); // 0x6b8 TObjFunc
	return 0; // 0x6ba Return
	
Label_1723:
	var_616_int = 39833; // 0x6bb PushI
	var_617_bool = var_18_object == var_616_int; // 0x6bc Eq
	if(var_617_bool == 0) goto Label_1756; // 0x6bd JumpB
	var_618_string = ""; // 0x6be PushV
	var_618_string = "Neutral"; // 0x6bf MovS
	func_424(var_19_bool, var_618_string); // 0x6c0 NEW_2
	var_619_int = 537971; // 0x6c2 PushI
	SetMessage(var_619_int); // 0x6c3 TObjFunc
	ClearReplies(); // 0x6c5 TObjFunc
	var_620_int = 537972; // 0x6c7 PushI
	var_621_int = 39835; // 0x6c8 PushI
	var_622_int = 39834; // 0x6c9 PushI
	AddReply(var_620_int, var_621_int, var_622_int); // 0x6ca TObjFunc
	var_623_int = 537976; // 0x6cc PushI
	var_624_int = 39840; // 0x6cd PushI
	var_625_int = 39839; // 0x6ce PushI
	AddReply(var_623_int, var_624_int, var_625_int); // 0x6cf TObjFunc
	var_626_int = 537988; // 0x6d1 PushI
	var_627_int = 39852; // 0x6d2 PushI
	var_628_int = 39851; // 0x6d3 PushI
	AddReply(var_626_int, var_627_int, var_628_int); // 0x6d4 TObjFunc
	var_629_int = 537994; // 0x6d6 PushI
	var_630_int = -1; // 0x6d7 PushI
	var_631_int = 39859; // 0x6d8 PushI
	AddReply(var_629_int, var_630_int, var_631_int); // 0x6d9 TObjFunc
	return 0; // 0x6db Return
	
Label_1756:
	var_632_int = 39852; // 0x6dc PushI
	var_633_bool = var_18_object == var_632_int; // 0x6dd Eq
	if(var_633_bool == 0) goto Label_1779; // 0x6de JumpB
	var_634_string = ""; // 0x6df PushV
	var_634_string = "Neutral"; // 0x6e0 MovS
	func_424(var_19_bool, var_634_string); // 0x6e1 NEW_2
	var_635_int = 537989; // 0x6e3 PushI
	SetMessage(var_635_int); // 0x6e4 TObjFunc
	ClearReplies(); // 0x6e6 TObjFunc
	var_636_int = 537990; // 0x6e8 PushI
	var_637_int = 39835; // 0x6e9 PushI
	var_638_int = 39853; // 0x6ea PushI
	AddReply(var_636_int, var_637_int, var_638_int); // 0x6eb TObjFunc
	var_639_int = 537991; // 0x6ed PushI
	var_640_int = 39856; // 0x6ee PushI
	var_641_int = 39855; // 0x6ef PushI
	AddReply(var_639_int, var_640_int, var_641_int); // 0x6f0 TObjFunc
	return 0; // 0x6f2 Return
	
Label_1779:
	var_642_int = 39856; // 0x6f3 PushI
	var_643_bool = var_18_object == var_642_int; // 0x6f4 Eq
	if(var_643_bool == 0) goto Label_1797; // 0x6f5 JumpB
	var_644_string = ""; // 0x6f6 PushV
	var_644_string = "Neutral"; // 0x6f7 MovS
	func_424(var_19_bool, var_644_string); // 0x6f8 NEW_2
	var_645_int = 537992; // 0x6fa PushI
	SetMessage(var_645_int); // 0x6fb TObjFunc
	ClearReplies(); // 0x6fd TObjFunc
	var_646_int = 537993; // 0x6ff PushI
	var_647_int = 39840; // 0x700 PushI
	var_648_int = 39857; // 0x701 PushI
	AddReply(var_646_int, var_647_int, var_648_int); // 0x702 TObjFunc
	return 0; // 0x704 Return
	
Label_1797:
	var_649_int = 39840; // 0x705 PushI
	var_650_bool = var_18_object == var_649_int; // 0x706 Eq
	if(var_650_bool == 0) goto Label_1820; // 0x707 JumpB
	var_651_string = ""; // 0x708 PushV
	var_651_string = "Neutral"; // 0x709 MovS
	func_424(var_19_bool, var_651_string); // 0x70a NEW_2
	var_652_int = 537977; // 0x70c PushI
	SetMessage(var_652_int); // 0x70d TObjFunc
	ClearReplies(); // 0x70f TObjFunc
	var_653_int = 537978; // 0x711 PushI
	var_654_int = 39842; // 0x712 PushI
	var_655_int = 39841; // 0x713 PushI
	AddReply(var_653_int, var_654_int, var_655_int); // 0x714 TObjFunc
	var_656_int = 537987; // 0x716 PushI
	var_657_int = -1; // 0x717 PushI
	var_658_int = 39850; // 0x718 PushI
	AddReply(var_656_int, var_657_int, var_658_int); // 0x719 TObjFunc
	return 0; // 0x71b Return
	
Label_1820:
	var_659_int = 39842; // 0x71c PushI
	var_660_bool = var_18_object == var_659_int; // 0x71d Eq
	if(var_660_bool == 0) goto Label_1843; // 0x71e JumpB
	var_661_string = ""; // 0x71f PushV
	var_661_string = "Neutral"; // 0x720 MovS
	func_424(var_19_bool, var_661_string); // 0x721 NEW_2
	var_662_int = 537979; // 0x723 PushI
	SetMessage(var_662_int); // 0x724 TObjFunc
	ClearReplies(); // 0x726 TObjFunc
	var_663_int = 537980; // 0x728 PushI
	var_664_int = 39844; // 0x729 PushI
	var_665_int = 39843; // 0x72a PushI
	AddReply(var_663_int, var_664_int, var_665_int); // 0x72b TObjFunc
	var_666_int = 537986; // 0x72d PushI
	var_667_int = -1; // 0x72e PushI
	var_668_int = 39849; // 0x72f PushI
	AddReply(var_666_int, var_667_int, var_668_int); // 0x730 TObjFunc
	return 0; // 0x732 Return
	
Label_1843:
	var_669_int = 39844; // 0x733 PushI
	var_670_bool = var_18_object == var_669_int; // 0x734 Eq
	if(var_670_bool == 0) goto Label_1866; // 0x735 JumpB
	var_671_string = ""; // 0x736 PushV
	var_671_string = "Neutral"; // 0x737 MovS
	func_424(var_19_bool, var_671_string); // 0x738 NEW_2
	var_672_int = 537981; // 0x73a PushI
	SetMessage(var_672_int); // 0x73b TObjFunc
	ClearReplies(); // 0x73d TObjFunc
	var_673_int = 537982; // 0x73f PushI
	var_674_int = 39846; // 0x740 PushI
	var_675_int = 39845; // 0x741 PushI
	AddReply(var_673_int, var_674_int, var_675_int); // 0x742 TObjFunc
	var_676_int = 537985; // 0x744 PushI
	var_677_int = -1; // 0x745 PushI
	var_678_int = 39848; // 0x746 PushI
	AddReply(var_676_int, var_677_int, var_678_int); // 0x747 TObjFunc
	return 0; // 0x749 Return
	
Label_1866:
	var_679_int = 39846; // 0x74a PushI
	var_680_bool = var_18_object == var_679_int; // 0x74b Eq
	if(var_680_bool == 0) goto Label_1884; // 0x74c JumpB
	var_681_string = ""; // 0x74d PushV
	var_681_string = "Neutral"; // 0x74e MovS
	func_424(var_19_bool, var_681_string); // 0x74f NEW_2
	var_682_int = 537983; // 0x751 PushI
	SetMessage(var_682_int); // 0x752 TObjFunc
	ClearReplies(); // 0x754 TObjFunc
	var_683_int = 537984; // 0x756 PushI
	var_684_int = -1; // 0x757 PushI
	var_685_int = 39847; // 0x758 PushI
	AddReply(var_683_int, var_684_int, var_685_int); // 0x759 TObjFunc
	return 0; // 0x75b Return
	
Label_1884:
	var_686_int = 39835; // 0x75c PushI
	var_687_bool = var_18_object == var_686_int; // 0x75d Eq
	if(var_687_bool == 0) goto Label_1907; // 0x75e JumpB
	var_688_string = ""; // 0x75f PushV
	var_688_string = "Neutral"; // 0x760 MovS
	func_424(var_19_bool, var_688_string); // 0x761 NEW_2
	var_689_int = 537973; // 0x763 PushI
	SetMessage(var_689_int); // 0x764 TObjFunc
	ClearReplies(); // 0x766 TObjFunc
	var_690_int = 537974; // 0x768 PushI
	var_691_int = 39840; // 0x769 PushI
	var_692_int = 39836; // 0x76a PushI
	AddReply(var_690_int, var_691_int, var_692_int); // 0x76b TObjFunc
	var_693_int = 537975; // 0x76d PushI
	var_694_int = -1; // 0x76e PushI
	var_695_int = 39838; // 0x76f PushI
	AddReply(var_693_int, var_694_int, var_695_int); // 0x770 TObjFunc
	return 0; // 0x772 Return
	
Label_1907:
	var_696_int = 45790; // 0x773 PushI
	var_697_bool = var_18_object == var_696_int; // 0x774 Eq
	if(var_697_bool == 0) goto Label_1930; // 0x775 JumpB
	var_698_string = ""; // 0x776 PushV
	var_698_string = "Neutral"; // 0x777 MovS
	func_424(var_19_bool, var_698_string); // 0x778 NEW_2
	var_699_int = 543333; // 0x77a PushI
	SetMessage(var_699_int); // 0x77b TObjFunc
	ClearReplies(); // 0x77d TObjFunc
	var_700_int = 543334; // 0x77f PushI
	var_701_int = -1; // 0x780 PushI
	var_702_int = 45791; // 0x781 PushI
	AddReply(var_700_int, var_701_int, var_702_int); // 0x782 TObjFunc
	var_703_int = 543335; // 0x784 PushI
	var_704_int = -1; // 0x785 PushI
	var_705_int = 45792; // 0x786 PushI
	AddReply(var_703_int, var_704_int, var_705_int); // 0x787 TObjFunc
	return 0; // 0x789 Return
	
Label_1930:
	var_3_object = 1; // 0x78a TMovB
	var_706_bool = 0; // 0x78b PushV
	func_5183(var_706_bool); // 0x78c NEW_2
	if(var_706_bool == 0) goto Label_1938; // 0x78e JumpB
	lshStopAnimation(); // 0x78f Func
	goto Label_1940; // 0x791 Jump
	
Label_1940:
	return 0; // 0x794 Return
	
Label_1938:
	StopAnimation(); // 0x792 Func
	
Label_1942:
	return 0; // 0x796 Return
}


task_3_event_0(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_bool, var_8_bool, var_9_bool, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_int = 0; var_20_int = 0; // 0x7a6 PushV
	var_21_int = 0; var_22_object = Obj(); // 0x7a7 PushV
	var_22_object = var_18_bool; // 0x7a8 Mov
	func_5145(var_22_object); // 0x7a9 NEW_2
	var_20_int = var_21_int; // 0x7aa Mov
	var_23_int = 0; // 0x7ac PushI
	var_24_bool = var_20_int > var_23_int; // 0x7ad GT
	if(var_24_bool == 0) goto Label_1971; // 0x7ae JumpB
	var_25_object = Obj(); // 0x7af PushV
	var_25_object = var_18_bool; // 0x7b0 Mov
	func_5148(var_25_object); // 0x7b1 NEW_2
	
Label_1971:
	return 2; // 0x7b3 Return
}


task_3_event_6(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	func_5154(); // 0x7b5 NEW_2
	return 0; // 0x7b7 Return
}


task_3_event_22(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_int, var_8_float, var_9_float, var_10_bool, var_11_bool, var_12_bool, var_13_object, var_14_int, var_15_int, var_16_bool, var_17_float, var_18_int, var_19_bool, var_20_object, var_21_bool)
{
	return 0; // 0x82e Return
}


task_3_event_16(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_string, var_8_bool, var_9_bool, var_10_bool, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	return 0; // 0x830 Return
}


task_3_event_41(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_bool, var_8_bool, var_9_bool, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	return 0; // 0x832 Return
}


task_4_event_0(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_int = 0; var_20_int = 0; // 0x84b PushV
	var_21_int = 0; var_22_object = Obj(); // 0x84c PushV
	var_22_object = var_18_bool; // 0x84d Mov
	func_5145(var_22_object); // 0x84e NEW_2
	var_20_int = var_21_int; // 0x84f Mov
	var_23_int = 0; // 0x851 PushI
	var_24_bool = var_20_int > var_23_int; // 0x852 GT
	if(var_24_bool == 0) goto Label_2142; // 0x853 JumpB
	var_25_int = 1; // 0x854 PushI
	var_26_bool = var_20_int > var_25_int; // 0x855 GT
	if(var_26_bool == 0) goto Label_2138; // 0x856 JumpB
	func_2310(var_20_int); // 0x858 NEW_2
	
Label_2138:
	var_28_object = Obj(); // 0x85a PushV
	var_28_object = var_18_bool; // 0x85b Mov
	func_5148(var_28_object); // 0x85c NEW_2
	
Label_2142:
	return 2; // 0x85e Return
}


task_4_event_17(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_int = 0; var_20_int = 0; // 0x85f PushV
	var_21_object = Obj(); // 0x860 PushV
	var_21_object = var_18_bool; // 0x861 Mov
	func_4877(var_21_object); // 0x862 NEW_2
	var_30_int = 0; var_31_object = Obj(); // 0x864 PushV
	var_31_object = var_18_bool; // 0x865 Mov
	func_4959(var_30_int, var_31_object); // 0x866 NEW_2
	var_20_int = var_30_int; // 0x867 Mov
	var_66_int = 0; // 0x869 PushI
	var_67_bool = var_20_int > var_66_int; // 0x86a GT
	if(var_67_bool == 0) goto Label_2166; // 0x86b JumpB
	var_68_int = 1; // 0x86c PushI
	var_69_bool = var_20_int > var_68_int; // 0x86d GT
	if(var_69_bool == 0) goto Label_2162; // 0x86e JumpB
	func_2310(var_20_int); // 0x870 NEW_2
	
Label_2162:
	var_71_object = Obj(); // 0x872 PushV
	var_71_object = var_18_bool; // 0x873 Mov
	func_4969(var_71_object); // 0x874 NEW_2
	
Label_2166:
	return 2; // 0x876 Return
}


task_4_event_30(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_bool, var_12_object, var_13_int, var_14_int, var_15_bool, var_16_float, var_17_int, var_18_bool, var_19_object, var_20_bool)
{
	var_21_int = 0; var_22_int = 0; // 0x877 PushV
	var_23_bool = 0; var_24_object = Obj(); var_25_object = Obj(); var_26_bool = 0; // 0x878 PushV
	var_24_object = var_18_bool; // 0x879 Mov
	var_25_object = var_19_object; // 0x87a Mov
	var_26_bool = var_20_bool; // 0x87b Mov
	func_5254(var_23_bool, var_24_object, var_25_object, var_26_bool); // 0x87c NEW_2
	if(var_23_bool == 0) goto Label_2194; // 0x87e JumpB
	var_85_int = 0; var_86_object = Obj(); var_87_bool = 0; // 0x87f PushV
	var_86_object = var_18_bool; // 0x880 Mov
	var_87_bool = var_20_bool; // 0x881 Mov
	func_5052(var_86_object, var_87_bool); // 0x882 NEW_2
	var_22_int = var_85_int; // 0x883 Mov
	var_118_int = 0; // 0x885 PushI
	var_119_bool = var_22_int > var_118_int; // 0x886 GT
	if(var_119_bool == 0) goto Label_2194; // 0x887 JumpB
	var_120_int = 1; // 0x888 PushI
	var_121_bool = var_22_int > var_120_int; // 0x889 GT
	if(var_121_bool == 0) goto Label_2190; // 0x88a JumpB
	func_2310(var_22_int); // 0x88c NEW_2
	
Label_2190:
	var_123_object = Obj(); // 0x88e PushV
	var_123_object = var_18_bool; // 0x88f Mov
	func_5059(var_123_object); // 0x890 NEW_2
	
Label_2194:
	return 2; // 0x892 Return
}


task_4_event_40(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_int = 0; var_20_int = 0; // 0x893 PushV
	var_21_int = 0; var_22_object = Obj(); // 0x894 PushV
	var_22_object = var_18_bool; // 0x895 Mov
	func_5094(var_22_object); // 0x896 NEW_2
	var_20_int = var_21_int; // 0x897 Mov
	var_23_int = 0; // 0x899 PushI
	var_24_bool = var_20_int > var_23_int; // 0x89a GT
	if(var_24_bool == 0) goto Label_2214; // 0x89b JumpB
	var_25_int = 1; // 0x89c PushI
	var_26_bool = var_20_int > var_25_int; // 0x89d GT
	if(var_26_bool == 0) goto Label_2210; // 0x89e JumpB
	func_2310(var_20_int); // 0x8a0 NEW_2
	
Label_2210:
	var_28_object = Obj(); // 0x8a2 PushV
	var_28_object = var_18_bool; // 0x8a3 Mov
	func_5097(); // 0x8a4 NEW_2
	
Label_2214:
	return 2; // 0x8a6 Return
}


task_4_event_42(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_string, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_int = 0; var_21_int = 0; // 0x8a7 PushV
	var_22_bool = 0; var_23_object = Obj(); var_24_string = ""; // 0x8a8 PushV
	var_23_object = var_18_object; // 0x8a9 Mov
	var_24_string = var_19_bool; // 0x8aa Mov
	func_4791(var_22_bool, var_23_object, var_24_string); // 0x8ab NEW_2
	if(var_22_bool == 0) goto Label_2231; // 0x8ad JumpB
	func_2310(var_21_int); // 0x8af NEW_2
	var_38_object = Obj(); var_39_string = ""; // 0x8b1 PushV
	var_38_object = var_18_object; // 0x8b2 Mov
	var_39_string = var_19_bool; // 0x8b3 Mov
	func_4823(var_38_object, var_39_string); // 0x8b4 NEW_2
	goto Label_2251; // 0x8b6 Jump
	
Label_2251:
	return 2; // 0x8cb Return
	
Label_2231:
	var_49_int = 0; var_50_string = ""; var_51_object = Obj(); // 0x8b7 PushV
	var_50_string = var_19_bool; // 0x8b8 Mov
	var_51_object = var_18_object; // 0x8b9 Mov
	func_5099(var_49_int, var_50_string, var_51_object); // 0x8ba NEW_2
	var_21_int = var_49_int; // 0x8bb Mov
	var_93_int = 0; // 0x8bd PushI
	var_94_bool = var_21_int > var_93_int; // 0x8be GT
	if(var_94_bool == 0) goto Label_2251; // 0x8bf JumpB
	var_95_int = 1; // 0x8c0 PushI
	var_96_bool = var_21_int > var_95_int; // 0x8c1 GT
	if(var_96_bool == 0) goto Label_2246; // 0x8c2 JumpB
	func_2310(var_21_int); // 0x8c4 NEW_2
	
Label_2246:
	var_97_string = ""; var_98_object = Obj(); // 0x8c6 PushV
	var_97_string = var_19_bool; // 0x8c7 Mov
	var_98_object = var_18_object; // 0x8c8 Mov
	func_5111(var_97_string, var_98_object); // 0x8c9 NEW_2
}


task_4_event_26(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_string, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_bool = 0; var_20_string = ""; // 0x8cd PushV
	var_20_string = var_18_bool; // 0x8ce Mov
	func_4890(var_19_bool, var_20_string); // 0x8cf NEW_2
	if(var_19_bool == 0) goto Label_2265; // 0x8d1 JumpB
	func_2310(var_18_bool); // 0x8d3 NEW_2
	var_29_string = ""; // 0x8d5 PushV
	var_29_string = var_18_bool; // 0x8d6 Mov
	func_4906(var_29_string); // 0x8d7 NEW_2
	
Label_2265:
	return 0; // 0x8d9 Return
}


task_4_event_1(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_bool = 0; var_20_object = Obj(); // 0x8db PushV
	var_20_object = var_18_bool; // 0x8dc Mov
	func_4848(var_19_bool, var_20_object); // 0x8dd NEW_2
	if(var_19_bool == 0) goto Label_2280; // 0x8df JumpB
	func_2310(var_18_bool); // 0x8e1 NEW_2
	var_32_object = Obj(); // 0x8e3 PushV
	var_32_object = var_18_bool; // 0x8e4 Mov
	func_4871(var_32_object); // 0x8e5 NEW_2
	goto Label_2284; // 0x8e7 Jump
	
Label_2284:
	return 0; // 0x8ec Return
	
Label_2280:
	var_34_object = Obj(); // 0x8e8 PushV
	var_34_object = var_18_bool; // 0x8e9 Mov
	func_2335(var_18_bool, var_34_object); // 0x8ea NEW_2
}


task_4_event_3(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_object = Obj(); // 0x8ee PushV
	var_19_object = var_18_bool; // 0x8ef Mov
	func_2335(var_18_bool, var_19_object); // 0x8f0 NEW_2
	return 0; // 0x8f2 Return
}


task_4_event_7(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_int, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_int = 110; // 0x8f4 PushI
	var_20_bool = var_18_bool != var_19_int; // 0x8f5 Neq
	if(var_20_bool == 0) goto Label_2296; // 0x8f6 JumpB
	return 0; // 0x8f7 Return
	
Label_2296:
	var_2_object = 0; // 0x8f8 TMovB
	var_21_int = 110; // 0x8f9 PushI
	KillTimer(var_21_int); // 0x8fa Func
	ResetAAS(); // 0x8fc Func
	return 0; // 0x8fe Return
}


task_4_event_6(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	func_2310(var_17_bool); // 0x900 NEW_2
	func_5154(); // 0x903 NEW_2
	return 0; // 0x905 Return
}


task_4_event_41(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	func_2310(var_18_bool); // 0x918 NEW_2
	var_20_object = Obj(); // 0x91a PushV
	var_20_object = var_18_bool; // 0x91b Mov
	func_4767(); // 0x91c NEW_2
	return 0; // 0x91e Return
}


task_4_event_10(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	RequestClearPath(var_18_bool); // 0x988 Func
	return 0; // 0x98a Return
}


task_4_event_28(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	Stop(); // 0x98b Func
	return 0; // 0x98d Return
}


task_5_event_0(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_int = 0; var_20_int = 0; // 0x9a4 PushV
	var_21_int = 0; var_22_object = Obj(); // 0x9a5 PushV
	var_22_object = var_18_bool; // 0x9a6 Mov
	func_5145(var_22_object); // 0x9a7 NEW_2
	var_20_int = var_21_int; // 0x9a8 Mov
	var_23_int = 0; // 0x9aa PushI
	var_24_bool = var_20_int > var_23_int; // 0x9ab GT
	if(var_24_bool == 0) goto Label_2487; // 0x9ac JumpB
	var_25_int = 1; // 0x9ad PushI
	var_26_bool = var_20_int > var_25_int; // 0x9ae GT
	if(var_26_bool == 0) goto Label_2483; // 0x9af JumpB
	func_2713(); // 0x9b1 NEW_2
	
Label_2483:
	var_27_object = Obj(); // 0x9b3 PushV
	var_27_object = var_18_bool; // 0x9b4 Mov
	func_5148(var_27_object); // 0x9b5 NEW_2
	
Label_2487:
	return 2; // 0x9b7 Return
}


task_5_event_17(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_int = 0; var_20_int = 0; // 0x9b8 PushV
	var_21_object = Obj(); // 0x9b9 PushV
	var_21_object = var_18_bool; // 0x9ba Mov
	func_4877(var_21_object); // 0x9bb NEW_2
	var_30_int = 0; var_31_object = Obj(); // 0x9bd PushV
	var_31_object = var_18_bool; // 0x9be Mov
	func_4959(var_30_int, var_31_object); // 0x9bf NEW_2
	var_20_int = var_30_int; // 0x9c0 Mov
	var_66_int = 0; // 0x9c2 PushI
	var_67_bool = var_20_int > var_66_int; // 0x9c3 GT
	if(var_67_bool == 0) goto Label_2511; // 0x9c4 JumpB
	var_68_int = 1; // 0x9c5 PushI
	var_69_bool = var_20_int > var_68_int; // 0x9c6 GT
	if(var_69_bool == 0) goto Label_2507; // 0x9c7 JumpB
	func_2713(); // 0x9c9 NEW_2
	
Label_2507:
	var_70_object = Obj(); // 0x9cb PushV
	var_70_object = var_18_bool; // 0x9cc Mov
	func_4969(var_70_object); // 0x9cd NEW_2
	
Label_2511:
	return 2; // 0x9cf Return
}


task_5_event_30(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_bool, var_12_object, var_13_int, var_14_int, var_15_bool, var_16_float, var_17_int, var_18_bool, var_19_object, var_20_bool)
{
	var_21_int = 0; var_22_int = 0; // 0x9d0 PushV
	var_23_bool = 0; var_24_object = Obj(); var_25_object = Obj(); var_26_bool = 0; // 0x9d1 PushV
	var_24_object = var_18_bool; // 0x9d2 Mov
	var_25_object = var_19_object; // 0x9d3 Mov
	var_26_bool = var_20_bool; // 0x9d4 Mov
	func_5254(var_23_bool, var_24_object, var_25_object, var_26_bool); // 0x9d5 NEW_2
	if(var_23_bool == 0) goto Label_2539; // 0x9d7 JumpB
	var_85_int = 0; var_86_object = Obj(); var_87_bool = 0; // 0x9d8 PushV
	var_86_object = var_18_bool; // 0x9d9 Mov
	var_87_bool = var_20_bool; // 0x9da Mov
	func_5052(var_86_object, var_87_bool); // 0x9db NEW_2
	var_22_int = var_85_int; // 0x9dc Mov
	var_118_int = 0; // 0x9de PushI
	var_119_bool = var_22_int > var_118_int; // 0x9df GT
	if(var_119_bool == 0) goto Label_2539; // 0x9e0 JumpB
	var_120_int = 1; // 0x9e1 PushI
	var_121_bool = var_22_int > var_120_int; // 0x9e2 GT
	if(var_121_bool == 0) goto Label_2535; // 0x9e3 JumpB
	func_2713(); // 0x9e5 NEW_2
	
Label_2535:
	var_122_object = Obj(); // 0x9e7 PushV
	var_122_object = var_18_bool; // 0x9e8 Mov
	func_5059(var_122_object); // 0x9e9 NEW_2
	
Label_2539:
	return 2; // 0x9eb Return
}


task_5_event_40(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_int = 0; var_20_int = 0; // 0x9ec PushV
	var_21_int = 0; var_22_object = Obj(); // 0x9ed PushV
	var_22_object = var_18_bool; // 0x9ee Mov
	func_5094(var_22_object); // 0x9ef NEW_2
	var_20_int = var_21_int; // 0x9f0 Mov
	var_23_int = 0; // 0x9f2 PushI
	var_24_bool = var_20_int > var_23_int; // 0x9f3 GT
	if(var_24_bool == 0) goto Label_2559; // 0x9f4 JumpB
	var_25_int = 1; // 0x9f5 PushI
	var_26_bool = var_20_int > var_25_int; // 0x9f6 GT
	if(var_26_bool == 0) goto Label_2555; // 0x9f7 JumpB
	func_2713(); // 0x9f9 NEW_2
	
Label_2555:
	var_27_object = Obj(); // 0x9fb PushV
	var_27_object = var_18_bool; // 0x9fc Mov
	func_5097(); // 0x9fd NEW_2
	
Label_2559:
	return 2; // 0x9ff Return
}


task_5_event_42(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_string, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_int = 0; var_21_int = 0; // 0xa00 PushV
	var_22_bool = 0; var_23_object = Obj(); var_24_string = ""; // 0xa01 PushV
	var_23_object = var_18_object; // 0xa02 Mov
	var_24_string = var_19_bool; // 0xa03 Mov
	func_4791(var_22_bool, var_23_object, var_24_string); // 0xa04 NEW_2
	if(var_22_bool == 0) goto Label_2576; // 0xa06 JumpB
	func_2713(); // 0xa08 NEW_2
	var_37_object = Obj(); var_38_string = ""; // 0xa0a PushV
	var_37_object = var_18_object; // 0xa0b Mov
	var_38_string = var_19_bool; // 0xa0c Mov
	func_4823(var_37_object, var_38_string); // 0xa0d NEW_2
	goto Label_2596; // 0xa0f Jump
	
Label_2596:
	return 2; // 0xa24 Return
	
Label_2576:
	var_48_int = 0; var_49_string = ""; var_50_object = Obj(); // 0xa10 PushV
	var_49_string = var_19_bool; // 0xa11 Mov
	var_50_object = var_18_object; // 0xa12 Mov
	func_5099(var_48_int, var_49_string, var_50_object); // 0xa13 NEW_2
	var_21_int = var_48_int; // 0xa14 Mov
	var_92_int = 0; // 0xa16 PushI
	var_93_bool = var_21_int > var_92_int; // 0xa17 GT
	if(var_93_bool == 0) goto Label_2596; // 0xa18 JumpB
	var_94_int = 1; // 0xa19 PushI
	var_95_bool = var_21_int > var_94_int; // 0xa1a GT
	if(var_95_bool == 0) goto Label_2591; // 0xa1b JumpB
	func_2713(); // 0xa1d NEW_2
	
Label_2591:
	var_96_string = ""; var_97_object = Obj(); // 0xa1f PushV
	var_96_string = var_19_bool; // 0xa20 Mov
	var_97_object = var_18_object; // 0xa21 Mov
	func_5111(var_96_string, var_97_object); // 0xa22 NEW_2
}


task_5_event_26(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_string, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_bool = 0; var_20_string = ""; // 0xa26 PushV
	var_20_string = var_18_bool; // 0xa27 Mov
	func_4890(var_19_bool, var_20_string); // 0xa28 NEW_2
	if(var_19_bool == 0) goto Label_2610; // 0xa2a JumpB
	func_2713(); // 0xa2c NEW_2
	var_28_string = ""; // 0xa2e PushV
	var_28_string = var_18_bool; // 0xa2f Mov
	func_4906(var_28_string); // 0xa30 NEW_2
	
Label_2610:
	return 0; // 0xa32 Return
}


task_5_event_6(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	func_2713(); // 0xa34 NEW_2
	func_5154(); // 0xa37 NEW_2
	return 0; // 0xa39 Return
}


task_5_event_1(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_bool = 0; var_20_object = Obj(); // 0xa3b PushV
	var_20_object = var_18_bool; // 0xa3c Mov
	func_4848(var_19_bool, var_20_object); // 0xa3d NEW_2
	if(var_19_bool == 0) goto Label_2631; // 0xa3f JumpB
	func_2713(); // 0xa41 NEW_2
	var_31_object = Obj(); // 0xa43 PushV
	var_31_object = var_18_bool; // 0xa44 Mov
	func_4871(var_31_object); // 0xa45 NEW_2
	
Label_2631:
	return 0; // 0xa47 Return
}


task_7_event_6(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	func_3464(var_17_bool); // 0xd43 NEW_2
	func_5154(); // 0xd46 NEW_2
	return 0; // 0xd48 Return
}


task_7_event_7(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool, var_18_int)
{
	var_19_int = 1; // 0xd7b PushI
	var_20_bool = var_18_int == var_19_int; // 0xd7c Eq
	if(var_20_bool == 0) goto Label_3459; // 0xd7d JumpB
	var_21_object = Obj(); // 0xd7e PushV
	var_21_object = var_1_object; // 0xd7f MovT
	func_4294(var_21_object); // 0xd80 NEW_2
	goto Label_3463; // 0xd82 Jump
	
Label_3463:
	return 0; // 0xd87 Return
	
Label_3459:
	var_26_int = 0; // 0xd83 PushV
	var_26_int = var_18_int; // 0xd84 Mov
	func_3608(var_17_bool, var_18_int, var_26_int); // 0xd85 NEW_2
}


task_7_event_1(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool, var_18_object)
{
	var_19_bool = 0; // 0xd96 PushV
	var_19_bool = 0; // 0xd97 MovB
	var_20_bool = var_1_object == var_18_object; // 0xd98 Eq
	if(var_20_bool == 0) goto Label_3485; // 0xd99 JumpB
	var_21_bool = var_2_object == 0; // 0xd9a Not
	if(var_21_bool == 0) goto Label_3485; // 0xd9b JumpB
	var_19_bool = 1; // 0xd9c MovB
	
Label_3485:
	if(var_19_bool == 0) goto Label_3491; // 0xd9d JumpB
	var_2_object = 1; // 0xd9e TMovB
	var_22_object = Obj(); // 0xd9f PushV
	var_22_object = var_18_object; // 0xda0 Mov
	func_4162(var_22_object); // 0xda1 NEW_2
	
Label_3491:
	return 0; // 0xda3 Return
}


task_7_event_2(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool, var_18_object)
{
	var_19_bool = 0; // 0xda5 PushV
	var_19_bool = 0; // 0xda6 MovB
	var_20_bool = var_1_object == var_18_object; // 0xda7 Eq
	if(var_20_bool == 0) goto Label_3500; // 0xda8 JumpB
	var_21_object = var_2_object; // 0xda9 PushT
	if(var_21_object == 0) goto Label_3500; // 0xdaa JumpB
	var_19_bool = 1; // 0xdab MovB
	
Label_3500:
	if(var_19_bool == 0) goto Label_3505; // 0xdac JumpB
	var_2_object = 0; // 0xdad TMovB
	var_22_string = "head"; // 0xdae PushS
	UnlookAsync(var_22_string); // 0xdaf Func
	
Label_3505:
	return 0; // 0xdb1 Return
}


task_7_event_10(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool, var_18_object)
{
	RequestClearPath(var_18_object); // 0xe2b Func
	return 0; // 0xe2d Return
}


task_7_event_41(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool, var_18_object)
{
	func_3464(var_18_object); // 0xe37 NEW_2
	var_23_object = Obj(); // 0xe39 PushV
	var_23_object = var_18_object; // 0xe3a Mov
	func_4767(); // 0xe3b NEW_2
	return 0; // 0xe3d Return
}


event_16(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool, var_18_object, var_19_string)
{
	var_20_float = 0; var_21_float = 0; // 0x1292 PushV
	var_22_string = "health"; // 0x1293 PushS
	var_23_bool = var_19_string == var_22_string; // 0x1294 Eq
	if(var_23_bool == 0) goto Label_4766; // 0x1295 JumpB
	var_24_string = "health"; // 0x1296 PushS
	GetProperty(var_24_string, var_21_float); // 0x1297 Func
	var_25_int = 0; // 0x1299 PushI
	var_26_bool = var_21_float <= var_25_int; // 0x129a LE
	if(var_26_bool == 0) goto Label_4766; // 0x129b JumpB
	SignalDeath(var_18_object); // 0x129c Func
	
Label_4766:
	return 2; // 0x129e Return
}


event_41(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool, var_18_object)
{
	var_19_object = Obj(); // 0x12a0 PushV
	var_19_object = var_18_object; // 0x12a1 Mov
	func_4746(var_19_object); // 0x12a2 NEW_2
	return 0; // 0x12a4 Return
}


event_22(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool, var_18_object, var_19_int, var_20_float, var_21_float)
{
	var_22_object = Obj(); var_23_int = 0; var_24_float = 0; // 0x12a6 PushV
	var_22_object = var_18_object; // 0x12a7 Mov
	var_23_int = var_19_int; // 0x12a8 Mov
	var_24_float = var_20_float; // 0x12a9 Mov
	func_3885(var_22_object, var_23_int, var_24_float); // 0x12aa NEW_2
	return 0; // 0x12ac Return
}


event_43(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool, var_18_object, var_19_int, var_20_float, var_21_float, var_22_cvector, var_23_cvector)
{
	var_24_object = Obj(); var_25_int = 0; var_26_float = 0; var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); // 0x12ae PushV
	var_24_object = var_18_object; // 0x12af Mov
	var_25_int = var_19_int; // 0x12b0 Mov
	var_26_float = var_20_float; // 0x12b1 Mov
	var_27_cvector = var_22_cvector; // 0x12b2 Mov
	var_28_cvector = var_23_cvector; // 0x12b3 Mov
	func_3953(var_26_float, var_27_cvector, var_28_cvector); // 0x12b4 NEW_2
	return 0; // 0x12b6 Return
}


main(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	var_18_bool = 1; // 0x833 PushB
	SensePlayerOnly(var_18_bool); // 0x834 Func
	func_5185(); // 0x837 NEW_2
	func_2114(); // 0x83a NEW_2
	
Label_2108:
	var_2_object = 0; // 0x83c TMovB
	func_2375(var_16_object, var_17_bool); // 0x83e NEW_2
	goto Label_2108; // 0x840 Jump
}


func_0(var_0_bool)
{
	DoTrade(); // 0x1 Func
	var_0_bool = 0; // 0x3 TMovB
	
Label_4:
	var_368_bool = 0; // 0x4 PushV
	func_5183(var_368_bool); // 0x5 NEW_2
	if(var_368_bool == 0) goto Label_15; // 0x7 JumpB
	var_369_string = ""; // 0x8 PushV
	var_369_string = "Neutral"; // 0x9 MovS
	func_4131(var_369_string); // 0xa NEW_2
	lshWaitForAnimEnd(); // 0xc Func
	goto Label_21; // 0xe Jump
	
Label_21:
	var_370_bool = var_0_bool; // 0x15 PushT
	if(var_370_bool == 0) goto Label_24; // 0x16 JumpB
	return 0; // 0x17 Return
	
Label_24:
	goto Label_4; // 0x18 Jump
	
Label_15:
	WaitForAnimEnd(); // 0xf Func
	var_371_string = "all"; // 0x11 PushS
	var_372_string = "idle"; // 0x12 PushS
	PlayAnimation(var_371_string, var_372_string); // 0x13 Func
}


func_5121(var_53_int, var_54_object)
{
	var_55_bool = 0; var_56_object = Obj(); // 0x1402 PushV
	var_56_object = var_54_object; // 0x1403 Mov
	func_3817(var_55_bool, var_56_object); // 0x1404 NEW_2
	var_89_bool = var_55_bool == 0; // 0x1406 Not
	if(var_89_bool == 0) goto Label_5130; // 0x1407 JumpB
	var_53_int = 0; // 0x1408 MovI
	return 0; // 0x1409 Return
	
Label_5130:
	var_90_bool = 0; var_91_object = Obj(); // 0x140a PushV
	var_91_object = var_54_object; // 0x140b Mov
	func_5251(var_91_object); // 0x140c NEW_2
	if(var_90_bool == 0) goto Label_5137; // 0x140e JumpB
	var_53_int = 2; // 0x140f MovI
	goto Label_5138; // 0x1410 Jump
	
Label_5138:
	return 0; // 0x1412 Return
	
Label_5137:
	var_53_int = 0; // 0x1411 MovI
}


func_2067(var_43_string)
{
	RemoveRTEnvelope(); // 0x814 Func
	SetDeathState(); // 0x816 Func
	Stop(); // 0x818 Func
	StopAsync(); // 0x81a Func
	StopSecondaryAnimation(); // 0x81c Func
	var_44_string = ""; // 0x81e PushV
	var_44_string = var_43_string; // 0x81f Mov
	func_4180(var_44_string); // 0x820 NEW_2
	var_73_string = "all"; // 0x822 PushS
	PlayAnimation(var_73_string, var_43_string); // 0x823 Func
	WaitForAnimEnd(); // 0x825 Func
	var_74_string = "all"; // 0x827 PushS
	LockAnimationEnd(var_74_string, var_43_string); // 0x828 Func
	RemoveEnvelope(); // 0x82a Func
	return 0; // 0x82c Return
}


func_5139(var_100_object)
{
	var_101_object = Obj(); // 0x1414 PushV
	var_101_object = var_100_object; // 0x1415 Mov
	func_4969(var_101_object); // 0x1416 NEW_2
	return 0; // 0x1418 Return
}


func_3608(var_0_bool, var_1_object, var_26_int)
{
	var_27_int = 0; // 0xe19 PushI
	var_28_bool = var_26_int != var_27_int; // 0xe1a Neq
	if(var_28_bool == 0) goto Label_3613; // 0xe1b JumpB
	return 0; // 0xe1c Return
	
Label_3613:
	var_29_bool = 0; var_30_object = Obj(); // 0xe1d PushV
	var_30_object = var_1_object; // 0xe1e MovT
	func_3646(var_29_bool, var_30_object); // 0xe1f NEW_2
	var_65_bool = var_29_bool == 0; // 0xe21 Not
	if(var_65_bool == 0) goto Label_3620; // 0xe22 JumpB
	var_0_bool = 1; // 0xe23 TMovB
	
Label_3620:
	var_66_int = 0; // 0xe24 PushI
	KillTimer(var_66_int); // 0xe25 Func
	Stop(); // 0xe27 Func
	return 0; // 0xe29 Return
}


func_5145(var_21_int)
{
	var_21_int = 2; // 0x141a MovI
	return 0; // 0x141b Return
}


func_5148(var_27_object)
{
	var_28_object = Obj(); // 0x141d PushV
	var_28_object = var_27_object; // 0x141e Mov
	func_5189(var_27_object, var_28_object); // 0x141f NEW_2
	return 0; // 0x1421 Return
}


func_4126()
{
	var_374_bool = 1; // 0x101f PushB
	CameraSwitchToNormal(var_374_bool); // 0x1020 Func
	return 0; // 0x1022 Return
}


func_5154()
{
	return 0; // 0x1422 Return
}


func_4131(var_181_string)
{
	var_182_bool = 0; var_183_float = 0; var_184_float = 0; var_185_bool = 0; var_186_float = 0; var_187_float = 0; // 0x1023 PushV
	lshHasAnimation(var_185_bool, var_181_string); // 0x1024 Func
	var_188_bool = var_185_bool; // 0x1026 Push
	if(var_188_bool == 0) goto Label_4142; // 0x1027 JumpB
	lshGetAnimTimes(var_181_string, var_186_float, var_187_float); // 0x1028 Func
	var_189_bool = 0; // 0x102a PushB
	lshPlayAnimation(var_186_float, var_187_float, var_189_bool); // 0x102b Func
	goto Label_4146; // 0x102d Jump
	
Label_4146:
	return 6; // 0x1032 Return
	
Label_4142:
	var_190_string = "Can't find lsh animation : "; // 0x102e PushS
	var_191_int = var_190_string + var_181_string; // 0x102f Add
	Trace(var_191_int); // 0x1030 Func
}


func_5155(var_24_bool)
{
	var_24_bool = 0; // 0x1424 MovB
	return 0; // 0x1425 Return
}


func_5158()
{
	return 0; // 0x1427 Return
}


func_5160(var_31_bool)
{
	var_31_bool = 0; // 0x1429 MovB
	return 0; // 0x142a Return
}


func_40(var_0_bool, var_53_int, var_54_object)
{
	var_56_object = Obj(); var_57_bool = 0; var_58_int = 0; var_59_bool = 0; var_60_object = Obj(); var_61_bool = 0; var_62_int = 0; var_63_bool = 0; // 0x28 PushV
	var_0_bool = var_54_object; // 0x29 TMov
	var_64_bool = 0; var_65_object = Obj(); var_66_float = 0; // 0x2a PushV
	var_65_object = var_54_object; // 0x2b Mov
	var_66_float = 70.0; // 0x2c MovF
	func_3983(var_65_object, var_66_float); // 0x2d NEW_2
	var_111_bool = var_64_bool == 0; // 0x2f Not
	if(var_111_bool == 0) goto Label_51; // 0x30 JumpB
	var_53_int = -2; // 0x31 MovI
	return 8; // 0x32 Return
	
Label_51:
	CreateDialog(var_60_object); // 0x33 Func
	var_112_int = 0; // 0x35 PushV
	func_5177(var_112_int); // 0x36 NEW_2
	SetNPCName(var_112_int); // 0x38 ObjFunc
	var_113_int = 0; // 0x3a PushV
	func_5175(var_113_int); // 0x3b NEW_2
	SetNPCDescription(var_113_int); // 0x3d ObjFunc
	var_114_string = ""; // 0x3f PushV
	func_5179(var_114_string); // 0x40 NEW_2
	SetPhoto(var_114_string); // 0x42 ObjFunc
	var_115_string = ""; // 0x44 PushV
	func_5181(var_115_string); // 0x45 NEW_2
	SetPhoto2(var_115_string); // 0x47 ObjFunc
	var_116_int = 0; // 0x49 PushV
	func_4458(var_116_int); // 0x4a NEW_2
	SetPlayerName(var_116_int); // 0x4c ObjFunc
	var_62_int = -1; // 0x4e MovI
	IsOverrideActive(var_61_bool); // 0x4f Func
	var_124_bool = var_61_bool; // 0x51 Push
	if(var_124_bool == 0) goto Label_85; // 0x52 JumpB
	var_53_int = -2; // 0x53 MovI
	return 8; // 0x54 Return
	
Label_85:
	DoDialog(var_60_object); // 0x55 Func
	var_125_object = Obj(); var_126_object = Obj(); // 0x57 PushV
	var_125_object = var_54_object; // 0x58 Mov
	var_126_object = var_60_object; // 0x59 Mov
	TaskCall(2); // 0x5a TaskCall
	func_114(var_127_object, var_128_object, var_129_string, var_130_bool, var_125_object, var_126_object); // 0x5b NEW_2
	TaskReturn(); // 0x5c TaskReturn
	IsDialogEnd(var_63_bool); // 0x5e ObjFunc
	
Label_96:
	var_323_bool = var_63_bool == 0; // 0x60 Not
	if(var_323_bool == 0) goto Label_103; // 0x61 JumpB
	sync(); // 0x62 Func
	IsDialogEnd(var_63_bool); // 0x64 ObjFunc
	goto Label_96; // 0x66 Jump
	
Label_103:
	var_324_object = Obj(); // 0x67 PushV
	var_324_object = var_54_object; // 0x68 Mov
	func_4052(); // 0x69 NEW_2
	StopDialog(var_60_object); // 0x6b Func
	GetReturnValue(var_62_int); // 0x6d ObjFunc
	var_53_int = var_62_int; // 0x6f Mov
	return 8; // 0x70 Return
}


func_5163()
{
	return 0; // 0x142c Return
}


func_5165(var_35_bool)
{
	var_35_bool = 0; // 0x142e MovB
	return 0; // 0x142f Return
}


func_3630(var_0_bool)
{
	var_0_bool = 1; // 0xe2e TMovB
	var_22_int = 0; // 0xe2f PushI
	KillTimer(var_22_int); // 0xe30 Func
	Stop(); // 0xe32 Func
	return 0; // 0xe34 Return
}


func_5168()
{
	return 0; // 0x1431 Return
}


func_5170(var_26_bool)
{
	var_26_bool = 0; // 0x1433 MovB
	return 0; // 0x1434 Return
}


func_4147(var_156_string, var_157_bool)
{
	var_160_bool = 0; var_161_float = 0; var_162_float = 0; var_163_bool = 0; var_164_float = 0; var_165_float = 0; // 0x1033 PushV
	lshHasAnimation(var_163_bool, var_156_string); // 0x1034 Func
	var_166_bool = var_163_bool; // 0x1036 Push
	if(var_166_bool == 0) goto Label_4157; // 0x1037 JumpB
	lshGetAnimTimes(var_156_string, var_164_float, var_165_float); // 0x1038 Func
	lshPlayAnimation(var_164_float, var_165_float, var_157_bool); // 0x103a Func
	goto Label_4161; // 0x103c Jump
	
Label_4161:
	return 6; // 0x1041 Return
	
Label_4157:
	var_167_string = "Can't find lsh animation : "; // 0x103d PushS
	var_168_int = var_167_string + var_156_string; // 0x103e Add
	Trace(var_168_int); // 0x103f Func
}


func_5173()
{
	return 0; // 0x1436 Return
}


func_5175(var_113_int)
{
	var_113_int = 515564; // 0x1437 MovI
	return 0; // 0x1438 Return
}


func_5177(var_112_int)
{
	var_112_int = 503349; // 0x1439 MovI
	return 0; // 0x143a Return
}


func_5179(var_114_string)
{
	var_114_string = "ui/NPC_Citizen2.png"; // 0x143b MovS
	return 0; // 0x143c Return
}


func_5181(var_115_string)
{
	var_115_string = "ui/NPC_Citizen2_b.png"; // 0x143d MovS
	return 0; // 0x143e Return
}


func_3646(var_29_bool, var_30_object)
{
	var_31_bool = 0; var_32_object = Obj(); // 0xe3f PushV
	var_32_object = var_30_object; // 0xe40 Mov
	func_3817(var_31_bool, var_32_object); // 0xe41 NEW_2
	var_29_bool = var_31_bool; // 0xe42 Mov
	return 0; // 0xe44 Return
}


func_5183(var_107_bool)
{
	var_107_bool = 0; // 0x143f MovB
	return 0; // 0x1440 Return
}


func_5185()
{
	var_19_bool = GlobalVars[0]; // 0x1441 PushGE
	var_19_bool = 0; // 0x1442 MovB
	GlobalVars[0] = var_19_bool; // 0x1443 PopGE
	return 0; // 0x1444 Return
}


func_2114()
{
	var_20_bool = 0; // 0x842 PushV
	func_3978(var_20_bool); // 0x843 NEW_2
	var_23_bool = var_20_bool == 0; // 0x845 Not
	if(var_23_bool == 0) goto Label_2122; // 0x846 JumpB
	func_5154(); // 0x848 NEW_2
	
Label_2122:
	return 0; // 0x84a Return
}


func_4162(var_22_object)
{
	var_23_float = 0; var_24_cvector = CVector(0,0,0); var_25_float = 0; var_26_cvector = CVector(0,0,0); // 0x1042 PushV
	GetEyesHeight(var_25_float); // 0x1043 ObjFunc
	var_26_cvector = CVector(0.0, 0.0, 0.0); // 0x1045 MovV
	var_27_float = GetByIndex(var_26_cvector, 1); // 0x1046 PushE
	var_27_float = var_25_float; // 0x1047 Mov
	SetByIndex(var_26_cvector, 1) = var_27_float; // 0x1048 PopE
	var_28_string = "head"; // 0x1049 PushS
	LookAsync(var_22_object, var_28_string, var_26_cvector); // 0x104a Func
	return 4; // 0x104c Return
}


func_3653(var_249_string)
{
	var_249_string = "walk"; // 0xe45 MovS
	return 0; // 0xe46 Return
}


func_5189(var_28_object, var_55_object)
{
	var_29_bool = 0; var_30_bool = 0; // 0x1445 PushV
	var_31_bool = GlobalVars[0]; // 0x1446 PushGE
	if(var_31_bool == 0) goto Label_5202; // 0x1447 JumpB
	IsOverrideActive(var_30_bool); // 0x1448 Func
	var_32_bool = var_30_bool == 0; // 0x144a Not
	if(var_32_bool == 0) goto Label_5200; // 0x144b JumpB
	var_33_object = Obj(); // 0x144c PushV
	var_33_object = var_28_object; // 0x144d Mov
	func_4481(var_33_object); // 0x144e NEW_2
	
Label_5200:
	return 2; // 0x1450 Return
	
Label_5202:
	var_40_bool = 0; var_41_object = Obj(); // 0x1452 PushV
	var_41_object = var_28_object; // 0x1453 Mov
	func_5235(var_40_bool, var_41_object); // 0x1454 NEW_2
	var_51_bool = var_40_bool == 0; // 0x1456 Not
	if(var_51_bool == 0) goto Label_5234; // 0x1457 JumpB
	var_52_int = 1000; // 0x1458 PushI
	var_53_int = 0; var_54_object = Obj(); // 0x1459 PushV
	var_54_object = var_28_object; // 0x145a Mov
	TaskCall(1); // 0x145b TaskCall
	func_40(var_55_object, var_53_int, var_54_object); // 0x145c NEW_2
	TaskReturn(); // 0x145d TaskReturn
	var_332_bool = var_52_int == var_55_object; // 0x145f Eq
	if(var_332_bool == 0) goto Label_5234; // 0x1460 JumpB
	var_333_bool = 0; var_334_object = Obj(); // 0x1461 PushV
	var_334_object = var_28_object; // 0x1462 Mov
	func_4070(var_333_bool, var_334_object); // 0x1463 NEW_2
	var_365_bool = var_333_bool == 0; // 0x1465 Not
	if(var_365_bool == 0) goto Label_5224; // 0x1466 JumpB
	return 2; // 0x1467 Return
	
Label_5224:
	var_366_object = Obj(); // 0x1468 PushV
	var_366_object = var_28_object; // 0x1469 Mov
	TaskCall(0); // 0x146a TaskCall
	func_0(var_366_object); // 0x146b NEW_2
	TaskReturn(); // 0x146c TaskReturn
	var_373_object = Obj(); // 0x146e PushV
	var_373_object = var_28_object; // 0x146f Mov
	func_4126(); // 0x1470 NEW_2
	
Label_5234:
	return 2; // 0x1472 Return
}


func_3655(var_250_string)
{
	var_250_string = "run"; // 0xe47 MovS
	return 0; // 0xe48 Return
}


func_2632()
{
	var_51_int = 0; var_52_int = 0; var_53_int = 0; var_54_int = 0; var_55_bool = 0; var_56_float = 0; var_57_bool = 0; var_58_int = 0; var_59_int = 0; var_60_int = 0; var_61_int = 0; var_62_bool = 0; var_63_float = 0; var_64_bool = 0; // 0xa48 PushV
	WaitForAnimEnd(); // 0xa49 Func
	var_65_bool = 0; // 0xa4b PushV
	func_3978(var_65_bool); // 0xa4c NEW_2
	var_66_bool = var_65_bool == 0; // 0xa4e Not
	if(var_66_bool == 0) goto Label_2641; // 0xa4f JumpB
	return 14; // 0xa50 Return
	
Label_2641:
	var_67_int = 0; // 0xa51 PushV
	func_4926(var_67_int); // 0xa52 NEW_2
	var_58_int = var_67_int; // 0xa53 Mov
	var_59_int = 0; // 0xa55 MovI
	
Label_2646:
	var_80_bool = 0; // 0xa56 PushV
	var_80_bool = 0; // 0xa57 MovB
	var_81_int = 5; // 0xa58 PushI
	var_82_bool = var_59_int < var_81_int; // 0xa59 LT
	if(var_82_bool == 0) goto Label_2656; // 0xa5a JumpB
	var_83_bool = 0; // 0xa5b PushV
	func_3978(var_83_bool); // 0xa5c NEW_2
	if(var_83_bool == 0) goto Label_2656; // 0xa5e JumpB
	var_80_bool = 1; // 0xa5f MovB
	
Label_2656:
	if(var_80_bool == 0) goto Label_2708; // 0xa60 JumpB
	var_84_int = 3; // 0xa61 PushI
	irand(var_60_int, var_84_int); // 0xa62 Func
	var_85_int = 0; // 0xa64 PushI
	var_86_bool = var_60_int == var_85_int; // 0xa65 Eq
	if(var_86_bool == 0) goto Label_2680; // 0xa66 JumpB
	var_87_int = var_58_int; // 0xa67 Push
	if(var_87_int == 0) goto Label_2679; // 0xa68 JumpB
	irand(var_61_int, var_58_int); // 0xa69 Func
	var_88_string = "all"; // 0xa6b PushS
	var_89_string = ""; var_90_int = 0; // 0xa6c PushV
	var_90_int = var_61_int; // 0xa6d Mov
	func_4919(var_89_string, var_90_int); // 0xa6e NEW_2
	PlayAnimation(var_88_string, var_89_string); // 0xa70 Func
	WaitForAnimEnd(var_62_bool); // 0xa72 Func
	var_91_bool = var_62_bool == 0; // 0xa74 Not
	if(var_91_bool == 0) goto Label_2679; // 0xa75 JumpB
	goto Label_2708; // 0xa76 Jump
	
Label_2708:
	ResetAAS(); // 0xa94 Func
	return 14; // 0xa96 Return
	
Label_2679:
	goto Label_2697; // 0xa77 Jump
	
Label_2697:
	var_92_bool = 0; // 0xa89 PushV
	func_2711(var_92_bool); // 0xa8a NEW_2
	var_93_bool = var_92_bool == 0; // 0xa8c Not
	if(var_93_bool == 0) goto Label_2703; // 0xa8d JumpB
	goto Label_2708; // 0xa8e Jump
	
Label_2703:
	ResetAAS(); // 0xa8f Func
	var_94_int = 1; // 0xa91 PushI
	var_59_int = var_59_int + var_94_int; // 0xa92 Add2
	goto Label_2646; // 0xa93 Jump
	
Label_2680:
	var_95_int = 1; // 0xa78 PushI
	var_96_bool = var_60_int == var_95_int; // 0xa79 Eq
	if(var_96_bool == 0) goto Label_2694; // 0xa7a JumpB
	var_97_int = 4; // 0xa7b PushI
	rand(var_63_float, var_97_int); // 0xa7c Func
	var_98_int = 1; // 0xa7e PushI
	var_99_int = var_63_float + var_98_int; // 0xa7f Add
	Sleep(var_99_int, var_64_bool); // 0xa80 Func
	var_100_bool = var_64_bool == 0; // 0xa82 Not
	if(var_100_bool == 0) goto Label_2693; // 0xa83 JumpB
	goto Label_2708; // 0xa84 Jump
	
Label_2693:
	goto Label_2697; // 0xa85 Jump
	
Label_2694:
	var_101_int = var_59_int; // 0xa86 Push
	if(var_101_int == 0) goto Label_2697; // 0xa87 JumpB
	goto Label_2708; // 0xa88 Jump
}


func_3657(var_477_string, var_478_int)
{
	var_479_int = 2; // 0xe4a PushI
	var_480_bool = var_478_int == var_479_int; // 0xe4b Eq
	if(var_480_bool == 0) goto Label_3664; // 0xe4c JumpB
	var_477_string = "fire"; // 0xe4d MovS
	return 0; // 0xe4e Return
	
Label_3664:
	var_481_int = 1; // 0xe50 PushI
	var_482_bool = var_478_int == var_481_int; // 0xe51 Eq
	if(var_482_bool == 0) goto Label_3669; // 0xe52 JumpB
	var_477_string = "bullet"; // 0xe53 MovS
	return 0; // 0xe54 Return
	
Label_3669:
	var_477_string = "phys"; // 0xe55 MovS
	return 0; // 0xe56 Return
}


func_4173()
{
	var_21_bool = 0; // 0x104d PushV
	func_5183(var_21_bool); // 0x104e NEW_2
	if(var_21_bool == 0) goto Label_4179; // 0x1050 JumpB
	lshStopSpeech(); // 0x1051 Func
	
Label_4179:
	return 0; // 0x1053 Return
}


func_4180(var_44_string)
{
	var_45_bool = 0; var_46_int = 0; var_47_bool = 0; var_48_int = 0; var_49_bool = 0; var_50_float = 0; var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_bool = 0; var_54_int = 0; var_55_bool = 0; var_56_int = 0; var_57_bool = 0; var_58_float = 0; var_59_cvector = CVector(0,0,0); var_60_cvector = CVector(0,0,0); // 0x1054 PushV
	IsExisting3DSound(var_53_bool, var_44_string); // 0x1055 Func
	var_61_bool = var_53_bool == 0; // 0x1057 Not
	if(var_61_bool == 0) goto Label_4205; // 0x1058 JumpB
	var_54_int = 0; // 0x1059 MovI
	
Label_4186:
	var_62_int = 1; // 0x105a PushI
	var_63_int = var_54_int + var_62_int; // 0x105b Add
	var_64_int = var_44_string + var_63_int; // 0x105c Add
	IsExisting3DSound(var_55_bool, var_64_int); // 0x105d Func
	var_65_bool = var_55_bool == 0; // 0x105f Not
	if(var_65_bool == 0) goto Label_4194; // 0x1060 JumpB
	goto Label_4197; // 0x1061 Jump
	
Label_4197:
	var_66_bool = var_54_int == 0; // 0x1065 Not
	if(var_66_bool == 0) goto Label_4200; // 0x1066 JumpB
	return 16; // 0x1067 Return
	
Label_4200:
	irand(var_56_int, var_54_int); // 0x1068 Func
	var_67_int = 1; // 0x106a PushI
	var_68_int = var_56_int + var_67_int; // 0x106b Add
	var_44_string = var_44_string + var_68_int; // 0x106c Add2
	
Label_4205:
	Is3DSoundLoaded(var_57_bool, var_44_string); // 0x106d Func
	var_69_bool = var_57_bool; // 0x106f Push
	if(var_69_bool == 0) goto Label_4220; // 0x1070 JumpB
	GetEyesHeight(var_58_float); // 0x1071 Func
	GetDirection(var_59_cvector); // 0x1073 Func
	var_70_int = 50; // 0x1075 PushI
	var_60_cvector = var_59_cvector * var_70_int; // 0x1076 Mult2
	var_71_float = GetByIndex(var_60_cvector, 1); // 0x1077 PushE
	var_71_float = var_71_float + var_58_float; // 0x1078 Add2
	SetByIndex(var_60_cvector, 1) = var_71_float; // 0x1079 PopE
	PlayGlobalSound(var_44_string, var_60_cvector); // 0x107a Func
	
Label_4220:
	return 16; // 0x107c Return
	
Label_4194:
	var_72_int = 1; // 0x1062 PushI
	var_54_int = var_54_int + var_72_int; // 0x1063 Add2
	goto Label_4186; // 0x1064 Jump
}


func_3671(var_52_cvector)
{
	var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); var_56_cvector = CVector(0,0,0); var_57_cvector = CVector(0,0,0); // 0xe57 PushV
	GetPosition(var_56_cvector); // 0xe58 Func
	GetPosition(var_57_cvector); // 0xe5a ObjFunc
	var_52_cvector = var_57_cvector - var_56_cvector; // 0xe5c Sub2
	return 4; // 0xe5d Return
}


func_3678(var_75_float)
{
	var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0); var_79_cvector = CVector(0,0,0); var_80_cvector = CVector(0,0,0); var_81_cvector = CVector(0,0,0); var_82_cvector = CVector(0,0,0); // 0xe5e PushV
	GetPosition(var_80_cvector); // 0xe5f Func
	GetPosition(var_81_cvector); // 0xe61 ObjFunc
	var_82_cvector = var_81_cvector - var_80_cvector; // 0xe63 Sub2
	var_75_float = var_82_cvector | var_82_cvector; // 0xe64 Or2
	return 6; // 0xe65 Return
}


func_3172(var_540_bool, var_541_float)
{
	var_542_float = 0; var_543_bool = 0; var_544_float = 0; var_545_bool = 0; // 0xc64 PushV
	rand(var_544_float); // 0xc65 Func
	var_546_bool = var_544_float < var_541_float; // 0xc67 LT
	if(var_546_bool == 0) goto Label_3192; // 0xc68 JumpB
	
Label_3177:
	IsAnimationPlaying(var_545_bool); // 0xc69 Func
	var_547_bool = var_545_bool == 0; // 0xc6b Not
	if(var_547_bool == 0) goto Label_3182; // 0xc6c JumpB
	goto Label_3191; // 0xc6d Jump
	
Label_3191:
	goto Label_3197; // 0xc77 Jump
	
Label_3197:
	var_540_bool = 0; // 0xc7d MovB
	return 4; // 0xc7e Return
	
Label_3182:
	var_548_bool = 0; // 0xc6e PushV
	func_3270(var_548_bool); // 0xc6f NEW_2
	if(var_548_bool == 0) goto Label_3188; // 0xc71 JumpB
	var_540_bool = 1; // 0xc72 MovB
	return 4; // 0xc73 Return
	
Label_3188:
	sync(); // 0xc74 Func
	goto Label_3177; // 0xc76 Jump
	
Label_3192:
	WaitForAnimEnd(); // 0xc78 Func
	func_3374(var_545_bool); // 0xc7b NEW_2
}


func_3686(var_102_bool, var_103_object)
{
	var_104_bool = 0; var_105_bool = 0; // 0xe66 PushV
	IsPlayerActor(var_103_object, var_105_bool); // 0xe67 Func
	var_102_bool = var_105_bool; // 0xe69 Mov
	return 2; // 0xe6a Return
}


func_3691(var_53_bool, var_54_object, var_55_string)
{
	var_56_bool = 0; var_57_bool = 0; // 0xe6b PushV
	var_58_string = "HasProperty"; // 0xe6c PushS
	var_59_int = 2; // 0xe6d PushI
	var_60_bool = IsFuncExist(var_54_object, var_58_string, var_59_int); // 0xe6e FuncExist
	var_61_bool = var_60_bool == 0; // 0xe6f Not
	if(var_61_bool == 0) goto Label_3699; // 0xe70 JumpB
	var_53_bool = 0; // 0xe71 MovB
	return 2; // 0xe72 Return
	
Label_3699:
	HasProperty(var_55_string, var_57_bool); // 0xe73 ObjFunc
	var_53_bool = var_57_bool; // 0xe75 Mov
	return 2; // 0xe76 Return
}


func_114(var_0_bool, var_1_object, var_2_object, var_3_object, var_125_object, var_126_object)
{
	var_0_bool = var_126_object; // 0x73 TMov
	var_1_object = var_125_object; // 0x74 TMov
	var_3_object = 0; // 0x75 TMovB
	var_131_int = 1; // 0x76 PushI
	if(var_131_int == 0) goto Label_394; // 0x77 JumpB
	var_132_bool = 0; // 0x78 PushV
	var_132_bool = 0; // 0x79 MovB
	var_133_bool = 0; var_134_object = Obj(); // 0x7a PushV
	var_134_object = var_1_object; // 0x7b MovT
	func_4326(var_134_object); // 0x7c NEW_2
	if(var_133_bool == 0) goto Label_133; // 0x7e JumpB
	var_141_bool = 0; var_142_object = Obj(); // 0x7f PushV
	var_142_object = var_1_object; // 0x80 MovT
	func_4358(var_141_bool, var_142_object); // 0x81 NEW_2
	if(var_141_bool == 0) goto Label_133; // 0x83 JumpB
	var_132_bool = 1; // 0x84 MovB
	
Label_133:
	if(var_132_bool == 0) goto Label_159; // 0x85 JumpB
	var_152_string = ""; // 0x86 PushV
	var_152_string = "Neutral"; // 0x87 MovS
	func_424(var_126_object, var_152_string); // 0x88 NEW_2
	var_169_int = 543329; // 0x8a PushI
	SetMessage(var_169_int); // 0x8b TObjFunc
	ClearReplies(); // 0x8d TObjFunc
	var_170_int = 543330; // 0x8f PushI
	var_171_int = 45790; // 0x90 PushI
	var_172_int = 45787; // 0x91 PushI
	AddReply(var_170_int, var_171_int, var_172_int); // 0x92 TObjFunc
	var_173_int = 543332; // 0x94 PushI
	var_174_int = 45790; // 0x95 PushI
	var_175_int = 45789; // 0x96 PushI
	AddReply(var_173_int, var_174_int, var_175_int); // 0x97 TObjFunc
	var_176_int = 543331; // 0x99 PushI
	var_177_int = -1; // 0x9a PushI
	var_178_int = 45788; // 0x9b PushI
	AddReply(var_176_int, var_177_int, var_178_int); // 0x9c TObjFunc
	goto Label_394; // 0x9e Jump
	
Label_394:
	var_179_bool = 0; // 0x18a PushV
	func_5183(var_179_bool); // 0x18b NEW_2
	if(var_179_bool == 0) goto Label_409; // 0x18d JumpB
	
Label_398:
	lshWaitForAnimEnd(); // 0x18e Func
	var_180_object = var_3_object; // 0x190 PushT
	if(var_180_object == 0) goto Label_403; // 0x191 JumpB
	goto Label_408; // 0x192 Jump
	
Label_408:
	goto Label_423; // 0x198 Jump
	
Label_423:
	return 0; // 0x1a7 Return
	
Label_403:
	var_181_string = ""; // 0x193 PushV
	var_181_string = var_2_object; // 0x194 MovT
	func_4131(var_181_string); // 0x195 NEW_2
	goto Label_398; // 0x197 Jump
	
Label_409:
	var_192_string = "all"; // 0x199 PushS
	var_193_string = "idle"; // 0x19a PushS
	PlayAnimation(var_192_string, var_193_string); // 0x19b Func
	
Label_413:
	WaitForAnimEnd(); // 0x19d Func
	var_194_object = var_3_object; // 0x19f PushT
	if(var_194_object == 0) goto Label_418; // 0x1a0 JumpB
	goto Label_423; // 0x1a1 Jump
	
Label_418:
	var_195_string = "all"; // 0x1a2 PushS
	var_196_string = "idle"; // 0x1a3 PushS
	PlayAnimation(var_195_string, var_196_string); // 0x1a4 Func
	goto Label_413; // 0x1a6 Jump
	
Label_159:
	var_197_bool = 0; // 0x9f PushV
	var_197_bool = 0; // 0xa0 MovB
	var_198_bool = 0; var_199_object = Obj(); // 0xa1 PushV
	var_199_object = var_1_object; // 0xa2 MovT
	func_4326(var_199_object); // 0xa3 NEW_2
	if(var_198_bool == 0) goto Label_173; // 0xa5 JumpB
	var_200_bool = 0; var_201_object = Obj(); // 0xa6 PushV
	var_201_object = var_1_object; // 0xa7 MovT
	func_4358(var_200_bool, var_201_object); // 0xa8 NEW_2
	var_202_bool = var_200_bool == 0; // 0xaa Not
	if(var_202_bool == 0) goto Label_173; // 0xab JumpB
	var_197_bool = 1; // 0xac MovB
	
Label_173:
	if(var_197_bool == 0) goto Label_189; // 0xad JumpB
	var_203_string = ""; // 0xae PushV
	var_203_string = "Neutral"; // 0xaf MovS
	func_424(var_126_object, var_203_string); // 0xb0 NEW_2
	var_204_int = 543328; // 0xb2 PushI
	SetMessage(var_204_int); // 0xb3 TObjFunc
	ClearReplies(); // 0xb5 TObjFunc
	var_205_int = 543336; // 0xb7 PushI
	var_206_int = -1; // 0xb8 PushI
	var_207_int = 45794; // 0xb9 PushI
	AddReply(var_205_int, var_206_int, var_207_int); // 0xba TObjFunc
	goto Label_394; // 0xbc Jump
	
Label_189:
	var_208_string = ""; // 0xbd PushV
	var_208_string = "Neutral"; // 0xbe MovS
	func_424(var_126_object, var_208_string); // 0xbf NEW_2
	var_209_int = 537969; // 0xc1 PushI
	SetMessage(var_209_int); // 0xc2 TObjFunc
	ClearReplies(); // 0xc4 TObjFunc
	var_210_bool = 0; // 0xc6 PushV
	var_210_bool = 0; // 0xc7 MovB
	var_211_bool = 0; var_212_object = Obj(); // 0xc8 PushV
	var_212_object = var_1_object; // 0xc9 MovT
	func_4338(var_211_bool, var_212_object); // 0xca NEW_2
	if(var_211_bool == 0) goto Label_211; // 0xcc JumpB
	var_217_bool = 0; var_218_object = Obj(); // 0xcd PushV
	var_218_object = var_1_object; // 0xce MovT
	func_4314(var_218_object); // 0xcf NEW_2
	if(var_217_bool == 0) goto Label_211; // 0xd1 JumpB
	var_210_bool = 1; // 0xd2 MovB
	
Label_211:
	if(var_210_bool == 0) goto Label_217; // 0xd3 JumpB
	var_223_int = 537970; // 0xd4 PushI
	var_224_int = 39833; // 0xd5 PushI
	var_225_int = 39832; // 0xd6 PushI
	AddReply(var_223_int, var_224_int, var_225_int); // 0xd7 TObjFunc
	
Label_217:
	var_226_bool = 0; // 0xd9 PushV
	var_226_bool = 0; // 0xda MovB
	var_227_bool = 0; var_228_object = Obj(); // 0xdb PushV
	var_228_object = var_1_object; // 0xdc MovT
	func_4338(var_227_bool, var_228_object); // 0xdd NEW_2
	if(var_227_bool == 0) goto Label_230; // 0xdf JumpB
	var_229_bool = 0; var_230_object = Obj(); // 0xe0 PushV
	var_230_object = var_1_object; // 0xe1 MovT
	func_4314(var_230_object); // 0xe2 NEW_2
	if(var_229_bool == 0) goto Label_230; // 0xe4 JumpB
	var_226_bool = 1; // 0xe5 MovB
	
Label_230:
	if(var_226_bool == 0) goto Label_236; // 0xe6 JumpB
	var_231_int = 537995; // 0xe7 PushI
	var_232_int = 39861; // 0xe8 PushI
	var_233_int = 39860; // 0xe9 PushI
	AddReply(var_231_int, var_232_int, var_233_int); // 0xea TObjFunc
	
Label_236:
	var_234_bool = 0; // 0xec PushV
	var_234_bool = 0; // 0xed MovB
	var_235_bool = 0; var_236_object = Obj(); // 0xee PushV
	var_236_object = var_1_object; // 0xef MovT
	func_4338(var_235_bool, var_236_object); // 0xf0 NEW_2
	if(var_235_bool == 0) goto Label_249; // 0xf2 JumpB
	var_237_bool = 0; var_238_object = Obj(); // 0xf3 PushV
	var_238_object = var_1_object; // 0xf4 MovT
	func_4314(var_238_object); // 0xf5 NEW_2
	if(var_237_bool == 0) goto Label_249; // 0xf7 JumpB
	var_234_bool = 1; // 0xf8 MovB
	
Label_249:
	if(var_234_bool == 0) goto Label_255; // 0xf9 JumpB
	var_239_int = 538003; // 0xfa PushI
	var_240_int = 39869; // 0xfb PushI
	var_241_int = 39868; // 0xfc PushI
	AddReply(var_239_int, var_240_int, var_241_int); // 0xfd TObjFunc
	
Label_255:
	var_242_bool = 0; // 0xff PushV
	var_242_bool = 0; // 0x100 MovB
	var_243_bool = 0; var_244_object = Obj(); // 0x101 PushV
	var_244_object = var_1_object; // 0x102 MovT
	func_4338(var_243_bool, var_244_object); // 0x103 NEW_2
	if(var_243_bool == 0) goto Label_268; // 0x105 JumpB
	var_245_bool = 0; var_246_object = Obj(); // 0x106 PushV
	var_246_object = var_1_object; // 0x107 MovT
	func_4314(var_246_object); // 0x108 NEW_2
	if(var_245_bool == 0) goto Label_268; // 0x10a JumpB
	var_242_bool = 1; // 0x10b MovB
	
Label_268:
	if(var_242_bool == 0) goto Label_274; // 0x10c JumpB
	var_247_int = 538012; // 0x10d PushI
	var_248_int = 39878; // 0x10e PushI
	var_249_int = 39877; // 0x10f PushI
	AddReply(var_247_int, var_248_int, var_249_int); // 0x110 TObjFunc
	
Label_274:
	var_250_bool = 0; // 0x112 PushV
	var_250_bool = 0; // 0x113 MovB
	var_251_bool = 0; // 0x114 PushV
	var_251_bool = 0; // 0x115 MovB
	var_252_bool = 0; var_253_object = Obj(); // 0x116 PushV
	var_253_object = var_1_object; // 0x117 MovT
	func_4338(var_252_bool, var_253_object); // 0x118 NEW_2
	if(var_252_bool == 0) goto Label_289; // 0x11a JumpB
	var_254_bool = 0; var_255_object = Obj(); // 0x11b PushV
	var_255_object = var_1_object; // 0x11c MovT
	func_4388(var_254_bool, var_255_object); // 0x11d NEW_2
	if(var_254_bool == 0) goto Label_289; // 0x11f JumpB
	var_251_bool = 1; // 0x120 MovB
	
Label_289:
	if(var_251_bool == 0) goto Label_296; // 0x121 JumpB
	var_265_bool = 0; var_266_object = Obj(); // 0x122 PushV
	var_266_object = var_1_object; // 0x123 MovT
	func_4314(var_266_object); // 0x124 NEW_2
	if(var_265_bool == 0) goto Label_296; // 0x126 JumpB
	var_250_bool = 1; // 0x127 MovB
	
Label_296:
	if(var_250_bool == 0) goto Label_302; // 0x128 JumpB
	var_267_int = 538017; // 0x129 PushI
	var_268_int = 39883; // 0x12a PushI
	var_269_int = 39882; // 0x12b PushI
	AddReply(var_267_int, var_268_int, var_269_int); // 0x12c TObjFunc
	
Label_302:
	var_270_bool = 0; // 0x12e PushV
	var_270_bool = 0; // 0x12f MovB
	var_271_bool = 0; // 0x130 PushV
	var_271_bool = 0; // 0x131 MovB
	var_272_bool = 0; var_273_object = Obj(); // 0x132 PushV
	var_273_object = var_1_object; // 0x133 MovT
	func_4348(var_272_bool, var_273_object); // 0x134 NEW_2
	if(var_272_bool == 0) goto Label_317; // 0x136 JumpB
	var_278_bool = 0; var_279_object = Obj(); // 0x137 PushV
	var_279_object = var_1_object; // 0x138 MovT
	func_4378(var_278_bool, var_279_object); // 0x139 NEW_2
	if(var_278_bool == 0) goto Label_317; // 0x13b JumpB
	var_271_bool = 1; // 0x13c MovB
	
Label_317:
	if(var_271_bool == 0) goto Label_324; // 0x13d JumpB
	var_289_bool = 0; var_290_object = Obj(); // 0x13e PushV
	var_290_object = var_1_object; // 0x13f MovT
	func_4314(var_290_object); // 0x140 NEW_2
	if(var_289_bool == 0) goto Label_324; // 0x142 JumpB
	var_270_bool = 1; // 0x143 MovB
	
Label_324:
	if(var_270_bool == 0) goto Label_330; // 0x144 JumpB
	var_291_int = 538043; // 0x145 PushI
	var_292_int = 39911; // 0x146 PushI
	var_293_int = 39910; // 0x147 PushI
	AddReply(var_291_int, var_292_int, var_293_int); // 0x148 TObjFunc
	
Label_330:
	var_294_bool = 0; // 0x14a PushV
	var_294_bool = 0; // 0x14b MovB
	var_295_bool = 0; // 0x14c PushV
	var_295_bool = 0; // 0x14d MovB
	var_296_bool = 0; var_297_object = Obj(); // 0x14e PushV
	var_297_object = var_1_object; // 0x14f MovT
	func_4368(var_296_bool, var_297_object); // 0x150 NEW_2
	if(var_296_bool == 0) goto Label_345; // 0x152 JumpB
	var_302_bool = 0; var_303_object = Obj(); // 0x153 PushV
	var_303_object = var_1_object; // 0x154 MovT
	func_4378(var_302_bool, var_303_object); // 0x155 NEW_2
	if(var_302_bool == 0) goto Label_345; // 0x157 JumpB
	var_295_bool = 1; // 0x158 MovB
	
Label_345:
	if(var_295_bool == 0) goto Label_352; // 0x159 JumpB
	var_304_bool = 0; var_305_object = Obj(); // 0x15a PushV
	var_305_object = var_1_object; // 0x15b MovT
	func_4314(var_305_object); // 0x15c NEW_2
	if(var_304_bool == 0) goto Label_352; // 0x15e JumpB
	var_294_bool = 1; // 0x15f MovB
	
Label_352:
	if(var_294_bool == 0) goto Label_358; // 0x160 JumpB
	var_306_int = 538083; // 0x161 PushI
	var_307_int = 39952; // 0x162 PushI
	var_308_int = 39951; // 0x163 PushI
	AddReply(var_306_int, var_307_int, var_308_int); // 0x164 TObjFunc
	
Label_358:
	var_309_bool = 0; // 0x166 PushV
	var_309_bool = 0; // 0x167 MovB
	var_310_bool = 0; // 0x168 PushV
	var_310_bool = 0; // 0x169 MovB
	var_311_bool = 0; var_312_object = Obj(); // 0x16a PushV
	var_312_object = var_1_object; // 0x16b MovT
	func_4368(var_311_bool, var_312_object); // 0x16c NEW_2
	if(var_311_bool == 0) goto Label_373; // 0x16e JumpB
	var_313_bool = 0; var_314_object = Obj(); // 0x16f PushV
	var_314_object = var_1_object; // 0x170 MovT
	func_4388(var_313_bool, var_314_object); // 0x171 NEW_2
	if(var_313_bool == 0) goto Label_373; // 0x173 JumpB
	var_310_bool = 1; // 0x174 MovB
	
Label_373:
	if(var_310_bool == 0) goto Label_380; // 0x175 JumpB
	var_315_bool = 0; var_316_object = Obj(); // 0x176 PushV
	var_316_object = var_1_object; // 0x177 MovT
	func_4314(var_316_object); // 0x178 NEW_2
	if(var_315_bool == 0) goto Label_380; // 0x17a JumpB
	var_309_bool = 1; // 0x17b MovB
	
Label_380:
	if(var_309_bool == 0) goto Label_386; // 0x17c JumpB
	var_317_int = 538110; // 0x17d PushI
	var_318_int = 39980; // 0x17e PushI
	var_319_int = 39979; // 0x17f PushI
	AddReply(var_317_int, var_318_int, var_319_int); // 0x180 TObjFunc
	
Label_386:
	var_320_int = 538126; // 0x182 PushI
	var_321_int = -1; // 0x183 PushI
	var_322_int = 39997; // 0x184 PushI
	AddReply(var_320_int, var_321_int, var_322_int); // 0x185 TObjFunc
	goto Label_394; // 0x187 Jump
}


func_5235(var_40_bool, var_41_object)
{
	var_42_float = 0; var_43_float = 0; // 0x1473 PushV
	var_44_bool = 0; var_45_object = Obj(); // 0x1474 PushV
	var_45_object = var_41_object; // 0x1475 Mov
	func_3686(var_44_bool, var_45_object); // 0x1476 NEW_2
	if(var_44_bool == 0) goto Label_5249; // 0x1478 JumpB
	var_48_string = "reputation"; // 0x1479 PushS
	GetProperty(var_48_string, var_43_float); // 0x147a ObjFunc
	var_49_float = 0.4; // 0x147c PushF
	var_50_bool = var_43_float < var_49_float; // 0x147d LT
	if(var_50_bool == 0) goto Label_5249; // 0x147e JumpB
	var_40_bool = 1; // 0x147f MovB
	return 2; // 0x1480 Return
	
Label_5249:
	var_40_bool = 0; // 0x1481 MovB
	return 2; // 0x1482 Return
}


func_3703(var_449_float, var_450_object, var_451_float, var_452_int)
{
	var_456_int = 0; var_457_string = ""; var_458_int = 0; var_459_float = 0; var_460_float = 0; var_461_float = 0; var_462_int = 0; var_463_string = ""; var_464_int = 0; var_465_float = 0; var_466_float = 0; var_467_float = 0; // 0xe77 PushV
	var_468_bool = 0; var_469_object = Obj(); var_470_string = ""; // 0xe78 PushV
	var_469_object = var_450_object; // 0xe79 Mov
	var_470_string = "health"; // 0xe7a MovS
	func_3691(var_468_bool, var_469_object, var_470_string); // 0xe7b NEW_2
	var_471_bool = var_468_bool == 0; // 0xe7d Not
	if(var_471_bool == 0) goto Label_3713; // 0xe7e JumpB
	var_449_float = 0.0; // 0xe7f MovF
	return 12; // 0xe80 Return
	
Label_3713:
	var_472_bool = 0; var_473_object = Obj(); var_474_string = ""; // 0xe81 PushV
	var_473_object = var_450_object; // 0xe82 Mov
	var_474_string = "armor"; // 0xe83 MovS
	func_3691(var_472_bool, var_473_object, var_474_string); // 0xe84 NEW_2
	var_475_bool = var_472_bool == 0; // 0xe86 Not
	if(var_475_bool == 0) goto Label_3722; // 0xe87 JumpB
	var_462_int = 0; // 0xe88 MovI
	goto Label_3725; // 0xe89 Jump
	
Label_3725:
	var_476_string = "armor_"; // 0xe8d PushS
	var_477_string = ""; var_478_int = 0; // 0xe8e PushV
	var_478_int = var_452_int; // 0xe8f Mov
	func_3657(var_477_string, var_478_int); // 0xe90 NEW_2
	var_463_string = var_476_string + var_477_string; // 0xe92 Add2
	var_483_bool = 0; var_484_object = Obj(); var_485_string = ""; // 0xe93 PushV
	var_484_object = var_450_object; // 0xe94 Mov
	var_485_string = var_463_string; // 0xe95 Mov
	func_3691(var_483_bool, var_484_object, var_485_string); // 0xe96 NEW_2
	var_486_bool = var_483_bool == 0; // 0xe98 Not
	if(var_486_bool == 0) goto Label_3740; // 0xe99 JumpB
	var_464_int = 0; // 0xe9a MovI
	goto Label_3742; // 0xe9b Jump
	
Label_3742:
	var_487_float = 0; var_488_float = 0; var_489_float = 0; // 0xe9e PushV
	var_490_int = var_462_int + var_464_int; // 0xe9f Add
	var_491_float = 100.0; // 0xea0 PushF
	var_488_float = var_490_int / var_490_int; // 0xea1 Div2
	var_489_float = 1; // 0xea2 MovI
	func_4237(var_487_float, var_488_float, var_489_float); // 0xea3 NEW_2
	var_465_float = var_487_float; // 0xea4 Mov
	var_493_string = "health"; // 0xea6 PushS
	GetProperty(var_493_string, var_466_float); // 0xea7 ObjFunc
	var_494_int = 1; // 0xea9 PushI
	var_495_int = var_494_int - var_465_float; // 0xeaa Sub
	var_467_float = var_451_float * var_495_int; // 0xeab Mult2
	var_496_string = "health"; // 0xeac PushS
	var_497_float = 0; var_498_float = 0; var_499_float = 0; var_500_float = 0; // 0xead PushV
	var_498_float = var_466_float - var_467_float; // 0xeae Sub2
	var_499_float = 0; // 0xeaf MovI
	var_500_float = 1; // 0xeb0 MovI
	func_4244(var_497_float, var_498_float, var_499_float, var_500_float); // 0xeb1 NEW_2
	SetProperty(var_496_string, var_497_float); // 0xeb3 ObjFunc
	var_503_bool = 0; var_504_object = Obj(); // 0xeb5 PushV
	var_504_object = var_450_object; // 0xeb6 Mov
	func_3686(var_503_bool, var_504_object); // 0xeb7 NEW_2
	if(var_503_bool == 0) goto Label_3774; // 0xeb9 JumpB
	var_505_float = 0; // 0xeba PushV
	var_505_float = -var_467_float; // 0xebb Neg2
	func_4260(var_505_float); // 0xebc NEW_2
	
Label_3774:
	var_449_float = var_467_float; // 0xebe Mov
	return 12; // 0xebf Return
	
Label_3740:
	GetProperty(var_463_string, var_464_int); // 0xe9c ObjFunc
	
Label_3722:
	var_513_string = "armor"; // 0xe8a PushS
	GetProperty(var_513_string, var_462_int); // 0xe8b ObjFunc
}


func_4221(var_106_object)
{
	var_107_object = Obj(); var_108_object = Obj(); // 0x107d PushV
	self(var_108_object); // 0x107e Func
	var_106_object = var_108_object; // 0x1080 Mov
	return 2; // 0x1081 Return
}


func_3199(var_0_bool, var_337_bool, var_338_float)
{
	var_339_bool = 0; var_340_cvector = CVector(0,0,0); var_341_cvector = CVector(0,0,0); var_342_cvector = CVector(0,0,0); var_343_float = 0; var_344_bool = 0; var_345_cvector = CVector(0,0,0); var_346_cvector = CVector(0,0,0); var_347_cvector = CVector(0,0,0); var_348_float = 0; // 0xc7f PushV
	
Label_3200:
	IsAnimationPlaying(var_344_bool); // 0xc80 Func
	var_349_bool = var_344_bool == 0; // 0xc82 Not
	if(var_349_bool == 0) goto Label_3205; // 0xc83 JumpB
	goto Label_3237; // 0xc84 Jump
	
Label_3237:
	func_3374(var_348_float); // 0xca6 NEW_2
	var_337_bool = 0; // 0xca8 MovB
	return 10; // 0xca9 Return
	
Label_3205:
	var_350_bool = 0; // 0xc85 PushV
	func_3270(var_350_bool); // 0xc86 NEW_2
	if(var_350_bool == 0) goto Label_3211; // 0xc88 JumpB
	var_337_bool = 1; // 0xc89 MovB
	return 10; // 0xc8a Return
	
Label_3211:
	var_393_bool = 0; var_394_object = Obj(); // 0xc8b PushV
	var_394_object = var_0_bool; // 0xc8c MovT
	func_3817(var_393_bool, var_394_object); // 0xc8d NEW_2
	var_395_bool = var_393_bool == 0; // 0xc8f Not
	if(var_395_bool == 0) goto Label_3219; // 0xc90 JumpB
	var_337_bool = 0; // 0xc91 MovB
	return 10; // 0xc92 Return
	
Label_3219:
	GetPFPosition(var_345_cvector); // 0xc93 TObjFunc
	GetPFPosition(var_346_cvector); // 0xc95 Func
	var_347_cvector = var_345_cvector - var_346_cvector; // 0xc97 Sub2
	var_348_float = var_347_cvector | var_347_cvector; // 0xc98 Or2
	var_396_float = var_338_float * var_338_float; // 0xc99 Mult
	var_397_bool = var_348_float < var_396_float; // 0xc9a LT
	if(var_397_bool == 0) goto Label_3234; // 0xc9b JumpB
	var_398_bool = 0; var_399_float = 0; // 0xc9c PushV
	var_399_float = var_338_float; // 0xc9d Mov
	func_3035(var_348_float, var_398_bool, var_399_float); // 0xc9e NEW_2
	var_337_bool = 1; // 0xca0 MovB
	return 10; // 0xca1 Return
	
Label_3234:
	sync(); // 0xca2 Func
	goto Label_3200; // 0xca4 Jump
}


func_4227(var_50_cvector, var_51_cvector)
{
	var_58_float = 0; var_59_float = 0; // 0x1083 PushV
	var_60_int = var_51_cvector | var_51_cvector; // 0x1084 Or
	var_59_float = sqrt(var_60_int); // 0x1085 Sqrt2
	var_61_float = 0.0; // 0x1086 PushF
	var_62_bool = var_59_float < var_61_float; // 0x1087 LT
	if(var_62_bool == 0) goto Label_4235; // 0x1088 JumpB
	var_50_cvector = CVector(0.0, 0.0, 0.0); // 0x1089 MovV
	return 2; // 0x108a Return
	
Label_4235:
	var_50_cvector = var_51_cvector / var_51_cvector; // 0x108b Div2
	return 2; // 0x108c Return
}


func_5251(var_90_bool)
{
	var_90_bool = 1; // 0x1484 MovB
	return 0; // 0x1485 Return
}


func_4741(var_138_int, var_139_string)
{
	var_140_int = 0; var_141_int = 0; // 0x1285 PushV
	GetInvItemByName(var_141_int, var_139_string); // 0x1286 Func
	var_138_int = var_141_int; // 0x1288 Mov
	return 2; // 0x1289 Return
}


func_5254(var_23_bool, var_24_object, var_25_object, var_26_bool)
{
	var_27_bool = 0; var_28_object = Obj(); var_29_object = Obj(); var_30_float = 0; var_31_bool = 0; // 0x1487 PushV
	var_28_object = var_24_object; // 0x1488 Mov
	var_29_object = var_25_object; // 0x1489 Mov
	var_30_float = 700.0; // 0x148a MovF
	var_31_bool = var_26_bool; // 0x148b Mov
	func_5065(var_27_bool, var_28_object, var_29_object, var_30_float, var_31_bool); // 0x148c NEW_2
	var_23_bool = var_27_bool; // 0x148d Mov
	return 0; // 0x148f Return
}


func_4746(var_19_object)
{
	var_20_object = Obj(); // 0x128b PushV
	var_20_object = var_19_object; // 0x128c Mov
	TaskCall(3); // 0x128d TaskCall
	func_1943(var_20_object); // 0x128e NEW_2
	TaskReturn(); // 0x128f TaskReturn
	return 0; // 0x1291 Return
}


func_4237(var_487_float, var_488_float, var_489_float)
{
	var_492_bool = var_488_float < var_489_float; // 0x108e LT
	if(var_492_bool == 0) goto Label_4242; // 0x108f JumpB
	var_487_float = var_488_float; // 0x1090 Mov
	goto Label_4243; // 0x1091 Jump
	
Label_4243:
	return 0; // 0x1093 Return
	
Label_4242:
	var_487_float = var_489_float; // 0x1092 Mov
}


func_5264(var_101_object)
{
	var_102_bool = 0; var_103_object = Obj(); // 0x1491 PushV
	var_103_object = var_101_object; // 0x1492 Mov
	func_3686(var_102_bool, var_103_object); // 0x1493 NEW_2
	if(var_102_bool == 0) goto Label_5281; // 0x1495 JumpB
	var_106_object = Obj(); // 0x1496 PushV
	func_4221(var_106_object); // 0x1497 NEW_2
	var_109_float = -0.04; // 0x1499 PushF
	var_110_bool = 1; // 0x149a PushB
	ReportReputationChange(var_101_object, var_106_object, var_109_float, var_110_bool); // 0x149b Func
	var_111_bool = 0; // 0x149d PushV
	var_111_bool = 1; // 0x149e MovB
	func_4566(var_111_bool); // 0x149f NEW_2
	
Label_5281:
	func_4542(); // 0x14a2 NEW_2
	var_245_bool = GlobalVars[0]; // 0x14a4 PushGE
	var_245_bool = 1; // 0x14a5 MovB
	GlobalVars[0] = var_245_bool; // 0x14a6 PopGE
	var_246_int = 50; // 0x14a7 PushI
	var_247_int = 40; // 0x14a8 PushI
	SetRTEnvelope(var_246_int, var_247_int); // 0x14a9 Func
	return 0; // 0x14ab Return
}


func_4244(var_497_float, var_498_float, var_499_float, var_500_float)
{
	var_501_bool = var_498_float < var_499_float; // 0x1095 LT
	if(var_501_bool == 0) goto Label_4249; // 0x1096 JumpB
	var_497_float = var_499_float; // 0x1097 Mov
	return 0; // 0x1098 Return
	
Label_4249:
	var_502_bool = var_498_float > var_500_float; // 0x1099 GT
	if(var_502_bool == 0) goto Label_4253; // 0x109a JumpB
	var_497_float = var_500_float; // 0x109b Mov
	return 0; // 0x109c Return
	
Label_4253:
	var_497_float = var_498_float; // 0x109d Mov
	return 0; // 0x109e Return
}


func_2711(var_92_bool)
{
	var_92_bool = 1; // 0xa97 MovB
	return 0; // 0xa98 Return
}


func_2713()
{
	StopAnimation(); // 0xa99 Func
	StopGroup0(); // 0xa9b Func
	return 0; // 0xa9d Return
}


func_2718(var_102_object)
{
	var_109_object = Obj(); var_110_bool = 0; var_111_float = 0; // 0xa9f PushV
	var_109_object = var_102_object; // 0xaa0 Mov
	var_110_bool = 1; // 0xaa1 MovB
	var_111_float = 180.0; // 0xaa2 MovF
	func_2732(var_105_int, var_106_bool, var_107_float, var_108_int, var_102_object, var_109_object, var_110_bool, var_111_float); // 0xaa3 NEW_2
	return 0; // 0xaa5 Return
}


func_4255(var_135_int, var_136_string)
{
	var_137_int = 0; var_138_int = 0; // 0x109f PushV
	GetVariable(var_136_string, var_138_int); // 0x10a0 Func
	var_135_int = var_138_int; // 0x10a2 Mov
	return 2; // 0x10a3 Return
}


func_4260(var_505_float)
{
	var_506_object = Obj(); var_507_object = Obj(); // 0x10a4 PushV
	CreateFloatVector(var_507_object); // 0x10a5 Func
	add(var_505_float); // 0x10a7 ObjFunc
	var_508_int = 0; // 0x10a9 PushI
	var_509_bool = var_505_float < var_508_int; // 0x10aa LT
	if(var_509_bool == 0) goto Label_4272; // 0x10ab JumpB
	var_510_float = 0.7; // 0x10ac PushF
	var_511_int = 500; // 0x10ad PushI
	RumblePlay(var_510_float, var_511_int); // 0x10ae Func
	
Label_4272:
	var_512_int = 15; // 0x10b0 PushI
	SendWorldWndMessage(var_512_int, var_507_object); // 0x10b1 Func
	return 2; // 0x10b3 Return
}


func_2726(var_446_float)
{
	var_446_float = 0.05; // 0xaa7 MovF
	return 0; // 0xaa8 Return
}


func_2729(var_453_int)
{
	var_453_int = 0; // 0xaaa MovI
	return 0; // 0xaab Return
}


func_3242(var_0_bool, var_352_bool)
{
	var_353_cvector = CVector(0,0,0); var_354_cvector = CVector(0,0,0); var_355_cvector = CVector(0,0,0); var_356_float = 0; var_357_float = 0; var_358_cvector = CVector(0,0,0); var_359_cvector = CVector(0,0,0); var_360_cvector = CVector(0,0,0); var_361_float = 0; var_362_float = 0; // 0xcaa PushV
	var_363_bool = 0; var_364_object = Obj(); // 0xcab PushV
	var_364_object = var_0_bool; // 0xcac MovT
	func_3817(var_363_bool, var_364_object); // 0xcad NEW_2
	var_365_bool = var_363_bool == 0; // 0xcaf Not
	if(var_365_bool == 0) goto Label_3251; // 0xcb0 JumpB
	var_352_bool = 0; // 0xcb1 MovB
	return 10; // 0xcb2 Return
	
Label_3251:
	var_366_bool = 0; // 0xcb3 PushV
	func_3331(var_362_float, var_366_bool); // 0xcb4 NEW_2
	if(var_366_bool == 0) goto Label_3268; // 0xcb6 JumpB
	GetPFPosition(var_358_cvector); // 0xcb7 TObjFunc
	GetPFPosition(var_359_cvector); // 0xcb9 Func
	var_360_cvector = var_358_cvector - var_359_cvector; // 0xcbb Sub2
	var_361_float = var_360_cvector | var_360_cvector; // 0xcbc Or2
	GetAttackDistance(var_362_float); // 0xcbd TObjFunc
	var_367_int = 50; // 0xcbf PushI
	var_362_float = var_362_float + var_367_int; // 0xcc0 Add2
	var_368_float = var_362_float * var_362_float; // 0xcc1 Mult
	var_352_bool = var_361_float <= var_368_float; // 0xcc2 LE2
	return 10; // 0xcc3 Return
	
Label_3268:
	var_352_bool = 0; // 0xcc4 MovB
	return 10; // 0xcc5 Return
}


func_2732(var_0_bool, var_3_object, var_5_bool, var_109_object, var_110_bool, var_111_float, var_186_bool, var_278_bool)
{
	var_112_float = 0; var_113_cvector = CVector(0,0,0); var_114_cvector = CVector(0,0,0); var_115_bool = 0; var_116_bool = 0; var_117_float = 0; var_118_cvector = CVector(0,0,0); var_119_float = 0; var_120_cvector = CVector(0,0,0); var_121_bool = 0; var_122_float = 0; var_123_float = 0; var_124_cvector = CVector(0,0,0); var_125_cvector = CVector(0,0,0); var_126_bool = 0; var_127_bool = 0; var_128_float = 0; var_129_cvector = CVector(0,0,0); var_130_float = 0; var_131_cvector = CVector(0,0,0); var_132_bool = 0; var_133_float = 0; // 0xaac PushV
	func_2961(var_131_cvector, var_132_bool, var_133_float); // 0xaae NEW_2
	var_5_bool = 0; // 0xab0 TMovI
	var_156_string = "@GetAttackDistance"; // 0xab1 PushS
	var_157_int = 1; // 0xab2 PushI
	var_158_bool = IsFuncExist(var_109_object, var_156_string, var_157_int); // 0xab3 FuncExist
	if(var_158_bool == 0) goto Label_2746; // 0xab4 JumpB
	GetAttackDistance(var_123_float); // 0xab5 ObjFunc
	var_159_int = 50; // 0xab7 PushI
	var_123_float = var_123_float + var_159_int; // 0xab8 Add2
	goto Label_2747; // 0xab9 Jump
	
Label_2747:
	var_160_int = 150; // 0xabb PushI
	var_161_bool = var_123_float >= var_160_int; // 0xabc GE
	if(var_161_bool == 0) goto Label_2751; // 0xabd JumpB
	var_123_float = 150; // 0xabe MovI
	
Label_2751:
	var_3_object = 0; // 0xabf TMovB
	var_0_bool = var_109_object; // 0xac0 TMov
	IsPlayerActor(var_0_bool, var_126_bool); // 0xac1 Func
	var_162_bool = var_126_bool; // 0xac3 Push
	if(var_162_bool == 0) goto Label_2765; // 0xac4 JumpB
	var_163_string = "attack"; // 0xac5 PushS
	PlayGlobalMusic(var_163_string); // 0xac6 Func
	var_164_object = Obj(); // 0xac8 PushV
	func_4221(var_164_object); // 0xac9 NEW_2
	SendPlayerEnemy(var_109_object, var_164_object); // 0xacb Func
	
Label_2765:
	var_167_bool = var_110_bool; // 0xacd Push
	if(var_167_bool == 0) goto Label_2769; // 0xace JumpB
	var_127_bool = 0; // 0xacf MovB
	goto Label_2770; // 0xad0 Jump
	
Label_2770:
	var_168_float = 400.0; // 0xad2 PushF
	var_128_float = var_168_float + var_123_float; // 0xad3 Add2
	
Label_2772:
	var_169_bool = 0; // 0xad4 PushV
	var_169_bool = 0; // 0xad5 MovB
	var_170_bool = 0; var_171_object = Obj(); // 0xad6 PushV
	var_171_object = var_0_bool; // 0xad7 MovT
	func_3817(var_170_bool, var_171_object); // 0xad8 NEW_2
	if(var_170_bool == 0) goto Label_2782; // 0xada JumpB
	var_172_bool = var_3_object == 0; // 0xadb Not
	if(var_172_bool == 0) goto Label_2782; // 0xadc JumpB
	var_169_bool = 1; // 0xadd MovB
	
Label_2782:
	if(var_169_bool == 0) goto Label_2944; // 0xade JumpB
	func_3374(var_133_float); // 0xae0 NEW_2
	GetPFPosition(var_124_cvector); // 0xae2 TObjFunc
	GetPFPosition(var_125_cvector); // 0xae4 Func
	var_129_cvector = var_124_cvector - var_125_cvector; // 0xae6 Sub2
	var_130_float = var_129_cvector | var_129_cvector; // 0xae7 Or2
	var_178_float = var_128_float * var_128_float; // 0xae8 Mult
	var_179_bool = var_130_float >= var_178_float; // 0xae9 GE
	if(var_179_bool == 0) goto Label_2810; // 0xaea JumpB
	var_180_bool = 0; var_181_object = Obj(); var_182_float = 0; var_183_float = 0; var_184_bool = 0; var_185_bool = 0; // 0xaeb PushV
	var_181_object = var_0_bool; // 0xaec MovT
	var_182_float = var_123_float; // 0xaed Mov
	var_183_float = 3000.0; // 0xaee MovF
	var_184_bool = 1; // 0xaef MovB
	var_185_bool = 0; // 0xaf0 MovB
	TaskCall(7); // 0xaf1 TaskCall
	func_3401(var_188_bool, var_180_bool, var_181_object, var_182_float, var_183_float, var_184_bool, var_185_bool); // 0xaf2 NEW_2
	TaskReturn(); // 0xaf3 TaskReturn
	var_263_bool = var_186_bool == 0; // 0xaf5 Not
	if(var_263_bool == 0) goto Label_2808; // 0xaf6 JumpB
	goto Label_2944; // 0xaf7 Jump
	
Label_2944:
	WaitForAnimEnd(); // 0xb80 Func
	var_264_object = var_3_object; // 0xb82 PushT
	if(var_264_object == 0) goto Label_2949; // 0xb83 JumpB
	return 22; // 0xb84 Return
	
Label_2949:
	var_265_string = "all"; // 0xb85 PushS
	var_266_string = "attack_off"; // 0xb86 PushS
	PlayAnimation(var_265_string, var_266_string); // 0xb87 Func
	WaitForAnimEnd(); // 0xb89 Func
	var_267_bool = var_126_bool; // 0xb8b Push
	if(var_267_bool == 0) goto Label_2960; // 0xb8c JumpB
	var_268_float = 2.0; // 0xb8d PushF
	Sleep(var_268_float); // 0xb8e Func
	
Label_2960:
	return 22; // 0xb90 Return
	
Label_2808:
	var_127_bool = 0; // 0xaf8 MovB
	goto Label_2943; // 0xaf9 Jump
	
Label_2943:
	goto Label_2772; // 0xb7f Jump
	
Label_2810:
	var_269_float = var_111_float * var_111_float; // 0xafa Mult
	var_270_bool = var_130_float >= var_269_float; // 0xafb GE
	if(var_270_bool == 0) goto Label_2935; // 0xafc JumpB
	GetPFPosition(var_131_cvector); // 0xafd TObjFunc
	CanReachByPF(var_132_bool, var_131_cvector); // 0xaff Func
	var_271_bool = var_132_bool == 0; // 0xb01 Not
	if(var_271_bool == 0) goto Label_2834; // 0xb02 JumpB
	var_272_bool = 0; var_273_object = Obj(); var_274_float = 0; var_275_float = 0; var_276_bool = 0; var_277_bool = 0; // 0xb03 PushV
	var_273_object = var_0_bool; // 0xb04 MovT
	var_274_float = var_123_float; // 0xb05 Mov
	var_275_float = 3000.0; // 0xb06 MovF
	var_276_bool = 1; // 0xb07 MovB
	var_277_bool = 0; // 0xb08 MovB
	TaskCall(7); // 0xb09 TaskCall
	func_3401(var_280_bool, var_272_bool, var_273_object, var_274_float, var_275_float, var_276_bool, var_277_bool); // 0xb0a NEW_2
	TaskReturn(); // 0xb0b TaskReturn
	var_281_bool = var_278_bool == 0; // 0xb0d Not
	if(var_281_bool == 0) goto Label_2832; // 0xb0e JumpB
	goto Label_2944; // 0xb0f Jump
	
Label_2832:
	var_127_bool = 0; // 0xb10 MovB
	goto Label_2772; // 0xb11 Jump
	
Label_2834:
	var_282_bool = var_127_bool == 0; // 0xb12 Not
	if(var_282_bool == 0) goto Label_2859; // 0xb13 JumpB
	var_283_object = Obj(); // 0xb14 PushV
	var_283_object = var_0_bool; // 0xb15 MovT
	func_3967(); // 0xb16 NEW_2
	var_292_string = "all"; // 0xb18 PushS
	var_293_string = "attack_on"; // 0xb19 PushS
	PlayAnimation(var_292_string, var_293_string); // 0xb1a Func
	WaitForAnimEnd(); // 0xb1c Func
	func_3374(var_133_float); // 0xb1f NEW_2
	StopAsync(); // 0xb21 Func
	var_127_bool = 1; // 0xb23 MovB
	var_294_bool = 0; var_295_object = Obj(); // 0xb24 PushV
	var_295_object = var_0_bool; // 0xb25 MovT
	func_3817(var_294_bool, var_295_object); // 0xb26 NEW_2
	var_296_bool = var_294_bool == 0; // 0xb28 Not
	if(var_296_bool == 0) goto Label_2859; // 0xb29 JumpB
	goto Label_2944; // 0xb2a Jump
	
Label_2859:
	rand(var_133_float); // 0xb2b Func
	var_297_bool = 0; // 0xb2d PushV
	var_297_bool = 1; // 0xb2e MovB
	var_298_float = 0.25; // 0xb2f PushF
	var_299_bool = var_133_float < var_298_float; // 0xb30 LT
	if(var_299_bool == 0) goto Label_2871; // 0xb31 JumpB
	var_300_bool = 0; // 0xb32 PushV
	func_3331(var_297_bool, var_300_bool); // 0xb33 NEW_2
	if(var_300_bool == 0) goto Label_2871; // 0xb35 JumpB
	var_297_bool = 0; // 0xb36 MovB
	
Label_2871:
	if(var_297_bool == 0) goto Label_2888; // 0xb37 JumpB
	Face(var_0_bool); // 0xb38 Func
	func_3381(); // 0xb3b NEW_2
	var_335_string = "all"; // 0xb3d PushS
	var_336_string = "attack_stay"; // 0xb3e PushS
	PlayAnimation(var_335_string, var_336_string); // 0xb3f Func
	var_337_bool = 0; var_338_float = 0; // 0xb41 PushV
	var_338_float = var_111_float; // 0xb42 Mov
	func_3199(var_133_float, var_337_bool, var_338_float); // 0xb43 NEW_2
	StopAsync(); // 0xb45 Func
	goto Label_2934; // 0xb47 Jump
	
Label_2934:
	goto Label_2943; // 0xb76 Jump
	
Label_2888:
	Face(var_0_bool); // 0xb48 Func
	var_556_string = "all"; // 0xb4a PushS
	var_557_string = "fjump"; // 0xb4b PushS
	PlayAnimation(var_556_string, var_557_string); // 0xb4c Func
	WaitForAnimEnd(); // 0xb4e Func
	func_3374(var_133_float); // 0xb51 NEW_2
	var_558_cvector = CVector(0.0, 0.0, 0.0); // 0xb53 PushVec
	SetSpeed(var_558_cvector); // 0xb54 Func
	Stop(); // 0xb56 Func
	StopAsync(); // 0xb58 Func
	var_559_bool = 0; // 0xb5a PushV
	func_3331(var_133_float, var_559_bool); // 0xb5b NEW_2
	var_560_bool = var_559_bool == 0; // 0xb5d Not
	if(var_560_bool == 0) goto Label_2934; // 0xb5e JumpB
	var_561_bool = 0; var_562_object = Obj(); // 0xb5f PushV
	var_562_object = var_0_bool; // 0xb60 MovT
	func_3817(var_561_bool, var_562_object); // 0xb61 NEW_2
	var_563_bool = var_561_bool == 0; // 0xb63 Not
	if(var_563_bool == 0) goto Label_2918; // 0xb64 JumpB
	goto Label_2944; // 0xb65 Jump
	
Label_2918:
	GetPFPosition(var_124_cvector); // 0xb66 TObjFunc
	GetPFPosition(var_125_cvector); // 0xb68 Func
	var_129_cvector = var_124_cvector - var_125_cvector; // 0xb6a Sub2
	var_130_float = var_129_cvector | var_129_cvector; // 0xb6b Or2
	var_564_float = var_111_float * var_111_float; // 0xb6c Mult
	var_565_bool = var_130_float < var_564_float; // 0xb6d LT
	if(var_565_bool == 0) goto Label_2934; // 0xb6e JumpB
	var_566_bool = 0; var_567_float = 0; // 0xb6f PushV
	var_567_float = var_111_float; // 0xb70 Mov
	func_3035(var_133_float, var_566_bool, var_567_float); // 0xb71 NEW_2
	var_568_bool = var_566_bool == 0; // 0xb73 Not
	if(var_568_bool == 0) goto Label_2934; // 0xb74 JumpB
	goto Label_2944; // 0xb75 Jump
	
Label_2935:
	var_569_bool = 0; var_570_float = 0; // 0xb77 PushV
	var_570_float = var_111_float; // 0xb78 Mov
	func_3035(var_133_float, var_569_bool, var_570_float); // 0xb79 NEW_2
	var_571_bool = var_569_bool == 0; // 0xb7b Not
	if(var_571_bool == 0) goto Label_2942; // 0xb7c JumpB
	goto Label_2944; // 0xb7d Jump
	
Label_2942:
	var_127_bool = 1; // 0xb7e MovB
	
Label_2769:
	var_127_bool = 1; // 0xad1 MovB
	
Label_2746:
	var_123_float = var_111_float; // 0xaba Mov
}


func_4277(var_120_int)
{
	var_121_float = 0; var_122_float = 0; // 0x10b5 PushV
	GetGameTime(var_122_float); // 0x10b6 Func
	var_123_int = 1; // 0x10b8 PushI
	var_124_int = 0; // 0x10b9 PushV
	var_125_int = 24; // 0x10ba PushI
	var_124_int = var_122_float / var_122_float; // 0x10bb Div2
	var_120_int = var_123_int + var_124_int; // 0x10bc Add2
	return 2; // 0x10bd Return
}


func_4791(var_22_bool, var_23_object, var_24_string)
{
	var_25_string = "unholster"; // 0x12b8 PushS
	var_26_bool = var_24_string == var_25_string; // 0x12b9 Eq
	if(var_26_bool == 0) goto Label_4802; // 0x12ba JumpB
	var_27_bool = 0; var_28_object = Obj(); // 0x12bb PushV
	var_28_object = var_23_object; // 0x12bc Mov
	func_5155(var_28_object); // 0x12bd NEW_2
	var_22_bool = var_27_bool; // 0x12be Mov
	return 0; // 0x12c0 Return
	
Label_4802:
	var_29_string = "player_shot"; // 0x12c2 PushS
	var_30_bool = var_24_string == var_29_string; // 0x12c3 Eq
	if(var_30_bool == 0) goto Label_4812; // 0x12c4 JumpB
	var_31_bool = 0; var_32_object = Obj(); // 0x12c5 PushV
	var_32_object = var_23_object; // 0x12c6 Mov
	func_5160(var_32_object); // 0x12c7 NEW_2
	var_22_bool = var_31_bool; // 0x12c8 Mov
	return 0; // 0x12ca Return
	
Label_4812:
	var_33_string = "battle"; // 0x12cc PushS
	var_34_bool = var_24_string == var_33_string; // 0x12cd Eq
	if(var_34_bool == 0) goto Label_4821; // 0x12ce JumpB
	var_35_bool = 0; var_36_object = Obj(); // 0x12cf PushV
	var_36_object = var_23_object; // 0x12d0 Mov
	func_5165(var_36_object); // 0x12d1 NEW_2
	var_22_bool = var_35_bool; // 0x12d2 Mov
	return 0; // 0x12d4 Return
	
Label_4821:
	var_22_bool = 0; // 0x12d5 MovB
	return 0; // 0x12d6 Return
}


func_4286(var_258_int)
{
	var_259_float = 0; var_260_float = 0; // 0x10be PushV
	GetGameTime(var_260_float); // 0x10bf Func
	var_261_int = 0; // 0x10c1 PushV
	var_261_int = var_260_float; // 0x10c2 Mov
	var_262_int = 24; // 0x10c3 PushI
	var_258_int = var_261_int % var_262_int; // 0x10c4 Mod2
	return 2; // 0x10c5 Return
}


func_3776(var_46_bool)
{
	var_48_bool = 0; var_49_bool = 0; // 0xec0 PushV
	IsDead(var_49_bool); // 0xec1 ObjFunc
	var_46_bool = var_49_bool; // 0xec3 Mov
	return 2; // 0xec4 Return
}


func_3781(var_35_bool, var_36_object)
{
	var_37_object = Obj(); var_38_object = Obj(); var_39_object = Obj(); var_40_object = Obj(); // 0xec5 PushV
	var_41_bool = var_36_object == 0; // 0xec6 NullEq
	if(var_41_bool == 0) goto Label_3786; // 0xec7 JumpB
	var_35_bool = 0; // 0xec8 MovB
	return 4; // 0xec9 Return
	
Label_3786:
	var_42_bool = 0; // 0xeca PushV
	var_42_bool = 0; // 0xecb MovB
	var_43_string = "IsDead"; // 0xecc PushS
	var_44_int = 1; // 0xecd PushI
	var_45_bool = IsFuncExist(var_36_object, var_43_string, var_44_int); // 0xece FuncExist
	if(var_45_bool == 0) goto Label_3798; // 0xecf JumpB
	var_46_bool = 0; var_47_object = Obj(); // 0xed0 PushV
	var_47_object = var_36_object; // 0xed1 Mov
	func_3776(var_47_object); // 0xed2 NEW_2
	if(var_46_bool == 0) goto Label_3798; // 0xed4 JumpB
	var_42_bool = 1; // 0xed5 MovB
	
Label_3798:
	if(var_42_bool == 0) goto Label_3801; // 0xed6 JumpB
	var_35_bool = 0; // 0xed7 MovB
	return 4; // 0xed8 Return
	
Label_3801:
	GetScene(var_39_object); // 0xed9 Func
	var_50_bool = var_39_object == 0; // 0xedb NullEq
	if(var_50_bool == 0) goto Label_3807; // 0xedc JumpB
	var_35_bool = 0; // 0xedd MovB
	return 4; // 0xede Return
	
Label_3807:
	GetScene(var_40_object); // 0xedf ObjFunc
	var_51_bool = var_39_object != var_40_object; // 0xee1 Neq
	if(var_51_bool == 0) goto Label_3813; // 0xee2 JumpB
	var_35_bool = 0; // 0xee3 MovB
	return 4; // 0xee4 Return
	
Label_3813:
	var_35_bool = 1; // 0xee5 MovB
	return 4; // 0xee6 Return
}


func_3270(var_350_bool)
{
	var_351_bool = 0; // 0xcc6 PushV
	var_351_bool = 0; // 0xcc7 MovB
	var_352_bool = 0; // 0xcc8 PushV
	func_3242(var_351_bool, var_352_bool); // 0xcc9 NEW_2
	if(var_352_bool == 0) goto Label_3281; // 0xccb JumpB
	var_369_bool = 0; // 0xccc PushV
	func_3286(var_350_bool, var_351_bool, var_369_bool); // 0xccd NEW_2
	if(var_369_bool == 0) goto Label_3281; // 0xccf JumpB
	var_351_bool = 1; // 0xcd0 MovB
	
Label_3281:
	if(var_351_bool == 0) goto Label_3284; // 0xcd1 JumpB
	var_350_bool = 1; // 0xcd2 MovB
	return 0; // 0xcd3 Return
	
Label_3284:
	var_350_bool = 0; // 0xcd4 MovB
	return 0; // 0xcd5 Return
}


func_4294(var_21_object)
{
	var_22_bool = 0; var_23_bool = 0; // 0x10c6 PushV
	IsPlayerActor(var_21_object, var_23_bool); // 0x10c7 Func
	var_24_bool = var_23_bool; // 0x10c9 Push
	if(var_24_bool == 0) goto Label_4302; // 0x10ca JumpB
	var_25_string = "attack"; // 0x10cb PushS
	PlayGlobalMusic(var_25_string); // 0x10cc Func
	
Label_4302:
	return 2; // 0x10ce Return
}


func_4303()
{
	var_410_object = Obj(); var_411_object = Obj(); // 0x10cf PushV
	GetScene(var_411_object); // 0x10d0 Func
	var_412_string = "battle"; // 0x10d2 PushS
	var_413_object = Obj(); // 0x10d3 PushV
	func_4221(var_413_object); // 0x10d4 NEW_2
	BroadcastMessage(var_412_string, var_413_object, var_411_object); // 0x10d6 Func
	return 2; // 0x10d8 Return
}


func_3286(var_0_bool, var_4_string, var_369_bool)
{
	var_370_object = Obj(); var_371_bool = 0; var_372_float = 0; var_373_cvector = CVector(0,0,0); var_374_cvector = CVector(0,0,0); var_375_object = Obj(); var_376_bool = 0; var_377_float = 0; var_378_cvector = CVector(0,0,0); var_379_cvector = CVector(0,0,0); // 0xcd6 PushV
	GetScene(var_375_object); // 0xcd7 Func
	var_376_bool = 0; // 0xcd9 MovB
	
Label_3290:
	var_380_cvector = CVector(0,0,0); var_381_object = Obj(); // 0xcda PushV
	var_381_object = var_0_bool; // 0xcdb MovT
	func_3671(var_381_object); // 0xcdc NEW_2
	var_386_int = -var_380_cvector; // 0xcde Neg
	FindDirLength(var_377_float, var_386_int, var_377_float); // 0xcdf Func
	var_387_bool = var_377_float < var_4_string; // 0xce1 LT
	if(var_387_bool == 0) goto Label_3300; // 0xce2 JumpB
	goto Label_3328; // 0xce3 Jump
	
Label_3328:
	var_369_bool = var_376_bool; // 0xd00 Mov
	return 10; // 0xd01 Return
	
Label_3300:
	Face(var_0_bool); // 0xce4 Func
	var_388_string = "all"; // 0xce6 PushS
	var_389_string = "bjump"; // 0xce7 PushS
	PlayAnimation(var_388_string, var_389_string); // 0xce8 Func
	GetPFPosition(var_378_cvector); // 0xcea TObjFunc
	GetPFPosition(var_379_cvector); // 0xcec Func
	WaitForAnimEnd(); // 0xcee Func
	func_3374(var_379_cvector); // 0xcf1 NEW_2
	StopAsync(); // 0xcf3 Func
	var_390_cvector = CVector(0.0, 0.0, 0.0); // 0xcf5 PushVec
	SetSpeed(var_390_cvector); // 0xcf6 Func
	var_376_bool = 1; // 0xcf8 MovB
	var_391_bool = 0; // 0xcf9 PushV
	func_3242(var_379_cvector, var_391_bool); // 0xcfa NEW_2
	var_392_bool = var_391_bool == 0; // 0xcfc Not
	if(var_392_bool == 0) goto Label_3327; // 0xcfd JumpB
	goto Label_3328; // 0xcfe Jump
	
Label_3327:
	goto Label_3290; // 0xcff Jump
}


func_4823(var_37_object, var_38_string)
{
	var_39_string = "unholster"; // 0x12d8 PushS
	var_40_bool = var_38_string == var_39_string; // 0x12d9 Eq
	if(var_40_bool == 0) goto Label_4832; // 0x12da JumpB
	var_41_object = Obj(); // 0x12db PushV
	var_41_object = var_37_object; // 0x12dc Mov
	func_5158(); // 0x12dd NEW_2
	goto Label_4847; // 0x12df Jump
	
Label_4847:
	return 0; // 0x12ef Return
	
Label_4832:
	var_42_string = "player_shot"; // 0x12e0 PushS
	var_43_bool = var_38_string == var_42_string; // 0x12e1 Eq
	if(var_43_bool == 0) goto Label_4840; // 0x12e2 JumpB
	var_44_object = Obj(); // 0x12e3 PushV
	var_44_object = var_37_object; // 0x12e4 Mov
	func_5163(); // 0x12e5 NEW_2
	goto Label_4847; // 0x12e7 Jump
	
Label_4840:
	var_45_string = "battle"; // 0x12e8 PushS
	var_46_bool = var_38_string == var_45_string; // 0x12e9 Eq
	if(var_46_bool == 0) goto Label_4847; // 0x12ea JumpB
	var_47_object = Obj(); // 0x12eb PushV
	var_47_object = var_37_object; // 0x12ec Mov
	func_5168(); // 0x12ed NEW_2
}


func_4314(var_217_bool)
{
	var_219_int = 0; var_220_string = ""; // 0x10db PushV
	var_220_string = "branch"; // 0x10dc MovS
	func_4255(var_219_int, var_220_string); // 0x10dd NEW_2
	var_221_int = 0; // 0x10df PushI
	var_222_bool = var_219_int == var_221_int; // 0x10e0 Eq
	if(var_222_bool == 0) goto Label_4324; // 0x10e1 JumpB
	var_217_bool = 1; // 0x10e2 MovB
	return 0; // 0x10e3 Return
	
Label_4324:
	var_217_bool = 0; // 0x10e4 MovB
	return 0; // 0x10e5 Return
}


func_4326(var_133_bool)
{
	var_135_int = 0; var_136_string = ""; // 0x10e7 PushV
	var_136_string = "branch"; // 0x10e8 MovS
	func_4255(var_135_int, var_136_string); // 0x10e9 NEW_2
	var_139_int = 2; // 0x10eb PushI
	var_140_bool = var_135_int == var_139_int; // 0x10ec Eq
	if(var_140_bool == 0) goto Label_4336; // 0x10ed JumpB
	var_133_bool = 1; // 0x10ee MovB
	return 0; // 0x10ef Return
	
Label_4336:
	var_133_bool = 0; // 0x10f0 MovB
	return 0; // 0x10f1 Return
}


func_3817(var_31_bool, var_32_object)
{
	var_33_int = 0; var_34_int = 0; // 0xee9 PushV
	var_35_bool = 0; var_36_object = Obj(); // 0xeea PushV
	var_36_object = var_32_object; // 0xeeb Mov
	func_3781(var_35_bool, var_36_object); // 0xeec NEW_2
	var_52_bool = var_35_bool == 0; // 0xeee Not
	if(var_52_bool == 0) goto Label_3826; // 0xeef JumpB
	var_31_bool = 0; // 0xef0 MovB
	return 2; // 0xef1 Return
	
Label_3826:
	var_53_bool = 0; var_54_object = Obj(); var_55_string = ""; // 0xef2 PushV
	var_54_object = var_32_object; // 0xef3 Mov
	var_55_string = "noaccess"; // 0xef4 MovS
	func_3691(var_53_bool, var_54_object, var_55_string); // 0xef5 NEW_2
	var_62_bool = var_53_bool == 0; // 0xef7 Not
	if(var_62_bool == 0) goto Label_3835; // 0xef8 JumpB
	var_31_bool = 1; // 0xef9 MovB
	return 2; // 0xefa Return
	
Label_3835:
	var_63_string = "noaccess"; // 0xefb PushS
	GetProperty(var_63_string, var_34_int); // 0xefc ObjFunc
	var_64_int = 0; // 0xefe PushI
	var_31_bool = var_34_int == var_64_int; // 0xeff Eq2
	return 2; // 0xf00 Return
}


func_4848(var_19_bool, var_20_object)
{
	var_21_bool = 0; var_22_bool = 0; // 0x12f0 PushV
	var_23_bool = 0; // 0x12f1 PushV
	var_23_bool = 0; // 0x12f2 MovB
	var_24_bool = 0; var_25_object = Obj(); // 0x12f3 PushV
	var_25_object = var_20_object; // 0x12f4 Mov
	func_5155(var_25_object); // 0x12f5 NEW_2
	if(var_24_bool == 0) goto Label_4862; // 0x12f7 JumpB
	var_26_bool = 0; var_27_object = Obj(); // 0x12f8 PushV
	var_27_object = var_20_object; // 0x12f9 Mov
	func_3686(var_26_bool, var_27_object); // 0x12fa NEW_2
	if(var_26_bool == 0) goto Label_4862; // 0x12fc JumpB
	var_23_bool = 1; // 0x12fd MovB
	
Label_4862:
	if(var_23_bool == 0) goto Label_4869; // 0x12fe JumpB
	IsWeaponHolstered(var_22_bool); // 0x12ff ObjFunc
	var_30_bool = var_22_bool == 0; // 0x1301 Not
	if(var_30_bool == 0) goto Label_4869; // 0x1302 JumpB
	var_19_bool = 1; // 0x1303 MovB
	return 2; // 0x1304 Return
	
Label_4869:
	var_19_bool = 0; // 0x1305 MovB
	return 2; // 0x1306 Return
}


func_4338(var_211_bool, var_212_object)
{
	var_213_bool = 0; var_214_object = Obj(); // 0x10f3 PushV
	var_214_object = var_212_object; // 0x10f4 Mov
	func_4398(var_214_object); // 0x10f5 NEW_2
	if(var_213_bool == 0) goto Label_4346; // 0x10f7 JumpB
	var_211_bool = 1; // 0x10f8 MovB
	return 0; // 0x10f9 Return
	
Label_4346:
	var_211_bool = 0; // 0x10fa MovB
	return 0; // 0x10fb Return
}


func_4348(var_272_bool, var_273_object)
{
	var_274_bool = 0; var_275_object = Obj(); // 0x10fd PushV
	var_275_object = var_273_object; // 0x10fe Mov
	func_4405(var_275_object); // 0x10ff NEW_2
	if(var_274_bool == 0) goto Label_4356; // 0x1101 JumpB
	var_272_bool = 1; // 0x1102 MovB
	return 0; // 0x1103 Return
	
Label_4356:
	var_272_bool = 0; // 0x1104 MovB
	return 0; // 0x1105 Return
}


func_3841(var_35_object)
{
	var_36_bool = 0; var_37_int = 0; var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_string = ""; var_43_bool = 0; var_44_int = 0; var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); var_49_string = ""; // 0xf01 PushV
	var_50_bool = var_35_object == 0; // 0xf02 NullEq
	if(var_50_bool == 0) goto Label_3845; // 0xf03 JumpB
	return 14; // 0xf04 Return
	
Label_3845:
	IsDead(var_43_bool); // 0xf05 Func
	var_51_bool = var_43_bool; // 0xf07 Push
	if(var_51_bool == 0) goto Label_3850; // 0xf08 JumpB
	return 14; // 0xf09 Return
	
Label_3850:
	GetSecondaryAnimationType(var_44_int); // 0xf0a Func
	var_52_int = 0; // 0xf0c PushI
	var_53_bool = var_44_int < var_52_int; // 0xf0d LT
	if(var_53_bool == 0) goto Label_3856; // 0xf0e JumpB
	return 14; // 0xf0f Return
	
Label_3856:
	GetPosition(var_45_cvector); // 0xf10 ObjFunc
	GetPosition(var_46_cvector); // 0xf12 Func
	GetDirection(var_47_cvector); // 0xf14 Func
	var_48_cvector = var_46_cvector - var_45_cvector; // 0xf16 Sub2
	var_54_float = GetByIndex(var_48_cvector, 0); // 0xf17 PushE
	var_55_float = GetByIndex(var_47_cvector, 0); // 0xf18 PushE
	var_56_float = var_54_float * var_55_float; // 0xf19 Mult
	var_57_float = GetByIndex(var_48_cvector, 2); // 0xf1a PushE
	var_58_float = GetByIndex(var_47_cvector, 2); // 0xf1b PushE
	var_59_float = var_57_float * var_58_float; // 0xf1c Mult
	var_60_int = var_56_float + var_59_float; // 0xf1d Add
	var_61_int = 0; // 0xf1e PushI
	var_62_bool = var_60_int >= var_61_int; // 0xf1f GE
	if(var_62_bool == 0) goto Label_3875; // 0xf20 JumpB
	var_49_string = "fhit"; // 0xf21 MovS
	goto Label_3876; // 0xf22 Jump
	
Label_3876:
	var_63_string = "hit_react"; // 0xf24 PushS
	var_64_string = "1"; // 0xf25 PushS
	var_65_int = var_49_string + var_64_string; // 0xf26 Add
	var_66_string = "2"; // 0xf27 PushS
	var_67_int = var_49_string + var_66_string; // 0xf28 Add
	var_68_int = -10; // 0xf29 PushI
	FadeSecondaryAnimation(var_63_string, var_65_int, var_67_int, var_68_int); // 0xf2a Func
	return 14; // 0xf2c Return
	
Label_3875:
	var_49_string = "bhit"; // 0xf23 MovS
}


func_3331(var_0_bool, var_300_bool)
{
	var_301_bool = 0; var_302_bool = 0; // 0xd03 PushV
	var_303_string = "IsAttacking"; // 0xd04 PushS
	var_304_int = 1; // 0xd05 PushI
	var_305_bool = IsFuncExist(var_0_bool, var_303_string, var_304_int); // 0xd06 FuncExist
	if(var_305_bool == 0) goto Label_3340; // 0xd07 JumpB
	IsAttacking(var_302_bool); // 0xd08 TObjFunc
	var_300_bool = var_302_bool; // 0xd0a Mov
	return 2; // 0xd0b Return
	
Label_3340:
	var_300_bool = 0; // 0xd0c MovB
	return 2; // 0xd0d Return
}


func_4358(var_141_bool, var_142_object)
{
	var_143_bool = 0; var_144_object = Obj(); // 0x1107 PushV
	var_144_object = var_142_object; // 0x1108 Mov
	func_4412(var_144_object); // 0x1109 NEW_2
	if(var_143_bool == 0) goto Label_4366; // 0x110b JumpB
	var_141_bool = 1; // 0x110c MovB
	return 0; // 0x110d Return
	
Label_4366:
	var_141_bool = 0; // 0x110e MovB
	return 0; // 0x110f Return
}


func_2310(var_2_object)
{
	var_19_int = 110; // 0x906 PushI
	KillTimer(var_19_int); // 0x907 Func
	var_2_object = 0; // 0x909 TMovB
	func_2446(var_17_object, var_18_bool); // 0x90b NEW_2
	return 0; // 0x90d Return
}


func_4871(var_31_object)
{
	var_32_object = Obj(); // 0x1308 PushV
	var_32_object = var_31_object; // 0x1309 Mov
	func_5158(); // 0x130a NEW_2
	return 0; // 0x130c Return
}


func_4877(var_21_object)
{
	var_22_bool = 0; var_23_object = Obj(); // 0x130e PushV
	var_23_object = var_21_object; // 0x130f Mov
	func_3686(var_22_bool, var_23_object); // 0x1310 NEW_2
	if(var_22_bool == 0) goto Label_4889; // 0x1312 JumpB
	var_26_object = Obj(); // 0x1313 PushV
	func_4221(var_26_object); // 0x1314 NEW_2
	var_29_float = -0.01; // 0x1316 PushF
	ReportReputationChange(var_21_object, var_26_object, var_29_float); // 0x1317 Func
	
Label_4889:
	return 0; // 0x1319 Return
}


func_2318(var_2_object)
{
	var_78_int = 110; // 0x90e PushI
	KillTimer(var_78_int); // 0x90f Func
	var_2_object = 0; // 0x911 TMovB
	func_2453(var_22_bool, var_23_int); // 0x913 NEW_2
	return 0; // 0x915 Return
}


func_3342(var_2_object, var_5_bool)
{
	var_417_float = 0; var_418_int = 0; var_419_float = 0; var_420_int = 0; // 0xd0e PushV
	var_421_bool = var_2_object == 0; // 0xd0f Not
	if(var_421_bool == 0) goto Label_3346; // 0xd10 JumpB
	return 4; // 0xd11 Return
	
Label_3346:
	var_422_bool = var_5_bool; // 0xd12 PushT
	if(var_422_bool == 0) goto Label_3354; // 0xd13 JumpB
	var_423_int = -1; // 0xd14 PushI
	var_5_bool = var_5_bool + var_423_int; // 0xd15 Add2
	var_424_int = 0; // 0xd16 PushI
	var_425_bool = var_5_bool > var_424_int; // 0xd17 GT
	if(var_425_bool == 0) goto Label_3354; // 0xd18 JumpB
	return 4; // 0xd19 Return
	
Label_3354:
	rand(var_419_float); // 0xd1a Func
	var_426_float = 0; // 0xd1c PushV
	func_3392(var_426_float); // 0xd1d NEW_2
	var_427_bool = var_419_float < var_426_float; // 0xd1f LT
	if(var_427_bool == 0) goto Label_3373; // 0xd20 JumpB
	irand(var_420_int, var_419_float); // 0xd21 Func
	var_428_int = 1; // 0xd23 PushI
	var_420_int = var_420_int + var_428_int; // 0xd24 Add2
	var_429_string = "attack"; // 0xd25 PushS
	var_430_int = var_429_string + var_420_int; // 0xd26 Add
	Speak(var_430_int); // 0xd27 Func
	var_431_int = 0; // 0xd29 PushV
	func_3390(var_431_int); // 0xd2a NEW_2
	var_5_bool = var_431_int; // 0xd2b TMov
	
Label_3373:
	return 4; // 0xd2d Return
}


func_4368(var_296_bool, var_297_object)
{
	var_298_bool = 0; var_299_object = Obj(); // 0x1111 PushV
	var_299_object = var_297_object; // 0x1112 Mov
	func_4419(var_299_object); // 0x1113 NEW_2
	if(var_298_bool == 0) goto Label_4376; // 0x1115 JumpB
	var_296_bool = 1; // 0x1116 MovB
	return 0; // 0x1117 Return
	
Label_4376:
	var_296_bool = 0; // 0x1118 MovB
	return 0; // 0x1119 Return
}


func_4378(var_278_bool, var_279_object)
{
	var_280_bool = 0; var_281_object = Obj(); // 0x111b PushV
	var_281_object = var_279_object; // 0x111c Mov
	func_4426(var_281_object); // 0x111d NEW_2
	if(var_280_bool == 0) goto Label_4386; // 0x111f JumpB
	var_278_bool = 1; // 0x1120 MovB
	return 0; // 0x1121 Return
	
Label_4386:
	var_278_bool = 0; // 0x1122 MovB
	return 0; // 0x1123 Return
}


func_4890(var_19_bool, var_20_string)
{
	var_21_object = Obj(); var_22_object = Obj(); // 0x131a PushV
	var_23_string = "heal"; // 0x131b PushS
	var_24_bool = var_20_string == var_23_string; // 0x131c Eq
	if(var_24_bool == 0) goto Label_4904; // 0x131d JumpB
	var_25_string = "player"; // 0x131e PushS
	FindActor(var_22_object, var_25_string); // 0x131f Func
	var_26_bool = 0; var_27_object = Obj(); // 0x1321 PushV
	var_27_object = var_22_object; // 0x1322 Mov
	func_5170(var_27_object); // 0x1323 NEW_2
	var_19_bool = var_26_bool; // 0x1324 Mov
	return 2; // 0x1326 Return
	
Label_4904:
	var_19_bool = 0; // 0x1328 MovB
	return 2; // 0x1329 Return
}


func_2335(var_2_object, var_19_object)
{
	var_20_bool = 0; var_21_int = 0; var_22_bool = 0; var_23_int = 0; // 0x91f PushV
	var_24_bool = 0; var_25_object = Obj(); // 0x920 PushV
	var_25_object = var_19_object; // 0x921 Mov
	func_3817(var_24_bool, var_25_object); // 0x922 NEW_2
	var_58_bool = var_24_bool == 0; // 0x924 Not
	if(var_58_bool == 0) goto Label_2343; // 0x925 JumpB
	return 4; // 0x926 Return
	
Label_2343:
	var_59_object = var_2_object; // 0x927 PushT
	if(var_59_object == 0) goto Label_2346; // 0x928 JumpB
	return 4; // 0x929 Return
	
Label_2346:
	IsPlayerActor(var_19_object, var_22_bool); // 0x92a Func
	var_60_bool = var_22_bool == 0; // 0x92c Not
	if(var_60_bool == 0) goto Label_2351; // 0x92d JumpB
	return 4; // 0x92e Return
	
Label_2351:
	var_61_int = 0; var_62_object = Obj(); // 0x92f PushV
	var_62_object = var_19_object; // 0x930 Mov
	func_4943(var_61_int, var_62_object); // 0x931 NEW_2
	var_23_int = var_61_int; // 0x932 Mov
	var_74_int = 0; // 0x934 PushI
	var_75_bool = var_23_int > var_74_int; // 0x935 GT
	if(var_75_bool == 0) goto Label_2374; // 0x936 JumpB
	var_76_int = 1; // 0x937 PushI
	var_77_bool = var_23_int > var_76_int; // 0x938 GT
	if(var_77_bool == 0) goto Label_2365; // 0x939 JumpB
	func_2318(var_23_int); // 0x93b NEW_2
	
Label_2365:
	var_79_object = Obj(); // 0x93d PushV
	var_79_object = var_19_object; // 0x93e Mov
	func_4953(var_79_object); // 0x93f NEW_2
	var_2_object = 1; // 0x941 TMovB
	var_549_int = 110; // 0x942 PushI
	var_550_float = 10.0; // 0x943 PushF
	SetTimer(var_549_int, var_550_float); // 0x944 Func
	
Label_2374:
	return 4; // 0x946 Return
}


func_4388(var_254_bool, var_255_object)
{
	var_256_bool = 0; var_257_object = Obj(); // 0x1125 PushV
	var_257_object = var_255_object; // 0x1126 Mov
	func_4447(var_257_object); // 0x1127 NEW_2
	if(var_256_bool == 0) goto Label_4396; // 0x1129 JumpB
	var_254_bool = 1; // 0x112a MovB
	return 0; // 0x112b Return
	
Label_4396:
	var_254_bool = 0; // 0x112c MovB
	return 0; // 0x112d Return
}


func_4906(var_28_string)
{
	var_29_object = Obj(); var_30_object = Obj(); // 0x132a PushV
	var_31_string = "heal"; // 0x132b PushS
	var_32_bool = var_28_string == var_31_string; // 0x132c Eq
	if(var_32_bool == 0) goto Label_4918; // 0x132d JumpB
	var_33_string = "player"; // 0x132e PushS
	FindActor(var_30_object, var_33_string); // 0x132f Func
	var_34_object = Obj(); // 0x1331 PushV
	var_34_object = var_30_object; // 0x1332 Mov
	func_5173(); // 0x1333 NEW_2
	var_30_object = 0; // 0x1335 SetNull
	
Label_4918:
	return 2; // 0x1336 Return
}


func_3885(var_22_object, var_23_int, var_24_float)
{
	var_25_cvector = CVector(0,0,0); var_26_object = Obj(); var_27_int = 0; var_28_bool = 0; var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_int = 0; var_32_int = 0; var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_object = Obj(); var_36_int = 0; var_37_bool = 0; var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_int = 0; var_41_int = 0; var_42_cvector = CVector(0,0,0); // 0xf2d PushV
	var_43_bool = 0; // 0xf2e PushV
	var_43_bool = 0; // 0xf2f MovB
	var_44_bool = 0; // 0xf30 PushV
	var_44_bool = 0; // 0xf31 MovB
	var_45_object = var_22_object; // 0xf32 Push
	if(var_45_object == 0) goto Label_3896; // 0xf33 JumpB
	var_46_int = 4; // 0xf34 PushI
	var_47_bool = var_23_int != var_46_int; // 0xf35 Neq
	if(var_47_bool == 0) goto Label_3896; // 0xf36 JumpB
	var_44_bool = 1; // 0xf37 MovB
	
Label_3896:
	if(var_44_bool == 0) goto Label_3901; // 0xf38 JumpB
	var_48_int = 5; // 0xf39 PushI
	var_49_bool = var_23_int != var_48_int; // 0xf3a Neq
	if(var_49_bool == 0) goto Label_3901; // 0xf3b JumpB
	var_43_bool = 1; // 0xf3c MovB
	
Label_3901:
	if(var_43_bool == 0) goto Label_3948; // 0xf3d JumpB
	var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); // 0xf3e PushV
	var_52_cvector = CVector(0,0,0); var_53_object = Obj(); // 0xf3f PushV
	var_53_object = var_22_object; // 0xf40 Mov
	func_3671(var_53_object); // 0xf41 NEW_2
	var_51_cvector = var_52_cvector; // 0xf42 Mov
	func_4227(var_50_cvector, var_51_cvector); // 0xf44 NEW_2
	var_34_cvector = var_50_cvector; // 0xf45 Mov
	CreateVectorVector(var_35_object); // 0xf47 Func
	var_36_int = 1; // 0xf49 MovI
	
Label_3914:
	var_63_string = "hit"; // 0xf4a PushS
	var_64_int = var_63_string + var_36_int; // 0xf4b Add
	GetGeometryLocator(var_64_int, var_37_bool, var_38_cvector, var_39_cvector); // 0xf4c Func
	var_65_bool = var_37_bool == 0; // 0xf4e Not
	if(var_65_bool == 0) goto Label_3921; // 0xf4f JumpB
	goto Label_3930; // 0xf50 Jump
	
Label_3930:
	size(var_40_int); // 0xf5a ObjFunc
	var_66_int = var_40_int; // 0xf5c Push
	if(var_66_int == 0) goto Label_3947; // 0xf5d JumpB
	irand(var_41_int, var_40_int); // 0xf5e Func
	get(var_42_cvector, var_41_int); // 0xf60 ObjFunc
	var_67_object = Obj(); var_68_int = 0; var_69_float = 0; var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); // 0xf62 PushV
	var_67_object = var_22_object; // 0xf63 Mov
	var_68_int = var_23_int; // 0xf64 Mov
	var_69_float = var_24_float; // 0xf65 Mov
	var_70_cvector = var_42_cvector; // 0xf66 Mov
	var_71_cvector = -var_34_cvector; // 0xf67 Neg2
	func_3953(var_69_float, var_70_cvector, var_71_cvector); // 0xf68 NEW_2
	return 18; // 0xf6a Return
	
Label_3947:
	var_35_object = 0; // 0xf6b SetNull
	
Label_3948:
	var_112_object = Obj(); // 0xf6c PushV
	var_112_object = var_22_object; // 0xf6d Mov
	func_3841(var_112_object); // 0xf6e NEW_2
	return 18; // 0xf70 Return
	
Label_3921:
	var_113_int = var_39_cvector | var_34_cvector; // 0xf51 Or
	var_114_float = 0.70711; // 0xf52 PushF
	var_115_bool = var_113_int >= var_114_float; // 0xf53 GE
	if(var_115_bool == 0) goto Label_3927; // 0xf54 JumpB
	add(var_38_cvector); // 0xf55 ObjFunc
	
Label_3927:
	var_116_int = 1; // 0xf57 PushI
	var_36_int = var_36_int + var_116_int; // 0xf58 Add2
	goto Label_3914; // 0xf59 Jump
}


func_3374(var_0_bool)
{
	var_173_object = Obj(); // 0xd2e PushV
	var_173_object = var_0_bool; // 0xd2f MovT
	func_4294(var_173_object); // 0xd30 NEW_2
	return 0; // 0xd32 Return
}


func_4398(var_213_bool)
{
	var_215_int = 0; // 0x112f PushV
	func_4277(var_215_int); // 0x1130 NEW_2
	var_216_int = 1; // 0x1132 PushI
	var_213_bool = var_215_int == var_216_int; // 0x1133 Eq2
	return 0; // 0x1134 Return
}


func_3379(var_514_int)
{
	var_514_int = 0; // 0xd33 MovI
	return 0; // 0xd34 Return
}


func_3381()
{
	var_306_string = ""; // 0xd35 PushV
	var_306_string = "attack_stay"; // 0xd36 MovS
	func_4180(var_306_string); // 0xd37 NEW_2
	return 0; // 0xd39 Return
}


func_4405(var_274_bool)
{
	var_276_int = 0; // 0x1136 PushV
	func_4277(var_276_int); // 0x1137 NEW_2
	var_277_int = 2; // 0x1139 PushI
	var_274_bool = var_276_int == var_277_int; // 0x113a Eq2
	return 0; // 0x113b Return
}


func_4919(var_73_string, var_74_int)
{
	var_75_string = ""; var_76_string = ""; // 0x1337 PushV
	var_76_string = "idle"; // 0x1338 MovS
	var_77_int = var_74_int; // 0x1339 Push
	if(var_77_int == 0) goto Label_4924; // 0x133a JumpB
	var_76_string = var_76_string + var_74_int; // 0x133b Add2
	
Label_4924:
	var_73_string = var_76_string; // 0x133c Mov
	return 2; // 0x133d Return
}


func_3386()
{
	return 0; // 0xd3b Return
}


func_3388(var_539_bool)
{
	var_539_bool = 1; // 0xd3c MovB
	return 0; // 0xd3d Return
}


func_4412(var_143_bool)
{
	var_145_int = 0; // 0x113d PushV
	func_4277(var_145_int); // 0x113e NEW_2
	var_151_int = 4; // 0x1140 PushI
	var_143_bool = var_145_int == var_151_int; // 0x1141 Eq2
	return 0; // 0x1142 Return
}


func_4926(var_67_int)
{
	var_68_int = 0; var_69_bool = 0; var_70_int = 0; var_71_bool = 0; // 0x133e PushV
	var_70_int = 0; // 0x133f MovI
	
Label_4928:
	var_72_string = "all"; // 0x1340 PushS
	var_73_string = ""; var_74_int = 0; // 0x1341 PushV
	var_74_int = var_70_int; // 0x1342 Mov
	func_4919(var_73_string, var_74_int); // 0x1343 NEW_2
	HasAnimation(var_71_bool, var_72_string, var_73_string); // 0x1345 Func
	var_78_bool = var_71_bool == 0; // 0x1347 Not
	if(var_78_bool == 0) goto Label_4938; // 0x1348 JumpB
	goto Label_4941; // 0x1349 Jump
	
Label_4941:
	var_67_int = var_70_int; // 0x134d Mov
	return 4; // 0x134e Return
	
Label_4938:
	var_79_int = 1; // 0x134a PushI
	var_70_int = var_70_int + var_79_int; // 0x134b Add2
	goto Label_4928; // 0x134c Jump
}


func_3390(var_431_int)
{
	var_431_int = 1; // 0xd3e MovI
	return 0; // 0xd3f Return
}


func_3392(var_426_float)
{
	var_426_float = 0.5; // 0xd40 MovF
	return 0; // 0xd41 Return
}


func_4419(var_298_bool)
{
	var_300_int = 0; // 0x1144 PushV
	func_4277(var_300_int); // 0x1145 NEW_2
	var_301_int = 5; // 0x1147 PushI
	var_298_bool = var_300_int == var_301_int; // 0x1148 Eq2
	return 0; // 0x1149 Return
}


func_2375(var_0_bool, var_1_object)
{
	var_24_float = 0; var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_bool = 0; var_28_object = Obj(); var_29_bool = 0; var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_bool = 0; var_34_object = Obj(); var_35_bool = 0; // 0x947 PushV
	var_0_bool = 0; // 0x948 TMovB
	var_1_object = 0; // 0x949 TMovB
	var_36_float = 0.5; // 0x94a PushF
	rand(var_30_float, var_36_float); // 0x94b Func
	Sleep(var_30_float); // 0x94d Func
	
Label_2383:
	var_37_bool = var_0_bool == 0; // 0x94f Not
	if(var_37_bool == 0) goto Label_2433; // 0x950 JumpB
	var_38_bool = var_1_object == 0; // 0x951 Not
	if(var_38_bool == 0) goto Label_2402; // 0x952 JumpB
	
Label_2387:
	GetPosition(var_32_cvector); // 0x953 Func
	var_39_float = 0; // 0x955 PushV
	func_2434(var_39_float); // 0x956 NEW_2
	GetRandomPFPointInCircle(var_31_cvector, var_32_cvector, var_39_float, var_33_bool); // 0x958 Func
	var_42_bool = var_33_bool; // 0x95a Push
	if(var_42_bool == 0) goto Label_2397; // 0x95b JumpB
	goto Label_2401; // 0x95c Jump
	
Label_2401:
	goto Label_2403; // 0x961 Jump
	
Label_2403:
	var_43_object = Obj(); var_44_cvector = CVector(0,0,0); // 0x963 PushV
	var_44_cvector = var_31_cvector; // 0x964 Mov
	func_2462(var_43_object, var_44_cvector); // 0x965 NEW_2
	var_34_object = var_43_object; // 0x966 Mov
	var_47_bool = var_34_object != 0; // 0x968 NullNeq
	if(var_47_bool == 0) goto Label_2428; // 0x969 JumpB
	RotatePath(var_34_object, var_35_bool); // 0x96a Func
	var_48_bool = var_35_bool; // 0x96c Push
	if(var_48_bool == 0) goto Label_2427; // 0x96d JumpB
	var_49_bool = 0; // 0x96e PushV
	func_2460(var_49_bool); // 0x96f NEW_2
	FollowPath(var_34_object, var_49_bool, var_35_bool); // 0x971 Func
	var_34_object = 0; // 0x973 SetNull
	var_50_bool = var_35_bool; // 0x974 Push
	if(var_50_bool == 0) goto Label_2427; // 0x975 JumpB
	TaskCall(5); // 0x977 TaskCall
	func_2632(); // 0x978 NEW_2
	TaskReturn(); // 0x979 TaskReturn
	
Label_2427:
	goto Label_2431; // 0x97b Jump
	
Label_2431:
	var_34_object = 0; // 0x97f SetNull
	goto Label_2383; // 0x980 Jump
	
Label_2428:
	var_102_int = 1; // 0x97c PushI
	Sleep(var_102_int); // 0x97d Func
	
Label_2397:
	var_103_int = 1; // 0x95d PushI
	Sleep(var_103_int); // 0x95e Func
	goto Label_2387; // 0x960 Jump
	
Label_2402:
	var_1_object = 0; // 0x962 TMovB
	
Label_2433:
	return 12; // 0x981 Return
}


func_3401(var_2_object, var_180_bool, var_181_object, var_182_float, var_183_float, var_184_bool, var_185_bool)
{
	var_189_bool = 0; var_190_bool = 0; var_191_bool = 0; var_192_bool = 0; // 0xd49 PushV
	var_193_object = Obj(); // 0xd4a PushV
	var_193_object = var_181_object; // 0xd4b Mov
	func_4294(var_193_object); // 0xd4c NEW_2
	var_194_int = 1; // 0xd4e PushI
	var_195_int = 5; // 0xd4f PushI
	SetTimer(var_194_int, var_195_int); // 0xd50 Func
	CanSee(var_191_bool, var_181_object); // 0xd52 Func
	var_196_bool = var_191_bool; // 0xd54 Push
	if(var_196_bool == 0) goto Label_3420; // 0xd55 JumpB
	var_2_object = 1; // 0xd56 TMovB
	var_197_object = Obj(); // 0xd57 PushV
	var_197_object = var_181_object; // 0xd58 Mov
	func_4162(var_197_object); // 0xd59 NEW_2
	goto Label_3421; // 0xd5b Jump
	
Label_3421:
	var_204_bool = 0; var_205_object = Obj(); // 0xd5d PushV
	var_205_object = var_181_object; // 0xd5e Mov
	func_3686(var_204_bool, var_205_object); // 0xd5f NEW_2
	if(var_204_bool == 0) goto Label_3431; // 0xd61 JumpB
	var_208_object = Obj(); // 0xd62 PushV
	func_4221(var_208_object); // 0xd63 NEW_2
	SendPlayerEnemy(var_181_object, var_208_object); // 0xd65 Func
	
Label_3431:
	var_209_bool = 0; var_210_object = Obj(); var_211_float = 0; var_212_float = 0; var_213_bool = 0; var_214_bool = 0; // 0xd67 PushV
	var_210_object = var_181_object; // 0xd68 Mov
	var_211_float = var_182_float; // 0xd69 Mov
	var_212_float = var_183_float; // 0xd6a Mov
	var_213_bool = var_184_bool; // 0xd6b Mov
	var_214_bool = var_185_bool; // 0xd6c Mov
	func_3506(var_191_bool, var_192_bool, var_209_bool, var_210_object, var_211_float, var_212_float, var_213_bool, var_214_bool); // 0xd6d NEW_2
	var_192_bool = var_209_bool; // 0xd6e Mov
	var_260_object = var_2_object; // 0xd70 PushT
	if(var_260_object == 0) goto Label_3445; // 0xd71 JumpB
	var_261_string = "head"; // 0xd72 PushS
	UnlookAsync(var_261_string); // 0xd73 Func
	
Label_3445:
	var_262_int = 1; // 0xd75 PushI
	KillTimer(var_262_int); // 0xd76 Func
	var_180_bool = var_192_bool; // 0xd78 Mov
	return 4; // 0xd79 Return
	
Label_3420:
	var_2_object = 0; // 0xd5c TMovB
}


func_4426(var_280_bool)
{
	var_282_bool = 0; // 0x114b PushV
	var_282_bool = 0; // 0x114c MovB
	var_283_int = 0; // 0x114d PushV
	func_4286(var_283_int); // 0x114e NEW_2
	var_284_int = 0; // 0x1150 PushI
	var_285_bool = var_283_int >= var_284_int; // 0x1151 GE
	if(var_285_bool == 0) goto Label_4442; // 0x1152 JumpB
	var_286_int = 0; // 0x1153 PushV
	func_4286(var_286_int); // 0x1154 NEW_2
	var_287_int = 12; // 0x1156 PushI
	var_288_bool = var_286_int < var_287_int; // 0x1157 LT
	if(var_288_bool == 0) goto Label_4442; // 0x1158 JumpB
	var_282_bool = 1; // 0x1159 MovB
	
Label_4442:
	if(var_282_bool == 0) goto Label_4445; // 0x115a JumpB
	var_280_bool = 1; // 0x115b MovB
	return 0; // 0x115c Return
	
Label_4445:
	var_280_bool = 0; // 0x115d MovB
	return 0; // 0x115e Return
}


func_4943(var_61_int, var_62_object)
{
	var_63_bool = 0; var_64_object = Obj(); // 0x1350 PushV
	var_64_object = var_62_object; // 0x1351 Mov
	func_5235(var_63_bool, var_64_object); // 0x1352 NEW_2
	if(var_63_bool == 0) goto Label_4951; // 0x1354 JumpB
	var_61_int = 2; // 0x1355 MovI
	goto Label_4952; // 0x1356 Jump
	
Label_4952:
	return 0; // 0x1358 Return
	
Label_4951:
	var_61_int = 0; // 0x1357 MovI
}


func_4953(var_79_object)
{
	var_80_object = Obj(); // 0x135a PushV
	var_80_object = var_79_object; // 0x135b Mov
	func_4969(var_80_object); // 0x135c NEW_2
	return 0; // 0x135e Return
}


func_4959(var_88_int, var_89_object)
{
	var_90_bool = 0; var_91_object = Obj(); // 0x1360 PushV
	var_91_object = var_89_object; // 0x1361 Mov
	func_3817(var_90_bool, var_91_object); // 0x1362 NEW_2
	if(var_90_bool == 0) goto Label_4967; // 0x1364 JumpB
	var_88_int = 2; // 0x1365 MovI
	goto Label_4968; // 0x1366 Jump
	
Label_4968:
	return 0; // 0x1368 Return
	
Label_4967:
	var_88_int = 0; // 0x1367 MovI
}


func_4447(var_256_bool)
{
	var_258_int = 0; // 0x1160 PushV
	func_4286(var_258_int); // 0x1161 NEW_2
	var_263_int = 12; // 0x1163 PushI
	var_264_bool = var_258_int >= var_263_int; // 0x1164 GE
	if(var_264_bool == 0) goto Label_4456; // 0x1165 JumpB
	var_256_bool = 1; // 0x1166 MovB
	return 0; // 0x1167 Return
	
Label_4456:
	var_256_bool = 0; // 0x1168 MovB
	return 0; // 0x1169 Return
}


func_4969(var_101_object)
{
	var_102_object = Obj(); // 0x136a PushV
	var_102_object = var_101_object; // 0x136b Mov
	TaskCall(6); // 0x136c TaskCall
	func_2718(var_102_object); // 0x136d NEW_2
	TaskReturn(); // 0x136e TaskReturn
	return 0; // 0x1370 Return
}


func_4458(var_116_int)
{
	var_117_int = 0; var_118_int = 0; // 0x116a PushV
	var_119_string = "branch"; // 0x116b PushS
	GetVariable(var_119_string, var_118_int); // 0x116c Func
	var_120_int = 0; // 0x116e PushI
	var_121_bool = var_118_int == var_120_int; // 0x116f Eq
	if(var_121_bool == 0) goto Label_4468; // 0x1170 JumpB
	var_116_int = 1; // 0x1171 MovI
	return 2; // 0x1172 Return
	
Label_4468:
	var_122_int = 1; // 0x1174 PushI
	var_123_bool = var_118_int == var_122_int; // 0x1175 Eq
	if(var_123_bool == 0) goto Label_4473; // 0x1176 JumpB
	var_116_int = 2; // 0x1177 MovI
	return 2; // 0x1178 Return
	
Label_4473:
	var_116_int = 3; // 0x1179 MovI
	return 2; // 0x117a Return
}


func_3953(var_24_object, var_27_cvector, var_28_cvector)
{
	var_29_object = Obj(); var_30_object = Obj(); var_31_object = Obj(); var_32_object = Obj(); // 0xf71 PushV
	GetScene(var_31_object); // 0xf72 Func
	var_33_string = "scripted"; // 0xf74 PushS
	var_34_string = "blood_dir.xml"; // 0xf75 PushS
	AddActorByType(var_32_object, var_33_string, var_31_object, var_27_cvector, var_28_cvector, var_34_string); // 0xf76 Func
	var_35_object = Obj(); // 0xf78 PushV
	var_35_object = var_24_object; // 0xf79 Mov
	func_3841(var_35_object); // 0xf7a NEW_2
	return 4; // 0xf7c Return
}


func_4977(var_34_bool, var_35_object, var_36_bool)
{
	var_37_string = ""; var_38_string = ""; var_39_string = ""; var_40_string = ""; // 0x1371 PushV
	var_41_bool = 0; var_42_object = Obj(); var_43_string = ""; // 0x1372 PushV
	var_42_object = var_35_object; // 0x1373 Mov
	var_43_string = "class"; // 0x1374 MovS
	func_3691(var_41_bool, var_42_object, var_43_string); // 0x1375 NEW_2
	var_50_bool = var_41_bool == 0; // 0x1377 Not
	if(var_50_bool == 0) goto Label_4987; // 0x1378 JumpB
	var_34_bool = 0; // 0x1379 MovB
	return 4; // 0x137a Return
	
Label_4987:
	var_51_string = "class"; // 0x137b PushS
	GetProperty(var_51_string, var_39_string); // 0x137c Func
	var_52_string = "class"; // 0x137e PushS
	GetProperty(var_52_string, var_40_string); // 0x137f ObjFunc
	var_53_bool = 0; // 0x1381 PushV
	var_53_bool = 0; // 0x1382 MovB
	var_54_bool = var_36_bool == 0; // 0x1383 Not
	if(var_54_bool == 0) goto Label_5000; // 0x1384 JumpB
	var_55_bool = var_39_string == var_40_string; // 0x1385 Eq
	if(var_55_bool == 0) goto Label_5000; // 0x1386 JumpB
	var_53_bool = 1; // 0x1387 MovB
	
Label_5000:
	if(var_53_bool == 0) goto Label_5003; // 0x1388 JumpB
	var_34_bool = 1; // 0x1389 MovB
	return 4; // 0x138a Return
	
Label_5003:
	var_56_string = "rat"; // 0x138b PushS
	var_57_bool = var_40_string == var_56_string; // 0x138c Eq
	if(var_57_bool == 0) goto Label_5009; // 0x138d JumpB
	var_34_bool = 0; // 0x138e MovB
	return 4; // 0x138f Return
	
Label_5009:
	var_58_string = "rat_big"; // 0x1391 PushS
	var_59_bool = var_40_string == var_58_string; // 0x1392 Eq
	if(var_59_bool == 0) goto Label_5015; // 0x1393 JumpB
	var_34_bool = 0; // 0x1394 MovB
	return 4; // 0x1395 Return
	
Label_5015:
	var_60_string = "dog"; // 0x1397 PushS
	var_61_bool = var_40_string == var_60_string; // 0x1398 Eq
	if(var_61_bool == 0) goto Label_5021; // 0x1399 JumpB
	var_34_bool = 0; // 0x139a MovB
	return 4; // 0x139b Return
	
Label_5021:
	var_62_string = "grabitel"; // 0x139d PushS
	var_63_bool = var_40_string == var_62_string; // 0x139e Eq
	if(var_63_bool == 0) goto Label_5027; // 0x139f JumpB
	var_34_bool = 0; // 0x13a0 MovB
	return 4; // 0x13a1 Return
	
Label_5027:
	var_64_string = "bomber"; // 0x13a3 PushS
	var_65_bool = var_40_string == var_64_string; // 0x13a4 Eq
	if(var_65_bool == 0) goto Label_5033; // 0x13a5 JumpB
	var_34_bool = 0; // 0x13a6 MovB
	return 4; // 0x13a7 Return
	
Label_5033:
	var_66_string = "sanitar"; // 0x13a9 PushS
	var_67_bool = var_40_string == var_66_string; // 0x13aa Eq
	if(var_67_bool == 0) goto Label_5039; // 0x13ab JumpB
	var_34_bool = 0; // 0x13ac MovB
	return 4; // 0x13ad Return
	
Label_5039:
	var_68_string = "hunter"; // 0x13af PushS
	var_69_bool = var_40_string == var_68_string; // 0x13b0 Eq
	if(var_69_bool == 0) goto Label_5045; // 0x13b1 JumpB
	var_34_bool = 0; // 0x13b2 MovB
	return 4; // 0x13b3 Return
	
Label_5045:
	var_70_string = "soldier"; // 0x13b5 PushS
	var_71_bool = var_40_string == var_70_string; // 0x13b6 Eq
	if(var_71_bool == 0) goto Label_5050; // 0x13b7 JumpB
	var_34_bool = 0; // 0x13b8 MovB
	return 4; // 0x13b9 Return
	
Label_5050:
	var_34_bool = 1; // 0x13ba MovB
	return 4; // 0x13bb Return
}


func_4475(var_225_int)
{
	var_226_int = 0; var_227_int = 0; // 0x117b PushV
	var_228_string = "branch"; // 0x117c PushS
	GetVariable(var_228_string, var_227_int); // 0x117d Func
	var_225_int = var_227_int; // 0x117f Mov
	return 2; // 0x1180 Return
}


func_3967()
{
	var_284_cvector = CVector(0,0,0); var_285_cvector = CVector(0,0,0); var_286_cvector = CVector(0,0,0); var_287_cvector = CVector(0,0,0); var_288_cvector = CVector(0,0,0); var_289_cvector = CVector(0,0,0); // 0xf7f PushV
	GetPosition(var_287_cvector); // 0xf80 ObjFunc
	GetPosition(var_288_cvector); // 0xf82 Func
	var_289_cvector = var_287_cvector - var_288_cvector; // 0xf84 Sub2
	var_290_float = GetByIndex(var_289_cvector, 0); // 0xf85 PushE
	var_291_float = GetByIndex(var_289_cvector, 2); // 0xf86 PushE
	RotateAsync(var_290_float, var_291_float); // 0xf87 Func
	return 6; // 0xf89 Return
}


func_4481(var_33_object)
{
	var_34_int = 0; // 0x1182 PushV
	func_4475(var_34_int); // 0x1183 NEW_2
	var_38_int = 1; // 0x1185 PushI
	var_39_bool = var_34_int == var_38_int; // 0x1186 Eq
	if(var_39_bool == 0) goto Label_4491; // 0x1187 JumpB
	WorkWithCorpse(var_33_object); // 0x1188 Func
	goto Label_4493; // 0x118a Jump
	
Label_4493:
	return 0; // 0x118d Return
	
Label_4491:
	Barter(var_33_object); // 0x118b Func
}


func_2434(var_39_float)
{
	var_40_float = 0; var_41_float = 0; // 0x982 PushV
	GetCameraFarDistance(var_41_float); // 0x983 Func
	var_39_float = var_41_float; // 0x985 Mov
	return 2; // 0x986 Return
}


func_3464(var_2_object)
{
	var_19_int = 1; // 0xd88 PushI
	KillTimer(var_19_int); // 0xd89 Func
	var_20_object = var_2_object; // 0xd8b PushT
	if(var_20_object == 0) goto Label_3473; // 0xd8c JumpB
	var_2_object = 0; // 0xd8d TMovB
	var_21_string = "head"; // 0xd8e PushS
	UnlookAsync(var_21_string); // 0xd8f Func
	
Label_3473:
	func_3630(var_18_object); // 0xd92 NEW_2
	return 0; // 0xd94 Return
}


func_3978(var_20_bool)
{
	var_21_bool = 0; var_22_bool = 0; // 0xf8a PushV
	IsLoaded(var_22_bool); // 0xf8b Func
	var_20_bool = var_22_bool; // 0xf8d Mov
	return 2; // 0xf8e Return
}


func_2446(var_0_bool, var_1_object)
{
	var_0_bool = 1; // 0x98e TMovB
	var_1_object = 0; // 0x98f TMovB
	Stop(); // 0x990 Func
	StopGroup0(); // 0x992 Func
	return 0; // 0x994 Return
}


func_3983(var_64_bool, var_66_float)
{
	var_67_float = 0; var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); var_73_cvector = CVector(0,0,0); var_74_bool = 0; var_75_bool = 0; var_76_float = 0; var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0); var_79_cvector = CVector(0,0,0); var_80_cvector = CVector(0,0,0); var_81_cvector = CVector(0,0,0); var_82_cvector = CVector(0,0,0); var_83_bool = 0; var_84_bool = 0; // 0xf8f PushV
	GetPosition(var_77_cvector); // 0xf90 ObjFunc
	GetEyesHeight(var_76_float); // 0xf92 ObjFunc
	var_85_float = GetByIndex(var_77_cvector, 1); // 0xf94 PushE
	var_85_float = var_85_float + var_76_float; // 0xf95 Add2
	SetByIndex(var_77_cvector, 1) = var_85_float; // 0xf96 PopE
	GetPosition(var_78_cvector); // 0xf97 Func
	GetEyesHeight(var_76_float); // 0xf99 Func
	var_86_float = GetByIndex(var_78_cvector, 1); // 0xf9b PushE
	var_86_float = var_86_float + var_76_float; // 0xf9c Add2
	SetByIndex(var_78_cvector, 1) = var_86_float; // 0xf9d PopE
	var_79_cvector = var_77_cvector - var_78_cvector; // 0xf9e Sub2
	var_87_float = GetByIndex(var_79_cvector, 1); // 0xf9f PushE
	var_87_float = 0; // 0xfa0 MovI
	SetByIndex(var_79_cvector, 1) = var_87_float; // 0xfa1 PopE
	var_88_int = var_79_cvector | var_79_cvector; // 0xfa2 Or
	var_89_float = sqrt(var_88_int); // 0xfa3 Sqrt
	var_79_cvector = var_79_cvector / var_79_cvector; // 0xfa4 Div2
	var_80_cvector = -var_79_cvector; // 0xfa5 Neg2
	var_90_float = var_79_cvector * var_66_float; // 0xfa6 Mult
	var_91_cvector = CVector(0,0,0); var_92_cvector = CVector(0,0,0); // 0xfa7 PushV
	var_93_cvector = CVector(0.0, 1.0, 0.0); // 0xfa8 PushVec
	var_92_cvector = var_80_cvector ^ var_93_cvector; // 0xfa9 Xor2
	func_4227(var_91_cvector, var_92_cvector); // 0xfaa NEW_2
	var_99_int = 25; // 0xfac PushI
	var_100_float = var_91_cvector * var_99_int; // 0xfad Mult
	var_101_int = var_90_float + var_100_float; // 0xfae Add
	var_102_cvector = CVector(0.0, 10.0, 0.0); // 0xfaf PushVec
	var_81_cvector = var_101_int - var_102_cvector; // 0xfb0 Sub2
	var_82_cvector = var_78_cvector + var_81_cvector; // 0xfb1 Add2
	IsOverrideActive(var_83_bool); // 0xfb2 Func
	var_103_bool = var_83_bool; // 0xfb4 Push
	if(var_103_bool == 0) goto Label_4024; // 0xfb5 JumpB
	var_64_bool = 0; // 0xfb6 MovB
	return 18; // 0xfb7 Return
	
Label_4024:
	StopWorld(); // 0xfb8 Func
	var_104_bool = 1; // 0xfba PushB
	CameraTransit(var_82_cvector, var_80_cvector, var_104_bool); // 0xfbb Func
	var_105_float = GetByIndex(var_81_cvector, 0); // 0xfbd PushE
	var_106_float = GetByIndex(var_81_cvector, 2); // 0xfbe PushE
	Rotate(var_105_float, var_106_float); // 0xfbf Func
	var_107_bool = 0; // 0xfc1 PushV
	func_5183(var_107_bool); // 0xfc2 NEW_2
	if(var_107_bool == 0) goto Label_4038; // 0xfc4 JumpB
	goto Label_4046; // 0xfc5 Jump
	
Label_4046:
	CameraWaitForPlayFinish(); // 0xfce Func
	ResumeWorld(); // 0xfd0 Func
	var_64_bool = 1; // 0xfd2 MovB
	return 18; // 0xfd3 Return
	
Label_4038:
	var_108_string = "head"; // 0xfc6 PushS
	HasAnimationTrack(var_84_bool, var_108_string); // 0xfc7 Func
	var_109_bool = var_84_bool; // 0xfc9 Push
	if(var_109_bool == 0) goto Label_4046; // 0xfca JumpB
	var_110_string = "head"; // 0xfcb PushS
	LookAsyncCamera(var_110_string); // 0xfcc Func
}


func_4494(var_117_int, var_118_int)
{
	var_128_int = 0; var_129_bool = 0; var_130_int = 0; var_131_bool = 0; // 0x118e PushV
	var_132_bool = var_117_int > var_118_int; // 0x118f GT
	if(var_132_bool == 0) goto Label_4501; // 0x1190 JumpB
	var_133_string = "GenerateMoney: iMin > iMax"; // 0x1191 PushS
	Trace(var_133_string); // 0x1192 Func
	return 4; // 0x1194 Return
	
Label_4501:
	var_130_int = 0; // 0x1195 MovI
	var_134_bool = var_117_int != var_118_int; // 0x1196 Neq
	if(var_134_bool == 0) goto Label_4508; // 0x1197 JumpB
	var_135_int = var_118_int - var_117_int; // 0x1198 Sub
	irand(var_130_int, var_135_int); // 0x1199 Func
	goto Label_4512; // 0x119b Jump
	
Label_4512:
	var_130_int = var_130_int + var_117_int; // 0x11a0 Add2
	var_136_int = 0; // 0x11a1 PushI
	var_137_bool = var_130_int == var_136_int; // 0x11a2 Eq
	if(var_137_bool == 0) goto Label_4517; // 0x11a3 JumpB
	return 4; // 0x11a4 Return
	
Label_4517:
	var_138_int = 0; var_139_string = ""; // 0x11a5 PushV
	var_139_string = "Money"; // 0x11a6 MovS
	func_4741(var_138_int, var_139_string); // 0x11a7 NEW_2
	var_142_int = 0; // 0x11a9 PushI
	AddItem(var_131_bool, var_138_int, var_142_int, var_130_int); // 0x11aa Func
	return 4; // 0x11ac Return
	
Label_4508:
	var_143_int = 0; // 0x119c PushI
	var_144_bool = var_117_int == var_143_int; // 0x119d Eq
	if(var_144_bool == 0) goto Label_4512; // 0x119e JumpB
	return 4; // 0x119f Return
}


func_2961(var_1_object, var_2_object, var_4_string)
{
	var_134_bool = 0; var_135_bool = 0; var_136_cvector = CVector(0,0,0); var_137_bool = 0; var_138_bool = 0; var_139_cvector = CVector(0,0,0); // 0xb91 PushV
	var_1_object = 0; // 0xb92 TMovI
	
Label_2963:
	var_140_string = "all"; // 0xb93 PushS
	var_141_string = "attack_begin"; // 0xb94 PushS
	var_142_int = 1; // 0xb95 PushI
	var_143_int = var_1_object + var_142_int; // 0xb96 Add
	var_144_int = var_141_string + var_143_int; // 0xb97 Add
	HasAnimation(var_137_bool, var_140_string, var_144_int); // 0xb98 Func
	var_145_bool = var_137_bool == 0; // 0xb9a Not
	if(var_145_bool == 0) goto Label_2973; // 0xb9b JumpB
	goto Label_2976; // 0xb9c Jump
	
Label_2976:
	var_2_object = 0; // 0xba0 TMovI
	
Label_2977:
	var_146_string = "attack"; // 0xba1 PushS
	var_147_int = 1; // 0xba2 PushI
	var_148_int = var_2_object + var_147_int; // 0xba3 Add
	var_149_int = var_146_string + var_148_int; // 0xba4 Add
	IsExisting3DSound(var_138_bool, var_149_int); // 0xba5 Func
	var_150_bool = var_138_bool == 0; // 0xba7 Not
	if(var_150_bool == 0) goto Label_2986; // 0xba8 JumpB
	goto Label_2989; // 0xba9 Jump
	
Label_2989:
	var_151_string = "all"; // 0xbad PushS
	var_152_string = "bjump"; // 0xbae PushS
	GetAnimationOffset(var_139_cvector, var_151_string, var_152_string); // 0xbaf Func
	var_153_float = GetByIndex(var_139_cvector, 2); // 0xbb1 PushE
	var_4_string = -var_153_float; // 0xbb2 Neg2
	return 6; // 0xbb3 Return
	
Label_2986:
	var_154_int = 1; // 0xbaa PushI
	var_2_object = var_2_object + var_154_int; // 0xbab Add2
	goto Label_2977; // 0xbac Jump
	
Label_2973:
	var_155_int = 1; // 0xb9d PushI
	var_1_object = var_1_object + var_155_int; // 0xb9e Add2
	goto Label_2963; // 0xb9f Jump
}


func_2453(var_0_bool, var_1_object)
{
	var_0_bool = 1; // 0x995 TMovB
	var_1_object = 1; // 0x996 TMovB
	Stop(); // 0x997 Func
	StopGroup0(); // 0x999 Func
	return 0; // 0x99b Return
}


func_1943(var_20_object)
{
	EventDisable(0); // 0x798 EventDisable
	var_21_object = Obj(); // 0x799 PushV
	var_21_object = var_20_object; // 0x79a Mov
	func_1976(var_21_object); // 0x79b NEW_2
	var_101_object = Obj(); // 0x79d PushV
	var_101_object = var_20_object; // 0x79e Mov
	func_5264(var_101_object); // 0x79f NEW_2
	EventEnable(0); // 0x7a1 EventEnable
	
Label_1954:
	Hold(); // 0x7a2 Func
	goto Label_1954; // 0x7a4 Jump
}


func_2460(var_49_bool)
{
	var_49_bool = 0; // 0x99c MovB
	return 0; // 0x99d Return
}


func_2462(var_43_object, var_44_cvector)
{
	var_45_object = Obj(); var_46_object = Obj(); // 0x99e PushV
	FindShiftedPathTo(var_46_object, var_44_cvector); // 0x99f Func
	var_43_object = var_46_object; // 0x9a1 Mov
	return 2; // 0x9a2 Return
}


func_424(var_2_object, var_152_string)
{
	var_153_bool = 0; // 0x1a9 PushV
	func_5183(var_153_bool); // 0x1aa NEW_2
	var_154_bool = var_153_bool == 0; // 0x1ac Not
	if(var_154_bool == 0) goto Label_431; // 0x1ad JumpB
	return 0; // 0x1ae Return
	
Label_431:
	var_155_bool = var_152_string == var_2_object; // 0x1af Eq
	if(var_155_bool == 0) goto Label_434; // 0x1b0 JumpB
	return 0; // 0x1b1 Return
	
Label_434:
	var_156_string = ""; var_157_bool = 0; // 0x1b2 PushV
	var_156_string = var_152_string; // 0x1b3 Mov
	var_158_string = ""; // 0x1b4 PushS
	var_159_bool = var_152_string == var_158_string; // 0x1b5 Eq
	if(var_159_bool == 0) goto Label_441; // 0x1b6 JumpB
	var_157_bool = 0; // 0x1b7 MovB
	goto Label_442; // 0x1b8 Jump
	
Label_442:
	func_4147(var_156_string, var_157_bool); // 0x1ba NEW_2
	var_2_object = var_152_string; // 0x1bc TMov
	return 0; // 0x1bd Return
	
Label_441:
	var_157_bool = 1; // 0x1b9 MovB
}


func_4525(var_231_string)
{
	var_232_object = Obj(); var_233_int = 0; var_234_bool = 0; var_235_object = Obj(); var_236_int = 0; var_237_bool = 0; // 0x11ad PushV
	CreateInvItem(var_235_object); // 0x11ae Func
	SetItemName(var_231_string); // 0x11b0 ObjFunc
	var_238_string = "Organ"; // 0x11b2 PushS
	var_239_int = 1; // 0x11b3 PushI
	SetProperty(var_238_string, var_239_int); // 0x11b4 ObjFunc
	GetItemID(var_236_int); // 0x11b6 ObjFunc
	var_240_int = 0; // 0x11b8 PushI
	var_241_int = 1; // 0x11b9 PushI
	AddItem(var_237_bool, var_235_object, var_240_int, var_241_int); // 0x11ba Func
	return 6; // 0x11bc Return
}


func_3506(var_0_bool, var_1_object, var_209_bool, var_210_object, var_211_float, var_212_float, var_213_bool, var_214_bool)
{
	var_215_bool = 0; var_216_bool = 0; var_217_object = Obj(); var_218_cvector = CVector(0,0,0); var_219_cvector = CVector(0,0,0); var_220_cvector = CVector(0,0,0); var_221_float = 0; var_222_object = Obj(); var_223_bool = 0; var_224_bool = 0; var_225_object = Obj(); var_226_cvector = CVector(0,0,0); var_227_cvector = CVector(0,0,0); var_228_cvector = CVector(0,0,0); var_229_float = 0; var_230_object = Obj(); // 0xdb2 PushV
	var_0_bool = 0; // 0xdb3 TMovB
	var_1_object = var_210_object; // 0xdb4 TMov
	var_224_bool = var_214_bool; // 0xdb5 Mov
	
Label_3510:
	var_231_bool = 0; var_232_object = Obj(); // 0xdb6 PushV
	var_232_object = var_210_object; // 0xdb7 Mov
	func_3646(var_231_bool, var_232_object); // 0xdb8 NEW_2
	var_235_bool = var_231_bool == 0; // 0xdba Not
	if(var_235_bool == 0) goto Label_3518; // 0xdbb JumpB
	var_209_bool = 0; // 0xdbc MovB
	return 16; // 0xdbd Return
	
Label_3518:
	GetPosition(var_226_cvector); // 0xdbe ObjFunc
	GetPosition(var_227_cvector); // 0xdc0 Func
	var_228_cvector = var_226_cvector - var_227_cvector; // 0xdc2 Sub2
	var_229_float = var_228_cvector | var_228_cvector; // 0xdc3 Or2
	var_236_bool = 0; // 0xdc4 PushV
	var_236_bool = 0; // 0xdc5 MovB
	var_237_int = 0; // 0xdc6 PushI
	var_238_bool = var_212_float > var_237_int; // 0xdc7 GT
	if(var_238_bool == 0) goto Label_3533; // 0xdc8 JumpB
	var_239_float = var_212_float * var_212_float; // 0xdc9 Mult
	var_240_bool = var_229_float > var_239_float; // 0xdca GT
	if(var_240_bool == 0) goto Label_3533; // 0xdcb JumpB
	var_236_bool = 1; // 0xdcc MovB
	
Label_3533:
	if(var_236_bool == 0) goto Label_3538; // 0xdcd JumpB
	Stop(); // 0xdce Func
	var_209_bool = 0; // 0xdd0 MovB
	return 16; // 0xdd1 Return
	
Label_3538:
	var_241_float = var_211_float * var_211_float; // 0xdd2 Mult
	var_242_bool = var_229_float > var_241_float; // 0xdd3 GT
	if(var_242_bool == 0) goto Label_3600; // 0xdd4 JumpB
	GetPFPosition(var_226_cvector); // 0xdd5 ObjFunc
	FindPathTo(var_230_object, var_226_cvector); // 0xdd7 Func
	var_243_bool = var_230_object != 0; // 0xdd9 NullNeq
	if(var_243_bool == 0) goto Label_3549; // 0xdda JumpB
	var_225_object = var_230_object; // 0xddb Mov
	var_230_object = 0; // 0xddc SetNull
	
Label_3549:
	var_244_bool = var_225_object != 0; // 0xddd NullNeq
	if(var_244_bool == 0) goto Label_3582; // 0xdde JumpB
	var_245_bool = var_224_bool; // 0xddf Push
	if(var_245_bool == 0) goto Label_3559; // 0xde0 JumpB
	var_224_bool = 0; // 0xde1 MovB
	RotatePath(var_225_object, var_223_bool); // 0xde2 Func
	var_246_bool = var_223_bool == 0; // 0xde4 Not
	if(var_246_bool == 0) goto Label_3559; // 0xde5 JumpB
	goto Label_3606; // 0xde6 Jump
	
Label_3606:
	var_209_bool = !var_0_bool; // 0xe16 Not2
	return 16; // 0xe17 Return
	
Label_3559:
	var_247_int = 0; // 0xde7 PushI
	var_248_float = 0.3; // 0xde8 PushF
	SetTimer(var_247_int, var_248_float); // 0xde9 Func
	var_249_string = ""; // 0xdeb PushV
	func_3653(var_249_string); // 0xdec NEW_2
	var_250_string = ""; // 0xdee PushV
	func_3655(var_250_string); // 0xdef NEW_2
	FollowPath(var_225_object, var_213_bool, var_223_bool, var_249_string, var_250_string); // 0xdf1 Func
	var_251_bool = var_223_bool == 0; // 0xdf3 Not
	if(var_251_bool == 0) goto Label_3580; // 0xdf4 JumpB
	var_252_bool = var_0_bool; // 0xdf5 PushT
	if(var_252_bool == 0) goto Label_3578; // 0xdf6 JumpB
	var_225_object = 0; // 0xdf7 SetNull
	goto Label_3606; // 0xdf8 Jump
	
Label_3578:
	goto Label_3605; // 0xdfa Jump
	
Label_3605:
	goto Label_3510; // 0xe15 Jump
	
Label_3580:
	var_225_object = 0; // 0xdfc SetNull
	goto Label_3598; // 0xdfd Jump
	
Label_3598:
	var_230_object = 0; // 0xe0e SetNull
	goto Label_3604; // 0xe0f Jump
	
Label_3604:
	var_225_object = 0; // 0xe14 SetNull
	
Label_3582:
	var_253_int = 0; // 0xdfe PushI
	KillTimer(var_253_int); // 0xdff Func
	var_254_float = 0.5; // 0xe01 PushF
	Sleep(var_254_float, var_223_bool); // 0xe02 Func
	var_255_bool = var_223_bool == 0; // 0xe04 Not
	if(var_255_bool == 0) goto Label_3594; // 0xe05 JumpB
	var_256_bool = var_0_bool; // 0xe06 PushT
	if(var_256_bool == 0) goto Label_3594; // 0xe07 JumpB
	var_225_object = 0; // 0xe08 SetNull
	goto Label_3606; // 0xe09 Jump
	
Label_3594:
	var_257_int = 0; // 0xe0a PushI
	var_258_float = 0.3; // 0xe0b PushF
	SetTimer(var_257_int, var_258_float); // 0xe0c Func
	
Label_3600:
	var_259_int = 0; // 0xe10 PushI
	KillTimer(var_259_int); // 0xe11 Func
	goto Label_3606; // 0xe13 Jump
}


func_2996(var_0_bool, var_435_float, var_436_int)
{
	var_437_object = Obj(); var_438_float = 0; var_439_float = 0; var_440_object = Obj(); var_441_float = 0; var_442_float = 0; // 0xbb4 PushV
	var_443_float = 0.9; // 0xbb5 PushF
	var_444_float = var_435_float * var_443_float; // 0xbb6 Mult
	GetVictim(var_444_float, var_440_object); // 0xbb7 Func
	ReportAttack(var_0_bool); // 0xbb9 Func
	var_445_bool = var_440_object == var_0_bool; // 0xbbb Eq
	if(var_445_bool == 0) goto Label_3033; // 0xbbc JumpB
	var_446_float = 0; var_447_object = Obj(); var_448_int = 0; // 0xbbd PushV
	var_447_object = var_440_object; // 0xbbe Mov
	var_448_int = var_436_int; // 0xbbf Mov
	func_2726(var_448_int); // 0xbc0 NEW_2
	var_441_float = var_446_float; // 0xbc1 Mov
	var_449_float = 0; var_450_object = Obj(); var_451_float = 0; var_452_int = 0; // 0xbc3 PushV
	var_450_object = var_440_object; // 0xbc4 Mov
	var_451_float = var_441_float; // 0xbc5 Mov
	var_453_int = 0; var_454_object = Obj(); var_455_int = 0; // 0xbc6 PushV
	var_454_object = var_440_object; // 0xbc7 Mov
	var_455_int = var_436_int; // 0xbc8 Mov
	func_2729(var_455_int); // 0xbc9 NEW_2
	var_452_int = var_453_int; // 0xbca Mov
	func_3703(var_449_float, var_450_object, var_451_float, var_452_int); // 0xbcc NEW_2
	var_442_float = var_449_float; // 0xbcd Mov
	var_514_int = 0; // 0xbcf PushV
	func_3379(var_514_int); // 0xbd0 NEW_2
	ReportHit(var_0_bool, var_514_int, var_442_float, var_441_float); // 0xbd2 Func
	var_515_object = Obj(); var_516_float = 0; // 0xbd4 PushV
	var_515_object = var_440_object; // 0xbd5 Mov
	var_516_float = var_442_float; // 0xbd6 Mov
	func_3386(); // 0xbd7 NEW_2
	
Label_3033:
	return 6; // 0xbd9 Return
}


func_1976(var_21_object)
{
	var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_string = ""; var_27_object = Obj(); var_28_bool = 0; var_29_bool = 0; var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_string = ""; var_37_object = Obj(); var_38_bool = 0; var_39_bool = 0; var_40_float = 0; var_41_cvector = CVector(0,0,0); // 0x7b8 PushV
	var_42_bool = var_21_object == 0; // 0x7b9 NullEq
	if(var_42_bool == 0) goto Label_1984; // 0x7ba JumpB
	var_43_string = ""; // 0x7bb PushV
	var_43_string = "fdie"; // 0x7bc MovS
	func_2067(var_43_string); // 0x7bd NEW_2
	goto Label_2066; // 0x7bf Jump
	
Label_2066:
	return 20; // 0x812 Return
	
Label_1984:
	GetPosition(var_32_cvector); // 0x7c0 ObjFunc
	GetPosition(var_33_cvector); // 0x7c2 Func
	GetDirection(var_34_cvector); // 0x7c4 Func
	var_35_cvector = var_33_cvector - var_32_cvector; // 0x7c6 Sub2
	var_75_float = GetByIndex(var_35_cvector, 0); // 0x7c7 PushE
	var_76_float = GetByIndex(var_34_cvector, 0); // 0x7c8 PushE
	var_77_float = var_75_float * var_76_float; // 0x7c9 Mult
	var_78_float = GetByIndex(var_35_cvector, 2); // 0x7ca PushE
	var_79_float = GetByIndex(var_34_cvector, 2); // 0x7cb PushE
	var_80_float = var_78_float * var_79_float; // 0x7cc Mult
	var_81_int = var_77_float + var_80_float; // 0x7cd Add
	var_82_int = 0; // 0x7ce PushI
	var_83_bool = var_81_int >= var_82_int; // 0x7cf GE
	if(var_83_bool == 0) goto Label_2003; // 0x7d0 JumpB
	var_36_string = "fdie"; // 0x7d1 MovS
	goto Label_2004; // 0x7d2 Jump
	
Label_2004:
	RemoveRTEnvelope(); // 0x7d4 Func
	SetDeathState(); // 0x7d6 Func
	Stop(); // 0x7d8 Func
	StopAsync(); // 0x7da Func
	var_37_object = var_21_object; // 0x7dc Mov
	var_84_string = "GetScriptProperty"; // 0x7dd PushS
	var_85_int = 2; // 0x7de PushI
	var_86_bool = IsFuncExist(var_21_object, var_84_string, var_85_int); // 0x7df FuncExist
	if(var_86_bool == 0) goto Label_2028; // 0x7e0 JumpB
	var_87_string = "Owner"; // 0x7e1 PushS
	HasScriptProperty(var_38_bool, var_87_string); // 0x7e2 ObjFunc
	var_88_bool = var_38_bool; // 0x7e4 Push
	if(var_88_bool == 0) goto Label_2028; // 0x7e5 JumpB
	var_89_string = "Owner"; // 0x7e6 PushS
	GetScriptProperty(var_37_object, var_89_string); // 0x7e7 ObjFunc
	var_90_bool = var_37_object == 0; // 0x7e9 NullEq
	if(var_90_bool == 0) goto Label_2028; // 0x7ea JumpB
	var_37_object = var_21_object; // 0x7eb Mov
	
Label_2028:
	var_91_string = "@GetEyesHeight"; // 0x7ec PushS
	var_92_int = 1; // 0x7ed PushI
	var_93_bool = IsFuncExist(var_37_object, var_91_string, var_92_int); // 0x7ee FuncExist
	if(var_93_bool == 0) goto Label_2043; // 0x7ef JumpB
	GetEyesHeight(var_40_float); // 0x7f0 ObjFunc
	var_41_cvector = CVector(0.0, 0.0, 0.0); // 0x7f2 MovV
	var_94_float = GetByIndex(var_41_cvector, 1); // 0x7f3 PushE
	var_94_float = var_40_float; // 0x7f4 Mov
	SetByIndex(var_41_cvector, 1) = var_94_float; // 0x7f5 PopE
	var_95_string = "head"; // 0x7f6 PushS
	LookAsync(var_21_object, var_95_string, var_41_cvector); // 0x7f7 Func
	var_39_bool = 1; // 0x7f9 MovB
	goto Label_2044; // 0x7fa Jump
	
Label_2044:
	var_96_string = ""; // 0x7fc PushV
	var_96_string = var_36_string; // 0x7fd Mov
	func_4180(var_96_string); // 0x7fe NEW_2
	var_97_string = "all"; // 0x800 PushS
	PlayAnimation(var_97_string, var_36_string); // 0x801 Func
	WaitForAnimEnd(); // 0x803 Func
	var_98_bool = var_39_bool; // 0x805 Push
	if(var_98_bool == 0) goto Label_2060; // 0x806 JumpB
	StopAsync(); // 0x807 Func
	var_99_string = "head"; // 0x809 PushS
	UnlookAsync(var_99_string); // 0x80a Func
	
Label_2060:
	var_100_string = "all"; // 0x80c PushS
	LockAnimationEnd(var_100_string, var_36_string); // 0x80d Func
	RemoveEnvelope(); // 0x80f Func
	var_37_object = 0; // 0x811 SetNull
	
Label_2043:
	var_39_bool = 0; // 0x7fb MovB
	
Label_2003:
	var_36_string = "bdie"; // 0x7d3 MovS
}


func_5052(var_85_int, var_86_object)
{
	var_88_int = 0; var_89_object = Obj(); // 0x13bd PushV
	var_89_object = var_86_object; // 0x13be Mov
	func_4959(var_88_int, var_89_object); // 0x13bf NEW_2
	var_85_int = var_88_int; // 0x13c0 Mov
	return 0; // 0x13c2 Return
}


func_4542()
{
	var_225_int = 0; // 0x11be PushV
	func_4475(var_225_int); // 0x11bf NEW_2
	var_229_int = 1; // 0x11c1 PushI
	var_230_bool = var_225_int != var_229_int; // 0x11c2 Neq
	if(var_230_bool == 0) goto Label_4549; // 0x11c3 JumpB
	return 0; // 0x11c4 Return
	
Label_4549:
	var_231_string = ""; // 0x11c5 PushV
	var_231_string = "liver"; // 0x11c6 MovS
	func_4525(var_231_string); // 0x11c7 NEW_2
	var_242_string = ""; // 0x11c9 PushV
	var_242_string = "kidney"; // 0x11ca MovS
	func_4525(var_242_string); // 0x11cb NEW_2
	var_243_string = ""; // 0x11cd PushV
	var_243_string = "heart"; // 0x11ce MovS
	func_4525(var_243_string); // 0x11cf NEW_2
	var_244_string = ""; // 0x11d1 PushV
	var_244_string = "blood"; // 0x11d2 MovS
	func_4525(var_244_string); // 0x11d3 NEW_2
	return 0; // 0x11d5 Return
}


func_5059(var_122_object)
{
	var_123_object = Obj(); // 0x13c4 PushV
	var_123_object = var_122_object; // 0x13c5 Mov
	func_4969(var_123_object); // 0x13c6 NEW_2
	return 0; // 0x13c8 Return
}


func_5065(var_27_bool, var_28_object, var_29_object, var_30_float, var_31_bool)
{
	var_32_bool = 0; var_33_bool = 0; // 0x13c9 PushV
	var_34_bool = 0; var_35_object = Obj(); var_36_bool = 0; // 0x13ca PushV
	var_35_object = var_29_object; // 0x13cb Mov
	var_36_bool = !var_31_bool; // 0x13cc Not2
	func_4977(var_34_bool, var_35_object, var_36_bool); // 0x13cd NEW_2
	var_72_bool = var_34_bool == 0; // 0x13cf Not
	if(var_72_bool == 0) goto Label_5075; // 0x13d0 JumpB
	var_27_bool = 0; // 0x13d1 MovB
	return 2; // 0x13d2 Return
	
Label_5075:
	CanSee(var_33_bool, var_28_object); // 0x13d3 Func
	var_73_bool = 0; // 0x13d5 PushV
	var_73_bool = 1; // 0x13d6 MovB
	var_74_bool = var_33_bool; // 0x13d7 Push
	if(var_74_bool == 0) goto Label_5089; // 0x13d8 JumpB
	var_75_float = 0; var_76_object = Obj(); // 0x13d9 PushV
	var_76_object = var_28_object; // 0x13da Mov
	func_3678(var_76_object); // 0x13db NEW_2
	var_83_float = var_30_float * var_30_float; // 0x13dd Mult
	var_84_bool = var_75_float <= var_83_float; // 0x13de LE
	if(var_84_bool == 0) goto Label_5089; // 0x13df JumpB
	var_73_bool = 0; // 0x13e0 MovB
	
Label_5089:
	if(var_73_bool == 0) goto Label_5092; // 0x13e1 JumpB
	var_27_bool = 1; // 0x13e2 MovB
	return 2; // 0x13e3 Return
	
Label_5092:
	var_27_bool = 0; // 0x13e4 MovB
	return 2; // 0x13e5 Return
}


func_4052()
{
	var_325_bool = 0; var_326_bool = 0; // 0xfd4 PushV
	var_327_bool = 1; // 0xfd5 PushB
	CameraSwitchToNormal(var_327_bool); // 0xfd6 Func
	var_328_bool = 0; // 0xfd8 PushV
	func_5183(var_328_bool); // 0xfd9 NEW_2
	if(var_328_bool == 0) goto Label_4061; // 0xfdb JumpB
	goto Label_4069; // 0xfdc Jump
	
Label_4069:
	return 2; // 0xfe5 Return
	
Label_4061:
	var_329_string = "head"; // 0xfdd PushS
	HasAnimationTrack(var_326_bool, var_329_string); // 0xfde Func
	var_330_bool = var_326_bool; // 0xfe0 Push
	if(var_330_bool == 0) goto Label_4069; // 0xfe1 JumpB
	var_331_string = "head"; // 0xfe2 PushS
	UnlookAsync(var_331_string); // 0xfe3 Func
}


func_4566(var_111_bool)
{
	var_112_int = 0; var_113_bool = 0; var_114_int = 0; var_115_bool = 0; // 0x11d6 PushV
	var_116_bool = var_111_bool; // 0x11d7 Push
	if(var_116_bool == 0) goto Label_4655; // 0x11d8 JumpB
	var_117_int = 0; var_118_int = 0; // 0x11d9 PushV
	var_117_int = 0; // 0x11da MovI
	var_119_int = 100; // 0x11db PushI
	var_120_int = 0; // 0x11dc PushV
	func_4277(var_120_int); // 0x11dd NEW_2
	var_126_int = 100; // 0x11df PushI
	var_127_float = var_120_int * var_126_int; // 0x11e0 Mult
	var_118_int = var_119_int + var_127_float; // 0x11e1 Add2
	func_4494(var_117_int, var_118_int); // 0x11e2 NEW_2
	var_145_int = 8; // 0x11e4 PushI
	irand(var_114_int, var_145_int); // 0x11e5 Func
	var_146_int = 0; // 0x11e7 PushI
	var_147_bool = var_114_int == var_146_int; // 0x11e8 Eq
	if(var_147_bool == 0) goto Label_4595; // 0x11e9 JumpB
	var_148_int = 0; var_149_string = ""; // 0x11ea PushV
	var_149_string = "lemon"; // 0x11eb MovS
	func_4741(var_148_int, var_149_string); // 0x11ec NEW_2
	var_150_int = 0; // 0x11ee PushI
	var_151_int = 1; // 0x11ef PushI
	AddItem(var_115_bool, var_148_int, var_150_int, var_151_int); // 0x11f0 Func
	goto Label_4654; // 0x11f2 Jump
	
Label_4654:
	goto Label_4740; // 0x122e Jump
	
Label_4740:
	return 4; // 0x1284 Return
	
Label_4595:
	var_152_int = 1; // 0x11f3 PushI
	var_153_bool = var_114_int == var_152_int; // 0x11f4 Eq
	if(var_153_bool == 0) goto Label_4607; // 0x11f5 JumpB
	var_154_int = 0; var_155_string = ""; // 0x11f6 PushV
	var_155_string = "rusk"; // 0x11f7 MovS
	func_4741(var_154_int, var_155_string); // 0x11f8 NEW_2
	var_156_int = 0; // 0x11fa PushI
	var_157_int = 1; // 0x11fb PushI
	AddItem(var_115_bool, var_154_int, var_156_int, var_157_int); // 0x11fc Func
	goto Label_4654; // 0x11fe Jump
	
Label_4607:
	var_158_int = 2; // 0x11ff PushI
	var_159_bool = var_114_int == var_158_int; // 0x1200 Eq
	if(var_159_bool == 0) goto Label_4619; // 0x1201 JumpB
	var_160_int = 0; var_161_string = ""; // 0x1202 PushV
	var_161_string = "hook"; // 0x1203 MovS
	func_4741(var_160_int, var_161_string); // 0x1204 NEW_2
	var_162_int = 0; // 0x1206 PushI
	var_163_int = 1; // 0x1207 PushI
	AddItem(var_115_bool, var_160_int, var_162_int, var_163_int); // 0x1208 Func
	goto Label_4654; // 0x120a Jump
	
Label_4619:
	var_164_int = 4; // 0x120b PushI
	var_165_bool = var_114_int == var_164_int; // 0x120c Eq
	if(var_165_bool == 0) goto Label_4631; // 0x120d JumpB
	var_166_int = 0; var_167_string = ""; // 0x120e PushV
	var_167_string = "syringe"; // 0x120f MovS
	func_4741(var_166_int, var_167_string); // 0x1210 NEW_2
	var_168_int = 0; // 0x1212 PushI
	var_169_int = 1; // 0x1213 PushI
	AddItem(var_115_bool, var_166_int, var_168_int, var_169_int); // 0x1214 Func
	goto Label_4654; // 0x1216 Jump
	
Label_4631:
	var_170_int = 5; // 0x1217 PushI
	var_171_bool = var_114_int == var_170_int; // 0x1218 Eq
	if(var_171_bool == 0) goto Label_4643; // 0x1219 JumpB
	var_172_int = 0; var_173_string = ""; // 0x121a PushV
	var_173_string = "watch"; // 0x121b MovS
	func_4741(var_172_int, var_173_string); // 0x121c NEW_2
	var_174_int = 0; // 0x121e PushI
	var_175_int = 1; // 0x121f PushI
	AddItem(var_115_bool, var_172_int, var_174_int, var_175_int); // 0x1220 Func
	goto Label_4654; // 0x1222 Jump
	
Label_4643:
	var_176_int = 6; // 0x1223 PushI
	var_177_bool = var_114_int == var_176_int; // 0x1224 Eq
	if(var_177_bool == 0) goto Label_4654; // 0x1225 JumpB
	var_178_int = 0; var_179_string = ""; // 0x1226 PushV
	var_179_string = "razor"; // 0x1227 MovS
	func_4741(var_178_int, var_179_string); // 0x1228 NEW_2
	var_180_int = 0; // 0x122a PushI
	var_181_int = 1; // 0x122b PushI
	AddItem(var_115_bool, var_178_int, var_180_int, var_181_int); // 0x122c Func
	
Label_4655:
	var_182_int = 0; var_183_int = 0; // 0x122f PushV
	var_182_int = 0; // 0x1230 MovI
	var_184_int = 50; // 0x1231 PushI
	var_185_int = 0; // 0x1232 PushV
	func_4277(var_185_int); // 0x1233 NEW_2
	var_186_int = 50; // 0x1235 PushI
	var_187_float = var_185_int * var_186_int; // 0x1236 Mult
	var_183_int = var_184_int + var_187_float; // 0x1237 Add2
	func_4494(var_182_int, var_183_int); // 0x1238 NEW_2
	var_188_int = 7; // 0x123a PushI
	irand(var_114_int, var_188_int); // 0x123b Func
	var_189_int = 0; // 0x123d PushI
	var_190_bool = var_114_int == var_189_int; // 0x123e Eq
	if(var_190_bool == 0) goto Label_4681; // 0x123f JumpB
	var_191_int = 0; var_192_string = ""; // 0x1240 PushV
	var_192_string = "beads"; // 0x1241 MovS
	func_4741(var_191_int, var_192_string); // 0x1242 NEW_2
	var_193_int = 0; // 0x1244 PushI
	var_194_int = 1; // 0x1245 PushI
	AddItem(var_115_bool, var_191_int, var_193_int, var_194_int); // 0x1246 Func
	goto Label_4740; // 0x1248 Jump
	
Label_4681:
	var_195_int = 1; // 0x1249 PushI
	var_196_bool = var_114_int == var_195_int; // 0x124a Eq
	if(var_196_bool == 0) goto Label_4693; // 0x124b JumpB
	var_197_int = 0; var_198_string = ""; // 0x124c PushV
	var_198_string = "bracelet"; // 0x124d MovS
	func_4741(var_197_int, var_198_string); // 0x124e NEW_2
	var_199_int = 0; // 0x1250 PushI
	var_200_int = 1; // 0x1251 PushI
	AddItem(var_115_bool, var_197_int, var_199_int, var_200_int); // 0x1252 Func
	goto Label_4740; // 0x1254 Jump
	
Label_4693:
	var_201_int = 2; // 0x1255 PushI
	var_202_bool = var_114_int == var_201_int; // 0x1256 Eq
	if(var_202_bool == 0) goto Label_4705; // 0x1257 JumpB
	var_203_int = 0; var_204_string = ""; // 0x1258 PushV
	var_204_string = "ear_ring"; // 0x1259 MovS
	func_4741(var_203_int, var_204_string); // 0x125a NEW_2
	var_205_int = 0; // 0x125c PushI
	var_206_int = 1; // 0x125d PushI
	AddItem(var_115_bool, var_203_int, var_205_int, var_206_int); // 0x125e Func
	goto Label_4740; // 0x1260 Jump
	
Label_4705:
	var_207_int = 3; // 0x1261 PushI
	var_208_bool = var_114_int == var_207_int; // 0x1262 Eq
	if(var_208_bool == 0) goto Label_4717; // 0x1263 JumpB
	var_209_int = 0; var_210_string = ""; // 0x1264 PushV
	var_210_string = "gold_ring"; // 0x1265 MovS
	func_4741(var_209_int, var_210_string); // 0x1266 NEW_2
	var_211_int = 0; // 0x1268 PushI
	var_212_int = 1; // 0x1269 PushI
	AddItem(var_115_bool, var_209_int, var_211_int, var_212_int); // 0x126a Func
	goto Label_4740; // 0x126c Jump
	
Label_4717:
	var_213_int = 4; // 0x126d PushI
	var_214_bool = var_114_int == var_213_int; // 0x126e Eq
	if(var_214_bool == 0) goto Label_4729; // 0x126f JumpB
	var_215_int = 0; var_216_string = ""; // 0x1270 PushV
	var_216_string = "silver_ring"; // 0x1271 MovS
	func_4741(var_215_int, var_216_string); // 0x1272 NEW_2
	var_217_int = 0; // 0x1274 PushI
	var_218_int = 1; // 0x1275 PushI
	AddItem(var_115_bool, var_215_int, var_217_int, var_218_int); // 0x1276 Func
	goto Label_4740; // 0x1278 Jump
	
Label_4729:
	var_219_int = 5; // 0x1279 PushI
	var_220_bool = var_114_int == var_219_int; // 0x127a Eq
	if(var_220_bool == 0) goto Label_4740; // 0x127b JumpB
	var_221_int = 0; var_222_string = ""; // 0x127c PushV
	var_222_string = "flower"; // 0x127d MovS
	func_4741(var_221_int, var_222_string); // 0x127e NEW_2
	var_223_int = 0; // 0x1280 PushI
	var_224_int = 1; // 0x1281 PushI
	AddItem(var_115_bool, var_221_int, var_223_int, var_224_int); // 0x1282 Func
}


func_3035(var_0_bool, var_398_bool, var_399_float)
{
	var_400_int = 0; var_401_bool = 0; var_402_int = 0; var_403_string = ""; var_404_int = 0; var_405_bool = 0; var_406_int = 0; var_407_string = ""; // 0xbdb PushV
	func_3374(var_407_string); // 0xbdd NEW_2
	irand(var_404_int, var_407_string); // 0xbdf Func
	var_408_int = 1; // 0xbe1 PushI
	var_404_int = var_404_int + var_408_int; // 0xbe2 Add2
	Face(var_0_bool); // 0xbe3 Func
	var_409_bool = 1; // 0xbe5 PushB
	SetAttackState(var_409_bool); // 0xbe6 Func
	func_4303(); // 0xbe9 NEW_2
	var_414_string = "all"; // 0xbeb PushS
	var_415_string = "attack_begin"; // 0xbec PushS
	var_416_int = var_415_string + var_404_int; // 0xbed Add
	PlayAnimation(var_414_string, var_416_int); // 0xbee Func
	WaitForAnimEnd(); // 0xbf0 Func
	func_3342(var_406_int, var_407_string); // 0xbf3 NEW_2
	var_432_bool = 0; var_433_object = Obj(); // 0xbf5 PushV
	var_433_object = var_0_bool; // 0xbf6 MovT
	func_3817(var_432_bool, var_433_object); // 0xbf7 NEW_2
	var_434_bool = var_432_bool == 0; // 0xbf9 Not
	if(var_434_bool == 0) goto Label_3071; // 0xbfa JumpB
	StopAsync(); // 0xbfb Func
	var_398_bool = 0; // 0xbfd MovB
	return 8; // 0xbfe Return
	
Label_3071:
	var_435_float = 0; var_436_int = 0; // 0xbff PushV
	var_435_float = var_399_float; // 0xc00 Mov
	var_436_int = var_404_int; // 0xc01 Mov
	func_2996(var_407_string, var_435_float, var_436_int); // 0xc02 NEW_2
	var_517_string = "all"; // 0xc04 PushS
	var_518_string = "attack_middle"; // 0xc05 PushS
	var_519_int = var_518_string + var_404_int; // 0xc06 Add
	HasAnimation(var_405_bool, var_517_string, var_519_int); // 0xc07 Func
	var_520_bool = var_405_bool; // 0xc09 Push
	if(var_520_bool == 0) goto Label_3152; // 0xc0a JumpB
	func_4303(); // 0xc0c NEW_2
	var_521_string = "all"; // 0xc0e PushS
	var_522_string = "attack_middle"; // 0xc0f PushS
	var_523_int = var_522_string + var_404_int; // 0xc10 Add
	PlayAnimation(var_521_string, var_523_int); // 0xc11 Func
	WaitForAnimEnd(); // 0xc13 Func
	func_3374(var_407_string); // 0xc16 NEW_2
	var_524_bool = 0; var_525_object = Obj(); // 0xc18 PushV
	var_525_object = var_0_bool; // 0xc19 MovT
	func_3817(var_524_bool, var_525_object); // 0xc1a NEW_2
	var_526_bool = var_524_bool == 0; // 0xc1c Not
	if(var_526_bool == 0) goto Label_3106; // 0xc1d JumpB
	StopAsync(); // 0xc1e Func
	var_398_bool = 0; // 0xc20 MovB
	return 8; // 0xc21 Return
	
Label_3106:
	var_527_float = 0; var_528_int = 0; // 0xc22 PushV
	var_527_float = var_399_float; // 0xc23 Mov
	var_528_int = var_404_int; // 0xc24 Mov
	func_2996(var_407_string, var_527_float, var_528_int); // 0xc25 NEW_2
	var_406_int = 1; // 0xc27 MovI
	
Label_3112:
	var_529_string = "attack_middle"; // 0xc28 PushS
	var_530_int = var_529_string + var_404_int; // 0xc29 Add
	var_531_string = "_"; // 0xc2a PushS
	var_532_int = var_530_int + var_531_string; // 0xc2b Add
	var_407_string = var_532_int + var_406_int; // 0xc2c Add2
	var_533_string = "all"; // 0xc2d PushS
	HasAnimation(var_405_bool, var_533_string, var_407_string); // 0xc2e Func
	var_534_bool = var_405_bool == 0; // 0xc30 Not
	if(var_534_bool == 0) goto Label_3123; // 0xc31 JumpB
	goto Label_3152; // 0xc32 Jump
	
Label_3152:
	var_535_bool = 0; // 0xc50 PushB
	SetAttackState(var_535_bool); // 0xc51 Func
	var_536_string = "all"; // 0xc53 PushS
	var_537_string = "attack_end"; // 0xc54 PushS
	var_538_int = var_537_string + var_404_int; // 0xc55 Add
	PlayAnimation(var_536_string, var_538_int); // 0xc56 Func
	var_539_bool = 0; // 0xc58 PushV
	func_3388(var_539_bool); // 0xc59 NEW_2
	if(var_539_bool == 0) goto Label_3170; // 0xc5b JumpB
	var_540_bool = 0; var_541_float = 0; // 0xc5c PushV
	var_541_float = 0.75; // 0xc5d MovF
	func_3172(var_540_bool, var_541_float); // 0xc5e NEW_2
	StopAsync(); // 0xc60 Func
	
Label_3170:
	var_398_bool = 1; // 0xc62 MovB
	return 8; // 0xc63 Return
	
Label_3123:
	func_4303(); // 0xc34 NEW_2
	var_549_string = "all"; // 0xc36 PushS
	PlayAnimation(var_549_string, var_407_string); // 0xc37 Func
	WaitForAnimEnd(); // 0xc39 Func
	func_3374(var_407_string); // 0xc3c NEW_2
	var_550_bool = 0; var_551_object = Obj(); // 0xc3e PushV
	var_551_object = var_0_bool; // 0xc3f MovT
	func_3817(var_550_bool, var_551_object); // 0xc40 NEW_2
	var_552_bool = var_550_bool == 0; // 0xc42 Not
	if(var_552_bool == 0) goto Label_3144; // 0xc43 JumpB
	StopAsync(); // 0xc44 Func
	var_398_bool = 0; // 0xc46 MovB
	return 8; // 0xc47 Return
	
Label_3144:
	var_553_float = 0; var_554_int = 0; // 0xc48 PushV
	var_553_float = var_399_float; // 0xc49 Mov
	var_554_int = var_404_int; // 0xc4a Mov
	func_2996(var_407_string, var_553_float, var_554_int); // 0xc4b NEW_2
	var_555_int = 1; // 0xc4d PushI
	var_406_int = var_406_int + var_555_int; // 0xc4e Add2
	goto Label_3112; // 0xc4f Jump
}


func_5094(var_21_int)
{
	var_21_int = 0; // 0x13e7 MovI
	return 0; // 0x13e8 Return
}


func_4070(var_333_bool, var_334_object)
{
	var_335_bool = 0; var_336_object = Obj(); var_337_float = 0; // 0xfe7 PushV
	var_336_object = var_334_object; // 0xfe8 Mov
	var_337_float = 70; // 0xfe9 MovI
	func_4078(var_336_object, var_337_float); // 0xfea NEW_2
	var_333_bool = var_335_bool; // 0xfeb Mov
	return 0; // 0xfed Return
}


func_5097()
{
	return 0; // 0x13ea Return
}


func_5099(var_48_int, var_49_string, var_50_object)
{
	var_51_string = "killme"; // 0x13ec PushS
	var_52_bool = var_49_string == var_51_string; // 0x13ed Eq
	if(var_52_bool == 0) goto Label_5109; // 0x13ee JumpB
	var_53_int = 0; var_54_object = Obj(); // 0x13ef PushV
	var_54_object = var_50_object; // 0x13f0 Mov
	func_5121(var_53_int, var_54_object); // 0x13f1 NEW_2
	var_48_int = var_53_int; // 0x13f2 Mov
	return 0; // 0x13f4 Return
	
Label_5109:
	var_48_int = 0; // 0x13f5 MovI
	return 0; // 0x13f6 Return
}


func_4078(var_335_bool, var_337_float)
{
	var_338_float = 0; var_339_cvector = CVector(0,0,0); var_340_cvector = CVector(0,0,0); var_341_cvector = CVector(0,0,0); var_342_cvector = CVector(0,0,0); var_343_cvector = CVector(0,0,0); var_344_cvector = CVector(0,0,0); var_345_bool = 0; var_346_float = 0; var_347_cvector = CVector(0,0,0); var_348_cvector = CVector(0,0,0); var_349_cvector = CVector(0,0,0); var_350_cvector = CVector(0,0,0); var_351_cvector = CVector(0,0,0); var_352_cvector = CVector(0,0,0); var_353_bool = 0; // 0xfee PushV
	GetPosition(var_347_cvector); // 0xfef ObjFunc
	GetEyesHeight(var_346_float); // 0xff1 ObjFunc
	var_354_float = GetByIndex(var_347_cvector, 1); // 0xff3 PushE
	var_354_float = var_354_float + var_346_float; // 0xff4 Add2
	SetByIndex(var_347_cvector, 1) = var_354_float; // 0xff5 PopE
	GetPosition(var_348_cvector); // 0xff6 Func
	GetEyesHeight(var_346_float); // 0xff8 Func
	var_355_float = GetByIndex(var_348_cvector, 1); // 0xffa PushE
	var_355_float = var_355_float + var_346_float; // 0xffb Add2
	SetByIndex(var_348_cvector, 1) = var_355_float; // 0xffc PopE
	var_349_cvector = var_347_cvector - var_348_cvector; // 0xffd Sub2
	var_356_float = GetByIndex(var_349_cvector, 1); // 0xffe PushE
	var_356_float = 0; // 0xfff MovI
	SetByIndex(var_349_cvector, 1) = var_356_float; // 0x1000 PopE
	var_357_int = var_349_cvector | var_349_cvector; // 0x1001 Or
	var_358_float = sqrt(var_357_int); // 0x1002 Sqrt
	var_349_cvector = var_349_cvector / var_349_cvector; // 0x1003 Div2
	var_350_cvector = -var_349_cvector; // 0x1004 Neg2
	var_359_float = var_349_cvector * var_337_float; // 0x1005 Mult
	var_360_cvector = CVector(0.0, 10.0, 0.0); // 0x1006 PushVec
	var_351_cvector = var_359_float - var_360_cvector; // 0x1007 Sub2
	var_352_cvector = var_348_cvector + var_351_cvector; // 0x1008 Add2
	IsOverrideActive(var_353_bool); // 0x1009 Func
	var_361_bool = var_353_bool; // 0x100b Push
	if(var_361_bool == 0) goto Label_4111; // 0x100c JumpB
	var_335_bool = 0; // 0x100d MovB
	return 16; // 0x100e Return
	
Label_4111:
	StopWorld(); // 0x100f Func
	var_362_bool = 1; // 0x1011 PushB
	CameraTransit(var_352_cvector, var_350_cvector, var_362_bool); // 0x1012 Func
	var_363_float = GetByIndex(var_351_cvector, 0); // 0x1014 PushE
	var_364_float = GetByIndex(var_351_cvector, 2); // 0x1015 PushE
	Rotate(var_363_float, var_364_float); // 0x1016 Func
	CameraWaitForPlayFinish(); // 0x1018 Func
	ResumeWorld(); // 0x101a Func
	var_335_bool = 1; // 0x101c MovB
	return 16; // 0x101d Return
}


func_5111(var_96_string, var_97_object)
{
	var_98_string = "killme"; // 0x13f8 PushS
	var_99_bool = var_96_string == var_98_string; // 0x13f9 Eq
	if(var_99_bool == 0) goto Label_5120; // 0x13fa JumpB
	var_100_object = Obj(); // 0x13fb PushV
	var_100_object = var_97_object; // 0x13fc Mov
	func_5139(var_100_object); // 0x13fd NEW_2
	return 0; // 0x13ff Return
	
Label_5120:
	return 0; // 0x1400 Return
}


