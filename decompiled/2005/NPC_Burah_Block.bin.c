task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_cvector)
{
	var_28_int = 1; // 0xa2 PushI
	if(var_28_int == 0) goto Label_248; // 0xa3 JumpB
	func_3127(); // 0xa5 NEW_2
	var_30_int = 32194; // 0xa7 PushI
	var_31_bool = var_26_bool == var_30_int; // 0xa8 Eq
	if(var_31_bool == 0) goto Label_190; // 0xa9 JumpB
	var_32_string = ""; // 0xaa PushV
	var_32_string = "Neutral"; // 0xab MovS
	func_139(var_27_cvector, var_32_string); // 0xac NEW_2
	var_49_int = 530875; // 0xae PushI
	SetMessage(var_49_int); // 0xaf TObjFunc
	ClearReplies(); // 0xb1 TObjFunc
	var_50_int = 530876; // 0xb3 PushI
	var_51_int = 32199; // 0xb4 PushI
	var_52_int = 32195; // 0xb5 PushI
	AddReply(var_50_int, var_51_int, var_52_int); // 0xb6 TObjFunc
	var_53_int = 530877; // 0xb8 PushI
	var_54_int = 32197; // 0xb9 PushI
	var_55_int = 32196; // 0xba PushI
	AddReply(var_53_int, var_54_int, var_55_int); // 0xbb TObjFunc
	return 0; // 0xbd Return
	
Label_190:
	var_56_int = 32197; // 0xbe PushI
	var_57_bool = var_26_bool == var_56_int; // 0xbf Eq
	if(var_57_bool == 0) goto Label_213; // 0xc0 JumpB
	var_58_string = ""; // 0xc1 PushV
	var_58_string = "Neutral"; // 0xc2 MovS
	func_139(var_27_cvector, var_58_string); // 0xc3 NEW_2
	var_59_int = 530878; // 0xc5 PushI
	SetMessage(var_59_int); // 0xc6 TObjFunc
	ClearReplies(); // 0xc8 TObjFunc
	var_60_int = 530879; // 0xca PushI
	var_61_int = 32199; // 0xcb PushI
	var_62_int = 32198; // 0xcc PushI
	AddReply(var_60_int, var_61_int, var_62_int); // 0xcd TObjFunc
	var_63_int = 530881; // 0xcf PushI
	var_64_int = 32199; // 0xd0 PushI
	var_65_int = 32200; // 0xd1 PushI
	AddReply(var_63_int, var_64_int, var_65_int); // 0xd2 TObjFunc
	return 0; // 0xd4 Return
	
Label_213:
	var_66_int = 32199; // 0xd5 PushI
	var_67_bool = var_26_bool == var_66_int; // 0xd6 Eq
	if(var_67_bool == 0) goto Label_236; // 0xd7 JumpB
	var_68_string = ""; // 0xd8 PushV
	var_68_string = "Neutral"; // 0xd9 MovS
	func_139(var_27_cvector, var_68_string); // 0xda NEW_2
	var_69_int = 530880; // 0xdc PushI
	SetMessage(var_69_int); // 0xdd TObjFunc
	ClearReplies(); // 0xdf TObjFunc
	var_70_int = 530882; // 0xe1 PushI
	var_71_int = -1; // 0xe2 PushI
	var_72_int = 32203; // 0xe3 PushI
	AddReply(var_70_int, var_71_int, var_72_int); // 0xe4 TObjFunc
	var_73_int = 530883; // 0xe6 PushI
	var_74_int = -1; // 0xe7 PushI
	var_75_int = 32204; // 0xe8 PushI
	AddReply(var_73_int, var_74_int, var_75_int); // 0xe9 TObjFunc
	return 0; // 0xeb Return
	
Label_236:
	var_3_string = 1; // 0xec TMovB
	var_76_bool = 0; // 0xed PushV
	func_3227(var_76_bool); // 0xee NEW_2
	if(var_76_bool == 0) goto Label_244; // 0xf0 JumpB
	lshStopAnimation(); // 0xf1 Func
	goto Label_246; // 0xf3 Jump
	
Label_246:
	return 0; // 0xf6 Return
	
Label_244:
	StopAnimation(); // 0xf4 Func
	
Label_248:
	return 0; // 0xf8 Return
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_cvector)
{
	var_28_int = 1; // 0x1c3 PushI
	if(var_28_int == 0) goto Label_1137; // 0x1c4 JumpB
	func_3127(); // 0x1c6 NEW_2
	var_30_int = 23500; // 0x1c8 PushI
	var_31_bool = var_27_cvector == var_30_int; // 0x1c9 Eq
	if(var_31_bool == 0) goto Label_469; // 0x1ca JumpB
	var_32_object = Obj(); var_33_object = Obj(); // 0x1cb PushV
	var_32_object = var_1_object; // 0x1cc MovT
	var_33_object = var_0_object; // 0x1cd MovT
	func_3332(); // 0x1ce NEW_2
	var_50_object = Obj(); var_51_object = Obj(); // 0x1d0 PushV
	var_50_object = var_1_object; // 0x1d1 MovT
	var_51_object = var_0_object; // 0x1d2 MovT
	func_3229(); // 0x1d3 NEW_2
	
Label_469:
	var_76_int = 23501; // 0x1d5 PushI
	var_77_bool = var_27_cvector == var_76_int; // 0x1d6 Eq
	if(var_77_bool == 0) goto Label_482; // 0x1d7 JumpB
	var_78_object = Obj(); var_79_object = Obj(); // 0x1d8 PushV
	var_78_object = var_1_object; // 0x1d9 MovT
	var_79_object = var_0_object; // 0x1da MovT
	func_3332(); // 0x1db NEW_2
	var_80_object = Obj(); var_81_object = Obj(); // 0x1dd PushV
	var_80_object = var_1_object; // 0x1de MovT
	var_81_object = var_0_object; // 0x1df MovT
	func_3229(); // 0x1e0 NEW_2
	
Label_482:
	var_82_int = 23495; // 0x1e2 PushI
	var_83_bool = var_27_cvector == var_82_int; // 0x1e3 Eq
	if(var_83_bool == 0) goto Label_495; // 0x1e4 JumpB
	var_84_object = Obj(); var_85_object = Obj(); // 0x1e5 PushV
	var_84_object = var_1_object; // 0x1e6 MovT
	var_85_object = var_0_object; // 0x1e7 MovT
	func_3332(); // 0x1e8 NEW_2
	var_86_object = Obj(); var_87_object = Obj(); // 0x1ea PushV
	var_86_object = var_1_object; // 0x1eb MovT
	var_87_object = var_0_object; // 0x1ec MovT
	func_3229(); // 0x1ed NEW_2
	
Label_495:
	var_88_int = 23496; // 0x1ef PushI
	var_89_bool = var_27_cvector == var_88_int; // 0x1f0 Eq
	if(var_89_bool == 0) goto Label_508; // 0x1f1 JumpB
	var_90_object = Obj(); var_91_object = Obj(); // 0x1f2 PushV
	var_90_object = var_1_object; // 0x1f3 MovT
	var_91_object = var_0_object; // 0x1f4 MovT
	func_3332(); // 0x1f5 NEW_2
	var_92_object = Obj(); var_93_object = Obj(); // 0x1f7 PushV
	var_92_object = var_1_object; // 0x1f8 MovT
	var_93_object = var_0_object; // 0x1f9 MovT
	func_3229(); // 0x1fa NEW_2
	
Label_508:
	var_94_int = 23510; // 0x1fc PushI
	var_95_bool = var_27_cvector == var_94_int; // 0x1fd Eq
	if(var_95_bool == 0) goto Label_516; // 0x1fe JumpB
	var_96_object = Obj(); var_97_object = Obj(); // 0x1ff PushV
	var_96_object = var_1_object; // 0x200 MovT
	var_97_object = var_0_object; // 0x201 MovT
	func_3282(); // 0x202 NEW_2
	
Label_516:
	var_100_int = 22695; // 0x204 PushI
	var_101_bool = var_26_bool == var_100_int; // 0x205 Eq
	if(var_101_bool == 0) goto Label_579; // 0x206 JumpB
	var_102_bool = 0; var_103_object = Obj(); // 0x207 PushV
	var_103_object = var_1_object; // 0x208 MovT
	func_3348(var_103_object); // 0x209 NEW_2
	if(var_102_bool == 0) goto Label_554; // 0x20b JumpB
	var_110_object = Obj(); var_111_object = Obj(); // 0x20c PushV
	var_110_object = var_1_object; // 0x20d MovT
	var_111_object = var_0_object; // 0x20e MovT
	func_3245(); // 0x20f NEW_2
	var_114_object = Obj(); var_115_object = Obj(); // 0x211 PushV
	var_114_object = var_1_object; // 0x212 MovT
	var_115_object = var_0_object; // 0x213 MovT
	func_3326(); // 0x214 NEW_2
	var_118_string = ""; // 0x216 PushV
	var_118_string = "Neutral"; // 0x217 MovS
	func_428(var_27_cvector, var_118_string); // 0x218 NEW_2
	var_135_int = 521534; // 0x21a PushI
	SetMessage(var_135_int); // 0x21b TObjFunc
	ClearReplies(); // 0x21d TObjFunc
	var_136_int = 522289; // 0x21f PushI
	var_137_int = 23470; // 0x220 PushI
	var_138_int = 23444; // 0x221 PushI
	AddReply(var_136_int, var_137_int, var_138_int); // 0x222 TObjFunc
	var_139_int = 522291; // 0x224 PushI
	var_140_int = 23449; // 0x225 PushI
	var_141_int = 23446; // 0x226 PushI
	AddReply(var_139_int, var_140_int, var_141_int); // 0x227 TObjFunc
	return 0; // 0x229 Return
	
Label_554:
	var_142_string = ""; // 0x22a PushV
	var_142_string = "Neutral"; // 0x22b MovS
	func_428(var_27_cvector, var_142_string); // 0x22c NEW_2
	var_143_int = 521594; // 0x22e PushI
	SetMessage(var_143_int); // 0x22f TObjFunc
	ClearReplies(); // 0x231 TObjFunc
	var_144_bool = 0; var_145_object = Obj(); // 0x233 PushV
	var_145_object = var_1_object; // 0x234 MovT
	func_3430(var_145_object); // 0x235 NEW_2
	if(var_144_bool == 0) goto Label_573; // 0x237 JumpB
	var_150_int = 522347; // 0x238 PushI
	var_151_int = 23514; // 0x239 PushI
	var_152_int = 23510; // 0x23a PushI
	AddReply(var_150_int, var_151_int, var_152_int); // 0x23b TObjFunc
	
Label_573:
	var_153_int = 522350; // 0x23d PushI
	var_154_int = -1; // 0x23e PushI
	var_155_int = 23513; // 0x23f PushI
	AddReply(var_153_int, var_154_int, var_155_int); // 0x240 TObjFunc
	return 0; // 0x242 Return
	
Label_579:
	var_156_int = 23511; // 0x243 PushI
	var_157_bool = var_26_bool == var_156_int; // 0x244 Eq
	if(var_157_bool == 0) goto Label_582; // 0x245 JumpB
	
Label_582:
	var_158_int = 23514; // 0x246 PushI
	var_159_bool = var_26_bool == var_158_int; // 0x247 Eq
	if(var_159_bool == 0) goto Label_600; // 0x248 JumpB
	var_160_string = ""; // 0x249 PushV
	var_160_string = "Neutral"; // 0x24a MovS
	func_428(var_27_cvector, var_160_string); // 0x24b NEW_2
	var_161_int = 522351; // 0x24d PushI
	SetMessage(var_161_int); // 0x24e TObjFunc
	ClearReplies(); // 0x250 TObjFunc
	var_162_int = 522352; // 0x252 PushI
	var_163_int = 23516; // 0x253 PushI
	var_164_int = 23515; // 0x254 PushI
	AddReply(var_162_int, var_163_int, var_164_int); // 0x255 TObjFunc
	return 0; // 0x257 Return
	
Label_600:
	var_165_int = 23516; // 0x258 PushI
	var_166_bool = var_26_bool == var_165_int; // 0x259 Eq
	if(var_166_bool == 0) goto Label_618; // 0x25a JumpB
	var_167_string = ""; // 0x25b PushV
	var_167_string = "Neutral"; // 0x25c MovS
	func_428(var_27_cvector, var_167_string); // 0x25d NEW_2
	var_168_int = 522353; // 0x25f PushI
	SetMessage(var_168_int); // 0x260 TObjFunc
	ClearReplies(); // 0x262 TObjFunc
	var_169_int = 522354; // 0x264 PushI
	var_170_int = 23518; // 0x265 PushI
	var_171_int = 23517; // 0x266 PushI
	AddReply(var_169_int, var_170_int, var_171_int); // 0x267 TObjFunc
	return 0; // 0x269 Return
	
Label_618:
	var_172_int = 23518; // 0x26a PushI
	var_173_bool = var_26_bool == var_172_int; // 0x26b Eq
	if(var_173_bool == 0) goto Label_636; // 0x26c JumpB
	var_174_string = ""; // 0x26d PushV
	var_174_string = "Neutral"; // 0x26e MovS
	func_428(var_27_cvector, var_174_string); // 0x26f NEW_2
	var_175_int = 522355; // 0x271 PushI
	SetMessage(var_175_int); // 0x272 TObjFunc
	ClearReplies(); // 0x274 TObjFunc
	var_176_int = 522356; // 0x276 PushI
	var_177_int = 23520; // 0x277 PushI
	var_178_int = 23519; // 0x278 PushI
	AddReply(var_176_int, var_177_int, var_178_int); // 0x279 TObjFunc
	return 0; // 0x27b Return
	
Label_636:
	var_179_int = 23520; // 0x27c PushI
	var_180_bool = var_26_bool == var_179_int; // 0x27d Eq
	if(var_180_bool == 0) goto Label_659; // 0x27e JumpB
	var_181_string = ""; // 0x27f PushV
	var_181_string = "Neutral"; // 0x280 MovS
	func_428(var_27_cvector, var_181_string); // 0x281 NEW_2
	var_182_int = 522357; // 0x283 PushI
	SetMessage(var_182_int); // 0x284 TObjFunc
	ClearReplies(); // 0x286 TObjFunc
	var_183_int = 522358; // 0x288 PushI
	var_184_int = 23522; // 0x289 PushI
	var_185_int = 23521; // 0x28a PushI
	AddReply(var_183_int, var_184_int, var_185_int); // 0x28b TObjFunc
	var_186_int = 522360; // 0x28d PushI
	var_187_int = -1; // 0x28e PushI
	var_188_int = 23523; // 0x28f PushI
	AddReply(var_186_int, var_187_int, var_188_int); // 0x290 TObjFunc
	return 0; // 0x292 Return
	
Label_659:
	var_189_int = 23522; // 0x293 PushI
	var_190_bool = var_26_bool == var_189_int; // 0x294 Eq
	if(var_190_bool == 0) goto Label_677; // 0x295 JumpB
	var_191_string = ""; // 0x296 PushV
	var_191_string = "Neutral"; // 0x297 MovS
	func_428(var_27_cvector, var_191_string); // 0x298 NEW_2
	var_192_int = 522359; // 0x29a PushI
	SetMessage(var_192_int); // 0x29b TObjFunc
	ClearReplies(); // 0x29d TObjFunc
	var_193_int = 522361; // 0x29f PushI
	var_194_int = -1; // 0x2a0 PushI
	var_195_int = 23524; // 0x2a1 PushI
	AddReply(var_193_int, var_194_int, var_195_int); // 0x2a2 TObjFunc
	return 0; // 0x2a4 Return
	
Label_677:
	var_196_int = 23449; // 0x2a5 PushI
	var_197_bool = var_26_bool == var_196_int; // 0x2a6 Eq
	if(var_197_bool == 0) goto Label_700; // 0x2a7 JumpB
	var_198_string = ""; // 0x2a8 PushV
	var_198_string = "Untrust"; // 0x2a9 MovS
	func_428(var_27_cvector, var_198_string); // 0x2aa NEW_2
	var_199_int = 522294; // 0x2ac PushI
	SetMessage(var_199_int); // 0x2ad TObjFunc
	ClearReplies(); // 0x2af TObjFunc
	var_200_int = 522295; // 0x2b1 PushI
	var_201_int = 23453; // 0x2b2 PushI
	var_202_int = 23450; // 0x2b3 PushI
	AddReply(var_200_int, var_201_int, var_202_int); // 0x2b4 TObjFunc
	var_203_int = 522297; // 0x2b6 PushI
	var_204_int = 23447; // 0x2b7 PushI
	var_205_int = 23452; // 0x2b8 PushI
	AddReply(var_203_int, var_204_int, var_205_int); // 0x2b9 TObjFunc
	return 0; // 0x2bb Return
	
Label_700:
	var_206_int = 23447; // 0x2bc PushI
	var_207_bool = var_26_bool == var_206_int; // 0x2bd Eq
	if(var_207_bool == 0) goto Label_723; // 0x2be JumpB
	var_208_string = ""; // 0x2bf PushV
	var_208_string = "Neutral"; // 0x2c0 MovS
	func_428(var_27_cvector, var_208_string); // 0x2c1 NEW_2
	var_209_int = 522292; // 0x2c3 PushI
	SetMessage(var_209_int); // 0x2c4 TObjFunc
	ClearReplies(); // 0x2c6 TObjFunc
	var_210_int = 522296; // 0x2c8 PushI
	var_211_int = -1; // 0x2c9 PushI
	var_212_int = 23451; // 0x2ca PushI
	AddReply(var_210_int, var_211_int, var_212_int); // 0x2cb TObjFunc
	var_213_int = 522293; // 0x2cd PushI
	var_214_int = -1; // 0x2ce PushI
	var_215_int = 23448; // 0x2cf PushI
	AddReply(var_213_int, var_214_int, var_215_int); // 0x2d0 TObjFunc
	return 0; // 0x2d2 Return
	
Label_723:
	var_216_int = 23453; // 0x2d3 PushI
	var_217_bool = var_26_bool == var_216_int; // 0x2d4 Eq
	if(var_217_bool == 0) goto Label_746; // 0x2d5 JumpB
	var_218_string = ""; // 0x2d6 PushV
	var_218_string = "Neutral"; // 0x2d7 MovS
	func_428(var_27_cvector, var_218_string); // 0x2d8 NEW_2
	var_219_int = 522298; // 0x2da PushI
	SetMessage(var_219_int); // 0x2db TObjFunc
	ClearReplies(); // 0x2dd TObjFunc
	var_220_int = 522299; // 0x2df PushI
	var_221_int = 23457; // 0x2e0 PushI
	var_222_int = 23454; // 0x2e1 PushI
	AddReply(var_220_int, var_221_int, var_222_int); // 0x2e2 TObjFunc
	var_223_int = 522300; // 0x2e4 PushI
	var_224_int = 23447; // 0x2e5 PushI
	var_225_int = 23455; // 0x2e6 PushI
	AddReply(var_223_int, var_224_int, var_225_int); // 0x2e7 TObjFunc
	return 0; // 0x2e9 Return
	
Label_746:
	var_226_int = 23457; // 0x2ea PushI
	var_227_bool = var_26_bool == var_226_int; // 0x2eb Eq
	if(var_227_bool == 0) goto Label_769; // 0x2ec JumpB
	var_228_string = ""; // 0x2ed PushV
	var_228_string = "Neutral"; // 0x2ee MovS
	func_428(var_27_cvector, var_228_string); // 0x2ef NEW_2
	var_229_int = 522301; // 0x2f1 PushI
	SetMessage(var_229_int); // 0x2f2 TObjFunc
	ClearReplies(); // 0x2f4 TObjFunc
	var_230_int = 522302; // 0x2f6 PushI
	var_231_int = 23464; // 0x2f7 PushI
	var_232_int = 23458; // 0x2f8 PushI
	AddReply(var_230_int, var_231_int, var_232_int); // 0x2f9 TObjFunc
	var_233_int = 522303; // 0x2fb PushI
	var_234_int = 23460; // 0x2fc PushI
	var_235_int = 23459; // 0x2fd PushI
	AddReply(var_233_int, var_234_int, var_235_int); // 0x2fe TObjFunc
	return 0; // 0x300 Return
	
Label_769:
	var_236_int = 23460; // 0x301 PushI
	var_237_bool = var_26_bool == var_236_int; // 0x302 Eq
	if(var_237_bool == 0) goto Label_792; // 0x303 JumpB
	var_238_string = ""; // 0x304 PushV
	var_238_string = "Neutral"; // 0x305 MovS
	func_428(var_27_cvector, var_238_string); // 0x306 NEW_2
	var_239_int = 522304; // 0x308 PushI
	SetMessage(var_239_int); // 0x309 TObjFunc
	ClearReplies(); // 0x30b TObjFunc
	var_240_int = 522305; // 0x30d PushI
	var_241_int = -1; // 0x30e PushI
	var_242_int = 23461; // 0x30f PushI
	AddReply(var_240_int, var_241_int, var_242_int); // 0x310 TObjFunc
	var_243_int = 522306; // 0x312 PushI
	var_244_int = 23447; // 0x313 PushI
	var_245_int = 23462; // 0x314 PushI
	AddReply(var_243_int, var_244_int, var_245_int); // 0x315 TObjFunc
	return 0; // 0x317 Return
	
Label_792:
	var_246_int = 23464; // 0x318 PushI
	var_247_bool = var_26_bool == var_246_int; // 0x319 Eq
	if(var_247_bool == 0) goto Label_815; // 0x31a JumpB
	var_248_string = ""; // 0x31b PushV
	var_248_string = "Neutral"; // 0x31c MovS
	func_428(var_27_cvector, var_248_string); // 0x31d NEW_2
	var_249_int = 522307; // 0x31f PushI
	SetMessage(var_249_int); // 0x320 TObjFunc
	ClearReplies(); // 0x322 TObjFunc
	var_250_int = 522308; // 0x324 PushI
	var_251_int = 22697; // 0x325 PushI
	var_252_int = 23465; // 0x326 PushI
	AddReply(var_250_int, var_251_int, var_252_int); // 0x327 TObjFunc
	var_253_int = 522309; // 0x329 PushI
	var_254_int = 23467; // 0x32a PushI
	var_255_int = 23466; // 0x32b PushI
	AddReply(var_253_int, var_254_int, var_255_int); // 0x32c TObjFunc
	return 0; // 0x32e Return
	
Label_815:
	var_256_int = 23467; // 0x32f PushI
	var_257_bool = var_26_bool == var_256_int; // 0x330 Eq
	if(var_257_bool == 0) goto Label_833; // 0x331 JumpB
	var_258_string = ""; // 0x332 PushV
	var_258_string = "Untrust"; // 0x333 MovS
	func_428(var_27_cvector, var_258_string); // 0x334 NEW_2
	var_259_int = 522310; // 0x336 PushI
	SetMessage(var_259_int); // 0x337 TObjFunc
	ClearReplies(); // 0x339 TObjFunc
	var_260_int = 522311; // 0x33b PushI
	var_261_int = 23447; // 0x33c PushI
	var_262_int = 23468; // 0x33d PushI
	AddReply(var_260_int, var_261_int, var_262_int); // 0x33e TObjFunc
	return 0; // 0x340 Return
	
Label_833:
	var_263_int = 23470; // 0x341 PushI
	var_264_bool = var_26_bool == var_263_int; // 0x342 Eq
	if(var_264_bool == 0) goto Label_851; // 0x343 JumpB
	var_265_string = ""; // 0x344 PushV
	var_265_string = "Neutral"; // 0x345 MovS
	func_428(var_27_cvector, var_265_string); // 0x346 NEW_2
	var_266_int = 522312; // 0x348 PushI
	SetMessage(var_266_int); // 0x349 TObjFunc
	ClearReplies(); // 0x34b TObjFunc
	var_267_int = 522313; // 0x34d PushI
	var_268_int = 23472; // 0x34e PushI
	var_269_int = 23471; // 0x34f PushI
	AddReply(var_267_int, var_268_int, var_269_int); // 0x350 TObjFunc
	return 0; // 0x352 Return
	
Label_851:
	var_270_int = 23472; // 0x353 PushI
	var_271_bool = var_26_bool == var_270_int; // 0x354 Eq
	if(var_271_bool == 0) goto Label_874; // 0x355 JumpB
	var_272_string = ""; // 0x356 PushV
	var_272_string = "Neutral"; // 0x357 MovS
	func_428(var_27_cvector, var_272_string); // 0x358 NEW_2
	var_273_int = 522314; // 0x35a PushI
	SetMessage(var_273_int); // 0x35b TObjFunc
	ClearReplies(); // 0x35d TObjFunc
	var_274_int = 522316; // 0x35f PushI
	var_275_int = 23445; // 0x360 PushI
	var_276_int = 23474; // 0x361 PushI
	AddReply(var_274_int, var_275_int, var_276_int); // 0x362 TObjFunc
	var_277_int = 522315; // 0x364 PushI
	var_278_int = 23502; // 0x365 PushI
	var_279_int = 23473; // 0x366 PushI
	AddReply(var_277_int, var_278_int, var_279_int); // 0x367 TObjFunc
	return 0; // 0x369 Return
	
Label_874:
	var_280_int = 23502; // 0x36a PushI
	var_281_bool = var_26_bool == var_280_int; // 0x36b Eq
	if(var_281_bool == 0) goto Label_897; // 0x36c JumpB
	var_282_string = ""; // 0x36d PushV
	var_282_string = "Neutral"; // 0x36e MovS
	func_428(var_27_cvector, var_282_string); // 0x36f NEW_2
	var_283_int = 522340; // 0x371 PushI
	SetMessage(var_283_int); // 0x372 TObjFunc
	ClearReplies(); // 0x374 TObjFunc
	var_284_int = 522342; // 0x376 PushI
	var_285_int = 23445; // 0x377 PushI
	var_286_int = 23504; // 0x378 PushI
	AddReply(var_284_int, var_285_int, var_286_int); // 0x379 TObjFunc
	var_287_int = 522341; // 0x37b PushI
	var_288_int = 23507; // 0x37c PushI
	var_289_int = 23503; // 0x37d PushI
	AddReply(var_287_int, var_288_int, var_289_int); // 0x37e TObjFunc
	return 0; // 0x380 Return
	
Label_897:
	var_290_int = 23507; // 0x381 PushI
	var_291_bool = var_26_bool == var_290_int; // 0x382 Eq
	if(var_291_bool == 0) goto Label_915; // 0x383 JumpB
	var_292_string = ""; // 0x384 PushV
	var_292_string = "Neutral"; // 0x385 MovS
	func_428(var_27_cvector, var_292_string); // 0x386 NEW_2
	var_293_int = 522345; // 0x388 PushI
	SetMessage(var_293_int); // 0x389 TObjFunc
	ClearReplies(); // 0x38b TObjFunc
	var_294_int = 522346; // 0x38d PushI
	var_295_int = 23445; // 0x38e PushI
	var_296_int = 23508; // 0x38f PushI
	AddReply(var_294_int, var_295_int, var_296_int); // 0x390 TObjFunc
	return 0; // 0x392 Return
	
Label_915:
	var_297_int = 23445; // 0x393 PushI
	var_298_bool = var_26_bool == var_297_int; // 0x394 Eq
	if(var_298_bool == 0) goto Label_938; // 0x395 JumpB
	var_299_string = ""; // 0x396 PushV
	var_299_string = "Neutral"; // 0x397 MovS
	func_428(var_27_cvector, var_299_string); // 0x398 NEW_2
	var_300_int = 522290; // 0x39a PushI
	SetMessage(var_300_int); // 0x39b TObjFunc
	ClearReplies(); // 0x39d TObjFunc
	var_301_int = 521535; // 0x39f PushI
	var_302_int = 23481; // 0x3a0 PushI
	var_303_int = 22696; // 0x3a1 PushI
	AddReply(var_301_int, var_302_int, var_303_int); // 0x3a2 TObjFunc
	var_304_int = 522319; // 0x3a4 PushI
	var_305_int = 23479; // 0x3a5 PushI
	var_306_int = 23478; // 0x3a6 PushI
	AddReply(var_304_int, var_305_int, var_306_int); // 0x3a7 TObjFunc
	return 0; // 0x3a9 Return
	
Label_938:
	var_307_int = 23479; // 0x3aa PushI
	var_308_bool = var_26_bool == var_307_int; // 0x3ab Eq
	if(var_308_bool == 0) goto Label_956; // 0x3ac JumpB
	var_309_string = ""; // 0x3ad PushV
	var_309_string = "Neutral"; // 0x3ae MovS
	func_428(var_27_cvector, var_309_string); // 0x3af NEW_2
	var_310_int = 522320; // 0x3b1 PushI
	SetMessage(var_310_int); // 0x3b2 TObjFunc
	ClearReplies(); // 0x3b4 TObjFunc
	var_311_int = 522321; // 0x3b6 PushI
	var_312_int = 23483; // 0x3b7 PushI
	var_313_int = 23480; // 0x3b8 PushI
	AddReply(var_311_int, var_312_int, var_313_int); // 0x3b9 TObjFunc
	return 0; // 0x3bb Return
	
Label_956:
	var_314_int = 23483; // 0x3bc PushI
	var_315_bool = var_26_bool == var_314_int; // 0x3bd Eq
	if(var_315_bool == 0) goto Label_974; // 0x3be JumpB
	var_316_string = ""; // 0x3bf PushV
	var_316_string = "Neutral"; // 0x3c0 MovS
	func_428(var_27_cvector, var_316_string); // 0x3c1 NEW_2
	var_317_int = 522324; // 0x3c3 PushI
	SetMessage(var_317_int); // 0x3c4 TObjFunc
	ClearReplies(); // 0x3c6 TObjFunc
	var_318_int = 522325; // 0x3c8 PushI
	var_319_int = 23457; // 0x3c9 PushI
	var_320_int = 23484; // 0x3ca PushI
	AddReply(var_318_int, var_319_int, var_320_int); // 0x3cb TObjFunc
	return 0; // 0x3cd Return
	
Label_974:
	var_321_int = 23481; // 0x3ce PushI
	var_322_bool = var_26_bool == var_321_int; // 0x3cf Eq
	if(var_322_bool == 0) goto Label_997; // 0x3d0 JumpB
	var_323_string = ""; // 0x3d1 PushV
	var_323_string = "Neutral"; // 0x3d2 MovS
	func_428(var_27_cvector, var_323_string); // 0x3d3 NEW_2
	var_324_int = 522322; // 0x3d5 PushI
	SetMessage(var_324_int); // 0x3d6 TObjFunc
	ClearReplies(); // 0x3d8 TObjFunc
	var_325_int = 522323; // 0x3da PushI
	var_326_int = 22697; // 0x3db PushI
	var_327_int = 23482; // 0x3dc PushI
	AddReply(var_325_int, var_326_int, var_327_int); // 0x3dd TObjFunc
	var_328_int = 522328; // 0x3df PushI
	var_329_int = 22697; // 0x3e0 PushI
	var_330_int = 23489; // 0x3e1 PushI
	AddReply(var_328_int, var_329_int, var_330_int); // 0x3e2 TObjFunc
	return 0; // 0x3e4 Return
	
Label_997:
	var_331_int = 22697; // 0x3e5 PushI
	var_332_bool = var_26_bool == var_331_int; // 0x3e6 Eq
	if(var_332_bool == 0) goto Label_1015; // 0x3e7 JumpB
	var_333_string = ""; // 0x3e8 PushV
	var_333_string = "Doubt"; // 0x3e9 MovS
	func_428(var_27_cvector, var_333_string); // 0x3ea NEW_2
	var_334_int = 521536; // 0x3ec PushI
	SetMessage(var_334_int); // 0x3ed TObjFunc
	ClearReplies(); // 0x3ef TObjFunc
	var_335_int = 522326; // 0x3f1 PushI
	var_336_int = 23488; // 0x3f2 PushI
	var_337_int = 23487; // 0x3f3 PushI
	AddReply(var_335_int, var_336_int, var_337_int); // 0x3f4 TObjFunc
	return 0; // 0x3f6 Return
	
Label_1015:
	var_338_int = 23488; // 0x3f7 PushI
	var_339_bool = var_26_bool == var_338_int; // 0x3f8 Eq
	if(var_339_bool == 0) goto Label_1038; // 0x3f9 JumpB
	var_340_string = ""; // 0x3fa PushV
	var_340_string = "Untrust"; // 0x3fb MovS
	func_428(var_27_cvector, var_340_string); // 0x3fc NEW_2
	var_341_int = 522327; // 0x3fe PushI
	SetMessage(var_341_int); // 0x3ff TObjFunc
	ClearReplies(); // 0x401 TObjFunc
	var_342_int = 522329; // 0x403 PushI
	var_343_int = 23497; // 0x404 PushI
	var_344_int = 23491; // 0x405 PushI
	AddReply(var_342_int, var_343_int, var_344_int); // 0x406 TObjFunc
	var_345_int = 521537; // 0x408 PushI
	var_346_int = 23492; // 0x409 PushI
	var_347_int = 22698; // 0x40a PushI
	AddReply(var_345_int, var_346_int, var_347_int); // 0x40b TObjFunc
	return 0; // 0x40d Return
	
Label_1038:
	var_348_int = 23492; // 0x40e PushI
	var_349_bool = var_26_bool == var_348_int; // 0x40f Eq
	if(var_349_bool == 0) goto Label_1056; // 0x410 JumpB
	var_350_string = ""; // 0x411 PushV
	var_350_string = "Neutral"; // 0x412 MovS
	func_428(var_27_cvector, var_350_string); // 0x413 NEW_2
	var_351_int = 522330; // 0x415 PushI
	SetMessage(var_351_int); // 0x416 TObjFunc
	ClearReplies(); // 0x418 TObjFunc
	var_352_int = 522331; // 0x41a PushI
	var_353_int = 23494; // 0x41b PushI
	var_354_int = 23493; // 0x41c PushI
	AddReply(var_352_int, var_353_int, var_354_int); // 0x41d TObjFunc
	return 0; // 0x41f Return
	
Label_1056:
	var_355_int = 23494; // 0x420 PushI
	var_356_bool = var_26_bool == var_355_int; // 0x421 Eq
	if(var_356_bool == 0) goto Label_1079; // 0x422 JumpB
	var_357_string = ""; // 0x423 PushV
	var_357_string = "Neutral"; // 0x424 MovS
	func_428(var_27_cvector, var_357_string); // 0x425 NEW_2
	var_358_int = 522332; // 0x427 PushI
	SetMessage(var_358_int); // 0x428 TObjFunc
	ClearReplies(); // 0x42a TObjFunc
	var_359_int = 522333; // 0x42c PushI
	var_360_int = -1; // 0x42d PushI
	var_361_int = 23495; // 0x42e PushI
	AddReply(var_359_int, var_360_int, var_361_int); // 0x42f TObjFunc
	var_362_int = 522334; // 0x431 PushI
	var_363_int = -1; // 0x432 PushI
	var_364_int = 23496; // 0x433 PushI
	AddReply(var_362_int, var_363_int, var_364_int); // 0x434 TObjFunc
	return 0; // 0x436 Return
	
Label_1079:
	var_365_int = 23497; // 0x437 PushI
	var_366_bool = var_26_bool == var_365_int; // 0x438 Eq
	if(var_366_bool == 0) goto Label_1102; // 0x439 JumpB
	var_367_string = ""; // 0x43a PushV
	var_367_string = "Neutral"; // 0x43b MovS
	func_428(var_27_cvector, var_367_string); // 0x43c NEW_2
	var_368_int = 522335; // 0x43e PushI
	SetMessage(var_368_int); // 0x43f TObjFunc
	ClearReplies(); // 0x441 TObjFunc
	var_369_int = 522336; // 0x443 PushI
	var_370_int = 23499; // 0x444 PushI
	var_371_int = 23498; // 0x445 PushI
	AddReply(var_369_int, var_370_int, var_371_int); // 0x446 TObjFunc
	var_372_int = 530873; // 0x448 PushI
	var_373_int = 23499; // 0x449 PushI
	var_374_int = 32191; // 0x44a PushI
	AddReply(var_372_int, var_373_int, var_374_int); // 0x44b TObjFunc
	return 0; // 0x44d Return
	
Label_1102:
	var_375_int = 23499; // 0x44e PushI
	var_376_bool = var_26_bool == var_375_int; // 0x44f Eq
	if(var_376_bool == 0) goto Label_1125; // 0x450 JumpB
	var_377_string = ""; // 0x451 PushV
	var_377_string = "Neutral"; // 0x452 MovS
	func_428(var_27_cvector, var_377_string); // 0x453 NEW_2
	var_378_int = 522337; // 0x455 PushI
	SetMessage(var_378_int); // 0x456 TObjFunc
	ClearReplies(); // 0x458 TObjFunc
	var_379_int = 522338; // 0x45a PushI
	var_380_int = -1; // 0x45b PushI
	var_381_int = 23500; // 0x45c PushI
	AddReply(var_379_int, var_380_int, var_381_int); // 0x45d TObjFunc
	var_382_int = 522339; // 0x45f PushI
	var_383_int = -1; // 0x460 PushI
	var_384_int = 23501; // 0x461 PushI
	AddReply(var_382_int, var_383_int, var_384_int); // 0x462 TObjFunc
	return 0; // 0x464 Return
	
Label_1125:
	var_3_string = 1; // 0x465 TMovB
	var_385_bool = 0; // 0x466 PushV
	func_3227(var_385_bool); // 0x467 NEW_2
	if(var_385_bool == 0) goto Label_1133; // 0x469 JumpB
	lshStopAnimation(); // 0x46a Func
	goto Label_1135; // 0x46c Jump
	
Label_1135:
	return 0; // 0x46f Return
	
Label_1133:
	StopAnimation(); // 0x46d Func
	
Label_1137:
	return 0; // 0x471 Return
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_cvector)
{
	var_28_int = 1; // 0x569 PushI
	if(var_28_int == 0) goto Label_1705; // 0x56a JumpB
	func_3127(); // 0x56c NEW_2
	var_30_int = 24032; // 0x56e PushI
	var_31_bool = var_27_cvector == var_30_int; // 0x56f Eq
	if(var_31_bool == 0) goto Label_1398; // 0x570 JumpB
	var_32_object = Obj(); var_33_object = Obj(); // 0x571 PushV
	var_32_object = var_1_object; // 0x572 MovT
	var_33_object = var_0_object; // 0x573 MovT
	func_3263(); // 0x574 NEW_2
	
Label_1398:
	var_36_int = 23290; // 0x576 PushI
	var_37_bool = var_26_bool == var_36_int; // 0x577 Eq
	if(var_37_bool == 0) goto Label_1506; // 0x578 JumpB
	var_38_bool = 0; // 0x579 PushV
	var_38_bool = 0; // 0x57a MovB
	var_39_bool = 0; var_40_object = Obj(); // 0x57b PushV
	var_40_object = var_1_object; // 0x57c MovT
	func_3360(var_40_object); // 0x57d NEW_2
	if(var_39_bool == 0) goto Label_1415; // 0x57f JumpB
	var_47_bool = 0; var_48_object = Obj(); // 0x580 PushV
	var_48_object = var_1_object; // 0x581 MovT
	func_3384(var_47_bool, var_48_object); // 0x582 NEW_2
	var_58_bool = var_47_bool == 0; // 0x584 Not
	if(var_58_bool == 0) goto Label_1415; // 0x585 JumpB
	var_38_bool = 1; // 0x586 MovB
	
Label_1415:
	if(var_38_bool == 0) goto Label_1446; // 0x587 JumpB
	var_59_object = Obj(); var_60_object = Obj(); // 0x588 PushV
	var_59_object = var_1_object; // 0x589 MovT
	var_60_object = var_0_object; // 0x58a MovT
	func_3251(); // 0x58b NEW_2
	var_63_object = Obj(); var_64_object = Obj(); // 0x58d PushV
	var_63_object = var_1_object; // 0x58e MovT
	var_64_object = var_0_object; // 0x58f MovT
	func_3257(); // 0x590 NEW_2
	var_67_string = ""; // 0x592 PushV
	var_67_string = "Neutral"; // 0x593 MovS
	func_1362(var_27_cvector, var_67_string); // 0x594 NEW_2
	var_84_int = 522123; // 0x596 PushI
	SetMessage(var_84_int); // 0x597 TObjFunc
	ClearReplies(); // 0x599 TObjFunc
	var_85_int = 522124; // 0x59b PushI
	var_86_int = 24011; // 0x59c PushI
	var_87_int = 23291; // 0x59d PushI
	AddReply(var_85_int, var_86_int, var_87_int); // 0x59e TObjFunc
	var_88_int = 540112; // 0x5a0 PushI
	var_89_int = -1; // 0x5a1 PushI
	var_90_int = 42079; // 0x5a2 PushI
	AddReply(var_88_int, var_89_int, var_90_int); // 0x5a3 TObjFunc
	return 0; // 0x5a5 Return
	
Label_1446:
	var_91_bool = 0; var_92_object = Obj(); // 0x5a6 PushV
	var_92_object = var_1_object; // 0x5a7 MovT
	func_3384(var_91_bool, var_92_object); // 0x5a8 NEW_2
	if(var_91_bool == 0) goto Label_1476; // 0x5aa JumpB
	var_93_object = Obj(); var_94_object = Obj(); // 0x5ab PushV
	var_93_object = var_1_object; // 0x5ac MovT
	var_94_object = var_0_object; // 0x5ad MovT
	func_3257(); // 0x5ae NEW_2
	var_95_string = ""; // 0x5b0 PushV
	var_95_string = "Neutral"; // 0x5b1 MovS
	func_1362(var_27_cvector, var_95_string); // 0x5b2 NEW_2
	var_96_int = 522127; // 0x5b4 PushI
	SetMessage(var_96_int); // 0x5b5 TObjFunc
	ClearReplies(); // 0x5b7 TObjFunc
	var_97_int = 522128; // 0x5b9 PushI
	var_98_int = -1; // 0x5ba PushI
	var_99_int = 23295; // 0x5bb PushI
	AddReply(var_97_int, var_98_int, var_99_int); // 0x5bc TObjFunc
	var_100_int = 522844; // 0x5be PushI
	var_101_int = -1; // 0x5bf PushI
	var_102_int = 24028; // 0x5c0 PushI
	AddReply(var_100_int, var_101_int, var_102_int); // 0x5c1 TObjFunc
	return 0; // 0x5c3 Return
	
Label_1476:
	var_103_object = Obj(); var_104_object = Obj(); // 0x5c4 PushV
	var_103_object = var_1_object; // 0x5c5 MovT
	var_104_object = var_0_object; // 0x5c6 MovT
	func_3257(); // 0x5c7 NEW_2
	var_105_string = ""; // 0x5c9 PushV
	var_105_string = "Neutral"; // 0x5ca MovS
	func_1362(var_27_cvector, var_105_string); // 0x5cb NEW_2
	var_106_int = 522125; // 0x5cd PushI
	SetMessage(var_106_int); // 0x5ce TObjFunc
	ClearReplies(); // 0x5d0 TObjFunc
	var_107_bool = 0; var_108_object = Obj(); // 0x5d2 PushV
	var_108_object = var_1_object; // 0x5d3 MovT
	func_3372(var_108_object); // 0x5d4 NEW_2
	if(var_107_bool == 0) goto Label_1500; // 0x5d6 JumpB
	var_113_int = 522848; // 0x5d7 PushI
	var_114_int = 24033; // 0x5d8 PushI
	var_115_int = 24032; // 0x5d9 PushI
	AddReply(var_113_int, var_114_int, var_115_int); // 0x5da TObjFunc
	
Label_1500:
	var_116_int = 522126; // 0x5dc PushI
	var_117_int = -1; // 0x5dd PushI
	var_118_int = 23293; // 0x5de PushI
	AddReply(var_116_int, var_117_int, var_118_int); // 0x5df TObjFunc
	return 0; // 0x5e1 Return
	
Label_1506:
	var_119_int = 24033; // 0x5e2 PushI
	var_120_bool = var_26_bool == var_119_int; // 0x5e3 Eq
	if(var_120_bool == 0) goto Label_1524; // 0x5e4 JumpB
	var_121_string = ""; // 0x5e5 PushV
	var_121_string = "Neutral"; // 0x5e6 MovS
	func_1362(var_27_cvector, var_121_string); // 0x5e7 NEW_2
	var_122_int = 522849; // 0x5e9 PushI
	SetMessage(var_122_int); // 0x5ea TObjFunc
	ClearReplies(); // 0x5ec TObjFunc
	var_123_int = 522850; // 0x5ee PushI
	var_124_int = 24035; // 0x5ef PushI
	var_125_int = 24034; // 0x5f0 PushI
	AddReply(var_123_int, var_124_int, var_125_int); // 0x5f1 TObjFunc
	return 0; // 0x5f3 Return
	
Label_1524:
	var_126_int = 24035; // 0x5f4 PushI
	var_127_bool = var_26_bool == var_126_int; // 0x5f5 Eq
	if(var_127_bool == 0) goto Label_1547; // 0x5f6 JumpB
	var_128_string = ""; // 0x5f7 PushV
	var_128_string = "Neutral"; // 0x5f8 MovS
	func_1362(var_27_cvector, var_128_string); // 0x5f9 NEW_2
	var_129_int = 522851; // 0x5fb PushI
	SetMessage(var_129_int); // 0x5fc TObjFunc
	ClearReplies(); // 0x5fe TObjFunc
	var_130_int = 522852; // 0x600 PushI
	var_131_int = 24037; // 0x601 PushI
	var_132_int = 24036; // 0x602 PushI
	AddReply(var_130_int, var_131_int, var_132_int); // 0x603 TObjFunc
	var_133_int = 540113; // 0x605 PushI
	var_134_int = -1; // 0x606 PushI
	var_135_int = 42080; // 0x607 PushI
	AddReply(var_133_int, var_134_int, var_135_int); // 0x608 TObjFunc
	return 0; // 0x60a Return
	
Label_1547:
	var_136_int = 24037; // 0x60b PushI
	var_137_bool = var_26_bool == var_136_int; // 0x60c Eq
	if(var_137_bool == 0) goto Label_1565; // 0x60d JumpB
	var_138_string = ""; // 0x60e PushV
	var_138_string = "Neutral"; // 0x60f MovS
	func_1362(var_27_cvector, var_138_string); // 0x610 NEW_2
	var_139_int = 522853; // 0x612 PushI
	SetMessage(var_139_int); // 0x613 TObjFunc
	ClearReplies(); // 0x615 TObjFunc
	var_140_int = 522854; // 0x617 PushI
	var_141_int = -1; // 0x618 PushI
	var_142_int = 24038; // 0x619 PushI
	AddReply(var_140_int, var_141_int, var_142_int); // 0x61a TObjFunc
	return 0; // 0x61c Return
	
Label_1565:
	var_143_int = 24011; // 0x61d PushI
	var_144_bool = var_26_bool == var_143_int; // 0x61e Eq
	if(var_144_bool == 0) goto Label_1588; // 0x61f JumpB
	var_145_string = ""; // 0x620 PushV
	var_145_string = "Neutral"; // 0x621 MovS
	func_1362(var_27_cvector, var_145_string); // 0x622 NEW_2
	var_146_int = 522828; // 0x624 PushI
	SetMessage(var_146_int); // 0x625 TObjFunc
	ClearReplies(); // 0x627 TObjFunc
	var_147_int = 522829; // 0x629 PushI
	var_148_int = 24015; // 0x62a PushI
	var_149_int = 24012; // 0x62b PushI
	AddReply(var_147_int, var_148_int, var_149_int); // 0x62c TObjFunc
	var_150_int = 522830; // 0x62e PushI
	var_151_int = 24014; // 0x62f PushI
	var_152_int = 24013; // 0x630 PushI
	AddReply(var_150_int, var_151_int, var_152_int); // 0x631 TObjFunc
	return 0; // 0x633 Return
	
Label_1588:
	var_153_int = 24014; // 0x634 PushI
	var_154_bool = var_26_bool == var_153_int; // 0x635 Eq
	if(var_154_bool == 0) goto Label_1606; // 0x636 JumpB
	var_155_string = ""; // 0x637 PushV
	var_155_string = "Neutral"; // 0x638 MovS
	func_1362(var_27_cvector, var_155_string); // 0x639 NEW_2
	var_156_int = 522831; // 0x63b PushI
	SetMessage(var_156_int); // 0x63c TObjFunc
	ClearReplies(); // 0x63e TObjFunc
	var_157_int = 522839; // 0x640 PushI
	var_158_int = 24019; // 0x641 PushI
	var_159_int = 24022; // 0x642 PushI
	AddReply(var_157_int, var_158_int, var_159_int); // 0x643 TObjFunc
	return 0; // 0x645 Return
	
Label_1606:
	var_160_int = 24015; // 0x646 PushI
	var_161_bool = var_26_bool == var_160_int; // 0x647 Eq
	if(var_161_bool == 0) goto Label_1629; // 0x648 JumpB
	var_162_string = ""; // 0x649 PushV
	var_162_string = "Neutral"; // 0x64a MovS
	func_1362(var_27_cvector, var_162_string); // 0x64b NEW_2
	var_163_int = 522832; // 0x64d PushI
	SetMessage(var_163_int); // 0x64e TObjFunc
	ClearReplies(); // 0x650 TObjFunc
	var_164_int = 522833; // 0x652 PushI
	var_165_int = 24017; // 0x653 PushI
	var_166_int = 24016; // 0x654 PushI
	AddReply(var_164_int, var_165_int, var_166_int); // 0x655 TObjFunc
	var_167_int = 522840; // 0x657 PushI
	var_168_int = -1; // 0x658 PushI
	var_169_int = 24024; // 0x659 PushI
	AddReply(var_167_int, var_168_int, var_169_int); // 0x65a TObjFunc
	return 0; // 0x65c Return
	
Label_1629:
	var_170_int = 24017; // 0x65d PushI
	var_171_bool = var_26_bool == var_170_int; // 0x65e Eq
	if(var_171_bool == 0) goto Label_1652; // 0x65f JumpB
	var_172_string = ""; // 0x660 PushV
	var_172_string = "Doubt"; // 0x661 MovS
	func_1362(var_27_cvector, var_172_string); // 0x662 NEW_2
	var_173_int = 522834; // 0x664 PushI
	SetMessage(var_173_int); // 0x665 TObjFunc
	ClearReplies(); // 0x667 TObjFunc
	var_174_int = 522835; // 0x669 PushI
	var_175_int = 24019; // 0x66a PushI
	var_176_int = 24018; // 0x66b PushI
	AddReply(var_174_int, var_175_int, var_176_int); // 0x66c TObjFunc
	var_177_int = 522841; // 0x66e PushI
	var_178_int = -1; // 0x66f PushI
	var_179_int = 24025; // 0x670 PushI
	AddReply(var_177_int, var_178_int, var_179_int); // 0x671 TObjFunc
	return 0; // 0x673 Return
	
Label_1652:
	var_180_int = 24019; // 0x674 PushI
	var_181_bool = var_26_bool == var_180_int; // 0x675 Eq
	if(var_181_bool == 0) goto Label_1670; // 0x676 JumpB
	var_182_string = ""; // 0x677 PushV
	var_182_string = "Neutral"; // 0x678 MovS
	func_1362(var_27_cvector, var_182_string); // 0x679 NEW_2
	var_183_int = 522836; // 0x67b PushI
	SetMessage(var_183_int); // 0x67c TObjFunc
	ClearReplies(); // 0x67e TObjFunc
	var_184_int = 522837; // 0x680 PushI
	var_185_int = 24021; // 0x681 PushI
	var_186_int = 24020; // 0x682 PushI
	AddReply(var_184_int, var_185_int, var_186_int); // 0x683 TObjFunc
	return 0; // 0x685 Return
	
Label_1670:
	var_187_int = 24021; // 0x686 PushI
	var_188_bool = var_26_bool == var_187_int; // 0x687 Eq
	if(var_188_bool == 0) goto Label_1693; // 0x688 JumpB
	var_189_string = ""; // 0x689 PushV
	var_189_string = "Neutral"; // 0x68a MovS
	func_1362(var_27_cvector, var_189_string); // 0x68b NEW_2
	var_190_int = 522838; // 0x68d PushI
	SetMessage(var_190_int); // 0x68e TObjFunc
	ClearReplies(); // 0x690 TObjFunc
	var_191_int = 522843; // 0x692 PushI
	var_192_int = -1; // 0x693 PushI
	var_193_int = 24027; // 0x694 PushI
	AddReply(var_191_int, var_192_int, var_193_int); // 0x695 TObjFunc
	var_194_int = 522842; // 0x697 PushI
	var_195_int = -1; // 0x698 PushI
	var_196_int = 24026; // 0x699 PushI
	AddReply(var_194_int, var_195_int, var_196_int); // 0x69a TObjFunc
	return 0; // 0x69c Return
	
Label_1693:
	var_3_string = 1; // 0x69d TMovB
	var_197_bool = 0; // 0x69e PushV
	func_3227(var_197_bool); // 0x69f NEW_2
	if(var_197_bool == 0) goto Label_1701; // 0x6a1 JumpB
	lshStopAnimation(); // 0x6a2 Func
	goto Label_1703; // 0x6a4 Jump
	
Label_1703:
	return 0; // 0x6a7 Return
	
Label_1701:
	StopAnimation(); // 0x6a5 Func
	
Label_1705:
	return 0; // 0x6a9 Return
}


