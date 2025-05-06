task_0_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_object, var_46_object, var_47_object, var_48_string, var_49_bool, var_50_object, var_51_object, var_52_object, var_53_string, var_54_bool, var_55_object, var_56_object, var_57_object, var_58_string, var_59_bool, var_60_object, var_61_object, var_62_object, var_63_string, var_64_bool, var_65_object, var_66_object, var_67_object, var_68_string, var_69_bool, var_70_bool, var_71_cvector, var_72_cvector)
{
	StopGroup0(); // 0x8 Func
	sync(); // 0xa Func
	return 0; // 0xc Return
}


task_2_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_object, var_53_object, var_54_object, var_55_string, var_56_bool, var_57_object, var_58_object, var_59_object, var_60_string, var_61_bool, var_62_object, var_63_object, var_64_object, var_65_string, var_66_bool, var_67_object, var_68_object, var_69_object, var_70_string, var_71_bool, var_72_bool, var_73_cvector, var_74_cvector)
{
	var_75_int = 1; // 0xb4 PushI
	if(var_75_int == 0) goto Label_276; // 0xb5 JumpB
	func_8750(); // 0xb7 NEW_2
	var_77_int = 1779; // 0xb9 PushI
	var_78_bool = var_73_cvector == var_77_int; // 0xba Eq
	if(var_78_bool == 0) goto Label_213; // 0xbb JumpB
	var_79_object = Obj(); var_80_object = Obj(); // 0xbc PushV
	var_79_object = var_1_object; // 0xbd MovT
	var_80_object = var_0_object; // 0xbe MovT
	func_9123(); // 0xbf NEW_2
	var_83_string = ""; // 0xc1 PushV
	var_83_string = "Neutral"; // 0xc2 MovS
	func_157(var_74_cvector, var_83_string); // 0xc3 NEW_2
	var_100_int = 501575; // 0xc5 PushI
	SetMessage(var_100_int); // 0xc6 TObjFunc
	ClearReplies(); // 0xc8 TObjFunc
	var_101_int = 501576; // 0xca PushI
	var_102_int = 1782; // 0xcb PushI
	var_103_int = 1780; // 0xcc PushI
	AddReply(var_101_int, var_102_int, var_103_int); // 0xcd TObjFunc
	var_104_int = 501577; // 0xcf PushI
	var_105_int = 1782; // 0xd0 PushI
	var_106_int = 1781; // 0xd1 PushI
	AddReply(var_104_int, var_105_int, var_106_int); // 0xd2 TObjFunc
	return 0; // 0xd4 Return
	
Label_213:
	var_107_int = 1782; // 0xd5 PushI
	var_108_bool = var_73_cvector == var_107_int; // 0xd6 Eq
	if(var_108_bool == 0) goto Label_241; // 0xd7 JumpB
	var_109_object = Obj(); var_110_object = Obj(); // 0xd8 PushV
	var_109_object = var_1_object; // 0xd9 MovT
	var_110_object = var_0_object; // 0xda MovT
	func_9394(); // 0xdb NEW_2
	var_113_string = ""; // 0xdd PushV
	var_113_string = "Neutral"; // 0xde MovS
	func_157(var_74_cvector, var_113_string); // 0xdf NEW_2
	var_114_int = 501578; // 0xe1 PushI
	SetMessage(var_114_int); // 0xe2 TObjFunc
	ClearReplies(); // 0xe4 TObjFunc
	var_115_int = 501580; // 0xe6 PushI
	var_116_int = 1785; // 0xe7 PushI
	var_117_int = 1784; // 0xe8 PushI
	AddReply(var_115_int, var_116_int, var_117_int); // 0xe9 TObjFunc
	var_118_int = 501579; // 0xeb PushI
	var_119_int = -1; // 0xec PushI
	var_120_int = 1783; // 0xed PushI
	AddReply(var_118_int, var_119_int, var_120_int); // 0xee TObjFunc
	return 0; // 0xf0 Return
	
Label_241:
	var_121_int = 1785; // 0xf1 PushI
	var_122_bool = var_73_cvector == var_121_int; // 0xf2 Eq
	if(var_122_bool == 0) goto Label_264; // 0xf3 JumpB
	var_123_string = ""; // 0xf4 PushV
	var_123_string = "Neutral"; // 0xf5 MovS
	func_157(var_74_cvector, var_123_string); // 0xf6 NEW_2
	var_124_int = 501581; // 0xf8 PushI
	SetMessage(var_124_int); // 0xf9 TObjFunc
	ClearReplies(); // 0xfb TObjFunc
	var_125_int = 501582; // 0xfd PushI
	var_126_int = -1; // 0xfe PushI
	var_127_int = 1786; // 0xff PushI
	AddReply(var_125_int, var_126_int, var_127_int); // 0x100 TObjFunc
	var_128_int = 501583; // 0x102 PushI
	var_129_int = -1; // 0x103 PushI
	var_130_int = 1787; // 0x104 PushI
	AddReply(var_128_int, var_129_int, var_130_int); // 0x105 TObjFunc
	return 0; // 0x107 Return
	
Label_264:
	var_3_string = 1; // 0x108 TMovB
	var_131_bool = 0; // 0x109 PushV
	func_8923(var_131_bool); // 0x10a NEW_2
	if(var_131_bool == 0) goto Label_272; // 0x10c JumpB
	lshStopAnimation(); // 0x10d Func
	goto Label_274; // 0x10f Jump
	
Label_274:
	return 0; // 0x112 Return
	
Label_272:
	StopAnimation(); // 0x110 Func
	
Label_276:
	return 0; // 0x114 Return
}


task_4_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_object, var_53_object, var_54_object, var_55_string, var_56_bool, var_57_object, var_58_object, var_59_object, var_60_string, var_61_bool, var_62_object, var_63_object, var_64_object, var_65_string, var_66_bool, var_67_object, var_68_object, var_69_object, var_70_string, var_71_bool, var_72_bool, var_73_cvector, var_74_cvector)
{
	var_75_int = 1; // 0x1d0 PushI
	if(var_75_int == 0) goto Label_737; // 0x1d1 JumpB
	func_8750(); // 0x1d3 NEW_2
	var_77_int = 13819; // 0x1d5 PushI
	var_78_bool = var_74_cvector == var_77_int; // 0x1d6 Eq
	if(var_78_bool == 0) goto Label_482; // 0x1d7 JumpB
	var_79_object = Obj(); var_80_object = Obj(); // 0x1d8 PushV
	var_79_object = var_1_object; // 0x1d9 MovT
	var_80_object = var_0_object; // 0x1da MovT
	func_9300(); // 0x1db NEW_2
	var_148_object = Obj(); var_149_object = Obj(); // 0x1dd PushV
	var_148_object = var_1_object; // 0x1de MovT
	var_149_object = var_0_object; // 0x1df MovT
	func_9294(); // 0x1e0 NEW_2
	
Label_482:
	var_152_int = 13848; // 0x1e2 PushI
	var_153_bool = var_74_cvector == var_152_int; // 0x1e3 Eq
	if(var_153_bool == 0) goto Label_495; // 0x1e4 JumpB
	var_154_object = Obj(); var_155_object = Obj(); // 0x1e5 PushV
	var_154_object = var_1_object; // 0x1e6 MovT
	var_155_object = var_0_object; // 0x1e7 MovT
	func_9300(); // 0x1e8 NEW_2
	var_156_object = Obj(); var_157_object = Obj(); // 0x1ea PushV
	var_156_object = var_1_object; // 0x1eb MovT
	var_157_object = var_0_object; // 0x1ec MovT
	func_9294(); // 0x1ed NEW_2
	
Label_495:
	var_158_int = 13254; // 0x1ef PushI
	var_159_bool = var_73_cvector == var_158_int; // 0x1f0 Eq
	if(var_159_bool == 0) goto Label_543; // 0x1f1 JumpB
	var_160_bool = 0; var_161_object = Obj(); // 0x1f2 PushV
	var_161_object = var_1_object; // 0x1f3 MovT
	func_9795(var_161_object); // 0x1f4 NEW_2
	if(var_160_bool == 0) goto Label_528; // 0x1f6 JumpB
	var_168_object = Obj(); var_169_object = Obj(); // 0x1f7 PushV
	var_168_object = var_1_object; // 0x1f8 MovT
	var_169_object = var_0_object; // 0x1f9 MovT
	func_9400(); // 0x1fa NEW_2
	var_172_string = ""; // 0x1fc PushV
	var_172_string = "Surprise"; // 0x1fd MovS
	func_441(var_74_cvector, var_172_string); // 0x1fe NEW_2
	var_189_int = 512036; // 0x200 PushI
	SetMessage(var_189_int); // 0x201 TObjFunc
	ClearReplies(); // 0x203 TObjFunc
	var_190_int = 540874; // 0x205 PushI
	var_191_int = 42939; // 0x206 PushI
	var_192_int = 42937; // 0x207 PushI
	AddReply(var_190_int, var_191_int, var_192_int); // 0x208 TObjFunc
	var_193_int = 540878; // 0x20a PushI
	var_194_int = 42939; // 0x20b PushI
	var_195_int = 42941; // 0x20c PushI
	AddReply(var_193_int, var_194_int, var_195_int); // 0x20d TObjFunc
	return 0; // 0x20f Return
	
Label_528:
	var_196_string = ""; // 0x210 PushV
	var_196_string = "Neutral"; // 0x211 MovS
	func_441(var_74_cvector, var_196_string); // 0x212 NEW_2
	var_197_int = 513016; // 0x214 PushI
	SetMessage(var_197_int); // 0x215 TObjFunc
	ClearReplies(); // 0x217 TObjFunc
	var_198_int = 513017; // 0x219 PushI
	var_199_int = -1; // 0x21a PushI
	var_200_int = 14223; // 0x21b PushI
	AddReply(var_198_int, var_199_int, var_200_int); // 0x21c TObjFunc
	return 0; // 0x21e Return
	
Label_543:
	var_201_int = 42939; // 0x21f PushI
	var_202_bool = var_73_cvector == var_201_int; // 0x220 Eq
	if(var_202_bool == 0) goto Label_566; // 0x221 JumpB
	var_203_string = ""; // 0x222 PushV
	var_203_string = "Surprise"; // 0x223 MovS
	func_441(var_74_cvector, var_203_string); // 0x224 NEW_2
	var_204_int = 540876; // 0x226 PushI
	SetMessage(var_204_int); // 0x227 TObjFunc
	ClearReplies(); // 0x229 TObjFunc
	var_205_int = 540877; // 0x22b PushI
	var_206_int = 42938; // 0x22c PushI
	var_207_int = 42940; // 0x22d PushI
	AddReply(var_205_int, var_206_int, var_207_int); // 0x22e TObjFunc
	var_208_int = 540879; // 0x230 PushI
	var_209_int = 42938; // 0x231 PushI
	var_210_int = 42943; // 0x232 PushI
	AddReply(var_208_int, var_209_int, var_210_int); // 0x233 TObjFunc
	return 0; // 0x235 Return
	
Label_566:
	var_211_int = 42938; // 0x236 PushI
	var_212_bool = var_73_cvector == var_211_int; // 0x237 Eq
	if(var_212_bool == 0) goto Label_589; // 0x238 JumpB
	var_213_string = ""; // 0x239 PushV
	var_213_string = "Fear"; // 0x23a MovS
	func_441(var_74_cvector, var_213_string); // 0x23b NEW_2
	var_214_int = 540875; // 0x23d PushI
	SetMessage(var_214_int); // 0x23e TObjFunc
	ClearReplies(); // 0x240 TObjFunc
	var_215_int = 540870; // 0x242 PushI
	var_216_int = 42934; // 0x243 PushI
	var_217_int = 42933; // 0x244 PushI
	AddReply(var_215_int, var_216_int, var_217_int); // 0x245 TObjFunc
	var_218_int = 512640; // 0x247 PushI
	var_219_int = 13821; // 0x248 PushI
	var_220_int = 13820; // 0x249 PushI
	AddReply(var_218_int, var_219_int, var_220_int); // 0x24a TObjFunc
	return 0; // 0x24c Return
	
Label_589:
	var_221_int = 13821; // 0x24d PushI
	var_222_bool = var_73_cvector == var_221_int; // 0x24e Eq
	if(var_222_bool == 0) goto Label_607; // 0x24f JumpB
	var_223_string = ""; // 0x250 PushV
	var_223_string = "Fear"; // 0x251 MovS
	func_441(var_74_cvector, var_223_string); // 0x252 NEW_2
	var_224_int = 512641; // 0x254 PushI
	SetMessage(var_224_int); // 0x255 TObjFunc
	ClearReplies(); // 0x257 TObjFunc
	var_225_int = 512644; // 0x259 PushI
	var_226_int = 13825; // 0x25a PushI
	var_227_int = 13824; // 0x25b PushI
	AddReply(var_225_int, var_226_int, var_227_int); // 0x25c TObjFunc
	return 0; // 0x25e Return
	
Label_607:
	var_228_int = 13825; // 0x25f PushI
	var_229_bool = var_73_cvector == var_228_int; // 0x260 Eq
	if(var_229_bool == 0) goto Label_625; // 0x261 JumpB
	var_230_string = ""; // 0x262 PushV
	var_230_string = "Fear"; // 0x263 MovS
	func_441(var_74_cvector, var_230_string); // 0x264 NEW_2
	var_231_int = 512645; // 0x266 PushI
	SetMessage(var_231_int); // 0x267 TObjFunc
	ClearReplies(); // 0x269 TObjFunc
	var_232_int = 540881; // 0x26b PushI
	var_233_int = 42947; // 0x26c PushI
	var_234_int = 42946; // 0x26d PushI
	AddReply(var_232_int, var_233_int, var_234_int); // 0x26e TObjFunc
	return 0; // 0x270 Return
	
Label_625:
	var_235_int = 42947; // 0x271 PushI
	var_236_bool = var_73_cvector == var_235_int; // 0x272 Eq
	if(var_236_bool == 0) goto Label_648; // 0x273 JumpB
	var_237_string = ""; // 0x274 PushV
	var_237_string = "Fear"; // 0x275 MovS
	func_441(var_74_cvector, var_237_string); // 0x276 NEW_2
	var_238_int = 540882; // 0x278 PushI
	SetMessage(var_238_int); // 0x279 TObjFunc
	ClearReplies(); // 0x27b TObjFunc
	var_239_int = 540883; // 0x27d PushI
	var_240_int = 13818; // 0x27e PushI
	var_241_int = 42949; // 0x27f PushI
	AddReply(var_239_int, var_240_int, var_241_int); // 0x280 TObjFunc
	var_242_int = 512666; // 0x282 PushI
	var_243_int = -1; // 0x283 PushI
	var_244_int = 13848; // 0x284 PushI
	AddReply(var_242_int, var_243_int, var_244_int); // 0x285 TObjFunc
	return 0; // 0x287 Return
	
Label_648:
	var_245_int = 42934; // 0x288 PushI
	var_246_bool = var_73_cvector == var_245_int; // 0x289 Eq
	if(var_246_bool == 0) goto Label_666; // 0x28a JumpB
	var_247_string = ""; // 0x28b PushV
	var_247_string = "Fear"; // 0x28c MovS
	func_441(var_74_cvector, var_247_string); // 0x28d NEW_2
	var_248_int = 540871; // 0x28f PushI
	SetMessage(var_248_int); // 0x290 TObjFunc
	ClearReplies(); // 0x292 TObjFunc
	var_249_int = 512037; // 0x294 PushI
	var_250_int = 13256; // 0x295 PushI
	var_251_int = 13255; // 0x296 PushI
	AddReply(var_249_int, var_250_int, var_251_int); // 0x297 TObjFunc
	return 0; // 0x299 Return
	
Label_666:
	var_252_int = 13256; // 0x29a PushI
	var_253_bool = var_73_cvector == var_252_int; // 0x29b Eq
	if(var_253_bool == 0) goto Label_689; // 0x29c JumpB
	var_254_string = ""; // 0x29d PushV
	var_254_string = "Fear"; // 0x29e MovS
	func_441(var_74_cvector, var_254_string); // 0x29f NEW_2
	var_255_int = 512038; // 0x2a1 PushI
	SetMessage(var_255_int); // 0x2a2 TObjFunc
	ClearReplies(); // 0x2a4 TObjFunc
	var_256_int = 540872; // 0x2a6 PushI
	var_257_int = 13818; // 0x2a7 PushI
	var_258_int = 42935; // 0x2a8 PushI
	AddReply(var_256_int, var_257_int, var_258_int); // 0x2a9 TObjFunc
	var_259_int = 512635; // 0x2ab PushI
	var_260_int = 13816; // 0x2ac PushI
	var_261_int = 13815; // 0x2ad PushI
	AddReply(var_259_int, var_260_int, var_261_int); // 0x2ae TObjFunc
	return 0; // 0x2b0 Return
	
Label_689:
	var_262_int = 13816; // 0x2b1 PushI
	var_263_bool = var_73_cvector == var_262_int; // 0x2b2 Eq
	if(var_263_bool == 0) goto Label_707; // 0x2b3 JumpB
	var_264_string = ""; // 0x2b4 PushV
	var_264_string = "Fear"; // 0x2b5 MovS
	func_441(var_74_cvector, var_264_string); // 0x2b6 NEW_2
	var_265_int = 512636; // 0x2b8 PushI
	SetMessage(var_265_int); // 0x2b9 TObjFunc
	ClearReplies(); // 0x2bb TObjFunc
	var_266_int = 512637; // 0x2bd PushI
	var_267_int = 13818; // 0x2be PushI
	var_268_int = 13817; // 0x2bf PushI
	AddReply(var_266_int, var_267_int, var_268_int); // 0x2c0 TObjFunc
	return 0; // 0x2c2 Return
	
Label_707:
	var_269_int = 13818; // 0x2c3 PushI
	var_270_bool = var_73_cvector == var_269_int; // 0x2c4 Eq
	if(var_270_bool == 0) goto Label_725; // 0x2c5 JumpB
	var_271_string = ""; // 0x2c6 PushV
	var_271_string = "Neutral"; // 0x2c7 MovS
	func_441(var_74_cvector, var_271_string); // 0x2c8 NEW_2
	var_272_int = 512638; // 0x2ca PushI
	SetMessage(var_272_int); // 0x2cb TObjFunc
	ClearReplies(); // 0x2cd TObjFunc
	var_273_int = 512639; // 0x2cf PushI
	var_274_int = -1; // 0x2d0 PushI
	var_275_int = 13819; // 0x2d1 PushI
	AddReply(var_273_int, var_274_int, var_275_int); // 0x2d2 TObjFunc
	return 0; // 0x2d4 Return
	
Label_725:
	var_3_string = 1; // 0x2d5 TMovB
	var_276_bool = 0; // 0x2d6 PushV
	func_8923(var_276_bool); // 0x2d7 NEW_2
	if(var_276_bool == 0) goto Label_733; // 0x2d9 JumpB
	lshStopAnimation(); // 0x2da Func
	goto Label_735; // 0x2dc Jump
	
Label_735:
	return 0; // 0x2df Return
	
Label_733:
	StopAnimation(); // 0x2dd Func
	
Label_737:
	return 0; // 0x2e1 Return
}


task_6_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_object, var_53_object, var_54_object, var_55_string, var_56_bool, var_57_object, var_58_object, var_59_object, var_60_string, var_61_bool, var_62_object, var_63_object, var_64_object, var_65_string, var_66_bool, var_67_object, var_68_object, var_69_object, var_70_string, var_71_bool, var_72_bool, var_73_cvector, var_74_cvector)
{
	var_75_int = 1; // 0x3e1 PushI
	if(var_75_int == 0) goto Label_2032; // 0x3e2 JumpB
	func_8750(); // 0x3e4 NEW_2
	var_77_int = 5625; // 0x3e6 PushI
	var_78_bool = var_74_cvector == var_77_int; // 0x3e7 Eq
	if(var_78_bool == 0) goto Label_1006; // 0x3e8 JumpB
	var_79_object = Obj(); var_80_object = Obj(); // 0x3e9 PushV
	var_79_object = var_1_object; // 0x3ea MovT
	var_80_object = var_0_object; // 0x3eb MovT
	func_8935(); // 0x3ec NEW_2
	
Label_1006:
	var_83_int = 5632; // 0x3ee PushI
	var_84_bool = var_74_cvector == var_83_int; // 0x3ef Eq
	if(var_84_bool == 0) goto Label_1014; // 0x3f0 JumpB
	var_85_object = Obj(); var_86_object = Obj(); // 0x3f1 PushV
	var_85_object = var_1_object; // 0x3f2 MovT
	var_86_object = var_0_object; // 0x3f3 MovT
	func_8935(); // 0x3f4 NEW_2
	
Label_1014:
	var_87_int = 9281; // 0x3f6 PushI
	var_88_bool = var_74_cvector == var_87_int; // 0x3f7 Eq
	if(var_88_bool == 0) goto Label_1022; // 0x3f8 JumpB
	var_89_object = Obj(); var_90_object = Obj(); // 0x3f9 PushV
	var_89_object = var_1_object; // 0x3fa MovT
	var_90_object = var_0_object; // 0x3fb MovT
	func_8941(); // 0x3fc NEW_2
	
Label_1022:
	var_93_int = 33610; // 0x3fe PushI
	var_94_bool = var_74_cvector == var_93_int; // 0x3ff Eq
	if(var_94_bool == 0) goto Label_1035; // 0x400 JumpB
	var_95_object = Obj(); var_96_object = Obj(); // 0x401 PushV
	var_95_object = var_1_object; // 0x402 MovT
	var_96_object = var_0_object; // 0x403 MovT
	func_9199(); // 0x404 NEW_2
	var_144_object = Obj(); var_145_object = Obj(); // 0x406 PushV
	var_144_object = var_1_object; // 0x407 MovT
	var_145_object = var_0_object; // 0x408 MovT
	func_8959(); // 0x409 NEW_2
	
Label_1035:
	var_170_int = 33611; // 0x40b PushI
	var_171_bool = var_74_cvector == var_170_int; // 0x40c Eq
	if(var_171_bool == 0) goto Label_1048; // 0x40d JumpB
	var_172_object = Obj(); var_173_object = Obj(); // 0x40e PushV
	var_172_object = var_1_object; // 0x40f MovT
	var_173_object = var_0_object; // 0x410 MovT
	func_9199(); // 0x411 NEW_2
	var_174_object = Obj(); var_175_object = Obj(); // 0x413 PushV
	var_174_object = var_1_object; // 0x414 MovT
	var_175_object = var_0_object; // 0x415 MovT
	func_8959(); // 0x416 NEW_2
	
Label_1048:
	var_176_int = 34255; // 0x418 PushI
	var_177_bool = var_74_cvector == var_176_int; // 0x419 Eq
	if(var_177_bool == 0) goto Label_1056; // 0x41a JumpB
	var_178_object = Obj(); var_179_object = Obj(); // 0x41b PushV
	var_178_object = var_1_object; // 0x41c MovT
	var_179_object = var_0_object; // 0x41d MovT
	func_9199(); // 0x41e NEW_2
	
Label_1056:
	var_180_int = 5661; // 0x420 PushI
	var_181_bool = var_74_cvector == var_180_int; // 0x421 Eq
	if(var_181_bool == 0) goto Label_1064; // 0x422 JumpB
	var_182_object = Obj(); var_183_object = Obj(); // 0x423 PushV
	var_182_object = var_1_object; // 0x424 MovT
	var_183_object = var_0_object; // 0x425 MovT
	func_8947(); // 0x426 NEW_2
	
Label_1064:
	var_186_int = 22425; // 0x428 PushI
	var_187_bool = var_74_cvector == var_186_int; // 0x429 Eq
	if(var_187_bool == 0) goto Label_1072; // 0x42a JumpB
	var_188_object = Obj(); var_189_object = Obj(); // 0x42b PushV
	var_188_object = var_1_object; // 0x42c MovT
	var_189_object = var_0_object; // 0x42d MovT
	func_8925(); // 0x42e NEW_2
	
Label_1072:
	var_201_int = 22426; // 0x430 PushI
	var_202_bool = var_74_cvector == var_201_int; // 0x431 Eq
	if(var_202_bool == 0) goto Label_1080; // 0x432 JumpB
	var_203_object = Obj(); var_204_object = Obj(); // 0x433 PushV
	var_203_object = var_1_object; // 0x434 MovT
	var_204_object = var_0_object; // 0x435 MovT
	func_8925(); // 0x436 NEW_2
	
Label_1080:
	var_205_int = 22423; // 0x438 PushI
	var_206_bool = var_74_cvector == var_205_int; // 0x439 Eq
	if(var_206_bool == 0) goto Label_1088; // 0x43a JumpB
	var_207_object = Obj(); var_208_object = Obj(); // 0x43b PushV
	var_207_object = var_1_object; // 0x43c MovT
	var_208_object = var_0_object; // 0x43d MovT
	func_8925(); // 0x43e NEW_2
	
Label_1088:
	var_209_int = 5624; // 0x440 PushI
	var_210_bool = var_73_cvector == var_209_int; // 0x441 Eq
	if(var_210_bool == 0) goto Label_1204; // 0x442 JumpB
	var_211_bool = 0; var_212_object = Obj(); // 0x443 PushV
	var_212_object = var_1_object; // 0x444 MovT
	func_9484(var_212_object); // 0x445 NEW_2
	var_219_bool = var_211_bool == 0; // 0x447 Not
	if(var_219_bool == 0) goto Label_1132; // 0x448 JumpB
	var_220_string = ""; // 0x449 PushV
	var_220_string = "Neutral"; // 0x44a MovS
	func_970(var_74_cvector, var_220_string); // 0x44b NEW_2
	var_237_int = 505111; // 0x44d PushI
	SetMessage(var_237_int); // 0x44e TObjFunc
	ClearReplies(); // 0x450 TObjFunc
	var_238_bool = 0; var_239_object = Obj(); // 0x452 PushV
	var_239_object = var_1_object; // 0x453 MovT
	func_9424(var_239_object); // 0x454 NEW_2
	if(var_238_bool == 0) goto Label_1116; // 0x456 JumpB
	var_244_int = 505112; // 0x457 PushI
	var_245_int = 5626; // 0x458 PushI
	var_246_int = 5625; // 0x459 PushI
	AddReply(var_244_int, var_245_int, var_246_int); // 0x45a TObjFunc
	
Label_1116:
	var_247_bool = 0; var_248_object = Obj(); // 0x45c PushV
	var_248_object = var_1_object; // 0x45d MovT
	func_9424(var_248_object); // 0x45e NEW_2
	if(var_247_bool == 0) goto Label_1126; // 0x460 JumpB
	var_249_int = 505119; // 0x461 PushI
	var_250_int = 5626; // 0x462 PushI
	var_251_int = 5632; // 0x463 PushI
	AddReply(var_249_int, var_250_int, var_251_int); // 0x464 TObjFunc
	
Label_1126:
	var_252_int = 505120; // 0x466 PushI
	var_253_int = -1; // 0x467 PushI
	var_254_int = 5634; // 0x468 PushI
	AddReply(var_252_int, var_253_int, var_254_int); // 0x469 TObjFunc
	return 0; // 0x46b Return
	
Label_1132:
	var_255_string = ""; // 0x46c PushV
	var_255_string = "Neutral"; // 0x46d MovS
	func_970(var_74_cvector, var_255_string); // 0x46e NEW_2
	var_256_int = 505106; // 0x470 PushI
	SetMessage(var_256_int); // 0x471 TObjFunc
	ClearReplies(); // 0x473 TObjFunc
	var_257_bool = 0; // 0x475 PushV
	var_257_bool = 0; // 0x476 MovB
	var_258_bool = 0; var_259_object = Obj(); // 0x477 PushV
	var_259_object = var_1_object; // 0x478 MovT
	func_9484(var_259_object); // 0x479 NEW_2
	if(var_258_bool == 0) goto Label_1154; // 0x47b JumpB
	var_260_bool = 0; var_261_object = Obj(); // 0x47c PushV
	var_261_object = var_1_object; // 0x47d MovT
	func_9436(var_261_object); // 0x47e NEW_2
	if(var_260_bool == 0) goto Label_1154; // 0x480 JumpB
	var_257_bool = 1; // 0x481 MovB
	
Label_1154:
	if(var_257_bool == 0) goto Label_1160; // 0x482 JumpB
	var_266_int = 505107; // 0x483 PushI
	var_267_int = 9234; // 0x484 PushI
	var_268_int = 5620; // 0x485 PushI
	AddReply(var_266_int, var_267_int, var_268_int); // 0x486 TObjFunc
	
Label_1160:
	var_269_bool = 0; // 0x488 PushV
	var_269_bool = 0; // 0x489 MovB
	var_270_bool = 0; // 0x48a PushV
	var_270_bool = 0; // 0x48b MovB
	var_271_bool = 0; var_272_object = Obj(); // 0x48c PushV
	var_272_object = var_1_object; // 0x48d MovT
	func_9472(var_272_object); // 0x48e NEW_2
	if(var_271_bool == 0) goto Label_1175; // 0x490 JumpB
	var_277_bool = 0; var_278_object = Obj(); // 0x491 PushV
	var_278_object = var_1_object; // 0x492 MovT
	func_9951(var_278_object); // 0x493 NEW_2
	if(var_277_bool == 0) goto Label_1175; // 0x495 JumpB
	var_270_bool = 1; // 0x496 MovB
	
Label_1175:
	if(var_270_bool == 0) goto Label_1182; // 0x497 JumpB
	var_293_bool = 0; var_294_object = Obj(); // 0x498 PushV
	var_294_object = var_1_object; // 0x499 MovT
	func_9448(var_294_object); // 0x49a NEW_2
	if(var_293_bool == 0) goto Label_1182; // 0x49c JumpB
	var_269_bool = 1; // 0x49d MovB
	
Label_1182:
	if(var_269_bool == 0) goto Label_1188; // 0x49e JumpB
	var_299_int = 505142; // 0x49f PushI
	var_300_int = 5662; // 0x4a0 PushI
	var_301_int = 5661; // 0x4a1 PushI
	AddReply(var_299_int, var_300_int, var_301_int); // 0x4a2 TObjFunc
	
Label_1188:
	var_302_bool = 0; var_303_object = Obj(); // 0x4a4 PushV
	var_303_object = var_1_object; // 0x4a5 MovT
	func_9412(var_303_object); // 0x4a6 NEW_2
	if(var_302_bool == 0) goto Label_1198; // 0x4a8 JumpB
	var_308_int = 521229; // 0x4a9 PushI
	var_309_int = 34260; // 0x4aa PushI
	var_310_int = 22420; // 0x4ab PushI
	AddReply(var_308_int, var_309_int, var_310_int); // 0x4ac TObjFunc
	
Label_1198:
	var_311_int = 505110; // 0x4ae PushI
	var_312_int = -1; // 0x4af PushI
	var_313_int = 5623; // 0x4b0 PushI
	AddReply(var_311_int, var_312_int, var_313_int); // 0x4b1 TObjFunc
	return 0; // 0x4b3 Return
	
Label_1204:
	var_314_int = 34260; // 0x4b4 PushI
	var_315_bool = var_73_cvector == var_314_int; // 0x4b5 Eq
	if(var_315_bool == 0) goto Label_1232; // 0x4b6 JumpB
	var_316_string = ""; // 0x4b7 PushV
	var_316_string = "Surprise"; // 0x4b8 MovS
	func_970(var_74_cvector, var_316_string); // 0x4b9 NEW_2
	var_317_int = 532789; // 0x4bb PushI
	SetMessage(var_317_int); // 0x4bc TObjFunc
	ClearReplies(); // 0x4be TObjFunc
	var_318_int = 532790; // 0x4c0 PushI
	var_319_int = 34264; // 0x4c1 PushI
	var_320_int = 34261; // 0x4c2 PushI
	AddReply(var_318_int, var_319_int, var_320_int); // 0x4c3 TObjFunc
	var_321_int = 532791; // 0x4c5 PushI
	var_322_int = 34264; // 0x4c6 PushI
	var_323_int = 34262; // 0x4c7 PushI
	AddReply(var_321_int, var_322_int, var_323_int); // 0x4c8 TObjFunc
	var_324_int = 532792; // 0x4ca PushI
	var_325_int = 22421; // 0x4cb PushI
	var_326_int = 34263; // 0x4cc PushI
	AddReply(var_324_int, var_325_int, var_326_int); // 0x4cd TObjFunc
	return 0; // 0x4cf Return
	
Label_1232:
	var_327_int = 34264; // 0x4d0 PushI
	var_328_bool = var_73_cvector == var_327_int; // 0x4d1 Eq
	if(var_328_bool == 0) goto Label_1260; // 0x4d2 JumpB
	var_329_string = ""; // 0x4d3 PushV
	var_329_string = "Surprise"; // 0x4d4 MovS
	func_970(var_74_cvector, var_329_string); // 0x4d5 NEW_2
	var_330_int = 532793; // 0x4d7 PushI
	SetMessage(var_330_int); // 0x4d8 TObjFunc
	ClearReplies(); // 0x4da TObjFunc
	var_331_int = 532794; // 0x4dc PushI
	var_332_int = 22421; // 0x4dd PushI
	var_333_int = 34266; // 0x4de PushI
	AddReply(var_331_int, var_332_int, var_333_int); // 0x4df TObjFunc
	var_334_int = 532795; // 0x4e1 PushI
	var_335_int = 34268; // 0x4e2 PushI
	var_336_int = 34267; // 0x4e3 PushI
	AddReply(var_334_int, var_335_int, var_336_int); // 0x4e4 TObjFunc
	var_337_int = 532798; // 0x4e6 PushI
	var_338_int = 34273; // 0x4e7 PushI
	var_339_int = 34272; // 0x4e8 PushI
	AddReply(var_337_int, var_338_int, var_339_int); // 0x4e9 TObjFunc
	return 0; // 0x4eb Return
	
Label_1260:
	var_340_int = 34273; // 0x4ec PushI
	var_341_bool = var_73_cvector == var_340_int; // 0x4ed Eq
	if(var_341_bool == 0) goto Label_1283; // 0x4ee JumpB
	var_342_string = ""; // 0x4ef PushV
	var_342_string = "Surprise"; // 0x4f0 MovS
	func_970(var_74_cvector, var_342_string); // 0x4f1 NEW_2
	var_343_int = 532799; // 0x4f3 PushI
	SetMessage(var_343_int); // 0x4f4 TObjFunc
	ClearReplies(); // 0x4f6 TObjFunc
	var_344_int = 532800; // 0x4f8 PushI
	var_345_int = 22421; // 0x4f9 PushI
	var_346_int = 34274; // 0x4fa PushI
	AddReply(var_344_int, var_345_int, var_346_int); // 0x4fb TObjFunc
	var_347_int = 532801; // 0x4fd PushI
	var_348_int = 22424; // 0x4fe PushI
	var_349_int = 34276; // 0x4ff PushI
	AddReply(var_347_int, var_348_int, var_349_int); // 0x500 TObjFunc
	return 0; // 0x502 Return
	
Label_1283:
	var_350_int = 34268; // 0x503 PushI
	var_351_bool = var_73_cvector == var_350_int; // 0x504 Eq
	if(var_351_bool == 0) goto Label_1301; // 0x505 JumpB
	var_352_string = ""; // 0x506 PushV
	var_352_string = "Surprise"; // 0x507 MovS
	func_970(var_74_cvector, var_352_string); // 0x508 NEW_2
	var_353_int = 532796; // 0x50a PushI
	SetMessage(var_353_int); // 0x50b TObjFunc
	ClearReplies(); // 0x50d TObjFunc
	var_354_int = 532797; // 0x50f PushI
	var_355_int = 22421; // 0x510 PushI
	var_356_int = 34270; // 0x511 PushI
	AddReply(var_354_int, var_355_int, var_356_int); // 0x512 TObjFunc
	return 0; // 0x514 Return
	
Label_1301:
	var_357_int = 22421; // 0x515 PushI
	var_358_bool = var_73_cvector == var_357_int; // 0x516 Eq
	if(var_358_bool == 0) goto Label_1324; // 0x517 JumpB
	var_359_string = ""; // 0x518 PushV
	var_359_string = "Surprise"; // 0x519 MovS
	func_970(var_74_cvector, var_359_string); // 0x51a NEW_2
	var_360_int = 521230; // 0x51c PushI
	SetMessage(var_360_int); // 0x51d TObjFunc
	ClearReplies(); // 0x51f TObjFunc
	var_361_int = 521231; // 0x521 PushI
	var_362_int = 22424; // 0x522 PushI
	var_363_int = 22422; // 0x523 PushI
	AddReply(var_361_int, var_362_int, var_363_int); // 0x524 TObjFunc
	var_364_int = 521232; // 0x526 PushI
	var_365_int = -1; // 0x527 PushI
	var_366_int = 22423; // 0x528 PushI
	AddReply(var_364_int, var_365_int, var_366_int); // 0x529 TObjFunc
	return 0; // 0x52b Return
	
Label_1324:
	var_367_int = 22424; // 0x52c PushI
	var_368_bool = var_73_cvector == var_367_int; // 0x52d Eq
	if(var_368_bool == 0) goto Label_1347; // 0x52e JumpB
	var_369_string = ""; // 0x52f PushV
	var_369_string = "Surprise"; // 0x530 MovS
	func_970(var_74_cvector, var_369_string); // 0x531 NEW_2
	var_370_int = 521233; // 0x533 PushI
	SetMessage(var_370_int); // 0x534 TObjFunc
	ClearReplies(); // 0x536 TObjFunc
	var_371_int = 521234; // 0x538 PushI
	var_372_int = -1; // 0x539 PushI
	var_373_int = 22425; // 0x53a PushI
	AddReply(var_371_int, var_372_int, var_373_int); // 0x53b TObjFunc
	var_374_int = 521235; // 0x53d PushI
	var_375_int = -1; // 0x53e PushI
	var_376_int = 22426; // 0x53f PushI
	AddReply(var_374_int, var_375_int, var_376_int); // 0x540 TObjFunc
	return 0; // 0x542 Return
	
Label_1347:
	var_377_int = 5662; // 0x543 PushI
	var_378_bool = var_73_cvector == var_377_int; // 0x544 Eq
	if(var_378_bool == 0) goto Label_1370; // 0x545 JumpB
	var_379_string = ""; // 0x546 PushV
	var_379_string = "Confusion"; // 0x547 MovS
	func_970(var_74_cvector, var_379_string); // 0x548 NEW_2
	var_380_int = 505143; // 0x54a PushI
	SetMessage(var_380_int); // 0x54b TObjFunc
	ClearReplies(); // 0x54d TObjFunc
	var_381_int = 505144; // 0x54f PushI
	var_382_int = 5664; // 0x550 PushI
	var_383_int = 5663; // 0x551 PushI
	AddReply(var_381_int, var_382_int, var_383_int); // 0x552 TObjFunc
	var_384_int = 505154; // 0x554 PushI
	var_385_int = 5664; // 0x555 PushI
	var_386_int = 5674; // 0x556 PushI
	AddReply(var_384_int, var_385_int, var_386_int); // 0x557 TObjFunc
	return 0; // 0x559 Return
	
Label_1370:
	var_387_int = 5664; // 0x55a PushI
	var_388_bool = var_73_cvector == var_387_int; // 0x55b Eq
	if(var_388_bool == 0) goto Label_1393; // 0x55c JumpB
	var_389_string = ""; // 0x55d PushV
	var_389_string = "Confusion"; // 0x55e MovS
	func_970(var_74_cvector, var_389_string); // 0x55f NEW_2
	var_390_int = 505145; // 0x561 PushI
	SetMessage(var_390_int); // 0x562 TObjFunc
	ClearReplies(); // 0x564 TObjFunc
	var_391_int = 505146; // 0x566 PushI
	var_392_int = 5666; // 0x567 PushI
	var_393_int = 5665; // 0x568 PushI
	AddReply(var_391_int, var_392_int, var_393_int); // 0x569 TObjFunc
	var_394_int = 505153; // 0x56b PushI
	var_395_int = 5666; // 0x56c PushI
	var_396_int = 5672; // 0x56d PushI
	AddReply(var_394_int, var_395_int, var_396_int); // 0x56e TObjFunc
	return 0; // 0x570 Return
	
Label_1393:
	var_397_int = 5666; // 0x571 PushI
	var_398_bool = var_73_cvector == var_397_int; // 0x572 Eq
	if(var_398_bool == 0) goto Label_1416; // 0x573 JumpB
	var_399_string = ""; // 0x574 PushV
	var_399_string = "Anger"; // 0x575 MovS
	func_970(var_74_cvector, var_399_string); // 0x576 NEW_2
	var_400_int = 505147; // 0x578 PushI
	SetMessage(var_400_int); // 0x579 TObjFunc
	ClearReplies(); // 0x57b TObjFunc
	var_401_int = 505148; // 0x57d PushI
	var_402_int = 34256; // 0x57e PushI
	var_403_int = 5667; // 0x57f PushI
	AddReply(var_401_int, var_402_int, var_403_int); // 0x580 TObjFunc
	var_404_int = 505149; // 0x582 PushI
	var_405_int = -1; // 0x583 PushI
	var_406_int = 5668; // 0x584 PushI
	AddReply(var_404_int, var_405_int, var_406_int); // 0x585 TObjFunc
	return 0; // 0x587 Return
	
Label_1416:
	var_407_int = 34256; // 0x588 PushI
	var_408_bool = var_73_cvector == var_407_int; // 0x589 Eq
	if(var_408_bool == 0) goto Label_1434; // 0x58a JumpB
	var_409_string = ""; // 0x58b PushV
	var_409_string = "Anger"; // 0x58c MovS
	func_970(var_74_cvector, var_409_string); // 0x58d NEW_2
	var_410_int = 532785; // 0x58f PushI
	SetMessage(var_410_int); // 0x590 TObjFunc
	ClearReplies(); // 0x592 TObjFunc
	var_411_int = 532786; // 0x594 PushI
	var_412_int = -1; // 0x595 PushI
	var_413_int = 34257; // 0x596 PushI
	AddReply(var_411_int, var_412_int, var_413_int); // 0x597 TObjFunc
	return 0; // 0x599 Return
	
Label_1434:
	var_414_int = 9234; // 0x59a PushI
	var_415_bool = var_73_cvector == var_414_int; // 0x59b Eq
	if(var_415_bool == 0) goto Label_1467; // 0x59c JumpB
	var_416_string = ""; // 0x59d PushV
	var_416_string = "Surprise"; // 0x59e MovS
	func_970(var_74_cvector, var_416_string); // 0x59f NEW_2
	var_417_int = 508411; // 0x5a1 PushI
	SetMessage(var_417_int); // 0x5a2 TObjFunc
	ClearReplies(); // 0x5a4 TObjFunc
	var_418_bool = 0; var_419_object = Obj(); // 0x5a6 PushV
	var_419_object = var_1_object; // 0x5a7 MovT
	func_9651(var_419_object); // 0x5a8 NEW_2
	if(var_418_bool == 0) goto Label_1456; // 0x5aa JumpB
	var_424_int = 508448; // 0x5ab PushI
	var_425_int = 9282; // 0x5ac PushI
	var_426_int = 9281; // 0x5ad PushI
	AddReply(var_424_int, var_425_int, var_426_int); // 0x5ae TObjFunc
	
Label_1456:
	var_427_bool = 0; var_428_object = Obj(); // 0x5b0 PushV
	var_428_object = var_1_object; // 0x5b1 MovT
	func_9460(var_428_object); // 0x5b2 NEW_2
	if(var_427_bool == 0) goto Label_1466; // 0x5b4 JumpB
	var_433_int = 508463; // 0x5b5 PushI
	var_434_int = 9300; // 0x5b6 PushI
	var_435_int = 9299; // 0x5b7 PushI
	AddReply(var_433_int, var_434_int, var_435_int); // 0x5b8 TObjFunc
	
Label_1466:
	return 0; // 0x5ba Return
	
Label_1467:
	var_436_int = 9300; // 0x5bb PushI
	var_437_bool = var_73_cvector == var_436_int; // 0x5bc Eq
	if(var_437_bool == 0) goto Label_1485; // 0x5bd JumpB
	var_438_string = ""; // 0x5be PushV
	var_438_string = "Neutral"; // 0x5bf MovS
	func_970(var_74_cvector, var_438_string); // 0x5c0 NEW_2
	var_439_int = 508464; // 0x5c2 PushI
	SetMessage(var_439_int); // 0x5c3 TObjFunc
	ClearReplies(); // 0x5c5 TObjFunc
	var_440_int = 508465; // 0x5c7 PushI
	var_441_int = -1; // 0x5c8 PushI
	var_442_int = 9301; // 0x5c9 PushI
	AddReply(var_440_int, var_441_int, var_442_int); // 0x5ca TObjFunc
	return 0; // 0x5cc Return
	
Label_1485:
	var_443_int = 9282; // 0x5cd PushI
	var_444_bool = var_73_cvector == var_443_int; // 0x5ce Eq
	if(var_444_bool == 0) goto Label_1513; // 0x5cf JumpB
	var_445_string = ""; // 0x5d0 PushV
	var_445_string = "Surprise"; // 0x5d1 MovS
	func_970(var_74_cvector, var_445_string); // 0x5d2 NEW_2
	var_446_int = 508449; // 0x5d4 PushI
	SetMessage(var_446_int); // 0x5d5 TObjFunc
	ClearReplies(); // 0x5d7 TObjFunc
	var_447_int = 508451; // 0x5d9 PushI
	var_448_int = 9287; // 0x5da PushI
	var_449_int = 9284; // 0x5db PushI
	AddReply(var_447_int, var_448_int, var_449_int); // 0x5dc TObjFunc
	var_450_int = 508452; // 0x5de PushI
	var_451_int = 9287; // 0x5df PushI
	var_452_int = 9285; // 0x5e0 PushI
	AddReply(var_450_int, var_451_int, var_452_int); // 0x5e1 TObjFunc
	var_453_int = 508453; // 0x5e3 PushI
	var_454_int = 9287; // 0x5e4 PushI
	var_455_int = 9286; // 0x5e5 PushI
	AddReply(var_453_int, var_454_int, var_455_int); // 0x5e6 TObjFunc
	return 0; // 0x5e8 Return
	
Label_1513:
	var_456_int = 9287; // 0x5e9 PushI
	var_457_bool = var_73_cvector == var_456_int; // 0x5ea Eq
	if(var_457_bool == 0) goto Label_1531; // 0x5eb JumpB
	var_458_string = ""; // 0x5ec PushV
	var_458_string = "Neutral"; // 0x5ed MovS
	func_970(var_74_cvector, var_458_string); // 0x5ee NEW_2
	var_459_int = 508454; // 0x5f0 PushI
	SetMessage(var_459_int); // 0x5f1 TObjFunc
	ClearReplies(); // 0x5f3 TObjFunc
	var_460_int = 524819; // 0x5f5 PushI
	var_461_int = 26132; // 0x5f6 PushI
	var_462_int = 26131; // 0x5f7 PushI
	AddReply(var_460_int, var_461_int, var_462_int); // 0x5f8 TObjFunc
	return 0; // 0x5fa Return
	
Label_1531:
	var_463_int = 26132; // 0x5fb PushI
	var_464_bool = var_73_cvector == var_463_int; // 0x5fc Eq
	if(var_464_bool == 0) goto Label_1559; // 0x5fd JumpB
	var_465_string = ""; // 0x5fe PushV
	var_465_string = "Confusion"; // 0x5ff MovS
	func_970(var_74_cvector, var_465_string); // 0x600 NEW_2
	var_466_int = 524820; // 0x602 PushI
	SetMessage(var_466_int); // 0x603 TObjFunc
	ClearReplies(); // 0x605 TObjFunc
	var_467_int = 524821; // 0x607 PushI
	var_468_int = 26134; // 0x608 PushI
	var_469_int = 26133; // 0x609 PushI
	AddReply(var_467_int, var_468_int, var_469_int); // 0x60a TObjFunc
	var_470_int = 508412; // 0x60c PushI
	var_471_int = 9236; // 0x60d PushI
	var_472_int = 9235; // 0x60e PushI
	AddReply(var_470_int, var_471_int, var_472_int); // 0x60f TObjFunc
	var_473_int = 524920; // 0x611 PushI
	var_474_int = 26250; // 0x612 PushI
	var_475_int = 26249; // 0x613 PushI
	AddReply(var_473_int, var_474_int, var_475_int); // 0x614 TObjFunc
	return 0; // 0x616 Return
	
Label_1559:
	var_476_int = 26250; // 0x617 PushI
	var_477_bool = var_73_cvector == var_476_int; // 0x618 Eq
	if(var_477_bool == 0) goto Label_1582; // 0x619 JumpB
	var_478_string = ""; // 0x61a PushV
	var_478_string = "Neutral"; // 0x61b MovS
	func_970(var_74_cvector, var_478_string); // 0x61c NEW_2
	var_479_int = 524921; // 0x61e PushI
	SetMessage(var_479_int); // 0x61f TObjFunc
	ClearReplies(); // 0x621 TObjFunc
	var_480_int = 524922; // 0x623 PushI
	var_481_int = 9240; // 0x624 PushI
	var_482_int = 26251; // 0x625 PushI
	AddReply(var_480_int, var_481_int, var_482_int); // 0x626 TObjFunc
	var_483_int = 524924; // 0x628 PushI
	var_484_int = 9251; // 0x629 PushI
	var_485_int = 26254; // 0x62a PushI
	AddReply(var_483_int, var_484_int, var_485_int); // 0x62b TObjFunc
	return 0; // 0x62d Return
	
Label_1582:
	var_486_int = 9236; // 0x62e PushI
	var_487_bool = var_73_cvector == var_486_int; // 0x62f Eq
	if(var_487_bool == 0) goto Label_1600; // 0x630 JumpB
	var_488_string = ""; // 0x631 PushV
	var_488_string = "Neutral"; // 0x632 MovS
	func_970(var_74_cvector, var_488_string); // 0x633 NEW_2
	var_489_int = 508413; // 0x635 PushI
	SetMessage(var_489_int); // 0x636 TObjFunc
	ClearReplies(); // 0x638 TObjFunc
	var_490_int = 508414; // 0x63a PushI
	var_491_int = 9238; // 0x63b PushI
	var_492_int = 9237; // 0x63c PushI
	AddReply(var_490_int, var_491_int, var_492_int); // 0x63d TObjFunc
	return 0; // 0x63f Return
	
Label_1600:
	var_493_int = 9238; // 0x640 PushI
	var_494_bool = var_73_cvector == var_493_int; // 0x641 Eq
	if(var_494_bool == 0) goto Label_1623; // 0x642 JumpB
	var_495_string = ""; // 0x643 PushV
	var_495_string = "Confusion"; // 0x644 MovS
	func_970(var_74_cvector, var_495_string); // 0x645 NEW_2
	var_496_int = 508415; // 0x647 PushI
	SetMessage(var_496_int); // 0x648 TObjFunc
	ClearReplies(); // 0x64a TObjFunc
	var_497_int = 508416; // 0x64c PushI
	var_498_int = 9240; // 0x64d PushI
	var_499_int = 9239; // 0x64e PushI
	AddReply(var_497_int, var_498_int, var_499_int); // 0x64f TObjFunc
	var_500_int = 508418; // 0x651 PushI
	var_501_int = 9242; // 0x652 PushI
	var_502_int = 9241; // 0x653 PushI
	AddReply(var_500_int, var_501_int, var_502_int); // 0x654 TObjFunc
	return 0; // 0x656 Return
	
Label_1623:
	var_503_int = 9242; // 0x657 PushI
	var_504_bool = var_73_cvector == var_503_int; // 0x658 Eq
	if(var_504_bool == 0) goto Label_1641; // 0x659 JumpB
	var_505_string = ""; // 0x65a PushV
	var_505_string = "Surprise"; // 0x65b MovS
	func_970(var_74_cvector, var_505_string); // 0x65c NEW_2
	var_506_int = 508419; // 0x65e PushI
	SetMessage(var_506_int); // 0x65f TObjFunc
	ClearReplies(); // 0x661 TObjFunc
	var_507_int = 508456; // 0x663 PushI
	var_508_int = 9292; // 0x664 PushI
	var_509_int = 9291; // 0x665 PushI
	AddReply(var_507_int, var_508_int, var_509_int); // 0x666 TObjFunc
	return 0; // 0x668 Return
	
Label_1641:
	var_510_int = 9292; // 0x669 PushI
	var_511_bool = var_73_cvector == var_510_int; // 0x66a Eq
	if(var_511_bool == 0) goto Label_1659; // 0x66b JumpB
	var_512_string = ""; // 0x66c PushV
	var_512_string = "Surprise"; // 0x66d MovS
	func_970(var_74_cvector, var_512_string); // 0x66e NEW_2
	var_513_int = 508457; // 0x670 PushI
	SetMessage(var_513_int); // 0x671 TObjFunc
	ClearReplies(); // 0x673 TObjFunc
	var_514_int = 524827; // 0x675 PushI
	var_515_int = 26134; // 0x676 PushI
	var_516_int = 26140; // 0x677 PushI
	AddReply(var_514_int, var_515_int, var_516_int); // 0x678 TObjFunc
	return 0; // 0x67a Return
	
Label_1659:
	var_517_int = 9240; // 0x67b PushI
	var_518_bool = var_73_cvector == var_517_int; // 0x67c Eq
	if(var_518_bool == 0) goto Label_1677; // 0x67d JumpB
	var_519_string = ""; // 0x67e PushV
	var_519_string = "Fear"; // 0x67f MovS
	func_970(var_74_cvector, var_519_string); // 0x680 NEW_2
	var_520_int = 508417; // 0x682 PushI
	SetMessage(var_520_int); // 0x683 TObjFunc
	ClearReplies(); // 0x685 TObjFunc
	var_521_int = 524826; // 0x687 PushI
	var_522_int = 26134; // 0x688 PushI
	var_523_int = 26138; // 0x689 PushI
	AddReply(var_521_int, var_522_int, var_523_int); // 0x68a TObjFunc
	return 0; // 0x68c Return
	
Label_1677:
	var_524_int = 26134; // 0x68d PushI
	var_525_bool = var_73_cvector == var_524_int; // 0x68e Eq
	if(var_525_bool == 0) goto Label_1700; // 0x68f JumpB
	var_526_string = ""; // 0x690 PushV
	var_526_string = "Confusion"; // 0x691 MovS
	func_970(var_74_cvector, var_526_string); // 0x692 NEW_2
	var_527_int = 524822; // 0x694 PushI
	SetMessage(var_527_int); // 0x695 TObjFunc
	ClearReplies(); // 0x697 TObjFunc
	var_528_int = 524823; // 0x699 PushI
	var_529_int = 33604; // 0x69a PushI
	var_530_int = 26135; // 0x69b PushI
	AddReply(var_528_int, var_529_int, var_530_int); // 0x69c TObjFunc
	var_531_int = 508422; // 0x69e PushI
	var_532_int = 9251; // 0x69f PushI
	var_533_int = 9245; // 0x6a0 PushI
	AddReply(var_531_int, var_532_int, var_533_int); // 0x6a1 TObjFunc
	return 0; // 0x6a3 Return
	
Label_1700:
	var_534_int = 9251; // 0x6a4 PushI
	var_535_bool = var_73_cvector == var_534_int; // 0x6a5 Eq
	if(var_535_bool == 0) goto Label_1718; // 0x6a6 JumpB
	var_536_string = ""; // 0x6a7 PushV
	var_536_string = "Confusion"; // 0x6a8 MovS
	func_970(var_74_cvector, var_536_string); // 0x6a9 NEW_2
	var_537_int = 508428; // 0x6ab PushI
	SetMessage(var_537_int); // 0x6ac TObjFunc
	ClearReplies(); // 0x6ae TObjFunc
	var_538_int = 508429; // 0x6b0 PushI
	var_539_int = 9296; // 0x6b1 PushI
	var_540_int = 9252; // 0x6b2 PushI
	AddReply(var_538_int, var_539_int, var_540_int); // 0x6b3 TObjFunc
	return 0; // 0x6b5 Return
	
Label_1718:
	var_541_int = 9296; // 0x6b6 PushI
	var_542_bool = var_73_cvector == var_541_int; // 0x6b7 Eq
	if(var_542_bool == 0) goto Label_1736; // 0x6b8 JumpB
	var_543_string = ""; // 0x6b9 PushV
	var_543_string = "Confusion"; // 0x6ba MovS
	func_970(var_74_cvector, var_543_string); // 0x6bb NEW_2
	var_544_int = 508460; // 0x6bd PushI
	SetMessage(var_544_int); // 0x6be TObjFunc
	ClearReplies(); // 0x6c0 TObjFunc
	var_545_int = 524836; // 0x6c2 PushI
	var_546_int = 9254; // 0x6c3 PushI
	var_547_int = 26151; // 0x6c4 PushI
	AddReply(var_545_int, var_546_int, var_547_int); // 0x6c5 TObjFunc
	return 0; // 0x6c7 Return
	
Label_1736:
	var_548_int = 33604; // 0x6c8 PushI
	var_549_bool = var_73_cvector == var_548_int; // 0x6c9 Eq
	if(var_549_bool == 0) goto Label_1759; // 0x6ca JumpB
	var_550_string = ""; // 0x6cb PushV
	var_550_string = "Confusion"; // 0x6cc MovS
	func_970(var_74_cvector, var_550_string); // 0x6cd NEW_2
	var_551_int = 532187; // 0x6cf PushI
	SetMessage(var_551_int); // 0x6d0 TObjFunc
	ClearReplies(); // 0x6d2 TObjFunc
	var_552_int = 508420; // 0x6d4 PushI
	var_553_int = 9244; // 0x6d5 PushI
	var_554_int = 9243; // 0x6d6 PushI
	AddReply(var_552_int, var_553_int, var_554_int); // 0x6d7 TObjFunc
	var_555_int = 532775; // 0x6d9 PushI
	var_556_int = 34244; // 0x6da PushI
	var_557_int = 34243; // 0x6db PushI
	AddReply(var_555_int, var_556_int, var_557_int); // 0x6dc TObjFunc
	return 0; // 0x6de Return
	
Label_1759:
	var_558_int = 34244; // 0x6df PushI
	var_559_bool = var_73_cvector == var_558_int; // 0x6e0 Eq
	if(var_559_bool == 0) goto Label_1777; // 0x6e1 JumpB
	var_560_string = ""; // 0x6e2 PushV
	var_560_string = "Surprise"; // 0x6e3 MovS
	func_970(var_74_cvector, var_560_string); // 0x6e4 NEW_2
	var_561_int = 532776; // 0x6e6 PushI
	SetMessage(var_561_int); // 0x6e7 TObjFunc
	ClearReplies(); // 0x6e9 TObjFunc
	var_562_int = 532777; // 0x6eb PushI
	var_563_int = 9254; // 0x6ec PushI
	var_564_int = 34245; // 0x6ed PushI
	AddReply(var_562_int, var_563_int, var_564_int); // 0x6ee TObjFunc
	return 0; // 0x6f0 Return
	
Label_1777:
	var_565_int = 9244; // 0x6f1 PushI
	var_566_bool = var_73_cvector == var_565_int; // 0x6f2 Eq
	if(var_566_bool == 0) goto Label_1800; // 0x6f3 JumpB
	var_567_string = ""; // 0x6f4 PushV
	var_567_string = "Confusion"; // 0x6f5 MovS
	func_970(var_74_cvector, var_567_string); // 0x6f6 NEW_2
	var_568_int = 508421; // 0x6f8 PushI
	SetMessage(var_568_int); // 0x6f9 TObjFunc
	ClearReplies(); // 0x6fb TObjFunc
	var_569_int = 508430; // 0x6fd PushI
	var_570_int = 9254; // 0x6fe PushI
	var_571_int = 9253; // 0x6ff PushI
	AddReply(var_569_int, var_570_int, var_571_int); // 0x700 TObjFunc
	var_572_int = 524845; // 0x702 PushI
	var_573_int = 9251; // 0x703 PushI
	var_574_int = 26165; // 0x704 PushI
	AddReply(var_572_int, var_573_int, var_574_int); // 0x705 TObjFunc
	return 0; // 0x707 Return
	
Label_1800:
	var_575_int = 9254; // 0x708 PushI
	var_576_bool = var_73_cvector == var_575_int; // 0x709 Eq
	if(var_576_bool == 0) goto Label_1823; // 0x70a JumpB
	var_577_string = ""; // 0x70b PushV
	var_577_string = "Surprise"; // 0x70c MovS
	func_970(var_74_cvector, var_577_string); // 0x70d NEW_2
	var_578_int = 508431; // 0x70f PushI
	SetMessage(var_578_int); // 0x710 TObjFunc
	ClearReplies(); // 0x712 TObjFunc
	var_579_int = 524846; // 0x714 PushI
	var_580_int = 33605; // 0x715 PushI
	var_581_int = 26167; // 0x716 PushI
	AddReply(var_579_int, var_580_int, var_581_int); // 0x717 TObjFunc
	var_582_int = 508432; // 0x719 PushI
	var_583_int = 9256; // 0x71a PushI
	var_584_int = 9255; // 0x71b PushI
	AddReply(var_582_int, var_583_int, var_584_int); // 0x71c TObjFunc
	return 0; // 0x71e Return
	
Label_1823:
	var_585_int = 9256; // 0x71f PushI
	var_586_bool = var_73_cvector == var_585_int; // 0x720 Eq
	if(var_586_bool == 0) goto Label_1841; // 0x721 JumpB
	var_587_string = ""; // 0x722 PushV
	var_587_string = "Neutral"; // 0x723 MovS
	func_970(var_74_cvector, var_587_string); // 0x724 NEW_2
	var_588_int = 508433; // 0x726 PushI
	SetMessage(var_588_int); // 0x727 TObjFunc
	ClearReplies(); // 0x729 TObjFunc
	var_589_int = 508434; // 0x72b PushI
	var_590_int = 9258; // 0x72c PushI
	var_591_int = 9257; // 0x72d PushI
	AddReply(var_589_int, var_590_int, var_591_int); // 0x72e TObjFunc
	return 0; // 0x730 Return
	
Label_1841:
	var_592_int = 9258; // 0x731 PushI
	var_593_bool = var_73_cvector == var_592_int; // 0x732 Eq
	if(var_593_bool == 0) goto Label_1864; // 0x733 JumpB
	var_594_string = ""; // 0x734 PushV
	var_594_string = "Neutral"; // 0x735 MovS
	func_970(var_74_cvector, var_594_string); // 0x736 NEW_2
	var_595_int = 508435; // 0x738 PushI
	SetMessage(var_595_int); // 0x739 TObjFunc
	ClearReplies(); // 0x73b TObjFunc
	var_596_int = 508436; // 0x73d PushI
	var_597_int = 33605; // 0x73e PushI
	var_598_int = 9259; // 0x73f PushI
	AddReply(var_596_int, var_597_int, var_598_int); // 0x740 TObjFunc
	var_599_int = 524828; // 0x742 PushI
	var_600_int = 26143; // 0x743 PushI
	var_601_int = 26142; // 0x744 PushI
	AddReply(var_599_int, var_600_int, var_601_int); // 0x745 TObjFunc
	return 0; // 0x747 Return
	
Label_1864:
	var_602_int = 26143; // 0x748 PushI
	var_603_bool = var_73_cvector == var_602_int; // 0x749 Eq
	if(var_603_bool == 0) goto Label_1882; // 0x74a JumpB
	var_604_string = ""; // 0x74b PushV
	var_604_string = "Neutral"; // 0x74c MovS
	func_970(var_74_cvector, var_604_string); // 0x74d NEW_2
	var_605_int = 524829; // 0x74f PushI
	SetMessage(var_605_int); // 0x750 TObjFunc
	ClearReplies(); // 0x752 TObjFunc
	var_606_int = 524830; // 0x754 PushI
	var_607_int = 33605; // 0x755 PushI
	var_608_int = 26144; // 0x756 PushI
	AddReply(var_606_int, var_607_int, var_608_int); // 0x757 TObjFunc
	return 0; // 0x759 Return
	
Label_1882:
	var_609_int = 33605; // 0x75a PushI
	var_610_bool = var_73_cvector == var_609_int; // 0x75b Eq
	if(var_610_bool == 0) goto Label_1905; // 0x75c JumpB
	var_611_string = ""; // 0x75d PushV
	var_611_string = "Neutral"; // 0x75e MovS
	func_970(var_74_cvector, var_611_string); // 0x75f NEW_2
	var_612_int = 532188; // 0x761 PushI
	SetMessage(var_612_int); // 0x762 TObjFunc
	ClearReplies(); // 0x764 TObjFunc
	var_613_int = 532189; // 0x766 PushI
	var_614_int = 33607; // 0x767 PushI
	var_615_int = 33606; // 0x768 PushI
	AddReply(var_613_int, var_614_int, var_615_int); // 0x769 TObjFunc
	var_616_int = 532778; // 0x76b PushI
	var_617_int = 34248; // 0x76c PushI
	var_618_int = 34247; // 0x76d PushI
	AddReply(var_616_int, var_617_int, var_618_int); // 0x76e TObjFunc
	return 0; // 0x770 Return
	
Label_1905:
	var_619_int = 34248; // 0x771 PushI
	var_620_bool = var_73_cvector == var_619_int; // 0x772 Eq
	if(var_620_bool == 0) goto Label_1928; // 0x773 JumpB
	var_621_string = ""; // 0x774 PushV
	var_621_string = "Neutral"; // 0x775 MovS
	func_970(var_74_cvector, var_621_string); // 0x776 NEW_2
	var_622_int = 532779; // 0x778 PushI
	SetMessage(var_622_int); // 0x779 TObjFunc
	ClearReplies(); // 0x77b TObjFunc
	var_623_int = 532780; // 0x77d PushI
	var_624_int = 34251; // 0x77e PushI
	var_625_int = 34249; // 0x77f PushI
	AddReply(var_623_int, var_624_int, var_625_int); // 0x780 TObjFunc
	var_626_int = 532781; // 0x782 PushI
	var_627_int = 34251; // 0x783 PushI
	var_628_int = 34250; // 0x784 PushI
	AddReply(var_626_int, var_627_int, var_628_int); // 0x785 TObjFunc
	return 0; // 0x787 Return
	
Label_1928:
	var_629_int = 34251; // 0x788 PushI
	var_630_bool = var_73_cvector == var_629_int; // 0x789 Eq
	if(var_630_bool == 0) goto Label_1951; // 0x78a JumpB
	var_631_string = ""; // 0x78b PushV
	var_631_string = "Neutral"; // 0x78c MovS
	func_970(var_74_cvector, var_631_string); // 0x78d NEW_2
	var_632_int = 532782; // 0x78f PushI
	SetMessage(var_632_int); // 0x790 TObjFunc
	ClearReplies(); // 0x792 TObjFunc
	var_633_int = 532783; // 0x794 PushI
	var_634_int = 33607; // 0x795 PushI
	var_635_int = 34253; // 0x796 PushI
	AddReply(var_633_int, var_634_int, var_635_int); // 0x797 TObjFunc
	var_636_int = 532784; // 0x799 PushI
	var_637_int = -1; // 0x79a PushI
	var_638_int = 34255; // 0x79b PushI
	AddReply(var_636_int, var_637_int, var_638_int); // 0x79c TObjFunc
	return 0; // 0x79e Return
	
Label_1951:
	var_639_int = 33607; // 0x79f PushI
	var_640_bool = var_73_cvector == var_639_int; // 0x7a0 Eq
	if(var_640_bool == 0) goto Label_1974; // 0x7a1 JumpB
	var_641_string = ""; // 0x7a2 PushV
	var_641_string = "Neutral"; // 0x7a3 MovS
	func_970(var_74_cvector, var_641_string); // 0x7a4 NEW_2
	var_642_int = 532190; // 0x7a6 PushI
	SetMessage(var_642_int); // 0x7a7 TObjFunc
	ClearReplies(); // 0x7a9 TObjFunc
	var_643_int = 532191; // 0x7ab PushI
	var_644_int = -1; // 0x7ac PushI
	var_645_int = 33610; // 0x7ad PushI
	AddReply(var_643_int, var_644_int, var_645_int); // 0x7ae TObjFunc
	var_646_int = 532192; // 0x7b0 PushI
	var_647_int = -1; // 0x7b1 PushI
	var_648_int = 33611; // 0x7b2 PushI
	AddReply(var_646_int, var_647_int, var_648_int); // 0x7b3 TObjFunc
	return 0; // 0x7b5 Return
	
Label_1974:
	var_649_int = 5626; // 0x7b6 PushI
	var_650_bool = var_73_cvector == var_649_int; // 0x7b7 Eq
	if(var_650_bool == 0) goto Label_1997; // 0x7b8 JumpB
	var_651_string = ""; // 0x7b9 PushV
	var_651_string = "Confusion"; // 0x7ba MovS
	func_970(var_74_cvector, var_651_string); // 0x7bb NEW_2
	var_652_int = 505113; // 0x7bd PushI
	SetMessage(var_652_int); // 0x7be TObjFunc
	ClearReplies(); // 0x7c0 TObjFunc
	var_653_int = 505114; // 0x7c2 PushI
	var_654_int = 5628; // 0x7c3 PushI
	var_655_int = 5627; // 0x7c4 PushI
	AddReply(var_653_int, var_654_int, var_655_int); // 0x7c5 TObjFunc
	var_656_int = 505118; // 0x7c7 PushI
	var_657_int = -1; // 0x7c8 PushI
	var_658_int = 5631; // 0x7c9 PushI
	AddReply(var_656_int, var_657_int, var_658_int); // 0x7ca TObjFunc
	return 0; // 0x7cc Return
	
Label_1997:
	var_659_int = 5628; // 0x7cd PushI
	var_660_bool = var_73_cvector == var_659_int; // 0x7ce Eq
	if(var_660_bool == 0) goto Label_2020; // 0x7cf JumpB
	var_661_string = ""; // 0x7d0 PushV
	var_661_string = "Confusion"; // 0x7d1 MovS
	func_970(var_74_cvector, var_661_string); // 0x7d2 NEW_2
	var_662_int = 505115; // 0x7d4 PushI
	SetMessage(var_662_int); // 0x7d5 TObjFunc
	ClearReplies(); // 0x7d7 TObjFunc
	var_663_int = 505116; // 0x7d9 PushI
	var_664_int = -1; // 0x7da PushI
	var_665_int = 5629; // 0x7db PushI
	AddReply(var_663_int, var_664_int, var_665_int); // 0x7dc TObjFunc
	var_666_int = 505117; // 0x7de PushI
	var_667_int = -1; // 0x7df PushI
	var_668_int = 5630; // 0x7e0 PushI
	AddReply(var_666_int, var_667_int, var_668_int); // 0x7e1 TObjFunc
	return 0; // 0x7e3 Return
	
Label_2020:
	var_3_string = 1; // 0x7e4 TMovB
	var_669_bool = 0; // 0x7e5 PushV
	func_8923(var_669_bool); // 0x7e6 NEW_2
	if(var_669_bool == 0) goto Label_2028; // 0x7e8 JumpB
	lshStopAnimation(); // 0x7e9 Func
	goto Label_2030; // 0x7eb Jump
	
Label_2030:
	return 0; // 0x7ee Return
	
Label_2028:
	StopAnimation(); // 0x7ec Func
	
Label_2032:
	return 0; // 0x7f0 Return
}


task_8_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_object, var_53_object, var_54_object, var_55_string, var_56_bool, var_57_object, var_58_object, var_59_object, var_60_string, var_61_bool, var_62_object, var_63_object, var_64_object, var_65_string, var_66_bool, var_67_object, var_68_object, var_69_object, var_70_string, var_71_bool, var_72_bool, var_73_cvector, var_74_cvector)
{
	var_75_int = 1; // 0x8b9 PushI
	if(var_75_int == 0) goto Label_2598; // 0x8ba JumpB
	func_8750(); // 0x8bc NEW_2
	var_77_int = 8194; // 0x8be PushI
	var_78_bool = var_74_cvector == var_77_int; // 0x8bf Eq
	if(var_78_bool == 0) goto Label_2256; // 0x8c0 JumpB
	var_79_object = Obj(); var_80_object = Obj(); // 0x8c1 PushV
	var_79_object = var_1_object; // 0x8c2 MovT
	var_80_object = var_0_object; // 0x8c3 MovT
	func_9089(); // 0x8c4 NEW_2
	var_83_object = Obj(); var_84_object = Obj(); // 0x8c6 PushV
	var_83_object = var_1_object; // 0x8c7 MovT
	var_84_object = var_0_object; // 0x8c8 MovT
	func_9101(var_84_object); // 0x8c9 NEW_2
	var_104_object = Obj(); var_105_object = Obj(); // 0x8cb PushV
	var_104_object = var_1_object; // 0x8cc MovT
	var_105_object = var_0_object; // 0x8cd MovT
	func_8953(); // 0x8ce NEW_2
	
Label_2256:
	var_108_int = 8192; // 0x8d0 PushI
	var_109_bool = var_74_cvector == var_108_int; // 0x8d1 Eq
	if(var_109_bool == 0) goto Label_2264; // 0x8d2 JumpB
	var_110_object = Obj(); var_111_object = Obj(); // 0x8d3 PushV
	var_110_object = var_1_object; // 0x8d4 MovT
	var_111_object = var_0_object; // 0x8d5 MovT
	func_9089(); // 0x8d6 NEW_2
	
Label_2264:
	var_112_int = 34238; // 0x8d8 PushI
	var_113_bool = var_74_cvector == var_112_int; // 0x8d9 Eq
	if(var_113_bool == 0) goto Label_2272; // 0x8da JumpB
	var_114_object = Obj(); var_115_object = Obj(); // 0x8db PushV
	var_114_object = var_1_object; // 0x8dc MovT
	var_115_object = var_0_object; // 0x8dd MovT
	func_9083(); // 0x8de NEW_2
	
Label_2272:
	var_118_int = 7630; // 0x8e0 PushI
	var_119_bool = var_73_cvector == var_118_int; // 0x8e1 Eq
	if(var_119_bool == 0) goto Label_2333; // 0x8e2 JumpB
	var_120_string = ""; // 0x8e3 PushV
	var_120_string = "Neutral"; // 0x8e4 MovS
	func_2210(var_74_cvector, var_120_string); // 0x8e5 NEW_2
	var_137_int = 506924; // 0x8e7 PushI
	SetMessage(var_137_int); // 0x8e8 TObjFunc
	ClearReplies(); // 0x8ea TObjFunc
	var_138_bool = 0; // 0x8ec PushV
	var_138_bool = 0; // 0x8ed MovB
	var_139_bool = 0; // 0x8ee PushV
	var_139_bool = 0; // 0x8ef MovB
	var_140_bool = 0; var_141_object = Obj(); // 0x8f0 PushV
	var_141_object = var_1_object; // 0x8f1 MovT
	func_9603(var_141_object); // 0x8f2 NEW_2
	if(var_140_bool == 0) goto Label_2299; // 0x8f4 JumpB
	var_148_bool = 0; var_149_object = Obj(); // 0x8f5 PushV
	var_149_object = var_1_object; // 0x8f6 MovT
	func_9639(var_149_object); // 0x8f7 NEW_2
	if(var_148_bool == 0) goto Label_2299; // 0x8f9 JumpB
	var_139_bool = 1; // 0x8fa MovB
	
Label_2299:
	if(var_139_bool == 0) goto Label_2306; // 0x8fb JumpB
	var_154_bool = 0; var_155_object = Obj(); // 0x8fc PushV
	var_155_object = var_1_object; // 0x8fd MovT
	func_9627(var_155_object); // 0x8fe NEW_2
	if(var_154_bool == 0) goto Label_2306; // 0x900 JumpB
	var_138_bool = 1; // 0x901 MovB
	
Label_2306:
	if(var_138_bool == 0) goto Label_2312; // 0x902 JumpB
	var_160_int = 506925; // 0x903 PushI
	var_161_int = 7632; // 0x904 PushI
	var_162_int = 7631; // 0x905 PushI
	AddReply(var_160_int, var_161_int, var_162_int); // 0x906 TObjFunc
	
Label_2312:
	var_163_bool = 0; var_164_object = Obj(); // 0x908 PushV
	var_164_object = var_1_object; // 0x909 MovT
	func_9591(var_164_object); // 0x90a NEW_2
	if(var_163_bool == 0) goto Label_2322; // 0x90c JumpB
	var_169_int = 532771; // 0x90d PushI
	var_170_int = 10476; // 0x90e PushI
	var_171_int = 34238; // 0x90f PushI
	AddReply(var_169_int, var_170_int, var_171_int); // 0x910 TObjFunc
	
Label_2322:
	var_172_int = 507777; // 0x912 PushI
	var_173_int = -1; // 0x913 PushI
	var_174_int = 8579; // 0x914 PushI
	AddReply(var_172_int, var_173_int, var_174_int); // 0x915 TObjFunc
	var_175_int = 532772; // 0x917 PushI
	var_176_int = -1; // 0x918 PushI
	var_177_int = 34239; // 0x919 PushI
	AddReply(var_175_int, var_176_int, var_177_int); // 0x91a TObjFunc
	return 0; // 0x91c Return
	
Label_2333:
	var_178_int = 10476; // 0x91d PushI
	var_179_bool = var_73_cvector == var_178_int; // 0x91e Eq
	if(var_179_bool == 0) goto Label_2356; // 0x91f JumpB
	var_180_string = ""; // 0x920 PushV
	var_180_string = "Confusion"; // 0x921 MovS
	func_2210(var_74_cvector, var_180_string); // 0x922 NEW_2
	var_181_int = 509531; // 0x924 PushI
	SetMessage(var_181_int); // 0x925 TObjFunc
	ClearReplies(); // 0x927 TObjFunc
	var_182_int = 509532; // 0x929 PushI
	var_183_int = 10478; // 0x92a PushI
	var_184_int = 10477; // 0x92b PushI
	AddReply(var_182_int, var_183_int, var_184_int); // 0x92c TObjFunc
	var_185_int = 509539; // 0x92e PushI
	var_186_int = 10478; // 0x92f PushI
	var_187_int = 10484; // 0x930 PushI
	AddReply(var_185_int, var_186_int, var_187_int); // 0x931 TObjFunc
	return 0; // 0x933 Return
	
Label_2356:
	var_188_int = 10478; // 0x934 PushI
	var_189_bool = var_73_cvector == var_188_int; // 0x935 Eq
	if(var_189_bool == 0) goto Label_2379; // 0x936 JumpB
	var_190_string = ""; // 0x937 PushV
	var_190_string = "Confusion"; // 0x938 MovS
	func_2210(var_74_cvector, var_190_string); // 0x939 NEW_2
	var_191_int = 509533; // 0x93b PushI
	SetMessage(var_191_int); // 0x93c TObjFunc
	ClearReplies(); // 0x93e TObjFunc
	var_192_int = 509534; // 0x940 PushI
	var_193_int = -1; // 0x941 PushI
	var_194_int = 10479; // 0x942 PushI
	AddReply(var_192_int, var_193_int, var_194_int); // 0x943 TObjFunc
	var_195_int = 509535; // 0x945 PushI
	var_196_int = 10481; // 0x946 PushI
	var_197_int = 10480; // 0x947 PushI
	AddReply(var_195_int, var_196_int, var_197_int); // 0x948 TObjFunc
	return 0; // 0x94a Return
	
Label_2379:
	var_198_int = 10481; // 0x94b PushI
	var_199_bool = var_73_cvector == var_198_int; // 0x94c Eq
	if(var_199_bool == 0) goto Label_2402; // 0x94d JumpB
	var_200_string = ""; // 0x94e PushV
	var_200_string = "Confusion"; // 0x94f MovS
	func_2210(var_74_cvector, var_200_string); // 0x950 NEW_2
	var_201_int = 509536; // 0x952 PushI
	SetMessage(var_201_int); // 0x953 TObjFunc
	ClearReplies(); // 0x955 TObjFunc
	var_202_int = 509537; // 0x957 PushI
	var_203_int = -1; // 0x958 PushI
	var_204_int = 10482; // 0x959 PushI
	AddReply(var_202_int, var_203_int, var_204_int); // 0x95a TObjFunc
	var_205_int = 509538; // 0x95c PushI
	var_206_int = -1; // 0x95d PushI
	var_207_int = 10483; // 0x95e PushI
	AddReply(var_205_int, var_206_int, var_207_int); // 0x95f TObjFunc
	return 0; // 0x961 Return
	
Label_2402:
	var_208_int = 7632; // 0x962 PushI
	var_209_bool = var_73_cvector == var_208_int; // 0x963 Eq
	if(var_209_bool == 0) goto Label_2430; // 0x964 JumpB
	var_210_string = ""; // 0x965 PushV
	var_210_string = "Surprise"; // 0x966 MovS
	func_2210(var_74_cvector, var_210_string); // 0x967 NEW_2
	var_211_int = 506926; // 0x969 PushI
	SetMessage(var_211_int); // 0x96a TObjFunc
	ClearReplies(); // 0x96c TObjFunc
	var_212_int = 506927; // 0x96e PushI
	var_213_int = 8188; // 0x96f PushI
	var_214_int = 7633; // 0x970 PushI
	AddReply(var_212_int, var_213_int, var_214_int); // 0x971 TObjFunc
	var_215_bool = 0; var_216_object = Obj(); // 0x973 PushV
	var_216_object = var_1_object; // 0x974 MovT
	func_9615(var_216_object); // 0x975 NEW_2
	if(var_215_bool == 0) goto Label_2429; // 0x977 JumpB
	var_221_int = 507420; // 0x978 PushI
	var_222_int = 8190; // 0x979 PushI
	var_223_int = 8189; // 0x97a PushI
	AddReply(var_221_int, var_222_int, var_223_int); // 0x97b TObjFunc
	
Label_2429:
	return 0; // 0x97d Return
	
Label_2430:
	var_224_int = 8190; // 0x97e PushI
	var_225_bool = var_73_cvector == var_224_int; // 0x97f Eq
	if(var_225_bool == 0) goto Label_2453; // 0x980 JumpB
	var_226_string = ""; // 0x981 PushV
	var_226_string = "Neutral"; // 0x982 MovS
	func_2210(var_74_cvector, var_226_string); // 0x983 NEW_2
	var_227_int = 507421; // 0x985 PushI
	SetMessage(var_227_int); // 0x986 TObjFunc
	ClearReplies(); // 0x988 TObjFunc
	var_228_int = 507426; // 0x98a PushI
	var_229_int = 8197; // 0x98b PushI
	var_230_int = 8195; // 0x98c PushI
	AddReply(var_228_int, var_229_int, var_230_int); // 0x98d TObjFunc
	var_231_int = 534040; // 0x98f PushI
	var_232_int = 35619; // 0x990 PushI
	var_233_int = 35618; // 0x991 PushI
	AddReply(var_231_int, var_232_int, var_233_int); // 0x992 TObjFunc
	return 0; // 0x994 Return
	
Label_2453:
	var_234_int = 35619; // 0x995 PushI
	var_235_bool = var_73_cvector == var_234_int; // 0x996 Eq
	if(var_235_bool == 0) goto Label_2476; // 0x997 JumpB
	var_236_string = ""; // 0x998 PushV
	var_236_string = "Neutral"; // 0x999 MovS
	func_2210(var_74_cvector, var_236_string); // 0x99a NEW_2
	var_237_int = 534041; // 0x99c PushI
	SetMessage(var_237_int); // 0x99d TObjFunc
	ClearReplies(); // 0x99f TObjFunc
	var_238_int = 534042; // 0x9a1 PushI
	var_239_int = 35621; // 0x9a2 PushI
	var_240_int = 35620; // 0x9a3 PushI
	AddReply(var_238_int, var_239_int, var_240_int); // 0x9a4 TObjFunc
	var_241_int = 534046; // 0x9a6 PushI
	var_242_int = 8188; // 0x9a7 PushI
	var_243_int = 35624; // 0x9a8 PushI
	AddReply(var_241_int, var_242_int, var_243_int); // 0x9a9 TObjFunc
	return 0; // 0x9ab Return
	
Label_2476:
	var_244_int = 35621; // 0x9ac PushI
	var_245_bool = var_73_cvector == var_244_int; // 0x9ad Eq
	if(var_245_bool == 0) goto Label_2499; // 0x9ae JumpB
	var_246_string = ""; // 0x9af PushV
	var_246_string = "Anger"; // 0x9b0 MovS
	func_2210(var_74_cvector, var_246_string); // 0x9b1 NEW_2
	var_247_int = 534043; // 0x9b3 PushI
	SetMessage(var_247_int); // 0x9b4 TObjFunc
	ClearReplies(); // 0x9b6 TObjFunc
	var_248_int = 534047; // 0x9b8 PushI
	var_249_int = 35628; // 0x9b9 PushI
	var_250_int = 35626; // 0x9ba PushI
	AddReply(var_248_int, var_249_int, var_250_int); // 0x9bb TObjFunc
	var_251_int = 534048; // 0x9bd PushI
	var_252_int = 35628; // 0x9be PushI
	var_253_int = 35627; // 0x9bf PushI
	AddReply(var_251_int, var_252_int, var_253_int); // 0x9c0 TObjFunc
	return 0; // 0x9c2 Return
	
Label_2499:
	var_254_int = 35628; // 0x9c3 PushI
	var_255_bool = var_73_cvector == var_254_int; // 0x9c4 Eq
	if(var_255_bool == 0) goto Label_2517; // 0x9c5 JumpB
	var_256_string = ""; // 0x9c6 PushV
	var_256_string = "Neutral"; // 0x9c7 MovS
	func_2210(var_74_cvector, var_256_string); // 0x9c8 NEW_2
	var_257_int = 534049; // 0x9ca PushI
	SetMessage(var_257_int); // 0x9cb TObjFunc
	ClearReplies(); // 0x9cd TObjFunc
	var_258_int = 534050; // 0x9cf PushI
	var_259_int = 8188; // 0x9d0 PushI
	var_260_int = 35629; // 0x9d1 PushI
	AddReply(var_258_int, var_259_int, var_260_int); // 0x9d2 TObjFunc
	return 0; // 0x9d4 Return
	
Label_2517:
	var_261_int = 8197; // 0x9d5 PushI
	var_262_bool = var_73_cvector == var_261_int; // 0x9d6 Eq
	if(var_262_bool == 0) goto Label_2540; // 0x9d7 JumpB
	var_263_string = ""; // 0x9d8 PushV
	var_263_string = "Neutral"; // 0x9d9 MovS
	func_2210(var_74_cvector, var_263_string); // 0x9da NEW_2
	var_264_int = 507427; // 0x9dc PushI
	SetMessage(var_264_int); // 0x9dd TObjFunc
	ClearReplies(); // 0x9df TObjFunc
	var_265_int = 507428; // 0x9e1 PushI
	var_266_int = 8188; // 0x9e2 PushI
	var_267_int = 8198; // 0x9e3 PushI
	AddReply(var_265_int, var_266_int, var_267_int); // 0x9e4 TObjFunc
	var_268_int = 532773; // 0x9e6 PushI
	var_269_int = -1; // 0x9e7 PushI
	var_270_int = 34240; // 0x9e8 PushI
	AddReply(var_268_int, var_269_int, var_270_int); // 0x9e9 TObjFunc
	return 0; // 0x9eb Return
	
Label_2540:
	var_271_int = 8188; // 0x9ec PushI
	var_272_bool = var_73_cvector == var_271_int; // 0x9ed Eq
	if(var_272_bool == 0) goto Label_2568; // 0x9ee JumpB
	var_273_object = Obj(); var_274_object = Obj(); // 0x9ef PushV
	var_273_object = var_1_object; // 0x9f0 MovT
	var_274_object = var_0_object; // 0x9f1 MovT
	func_9095(); // 0x9f2 NEW_2
	var_277_string = ""; // 0x9f4 PushV
	var_277_string = "Confusion"; // 0x9f5 MovS
	func_2210(var_74_cvector, var_277_string); // 0x9f6 NEW_2
	var_278_int = 507419; // 0x9f8 PushI
	SetMessage(var_278_int); // 0x9f9 TObjFunc
	ClearReplies(); // 0x9fb TObjFunc
	var_279_int = 507422; // 0x9fd PushI
	var_280_int = 8193; // 0x9fe PushI
	var_281_int = 8191; // 0x9ff PushI
	AddReply(var_279_int, var_280_int, var_281_int); // 0xa00 TObjFunc
	var_282_int = 507423; // 0xa02 PushI
	var_283_int = -1; // 0xa03 PushI
	var_284_int = 8192; // 0xa04 PushI
	AddReply(var_282_int, var_283_int, var_284_int); // 0xa05 TObjFunc
	return 0; // 0xa07 Return
	
Label_2568:
	var_285_int = 8193; // 0xa08 PushI
	var_286_bool = var_73_cvector == var_285_int; // 0xa09 Eq
	if(var_286_bool == 0) goto Label_2586; // 0xa0a JumpB
	var_287_string = ""; // 0xa0b PushV
	var_287_string = "Confusion"; // 0xa0c MovS
	func_2210(var_74_cvector, var_287_string); // 0xa0d NEW_2
	var_288_int = 507424; // 0xa0f PushI
	SetMessage(var_288_int); // 0xa10 TObjFunc
	ClearReplies(); // 0xa12 TObjFunc
	var_289_int = 507425; // 0xa14 PushI
	var_290_int = -1; // 0xa15 PushI
	var_291_int = 8194; // 0xa16 PushI
	AddReply(var_289_int, var_290_int, var_291_int); // 0xa17 TObjFunc
	return 0; // 0xa19 Return
	
Label_2586:
	var_3_string = 1; // 0xa1a TMovB
	var_292_bool = 0; // 0xa1b PushV
	func_8923(var_292_bool); // 0xa1c NEW_2
	if(var_292_bool == 0) goto Label_2594; // 0xa1e JumpB
	lshStopAnimation(); // 0xa1f Func
	goto Label_2596; // 0xa21 Jump
	
Label_2596:
	return 0; // 0xa24 Return
	
Label_2594:
	StopAnimation(); // 0xa22 Func
	
Label_2598:
	return 0; // 0xa26 Return
}


task_10_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_int, var_26_int, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_object, var_53_object, var_54_object, var_55_string, var_56_bool, var_57_object, var_58_object, var_59_object, var_60_string, var_61_bool, var_62_object, var_63_object, var_64_object, var_65_string, var_66_bool, var_67_object, var_68_object, var_69_object, var_70_string, var_71_bool, var_72_bool, var_73_cvector, var_74_cvector)
{
	var_75_int = 1; // 0xaf4 PushI
	if(var_75_int == 0) goto Label_3506; // 0xaf5 JumpB
	func_8750(); // 0xaf7 NEW_2
	var_77_int = 11286; // 0xaf9 PushI
	var_78_bool = var_74_cvector == var_77_int; // 0xafa Eq
	if(var_78_bool == 0) goto Label_2817; // 0xafb JumpB
	var_79_object = Obj(); var_80_object = Obj(); // 0xafc PushV
	var_79_object = var_1_object; // 0xafd MovT
	var_80_object = var_0_object; // 0xafe MovT
	func_9148(); // 0xaff NEW_2
	
Label_2817:
	var_83_int = 11314; // 0xb01 PushI
	var_84_bool = var_74_cvector == var_83_int; // 0xb02 Eq
	if(var_84_bool == 0) goto Label_2830; // 0xb03 JumpB
	var_85_object = Obj(); var_86_object = Obj(); // 0xb04 PushV
	var_85_object = var_1_object; // 0xb05 MovT
	var_86_object = var_0_object; // 0xb06 MovT
	func_9129(); // 0xb07 NEW_2
	var_126_object = Obj(); var_127_object = Obj(); // 0xb09 PushV
	var_126_object = var_1_object; // 0xb0a MovT
	var_127_object = var_0_object; // 0xb0b MovT
	func_9154(); // 0xb0c NEW_2
	
Label_2830:
	var_152_int = 11315; // 0xb0e PushI
	var_153_bool = var_74_cvector == var_152_int; // 0xb0f Eq
	if(var_153_bool == 0) goto Label_2843; // 0xb10 JumpB
	var_154_object = Obj(); var_155_object = Obj(); // 0xb11 PushV
	var_154_object = var_1_object; // 0xb12 MovT
	var_155_object = var_0_object; // 0xb13 MovT
	func_9129(); // 0xb14 NEW_2
	var_156_object = Obj(); var_157_object = Obj(); // 0xb16 PushV
	var_156_object = var_1_object; // 0xb17 MovT
	var_157_object = var_0_object; // 0xb18 MovT
	func_9154(); // 0xb19 NEW_2
	
Label_2843:
	var_158_int = 11318; // 0xb1b PushI
	var_159_bool = var_74_cvector == var_158_int; // 0xb1c Eq
	if(var_159_bool == 0) goto Label_2856; // 0xb1d JumpB
	var_160_object = Obj(); var_161_object = Obj(); // 0xb1e PushV
	var_160_object = var_1_object; // 0xb1f MovT
	var_161_object = var_0_object; // 0xb20 MovT
	func_9129(); // 0xb21 NEW_2
	var_162_object = Obj(); var_163_object = Obj(); // 0xb23 PushV
	var_162_object = var_1_object; // 0xb24 MovT
	var_163_object = var_0_object; // 0xb25 MovT
	func_9154(); // 0xb26 NEW_2
	
Label_2856:
	var_164_int = 11320; // 0xb28 PushI
	var_165_bool = var_74_cvector == var_164_int; // 0xb29 Eq
	if(var_165_bool == 0) goto Label_2864; // 0xb2a JumpB
	var_166_object = Obj(); var_167_object = Obj(); // 0xb2b PushV
	var_166_object = var_1_object; // 0xb2c MovT
	var_167_object = var_0_object; // 0xb2d MovT
	func_9193(); // 0xb2e NEW_2
	
Label_2864:
	var_170_int = 35992; // 0xb30 PushI
	var_171_bool = var_74_cvector == var_170_int; // 0xb31 Eq
	if(var_171_bool == 0) goto Label_2872; // 0xb32 JumpB
	var_172_object = Obj(); var_173_object = Obj(); // 0xb33 PushV
	var_172_object = var_1_object; // 0xb34 MovT
	var_173_object = var_0_object; // 0xb35 MovT
	func_9170(); // 0xb36 NEW_2
	
Label_2872:
	var_192_int = 35993; // 0xb38 PushI
	var_193_bool = var_74_cvector == var_192_int; // 0xb39 Eq
	if(var_193_bool == 0) goto Label_2880; // 0xb3a JumpB
	var_194_object = Obj(); var_195_object = Obj(); // 0xb3b PushV
	var_194_object = var_1_object; // 0xb3c MovT
	var_195_object = var_0_object; // 0xb3d MovT
	func_9170(); // 0xb3e NEW_2
	
Label_2880:
	var_196_int = 11287; // 0xb40 PushI
	var_197_bool = var_74_cvector == var_196_int; // 0xb41 Eq
	if(var_197_bool == 0) goto Label_2888; // 0xb42 JumpB
	var_198_object = Obj(); var_199_object = Obj(); // 0xb43 PushV
	var_198_object = var_1_object; // 0xb44 MovT
	var_199_object = var_0_object; // 0xb45 MovT
	func_9034(); // 0xb46 NEW_2
	
Label_2888:
	var_202_int = 11285; // 0xb48 PushI
	var_203_bool = var_73_cvector == var_202_int; // 0xb49 Eq
	if(var_203_bool == 0) goto Label_2954; // 0xb4a JumpB
	var_204_string = ""; // 0xb4b PushV
	var_204_string = "Neutral"; // 0xb4c MovS
	func_2781(var_74_cvector, var_204_string); // 0xb4d NEW_2
	var_221_int = 510235; // 0xb4f PushI
	SetMessage(var_221_int); // 0xb50 TObjFunc
	ClearReplies(); // 0xb52 TObjFunc
	var_222_bool = 0; // 0xb54 PushV
	var_222_bool = 0; // 0xb55 MovB
	var_223_bool = 0; var_224_object = Obj(); // 0xb56 PushV
	var_224_object = var_1_object; // 0xb57 MovT
	func_9663(var_224_object); // 0xb58 NEW_2
	if(var_223_bool == 0) goto Label_2913; // 0xb5a JumpB
	var_231_bool = 0; var_232_object = Obj(); // 0xb5b PushV
	var_232_object = var_1_object; // 0xb5c MovT
	func_9675(var_232_object); // 0xb5d NEW_2
	if(var_231_bool == 0) goto Label_2913; // 0xb5f JumpB
	var_222_bool = 1; // 0xb60 MovB
	
Label_2913:
	if(var_222_bool == 0) goto Label_2919; // 0xb61 JumpB
	var_237_int = 510236; // 0xb62 PushI
	var_238_int = 11288; // 0xb63 PushI
	var_239_int = 11286; // 0xb64 PushI
	AddReply(var_237_int, var_238_int, var_239_int); // 0xb65 TObjFunc
	
Label_2919:
	var_240_bool = 0; // 0xb67 PushV
	var_240_bool = 0; // 0xb68 MovB
	var_241_bool = 0; var_242_object = Obj(); // 0xb69 PushV
	var_242_object = var_1_object; // 0xb6a MovT
	func_9699(var_242_object); // 0xb6b NEW_2
	if(var_241_bool == 0) goto Label_2932; // 0xb6d JumpB
	var_247_bool = 0; var_248_object = Obj(); // 0xb6e PushV
	var_248_object = var_1_object; // 0xb6f MovT
	func_9687(var_248_object); // 0xb70 NEW_2
	if(var_247_bool == 0) goto Label_2932; // 0xb72 JumpB
	var_240_bool = 1; // 0xb73 MovB
	
Label_2932:
	if(var_240_bool == 0) goto Label_2938; // 0xb74 JumpB
	var_253_int = 510266; // 0xb75 PushI
	var_254_int = 35986; // 0xb76 PushI
	var_255_int = 11320; // 0xb77 PushI
	AddReply(var_253_int, var_254_int, var_255_int); // 0xb78 TObjFunc
	
Label_2938:
	var_256_bool = 0; var_257_object = Obj(); // 0xb7a PushV
	var_257_object = var_1_object; // 0xb7b MovT
	func_9532(var_257_object); // 0xb7c NEW_2
	if(var_256_bool == 0) goto Label_2948; // 0xb7e JumpB
	var_262_int = 510237; // 0xb7f PushI
	var_263_int = 11089; // 0xb80 PushI
	var_264_int = 11287; // 0xb81 PushI
	AddReply(var_262_int, var_263_int, var_264_int); // 0xb82 TObjFunc
	
Label_2948:
	var_265_int = 511382; // 0xb84 PushI
	var_266_int = -1; // 0xb85 PushI
	var_267_int = 12578; // 0xb86 PushI
	AddReply(var_265_int, var_266_int, var_267_int); // 0xb87 TObjFunc
	return 0; // 0xb89 Return
	
Label_2954:
	var_268_int = 11089; // 0xb8a PushI
	var_269_bool = var_73_cvector == var_268_int; // 0xb8b Eq
	if(var_269_bool == 0) goto Label_2972; // 0xb8c JumpB
	var_270_string = ""; // 0xb8d PushV
	var_270_string = "Neutral"; // 0xb8e MovS
	func_2781(var_74_cvector, var_270_string); // 0xb8f NEW_2
	var_271_int = 510063; // 0xb91 PushI
	SetMessage(var_271_int); // 0xb92 TObjFunc
	ClearReplies(); // 0xb94 TObjFunc
	var_272_int = 510064; // 0xb96 PushI
	var_273_int = 11091; // 0xb97 PushI
	var_274_int = 11090; // 0xb98 PushI
	AddReply(var_272_int, var_273_int, var_274_int); // 0xb99 TObjFunc
	return 0; // 0xb9b Return
	
Label_2972:
	var_275_int = 11091; // 0xb9c PushI
	var_276_bool = var_73_cvector == var_275_int; // 0xb9d Eq
	if(var_276_bool == 0) goto Label_2995; // 0xb9e JumpB
	var_277_string = ""; // 0xb9f PushV
	var_277_string = "Neutral"; // 0xba0 MovS
	func_2781(var_74_cvector, var_277_string); // 0xba1 NEW_2
	var_278_int = 510065; // 0xba3 PushI
	SetMessage(var_278_int); // 0xba4 TObjFunc
	ClearReplies(); // 0xba6 TObjFunc
	var_279_int = 510066; // 0xba8 PushI
	var_280_int = 11093; // 0xba9 PushI
	var_281_int = 11092; // 0xbaa PushI
	AddReply(var_279_int, var_280_int, var_281_int); // 0xbab TObjFunc
	var_282_int = 510070; // 0xbad PushI
	var_283_int = 11097; // 0xbae PushI
	var_284_int = 11096; // 0xbaf PushI
	AddReply(var_282_int, var_283_int, var_284_int); // 0xbb0 TObjFunc
	return 0; // 0xbb2 Return
	
Label_2995:
	var_285_int = 11097; // 0xbb3 PushI
	var_286_bool = var_73_cvector == var_285_int; // 0xbb4 Eq
	if(var_286_bool == 0) goto Label_3023; // 0xbb5 JumpB
	var_287_string = ""; // 0xbb6 PushV
	var_287_string = "Surprise"; // 0xbb7 MovS
	func_2781(var_74_cvector, var_287_string); // 0xbb8 NEW_2
	var_288_int = 510071; // 0xbba PushI
	SetMessage(var_288_int); // 0xbbb TObjFunc
	ClearReplies(); // 0xbbd TObjFunc
	var_289_int = 510072; // 0xbbf PushI
	var_290_int = 11099; // 0xbc0 PushI
	var_291_int = 11098; // 0xbc1 PushI
	AddReply(var_289_int, var_290_int, var_291_int); // 0xbc2 TObjFunc
	var_292_int = 510080; // 0xbc4 PushI
	var_293_int = 11110; // 0xbc5 PushI
	var_294_int = 11109; // 0xbc6 PushI
	AddReply(var_292_int, var_293_int, var_294_int); // 0xbc7 TObjFunc
	var_295_int = 510242; // 0xbc9 PushI
	var_296_int = 11293; // 0xbca PushI
	var_297_int = 11292; // 0xbcb PushI
	AddReply(var_295_int, var_296_int, var_297_int); // 0xbcc TObjFunc
	return 0; // 0xbce Return
	
Label_3023:
	var_298_int = 11293; // 0xbcf PushI
	var_299_bool = var_73_cvector == var_298_int; // 0xbd0 Eq
	if(var_299_bool == 0) goto Label_3046; // 0xbd1 JumpB
	var_300_string = ""; // 0xbd2 PushV
	var_300_string = "Surprise"; // 0xbd3 MovS
	func_2781(var_74_cvector, var_300_string); // 0xbd4 NEW_2
	var_301_int = 510243; // 0xbd6 PushI
	SetMessage(var_301_int); // 0xbd7 TObjFunc
	ClearReplies(); // 0xbd9 TObjFunc
	var_302_int = 510244; // 0xbdb PushI
	var_303_int = 11110; // 0xbdc PushI
	var_304_int = 11294; // 0xbdd PushI
	AddReply(var_302_int, var_303_int, var_304_int); // 0xbde TObjFunc
	var_305_int = 510245; // 0xbe0 PushI
	var_306_int = 11290; // 0xbe1 PushI
	var_307_int = 11295; // 0xbe2 PushI
	AddReply(var_305_int, var_306_int, var_307_int); // 0xbe3 TObjFunc
	return 0; // 0xbe5 Return
	
Label_3046:
	var_308_int = 11110; // 0xbe6 PushI
	var_309_bool = var_73_cvector == var_308_int; // 0xbe7 Eq
	if(var_309_bool == 0) goto Label_3069; // 0xbe8 JumpB
	var_310_string = ""; // 0xbe9 PushV
	var_310_string = "Neutral"; // 0xbea MovS
	func_2781(var_74_cvector, var_310_string); // 0xbeb NEW_2
	var_311_int = 510081; // 0xbed PushI
	SetMessage(var_311_int); // 0xbee TObjFunc
	ClearReplies(); // 0xbf0 TObjFunc
	var_312_int = 510239; // 0xbf2 PushI
	var_313_int = 11290; // 0xbf3 PushI
	var_314_int = 11289; // 0xbf4 PushI
	AddReply(var_312_int, var_313_int, var_314_int); // 0xbf5 TObjFunc
	var_315_int = 510083; // 0xbf7 PushI
	var_316_int = -1; // 0xbf8 PushI
	var_317_int = 11112; // 0xbf9 PushI
	AddReply(var_315_int, var_316_int, var_317_int); // 0xbfa TObjFunc
	return 0; // 0xbfc Return
	
Label_3069:
	var_318_int = 11290; // 0xbfd PushI
	var_319_bool = var_73_cvector == var_318_int; // 0xbfe Eq
	if(var_319_bool == 0) goto Label_3087; // 0xbff JumpB
	var_320_string = ""; // 0xc00 PushV
	var_320_string = "Surprise"; // 0xc01 MovS
	func_2781(var_74_cvector, var_320_string); // 0xc02 NEW_2
	var_321_int = 510240; // 0xc04 PushI
	SetMessage(var_321_int); // 0xc05 TObjFunc
	ClearReplies(); // 0xc07 TObjFunc
	var_322_int = 510082; // 0xc09 PushI
	var_323_int = -1; // 0xc0a PushI
	var_324_int = 11111; // 0xc0b PushI
	AddReply(var_322_int, var_323_int, var_324_int); // 0xc0c TObjFunc
	return 0; // 0xc0e Return
	
Label_3087:
	var_325_int = 11099; // 0xc0f PushI
	var_326_bool = var_73_cvector == var_325_int; // 0xc10 Eq
	if(var_326_bool == 0) goto Label_3110; // 0xc11 JumpB
	var_327_string = ""; // 0xc12 PushV
	var_327_string = "Surprise"; // 0xc13 MovS
	func_2781(var_74_cvector, var_327_string); // 0xc14 NEW_2
	var_328_int = 510073; // 0xc16 PushI
	SetMessage(var_328_int); // 0xc17 TObjFunc
	ClearReplies(); // 0xc19 TObjFunc
	var_329_int = 510074; // 0xc1b PushI
	var_330_int = 11101; // 0xc1c PushI
	var_331_int = 11100; // 0xc1d PushI
	AddReply(var_329_int, var_330_int, var_331_int); // 0xc1e TObjFunc
	var_332_int = 510079; // 0xc20 PushI
	var_333_int = 11101; // 0xc21 PushI
	var_334_int = 11107; // 0xc22 PushI
	AddReply(var_332_int, var_333_int, var_334_int); // 0xc23 TObjFunc
	return 0; // 0xc25 Return
	
Label_3110:
	var_335_int = 11101; // 0xc26 PushI
	var_336_bool = var_73_cvector == var_335_int; // 0xc27 Eq
	if(var_336_bool == 0) goto Label_3133; // 0xc28 JumpB
	var_337_string = ""; // 0xc29 PushV
	var_337_string = "Neutral"; // 0xc2a MovS
	func_2781(var_74_cvector, var_337_string); // 0xc2b NEW_2
	var_338_int = 510075; // 0xc2d PushI
	SetMessage(var_338_int); // 0xc2e TObjFunc
	ClearReplies(); // 0xc30 TObjFunc
	var_339_int = 510076; // 0xc32 PushI
	var_340_int = 11093; // 0xc33 PushI
	var_341_int = 11102; // 0xc34 PushI
	AddReply(var_339_int, var_340_int, var_341_int); // 0xc35 TObjFunc
	var_342_int = 510078; // 0xc37 PushI
	var_343_int = -1; // 0xc38 PushI
	var_344_int = 11106; // 0xc39 PushI
	AddReply(var_342_int, var_343_int, var_344_int); // 0xc3a TObjFunc
	return 0; // 0xc3c Return
	
Label_3133:
	var_345_int = 11093; // 0xc3d PushI
	var_346_bool = var_73_cvector == var_345_int; // 0xc3e Eq
	if(var_346_bool == 0) goto Label_3156; // 0xc3f JumpB
	var_347_string = ""; // 0xc40 PushV
	var_347_string = "Neutral"; // 0xc41 MovS
	func_2781(var_74_cvector, var_347_string); // 0xc42 NEW_2
	var_348_int = 510067; // 0xc44 PushI
	SetMessage(var_348_int); // 0xc45 TObjFunc
	ClearReplies(); // 0xc47 TObjFunc
	var_349_int = 510068; // 0xc49 PushI
	var_350_int = -1; // 0xc4a PushI
	var_351_int = 11094; // 0xc4b PushI
	AddReply(var_349_int, var_350_int, var_351_int); // 0xc4c TObjFunc
	var_352_int = 510069; // 0xc4e PushI
	var_353_int = -1; // 0xc4f PushI
	var_354_int = 11095; // 0xc50 PushI
	AddReply(var_352_int, var_353_int, var_354_int); // 0xc51 TObjFunc
	return 0; // 0xc53 Return
	
Label_3156:
	var_355_int = 35986; // 0xc54 PushI
	var_356_bool = var_73_cvector == var_355_int; // 0xc55 Eq
	if(var_356_bool == 0) goto Label_3174; // 0xc56 JumpB
	var_357_string = ""; // 0xc57 PushV
	var_357_string = "Anger"; // 0xc58 MovS
	func_2781(var_74_cvector, var_357_string); // 0xc59 NEW_2
	var_358_int = 534376; // 0xc5b PushI
	SetMessage(var_358_int); // 0xc5c TObjFunc
	ClearReplies(); // 0xc5e TObjFunc
	var_359_int = 534377; // 0xc60 PushI
	var_360_int = 35988; // 0xc61 PushI
	var_361_int = 35987; // 0xc62 PushI
	AddReply(var_359_int, var_360_int, var_361_int); // 0xc63 TObjFunc
	return 0; // 0xc65 Return
	
Label_3174:
	var_362_int = 35988; // 0xc66 PushI
	var_363_bool = var_73_cvector == var_362_int; // 0xc67 Eq
	if(var_363_bool == 0) goto Label_3197; // 0xc68 JumpB
	var_364_string = ""; // 0xc69 PushV
	var_364_string = "Anger"; // 0xc6a MovS
	func_2781(var_74_cvector, var_364_string); // 0xc6b NEW_2
	var_365_int = 534378; // 0xc6d PushI
	SetMessage(var_365_int); // 0xc6e TObjFunc
	ClearReplies(); // 0xc70 TObjFunc
	var_366_int = 534379; // 0xc72 PushI
	var_367_int = 11321; // 0xc73 PushI
	var_368_int = 35989; // 0xc74 PushI
	AddReply(var_366_int, var_367_int, var_368_int); // 0xc75 TObjFunc
	var_369_int = 534383; // 0xc77 PushI
	var_370_int = 11321; // 0xc78 PushI
	var_371_int = 35996; // 0xc79 PushI
	AddReply(var_369_int, var_370_int, var_371_int); // 0xc7a TObjFunc
	return 0; // 0xc7c Return
	
Label_3197:
	var_372_int = 11321; // 0xc7d PushI
	var_373_bool = var_73_cvector == var_372_int; // 0xc7e Eq
	if(var_373_bool == 0) goto Label_3220; // 0xc7f JumpB
	var_374_string = ""; // 0xc80 PushV
	var_374_string = "Anger"; // 0xc81 MovS
	func_2781(var_74_cvector, var_374_string); // 0xc82 NEW_2
	var_375_int = 510267; // 0xc84 PushI
	SetMessage(var_375_int); // 0xc85 TObjFunc
	ClearReplies(); // 0xc87 TObjFunc
	var_376_int = 510268; // 0xc89 PushI
	var_377_int = 11323; // 0xc8a PushI
	var_378_int = 11322; // 0xc8b PushI
	AddReply(var_376_int, var_377_int, var_378_int); // 0xc8c TObjFunc
	var_379_int = 510270; // 0xc8e PushI
	var_380_int = 11325; // 0xc8f PushI
	var_381_int = 11324; // 0xc90 PushI
	AddReply(var_379_int, var_380_int, var_381_int); // 0xc91 TObjFunc
	return 0; // 0xc93 Return
	
Label_3220:
	var_382_int = 11325; // 0xc94 PushI
	var_383_bool = var_73_cvector == var_382_int; // 0xc95 Eq
	if(var_383_bool == 0) goto Label_3238; // 0xc96 JumpB
	var_384_string = ""; // 0xc97 PushV
	var_384_string = "Neutral"; // 0xc98 MovS
	func_2781(var_74_cvector, var_384_string); // 0xc99 NEW_2
	var_385_int = 510271; // 0xc9b PushI
	SetMessage(var_385_int); // 0xc9c TObjFunc
	ClearReplies(); // 0xc9e TObjFunc
	var_386_int = 510272; // 0xca0 PushI
	var_387_int = 35991; // 0xca1 PushI
	var_388_int = 11326; // 0xca2 PushI
	AddReply(var_386_int, var_387_int, var_388_int); // 0xca3 TObjFunc
	return 0; // 0xca5 Return
	
Label_3238:
	var_389_int = 11323; // 0xca6 PushI
	var_390_bool = var_73_cvector == var_389_int; // 0xca7 Eq
	if(var_390_bool == 0) goto Label_3261; // 0xca8 JumpB
	var_391_string = ""; // 0xca9 PushV
	var_391_string = "Neutral"; // 0xcaa MovS
	func_2781(var_74_cvector, var_391_string); // 0xcab NEW_2
	var_392_int = 510269; // 0xcad PushI
	SetMessage(var_392_int); // 0xcae TObjFunc
	ClearReplies(); // 0xcb0 TObjFunc
	var_393_int = 510275; // 0xcb2 PushI
	var_394_int = 11330; // 0xcb3 PushI
	var_395_int = 11329; // 0xcb4 PushI
	AddReply(var_393_int, var_394_int, var_395_int); // 0xcb5 TObjFunc
	var_396_int = 510273; // 0xcb7 PushI
	var_397_int = 11328; // 0xcb8 PushI
	var_398_int = 11327; // 0xcb9 PushI
	AddReply(var_396_int, var_397_int, var_398_int); // 0xcba TObjFunc
	return 0; // 0xcbc Return
	
Label_3261:
	var_399_int = 11328; // 0xcbd PushI
	var_400_bool = var_73_cvector == var_399_int; // 0xcbe Eq
	if(var_400_bool == 0) goto Label_3279; // 0xcbf JumpB
	var_401_string = ""; // 0xcc0 PushV
	var_401_string = "Neutral"; // 0xcc1 MovS
	func_2781(var_74_cvector, var_401_string); // 0xcc2 NEW_2
	var_402_int = 510274; // 0xcc4 PushI
	SetMessage(var_402_int); // 0xcc5 TObjFunc
	ClearReplies(); // 0xcc7 TObjFunc
	var_403_int = 510281; // 0xcc9 PushI
	var_404_int = 11330; // 0xcca PushI
	var_405_int = 11336; // 0xccb PushI
	AddReply(var_403_int, var_404_int, var_405_int); // 0xccc TObjFunc
	return 0; // 0xcce Return
	
Label_3279:
	var_406_int = 11330; // 0xccf PushI
	var_407_bool = var_73_cvector == var_406_int; // 0xcd0 Eq
	if(var_407_bool == 0) goto Label_3297; // 0xcd1 JumpB
	var_408_string = ""; // 0xcd2 PushV
	var_408_string = "Neutral"; // 0xcd3 MovS
	func_2781(var_74_cvector, var_408_string); // 0xcd4 NEW_2
	var_409_int = 510276; // 0xcd6 PushI
	SetMessage(var_409_int); // 0xcd7 TObjFunc
	ClearReplies(); // 0xcd9 TObjFunc
	var_410_int = 510277; // 0xcdb PushI
	var_411_int = 11332; // 0xcdc PushI
	var_412_int = 11331; // 0xcdd PushI
	AddReply(var_410_int, var_411_int, var_412_int); // 0xcde TObjFunc
	return 0; // 0xce0 Return
	
Label_3297:
	var_413_int = 11332; // 0xce1 PushI
	var_414_bool = var_73_cvector == var_413_int; // 0xce2 Eq
	if(var_414_bool == 0) goto Label_3320; // 0xce3 JumpB
	var_415_string = ""; // 0xce4 PushV
	var_415_string = "Neutral"; // 0xce5 MovS
	func_2781(var_74_cvector, var_415_string); // 0xce6 NEW_2
	var_416_int = 510278; // 0xce8 PushI
	SetMessage(var_416_int); // 0xce9 TObjFunc
	ClearReplies(); // 0xceb TObjFunc
	var_417_int = 510279; // 0xced PushI
	var_418_int = 35991; // 0xcee PushI
	var_419_int = 11333; // 0xcef PushI
	AddReply(var_417_int, var_418_int, var_419_int); // 0xcf0 TObjFunc
	var_420_int = 510280; // 0xcf2 PushI
	var_421_int = 35991; // 0xcf3 PushI
	var_422_int = 11335; // 0xcf4 PushI
	AddReply(var_420_int, var_421_int, var_422_int); // 0xcf5 TObjFunc
	return 0; // 0xcf7 Return
	
Label_3320:
	var_423_int = 35991; // 0xcf8 PushI
	var_424_bool = var_73_cvector == var_423_int; // 0xcf9 Eq
	if(var_424_bool == 0) goto Label_3343; // 0xcfa JumpB
	var_425_string = ""; // 0xcfb PushV
	var_425_string = "Neutral"; // 0xcfc MovS
	func_2781(var_74_cvector, var_425_string); // 0xcfd NEW_2
	var_426_int = 534380; // 0xcff PushI
	SetMessage(var_426_int); // 0xd00 TObjFunc
	ClearReplies(); // 0xd02 TObjFunc
	var_427_int = 534381; // 0xd04 PushI
	var_428_int = -1; // 0xd05 PushI
	var_429_int = 35992; // 0xd06 PushI
	AddReply(var_427_int, var_428_int, var_429_int); // 0xd07 TObjFunc
	var_430_int = 534382; // 0xd09 PushI
	var_431_int = -1; // 0xd0a PushI
	var_432_int = 35993; // 0xd0b PushI
	AddReply(var_430_int, var_431_int, var_432_int); // 0xd0c TObjFunc
	return 0; // 0xd0e Return
	
Label_3343:
	var_433_int = 11288; // 0xd0f PushI
	var_434_bool = var_73_cvector == var_433_int; // 0xd10 Eq
	if(var_434_bool == 0) goto Label_3366; // 0xd11 JumpB
	var_435_string = ""; // 0xd12 PushV
	var_435_string = "Neutral"; // 0xd13 MovS
	func_2781(var_74_cvector, var_435_string); // 0xd14 NEW_2
	var_436_int = 510238; // 0xd16 PushI
	SetMessage(var_436_int); // 0xd17 TObjFunc
	ClearReplies(); // 0xd19 TObjFunc
	var_437_int = 510246; // 0xd1b PushI
	var_438_int = 11298; // 0xd1c PushI
	var_439_int = 11297; // 0xd1d PushI
	AddReply(var_437_int, var_438_int, var_439_int); // 0xd1e TObjFunc
	var_440_int = 510253; // 0xd20 PushI
	var_441_int = 11308; // 0xd21 PushI
	var_442_int = 11304; // 0xd22 PushI
	AddReply(var_440_int, var_441_int, var_442_int); // 0xd23 TObjFunc
	return 0; // 0xd25 Return
	
Label_3366:
	var_443_int = 11298; // 0xd26 PushI
	var_444_bool = var_73_cvector == var_443_int; // 0xd27 Eq
	if(var_444_bool == 0) goto Label_3389; // 0xd28 JumpB
	var_445_string = ""; // 0xd29 PushV
	var_445_string = "Neutral"; // 0xd2a MovS
	func_2781(var_74_cvector, var_445_string); // 0xd2b NEW_2
	var_446_int = 510247; // 0xd2d PushI
	SetMessage(var_446_int); // 0xd2e TObjFunc
	ClearReplies(); // 0xd30 TObjFunc
	var_447_int = 510248; // 0xd32 PushI
	var_448_int = 11300; // 0xd33 PushI
	var_449_int = 11299; // 0xd34 PushI
	AddReply(var_447_int, var_448_int, var_449_int); // 0xd35 TObjFunc
	var_450_int = 510258; // 0xd37 PushI
	var_451_int = 11308; // 0xd38 PushI
	var_452_int = 11309; // 0xd39 PushI
	AddReply(var_450_int, var_451_int, var_452_int); // 0xd3a TObjFunc
	return 0; // 0xd3c Return
	
Label_3389:
	var_453_int = 11300; // 0xd3d PushI
	var_454_bool = var_73_cvector == var_453_int; // 0xd3e Eq
	if(var_454_bool == 0) goto Label_3412; // 0xd3f JumpB
	var_455_string = ""; // 0xd40 PushV
	var_455_string = "Neutral"; // 0xd41 MovS
	func_2781(var_74_cvector, var_455_string); // 0xd42 NEW_2
	var_456_int = 510249; // 0xd44 PushI
	SetMessage(var_456_int); // 0xd45 TObjFunc
	ClearReplies(); // 0xd47 TObjFunc
	var_457_int = 510250; // 0xd49 PushI
	var_458_int = 11302; // 0xd4a PushI
	var_459_int = 11301; // 0xd4b PushI
	AddReply(var_457_int, var_458_int, var_459_int); // 0xd4c TObjFunc
	var_460_int = 510256; // 0xd4e PushI
	var_461_int = 11302; // 0xd4f PushI
	var_462_int = 11307; // 0xd50 PushI
	AddReply(var_460_int, var_461_int, var_462_int); // 0xd51 TObjFunc
	return 0; // 0xd53 Return
	
Label_3412:
	var_463_int = 11302; // 0xd54 PushI
	var_464_bool = var_73_cvector == var_463_int; // 0xd55 Eq
	if(var_464_bool == 0) goto Label_3430; // 0xd56 JumpB
	var_465_string = ""; // 0xd57 PushV
	var_465_string = "Neutral"; // 0xd58 MovS
	func_2781(var_74_cvector, var_465_string); // 0xd59 NEW_2
	var_466_int = 510251; // 0xd5b PushI
	SetMessage(var_466_int); // 0xd5c TObjFunc
	ClearReplies(); // 0xd5e TObjFunc
	var_467_int = 510259; // 0xd60 PushI
	var_468_int = 11313; // 0xd61 PushI
	var_469_int = 11312; // 0xd62 PushI
	AddReply(var_467_int, var_468_int, var_469_int); // 0xd63 TObjFunc
	return 0; // 0xd65 Return
	
Label_3430:
	var_470_int = 11313; // 0xd66 PushI
	var_471_bool = var_73_cvector == var_470_int; // 0xd67 Eq
	if(var_471_bool == 0) goto Label_3453; // 0xd68 JumpB
	var_472_string = ""; // 0xd69 PushV
	var_472_string = "Confusion"; // 0xd6a MovS
	func_2781(var_74_cvector, var_472_string); // 0xd6b NEW_2
	var_473_int = 510260; // 0xd6d PushI
	SetMessage(var_473_int); // 0xd6e TObjFunc
	ClearReplies(); // 0xd70 TObjFunc
	var_474_int = 510261; // 0xd72 PushI
	var_475_int = -1; // 0xd73 PushI
	var_476_int = 11314; // 0xd74 PushI
	AddReply(var_474_int, var_475_int, var_476_int); // 0xd75 TObjFunc
	var_477_int = 510252; // 0xd77 PushI
	var_478_int = 11308; // 0xd78 PushI
	var_479_int = 11303; // 0xd79 PushI
	AddReply(var_477_int, var_478_int, var_479_int); // 0xd7a TObjFunc
	return 0; // 0xd7c Return
	
Label_3453:
	var_480_int = 11308; // 0xd7d PushI
	var_481_bool = var_73_cvector == var_480_int; // 0xd7e Eq
	if(var_481_bool == 0) goto Label_3476; // 0xd7f JumpB
	var_482_string = ""; // 0xd80 PushV
	var_482_string = "Confusion"; // 0xd81 MovS
	func_2781(var_74_cvector, var_482_string); // 0xd82 NEW_2
	var_483_int = 510257; // 0xd84 PushI
	SetMessage(var_483_int); // 0xd85 TObjFunc
	ClearReplies(); // 0xd87 TObjFunc
	var_484_int = 510262; // 0xd89 PushI
	var_485_int = -1; // 0xd8a PushI
	var_486_int = 11315; // 0xd8b PushI
	AddReply(var_484_int, var_485_int, var_486_int); // 0xd8c TObjFunc
	var_487_int = 510263; // 0xd8e PushI
	var_488_int = 11317; // 0xd8f PushI
	var_489_int = 11316; // 0xd90 PushI
	AddReply(var_487_int, var_488_int, var_489_int); // 0xd91 TObjFunc
	return 0; // 0xd93 Return
	
Label_3476:
	var_490_int = 11317; // 0xd94 PushI
	var_491_bool = var_73_cvector == var_490_int; // 0xd95 Eq
	if(var_491_bool == 0) goto Label_3494; // 0xd96 JumpB
	var_492_string = ""; // 0xd97 PushV
	var_492_string = "Neutral"; // 0xd98 MovS
	func_2781(var_74_cvector, var_492_string); // 0xd99 NEW_2
	var_493_int = 510264; // 0xd9b PushI
	SetMessage(var_493_int); // 0xd9c TObjFunc
	ClearReplies(); // 0xd9e TObjFunc
	var_494_int = 510265; // 0xda0 PushI
	var_495_int = -1; // 0xda1 PushI
	var_496_int = 11318; // 0xda2 PushI
	AddReply(var_494_int, var_495_int, var_496_int); // 0xda3 TObjFunc
	return 0; // 0xda5 Return
	
Label_3494:
	var_3_string = 1; // 0xda6 TMovB
	var_497_bool = 0; // 0xda7 PushV
	func_8923(var_497_bool); // 0xda8 NEW_2
	if(var_497_bool == 0) goto Label_3502; // 0xdaa JumpB
	lshStopAnimation(); // 0xdab Func
	goto Label_3504; // 0xdad Jump
	
Label_3504:
	return 0; // 0xdb0 Return
	
Label_3502:
	StopAnimation(); // 0xdae Func
	
Label_3506:
	return 0; // 0xdb2 Return
}


task_12_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_int, var_31_int, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_object, var_53_object, var_54_object, var_55_string, var_56_bool, var_57_object, var_58_object, var_59_object, var_60_string, var_61_bool, var_62_object, var_63_object, var_64_object, var_65_string, var_66_bool, var_67_object, var_68_object, var_69_object, var_70_string, var_71_bool, var_72_bool, var_73_cvector, var_74_cvector)
{
	var_75_int = 1; // 0xe90 PushI
	if(var_75_int == 0) goto Label_4023; // 0xe91 JumpB
	func_8750(); // 0xe93 NEW_2
	var_77_int = 12296; // 0xe95 PushI
	var_78_bool = var_74_cvector == var_77_int; // 0xe96 Eq
	if(var_78_bool == 0) goto Label_3741; // 0xe97 JumpB
	var_79_object = Obj(); var_80_object = Obj(); // 0xe98 PushV
	var_79_object = var_1_object; // 0xe99 MovT
	var_80_object = var_0_object; // 0xe9a MovT
	func_9111(); // 0xe9b NEW_2
	
Label_3741:
	var_114_int = 12301; // 0xe9d PushI
	var_115_bool = var_74_cvector == var_114_int; // 0xe9e Eq
	if(var_115_bool == 0) goto Label_3749; // 0xe9f JumpB
	var_116_object = Obj(); var_117_object = Obj(); // 0xea0 PushV
	var_116_object = var_1_object; // 0xea1 MovT
	var_117_object = var_0_object; // 0xea2 MovT
	func_9111(); // 0xea3 NEW_2
	
Label_3749:
	var_118_int = 12309; // 0xea5 PushI
	var_119_bool = var_74_cvector == var_118_int; // 0xea6 Eq
	if(var_119_bool == 0) goto Label_3757; // 0xea7 JumpB
	var_120_object = Obj(); var_121_object = Obj(); // 0xea8 PushV
	var_120_object = var_1_object; // 0xea9 MovT
	var_121_object = var_0_object; // 0xeaa MovT
	func_9046(); // 0xeab NEW_2
	
Label_3757:
	var_132_int = 38101; // 0xead PushI
	var_133_bool = var_74_cvector == var_132_int; // 0xeae Eq
	if(var_133_bool == 0) goto Label_3765; // 0xeaf JumpB
	var_134_object = Obj(); var_135_object = Obj(); // 0xeb0 PushV
	var_134_object = var_1_object; // 0xeb1 MovT
	var_135_object = var_0_object; // 0xeb2 MovT
	func_9046(); // 0xeb3 NEW_2
	
Label_3765:
	var_136_int = 38099; // 0xeb5 PushI
	var_137_bool = var_73_cvector == var_136_int; // 0xeb6 Eq
	if(var_137_bool == 0) goto Label_3847; // 0xeb7 JumpB
	var_138_bool = 0; var_139_object = Obj(); // 0xeb8 PushV
	var_139_object = var_1_object; // 0xeb9 MovT
	func_9544(var_139_object); // 0xeba NEW_2
	if(var_138_bool == 0) goto Label_3803; // 0xebc JumpB
	var_146_object = Obj(); var_147_object = Obj(); // 0xebd PushV
	var_146_object = var_1_object; // 0xebe MovT
	var_147_object = var_0_object; // 0xebf MovT
	func_9040(); // 0xec0 NEW_2
	var_150_object = Obj(); var_151_object = Obj(); // 0xec2 PushV
	var_150_object = var_1_object; // 0xec3 MovT
	var_151_object = var_0_object; // 0xec4 MovT
	func_9055(); // 0xec5 NEW_2
	var_154_string = ""; // 0xec7 PushV
	var_154_string = "Neutral"; // 0xec8 MovS
	func_3705(var_74_cvector, var_154_string); // 0xec9 NEW_2
	var_171_int = 536314; // 0xecb PushI
	SetMessage(var_171_int); // 0xecc TObjFunc
	ClearReplies(); // 0xece TObjFunc
	var_172_int = 511097; // 0xed0 PushI
	var_173_int = 12285; // 0xed1 PushI
	var_174_int = 12284; // 0xed2 PushI
	AddReply(var_172_int, var_173_int, var_174_int); // 0xed3 TObjFunc
	var_175_int = 536312; // 0xed5 PushI
	var_176_int = 12285; // 0xed6 PushI
	var_177_int = 38097; // 0xed7 PushI
	AddReply(var_175_int, var_176_int, var_177_int); // 0xed8 TObjFunc
	return 0; // 0xeda Return
	
Label_3803:
	var_178_string = ""; // 0xedb PushV
	var_178_string = "Neutral"; // 0xedc MovS
	func_3705(var_74_cvector, var_178_string); // 0xedd NEW_2
	var_179_int = 511109; // 0xedf PushI
	SetMessage(var_179_int); // 0xee0 TObjFunc
	ClearReplies(); // 0xee2 TObjFunc
	var_180_bool = 0; var_181_object = Obj(); // 0xee4 PushV
	var_181_object = var_1_object; // 0xee5 MovT
	func_9556(var_181_object); // 0xee6 NEW_2
	if(var_180_bool == 0) goto Label_3822; // 0xee8 JumpB
	var_186_int = 511110; // 0xee9 PushI
	var_187_int = 12300; // 0xeea PushI
	var_188_int = 12299; // 0xeeb PushI
	AddReply(var_186_int, var_187_int, var_188_int); // 0xeec TObjFunc
	
Label_3822:
	var_189_bool = 0; // 0xeee PushV
	var_189_bool = 0; // 0xeef MovB
	var_190_bool = 0; var_191_object = Obj(); // 0xef0 PushV
	var_191_object = var_1_object; // 0xef1 MovT
	func_9568(var_191_object); // 0xef2 NEW_2
	if(var_190_bool == 0) goto Label_3835; // 0xef4 JumpB
	var_196_bool = 0; var_197_object = Obj(); // 0xef5 PushV
	var_197_object = var_1_object; // 0xef6 MovT
	func_9580(var_196_bool, var_197_object); // 0xef7 NEW_2
	if(var_196_bool == 0) goto Label_3835; // 0xef9 JumpB
	var_189_bool = 1; // 0xefa MovB
	
Label_3835:
	if(var_189_bool == 0) goto Label_3841; // 0xefb JumpB
	var_205_int = 511113; // 0xefc PushI
	var_206_int = 12303; // 0xefd PushI
	var_207_int = 12302; // 0xefe PushI
	AddReply(var_205_int, var_206_int, var_207_int); // 0xeff TObjFunc
	
Label_3841:
	var_208_int = 536311; // 0xf01 PushI
	var_209_int = -1; // 0xf02 PushI
	var_210_int = 38096; // 0xf03 PushI
	AddReply(var_208_int, var_209_int, var_210_int); // 0xf04 TObjFunc
	return 0; // 0xf06 Return
	
Label_3847:
	var_211_int = 12303; // 0xf07 PushI
	var_212_bool = var_73_cvector == var_211_int; // 0xf08 Eq
	if(var_212_bool == 0) goto Label_3865; // 0xf09 JumpB
	var_213_string = ""; // 0xf0a PushV
	var_213_string = "Neutral"; // 0xf0b MovS
	func_3705(var_74_cvector, var_213_string); // 0xf0c NEW_2
	var_214_int = 511114; // 0xf0e PushI
	SetMessage(var_214_int); // 0xf0f TObjFunc
	ClearReplies(); // 0xf11 TObjFunc
	var_215_int = 511115; // 0xf13 PushI
	var_216_int = 12305; // 0xf14 PushI
	var_217_int = 12304; // 0xf15 PushI
	AddReply(var_215_int, var_216_int, var_217_int); // 0xf16 TObjFunc
	return 0; // 0xf18 Return
	
Label_3865:
	var_218_int = 12305; // 0xf19 PushI
	var_219_bool = var_73_cvector == var_218_int; // 0xf1a Eq
	if(var_219_bool == 0) goto Label_3883; // 0xf1b JumpB
	var_220_string = ""; // 0xf1c PushV
	var_220_string = "Surprise"; // 0xf1d MovS
	func_3705(var_74_cvector, var_220_string); // 0xf1e NEW_2
	var_221_int = 511116; // 0xf20 PushI
	SetMessage(var_221_int); // 0xf21 TObjFunc
	ClearReplies(); // 0xf23 TObjFunc
	var_222_int = 511118; // 0xf25 PushI
	var_223_int = 12308; // 0xf26 PushI
	var_224_int = 12307; // 0xf27 PushI
	AddReply(var_222_int, var_223_int, var_224_int); // 0xf28 TObjFunc
	return 0; // 0xf2a Return
	
Label_3883:
	var_225_int = 12308; // 0xf2b PushI
	var_226_bool = var_73_cvector == var_225_int; // 0xf2c Eq
	if(var_226_bool == 0) goto Label_3906; // 0xf2d JumpB
	var_227_string = ""; // 0xf2e PushV
	var_227_string = "Surprise"; // 0xf2f MovS
	func_3705(var_74_cvector, var_227_string); // 0xf30 NEW_2
	var_228_int = 511119; // 0xf32 PushI
	SetMessage(var_228_int); // 0xf33 TObjFunc
	ClearReplies(); // 0xf35 TObjFunc
	var_229_int = 511120; // 0xf37 PushI
	var_230_int = -1; // 0xf38 PushI
	var_231_int = 12309; // 0xf39 PushI
	AddReply(var_229_int, var_230_int, var_231_int); // 0xf3a TObjFunc
	var_232_int = 536315; // 0xf3c PushI
	var_233_int = -1; // 0xf3d PushI
	var_234_int = 38101; // 0xf3e PushI
	AddReply(var_232_int, var_233_int, var_234_int); // 0xf3f TObjFunc
	return 0; // 0xf41 Return
	
Label_3906:
	var_235_int = 12300; // 0xf42 PushI
	var_236_bool = var_73_cvector == var_235_int; // 0xf43 Eq
	if(var_236_bool == 0) goto Label_3924; // 0xf44 JumpB
	var_237_string = ""; // 0xf45 PushV
	var_237_string = "Neutral"; // 0xf46 MovS
	func_3705(var_74_cvector, var_237_string); // 0xf47 NEW_2
	var_238_int = 511111; // 0xf49 PushI
	SetMessage(var_238_int); // 0xf4a TObjFunc
	ClearReplies(); // 0xf4c TObjFunc
	var_239_int = 511112; // 0xf4e PushI
	var_240_int = -1; // 0xf4f PushI
	var_241_int = 12301; // 0xf50 PushI
	AddReply(var_239_int, var_240_int, var_241_int); // 0xf51 TObjFunc
	return 0; // 0xf53 Return
	
Label_3924:
	var_242_int = 12285; // 0xf54 PushI
	var_243_bool = var_73_cvector == var_242_int; // 0xf55 Eq
	if(var_243_bool == 0) goto Label_3947; // 0xf56 JumpB
	var_244_string = ""; // 0xf57 PushV
	var_244_string = "Confusion"; // 0xf58 MovS
	func_3705(var_74_cvector, var_244_string); // 0xf59 NEW_2
	var_245_int = 511098; // 0xf5b PushI
	SetMessage(var_245_int); // 0xf5c TObjFunc
	ClearReplies(); // 0xf5e TObjFunc
	var_246_int = 511099; // 0xf60 PushI
	var_247_int = 12287; // 0xf61 PushI
	var_248_int = 12286; // 0xf62 PushI
	AddReply(var_246_int, var_247_int, var_248_int); // 0xf63 TObjFunc
	var_249_int = 511104; // 0xf65 PushI
	var_250_int = 12289; // 0xf66 PushI
	var_251_int = 12291; // 0xf67 PushI
	AddReply(var_249_int, var_250_int, var_251_int); // 0xf68 TObjFunc
	return 0; // 0xf6a Return
	
Label_3947:
	var_252_int = 12287; // 0xf6b PushI
	var_253_bool = var_73_cvector == var_252_int; // 0xf6c Eq
	if(var_253_bool == 0) goto Label_3970; // 0xf6d JumpB
	var_254_string = ""; // 0xf6e PushV
	var_254_string = "Confusion"; // 0xf6f MovS
	func_3705(var_74_cvector, var_254_string); // 0xf70 NEW_2
	var_255_int = 511100; // 0xf72 PushI
	SetMessage(var_255_int); // 0xf73 TObjFunc
	ClearReplies(); // 0xf75 TObjFunc
	var_256_int = 511101; // 0xf77 PushI
	var_257_int = 12289; // 0xf78 PushI
	var_258_int = 12288; // 0xf79 PushI
	AddReply(var_256_int, var_257_int, var_258_int); // 0xf7a TObjFunc
	var_259_int = 511103; // 0xf7c PushI
	var_260_int = 12289; // 0xf7d PushI
	var_261_int = 12290; // 0xf7e PushI
	AddReply(var_259_int, var_260_int, var_261_int); // 0xf7f TObjFunc
	return 0; // 0xf81 Return
	
Label_3970:
	var_262_int = 12289; // 0xf82 PushI
	var_263_bool = var_73_cvector == var_262_int; // 0xf83 Eq
	if(var_263_bool == 0) goto Label_3988; // 0xf84 JumpB
	var_264_string = ""; // 0xf85 PushV
	var_264_string = "Neutral"; // 0xf86 MovS
	func_3705(var_74_cvector, var_264_string); // 0xf87 NEW_2
	var_265_int = 511102; // 0xf89 PushI
	SetMessage(var_265_int); // 0xf8a TObjFunc
	ClearReplies(); // 0xf8c TObjFunc
	var_266_int = 511105; // 0xf8e PushI
	var_267_int = 12295; // 0xf8f PushI
	var_268_int = 12294; // 0xf90 PushI
	AddReply(var_266_int, var_267_int, var_268_int); // 0xf91 TObjFunc
	return 0; // 0xf93 Return
	
Label_3988:
	var_269_int = 12295; // 0xf94 PushI
	var_270_bool = var_73_cvector == var_269_int; // 0xf95 Eq
	if(var_270_bool == 0) goto Label_4011; // 0xf96 JumpB
	var_271_string = ""; // 0xf97 PushV
	var_271_string = "Neutral"; // 0xf98 MovS
	func_3705(var_74_cvector, var_271_string); // 0xf99 NEW_2
	var_272_int = 511106; // 0xf9b PushI
	SetMessage(var_272_int); // 0xf9c TObjFunc
	ClearReplies(); // 0xf9e TObjFunc
	var_273_int = 511107; // 0xfa0 PushI
	var_274_int = -1; // 0xfa1 PushI
	var_275_int = 12296; // 0xfa2 PushI
	AddReply(var_273_int, var_274_int, var_275_int); // 0xfa3 TObjFunc
	var_276_int = 511108; // 0xfa5 PushI
	var_277_int = -1; // 0xfa6 PushI
	var_278_int = 12297; // 0xfa7 PushI
	AddReply(var_276_int, var_277_int, var_278_int); // 0xfa8 TObjFunc
	return 0; // 0xfaa Return
	
Label_4011:
	var_3_string = 1; // 0xfab TMovB
	var_279_bool = 0; // 0xfac PushV
	func_8923(var_279_bool); // 0xfad NEW_2
	if(var_279_bool == 0) goto Label_4019; // 0xfaf JumpB
	lshStopAnimation(); // 0xfb0 Func
	goto Label_4021; // 0xfb2 Jump
	
Label_4021:
	return 0; // 0xfb5 Return
	
Label_4019:
	StopAnimation(); // 0xfb3 Func
	
Label_4023:
	return 0; // 0xfb7 Return
}


task_14_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_int, var_36_int, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_object, var_53_object, var_54_object, var_55_string, var_56_bool, var_57_object, var_58_object, var_59_object, var_60_string, var_61_bool, var_62_object, var_63_object, var_64_object, var_65_string, var_66_bool, var_67_object, var_68_object, var_69_object, var_70_string, var_71_bool, var_72_bool, var_73_cvector, var_74_cvector)
{
	var_75_int = 1; // 0x10b3 PushI
	if(var_75_int == 0) goto Label_4757; // 0x10b4 JumpB
	func_8750(); // 0x10b6 NEW_2
	var_77_int = 12998; // 0x10b8 PushI
	var_78_bool = var_74_cvector == var_77_int; // 0x10b9 Eq
	if(var_78_bool == 0) goto Label_4288; // 0x10ba JumpB
	var_79_object = Obj(); var_80_object = Obj(); // 0x10bb PushV
	var_79_object = var_1_object; // 0x10bc MovT
	var_80_object = var_0_object; // 0x10bd MovT
	func_9227(); // 0x10be NEW_2
	
Label_4288:
	var_150_int = 12999; // 0x10c0 PushI
	var_151_bool = var_74_cvector == var_150_int; // 0x10c1 Eq
	if(var_151_bool == 0) goto Label_4296; // 0x10c2 JumpB
	var_152_object = Obj(); var_153_object = Obj(); // 0x10c3 PushV
	var_152_object = var_1_object; // 0x10c4 MovT
	var_153_object = var_0_object; // 0x10c5 MovT
	func_9227(); // 0x10c6 NEW_2
	
Label_4296:
	var_154_int = 12975; // 0x10c8 PushI
	var_155_bool = var_74_cvector == var_154_int; // 0x10c9 Eq
	if(var_155_bool == 0) goto Label_4304; // 0x10ca JumpB
	var_156_object = Obj(); var_157_object = Obj(); // 0x10cb PushV
	var_156_object = var_1_object; // 0x10cc MovT
	var_157_object = var_0_object; // 0x10cd MovT
	func_9269(); // 0x10ce NEW_2
	
Label_4304:
	var_160_int = 12989; // 0x10d0 PushI
	var_161_bool = var_74_cvector == var_160_int; // 0x10d1 Eq
	if(var_161_bool == 0) goto Label_4317; // 0x10d2 JumpB
	var_162_object = Obj(); var_163_object = Obj(); // 0x10d3 PushV
	var_162_object = var_1_object; // 0x10d4 MovT
	var_163_object = var_0_object; // 0x10d5 MovT
	func_8953(); // 0x10d6 NEW_2
	var_166_object = Obj(); var_167_object = Obj(); // 0x10d8 PushV
	var_166_object = var_1_object; // 0x10d9 MovT
	var_167_object = var_0_object; // 0x10da MovT
	func_9067(var_167_object); // 0x10db NEW_2
	
Label_4317:
	var_187_int = 12990; // 0x10dd PushI
	var_188_bool = var_74_cvector == var_187_int; // 0x10de Eq
	if(var_188_bool == 0) goto Label_4330; // 0x10df JumpB
	var_189_object = Obj(); var_190_object = Obj(); // 0x10e0 PushV
	var_189_object = var_1_object; // 0x10e1 MovT
	var_190_object = var_0_object; // 0x10e2 MovT
	func_8953(); // 0x10e3 NEW_2
	var_191_object = Obj(); var_192_object = Obj(); // 0x10e5 PushV
	var_191_object = var_1_object; // 0x10e6 MovT
	var_192_object = var_0_object; // 0x10e7 MovT
	func_9067(var_192_object); // 0x10e8 NEW_2
	
Label_4330:
	var_193_int = 13739; // 0x10ea PushI
	var_194_bool = var_74_cvector == var_193_int; // 0x10eb Eq
	if(var_194_bool == 0) goto Label_4338; // 0x10ec JumpB
	var_195_object = Obj(); var_196_object = Obj(); // 0x10ed PushV
	var_195_object = var_1_object; // 0x10ee MovT
	var_196_object = var_0_object; // 0x10ef MovT
	func_9275(); // 0x10f0 NEW_2
	
Label_4338:
	var_199_int = 13741; // 0x10f2 PushI
	var_200_bool = var_74_cvector == var_199_int; // 0x10f3 Eq
	if(var_200_bool == 0) goto Label_4351; // 0x10f4 JumpB
	var_201_object = Obj(); var_202_object = Obj(); // 0x10f5 PushV
	var_201_object = var_1_object; // 0x10f6 MovT
	var_202_object = var_0_object; // 0x10f7 MovT
	func_9010(); // 0x10f8 NEW_2
	var_203_object = Obj(); var_204_object = Obj(); // 0x10fa PushV
	var_203_object = var_1_object; // 0x10fb MovT
	var_204_object = var_0_object; // 0x10fc MovT
	func_9281(var_204_object); // 0x10fd NEW_2
	
Label_4351:
	var_243_int = 16862; // 0x10ff PushI
	var_244_bool = var_74_cvector == var_243_int; // 0x1100 Eq
	if(var_244_bool == 0) goto Label_4359; // 0x1101 JumpB
	var_245_object = Obj(); var_246_object = Obj(); // 0x1102 PushV
	var_245_object = var_1_object; // 0x1103 MovT
	var_246_object = var_0_object; // 0x1104 MovT
	func_9281(var_246_object); // 0x1105 NEW_2
	
Label_4359:
	var_247_int = 13751; // 0x1107 PushI
	var_248_bool = var_73_cvector == var_247_int; // 0x1108 Eq
	if(var_248_bool == 0) goto Label_4471; // 0x1109 JumpB
	var_249_bool = 0; // 0x110a PushV
	var_249_bool = 0; // 0x110b MovB
	var_250_bool = 0; // 0x110c PushV
	var_250_bool = 0; // 0x110d MovB
	var_251_bool = 0; var_252_object = Obj(); // 0x110e PushV
	var_252_object = var_1_object; // 0x110f MovT
	func_9783(var_252_object); // 0x1110 NEW_2
	if(var_251_bool == 0) goto Label_4378; // 0x1112 JumpB
	var_257_bool = 0; var_258_object = Obj(); // 0x1113 PushV
	var_258_object = var_1_object; // 0x1114 MovT
	func_9723(var_258_object); // 0x1115 NEW_2
	var_263_bool = var_257_bool == 0; // 0x1117 Not
	if(var_263_bool == 0) goto Label_4378; // 0x1118 JumpB
	var_250_bool = 1; // 0x1119 MovB
	
Label_4378:
	if(var_250_bool == 0) goto Label_4386; // 0x111a JumpB
	var_264_bool = 0; var_265_object = Obj(); // 0x111b PushV
	var_265_object = var_1_object; // 0x111c MovT
	func_9735(var_265_object); // 0x111d NEW_2
	var_270_bool = var_264_bool == 0; // 0x111f Not
	if(var_270_bool == 0) goto Label_4386; // 0x1120 JumpB
	var_249_bool = 1; // 0x1121 MovB
	
Label_4386:
	if(var_249_bool == 0) goto Label_4418; // 0x1122 JumpB
	var_271_object = Obj(); var_272_object = Obj(); // 0x1123 PushV
	var_271_object = var_1_object; // 0x1124 MovT
	var_272_object = var_0_object; // 0x1125 MovT
	func_9288(); // 0x1126 NEW_2
	var_275_string = ""; // 0x1128 PushV
	var_275_string = "Anger"; // 0x1129 MovS
	func_4252(var_74_cvector, var_275_string); // 0x112a NEW_2
	var_292_int = 512584; // 0x112c PushI
	SetMessage(var_292_int); // 0x112d TObjFunc
	ClearReplies(); // 0x112f TObjFunc
	var_293_int = 511771; // 0x1131 PushI
	var_294_int = 12991; // 0x1132 PushI
	var_295_int = 12979; // 0x1133 PushI
	AddReply(var_293_int, var_294_int, var_295_int); // 0x1134 TObjFunc
	var_296_bool = 0; var_297_object = Obj(); // 0x1136 PushV
	var_297_object = var_1_object; // 0x1137 MovT
	func_9711(var_297_object); // 0x1138 NEW_2
	var_302_bool = var_296_bool == 0; // 0x113a Not
	if(var_302_bool == 0) goto Label_4417; // 0x113b JumpB
	var_303_int = 512585; // 0x113c PushI
	var_304_int = 13755; // 0x113d PushI
	var_305_int = 13752; // 0x113e PushI
	AddReply(var_303_int, var_304_int, var_305_int); // 0x113f TObjFunc
	
Label_4417:
	return 0; // 0x1141 Return
	
Label_4418:
	var_306_string = ""; // 0x1142 PushV
	var_306_string = "Fear"; // 0x1143 MovS
	func_4252(var_74_cvector, var_306_string); // 0x1144 NEW_2
	var_307_int = 511765; // 0x1146 PushI
	SetMessage(var_307_int); // 0x1147 TObjFunc
	ClearReplies(); // 0x1149 TObjFunc
	var_308_bool = 0; // 0x114b PushV
	var_308_bool = 0; // 0x114c MovB
	var_309_bool = 0; var_310_object = Obj(); // 0x114d PushV
	var_310_object = var_1_object; // 0x114e MovT
	func_9747(var_310_object); // 0x114f NEW_2
	if(var_309_bool == 0) goto Label_4440; // 0x1151 JumpB
	var_315_bool = 0; var_316_object = Obj(); // 0x1152 PushV
	var_316_object = var_1_object; // 0x1153 MovT
	func_9759(var_316_object); // 0x1154 NEW_2
	if(var_315_bool == 0) goto Label_4440; // 0x1156 JumpB
	var_308_bool = 1; // 0x1157 MovB
	
Label_4440:
	if(var_308_bool == 0) goto Label_4446; // 0x1158 JumpB
	var_321_int = 511767; // 0x1159 PushI
	var_322_int = 12977; // 0x115a PushI
	var_323_int = 12975; // 0x115b PushI
	AddReply(var_321_int, var_322_int, var_323_int); // 0x115c TObjFunc
	
Label_4446:
	var_324_bool = 0; // 0x115e PushV
	var_324_bool = 0; // 0x115f MovB
	var_325_bool = 0; var_326_object = Obj(); // 0x1160 PushV
	var_326_object = var_1_object; // 0x1161 MovT
	func_9723(var_326_object); // 0x1162 NEW_2
	if(var_325_bool == 0) goto Label_4459; // 0x1164 JumpB
	var_327_bool = 0; var_328_object = Obj(); // 0x1165 PushV
	var_328_object = var_1_object; // 0x1166 MovT
	func_9771(var_328_object); // 0x1167 NEW_2
	if(var_327_bool == 0) goto Label_4459; // 0x1169 JumpB
	var_324_bool = 1; // 0x116a MovB
	
Label_4459:
	if(var_324_bool == 0) goto Label_4465; // 0x116b JumpB
	var_333_int = 512570; // 0x116c PushI
	var_334_int = 13740; // 0x116d PushI
	var_335_int = 13739; // 0x116e PushI
	AddReply(var_333_int, var_334_int, var_335_int); // 0x116f TObjFunc
	
Label_4465:
	var_336_int = 511766; // 0x1171 PushI
	var_337_int = -1; // 0x1172 PushI
	var_338_int = 12974; // 0x1173 PushI
	AddReply(var_336_int, var_337_int, var_338_int); // 0x1174 TObjFunc
	return 0; // 0x1176 Return
	
Label_4471:
	var_339_int = 13740; // 0x1177 PushI
	var_340_bool = var_73_cvector == var_339_int; // 0x1178 Eq
	if(var_340_bool == 0) goto Label_4489; // 0x1179 JumpB
	var_341_string = ""; // 0x117a PushV
	var_341_string = "Neutral"; // 0x117b MovS
	func_4252(var_74_cvector, var_341_string); // 0x117c NEW_2
	var_342_int = 512571; // 0x117e PushI
	SetMessage(var_342_int); // 0x117f TObjFunc
	ClearReplies(); // 0x1181 TObjFunc
	var_343_int = 512592; // 0x1183 PushI
	var_344_int = 13763; // 0x1184 PushI
	var_345_int = 13762; // 0x1185 PushI
	AddReply(var_343_int, var_344_int, var_345_int); // 0x1186 TObjFunc
	return 0; // 0x1188 Return
	
Label_4489:
	var_346_int = 13763; // 0x1189 PushI
	var_347_bool = var_73_cvector == var_346_int; // 0x118a Eq
	if(var_347_bool == 0) goto Label_4507; // 0x118b JumpB
	var_348_string = ""; // 0x118c PushV
	var_348_string = "Neutral"; // 0x118d MovS
	func_4252(var_74_cvector, var_348_string); // 0x118e NEW_2
	var_349_int = 512593; // 0x1190 PushI
	SetMessage(var_349_int); // 0x1191 TObjFunc
	ClearReplies(); // 0x1193 TObjFunc
	var_350_int = 512594; // 0x1195 PushI
	var_351_int = 13765; // 0x1196 PushI
	var_352_int = 13764; // 0x1197 PushI
	AddReply(var_350_int, var_351_int, var_352_int); // 0x1198 TObjFunc
	return 0; // 0x119a Return
	
Label_4507:
	var_353_int = 13765; // 0x119b PushI
	var_354_bool = var_73_cvector == var_353_int; // 0x119c Eq
	if(var_354_bool == 0) goto Label_4530; // 0x119d JumpB
	var_355_string = ""; // 0x119e PushV
	var_355_string = "Neutral"; // 0x119f MovS
	func_4252(var_74_cvector, var_355_string); // 0x11a0 NEW_2
	var_356_int = 512595; // 0x11a2 PushI
	SetMessage(var_356_int); // 0x11a3 TObjFunc
	ClearReplies(); // 0x11a5 TObjFunc
	var_357_int = 512572; // 0x11a7 PushI
	var_358_int = -1; // 0x11a8 PushI
	var_359_int = 13741; // 0x11a9 PushI
	AddReply(var_357_int, var_358_int, var_359_int); // 0x11aa TObjFunc
	var_360_int = 515790; // 0x11ac PushI
	var_361_int = -1; // 0x11ad PushI
	var_362_int = 16862; // 0x11ae PushI
	AddReply(var_360_int, var_361_int, var_362_int); // 0x11af TObjFunc
	return 0; // 0x11b1 Return
	
Label_4530:
	var_363_int = 12977; // 0x11b2 PushI
	var_364_bool = var_73_cvector == var_363_int; // 0x11b3 Eq
	if(var_364_bool == 0) goto Label_4553; // 0x11b4 JumpB
	var_365_string = ""; // 0x11b5 PushV
	var_365_string = "Fear"; // 0x11b6 MovS
	func_4252(var_74_cvector, var_365_string); // 0x11b7 NEW_2
	var_366_int = 511769; // 0x11b9 PushI
	SetMessage(var_366_int); // 0x11ba TObjFunc
	ClearReplies(); // 0x11bc TObjFunc
	var_367_int = 511770; // 0x11be PushI
	var_368_int = 12981; // 0x11bf PushI
	var_369_int = 12978; // 0x11c0 PushI
	AddReply(var_367_int, var_368_int, var_369_int); // 0x11c1 TObjFunc
	var_370_int = 511772; // 0x11c3 PushI
	var_371_int = 12981; // 0x11c4 PushI
	var_372_int = 12980; // 0x11c5 PushI
	AddReply(var_370_int, var_371_int, var_372_int); // 0x11c6 TObjFunc
	return 0; // 0x11c8 Return
	
Label_4553:
	var_373_int = 12981; // 0x11c9 PushI
	var_374_bool = var_73_cvector == var_373_int; // 0x11ca Eq
	if(var_374_bool == 0) goto Label_4571; // 0x11cb JumpB
	var_375_string = ""; // 0x11cc PushV
	var_375_string = "Neutral"; // 0x11cd MovS
	func_4252(var_74_cvector, var_375_string); // 0x11ce NEW_2
	var_376_int = 511773; // 0x11d0 PushI
	SetMessage(var_376_int); // 0x11d1 TObjFunc
	ClearReplies(); // 0x11d3 TObjFunc
	var_377_int = 511774; // 0x11d5 PushI
	var_378_int = 12984; // 0x11d6 PushI
	var_379_int = 12983; // 0x11d7 PushI
	AddReply(var_377_int, var_378_int, var_379_int); // 0x11d8 TObjFunc
	return 0; // 0x11da Return
	
Label_4571:
	var_380_int = 12984; // 0x11db PushI
	var_381_bool = var_73_cvector == var_380_int; // 0x11dc Eq
	if(var_381_bool == 0) goto Label_4599; // 0x11dd JumpB
	var_382_string = ""; // 0x11de PushV
	var_382_string = "Neutral"; // 0x11df MovS
	func_4252(var_74_cvector, var_382_string); // 0x11e0 NEW_2
	var_383_int = 511775; // 0x11e2 PushI
	SetMessage(var_383_int); // 0x11e3 TObjFunc
	ClearReplies(); // 0x11e5 TObjFunc
	var_384_int = 511776; // 0x11e7 PushI
	var_385_int = 12987; // 0x11e8 PushI
	var_386_int = 12985; // 0x11e9 PushI
	AddReply(var_384_int, var_385_int, var_386_int); // 0x11ea TObjFunc
	var_387_int = 511777; // 0x11ec PushI
	var_388_int = 12987; // 0x11ed PushI
	var_389_int = 12986; // 0x11ee PushI
	AddReply(var_387_int, var_388_int, var_389_int); // 0x11ef TObjFunc
	var_390_int = 515789; // 0x11f1 PushI
	var_391_int = -1; // 0x11f2 PushI
	var_392_int = 16861; // 0x11f3 PushI
	AddReply(var_390_int, var_391_int, var_392_int); // 0x11f4 TObjFunc
	return 0; // 0x11f6 Return
	
Label_4599:
	var_393_int = 12987; // 0x11f7 PushI
	var_394_bool = var_73_cvector == var_393_int; // 0x11f8 Eq
	if(var_394_bool == 0) goto Label_4622; // 0x11f9 JumpB
	var_395_string = ""; // 0x11fa PushV
	var_395_string = "Neutral"; // 0x11fb MovS
	func_4252(var_74_cvector, var_395_string); // 0x11fc NEW_2
	var_396_int = 511778; // 0x11fe PushI
	SetMessage(var_396_int); // 0x11ff TObjFunc
	ClearReplies(); // 0x1201 TObjFunc
	var_397_int = 511779; // 0x1203 PushI
	var_398_int = -1; // 0x1204 PushI
	var_399_int = 12989; // 0x1205 PushI
	AddReply(var_397_int, var_398_int, var_399_int); // 0x1206 TObjFunc
	var_400_int = 511780; // 0x1208 PushI
	var_401_int = -1; // 0x1209 PushI
	var_402_int = 12990; // 0x120a PushI
	AddReply(var_400_int, var_401_int, var_402_int); // 0x120b TObjFunc
	return 0; // 0x120d Return
	
Label_4622:
	var_403_int = 13755; // 0x120e PushI
	var_404_bool = var_73_cvector == var_403_int; // 0x120f Eq
	if(var_404_bool == 0) goto Label_4640; // 0x1210 JumpB
	var_405_string = ""; // 0x1211 PushV
	var_405_string = "Neutral"; // 0x1212 MovS
	func_4252(var_74_cvector, var_405_string); // 0x1213 NEW_2
	var_406_int = 512587; // 0x1215 PushI
	SetMessage(var_406_int); // 0x1216 TObjFunc
	ClearReplies(); // 0x1218 TObjFunc
	var_407_int = 512588; // 0x121a PushI
	var_408_int = 12993; // 0x121b PushI
	var_409_int = 13756; // 0x121c PushI
	AddReply(var_407_int, var_408_int, var_409_int); // 0x121d TObjFunc
	return 0; // 0x121f Return
	
Label_4640:
	var_410_int = 12991; // 0x1220 PushI
	var_411_bool = var_73_cvector == var_410_int; // 0x1221 Eq
	if(var_411_bool == 0) goto Label_4658; // 0x1222 JumpB
	var_412_string = ""; // 0x1223 PushV
	var_412_string = "Anger"; // 0x1224 MovS
	func_4252(var_74_cvector, var_412_string); // 0x1225 NEW_2
	var_413_int = 511781; // 0x1227 PushI
	SetMessage(var_413_int); // 0x1228 TObjFunc
	ClearReplies(); // 0x122a TObjFunc
	var_414_int = 511782; // 0x122c PushI
	var_415_int = 12993; // 0x122d PushI
	var_416_int = 12992; // 0x122e PushI
	AddReply(var_414_int, var_415_int, var_416_int); // 0x122f TObjFunc
	return 0; // 0x1231 Return
	
Label_4658:
	var_417_int = 12993; // 0x1232 PushI
	var_418_bool = var_73_cvector == var_417_int; // 0x1233 Eq
	if(var_418_bool == 0) goto Label_4681; // 0x1234 JumpB
	var_419_string = ""; // 0x1235 PushV
	var_419_string = "Neutral"; // 0x1236 MovS
	func_4252(var_74_cvector, var_419_string); // 0x1237 NEW_2
	var_420_int = 511783; // 0x1239 PushI
	SetMessage(var_420_int); // 0x123a TObjFunc
	ClearReplies(); // 0x123c TObjFunc
	var_421_int = 512589; // 0x123e PushI
	var_422_int = 12995; // 0x123f PushI
	var_423_int = 13758; // 0x1240 PushI
	AddReply(var_421_int, var_422_int, var_423_int); // 0x1241 TObjFunc
	var_424_int = 511784; // 0x1243 PushI
	var_425_int = 13760; // 0x1244 PushI
	var_426_int = 12994; // 0x1245 PushI
	AddReply(var_424_int, var_425_int, var_426_int); // 0x1246 TObjFunc
	return 0; // 0x1248 Return
	
Label_4681:
	var_427_int = 12995; // 0x1249 PushI
	var_428_bool = var_73_cvector == var_427_int; // 0x124a Eq
	if(var_428_bool == 0) goto Label_4699; // 0x124b JumpB
	var_429_string = ""; // 0x124c PushV
	var_429_string = "Confusion"; // 0x124d MovS
	func_4252(var_74_cvector, var_429_string); // 0x124e NEW_2
	var_430_int = 511785; // 0x1250 PushI
	SetMessage(var_430_int); // 0x1251 TObjFunc
	ClearReplies(); // 0x1253 TObjFunc
	var_431_int = 512590; // 0x1255 PushI
	var_432_int = 13760; // 0x1256 PushI
	var_433_int = 13759; // 0x1257 PushI
	AddReply(var_431_int, var_432_int, var_433_int); // 0x1258 TObjFunc
	return 0; // 0x125a Return
	
Label_4699:
	var_434_int = 13760; // 0x125b PushI
	var_435_bool = var_73_cvector == var_434_int; // 0x125c Eq
	if(var_435_bool == 0) goto Label_4722; // 0x125d JumpB
	var_436_string = ""; // 0x125e PushV
	var_436_string = "Neutral"; // 0x125f MovS
	func_4252(var_74_cvector, var_436_string); // 0x1260 NEW_2
	var_437_int = 512591; // 0x1262 PushI
	SetMessage(var_437_int); // 0x1263 TObjFunc
	ClearReplies(); // 0x1265 TObjFunc
	var_438_int = 511786; // 0x1267 PushI
	var_439_int = 12997; // 0x1268 PushI
	var_440_int = 12996; // 0x1269 PushI
	AddReply(var_438_int, var_439_int, var_440_int); // 0x126a TObjFunc
	var_441_int = 515791; // 0x126c PushI
	var_442_int = 12997; // 0x126d PushI
	var_443_int = 16863; // 0x126e PushI
	AddReply(var_441_int, var_442_int, var_443_int); // 0x126f TObjFunc
	return 0; // 0x1271 Return
	
Label_4722:
	var_444_int = 12997; // 0x1272 PushI
	var_445_bool = var_73_cvector == var_444_int; // 0x1273 Eq
	if(var_445_bool == 0) goto Label_4745; // 0x1274 JumpB
	var_446_string = ""; // 0x1275 PushV
	var_446_string = "Neutral"; // 0x1276 MovS
	func_4252(var_74_cvector, var_446_string); // 0x1277 NEW_2
	var_447_int = 511787; // 0x1279 PushI
	SetMessage(var_447_int); // 0x127a TObjFunc
	ClearReplies(); // 0x127c TObjFunc
	var_448_int = 511788; // 0x127e PushI
	var_449_int = -1; // 0x127f PushI
	var_450_int = 12998; // 0x1280 PushI
	AddReply(var_448_int, var_449_int, var_450_int); // 0x1281 TObjFunc
	var_451_int = 511789; // 0x1283 PushI
	var_452_int = -1; // 0x1284 PushI
	var_453_int = 12999; // 0x1285 PushI
	AddReply(var_451_int, var_452_int, var_453_int); // 0x1286 TObjFunc
	return 0; // 0x1288 Return
	
Label_4745:
	var_3_string = 1; // 0x1289 TMovB
	var_454_bool = 0; // 0x128a PushV
	func_8923(var_454_bool); // 0x128b NEW_2
	if(var_454_bool == 0) goto Label_4753; // 0x128d JumpB
	lshStopAnimation(); // 0x128e Func
	goto Label_4755; // 0x1290 Jump
	
Label_4755:
	return 0; // 0x1293 Return
	
Label_4753:
	StopAnimation(); // 0x1291 Func
	
Label_4757:
	return 0; // 0x1295 Return
}


task_16_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_int, var_41_int, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_object, var_53_object, var_54_object, var_55_string, var_56_bool, var_57_object, var_58_object, var_59_object, var_60_string, var_61_bool, var_62_object, var_63_object, var_64_object, var_65_string, var_66_bool, var_67_object, var_68_object, var_69_object, var_70_string, var_71_bool, var_72_bool, var_73_cvector, var_74_cvector)
{
	var_75_int = 1; // 0x133d PushI
	if(var_75_int == 0) goto Label_5117; // 0x133e JumpB
	func_8750(); // 0x1340 NEW_2
	var_77_int = 34767; // 0x1342 PushI
	var_78_bool = var_74_cvector == var_77_int; // 0x1343 Eq
	if(var_78_bool == 0) goto Label_4938; // 0x1344 JumpB
	var_79_object = Obj(); var_80_object = Obj(); // 0x1345 PushV
	var_79_object = var_1_object; // 0x1346 MovT
	var_80_object = var_0_object; // 0x1347 MovT
	func_8985(); // 0x1348 NEW_2
	
Label_4938:
	var_106_int = 42862; // 0x134a PushI
	var_107_bool = var_74_cvector == var_106_int; // 0x134b Eq
	if(var_107_bool == 0) goto Label_4946; // 0x134c JumpB
	var_108_object = Obj(); var_109_object = Obj(); // 0x134d PushV
	var_108_object = var_1_object; // 0x134e MovT
	var_109_object = var_0_object; // 0x134f MovT
	func_8985(); // 0x1350 NEW_2
	
Label_4946:
	var_110_int = 42863; // 0x1352 PushI
	var_111_bool = var_74_cvector == var_110_int; // 0x1353 Eq
	if(var_111_bool == 0) goto Label_4954; // 0x1354 JumpB
	var_112_object = Obj(); var_113_object = Obj(); // 0x1355 PushV
	var_112_object = var_1_object; // 0x1356 MovT
	var_113_object = var_0_object; // 0x1357 MovT
	func_8985(); // 0x1358 NEW_2
	
Label_4954:
	var_114_int = 34759; // 0x135a PushI
	var_115_bool = var_73_cvector == var_114_int; // 0x135b Eq
	if(var_115_bool == 0) goto Label_4982; // 0x135c JumpB
	var_116_string = ""; // 0x135d PushV
	var_116_string = "Neutral"; // 0x135e MovS
	func_4902(var_74_cvector, var_116_string); // 0x135f NEW_2
	var_133_int = 533245; // 0x1361 PushI
	SetMessage(var_133_int); // 0x1362 TObjFunc
	ClearReplies(); // 0x1364 TObjFunc
	var_134_bool = 0; var_135_object = Obj(); // 0x1366 PushV
	var_135_object = var_1_object; // 0x1367 MovT
	func_9496(var_135_object); // 0x1368 NEW_2
	if(var_134_bool == 0) goto Label_4976; // 0x136a JumpB
	var_142_int = 533246; // 0x136b PushI
	var_143_int = 42854; // 0x136c PushI
	var_144_int = 34760; // 0x136d PushI
	AddReply(var_142_int, var_143_int, var_144_int); // 0x136e TObjFunc
	
Label_4976:
	var_145_int = 540800; // 0x1370 PushI
	var_146_int = -1; // 0x1371 PushI
	var_147_int = 42851; // 0x1372 PushI
	AddReply(var_145_int, var_146_int, var_147_int); // 0x1373 TObjFunc
	return 0; // 0x1375 Return
	
Label_4982:
	var_148_int = 42854; // 0x1376 PushI
	var_149_bool = var_73_cvector == var_148_int; // 0x1377 Eq
	if(var_149_bool == 0) goto Label_5005; // 0x1378 JumpB
	var_150_string = ""; // 0x1379 PushV
	var_150_string = "Neutral"; // 0x137a MovS
	func_4902(var_74_cvector, var_150_string); // 0x137b NEW_2
	var_151_int = 540803; // 0x137d PushI
	SetMessage(var_151_int); // 0x137e TObjFunc
	ClearReplies(); // 0x1380 TObjFunc
	var_152_int = 540804; // 0x1382 PushI
	var_153_int = 34761; // 0x1383 PushI
	var_154_int = 42855; // 0x1384 PushI
	AddReply(var_152_int, var_153_int, var_154_int); // 0x1385 TObjFunc
	var_155_int = 540805; // 0x1387 PushI
	var_156_int = 42857; // 0x1388 PushI
	var_157_int = 42856; // 0x1389 PushI
	AddReply(var_155_int, var_156_int, var_157_int); // 0x138a TObjFunc
	return 0; // 0x138c Return
	
Label_5005:
	var_158_int = 42857; // 0x138d PushI
	var_159_bool = var_73_cvector == var_158_int; // 0x138e Eq
	if(var_159_bool == 0) goto Label_5023; // 0x138f JumpB
	var_160_string = ""; // 0x1390 PushV
	var_160_string = "Neutral"; // 0x1391 MovS
	func_4902(var_74_cvector, var_160_string); // 0x1392 NEW_2
	var_161_int = 540806; // 0x1394 PushI
	SetMessage(var_161_int); // 0x1395 TObjFunc
	ClearReplies(); // 0x1397 TObjFunc
	var_162_int = 540807; // 0x1399 PushI
	var_163_int = 34764; // 0x139a PushI
	var_164_int = 42858; // 0x139b PushI
	AddReply(var_162_int, var_163_int, var_164_int); // 0x139c TObjFunc
	return 0; // 0x139e Return
	
Label_5023:
	var_165_int = 34761; // 0x139f PushI
	var_166_bool = var_73_cvector == var_165_int; // 0x13a0 Eq
	if(var_166_bool == 0) goto Label_5041; // 0x13a1 JumpB
	var_167_string = ""; // 0x13a2 PushV
	var_167_string = "Neutral"; // 0x13a3 MovS
	func_4902(var_74_cvector, var_167_string); // 0x13a4 NEW_2
	var_168_int = 533247; // 0x13a6 PushI
	SetMessage(var_168_int); // 0x13a7 TObjFunc
	ClearReplies(); // 0x13a9 TObjFunc
	var_169_int = 533249; // 0x13ab PushI
	var_170_int = 34764; // 0x13ac PushI
	var_171_int = 34763; // 0x13ad PushI
	AddReply(var_169_int, var_170_int, var_171_int); // 0x13ae TObjFunc
	return 0; // 0x13b0 Return
	
Label_5041:
	var_172_int = 34764; // 0x13b1 PushI
	var_173_bool = var_73_cvector == var_172_int; // 0x13b2 Eq
	if(var_173_bool == 0) goto Label_5064; // 0x13b3 JumpB
	var_174_string = ""; // 0x13b4 PushV
	var_174_string = "Neutral"; // 0x13b5 MovS
	func_4902(var_74_cvector, var_174_string); // 0x13b6 NEW_2
	var_175_int = 533250; // 0x13b8 PushI
	SetMessage(var_175_int); // 0x13b9 TObjFunc
	ClearReplies(); // 0x13bb TObjFunc
	var_176_int = 540808; // 0x13bd PushI
	var_177_int = 42861; // 0x13be PushI
	var_178_int = 42860; // 0x13bf PushI
	AddReply(var_176_int, var_177_int, var_178_int); // 0x13c0 TObjFunc
	var_179_int = 540811; // 0x13c2 PushI
	var_180_int = -1; // 0x13c3 PushI
	var_181_int = 42863; // 0x13c4 PushI
	AddReply(var_179_int, var_180_int, var_181_int); // 0x13c5 TObjFunc
	return 0; // 0x13c7 Return
	
Label_5064:
	var_182_int = 42861; // 0x13c8 PushI
	var_183_bool = var_73_cvector == var_182_int; // 0x13c9 Eq
	if(var_183_bool == 0) goto Label_5087; // 0x13ca JumpB
	var_184_string = ""; // 0x13cb PushV
	var_184_string = "Neutral"; // 0x13cc MovS
	func_4902(var_74_cvector, var_184_string); // 0x13cd NEW_2
	var_185_int = 540809; // 0x13cf PushI
	SetMessage(var_185_int); // 0x13d0 TObjFunc
	ClearReplies(); // 0x13d2 TObjFunc
	var_186_int = 533251; // 0x13d4 PushI
	var_187_int = 34766; // 0x13d5 PushI
	var_188_int = 34765; // 0x13d6 PushI
	AddReply(var_186_int, var_187_int, var_188_int); // 0x13d7 TObjFunc
	var_189_int = 540810; // 0x13d9 PushI
	var_190_int = -1; // 0x13da PushI
	var_191_int = 42862; // 0x13db PushI
	AddReply(var_189_int, var_190_int, var_191_int); // 0x13dc TObjFunc
	return 0; // 0x13de Return
	
Label_5087:
	var_192_int = 34766; // 0x13df PushI
	var_193_bool = var_73_cvector == var_192_int; // 0x13e0 Eq
	if(var_193_bool == 0) goto Label_5105; // 0x13e1 JumpB
	var_194_string = ""; // 0x13e2 PushV
	var_194_string = "Neutral"; // 0x13e3 MovS
	func_4902(var_74_cvector, var_194_string); // 0x13e4 NEW_2
	var_195_int = 533252; // 0x13e6 PushI
	SetMessage(var_195_int); // 0x13e7 TObjFunc
	ClearReplies(); // 0x13e9 TObjFunc
	var_196_int = 533253; // 0x13eb PushI
	var_197_int = -1; // 0x13ec PushI
	var_198_int = 34767; // 0x13ed PushI
	AddReply(var_196_int, var_197_int, var_198_int); // 0x13ee TObjFunc
	return 0; // 0x13f0 Return
	
Label_5105:
	var_3_string = 1; // 0x13f1 TMovB
	var_199_bool = 0; // 0x13f2 PushV
	func_8923(var_199_bool); // 0x13f3 NEW_2
	if(var_199_bool == 0) goto Label_5113; // 0x13f5 JumpB
	lshStopAnimation(); // 0x13f6 Func
	goto Label_5115; // 0x13f8 Jump
	
Label_5115:
	return 0; // 0x13fb Return
	
Label_5113:
	StopAnimation(); // 0x13f9 Func
	
Label_5117:
	return 0; // 0x13fd Return
}


task_18_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_int, var_46_int, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_object, var_53_object, var_54_object, var_55_string, var_56_bool, var_57_object, var_58_object, var_59_object, var_60_string, var_61_bool, var_62_object, var_63_object, var_64_object, var_65_string, var_66_bool, var_67_object, var_68_object, var_69_object, var_70_string, var_71_bool, var_72_bool, var_73_cvector, var_74_cvector)
{
	var_75_int = 1; // 0x14c7 PushI
	if(var_75_int == 0) goto Label_5544; // 0x14c8 JumpB
	func_8750(); // 0x14ca NEW_2
	var_77_int = 13432; // 0x14cc PushI
	var_78_bool = var_73_cvector == var_77_int; // 0x14cd Eq
	if(var_78_bool == 0) goto Label_5386; // 0x14ce JumpB
	var_79_bool = 0; // 0x14cf PushV
	var_79_bool = 0; // 0x14d0 MovB
	var_80_bool = 0; var_81_object = Obj(); // 0x14d1 PushV
	var_81_object = var_1_object; // 0x14d2 MovT
	func_9819(var_81_object); // 0x14d3 NEW_2
	if(var_80_bool == 0) goto Label_5340; // 0x14d5 JumpB
	var_88_bool = 0; var_89_object = Obj(); // 0x14d6 PushV
	var_89_object = var_1_object; // 0x14d7 MovT
	func_9807(var_89_object); // 0x14d8 NEW_2
	if(var_88_bool == 0) goto Label_5340; // 0x14da JumpB
	var_79_bool = 1; // 0x14db MovB
	
Label_5340:
	if(var_79_bool == 0) goto Label_5366; // 0x14dc JumpB
	var_94_object = Obj(); var_95_object = Obj(); // 0x14dd PushV
	var_94_object = var_1_object; // 0x14de MovT
	var_95_object = var_0_object; // 0x14df MovT
	func_9347(); // 0x14e0 NEW_2
	var_98_string = ""; // 0x14e2 PushV
	var_98_string = "Neutral"; // 0x14e3 MovS
	func_5296(var_74_cvector, var_98_string); // 0x14e4 NEW_2
	var_115_int = 512275; // 0x14e6 PushI
	SetMessage(var_115_int); // 0x14e7 TObjFunc
	ClearReplies(); // 0x14e9 TObjFunc
	var_116_int = 512276; // 0x14eb PushI
	var_117_int = 13435; // 0x14ec PushI
	var_118_int = 13433; // 0x14ed PushI
	AddReply(var_116_int, var_117_int, var_118_int); // 0x14ee TObjFunc
	var_119_int = 512277; // 0x14f0 PushI
	var_120_int = 13435; // 0x14f1 PushI
	var_121_int = 13434; // 0x14f2 PushI
	AddReply(var_119_int, var_120_int, var_121_int); // 0x14f3 TObjFunc
	return 0; // 0x14f5 Return
	
Label_5366:
	var_122_string = ""; // 0x14f6 PushV
	var_122_string = "Neutral"; // 0x14f7 MovS
	func_5296(var_74_cvector, var_122_string); // 0x14f8 NEW_2
	var_123_int = 513779; // 0x14fa PushI
	SetMessage(var_123_int); // 0x14fb TObjFunc
	ClearReplies(); // 0x14fd TObjFunc
	var_124_int = 513780; // 0x14ff PushI
	var_125_int = -1; // 0x1500 PushI
	var_126_int = 15016; // 0x1501 PushI
	AddReply(var_124_int, var_125_int, var_126_int); // 0x1502 TObjFunc
	var_127_int = 541598; // 0x1504 PushI
	var_128_int = -1; // 0x1505 PushI
	var_129_int = 43762; // 0x1506 PushI
	AddReply(var_127_int, var_128_int, var_129_int); // 0x1507 TObjFunc
	return 0; // 0x1509 Return
	
Label_5386:
	var_130_int = 13435; // 0x150a PushI
	var_131_bool = var_73_cvector == var_130_int; // 0x150b Eq
	if(var_131_bool == 0) goto Label_5409; // 0x150c JumpB
	var_132_string = ""; // 0x150d PushV
	var_132_string = "Neutral"; // 0x150e MovS
	func_5296(var_74_cvector, var_132_string); // 0x150f NEW_2
	var_133_int = 512278; // 0x1511 PushI
	SetMessage(var_133_int); // 0x1512 TObjFunc
	ClearReplies(); // 0x1514 TObjFunc
	var_134_int = 512279; // 0x1516 PushI
	var_135_int = 13439; // 0x1517 PushI
	var_136_int = 13437; // 0x1518 PushI
	AddReply(var_134_int, var_135_int, var_136_int); // 0x1519 TObjFunc
	var_137_int = 512280; // 0x151b PushI
	var_138_int = 13439; // 0x151c PushI
	var_139_int = 13438; // 0x151d PushI
	AddReply(var_137_int, var_138_int, var_139_int); // 0x151e TObjFunc
	return 0; // 0x1520 Return
	
Label_5409:
	var_140_int = 13439; // 0x1521 PushI
	var_141_bool = var_73_cvector == var_140_int; // 0x1522 Eq
	if(var_141_bool == 0) goto Label_5432; // 0x1523 JumpB
	var_142_string = ""; // 0x1524 PushV
	var_142_string = "Surprise"; // 0x1525 MovS
	func_5296(var_74_cvector, var_142_string); // 0x1526 NEW_2
	var_143_int = 512281; // 0x1528 PushI
	SetMessage(var_143_int); // 0x1529 TObjFunc
	ClearReplies(); // 0x152b TObjFunc
	var_144_int = 512282; // 0x152d PushI
	var_145_int = 13442; // 0x152e PushI
	var_146_int = 13441; // 0x152f PushI
	AddReply(var_144_int, var_145_int, var_146_int); // 0x1530 TObjFunc
	var_147_int = 541834; // 0x1532 PushI
	var_148_int = 13442; // 0x1533 PushI
	var_149_int = 44049; // 0x1534 PushI
	AddReply(var_147_int, var_148_int, var_149_int); // 0x1535 TObjFunc
	return 0; // 0x1537 Return
	
Label_5432:
	var_150_int = 13442; // 0x1538 PushI
	var_151_bool = var_73_cvector == var_150_int; // 0x1539 Eq
	if(var_151_bool == 0) goto Label_5450; // 0x153a JumpB
	var_152_string = ""; // 0x153b PushV
	var_152_string = "Surprise"; // 0x153c MovS
	func_5296(var_74_cvector, var_152_string); // 0x153d NEW_2
	var_153_int = 512283; // 0x153f PushI
	SetMessage(var_153_int); // 0x1540 TObjFunc
	ClearReplies(); // 0x1542 TObjFunc
	var_154_int = 512284; // 0x1544 PushI
	var_155_int = 13444; // 0x1545 PushI
	var_156_int = 13443; // 0x1546 PushI
	AddReply(var_154_int, var_155_int, var_156_int); // 0x1547 TObjFunc
	return 0; // 0x1549 Return
	
Label_5450:
	var_157_int = 13444; // 0x154a PushI
	var_158_bool = var_73_cvector == var_157_int; // 0x154b Eq
	if(var_158_bool == 0) goto Label_5468; // 0x154c JumpB
	var_159_string = ""; // 0x154d PushV
	var_159_string = "Neutral"; // 0x154e MovS
	func_5296(var_74_cvector, var_159_string); // 0x154f NEW_2
	var_160_int = 512285; // 0x1551 PushI
	SetMessage(var_160_int); // 0x1552 TObjFunc
	ClearReplies(); // 0x1554 TObjFunc
	var_161_int = 512286; // 0x1556 PushI
	var_162_int = 13446; // 0x1557 PushI
	var_163_int = 13445; // 0x1558 PushI
	AddReply(var_161_int, var_162_int, var_163_int); // 0x1559 TObjFunc
	return 0; // 0x155b Return
	
Label_5468:
	var_164_int = 13446; // 0x155c PushI
	var_165_bool = var_73_cvector == var_164_int; // 0x155d Eq
	if(var_165_bool == 0) goto Label_5491; // 0x155e JumpB
	var_166_string = ""; // 0x155f PushV
	var_166_string = "Neutral"; // 0x1560 MovS
	func_5296(var_74_cvector, var_166_string); // 0x1561 NEW_2
	var_167_int = 512287; // 0x1563 PushI
	SetMessage(var_167_int); // 0x1564 TObjFunc
	ClearReplies(); // 0x1566 TObjFunc
	var_168_int = 512288; // 0x1568 PushI
	var_169_int = 13448; // 0x1569 PushI
	var_170_int = 13447; // 0x156a PushI
	AddReply(var_168_int, var_169_int, var_170_int); // 0x156b TObjFunc
	var_171_int = 541836; // 0x156d PushI
	var_172_int = 13448; // 0x156e PushI
	var_173_int = 44052; // 0x156f PushI
	AddReply(var_171_int, var_172_int, var_173_int); // 0x1570 TObjFunc
	return 0; // 0x1572 Return
	
Label_5491:
	var_174_int = 13448; // 0x1573 PushI
	var_175_bool = var_73_cvector == var_174_int; // 0x1574 Eq
	if(var_175_bool == 0) goto Label_5509; // 0x1575 JumpB
	var_176_string = ""; // 0x1576 PushV
	var_176_string = "Neutral"; // 0x1577 MovS
	func_5296(var_74_cvector, var_176_string); // 0x1578 NEW_2
	var_177_int = 512289; // 0x157a PushI
	SetMessage(var_177_int); // 0x157b TObjFunc
	ClearReplies(); // 0x157d TObjFunc
	var_178_int = 512290; // 0x157f PushI
	var_179_int = 13450; // 0x1580 PushI
	var_180_int = 13449; // 0x1581 PushI
	AddReply(var_178_int, var_179_int, var_180_int); // 0x1582 TObjFunc
	return 0; // 0x1584 Return
	
Label_5509:
	var_181_int = 13450; // 0x1585 PushI
	var_182_bool = var_73_cvector == var_181_int; // 0x1586 Eq
	if(var_182_bool == 0) goto Label_5532; // 0x1587 JumpB
	var_183_string = ""; // 0x1588 PushV
	var_183_string = "Surprise"; // 0x1589 MovS
	func_5296(var_74_cvector, var_183_string); // 0x158a NEW_2
	var_184_int = 512291; // 0x158c PushI
	SetMessage(var_184_int); // 0x158d TObjFunc
	ClearReplies(); // 0x158f TObjFunc
	var_185_int = 512292; // 0x1591 PushI
	var_186_int = -1; // 0x1592 PushI
	var_187_int = 13451; // 0x1593 PushI
	AddReply(var_185_int, var_186_int, var_187_int); // 0x1594 TObjFunc
	var_188_int = 541837; // 0x1596 PushI
	var_189_int = -1; // 0x1597 PushI
	var_190_int = 44054; // 0x1598 PushI
	AddReply(var_188_int, var_189_int, var_190_int); // 0x1599 TObjFunc
	return 0; // 0x159b Return
	
Label_5532:
	var_3_string = 1; // 0x159c TMovB
	var_191_bool = 0; // 0x159d PushV
	func_8923(var_191_bool); // 0x159e NEW_2
	if(var_191_bool == 0) goto Label_5540; // 0x15a0 JumpB
	lshStopAnimation(); // 0x15a1 Func
	goto Label_5542; // 0x15a3 Jump
	
Label_5542:
	return 0; // 0x15a6 Return
	
Label_5540:
	StopAnimation(); // 0x15a4 Func
	
Label_5544:
	return 0; // 0x15a8 Return
}


task_20_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_object, var_46_object, var_47_object, var_48_string, var_49_bool, var_50_int, var_51_int, var_52_object, var_53_object, var_54_object, var_55_string, var_56_bool, var_57_object, var_58_object, var_59_object, var_60_string, var_61_bool, var_62_object, var_63_object, var_64_object, var_65_string, var_66_bool, var_67_object, var_68_object, var_69_object, var_70_string, var_71_bool, var_72_bool, var_73_cvector, var_74_cvector)
{
	var_75_int = 1; // 0x1686 PushI
	if(var_75_int == 0) goto Label_6386; // 0x1687 JumpB
	func_8750(); // 0x1689 NEW_2
	var_77_int = 15244; // 0x168b PushI
	var_78_bool = var_74_cvector == var_77_int; // 0x168c Eq
	if(var_78_bool == 0) goto Label_5779; // 0x168d JumpB
	var_79_object = Obj(); var_80_object = Obj(); // 0x168e PushV
	var_79_object = var_1_object; // 0x168f MovT
	var_80_object = var_0_object; // 0x1690 MovT
	func_9359(); // 0x1691 NEW_2
	
Label_5779:
	var_120_int = 15245; // 0x1693 PushI
	var_121_bool = var_74_cvector == var_120_int; // 0x1694 Eq
	if(var_121_bool == 0) goto Label_5787; // 0x1695 JumpB
	var_122_object = Obj(); var_123_object = Obj(); // 0x1696 PushV
	var_122_object = var_1_object; // 0x1697 MovT
	var_123_object = var_0_object; // 0x1698 MovT
	func_9359(); // 0x1699 NEW_2
	
Label_5787:
	var_124_int = 15247; // 0x169b PushI
	var_125_bool = var_74_cvector == var_124_int; // 0x169c Eq
	if(var_125_bool == 0) goto Label_5795; // 0x169d JumpB
	var_126_object = Obj(); var_127_object = Obj(); // 0x169e PushV
	var_126_object = var_1_object; // 0x169f MovT
	var_127_object = var_0_object; // 0x16a0 MovT
	func_9406(); // 0x16a1 NEW_2
	
Label_5795:
	var_130_int = 15264; // 0x16a3 PushI
	var_131_bool = var_74_cvector == var_130_int; // 0x16a4 Eq
	if(var_131_bool == 0) goto Label_5803; // 0x16a5 JumpB
	var_132_object = Obj(); var_133_object = Obj(); // 0x16a6 PushV
	var_132_object = var_1_object; // 0x16a7 MovT
	var_133_object = var_0_object; // 0x16a8 MovT
	func_9376(); // 0x16a9 NEW_2
	
Label_5803:
	var_136_int = 15229; // 0x16ab PushI
	var_137_bool = var_73_cvector == var_136_int; // 0x16ac Eq
	if(var_137_bool == 0) goto Label_5885; // 0x16ad JumpB
	var_138_bool = 0; var_139_object = Obj(); // 0x16ae PushV
	var_139_object = var_1_object; // 0x16af MovT
	func_9831(var_139_object); // 0x16b0 NEW_2
	if(var_138_bool == 0) goto Label_5841; // 0x16b2 JumpB
	var_146_object = Obj(); var_147_object = Obj(); // 0x16b3 PushV
	var_146_object = var_1_object; // 0x16b4 MovT
	var_147_object = var_0_object; // 0x16b5 MovT
	func_9353(); // 0x16b6 NEW_2
	var_150_object = Obj(); var_151_object = Obj(); // 0x16b8 PushV
	var_150_object = var_1_object; // 0x16b9 MovT
	var_151_object = var_0_object; // 0x16ba MovT
	func_9077(); // 0x16bb NEW_2
	var_154_string = ""; // 0x16bd PushV
	var_154_string = "Neutral"; // 0x16be MovS
	func_5743(var_74_cvector, var_154_string); // 0x16bf NEW_2
	var_171_int = 513994; // 0x16c1 PushI
	SetMessage(var_171_int); // 0x16c2 TObjFunc
	ClearReplies(); // 0x16c4 TObjFunc
	var_172_int = 538808; // 0x16c6 PushI
	var_173_int = 40728; // 0x16c7 PushI
	var_174_int = 40727; // 0x16c8 PushI
	AddReply(var_172_int, var_173_int, var_174_int); // 0x16c9 TObjFunc
	var_175_int = 538813; // 0x16cb PushI
	var_176_int = 40730; // 0x16cc PushI
	var_177_int = 40732; // 0x16cd PushI
	AddReply(var_175_int, var_176_int, var_177_int); // 0x16ce TObjFunc
	return 0; // 0x16d0 Return
	
Label_5841:
	var_178_string = ""; // 0x16d1 PushV
	var_178_string = "Neutral"; // 0x16d2 MovS
	func_5743(var_74_cvector, var_178_string); // 0x16d3 NEW_2
	var_179_int = 514011; // 0x16d5 PushI
	SetMessage(var_179_int); // 0x16d6 TObjFunc
	ClearReplies(); // 0x16d8 TObjFunc
	var_180_bool = 0; var_181_object = Obj(); // 0x16da PushV
	var_181_object = var_1_object; // 0x16db MovT
	func_9939(var_181_object); // 0x16dc NEW_2
	if(var_180_bool == 0) goto Label_5860; // 0x16de JumpB
	var_186_int = 514012; // 0x16df PushI
	var_187_int = 15248; // 0x16e0 PushI
	var_188_int = 15247; // 0x16e1 PushI
	AddReply(var_186_int, var_187_int, var_188_int); // 0x16e2 TObjFunc
	
Label_5860:
	var_189_bool = 0; // 0x16e4 PushV
	var_189_bool = 0; // 0x16e5 MovB
	var_190_bool = 0; var_191_object = Obj(); // 0x16e6 PushV
	var_191_object = var_1_object; // 0x16e7 MovT
	func_9843(var_191_object); // 0x16e8 NEW_2
	if(var_190_bool == 0) goto Label_5873; // 0x16ea JumpB
	var_196_bool = 0; var_197_object = Obj(); // 0x16eb PushV
	var_197_object = var_1_object; // 0x16ec MovT
	func_9855(var_197_object); // 0x16ed NEW_2
	if(var_196_bool == 0) goto Label_5873; // 0x16ef JumpB
	var_189_bool = 1; // 0x16f0 MovB
	
Label_5873:
	if(var_189_bool == 0) goto Label_5879; // 0x16f1 JumpB
	var_202_int = 514029; // 0x16f2 PushI
	var_203_int = 15265; // 0x16f3 PushI
	var_204_int = 15264; // 0x16f4 PushI
	AddReply(var_202_int, var_203_int, var_204_int); // 0x16f5 TObjFunc
	
Label_5879:
	var_205_int = 514039; // 0x16f7 PushI
	var_206_int = -1; // 0x16f8 PushI
	var_207_int = 15274; // 0x16f9 PushI
	AddReply(var_205_int, var_206_int, var_207_int); // 0x16fa TObjFunc
	return 0; // 0x16fc Return
	
Label_5885:
	var_208_int = 15265; // 0x16fd PushI
	var_209_bool = var_73_cvector == var_208_int; // 0x16fe Eq
	if(var_209_bool == 0) goto Label_5903; // 0x16ff JumpB
	var_210_string = ""; // 0x1700 PushV
	var_210_string = "Neutral"; // 0x1701 MovS
	func_5743(var_74_cvector, var_210_string); // 0x1702 NEW_2
	var_211_int = 514030; // 0x1704 PushI
	SetMessage(var_211_int); // 0x1705 TObjFunc
	ClearReplies(); // 0x1707 TObjFunc
	var_212_int = 514031; // 0x1709 PushI
	var_213_int = 15267; // 0x170a PushI
	var_214_int = 15266; // 0x170b PushI
	AddReply(var_212_int, var_213_int, var_214_int); // 0x170c TObjFunc
	return 0; // 0x170e Return
	
Label_5903:
	var_215_int = 15267; // 0x170f PushI
	var_216_bool = var_73_cvector == var_215_int; // 0x1710 Eq
	if(var_216_bool == 0) goto Label_5931; // 0x1711 JumpB
	var_217_string = ""; // 0x1712 PushV
	var_217_string = "Neutral"; // 0x1713 MovS
	func_5743(var_74_cvector, var_217_string); // 0x1714 NEW_2
	var_218_int = 514032; // 0x1716 PushI
	SetMessage(var_218_int); // 0x1717 TObjFunc
	ClearReplies(); // 0x1719 TObjFunc
	var_219_bool = 0; var_220_object = Obj(); // 0x171b PushV
	var_220_object = var_1_object; // 0x171c MovT
	func_9867(var_220_object); // 0x171d NEW_2
	if(var_219_bool == 0) goto Label_5925; // 0x171f JumpB
	var_225_int = 514033; // 0x1720 PushI
	var_226_int = 15269; // 0x1721 PushI
	var_227_int = 15268; // 0x1722 PushI
	AddReply(var_225_int, var_226_int, var_227_int); // 0x1723 TObjFunc
	
Label_5925:
	var_228_int = 514038; // 0x1725 PushI
	var_229_int = -1; // 0x1726 PushI
	var_230_int = 15273; // 0x1727 PushI
	AddReply(var_228_int, var_229_int, var_230_int); // 0x1728 TObjFunc
	return 0; // 0x172a Return
	
Label_5931:
	var_231_int = 15269; // 0x172b PushI
	var_232_bool = var_73_cvector == var_231_int; // 0x172c Eq
	if(var_232_bool == 0) goto Label_5959; // 0x172d JumpB
	var_233_string = ""; // 0x172e PushV
	var_233_string = "Neutral"; // 0x172f MovS
	func_5743(var_74_cvector, var_233_string); // 0x1730 NEW_2
	var_234_int = 514034; // 0x1732 PushI
	SetMessage(var_234_int); // 0x1733 TObjFunc
	ClearReplies(); // 0x1735 TObjFunc
	var_235_int = 514035; // 0x1737 PushI
	var_236_int = -1; // 0x1738 PushI
	var_237_int = 15270; // 0x1739 PushI
	AddReply(var_235_int, var_236_int, var_237_int); // 0x173a TObjFunc
	var_238_int = 514036; // 0x173c PushI
	var_239_int = -1; // 0x173d PushI
	var_240_int = 15271; // 0x173e PushI
	AddReply(var_238_int, var_239_int, var_240_int); // 0x173f TObjFunc
	var_241_int = 514037; // 0x1741 PushI
	var_242_int = -1; // 0x1742 PushI
	var_243_int = 15272; // 0x1743 PushI
	AddReply(var_241_int, var_242_int, var_243_int); // 0x1744 TObjFunc
	return 0; // 0x1746 Return
	
Label_5959:
	var_244_int = 15248; // 0x1747 PushI
	var_245_bool = var_73_cvector == var_244_int; // 0x1748 Eq
	if(var_245_bool == 0) goto Label_5982; // 0x1749 JumpB
	var_246_string = ""; // 0x174a PushV
	var_246_string = "Confusion"; // 0x174b MovS
	func_5743(var_74_cvector, var_246_string); // 0x174c NEW_2
	var_247_int = 514013; // 0x174e PushI
	SetMessage(var_247_int); // 0x174f TObjFunc
	ClearReplies(); // 0x1751 TObjFunc
	var_248_int = 514014; // 0x1753 PushI
	var_249_int = 15250; // 0x1754 PushI
	var_250_int = 15249; // 0x1755 PushI
	AddReply(var_248_int, var_249_int, var_250_int); // 0x1756 TObjFunc
	var_251_int = 514024; // 0x1758 PushI
	var_252_int = 15260; // 0x1759 PushI
	var_253_int = 15259; // 0x175a PushI
	AddReply(var_251_int, var_252_int, var_253_int); // 0x175b TObjFunc
	return 0; // 0x175d Return
	
Label_5982:
	var_254_int = 15260; // 0x175e PushI
	var_255_bool = var_73_cvector == var_254_int; // 0x175f Eq
	if(var_255_bool == 0) goto Label_6005; // 0x1760 JumpB
	var_256_string = ""; // 0x1761 PushV
	var_256_string = "Neutral"; // 0x1762 MovS
	func_5743(var_74_cvector, var_256_string); // 0x1763 NEW_2
	var_257_int = 514025; // 0x1765 PushI
	SetMessage(var_257_int); // 0x1766 TObjFunc
	ClearReplies(); // 0x1768 TObjFunc
	var_258_int = 514026; // 0x176a PushI
	var_259_int = 15262; // 0x176b PushI
	var_260_int = 15261; // 0x176c PushI
	AddReply(var_258_int, var_259_int, var_260_int); // 0x176d TObjFunc
	var_261_int = 538812; // 0x176f PushI
	var_262_int = 40751; // 0x1770 PushI
	var_263_int = 40731; // 0x1771 PushI
	AddReply(var_261_int, var_262_int, var_263_int); // 0x1772 TObjFunc
	return 0; // 0x1774 Return
	
Label_6005:
	var_264_int = 40751; // 0x1775 PushI
	var_265_bool = var_73_cvector == var_264_int; // 0x1776 Eq
	if(var_265_bool == 0) goto Label_6023; // 0x1777 JumpB
	var_266_string = ""; // 0x1778 PushV
	var_266_string = "Neutral"; // 0x1779 MovS
	func_5743(var_74_cvector, var_266_string); // 0x177a NEW_2
	var_267_int = 538826; // 0x177c PushI
	SetMessage(var_267_int); // 0x177d TObjFunc
	ClearReplies(); // 0x177f TObjFunc
	var_268_int = 538827; // 0x1781 PushI
	var_269_int = 15262; // 0x1782 PushI
	var_270_int = 40752; // 0x1783 PushI
	AddReply(var_268_int, var_269_int, var_270_int); // 0x1784 TObjFunc
	return 0; // 0x1786 Return
	
Label_6023:
	var_271_int = 15262; // 0x1787 PushI
	var_272_bool = var_73_cvector == var_271_int; // 0x1788 Eq
	if(var_272_bool == 0) goto Label_6046; // 0x1789 JumpB
	var_273_string = ""; // 0x178a PushV
	var_273_string = "Neutral"; // 0x178b MovS
	func_5743(var_74_cvector, var_273_string); // 0x178c NEW_2
	var_274_int = 514027; // 0x178e PushI
	SetMessage(var_274_int); // 0x178f TObjFunc
	ClearReplies(); // 0x1791 TObjFunc
	var_275_int = 514028; // 0x1793 PushI
	var_276_int = -1; // 0x1794 PushI
	var_277_int = 15263; // 0x1795 PushI
	AddReply(var_275_int, var_276_int, var_277_int); // 0x1796 TObjFunc
	var_278_int = 538828; // 0x1798 PushI
	var_279_int = 15250; // 0x1799 PushI
	var_280_int = 40754; // 0x179a PushI
	AddReply(var_278_int, var_279_int, var_280_int); // 0x179b TObjFunc
	return 0; // 0x179d Return
	
Label_6046:
	var_281_int = 15250; // 0x179e PushI
	var_282_bool = var_73_cvector == var_281_int; // 0x179f Eq
	if(var_282_bool == 0) goto Label_6064; // 0x17a0 JumpB
	var_283_string = ""; // 0x17a1 PushV
	var_283_string = "Confusion"; // 0x17a2 MovS
	func_5743(var_74_cvector, var_283_string); // 0x17a3 NEW_2
	var_284_int = 514015; // 0x17a5 PushI
	SetMessage(var_284_int); // 0x17a6 TObjFunc
	ClearReplies(); // 0x17a8 TObjFunc
	var_285_int = 514016; // 0x17aa PushI
	var_286_int = 15252; // 0x17ab PushI
	var_287_int = 15251; // 0x17ac PushI
	AddReply(var_285_int, var_286_int, var_287_int); // 0x17ad TObjFunc
	return 0; // 0x17af Return
	
Label_6064:
	var_288_int = 15252; // 0x17b0 PushI
	var_289_bool = var_73_cvector == var_288_int; // 0x17b1 Eq
	if(var_289_bool == 0) goto Label_6087; // 0x17b2 JumpB
	var_290_string = ""; // 0x17b3 PushV
	var_290_string = "Neutral"; // 0x17b4 MovS
	func_5743(var_74_cvector, var_290_string); // 0x17b5 NEW_2
	var_291_int = 514017; // 0x17b7 PushI
	SetMessage(var_291_int); // 0x17b8 TObjFunc
	ClearReplies(); // 0x17ba TObjFunc
	var_292_int = 514018; // 0x17bc PushI
	var_293_int = -1; // 0x17bd PushI
	var_294_int = 15253; // 0x17be PushI
	AddReply(var_292_int, var_293_int, var_294_int); // 0x17bf TObjFunc
	var_295_int = 514019; // 0x17c1 PushI
	var_296_int = 15255; // 0x17c2 PushI
	var_297_int = 15254; // 0x17c3 PushI
	AddReply(var_295_int, var_296_int, var_297_int); // 0x17c4 TObjFunc
	return 0; // 0x17c6 Return
	
Label_6087:
	var_298_int = 15255; // 0x17c7 PushI
	var_299_bool = var_73_cvector == var_298_int; // 0x17c8 Eq
	if(var_299_bool == 0) goto Label_6105; // 0x17c9 JumpB
	var_300_string = ""; // 0x17ca PushV
	var_300_string = "Neutral"; // 0x17cb MovS
	func_5743(var_74_cvector, var_300_string); // 0x17cc NEW_2
	var_301_int = 514020; // 0x17ce PushI
	SetMessage(var_301_int); // 0x17cf TObjFunc
	ClearReplies(); // 0x17d1 TObjFunc
	var_302_int = 514021; // 0x17d3 PushI
	var_303_int = 15257; // 0x17d4 PushI
	var_304_int = 15256; // 0x17d5 PushI
	AddReply(var_302_int, var_303_int, var_304_int); // 0x17d6 TObjFunc
	return 0; // 0x17d8 Return
	
Label_6105:
	var_305_int = 15257; // 0x17d9 PushI
	var_306_bool = var_73_cvector == var_305_int; // 0x17da Eq
	if(var_306_bool == 0) goto Label_6128; // 0x17db JumpB
	var_307_string = ""; // 0x17dc PushV
	var_307_string = "Neutral"; // 0x17dd MovS
	func_5743(var_74_cvector, var_307_string); // 0x17de NEW_2
	var_308_int = 514022; // 0x17e0 PushI
	SetMessage(var_308_int); // 0x17e1 TObjFunc
	ClearReplies(); // 0x17e3 TObjFunc
	var_309_int = 514023; // 0x17e5 PushI
	var_310_int = -1; // 0x17e6 PushI
	var_311_int = 15258; // 0x17e7 PushI
	AddReply(var_309_int, var_310_int, var_311_int); // 0x17e8 TObjFunc
	var_312_int = 541838; // 0x17ea PushI
	var_313_int = -1; // 0x17eb PushI
	var_314_int = 44055; // 0x17ec PushI
	AddReply(var_312_int, var_313_int, var_314_int); // 0x17ed TObjFunc
	return 0; // 0x17ef Return
	
Label_6128:
	var_315_int = 40728; // 0x17f0 PushI
	var_316_bool = var_73_cvector == var_315_int; // 0x17f1 Eq
	if(var_316_bool == 0) goto Label_6151; // 0x17f2 JumpB
	var_317_string = ""; // 0x17f3 PushV
	var_317_string = "Confusion"; // 0x17f4 MovS
	func_5743(var_74_cvector, var_317_string); // 0x17f5 NEW_2
	var_318_int = 538809; // 0x17f7 PushI
	SetMessage(var_318_int); // 0x17f8 TObjFunc
	ClearReplies(); // 0x17fa TObjFunc
	var_319_int = 538810; // 0x17fc PushI
	var_320_int = 40730; // 0x17fd PushI
	var_321_int = 40729; // 0x17fe PushI
	AddReply(var_319_int, var_320_int, var_321_int); // 0x17ff TObjFunc
	var_322_int = 538814; // 0x1801 PushI
	var_323_int = 40735; // 0x1802 PushI
	var_324_int = 40734; // 0x1803 PushI
	AddReply(var_322_int, var_323_int, var_324_int); // 0x1804 TObjFunc
	return 0; // 0x1806 Return
	
Label_6151:
	var_325_int = 40735; // 0x1807 PushI
	var_326_bool = var_73_cvector == var_325_int; // 0x1808 Eq
	if(var_326_bool == 0) goto Label_6169; // 0x1809 JumpB
	var_327_string = ""; // 0x180a PushV
	var_327_string = "Neutral"; // 0x180b MovS
	func_5743(var_74_cvector, var_327_string); // 0x180c NEW_2
	var_328_int = 538815; // 0x180e PushI
	SetMessage(var_328_int); // 0x180f TObjFunc
	ClearReplies(); // 0x1811 TObjFunc
	var_329_int = 538816; // 0x1813 PushI
	var_330_int = 40737; // 0x1814 PushI
	var_331_int = 40736; // 0x1815 PushI
	AddReply(var_329_int, var_330_int, var_331_int); // 0x1816 TObjFunc
	return 0; // 0x1818 Return
	
Label_6169:
	var_332_int = 40737; // 0x1819 PushI
	var_333_bool = var_73_cvector == var_332_int; // 0x181a Eq
	if(var_333_bool == 0) goto Label_6192; // 0x181b JumpB
	var_334_string = ""; // 0x181c PushV
	var_334_string = "Neutral"; // 0x181d MovS
	func_5743(var_74_cvector, var_334_string); // 0x181e NEW_2
	var_335_int = 538817; // 0x1820 PushI
	SetMessage(var_335_int); // 0x1821 TObjFunc
	ClearReplies(); // 0x1823 TObjFunc
	var_336_int = 538818; // 0x1825 PushI
	var_337_int = 40740; // 0x1826 PushI
	var_338_int = 40738; // 0x1827 PushI
	AddReply(var_336_int, var_337_int, var_338_int); // 0x1828 TObjFunc
	var_339_int = 538819; // 0x182a PushI
	var_340_int = -1; // 0x182b PushI
	var_341_int = 40739; // 0x182c PushI
	AddReply(var_339_int, var_340_int, var_341_int); // 0x182d TObjFunc
	return 0; // 0x182f Return
	
Label_6192:
	var_342_int = 40740; // 0x1830 PushI
	var_343_bool = var_73_cvector == var_342_int; // 0x1831 Eq
	if(var_343_bool == 0) goto Label_6210; // 0x1832 JumpB
	var_344_string = ""; // 0x1833 PushV
	var_344_string = "Neutral"; // 0x1834 MovS
	func_5743(var_74_cvector, var_344_string); // 0x1835 NEW_2
	var_345_int = 538820; // 0x1837 PushI
	SetMessage(var_345_int); // 0x1838 TObjFunc
	ClearReplies(); // 0x183a TObjFunc
	var_346_int = 538821; // 0x183c PushI
	var_347_int = 40730; // 0x183d PushI
	var_348_int = 40741; // 0x183e PushI
	AddReply(var_346_int, var_347_int, var_348_int); // 0x183f TObjFunc
	return 0; // 0x1841 Return
	
Label_6210:
	var_349_int = 40730; // 0x1842 PushI
	var_350_bool = var_73_cvector == var_349_int; // 0x1843 Eq
	if(var_350_bool == 0) goto Label_6233; // 0x1844 JumpB
	var_351_string = ""; // 0x1845 PushV
	var_351_string = "Confusion"; // 0x1846 MovS
	func_5743(var_74_cvector, var_351_string); // 0x1847 NEW_2
	var_352_int = 538811; // 0x1849 PushI
	SetMessage(var_352_int); // 0x184a TObjFunc
	ClearReplies(); // 0x184c TObjFunc
	var_353_int = 513995; // 0x184e PushI
	var_354_int = 15231; // 0x184f PushI
	var_355_int = 15230; // 0x1850 PushI
	AddReply(var_353_int, var_354_int, var_355_int); // 0x1851 TObjFunc
	var_356_int = 538822; // 0x1853 PushI
	var_357_int = 15233; // 0x1854 PushI
	var_358_int = 40743; // 0x1855 PushI
	AddReply(var_356_int, var_357_int, var_358_int); // 0x1856 TObjFunc
	return 0; // 0x1858 Return
	
Label_6233:
	var_359_int = 15231; // 0x1859 PushI
	var_360_bool = var_73_cvector == var_359_int; // 0x185a Eq
	if(var_360_bool == 0) goto Label_6256; // 0x185b JumpB
	var_361_string = ""; // 0x185c PushV
	var_361_string = "Surprise"; // 0x185d MovS
	func_5743(var_74_cvector, var_361_string); // 0x185e NEW_2
	var_362_int = 513996; // 0x1860 PushI
	SetMessage(var_362_int); // 0x1861 TObjFunc
	ClearReplies(); // 0x1863 TObjFunc
	var_363_int = 513997; // 0x1865 PushI
	var_364_int = 15233; // 0x1866 PushI
	var_365_int = 15232; // 0x1867 PushI
	AddReply(var_363_int, var_364_int, var_365_int); // 0x1868 TObjFunc
	var_366_int = 538823; // 0x186a PushI
	var_367_int = 15237; // 0x186b PushI
	var_368_int = 40745; // 0x186c PushI
	AddReply(var_366_int, var_367_int, var_368_int); // 0x186d TObjFunc
	return 0; // 0x186f Return
	
Label_6256:
	var_369_int = 15233; // 0x1870 PushI
	var_370_bool = var_73_cvector == var_369_int; // 0x1871 Eq
	if(var_370_bool == 0) goto Label_6274; // 0x1872 JumpB
	var_371_string = ""; // 0x1873 PushV
	var_371_string = "Neutral"; // 0x1874 MovS
	func_5743(var_74_cvector, var_371_string); // 0x1875 NEW_2
	var_372_int = 513998; // 0x1877 PushI
	SetMessage(var_372_int); // 0x1878 TObjFunc
	ClearReplies(); // 0x187a TObjFunc
	var_373_int = 513999; // 0x187c PushI
	var_374_int = 15235; // 0x187d PushI
	var_375_int = 15234; // 0x187e PushI
	AddReply(var_373_int, var_374_int, var_375_int); // 0x187f TObjFunc
	return 0; // 0x1881 Return
	
Label_6274:
	var_376_int = 15235; // 0x1882 PushI
	var_377_bool = var_73_cvector == var_376_int; // 0x1883 Eq
	if(var_377_bool == 0) goto Label_6292; // 0x1884 JumpB
	var_378_string = ""; // 0x1885 PushV
	var_378_string = "Neutral"; // 0x1886 MovS
	func_5743(var_74_cvector, var_378_string); // 0x1887 NEW_2
	var_379_int = 514000; // 0x1889 PushI
	SetMessage(var_379_int); // 0x188a TObjFunc
	ClearReplies(); // 0x188c TObjFunc
	var_380_int = 514001; // 0x188e PushI
	var_381_int = 15237; // 0x188f PushI
	var_382_int = 15236; // 0x1890 PushI
	AddReply(var_380_int, var_381_int, var_382_int); // 0x1891 TObjFunc
	return 0; // 0x1893 Return
	
Label_6292:
	var_383_int = 15237; // 0x1894 PushI
	var_384_bool = var_73_cvector == var_383_int; // 0x1895 Eq
	if(var_384_bool == 0) goto Label_6315; // 0x1896 JumpB
	var_385_string = ""; // 0x1897 PushV
	var_385_string = "Neutral"; // 0x1898 MovS
	func_5743(var_74_cvector, var_385_string); // 0x1899 NEW_2
	var_386_int = 514002; // 0x189b PushI
	SetMessage(var_386_int); // 0x189c TObjFunc
	ClearReplies(); // 0x189e TObjFunc
	var_387_int = 514003; // 0x18a0 PushI
	var_388_int = 15239; // 0x18a1 PushI
	var_389_int = 15238; // 0x18a2 PushI
	AddReply(var_387_int, var_388_int, var_389_int); // 0x18a3 TObjFunc
	var_390_int = 538825; // 0x18a5 PushI
	var_391_int = 15241; // 0x18a6 PushI
	var_392_int = 40749; // 0x18a7 PushI
	AddReply(var_390_int, var_391_int, var_392_int); // 0x18a8 TObjFunc
	return 0; // 0x18aa Return
	
Label_6315:
	var_393_int = 15239; // 0x18ab PushI
	var_394_bool = var_73_cvector == var_393_int; // 0x18ac Eq
	if(var_394_bool == 0) goto Label_6333; // 0x18ad JumpB
	var_395_string = ""; // 0x18ae PushV
	var_395_string = "Neutral"; // 0x18af MovS
	func_5743(var_74_cvector, var_395_string); // 0x18b0 NEW_2
	var_396_int = 514004; // 0x18b2 PushI
	SetMessage(var_396_int); // 0x18b3 TObjFunc
	ClearReplies(); // 0x18b5 TObjFunc
	var_397_int = 514005; // 0x18b7 PushI
	var_398_int = 15241; // 0x18b8 PushI
	var_399_int = 15240; // 0x18b9 PushI
	AddReply(var_397_int, var_398_int, var_399_int); // 0x18ba TObjFunc
	return 0; // 0x18bc Return
	
Label_6333:
	var_400_int = 15241; // 0x18bd PushI
	var_401_bool = var_73_cvector == var_400_int; // 0x18be Eq
	if(var_401_bool == 0) goto Label_6356; // 0x18bf JumpB
	var_402_string = ""; // 0x18c0 PushV
	var_402_string = "Neutral"; // 0x18c1 MovS
	func_5743(var_74_cvector, var_402_string); // 0x18c2 NEW_2
	var_403_int = 514006; // 0x18c4 PushI
	SetMessage(var_403_int); // 0x18c5 TObjFunc
	ClearReplies(); // 0x18c7 TObjFunc
	var_404_int = 514007; // 0x18c9 PushI
	var_405_int = 15243; // 0x18ca PushI
	var_406_int = 15242; // 0x18cb PushI
	AddReply(var_404_int, var_405_int, var_406_int); // 0x18cc TObjFunc
	var_407_int = 514010; // 0x18ce PushI
	var_408_int = -1; // 0x18cf PushI
	var_409_int = 15245; // 0x18d0 PushI
	AddReply(var_407_int, var_408_int, var_409_int); // 0x18d1 TObjFunc
	return 0; // 0x18d3 Return
	
Label_6356:
	var_410_int = 15243; // 0x18d4 PushI
	var_411_bool = var_73_cvector == var_410_int; // 0x18d5 Eq
	if(var_411_bool == 0) goto Label_6374; // 0x18d6 JumpB
	var_412_string = ""; // 0x18d7 PushV
	var_412_string = "Neutral"; // 0x18d8 MovS
	func_5743(var_74_cvector, var_412_string); // 0x18d9 NEW_2
	var_413_int = 514008; // 0x18db PushI
	SetMessage(var_413_int); // 0x18dc TObjFunc
	ClearReplies(); // 0x18de TObjFunc
	var_414_int = 514009; // 0x18e0 PushI
	var_415_int = -1; // 0x18e1 PushI
	var_416_int = 15244; // 0x18e2 PushI
	AddReply(var_414_int, var_415_int, var_416_int); // 0x18e3 TObjFunc
	return 0; // 0x18e5 Return
	
Label_6374:
	var_3_string = 1; // 0x18e6 TMovB
	var_417_bool = 0; // 0x18e7 PushV
	func_8923(var_417_bool); // 0x18e8 NEW_2
	if(var_417_bool == 0) goto Label_6382; // 0x18ea JumpB
	lshStopAnimation(); // 0x18eb Func
	goto Label_6384; // 0x18ed Jump
	
Label_6384:
	return 0; // 0x18f0 Return
	
Label_6382:
	StopAnimation(); // 0x18ee Func
	
Label_6386:
	return 0; // 0x18f2 Return
}


task_22_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_object, var_46_object, var_47_object, var_48_string, var_49_bool, var_50_object, var_51_object, var_52_object, var_53_string, var_54_bool, var_55_int, var_56_int, var_57_object, var_58_object, var_59_object, var_60_string, var_61_bool, var_62_object, var_63_object, var_64_object, var_65_string, var_66_bool, var_67_object, var_68_object, var_69_object, var_70_string, var_71_bool, var_72_bool, var_73_cvector, var_74_cvector)
{
	var_75_int = 1; // 0x19e8 PushI
	if(var_75_int == 0) goto Label_7276; // 0x19e9 JumpB
	func_8750(); // 0x19eb NEW_2
	var_77_int = 36145; // 0x19ed PushI
	var_78_bool = var_74_cvector == var_77_int; // 0x19ee Eq
	if(var_78_bool == 0) goto Label_6645; // 0x19ef JumpB
	var_79_object = Obj(); var_80_object = Obj(); // 0x19f0 PushV
	var_79_object = var_1_object; // 0x19f1 MovT
	var_80_object = var_0_object; // 0x19f2 MovT
	func_9018(); // 0x19f3 NEW_2
	
Label_6645:
	var_122_int = 40329; // 0x19f5 PushI
	var_123_bool = var_74_cvector == var_122_int; // 0x19f6 Eq
	if(var_123_bool == 0) goto Label_6653; // 0x19f7 JumpB
	var_124_object = Obj(); var_125_object = Obj(); // 0x19f8 PushV
	var_124_object = var_1_object; // 0x19f9 MovT
	var_125_object = var_0_object; // 0x19fa MovT
	func_9018(); // 0x19fb NEW_2
	
Label_6653:
	var_126_int = 40333; // 0x19fd PushI
	var_127_bool = var_74_cvector == var_126_int; // 0x19fe Eq
	if(var_127_bool == 0) goto Label_6661; // 0x19ff JumpB
	var_128_object = Obj(); var_129_object = Obj(); // 0x1a00 PushV
	var_128_object = var_1_object; // 0x1a01 MovT
	var_129_object = var_0_object; // 0x1a02 MovT
	func_9382(); // 0x1a03 NEW_2
	
Label_6661:
	var_132_int = 15601; // 0x1a05 PushI
	var_133_bool = var_74_cvector == var_132_int; // 0x1a06 Eq
	if(var_133_bool == 0) goto Label_6669; // 0x1a07 JumpB
	var_134_object = Obj(); var_135_object = Obj(); // 0x1a08 PushV
	var_134_object = var_1_object; // 0x1a09 MovT
	var_135_object = var_0_object; // 0x1a0a MovT
	func_9388(); // 0x1a0b NEW_2
	
Label_6669:
	var_138_int = 36142; // 0x1a0d PushI
	var_139_bool = var_73_cvector == var_138_int; // 0x1a0e Eq
	if(var_139_bool == 0) goto Label_6775; // 0x1a0f JumpB
	var_140_bool = 0; var_141_object = Obj(); // 0x1a10 PushV
	var_141_object = var_1_object; // 0x1a11 MovT
	func_9520(var_141_object); // 0x1a12 NEW_2
	if(var_140_bool == 0) goto Label_6707; // 0x1a14 JumpB
	var_148_object = Obj(); var_149_object = Obj(); // 0x1a15 PushV
	var_148_object = var_1_object; // 0x1a16 MovT
	var_149_object = var_0_object; // 0x1a17 MovT
	func_9012(); // 0x1a18 NEW_2
	var_152_object = Obj(); var_153_object = Obj(); // 0x1a1a PushV
	var_152_object = var_1_object; // 0x1a1b MovT
	var_153_object = var_0_object; // 0x1a1c MovT
	func_9061(); // 0x1a1d NEW_2
	var_156_string = ""; // 0x1a1f PushV
	var_156_string = "Neutral"; // 0x1a20 MovS
	func_6609(var_74_cvector, var_156_string); // 0x1a21 NEW_2
	var_173_int = 534501; // 0x1a23 PushI
	SetMessage(var_173_int); // 0x1a24 TObjFunc
	ClearReplies(); // 0x1a26 TObjFunc
	var_174_int = 538426; // 0x1a28 PushI
	var_175_int = 40303; // 0x1a29 PushI
	var_176_int = 40302; // 0x1a2a PushI
	AddReply(var_174_int, var_175_int, var_176_int); // 0x1a2b TObjFunc
	var_177_int = 538432; // 0x1a2d PushI
	var_178_int = 40311; // 0x1a2e PushI
	var_179_int = 40308; // 0x1a2f PushI
	AddReply(var_177_int, var_178_int, var_179_int); // 0x1a30 TObjFunc
	return 0; // 0x1a32 Return
	
Label_6707:
	var_180_string = ""; // 0x1a33 PushV
	var_180_string = "Neutral"; // 0x1a34 MovS
	func_6609(var_74_cvector, var_180_string); // 0x1a35 NEW_2
	var_181_int = 514377; // 0x1a37 PushI
	SetMessage(var_181_int); // 0x1a38 TObjFunc
	ClearReplies(); // 0x1a3a TObjFunc
	var_182_bool = 0; // 0x1a3c PushV
	var_182_bool = 0; // 0x1a3d MovB
	var_183_bool = 0; var_184_object = Obj(); // 0x1a3e PushV
	var_184_object = var_1_object; // 0x1a3f MovT
	func_9891(var_184_object); // 0x1a40 NEW_2
	if(var_183_bool == 0) goto Label_6729; // 0x1a42 JumpB
	var_189_bool = 0; var_190_object = Obj(); // 0x1a43 PushV
	var_190_object = var_1_object; // 0x1a44 MovT
	func_9879(var_190_object); // 0x1a45 NEW_2
	if(var_189_bool == 0) goto Label_6729; // 0x1a47 JumpB
	var_182_bool = 1; // 0x1a48 MovB
	
Label_6729:
	if(var_182_bool == 0) goto Label_6735; // 0x1a49 JumpB
	var_195_int = 538451; // 0x1a4a PushI
	var_196_int = 15592; // 0x1a4b PushI
	var_197_int = 40333; // 0x1a4c PushI
	AddReply(var_195_int, var_196_int, var_197_int); // 0x1a4d TObjFunc
	
Label_6735:
	var_198_bool = 0; // 0x1a4f PushV
	var_198_bool = 0; // 0x1a50 MovB
	var_199_bool = 0; // 0x1a51 PushV
	var_199_bool = 0; // 0x1a52 MovB
	var_200_bool = 0; var_201_object = Obj(); // 0x1a53 PushV
	var_201_object = var_1_object; // 0x1a54 MovT
	func_9891(var_201_object); // 0x1a55 NEW_2
	var_202_bool = var_200_bool == 0; // 0x1a57 Not
	if(var_202_bool == 0) goto Label_6751; // 0x1a58 JumpB
	var_203_bool = 0; var_204_object = Obj(); // 0x1a59 PushV
	var_204_object = var_1_object; // 0x1a5a MovT
	func_9903(var_204_object); // 0x1a5b NEW_2
	if(var_203_bool == 0) goto Label_6751; // 0x1a5d JumpB
	var_199_bool = 1; // 0x1a5e MovB
	
Label_6751:
	if(var_199_bool == 0) goto Label_6758; // 0x1a5f JumpB
	var_209_bool = 0; var_210_object = Obj(); // 0x1a60 PushV
	var_210_object = var_1_object; // 0x1a61 MovT
	func_9915(var_210_object); // 0x1a62 NEW_2
	if(var_209_bool == 0) goto Label_6758; // 0x1a64 JumpB
	var_198_bool = 1; // 0x1a65 MovB
	
Label_6758:
	if(var_198_bool == 0) goto Label_6764; // 0x1a66 JumpB
	var_215_int = 514378; // 0x1a67 PushI
	var_216_int = 15602; // 0x1a68 PushI
	var_217_int = 15601; // 0x1a69 PushI
	AddReply(var_215_int, var_216_int, var_217_int); // 0x1a6a TObjFunc
	
Label_6764:
	var_218_int = 538442; // 0x1a6c PushI
	var_219_int = -1; // 0x1a6d PushI
	var_220_int = 40321; // 0x1a6e PushI
	AddReply(var_218_int, var_219_int, var_220_int); // 0x1a6f TObjFunc
	var_221_int = 514419; // 0x1a71 PushI
	var_222_int = -1; // 0x1a72 PushI
	var_223_int = 15644; // 0x1a73 PushI
	AddReply(var_221_int, var_222_int, var_223_int); // 0x1a74 TObjFunc
	return 0; // 0x1a76 Return
	
Label_6775:
	var_224_int = 15602; // 0x1a77 PushI
	var_225_bool = var_73_cvector == var_224_int; // 0x1a78 Eq
	if(var_225_bool == 0) goto Label_6798; // 0x1a79 JumpB
	var_226_string = ""; // 0x1a7a PushV
	var_226_string = "Neutral"; // 0x1a7b MovS
	func_6609(var_74_cvector, var_226_string); // 0x1a7c NEW_2
	var_227_int = 514379; // 0x1a7e PushI
	SetMessage(var_227_int); // 0x1a7f TObjFunc
	ClearReplies(); // 0x1a81 TObjFunc
	var_228_int = 514380; // 0x1a83 PushI
	var_229_int = 15604; // 0x1a84 PushI
	var_230_int = 15603; // 0x1a85 PushI
	AddReply(var_228_int, var_229_int, var_230_int); // 0x1a86 TObjFunc
	var_231_int = 514399; // 0x1a88 PushI
	var_232_int = 15604; // 0x1a89 PushI
	var_233_int = 15623; // 0x1a8a PushI
	AddReply(var_231_int, var_232_int, var_233_int); // 0x1a8b TObjFunc
	return 0; // 0x1a8d Return
	
Label_6798:
	var_234_int = 15604; // 0x1a8e PushI
	var_235_bool = var_73_cvector == var_234_int; // 0x1a8f Eq
	if(var_235_bool == 0) goto Label_6816; // 0x1a90 JumpB
	var_236_string = ""; // 0x1a91 PushV
	var_236_string = "Surprise"; // 0x1a92 MovS
	func_6609(var_74_cvector, var_236_string); // 0x1a93 NEW_2
	var_237_int = 514381; // 0x1a95 PushI
	SetMessage(var_237_int); // 0x1a96 TObjFunc
	ClearReplies(); // 0x1a98 TObjFunc
	var_238_int = 514382; // 0x1a9a PushI
	var_239_int = 15606; // 0x1a9b PushI
	var_240_int = 15605; // 0x1a9c PushI
	AddReply(var_238_int, var_239_int, var_240_int); // 0x1a9d TObjFunc
	return 0; // 0x1a9f Return
	
Label_6816:
	var_241_int = 15606; // 0x1aa0 PushI
	var_242_bool = var_73_cvector == var_241_int; // 0x1aa1 Eq
	if(var_242_bool == 0) goto Label_6834; // 0x1aa2 JumpB
	var_243_string = ""; // 0x1aa3 PushV
	var_243_string = "Surprise"; // 0x1aa4 MovS
	func_6609(var_74_cvector, var_243_string); // 0x1aa5 NEW_2
	var_244_int = 514383; // 0x1aa7 PushI
	SetMessage(var_244_int); // 0x1aa8 TObjFunc
	ClearReplies(); // 0x1aaa TObjFunc
	var_245_int = 514384; // 0x1aac PushI
	var_246_int = 15608; // 0x1aad PushI
	var_247_int = 15607; // 0x1aae PushI
	AddReply(var_245_int, var_246_int, var_247_int); // 0x1aaf TObjFunc
	return 0; // 0x1ab1 Return
	
Label_6834:
	var_248_int = 15608; // 0x1ab2 PushI
	var_249_bool = var_73_cvector == var_248_int; // 0x1ab3 Eq
	if(var_249_bool == 0) goto Label_6862; // 0x1ab4 JumpB
	var_250_string = ""; // 0x1ab5 PushV
	var_250_string = "Neutral"; // 0x1ab6 MovS
	func_6609(var_74_cvector, var_250_string); // 0x1ab7 NEW_2
	var_251_int = 514385; // 0x1ab9 PushI
	SetMessage(var_251_int); // 0x1aba TObjFunc
	ClearReplies(); // 0x1abc TObjFunc
	var_252_bool = 0; var_253_object = Obj(); // 0x1abe PushV
	var_253_object = var_1_object; // 0x1abf MovT
	func_9927(var_253_object); // 0x1ac0 NEW_2
	if(var_252_bool == 0) goto Label_6856; // 0x1ac2 JumpB
	var_258_int = 514386; // 0x1ac3 PushI
	var_259_int = 15610; // 0x1ac4 PushI
	var_260_int = 15609; // 0x1ac5 PushI
	AddReply(var_258_int, var_259_int, var_260_int); // 0x1ac6 TObjFunc
	
Label_6856:
	var_261_int = 514398; // 0x1ac8 PushI
	var_262_int = -1; // 0x1ac9 PushI
	var_263_int = 15622; // 0x1aca PushI
	AddReply(var_261_int, var_262_int, var_263_int); // 0x1acb TObjFunc
	return 0; // 0x1acd Return
	
Label_6862:
	var_264_int = 15610; // 0x1ace PushI
	var_265_bool = var_73_cvector == var_264_int; // 0x1acf Eq
	if(var_265_bool == 0) goto Label_6880; // 0x1ad0 JumpB
	var_266_string = ""; // 0x1ad1 PushV
	var_266_string = "Neutral"; // 0x1ad2 MovS
	func_6609(var_74_cvector, var_266_string); // 0x1ad3 NEW_2
	var_267_int = 514387; // 0x1ad5 PushI
	SetMessage(var_267_int); // 0x1ad6 TObjFunc
	ClearReplies(); // 0x1ad8 TObjFunc
	var_268_int = 514388; // 0x1ada PushI
	var_269_int = 15612; // 0x1adb PushI
	var_270_int = 15611; // 0x1adc PushI
	AddReply(var_268_int, var_269_int, var_270_int); // 0x1add TObjFunc
	return 0; // 0x1adf Return
	
Label_6880:
	var_271_int = 15612; // 0x1ae0 PushI
	var_272_bool = var_73_cvector == var_271_int; // 0x1ae1 Eq
	if(var_272_bool == 0) goto Label_6898; // 0x1ae2 JumpB
	var_273_string = ""; // 0x1ae3 PushV
	var_273_string = "Neutral"; // 0x1ae4 MovS
	func_6609(var_74_cvector, var_273_string); // 0x1ae5 NEW_2
	var_274_int = 514389; // 0x1ae7 PushI
	SetMessage(var_274_int); // 0x1ae8 TObjFunc
	ClearReplies(); // 0x1aea TObjFunc
	var_275_int = 514390; // 0x1aec PushI
	var_276_int = 15614; // 0x1aed PushI
	var_277_int = 15613; // 0x1aee PushI
	AddReply(var_275_int, var_276_int, var_277_int); // 0x1aef TObjFunc
	return 0; // 0x1af1 Return
	
Label_6898:
	var_278_int = 15614; // 0x1af2 PushI
	var_279_bool = var_73_cvector == var_278_int; // 0x1af3 Eq
	if(var_279_bool == 0) goto Label_6921; // 0x1af4 JumpB
	var_280_string = ""; // 0x1af5 PushV
	var_280_string = "Neutral"; // 0x1af6 MovS
	func_6609(var_74_cvector, var_280_string); // 0x1af7 NEW_2
	var_281_int = 514391; // 0x1af9 PushI
	SetMessage(var_281_int); // 0x1afa TObjFunc
	ClearReplies(); // 0x1afc TObjFunc
	var_282_int = 514392; // 0x1afe PushI
	var_283_int = 15616; // 0x1aff PushI
	var_284_int = 15615; // 0x1b00 PushI
	AddReply(var_282_int, var_283_int, var_284_int); // 0x1b01 TObjFunc
	var_285_int = 514397; // 0x1b03 PushI
	var_286_int = 15616; // 0x1b04 PushI
	var_287_int = 15620; // 0x1b05 PushI
	AddReply(var_285_int, var_286_int, var_287_int); // 0x1b06 TObjFunc
	return 0; // 0x1b08 Return
	
Label_6921:
	var_288_int = 15616; // 0x1b09 PushI
	var_289_bool = var_73_cvector == var_288_int; // 0x1b0a Eq
	if(var_289_bool == 0) goto Label_6939; // 0x1b0b JumpB
	var_290_string = ""; // 0x1b0c PushV
	var_290_string = "Confusion"; // 0x1b0d MovS
	func_6609(var_74_cvector, var_290_string); // 0x1b0e NEW_2
	var_291_int = 514393; // 0x1b10 PushI
	SetMessage(var_291_int); // 0x1b11 TObjFunc
	ClearReplies(); // 0x1b13 TObjFunc
	var_292_int = 514394; // 0x1b15 PushI
	var_293_int = 15618; // 0x1b16 PushI
	var_294_int = 15617; // 0x1b17 PushI
	AddReply(var_292_int, var_293_int, var_294_int); // 0x1b18 TObjFunc
	return 0; // 0x1b1a Return
	
Label_6939:
	var_295_int = 15618; // 0x1b1b PushI
	var_296_bool = var_73_cvector == var_295_int; // 0x1b1c Eq
	if(var_296_bool == 0) goto Label_6962; // 0x1b1d JumpB
	var_297_string = ""; // 0x1b1e PushV
	var_297_string = "Confusion"; // 0x1b1f MovS
	func_6609(var_74_cvector, var_297_string); // 0x1b20 NEW_2
	var_298_int = 514395; // 0x1b22 PushI
	SetMessage(var_298_int); // 0x1b23 TObjFunc
	ClearReplies(); // 0x1b25 TObjFunc
	var_299_int = 514396; // 0x1b27 PushI
	var_300_int = -1; // 0x1b28 PushI
	var_301_int = 15619; // 0x1b29 PushI
	AddReply(var_299_int, var_300_int, var_301_int); // 0x1b2a TObjFunc
	var_302_int = 539600; // 0x1b2c PushI
	var_303_int = -1; // 0x1b2d PushI
	var_304_int = 41546; // 0x1b2e PushI
	AddReply(var_302_int, var_303_int, var_304_int); // 0x1b2f TObjFunc
	return 0; // 0x1b31 Return
	
Label_6962:
	var_305_int = 15592; // 0x1b32 PushI
	var_306_bool = var_73_cvector == var_305_int; // 0x1b33 Eq
	if(var_306_bool == 0) goto Label_6985; // 0x1b34 JumpB
	var_307_string = ""; // 0x1b35 PushV
	var_307_string = "Fear"; // 0x1b36 MovS
	func_6609(var_74_cvector, var_307_string); // 0x1b37 NEW_2
	var_308_int = 514369; // 0x1b39 PushI
	SetMessage(var_308_int); // 0x1b3a TObjFunc
	ClearReplies(); // 0x1b3c TObjFunc
	var_309_int = 538448; // 0x1b3e PushI
	var_310_int = 40331; // 0x1b3f PushI
	var_311_int = 40330; // 0x1b40 PushI
	AddReply(var_309_int, var_310_int, var_311_int); // 0x1b41 TObjFunc
	var_312_int = 514376; // 0x1b43 PushI
	var_313_int = -1; // 0x1b44 PushI
	var_314_int = 15599; // 0x1b45 PushI
	AddReply(var_312_int, var_313_int, var_314_int); // 0x1b46 TObjFunc
	return 0; // 0x1b48 Return
	
Label_6985:
	var_315_int = 40331; // 0x1b49 PushI
	var_316_bool = var_73_cvector == var_315_int; // 0x1b4a Eq
	if(var_316_bool == 0) goto Label_7008; // 0x1b4b JumpB
	var_317_string = ""; // 0x1b4c PushV
	var_317_string = "Fear"; // 0x1b4d MovS
	func_6609(var_74_cvector, var_317_string); // 0x1b4e NEW_2
	var_318_int = 538449; // 0x1b50 PushI
	SetMessage(var_318_int); // 0x1b51 TObjFunc
	ClearReplies(); // 0x1b53 TObjFunc
	var_319_int = 514370; // 0x1b55 PushI
	var_320_int = 15594; // 0x1b56 PushI
	var_321_int = 15593; // 0x1b57 PushI
	AddReply(var_319_int, var_320_int, var_321_int); // 0x1b58 TObjFunc
	var_322_int = 538450; // 0x1b5a PushI
	var_323_int = -1; // 0x1b5b PushI
	var_324_int = 40332; // 0x1b5c PushI
	AddReply(var_322_int, var_323_int, var_324_int); // 0x1b5d TObjFunc
	return 0; // 0x1b5f Return
	
Label_7008:
	var_325_int = 15594; // 0x1b60 PushI
	var_326_bool = var_73_cvector == var_325_int; // 0x1b61 Eq
	if(var_326_bool == 0) goto Label_7026; // 0x1b62 JumpB
	var_327_string = ""; // 0x1b63 PushV
	var_327_string = "Neutral"; // 0x1b64 MovS
	func_6609(var_74_cvector, var_327_string); // 0x1b65 NEW_2
	var_328_int = 514371; // 0x1b67 PushI
	SetMessage(var_328_int); // 0x1b68 TObjFunc
	ClearReplies(); // 0x1b6a TObjFunc
	var_329_int = 514372; // 0x1b6c PushI
	var_330_int = 15596; // 0x1b6d PushI
	var_331_int = 15595; // 0x1b6e PushI
	AddReply(var_329_int, var_330_int, var_331_int); // 0x1b6f TObjFunc
	return 0; // 0x1b71 Return
	
Label_7026:
	var_332_int = 15596; // 0x1b72 PushI
	var_333_bool = var_73_cvector == var_332_int; // 0x1b73 Eq
	if(var_333_bool == 0) goto Label_7049; // 0x1b74 JumpB
	var_334_string = ""; // 0x1b75 PushV
	var_334_string = "Fear"; // 0x1b76 MovS
	func_6609(var_74_cvector, var_334_string); // 0x1b77 NEW_2
	var_335_int = 514373; // 0x1b79 PushI
	SetMessage(var_335_int); // 0x1b7a TObjFunc
	ClearReplies(); // 0x1b7c TObjFunc
	var_336_int = 514374; // 0x1b7e PushI
	var_337_int = -1; // 0x1b7f PushI
	var_338_int = 15597; // 0x1b80 PushI
	AddReply(var_336_int, var_337_int, var_338_int); // 0x1b81 TObjFunc
	var_339_int = 514375; // 0x1b83 PushI
	var_340_int = -1; // 0x1b84 PushI
	var_341_int = 15598; // 0x1b85 PushI
	AddReply(var_339_int, var_340_int, var_341_int); // 0x1b86 TObjFunc
	return 0; // 0x1b88 Return
	
Label_7049:
	var_342_int = 40311; // 0x1b89 PushI
	var_343_bool = var_73_cvector == var_342_int; // 0x1b8a Eq
	if(var_343_bool == 0) goto Label_7072; // 0x1b8b JumpB
	var_344_string = ""; // 0x1b8c PushV
	var_344_string = "Neutral"; // 0x1b8d MovS
	func_6609(var_74_cvector, var_344_string); // 0x1b8e NEW_2
	var_345_int = 538435; // 0x1b90 PushI
	SetMessage(var_345_int); // 0x1b91 TObjFunc
	ClearReplies(); // 0x1b93 TObjFunc
	var_346_int = 538436; // 0x1b95 PushI
	var_347_int = 40313; // 0x1b96 PushI
	var_348_int = 40312; // 0x1b97 PushI
	AddReply(var_346_int, var_347_int, var_348_int); // 0x1b98 TObjFunc
	var_349_int = 538438; // 0x1b9a PushI
	var_350_int = 40303; // 0x1b9b PushI
	var_351_int = 40314; // 0x1b9c PushI
	AddReply(var_349_int, var_350_int, var_351_int); // 0x1b9d TObjFunc
	return 0; // 0x1b9f Return
	
Label_7072:
	var_352_int = 40313; // 0x1ba0 PushI
	var_353_bool = var_73_cvector == var_352_int; // 0x1ba1 Eq
	if(var_353_bool == 0) goto Label_7090; // 0x1ba2 JumpB
	var_354_string = ""; // 0x1ba3 PushV
	var_354_string = "Neutral"; // 0x1ba4 MovS
	func_6609(var_74_cvector, var_354_string); // 0x1ba5 NEW_2
	var_355_int = 538437; // 0x1ba7 PushI
	SetMessage(var_355_int); // 0x1ba8 TObjFunc
	ClearReplies(); // 0x1baa TObjFunc
	var_356_int = 538439; // 0x1bac PushI
	var_357_int = 40303; // 0x1bad PushI
	var_358_int = 40316; // 0x1bae PushI
	AddReply(var_356_int, var_357_int, var_358_int); // 0x1baf TObjFunc
	return 0; // 0x1bb1 Return
	
Label_7090:
	var_359_int = 40303; // 0x1bb2 PushI
	var_360_bool = var_73_cvector == var_359_int; // 0x1bb3 Eq
	if(var_360_bool == 0) goto Label_7113; // 0x1bb4 JumpB
	var_361_string = ""; // 0x1bb5 PushV
	var_361_string = "Confusion"; // 0x1bb6 MovS
	func_6609(var_74_cvector, var_361_string); // 0x1bb7 NEW_2
	var_362_int = 538427; // 0x1bb9 PushI
	SetMessage(var_362_int); // 0x1bba TObjFunc
	ClearReplies(); // 0x1bbc TObjFunc
	var_363_int = 538428; // 0x1bbe PushI
	var_364_int = 40305; // 0x1bbf PushI
	var_365_int = 40304; // 0x1bc0 PushI
	AddReply(var_363_int, var_364_int, var_365_int); // 0x1bc1 TObjFunc
	var_366_int = 538433; // 0x1bc3 PushI
	var_367_int = 40310; // 0x1bc4 PushI
	var_368_int = 40309; // 0x1bc5 PushI
	AddReply(var_366_int, var_367_int, var_368_int); // 0x1bc6 TObjFunc
	return 0; // 0x1bc8 Return
	
Label_7113:
	var_369_int = 40310; // 0x1bc9 PushI
	var_370_bool = var_73_cvector == var_369_int; // 0x1bca Eq
	if(var_370_bool == 0) goto Label_7131; // 0x1bcb JumpB
	var_371_string = ""; // 0x1bcc PushV
	var_371_string = "Surprise"; // 0x1bcd MovS
	func_6609(var_74_cvector, var_371_string); // 0x1bce NEW_2
	var_372_int = 538434; // 0x1bd0 PushI
	SetMessage(var_372_int); // 0x1bd1 TObjFunc
	ClearReplies(); // 0x1bd3 TObjFunc
	var_373_int = 538440; // 0x1bd5 PushI
	var_374_int = 40305; // 0x1bd6 PushI
	var_375_int = 40318; // 0x1bd7 PushI
	AddReply(var_373_int, var_374_int, var_375_int); // 0x1bd8 TObjFunc
	return 0; // 0x1bda Return
	
Label_7131:
	var_376_int = 40305; // 0x1bdb PushI
	var_377_bool = var_73_cvector == var_376_int; // 0x1bdc Eq
	if(var_377_bool == 0) goto Label_7154; // 0x1bdd JumpB
	var_378_string = ""; // 0x1bde PushV
	var_378_string = "Confusion"; // 0x1bdf MovS
	func_6609(var_74_cvector, var_378_string); // 0x1be0 NEW_2
	var_379_int = 538429; // 0x1be2 PushI
	SetMessage(var_379_int); // 0x1be3 TObjFunc
	ClearReplies(); // 0x1be5 TObjFunc
	var_380_int = 538430; // 0x1be7 PushI
	var_381_int = 38458; // 0x1be8 PushI
	var_382_int = 40306; // 0x1be9 PushI
	AddReply(var_380_int, var_381_int, var_382_int); // 0x1bea TObjFunc
	var_383_int = 538441; // 0x1bec PushI
	var_384_int = 38458; // 0x1bed PushI
	var_385_int = 40320; // 0x1bee PushI
	AddReply(var_383_int, var_384_int, var_385_int); // 0x1bef TObjFunc
	return 0; // 0x1bf1 Return
	
Label_7154:
	var_386_int = 38458; // 0x1bf2 PushI
	var_387_bool = var_73_cvector == var_386_int; // 0x1bf3 Eq
	if(var_387_bool == 0) goto Label_7177; // 0x1bf4 JumpB
	var_388_string = ""; // 0x1bf5 PushV
	var_388_string = "Neutral"; // 0x1bf6 MovS
	func_6609(var_74_cvector, var_388_string); // 0x1bf7 NEW_2
	var_389_int = 536630; // 0x1bf9 PushI
	SetMessage(var_389_int); // 0x1bfa TObjFunc
	ClearReplies(); // 0x1bfc TObjFunc
	var_390_int = 538443; // 0x1bfe PushI
	var_391_int = 40307; // 0x1bff PushI
	var_392_int = 40322; // 0x1c00 PushI
	AddReply(var_390_int, var_391_int, var_392_int); // 0x1c01 TObjFunc
	var_393_int = 536631; // 0x1c03 PushI
	var_394_int = 38460; // 0x1c04 PushI
	var_395_int = 38459; // 0x1c05 PushI
	AddReply(var_393_int, var_394_int, var_395_int); // 0x1c06 TObjFunc
	return 0; // 0x1c08 Return
	
Label_7177:
	var_396_int = 40307; // 0x1c09 PushI
	var_397_bool = var_73_cvector == var_396_int; // 0x1c0a Eq
	if(var_397_bool == 0) goto Label_7200; // 0x1c0b JumpB
	var_398_string = ""; // 0x1c0c PushV
	var_398_string = "Neutral"; // 0x1c0d MovS
	func_6609(var_74_cvector, var_398_string); // 0x1c0e NEW_2
	var_399_int = 538431; // 0x1c10 PushI
	SetMessage(var_399_int); // 0x1c11 TObjFunc
	ClearReplies(); // 0x1c13 TObjFunc
	var_400_int = 536629; // 0x1c15 PushI
	var_401_int = 38460; // 0x1c16 PushI
	var_402_int = 38457; // 0x1c17 PushI
	AddReply(var_400_int, var_401_int, var_402_int); // 0x1c18 TObjFunc
	var_403_int = 538444; // 0x1c1a PushI
	var_404_int = 40325; // 0x1c1b PushI
	var_405_int = 40324; // 0x1c1c PushI
	AddReply(var_403_int, var_404_int, var_405_int); // 0x1c1d TObjFunc
	return 0; // 0x1c1f Return
	
Label_7200:
	var_406_int = 40325; // 0x1c20 PushI
	var_407_bool = var_73_cvector == var_406_int; // 0x1c21 Eq
	if(var_407_bool == 0) goto Label_7218; // 0x1c22 JumpB
	var_408_string = ""; // 0x1c23 PushV
	var_408_string = "Neutral"; // 0x1c24 MovS
	func_6609(var_74_cvector, var_408_string); // 0x1c25 NEW_2
	var_409_int = 538445; // 0x1c27 PushI
	SetMessage(var_409_int); // 0x1c28 TObjFunc
	ClearReplies(); // 0x1c2a TObjFunc
	var_410_int = 538446; // 0x1c2c PushI
	var_411_int = 38460; // 0x1c2d PushI
	var_412_int = 40326; // 0x1c2e PushI
	AddReply(var_410_int, var_411_int, var_412_int); // 0x1c2f TObjFunc
	return 0; // 0x1c31 Return
	
Label_7218:
	var_413_int = 38460; // 0x1c32 PushI
	var_414_bool = var_73_cvector == var_413_int; // 0x1c33 Eq
	if(var_414_bool == 0) goto Label_7241; // 0x1c34 JumpB
	var_415_string = ""; // 0x1c35 PushV
	var_415_string = "Neutral"; // 0x1c36 MovS
	func_6609(var_74_cvector, var_415_string); // 0x1c37 NEW_2
	var_416_int = 536632; // 0x1c39 PushI
	SetMessage(var_416_int); // 0x1c3a TObjFunc
	ClearReplies(); // 0x1c3c TObjFunc
	var_417_int = 536633; // 0x1c3e PushI
	var_418_int = 38462; // 0x1c3f PushI
	var_419_int = 38461; // 0x1c40 PushI
	AddReply(var_417_int, var_418_int, var_419_int); // 0x1c41 TObjFunc
	var_420_int = 538447; // 0x1c43 PushI
	var_421_int = -1; // 0x1c44 PushI
	var_422_int = 40329; // 0x1c45 PushI
	AddReply(var_420_int, var_421_int, var_422_int); // 0x1c46 TObjFunc
	return 0; // 0x1c48 Return
	
Label_7241:
	var_423_int = 38462; // 0x1c49 PushI
	var_424_bool = var_73_cvector == var_423_int; // 0x1c4a Eq
	if(var_424_bool == 0) goto Label_7264; // 0x1c4b JumpB
	var_425_string = ""; // 0x1c4c PushV
	var_425_string = "Neutral"; // 0x1c4d MovS
	func_6609(var_74_cvector, var_425_string); // 0x1c4e NEW_2
	var_426_int = 536634; // 0x1c50 PushI
	SetMessage(var_426_int); // 0x1c51 TObjFunc
	ClearReplies(); // 0x1c53 TObjFunc
	var_427_int = 534504; // 0x1c55 PushI
	var_428_int = -1; // 0x1c56 PushI
	var_429_int = 36145; // 0x1c57 PushI
	AddReply(var_427_int, var_428_int, var_429_int); // 0x1c58 TObjFunc
	var_430_int = 534505; // 0x1c5a PushI
	var_431_int = -1; // 0x1c5b PushI
	var_432_int = 36146; // 0x1c5c PushI
	AddReply(var_430_int, var_431_int, var_432_int); // 0x1c5d TObjFunc
	return 0; // 0x1c5f Return
	
Label_7264:
	var_3_string = 1; // 0x1c60 TMovB
	var_433_bool = 0; // 0x1c61 PushV
	func_8923(var_433_bool); // 0x1c62 NEW_2
	if(var_433_bool == 0) goto Label_7272; // 0x1c64 JumpB
	lshStopAnimation(); // 0x1c65 Func
	goto Label_7274; // 0x1c67 Jump
	
Label_7274:
	return 0; // 0x1c6a Return
	
Label_7272:
	StopAnimation(); // 0x1c68 Func
	
Label_7276:
	return 0; // 0x1c6c Return
}


task_24_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_object, var_46_object, var_47_object, var_48_string, var_49_bool, var_50_object, var_51_object, var_52_object, var_53_string, var_54_bool, var_55_object, var_56_object, var_57_object, var_58_string, var_59_bool, var_60_int, var_61_int, var_62_object, var_63_object, var_64_object, var_65_string, var_66_bool, var_67_object, var_68_object, var_69_object, var_70_string, var_71_bool, var_72_bool, var_73_cvector, var_74_cvector)
{
	var_75_int = 1; // 0x1d19 PushI
	if(var_75_int == 0) goto Label_7806; // 0x1d1a JumpB
	func_8750(); // 0x1d1c NEW_2
	var_77_int = 35700; // 0x1d1e PushI
	var_78_bool = var_74_cvector == var_77_int; // 0x1d1f Eq
	if(var_78_bool == 0) goto Label_7477; // 0x1d20 JumpB
	var_79_object = Obj(); var_80_object = Obj(); // 0x1d21 PushV
	var_79_object = var_1_object; // 0x1d22 MovT
	var_80_object = var_0_object; // 0x1d23 MovT
	func_8994(); // 0x1d24 NEW_2
	var_106_object = Obj(); var_107_object = Obj(); // 0x1d26 PushV
	var_106_object = var_1_object; // 0x1d27 MovT
	var_107_object = var_0_object; // 0x1d28 MovT
	func_9101(var_107_object); // 0x1d29 NEW_2
	var_127_object = Obj(); var_128_object = Obj(); // 0x1d2b PushV
	var_127_object = var_1_object; // 0x1d2c MovT
	var_128_object = var_0_object; // 0x1d2d MovT
	func_8953(); // 0x1d2e NEW_2
	var_131_object = Obj(); var_132_object = Obj(); // 0x1d30 PushV
	var_131_object = var_1_object; // 0x1d31 MovT
	var_132_object = var_0_object; // 0x1d32 MovT
	func_9003(); // 0x1d33 NEW_2
	
Label_7477:
	var_139_int = 38262; // 0x1d35 PushI
	var_140_bool = var_74_cvector == var_139_int; // 0x1d36 Eq
	if(var_140_bool == 0) goto Label_7500; // 0x1d37 JumpB
	var_141_object = Obj(); var_142_object = Obj(); // 0x1d38 PushV
	var_141_object = var_1_object; // 0x1d39 MovT
	var_142_object = var_0_object; // 0x1d3a MovT
	func_8994(); // 0x1d3b NEW_2
	var_143_object = Obj(); var_144_object = Obj(); // 0x1d3d PushV
	var_143_object = var_1_object; // 0x1d3e MovT
	var_144_object = var_0_object; // 0x1d3f MovT
	func_9003(); // 0x1d40 NEW_2
	var_145_object = Obj(); var_146_object = Obj(); // 0x1d42 PushV
	var_145_object = var_1_object; // 0x1d43 MovT
	var_146_object = var_0_object; // 0x1d44 MovT
	func_8975(var_146_object); // 0x1d45 NEW_2
	var_150_object = Obj(); var_151_object = Obj(); // 0x1d47 PushV
	var_150_object = var_1_object; // 0x1d48 MovT
	var_151_object = var_0_object; // 0x1d49 MovT
	func_8953(); // 0x1d4a NEW_2
	
Label_7500:
	var_152_int = 35694; // 0x1d4c PushI
	var_153_bool = var_73_cvector == var_152_int; // 0x1d4d Eq
	if(var_153_bool == 0) goto Label_7533; // 0x1d4e JumpB
	var_154_string = ""; // 0x1d4f PushV
	var_154_string = "Neutral"; // 0x1d50 MovS
	func_7426(var_74_cvector, var_154_string); // 0x1d51 NEW_2
	var_171_int = 534101; // 0x1d53 PushI
	SetMessage(var_171_int); // 0x1d54 TObjFunc
	ClearReplies(); // 0x1d56 TObjFunc
	var_172_bool = 0; var_173_object = Obj(); // 0x1d58 PushV
	var_173_object = var_1_object; // 0x1d59 MovT
	func_9508(var_173_object); // 0x1d5a NEW_2
	if(var_172_bool == 0) goto Label_7522; // 0x1d5c JumpB
	var_180_int = 534102; // 0x1d5d PushI
	var_181_int = 35697; // 0x1d5e PushI
	var_182_int = 35695; // 0x1d5f PushI
	AddReply(var_180_int, var_181_int, var_182_int); // 0x1d60 TObjFunc
	
Label_7522:
	var_183_int = 534103; // 0x1d62 PushI
	var_184_int = -1; // 0x1d63 PushI
	var_185_int = 35696; // 0x1d64 PushI
	AddReply(var_183_int, var_184_int, var_185_int); // 0x1d65 TObjFunc
	var_186_int = 536433; // 0x1d67 PushI
	var_187_int = -1; // 0x1d68 PushI
	var_188_int = 38218; // 0x1d69 PushI
	AddReply(var_186_int, var_187_int, var_188_int); // 0x1d6a TObjFunc
	return 0; // 0x1d6c Return
	
Label_7533:
	var_189_int = 35697; // 0x1d6d PushI
	var_190_bool = var_73_cvector == var_189_int; // 0x1d6e Eq
	if(var_190_bool == 0) goto Label_7556; // 0x1d6f JumpB
	var_191_string = ""; // 0x1d70 PushV
	var_191_string = "Neutral"; // 0x1d71 MovS
	func_7426(var_74_cvector, var_191_string); // 0x1d72 NEW_2
	var_192_int = 534104; // 0x1d74 PushI
	SetMessage(var_192_int); // 0x1d75 TObjFunc
	ClearReplies(); // 0x1d77 TObjFunc
	var_193_int = 536434; // 0x1d79 PushI
	var_194_int = 38220; // 0x1d7a PushI
	var_195_int = 38219; // 0x1d7b PushI
	AddReply(var_193_int, var_194_int, var_195_int); // 0x1d7c TObjFunc
	var_196_int = 536440; // 0x1d7e PushI
	var_197_int = 38226; // 0x1d7f PushI
	var_198_int = 38225; // 0x1d80 PushI
	AddReply(var_196_int, var_197_int, var_198_int); // 0x1d81 TObjFunc
	return 0; // 0x1d83 Return
	
Label_7556:
	var_199_int = 38226; // 0x1d84 PushI
	var_200_bool = var_73_cvector == var_199_int; // 0x1d85 Eq
	if(var_200_bool == 0) goto Label_7579; // 0x1d86 JumpB
	var_201_string = ""; // 0x1d87 PushV
	var_201_string = "Neutral"; // 0x1d88 MovS
	func_7426(var_74_cvector, var_201_string); // 0x1d89 NEW_2
	var_202_int = 536441; // 0x1d8b PushI
	SetMessage(var_202_int); // 0x1d8c TObjFunc
	ClearReplies(); // 0x1d8e TObjFunc
	var_203_int = 536442; // 0x1d90 PushI
	var_204_int = 38220; // 0x1d91 PushI
	var_205_int = 38227; // 0x1d92 PushI
	AddReply(var_203_int, var_204_int, var_205_int); // 0x1d93 TObjFunc
	var_206_int = 536443; // 0x1d95 PushI
	var_207_int = 38230; // 0x1d96 PushI
	var_208_int = 38229; // 0x1d97 PushI
	AddReply(var_206_int, var_207_int, var_208_int); // 0x1d98 TObjFunc
	return 0; // 0x1d9a Return
	
Label_7579:
	var_209_int = 38220; // 0x1d9b PushI
	var_210_bool = var_73_cvector == var_209_int; // 0x1d9c Eq
	if(var_210_bool == 0) goto Label_7602; // 0x1d9d JumpB
	var_211_string = ""; // 0x1d9e PushV
	var_211_string = "Neutral"; // 0x1d9f MovS
	func_7426(var_74_cvector, var_211_string); // 0x1da0 NEW_2
	var_212_int = 536435; // 0x1da2 PushI
	SetMessage(var_212_int); // 0x1da3 TObjFunc
	ClearReplies(); // 0x1da5 TObjFunc
	var_213_int = 536436; // 0x1da7 PushI
	var_214_int = 38222; // 0x1da8 PushI
	var_215_int = 38221; // 0x1da9 PushI
	AddReply(var_213_int, var_214_int, var_215_int); // 0x1daa TObjFunc
	var_216_int = 536451; // 0x1dac PushI
	var_217_int = 38230; // 0x1dad PushI
	var_218_int = 38238; // 0x1dae PushI
	AddReply(var_216_int, var_217_int, var_218_int); // 0x1daf TObjFunc
	return 0; // 0x1db1 Return
	
Label_7602:
	var_219_int = 38222; // 0x1db2 PushI
	var_220_bool = var_73_cvector == var_219_int; // 0x1db3 Eq
	if(var_220_bool == 0) goto Label_7625; // 0x1db4 JumpB
	var_221_string = ""; // 0x1db5 PushV
	var_221_string = "Neutral"; // 0x1db6 MovS
	func_7426(var_74_cvector, var_221_string); // 0x1db7 NEW_2
	var_222_int = 536437; // 0x1db9 PushI
	SetMessage(var_222_int); // 0x1dba TObjFunc
	ClearReplies(); // 0x1dbc TObjFunc
	var_223_int = 536438; // 0x1dbe PushI
	var_224_int = 38230; // 0x1dbf PushI
	var_225_int = 38223; // 0x1dc0 PushI
	AddReply(var_223_int, var_224_int, var_225_int); // 0x1dc1 TObjFunc
	var_226_int = 536446; // 0x1dc3 PushI
	var_227_int = 38230; // 0x1dc4 PushI
	var_228_int = 38232; // 0x1dc5 PushI
	AddReply(var_226_int, var_227_int, var_228_int); // 0x1dc6 TObjFunc
	return 0; // 0x1dc8 Return
	
Label_7625:
	var_229_int = 38230; // 0x1dc9 PushI
	var_230_bool = var_73_cvector == var_229_int; // 0x1dca Eq
	if(var_230_bool == 0) goto Label_7648; // 0x1dcb JumpB
	var_231_string = ""; // 0x1dcc PushV
	var_231_string = "Neutral"; // 0x1dcd MovS
	func_7426(var_74_cvector, var_231_string); // 0x1dce NEW_2
	var_232_int = 536444; // 0x1dd0 PushI
	SetMessage(var_232_int); // 0x1dd1 TObjFunc
	ClearReplies(); // 0x1dd3 TObjFunc
	var_233_int = 536445; // 0x1dd5 PushI
	var_234_int = 38234; // 0x1dd6 PushI
	var_235_int = 38231; // 0x1dd7 PushI
	AddReply(var_233_int, var_234_int, var_235_int); // 0x1dd8 TObjFunc
	var_236_int = 536452; // 0x1dda PushI
	var_237_int = 38241; // 0x1ddb PushI
	var_238_int = 38240; // 0x1ddc PushI
	AddReply(var_236_int, var_237_int, var_238_int); // 0x1ddd TObjFunc
	return 0; // 0x1ddf Return
	
Label_7648:
	var_239_int = 38241; // 0x1de0 PushI
	var_240_bool = var_73_cvector == var_239_int; // 0x1de1 Eq
	if(var_240_bool == 0) goto Label_7666; // 0x1de2 JumpB
	var_241_string = ""; // 0x1de3 PushV
	var_241_string = "Surprise"; // 0x1de4 MovS
	func_7426(var_74_cvector, var_241_string); // 0x1de5 NEW_2
	var_242_int = 536453; // 0x1de7 PushI
	SetMessage(var_242_int); // 0x1de8 TObjFunc
	ClearReplies(); // 0x1dea TObjFunc
	var_243_int = 536454; // 0x1dec PushI
	var_244_int = 38234; // 0x1ded PushI
	var_245_int = 38242; // 0x1dee PushI
	AddReply(var_243_int, var_244_int, var_245_int); // 0x1def TObjFunc
	return 0; // 0x1df1 Return
	
Label_7666:
	var_246_int = 38234; // 0x1df2 PushI
	var_247_bool = var_73_cvector == var_246_int; // 0x1df3 Eq
	if(var_247_bool == 0) goto Label_7689; // 0x1df4 JumpB
	var_248_string = ""; // 0x1df5 PushV
	var_248_string = "Neutral"; // 0x1df6 MovS
	func_7426(var_74_cvector, var_248_string); // 0x1df7 NEW_2
	var_249_int = 536447; // 0x1df9 PushI
	SetMessage(var_249_int); // 0x1dfa TObjFunc
	ClearReplies(); // 0x1dfc TObjFunc
	var_250_int = 536448; // 0x1dfe PushI
	var_251_int = 38236; // 0x1dff PushI
	var_252_int = 38235; // 0x1e00 PushI
	AddReply(var_250_int, var_251_int, var_252_int); // 0x1e01 TObjFunc
	var_253_int = 536461; // 0x1e03 PushI
	var_254_int = 38253; // 0x1e04 PushI
	var_255_int = 38251; // 0x1e05 PushI
	AddReply(var_253_int, var_254_int, var_255_int); // 0x1e06 TObjFunc
	return 0; // 0x1e08 Return
	
Label_7689:
	var_256_int = 38236; // 0x1e09 PushI
	var_257_bool = var_73_cvector == var_256_int; // 0x1e0a Eq
	if(var_257_bool == 0) goto Label_7712; // 0x1e0b JumpB
	var_258_string = ""; // 0x1e0c PushV
	var_258_string = "Surprise"; // 0x1e0d MovS
	func_7426(var_74_cvector, var_258_string); // 0x1e0e NEW_2
	var_259_int = 536449; // 0x1e10 PushI
	SetMessage(var_259_int); // 0x1e11 TObjFunc
	ClearReplies(); // 0x1e13 TObjFunc
	var_260_int = 536459; // 0x1e15 PushI
	var_261_int = 38224; // 0x1e16 PushI
	var_262_int = 38248; // 0x1e17 PushI
	AddReply(var_260_int, var_261_int, var_262_int); // 0x1e18 TObjFunc
	var_263_int = 536462; // 0x1e1a PushI
	var_264_int = 38253; // 0x1e1b PushI
	var_265_int = 38252; // 0x1e1c PushI
	AddReply(var_263_int, var_264_int, var_265_int); // 0x1e1d TObjFunc
	return 0; // 0x1e1f Return
	
Label_7712:
	var_266_int = 38253; // 0x1e20 PushI
	var_267_bool = var_73_cvector == var_266_int; // 0x1e21 Eq
	if(var_267_bool == 0) goto Label_7730; // 0x1e22 JumpB
	var_268_string = ""; // 0x1e23 PushV
	var_268_string = "Surprise"; // 0x1e24 MovS
	func_7426(var_74_cvector, var_268_string); // 0x1e25 NEW_2
	var_269_int = 536463; // 0x1e27 PushI
	SetMessage(var_269_int); // 0x1e28 TObjFunc
	ClearReplies(); // 0x1e2a TObjFunc
	var_270_int = 536464; // 0x1e2c PushI
	var_271_int = 38224; // 0x1e2d PushI
	var_272_int = 38255; // 0x1e2e PushI
	AddReply(var_270_int, var_271_int, var_272_int); // 0x1e2f TObjFunc
	return 0; // 0x1e31 Return
	
Label_7730:
	var_273_int = 38224; // 0x1e32 PushI
	var_274_bool = var_73_cvector == var_273_int; // 0x1e33 Eq
	if(var_274_bool == 0) goto Label_7748; // 0x1e34 JumpB
	var_275_string = ""; // 0x1e35 PushV
	var_275_string = "Surprise"; // 0x1e36 MovS
	func_7426(var_74_cvector, var_275_string); // 0x1e37 NEW_2
	var_276_int = 536439; // 0x1e39 PushI
	SetMessage(var_276_int); // 0x1e3a TObjFunc
	ClearReplies(); // 0x1e3c TObjFunc
	var_277_int = 536466; // 0x1e3e PushI
	var_278_int = 38258; // 0x1e3f PushI
	var_279_int = 38257; // 0x1e40 PushI
	AddReply(var_277_int, var_278_int, var_279_int); // 0x1e41 TObjFunc
	return 0; // 0x1e43 Return
	
Label_7748:
	var_280_int = 38258; // 0x1e44 PushI
	var_281_bool = var_73_cvector == var_280_int; // 0x1e45 Eq
	if(var_281_bool == 0) goto Label_7771; // 0x1e46 JumpB
	var_282_string = ""; // 0x1e47 PushV
	var_282_string = "Neutral"; // 0x1e48 MovS
	func_7426(var_74_cvector, var_282_string); // 0x1e49 NEW_2
	var_283_int = 536467; // 0x1e4b PushI
	SetMessage(var_283_int); // 0x1e4c TObjFunc
	ClearReplies(); // 0x1e4e TObjFunc
	var_284_int = 534105; // 0x1e50 PushI
	var_285_int = 35699; // 0x1e51 PushI
	var_286_int = 35698; // 0x1e52 PushI
	AddReply(var_284_int, var_285_int, var_286_int); // 0x1e53 TObjFunc
	var_287_int = 536468; // 0x1e55 PushI
	var_288_int = 35699; // 0x1e56 PushI
	var_289_int = 38260; // 0x1e57 PushI
	AddReply(var_287_int, var_288_int, var_289_int); // 0x1e58 TObjFunc
	return 0; // 0x1e5a Return
	
Label_7771:
	var_290_int = 35699; // 0x1e5b PushI
	var_291_bool = var_73_cvector == var_290_int; // 0x1e5c Eq
	if(var_291_bool == 0) goto Label_7794; // 0x1e5d JumpB
	var_292_string = ""; // 0x1e5e PushV
	var_292_string = "Neutral"; // 0x1e5f MovS
	func_7426(var_74_cvector, var_292_string); // 0x1e60 NEW_2
	var_293_int = 534106; // 0x1e62 PushI
	SetMessage(var_293_int); // 0x1e63 TObjFunc
	ClearReplies(); // 0x1e65 TObjFunc
	var_294_int = 534107; // 0x1e67 PushI
	var_295_int = -1; // 0x1e68 PushI
	var_296_int = 35700; // 0x1e69 PushI
	AddReply(var_294_int, var_295_int, var_296_int); // 0x1e6a TObjFunc
	var_297_int = 536469; // 0x1e6c PushI
	var_298_int = -1; // 0x1e6d PushI
	var_299_int = 38262; // 0x1e6e PushI
	AddReply(var_297_int, var_298_int, var_299_int); // 0x1e6f TObjFunc
	return 0; // 0x1e71 Return
	
Label_7794:
	var_3_string = 1; // 0x1e72 TMovB
	var_300_bool = 0; // 0x1e73 PushV
	func_8923(var_300_bool); // 0x1e74 NEW_2
	if(var_300_bool == 0) goto Label_7802; // 0x1e76 JumpB
	lshStopAnimation(); // 0x1e77 Func
	goto Label_7804; // 0x1e79 Jump
	
Label_7804:
	return 0; // 0x1e7c Return
	
Label_7802:
	StopAnimation(); // 0x1e7a Func
	
Label_7806:
	return 0; // 0x1e7e Return
}


task_26_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_object, var_46_object, var_47_object, var_48_string, var_49_bool, var_50_object, var_51_object, var_52_object, var_53_string, var_54_bool, var_55_object, var_56_object, var_57_object, var_58_string, var_59_bool, var_60_object, var_61_object, var_62_object, var_63_string, var_64_bool, var_65_int, var_66_int, var_67_object, var_68_object, var_69_object, var_70_string, var_71_bool, var_72_bool, var_73_cvector, var_74_cvector)
{
	var_75_int = 1; // 0x1f21 PushI
	if(var_75_int == 0) goto Label_8119; // 0x1f22 JumpB
	func_8750(); // 0x1f24 NEW_2
	var_77_int = 37351; // 0x1f26 PushI
	var_78_bool = var_73_cvector == var_77_int; // 0x1f27 Eq
	if(var_78_bool == 0) goto Label_7997; // 0x1f28 JumpB
	var_79_string = ""; // 0x1f29 PushV
	var_79_string = "Neutral"; // 0x1f2a MovS
	func_7946(var_74_cvector, var_79_string); // 0x1f2b NEW_2
	var_96_int = 535665; // 0x1f2d PushI
	SetMessage(var_96_int); // 0x1f2e TObjFunc
	ClearReplies(); // 0x1f30 TObjFunc
	var_97_int = 535666; // 0x1f32 PushI
	var_98_int = 42176; // 0x1f33 PushI
	var_99_int = 37352; // 0x1f34 PushI
	AddReply(var_97_int, var_98_int, var_99_int); // 0x1f35 TObjFunc
	var_100_int = 540007; // 0x1f37 PushI
	var_101_int = -1; // 0x1f38 PushI
	var_102_int = 41978; // 0x1f39 PushI
	AddReply(var_100_int, var_101_int, var_102_int); // 0x1f3a TObjFunc
	return 0; // 0x1f3c Return
	
Label_7997:
	var_103_int = 42176; // 0x1f3d PushI
	var_104_bool = var_73_cvector == var_103_int; // 0x1f3e Eq
	if(var_104_bool == 0) goto Label_8020; // 0x1f3f JumpB
	var_105_string = ""; // 0x1f40 PushV
	var_105_string = "Confusion"; // 0x1f41 MovS
	func_7946(var_74_cvector, var_105_string); // 0x1f42 NEW_2
	var_106_int = 540197; // 0x1f44 PushI
	SetMessage(var_106_int); // 0x1f45 TObjFunc
	ClearReplies(); // 0x1f47 TObjFunc
	var_107_int = 540198; // 0x1f49 PushI
	var_108_int = 42216; // 0x1f4a PushI
	var_109_int = 42177; // 0x1f4b PushI
	AddReply(var_107_int, var_108_int, var_109_int); // 0x1f4c TObjFunc
	var_110_int = 540232; // 0x1f4e PushI
	var_111_int = 42214; // 0x1f4f PushI
	var_112_int = 42213; // 0x1f50 PushI
	AddReply(var_110_int, var_111_int, var_112_int); // 0x1f51 TObjFunc
	return 0; // 0x1f53 Return
	
Label_8020:
	var_113_int = 42216; // 0x1f54 PushI
	var_114_bool = var_73_cvector == var_113_int; // 0x1f55 Eq
	if(var_114_bool == 0) goto Label_8043; // 0x1f56 JumpB
	var_115_string = ""; // 0x1f57 PushV
	var_115_string = "Confusion"; // 0x1f58 MovS
	func_7946(var_74_cvector, var_115_string); // 0x1f59 NEW_2
	var_116_int = 540234; // 0x1f5b PushI
	SetMessage(var_116_int); // 0x1f5c TObjFunc
	ClearReplies(); // 0x1f5e TObjFunc
	var_117_int = 540235; // 0x1f60 PushI
	var_118_int = 42214; // 0x1f61 PushI
	var_119_int = 42217; // 0x1f62 PushI
	AddReply(var_117_int, var_118_int, var_119_int); // 0x1f63 TObjFunc
	var_120_int = 540236; // 0x1f65 PushI
	var_121_int = -1; // 0x1f66 PushI
	var_122_int = 42218; // 0x1f67 PushI
	AddReply(var_120_int, var_121_int, var_122_int); // 0x1f68 TObjFunc
	return 0; // 0x1f6a Return
	
Label_8043:
	var_123_int = 42214; // 0x1f6b PushI
	var_124_bool = var_73_cvector == var_123_int; // 0x1f6c Eq
	if(var_124_bool == 0) goto Label_8066; // 0x1f6d JumpB
	var_125_string = ""; // 0x1f6e PushV
	var_125_string = "Neutral"; // 0x1f6f MovS
	func_7946(var_74_cvector, var_125_string); // 0x1f70 NEW_2
	var_126_int = 540233; // 0x1f72 PushI
	SetMessage(var_126_int); // 0x1f73 TObjFunc
	ClearReplies(); // 0x1f75 TObjFunc
	var_127_int = 540237; // 0x1f77 PushI
	var_128_int = 42221; // 0x1f78 PushI
	var_129_int = 42219; // 0x1f79 PushI
	AddReply(var_127_int, var_128_int, var_129_int); // 0x1f7a TObjFunc
	var_130_int = 540238; // 0x1f7c PushI
	var_131_int = -1; // 0x1f7d PushI
	var_132_int = 42220; // 0x1f7e PushI
	AddReply(var_130_int, var_131_int, var_132_int); // 0x1f7f TObjFunc
	return 0; // 0x1f81 Return
	
Label_8066:
	var_133_int = 42221; // 0x1f82 PushI
	var_134_bool = var_73_cvector == var_133_int; // 0x1f83 Eq
	if(var_134_bool == 0) goto Label_8084; // 0x1f84 JumpB
	var_135_string = ""; // 0x1f85 PushV
	var_135_string = "Surprise"; // 0x1f86 MovS
	func_7946(var_74_cvector, var_135_string); // 0x1f87 NEW_2
	var_136_int = 540239; // 0x1f89 PushI
	SetMessage(var_136_int); // 0x1f8a TObjFunc
	ClearReplies(); // 0x1f8c TObjFunc
	var_137_int = 540240; // 0x1f8e PushI
	var_138_int = 42224; // 0x1f8f PushI
	var_139_int = 42222; // 0x1f90 PushI
	AddReply(var_137_int, var_138_int, var_139_int); // 0x1f91 TObjFunc
	return 0; // 0x1f93 Return
	
Label_8084:
	var_140_int = 42224; // 0x1f94 PushI
	var_141_bool = var_73_cvector == var_140_int; // 0x1f95 Eq
	if(var_141_bool == 0) goto Label_8107; // 0x1f96 JumpB
	var_142_string = ""; // 0x1f97 PushV
	var_142_string = "Surprise"; // 0x1f98 MovS
	func_7946(var_74_cvector, var_142_string); // 0x1f99 NEW_2
	var_143_int = 540242; // 0x1f9b PushI
	SetMessage(var_143_int); // 0x1f9c TObjFunc
	ClearReplies(); // 0x1f9e TObjFunc
	var_144_int = 540243; // 0x1fa0 PushI
	var_145_int = -1; // 0x1fa1 PushI
	var_146_int = 42225; // 0x1fa2 PushI
	AddReply(var_144_int, var_145_int, var_146_int); // 0x1fa3 TObjFunc
	var_147_int = 540241; // 0x1fa5 PushI
	var_148_int = -1; // 0x1fa6 PushI
	var_149_int = 42223; // 0x1fa7 PushI
	AddReply(var_147_int, var_148_int, var_149_int); // 0x1fa8 TObjFunc
	return 0; // 0x1faa Return
	
Label_8107:
	var_3_string = 1; // 0x1fab TMovB
	var_150_bool = 0; // 0x1fac PushV
	func_8923(var_150_bool); // 0x1fad NEW_2
	if(var_150_bool == 0) goto Label_8115; // 0x1faf JumpB
	lshStopAnimation(); // 0x1fb0 Func
	goto Label_8117; // 0x1fb2 Jump
	
Label_8117:
	return 0; // 0x1fb5 Return
	
Label_8115:
	StopAnimation(); // 0x1fb3 Func
	
Label_8119:
	return 0; // 0x1fb7 Return
}


task_28_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_object, var_46_object, var_47_object, var_48_string, var_49_bool, var_50_object, var_51_object, var_52_object, var_53_string, var_54_bool, var_55_object, var_56_object, var_57_object, var_58_string, var_59_bool, var_60_object, var_61_object, var_62_object, var_63_string, var_64_bool, var_65_object, var_66_object, var_67_object, var_68_string, var_69_bool, var_70_int, var_71_int, var_72_bool, var_73_cvector, var_74_cvector)
{
	var_75_int = 1; // 0x205a PushI
	if(var_75_int == 0) goto Label_8322; // 0x205b JumpB
	func_8750(); // 0x205d NEW_2
	var_77_int = 42551; // 0x205f PushI
	var_78_bool = var_73_cvector == var_77_int; // 0x2060 Eq
	if(var_78_bool == 0) goto Label_8310; // 0x2061 JumpB
	var_79_string = ""; // 0x2062 PushV
	var_79_string = "Neutral"; // 0x2063 MovS
	func_8259(var_74_cvector, var_79_string); // 0x2064 NEW_2
	var_96_int = 540542; // 0x2066 PushI
	SetMessage(var_96_int); // 0x2067 TObjFunc
	ClearReplies(); // 0x2069 TObjFunc
	var_97_int = 540543; // 0x206b PushI
	var_98_int = -1; // 0x206c PushI
	var_99_int = 42552; // 0x206d PushI
	AddReply(var_97_int, var_98_int, var_99_int); // 0x206e TObjFunc
	var_100_int = 540796; // 0x2070 PushI
	var_101_int = -1; // 0x2071 PushI
	var_102_int = 42845; // 0x2072 PushI
	AddReply(var_100_int, var_101_int, var_102_int); // 0x2073 TObjFunc
	return 0; // 0x2075 Return
	
Label_8310:
	var_3_string = 1; // 0x2076 TMovB
	var_103_bool = 0; // 0x2077 PushV
	func_8923(var_103_bool); // 0x2078 NEW_2
	if(var_103_bool == 0) goto Label_8318; // 0x207a JumpB
	lshStopAnimation(); // 0x207b Func
	goto Label_8320; // 0x207d Jump
	
Label_8320:
	return 0; // 0x2080 Return
	
Label_8318:
	StopAnimation(); // 0x207e Func
	
Label_8322:
	return 0; // 0x2082 Return
}


task_29_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_object, var_46_object, var_47_object, var_48_string, var_49_bool, var_50_object, var_51_object, var_52_object, var_53_string, var_54_bool, var_55_object, var_56_object, var_57_object, var_58_string, var_59_bool, var_60_object, var_61_object, var_62_object, var_63_string, var_64_bool, var_65_object, var_66_object, var_67_object, var_68_string, var_69_bool, var_70_bool, var_71_cvector, var_72_cvector, var_73_string)
{
	var_74_string = "icot_viktor_NPC_Trigger"; // 0x208b PushS
	var_75_bool = var_73_string == var_74_string; // 0x208c Eq
	if(var_75_bool == 0) goto Label_8337; // 0x208d JumpB
	func_8377(var_73_string); // 0x208f NEW_2
	
Label_8337:
	return 0; // 0x2091 Return
}


task_29_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_object, var_46_object, var_47_object, var_48_string, var_49_bool, var_50_object, var_51_object, var_52_object, var_53_string, var_54_bool, var_55_object, var_56_object, var_57_object, var_58_string, var_59_bool, var_60_object, var_61_object, var_62_object, var_63_string, var_64_bool, var_65_object, var_66_object, var_67_object, var_68_string, var_69_bool, var_70_bool, var_71_cvector, var_72_cvector)
{
	TaskCall(0); // 0x20c4 TaskCall
	func_0(); // 0x20c5 NEW_2
	TaskReturn(); // 0x20c6 TaskReturn
	func_8366(var_70_bool, var_71_cvector, var_72_cvector); // 0x20c9 NEW_2
	return 0; // 0x20cb Return
}


task_29_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_object, var_46_object, var_47_object, var_48_string, var_49_bool, var_50_object, var_51_object, var_52_object, var_53_string, var_54_bool, var_55_object, var_56_object, var_57_object, var_58_string, var_59_bool, var_60_object, var_61_object, var_62_object, var_63_string, var_64_bool, var_65_object, var_66_object, var_67_object, var_68_string, var_69_bool, var_70_bool, var_71_cvector, var_72_cvector, var_73_object)
{
	var_74_bool = 0; var_75_bool = 0; // 0x20cc PushV
	var_76_object = var_0_object; // 0x20cd PushT
	if(var_76_object == 0) goto Label_8413; // 0x20ce JumpB
	IsOverrideActive(var_75_bool); // 0x20cf Func
	var_77_bool = var_75_bool == 0; // 0x20d1 Not
	if(var_77_bool == 0) goto Label_8413; // 0x20d2 JumpB
	EventDisable(0); // 0x20d3 EventDisable
	var_78_bool = 0; var_79_object = Obj(); // 0x20d4 PushV
	var_79_object = var_73_object; // 0x20d5 Mov
	func_8465(var_79_object); // 0x20d6 NEW_2
	EventEnable(0); // 0x20d8 EventEnable
	var_92_object = Obj(); // 0x20d9 PushV
	var_92_object = var_73_object; // 0x20da Mov
	func_10327(var_92_object); // 0x20db NEW_2
	
Label_8413:
	return 2; // 0x20dd Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_object, var_46_object, var_47_object, var_48_string, var_49_bool, var_50_object, var_51_object, var_52_object, var_53_string, var_54_bool, var_55_object, var_56_object, var_57_object, var_58_string, var_59_bool, var_60_object, var_61_object, var_62_object, var_63_string, var_64_bool, var_65_object, var_66_object, var_67_object, var_68_string, var_69_bool, var_70_bool, var_71_cvector, var_72_cvector)
{
	var_73_bool = GlobalVars[1]; // 0x2083 PushGE
	var_73_bool = 0; // 0x2084 MovB
	GlobalVars[1] = var_73_bool; // 0x2085 PopGE
	func_8338(var_70_bool, var_71_cvector, var_72_cvector); // 0x2087 NEW_2
	return 0; // 0x2089 Return
}


func_8704(var_83_string)
{
	var_84_bool = 0; var_85_float = 0; var_86_float = 0; var_87_bool = 0; var_88_float = 0; var_89_float = 0; // 0x2200 PushV
	lshHasAnimation(var_87_bool, var_83_string); // 0x2201 Func
	var_90_bool = var_87_bool; // 0x2203 Push
	if(var_90_bool == 0) goto Label_8715; // 0x2204 JumpB
	lshGetAnimTimes(var_83_string, var_88_float, var_89_float); // 0x2205 Func
	var_91_bool = 0; // 0x2207 PushB
	lshPlayAnimation(var_88_float, var_89_float, var_91_bool); // 0x2208 Func
	goto Label_8719; // 0x220a Jump
	
Label_8719:
	return 6; // 0x220f Return
	
Label_8715:
	var_92_string = "Can't find lsh animation : "; // 0x220b PushS
	var_93_int = var_92_string + var_83_string; // 0x220c Add
	Trace(var_93_int); // 0x220d Func
}


func_0()
{
	
Label_0:
	Hold(); // 0x0 Func
	var_78_bool = 0; // 0x2 PushV
	func_8474(var_78_bool); // 0x3 NEW_2
	var_79_bool = var_78_bool == 0; // 0x5 Not
	if(var_79_bool == 0) goto Label_0; // 0x6 JumpB
	return 0; // 0x7 Return
}


func_3588(var_0_object, var_1_object, var_2_object, var_3_string, var_675_object, var_676_object)
{
	var_0_object = var_676_object; // 0xe05 TMov
	var_1_object = var_675_object; // 0xe06 TMov
	var_3_string = 0; // 0xe07 TMovB
	var_681_int = 1; // 0xe08 PushI
	if(var_681_int == 0) goto Label_3675; // 0xe09 JumpB
	var_682_bool = 0; var_683_object = Obj(); // 0xe0a PushV
	var_683_object = var_1_object; // 0xe0b MovT
	func_9544(var_683_object); // 0xe0c NEW_2
	if(var_682_bool == 0) goto Label_3629; // 0xe0e JumpB
	var_688_object = Obj(); var_689_object = Obj(); // 0xe0f PushV
	var_688_object = var_1_object; // 0xe10 MovT
	var_689_object = var_0_object; // 0xe11 MovT
	func_9040(); // 0xe12 NEW_2
	var_692_object = Obj(); var_693_object = Obj(); // 0xe14 PushV
	var_692_object = var_1_object; // 0xe15 MovT
	var_693_object = var_0_object; // 0xe16 MovT
	func_9055(); // 0xe17 NEW_2
	var_696_string = ""; // 0xe19 PushV
	var_696_string = "Neutral"; // 0xe1a MovS
	func_3705(var_676_object, var_696_string); // 0xe1b NEW_2
	var_704_int = 536314; // 0xe1d PushI
	SetMessage(var_704_int); // 0xe1e TObjFunc
	ClearReplies(); // 0xe20 TObjFunc
	var_705_int = 511097; // 0xe22 PushI
	var_706_int = 12285; // 0xe23 PushI
	var_707_int = 12284; // 0xe24 PushI
	AddReply(var_705_int, var_706_int, var_707_int); // 0xe25 TObjFunc
	var_708_int = 536312; // 0xe27 PushI
	var_709_int = 12285; // 0xe28 PushI
	var_710_int = 38097; // 0xe29 PushI
	AddReply(var_708_int, var_709_int, var_710_int); // 0xe2a TObjFunc
	goto Label_3675; // 0xe2c Jump
	
Label_3675:
	var_711_bool = 0; // 0xe5b PushV
	func_8923(var_711_bool); // 0xe5c NEW_2
	if(var_711_bool == 0) goto Label_3690; // 0xe5e JumpB
	
Label_3679:
	lshWaitForAnimEnd(); // 0xe5f Func
	var_712_string = var_3_string; // 0xe61 PushT
	if(var_712_string == 0) goto Label_3684; // 0xe62 JumpB
	goto Label_3689; // 0xe63 Jump
	
Label_3689:
	goto Label_3704; // 0xe69 Jump
	
Label_3704:
	return 0; // 0xe78 Return
	
Label_3684:
	var_713_string = ""; // 0xe64 PushV
	var_713_string = var_2_object; // 0xe65 MovT
	func_8704(var_713_string); // 0xe66 NEW_2
	goto Label_3679; // 0xe68 Jump
	
Label_3690:
	var_714_string = "all"; // 0xe6a PushS
	var_715_string = "idle"; // 0xe6b PushS
	PlayAnimation(var_714_string, var_715_string); // 0xe6c Func
	
Label_3694:
	WaitForAnimEnd(); // 0xe6e Func
	var_716_string = var_3_string; // 0xe70 PushT
	if(var_716_string == 0) goto Label_3699; // 0xe71 JumpB
	goto Label_3704; // 0xe72 Jump
	
Label_3699:
	var_717_string = "all"; // 0xe73 PushS
	var_718_string = "idle"; // 0xe74 PushS
	PlayAnimation(var_717_string, var_718_string); // 0xe75 Func
	goto Label_3694; // 0xe77 Jump
	
Label_3629:
	var_719_string = ""; // 0xe2d PushV
	var_719_string = "Neutral"; // 0xe2e MovS
	func_3705(var_676_object, var_719_string); // 0xe2f NEW_2
	var_720_int = 511109; // 0xe31 PushI
	SetMessage(var_720_int); // 0xe32 TObjFunc
	ClearReplies(); // 0xe34 TObjFunc
	var_721_bool = 0; var_722_object = Obj(); // 0xe36 PushV
	var_722_object = var_1_object; // 0xe37 MovT
	func_9556(var_722_object); // 0xe38 NEW_2
	if(var_721_bool == 0) goto Label_3648; // 0xe3a JumpB
	var_727_int = 511110; // 0xe3b PushI
	var_728_int = 12300; // 0xe3c PushI
	var_729_int = 12299; // 0xe3d PushI
	AddReply(var_727_int, var_728_int, var_729_int); // 0xe3e TObjFunc
	
Label_3648:
	var_730_bool = 0; // 0xe40 PushV
	var_730_bool = 0; // 0xe41 MovB
	var_731_bool = 0; var_732_object = Obj(); // 0xe42 PushV
	var_732_object = var_1_object; // 0xe43 MovT
	func_9568(var_732_object); // 0xe44 NEW_2
	if(var_731_bool == 0) goto Label_3661; // 0xe46 JumpB
	var_737_bool = 0; var_738_object = Obj(); // 0xe47 PushV
	var_738_object = var_1_object; // 0xe48 MovT
	func_9580(var_737_bool, var_738_object); // 0xe49 NEW_2
	if(var_737_bool == 0) goto Label_3661; // 0xe4b JumpB
	var_730_bool = 1; // 0xe4c MovB
	
Label_3661:
	if(var_730_bool == 0) goto Label_3667; // 0xe4d JumpB
	var_746_int = 511113; // 0xe4e PushI
	var_747_int = 12303; // 0xe4f PushI
	var_748_int = 12302; // 0xe50 PushI
	AddReply(var_746_int, var_747_int, var_748_int); // 0xe51 TObjFunc
	
Label_3667:
	var_749_int = 536311; // 0xe53 PushI
	var_750_int = -1; // 0xe54 PushI
	var_751_int = 38096; // 0xe55 PushI
	AddReply(var_749_int, var_750_int, var_751_int); // 0xe56 TObjFunc
	goto Label_3675; // 0xe58 Jump
}


func_9735(var_802_bool)
{
	var_804_int = 0; var_805_string = ""; // 0x2608 PushV
	var_805_string = "d5q03"; // 0x2609 MovS
	func_8784(var_804_int, var_805_string); // 0x260a NEW_2
	var_806_int = -1; // 0x260c PushI
	var_807_bool = var_804_int == var_806_int; // 0x260d Eq
	if(var_807_bool == 0) goto Label_9745; // 0x260e JumpB
	var_802_bool = 1; // 0x260f MovB
	return 0; // 0x2610 Return
	
Label_9745:
	var_802_bool = 0; // 0x2611 MovB
	return 0; // 0x2612 Return
}


func_4105(var_0_object, var_1_object, var_2_object, var_3_string, var_780_object, var_781_object)
{
	var_0_object = var_781_object; // 0x100a TMov
	var_1_object = var_780_object; // 0x100b TMov
	var_3_string = 0; // 0x100c TMovB
	var_786_int = 1; // 0x100d PushI
	if(var_786_int == 0) goto Label_4222; // 0x100e JumpB
	var_787_bool = 0; // 0x100f PushV
	var_787_bool = 0; // 0x1010 MovB
	var_788_bool = 0; // 0x1011 PushV
	var_788_bool = 0; // 0x1012 MovB
	var_789_bool = 0; var_790_object = Obj(); // 0x1013 PushV
	var_790_object = var_1_object; // 0x1014 MovT
	func_9783(var_790_object); // 0x1015 NEW_2
	if(var_789_bool == 0) goto Label_4127; // 0x1017 JumpB
	var_795_bool = 0; var_796_object = Obj(); // 0x1018 PushV
	var_796_object = var_1_object; // 0x1019 MovT
	func_9723(var_796_object); // 0x101a NEW_2
	var_801_bool = var_795_bool == 0; // 0x101c Not
	if(var_801_bool == 0) goto Label_4127; // 0x101d JumpB
	var_788_bool = 1; // 0x101e MovB
	
Label_4127:
	if(var_788_bool == 0) goto Label_4135; // 0x101f JumpB
	var_802_bool = 0; var_803_object = Obj(); // 0x1020 PushV
	var_803_object = var_1_object; // 0x1021 MovT
	func_9735(var_803_object); // 0x1022 NEW_2
	var_808_bool = var_802_bool == 0; // 0x1024 Not
	if(var_808_bool == 0) goto Label_4135; // 0x1025 JumpB
	var_787_bool = 1; // 0x1026 MovB
	
Label_4135:
	if(var_787_bool == 0) goto Label_4167; // 0x1027 JumpB
	var_809_object = Obj(); var_810_object = Obj(); // 0x1028 PushV
	var_809_object = var_1_object; // 0x1029 MovT
	var_810_object = var_0_object; // 0x102a MovT
	func_9288(); // 0x102b NEW_2
	var_813_string = ""; // 0x102d PushV
	var_813_string = "Anger"; // 0x102e MovS
	func_4252(var_781_object, var_813_string); // 0x102f NEW_2
	var_821_int = 512584; // 0x1031 PushI
	SetMessage(var_821_int); // 0x1032 TObjFunc
	ClearReplies(); // 0x1034 TObjFunc
	var_822_int = 511771; // 0x1036 PushI
	var_823_int = 12991; // 0x1037 PushI
	var_824_int = 12979; // 0x1038 PushI
	AddReply(var_822_int, var_823_int, var_824_int); // 0x1039 TObjFunc
	var_825_bool = 0; var_826_object = Obj(); // 0x103b PushV
	var_826_object = var_1_object; // 0x103c MovT
	func_9711(var_826_object); // 0x103d NEW_2
	var_831_bool = var_825_bool == 0; // 0x103f Not
	if(var_831_bool == 0) goto Label_4166; // 0x1040 JumpB
	var_832_int = 512585; // 0x1041 PushI
	var_833_int = 13755; // 0x1042 PushI
	var_834_int = 13752; // 0x1043 PushI
	AddReply(var_832_int, var_833_int, var_834_int); // 0x1044 TObjFunc
	
Label_4166:
	goto Label_4222; // 0x1046 Jump
	
Label_4222:
	var_835_bool = 0; // 0x107e PushV
	func_8923(var_835_bool); // 0x107f NEW_2
	if(var_835_bool == 0) goto Label_4237; // 0x1081 JumpB
	
Label_4226:
	lshWaitForAnimEnd(); // 0x1082 Func
	var_836_string = var_3_string; // 0x1084 PushT
	if(var_836_string == 0) goto Label_4231; // 0x1085 JumpB
	goto Label_4236; // 0x1086 Jump
	
Label_4236:
	goto Label_4251; // 0x108c Jump
	
Label_4251:
	return 0; // 0x109b Return
	
Label_4231:
	var_837_string = ""; // 0x1087 PushV
	var_837_string = var_2_object; // 0x1088 MovT
	func_8704(var_837_string); // 0x1089 NEW_2
	goto Label_4226; // 0x108b Jump
	
Label_4237:
	var_838_string = "all"; // 0x108d PushS
	var_839_string = "idle"; // 0x108e PushS
	PlayAnimation(var_838_string, var_839_string); // 0x108f Func
	
Label_4241:
	WaitForAnimEnd(); // 0x1091 Func
	var_840_string = var_3_string; // 0x1093 PushT
	if(var_840_string == 0) goto Label_4246; // 0x1094 JumpB
	goto Label_4251; // 0x1095 Jump
	
Label_4246:
	var_841_string = "all"; // 0x1096 PushS
	var_842_string = "idle"; // 0x1097 PushS
	PlayAnimation(var_841_string, var_842_string); // 0x1098 Func
	goto Label_4241; // 0x109a Jump
	
Label_4167:
	var_843_string = ""; // 0x1047 PushV
	var_843_string = "Fear"; // 0x1048 MovS
	func_4252(var_781_object, var_843_string); // 0x1049 NEW_2
	var_844_int = 511765; // 0x104b PushI
	SetMessage(var_844_int); // 0x104c TObjFunc
	ClearReplies(); // 0x104e TObjFunc
	var_845_bool = 0; // 0x1050 PushV
	var_845_bool = 0; // 0x1051 MovB
	var_846_bool = 0; var_847_object = Obj(); // 0x1052 PushV
	var_847_object = var_1_object; // 0x1053 MovT
	func_9747(var_847_object); // 0x1054 NEW_2
	if(var_846_bool == 0) goto Label_4189; // 0x1056 JumpB
	var_852_bool = 0; var_853_object = Obj(); // 0x1057 PushV
	var_853_object = var_1_object; // 0x1058 MovT
	func_9759(var_853_object); // 0x1059 NEW_2
	if(var_852_bool == 0) goto Label_4189; // 0x105b JumpB
	var_845_bool = 1; // 0x105c MovB
	
Label_4189:
	if(var_845_bool == 0) goto Label_4195; // 0x105d JumpB
	var_858_int = 511767; // 0x105e PushI
	var_859_int = 12977; // 0x105f PushI
	var_860_int = 12975; // 0x1060 PushI
	AddReply(var_858_int, var_859_int, var_860_int); // 0x1061 TObjFunc
	
Label_4195:
	var_861_bool = 0; // 0x1063 PushV
	var_861_bool = 0; // 0x1064 MovB
	var_862_bool = 0; var_863_object = Obj(); // 0x1065 PushV
	var_863_object = var_1_object; // 0x1066 MovT
	func_9723(var_863_object); // 0x1067 NEW_2
	if(var_862_bool == 0) goto Label_4208; // 0x1069 JumpB
	var_864_bool = 0; var_865_object = Obj(); // 0x106a PushV
	var_865_object = var_1_object; // 0x106b MovT
	func_9771(var_865_object); // 0x106c NEW_2
	if(var_864_bool == 0) goto Label_4208; // 0x106e JumpB
	var_861_bool = 1; // 0x106f MovB
	
Label_4208:
	if(var_861_bool == 0) goto Label_4214; // 0x1070 JumpB
	var_870_int = 512570; // 0x1071 PushI
	var_871_int = 13740; // 0x1072 PushI
	var_872_int = 13739; // 0x1073 PushI
	AddReply(var_870_int, var_871_int, var_872_int); // 0x1074 TObjFunc
	
Label_4214:
	var_873_int = 511766; // 0x1076 PushI
	var_874_int = -1; // 0x1077 PushI
	var_875_int = 12974; // 0x1078 PushI
	AddReply(var_873_int, var_874_int, var_875_int); // 0x1079 TObjFunc
	goto Label_4222; // 0x107b Jump
}


func_8201(var_0_object, var_1_object, var_2_object, var_3_string, var_1465_object, var_1466_object)
{
	var_0_object = var_1466_object; // 0x200a TMov
	var_1_object = var_1465_object; // 0x200b TMov
	var_3_string = 0; // 0x200c TMovB
	var_1471_int = 1; // 0x200d PushI
	if(var_1471_int == 0) goto Label_8229; // 0x200e JumpB
	var_1472_string = ""; // 0x200f PushV
	var_1472_string = "Neutral"; // 0x2010 MovS
	func_8259(var_1466_object, var_1472_string); // 0x2011 NEW_2
	var_1480_int = 540542; // 0x2013 PushI
	SetMessage(var_1480_int); // 0x2014 TObjFunc
	ClearReplies(); // 0x2016 TObjFunc
	var_1481_int = 540543; // 0x2018 PushI
	var_1482_int = -1; // 0x2019 PushI
	var_1483_int = 42552; // 0x201a PushI
	AddReply(var_1481_int, var_1482_int, var_1483_int); // 0x201b TObjFunc
	var_1484_int = 540796; // 0x201d PushI
	var_1485_int = -1; // 0x201e PushI
	var_1486_int = 42845; // 0x201f PushI
	AddReply(var_1484_int, var_1485_int, var_1486_int); // 0x2020 TObjFunc
	goto Label_8229; // 0x2022 Jump
	
Label_8229:
	var_1487_bool = 0; // 0x2025 PushV
	func_8923(var_1487_bool); // 0x2026 NEW_2
	if(var_1487_bool == 0) goto Label_8244; // 0x2028 JumpB
	
Label_8233:
	lshWaitForAnimEnd(); // 0x2029 Func
	var_1488_string = var_3_string; // 0x202b PushT
	if(var_1488_string == 0) goto Label_8238; // 0x202c JumpB
	goto Label_8243; // 0x202d Jump
	
Label_8243:
	goto Label_8258; // 0x2033 Jump
	
Label_8258:
	return 0; // 0x2042 Return
	
Label_8238:
	var_1489_string = ""; // 0x202e PushV
	var_1489_string = var_2_object; // 0x202f MovT
	func_8704(var_1489_string); // 0x2030 NEW_2
	goto Label_8233; // 0x2032 Jump
	
Label_8244:
	var_1490_string = "all"; // 0x2034 PushS
	var_1491_string = "idle"; // 0x2035 PushS
	PlayAnimation(var_1490_string, var_1491_string); // 0x2036 Func
	
Label_8248:
	WaitForAnimEnd(); // 0x2038 Func
	var_1492_string = var_3_string; // 0x203a PushT
	if(var_1492_string == 0) goto Label_8253; // 0x203b JumpB
	goto Label_8258; // 0x203c Jump
	
Label_8253:
	var_1493_string = "all"; // 0x203d PushS
	var_1494_string = "idle"; // 0x203e PushS
	PlayAnimation(var_1493_string, var_1494_string); // 0x203f Func
	goto Label_8248; // 0x2041 Jump
}


func_9227()
{
	var_81_object = Obj(); var_82_object = Obj(); // 0x240b PushV
	var_83_int = 0; var_84_string = ""; // 0x240c PushV
	var_84_string = "d5q03"; // 0x240d MovS
	func_8784(var_83_int, var_84_string); // 0x240e NEW_2
	var_87_int = 0; // 0x2410 PushI
	var_88_bool = var_83_int == var_87_int; // 0x2411 Eq
	if(var_88_bool == 0) goto Label_9268; // 0x2412 JumpB
	var_89_string = "d5q03"; // 0x2413 PushS
	var_90_int = 1; // 0x2414 PushI
	SetVariable(var_89_string, var_90_int); // 0x2415 Func
	var_91_object = Obj(); // 0x2417 PushV
	func_10260(var_91_object); // 0x2418 NEW_2
	var_82_object = var_91_object; // 0x2419 Mov
	var_98_string = "d5q03SavePrisoners"; // 0x241b PushS
	var_99_string = "pt_map_uprava_prison"; // 0x241c PushS
	var_100_int = 0; // 0x241d PushI
	var_101_int = 515370; // 0x241e PushI
	var_102_float = 0; // 0x241f PushV
	func_8895(var_102_float); // 0x2420 NEW_2
	AddMark(var_98_string, var_99_string, var_100_int, var_101_int, var_102_float); // 0x2422 ObjFunc
	func_10115(); // 0x2425 NEW_2
	func_10128(); // 0x2428 NEW_2
	var_136_object = Obj(); var_137_string = ""; // 0x242a PushV
	var_137_string = "quest_d5_03"; // 0x242b MovS
	func_8789(var_136_object, var_137_string); // 0x242c NEW_2
	var_144_bool = 0; var_145_string = ""; var_146_string = ""; // 0x242e PushV
	var_145_string = "quest_d5_03"; // 0x242f MovS
	var_146_string = "place_prisoners"; // 0x2430 MovS
	func_8883(var_144_bool, var_145_string, var_146_string); // 0x2431 NEW_2
	var_82_object = 0; // 0x2433 SetNull
	
Label_9268:
	return 2; // 0x2434 Return
}


func_13(var_0_object, var_95_int, var_96_object)
{
	var_98_object = Obj(); var_99_bool = 0; var_100_int = 0; var_101_bool = 0; var_102_object = Obj(); var_103_bool = 0; var_104_int = 0; var_105_bool = 0; // 0xd PushV
	var_0_object = var_96_object; // 0xe TMov
	var_106_bool = 0; var_107_object = Obj(); var_108_float = 0; // 0xf PushV
	var_107_object = var_96_object; // 0x10 Mov
	var_108_float = 70.0; // 0x11 MovF
	func_8479(var_107_object, var_108_float); // 0x12 NEW_2
	var_153_bool = var_106_bool == 0; // 0x14 Not
	if(var_153_bool == 0) goto Label_24; // 0x15 JumpB
	var_95_int = -2; // 0x16 MovI
	return 8; // 0x17 Return
	
Label_24:
	CreateDialog(var_102_object); // 0x18 Func
	var_154_int = 0; // 0x1a PushV
	func_8917(var_154_int); // 0x1b NEW_2
	SetNPCName(var_154_int); // 0x1d ObjFunc
	var_155_int = 0; // 0x1f PushV
	func_8915(var_155_int); // 0x20 NEW_2
	SetNPCDescription(var_155_int); // 0x22 ObjFunc
	var_156_string = ""; // 0x24 PushV
	func_8919(var_156_string); // 0x25 NEW_2
	SetPhoto(var_156_string); // 0x27 ObjFunc
	var_157_string = ""; // 0x29 PushV
	func_8921(var_157_string); // 0x2a NEW_2
	SetPhoto2(var_157_string); // 0x2c ObjFunc
	var_158_int = 0; // 0x2e PushV
	func_10310(var_158_int); // 0x2f NEW_2
	SetPlayerName(var_158_int); // 0x31 ObjFunc
	var_104_int = -1; // 0x33 MovI
	IsOverrideActive(var_103_bool); // 0x34 Func
	var_166_bool = var_103_bool; // 0x36 Push
	if(var_166_bool == 0) goto Label_58; // 0x37 JumpB
	var_95_int = -2; // 0x38 MovI
	return 8; // 0x39 Return
	
Label_58:
	DoDialog(var_102_object); // 0x3a Func
	var_167_bool = 0; var_168_object = Obj(); // 0x3c PushV
	var_169_object = Obj(); // 0x3d PushV
	func_8757(var_169_object); // 0x3e NEW_2
	var_168_object = var_169_object; // 0x3f Mov
	func_8566(var_167_bool, var_168_object); // 0x41 NEW_2
	var_262_object = Obj(); var_263_object = Obj(); // 0x43 PushV
	var_262_object = var_96_object; // 0x44 Mov
	var_263_object = var_102_object; // 0x45 Mov
	TaskCall(2); // 0x46 TaskCall
	func_94(var_264_object, var_265_object, var_266_string, var_267_bool, var_262_object, var_263_object); // 0x47 NEW_2
	TaskReturn(); // 0x48 TaskReturn
	IsDialogEnd(var_105_bool); // 0x4a ObjFunc
	
Label_76:
	var_315_bool = var_105_bool == 0; // 0x4c Not
	if(var_315_bool == 0) goto Label_83; // 0x4d JumpB
	sync(); // 0x4e Func
	IsDialogEnd(var_105_bool); // 0x50 ObjFunc
	goto Label_76; // 0x52 Jump
	
Label_83:
	var_316_object = Obj(); // 0x53 PushV
	var_316_object = var_96_object; // 0x54 Mov
	func_8548(); // 0x55 NEW_2
	StopDialog(var_102_object); // 0x57 Func
	GetReturnValue(var_104_int); // 0x59 ObjFunc
	var_95_int = var_104_int; // 0x5b Mov
	return 8; // 0x5c Return
}


func_8720(var_277_string, var_278_bool)
{
	var_281_bool = 0; var_282_float = 0; var_283_float = 0; var_284_bool = 0; var_285_float = 0; var_286_float = 0; // 0x2210 PushV
	lshHasAnimation(var_284_bool, var_277_string); // 0x2211 Func
	var_287_bool = var_284_bool; // 0x2213 Push
	if(var_287_bool == 0) goto Label_8730; // 0x2214 JumpB
	lshGetAnimTimes(var_277_string, var_285_float, var_286_float); // 0x2215 Func
	lshPlayAnimation(var_285_float, var_286_float, var_278_bool); // 0x2217 Func
	goto Label_8734; // 0x2219 Jump
	
Label_8734:
	return 6; // 0x221e Return
	
Label_8730:
	var_288_string = "Can't find lsh animation : "; // 0x221a PushS
	var_289_int = var_288_string + var_277_string; // 0x221b Add
	Trace(var_289_int); // 0x221c Func
}


func_9747(var_846_bool)
{
	var_848_int = 0; var_849_string = ""; // 0x2614 PushV
	var_849_string = "d5q03"; // 0x2615 MovS
	func_8784(var_848_int, var_849_string); // 0x2616 NEW_2
	var_850_int = 2; // 0x2618 PushI
	var_851_bool = var_848_int == var_850_int; // 0x2619 Eq
	if(var_851_bool == 0) goto Label_9757; // 0x261a JumpB
	var_846_bool = 1; // 0x261b MovB
	return 0; // 0x261c Return
	
Label_9757:
	var_846_bool = 0; // 0x261d MovB
	return 0; // 0x261e Return
}


func_10260(var_91_object)
{
	var_92_object = Obj(); var_93_object = Obj(); var_94_object = Obj(); var_95_object = Obj(); // 0x2814 PushV
	GetMainOutdoorScene(var_94_object); // 0x2815 Func
	var_96_bool = var_94_object == 0; // 0x2817 NullEq
	if(var_96_bool == 0) goto Label_10271; // 0x2818 JumpB
	var_97_string = "Can't find main outdoor scene"; // 0x2819 PushS
	Trace(var_97_string); // 0x281a Func
	var_95_object = 0; // 0x281c SetNull
	var_91_object = var_95_object; // 0x281d Mov
	return 4; // 0x281e Return
	
Label_10271:
	GetMap(var_95_object); // 0x281f ObjFunc
	var_91_object = var_95_object; // 0x2821 Mov
	return 4; // 0x2822 Return
}


func_8735(var_201_bool, var_202_string)
{
	var_203_bool = 0; var_204_bool = 0; // 0x221f PushV
	var_205_bool = 0; // 0x2220 PushV
	func_8923(var_205_bool); // 0x2221 NEW_2
	if(var_205_bool == 0) goto Label_8748; // 0x2223 JumpB
	lshHasSpeech(var_204_bool, var_202_string); // 0x2224 Func
	var_206_bool = var_204_bool; // 0x2226 Push
	if(var_206_bool == 0) goto Label_8748; // 0x2227 JumpB
	lshPlaySpeech(var_202_string); // 0x2228 Func
	var_201_bool = 1; // 0x222a MovB
	return 2; // 0x222b Return
	
Label_8748:
	var_201_bool = 0; // 0x222c MovB
	return 2; // 0x222d Return
}


func_9759(var_852_bool)
{
	var_854_int = 0; var_855_string = ""; // 0x2620 PushV
	var_855_string = "ood5Viktor1"; // 0x2621 MovS
	func_8784(var_854_int, var_855_string); // 0x2622 NEW_2
	var_856_int = 0; // 0x2624 PushI
	var_857_bool = var_854_int == var_856_int; // 0x2625 Eq
	if(var_857_bool == 0) goto Label_9769; // 0x2626 JumpB
	var_852_bool = 1; // 0x2627 MovB
	return 0; // 0x2628 Return
	
Label_9769:
	var_852_bool = 0; // 0x2629 MovB
	return 0; // 0x262a Return
}


func_10277(var_128_object, var_129_string, var_130_float)
{
	var_132_cvector = CVector(0,0,0); var_133_cvector = CVector(0,0,0); var_134_object = Obj(); var_135_bool = 0; var_136_cvector = CVector(0,0,0); var_137_cvector = CVector(0,0,0); var_138_object = Obj(); var_139_bool = 0; // 0x2825 PushV
	GetMainOutdoorScene(var_138_object); // 0x2826 Func
	var_140_bool = var_138_object == 0; // 0x2828 NullEq
	if(var_140_bool == 0) goto Label_10286; // 0x2829 JumpB
	var_141_string = "Can't find main outdoor scene"; // 0x282a PushS
	Trace(var_141_string); // 0x282b Func
	return 8; // 0x282d Return
	
Label_10286:
	GetLocator(var_129_string, var_139_bool, var_136_cvector, var_137_cvector); // 0x282e ObjFunc
	var_142_bool = var_139_bool == 0; // 0x2830 Not
	if(var_142_bool == 0) goto Label_10296; // 0x2831 JumpB
	var_143_string = "Warning: outdoor scene locator "; // 0x2832 PushS
	var_144_int = var_143_string + var_129_string; // 0x2833 Add
	var_145_string = " doesnt exist"; // 0x2834 PushS
	var_146_int = var_144_int + var_145_string; // 0x2835 Add
	Trace(var_146_int); // 0x2836 Func
	
Label_10296:
	GetMap(var_128_object); // 0x2838 ObjFunc
	var_147_bool = var_128_object == 0; // 0x283a NullEq
	if(var_147_bool == 0) goto Label_10304; // 0x283b JumpB
	var_148_string = "Can't find map"; // 0x283c PushS
	Trace(var_148_string); // 0x283d Func
	return 8; // 0x283f Return
	
Label_10304:
	var_149_float = GetByIndex(var_136_cvector, 0); // 0x2840 PushE
	var_150_float = GetByIndex(var_136_cvector, 2); // 0x2841 PushE
	SetMapParams(var_149_float, var_150_float, var_130_float); // 0x2842 ObjFunc
	return 8; // 0x2844 Return
}


func_2599(var_0_object, var_555_int, var_556_object)
{
	var_558_object = Obj(); var_559_bool = 0; var_560_int = 0; var_561_bool = 0; var_562_object = Obj(); var_563_bool = 0; var_564_int = 0; var_565_bool = 0; // 0xa27 PushV
	var_0_object = var_556_object; // 0xa28 TMov
	var_566_bool = 0; var_567_object = Obj(); var_568_float = 0; // 0xa29 PushV
	var_567_object = var_556_object; // 0xa2a Mov
	var_568_float = 70.0; // 0xa2b MovF
	func_8479(var_567_object, var_568_float); // 0xa2c NEW_2
	var_569_bool = var_566_bool == 0; // 0xa2e Not
	if(var_569_bool == 0) goto Label_2610; // 0xa2f JumpB
	var_555_int = -2; // 0xa30 MovI
	return 8; // 0xa31 Return
	
Label_2610:
	CreateDialog(var_562_object); // 0xa32 Func
	var_570_int = 0; // 0xa34 PushV
	func_8917(var_570_int); // 0xa35 NEW_2
	SetNPCName(var_570_int); // 0xa37 ObjFunc
	var_571_int = 0; // 0xa39 PushV
	func_8915(var_571_int); // 0xa3a NEW_2
	SetNPCDescription(var_571_int); // 0xa3c ObjFunc
	var_572_string = ""; // 0xa3e PushV
	func_8919(var_572_string); // 0xa3f NEW_2
	SetPhoto(var_572_string); // 0xa41 ObjFunc
	var_573_string = ""; // 0xa43 PushV
	func_8921(var_573_string); // 0xa44 NEW_2
	SetPhoto2(var_573_string); // 0xa46 ObjFunc
	var_574_int = 0; // 0xa48 PushV
	func_10310(var_574_int); // 0xa49 NEW_2
	SetPlayerName(var_574_int); // 0xa4b ObjFunc
	var_564_int = -1; // 0xa4d MovI
	IsOverrideActive(var_563_bool); // 0xa4e Func
	var_575_bool = var_563_bool; // 0xa50 Push
	if(var_575_bool == 0) goto Label_2644; // 0xa51 JumpB
	var_555_int = -2; // 0xa52 MovI
	return 8; // 0xa53 Return
	
Label_2644:
	DoDialog(var_562_object); // 0xa54 Func
	var_576_bool = 0; var_577_object = Obj(); // 0xa56 PushV
	var_578_object = Obj(); // 0xa57 PushV
	func_8757(var_578_object); // 0xa58 NEW_2
	var_577_object = var_578_object; // 0xa59 Mov
	func_8566(var_576_bool, var_577_object); // 0xa5b NEW_2
	var_579_object = Obj(); var_580_object = Obj(); // 0xa5d PushV
	var_579_object = var_556_object; // 0xa5e Mov
	var_580_object = var_562_object; // 0xa5f Mov
	TaskCall(10); // 0xa60 TaskCall
	func_2680(var_581_object, var_582_object, var_583_string, var_584_bool, var_579_object, var_580_object); // 0xa61 NEW_2
	TaskReturn(); // 0xa62 TaskReturn
	IsDialogEnd(var_565_bool); // 0xa64 ObjFunc
	
Label_2662:
	var_647_bool = var_565_bool == 0; // 0xa66 Not
	if(var_647_bool == 0) goto Label_2669; // 0xa67 JumpB
	sync(); // 0xa68 Func
	IsDialogEnd(var_565_bool); // 0xa6a ObjFunc
	goto Label_2662; // 0xa6c Jump
	
Label_2669:
	var_648_object = Obj(); // 0xa6d PushV
	var_648_object = var_556_object; // 0xa6e Mov
	func_8548(); // 0xa6f NEW_2
	StopDialog(var_562_object); // 0xa71 Func
	GetReturnValue(var_564_int); // 0xa73 ObjFunc
	var_555_int = var_564_int; // 0xa75 Mov
	return 8; // 0xa76 Return
}


func_9771(var_864_bool)
{
	var_866_int = 0; var_867_string = ""; // 0x262c PushV
	var_867_string = "ood5Viktor2"; // 0x262d MovS
	func_8784(var_866_int, var_867_string); // 0x262e NEW_2
	var_868_int = 0; // 0x2630 PushI
	var_869_bool = var_866_int == var_868_int; // 0x2631 Eq
	if(var_869_bool == 0) goto Label_9781; // 0x2632 JumpB
	var_864_bool = 1; // 0x2633 MovB
	return 0; // 0x2634 Return
	
Label_9781:
	var_864_bool = 0; // 0x2635 MovB
	return 0; // 0x2636 Return
}


func_8750()
{
	var_76_bool = 0; // 0x222e PushV
	func_8923(var_76_bool); // 0x222f NEW_2
	if(var_76_bool == 0) goto Label_8756; // 0x2231 JumpB
	lshStopSpeech(); // 0x2232 Func
	
Label_8756:
	return 0; // 0x2234 Return
}


func_8757(var_169_object)
{
	var_170_object = Obj(); var_171_object = Obj(); // 0x2235 PushV
	self(var_171_object); // 0x2236 Func
	var_169_object = var_171_object; // 0x2238 Mov
	return 2; // 0x2239 Return
}


func_9269()
{
	var_158_string = "ood5Viktor1"; // 0x2436 PushS
	var_159_int = 1; // 0x2437 PushI
	SetVariable(var_158_string, var_159_int); // 0x2438 Func
	return 0; // 0x243a Return
}


func_9783(var_789_bool)
{
	var_791_int = 0; var_792_string = ""; // 0x2638 PushV
	var_792_string = "ood5Viktor3"; // 0x2639 MovS
	func_8784(var_791_int, var_792_string); // 0x263a NEW_2
	var_793_int = 0; // 0x263c PushI
	var_794_bool = var_791_int == var_793_int; // 0x263d Eq
	if(var_794_bool == 0) goto Label_9793; // 0x263e JumpB
	var_789_bool = 1; // 0x263f MovB
	return 0; // 0x2640 Return
	
Label_9793:
	var_789_bool = 0; // 0x2641 MovB
	return 0; // 0x2642 Return
}


func_9275()
{
	var_197_string = "ood5Viktor2"; // 0x243c PushS
	var_198_int = 1; // 0x243d PushI
	SetVariable(var_197_string, var_198_int); // 0x243e Func
	return 0; // 0x2440 Return
}


func_8763(var_133_cvector, var_134_cvector)
{
	var_136_float = 0; var_137_float = 0; // 0x223b PushV
	var_138_int = var_134_cvector | var_134_cvector; // 0x223c Or
	var_137_float = sqrt(var_138_int); // 0x223d Sqrt2
	var_139_float = 0.0; // 0x223e PushF
	var_140_bool = var_137_float < var_139_float; // 0x223f LT
	if(var_140_bool == 0) goto Label_8771; // 0x2240 JumpB
	var_133_cvector = CVector(0.0, 0.0, 0.0); // 0x2241 MovV
	return 2; // 0x2242 Return
	
Label_8771:
	var_133_cvector = var_134_cvector / var_134_cvector; // 0x2243 Div2
	return 2; // 0x2244 Return
}


func_9281(var_203_object)
{
	var_205_bool = 0; var_206_object = Obj(); var_207_float = 0; // 0x2442 PushV
	var_206_object = var_203_object; // 0x2443 Mov
	var_207_float = 0.3; // 0x2444 MovF
	func_8838(var_205_bool, var_206_object, var_207_float); // 0x2445 NEW_2
	return 0; // 0x2447 Return
}


func_2114(var_0_object, var_1_object, var_2_object, var_3_string, var_489_object, var_490_object)
{
	var_0_object = var_490_object; // 0x843 TMov
	var_1_object = var_489_object; // 0x844 TMov
	var_3_string = 0; // 0x845 TMovB
	var_495_int = 1; // 0x846 PushI
	if(var_495_int == 0) goto Label_2180; // 0x847 JumpB
	var_496_string = ""; // 0x848 PushV
	var_496_string = "Neutral"; // 0x849 MovS
	func_2210(var_490_object, var_496_string); // 0x84a NEW_2
	var_504_int = 506924; // 0x84c PushI
	SetMessage(var_504_int); // 0x84d TObjFunc
	ClearReplies(); // 0x84f TObjFunc
	var_505_bool = 0; // 0x851 PushV
	var_505_bool = 0; // 0x852 MovB
	var_506_bool = 0; // 0x853 PushV
	var_506_bool = 0; // 0x854 MovB
	var_507_bool = 0; var_508_object = Obj(); // 0x855 PushV
	var_508_object = var_1_object; // 0x856 MovT
	func_9603(var_508_object); // 0x857 NEW_2
	if(var_507_bool == 0) goto Label_2144; // 0x859 JumpB
	var_513_bool = 0; var_514_object = Obj(); // 0x85a PushV
	var_514_object = var_1_object; // 0x85b MovT
	func_9639(var_514_object); // 0x85c NEW_2
	if(var_513_bool == 0) goto Label_2144; // 0x85e JumpB
	var_506_bool = 1; // 0x85f MovB
	
Label_2144:
	if(var_506_bool == 0) goto Label_2151; // 0x860 JumpB
	var_519_bool = 0; var_520_object = Obj(); // 0x861 PushV
	var_520_object = var_1_object; // 0x862 MovT
	func_9627(var_520_object); // 0x863 NEW_2
	if(var_519_bool == 0) goto Label_2151; // 0x865 JumpB
	var_505_bool = 1; // 0x866 MovB
	
Label_2151:
	if(var_505_bool == 0) goto Label_2157; // 0x867 JumpB
	var_525_int = 506925; // 0x868 PushI
	var_526_int = 7632; // 0x869 PushI
	var_527_int = 7631; // 0x86a PushI
	AddReply(var_525_int, var_526_int, var_527_int); // 0x86b TObjFunc
	
Label_2157:
	var_528_bool = 0; var_529_object = Obj(); // 0x86d PushV
	var_529_object = var_1_object; // 0x86e MovT
	func_9591(var_529_object); // 0x86f NEW_2
	if(var_528_bool == 0) goto Label_2167; // 0x871 JumpB
	var_534_int = 532771; // 0x872 PushI
	var_535_int = 10476; // 0x873 PushI
	var_536_int = 34238; // 0x874 PushI
	AddReply(var_534_int, var_535_int, var_536_int); // 0x875 TObjFunc
	
Label_2167:
	var_537_int = 507777; // 0x877 PushI
	var_538_int = -1; // 0x878 PushI
	var_539_int = 8579; // 0x879 PushI
	AddReply(var_537_int, var_538_int, var_539_int); // 0x87a TObjFunc
	var_540_int = 532772; // 0x87c PushI
	var_541_int = -1; // 0x87d PushI
	var_542_int = 34239; // 0x87e PushI
	AddReply(var_540_int, var_541_int, var_542_int); // 0x87f TObjFunc
	goto Label_2180; // 0x881 Jump
	
Label_2180:
	var_543_bool = 0; // 0x884 PushV
	func_8923(var_543_bool); // 0x885 NEW_2
	if(var_543_bool == 0) goto Label_2195; // 0x887 JumpB
	
Label_2184:
	lshWaitForAnimEnd(); // 0x888 Func
	var_544_string = var_3_string; // 0x88a PushT
	if(var_544_string == 0) goto Label_2189; // 0x88b JumpB
	goto Label_2194; // 0x88c Jump
	
Label_2194:
	goto Label_2209; // 0x892 Jump
	
Label_2209:
	return 0; // 0x8a1 Return
	
Label_2189:
	var_545_string = ""; // 0x88d PushV
	var_545_string = var_2_object; // 0x88e MovT
	func_8704(var_545_string); // 0x88f NEW_2
	goto Label_2184; // 0x891 Jump
	
Label_2195:
	var_546_string = "all"; // 0x893 PushS
	var_547_string = "idle"; // 0x894 PushS
	PlayAnimation(var_546_string, var_547_string); // 0x895 Func
	
Label_2199:
	WaitForAnimEnd(); // 0x897 Func
	var_548_string = var_3_string; // 0x899 PushT
	if(var_548_string == 0) goto Label_2204; // 0x89a JumpB
	goto Label_2209; // 0x89b Jump
	
Label_2204:
	var_549_string = "all"; // 0x89c PushS
	var_550_string = "idle"; // 0x89d PushS
	PlayAnimation(var_549_string, var_550_string); // 0x89e Func
	goto Label_2199; // 0x8a0 Jump
}


func_9795(var_911_bool)
{
	var_913_int = 0; var_914_string = ""; // 0x2644 PushV
	var_914_string = "ood6Viktor1"; // 0x2645 MovS
	func_8784(var_913_int, var_914_string); // 0x2646 NEW_2
	var_915_int = 0; // 0x2648 PushI
	var_916_bool = var_913_int == var_915_int; // 0x2649 Eq
	if(var_916_bool == 0) goto Label_9805; // 0x264a JumpB
	var_911_bool = 1; // 0x264b MovB
	return 0; // 0x264c Return
	
Label_9805:
	var_911_bool = 0; // 0x264d MovB
	return 0; // 0x264e Return
}


func_8259(var_2_object, var_1472_string)
{
	var_1473_bool = 0; // 0x2044 PushV
	func_8923(var_1473_bool); // 0x2045 NEW_2
	var_1474_bool = var_1473_bool == 0; // 0x2047 Not
	if(var_1474_bool == 0) goto Label_8266; // 0x2048 JumpB
	return 0; // 0x2049 Return
	
Label_8266:
	var_1475_bool = var_1472_string == var_2_object; // 0x204a Eq
	if(var_1475_bool == 0) goto Label_8269; // 0x204b JumpB
	return 0; // 0x204c Return
	
Label_8269:
	var_1476_string = ""; var_1477_bool = 0; // 0x204d PushV
	var_1476_string = var_1472_string; // 0x204e Mov
	var_1478_string = ""; // 0x204f PushS
	var_1479_bool = var_1472_string == var_1478_string; // 0x2050 Eq
	if(var_1479_bool == 0) goto Label_8276; // 0x2051 JumpB
	var_1477_bool = 0; // 0x2052 MovB
	goto Label_8277; // 0x2053 Jump
	
Label_8277:
	func_8720(var_1476_string, var_1477_bool); // 0x2055 NEW_2
	var_2_object = var_1472_string; // 0x2057 TMov
	return 0; // 0x2058 Return
	
Label_8276:
	var_1477_bool = 1; // 0x2054 MovB
}


func_8773(var_234_float, var_235_float, var_236_float, var_237_float)
{
	var_238_bool = var_235_float < var_236_float; // 0x2246 LT
	if(var_238_bool == 0) goto Label_8778; // 0x2247 JumpB
	var_234_float = var_236_float; // 0x2248 Mov
	return 0; // 0x2249 Return
	
Label_8778:
	var_239_bool = var_235_float > var_237_float; // 0x224a GT
	if(var_239_bool == 0) goto Label_8782; // 0x224b JumpB
	var_234_float = var_237_float; // 0x224c Mov
	return 0; // 0x224d Return
	
Label_8782:
	var_234_float = var_235_float; // 0x224e Mov
	return 0; // 0x224f Return
}


func_10310(var_158_int)
{
	var_159_int = 0; var_160_int = 0; // 0x2846 PushV
	var_161_string = "branch"; // 0x2847 PushS
	GetVariable(var_161_string, var_160_int); // 0x2848 Func
	var_162_int = 0; // 0x284a PushI
	var_163_bool = var_160_int == var_162_int; // 0x284b Eq
	if(var_163_bool == 0) goto Label_10320; // 0x284c JumpB
	var_158_int = 1; // 0x284d MovI
	return 2; // 0x284e Return
	
Label_10320:
	var_164_int = 1; // 0x2850 PushI
	var_165_bool = var_160_int == var_164_int; // 0x2851 Eq
	if(var_165_bool == 0) goto Label_10325; // 0x2852 JumpB
	var_158_int = 2; // 0x2853 MovI
	return 2; // 0x2854 Return
	
Label_10325:
	var_158_int = 3; // 0x2855 MovI
	return 2; // 0x2856 Return
}


func_9288()
{
	var_811_string = "ood5Viktor3"; // 0x2449 PushS
	var_812_int = 1; // 0x244a PushI
	SetVariable(var_811_string, var_812_int); // 0x244b Func
	return 0; // 0x244d Return
}


func_9294()
{
	var_150_string = "ood6Viktor1"; // 0x244f PushS
	var_151_int = 1; // 0x2450 PushI
	SetVariable(var_150_string, var_151_int); // 0x2451 Func
	return 0; // 0x2453 Return
}


func_5199(var_0_object, var_1_object, var_2_object, var_3_string, var_1041_object, var_1042_object)
{
	var_0_object = var_1042_object; // 0x1450 TMov
	var_1_object = var_1041_object; // 0x1451 TMov
	var_3_string = 0; // 0x1452 TMovB
	var_1047_int = 1; // 0x1453 PushI
	if(var_1047_int == 0) goto Label_5266; // 0x1454 JumpB
	var_1048_bool = 0; // 0x1455 PushV
	var_1048_bool = 0; // 0x1456 MovB
	var_1049_bool = 0; var_1050_object = Obj(); // 0x1457 PushV
	var_1050_object = var_1_object; // 0x1458 MovT
	func_9819(var_1050_object); // 0x1459 NEW_2
	if(var_1049_bool == 0) goto Label_5218; // 0x145b JumpB
	var_1055_bool = 0; var_1056_object = Obj(); // 0x145c PushV
	var_1056_object = var_1_object; // 0x145d MovT
	func_9807(var_1056_object); // 0x145e NEW_2
	if(var_1055_bool == 0) goto Label_5218; // 0x1460 JumpB
	var_1048_bool = 1; // 0x1461 MovB
	
Label_5218:
	if(var_1048_bool == 0) goto Label_5244; // 0x1462 JumpB
	var_1061_object = Obj(); var_1062_object = Obj(); // 0x1463 PushV
	var_1061_object = var_1_object; // 0x1464 MovT
	var_1062_object = var_0_object; // 0x1465 MovT
	func_9347(); // 0x1466 NEW_2
	var_1065_string = ""; // 0x1468 PushV
	var_1065_string = "Neutral"; // 0x1469 MovS
	func_5296(var_1042_object, var_1065_string); // 0x146a NEW_2
	var_1073_int = 512275; // 0x146c PushI
	SetMessage(var_1073_int); // 0x146d TObjFunc
	ClearReplies(); // 0x146f TObjFunc
	var_1074_int = 512276; // 0x1471 PushI
	var_1075_int = 13435; // 0x1472 PushI
	var_1076_int = 13433; // 0x1473 PushI
	AddReply(var_1074_int, var_1075_int, var_1076_int); // 0x1474 TObjFunc
	var_1077_int = 512277; // 0x1476 PushI
	var_1078_int = 13435; // 0x1477 PushI
	var_1079_int = 13434; // 0x1478 PushI
	AddReply(var_1077_int, var_1078_int, var_1079_int); // 0x1479 TObjFunc
	goto Label_5266; // 0x147b Jump
	
Label_5266:
	var_1080_bool = 0; // 0x1492 PushV
	func_8923(var_1080_bool); // 0x1493 NEW_2
	if(var_1080_bool == 0) goto Label_5281; // 0x1495 JumpB
	
Label_5270:
	lshWaitForAnimEnd(); // 0x1496 Func
	var_1081_string = var_3_string; // 0x1498 PushT
	if(var_1081_string == 0) goto Label_5275; // 0x1499 JumpB
	goto Label_5280; // 0x149a Jump
	
Label_5280:
	goto Label_5295; // 0x14a0 Jump
	
Label_5295:
	return 0; // 0x14af Return
	
Label_5275:
	var_1082_string = ""; // 0x149b PushV
	var_1082_string = var_2_object; // 0x149c MovT
	func_8704(var_1082_string); // 0x149d NEW_2
	goto Label_5270; // 0x149f Jump
	
Label_5281:
	var_1083_string = "all"; // 0x14a1 PushS
	var_1084_string = "idle"; // 0x14a2 PushS
	PlayAnimation(var_1083_string, var_1084_string); // 0x14a3 Func
	
Label_5285:
	WaitForAnimEnd(); // 0x14a5 Func
	var_1085_string = var_3_string; // 0x14a7 PushT
	if(var_1085_string == 0) goto Label_5290; // 0x14a8 JumpB
	goto Label_5295; // 0x14a9 Jump
	
Label_5290:
	var_1086_string = "all"; // 0x14aa PushS
	var_1087_string = "idle"; // 0x14ab PushS
	PlayAnimation(var_1086_string, var_1087_string); // 0x14ac Func
	goto Label_5285; // 0x14ae Jump
	
Label_5244:
	var_1088_string = ""; // 0x147c PushV
	var_1088_string = "Neutral"; // 0x147d MovS
	func_5296(var_1042_object, var_1088_string); // 0x147e NEW_2
	var_1089_int = 513779; // 0x1480 PushI
	SetMessage(var_1089_int); // 0x1481 TObjFunc
	ClearReplies(); // 0x1483 TObjFunc
	var_1090_int = 513780; // 0x1485 PushI
	var_1091_int = -1; // 0x1486 PushI
	var_1092_int = 15016; // 0x1487 PushI
	AddReply(var_1090_int, var_1091_int, var_1092_int); // 0x1488 TObjFunc
	var_1093_int = 541598; // 0x148a PushI
	var_1094_int = -1; // 0x148b PushI
	var_1095_int = 43762; // 0x148c PushI
	AddReply(var_1093_int, var_1094_int, var_1095_int); // 0x148d TObjFunc
	goto Label_5266; // 0x148f Jump
}


func_9807(var_1055_bool)
{
	var_1057_int = 0; var_1058_string = ""; // 0x2650 PushV
	var_1058_string = "ood8Viktor1"; // 0x2651 MovS
	func_8784(var_1057_int, var_1058_string); // 0x2652 NEW_2
	var_1059_int = 0; // 0x2654 PushI
	var_1060_bool = var_1057_int == var_1059_int; // 0x2655 Eq
	if(var_1060_bool == 0) goto Label_9817; // 0x2656 JumpB
	var_1055_bool = 1; // 0x2657 MovB
	return 0; // 0x2658 Return
	
Label_9817:
	var_1055_bool = 0; // 0x2659 MovB
	return 0; // 0x265a Return
}


func_8784(var_361_int, var_362_string)
{
	var_363_int = 0; var_364_int = 0; // 0x2250 PushV
	GetVariable(var_362_string, var_364_int); // 0x2251 Func
	var_361_int = var_364_int; // 0x2253 Mov
	return 2; // 0x2254 Return
}


func_9300()
{
	var_81_object = Obj(); var_82_object = Obj(); // 0x2454 PushV
	var_83_string = "d6q01"; // 0x2455 PushS
	var_84_int = 1; // 0x2456 PushI
	SetVariable(var_83_string, var_84_int); // 0x2457 Func
	var_85_object = Obj(); // 0x2459 PushV
	func_10260(var_85_object); // 0x245a NEW_2
	var_82_object = var_85_object; // 0x245b Mov
	var_92_string = "d6q01ViktorGotoAlexandr"; // 0x245d PushS
	var_93_string = "pt_map_alexandr"; // 0x245e PushS
	var_94_int = 1; // 0x245f PushI
	var_95_int = 515383; // 0x2460 PushI
	var_96_float = 0; // 0x2461 PushV
	func_8895(var_96_float); // 0x2462 NEW_2
	AddMark(var_92_string, var_93_string, var_94_int, var_95_int, var_96_float); // 0x2464 ObjFunc
	var_99_string = "d6q01ViktorGotoBigVlad"; // 0x2466 PushS
	var_100_string = "pt_map_bigvlad"; // 0x2467 PushS
	var_101_int = 1; // 0x2468 PushI
	var_102_int = 515384; // 0x2469 PushI
	var_103_float = 0; // 0x246a PushV
	func_8895(var_103_float); // 0x246b NEW_2
	AddMark(var_99_string, var_100_string, var_101_int, var_102_int, var_103_float); // 0x246d ObjFunc
	var_104_string = "d6q01ViktorGotoAlxBigSelf"; // 0x246f PushS
	var_105_string = "pt_map_viktor"; // 0x2470 PushS
	var_106_int = 1; // 0x2471 PushI
	var_107_int = 515385; // 0x2472 PushI
	var_108_float = 0; // 0x2473 PushV
	func_8895(var_108_float); // 0x2474 NEW_2
	AddMark(var_104_string, var_105_string, var_106_int, var_107_int, var_108_float); // 0x2476 ObjFunc
	func_10141(); // 0x2479 NEW_2
	func_10167(); // 0x247c NEW_2
	func_10154(); // 0x247f NEW_2
	return 2; // 0x2481 Return
}


func_8789(var_114_object, var_115_string)
{
	var_116_object = Obj(); var_117_object = Obj(); var_118_object = Obj(); var_119_object = Obj(); // 0x2255 PushV
	GetMainOutdoorScene(var_118_object); // 0x2256 Func
	var_120_string = ".bin"; // 0x2258 PushS
	var_121_int = var_115_string + var_120_string; // 0x2259 Add
	AddBlankActor(var_119_object, var_118_object, var_115_string, var_121_int); // 0x225a Func
	var_114_object = var_119_object; // 0x225c Mov
	return 4; // 0x225d Return
}


func_10327(var_92_object)
{
	var_93_bool = GlobalVars[1]; // 0x2858 PushGE
	var_94_bool = var_93_bool == 0; // 0x2859 Not
	if(var_94_bool == 0) goto Label_10340; // 0x285a JumpB
	var_95_int = 0; var_96_object = Obj(); // 0x285b PushV
	var_96_object = var_92_object; // 0x285c Mov
	TaskCall(1); // 0x285d TaskCall
	func_13(var_97_object, var_95_int, var_96_object); // 0x285e NEW_2
	TaskReturn(); // 0x285f TaskReturn
	var_324_bool = GlobalVars[1]; // 0x2861 PushGE
	var_324_bool = 1; // 0x2862 MovB
	GlobalVars[1] = var_324_bool; // 0x2863 PopGE
	
Label_10340:
	var_325_bool = 0; var_326_int = 0; // 0x2864 PushV
	var_326_int = 1; // 0x2865 MovI
	func_8909(var_325_bool, var_326_int); // 0x2866 NEW_2
	if(var_325_bool == 0) goto Label_10352; // 0x2868 JumpB
	var_328_int = 0; var_329_object = Obj(); // 0x2869 PushV
	var_329_object = var_92_object; // 0x286a Mov
	TaskCall(5); // 0x286b TaskCall
	func_738(var_330_object, var_328_int, var_329_object); // 0x286c NEW_2
	TaskReturn(); // 0x286d TaskReturn
	return 0; // 0x286f Return
	
Label_10352:
	var_463_bool = 0; var_464_int = 0; // 0x2870 PushV
	var_464_int = 2; // 0x2871 MovI
	func_8909(var_463_bool, var_464_int); // 0x2872 NEW_2
	if(var_463_bool == 0) goto Label_10364; // 0x2874 JumpB
	var_465_int = 0; var_466_object = Obj(); // 0x2875 PushV
	var_466_object = var_92_object; // 0x2876 Mov
	TaskCall(7); // 0x2877 TaskCall
	func_2033(var_467_object, var_465_int, var_466_object); // 0x2878 NEW_2
	TaskReturn(); // 0x2879 TaskReturn
	return 0; // 0x287b Return
	
Label_10364:
	var_553_bool = 0; var_554_int = 0; // 0x287c PushV
	var_554_int = 3; // 0x287d MovI
	func_8909(var_553_bool, var_554_int); // 0x287e NEW_2
	if(var_553_bool == 0) goto Label_10376; // 0x2880 JumpB
	var_555_int = 0; var_556_object = Obj(); // 0x2881 PushV
	var_556_object = var_92_object; // 0x2882 Mov
	TaskCall(9); // 0x2883 TaskCall
	func_2599(var_557_object, var_555_int, var_556_object); // 0x2884 NEW_2
	TaskReturn(); // 0x2885 TaskReturn
	return 0; // 0x2887 Return
	
Label_10376:
	var_649_bool = 0; var_650_int = 0; // 0x2888 PushV
	var_650_int = 4; // 0x2889 MovI
	func_8909(var_649_bool, var_650_int); // 0x288a NEW_2
	if(var_649_bool == 0) goto Label_10388; // 0x288c JumpB
	var_651_int = 0; var_652_object = Obj(); // 0x288d PushV
	var_652_object = var_92_object; // 0x288e Mov
	TaskCall(11); // 0x288f TaskCall
	func_3507(var_653_object, var_651_int, var_652_object); // 0x2890 NEW_2
	TaskReturn(); // 0x2891 TaskReturn
	return 0; // 0x2893 Return
	
Label_10388:
	var_754_bool = 0; var_755_int = 0; // 0x2894 PushV
	var_755_int = 5; // 0x2895 MovI
	func_8909(var_754_bool, var_755_int); // 0x2896 NEW_2
	if(var_754_bool == 0) goto Label_10400; // 0x2898 JumpB
	var_756_int = 0; var_757_object = Obj(); // 0x2899 PushV
	var_757_object = var_92_object; // 0x289a Mov
	TaskCall(13); // 0x289b TaskCall
	func_4024(var_758_object, var_756_int, var_757_object); // 0x289c NEW_2
	TaskReturn(); // 0x289d TaskReturn
	return 0; // 0x289f Return
	
Label_10400:
	var_878_bool = 0; var_879_int = 0; // 0x28a0 PushV
	var_879_int = 6; // 0x28a1 MovI
	func_8909(var_878_bool, var_879_int); // 0x28a2 NEW_2
	if(var_878_bool == 0) goto Label_10412; // 0x28a4 JumpB
	var_880_int = 0; var_881_object = Obj(); // 0x28a5 PushV
	var_881_object = var_92_object; // 0x28a6 Mov
	TaskCall(3); // 0x28a7 TaskCall
	func_277(var_882_object, var_880_int, var_881_object); // 0x28a8 NEW_2
	TaskReturn(); // 0x28a9 TaskReturn
	return 0; // 0x28ab Return
	
Label_10412:
	var_951_bool = 0; var_952_int = 0; // 0x28ac PushV
	var_952_int = 7; // 0x28ad MovI
	func_8909(var_951_bool, var_952_int); // 0x28ae NEW_2
	if(var_951_bool == 0) goto Label_10424; // 0x28b0 JumpB
	var_953_int = 0; var_954_object = Obj(); // 0x28b1 PushV
	var_954_object = var_92_object; // 0x28b2 Mov
	TaskCall(15); // 0x28b3 TaskCall
	func_4758(var_955_object, var_953_int, var_954_object); // 0x28b4 NEW_2
	TaskReturn(); // 0x28b5 TaskReturn
	return 0; // 0x28b7 Return
	
Label_10424:
	var_1015_bool = 0; var_1016_int = 0; // 0x28b8 PushV
	var_1016_int = 8; // 0x28b9 MovI
	func_8909(var_1015_bool, var_1016_int); // 0x28ba NEW_2
	if(var_1015_bool == 0) goto Label_10436; // 0x28bc JumpB
	var_1017_int = 0; var_1018_object = Obj(); // 0x28bd PushV
	var_1018_object = var_92_object; // 0x28be Mov
	TaskCall(17); // 0x28bf TaskCall
	func_5118(var_1019_object, var_1017_int, var_1018_object); // 0x28c0 NEW_2
	TaskReturn(); // 0x28c1 TaskReturn
	return 0; // 0x28c3 Return
	
Label_10436:
	var_1098_bool = 0; var_1099_int = 0; // 0x28c4 PushV
	var_1099_int = 9; // 0x28c5 MovI
	func_8909(var_1098_bool, var_1099_int); // 0x28c6 NEW_2
	if(var_1098_bool == 0) goto Label_10448; // 0x28c8 JumpB
	var_1100_int = 0; var_1101_object = Obj(); // 0x28c9 PushV
	var_1101_object = var_92_object; // 0x28ca Mov
	TaskCall(19); // 0x28cb TaskCall
	func_5545(var_1102_object, var_1100_int, var_1101_object); // 0x28cc NEW_2
	TaskReturn(); // 0x28cd TaskReturn
	return 0; // 0x28cf Return
	
Label_10448:
	var_1200_bool = 0; var_1201_int = 0; // 0x28d0 PushV
	var_1201_int = 10; // 0x28d1 MovI
	func_8909(var_1200_bool, var_1201_int); // 0x28d2 NEW_2
	if(var_1200_bool == 0) goto Label_10460; // 0x28d4 JumpB
	var_1202_int = 0; var_1203_object = Obj(); // 0x28d5 PushV
	var_1203_object = var_92_object; // 0x28d6 Mov
	TaskCall(23); // 0x28d7 TaskCall
	func_7277(var_1204_object, var_1202_int, var_1203_object); // 0x28d8 NEW_2
	TaskReturn(); // 0x28d9 TaskReturn
	return 0; // 0x28db Return
	
Label_10460:
	var_1267_bool = 0; var_1268_int = 0; // 0x28dc PushV
	var_1268_int = 11; // 0x28dd MovI
	func_8909(var_1267_bool, var_1268_int); // 0x28de NEW_2
	if(var_1267_bool == 0) goto Label_10472; // 0x28e0 JumpB
	var_1269_int = 0; var_1270_object = Obj(); // 0x28e1 PushV
	var_1270_object = var_92_object; // 0x28e2 Mov
	TaskCall(21); // 0x28e3 TaskCall
	func_6387(var_1271_object, var_1269_int, var_1270_object); // 0x28e4 NEW_2
	TaskReturn(); // 0x28e5 TaskReturn
	return 0; // 0x28e7 Return
	
Label_10472:
	var_1383_bool = 0; var_1384_int = 0; // 0x28e8 PushV
	var_1384_int = 12; // 0x28e9 MovI
	func_8909(var_1383_bool, var_1384_int); // 0x28ea NEW_2
	if(var_1383_bool == 0) goto Label_10484; // 0x28ec JumpB
	var_1385_int = 0; var_1386_object = Obj(); // 0x28ed PushV
	var_1386_object = var_92_object; // 0x28ee Mov
	TaskCall(25); // 0x28ef TaskCall
	func_7807(var_1387_object, var_1385_int, var_1386_object); // 0x28f0 NEW_2
	TaskReturn(); // 0x28f1 TaskReturn
	return 0; // 0x28f3 Return
	
Label_10484:
	var_1441_int = 0; var_1442_object = Obj(); // 0x28f4 PushV
	var_1442_object = var_92_object; // 0x28f5 Mov
	TaskCall(27); // 0x28f6 TaskCall
	func_8120(var_1443_object, var_1441_int, var_1442_object); // 0x28f7 NEW_2
	TaskReturn(); // 0x28f8 TaskReturn
	return 0; // 0x28fa Return
}


func_9819(var_1049_bool)
{
	var_1051_int = 0; var_1052_string = ""; // 0x265c PushV
	var_1052_string = "d8KainIsReason"; // 0x265d MovS
	func_8784(var_1051_int, var_1052_string); // 0x265e NEW_2
	var_1053_int = 1; // 0x2660 PushI
	var_1054_bool = var_1051_int == var_1053_int; // 0x2661 Eq
	if(var_1054_bool == 0) goto Label_9829; // 0x2662 JumpB
	var_1049_bool = 1; // 0x2663 MovB
	return 0; // 0x2664 Return
	
Label_9829:
	var_1049_bool = 0; // 0x2665 MovB
	return 0; // 0x2666 Return
}


func_94(var_0_object, var_1_object, var_2_object, var_3_string, var_262_object, var_263_object)
{
	var_0_object = var_263_object; // 0x5f TMov
	var_1_object = var_262_object; // 0x60 TMov
	var_3_string = 0; // 0x61 TMovB
	var_268_int = 1; // 0x62 PushI
	if(var_268_int == 0) goto Label_127; // 0x63 JumpB
	var_269_object = Obj(); var_270_object = Obj(); // 0x64 PushV
	var_269_object = var_1_object; // 0x65 MovT
	var_270_object = var_0_object; // 0x66 MovT
	func_9123(); // 0x67 NEW_2
	var_273_string = ""; // 0x69 PushV
	var_273_string = "Neutral"; // 0x6a MovS
	func_157(var_263_object, var_273_string); // 0x6b NEW_2
	var_290_int = 501575; // 0x6d PushI
	SetMessage(var_290_int); // 0x6e TObjFunc
	ClearReplies(); // 0x70 TObjFunc
	var_291_int = 501576; // 0x72 PushI
	var_292_int = 1782; // 0x73 PushI
	var_293_int = 1780; // 0x74 PushI
	AddReply(var_291_int, var_292_int, var_293_int); // 0x75 TObjFunc
	var_294_int = 501577; // 0x77 PushI
	var_295_int = 1782; // 0x78 PushI
	var_296_int = 1781; // 0x79 PushI
	AddReply(var_294_int, var_295_int, var_296_int); // 0x7a TObjFunc
	goto Label_127; // 0x7c Jump
	
Label_127:
	var_297_bool = 0; // 0x7f PushV
	func_8923(var_297_bool); // 0x80 NEW_2
	if(var_297_bool == 0) goto Label_142; // 0x82 JumpB
	
Label_131:
	lshWaitForAnimEnd(); // 0x83 Func
	var_298_string = var_3_string; // 0x85 PushT
	if(var_298_string == 0) goto Label_136; // 0x86 JumpB
	goto Label_141; // 0x87 Jump
	
Label_141:
	goto Label_156; // 0x8d Jump
	
Label_156:
	return 0; // 0x9c Return
	
Label_136:
	var_299_string = ""; // 0x88 PushV
	var_299_string = var_2_object; // 0x89 MovT
	func_8704(var_299_string); // 0x8a NEW_2
	goto Label_131; // 0x8c Jump
	
Label_142:
	var_310_string = "all"; // 0x8e PushS
	var_311_string = "idle"; // 0x8f PushS
	PlayAnimation(var_310_string, var_311_string); // 0x90 Func
	
Label_146:
	WaitForAnimEnd(); // 0x92 Func
	var_312_string = var_3_string; // 0x94 PushT
	if(var_312_string == 0) goto Label_151; // 0x95 JumpB
	goto Label_156; // 0x96 Jump
	
Label_151:
	var_313_string = "all"; // 0x97 PushS
	var_314_string = "idle"; // 0x98 PushS
	PlayAnimation(var_313_string, var_314_string); // 0x99 Func
	goto Label_146; // 0x9b Jump
}


func_8800(var_122_int, var_123_int)
{
	var_124_object = Obj(); var_125_object = Obj(); // 0x2260 PushV
	CreateIntVector(var_125_object); // 0x2261 Func
	add(var_122_int); // 0x2263 ObjFunc
	add(var_123_int); // 0x2265 ObjFunc
	var_126_int = 3; // 0x2267 PushI
	SendWorldWndMessage(var_126_int, var_125_object); // 0x2268 Func
	return 2; // 0x226a Return
}


func_9831(var_1131_bool)
{
	var_1133_int = 0; var_1134_string = ""; // 0x2668 PushV
	var_1134_string = "ood9Viktor1"; // 0x2669 MovS
	func_8784(var_1133_int, var_1134_string); // 0x266a NEW_2
	var_1135_int = 0; // 0x266c PushI
	var_1136_bool = var_1133_int == var_1135_int; // 0x266d Eq
	if(var_1136_bool == 0) goto Label_9841; // 0x266e JumpB
	var_1131_bool = 1; // 0x266f MovB
	return 0; // 0x2670 Return
	
Label_9841:
	var_1131_bool = 0; // 0x2671 MovB
	return 0; // 0x2672 Return
}


func_8812(var_109_object, var_110_int)
{
	var_111_int = 0; var_112_int = 0; // 0x226c PushV
	var_113_object = Obj(); var_114_string = ""; var_115_int = 0; // 0x226d PushV
	var_113_object = var_109_object; // 0x226e Mov
	var_114_string = "money"; // 0x226f MovS
	var_115_int = var_110_int; // 0x2270 Mov
	func_8448(var_114_string, var_115_int); // 0x2271 NEW_2
	var_119_int = 0; // 0x2273 PushI
	var_120_bool = var_110_int > var_119_int; // 0x2274 GT
	if(var_120_bool == 0) goto Label_8830; // 0x2275 JumpB
	var_121_string = "Money"; // 0x2276 PushS
	GetInvItemByName(var_112_int, var_121_string); // 0x2277 Func
	var_122_int = 0; var_123_int = 0; // 0x2279 PushV
	var_122_int = var_112_int; // 0x227a Mov
	var_123_int = var_110_int; // 0x227b Mov
	func_8800(var_122_int, var_123_int); // 0x227c NEW_2
	
Label_8830:
	return 2; // 0x227e Return
}


func_7277(var_0_object, var_1202_int, var_1203_object)
{
	var_1205_object = Obj(); var_1206_bool = 0; var_1207_int = 0; var_1208_bool = 0; var_1209_object = Obj(); var_1210_bool = 0; var_1211_int = 0; var_1212_bool = 0; // 0x1c6d PushV
	var_0_object = var_1203_object; // 0x1c6e TMov
	var_1213_bool = 0; var_1214_object = Obj(); var_1215_float = 0; // 0x1c6f PushV
	var_1214_object = var_1203_object; // 0x1c70 Mov
	var_1215_float = 70.0; // 0x1c71 MovF
	func_8479(var_1214_object, var_1215_float); // 0x1c72 NEW_2
	var_1216_bool = var_1213_bool == 0; // 0x1c74 Not
	if(var_1216_bool == 0) goto Label_7288; // 0x1c75 JumpB
	var_1202_int = -2; // 0x1c76 MovI
	return 8; // 0x1c77 Return
	
Label_7288:
	CreateDialog(var_1209_object); // 0x1c78 Func
	var_1217_int = 0; // 0x1c7a PushV
	func_8917(var_1217_int); // 0x1c7b NEW_2
	SetNPCName(var_1217_int); // 0x1c7d ObjFunc
	var_1218_int = 0; // 0x1c7f PushV
	func_8915(var_1218_int); // 0x1c80 NEW_2
	SetNPCDescription(var_1218_int); // 0x1c82 ObjFunc
	var_1219_string = ""; // 0x1c84 PushV
	func_8919(var_1219_string); // 0x1c85 NEW_2
	SetPhoto(var_1219_string); // 0x1c87 ObjFunc
	var_1220_string = ""; // 0x1c89 PushV
	func_8921(var_1220_string); // 0x1c8a NEW_2
	SetPhoto2(var_1220_string); // 0x1c8c ObjFunc
	var_1221_int = 0; // 0x1c8e PushV
	func_10310(var_1221_int); // 0x1c8f NEW_2
	SetPlayerName(var_1221_int); // 0x1c91 ObjFunc
	var_1211_int = -1; // 0x1c93 MovI
	IsOverrideActive(var_1210_bool); // 0x1c94 Func
	var_1222_bool = var_1210_bool; // 0x1c96 Push
	if(var_1222_bool == 0) goto Label_7322; // 0x1c97 JumpB
	var_1202_int = -2; // 0x1c98 MovI
	return 8; // 0x1c99 Return
	
Label_7322:
	DoDialog(var_1209_object); // 0x1c9a Func
	var_1223_bool = 0; var_1224_object = Obj(); // 0x1c9c PushV
	var_1225_object = Obj(); // 0x1c9d PushV
	func_8757(var_1225_object); // 0x1c9e NEW_2
	var_1224_object = var_1225_object; // 0x1c9f Mov
	func_8566(var_1223_bool, var_1224_object); // 0x1ca1 NEW_2
	var_1226_object = Obj(); var_1227_object = Obj(); // 0x1ca3 PushV
	var_1226_object = var_1203_object; // 0x1ca4 Mov
	var_1227_object = var_1209_object; // 0x1ca5 Mov
	TaskCall(24); // 0x1ca6 TaskCall
	func_7358(var_1228_object, var_1229_object, var_1230_string, var_1231_bool, var_1226_object, var_1227_object); // 0x1ca7 NEW_2
	TaskReturn(); // 0x1ca8 TaskReturn
	IsDialogEnd(var_1212_bool); // 0x1caa ObjFunc
	
Label_7340:
	var_1265_bool = var_1212_bool == 0; // 0x1cac Not
	if(var_1265_bool == 0) goto Label_7347; // 0x1cad JumpB
	sync(); // 0x1cae Func
	IsDialogEnd(var_1212_bool); // 0x1cb0 ObjFunc
	goto Label_7340; // 0x1cb2 Jump
	
Label_7347:
	var_1266_object = Obj(); // 0x1cb3 PushV
	var_1266_object = var_1203_object; // 0x1cb4 Mov
	func_8548(); // 0x1cb5 NEW_2
	StopDialog(var_1209_object); // 0x1cb7 Func
	GetReturnValue(var_1211_int); // 0x1cb9 ObjFunc
	var_1202_int = var_1211_int; // 0x1cbb Mov
	return 8; // 0x1cbc Return
}


func_5743(var_2_object, var_1145_string)
{
	var_1146_bool = 0; // 0x1670 PushV
	func_8923(var_1146_bool); // 0x1671 NEW_2
	var_1147_bool = var_1146_bool == 0; // 0x1673 Not
	if(var_1147_bool == 0) goto Label_5750; // 0x1674 JumpB
	return 0; // 0x1675 Return
	
Label_5750:
	var_1148_bool = var_1145_string == var_2_object; // 0x1676 Eq
	if(var_1148_bool == 0) goto Label_5753; // 0x1677 JumpB
	return 0; // 0x1678 Return
	
Label_5753:
	var_1149_string = ""; var_1150_bool = 0; // 0x1679 PushV
	var_1149_string = var_1145_string; // 0x167a Mov
	var_1151_string = ""; // 0x167b PushS
	var_1152_bool = var_1145_string == var_1151_string; // 0x167c Eq
	if(var_1152_bool == 0) goto Label_5760; // 0x167d JumpB
	var_1150_bool = 0; // 0x167e MovB
	goto Label_5761; // 0x167f Jump
	
Label_5761:
	func_8720(var_1149_string, var_1150_bool); // 0x1681 NEW_2
	var_2_object = var_1145_string; // 0x1683 TMov
	return 0; // 0x1684 Return
	
Label_5760:
	var_1150_bool = 1; // 0x1680 MovB
}


func_9843(var_1180_bool)
{
	var_1182_int = 0; var_1183_string = ""; // 0x2674 PushV
	var_1183_string = "d9q01"; // 0x2675 MovS
	func_8784(var_1182_int, var_1183_string); // 0x2676 NEW_2
	var_1184_int = 2; // 0x2678 PushI
	var_1185_bool = var_1182_int == var_1184_int; // 0x2679 Eq
	if(var_1185_bool == 0) goto Label_9853; // 0x267a JumpB
	var_1180_bool = 1; // 0x267b MovB
	return 0; // 0x267c Return
	
Label_9853:
	var_1180_bool = 0; // 0x267d MovB
	return 0; // 0x267e Return
}


func_2680(var_0_object, var_1_object, var_2_object, var_3_string, var_579_object, var_580_object)
{
	var_0_object = var_580_object; // 0xa79 TMov
	var_1_object = var_579_object; // 0xa7a TMov
	var_3_string = 0; // 0xa7b TMovB
	var_585_int = 1; // 0xa7c PushI
	if(var_585_int == 0) goto Label_2751; // 0xa7d JumpB
	var_586_string = ""; // 0xa7e PushV
	var_586_string = "Neutral"; // 0xa7f MovS
	func_2781(var_580_object, var_586_string); // 0xa80 NEW_2
	var_594_int = 510235; // 0xa82 PushI
	SetMessage(var_594_int); // 0xa83 TObjFunc
	ClearReplies(); // 0xa85 TObjFunc
	var_595_bool = 0; // 0xa87 PushV
	var_595_bool = 0; // 0xa88 MovB
	var_596_bool = 0; var_597_object = Obj(); // 0xa89 PushV
	var_597_object = var_1_object; // 0xa8a MovT
	func_9663(var_597_object); // 0xa8b NEW_2
	if(var_596_bool == 0) goto Label_2708; // 0xa8d JumpB
	var_602_bool = 0; var_603_object = Obj(); // 0xa8e PushV
	var_603_object = var_1_object; // 0xa8f MovT
	func_9675(var_603_object); // 0xa90 NEW_2
	if(var_602_bool == 0) goto Label_2708; // 0xa92 JumpB
	var_595_bool = 1; // 0xa93 MovB
	
Label_2708:
	if(var_595_bool == 0) goto Label_2714; // 0xa94 JumpB
	var_608_int = 510236; // 0xa95 PushI
	var_609_int = 11288; // 0xa96 PushI
	var_610_int = 11286; // 0xa97 PushI
	AddReply(var_608_int, var_609_int, var_610_int); // 0xa98 TObjFunc
	
Label_2714:
	var_611_bool = 0; // 0xa9a PushV
	var_611_bool = 0; // 0xa9b MovB
	var_612_bool = 0; var_613_object = Obj(); // 0xa9c PushV
	var_613_object = var_1_object; // 0xa9d MovT
	func_9699(var_613_object); // 0xa9e NEW_2
	if(var_612_bool == 0) goto Label_2727; // 0xaa0 JumpB
	var_618_bool = 0; var_619_object = Obj(); // 0xaa1 PushV
	var_619_object = var_1_object; // 0xaa2 MovT
	func_9687(var_619_object); // 0xaa3 NEW_2
	if(var_618_bool == 0) goto Label_2727; // 0xaa5 JumpB
	var_611_bool = 1; // 0xaa6 MovB
	
Label_2727:
	if(var_611_bool == 0) goto Label_2733; // 0xaa7 JumpB
	var_624_int = 510266; // 0xaa8 PushI
	var_625_int = 35986; // 0xaa9 PushI
	var_626_int = 11320; // 0xaaa PushI
	AddReply(var_624_int, var_625_int, var_626_int); // 0xaab TObjFunc
	
Label_2733:
	var_627_bool = 0; var_628_object = Obj(); // 0xaad PushV
	var_628_object = var_1_object; // 0xaae MovT
	func_9532(var_628_object); // 0xaaf NEW_2
	if(var_627_bool == 0) goto Label_2743; // 0xab1 JumpB
	var_633_int = 510237; // 0xab2 PushI
	var_634_int = 11089; // 0xab3 PushI
	var_635_int = 11287; // 0xab4 PushI
	AddReply(var_633_int, var_634_int, var_635_int); // 0xab5 TObjFunc
	
Label_2743:
	var_636_int = 511382; // 0xab7 PushI
	var_637_int = -1; // 0xab8 PushI
	var_638_int = 12578; // 0xab9 PushI
	AddReply(var_636_int, var_637_int, var_638_int); // 0xaba TObjFunc
	goto Label_2751; // 0xabc Jump
	
Label_2751:
	var_639_bool = 0; // 0xabf PushV
	func_8923(var_639_bool); // 0xac0 NEW_2
	if(var_639_bool == 0) goto Label_2766; // 0xac2 JumpB
	
Label_2755:
	lshWaitForAnimEnd(); // 0xac3 Func
	var_640_string = var_3_string; // 0xac5 PushT
	if(var_640_string == 0) goto Label_2760; // 0xac6 JumpB
	goto Label_2765; // 0xac7 Jump
	
Label_2765:
	goto Label_2780; // 0xacd Jump
	
Label_2780:
	return 0; // 0xadc Return
	
Label_2760:
	var_641_string = ""; // 0xac8 PushV
	var_641_string = var_2_object; // 0xac9 MovT
	func_8704(var_641_string); // 0xaca NEW_2
	goto Label_2755; // 0xacc Jump
	
Label_2766:
	var_642_string = "all"; // 0xace PushS
	var_643_string = "idle"; // 0xacf PushS
	PlayAnimation(var_642_string, var_643_string); // 0xad0 Func
	
Label_2770:
	WaitForAnimEnd(); // 0xad2 Func
	var_644_string = var_3_string; // 0xad4 PushT
	if(var_644_string == 0) goto Label_2775; // 0xad5 JumpB
	goto Label_2780; // 0xad6 Jump
	
Label_2775:
	var_645_string = "all"; // 0xad7 PushS
	var_646_string = "idle"; // 0xad8 PushS
	PlayAnimation(var_645_string, var_646_string); // 0xad9 Func
	goto Label_2770; // 0xadb Jump
}


func_3705(var_2_object, var_696_string)
{
	var_697_bool = 0; // 0xe7a PushV
	func_8923(var_697_bool); // 0xe7b NEW_2
	var_698_bool = var_697_bool == 0; // 0xe7d Not
	if(var_698_bool == 0) goto Label_3712; // 0xe7e JumpB
	return 0; // 0xe7f Return
	
Label_3712:
	var_699_bool = var_696_string == var_2_object; // 0xe80 Eq
	if(var_699_bool == 0) goto Label_3715; // 0xe81 JumpB
	return 0; // 0xe82 Return
	
Label_3715:
	var_700_string = ""; var_701_bool = 0; // 0xe83 PushV
	var_700_string = var_696_string; // 0xe84 Mov
	var_702_string = ""; // 0xe85 PushS
	var_703_bool = var_696_string == var_702_string; // 0xe86 Eq
	if(var_703_bool == 0) goto Label_3722; // 0xe87 JumpB
	var_701_bool = 0; // 0xe88 MovB
	goto Label_3723; // 0xe89 Jump
	
Label_3723:
	func_8720(var_700_string, var_701_bool); // 0xe8b NEW_2
	var_2_object = var_696_string; // 0xe8d TMov
	return 0; // 0xe8e Return
	
Label_3722:
	var_701_bool = 1; // 0xe8a MovB
}


func_8831(var_739_bool, var_741_string)
{
	var_742_int = 0; var_743_bool = 0; var_744_int = 0; var_745_bool = 0; // 0x227f PushV
	GetInvItemByName(var_744_int, var_741_string); // 0x2280 Func
	HasItem(var_744_int, var_745_bool); // 0x2282 ObjFunc
	var_739_bool = var_745_bool; // 0x2284 Mov
	return 4; // 0x2285 Return
}


func_7807(var_0_object, var_1385_int, var_1386_object)
{
	var_1388_object = Obj(); var_1389_bool = 0; var_1390_int = 0; var_1391_bool = 0; var_1392_object = Obj(); var_1393_bool = 0; var_1394_int = 0; var_1395_bool = 0; // 0x1e7f PushV
	var_0_object = var_1386_object; // 0x1e80 TMov
	var_1396_bool = 0; var_1397_object = Obj(); var_1398_float = 0; // 0x1e81 PushV
	var_1397_object = var_1386_object; // 0x1e82 Mov
	var_1398_float = 70.0; // 0x1e83 MovF
	func_8479(var_1397_object, var_1398_float); // 0x1e84 NEW_2
	var_1399_bool = var_1396_bool == 0; // 0x1e86 Not
	if(var_1399_bool == 0) goto Label_7818; // 0x1e87 JumpB
	var_1385_int = -2; // 0x1e88 MovI
	return 8; // 0x1e89 Return
	
Label_7818:
	CreateDialog(var_1392_object); // 0x1e8a Func
	var_1400_int = 0; // 0x1e8c PushV
	func_8917(var_1400_int); // 0x1e8d NEW_2
	SetNPCName(var_1400_int); // 0x1e8f ObjFunc
	var_1401_int = 0; // 0x1e91 PushV
	func_8915(var_1401_int); // 0x1e92 NEW_2
	SetNPCDescription(var_1401_int); // 0x1e94 ObjFunc
	var_1402_string = ""; // 0x1e96 PushV
	func_8919(var_1402_string); // 0x1e97 NEW_2
	SetPhoto(var_1402_string); // 0x1e99 ObjFunc
	var_1403_string = ""; // 0x1e9b PushV
	func_8921(var_1403_string); // 0x1e9c NEW_2
	SetPhoto2(var_1403_string); // 0x1e9e ObjFunc
	var_1404_int = 0; // 0x1ea0 PushV
	func_10310(var_1404_int); // 0x1ea1 NEW_2
	SetPlayerName(var_1404_int); // 0x1ea3 ObjFunc
	var_1394_int = -1; // 0x1ea5 MovI
	IsOverrideActive(var_1393_bool); // 0x1ea6 Func
	var_1405_bool = var_1393_bool; // 0x1ea8 Push
	if(var_1405_bool == 0) goto Label_7852; // 0x1ea9 JumpB
	var_1385_int = -2; // 0x1eaa MovI
	return 8; // 0x1eab Return
	
Label_7852:
	DoDialog(var_1392_object); // 0x1eac Func
	var_1406_bool = 0; var_1407_object = Obj(); // 0x1eae PushV
	var_1408_object = Obj(); // 0x1eaf PushV
	func_8757(var_1408_object); // 0x1eb0 NEW_2
	var_1407_object = var_1408_object; // 0x1eb1 Mov
	func_8566(var_1406_bool, var_1407_object); // 0x1eb3 NEW_2
	var_1409_object = Obj(); var_1410_object = Obj(); // 0x1eb5 PushV
	var_1409_object = var_1386_object; // 0x1eb6 Mov
	var_1410_object = var_1392_object; // 0x1eb7 Mov
	TaskCall(26); // 0x1eb8 TaskCall
	func_7888(var_1411_object, var_1412_object, var_1413_string, var_1414_bool, var_1409_object, var_1410_object); // 0x1eb9 NEW_2
	TaskReturn(); // 0x1eba TaskReturn
	IsDialogEnd(var_1395_bool); // 0x1ebc ObjFunc
	
Label_7870:
	var_1439_bool = var_1395_bool == 0; // 0x1ebe Not
	if(var_1439_bool == 0) goto Label_7877; // 0x1ebf JumpB
	sync(); // 0x1ec0 Func
	IsDialogEnd(var_1395_bool); // 0x1ec2 ObjFunc
	goto Label_7870; // 0x1ec4 Jump
	
Label_7877:
	var_1440_object = Obj(); // 0x1ec5 PushV
	var_1440_object = var_1386_object; // 0x1ec6 Mov
	func_8548(); // 0x1ec7 NEW_2
	StopDialog(var_1392_object); // 0x1ec9 Func
	GetReturnValue(var_1394_int); // 0x1ecb ObjFunc
	var_1385_int = var_1394_int; // 0x1ecd Mov
	return 8; // 0x1ece Return
}


func_9855(var_1186_bool)
{
	var_1188_int = 0; var_1189_string = ""; // 0x2680 PushV
	var_1189_string = "ood9Viktor2"; // 0x2681 MovS
	func_8784(var_1188_int, var_1189_string); // 0x2682 NEW_2
	var_1190_int = 0; // 0x2684 PushI
	var_1191_bool = var_1188_int == var_1190_int; // 0x2685 Eq
	if(var_1191_bool == 0) goto Label_9865; // 0x2686 JumpB
	var_1186_bool = 1; // 0x2687 MovB
	return 0; // 0x2688 Return
	
Label_9865:
	var_1186_bool = 0; // 0x2689 MovB
	return 0; // 0x268a Return
}


func_9347()
{
	var_1063_string = "ood8Viktor1"; // 0x2484 PushS
	var_1064_int = 1; // 0x2485 PushI
	SetVariable(var_1063_string, var_1064_int); // 0x2486 Func
	return 0; // 0x2488 Return
}


func_8838(var_205_bool, var_206_object, var_207_float)
{
	var_208_bool = var_206_object == 0; // 0x2287 Not
	if(var_208_bool == 0) goto Label_8843; // 0x2288 JumpB
	var_205_bool = 0; // 0x2289 MovB
	return 0; // 0x228a Return
	
Label_8843:
	var_209_int = 0; // 0x228b PushI
	var_210_bool = var_207_float > var_209_int; // 0x228c GT
	if(var_210_bool == 0) goto Label_8850; // 0x228d JumpB
	var_211_int = 8; // 0x228e PushI
	SendWorldWndMessage(var_211_int); // 0x228f Func
	goto Label_8859; // 0x2291 Jump
	
Label_8859:
	var_212_float = 0; // 0x229b PushV
	var_212_float = var_207_float; // 0x229c Mov
	func_8873(var_212_float); // 0x229d NEW_2
	var_216_bool = 0; var_217_object = Obj(); var_218_string = ""; var_219_float = 0; var_220_float = 0; var_221_float = 0; // 0x229f PushV
	var_217_object = var_206_object; // 0x22a0 Mov
	var_218_string = "reputation"; // 0x22a1 MovS
	var_219_float = var_207_float; // 0x22a2 Mov
	var_220_float = 0; // 0x22a3 MovI
	var_221_float = 1; // 0x22a4 MovI
	func_8426(var_216_bool, var_217_object, var_218_string, var_219_float, var_220_float, var_221_float); // 0x22a5 NEW_2
	var_205_bool = 1; // 0x22a7 MovB
	return 0; // 0x22a8 Return
	
Label_8850:
	var_240_int = 0; // 0x2292 PushI
	var_241_bool = var_207_float < var_240_int; // 0x2293 LT
	if(var_241_bool == 0) goto Label_8857; // 0x2294 JumpB
	var_242_int = 9; // 0x2295 PushI
	SendWorldWndMessage(var_242_int); // 0x2296 Func
	goto Label_8859; // 0x2298 Jump
	
Label_8857:
	var_205_bool = 0; // 0x2299 MovB
	return 0; // 0x229a Return
}


func_9353()
{
	var_1139_string = "ood9Viktor1"; // 0x248a PushS
	var_1140_int = 1; // 0x248b PushI
	SetVariable(var_1139_string, var_1140_int); // 0x248c Func
	return 0; // 0x248e Return
}


func_9867(var_219_bool)
{
	var_221_int = 0; var_222_string = ""; // 0x268c PushV
	var_222_string = "d9TalkToPolkovodec"; // 0x268d MovS
	func_8784(var_221_int, var_222_string); // 0x268e NEW_2
	var_223_int = 0; // 0x2690 PushI
	var_224_bool = var_221_int != var_223_int; // 0x2691 Neq
	if(var_224_bool == 0) goto Label_9877; // 0x2692 JumpB
	var_219_bool = 1; // 0x2693 MovB
	return 0; // 0x2694 Return
	
Label_9877:
	var_219_bool = 0; // 0x2695 MovB
	return 0; // 0x2696 Return
}


func_9359()
{
	var_81_string = "d9q01"; // 0x2490 PushS
	var_82_int = 1; // 0x2491 PushI
	SetVariable(var_81_string, var_82_int); // 0x2492 Func
	func_10193(); // 0x2495 NEW_2
	func_10206(); // 0x2498 NEW_2
	var_114_bool = 0; var_115_string = ""; var_116_string = ""; // 0x249a PushV
	var_115_string = "quest_d9_01"; // 0x249b MovS
	var_116_string = "place_rifles"; // 0x249c MovS
	func_8883(var_114_bool, var_115_string, var_116_string); // 0x249d NEW_2
	return 0; // 0x249f Return
}


func_8338(var_0_object, var_71_cvector, var_72_cvector)
{
	GetPosition(var_72_cvector); // 0x2092 Func
	GetDirection(var_71_cvector); // 0x2094 Func
	var_0_object = 0; // 0x2096 TMovB
	var_74_bool = 0; // 0x2097 PushV
	func_8474(var_74_bool); // 0x2098 NEW_2
	var_77_bool = var_74_bool == 0; // 0x209a Not
	if(var_77_bool == 0) goto Label_8356; // 0x209b JumpB
	TaskCall(0); // 0x209d TaskCall
	func_0(); // 0x209e NEW_2
	TaskReturn(); // 0x209f TaskReturn
	func_8366(var_70_bool, var_71_cvector, var_72_cvector); // 0x20a2 NEW_2
	
Label_8356:
	var_83_string = ""; // 0x20a4 PushV
	var_83_string = "Neutral"; // 0x20a5 MovS
	func_8704(var_83_string); // 0x20a6 NEW_2
	lshWaitForAnimEnd(); // 0x20a8 Func
	goto Label_8356; // 0x20aa Jump
}


func_4758(var_0_object, var_953_int, var_954_object)
{
	var_956_object = Obj(); var_957_bool = 0; var_958_int = 0; var_959_bool = 0; var_960_object = Obj(); var_961_bool = 0; var_962_int = 0; var_963_bool = 0; // 0x1296 PushV
	var_0_object = var_954_object; // 0x1297 TMov
	var_964_bool = 0; var_965_object = Obj(); var_966_float = 0; // 0x1298 PushV
	var_965_object = var_954_object; // 0x1299 Mov
	var_966_float = 70.0; // 0x129a MovF
	func_8479(var_965_object, var_966_float); // 0x129b NEW_2
	var_967_bool = var_964_bool == 0; // 0x129d Not
	if(var_967_bool == 0) goto Label_4769; // 0x129e JumpB
	var_953_int = -2; // 0x129f MovI
	return 8; // 0x12a0 Return
	
Label_4769:
	CreateDialog(var_960_object); // 0x12a1 Func
	var_968_int = 0; // 0x12a3 PushV
	func_8917(var_968_int); // 0x12a4 NEW_2
	SetNPCName(var_968_int); // 0x12a6 ObjFunc
	var_969_int = 0; // 0x12a8 PushV
	func_8915(var_969_int); // 0x12a9 NEW_2
	SetNPCDescription(var_969_int); // 0x12ab ObjFunc
	var_970_string = ""; // 0x12ad PushV
	func_8919(var_970_string); // 0x12ae NEW_2
	SetPhoto(var_970_string); // 0x12b0 ObjFunc
	var_971_string = ""; // 0x12b2 PushV
	func_8921(var_971_string); // 0x12b3 NEW_2
	SetPhoto2(var_971_string); // 0x12b5 ObjFunc
	var_972_int = 0; // 0x12b7 PushV
	func_10310(var_972_int); // 0x12b8 NEW_2
	SetPlayerName(var_972_int); // 0x12ba ObjFunc
	var_962_int = -1; // 0x12bc MovI
	IsOverrideActive(var_961_bool); // 0x12bd Func
	var_973_bool = var_961_bool; // 0x12bf Push
	if(var_973_bool == 0) goto Label_4803; // 0x12c0 JumpB
	var_953_int = -2; // 0x12c1 MovI
	return 8; // 0x12c2 Return
	
Label_4803:
	DoDialog(var_960_object); // 0x12c3 Func
	var_974_bool = 0; var_975_object = Obj(); // 0x12c5 PushV
	var_976_object = Obj(); // 0x12c6 PushV
	func_8757(var_976_object); // 0x12c7 NEW_2
	var_975_object = var_976_object; // 0x12c8 Mov
	func_8566(var_974_bool, var_975_object); // 0x12ca NEW_2
	var_977_object = Obj(); var_978_object = Obj(); // 0x12cc PushV
	var_977_object = var_954_object; // 0x12cd Mov
	var_978_object = var_960_object; // 0x12ce Mov
	TaskCall(16); // 0x12cf TaskCall
	func_4839(var_979_object, var_980_object, var_981_string, var_982_bool, var_977_object, var_978_object); // 0x12d0 NEW_2
	TaskReturn(); // 0x12d1 TaskReturn
	IsDialogEnd(var_963_bool); // 0x12d3 ObjFunc
	
Label_4821:
	var_1013_bool = var_963_bool == 0; // 0x12d5 Not
	if(var_1013_bool == 0) goto Label_4828; // 0x12d6 JumpB
	sync(); // 0x12d7 Func
	IsDialogEnd(var_963_bool); // 0x12d9 ObjFunc
	goto Label_4821; // 0x12db Jump
	
Label_4828:
	var_1014_object = Obj(); // 0x12dc PushV
	var_1014_object = var_954_object; // 0x12dd Mov
	func_8548(); // 0x12de NEW_2
	StopDialog(var_960_object); // 0x12e0 Func
	GetReturnValue(var_962_int); // 0x12e2 ObjFunc
	var_953_int = var_962_int; // 0x12e4 Mov
	return 8; // 0x12e5 Return
}


func_9879(var_1346_bool)
{
	var_1348_int = 0; var_1349_string = ""; // 0x2698 PushV
	var_1349_string = "d11q01"; // 0x2699 MovS
	func_8784(var_1348_int, var_1349_string); // 0x269a NEW_2
	var_1350_int = 1; // 0x269c PushI
	var_1351_bool = var_1348_int == var_1350_int; // 0x269d Eq
	if(var_1351_bool == 0) goto Label_9889; // 0x269e JumpB
	var_1346_bool = 1; // 0x269f MovB
	return 0; // 0x26a0 Return
	
Label_9889:
	var_1346_bool = 0; // 0x26a1 MovB
	return 0; // 0x26a2 Return
}


func_4252(var_2_object, var_813_string)
{
	var_814_bool = 0; // 0x109d PushV
	func_8923(var_814_bool); // 0x109e NEW_2
	var_815_bool = var_814_bool == 0; // 0x10a0 Not
	if(var_815_bool == 0) goto Label_4259; // 0x10a1 JumpB
	return 0; // 0x10a2 Return
	
Label_4259:
	var_816_bool = var_813_string == var_2_object; // 0x10a3 Eq
	if(var_816_bool == 0) goto Label_4262; // 0x10a4 JumpB
	return 0; // 0x10a5 Return
	
Label_4262:
	var_817_string = ""; var_818_bool = 0; // 0x10a6 PushV
	var_817_string = var_813_string; // 0x10a7 Mov
	var_819_string = ""; // 0x10a8 PushS
	var_820_bool = var_813_string == var_819_string; // 0x10a9 Eq
	if(var_820_bool == 0) goto Label_4269; // 0x10aa JumpB
	var_818_bool = 0; // 0x10ab MovB
	goto Label_4270; // 0x10ac Jump
	
Label_4270:
	func_8720(var_817_string, var_818_bool); // 0x10ae NEW_2
	var_2_object = var_813_string; // 0x10b0 TMov
	return 0; // 0x10b1 Return
	
Label_4269:
	var_818_bool = 1; // 0x10ad MovB
}


func_157(var_2_object, var_273_string)
{
	var_274_bool = 0; // 0x9e PushV
	func_8923(var_274_bool); // 0x9f NEW_2
	var_275_bool = var_274_bool == 0; // 0xa1 Not
	if(var_275_bool == 0) goto Label_164; // 0xa2 JumpB
	return 0; // 0xa3 Return
	
Label_164:
	var_276_bool = var_273_string == var_2_object; // 0xa4 Eq
	if(var_276_bool == 0) goto Label_167; // 0xa5 JumpB
	return 0; // 0xa6 Return
	
Label_167:
	var_277_string = ""; var_278_bool = 0; // 0xa7 PushV
	var_277_string = var_273_string; // 0xa8 Mov
	var_279_string = ""; // 0xa9 PushS
	var_280_bool = var_273_string == var_279_string; // 0xaa Eq
	if(var_280_bool == 0) goto Label_174; // 0xab JumpB
	var_278_bool = 0; // 0xac MovB
	goto Label_175; // 0xad Jump
	
Label_175:
	func_8720(var_277_string, var_278_bool); // 0xaf NEW_2
	var_2_object = var_273_string; // 0xb1 TMov
	return 0; // 0xb2 Return
	
Label_174:
	var_278_bool = 1; // 0xae MovB
}


func_9376()
{
	var_134_string = "ood9Viktor2"; // 0x24a1 PushS
	var_135_int = 1; // 0x24a2 PushI
	SetVariable(var_134_string, var_135_int); // 0x24a3 Func
	return 0; // 0x24a5 Return
}


func_2210(var_2_object, var_496_string)
{
	var_497_bool = 0; // 0x8a3 PushV
	func_8923(var_497_bool); // 0x8a4 NEW_2
	var_498_bool = var_497_bool == 0; // 0x8a6 Not
	if(var_498_bool == 0) goto Label_2217; // 0x8a7 JumpB
	return 0; // 0x8a8 Return
	
Label_2217:
	var_499_bool = var_496_string == var_2_object; // 0x8a9 Eq
	if(var_499_bool == 0) goto Label_2220; // 0x8aa JumpB
	return 0; // 0x8ab Return
	
Label_2220:
	var_500_string = ""; var_501_bool = 0; // 0x8ac PushV
	var_500_string = var_496_string; // 0x8ad Mov
	var_502_string = ""; // 0x8ae PushS
	var_503_bool = var_496_string == var_502_string; // 0x8af Eq
	if(var_503_bool == 0) goto Label_2227; // 0x8b0 JumpB
	var_501_bool = 0; // 0x8b1 MovB
	goto Label_2228; // 0x8b2 Jump
	
Label_2228:
	func_8720(var_500_string, var_501_bool); // 0x8b4 NEW_2
	var_2_object = var_496_string; // 0x8b6 TMov
	return 0; // 0x8b7 Return
	
Label_2227:
	var_501_bool = 1; // 0x8b3 MovB
}


func_9891(var_1340_bool)
{
	var_1342_int = 0; var_1343_string = ""; // 0x26a4 PushV
	var_1343_string = "ood11Viktor1"; // 0x26a5 MovS
	func_8784(var_1342_int, var_1343_string); // 0x26a6 NEW_2
	var_1344_int = 0; // 0x26a8 PushI
	var_1345_bool = var_1342_int == var_1344_int; // 0x26a9 Eq
	if(var_1345_bool == 0) goto Label_9901; // 0x26aa JumpB
	var_1340_bool = 1; // 0x26ab MovB
	return 0; // 0x26ac Return
	
Label_9901:
	var_1340_bool = 0; // 0x26ad MovB
	return 0; // 0x26ae Return
}


func_9382()
{
	var_130_string = "ood11Viktor1"; // 0x24a7 PushS
	var_131_int = 1; // 0x24a8 PushI
	SetVariable(var_130_string, var_131_int); // 0x24a9 Func
	return 0; // 0x24ab Return
}


func_8873(var_212_float)
{
	var_213_object = Obj(); var_214_object = Obj(); // 0x22a9 PushV
	CreateFloatVector(var_214_object); // 0x22aa Func
	add(var_212_float); // 0x22ac ObjFunc
	var_215_int = 16; // 0x22ae PushI
	SendWorldWndMessage(var_215_int, var_214_object); // 0x22af Func
	return 2; // 0x22b1 Return
}


func_9388()
{
	var_136_string = "ood11Viktor2"; // 0x24ad PushS
	var_137_int = 1; // 0x24ae PushI
	SetVariable(var_136_string, var_137_int); // 0x24af Func
	return 0; // 0x24b1 Return
}


func_8366(var_0_object, var_71_cvector, var_72_cvector)
{
	SetPosition(var_72_cvector); // 0x20ae Func
	SetDirection(var_71_cvector); // 0x20b0 Func
	var_0_object = 0; // 0x20b2 TMovB
	var_80_string = "all"; // 0x20b3 PushS
	var_81_string = "stand"; // 0x20b4 PushS
	var_82_int = 0; // 0x20b5 PushI
	LockAnimation(var_80_string, var_81_string, var_82_int); // 0x20b6 Func
	return 0; // 0x20b8 Return
}


func_9903(var_1360_bool)
{
	var_1362_int = 0; var_1363_string = ""; // 0x26b0 PushV
	var_1363_string = "ood11Viktor2"; // 0x26b1 MovS
	func_8784(var_1362_int, var_1363_string); // 0x26b2 NEW_2
	var_1364_int = 0; // 0x26b4 PushI
	var_1365_bool = var_1362_int == var_1364_int; // 0x26b5 Eq
	if(var_1365_bool == 0) goto Label_9913; // 0x26b6 JumpB
	var_1360_bool = 1; // 0x26b7 MovB
	return 0; // 0x26b8 Return
	
Label_9913:
	var_1360_bool = 0; // 0x26b9 MovB
	return 0; // 0x26ba Return
}


func_5296(var_2_object, var_1065_string)
{
	var_1066_bool = 0; // 0x14b1 PushV
	func_8923(var_1066_bool); // 0x14b2 NEW_2
	var_1067_bool = var_1066_bool == 0; // 0x14b4 Not
	if(var_1067_bool == 0) goto Label_5303; // 0x14b5 JumpB
	return 0; // 0x14b6 Return
	
Label_5303:
	var_1068_bool = var_1065_string == var_2_object; // 0x14b7 Eq
	if(var_1068_bool == 0) goto Label_5306; // 0x14b8 JumpB
	return 0; // 0x14b9 Return
	
Label_5306:
	var_1069_string = ""; var_1070_bool = 0; // 0x14ba PushV
	var_1069_string = var_1065_string; // 0x14bb Mov
	var_1071_string = ""; // 0x14bc PushS
	var_1072_bool = var_1065_string == var_1071_string; // 0x14bd Eq
	if(var_1072_bool == 0) goto Label_5313; // 0x14be JumpB
	var_1070_bool = 0; // 0x14bf MovB
	goto Label_5314; // 0x14c0 Jump
	
Label_5314:
	func_8720(var_1069_string, var_1070_bool); // 0x14c2 NEW_2
	var_2_object = var_1065_string; // 0x14c4 TMov
	return 0; // 0x14c5 Return
	
Label_5313:
	var_1070_bool = 1; // 0x14c1 MovB
}


func_9394()
{
	var_111_string = "KnowMyth"; // 0x24b3 PushS
	var_112_int = 1; // 0x24b4 PushI
	SetVariable(var_111_string, var_112_int); // 0x24b5 Func
	return 0; // 0x24b7 Return
}


func_8883(var_133_bool, var_134_string, var_135_string)
{
	var_136_object = Obj(); var_137_object = Obj(); // 0x22b3 PushV
	FindActor(var_137_object, var_134_string); // 0x22b4 Func
	var_138_bool = var_137_object == 0; // 0x22b6 NullEq
	if(var_138_bool == 0) goto Label_8890; // 0x22b7 JumpB
	var_133_bool = 0; // 0x22b8 MovB
	return 2; // 0x22b9 Return
	
Label_8890:
	Trigger(var_137_object, var_135_string); // 0x22ba Func
	var_133_bool = 1; // 0x22bc MovB
	return 2; // 0x22bd Return
}


func_9400()
{
	var_919_string = "d6ViktorVisit"; // 0x24b9 PushS
	var_920_int = 1; // 0x24ba PushI
	SetVariable(var_919_string, var_920_int); // 0x24bb Func
	return 0; // 0x24bd Return
}


func_8377(var_0_object)
{
	var_76_bool = var_0_object == 0; // 0x20b9 Not
	if(var_76_bool == 0) goto Label_8386; // 0x20ba JumpB
	var_0_object = 1; // 0x20bb TMovB
	var_77_string = "all"; // 0x20bc PushS
	var_78_string = "stand"; // 0x20bd PushS
	PlayAnimation(var_77_string, var_78_string); // 0x20be Func
	WaitForAnimEnd(); // 0x20c0 Func
	
Label_8386:
	return 0; // 0x20c2 Return
}


func_9915(var_1366_bool)
{
	var_1368_int = 0; var_1369_string = ""; // 0x26bc PushV
	var_1369_string = "d11q01"; // 0x26bd MovS
	func_8784(var_1368_int, var_1369_string); // 0x26be NEW_2
	var_1370_int = 4; // 0x26c0 PushI
	var_1371_bool = var_1368_int >= var_1370_int; // 0x26c1 GE
	if(var_1371_bool == 0) goto Label_9925; // 0x26c2 JumpB
	var_1366_bool = 1; // 0x26c3 MovB
	return 0; // 0x26c4 Return
	
Label_9925:
	var_1366_bool = 0; // 0x26c5 MovB
	return 0; // 0x26c6 Return
}


func_9406()
{
	var_128_string = "ood9Viktor3"; // 0x24bf PushS
	var_129_int = 1; // 0x24c0 PushI
	SetVariable(var_128_string, var_129_int); // 0x24c1 Func
	return 0; // 0x24c3 Return
}


func_7358(var_0_object, var_1_object, var_2_object, var_3_string, var_1226_object, var_1227_object)
{
	var_0_object = var_1227_object; // 0x1cbf TMov
	var_1_object = var_1226_object; // 0x1cc0 TMov
	var_3_string = 0; // 0x1cc1 TMovB
	var_1232_int = 1; // 0x1cc2 PushI
	if(var_1232_int == 0) goto Label_7396; // 0x1cc3 JumpB
	var_1233_string = ""; // 0x1cc4 PushV
	var_1233_string = "Neutral"; // 0x1cc5 MovS
	func_7426(var_1227_object, var_1233_string); // 0x1cc6 NEW_2
	var_1241_int = 534101; // 0x1cc8 PushI
	SetMessage(var_1241_int); // 0x1cc9 TObjFunc
	ClearReplies(); // 0x1ccb TObjFunc
	var_1242_bool = 0; var_1243_object = Obj(); // 0x1ccd PushV
	var_1243_object = var_1_object; // 0x1cce MovT
	func_9508(var_1243_object); // 0x1ccf NEW_2
	if(var_1242_bool == 0) goto Label_7383; // 0x1cd1 JumpB
	var_1248_int = 534102; // 0x1cd2 PushI
	var_1249_int = 35697; // 0x1cd3 PushI
	var_1250_int = 35695; // 0x1cd4 PushI
	AddReply(var_1248_int, var_1249_int, var_1250_int); // 0x1cd5 TObjFunc
	
Label_7383:
	var_1251_int = 534103; // 0x1cd7 PushI
	var_1252_int = -1; // 0x1cd8 PushI
	var_1253_int = 35696; // 0x1cd9 PushI
	AddReply(var_1251_int, var_1252_int, var_1253_int); // 0x1cda TObjFunc
	var_1254_int = 536433; // 0x1cdc PushI
	var_1255_int = -1; // 0x1cdd PushI
	var_1256_int = 38218; // 0x1cde PushI
	AddReply(var_1254_int, var_1255_int, var_1256_int); // 0x1cdf TObjFunc
	goto Label_7396; // 0x1ce1 Jump
	
Label_7396:
	var_1257_bool = 0; // 0x1ce4 PushV
	func_8923(var_1257_bool); // 0x1ce5 NEW_2
	if(var_1257_bool == 0) goto Label_7411; // 0x1ce7 JumpB
	
Label_7400:
	lshWaitForAnimEnd(); // 0x1ce8 Func
	var_1258_string = var_3_string; // 0x1cea PushT
	if(var_1258_string == 0) goto Label_7405; // 0x1ceb JumpB
	goto Label_7410; // 0x1cec Jump
	
Label_7410:
	goto Label_7425; // 0x1cf2 Jump
	
Label_7425:
	return 0; // 0x1d01 Return
	
Label_7405:
	var_1259_string = ""; // 0x1ced PushV
	var_1259_string = var_2_object; // 0x1cee MovT
	func_8704(var_1259_string); // 0x1cef NEW_2
	goto Label_7400; // 0x1cf1 Jump
	
Label_7411:
	var_1260_string = "all"; // 0x1cf3 PushS
	var_1261_string = "idle"; // 0x1cf4 PushS
	PlayAnimation(var_1260_string, var_1261_string); // 0x1cf5 Func
	
Label_7415:
	WaitForAnimEnd(); // 0x1cf7 Func
	var_1262_string = var_3_string; // 0x1cf9 PushT
	if(var_1262_string == 0) goto Label_7420; // 0x1cfa JumpB
	goto Label_7425; // 0x1cfb Jump
	
Label_7420:
	var_1263_string = "all"; // 0x1cfc PushS
	var_1264_string = "idle"; // 0x1cfd PushS
	PlayAnimation(var_1263_string, var_1264_string); // 0x1cfe Func
	goto Label_7415; // 0x1d00 Jump
}


func_8895(var_102_float)
{
	var_103_float = 0; var_104_float = 0; // 0x22bf PushV
	GetGameTime(var_104_float); // 0x22c0 Func
	var_102_float = var_104_float; // 0x22c2 Mov
	return 2; // 0x22c3 Return
}


func_9412(var_449_bool)
{
	var_451_int = 0; var_452_string = ""; // 0x24c5 PushV
	var_452_string = "d1q02"; // 0x24c6 MovS
	func_8784(var_451_int, var_452_string); // 0x24c7 NEW_2
	var_453_int = 3; // 0x24c9 PushI
	var_454_bool = var_451_int == var_453_int; // 0x24ca Eq
	if(var_454_bool == 0) goto Label_9422; // 0x24cb JumpB
	var_449_bool = 1; // 0x24cc MovB
	return 0; // 0x24cd Return
	
Label_9422:
	var_449_bool = 0; // 0x24ce MovB
	return 0; // 0x24cf Return
}


func_8900(var_222_int)
{
	var_223_float = 0; var_224_float = 0; // 0x22c4 PushV
	GetGameTime(var_224_float); // 0x22c5 Func
	var_225_int = 1; // 0x22c7 PushI
	var_226_int = 0; // 0x22c8 PushV
	var_227_int = 24; // 0x22c9 PushI
	var_226_int = var_224_float / var_224_float; // 0x22ca Div2
	var_222_int = var_225_int + var_226_int; // 0x22cb Add2
	return 2; // 0x22cc Return
}


func_9927(var_252_bool)
{
	var_254_int = 0; var_255_string = ""; // 0x26c8 PushV
	var_255_string = "d11q01"; // 0x26c9 MovS
	func_8784(var_254_int, var_255_string); // 0x26ca NEW_2
	var_256_int = 1000; // 0x26cc PushI
	var_257_bool = var_254_int == var_256_int; // 0x26cd Eq
	if(var_257_bool == 0) goto Label_9937; // 0x26ce JumpB
	var_252_bool = 1; // 0x26cf MovB
	return 0; // 0x26d0 Return
	
Label_9937:
	var_252_bool = 0; // 0x26d1 MovB
	return 0; // 0x26d2 Return
}


func_8909(var_325_bool, var_326_int)
{
	var_327_int = 0; // 0x22ce PushV
	func_8900(var_327_int); // 0x22cf NEW_2
	var_325_bool = var_327_int == var_326_int; // 0x22d1 Eq2
	return 0; // 0x22d2 Return
}


func_9424(var_377_bool)
{
	var_379_int = 0; var_380_string = ""; // 0x24d1 PushV
	var_380_string = "ood1Viktor1"; // 0x24d2 MovS
	func_8784(var_379_int, var_380_string); // 0x24d3 NEW_2
	var_381_int = 0; // 0x24d5 PushI
	var_382_bool = var_379_int == var_381_int; // 0x24d6 Eq
	if(var_382_bool == 0) goto Label_9434; // 0x24d7 JumpB
	var_377_bool = 1; // 0x24d8 MovB
	return 0; // 0x24d9 Return
	
Label_9434:
	var_377_bool = 0; // 0x24da MovB
	return 0; // 0x24db Return
}


func_7888(var_0_object, var_1_object, var_2_object, var_3_string, var_1409_object, var_1410_object)
{
	var_0_object = var_1410_object; // 0x1ed1 TMov
	var_1_object = var_1409_object; // 0x1ed2 TMov
	var_3_string = 0; // 0x1ed3 TMovB
	var_1415_int = 1; // 0x1ed4 PushI
	if(var_1415_int == 0) goto Label_7916; // 0x1ed5 JumpB
	var_1416_string = ""; // 0x1ed6 PushV
	var_1416_string = "Neutral"; // 0x1ed7 MovS
	func_7946(var_1410_object, var_1416_string); // 0x1ed8 NEW_2
	var_1424_int = 535665; // 0x1eda PushI
	SetMessage(var_1424_int); // 0x1edb TObjFunc
	ClearReplies(); // 0x1edd TObjFunc
	var_1425_int = 535666; // 0x1edf PushI
	var_1426_int = 42176; // 0x1ee0 PushI
	var_1427_int = 37352; // 0x1ee1 PushI
	AddReply(var_1425_int, var_1426_int, var_1427_int); // 0x1ee2 TObjFunc
	var_1428_int = 540007; // 0x1ee4 PushI
	var_1429_int = -1; // 0x1ee5 PushI
	var_1430_int = 41978; // 0x1ee6 PushI
	AddReply(var_1428_int, var_1429_int, var_1430_int); // 0x1ee7 TObjFunc
	goto Label_7916; // 0x1ee9 Jump
	
Label_7916:
	var_1431_bool = 0; // 0x1eec PushV
	func_8923(var_1431_bool); // 0x1eed NEW_2
	if(var_1431_bool == 0) goto Label_7931; // 0x1eef JumpB
	
Label_7920:
	lshWaitForAnimEnd(); // 0x1ef0 Func
	var_1432_string = var_3_string; // 0x1ef2 PushT
	if(var_1432_string == 0) goto Label_7925; // 0x1ef3 JumpB
	goto Label_7930; // 0x1ef4 Jump
	
Label_7930:
	goto Label_7945; // 0x1efa Jump
	
Label_7945:
	return 0; // 0x1f09 Return
	
Label_7925:
	var_1433_string = ""; // 0x1ef5 PushV
	var_1433_string = var_2_object; // 0x1ef6 MovT
	func_8704(var_1433_string); // 0x1ef7 NEW_2
	goto Label_7920; // 0x1ef9 Jump
	
Label_7931:
	var_1434_string = "all"; // 0x1efb PushS
	var_1435_string = "idle"; // 0x1efc PushS
	PlayAnimation(var_1434_string, var_1435_string); // 0x1efd Func
	
Label_7935:
	WaitForAnimEnd(); // 0x1eff Func
	var_1436_string = var_3_string; // 0x1f01 PushT
	if(var_1436_string == 0) goto Label_7940; // 0x1f02 JumpB
	goto Label_7945; // 0x1f03 Jump
	
Label_7940:
	var_1437_string = "all"; // 0x1f04 PushS
	var_1438_string = "idle"; // 0x1f05 PushS
	PlayAnimation(var_1437_string, var_1438_string); // 0x1f06 Func
	goto Label_7935; // 0x1f08 Jump
}


func_8915(var_155_int)
{
	var_155_int = 515554; // 0x22d3 MovI
	return 0; // 0x22d4 Return
}


func_9939(var_1170_bool)
{
	var_1172_int = 0; var_1173_string = ""; // 0x26d4 PushV
	var_1173_string = "ood9Viktor3"; // 0x26d5 MovS
	func_8784(var_1172_int, var_1173_string); // 0x26d6 NEW_2
	var_1174_int = 0; // 0x26d8 PushI
	var_1175_bool = var_1172_int == var_1174_int; // 0x26d9 Eq
	if(var_1175_bool == 0) goto Label_9949; // 0x26da JumpB
	var_1170_bool = 1; // 0x26db MovB
	return 0; // 0x26dc Return
	
Label_9949:
	var_1170_bool = 0; // 0x26dd MovB
	return 0; // 0x26de Return
}


func_8917(var_154_int)
{
	var_154_int = 502879; // 0x22d5 MovI
	return 0; // 0x22d6 Return
}


func_8919(var_156_string)
{
	var_156_string = "ui/NPC_Viktor.png"; // 0x22d7 MovS
	return 0; // 0x22d8 Return
}


func_8921(var_157_string)
{
	var_157_string = "ui/NPC_Viktor_b.png"; // 0x22d9 MovS
	return 0; // 0x22da Return
}


func_8923(var_149_bool)
{
	var_149_bool = 1; // 0x22db MovB
	return 0; // 0x22dc Return
}


func_9436(var_407_bool)
{
	var_409_int = 0; var_410_string = ""; // 0x24dd PushV
	var_410_string = "ood1Viktor2"; // 0x24de MovS
	func_8784(var_409_int, var_410_string); // 0x24df NEW_2
	var_411_int = 0; // 0x24e1 PushI
	var_412_bool = var_409_int == var_411_int; // 0x24e2 Eq
	if(var_412_bool == 0) goto Label_9446; // 0x24e3 JumpB
	var_407_bool = 1; // 0x24e4 MovB
	return 0; // 0x24e5 Return
	
Label_9446:
	var_407_bool = 0; // 0x24e6 MovB
	return 0; // 0x24e7 Return
}


func_8925()
{
	func_10037(); // 0x22df NEW_2
	var_198_bool = 0; var_199_string = ""; var_200_string = ""; // 0x22e1 PushV
	var_199_string = "quest_d1_02"; // 0x22e2 MovS
	var_200_string = "fail"; // 0x22e3 MovS
	func_8883(var_198_bool, var_199_string, var_200_string); // 0x22e4 NEW_2
	return 0; // 0x22e6 Return
}


func_2781(var_2_object, var_586_string)
{
	var_587_bool = 0; // 0xade PushV
	func_8923(var_587_bool); // 0xadf NEW_2
	var_588_bool = var_587_bool == 0; // 0xae1 Not
	if(var_588_bool == 0) goto Label_2788; // 0xae2 JumpB
	return 0; // 0xae3 Return
	
Label_2788:
	var_589_bool = var_586_string == var_2_object; // 0xae4 Eq
	if(var_589_bool == 0) goto Label_2791; // 0xae5 JumpB
	return 0; // 0xae6 Return
	
Label_2791:
	var_590_string = ""; var_591_bool = 0; // 0xae7 PushV
	var_590_string = var_586_string; // 0xae8 Mov
	var_592_string = ""; // 0xae9 PushS
	var_593_bool = var_586_string == var_592_string; // 0xaea Eq
	if(var_593_bool == 0) goto Label_2798; // 0xaeb JumpB
	var_591_bool = 0; // 0xaec MovB
	goto Label_2799; // 0xaed Jump
	
Label_2799:
	func_8720(var_590_string, var_591_bool); // 0xaef NEW_2
	var_2_object = var_586_string; // 0xaf1 TMov
	return 0; // 0xaf2 Return
	
Label_2798:
	var_591_bool = 1; // 0xaee MovB
}


func_9951(var_424_bool)
{
	var_426_bool = 0; // 0x26e0 PushV
	var_426_bool = 0; // 0x26e1 MovB
	var_427_bool = 0; // 0x26e2 PushV
	var_427_bool = 0; // 0x26e3 MovB
	var_428_int = 0; var_429_string = ""; // 0x26e4 PushV
	var_429_string = "d1q01"; // 0x26e5 MovS
	func_8784(var_428_int, var_429_string); // 0x26e6 NEW_2
	var_430_int = 0; // 0x26e8 PushI
	var_431_bool = var_428_int != var_430_int; // 0x26e9 Neq
	if(var_431_bool == 0) goto Label_9971; // 0x26ea JumpB
	var_432_int = 0; var_433_string = ""; // 0x26eb PushV
	var_433_string = "d1q01"; // 0x26ec MovS
	func_8784(var_432_int, var_433_string); // 0x26ed NEW_2
	var_434_int = 1000; // 0x26ef PushI
	var_435_bool = var_432_int != var_434_int; // 0x26f0 Neq
	if(var_435_bool == 0) goto Label_9971; // 0x26f1 JumpB
	var_427_bool = 1; // 0x26f2 MovB
	
Label_9971:
	if(var_427_bool == 0) goto Label_9980; // 0x26f3 JumpB
	var_436_int = 0; var_437_string = ""; // 0x26f4 PushV
	var_437_string = "d1q01"; // 0x26f5 MovS
	func_8784(var_436_int, var_437_string); // 0x26f6 NEW_2
	var_438_int = -1; // 0x26f8 PushI
	var_439_bool = var_436_int != var_438_int; // 0x26f9 Neq
	if(var_439_bool == 0) goto Label_9980; // 0x26fa JumpB
	var_426_bool = 1; // 0x26fb MovB
	
Label_9980:
	if(var_426_bool == 0) goto Label_9983; // 0x26fc JumpB
	var_424_bool = 1; // 0x26fd MovB
	return 0; // 0x26fe Return
	
Label_9983:
	var_424_bool = 0; // 0x26ff MovB
	return 0; // 0x2700 Return
}


func_8414(var_224_bool, var_225_object, var_226_string)
{
	var_227_bool = 0; var_228_bool = 0; // 0x20de PushV
	var_229_string = "HasProperty"; // 0x20df PushS
	var_230_int = 2; // 0x20e0 PushI
	var_231_bool = IsFuncExist(var_225_object, var_229_string, var_230_int); // 0x20e1 FuncExist
	var_232_bool = var_231_bool == 0; // 0x20e2 Not
	if(var_232_bool == 0) goto Label_8422; // 0x20e3 JumpB
	var_224_bool = 0; // 0x20e4 MovB
	return 2; // 0x20e5 Return
	
Label_8422:
	HasProperty(var_226_string, var_228_bool); // 0x20e6 ObjFunc
	var_224_bool = var_228_bool; // 0x20e8 Mov
	return 2; // 0x20e9 Return
}


func_738(var_0_object, var_328_int, var_329_object)
{
	var_331_object = Obj(); var_332_bool = 0; var_333_int = 0; var_334_bool = 0; var_335_object = Obj(); var_336_bool = 0; var_337_int = 0; var_338_bool = 0; // 0x2e2 PushV
	var_0_object = var_329_object; // 0x2e3 TMov
	var_339_bool = 0; var_340_object = Obj(); var_341_float = 0; // 0x2e4 PushV
	var_340_object = var_329_object; // 0x2e5 Mov
	var_341_float = 70.0; // 0x2e6 MovF
	func_8479(var_340_object, var_341_float); // 0x2e7 NEW_2
	var_342_bool = var_339_bool == 0; // 0x2e9 Not
	if(var_342_bool == 0) goto Label_749; // 0x2ea JumpB
	var_328_int = -2; // 0x2eb MovI
	return 8; // 0x2ec Return
	
Label_749:
	CreateDialog(var_335_object); // 0x2ed Func
	var_343_int = 0; // 0x2ef PushV
	func_8917(var_343_int); // 0x2f0 NEW_2
	SetNPCName(var_343_int); // 0x2f2 ObjFunc
	var_344_int = 0; // 0x2f4 PushV
	func_8915(var_344_int); // 0x2f5 NEW_2
	SetNPCDescription(var_344_int); // 0x2f7 ObjFunc
	var_345_string = ""; // 0x2f9 PushV
	func_8919(var_345_string); // 0x2fa NEW_2
	SetPhoto(var_345_string); // 0x2fc ObjFunc
	var_346_string = ""; // 0x2fe PushV
	func_8921(var_346_string); // 0x2ff NEW_2
	SetPhoto2(var_346_string); // 0x301 ObjFunc
	var_347_int = 0; // 0x303 PushV
	func_10310(var_347_int); // 0x304 NEW_2
	SetPlayerName(var_347_int); // 0x306 ObjFunc
	var_337_int = -1; // 0x308 MovI
	IsOverrideActive(var_336_bool); // 0x309 Func
	var_348_bool = var_336_bool; // 0x30b Push
	if(var_348_bool == 0) goto Label_783; // 0x30c JumpB
	var_328_int = -2; // 0x30d MovI
	return 8; // 0x30e Return
	
Label_783:
	DoDialog(var_335_object); // 0x30f Func
	var_349_bool = 0; var_350_object = Obj(); // 0x311 PushV
	var_351_object = Obj(); // 0x312 PushV
	func_8757(var_351_object); // 0x313 NEW_2
	var_350_object = var_351_object; // 0x314 Mov
	func_8566(var_349_bool, var_350_object); // 0x316 NEW_2
	var_352_object = Obj(); var_353_object = Obj(); // 0x318 PushV
	var_352_object = var_329_object; // 0x319 Mov
	var_353_object = var_335_object; // 0x31a Mov
	TaskCall(6); // 0x31b TaskCall
	func_819(var_354_object, var_355_object, var_356_string, var_357_bool, var_352_object, var_353_object); // 0x31c NEW_2
	TaskReturn(); // 0x31d TaskReturn
	IsDialogEnd(var_338_bool); // 0x31f ObjFunc
	
Label_801:
	var_461_bool = var_338_bool == 0; // 0x321 Not
	if(var_461_bool == 0) goto Label_808; // 0x322 JumpB
	sync(); // 0x323 Func
	IsDialogEnd(var_338_bool); // 0x325 ObjFunc
	goto Label_801; // 0x327 Jump
	
Label_808:
	var_462_object = Obj(); // 0x328 PushV
	var_462_object = var_329_object; // 0x329 Mov
	func_8548(); // 0x32a NEW_2
	StopDialog(var_335_object); // 0x32c Func
	GetReturnValue(var_337_int); // 0x32e ObjFunc
	var_328_int = var_337_int; // 0x330 Mov
	return 8; // 0x331 Return
}


func_8935()
{
	var_81_string = "ood1Viktor1"; // 0x22e8 PushS
	var_82_int = 1; // 0x22e9 PushI
	SetVariable(var_81_string, var_82_int); // 0x22ea Func
	return 0; // 0x22ec Return
}


func_9448(var_440_bool)
{
	var_442_int = 0; var_443_string = ""; // 0x24e9 PushV
	var_443_string = "ood1Viktor3"; // 0x24ea MovS
	func_8784(var_442_int, var_443_string); // 0x24eb NEW_2
	var_444_int = 0; // 0x24ed PushI
	var_445_bool = var_442_int == var_444_int; // 0x24ee Eq
	if(var_445_bool == 0) goto Label_9458; // 0x24ef JumpB
	var_440_bool = 1; // 0x24f0 MovB
	return 0; // 0x24f1 Return
	
Label_9458:
	var_440_bool = 0; // 0x24f2 MovB
	return 0; // 0x24f3 Return
}


func_4839(var_0_object, var_1_object, var_2_object, var_3_string, var_977_object, var_978_object)
{
	var_0_object = var_978_object; // 0x12e8 TMov
	var_1_object = var_977_object; // 0x12e9 TMov
	var_3_string = 0; // 0x12ea TMovB
	var_983_int = 1; // 0x12eb PushI
	if(var_983_int == 0) goto Label_4872; // 0x12ec JumpB
	var_984_string = ""; // 0x12ed PushV
	var_984_string = "Neutral"; // 0x12ee MovS
	func_4902(var_978_object, var_984_string); // 0x12ef NEW_2
	var_992_int = 533245; // 0x12f1 PushI
	SetMessage(var_992_int); // 0x12f2 TObjFunc
	ClearReplies(); // 0x12f4 TObjFunc
	var_993_bool = 0; var_994_object = Obj(); // 0x12f6 PushV
	var_994_object = var_1_object; // 0x12f7 MovT
	func_9496(var_994_object); // 0x12f8 NEW_2
	if(var_993_bool == 0) goto Label_4864; // 0x12fa JumpB
	var_999_int = 533246; // 0x12fb PushI
	var_1000_int = 42854; // 0x12fc PushI
	var_1001_int = 34760; // 0x12fd PushI
	AddReply(var_999_int, var_1000_int, var_1001_int); // 0x12fe TObjFunc
	
Label_4864:
	var_1002_int = 540800; // 0x1300 PushI
	var_1003_int = -1; // 0x1301 PushI
	var_1004_int = 42851; // 0x1302 PushI
	AddReply(var_1002_int, var_1003_int, var_1004_int); // 0x1303 TObjFunc
	goto Label_4872; // 0x1305 Jump
	
Label_4872:
	var_1005_bool = 0; // 0x1308 PushV
	func_8923(var_1005_bool); // 0x1309 NEW_2
	if(var_1005_bool == 0) goto Label_4887; // 0x130b JumpB
	
Label_4876:
	lshWaitForAnimEnd(); // 0x130c Func
	var_1006_string = var_3_string; // 0x130e PushT
	if(var_1006_string == 0) goto Label_4881; // 0x130f JumpB
	goto Label_4886; // 0x1310 Jump
	
Label_4886:
	goto Label_4901; // 0x1316 Jump
	
Label_4901:
	return 0; // 0x1325 Return
	
Label_4881:
	var_1007_string = ""; // 0x1311 PushV
	var_1007_string = var_2_object; // 0x1312 MovT
	func_8704(var_1007_string); // 0x1313 NEW_2
	goto Label_4876; // 0x1315 Jump
	
Label_4887:
	var_1008_string = "all"; // 0x1317 PushS
	var_1009_string = "idle"; // 0x1318 PushS
	PlayAnimation(var_1008_string, var_1009_string); // 0x1319 Func
	
Label_4891:
	WaitForAnimEnd(); // 0x131b Func
	var_1010_string = var_3_string; // 0x131d PushT
	if(var_1010_string == 0) goto Label_4896; // 0x131e JumpB
	goto Label_4901; // 0x131f Jump
	
Label_4896:
	var_1011_string = "all"; // 0x1320 PushS
	var_1012_string = "idle"; // 0x1321 PushS
	PlayAnimation(var_1011_string, var_1012_string); // 0x1322 Func
	goto Label_4891; // 0x1324 Jump
}


func_8426(var_216_bool, var_217_object, var_218_string, var_219_float, var_220_float, var_221_float)
{
	var_222_float = 0; var_223_float = 0; // 0x20ea PushV
	var_224_bool = 0; var_225_object = Obj(); var_226_string = ""; // 0x20eb PushV
	var_225_object = var_217_object; // 0x20ec Mov
	var_226_string = var_218_string; // 0x20ed Mov
	func_8414(var_224_bool, var_225_object, var_226_string); // 0x20ee NEW_2
	var_233_bool = var_224_bool == 0; // 0x20f0 Not
	if(var_233_bool == 0) goto Label_8436; // 0x20f1 JumpB
	var_216_bool = 0; // 0x20f2 MovB
	return 2; // 0x20f3 Return
	
Label_8436:
	GetProperty(var_218_string, var_223_float); // 0x20f4 ObjFunc
	var_234_float = 0; var_235_float = 0; var_236_float = 0; var_237_float = 0; // 0x20f6 PushV
	var_235_float = var_223_float + var_219_float; // 0x20f7 Add2
	var_236_float = var_220_float; // 0x20f8 Mov
	var_237_float = var_221_float; // 0x20f9 Mov
	func_8773(var_234_float, var_235_float, var_236_float, var_237_float); // 0x20fa NEW_2
	SetProperty(var_218_string, var_234_float); // 0x20fc ObjFunc
	var_216_bool = 1; // 0x20fe MovB
	return 2; // 0x20ff Return
}


func_8941()
{
	var_91_string = "ood1Viktor2"; // 0x22ee PushS
	var_92_int = 1; // 0x22ef PushI
	SetVariable(var_91_string, var_92_int); // 0x22f0 Func
	return 0; // 0x22f2 Return
}


func_8947()
{
	var_184_string = "ood1Viktor3"; // 0x22f4 PushS
	var_185_int = 1; // 0x22f5 PushI
	SetVariable(var_184_string, var_185_int); // 0x22f6 Func
	return 0; // 0x22f8 Return
}


func_9460(var_427_bool)
{
	var_429_int = 0; var_430_string = ""; // 0x24f5 PushV
	var_430_string = "d1q01"; // 0x24f6 MovS
	func_8784(var_429_int, var_430_string); // 0x24f7 NEW_2
	var_431_int = 0; // 0x24f9 PushI
	var_432_bool = var_429_int == var_431_int; // 0x24fa Eq
	if(var_432_bool == 0) goto Label_9470; // 0x24fb JumpB
	var_427_bool = 1; // 0x24fc MovB
	return 0; // 0x24fd Return
	
Label_9470:
	var_427_bool = 0; // 0x24fe MovB
	return 0; // 0x24ff Return
}


func_6387(var_0_object, var_1269_int, var_1270_object)
{
	var_1272_object = Obj(); var_1273_bool = 0; var_1274_int = 0; var_1275_bool = 0; var_1276_object = Obj(); var_1277_bool = 0; var_1278_int = 0; var_1279_bool = 0; // 0x18f3 PushV
	var_0_object = var_1270_object; // 0x18f4 TMov
	var_1280_bool = 0; var_1281_object = Obj(); var_1282_float = 0; // 0x18f5 PushV
	var_1281_object = var_1270_object; // 0x18f6 Mov
	var_1282_float = 70.0; // 0x18f7 MovF
	func_8479(var_1281_object, var_1282_float); // 0x18f8 NEW_2
	var_1283_bool = var_1280_bool == 0; // 0x18fa Not
	if(var_1283_bool == 0) goto Label_6398; // 0x18fb JumpB
	var_1269_int = -2; // 0x18fc MovI
	return 8; // 0x18fd Return
	
Label_6398:
	CreateDialog(var_1276_object); // 0x18fe Func
	var_1284_int = 0; // 0x1900 PushV
	func_8917(var_1284_int); // 0x1901 NEW_2
	SetNPCName(var_1284_int); // 0x1903 ObjFunc
	var_1285_int = 0; // 0x1905 PushV
	func_8915(var_1285_int); // 0x1906 NEW_2
	SetNPCDescription(var_1285_int); // 0x1908 ObjFunc
	var_1286_string = ""; // 0x190a PushV
	func_8919(var_1286_string); // 0x190b NEW_2
	SetPhoto(var_1286_string); // 0x190d ObjFunc
	var_1287_string = ""; // 0x190f PushV
	func_8921(var_1287_string); // 0x1910 NEW_2
	SetPhoto2(var_1287_string); // 0x1912 ObjFunc
	var_1288_int = 0; // 0x1914 PushV
	func_10310(var_1288_int); // 0x1915 NEW_2
	SetPlayerName(var_1288_int); // 0x1917 ObjFunc
	var_1278_int = -1; // 0x1919 MovI
	IsOverrideActive(var_1277_bool); // 0x191a Func
	var_1289_bool = var_1277_bool; // 0x191c Push
	if(var_1289_bool == 0) goto Label_6432; // 0x191d JumpB
	var_1269_int = -2; // 0x191e MovI
	return 8; // 0x191f Return
	
Label_6432:
	DoDialog(var_1276_object); // 0x1920 Func
	var_1290_bool = 0; var_1291_object = Obj(); // 0x1922 PushV
	var_1292_object = Obj(); // 0x1923 PushV
	func_8757(var_1292_object); // 0x1924 NEW_2
	var_1291_object = var_1292_object; // 0x1925 Mov
	func_8566(var_1290_bool, var_1291_object); // 0x1927 NEW_2
	var_1293_object = Obj(); var_1294_object = Obj(); // 0x1929 PushV
	var_1293_object = var_1270_object; // 0x192a Mov
	var_1294_object = var_1276_object; // 0x192b Mov
	TaskCall(22); // 0x192c TaskCall
	func_6468(var_1295_object, var_1296_object, var_1297_string, var_1298_bool, var_1293_object, var_1294_object); // 0x192d NEW_2
	TaskReturn(); // 0x192e TaskReturn
	IsDialogEnd(var_1279_bool); // 0x1930 ObjFunc
	
Label_6450:
	var_1381_bool = var_1279_bool == 0; // 0x1932 Not
	if(var_1381_bool == 0) goto Label_6457; // 0x1933 JumpB
	sync(); // 0x1934 Func
	IsDialogEnd(var_1279_bool); // 0x1936 ObjFunc
	goto Label_6450; // 0x1938 Jump
	
Label_6457:
	var_1382_object = Obj(); // 0x1939 PushV
	var_1382_object = var_1270_object; // 0x193a Mov
	func_8548(); // 0x193b NEW_2
	StopDialog(var_1276_object); // 0x193d Func
	GetReturnValue(var_1278_int); // 0x193f ObjFunc
	var_1269_int = var_1278_int; // 0x1941 Mov
	return 8; // 0x1942 Return
}


func_8953()
{
	var_129_string = "playsound"; // 0x22fa PushS
	var_130_string = "givemoney"; // 0x22fb PushS
	TriggerWorld(var_129_string, var_130_string); // 0x22fc Func
	return 0; // 0x22fe Return
}


func_8959()
{
	var_146_object = Obj(); var_147_string = ""; var_148_float = 0; // 0x2300 PushV
	var_149_object = Obj(); // 0x2301 PushV
	func_10260(var_149_object); // 0x2302 NEW_2
	var_146_object = var_149_object; // 0x2303 Mov
	var_147_string = "pt_b1q05_patrol_house"; // 0x2305 MovS
	var_148_float = 2; // 0x2306 MovI
	func_10277(var_146_object, var_147_string, var_148_float); // 0x2307 NEW_2
	var_169_object = Obj(); // 0x2309 PushV
	func_10260(var_169_object); // 0x230a NEW_2
	ShowMap(var_169_object); // 0x230c ObjFunc
	return 0; // 0x230e Return
}


func_9472(var_418_bool)
{
	var_420_int = 0; var_421_string = ""; // 0x2501 PushV
	var_421_string = "d1q01TeloNedostupno"; // 0x2502 MovS
	func_8784(var_420_int, var_421_string); // 0x2503 NEW_2
	var_422_int = 1; // 0x2505 PushI
	var_423_bool = var_420_int == var_422_int; // 0x2506 Eq
	if(var_423_bool == 0) goto Label_9482; // 0x2507 JumpB
	var_418_bool = 1; // 0x2508 MovB
	return 0; // 0x2509 Return
	
Label_9482:
	var_418_bool = 0; // 0x250a MovB
	return 0; // 0x250b Return
}


func_8448(var_114_string, var_115_int)
{
	var_116_int = 0; var_117_int = 0; // 0x2100 PushV
	GetProperty(var_114_string, var_117_int); // 0x2101 ObjFunc
	var_118_int = var_117_int + var_115_int; // 0x2103 Add
	SetProperty(var_114_string, var_118_int); // 0x2104 ObjFunc
	return 2; // 0x2106 Return
}


func_7426(var_2_object, var_1233_string)
{
	var_1234_bool = 0; // 0x1d03 PushV
	func_8923(var_1234_bool); // 0x1d04 NEW_2
	var_1235_bool = var_1234_bool == 0; // 0x1d06 Not
	if(var_1235_bool == 0) goto Label_7433; // 0x1d07 JumpB
	return 0; // 0x1d08 Return
	
Label_7433:
	var_1236_bool = var_1233_string == var_2_object; // 0x1d09 Eq
	if(var_1236_bool == 0) goto Label_7436; // 0x1d0a JumpB
	return 0; // 0x1d0b Return
	
Label_7436:
	var_1237_string = ""; var_1238_bool = 0; // 0x1d0c PushV
	var_1237_string = var_1233_string; // 0x1d0d Mov
	var_1239_string = ""; // 0x1d0e PushS
	var_1240_bool = var_1233_string == var_1239_string; // 0x1d0f Eq
	if(var_1240_bool == 0) goto Label_7443; // 0x1d10 JumpB
	var_1238_bool = 0; // 0x1d11 MovB
	goto Label_7444; // 0x1d12 Jump
	
Label_7444:
	func_8720(var_1237_string, var_1238_bool); // 0x1d14 NEW_2
	var_2_object = var_1233_string; // 0x1d16 TMov
	return 0; // 0x1d17 Return
	
Label_7443:
	var_1238_bool = 1; // 0x1d13 MovB
}


func_9985()
{
	var_83_object = Obj(); var_84_object = Obj(); // 0x2701 PushV
	var_85_int = 669; // 0x2702 PushI
	var_86_int = 2; // 0x2703 PushI
	var_87_int = 534123; // 0x2704 PushI
	CreateDiaryEntry(var_84_object, var_85_int, var_86_int, var_87_int); // 0x2705 Func
	var_88_bool = 0; var_89_object = Obj(); var_90_int = 0; // 0x2707 PushV
	var_89_object = var_84_object; // 0x2708 Mov
	var_90_int = 666; // 0x2709 MovI
	func_10232(var_88_bool, var_89_object, var_90_int); // 0x270a NEW_2
	return 2; // 0x270c Return
}


func_8455(var_82_bool, var_83_cvector)
{
	var_84_cvector = CVector(0,0,0); var_85_cvector = CVector(0,0,0); var_86_bool = 0; var_87_cvector = CVector(0,0,0); var_88_cvector = CVector(0,0,0); var_89_bool = 0; // 0x2107 PushV
	GetPosition(var_87_cvector); // 0x2108 Func
	var_88_cvector = var_83_cvector - var_87_cvector; // 0x210a Sub2
	var_90_float = GetByIndex(var_88_cvector, 0); // 0x210b PushE
	var_91_float = GetByIndex(var_88_cvector, 2); // 0x210c PushE
	Rotate(var_90_float, var_91_float, var_89_bool); // 0x210d Func
	var_82_bool = var_89_bool; // 0x210f Mov
	return 6; // 0x2110 Return
}


func_7946(var_2_object, var_1416_string)
{
	var_1417_bool = 0; // 0x1f0b PushV
	func_8923(var_1417_bool); // 0x1f0c NEW_2
	var_1418_bool = var_1417_bool == 0; // 0x1f0e Not
	if(var_1418_bool == 0) goto Label_7953; // 0x1f0f JumpB
	return 0; // 0x1f10 Return
	
Label_7953:
	var_1419_bool = var_1416_string == var_2_object; // 0x1f11 Eq
	if(var_1419_bool == 0) goto Label_7956; // 0x1f12 JumpB
	return 0; // 0x1f13 Return
	
Label_7956:
	var_1420_string = ""; var_1421_bool = 0; // 0x1f14 PushV
	var_1420_string = var_1416_string; // 0x1f15 Mov
	var_1422_string = ""; // 0x1f16 PushS
	var_1423_bool = var_1416_string == var_1422_string; // 0x1f17 Eq
	if(var_1423_bool == 0) goto Label_7963; // 0x1f18 JumpB
	var_1421_bool = 0; // 0x1f19 MovB
	goto Label_7964; // 0x1f1a Jump
	
Label_7964:
	func_8720(var_1420_string, var_1421_bool); // 0x1f1c NEW_2
	var_2_object = var_1416_string; // 0x1f1e TMov
	return 0; // 0x1f1f Return
	
Label_7963:
	var_1421_bool = 1; // 0x1f1b MovB
}


func_9484(var_359_bool)
{
	var_361_int = 0; var_362_string = ""; // 0x250d PushV
	var_362_string = "d1q01FirstGeorgVisit"; // 0x250e MovS
	func_8784(var_361_int, var_362_string); // 0x250f NEW_2
	var_365_int = 1; // 0x2511 PushI
	var_366_bool = var_361_int == var_365_int; // 0x2512 Eq
	if(var_366_bool == 0) goto Label_9494; // 0x2513 JumpB
	var_359_bool = 1; // 0x2514 MovB
	return 0; // 0x2515 Return
	
Label_9494:
	var_359_bool = 0; // 0x2516 MovB
	return 0; // 0x2517 Return
}


func_9998()
{
	var_83_object = Obj(); var_84_object = Obj(); // 0x270e PushV
	var_85_int = 686; // 0x270f PushI
	var_86_int = 2; // 0x2710 PushI
	var_87_int = 534534; // 0x2711 PushI
	CreateDiaryEntry(var_84_object, var_85_int, var_86_int, var_87_int); // 0x2712 Func
	var_88_bool = 0; var_89_object = Obj(); var_90_int = 0; // 0x2714 PushV
	var_89_object = var_84_object; // 0x2715 Mov
	var_90_int = -1; // 0x2716 MovI
	func_10232(var_88_bool, var_89_object, var_90_int); // 0x2717 NEW_2
	return 2; // 0x2719 Return
}


func_8975(var_145_object)
{
	var_147_string = "money 7000 is given"; // 0x2310 PushS
	Trace(var_147_string); // 0x2311 Func
	var_148_object = Obj(); var_149_int = 0; // 0x2313 PushV
	var_148_object = var_145_object; // 0x2314 Mov
	var_149_int = 7000; // 0x2315 MovI
	func_8812(var_148_object, var_149_int); // 0x2316 NEW_2
	return 0; // 0x2318 Return
}


func_8465(var_78_bool)
{
	var_80_cvector = CVector(0,0,0); var_81_cvector = CVector(0,0,0); // 0x2111 PushV
	GetPosition(var_81_cvector); // 0x2112 ObjFunc
	var_82_bool = 0; var_83_cvector = CVector(0,0,0); // 0x2114 PushV
	var_83_cvector = var_81_cvector; // 0x2115 Mov
	func_8455(var_82_bool, var_83_cvector); // 0x2116 NEW_2
	var_78_bool = var_82_bool; // 0x2117 Mov
	return 2; // 0x2119 Return
}


func_277(var_0_object, var_880_int, var_881_object)
{
	var_883_object = Obj(); var_884_bool = 0; var_885_int = 0; var_886_bool = 0; var_887_object = Obj(); var_888_bool = 0; var_889_int = 0; var_890_bool = 0; // 0x115 PushV
	var_0_object = var_881_object; // 0x116 TMov
	var_891_bool = 0; var_892_object = Obj(); var_893_float = 0; // 0x117 PushV
	var_892_object = var_881_object; // 0x118 Mov
	var_893_float = 70.0; // 0x119 MovF
	func_8479(var_892_object, var_893_float); // 0x11a NEW_2
	var_894_bool = var_891_bool == 0; // 0x11c Not
	if(var_894_bool == 0) goto Label_288; // 0x11d JumpB
	var_880_int = -2; // 0x11e MovI
	return 8; // 0x11f Return
	
Label_288:
	CreateDialog(var_887_object); // 0x120 Func
	var_895_int = 0; // 0x122 PushV
	func_8917(var_895_int); // 0x123 NEW_2
	SetNPCName(var_895_int); // 0x125 ObjFunc
	var_896_int = 0; // 0x127 PushV
	func_8915(var_896_int); // 0x128 NEW_2
	SetNPCDescription(var_896_int); // 0x12a ObjFunc
	var_897_string = ""; // 0x12c PushV
	func_8919(var_897_string); // 0x12d NEW_2
	SetPhoto(var_897_string); // 0x12f ObjFunc
	var_898_string = ""; // 0x131 PushV
	func_8921(var_898_string); // 0x132 NEW_2
	SetPhoto2(var_898_string); // 0x134 ObjFunc
	var_899_int = 0; // 0x136 PushV
	func_10310(var_899_int); // 0x137 NEW_2
	SetPlayerName(var_899_int); // 0x139 ObjFunc
	var_889_int = -1; // 0x13b MovI
	IsOverrideActive(var_888_bool); // 0x13c Func
	var_900_bool = var_888_bool; // 0x13e Push
	if(var_900_bool == 0) goto Label_322; // 0x13f JumpB
	var_880_int = -2; // 0x140 MovI
	return 8; // 0x141 Return
	
Label_322:
	DoDialog(var_887_object); // 0x142 Func
	var_901_bool = 0; var_902_object = Obj(); // 0x144 PushV
	var_903_object = Obj(); // 0x145 PushV
	func_8757(var_903_object); // 0x146 NEW_2
	var_902_object = var_903_object; // 0x147 Mov
	func_8566(var_901_bool, var_902_object); // 0x149 NEW_2
	var_904_object = Obj(); var_905_object = Obj(); // 0x14b PushV
	var_904_object = var_881_object; // 0x14c Mov
	var_905_object = var_887_object; // 0x14d Mov
	TaskCall(4); // 0x14e TaskCall
	func_358(var_906_object, var_907_object, var_908_string, var_909_bool, var_904_object, var_905_object); // 0x14f NEW_2
	TaskReturn(); // 0x150 TaskReturn
	IsDialogEnd(var_890_bool); // 0x152 ObjFunc
	
Label_340:
	var_949_bool = var_890_bool == 0; // 0x154 Not
	if(var_949_bool == 0) goto Label_347; // 0x155 JumpB
	sync(); // 0x156 Func
	IsDialogEnd(var_890_bool); // 0x158 ObjFunc
	goto Label_340; // 0x15a Jump
	
Label_347:
	var_950_object = Obj(); // 0x15b PushV
	var_950_object = var_881_object; // 0x15c Mov
	func_8548(); // 0x15d NEW_2
	StopDialog(var_887_object); // 0x15f Func
	GetReturnValue(var_889_int); // 0x161 ObjFunc
	var_880_int = var_889_int; // 0x163 Mov
	return 8; // 0x164 Return
}


func_9496(var_993_bool)
{
	var_995_int = 0; var_996_string = ""; // 0x2519 PushV
	var_996_string = "d7q03"; // 0x251a MovS
	func_8784(var_995_int, var_996_string); // 0x251b NEW_2
	var_997_int = 2; // 0x251d PushI
	var_998_bool = var_995_int == var_997_int; // 0x251e Eq
	if(var_998_bool == 0) goto Label_9506; // 0x251f JumpB
	var_993_bool = 1; // 0x2520 MovB
	return 0; // 0x2521 Return
	
Label_9506:
	var_993_bool = 0; // 0x2522 MovB
	return 0; // 0x2523 Return
}


func_8985()
{
	var_81_string = "d7q03"; // 0x231a PushS
	var_82_int = 3; // 0x231b PushI
	SetVariable(var_81_string, var_82_int); // 0x231c Func
	func_10180(); // 0x231f NEW_2
	return 0; // 0x2321 Return
}


func_8474(var_74_bool)
{
	var_75_bool = 0; var_76_bool = 0; // 0x211a PushV
	IsLoaded(var_76_bool); // 0x211b Func
	var_74_bool = var_76_bool; // 0x211d Mov
	return 2; // 0x211e Return
}


func_10011()
{
	var_106_object = Obj(); var_107_object = Obj(); // 0x271b PushV
	var_108_int = 687; // 0x271c PushI
	var_109_int = 2; // 0x271d PushI
	var_110_int = 534535; // 0x271e PushI
	CreateDiaryEntry(var_107_object, var_108_int, var_109_int, var_110_int); // 0x271f Func
	var_111_bool = 0; var_112_object = Obj(); var_113_int = 0; // 0x2721 PushV
	var_112_object = var_107_object; // 0x2722 Mov
	var_113_int = 686; // 0x2723 MovI
	func_10232(var_111_bool, var_112_object, var_113_int); // 0x2724 NEW_2
	return 2; // 0x2726 Return
}


func_8479(var_106_bool, var_108_float)
{
	var_109_float = 0; var_110_cvector = CVector(0,0,0); var_111_cvector = CVector(0,0,0); var_112_cvector = CVector(0,0,0); var_113_cvector = CVector(0,0,0); var_114_cvector = CVector(0,0,0); var_115_cvector = CVector(0,0,0); var_116_bool = 0; var_117_bool = 0; var_118_float = 0; var_119_cvector = CVector(0,0,0); var_120_cvector = CVector(0,0,0); var_121_cvector = CVector(0,0,0); var_122_cvector = CVector(0,0,0); var_123_cvector = CVector(0,0,0); var_124_cvector = CVector(0,0,0); var_125_bool = 0; var_126_bool = 0; // 0x211f PushV
	GetPosition(var_119_cvector); // 0x2120 ObjFunc
	GetEyesHeight(var_118_float); // 0x2122 ObjFunc
	var_127_float = GetByIndex(var_119_cvector, 1); // 0x2124 PushE
	var_127_float = var_127_float + var_118_float; // 0x2125 Add2
	SetByIndex(var_119_cvector, 1) = var_127_float; // 0x2126 PopE
	GetPosition(var_120_cvector); // 0x2127 Func
	GetEyesHeight(var_118_float); // 0x2129 Func
	var_128_float = GetByIndex(var_120_cvector, 1); // 0x212b PushE
	var_128_float = var_128_float + var_118_float; // 0x212c Add2
	SetByIndex(var_120_cvector, 1) = var_128_float; // 0x212d PopE
	var_121_cvector = var_119_cvector - var_120_cvector; // 0x212e Sub2
	var_129_float = GetByIndex(var_121_cvector, 1); // 0x212f PushE
	var_129_float = 0; // 0x2130 MovI
	SetByIndex(var_121_cvector, 1) = var_129_float; // 0x2131 PopE
	var_130_int = var_121_cvector | var_121_cvector; // 0x2132 Or
	var_131_float = sqrt(var_130_int); // 0x2133 Sqrt
	var_121_cvector = var_121_cvector / var_121_cvector; // 0x2134 Div2
	var_122_cvector = -var_121_cvector; // 0x2135 Neg2
	var_132_float = var_121_cvector * var_108_float; // 0x2136 Mult
	var_133_cvector = CVector(0,0,0); var_134_cvector = CVector(0,0,0); // 0x2137 PushV
	var_135_cvector = CVector(0.0, 1.0, 0.0); // 0x2138 PushVec
	var_134_cvector = var_122_cvector ^ var_135_cvector; // 0x2139 Xor2
	func_8763(var_133_cvector, var_134_cvector); // 0x213a NEW_2
	var_141_int = 25; // 0x213c PushI
	var_142_float = var_133_cvector * var_141_int; // 0x213d Mult
	var_143_int = var_132_float + var_142_float; // 0x213e Add
	var_144_cvector = CVector(0.0, 10.0, 0.0); // 0x213f PushVec
	var_123_cvector = var_143_int - var_144_cvector; // 0x2140 Sub2
	var_124_cvector = var_120_cvector + var_123_cvector; // 0x2141 Add2
	IsOverrideActive(var_125_bool); // 0x2142 Func
	var_145_bool = var_125_bool; // 0x2144 Push
	if(var_145_bool == 0) goto Label_8520; // 0x2145 JumpB
	var_106_bool = 0; // 0x2146 MovB
	return 18; // 0x2147 Return
	
Label_8520:
	StopWorld(); // 0x2148 Func
	var_146_bool = 1; // 0x214a PushB
	CameraTransit(var_124_cvector, var_122_cvector, var_146_bool); // 0x214b Func
	var_147_float = GetByIndex(var_123_cvector, 0); // 0x214d PushE
	var_148_float = GetByIndex(var_123_cvector, 2); // 0x214e PushE
	Rotate(var_147_float, var_148_float); // 0x214f Func
	var_149_bool = 0; // 0x2151 PushV
	func_8923(var_149_bool); // 0x2152 NEW_2
	if(var_149_bool == 0) goto Label_8534; // 0x2154 JumpB
	goto Label_8542; // 0x2155 Jump
	
Label_8542:
	CameraWaitForPlayFinish(); // 0x215e Func
	ResumeWorld(); // 0x2160 Func
	var_106_bool = 1; // 0x2162 MovB
	return 18; // 0x2163 Return
	
Label_8534:
	var_150_string = "head"; // 0x2156 PushS
	HasAnimationTrack(var_126_bool, var_150_string); // 0x2157 Func
	var_151_bool = var_126_bool; // 0x2159 Push
	if(var_151_bool == 0) goto Label_8542; // 0x215a JumpB
	var_152_string = "head"; // 0x215b PushS
	LookAsyncCamera(var_152_string); // 0x215c Func
}


func_8994()
{
	var_81_string = "d10q02"; // 0x2323 PushS
	var_82_int = 3; // 0x2324 PushI
	SetVariable(var_81_string, var_82_int); // 0x2325 Func
	func_9985(); // 0x2328 NEW_2
	return 0; // 0x232a Return
}


func_9508(var_1242_bool)
{
	var_1244_int = 0; var_1245_string = ""; // 0x2525 PushV
	var_1245_string = "d10q02"; // 0x2526 MovS
	func_8784(var_1244_int, var_1245_string); // 0x2527 NEW_2
	var_1246_int = 2; // 0x2529 PushI
	var_1247_bool = var_1244_int == var_1246_int; // 0x252a Eq
	if(var_1247_bool == 0) goto Label_9518; // 0x252b JumpB
	var_1242_bool = 1; // 0x252c MovB
	return 0; // 0x252d Return
	
Label_9518:
	var_1242_bool = 0; // 0x252e MovB
	return 0; // 0x252f Return
}


func_4902(var_2_object, var_984_string)
{
	var_985_bool = 0; // 0x1327 PushV
	func_8923(var_985_bool); // 0x1328 NEW_2
	var_986_bool = var_985_bool == 0; // 0x132a Not
	if(var_986_bool == 0) goto Label_4909; // 0x132b JumpB
	return 0; // 0x132c Return
	
Label_4909:
	var_987_bool = var_984_string == var_2_object; // 0x132d Eq
	if(var_987_bool == 0) goto Label_4912; // 0x132e JumpB
	return 0; // 0x132f Return
	
Label_4912:
	var_988_string = ""; var_989_bool = 0; // 0x1330 PushV
	var_988_string = var_984_string; // 0x1331 Mov
	var_990_string = ""; // 0x1332 PushS
	var_991_bool = var_984_string == var_990_string; // 0x1333 Eq
	if(var_991_bool == 0) goto Label_4919; // 0x1334 JumpB
	var_989_bool = 0; // 0x1335 MovB
	goto Label_4920; // 0x1336 Jump
	
Label_4920:
	func_8720(var_988_string, var_989_bool); // 0x1338 NEW_2
	var_2_object = var_984_string; // 0x133a TMov
	return 0; // 0x133b Return
	
Label_4919:
	var_989_bool = 1; // 0x1337 MovB
}


func_10024()
{
	var_115_object = Obj(); var_116_object = Obj(); // 0x2728 PushV
	var_117_int = 32; // 0x2729 PushI
	var_118_int = 1; // 0x272a PushI
	var_119_int = 512114; // 0x272b PushI
	CreateDiaryEntry(var_116_object, var_117_int, var_118_int, var_119_int); // 0x272c Func
	var_120_bool = 0; var_121_object = Obj(); var_122_int = 0; // 0x272e PushV
	var_121_object = var_116_object; // 0x272f Mov
	var_122_int = 2; // 0x2730 MovI
	func_10232(var_120_bool, var_121_object, var_122_int); // 0x2731 NEW_2
	return 2; // 0x2733 Return
}


func_9003()
{
	var_133_bool = 0; var_134_string = ""; var_135_string = ""; // 0x232c PushV
	var_134_string = "quest_d10_02"; // 0x232d MovS
	var_135_string = "unlock_georg"; // 0x232e MovS
	func_8883(var_133_bool, var_134_string, var_135_string); // 0x232f NEW_2
	return 0; // 0x2331 Return
}


func_9520(var_1300_bool)
{
	var_1302_int = 0; var_1303_string = ""; // 0x2531 PushV
	var_1303_string = "ood11Viktor4"; // 0x2532 MovS
	func_8784(var_1302_int, var_1303_string); // 0x2533 NEW_2
	var_1304_int = 0; // 0x2535 PushI
	var_1305_bool = var_1302_int == var_1304_int; // 0x2536 Eq
	if(var_1305_bool == 0) goto Label_9530; // 0x2537 JumpB
	var_1300_bool = 1; // 0x2538 MovB
	return 0; // 0x2539 Return
	
Label_9530:
	var_1300_bool = 0; // 0x253a MovB
	return 0; // 0x253b Return
}


func_9010()
{
	return 0; // 0x2333 Return
}


func_819(var_0_object, var_1_object, var_2_object, var_3_string, var_352_object, var_353_object)
{
	var_0_object = var_353_object; // 0x334 TMov
	var_1_object = var_352_object; // 0x335 TMov
	var_3_string = 0; // 0x336 TMovB
	var_358_int = 1; // 0x337 PushI
	if(var_358_int == 0) goto Label_940; // 0x338 JumpB
	var_359_bool = 0; var_360_object = Obj(); // 0x339 PushV
	var_360_object = var_1_object; // 0x33a MovT
	func_9484(var_360_object); // 0x33b NEW_2
	var_367_bool = var_359_bool == 0; // 0x33d Not
	if(var_367_bool == 0) goto Label_866; // 0x33e JumpB
	var_368_string = ""; // 0x33f PushV
	var_368_string = "Neutral"; // 0x340 MovS
	func_970(var_353_object, var_368_string); // 0x341 NEW_2
	var_376_int = 505111; // 0x343 PushI
	SetMessage(var_376_int); // 0x344 TObjFunc
	ClearReplies(); // 0x346 TObjFunc
	var_377_bool = 0; var_378_object = Obj(); // 0x348 PushV
	var_378_object = var_1_object; // 0x349 MovT
	func_9424(var_378_object); // 0x34a NEW_2
	if(var_377_bool == 0) goto Label_850; // 0x34c JumpB
	var_383_int = 505112; // 0x34d PushI
	var_384_int = 5626; // 0x34e PushI
	var_385_int = 5625; // 0x34f PushI
	AddReply(var_383_int, var_384_int, var_385_int); // 0x350 TObjFunc
	
Label_850:
	var_386_bool = 0; var_387_object = Obj(); // 0x352 PushV
	var_387_object = var_1_object; // 0x353 MovT
	func_9424(var_387_object); // 0x354 NEW_2
	if(var_386_bool == 0) goto Label_860; // 0x356 JumpB
	var_388_int = 505119; // 0x357 PushI
	var_389_int = 5626; // 0x358 PushI
	var_390_int = 5632; // 0x359 PushI
	AddReply(var_388_int, var_389_int, var_390_int); // 0x35a TObjFunc
	
Label_860:
	var_391_int = 505120; // 0x35c PushI
	var_392_int = -1; // 0x35d PushI
	var_393_int = 5634; // 0x35e PushI
	AddReply(var_391_int, var_392_int, var_393_int); // 0x35f TObjFunc
	goto Label_940; // 0x361 Jump
	
Label_940:
	var_394_bool = 0; // 0x3ac PushV
	func_8923(var_394_bool); // 0x3ad NEW_2
	if(var_394_bool == 0) goto Label_955; // 0x3af JumpB
	
Label_944:
	lshWaitForAnimEnd(); // 0x3b0 Func
	var_395_string = var_3_string; // 0x3b2 PushT
	if(var_395_string == 0) goto Label_949; // 0x3b3 JumpB
	goto Label_954; // 0x3b4 Jump
	
Label_954:
	goto Label_969; // 0x3ba Jump
	
Label_969:
	return 0; // 0x3c9 Return
	
Label_949:
	var_396_string = ""; // 0x3b5 PushV
	var_396_string = var_2_object; // 0x3b6 MovT
	func_8704(var_396_string); // 0x3b7 NEW_2
	goto Label_944; // 0x3b9 Jump
	
Label_955:
	var_397_string = "all"; // 0x3bb PushS
	var_398_string = "idle"; // 0x3bc PushS
	PlayAnimation(var_397_string, var_398_string); // 0x3bd Func
	
Label_959:
	WaitForAnimEnd(); // 0x3bf Func
	var_399_string = var_3_string; // 0x3c1 PushT
	if(var_399_string == 0) goto Label_964; // 0x3c2 JumpB
	goto Label_969; // 0x3c3 Jump
	
Label_964:
	var_400_string = "all"; // 0x3c4 PushS
	var_401_string = "idle"; // 0x3c5 PushS
	PlayAnimation(var_400_string, var_401_string); // 0x3c6 Func
	goto Label_959; // 0x3c8 Jump
	
Label_866:
	var_402_string = ""; // 0x362 PushV
	var_402_string = "Neutral"; // 0x363 MovS
	func_970(var_353_object, var_402_string); // 0x364 NEW_2
	var_403_int = 505106; // 0x366 PushI
	SetMessage(var_403_int); // 0x367 TObjFunc
	ClearReplies(); // 0x369 TObjFunc
	var_404_bool = 0; // 0x36b PushV
	var_404_bool = 0; // 0x36c MovB
	var_405_bool = 0; var_406_object = Obj(); // 0x36d PushV
	var_406_object = var_1_object; // 0x36e MovT
	func_9484(var_406_object); // 0x36f NEW_2
	if(var_405_bool == 0) goto Label_888; // 0x371 JumpB
	var_407_bool = 0; var_408_object = Obj(); // 0x372 PushV
	var_408_object = var_1_object; // 0x373 MovT
	func_9436(var_408_object); // 0x374 NEW_2
	if(var_407_bool == 0) goto Label_888; // 0x376 JumpB
	var_404_bool = 1; // 0x377 MovB
	
Label_888:
	if(var_404_bool == 0) goto Label_894; // 0x378 JumpB
	var_413_int = 505107; // 0x379 PushI
	var_414_int = 9234; // 0x37a PushI
	var_415_int = 5620; // 0x37b PushI
	AddReply(var_413_int, var_414_int, var_415_int); // 0x37c TObjFunc
	
Label_894:
	var_416_bool = 0; // 0x37e PushV
	var_416_bool = 0; // 0x37f MovB
	var_417_bool = 0; // 0x380 PushV
	var_417_bool = 0; // 0x381 MovB
	var_418_bool = 0; var_419_object = Obj(); // 0x382 PushV
	var_419_object = var_1_object; // 0x383 MovT
	func_9472(var_419_object); // 0x384 NEW_2
	if(var_418_bool == 0) goto Label_909; // 0x386 JumpB
	var_424_bool = 0; var_425_object = Obj(); // 0x387 PushV
	var_425_object = var_1_object; // 0x388 MovT
	func_9951(var_425_object); // 0x389 NEW_2
	if(var_424_bool == 0) goto Label_909; // 0x38b JumpB
	var_417_bool = 1; // 0x38c MovB
	
Label_909:
	if(var_417_bool == 0) goto Label_916; // 0x38d JumpB
	var_440_bool = 0; var_441_object = Obj(); // 0x38e PushV
	var_441_object = var_1_object; // 0x38f MovT
	func_9448(var_441_object); // 0x390 NEW_2
	if(var_440_bool == 0) goto Label_916; // 0x392 JumpB
	var_416_bool = 1; // 0x393 MovB
	
Label_916:
	if(var_416_bool == 0) goto Label_922; // 0x394 JumpB
	var_446_int = 505142; // 0x395 PushI
	var_447_int = 5662; // 0x396 PushI
	var_448_int = 5661; // 0x397 PushI
	AddReply(var_446_int, var_447_int, var_448_int); // 0x398 TObjFunc
	
Label_922:
	var_449_bool = 0; var_450_object = Obj(); // 0x39a PushV
	var_450_object = var_1_object; // 0x39b MovT
	func_9412(var_450_object); // 0x39c NEW_2
	if(var_449_bool == 0) goto Label_932; // 0x39e JumpB
	var_455_int = 521229; // 0x39f PushI
	var_456_int = 34260; // 0x3a0 PushI
	var_457_int = 22420; // 0x3a1 PushI
	AddReply(var_455_int, var_456_int, var_457_int); // 0x3a2 TObjFunc
	
Label_932:
	var_458_int = 505110; // 0x3a4 PushI
	var_459_int = -1; // 0x3a5 PushI
	var_460_int = 5623; // 0x3a6 PushI
	AddReply(var_458_int, var_459_int, var_460_int); // 0x3a7 TObjFunc
	goto Label_940; // 0x3a9 Jump
}


func_9012()
{
	var_1308_string = "ood11Viktor4"; // 0x2335 PushS
	var_1309_int = 1; // 0x2336 PushI
	SetVariable(var_1308_string, var_1309_int); // 0x2337 Func
	return 0; // 0x2339 Return
}


func_10037()
{
	var_190_object = Obj(); var_191_object = Obj(); // 0x2735 PushV
	var_192_int = 275; // 0x2736 PushI
	var_193_int = 2; // 0x2737 PushI
	var_194_int = 521237; // 0x2738 PushI
	CreateDiaryEntry(var_191_object, var_192_int, var_193_int, var_194_int); // 0x2739 Func
	var_195_bool = 0; var_196_object = Obj(); var_197_int = 0; // 0x273b PushV
	var_196_object = var_191_object; // 0x273c Mov
	var_197_int = 7; // 0x273d MovI
	func_10232(var_195_bool, var_196_object, var_197_int); // 0x273e NEW_2
	return 2; // 0x2740 Return
}


func_9018()
{
	var_81_string = "d11q06"; // 0x233b PushS
	var_82_int = 1; // 0x233c PushI
	SetVariable(var_81_string, var_82_int); // 0x233d Func
	func_9998(); // 0x2340 NEW_2
	func_10011(); // 0x2343 NEW_2
	var_114_object = Obj(); var_115_string = ""; // 0x2345 PushV
	var_115_string = "quest_d11_06"; // 0x2346 MovS
	func_8789(var_114_object, var_115_string); // 0x2347 NEW_2
	return 0; // 0x2349 Return
}


func_9532(var_627_bool)
{
	var_629_int = 0; var_630_string = ""; // 0x253d PushV
	var_630_string = "ood3Viktor3"; // 0x253e MovS
	func_8784(var_629_int, var_630_string); // 0x253f NEW_2
	var_631_int = 0; // 0x2541 PushI
	var_632_bool = var_629_int == var_631_int; // 0x2542 Eq
	if(var_632_bool == 0) goto Label_9542; // 0x2543 JumpB
	var_627_bool = 1; // 0x2544 MovB
	return 0; // 0x2545 Return
	
Label_9542:
	var_627_bool = 0; // 0x2546 MovB
	return 0; // 0x2547 Return
}


func_10050()
{
	var_184_object = Obj(); var_185_object = Obj(); // 0x2742 PushV
	var_186_int = 136; // 0x2743 PushI
	var_187_int = 2; // 0x2744 PushI
	var_188_int = 515306; // 0x2745 PushI
	CreateDiaryEntry(var_185_object, var_186_int, var_187_int, var_188_int); // 0x2746 Func
	var_189_bool = 0; var_190_object = Obj(); var_191_int = 0; // 0x2748 PushV
	var_190_object = var_185_object; // 0x2749 Mov
	var_191_int = 26; // 0x274a MovI
	func_10232(var_189_bool, var_190_object, var_191_int); // 0x274b NEW_2
	return 2; // 0x274d Return
}


func_6468(var_0_object, var_1_object, var_2_object, var_3_string, var_1293_object, var_1294_object)
{
	var_0_object = var_1294_object; // 0x1945 TMov
	var_1_object = var_1293_object; // 0x1946 TMov
	var_3_string = 0; // 0x1947 TMovB
	var_1299_int = 1; // 0x1948 PushI
	if(var_1299_int == 0) goto Label_6579; // 0x1949 JumpB
	var_1300_bool = 0; var_1301_object = Obj(); // 0x194a PushV
	var_1301_object = var_1_object; // 0x194b MovT
	func_9520(var_1301_object); // 0x194c NEW_2
	if(var_1300_bool == 0) goto Label_6509; // 0x194e JumpB
	var_1306_object = Obj(); var_1307_object = Obj(); // 0x194f PushV
	var_1306_object = var_1_object; // 0x1950 MovT
	var_1307_object = var_0_object; // 0x1951 MovT
	func_9012(); // 0x1952 NEW_2
	var_1310_object = Obj(); var_1311_object = Obj(); // 0x1954 PushV
	var_1310_object = var_1_object; // 0x1955 MovT
	var_1311_object = var_0_object; // 0x1956 MovT
	func_9061(); // 0x1957 NEW_2
	var_1314_string = ""; // 0x1959 PushV
	var_1314_string = "Neutral"; // 0x195a MovS
	func_6609(var_1294_object, var_1314_string); // 0x195b NEW_2
	var_1322_int = 534501; // 0x195d PushI
	SetMessage(var_1322_int); // 0x195e TObjFunc
	ClearReplies(); // 0x1960 TObjFunc
	var_1323_int = 538426; // 0x1962 PushI
	var_1324_int = 40303; // 0x1963 PushI
	var_1325_int = 40302; // 0x1964 PushI
	AddReply(var_1323_int, var_1324_int, var_1325_int); // 0x1965 TObjFunc
	var_1326_int = 538432; // 0x1967 PushI
	var_1327_int = 40311; // 0x1968 PushI
	var_1328_int = 40308; // 0x1969 PushI
	AddReply(var_1326_int, var_1327_int, var_1328_int); // 0x196a TObjFunc
	goto Label_6579; // 0x196c Jump
	
Label_6579:
	var_1329_bool = 0; // 0x19b3 PushV
	func_8923(var_1329_bool); // 0x19b4 NEW_2
	if(var_1329_bool == 0) goto Label_6594; // 0x19b6 JumpB
	
Label_6583:
	lshWaitForAnimEnd(); // 0x19b7 Func
	var_1330_string = var_3_string; // 0x19b9 PushT
	if(var_1330_string == 0) goto Label_6588; // 0x19ba JumpB
	goto Label_6593; // 0x19bb Jump
	
Label_6593:
	goto Label_6608; // 0x19c1 Jump
	
Label_6608:
	return 0; // 0x19d0 Return
	
Label_6588:
	var_1331_string = ""; // 0x19bc PushV
	var_1331_string = var_2_object; // 0x19bd MovT
	func_8704(var_1331_string); // 0x19be NEW_2
	goto Label_6583; // 0x19c0 Jump
	
Label_6594:
	var_1332_string = "all"; // 0x19c2 PushS
	var_1333_string = "idle"; // 0x19c3 PushS
	PlayAnimation(var_1332_string, var_1333_string); // 0x19c4 Func
	
Label_6598:
	WaitForAnimEnd(); // 0x19c6 Func
	var_1334_string = var_3_string; // 0x19c8 PushT
	if(var_1334_string == 0) goto Label_6603; // 0x19c9 JumpB
	goto Label_6608; // 0x19ca Jump
	
Label_6603:
	var_1335_string = "all"; // 0x19cb PushS
	var_1336_string = "idle"; // 0x19cc PushS
	PlayAnimation(var_1335_string, var_1336_string); // 0x19cd Func
	goto Label_6598; // 0x19cf Jump
	
Label_6509:
	var_1337_string = ""; // 0x196d PushV
	var_1337_string = "Neutral"; // 0x196e MovS
	func_6609(var_1294_object, var_1337_string); // 0x196f NEW_2
	var_1338_int = 514377; // 0x1971 PushI
	SetMessage(var_1338_int); // 0x1972 TObjFunc
	ClearReplies(); // 0x1974 TObjFunc
	var_1339_bool = 0; // 0x1976 PushV
	var_1339_bool = 0; // 0x1977 MovB
	var_1340_bool = 0; var_1341_object = Obj(); // 0x1978 PushV
	var_1341_object = var_1_object; // 0x1979 MovT
	func_9891(var_1341_object); // 0x197a NEW_2
	if(var_1340_bool == 0) goto Label_6531; // 0x197c JumpB
	var_1346_bool = 0; var_1347_object = Obj(); // 0x197d PushV
	var_1347_object = var_1_object; // 0x197e MovT
	func_9879(var_1347_object); // 0x197f NEW_2
	if(var_1346_bool == 0) goto Label_6531; // 0x1981 JumpB
	var_1339_bool = 1; // 0x1982 MovB
	
Label_6531:
	if(var_1339_bool == 0) goto Label_6537; // 0x1983 JumpB
	var_1352_int = 538451; // 0x1984 PushI
	var_1353_int = 15592; // 0x1985 PushI
	var_1354_int = 40333; // 0x1986 PushI
	AddReply(var_1352_int, var_1353_int, var_1354_int); // 0x1987 TObjFunc
	
Label_6537:
	var_1355_bool = 0; // 0x1989 PushV
	var_1355_bool = 0; // 0x198a MovB
	var_1356_bool = 0; // 0x198b PushV
	var_1356_bool = 0; // 0x198c MovB
	var_1357_bool = 0; var_1358_object = Obj(); // 0x198d PushV
	var_1358_object = var_1_object; // 0x198e MovT
	func_9891(var_1358_object); // 0x198f NEW_2
	var_1359_bool = var_1357_bool == 0; // 0x1991 Not
	if(var_1359_bool == 0) goto Label_6553; // 0x1992 JumpB
	var_1360_bool = 0; var_1361_object = Obj(); // 0x1993 PushV
	var_1361_object = var_1_object; // 0x1994 MovT
	func_9903(var_1361_object); // 0x1995 NEW_2
	if(var_1360_bool == 0) goto Label_6553; // 0x1997 JumpB
	var_1356_bool = 1; // 0x1998 MovB
	
Label_6553:
	if(var_1356_bool == 0) goto Label_6560; // 0x1999 JumpB
	var_1366_bool = 0; var_1367_object = Obj(); // 0x199a PushV
	var_1367_object = var_1_object; // 0x199b MovT
	func_9915(var_1367_object); // 0x199c NEW_2
	if(var_1366_bool == 0) goto Label_6560; // 0x199e JumpB
	var_1355_bool = 1; // 0x199f MovB
	
Label_6560:
	if(var_1355_bool == 0) goto Label_6566; // 0x19a0 JumpB
	var_1372_int = 514378; // 0x19a1 PushI
	var_1373_int = 15602; // 0x19a2 PushI
	var_1374_int = 15601; // 0x19a3 PushI
	AddReply(var_1372_int, var_1373_int, var_1374_int); // 0x19a4 TObjFunc
	
Label_6566:
	var_1375_int = 538442; // 0x19a6 PushI
	var_1376_int = -1; // 0x19a7 PushI
	var_1377_int = 40321; // 0x19a8 PushI
	AddReply(var_1375_int, var_1376_int, var_1377_int); // 0x19a9 TObjFunc
	var_1378_int = 514419; // 0x19ab PushI
	var_1379_int = -1; // 0x19ac PushI
	var_1380_int = 15644; // 0x19ad PushI
	AddReply(var_1378_int, var_1379_int, var_1380_int); // 0x19ae TObjFunc
	goto Label_6579; // 0x19b0 Jump
}


func_9544(var_682_bool)
{
	var_684_int = 0; var_685_string = ""; // 0x2549 PushV
	var_685_string = "ood4Viktor1"; // 0x254a MovS
	func_8784(var_684_int, var_685_string); // 0x254b NEW_2
	var_686_int = 0; // 0x254d PushI
	var_687_bool = var_684_int == var_686_int; // 0x254e Eq
	if(var_687_bool == 0) goto Label_9554; // 0x254f JumpB
	var_682_bool = 1; // 0x2550 MovB
	return 0; // 0x2551 Return
	
Label_9554:
	var_682_bool = 0; // 0x2552 MovB
	return 0; // 0x2553 Return
}


func_9034()
{
	var_200_string = "ood3Viktor3"; // 0x234b PushS
	var_201_int = 1; // 0x234c PushI
	SetVariable(var_200_string, var_201_int); // 0x234d Func
	return 0; // 0x234f Return
}


func_10063()
{
	var_103_object = Obj(); var_104_object = Obj(); // 0x274f PushV
	var_105_int = 77; // 0x2750 PushI
	var_106_int = 2; // 0x2751 PushI
	var_107_int = 512159; // 0x2752 PushI
	CreateDiaryEntry(var_104_object, var_105_int, var_106_int, var_107_int); // 0x2753 Func
	var_108_bool = 0; var_109_object = Obj(); var_110_int = 0; // 0x2755 PushV
	var_109_object = var_104_object; // 0x2756 Mov
	var_110_int = 26; // 0x2757 MovI
	func_10232(var_108_bool, var_109_object, var_110_int); // 0x2758 NEW_2
	return 2; // 0x275a Return
}


func_9040()
{
	var_690_string = "ood4Viktor1"; // 0x2351 PushS
	var_691_int = 1; // 0x2352 PushI
	SetVariable(var_690_string, var_691_int); // 0x2353 Func
	return 0; // 0x2355 Return
}


func_9556(var_721_bool)
{
	var_723_int = 0; var_724_string = ""; // 0x2555 PushV
	var_724_string = "d4q04"; // 0x2556 MovS
	func_8784(var_723_int, var_724_string); // 0x2557 NEW_2
	var_725_int = 0; // 0x2559 PushI
	var_726_bool = var_723_int == var_725_int; // 0x255a Eq
	if(var_726_bool == 0) goto Label_9566; // 0x255b JumpB
	var_721_bool = 1; // 0x255c MovB
	return 0; // 0x255d Return
	
Label_9566:
	var_721_bool = 0; // 0x255e MovB
	return 0; // 0x255f Return
}


func_9046()
{
	var_122_string = "d4q04"; // 0x2357 PushS
	var_123_int = 1000; // 0x2358 PushI
	SetVariable(var_122_string, var_123_int); // 0x2359 Func
	func_10089(); // 0x235c NEW_2
	return 0; // 0x235e Return
}


func_10076()
{
	var_83_object = Obj(); var_84_object = Obj(); // 0x275c PushV
	var_85_int = 710; // 0x275d PushI
	var_86_int = 2; // 0x275e PushI
	var_87_int = 536316; // 0x275f PushI
	CreateDiaryEntry(var_84_object, var_85_int, var_86_int, var_87_int); // 0x2760 Func
	var_88_bool = 0; var_89_object = Obj(); var_90_int = 0; // 0x2762 PushV
	var_89_object = var_84_object; // 0x2763 Mov
	var_90_int = -1; // 0x2764 MovI
	func_10232(var_88_bool, var_89_object, var_90_int); // 0x2765 NEW_2
	return 2; // 0x2767 Return
}


func_9055()
{
	var_694_string = "d4ViktorVisit"; // 0x2360 PushS
	var_695_int = 1; // 0x2361 PushI
	SetVariable(var_694_string, var_695_int); // 0x2362 Func
	return 0; // 0x2364 Return
}


func_9568(var_731_bool)
{
	var_733_int = 0; var_734_string = ""; // 0x2561 PushV
	var_734_string = "d4q04"; // 0x2562 MovS
	func_8784(var_733_int, var_734_string); // 0x2563 NEW_2
	var_735_int = 1; // 0x2565 PushI
	var_736_bool = var_733_int == var_735_int; // 0x2566 Eq
	if(var_736_bool == 0) goto Label_9578; // 0x2567 JumpB
	var_731_bool = 1; // 0x2568 MovB
	return 0; // 0x2569 Return
	
Label_9578:
	var_731_bool = 0; // 0x256a MovB
	return 0; // 0x256b Return
}


func_8548()
{
	var_317_bool = 0; var_318_bool = 0; // 0x2164 PushV
	var_319_bool = 1; // 0x2165 PushB
	CameraSwitchToNormal(var_319_bool); // 0x2166 Func
	var_320_bool = 0; // 0x2168 PushV
	func_8923(var_320_bool); // 0x2169 NEW_2
	if(var_320_bool == 0) goto Label_8557; // 0x216b JumpB
	goto Label_8565; // 0x216c Jump
	
Label_8565:
	return 2; // 0x2175 Return
	
Label_8557:
	var_321_string = "head"; // 0x216d PushS
	HasAnimationTrack(var_318_bool, var_321_string); // 0x216e Func
	var_322_bool = var_318_bool; // 0x2170 Push
	if(var_322_bool == 0) goto Label_8565; // 0x2171 JumpB
	var_323_string = "head"; // 0x2172 PushS
	UnlookAsync(var_323_string); // 0x2173 Func
}


func_9061()
{
	var_1312_string = "d11ViktorVisit"; // 0x2366 PushS
	var_1313_int = 1; // 0x2367 PushI
	SetVariable(var_1312_string, var_1313_int); // 0x2368 Func
	return 0; // 0x236a Return
}


func_358(var_0_object, var_1_object, var_2_object, var_3_string, var_904_object, var_905_object)
{
	var_0_object = var_905_object; // 0x167 TMov
	var_1_object = var_904_object; // 0x168 TMov
	var_3_string = 0; // 0x169 TMovB
	var_910_int = 1; // 0x16a PushI
	if(var_910_int == 0) goto Label_411; // 0x16b JumpB
	var_911_bool = 0; var_912_object = Obj(); // 0x16c PushV
	var_912_object = var_1_object; // 0x16d MovT
	func_9795(var_912_object); // 0x16e NEW_2
	if(var_911_bool == 0) goto Label_394; // 0x170 JumpB
	var_917_object = Obj(); var_918_object = Obj(); // 0x171 PushV
	var_917_object = var_1_object; // 0x172 MovT
	var_918_object = var_0_object; // 0x173 MovT
	func_9400(); // 0x174 NEW_2
	var_921_string = ""; // 0x176 PushV
	var_921_string = "Surprise"; // 0x177 MovS
	func_441(var_905_object, var_921_string); // 0x178 NEW_2
	var_929_int = 512036; // 0x17a PushI
	SetMessage(var_929_int); // 0x17b TObjFunc
	ClearReplies(); // 0x17d TObjFunc
	var_930_int = 540874; // 0x17f PushI
	var_931_int = 42939; // 0x180 PushI
	var_932_int = 42937; // 0x181 PushI
	AddReply(var_930_int, var_931_int, var_932_int); // 0x182 TObjFunc
	var_933_int = 540878; // 0x184 PushI
	var_934_int = 42939; // 0x185 PushI
	var_935_int = 42941; // 0x186 PushI
	AddReply(var_933_int, var_934_int, var_935_int); // 0x187 TObjFunc
	goto Label_411; // 0x189 Jump
	
Label_411:
	var_936_bool = 0; // 0x19b PushV
	func_8923(var_936_bool); // 0x19c NEW_2
	if(var_936_bool == 0) goto Label_426; // 0x19e JumpB
	
Label_415:
	lshWaitForAnimEnd(); // 0x19f Func
	var_937_string = var_3_string; // 0x1a1 PushT
	if(var_937_string == 0) goto Label_420; // 0x1a2 JumpB
	goto Label_425; // 0x1a3 Jump
	
Label_425:
	goto Label_440; // 0x1a9 Jump
	
Label_440:
	return 0; // 0x1b8 Return
	
Label_420:
	var_938_string = ""; // 0x1a4 PushV
	var_938_string = var_2_object; // 0x1a5 MovT
	func_8704(var_938_string); // 0x1a6 NEW_2
	goto Label_415; // 0x1a8 Jump
	
Label_426:
	var_939_string = "all"; // 0x1aa PushS
	var_940_string = "idle"; // 0x1ab PushS
	PlayAnimation(var_939_string, var_940_string); // 0x1ac Func
	
Label_430:
	WaitForAnimEnd(); // 0x1ae Func
	var_941_string = var_3_string; // 0x1b0 PushT
	if(var_941_string == 0) goto Label_435; // 0x1b1 JumpB
	goto Label_440; // 0x1b2 Jump
	
Label_435:
	var_942_string = "all"; // 0x1b3 PushS
	var_943_string = "idle"; // 0x1b4 PushS
	PlayAnimation(var_942_string, var_943_string); // 0x1b5 Func
	goto Label_430; // 0x1b7 Jump
	
Label_394:
	var_944_string = ""; // 0x18a PushV
	var_944_string = "Neutral"; // 0x18b MovS
	func_441(var_905_object, var_944_string); // 0x18c NEW_2
	var_945_int = 513016; // 0x18e PushI
	SetMessage(var_945_int); // 0x18f TObjFunc
	ClearReplies(); // 0x191 TObjFunc
	var_946_int = 513017; // 0x193 PushI
	var_947_int = -1; // 0x194 PushI
	var_948_int = 14223; // 0x195 PushI
	AddReply(var_946_int, var_947_int, var_948_int); // 0x196 TObjFunc
	goto Label_411; // 0x198 Jump
}


func_10089()
{
	var_124_object = Obj(); var_125_object = Obj(); // 0x2769 PushV
	var_126_int = 712; // 0x276a PushI
	var_127_int = 2; // 0x276b PushI
	var_128_int = 536318; // 0x276c PushI
	CreateDiaryEntry(var_125_object, var_126_int, var_127_int, var_128_int); // 0x276d Func
	var_129_bool = 0; var_130_object = Obj(); var_131_int = 0; // 0x276f PushV
	var_130_object = var_125_object; // 0x2770 Mov
	var_131_int = 710; // 0x2771 MovI
	func_10232(var_129_bool, var_130_object, var_131_int); // 0x2772 NEW_2
	return 2; // 0x2774 Return
}


func_9067(var_166_object)
{
	var_168_string = "money25000 is given"; // 0x236c PushS
	Trace(var_168_string); // 0x236d Func
	var_169_object = Obj(); var_170_int = 0; // 0x236f PushV
	var_169_object = var_166_object; // 0x2370 Mov
	var_170_int = 25000; // 0x2371 MovI
	func_8812(var_169_object, var_170_int); // 0x2372 NEW_2
	return 0; // 0x2374 Return
}


func_9580(var_737_bool, var_738_object)
{
	var_739_bool = 0; var_740_object = Obj(); var_741_string = ""; // 0x256d PushV
	var_740_object = var_738_object; // 0x256e Mov
	var_741_string = "hunter_mark"; // 0x256f MovS
	func_8831(var_740_object, var_741_string); // 0x2570 NEW_2
	if(var_739_bool == 0) goto Label_9589; // 0x2572 JumpB
	var_737_bool = 1; // 0x2573 MovB
	return 0; // 0x2574 Return
	
Label_9589:
	var_737_bool = 0; // 0x2575 MovB
	return 0; // 0x2576 Return
}


func_9077()
{
	var_1143_string = "d9ViktorVisit"; // 0x2376 PushS
	var_1144_int = 1; // 0x2377 PushI
	SetVariable(var_1143_string, var_1144_int); // 0x2378 Func
	return 0; // 0x237a Return
}


func_8566(var_167_bool, var_168_object)
{
	var_172_int = 0; var_173_int = 0; var_174_int = 0; var_175_int = 0; // 0x2176 PushV
	var_176_string = "voice_common"; // 0x2177 PushS
	GetVariable(var_176_string, var_174_int); // 0x2178 Func
	var_177_int = var_174_int; // 0x217a Push
	if(var_177_int == 0) goto Label_8604; // 0x217b JumpB
	var_178_bool = 0; var_179_object = Obj(); // 0x217c PushV
	var_179_object = var_168_object; // 0x217d Mov
	func_8624(var_179_object); // 0x217e NEW_2
	var_208_bool = var_178_bool == 0; // 0x2180 Not
	if(var_208_bool == 0) goto Label_8586; // 0x2181 JumpB
	var_209_bool = 0; var_210_object = Obj(); // 0x2182 PushV
	var_210_object = var_168_object; // 0x2183 Mov
	func_8661(var_210_object); // 0x2184 NEW_2
	var_244_bool = var_209_bool == 0; // 0x2186 Not
	if(var_244_bool == 0) goto Label_8586; // 0x2187 JumpB
	var_167_bool = 0; // 0x2188 MovB
	return 4; // 0x2189 Return
	
Label_8586:
	var_245_int = 2; // 0x218a PushI
	irand(var_175_int, var_245_int); // 0x218b Func
	var_246_int = var_175_int; // 0x218d Push
	if(var_246_int == 0) goto Label_8599; // 0x218e JumpB
	var_247_string = "voice_common"; // 0x218f PushS
	var_248_int = 1; // 0x2190 PushI
	var_249_int = var_174_int + var_248_int; // 0x2191 Add
	var_250_int = 3; // 0x2192 PushI
	var_251_int = var_249_int / var_250_int; // 0x2193 Mod
	SetVariable(var_247_string, var_251_int); // 0x2194 Func
	goto Label_8603; // 0x2196 Jump
	
Label_8603:
	goto Label_8622; // 0x219b Jump
	
Label_8622:
	var_167_bool = 1; // 0x21ae MovB
	return 4; // 0x21af Return
	
Label_8599:
	var_252_string = "voice_common"; // 0x2197 PushS
	var_253_int = 0; // 0x2198 PushI
	SetVariable(var_252_string, var_253_int); // 0x2199 Func
	
Label_8604:
	var_254_bool = 0; var_255_object = Obj(); // 0x219c PushV
	var_255_object = var_168_object; // 0x219d Mov
	func_8661(var_255_object); // 0x219e NEW_2
	var_256_bool = var_254_bool == 0; // 0x21a0 Not
	if(var_256_bool == 0) goto Label_8618; // 0x21a1 JumpB
	var_257_bool = 0; var_258_object = Obj(); // 0x21a2 PushV
	var_258_object = var_168_object; // 0x21a3 Mov
	func_8624(var_258_object); // 0x21a4 NEW_2
	var_259_bool = var_257_bool == 0; // 0x21a6 Not
	if(var_259_bool == 0) goto Label_8618; // 0x21a7 JumpB
	var_167_bool = 0; // 0x21a8 MovB
	return 4; // 0x21a9 Return
	
Label_8618:
	var_260_string = "voice_common"; // 0x21aa PushS
	var_261_int = 1; // 0x21ab PushI
	SetVariable(var_260_string, var_261_int); // 0x21ac Func
}


func_9591(var_528_bool)
{
	var_530_int = 0; var_531_string = ""; // 0x2578 PushV
	var_531_string = "ood2Viktor2"; // 0x2579 MovS
	func_8784(var_530_int, var_531_string); // 0x257a NEW_2
	var_532_int = 0; // 0x257c PushI
	var_533_bool = var_530_int == var_532_int; // 0x257d Eq
	if(var_533_bool == 0) goto Label_9601; // 0x257e JumpB
	var_528_bool = 1; // 0x257f MovB
	return 0; // 0x2580 Return
	
Label_9601:
	var_528_bool = 0; // 0x2581 MovB
	return 0; // 0x2582 Return
}


func_10102()
{
	var_106_object = Obj(); var_107_object = Obj(); // 0x2776 PushV
	var_108_int = 711; // 0x2777 PushI
	var_109_int = 2; // 0x2778 PushI
	var_110_int = 536317; // 0x2779 PushI
	CreateDiaryEntry(var_107_object, var_108_int, var_109_int, var_110_int); // 0x277a Func
	var_111_bool = 0; var_112_object = Obj(); var_113_int = 0; // 0x277c PushV
	var_112_object = var_107_object; // 0x277d Mov
	var_113_int = 710; // 0x277e MovI
	func_10232(var_111_bool, var_112_object, var_113_int); // 0x277f NEW_2
	return 2; // 0x2781 Return
}


func_9083()
{
	var_116_string = "ood2Viktor2"; // 0x237c PushS
	var_117_int = 1; // 0x237d PushI
	SetVariable(var_116_string, var_117_int); // 0x237e Func
	return 0; // 0x2380 Return
}


func_9089()
{
	var_81_string = "ood2Viktor1"; // 0x2382 PushS
	var_82_int = 1; // 0x2383 PushI
	SetVariable(var_81_string, var_82_int); // 0x2384 Func
	return 0; // 0x2386 Return
}


func_9603(var_507_bool)
{
	var_509_int = 0; var_510_string = ""; // 0x2584 PushV
	var_510_string = "ood2Viktor1"; // 0x2585 MovS
	func_8784(var_509_int, var_510_string); // 0x2586 NEW_2
	var_511_int = 0; // 0x2588 PushI
	var_512_bool = var_509_int == var_511_int; // 0x2589 Eq
	if(var_512_bool == 0) goto Label_9613; // 0x258a JumpB
	var_507_bool = 1; // 0x258b MovB
	return 0; // 0x258c Return
	
Label_9613:
	var_507_bool = 0; // 0x258d MovB
	return 0; // 0x258e Return
}


func_10115()
{
	var_105_object = Obj(); var_106_object = Obj(); // 0x2783 PushV
	var_107_int = 154; // 0x2784 PushI
	var_108_int = 2; // 0x2785 PushI
	var_109_int = 515365; // 0x2786 PushI
	CreateDiaryEntry(var_106_object, var_107_int, var_108_int, var_109_int); // 0x2787 Func
	var_110_bool = 0; var_111_object = Obj(); var_112_int = 0; // 0x2789 PushV
	var_111_object = var_106_object; // 0x278a Mov
	var_112_int = -1; // 0x278b MovI
	func_10232(var_110_bool, var_111_object, var_112_int); // 0x278c NEW_2
	return 2; // 0x278e Return
}


func_9095()
{
	var_275_string = "KnowRavell"; // 0x2388 PushS
	var_276_int = 1; // 0x2389 PushI
	SetVariable(var_275_string, var_276_int); // 0x238a Func
	return 0; // 0x238c Return
}


func_9101(var_106_object)
{
	var_108_string = "money 5000 is given"; // 0x238e PushS
	Trace(var_108_string); // 0x238f Func
	var_109_object = Obj(); var_110_int = 0; // 0x2391 PushV
	var_109_object = var_106_object; // 0x2392 Mov
	var_110_int = 5000; // 0x2393 MovI
	func_8812(var_109_object, var_110_int); // 0x2394 NEW_2
	return 0; // 0x2396 Return
}


func_9615(var_215_bool)
{
	var_217_int = 0; var_218_string = ""; // 0x2590 PushV
	var_218_string = "KnowRavell"; // 0x2591 MovS
	func_8784(var_217_int, var_218_string); // 0x2592 NEW_2
	var_219_int = 1; // 0x2594 PushI
	var_220_bool = var_217_int == var_219_int; // 0x2595 Eq
	if(var_220_bool == 0) goto Label_9625; // 0x2596 JumpB
	var_215_bool = 1; // 0x2597 MovB
	return 0; // 0x2598 Return
	
Label_9625:
	var_215_bool = 0; // 0x2599 MovB
	return 0; // 0x259a Return
}


func_10128()
{
	var_128_object = Obj(); var_129_object = Obj(); // 0x2790 PushV
	var_130_int = 155; // 0x2791 PushI
	var_131_int = 2; // 0x2792 PushI
	var_132_int = 515366; // 0x2793 PushI
	CreateDiaryEntry(var_129_object, var_130_int, var_131_int, var_132_int); // 0x2794 Func
	var_133_bool = 0; var_134_object = Obj(); var_135_int = 0; // 0x2796 PushV
	var_134_object = var_129_object; // 0x2797 Mov
	var_135_int = 154; // 0x2798 MovI
	func_10232(var_133_bool, var_134_object, var_135_int); // 0x2799 NEW_2
	return 2; // 0x279b Return
}


func_9111()
{
	var_81_string = "d4q04"; // 0x2398 PushS
	var_82_int = 1; // 0x2399 PushI
	SetVariable(var_81_string, var_82_int); // 0x239a Func
	func_10076(); // 0x239d NEW_2
	func_10102(); // 0x23a0 NEW_2
	return 0; // 0x23a2 Return
}


func_9627(var_519_bool)
{
	var_521_int = 0; var_522_string = ""; // 0x259c PushV
	var_522_string = "d2q03"; // 0x259d MovS
	func_8784(var_521_int, var_522_string); // 0x259e NEW_2
	var_523_int = 1; // 0x25a0 PushI
	var_524_bool = var_521_int == var_523_int; // 0x25a1 Eq
	if(var_524_bool == 0) goto Label_9637; // 0x25a2 JumpB
	var_519_bool = 1; // 0x25a3 MovB
	return 0; // 0x25a4 Return
	
Label_9637:
	var_519_bool = 0; // 0x25a5 MovB
	return 0; // 0x25a6 Return
}


func_10141()
{
	var_109_object = Obj(); var_110_object = Obj(); // 0x279d PushV
	var_111_int = 111; // 0x279e PushI
	var_112_int = 1; // 0x279f PushI
	var_113_int = 513734; // 0x27a0 PushI
	CreateDiaryEntry(var_110_object, var_111_int, var_112_int, var_113_int); // 0x27a1 Func
	var_114_bool = 0; var_115_object = Obj(); var_116_int = 0; // 0x27a3 PushV
	var_115_object = var_110_object; // 0x27a4 Mov
	var_116_int = -1; // 0x27a5 MovI
	func_10232(var_114_bool, var_115_object, var_116_int); // 0x27a6 NEW_2
	return 2; // 0x27a8 Return
}


func_9123()
{
	var_271_string = "KnowViktor"; // 0x23a4 PushS
	var_272_int = 1; // 0x23a5 PushI
	SetVariable(var_271_string, var_272_int); // 0x23a6 Func
	return 0; // 0x23a8 Return
}


func_9639(var_513_bool)
{
	var_515_int = 0; var_516_string = ""; // 0x25a8 PushV
	var_516_string = "d2q03MariaGotoViktor"; // 0x25a9 MovS
	func_8784(var_515_int, var_516_string); // 0x25aa NEW_2
	var_517_int = 1; // 0x25ac PushI
	var_518_bool = var_515_int == var_517_int; // 0x25ad Eq
	if(var_518_bool == 0) goto Label_9649; // 0x25ae JumpB
	var_513_bool = 1; // 0x25af MovB
	return 0; // 0x25b0 Return
	
Label_9649:
	var_513_bool = 0; // 0x25b1 MovB
	return 0; // 0x25b2 Return
}


func_9129()
{
	var_87_object = Obj(); var_88_object = Obj(); // 0x23a9 PushV
	var_89_object = Obj(); // 0x23aa PushV
	func_10260(var_89_object); // 0x23ab NEW_2
	var_88_object = var_89_object; // 0x23ac Mov
	var_96_string = "d3q02ViktorGotoMladVlad"; // 0x23ae PushS
	var_97_string = "pt_map_mladvlad"; // 0x23af PushS
	var_98_int = 0; // 0x23b0 PushI
	var_99_int = 511380; // 0x23b1 PushI
	var_100_float = 0; // 0x23b2 PushV
	func_8895(var_100_float); // 0x23b3 NEW_2
	AddMark(var_96_string, var_97_string, var_98_int, var_99_int, var_100_float); // 0x23b5 ObjFunc
	func_10063(); // 0x23b8 NEW_2
	return 2; // 0x23ba Return
}


func_10154()
{
	var_140_object = Obj(); var_141_object = Obj(); // 0x27aa PushV
	var_142_int = 113; // 0x27ab PushI
	var_143_int = 1; // 0x27ac PushI
	var_144_int = 513736; // 0x27ad PushI
	CreateDiaryEntry(var_141_object, var_142_int, var_143_int, var_144_int); // 0x27ae Func
	var_145_bool = 0; var_146_object = Obj(); var_147_int = 0; // 0x27b0 PushV
	var_146_object = var_141_object; // 0x27b1 Mov
	var_147_int = 111; // 0x27b2 MovI
	func_10232(var_145_bool, var_146_object, var_147_int); // 0x27b3 NEW_2
	return 2; // 0x27b5 Return
}


func_5545(var_0_object, var_1100_int, var_1101_object)
{
	var_1103_object = Obj(); var_1104_bool = 0; var_1105_int = 0; var_1106_bool = 0; var_1107_object = Obj(); var_1108_bool = 0; var_1109_int = 0; var_1110_bool = 0; // 0x15a9 PushV
	var_0_object = var_1101_object; // 0x15aa TMov
	var_1111_bool = 0; var_1112_object = Obj(); var_1113_float = 0; // 0x15ab PushV
	var_1112_object = var_1101_object; // 0x15ac Mov
	var_1113_float = 70.0; // 0x15ad MovF
	func_8479(var_1112_object, var_1113_float); // 0x15ae NEW_2
	var_1114_bool = var_1111_bool == 0; // 0x15b0 Not
	if(var_1114_bool == 0) goto Label_5556; // 0x15b1 JumpB
	var_1100_int = -2; // 0x15b2 MovI
	return 8; // 0x15b3 Return
	
Label_5556:
	CreateDialog(var_1107_object); // 0x15b4 Func
	var_1115_int = 0; // 0x15b6 PushV
	func_8917(var_1115_int); // 0x15b7 NEW_2
	SetNPCName(var_1115_int); // 0x15b9 ObjFunc
	var_1116_int = 0; // 0x15bb PushV
	func_8915(var_1116_int); // 0x15bc NEW_2
	SetNPCDescription(var_1116_int); // 0x15be ObjFunc
	var_1117_string = ""; // 0x15c0 PushV
	func_8919(var_1117_string); // 0x15c1 NEW_2
	SetPhoto(var_1117_string); // 0x15c3 ObjFunc
	var_1118_string = ""; // 0x15c5 PushV
	func_8921(var_1118_string); // 0x15c6 NEW_2
	SetPhoto2(var_1118_string); // 0x15c8 ObjFunc
	var_1119_int = 0; // 0x15ca PushV
	func_10310(var_1119_int); // 0x15cb NEW_2
	SetPlayerName(var_1119_int); // 0x15cd ObjFunc
	var_1109_int = -1; // 0x15cf MovI
	IsOverrideActive(var_1108_bool); // 0x15d0 Func
	var_1120_bool = var_1108_bool; // 0x15d2 Push
	if(var_1120_bool == 0) goto Label_5590; // 0x15d3 JumpB
	var_1100_int = -2; // 0x15d4 MovI
	return 8; // 0x15d5 Return
	
Label_5590:
	DoDialog(var_1107_object); // 0x15d6 Func
	var_1121_bool = 0; var_1122_object = Obj(); // 0x15d8 PushV
	var_1123_object = Obj(); // 0x15d9 PushV
	func_8757(var_1123_object); // 0x15da NEW_2
	var_1122_object = var_1123_object; // 0x15db Mov
	func_8566(var_1121_bool, var_1122_object); // 0x15dd NEW_2
	var_1124_object = Obj(); var_1125_object = Obj(); // 0x15df PushV
	var_1124_object = var_1101_object; // 0x15e0 Mov
	var_1125_object = var_1107_object; // 0x15e1 Mov
	TaskCall(20); // 0x15e2 TaskCall
	func_5626(var_1126_object, var_1127_object, var_1128_string, var_1129_bool, var_1124_object, var_1125_object); // 0x15e3 NEW_2
	TaskReturn(); // 0x15e4 TaskReturn
	IsDialogEnd(var_1110_bool); // 0x15e6 ObjFunc
	
Label_5608:
	var_1198_bool = var_1110_bool == 0; // 0x15e8 Not
	if(var_1198_bool == 0) goto Label_5615; // 0x15e9 JumpB
	sync(); // 0x15ea Func
	IsDialogEnd(var_1110_bool); // 0x15ec ObjFunc
	goto Label_5608; // 0x15ee Jump
	
Label_5615:
	var_1199_object = Obj(); // 0x15ef PushV
	var_1199_object = var_1101_object; // 0x15f0 Mov
	func_8548(); // 0x15f1 NEW_2
	StopDialog(var_1107_object); // 0x15f3 Func
	GetReturnValue(var_1109_int); // 0x15f5 ObjFunc
	var_1100_int = var_1109_int; // 0x15f7 Mov
	return 8; // 0x15f8 Return
}


func_8624(var_178_bool)
{
	var_180_string = ""; var_181_int = 0; var_182_bool = 0; var_183_int = 0; var_184_string = ""; var_185_string = ""; var_186_int = 0; var_187_bool = 0; var_188_int = 0; var_189_string = ""; // 0x21b0 PushV
	var_185_string = "c"; // 0x21b1 MovS
	var_186_int = 0; // 0x21b2 MovI
	
Label_8627:
	var_190_int = 1; // 0x21b3 PushI
	if(var_190_int == 0) goto Label_8640; // 0x21b4 JumpB
	var_191_int = 1; // 0x21b5 PushI
	var_192_int = var_186_int + var_191_int; // 0x21b6 Add
	var_193_int = var_185_string + var_192_int; // 0x21b7 Add
	HasProperty(var_193_int, var_187_bool); // 0x21b8 ObjFunc
	var_194_bool = var_187_bool == 0; // 0x21ba Not
	if(var_194_bool == 0) goto Label_8637; // 0x21bb JumpB
	goto Label_8640; // 0x21bc Jump
	
Label_8640:
	var_195_bool = var_186_int == 0; // 0x21c0 Not
	if(var_195_bool == 0) goto Label_8644; // 0x21c1 JumpB
	var_178_bool = 0; // 0x21c2 MovB
	return 10; // 0x21c3 Return
	
Label_8644:
	var_188_int = 0; // 0x21c4 MovI
	var_196_int = 1; // 0x21c5 PushI
	var_197_bool = var_186_int > var_196_int; // 0x21c6 GT
	if(var_197_bool == 0) goto Label_8650; // 0x21c7 JumpB
	irand(var_188_int, var_186_int); // 0x21c8 Func
	
Label_8650:
	var_198_int = 1; // 0x21ca PushI
	var_199_int = var_188_int + var_198_int; // 0x21cb Add
	var_200_int = var_185_string + var_199_int; // 0x21cc Add
	GetProperty(var_200_int, var_189_string); // 0x21cd ObjFunc
	var_201_bool = 0; var_202_string = ""; // 0x21cf PushV
	var_202_string = var_189_string; // 0x21d0 Mov
	func_8735(var_201_bool, var_202_string); // 0x21d1 NEW_2
	var_178_bool = var_201_bool; // 0x21d2 Mov
	return 10; // 0x21d4 Return
	
Label_8637:
	var_207_int = 1; // 0x21bd PushI
	var_186_int = var_186_int + var_207_int; // 0x21be Add2
	goto Label_8627; // 0x21bf Jump
}


func_9651(var_418_bool)
{
	var_420_int = 0; var_421_string = ""; // 0x25b4 PushV
	var_421_string = "d1q01"; // 0x25b5 MovS
	func_8784(var_420_int, var_421_string); // 0x25b6 NEW_2
	var_422_int = 1; // 0x25b8 PushI
	var_423_bool = var_420_int == var_422_int; // 0x25b9 Eq
	if(var_423_bool == 0) goto Label_9661; // 0x25ba JumpB
	var_418_bool = 1; // 0x25bb MovB
	return 0; // 0x25bc Return
	
Label_9661:
	var_418_bool = 0; // 0x25bd MovB
	return 0; // 0x25be Return
}


func_3507(var_0_object, var_651_int, var_652_object)
{
	var_654_object = Obj(); var_655_bool = 0; var_656_int = 0; var_657_bool = 0; var_658_object = Obj(); var_659_bool = 0; var_660_int = 0; var_661_bool = 0; // 0xdb3 PushV
	var_0_object = var_652_object; // 0xdb4 TMov
	var_662_bool = 0; var_663_object = Obj(); var_664_float = 0; // 0xdb5 PushV
	var_663_object = var_652_object; // 0xdb6 Mov
	var_664_float = 70.0; // 0xdb7 MovF
	func_8479(var_663_object, var_664_float); // 0xdb8 NEW_2
	var_665_bool = var_662_bool == 0; // 0xdba Not
	if(var_665_bool == 0) goto Label_3518; // 0xdbb JumpB
	var_651_int = -2; // 0xdbc MovI
	return 8; // 0xdbd Return
	
Label_3518:
	CreateDialog(var_658_object); // 0xdbe Func
	var_666_int = 0; // 0xdc0 PushV
	func_8917(var_666_int); // 0xdc1 NEW_2
	SetNPCName(var_666_int); // 0xdc3 ObjFunc
	var_667_int = 0; // 0xdc5 PushV
	func_8915(var_667_int); // 0xdc6 NEW_2
	SetNPCDescription(var_667_int); // 0xdc8 ObjFunc
	var_668_string = ""; // 0xdca PushV
	func_8919(var_668_string); // 0xdcb NEW_2
	SetPhoto(var_668_string); // 0xdcd ObjFunc
	var_669_string = ""; // 0xdcf PushV
	func_8921(var_669_string); // 0xdd0 NEW_2
	SetPhoto2(var_669_string); // 0xdd2 ObjFunc
	var_670_int = 0; // 0xdd4 PushV
	func_10310(var_670_int); // 0xdd5 NEW_2
	SetPlayerName(var_670_int); // 0xdd7 ObjFunc
	var_660_int = -1; // 0xdd9 MovI
	IsOverrideActive(var_659_bool); // 0xdda Func
	var_671_bool = var_659_bool; // 0xddc Push
	if(var_671_bool == 0) goto Label_3552; // 0xddd JumpB
	var_651_int = -2; // 0xdde MovI
	return 8; // 0xddf Return
	
Label_3552:
	DoDialog(var_658_object); // 0xde0 Func
	var_672_bool = 0; var_673_object = Obj(); // 0xde2 PushV
	var_674_object = Obj(); // 0xde3 PushV
	func_8757(var_674_object); // 0xde4 NEW_2
	var_673_object = var_674_object; // 0xde5 Mov
	func_8566(var_672_bool, var_673_object); // 0xde7 NEW_2
	var_675_object = Obj(); var_676_object = Obj(); // 0xde9 PushV
	var_675_object = var_652_object; // 0xdea Mov
	var_676_object = var_658_object; // 0xdeb Mov
	TaskCall(12); // 0xdec TaskCall
	func_3588(var_677_object, var_678_object, var_679_string, var_680_bool, var_675_object, var_676_object); // 0xded NEW_2
	TaskReturn(); // 0xdee TaskReturn
	IsDialogEnd(var_661_bool); // 0xdf0 ObjFunc
	
Label_3570:
	var_752_bool = var_661_bool == 0; // 0xdf2 Not
	if(var_752_bool == 0) goto Label_3577; // 0xdf3 JumpB
	sync(); // 0xdf4 Func
	IsDialogEnd(var_661_bool); // 0xdf6 ObjFunc
	goto Label_3570; // 0xdf8 Jump
	
Label_3577:
	var_753_object = Obj(); // 0xdf9 PushV
	var_753_object = var_652_object; // 0xdfa Mov
	func_8548(); // 0xdfb NEW_2
	StopDialog(var_658_object); // 0xdfd Func
	GetReturnValue(var_660_int); // 0xdff ObjFunc
	var_651_int = var_660_int; // 0xe01 Mov
	return 8; // 0xe02 Return
}


func_10167()
{
	var_132_object = Obj(); var_133_object = Obj(); // 0x27b7 PushV
	var_134_int = 112; // 0x27b8 PushI
	var_135_int = 1; // 0x27b9 PushI
	var_136_int = 513735; // 0x27ba PushI
	CreateDiaryEntry(var_133_object, var_134_int, var_135_int, var_136_int); // 0x27bb Func
	var_137_bool = 0; var_138_object = Obj(); var_139_int = 0; // 0x27bd PushV
	var_138_object = var_133_object; // 0x27be Mov
	var_139_int = 111; // 0x27bf MovI
	func_10232(var_137_bool, var_138_object, var_139_int); // 0x27c0 NEW_2
	return 2; // 0x27c2 Return
}


func_4024(var_0_object, var_756_int, var_757_object)
{
	var_759_object = Obj(); var_760_bool = 0; var_761_int = 0; var_762_bool = 0; var_763_object = Obj(); var_764_bool = 0; var_765_int = 0; var_766_bool = 0; // 0xfb8 PushV
	var_0_object = var_757_object; // 0xfb9 TMov
	var_767_bool = 0; var_768_object = Obj(); var_769_float = 0; // 0xfba PushV
	var_768_object = var_757_object; // 0xfbb Mov
	var_769_float = 70.0; // 0xfbc MovF
	func_8479(var_768_object, var_769_float); // 0xfbd NEW_2
	var_770_bool = var_767_bool == 0; // 0xfbf Not
	if(var_770_bool == 0) goto Label_4035; // 0xfc0 JumpB
	var_756_int = -2; // 0xfc1 MovI
	return 8; // 0xfc2 Return
	
Label_4035:
	CreateDialog(var_763_object); // 0xfc3 Func
	var_771_int = 0; // 0xfc5 PushV
	func_8917(var_771_int); // 0xfc6 NEW_2
	SetNPCName(var_771_int); // 0xfc8 ObjFunc
	var_772_int = 0; // 0xfca PushV
	func_8915(var_772_int); // 0xfcb NEW_2
	SetNPCDescription(var_772_int); // 0xfcd ObjFunc
	var_773_string = ""; // 0xfcf PushV
	func_8919(var_773_string); // 0xfd0 NEW_2
	SetPhoto(var_773_string); // 0xfd2 ObjFunc
	var_774_string = ""; // 0xfd4 PushV
	func_8921(var_774_string); // 0xfd5 NEW_2
	SetPhoto2(var_774_string); // 0xfd7 ObjFunc
	var_775_int = 0; // 0xfd9 PushV
	func_10310(var_775_int); // 0xfda NEW_2
	SetPlayerName(var_775_int); // 0xfdc ObjFunc
	var_765_int = -1; // 0xfde MovI
	IsOverrideActive(var_764_bool); // 0xfdf Func
	var_776_bool = var_764_bool; // 0xfe1 Push
	if(var_776_bool == 0) goto Label_4069; // 0xfe2 JumpB
	var_756_int = -2; // 0xfe3 MovI
	return 8; // 0xfe4 Return
	
Label_4069:
	DoDialog(var_763_object); // 0xfe5 Func
	var_777_bool = 0; var_778_object = Obj(); // 0xfe7 PushV
	var_779_object = Obj(); // 0xfe8 PushV
	func_8757(var_779_object); // 0xfe9 NEW_2
	var_778_object = var_779_object; // 0xfea Mov
	func_8566(var_777_bool, var_778_object); // 0xfec NEW_2
	var_780_object = Obj(); var_781_object = Obj(); // 0xfee PushV
	var_780_object = var_757_object; // 0xfef Mov
	var_781_object = var_763_object; // 0xff0 Mov
	TaskCall(14); // 0xff1 TaskCall
	func_4105(var_782_object, var_783_object, var_784_string, var_785_bool, var_780_object, var_781_object); // 0xff2 NEW_2
	TaskReturn(); // 0xff3 TaskReturn
	IsDialogEnd(var_766_bool); // 0xff5 ObjFunc
	
Label_4087:
	var_876_bool = var_766_bool == 0; // 0xff7 Not
	if(var_876_bool == 0) goto Label_4094; // 0xff8 JumpB
	sync(); // 0xff9 Func
	IsDialogEnd(var_766_bool); // 0xffb ObjFunc
	goto Label_4087; // 0xffd Jump
	
Label_4094:
	var_877_object = Obj(); // 0xffe PushV
	var_877_object = var_757_object; // 0xfff Mov
	func_8548(); // 0x1000 NEW_2
	StopDialog(var_763_object); // 0x1002 Func
	GetReturnValue(var_765_int); // 0x1004 ObjFunc
	var_756_int = var_765_int; // 0x1006 Mov
	return 8; // 0x1007 Return
}


func_441(var_2_object, var_921_string)
{
	var_922_bool = 0; // 0x1ba PushV
	func_8923(var_922_bool); // 0x1bb NEW_2
	var_923_bool = var_922_bool == 0; // 0x1bd Not
	if(var_923_bool == 0) goto Label_448; // 0x1be JumpB
	return 0; // 0x1bf Return
	
Label_448:
	var_924_bool = var_921_string == var_2_object; // 0x1c0 Eq
	if(var_924_bool == 0) goto Label_451; // 0x1c1 JumpB
	return 0; // 0x1c2 Return
	
Label_451:
	var_925_string = ""; var_926_bool = 0; // 0x1c3 PushV
	var_925_string = var_921_string; // 0x1c4 Mov
	var_927_string = ""; // 0x1c5 PushS
	var_928_bool = var_921_string == var_927_string; // 0x1c6 Eq
	if(var_928_bool == 0) goto Label_458; // 0x1c7 JumpB
	var_926_bool = 0; // 0x1c8 MovB
	goto Label_459; // 0x1c9 Jump
	
Label_459:
	func_8720(var_925_string, var_926_bool); // 0x1cb NEW_2
	var_2_object = var_921_string; // 0x1cd TMov
	return 0; // 0x1ce Return
	
Label_458:
	var_926_bool = 1; // 0x1ca MovB
}


func_8120(var_0_object, var_1441_int, var_1442_object)
{
	var_1444_object = Obj(); var_1445_bool = 0; var_1446_int = 0; var_1447_bool = 0; var_1448_object = Obj(); var_1449_bool = 0; var_1450_int = 0; var_1451_bool = 0; // 0x1fb8 PushV
	var_0_object = var_1442_object; // 0x1fb9 TMov
	var_1452_bool = 0; var_1453_object = Obj(); var_1454_float = 0; // 0x1fba PushV
	var_1453_object = var_1442_object; // 0x1fbb Mov
	var_1454_float = 70.0; // 0x1fbc MovF
	func_8479(var_1453_object, var_1454_float); // 0x1fbd NEW_2
	var_1455_bool = var_1452_bool == 0; // 0x1fbf Not
	if(var_1455_bool == 0) goto Label_8131; // 0x1fc0 JumpB
	var_1441_int = -2; // 0x1fc1 MovI
	return 8; // 0x1fc2 Return
	
Label_8131:
	CreateDialog(var_1448_object); // 0x1fc3 Func
	var_1456_int = 0; // 0x1fc5 PushV
	func_8917(var_1456_int); // 0x1fc6 NEW_2
	SetNPCName(var_1456_int); // 0x1fc8 ObjFunc
	var_1457_int = 0; // 0x1fca PushV
	func_8915(var_1457_int); // 0x1fcb NEW_2
	SetNPCDescription(var_1457_int); // 0x1fcd ObjFunc
	var_1458_string = ""; // 0x1fcf PushV
	func_8919(var_1458_string); // 0x1fd0 NEW_2
	SetPhoto(var_1458_string); // 0x1fd2 ObjFunc
	var_1459_string = ""; // 0x1fd4 PushV
	func_8921(var_1459_string); // 0x1fd5 NEW_2
	SetPhoto2(var_1459_string); // 0x1fd7 ObjFunc
	var_1460_int = 0; // 0x1fd9 PushV
	func_10310(var_1460_int); // 0x1fda NEW_2
	SetPlayerName(var_1460_int); // 0x1fdc ObjFunc
	var_1450_int = -1; // 0x1fde MovI
	IsOverrideActive(var_1449_bool); // 0x1fdf Func
	var_1461_bool = var_1449_bool; // 0x1fe1 Push
	if(var_1461_bool == 0) goto Label_8165; // 0x1fe2 JumpB
	var_1441_int = -2; // 0x1fe3 MovI
	return 8; // 0x1fe4 Return
	
Label_8165:
	DoDialog(var_1448_object); // 0x1fe5 Func
	var_1462_bool = 0; var_1463_object = Obj(); // 0x1fe7 PushV
	var_1464_object = Obj(); // 0x1fe8 PushV
	func_8757(var_1464_object); // 0x1fe9 NEW_2
	var_1463_object = var_1464_object; // 0x1fea Mov
	func_8566(var_1462_bool, var_1463_object); // 0x1fec NEW_2
	var_1465_object = Obj(); var_1466_object = Obj(); // 0x1fee PushV
	var_1465_object = var_1442_object; // 0x1fef Mov
	var_1466_object = var_1448_object; // 0x1ff0 Mov
	TaskCall(28); // 0x1ff1 TaskCall
	func_8201(var_1467_object, var_1468_object, var_1469_string, var_1470_bool, var_1465_object, var_1466_object); // 0x1ff2 NEW_2
	TaskReturn(); // 0x1ff3 TaskReturn
	IsDialogEnd(var_1451_bool); // 0x1ff5 ObjFunc
	
Label_8183:
	var_1495_bool = var_1451_bool == 0; // 0x1ff7 Not
	if(var_1495_bool == 0) goto Label_8190; // 0x1ff8 JumpB
	sync(); // 0x1ff9 Func
	IsDialogEnd(var_1451_bool); // 0x1ffb ObjFunc
	goto Label_8183; // 0x1ffd Jump
	
Label_8190:
	var_1496_object = Obj(); // 0x1ffe PushV
	var_1496_object = var_1442_object; // 0x1fff Mov
	func_8548(); // 0x2000 NEW_2
	StopDialog(var_1448_object); // 0x2002 Func
	GetReturnValue(var_1450_int); // 0x2004 ObjFunc
	var_1441_int = var_1450_int; // 0x2006 Mov
	return 8; // 0x2007 Return
}


func_9148()
{
	var_81_string = "ood3Viktor1"; // 0x23bd PushS
	var_82_int = 1; // 0x23be PushI
	SetVariable(var_81_string, var_82_int); // 0x23bf Func
	return 0; // 0x23c1 Return
}


func_9663(var_596_bool)
{
	var_598_int = 0; var_599_string = ""; // 0x25c0 PushV
	var_599_string = "d3q02"; // 0x25c1 MovS
	func_8784(var_598_int, var_599_string); // 0x25c2 NEW_2
	var_600_int = 1; // 0x25c4 PushI
	var_601_bool = var_598_int == var_600_int; // 0x25c5 Eq
	if(var_601_bool == 0) goto Label_9673; // 0x25c6 JumpB
	var_596_bool = 1; // 0x25c7 MovB
	return 0; // 0x25c8 Return
	
Label_9673:
	var_596_bool = 0; // 0x25c9 MovB
	return 0; // 0x25ca Return
}


func_9154()
{
	var_128_object = Obj(); var_129_string = ""; var_130_float = 0; // 0x23c3 PushV
	var_131_object = Obj(); // 0x23c4 PushV
	func_10260(var_131_object); // 0x23c5 NEW_2
	var_128_object = var_131_object; // 0x23c6 Mov
	var_129_string = "pt_map_mladvlad"; // 0x23c8 MovS
	var_130_float = 2; // 0x23c9 MovI
	func_10277(var_128_object, var_129_string, var_130_float); // 0x23ca NEW_2
	var_151_object = Obj(); // 0x23cc PushV
	func_10260(var_151_object); // 0x23cd NEW_2
	ShowMap(var_151_object); // 0x23cf ObjFunc
	return 0; // 0x23d1 Return
}


func_10180()
{
	var_83_object = Obj(); var_84_object = Obj(); // 0x27c4 PushV
	var_85_int = 644; // 0x27c5 PushI
	var_86_int = 2; // 0x27c6 PushI
	var_87_int = 533278; // 0x27c7 PushI
	CreateDiaryEntry(var_84_object, var_85_int, var_86_int, var_87_int); // 0x27c8 Func
	var_88_bool = 0; var_89_object = Obj(); var_90_int = 0; // 0x27ca PushV
	var_89_object = var_84_object; // 0x27cb Mov
	var_90_int = 641; // 0x27cc MovI
	func_10232(var_88_bool, var_89_object, var_90_int); // 0x27cd NEW_2
	return 2; // 0x27cf Return
}


func_970(var_2_object, var_368_string)
{
	var_369_bool = 0; // 0x3cb PushV
	func_8923(var_369_bool); // 0x3cc NEW_2
	var_370_bool = var_369_bool == 0; // 0x3ce Not
	if(var_370_bool == 0) goto Label_977; // 0x3cf JumpB
	return 0; // 0x3d0 Return
	
Label_977:
	var_371_bool = var_368_string == var_2_object; // 0x3d1 Eq
	if(var_371_bool == 0) goto Label_980; // 0x3d2 JumpB
	return 0; // 0x3d3 Return
	
Label_980:
	var_372_string = ""; var_373_bool = 0; // 0x3d4 PushV
	var_372_string = var_368_string; // 0x3d5 Mov
	var_374_string = ""; // 0x3d6 PushS
	var_375_bool = var_368_string == var_374_string; // 0x3d7 Eq
	if(var_375_bool == 0) goto Label_987; // 0x3d8 JumpB
	var_373_bool = 0; // 0x3d9 MovB
	goto Label_988; // 0x3da Jump
	
Label_988:
	func_8720(var_372_string, var_373_bool); // 0x3dc NEW_2
	var_2_object = var_368_string; // 0x3de TMov
	return 0; // 0x3df Return
	
Label_987:
	var_373_bool = 1; // 0x3db MovB
}


func_9675(var_602_bool)
{
	var_604_int = 0; var_605_string = ""; // 0x25cc PushV
	var_605_string = "ood3Viktor1"; // 0x25cd MovS
	func_8784(var_604_int, var_605_string); // 0x25ce NEW_2
	var_606_int = 0; // 0x25d0 PushI
	var_607_bool = var_604_int == var_606_int; // 0x25d1 Eq
	if(var_607_bool == 0) goto Label_9685; // 0x25d2 JumpB
	var_602_bool = 1; // 0x25d3 MovB
	return 0; // 0x25d4 Return
	
Label_9685:
	var_602_bool = 0; // 0x25d5 MovB
	return 0; // 0x25d6 Return
}


func_6609(var_2_object, var_1314_string)
{
	var_1315_bool = 0; // 0x19d2 PushV
	func_8923(var_1315_bool); // 0x19d3 NEW_2
	var_1316_bool = var_1315_bool == 0; // 0x19d5 Not
	if(var_1316_bool == 0) goto Label_6616; // 0x19d6 JumpB
	return 0; // 0x19d7 Return
	
Label_6616:
	var_1317_bool = var_1314_string == var_2_object; // 0x19d8 Eq
	if(var_1317_bool == 0) goto Label_6619; // 0x19d9 JumpB
	return 0; // 0x19da Return
	
Label_6619:
	var_1318_string = ""; var_1319_bool = 0; // 0x19db PushV
	var_1318_string = var_1314_string; // 0x19dc Mov
	var_1320_string = ""; // 0x19dd PushS
	var_1321_bool = var_1314_string == var_1320_string; // 0x19de Eq
	if(var_1321_bool == 0) goto Label_6626; // 0x19df JumpB
	var_1319_bool = 0; // 0x19e0 MovB
	goto Label_6627; // 0x19e1 Jump
	
Label_6627:
	func_8720(var_1318_string, var_1319_bool); // 0x19e3 NEW_2
	var_2_object = var_1314_string; // 0x19e5 TMov
	return 0; // 0x19e6 Return
	
Label_6626:
	var_1319_bool = 1; // 0x19e2 MovB
}


func_9170()
{
	var_174_object = Obj(); var_175_object = Obj(); // 0x23d2 PushV
	var_176_string = "d3q02"; // 0x23d3 PushS
	var_177_int = 3; // 0x23d4 PushI
	SetVariable(var_176_string, var_177_int); // 0x23d5 Func
	var_178_object = Obj(); // 0x23d7 PushV
	func_10260(var_178_object); // 0x23d8 NEW_2
	var_175_object = var_178_object; // 0x23d9 Mov
	var_179_string = "d3q02ViktorGotoHan"; // 0x23db PushS
	var_180_string = "pt_map_han"; // 0x23dc PushS
	var_181_int = 0; // 0x23dd PushI
	var_182_int = 511385; // 0x23de PushI
	var_183_float = 0; // 0x23df PushV
	func_8895(var_183_float); // 0x23e0 NEW_2
	AddMark(var_179_string, var_180_string, var_181_int, var_182_int, var_183_float); // 0x23e2 ObjFunc
	func_10050(); // 0x23e5 NEW_2
	return 2; // 0x23e7 Return
}


func_10193()
{
	var_83_object = Obj(); var_84_object = Obj(); // 0x27d1 PushV
	var_85_int = 182; // 0x27d2 PushI
	var_86_int = 1; // 0x27d3 PushI
	var_87_int = 515445; // 0x27d4 PushI
	CreateDiaryEntry(var_84_object, var_85_int, var_86_int, var_87_int); // 0x27d5 Func
	var_88_bool = 0; var_89_object = Obj(); var_90_int = 0; // 0x27d7 PushV
	var_89_object = var_84_object; // 0x27d8 Mov
	var_90_int = -1; // 0x27d9 MovI
	func_10232(var_88_bool, var_89_object, var_90_int); // 0x27da NEW_2
	return 2; // 0x27dc Return
}


func_8661(var_209_bool)
{
	var_211_string = ""; var_212_int = 0; var_213_bool = 0; var_214_int = 0; var_215_string = ""; var_216_string = ""; var_217_int = 0; var_218_bool = 0; var_219_int = 0; var_220_string = ""; // 0x21d5 PushV
	var_221_string = "d"; // 0x21d6 PushS
	var_222_int = 0; // 0x21d7 PushV
	func_8900(var_222_int); // 0x21d8 NEW_2
	var_228_int = var_221_string + var_222_int; // 0x21da Add
	var_229_string = "m"; // 0x21db PushS
	var_216_string = var_228_int + var_229_string; // 0x21dc Add2
	var_217_int = 0; // 0x21dd MovI
	
Label_8670:
	var_230_int = 1; // 0x21de PushI
	if(var_230_int == 0) goto Label_8683; // 0x21df JumpB
	var_231_int = 1; // 0x21e0 PushI
	var_232_int = var_217_int + var_231_int; // 0x21e1 Add
	var_233_int = var_216_string + var_232_int; // 0x21e2 Add
	HasProperty(var_233_int, var_218_bool); // 0x21e3 ObjFunc
	var_234_bool = var_218_bool == 0; // 0x21e5 Not
	if(var_234_bool == 0) goto Label_8680; // 0x21e6 JumpB
	goto Label_8683; // 0x21e7 Jump
	
Label_8683:
	var_235_bool = var_217_int == 0; // 0x21eb Not
	if(var_235_bool == 0) goto Label_8687; // 0x21ec JumpB
	var_209_bool = 0; // 0x21ed MovB
	return 10; // 0x21ee Return
	
Label_8687:
	var_219_int = 0; // 0x21ef MovI
	var_236_int = 1; // 0x21f0 PushI
	var_237_bool = var_217_int > var_236_int; // 0x21f1 GT
	if(var_237_bool == 0) goto Label_8693; // 0x21f2 JumpB
	irand(var_219_int, var_217_int); // 0x21f3 Func
	
Label_8693:
	var_238_int = 1; // 0x21f5 PushI
	var_239_int = var_219_int + var_238_int; // 0x21f6 Add
	var_240_int = var_216_string + var_239_int; // 0x21f7 Add
	GetProperty(var_240_int, var_220_string); // 0x21f8 ObjFunc
	var_241_bool = 0; var_242_string = ""; // 0x21fa PushV
	var_242_string = var_220_string; // 0x21fb Mov
	func_8735(var_241_bool, var_242_string); // 0x21fc NEW_2
	var_209_bool = var_241_bool; // 0x21fd Mov
	return 10; // 0x21ff Return
	
Label_8680:
	var_243_int = 1; // 0x21e8 PushI
	var_217_int = var_217_int + var_243_int; // 0x21e9 Add2
	goto Label_8670; // 0x21ea Jump
}


func_9687(var_618_bool)
{
	var_620_int = 0; var_621_string = ""; // 0x25d8 PushV
	var_621_string = "d3q02"; // 0x25d9 MovS
	func_8784(var_620_int, var_621_string); // 0x25da NEW_2
	var_622_int = 2; // 0x25dc PushI
	var_623_bool = var_620_int == var_622_int; // 0x25dd Eq
	if(var_623_bool == 0) goto Label_9697; // 0x25de JumpB
	var_618_bool = 1; // 0x25df MovB
	return 0; // 0x25e0 Return
	
Label_9697:
	var_618_bool = 0; // 0x25e1 MovB
	return 0; // 0x25e2 Return
}


func_10206()
{
	var_106_object = Obj(); var_107_object = Obj(); // 0x27de PushV
	var_108_int = 183; // 0x27df PushI
	var_109_int = 1; // 0x27e0 PushI
	var_110_int = 515446; // 0x27e1 PushI
	CreateDiaryEntry(var_107_object, var_108_int, var_109_int, var_110_int); // 0x27e2 Func
	var_111_bool = 0; var_112_object = Obj(); var_113_int = 0; // 0x27e4 PushV
	var_112_object = var_107_object; // 0x27e5 Mov
	var_113_int = 182; // 0x27e6 MovI
	func_10232(var_111_bool, var_112_object, var_113_int); // 0x27e7 NEW_2
	return 2; // 0x27e9 Return
}


func_9699(var_612_bool)
{
	var_614_int = 0; var_615_string = ""; // 0x25e4 PushV
	var_615_string = "ood3Viktor2"; // 0x25e5 MovS
	func_8784(var_614_int, var_615_string); // 0x25e6 NEW_2
	var_616_int = 0; // 0x25e8 PushI
	var_617_bool = var_614_int == var_616_int; // 0x25e9 Eq
	if(var_617_bool == 0) goto Label_9709; // 0x25ea JumpB
	var_612_bool = 1; // 0x25eb MovB
	return 0; // 0x25ec Return
	
Label_9709:
	var_612_bool = 0; // 0x25ed MovB
	return 0; // 0x25ee Return
}


func_9193()
{
	var_168_string = "ood3Viktor2"; // 0x23ea PushS
	var_169_int = 1; // 0x23eb PushI
	SetVariable(var_168_string, var_169_int); // 0x23ec Func
	return 0; // 0x23ee Return
}


func_10219(var_97_object)
{
	var_98_object = Obj(); var_99_object = Obj(); // 0x27eb PushV
	GetDiaryRoot(var_99_object); // 0x27ec Func
	var_100_bool = var_99_object == 0; // 0x27ee Not
	if(var_100_bool == 0) goto Label_10229; // 0x27ef JumpB
	var_101_string = "Can't retrieve diary root"; // 0x27f0 PushS
	Trace(var_101_string); // 0x27f1 Func
	var_97_object = 0; // 0x27f3 MovB
	return 2; // 0x27f4 Return
	
Label_10229:
	var_97_object = var_99_object; // 0x27f5 Mov
	return 2; // 0x27f6 Return
}


func_9199()
{
	var_97_object = Obj(); var_98_object = Obj(); // 0x23ef PushV
	var_99_string = "d1q01"; // 0x23f0 PushS
	var_100_int = 2; // 0x23f1 PushI
	SetVariable(var_99_string, var_100_int); // 0x23f2 Func
	var_101_object = Obj(); // 0x23f4 PushV
	func_10260(var_101_object); // 0x23f5 NEW_2
	var_98_object = var_101_object; // 0x23f6 Mov
	var_108_string = "d1q01ViktorGotoIsidor"; // 0x23f8 PushS
	var_109_string = "pt_map_burah_father"; // 0x23f9 PushS
	var_110_int = 1; // 0x23fa PushI
	var_111_int = 508637; // 0x23fb PushI
	var_112_float = 0; // 0x23fc PushV
	func_8895(var_112_float); // 0x23fd NEW_2
	AddMark(var_108_string, var_109_string, var_110_int, var_111_int, var_112_float); // 0x23ff ObjFunc
	func_10024(); // 0x2402 NEW_2
	var_138_bool = 0; var_139_string = ""; var_140_string = ""; // 0x2404 PushV
	var_139_string = "quest_d1_01"; // 0x2405 MovS
	var_140_string = "place_patrol"; // 0x2406 MovS
	func_8883(var_138_bool, var_139_string, var_140_string); // 0x2407 NEW_2
	return 2; // 0x2409 Return
}


func_9711(var_825_bool)
{
	var_827_int = 0; var_828_string = ""; // 0x25f0 PushV
	var_828_string = "d5q03"; // 0x25f1 MovS
	func_8784(var_827_int, var_828_string); // 0x25f2 NEW_2
	var_829_int = 0; // 0x25f4 PushI
	var_830_bool = var_827_int == var_829_int; // 0x25f5 Eq
	if(var_830_bool == 0) goto Label_9721; // 0x25f6 JumpB
	var_825_bool = 1; // 0x25f7 MovB
	return 0; // 0x25f8 Return
	
Label_9721:
	var_825_bool = 0; // 0x25f9 MovB
	return 0; // 0x25fa Return
}


func_2033(var_0_object, var_465_int, var_466_object)
{
	var_468_object = Obj(); var_469_bool = 0; var_470_int = 0; var_471_bool = 0; var_472_object = Obj(); var_473_bool = 0; var_474_int = 0; var_475_bool = 0; // 0x7f1 PushV
	var_0_object = var_466_object; // 0x7f2 TMov
	var_476_bool = 0; var_477_object = Obj(); var_478_float = 0; // 0x7f3 PushV
	var_477_object = var_466_object; // 0x7f4 Mov
	var_478_float = 70.0; // 0x7f5 MovF
	func_8479(var_477_object, var_478_float); // 0x7f6 NEW_2
	var_479_bool = var_476_bool == 0; // 0x7f8 Not
	if(var_479_bool == 0) goto Label_2044; // 0x7f9 JumpB
	var_465_int = -2; // 0x7fa MovI
	return 8; // 0x7fb Return
	
Label_2044:
	CreateDialog(var_472_object); // 0x7fc Func
	var_480_int = 0; // 0x7fe PushV
	func_8917(var_480_int); // 0x7ff NEW_2
	SetNPCName(var_480_int); // 0x801 ObjFunc
	var_481_int = 0; // 0x803 PushV
	func_8915(var_481_int); // 0x804 NEW_2
	SetNPCDescription(var_481_int); // 0x806 ObjFunc
	var_482_string = ""; // 0x808 PushV
	func_8919(var_482_string); // 0x809 NEW_2
	SetPhoto(var_482_string); // 0x80b ObjFunc
	var_483_string = ""; // 0x80d PushV
	func_8921(var_483_string); // 0x80e NEW_2
	SetPhoto2(var_483_string); // 0x810 ObjFunc
	var_484_int = 0; // 0x812 PushV
	func_10310(var_484_int); // 0x813 NEW_2
	SetPlayerName(var_484_int); // 0x815 ObjFunc
	var_474_int = -1; // 0x817 MovI
	IsOverrideActive(var_473_bool); // 0x818 Func
	var_485_bool = var_473_bool; // 0x81a Push
	if(var_485_bool == 0) goto Label_2078; // 0x81b JumpB
	var_465_int = -2; // 0x81c MovI
	return 8; // 0x81d Return
	
Label_2078:
	DoDialog(var_472_object); // 0x81e Func
	var_486_bool = 0; var_487_object = Obj(); // 0x820 PushV
	var_488_object = Obj(); // 0x821 PushV
	func_8757(var_488_object); // 0x822 NEW_2
	var_487_object = var_488_object; // 0x823 Mov
	func_8566(var_486_bool, var_487_object); // 0x825 NEW_2
	var_489_object = Obj(); var_490_object = Obj(); // 0x827 PushV
	var_489_object = var_466_object; // 0x828 Mov
	var_490_object = var_472_object; // 0x829 Mov
	TaskCall(8); // 0x82a TaskCall
	func_2114(var_491_object, var_492_object, var_493_string, var_494_bool, var_489_object, var_490_object); // 0x82b NEW_2
	TaskReturn(); // 0x82c TaskReturn
	IsDialogEnd(var_475_bool); // 0x82e ObjFunc
	
Label_2096:
	var_551_bool = var_475_bool == 0; // 0x830 Not
	if(var_551_bool == 0) goto Label_2103; // 0x831 JumpB
	sync(); // 0x832 Func
	IsDialogEnd(var_475_bool); // 0x834 ObjFunc
	goto Label_2096; // 0x836 Jump
	
Label_2103:
	var_552_object = Obj(); // 0x837 PushV
	var_552_object = var_466_object; // 0x838 Mov
	func_8548(); // 0x839 NEW_2
	StopDialog(var_472_object); // 0x83b Func
	GetReturnValue(var_474_int); // 0x83d ObjFunc
	var_465_int = var_474_int; // 0x83f Mov
	return 8; // 0x840 Return
}


func_10232(var_88_bool, var_89_object, var_90_int)
{
	var_91_object = Obj(); var_92_object = Obj(); var_93_int = 0; var_94_object = Obj(); var_95_object = Obj(); var_96_int = 0; // 0x27f8 PushV
	var_97_object = Obj(); // 0x27f9 PushV
	func_10219(var_97_object); // 0x27fa NEW_2
	var_94_object = var_97_object; // 0x27fb Mov
	Find(var_90_int, var_95_object); // 0x27fd ObjFunc
	var_102_bool = var_95_object == 0; // 0x27ff Not
	if(var_102_bool == 0) goto Label_10247; // 0x2800 JumpB
	var_103_string = "Can't find diary parent with id: "; // 0x2801 PushS
	var_104_int = var_103_string + var_90_int; // 0x2802 Add
	Trace(var_104_int); // 0x2803 Func
	var_88_bool = 0; // 0x2805 MovB
	return 6; // 0x2806 Return
	
Label_10247:
	AddChild(var_89_object); // 0x2807 ObjFunc
	var_105_int = 7; // 0x2809 PushI
	SendWorldWndMessage(var_105_int); // 0x280a Func
	GetCategory(var_96_int); // 0x280c ObjFunc
	SetDiarySection(var_96_int); // 0x280e Func
	var_88_bool = 0; // 0x2810 MovB
	return 6; // 0x2811 Return
}


func_5626(var_0_object, var_1_object, var_2_object, var_3_string, var_1124_object, var_1125_object)
{
	var_0_object = var_1125_object; // 0x15fb TMov
	var_1_object = var_1124_object; // 0x15fc TMov
	var_3_string = 0; // 0x15fd TMovB
	var_1130_int = 1; // 0x15fe PushI
	if(var_1130_int == 0) goto Label_5713; // 0x15ff JumpB
	var_1131_bool = 0; var_1132_object = Obj(); // 0x1600 PushV
	var_1132_object = var_1_object; // 0x1601 MovT
	func_9831(var_1132_object); // 0x1602 NEW_2
	if(var_1131_bool == 0) goto Label_5667; // 0x1604 JumpB
	var_1137_object = Obj(); var_1138_object = Obj(); // 0x1605 PushV
	var_1137_object = var_1_object; // 0x1606 MovT
	var_1138_object = var_0_object; // 0x1607 MovT
	func_9353(); // 0x1608 NEW_2
	var_1141_object = Obj(); var_1142_object = Obj(); // 0x160a PushV
	var_1141_object = var_1_object; // 0x160b MovT
	var_1142_object = var_0_object; // 0x160c MovT
	func_9077(); // 0x160d NEW_2
	var_1145_string = ""; // 0x160f PushV
	var_1145_string = "Neutral"; // 0x1610 MovS
	func_5743(var_1125_object, var_1145_string); // 0x1611 NEW_2
	var_1153_int = 513994; // 0x1613 PushI
	SetMessage(var_1153_int); // 0x1614 TObjFunc
	ClearReplies(); // 0x1616 TObjFunc
	var_1154_int = 538808; // 0x1618 PushI
	var_1155_int = 40728; // 0x1619 PushI
	var_1156_int = 40727; // 0x161a PushI
	AddReply(var_1154_int, var_1155_int, var_1156_int); // 0x161b TObjFunc
	var_1157_int = 538813; // 0x161d PushI
	var_1158_int = 40730; // 0x161e PushI
	var_1159_int = 40732; // 0x161f PushI
	AddReply(var_1157_int, var_1158_int, var_1159_int); // 0x1620 TObjFunc
	goto Label_5713; // 0x1622 Jump
	
Label_5713:
	var_1160_bool = 0; // 0x1651 PushV
	func_8923(var_1160_bool); // 0x1652 NEW_2
	if(var_1160_bool == 0) goto Label_5728; // 0x1654 JumpB
	
Label_5717:
	lshWaitForAnimEnd(); // 0x1655 Func
	var_1161_string = var_3_string; // 0x1657 PushT
	if(var_1161_string == 0) goto Label_5722; // 0x1658 JumpB
	goto Label_5727; // 0x1659 Jump
	
Label_5727:
	goto Label_5742; // 0x165f Jump
	
Label_5742:
	return 0; // 0x166e Return
	
Label_5722:
	var_1162_string = ""; // 0x165a PushV
	var_1162_string = var_2_object; // 0x165b MovT
	func_8704(var_1162_string); // 0x165c NEW_2
	goto Label_5717; // 0x165e Jump
	
Label_5728:
	var_1163_string = "all"; // 0x1660 PushS
	var_1164_string = "idle"; // 0x1661 PushS
	PlayAnimation(var_1163_string, var_1164_string); // 0x1662 Func
	
Label_5732:
	WaitForAnimEnd(); // 0x1664 Func
	var_1165_string = var_3_string; // 0x1666 PushT
	if(var_1165_string == 0) goto Label_5737; // 0x1667 JumpB
	goto Label_5742; // 0x1668 Jump
	
Label_5737:
	var_1166_string = "all"; // 0x1669 PushS
	var_1167_string = "idle"; // 0x166a PushS
	PlayAnimation(var_1166_string, var_1167_string); // 0x166b Func
	goto Label_5732; // 0x166d Jump
	
Label_5667:
	var_1168_string = ""; // 0x1623 PushV
	var_1168_string = "Neutral"; // 0x1624 MovS
	func_5743(var_1125_object, var_1168_string); // 0x1625 NEW_2
	var_1169_int = 514011; // 0x1627 PushI
	SetMessage(var_1169_int); // 0x1628 TObjFunc
	ClearReplies(); // 0x162a TObjFunc
	var_1170_bool = 0; var_1171_object = Obj(); // 0x162c PushV
	var_1171_object = var_1_object; // 0x162d MovT
	func_9939(var_1171_object); // 0x162e NEW_2
	if(var_1170_bool == 0) goto Label_5686; // 0x1630 JumpB
	var_1176_int = 514012; // 0x1631 PushI
	var_1177_int = 15248; // 0x1632 PushI
	var_1178_int = 15247; // 0x1633 PushI
	AddReply(var_1176_int, var_1177_int, var_1178_int); // 0x1634 TObjFunc
	
Label_5686:
	var_1179_bool = 0; // 0x1636 PushV
	var_1179_bool = 0; // 0x1637 MovB
	var_1180_bool = 0; var_1181_object = Obj(); // 0x1638 PushV
	var_1181_object = var_1_object; // 0x1639 MovT
	func_9843(var_1181_object); // 0x163a NEW_2
	if(var_1180_bool == 0) goto Label_5699; // 0x163c JumpB
	var_1186_bool = 0; var_1187_object = Obj(); // 0x163d PushV
	var_1187_object = var_1_object; // 0x163e MovT
	func_9855(var_1187_object); // 0x163f NEW_2
	if(var_1186_bool == 0) goto Label_5699; // 0x1641 JumpB
	var_1179_bool = 1; // 0x1642 MovB
	
Label_5699:
	if(var_1179_bool == 0) goto Label_5705; // 0x1643 JumpB
	var_1192_int = 514029; // 0x1644 PushI
	var_1193_int = 15265; // 0x1645 PushI
	var_1194_int = 15264; // 0x1646 PushI
	AddReply(var_1192_int, var_1193_int, var_1194_int); // 0x1647 TObjFunc
	
Label_5705:
	var_1195_int = 514039; // 0x1649 PushI
	var_1196_int = -1; // 0x164a PushI
	var_1197_int = 15274; // 0x164b PushI
	AddReply(var_1195_int, var_1196_int, var_1197_int); // 0x164c TObjFunc
	goto Label_5713; // 0x164e Jump
}


func_9723(var_795_bool)
{
	var_797_int = 0; var_798_string = ""; // 0x25fc PushV
	var_798_string = "d5q03"; // 0x25fd MovS
	func_8784(var_797_int, var_798_string); // 0x25fe NEW_2
	var_799_int = 1000; // 0x2600 PushI
	var_800_bool = var_797_int == var_799_int; // 0x2601 Eq
	if(var_800_bool == 0) goto Label_9733; // 0x2602 JumpB
	var_795_bool = 1; // 0x2603 MovB
	return 0; // 0x2604 Return
	
Label_9733:
	var_795_bool = 0; // 0x2605 MovB
	return 0; // 0x2606 Return
}


func_5118(var_0_object, var_1017_int, var_1018_object)
{
	var_1020_object = Obj(); var_1021_bool = 0; var_1022_int = 0; var_1023_bool = 0; var_1024_object = Obj(); var_1025_bool = 0; var_1026_int = 0; var_1027_bool = 0; // 0x13fe PushV
	var_0_object = var_1018_object; // 0x13ff TMov
	var_1028_bool = 0; var_1029_object = Obj(); var_1030_float = 0; // 0x1400 PushV
	var_1029_object = var_1018_object; // 0x1401 Mov
	var_1030_float = 70.0; // 0x1402 MovF
	func_8479(var_1029_object, var_1030_float); // 0x1403 NEW_2
	var_1031_bool = var_1028_bool == 0; // 0x1405 Not
	if(var_1031_bool == 0) goto Label_5129; // 0x1406 JumpB
	var_1017_int = -2; // 0x1407 MovI
	return 8; // 0x1408 Return
	
Label_5129:
	CreateDialog(var_1024_object); // 0x1409 Func
	var_1032_int = 0; // 0x140b PushV
	func_8917(var_1032_int); // 0x140c NEW_2
	SetNPCName(var_1032_int); // 0x140e ObjFunc
	var_1033_int = 0; // 0x1410 PushV
	func_8915(var_1033_int); // 0x1411 NEW_2
	SetNPCDescription(var_1033_int); // 0x1413 ObjFunc
	var_1034_string = ""; // 0x1415 PushV
	func_8919(var_1034_string); // 0x1416 NEW_2
	SetPhoto(var_1034_string); // 0x1418 ObjFunc
	var_1035_string = ""; // 0x141a PushV
	func_8921(var_1035_string); // 0x141b NEW_2
	SetPhoto2(var_1035_string); // 0x141d ObjFunc
	var_1036_int = 0; // 0x141f PushV
	func_10310(var_1036_int); // 0x1420 NEW_2
	SetPlayerName(var_1036_int); // 0x1422 ObjFunc
	var_1026_int = -1; // 0x1424 MovI
	IsOverrideActive(var_1025_bool); // 0x1425 Func
	var_1037_bool = var_1025_bool; // 0x1427 Push
	if(var_1037_bool == 0) goto Label_5163; // 0x1428 JumpB
	var_1017_int = -2; // 0x1429 MovI
	return 8; // 0x142a Return
	
Label_5163:
	DoDialog(var_1024_object); // 0x142b Func
	var_1038_bool = 0; var_1039_object = Obj(); // 0x142d PushV
	var_1040_object = Obj(); // 0x142e PushV
	func_8757(var_1040_object); // 0x142f NEW_2
	var_1039_object = var_1040_object; // 0x1430 Mov
	func_8566(var_1038_bool, var_1039_object); // 0x1432 NEW_2
	var_1041_object = Obj(); var_1042_object = Obj(); // 0x1434 PushV
	var_1041_object = var_1018_object; // 0x1435 Mov
	var_1042_object = var_1024_object; // 0x1436 Mov
	TaskCall(18); // 0x1437 TaskCall
	func_5199(var_1043_object, var_1044_object, var_1045_string, var_1046_bool, var_1041_object, var_1042_object); // 0x1438 NEW_2
	TaskReturn(); // 0x1439 TaskReturn
	IsDialogEnd(var_1027_bool); // 0x143b ObjFunc
	
Label_5181:
	var_1096_bool = var_1027_bool == 0; // 0x143d Not
	if(var_1096_bool == 0) goto Label_5188; // 0x143e JumpB
	sync(); // 0x143f Func
	IsDialogEnd(var_1027_bool); // 0x1441 ObjFunc
	goto Label_5181; // 0x1443 Jump
	
Label_5188:
	var_1097_object = Obj(); // 0x1444 PushV
	var_1097_object = var_1018_object; // 0x1445 Mov
	func_8548(); // 0x1446 NEW_2
	StopDialog(var_1024_object); // 0x1448 Func
	GetReturnValue(var_1026_int); // 0x144a ObjFunc
	var_1017_int = var_1026_int; // 0x144c Mov
	return 8; // 0x144d Return
}


