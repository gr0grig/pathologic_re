task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_object, var_53_object, var_54_object, var_55_string, var_56_bool, var_57_cvector)
{
	var_58_int = 1; // 0xa2 PushI
	if(var_58_int == 0) goto Label_253; // 0xa3 JumpB
	func_7845(); // 0xa5 NEW_2
	var_60_int = 336; // 0xa7 PushI
	var_61_bool = var_56_bool == var_60_int; // 0xa8 Eq
	if(var_61_bool == 0) goto Label_190; // 0xa9 JumpB
	var_62_object = Obj(); var_63_object = Obj(); // 0xaa PushV
	var_62_object = var_1_object; // 0xab MovT
	var_63_object = var_0_object; // 0xac MovT
	func_8676(); // 0xad NEW_2
	var_66_string = ""; // 0xaf PushV
	var_66_string = "Neutral"; // 0xb0 MovS
	func_139(var_57_cvector, var_66_string); // 0xb1 NEW_2
	var_83_int = 500287; // 0xb3 PushI
	SetMessage(var_83_int); // 0xb4 TObjFunc
	ClearReplies(); // 0xb6 TObjFunc
	var_84_int = 532871; // 0xb8 PushI
	var_85_int = 34360; // 0xb9 PushI
	var_86_int = 34359; // 0xba PushI
	AddReply(var_84_int, var_85_int, var_86_int); // 0xbb TObjFunc
	return 0; // 0xbd Return
	
Label_190:
	var_87_int = 34360; // 0xbe PushI
	var_88_bool = var_56_bool == var_87_int; // 0xbf Eq
	if(var_88_bool == 0) goto Label_218; // 0xc0 JumpB
	var_89_string = ""; // 0xc1 PushV
	var_89_string = "Neutral"; // 0xc2 MovS
	func_139(var_57_cvector, var_89_string); // 0xc3 NEW_2
	var_90_int = 532872; // 0xc5 PushI
	SetMessage(var_90_int); // 0xc6 TObjFunc
	ClearReplies(); // 0xc8 TObjFunc
	var_91_int = 500288; // 0xca PushI
	var_92_int = 340; // 0xcb PushI
	var_93_int = 337; // 0xcc PushI
	AddReply(var_91_int, var_92_int, var_93_int); // 0xcd TObjFunc
	var_94_int = 500290; // 0xcf PushI
	var_95_int = 340; // 0xd0 PushI
	var_96_int = 339; // 0xd1 PushI
	AddReply(var_94_int, var_95_int, var_96_int); // 0xd2 TObjFunc
	var_97_int = 500289; // 0xd4 PushI
	var_98_int = -1; // 0xd5 PushI
	var_99_int = 338; // 0xd6 PushI
	AddReply(var_97_int, var_98_int, var_99_int); // 0xd7 TObjFunc
	return 0; // 0xd9 Return
	
Label_218:
	var_100_int = 340; // 0xda PushI
	var_101_bool = var_56_bool == var_100_int; // 0xdb Eq
	if(var_101_bool == 0) goto Label_241; // 0xdc JumpB
	var_102_string = ""; // 0xdd PushV
	var_102_string = "Neutral"; // 0xde MovS
	func_139(var_57_cvector, var_102_string); // 0xdf NEW_2
	var_103_int = 500291; // 0xe1 PushI
	SetMessage(var_103_int); // 0xe2 TObjFunc
	ClearReplies(); // 0xe4 TObjFunc
	var_104_int = 500292; // 0xe6 PushI
	var_105_int = -1; // 0xe7 PushI
	var_106_int = 341; // 0xe8 PushI
	AddReply(var_104_int, var_105_int, var_106_int); // 0xe9 TObjFunc
	var_107_int = 500293; // 0xeb PushI
	var_108_int = -1; // 0xec PushI
	var_109_int = 342; // 0xed PushI
	AddReply(var_107_int, var_108_int, var_109_int); // 0xee TObjFunc
	return 0; // 0xf0 Return
	
Label_241:
	var_3_string = 1; // 0xf1 TMovB
	var_110_bool = 0; // 0xf2 PushV
	func_8086(var_110_bool); // 0xf3 NEW_2
	if(var_110_bool == 0) goto Label_249; // 0xf5 JumpB
	lshStopAnimation(); // 0xf6 Func
	goto Label_251; // 0xf8 Jump
	
Label_251:
	return 0; // 0xfb Return
	
Label_249:
	StopAnimation(); // 0xf9 Func
	
Label_253:
	return 0; // 0xfd Return
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_object, var_53_object, var_54_object, var_55_string, var_56_bool, var_57_cvector)
{
	var_58_int = 1; // 0x214 PushI
	if(var_58_int == 0) goto Label_1418; // 0x215 JumpB
	func_7845(); // 0x217 NEW_2
	var_60_int = 13846; // 0x219 PushI
	var_61_bool = var_57_cvector == var_60_int; // 0x21a Eq
	if(var_61_bool == 0) goto Label_550; // 0x21b JumpB
	var_62_object = Obj(); var_63_object = Obj(); // 0x21c PushV
	var_62_object = var_1_object; // 0x21d MovT
	var_63_object = var_0_object; // 0x21e MovT
	func_8682(); // 0x21f NEW_2
	var_113_object = Obj(); var_114_object = Obj(); // 0x221 PushV
	var_113_object = var_1_object; // 0x222 MovT
	var_114_object = var_0_object; // 0x223 MovT
	func_8310(); // 0x224 NEW_2
	
Label_550:
	var_117_int = 13851; // 0x226 PushI
	var_118_bool = var_57_cvector == var_117_int; // 0x227 Eq
	if(var_118_bool == 0) goto Label_563; // 0x228 JumpB
	var_119_object = Obj(); var_120_object = Obj(); // 0x229 PushV
	var_119_object = var_1_object; // 0x22a MovT
	var_120_object = var_0_object; // 0x22b MovT
	func_8682(); // 0x22c NEW_2
	var_121_object = Obj(); var_122_object = Obj(); // 0x22e PushV
	var_121_object = var_1_object; // 0x22f MovT
	var_122_object = var_0_object; // 0x230 MovT
	func_8310(); // 0x231 NEW_2
	
Label_563:
	var_123_int = 13891; // 0x233 PushI
	var_124_bool = var_57_cvector == var_123_int; // 0x234 Eq
	if(var_124_bool == 0) goto Label_576; // 0x235 JumpB
	var_125_object = Obj(); var_126_object = Obj(); // 0x236 PushV
	var_125_object = var_1_object; // 0x237 MovT
	var_126_object = var_0_object; // 0x238 MovT
	func_8682(); // 0x239 NEW_2
	var_127_object = Obj(); var_128_object = Obj(); // 0x23b PushV
	var_127_object = var_1_object; // 0x23c MovT
	var_128_object = var_0_object; // 0x23d MovT
	func_8310(); // 0x23e NEW_2
	
Label_576:
	var_129_int = 13904; // 0x240 PushI
	var_130_bool = var_57_cvector == var_129_int; // 0x241 Eq
	if(var_130_bool == 0) goto Label_589; // 0x242 JumpB
	var_131_object = Obj(); var_132_object = Obj(); // 0x243 PushV
	var_131_object = var_1_object; // 0x244 MovT
	var_132_object = var_0_object; // 0x245 MovT
	func_8682(); // 0x246 NEW_2
	var_133_object = Obj(); var_134_object = Obj(); // 0x248 PushV
	var_133_object = var_1_object; // 0x249 MovT
	var_134_object = var_0_object; // 0x24a MovT
	func_8310(); // 0x24b NEW_2
	
Label_589:
	var_135_int = 13905; // 0x24d PushI
	var_136_bool = var_57_cvector == var_135_int; // 0x24e Eq
	if(var_136_bool == 0) goto Label_602; // 0x24f JumpB
	var_137_object = Obj(); var_138_object = Obj(); // 0x250 PushV
	var_137_object = var_1_object; // 0x251 MovT
	var_138_object = var_0_object; // 0x252 MovT
	func_8682(); // 0x253 NEW_2
	var_139_object = Obj(); var_140_object = Obj(); // 0x255 PushV
	var_139_object = var_1_object; // 0x256 MovT
	var_140_object = var_0_object; // 0x257 MovT
	func_8310(); // 0x258 NEW_2
	
Label_602:
	var_141_int = 13829; // 0x25a PushI
	var_142_bool = var_57_cvector == var_141_int; // 0x25b Eq
	if(var_142_bool == 0) goto Label_610; // 0x25c JumpB
	var_143_object = Obj(); var_144_object = Obj(); // 0x25d PushV
	var_143_object = var_1_object; // 0x25e MovT
	var_144_object = var_0_object; // 0x25f MovT
	func_8636(); // 0x260 NEW_2
	
Label_610:
	var_147_int = 13840; // 0x262 PushI
	var_148_bool = var_57_cvector == var_147_int; // 0x263 Eq
	if(var_148_bool == 0) goto Label_618; // 0x264 JumpB
	var_149_object = Obj(); var_150_object = Obj(); // 0x265 PushV
	var_149_object = var_1_object; // 0x266 MovT
	var_150_object = var_0_object; // 0x267 MovT
	func_8642(); // 0x268 NEW_2
	
Label_618:
	var_153_int = 13195; // 0x26a PushI
	var_154_bool = var_57_cvector == var_153_int; // 0x26b Eq
	if(var_154_bool == 0) goto Label_626; // 0x26c JumpB
	var_155_object = Obj(); var_156_object = Obj(); // 0x26d PushV
	var_155_object = var_1_object; // 0x26e MovT
	var_156_object = var_0_object; // 0x26f MovT
	func_8648(); // 0x270 NEW_2
	
Label_626:
	var_159_int = 11744; // 0x272 PushI
	var_160_bool = var_57_cvector == var_159_int; // 0x273 Eq
	if(var_160_bool == 0) goto Label_639; // 0x274 JumpB
	var_161_object = Obj(); var_162_object = Obj(); // 0x275 PushV
	var_161_object = var_1_object; // 0x276 MovT
	var_162_object = var_0_object; // 0x277 MovT
	func_8654(); // 0x278 NEW_2
	var_171_object = Obj(); var_172_object = Obj(); // 0x27a PushV
	var_171_object = var_1_object; // 0x27b MovT
	var_172_object = var_0_object; // 0x27c MovT
	func_8088(); // 0x27d NEW_2
	
Label_639:
	var_197_int = 11745; // 0x27f PushI
	var_198_bool = var_57_cvector == var_197_int; // 0x280 Eq
	if(var_198_bool == 0) goto Label_652; // 0x281 JumpB
	var_199_object = Obj(); var_200_object = Obj(); // 0x282 PushV
	var_199_object = var_1_object; // 0x283 MovT
	var_200_object = var_0_object; // 0x284 MovT
	func_8654(); // 0x285 NEW_2
	var_201_object = Obj(); var_202_object = Obj(); // 0x287 PushV
	var_201_object = var_1_object; // 0x288 MovT
	var_202_object = var_0_object; // 0x289 MovT
	func_8088(); // 0x28a NEW_2
	
Label_652:
	var_203_int = 11756; // 0x28c PushI
	var_204_bool = var_57_cvector == var_203_int; // 0x28d Eq
	if(var_204_bool == 0) goto Label_665; // 0x28e JumpB
	var_205_object = Obj(); var_206_object = Obj(); // 0x28f PushV
	var_205_object = var_1_object; // 0x290 MovT
	var_206_object = var_0_object; // 0x291 MovT
	func_8654(); // 0x292 NEW_2
	var_207_object = Obj(); var_208_object = Obj(); // 0x294 PushV
	var_207_object = var_1_object; // 0x295 MovT
	var_208_object = var_0_object; // 0x296 MovT
	func_8088(); // 0x297 NEW_2
	
Label_665:
	var_209_int = 11759; // 0x299 PushI
	var_210_bool = var_57_cvector == var_209_int; // 0x29a Eq
	if(var_210_bool == 0) goto Label_678; // 0x29b JumpB
	var_211_object = Obj(); var_212_object = Obj(); // 0x29c PushV
	var_211_object = var_1_object; // 0x29d MovT
	var_212_object = var_0_object; // 0x29e MovT
	func_8654(); // 0x29f NEW_2
	var_213_object = Obj(); var_214_object = Obj(); // 0x2a1 PushV
	var_213_object = var_1_object; // 0x2a2 MovT
	var_214_object = var_0_object; // 0x2a3 MovT
	func_8088(); // 0x2a4 NEW_2
	
Label_678:
	var_215_int = 11760; // 0x2a6 PushI
	var_216_bool = var_57_cvector == var_215_int; // 0x2a7 Eq
	if(var_216_bool == 0) goto Label_691; // 0x2a8 JumpB
	var_217_object = Obj(); var_218_object = Obj(); // 0x2a9 PushV
	var_217_object = var_1_object; // 0x2aa MovT
	var_218_object = var_0_object; // 0x2ab MovT
	func_8654(); // 0x2ac NEW_2
	var_219_object = Obj(); var_220_object = Obj(); // 0x2ae PushV
	var_219_object = var_1_object; // 0x2af MovT
	var_220_object = var_0_object; // 0x2b0 MovT
	func_8088(); // 0x2b1 NEW_2
	
Label_691:
	var_221_int = 13830; // 0x2b3 PushI
	var_222_bool = var_56_bool == var_221_int; // 0x2b4 Eq
	if(var_222_bool == 0) goto Label_830; // 0x2b5 JumpB
	var_223_bool = 0; // 0x2b6 PushV
	var_223_bool = 0; // 0x2b7 MovB
	var_224_bool = 0; var_225_object = Obj(); // 0x2b8 PushV
	var_225_object = var_1_object; // 0x2b9 MovT
	func_9145(var_225_object); // 0x2ba NEW_2
	if(var_224_bool == 0) goto Label_707; // 0x2bc JumpB
	var_232_bool = 0; var_233_object = Obj(); // 0x2bd PushV
	var_233_object = var_1_object; // 0x2be MovT
	func_9157(var_233_object); // 0x2bf NEW_2
	if(var_232_bool == 0) goto Label_707; // 0x2c1 JumpB
	var_223_bool = 1; // 0x2c2 MovB
	
Label_707:
	if(var_223_bool == 0) goto Label_733; // 0x2c3 JumpB
	var_238_object = Obj(); var_239_object = Obj(); // 0x2c4 PushV
	var_238_object = var_1_object; // 0x2c5 MovT
	var_239_object = var_0_object; // 0x2c6 MovT
	func_8630(); // 0x2c7 NEW_2
	var_242_string = ""; // 0x2c9 PushV
	var_242_string = "Neutral"; // 0x2ca MovS
	func_509(var_57_cvector, var_242_string); // 0x2cb NEW_2
	var_259_int = 512650; // 0x2cd PushI
	SetMessage(var_259_int); // 0x2ce TObjFunc
	ClearReplies(); // 0x2d0 TObjFunc
	var_260_int = 510633; // 0x2d2 PushI
	var_261_int = 13839; // 0x2d3 PushI
	var_262_int = 11732; // 0x2d4 PushI
	AddReply(var_260_int, var_261_int, var_262_int); // 0x2d5 TObjFunc
	var_263_int = 510665; // 0x2d7 PushI
	var_264_int = 11772; // 0x2d8 PushI
	var_265_int = 11771; // 0x2d9 PushI
	AddReply(var_263_int, var_264_int, var_265_int); // 0x2da TObjFunc
	return 0; // 0x2dc Return
	
Label_733:
	var_266_string = ""; // 0x2dd PushV
	var_266_string = "Neutral"; // 0x2de MovS
	func_509(var_57_cvector, var_266_string); // 0x2df NEW_2
	var_267_int = 511979; // 0x2e1 PushI
	SetMessage(var_267_int); // 0x2e2 TObjFunc
	ClearReplies(); // 0x2e4 TObjFunc
	var_268_bool = 0; // 0x2e6 PushV
	var_268_bool = 0; // 0x2e7 MovB
	var_269_bool = 0; // 0x2e8 PushV
	var_269_bool = 0; // 0x2e9 MovB
	var_270_bool = 0; var_271_object = Obj(); // 0x2ea PushV
	var_271_object = var_1_object; // 0x2eb MovT
	func_9169(var_271_object); // 0x2ec NEW_2
	if(var_270_bool == 0) goto Label_757; // 0x2ee JumpB
	var_276_bool = 0; var_277_object = Obj(); // 0x2ef PushV
	var_277_object = var_1_object; // 0x2f0 MovT
	func_9085(var_277_object); // 0x2f1 NEW_2
	if(var_276_bool == 0) goto Label_757; // 0x2f3 JumpB
	var_269_bool = 1; // 0x2f4 MovB
	
Label_757:
	if(var_269_bool == 0) goto Label_765; // 0x2f5 JumpB
	var_282_bool = 0; var_283_object = Obj(); // 0x2f6 PushV
	var_283_object = var_1_object; // 0x2f7 MovT
	func_9241(var_283_object); // 0x2f8 NEW_2
	var_288_bool = var_282_bool == 0; // 0x2fa Not
	if(var_288_bool == 0) goto Label_765; // 0x2fb JumpB
	var_268_bool = 1; // 0x2fc MovB
	
Label_765:
	if(var_268_bool == 0) goto Label_771; // 0x2fd JumpB
	var_289_int = 512649; // 0x2fe PushI
	var_290_int = 13832; // 0x2ff PushI
	var_291_int = 13829; // 0x300 PushI
	AddReply(var_289_int, var_290_int, var_291_int); // 0x301 TObjFunc
	
Label_771:
	var_292_bool = 0; // 0x303 PushV
	var_292_bool = 0; // 0x304 MovB
	var_293_bool = 0; // 0x305 PushV
	var_293_bool = 0; // 0x306 MovB
	var_294_bool = 0; var_295_object = Obj(); // 0x307 PushV
	var_295_object = var_1_object; // 0x308 MovT
	func_9181(var_295_object); // 0x309 NEW_2
	if(var_294_bool == 0) goto Label_786; // 0x30b JumpB
	var_300_bool = 0; var_301_object = Obj(); // 0x30c PushV
	var_301_object = var_1_object; // 0x30d MovT
	func_9085(var_301_object); // 0x30e NEW_2
	if(var_300_bool == 0) goto Label_786; // 0x310 JumpB
	var_293_bool = 1; // 0x311 MovB
	
Label_786:
	if(var_293_bool == 0) goto Label_794; // 0x312 JumpB
	var_302_bool = 0; var_303_object = Obj(); // 0x313 PushV
	var_303_object = var_1_object; // 0x314 MovT
	func_9253(var_303_object); // 0x315 NEW_2
	var_308_bool = var_302_bool == 0; // 0x317 Not
	if(var_308_bool == 0) goto Label_794; // 0x318 JumpB
	var_292_bool = 1; // 0x319 MovB
	
Label_794:
	if(var_292_bool == 0) goto Label_800; // 0x31a JumpB
	var_309_int = 512660; // 0x31b PushI
	var_310_int = 13832; // 0x31c PushI
	var_311_int = 13840; // 0x31d PushI
	AddReply(var_309_int, var_310_int, var_311_int); // 0x31e TObjFunc
	
Label_800:
	var_312_bool = 0; // 0x320 PushV
	var_312_bool = 0; // 0x321 MovB
	var_313_bool = 0; var_314_object = Obj(); // 0x322 PushV
	var_314_object = var_1_object; // 0x323 MovT
	func_9193(var_314_object); // 0x324 NEW_2
	if(var_313_bool == 0) goto Label_813; // 0x326 JumpB
	var_319_bool = 0; var_320_object = Obj(); // 0x327 PushV
	var_320_object = var_1_object; // 0x328 MovT
	func_9205(var_320_object); // 0x329 NEW_2
	if(var_319_bool == 0) goto Label_813; // 0x32b JumpB
	var_312_bool = 1; // 0x32c MovB
	
Label_813:
	if(var_312_bool == 0) goto Label_819; // 0x32d JumpB
	var_325_int = 511980; // 0x32e PushI
	var_326_int = 13196; // 0x32f PushI
	var_327_int = 13195; // 0x330 PushI
	AddReply(var_325_int, var_326_int, var_327_int); // 0x331 TObjFunc
	
Label_819:
	var_328_int = 513018; // 0x333 PushI
	var_329_int = -1; // 0x334 PushI
	var_330_int = 14224; // 0x335 PushI
	AddReply(var_328_int, var_329_int, var_330_int); // 0x336 TObjFunc
	var_331_int = 542996; // 0x338 PushI
	var_332_int = -1; // 0x339 PushI
	var_333_int = 45444; // 0x33a PushI
	AddReply(var_331_int, var_332_int, var_333_int); // 0x33b TObjFunc
	return 0; // 0x33d Return
	
Label_830:
	var_334_int = 13196; // 0x33e PushI
	var_335_bool = var_56_bool == var_334_int; // 0x33f Eq
	if(var_335_bool == 0) goto Label_853; // 0x340 JumpB
	var_336_string = ""; // 0x341 PushV
	var_336_string = "Neutral"; // 0x342 MovS
	func_509(var_57_cvector, var_336_string); // 0x343 NEW_2
	var_337_int = 511981; // 0x345 PushI
	SetMessage(var_337_int); // 0x346 TObjFunc
	ClearReplies(); // 0x348 TObjFunc
	var_338_int = 511982; // 0x34a PushI
	var_339_int = 13198; // 0x34b PushI
	var_340_int = 13197; // 0x34c PushI
	AddReply(var_338_int, var_339_int, var_340_int); // 0x34d TObjFunc
	var_341_int = 512658; // 0x34f PushI
	var_342_int = 11733; // 0x350 PushI
	var_343_int = 13838; // 0x351 PushI
	AddReply(var_341_int, var_342_int, var_343_int); // 0x352 TObjFunc
	return 0; // 0x354 Return
	
Label_853:
	var_344_int = 11733; // 0x355 PushI
	var_345_bool = var_56_bool == var_344_int; // 0x356 Eq
	if(var_345_bool == 0) goto Label_881; // 0x357 JumpB
	var_346_string = ""; // 0x358 PushV
	var_346_string = "Neutral"; // 0x359 MovS
	func_509(var_57_cvector, var_346_string); // 0x35a NEW_2
	var_347_int = 510634; // 0x35c PushI
	SetMessage(var_347_int); // 0x35d TObjFunc
	ClearReplies(); // 0x35f TObjFunc
	var_348_int = 510635; // 0x361 PushI
	var_349_int = 11735; // 0x362 PushI
	var_350_int = 11734; // 0x363 PushI
	AddReply(var_348_int, var_349_int, var_350_int); // 0x364 TObjFunc
	var_351_int = 510660; // 0x366 PushI
	var_352_int = 11766; // 0x367 PushI
	var_353_int = 11763; // 0x368 PushI
	AddReply(var_351_int, var_352_int, var_353_int); // 0x369 TObjFunc
	var_354_int = 510661; // 0x36b PushI
	var_355_int = 11766; // 0x36c PushI
	var_356_int = 11765; // 0x36d PushI
	AddReply(var_354_int, var_355_int, var_356_int); // 0x36e TObjFunc
	return 0; // 0x370 Return
	
Label_881:
	var_357_int = 11766; // 0x371 PushI
	var_358_bool = var_56_bool == var_357_int; // 0x372 Eq
	if(var_358_bool == 0) goto Label_904; // 0x373 JumpB
	var_359_string = ""; // 0x374 PushV
	var_359_string = "Gratitude"; // 0x375 MovS
	func_509(var_57_cvector, var_359_string); // 0x376 NEW_2
	var_360_int = 510662; // 0x378 PushI
	SetMessage(var_360_int); // 0x379 TObjFunc
	ClearReplies(); // 0x37b TObjFunc
	var_361_int = 510663; // 0x37d PushI
	var_362_int = 11735; // 0x37e PushI
	var_363_int = 11767; // 0x37f PushI
	AddReply(var_361_int, var_362_int, var_363_int); // 0x380 TObjFunc
	var_364_int = 510664; // 0x382 PushI
	var_365_int = 11735; // 0x383 PushI
	var_366_int = 11769; // 0x384 PushI
	AddReply(var_364_int, var_365_int, var_366_int); // 0x385 TObjFunc
	return 0; // 0x387 Return
	
Label_904:
	var_367_int = 11735; // 0x388 PushI
	var_368_bool = var_56_bool == var_367_int; // 0x389 Eq
	if(var_368_bool == 0) goto Label_927; // 0x38a JumpB
	var_369_string = ""; // 0x38b PushV
	var_369_string = "Neutral"; // 0x38c MovS
	func_509(var_57_cvector, var_369_string); // 0x38d NEW_2
	var_370_int = 510636; // 0x38f PushI
	SetMessage(var_370_int); // 0x390 TObjFunc
	ClearReplies(); // 0x392 TObjFunc
	var_371_int = 510637; // 0x394 PushI
	var_372_int = 11737; // 0x395 PushI
	var_373_int = 11736; // 0x396 PushI
	AddReply(var_371_int, var_372_int, var_373_int); // 0x397 TObjFunc
	var_374_int = 510647; // 0x399 PushI
	var_375_int = 11749; // 0x39a PushI
	var_376_int = 11748; // 0x39b PushI
	AddReply(var_374_int, var_375_int, var_376_int); // 0x39c TObjFunc
	return 0; // 0x39e Return
	
Label_927:
	var_377_int = 11749; // 0x39f PushI
	var_378_bool = var_56_bool == var_377_int; // 0x3a0 Eq
	if(var_378_bool == 0) goto Label_950; // 0x3a1 JumpB
	var_379_string = ""; // 0x3a2 PushV
	var_379_string = "Neutral"; // 0x3a3 MovS
	func_509(var_57_cvector, var_379_string); // 0x3a4 NEW_2
	var_380_int = 510648; // 0x3a6 PushI
	SetMessage(var_380_int); // 0x3a7 TObjFunc
	ClearReplies(); // 0x3a9 TObjFunc
	var_381_int = 510649; // 0x3ab PushI
	var_382_int = 11737; // 0x3ac PushI
	var_383_int = 11750; // 0x3ad PushI
	AddReply(var_381_int, var_382_int, var_383_int); // 0x3ae TObjFunc
	var_384_int = 510650; // 0x3b0 PushI
	var_385_int = 11753; // 0x3b1 PushI
	var_386_int = 11752; // 0x3b2 PushI
	AddReply(var_384_int, var_385_int, var_386_int); // 0x3b3 TObjFunc
	return 0; // 0x3b5 Return
	
Label_950:
	var_387_int = 11753; // 0x3b6 PushI
	var_388_bool = var_56_bool == var_387_int; // 0x3b7 Eq
	if(var_388_bool == 0) goto Label_973; // 0x3b8 JumpB
	var_389_string = ""; // 0x3b9 PushV
	var_389_string = "Neutral"; // 0x3ba MovS
	func_509(var_57_cvector, var_389_string); // 0x3bb NEW_2
	var_390_int = 510651; // 0x3bd PushI
	SetMessage(var_390_int); // 0x3be TObjFunc
	ClearReplies(); // 0x3c0 TObjFunc
	var_391_int = 510652; // 0x3c2 PushI
	var_392_int = 11755; // 0x3c3 PushI
	var_393_int = 11754; // 0x3c4 PushI
	AddReply(var_391_int, var_392_int, var_393_int); // 0x3c5 TObjFunc
	var_394_int = 510659; // 0x3c7 PushI
	var_395_int = 11755; // 0x3c8 PushI
	var_396_int = 11761; // 0x3c9 PushI
	AddReply(var_394_int, var_395_int, var_396_int); // 0x3ca TObjFunc
	return 0; // 0x3cc Return
	
Label_973:
	var_397_int = 11755; // 0x3cd PushI
	var_398_bool = var_56_bool == var_397_int; // 0x3ce Eq
	if(var_398_bool == 0) goto Label_996; // 0x3cf JumpB
	var_399_string = ""; // 0x3d0 PushV
	var_399_string = "Neutral"; // 0x3d1 MovS
	func_509(var_57_cvector, var_399_string); // 0x3d2 NEW_2
	var_400_int = 510653; // 0x3d4 PushI
	SetMessage(var_400_int); // 0x3d5 TObjFunc
	ClearReplies(); // 0x3d7 TObjFunc
	var_401_int = 510654; // 0x3d9 PushI
	var_402_int = -1; // 0x3da PushI
	var_403_int = 11756; // 0x3db PushI
	AddReply(var_401_int, var_402_int, var_403_int); // 0x3dc TObjFunc
	var_404_int = 510655; // 0x3de PushI
	var_405_int = 11758; // 0x3df PushI
	var_406_int = 11757; // 0x3e0 PushI
	AddReply(var_404_int, var_405_int, var_406_int); // 0x3e1 TObjFunc
	return 0; // 0x3e3 Return
	
Label_996:
	var_407_int = 11758; // 0x3e4 PushI
	var_408_bool = var_56_bool == var_407_int; // 0x3e5 Eq
	if(var_408_bool == 0) goto Label_1019; // 0x3e6 JumpB
	var_409_string = ""; // 0x3e7 PushV
	var_409_string = "Neutral"; // 0x3e8 MovS
	func_509(var_57_cvector, var_409_string); // 0x3e9 NEW_2
	var_410_int = 510656; // 0x3eb PushI
	SetMessage(var_410_int); // 0x3ec TObjFunc
	ClearReplies(); // 0x3ee TObjFunc
	var_411_int = 510657; // 0x3f0 PushI
	var_412_int = -1; // 0x3f1 PushI
	var_413_int = 11759; // 0x3f2 PushI
	AddReply(var_411_int, var_412_int, var_413_int); // 0x3f3 TObjFunc
	var_414_int = 510658; // 0x3f5 PushI
	var_415_int = -1; // 0x3f6 PushI
	var_416_int = 11760; // 0x3f7 PushI
	AddReply(var_414_int, var_415_int, var_416_int); // 0x3f8 TObjFunc
	return 0; // 0x3fa Return
	
Label_1019:
	var_417_int = 11737; // 0x3fb PushI
	var_418_bool = var_56_bool == var_417_int; // 0x3fc Eq
	if(var_418_bool == 0) goto Label_1047; // 0x3fd JumpB
	var_419_string = ""; // 0x3fe PushV
	var_419_string = "Strict"; // 0x3ff MovS
	func_509(var_57_cvector, var_419_string); // 0x400 NEW_2
	var_420_int = 510638; // 0x402 PushI
	SetMessage(var_420_int); // 0x403 TObjFunc
	ClearReplies(); // 0x405 TObjFunc
	var_421_int = 510642; // 0x407 PushI
	var_422_int = 11743; // 0x408 PushI
	var_423_int = 11742; // 0x409 PushI
	AddReply(var_421_int, var_422_int, var_423_int); // 0x40a TObjFunc
	var_424_int = 510639; // 0x40c PushI
	var_425_int = 11739; // 0x40d PushI
	var_426_int = 11738; // 0x40e PushI
	AddReply(var_424_int, var_425_int, var_426_int); // 0x40f TObjFunc
	var_427_int = 510646; // 0x411 PushI
	var_428_int = 11739; // 0x412 PushI
	var_429_int = 11746; // 0x413 PushI
	AddReply(var_427_int, var_428_int, var_429_int); // 0x414 TObjFunc
	return 0; // 0x416 Return
	
Label_1047:
	var_430_int = 11739; // 0x417 PushI
	var_431_bool = var_56_bool == var_430_int; // 0x418 Eq
	if(var_431_bool == 0) goto Label_1065; // 0x419 JumpB
	var_432_string = ""; // 0x41a PushV
	var_432_string = "Neutral"; // 0x41b MovS
	func_509(var_57_cvector, var_432_string); // 0x41c NEW_2
	var_433_int = 510640; // 0x41e PushI
	SetMessage(var_433_int); // 0x41f TObjFunc
	ClearReplies(); // 0x421 TObjFunc
	var_434_int = 510641; // 0x423 PushI
	var_435_int = 11755; // 0x424 PushI
	var_436_int = 11740; // 0x425 PushI
	AddReply(var_434_int, var_435_int, var_436_int); // 0x426 TObjFunc
	return 0; // 0x428 Return
	
Label_1065:
	var_437_int = 11743; // 0x429 PushI
	var_438_bool = var_56_bool == var_437_int; // 0x42a Eq
	if(var_438_bool == 0) goto Label_1088; // 0x42b JumpB
	var_439_string = ""; // 0x42c PushV
	var_439_string = "Neutral"; // 0x42d MovS
	func_509(var_57_cvector, var_439_string); // 0x42e NEW_2
	var_440_int = 510643; // 0x430 PushI
	SetMessage(var_440_int); // 0x431 TObjFunc
	ClearReplies(); // 0x433 TObjFunc
	var_441_int = 510644; // 0x435 PushI
	var_442_int = -1; // 0x436 PushI
	var_443_int = 11744; // 0x437 PushI
	AddReply(var_441_int, var_442_int, var_443_int); // 0x438 TObjFunc
	var_444_int = 510645; // 0x43a PushI
	var_445_int = -1; // 0x43b PushI
	var_446_int = 11745; // 0x43c PushI
	AddReply(var_444_int, var_445_int, var_446_int); // 0x43d TObjFunc
	return 0; // 0x43f Return
	
Label_1088:
	var_447_int = 13198; // 0x440 PushI
	var_448_bool = var_56_bool == var_447_int; // 0x441 Eq
	if(var_448_bool == 0) goto Label_1106; // 0x442 JumpB
	var_449_string = ""; // 0x443 PushV
	var_449_string = "Strict"; // 0x444 MovS
	func_509(var_57_cvector, var_449_string); // 0x445 NEW_2
	var_450_int = 511983; // 0x447 PushI
	SetMessage(var_450_int); // 0x448 TObjFunc
	ClearReplies(); // 0x44a TObjFunc
	var_451_int = 511984; // 0x44c PushI
	var_452_int = 13200; // 0x44d PushI
	var_453_int = 13199; // 0x44e PushI
	AddReply(var_451_int, var_452_int, var_453_int); // 0x44f TObjFunc
	return 0; // 0x451 Return
	
Label_1106:
	var_454_int = 13200; // 0x452 PushI
	var_455_bool = var_56_bool == var_454_int; // 0x453 Eq
	if(var_455_bool == 0) goto Label_1124; // 0x454 JumpB
	var_456_string = ""; // 0x455 PushV
	var_456_string = "Neutral"; // 0x456 MovS
	func_509(var_57_cvector, var_456_string); // 0x457 NEW_2
	var_457_int = 511985; // 0x459 PushI
	SetMessage(var_457_int); // 0x45a TObjFunc
	ClearReplies(); // 0x45c TObjFunc
	var_458_int = 511986; // 0x45e PushI
	var_459_int = 11735; // 0x45f PushI
	var_460_int = 13201; // 0x460 PushI
	AddReply(var_458_int, var_459_int, var_460_int); // 0x461 TObjFunc
	return 0; // 0x463 Return
	
Label_1124:
	var_461_int = 13832; // 0x464 PushI
	var_462_bool = var_56_bool == var_461_int; // 0x465 Eq
	if(var_462_bool == 0) goto Label_1142; // 0x466 JumpB
	var_463_string = ""; // 0x467 PushV
	var_463_string = "Neutral"; // 0x468 MovS
	func_509(var_57_cvector, var_463_string); // 0x469 NEW_2
	var_464_int = 512652; // 0x46b PushI
	SetMessage(var_464_int); // 0x46c TObjFunc
	ClearReplies(); // 0x46e TObjFunc
	var_465_int = 512653; // 0x470 PushI
	var_466_int = 13834; // 0x471 PushI
	var_467_int = 13833; // 0x472 PushI
	AddReply(var_465_int, var_466_int, var_467_int); // 0x473 TObjFunc
	return 0; // 0x475 Return
	
Label_1142:
	var_468_int = 13834; // 0x476 PushI
	var_469_bool = var_56_bool == var_468_int; // 0x477 Eq
	if(var_469_bool == 0) goto Label_1160; // 0x478 JumpB
	var_470_string = ""; // 0x479 PushV
	var_470_string = "Neutral"; // 0x47a MovS
	func_509(var_57_cvector, var_470_string); // 0x47b NEW_2
	var_471_int = 512654; // 0x47d PushI
	SetMessage(var_471_int); // 0x47e TObjFunc
	ClearReplies(); // 0x480 TObjFunc
	var_472_int = 512655; // 0x482 PushI
	var_473_int = -1; // 0x483 PushI
	var_474_int = 13835; // 0x484 PushI
	AddReply(var_472_int, var_473_int, var_474_int); // 0x485 TObjFunc
	return 0; // 0x487 Return
	
Label_1160:
	var_475_int = 11772; // 0x488 PushI
	var_476_bool = var_56_bool == var_475_int; // 0x489 Eq
	if(var_476_bool == 0) goto Label_1178; // 0x48a JumpB
	var_477_string = ""; // 0x48b PushV
	var_477_string = "Neutral"; // 0x48c MovS
	func_509(var_57_cvector, var_477_string); // 0x48d NEW_2
	var_478_int = 510666; // 0x48f PushI
	SetMessage(var_478_int); // 0x490 TObjFunc
	ClearReplies(); // 0x492 TObjFunc
	var_479_int = 510668; // 0x494 PushI
	var_480_int = 11776; // 0x495 PushI
	var_481_int = 11775; // 0x496 PushI
	AddReply(var_479_int, var_480_int, var_481_int); // 0x497 TObjFunc
	return 0; // 0x499 Return
	
Label_1178:
	var_482_int = 11776; // 0x49a PushI
	var_483_bool = var_56_bool == var_482_int; // 0x49b Eq
	if(var_483_bool == 0) goto Label_1196; // 0x49c JumpB
	var_484_string = ""; // 0x49d PushV
	var_484_string = "Grief"; // 0x49e MovS
	func_509(var_57_cvector, var_484_string); // 0x49f NEW_2
	var_485_int = 510669; // 0x4a1 PushI
	SetMessage(var_485_int); // 0x4a2 TObjFunc
	ClearReplies(); // 0x4a4 TObjFunc
	var_486_int = 510670; // 0x4a6 PushI
	var_487_int = 13839; // 0x4a7 PushI
	var_488_int = 11777; // 0x4a8 PushI
	AddReply(var_486_int, var_487_int, var_488_int); // 0x4a9 TObjFunc
	return 0; // 0x4ab Return
	
Label_1196:
	var_489_int = 13839; // 0x4ac PushI
	var_490_bool = var_56_bool == var_489_int; // 0x4ad Eq
	if(var_490_bool == 0) goto Label_1214; // 0x4ae JumpB
	var_491_string = ""; // 0x4af PushV
	var_491_string = "Grief"; // 0x4b0 MovS
	func_509(var_57_cvector, var_491_string); // 0x4b1 NEW_2
	var_492_int = 512659; // 0x4b3 PushI
	SetMessage(var_492_int); // 0x4b4 TObjFunc
	ClearReplies(); // 0x4b6 TObjFunc
	var_493_int = 512648; // 0x4b8 PushI
	var_494_int = 13831; // 0x4b9 PushI
	var_495_int = 13828; // 0x4ba PushI
	AddReply(var_493_int, var_494_int, var_495_int); // 0x4bb TObjFunc
	return 0; // 0x4bd Return
	
Label_1214:
	var_496_int = 13831; // 0x4be PushI
	var_497_bool = var_56_bool == var_496_int; // 0x4bf Eq
	if(var_497_bool == 0) goto Label_1242; // 0x4c0 JumpB
	var_498_string = ""; // 0x4c1 PushV
	var_498_string = "Neutral"; // 0x4c2 MovS
	func_509(var_57_cvector, var_498_string); // 0x4c3 NEW_2
	var_499_int = 512651; // 0x4c5 PushI
	SetMessage(var_499_int); // 0x4c6 TObjFunc
	ClearReplies(); // 0x4c8 TObjFunc
	var_500_int = 512656; // 0x4ca PushI
	var_501_int = 13837; // 0x4cb PushI
	var_502_int = 13836; // 0x4cc PushI
	AddReply(var_500_int, var_501_int, var_502_int); // 0x4cd TObjFunc
	var_503_int = 512695; // 0x4cf PushI
	var_504_int = 13887; // 0x4d0 PushI
	var_505_int = 13886; // 0x4d1 PushI
	AddReply(var_503_int, var_504_int, var_505_int); // 0x4d2 TObjFunc
	var_506_int = 512701; // 0x4d4 PushI
	var_507_int = 13897; // 0x4d5 PushI
	var_508_int = 13892; // 0x4d6 PushI
	AddReply(var_506_int, var_507_int, var_508_int); // 0x4d7 TObjFunc
	return 0; // 0x4d9 Return
	
Label_1242:
	var_509_int = 13897; // 0x4da PushI
	var_510_bool = var_56_bool == var_509_int; // 0x4db Eq
	if(var_510_bool == 0) goto Label_1260; // 0x4dc JumpB
	var_511_string = ""; // 0x4dd PushV
	var_511_string = "Neutral"; // 0x4de MovS
	func_509(var_57_cvector, var_511_string); // 0x4df NEW_2
	var_512_int = 512706; // 0x4e1 PushI
	SetMessage(var_512_int); // 0x4e2 TObjFunc
	ClearReplies(); // 0x4e4 TObjFunc
	var_513_int = 512707; // 0x4e6 PushI
	var_514_int = 13899; // 0x4e7 PushI
	var_515_int = 13898; // 0x4e8 PushI
	AddReply(var_513_int, var_514_int, var_515_int); // 0x4e9 TObjFunc
	return 0; // 0x4eb Return
	
Label_1260:
	var_516_int = 13899; // 0x4ec PushI
	var_517_bool = var_56_bool == var_516_int; // 0x4ed Eq
	if(var_517_bool == 0) goto Label_1283; // 0x4ee JumpB
	var_518_string = ""; // 0x4ef PushV
	var_518_string = "Neutral"; // 0x4f0 MovS
	func_509(var_57_cvector, var_518_string); // 0x4f1 NEW_2
	var_519_int = 512708; // 0x4f3 PushI
	SetMessage(var_519_int); // 0x4f4 TObjFunc
	ClearReplies(); // 0x4f6 TObjFunc
	var_520_int = 512709; // 0x4f8 PushI
	var_521_int = 13901; // 0x4f9 PushI
	var_522_int = 13900; // 0x4fa PushI
	AddReply(var_520_int, var_521_int, var_522_int); // 0x4fb TObjFunc
	var_523_int = 512715; // 0x4fd PushI
	var_524_int = 13901; // 0x4fe PushI
	var_525_int = 13906; // 0x4ff PushI
	AddReply(var_523_int, var_524_int, var_525_int); // 0x500 TObjFunc
	return 0; // 0x502 Return
	
Label_1283:
	var_526_int = 13901; // 0x503 PushI
	var_527_bool = var_56_bool == var_526_int; // 0x504 Eq
	if(var_527_bool == 0) goto Label_1306; // 0x505 JumpB
	var_528_string = ""; // 0x506 PushV
	var_528_string = "Neutral"; // 0x507 MovS
	func_509(var_57_cvector, var_528_string); // 0x508 NEW_2
	var_529_int = 512710; // 0x50a PushI
	SetMessage(var_529_int); // 0x50b TObjFunc
	ClearReplies(); // 0x50d TObjFunc
	var_530_int = 512711; // 0x50f PushI
	var_531_int = 13903; // 0x510 PushI
	var_532_int = 13902; // 0x511 PushI
	AddReply(var_530_int, var_531_int, var_532_int); // 0x512 TObjFunc
	var_533_int = 512714; // 0x514 PushI
	var_534_int = -1; // 0x515 PushI
	var_535_int = 13905; // 0x516 PushI
	AddReply(var_533_int, var_534_int, var_535_int); // 0x517 TObjFunc
	return 0; // 0x519 Return
	
Label_1306:
	var_536_int = 13903; // 0x51a PushI
	var_537_bool = var_56_bool == var_536_int; // 0x51b Eq
	if(var_537_bool == 0) goto Label_1324; // 0x51c JumpB
	var_538_string = ""; // 0x51d PushV
	var_538_string = "Neutral"; // 0x51e MovS
	func_509(var_57_cvector, var_538_string); // 0x51f NEW_2
	var_539_int = 512712; // 0x521 PushI
	SetMessage(var_539_int); // 0x522 TObjFunc
	ClearReplies(); // 0x524 TObjFunc
	var_540_int = 512713; // 0x526 PushI
	var_541_int = -1; // 0x527 PushI
	var_542_int = 13904; // 0x528 PushI
	AddReply(var_540_int, var_541_int, var_542_int); // 0x529 TObjFunc
	return 0; // 0x52b Return
	
Label_1324:
	var_543_int = 13887; // 0x52c PushI
	var_544_bool = var_56_bool == var_543_int; // 0x52d Eq
	if(var_544_bool == 0) goto Label_1342; // 0x52e JumpB
	var_545_string = ""; // 0x52f PushV
	var_545_string = "Neutral"; // 0x530 MovS
	func_509(var_57_cvector, var_545_string); // 0x531 NEW_2
	var_546_int = 512696; // 0x533 PushI
	SetMessage(var_546_int); // 0x534 TObjFunc
	ClearReplies(); // 0x536 TObjFunc
	var_547_int = 512700; // 0x538 PushI
	var_548_int = -1; // 0x539 PushI
	var_549_int = 13891; // 0x53a PushI
	AddReply(var_547_int, var_548_int, var_549_int); // 0x53b TObjFunc
	return 0; // 0x53d Return
	
Label_1342:
	var_550_int = 13837; // 0x53e PushI
	var_551_bool = var_56_bool == var_550_int; // 0x53f Eq
	if(var_551_bool == 0) goto Label_1365; // 0x540 JumpB
	var_552_string = ""; // 0x541 PushV
	var_552_string = "Neutral"; // 0x542 MovS
	func_509(var_57_cvector, var_552_string); // 0x543 NEW_2
	var_553_int = 512657; // 0x545 PushI
	SetMessage(var_553_int); // 0x546 TObjFunc
	ClearReplies(); // 0x548 TObjFunc
	var_554_int = 512661; // 0x54a PushI
	var_555_int = 13843; // 0x54b PushI
	var_556_int = 13842; // 0x54c PushI
	AddReply(var_554_int, var_555_int, var_556_int); // 0x54d TObjFunc
	var_557_int = 512667; // 0x54f PushI
	var_558_int = 13843; // 0x550 PushI
	var_559_int = 13849; // 0x551 PushI
	AddReply(var_557_int, var_558_int, var_559_int); // 0x552 TObjFunc
	return 0; // 0x554 Return
	
Label_1365:
	var_560_int = 13843; // 0x555 PushI
	var_561_bool = var_56_bool == var_560_int; // 0x556 Eq
	if(var_561_bool == 0) goto Label_1383; // 0x557 JumpB
	var_562_string = ""; // 0x558 PushV
	var_562_string = "Strict"; // 0x559 MovS
	func_509(var_57_cvector, var_562_string); // 0x55a NEW_2
	var_563_int = 512662; // 0x55c PushI
	SetMessage(var_563_int); // 0x55d TObjFunc
	ClearReplies(); // 0x55f TObjFunc
	var_564_int = 512663; // 0x561 PushI
	var_565_int = 13845; // 0x562 PushI
	var_566_int = 13844; // 0x563 PushI
	AddReply(var_564_int, var_565_int, var_566_int); // 0x564 TObjFunc
	return 0; // 0x566 Return
	
Label_1383:
	var_567_int = 13845; // 0x567 PushI
	var_568_bool = var_56_bool == var_567_int; // 0x568 Eq
	if(var_568_bool == 0) goto Label_1406; // 0x569 JumpB
	var_569_string = ""; // 0x56a PushV
	var_569_string = "Neutral"; // 0x56b MovS
	func_509(var_57_cvector, var_569_string); // 0x56c NEW_2
	var_570_int = 512664; // 0x56e PushI
	SetMessage(var_570_int); // 0x56f TObjFunc
	ClearReplies(); // 0x571 TObjFunc
	var_571_int = 512665; // 0x573 PushI
	var_572_int = -1; // 0x574 PushI
	var_573_int = 13846; // 0x575 PushI
	AddReply(var_571_int, var_572_int, var_573_int); // 0x576 TObjFunc
	var_574_int = 512668; // 0x578 PushI
	var_575_int = -1; // 0x579 PushI
	var_576_int = 13851; // 0x57a PushI
	AddReply(var_574_int, var_575_int, var_576_int); // 0x57b TObjFunc
	return 0; // 0x57d Return
	
Label_1406:
	var_3_string = 1; // 0x57e TMovB
	var_577_bool = 0; // 0x57f PushV
	func_8086(var_577_bool); // 0x580 NEW_2
	if(var_577_bool == 0) goto Label_1414; // 0x582 JumpB
	lshStopAnimation(); // 0x583 Func
	goto Label_1416; // 0x585 Jump
	
Label_1416:
	return 0; // 0x588 Return
	
Label_1414:
	StopAnimation(); // 0x586 Func
	
Label_1418:
	return 0; // 0x58a Return
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_object, var_53_object, var_54_object, var_55_string, var_56_bool, var_57_cvector)
{
	var_58_int = 1; // 0x6db PushI
	if(var_58_int == 0) goto Label_2692; // 0x6dc JumpB
	func_7845(); // 0x6de NEW_2
	var_60_int = 7775; // 0x6e0 PushI
	var_61_bool = var_57_cvector == var_60_int; // 0x6e1 Eq
	if(var_61_bool == 0) goto Label_1778; // 0x6e2 JumpB
	var_62_object = Obj(); var_63_object = Obj(); // 0x6e3 PushV
	var_62_object = var_1_object; // 0x6e4 MovT
	var_63_object = var_0_object; // 0x6e5 MovT
	func_8155(); // 0x6e6 NEW_2
	var_66_object = Obj(); var_67_object = Obj(); // 0x6e8 PushV
	var_66_object = var_1_object; // 0x6e9 MovT
	var_67_object = var_0_object; // 0x6ea MovT
	func_8200(); // 0x6eb NEW_2
	var_117_object = Obj(); var_118_object = Obj(); // 0x6ed PushV
	var_117_object = var_1_object; // 0x6ee MovT
	var_118_object = var_0_object; // 0x6ef MovT
	func_8278(); // 0x6f0 NEW_2
	
Label_1778:
	var_143_int = 7779; // 0x6f2 PushI
	var_144_bool = var_57_cvector == var_143_int; // 0x6f3 Eq
	if(var_144_bool == 0) goto Label_1796; // 0x6f4 JumpB
	var_145_object = Obj(); var_146_object = Obj(); // 0x6f5 PushV
	var_145_object = var_1_object; // 0x6f6 MovT
	var_146_object = var_0_object; // 0x6f7 MovT
	func_8155(); // 0x6f8 NEW_2
	var_147_object = Obj(); var_148_object = Obj(); // 0x6fa PushV
	var_147_object = var_1_object; // 0x6fb MovT
	var_148_object = var_0_object; // 0x6fc MovT
	func_8200(); // 0x6fd NEW_2
	var_149_object = Obj(); var_150_object = Obj(); // 0x6ff PushV
	var_149_object = var_1_object; // 0x700 MovT
	var_150_object = var_0_object; // 0x701 MovT
	func_8278(); // 0x702 NEW_2
	
Label_1796:
	var_151_int = 7780; // 0x704 PushI
	var_152_bool = var_57_cvector == var_151_int; // 0x705 Eq
	if(var_152_bool == 0) goto Label_1804; // 0x706 JumpB
	var_153_object = Obj(); var_154_object = Obj(); // 0x707 PushV
	var_153_object = var_1_object; // 0x708 MovT
	var_154_object = var_0_object; // 0x709 MovT
	func_8155(); // 0x70a NEW_2
	
Label_1804:
	var_155_int = 7783; // 0x70c PushI
	var_156_bool = var_57_cvector == var_155_int; // 0x70d Eq
	if(var_156_bool == 0) goto Label_1812; // 0x70e JumpB
	var_157_object = Obj(); var_158_object = Obj(); // 0x70f PushV
	var_157_object = var_1_object; // 0x710 MovT
	var_158_object = var_0_object; // 0x711 MovT
	func_8155(); // 0x712 NEW_2
	
Label_1812:
	var_159_int = 7790; // 0x714 PushI
	var_160_bool = var_57_cvector == var_159_int; // 0x715 Eq
	if(var_160_bool == 0) goto Label_1830; // 0x716 JumpB
	var_161_object = Obj(); var_162_object = Obj(); // 0x717 PushV
	var_161_object = var_1_object; // 0x718 MovT
	var_162_object = var_0_object; // 0x719 MovT
	func_8226(); // 0x71a NEW_2
	var_177_object = Obj(); var_178_object = Obj(); // 0x71c PushV
	var_177_object = var_1_object; // 0x71d MovT
	var_178_object = var_0_object; // 0x71e MovT
	func_8110(); // 0x71f NEW_2
	var_181_object = Obj(); var_182_object = Obj(); // 0x721 PushV
	var_181_object = var_1_object; // 0x722 MovT
	var_182_object = var_0_object; // 0x723 MovT
	func_8179(var_182_object); // 0x724 NEW_2
	
Label_1830:
	var_205_int = 7791; // 0x726 PushI
	var_206_bool = var_57_cvector == var_205_int; // 0x727 Eq
	if(var_206_bool == 0) goto Label_1848; // 0x728 JumpB
	var_207_object = Obj(); var_208_object = Obj(); // 0x729 PushV
	var_207_object = var_1_object; // 0x72a MovT
	var_208_object = var_0_object; // 0x72b MovT
	func_8226(); // 0x72c NEW_2
	var_209_object = Obj(); var_210_object = Obj(); // 0x72e PushV
	var_209_object = var_1_object; // 0x72f MovT
	var_210_object = var_0_object; // 0x730 MovT
	func_8110(); // 0x731 NEW_2
	var_211_object = Obj(); var_212_object = Obj(); // 0x733 PushV
	var_211_object = var_1_object; // 0x734 MovT
	var_212_object = var_0_object; // 0x735 MovT
	func_8179(var_212_object); // 0x736 NEW_2
	
Label_1848:
	var_213_int = 7436; // 0x738 PushI
	var_214_bool = var_57_cvector == var_213_int; // 0x739 Eq
	if(var_214_bool == 0) goto Label_1856; // 0x73a JumpB
	var_215_object = Obj(); var_216_object = Obj(); // 0x73b PushV
	var_215_object = var_1_object; // 0x73c MovT
	var_216_object = var_0_object; // 0x73d MovT
	func_8226(); // 0x73e NEW_2
	
Label_1856:
	var_217_int = 7284; // 0x740 PushI
	var_218_bool = var_57_cvector == var_217_int; // 0x741 Eq
	if(var_218_bool == 0) goto Label_1869; // 0x742 JumpB
	var_219_object = Obj(); var_220_object = Obj(); // 0x743 PushV
	var_219_object = var_1_object; // 0x744 MovT
	var_220_object = var_0_object; // 0x745 MovT
	func_8395(); // 0x746 NEW_2
	var_225_object = Obj(); var_226_object = Obj(); // 0x748 PushV
	var_225_object = var_1_object; // 0x749 MovT
	var_226_object = var_0_object; // 0x74a MovT
	func_8167(); // 0x74b NEW_2
	
Label_1869:
	var_229_int = 7795; // 0x74d PushI
	var_230_bool = var_57_cvector == var_229_int; // 0x74e Eq
	if(var_230_bool == 0) goto Label_1882; // 0x74f JumpB
	var_231_object = Obj(); var_232_object = Obj(); // 0x750 PushV
	var_231_object = var_1_object; // 0x751 MovT
	var_232_object = var_0_object; // 0x752 MovT
	func_8236(); // 0x753 NEW_2
	var_256_object = Obj(); var_257_object = Obj(); // 0x755 PushV
	var_256_object = var_1_object; // 0x756 MovT
	var_257_object = var_0_object; // 0x757 MovT
	func_8379(); // 0x758 NEW_2
	
Label_1882:
	var_263_int = 7798; // 0x75a PushI
	var_264_bool = var_57_cvector == var_263_int; // 0x75b Eq
	if(var_264_bool == 0) goto Label_1895; // 0x75c JumpB
	var_265_object = Obj(); var_266_object = Obj(); // 0x75d PushV
	var_265_object = var_1_object; // 0x75e MovT
	var_266_object = var_0_object; // 0x75f MovT
	func_8236(); // 0x760 NEW_2
	var_267_object = Obj(); var_268_object = Obj(); // 0x762 PushV
	var_267_object = var_1_object; // 0x763 MovT
	var_268_object = var_0_object; // 0x764 MovT
	func_8379(); // 0x765 NEW_2
	
Label_1895:
	var_269_int = 7799; // 0x767 PushI
	var_270_bool = var_57_cvector == var_269_int; // 0x768 Eq
	if(var_270_bool == 0) goto Label_1908; // 0x769 JumpB
	var_271_object = Obj(); var_272_object = Obj(); // 0x76a PushV
	var_271_object = var_1_object; // 0x76b MovT
	var_272_object = var_0_object; // 0x76c MovT
	func_8236(); // 0x76d NEW_2
	var_273_object = Obj(); var_274_object = Obj(); // 0x76f PushV
	var_273_object = var_1_object; // 0x770 MovT
	var_274_object = var_0_object; // 0x771 MovT
	func_8379(); // 0x772 NEW_2
	
Label_1908:
	var_275_int = 7794; // 0x774 PushI
	var_276_bool = var_57_cvector == var_275_int; // 0x775 Eq
	if(var_276_bool == 0) goto Label_1916; // 0x776 JumpB
	var_277_object = Obj(); var_278_object = Obj(); // 0x777 PushV
	var_277_object = var_1_object; // 0x778 MovT
	var_278_object = var_0_object; // 0x779 MovT
	func_8167(); // 0x77a NEW_2
	
Label_1916:
	var_279_int = 7801; // 0x77c PushI
	var_280_bool = var_57_cvector == var_279_int; // 0x77d Eq
	if(var_280_bool == 0) goto Label_1929; // 0x77e JumpB
	var_281_object = Obj(); var_282_object = Obj(); // 0x77f PushV
	var_281_object = var_1_object; // 0x780 MovT
	var_282_object = var_0_object; // 0x781 MovT
	func_8200(); // 0x782 NEW_2
	var_283_object = Obj(); var_284_object = Obj(); // 0x784 PushV
	var_283_object = var_1_object; // 0x785 MovT
	var_284_object = var_0_object; // 0x786 MovT
	func_8278(); // 0x787 NEW_2
	
Label_1929:
	var_285_int = 7410; // 0x789 PushI
	var_286_bool = var_57_cvector == var_285_int; // 0x78a Eq
	if(var_286_bool == 0) goto Label_1937; // 0x78b JumpB
	var_287_object = Obj(); var_288_object = Obj(); // 0x78c PushV
	var_287_object = var_1_object; // 0x78d MovT
	var_288_object = var_0_object; // 0x78e MovT
	func_8173(); // 0x78f NEW_2
	
Label_1937:
	var_291_int = 7411; // 0x791 PushI
	var_292_bool = var_57_cvector == var_291_int; // 0x792 Eq
	if(var_292_bool == 0) goto Label_1945; // 0x793 JumpB
	var_293_object = Obj(); var_294_object = Obj(); // 0x794 PushV
	var_293_object = var_1_object; // 0x795 MovT
	var_294_object = var_0_object; // 0x796 MovT
	func_8173(); // 0x797 NEW_2
	
Label_1945:
	var_295_int = 7414; // 0x799 PushI
	var_296_bool = var_57_cvector == var_295_int; // 0x79a Eq
	if(var_296_bool == 0) goto Label_1953; // 0x79b JumpB
	var_297_object = Obj(); var_298_object = Obj(); // 0x79c PushV
	var_297_object = var_1_object; // 0x79d MovT
	var_298_object = var_0_object; // 0x79e MovT
	func_8173(); // 0x79f NEW_2
	
Label_1953:
	var_299_int = 7416; // 0x7a1 PushI
	var_300_bool = var_57_cvector == var_299_int; // 0x7a2 Eq
	if(var_300_bool == 0) goto Label_1961; // 0x7a3 JumpB
	var_301_object = Obj(); var_302_object = Obj(); // 0x7a4 PushV
	var_301_object = var_1_object; // 0x7a5 MovT
	var_302_object = var_0_object; // 0x7a6 MovT
	func_8173(); // 0x7a7 NEW_2
	
Label_1961:
	var_303_int = 7279; // 0x7a9 PushI
	var_304_bool = var_56_bool == var_303_int; // 0x7aa Eq
	if(var_304_bool == 0) goto Label_2158; // 0x7ab JumpB
	var_305_bool = 0; var_306_object = Obj(); // 0x7ac PushV
	var_306_object = var_1_object; // 0x7ad MovT
	func_8792(var_306_object); // 0x7ae NEW_2
	if(var_305_bool == 0) goto Label_1994; // 0x7b0 JumpB
	var_313_object = Obj(); var_314_object = Obj(); // 0x7b1 PushV
	var_313_object = var_1_object; // 0x7b2 MovT
	var_314_object = var_0_object; // 0x7b3 MovT
	func_8719(); // 0x7b4 NEW_2
	var_317_string = ""; // 0x7b6 PushV
	var_317_string = "Neutral"; // 0x7b7 MovS
	func_1732(var_57_cvector, var_317_string); // 0x7b8 NEW_2
	var_334_int = 506610; // 0x7ba PushI
	SetMessage(var_334_int); // 0x7bb TObjFunc
	ClearReplies(); // 0x7bd TObjFunc
	var_335_int = 506611; // 0x7bf PushI
	var_336_int = 7748; // 0x7c0 PushI
	var_337_int = 7280; // 0x7c1 PushI
	AddReply(var_335_int, var_336_int, var_337_int); // 0x7c2 TObjFunc
	var_338_int = 507066; // 0x7c4 PushI
	var_339_int = 7748; // 0x7c5 PushI
	var_340_int = 7784; // 0x7c6 PushI
	AddReply(var_338_int, var_339_int, var_340_int); // 0x7c7 TObjFunc
	return 0; // 0x7c9 Return
	
Label_1994:
	var_341_bool = 0; // 0x7ca PushV
	var_341_bool = 0; // 0x7cb MovB
	var_342_bool = 0; // 0x7cc PushV
	var_342_bool = 0; // 0x7cd MovB
	var_343_bool = 0; var_344_object = Obj(); // 0x7ce PushV
	var_344_object = var_1_object; // 0x7cf MovT
	func_8804(var_344_object); // 0x7d0 NEW_2
	if(var_343_bool == 0) goto Label_2009; // 0x7d2 JumpB
	var_349_bool = 0; var_350_object = Obj(); // 0x7d3 PushV
	var_350_object = var_1_object; // 0x7d4 MovT
	func_8864(var_350_object); // 0x7d5 NEW_2
	if(var_349_bool == 0) goto Label_2009; // 0x7d7 JumpB
	var_342_bool = 1; // 0x7d8 MovB
	
Label_2009:
	if(var_342_bool == 0) goto Label_2016; // 0x7d9 JumpB
	var_351_bool = 0; var_352_object = Obj(); // 0x7da PushV
	var_352_object = var_1_object; // 0x7db MovT
	func_8869(var_352_object); // 0x7dc NEW_2
	if(var_351_bool == 0) goto Label_2016; // 0x7de JumpB
	var_341_bool = 1; // 0x7df MovB
	
Label_2016:
	if(var_341_bool == 0) goto Label_2047; // 0x7e0 JumpB
	var_357_object = Obj(); var_358_object = Obj(); // 0x7e1 PushV
	var_357_object = var_1_object; // 0x7e2 MovT
	var_358_object = var_0_object; // 0x7e3 MovT
	func_8161(); // 0x7e4 NEW_2
	var_361_string = ""; // 0x7e6 PushV
	var_361_string = "Neutral"; // 0x7e7 MovS
	func_1732(var_57_cvector, var_361_string); // 0x7e8 NEW_2
	var_362_int = 506731; // 0x7ea PushI
	SetMessage(var_362_int); // 0x7eb TObjFunc
	ClearReplies(); // 0x7ed TObjFunc
	var_363_int = 506732; // 0x7ef PushI
	var_364_int = 7420; // 0x7f0 PushI
	var_365_int = 7419; // 0x7f1 PushI
	AddReply(var_363_int, var_364_int, var_365_int); // 0x7f2 TObjFunc
	var_366_int = 506742; // 0x7f4 PushI
	var_367_int = 7420; // 0x7f5 PushI
	var_368_int = 7430; // 0x7f6 PushI
	AddReply(var_366_int, var_367_int, var_368_int); // 0x7f7 TObjFunc
	var_369_int = 506743; // 0x7f9 PushI
	var_370_int = 7433; // 0x7fa PushI
	var_371_int = 7432; // 0x7fb PushI
	AddReply(var_369_int, var_370_int, var_371_int); // 0x7fc TObjFunc
	return 0; // 0x7fe Return
	
Label_2047:
	var_372_string = ""; // 0x7ff PushV
	var_372_string = "Neutral"; // 0x800 MovS
	func_1732(var_57_cvector, var_372_string); // 0x801 NEW_2
	var_373_int = 506614; // 0x803 PushI
	SetMessage(var_373_int); // 0x804 TObjFunc
	ClearReplies(); // 0x806 TObjFunc
	var_374_bool = 0; // 0x808 PushV
	var_374_bool = 0; // 0x809 MovB
	var_375_bool = 0; var_376_object = Obj(); // 0x80a PushV
	var_376_object = var_1_object; // 0x80b MovT
	func_8816(var_376_object); // 0x80c NEW_2
	if(var_375_bool == 0) goto Label_2069; // 0x80e JumpB
	var_381_bool = 0; var_382_object = Obj(); // 0x80f PushV
	var_382_object = var_1_object; // 0x810 MovT
	func_8852(var_382_object); // 0x811 NEW_2
	if(var_381_bool == 0) goto Label_2069; // 0x813 JumpB
	var_374_bool = 1; // 0x814 MovB
	
Label_2069:
	if(var_374_bool == 0) goto Label_2075; // 0x815 JumpB
	var_387_int = 506615; // 0x816 PushI
	var_388_int = 7282; // 0x817 PushI
	var_389_int = 7284; // 0x818 PushI
	AddReply(var_387_int, var_388_int, var_389_int); // 0x819 TObjFunc
	
Label_2075:
	var_390_bool = 0; // 0x81b PushV
	var_390_bool = 1; // 0x81c MovB
	var_391_bool = 0; // 0x81d PushV
	var_391_bool = 0; // 0x81e MovB
	var_392_bool = 0; // 0x81f PushV
	var_392_bool = 0; // 0x820 MovB
	var_393_bool = 0; var_394_object = Obj(); // 0x821 PushV
	var_394_object = var_1_object; // 0x822 MovT
	func_8893(var_394_object); // 0x823 NEW_2
	if(var_393_bool == 0) goto Label_2092; // 0x825 JumpB
	var_399_bool = 0; var_400_object = Obj(); // 0x826 PushV
	var_400_object = var_1_object; // 0x827 MovT
	func_8816(var_400_object); // 0x828 NEW_2
	if(var_399_bool == 0) goto Label_2092; // 0x82a JumpB
	var_392_bool = 1; // 0x82b MovB
	
Label_2092:
	if(var_392_bool == 0) goto Label_2100; // 0x82c JumpB
	var_401_bool = 0; var_402_object = Obj(); // 0x82d PushV
	var_402_object = var_1_object; // 0x82e MovT
	func_8852(var_402_object); // 0x82f NEW_2
	var_403_bool = var_401_bool == 0; // 0x831 Not
	if(var_403_bool == 0) goto Label_2100; // 0x832 JumpB
	var_391_bool = 1; // 0x833 MovB
	
Label_2100:
	if(var_391_bool == 0) goto Label_2126; // 0x834 JumpB
	var_404_bool = 0; // 0x835 PushV
	var_404_bool = 0; // 0x836 MovB
	var_405_bool = 0; // 0x837 PushV
	var_405_bool = 0; // 0x838 MovB
	var_406_bool = 0; var_407_object = Obj(); // 0x839 PushV
	var_407_object = var_1_object; // 0x83a MovT
	func_8881(var_407_object); // 0x83b NEW_2
	if(var_406_bool == 0) goto Label_2116; // 0x83d JumpB
	var_412_bool = 0; var_413_object = Obj(); // 0x83e PushV
	var_413_object = var_1_object; // 0x83f MovT
	func_8816(var_413_object); // 0x840 NEW_2
	if(var_412_bool == 0) goto Label_2116; // 0x842 JumpB
	var_405_bool = 1; // 0x843 MovB
	
Label_2116:
	if(var_405_bool == 0) goto Label_2124; // 0x844 JumpB
	var_414_bool = 0; var_415_object = Obj(); // 0x845 PushV
	var_415_object = var_1_object; // 0x846 MovT
	func_8852(var_415_object); // 0x847 NEW_2
	var_416_bool = var_414_bool == 0; // 0x849 Not
	if(var_416_bool == 0) goto Label_2124; // 0x84a JumpB
	var_404_bool = 1; // 0x84b MovB
	
Label_2124:
	if(var_404_bool == 0) goto Label_2126; // 0x84c JumpB
	var_390_bool = 0; // 0x84d MovB
	
Label_2126:
	if(var_390_bool == 0) goto Label_2132; // 0x84e JumpB
	var_417_int = 507071; // 0x84f PushI
	var_418_int = 7282; // 0x850 PushI
	var_419_int = 7794; // 0x851 PushI
	AddReply(var_417_int, var_418_int, var_419_int); // 0x852 TObjFunc
	
Label_2132:
	var_420_bool = 0; var_421_object = Obj(); // 0x854 PushV
	var_421_object = var_1_object; // 0x855 MovT
	func_8840(var_421_object); // 0x856 NEW_2
	if(var_420_bool == 0) goto Label_2142; // 0x858 JumpB
	var_426_int = 506618; // 0x859 PushI
	var_427_int = 7800; // 0x85a PushI
	var_428_int = 7287; // 0x85b PushI
	AddReply(var_426_int, var_427_int, var_428_int); // 0x85c TObjFunc
	
Label_2142:
	var_429_bool = 0; var_430_object = Obj(); // 0x85e PushV
	var_430_object = var_1_object; // 0x85f MovT
	func_8828(var_430_object); // 0x860 NEW_2
	if(var_429_bool == 0) goto Label_2152; // 0x862 JumpB
	var_435_int = 506730; // 0x863 PushI
	var_436_int = 7405; // 0x864 PushI
	var_437_int = 7417; // 0x865 PushI
	AddReply(var_435_int, var_436_int, var_437_int); // 0x866 TObjFunc
	
Label_2152:
	var_438_int = 507532; // 0x868 PushI
	var_439_int = -1; // 0x869 PushI
	var_440_int = 8314; // 0x86a PushI
	AddReply(var_438_int, var_439_int, var_440_int); // 0x86b TObjFunc
	return 0; // 0x86d Return
	
Label_2158:
	var_441_int = 7405; // 0x86e PushI
	var_442_bool = var_56_bool == var_441_int; // 0x86f Eq
	if(var_442_bool == 0) goto Label_2181; // 0x870 JumpB
	var_443_string = ""; // 0x871 PushV
	var_443_string = "Neutral"; // 0x872 MovS
	func_1732(var_57_cvector, var_443_string); // 0x873 NEW_2
	var_444_int = 506718; // 0x875 PushI
	SetMessage(var_444_int); // 0x876 TObjFunc
	ClearReplies(); // 0x878 TObjFunc
	var_445_int = 506719; // 0x87a PushI
	var_446_int = 7407; // 0x87b PushI
	var_447_int = 7406; // 0x87c PushI
	AddReply(var_445_int, var_446_int, var_447_int); // 0x87d TObjFunc
	var_448_int = 506729; // 0x87f PushI
	var_449_int = -1; // 0x880 PushI
	var_450_int = 7416; // 0x881 PushI
	AddReply(var_448_int, var_449_int, var_450_int); // 0x882 TObjFunc
	return 0; // 0x884 Return
	
Label_2181:
	var_451_int = 7407; // 0x885 PushI
	var_452_bool = var_56_bool == var_451_int; // 0x886 Eq
	if(var_452_bool == 0) goto Label_2204; // 0x887 JumpB
	var_453_string = ""; // 0x888 PushV
	var_453_string = "Grief"; // 0x889 MovS
	func_1732(var_57_cvector, var_453_string); // 0x88a NEW_2
	var_454_int = 506720; // 0x88c PushI
	SetMessage(var_454_int); // 0x88d TObjFunc
	ClearReplies(); // 0x88f TObjFunc
	var_455_int = 506721; // 0x891 PushI
	var_456_int = 7409; // 0x892 PushI
	var_457_int = 7408; // 0x893 PushI
	AddReply(var_455_int, var_456_int, var_457_int); // 0x894 TObjFunc
	var_458_int = 506725; // 0x896 PushI
	var_459_int = 7413; // 0x897 PushI
	var_460_int = 7412; // 0x898 PushI
	AddReply(var_458_int, var_459_int, var_460_int); // 0x899 TObjFunc
	return 0; // 0x89b Return
	
Label_2204:
	var_461_int = 7413; // 0x89c PushI
	var_462_bool = var_56_bool == var_461_int; // 0x89d Eq
	if(var_462_bool == 0) goto Label_2222; // 0x89e JumpB
	var_463_string = ""; // 0x89f PushV
	var_463_string = "Neutral"; // 0x8a0 MovS
	func_1732(var_57_cvector, var_463_string); // 0x8a1 NEW_2
	var_464_int = 506726; // 0x8a3 PushI
	SetMessage(var_464_int); // 0x8a4 TObjFunc
	ClearReplies(); // 0x8a6 TObjFunc
	var_465_int = 506727; // 0x8a8 PushI
	var_466_int = -1; // 0x8a9 PushI
	var_467_int = 7414; // 0x8aa PushI
	AddReply(var_465_int, var_466_int, var_467_int); // 0x8ab TObjFunc
	return 0; // 0x8ad Return
	
Label_2222:
	var_468_int = 7409; // 0x8ae PushI
	var_469_bool = var_56_bool == var_468_int; // 0x8af Eq
	if(var_469_bool == 0) goto Label_2245; // 0x8b0 JumpB
	var_470_string = ""; // 0x8b1 PushV
	var_470_string = "Neutral"; // 0x8b2 MovS
	func_1732(var_57_cvector, var_470_string); // 0x8b3 NEW_2
	var_471_int = 506722; // 0x8b5 PushI
	SetMessage(var_471_int); // 0x8b6 TObjFunc
	ClearReplies(); // 0x8b8 TObjFunc
	var_472_int = 506723; // 0x8ba PushI
	var_473_int = -1; // 0x8bb PushI
	var_474_int = 7410; // 0x8bc PushI
	AddReply(var_472_int, var_473_int, var_474_int); // 0x8bd TObjFunc
	var_475_int = 506724; // 0x8bf PushI
	var_476_int = -1; // 0x8c0 PushI
	var_477_int = 7411; // 0x8c1 PushI
	AddReply(var_475_int, var_476_int, var_477_int); // 0x8c2 TObjFunc
	return 0; // 0x8c4 Return
	
Label_2245:
	var_478_int = 7800; // 0x8c5 PushI
	var_479_bool = var_56_bool == var_478_int; // 0x8c6 Eq
	if(var_479_bool == 0) goto Label_2263; // 0x8c7 JumpB
	var_480_string = ""; // 0x8c8 PushV
	var_480_string = "Neutral"; // 0x8c9 MovS
	func_1732(var_57_cvector, var_480_string); // 0x8ca NEW_2
	var_481_int = 507077; // 0x8cc PushI
	SetMessage(var_481_int); // 0x8cd TObjFunc
	ClearReplies(); // 0x8cf TObjFunc
	var_482_int = 507078; // 0x8d1 PushI
	var_483_int = -1; // 0x8d2 PushI
	var_484_int = 7801; // 0x8d3 PushI
	AddReply(var_482_int, var_483_int, var_484_int); // 0x8d4 TObjFunc
	return 0; // 0x8d6 Return
	
Label_2263:
	var_485_int = 7282; // 0x8d7 PushI
	var_486_bool = var_56_bool == var_485_int; // 0x8d8 Eq
	if(var_486_bool == 0) goto Label_2286; // 0x8d9 JumpB
	var_487_string = ""; // 0x8da PushV
	var_487_string = "Neutral"; // 0x8db MovS
	func_1732(var_57_cvector, var_487_string); // 0x8dc NEW_2
	var_488_int = 506613; // 0x8de PushI
	SetMessage(var_488_int); // 0x8df TObjFunc
	ClearReplies(); // 0x8e1 TObjFunc
	var_489_int = 507072; // 0x8e3 PushI
	var_490_int = -1; // 0x8e4 PushI
	var_491_int = 7795; // 0x8e5 PushI
	AddReply(var_489_int, var_490_int, var_491_int); // 0x8e6 TObjFunc
	var_492_int = 507073; // 0x8e8 PushI
	var_493_int = 7797; // 0x8e9 PushI
	var_494_int = 7796; // 0x8ea PushI
	AddReply(var_492_int, var_493_int, var_494_int); // 0x8eb TObjFunc
	return 0; // 0x8ed Return
	
Label_2286:
	var_495_int = 7797; // 0x8ee PushI
	var_496_bool = var_56_bool == var_495_int; // 0x8ef Eq
	if(var_496_bool == 0) goto Label_2309; // 0x8f0 JumpB
	var_497_string = ""; // 0x8f1 PushV
	var_497_string = "Neutral"; // 0x8f2 MovS
	func_1732(var_57_cvector, var_497_string); // 0x8f3 NEW_2
	var_498_int = 507074; // 0x8f5 PushI
	SetMessage(var_498_int); // 0x8f6 TObjFunc
	ClearReplies(); // 0x8f8 TObjFunc
	var_499_int = 507075; // 0x8fa PushI
	var_500_int = -1; // 0x8fb PushI
	var_501_int = 7798; // 0x8fc PushI
	AddReply(var_499_int, var_500_int, var_501_int); // 0x8fd TObjFunc
	var_502_int = 507076; // 0x8ff PushI
	var_503_int = -1; // 0x900 PushI
	var_504_int = 7799; // 0x901 PushI
	AddReply(var_502_int, var_503_int, var_504_int); // 0x902 TObjFunc
	return 0; // 0x904 Return
	
Label_2309:
	var_505_int = 7433; // 0x905 PushI
	var_506_bool = var_56_bool == var_505_int; // 0x906 Eq
	if(var_506_bool == 0) goto Label_2332; // 0x907 JumpB
	var_507_string = ""; // 0x908 PushV
	var_507_string = "Grief"; // 0x909 MovS
	func_1732(var_57_cvector, var_507_string); // 0x90a NEW_2
	var_508_int = 506744; // 0x90c PushI
	SetMessage(var_508_int); // 0x90d TObjFunc
	ClearReplies(); // 0x90f TObjFunc
	var_509_int = 506745; // 0x911 PushI
	var_510_int = 7420; // 0x912 PushI
	var_511_int = 7434; // 0x913 PushI
	AddReply(var_509_int, var_510_int, var_511_int); // 0x914 TObjFunc
	var_512_int = 506746; // 0x916 PushI
	var_513_int = -1; // 0x917 PushI
	var_514_int = 7436; // 0x918 PushI
	AddReply(var_512_int, var_513_int, var_514_int); // 0x919 TObjFunc
	return 0; // 0x91b Return
	
Label_2332:
	var_515_int = 7420; // 0x91c PushI
	var_516_bool = var_56_bool == var_515_int; // 0x91d Eq
	if(var_516_bool == 0) goto Label_2355; // 0x91e JumpB
	var_517_string = ""; // 0x91f PushV
	var_517_string = "Neutral"; // 0x920 MovS
	func_1732(var_57_cvector, var_517_string); // 0x921 NEW_2
	var_518_int = 506733; // 0x923 PushI
	SetMessage(var_518_int); // 0x924 TObjFunc
	ClearReplies(); // 0x926 TObjFunc
	var_519_int = 506734; // 0x928 PushI
	var_520_int = 7422; // 0x929 PushI
	var_521_int = 7421; // 0x92a PushI
	AddReply(var_519_int, var_520_int, var_521_int); // 0x92b TObjFunc
	var_522_int = 506741; // 0x92d PushI
	var_523_int = 7422; // 0x92e PushI
	var_524_int = 7428; // 0x92f PushI
	AddReply(var_522_int, var_523_int, var_524_int); // 0x930 TObjFunc
	return 0; // 0x932 Return
	
Label_2355:
	var_525_int = 7422; // 0x933 PushI
	var_526_bool = var_56_bool == var_525_int; // 0x934 Eq
	if(var_526_bool == 0) goto Label_2378; // 0x935 JumpB
	var_527_string = ""; // 0x936 PushV
	var_527_string = "Strict"; // 0x937 MovS
	func_1732(var_57_cvector, var_527_string); // 0x938 NEW_2
	var_528_int = 506735; // 0x93a PushI
	SetMessage(var_528_int); // 0x93b TObjFunc
	ClearReplies(); // 0x93d TObjFunc
	var_529_int = 506737; // 0x93f PushI
	var_530_int = 7425; // 0x940 PushI
	var_531_int = 7424; // 0x941 PushI
	AddReply(var_529_int, var_530_int, var_531_int); // 0x942 TObjFunc
	var_532_int = 506736; // 0x944 PushI
	var_533_int = 7789; // 0x945 PushI
	var_534_int = 7423; // 0x946 PushI
	AddReply(var_532_int, var_533_int, var_534_int); // 0x947 TObjFunc
	return 0; // 0x949 Return
	
Label_2378:
	var_535_int = 7425; // 0x94a PushI
	var_536_bool = var_56_bool == var_535_int; // 0x94b Eq
	if(var_536_bool == 0) goto Label_2401; // 0x94c JumpB
	var_537_string = ""; // 0x94d PushV
	var_537_string = "Neutral"; // 0x94e MovS
	func_1732(var_57_cvector, var_537_string); // 0x94f NEW_2
	var_538_int = 506738; // 0x951 PushI
	SetMessage(var_538_int); // 0x952 TObjFunc
	ClearReplies(); // 0x954 TObjFunc
	var_539_int = 506739; // 0x956 PushI
	var_540_int = 7789; // 0x957 PushI
	var_541_int = 7426; // 0x958 PushI
	AddReply(var_539_int, var_540_int, var_541_int); // 0x959 TObjFunc
	var_542_int = 506740; // 0x95b PushI
	var_543_int = 7789; // 0x95c PushI
	var_544_int = 7427; // 0x95d PushI
	AddReply(var_542_int, var_543_int, var_544_int); // 0x95e TObjFunc
	return 0; // 0x960 Return
	
Label_2401:
	var_545_int = 7789; // 0x961 PushI
	var_546_bool = var_56_bool == var_545_int; // 0x962 Eq
	if(var_546_bool == 0) goto Label_2424; // 0x963 JumpB
	var_547_string = ""; // 0x964 PushV
	var_547_string = "Neutral"; // 0x965 MovS
	func_1732(var_57_cvector, var_547_string); // 0x966 NEW_2
	var_548_int = 507068; // 0x968 PushI
	SetMessage(var_548_int); // 0x969 TObjFunc
	ClearReplies(); // 0x96b TObjFunc
	var_549_int = 507069; // 0x96d PushI
	var_550_int = -1; // 0x96e PushI
	var_551_int = 7790; // 0x96f PushI
	AddReply(var_549_int, var_550_int, var_551_int); // 0x970 TObjFunc
	var_552_int = 507070; // 0x972 PushI
	var_553_int = -1; // 0x973 PushI
	var_554_int = 7791; // 0x974 PushI
	AddReply(var_552_int, var_553_int, var_554_int); // 0x975 TObjFunc
	return 0; // 0x977 Return
	
Label_2424:
	var_555_int = 7748; // 0x978 PushI
	var_556_bool = var_56_bool == var_555_int; // 0x979 Eq
	if(var_556_bool == 0) goto Label_2447; // 0x97a JumpB
	var_557_string = ""; // 0x97b PushV
	var_557_string = "Grief"; // 0x97c MovS
	func_1732(var_57_cvector, var_557_string); // 0x97d NEW_2
	var_558_int = 507034; // 0x97f PushI
	SetMessage(var_558_int); // 0x980 TObjFunc
	ClearReplies(); // 0x982 TObjFunc
	var_559_int = 507035; // 0x984 PushI
	var_560_int = 7750; // 0x985 PushI
	var_561_int = 7749; // 0x986 PushI
	AddReply(var_559_int, var_560_int, var_561_int); // 0x987 TObjFunc
	var_562_int = 507051; // 0x989 PushI
	var_563_int = 7766; // 0x98a PushI
	var_564_int = 7765; // 0x98b PushI
	AddReply(var_562_int, var_563_int, var_564_int); // 0x98c TObjFunc
	return 0; // 0x98e Return
	
Label_2447:
	var_565_int = 7766; // 0x98f PushI
	var_566_bool = var_56_bool == var_565_int; // 0x990 Eq
	if(var_566_bool == 0) goto Label_2465; // 0x991 JumpB
	var_567_string = ""; // 0x992 PushV
	var_567_string = "Neutral"; // 0x993 MovS
	func_1732(var_57_cvector, var_567_string); // 0x994 NEW_2
	var_568_int = 507052; // 0x996 PushI
	SetMessage(var_568_int); // 0x997 TObjFunc
	ClearReplies(); // 0x999 TObjFunc
	var_569_int = 507053; // 0x99b PushI
	var_570_int = 7750; // 0x99c PushI
	var_571_int = 7767; // 0x99d PushI
	AddReply(var_569_int, var_570_int, var_571_int); // 0x99e TObjFunc
	return 0; // 0x9a0 Return
	
Label_2465:
	var_572_int = 7750; // 0x9a1 PushI
	var_573_bool = var_56_bool == var_572_int; // 0x9a2 Eq
	if(var_573_bool == 0) goto Label_2483; // 0x9a3 JumpB
	var_574_string = ""; // 0x9a4 PushV
	var_574_string = "Neutral"; // 0x9a5 MovS
	func_1732(var_57_cvector, var_574_string); // 0x9a6 NEW_2
	var_575_int = 507036; // 0x9a8 PushI
	SetMessage(var_575_int); // 0x9a9 TObjFunc
	ClearReplies(); // 0x9ab TObjFunc
	var_576_int = 507037; // 0x9ad PushI
	var_577_int = 7752; // 0x9ae PushI
	var_578_int = 7751; // 0x9af PushI
	AddReply(var_576_int, var_577_int, var_578_int); // 0x9b0 TObjFunc
	return 0; // 0x9b2 Return
	
Label_2483:
	var_579_int = 7752; // 0x9b3 PushI
	var_580_bool = var_56_bool == var_579_int; // 0x9b4 Eq
	if(var_580_bool == 0) goto Label_2506; // 0x9b5 JumpB
	var_581_string = ""; // 0x9b6 PushV
	var_581_string = "Neutral"; // 0x9b7 MovS
	func_1732(var_57_cvector, var_581_string); // 0x9b8 NEW_2
	var_582_int = 507038; // 0x9ba PushI
	SetMessage(var_582_int); // 0x9bb TObjFunc
	ClearReplies(); // 0x9bd TObjFunc
	var_583_int = 507039; // 0x9bf PushI
	var_584_int = 7754; // 0x9c0 PushI
	var_585_int = 7753; // 0x9c1 PushI
	AddReply(var_583_int, var_584_int, var_585_int); // 0x9c2 TObjFunc
	var_586_int = 507048; // 0x9c4 PushI
	var_587_int = 7763; // 0x9c5 PushI
	var_588_int = 7762; // 0x9c6 PushI
	AddReply(var_586_int, var_587_int, var_588_int); // 0x9c7 TObjFunc
	return 0; // 0x9c9 Return
	
Label_2506:
	var_589_int = 7763; // 0x9ca PushI
	var_590_bool = var_56_bool == var_589_int; // 0x9cb Eq
	if(var_590_bool == 0) goto Label_2524; // 0x9cc JumpB
	var_591_string = ""; // 0x9cd PushV
	var_591_string = "Neutral"; // 0x9ce MovS
	func_1732(var_57_cvector, var_591_string); // 0x9cf NEW_2
	var_592_int = 507049; // 0x9d1 PushI
	SetMessage(var_592_int); // 0x9d2 TObjFunc
	ClearReplies(); // 0x9d4 TObjFunc
	var_593_int = 507054; // 0x9d6 PushI
	var_594_int = 7759; // 0x9d7 PushI
	var_595_int = 7770; // 0x9d8 PushI
	AddReply(var_593_int, var_594_int, var_595_int); // 0x9d9 TObjFunc
	return 0; // 0x9db Return
	
Label_2524:
	var_596_int = 7754; // 0x9dc PushI
	var_597_bool = var_56_bool == var_596_int; // 0x9dd Eq
	if(var_597_bool == 0) goto Label_2547; // 0x9de JumpB
	var_598_string = ""; // 0x9df PushV
	var_598_string = "Strict"; // 0x9e0 MovS
	func_1732(var_57_cvector, var_598_string); // 0x9e1 NEW_2
	var_599_int = 507040; // 0x9e3 PushI
	SetMessage(var_599_int); // 0x9e4 TObjFunc
	ClearReplies(); // 0x9e6 TObjFunc
	var_600_int = 507043; // 0x9e8 PushI
	var_601_int = 7759; // 0x9e9 PushI
	var_602_int = 7757; // 0x9ea PushI
	AddReply(var_600_int, var_601_int, var_602_int); // 0x9eb TObjFunc
	var_603_int = 507041; // 0x9ed PushI
	var_604_int = 7756; // 0x9ee PushI
	var_605_int = 7755; // 0x9ef PushI
	AddReply(var_603_int, var_604_int, var_605_int); // 0x9f0 TObjFunc
	return 0; // 0x9f2 Return
	
Label_2547:
	var_606_int = 7756; // 0x9f3 PushI
	var_607_bool = var_56_bool == var_606_int; // 0x9f4 Eq
	if(var_607_bool == 0) goto Label_2565; // 0x9f5 JumpB
	var_608_string = ""; // 0x9f6 PushV
	var_608_string = "Neutral"; // 0x9f7 MovS
	func_1732(var_57_cvector, var_608_string); // 0x9f8 NEW_2
	var_609_int = 507042; // 0x9fa PushI
	SetMessage(var_609_int); // 0x9fb TObjFunc
	ClearReplies(); // 0x9fd TObjFunc
	var_610_int = 507044; // 0x9ff PushI
	var_611_int = 7759; // 0xa00 PushI
	var_612_int = 7758; // 0xa01 PushI
	AddReply(var_610_int, var_611_int, var_612_int); // 0xa02 TObjFunc
	return 0; // 0xa04 Return
	
Label_2565:
	var_613_int = 7759; // 0xa05 PushI
	var_614_bool = var_56_bool == var_613_int; // 0xa06 Eq
	if(var_614_bool == 0) goto Label_2593; // 0xa07 JumpB
	var_615_string = ""; // 0xa08 PushV
	var_615_string = "Neutral"; // 0xa09 MovS
	func_1732(var_57_cvector, var_615_string); // 0xa0a NEW_2
	var_616_int = 507045; // 0xa0c PushI
	SetMessage(var_616_int); // 0xa0d TObjFunc
	ClearReplies(); // 0xa0f TObjFunc
	var_617_int = 507046; // 0xa11 PushI
	var_618_int = 7761; // 0xa12 PushI
	var_619_int = 7760; // 0xa13 PushI
	AddReply(var_617_int, var_618_int, var_619_int); // 0xa14 TObjFunc
	var_620_int = 507067; // 0xa16 PushI
	var_621_int = 7761; // 0xa17 PushI
	var_622_int = 7787; // 0xa18 PushI
	AddReply(var_620_int, var_621_int, var_622_int); // 0xa19 TObjFunc
	var_623_int = 507055; // 0xa1b PushI
	var_624_int = 7773; // 0xa1c PushI
	var_625_int = 7772; // 0xa1d PushI
	AddReply(var_623_int, var_624_int, var_625_int); // 0xa1e TObjFunc
	return 0; // 0xa20 Return
	
Label_2593:
	var_626_int = 7773; // 0xa21 PushI
	var_627_bool = var_56_bool == var_626_int; // 0xa22 Eq
	if(var_627_bool == 0) goto Label_2611; // 0xa23 JumpB
	var_628_string = ""; // 0xa24 PushV
	var_628_string = "Grief"; // 0xa25 MovS
	func_1732(var_57_cvector, var_628_string); // 0xa26 NEW_2
	var_629_int = 507056; // 0xa28 PushI
	SetMessage(var_629_int); // 0xa29 TObjFunc
	ClearReplies(); // 0xa2b TObjFunc
	var_630_int = 507057; // 0xa2d PushI
	var_631_int = 7761; // 0xa2e PushI
	var_632_int = 7774; // 0xa2f PushI
	AddReply(var_630_int, var_631_int, var_632_int); // 0xa30 TObjFunc
	return 0; // 0xa32 Return
	
Label_2611:
	var_633_int = 7761; // 0xa33 PushI
	var_634_bool = var_56_bool == var_633_int; // 0xa34 Eq
	if(var_634_bool == 0) goto Label_2634; // 0xa35 JumpB
	var_635_string = ""; // 0xa36 PushV
	var_635_string = "Neutral"; // 0xa37 MovS
	func_1732(var_57_cvector, var_635_string); // 0xa38 NEW_2
	var_636_int = 507047; // 0xa3a PushI
	SetMessage(var_636_int); // 0xa3b TObjFunc
	ClearReplies(); // 0xa3d TObjFunc
	var_637_int = 507058; // 0xa3f PushI
	var_638_int = -1; // 0xa40 PushI
	var_639_int = 7775; // 0xa41 PushI
	AddReply(var_637_int, var_638_int, var_639_int); // 0xa42 TObjFunc
	var_640_int = 507059; // 0xa44 PushI
	var_641_int = 7778; // 0xa45 PushI
	var_642_int = 7777; // 0xa46 PushI
	AddReply(var_640_int, var_641_int, var_642_int); // 0xa47 TObjFunc
	return 0; // 0xa49 Return
	
Label_2634:
	var_643_int = 7778; // 0xa4a PushI
	var_644_bool = var_56_bool == var_643_int; // 0xa4b Eq
	if(var_644_bool == 0) goto Label_2662; // 0xa4c JumpB
	var_645_string = ""; // 0xa4d PushV
	var_645_string = "Neutral"; // 0xa4e MovS
	func_1732(var_57_cvector, var_645_string); // 0xa4f NEW_2
	var_646_int = 507060; // 0xa51 PushI
	SetMessage(var_646_int); // 0xa52 TObjFunc
	ClearReplies(); // 0xa54 TObjFunc
	var_647_int = 507061; // 0xa56 PushI
	var_648_int = -1; // 0xa57 PushI
	var_649_int = 7779; // 0xa58 PushI
	AddReply(var_647_int, var_648_int, var_649_int); // 0xa59 TObjFunc
	var_650_int = 507062; // 0xa5b PushI
	var_651_int = -1; // 0xa5c PushI
	var_652_int = 7780; // 0xa5d PushI
	AddReply(var_650_int, var_651_int, var_652_int); // 0xa5e TObjFunc
	var_653_int = 507063; // 0xa60 PushI
	var_654_int = 7782; // 0xa61 PushI
	var_655_int = 7781; // 0xa62 PushI
	AddReply(var_653_int, var_654_int, var_655_int); // 0xa63 TObjFunc
	return 0; // 0xa65 Return
	
Label_2662:
	var_656_int = 7782; // 0xa66 PushI
	var_657_bool = var_56_bool == var_656_int; // 0xa67 Eq
	if(var_657_bool == 0) goto Label_2680; // 0xa68 JumpB
	var_658_string = ""; // 0xa69 PushV
	var_658_string = "Neutral"; // 0xa6a MovS
	func_1732(var_57_cvector, var_658_string); // 0xa6b NEW_2
	var_659_int = 507064; // 0xa6d PushI
	SetMessage(var_659_int); // 0xa6e TObjFunc
	ClearReplies(); // 0xa70 TObjFunc
	var_660_int = 507065; // 0xa72 PushI
	var_661_int = -1; // 0xa73 PushI
	var_662_int = 7783; // 0xa74 PushI
	AddReply(var_660_int, var_661_int, var_662_int); // 0xa75 TObjFunc
	return 0; // 0xa77 Return
	
Label_2680:
	var_3_string = 1; // 0xa78 TMovB
	var_663_bool = 0; // 0xa79 PushV
	func_8086(var_663_bool); // 0xa7a NEW_2
	if(var_663_bool == 0) goto Label_2688; // 0xa7c JumpB
	lshStopAnimation(); // 0xa7d Func
	goto Label_2690; // 0xa7f Jump
	
Label_2690:
	return 0; // 0xa82 Return
	
Label_2688:
	StopAnimation(); // 0xa80 Func
	
Label_2692:
	return 0; // 0xa84 Return
}


task_7_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_object, var_53_object, var_54_object, var_55_string, var_56_bool, var_57_cvector)
{
	var_58_int = 1; // 0xb7f PushI
	if(var_58_int == 0) goto Label_3618; // 0xb80 JumpB
	func_7845(); // 0xb82 NEW_2
	var_60_int = 9978; // 0xb84 PushI
	var_61_bool = var_57_cvector == var_60_int; // 0xb85 Eq
	if(var_61_bool == 0) goto Label_2956; // 0xb86 JumpB
	var_62_object = Obj(); var_63_object = Obj(); // 0xb87 PushV
	var_62_object = var_1_object; // 0xb88 MovT
	var_63_object = var_0_object; // 0xb89 MovT
	func_8144(); // 0xb8a NEW_2
	
Label_2956:
	var_87_int = 9979; // 0xb8c PushI
	var_88_bool = var_57_cvector == var_87_int; // 0xb8d Eq
	if(var_88_bool == 0) goto Label_2964; // 0xb8e JumpB
	var_89_object = Obj(); var_90_object = Obj(); // 0xb8f PushV
	var_89_object = var_1_object; // 0xb90 MovT
	var_90_object = var_0_object; // 0xb91 MovT
	func_8144(); // 0xb92 NEW_2
	
Label_2964:
	var_91_int = 9975; // 0xb94 PushI
	var_92_bool = var_57_cvector == var_91_int; // 0xb95 Eq
	if(var_92_bool == 0) goto Label_2972; // 0xb96 JumpB
	var_93_object = Obj(); var_94_object = Obj(); // 0xb97 PushV
	var_93_object = var_1_object; // 0xb98 MovT
	var_94_object = var_0_object; // 0xb99 MovT
	func_8144(); // 0xb9a NEW_2
	
Label_2972:
	var_95_int = 9692; // 0xb9c PushI
	var_96_bool = var_57_cvector == var_95_int; // 0xb9d Eq
	if(var_96_bool == 0) goto Label_2980; // 0xb9e JumpB
	var_97_object = Obj(); var_98_object = Obj(); // 0xb9f PushV
	var_97_object = var_1_object; // 0xba0 MovT
	var_98_object = var_0_object; // 0xba1 MovT
	func_8338(); // 0xba2 NEW_2
	
Label_2980:
	var_101_int = 9724; // 0xba4 PushI
	var_102_bool = var_57_cvector == var_101_int; // 0xba5 Eq
	if(var_102_bool == 0) goto Label_3003; // 0xba6 JumpB
	var_103_object = Obj(); var_104_object = Obj(); // 0xba7 PushV
	var_103_object = var_1_object; // 0xba8 MovT
	var_104_object = var_0_object; // 0xba9 MovT
	func_8338(); // 0xbaa NEW_2
	var_105_object = Obj(); var_106_object = Obj(); // 0xbac PushV
	var_105_object = var_1_object; // 0xbad MovT
	var_106_object = var_0_object; // 0xbae MovT
	func_8356(); // 0xbaf NEW_2
	var_133_object = Obj(); var_134_object = Obj(); // 0xbb1 PushV
	var_133_object = var_1_object; // 0xbb2 MovT
	var_134_object = var_0_object; // 0xbb3 MovT
	func_8344(); // 0xbb4 NEW_2
	var_137_object = Obj(); var_138_object = Obj(); // 0xbb6 PushV
	var_137_object = var_1_object; // 0xbb7 MovT
	var_138_object = var_0_object; // 0xbb8 MovT
	func_8316(); // 0xbb9 NEW_2
	
Label_3003:
	var_163_int = 9711; // 0xbbb PushI
	var_164_bool = var_57_cvector == var_163_int; // 0xbbc Eq
	if(var_164_bool == 0) goto Label_3011; // 0xbbd JumpB
	var_165_object = Obj(); var_166_object = Obj(); // 0xbbe PushV
	var_165_object = var_1_object; // 0xbbf MovT
	var_166_object = var_0_object; // 0xbc0 MovT
	func_8332(); // 0xbc1 NEW_2
	
Label_3011:
	var_169_int = 9712; // 0xbc3 PushI
	var_170_bool = var_57_cvector == var_169_int; // 0xbc4 Eq
	if(var_170_bool == 0) goto Label_3019; // 0xbc5 JumpB
	var_171_object = Obj(); var_172_object = Obj(); // 0xbc6 PushV
	var_171_object = var_1_object; // 0xbc7 MovT
	var_172_object = var_0_object; // 0xbc8 MovT
	func_8344(); // 0xbc9 NEW_2
	
Label_3019:
	var_173_int = 13193; // 0xbcb PushI
	var_174_bool = var_57_cvector == var_173_int; // 0xbcc Eq
	if(var_174_bool == 0) goto Label_3027; // 0xbcd JumpB
	var_175_object = Obj(); var_176_object = Obj(); // 0xbce PushV
	var_175_object = var_1_object; // 0xbcf MovT
	var_176_object = var_0_object; // 0xbd0 MovT
	func_8582(); // 0xbd1 NEW_2
	
Label_3027:
	var_179_int = 9964; // 0xbd3 PushI
	var_180_bool = var_56_bool == var_179_int; // 0xbd4 Eq
	if(var_180_bool == 0) goto Label_3138; // 0xbd5 JumpB
	var_181_bool = 0; // 0xbd6 PushV
	var_181_bool = 0; // 0xbd7 MovB
	var_182_bool = 0; var_183_object = Obj(); // 0xbd8 PushV
	var_183_object = var_1_object; // 0xbd9 MovT
	func_8953(var_183_object); // 0xbda NEW_2
	if(var_182_bool == 0) goto Label_3043; // 0xbdc JumpB
	var_190_bool = 0; var_191_object = Obj(); // 0xbdd PushV
	var_191_object = var_1_object; // 0xbde MovT
	func_8941(var_191_object); // 0xbdf NEW_2
	if(var_190_bool == 0) goto Label_3043; // 0xbe1 JumpB
	var_181_bool = 1; // 0xbe2 MovB
	
Label_3043:
	if(var_181_bool == 0) goto Label_3069; // 0xbe3 JumpB
	var_196_object = Obj(); var_197_object = Obj(); // 0xbe4 PushV
	var_196_object = var_1_object; // 0xbe5 MovT
	var_197_object = var_0_object; // 0xbe6 MovT
	func_8350(); // 0xbe7 NEW_2
	var_200_string = ""; // 0xbe9 PushV
	var_200_string = "Neutral"; // 0xbea MovS
	func_2920(var_57_cvector, var_200_string); // 0xbeb NEW_2
	var_217_int = 509086; // 0xbed PushI
	SetMessage(var_217_int); // 0xbee TObjFunc
	ClearReplies(); // 0xbf0 TObjFunc
	var_218_int = 509087; // 0xbf2 PushI
	var_219_int = 9969; // 0xbf3 PushI
	var_220_int = 9965; // 0xbf4 PushI
	AddReply(var_218_int, var_219_int, var_220_int); // 0xbf5 TObjFunc
	var_221_int = 509088; // 0xbf7 PushI
	var_222_int = 9967; // 0xbf8 PushI
	var_223_int = 9966; // 0xbf9 PushI
	AddReply(var_221_int, var_222_int, var_223_int); // 0xbfa TObjFunc
	return 0; // 0xbfc Return
	
Label_3069:
	var_224_string = ""; // 0xbfd PushV
	var_224_string = "Neutral"; // 0xbfe MovS
	func_2920(var_57_cvector, var_224_string); // 0xbff NEW_2
	var_225_int = 508854; // 0xc01 PushI
	SetMessage(var_225_int); // 0xc02 TObjFunc
	ClearReplies(); // 0xc04 TObjFunc
	var_226_bool = 0; // 0xc06 PushV
	var_226_bool = 0; // 0xc07 MovB
	var_227_bool = 0; var_228_object = Obj(); // 0xc08 PushV
	var_228_object = var_1_object; // 0xc09 MovT
	func_8917(var_228_object); // 0xc0a NEW_2
	if(var_227_bool == 0) goto Label_3091; // 0xc0c JumpB
	var_233_bool = 0; var_234_object = Obj(); // 0xc0d PushV
	var_234_object = var_1_object; // 0xc0e MovT
	func_8965(var_234_object); // 0xc0f NEW_2
	if(var_233_bool == 0) goto Label_3091; // 0xc11 JumpB
	var_226_bool = 1; // 0xc12 MovB
	
Label_3091:
	if(var_226_bool == 0) goto Label_3097; // 0xc13 JumpB
	var_239_int = 508840; // 0xc14 PushI
	var_240_int = 9693; // 0xc15 PushI
	var_241_int = 9692; // 0xc16 PushI
	AddReply(var_239_int, var_240_int, var_241_int); // 0xc17 TObjFunc
	
Label_3097:
	var_242_bool = 0; var_243_object = Obj(); // 0xc19 PushV
	var_243_object = var_1_object; // 0xc1a MovT
	func_8905(var_243_object); // 0xc1b NEW_2
	if(var_242_bool == 0) goto Label_3107; // 0xc1d JumpB
	var_248_int = 508855; // 0xc1e PushI
	var_249_int = 9687; // 0xc1f PushI
	var_250_int = 9711; // 0xc20 PushI
	AddReply(var_248_int, var_249_int, var_250_int); // 0xc21 TObjFunc
	
Label_3107:
	var_251_bool = 0; var_252_object = Obj(); // 0xc23 PushV
	var_252_object = var_1_object; // 0xc24 MovT
	func_8929(var_252_object); // 0xc25 NEW_2
	if(var_251_bool == 0) goto Label_3117; // 0xc27 JumpB
	var_257_int = 508856; // 0xc28 PushI
	var_258_int = 9691; // 0xc29 PushI
	var_259_int = 9712; // 0xc2a PushI
	AddReply(var_257_int, var_258_int, var_259_int); // 0xc2b TObjFunc
	
Label_3117:
	var_260_bool = 0; var_261_object = Obj(); // 0xc2d PushV
	var_261_object = var_1_object; // 0xc2e MovT
	func_9061(var_261_object); // 0xc2f NEW_2
	if(var_260_bool == 0) goto Label_3127; // 0xc31 JumpB
	var_266_int = 511978; // 0xc32 PushI
	var_267_int = 13175; // 0xc33 PushI
	var_268_int = 13193; // 0xc34 PushI
	AddReply(var_266_int, var_267_int, var_268_int); // 0xc35 TObjFunc
	
Label_3127:
	var_269_int = 511133; // 0xc37 PushI
	var_270_int = -1; // 0xc38 PushI
	var_271_int = 12322; // 0xc39 PushI
	AddReply(var_269_int, var_270_int, var_271_int); // 0xc3a TObjFunc
	var_272_int = 534068; // 0xc3c PushI
	var_273_int = -1; // 0xc3d PushI
	var_274_int = 35658; // 0xc3e PushI
	AddReply(var_272_int, var_273_int, var_274_int); // 0xc3f TObjFunc
	return 0; // 0xc41 Return
	
Label_3138:
	var_275_int = 13175; // 0xc42 PushI
	var_276_bool = var_56_bool == var_275_int; // 0xc43 Eq
	if(var_276_bool == 0) goto Label_3166; // 0xc44 JumpB
	var_277_string = ""; // 0xc45 PushV
	var_277_string = "Neutral"; // 0xc46 MovS
	func_2920(var_57_cvector, var_277_string); // 0xc47 NEW_2
	var_278_int = 511964; // 0xc49 PushI
	SetMessage(var_278_int); // 0xc4a TObjFunc
	ClearReplies(); // 0xc4c TObjFunc
	var_279_int = 511965; // 0xc4e PushI
	var_280_int = 35751; // 0xc4f PushI
	var_281_int = 13176; // 0xc50 PushI
	AddReply(var_279_int, var_280_int, var_281_int); // 0xc51 TObjFunc
	var_282_int = 511977; // 0xc53 PushI
	var_283_int = 13177; // 0xc54 PushI
	var_284_int = 13191; // 0xc55 PushI
	AddReply(var_282_int, var_283_int, var_284_int); // 0xc56 TObjFunc
	var_285_int = 511976; // 0xc58 PushI
	var_286_int = 13177; // 0xc59 PushI
	var_287_int = 13189; // 0xc5a PushI
	AddReply(var_285_int, var_286_int, var_287_int); // 0xc5b TObjFunc
	return 0; // 0xc5d Return
	
Label_3166:
	var_288_int = 35751; // 0xc5e PushI
	var_289_bool = var_56_bool == var_288_int; // 0xc5f Eq
	if(var_289_bool == 0) goto Label_3189; // 0xc60 JumpB
	var_290_string = ""; // 0xc61 PushV
	var_290_string = "Gratitude"; // 0xc62 MovS
	func_2920(var_57_cvector, var_290_string); // 0xc63 NEW_2
	var_291_int = 534171; // 0xc65 PushI
	SetMessage(var_291_int); // 0xc66 TObjFunc
	ClearReplies(); // 0xc68 TObjFunc
	var_292_int = 534172; // 0xc6a PushI
	var_293_int = 13177; // 0xc6b PushI
	var_294_int = 35752; // 0xc6c PushI
	AddReply(var_292_int, var_293_int, var_294_int); // 0xc6d TObjFunc
	var_295_int = 534173; // 0xc6f PushI
	var_296_int = 13177; // 0xc70 PushI
	var_297_int = 35753; // 0xc71 PushI
	AddReply(var_295_int, var_296_int, var_297_int); // 0xc72 TObjFunc
	return 0; // 0xc74 Return
	
Label_3189:
	var_298_int = 13177; // 0xc75 PushI
	var_299_bool = var_56_bool == var_298_int; // 0xc76 Eq
	if(var_299_bool == 0) goto Label_3212; // 0xc77 JumpB
	var_300_string = ""; // 0xc78 PushV
	var_300_string = "Neutral"; // 0xc79 MovS
	func_2920(var_57_cvector, var_300_string); // 0xc7a NEW_2
	var_301_int = 511966; // 0xc7c PushI
	SetMessage(var_301_int); // 0xc7d TObjFunc
	ClearReplies(); // 0xc7f TObjFunc
	var_302_int = 511967; // 0xc81 PushI
	var_303_int = 13179; // 0xc82 PushI
	var_304_int = 13178; // 0xc83 PushI
	AddReply(var_302_int, var_303_int, var_304_int); // 0xc84 TObjFunc
	var_305_int = 511975; // 0xc86 PushI
	var_306_int = 13179; // 0xc87 PushI
	var_307_int = 13187; // 0xc88 PushI
	AddReply(var_305_int, var_306_int, var_307_int); // 0xc89 TObjFunc
	return 0; // 0xc8b Return
	
Label_3212:
	var_308_int = 13179; // 0xc8c PushI
	var_309_bool = var_56_bool == var_308_int; // 0xc8d Eq
	if(var_309_bool == 0) goto Label_3235; // 0xc8e JumpB
	var_310_string = ""; // 0xc8f PushV
	var_310_string = "Neutral"; // 0xc90 MovS
	func_2920(var_57_cvector, var_310_string); // 0xc91 NEW_2
	var_311_int = 511968; // 0xc93 PushI
	SetMessage(var_311_int); // 0xc94 TObjFunc
	ClearReplies(); // 0xc96 TObjFunc
	var_312_int = 511969; // 0xc98 PushI
	var_313_int = 13181; // 0xc99 PushI
	var_314_int = 13180; // 0xc9a PushI
	AddReply(var_312_int, var_313_int, var_314_int); // 0xc9b TObjFunc
	var_315_int = 511974; // 0xc9d PushI
	var_316_int = 13181; // 0xc9e PushI
	var_317_int = 13185; // 0xc9f PushI
	AddReply(var_315_int, var_316_int, var_317_int); // 0xca0 TObjFunc
	return 0; // 0xca2 Return
	
Label_3235:
	var_318_int = 13181; // 0xca3 PushI
	var_319_bool = var_56_bool == var_318_int; // 0xca4 Eq
	if(var_319_bool == 0) goto Label_3263; // 0xca5 JumpB
	var_320_string = ""; // 0xca6 PushV
	var_320_string = "Neutral"; // 0xca7 MovS
	func_2920(var_57_cvector, var_320_string); // 0xca8 NEW_2
	var_321_int = 511970; // 0xcaa PushI
	SetMessage(var_321_int); // 0xcab TObjFunc
	ClearReplies(); // 0xcad TObjFunc
	var_322_int = 511971; // 0xcaf PushI
	var_323_int = -1; // 0xcb0 PushI
	var_324_int = 13182; // 0xcb1 PushI
	AddReply(var_322_int, var_323_int, var_324_int); // 0xcb2 TObjFunc
	var_325_int = 511972; // 0xcb4 PushI
	var_326_int = -1; // 0xcb5 PushI
	var_327_int = 13183; // 0xcb6 PushI
	AddReply(var_325_int, var_326_int, var_327_int); // 0xcb7 TObjFunc
	var_328_int = 511973; // 0xcb9 PushI
	var_329_int = -1; // 0xcba PushI
	var_330_int = 13184; // 0xcbb PushI
	AddReply(var_328_int, var_329_int, var_330_int); // 0xcbc TObjFunc
	return 0; // 0xcbe Return
	
Label_3263:
	var_331_int = 9691; // 0xcbf PushI
	var_332_bool = var_56_bool == var_331_int; // 0xcc0 Eq
	if(var_332_bool == 0) goto Label_3281; // 0xcc1 JumpB
	var_333_string = ""; // 0xcc2 PushV
	var_333_string = "Neutral"; // 0xcc3 MovS
	func_2920(var_57_cvector, var_333_string); // 0xcc4 NEW_2
	var_334_int = 508839; // 0xcc6 PushI
	SetMessage(var_334_int); // 0xcc7 TObjFunc
	ClearReplies(); // 0xcc9 TObjFunc
	var_335_int = 508857; // 0xccb PushI
	var_336_int = 9714; // 0xccc PushI
	var_337_int = 9713; // 0xccd PushI
	AddReply(var_335_int, var_336_int, var_337_int); // 0xcce TObjFunc
	return 0; // 0xcd0 Return
	
Label_3281:
	var_338_int = 9714; // 0xcd1 PushI
	var_339_bool = var_56_bool == var_338_int; // 0xcd2 Eq
	if(var_339_bool == 0) goto Label_3299; // 0xcd3 JumpB
	var_340_string = ""; // 0xcd4 PushV
	var_340_string = "Neutral"; // 0xcd5 MovS
	func_2920(var_57_cvector, var_340_string); // 0xcd6 NEW_2
	var_341_int = 508858; // 0xcd8 PushI
	SetMessage(var_341_int); // 0xcd9 TObjFunc
	ClearReplies(); // 0xcdb TObjFunc
	var_342_int = 508859; // 0xcdd PushI
	var_343_int = -1; // 0xcde PushI
	var_344_int = 9715; // 0xcdf PushI
	AddReply(var_342_int, var_343_int, var_344_int); // 0xce0 TObjFunc
	return 0; // 0xce2 Return
	
Label_3299:
	var_345_int = 9687; // 0xce3 PushI
	var_346_bool = var_56_bool == var_345_int; // 0xce4 Eq
	if(var_346_bool == 0) goto Label_3327; // 0xce5 JumpB
	var_347_string = ""; // 0xce6 PushV
	var_347_string = "Neutral"; // 0xce7 MovS
	func_2920(var_57_cvector, var_347_string); // 0xce8 NEW_2
	var_348_int = 508835; // 0xcea PushI
	SetMessage(var_348_int); // 0xceb TObjFunc
	ClearReplies(); // 0xced TObjFunc
	var_349_int = 508836; // 0xcef PushI
	var_350_int = 9689; // 0xcf0 PushI
	var_351_int = 9688; // 0xcf1 PushI
	AddReply(var_349_int, var_350_int, var_351_int); // 0xcf2 TObjFunc
	var_352_int = 508852; // 0xcf4 PushI
	var_353_int = 9689; // 0xcf5 PushI
	var_354_int = 9706; // 0xcf6 PushI
	AddReply(var_352_int, var_353_int, var_354_int); // 0xcf7 TObjFunc
	var_355_int = 508853; // 0xcf9 PushI
	var_356_int = 9689; // 0xcfa PushI
	var_357_int = 9708; // 0xcfb PushI
	AddReply(var_355_int, var_356_int, var_357_int); // 0xcfc TObjFunc
	return 0; // 0xcfe Return
	
Label_3327:
	var_358_int = 9689; // 0xcff PushI
	var_359_bool = var_56_bool == var_358_int; // 0xd00 Eq
	if(var_359_bool == 0) goto Label_3345; // 0xd01 JumpB
	var_360_string = ""; // 0xd02 PushV
	var_360_string = "Neutral"; // 0xd03 MovS
	func_2920(var_57_cvector, var_360_string); // 0xd04 NEW_2
	var_361_int = 508837; // 0xd06 PushI
	SetMessage(var_361_int); // 0xd07 TObjFunc
	ClearReplies(); // 0xd09 TObjFunc
	var_362_int = 508849; // 0xd0b PushI
	var_363_int = 9703; // 0xd0c PushI
	var_364_int = 9702; // 0xd0d PushI
	AddReply(var_362_int, var_363_int, var_364_int); // 0xd0e TObjFunc
	return 0; // 0xd10 Return
	
Label_3345:
	var_365_int = 9703; // 0xd11 PushI
	var_366_bool = var_56_bool == var_365_int; // 0xd12 Eq
	if(var_366_bool == 0) goto Label_3363; // 0xd13 JumpB
	var_367_string = ""; // 0xd14 PushV
	var_367_string = "Strict"; // 0xd15 MovS
	func_2920(var_57_cvector, var_367_string); // 0xd16 NEW_2
	var_368_int = 508850; // 0xd18 PushI
	SetMessage(var_368_int); // 0xd19 TObjFunc
	ClearReplies(); // 0xd1b TObjFunc
	var_369_int = 508851; // 0xd1d PushI
	var_370_int = -1; // 0xd1e PushI
	var_371_int = 9704; // 0xd1f PushI
	AddReply(var_369_int, var_370_int, var_371_int); // 0xd20 TObjFunc
	return 0; // 0xd22 Return
	
Label_3363:
	var_372_int = 9693; // 0xd23 PushI
	var_373_bool = var_56_bool == var_372_int; // 0xd24 Eq
	if(var_373_bool == 0) goto Label_3391; // 0xd25 JumpB
	var_374_string = ""; // 0xd26 PushV
	var_374_string = "Neutral"; // 0xd27 MovS
	func_2920(var_57_cvector, var_374_string); // 0xd28 NEW_2
	var_375_int = 508841; // 0xd2a PushI
	SetMessage(var_375_int); // 0xd2b TObjFunc
	ClearReplies(); // 0xd2d TObjFunc
	var_376_int = 508842; // 0xd2f PushI
	var_377_int = 9695; // 0xd30 PushI
	var_378_int = 9694; // 0xd31 PushI
	AddReply(var_376_int, var_377_int, var_378_int); // 0xd32 TObjFunc
	var_379_int = 508846; // 0xd34 PushI
	var_380_int = 9699; // 0xd35 PushI
	var_381_int = 9698; // 0xd36 PushI
	AddReply(var_379_int, var_380_int, var_381_int); // 0xd37 TObjFunc
	var_382_int = 508861; // 0xd39 PushI
	var_383_int = 9719; // 0xd3a PushI
	var_384_int = 9718; // 0xd3b PushI
	AddReply(var_382_int, var_383_int, var_384_int); // 0xd3c TObjFunc
	return 0; // 0xd3e Return
	
Label_3391:
	var_385_int = 9719; // 0xd3f PushI
	var_386_bool = var_56_bool == var_385_int; // 0xd40 Eq
	if(var_386_bool == 0) goto Label_3414; // 0xd41 JumpB
	var_387_string = ""; // 0xd42 PushV
	var_387_string = "Strict"; // 0xd43 MovS
	func_2920(var_57_cvector, var_387_string); // 0xd44 NEW_2
	var_388_int = 508862; // 0xd46 PushI
	SetMessage(var_388_int); // 0xd47 TObjFunc
	ClearReplies(); // 0xd49 TObjFunc
	var_389_int = 508863; // 0xd4b PushI
	var_390_int = 9716; // 0xd4c PushI
	var_391_int = 9720; // 0xd4d PushI
	AddReply(var_389_int, var_390_int, var_391_int); // 0xd4e TObjFunc
	var_392_int = 508867; // 0xd50 PushI
	var_393_int = 9695; // 0xd51 PushI
	var_394_int = 9725; // 0xd52 PushI
	AddReply(var_392_int, var_393_int, var_394_int); // 0xd53 TObjFunc
	return 0; // 0xd55 Return
	
Label_3414:
	var_395_int = 9699; // 0xd56 PushI
	var_396_bool = var_56_bool == var_395_int; // 0xd57 Eq
	if(var_396_bool == 0) goto Label_3432; // 0xd58 JumpB
	var_397_string = ""; // 0xd59 PushV
	var_397_string = "Neutral"; // 0xd5a MovS
	func_2920(var_57_cvector, var_397_string); // 0xd5b NEW_2
	var_398_int = 508847; // 0xd5d PushI
	SetMessage(var_398_int); // 0xd5e TObjFunc
	ClearReplies(); // 0xd60 TObjFunc
	var_399_int = 508848; // 0xd62 PushI
	var_400_int = 9695; // 0xd63 PushI
	var_401_int = 9700; // 0xd64 PushI
	AddReply(var_399_int, var_400_int, var_401_int); // 0xd65 TObjFunc
	return 0; // 0xd67 Return
	
Label_3432:
	var_402_int = 9695; // 0xd68 PushI
	var_403_bool = var_56_bool == var_402_int; // 0xd69 Eq
	if(var_403_bool == 0) goto Label_3455; // 0xd6a JumpB
	var_404_string = ""; // 0xd6b PushV
	var_404_string = "Grief"; // 0xd6c MovS
	func_2920(var_57_cvector, var_404_string); // 0xd6d NEW_2
	var_405_int = 508843; // 0xd6f PushI
	SetMessage(var_405_int); // 0xd70 TObjFunc
	ClearReplies(); // 0xd72 TObjFunc
	var_406_int = 508844; // 0xd74 PushI
	var_407_int = 9716; // 0xd75 PushI
	var_408_int = 9696; // 0xd76 PushI
	AddReply(var_406_int, var_407_int, var_408_int); // 0xd77 TObjFunc
	var_409_int = 508845; // 0xd79 PushI
	var_410_int = 9716; // 0xd7a PushI
	var_411_int = 9697; // 0xd7b PushI
	AddReply(var_409_int, var_410_int, var_411_int); // 0xd7c TObjFunc
	return 0; // 0xd7e Return
	
Label_3455:
	var_412_int = 9716; // 0xd7f PushI
	var_413_bool = var_56_bool == var_412_int; // 0xd80 Eq
	if(var_413_bool == 0) goto Label_3478; // 0xd81 JumpB
	var_414_string = ""; // 0xd82 PushV
	var_414_string = "Neutral"; // 0xd83 MovS
	func_2920(var_57_cvector, var_414_string); // 0xd84 NEW_2
	var_415_int = 508860; // 0xd86 PushI
	SetMessage(var_415_int); // 0xd87 TObjFunc
	ClearReplies(); // 0xd89 TObjFunc
	var_416_int = 508864; // 0xd8b PushI
	var_417_int = 9723; // 0xd8c PushI
	var_418_int = 9722; // 0xd8d PushI
	AddReply(var_416_int, var_417_int, var_418_int); // 0xd8e TObjFunc
	var_419_int = 534069; // 0xd90 PushI
	var_420_int = 9723; // 0xd91 PushI
	var_421_int = 35659; // 0xd92 PushI
	AddReply(var_419_int, var_420_int, var_421_int); // 0xd93 TObjFunc
	return 0; // 0xd95 Return
	
Label_3478:
	var_422_int = 9723; // 0xd96 PushI
	var_423_bool = var_56_bool == var_422_int; // 0xd97 Eq
	if(var_423_bool == 0) goto Label_3496; // 0xd98 JumpB
	var_424_string = ""; // 0xd99 PushV
	var_424_string = "Neutral"; // 0xd9a MovS
	func_2920(var_57_cvector, var_424_string); // 0xd9b NEW_2
	var_425_int = 508865; // 0xd9d PushI
	SetMessage(var_425_int); // 0xd9e TObjFunc
	ClearReplies(); // 0xda0 TObjFunc
	var_426_int = 508866; // 0xda2 PushI
	var_427_int = -1; // 0xda3 PushI
	var_428_int = 9724; // 0xda4 PushI
	AddReply(var_426_int, var_427_int, var_428_int); // 0xda5 TObjFunc
	return 0; // 0xda7 Return
	
Label_3496:
	var_429_int = 9967; // 0xda8 PushI
	var_430_bool = var_56_bool == var_429_int; // 0xda9 Eq
	if(var_430_bool == 0) goto Label_3514; // 0xdaa JumpB
	var_431_string = ""; // 0xdab PushV
	var_431_string = "Neutral"; // 0xdac MovS
	func_2920(var_57_cvector, var_431_string); // 0xdad NEW_2
	var_432_int = 509089; // 0xdaf PushI
	SetMessage(var_432_int); // 0xdb0 TObjFunc
	ClearReplies(); // 0xdb2 TObjFunc
	var_433_int = 509090; // 0xdb4 PushI
	var_434_int = 9969; // 0xdb5 PushI
	var_435_int = 9968; // 0xdb6 PushI
	AddReply(var_433_int, var_434_int, var_435_int); // 0xdb7 TObjFunc
	return 0; // 0xdb9 Return
	
Label_3514:
	var_436_int = 9969; // 0xdba PushI
	var_437_bool = var_56_bool == var_436_int; // 0xdbb Eq
	if(var_437_bool == 0) goto Label_3537; // 0xdbc JumpB
	var_438_string = ""; // 0xdbd PushV
	var_438_string = "Neutral"; // 0xdbe MovS
	func_2920(var_57_cvector, var_438_string); // 0xdbf NEW_2
	var_439_int = 509091; // 0xdc1 PushI
	SetMessage(var_439_int); // 0xdc2 TObjFunc
	ClearReplies(); // 0xdc4 TObjFunc
	var_440_int = 509092; // 0xdc6 PushI
	var_441_int = 9971; // 0xdc7 PushI
	var_442_int = 9970; // 0xdc8 PushI
	AddReply(var_440_int, var_441_int, var_442_int); // 0xdc9 TObjFunc
	var_443_int = 534066; // 0xdcb PushI
	var_444_int = 9974; // 0xdcc PushI
	var_445_int = 35654; // 0xdcd PushI
	AddReply(var_443_int, var_444_int, var_445_int); // 0xdce TObjFunc
	return 0; // 0xdd0 Return
	
Label_3537:
	var_446_int = 9971; // 0xdd1 PushI
	var_447_bool = var_56_bool == var_446_int; // 0xdd2 Eq
	if(var_447_bool == 0) goto Label_3560; // 0xdd3 JumpB
	var_448_string = ""; // 0xdd4 PushV
	var_448_string = "Neutral"; // 0xdd5 MovS
	func_2920(var_57_cvector, var_448_string); // 0xdd6 NEW_2
	var_449_int = 509093; // 0xdd8 PushI
	SetMessage(var_449_int); // 0xdd9 TObjFunc
	ClearReplies(); // 0xddb TObjFunc
	var_450_int = 509094; // 0xddd PushI
	var_451_int = 9974; // 0xdde PushI
	var_452_int = 9973; // 0xddf PushI
	AddReply(var_450_int, var_451_int, var_452_int); // 0xde0 TObjFunc
	var_453_int = 534067; // 0xde2 PushI
	var_454_int = 9977; // 0xde3 PushI
	var_455_int = 35656; // 0xde4 PushI
	AddReply(var_453_int, var_454_int, var_455_int); // 0xde5 TObjFunc
	return 0; // 0xde7 Return
	
Label_3560:
	var_456_int = 9974; // 0xde8 PushI
	var_457_bool = var_56_bool == var_456_int; // 0xde9 Eq
	if(var_457_bool == 0) goto Label_3583; // 0xdea JumpB
	var_458_string = ""; // 0xdeb PushV
	var_458_string = "Neutral"; // 0xdec MovS
	func_2920(var_57_cvector, var_458_string); // 0xded NEW_2
	var_459_int = 509095; // 0xdef PushI
	SetMessage(var_459_int); // 0xdf0 TObjFunc
	ClearReplies(); // 0xdf2 TObjFunc
	var_460_int = 509097; // 0xdf4 PushI
	var_461_int = 9977; // 0xdf5 PushI
	var_462_int = 9976; // 0xdf6 PushI
	AddReply(var_460_int, var_461_int, var_462_int); // 0xdf7 TObjFunc
	var_463_int = 509096; // 0xdf9 PushI
	var_464_int = -1; // 0xdfa PushI
	var_465_int = 9975; // 0xdfb PushI
	AddReply(var_463_int, var_464_int, var_465_int); // 0xdfc TObjFunc
	return 0; // 0xdfe Return
	
Label_3583:
	var_466_int = 9977; // 0xdff PushI
	var_467_bool = var_56_bool == var_466_int; // 0xe00 Eq
	if(var_467_bool == 0) goto Label_3606; // 0xe01 JumpB
	var_468_string = ""; // 0xe02 PushV
	var_468_string = "Neutral"; // 0xe03 MovS
	func_2920(var_57_cvector, var_468_string); // 0xe04 NEW_2
	var_469_int = 509098; // 0xe06 PushI
	SetMessage(var_469_int); // 0xe07 TObjFunc
	ClearReplies(); // 0xe09 TObjFunc
	var_470_int = 509099; // 0xe0b PushI
	var_471_int = -1; // 0xe0c PushI
	var_472_int = 9978; // 0xe0d PushI
	AddReply(var_470_int, var_471_int, var_472_int); // 0xe0e TObjFunc
	var_473_int = 509100; // 0xe10 PushI
	var_474_int = -1; // 0xe11 PushI
	var_475_int = 9979; // 0xe12 PushI
	AddReply(var_473_int, var_474_int, var_475_int); // 0xe13 TObjFunc
	return 0; // 0xe15 Return
	
Label_3606:
	var_3_string = 1; // 0xe16 TMovB
	var_476_bool = 0; // 0xe17 PushV
	func_8086(var_476_bool); // 0xe18 NEW_2
	if(var_476_bool == 0) goto Label_3614; // 0xe1a JumpB
	lshStopAnimation(); // 0xe1b Func
	goto Label_3616; // 0xe1d Jump
	
Label_3616:
	return 0; // 0xe20 Return
	
Label_3614:
	StopAnimation(); // 0xe1e Func
	
Label_3618:
	return 0; // 0xe22 Return
}


task_9_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_int, var_26_int, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_object, var_53_object, var_54_object, var_55_string, var_56_bool, var_57_cvector)
{
	var_58_int = 1; // 0xf0e PushI
	if(var_58_int == 0) goto Label_4383; // 0xf0f JumpB
	func_7845(); // 0xf11 NEW_2
	var_60_int = 12370; // 0xf13 PushI
	var_61_bool = var_57_cvector == var_60_int; // 0xf14 Eq
	if(var_61_bool == 0) goto Label_3882; // 0xf15 JumpB
	var_62_object = Obj(); var_63_object = Obj(); // 0xf16 PushV
	var_62_object = var_1_object; // 0xf17 MovT
	var_63_object = var_0_object; // 0xf18 MovT
	func_8401(); // 0xf19 NEW_2
	var_66_object = Obj(); var_67_object = Obj(); // 0xf1b PushV
	var_66_object = var_1_object; // 0xf1c MovT
	var_67_object = var_0_object; // 0xf1d MovT
	func_8407(); // 0xf1e NEW_2
	var_123_object = Obj(); var_124_object = Obj(); // 0xf20 PushV
	var_123_object = var_1_object; // 0xf21 MovT
	var_124_object = var_0_object; // 0xf22 MovT
	func_8545(var_124_object); // 0xf23 NEW_2
	var_147_object = Obj(); var_148_object = Obj(); // 0xf25 PushV
	var_147_object = var_1_object; // 0xf26 MovT
	var_148_object = var_0_object; // 0xf27 MovT
	func_8433(); // 0xf28 NEW_2
	
Label_3882:
	var_173_int = 12371; // 0xf2a PushI
	var_174_bool = var_57_cvector == var_173_int; // 0xf2b Eq
	if(var_174_bool == 0) goto Label_3890; // 0xf2c JumpB
	var_175_object = Obj(); var_176_object = Obj(); // 0xf2d PushV
	var_175_object = var_1_object; // 0xf2e MovT
	var_176_object = var_0_object; // 0xf2f MovT
	func_8401(); // 0xf30 NEW_2
	
Label_3890:
	var_177_int = 12695; // 0xf32 PushI
	var_178_bool = var_57_cvector == var_177_int; // 0xf33 Eq
	if(var_178_bool == 0) goto Label_3913; // 0xf34 JumpB
	var_179_object = Obj(); var_180_object = Obj(); // 0xf35 PushV
	var_179_object = var_1_object; // 0xf36 MovT
	var_180_object = var_0_object; // 0xf37 MovT
	func_8407(); // 0xf38 NEW_2
	var_181_object = Obj(); var_182_object = Obj(); // 0xf3a PushV
	var_181_object = var_1_object; // 0xf3b MovT
	var_182_object = var_0_object; // 0xf3c MovT
	func_8545(var_182_object); // 0xf3d NEW_2
	var_183_object = Obj(); var_184_object = Obj(); // 0xf3f PushV
	var_183_object = var_1_object; // 0xf40 MovT
	var_184_object = var_0_object; // 0xf41 MovT
	func_8110(); // 0xf42 NEW_2
	var_187_object = Obj(); var_188_object = Obj(); // 0xf44 PushV
	var_187_object = var_1_object; // 0xf45 MovT
	var_188_object = var_0_object; // 0xf46 MovT
	func_8433(); // 0xf47 NEW_2
	
Label_3913:
	var_189_int = 12376; // 0xf49 PushI
	var_190_bool = var_57_cvector == var_189_int; // 0xf4a Eq
	if(var_190_bool == 0) goto Label_3931; // 0xf4b JumpB
	var_191_object = Obj(); var_192_object = Obj(); // 0xf4c PushV
	var_191_object = var_1_object; // 0xf4d MovT
	var_192_object = var_0_object; // 0xf4e MovT
	func_8449(); // 0xf4f NEW_2
	var_195_object = Obj(); var_196_object = Obj(); // 0xf51 PushV
	var_195_object = var_1_object; // 0xf52 MovT
	var_196_object = var_0_object; // 0xf53 MovT
	func_8455(); // 0xf54 NEW_2
	var_215_object = Obj(); var_216_object = Obj(); // 0xf56 PushV
	var_215_object = var_1_object; // 0xf57 MovT
	var_216_object = var_0_object; // 0xf58 MovT
	func_8128(); // 0xf59 NEW_2
	
Label_3931:
	var_222_int = 12377; // 0xf5b PushI
	var_223_bool = var_57_cvector == var_222_int; // 0xf5c Eq
	if(var_223_bool == 0) goto Label_3949; // 0xf5d JumpB
	var_224_object = Obj(); var_225_object = Obj(); // 0xf5e PushV
	var_224_object = var_1_object; // 0xf5f MovT
	var_225_object = var_0_object; // 0xf60 MovT
	func_8449(); // 0xf61 NEW_2
	var_226_object = Obj(); var_227_object = Obj(); // 0xf63 PushV
	var_226_object = var_1_object; // 0xf64 MovT
	var_227_object = var_0_object; // 0xf65 MovT
	func_8455(); // 0xf66 NEW_2
	var_228_object = Obj(); var_229_object = Obj(); // 0xf68 PushV
	var_228_object = var_1_object; // 0xf69 MovT
	var_229_object = var_0_object; // 0xf6a MovT
	func_8529(); // 0xf6b NEW_2
	
Label_3949:
	var_235_int = 12696; // 0xf6d PushI
	var_236_bool = var_57_cvector == var_235_int; // 0xf6e Eq
	if(var_236_bool == 0) goto Label_3957; // 0xf6f JumpB
	var_237_object = Obj(); var_238_object = Obj(); // 0xf70 PushV
	var_237_object = var_1_object; // 0xf71 MovT
	var_238_object = var_0_object; // 0xf72 MovT
	func_8556(); // 0xf73 NEW_2
	
Label_3957:
	var_241_int = 12702; // 0xf75 PushI
	var_242_bool = var_57_cvector == var_241_int; // 0xf76 Eq
	if(var_242_bool == 0) goto Label_3975; // 0xf77 JumpB
	var_243_object = Obj(); var_244_object = Obj(); // 0xf78 PushV
	var_243_object = var_1_object; // 0xf79 MovT
	var_244_object = var_0_object; // 0xf7a MovT
	func_8268(var_244_object); // 0xf7b NEW_2
	var_261_object = Obj(); var_262_object = Obj(); // 0xf7d PushV
	var_261_object = var_1_object; // 0xf7e MovT
	var_262_object = var_0_object; // 0xf7f MovT
	func_8104(); // 0xf80 NEW_2
	var_265_object = Obj(); var_266_object = Obj(); // 0xf82 PushV
	var_265_object = var_1_object; // 0xf83 MovT
	var_266_object = var_0_object; // 0xf84 MovT
	func_8478(); // 0xf85 NEW_2
	
Label_3975:
	var_296_int = 12703; // 0xf87 PushI
	var_297_bool = var_57_cvector == var_296_int; // 0xf88 Eq
	if(var_297_bool == 0) goto Label_3988; // 0xf89 JumpB
	var_298_object = Obj(); var_299_object = Obj(); // 0xf8a PushV
	var_298_object = var_1_object; // 0xf8b MovT
	var_299_object = var_0_object; // 0xf8c MovT
	func_8478(); // 0xf8d NEW_2
	var_300_object = Obj(); var_301_object = Obj(); // 0xf8f PushV
	var_300_object = var_1_object; // 0xf90 MovT
	var_301_object = var_0_object; // 0xf91 MovT
	func_8623(var_301_object); // 0xf92 NEW_2
	
Label_3988:
	var_340_int = 12359; // 0xf94 PushI
	var_341_bool = var_56_bool == var_340_int; // 0xf95 Eq
	if(var_341_bool == 0) goto Label_4084; // 0xf96 JumpB
	var_342_bool = 0; var_343_object = Obj(); // 0xf97 PushV
	var_343_object = var_1_object; // 0xf98 MovT
	func_8977(var_343_object); // 0xf99 NEW_2
	if(var_342_bool == 0) goto Label_4021; // 0xf9b JumpB
	var_350_object = Obj(); var_351_object = Obj(); // 0xf9c PushV
	var_350_object = var_1_object; // 0xf9d MovT
	var_351_object = var_0_object; // 0xf9e MovT
	func_8122(); // 0xf9f NEW_2
	var_354_string = ""; // 0xfa1 PushV
	var_354_string = "Neutral"; // 0xfa2 MovS
	func_3831(var_57_cvector, var_354_string); // 0xfa3 NEW_2
	var_371_int = 511175; // 0xfa5 PushI
	SetMessage(var_371_int); // 0xfa6 TObjFunc
	ClearReplies(); // 0xfa8 TObjFunc
	var_372_int = 511176; // 0xfaa PushI
	var_373_int = 12361; // 0xfab PushI
	var_374_int = 12360; // 0xfac PushI
	AddReply(var_372_int, var_373_int, var_374_int); // 0xfad TObjFunc
	var_375_int = 511178; // 0xfaf PushI
	var_376_int = 12366; // 0xfb0 PushI
	var_377_int = 12362; // 0xfb1 PushI
	AddReply(var_375_int, var_376_int, var_377_int); // 0xfb2 TObjFunc
	return 0; // 0xfb4 Return
	
Label_4021:
	var_378_string = ""; // 0xfb5 PushV
	var_378_string = "Neutral"; // 0xfb6 MovS
	func_3831(var_57_cvector, var_378_string); // 0xfb7 NEW_2
	var_379_int = 511164; // 0xfb9 PushI
	SetMessage(var_379_int); // 0xfba TObjFunc
	ClearReplies(); // 0xfbc TObjFunc
	var_380_bool = 0; var_381_object = Obj(); // 0xfbe PushV
	var_381_object = var_1_object; // 0xfbf MovT
	func_8989(var_381_object); // 0xfc0 NEW_2
	if(var_380_bool == 0) goto Label_4040; // 0xfc2 JumpB
	var_386_int = 511489; // 0xfc3 PushI
	var_387_int = 12692; // 0xfc4 PushI
	var_388_int = 12691; // 0xfc5 PushI
	AddReply(var_386_int, var_387_int, var_388_int); // 0xfc6 TObjFunc
	
Label_4040:
	var_389_bool = 0; // 0xfc8 PushV
	var_389_bool = 0; // 0xfc9 MovB
	var_390_bool = 0; var_391_object = Obj(); // 0xfca PushV
	var_391_object = var_1_object; // 0xfcb MovT
	func_9001(var_391_object); // 0xfcc NEW_2
	if(var_390_bool == 0) goto Label_4053; // 0xfce JumpB
	var_396_bool = 0; var_397_object = Obj(); // 0xfcf PushV
	var_397_object = var_1_object; // 0xfd0 MovT
	func_9013(var_397_object); // 0xfd1 NEW_2
	if(var_396_bool == 0) goto Label_4053; // 0xfd3 JumpB
	var_389_bool = 1; // 0xfd4 MovB
	
Label_4053:
	if(var_389_bool == 0) goto Label_4059; // 0xfd5 JumpB
	var_402_int = 511187; // 0xfd6 PushI
	var_403_int = 12373; // 0xfd7 PushI
	var_404_int = 12372; // 0xfd8 PushI
	AddReply(var_402_int, var_403_int, var_404_int); // 0xfd9 TObjFunc
	
Label_4059:
	var_405_bool = 0; // 0xfdb PushV
	var_405_bool = 0; // 0xfdc MovB
	var_406_bool = 0; var_407_object = Obj(); // 0xfdd PushV
	var_407_object = var_1_object; // 0xfde MovT
	func_9025(var_407_object); // 0xfdf NEW_2
	if(var_406_bool == 0) goto Label_4072; // 0xfe1 JumpB
	var_412_bool = 0; var_413_object = Obj(); // 0xfe2 PushV
	var_413_object = var_1_object; // 0xfe3 MovT
	func_9037(var_413_object); // 0xfe4 NEW_2
	if(var_412_bool == 0) goto Label_4072; // 0xfe6 JumpB
	var_405_bool = 1; // 0xfe7 MovB
	
Label_4072:
	if(var_405_bool == 0) goto Label_4078; // 0xfe8 JumpB
	var_418_int = 511495; // 0xfe9 PushI
	var_419_int = 12697; // 0xfea PushI
	var_420_int = 12696; // 0xfeb PushI
	AddReply(var_418_int, var_419_int, var_420_int); // 0xfec TObjFunc
	
Label_4078:
	var_421_int = 511174; // 0xfee PushI
	var_422_int = -1; // 0xfef PushI
	var_423_int = 12358; // 0xff0 PushI
	AddReply(var_421_int, var_422_int, var_423_int); // 0xff1 TObjFunc
	return 0; // 0xff3 Return
	
Label_4084:
	var_424_int = 12697; // 0xff4 PushI
	var_425_bool = var_56_bool == var_424_int; // 0xff5 Eq
	if(var_425_bool == 0) goto Label_4102; // 0xff6 JumpB
	var_426_string = ""; // 0xff7 PushV
	var_426_string = "Neutral"; // 0xff8 MovS
	func_3831(var_57_cvector, var_426_string); // 0xff9 NEW_2
	var_427_int = 511496; // 0xffb PushI
	SetMessage(var_427_int); // 0xffc TObjFunc
	ClearReplies(); // 0xffe TObjFunc
	var_428_int = 511497; // 0x1000 PushI
	var_429_int = 12699; // 0x1001 PushI
	var_430_int = 12698; // 0x1002 PushI
	AddReply(var_428_int, var_429_int, var_430_int); // 0x1003 TObjFunc
	return 0; // 0x1005 Return
	
Label_4102:
	var_431_int = 12699; // 0x1006 PushI
	var_432_bool = var_56_bool == var_431_int; // 0x1007 Eq
	if(var_432_bool == 0) goto Label_4120; // 0x1008 JumpB
	var_433_string = ""; // 0x1009 PushV
	var_433_string = "Neutral"; // 0x100a MovS
	func_3831(var_57_cvector, var_433_string); // 0x100b NEW_2
	var_434_int = 511498; // 0x100d PushI
	SetMessage(var_434_int); // 0x100e TObjFunc
	ClearReplies(); // 0x1010 TObjFunc
	var_435_int = 511499; // 0x1012 PushI
	var_436_int = 12701; // 0x1013 PushI
	var_437_int = 12700; // 0x1014 PushI
	AddReply(var_435_int, var_436_int, var_437_int); // 0x1015 TObjFunc
	return 0; // 0x1017 Return
	
Label_4120:
	var_438_int = 12701; // 0x1018 PushI
	var_439_bool = var_56_bool == var_438_int; // 0x1019 Eq
	if(var_439_bool == 0) goto Label_4143; // 0x101a JumpB
	var_440_string = ""; // 0x101b PushV
	var_440_string = "Strict"; // 0x101c MovS
	func_3831(var_57_cvector, var_440_string); // 0x101d NEW_2
	var_441_int = 511500; // 0x101f PushI
	SetMessage(var_441_int); // 0x1020 TObjFunc
	ClearReplies(); // 0x1022 TObjFunc
	var_442_int = 511501; // 0x1024 PushI
	var_443_int = -1; // 0x1025 PushI
	var_444_int = 12702; // 0x1026 PushI
	AddReply(var_442_int, var_443_int, var_444_int); // 0x1027 TObjFunc
	var_445_int = 511502; // 0x1029 PushI
	var_446_int = -1; // 0x102a PushI
	var_447_int = 12703; // 0x102b PushI
	AddReply(var_445_int, var_446_int, var_447_int); // 0x102c TObjFunc
	return 0; // 0x102e Return
	
Label_4143:
	var_448_int = 12373; // 0x102f PushI
	var_449_bool = var_56_bool == var_448_int; // 0x1030 Eq
	if(var_449_bool == 0) goto Label_4161; // 0x1031 JumpB
	var_450_string = ""; // 0x1032 PushV
	var_450_string = "Neutral"; // 0x1033 MovS
	func_3831(var_57_cvector, var_450_string); // 0x1034 NEW_2
	var_451_int = 511188; // 0x1036 PushI
	SetMessage(var_451_int); // 0x1037 TObjFunc
	ClearReplies(); // 0x1039 TObjFunc
	var_452_int = 511189; // 0x103b PushI
	var_453_int = 12375; // 0x103c PushI
	var_454_int = 12374; // 0x103d PushI
	AddReply(var_452_int, var_453_int, var_454_int); // 0x103e TObjFunc
	return 0; // 0x1040 Return
	
Label_4161:
	var_455_int = 12375; // 0x1041 PushI
	var_456_bool = var_56_bool == var_455_int; // 0x1042 Eq
	if(var_456_bool == 0) goto Label_4184; // 0x1043 JumpB
	var_457_string = ""; // 0x1044 PushV
	var_457_string = "Neutral"; // 0x1045 MovS
	func_3831(var_57_cvector, var_457_string); // 0x1046 NEW_2
	var_458_int = 511190; // 0x1048 PushI
	SetMessage(var_458_int); // 0x1049 TObjFunc
	ClearReplies(); // 0x104b TObjFunc
	var_459_int = 511191; // 0x104d PushI
	var_460_int = -1; // 0x104e PushI
	var_461_int = 12376; // 0x104f PushI
	AddReply(var_459_int, var_460_int, var_461_int); // 0x1050 TObjFunc
	var_462_int = 511192; // 0x1052 PushI
	var_463_int = -1; // 0x1053 PushI
	var_464_int = 12377; // 0x1054 PushI
	AddReply(var_462_int, var_463_int, var_464_int); // 0x1055 TObjFunc
	return 0; // 0x1057 Return
	
Label_4184:
	var_465_int = 12692; // 0x1058 PushI
	var_466_bool = var_56_bool == var_465_int; // 0x1059 Eq
	if(var_466_bool == 0) goto Label_4202; // 0x105a JumpB
	var_467_string = ""; // 0x105b PushV
	var_467_string = "Neutral"; // 0x105c MovS
	func_3831(var_57_cvector, var_467_string); // 0x105d NEW_2
	var_468_int = 511490; // 0x105f PushI
	SetMessage(var_468_int); // 0x1060 TObjFunc
	ClearReplies(); // 0x1062 TObjFunc
	var_469_int = 511491; // 0x1064 PushI
	var_470_int = 12694; // 0x1065 PushI
	var_471_int = 12693; // 0x1066 PushI
	AddReply(var_469_int, var_470_int, var_471_int); // 0x1067 TObjFunc
	return 0; // 0x1069 Return
	
Label_4202:
	var_472_int = 12694; // 0x106a PushI
	var_473_bool = var_56_bool == var_472_int; // 0x106b Eq
	if(var_473_bool == 0) goto Label_4220; // 0x106c JumpB
	var_474_string = ""; // 0x106d PushV
	var_474_string = "Neutral"; // 0x106e MovS
	func_3831(var_57_cvector, var_474_string); // 0x106f NEW_2
	var_475_int = 511492; // 0x1071 PushI
	SetMessage(var_475_int); // 0x1072 TObjFunc
	ClearReplies(); // 0x1074 TObjFunc
	var_476_int = 511493; // 0x1076 PushI
	var_477_int = -1; // 0x1077 PushI
	var_478_int = 12695; // 0x1078 PushI
	AddReply(var_476_int, var_477_int, var_478_int); // 0x1079 TObjFunc
	return 0; // 0x107b Return
	
Label_4220:
	var_479_int = 12361; // 0x107c PushI
	var_480_bool = var_56_bool == var_479_int; // 0x107d Eq
	if(var_480_bool == 0) goto Label_4243; // 0x107e JumpB
	var_481_string = ""; // 0x107f PushV
	var_481_string = "Strict"; // 0x1080 MovS
	func_3831(var_57_cvector, var_481_string); // 0x1081 NEW_2
	var_482_int = 511177; // 0x1083 PushI
	SetMessage(var_482_int); // 0x1084 TObjFunc
	ClearReplies(); // 0x1086 TObjFunc
	var_483_int = 511180; // 0x1088 PushI
	var_484_int = 12363; // 0x1089 PushI
	var_485_int = 12364; // 0x108a PushI
	AddReply(var_483_int, var_484_int, var_485_int); // 0x108b TObjFunc
	var_486_int = 511193; // 0x108d PushI
	var_487_int = 12379; // 0x108e PushI
	var_488_int = 12378; // 0x108f PushI
	AddReply(var_486_int, var_487_int, var_488_int); // 0x1090 TObjFunc
	return 0; // 0x1092 Return
	
Label_4243:
	var_489_int = 12379; // 0x1093 PushI
	var_490_bool = var_56_bool == var_489_int; // 0x1094 Eq
	if(var_490_bool == 0) goto Label_4266; // 0x1095 JumpB
	var_491_string = ""; // 0x1096 PushV
	var_491_string = "Neutral"; // 0x1097 MovS
	func_3831(var_57_cvector, var_491_string); // 0x1098 NEW_2
	var_492_int = 511194; // 0x109a PushI
	SetMessage(var_492_int); // 0x109b TObjFunc
	ClearReplies(); // 0x109d TObjFunc
	var_493_int = 511195; // 0x109f PushI
	var_494_int = 12363; // 0x10a0 PushI
	var_495_int = 12380; // 0x10a1 PushI
	AddReply(var_493_int, var_494_int, var_495_int); // 0x10a2 TObjFunc
	var_496_int = 511198; // 0x10a4 PushI
	var_497_int = 12385; // 0x10a5 PushI
	var_498_int = 12384; // 0x10a6 PushI
	AddReply(var_496_int, var_497_int, var_498_int); // 0x10a7 TObjFunc
	return 0; // 0x10a9 Return
	
Label_4266:
	var_499_int = 12385; // 0x10aa PushI
	var_500_bool = var_56_bool == var_499_int; // 0x10ab Eq
	if(var_500_bool == 0) goto Label_4289; // 0x10ac JumpB
	var_501_string = ""; // 0x10ad PushV
	var_501_string = "Neutral"; // 0x10ae MovS
	func_3831(var_57_cvector, var_501_string); // 0x10af NEW_2
	var_502_int = 511199; // 0x10b1 PushI
	SetMessage(var_502_int); // 0x10b2 TObjFunc
	ClearReplies(); // 0x10b4 TObjFunc
	var_503_int = 511200; // 0x10b6 PushI
	var_504_int = 12366; // 0x10b7 PushI
	var_505_int = 12386; // 0x10b8 PushI
	AddReply(var_503_int, var_504_int, var_505_int); // 0x10b9 TObjFunc
	var_506_int = 511201; // 0x10bb PushI
	var_507_int = 12363; // 0x10bc PushI
	var_508_int = 12388; // 0x10bd PushI
	AddReply(var_506_int, var_507_int, var_508_int); // 0x10be TObjFunc
	return 0; // 0x10c0 Return
	
Label_4289:
	var_509_int = 12363; // 0x10c1 PushI
	var_510_bool = var_56_bool == var_509_int; // 0x10c2 Eq
	if(var_510_bool == 0) goto Label_4312; // 0x10c3 JumpB
	var_511_string = ""; // 0x10c4 PushV
	var_511_string = "Neutral"; // 0x10c5 MovS
	func_3831(var_57_cvector, var_511_string); // 0x10c6 NEW_2
	var_512_int = 511179; // 0x10c8 PushI
	SetMessage(var_512_int); // 0x10c9 TObjFunc
	ClearReplies(); // 0x10cb TObjFunc
	var_513_int = 511181; // 0x10cd PushI
	var_514_int = 12366; // 0x10ce PushI
	var_515_int = 12365; // 0x10cf PushI
	AddReply(var_513_int, var_514_int, var_515_int); // 0x10d0 TObjFunc
	var_516_int = 511196; // 0x10d2 PushI
	var_517_int = 12383; // 0x10d3 PushI
	var_518_int = 12382; // 0x10d4 PushI
	AddReply(var_516_int, var_517_int, var_518_int); // 0x10d5 TObjFunc
	return 0; // 0x10d7 Return
	
Label_4312:
	var_519_int = 12383; // 0x10d8 PushI
	var_520_bool = var_56_bool == var_519_int; // 0x10d9 Eq
	if(var_520_bool == 0) goto Label_4330; // 0x10da JumpB
	var_521_string = ""; // 0x10db PushV
	var_521_string = "Neutral"; // 0x10dc MovS
	func_3831(var_57_cvector, var_521_string); // 0x10dd NEW_2
	var_522_int = 511197; // 0x10df PushI
	SetMessage(var_522_int); // 0x10e0 TObjFunc
	ClearReplies(); // 0x10e2 TObjFunc
	var_523_int = 538806; // 0x10e4 PushI
	var_524_int = 40725; // 0x10e5 PushI
	var_525_int = 40724; // 0x10e6 PushI
	AddReply(var_523_int, var_524_int, var_525_int); // 0x10e7 TObjFunc
	return 0; // 0x10e9 Return
	
Label_4330:
	var_526_int = 40725; // 0x10ea PushI
	var_527_bool = var_56_bool == var_526_int; // 0x10eb Eq
	if(var_527_bool == 0) goto Label_4348; // 0x10ec JumpB
	var_528_string = ""; // 0x10ed PushV
	var_528_string = "Neutral"; // 0x10ee MovS
	func_3831(var_57_cvector, var_528_string); // 0x10ef NEW_2
	var_529_int = 538807; // 0x10f1 PushI
	SetMessage(var_529_int); // 0x10f2 TObjFunc
	ClearReplies(); // 0x10f4 TObjFunc
	var_530_int = 511486; // 0x10f6 PushI
	var_531_int = 12366; // 0x10f7 PushI
	var_532_int = 12688; // 0x10f8 PushI
	AddReply(var_530_int, var_531_int, var_532_int); // 0x10f9 TObjFunc
	return 0; // 0x10fb Return
	
Label_4348:
	var_533_int = 12366; // 0x10fc PushI
	var_534_bool = var_56_bool == var_533_int; // 0x10fd Eq
	if(var_534_bool == 0) goto Label_4371; // 0x10fe JumpB
	var_535_string = ""; // 0x10ff PushV
	var_535_string = "Neutral"; // 0x1100 MovS
	func_3831(var_57_cvector, var_535_string); // 0x1101 NEW_2
	var_536_int = 511182; // 0x1103 PushI
	SetMessage(var_536_int); // 0x1104 TObjFunc
	ClearReplies(); // 0x1106 TObjFunc
	var_537_int = 511185; // 0x1108 PushI
	var_538_int = -1; // 0x1109 PushI
	var_539_int = 12370; // 0x110a PushI
	AddReply(var_537_int, var_538_int, var_539_int); // 0x110b TObjFunc
	var_540_int = 511186; // 0x110d PushI
	var_541_int = -1; // 0x110e PushI
	var_542_int = 12371; // 0x110f PushI
	AddReply(var_540_int, var_541_int, var_542_int); // 0x1110 TObjFunc
	return 0; // 0x1112 Return
	
Label_4371:
	var_3_string = 1; // 0x1113 TMovB
	var_543_bool = 0; // 0x1114 PushV
	func_8086(var_543_bool); // 0x1115 NEW_2
	if(var_543_bool == 0) goto Label_4379; // 0x1117 JumpB
	lshStopAnimation(); // 0x1118 Func
	goto Label_4381; // 0x111a Jump
	
Label_4381:
	return 0; // 0x111d Return
	
Label_4379:
	StopAnimation(); // 0x111b Func
	
Label_4383:
	return 0; // 0x111f Return
}


task_11_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_int, var_31_int, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_object, var_53_object, var_54_object, var_55_string, var_56_bool, var_57_cvector)
{
	var_58_int = 1; // 0x11ed PushI
	if(var_58_int == 0) goto Label_5112; // 0x11ee JumpB
	func_7845(); // 0x11f0 NEW_2
	var_60_int = 12808; // 0x11f2 PushI
	var_61_bool = var_57_cvector == var_60_int; // 0x11f3 Eq
	if(var_61_bool == 0) goto Label_4607; // 0x11f4 JumpB
	var_62_object = Obj(); var_63_object = Obj(); // 0x11f5 PushV
	var_62_object = var_1_object; // 0x11f6 MovT
	var_63_object = var_0_object; // 0x11f7 MovT
	func_8562(); // 0x11f8 NEW_2
	var_82_object = Obj(); var_83_object = Obj(); // 0x11fa PushV
	var_82_object = var_1_object; // 0x11fb MovT
	var_83_object = var_0_object; // 0x11fc MovT
	func_8310(); // 0x11fd NEW_2
	
Label_4607:
	var_86_int = 12802; // 0x11ff PushI
	var_87_bool = var_57_cvector == var_86_int; // 0x1200 Eq
	if(var_87_bool == 0) goto Label_4620; // 0x1201 JumpB
	var_88_object = Obj(); var_89_object = Obj(); // 0x1202 PushV
	var_88_object = var_1_object; // 0x1203 MovT
	var_89_object = var_0_object; // 0x1204 MovT
	func_8562(); // 0x1205 NEW_2
	var_90_object = Obj(); var_91_object = Obj(); // 0x1207 PushV
	var_90_object = var_1_object; // 0x1208 MovT
	var_91_object = var_0_object; // 0x1209 MovT
	func_8310(); // 0x120a NEW_2
	
Label_4620:
	var_92_int = 12820; // 0x120c PushI
	var_93_bool = var_57_cvector == var_92_int; // 0x120d Eq
	if(var_93_bool == 0) goto Label_4628; // 0x120e JumpB
	var_94_object = Obj(); var_95_object = Obj(); // 0x120f PushV
	var_94_object = var_1_object; // 0x1210 MovT
	var_95_object = var_0_object; // 0x1211 MovT
	func_8611(); // 0x1212 NEW_2
	
Label_4628:
	var_98_int = 12819; // 0x1214 PushI
	var_99_bool = var_57_cvector == var_98_int; // 0x1215 Eq
	if(var_99_bool == 0) goto Label_4636; // 0x1216 JumpB
	var_100_object = Obj(); var_101_object = Obj(); // 0x1217 PushV
	var_100_object = var_1_object; // 0x1218 MovT
	var_101_object = var_0_object; // 0x1219 MovT
	func_8611(); // 0x121a NEW_2
	
Label_4636:
	var_102_int = 12821; // 0x121c PushI
	var_103_bool = var_57_cvector == var_102_int; // 0x121d Eq
	if(var_103_bool == 0) goto Label_4644; // 0x121e JumpB
	var_104_object = Obj(); var_105_object = Obj(); // 0x121f PushV
	var_104_object = var_1_object; // 0x1220 MovT
	var_105_object = var_0_object; // 0x1221 MovT
	func_8611(); // 0x1222 NEW_2
	
Label_4644:
	var_106_int = 12832; // 0x1224 PushI
	var_107_bool = var_57_cvector == var_106_int; // 0x1225 Eq
	if(var_107_bool == 0) goto Label_4652; // 0x1226 JumpB
	var_108_object = Obj(); var_109_object = Obj(); // 0x1227 PushV
	var_108_object = var_1_object; // 0x1228 MovT
	var_109_object = var_0_object; // 0x1229 MovT
	func_8617(); // 0x122a NEW_2
	
Label_4652:
	var_112_int = 12833; // 0x122c PushI
	var_113_bool = var_57_cvector == var_112_int; // 0x122d Eq
	if(var_113_bool == 0) goto Label_4660; // 0x122e JumpB
	var_114_object = Obj(); var_115_object = Obj(); // 0x122f PushV
	var_114_object = var_1_object; // 0x1230 MovT
	var_115_object = var_0_object; // 0x1231 MovT
	func_8617(); // 0x1232 NEW_2
	
Label_4660:
	var_116_int = 12786; // 0x1234 PushI
	var_117_bool = var_56_bool == var_116_int; // 0x1235 Eq
	if(var_117_bool == 0) goto Label_4726; // 0x1236 JumpB
	var_118_string = ""; // 0x1237 PushV
	var_118_string = "Neutral"; // 0x1238 MovS
	func_4566(var_57_cvector, var_118_string); // 0x1239 NEW_2
	var_135_int = 511591; // 0x123b PushI
	SetMessage(var_135_int); // 0x123c TObjFunc
	ClearReplies(); // 0x123e TObjFunc
	var_136_bool = 0; var_137_object = Obj(); // 0x1240 PushV
	var_137_object = var_1_object; // 0x1241 MovT
	func_9049(var_137_object); // 0x1242 NEW_2
	if(var_136_bool == 0) goto Label_4682; // 0x1244 JumpB
	var_144_int = 511592; // 0x1245 PushI
	var_145_int = 12788; // 0x1246 PushI
	var_146_int = 12787; // 0x1247 PushI
	AddReply(var_144_int, var_145_int, var_146_int); // 0x1248 TObjFunc
	
Label_4682:
	var_147_bool = 0; // 0x124a PushV
	var_147_bool = 0; // 0x124b MovB
	var_148_bool = 0; var_149_object = Obj(); // 0x124c PushV
	var_149_object = var_1_object; // 0x124d MovT
	func_9097(var_149_object); // 0x124e NEW_2
	if(var_148_bool == 0) goto Label_4695; // 0x1250 JumpB
	var_154_bool = 0; var_155_object = Obj(); // 0x1251 PushV
	var_155_object = var_1_object; // 0x1252 MovT
	func_9121(var_155_object); // 0x1253 NEW_2
	if(var_154_bool == 0) goto Label_4695; // 0x1255 JumpB
	var_147_bool = 1; // 0x1256 MovB
	
Label_4695:
	if(var_147_bool == 0) goto Label_4701; // 0x1257 JumpB
	var_160_int = 511611; // 0x1258 PushI
	var_161_int = 12810; // 0x1259 PushI
	var_162_int = 12809; // 0x125a PushI
	AddReply(var_160_int, var_161_int, var_162_int); // 0x125b TObjFunc
	
Label_4701:
	var_163_bool = 0; // 0x125d PushV
	var_163_bool = 0; // 0x125e MovB
	var_164_bool = 0; var_165_object = Obj(); // 0x125f PushV
	var_165_object = var_1_object; // 0x1260 MovT
	func_9109(var_165_object); // 0x1261 NEW_2
	if(var_164_bool == 0) goto Label_4714; // 0x1263 JumpB
	var_170_bool = 0; var_171_object = Obj(); // 0x1264 PushV
	var_171_object = var_1_object; // 0x1265 MovT
	func_9133(var_171_object); // 0x1266 NEW_2
	if(var_170_bool == 0) goto Label_4714; // 0x1268 JumpB
	var_163_bool = 1; // 0x1269 MovB
	
Label_4714:
	if(var_163_bool == 0) goto Label_4720; // 0x126a JumpB
	var_176_int = 511624; // 0x126b PushI
	var_177_int = 12823; // 0x126c PushI
	var_178_int = 12822; // 0x126d PushI
	AddReply(var_176_int, var_177_int, var_178_int); // 0x126e TObjFunc
	
Label_4720:
	var_179_int = 511635; // 0x1270 PushI
	var_180_int = -1; // 0x1271 PushI
	var_181_int = 12834; // 0x1272 PushI
	AddReply(var_179_int, var_180_int, var_181_int); // 0x1273 TObjFunc
	return 0; // 0x1275 Return
	
Label_4726:
	var_182_int = 12823; // 0x1276 PushI
	var_183_bool = var_56_bool == var_182_int; // 0x1277 Eq
	if(var_183_bool == 0) goto Label_4749; // 0x1278 JumpB
	var_184_string = ""; // 0x1279 PushV
	var_184_string = "Grief"; // 0x127a MovS
	func_4566(var_57_cvector, var_184_string); // 0x127b NEW_2
	var_185_int = 511625; // 0x127d PushI
	SetMessage(var_185_int); // 0x127e TObjFunc
	ClearReplies(); // 0x1280 TObjFunc
	var_186_int = 511626; // 0x1282 PushI
	var_187_int = 12825; // 0x1283 PushI
	var_188_int = 12824; // 0x1284 PushI
	AddReply(var_186_int, var_187_int, var_188_int); // 0x1285 TObjFunc
	var_189_int = 511628; // 0x1287 PushI
	var_190_int = 12827; // 0x1288 PushI
	var_191_int = 12826; // 0x1289 PushI
	AddReply(var_189_int, var_190_int, var_191_int); // 0x128a TObjFunc
	return 0; // 0x128c Return
	
Label_4749:
	var_192_int = 12827; // 0x128d PushI
	var_193_bool = var_56_bool == var_192_int; // 0x128e Eq
	if(var_193_bool == 0) goto Label_4767; // 0x128f JumpB
	var_194_string = ""; // 0x1290 PushV
	var_194_string = "Neutral"; // 0x1291 MovS
	func_4566(var_57_cvector, var_194_string); // 0x1292 NEW_2
	var_195_int = 511629; // 0x1294 PushI
	SetMessage(var_195_int); // 0x1295 TObjFunc
	ClearReplies(); // 0x1297 TObjFunc
	var_196_int = 511631; // 0x1299 PushI
	var_197_int = 12830; // 0x129a PushI
	var_198_int = 12829; // 0x129b PushI
	AddReply(var_196_int, var_197_int, var_198_int); // 0x129c TObjFunc
	return 0; // 0x129e Return
	
Label_4767:
	var_199_int = 12825; // 0x129f PushI
	var_200_bool = var_56_bool == var_199_int; // 0x12a0 Eq
	if(var_200_bool == 0) goto Label_4785; // 0x12a1 JumpB
	var_201_string = ""; // 0x12a2 PushV
	var_201_string = "Neutral"; // 0x12a3 MovS
	func_4566(var_57_cvector, var_201_string); // 0x12a4 NEW_2
	var_202_int = 511627; // 0x12a6 PushI
	SetMessage(var_202_int); // 0x12a7 TObjFunc
	ClearReplies(); // 0x12a9 TObjFunc
	var_203_int = 511630; // 0x12ab PushI
	var_204_int = 12830; // 0x12ac PushI
	var_205_int = 12828; // 0x12ad PushI
	AddReply(var_203_int, var_204_int, var_205_int); // 0x12ae TObjFunc
	return 0; // 0x12b0 Return
	
Label_4785:
	var_206_int = 12830; // 0x12b1 PushI
	var_207_bool = var_56_bool == var_206_int; // 0x12b2 Eq
	if(var_207_bool == 0) goto Label_4808; // 0x12b3 JumpB
	var_208_string = ""; // 0x12b4 PushV
	var_208_string = "Neutral"; // 0x12b5 MovS
	func_4566(var_57_cvector, var_208_string); // 0x12b6 NEW_2
	var_209_int = 511632; // 0x12b8 PushI
	SetMessage(var_209_int); // 0x12b9 TObjFunc
	ClearReplies(); // 0x12bb TObjFunc
	var_210_int = 511633; // 0x12bd PushI
	var_211_int = -1; // 0x12be PushI
	var_212_int = 12832; // 0x12bf PushI
	AddReply(var_210_int, var_211_int, var_212_int); // 0x12c0 TObjFunc
	var_213_int = 511634; // 0x12c2 PushI
	var_214_int = -1; // 0x12c3 PushI
	var_215_int = 12833; // 0x12c4 PushI
	AddReply(var_213_int, var_214_int, var_215_int); // 0x12c5 TObjFunc
	return 0; // 0x12c7 Return
	
Label_4808:
	var_216_int = 12810; // 0x12c8 PushI
	var_217_bool = var_56_bool == var_216_int; // 0x12c9 Eq
	if(var_217_bool == 0) goto Label_4831; // 0x12ca JumpB
	var_218_string = ""; // 0x12cb PushV
	var_218_string = "Neutral"; // 0x12cc MovS
	func_4566(var_57_cvector, var_218_string); // 0x12cd NEW_2
	var_219_int = 511612; // 0x12cf PushI
	SetMessage(var_219_int); // 0x12d0 TObjFunc
	ClearReplies(); // 0x12d2 TObjFunc
	var_220_int = 511613; // 0x12d4 PushI
	var_221_int = 12812; // 0x12d5 PushI
	var_222_int = 12811; // 0x12d6 PushI
	AddReply(var_220_int, var_221_int, var_222_int); // 0x12d7 TObjFunc
	var_223_int = 511623; // 0x12d9 PushI
	var_224_int = -1; // 0x12da PushI
	var_225_int = 12821; // 0x12db PushI
	AddReply(var_223_int, var_224_int, var_225_int); // 0x12dc TObjFunc
	return 0; // 0x12de Return
	
Label_4831:
	var_226_int = 12812; // 0x12df PushI
	var_227_bool = var_56_bool == var_226_int; // 0x12e0 Eq
	if(var_227_bool == 0) goto Label_4854; // 0x12e1 JumpB
	var_228_string = ""; // 0x12e2 PushV
	var_228_string = "Neutral"; // 0x12e3 MovS
	func_4566(var_57_cvector, var_228_string); // 0x12e4 NEW_2
	var_229_int = 511614; // 0x12e6 PushI
	SetMessage(var_229_int); // 0x12e7 TObjFunc
	ClearReplies(); // 0x12e9 TObjFunc
	var_230_int = 515657; // 0x12eb PushI
	var_231_int = 16695; // 0x12ec PushI
	var_232_int = 16694; // 0x12ed PushI
	AddReply(var_230_int, var_231_int, var_232_int); // 0x12ee TObjFunc
	var_233_int = 515659; // 0x12f0 PushI
	var_234_int = 16695; // 0x12f1 PushI
	var_235_int = 16696; // 0x12f2 PushI
	AddReply(var_233_int, var_234_int, var_235_int); // 0x12f3 TObjFunc
	return 0; // 0x12f5 Return
	
Label_4854:
	var_236_int = 16695; // 0x12f6 PushI
	var_237_bool = var_56_bool == var_236_int; // 0x12f7 Eq
	if(var_237_bool == 0) goto Label_4877; // 0x12f8 JumpB
	var_238_string = ""; // 0x12f9 PushV
	var_238_string = "Neutral"; // 0x12fa MovS
	func_4566(var_57_cvector, var_238_string); // 0x12fb NEW_2
	var_239_int = 515658; // 0x12fd PushI
	SetMessage(var_239_int); // 0x12fe TObjFunc
	ClearReplies(); // 0x1300 TObjFunc
	var_240_int = 511615; // 0x1302 PushI
	var_241_int = 12814; // 0x1303 PushI
	var_242_int = 12813; // 0x1304 PushI
	AddReply(var_240_int, var_241_int, var_242_int); // 0x1305 TObjFunc
	var_243_int = 515660; // 0x1307 PushI
	var_244_int = 12816; // 0x1308 PushI
	var_245_int = 16698; // 0x1309 PushI
	AddReply(var_243_int, var_244_int, var_245_int); // 0x130a TObjFunc
	return 0; // 0x130c Return
	
Label_4877:
	var_246_int = 12814; // 0x130d PushI
	var_247_bool = var_56_bool == var_246_int; // 0x130e Eq
	if(var_247_bool == 0) goto Label_4900; // 0x130f JumpB
	var_248_string = ""; // 0x1310 PushV
	var_248_string = "Neutral"; // 0x1311 MovS
	func_4566(var_57_cvector, var_248_string); // 0x1312 NEW_2
	var_249_int = 511616; // 0x1314 PushI
	SetMessage(var_249_int); // 0x1315 TObjFunc
	ClearReplies(); // 0x1317 TObjFunc
	var_250_int = 511617; // 0x1319 PushI
	var_251_int = 12816; // 0x131a PushI
	var_252_int = 12815; // 0x131b PushI
	AddReply(var_250_int, var_251_int, var_252_int); // 0x131c TObjFunc
	var_253_int = 515661; // 0x131e PushI
	var_254_int = 16701; // 0x131f PushI
	var_255_int = 16700; // 0x1320 PushI
	AddReply(var_253_int, var_254_int, var_255_int); // 0x1321 TObjFunc
	return 0; // 0x1323 Return
	
Label_4900:
	var_256_int = 16701; // 0x1324 PushI
	var_257_bool = var_56_bool == var_256_int; // 0x1325 Eq
	if(var_257_bool == 0) goto Label_4918; // 0x1326 JumpB
	var_258_string = ""; // 0x1327 PushV
	var_258_string = "Neutral"; // 0x1328 MovS
	func_4566(var_57_cvector, var_258_string); // 0x1329 NEW_2
	var_259_int = 515662; // 0x132b PushI
	SetMessage(var_259_int); // 0x132c TObjFunc
	ClearReplies(); // 0x132e TObjFunc
	var_260_int = 511621; // 0x1330 PushI
	var_261_int = -1; // 0x1331 PushI
	var_262_int = 12819; // 0x1332 PushI
	AddReply(var_260_int, var_261_int, var_262_int); // 0x1333 TObjFunc
	return 0; // 0x1335 Return
	
Label_4918:
	var_263_int = 12816; // 0x1336 PushI
	var_264_bool = var_56_bool == var_263_int; // 0x1337 Eq
	if(var_264_bool == 0) goto Label_4936; // 0x1338 JumpB
	var_265_string = ""; // 0x1339 PushV
	var_265_string = "Neutral"; // 0x133a MovS
	func_4566(var_57_cvector, var_265_string); // 0x133b NEW_2
	var_266_int = 511618; // 0x133d PushI
	SetMessage(var_266_int); // 0x133e TObjFunc
	ClearReplies(); // 0x1340 TObjFunc
	var_267_int = 511619; // 0x1342 PushI
	var_268_int = 12818; // 0x1343 PushI
	var_269_int = 12817; // 0x1344 PushI
	AddReply(var_267_int, var_268_int, var_269_int); // 0x1345 TObjFunc
	return 0; // 0x1347 Return
	
Label_4936:
	var_270_int = 12818; // 0x1348 PushI
	var_271_bool = var_56_bool == var_270_int; // 0x1349 Eq
	if(var_271_bool == 0) goto Label_4954; // 0x134a JumpB
	var_272_string = ""; // 0x134b PushV
	var_272_string = "Neutral"; // 0x134c MovS
	func_4566(var_57_cvector, var_272_string); // 0x134d NEW_2
	var_273_int = 511620; // 0x134f PushI
	SetMessage(var_273_int); // 0x1350 TObjFunc
	ClearReplies(); // 0x1352 TObjFunc
	var_274_int = 511622; // 0x1354 PushI
	var_275_int = -1; // 0x1355 PushI
	var_276_int = 12820; // 0x1356 PushI
	AddReply(var_274_int, var_275_int, var_276_int); // 0x1357 TObjFunc
	return 0; // 0x1359 Return
	
Label_4954:
	var_277_int = 12788; // 0x135a PushI
	var_278_bool = var_56_bool == var_277_int; // 0x135b Eq
	if(var_278_bool == 0) goto Label_4977; // 0x135c JumpB
	var_279_string = ""; // 0x135d PushV
	var_279_string = "Neutral"; // 0x135e MovS
	func_4566(var_57_cvector, var_279_string); // 0x135f NEW_2
	var_280_int = 511593; // 0x1361 PushI
	SetMessage(var_280_int); // 0x1362 TObjFunc
	ClearReplies(); // 0x1364 TObjFunc
	var_281_int = 511594; // 0x1366 PushI
	var_282_int = 12790; // 0x1367 PushI
	var_283_int = 12789; // 0x1368 PushI
	AddReply(var_281_int, var_282_int, var_283_int); // 0x1369 TObjFunc
	var_284_int = 511599; // 0x136b PushI
	var_285_int = 12795; // 0x136c PushI
	var_286_int = 12794; // 0x136d PushI
	AddReply(var_284_int, var_285_int, var_286_int); // 0x136e TObjFunc
	return 0; // 0x1370 Return
	
Label_4977:
	var_287_int = 12795; // 0x1371 PushI
	var_288_bool = var_56_bool == var_287_int; // 0x1372 Eq
	if(var_288_bool == 0) goto Label_4995; // 0x1373 JumpB
	var_289_string = ""; // 0x1374 PushV
	var_289_string = "Neutral"; // 0x1375 MovS
	func_4566(var_57_cvector, var_289_string); // 0x1376 NEW_2
	var_290_int = 511600; // 0x1378 PushI
	SetMessage(var_290_int); // 0x1379 TObjFunc
	ClearReplies(); // 0x137b TObjFunc
	var_291_int = 511601; // 0x137d PushI
	var_292_int = 12790; // 0x137e PushI
	var_293_int = 12796; // 0x137f PushI
	AddReply(var_291_int, var_292_int, var_293_int); // 0x1380 TObjFunc
	return 0; // 0x1382 Return
	
Label_4995:
	var_294_int = 12790; // 0x1383 PushI
	var_295_bool = var_56_bool == var_294_int; // 0x1384 Eq
	if(var_295_bool == 0) goto Label_5018; // 0x1385 JumpB
	var_296_string = ""; // 0x1386 PushV
	var_296_string = "Strict"; // 0x1387 MovS
	func_4566(var_57_cvector, var_296_string); // 0x1388 NEW_2
	var_297_int = 511595; // 0x138a PushI
	SetMessage(var_297_int); // 0x138b TObjFunc
	ClearReplies(); // 0x138d TObjFunc
	var_298_int = 511596; // 0x138f PushI
	var_299_int = 12792; // 0x1390 PushI
	var_300_int = 12791; // 0x1391 PushI
	AddReply(var_298_int, var_299_int, var_300_int); // 0x1392 TObjFunc
	var_301_int = 511602; // 0x1394 PushI
	var_302_int = 12799; // 0x1395 PushI
	var_303_int = 12798; // 0x1396 PushI
	AddReply(var_301_int, var_302_int, var_303_int); // 0x1397 TObjFunc
	return 0; // 0x1399 Return
	
Label_5018:
	var_304_int = 12799; // 0x139a PushI
	var_305_bool = var_56_bool == var_304_int; // 0x139b Eq
	if(var_305_bool == 0) goto Label_5041; // 0x139c JumpB
	var_306_string = ""; // 0x139d PushV
	var_306_string = "Neutral"; // 0x139e MovS
	func_4566(var_57_cvector, var_306_string); // 0x139f NEW_2
	var_307_int = 511603; // 0x13a1 PushI
	SetMessage(var_307_int); // 0x13a2 TObjFunc
	ClearReplies(); // 0x13a4 TObjFunc
	var_308_int = 511604; // 0x13a6 PushI
	var_309_int = 12792; // 0x13a7 PushI
	var_310_int = 12800; // 0x13a8 PushI
	AddReply(var_308_int, var_309_int, var_310_int); // 0x13a9 TObjFunc
	var_311_int = 515656; // 0x13ab PushI
	var_312_int = 12805; // 0x13ac PushI
	var_313_int = 16692; // 0x13ad PushI
	AddReply(var_311_int, var_312_int, var_313_int); // 0x13ae TObjFunc
	return 0; // 0x13b0 Return
	
Label_5041:
	var_314_int = 12792; // 0x13b1 PushI
	var_315_bool = var_56_bool == var_314_int; // 0x13b2 Eq
	if(var_315_bool == 0) goto Label_5064; // 0x13b3 JumpB
	var_316_string = ""; // 0x13b4 PushV
	var_316_string = "Neutral"; // 0x13b5 MovS
	func_4566(var_57_cvector, var_316_string); // 0x13b6 NEW_2
	var_317_int = 511597; // 0x13b8 PushI
	SetMessage(var_317_int); // 0x13b9 TObjFunc
	ClearReplies(); // 0x13bb TObjFunc
	var_318_int = 511598; // 0x13bd PushI
	var_319_int = 12803; // 0x13be PushI
	var_320_int = 12793; // 0x13bf PushI
	AddReply(var_318_int, var_319_int, var_320_int); // 0x13c0 TObjFunc
	var_321_int = 511605; // 0x13c2 PushI
	var_322_int = -1; // 0x13c3 PushI
	var_323_int = 12802; // 0x13c4 PushI
	AddReply(var_321_int, var_322_int, var_323_int); // 0x13c5 TObjFunc
	return 0; // 0x13c7 Return
	
Label_5064:
	var_324_int = 12803; // 0x13c8 PushI
	var_325_bool = var_56_bool == var_324_int; // 0x13c9 Eq
	if(var_325_bool == 0) goto Label_5082; // 0x13ca JumpB
	var_326_string = ""; // 0x13cb PushV
	var_326_string = "Neutral"; // 0x13cc MovS
	func_4566(var_57_cvector, var_326_string); // 0x13cd NEW_2
	var_327_int = 511606; // 0x13cf PushI
	SetMessage(var_327_int); // 0x13d0 TObjFunc
	ClearReplies(); // 0x13d2 TObjFunc
	var_328_int = 511607; // 0x13d4 PushI
	var_329_int = 12805; // 0x13d5 PushI
	var_330_int = 12804; // 0x13d6 PushI
	AddReply(var_328_int, var_329_int, var_330_int); // 0x13d7 TObjFunc
	return 0; // 0x13d9 Return
	
Label_5082:
	var_331_int = 12805; // 0x13da PushI
	var_332_bool = var_56_bool == var_331_int; // 0x13db Eq
	if(var_332_bool == 0) goto Label_5100; // 0x13dc JumpB
	var_333_string = ""; // 0x13dd PushV
	var_333_string = "Neutral"; // 0x13de MovS
	func_4566(var_57_cvector, var_333_string); // 0x13df NEW_2
	var_334_int = 511608; // 0x13e1 PushI
	SetMessage(var_334_int); // 0x13e2 TObjFunc
	ClearReplies(); // 0x13e4 TObjFunc
	var_335_int = 511610; // 0x13e6 PushI
	var_336_int = -1; // 0x13e7 PushI
	var_337_int = 12808; // 0x13e8 PushI
	AddReply(var_335_int, var_336_int, var_337_int); // 0x13e9 TObjFunc
	return 0; // 0x13eb Return
	
Label_5100:
	var_3_string = 1; // 0x13ec TMovB
	var_338_bool = 0; // 0x13ed PushV
	func_8086(var_338_bool); // 0x13ee NEW_2
	if(var_338_bool == 0) goto Label_5108; // 0x13f0 JumpB
	lshStopAnimation(); // 0x13f1 Func
	goto Label_5110; // 0x13f3 Jump
	
Label_5110:
	return 0; // 0x13f6 Return
	
Label_5108:
	StopAnimation(); // 0x13f4 Func
	
Label_5112:
	return 0; // 0x13f8 Return
}


task_13_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_int, var_36_int, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_object, var_53_object, var_54_object, var_55_string, var_56_bool, var_57_cvector)
{
	var_58_int = 1; // 0x14a9 PushI
	if(var_58_int == 0) goto Label_5590; // 0x14aa JumpB
	func_7845(); // 0x14ac NEW_2
	var_60_int = 14572; // 0x14ae PushI
	var_61_bool = var_57_cvector == var_60_int; // 0x14af Eq
	if(var_61_bool == 0) goto Label_5302; // 0x14b0 JumpB
	var_62_object = Obj(); var_63_object = Obj(); // 0x14b1 PushV
	var_62_object = var_1_object; // 0x14b2 MovT
	var_63_object = var_0_object; // 0x14b3 MovT
	func_8670(); // 0x14b4 NEW_2
	
Label_5302:
	var_66_int = 14578; // 0x14b6 PushI
	var_67_bool = var_57_cvector == var_66_int; // 0x14b7 Eq
	if(var_67_bool == 0) goto Label_5310; // 0x14b8 JumpB
	var_68_object = Obj(); var_69_object = Obj(); // 0x14b9 PushV
	var_68_object = var_1_object; // 0x14ba MovT
	var_69_object = var_0_object; // 0x14bb MovT
	func_8725(); // 0x14bc NEW_2
	
Label_5310:
	var_109_int = 14583; // 0x14be PushI
	var_110_bool = var_57_cvector == var_109_int; // 0x14bf Eq
	if(var_110_bool == 0) goto Label_5318; // 0x14c0 JumpB
	var_111_object = Obj(); var_112_object = Obj(); // 0x14c1 PushV
	var_111_object = var_1_object; // 0x14c2 MovT
	var_112_object = var_0_object; // 0x14c3 MovT
	func_8725(); // 0x14c4 NEW_2
	
Label_5318:
	var_113_int = 36864; // 0x14c6 PushI
	var_114_bool = var_57_cvector == var_113_int; // 0x14c7 Eq
	if(var_114_bool == 0) goto Label_5326; // 0x14c8 JumpB
	var_115_object = Obj(); var_116_object = Obj(); // 0x14c9 PushV
	var_115_object = var_1_object; // 0x14ca MovT
	var_116_object = var_0_object; // 0x14cb MovT
	func_8725(); // 0x14cc NEW_2
	
Label_5326:
	var_117_int = 13358; // 0x14ce PushI
	var_118_bool = var_56_bool == var_117_int; // 0x14cf Eq
	if(var_118_bool == 0) goto Label_5363; // 0x14d0 JumpB
	var_119_string = ""; // 0x14d1 PushV
	var_119_string = "Neutral"; // 0x14d2 MovS
	func_5266(var_57_cvector, var_119_string); // 0x14d3 NEW_2
	var_136_int = 512203; // 0x14d5 PushI
	SetMessage(var_136_int); // 0x14d6 TObjFunc
	ClearReplies(); // 0x14d8 TObjFunc
	var_137_bool = 0; // 0x14da PushV
	var_137_bool = 0; // 0x14db MovB
	var_138_bool = 0; var_139_object = Obj(); // 0x14dc PushV
	var_139_object = var_1_object; // 0x14dd MovT
	func_9217(var_139_object); // 0x14de NEW_2
	if(var_138_bool == 0) goto Label_5351; // 0x14e0 JumpB
	var_146_bool = 0; var_147_object = Obj(); // 0x14e1 PushV
	var_147_object = var_1_object; // 0x14e2 MovT
	func_9229(var_147_object); // 0x14e3 NEW_2
	if(var_146_bool == 0) goto Label_5351; // 0x14e5 JumpB
	var_137_bool = 1; // 0x14e6 MovB
	
Label_5351:
	if(var_137_bool == 0) goto Label_5357; // 0x14e7 JumpB
	var_152_int = 513340; // 0x14e8 PushI
	var_153_int = 14573; // 0x14e9 PushI
	var_154_int = 14572; // 0x14ea PushI
	AddReply(var_152_int, var_153_int, var_154_int); // 0x14eb TObjFunc
	
Label_5357:
	var_155_int = 512204; // 0x14ed PushI
	var_156_int = -1; // 0x14ee PushI
	var_157_int = 13359; // 0x14ef PushI
	AddReply(var_155_int, var_156_int, var_157_int); // 0x14f0 TObjFunc
	return 0; // 0x14f2 Return
	
Label_5363:
	var_158_int = 14573; // 0x14f3 PushI
	var_159_bool = var_56_bool == var_158_int; // 0x14f4 Eq
	if(var_159_bool == 0) goto Label_5386; // 0x14f5 JumpB
	var_160_string = ""; // 0x14f6 PushV
	var_160_string = "Neutral"; // 0x14f7 MovS
	func_5266(var_57_cvector, var_160_string); // 0x14f8 NEW_2
	var_161_int = 513341; // 0x14fa PushI
	SetMessage(var_161_int); // 0x14fb TObjFunc
	ClearReplies(); // 0x14fd TObjFunc
	var_162_int = 513342; // 0x14ff PushI
	var_163_int = 14575; // 0x1500 PushI
	var_164_int = 14574; // 0x1501 PushI
	AddReply(var_162_int, var_163_int, var_164_int); // 0x1502 TObjFunc
	var_165_int = 535178; // 0x1504 PushI
	var_166_int = 36846; // 0x1505 PushI
	var_167_int = 36845; // 0x1506 PushI
	AddReply(var_165_int, var_166_int, var_167_int); // 0x1507 TObjFunc
	return 0; // 0x1509 Return
	
Label_5386:
	var_168_int = 36846; // 0x150a PushI
	var_169_bool = var_56_bool == var_168_int; // 0x150b Eq
	if(var_169_bool == 0) goto Label_5409; // 0x150c JumpB
	var_170_string = ""; // 0x150d PushV
	var_170_string = "Neutral"; // 0x150e MovS
	func_5266(var_57_cvector, var_170_string); // 0x150f NEW_2
	var_171_int = 535179; // 0x1511 PushI
	SetMessage(var_171_int); // 0x1512 TObjFunc
	ClearReplies(); // 0x1514 TObjFunc
	var_172_int = 535180; // 0x1516 PushI
	var_173_int = 36848; // 0x1517 PushI
	var_174_int = 36847; // 0x1518 PushI
	AddReply(var_172_int, var_173_int, var_174_int); // 0x1519 TObjFunc
	var_175_int = 535182; // 0x151b PushI
	var_176_int = 36850; // 0x151c PushI
	var_177_int = 36849; // 0x151d PushI
	AddReply(var_175_int, var_176_int, var_177_int); // 0x151e TObjFunc
	return 0; // 0x1520 Return
	
Label_5409:
	var_178_int = 36850; // 0x1521 PushI
	var_179_bool = var_56_bool == var_178_int; // 0x1522 Eq
	if(var_179_bool == 0) goto Label_5427; // 0x1523 JumpB
	var_180_string = ""; // 0x1524 PushV
	var_180_string = "Strict"; // 0x1525 MovS
	func_5266(var_57_cvector, var_180_string); // 0x1526 NEW_2
	var_181_int = 535183; // 0x1528 PushI
	SetMessage(var_181_int); // 0x1529 TObjFunc
	ClearReplies(); // 0x152b TObjFunc
	var_182_int = 535184; // 0x152d PushI
	var_183_int = 36848; // 0x152e PushI
	var_184_int = 36851; // 0x152f PushI
	AddReply(var_182_int, var_183_int, var_184_int); // 0x1530 TObjFunc
	return 0; // 0x1532 Return
	
Label_5427:
	var_185_int = 36848; // 0x1533 PushI
	var_186_bool = var_56_bool == var_185_int; // 0x1534 Eq
	if(var_186_bool == 0) goto Label_5450; // 0x1535 JumpB
	var_187_string = ""; // 0x1536 PushV
	var_187_string = "Neutral"; // 0x1537 MovS
	func_5266(var_57_cvector, var_187_string); // 0x1538 NEW_2
	var_188_int = 535181; // 0x153a PushI
	SetMessage(var_188_int); // 0x153b TObjFunc
	ClearReplies(); // 0x153d TObjFunc
	var_189_int = 535186; // 0x153f PushI
	var_190_int = 36855; // 0x1540 PushI
	var_191_int = 36854; // 0x1541 PushI
	AddReply(var_189_int, var_190_int, var_191_int); // 0x1542 TObjFunc
	var_192_int = 535185; // 0x1544 PushI
	var_193_int = -1; // 0x1545 PushI
	var_194_int = 36853; // 0x1546 PushI
	AddReply(var_192_int, var_193_int, var_194_int); // 0x1547 TObjFunc
	return 0; // 0x1549 Return
	
Label_5450:
	var_195_int = 36855; // 0x154a PushI
	var_196_bool = var_56_bool == var_195_int; // 0x154b Eq
	if(var_196_bool == 0) goto Label_5468; // 0x154c JumpB
	var_197_string = ""; // 0x154d PushV
	var_197_string = "Neutral"; // 0x154e MovS
	func_5266(var_57_cvector, var_197_string); // 0x154f NEW_2
	var_198_int = 535187; // 0x1551 PushI
	SetMessage(var_198_int); // 0x1552 TObjFunc
	ClearReplies(); // 0x1554 TObjFunc
	var_199_int = 535188; // 0x1556 PushI
	var_200_int = 14575; // 0x1557 PushI
	var_201_int = 36856; // 0x1558 PushI
	AddReply(var_199_int, var_200_int, var_201_int); // 0x1559 TObjFunc
	return 0; // 0x155b Return
	
Label_5468:
	var_202_int = 14575; // 0x155c PushI
	var_203_bool = var_56_bool == var_202_int; // 0x155d Eq
	if(var_203_bool == 0) goto Label_5491; // 0x155e JumpB
	var_204_string = ""; // 0x155f PushV
	var_204_string = "Strict"; // 0x1560 MovS
	func_5266(var_57_cvector, var_204_string); // 0x1561 NEW_2
	var_205_int = 513343; // 0x1563 PushI
	SetMessage(var_205_int); // 0x1564 TObjFunc
	ClearReplies(); // 0x1566 TObjFunc
	var_206_int = 513344; // 0x1568 PushI
	var_207_int = 14577; // 0x1569 PushI
	var_208_int = 14576; // 0x156a PushI
	AddReply(var_206_int, var_207_int, var_208_int); // 0x156b TObjFunc
	var_209_int = 535189; // 0x156d PushI
	var_210_int = 36860; // 0x156e PushI
	var_211_int = 36858; // 0x156f PushI
	AddReply(var_209_int, var_210_int, var_211_int); // 0x1570 TObjFunc
	return 0; // 0x1572 Return
	
Label_5491:
	var_212_int = 36860; // 0x1573 PushI
	var_213_bool = var_56_bool == var_212_int; // 0x1574 Eq
	if(var_213_bool == 0) goto Label_5514; // 0x1575 JumpB
	var_214_string = ""; // 0x1576 PushV
	var_214_string = "Neutral"; // 0x1577 MovS
	func_5266(var_57_cvector, var_214_string); // 0x1578 NEW_2
	var_215_int = 535190; // 0x157a PushI
	SetMessage(var_215_int); // 0x157b TObjFunc
	ClearReplies(); // 0x157d TObjFunc
	var_216_int = 535191; // 0x157f PushI
	var_217_int = 14580; // 0x1580 PushI
	var_218_int = 36861; // 0x1581 PushI
	AddReply(var_216_int, var_217_int, var_218_int); // 0x1582 TObjFunc
	var_219_int = 535192; // 0x1584 PushI
	var_220_int = -1; // 0x1585 PushI
	var_221_int = 36862; // 0x1586 PushI
	AddReply(var_219_int, var_220_int, var_221_int); // 0x1587 TObjFunc
	return 0; // 0x1589 Return
	
Label_5514:
	var_222_int = 14577; // 0x158a PushI
	var_223_bool = var_56_bool == var_222_int; // 0x158b Eq
	if(var_223_bool == 0) goto Label_5537; // 0x158c JumpB
	var_224_string = ""; // 0x158d PushV
	var_224_string = "Strict"; // 0x158e MovS
	func_5266(var_57_cvector, var_224_string); // 0x158f NEW_2
	var_225_int = 513345; // 0x1591 PushI
	SetMessage(var_225_int); // 0x1592 TObjFunc
	ClearReplies(); // 0x1594 TObjFunc
	var_226_int = 513346; // 0x1596 PushI
	var_227_int = -1; // 0x1597 PushI
	var_228_int = 14578; // 0x1598 PushI
	AddReply(var_226_int, var_227_int, var_228_int); // 0x1599 TObjFunc
	var_229_int = 513347; // 0x159b PushI
	var_230_int = 14580; // 0x159c PushI
	var_231_int = 14579; // 0x159d PushI
	AddReply(var_229_int, var_230_int, var_231_int); // 0x159e TObjFunc
	return 0; // 0x15a0 Return
	
Label_5537:
	var_232_int = 14580; // 0x15a1 PushI
	var_233_bool = var_56_bool == var_232_int; // 0x15a2 Eq
	if(var_233_bool == 0) goto Label_5560; // 0x15a3 JumpB
	var_234_string = ""; // 0x15a4 PushV
	var_234_string = "Strict"; // 0x15a5 MovS
	func_5266(var_57_cvector, var_234_string); // 0x15a6 NEW_2
	var_235_int = 513348; // 0x15a8 PushI
	SetMessage(var_235_int); // 0x15a9 TObjFunc
	ClearReplies(); // 0x15ab TObjFunc
	var_236_int = 513349; // 0x15ad PushI
	var_237_int = 14582; // 0x15ae PushI
	var_238_int = 14581; // 0x15af PushI
	AddReply(var_236_int, var_237_int, var_238_int); // 0x15b0 TObjFunc
	var_239_int = 535193; // 0x15b2 PushI
	var_240_int = -1; // 0x15b3 PushI
	var_241_int = 36864; // 0x15b4 PushI
	AddReply(var_239_int, var_240_int, var_241_int); // 0x15b5 TObjFunc
	return 0; // 0x15b7 Return
	
Label_5560:
	var_242_int = 14582; // 0x15b8 PushI
	var_243_bool = var_56_bool == var_242_int; // 0x15b9 Eq
	if(var_243_bool == 0) goto Label_5578; // 0x15ba JumpB
	var_244_string = ""; // 0x15bb PushV
	var_244_string = "Neutral"; // 0x15bc MovS
	func_5266(var_57_cvector, var_244_string); // 0x15bd NEW_2
	var_245_int = 513350; // 0x15bf PushI
	SetMessage(var_245_int); // 0x15c0 TObjFunc
	ClearReplies(); // 0x15c2 TObjFunc
	var_246_int = 513351; // 0x15c4 PushI
	var_247_int = -1; // 0x15c5 PushI
	var_248_int = 14583; // 0x15c6 PushI
	AddReply(var_246_int, var_247_int, var_248_int); // 0x15c7 TObjFunc
	return 0; // 0x15c9 Return
	
Label_5578:
	var_3_string = 1; // 0x15ca TMovB
	var_249_bool = 0; // 0x15cb PushV
	func_8086(var_249_bool); // 0x15cc NEW_2
	if(var_249_bool == 0) goto Label_5586; // 0x15ce JumpB
	lshStopAnimation(); // 0x15cf Func
	goto Label_5588; // 0x15d1 Jump
	
Label_5588:
	return 0; // 0x15d4 Return
	
Label_5586:
	StopAnimation(); // 0x15d2 Func
	
Label_5590:
	return 0; // 0x15d6 Return
}


task_15_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_int, var_41_int, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_object, var_53_object, var_54_object, var_55_string, var_56_bool, var_57_cvector)
{
	var_58_int = 1; // 0x16bc PushI
	if(var_58_int == 0) goto Label_6583; // 0x16bd JumpB
	func_7845(); // 0x16bf NEW_2
	var_60_int = 33071; // 0x16c1 PushI
	var_61_bool = var_57_cvector == var_60_int; // 0x16c2 Eq
	if(var_61_bool == 0) goto Label_5838; // 0x16c3 JumpB
	var_62_object = Obj(); var_63_object = Obj(); // 0x16c4 PushV
	var_62_object = var_1_object; // 0x16c5 MovT
	var_63_object = var_0_object; // 0x16c6 MovT
	func_8588(); // 0x16c7 NEW_2
	var_105_object = Obj(); var_106_object = Obj(); // 0x16c9 PushV
	var_105_object = var_1_object; // 0x16ca MovT
	var_106_object = var_0_object; // 0x16cb MovT
	func_8294(); // 0x16cc NEW_2
	
Label_5838:
	var_131_int = 34431; // 0x16ce PushI
	var_132_bool = var_57_cvector == var_131_int; // 0x16cf Eq
	if(var_132_bool == 0) goto Label_5851; // 0x16d0 JumpB
	var_133_object = Obj(); var_134_object = Obj(); // 0x16d1 PushV
	var_133_object = var_1_object; // 0x16d2 MovT
	var_134_object = var_0_object; // 0x16d3 MovT
	func_8588(); // 0x16d4 NEW_2
	var_135_object = Obj(); var_136_object = Obj(); // 0x16d6 PushV
	var_135_object = var_1_object; // 0x16d7 MovT
	var_136_object = var_0_object; // 0x16d8 MovT
	func_8294(); // 0x16d9 NEW_2
	
Label_5851:
	var_137_int = 33073; // 0x16db PushI
	var_138_bool = var_57_cvector == var_137_int; // 0x16dc Eq
	if(var_138_bool == 0) goto Label_5859; // 0x16dd JumpB
	var_139_object = Obj(); var_140_object = Obj(); // 0x16de PushV
	var_139_object = var_1_object; // 0x16df MovT
	var_140_object = var_0_object; // 0x16e0 MovT
	func_8116(); // 0x16e1 NEW_2
	
Label_5859:
	var_143_int = 34410; // 0x16e3 PushI
	var_144_bool = var_57_cvector == var_143_int; // 0x16e4 Eq
	if(var_144_bool == 0) goto Label_5867; // 0x16e5 JumpB
	var_145_object = Obj(); var_146_object = Obj(); // 0x16e6 PushV
	var_145_object = var_1_object; // 0x16e7 MovT
	var_146_object = var_0_object; // 0x16e8 MovT
	func_8149(); // 0x16e9 NEW_2
	
Label_5867:
	var_149_int = 33068; // 0x16eb PushI
	var_150_bool = var_56_bool == var_149_int; // 0x16ec Eq
	if(var_150_bool == 0) goto Label_5957; // 0x16ed JumpB
	var_151_string = ""; // 0x16ee PushV
	var_151_string = "Neutral"; // 0x16ef MovS
	func_5797(var_57_cvector, var_151_string); // 0x16f0 NEW_2
	var_168_int = 531684; // 0x16f2 PushI
	SetMessage(var_168_int); // 0x16f3 TObjFunc
	ClearReplies(); // 0x16f5 TObjFunc
	var_169_bool = 0; var_170_object = Obj(); // 0x16f7 PushV
	var_170_object = var_1_object; // 0x16f8 MovT
	func_9073(var_170_object); // 0x16f9 NEW_2
	if(var_169_bool == 0) goto Label_5889; // 0x16fb JumpB
	var_177_int = 531685; // 0x16fc PushI
	var_178_int = 34364; // 0x16fd PushI
	var_179_int = 33069; // 0x16fe PushI
	AddReply(var_177_int, var_178_int, var_179_int); // 0x16ff TObjFunc
	
Label_5889:
	var_180_bool = 0; // 0x1701 PushV
	var_180_bool = 0; // 0x1702 MovB
	var_181_bool = 0; var_182_object = Obj(); // 0x1703 PushV
	var_182_object = var_1_object; // 0x1704 MovT
	func_8756(var_182_object); // 0x1705 NEW_2
	var_187_bool = var_181_bool == 0; // 0x1707 Not
	if(var_187_bool == 0) goto Label_5903; // 0x1708 JumpB
	var_188_bool = 0; var_189_object = Obj(); // 0x1709 PushV
	var_189_object = var_1_object; // 0x170a MovT
	func_8768(var_189_object); // 0x170b NEW_2
	if(var_188_bool == 0) goto Label_5903; // 0x170d JumpB
	var_180_bool = 1; // 0x170e MovB
	
Label_5903:
	if(var_180_bool == 0) goto Label_5909; // 0x170f JumpB
	var_194_int = 531689; // 0x1710 PushI
	var_195_int = 34386; // 0x1711 PushI
	var_196_int = 33073; // 0x1712 PushI
	AddReply(var_194_int, var_195_int, var_196_int); // 0x1713 TObjFunc
	
Label_5909:
	var_197_bool = 0; // 0x1715 PushV
	var_197_bool = 1; // 0x1716 MovB
	var_198_bool = 0; // 0x1717 PushV
	var_198_bool = 0; // 0x1718 MovB
	var_199_bool = 0; var_200_object = Obj(); // 0x1719 PushV
	var_200_object = var_1_object; // 0x171a MovT
	func_8780(var_200_object); // 0x171b NEW_2
	if(var_199_bool == 0) goto Label_5924; // 0x171d JumpB
	var_205_bool = 0; var_206_object = Obj(); // 0x171e PushV
	var_206_object = var_1_object; // 0x171f MovT
	func_9073(var_206_object); // 0x1720 NEW_2
	if(var_205_bool == 0) goto Label_5924; // 0x1722 JumpB
	var_198_bool = 1; // 0x1723 MovB
	
Label_5924:
	if(var_198_bool == 0) goto Label_5940; // 0x1724 JumpB
	var_207_bool = 0; // 0x1725 PushV
	var_207_bool = 0; // 0x1726 MovB
	var_208_bool = 0; var_209_object = Obj(); // 0x1727 PushV
	var_209_object = var_1_object; // 0x1728 MovT
	func_8744(var_209_object); // 0x1729 NEW_2
	if(var_208_bool == 0) goto Label_5938; // 0x172b JumpB
	var_214_bool = 0; var_215_object = Obj(); // 0x172c PushV
	var_215_object = var_1_object; // 0x172d MovT
	func_8780(var_215_object); // 0x172e NEW_2
	if(var_214_bool == 0) goto Label_5938; // 0x1730 JumpB
	var_207_bool = 1; // 0x1731 MovB
	
Label_5938:
	if(var_207_bool == 0) goto Label_5940; // 0x1732 JumpB
	var_197_bool = 0; // 0x1733 MovB
	
Label_5940:
	if(var_197_bool == 0) goto Label_5946; // 0x1734 JumpB
	var_216_int = 532923; // 0x1735 PushI
	var_217_int = 34411; // 0x1736 PushI
	var_218_int = 34410; // 0x1737 PushI
	AddReply(var_216_int, var_217_int, var_218_int); // 0x1738 TObjFunc
	
Label_5946:
	var_219_int = 531688; // 0x173a PushI
	var_220_int = -1; // 0x173b PushI
	var_221_int = 33072; // 0x173c PushI
	AddReply(var_219_int, var_220_int, var_221_int); // 0x173d TObjFunc
	var_222_int = 532874; // 0x173f PushI
	var_223_int = -1; // 0x1740 PushI
	var_224_int = 34363; // 0x1741 PushI
	AddReply(var_222_int, var_223_int, var_224_int); // 0x1742 TObjFunc
	return 0; // 0x1744 Return
	
Label_5957:
	var_225_int = 34411; // 0x1745 PushI
	var_226_bool = var_56_bool == var_225_int; // 0x1746 Eq
	if(var_226_bool == 0) goto Label_5975; // 0x1747 JumpB
	var_227_string = ""; // 0x1748 PushV
	var_227_string = "Neutral"; // 0x1749 MovS
	func_5797(var_57_cvector, var_227_string); // 0x174a NEW_2
	var_228_int = 532924; // 0x174c PushI
	SetMessage(var_228_int); // 0x174d TObjFunc
	ClearReplies(); // 0x174f TObjFunc
	var_229_int = 532925; // 0x1751 PushI
	var_230_int = 34415; // 0x1752 PushI
	var_231_int = 34412; // 0x1753 PushI
	AddReply(var_229_int, var_230_int, var_231_int); // 0x1754 TObjFunc
	return 0; // 0x1756 Return
	
Label_5975:
	var_232_int = 34415; // 0x1757 PushI
	var_233_bool = var_56_bool == var_232_int; // 0x1758 Eq
	if(var_233_bool == 0) goto Label_5998; // 0x1759 JumpB
	var_234_string = ""; // 0x175a PushV
	var_234_string = "Neutral"; // 0x175b MovS
	func_5797(var_57_cvector, var_234_string); // 0x175c NEW_2
	var_235_int = 532928; // 0x175e PushI
	SetMessage(var_235_int); // 0x175f TObjFunc
	ClearReplies(); // 0x1761 TObjFunc
	var_236_int = 532929; // 0x1763 PushI
	var_237_int = 34417; // 0x1764 PushI
	var_238_int = 34416; // 0x1765 PushI
	AddReply(var_236_int, var_237_int, var_238_int); // 0x1766 TObjFunc
	var_239_int = 533147; // 0x1768 PushI
	var_240_int = 34665; // 0x1769 PushI
	var_241_int = 34664; // 0x176a PushI
	AddReply(var_239_int, var_240_int, var_241_int); // 0x176b TObjFunc
	return 0; // 0x176d Return
	
Label_5998:
	var_242_int = 34665; // 0x176e PushI
	var_243_bool = var_56_bool == var_242_int; // 0x176f Eq
	if(var_243_bool == 0) goto Label_6021; // 0x1770 JumpB
	var_244_string = ""; // 0x1771 PushV
	var_244_string = "Neutral"; // 0x1772 MovS
	func_5797(var_57_cvector, var_244_string); // 0x1773 NEW_2
	var_245_int = 533148; // 0x1775 PushI
	SetMessage(var_245_int); // 0x1776 TObjFunc
	ClearReplies(); // 0x1778 TObjFunc
	var_246_int = 533149; // 0x177a PushI
	var_247_int = 34668; // 0x177b PushI
	var_248_int = 34666; // 0x177c PushI
	AddReply(var_246_int, var_247_int, var_248_int); // 0x177d TObjFunc
	var_249_int = 533150; // 0x177f PushI
	var_250_int = 34999; // 0x1780 PushI
	var_251_int = 34667; // 0x1781 PushI
	AddReply(var_249_int, var_250_int, var_251_int); // 0x1782 TObjFunc
	return 0; // 0x1784 Return
	
Label_6021:
	var_252_int = 34668; // 0x1785 PushI
	var_253_bool = var_56_bool == var_252_int; // 0x1786 Eq
	if(var_253_bool == 0) goto Label_6044; // 0x1787 JumpB
	var_254_string = ""; // 0x1788 PushV
	var_254_string = "Neutral"; // 0x1789 MovS
	func_5797(var_57_cvector, var_254_string); // 0x178a NEW_2
	var_255_int = 533151; // 0x178c PushI
	SetMessage(var_255_int); // 0x178d TObjFunc
	ClearReplies(); // 0x178f TObjFunc
	var_256_int = 533152; // 0x1791 PushI
	var_257_int = 34999; // 0x1792 PushI
	var_258_int = 34669; // 0x1793 PushI
	AddReply(var_256_int, var_257_int, var_258_int); // 0x1794 TObjFunc
	var_259_int = 533153; // 0x1796 PushI
	var_260_int = 34999; // 0x1797 PushI
	var_261_int = 34670; // 0x1798 PushI
	AddReply(var_259_int, var_260_int, var_261_int); // 0x1799 TObjFunc
	return 0; // 0x179b Return
	
Label_6044:
	var_262_int = 34417; // 0x179c PushI
	var_263_bool = var_56_bool == var_262_int; // 0x179d Eq
	if(var_263_bool == 0) goto Label_6067; // 0x179e JumpB
	var_264_string = ""; // 0x179f PushV
	var_264_string = "Grief"; // 0x17a0 MovS
	func_5797(var_57_cvector, var_264_string); // 0x17a1 NEW_2
	var_265_int = 532930; // 0x17a3 PushI
	SetMessage(var_265_int); // 0x17a4 TObjFunc
	ClearReplies(); // 0x17a6 TObjFunc
	var_266_int = 533475; // 0x17a8 PushI
	var_267_int = 34999; // 0x17a9 PushI
	var_268_int = 34998; // 0x17aa PushI
	AddReply(var_266_int, var_267_int, var_268_int); // 0x17ab TObjFunc
	var_269_int = 532931; // 0x17ad PushI
	var_270_int = 34419; // 0x17ae PushI
	var_271_int = 34418; // 0x17af PushI
	AddReply(var_269_int, var_270_int, var_271_int); // 0x17b0 TObjFunc
	return 0; // 0x17b2 Return
	
Label_6067:
	var_272_int = 34419; // 0x17b3 PushI
	var_273_bool = var_56_bool == var_272_int; // 0x17b4 Eq
	if(var_273_bool == 0) goto Label_6090; // 0x17b5 JumpB
	var_274_string = ""; // 0x17b6 PushV
	var_274_string = "Neutral"; // 0x17b7 MovS
	func_5797(var_57_cvector, var_274_string); // 0x17b8 NEW_2
	var_275_int = 532932; // 0x17ba PushI
	SetMessage(var_275_int); // 0x17bb TObjFunc
	ClearReplies(); // 0x17bd TObjFunc
	var_276_int = 532933; // 0x17bf PushI
	var_277_int = -1; // 0x17c0 PushI
	var_278_int = 34420; // 0x17c1 PushI
	AddReply(var_276_int, var_277_int, var_278_int); // 0x17c2 TObjFunc
	var_279_int = 533146; // 0x17c4 PushI
	var_280_int = -1; // 0x17c5 PushI
	var_281_int = 34663; // 0x17c6 PushI
	AddReply(var_279_int, var_280_int, var_281_int); // 0x17c7 TObjFunc
	return 0; // 0x17c9 Return
	
Label_6090:
	var_282_int = 34999; // 0x17ca PushI
	var_283_bool = var_56_bool == var_282_int; // 0x17cb Eq
	if(var_283_bool == 0) goto Label_6113; // 0x17cc JumpB
	var_284_string = ""; // 0x17cd PushV
	var_284_string = "Neutral"; // 0x17ce MovS
	func_5797(var_57_cvector, var_284_string); // 0x17cf NEW_2
	var_285_int = 533476; // 0x17d1 PushI
	SetMessage(var_285_int); // 0x17d2 TObjFunc
	ClearReplies(); // 0x17d4 TObjFunc
	var_286_int = 533478; // 0x17d6 PushI
	var_287_int = 35005; // 0x17d7 PushI
	var_288_int = 35004; // 0x17d8 PushI
	AddReply(var_286_int, var_287_int, var_288_int); // 0x17d9 TObjFunc
	var_289_int = 533477; // 0x17db PushI
	var_290_int = -1; // 0x17dc PushI
	var_291_int = 35000; // 0x17dd PushI
	AddReply(var_289_int, var_290_int, var_291_int); // 0x17de TObjFunc
	return 0; // 0x17e0 Return
	
Label_6113:
	var_292_int = 35005; // 0x17e1 PushI
	var_293_bool = var_56_bool == var_292_int; // 0x17e2 Eq
	if(var_293_bool == 0) goto Label_6131; // 0x17e3 JumpB
	var_294_string = ""; // 0x17e4 PushV
	var_294_string = "Neutral"; // 0x17e5 MovS
	func_5797(var_57_cvector, var_294_string); // 0x17e6 NEW_2
	var_295_int = 533479; // 0x17e8 PushI
	SetMessage(var_295_int); // 0x17e9 TObjFunc
	ClearReplies(); // 0x17eb TObjFunc
	var_296_int = 533480; // 0x17ed PushI
	var_297_int = 35007; // 0x17ee PushI
	var_298_int = 35006; // 0x17ef PushI
	AddReply(var_296_int, var_297_int, var_298_int); // 0x17f0 TObjFunc
	return 0; // 0x17f2 Return
	
Label_6131:
	var_299_int = 35007; // 0x17f3 PushI
	var_300_bool = var_56_bool == var_299_int; // 0x17f4 Eq
	if(var_300_bool == 0) goto Label_6154; // 0x17f5 JumpB
	var_301_string = ""; // 0x17f6 PushV
	var_301_string = "Neutral"; // 0x17f7 MovS
	func_5797(var_57_cvector, var_301_string); // 0x17f8 NEW_2
	var_302_int = 533481; // 0x17fa PushI
	SetMessage(var_302_int); // 0x17fb TObjFunc
	ClearReplies(); // 0x17fd TObjFunc
	var_303_int = 533482; // 0x17ff PushI
	var_304_int = -1; // 0x1800 PushI
	var_305_int = 35008; // 0x1801 PushI
	AddReply(var_303_int, var_304_int, var_305_int); // 0x1802 TObjFunc
	var_306_int = 533483; // 0x1804 PushI
	var_307_int = -1; // 0x1805 PushI
	var_308_int = 35009; // 0x1806 PushI
	AddReply(var_306_int, var_307_int, var_308_int); // 0x1807 TObjFunc
	return 0; // 0x1809 Return
	
Label_6154:
	var_309_int = 34386; // 0x180a PushI
	var_310_bool = var_56_bool == var_309_int; // 0x180b Eq
	if(var_310_bool == 0) goto Label_6177; // 0x180c JumpB
	var_311_string = ""; // 0x180d PushV
	var_311_string = "Neutral"; // 0x180e MovS
	func_5797(var_57_cvector, var_311_string); // 0x180f NEW_2
	var_312_int = 532902; // 0x1811 PushI
	SetMessage(var_312_int); // 0x1812 TObjFunc
	ClearReplies(); // 0x1814 TObjFunc
	var_313_int = 532903; // 0x1816 PushI
	var_314_int = 33074; // 0x1817 PushI
	var_315_int = 34387; // 0x1818 PushI
	AddReply(var_313_int, var_314_int, var_315_int); // 0x1819 TObjFunc
	var_316_int = 532904; // 0x181b PushI
	var_317_int = 34389; // 0x181c PushI
	var_318_int = 34388; // 0x181d PushI
	AddReply(var_316_int, var_317_int, var_318_int); // 0x181e TObjFunc
	return 0; // 0x1820 Return
	
Label_6177:
	var_319_int = 34389; // 0x1821 PushI
	var_320_bool = var_56_bool == var_319_int; // 0x1822 Eq
	if(var_320_bool == 0) goto Label_6200; // 0x1823 JumpB
	var_321_string = ""; // 0x1824 PushV
	var_321_string = "Neutral"; // 0x1825 MovS
	func_5797(var_57_cvector, var_321_string); // 0x1826 NEW_2
	var_322_int = 532905; // 0x1828 PushI
	SetMessage(var_322_int); // 0x1829 TObjFunc
	ClearReplies(); // 0x182b TObjFunc
	var_323_int = 532906; // 0x182d PushI
	var_324_int = -1; // 0x182e PushI
	var_325_int = 34390; // 0x182f PushI
	AddReply(var_323_int, var_324_int, var_325_int); // 0x1830 TObjFunc
	var_326_int = 532907; // 0x1832 PushI
	var_327_int = 34392; // 0x1833 PushI
	var_328_int = 34391; // 0x1834 PushI
	AddReply(var_326_int, var_327_int, var_328_int); // 0x1835 TObjFunc
	return 0; // 0x1837 Return
	
Label_6200:
	var_329_int = 33074; // 0x1838 PushI
	var_330_bool = var_56_bool == var_329_int; // 0x1839 Eq
	if(var_330_bool == 0) goto Label_6218; // 0x183a JumpB
	var_331_string = ""; // 0x183b PushV
	var_331_string = "Neutral"; // 0x183c MovS
	func_5797(var_57_cvector, var_331_string); // 0x183d NEW_2
	var_332_int = 531690; // 0x183f PushI
	SetMessage(var_332_int); // 0x1840 TObjFunc
	ClearReplies(); // 0x1842 TObjFunc
	var_333_int = 531691; // 0x1844 PushI
	var_334_int = 34392; // 0x1845 PushI
	var_335_int = 33075; // 0x1846 PushI
	AddReply(var_333_int, var_334_int, var_335_int); // 0x1847 TObjFunc
	return 0; // 0x1849 Return
	
Label_6218:
	var_336_int = 34392; // 0x184a PushI
	var_337_bool = var_56_bool == var_336_int; // 0x184b Eq
	if(var_337_bool == 0) goto Label_6241; // 0x184c JumpB
	var_338_string = ""; // 0x184d PushV
	var_338_string = "Neutral"; // 0x184e MovS
	func_5797(var_57_cvector, var_338_string); // 0x184f NEW_2
	var_339_int = 532908; // 0x1851 PushI
	SetMessage(var_339_int); // 0x1852 TObjFunc
	ClearReplies(); // 0x1854 TObjFunc
	var_340_int = 532909; // 0x1856 PushI
	var_341_int = 34395; // 0x1857 PushI
	var_342_int = 34394; // 0x1858 PushI
	AddReply(var_340_int, var_341_int, var_342_int); // 0x1859 TObjFunc
	var_343_int = 532911; // 0x185b PushI
	var_344_int = 34397; // 0x185c PushI
	var_345_int = 34396; // 0x185d PushI
	AddReply(var_343_int, var_344_int, var_345_int); // 0x185e TObjFunc
	return 0; // 0x1860 Return
	
Label_6241:
	var_346_int = 34397; // 0x1861 PushI
	var_347_bool = var_56_bool == var_346_int; // 0x1862 Eq
	if(var_347_bool == 0) goto Label_6259; // 0x1863 JumpB
	var_348_string = ""; // 0x1864 PushV
	var_348_string = "Neutral"; // 0x1865 MovS
	func_5797(var_57_cvector, var_348_string); // 0x1866 NEW_2
	var_349_int = 532912; // 0x1868 PushI
	SetMessage(var_349_int); // 0x1869 TObjFunc
	ClearReplies(); // 0x186b TObjFunc
	var_350_int = 532913; // 0x186d PushI
	var_351_int = 34399; // 0x186e PushI
	var_352_int = 34398; // 0x186f PushI
	AddReply(var_350_int, var_351_int, var_352_int); // 0x1870 TObjFunc
	return 0; // 0x1872 Return
	
Label_6259:
	var_353_int = 34399; // 0x1873 PushI
	var_354_bool = var_56_bool == var_353_int; // 0x1874 Eq
	if(var_354_bool == 0) goto Label_6282; // 0x1875 JumpB
	var_355_string = ""; // 0x1876 PushV
	var_355_string = "Neutral"; // 0x1877 MovS
	func_5797(var_57_cvector, var_355_string); // 0x1878 NEW_2
	var_356_int = 532914; // 0x187a PushI
	SetMessage(var_356_int); // 0x187b TObjFunc
	ClearReplies(); // 0x187d TObjFunc
	var_357_int = 532915; // 0x187f PushI
	var_358_int = 34395; // 0x1880 PushI
	var_359_int = 34400; // 0x1881 PushI
	AddReply(var_357_int, var_358_int, var_359_int); // 0x1882 TObjFunc
	var_360_int = 532916; // 0x1884 PushI
	var_361_int = -1; // 0x1885 PushI
	var_362_int = 34402; // 0x1886 PushI
	AddReply(var_360_int, var_361_int, var_362_int); // 0x1887 TObjFunc
	return 0; // 0x1889 Return
	
Label_6282:
	var_363_int = 34395; // 0x188a PushI
	var_364_bool = var_56_bool == var_363_int; // 0x188b Eq
	if(var_364_bool == 0) goto Label_6305; // 0x188c JumpB
	var_365_string = ""; // 0x188d PushV
	var_365_string = "Neutral"; // 0x188e MovS
	func_5797(var_57_cvector, var_365_string); // 0x188f NEW_2
	var_366_int = 532910; // 0x1891 PushI
	SetMessage(var_366_int); // 0x1892 TObjFunc
	ClearReplies(); // 0x1894 TObjFunc
	var_367_int = 532917; // 0x1896 PushI
	var_368_int = -1; // 0x1897 PushI
	var_369_int = 34403; // 0x1898 PushI
	AddReply(var_367_int, var_368_int, var_369_int); // 0x1899 TObjFunc
	var_370_int = 532918; // 0x189b PushI
	var_371_int = -1; // 0x189c PushI
	var_372_int = 34404; // 0x189d PushI
	AddReply(var_370_int, var_371_int, var_372_int); // 0x189e TObjFunc
	return 0; // 0x18a0 Return
	
Label_6305:
	var_373_int = 34364; // 0x18a1 PushI
	var_374_bool = var_56_bool == var_373_int; // 0x18a2 Eq
	if(var_374_bool == 0) goto Label_6328; // 0x18a3 JumpB
	var_375_string = ""; // 0x18a4 PushV
	var_375_string = "Grief"; // 0x18a5 MovS
	func_5797(var_57_cvector, var_375_string); // 0x18a6 NEW_2
	var_376_int = 532875; // 0x18a8 PushI
	SetMessage(var_376_int); // 0x18a9 TObjFunc
	ClearReplies(); // 0x18ab TObjFunc
	var_377_int = 532876; // 0x18ad PushI
	var_378_int = 34366; // 0x18ae PushI
	var_379_int = 34365; // 0x18af PushI
	AddReply(var_377_int, var_378_int, var_379_int); // 0x18b0 TObjFunc
	var_380_int = 532919; // 0x18b2 PushI
	var_381_int = 34406; // 0x18b3 PushI
	var_382_int = 34405; // 0x18b4 PushI
	AddReply(var_380_int, var_381_int, var_382_int); // 0x18b5 TObjFunc
	return 0; // 0x18b7 Return
	
Label_6328:
	var_383_int = 34406; // 0x18b8 PushI
	var_384_bool = var_56_bool == var_383_int; // 0x18b9 Eq
	if(var_384_bool == 0) goto Label_6351; // 0x18ba JumpB
	var_385_string = ""; // 0x18bb PushV
	var_385_string = "Neutral"; // 0x18bc MovS
	func_5797(var_57_cvector, var_385_string); // 0x18bd NEW_2
	var_386_int = 532920; // 0x18bf PushI
	SetMessage(var_386_int); // 0x18c0 TObjFunc
	ClearReplies(); // 0x18c2 TObjFunc
	var_387_int = 532921; // 0x18c4 PushI
	var_388_int = 34366; // 0x18c5 PushI
	var_389_int = 34407; // 0x18c6 PushI
	AddReply(var_387_int, var_388_int, var_389_int); // 0x18c7 TObjFunc
	var_390_int = 532922; // 0x18c9 PushI
	var_391_int = -1; // 0x18ca PushI
	var_392_int = 34409; // 0x18cb PushI
	AddReply(var_390_int, var_391_int, var_392_int); // 0x18cc TObjFunc
	return 0; // 0x18ce Return
	
Label_6351:
	var_393_int = 34366; // 0x18cf PushI
	var_394_bool = var_56_bool == var_393_int; // 0x18d0 Eq
	if(var_394_bool == 0) goto Label_6374; // 0x18d1 JumpB
	var_395_string = ""; // 0x18d2 PushV
	var_395_string = "Neutral"; // 0x18d3 MovS
	func_5797(var_57_cvector, var_395_string); // 0x18d4 NEW_2
	var_396_int = 532877; // 0x18d6 PushI
	SetMessage(var_396_int); // 0x18d7 TObjFunc
	ClearReplies(); // 0x18d9 TObjFunc
	var_397_int = 532878; // 0x18db PushI
	var_398_int = 34368; // 0x18dc PushI
	var_399_int = 34367; // 0x18dd PushI
	AddReply(var_397_int, var_398_int, var_399_int); // 0x18de TObjFunc
	var_400_int = 532934; // 0x18e0 PushI
	var_401_int = 34424; // 0x18e1 PushI
	var_402_int = 34421; // 0x18e2 PushI
	AddReply(var_400_int, var_401_int, var_402_int); // 0x18e3 TObjFunc
	return 0; // 0x18e5 Return
	
Label_6374:
	var_403_int = 34424; // 0x18e6 PushI
	var_404_bool = var_56_bool == var_403_int; // 0x18e7 Eq
	if(var_404_bool == 0) goto Label_6392; // 0x18e8 JumpB
	var_405_string = ""; // 0x18e9 PushV
	var_405_string = "Neutral"; // 0x18ea MovS
	func_5797(var_57_cvector, var_405_string); // 0x18eb NEW_2
	var_406_int = 532936; // 0x18ed PushI
	SetMessage(var_406_int); // 0x18ee TObjFunc
	ClearReplies(); // 0x18f0 TObjFunc
	var_407_int = 532937; // 0x18f2 PushI
	var_408_int = 34426; // 0x18f3 PushI
	var_409_int = 34425; // 0x18f4 PushI
	AddReply(var_407_int, var_408_int, var_409_int); // 0x18f5 TObjFunc
	return 0; // 0x18f7 Return
	
Label_6392:
	var_410_int = 34426; // 0x18f8 PushI
	var_411_bool = var_56_bool == var_410_int; // 0x18f9 Eq
	if(var_411_bool == 0) goto Label_6410; // 0x18fa JumpB
	var_412_string = ""; // 0x18fb PushV
	var_412_string = "Neutral"; // 0x18fc MovS
	func_5797(var_57_cvector, var_412_string); // 0x18fd NEW_2
	var_413_int = 532938; // 0x18ff PushI
	SetMessage(var_413_int); // 0x1900 TObjFunc
	ClearReplies(); // 0x1902 TObjFunc
	var_414_int = 532939; // 0x1904 PushI
	var_415_int = 34368; // 0x1905 PushI
	var_416_int = 34427; // 0x1906 PushI
	AddReply(var_414_int, var_415_int, var_416_int); // 0x1907 TObjFunc
	return 0; // 0x1909 Return
	
Label_6410:
	var_417_int = 34368; // 0x190a PushI
	var_418_bool = var_56_bool == var_417_int; // 0x190b Eq
	if(var_418_bool == 0) goto Label_6433; // 0x190c JumpB
	var_419_string = ""; // 0x190d PushV
	var_419_string = "Neutral"; // 0x190e MovS
	func_5797(var_57_cvector, var_419_string); // 0x190f NEW_2
	var_420_int = 532879; // 0x1911 PushI
	SetMessage(var_420_int); // 0x1912 TObjFunc
	ClearReplies(); // 0x1914 TObjFunc
	var_421_int = 532880; // 0x1916 PushI
	var_422_int = 34370; // 0x1917 PushI
	var_423_int = 34369; // 0x1918 PushI
	AddReply(var_421_int, var_422_int, var_423_int); // 0x1919 TObjFunc
	var_424_int = 532935; // 0x191b PushI
	var_425_int = 34370; // 0x191c PushI
	var_426_int = 34422; // 0x191d PushI
	AddReply(var_424_int, var_425_int, var_426_int); // 0x191e TObjFunc
	return 0; // 0x1920 Return
	
Label_6433:
	var_427_int = 34370; // 0x1921 PushI
	var_428_bool = var_56_bool == var_427_int; // 0x1922 Eq
	if(var_428_bool == 0) goto Label_6456; // 0x1923 JumpB
	var_429_string = ""; // 0x1924 PushV
	var_429_string = "Gratitude"; // 0x1925 MovS
	func_5797(var_57_cvector, var_429_string); // 0x1926 NEW_2
	var_430_int = 532881; // 0x1928 PushI
	SetMessage(var_430_int); // 0x1929 TObjFunc
	ClearReplies(); // 0x192b TObjFunc
	var_431_int = 532882; // 0x192d PushI
	var_432_int = 34373; // 0x192e PushI
	var_433_int = 34371; // 0x192f PushI
	AddReply(var_431_int, var_432_int, var_433_int); // 0x1930 TObjFunc
	var_434_int = 532883; // 0x1932 PushI
	var_435_int = 33070; // 0x1933 PushI
	var_436_int = 34372; // 0x1934 PushI
	AddReply(var_434_int, var_435_int, var_436_int); // 0x1935 TObjFunc
	return 0; // 0x1937 Return
	
Label_6456:
	var_437_int = 34373; // 0x1938 PushI
	var_438_bool = var_56_bool == var_437_int; // 0x1939 Eq
	if(var_438_bool == 0) goto Label_6479; // 0x193a JumpB
	var_439_string = ""; // 0x193b PushV
	var_439_string = "Neutral"; // 0x193c MovS
	func_5797(var_57_cvector, var_439_string); // 0x193d NEW_2
	var_440_int = 532884; // 0x193f PushI
	SetMessage(var_440_int); // 0x1940 TObjFunc
	ClearReplies(); // 0x1942 TObjFunc
	var_441_int = 532885; // 0x1944 PushI
	var_442_int = 33070; // 0x1945 PushI
	var_443_int = 34374; // 0x1946 PushI
	AddReply(var_441_int, var_442_int, var_443_int); // 0x1947 TObjFunc
	var_444_int = 532886; // 0x1949 PushI
	var_445_int = 34377; // 0x194a PushI
	var_446_int = 34375; // 0x194b PushI
	AddReply(var_444_int, var_445_int, var_446_int); // 0x194c TObjFunc
	return 0; // 0x194e Return
	
Label_6479:
	var_447_int = 34377; // 0x194f PushI
	var_448_bool = var_56_bool == var_447_int; // 0x1950 Eq
	if(var_448_bool == 0) goto Label_6502; // 0x1951 JumpB
	var_449_string = ""; // 0x1952 PushV
	var_449_string = "Neutral"; // 0x1953 MovS
	func_5797(var_57_cvector, var_449_string); // 0x1954 NEW_2
	var_450_int = 532887; // 0x1956 PushI
	SetMessage(var_450_int); // 0x1957 TObjFunc
	ClearReplies(); // 0x1959 TObjFunc
	var_451_int = 532888; // 0x195b PushI
	var_452_int = 34380; // 0x195c PushI
	var_453_int = 34378; // 0x195d PushI
	AddReply(var_451_int, var_452_int, var_453_int); // 0x195e TObjFunc
	var_454_int = 532889; // 0x1960 PushI
	var_455_int = -1; // 0x1961 PushI
	var_456_int = 34379; // 0x1962 PushI
	AddReply(var_454_int, var_455_int, var_456_int); // 0x1963 TObjFunc
	return 0; // 0x1965 Return
	
Label_6502:
	var_457_int = 34380; // 0x1966 PushI
	var_458_bool = var_56_bool == var_457_int; // 0x1967 Eq
	if(var_458_bool == 0) goto Label_6525; // 0x1968 JumpB
	var_459_string = ""; // 0x1969 PushV
	var_459_string = "Neutral"; // 0x196a MovS
	func_5797(var_57_cvector, var_459_string); // 0x196b NEW_2
	var_460_int = 532890; // 0x196d PushI
	SetMessage(var_460_int); // 0x196e TObjFunc
	ClearReplies(); // 0x1970 TObjFunc
	var_461_int = 532891; // 0x1972 PushI
	var_462_int = 33070; // 0x1973 PushI
	var_463_int = 34381; // 0x1974 PushI
	AddReply(var_461_int, var_462_int, var_463_int); // 0x1975 TObjFunc
	var_464_int = 532892; // 0x1977 PushI
	var_465_int = -1; // 0x1978 PushI
	var_466_int = 34382; // 0x1979 PushI
	AddReply(var_464_int, var_465_int, var_466_int); // 0x197a TObjFunc
	return 0; // 0x197c Return
	
Label_6525:
	var_467_int = 33070; // 0x197d PushI
	var_468_bool = var_56_bool == var_467_int; // 0x197e Eq
	if(var_468_bool == 0) goto Label_6548; // 0x197f JumpB
	var_469_string = ""; // 0x1980 PushV
	var_469_string = "Neutral"; // 0x1981 MovS
	func_5797(var_57_cvector, var_469_string); // 0x1982 NEW_2
	var_470_int = 531686; // 0x1984 PushI
	SetMessage(var_470_int); // 0x1985 TObjFunc
	ClearReplies(); // 0x1987 TObjFunc
	var_471_int = 532940; // 0x1989 PushI
	var_472_int = 34430; // 0x198a PushI
	var_473_int = 34429; // 0x198b PushI
	AddReply(var_471_int, var_472_int, var_473_int); // 0x198c TObjFunc
	var_474_int = 532942; // 0x198e PushI
	var_475_int = -1; // 0x198f PushI
	var_476_int = 34431; // 0x1990 PushI
	AddReply(var_474_int, var_475_int, var_476_int); // 0x1991 TObjFunc
	return 0; // 0x1993 Return
	
Label_6548:
	var_477_int = 34430; // 0x1994 PushI
	var_478_bool = var_56_bool == var_477_int; // 0x1995 Eq
	if(var_478_bool == 0) goto Label_6571; // 0x1996 JumpB
	var_479_string = ""; // 0x1997 PushV
	var_479_string = "Gratitude"; // 0x1998 MovS
	func_5797(var_57_cvector, var_479_string); // 0x1999 NEW_2
	var_480_int = 532941; // 0x199b PushI
	SetMessage(var_480_int); // 0x199c TObjFunc
	ClearReplies(); // 0x199e TObjFunc
	var_481_int = 531687; // 0x19a0 PushI
	var_482_int = -1; // 0x19a1 PushI
	var_483_int = 33071; // 0x19a2 PushI
	AddReply(var_481_int, var_482_int, var_483_int); // 0x19a3 TObjFunc
	var_484_int = 532943; // 0x19a5 PushI
	var_485_int = -1; // 0x19a6 PushI
	var_486_int = 34432; // 0x19a7 PushI
	AddReply(var_484_int, var_485_int, var_486_int); // 0x19a8 TObjFunc
	return 0; // 0x19aa Return
	
Label_6571:
	var_3_string = 1; // 0x19ab TMovB
	var_487_bool = 0; // 0x19ac PushV
	func_8086(var_487_bool); // 0x19ad NEW_2
	if(var_487_bool == 0) goto Label_6579; // 0x19af JumpB
	lshStopAnimation(); // 0x19b0 Func
	goto Label_6581; // 0x19b2 Jump
	
Label_6581:
	return 0; // 0x19b5 Return
	
Label_6579:
	StopAnimation(); // 0x19b3 Func
	
Label_6583:
	return 0; // 0x19b7 Return
}


task_17_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_int, var_46_int, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_object, var_53_object, var_54_object, var_55_string, var_56_bool, var_57_cvector)
{
	var_58_int = 1; // 0x1a53 PushI
	if(var_58_int == 0) goto Label_6779; // 0x1a54 JumpB
	func_7845(); // 0x1a56 NEW_2
	var_60_int = 34230; // 0x1a58 PushI
	var_61_bool = var_56_bool == var_60_int; // 0x1a59 Eq
	if(var_61_bool == 0) goto Label_6767; // 0x1a5a JumpB
	var_62_string = ""; // 0x1a5b PushV
	var_62_string = "Neutral"; // 0x1a5c MovS
	func_6716(var_57_cvector, var_62_string); // 0x1a5d NEW_2
	var_79_int = 532759; // 0x1a5f PushI
	SetMessage(var_79_int); // 0x1a60 TObjFunc
	ClearReplies(); // 0x1a62 TObjFunc
	var_80_int = 532760; // 0x1a64 PushI
	var_81_int = -1; // 0x1a65 PushI
	var_82_int = 34231; // 0x1a66 PushI
	AddReply(var_80_int, var_81_int, var_82_int); // 0x1a67 TObjFunc
	var_83_int = 533664; // 0x1a69 PushI
	var_84_int = -1; // 0x1a6a PushI
	var_85_int = 35196; // 0x1a6b PushI
	AddReply(var_83_int, var_84_int, var_85_int); // 0x1a6c TObjFunc
	return 0; // 0x1a6e Return
	
Label_6767:
	var_3_string = 1; // 0x1a6f TMovB
	var_86_bool = 0; // 0x1a70 PushV
	func_8086(var_86_bool); // 0x1a71 NEW_2
	if(var_86_bool == 0) goto Label_6775; // 0x1a73 JumpB
	lshStopAnimation(); // 0x1a74 Func
	goto Label_6777; // 0x1a76 Jump
	
Label_6777:
	return 0; // 0x1a79 Return
	
Label_6775:
	StopAnimation(); // 0x1a77 Func
	
Label_6779:
	return 0; // 0x1a7b Return
}


task_19_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_object, var_46_object, var_47_object, var_48_string, var_49_bool, var_50_int, var_51_int, var_52_object, var_53_object, var_54_object, var_55_string, var_56_bool, var_57_cvector)
{
	var_58_int = 1; // 0x1b23 PushI
	if(var_58_int == 0) goto Label_7038; // 0x1b24 JumpB
	func_7845(); // 0x1b26 NEW_2
	var_60_int = 36971; // 0x1b28 PushI
	var_61_bool = var_56_bool == var_60_int; // 0x1b29 Eq
	if(var_61_bool == 0) goto Label_6980; // 0x1b2a JumpB
	var_62_string = ""; // 0x1b2b PushV
	var_62_string = "Neutral"; // 0x1b2c MovS
	func_6924(var_57_cvector, var_62_string); // 0x1b2d NEW_2
	var_79_int = 535294; // 0x1b2f PushI
	SetMessage(var_79_int); // 0x1b30 TObjFunc
	ClearReplies(); // 0x1b32 TObjFunc
	var_80_int = 535295; // 0x1b34 PushI
	var_81_int = 36973; // 0x1b35 PushI
	var_82_int = 36972; // 0x1b36 PushI
	AddReply(var_80_int, var_81_int, var_82_int); // 0x1b37 TObjFunc
	var_83_int = 535302; // 0x1b39 PushI
	var_84_int = -1; // 0x1b3a PushI
	var_85_int = 36980; // 0x1b3b PushI
	AddReply(var_83_int, var_84_int, var_85_int); // 0x1b3c TObjFunc
	var_86_int = 535303; // 0x1b3e PushI
	var_87_int = -1; // 0x1b3f PushI
	var_88_int = 36981; // 0x1b40 PushI
	AddReply(var_86_int, var_87_int, var_88_int); // 0x1b41 TObjFunc
	return 0; // 0x1b43 Return
	
Label_6980:
	var_89_int = 36973; // 0x1b44 PushI
	var_90_bool = var_56_bool == var_89_int; // 0x1b45 Eq
	if(var_90_bool == 0) goto Label_7003; // 0x1b46 JumpB
	var_91_string = ""; // 0x1b47 PushV
	var_91_string = "Neutral"; // 0x1b48 MovS
	func_6924(var_57_cvector, var_91_string); // 0x1b49 NEW_2
	var_92_int = 535296; // 0x1b4b PushI
	SetMessage(var_92_int); // 0x1b4c TObjFunc
	ClearReplies(); // 0x1b4e TObjFunc
	var_93_int = 535297; // 0x1b50 PushI
	var_94_int = 36975; // 0x1b51 PushI
	var_95_int = 36974; // 0x1b52 PushI
	AddReply(var_93_int, var_94_int, var_95_int); // 0x1b53 TObjFunc
	var_96_int = 535301; // 0x1b55 PushI
	var_97_int = 36975; // 0x1b56 PushI
	var_98_int = 36978; // 0x1b57 PushI
	AddReply(var_96_int, var_97_int, var_98_int); // 0x1b58 TObjFunc
	return 0; // 0x1b5a Return
	
Label_7003:
	var_99_int = 36975; // 0x1b5b PushI
	var_100_bool = var_56_bool == var_99_int; // 0x1b5c Eq
	if(var_100_bool == 0) goto Label_7026; // 0x1b5d JumpB
	var_101_string = ""; // 0x1b5e PushV
	var_101_string = "Neutral"; // 0x1b5f MovS
	func_6924(var_57_cvector, var_101_string); // 0x1b60 NEW_2
	var_102_int = 535298; // 0x1b62 PushI
	SetMessage(var_102_int); // 0x1b63 TObjFunc
	ClearReplies(); // 0x1b65 TObjFunc
	var_103_int = 535299; // 0x1b67 PushI
	var_104_int = -1; // 0x1b68 PushI
	var_105_int = 36976; // 0x1b69 PushI
	AddReply(var_103_int, var_104_int, var_105_int); // 0x1b6a TObjFunc
	var_106_int = 535300; // 0x1b6c PushI
	var_107_int = -1; // 0x1b6d PushI
	var_108_int = 36977; // 0x1b6e PushI
	AddReply(var_106_int, var_107_int, var_108_int); // 0x1b6f TObjFunc
	return 0; // 0x1b71 Return
	
Label_7026:
	var_3_string = 1; // 0x1b72 TMovB
	var_109_bool = 0; // 0x1b73 PushV
	func_8086(var_109_bool); // 0x1b74 NEW_2
	if(var_109_bool == 0) goto Label_7034; // 0x1b76 JumpB
	lshStopAnimation(); // 0x1b77 Func
	goto Label_7036; // 0x1b79 Jump
	
Label_7036:
	return 0; // 0x1b7c Return
	
Label_7034:
	StopAnimation(); // 0x1b7a Func
	
Label_7038:
	return 0; // 0x1b7e Return
}


task_21_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_object, var_46_object, var_47_object, var_48_string, var_49_bool, var_50_object, var_51_object, var_52_object, var_53_string, var_54_bool, var_55_int, var_56_int, var_57_cvector)
{
	var_58_int = 1; // 0x1c21 PushI
	if(var_58_int == 0) goto Label_7241; // 0x1c22 JumpB
	func_7845(); // 0x1c24 NEW_2
	var_60_int = 42551; // 0x1c26 PushI
	var_61_bool = var_56_int == var_60_int; // 0x1c27 Eq
	if(var_61_bool == 0) goto Label_7229; // 0x1c28 JumpB
	var_62_string = ""; // 0x1c29 PushV
	var_62_string = "Neutral"; // 0x1c2a MovS
	func_7178(var_57_cvector, var_62_string); // 0x1c2b NEW_2
	var_79_int = 540542; // 0x1c2d PushI
	SetMessage(var_79_int); // 0x1c2e TObjFunc
	ClearReplies(); // 0x1c30 TObjFunc
	var_80_int = 540543; // 0x1c32 PushI
	var_81_int = -1; // 0x1c33 PushI
	var_82_int = 42552; // 0x1c34 PushI
	AddReply(var_80_int, var_81_int, var_82_int); // 0x1c35 TObjFunc
	var_83_int = 540796; // 0x1c37 PushI
	var_84_int = -1; // 0x1c38 PushI
	var_85_int = 42845; // 0x1c39 PushI
	AddReply(var_83_int, var_84_int, var_85_int); // 0x1c3a TObjFunc
	return 0; // 0x1c3c Return
	
Label_7229:
	var_3_string = 1; // 0x1c3d TMovB
	var_86_bool = 0; // 0x1c3e PushV
	func_8086(var_86_bool); // 0x1c3f NEW_2
	if(var_86_bool == 0) goto Label_7237; // 0x1c41 JumpB
	lshStopAnimation(); // 0x1c42 Func
	goto Label_7239; // 0x1c44 Jump
	
Label_7239:
	return 0; // 0x1c47 Return
	
Label_7237:
	StopAnimation(); // 0x1c45 Func
	
Label_7241:
	return 0; // 0x1c49 Return
}


task_22_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_object, var_46_object, var_47_object, var_48_string, var_49_bool, var_50_object, var_51_object, var_52_object, var_53_string, var_54_bool, var_55_cvector, var_56_int)
{
	var_57_int = 10; // 0x1c97 PushI
	var_58_bool = var_56_int == var_57_int; // 0x1c98 Eq
	if(var_58_bool == 0) goto Label_7355; // 0x1c99 JumpB
	func_7314(); // 0x1c9b NEW_2
	var_60_bool = 0; // 0x1c9d PushV
	var_60_bool = 0; // 0x1c9e MovB
	var_61_bool = 0; // 0x1c9f PushV
	func_7569(var_61_bool); // 0x1ca0 NEW_2
	if(var_61_bool == 0) goto Label_7336; // 0x1ca2 JumpB
	var_64_bool = 0; // 0x1ca3 PushV
	func_7283(var_64_bool); // 0x1ca4 NEW_2
	if(var_64_bool == 0) goto Label_7336; // 0x1ca6 JumpB
	var_60_bool = 1; // 0x1ca7 MovB
	
Label_7336:
	if(var_60_bool == 0) goto Label_7349; // 0x1ca8 JumpB
	var_81_bool = 0; // 0x1ca9 PushV
	func_7263(var_81_bool); // 0x1caa NEW_2
	if(var_81_bool == 0) goto Label_7348; // 0x1cac JumpB
	var_100_bool = 0; var_101_object = Obj(); // 0x1cad PushV
	var_102_object = Obj(); // 0x1cae PushV
	func_7852(var_102_object); // 0x1caf NEW_2
	var_101_object = var_102_object; // 0x1cb0 Mov
	func_7719(var_101_object); // 0x1cb2 NEW_2
	
Label_7348:
	goto Label_7355; // 0x1cb4 Jump
	
Label_7355:
	return 0; // 0x1cbb Return
	
Label_7349:
	func_7278(var_56_int); // 0x1cb6 NEW_2
	func_7305(); // 0x1cb9 NEW_2
}


task_22_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_object, var_46_object, var_47_object, var_48_string, var_49_bool, var_50_object, var_51_object, var_52_object, var_53_string, var_54_bool, var_55_cvector)
{
	func_7496(); // 0x1cbd NEW_2
	func_7314(); // 0x1cc0 NEW_2
	lshStopSpeech(); // 0x1cc2 Func
	lshStopAnimation(); // 0x1cc4 Func
	StopAsync(); // 0x1cc6 Func
	Hold(); // 0x1cc8 Func
	return 0; // 0x1cca Return
}


task_22_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_object, var_46_object, var_47_object, var_48_string, var_49_bool, var_50_object, var_51_object, var_52_object, var_53_string, var_54_bool, var_55_cvector)
{
	StopGroup0(); // 0x1ccb Func
	func_7314(); // 0x1cce NEW_2
	var_57_string = ""; // 0x1cd0 PushV
	var_57_string = "Neutral"; // 0x1cd1 MovS
	func_7799(var_57_string); // 0x1cd2 NEW_2
	func_7305(); // 0x1cd5 NEW_2
	return 0; // 0x1cd7 Return
}


task_22_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_object, var_46_object, var_47_object, var_48_string, var_49_bool, var_50_object, var_51_object, var_52_object, var_53_string, var_54_bool, var_55_cvector, var_56_bool)
{
	var_57_bool = var_56_bool; // 0x1cd9 Push
	if(var_57_bool == 0) goto Label_7391; // 0x1cda JumpB
	func_7305(); // 0x1cdc NEW_2
	goto Label_7395; // 0x1cde Jump
	
Label_7395:
	return 0; // 0x1ce3 Return
	
Label_7391:
	var_63_string = ""; // 0x1cdf PushV
	var_63_string = "Neutral"; // 0x1ce0 MovS
	func_7799(var_63_string); // 0x1ce1 NEW_2
}


task_22_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_object, var_46_object, var_47_object, var_48_string, var_49_bool, var_50_object, var_51_object, var_52_object, var_53_string, var_54_bool, var_55_cvector, var_56_object)
{
	var_57_bool = 0; var_58_bool = 0; // 0x1ce4 PushV
	IsOverrideActive(var_58_bool); // 0x1ce5 Func
	var_59_bool = var_58_bool == 0; // 0x1ce7 Not
	if(var_59_bool == 0) goto Label_7424; // 0x1ce8 JumpB
	EventDisable(0); // 0x1ce9 EventDisable
	func_7496(); // 0x1ceb NEW_2
	var_60_bool = 0; var_61_object = Obj(); // 0x1ced PushV
	var_61_object = var_56_object; // 0x1cee Mov
	func_7560(var_61_object); // 0x1cef NEW_2
	EventEnable(0); // 0x1cf1 EventEnable
	var_74_object = Obj(); // 0x1cf2 PushV
	var_74_object = var_56_object; // 0x1cf3 Mov
	func_9542(var_74_object); // 0x1cf4 NEW_2
	var_1316_string = ""; // 0x1cf6 PushV
	var_1316_string = "Neutral"; // 0x1cf7 MovS
	func_7799(var_1316_string); // 0x1cf8 NEW_2
	func_7314(); // 0x1cfb NEW_2
	func_7305(); // 0x1cfe NEW_2
	
Label_7424:
	return 2; // 0x1d00 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_object, var_46_object, var_47_object, var_48_string, var_49_bool, var_50_object, var_51_object, var_52_object, var_53_string, var_54_bool, var_55_cvector)
{
	var_56_bool = GlobalVars[1]; // 0x1c4a PushGE
	var_56_bool = 0; // 0x1c4b MovB
	GlobalVars[1] = var_56_bool; // 0x1c4c PopGE
	func_7249(var_55_cvector); // 0x1c4e NEW_2
	return 0; // 0x1c50 Return
}


func_0(var_0_object, var_77_int, var_78_object)
{
	var_80_object = Obj(); var_81_bool = 0; var_82_int = 0; var_83_bool = 0; var_84_object = Obj(); var_85_bool = 0; var_86_int = 0; var_87_bool = 0; // 0x0 PushV
	var_0_object = var_78_object; // 0x1 TMov
	var_88_bool = 0; var_89_object = Obj(); var_90_float = 0; // 0x2 PushV
	var_89_object = var_78_object; // 0x3 Mov
	var_90_float = 70.0; // 0x4 MovF
	func_7574(var_89_object, var_90_float); // 0x5 NEW_2
	var_135_bool = var_88_bool == 0; // 0x7 Not
	if(var_135_bool == 0) goto Label_11; // 0x8 JumpB
	var_77_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_84_object); // 0xb Func
	var_136_int = 0; // 0xd PushV
	func_8080(var_136_int); // 0xe NEW_2
	SetNPCName(var_136_int); // 0x10 ObjFunc
	var_137_int = 0; // 0x12 PushV
	func_8078(var_137_int); // 0x13 NEW_2
	SetNPCDescription(var_137_int); // 0x15 ObjFunc
	var_138_string = ""; // 0x17 PushV
	func_8082(var_138_string); // 0x18 NEW_2
	SetPhoto(var_138_string); // 0x1a ObjFunc
	var_139_string = ""; // 0x1c PushV
	func_8084(var_139_string); // 0x1d NEW_2
	SetPhoto2(var_139_string); // 0x1f ObjFunc
	var_140_int = 0; // 0x21 PushV
	func_9525(var_140_int); // 0x22 NEW_2
	SetPlayerName(var_140_int); // 0x24 ObjFunc
	var_86_int = -1; // 0x26 MovI
	IsOverrideActive(var_85_bool); // 0x27 Func
	var_148_bool = var_85_bool; // 0x29 Push
	if(var_148_bool == 0) goto Label_45; // 0x2a JumpB
	var_77_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_84_object); // 0x2d Func
	var_149_bool = 0; var_150_object = Obj(); // 0x2f PushV
	var_151_object = Obj(); // 0x30 PushV
	func_7852(var_151_object); // 0x31 NEW_2
	var_150_object = var_151_object; // 0x32 Mov
	func_7661(var_149_bool, var_150_object); // 0x34 NEW_2
	var_244_object = Obj(); var_245_object = Obj(); // 0x36 PushV
	var_244_object = var_78_object; // 0x37 Mov
	var_245_object = var_84_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_246_object, var_247_object, var_248_string, var_249_bool, var_244_object, var_245_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	IsDialogEnd(var_87_bool); // 0x3d ObjFunc
	
Label_63:
	var_294_bool = var_87_bool == 0; // 0x3f Not
	if(var_294_bool == 0) goto Label_70; // 0x40 JumpB
	sync(); // 0x41 Func
	IsDialogEnd(var_87_bool); // 0x43 ObjFunc
	goto Label_63; // 0x45 Jump
	
Label_70:
	var_295_object = Obj(); // 0x46 PushV
	var_295_object = var_78_object; // 0x47 Mov
	func_7643(); // 0x48 NEW_2
	StopDialog(var_84_object); // 0x4a Func
	GetReturnValue(var_86_int); // 0x4c ObjFunc
	var_77_int = var_86_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_9217(var_1171_bool)
{
	var_1173_int = 0; var_1174_string = ""; // 0x2402 PushV
	var_1174_string = "d7q02"; // 0x2403 MovS
	func_7879(var_1173_int, var_1174_string); // 0x2404 NEW_2
	var_1175_int = 1; // 0x2406 PushI
	var_1176_bool = var_1173_int == var_1175_int; // 0x2407 Eq
	if(var_1176_bool == 0) goto Label_9227; // 0x2408 JumpB
	var_1171_bool = 1; // 0x2409 MovB
	return 0; // 0x240a Return
	
Label_9227:
	var_1171_bool = 0; // 0x240b MovB
	return 0; // 0x240c Return
}


func_6658(var_0_object, var_1_object, var_2_object, var_3_string, var_340_object, var_341_object)
{
	var_0_object = var_341_object; // 0x1a03 TMov
	var_1_object = var_340_object; // 0x1a04 TMov
	var_3_string = 0; // 0x1a05 TMovB
	var_346_int = 1; // 0x1a06 PushI
	if(var_346_int == 0) goto Label_6686; // 0x1a07 JumpB
	var_347_string = ""; // 0x1a08 PushV
	var_347_string = "Neutral"; // 0x1a09 MovS
	func_6716(var_341_object, var_347_string); // 0x1a0a NEW_2
	var_355_int = 532759; // 0x1a0c PushI
	SetMessage(var_355_int); // 0x1a0d TObjFunc
	ClearReplies(); // 0x1a0f TObjFunc
	var_356_int = 532760; // 0x1a11 PushI
	var_357_int = -1; // 0x1a12 PushI
	var_358_int = 34231; // 0x1a13 PushI
	AddReply(var_356_int, var_357_int, var_358_int); // 0x1a14 TObjFunc
	var_359_int = 533664; // 0x1a16 PushI
	var_360_int = -1; // 0x1a17 PushI
	var_361_int = 35196; // 0x1a18 PushI
	AddReply(var_359_int, var_360_int, var_361_int); // 0x1a19 TObjFunc
	goto Label_6686; // 0x1a1b Jump
	
Label_6686:
	var_362_bool = 0; // 0x1a1e PushV
	func_8086(var_362_bool); // 0x1a1f NEW_2
	if(var_362_bool == 0) goto Label_6701; // 0x1a21 JumpB
	
Label_6690:
	lshWaitForAnimEnd(); // 0x1a22 Func
	var_363_string = var_3_string; // 0x1a24 PushT
	if(var_363_string == 0) goto Label_6695; // 0x1a25 JumpB
	goto Label_6700; // 0x1a26 Jump
	
Label_6700:
	goto Label_6715; // 0x1a2c Jump
	
Label_6715:
	return 0; // 0x1a3b Return
	
Label_6695:
	var_364_string = ""; // 0x1a27 PushV
	var_364_string = var_2_object; // 0x1a28 MovT
	func_7799(var_364_string); // 0x1a29 NEW_2
	goto Label_6690; // 0x1a2b Jump
	
Label_6701:
	var_365_string = "all"; // 0x1a2d PushS
	var_366_string = "idle"; // 0x1a2e PushS
	PlayAnimation(var_365_string, var_366_string); // 0x1a2f Func
	
Label_6705:
	WaitForAnimEnd(); // 0x1a31 Func
	var_367_string = var_3_string; // 0x1a33 PushT
	if(var_367_string == 0) goto Label_6710; // 0x1a34 JumpB
	goto Label_6715; // 0x1a35 Jump
	
Label_6710:
	var_368_string = "all"; // 0x1a36 PushS
	var_369_string = "idle"; // 0x1a37 PushS
	PlayAnimation(var_368_string, var_369_string); // 0x1a38 Func
	goto Label_6705; // 0x1a3a Jump
}


func_8200()
{
	var_68_object = Obj(); var_69_object = Obj(); // 0x2008 PushV
	var_70_string = "d2q01"; // 0x2009 PushS
	var_71_int = 1; // 0x200a PushI
	SetVariable(var_70_string, var_71_int); // 0x200b Func
	var_72_object = Obj(); // 0x200d PushV
	func_9475(var_72_object); // 0x200e NEW_2
	var_69_object = var_72_object; // 0x200f Mov
	var_79_string = "d2q01AlexandrGotoAnna"; // 0x2011 PushS
	var_80_string = "pt_map_anna"; // 0x2012 PushS
	var_81_int = 1; // 0x2013 PushI
	var_82_int = 511387; // 0x2014 PushI
	var_83_float = 0; // 0x2015 PushV
	func_8015(var_83_float); // 0x2016 NEW_2
	AddMark(var_79_string, var_80_string, var_81_int, var_82_int, var_83_float); // 0x2018 ObjFunc
	func_9278(); // 0x201b NEW_2
	func_9291(); // 0x201e NEW_2
	return 2; // 0x2020 Return
}


func_7178(var_2_object, var_1291_string)
{
	var_1292_bool = 0; // 0x1c0b PushV
	func_8086(var_1292_bool); // 0x1c0c NEW_2
	var_1293_bool = var_1292_bool == 0; // 0x1c0e Not
	if(var_1293_bool == 0) goto Label_7185; // 0x1c0f JumpB
	return 0; // 0x1c10 Return
	
Label_7185:
	var_1294_bool = var_1291_string == var_2_object; // 0x1c11 Eq
	if(var_1294_bool == 0) goto Label_7188; // 0x1c12 JumpB
	return 0; // 0x1c13 Return
	
Label_7188:
	var_1295_string = ""; var_1296_bool = 0; // 0x1c14 PushV
	var_1295_string = var_1291_string; // 0x1c15 Mov
	var_1297_string = ""; // 0x1c16 PushS
	var_1298_bool = var_1291_string == var_1297_string; // 0x1c17 Eq
	if(var_1298_bool == 0) goto Label_7195; // 0x1c18 JumpB
	var_1296_bool = 0; // 0x1c19 MovB
	goto Label_7196; // 0x1c1a Jump
	
Label_7196:
	func_7815(var_1295_string, var_1296_bool); // 0x1c1c NEW_2
	var_2_object = var_1291_string; // 0x1c1e TMov
	return 0; // 0x1c1f Return
	
Label_7195:
	var_1296_bool = 1; // 0x1c1b MovB
}


func_9229(var_1177_bool)
{
	var_1179_int = 0; var_1180_string = ""; // 0x240e PushV
	var_1180_string = "ood7Alexandr1"; // 0x240f MovS
	func_7879(var_1179_int, var_1180_string); // 0x2410 NEW_2
	var_1181_int = 0; // 0x2412 PushI
	var_1182_bool = var_1179_int == var_1181_int; // 0x2413 Eq
	if(var_1182_bool == 0) goto Label_9239; // 0x2414 JumpB
	var_1177_bool = 1; // 0x2415 MovB
	return 0; // 0x2416 Return
	
Label_9239:
	var_1177_bool = 0; // 0x2417 MovB
	return 0; // 0x2418 Return
}


func_8719()
{
	var_522_string = "d2TalkToAlexandr"; // 0x2210 PushS
	var_523_int = 1; // 0x2211 PushI
	SetVariable(var_522_string, var_523_int); // 0x2212 Func
	return 0; // 0x2214 Return
}


func_8725()
{
	var_70_object = Obj(); var_71_object = Obj(); // 0x2215 PushV
	var_72_object = Obj(); // 0x2216 PushV
	func_9475(var_72_object); // 0x2217 NEW_2
	var_71_object = var_72_object; // 0x2218 Mov
	var_79_string = "d7q02AlexandrGotoPetr"; // 0x221a PushS
	var_80_string = "pt_map_petr"; // 0x221b PushS
	var_81_int = 0; // 0x221c PushI
	var_82_int = 515429; // 0x221d PushI
	var_83_float = 0; // 0x221e PushV
	func_8015(var_83_float); // 0x221f NEW_2
	AddMark(var_79_string, var_80_string, var_81_int, var_82_int, var_83_float); // 0x2221 ObjFunc
	func_9421(); // 0x2224 NEW_2
	return 2; // 0x2226 Return
}


func_9241(var_1074_bool)
{
	var_1076_int = 0; var_1077_string = ""; // 0x241a PushV
	var_1077_string = "microscope_d6q01_lara_blood"; // 0x241b MovS
	func_7879(var_1076_int, var_1077_string); // 0x241c NEW_2
	var_1078_int = 0; // 0x241e PushI
	var_1079_bool = var_1076_int != var_1078_int; // 0x241f Neq
	if(var_1079_bool == 0) goto Label_9251; // 0x2420 JumpB
	var_1074_bool = 1; // 0x2421 MovB
	return 0; // 0x2422 Return
	
Label_9251:
	var_1074_bool = 0; // 0x2423 MovB
	return 0; // 0x2424 Return
}


func_8226()
{
	func_9317(); // 0x2024 NEW_2
	var_171_bool = 0; var_172_string = ""; var_173_string = ""; // 0x2026 PushV
	var_172_string = "quest_d2_01"; // 0x2027 MovS
	var_173_string = "completed"; // 0x2028 MovS
	func_8003(var_171_bool, var_172_string, var_173_string); // 0x2029 NEW_2
	return 0; // 0x202b Return
}


func_3619(var_0_object, var_777_int, var_778_object)
{
	var_780_object = Obj(); var_781_bool = 0; var_782_int = 0; var_783_bool = 0; var_784_object = Obj(); var_785_bool = 0; var_786_int = 0; var_787_bool = 0; // 0xe23 PushV
	var_0_object = var_778_object; // 0xe24 TMov
	var_788_bool = 0; var_789_object = Obj(); var_790_float = 0; // 0xe25 PushV
	var_789_object = var_778_object; // 0xe26 Mov
	var_790_float = 70.0; // 0xe27 MovF
	func_7574(var_789_object, var_790_float); // 0xe28 NEW_2
	var_791_bool = var_788_bool == 0; // 0xe2a Not
	if(var_791_bool == 0) goto Label_3630; // 0xe2b JumpB
	var_777_int = -2; // 0xe2c MovI
	return 8; // 0xe2d Return
	
Label_3630:
	CreateDialog(var_784_object); // 0xe2e Func
	var_792_int = 0; // 0xe30 PushV
	func_8080(var_792_int); // 0xe31 NEW_2
	SetNPCName(var_792_int); // 0xe33 ObjFunc
	var_793_int = 0; // 0xe35 PushV
	func_8078(var_793_int); // 0xe36 NEW_2
	SetNPCDescription(var_793_int); // 0xe38 ObjFunc
	var_794_string = ""; // 0xe3a PushV
	func_8082(var_794_string); // 0xe3b NEW_2
	SetPhoto(var_794_string); // 0xe3d ObjFunc
	var_795_string = ""; // 0xe3f PushV
	func_8084(var_795_string); // 0xe40 NEW_2
	SetPhoto2(var_795_string); // 0xe42 ObjFunc
	var_796_int = 0; // 0xe44 PushV
	func_9525(var_796_int); // 0xe45 NEW_2
	SetPlayerName(var_796_int); // 0xe47 ObjFunc
	var_786_int = -1; // 0xe49 MovI
	IsOverrideActive(var_785_bool); // 0xe4a Func
	var_797_bool = var_785_bool; // 0xe4c Push
	if(var_797_bool == 0) goto Label_3664; // 0xe4d JumpB
	var_777_int = -2; // 0xe4e MovI
	return 8; // 0xe4f Return
	
Label_3664:
	DoDialog(var_784_object); // 0xe50 Func
	var_798_bool = 0; var_799_object = Obj(); // 0xe52 PushV
	var_800_object = Obj(); // 0xe53 PushV
	func_7852(var_800_object); // 0xe54 NEW_2
	var_799_object = var_800_object; // 0xe55 Mov
	func_7661(var_798_bool, var_799_object); // 0xe57 NEW_2
	var_801_object = Obj(); var_802_object = Obj(); // 0xe59 PushV
	var_801_object = var_778_object; // 0xe5a Mov
	var_802_object = var_784_object; // 0xe5b Mov
	TaskCall(9); // 0xe5c TaskCall
	func_3700(var_803_object, var_804_object, var_805_string, var_806_bool, var_801_object, var_802_object); // 0xe5d NEW_2
	TaskReturn(); // 0xe5e TaskReturn
	IsDialogEnd(var_787_bool); // 0xe60 ObjFunc
	
Label_3682:
	var_887_bool = var_787_bool == 0; // 0xe62 Not
	if(var_887_bool == 0) goto Label_3689; // 0xe63 JumpB
	sync(); // 0xe64 Func
	IsDialogEnd(var_787_bool); // 0xe66 ObjFunc
	goto Label_3682; // 0xe68 Jump
	
Label_3689:
	var_888_object = Obj(); // 0xe69 PushV
	var_888_object = var_778_object; // 0xe6a Mov
	func_7643(); // 0xe6b NEW_2
	StopDialog(var_784_object); // 0xe6d Func
	GetReturnValue(var_786_int); // 0xe6f ObjFunc
	var_777_int = var_786_int; // 0xe71 Mov
	return 8; // 0xe72 Return
}


func_9253(var_1094_bool)
{
	var_1096_int = 0; var_1097_string = ""; // 0x2426 PushV
	var_1097_string = "microscope_d6q01_julia_blood"; // 0x2427 MovS
	func_7879(var_1096_int, var_1097_string); // 0x2428 NEW_2
	var_1098_int = 0; // 0x242a PushI
	var_1099_bool = var_1096_int != var_1098_int; // 0x242b Neq
	if(var_1099_bool == 0) goto Label_9263; // 0x242c JumpB
	var_1094_bool = 1; // 0x242d MovB
	return 0; // 0x242e Return
	
Label_9263:
	var_1094_bool = 0; // 0x242f MovB
	return 0; // 0x2430 Return
}


func_7719(var_160_bool)
{
	var_162_string = ""; var_163_int = 0; var_164_bool = 0; var_165_int = 0; var_166_string = ""; var_167_string = ""; var_168_int = 0; var_169_bool = 0; var_170_int = 0; var_171_string = ""; // 0x1e27 PushV
	var_167_string = "c"; // 0x1e28 MovS
	var_168_int = 0; // 0x1e29 MovI
	
Label_7722:
	var_172_int = 1; // 0x1e2a PushI
	if(var_172_int == 0) goto Label_7735; // 0x1e2b JumpB
	var_173_int = 1; // 0x1e2c PushI
	var_174_int = var_168_int + var_173_int; // 0x1e2d Add
	var_175_int = var_167_string + var_174_int; // 0x1e2e Add
	HasProperty(var_175_int, var_169_bool); // 0x1e2f ObjFunc
	var_176_bool = var_169_bool == 0; // 0x1e31 Not
	if(var_176_bool == 0) goto Label_7732; // 0x1e32 JumpB
	goto Label_7735; // 0x1e33 Jump
	
Label_7735:
	var_177_bool = var_168_int == 0; // 0x1e37 Not
	if(var_177_bool == 0) goto Label_7739; // 0x1e38 JumpB
	var_160_bool = 0; // 0x1e39 MovB
	return 10; // 0x1e3a Return
	
Label_7739:
	var_170_int = 0; // 0x1e3b MovI
	var_178_int = 1; // 0x1e3c PushI
	var_179_bool = var_168_int > var_178_int; // 0x1e3d GT
	if(var_179_bool == 0) goto Label_7745; // 0x1e3e JumpB
	irand(var_170_int, var_168_int); // 0x1e3f Func
	
Label_7745:
	var_180_int = 1; // 0x1e41 PushI
	var_181_int = var_170_int + var_180_int; // 0x1e42 Add
	var_182_int = var_167_string + var_181_int; // 0x1e43 Add
	GetProperty(var_182_int, var_171_string); // 0x1e44 ObjFunc
	var_183_bool = 0; var_184_string = ""; // 0x1e46 PushV
	var_184_string = var_171_string; // 0x1e47 Mov
	func_7830(var_183_bool, var_184_string); // 0x1e48 NEW_2
	var_160_bool = var_183_bool; // 0x1e49 Mov
	return 10; // 0x1e4b Return
	
Label_7732:
	var_189_int = 1; // 0x1e34 PushI
	var_168_int = var_168_int + var_189_int; // 0x1e35 Add2
	goto Label_7722; // 0x1e36 Jump
}


func_5672(var_0_object, var_1_object, var_2_object, var_3_string, var_399_object, var_400_object)
{
	var_0_object = var_400_object; // 0x1629 TMov
	var_1_object = var_399_object; // 0x162a TMov
	var_3_string = 0; // 0x162b TMovB
	var_405_int = 1; // 0x162c PushI
	if(var_405_int == 0) goto Label_5767; // 0x162d JumpB
	var_406_string = ""; // 0x162e PushV
	var_406_string = "Neutral"; // 0x162f MovS
	func_5797(var_400_object, var_406_string); // 0x1630 NEW_2
	var_414_int = 531684; // 0x1632 PushI
	SetMessage(var_414_int); // 0x1633 TObjFunc
	ClearReplies(); // 0x1635 TObjFunc
	var_415_bool = 0; var_416_object = Obj(); // 0x1637 PushV
	var_416_object = var_1_object; // 0x1638 MovT
	func_9073(var_416_object); // 0x1639 NEW_2
	if(var_415_bool == 0) goto Label_5697; // 0x163b JumpB
	var_423_int = 531685; // 0x163c PushI
	var_424_int = 34364; // 0x163d PushI
	var_425_int = 33069; // 0x163e PushI
	AddReply(var_423_int, var_424_int, var_425_int); // 0x163f TObjFunc
	
Label_5697:
	var_426_bool = 0; // 0x1641 PushV
	var_426_bool = 0; // 0x1642 MovB
	var_427_bool = 0; var_428_object = Obj(); // 0x1643 PushV
	var_428_object = var_1_object; // 0x1644 MovT
	func_8756(var_428_object); // 0x1645 NEW_2
	var_433_bool = var_427_bool == 0; // 0x1647 Not
	if(var_433_bool == 0) goto Label_5711; // 0x1648 JumpB
	var_434_bool = 0; var_435_object = Obj(); // 0x1649 PushV
	var_435_object = var_1_object; // 0x164a MovT
	func_8768(var_435_object); // 0x164b NEW_2
	if(var_434_bool == 0) goto Label_5711; // 0x164d JumpB
	var_426_bool = 1; // 0x164e MovB
	
Label_5711:
	if(var_426_bool == 0) goto Label_5717; // 0x164f JumpB
	var_440_int = 531689; // 0x1650 PushI
	var_441_int = 34386; // 0x1651 PushI
	var_442_int = 33073; // 0x1652 PushI
	AddReply(var_440_int, var_441_int, var_442_int); // 0x1653 TObjFunc
	
Label_5717:
	var_443_bool = 0; // 0x1655 PushV
	var_443_bool = 1; // 0x1656 MovB
	var_444_bool = 0; // 0x1657 PushV
	var_444_bool = 0; // 0x1658 MovB
	var_445_bool = 0; var_446_object = Obj(); // 0x1659 PushV
	var_446_object = var_1_object; // 0x165a MovT
	func_8780(var_446_object); // 0x165b NEW_2
	if(var_445_bool == 0) goto Label_5732; // 0x165d JumpB
	var_451_bool = 0; var_452_object = Obj(); // 0x165e PushV
	var_452_object = var_1_object; // 0x165f MovT
	func_9073(var_452_object); // 0x1660 NEW_2
	if(var_451_bool == 0) goto Label_5732; // 0x1662 JumpB
	var_444_bool = 1; // 0x1663 MovB
	
Label_5732:
	if(var_444_bool == 0) goto Label_5748; // 0x1664 JumpB
	var_453_bool = 0; // 0x1665 PushV
	var_453_bool = 0; // 0x1666 MovB
	var_454_bool = 0; var_455_object = Obj(); // 0x1667 PushV
	var_455_object = var_1_object; // 0x1668 MovT
	func_8744(var_455_object); // 0x1669 NEW_2
	if(var_454_bool == 0) goto Label_5746; // 0x166b JumpB
	var_460_bool = 0; var_461_object = Obj(); // 0x166c PushV
	var_461_object = var_1_object; // 0x166d MovT
	func_8780(var_461_object); // 0x166e NEW_2
	if(var_460_bool == 0) goto Label_5746; // 0x1670 JumpB
	var_453_bool = 1; // 0x1671 MovB
	
Label_5746:
	if(var_453_bool == 0) goto Label_5748; // 0x1672 JumpB
	var_443_bool = 0; // 0x1673 MovB
	
Label_5748:
	if(var_443_bool == 0) goto Label_5754; // 0x1674 JumpB
	var_462_int = 532923; // 0x1675 PushI
	var_463_int = 34411; // 0x1676 PushI
	var_464_int = 34410; // 0x1677 PushI
	AddReply(var_462_int, var_463_int, var_464_int); // 0x1678 TObjFunc
	
Label_5754:
	var_465_int = 531688; // 0x167a PushI
	var_466_int = -1; // 0x167b PushI
	var_467_int = 33072; // 0x167c PushI
	AddReply(var_465_int, var_466_int, var_467_int); // 0x167d TObjFunc
	var_468_int = 532874; // 0x167f PushI
	var_469_int = -1; // 0x1680 PushI
	var_470_int = 34363; // 0x1681 PushI
	AddReply(var_468_int, var_469_int, var_470_int); // 0x1682 TObjFunc
	goto Label_5767; // 0x1684 Jump
	
Label_5767:
	var_471_bool = 0; // 0x1687 PushV
	func_8086(var_471_bool); // 0x1688 NEW_2
	if(var_471_bool == 0) goto Label_5782; // 0x168a JumpB
	
Label_5771:
	lshWaitForAnimEnd(); // 0x168b Func
	var_472_string = var_3_string; // 0x168d PushT
	if(var_472_string == 0) goto Label_5776; // 0x168e JumpB
	goto Label_5781; // 0x168f Jump
	
Label_5781:
	goto Label_5796; // 0x1695 Jump
	
Label_5796:
	return 0; // 0x16a4 Return
	
Label_5776:
	var_473_string = ""; // 0x1690 PushV
	var_473_string = var_2_object; // 0x1691 MovT
	func_7799(var_473_string); // 0x1692 NEW_2
	goto Label_5771; // 0x1694 Jump
	
Label_5782:
	var_474_string = "all"; // 0x1696 PushS
	var_475_string = "idle"; // 0x1697 PushS
	PlayAnimation(var_474_string, var_475_string); // 0x1698 Func
	
Label_5786:
	WaitForAnimEnd(); // 0x169a Func
	var_476_string = var_3_string; // 0x169c PushT
	if(var_476_string == 0) goto Label_5791; // 0x169d JumpB
	goto Label_5796; // 0x169e Jump
	
Label_5791:
	var_477_string = "all"; // 0x169f PushS
	var_478_string = "idle"; // 0x16a0 PushS
	PlayAnimation(var_477_string, var_478_string); // 0x16a1 Func
	goto Label_5786; // 0x16a3 Jump
}


func_8744(var_454_bool)
{
	var_456_int = 0; var_457_string = ""; // 0x2229 PushV
	var_457_string = "d1q01"; // 0x222a MovS
	func_7879(var_456_int, var_457_string); // 0x222b NEW_2
	var_458_int = 4; // 0x222d PushI
	var_459_bool = var_456_int == var_458_int; // 0x222e Eq
	if(var_459_bool == 0) goto Label_8754; // 0x222f JumpB
	var_454_bool = 1; // 0x2230 MovB
	return 0; // 0x2231 Return
	
Label_8754:
	var_454_bool = 0; // 0x2232 MovB
	return 0; // 0x2233 Return
}


func_8236()
{
	var_233_object = Obj(); var_234_object = Obj(); // 0x202c PushV
	var_235_string = "d2q01"; // 0x202d PushS
	var_236_int = 6; // 0x202e PushI
	SetVariable(var_235_string, var_236_int); // 0x202f Func
	var_237_object = Obj(); // 0x2031 PushV
	func_9475(var_237_object); // 0x2032 NEW_2
	var_234_object = var_237_object; // 0x2033 Mov
	var_238_string = "d2q01AlexandrGotoBigVlad"; // 0x2035 PushS
	var_239_string = "pt_map_bigvlad"; // 0x2036 PushS
	var_240_int = 1; // 0x2037 PushI
	var_241_int = 511390; // 0x2038 PushI
	var_242_float = 0; // 0x2039 PushV
	func_8015(var_242_float); // 0x203a NEW_2
	AddMark(var_238_string, var_239_string, var_240_int, var_241_int, var_242_float); // 0x203c ObjFunc
	var_243_string = "d2q01AlexandrGotoGeorg"; // 0x203e PushS
	var_244_string = "pt_map_georg"; // 0x203f PushS
	var_245_int = 1; // 0x2040 PushI
	var_246_int = 511391; // 0x2041 PushI
	var_247_float = 0; // 0x2042 PushV
	func_8015(var_247_float); // 0x2043 NEW_2
	AddMark(var_243_string, var_244_string, var_245_int, var_246_int, var_247_float); // 0x2045 ObjFunc
	func_9304(); // 0x2048 NEW_2
	return 2; // 0x204a Return
}


func_9265()
{
	var_82_object = Obj(); var_83_object = Obj(); // 0x2431 PushV
	var_84_int = 34; // 0x2432 PushI
	var_85_int = 1; // 0x2433 PushI
	var_86_int = 512116; // 0x2434 PushI
	CreateDiaryEntry(var_83_object, var_84_int, var_85_int, var_86_int); // 0x2435 Func
	var_87_bool = 0; var_88_object = Obj(); var_89_int = 0; // 0x2437 PushV
	var_88_object = var_83_object; // 0x2438 Mov
	var_89_int = 2; // 0x2439 MovI
	func_9447(var_87_bool, var_88_object, var_89_int); // 0x243a NEW_2
	return 2; // 0x243c Return
}


func_8756(var_427_bool)
{
	var_429_int = 0; var_430_string = ""; // 0x2235 PushV
	var_430_string = "cutscene_burn_d1"; // 0x2236 MovS
	func_7879(var_429_int, var_430_string); // 0x2237 NEW_2
	var_431_int = 0; // 0x2239 PushI
	var_432_bool = var_429_int != var_431_int; // 0x223a Neq
	if(var_432_bool == 0) goto Label_8766; // 0x223b JumpB
	var_427_bool = 1; // 0x223c MovB
	return 0; // 0x223d Return
	
Label_8766:
	var_427_bool = 0; // 0x223e MovB
	return 0; // 0x223f Return
}


func_6716(var_2_object, var_347_string)
{
	var_348_bool = 0; // 0x1a3d PushV
	func_8086(var_348_bool); // 0x1a3e NEW_2
	var_349_bool = var_348_bool == 0; // 0x1a40 Not
	if(var_349_bool == 0) goto Label_6723; // 0x1a41 JumpB
	return 0; // 0x1a42 Return
	
Label_6723:
	var_350_bool = var_347_string == var_2_object; // 0x1a43 Eq
	if(var_350_bool == 0) goto Label_6726; // 0x1a44 JumpB
	return 0; // 0x1a45 Return
	
Label_6726:
	var_351_string = ""; var_352_bool = 0; // 0x1a46 PushV
	var_351_string = var_347_string; // 0x1a47 Mov
	var_353_string = ""; // 0x1a48 PushS
	var_354_bool = var_347_string == var_353_string; // 0x1a49 Eq
	if(var_354_bool == 0) goto Label_6733; // 0x1a4a JumpB
	var_352_bool = 0; // 0x1a4b MovB
	goto Label_6734; // 0x1a4c Jump
	
Label_6734:
	func_7815(var_351_string, var_352_bool); // 0x1a4e NEW_2
	var_2_object = var_347_string; // 0x1a50 TMov
	return 0; // 0x1a51 Return
	
Label_6733:
	var_352_bool = 1; // 0x1a4d MovB
}


func_9278()
{
	var_86_object = Obj(); var_87_object = Obj(); // 0x243e PushV
	var_88_int = 10; // 0x243f PushI
	var_89_int = 1; // 0x2440 PushI
	var_90_int = 503081; // 0x2441 PushI
	CreateDiaryEntry(var_87_object, var_88_int, var_89_int, var_90_int); // 0x2442 Func
	var_91_bool = 0; var_92_object = Obj(); var_93_int = 0; // 0x2444 PushV
	var_92_object = var_87_object; // 0x2445 Mov
	var_93_int = -1; // 0x2446 MovI
	func_9447(var_91_bool, var_92_object, var_93_int); // 0x2447 NEW_2
	return 2; // 0x2449 Return
}


func_8768(var_434_bool)
{
	var_436_int = 0; var_437_string = ""; // 0x2241 PushV
	var_437_string = "ood1Alexandr1"; // 0x2242 MovS
	func_7879(var_436_int, var_437_string); // 0x2243 NEW_2
	var_438_int = 0; // 0x2245 PushI
	var_439_bool = var_436_int == var_438_int; // 0x2246 Eq
	if(var_439_bool == 0) goto Label_8778; // 0x2247 JumpB
	var_434_bool = 1; // 0x2248 MovB
	return 0; // 0x2249 Return
	
Label_8778:
	var_434_bool = 0; // 0x224a MovB
	return 0; // 0x224b Return
}


func_5194(var_0_object, var_1_object, var_2_object, var_3_string, var_1154_object, var_1155_object)
{
	var_0_object = var_1155_object; // 0x144b TMov
	var_1_object = var_1154_object; // 0x144c TMov
	var_3_string = 0; // 0x144d TMovB
	var_1160_int = 1; // 0x144e PushI
	if(var_1160_int == 0) goto Label_5236; // 0x144f JumpB
	var_1161_string = ""; // 0x1450 PushV
	var_1161_string = "Neutral"; // 0x1451 MovS
	func_5266(var_1155_object, var_1161_string); // 0x1452 NEW_2
	var_1169_int = 512203; // 0x1454 PushI
	SetMessage(var_1169_int); // 0x1455 TObjFunc
	ClearReplies(); // 0x1457 TObjFunc
	var_1170_bool = 0; // 0x1459 PushV
	var_1170_bool = 0; // 0x145a MovB
	var_1171_bool = 0; var_1172_object = Obj(); // 0x145b PushV
	var_1172_object = var_1_object; // 0x145c MovT
	func_9217(var_1172_object); // 0x145d NEW_2
	if(var_1171_bool == 0) goto Label_5222; // 0x145f JumpB
	var_1177_bool = 0; var_1178_object = Obj(); // 0x1460 PushV
	var_1178_object = var_1_object; // 0x1461 MovT
	func_9229(var_1178_object); // 0x1462 NEW_2
	if(var_1177_bool == 0) goto Label_5222; // 0x1464 JumpB
	var_1170_bool = 1; // 0x1465 MovB
	
Label_5222:
	if(var_1170_bool == 0) goto Label_5228; // 0x1466 JumpB
	var_1183_int = 513340; // 0x1467 PushI
	var_1184_int = 14573; // 0x1468 PushI
	var_1185_int = 14572; // 0x1469 PushI
	AddReply(var_1183_int, var_1184_int, var_1185_int); // 0x146a TObjFunc
	
Label_5228:
	var_1186_int = 512204; // 0x146c PushI
	var_1187_int = -1; // 0x146d PushI
	var_1188_int = 13359; // 0x146e PushI
	AddReply(var_1186_int, var_1187_int, var_1188_int); // 0x146f TObjFunc
	goto Label_5236; // 0x1471 Jump
	
Label_5236:
	var_1189_bool = 0; // 0x1474 PushV
	func_8086(var_1189_bool); // 0x1475 NEW_2
	if(var_1189_bool == 0) goto Label_5251; // 0x1477 JumpB
	
Label_5240:
	lshWaitForAnimEnd(); // 0x1478 Func
	var_1190_string = var_3_string; // 0x147a PushT
	if(var_1190_string == 0) goto Label_5245; // 0x147b JumpB
	goto Label_5250; // 0x147c Jump
	
Label_5250:
	goto Label_5265; // 0x1482 Jump
	
Label_5265:
	return 0; // 0x1491 Return
	
Label_5245:
	var_1191_string = ""; // 0x147d PushV
	var_1191_string = var_2_object; // 0x147e MovT
	func_7799(var_1191_string); // 0x147f NEW_2
	goto Label_5240; // 0x1481 Jump
	
Label_5251:
	var_1192_string = "all"; // 0x1483 PushS
	var_1193_string = "idle"; // 0x1484 PushS
	PlayAnimation(var_1192_string, var_1193_string); // 0x1485 Func
	
Label_5255:
	WaitForAnimEnd(); // 0x1487 Func
	var_1194_string = var_3_string; // 0x1489 PushT
	if(var_1194_string == 0) goto Label_5260; // 0x148a JumpB
	goto Label_5265; // 0x148b Jump
	
Label_5260:
	var_1195_string = "all"; // 0x148c PushS
	var_1196_string = "idle"; // 0x148d PushS
	PlayAnimation(var_1195_string, var_1196_string); // 0x148e Func
	goto Label_5255; // 0x1490 Jump
}


func_9291()
{
	var_109_object = Obj(); var_110_object = Obj(); // 0x244b PushV
	var_111_int = 50; // 0x244c PushI
	var_112_int = 1; // 0x244d PushI
	var_113_int = 512132; // 0x244e PushI
	CreateDiaryEntry(var_110_object, var_111_int, var_112_int, var_113_int); // 0x244f Func
	var_114_bool = 0; var_115_object = Obj(); var_116_int = 0; // 0x2451 PushV
	var_115_object = var_110_object; // 0x2452 Mov
	var_116_int = 10; // 0x2453 MovI
	func_9447(var_114_bool, var_115_object, var_116_int); // 0x2454 NEW_2
	return 2; // 0x2456 Return
}


func_8268(var_243_object)
{
	var_245_string = "money 5000 is given"; // 0x204d PushS
	Trace(var_245_string); // 0x204e Func
	var_246_object = Obj(); var_247_int = 0; // 0x2050 PushV
	var_246_object = var_243_object; // 0x2051 Mov
	var_247_int = 5000; // 0x2052 MovI
	func_7907(var_246_object, var_247_int); // 0x2053 NEW_2
	return 0; // 0x2055 Return
}


func_8780(var_445_bool)
{
	var_447_int = 0; var_448_string = ""; // 0x224d PushV
	var_448_string = "ood1Alexandr2"; // 0x224e MovS
	func_7879(var_447_int, var_448_string); // 0x224f NEW_2
	var_449_int = 0; // 0x2251 PushI
	var_450_bool = var_447_int == var_449_int; // 0x2252 Eq
	if(var_450_bool == 0) goto Label_8790; // 0x2253 JumpB
	var_445_bool = 1; // 0x2254 MovB
	return 0; // 0x2255 Return
	
Label_8790:
	var_445_bool = 0; // 0x2256 MovB
	return 0; // 0x2257 Return
}


func_7756(var_191_bool)
{
	var_193_string = ""; var_194_int = 0; var_195_bool = 0; var_196_int = 0; var_197_string = ""; var_198_string = ""; var_199_int = 0; var_200_bool = 0; var_201_int = 0; var_202_string = ""; // 0x1e4c PushV
	var_203_string = "d"; // 0x1e4d PushS
	var_204_int = 0; // 0x1e4e PushV
	func_8020(var_204_int); // 0x1e4f NEW_2
	var_210_int = var_203_string + var_204_int; // 0x1e51 Add
	var_211_string = "m"; // 0x1e52 PushS
	var_198_string = var_210_int + var_211_string; // 0x1e53 Add2
	var_199_int = 0; // 0x1e54 MovI
	
Label_7765:
	var_212_int = 1; // 0x1e55 PushI
	if(var_212_int == 0) goto Label_7778; // 0x1e56 JumpB
	var_213_int = 1; // 0x1e57 PushI
	var_214_int = var_199_int + var_213_int; // 0x1e58 Add
	var_215_int = var_198_string + var_214_int; // 0x1e59 Add
	HasProperty(var_215_int, var_200_bool); // 0x1e5a ObjFunc
	var_216_bool = var_200_bool == 0; // 0x1e5c Not
	if(var_216_bool == 0) goto Label_7775; // 0x1e5d JumpB
	goto Label_7778; // 0x1e5e Jump
	
Label_7778:
	var_217_bool = var_199_int == 0; // 0x1e62 Not
	if(var_217_bool == 0) goto Label_7782; // 0x1e63 JumpB
	var_191_bool = 0; // 0x1e64 MovB
	return 10; // 0x1e65 Return
	
Label_7782:
	var_201_int = 0; // 0x1e66 MovI
	var_218_int = 1; // 0x1e67 PushI
	var_219_bool = var_199_int > var_218_int; // 0x1e68 GT
	if(var_219_bool == 0) goto Label_7788; // 0x1e69 JumpB
	irand(var_201_int, var_199_int); // 0x1e6a Func
	
Label_7788:
	var_220_int = 1; // 0x1e6c PushI
	var_221_int = var_201_int + var_220_int; // 0x1e6d Add
	var_222_int = var_198_string + var_221_int; // 0x1e6e Add
	GetProperty(var_222_int, var_202_string); // 0x1e6f ObjFunc
	var_223_bool = 0; var_224_string = ""; // 0x1e71 PushV
	var_224_string = var_202_string; // 0x1e72 Mov
	func_7830(var_223_bool, var_224_string); // 0x1e73 NEW_2
	var_191_bool = var_223_bool; // 0x1e74 Mov
	return 10; // 0x1e76 Return
	
Label_7775:
	var_225_int = 1; // 0x1e5f PushI
	var_199_int = var_199_int + var_225_int; // 0x1e60 Add2
	goto Label_7765; // 0x1e61 Jump
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_244_object, var_245_object)
{
	var_0_object = var_245_object; // 0x52 TMov
	var_1_object = var_244_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_250_int = 1; // 0x55 PushI
	if(var_250_int == 0) goto Label_109; // 0x56 JumpB
	var_251_object = Obj(); var_252_object = Obj(); // 0x57 PushV
	var_251_object = var_1_object; // 0x58 MovT
	var_252_object = var_0_object; // 0x59 MovT
	func_8676(); // 0x5a NEW_2
	var_255_string = ""; // 0x5c PushV
	var_255_string = "Neutral"; // 0x5d MovS
	func_139(var_245_object, var_255_string); // 0x5e NEW_2
	var_272_int = 500287; // 0x60 PushI
	SetMessage(var_272_int); // 0x61 TObjFunc
	ClearReplies(); // 0x63 TObjFunc
	var_273_int = 532871; // 0x65 PushI
	var_274_int = 34360; // 0x66 PushI
	var_275_int = 34359; // 0x67 PushI
	AddReply(var_273_int, var_274_int, var_275_int); // 0x68 TObjFunc
	goto Label_109; // 0x6a Jump
	
Label_109:
	var_276_bool = 0; // 0x6d PushV
	func_8086(var_276_bool); // 0x6e NEW_2
	if(var_276_bool == 0) goto Label_124; // 0x70 JumpB
	
Label_113:
	lshWaitForAnimEnd(); // 0x71 Func
	var_277_string = var_3_string; // 0x73 PushT
	if(var_277_string == 0) goto Label_118; // 0x74 JumpB
	goto Label_123; // 0x75 Jump
	
Label_123:
	goto Label_138; // 0x7b Jump
	
Label_138:
	return 0; // 0x8a Return
	
Label_118:
	var_278_string = ""; // 0x76 PushV
	var_278_string = var_2_object; // 0x77 MovT
	func_7799(var_278_string); // 0x78 NEW_2
	goto Label_113; // 0x7a Jump
	
Label_124:
	var_289_string = "all"; // 0x7c PushS
	var_290_string = "idle"; // 0x7d PushS
	PlayAnimation(var_289_string, var_290_string); // 0x7e Func
	
Label_128:
	WaitForAnimEnd(); // 0x80 Func
	var_291_string = var_3_string; // 0x82 PushT
	if(var_291_string == 0) goto Label_133; // 0x83 JumpB
	goto Label_138; // 0x84 Jump
	
Label_133:
	var_292_string = "all"; // 0x85 PushS
	var_293_string = "idle"; // 0x86 PushS
	PlayAnimation(var_292_string, var_293_string); // 0x87 Func
	goto Label_128; // 0x89 Jump
}


func_7249(var_0_object)
{
	var_57_bool = 0; // 0x1c51 PushV
	func_7569(var_57_bool); // 0x1c52 NEW_2
	var_60_bool = var_57_bool == 0; // 0x1c54 Not
	if(var_60_bool == 0) goto Label_7256; // 0x1c55 JumpB
	Hold(); // 0x1c56 Func
	
Label_7256:
	GetDirection(var_0_object); // 0x1c58 Func
	
Label_7258:
	func_7425(); // 0x1c5b NEW_2
	goto Label_7258; // 0x1c5d Jump
}


func_8278()
{
	var_119_object = Obj(); var_120_string = ""; var_121_float = 0; // 0x2057 PushV
	var_122_object = Obj(); // 0x2058 PushV
	func_9475(var_122_object); // 0x2059 NEW_2
	var_119_object = var_122_object; // 0x205a Mov
	var_120_string = "pt_map_anna"; // 0x205c MovS
	var_121_float = 2; // 0x205d MovI
	func_9492(var_119_object, var_120_string, var_121_float); // 0x205e NEW_2
	var_142_object = Obj(); // 0x2060 PushV
	func_9475(var_142_object); // 0x2061 NEW_2
	ShowMap(var_142_object); // 0x2063 ObjFunc
	return 0; // 0x2065 Return
}


func_8792(var_514_bool)
{
	var_516_int = 0; var_517_string = ""; // 0x2259 PushV
	var_517_string = "ood2Alexandr1"; // 0x225a MovS
	func_7879(var_516_int, var_517_string); // 0x225b NEW_2
	var_518_int = 0; // 0x225d PushI
	var_519_bool = var_516_int == var_518_int; // 0x225e Eq
	if(var_519_bool == 0) goto Label_8802; // 0x225f JumpB
	var_514_bool = 1; // 0x2260 MovB
	return 0; // 0x2261 Return
	
Label_8802:
	var_514_bool = 0; // 0x2262 MovB
	return 0; // 0x2263 Return
}


func_9304()
{
	var_248_object = Obj(); var_249_object = Obj(); // 0x2458 PushV
	var_250_int = 55; // 0x2459 PushI
	var_251_int = 1; // 0x245a PushI
	var_252_int = 512137; // 0x245b PushI
	CreateDiaryEntry(var_249_object, var_250_int, var_251_int, var_252_int); // 0x245c Func
	var_253_bool = 0; var_254_object = Obj(); var_255_int = 0; // 0x245e PushV
	var_254_object = var_249_object; // 0x245f Mov
	var_255_int = 10; // 0x2460 MovI
	func_9447(var_253_bool, var_254_object, var_255_int); // 0x2461 NEW_2
	return 2; // 0x2463 Return
}


func_7263(var_81_bool)
{
	var_82_object = Obj(); var_83_object = Obj(); // 0x1c5f PushV
	var_84_string = "player"; // 0x1c60 PushS
	FindActor(var_83_object, var_84_string); // 0x1c61 Func
	var_85_bool = var_83_object == 0; // 0x1c63 Not
	if(var_85_bool == 0) goto Label_7271; // 0x1c64 JumpB
	var_81_bool = 0; // 0x1c65 MovB
	return 2; // 0x1c66 Return
	
Label_7271:
	var_86_bool = 0; var_87_object = Obj(); // 0x1c67 PushV
	var_87_object = var_83_object; // 0x1c68 Mov
	func_7560(var_87_object); // 0x1c69 NEW_2
	var_81_bool = var_86_bool; // 0x1c6a Mov
	return 2; // 0x1c6c Return
}


func_8804(var_549_bool)
{
	var_551_int = 0; var_552_string = ""; // 0x2265 PushV
	var_552_string = "ood2Alexandr2"; // 0x2266 MovS
	func_7879(var_551_int, var_552_string); // 0x2267 NEW_2
	var_553_int = 0; // 0x2269 PushI
	var_554_bool = var_551_int == var_553_int; // 0x226a Eq
	if(var_554_bool == 0) goto Label_8814; // 0x226b JumpB
	var_549_bool = 1; // 0x226c MovB
	return 0; // 0x226d Return
	
Label_8814:
	var_549_bool = 0; // 0x226e MovB
	return 0; // 0x226f Return
}


func_9317()
{
	var_163_object = Obj(); var_164_object = Obj(); // 0x2465 PushV
	var_165_int = 56; // 0x2466 PushI
	var_166_int = 1; // 0x2467 PushI
	var_167_int = 512138; // 0x2468 PushI
	CreateDiaryEntry(var_164_object, var_165_int, var_166_int, var_167_int); // 0x2469 Func
	var_168_bool = 0; var_169_object = Obj(); var_170_int = 0; // 0x246b PushV
	var_169_object = var_164_object; // 0x246c Mov
	var_170_int = 10; // 0x246d MovI
	func_9447(var_168_bool, var_169_object, var_170_int); // 0x246e NEW_2
	return 2; // 0x2470 Return
}


func_8294()
{
	var_107_object = Obj(); var_108_string = ""; var_109_float = 0; // 0x2067 PushV
	var_110_object = Obj(); // 0x2068 PushV
	func_9475(var_110_object); // 0x2069 NEW_2
	var_107_object = var_110_object; // 0x206a Mov
	var_108_string = "pt_map_julia"; // 0x206c MovS
	var_109_float = 2; // 0x206d MovI
	func_9492(var_107_object, var_108_string, var_109_float); // 0x206e NEW_2
	var_130_object = Obj(); // 0x2070 PushV
	func_9475(var_130_object); // 0x2071 NEW_2
	ShowMap(var_130_object); // 0x2073 ObjFunc
	return 0; // 0x2075 Return
}


func_7278(var_0_object)
{
	var_133_float = GetByIndex(var_0_object, 0); // 0x1c6e PushE
	var_134_float = GetByIndex(var_0_object, 2); // 0x1c6f PushE
	RotateAsync(var_133_float, var_134_float); // 0x1c70 Func
	return 0; // 0x1c72 Return
}


func_8816(var_581_bool)
{
	var_583_int = 0; var_584_string = ""; // 0x2271 PushV
	var_584_string = "ood2Alexandr3"; // 0x2272 MovS
	func_7879(var_583_int, var_584_string); // 0x2273 NEW_2
	var_585_int = 0; // 0x2275 PushI
	var_586_bool = var_583_int == var_585_int; // 0x2276 Eq
	if(var_586_bool == 0) goto Label_8826; // 0x2277 JumpB
	var_581_bool = 1; // 0x2278 MovB
	return 0; // 0x2279 Return
	
Label_8826:
	var_581_bool = 0; // 0x227a MovB
	return 0; // 0x227b Return
}


func_9330()
{
	var_64_object = Obj(); var_65_object = Obj(); // 0x2472 PushV
	var_66_int = 73; // 0x2473 PushI
	var_67_int = 1; // 0x2474 PushI
	var_68_int = 512155; // 0x2475 PushI
	CreateDiaryEntry(var_65_object, var_66_int, var_67_int, var_68_int); // 0x2476 Func
	var_69_bool = 0; var_70_object = Obj(); var_71_int = 0; // 0x2478 PushV
	var_70_object = var_65_object; // 0x2479 Mov
	var_71_int = 25; // 0x247a MovI
	func_9447(var_69_bool, var_70_object, var_71_int); // 0x247b NEW_2
	return 2; // 0x247d Return
}


func_7283(var_64_bool)
{
	var_65_object = Obj(); var_66_bool = 0; var_67_object = Obj(); var_68_bool = 0; // 0x1c73 PushV
	var_69_string = "player"; // 0x1c74 PushS
	FindActor(var_67_object, var_69_string); // 0x1c75 Func
	var_70_bool = var_67_object == 0; // 0x1c77 Not
	if(var_70_bool == 0) goto Label_7291; // 0x1c78 JumpB
	var_64_bool = 0; // 0x1c79 MovB
	return 4; // 0x1c7a Return
	
Label_7291:
	var_71_float = 0; var_72_object = Obj(); // 0x1c7b PushV
	var_72_object = var_67_object; // 0x1c7c Mov
	func_7501(var_72_object); // 0x1c7d NEW_2
	var_79_float = 90000.0; // 0x1c7f PushF
	var_80_bool = var_71_float > var_79_float; // 0x1c80 GT
	if(var_80_bool == 0) goto Label_7300; // 0x1c81 JumpB
	var_64_bool = 0; // 0x1c82 MovB
	return 4; // 0x1c83 Return
	
Label_7300:
	CanSee(var_68_bool, var_67_object); // 0x1c84 Func
	var_64_bool = var_68_bool; // 0x1c86 Mov
	return 4; // 0x1c87 Return
}


func_3700(var_0_object, var_1_object, var_2_object, var_3_string, var_801_object, var_802_object)
{
	var_0_object = var_802_object; // 0xe75 TMov
	var_1_object = var_801_object; // 0xe76 TMov
	var_3_string = 0; // 0xe77 TMovB
	var_807_int = 1; // 0xe78 PushI
	if(var_807_int == 0) goto Label_3801; // 0xe79 JumpB
	var_808_bool = 0; var_809_object = Obj(); // 0xe7a PushV
	var_809_object = var_1_object; // 0xe7b MovT
	func_8977(var_809_object); // 0xe7c NEW_2
	if(var_808_bool == 0) goto Label_3736; // 0xe7e JumpB
	var_814_object = Obj(); var_815_object = Obj(); // 0xe7f PushV
	var_814_object = var_1_object; // 0xe80 MovT
	var_815_object = var_0_object; // 0xe81 MovT
	func_8122(); // 0xe82 NEW_2
	var_818_string = ""; // 0xe84 PushV
	var_818_string = "Neutral"; // 0xe85 MovS
	func_3831(var_802_object, var_818_string); // 0xe86 NEW_2
	var_826_int = 511175; // 0xe88 PushI
	SetMessage(var_826_int); // 0xe89 TObjFunc
	ClearReplies(); // 0xe8b TObjFunc
	var_827_int = 511176; // 0xe8d PushI
	var_828_int = 12361; // 0xe8e PushI
	var_829_int = 12360; // 0xe8f PushI
	AddReply(var_827_int, var_828_int, var_829_int); // 0xe90 TObjFunc
	var_830_int = 511178; // 0xe92 PushI
	var_831_int = 12366; // 0xe93 PushI
	var_832_int = 12362; // 0xe94 PushI
	AddReply(var_830_int, var_831_int, var_832_int); // 0xe95 TObjFunc
	goto Label_3801; // 0xe97 Jump
	
Label_3801:
	var_833_bool = 0; // 0xed9 PushV
	func_8086(var_833_bool); // 0xeda NEW_2
	if(var_833_bool == 0) goto Label_3816; // 0xedc JumpB
	
Label_3805:
	lshWaitForAnimEnd(); // 0xedd Func
	var_834_string = var_3_string; // 0xedf PushT
	if(var_834_string == 0) goto Label_3810; // 0xee0 JumpB
	goto Label_3815; // 0xee1 Jump
	
Label_3815:
	goto Label_3830; // 0xee7 Jump
	
Label_3830:
	return 0; // 0xef6 Return
	
Label_3810:
	var_835_string = ""; // 0xee2 PushV
	var_835_string = var_2_object; // 0xee3 MovT
	func_7799(var_835_string); // 0xee4 NEW_2
	goto Label_3805; // 0xee6 Jump
	
Label_3816:
	var_836_string = "all"; // 0xee8 PushS
	var_837_string = "idle"; // 0xee9 PushS
	PlayAnimation(var_836_string, var_837_string); // 0xeea Func
	
Label_3820:
	WaitForAnimEnd(); // 0xeec Func
	var_838_string = var_3_string; // 0xeee PushT
	if(var_838_string == 0) goto Label_3825; // 0xeef JumpB
	goto Label_3830; // 0xef0 Jump
	
Label_3825:
	var_839_string = "all"; // 0xef1 PushS
	var_840_string = "idle"; // 0xef2 PushS
	PlayAnimation(var_839_string, var_840_string); // 0xef3 Func
	goto Label_3820; // 0xef5 Jump
	
Label_3736:
	var_841_string = ""; // 0xe98 PushV
	var_841_string = "Neutral"; // 0xe99 MovS
	func_3831(var_802_object, var_841_string); // 0xe9a NEW_2
	var_842_int = 511164; // 0xe9c PushI
	SetMessage(var_842_int); // 0xe9d TObjFunc
	ClearReplies(); // 0xe9f TObjFunc
	var_843_bool = 0; var_844_object = Obj(); // 0xea1 PushV
	var_844_object = var_1_object; // 0xea2 MovT
	func_8989(var_844_object); // 0xea3 NEW_2
	if(var_843_bool == 0) goto Label_3755; // 0xea5 JumpB
	var_849_int = 511489; // 0xea6 PushI
	var_850_int = 12692; // 0xea7 PushI
	var_851_int = 12691; // 0xea8 PushI
	AddReply(var_849_int, var_850_int, var_851_int); // 0xea9 TObjFunc
	
Label_3755:
	var_852_bool = 0; // 0xeab PushV
	var_852_bool = 0; // 0xeac MovB
	var_853_bool = 0; var_854_object = Obj(); // 0xead PushV
	var_854_object = var_1_object; // 0xeae MovT
	func_9001(var_854_object); // 0xeaf NEW_2
	if(var_853_bool == 0) goto Label_3768; // 0xeb1 JumpB
	var_859_bool = 0; var_860_object = Obj(); // 0xeb2 PushV
	var_860_object = var_1_object; // 0xeb3 MovT
	func_9013(var_860_object); // 0xeb4 NEW_2
	if(var_859_bool == 0) goto Label_3768; // 0xeb6 JumpB
	var_852_bool = 1; // 0xeb7 MovB
	
Label_3768:
	if(var_852_bool == 0) goto Label_3774; // 0xeb8 JumpB
	var_865_int = 511187; // 0xeb9 PushI
	var_866_int = 12373; // 0xeba PushI
	var_867_int = 12372; // 0xebb PushI
	AddReply(var_865_int, var_866_int, var_867_int); // 0xebc TObjFunc
	
Label_3774:
	var_868_bool = 0; // 0xebe PushV
	var_868_bool = 0; // 0xebf MovB
	var_869_bool = 0; var_870_object = Obj(); // 0xec0 PushV
	var_870_object = var_1_object; // 0xec1 MovT
	func_9025(var_870_object); // 0xec2 NEW_2
	if(var_869_bool == 0) goto Label_3787; // 0xec4 JumpB
	var_875_bool = 0; var_876_object = Obj(); // 0xec5 PushV
	var_876_object = var_1_object; // 0xec6 MovT
	func_9037(var_876_object); // 0xec7 NEW_2
	if(var_875_bool == 0) goto Label_3787; // 0xec9 JumpB
	var_868_bool = 1; // 0xeca MovB
	
Label_3787:
	if(var_868_bool == 0) goto Label_3793; // 0xecb JumpB
	var_881_int = 511495; // 0xecc PushI
	var_882_int = 12697; // 0xecd PushI
	var_883_int = 12696; // 0xece PushI
	AddReply(var_881_int, var_882_int, var_883_int); // 0xecf TObjFunc
	
Label_3793:
	var_884_int = 511174; // 0xed1 PushI
	var_885_int = -1; // 0xed2 PushI
	var_886_int = 12358; // 0xed3 PushI
	AddReply(var_884_int, var_885_int, var_886_int); // 0xed4 TObjFunc
	goto Label_3801; // 0xed6 Jump
}


func_8310()
{
	var_84_string = "playsound"; // 0x2077 PushS
	var_85_string = "mapmark"; // 0x2078 PushS
	TriggerWorld(var_84_string, var_85_string); // 0x2079 Func
	return 0; // 0x207b Return
}


func_7799(var_278_string)
{
	var_279_bool = 0; var_280_float = 0; var_281_float = 0; var_282_bool = 0; var_283_float = 0; var_284_float = 0; // 0x1e77 PushV
	lshHasAnimation(var_282_bool, var_278_string); // 0x1e78 Func
	var_285_bool = var_282_bool; // 0x1e7a Push
	if(var_285_bool == 0) goto Label_7810; // 0x1e7b JumpB
	lshGetAnimTimes(var_278_string, var_283_float, var_284_float); // 0x1e7c Func
	var_286_bool = 0; // 0x1e7e PushB
	lshPlayAnimation(var_283_float, var_284_float, var_286_bool); // 0x1e7f Func
	goto Label_7814; // 0x1e81 Jump
	
Label_7814:
	return 6; // 0x1e86 Return
	
Label_7810:
	var_287_string = "Can't find lsh animation : "; // 0x1e82 PushS
	var_288_int = var_287_string + var_278_string; // 0x1e83 Add
	Trace(var_288_int); // 0x1e84 Func
}


func_8828(var_635_bool)
{
	var_637_int = 0; var_638_string = ""; // 0x227d PushV
	var_638_string = "ood2Alexandr5"; // 0x227e MovS
	func_7879(var_637_int, var_638_string); // 0x227f NEW_2
	var_639_int = 0; // 0x2281 PushI
	var_640_bool = var_637_int == var_639_int; // 0x2282 Eq
	if(var_640_bool == 0) goto Label_8838; // 0x2283 JumpB
	var_635_bool = 1; // 0x2284 MovB
	return 0; // 0x2285 Return
	
Label_8838:
	var_635_bool = 0; // 0x2286 MovB
	return 0; // 0x2287 Return
}


func_6780(var_0_object, var_1201_int, var_1202_object)
{
	var_1204_object = Obj(); var_1205_bool = 0; var_1206_int = 0; var_1207_bool = 0; var_1208_object = Obj(); var_1209_bool = 0; var_1210_int = 0; var_1211_bool = 0; // 0x1a7c PushV
	var_0_object = var_1202_object; // 0x1a7d TMov
	var_1212_bool = 0; var_1213_object = Obj(); var_1214_float = 0; // 0x1a7e PushV
	var_1213_object = var_1202_object; // 0x1a7f Mov
	var_1214_float = 70.0; // 0x1a80 MovF
	func_7574(var_1213_object, var_1214_float); // 0x1a81 NEW_2
	var_1215_bool = var_1212_bool == 0; // 0x1a83 Not
	if(var_1215_bool == 0) goto Label_6791; // 0x1a84 JumpB
	var_1201_int = -2; // 0x1a85 MovI
	return 8; // 0x1a86 Return
	
Label_6791:
	CreateDialog(var_1208_object); // 0x1a87 Func
	var_1216_int = 0; // 0x1a89 PushV
	func_8080(var_1216_int); // 0x1a8a NEW_2
	SetNPCName(var_1216_int); // 0x1a8c ObjFunc
	var_1217_int = 0; // 0x1a8e PushV
	func_8078(var_1217_int); // 0x1a8f NEW_2
	SetNPCDescription(var_1217_int); // 0x1a91 ObjFunc
	var_1218_string = ""; // 0x1a93 PushV
	func_8082(var_1218_string); // 0x1a94 NEW_2
	SetPhoto(var_1218_string); // 0x1a96 ObjFunc
	var_1219_string = ""; // 0x1a98 PushV
	func_8084(var_1219_string); // 0x1a99 NEW_2
	SetPhoto2(var_1219_string); // 0x1a9b ObjFunc
	var_1220_int = 0; // 0x1a9d PushV
	func_9525(var_1220_int); // 0x1a9e NEW_2
	SetPlayerName(var_1220_int); // 0x1aa0 ObjFunc
	var_1210_int = -1; // 0x1aa2 MovI
	IsOverrideActive(var_1209_bool); // 0x1aa3 Func
	var_1221_bool = var_1209_bool; // 0x1aa5 Push
	if(var_1221_bool == 0) goto Label_6825; // 0x1aa6 JumpB
	var_1201_int = -2; // 0x1aa7 MovI
	return 8; // 0x1aa8 Return
	
Label_6825:
	DoDialog(var_1208_object); // 0x1aa9 Func
	var_1222_bool = 0; var_1223_object = Obj(); // 0x1aab PushV
	var_1224_object = Obj(); // 0x1aac PushV
	func_7852(var_1224_object); // 0x1aad NEW_2
	var_1223_object = var_1224_object; // 0x1aae Mov
	func_7661(var_1222_bool, var_1223_object); // 0x1ab0 NEW_2
	var_1225_object = Obj(); var_1226_object = Obj(); // 0x1ab2 PushV
	var_1225_object = var_1202_object; // 0x1ab3 Mov
	var_1226_object = var_1208_object; // 0x1ab4 Mov
	TaskCall(19); // 0x1ab5 TaskCall
	func_6861(var_1227_object, var_1228_object, var_1229_string, var_1230_bool, var_1225_object, var_1226_object); // 0x1ab6 NEW_2
	TaskReturn(); // 0x1ab7 TaskReturn
	IsDialogEnd(var_1211_bool); // 0x1ab9 ObjFunc
	
Label_6843:
	var_1258_bool = var_1211_bool == 0; // 0x1abb Not
	if(var_1258_bool == 0) goto Label_6850; // 0x1abc JumpB
	sync(); // 0x1abd Func
	IsDialogEnd(var_1211_bool); // 0x1abf ObjFunc
	goto Label_6843; // 0x1ac1 Jump
	
Label_6850:
	var_1259_object = Obj(); // 0x1ac2 PushV
	var_1259_object = var_1202_object; // 0x1ac3 Mov
	func_7643(); // 0x1ac4 NEW_2
	StopDialog(var_1208_object); // 0x1ac6 Func
	GetReturnValue(var_1210_int); // 0x1ac8 ObjFunc
	var_1201_int = var_1210_int; // 0x1aca Mov
	return 8; // 0x1acb Return
}


func_8316()
{
	var_139_object = Obj(); var_140_string = ""; var_141_float = 0; // 0x207d PushV
	var_142_object = Obj(); // 0x207e PushV
	func_9475(var_142_object); // 0x207f NEW_2
	var_139_object = var_142_object; // 0x2080 Mov
	var_140_string = "pt_map_ospina"; // 0x2082 MovS
	var_141_float = 2; // 0x2083 MovI
	func_9492(var_139_object, var_140_string, var_141_float); // 0x2084 NEW_2
	var_162_object = Obj(); // 0x2086 PushV
	func_9475(var_162_object); // 0x2087 NEW_2
	ShowMap(var_162_object); // 0x2089 ObjFunc
	return 0; // 0x208b Return
}


func_9343()
{
	var_125_object = Obj(); var_126_object = Obj(); // 0x247f PushV
	var_127_int = 69; // 0x2480 PushI
	var_128_int = 1; // 0x2481 PushI
	var_129_int = 512151; // 0x2482 PushI
	CreateDiaryEntry(var_126_object, var_127_int, var_128_int, var_129_int); // 0x2483 Func
	var_130_bool = 0; var_131_object = Obj(); var_132_int = 0; // 0x2485 PushV
	var_131_object = var_126_object; // 0x2486 Mov
	var_132_int = 25; // 0x2487 MovI
	func_9447(var_130_bool, var_131_object, var_132_int); // 0x2488 NEW_2
	return 2; // 0x248a Return
}


func_2693(var_0_object, var_651_int, var_652_object)
{
	var_654_object = Obj(); var_655_bool = 0; var_656_int = 0; var_657_bool = 0; var_658_object = Obj(); var_659_bool = 0; var_660_int = 0; var_661_bool = 0; // 0xa85 PushV
	var_0_object = var_652_object; // 0xa86 TMov
	var_662_bool = 0; var_663_object = Obj(); var_664_float = 0; // 0xa87 PushV
	var_663_object = var_652_object; // 0xa88 Mov
	var_664_float = 70.0; // 0xa89 MovF
	func_7574(var_663_object, var_664_float); // 0xa8a NEW_2
	var_665_bool = var_662_bool == 0; // 0xa8c Not
	if(var_665_bool == 0) goto Label_2704; // 0xa8d JumpB
	var_651_int = -2; // 0xa8e MovI
	return 8; // 0xa8f Return
	
Label_2704:
	CreateDialog(var_658_object); // 0xa90 Func
	var_666_int = 0; // 0xa92 PushV
	func_8080(var_666_int); // 0xa93 NEW_2
	SetNPCName(var_666_int); // 0xa95 ObjFunc
	var_667_int = 0; // 0xa97 PushV
	func_8078(var_667_int); // 0xa98 NEW_2
	SetNPCDescription(var_667_int); // 0xa9a ObjFunc
	var_668_string = ""; // 0xa9c PushV
	func_8082(var_668_string); // 0xa9d NEW_2
	SetPhoto(var_668_string); // 0xa9f ObjFunc
	var_669_string = ""; // 0xaa1 PushV
	func_8084(var_669_string); // 0xaa2 NEW_2
	SetPhoto2(var_669_string); // 0xaa4 ObjFunc
	var_670_int = 0; // 0xaa6 PushV
	func_9525(var_670_int); // 0xaa7 NEW_2
	SetPlayerName(var_670_int); // 0xaa9 ObjFunc
	var_660_int = -1; // 0xaab MovI
	IsOverrideActive(var_659_bool); // 0xaac Func
	var_671_bool = var_659_bool; // 0xaae Push
	if(var_671_bool == 0) goto Label_2738; // 0xaaf JumpB
	var_651_int = -2; // 0xab0 MovI
	return 8; // 0xab1 Return
	
Label_2738:
	DoDialog(var_658_object); // 0xab2 Func
	var_672_bool = 0; var_673_object = Obj(); // 0xab4 PushV
	var_674_object = Obj(); // 0xab5 PushV
	func_7852(var_674_object); // 0xab6 NEW_2
	var_673_object = var_674_object; // 0xab7 Mov
	func_7661(var_672_bool, var_673_object); // 0xab9 NEW_2
	var_675_object = Obj(); var_676_object = Obj(); // 0xabb PushV
	var_675_object = var_652_object; // 0xabc Mov
	var_676_object = var_658_object; // 0xabd Mov
	TaskCall(7); // 0xabe TaskCall
	func_2774(var_677_object, var_678_object, var_679_string, var_680_bool, var_675_object, var_676_object); // 0xabf NEW_2
	TaskReturn(); // 0xac0 TaskReturn
	IsDialogEnd(var_661_bool); // 0xac2 ObjFunc
	
Label_2756:
	var_773_bool = var_661_bool == 0; // 0xac4 Not
	if(var_773_bool == 0) goto Label_2763; // 0xac5 JumpB
	sync(); // 0xac6 Func
	IsDialogEnd(var_661_bool); // 0xac8 ObjFunc
	goto Label_2756; // 0xaca Jump
	
Label_2763:
	var_774_object = Obj(); // 0xacb PushV
	var_774_object = var_652_object; // 0xacc Mov
	func_7643(); // 0xacd NEW_2
	StopDialog(var_658_object); // 0xacf Func
	GetReturnValue(var_660_int); // 0xad1 ObjFunc
	var_651_int = var_660_int; // 0xad3 Mov
	return 8; // 0xad4 Return
}


func_7815(var_259_string, var_260_bool)
{
	var_263_bool = 0; var_264_float = 0; var_265_float = 0; var_266_bool = 0; var_267_float = 0; var_268_float = 0; // 0x1e87 PushV
	lshHasAnimation(var_266_bool, var_259_string); // 0x1e88 Func
	var_269_bool = var_266_bool; // 0x1e8a Push
	if(var_269_bool == 0) goto Label_7825; // 0x1e8b JumpB
	lshGetAnimTimes(var_259_string, var_267_float, var_268_float); // 0x1e8c Func
	lshPlayAnimation(var_267_float, var_268_float, var_260_bool); // 0x1e8e Func
	goto Label_7829; // 0x1e90 Jump
	
Label_7829:
	return 6; // 0x1e95 Return
	
Label_7825:
	var_270_string = "Can't find lsh animation : "; // 0x1e91 PushS
	var_271_int = var_270_string + var_259_string; // 0x1e92 Add
	Trace(var_271_int); // 0x1e93 Func
}


func_8840(var_626_bool)
{
	var_628_int = 0; var_629_string = ""; // 0x2289 PushV
	var_629_string = "d2q01"; // 0x228a MovS
	func_7879(var_628_int, var_629_string); // 0x228b NEW_2
	var_630_int = 0; // 0x228d PushI
	var_631_bool = var_628_int == var_630_int; // 0x228e Eq
	if(var_631_bool == 0) goto Label_8850; // 0x228f JumpB
	var_626_bool = 1; // 0x2290 MovB
	return 0; // 0x2291 Return
	
Label_8850:
	var_626_bool = 0; // 0x2292 MovB
	return 0; // 0x2293 Return
}


func_7305()
{
	var_1318_float = 0; var_1319_float = 0; // 0x1c89 PushV
	var_1320_int = 8; // 0x1c8a PushI
	var_1321_int = 16; // 0x1c8b PushI
	rand(var_1319_float, var_1320_int, var_1321_int); // 0x1c8c Func
	var_1322_int = 10; // 0x1c8e PushI
	SetTimer(var_1322_int, var_1319_float); // 0x1c8f Func
	return 2; // 0x1c91 Return
}


func_139(var_2_object, var_255_string)
{
	var_256_bool = 0; // 0x8c PushV
	func_8086(var_256_bool); // 0x8d NEW_2
	var_257_bool = var_256_bool == 0; // 0x8f Not
	if(var_257_bool == 0) goto Label_146; // 0x90 JumpB
	return 0; // 0x91 Return
	
Label_146:
	var_258_bool = var_255_string == var_2_object; // 0x92 Eq
	if(var_258_bool == 0) goto Label_149; // 0x93 JumpB
	return 0; // 0x94 Return
	
Label_149:
	var_259_string = ""; var_260_bool = 0; // 0x95 PushV
	var_259_string = var_255_string; // 0x96 Mov
	var_261_string = ""; // 0x97 PushS
	var_262_bool = var_255_string == var_261_string; // 0x98 Eq
	if(var_262_bool == 0) goto Label_156; // 0x99 JumpB
	var_260_bool = 0; // 0x9a MovB
	goto Label_157; // 0x9b Jump
	
Label_157:
	func_7815(var_259_string, var_260_bool); // 0x9d NEW_2
	var_2_object = var_255_string; // 0x9f TMov
	return 0; // 0xa0 Return
	
Label_156:
	var_260_bool = 1; // 0x9c MovB
}


func_8332()
{
	var_167_string = "ood3Alexandr1"; // 0x208d PushS
	var_168_int = 1; // 0x208e PushI
	SetVariable(var_167_string, var_168_int); // 0x208f Func
	return 0; // 0x2091 Return
}


func_9356()
{
	var_84_object = Obj(); var_85_object = Obj(); // 0x248c PushV
	var_86_int = 22; // 0x248d PushI
	var_87_int = 2; // 0x248e PushI
	var_88_int = 503362; // 0x248f PushI
	CreateDiaryEntry(var_85_object, var_86_int, var_87_int, var_88_int); // 0x2490 Func
	var_89_bool = 0; var_90_object = Obj(); var_91_int = 0; // 0x2492 PushV
	var_90_object = var_85_object; // 0x2493 Mov
	var_91_int = -1; // 0x2494 MovI
	func_9447(var_89_bool, var_90_object, var_91_int); // 0x2495 NEW_2
	return 2; // 0x2497 Return
}


func_8338()
{
	var_99_string = "ood3Alexandr2"; // 0x2093 PushS
	var_100_int = 1; // 0x2094 PushI
	SetVariable(var_99_string, var_100_int); // 0x2095 Func
	return 0; // 0x2097 Return
}


func_5266(var_2_object, var_1161_string)
{
	var_1162_bool = 0; // 0x1493 PushV
	func_8086(var_1162_bool); // 0x1494 NEW_2
	var_1163_bool = var_1162_bool == 0; // 0x1496 Not
	if(var_1163_bool == 0) goto Label_5273; // 0x1497 JumpB
	return 0; // 0x1498 Return
	
Label_5273:
	var_1164_bool = var_1161_string == var_2_object; // 0x1499 Eq
	if(var_1164_bool == 0) goto Label_5276; // 0x149a JumpB
	return 0; // 0x149b Return
	
Label_5276:
	var_1165_string = ""; var_1166_bool = 0; // 0x149c PushV
	var_1165_string = var_1161_string; // 0x149d Mov
	var_1167_string = ""; // 0x149e PushS
	var_1168_bool = var_1161_string == var_1167_string; // 0x149f Eq
	if(var_1168_bool == 0) goto Label_5283; // 0x14a0 JumpB
	var_1166_bool = 0; // 0x14a1 MovB
	goto Label_5284; // 0x14a2 Jump
	
Label_5284:
	func_7815(var_1165_string, var_1166_bool); // 0x14a4 NEW_2
	var_2_object = var_1161_string; // 0x14a6 TMov
	return 0; // 0x14a7 Return
	
Label_5283:
	var_1166_bool = 1; // 0x14a3 MovB
}


func_8852(var_587_bool)
{
	var_589_int = 0; var_590_string = ""; // 0x2295 PushV
	var_590_string = "d2q01"; // 0x2296 MovS
	func_7879(var_589_int, var_590_string); // 0x2297 NEW_2
	var_591_int = 5; // 0x2299 PushI
	var_592_bool = var_589_int == var_591_int; // 0x229a Eq
	if(var_592_bool == 0) goto Label_8862; // 0x229b JumpB
	var_587_bool = 1; // 0x229c MovB
	return 0; // 0x229d Return
	
Label_8862:
	var_587_bool = 0; // 0x229e MovB
	return 0; // 0x229f Return
}


func_7314()
{
	var_1317_int = 10; // 0x1c92 PushI
	KillTimer(var_1317_int); // 0x1c93 Func
	return 0; // 0x1c95 Return
}


func_7830(var_183_bool, var_184_string)
{
	var_185_bool = 0; var_186_bool = 0; // 0x1e96 PushV
	var_187_bool = 0; // 0x1e97 PushV
	func_8086(var_187_bool); // 0x1e98 NEW_2
	if(var_187_bool == 0) goto Label_7843; // 0x1e9a JumpB
	lshHasSpeech(var_186_bool, var_184_string); // 0x1e9b Func
	var_188_bool = var_186_bool; // 0x1e9d Push
	if(var_188_bool == 0) goto Label_7843; // 0x1e9e JumpB
	lshPlaySpeech(var_184_string); // 0x1e9f Func
	var_183_bool = 1; // 0x1ea1 MovB
	return 2; // 0x1ea2 Return
	
Label_7843:
	var_183_bool = 0; // 0x1ea3 MovB
	return 2; // 0x1ea4 Return
}


func_8344()
{
	var_135_string = "ood3Alexandr3"; // 0x2099 PushS
	var_136_int = 1; // 0x209a PushI
	SetVariable(var_135_string, var_136_int); // 0x209b Func
	return 0; // 0x209d Return
}


func_9369()
{
	var_107_object = Obj(); var_108_object = Obj(); // 0x2499 PushV
	var_109_int = 96; // 0x249a PushI
	var_110_int = 2; // 0x249b PushI
	var_111_int = 512178; // 0x249c PushI
	CreateDiaryEntry(var_108_object, var_109_int, var_110_int, var_111_int); // 0x249d Func
	var_112_bool = 0; var_113_object = Obj(); var_114_int = 0; // 0x249f PushV
	var_113_object = var_108_object; // 0x24a0 Mov
	var_114_int = 22; // 0x24a1 MovI
	func_9447(var_112_bool, var_113_object, var_114_int); // 0x24a2 NEW_2
	return 2; // 0x24a4 Return
}


func_8350()
{
	var_697_string = "ood3Alexandr4"; // 0x209f PushS
	var_698_int = 1; // 0x20a0 PushI
	SetVariable(var_697_string, var_698_int); // 0x20a1 Func
	return 0; // 0x20a3 Return
}


func_8864(var_555_bool)
{
	var_555_bool = 1; // 0x22a1 MovB
	return 0; // 0x22a2 Return
}


func_8356()
{
	var_107_object = Obj(); var_108_object = Obj(); // 0x20a4 PushV
	var_109_string = "d3q01"; // 0x20a5 PushS
	var_110_int = 2; // 0x20a6 PushI
	SetVariable(var_109_string, var_110_int); // 0x20a7 Func
	var_111_object = Obj(); // 0x20a9 PushV
	func_9475(var_111_object); // 0x20aa NEW_2
	var_108_object = var_111_object; // 0x20ab Mov
	var_118_string = "d3q01AlexandrGotoOspina"; // 0x20ad PushS
	var_119_string = "pt_map_ospina"; // 0x20ae PushS
	var_120_int = 1; // 0x20af PushI
	var_121_int = 511148; // 0x20b0 PushI
	var_122_float = 0; // 0x20b1 PushV
	func_8015(var_122_float); // 0x20b2 NEW_2
	AddMark(var_118_string, var_119_string, var_120_int, var_121_int, var_122_float); // 0x20b4 ObjFunc
	func_9343(); // 0x20b7 NEW_2
	return 2; // 0x20b9 Return
}


func_7845()
{
	var_59_bool = 0; // 0x1ea5 PushV
	func_8086(var_59_bool); // 0x1ea6 NEW_2
	if(var_59_bool == 0) goto Label_7851; // 0x1ea8 JumpB
	lshStopSpeech(); // 0x1ea9 Func
	
Label_7851:
	return 0; // 0x1eab Return
}


func_8869(var_557_bool)
{
	var_559_int = 0; var_560_string = ""; // 0x22a6 PushV
	var_560_string = "d2q01BigVladVisit"; // 0x22a7 MovS
	func_7879(var_559_int, var_560_string); // 0x22a8 NEW_2
	var_561_int = 1; // 0x22aa PushI
	var_562_bool = var_559_int == var_561_int; // 0x22ab Eq
	if(var_562_bool == 0) goto Label_8879; // 0x22ac JumpB
	var_557_bool = 1; // 0x22ad MovB
	return 0; // 0x22ae Return
	
Label_8879:
	var_557_bool = 0; // 0x22af MovB
	return 0; // 0x22b0 Return
}


func_5797(var_2_object, var_406_string)
{
	var_407_bool = 0; // 0x16a6 PushV
	func_8086(var_407_bool); // 0x16a7 NEW_2
	var_408_bool = var_407_bool == 0; // 0x16a9 Not
	if(var_408_bool == 0) goto Label_5804; // 0x16aa JumpB
	return 0; // 0x16ab Return
	
Label_5804:
	var_409_bool = var_406_string == var_2_object; // 0x16ac Eq
	if(var_409_bool == 0) goto Label_5807; // 0x16ad JumpB
	return 0; // 0x16ae Return
	
Label_5807:
	var_410_string = ""; var_411_bool = 0; // 0x16af PushV
	var_410_string = var_406_string; // 0x16b0 Mov
	var_412_string = ""; // 0x16b1 PushS
	var_413_bool = var_406_string == var_412_string; // 0x16b2 Eq
	if(var_413_bool == 0) goto Label_5814; // 0x16b3 JumpB
	var_411_bool = 0; // 0x16b4 MovB
	goto Label_5815; // 0x16b5 Jump
	
Label_5815:
	func_7815(var_410_string, var_411_bool); // 0x16b7 NEW_2
	var_2_object = var_406_string; // 0x16b9 TMov
	return 0; // 0x16ba Return
	
Label_5814:
	var_411_bool = 1; // 0x16b6 MovB
}


func_9382()
{
	var_207_object = Obj(); var_208_object = Obj(); // 0x24a6 PushV
	var_209_int = 98; // 0x24a7 PushI
	var_210_int = 2; // 0x24a8 PushI
	var_211_int = 512180; // 0x24a9 PushI
	CreateDiaryEntry(var_208_object, var_209_int, var_210_int, var_211_int); // 0x24aa Func
	var_212_bool = 0; var_213_object = Obj(); var_214_int = 0; // 0x24ac PushV
	var_213_object = var_208_object; // 0x24ad Mov
	var_214_int = 22; // 0x24ae MovI
	func_9447(var_212_bool, var_213_object, var_214_int); // 0x24af NEW_2
	return 2; // 0x24b1 Return
}


func_7852(var_151_object)
{
	var_152_object = Obj(); var_153_object = Obj(); // 0x1eac PushV
	self(var_153_object); // 0x1ead Func
	var_151_object = var_153_object; // 0x1eaf Mov
	return 2; // 0x1eb0 Return
}


func_8881(var_612_bool)
{
	var_614_int = 0; var_615_string = ""; // 0x22b2 PushV
	var_615_string = "d2q03"; // 0x22b3 MovS
	func_7879(var_614_int, var_615_string); // 0x22b4 NEW_2
	var_616_int = 3; // 0x22b6 PushI
	var_617_bool = var_614_int == var_616_int; // 0x22b7 Eq
	if(var_617_bool == 0) goto Label_8891; // 0x22b8 JumpB
	var_612_bool = 1; // 0x22b9 MovB
	return 0; // 0x22ba Return
	
Label_8891:
	var_612_bool = 0; // 0x22bb MovB
	return 0; // 0x22bc Return
}


func_7858(var_115_cvector, var_116_cvector)
{
	var_118_float = 0; var_119_float = 0; // 0x1eb2 PushV
	var_120_int = var_116_cvector | var_116_cvector; // 0x1eb3 Or
	var_119_float = sqrt(var_120_int); // 0x1eb4 Sqrt2
	var_121_float = 0.0; // 0x1eb5 PushF
	var_122_bool = var_119_float < var_121_float; // 0x1eb6 LT
	if(var_122_bool == 0) goto Label_7866; // 0x1eb7 JumpB
	var_115_cvector = CVector(0.0, 0.0, 0.0); // 0x1eb8 MovV
	return 2; // 0x1eb9 Return
	
Label_7866:
	var_115_cvector = var_116_cvector / var_116_cvector; // 0x1eba Div2
	return 2; // 0x1ebb Return
}


func_9395()
{
	var_282_object = Obj(); var_283_object = Obj(); // 0x24b3 PushV
	var_284_int = 100; // 0x24b4 PushI
	var_285_int = 2; // 0x24b5 PushI
	var_286_int = 512182; // 0x24b6 PushI
	CreateDiaryEntry(var_283_object, var_284_int, var_285_int, var_286_int); // 0x24b7 Func
	var_287_bool = 0; var_288_object = Obj(); var_289_int = 0; // 0x24b9 PushV
	var_288_object = var_283_object; // 0x24ba Mov
	var_289_int = 22; // 0x24bb MovI
	func_9447(var_287_bool, var_288_object, var_289_int); // 0x24bc NEW_2
	return 2; // 0x24be Return
}


func_8379()
{
	var_258_object = Obj(); var_259_string = ""; var_260_float = 0; // 0x20bc PushV
	var_261_object = Obj(); // 0x20bd PushV
	func_9475(var_261_object); // 0x20be NEW_2
	var_258_object = var_261_object; // 0x20bf Mov
	var_259_string = "pt_map_bigvlad"; // 0x20c1 MovS
	var_260_float = 2; // 0x20c2 MovI
	func_9492(var_258_object, var_259_string, var_260_float); // 0x20c3 NEW_2
	var_262_object = Obj(); // 0x20c5 PushV
	func_9475(var_262_object); // 0x20c6 NEW_2
	ShowMap(var_262_object); // 0x20c8 ObjFunc
	return 0; // 0x20ca Return
}


func_7868(var_331_float, var_332_float, var_333_float, var_334_float)
{
	var_335_bool = var_332_float < var_333_float; // 0x1ebd LT
	if(var_335_bool == 0) goto Label_7873; // 0x1ebe JumpB
	var_331_float = var_333_float; // 0x1ebf Mov
	return 0; // 0x1ec0 Return
	
Label_7873:
	var_336_bool = var_332_float > var_334_float; // 0x1ec1 GT
	if(var_336_bool == 0) goto Label_7877; // 0x1ec2 JumpB
	var_331_float = var_334_float; // 0x1ec3 Mov
	return 0; // 0x1ec4 Return
	
Label_7877:
	var_331_float = var_332_float; // 0x1ec5 Mov
	return 0; // 0x1ec6 Return
}


func_8893(var_599_bool)
{
	var_601_int = 0; var_602_string = ""; // 0x22be PushV
	var_602_string = "d2q03"; // 0x22bf MovS
	func_7879(var_601_int, var_602_string); // 0x22c0 NEW_2
	var_603_int = 1000; // 0x22c2 PushI
	var_604_bool = var_601_int == var_603_int; // 0x22c3 Eq
	if(var_604_bool == 0) goto Label_8903; // 0x22c4 JumpB
	var_599_bool = 1; // 0x22c5 MovB
	return 0; // 0x22c6 Return
	
Label_8903:
	var_599_bool = 0; // 0x22c7 MovB
	return 0; // 0x22c8 Return
}


func_9408()
{
	var_90_object = Obj(); var_91_object = Obj(); // 0x24c0 PushV
	var_92_int = 114; // 0x24c1 PushI
	var_93_int = 1; // 0x24c2 PushI
	var_94_int = 513737; // 0x24c3 PushI
	CreateDiaryEntry(var_91_object, var_92_int, var_93_int, var_94_int); // 0x24c4 Func
	var_95_bool = 0; var_96_object = Obj(); var_97_int = 0; // 0x24c6 PushV
	var_96_object = var_91_object; // 0x24c7 Mov
	var_97_int = 111; // 0x24c8 MovI
	func_9447(var_95_bool, var_96_object, var_97_int); // 0x24c9 NEW_2
	return 2; // 0x24cb Return
}


func_1732(var_2_object, var_524_string)
{
	var_525_bool = 0; // 0x6c5 PushV
	func_8086(var_525_bool); // 0x6c6 NEW_2
	var_526_bool = var_525_bool == 0; // 0x6c8 Not
	if(var_526_bool == 0) goto Label_1739; // 0x6c9 JumpB
	return 0; // 0x6ca Return
	
Label_1739:
	var_527_bool = var_524_string == var_2_object; // 0x6cb Eq
	if(var_527_bool == 0) goto Label_1742; // 0x6cc JumpB
	return 0; // 0x6cd Return
	
Label_1742:
	var_528_string = ""; var_529_bool = 0; // 0x6ce PushV
	var_528_string = var_524_string; // 0x6cf Mov
	var_530_string = ""; // 0x6d0 PushS
	var_531_bool = var_524_string == var_530_string; // 0x6d1 Eq
	if(var_531_bool == 0) goto Label_1749; // 0x6d2 JumpB
	var_529_bool = 0; // 0x6d3 MovB
	goto Label_1750; // 0x6d4 Jump
	
Label_1750:
	func_7815(var_528_string, var_529_bool); // 0x6d6 NEW_2
	var_2_object = var_524_string; // 0x6d8 TMov
	return 0; // 0x6d9 Return
	
Label_1749:
	var_529_bool = 1; // 0x6d5 MovB
}


func_7879(var_417_int, var_418_string)
{
	var_419_int = 0; var_420_int = 0; // 0x1ec7 PushV
	GetVariable(var_418_string, var_420_int); // 0x1ec8 Func
	var_417_int = var_420_int; // 0x1eca Mov
	return 2; // 0x1ecb Return
}


func_8905(var_740_bool)
{
	var_742_int = 0; var_743_string = ""; // 0x22ca PushV
	var_743_string = "ood3Alexandr1"; // 0x22cb MovS
	func_7879(var_742_int, var_743_string); // 0x22cc NEW_2
	var_744_int = 0; // 0x22ce PushI
	var_745_bool = var_742_int == var_744_int; // 0x22cf Eq
	if(var_745_bool == 0) goto Label_8915; // 0x22d0 JumpB
	var_740_bool = 1; // 0x22d1 MovB
	return 0; // 0x22d2 Return
	
Label_8915:
	var_740_bool = 0; // 0x22d3 MovB
	return 0; // 0x22d4 Return
}


func_8395()
{
	var_221_int = 0; var_222_int = 0; // 0x20cb PushV
	var_223_string = "d2q01_key"; // 0x20cc PushS
	var_224_int = 1; // 0x20cd PushI
	RemoveItemByType(var_222_int, var_223_string, var_224_int); // 0x20ce ObjFunc
	return 2; // 0x20d0 Return
}


func_7884(var_115_object, var_116_string)
{
	var_117_object = Obj(); var_118_object = Obj(); var_119_object = Obj(); var_120_object = Obj(); // 0x1ecc PushV
	GetMainOutdoorScene(var_119_object); // 0x1ecd Func
	var_121_string = ".xml"; // 0x1ecf PushS
	var_122_int = var_116_string + var_121_string; // 0x1ed0 Add
	AddBlankActorFromXml(var_120_object, var_119_object, var_116_string, var_122_int); // 0x1ed1 Func
	var_115_object = var_120_object; // 0x1ed3 Mov
	return 4; // 0x1ed4 Return
}


func_6861(var_0_object, var_1_object, var_2_object, var_3_string, var_1225_object, var_1226_object)
{
	var_0_object = var_1226_object; // 0x1ace TMov
	var_1_object = var_1225_object; // 0x1acf TMov
	var_3_string = 0; // 0x1ad0 TMovB
	var_1231_int = 1; // 0x1ad1 PushI
	if(var_1231_int == 0) goto Label_6894; // 0x1ad2 JumpB
	var_1232_string = ""; // 0x1ad3 PushV
	var_1232_string = "Neutral"; // 0x1ad4 MovS
	func_6924(var_1226_object, var_1232_string); // 0x1ad5 NEW_2
	var_1240_int = 535294; // 0x1ad7 PushI
	SetMessage(var_1240_int); // 0x1ad8 TObjFunc
	ClearReplies(); // 0x1ada TObjFunc
	var_1241_int = 535295; // 0x1adc PushI
	var_1242_int = 36973; // 0x1add PushI
	var_1243_int = 36972; // 0x1ade PushI
	AddReply(var_1241_int, var_1242_int, var_1243_int); // 0x1adf TObjFunc
	var_1244_int = 535302; // 0x1ae1 PushI
	var_1245_int = -1; // 0x1ae2 PushI
	var_1246_int = 36980; // 0x1ae3 PushI
	AddReply(var_1244_int, var_1245_int, var_1246_int); // 0x1ae4 TObjFunc
	var_1247_int = 535303; // 0x1ae6 PushI
	var_1248_int = -1; // 0x1ae7 PushI
	var_1249_int = 36981; // 0x1ae8 PushI
	AddReply(var_1247_int, var_1248_int, var_1249_int); // 0x1ae9 TObjFunc
	goto Label_6894; // 0x1aeb Jump
	
Label_6894:
	var_1250_bool = 0; // 0x1aee PushV
	func_8086(var_1250_bool); // 0x1aef NEW_2
	if(var_1250_bool == 0) goto Label_6909; // 0x1af1 JumpB
	
Label_6898:
	lshWaitForAnimEnd(); // 0x1af2 Func
	var_1251_string = var_3_string; // 0x1af4 PushT
	if(var_1251_string == 0) goto Label_6903; // 0x1af5 JumpB
	goto Label_6908; // 0x1af6 Jump
	
Label_6908:
	goto Label_6923; // 0x1afc Jump
	
Label_6923:
	return 0; // 0x1b0b Return
	
Label_6903:
	var_1252_string = ""; // 0x1af7 PushV
	var_1252_string = var_2_object; // 0x1af8 MovT
	func_7799(var_1252_string); // 0x1af9 NEW_2
	goto Label_6898; // 0x1afb Jump
	
Label_6909:
	var_1253_string = "all"; // 0x1afd PushS
	var_1254_string = "idle"; // 0x1afe PushS
	PlayAnimation(var_1253_string, var_1254_string); // 0x1aff Func
	
Label_6913:
	WaitForAnimEnd(); // 0x1b01 Func
	var_1255_string = var_3_string; // 0x1b03 PushT
	if(var_1255_string == 0) goto Label_6918; // 0x1b04 JumpB
	goto Label_6923; // 0x1b05 Jump
	
Label_6918:
	var_1256_string = "all"; // 0x1b06 PushS
	var_1257_string = "idle"; // 0x1b07 PushS
	PlayAnimation(var_1256_string, var_1257_string); // 0x1b08 Func
	goto Label_6913; // 0x1b0a Jump
}


func_9421()
{
	var_86_object = Obj(); var_87_object = Obj(); // 0x24cd PushV
	var_88_int = 172; // 0x24ce PushI
	var_89_int = 2; // 0x24cf PushI
	var_90_int = 515424; // 0x24d0 PushI
	CreateDiaryEntry(var_87_object, var_88_int, var_89_int, var_90_int); // 0x24d1 Func
	var_91_bool = 0; var_92_object = Obj(); var_93_int = 0; // 0x24d3 PushV
	var_92_object = var_87_object; // 0x24d4 Mov
	var_93_int = 170; // 0x24d5 MovI
	func_9447(var_91_bool, var_92_object, var_93_int); // 0x24d6 NEW_2
	return 2; // 0x24d8 Return
}


func_8401()
{
	var_64_string = "ood4Alexandr1"; // 0x20d2 PushS
	var_65_int = 1; // 0x20d3 PushI
	SetVariable(var_64_string, var_65_int); // 0x20d4 Func
	return 0; // 0x20d6 Return
}


func_8917(var_725_bool)
{
	var_727_int = 0; var_728_string = ""; // 0x22d6 PushV
	var_728_string = "ood3Alexandr2"; // 0x22d7 MovS
	func_7879(var_727_int, var_728_string); // 0x22d8 NEW_2
	var_729_int = 0; // 0x22da PushI
	var_730_bool = var_727_int == var_729_int; // 0x22db Eq
	if(var_730_bool == 0) goto Label_8927; // 0x22dc JumpB
	var_725_bool = 1; // 0x22dd MovB
	return 0; // 0x22de Return
	
Label_8927:
	var_725_bool = 0; // 0x22df MovB
	return 0; // 0x22e0 Return
}


func_2774(var_0_object, var_1_object, var_2_object, var_3_string, var_675_object, var_676_object)
{
	var_0_object = var_676_object; // 0xad7 TMov
	var_1_object = var_675_object; // 0xad8 TMov
	var_3_string = 0; // 0xad9 TMovB
	var_681_int = 1; // 0xada PushI
	if(var_681_int == 0) goto Label_2890; // 0xadb JumpB
	var_682_bool = 0; // 0xadc PushV
	var_682_bool = 0; // 0xadd MovB
	var_683_bool = 0; var_684_object = Obj(); // 0xade PushV
	var_684_object = var_1_object; // 0xadf MovT
	func_8953(var_684_object); // 0xae0 NEW_2
	if(var_683_bool == 0) goto Label_2793; // 0xae2 JumpB
	var_689_bool = 0; var_690_object = Obj(); // 0xae3 PushV
	var_690_object = var_1_object; // 0xae4 MovT
	func_8941(var_690_object); // 0xae5 NEW_2
	if(var_689_bool == 0) goto Label_2793; // 0xae7 JumpB
	var_682_bool = 1; // 0xae8 MovB
	
Label_2793:
	if(var_682_bool == 0) goto Label_2819; // 0xae9 JumpB
	var_695_object = Obj(); var_696_object = Obj(); // 0xaea PushV
	var_695_object = var_1_object; // 0xaeb MovT
	var_696_object = var_0_object; // 0xaec MovT
	func_8350(); // 0xaed NEW_2
	var_699_string = ""; // 0xaef PushV
	var_699_string = "Neutral"; // 0xaf0 MovS
	func_2920(var_676_object, var_699_string); // 0xaf1 NEW_2
	var_707_int = 509086; // 0xaf3 PushI
	SetMessage(var_707_int); // 0xaf4 TObjFunc
	ClearReplies(); // 0xaf6 TObjFunc
	var_708_int = 509087; // 0xaf8 PushI
	var_709_int = 9969; // 0xaf9 PushI
	var_710_int = 9965; // 0xafa PushI
	AddReply(var_708_int, var_709_int, var_710_int); // 0xafb TObjFunc
	var_711_int = 509088; // 0xafd PushI
	var_712_int = 9967; // 0xafe PushI
	var_713_int = 9966; // 0xaff PushI
	AddReply(var_711_int, var_712_int, var_713_int); // 0xb00 TObjFunc
	goto Label_2890; // 0xb02 Jump
	
Label_2890:
	var_714_bool = 0; // 0xb4a PushV
	func_8086(var_714_bool); // 0xb4b NEW_2
	if(var_714_bool == 0) goto Label_2905; // 0xb4d JumpB
	
Label_2894:
	lshWaitForAnimEnd(); // 0xb4e Func
	var_715_string = var_3_string; // 0xb50 PushT
	if(var_715_string == 0) goto Label_2899; // 0xb51 JumpB
	goto Label_2904; // 0xb52 Jump
	
Label_2904:
	goto Label_2919; // 0xb58 Jump
	
Label_2919:
	return 0; // 0xb67 Return
	
Label_2899:
	var_716_string = ""; // 0xb53 PushV
	var_716_string = var_2_object; // 0xb54 MovT
	func_7799(var_716_string); // 0xb55 NEW_2
	goto Label_2894; // 0xb57 Jump
	
Label_2905:
	var_717_string = "all"; // 0xb59 PushS
	var_718_string = "idle"; // 0xb5a PushS
	PlayAnimation(var_717_string, var_718_string); // 0xb5b Func
	
Label_2909:
	WaitForAnimEnd(); // 0xb5d Func
	var_719_string = var_3_string; // 0xb5f PushT
	if(var_719_string == 0) goto Label_2914; // 0xb60 JumpB
	goto Label_2919; // 0xb61 Jump
	
Label_2914:
	var_720_string = "all"; // 0xb62 PushS
	var_721_string = "idle"; // 0xb63 PushS
	PlayAnimation(var_720_string, var_721_string); // 0xb64 Func
	goto Label_2909; // 0xb66 Jump
	
Label_2819:
	var_722_string = ""; // 0xb03 PushV
	var_722_string = "Neutral"; // 0xb04 MovS
	func_2920(var_676_object, var_722_string); // 0xb05 NEW_2
	var_723_int = 508854; // 0xb07 PushI
	SetMessage(var_723_int); // 0xb08 TObjFunc
	ClearReplies(); // 0xb0a TObjFunc
	var_724_bool = 0; // 0xb0c PushV
	var_724_bool = 0; // 0xb0d MovB
	var_725_bool = 0; var_726_object = Obj(); // 0xb0e PushV
	var_726_object = var_1_object; // 0xb0f MovT
	func_8917(var_726_object); // 0xb10 NEW_2
	if(var_725_bool == 0) goto Label_2841; // 0xb12 JumpB
	var_731_bool = 0; var_732_object = Obj(); // 0xb13 PushV
	var_732_object = var_1_object; // 0xb14 MovT
	func_8965(var_732_object); // 0xb15 NEW_2
	if(var_731_bool == 0) goto Label_2841; // 0xb17 JumpB
	var_724_bool = 1; // 0xb18 MovB
	
Label_2841:
	if(var_724_bool == 0) goto Label_2847; // 0xb19 JumpB
	var_737_int = 508840; // 0xb1a PushI
	var_738_int = 9693; // 0xb1b PushI
	var_739_int = 9692; // 0xb1c PushI
	AddReply(var_737_int, var_738_int, var_739_int); // 0xb1d TObjFunc
	
Label_2847:
	var_740_bool = 0; var_741_object = Obj(); // 0xb1f PushV
	var_741_object = var_1_object; // 0xb20 MovT
	func_8905(var_741_object); // 0xb21 NEW_2
	if(var_740_bool == 0) goto Label_2857; // 0xb23 JumpB
	var_746_int = 508855; // 0xb24 PushI
	var_747_int = 9687; // 0xb25 PushI
	var_748_int = 9711; // 0xb26 PushI
	AddReply(var_746_int, var_747_int, var_748_int); // 0xb27 TObjFunc
	
Label_2857:
	var_749_bool = 0; var_750_object = Obj(); // 0xb29 PushV
	var_750_object = var_1_object; // 0xb2a MovT
	func_8929(var_750_object); // 0xb2b NEW_2
	if(var_749_bool == 0) goto Label_2867; // 0xb2d JumpB
	var_755_int = 508856; // 0xb2e PushI
	var_756_int = 9691; // 0xb2f PushI
	var_757_int = 9712; // 0xb30 PushI
	AddReply(var_755_int, var_756_int, var_757_int); // 0xb31 TObjFunc
	
Label_2867:
	var_758_bool = 0; var_759_object = Obj(); // 0xb33 PushV
	var_759_object = var_1_object; // 0xb34 MovT
	func_9061(var_759_object); // 0xb35 NEW_2
	if(var_758_bool == 0) goto Label_2877; // 0xb37 JumpB
	var_764_int = 511978; // 0xb38 PushI
	var_765_int = 13175; // 0xb39 PushI
	var_766_int = 13193; // 0xb3a PushI
	AddReply(var_764_int, var_765_int, var_766_int); // 0xb3b TObjFunc
	
Label_2877:
	var_767_int = 511133; // 0xb3d PushI
	var_768_int = -1; // 0xb3e PushI
	var_769_int = 12322; // 0xb3f PushI
	AddReply(var_767_int, var_768_int, var_769_int); // 0xb40 TObjFunc
	var_770_int = 534068; // 0xb42 PushI
	var_771_int = -1; // 0xb43 PushI
	var_772_int = 35658; // 0xb44 PushI
	AddReply(var_770_int, var_771_int, var_772_int); // 0xb45 TObjFunc
	goto Label_2890; // 0xb47 Jump
}


func_8407()
{
	var_68_object = Obj(); var_69_object = Obj(); // 0x20d7 PushV
	var_70_object = Obj(); // 0x20d8 PushV
	func_9475(var_70_object); // 0x20d9 NEW_2
	var_69_object = var_70_object; // 0x20da Mov
	var_77_string = "d4q03AlexandrGotoGrif"; // 0x20dc PushS
	var_78_string = "pt_map_grif"; // 0x20dd PushS
	var_79_int = 0; // 0x20de PushI
	var_80_int = 511487; // 0x20df PushI
	var_81_float = 0; // 0x20e0 PushV
	func_8015(var_81_float); // 0x20e1 NEW_2
	AddMark(var_77_string, var_78_string, var_79_int, var_80_int, var_81_float); // 0x20e3 ObjFunc
	func_9356(); // 0x20e6 NEW_2
	func_9369(); // 0x20e9 NEW_2
	var_115_object = Obj(); var_116_string = ""; // 0x20eb PushV
	var_116_string = "quest_d4_03"; // 0x20ec MovS
	func_7884(var_115_object, var_116_string); // 0x20ed NEW_2
	return 2; // 0x20ef Return
}


func_7895(var_142_int, var_143_int)
{
	var_144_object = Obj(); var_145_object = Obj(); // 0x1ed7 PushV
	CreateIntVector(var_145_object); // 0x1ed8 Func
	add(var_142_int); // 0x1eda ObjFunc
	add(var_143_int); // 0x1edc ObjFunc
	var_146_int = 3; // 0x1ede PushI
	SendWorldWndMessage(var_146_int, var_145_object); // 0x1edf Func
	return 2; // 0x1ee1 Return
}


func_9434(var_96_object)
{
	var_97_object = Obj(); var_98_object = Obj(); // 0x24da PushV
	GetDiaryRoot(var_98_object); // 0x24db Func
	var_99_bool = var_98_object == 0; // 0x24dd Not
	if(var_99_bool == 0) goto Label_9444; // 0x24de JumpB
	var_100_string = "Can't retrieve diary root"; // 0x24df PushS
	Trace(var_100_string); // 0x24e0 Func
	var_96_object = 0; // 0x24e2 MovB
	return 2; // 0x24e3 Return
	
Label_9444:
	var_96_object = var_98_object; // 0x24e4 Mov
	return 2; // 0x24e5 Return
}


func_8929(var_749_bool)
{
	var_751_int = 0; var_752_string = ""; // 0x22e2 PushV
	var_752_string = "ood3Alexandr3"; // 0x22e3 MovS
	func_7879(var_751_int, var_752_string); // 0x22e4 NEW_2
	var_753_int = 0; // 0x22e6 PushI
	var_754_bool = var_751_int == var_753_int; // 0x22e7 Eq
	if(var_754_bool == 0) goto Label_8939; // 0x22e8 JumpB
	var_749_bool = 1; // 0x22e9 MovB
	return 0; // 0x22ea Return
	
Label_8939:
	var_749_bool = 0; // 0x22eb MovB
	return 0; // 0x22ec Return
}


func_7907(var_246_object, var_247_int)
{
	var_248_int = 0; var_249_int = 0; // 0x1ee3 PushV
	var_250_object = Obj(); var_251_string = ""; var_252_int = 0; // 0x1ee4 PushV
	var_250_object = var_246_object; // 0x1ee5 Mov
	var_251_string = "money"; // 0x1ee6 MovS
	var_252_int = var_247_int; // 0x1ee7 Mov
	func_7543(var_251_string, var_252_int); // 0x1ee8 NEW_2
	var_256_int = 0; // 0x1eea PushI
	var_257_bool = var_247_int > var_256_int; // 0x1eeb GT
	if(var_257_bool == 0) goto Label_7925; // 0x1eec JumpB
	var_258_string = "Money"; // 0x1eed PushS
	GetInvItemByName(var_249_int, var_258_string); // 0x1eee Func
	var_259_int = 0; var_260_int = 0; // 0x1ef0 PushV
	var_259_int = var_249_int; // 0x1ef1 Mov
	var_260_int = var_247_int; // 0x1ef2 Mov
	func_7895(var_259_int, var_260_int); // 0x1ef3 NEW_2
	
Label_7925:
	return 2; // 0x1ef5 Return
}


func_9447(var_87_bool, var_88_object, var_89_int)
{
	var_90_object = Obj(); var_91_object = Obj(); var_92_int = 0; var_93_object = Obj(); var_94_object = Obj(); var_95_int = 0; // 0x24e7 PushV
	var_96_object = Obj(); // 0x24e8 PushV
	func_9434(var_96_object); // 0x24e9 NEW_2
	var_93_object = var_96_object; // 0x24ea Mov
	Find(var_89_int, var_94_object); // 0x24ec ObjFunc
	var_101_bool = var_94_object == 0; // 0x24ee Not
	if(var_101_bool == 0) goto Label_9462; // 0x24ef JumpB
	var_102_string = "Can't find diary parent with id: "; // 0x24f0 PushS
	var_103_int = var_102_string + var_89_int; // 0x24f1 Add
	Trace(var_103_int); // 0x24f2 Func
	var_87_bool = 0; // 0x24f4 MovB
	return 6; // 0x24f5 Return
	
Label_9462:
	AddChild(var_88_object); // 0x24f6 ObjFunc
	var_104_int = 7; // 0x24f8 PushI
	SendWorldWndMessage(var_104_int); // 0x24f9 Func
	GetCategory(var_95_int); // 0x24fb ObjFunc
	SetDiarySection(var_95_int); // 0x24fd Func
	var_87_bool = 0; // 0x24ff MovB
	return 6; // 0x2500 Return
}


func_8941(var_689_bool)
{
	var_691_int = 0; var_692_string = ""; // 0x22ee PushV
	var_692_string = "ood3Alexandr4"; // 0x22ef MovS
	func_7879(var_691_int, var_692_string); // 0x22f0 NEW_2
	var_693_int = 0; // 0x22f2 PushI
	var_694_bool = var_691_int == var_693_int; // 0x22f3 Eq
	if(var_694_bool == 0) goto Label_8951; // 0x22f4 JumpB
	var_689_bool = 1; // 0x22f5 MovB
	return 0; // 0x22f6 Return
	
Label_8951:
	var_689_bool = 0; // 0x22f7 MovB
	return 0; // 0x22f8 Return
}


func_8433()
{
	var_149_object = Obj(); var_150_string = ""; var_151_float = 0; // 0x20f2 PushV
	var_152_object = Obj(); // 0x20f3 PushV
	func_9475(var_152_object); // 0x20f4 NEW_2
	var_149_object = var_152_object; // 0x20f5 Mov
	var_150_string = "pt_map_grif"; // 0x20f7 MovS
	var_151_float = 2; // 0x20f8 MovI
	func_9492(var_149_object, var_150_string, var_151_float); // 0x20f9 NEW_2
	var_172_object = Obj(); // 0x20fb PushV
	func_9475(var_172_object); // 0x20fc NEW_2
	ShowMap(var_172_object); // 0x20fe ObjFunc
	return 0; // 0x2100 Return
}


func_7926(var_132_object, var_133_int)
{
	var_134_int = 0; var_135_int = 0; var_136_bool = 0; var_137_int = 0; var_138_int = 0; var_139_bool = 0; // 0x1ef6 PushV
	GetItemID(var_137_int); // 0x1ef7 ObjFunc
	var_140_string = "Category"; // 0x1ef9 PushS
	GetInvItemProperty(var_138_int, var_137_int, var_140_string); // 0x1efa Func
	AddItem(var_139_bool, var_132_object, var_138_int, var_133_int); // 0x1efc ObjFunc
	var_141_bool = var_139_bool == 0; // 0x1efe Not
	if(var_141_bool == 0) goto Label_7939; // 0x1eff JumpB
	DropItems(var_132_object, var_133_int); // 0x1f00 ObjFunc
	goto Label_7944; // 0x1f02 Jump
	
Label_7944:
	return 6; // 0x1f08 Return
	
Label_7939:
	var_142_int = 0; var_143_int = 0; // 0x1f03 PushV
	var_142_int = var_137_int; // 0x1f04 Mov
	var_143_int = var_133_int; // 0x1f05 Mov
	func_7895(var_142_int, var_143_int); // 0x1f06 NEW_2
}


func_3831(var_2_object, var_818_string)
{
	var_819_bool = 0; // 0xef8 PushV
	func_8086(var_819_bool); // 0xef9 NEW_2
	var_820_bool = var_819_bool == 0; // 0xefb Not
	if(var_820_bool == 0) goto Label_3838; // 0xefc JumpB
	return 0; // 0xefd Return
	
Label_3838:
	var_821_bool = var_818_string == var_2_object; // 0xefe Eq
	if(var_821_bool == 0) goto Label_3841; // 0xeff JumpB
	return 0; // 0xf00 Return
	
Label_3841:
	var_822_string = ""; var_823_bool = 0; // 0xf01 PushV
	var_822_string = var_818_string; // 0xf02 Mov
	var_824_string = ""; // 0xf03 PushS
	var_825_bool = var_818_string == var_824_string; // 0xf04 Eq
	if(var_825_bool == 0) goto Label_3848; // 0xf05 JumpB
	var_823_bool = 0; // 0xf06 MovB
	goto Label_3849; // 0xf07 Jump
	
Label_3849:
	func_7815(var_822_string, var_823_bool); // 0xf09 NEW_2
	var_2_object = var_818_string; // 0xf0b TMov
	return 0; // 0xf0c Return
	
Label_3848:
	var_823_bool = 1; // 0xf08 MovB
}


func_8953(var_683_bool)
{
	var_685_int = 0; var_686_string = ""; // 0x22fa PushV
	var_686_string = "d3q01"; // 0x22fb MovS
	func_7879(var_685_int, var_686_string); // 0x22fc NEW_2
	var_687_int = 8; // 0x22fe PushI
	var_688_bool = var_685_int == var_687_int; // 0x22ff Eq
	if(var_688_bool == 0) goto Label_8963; // 0x2300 JumpB
	var_683_bool = 1; // 0x2301 MovB
	return 0; // 0x2302 Return
	
Label_8963:
	var_683_bool = 0; // 0x2303 MovB
	return 0; // 0x2304 Return
}


func_254(var_0_object, var_987_int, var_988_object)
{
	var_990_object = Obj(); var_991_bool = 0; var_992_int = 0; var_993_bool = 0; var_994_object = Obj(); var_995_bool = 0; var_996_int = 0; var_997_bool = 0; // 0xfe PushV
	var_0_object = var_988_object; // 0xff TMov
	var_998_bool = 0; var_999_object = Obj(); var_1000_float = 0; // 0x100 PushV
	var_999_object = var_988_object; // 0x101 Mov
	var_1000_float = 70.0; // 0x102 MovF
	func_7574(var_999_object, var_1000_float); // 0x103 NEW_2
	var_1001_bool = var_998_bool == 0; // 0x105 Not
	if(var_1001_bool == 0) goto Label_265; // 0x106 JumpB
	var_987_int = -2; // 0x107 MovI
	return 8; // 0x108 Return
	
Label_265:
	CreateDialog(var_994_object); // 0x109 Func
	var_1002_int = 0; // 0x10b PushV
	func_8080(var_1002_int); // 0x10c NEW_2
	SetNPCName(var_1002_int); // 0x10e ObjFunc
	var_1003_int = 0; // 0x110 PushV
	func_8078(var_1003_int); // 0x111 NEW_2
	SetNPCDescription(var_1003_int); // 0x113 ObjFunc
	var_1004_string = ""; // 0x115 PushV
	func_8082(var_1004_string); // 0x116 NEW_2
	SetPhoto(var_1004_string); // 0x118 ObjFunc
	var_1005_string = ""; // 0x11a PushV
	func_8084(var_1005_string); // 0x11b NEW_2
	SetPhoto2(var_1005_string); // 0x11d ObjFunc
	var_1006_int = 0; // 0x11f PushV
	func_9525(var_1006_int); // 0x120 NEW_2
	SetPlayerName(var_1006_int); // 0x122 ObjFunc
	var_996_int = -1; // 0x124 MovI
	IsOverrideActive(var_995_bool); // 0x125 Func
	var_1007_bool = var_995_bool; // 0x127 Push
	if(var_1007_bool == 0) goto Label_299; // 0x128 JumpB
	var_987_int = -2; // 0x129 MovI
	return 8; // 0x12a Return
	
Label_299:
	DoDialog(var_994_object); // 0x12b Func
	var_1008_bool = 0; var_1009_object = Obj(); // 0x12d PushV
	var_1010_object = Obj(); // 0x12e PushV
	func_7852(var_1010_object); // 0x12f NEW_2
	var_1009_object = var_1010_object; // 0x130 Mov
	func_7661(var_1008_bool, var_1009_object); // 0x132 NEW_2
	var_1011_object = Obj(); var_1012_object = Obj(); // 0x134 PushV
	var_1011_object = var_988_object; // 0x135 Mov
	var_1012_object = var_994_object; // 0x136 Mov
	TaskCall(3); // 0x137 TaskCall
	func_335(var_1013_object, var_1014_object, var_1015_string, var_1016_bool, var_1011_object, var_1012_object); // 0x138 NEW_2
	TaskReturn(); // 0x139 TaskReturn
	IsDialogEnd(var_997_bool); // 0x13b ObjFunc
	
Label_317:
	var_1126_bool = var_997_bool == 0; // 0x13d Not
	if(var_1126_bool == 0) goto Label_324; // 0x13e JumpB
	sync(); // 0x13f Func
	IsDialogEnd(var_997_bool); // 0x141 ObjFunc
	goto Label_317; // 0x143 Jump
	
Label_324:
	var_1127_object = Obj(); // 0x144 PushV
	var_1127_object = var_988_object; // 0x145 Mov
	func_7643(); // 0x146 NEW_2
	StopDialog(var_994_object); // 0x148 Func
	GetReturnValue(var_996_int); // 0x14a ObjFunc
	var_987_int = var_996_int; // 0x14c Mov
	return 8; // 0x14d Return
}


func_8449()
{
	var_193_string = "ood4Alexandr2"; // 0x2102 PushS
	var_194_int = 1; // 0x2103 PushI
	SetVariable(var_193_string, var_194_int); // 0x2104 Func
	return 0; // 0x2106 Return
}


func_7425()
{
	var_61_int = 0; var_62_int = 0; var_63_bool = 0; var_64_int = 0; var_65_int = 0; var_66_bool = 0; var_67_int = 0; var_68_int = 0; var_69_bool = 0; var_70_int = 0; var_71_int = 0; var_72_bool = 0; // 0x1d01 PushV
	WaitForAnimEnd(); // 0x1d02 Func
	var_73_bool = 0; // 0x1d04 PushV
	func_7569(var_73_bool); // 0x1d05 NEW_2
	var_74_bool = var_73_bool == 0; // 0x1d07 Not
	if(var_74_bool == 0) goto Label_7434; // 0x1d08 JumpB
	return 12; // 0x1d09 Return
	
Label_7434:
	var_75_int = 0; // 0x1d0a PushV
	func_8061(var_75_int); // 0x1d0b NEW_2
	var_67_int = var_75_int; // 0x1d0c Mov
	var_68_int = 0; // 0x1d0e MovI
	
Label_7439:
	var_88_bool = 0; // 0x1d0f PushV
	var_88_bool = 0; // 0x1d10 MovB
	var_89_int = 5; // 0x1d11 PushI
	var_90_bool = var_68_int < var_89_int; // 0x1d12 LT
	if(var_90_bool == 0) goto Label_7449; // 0x1d13 JumpB
	var_91_bool = 0; // 0x1d14 PushV
	func_7569(var_91_bool); // 0x1d15 NEW_2
	if(var_91_bool == 0) goto Label_7449; // 0x1d17 JumpB
	var_88_bool = 1; // 0x1d18 MovB
	
Label_7449:
	if(var_88_bool == 0) goto Label_7491; // 0x1d19 JumpB
	var_92_bool = var_67_int == 0; // 0x1d1a Not
	if(var_92_bool == 0) goto Label_7459; // 0x1d1b JumpB
	var_93_int = 3; // 0x1d1c PushI
	Sleep(var_93_int, var_69_bool); // 0x1d1d Func
	var_94_bool = var_69_bool == 0; // 0x1d1f Not
	if(var_94_bool == 0) goto Label_7458; // 0x1d20 JumpB
	goto Label_7491; // 0x1d21 Jump
	
Label_7491:
	ResetAAS(); // 0x1d43 Func
	return 12; // 0x1d45 Return
	
Label_7458:
	goto Label_7480; // 0x1d22 Jump
	
Label_7480:
	var_95_bool = 0; // 0x1d38 PushV
	func_7494(var_95_bool); // 0x1d39 NEW_2
	var_96_bool = var_95_bool == 0; // 0x1d3b Not
	if(var_96_bool == 0) goto Label_7486; // 0x1d3c JumpB
	goto Label_7491; // 0x1d3d Jump
	
Label_7486:
	ResetAAS(); // 0x1d3e Func
	var_97_int = 1; // 0x1d40 PushI
	var_68_int = var_68_int + var_97_int; // 0x1d41 Add2
	goto Label_7439; // 0x1d42 Jump
	
Label_7459:
	irand(var_70_int, var_67_int); // 0x1d23 Func
	var_98_int = 5; // 0x1d25 PushI
	irand(var_71_int, var_98_int); // 0x1d26 Func
	var_99_int = 0; // 0x1d28 PushI
	var_100_bool = var_71_int != var_99_int; // 0x1d29 Neq
	if(var_100_bool == 0) goto Label_7468; // 0x1d2a JumpB
	var_70_int = 0; // 0x1d2b MovI
	
Label_7468:
	var_101_string = "all"; // 0x1d2c PushS
	var_102_string = ""; var_103_int = 0; // 0x1d2d PushV
	var_103_int = var_70_int; // 0x1d2e Mov
	func_8054(var_102_string, var_103_int); // 0x1d2f NEW_2
	PlayAnimation(var_101_string, var_102_string); // 0x1d31 Func
	WaitForAnimEnd(var_72_bool); // 0x1d33 Func
	var_104_bool = var_72_bool == 0; // 0x1d35 Not
	if(var_104_bool == 0) goto Label_7480; // 0x1d36 JumpB
	goto Label_7491; // 0x1d37 Jump
}


func_9475(var_68_object)
{
	var_69_object = Obj(); var_70_object = Obj(); var_71_object = Obj(); var_72_object = Obj(); // 0x2503 PushV
	GetMainOutdoorScene(var_71_object); // 0x2504 Func
	var_73_bool = var_71_object == 0; // 0x2506 NullEq
	if(var_73_bool == 0) goto Label_9486; // 0x2507 JumpB
	var_74_string = "Can't find main outdoor scene"; // 0x2508 PushS
	Trace(var_74_string); // 0x2509 Func
	var_72_object = 0; // 0x250b SetNull
	var_68_object = var_72_object; // 0x250c Mov
	return 4; // 0x250d Return
	
Label_9486:
	GetMap(var_72_object); // 0x250e ObjFunc
	var_68_object = var_72_object; // 0x2510 Mov
	return 4; // 0x2511 Return
}


func_8965(var_731_bool)
{
	var_733_int = 0; var_734_string = ""; // 0x2306 PushV
	var_734_string = "d3q01"; // 0x2307 MovS
	func_7879(var_733_int, var_734_string); // 0x2308 NEW_2
	var_735_int = 1; // 0x230a PushI
	var_736_bool = var_733_int == var_735_int; // 0x230b Eq
	if(var_736_bool == 0) goto Label_8975; // 0x230c JumpB
	var_731_bool = 1; // 0x230d MovB
	return 0; // 0x230e Return
	
Label_8975:
	var_731_bool = 0; // 0x230f MovB
	return 0; // 0x2310 Return
}


func_8455()
{
	var_197_object = Obj(); var_198_object = Obj(); // 0x2107 PushV
	var_199_string = "d4q03"; // 0x2108 PushS
	var_200_int = 3; // 0x2109 PushI
	SetVariable(var_199_string, var_200_int); // 0x210a Func
	var_201_object = Obj(); // 0x210c PushV
	func_9475(var_201_object); // 0x210d NEW_2
	var_198_object = var_201_object; // 0x210e Mov
	var_202_string = "d4q03AlexandrAboutVolnica"; // 0x2110 PushS
	var_203_string = "pt_d4q03_volnica"; // 0x2111 PushS
	var_204_int = 0; // 0x2112 PushI
	var_205_int = 511494; // 0x2113 PushI
	var_206_float = 0; // 0x2114 PushV
	func_8015(var_206_float); // 0x2115 NEW_2
	AddMark(var_202_string, var_203_string, var_204_int, var_205_int, var_206_float); // 0x2117 ObjFunc
	func_9382(); // 0x211a NEW_2
	return 2; // 0x211c Return
}


func_7945(var_126_object, var_127_string, var_128_int)
{
	var_129_object = Obj(); var_130_object = Obj(); // 0x1f09 PushV
	CreateInvItem(var_130_object); // 0x1f0a Func
	SetItemName(var_127_string); // 0x1f0c ObjFunc
	var_131_object = Obj(); var_132_object = Obj(); var_133_int = 0; // 0x1f0e PushV
	var_131_object = var_126_object; // 0x1f0f Mov
	var_132_object = var_130_object; // 0x1f10 Mov
	var_133_int = var_128_int; // 0x1f11 Mov
	func_7926(var_132_object, var_133_int); // 0x1f12 NEW_2
	return 2; // 0x1f14 Return
}


func_6924(var_2_object, var_1232_string)
{
	var_1233_bool = 0; // 0x1b0d PushV
	func_8086(var_1233_bool); // 0x1b0e NEW_2
	var_1234_bool = var_1233_bool == 0; // 0x1b10 Not
	if(var_1234_bool == 0) goto Label_6931; // 0x1b11 JumpB
	return 0; // 0x1b12 Return
	
Label_6931:
	var_1235_bool = var_1232_string == var_2_object; // 0x1b13 Eq
	if(var_1235_bool == 0) goto Label_6934; // 0x1b14 JumpB
	return 0; // 0x1b15 Return
	
Label_6934:
	var_1236_string = ""; var_1237_bool = 0; // 0x1b16 PushV
	var_1236_string = var_1232_string; // 0x1b17 Mov
	var_1238_string = ""; // 0x1b18 PushS
	var_1239_bool = var_1232_string == var_1238_string; // 0x1b19 Eq
	if(var_1239_bool == 0) goto Label_6941; // 0x1b1a JumpB
	var_1237_bool = 0; // 0x1b1b MovB
	goto Label_6942; // 0x1b1c Jump
	
Label_6942:
	func_7815(var_1236_string, var_1237_bool); // 0x1b1e NEW_2
	var_2_object = var_1232_string; // 0x1b20 TMov
	return 0; // 0x1b21 Return
	
Label_6941:
	var_1237_bool = 1; // 0x1b1d MovB
}


func_8977(var_808_bool)
{
	var_810_int = 0; var_811_string = ""; // 0x2312 PushV
	var_811_string = "ood4Alexandr1"; // 0x2313 MovS
	func_7879(var_810_int, var_811_string); // 0x2314 NEW_2
	var_812_int = 0; // 0x2316 PushI
	var_813_bool = var_810_int == var_812_int; // 0x2317 Eq
	if(var_813_bool == 0) goto Label_8987; // 0x2318 JumpB
	var_808_bool = 1; // 0x2319 MovB
	return 0; // 0x231a Return
	
Label_8987:
	var_808_bool = 0; // 0x231b MovB
	return 0; // 0x231c Return
}


func_9492(var_107_object, var_108_string, var_109_float)
{
	var_111_cvector = CVector(0,0,0); var_112_cvector = CVector(0,0,0); var_113_object = Obj(); var_114_bool = 0; var_115_cvector = CVector(0,0,0); var_116_cvector = CVector(0,0,0); var_117_object = Obj(); var_118_bool = 0; // 0x2514 PushV
	GetMainOutdoorScene(var_117_object); // 0x2515 Func
	var_119_bool = var_117_object == 0; // 0x2517 NullEq
	if(var_119_bool == 0) goto Label_9501; // 0x2518 JumpB
	var_120_string = "Can't find main outdoor scene"; // 0x2519 PushS
	Trace(var_120_string); // 0x251a Func
	return 8; // 0x251c Return
	
Label_9501:
	GetLocator(var_108_string, var_118_bool, var_115_cvector, var_116_cvector); // 0x251d ObjFunc
	var_121_bool = var_118_bool == 0; // 0x251f Not
	if(var_121_bool == 0) goto Label_9511; // 0x2520 JumpB
	var_122_string = "Warning: outdoor scene locator "; // 0x2521 PushS
	var_123_int = var_122_string + var_108_string; // 0x2522 Add
	var_124_string = " doesnt exist"; // 0x2523 PushS
	var_125_int = var_123_int + var_124_string; // 0x2524 Add
	Trace(var_125_int); // 0x2525 Func
	
Label_9511:
	GetMap(var_107_object); // 0x2527 ObjFunc
	var_126_bool = var_107_object == 0; // 0x2529 NullEq
	if(var_126_bool == 0) goto Label_9519; // 0x252a JumpB
	var_127_string = "Can't find map"; // 0x252b PushS
	Trace(var_127_string); // 0x252c Func
	return 8; // 0x252e Return
	
Label_9519:
	var_128_float = GetByIndex(var_115_cvector, 0); // 0x252f PushE
	var_129_float = GetByIndex(var_115_cvector, 2); // 0x2530 PushE
	SetMapParams(var_128_float, var_129_float, var_109_float); // 0x2531 ObjFunc
	return 8; // 0x2533 Return
}


func_7958(var_302_bool, var_303_object, var_304_float)
{
	var_305_bool = var_303_object == 0; // 0x1f17 Not
	if(var_305_bool == 0) goto Label_7963; // 0x1f18 JumpB
	var_302_bool = 0; // 0x1f19 MovB
	return 0; // 0x1f1a Return
	
Label_7963:
	var_306_int = 0; // 0x1f1b PushI
	var_307_bool = var_304_float > var_306_int; // 0x1f1c GT
	if(var_307_bool == 0) goto Label_7970; // 0x1f1d JumpB
	var_308_int = 8; // 0x1f1e PushI
	SendWorldWndMessage(var_308_int); // 0x1f1f Func
	goto Label_7979; // 0x1f21 Jump
	
Label_7979:
	var_309_float = 0; // 0x1f2b PushV
	var_309_float = var_304_float; // 0x1f2c Mov
	func_7993(var_309_float); // 0x1f2d NEW_2
	var_313_bool = 0; var_314_object = Obj(); var_315_string = ""; var_316_float = 0; var_317_float = 0; var_318_float = 0; // 0x1f2f PushV
	var_314_object = var_303_object; // 0x1f30 Mov
	var_315_string = "reputation"; // 0x1f31 MovS
	var_316_float = var_304_float; // 0x1f32 Mov
	var_317_float = 0; // 0x1f33 MovI
	var_318_float = 1; // 0x1f34 MovI
	func_7521(var_313_bool, var_314_object, var_315_string, var_316_float, var_317_float, var_318_float); // 0x1f35 NEW_2
	var_302_bool = 1; // 0x1f37 MovB
	return 0; // 0x1f38 Return
	
Label_7970:
	var_337_int = 0; // 0x1f22 PushI
	var_338_bool = var_304_float < var_337_int; // 0x1f23 LT
	if(var_338_bool == 0) goto Label_7977; // 0x1f24 JumpB
	var_339_int = 9; // 0x1f25 PushI
	SendWorldWndMessage(var_339_int); // 0x1f26 Func
	goto Label_7979; // 0x1f28 Jump
	
Label_7977:
	var_302_bool = 0; // 0x1f29 MovB
	return 0; // 0x1f2a Return
}


func_8989(var_843_bool)
{
	var_845_int = 0; var_846_string = ""; // 0x231e PushV
	var_846_string = "d4q03"; // 0x231f MovS
	func_7879(var_845_int, var_846_string); // 0x2320 NEW_2
	var_847_int = 0; // 0x2322 PushI
	var_848_bool = var_845_int == var_847_int; // 0x2323 Eq
	if(var_848_bool == 0) goto Label_8999; // 0x2324 JumpB
	var_843_bool = 1; // 0x2325 MovB
	return 0; // 0x2326 Return
	
Label_8999:
	var_843_bool = 0; // 0x2327 MovB
	return 0; // 0x2328 Return
}


func_8478()
{
	var_267_object = Obj(); var_268_object = Obj(); var_269_object = Obj(); var_270_object = Obj(); // 0x211e PushV
	var_271_object = Obj(); // 0x211f PushV
	func_9475(var_271_object); // 0x2120 NEW_2
	var_269_object = var_271_object; // 0x2121 Mov
	var_272_string = "d4q03AlexandrAboutVolnica"; // 0x2123 PushS
	FindMark(var_270_object, var_272_string); // 0x2124 ObjFunc
	var_273_object = var_270_object; // 0x2126 Push
	if(var_273_object == 0) goto Label_8490; // 0x2127 JumpB
	Remove(); // 0x2128 ObjFunc
	
Label_8490:
	var_274_string = "d4q03AlexandrGotoGrif"; // 0x212a PushS
	FindMark(var_270_object, var_274_string); // 0x212b ObjFunc
	var_275_object = var_270_object; // 0x212d Push
	if(var_275_object == 0) goto Label_8497; // 0x212e JumpB
	Remove(); // 0x212f ObjFunc
	
Label_8497:
	var_276_string = "d4q03AlexandrGotoGrifSelf"; // 0x2131 PushS
	FindMark(var_270_object, var_276_string); // 0x2132 ObjFunc
	var_277_object = var_270_object; // 0x2134 Push
	if(var_277_object == 0) goto Label_8504; // 0x2135 JumpB
	Remove(); // 0x2136 ObjFunc
	
Label_8504:
	var_278_string = "d4q03GrifGotoAlexandr"; // 0x2138 PushS
	FindMark(var_270_object, var_278_string); // 0x2139 ObjFunc
	var_279_object = var_270_object; // 0x213b Push
	if(var_279_object == 0) goto Label_8511; // 0x213c JumpB
	Remove(); // 0x213d ObjFunc
	
Label_8511:
	var_280_string = "d4q03GrifGotoAlexandrSelf"; // 0x213f PushS
	FindMark(var_270_object, var_280_string); // 0x2140 ObjFunc
	var_281_object = var_270_object; // 0x2142 Push
	if(var_281_object == 0) goto Label_8518; // 0x2143 JumpB
	Remove(); // 0x2144 ObjFunc
	
Label_8518:
	func_9395(); // 0x2147 NEW_2
	var_290_bool = 0; var_291_string = ""; var_292_string = ""; // 0x2149 PushV
	var_291_string = "quest_d4_03"; // 0x214a MovS
	var_292_string = "completed"; // 0x214b MovS
	func_8003(var_290_bool, var_291_string, var_292_string); // 0x214c NEW_2
	return 4; // 0x214e Return
}


func_4384(var_0_object, var_891_int, var_892_object)
{
	var_894_object = Obj(); var_895_bool = 0; var_896_int = 0; var_897_bool = 0; var_898_object = Obj(); var_899_bool = 0; var_900_int = 0; var_901_bool = 0; // 0x1120 PushV
	var_0_object = var_892_object; // 0x1121 TMov
	var_902_bool = 0; var_903_object = Obj(); var_904_float = 0; // 0x1122 PushV
	var_903_object = var_892_object; // 0x1123 Mov
	var_904_float = 70.0; // 0x1124 MovF
	func_7574(var_903_object, var_904_float); // 0x1125 NEW_2
	var_905_bool = var_902_bool == 0; // 0x1127 Not
	if(var_905_bool == 0) goto Label_4395; // 0x1128 JumpB
	var_891_int = -2; // 0x1129 MovI
	return 8; // 0x112a Return
	
Label_4395:
	CreateDialog(var_898_object); // 0x112b Func
	var_906_int = 0; // 0x112d PushV
	func_8080(var_906_int); // 0x112e NEW_2
	SetNPCName(var_906_int); // 0x1130 ObjFunc
	var_907_int = 0; // 0x1132 PushV
	func_8078(var_907_int); // 0x1133 NEW_2
	SetNPCDescription(var_907_int); // 0x1135 ObjFunc
	var_908_string = ""; // 0x1137 PushV
	func_8082(var_908_string); // 0x1138 NEW_2
	SetPhoto(var_908_string); // 0x113a ObjFunc
	var_909_string = ""; // 0x113c PushV
	func_8084(var_909_string); // 0x113d NEW_2
	SetPhoto2(var_909_string); // 0x113f ObjFunc
	var_910_int = 0; // 0x1141 PushV
	func_9525(var_910_int); // 0x1142 NEW_2
	SetPlayerName(var_910_int); // 0x1144 ObjFunc
	var_900_int = -1; // 0x1146 MovI
	IsOverrideActive(var_899_bool); // 0x1147 Func
	var_911_bool = var_899_bool; // 0x1149 Push
	if(var_911_bool == 0) goto Label_4429; // 0x114a JumpB
	var_891_int = -2; // 0x114b MovI
	return 8; // 0x114c Return
	
Label_4429:
	DoDialog(var_898_object); // 0x114d Func
	var_912_bool = 0; var_913_object = Obj(); // 0x114f PushV
	var_914_object = Obj(); // 0x1150 PushV
	func_7852(var_914_object); // 0x1151 NEW_2
	var_913_object = var_914_object; // 0x1152 Mov
	func_7661(var_912_bool, var_913_object); // 0x1154 NEW_2
	var_915_object = Obj(); var_916_object = Obj(); // 0x1156 PushV
	var_915_object = var_892_object; // 0x1157 Mov
	var_916_object = var_898_object; // 0x1158 Mov
	TaskCall(11); // 0x1159 TaskCall
	func_4465(var_917_object, var_918_object, var_919_string, var_920_bool, var_915_object, var_916_object); // 0x115a NEW_2
	TaskReturn(); // 0x115b TaskReturn
	IsDialogEnd(var_901_bool); // 0x115d ObjFunc
	
Label_4447:
	var_983_bool = var_901_bool == 0; // 0x115f Not
	if(var_983_bool == 0) goto Label_4454; // 0x1160 JumpB
	sync(); // 0x1161 Func
	IsDialogEnd(var_901_bool); // 0x1163 ObjFunc
	goto Label_4447; // 0x1165 Jump
	
Label_4454:
	var_984_object = Obj(); // 0x1166 PushV
	var_984_object = var_892_object; // 0x1167 Mov
	func_7643(); // 0x1168 NEW_2
	StopDialog(var_898_object); // 0x116a Func
	GetReturnValue(var_900_int); // 0x116c ObjFunc
	var_891_int = var_900_int; // 0x116e Mov
	return 8; // 0x116f Return
}


func_9001(var_853_bool)
{
	var_855_int = 0; var_856_string = ""; // 0x232a PushV
	var_856_string = "ood4Alexandr2"; // 0x232b MovS
	func_7879(var_855_int, var_856_string); // 0x232c NEW_2
	var_857_int = 0; // 0x232e PushI
	var_858_bool = var_855_int == var_857_int; // 0x232f Eq
	if(var_858_bool == 0) goto Label_9011; // 0x2330 JumpB
	var_853_bool = 1; // 0x2331 MovB
	return 0; // 0x2332 Return
	
Label_9011:
	var_853_bool = 0; // 0x2333 MovB
	return 0; // 0x2334 Return
}


func_9525(var_140_int)
{
	var_141_int = 0; var_142_int = 0; // 0x2535 PushV
	var_143_string = "branch"; // 0x2536 PushS
	GetVariable(var_143_string, var_142_int); // 0x2537 Func
	var_144_int = 0; // 0x2539 PushI
	var_145_bool = var_142_int == var_144_int; // 0x253a Eq
	if(var_145_bool == 0) goto Label_9535; // 0x253b JumpB
	var_140_int = 1; // 0x253c MovI
	return 2; // 0x253d Return
	
Label_9535:
	var_146_int = 1; // 0x253f PushI
	var_147_bool = var_142_int == var_146_int; // 0x2540 Eq
	if(var_147_bool == 0) goto Label_9540; // 0x2541 JumpB
	var_140_int = 2; // 0x2542 MovI
	return 2; // 0x2543 Return
	
Label_9540:
	var_140_int = 3; // 0x2544 MovI
	return 2; // 0x2545 Return
}


func_9013(var_859_bool)
{
	var_861_int = 0; var_862_string = ""; // 0x2336 PushV
	var_862_string = "d4q03"; // 0x2337 MovS
	func_7879(var_861_int, var_862_string); // 0x2338 NEW_2
	var_863_int = 2; // 0x233a PushI
	var_864_bool = var_861_int == var_863_int; // 0x233b Eq
	if(var_864_bool == 0) goto Label_9023; // 0x233c JumpB
	var_859_bool = 1; // 0x233d MovB
	return 0; // 0x233e Return
	
Label_9023:
	var_859_bool = 0; // 0x233f MovB
	return 0; // 0x2340 Return
}


func_7993(var_309_float)
{
	var_310_object = Obj(); var_311_object = Obj(); // 0x1f39 PushV
	CreateFloatVector(var_311_object); // 0x1f3a Func
	add(var_309_float); // 0x1f3c ObjFunc
	var_312_int = 16; // 0x1f3e PushI
	SendWorldWndMessage(var_312_int, var_311_object); // 0x1f3f Func
	return 2; // 0x1f41 Return
}


func_9025(var_869_bool)
{
	var_871_int = 0; var_872_string = ""; // 0x2342 PushV
	var_872_string = "d4q03_alldead"; // 0x2343 MovS
	func_7879(var_871_int, var_872_string); // 0x2344 NEW_2
	var_873_int = 1; // 0x2346 PushI
	var_874_bool = var_871_int == var_873_int; // 0x2347 Eq
	if(var_874_bool == 0) goto Label_9035; // 0x2348 JumpB
	var_869_bool = 1; // 0x2349 MovB
	return 0; // 0x234a Return
	
Label_9035:
	var_869_bool = 0; // 0x234b MovB
	return 0; // 0x234c Return
}


func_8003(var_290_bool, var_291_string, var_292_string)
{
	var_293_object = Obj(); var_294_object = Obj(); // 0x1f43 PushV
	FindActor(var_294_object, var_291_string); // 0x1f44 Func
	var_295_bool = var_294_object == 0; // 0x1f46 NullEq
	if(var_295_bool == 0) goto Label_8010; // 0x1f47 JumpB
	var_290_bool = 0; // 0x1f48 MovB
	return 2; // 0x1f49 Return
	
Label_8010:
	Trigger(var_294_object, var_292_string); // 0x1f4a Func
	var_290_bool = 1; // 0x1f4c MovB
	return 2; // 0x1f4d Return
}


func_9542(var_74_object)
{
	var_75_bool = GlobalVars[1]; // 0x2547 PushGE
	var_76_bool = var_75_bool == 0; // 0x2548 Not
	if(var_76_bool == 0) goto Label_9555; // 0x2549 JumpB
	var_77_int = 0; var_78_object = Obj(); // 0x254a PushV
	var_78_object = var_74_object; // 0x254b Mov
	TaskCall(0); // 0x254c TaskCall
	func_0(var_79_object, var_77_int, var_78_object); // 0x254d NEW_2
	TaskReturn(); // 0x254e TaskReturn
	var_303_bool = GlobalVars[1]; // 0x2550 PushGE
	var_303_bool = 1; // 0x2551 MovB
	GlobalVars[1] = var_303_bool; // 0x2552 PopGE
	
Label_9555:
	var_304_bool = 0; var_305_int = 0; // 0x2553 PushV
	var_305_int = 2; // 0x2554 MovI
	func_8035(var_304_bool, var_305_int); // 0x2555 NEW_2
	if(var_304_bool == 0) goto Label_9567; // 0x2557 JumpB
	var_319_int = 0; var_320_object = Obj(); // 0x2558 PushV
	var_320_object = var_74_object; // 0x2559 Mov
	TaskCall(16); // 0x255a TaskCall
	func_6584(var_321_object, var_319_int, var_320_object); // 0x255b NEW_2
	TaskReturn(); // 0x255c TaskReturn
	return 0; // 0x255e Return
	
Label_9567:
	var_372_bool = 0; var_373_int = 0; // 0x255f PushV
	var_373_int = 1; // 0x2560 MovI
	func_8029(var_372_bool, var_373_int); // 0x2561 NEW_2
	if(var_372_bool == 0) goto Label_9579; // 0x2563 JumpB
	var_375_int = 0; var_376_object = Obj(); // 0x2564 PushV
	var_376_object = var_74_object; // 0x2565 Mov
	TaskCall(14); // 0x2566 TaskCall
	func_5591(var_377_object, var_375_int, var_376_object); // 0x2567 NEW_2
	TaskReturn(); // 0x2568 TaskReturn
	return 0; // 0x256a Return
	
Label_9579:
	var_481_bool = 0; var_482_int = 0; // 0x256b PushV
	var_482_int = 2; // 0x256c MovI
	func_8029(var_481_bool, var_482_int); // 0x256d NEW_2
	if(var_481_bool == 0) goto Label_9591; // 0x256f JumpB
	var_483_int = 0; var_484_object = Obj(); // 0x2570 PushV
	var_484_object = var_74_object; // 0x2571 Mov
	TaskCall(4); // 0x2572 TaskCall
	func_1419(var_485_object, var_483_int, var_484_object); // 0x2573 NEW_2
	TaskReturn(); // 0x2574 TaskReturn
	return 0; // 0x2576 Return
	
Label_9591:
	var_649_bool = 0; var_650_int = 0; // 0x2577 PushV
	var_650_int = 3; // 0x2578 MovI
	func_8029(var_649_bool, var_650_int); // 0x2579 NEW_2
	if(var_649_bool == 0) goto Label_9603; // 0x257b JumpB
	var_651_int = 0; var_652_object = Obj(); // 0x257c PushV
	var_652_object = var_74_object; // 0x257d Mov
	TaskCall(6); // 0x257e TaskCall
	func_2693(var_653_object, var_651_int, var_652_object); // 0x257f NEW_2
	TaskReturn(); // 0x2580 TaskReturn
	return 0; // 0x2582 Return
	
Label_9603:
	var_775_bool = 0; var_776_int = 0; // 0x2583 PushV
	var_776_int = 4; // 0x2584 MovI
	func_8029(var_775_bool, var_776_int); // 0x2585 NEW_2
	if(var_775_bool == 0) goto Label_9615; // 0x2587 JumpB
	var_777_int = 0; var_778_object = Obj(); // 0x2588 PushV
	var_778_object = var_74_object; // 0x2589 Mov
	TaskCall(8); // 0x258a TaskCall
	func_3619(var_779_object, var_777_int, var_778_object); // 0x258b NEW_2
	TaskReturn(); // 0x258c TaskReturn
	return 0; // 0x258e Return
	
Label_9615:
	var_889_bool = 0; var_890_int = 0; // 0x258f PushV
	var_890_int = 5; // 0x2590 MovI
	func_8029(var_889_bool, var_890_int); // 0x2591 NEW_2
	if(var_889_bool == 0) goto Label_9627; // 0x2593 JumpB
	var_891_int = 0; var_892_object = Obj(); // 0x2594 PushV
	var_892_object = var_74_object; // 0x2595 Mov
	TaskCall(10); // 0x2596 TaskCall
	func_4384(var_893_object, var_891_int, var_892_object); // 0x2597 NEW_2
	TaskReturn(); // 0x2598 TaskReturn
	return 0; // 0x259a Return
	
Label_9627:
	var_985_bool = 0; var_986_int = 0; // 0x259b PushV
	var_986_int = 6; // 0x259c MovI
	func_8029(var_985_bool, var_986_int); // 0x259d NEW_2
	if(var_985_bool == 0) goto Label_9639; // 0x259f JumpB
	var_987_int = 0; var_988_object = Obj(); // 0x25a0 PushV
	var_988_object = var_74_object; // 0x25a1 Mov
	TaskCall(2); // 0x25a2 TaskCall
	func_254(var_989_object, var_987_int, var_988_object); // 0x25a3 NEW_2
	TaskReturn(); // 0x25a4 TaskReturn
	return 0; // 0x25a6 Return
	
Label_9639:
	var_1128_bool = 0; var_1129_int = 0; // 0x25a7 PushV
	var_1129_int = 7; // 0x25a8 MovI
	func_8029(var_1128_bool, var_1129_int); // 0x25a9 NEW_2
	if(var_1128_bool == 0) goto Label_9651; // 0x25ab JumpB
	var_1130_int = 0; var_1131_object = Obj(); // 0x25ac PushV
	var_1131_object = var_74_object; // 0x25ad Mov
	TaskCall(12); // 0x25ae TaskCall
	func_5113(var_1132_object, var_1130_int, var_1131_object); // 0x25af NEW_2
	TaskReturn(); // 0x25b0 TaskReturn
	return 0; // 0x25b2 Return
	
Label_9651:
	var_1199_bool = 0; var_1200_int = 0; // 0x25b3 PushV
	var_1200_int = 12; // 0x25b4 MovI
	func_8029(var_1199_bool, var_1200_int); // 0x25b5 NEW_2
	if(var_1199_bool == 0) goto Label_9663; // 0x25b7 JumpB
	var_1201_int = 0; var_1202_object = Obj(); // 0x25b8 PushV
	var_1202_object = var_74_object; // 0x25b9 Mov
	TaskCall(18); // 0x25ba TaskCall
	func_6780(var_1203_object, var_1201_int, var_1202_object); // 0x25bb NEW_2
	TaskReturn(); // 0x25bc TaskReturn
	return 0; // 0x25be Return
	
Label_9663:
	var_1260_int = 0; var_1261_object = Obj(); // 0x25bf PushV
	var_1261_object = var_74_object; // 0x25c0 Mov
	TaskCall(20); // 0x25c1 TaskCall
	func_7039(var_1262_object, var_1260_int, var_1261_object); // 0x25c2 NEW_2
	TaskReturn(); // 0x25c3 TaskReturn
	return 0; // 0x25c5 Return
}


func_7494(var_95_bool)
{
	var_95_bool = 1; // 0x1d46 MovB
	return 0; // 0x1d47 Return
}


func_7496()
{
	StopAnimation(); // 0x1d48 Func
	StopGroup0(); // 0x1d4a Func
	return 0; // 0x1d4c Return
}


func_9037(var_875_bool)
{
	var_877_int = 0; var_878_string = ""; // 0x234e PushV
	var_878_string = "ood4Alexandr3"; // 0x234f MovS
	func_7879(var_877_int, var_878_string); // 0x2350 NEW_2
	var_879_int = 0; // 0x2352 PushI
	var_880_bool = var_877_int == var_879_int; // 0x2353 Eq
	if(var_880_bool == 0) goto Label_9047; // 0x2354 JumpB
	var_875_bool = 1; // 0x2355 MovB
	return 0; // 0x2356 Return
	
Label_9047:
	var_875_bool = 0; // 0x2357 MovB
	return 0; // 0x2358 Return
}


func_7501(var_71_float)
{
	var_73_cvector = CVector(0,0,0); var_74_cvector = CVector(0,0,0); var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0); // 0x1d4d PushV
	GetPosition(var_76_cvector); // 0x1d4e Func
	GetPosition(var_77_cvector); // 0x1d50 ObjFunc
	var_78_cvector = var_77_cvector - var_76_cvector; // 0x1d52 Sub2
	var_71_float = var_78_cvector | var_78_cvector; // 0x1d53 Or2
	return 6; // 0x1d54 Return
}


func_335(var_0_object, var_1_object, var_2_object, var_3_string, var_1011_object, var_1012_object)
{
	var_0_object = var_1012_object; // 0x150 TMov
	var_1_object = var_1011_object; // 0x151 TMov
	var_3_string = 0; // 0x152 TMovB
	var_1017_int = 1; // 0x153 PushI
	if(var_1017_int == 0) goto Label_479; // 0x154 JumpB
	var_1018_bool = 0; // 0x155 PushV
	var_1018_bool = 0; // 0x156 MovB
	var_1019_bool = 0; var_1020_object = Obj(); // 0x157 PushV
	var_1020_object = var_1_object; // 0x158 MovT
	func_9145(var_1020_object); // 0x159 NEW_2
	if(var_1019_bool == 0) goto Label_354; // 0x15b JumpB
	var_1025_bool = 0; var_1026_object = Obj(); // 0x15c PushV
	var_1026_object = var_1_object; // 0x15d MovT
	func_9157(var_1026_object); // 0x15e NEW_2
	if(var_1025_bool == 0) goto Label_354; // 0x160 JumpB
	var_1018_bool = 1; // 0x161 MovB
	
Label_354:
	if(var_1018_bool == 0) goto Label_380; // 0x162 JumpB
	var_1031_object = Obj(); var_1032_object = Obj(); // 0x163 PushV
	var_1031_object = var_1_object; // 0x164 MovT
	var_1032_object = var_0_object; // 0x165 MovT
	func_8630(); // 0x166 NEW_2
	var_1035_string = ""; // 0x168 PushV
	var_1035_string = "Neutral"; // 0x169 MovS
	func_509(var_1012_object, var_1035_string); // 0x16a NEW_2
	var_1043_int = 512650; // 0x16c PushI
	SetMessage(var_1043_int); // 0x16d TObjFunc
	ClearReplies(); // 0x16f TObjFunc
	var_1044_int = 510633; // 0x171 PushI
	var_1045_int = 13839; // 0x172 PushI
	var_1046_int = 11732; // 0x173 PushI
	AddReply(var_1044_int, var_1045_int, var_1046_int); // 0x174 TObjFunc
	var_1047_int = 510665; // 0x176 PushI
	var_1048_int = 11772; // 0x177 PushI
	var_1049_int = 11771; // 0x178 PushI
	AddReply(var_1047_int, var_1048_int, var_1049_int); // 0x179 TObjFunc
	goto Label_479; // 0x17b Jump
	
Label_479:
	var_1050_bool = 0; // 0x1df PushV
	func_8086(var_1050_bool); // 0x1e0 NEW_2
	if(var_1050_bool == 0) goto Label_494; // 0x1e2 JumpB
	
Label_483:
	lshWaitForAnimEnd(); // 0x1e3 Func
	var_1051_string = var_3_string; // 0x1e5 PushT
	if(var_1051_string == 0) goto Label_488; // 0x1e6 JumpB
	goto Label_493; // 0x1e7 Jump
	
Label_493:
	goto Label_508; // 0x1ed Jump
	
Label_508:
	return 0; // 0x1fc Return
	
Label_488:
	var_1052_string = ""; // 0x1e8 PushV
	var_1052_string = var_2_object; // 0x1e9 MovT
	func_7799(var_1052_string); // 0x1ea NEW_2
	goto Label_483; // 0x1ec Jump
	
Label_494:
	var_1053_string = "all"; // 0x1ee PushS
	var_1054_string = "idle"; // 0x1ef PushS
	PlayAnimation(var_1053_string, var_1054_string); // 0x1f0 Func
	
Label_498:
	WaitForAnimEnd(); // 0x1f2 Func
	var_1055_string = var_3_string; // 0x1f4 PushT
	if(var_1055_string == 0) goto Label_503; // 0x1f5 JumpB
	goto Label_508; // 0x1f6 Jump
	
Label_503:
	var_1056_string = "all"; // 0x1f7 PushS
	var_1057_string = "idle"; // 0x1f8 PushS
	PlayAnimation(var_1056_string, var_1057_string); // 0x1f9 Func
	goto Label_498; // 0x1fb Jump
	
Label_380:
	var_1058_string = ""; // 0x17c PushV
	var_1058_string = "Neutral"; // 0x17d MovS
	func_509(var_1012_object, var_1058_string); // 0x17e NEW_2
	var_1059_int = 511979; // 0x180 PushI
	SetMessage(var_1059_int); // 0x181 TObjFunc
	ClearReplies(); // 0x183 TObjFunc
	var_1060_bool = 0; // 0x185 PushV
	var_1060_bool = 0; // 0x186 MovB
	var_1061_bool = 0; // 0x187 PushV
	var_1061_bool = 0; // 0x188 MovB
	var_1062_bool = 0; var_1063_object = Obj(); // 0x189 PushV
	var_1063_object = var_1_object; // 0x18a MovT
	func_9169(var_1063_object); // 0x18b NEW_2
	if(var_1062_bool == 0) goto Label_404; // 0x18d JumpB
	var_1068_bool = 0; var_1069_object = Obj(); // 0x18e PushV
	var_1069_object = var_1_object; // 0x18f MovT
	func_9085(var_1069_object); // 0x190 NEW_2
	if(var_1068_bool == 0) goto Label_404; // 0x192 JumpB
	var_1061_bool = 1; // 0x193 MovB
	
Label_404:
	if(var_1061_bool == 0) goto Label_412; // 0x194 JumpB
	var_1074_bool = 0; var_1075_object = Obj(); // 0x195 PushV
	var_1075_object = var_1_object; // 0x196 MovT
	func_9241(var_1075_object); // 0x197 NEW_2
	var_1080_bool = var_1074_bool == 0; // 0x199 Not
	if(var_1080_bool == 0) goto Label_412; // 0x19a JumpB
	var_1060_bool = 1; // 0x19b MovB
	
Label_412:
	if(var_1060_bool == 0) goto Label_418; // 0x19c JumpB
	var_1081_int = 512649; // 0x19d PushI
	var_1082_int = 13832; // 0x19e PushI
	var_1083_int = 13829; // 0x19f PushI
	AddReply(var_1081_int, var_1082_int, var_1083_int); // 0x1a0 TObjFunc
	
Label_418:
	var_1084_bool = 0; // 0x1a2 PushV
	var_1084_bool = 0; // 0x1a3 MovB
	var_1085_bool = 0; // 0x1a4 PushV
	var_1085_bool = 0; // 0x1a5 MovB
	var_1086_bool = 0; var_1087_object = Obj(); // 0x1a6 PushV
	var_1087_object = var_1_object; // 0x1a7 MovT
	func_9181(var_1087_object); // 0x1a8 NEW_2
	if(var_1086_bool == 0) goto Label_433; // 0x1aa JumpB
	var_1092_bool = 0; var_1093_object = Obj(); // 0x1ab PushV
	var_1093_object = var_1_object; // 0x1ac MovT
	func_9085(var_1093_object); // 0x1ad NEW_2
	if(var_1092_bool == 0) goto Label_433; // 0x1af JumpB
	var_1085_bool = 1; // 0x1b0 MovB
	
Label_433:
	if(var_1085_bool == 0) goto Label_441; // 0x1b1 JumpB
	var_1094_bool = 0; var_1095_object = Obj(); // 0x1b2 PushV
	var_1095_object = var_1_object; // 0x1b3 MovT
	func_9253(var_1095_object); // 0x1b4 NEW_2
	var_1100_bool = var_1094_bool == 0; // 0x1b6 Not
	if(var_1100_bool == 0) goto Label_441; // 0x1b7 JumpB
	var_1084_bool = 1; // 0x1b8 MovB
	
Label_441:
	if(var_1084_bool == 0) goto Label_447; // 0x1b9 JumpB
	var_1101_int = 512660; // 0x1ba PushI
	var_1102_int = 13832; // 0x1bb PushI
	var_1103_int = 13840; // 0x1bc PushI
	AddReply(var_1101_int, var_1102_int, var_1103_int); // 0x1bd TObjFunc
	
Label_447:
	var_1104_bool = 0; // 0x1bf PushV
	var_1104_bool = 0; // 0x1c0 MovB
	var_1105_bool = 0; var_1106_object = Obj(); // 0x1c1 PushV
	var_1106_object = var_1_object; // 0x1c2 MovT
	func_9193(var_1106_object); // 0x1c3 NEW_2
	if(var_1105_bool == 0) goto Label_460; // 0x1c5 JumpB
	var_1111_bool = 0; var_1112_object = Obj(); // 0x1c6 PushV
	var_1112_object = var_1_object; // 0x1c7 MovT
	func_9205(var_1112_object); // 0x1c8 NEW_2
	if(var_1111_bool == 0) goto Label_460; // 0x1ca JumpB
	var_1104_bool = 1; // 0x1cb MovB
	
Label_460:
	if(var_1104_bool == 0) goto Label_466; // 0x1cc JumpB
	var_1117_int = 511980; // 0x1cd PushI
	var_1118_int = 13196; // 0x1ce PushI
	var_1119_int = 13195; // 0x1cf PushI
	AddReply(var_1117_int, var_1118_int, var_1119_int); // 0x1d0 TObjFunc
	
Label_466:
	var_1120_int = 513018; // 0x1d2 PushI
	var_1121_int = -1; // 0x1d3 PushI
	var_1122_int = 14224; // 0x1d4 PushI
	AddReply(var_1120_int, var_1121_int, var_1122_int); // 0x1d5 TObjFunc
	var_1123_int = 542996; // 0x1d7 PushI
	var_1124_int = -1; // 0x1d8 PushI
	var_1125_int = 45444; // 0x1d9 PushI
	AddReply(var_1123_int, var_1124_int, var_1125_int); // 0x1da TObjFunc
	goto Label_479; // 0x1dc Jump
}


func_8015(var_79_float)
{
	var_80_float = 0; var_81_float = 0; // 0x1f4f PushV
	GetGameTime(var_81_float); // 0x1f50 Func
	var_79_float = var_81_float; // 0x1f52 Mov
	return 2; // 0x1f53 Return
}


func_8529()
{
	var_230_object = Obj(); var_231_string = ""; var_232_float = 0; // 0x2152 PushV
	var_233_object = Obj(); // 0x2153 PushV
	func_9475(var_233_object); // 0x2154 NEW_2
	var_230_object = var_233_object; // 0x2155 Mov
	var_231_string = "pt_map_warehouse_gangster"; // 0x2157 MovS
	var_232_float = 2; // 0x2158 MovI
	func_9492(var_230_object, var_231_string, var_232_float); // 0x2159 NEW_2
	var_234_object = Obj(); // 0x215b PushV
	func_9475(var_234_object); // 0x215c NEW_2
	ShowMap(var_234_object); // 0x215e ObjFunc
	return 0; // 0x2160 Return
}


func_8020(var_204_int)
{
	var_205_float = 0; var_206_float = 0; // 0x1f54 PushV
	GetGameTime(var_206_float); // 0x1f55 Func
	var_207_int = 1; // 0x1f57 PushI
	var_208_int = 0; // 0x1f58 PushV
	var_209_int = 24; // 0x1f59 PushI
	var_208_int = var_206_float / var_206_float; // 0x1f5a Div2
	var_204_int = var_207_int + var_208_int; // 0x1f5b Add2
	return 2; // 0x1f5c Return
}


func_7509(var_321_bool, var_322_object, var_323_string)
{
	var_324_bool = 0; var_325_bool = 0; // 0x1d55 PushV
	var_326_string = "HasProperty"; // 0x1d56 PushS
	var_327_int = 2; // 0x1d57 PushI
	var_328_bool = IsFuncExist(var_322_object, var_326_string, var_327_int); // 0x1d58 FuncExist
	var_329_bool = var_328_bool == 0; // 0x1d59 Not
	if(var_329_bool == 0) goto Label_7517; // 0x1d5a JumpB
	var_321_bool = 0; // 0x1d5b MovB
	return 2; // 0x1d5c Return
	
Label_7517:
	HasProperty(var_323_string, var_325_bool); // 0x1d5d ObjFunc
	var_321_bool = var_325_bool; // 0x1d5f Mov
	return 2; // 0x1d60 Return
}


func_9049(var_931_bool)
{
	var_933_int = 0; var_934_string = ""; // 0x235a PushV
	var_934_string = "d5q01"; // 0x235b MovS
	func_7879(var_933_int, var_934_string); // 0x235c NEW_2
	var_935_int = 2; // 0x235e PushI
	var_936_bool = var_933_int == var_935_int; // 0x235f Eq
	if(var_936_bool == 0) goto Label_9059; // 0x2360 JumpB
	var_931_bool = 1; // 0x2361 MovB
	return 0; // 0x2362 Return
	
Label_9059:
	var_931_bool = 0; // 0x2363 MovB
	return 0; // 0x2364 Return
}


func_8029(var_372_bool, var_373_int)
{
	var_374_int = 0; // 0x1f5e PushV
	func_8020(var_374_int); // 0x1f5f NEW_2
	var_372_bool = var_374_int == var_373_int; // 0x1f61 Eq2
	return 0; // 0x1f62 Return
}


func_8545(var_123_object)
{
	var_125_string = "revolver ammo6 is given"; // 0x2162 PushS
	Trace(var_125_string); // 0x2163 Func
	var_126_object = Obj(); var_127_string = ""; var_128_int = 0; // 0x2165 PushV
	var_126_object = var_123_object; // 0x2166 Mov
	var_127_string = "revolver_ammo"; // 0x2167 MovS
	var_128_int = 6; // 0x2168 MovI
	func_7945(var_126_object, var_127_string, var_128_int); // 0x2169 NEW_2
	return 0; // 0x216b Return
}


func_7521(var_313_bool, var_314_object, var_315_string, var_316_float, var_317_float, var_318_float)
{
	var_319_float = 0; var_320_float = 0; // 0x1d61 PushV
	var_321_bool = 0; var_322_object = Obj(); var_323_string = ""; // 0x1d62 PushV
	var_322_object = var_314_object; // 0x1d63 Mov
	var_323_string = var_315_string; // 0x1d64 Mov
	func_7509(var_321_bool, var_322_object, var_323_string); // 0x1d65 NEW_2
	var_330_bool = var_321_bool == 0; // 0x1d67 Not
	if(var_330_bool == 0) goto Label_7531; // 0x1d68 JumpB
	var_313_bool = 0; // 0x1d69 MovB
	return 2; // 0x1d6a Return
	
Label_7531:
	GetProperty(var_315_string, var_320_float); // 0x1d6b ObjFunc
	var_331_float = 0; var_332_float = 0; var_333_float = 0; var_334_float = 0; // 0x1d6d PushV
	var_332_float = var_320_float + var_316_float; // 0x1d6e Add2
	var_333_float = var_317_float; // 0x1d6f Mov
	var_334_float = var_318_float; // 0x1d70 Mov
	func_7868(var_331_float, var_332_float, var_333_float, var_334_float); // 0x1d71 NEW_2
	SetProperty(var_315_string, var_331_float); // 0x1d73 ObjFunc
	var_313_bool = 1; // 0x1d75 MovB
	return 2; // 0x1d76 Return
}


func_8035(var_304_bool, var_305_int)
{
	var_306_float = 0; var_307_int = 0; var_308_int = 0; var_309_float = 0; var_310_int = 0; var_311_int = 0; // 0x1f63 PushV
	GetGameTime(var_309_float); // 0x1f64 Func
	var_312_int = 1; // 0x1f66 PushI
	var_313_int = 0; // 0x1f67 PushV
	var_314_int = 24; // 0x1f68 PushI
	var_313_int = var_309_float / var_309_float; // 0x1f69 Div2
	var_310_int = var_312_int + var_313_int; // 0x1f6a Add2
	var_315_bool = var_310_int != var_305_int; // 0x1f6b Neq
	if(var_315_bool == 0) goto Label_8047; // 0x1f6c JumpB
	var_304_bool = 0; // 0x1f6d MovB
	return 6; // 0x1f6e Return
	
Label_8047:
	var_316_int = 0; // 0x1f6f PushV
	var_316_int = var_309_float; // 0x1f70 Mov
	var_317_int = 24; // 0x1f71 PushI
	var_311_int = var_316_int % var_317_int; // 0x1f72 Mod2
	var_318_int = 7; // 0x1f73 PushI
	var_304_bool = var_311_int < var_318_int; // 0x1f74 LT2
	return 6; // 0x1f75 Return
}


func_9061(var_758_bool)
{
	var_760_int = 0; var_761_string = ""; // 0x2366 PushV
	var_761_string = "ood3Alexandr5"; // 0x2367 MovS
	func_7879(var_760_int, var_761_string); // 0x2368 NEW_2
	var_762_int = 0; // 0x236a PushI
	var_763_bool = var_760_int == var_762_int; // 0x236b Eq
	if(var_763_bool == 0) goto Label_9071; // 0x236c JumpB
	var_758_bool = 1; // 0x236d MovB
	return 0; // 0x236e Return
	
Label_9071:
	var_758_bool = 0; // 0x236f MovB
	return 0; // 0x2370 Return
}


func_2920(var_2_object, var_699_string)
{
	var_700_bool = 0; // 0xb69 PushV
	func_8086(var_700_bool); // 0xb6a NEW_2
	var_701_bool = var_700_bool == 0; // 0xb6c Not
	if(var_701_bool == 0) goto Label_2927; // 0xb6d JumpB
	return 0; // 0xb6e Return
	
Label_2927:
	var_702_bool = var_699_string == var_2_object; // 0xb6f Eq
	if(var_702_bool == 0) goto Label_2930; // 0xb70 JumpB
	return 0; // 0xb71 Return
	
Label_2930:
	var_703_string = ""; var_704_bool = 0; // 0xb72 PushV
	var_703_string = var_699_string; // 0xb73 Mov
	var_705_string = ""; // 0xb74 PushS
	var_706_bool = var_699_string == var_705_string; // 0xb75 Eq
	if(var_706_bool == 0) goto Label_2937; // 0xb76 JumpB
	var_704_bool = 0; // 0xb77 MovB
	goto Label_2938; // 0xb78 Jump
	
Label_2938:
	func_7815(var_703_string, var_704_bool); // 0xb7a NEW_2
	var_2_object = var_699_string; // 0xb7c TMov
	return 0; // 0xb7d Return
	
Label_2937:
	var_704_bool = 1; // 0xb79 MovB
}


func_8556()
{
	var_239_string = "ood4Alexandr3"; // 0x216d PushS
	var_240_int = 1; // 0x216e PushI
	SetVariable(var_239_string, var_240_int); // 0x216f Func
	return 0; // 0x2171 Return
}


func_4465(var_0_object, var_1_object, var_2_object, var_3_string, var_915_object, var_916_object)
{
	var_0_object = var_916_object; // 0x1172 TMov
	var_1_object = var_915_object; // 0x1173 TMov
	var_3_string = 0; // 0x1174 TMovB
	var_921_int = 1; // 0x1175 PushI
	if(var_921_int == 0) goto Label_4536; // 0x1176 JumpB
	var_922_string = ""; // 0x1177 PushV
	var_922_string = "Neutral"; // 0x1178 MovS
	func_4566(var_916_object, var_922_string); // 0x1179 NEW_2
	var_930_int = 511591; // 0x117b PushI
	SetMessage(var_930_int); // 0x117c TObjFunc
	ClearReplies(); // 0x117e TObjFunc
	var_931_bool = 0; var_932_object = Obj(); // 0x1180 PushV
	var_932_object = var_1_object; // 0x1181 MovT
	func_9049(var_932_object); // 0x1182 NEW_2
	if(var_931_bool == 0) goto Label_4490; // 0x1184 JumpB
	var_937_int = 511592; // 0x1185 PushI
	var_938_int = 12788; // 0x1186 PushI
	var_939_int = 12787; // 0x1187 PushI
	AddReply(var_937_int, var_938_int, var_939_int); // 0x1188 TObjFunc
	
Label_4490:
	var_940_bool = 0; // 0x118a PushV
	var_940_bool = 0; // 0x118b MovB
	var_941_bool = 0; var_942_object = Obj(); // 0x118c PushV
	var_942_object = var_1_object; // 0x118d MovT
	func_9097(var_942_object); // 0x118e NEW_2
	if(var_941_bool == 0) goto Label_4503; // 0x1190 JumpB
	var_947_bool = 0; var_948_object = Obj(); // 0x1191 PushV
	var_948_object = var_1_object; // 0x1192 MovT
	func_9121(var_948_object); // 0x1193 NEW_2
	if(var_947_bool == 0) goto Label_4503; // 0x1195 JumpB
	var_940_bool = 1; // 0x1196 MovB
	
Label_4503:
	if(var_940_bool == 0) goto Label_4509; // 0x1197 JumpB
	var_953_int = 511611; // 0x1198 PushI
	var_954_int = 12810; // 0x1199 PushI
	var_955_int = 12809; // 0x119a PushI
	AddReply(var_953_int, var_954_int, var_955_int); // 0x119b TObjFunc
	
Label_4509:
	var_956_bool = 0; // 0x119d PushV
	var_956_bool = 0; // 0x119e MovB
	var_957_bool = 0; var_958_object = Obj(); // 0x119f PushV
	var_958_object = var_1_object; // 0x11a0 MovT
	func_9109(var_958_object); // 0x11a1 NEW_2
	if(var_957_bool == 0) goto Label_4522; // 0x11a3 JumpB
	var_963_bool = 0; var_964_object = Obj(); // 0x11a4 PushV
	var_964_object = var_1_object; // 0x11a5 MovT
	func_9133(var_964_object); // 0x11a6 NEW_2
	if(var_963_bool == 0) goto Label_4522; // 0x11a8 JumpB
	var_956_bool = 1; // 0x11a9 MovB
	
Label_4522:
	if(var_956_bool == 0) goto Label_4528; // 0x11aa JumpB
	var_969_int = 511624; // 0x11ab PushI
	var_970_int = 12823; // 0x11ac PushI
	var_971_int = 12822; // 0x11ad PushI
	AddReply(var_969_int, var_970_int, var_971_int); // 0x11ae TObjFunc
	
Label_4528:
	var_972_int = 511635; // 0x11b0 PushI
	var_973_int = -1; // 0x11b1 PushI
	var_974_int = 12834; // 0x11b2 PushI
	AddReply(var_972_int, var_973_int, var_974_int); // 0x11b3 TObjFunc
	goto Label_4536; // 0x11b5 Jump
	
Label_4536:
	var_975_bool = 0; // 0x11b8 PushV
	func_8086(var_975_bool); // 0x11b9 NEW_2
	if(var_975_bool == 0) goto Label_4551; // 0x11bb JumpB
	
Label_4540:
	lshWaitForAnimEnd(); // 0x11bc Func
	var_976_string = var_3_string; // 0x11be PushT
	if(var_976_string == 0) goto Label_4545; // 0x11bf JumpB
	goto Label_4550; // 0x11c0 Jump
	
Label_4550:
	goto Label_4565; // 0x11c6 Jump
	
Label_4565:
	return 0; // 0x11d5 Return
	
Label_4545:
	var_977_string = ""; // 0x11c1 PushV
	var_977_string = var_2_object; // 0x11c2 MovT
	func_7799(var_977_string); // 0x11c3 NEW_2
	goto Label_4540; // 0x11c5 Jump
	
Label_4551:
	var_978_string = "all"; // 0x11c7 PushS
	var_979_string = "idle"; // 0x11c8 PushS
	PlayAnimation(var_978_string, var_979_string); // 0x11c9 Func
	
Label_4555:
	WaitForAnimEnd(); // 0x11cb Func
	var_980_string = var_3_string; // 0x11cd PushT
	if(var_980_string == 0) goto Label_4560; // 0x11ce JumpB
	goto Label_4565; // 0x11cf Jump
	
Label_4560:
	var_981_string = "all"; // 0x11d0 PushS
	var_982_string = "idle"; // 0x11d1 PushS
	PlayAnimation(var_981_string, var_982_string); // 0x11d2 Func
	goto Label_4555; // 0x11d4 Jump
}


func_8562()
{
	var_64_object = Obj(); var_65_object = Obj(); // 0x2172 PushV
	var_66_string = "d5q01"; // 0x2173 PushS
	var_67_int = 3; // 0x2174 PushI
	SetVariable(var_66_string, var_67_int); // 0x2175 Func
	var_68_object = Obj(); // 0x2177 PushV
	func_9475(var_68_object); // 0x2178 NEW_2
	var_65_object = var_68_object; // 0x2179 Mov
	var_75_string = "d5q01AlexandrGotoKaterina"; // 0x217b PushS
	var_76_string = "pt_map_katerina"; // 0x217c PushS
	var_77_int = 1; // 0x217d PushI
	var_78_int = 511958; // 0x217e PushI
	var_79_float = 0; // 0x217f PushV
	func_8015(var_79_float); // 0x2180 NEW_2
	AddMark(var_75_string, var_76_string, var_77_int, var_78_int, var_79_float); // 0x2182 ObjFunc
	return 2; // 0x2184 Return
}


func_9073(var_415_bool)
{
	var_417_int = 0; var_418_string = ""; // 0x2372 PushV
	var_418_string = "d1q01"; // 0x2373 MovS
	func_7879(var_417_int, var_418_string); // 0x2374 NEW_2
	var_421_int = 3; // 0x2376 PushI
	var_422_bool = var_417_int == var_421_int; // 0x2377 Eq
	if(var_422_bool == 0) goto Label_9083; // 0x2378 JumpB
	var_415_bool = 1; // 0x2379 MovB
	return 0; // 0x237a Return
	
Label_9083:
	var_415_bool = 0; // 0x237b MovB
	return 0; // 0x237c Return
}


func_8054(var_81_string, var_82_int)
{
	var_83_string = ""; var_84_string = ""; // 0x1f76 PushV
	var_84_string = "idle"; // 0x1f77 MovS
	var_85_int = var_82_int; // 0x1f78 Push
	if(var_85_int == 0) goto Label_8059; // 0x1f79 JumpB
	var_84_string = var_84_string + var_82_int; // 0x1f7a Add2
	
Label_8059:
	var_81_string = var_84_string; // 0x1f7b Mov
	return 2; // 0x1f7c Return
}


func_7543(var_251_string, var_252_int)
{
	var_253_int = 0; var_254_int = 0; // 0x1d77 PushV
	GetProperty(var_251_string, var_254_int); // 0x1d78 ObjFunc
	var_255_int = var_254_int + var_252_int; // 0x1d7a Add
	SetProperty(var_251_string, var_255_int); // 0x1d7b ObjFunc
	return 2; // 0x1d7d Return
}


func_9085(var_1068_bool)
{
	var_1070_int = 0; var_1071_string = ""; // 0x237e PushV
	var_1071_string = "d6q02"; // 0x237f MovS
	func_7879(var_1070_int, var_1071_string); // 0x2380 NEW_2
	var_1072_int = 1; // 0x2382 PushI
	var_1073_bool = var_1070_int == var_1072_int; // 0x2383 Eq
	if(var_1073_bool == 0) goto Label_9095; // 0x2384 JumpB
	var_1068_bool = 1; // 0x2385 MovB
	return 0; // 0x2386 Return
	
Label_9095:
	var_1068_bool = 0; // 0x2387 MovB
	return 0; // 0x2388 Return
}


func_8061(var_75_int)
{
	var_76_int = 0; var_77_bool = 0; var_78_int = 0; var_79_bool = 0; // 0x1f7d PushV
	var_78_int = 0; // 0x1f7e MovI
	
Label_8063:
	var_80_string = "all"; // 0x1f7f PushS
	var_81_string = ""; var_82_int = 0; // 0x1f80 PushV
	var_82_int = var_78_int; // 0x1f81 Mov
	func_8054(var_81_string, var_82_int); // 0x1f82 NEW_2
	HasAnimation(var_79_bool, var_80_string, var_81_string); // 0x1f84 Func
	var_86_bool = var_79_bool == 0; // 0x1f86 Not
	if(var_86_bool == 0) goto Label_8073; // 0x1f87 JumpB
	goto Label_8076; // 0x1f88 Jump
	
Label_8076:
	var_75_int = var_78_int; // 0x1f8c Mov
	return 4; // 0x1f8d Return
	
Label_8073:
	var_87_int = 1; // 0x1f89 PushI
	var_78_int = var_78_int + var_87_int; // 0x1f8a Add2
	goto Label_8063; // 0x1f8b Jump
}


func_7550(var_64_bool, var_65_cvector)
{
	var_66_cvector = CVector(0,0,0); var_67_cvector = CVector(0,0,0); var_68_bool = 0; var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); var_71_bool = 0; // 0x1d7e PushV
	GetPosition(var_69_cvector); // 0x1d7f Func
	var_70_cvector = var_65_cvector - var_69_cvector; // 0x1d81 Sub2
	var_72_float = GetByIndex(var_70_cvector, 0); // 0x1d82 PushE
	var_73_float = GetByIndex(var_70_cvector, 2); // 0x1d83 PushE
	Rotate(var_72_float, var_73_float, var_71_bool); // 0x1d84 Func
	var_64_bool = var_71_bool; // 0x1d86 Mov
	return 6; // 0x1d87 Return
}


func_7039(var_0_object, var_1260_int, var_1261_object)
{
	var_1263_object = Obj(); var_1264_bool = 0; var_1265_int = 0; var_1266_bool = 0; var_1267_object = Obj(); var_1268_bool = 0; var_1269_int = 0; var_1270_bool = 0; // 0x1b7f PushV
	var_0_object = var_1261_object; // 0x1b80 TMov
	var_1271_bool = 0; var_1272_object = Obj(); var_1273_float = 0; // 0x1b81 PushV
	var_1272_object = var_1261_object; // 0x1b82 Mov
	var_1273_float = 70.0; // 0x1b83 MovF
	func_7574(var_1272_object, var_1273_float); // 0x1b84 NEW_2
	var_1274_bool = var_1271_bool == 0; // 0x1b86 Not
	if(var_1274_bool == 0) goto Label_7050; // 0x1b87 JumpB
	var_1260_int = -2; // 0x1b88 MovI
	return 8; // 0x1b89 Return
	
Label_7050:
	CreateDialog(var_1267_object); // 0x1b8a Func
	var_1275_int = 0; // 0x1b8c PushV
	func_8080(var_1275_int); // 0x1b8d NEW_2
	SetNPCName(var_1275_int); // 0x1b8f ObjFunc
	var_1276_int = 0; // 0x1b91 PushV
	func_8078(var_1276_int); // 0x1b92 NEW_2
	SetNPCDescription(var_1276_int); // 0x1b94 ObjFunc
	var_1277_string = ""; // 0x1b96 PushV
	func_8082(var_1277_string); // 0x1b97 NEW_2
	SetPhoto(var_1277_string); // 0x1b99 ObjFunc
	var_1278_string = ""; // 0x1b9b PushV
	func_8084(var_1278_string); // 0x1b9c NEW_2
	SetPhoto2(var_1278_string); // 0x1b9e ObjFunc
	var_1279_int = 0; // 0x1ba0 PushV
	func_9525(var_1279_int); // 0x1ba1 NEW_2
	SetPlayerName(var_1279_int); // 0x1ba3 ObjFunc
	var_1269_int = -1; // 0x1ba5 MovI
	IsOverrideActive(var_1268_bool); // 0x1ba6 Func
	var_1280_bool = var_1268_bool; // 0x1ba8 Push
	if(var_1280_bool == 0) goto Label_7084; // 0x1ba9 JumpB
	var_1260_int = -2; // 0x1baa MovI
	return 8; // 0x1bab Return
	
Label_7084:
	DoDialog(var_1267_object); // 0x1bac Func
	var_1281_bool = 0; var_1282_object = Obj(); // 0x1bae PushV
	var_1283_object = Obj(); // 0x1baf PushV
	func_7852(var_1283_object); // 0x1bb0 NEW_2
	var_1282_object = var_1283_object; // 0x1bb1 Mov
	func_7661(var_1281_bool, var_1282_object); // 0x1bb3 NEW_2
	var_1284_object = Obj(); var_1285_object = Obj(); // 0x1bb5 PushV
	var_1284_object = var_1261_object; // 0x1bb6 Mov
	var_1285_object = var_1267_object; // 0x1bb7 Mov
	TaskCall(21); // 0x1bb8 TaskCall
	func_7120(var_1286_object, var_1287_object, var_1288_string, var_1289_bool, var_1284_object, var_1285_object); // 0x1bb9 NEW_2
	TaskReturn(); // 0x1bba TaskReturn
	IsDialogEnd(var_1270_bool); // 0x1bbc ObjFunc
	
Label_7102:
	var_1314_bool = var_1270_bool == 0; // 0x1bbe Not
	if(var_1314_bool == 0) goto Label_7109; // 0x1bbf JumpB
	sync(); // 0x1bc0 Func
	IsDialogEnd(var_1270_bool); // 0x1bc2 ObjFunc
	goto Label_7102; // 0x1bc4 Jump
	
Label_7109:
	var_1315_object = Obj(); // 0x1bc5 PushV
	var_1315_object = var_1261_object; // 0x1bc6 Mov
	func_7643(); // 0x1bc7 NEW_2
	StopDialog(var_1267_object); // 0x1bc9 Func
	GetReturnValue(var_1269_int); // 0x1bcb ObjFunc
	var_1260_int = var_1269_int; // 0x1bcd Mov
	return 8; // 0x1bce Return
}


func_8582()
{
	var_177_string = "ood3Alexandr5"; // 0x2187 PushS
	var_178_int = 1; // 0x2188 PushI
	SetVariable(var_177_string, var_178_int); // 0x2189 Func
	return 0; // 0x218b Return
}


func_7560(var_60_bool)
{
	var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0); // 0x1d88 PushV
	GetPosition(var_63_cvector); // 0x1d89 ObjFunc
	var_64_bool = 0; var_65_cvector = CVector(0,0,0); // 0x1d8b PushV
	var_65_cvector = var_63_cvector; // 0x1d8c Mov
	func_7550(var_64_bool, var_65_cvector); // 0x1d8d NEW_2
	var_60_bool = var_64_bool; // 0x1d8e Mov
	return 2; // 0x1d90 Return
}


func_9097(var_941_bool)
{
	var_943_int = 0; var_944_string = ""; // 0x238a PushV
	var_944_string = "ood5Alexandr1"; // 0x238b MovS
	func_7879(var_943_int, var_944_string); // 0x238c NEW_2
	var_945_int = 0; // 0x238e PushI
	var_946_bool = var_943_int == var_945_int; // 0x238f Eq
	if(var_946_bool == 0) goto Label_9107; // 0x2390 JumpB
	var_941_bool = 1; // 0x2391 MovB
	return 0; // 0x2392 Return
	
Label_9107:
	var_941_bool = 0; // 0x2393 MovB
	return 0; // 0x2394 Return
}


func_1419(var_0_object, var_483_int, var_484_object)
{
	var_486_object = Obj(); var_487_bool = 0; var_488_int = 0; var_489_bool = 0; var_490_object = Obj(); var_491_bool = 0; var_492_int = 0; var_493_bool = 0; // 0x58b PushV
	var_0_object = var_484_object; // 0x58c TMov
	var_494_bool = 0; var_495_object = Obj(); var_496_float = 0; // 0x58d PushV
	var_495_object = var_484_object; // 0x58e Mov
	var_496_float = 70.0; // 0x58f MovF
	func_7574(var_495_object, var_496_float); // 0x590 NEW_2
	var_497_bool = var_494_bool == 0; // 0x592 Not
	if(var_497_bool == 0) goto Label_1430; // 0x593 JumpB
	var_483_int = -2; // 0x594 MovI
	return 8; // 0x595 Return
	
Label_1430:
	CreateDialog(var_490_object); // 0x596 Func
	var_498_int = 0; // 0x598 PushV
	func_8080(var_498_int); // 0x599 NEW_2
	SetNPCName(var_498_int); // 0x59b ObjFunc
	var_499_int = 0; // 0x59d PushV
	func_8078(var_499_int); // 0x59e NEW_2
	SetNPCDescription(var_499_int); // 0x5a0 ObjFunc
	var_500_string = ""; // 0x5a2 PushV
	func_8082(var_500_string); // 0x5a3 NEW_2
	SetPhoto(var_500_string); // 0x5a5 ObjFunc
	var_501_string = ""; // 0x5a7 PushV
	func_8084(var_501_string); // 0x5a8 NEW_2
	SetPhoto2(var_501_string); // 0x5aa ObjFunc
	var_502_int = 0; // 0x5ac PushV
	func_9525(var_502_int); // 0x5ad NEW_2
	SetPlayerName(var_502_int); // 0x5af ObjFunc
	var_492_int = -1; // 0x5b1 MovI
	IsOverrideActive(var_491_bool); // 0x5b2 Func
	var_503_bool = var_491_bool; // 0x5b4 Push
	if(var_503_bool == 0) goto Label_1464; // 0x5b5 JumpB
	var_483_int = -2; // 0x5b6 MovI
	return 8; // 0x5b7 Return
	
Label_1464:
	DoDialog(var_490_object); // 0x5b8 Func
	var_504_bool = 0; var_505_object = Obj(); // 0x5ba PushV
	var_506_object = Obj(); // 0x5bb PushV
	func_7852(var_506_object); // 0x5bc NEW_2
	var_505_object = var_506_object; // 0x5bd Mov
	func_7661(var_504_bool, var_505_object); // 0x5bf NEW_2
	var_507_object = Obj(); var_508_object = Obj(); // 0x5c1 PushV
	var_507_object = var_484_object; // 0x5c2 Mov
	var_508_object = var_490_object; // 0x5c3 Mov
	TaskCall(5); // 0x5c4 TaskCall
	func_1500(var_509_object, var_510_object, var_511_string, var_512_bool, var_507_object, var_508_object); // 0x5c5 NEW_2
	TaskReturn(); // 0x5c6 TaskReturn
	IsDialogEnd(var_493_bool); // 0x5c8 ObjFunc
	
Label_1482:
	var_647_bool = var_493_bool == 0; // 0x5ca Not
	if(var_647_bool == 0) goto Label_1489; // 0x5cb JumpB
	sync(); // 0x5cc Func
	IsDialogEnd(var_493_bool); // 0x5ce ObjFunc
	goto Label_1482; // 0x5d0 Jump
	
Label_1489:
	var_648_object = Obj(); // 0x5d1 PushV
	var_648_object = var_484_object; // 0x5d2 Mov
	func_7643(); // 0x5d3 NEW_2
	StopDialog(var_490_object); // 0x5d5 Func
	GetReturnValue(var_492_int); // 0x5d7 ObjFunc
	var_483_int = var_492_int; // 0x5d9 Mov
	return 8; // 0x5da Return
}


func_8588()
{
	var_64_object = Obj(); var_65_object = Obj(); // 0x218c PushV
	var_66_string = "d1q01"; // 0x218d PushS
	var_67_int = 4; // 0x218e PushI
	SetVariable(var_66_string, var_67_int); // 0x218f Func
	var_68_object = Obj(); // 0x2191 PushV
	func_9475(var_68_object); // 0x2192 NEW_2
	var_65_object = var_68_object; // 0x2193 Mov
	var_75_string = "d1q01AlexandrGotoJulia"; // 0x2195 PushS
	var_76_string = "pt_map_julia"; // 0x2196 PushS
	var_77_int = 1; // 0x2197 PushI
	var_78_int = 508636; // 0x2198 PushI
	var_79_float = 0; // 0x2199 PushV
	func_8015(var_79_float); // 0x219a NEW_2
	AddMark(var_75_string, var_76_string, var_77_int, var_78_int, var_79_float); // 0x219c ObjFunc
	func_9265(); // 0x219f NEW_2
	return 2; // 0x21a1 Return
}


func_8078(var_137_int)
{
	var_137_int = 515528; // 0x1f8e MovI
	return 0; // 0x1f8f Return
}


func_8080(var_136_int)
{
	var_136_int = 502854; // 0x1f90 MovI
	return 0; // 0x1f91 Return
}


func_7569(var_57_bool)
{
	var_58_bool = 0; var_59_bool = 0; // 0x1d91 PushV
	IsLoaded(var_59_bool); // 0x1d92 Func
	var_57_bool = var_59_bool; // 0x1d94 Mov
	return 2; // 0x1d95 Return
}


func_8082(var_138_string)
{
	var_138_string = "ui/NPC_Alexandr.png"; // 0x1f92 MovS
	return 0; // 0x1f93 Return
}


func_8084(var_139_string)
{
	var_139_string = "ui/NPC_Alexandr_b.png"; // 0x1f94 MovS
	return 0; // 0x1f95 Return
}


func_9109(var_957_bool)
{
	var_959_int = 0; var_960_string = ""; // 0x2396 PushV
	var_960_string = "ood5Alexandr2"; // 0x2397 MovS
	func_7879(var_959_int, var_960_string); // 0x2398 NEW_2
	var_961_int = 0; // 0x239a PushI
	var_962_bool = var_959_int == var_961_int; // 0x239b Eq
	if(var_962_bool == 0) goto Label_9119; // 0x239c JumpB
	var_957_bool = 1; // 0x239d MovB
	return 0; // 0x239e Return
	
Label_9119:
	var_957_bool = 0; // 0x239f MovB
	return 0; // 0x23a0 Return
}


func_7574(var_88_bool, var_90_float)
{
	var_91_float = 0; var_92_cvector = CVector(0,0,0); var_93_cvector = CVector(0,0,0); var_94_cvector = CVector(0,0,0); var_95_cvector = CVector(0,0,0); var_96_cvector = CVector(0,0,0); var_97_cvector = CVector(0,0,0); var_98_bool = 0; var_99_bool = 0; var_100_float = 0; var_101_cvector = CVector(0,0,0); var_102_cvector = CVector(0,0,0); var_103_cvector = CVector(0,0,0); var_104_cvector = CVector(0,0,0); var_105_cvector = CVector(0,0,0); var_106_cvector = CVector(0,0,0); var_107_bool = 0; var_108_bool = 0; // 0x1d96 PushV
	GetPosition(var_101_cvector); // 0x1d97 ObjFunc
	GetEyesHeight(var_100_float); // 0x1d99 ObjFunc
	var_109_float = GetByIndex(var_101_cvector, 1); // 0x1d9b PushE
	var_109_float = var_109_float + var_100_float; // 0x1d9c Add2
	SetByIndex(var_101_cvector, 1) = var_109_float; // 0x1d9d PopE
	GetPosition(var_102_cvector); // 0x1d9e Func
	GetEyesHeight(var_100_float); // 0x1da0 Func
	var_110_float = GetByIndex(var_102_cvector, 1); // 0x1da2 PushE
	var_110_float = var_110_float + var_100_float; // 0x1da3 Add2
	SetByIndex(var_102_cvector, 1) = var_110_float; // 0x1da4 PopE
	var_103_cvector = var_101_cvector - var_102_cvector; // 0x1da5 Sub2
	var_111_float = GetByIndex(var_103_cvector, 1); // 0x1da6 PushE
	var_111_float = 0; // 0x1da7 MovI
	SetByIndex(var_103_cvector, 1) = var_111_float; // 0x1da8 PopE
	var_112_int = var_103_cvector | var_103_cvector; // 0x1da9 Or
	var_113_float = sqrt(var_112_int); // 0x1daa Sqrt
	var_103_cvector = var_103_cvector / var_103_cvector; // 0x1dab Div2
	var_104_cvector = -var_103_cvector; // 0x1dac Neg2
	var_114_float = var_103_cvector * var_90_float; // 0x1dad Mult
	var_115_cvector = CVector(0,0,0); var_116_cvector = CVector(0,0,0); // 0x1dae PushV
	var_117_cvector = CVector(0.0, 1.0, 0.0); // 0x1daf PushVec
	var_116_cvector = var_104_cvector ^ var_117_cvector; // 0x1db0 Xor2
	func_7858(var_115_cvector, var_116_cvector); // 0x1db1 NEW_2
	var_123_int = 25; // 0x1db3 PushI
	var_124_float = var_115_cvector * var_123_int; // 0x1db4 Mult
	var_125_int = var_114_float + var_124_float; // 0x1db5 Add
	var_126_cvector = CVector(0.0, 10.0, 0.0); // 0x1db6 PushVec
	var_105_cvector = var_125_int - var_126_cvector; // 0x1db7 Sub2
	var_106_cvector = var_102_cvector + var_105_cvector; // 0x1db8 Add2
	IsOverrideActive(var_107_bool); // 0x1db9 Func
	var_127_bool = var_107_bool; // 0x1dbb Push
	if(var_127_bool == 0) goto Label_7615; // 0x1dbc JumpB
	var_88_bool = 0; // 0x1dbd MovB
	return 18; // 0x1dbe Return
	
Label_7615:
	StopWorld(); // 0x1dbf Func
	var_128_bool = 1; // 0x1dc1 PushB
	CameraTransit(var_106_cvector, var_104_cvector, var_128_bool); // 0x1dc2 Func
	var_129_float = GetByIndex(var_105_cvector, 0); // 0x1dc4 PushE
	var_130_float = GetByIndex(var_105_cvector, 2); // 0x1dc5 PushE
	Rotate(var_129_float, var_130_float); // 0x1dc6 Func
	var_131_bool = 0; // 0x1dc8 PushV
	func_8086(var_131_bool); // 0x1dc9 NEW_2
	if(var_131_bool == 0) goto Label_7629; // 0x1dcb JumpB
	goto Label_7637; // 0x1dcc Jump
	
Label_7637:
	CameraWaitForPlayFinish(); // 0x1dd5 Func
	ResumeWorld(); // 0x1dd7 Func
	var_88_bool = 1; // 0x1dd9 MovB
	return 18; // 0x1dda Return
	
Label_7629:
	var_132_string = "head"; // 0x1dcd PushS
	HasAnimationTrack(var_108_bool, var_132_string); // 0x1dce Func
	var_133_bool = var_108_bool; // 0x1dd0 Push
	if(var_133_bool == 0) goto Label_7637; // 0x1dd1 JumpB
	var_134_string = "head"; // 0x1dd2 PushS
	LookAsyncCamera(var_134_string); // 0x1dd3 Func
}


func_8086(var_131_bool)
{
	var_131_bool = 1; // 0x1f96 MovB
	return 0; // 0x1f97 Return
}


func_8088()
{
	var_173_object = Obj(); var_174_string = ""; var_175_float = 0; // 0x1f99 PushV
	var_176_object = Obj(); // 0x1f9a PushV
	func_9475(var_176_object); // 0x1f9b NEW_2
	var_173_object = var_176_object; // 0x1f9c Mov
	var_174_string = "pt_map_katerina"; // 0x1f9e MovS
	var_175_float = 2; // 0x1f9f MovI
	func_9492(var_173_object, var_174_string, var_175_float); // 0x1fa0 NEW_2
	var_196_object = Obj(); // 0x1fa2 PushV
	func_9475(var_196_object); // 0x1fa3 NEW_2
	ShowMap(var_196_object); // 0x1fa5 ObjFunc
	return 0; // 0x1fa7 Return
}


func_9121(var_947_bool)
{
	var_949_int = 0; var_950_string = ""; // 0x23a2 PushV
	var_950_string = "d5q03"; // 0x23a3 MovS
	func_7879(var_949_int, var_950_string); // 0x23a4 NEW_2
	var_951_int = 1; // 0x23a6 PushI
	var_952_bool = var_949_int == var_951_int; // 0x23a7 Eq
	if(var_952_bool == 0) goto Label_9131; // 0x23a8 JumpB
	var_947_bool = 1; // 0x23a9 MovB
	return 0; // 0x23aa Return
	
Label_9131:
	var_947_bool = 0; // 0x23ab MovB
	return 0; // 0x23ac Return
}


func_8611()
{
	var_96_string = "ood5Alexandr1"; // 0x21a4 PushS
	var_97_int = 1; // 0x21a5 PushI
	SetVariable(var_96_string, var_97_int); // 0x21a6 Func
	return 0; // 0x21a8 Return
}


func_8104()
{
	var_263_string = "playsound"; // 0x1fa9 PushS
	var_264_string = "givemoney"; // 0x1faa PushS
	TriggerWorld(var_263_string, var_264_string); // 0x1fab Func
	return 0; // 0x1fad Return
}


func_8617()
{
	var_110_string = "ood5Alexandr2"; // 0x21aa PushS
	var_111_int = 1; // 0x21ab PushI
	SetVariable(var_110_string, var_111_int); // 0x21ac Func
	return 0; // 0x21ae Return
}


func_9133(var_963_bool)
{
	var_965_int = 0; var_966_string = ""; // 0x23ae PushV
	var_966_string = "d5q03"; // 0x23af MovS
	func_7879(var_965_int, var_966_string); // 0x23b0 NEW_2
	var_967_int = 2; // 0x23b2 PushI
	var_968_bool = var_965_int == var_967_int; // 0x23b3 Eq
	if(var_968_bool == 0) goto Label_9143; // 0x23b4 JumpB
	var_963_bool = 1; // 0x23b5 MovB
	return 0; // 0x23b6 Return
	
Label_9143:
	var_963_bool = 0; // 0x23b7 MovB
	return 0; // 0x23b8 Return
}


func_8110()
{
	var_185_string = "playsound"; // 0x1faf PushS
	var_186_string = "giveitem"; // 0x1fb0 PushS
	TriggerWorld(var_185_string, var_186_string); // 0x1fb1 Func
	return 0; // 0x1fb3 Return
}


func_8623(var_300_object)
{
	var_302_bool = 0; var_303_object = Obj(); var_304_float = 0; // 0x21b0 PushV
	var_303_object = var_300_object; // 0x21b1 Mov
	var_304_float = 0.1; // 0x21b2 MovF
	func_7958(var_302_bool, var_303_object, var_304_float); // 0x21b3 NEW_2
	return 0; // 0x21b5 Return
}


func_8116()
{
	var_141_string = "ood1Alexandr1"; // 0x1fb5 PushS
	var_142_int = 1; // 0x1fb6 PushI
	SetVariable(var_141_string, var_142_int); // 0x1fb7 Func
	return 0; // 0x1fb9 Return
}


func_8630()
{
	var_1033_string = "ood6Alexandr1"; // 0x21b7 PushS
	var_1034_int = 1; // 0x21b8 PushI
	SetVariable(var_1033_string, var_1034_int); // 0x21b9 Func
	return 0; // 0x21bb Return
}


func_6584(var_0_object, var_319_int, var_320_object)
{
	var_322_object = Obj(); var_323_bool = 0; var_324_int = 0; var_325_bool = 0; var_326_object = Obj(); var_327_bool = 0; var_328_int = 0; var_329_bool = 0; // 0x19b8 PushV
	var_0_object = var_320_object; // 0x19b9 TMov
	var_330_bool = 0; var_331_object = Obj(); var_332_float = 0; // 0x19ba PushV
	var_331_object = var_320_object; // 0x19bb Mov
	var_332_float = 70.0; // 0x19bc MovF
	func_7574(var_331_object, var_332_float); // 0x19bd NEW_2
	var_333_bool = var_330_bool == 0; // 0x19bf Not
	if(var_333_bool == 0) goto Label_6595; // 0x19c0 JumpB
	var_319_int = -2; // 0x19c1 MovI
	return 8; // 0x19c2 Return
	
Label_6595:
	CreateDialog(var_326_object); // 0x19c3 Func
	var_334_int = 0; // 0x19c5 PushV
	func_8080(var_334_int); // 0x19c6 NEW_2
	SetNPCName(var_334_int); // 0x19c8 ObjFunc
	var_335_int = 0; // 0x19ca PushV
	func_8078(var_335_int); // 0x19cb NEW_2
	SetNPCDescription(var_335_int); // 0x19cd ObjFunc
	var_336_string = ""; // 0x19cf PushV
	func_8082(var_336_string); // 0x19d0 NEW_2
	SetPhoto(var_336_string); // 0x19d2 ObjFunc
	var_337_string = ""; // 0x19d4 PushV
	func_8084(var_337_string); // 0x19d5 NEW_2
	SetPhoto2(var_337_string); // 0x19d7 ObjFunc
	var_338_int = 0; // 0x19d9 PushV
	func_9525(var_338_int); // 0x19da NEW_2
	SetPlayerName(var_338_int); // 0x19dc ObjFunc
	var_328_int = -1; // 0x19de MovI
	IsOverrideActive(var_327_bool); // 0x19df Func
	var_339_bool = var_327_bool; // 0x19e1 Push
	if(var_339_bool == 0) goto Label_6629; // 0x19e2 JumpB
	var_319_int = -2; // 0x19e3 MovI
	return 8; // 0x19e4 Return
	
Label_6629:
	DoDialog(var_326_object); // 0x19e5 Func
	var_340_object = Obj(); var_341_object = Obj(); // 0x19e7 PushV
	var_340_object = var_320_object; // 0x19e8 Mov
	var_341_object = var_326_object; // 0x19e9 Mov
	TaskCall(17); // 0x19ea TaskCall
	func_6658(var_342_object, var_343_object, var_344_string, var_345_bool, var_340_object, var_341_object); // 0x19eb NEW_2
	TaskReturn(); // 0x19ec TaskReturn
	IsDialogEnd(var_329_bool); // 0x19ee ObjFunc
	
Label_6640:
	var_370_bool = var_329_bool == 0; // 0x19f0 Not
	if(var_370_bool == 0) goto Label_6647; // 0x19f1 JumpB
	sync(); // 0x19f2 Func
	IsDialogEnd(var_329_bool); // 0x19f4 ObjFunc
	goto Label_6640; // 0x19f6 Jump
	
Label_6647:
	var_371_object = Obj(); // 0x19f7 PushV
	var_371_object = var_320_object; // 0x19f8 Mov
	func_7643(); // 0x19f9 NEW_2
	StopDialog(var_326_object); // 0x19fb Func
	GetReturnValue(var_328_int); // 0x19fd ObjFunc
	var_319_int = var_328_int; // 0x19ff Mov
	return 8; // 0x1a00 Return
}


func_9145(var_1019_bool)
{
	var_1021_int = 0; var_1022_string = ""; // 0x23ba PushV
	var_1022_string = "d6q01"; // 0x23bb MovS
	func_7879(var_1021_int, var_1022_string); // 0x23bc NEW_2
	var_1023_int = 1; // 0x23be PushI
	var_1024_bool = var_1021_int == var_1023_int; // 0x23bf Eq
	if(var_1024_bool == 0) goto Label_9155; // 0x23c0 JumpB
	var_1019_bool = 1; // 0x23c1 MovB
	return 0; // 0x23c2 Return
	
Label_9155:
	var_1019_bool = 0; // 0x23c3 MovB
	return 0; // 0x23c4 Return
}


func_8122()
{
	var_816_string = "d4AlexandrVisit"; // 0x1fbb PushS
	var_817_int = 1; // 0x1fbc PushI
	SetVariable(var_816_string, var_817_int); // 0x1fbd Func
	return 0; // 0x1fbf Return
}


func_8636()
{
	var_145_string = "ood6Alexandr2"; // 0x21bd PushS
	var_146_int = 1; // 0x21be PushI
	SetVariable(var_145_string, var_146_int); // 0x21bf Func
	return 0; // 0x21c1 Return
}


func_8128()
{
	var_217_object = Obj(); var_218_string = ""; var_219_float = 0; // 0x1fc1 PushV
	var_220_object = Obj(); // 0x1fc2 PushV
	func_9475(var_220_object); // 0x1fc3 NEW_2
	var_217_object = var_220_object; // 0x1fc4 Mov
	var_218_string = "pt_d4q03_volnica"; // 0x1fc6 MovS
	var_219_float = 2; // 0x1fc7 MovI
	func_9492(var_217_object, var_218_string, var_219_float); // 0x1fc8 NEW_2
	var_221_object = Obj(); // 0x1fca PushV
	func_9475(var_221_object); // 0x1fcb NEW_2
	ShowMap(var_221_object); // 0x1fcd ObjFunc
	return 0; // 0x1fcf Return
}


func_8642()
{
	var_151_string = "ood6Alexandr3"; // 0x21c3 PushS
	var_152_int = 1; // 0x21c4 PushI
	SetVariable(var_151_string, var_152_int); // 0x21c5 Func
	return 0; // 0x21c7 Return
}


func_9157(var_1025_bool)
{
	var_1027_int = 0; var_1028_string = ""; // 0x23c6 PushV
	var_1028_string = "ood6Alexandr1"; // 0x23c7 MovS
	func_7879(var_1027_int, var_1028_string); // 0x23c8 NEW_2
	var_1029_int = 0; // 0x23ca PushI
	var_1030_bool = var_1027_int == var_1029_int; // 0x23cb Eq
	if(var_1030_bool == 0) goto Label_9167; // 0x23cc JumpB
	var_1025_bool = 1; // 0x23cd MovB
	return 0; // 0x23ce Return
	
Label_9167:
	var_1025_bool = 0; // 0x23cf MovB
	return 0; // 0x23d0 Return
}


func_8648()
{
	var_157_string = "ood6Alexandr4"; // 0x21c9 PushS
	var_158_int = 1; // 0x21ca PushI
	SetVariable(var_157_string, var_158_int); // 0x21cb Func
	return 0; // 0x21cd Return
}


func_8654()
{
	var_163_object = Obj(); var_164_object = Obj(); // 0x21ce PushV
	var_165_object = Obj(); // 0x21cf PushV
	func_9475(var_165_object); // 0x21d0 NEW_2
	var_164_object = var_165_object; // 0x21d1 Mov
	var_166_string = "d6q01AlexandrGotoKaterina"; // 0x21d3 PushS
	var_167_string = "pt_map_katerina"; // 0x21d4 PushS
	var_168_int = 1; // 0x21d5 PushI
	var_169_int = 515397; // 0x21d6 PushI
	var_170_float = 0; // 0x21d7 PushV
	func_8015(var_170_float); // 0x21d8 NEW_2
	AddMark(var_166_string, var_167_string, var_168_int, var_169_int, var_170_float); // 0x21da ObjFunc
	return 2; // 0x21dc Return
}


func_8144()
{
	func_9330(); // 0x1fd2 NEW_2
	return 0; // 0x1fd4 Return
}


func_9169(var_1062_bool)
{
	var_1064_int = 0; var_1065_string = ""; // 0x23d2 PushV
	var_1065_string = "ood6Alexandr2"; // 0x23d3 MovS
	func_7879(var_1064_int, var_1065_string); // 0x23d4 NEW_2
	var_1066_int = 0; // 0x23d6 PushI
	var_1067_bool = var_1064_int == var_1066_int; // 0x23d7 Eq
	if(var_1067_bool == 0) goto Label_9179; // 0x23d8 JumpB
	var_1062_bool = 1; // 0x23d9 MovB
	return 0; // 0x23da Return
	
Label_9179:
	var_1062_bool = 0; // 0x23db MovB
	return 0; // 0x23dc Return
}


func_7120(var_0_object, var_1_object, var_2_object, var_3_string, var_1284_object, var_1285_object)
{
	var_0_object = var_1285_object; // 0x1bd1 TMov
	var_1_object = var_1284_object; // 0x1bd2 TMov
	var_3_string = 0; // 0x1bd3 TMovB
	var_1290_int = 1; // 0x1bd4 PushI
	if(var_1290_int == 0) goto Label_7148; // 0x1bd5 JumpB
	var_1291_string = ""; // 0x1bd6 PushV
	var_1291_string = "Neutral"; // 0x1bd7 MovS
	func_7178(var_1285_object, var_1291_string); // 0x1bd8 NEW_2
	var_1299_int = 540542; // 0x1bda PushI
	SetMessage(var_1299_int); // 0x1bdb TObjFunc
	ClearReplies(); // 0x1bdd TObjFunc
	var_1300_int = 540543; // 0x1bdf PushI
	var_1301_int = -1; // 0x1be0 PushI
	var_1302_int = 42552; // 0x1be1 PushI
	AddReply(var_1300_int, var_1301_int, var_1302_int); // 0x1be2 TObjFunc
	var_1303_int = 540796; // 0x1be4 PushI
	var_1304_int = -1; // 0x1be5 PushI
	var_1305_int = 42845; // 0x1be6 PushI
	AddReply(var_1303_int, var_1304_int, var_1305_int); // 0x1be7 TObjFunc
	goto Label_7148; // 0x1be9 Jump
	
Label_7148:
	var_1306_bool = 0; // 0x1bec PushV
	func_8086(var_1306_bool); // 0x1bed NEW_2
	if(var_1306_bool == 0) goto Label_7163; // 0x1bef JumpB
	
Label_7152:
	lshWaitForAnimEnd(); // 0x1bf0 Func
	var_1307_string = var_3_string; // 0x1bf2 PushT
	if(var_1307_string == 0) goto Label_7157; // 0x1bf3 JumpB
	goto Label_7162; // 0x1bf4 Jump
	
Label_7162:
	goto Label_7177; // 0x1bfa Jump
	
Label_7177:
	return 0; // 0x1c09 Return
	
Label_7157:
	var_1308_string = ""; // 0x1bf5 PushV
	var_1308_string = var_2_object; // 0x1bf6 MovT
	func_7799(var_1308_string); // 0x1bf7 NEW_2
	goto Label_7152; // 0x1bf9 Jump
	
Label_7163:
	var_1309_string = "all"; // 0x1bfb PushS
	var_1310_string = "idle"; // 0x1bfc PushS
	PlayAnimation(var_1309_string, var_1310_string); // 0x1bfd Func
	
Label_7167:
	WaitForAnimEnd(); // 0x1bff Func
	var_1311_string = var_3_string; // 0x1c01 PushT
	if(var_1311_string == 0) goto Label_7172; // 0x1c02 JumpB
	goto Label_7177; // 0x1c03 Jump
	
Label_7172:
	var_1312_string = "all"; // 0x1c04 PushS
	var_1313_string = "idle"; // 0x1c05 PushS
	PlayAnimation(var_1312_string, var_1313_string); // 0x1c06 Func
	goto Label_7167; // 0x1c08 Jump
}


func_8149()
{
	var_147_string = "ood1Alexandr2"; // 0x1fd6 PushS
	var_148_int = 1; // 0x1fd7 PushI
	SetVariable(var_147_string, var_148_int); // 0x1fd8 Func
	return 0; // 0x1fda Return
}


func_4566(var_2_object, var_922_string)
{
	var_923_bool = 0; // 0x11d7 PushV
	func_8086(var_923_bool); // 0x11d8 NEW_2
	var_924_bool = var_923_bool == 0; // 0x11da Not
	if(var_924_bool == 0) goto Label_4573; // 0x11db JumpB
	return 0; // 0x11dc Return
	
Label_4573:
	var_925_bool = var_922_string == var_2_object; // 0x11dd Eq
	if(var_925_bool == 0) goto Label_4576; // 0x11de JumpB
	return 0; // 0x11df Return
	
Label_4576:
	var_926_string = ""; var_927_bool = 0; // 0x11e0 PushV
	var_926_string = var_922_string; // 0x11e1 Mov
	var_928_string = ""; // 0x11e2 PushS
	var_929_bool = var_922_string == var_928_string; // 0x11e3 Eq
	if(var_929_bool == 0) goto Label_4583; // 0x11e4 JumpB
	var_927_bool = 0; // 0x11e5 MovB
	goto Label_4584; // 0x11e6 Jump
	
Label_4584:
	func_7815(var_926_string, var_927_bool); // 0x11e8 NEW_2
	var_2_object = var_922_string; // 0x11ea TMov
	return 0; // 0x11eb Return
	
Label_4583:
	var_927_bool = 1; // 0x11e7 MovB
}


func_5591(var_0_object, var_375_int, var_376_object)
{
	var_378_object = Obj(); var_379_bool = 0; var_380_int = 0; var_381_bool = 0; var_382_object = Obj(); var_383_bool = 0; var_384_int = 0; var_385_bool = 0; // 0x15d7 PushV
	var_0_object = var_376_object; // 0x15d8 TMov
	var_386_bool = 0; var_387_object = Obj(); var_388_float = 0; // 0x15d9 PushV
	var_387_object = var_376_object; // 0x15da Mov
	var_388_float = 70.0; // 0x15db MovF
	func_7574(var_387_object, var_388_float); // 0x15dc NEW_2
	var_389_bool = var_386_bool == 0; // 0x15de Not
	if(var_389_bool == 0) goto Label_5602; // 0x15df JumpB
	var_375_int = -2; // 0x15e0 MovI
	return 8; // 0x15e1 Return
	
Label_5602:
	CreateDialog(var_382_object); // 0x15e2 Func
	var_390_int = 0; // 0x15e4 PushV
	func_8080(var_390_int); // 0x15e5 NEW_2
	SetNPCName(var_390_int); // 0x15e7 ObjFunc
	var_391_int = 0; // 0x15e9 PushV
	func_8078(var_391_int); // 0x15ea NEW_2
	SetNPCDescription(var_391_int); // 0x15ec ObjFunc
	var_392_string = ""; // 0x15ee PushV
	func_8082(var_392_string); // 0x15ef NEW_2
	SetPhoto(var_392_string); // 0x15f1 ObjFunc
	var_393_string = ""; // 0x15f3 PushV
	func_8084(var_393_string); // 0x15f4 NEW_2
	SetPhoto2(var_393_string); // 0x15f6 ObjFunc
	var_394_int = 0; // 0x15f8 PushV
	func_9525(var_394_int); // 0x15f9 NEW_2
	SetPlayerName(var_394_int); // 0x15fb ObjFunc
	var_384_int = -1; // 0x15fd MovI
	IsOverrideActive(var_383_bool); // 0x15fe Func
	var_395_bool = var_383_bool; // 0x1600 Push
	if(var_395_bool == 0) goto Label_5636; // 0x1601 JumpB
	var_375_int = -2; // 0x1602 MovI
	return 8; // 0x1603 Return
	
Label_5636:
	DoDialog(var_382_object); // 0x1604 Func
	var_396_bool = 0; var_397_object = Obj(); // 0x1606 PushV
	var_398_object = Obj(); // 0x1607 PushV
	func_7852(var_398_object); // 0x1608 NEW_2
	var_397_object = var_398_object; // 0x1609 Mov
	func_7661(var_396_bool, var_397_object); // 0x160b NEW_2
	var_399_object = Obj(); var_400_object = Obj(); // 0x160d PushV
	var_399_object = var_376_object; // 0x160e Mov
	var_400_object = var_382_object; // 0x160f Mov
	TaskCall(15); // 0x1610 TaskCall
	func_5672(var_401_object, var_402_object, var_403_string, var_404_bool, var_399_object, var_400_object); // 0x1611 NEW_2
	TaskReturn(); // 0x1612 TaskReturn
	IsDialogEnd(var_385_bool); // 0x1614 ObjFunc
	
Label_5654:
	var_479_bool = var_385_bool == 0; // 0x1616 Not
	if(var_479_bool == 0) goto Label_5661; // 0x1617 JumpB
	sync(); // 0x1618 Func
	IsDialogEnd(var_385_bool); // 0x161a ObjFunc
	goto Label_5654; // 0x161c Jump
	
Label_5661:
	var_480_object = Obj(); // 0x161d PushV
	var_480_object = var_376_object; // 0x161e Mov
	func_7643(); // 0x161f NEW_2
	StopDialog(var_382_object); // 0x1621 Func
	GetReturnValue(var_384_int); // 0x1623 ObjFunc
	var_375_int = var_384_int; // 0x1625 Mov
	return 8; // 0x1626 Return
}


func_7643()
{
	var_296_bool = 0; var_297_bool = 0; // 0x1ddb PushV
	var_298_bool = 1; // 0x1ddc PushB
	CameraSwitchToNormal(var_298_bool); // 0x1ddd Func
	var_299_bool = 0; // 0x1ddf PushV
	func_8086(var_299_bool); // 0x1de0 NEW_2
	if(var_299_bool == 0) goto Label_7652; // 0x1de2 JumpB
	goto Label_7660; // 0x1de3 Jump
	
Label_7660:
	return 2; // 0x1dec Return
	
Label_7652:
	var_300_string = "head"; // 0x1de4 PushS
	HasAnimationTrack(var_297_bool, var_300_string); // 0x1de5 Func
	var_301_bool = var_297_bool; // 0x1de7 Push
	if(var_301_bool == 0) goto Label_7660; // 0x1de8 JumpB
	var_302_string = "head"; // 0x1de9 PushS
	UnlookAsync(var_302_string); // 0x1dea Func
}


func_1500(var_0_object, var_1_object, var_2_object, var_3_string, var_507_object, var_508_object)
{
	var_0_object = var_508_object; // 0x5dd TMov
	var_1_object = var_507_object; // 0x5de TMov
	var_3_string = 0; // 0x5df TMovB
	var_513_int = 1; // 0x5e0 PushI
	if(var_513_int == 0) goto Label_1702; // 0x5e1 JumpB
	var_514_bool = 0; var_515_object = Obj(); // 0x5e2 PushV
	var_515_object = var_1_object; // 0x5e3 MovT
	func_8792(var_515_object); // 0x5e4 NEW_2
	if(var_514_bool == 0) goto Label_1536; // 0x5e6 JumpB
	var_520_object = Obj(); var_521_object = Obj(); // 0x5e7 PushV
	var_520_object = var_1_object; // 0x5e8 MovT
	var_521_object = var_0_object; // 0x5e9 MovT
	func_8719(); // 0x5ea NEW_2
	var_524_string = ""; // 0x5ec PushV
	var_524_string = "Neutral"; // 0x5ed MovS
	func_1732(var_508_object, var_524_string); // 0x5ee NEW_2
	var_532_int = 506610; // 0x5f0 PushI
	SetMessage(var_532_int); // 0x5f1 TObjFunc
	ClearReplies(); // 0x5f3 TObjFunc
	var_533_int = 506611; // 0x5f5 PushI
	var_534_int = 7748; // 0x5f6 PushI
	var_535_int = 7280; // 0x5f7 PushI
	AddReply(var_533_int, var_534_int, var_535_int); // 0x5f8 TObjFunc
	var_536_int = 507066; // 0x5fa PushI
	var_537_int = 7748; // 0x5fb PushI
	var_538_int = 7784; // 0x5fc PushI
	AddReply(var_536_int, var_537_int, var_538_int); // 0x5fd TObjFunc
	goto Label_1702; // 0x5ff Jump
	
Label_1702:
	var_539_bool = 0; // 0x6a6 PushV
	func_8086(var_539_bool); // 0x6a7 NEW_2
	if(var_539_bool == 0) goto Label_1717; // 0x6a9 JumpB
	
Label_1706:
	lshWaitForAnimEnd(); // 0x6aa Func
	var_540_string = var_3_string; // 0x6ac PushT
	if(var_540_string == 0) goto Label_1711; // 0x6ad JumpB
	goto Label_1716; // 0x6ae Jump
	
Label_1716:
	goto Label_1731; // 0x6b4 Jump
	
Label_1731:
	return 0; // 0x6c3 Return
	
Label_1711:
	var_541_string = ""; // 0x6af PushV
	var_541_string = var_2_object; // 0x6b0 MovT
	func_7799(var_541_string); // 0x6b1 NEW_2
	goto Label_1706; // 0x6b3 Jump
	
Label_1717:
	var_542_string = "all"; // 0x6b5 PushS
	var_543_string = "idle"; // 0x6b6 PushS
	PlayAnimation(var_542_string, var_543_string); // 0x6b7 Func
	
Label_1721:
	WaitForAnimEnd(); // 0x6b9 Func
	var_544_string = var_3_string; // 0x6bb PushT
	if(var_544_string == 0) goto Label_1726; // 0x6bc JumpB
	goto Label_1731; // 0x6bd Jump
	
Label_1726:
	var_545_string = "all"; // 0x6be PushS
	var_546_string = "idle"; // 0x6bf PushS
	PlayAnimation(var_545_string, var_546_string); // 0x6c0 Func
	goto Label_1721; // 0x6c2 Jump
	
Label_1536:
	var_547_bool = 0; // 0x600 PushV
	var_547_bool = 0; // 0x601 MovB
	var_548_bool = 0; // 0x602 PushV
	var_548_bool = 0; // 0x603 MovB
	var_549_bool = 0; var_550_object = Obj(); // 0x604 PushV
	var_550_object = var_1_object; // 0x605 MovT
	func_8804(var_550_object); // 0x606 NEW_2
	if(var_549_bool == 0) goto Label_1551; // 0x608 JumpB
	var_555_bool = 0; var_556_object = Obj(); // 0x609 PushV
	var_556_object = var_1_object; // 0x60a MovT
	func_8864(var_556_object); // 0x60b NEW_2
	if(var_555_bool == 0) goto Label_1551; // 0x60d JumpB
	var_548_bool = 1; // 0x60e MovB
	
Label_1551:
	if(var_548_bool == 0) goto Label_1558; // 0x60f JumpB
	var_557_bool = 0; var_558_object = Obj(); // 0x610 PushV
	var_558_object = var_1_object; // 0x611 MovT
	func_8869(var_558_object); // 0x612 NEW_2
	if(var_557_bool == 0) goto Label_1558; // 0x614 JumpB
	var_547_bool = 1; // 0x615 MovB
	
Label_1558:
	if(var_547_bool == 0) goto Label_1589; // 0x616 JumpB
	var_563_object = Obj(); var_564_object = Obj(); // 0x617 PushV
	var_563_object = var_1_object; // 0x618 MovT
	var_564_object = var_0_object; // 0x619 MovT
	func_8161(); // 0x61a NEW_2
	var_567_string = ""; // 0x61c PushV
	var_567_string = "Neutral"; // 0x61d MovS
	func_1732(var_508_object, var_567_string); // 0x61e NEW_2
	var_568_int = 506731; // 0x620 PushI
	SetMessage(var_568_int); // 0x621 TObjFunc
	ClearReplies(); // 0x623 TObjFunc
	var_569_int = 506732; // 0x625 PushI
	var_570_int = 7420; // 0x626 PushI
	var_571_int = 7419; // 0x627 PushI
	AddReply(var_569_int, var_570_int, var_571_int); // 0x628 TObjFunc
	var_572_int = 506742; // 0x62a PushI
	var_573_int = 7420; // 0x62b PushI
	var_574_int = 7430; // 0x62c PushI
	AddReply(var_572_int, var_573_int, var_574_int); // 0x62d TObjFunc
	var_575_int = 506743; // 0x62f PushI
	var_576_int = 7433; // 0x630 PushI
	var_577_int = 7432; // 0x631 PushI
	AddReply(var_575_int, var_576_int, var_577_int); // 0x632 TObjFunc
	goto Label_1702; // 0x634 Jump
	
Label_1589:
	var_578_string = ""; // 0x635 PushV
	var_578_string = "Neutral"; // 0x636 MovS
	func_1732(var_508_object, var_578_string); // 0x637 NEW_2
	var_579_int = 506614; // 0x639 PushI
	SetMessage(var_579_int); // 0x63a TObjFunc
	ClearReplies(); // 0x63c TObjFunc
	var_580_bool = 0; // 0x63e PushV
	var_580_bool = 0; // 0x63f MovB
	var_581_bool = 0; var_582_object = Obj(); // 0x640 PushV
	var_582_object = var_1_object; // 0x641 MovT
	func_8816(var_582_object); // 0x642 NEW_2
	if(var_581_bool == 0) goto Label_1611; // 0x644 JumpB
	var_587_bool = 0; var_588_object = Obj(); // 0x645 PushV
	var_588_object = var_1_object; // 0x646 MovT
	func_8852(var_588_object); // 0x647 NEW_2
	if(var_587_bool == 0) goto Label_1611; // 0x649 JumpB
	var_580_bool = 1; // 0x64a MovB
	
Label_1611:
	if(var_580_bool == 0) goto Label_1617; // 0x64b JumpB
	var_593_int = 506615; // 0x64c PushI
	var_594_int = 7282; // 0x64d PushI
	var_595_int = 7284; // 0x64e PushI
	AddReply(var_593_int, var_594_int, var_595_int); // 0x64f TObjFunc
	
Label_1617:
	var_596_bool = 0; // 0x651 PushV
	var_596_bool = 1; // 0x652 MovB
	var_597_bool = 0; // 0x653 PushV
	var_597_bool = 0; // 0x654 MovB
	var_598_bool = 0; // 0x655 PushV
	var_598_bool = 0; // 0x656 MovB
	var_599_bool = 0; var_600_object = Obj(); // 0x657 PushV
	var_600_object = var_1_object; // 0x658 MovT
	func_8893(var_600_object); // 0x659 NEW_2
	if(var_599_bool == 0) goto Label_1634; // 0x65b JumpB
	var_605_bool = 0; var_606_object = Obj(); // 0x65c PushV
	var_606_object = var_1_object; // 0x65d MovT
	func_8816(var_606_object); // 0x65e NEW_2
	if(var_605_bool == 0) goto Label_1634; // 0x660 JumpB
	var_598_bool = 1; // 0x661 MovB
	
Label_1634:
	if(var_598_bool == 0) goto Label_1642; // 0x662 JumpB
	var_607_bool = 0; var_608_object = Obj(); // 0x663 PushV
	var_608_object = var_1_object; // 0x664 MovT
	func_8852(var_608_object); // 0x665 NEW_2
	var_609_bool = var_607_bool == 0; // 0x667 Not
	if(var_609_bool == 0) goto Label_1642; // 0x668 JumpB
	var_597_bool = 1; // 0x669 MovB
	
Label_1642:
	if(var_597_bool == 0) goto Label_1668; // 0x66a JumpB
	var_610_bool = 0; // 0x66b PushV
	var_610_bool = 0; // 0x66c MovB
	var_611_bool = 0; // 0x66d PushV
	var_611_bool = 0; // 0x66e MovB
	var_612_bool = 0; var_613_object = Obj(); // 0x66f PushV
	var_613_object = var_1_object; // 0x670 MovT
	func_8881(var_613_object); // 0x671 NEW_2
	if(var_612_bool == 0) goto Label_1658; // 0x673 JumpB
	var_618_bool = 0; var_619_object = Obj(); // 0x674 PushV
	var_619_object = var_1_object; // 0x675 MovT
	func_8816(var_619_object); // 0x676 NEW_2
	if(var_618_bool == 0) goto Label_1658; // 0x678 JumpB
	var_611_bool = 1; // 0x679 MovB
	
Label_1658:
	if(var_611_bool == 0) goto Label_1666; // 0x67a JumpB
	var_620_bool = 0; var_621_object = Obj(); // 0x67b PushV
	var_621_object = var_1_object; // 0x67c MovT
	func_8852(var_621_object); // 0x67d NEW_2
	var_622_bool = var_620_bool == 0; // 0x67f Not
	if(var_622_bool == 0) goto Label_1666; // 0x680 JumpB
	var_610_bool = 1; // 0x681 MovB
	
Label_1666:
	if(var_610_bool == 0) goto Label_1668; // 0x682 JumpB
	var_596_bool = 0; // 0x683 MovB
	
Label_1668:
	if(var_596_bool == 0) goto Label_1674; // 0x684 JumpB
	var_623_int = 507071; // 0x685 PushI
	var_624_int = 7282; // 0x686 PushI
	var_625_int = 7794; // 0x687 PushI
	AddReply(var_623_int, var_624_int, var_625_int); // 0x688 TObjFunc
	
Label_1674:
	var_626_bool = 0; var_627_object = Obj(); // 0x68a PushV
	var_627_object = var_1_object; // 0x68b MovT
	func_8840(var_627_object); // 0x68c NEW_2
	if(var_626_bool == 0) goto Label_1684; // 0x68e JumpB
	var_632_int = 506618; // 0x68f PushI
	var_633_int = 7800; // 0x690 PushI
	var_634_int = 7287; // 0x691 PushI
	AddReply(var_632_int, var_633_int, var_634_int); // 0x692 TObjFunc
	
Label_1684:
	var_635_bool = 0; var_636_object = Obj(); // 0x694 PushV
	var_636_object = var_1_object; // 0x695 MovT
	func_8828(var_636_object); // 0x696 NEW_2
	if(var_635_bool == 0) goto Label_1694; // 0x698 JumpB
	var_641_int = 506730; // 0x699 PushI
	var_642_int = 7405; // 0x69a PushI
	var_643_int = 7417; // 0x69b PushI
	AddReply(var_641_int, var_642_int, var_643_int); // 0x69c TObjFunc
	
Label_1694:
	var_644_int = 507532; // 0x69e PushI
	var_645_int = -1; // 0x69f PushI
	var_646_int = 8314; // 0x6a0 PushI
	AddReply(var_644_int, var_645_int, var_646_int); // 0x6a1 TObjFunc
	goto Label_1702; // 0x6a3 Jump
}


func_9181(var_1086_bool)
{
	var_1088_int = 0; var_1089_string = ""; // 0x23de PushV
	var_1089_string = "ood6Alexandr3"; // 0x23df MovS
	func_7879(var_1088_int, var_1089_string); // 0x23e0 NEW_2
	var_1090_int = 0; // 0x23e2 PushI
	var_1091_bool = var_1088_int == var_1090_int; // 0x23e3 Eq
	if(var_1091_bool == 0) goto Label_9191; // 0x23e4 JumpB
	var_1086_bool = 1; // 0x23e5 MovB
	return 0; // 0x23e6 Return
	
Label_9191:
	var_1086_bool = 0; // 0x23e7 MovB
	return 0; // 0x23e8 Return
}


func_8155()
{
	var_64_string = "ood2Alexandr1"; // 0x1fdc PushS
	var_65_int = 1; // 0x1fdd PushI
	SetVariable(var_64_string, var_65_int); // 0x1fde Func
	return 0; // 0x1fe0 Return
}


func_8670()
{
	var_64_string = "ood7Alexandr1"; // 0x21df PushS
	var_65_int = 1; // 0x21e0 PushI
	SetVariable(var_64_string, var_65_int); // 0x21e1 Func
	return 0; // 0x21e3 Return
}


func_8161()
{
	var_565_string = "ood2Alexandr2"; // 0x1fe2 PushS
	var_566_int = 1; // 0x1fe3 PushI
	SetVariable(var_565_string, var_566_int); // 0x1fe4 Func
	return 0; // 0x1fe6 Return
}


func_8676()
{
	var_253_string = "KnowAlexandr"; // 0x21e5 PushS
	var_254_int = 1; // 0x21e6 PushI
	SetVariable(var_253_string, var_254_int); // 0x21e7 Func
	return 0; // 0x21e9 Return
}


func_8167()
{
	var_227_string = "ood2Alexandr3"; // 0x1fe8 PushS
	var_228_int = 1; // 0x1fe9 PushI
	SetVariable(var_227_string, var_228_int); // 0x1fea Func
	return 0; // 0x1fec Return
}


func_9193(var_1105_bool)
{
	var_1107_int = 0; var_1108_string = ""; // 0x23ea PushV
	var_1108_string = "d6q01KnowKillerIsKlara"; // 0x23eb MovS
	func_7879(var_1107_int, var_1108_string); // 0x23ec NEW_2
	var_1109_int = 1; // 0x23ee PushI
	var_1110_bool = var_1107_int == var_1109_int; // 0x23ef Eq
	if(var_1110_bool == 0) goto Label_9203; // 0x23f0 JumpB
	var_1105_bool = 1; // 0x23f1 MovB
	return 0; // 0x23f2 Return
	
Label_9203:
	var_1105_bool = 0; // 0x23f3 MovB
	return 0; // 0x23f4 Return
}


func_8682()
{
	var_64_object = Obj(); var_65_object = Obj(); // 0x21ea PushV
	var_66_object = Obj(); // 0x21eb PushV
	func_9475(var_66_object); // 0x21ec NEW_2
	var_65_object = var_66_object; // 0x21ed Mov
	var_73_string = "d6q01AlexandrGotoJulia"; // 0x21ef PushS
	var_74_string = "pt_map_julia"; // 0x21f0 PushS
	var_75_int = 1; // 0x21f1 PushI
	var_76_int = 515387; // 0x21f2 PushI
	var_77_float = 0; // 0x21f3 PushV
	func_8015(var_77_float); // 0x21f4 NEW_2
	AddMark(var_73_string, var_74_string, var_75_int, var_76_int, var_77_float); // 0x21f6 ObjFunc
	var_80_string = "d6q01AlexandrGotoLara"; // 0x21f8 PushS
	var_81_string = "pt_map_lara"; // 0x21f9 PushS
	var_82_int = 1; // 0x21fa PushI
	var_83_int = 515386; // 0x21fb PushI
	var_84_float = 0; // 0x21fc PushV
	func_8015(var_84_float); // 0x21fd NEW_2
	AddMark(var_80_string, var_81_string, var_82_int, var_83_int, var_84_float); // 0x21ff ObjFunc
	var_85_string = "d6q01AlexangrGotoJulLaraSelf"; // 0x2201 PushS
	var_86_string = "pt_map_alexandr"; // 0x2202 PushS
	var_87_int = 1; // 0x2203 PushI
	var_88_int = 515388; // 0x2204 PushI
	var_89_float = 0; // 0x2205 PushV
	func_8015(var_89_float); // 0x2206 NEW_2
	AddMark(var_85_string, var_86_string, var_87_int, var_88_int, var_89_float); // 0x2208 ObjFunc
	func_9408(); // 0x220b NEW_2
	return 2; // 0x220d Return
}


func_7661(var_149_bool, var_150_object)
{
	var_154_int = 0; var_155_int = 0; var_156_int = 0; var_157_int = 0; // 0x1ded PushV
	var_158_string = "voice_common"; // 0x1dee PushS
	GetVariable(var_158_string, var_156_int); // 0x1def Func
	var_159_int = var_156_int; // 0x1df1 Push
	if(var_159_int == 0) goto Label_7699; // 0x1df2 JumpB
	var_160_bool = 0; var_161_object = Obj(); // 0x1df3 PushV
	var_161_object = var_150_object; // 0x1df4 Mov
	func_7719(var_161_object); // 0x1df5 NEW_2
	var_190_bool = var_160_bool == 0; // 0x1df7 Not
	if(var_190_bool == 0) goto Label_7681; // 0x1df8 JumpB
	var_191_bool = 0; var_192_object = Obj(); // 0x1df9 PushV
	var_192_object = var_150_object; // 0x1dfa Mov
	func_7756(var_192_object); // 0x1dfb NEW_2
	var_226_bool = var_191_bool == 0; // 0x1dfd Not
	if(var_226_bool == 0) goto Label_7681; // 0x1dfe JumpB
	var_149_bool = 0; // 0x1dff MovB
	return 4; // 0x1e00 Return
	
Label_7681:
	var_227_int = 2; // 0x1e01 PushI
	irand(var_157_int, var_227_int); // 0x1e02 Func
	var_228_int = var_157_int; // 0x1e04 Push
	if(var_228_int == 0) goto Label_7694; // 0x1e05 JumpB
	var_229_string = "voice_common"; // 0x1e06 PushS
	var_230_int = 1; // 0x1e07 PushI
	var_231_int = var_156_int + var_230_int; // 0x1e08 Add
	var_232_int = 3; // 0x1e09 PushI
	var_233_int = var_231_int / var_232_int; // 0x1e0a Mod
	SetVariable(var_229_string, var_233_int); // 0x1e0b Func
	goto Label_7698; // 0x1e0d Jump
	
Label_7698:
	goto Label_7717; // 0x1e12 Jump
	
Label_7717:
	var_149_bool = 1; // 0x1e25 MovB
	return 4; // 0x1e26 Return
	
Label_7694:
	var_234_string = "voice_common"; // 0x1e0e PushS
	var_235_int = 0; // 0x1e0f PushI
	SetVariable(var_234_string, var_235_int); // 0x1e10 Func
	
Label_7699:
	var_236_bool = 0; var_237_object = Obj(); // 0x1e13 PushV
	var_237_object = var_150_object; // 0x1e14 Mov
	func_7756(var_237_object); // 0x1e15 NEW_2
	var_238_bool = var_236_bool == 0; // 0x1e17 Not
	if(var_238_bool == 0) goto Label_7713; // 0x1e18 JumpB
	var_239_bool = 0; var_240_object = Obj(); // 0x1e19 PushV
	var_240_object = var_150_object; // 0x1e1a Mov
	func_7719(var_240_object); // 0x1e1b NEW_2
	var_241_bool = var_239_bool == 0; // 0x1e1d Not
	if(var_241_bool == 0) goto Label_7713; // 0x1e1e JumpB
	var_149_bool = 0; // 0x1e1f MovB
	return 4; // 0x1e20 Return
	
Label_7713:
	var_242_string = "voice_common"; // 0x1e21 PushS
	var_243_int = 1; // 0x1e22 PushI
	SetVariable(var_242_string, var_243_int); // 0x1e23 Func
}


func_8173()
{
	var_289_string = "ood2Alexandr5"; // 0x1fee PushS
	var_290_int = 1; // 0x1fef PushI
	SetVariable(var_289_string, var_290_int); // 0x1ff0 Func
	return 0; // 0x1ff2 Return
}


func_8179(var_181_object)
{
	var_183_object = Obj(); var_184_object = Obj(); // 0x1ff3 PushV
	var_185_string = "Revolver is given"; // 0x1ff4 PushS
	Trace(var_185_string); // 0x1ff5 Func
	CreateInvItem(var_184_object); // 0x1ff7 Func
	var_186_string = "Revolver"; // 0x1ff9 PushS
	SetItemName(var_186_string); // 0x1ffa ObjFunc
	var_187_string = "durability"; // 0x1ffc PushS
	var_188_int = 30; // 0x1ffd PushI
	SetProperty(var_187_string, var_188_int); // 0x1ffe ObjFunc
	var_189_object = Obj(); var_190_object = Obj(); var_191_int = 0; // 0x2000 PushV
	var_189_object = var_181_object; // 0x2001 Mov
	var_190_object = var_184_object; // 0x2002 Mov
	var_191_int = 1; // 0x2003 MovI
	func_7926(var_190_object, var_191_int); // 0x2004 NEW_2
	return 2; // 0x2006 Return
}


func_9205(var_1111_bool)
{
	var_1113_int = 0; var_1114_string = ""; // 0x23f6 PushV
	var_1114_string = "ood6Alexandr4"; // 0x23f7 MovS
	func_7879(var_1113_int, var_1114_string); // 0x23f8 NEW_2
	var_1115_int = 0; // 0x23fa PushI
	var_1116_bool = var_1113_int == var_1115_int; // 0x23fb Eq
	if(var_1116_bool == 0) goto Label_9215; // 0x23fc JumpB
	var_1111_bool = 1; // 0x23fd MovB
	return 0; // 0x23fe Return
	
Label_9215:
	var_1111_bool = 0; // 0x23ff MovB
	return 0; // 0x2400 Return
}


func_5113(var_0_object, var_1130_int, var_1131_object)
{
	var_1133_object = Obj(); var_1134_bool = 0; var_1135_int = 0; var_1136_bool = 0; var_1137_object = Obj(); var_1138_bool = 0; var_1139_int = 0; var_1140_bool = 0; // 0x13f9 PushV
	var_0_object = var_1131_object; // 0x13fa TMov
	var_1141_bool = 0; var_1142_object = Obj(); var_1143_float = 0; // 0x13fb PushV
	var_1142_object = var_1131_object; // 0x13fc Mov
	var_1143_float = 70.0; // 0x13fd MovF
	func_7574(var_1142_object, var_1143_float); // 0x13fe NEW_2
	var_1144_bool = var_1141_bool == 0; // 0x1400 Not
	if(var_1144_bool == 0) goto Label_5124; // 0x1401 JumpB
	var_1130_int = -2; // 0x1402 MovI
	return 8; // 0x1403 Return
	
Label_5124:
	CreateDialog(var_1137_object); // 0x1404 Func
	var_1145_int = 0; // 0x1406 PushV
	func_8080(var_1145_int); // 0x1407 NEW_2
	SetNPCName(var_1145_int); // 0x1409 ObjFunc
	var_1146_int = 0; // 0x140b PushV
	func_8078(var_1146_int); // 0x140c NEW_2
	SetNPCDescription(var_1146_int); // 0x140e ObjFunc
	var_1147_string = ""; // 0x1410 PushV
	func_8082(var_1147_string); // 0x1411 NEW_2
	SetPhoto(var_1147_string); // 0x1413 ObjFunc
	var_1148_string = ""; // 0x1415 PushV
	func_8084(var_1148_string); // 0x1416 NEW_2
	SetPhoto2(var_1148_string); // 0x1418 ObjFunc
	var_1149_int = 0; // 0x141a PushV
	func_9525(var_1149_int); // 0x141b NEW_2
	SetPlayerName(var_1149_int); // 0x141d ObjFunc
	var_1139_int = -1; // 0x141f MovI
	IsOverrideActive(var_1138_bool); // 0x1420 Func
	var_1150_bool = var_1138_bool; // 0x1422 Push
	if(var_1150_bool == 0) goto Label_5158; // 0x1423 JumpB
	var_1130_int = -2; // 0x1424 MovI
	return 8; // 0x1425 Return
	
Label_5158:
	DoDialog(var_1137_object); // 0x1426 Func
	var_1151_bool = 0; var_1152_object = Obj(); // 0x1428 PushV
	var_1153_object = Obj(); // 0x1429 PushV
	func_7852(var_1153_object); // 0x142a NEW_2
	var_1152_object = var_1153_object; // 0x142b Mov
	func_7661(var_1151_bool, var_1152_object); // 0x142d NEW_2
	var_1154_object = Obj(); var_1155_object = Obj(); // 0x142f PushV
	var_1154_object = var_1131_object; // 0x1430 Mov
	var_1155_object = var_1137_object; // 0x1431 Mov
	TaskCall(13); // 0x1432 TaskCall
	func_5194(var_1156_object, var_1157_object, var_1158_string, var_1159_bool, var_1154_object, var_1155_object); // 0x1433 NEW_2
	TaskReturn(); // 0x1434 TaskReturn
	IsDialogEnd(var_1140_bool); // 0x1436 ObjFunc
	
Label_5176:
	var_1197_bool = var_1140_bool == 0; // 0x1438 Not
	if(var_1197_bool == 0) goto Label_5183; // 0x1439 JumpB
	sync(); // 0x143a Func
	IsDialogEnd(var_1140_bool); // 0x143c ObjFunc
	goto Label_5176; // 0x143e Jump
	
Label_5183:
	var_1198_object = Obj(); // 0x143f PushV
	var_1198_object = var_1131_object; // 0x1440 Mov
	func_7643(); // 0x1441 NEW_2
	StopDialog(var_1137_object); // 0x1443 Func
	GetReturnValue(var_1139_int); // 0x1445 ObjFunc
	var_1130_int = var_1139_int; // 0x1447 Mov
	return 8; // 0x1448 Return
}


func_509(var_2_object, var_1035_string)
{
	var_1036_bool = 0; // 0x1fe PushV
	func_8086(var_1036_bool); // 0x1ff NEW_2
	var_1037_bool = var_1036_bool == 0; // 0x201 Not
	if(var_1037_bool == 0) goto Label_516; // 0x202 JumpB
	return 0; // 0x203 Return
	
Label_516:
	var_1038_bool = var_1035_string == var_2_object; // 0x204 Eq
	if(var_1038_bool == 0) goto Label_519; // 0x205 JumpB
	return 0; // 0x206 Return
	
Label_519:
	var_1039_string = ""; var_1040_bool = 0; // 0x207 PushV
	var_1039_string = var_1035_string; // 0x208 Mov
	var_1041_string = ""; // 0x209 PushS
	var_1042_bool = var_1035_string == var_1041_string; // 0x20a Eq
	if(var_1042_bool == 0) goto Label_526; // 0x20b JumpB
	var_1040_bool = 0; // 0x20c MovB
	goto Label_527; // 0x20d Jump
	
Label_527:
	func_7815(var_1039_string, var_1040_bool); // 0x20f NEW_2
	var_2_object = var_1035_string; // 0x211 TMov
	return 0; // 0x212 Return
	
Label_526:
	var_1040_bool = 1; // 0x20e MovB
}