task_7_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_cvector)
{
	var_28_int = 1; // 0x78f PushI
	if(var_28_int == 0) goto Label_2366; // 0x790 JumpB
	func_3127(); // 0x792 NEW_2
	var_30_int = 26059; // 0x794 PushI
	var_31_bool = var_27_cvector == var_30_int; // 0x795 Eq
	if(var_31_bool == 0) goto Label_1948; // 0x796 JumpB
	var_32_object = Obj(); var_33_object = Obj(); // 0x797 PushV
	var_32_object = var_1_object; // 0x798 MovT
	var_33_object = var_0_object; // 0x799 MovT
	func_3276(); // 0x79a NEW_2
	
Label_1948:
	var_36_int = 26065; // 0x79c PushI
	var_37_bool = var_27_cvector == var_36_int; // 0x79d Eq
	if(var_37_bool == 0) goto Label_1956; // 0x79e JumpB
	var_38_object = Obj(); var_39_object = Obj(); // 0x79f PushV
	var_38_object = var_1_object; // 0x7a0 MovT
	var_39_object = var_0_object; // 0x7a1 MovT
	func_3269(); // 0x7a2 NEW_2
	
Label_1956:
	var_46_int = 31819; // 0x7a4 PushI
	var_47_bool = var_27_cvector == var_46_int; // 0x7a5 Eq
	if(var_47_bool == 0) goto Label_1964; // 0x7a6 JumpB
	var_48_object = Obj(); var_49_object = Obj(); // 0x7a7 PushV
	var_48_object = var_1_object; // 0x7a8 MovT
	var_49_object = var_0_object; // 0x7a9 MovT
	func_3288(); // 0x7aa NEW_2
	
Label_1964:
	var_52_int = 31825; // 0x7ac PushI
	var_53_bool = var_27_cvector == var_52_int; // 0x7ad Eq
	if(var_53_bool == 0) goto Label_1977; // 0x7ae JumpB
	var_54_object = Obj(); var_55_object = Obj(); // 0x7af PushV
	var_54_object = var_1_object; // 0x7b0 MovT
	var_55_object = var_0_object; // 0x7b1 MovT
	func_3310(); // 0x7b2 NEW_2
	var_72_object = Obj(); var_73_object = Obj(); // 0x7b4 PushV
	var_72_object = var_1_object; // 0x7b5 MovT
	var_73_object = var_0_object; // 0x7b6 MovT
	func_3294(); // 0x7b7 NEW_2
	
Label_1977:
	var_98_int = 26058; // 0x7b9 PushI
	var_99_bool = var_26_bool == var_98_int; // 0x7ba Eq
	if(var_99_bool == 0) goto Label_2067; // 0x7bb JumpB
	var_100_string = ""; // 0x7bc PushV
	var_100_string = "Neutral"; // 0x7bd MovS
	func_1912(var_27_cvector, var_100_string); // 0x7be NEW_2
	var_117_int = 524719; // 0x7c0 PushI
	SetMessage(var_117_int); // 0x7c1 TObjFunc
	ClearReplies(); // 0x7c3 TObjFunc
	var_118_bool = 0; // 0x7c5 PushV
	var_118_bool = 0; // 0x7c6 MovB
	var_119_bool = 0; // 0x7c7 PushV
	var_119_bool = 0; // 0x7c8 MovB
	var_120_bool = 0; var_121_object = Obj(); // 0x7c9 PushV
	var_121_object = var_1_object; // 0x7ca MovT
	func_3394(var_121_object); // 0x7cb NEW_2
	if(var_120_bool == 0) goto Label_2005; // 0x7cd JumpB
	var_128_bool = 0; var_129_object = Obj(); // 0x7ce PushV
	var_129_object = var_1_object; // 0x7cf MovT
	func_3406(var_129_object); // 0x7d0 NEW_2
	var_134_bool = var_128_bool == 0; // 0x7d2 Not
	if(var_134_bool == 0) goto Label_2005; // 0x7d3 JumpB
	var_119_bool = 1; // 0x7d4 MovB
	
Label_2005:
	if(var_119_bool == 0) goto Label_2012; // 0x7d5 JumpB
	var_135_bool = 0; var_136_object = Obj(); // 0x7d6 PushV
	var_136_object = var_1_object; // 0x7d7 MovT
	func_3418(var_136_object); // 0x7d8 NEW_2
	if(var_135_bool == 0) goto Label_2012; // 0x7da JumpB
	var_118_bool = 1; // 0x7db MovB
	
Label_2012:
	if(var_118_bool == 0) goto Label_2018; // 0x7dc JumpB
	var_141_int = 524720; // 0x7dd PushI
	var_142_int = 32206; // 0x7de PushI
	var_143_int = 26059; // 0x7df PushI
	AddReply(var_141_int, var_142_int, var_143_int); // 0x7e0 TObjFunc
	
Label_2018:
	var_144_bool = 0; // 0x7e2 PushV
	var_144_bool = 0; // 0x7e3 MovB
	var_145_bool = 0; var_146_object = Obj(); // 0x7e4 PushV
	var_146_object = var_1_object; // 0x7e5 MovT
	func_3406(var_146_object); // 0x7e6 NEW_2
	if(var_145_bool == 0) goto Label_2031; // 0x7e8 JumpB
	var_147_bool = 0; var_148_object = Obj(); // 0x7e9 PushV
	var_148_object = var_1_object; // 0x7ea MovT
	func_3394(var_148_object); // 0x7eb NEW_2
	if(var_147_bool == 0) goto Label_2031; // 0x7ed JumpB
	var_144_bool = 1; // 0x7ee MovB
	
Label_2031:
	if(var_144_bool == 0) goto Label_2037; // 0x7ef JumpB
	var_149_int = 524724; // 0x7f0 PushI
	var_150_int = 32212; // 0x7f1 PushI
	var_151_int = 26063; // 0x7f2 PushI
	AddReply(var_149_int, var_150_int, var_151_int); // 0x7f3 TObjFunc
	
Label_2037:
	var_152_bool = 0; // 0x7f5 PushV
	var_152_bool = 0; // 0x7f6 MovB
	var_153_bool = 0; var_154_object = Obj(); // 0x7f7 PushV
	var_154_object = var_1_object; // 0x7f8 MovT
	func_3442(var_154_object); // 0x7f9 NEW_2
	if(var_153_bool == 0) goto Label_2050; // 0x7fb JumpB
	var_159_bool = 0; var_160_object = Obj(); // 0x7fc PushV
	var_160_object = var_1_object; // 0x7fd MovT
	func_3454(var_160_object); // 0x7fe NEW_2
	if(var_159_bool == 0) goto Label_2050; // 0x800 JumpB
	var_152_bool = 1; // 0x801 MovB
	
Label_2050:
	if(var_152_bool == 0) goto Label_2056; // 0x802 JumpB
	var_165_int = 530453; // 0x803 PushI
	var_166_int = 32226; // 0x804 PushI
	var_167_int = 31819; // 0x805 PushI
	AddReply(var_165_int, var_166_int, var_167_int); // 0x806 TObjFunc
	
Label_2056:
	var_168_int = 524721; // 0x808 PushI
	var_169_int = -1; // 0x809 PushI
	var_170_int = 26060; // 0x80a PushI
	AddReply(var_168_int, var_169_int, var_170_int); // 0x80b TObjFunc
	var_171_int = 530884; // 0x80d PushI
	var_172_int = -1; // 0x80e PushI
	var_173_int = 32205; // 0x80f PushI
	AddReply(var_171_int, var_172_int, var_173_int); // 0x810 TObjFunc
	return 0; // 0x812 Return
	
Label_2067:
	var_174_int = 32226; // 0x813 PushI
	var_175_bool = var_26_bool == var_174_int; // 0x814 Eq
	if(var_175_bool == 0) goto Label_2090; // 0x815 JumpB
	var_176_string = ""; // 0x816 PushV
	var_176_string = "Neutral"; // 0x817 MovS
	func_1912(var_27_cvector, var_176_string); // 0x818 NEW_2
	var_177_int = 530902; // 0x81a PushI
	SetMessage(var_177_int); // 0x81b TObjFunc
	ClearReplies(); // 0x81d TObjFunc
	var_178_int = 530903; // 0x81f PushI
	var_179_int = 32228; // 0x820 PushI
	var_180_int = 32227; // 0x821 PushI
	AddReply(var_178_int, var_179_int, var_180_int); // 0x822 TObjFunc
	var_181_int = 530906; // 0x824 PushI
	var_182_int = 32228; // 0x825 PushI
	var_183_int = 32230; // 0x826 PushI
	AddReply(var_181_int, var_182_int, var_183_int); // 0x827 TObjFunc
	return 0; // 0x829 Return
	
Label_2090:
	var_184_int = 32228; // 0x82a PushI
	var_185_bool = var_26_bool == var_184_int; // 0x82b Eq
	if(var_185_bool == 0) goto Label_2108; // 0x82c JumpB
	var_186_string = ""; // 0x82d PushV
	var_186_string = "Neutral"; // 0x82e MovS
	func_1912(var_27_cvector, var_186_string); // 0x82f NEW_2
	var_187_int = 530904; // 0x831 PushI
	SetMessage(var_187_int); // 0x832 TObjFunc
	ClearReplies(); // 0x834 TObjFunc
	var_188_int = 530905; // 0x836 PushI
	var_189_int = 31820; // 0x837 PushI
	var_190_int = 32229; // 0x838 PushI
	AddReply(var_188_int, var_189_int, var_190_int); // 0x839 TObjFunc
	return 0; // 0x83b Return
	
Label_2108:
	var_191_int = 32233; // 0x83c PushI
	var_192_bool = var_26_bool == var_191_int; // 0x83d Eq
	if(var_192_bool == 0) goto Label_2111; // 0x83e JumpB
	
Label_2111:
	var_193_int = 31820; // 0x83f PushI
	var_194_bool = var_26_bool == var_193_int; // 0x840 Eq
	if(var_194_bool == 0) goto Label_2134; // 0x841 JumpB
	var_195_string = ""; // 0x842 PushV
	var_195_string = "Neutral"; // 0x843 MovS
	func_1912(var_27_cvector, var_195_string); // 0x844 NEW_2
	var_196_int = 530454; // 0x846 PushI
	SetMessage(var_196_int); // 0x847 TObjFunc
	ClearReplies(); // 0x849 TObjFunc
	var_197_int = 530455; // 0x84b PushI
	var_198_int = 31822; // 0x84c PushI
	var_199_int = 31821; // 0x84d PushI
	AddReply(var_197_int, var_198_int, var_199_int); // 0x84e TObjFunc
	var_200_int = 530911; // 0x850 PushI
	var_201_int = 31822; // 0x851 PushI
	var_202_int = 32236; // 0x852 PushI
	AddReply(var_200_int, var_201_int, var_202_int); // 0x853 TObjFunc
	return 0; // 0x855 Return
	
Label_2134:
	var_203_int = 31822; // 0x856 PushI
	var_204_bool = var_26_bool == var_203_int; // 0x857 Eq
	if(var_204_bool == 0) goto Label_2157; // 0x858 JumpB
	var_205_string = ""; // 0x859 PushV
	var_205_string = "Untrust"; // 0x85a MovS
	func_1912(var_27_cvector, var_205_string); // 0x85b NEW_2
	var_206_int = 530456; // 0x85d PushI
	SetMessage(var_206_int); // 0x85e TObjFunc
	ClearReplies(); // 0x860 TObjFunc
	var_207_int = 530457; // 0x862 PushI
	var_208_int = 31824; // 0x863 PushI
	var_209_int = 31823; // 0x864 PushI
	AddReply(var_207_int, var_208_int, var_209_int); // 0x865 TObjFunc
	var_210_int = 530912; // 0x867 PushI
	var_211_int = 32239; // 0x868 PushI
	var_212_int = 32238; // 0x869 PushI
	AddReply(var_210_int, var_211_int, var_212_int); // 0x86a TObjFunc
	return 0; // 0x86c Return
	
Label_2157:
	var_213_int = 32239; // 0x86d PushI
	var_214_bool = var_26_bool == var_213_int; // 0x86e Eq
	if(var_214_bool == 0) goto Label_2180; // 0x86f JumpB
	var_215_string = ""; // 0x870 PushV
	var_215_string = "Neutral"; // 0x871 MovS
	func_1912(var_27_cvector, var_215_string); // 0x872 NEW_2
	var_216_int = 530913; // 0x874 PushI
	SetMessage(var_216_int); // 0x875 TObjFunc
	ClearReplies(); // 0x877 TObjFunc
	var_217_int = 530914; // 0x879 PushI
	var_218_int = 31824; // 0x87a PushI
	var_219_int = 32240; // 0x87b PushI
	AddReply(var_217_int, var_218_int, var_219_int); // 0x87c TObjFunc
	var_220_int = 530915; // 0x87e PushI
	var_221_int = -1; // 0x87f PushI
	var_222_int = 32241; // 0x880 PushI
	AddReply(var_220_int, var_221_int, var_222_int); // 0x881 TObjFunc
	return 0; // 0x883 Return
	
Label_2180:
	var_223_int = 31824; // 0x884 PushI
	var_224_bool = var_26_bool == var_223_int; // 0x885 Eq
	if(var_224_bool == 0) goto Label_2198; // 0x886 JumpB
	var_225_string = ""; // 0x887 PushV
	var_225_string = "Neutral"; // 0x888 MovS
	func_1912(var_27_cvector, var_225_string); // 0x889 NEW_2
	var_226_int = 530458; // 0x88b PushI
	SetMessage(var_226_int); // 0x88c TObjFunc
	ClearReplies(); // 0x88e TObjFunc
	var_227_int = 530459; // 0x890 PushI
	var_228_int = -1; // 0x891 PushI
	var_229_int = 31825; // 0x892 PushI
	AddReply(var_227_int, var_228_int, var_229_int); // 0x893 TObjFunc
	return 0; // 0x895 Return
	
Label_2198:
	var_230_int = 32212; // 0x896 PushI
	var_231_bool = var_26_bool == var_230_int; // 0x897 Eq
	if(var_231_bool == 0) goto Label_2221; // 0x898 JumpB
	var_232_string = ""; // 0x899 PushV
	var_232_string = "Untrust"; // 0x89a MovS
	func_1912(var_27_cvector, var_232_string); // 0x89b NEW_2
	var_233_int = 530891; // 0x89d PushI
	SetMessage(var_233_int); // 0x89e TObjFunc
	ClearReplies(); // 0x8a0 TObjFunc
	var_234_int = 530892; // 0x8a2 PushI
	var_235_int = 32215; // 0x8a3 PushI
	var_236_int = 32213; // 0x8a4 PushI
	AddReply(var_234_int, var_235_int, var_236_int); // 0x8a5 TObjFunc
	var_237_int = 530893; // 0x8a7 PushI
	var_238_int = -1; // 0x8a8 PushI
	var_239_int = 32214; // 0x8a9 PushI
	AddReply(var_237_int, var_238_int, var_239_int); // 0x8aa TObjFunc
	return 0; // 0x8ac Return
	
Label_2221:
	var_240_int = 32215; // 0x8ad PushI
	var_241_bool = var_26_bool == var_240_int; // 0x8ae Eq
	if(var_241_bool == 0) goto Label_2249; // 0x8af JumpB
	var_242_string = ""; // 0x8b0 PushV
	var_242_string = "Neutral"; // 0x8b1 MovS
	func_1912(var_27_cvector, var_242_string); // 0x8b2 NEW_2
	var_243_int = 530894; // 0x8b4 PushI
	SetMessage(var_243_int); // 0x8b5 TObjFunc
	ClearReplies(); // 0x8b7 TObjFunc
	var_244_int = 530896; // 0x8b9 PushI
	var_245_int = 32219; // 0x8ba PushI
	var_246_int = 32217; // 0x8bb PushI
	AddReply(var_244_int, var_245_int, var_246_int); // 0x8bc TObjFunc
	var_247_int = 530895; // 0x8be PushI
	var_248_int = 32219; // 0x8bf PushI
	var_249_int = 32216; // 0x8c0 PushI
	AddReply(var_247_int, var_248_int, var_249_int); // 0x8c1 TObjFunc
	var_250_int = 530897; // 0x8c3 PushI
	var_251_int = 32219; // 0x8c4 PushI
	var_252_int = 32218; // 0x8c5 PushI
	AddReply(var_250_int, var_251_int, var_252_int); // 0x8c6 TObjFunc
	return 0; // 0x8c8 Return
	
Label_2249:
	var_253_int = 32219; // 0x8c9 PushI
	var_254_bool = var_26_bool == var_253_int; // 0x8ca Eq
	if(var_254_bool == 0) goto Label_2272; // 0x8cb JumpB
	var_255_string = ""; // 0x8cc PushV
	var_255_string = "Neutral"; // 0x8cd MovS
	func_1912(var_27_cvector, var_255_string); // 0x8ce NEW_2
	var_256_int = 530898; // 0x8d0 PushI
	SetMessage(var_256_int); // 0x8d1 TObjFunc
	ClearReplies(); // 0x8d3 TObjFunc
	var_257_int = 530899; // 0x8d5 PushI
	var_258_int = 26064; // 0x8d6 PushI
	var_259_int = 32220; // 0x8d7 PushI
	AddReply(var_257_int, var_258_int, var_259_int); // 0x8d8 TObjFunc
	var_260_int = 530901; // 0x8da PushI
	var_261_int = 26064; // 0x8db PushI
	var_262_int = 32224; // 0x8dc PushI
	AddReply(var_260_int, var_261_int, var_262_int); // 0x8dd TObjFunc
	return 0; // 0x8df Return
	
Label_2272:
	var_263_int = 26064; // 0x8e0 PushI
	var_264_bool = var_26_bool == var_263_int; // 0x8e1 Eq
	if(var_264_bool == 0) goto Label_2290; // 0x8e2 JumpB
	var_265_string = ""; // 0x8e3 PushV
	var_265_string = "Neutral"; // 0x8e4 MovS
	func_1912(var_27_cvector, var_265_string); // 0x8e5 NEW_2
	var_266_int = 524725; // 0x8e7 PushI
	SetMessage(var_266_int); // 0x8e8 TObjFunc
	ClearReplies(); // 0x8ea TObjFunc
	var_267_int = 524726; // 0x8ec PushI
	var_268_int = -1; // 0x8ed PushI
	var_269_int = 26065; // 0x8ee PushI
	AddReply(var_267_int, var_268_int, var_269_int); // 0x8ef TObjFunc
	return 0; // 0x8f1 Return
	
Label_2290:
	var_270_int = 32206; // 0x8f2 PushI
	var_271_bool = var_26_bool == var_270_int; // 0x8f3 Eq
	if(var_271_bool == 0) goto Label_2308; // 0x8f4 JumpB
	var_272_string = ""; // 0x8f5 PushV
	var_272_string = "Neutral"; // 0x8f6 MovS
	func_1912(var_27_cvector, var_272_string); // 0x8f7 NEW_2
	var_273_int = 530885; // 0x8f9 PushI
	SetMessage(var_273_int); // 0x8fa TObjFunc
	ClearReplies(); // 0x8fc TObjFunc
	var_274_int = 530886; // 0x8fe PushI
	var_275_int = 32208; // 0x8ff PushI
	var_276_int = 32207; // 0x900 PushI
	AddReply(var_274_int, var_275_int, var_276_int); // 0x901 TObjFunc
	return 0; // 0x903 Return
	
Label_2308:
	var_277_int = 32208; // 0x904 PushI
	var_278_bool = var_26_bool == var_277_int; // 0x905 Eq
	if(var_278_bool == 0) goto Label_2331; // 0x906 JumpB
	var_279_string = ""; // 0x907 PushV
	var_279_string = "Neutral"; // 0x908 MovS
	func_1912(var_27_cvector, var_279_string); // 0x909 NEW_2
	var_280_int = 530887; // 0x90b PushI
	SetMessage(var_280_int); // 0x90c TObjFunc
	ClearReplies(); // 0x90e TObjFunc
	var_281_int = 530888; // 0x910 PushI
	var_282_int = 26061; // 0x911 PushI
	var_283_int = 32209; // 0x912 PushI
	AddReply(var_281_int, var_282_int, var_283_int); // 0x913 TObjFunc
	var_284_int = 530889; // 0x915 PushI
	var_285_int = -1; // 0x916 PushI
	var_286_int = 32210; // 0x917 PushI
	AddReply(var_284_int, var_285_int, var_286_int); // 0x918 TObjFunc
	return 0; // 0x91a Return
	
Label_2331:
	var_287_int = 26061; // 0x91b PushI
	var_288_bool = var_26_bool == var_287_int; // 0x91c Eq
	if(var_288_bool == 0) goto Label_2354; // 0x91d JumpB
	var_289_string = ""; // 0x91e PushV
	var_289_string = "Neutral"; // 0x91f MovS
	func_1912(var_27_cvector, var_289_string); // 0x920 NEW_2
	var_290_int = 524722; // 0x922 PushI
	SetMessage(var_290_int); // 0x923 TObjFunc
	ClearReplies(); // 0x925 TObjFunc
	var_291_int = 524723; // 0x927 PushI
	var_292_int = -1; // 0x928 PushI
	var_293_int = 26062; // 0x929 PushI
	AddReply(var_291_int, var_292_int, var_293_int); // 0x92a TObjFunc
	var_294_int = 530890; // 0x92c PushI
	var_295_int = -1; // 0x92d PushI
	var_296_int = 32211; // 0x92e PushI
	AddReply(var_294_int, var_295_int, var_296_int); // 0x92f TObjFunc
	return 0; // 0x931 Return
	
Label_2354:
	var_3_string = 1; // 0x932 TMovB
	var_297_bool = 0; // 0x933 PushV
	func_3227(var_297_bool); // 0x934 NEW_2
	if(var_297_bool == 0) goto Label_2362; // 0x936 JumpB
	lshStopAnimation(); // 0x937 Func
	goto Label_2364; // 0x939 Jump
	
Label_2364:
	return 0; // 0x93c Return
	
Label_2362:
	StopAnimation(); // 0x93a Func
	
Label_2366:
	return 0; // 0x93e Return
}


task_9_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_int, var_26_int, var_27_cvector)
{
	var_28_int = 1; // 0x9e1 PushI
	if(var_28_int == 0) goto Label_2569; // 0x9e2 JumpB
	func_3127(); // 0x9e4 NEW_2
	var_30_int = 42563; // 0x9e6 PushI
	var_31_bool = var_26_int == var_30_int; // 0x9e7 Eq
	if(var_31_bool == 0) goto Label_2557; // 0x9e8 JumpB
	var_32_string = ""; // 0x9e9 PushV
	var_32_string = "Neutral"; // 0x9ea MovS
	func_2506(var_27_cvector, var_32_string); // 0x9eb NEW_2
	var_49_int = 540554; // 0x9ed PushI
	SetMessage(var_49_int); // 0x9ee TObjFunc
	ClearReplies(); // 0x9f0 TObjFunc
	var_50_int = 540555; // 0x9f2 PushI
	var_51_int = -1; // 0x9f3 PushI
	var_52_int = 42564; // 0x9f4 PushI
	AddReply(var_50_int, var_51_int, var_52_int); // 0x9f5 TObjFunc
	var_53_int = 540794; // 0x9f7 PushI
	var_54_int = -1; // 0x9f8 PushI
	var_55_int = 42843; // 0x9f9 PushI
	AddReply(var_53_int, var_54_int, var_55_int); // 0x9fa TObjFunc
	return 0; // 0x9fc Return
	
Label_2557:
	var_3_string = 1; // 0x9fd TMovB
	var_56_bool = 0; // 0x9fe PushV
	func_3227(var_56_bool); // 0x9ff NEW_2
	if(var_56_bool == 0) goto Label_2565; // 0xa01 JumpB
	lshStopAnimation(); // 0xa02 Func
	goto Label_2567; // 0xa04 Jump
	
Label_2567:
	return 0; // 0xa07 Return
	
Label_2565:
	StopAnimation(); // 0xa05 Func
	
Label_2569:
	return 0; // 0xa09 Return
}


task_10_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_cvector, var_26_int)
{
	var_27_int = 10; // 0xa54 PushI
	var_28_bool = var_26_int == var_27_int; // 0xa55 Eq
	if(var_28_bool == 0) goto Label_2680; // 0xa56 JumpB
	func_2639(); // 0xa58 NEW_2
	var_30_bool = 0; // 0xa5a PushV
	var_30_bool = 0; // 0xa5b MovB
	var_31_bool = 0; // 0xa5c PushV
	func_2853(var_31_bool); // 0xa5d NEW_2
	if(var_31_bool == 0) goto Label_2661; // 0xa5f JumpB
	var_34_bool = 0; // 0xa60 PushV
	func_2608(var_34_bool); // 0xa61 NEW_2
	if(var_34_bool == 0) goto Label_2661; // 0xa63 JumpB
	var_30_bool = 1; // 0xa64 MovB
	
Label_2661:
	if(var_30_bool == 0) goto Label_2674; // 0xa65 JumpB
	var_51_bool = 0; // 0xa66 PushV
	func_2588(var_51_bool); // 0xa67 NEW_2
	if(var_51_bool == 0) goto Label_2673; // 0xa69 JumpB
	var_70_bool = 0; var_71_object = Obj(); // 0xa6a PushV
	var_72_object = Obj(); // 0xa6b PushV
	func_3134(var_72_object); // 0xa6c NEW_2
	var_71_object = var_72_object; // 0xa6d Mov
	func_3001(var_71_object); // 0xa6f NEW_2
	
Label_2673:
	goto Label_2680; // 0xa71 Jump
	
Label_2680:
	return 0; // 0xa78 Return
	
Label_2674:
	func_2603(var_26_int); // 0xa73 NEW_2
	func_2630(); // 0xa76 NEW_2
}


task_10_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_cvector)
{
	func_2821(); // 0xa7a NEW_2
	func_2639(); // 0xa7d NEW_2
	lshStopSpeech(); // 0xa7f Func
	lshStopAnimation(); // 0xa81 Func
	StopAsync(); // 0xa83 Func
	Hold(); // 0xa85 Func
	return 0; // 0xa87 Return
}


task_10_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_cvector)
{
	StopGroup0(); // 0xa88 Func
	func_2639(); // 0xa8b NEW_2
	var_27_string = ""; // 0xa8d PushV
	var_27_string = "Neutral"; // 0xa8e MovS
	func_3081(var_27_string); // 0xa8f NEW_2
	func_2630(); // 0xa92 NEW_2
	return 0; // 0xa94 Return
}


task_10_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_cvector, var_26_bool)
{
	var_27_bool = var_26_bool; // 0xa96 Push
	if(var_27_bool == 0) goto Label_2716; // 0xa97 JumpB
	func_2630(); // 0xa99 NEW_2
	goto Label_2720; // 0xa9b Jump
	
Label_2720:
	return 0; // 0xaa0 Return
	
Label_2716:
	var_33_string = ""; // 0xa9c PushV
	var_33_string = "Neutral"; // 0xa9d MovS
	func_3081(var_33_string); // 0xa9e NEW_2
}


task_10_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_cvector, var_26_object)
{
	var_27_bool = 0; var_28_bool = 0; // 0xaa1 PushV
	IsOverrideActive(var_28_bool); // 0xaa2 Func
	var_29_bool = var_28_bool == 0; // 0xaa4 Not
	if(var_29_bool == 0) goto Label_2749; // 0xaa5 JumpB
	EventDisable(0); // 0xaa6 EventDisable
	func_2821(); // 0xaa8 NEW_2
	var_30_bool = 0; var_31_object = Obj(); // 0xaaa PushV
	var_31_object = var_26_object; // 0xaab Mov
	func_2844(var_31_object); // 0xaac NEW_2
	EventEnable(0); // 0xaae EventEnable
	var_44_object = Obj(); // 0xaaf PushV
	var_44_object = var_26_object; // 0xab0 Mov
	func_3544(var_44_object); // 0xab1 NEW_2
	var_638_string = ""; // 0xab3 PushV
	var_638_string = "Neutral"; // 0xab4 MovS
	func_3081(var_638_string); // 0xab5 NEW_2
	func_2639(); // 0xab8 NEW_2
	func_2630(); // 0xabb NEW_2
	
Label_2749:
	return 2; // 0xabd Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_cvector)
{
	func_2574(var_25_cvector); // 0xa0b NEW_2
	return 0; // 0xa0d Return
}


func_0(var_0_object, var_49_int, var_50_object)
{
	var_52_object = Obj(); var_53_bool = 0; var_54_int = 0; var_55_bool = 0; var_56_object = Obj(); var_57_bool = 0; var_58_int = 0; var_59_bool = 0; // 0x0 PushV
	var_0_object = var_50_object; // 0x1 TMov
	var_60_bool = 0; var_61_object = Obj(); var_62_float = 0; // 0x2 PushV
	var_61_object = var_50_object; // 0x3 Mov
	var_62_float = 70.0; // 0x4 MovF
	func_2858(var_61_object, var_62_float); // 0x5 NEW_2
	var_106_bool = var_60_bool == 0; // 0x7 Not
	if(var_106_bool == 0) goto Label_11; // 0x8 JumpB
	var_49_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_56_object); // 0xb Func
	var_107_int = 0; // 0xd PushV
	func_3221(var_107_int); // 0xe NEW_2
	SetNPCName(var_107_int); // 0x10 ObjFunc
	var_108_int = 0; // 0x12 PushV
	func_3219(var_108_int); // 0x13 NEW_2
	SetNPCDescription(var_108_int); // 0x15 ObjFunc
	var_109_string = ""; // 0x17 PushV
	func_3223(var_109_string); // 0x18 NEW_2
	SetPhoto(var_109_string); // 0x1a ObjFunc
	var_110_string = ""; // 0x1c PushV
	func_3225(var_110_string); // 0x1d NEW_2
	SetPhoto2(var_110_string); // 0x1f ObjFunc
	var_111_int = 0; // 0x21 PushV
	func_3527(var_111_int); // 0x22 NEW_2
	SetPlayerName(var_111_int); // 0x24 ObjFunc
	var_58_int = -1; // 0x26 MovI
	IsOverrideActive(var_57_bool); // 0x27 Func
	var_119_bool = var_57_bool; // 0x29 Push
	if(var_119_bool == 0) goto Label_45; // 0x2a JumpB
	var_49_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_56_object); // 0x2d Func
	var_120_bool = 0; var_121_object = Obj(); // 0x2f PushV
	var_122_object = Obj(); // 0x30 PushV
	func_3134(var_122_object); // 0x31 NEW_2
	var_121_object = var_122_object; // 0x32 Mov
	func_2943(var_120_bool, var_121_object); // 0x34 NEW_2
	var_215_object = Obj(); var_216_object = Obj(); // 0x36 PushV
	var_215_object = var_50_object; // 0x37 Mov
	var_216_object = var_56_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_217_object, var_218_object, var_219_string, var_220_bool, var_215_object, var_216_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	IsDialogEnd(var_59_bool); // 0x3d ObjFunc
	
Label_63:
	var_264_bool = var_59_bool == 0; // 0x3f Not
	if(var_264_bool == 0) goto Label_70; // 0x40 JumpB
	sync(); // 0x41 Func
	IsDialogEnd(var_59_bool); // 0x43 ObjFunc
	goto Label_63; // 0x45 Jump
	
Label_70:
	var_265_object = Obj(); // 0x46 PushV
	var_265_object = var_50_object; // 0x47 Mov
	func_2926(); // 0x48 NEW_2
	StopDialog(var_56_object); // 0x4a Func
	GetReturnValue(var_58_int); // 0x4c ObjFunc
	var_49_int = var_58_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_2819(var_64_bool)
{
	var_64_bool = 1; // 0xb03 MovB
	return 0; // 0xb04 Return
}


func_3332()
{
	var_34_object = Obj(); var_35_object = Obj(); // 0xd04 PushV
	var_36_object = Obj(); // 0xd05 PushV
	func_3477(var_36_object); // 0xd06 NEW_2
	var_35_object = var_36_object; // 0xd07 Mov
	var_43_string = "b9q01BlockGotoBoiny"; // 0xd09 PushS
	var_44_string = "pt_map_starshina"; // 0xd0a PushS
	var_45_int = 3; // 0xd0b PushI
	var_46_int = 531550; // 0xd0c PushI
	var_47_float = 0; // 0xd0d PushV
	func_3167(var_47_float); // 0xd0e NEW_2
	AddMark(var_43_string, var_44_string, var_45_int, var_46_int, var_47_float); // 0xd10 ObjFunc
	return 2; // 0xd12 Return
}


func_2821()
{
	StopAnimation(); // 0xb05 Func
	StopGroup0(); // 0xb07 Func
	return 0; // 0xb09 Return
}


func_3081(var_248_string)
{
	var_249_bool = 0; var_250_float = 0; var_251_float = 0; var_252_bool = 0; var_253_float = 0; var_254_float = 0; // 0xc09 PushV
	lshHasAnimation(var_252_bool, var_248_string); // 0xc0a Func
	var_255_bool = var_252_bool; // 0xc0c Push
	if(var_255_bool == 0) goto Label_3092; // 0xc0d JumpB
	lshGetAnimTimes(var_248_string, var_253_float, var_254_float); // 0xc0e Func
	var_256_bool = 0; // 0xc10 PushB
	lshPlayAnimation(var_253_float, var_254_float, var_256_bool); // 0xc11 Func
	goto Label_3096; // 0xc13 Jump
	
Label_3096:
	return 6; // 0xc18 Return
	
Label_3092:
	var_257_string = "Can't find lsh animation : "; // 0xc14 PushS
	var_258_int = var_257_string + var_248_string; // 0xc15 Add
	Trace(var_258_int); // 0xc16 Func
}


func_2826(var_41_float)
{
	var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); // 0xb0a PushV
	GetPosition(var_46_cvector); // 0xb0b Func
	GetPosition(var_47_cvector); // 0xb0d ObjFunc
	var_48_cvector = var_47_cvector - var_46_cvector; // 0xb0f Sub2
	var_41_float = var_48_cvector | var_48_cvector; // 0xb10 Or2
	return 6; // 0xb11 Return
}


func_2574(var_0_object)
{
	var_26_bool = 0; // 0xa0e PushV
	func_2853(var_26_bool); // 0xa0f NEW_2
	var_29_bool = var_26_bool == 0; // 0xa11 Not
	if(var_29_bool == 0) goto Label_2581; // 0xa12 JumpB
	Hold(); // 0xa13 Func
	
Label_2581:
	GetDirection(var_0_object); // 0xa15 Func
	
Label_2583:
	func_2750(); // 0xa18 NEW_2
	goto Label_2583; // 0xa1a Jump
}


func_2834(var_34_bool, var_35_cvector)
{
	var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_bool = 0; var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_bool = 0; // 0xb12 PushV
	GetPosition(var_39_cvector); // 0xb13 Func
	var_40_cvector = var_35_cvector - var_39_cvector; // 0xb15 Sub2
	var_42_float = GetByIndex(var_40_cvector, 0); // 0xb16 PushE
	var_43_float = GetByIndex(var_40_cvector, 2); // 0xb17 PushE
	Rotate(var_42_float, var_43_float, var_41_bool); // 0xb18 Func
	var_34_bool = var_41_bool; // 0xb1a Mov
	return 6; // 0xb1b Return
}


func_3348(var_308_bool)
{
	var_310_int = 0; var_311_string = ""; // 0xd15 PushV
	var_311_string = "oob9Block1"; // 0xd16 MovS
	func_3150(var_310_int, var_311_string); // 0xd17 NEW_2
	var_314_int = 0; // 0xd19 PushI
	var_315_bool = var_310_int == var_314_int; // 0xd1a Eq
	if(var_315_bool == 0) goto Label_3358; // 0xd1b JumpB
	var_308_bool = 1; // 0xd1c MovB
	return 0; // 0xd1d Return
	
Label_3358:
	var_308_bool = 0; // 0xd1e MovB
	return 0; // 0xd1f Return
}


func_3097(var_226_string, var_227_bool)
{
	var_230_bool = 0; var_231_float = 0; var_232_float = 0; var_233_bool = 0; var_234_float = 0; var_235_float = 0; // 0xc19 PushV
	lshHasAnimation(var_233_bool, var_226_string); // 0xc1a Func
	var_236_bool = var_233_bool; // 0xc1c Push
	if(var_236_bool == 0) goto Label_3107; // 0xc1d JumpB
	lshGetAnimTimes(var_226_string, var_234_float, var_235_float); // 0xc1e Func
	lshPlayAnimation(var_234_float, var_235_float, var_227_bool); // 0xc20 Func
	goto Label_3111; // 0xc22 Jump
	
Label_3111:
	return 6; // 0xc27 Return
	
Label_3107:
	var_237_string = "Can't find lsh animation : "; // 0xc23 PushS
	var_238_int = var_237_string + var_226_string; // 0xc24 Add
	Trace(var_238_int); // 0xc25 Func
}


func_2588(var_51_bool)
{
	var_52_object = Obj(); var_53_object = Obj(); // 0xa1c PushV
	var_54_string = "player"; // 0xa1d PushS
	FindActor(var_53_object, var_54_string); // 0xa1e Func
	var_55_bool = var_53_object == 0; // 0xa20 Not
	if(var_55_bool == 0) goto Label_2596; // 0xa21 JumpB
	var_51_bool = 0; // 0xa22 MovB
	return 2; // 0xa23 Return
	
Label_2596:
	var_56_bool = 0; var_57_object = Obj(); // 0xa24 PushV
	var_57_object = var_53_object; // 0xa25 Mov
	func_2844(var_57_object); // 0xa26 NEW_2
	var_51_bool = var_56_bool; // 0xa27 Mov
	return 2; // 0xa29 Return
}


func_2844(var_30_bool)
{
	var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); // 0xb1c PushV
	GetPosition(var_33_cvector); // 0xb1d ObjFunc
	var_34_bool = 0; var_35_cvector = CVector(0,0,0); // 0xb1f PushV
	var_35_cvector = var_33_cvector; // 0xb20 Mov
	func_2834(var_34_bool, var_35_cvector); // 0xb21 NEW_2
	var_30_bool = var_34_bool; // 0xb22 Mov
	return 2; // 0xb24 Return
}


func_3360(var_503_bool)
{
	var_505_int = 0; var_506_string = ""; // 0xd21 PushV
	var_506_string = "oob12Block1"; // 0xd22 MovS
	func_3150(var_505_int, var_506_string); // 0xd23 NEW_2
	var_507_int = 0; // 0xd25 PushI
	var_508_bool = var_505_int == var_507_int; // 0xd26 Eq
	if(var_508_bool == 0) goto Label_3370; // 0xd27 JumpB
	var_503_bool = 1; // 0xd28 MovB
	return 0; // 0xd29 Return
	
Label_3370:
	var_503_bool = 0; // 0xd2a MovB
	return 0; // 0xd2b Return
}


func_2853(var_26_bool)
{
	var_27_bool = 0; var_28_bool = 0; // 0xb25 PushV
	IsLoaded(var_28_bool); // 0xb26 Func
	var_26_bool = var_28_bool; // 0xb28 Mov
	return 2; // 0xb29 Return
}


func_3112(var_154_bool, var_155_string)
{
	var_156_bool = 0; var_157_bool = 0; // 0xc28 PushV
	var_158_bool = 0; // 0xc29 PushV
	func_3227(var_158_bool); // 0xc2a NEW_2
	if(var_158_bool == 0) goto Label_3125; // 0xc2c JumpB
	lshHasSpeech(var_157_bool, var_155_string); // 0xc2d Func
	var_159_bool = var_157_bool; // 0xc2f Push
	if(var_159_bool == 0) goto Label_3125; // 0xc30 JumpB
	lshPlaySpeech(var_155_string); // 0xc31 Func
	var_154_bool = 1; // 0xc33 MovB
	return 2; // 0xc34 Return
	
Label_3125:
	var_154_bool = 0; // 0xc35 MovB
	return 2; // 0xc36 Return
}


func_2858(var_60_bool, var_62_float)
{
	var_63_float = 0; var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); var_66_cvector = CVector(0,0,0); var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0); var_70_bool = 0; var_71_bool = 0; var_72_float = 0; var_73_cvector = CVector(0,0,0); var_74_cvector = CVector(0,0,0); var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0); var_79_bool = 0; var_80_bool = 0; // 0xb2a PushV
	GetPosition(var_73_cvector); // 0xb2b ObjFunc
	GetEyesHeight(var_72_float); // 0xb2d ObjFunc
	var_81_float = GetByIndex(var_73_cvector, 1); // 0xb2f PushE
	var_81_float = var_81_float + var_72_float; // 0xb30 Add2
	SetByIndex(var_73_cvector, 1) = var_81_float; // 0xb31 PopE
	GetPosition(var_74_cvector); // 0xb32 Func
	GetEyesHeight(var_72_float); // 0xb34 Func
	var_82_float = GetByIndex(var_74_cvector, 1); // 0xb36 PushE
	var_82_float = var_82_float + var_72_float; // 0xb37 Add2
	SetByIndex(var_74_cvector, 1) = var_82_float; // 0xb38 PopE
	var_75_cvector = var_73_cvector - var_74_cvector; // 0xb39 Sub2
	var_83_float = GetByIndex(var_75_cvector, 1); // 0xb3a PushE
	var_83_float = 0; // 0xb3b MovI
	SetByIndex(var_75_cvector, 1) = var_83_float; // 0xb3c PopE
	var_84_int = var_75_cvector | var_75_cvector; // 0xb3d Or
	var_85_float = sqrt(var_84_int); // 0xb3e Sqrt
	var_75_cvector = var_75_cvector / var_75_cvector; // 0xb3f Div2
	var_76_cvector = -var_75_cvector; // 0xb40 Neg2
	var_86_float = var_75_cvector * var_62_float; // 0xb41 Mult
	var_87_cvector = CVector(0,0,0); var_88_cvector = CVector(0,0,0); // 0xb42 PushV
	var_89_cvector = CVector(0.0, 1.0, 0.0); // 0xb43 PushVec
	var_88_cvector = var_76_cvector ^ var_89_cvector; // 0xb44 Xor2
	func_3140(var_87_cvector, var_88_cvector); // 0xb45 NEW_2
	var_95_int = 25; // 0xb47 PushI
	var_96_float = var_87_cvector * var_95_int; // 0xb48 Mult
	var_97_int = var_86_float + var_96_float; // 0xb49 Add
	var_98_cvector = CVector(0.0, 10.0, 0.0); // 0xb4a PushVec
	var_77_cvector = var_97_int - var_98_cvector; // 0xb4b Sub2
	var_78_cvector = var_74_cvector + var_77_cvector; // 0xb4c Add2
	IsOverrideActive(var_79_bool); // 0xb4d Func
	var_99_bool = var_79_bool; // 0xb4f Push
	if(var_99_bool == 0) goto Label_2899; // 0xb50 JumpB
	var_60_bool = 0; // 0xb51 MovB
	return 18; // 0xb52 Return
	
Label_2899:
	StopWorld(); // 0xb53 Func
	CameraTransit(var_78_cvector, var_76_cvector); // 0xb55 Func
	var_100_float = GetByIndex(var_77_cvector, 0); // 0xb57 PushE
	var_101_float = GetByIndex(var_77_cvector, 2); // 0xb58 PushE
	Rotate(var_100_float, var_101_float); // 0xb59 Func
	var_102_bool = 0; // 0xb5b PushV
	func_3227(var_102_bool); // 0xb5c NEW_2
	if(var_102_bool == 0) goto Label_2912; // 0xb5e JumpB
	goto Label_2920; // 0xb5f Jump
	
Label_2920:
	CameraWaitForPlayFinish(); // 0xb68 Func
	ResumeWorld(); // 0xb6a Func
	var_60_bool = 1; // 0xb6c MovB
	return 18; // 0xb6d Return
	
Label_2912:
	var_103_string = "head"; // 0xb60 PushS
	HasAnimationTrack(var_80_bool, var_103_string); // 0xb61 Func
	var_104_bool = var_80_bool; // 0xb63 Push
	if(var_104_bool == 0) goto Label_2920; // 0xb64 JumpB
	var_105_string = "head"; // 0xb65 PushS
	LookAsyncCamera(var_105_string); // 0xb66 Func
}


func_2603(var_0_object)
{
	var_103_float = GetByIndex(var_0_object, 0); // 0xa2b PushE
	var_104_float = GetByIndex(var_0_object, 2); // 0xa2c PushE
	RotateAsync(var_103_float, var_104_float); // 0xa2d Func
	return 0; // 0xa2f Return
}


func_3372(var_568_bool)
{
	var_570_int = 0; var_571_string = ""; // 0xd2d PushV
	var_571_string = "oob12Block2"; // 0xd2e MovS
	func_3150(var_570_int, var_571_string); // 0xd2f NEW_2
	var_572_int = 0; // 0xd31 PushI
	var_573_bool = var_570_int == var_572_int; // 0xd32 Eq
	if(var_573_bool == 0) goto Label_3382; // 0xd33 JumpB
	var_568_bool = 1; // 0xd34 MovB
	return 0; // 0xd35 Return
	
Label_3382:
	var_568_bool = 0; // 0xd36 MovB
	return 0; // 0xd37 Return
}


func_2608(var_34_bool)
{
	var_35_object = Obj(); var_36_bool = 0; var_37_object = Obj(); var_38_bool = 0; // 0xa30 PushV
	var_39_string = "player"; // 0xa31 PushS
	FindActor(var_37_object, var_39_string); // 0xa32 Func
	var_40_bool = var_37_object == 0; // 0xa34 Not
	if(var_40_bool == 0) goto Label_2616; // 0xa35 JumpB
	var_34_bool = 0; // 0xa36 MovB
	return 4; // 0xa37 Return
	
Label_2616:
	var_41_float = 0; var_42_object = Obj(); // 0xa38 PushV
	var_42_object = var_37_object; // 0xa39 Mov
	func_2826(var_42_object); // 0xa3a NEW_2
	var_49_float = 90000.0; // 0xa3c PushF
	var_50_bool = var_41_float > var_49_float; // 0xa3d GT
	if(var_50_bool == 0) goto Label_2625; // 0xa3e JumpB
	var_34_bool = 0; // 0xa3f MovB
	return 4; // 0xa40 Return
	
Label_2625:
	CanSee(var_38_bool, var_37_object); // 0xa41 Func
	var_34_bool = var_38_bool; // 0xa43 Mov
	return 4; // 0xa44 Return
}


func_3127()
{
	var_29_bool = 0; // 0xc37 PushV
	func_3227(var_29_bool); // 0xc38 NEW_2
	if(var_29_bool == 0) goto Label_3133; // 0xc3a JumpB
	lshStopSpeech(); // 0xc3b Func
	
Label_3133:
	return 0; // 0xc3d Return
}


func_3384(var_509_bool, var_510_object)
{
	var_511_bool = 0; var_512_object = Obj(); // 0xd39 PushV
	var_512_object = var_510_object; // 0xd3a Mov
	func_3466(var_512_object); // 0xd3b NEW_2
	if(var_511_bool == 0) goto Label_3392; // 0xd3d JumpB
	var_509_bool = 1; // 0xd3e MovB
	return 0; // 0xd3f Return
	
Label_3392:
	var_509_bool = 0; // 0xd40 MovB
	return 0; // 0xd41 Return
}


func_3134(var_122_object)
{
	var_123_object = Obj(); var_124_object = Obj(); // 0xc3e PushV
	self(var_124_object); // 0xc3f Func
	var_122_object = var_124_object; // 0xc41 Mov
	return 2; // 0xc42 Return
}


func_2367(var_0_object, var_582_int, var_583_object)
{
	var_585_object = Obj(); var_586_bool = 0; var_587_int = 0; var_588_bool = 0; var_589_object = Obj(); var_590_bool = 0; var_591_int = 0; var_592_bool = 0; // 0x93f PushV
	var_0_object = var_583_object; // 0x940 TMov
	var_593_bool = 0; var_594_object = Obj(); var_595_float = 0; // 0x941 PushV
	var_594_object = var_583_object; // 0x942 Mov
	var_595_float = 70.0; // 0x943 MovF
	func_2858(var_594_object, var_595_float); // 0x944 NEW_2
	var_596_bool = var_593_bool == 0; // 0x946 Not
	if(var_596_bool == 0) goto Label_2378; // 0x947 JumpB
	var_582_int = -2; // 0x948 MovI
	return 8; // 0x949 Return
	
Label_2378:
	CreateDialog(var_589_object); // 0x94a Func
	var_597_int = 0; // 0x94c PushV
	func_3221(var_597_int); // 0x94d NEW_2
	SetNPCName(var_597_int); // 0x94f ObjFunc
	var_598_int = 0; // 0x951 PushV
	func_3219(var_598_int); // 0x952 NEW_2
	SetNPCDescription(var_598_int); // 0x954 ObjFunc
	var_599_string = ""; // 0x956 PushV
	func_3223(var_599_string); // 0x957 NEW_2
	SetPhoto(var_599_string); // 0x959 ObjFunc
	var_600_string = ""; // 0x95b PushV
	func_3225(var_600_string); // 0x95c NEW_2
	SetPhoto2(var_600_string); // 0x95e ObjFunc
	var_601_int = 0; // 0x960 PushV
	func_3527(var_601_int); // 0x961 NEW_2
	SetPlayerName(var_601_int); // 0x963 ObjFunc
	var_591_int = -1; // 0x965 MovI
	IsOverrideActive(var_590_bool); // 0x966 Func
	var_602_bool = var_590_bool; // 0x968 Push
	if(var_602_bool == 0) goto Label_2412; // 0x969 JumpB
	var_582_int = -2; // 0x96a MovI
	return 8; // 0x96b Return
	
Label_2412:
	DoDialog(var_589_object); // 0x96c Func
	var_603_bool = 0; var_604_object = Obj(); // 0x96e PushV
	var_605_object = Obj(); // 0x96f PushV
	func_3134(var_605_object); // 0x970 NEW_2
	var_604_object = var_605_object; // 0x971 Mov
	func_2943(var_603_bool, var_604_object); // 0x973 NEW_2
	var_606_object = Obj(); var_607_object = Obj(); // 0x975 PushV
	var_606_object = var_583_object; // 0x976 Mov
	var_607_object = var_589_object; // 0x977 Mov
	TaskCall(9); // 0x978 TaskCall
	func_2448(var_608_object, var_609_object, var_610_string, var_611_bool, var_606_object, var_607_object); // 0x979 NEW_2
	TaskReturn(); // 0x97a TaskReturn
	IsDialogEnd(var_592_bool); // 0x97c ObjFunc
	
Label_2430:
	var_636_bool = var_592_bool == 0; // 0x97e Not
	if(var_636_bool == 0) goto Label_2437; // 0x97f JumpB
	sync(); // 0x980 Func
	IsDialogEnd(var_592_bool); // 0x982 ObjFunc
	goto Label_2430; // 0x984 Jump
	
Label_2437:
	var_637_object = Obj(); // 0x985 PushV
	var_637_object = var_583_object; // 0x986 Mov
	func_2926(); // 0x987 NEW_2
	StopDialog(var_589_object); // 0x989 Func
	GetReturnValue(var_591_int); // 0x98b ObjFunc
	var_582_int = var_591_int; // 0x98d Mov
	return 8; // 0x98e Return
}


func_3394(var_407_bool)
{
	var_409_int = 0; var_410_string = ""; // 0xd43 PushV
	var_410_string = "b10q02"; // 0xd44 MovS
	func_3150(var_409_int, var_410_string); // 0xd45 NEW_2
	var_411_int = 3; // 0xd47 PushI
	var_412_bool = var_409_int == var_411_int; // 0xd48 Eq
	if(var_412_bool == 0) goto Label_3404; // 0xd49 JumpB
	var_407_bool = 1; // 0xd4a MovB
	return 0; // 0xd4b Return
	
Label_3404:
	var_407_bool = 0; // 0xd4c MovB
	return 0; // 0xd4d Return
}


func_3140(var_87_cvector, var_88_cvector)
{
	var_90_float = 0; var_91_float = 0; // 0xc44 PushV
	var_92_int = var_88_cvector | var_88_cvector; // 0xc45 Or
	var_91_float = sqrt(var_92_int); // 0xc46 Sqrt2
	var_93_float = 0.0; // 0xc47 PushF
	var_94_bool = var_91_float < var_93_float; // 0xc48 LT
	if(var_94_bool == 0) goto Label_3148; // 0xc49 JumpB
	var_87_cvector = CVector(0.0, 0.0, 0.0); // 0xc4a MovV
	return 2; // 0xc4b Return
	
Label_3148:
	var_87_cvector = var_88_cvector / var_88_cvector; // 0xc4c Div2
	return 2; // 0xc4d Return
}


func_2630()
{
	var_640_float = 0; var_641_float = 0; // 0xa46 PushV
	var_642_int = 8; // 0xa47 PushI
	var_643_int = 16; // 0xa48 PushI
	rand(var_641_float, var_642_int, var_643_int); // 0xa49 Func
	var_644_int = 10; // 0xa4b PushI
	SetTimer(var_644_int, var_641_float); // 0xa4c Func
	return 2; // 0xa4e Return
}


func_330(var_0_object, var_1_object, var_2_object, var_3_string, var_301_object, var_302_object)
{
	var_0_object = var_302_object; // 0x14b TMov
	var_1_object = var_301_object; // 0x14c TMov
	var_3_string = 0; // 0x14d TMovB
	var_307_int = 1; // 0x14e PushI
	if(var_307_int == 0) goto Label_398; // 0x14f JumpB
	var_308_bool = 0; var_309_object = Obj(); // 0x150 PushV
	var_309_object = var_1_object; // 0x151 MovT
	func_3348(var_309_object); // 0x152 NEW_2
	if(var_308_bool == 0) goto Label_371; // 0x154 JumpB
	var_316_object = Obj(); var_317_object = Obj(); // 0x155 PushV
	var_316_object = var_1_object; // 0x156 MovT
	var_317_object = var_0_object; // 0x157 MovT
	func_3245(); // 0x158 NEW_2
	var_320_object = Obj(); var_321_object = Obj(); // 0x15a PushV
	var_320_object = var_1_object; // 0x15b MovT
	var_321_object = var_0_object; // 0x15c MovT
	func_3326(); // 0x15d NEW_2
	var_324_string = ""; // 0x15f PushV
	var_324_string = "Neutral"; // 0x160 MovS
	func_428(var_302_object, var_324_string); // 0x161 NEW_2
	var_332_int = 521534; // 0x163 PushI
	SetMessage(var_332_int); // 0x164 TObjFunc
	ClearReplies(); // 0x166 TObjFunc
	var_333_int = 522289; // 0x168 PushI
	var_334_int = 23470; // 0x169 PushI
	var_335_int = 23444; // 0x16a PushI
	AddReply(var_333_int, var_334_int, var_335_int); // 0x16b TObjFunc
	var_336_int = 522291; // 0x16d PushI
	var_337_int = 23449; // 0x16e PushI
	var_338_int = 23446; // 0x16f PushI
	AddReply(var_336_int, var_337_int, var_338_int); // 0x170 TObjFunc
	goto Label_398; // 0x172 Jump
	
Label_398:
	var_339_bool = 0; // 0x18e PushV
	func_3227(var_339_bool); // 0x18f NEW_2
	if(var_339_bool == 0) goto Label_413; // 0x191 JumpB
	
Label_402:
	lshWaitForAnimEnd(); // 0x192 Func
	var_340_string = var_3_string; // 0x194 PushT
	if(var_340_string == 0) goto Label_407; // 0x195 JumpB
	goto Label_412; // 0x196 Jump
	
Label_412:
	goto Label_427; // 0x19c Jump
	
Label_427:
	return 0; // 0x1ab Return
	
Label_407:
	var_341_string = ""; // 0x197 PushV
	var_341_string = var_2_object; // 0x198 MovT
	func_3081(var_341_string); // 0x199 NEW_2
	goto Label_402; // 0x19b Jump
	
Label_413:
	var_342_string = "all"; // 0x19d PushS
	var_343_string = "idle"; // 0x19e PushS
	PlayAnimation(var_342_string, var_343_string); // 0x19f Func
	
Label_417:
	WaitForAnimEnd(); // 0x1a1 Func
	var_344_string = var_3_string; // 0x1a3 PushT
	if(var_344_string == 0) goto Label_422; // 0x1a4 JumpB
	goto Label_427; // 0x1a5 Jump
	
Label_422:
	var_345_string = "all"; // 0x1a6 PushS
	var_346_string = "idle"; // 0x1a7 PushS
	PlayAnimation(var_345_string, var_346_string); // 0x1a8 Func
	goto Label_417; // 0x1aa Jump
	
Label_371:
	var_347_string = ""; // 0x173 PushV
	var_347_string = "Neutral"; // 0x174 MovS
	func_428(var_302_object, var_347_string); // 0x175 NEW_2
	var_348_int = 521594; // 0x177 PushI
	SetMessage(var_348_int); // 0x178 TObjFunc
	ClearReplies(); // 0x17a TObjFunc
	var_349_bool = 0; var_350_object = Obj(); // 0x17c PushV
	var_350_object = var_1_object; // 0x17d MovT
	func_3430(var_350_object); // 0x17e NEW_2
	if(var_349_bool == 0) goto Label_390; // 0x180 JumpB
	var_355_int = 522347; // 0x181 PushI
	var_356_int = 23514; // 0x182 PushI
	var_357_int = 23510; // 0x183 PushI
	AddReply(var_355_int, var_356_int, var_357_int); // 0x184 TObjFunc
	
Label_390:
	var_358_int = 522350; // 0x186 PushI
	var_359_int = -1; // 0x187 PushI
	var_360_int = 23513; // 0x188 PushI
	AddReply(var_358_int, var_359_int, var_360_int); // 0x189 TObjFunc
	goto Label_398; // 0x18b Jump
}


func_3150(var_310_int, var_311_string)
{
	var_312_int = 0; var_313_int = 0; // 0xc4e PushV
	GetVariable(var_311_string, var_313_int); // 0xc4f Func
	var_310_int = var_313_int; // 0xc51 Mov
	return 2; // 0xc52 Return
}


func_2639()
{
	var_639_int = 10; // 0xa4f PushI
	KillTimer(var_639_int); // 0xa50 Func
	return 0; // 0xa52 Return
}


func_3406(var_413_bool)
{
	var_415_int = 0; var_416_string = ""; // 0xd4f PushV
	var_416_string = "b10q02Cutscene"; // 0xd50 MovS
	func_3150(var_415_int, var_416_string); // 0xd51 NEW_2
	var_417_int = 0; // 0xd53 PushI
	var_418_bool = var_415_int != var_417_int; // 0xd54 Neq
	if(var_418_bool == 0) goto Label_3416; // 0xd55 JumpB
	var_413_bool = 1; // 0xd56 MovB
	return 0; // 0xd57 Return
	
Label_3416:
	var_413_bool = 0; // 0xd58 MovB
	return 0; // 0xd59 Return
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_215_object, var_216_object)
{
	var_0_object = var_216_object; // 0x52 TMov
	var_1_object = var_215_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_221_int = 1; // 0x55 PushI
	if(var_221_int == 0) goto Label_109; // 0x56 JumpB
	var_222_string = ""; // 0x57 PushV
	var_222_string = "Neutral"; // 0x58 MovS
	func_139(var_216_object, var_222_string); // 0x59 NEW_2
	var_239_int = 530875; // 0x5b PushI
	SetMessage(var_239_int); // 0x5c TObjFunc
	ClearReplies(); // 0x5e TObjFunc
	var_240_int = 530876; // 0x60 PushI
	var_241_int = 32199; // 0x61 PushI
	var_242_int = 32195; // 0x62 PushI
	AddReply(var_240_int, var_241_int, var_242_int); // 0x63 TObjFunc
	var_243_int = 530877; // 0x65 PushI
	var_244_int = 32197; // 0x66 PushI
	var_245_int = 32196; // 0x67 PushI
	AddReply(var_243_int, var_244_int, var_245_int); // 0x68 TObjFunc
	goto Label_109; // 0x6a Jump
	
Label_109:
	var_246_bool = 0; // 0x6d PushV
	func_3227(var_246_bool); // 0x6e NEW_2
	if(var_246_bool == 0) goto Label_124; // 0x70 JumpB
	
Label_113:
	lshWaitForAnimEnd(); // 0x71 Func
	var_247_string = var_3_string; // 0x73 PushT
	if(var_247_string == 0) goto Label_118; // 0x74 JumpB
	goto Label_123; // 0x75 Jump
	
Label_123:
	goto Label_138; // 0x7b Jump
	
Label_138:
	return 0; // 0x8a Return
	
Label_118:
	var_248_string = ""; // 0x76 PushV
	var_248_string = var_2_object; // 0x77 MovT
	func_3081(var_248_string); // 0x78 NEW_2
	goto Label_113; // 0x7a Jump
	
Label_124:
	var_259_string = "all"; // 0x7c PushS
	var_260_string = "idle"; // 0x7d PushS
	PlayAnimation(var_259_string, var_260_string); // 0x7e Func
	
Label_128:
	WaitForAnimEnd(); // 0x80 Func
	var_261_string = var_3_string; // 0x82 PushT
	if(var_261_string == 0) goto Label_133; // 0x83 JumpB
	goto Label_138; // 0x84 Jump
	
Label_133:
	var_262_string = "all"; // 0x85 PushS
	var_263_string = "idle"; // 0x86 PushS
	PlayAnimation(var_262_string, var_263_string); // 0x87 Func
	goto Label_128; // 0x89 Jump
}


func_1362(var_2_object, var_529_string)
{
	var_530_bool = 0; // 0x553 PushV
	func_3227(var_530_bool); // 0x554 NEW_2
	var_531_bool = var_530_bool == 0; // 0x556 Not
	if(var_531_bool == 0) goto Label_1369; // 0x557 JumpB
	return 0; // 0x558 Return
	
Label_1369:
	var_532_bool = var_529_string == var_2_object; // 0x559 Eq
	if(var_532_bool == 0) goto Label_1372; // 0x55a JumpB
	return 0; // 0x55b Return
	
Label_1372:
	var_533_string = ""; var_534_bool = 0; // 0x55c PushV
	var_533_string = var_529_string; // 0x55d Mov
	var_535_string = ""; // 0x55e PushS
	var_536_bool = var_529_string == var_535_string; // 0x55f Eq
	if(var_536_bool == 0) goto Label_1379; // 0x560 JumpB
	var_534_bool = 0; // 0x561 MovB
	goto Label_1380; // 0x562 Jump
	
Label_1380:
	func_3097(var_533_string, var_534_bool); // 0x564 NEW_2
	var_2_object = var_529_string; // 0x566 TMov
	return 0; // 0x567 Return
	
Label_1379:
	var_534_bool = 1; // 0x563 MovB
}


func_3155(var_40_bool, var_41_string, var_42_string)
{
	var_43_object = Obj(); var_44_object = Obj(); // 0xc53 PushV
	FindActor(var_44_object, var_41_string); // 0xc54 Func
	var_45_bool = var_44_object == 0; // 0xc56 NullEq
	if(var_45_bool == 0) goto Label_3162; // 0xc57 JumpB
	var_40_bool = 0; // 0xc58 MovB
	return 2; // 0xc59 Return
	
Label_3162:
	Trigger(var_44_object, var_42_string); // 0xc5a Func
	var_40_bool = 1; // 0xc5c MovB
	return 2; // 0xc5d Return
}


func_3418(var_420_bool)
{
	var_422_int = 0; var_423_string = ""; // 0xd5b PushV
	var_423_string = "oob10Block1"; // 0xd5c MovS
	func_3150(var_422_int, var_423_string); // 0xd5d NEW_2
	var_424_int = 0; // 0xd5f PushI
	var_425_bool = var_422_int == var_424_int; // 0xd60 Eq
	if(var_425_bool == 0) goto Label_3428; // 0xd61 JumpB
	var_420_bool = 1; // 0xd62 MovB
	return 0; // 0xd63 Return
	
Label_3428:
	var_420_bool = 0; // 0xd64 MovB
	return 0; // 0xd65 Return
}


func_3167(var_69_float)
{
	var_70_float = 0; var_71_float = 0; // 0xc5f PushV
	GetGameTime(var_71_float); // 0xc60 Func
	var_69_float = var_71_float; // 0xc62 Mov
	return 2; // 0xc63 Return
}


func_3172(var_175_int)
{
	var_176_float = 0; var_177_float = 0; // 0xc64 PushV
	GetGameTime(var_177_float); // 0xc65 Func
	var_178_int = 1; // 0xc67 PushI
	var_179_int = 0; // 0xc68 PushV
	var_180_int = 24; // 0xc69 PushI
	var_179_int = var_177_float / var_177_float; // 0xc6a Div2
	var_175_int = var_178_int + var_179_int; // 0xc6b Add2
	return 2; // 0xc6c Return
}


func_3430(var_349_bool)
{
	var_351_int = 0; var_352_string = ""; // 0xd67 PushV
	var_352_string = "oob9Block2"; // 0xd68 MovS
	func_3150(var_351_int, var_352_string); // 0xd69 NEW_2
	var_353_int = 0; // 0xd6b PushI
	var_354_bool = var_351_int == var_353_int; // 0xd6c Eq
	if(var_354_bool == 0) goto Label_3440; // 0xd6d JumpB
	var_349_bool = 1; // 0xd6e MovB
	return 0; // 0xd6f Return
	
Label_3440:
	var_349_bool = 0; // 0xd70 MovB
	return 0; // 0xd71 Return
}


func_3181(var_513_int)
{
	var_514_float = 0; var_515_float = 0; // 0xc6d PushV
	GetGameTime(var_515_float); // 0xc6e Func
	var_516_int = 0; // 0xc70 PushV
	var_516_int = var_515_float; // 0xc71 Mov
	var_517_int = 24; // 0xc72 PushI
	var_513_int = var_516_int % var_517_int; // 0xc73 Mod2
	return 2; // 0xc74 Return
}


func_2926()
{
	var_266_bool = 0; var_267_bool = 0; // 0xb6e PushV
	CameraSwitchToNormal(); // 0xb6f Func
	var_268_bool = 0; // 0xb71 PushV
	func_3227(var_268_bool); // 0xb72 NEW_2
	if(var_268_bool == 0) goto Label_2934; // 0xb74 JumpB
	goto Label_2942; // 0xb75 Jump
	
Label_2942:
	return 2; // 0xb7e Return
	
Label_2934:
	var_269_string = "head"; // 0xb76 PushS
	HasAnimationTrack(var_267_bool, var_269_string); // 0xb77 Func
	var_270_bool = var_267_bool; // 0xb79 Push
	if(var_270_bool == 0) goto Label_2942; // 0xb7a JumpB
	var_271_string = "head"; // 0xb7b PushS
	UnlookAsync(var_271_string); // 0xb7c Func
}


func_1138(var_0_object, var_471_int, var_472_object)
{
	var_474_object = Obj(); var_475_bool = 0; var_476_int = 0; var_477_bool = 0; var_478_object = Obj(); var_479_bool = 0; var_480_int = 0; var_481_bool = 0; // 0x472 PushV
	var_0_object = var_472_object; // 0x473 TMov
	var_482_bool = 0; var_483_object = Obj(); var_484_float = 0; // 0x474 PushV
	var_483_object = var_472_object; // 0x475 Mov
	var_484_float = 70.0; // 0x476 MovF
	func_2858(var_483_object, var_484_float); // 0x477 NEW_2
	var_485_bool = var_482_bool == 0; // 0x479 Not
	if(var_485_bool == 0) goto Label_1149; // 0x47a JumpB
	var_471_int = -2; // 0x47b MovI
	return 8; // 0x47c Return
	
Label_1149:
	CreateDialog(var_478_object); // 0x47d Func
	var_486_int = 0; // 0x47f PushV
	func_3221(var_486_int); // 0x480 NEW_2
	SetNPCName(var_486_int); // 0x482 ObjFunc
	var_487_int = 0; // 0x484 PushV
	func_3219(var_487_int); // 0x485 NEW_2
	SetNPCDescription(var_487_int); // 0x487 ObjFunc
	var_488_string = ""; // 0x489 PushV
	func_3223(var_488_string); // 0x48a NEW_2
	SetPhoto(var_488_string); // 0x48c ObjFunc
	var_489_string = ""; // 0x48e PushV
	func_3225(var_489_string); // 0x48f NEW_2
	SetPhoto2(var_489_string); // 0x491 ObjFunc
	var_490_int = 0; // 0x493 PushV
	func_3527(var_490_int); // 0x494 NEW_2
	SetPlayerName(var_490_int); // 0x496 ObjFunc
	var_480_int = -1; // 0x498 MovI
	IsOverrideActive(var_479_bool); // 0x499 Func
	var_491_bool = var_479_bool; // 0x49b Push
	if(var_491_bool == 0) goto Label_1183; // 0x49c JumpB
	var_471_int = -2; // 0x49d MovI
	return 8; // 0x49e Return
	
Label_1183:
	DoDialog(var_478_object); // 0x49f Func
	var_492_bool = 0; var_493_object = Obj(); // 0x4a1 PushV
	var_494_object = Obj(); // 0x4a2 PushV
	func_3134(var_494_object); // 0x4a3 NEW_2
	var_493_object = var_494_object; // 0x4a4 Mov
	func_2943(var_492_bool, var_493_object); // 0x4a6 NEW_2
	var_495_object = Obj(); var_496_object = Obj(); // 0x4a8 PushV
	var_495_object = var_472_object; // 0x4a9 Mov
	var_496_object = var_478_object; // 0x4aa Mov
	TaskCall(5); // 0x4ab TaskCall
	func_1219(var_497_object, var_498_object, var_499_string, var_500_bool, var_495_object, var_496_object); // 0x4ac NEW_2
	TaskReturn(); // 0x4ad TaskReturn
	IsDialogEnd(var_481_bool); // 0x4af ObjFunc
	
Label_1201:
	var_580_bool = var_481_bool == 0; // 0x4b1 Not
	if(var_580_bool == 0) goto Label_1208; // 0x4b2 JumpB
	sync(); // 0x4b3 Func
	IsDialogEnd(var_481_bool); // 0x4b5 ObjFunc
	goto Label_1201; // 0x4b7 Jump
	
Label_1208:
	var_581_object = Obj(); // 0x4b8 PushV
	var_581_object = var_472_object; // 0x4b9 Mov
	func_2926(); // 0x4ba NEW_2
	StopDialog(var_478_object); // 0x4bc Func
	GetReturnValue(var_480_int); // 0x4be ObjFunc
	var_471_int = var_480_int; // 0x4c0 Mov
	return 8; // 0x4c1 Return
}


func_3442(var_438_bool)
{
	var_440_int = 0; var_441_string = ""; // 0xd73 PushV
	var_441_string = "b10q04KapellaGotoBlock"; // 0xd74 MovS
	func_3150(var_440_int, var_441_string); // 0xd75 NEW_2
	var_442_int = 0; // 0xd77 PushI
	var_443_bool = var_440_int != var_442_int; // 0xd78 Neq
	if(var_443_bool == 0) goto Label_3452; // 0xd79 JumpB
	var_438_bool = 1; // 0xd7a MovB
	return 0; // 0xd7b Return
	
Label_3452:
	var_438_bool = 0; // 0xd7c MovB
	return 0; // 0xd7d Return
}


func_3189(var_274_bool, var_275_int)
{
	var_276_int = 0; // 0xc76 PushV
	func_3172(var_276_int); // 0xc77 NEW_2
	var_274_bool = var_276_int == var_275_int; // 0xc79 Eq2
	return 0; // 0xc7a Return
}


func_1912(var_2_object, var_396_string)
{
	var_397_bool = 0; // 0x779 PushV
	func_3227(var_397_bool); // 0x77a NEW_2
	var_398_bool = var_397_bool == 0; // 0x77c Not
	if(var_398_bool == 0) goto Label_1919; // 0x77d JumpB
	return 0; // 0x77e Return
	
Label_1919:
	var_399_bool = var_396_string == var_2_object; // 0x77f Eq
	if(var_399_bool == 0) goto Label_1922; // 0x780 JumpB
	return 0; // 0x781 Return
	
Label_1922:
	var_400_string = ""; var_401_bool = 0; // 0x782 PushV
	var_400_string = var_396_string; // 0x783 Mov
	var_402_string = ""; // 0x784 PushS
	var_403_bool = var_396_string == var_402_string; // 0x785 Eq
	if(var_403_bool == 0) goto Label_1929; // 0x786 JumpB
	var_401_bool = 0; // 0x787 MovB
	goto Label_1930; // 0x788 Jump
	
Label_1930:
	func_3097(var_400_string, var_401_bool); // 0x78a NEW_2
	var_2_object = var_396_string; // 0x78c TMov
	return 0; // 0x78d Return
	
Label_1929:
	var_401_bool = 1; // 0x789 MovB
}


func_3195(var_50_string, var_51_int)
{
	var_52_string = ""; var_53_string = ""; // 0xc7b PushV
	var_53_string = "idle"; // 0xc7c MovS
	var_54_int = var_51_int; // 0xc7d Push
	if(var_54_int == 0) goto Label_3200; // 0xc7e JumpB
	var_53_string = var_53_string + var_51_int; // 0xc7f Add2
	
Label_3200:
	var_50_string = var_53_string; // 0xc80 Mov
	return 2; // 0xc81 Return
}


func_3454(var_444_bool)
{
	var_446_int = 0; var_447_string = ""; // 0xd7f PushV
	var_447_string = "oob10Block2"; // 0xd80 MovS
	func_3150(var_446_int, var_447_string); // 0xd81 NEW_2
	var_448_int = 0; // 0xd83 PushI
	var_449_bool = var_446_int == var_448_int; // 0xd84 Eq
	if(var_449_bool == 0) goto Label_3464; // 0xd85 JumpB
	var_444_bool = 1; // 0xd86 MovB
	return 0; // 0xd87 Return
	
Label_3464:
	var_444_bool = 0; // 0xd88 MovB
	return 0; // 0xd89 Return
}


func_2943(var_120_bool, var_121_object)
{
	var_125_int = 0; var_126_int = 0; var_127_int = 0; var_128_int = 0; // 0xb7f PushV
	var_129_string = "voice_common"; // 0xb80 PushS
	GetVariable(var_129_string, var_127_int); // 0xb81 Func
	var_130_int = var_127_int; // 0xb83 Push
	if(var_130_int == 0) goto Label_2981; // 0xb84 JumpB
	var_131_bool = 0; var_132_object = Obj(); // 0xb85 PushV
	var_132_object = var_121_object; // 0xb86 Mov
	func_3001(var_132_object); // 0xb87 NEW_2
	var_161_bool = var_131_bool == 0; // 0xb89 Not
	if(var_161_bool == 0) goto Label_2963; // 0xb8a JumpB
	var_162_bool = 0; var_163_object = Obj(); // 0xb8b PushV
	var_163_object = var_121_object; // 0xb8c Mov
	func_3038(var_163_object); // 0xb8d NEW_2
	var_197_bool = var_162_bool == 0; // 0xb8f Not
	if(var_197_bool == 0) goto Label_2963; // 0xb90 JumpB
	var_120_bool = 0; // 0xb91 MovB
	return 4; // 0xb92 Return
	
Label_2963:
	var_198_int = 2; // 0xb93 PushI
	irand(var_128_int, var_198_int); // 0xb94 Func
	var_199_int = var_128_int; // 0xb96 Push
	if(var_199_int == 0) goto Label_2976; // 0xb97 JumpB
	var_200_string = "voice_common"; // 0xb98 PushS
	var_201_int = 1; // 0xb99 PushI
	var_202_int = var_127_int + var_201_int; // 0xb9a Add
	var_203_int = 3; // 0xb9b PushI
	var_204_int = var_202_int / var_203_int; // 0xb9c Mod
	SetVariable(var_200_string, var_204_int); // 0xb9d Func
	goto Label_2980; // 0xb9f Jump
	
Label_2980:
	goto Label_2999; // 0xba4 Jump
	
Label_2999:
	var_120_bool = 1; // 0xbb7 MovB
	return 4; // 0xbb8 Return
	
Label_2976:
	var_205_string = "voice_common"; // 0xba0 PushS
	var_206_int = 0; // 0xba1 PushI
	SetVariable(var_205_string, var_206_int); // 0xba2 Func
	
Label_2981:
	var_207_bool = 0; var_208_object = Obj(); // 0xba5 PushV
	var_208_object = var_121_object; // 0xba6 Mov
	func_3038(var_208_object); // 0xba7 NEW_2
	var_209_bool = var_207_bool == 0; // 0xba9 Not
	if(var_209_bool == 0) goto Label_2995; // 0xbaa JumpB
	var_210_bool = 0; var_211_object = Obj(); // 0xbab PushV
	var_211_object = var_121_object; // 0xbac Mov
	func_3001(var_211_object); // 0xbad NEW_2
	var_212_bool = var_210_bool == 0; // 0xbaf Not
	if(var_212_bool == 0) goto Label_2995; // 0xbb0 JumpB
	var_120_bool = 0; // 0xbb1 MovB
	return 4; // 0xbb2 Return
	
Label_2995:
	var_213_string = "voice_common"; // 0xbb3 PushS
	var_214_int = 1; // 0xbb4 PushI
	SetVariable(var_213_string, var_214_int); // 0xbb5 Func
}


func_3202(var_44_int)
{
	var_45_int = 0; var_46_bool = 0; var_47_int = 0; var_48_bool = 0; // 0xc82 PushV
	var_47_int = 0; // 0xc83 MovI
	
Label_3204:
	var_49_string = "all"; // 0xc84 PushS
	var_50_string = ""; var_51_int = 0; // 0xc85 PushV
	var_51_int = var_47_int; // 0xc86 Mov
	func_3195(var_50_string, var_51_int); // 0xc87 NEW_2
	HasAnimation(var_48_bool, var_49_string, var_50_string); // 0xc89 Func
	var_55_bool = var_48_bool == 0; // 0xc8b Not
	if(var_55_bool == 0) goto Label_3214; // 0xc8c JumpB
	goto Label_3217; // 0xc8d Jump
	
Label_3217:
	var_44_int = var_47_int; // 0xc91 Mov
	return 4; // 0xc92 Return
	
Label_3214:
	var_56_int = 1; // 0xc8e PushI
	var_47_int = var_47_int + var_56_int; // 0xc8f Add2
	goto Label_3204; // 0xc90 Jump
}


func_3466(var_511_bool)
{
	var_513_int = 0; // 0xd8b PushV
	func_3181(var_513_int); // 0xd8c NEW_2
	var_518_int = 19; // 0xd8e PushI
	var_519_bool = var_513_int >= var_518_int; // 0xd8f GE
	if(var_519_bool == 0) goto Label_3475; // 0xd90 JumpB
	var_511_bool = 1; // 0xd91 MovB
	return 0; // 0xd92 Return
	
Label_3475:
	var_511_bool = 0; // 0xd93 MovB
	return 0; // 0xd94 Return
}


func_139(var_2_object, var_222_string)
{
	var_223_bool = 0; // 0x8c PushV
	func_3227(var_223_bool); // 0x8d NEW_2
	var_224_bool = var_223_bool == 0; // 0x8f Not
	if(var_224_bool == 0) goto Label_146; // 0x90 JumpB
	return 0; // 0x91 Return
	
Label_146:
	var_225_bool = var_222_string == var_2_object; // 0x92 Eq
	if(var_225_bool == 0) goto Label_149; // 0x93 JumpB
	return 0; // 0x94 Return
	
Label_149:
	var_226_string = ""; var_227_bool = 0; // 0x95 PushV
	var_226_string = var_222_string; // 0x96 Mov
	var_228_string = ""; // 0x97 PushS
	var_229_bool = var_222_string == var_228_string; // 0x98 Eq
	if(var_229_bool == 0) goto Label_156; // 0x99 JumpB
	var_227_bool = 0; // 0x9a MovB
	goto Label_157; // 0x9b Jump
	
Label_157:
	func_3097(var_226_string, var_227_bool); // 0x9d NEW_2
	var_2_object = var_222_string; // 0x9f TMov
	return 0; // 0xa0 Return
	
Label_156:
	var_227_bool = 1; // 0x9c MovB
}


func_2448(var_0_object, var_1_object, var_2_object, var_3_string, var_606_object, var_607_object)
{
	var_0_object = var_607_object; // 0x991 TMov
	var_1_object = var_606_object; // 0x992 TMov
	var_3_string = 0; // 0x993 TMovB
	var_612_int = 1; // 0x994 PushI
	if(var_612_int == 0) goto Label_2476; // 0x995 JumpB
	var_613_string = ""; // 0x996 PushV
	var_613_string = "Neutral"; // 0x997 MovS
	func_2506(var_607_object, var_613_string); // 0x998 NEW_2
	var_621_int = 540554; // 0x99a PushI
	SetMessage(var_621_int); // 0x99b TObjFunc
	ClearReplies(); // 0x99d TObjFunc
	var_622_int = 540555; // 0x99f PushI
	var_623_int = -1; // 0x9a0 PushI
	var_624_int = 42564; // 0x9a1 PushI
	AddReply(var_622_int, var_623_int, var_624_int); // 0x9a2 TObjFunc
	var_625_int = 540794; // 0x9a4 PushI
	var_626_int = -1; // 0x9a5 PushI
	var_627_int = 42843; // 0x9a6 PushI
	AddReply(var_625_int, var_626_int, var_627_int); // 0x9a7 TObjFunc
	goto Label_2476; // 0x9a9 Jump
	
Label_2476:
	var_628_bool = 0; // 0x9ac PushV
	func_3227(var_628_bool); // 0x9ad NEW_2
	if(var_628_bool == 0) goto Label_2491; // 0x9af JumpB
	
Label_2480:
	lshWaitForAnimEnd(); // 0x9b0 Func
	var_629_string = var_3_string; // 0x9b2 PushT
	if(var_629_string == 0) goto Label_2485; // 0x9b3 JumpB
	goto Label_2490; // 0x9b4 Jump
	
Label_2490:
	goto Label_2505; // 0x9ba Jump
	
Label_2505:
	return 0; // 0x9c9 Return
	
Label_2485:
	var_630_string = ""; // 0x9b5 PushV
	var_630_string = var_2_object; // 0x9b6 MovT
	func_3081(var_630_string); // 0x9b7 NEW_2
	goto Label_2480; // 0x9b9 Jump
	
Label_2491:
	var_631_string = "all"; // 0x9bb PushS
	var_632_string = "idle"; // 0x9bc PushS
	PlayAnimation(var_631_string, var_632_string); // 0x9bd Func
	
Label_2495:
	WaitForAnimEnd(); // 0x9bf Func
	var_633_string = var_3_string; // 0x9c1 PushT
	if(var_633_string == 0) goto Label_2500; // 0x9c2 JumpB
	goto Label_2505; // 0x9c3 Jump
	
Label_2500:
	var_634_string = "all"; // 0x9c4 PushS
	var_635_string = "idle"; // 0x9c5 PushS
	PlayAnimation(var_634_string, var_635_string); // 0x9c6 Func
	goto Label_2495; // 0x9c8 Jump
}


func_3219(var_108_int)
{
	var_108_int = 515532; // 0xc93 MovI
	return 0; // 0xc94 Return
}


func_3221(var_107_int)
{
	var_107_int = 514840; // 0xc95 MovI
	return 0; // 0xc96 Return
}


func_3477(var_58_object)
{
	var_59_object = Obj(); var_60_object = Obj(); var_61_object = Obj(); var_62_object = Obj(); // 0xd95 PushV
	GetMainOutdoorScene(var_61_object); // 0xd96 Func
	var_63_bool = var_61_object == 0; // 0xd98 NullEq
	if(var_63_bool == 0) goto Label_3488; // 0xd99 JumpB
	var_64_string = "Can't find main outdoor scene"; // 0xd9a PushS
	Trace(var_64_string); // 0xd9b Func
	var_62_object = 0; // 0xd9d SetNull
	var_58_object = var_62_object; // 0xd9e Mov
	return 4; // 0xd9f Return
	
Label_3488:
	GetMap(var_62_object); // 0xda0 ObjFunc
	var_58_object = var_62_object; // 0xda2 Mov
	return 4; // 0xda3 Return
}


func_3223(var_109_string)
{
	var_109_string = "ui/NPC_Block.png"; // 0xc97 MovS
	return 0; // 0xc98 Return
}


func_3225(var_110_string)
{
	var_110_string = "ui/NPC_Block_b.png"; // 0xc99 MovS
	return 0; // 0xc9a Return
}


func_3227(var_102_bool)
{
	var_102_bool = 1; // 0xc9b MovB
	return 0; // 0xc9c Return
}


func_3229()
{
	var_52_object = Obj(); var_53_string = ""; var_54_float = 0; // 0xc9e PushV
	var_55_object = Obj(); // 0xc9f PushV
	func_3477(var_55_object); // 0xca0 NEW_2
	var_52_object = var_55_object; // 0xca1 Mov
	var_53_string = "pt_map_starshina"; // 0xca3 MovS
	var_54_float = 2; // 0xca4 MovI
	func_3494(var_52_object, var_53_string, var_54_float); // 0xca5 NEW_2
	var_75_object = Obj(); // 0xca7 PushV
	func_3477(var_75_object); // 0xca8 NEW_2
	ShowMap(var_75_object); // 0xcaa ObjFunc
	return 0; // 0xcac Return
}


func_3494(var_74_object, var_75_string, var_76_float)
{
	var_78_cvector = CVector(0,0,0); var_79_cvector = CVector(0,0,0); var_80_object = Obj(); var_81_bool = 0; var_82_cvector = CVector(0,0,0); var_83_cvector = CVector(0,0,0); var_84_object = Obj(); var_85_bool = 0; // 0xda6 PushV
	GetMainOutdoorScene(var_84_object); // 0xda7 Func
	var_86_bool = var_84_object == 0; // 0xda9 NullEq
	if(var_86_bool == 0) goto Label_3503; // 0xdaa JumpB
	var_87_string = "Can't find main outdoor scene"; // 0xdab PushS
	Trace(var_87_string); // 0xdac Func
	return 8; // 0xdae Return
	
Label_3503:
	GetLocator(var_75_string, var_85_bool, var_82_cvector, var_83_cvector); // 0xdaf ObjFunc
	var_88_bool = var_85_bool == 0; // 0xdb1 Not
	if(var_88_bool == 0) goto Label_3513; // 0xdb2 JumpB
	var_89_string = "Warning: outdoor scene locator "; // 0xdb3 PushS
	var_90_int = var_89_string + var_75_string; // 0xdb4 Add
	var_91_string = " doesnt exist"; // 0xdb5 PushS
	var_92_int = var_90_int + var_91_string; // 0xdb6 Add
	Trace(var_92_int); // 0xdb7 Func
	
Label_3513:
	GetMap(var_74_object); // 0xdb9 ObjFunc
	var_93_bool = var_74_object == 0; // 0xdbb NullEq
	if(var_93_bool == 0) goto Label_3521; // 0xdbc JumpB
	var_94_string = "Can't find map"; // 0xdbd PushS
	Trace(var_94_string); // 0xdbe Func
	return 8; // 0xdc0 Return
	
Label_3521:
	var_95_float = GetByIndex(var_82_cvector, 0); // 0xdc1 PushE
	var_96_float = GetByIndex(var_82_cvector, 2); // 0xdc2 PushE
	SetMapParams(var_95_float, var_96_float, var_76_float); // 0xdc3 ObjFunc
	return 8; // 0xdc5 Return
}


func_1706(var_0_object, var_365_int, var_366_object)
{
	var_368_object = Obj(); var_369_bool = 0; var_370_int = 0; var_371_bool = 0; var_372_object = Obj(); var_373_bool = 0; var_374_int = 0; var_375_bool = 0; // 0x6aa PushV
	var_0_object = var_366_object; // 0x6ab TMov
	var_376_bool = 0; var_377_object = Obj(); var_378_float = 0; // 0x6ac PushV
	var_377_object = var_366_object; // 0x6ad Mov
	var_378_float = 70.0; // 0x6ae MovF
	func_2858(var_377_object, var_378_float); // 0x6af NEW_2
	var_379_bool = var_376_bool == 0; // 0x6b1 Not
	if(var_379_bool == 0) goto Label_1717; // 0x6b2 JumpB
	var_365_int = -2; // 0x6b3 MovI
	return 8; // 0x6b4 Return
	
Label_1717:
	CreateDialog(var_372_object); // 0x6b5 Func
	var_380_int = 0; // 0x6b7 PushV
	func_3221(var_380_int); // 0x6b8 NEW_2
	SetNPCName(var_380_int); // 0x6ba ObjFunc
	var_381_int = 0; // 0x6bc PushV
	func_3219(var_381_int); // 0x6bd NEW_2
	SetNPCDescription(var_381_int); // 0x6bf ObjFunc
	var_382_string = ""; // 0x6c1 PushV
	func_3223(var_382_string); // 0x6c2 NEW_2
	SetPhoto(var_382_string); // 0x6c4 ObjFunc
	var_383_string = ""; // 0x6c6 PushV
	func_3225(var_383_string); // 0x6c7 NEW_2
	SetPhoto2(var_383_string); // 0x6c9 ObjFunc
	var_384_int = 0; // 0x6cb PushV
	func_3527(var_384_int); // 0x6cc NEW_2
	SetPlayerName(var_384_int); // 0x6ce ObjFunc
	var_374_int = -1; // 0x6d0 MovI
	IsOverrideActive(var_373_bool); // 0x6d1 Func
	var_385_bool = var_373_bool; // 0x6d3 Push
	if(var_385_bool == 0) goto Label_1751; // 0x6d4 JumpB
	var_365_int = -2; // 0x6d5 MovI
	return 8; // 0x6d6 Return
	
Label_1751:
	DoDialog(var_372_object); // 0x6d7 Func
	var_386_bool = 0; var_387_object = Obj(); // 0x6d9 PushV
	var_388_object = Obj(); // 0x6da PushV
	func_3134(var_388_object); // 0x6db NEW_2
	var_387_object = var_388_object; // 0x6dc Mov
	func_2943(var_386_bool, var_387_object); // 0x6de NEW_2
	var_389_object = Obj(); var_390_object = Obj(); // 0x6e0 PushV
	var_389_object = var_366_object; // 0x6e1 Mov
	var_390_object = var_372_object; // 0x6e2 Mov
	TaskCall(7); // 0x6e3 TaskCall
	func_1787(var_391_object, var_392_object, var_393_string, var_394_bool, var_389_object, var_390_object); // 0x6e4 NEW_2
	TaskReturn(); // 0x6e5 TaskReturn
	IsDialogEnd(var_375_bool); // 0x6e7 ObjFunc
	
Label_1769:
	var_467_bool = var_375_bool == 0; // 0x6e9 Not
	if(var_467_bool == 0) goto Label_1776; // 0x6ea JumpB
	sync(); // 0x6eb Func
	IsDialogEnd(var_375_bool); // 0x6ed ObjFunc
	goto Label_1769; // 0x6ef Jump
	
Label_1776:
	var_468_object = Obj(); // 0x6f0 PushV
	var_468_object = var_366_object; // 0x6f1 Mov
	func_2926(); // 0x6f2 NEW_2
	StopDialog(var_372_object); // 0x6f4 Func
	GetReturnValue(var_374_int); // 0x6f6 ObjFunc
	var_365_int = var_374_int; // 0x6f8 Mov
	return 8; // 0x6f9 Return
}


func_428(var_2_object, var_324_string)
{
	var_325_bool = 0; // 0x1ad PushV
	func_3227(var_325_bool); // 0x1ae NEW_2
	var_326_bool = var_325_bool == 0; // 0x1b0 Not
	if(var_326_bool == 0) goto Label_435; // 0x1b1 JumpB
	return 0; // 0x1b2 Return
	
Label_435:
	var_327_bool = var_324_string == var_2_object; // 0x1b3 Eq
	if(var_327_bool == 0) goto Label_438; // 0x1b4 JumpB
	return 0; // 0x1b5 Return
	
Label_438:
	var_328_string = ""; var_329_bool = 0; // 0x1b6 PushV
	var_328_string = var_324_string; // 0x1b7 Mov
	var_330_string = ""; // 0x1b8 PushS
	var_331_bool = var_324_string == var_330_string; // 0x1b9 Eq
	if(var_331_bool == 0) goto Label_445; // 0x1ba JumpB
	var_329_bool = 0; // 0x1bb MovB
	goto Label_446; // 0x1bc Jump
	
Label_446:
	func_3097(var_328_string, var_329_bool); // 0x1be NEW_2
	var_2_object = var_324_string; // 0x1c0 TMov
	return 0; // 0x1c1 Return
	
Label_445:
	var_329_bool = 1; // 0x1bd MovB
}


func_3245()
{
	var_318_string = "oob9Block1"; // 0xcae PushS
	var_319_int = 1; // 0xcaf PushI
	SetVariable(var_318_string, var_319_int); // 0xcb0 Func
	return 0; // 0xcb2 Return
}


func_3251()
{
	var_523_string = "oob12Block1"; // 0xcb4 PushS
	var_524_int = 1; // 0xcb5 PushI
	SetVariable(var_523_string, var_524_int); // 0xcb6 Func
	return 0; // 0xcb8 Return
}


func_3257()
{
	var_527_string = "b12q01BlockVisit"; // 0xcba PushS
	var_528_int = 1; // 0xcbb PushI
	SetVariable(var_527_string, var_528_int); // 0xcbc Func
	return 0; // 0xcbe Return
}


func_3001(var_131_bool)
{
	var_133_string = ""; var_134_int = 0; var_135_bool = 0; var_136_int = 0; var_137_string = ""; var_138_string = ""; var_139_int = 0; var_140_bool = 0; var_141_int = 0; var_142_string = ""; // 0xbb9 PushV
	var_138_string = "c"; // 0xbba MovS
	var_139_int = 0; // 0xbbb MovI
	
Label_3004:
	var_143_int = 1; // 0xbbc PushI
	if(var_143_int == 0) goto Label_3017; // 0xbbd JumpB
	var_144_int = 1; // 0xbbe PushI
	var_145_int = var_139_int + var_144_int; // 0xbbf Add
	var_146_int = var_138_string + var_145_int; // 0xbc0 Add
	HasProperty(var_146_int, var_140_bool); // 0xbc1 ObjFunc
	var_147_bool = var_140_bool == 0; // 0xbc3 Not
	if(var_147_bool == 0) goto Label_3014; // 0xbc4 JumpB
	goto Label_3017; // 0xbc5 Jump
	
Label_3017:
	var_148_bool = var_139_int == 0; // 0xbc9 Not
	if(var_148_bool == 0) goto Label_3021; // 0xbca JumpB
	var_131_bool = 0; // 0xbcb MovB
	return 10; // 0xbcc Return
	
Label_3021:
	var_141_int = 0; // 0xbcd MovI
	var_149_int = 1; // 0xbce PushI
	var_150_bool = var_139_int > var_149_int; // 0xbcf GT
	if(var_150_bool == 0) goto Label_3027; // 0xbd0 JumpB
	irand(var_141_int, var_139_int); // 0xbd1 Func
	
Label_3027:
	var_151_int = 1; // 0xbd3 PushI
	var_152_int = var_141_int + var_151_int; // 0xbd4 Add
	var_153_int = var_138_string + var_152_int; // 0xbd5 Add
	GetProperty(var_153_int, var_142_string); // 0xbd6 ObjFunc
	var_154_bool = 0; var_155_string = ""; // 0xbd8 PushV
	var_155_string = var_142_string; // 0xbd9 Mov
	func_3112(var_154_bool, var_155_string); // 0xbda NEW_2
	var_131_bool = var_154_bool; // 0xbdb Mov
	return 10; // 0xbdd Return
	
Label_3014:
	var_160_int = 1; // 0xbc6 PushI
	var_139_int = var_139_int + var_160_int; // 0xbc7 Add2
	goto Label_3004; // 0xbc8 Jump
}


func_2750()
{
	var_30_int = 0; var_31_int = 0; var_32_bool = 0; var_33_int = 0; var_34_int = 0; var_35_bool = 0; var_36_int = 0; var_37_int = 0; var_38_bool = 0; var_39_int = 0; var_40_int = 0; var_41_bool = 0; // 0xabe PushV
	WaitForAnimEnd(); // 0xabf Func
	var_42_bool = 0; // 0xac1 PushV
	func_2853(var_42_bool); // 0xac2 NEW_2
	var_43_bool = var_42_bool == 0; // 0xac4 Not
	if(var_43_bool == 0) goto Label_2759; // 0xac5 JumpB
	return 12; // 0xac6 Return
	
Label_2759:
	var_44_int = 0; // 0xac7 PushV
	func_3202(var_44_int); // 0xac8 NEW_2
	var_36_int = var_44_int; // 0xac9 Mov
	var_37_int = 0; // 0xacb MovI
	
Label_2764:
	var_57_bool = 0; // 0xacc PushV
	var_57_bool = 0; // 0xacd MovB
	var_58_int = 5; // 0xace PushI
	var_59_bool = var_37_int < var_58_int; // 0xacf LT
	if(var_59_bool == 0) goto Label_2774; // 0xad0 JumpB
	var_60_bool = 0; // 0xad1 PushV
	func_2853(var_60_bool); // 0xad2 NEW_2
	if(var_60_bool == 0) goto Label_2774; // 0xad4 JumpB
	var_57_bool = 1; // 0xad5 MovB
	
Label_2774:
	if(var_57_bool == 0) goto Label_2816; // 0xad6 JumpB
	var_61_bool = var_36_int == 0; // 0xad7 Not
	if(var_61_bool == 0) goto Label_2784; // 0xad8 JumpB
	var_62_int = 3; // 0xad9 PushI
	Sleep(var_62_int, var_38_bool); // 0xada Func
	var_63_bool = var_38_bool == 0; // 0xadc Not
	if(var_63_bool == 0) goto Label_2783; // 0xadd JumpB
	goto Label_2816; // 0xade Jump
	
Label_2816:
	ResetAAS(); // 0xb00 Func
	return 12; // 0xb02 Return
	
Label_2783:
	goto Label_2805; // 0xadf Jump
	
Label_2805:
	var_64_bool = 0; // 0xaf5 PushV
	func_2819(var_64_bool); // 0xaf6 NEW_2
	var_65_bool = var_64_bool == 0; // 0xaf8 Not
	if(var_65_bool == 0) goto Label_2811; // 0xaf9 JumpB
	goto Label_2816; // 0xafa Jump
	
Label_2811:
	ResetAAS(); // 0xafb Func
	var_66_int = 1; // 0xafd PushI
	var_37_int = var_37_int + var_66_int; // 0xafe Add2
	goto Label_2764; // 0xaff Jump
	
Label_2784:
	irand(var_39_int, var_36_int); // 0xae0 Func
	var_67_int = 5; // 0xae2 PushI
	irand(var_40_int, var_67_int); // 0xae3 Func
	var_68_int = 0; // 0xae5 PushI
	var_69_bool = var_40_int != var_68_int; // 0xae6 Neq
	if(var_69_bool == 0) goto Label_2793; // 0xae7 JumpB
	var_39_int = 0; // 0xae8 MovI
	
Label_2793:
	var_70_string = "all"; // 0xae9 PushS
	var_71_string = ""; var_72_int = 0; // 0xaea PushV
	var_72_int = var_39_int; // 0xaeb Mov
	func_3195(var_71_string, var_72_int); // 0xaec NEW_2
	PlayAnimation(var_70_string, var_71_string); // 0xaee Func
	WaitForAnimEnd(var_41_bool); // 0xaf0 Func
	var_73_bool = var_41_bool == 0; // 0xaf2 Not
	if(var_73_bool == 0) goto Label_2805; // 0xaf3 JumpB
	goto Label_2816; // 0xaf4 Jump
}


func_3263()
{
	var_34_string = "oob12Block2"; // 0xcc0 PushS
	var_35_int = 1; // 0xcc1 PushI
	SetVariable(var_34_string, var_35_int); // 0xcc2 Func
	return 0; // 0xcc4 Return
}


func_1219(var_0_object, var_1_object, var_2_object, var_3_string, var_495_object, var_496_object)
{
	var_0_object = var_496_object; // 0x4c4 TMov
	var_1_object = var_495_object; // 0x4c5 TMov
	var_3_string = 0; // 0x4c6 TMovB
	var_501_int = 1; // 0x4c7 PushI
	if(var_501_int == 0) goto Label_1332; // 0x4c8 JumpB
	var_502_bool = 0; // 0x4c9 PushV
	var_502_bool = 0; // 0x4ca MovB
	var_503_bool = 0; var_504_object = Obj(); // 0x4cb PushV
	var_504_object = var_1_object; // 0x4cc MovT
	func_3360(var_504_object); // 0x4cd NEW_2
	if(var_503_bool == 0) goto Label_1239; // 0x4cf JumpB
	var_509_bool = 0; var_510_object = Obj(); // 0x4d0 PushV
	var_510_object = var_1_object; // 0x4d1 MovT
	func_3384(var_509_bool, var_510_object); // 0x4d2 NEW_2
	var_520_bool = var_509_bool == 0; // 0x4d4 Not
	if(var_520_bool == 0) goto Label_1239; // 0x4d5 JumpB
	var_502_bool = 1; // 0x4d6 MovB
	
Label_1239:
	if(var_502_bool == 0) goto Label_1270; // 0x4d7 JumpB
	var_521_object = Obj(); var_522_object = Obj(); // 0x4d8 PushV
	var_521_object = var_1_object; // 0x4d9 MovT
	var_522_object = var_0_object; // 0x4da MovT
	func_3251(); // 0x4db NEW_2
	var_525_object = Obj(); var_526_object = Obj(); // 0x4dd PushV
	var_525_object = var_1_object; // 0x4de MovT
	var_526_object = var_0_object; // 0x4df MovT
	func_3257(); // 0x4e0 NEW_2
	var_529_string = ""; // 0x4e2 PushV
	var_529_string = "Neutral"; // 0x4e3 MovS
	func_1362(var_496_object, var_529_string); // 0x4e4 NEW_2
	var_537_int = 522123; // 0x4e6 PushI
	SetMessage(var_537_int); // 0x4e7 TObjFunc
	ClearReplies(); // 0x4e9 TObjFunc
	var_538_int = 522124; // 0x4eb PushI
	var_539_int = 24011; // 0x4ec PushI
	var_540_int = 23291; // 0x4ed PushI
	AddReply(var_538_int, var_539_int, var_540_int); // 0x4ee TObjFunc
	var_541_int = 540112; // 0x4f0 PushI
	var_542_int = -1; // 0x4f1 PushI
	var_543_int = 42079; // 0x4f2 PushI
	AddReply(var_541_int, var_542_int, var_543_int); // 0x4f3 TObjFunc
	goto Label_1332; // 0x4f5 Jump
	
Label_1332:
	var_544_bool = 0; // 0x534 PushV
	func_3227(var_544_bool); // 0x535 NEW_2
	if(var_544_bool == 0) goto Label_1347; // 0x537 JumpB
	
Label_1336:
	lshWaitForAnimEnd(); // 0x538 Func
	var_545_string = var_3_string; // 0x53a PushT
	if(var_545_string == 0) goto Label_1341; // 0x53b JumpB
	goto Label_1346; // 0x53c Jump
	
Label_1346:
	goto Label_1361; // 0x542 Jump
	
Label_1361:
	return 0; // 0x551 Return
	
Label_1341:
	var_546_string = ""; // 0x53d PushV
	var_546_string = var_2_object; // 0x53e MovT
	func_3081(var_546_string); // 0x53f NEW_2
	goto Label_1336; // 0x541 Jump
	
Label_1347:
	var_547_string = "all"; // 0x543 PushS
	var_548_string = "idle"; // 0x544 PushS
	PlayAnimation(var_547_string, var_548_string); // 0x545 Func
	
Label_1351:
	WaitForAnimEnd(); // 0x547 Func
	var_549_string = var_3_string; // 0x549 PushT
	if(var_549_string == 0) goto Label_1356; // 0x54a JumpB
	goto Label_1361; // 0x54b Jump
	
Label_1356:
	var_550_string = "all"; // 0x54c PushS
	var_551_string = "idle"; // 0x54d PushS
	PlayAnimation(var_550_string, var_551_string); // 0x54e Func
	goto Label_1351; // 0x550 Jump
	
Label_1270:
	var_552_bool = 0; var_553_object = Obj(); // 0x4f6 PushV
	var_553_object = var_1_object; // 0x4f7 MovT
	func_3384(var_552_bool, var_553_object); // 0x4f8 NEW_2
	if(var_552_bool == 0) goto Label_1300; // 0x4fa JumpB
	var_554_object = Obj(); var_555_object = Obj(); // 0x4fb PushV
	var_554_object = var_1_object; // 0x4fc MovT
	var_555_object = var_0_object; // 0x4fd MovT
	func_3257(); // 0x4fe NEW_2
	var_556_string = ""; // 0x500 PushV
	var_556_string = "Neutral"; // 0x501 MovS
	func_1362(var_496_object, var_556_string); // 0x502 NEW_2
	var_557_int = 522127; // 0x504 PushI
	SetMessage(var_557_int); // 0x505 TObjFunc
	ClearReplies(); // 0x507 TObjFunc
	var_558_int = 522128; // 0x509 PushI
	var_559_int = -1; // 0x50a PushI
	var_560_int = 23295; // 0x50b PushI
	AddReply(var_558_int, var_559_int, var_560_int); // 0x50c TObjFunc
	var_561_int = 522844; // 0x50e PushI
	var_562_int = -1; // 0x50f PushI
	var_563_int = 24028; // 0x510 PushI
	AddReply(var_561_int, var_562_int, var_563_int); // 0x511 TObjFunc
	goto Label_1332; // 0x513 Jump
	
Label_1300:
	var_564_object = Obj(); var_565_object = Obj(); // 0x514 PushV
	var_564_object = var_1_object; // 0x515 MovT
	var_565_object = var_0_object; // 0x516 MovT
	func_3257(); // 0x517 NEW_2
	var_566_string = ""; // 0x519 PushV
	var_566_string = "Neutral"; // 0x51a MovS
	func_1362(var_496_object, var_566_string); // 0x51b NEW_2
	var_567_int = 522125; // 0x51d PushI
	SetMessage(var_567_int); // 0x51e TObjFunc
	ClearReplies(); // 0x520 TObjFunc
	var_568_bool = 0; var_569_object = Obj(); // 0x522 PushV
	var_569_object = var_1_object; // 0x523 MovT
	func_3372(var_569_object); // 0x524 NEW_2
	if(var_568_bool == 0) goto Label_1324; // 0x526 JumpB
	var_574_int = 522848; // 0x527 PushI
	var_575_int = 24033; // 0x528 PushI
	var_576_int = 24032; // 0x529 PushI
	AddReply(var_574_int, var_575_int, var_576_int); // 0x52a TObjFunc
	
Label_1324:
	var_577_int = 522126; // 0x52c PushI
	var_578_int = -1; // 0x52d PushI
	var_579_int = 23293; // 0x52e PushI
	AddReply(var_577_int, var_578_int, var_579_int); // 0x52f TObjFunc
	goto Label_1332; // 0x531 Jump
}


func_3269()
{
	var_40_bool = 0; var_41_string = ""; var_42_string = ""; // 0xcc6 PushV
	var_41_string = "quest_b10_02"; // 0xcc7 MovS
	var_42_string = "completed"; // 0xcc8 MovS
	func_3155(var_40_bool, var_41_string, var_42_string); // 0xcc9 NEW_2
	return 0; // 0xccb Return
}


func_3527(var_111_int)
{
	var_112_int = 0; var_113_int = 0; // 0xdc7 PushV
	var_114_string = "branch"; // 0xdc8 PushS
	GetVariable(var_114_string, var_113_int); // 0xdc9 Func
	var_115_int = 0; // 0xdcb PushI
	var_116_bool = var_113_int == var_115_int; // 0xdcc Eq
	if(var_116_bool == 0) goto Label_3537; // 0xdcd JumpB
	var_111_int = 1; // 0xdce MovI
	return 2; // 0xdcf Return
	
Label_3537:
	var_117_int = 1; // 0xdd1 PushI
	var_118_bool = var_113_int == var_117_int; // 0xdd2 Eq
	if(var_118_bool == 0) goto Label_3542; // 0xdd3 JumpB
	var_111_int = 2; // 0xdd4 MovI
	return 2; // 0xdd5 Return
	
Label_3542:
	var_111_int = 3; // 0xdd6 MovI
	return 2; // 0xdd7 Return
}


func_2506(var_2_object, var_613_string)
{
	var_614_bool = 0; // 0x9cb PushV
	func_3227(var_614_bool); // 0x9cc NEW_2
	var_615_bool = var_614_bool == 0; // 0x9ce Not
	if(var_615_bool == 0) goto Label_2513; // 0x9cf JumpB
	return 0; // 0x9d0 Return
	
Label_2513:
	var_616_bool = var_613_string == var_2_object; // 0x9d1 Eq
	if(var_616_bool == 0) goto Label_2516; // 0x9d2 JumpB
	return 0; // 0x9d3 Return
	
Label_2516:
	var_617_string = ""; var_618_bool = 0; // 0x9d4 PushV
	var_617_string = var_613_string; // 0x9d5 Mov
	var_619_string = ""; // 0x9d6 PushS
	var_620_bool = var_613_string == var_619_string; // 0x9d7 Eq
	if(var_620_bool == 0) goto Label_2523; // 0x9d8 JumpB
	var_618_bool = 0; // 0x9d9 MovB
	goto Label_2524; // 0x9da Jump
	
Label_2524:
	func_3097(var_617_string, var_618_bool); // 0x9dc NEW_2
	var_2_object = var_613_string; // 0x9de TMov
	return 0; // 0x9df Return
	
Label_2523:
	var_618_bool = 1; // 0x9db MovB
}


func_3276()
{
	var_34_string = "oob10Block1"; // 0xccd PushS
	var_35_int = 1; // 0xcce PushI
	SetVariable(var_34_string, var_35_int); // 0xccf Func
	return 0; // 0xcd1 Return
}


func_3282()
{
	var_98_string = "oob9Block2"; // 0xcd3 PushS
	var_99_int = 1; // 0xcd4 PushI
	SetVariable(var_98_string, var_99_int); // 0xcd5 Func
	return 0; // 0xcd7 Return
}


func_3288()
{
	var_50_string = "oob10Block2"; // 0xcd9 PushS
	var_51_int = 1; // 0xcda PushI
	SetVariable(var_50_string, var_51_int); // 0xcdb Func
	return 0; // 0xcdd Return
}


func_3544(var_44_object)
{
	var_45_int = 0; var_46_int = 0; // 0xdd8 PushV
	var_47_string = "mt_block"; // 0xdd9 PushS
	GetVariable(var_47_string, var_46_int); // 0xdda Func
	var_48_bool = var_46_int == 0; // 0xddc Not
	if(var_48_bool == 0) goto Label_3560; // 0xddd JumpB
	var_49_int = 0; var_50_object = Obj(); // 0xdde PushV
	var_50_object = var_44_object; // 0xddf Mov
	TaskCall(0); // 0xde0 TaskCall
	func_0(var_51_object, var_49_int, var_50_object); // 0xde1 NEW_2
	TaskReturn(); // 0xde2 TaskReturn
	var_272_string = "mt_block"; // 0xde4 PushS
	var_273_int = 1; // 0xde5 PushI
	SetVariable(var_272_string, var_273_int); // 0xde6 Func
	
Label_3560:
	var_274_bool = 0; var_275_int = 0; // 0xde8 PushV
	var_275_int = 9; // 0xde9 MovI
	func_3189(var_274_bool, var_275_int); // 0xdea NEW_2
	if(var_274_bool == 0) goto Label_3572; // 0xdec JumpB
	var_277_int = 0; var_278_object = Obj(); // 0xded PushV
	var_278_object = var_44_object; // 0xdee Mov
	TaskCall(2); // 0xdef TaskCall
	func_249(var_279_object, var_277_int, var_278_object); // 0xdf0 NEW_2
	TaskReturn(); // 0xdf1 TaskReturn
	return 2; // 0xdf3 Return
	
Label_3572:
	var_363_bool = 0; var_364_int = 0; // 0xdf4 PushV
	var_364_int = 10; // 0xdf5 MovI
	func_3189(var_363_bool, var_364_int); // 0xdf6 NEW_2
	if(var_363_bool == 0) goto Label_3584; // 0xdf8 JumpB
	var_365_int = 0; var_366_object = Obj(); // 0xdf9 PushV
	var_366_object = var_44_object; // 0xdfa Mov
	TaskCall(6); // 0xdfb TaskCall
	func_1706(var_367_object, var_365_int, var_366_object); // 0xdfc NEW_2
	TaskReturn(); // 0xdfd TaskReturn
	return 2; // 0xdff Return
	
Label_3584:
	var_469_bool = 0; var_470_int = 0; // 0xe00 PushV
	var_470_int = 12; // 0xe01 MovI
	func_3189(var_469_bool, var_470_int); // 0xe02 NEW_2
	if(var_469_bool == 0) goto Label_3596; // 0xe04 JumpB
	var_471_int = 0; var_472_object = Obj(); // 0xe05 PushV
	var_472_object = var_44_object; // 0xe06 Mov
	TaskCall(4); // 0xe07 TaskCall
	func_1138(var_473_object, var_471_int, var_472_object); // 0xe08 NEW_2
	TaskReturn(); // 0xe09 TaskReturn
	return 2; // 0xe0b Return
	
Label_3596:
	var_582_int = 0; var_583_object = Obj(); // 0xe0c PushV
	var_583_object = var_44_object; // 0xe0d Mov
	TaskCall(8); // 0xe0e TaskCall
	func_2367(var_584_object, var_582_int, var_583_object); // 0xe0f NEW_2
	TaskReturn(); // 0xe10 TaskReturn
	return 2; // 0xe12 Return
}


func_3294()
{
	var_74_object = Obj(); var_75_string = ""; var_76_float = 0; // 0xcdf PushV
	var_77_object = Obj(); // 0xce0 PushV
	func_3477(var_77_object); // 0xce1 NEW_2
	var_74_object = var_77_object; // 0xce2 Mov
	var_75_string = "pt_gmap_vagon_army"; // 0xce4 MovS
	var_76_float = 2; // 0xce5 MovI
	func_3494(var_74_object, var_75_string, var_76_float); // 0xce6 NEW_2
	var_97_object = Obj(); // 0xce8 PushV
	func_3477(var_97_object); // 0xce9 NEW_2
	ShowMap(var_97_object); // 0xceb ObjFunc
	return 0; // 0xced Return
}


func_3038(var_162_bool)
{
	var_164_string = ""; var_165_int = 0; var_166_bool = 0; var_167_int = 0; var_168_string = ""; var_169_string = ""; var_170_int = 0; var_171_bool = 0; var_172_int = 0; var_173_string = ""; // 0xbde PushV
	var_174_string = "d"; // 0xbdf PushS
	var_175_int = 0; // 0xbe0 PushV
	func_3172(var_175_int); // 0xbe1 NEW_2
	var_181_int = var_174_string + var_175_int; // 0xbe3 Add
	var_182_string = "m"; // 0xbe4 PushS
	var_169_string = var_181_int + var_182_string; // 0xbe5 Add2
	var_170_int = 0; // 0xbe6 MovI
	
Label_3047:
	var_183_int = 1; // 0xbe7 PushI
	if(var_183_int == 0) goto Label_3060; // 0xbe8 JumpB
	var_184_int = 1; // 0xbe9 PushI
	var_185_int = var_170_int + var_184_int; // 0xbea Add
	var_186_int = var_169_string + var_185_int; // 0xbeb Add
	HasProperty(var_186_int, var_171_bool); // 0xbec ObjFunc
	var_187_bool = var_171_bool == 0; // 0xbee Not
	if(var_187_bool == 0) goto Label_3057; // 0xbef JumpB
	goto Label_3060; // 0xbf0 Jump
	
Label_3060:
	var_188_bool = var_170_int == 0; // 0xbf4 Not
	if(var_188_bool == 0) goto Label_3064; // 0xbf5 JumpB
	var_162_bool = 0; // 0xbf6 MovB
	return 10; // 0xbf7 Return
	
Label_3064:
	var_172_int = 0; // 0xbf8 MovI
	var_189_int = 1; // 0xbf9 PushI
	var_190_bool = var_170_int > var_189_int; // 0xbfa GT
	if(var_190_bool == 0) goto Label_3070; // 0xbfb JumpB
	irand(var_172_int, var_170_int); // 0xbfc Func
	
Label_3070:
	var_191_int = 1; // 0xbfe PushI
	var_192_int = var_172_int + var_191_int; // 0xbff Add
	var_193_int = var_169_string + var_192_int; // 0xc00 Add
	GetProperty(var_193_int, var_173_string); // 0xc01 ObjFunc
	var_194_bool = 0; var_195_string = ""; // 0xc03 PushV
	var_195_string = var_173_string; // 0xc04 Mov
	func_3112(var_194_bool, var_195_string); // 0xc05 NEW_2
	var_162_bool = var_194_bool; // 0xc06 Mov
	return 10; // 0xc08 Return
	
Label_3057:
	var_196_int = 1; // 0xbf1 PushI
	var_170_int = var_170_int + var_196_int; // 0xbf2 Add2
	goto Label_3047; // 0xbf3 Jump
}


func_3310()
{
	var_56_object = Obj(); var_57_object = Obj(); // 0xcee PushV
	var_58_object = Obj(); // 0xcef PushV
	func_3477(var_58_object); // 0xcf0 NEW_2
	var_57_object = var_58_object; // 0xcf1 Mov
	var_65_string = "b10q04BlockGotoOfficer"; // 0xcf3 PushS
	var_66_string = "pt_gmap_vagon_army"; // 0xcf4 PushS
	var_67_int = 0; // 0xcf5 PushI
	var_68_int = 530547; // 0xcf6 PushI
	var_69_float = 0; // 0xcf7 PushV
	func_3167(var_69_float); // 0xcf8 NEW_2
	AddMark(var_65_string, var_66_string, var_67_int, var_68_int, var_69_float); // 0xcfa ObjFunc
	return 2; // 0xcfc Return
}


func_249(var_0_object, var_277_int, var_278_object)
{
	var_280_object = Obj(); var_281_bool = 0; var_282_int = 0; var_283_bool = 0; var_284_object = Obj(); var_285_bool = 0; var_286_int = 0; var_287_bool = 0; // 0xf9 PushV
	var_0_object = var_278_object; // 0xfa TMov
	var_288_bool = 0; var_289_object = Obj(); var_290_float = 0; // 0xfb PushV
	var_289_object = var_278_object; // 0xfc Mov
	var_290_float = 70.0; // 0xfd MovF
	func_2858(var_289_object, var_290_float); // 0xfe NEW_2
	var_291_bool = var_288_bool == 0; // 0x100 Not
	if(var_291_bool == 0) goto Label_260; // 0x101 JumpB
	var_277_int = -2; // 0x102 MovI
	return 8; // 0x103 Return
	
Label_260:
	CreateDialog(var_284_object); // 0x104 Func
	var_292_int = 0; // 0x106 PushV
	func_3221(var_292_int); // 0x107 NEW_2
	SetNPCName(var_292_int); // 0x109 ObjFunc
	var_293_int = 0; // 0x10b PushV
	func_3219(var_293_int); // 0x10c NEW_2
	SetNPCDescription(var_293_int); // 0x10e ObjFunc
	var_294_string = ""; // 0x110 PushV
	func_3223(var_294_string); // 0x111 NEW_2
	SetPhoto(var_294_string); // 0x113 ObjFunc
	var_295_string = ""; // 0x115 PushV
	func_3225(var_295_string); // 0x116 NEW_2
	SetPhoto2(var_295_string); // 0x118 ObjFunc
	var_296_int = 0; // 0x11a PushV
	func_3527(var_296_int); // 0x11b NEW_2
	SetPlayerName(var_296_int); // 0x11d ObjFunc
	var_286_int = -1; // 0x11f MovI
	IsOverrideActive(var_285_bool); // 0x120 Func
	var_297_bool = var_285_bool; // 0x122 Push
	if(var_297_bool == 0) goto Label_294; // 0x123 JumpB
	var_277_int = -2; // 0x124 MovI
	return 8; // 0x125 Return
	
Label_294:
	DoDialog(var_284_object); // 0x126 Func
	var_298_bool = 0; var_299_object = Obj(); // 0x128 PushV
	var_300_object = Obj(); // 0x129 PushV
	func_3134(var_300_object); // 0x12a NEW_2
	var_299_object = var_300_object; // 0x12b Mov
	func_2943(var_298_bool, var_299_object); // 0x12d NEW_2
	var_301_object = Obj(); var_302_object = Obj(); // 0x12f PushV
	var_301_object = var_278_object; // 0x130 Mov
	var_302_object = var_284_object; // 0x131 Mov
	TaskCall(3); // 0x132 TaskCall
	func_330(var_303_object, var_304_object, var_305_string, var_306_bool, var_301_object, var_302_object); // 0x133 NEW_2
	TaskReturn(); // 0x134 TaskReturn
	IsDialogEnd(var_287_bool); // 0x136 ObjFunc
	
Label_312:
	var_361_bool = var_287_bool == 0; // 0x138 Not
	if(var_361_bool == 0) goto Label_319; // 0x139 JumpB
	sync(); // 0x13a Func
	IsDialogEnd(var_287_bool); // 0x13c ObjFunc
	goto Label_312; // 0x13e Jump
	
Label_319:
	var_362_object = Obj(); // 0x13f PushV
	var_362_object = var_278_object; // 0x140 Mov
	func_2926(); // 0x141 NEW_2
	StopDialog(var_284_object); // 0x143 Func
	GetReturnValue(var_286_int); // 0x145 ObjFunc
	var_277_int = var_286_int; // 0x147 Mov
	return 8; // 0x148 Return
}


func_1787(var_0_object, var_1_object, var_2_object, var_3_string, var_389_object, var_390_object)
{
	var_0_object = var_390_object; // 0x6fc TMov
	var_1_object = var_389_object; // 0x6fd TMov
	var_3_string = 0; // 0x6fe TMovB
	var_395_int = 1; // 0x6ff PushI
	if(var_395_int == 0) goto Label_1882; // 0x700 JumpB
	var_396_string = ""; // 0x701 PushV
	var_396_string = "Neutral"; // 0x702 MovS
	func_1912(var_390_object, var_396_string); // 0x703 NEW_2
	var_404_int = 524719; // 0x705 PushI
	SetMessage(var_404_int); // 0x706 TObjFunc
	ClearReplies(); // 0x708 TObjFunc
	var_405_bool = 0; // 0x70a PushV
	var_405_bool = 0; // 0x70b MovB
	var_406_bool = 0; // 0x70c PushV
	var_406_bool = 0; // 0x70d MovB
	var_407_bool = 0; var_408_object = Obj(); // 0x70e PushV
	var_408_object = var_1_object; // 0x70f MovT
	func_3394(var_408_object); // 0x710 NEW_2
	if(var_407_bool == 0) goto Label_1818; // 0x712 JumpB
	var_413_bool = 0; var_414_object = Obj(); // 0x713 PushV
	var_414_object = var_1_object; // 0x714 MovT
	func_3406(var_414_object); // 0x715 NEW_2
	var_419_bool = var_413_bool == 0; // 0x717 Not
	if(var_419_bool == 0) goto Label_1818; // 0x718 JumpB
	var_406_bool = 1; // 0x719 MovB
	
Label_1818:
	if(var_406_bool == 0) goto Label_1825; // 0x71a JumpB
	var_420_bool = 0; var_421_object = Obj(); // 0x71b PushV
	var_421_object = var_1_object; // 0x71c MovT
	func_3418(var_421_object); // 0x71d NEW_2
	if(var_420_bool == 0) goto Label_1825; // 0x71f JumpB
	var_405_bool = 1; // 0x720 MovB
	
Label_1825:
	if(var_405_bool == 0) goto Label_1831; // 0x721 JumpB
	var_426_int = 524720; // 0x722 PushI
	var_427_int = 32206; // 0x723 PushI
	var_428_int = 26059; // 0x724 PushI
	AddReply(var_426_int, var_427_int, var_428_int); // 0x725 TObjFunc
	
Label_1831:
	var_429_bool = 0; // 0x727 PushV
	var_429_bool = 0; // 0x728 MovB
	var_430_bool = 0; var_431_object = Obj(); // 0x729 PushV
	var_431_object = var_1_object; // 0x72a MovT
	func_3406(var_431_object); // 0x72b NEW_2
	if(var_430_bool == 0) goto Label_1844; // 0x72d JumpB
	var_432_bool = 0; var_433_object = Obj(); // 0x72e PushV
	var_433_object = var_1_object; // 0x72f MovT
	func_3394(var_433_object); // 0x730 NEW_2
	if(var_432_bool == 0) goto Label_1844; // 0x732 JumpB
	var_429_bool = 1; // 0x733 MovB
	
Label_1844:
	if(var_429_bool == 0) goto Label_1850; // 0x734 JumpB
	var_434_int = 524724; // 0x735 PushI
	var_435_int = 32212; // 0x736 PushI
	var_436_int = 26063; // 0x737 PushI
	AddReply(var_434_int, var_435_int, var_436_int); // 0x738 TObjFunc
	
Label_1850:
	var_437_bool = 0; // 0x73a PushV
	var_437_bool = 0; // 0x73b MovB
	var_438_bool = 0; var_439_object = Obj(); // 0x73c PushV
	var_439_object = var_1_object; // 0x73d MovT
	func_3442(var_439_object); // 0x73e NEW_2
	if(var_438_bool == 0) goto Label_1863; // 0x740 JumpB
	var_444_bool = 0; var_445_object = Obj(); // 0x741 PushV
	var_445_object = var_1_object; // 0x742 MovT
	func_3454(var_445_object); // 0x743 NEW_2
	if(var_444_bool == 0) goto Label_1863; // 0x745 JumpB
	var_437_bool = 1; // 0x746 MovB
	
Label_1863:
	if(var_437_bool == 0) goto Label_1869; // 0x747 JumpB
	var_450_int = 530453; // 0x748 PushI
	var_451_int = 32226; // 0x749 PushI
	var_452_int = 31819; // 0x74a PushI
	AddReply(var_450_int, var_451_int, var_452_int); // 0x74b TObjFunc
	
Label_1869:
	var_453_int = 524721; // 0x74d PushI
	var_454_int = -1; // 0x74e PushI
	var_455_int = 26060; // 0x74f PushI
	AddReply(var_453_int, var_454_int, var_455_int); // 0x750 TObjFunc
	var_456_int = 530884; // 0x752 PushI
	var_457_int = -1; // 0x753 PushI
	var_458_int = 32205; // 0x754 PushI
	AddReply(var_456_int, var_457_int, var_458_int); // 0x755 TObjFunc
	goto Label_1882; // 0x757 Jump
	
Label_1882:
	var_459_bool = 0; // 0x75a PushV
	func_3227(var_459_bool); // 0x75b NEW_2
	if(var_459_bool == 0) goto Label_1897; // 0x75d JumpB
	
Label_1886:
	lshWaitForAnimEnd(); // 0x75e Func
	var_460_string = var_3_string; // 0x760 PushT
	if(var_460_string == 0) goto Label_1891; // 0x761 JumpB
	goto Label_1896; // 0x762 Jump
	
Label_1896:
	goto Label_1911; // 0x768 Jump
	
Label_1911:
	return 0; // 0x777 Return
	
Label_1891:
	var_461_string = ""; // 0x763 PushV
	var_461_string = var_2_object; // 0x764 MovT
	func_3081(var_461_string); // 0x765 NEW_2
	goto Label_1886; // 0x767 Jump
	
Label_1897:
	var_462_string = "all"; // 0x769 PushS
	var_463_string = "idle"; // 0x76a PushS
	PlayAnimation(var_462_string, var_463_string); // 0x76b Func
	
Label_1901:
	WaitForAnimEnd(); // 0x76d Func
	var_464_string = var_3_string; // 0x76f PushT
	if(var_464_string == 0) goto Label_1906; // 0x770 JumpB
	goto Label_1911; // 0x771 Jump
	
Label_1906:
	var_465_string = "all"; // 0x772 PushS
	var_466_string = "idle"; // 0x773 PushS
	PlayAnimation(var_465_string, var_466_string); // 0x774 Func
	goto Label_1901; // 0x776 Jump
}


func_3326()
{
	var_322_string = "b9BlockVisit"; // 0xcff PushS
	var_323_int = 1; // 0xd00 PushI
	SetVariable(var_322_string, var_323_int); // 0xd01 Func
	return 0; // 0xd03 Return
}


