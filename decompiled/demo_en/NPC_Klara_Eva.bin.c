task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_cvector)
{
	var_33_int = 1; // 0xa2 PushI
	if(var_33_int == 0) goto Label_225; // 0xa3 JumpB
	func_2893(); // 0xa5 NEW_2
	var_35_int = 26833; // 0xa7 PushI
	var_36_bool = var_31_bool == var_35_int; // 0xa8 Eq
	if(var_36_bool == 0) goto Label_190; // 0xa9 JumpB
	var_37_string = ""; // 0xaa PushV
	var_37_string = "Neutral"; // 0xab MovS
	func_139(var_32_cvector, var_37_string); // 0xac NEW_2
	var_54_int = 525477; // 0xae PushI
	SetMessage(var_54_int); // 0xaf TObjFunc
	ClearReplies(); // 0xb1 TObjFunc
	var_55_int = 529299; // 0xb3 PushI
	var_56_int = 30754; // 0xb4 PushI
	var_57_int = 30753; // 0xb5 PushI
	AddReply(var_55_int, var_56_int, var_57_int); // 0xb6 TObjFunc
	var_58_int = 525478; // 0xb8 PushI
	var_59_int = -1; // 0xb9 PushI
	var_60_int = 26834; // 0xba PushI
	AddReply(var_58_int, var_59_int, var_60_int); // 0xbb TObjFunc
	return 0; // 0xbd Return
	
Label_190:
	var_61_int = 30754; // 0xbe PushI
	var_62_bool = var_31_bool == var_61_int; // 0xbf Eq
	if(var_62_bool == 0) goto Label_213; // 0xc0 JumpB
	var_63_string = ""; // 0xc1 PushV
	var_63_string = "Neutral"; // 0xc2 MovS
	func_139(var_32_cvector, var_63_string); // 0xc3 NEW_2
	var_64_int = 529300; // 0xc5 PushI
	SetMessage(var_64_int); // 0xc6 TObjFunc
	ClearReplies(); // 0xc8 TObjFunc
	var_65_int = 529301; // 0xca PushI
	var_66_int = -1; // 0xcb PushI
	var_67_int = 30755; // 0xcc PushI
	AddReply(var_65_int, var_66_int, var_67_int); // 0xcd TObjFunc
	var_68_int = 529302; // 0xcf PushI
	var_69_int = -1; // 0xd0 PushI
	var_70_int = 30756; // 0xd1 PushI
	AddReply(var_68_int, var_69_int, var_70_int); // 0xd2 TObjFunc
	return 0; // 0xd4 Return
	
Label_213:
	var_3_string = 1; // 0xd5 TMovB
	var_71_bool = 0; // 0xd6 PushV
	func_3016(var_71_bool); // 0xd7 NEW_2
	if(var_71_bool == 0) goto Label_221; // 0xd9 JumpB
	lshStopAnimation(); // 0xda Func
	goto Label_223; // 0xdc Jump
	
Label_223:
	return 0; // 0xdf Return
	
Label_221:
	StopAnimation(); // 0xdd Func
	
Label_225:
	return 0; // 0xe1 Return
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_cvector)
{
	var_33_int = 1; // 0x1a1 PushI
	if(var_33_int == 0) goto Label_1064; // 0x1a2 JumpB
	func_2893(); // 0x1a4 NEW_2
	var_35_int = 26913; // 0x1a6 PushI
	var_36_bool = var_32_cvector == var_35_int; // 0x1a7 Eq
	if(var_36_bool == 0) goto Label_430; // 0x1a8 JumpB
	var_37_object = Obj(); var_38_object = Obj(); // 0x1a9 PushV
	var_37_object = var_1_object; // 0x1aa MovT
	var_38_object = var_0_object; // 0x1ab MovT
	func_3034(); // 0x1ac NEW_2
	
Label_430:
	var_64_int = 41094; // 0x1ae PushI
	var_65_bool = var_32_cvector == var_64_int; // 0x1af Eq
	if(var_65_bool == 0) goto Label_438; // 0x1b0 JumpB
	var_66_object = Obj(); var_67_object = Obj(); // 0x1b1 PushV
	var_66_object = var_1_object; // 0x1b2 MovT
	var_67_object = var_0_object; // 0x1b3 MovT
	func_3034(); // 0x1b4 NEW_2
	
Label_438:
	var_68_int = 41086; // 0x1b6 PushI
	var_69_bool = var_32_cvector == var_68_int; // 0x1b7 Eq
	if(var_69_bool == 0) goto Label_446; // 0x1b8 JumpB
	var_70_object = Obj(); var_71_object = Obj(); // 0x1b9 PushV
	var_70_object = var_1_object; // 0x1ba MovT
	var_71_object = var_0_object; // 0x1bb MovT
	func_3034(); // 0x1bc NEW_2
	
Label_446:
	var_72_int = 41082; // 0x1be PushI
	var_73_bool = var_32_cvector == var_72_int; // 0x1bf Eq
	if(var_73_bool == 0) goto Label_454; // 0x1c0 JumpB
	var_74_object = Obj(); var_75_object = Obj(); // 0x1c1 PushV
	var_74_object = var_1_object; // 0x1c2 MovT
	var_75_object = var_0_object; // 0x1c3 MovT
	func_3034(); // 0x1c4 NEW_2
	
Label_454:
	var_76_int = 42902; // 0x1c6 PushI
	var_77_bool = var_32_cvector == var_76_int; // 0x1c7 Eq
	if(var_77_bool == 0) goto Label_462; // 0x1c8 JumpB
	var_78_object = Obj(); var_79_object = Obj(); // 0x1c9 PushV
	var_78_object = var_1_object; // 0x1ca MovT
	var_79_object = var_0_object; // 0x1cb MovT
	func_3123(); // 0x1cc NEW_2
	
Label_462:
	var_90_int = 26925; // 0x1ce PushI
	var_91_bool = var_32_cvector == var_90_int; // 0x1cf Eq
	if(var_91_bool == 0) goto Label_470; // 0x1d0 JumpB
	var_92_object = Obj(); var_93_object = Obj(); // 0x1d1 PushV
	var_92_object = var_1_object; // 0x1d2 MovT
	var_93_object = var_0_object; // 0x1d3 MovT
	func_3043(); // 0x1d4 NEW_2
	
Label_470:
	var_96_int = 26929; // 0x1d6 PushI
	var_97_bool = var_32_cvector == var_96_int; // 0x1d7 Eq
	if(var_97_bool == 0) goto Label_478; // 0x1d8 JumpB
	var_98_object = Obj(); var_99_object = Obj(); // 0x1d9 PushV
	var_98_object = var_1_object; // 0x1da MovT
	var_99_object = var_0_object; // 0x1db MovT
	func_3049(); // 0x1dc NEW_2
	
Label_478:
	var_108_int = 41060; // 0x1de PushI
	var_109_bool = var_32_cvector == var_108_int; // 0x1df Eq
	if(var_109_bool == 0) goto Label_486; // 0x1e0 JumpB
	var_110_object = Obj(); var_111_object = Obj(); // 0x1e1 PushV
	var_110_object = var_1_object; // 0x1e2 MovT
	var_111_object = var_0_object; // 0x1e3 MovT
	func_3049(); // 0x1e4 NEW_2
	
Label_486:
	var_112_int = 41059; // 0x1e6 PushI
	var_113_bool = var_32_cvector == var_112_int; // 0x1e7 Eq
	if(var_113_bool == 0) goto Label_499; // 0x1e8 JumpB
	var_114_object = Obj(); var_115_object = Obj(); // 0x1e9 PushV
	var_114_object = var_1_object; // 0x1ea MovT
	var_115_object = var_0_object; // 0x1eb MovT
	func_3018(); // 0x1ec NEW_2
	var_132_object = Obj(); var_133_object = Obj(); // 0x1ee PushV
	var_132_object = var_1_object; // 0x1ef MovT
	var_133_object = var_0_object; // 0x1f0 MovT
	func_3107(); // 0x1f1 NEW_2
	
Label_499:
	var_158_int = 26904; // 0x1f3 PushI
	var_159_bool = var_31_bool == var_158_int; // 0x1f4 Eq
	if(var_159_bool == 0) goto Label_551; // 0x1f5 JumpB
	var_160_string = ""; // 0x1f6 PushV
	var_160_string = "Neutral"; // 0x1f7 MovS
	func_394(var_32_cvector, var_160_string); // 0x1f8 NEW_2
	var_177_int = 525548; // 0x1fa PushI
	SetMessage(var_177_int); // 0x1fb TObjFunc
	ClearReplies(); // 0x1fd TObjFunc
	var_178_bool = 0; var_179_object = Obj(); // 0x1ff PushV
	var_179_object = var_1_object; // 0x200 MovT
	func_3138(var_179_object); // 0x201 NEW_2
	if(var_178_bool == 0) goto Label_521; // 0x203 JumpB
	var_186_int = 525549; // 0x204 PushI
	var_187_int = 42898; // 0x205 PushI
	var_188_int = 26905; // 0x206 PushI
	AddReply(var_186_int, var_187_int, var_188_int); // 0x207 TObjFunc
	
Label_521:
	var_189_bool = 0; // 0x209 PushV
	var_189_bool = 0; // 0x20a MovB
	var_190_bool = 0; var_191_object = Obj(); // 0x20b PushV
	var_191_object = var_1_object; // 0x20c MovT
	func_3150(var_191_object); // 0x20d NEW_2
	if(var_190_bool == 0) goto Label_534; // 0x20f JumpB
	var_196_bool = 0; var_197_object = Obj(); // 0x210 PushV
	var_197_object = var_1_object; // 0x211 MovT
	func_3162(var_197_object); // 0x212 NEW_2
	if(var_196_bool == 0) goto Label_534; // 0x214 JumpB
	var_189_bool = 1; // 0x215 MovB
	
Label_534:
	if(var_189_bool == 0) goto Label_540; // 0x216 JumpB
	var_202_int = 525578; // 0x217 PushI
	var_203_int = 41036; // 0x218 PushI
	var_204_int = 26925; // 0x219 PushI
	AddReply(var_202_int, var_203_int, var_204_int); // 0x21a TObjFunc
	
Label_540:
	var_205_int = 539127; // 0x21c PushI
	var_206_int = -1; // 0x21d PushI
	var_207_int = 41057; // 0x21e PushI
	AddReply(var_205_int, var_206_int, var_207_int); // 0x21f TObjFunc
	var_208_int = 525558; // 0x221 PushI
	var_209_int = -1; // 0x222 PushI
	var_210_int = 26914; // 0x223 PushI
	AddReply(var_208_int, var_209_int, var_210_int); // 0x224 TObjFunc
	return 0; // 0x226 Return
	
Label_551:
	var_211_int = 41036; // 0x227 PushI
	var_212_bool = var_31_bool == var_211_int; // 0x228 Eq
	if(var_212_bool == 0) goto Label_574; // 0x229 JumpB
	var_213_string = ""; // 0x22a PushV
	var_213_string = "Love"; // 0x22b MovS
	func_394(var_32_cvector, var_213_string); // 0x22c NEW_2
	var_214_int = 539108; // 0x22e PushI
	SetMessage(var_214_int); // 0x22f TObjFunc
	ClearReplies(); // 0x231 TObjFunc
	var_215_int = 539110; // 0x233 PushI
	var_216_int = 41039; // 0x234 PushI
	var_217_int = 41038; // 0x235 PushI
	AddReply(var_215_int, var_216_int, var_217_int); // 0x236 TObjFunc
	var_218_int = 539112; // 0x238 PushI
	var_219_int = 41041; // 0x239 PushI
	var_220_int = 41040; // 0x23a PushI
	AddReply(var_218_int, var_219_int, var_220_int); // 0x23b TObjFunc
	return 0; // 0x23d Return
	
Label_574:
	var_221_int = 41041; // 0x23e PushI
	var_222_bool = var_31_bool == var_221_int; // 0x23f Eq
	if(var_222_bool == 0) goto Label_597; // 0x240 JumpB
	var_223_string = ""; // 0x241 PushV
	var_223_string = "Neutral"; // 0x242 MovS
	func_394(var_32_cvector, var_223_string); // 0x243 NEW_2
	var_224_int = 539113; // 0x245 PushI
	SetMessage(var_224_int); // 0x246 TObjFunc
	ClearReplies(); // 0x248 TObjFunc
	var_225_int = 525580; // 0x24a PushI
	var_226_int = 41046; // 0x24b PushI
	var_227_int = 26927; // 0x24c PushI
	AddReply(var_225_int, var_226_int, var_227_int); // 0x24d TObjFunc
	var_228_int = 539114; // 0x24f PushI
	var_229_int = 26926; // 0x250 PushI
	var_230_int = 41042; // 0x251 PushI
	AddReply(var_228_int, var_229_int, var_230_int); // 0x252 TObjFunc
	return 0; // 0x254 Return
	
Label_597:
	var_231_int = 41046; // 0x255 PushI
	var_232_bool = var_31_bool == var_231_int; // 0x256 Eq
	if(var_232_bool == 0) goto Label_620; // 0x257 JumpB
	var_233_string = ""; // 0x258 PushV
	var_233_string = "Neutral"; // 0x259 MovS
	func_394(var_32_cvector, var_233_string); // 0x25a NEW_2
	var_234_int = 539117; // 0x25c PushI
	SetMessage(var_234_int); // 0x25d TObjFunc
	ClearReplies(); // 0x25f TObjFunc
	var_235_int = 539118; // 0x261 PushI
	var_236_int = 41048; // 0x262 PushI
	var_237_int = 41047; // 0x263 PushI
	AddReply(var_235_int, var_236_int, var_237_int); // 0x264 TObjFunc
	var_238_int = 539120; // 0x266 PushI
	var_239_int = 41052; // 0x267 PushI
	var_240_int = 41049; // 0x268 PushI
	AddReply(var_238_int, var_239_int, var_240_int); // 0x269 TObjFunc
	return 0; // 0x26b Return
	
Label_620:
	var_241_int = 41052; // 0x26c PushI
	var_242_bool = var_31_bool == var_241_int; // 0x26d Eq
	if(var_242_bool == 0) goto Label_648; // 0x26e JumpB
	var_243_object = Obj(); var_244_object = Obj(); // 0x26f PushV
	var_243_object = var_1_object; // 0x270 MovT
	var_244_object = var_0_object; // 0x271 MovT
	func_3091(var_244_object); // 0x272 NEW_2
	var_264_object = Obj(); var_265_object = Obj(); // 0x274 PushV
	var_264_object = var_1_object; // 0x275 MovT
	var_265_object = var_0_object; // 0x276 MovT
	func_3101(); // 0x277 NEW_2
	var_268_string = ""; // 0x279 PushV
	var_268_string = "Modesty"; // 0x27a MovS
	func_394(var_32_cvector, var_268_string); // 0x27b NEW_2
	var_269_int = 539123; // 0x27d PushI
	SetMessage(var_269_int); // 0x27e TObjFunc
	ClearReplies(); // 0x280 TObjFunc
	var_270_int = 539124; // 0x282 PushI
	var_271_int = 26926; // 0x283 PushI
	var_272_int = 41053; // 0x284 PushI
	AddReply(var_270_int, var_271_int, var_272_int); // 0x285 TObjFunc
	return 0; // 0x287 Return
	
Label_648:
	var_273_int = 41048; // 0x288 PushI
	var_274_bool = var_31_bool == var_273_int; // 0x289 Eq
	if(var_274_bool == 0) goto Label_671; // 0x28a JumpB
	var_275_string = ""; // 0x28b PushV
	var_275_string = "Neutral"; // 0x28c MovS
	func_394(var_32_cvector, var_275_string); // 0x28d NEW_2
	var_276_int = 539119; // 0x28f PushI
	SetMessage(var_276_int); // 0x290 TObjFunc
	ClearReplies(); // 0x292 TObjFunc
	var_277_int = 539121; // 0x294 PushI
	var_278_int = 41055; // 0x295 PushI
	var_279_int = 41050; // 0x296 PushI
	AddReply(var_277_int, var_278_int, var_279_int); // 0x297 TObjFunc
	var_280_int = 539122; // 0x299 PushI
	var_281_int = -1; // 0x29a PushI
	var_282_int = 41051; // 0x29b PushI
	AddReply(var_280_int, var_281_int, var_282_int); // 0x29c TObjFunc
	return 0; // 0x29e Return
	
Label_671:
	var_283_int = 41055; // 0x29f PushI
	var_284_bool = var_31_bool == var_283_int; // 0x2a0 Eq
	if(var_284_bool == 0) goto Label_689; // 0x2a1 JumpB
	var_285_string = ""; // 0x2a2 PushV
	var_285_string = "Neutral"; // 0x2a3 MovS
	func_394(var_32_cvector, var_285_string); // 0x2a4 NEW_2
	var_286_int = 539125; // 0x2a6 PushI
	SetMessage(var_286_int); // 0x2a7 TObjFunc
	ClearReplies(); // 0x2a9 TObjFunc
	var_287_int = 539126; // 0x2ab PushI
	var_288_int = -1; // 0x2ac PushI
	var_289_int = 41056; // 0x2ad PushI
	AddReply(var_287_int, var_288_int, var_289_int); // 0x2ae TObjFunc
	return 0; // 0x2b0 Return
	
Label_689:
	var_290_int = 41039; // 0x2b1 PushI
	var_291_bool = var_31_bool == var_290_int; // 0x2b2 Eq
	if(var_291_bool == 0) goto Label_712; // 0x2b3 JumpB
	var_292_string = ""; // 0x2b4 PushV
	var_292_string = "Modesty"; // 0x2b5 MovS
	func_394(var_32_cvector, var_292_string); // 0x2b6 NEW_2
	var_293_int = 539111; // 0x2b8 PushI
	SetMessage(var_293_int); // 0x2b9 TObjFunc
	ClearReplies(); // 0x2bb TObjFunc
	var_294_int = 539109; // 0x2bd PushI
	var_295_int = 26926; // 0x2be PushI
	var_296_int = 41037; // 0x2bf PushI
	AddReply(var_294_int, var_295_int, var_296_int); // 0x2c0 TObjFunc
	var_297_int = 539115; // 0x2c2 PushI
	var_298_int = 41048; // 0x2c3 PushI
	var_299_int = 41044; // 0x2c4 PushI
	AddReply(var_297_int, var_298_int, var_299_int); // 0x2c5 TObjFunc
	return 0; // 0x2c7 Return
	
Label_712:
	var_300_int = 26926; // 0x2c8 PushI
	var_301_bool = var_31_bool == var_300_int; // 0x2c9 Eq
	if(var_301_bool == 0) goto Label_735; // 0x2ca JumpB
	var_302_string = ""; // 0x2cb PushV
	var_302_string = "Modesty"; // 0x2cc MovS
	func_394(var_32_cvector, var_302_string); // 0x2cd NEW_2
	var_303_int = 525579; // 0x2cf PushI
	SetMessage(var_303_int); // 0x2d0 TObjFunc
	ClearReplies(); // 0x2d2 TObjFunc
	var_304_int = 539116; // 0x2d4 PushI
	var_305_int = 26928; // 0x2d5 PushI
	var_306_int = 41045; // 0x2d6 PushI
	AddReply(var_304_int, var_305_int, var_306_int); // 0x2d7 TObjFunc
	var_307_int = 539128; // 0x2d9 PushI
	var_308_int = -1; // 0x2da PushI
	var_309_int = 41059; // 0x2db PushI
	AddReply(var_307_int, var_308_int, var_309_int); // 0x2dc TObjFunc
	return 0; // 0x2de Return
	
Label_735:
	var_310_int = 26928; // 0x2df PushI
	var_311_bool = var_31_bool == var_310_int; // 0x2e0 Eq
	if(var_311_bool == 0) goto Label_758; // 0x2e1 JumpB
	var_312_string = ""; // 0x2e2 PushV
	var_312_string = "Neutral"; // 0x2e3 MovS
	func_394(var_32_cvector, var_312_string); // 0x2e4 NEW_2
	var_313_int = 525581; // 0x2e6 PushI
	SetMessage(var_313_int); // 0x2e7 TObjFunc
	ClearReplies(); // 0x2e9 TObjFunc
	var_314_int = 525582; // 0x2eb PushI
	var_315_int = -1; // 0x2ec PushI
	var_316_int = 26929; // 0x2ed PushI
	AddReply(var_314_int, var_315_int, var_316_int); // 0x2ee TObjFunc
	var_317_int = 539129; // 0x2f0 PushI
	var_318_int = -1; // 0x2f1 PushI
	var_319_int = 41060; // 0x2f2 PushI
	AddReply(var_317_int, var_318_int, var_319_int); // 0x2f3 TObjFunc
	return 0; // 0x2f5 Return
	
Label_758:
	var_320_int = 42898; // 0x2f6 PushI
	var_321_bool = var_31_bool == var_320_int; // 0x2f7 Eq
	if(var_321_bool == 0) goto Label_781; // 0x2f8 JumpB
	var_322_string = ""; // 0x2f9 PushV
	var_322_string = "Neutral"; // 0x2fa MovS
	func_394(var_32_cvector, var_322_string); // 0x2fb NEW_2
	var_323_int = 540840; // 0x2fd PushI
	SetMessage(var_323_int); // 0x2fe TObjFunc
	ClearReplies(); // 0x300 TObjFunc
	var_324_int = 540841; // 0x302 PushI
	var_325_int = 41064; // 0x303 PushI
	var_326_int = 42899; // 0x304 PushI
	AddReply(var_324_int, var_325_int, var_326_int); // 0x305 TObjFunc
	var_327_int = 540842; // 0x307 PushI
	var_328_int = 42901; // 0x308 PushI
	var_329_int = 42900; // 0x309 PushI
	AddReply(var_327_int, var_328_int, var_329_int); // 0x30a TObjFunc
	return 0; // 0x30c Return
	
Label_781:
	var_330_int = 42901; // 0x30d PushI
	var_331_bool = var_31_bool == var_330_int; // 0x30e Eq
	if(var_331_bool == 0) goto Label_799; // 0x30f JumpB
	var_332_string = ""; // 0x310 PushV
	var_332_string = "Fear"; // 0x311 MovS
	func_394(var_32_cvector, var_332_string); // 0x312 NEW_2
	var_333_int = 540843; // 0x314 PushI
	SetMessage(var_333_int); // 0x315 TObjFunc
	ClearReplies(); // 0x317 TObjFunc
	var_334_int = 540844; // 0x319 PushI
	var_335_int = -1; // 0x31a PushI
	var_336_int = 42902; // 0x31b PushI
	AddReply(var_334_int, var_335_int, var_336_int); // 0x31c TObjFunc
	return 0; // 0x31e Return
	
Label_799:
	var_337_int = 41064; // 0x31f PushI
	var_338_bool = var_31_bool == var_337_int; // 0x320 Eq
	if(var_338_bool == 0) goto Label_822; // 0x321 JumpB
	var_339_string = ""; // 0x322 PushV
	var_339_string = "Modesty"; // 0x323 MovS
	func_394(var_32_cvector, var_339_string); // 0x324 NEW_2
	var_340_int = 539133; // 0x326 PushI
	SetMessage(var_340_int); // 0x327 TObjFunc
	ClearReplies(); // 0x329 TObjFunc
	var_341_int = 539134; // 0x32b PushI
	var_342_int = 41061; // 0x32c PushI
	var_343_int = 41065; // 0x32d PushI
	AddReply(var_341_int, var_342_int, var_343_int); // 0x32e TObjFunc
	var_344_int = 539142; // 0x330 PushI
	var_345_int = 41061; // 0x331 PushI
	var_346_int = 41073; // 0x332 PushI
	AddReply(var_344_int, var_345_int, var_346_int); // 0x333 TObjFunc
	return 0; // 0x335 Return
	
Label_822:
	var_347_int = 41061; // 0x336 PushI
	var_348_bool = var_31_bool == var_347_int; // 0x337 Eq
	if(var_348_bool == 0) goto Label_845; // 0x338 JumpB
	var_349_string = ""; // 0x339 PushV
	var_349_string = "Modesty"; // 0x33a MovS
	func_394(var_32_cvector, var_349_string); // 0x33b NEW_2
	var_350_int = 539130; // 0x33d PushI
	SetMessage(var_350_int); // 0x33e TObjFunc
	ClearReplies(); // 0x340 TObjFunc
	var_351_int = 539132; // 0x342 PushI
	var_352_int = 41071; // 0x343 PushI
	var_353_int = 41063; // 0x344 PushI
	AddReply(var_351_int, var_352_int, var_353_int); // 0x345 TObjFunc
	var_354_int = 539131; // 0x347 PushI
	var_355_int = 41067; // 0x348 PushI
	var_356_int = 41062; // 0x349 PushI
	AddReply(var_354_int, var_355_int, var_356_int); // 0x34a TObjFunc
	return 0; // 0x34c Return
	
Label_845:
	var_357_int = 41067; // 0x34d PushI
	var_358_bool = var_31_bool == var_357_int; // 0x34e Eq
	if(var_358_bool == 0) goto Label_868; // 0x34f JumpB
	var_359_string = ""; // 0x350 PushV
	var_359_string = "Neutral"; // 0x351 MovS
	func_394(var_32_cvector, var_359_string); // 0x352 NEW_2
	var_360_int = 539136; // 0x354 PushI
	SetMessage(var_360_int); // 0x355 TObjFunc
	ClearReplies(); // 0x357 TObjFunc
	var_361_int = 539137; // 0x359 PushI
	var_362_int = 41069; // 0x35a PushI
	var_363_int = 41068; // 0x35b PushI
	AddReply(var_361_int, var_362_int, var_363_int); // 0x35c TObjFunc
	var_364_int = 539158; // 0x35e PushI
	var_365_int = 41069; // 0x35f PushI
	var_366_int = 41096; // 0x360 PushI
	AddReply(var_364_int, var_365_int, var_366_int); // 0x361 TObjFunc
	return 0; // 0x363 Return
	
Label_868:
	var_367_int = 41071; // 0x364 PushI
	var_368_bool = var_31_bool == var_367_int; // 0x365 Eq
	if(var_368_bool == 0) goto Label_891; // 0x366 JumpB
	var_369_string = ""; // 0x367 PushV
	var_369_string = "Modesty"; // 0x368 MovS
	func_394(var_32_cvector, var_369_string); // 0x369 NEW_2
	var_370_int = 539140; // 0x36b PushI
	SetMessage(var_370_int); // 0x36c TObjFunc
	ClearReplies(); // 0x36e TObjFunc
	var_371_int = 539141; // 0x370 PushI
	var_372_int = 41069; // 0x371 PushI
	var_373_int = 41072; // 0x372 PushI
	AddReply(var_371_int, var_372_int, var_373_int); // 0x373 TObjFunc
	var_374_int = 539143; // 0x375 PushI
	var_375_int = 41076; // 0x376 PushI
	var_376_int = 41075; // 0x377 PushI
	AddReply(var_374_int, var_375_int, var_376_int); // 0x378 TObjFunc
	return 0; // 0x37a Return
	
Label_891:
	var_377_int = 41076; // 0x37b PushI
	var_378_bool = var_31_bool == var_377_int; // 0x37c Eq
	if(var_378_bool == 0) goto Label_914; // 0x37d JumpB
	var_379_string = ""; // 0x37e PushV
	var_379_string = "Fear"; // 0x37f MovS
	func_394(var_32_cvector, var_379_string); // 0x380 NEW_2
	var_380_int = 539144; // 0x382 PushI
	SetMessage(var_380_int); // 0x383 TObjFunc
	ClearReplies(); // 0x385 TObjFunc
	var_381_int = 539145; // 0x387 PushI
	var_382_int = 41069; // 0x388 PushI
	var_383_int = 41077; // 0x389 PushI
	AddReply(var_381_int, var_382_int, var_383_int); // 0x38a TObjFunc
	var_384_int = 539146; // 0x38c PushI
	var_385_int = 41079; // 0x38d PushI
	var_386_int = 41078; // 0x38e PushI
	AddReply(var_384_int, var_385_int, var_386_int); // 0x38f TObjFunc
	return 0; // 0x391 Return
	
Label_914:
	var_387_int = 41079; // 0x392 PushI
	var_388_bool = var_31_bool == var_387_int; // 0x393 Eq
	if(var_388_bool == 0) goto Label_937; // 0x394 JumpB
	var_389_string = ""; // 0x395 PushV
	var_389_string = "Neutral"; // 0x396 MovS
	func_394(var_32_cvector, var_389_string); // 0x397 NEW_2
	var_390_int = 539147; // 0x399 PushI
	SetMessage(var_390_int); // 0x39a TObjFunc
	ClearReplies(); // 0x39c TObjFunc
	var_391_int = 539148; // 0x39e PushI
	var_392_int = 41069; // 0x39f PushI
	var_393_int = 41081; // 0x3a0 PushI
	AddReply(var_391_int, var_392_int, var_393_int); // 0x3a1 TObjFunc
	var_394_int = 539149; // 0x3a3 PushI
	var_395_int = -1; // 0x3a4 PushI
	var_396_int = 41082; // 0x3a5 PushI
	AddReply(var_394_int, var_395_int, var_396_int); // 0x3a6 TObjFunc
	return 0; // 0x3a8 Return
	
Label_937:
	var_397_int = 41069; // 0x3a9 PushI
	var_398_bool = var_31_bool == var_397_int; // 0x3aa Eq
	if(var_398_bool == 0) goto Label_960; // 0x3ab JumpB
	var_399_string = ""; // 0x3ac PushV
	var_399_string = "Love"; // 0x3ad MovS
	func_394(var_32_cvector, var_399_string); // 0x3ae NEW_2
	var_400_int = 539138; // 0x3b0 PushI
	SetMessage(var_400_int); // 0x3b1 TObjFunc
	ClearReplies(); // 0x3b3 TObjFunc
	var_401_int = 539150; // 0x3b5 PushI
	var_402_int = 41085; // 0x3b6 PushI
	var_403_int = 41084; // 0x3b7 PushI
	AddReply(var_401_int, var_402_int, var_403_int); // 0x3b8 TObjFunc
	var_404_int = 539152; // 0x3ba PushI
	var_405_int = -1; // 0x3bb PushI
	var_406_int = 41086; // 0x3bc PushI
	AddReply(var_404_int, var_405_int, var_406_int); // 0x3bd TObjFunc
	return 0; // 0x3bf Return
	
Label_960:
	var_407_int = 41085; // 0x3c0 PushI
	var_408_bool = var_31_bool == var_407_int; // 0x3c1 Eq
	if(var_408_bool == 0) goto Label_983; // 0x3c2 JumpB
	var_409_string = ""; // 0x3c3 PushV
	var_409_string = "Neutral"; // 0x3c4 MovS
	func_394(var_32_cvector, var_409_string); // 0x3c5 NEW_2
	var_410_int = 539151; // 0x3c7 PushI
	SetMessage(var_410_int); // 0x3c8 TObjFunc
	ClearReplies(); // 0x3ca TObjFunc
	var_411_int = 539139; // 0x3cc PushI
	var_412_int = 26906; // 0x3cd PushI
	var_413_int = 41070; // 0x3ce PushI
	AddReply(var_411_int, var_412_int, var_413_int); // 0x3cf TObjFunc
	var_414_int = 539153; // 0x3d1 PushI
	var_415_int = 26906; // 0x3d2 PushI
	var_416_int = 41087; // 0x3d3 PushI
	AddReply(var_414_int, var_415_int, var_416_int); // 0x3d4 TObjFunc
	return 0; // 0x3d6 Return
	
Label_983:
	var_417_int = 26906; // 0x3d7 PushI
	var_418_bool = var_31_bool == var_417_int; // 0x3d8 Eq
	if(var_418_bool == 0) goto Label_1006; // 0x3d9 JumpB
	var_419_string = ""; // 0x3da PushV
	var_419_string = "Neutral"; // 0x3db MovS
	func_394(var_32_cvector, var_419_string); // 0x3dc NEW_2
	var_420_int = 525550; // 0x3de PushI
	SetMessage(var_420_int); // 0x3df TObjFunc
	ClearReplies(); // 0x3e1 TObjFunc
	var_421_int = 525551; // 0x3e3 PushI
	var_422_int = 26908; // 0x3e4 PushI
	var_423_int = 26907; // 0x3e5 PushI
	AddReply(var_421_int, var_422_int, var_423_int); // 0x3e6 TObjFunc
	var_424_int = 539154; // 0x3e8 PushI
	var_425_int = 26908; // 0x3e9 PushI
	var_426_int = 41089; // 0x3ea PushI
	AddReply(var_424_int, var_425_int, var_426_int); // 0x3eb TObjFunc
	return 0; // 0x3ed Return
	
Label_1006:
	var_427_int = 26908; // 0x3ee PushI
	var_428_bool = var_31_bool == var_427_int; // 0x3ef Eq
	if(var_428_bool == 0) goto Label_1029; // 0x3f0 JumpB
	var_429_string = ""; // 0x3f1 PushV
	var_429_string = "Modesty"; // 0x3f2 MovS
	func_394(var_32_cvector, var_429_string); // 0x3f3 NEW_2
	var_430_int = 525552; // 0x3f5 PushI
	SetMessage(var_430_int); // 0x3f6 TObjFunc
	ClearReplies(); // 0x3f8 TObjFunc
	var_431_int = 525553; // 0x3fa PushI
	var_432_int = 41092; // 0x3fb PushI
	var_433_int = 26909; // 0x3fc PushI
	AddReply(var_431_int, var_432_int, var_433_int); // 0x3fd TObjFunc
	var_434_int = 539155; // 0x3ff PushI
	var_435_int = 41092; // 0x400 PushI
	var_436_int = 41091; // 0x401 PushI
	AddReply(var_434_int, var_435_int, var_436_int); // 0x402 TObjFunc
	return 0; // 0x404 Return
	
Label_1029:
	var_437_int = 41092; // 0x405 PushI
	var_438_bool = var_31_bool == var_437_int; // 0x406 Eq
	if(var_438_bool == 0) goto Label_1052; // 0x407 JumpB
	var_439_string = ""; // 0x408 PushV
	var_439_string = "Modesty"; // 0x409 MovS
	func_394(var_32_cvector, var_439_string); // 0x40a NEW_2
	var_440_int = 539156; // 0x40c PushI
	SetMessage(var_440_int); // 0x40d TObjFunc
	ClearReplies(); // 0x40f TObjFunc
	var_441_int = 525557; // 0x411 PushI
	var_442_int = -1; // 0x412 PushI
	var_443_int = 26913; // 0x413 PushI
	AddReply(var_441_int, var_442_int, var_443_int); // 0x414 TObjFunc
	var_444_int = 539157; // 0x416 PushI
	var_445_int = -1; // 0x417 PushI
	var_446_int = 41094; // 0x418 PushI
	AddReply(var_444_int, var_445_int, var_446_int); // 0x419 TObjFunc
	return 0; // 0x41b Return
	
Label_1052:
	var_3_string = 1; // 0x41c TMovB
	var_447_bool = 0; // 0x41d PushV
	func_3016(var_447_bool); // 0x41e NEW_2
	if(var_447_bool == 0) goto Label_1060; // 0x420 JumpB
	lshStopAnimation(); // 0x421 Func
	goto Label_1062; // 0x423 Jump
	
Label_1062:
	return 0; // 0x426 Return
	
Label_1060:
	StopAnimation(); // 0x424 Func
	
Label_1064:
	return 0; // 0x428 Return
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_cvector)
{
	var_33_int = 1; // 0x4f1 PushI
	if(var_33_int == 0) goto Label_1547; // 0x4f2 JumpB
	func_2893(); // 0x4f4 NEW_2
	var_35_int = 27323; // 0x4f6 PushI
	var_36_bool = var_32_cvector == var_35_int; // 0x4f7 Eq
	if(var_36_bool == 0) goto Label_1278; // 0x4f8 JumpB
	var_37_object = Obj(); var_38_object = Obj(); // 0x4f9 PushV
	var_37_object = var_1_object; // 0x4fa MovT
	var_38_object = var_0_object; // 0x4fb MovT
	func_3054(); // 0x4fc NEW_2
	
Label_1278:
	var_41_int = 27327; // 0x4fe PushI
	var_42_bool = var_32_cvector == var_41_int; // 0x4ff Eq
	if(var_42_bool == 0) goto Label_1286; // 0x500 JumpB
	var_43_object = Obj(); var_44_object = Obj(); // 0x501 PushV
	var_43_object = var_1_object; // 0x502 MovT
	var_44_object = var_0_object; // 0x503 MovT
	func_3075(); // 0x504 NEW_2
	
Label_1286:
	var_68_int = 43232; // 0x506 PushI
	var_69_bool = var_32_cvector == var_68_int; // 0x507 Eq
	if(var_69_bool == 0) goto Label_1294; // 0x508 JumpB
	var_70_object = Obj(); var_71_object = Obj(); // 0x509 PushV
	var_70_object = var_1_object; // 0x50a MovT
	var_71_object = var_0_object; // 0x50b MovT
	func_3075(); // 0x50c NEW_2
	
Label_1294:
	var_72_int = 27353; // 0x50e PushI
	var_73_bool = var_32_cvector == var_72_int; // 0x50f Eq
	if(var_73_bool == 0) goto Label_1302; // 0x510 JumpB
	var_74_object = Obj(); var_75_object = Obj(); // 0x511 PushV
	var_74_object = var_1_object; // 0x512 MovT
	var_75_object = var_0_object; // 0x513 MovT
	func_3060(); // 0x514 NEW_2
	
Label_1302:
	var_78_int = 27362; // 0x516 PushI
	var_79_bool = var_32_cvector == var_78_int; // 0x517 Eq
	if(var_79_bool == 0) goto Label_1315; // 0x518 JumpB
	var_80_object = Obj(); var_81_object = Obj(); // 0x519 PushV
	var_80_object = var_1_object; // 0x51a MovT
	var_81_object = var_0_object; // 0x51b MovT
	func_3066(); // 0x51c NEW_2
	var_88_object = Obj(); var_89_object = Obj(); // 0x51e PushV
	var_88_object = var_1_object; // 0x51f MovT
	var_89_object = var_0_object; // 0x520 MovT
	func_3132(); // 0x521 NEW_2
	
Label_1315:
	var_92_int = 27322; // 0x523 PushI
	var_93_bool = var_31_bool == var_92_int; // 0x524 Eq
	if(var_93_bool == 0) goto Label_1376; // 0x525 JumpB
	var_94_string = ""; // 0x526 PushV
	var_94_string = "Fear"; // 0x527 MovS
	func_1242(var_32_cvector, var_94_string); // 0x528 NEW_2
	var_111_int = 526037; // 0x52a PushI
	SetMessage(var_111_int); // 0x52b TObjFunc
	ClearReplies(); // 0x52d TObjFunc
	var_112_bool = 0; // 0x52f PushV
	var_112_bool = 0; // 0x530 MovB
	var_113_bool = 0; var_114_object = Obj(); // 0x531 PushV
	var_114_object = var_1_object; // 0x532 MovT
	func_3174(var_114_object); // 0x533 NEW_2
	if(var_113_bool == 0) goto Label_1340; // 0x535 JumpB
	var_121_bool = 0; var_122_object = Obj(); // 0x536 PushV
	var_122_object = var_1_object; // 0x537 MovT
	func_3186(var_122_object); // 0x538 NEW_2
	if(var_121_bool == 0) goto Label_1340; // 0x53a JumpB
	var_112_bool = 1; // 0x53b MovB
	
Label_1340:
	if(var_112_bool == 0) goto Label_1346; // 0x53c JumpB
	var_127_int = 526038; // 0x53d PushI
	var_128_int = 30287; // 0x53e PushI
	var_129_int = 27323; // 0x53f PushI
	AddReply(var_127_int, var_128_int, var_129_int); // 0x540 TObjFunc
	
Label_1346:
	var_130_bool = 0; // 0x542 PushV
	var_130_bool = 0; // 0x543 MovB
	var_131_bool = 0; var_132_object = Obj(); // 0x544 PushV
	var_132_object = var_1_object; // 0x545 MovT
	func_3198(var_132_object); // 0x546 NEW_2
	if(var_131_bool == 0) goto Label_1359; // 0x548 JumpB
	var_137_bool = 0; var_138_object = Obj(); // 0x549 PushV
	var_138_object = var_1_object; // 0x54a MovT
	func_3210(var_138_object); // 0x54b NEW_2
	if(var_137_bool == 0) goto Label_1359; // 0x54d JumpB
	var_130_bool = 1; // 0x54e MovB
	
Label_1359:
	if(var_130_bool == 0) goto Label_1365; // 0x54f JumpB
	var_143_int = 526068; // 0x550 PushI
	var_144_int = 27354; // 0x551 PushI
	var_145_int = 27353; // 0x552 PushI
	AddReply(var_143_int, var_144_int, var_145_int); // 0x553 TObjFunc
	
Label_1365:
	var_146_int = 526043; // 0x555 PushI
	var_147_int = -1; // 0x556 PushI
	var_148_int = 27328; // 0x557 PushI
	AddReply(var_146_int, var_147_int, var_148_int); // 0x558 TObjFunc
	var_149_int = 528864; // 0x55a PushI
	var_150_int = -1; // 0x55b PushI
	var_151_int = 30286; // 0x55c PushI
	AddReply(var_149_int, var_150_int, var_151_int); // 0x55d TObjFunc
	return 0; // 0x55f Return
	
Label_1376:
	var_152_int = 27354; // 0x560 PushI
	var_153_bool = var_31_bool == var_152_int; // 0x561 Eq
	if(var_153_bool == 0) goto Label_1394; // 0x562 JumpB
	var_154_string = ""; // 0x563 PushV
	var_154_string = "Neutral"; // 0x564 MovS
	func_1242(var_32_cvector, var_154_string); // 0x565 NEW_2
	var_155_int = 526069; // 0x567 PushI
	SetMessage(var_155_int); // 0x568 TObjFunc
	ClearReplies(); // 0x56a TObjFunc
	var_156_int = 526070; // 0x56c PushI
	var_157_int = 27356; // 0x56d PushI
	var_158_int = 27355; // 0x56e PushI
	AddReply(var_156_int, var_157_int, var_158_int); // 0x56f TObjFunc
	return 0; // 0x571 Return
	
Label_1394:
	var_159_int = 27356; // 0x572 PushI
	var_160_bool = var_31_bool == var_159_int; // 0x573 Eq
	if(var_160_bool == 0) goto Label_1417; // 0x574 JumpB
	var_161_string = ""; // 0x575 PushV
	var_161_string = "Neutral"; // 0x576 MovS
	func_1242(var_32_cvector, var_161_string); // 0x577 NEW_2
	var_162_int = 526071; // 0x579 PushI
	SetMessage(var_162_int); // 0x57a TObjFunc
	ClearReplies(); // 0x57c TObjFunc
	var_163_int = 526072; // 0x57e PushI
	var_164_int = 27359; // 0x57f PushI
	var_165_int = 27357; // 0x580 PushI
	AddReply(var_163_int, var_164_int, var_165_int); // 0x581 TObjFunc
	var_166_int = 526073; // 0x583 PushI
	var_167_int = 27359; // 0x584 PushI
	var_168_int = 27358; // 0x585 PushI
	AddReply(var_166_int, var_167_int, var_168_int); // 0x586 TObjFunc
	return 0; // 0x588 Return
	
Label_1417:
	var_169_int = 27359; // 0x589 PushI
	var_170_bool = var_31_bool == var_169_int; // 0x58a Eq
	if(var_170_bool == 0) goto Label_1435; // 0x58b JumpB
	var_171_string = ""; // 0x58c PushV
	var_171_string = "Modesty"; // 0x58d MovS
	func_1242(var_32_cvector, var_171_string); // 0x58e NEW_2
	var_172_int = 526074; // 0x590 PushI
	SetMessage(var_172_int); // 0x591 TObjFunc
	ClearReplies(); // 0x593 TObjFunc
	var_173_int = 526075; // 0x595 PushI
	var_174_int = 27361; // 0x596 PushI
	var_175_int = 27360; // 0x597 PushI
	AddReply(var_173_int, var_174_int, var_175_int); // 0x598 TObjFunc
	return 0; // 0x59a Return
	
Label_1435:
	var_176_int = 27361; // 0x59b PushI
	var_177_bool = var_31_bool == var_176_int; // 0x59c Eq
	if(var_177_bool == 0) goto Label_1453; // 0x59d JumpB
	var_178_string = ""; // 0x59e PushV
	var_178_string = "Modesty"; // 0x59f MovS
	func_1242(var_32_cvector, var_178_string); // 0x5a0 NEW_2
	var_179_int = 526076; // 0x5a2 PushI
	SetMessage(var_179_int); // 0x5a3 TObjFunc
	ClearReplies(); // 0x5a5 TObjFunc
	var_180_int = 526077; // 0x5a7 PushI
	var_181_int = -1; // 0x5a8 PushI
	var_182_int = 27362; // 0x5a9 PushI
	AddReply(var_180_int, var_181_int, var_182_int); // 0x5aa TObjFunc
	return 0; // 0x5ac Return
	
Label_1453:
	var_183_int = 30287; // 0x5ad PushI
	var_184_bool = var_31_bool == var_183_int; // 0x5ae Eq
	if(var_184_bool == 0) goto Label_1476; // 0x5af JumpB
	var_185_string = ""; // 0x5b0 PushV
	var_185_string = "Fear"; // 0x5b1 MovS
	func_1242(var_32_cvector, var_185_string); // 0x5b2 NEW_2
	var_186_int = 528865; // 0x5b4 PushI
	SetMessage(var_186_int); // 0x5b5 TObjFunc
	ClearReplies(); // 0x5b7 TObjFunc
	var_187_int = 528866; // 0x5b9 PushI
	var_188_int = 27324; // 0x5ba PushI
	var_189_int = 30288; // 0x5bb PushI
	AddReply(var_187_int, var_188_int, var_189_int); // 0x5bc TObjFunc
	var_190_int = 528867; // 0x5be PushI
	var_191_int = 27324; // 0x5bf PushI
	var_192_int = 30289; // 0x5c0 PushI
	AddReply(var_190_int, var_191_int, var_192_int); // 0x5c1 TObjFunc
	return 0; // 0x5c3 Return
	
Label_1476:
	var_193_int = 27324; // 0x5c4 PushI
	var_194_bool = var_31_bool == var_193_int; // 0x5c5 Eq
	if(var_194_bool == 0) goto Label_1499; // 0x5c6 JumpB
	var_195_string = ""; // 0x5c7 PushV
	var_195_string = "Neutral"; // 0x5c8 MovS
	func_1242(var_32_cvector, var_195_string); // 0x5c9 NEW_2
	var_196_int = 526039; // 0x5cb PushI
	SetMessage(var_196_int); // 0x5cc TObjFunc
	ClearReplies(); // 0x5ce TObjFunc
	var_197_int = 526040; // 0x5d0 PushI
	var_198_int = 27326; // 0x5d1 PushI
	var_199_int = 27325; // 0x5d2 PushI
	AddReply(var_197_int, var_198_int, var_199_int); // 0x5d3 TObjFunc
	var_200_int = 541116; // 0x5d5 PushI
	var_201_int = -1; // 0x5d6 PushI
	var_202_int = 43232; // 0x5d7 PushI
	AddReply(var_200_int, var_201_int, var_202_int); // 0x5d8 TObjFunc
	return 0; // 0x5da Return
	
Label_1499:
	var_203_int = 27326; // 0x5db PushI
	var_204_bool = var_31_bool == var_203_int; // 0x5dc Eq
	if(var_204_bool == 0) goto Label_1517; // 0x5dd JumpB
	var_205_string = ""; // 0x5de PushV
	var_205_string = "Neutral"; // 0x5df MovS
	func_1242(var_32_cvector, var_205_string); // 0x5e0 NEW_2
	var_206_int = 526041; // 0x5e2 PushI
	SetMessage(var_206_int); // 0x5e3 TObjFunc
	ClearReplies(); // 0x5e5 TObjFunc
	var_207_int = 528868; // 0x5e7 PushI
	var_208_int = 30292; // 0x5e8 PushI
	var_209_int = 30291; // 0x5e9 PushI
	AddReply(var_207_int, var_208_int, var_209_int); // 0x5ea TObjFunc
	return 0; // 0x5ec Return
	
Label_1517:
	var_210_int = 30292; // 0x5ed PushI
	var_211_bool = var_31_bool == var_210_int; // 0x5ee Eq
	if(var_211_bool == 0) goto Label_1535; // 0x5ef JumpB
	var_212_string = ""; // 0x5f0 PushV
	var_212_string = "Modesty"; // 0x5f1 MovS
	func_1242(var_32_cvector, var_212_string); // 0x5f2 NEW_2
	var_213_int = 528869; // 0x5f4 PushI
	SetMessage(var_213_int); // 0x5f5 TObjFunc
	ClearReplies(); // 0x5f7 TObjFunc
	var_214_int = 526042; // 0x5f9 PushI
	var_215_int = -1; // 0x5fa PushI
	var_216_int = 27327; // 0x5fb PushI
	AddReply(var_214_int, var_215_int, var_216_int); // 0x5fc TObjFunc
	return 0; // 0x5fe Return
	
Label_1535:
	var_3_string = 1; // 0x5ff TMovB
	var_217_bool = 0; // 0x600 PushV
	func_3016(var_217_bool); // 0x601 NEW_2
	if(var_217_bool == 0) goto Label_1543; // 0x603 JumpB
	lshStopAnimation(); // 0x604 Func
	goto Label_1545; // 0x606 Jump
	
Label_1545:
	return 0; // 0x609 Return
	
Label_1543:
	StopAnimation(); // 0x607 Func
	
Label_1547:
	return 0; // 0x60b Return
}


task_7_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_cvector)
{
	var_33_int = 1; // 0x6bc PushI
	if(var_33_int == 0) goto Label_1866; // 0x6bd JumpB
	func_2893(); // 0x6bf NEW_2
	var_35_int = 28493; // 0x6c1 PushI
	var_36_bool = var_32_cvector == var_35_int; // 0x6c2 Eq
	if(var_36_bool == 0) goto Label_1737; // 0x6c3 JumpB
	var_37_object = Obj(); var_38_object = Obj(); // 0x6c4 PushV
	var_37_object = var_1_object; // 0x6c5 MovT
	var_38_object = var_0_object; // 0x6c6 MovT
	func_3080(); // 0x6c7 NEW_2
	
Label_1737:
	var_41_int = 28602; // 0x6c9 PushI
	var_42_bool = var_32_cvector == var_41_int; // 0x6ca Eq
	if(var_42_bool == 0) goto Label_1745; // 0x6cb JumpB
	var_43_object = Obj(); var_44_object = Obj(); // 0x6cc PushV
	var_43_object = var_1_object; // 0x6cd MovT
	var_44_object = var_0_object; // 0x6ce MovT
	func_3086(); // 0x6cf NEW_2
	
Label_1745:
	var_68_int = 28603; // 0x6d1 PushI
	var_69_bool = var_32_cvector == var_68_int; // 0x6d2 Eq
	if(var_69_bool == 0) goto Label_1753; // 0x6d3 JumpB
	var_70_object = Obj(); var_71_object = Obj(); // 0x6d4 PushV
	var_70_object = var_1_object; // 0x6d5 MovT
	var_71_object = var_0_object; // 0x6d6 MovT
	func_3086(); // 0x6d7 NEW_2
	
Label_1753:
	var_72_int = 28492; // 0x6d9 PushI
	var_73_bool = var_31_bool == var_72_int; // 0x6da Eq
	if(var_73_bool == 0) goto Label_1790; // 0x6db JumpB
	var_74_string = ""; // 0x6dc PushV
	var_74_string = "Neutral"; // 0x6dd MovS
	func_1701(var_32_cvector, var_74_string); // 0x6de NEW_2
	var_91_int = 527184; // 0x6e0 PushI
	SetMessage(var_91_int); // 0x6e1 TObjFunc
	ClearReplies(); // 0x6e3 TObjFunc
	var_92_bool = 0; // 0x6e5 PushV
	var_92_bool = 0; // 0x6e6 MovB
	var_93_bool = 0; var_94_object = Obj(); // 0x6e7 PushV
	var_94_object = var_1_object; // 0x6e8 MovT
	func_3222(var_94_object); // 0x6e9 NEW_2
	if(var_93_bool == 0) goto Label_1778; // 0x6eb JumpB
	var_101_bool = 0; var_102_object = Obj(); // 0x6ec PushV
	var_102_object = var_1_object; // 0x6ed MovT
	func_3234(var_102_object); // 0x6ee NEW_2
	if(var_101_bool == 0) goto Label_1778; // 0x6f0 JumpB
	var_92_bool = 1; // 0x6f1 MovB
	
Label_1778:
	if(var_92_bool == 0) goto Label_1784; // 0x6f2 JumpB
	var_107_int = 527185; // 0x6f3 PushI
	var_108_int = 28494; // 0x6f4 PushI
	var_109_int = 28493; // 0x6f5 PushI
	AddReply(var_107_int, var_108_int, var_109_int); // 0x6f6 TObjFunc
	
Label_1784:
	var_110_int = 527188; // 0x6f8 PushI
	var_111_int = -1; // 0x6f9 PushI
	var_112_int = 28496; // 0x6fa PushI
	AddReply(var_110_int, var_111_int, var_112_int); // 0x6fb TObjFunc
	return 0; // 0x6fd Return
	
Label_1790:
	var_113_int = 28494; // 0x6fe PushI
	var_114_bool = var_31_bool == var_113_int; // 0x6ff Eq
	if(var_114_bool == 0) goto Label_1808; // 0x700 JumpB
	var_115_string = ""; // 0x701 PushV
	var_115_string = "Neutral"; // 0x702 MovS
	func_1701(var_32_cvector, var_115_string); // 0x703 NEW_2
	var_116_int = 527186; // 0x705 PushI
	SetMessage(var_116_int); // 0x706 TObjFunc
	ClearReplies(); // 0x708 TObjFunc
	var_117_int = 527187; // 0x70a PushI
	var_118_int = 28597; // 0x70b PushI
	var_119_int = 28495; // 0x70c PushI
	AddReply(var_117_int, var_118_int, var_119_int); // 0x70d TObjFunc
	return 0; // 0x70f Return
	
Label_1808:
	var_120_int = 28597; // 0x710 PushI
	var_121_bool = var_31_bool == var_120_int; // 0x711 Eq
	if(var_121_bool == 0) goto Label_1831; // 0x712 JumpB
	var_122_string = ""; // 0x713 PushV
	var_122_string = "Neutral"; // 0x714 MovS
	func_1701(var_32_cvector, var_122_string); // 0x715 NEW_2
	var_123_int = 527284; // 0x717 PushI
	SetMessage(var_123_int); // 0x718 TObjFunc
	ClearReplies(); // 0x71a TObjFunc
	var_124_int = 527285; // 0x71c PushI
	var_125_int = 28600; // 0x71d PushI
	var_126_int = 28598; // 0x71e PushI
	AddReply(var_124_int, var_125_int, var_126_int); // 0x71f TObjFunc
	var_127_int = 527286; // 0x721 PushI
	var_128_int = 28600; // 0x722 PushI
	var_129_int = 28599; // 0x723 PushI
	AddReply(var_127_int, var_128_int, var_129_int); // 0x724 TObjFunc
	return 0; // 0x726 Return
	
Label_1831:
	var_130_int = 28600; // 0x727 PushI
	var_131_bool = var_31_bool == var_130_int; // 0x728 Eq
	if(var_131_bool == 0) goto Label_1854; // 0x729 JumpB
	var_132_string = ""; // 0x72a PushV
	var_132_string = "Neutral"; // 0x72b MovS
	func_1701(var_32_cvector, var_132_string); // 0x72c NEW_2
	var_133_int = 527287; // 0x72e PushI
	SetMessage(var_133_int); // 0x72f TObjFunc
	ClearReplies(); // 0x731 TObjFunc
	var_134_int = 527288; // 0x733 PushI
	var_135_int = -1; // 0x734 PushI
	var_136_int = 28602; // 0x735 PushI
	AddReply(var_134_int, var_135_int, var_136_int); // 0x736 TObjFunc
	var_137_int = 527289; // 0x738 PushI
	var_138_int = -1; // 0x739 PushI
	var_139_int = 28603; // 0x73a PushI
	AddReply(var_137_int, var_138_int, var_139_int); // 0x73b TObjFunc
	return 0; // 0x73d Return
	
Label_1854:
	var_3_string = 1; // 0x73e TMovB
	var_140_bool = 0; // 0x73f PushV
	func_3016(var_140_bool); // 0x740 NEW_2
	if(var_140_bool == 0) goto Label_1862; // 0x742 JumpB
	lshStopAnimation(); // 0x743 Func
	goto Label_1864; // 0x745 Jump
	
Label_1864:
	return 0; // 0x748 Return
	
Label_1862:
	StopAnimation(); // 0x746 Func
	
Label_1866:
	return 0; // 0x74a Return
}


task_9_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_int, var_26_int, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_cvector)
{
	var_33_int = 1; // 0x7f2 PushI
	if(var_33_int == 0) goto Label_2125; // 0x7f3 JumpB
	func_2893(); // 0x7f5 NEW_2
	var_35_int = 36906; // 0x7f7 PushI
	var_36_bool = var_31_bool == var_35_int; // 0x7f8 Eq
	if(var_36_bool == 0) goto Label_2067; // 0x7f9 JumpB
	var_37_string = ""; // 0x7fa PushV
	var_37_string = "Neutral"; // 0x7fb MovS
	func_2011(var_32_cvector, var_37_string); // 0x7fc NEW_2
	var_54_int = 535231; // 0x7fe PushI
	SetMessage(var_54_int); // 0x7ff TObjFunc
	ClearReplies(); // 0x801 TObjFunc
	var_55_int = 535232; // 0x803 PushI
	var_56_int = 36953; // 0x804 PushI
	var_57_int = 36907; // 0x805 PushI
	AddReply(var_55_int, var_56_int, var_57_int); // 0x806 TObjFunc
	var_58_int = 535233; // 0x808 PushI
	var_59_int = -1; // 0x809 PushI
	var_60_int = 36908; // 0x80a PushI
	AddReply(var_58_int, var_59_int, var_60_int); // 0x80b TObjFunc
	var_61_int = 535280; // 0x80d PushI
	var_62_int = -1; // 0x80e PushI
	var_63_int = 36956; // 0x80f PushI
	AddReply(var_61_int, var_62_int, var_63_int); // 0x810 TObjFunc
	return 0; // 0x812 Return
	
Label_2067:
	var_64_int = 36953; // 0x813 PushI
	var_65_bool = var_31_bool == var_64_int; // 0x814 Eq
	if(var_65_bool == 0) goto Label_2090; // 0x815 JumpB
	var_66_string = ""; // 0x816 PushV
	var_66_string = "Neutral"; // 0x817 MovS
	func_2011(var_32_cvector, var_66_string); // 0x818 NEW_2
	var_67_int = 535277; // 0x81a PushI
	SetMessage(var_67_int); // 0x81b TObjFunc
	ClearReplies(); // 0x81d TObjFunc
	var_68_int = 535278; // 0x81f PushI
	var_69_int = 36957; // 0x820 PushI
	var_70_int = 36954; // 0x821 PushI
	AddReply(var_68_int, var_69_int, var_70_int); // 0x822 TObjFunc
	var_71_int = 535279; // 0x824 PushI
	var_72_int = 36957; // 0x825 PushI
	var_73_int = 36955; // 0x826 PushI
	AddReply(var_71_int, var_72_int, var_73_int); // 0x827 TObjFunc
	return 0; // 0x829 Return
	
Label_2090:
	var_74_int = 36957; // 0x82a PushI
	var_75_bool = var_31_bool == var_74_int; // 0x82b Eq
	if(var_75_bool == 0) goto Label_2113; // 0x82c JumpB
	var_76_string = ""; // 0x82d PushV
	var_76_string = "Neutral"; // 0x82e MovS
	func_2011(var_32_cvector, var_76_string); // 0x82f NEW_2
	var_77_int = 535281; // 0x831 PushI
	SetMessage(var_77_int); // 0x832 TObjFunc
	ClearReplies(); // 0x834 TObjFunc
	var_78_int = 535282; // 0x836 PushI
	var_79_int = -1; // 0x837 PushI
	var_80_int = 36958; // 0x838 PushI
	AddReply(var_78_int, var_79_int, var_80_int); // 0x839 TObjFunc
	var_81_int = 535283; // 0x83b PushI
	var_82_int = -1; // 0x83c PushI
	var_83_int = 36959; // 0x83d PushI
	AddReply(var_81_int, var_82_int, var_83_int); // 0x83e TObjFunc
	return 0; // 0x840 Return
	
Label_2113:
	var_3_string = 1; // 0x841 TMovB
	var_84_bool = 0; // 0x842 PushV
	func_3016(var_84_bool); // 0x843 NEW_2
	if(var_84_bool == 0) goto Label_2121; // 0x845 JumpB
	lshStopAnimation(); // 0x846 Func
	goto Label_2123; // 0x848 Jump
	
Label_2123:
	return 0; // 0x84b Return
	
Label_2121:
	StopAnimation(); // 0x849 Func
	
Label_2125:
	return 0; // 0x84d Return
}


task_11_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_int, var_31_int, var_32_cvector)
{
	var_33_int = 1; // 0x8f0 PushI
	if(var_33_int == 0) goto Label_2328; // 0x8f1 JumpB
	func_2893(); // 0x8f3 NEW_2
	var_35_int = 42548; // 0x8f5 PushI
	var_36_bool = var_31_int == var_35_int; // 0x8f6 Eq
	if(var_36_bool == 0) goto Label_2316; // 0x8f7 JumpB
	var_37_string = ""; // 0x8f8 PushV
	var_37_string = "Neutral"; // 0x8f9 MovS
	func_2265(var_32_cvector, var_37_string); // 0x8fa NEW_2
	var_54_int = 540539; // 0x8fc PushI
	SetMessage(var_54_int); // 0x8fd TObjFunc
	ClearReplies(); // 0x8ff TObjFunc
	var_55_int = 540540; // 0x901 PushI
	var_56_int = -1; // 0x902 PushI
	var_57_int = 42549; // 0x903 PushI
	AddReply(var_55_int, var_56_int, var_57_int); // 0x904 TObjFunc
	var_58_int = 540799; // 0x906 PushI
	var_59_int = -1; // 0x907 PushI
	var_60_int = 42848; // 0x908 PushI
	AddReply(var_58_int, var_59_int, var_60_int); // 0x909 TObjFunc
	return 0; // 0x90b Return
	
Label_2316:
	var_3_string = 1; // 0x90c TMovB
	var_61_bool = 0; // 0x90d PushV
	func_3016(var_61_bool); // 0x90e NEW_2
	if(var_61_bool == 0) goto Label_2324; // 0x910 JumpB
	lshStopAnimation(); // 0x911 Func
	goto Label_2326; // 0x913 Jump
	
Label_2326:
	return 0; // 0x916 Return
	
Label_2324:
	StopAnimation(); // 0x914 Func
	
Label_2328:
	return 0; // 0x918 Return
}


task_12_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_cvector, var_31_int)
{
	var_32_int = 10; // 0x963 PushI
	var_33_bool = var_31_int == var_32_int; // 0x964 Eq
	if(var_33_bool == 0) goto Label_2439; // 0x965 JumpB
	func_2398(); // 0x967 NEW_2
	var_35_bool = 0; // 0x969 PushV
	var_35_bool = 0; // 0x96a MovB
	var_36_bool = 0; // 0x96b PushV
	func_2619(var_36_bool); // 0x96c NEW_2
	if(var_36_bool == 0) goto Label_2420; // 0x96e JumpB
	var_39_bool = 0; // 0x96f PushV
	func_2367(var_39_bool); // 0x970 NEW_2
	if(var_39_bool == 0) goto Label_2420; // 0x972 JumpB
	var_35_bool = 1; // 0x973 MovB
	
Label_2420:
	if(var_35_bool == 0) goto Label_2433; // 0x974 JumpB
	var_56_bool = 0; // 0x975 PushV
	func_2347(var_56_bool); // 0x976 NEW_2
	if(var_56_bool == 0) goto Label_2432; // 0x978 JumpB
	var_75_bool = 0; var_76_object = Obj(); // 0x979 PushV
	var_77_object = Obj(); // 0x97a PushV
	func_2900(var_77_object); // 0x97b NEW_2
	var_76_object = var_77_object; // 0x97c Mov
	func_2767(var_76_object); // 0x97e NEW_2
	
Label_2432:
	goto Label_2439; // 0x980 Jump
	
Label_2439:
	return 0; // 0x987 Return
	
Label_2433:
	func_2362(var_31_int); // 0x982 NEW_2
	func_2389(); // 0x985 NEW_2
}


task_12_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_cvector)
{
	func_2580(); // 0x989 NEW_2
	func_2398(); // 0x98c NEW_2
	lshStopSpeech(); // 0x98e Func
	lshStopAnimation(); // 0x990 Func
	StopAsync(); // 0x992 Func
	Hold(); // 0x994 Func
	return 0; // 0x996 Return
}


task_12_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_cvector)
{
	StopGroup0(); // 0x997 Func
	func_2398(); // 0x99a NEW_2
	var_32_string = ""; // 0x99c PushV
	var_32_string = "Neutral"; // 0x99d MovS
	func_2847(var_32_string); // 0x99e NEW_2
	func_2389(); // 0x9a1 NEW_2
	return 0; // 0x9a3 Return
}


task_12_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_cvector, var_31_bool)
{
	var_32_bool = var_31_bool; // 0x9a5 Push
	if(var_32_bool == 0) goto Label_2475; // 0x9a6 JumpB
	func_2389(); // 0x9a8 NEW_2
	goto Label_2479; // 0x9aa Jump
	
Label_2479:
	return 0; // 0x9af Return
	
Label_2475:
	var_38_string = ""; // 0x9ab PushV
	var_38_string = "Neutral"; // 0x9ac MovS
	func_2847(var_38_string); // 0x9ad NEW_2
}


task_12_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_cvector, var_31_object)
{
	var_32_bool = 0; var_33_bool = 0; // 0x9b0 PushV
	IsOverrideActive(var_33_bool); // 0x9b1 Func
	var_34_bool = var_33_bool == 0; // 0x9b3 Not
	if(var_34_bool == 0) goto Label_2508; // 0x9b4 JumpB
	EventDisable(0); // 0x9b5 EventDisable
	func_2580(); // 0x9b7 NEW_2
	var_35_bool = 0; var_36_object = Obj(); // 0x9b9 PushV
	var_36_object = var_31_object; // 0x9ba Mov
	func_2610(var_36_object); // 0x9bb NEW_2
	EventEnable(0); // 0x9bd EventEnable
	var_49_object = Obj(); // 0x9be PushV
	var_49_object = var_31_object; // 0x9bf Mov
	func_3419(var_49_object); // 0x9c0 NEW_2
	var_643_string = ""; // 0x9c2 PushV
	var_643_string = "Neutral"; // 0x9c3 MovS
	func_2847(var_643_string); // 0x9c4 NEW_2
	func_2398(); // 0x9c7 NEW_2
	func_2389(); // 0x9ca NEW_2
	
Label_2508:
	return 2; // 0x9cc Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_cvector)
{
	func_2333(var_30_cvector); // 0x91a NEW_2
	return 0; // 0x91c Return
}


func_0(var_0_object, var_54_int, var_55_object)
{
	var_57_object = Obj(); var_58_bool = 0; var_59_int = 0; var_60_bool = 0; var_61_object = Obj(); var_62_bool = 0; var_63_int = 0; var_64_bool = 0; // 0x0 PushV
	var_0_object = var_55_object; // 0x1 TMov
	var_65_bool = 0; var_66_object = Obj(); var_67_float = 0; // 0x2 PushV
	var_66_object = var_55_object; // 0x3 Mov
	var_67_float = 70.0; // 0x4 MovF
	func_2624(var_66_object, var_67_float); // 0x5 NEW_2
	var_111_bool = var_65_bool == 0; // 0x7 Not
	if(var_111_bool == 0) goto Label_11; // 0x8 JumpB
	var_54_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_61_object); // 0xb Func
	var_112_int = 0; // 0xd PushV
	func_3010(var_112_int); // 0xe NEW_2
	SetNPCName(var_112_int); // 0x10 ObjFunc
	var_113_int = 0; // 0x12 PushV
	func_3008(var_113_int); // 0x13 NEW_2
	SetNPCDescription(var_113_int); // 0x15 ObjFunc
	var_114_string = ""; // 0x17 PushV
	func_3012(var_114_string); // 0x18 NEW_2
	SetPhoto(var_114_string); // 0x1a ObjFunc
	var_115_string = ""; // 0x1c PushV
	func_3014(var_115_string); // 0x1d NEW_2
	SetPhoto2(var_115_string); // 0x1f ObjFunc
	var_116_int = 0; // 0x21 PushV
	func_3402(var_116_int); // 0x22 NEW_2
	SetPlayerName(var_116_int); // 0x24 ObjFunc
	var_63_int = -1; // 0x26 MovI
	IsOverrideActive(var_62_bool); // 0x27 Func
	var_124_bool = var_62_bool; // 0x29 Push
	if(var_124_bool == 0) goto Label_45; // 0x2a JumpB
	var_54_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_61_object); // 0x2d Func
	var_125_bool = 0; var_126_object = Obj(); // 0x2f PushV
	var_127_object = Obj(); // 0x30 PushV
	func_2900(var_127_object); // 0x31 NEW_2
	var_126_object = var_127_object; // 0x32 Mov
	func_2709(var_125_bool, var_126_object); // 0x34 NEW_2
	var_220_object = Obj(); var_221_object = Obj(); // 0x36 PushV
	var_220_object = var_55_object; // 0x37 Mov
	var_221_object = var_61_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_222_object, var_223_object, var_224_string, var_225_bool, var_220_object, var_221_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	IsDialogEnd(var_64_bool); // 0x3d ObjFunc
	
Label_63:
	var_269_bool = var_64_bool == 0; // 0x3f Not
	if(var_269_bool == 0) goto Label_70; // 0x40 JumpB
	sync(); // 0x41 Func
	IsDialogEnd(var_64_bool); // 0x43 ObjFunc
	goto Label_63; // 0x45 Jump
	
Label_70:
	var_270_object = Obj(); // 0x46 PushV
	var_270_object = var_55_object; // 0x47 Mov
	func_2692(); // 0x48 NEW_2
	StopDialog(var_61_object); // 0x4a Func
	GetReturnValue(var_63_int); // 0x4c ObjFunc
	var_54_int = var_63_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_3075()
{
	func_3298(); // 0xc05 NEW_2
	return 0; // 0xc07 Return
}


func_3080()
{
	var_39_string = "ook11Eva1"; // 0xc09 PushS
	var_40_int = 1; // 0xc0a PushI
	SetVariable(var_39_string, var_40_int); // 0xc0b Func
	return 0; // 0xc0d Return
}


func_1548(var_0_object, var_457_int, var_458_object)
{
	var_460_object = Obj(); var_461_bool = 0; var_462_int = 0; var_463_bool = 0; var_464_object = Obj(); var_465_bool = 0; var_466_int = 0; var_467_bool = 0; // 0x60c PushV
	var_0_object = var_458_object; // 0x60d TMov
	var_468_bool = 0; var_469_object = Obj(); var_470_float = 0; // 0x60e PushV
	var_469_object = var_458_object; // 0x60f Mov
	var_470_float = 70.0; // 0x610 MovF
	func_2624(var_469_object, var_470_float); // 0x611 NEW_2
	var_471_bool = var_468_bool == 0; // 0x613 Not
	if(var_471_bool == 0) goto Label_1559; // 0x614 JumpB
	var_457_int = -2; // 0x615 MovI
	return 8; // 0x616 Return
	
Label_1559:
	CreateDialog(var_464_object); // 0x617 Func
	var_472_int = 0; // 0x619 PushV
	func_3010(var_472_int); // 0x61a NEW_2
	SetNPCName(var_472_int); // 0x61c ObjFunc
	var_473_int = 0; // 0x61e PushV
	func_3008(var_473_int); // 0x61f NEW_2
	SetNPCDescription(var_473_int); // 0x621 ObjFunc
	var_474_string = ""; // 0x623 PushV
	func_3012(var_474_string); // 0x624 NEW_2
	SetPhoto(var_474_string); // 0x626 ObjFunc
	var_475_string = ""; // 0x628 PushV
	func_3014(var_475_string); // 0x629 NEW_2
	SetPhoto2(var_475_string); // 0x62b ObjFunc
	var_476_int = 0; // 0x62d PushV
	func_3402(var_476_int); // 0x62e NEW_2
	SetPlayerName(var_476_int); // 0x630 ObjFunc
	var_466_int = -1; // 0x632 MovI
	IsOverrideActive(var_465_bool); // 0x633 Func
	var_477_bool = var_465_bool; // 0x635 Push
	if(var_477_bool == 0) goto Label_1593; // 0x636 JumpB
	var_457_int = -2; // 0x637 MovI
	return 8; // 0x638 Return
	
Label_1593:
	DoDialog(var_464_object); // 0x639 Func
	var_478_bool = 0; var_479_object = Obj(); // 0x63b PushV
	var_480_object = Obj(); // 0x63c PushV
	func_2900(var_480_object); // 0x63d NEW_2
	var_479_object = var_480_object; // 0x63e Mov
	func_2709(var_478_bool, var_479_object); // 0x640 NEW_2
	var_481_object = Obj(); var_482_object = Obj(); // 0x642 PushV
	var_481_object = var_458_object; // 0x643 Mov
	var_482_object = var_464_object; // 0x644 Mov
	TaskCall(7); // 0x645 TaskCall
	func_1629(var_483_object, var_484_object, var_485_string, var_486_bool, var_481_object, var_482_object); // 0x646 NEW_2
	TaskReturn(); // 0x647 TaskReturn
	IsDialogEnd(var_467_bool); // 0x649 ObjFunc
	
Label_1611:
	var_524_bool = var_467_bool == 0; // 0x64b Not
	if(var_524_bool == 0) goto Label_1618; // 0x64c JumpB
	sync(); // 0x64d Func
	IsDialogEnd(var_467_bool); // 0x64f ObjFunc
	goto Label_1611; // 0x651 Jump
	
Label_1618:
	var_525_object = Obj(); // 0x652 PushV
	var_525_object = var_458_object; // 0x653 Mov
	func_2692(); // 0x654 NEW_2
	StopDialog(var_464_object); // 0x656 Func
	GetReturnValue(var_466_int); // 0x658 ObjFunc
	var_457_int = var_466_int; // 0x65a Mov
	return 8; // 0x65b Return
}


func_3086()
{
	func_3246(); // 0xc10 NEW_2
	return 0; // 0xc12 Return
}


func_2578(var_69_bool)
{
	var_69_bool = 1; // 0xa12 MovB
	return 0; // 0xa13 Return
}


func_3091(var_243_object)
{
	var_245_string = "money1000 is given"; // 0xc14 PushS
	Trace(var_245_string); // 0xc15 Func
	var_246_object = Obj(); var_247_int = 0; // 0xc17 PushV
	var_246_object = var_243_object; // 0xc18 Mov
	var_247_int = 1000; // 0xc19 MovI
	func_2933(var_246_object, var_247_int); // 0xc1a NEW_2
	return 0; // 0xc1c Return
}


func_2580()
{
	StopAnimation(); // 0xa14 Func
	StopGroup0(); // 0xa16 Func
	return 0; // 0xa18 Return
}


func_3352(var_118_object)
{
	var_119_object = Obj(); var_120_object = Obj(); var_121_object = Obj(); var_122_object = Obj(); // 0xd18 PushV
	GetMainOutdoorScene(var_121_object); // 0xd19 Func
	var_123_bool = var_121_object == 0; // 0xd1b NullEq
	if(var_123_bool == 0) goto Label_3363; // 0xd1c JumpB
	var_124_string = "Can't find main outdoor scene"; // 0xd1d PushS
	Trace(var_124_string); // 0xd1e Func
	var_122_object = 0; // 0xd20 SetNull
	var_118_object = var_122_object; // 0xd21 Mov
	return 4; // 0xd22 Return
	
Label_3363:
	GetMap(var_122_object); // 0xd23 ObjFunc
	var_118_object = var_122_object; // 0xd25 Mov
	return 4; // 0xd26 Return
}


func_2585(var_46_float)
{
	var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); // 0xa19 PushV
	GetPosition(var_51_cvector); // 0xa1a Func
	GetPosition(var_52_cvector); // 0xa1c ObjFunc
	var_53_cvector = var_52_cvector - var_51_cvector; // 0xa1e Sub2
	var_46_float = var_53_cvector | var_53_cvector; // 0xa1f Or2
	return 6; // 0xa20 Return
}


func_3101()
{
	var_266_string = "playsound"; // 0xc1e PushS
	var_267_string = "givemoney"; // 0xc1f PushS
	TriggerWorld(var_266_string, var_267_string); // 0xc20 Func
	return 0; // 0xc22 Return
}


func_2333(var_0_object)
{
	var_31_bool = 0; // 0x91d PushV
	func_2619(var_31_bool); // 0x91e NEW_2
	var_34_bool = var_31_bool == 0; // 0x920 Not
	if(var_34_bool == 0) goto Label_2340; // 0x921 JumpB
	Hold(); // 0x922 Func
	
Label_2340:
	GetDirection(var_0_object); // 0x924 Func
	
Label_2342:
	func_2509(); // 0x927 NEW_2
	goto Label_2342; // 0x929 Jump
}


func_2847(var_253_string)
{
	var_254_bool = 0; var_255_float = 0; var_256_float = 0; var_257_bool = 0; var_258_float = 0; var_259_float = 0; // 0xb1f PushV
	lshHasAnimation(var_257_bool, var_253_string); // 0xb20 Func
	var_260_bool = var_257_bool; // 0xb22 Push
	if(var_260_bool == 0) goto Label_2858; // 0xb23 JumpB
	lshGetAnimTimes(var_253_string, var_258_float, var_259_float); // 0xb24 Func
	var_261_bool = 0; // 0xb26 PushB
	lshPlayAnimation(var_258_float, var_259_float, var_261_bool); // 0xb27 Func
	goto Label_2862; // 0xb29 Jump
	
Label_2862:
	return 6; // 0xb2e Return
	
Label_2858:
	var_262_string = "Can't find lsh animation : "; // 0xb2a PushS
	var_263_int = var_262_string + var_253_string; // 0xb2b Add
	Trace(var_263_int); // 0xb2c Func
}


func_2593(var_251_string, var_252_int)
{
	var_253_int = 0; var_254_int = 0; // 0xa21 PushV
	GetProperty(var_251_string, var_254_int); // 0xa22 ObjFunc
	var_255_int = var_254_int + var_252_int; // 0xa24 Add
	SetProperty(var_251_string, var_255_int); // 0xa25 ObjFunc
	return 2; // 0xa27 Return
}


func_3107()
{
	var_134_object = Obj(); var_135_string = ""; var_136_float = 0; // 0xc24 PushV
	var_137_object = Obj(); // 0xc25 PushV
	func_3352(var_137_object); // 0xc26 NEW_2
	var_134_object = var_137_object; // 0xc27 Mov
	var_135_string = "pt_region01_center01"; // 0xc29 MovS
	var_136_float = 2; // 0xc2a MovI
	func_3369(var_134_object, var_135_string, var_136_float); // 0xc2b NEW_2
	var_157_object = Obj(); // 0xc2d PushV
	func_3352(var_157_object); // 0xc2e NEW_2
	ShowMap(var_157_object); // 0xc30 ObjFunc
	return 0; // 0xc32 Return
}


func_2600(var_39_bool, var_40_cvector)
{
	var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_bool = 0; var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_bool = 0; // 0xa28 PushV
	GetPosition(var_44_cvector); // 0xa29 Func
	var_45_cvector = var_40_cvector - var_44_cvector; // 0xa2b Sub2
	var_47_float = GetByIndex(var_45_cvector, 0); // 0xa2c PushE
	var_48_float = GetByIndex(var_45_cvector, 2); // 0xa2d PushE
	Rotate(var_47_float, var_48_float, var_46_bool); // 0xa2e Func
	var_39_bool = var_46_bool; // 0xa30 Mov
	return 6; // 0xa31 Return
}


func_1065(var_0_object, var_367_int, var_368_object)
{
	var_370_object = Obj(); var_371_bool = 0; var_372_int = 0; var_373_bool = 0; var_374_object = Obj(); var_375_bool = 0; var_376_int = 0; var_377_bool = 0; // 0x429 PushV
	var_0_object = var_368_object; // 0x42a TMov
	var_378_bool = 0; var_379_object = Obj(); var_380_float = 0; // 0x42b PushV
	var_379_object = var_368_object; // 0x42c Mov
	var_380_float = 70.0; // 0x42d MovF
	func_2624(var_379_object, var_380_float); // 0x42e NEW_2
	var_381_bool = var_378_bool == 0; // 0x430 Not
	if(var_381_bool == 0) goto Label_1076; // 0x431 JumpB
	var_367_int = -2; // 0x432 MovI
	return 8; // 0x433 Return
	
Label_1076:
	CreateDialog(var_374_object); // 0x434 Func
	var_382_int = 0; // 0x436 PushV
	func_3010(var_382_int); // 0x437 NEW_2
	SetNPCName(var_382_int); // 0x439 ObjFunc
	var_383_int = 0; // 0x43b PushV
	func_3008(var_383_int); // 0x43c NEW_2
	SetNPCDescription(var_383_int); // 0x43e ObjFunc
	var_384_string = ""; // 0x440 PushV
	func_3012(var_384_string); // 0x441 NEW_2
	SetPhoto(var_384_string); // 0x443 ObjFunc
	var_385_string = ""; // 0x445 PushV
	func_3014(var_385_string); // 0x446 NEW_2
	SetPhoto2(var_385_string); // 0x448 ObjFunc
	var_386_int = 0; // 0x44a PushV
	func_3402(var_386_int); // 0x44b NEW_2
	SetPlayerName(var_386_int); // 0x44d ObjFunc
	var_376_int = -1; // 0x44f MovI
	IsOverrideActive(var_375_bool); // 0x450 Func
	var_387_bool = var_375_bool; // 0x452 Push
	if(var_387_bool == 0) goto Label_1110; // 0x453 JumpB
	var_367_int = -2; // 0x454 MovI
	return 8; // 0x455 Return
	
Label_1110:
	DoDialog(var_374_object); // 0x456 Func
	var_388_bool = 0; var_389_object = Obj(); // 0x458 PushV
	var_390_object = Obj(); // 0x459 PushV
	func_2900(var_390_object); // 0x45a NEW_2
	var_389_object = var_390_object; // 0x45b Mov
	func_2709(var_388_bool, var_389_object); // 0x45d NEW_2
	var_391_object = Obj(); var_392_object = Obj(); // 0x45f PushV
	var_391_object = var_368_object; // 0x460 Mov
	var_392_object = var_374_object; // 0x461 Mov
	TaskCall(5); // 0x462 TaskCall
	func_1146(var_393_object, var_394_object, var_395_string, var_396_bool, var_391_object, var_392_object); // 0x463 NEW_2
	TaskReturn(); // 0x464 TaskReturn
	IsDialogEnd(var_377_bool); // 0x466 ObjFunc
	
Label_1128:
	var_453_bool = var_377_bool == 0; // 0x468 Not
	if(var_453_bool == 0) goto Label_1135; // 0x469 JumpB
	sync(); // 0x46a Func
	IsDialogEnd(var_377_bool); // 0x46c ObjFunc
	goto Label_1128; // 0x46e Jump
	
Label_1135:
	var_454_object = Obj(); // 0x46f PushV
	var_454_object = var_368_object; // 0x470 Mov
	func_2692(); // 0x471 NEW_2
	StopDialog(var_374_object); // 0x473 Func
	GetReturnValue(var_376_int); // 0x475 ObjFunc
	var_367_int = var_376_int; // 0x477 Mov
	return 8; // 0x478 Return
}


func_3369(var_134_object, var_135_string, var_136_float)
{
	var_138_cvector = CVector(0,0,0); var_139_cvector = CVector(0,0,0); var_140_object = Obj(); var_141_bool = 0; var_142_cvector = CVector(0,0,0); var_143_cvector = CVector(0,0,0); var_144_object = Obj(); var_145_bool = 0; // 0xd29 PushV
	GetMainOutdoorScene(var_144_object); // 0xd2a Func
	var_146_bool = var_144_object == 0; // 0xd2c NullEq
	if(var_146_bool == 0) goto Label_3378; // 0xd2d JumpB
	var_147_string = "Can't find main outdoor scene"; // 0xd2e PushS
	Trace(var_147_string); // 0xd2f Func
	return 8; // 0xd31 Return
	
Label_3378:
	GetLocator(var_135_string, var_145_bool, var_142_cvector, var_143_cvector); // 0xd32 ObjFunc
	var_148_bool = var_145_bool == 0; // 0xd34 Not
	if(var_148_bool == 0) goto Label_3388; // 0xd35 JumpB
	var_149_string = "Warning: outdoor scene locator "; // 0xd36 PushS
	var_150_int = var_149_string + var_135_string; // 0xd37 Add
	var_151_string = " doesnt exist"; // 0xd38 PushS
	var_152_int = var_150_int + var_151_string; // 0xd39 Add
	Trace(var_152_int); // 0xd3a Func
	
Label_3388:
	GetMap(var_134_object); // 0xd3c ObjFunc
	var_153_bool = var_134_object == 0; // 0xd3e NullEq
	if(var_153_bool == 0) goto Label_3396; // 0xd3f JumpB
	var_154_string = "Can't find map"; // 0xd40 PushS
	Trace(var_154_string); // 0xd41 Func
	return 8; // 0xd43 Return
	
Label_3396:
	var_155_float = GetByIndex(var_142_cvector, 0); // 0xd44 PushE
	var_156_float = GetByIndex(var_142_cvector, 2); // 0xd45 PushE
	SetMapParams(var_155_float, var_156_float, var_136_float); // 0xd46 ObjFunc
	return 8; // 0xd48 Return
}


func_2347(var_56_bool)
{
	var_57_object = Obj(); var_58_object = Obj(); // 0x92b PushV
	var_59_string = "player"; // 0x92c PushS
	FindActor(var_58_object, var_59_string); // 0x92d Func
	var_60_bool = var_58_object == 0; // 0x92f Not
	if(var_60_bool == 0) goto Label_2355; // 0x930 JumpB
	var_56_bool = 0; // 0x931 MovB
	return 2; // 0x932 Return
	
Label_2355:
	var_61_bool = 0; var_62_object = Obj(); // 0x933 PushV
	var_62_object = var_58_object; // 0x934 Mov
	func_2610(var_62_object); // 0x935 NEW_2
	var_56_bool = var_61_bool; // 0x936 Mov
	return 2; // 0x938 Return
}


func_2863(var_231_string, var_232_bool)
{
	var_235_bool = 0; var_236_float = 0; var_237_float = 0; var_238_bool = 0; var_239_float = 0; var_240_float = 0; // 0xb2f PushV
	lshHasAnimation(var_238_bool, var_231_string); // 0xb30 Func
	var_241_bool = var_238_bool; // 0xb32 Push
	if(var_241_bool == 0) goto Label_2873; // 0xb33 JumpB
	lshGetAnimTimes(var_231_string, var_239_float, var_240_float); // 0xb34 Func
	lshPlayAnimation(var_239_float, var_240_float, var_232_bool); // 0xb36 Func
	goto Label_2877; // 0xb38 Jump
	
Label_2877:
	return 6; // 0xb3d Return
	
Label_2873:
	var_242_string = "Can't find lsh animation : "; // 0xb39 PushS
	var_243_int = var_242_string + var_231_string; // 0xb3a Add
	Trace(var_243_int); // 0xb3b Func
}


func_2610(var_35_bool)
{
	var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); // 0xa32 PushV
	GetPosition(var_38_cvector); // 0xa33 ObjFunc
	var_39_bool = 0; var_40_cvector = CVector(0,0,0); // 0xa35 PushV
	var_40_cvector = var_38_cvector; // 0xa36 Mov
	func_2600(var_39_bool, var_40_cvector); // 0xa37 NEW_2
	var_35_bool = var_39_bool; // 0xa38 Mov
	return 2; // 0xa3a Return
}


func_3123()
{
	var_80_string = "k3q02"; // 0xc34 PushS
	var_81_int = -1; // 0xc35 PushI
	SetVariable(var_80_string, var_81_int); // 0xc36 Func
	func_3259(); // 0xc39 NEW_2
	return 0; // 0xc3b Return
}


func_307(var_0_object, var_1_object, var_2_object, var_3_string, var_306_object, var_307_object)
{
	var_0_object = var_307_object; // 0x134 TMov
	var_1_object = var_306_object; // 0x135 TMov
	var_3_string = 0; // 0x136 TMovB
	var_312_int = 1; // 0x137 PushI
	if(var_312_int == 0) goto Label_364; // 0x138 JumpB
	var_313_string = ""; // 0x139 PushV
	var_313_string = "Neutral"; // 0x13a MovS
	func_394(var_307_object, var_313_string); // 0x13b NEW_2
	var_321_int = 525548; // 0x13d PushI
	SetMessage(var_321_int); // 0x13e TObjFunc
	ClearReplies(); // 0x140 TObjFunc
	var_322_bool = 0; var_323_object = Obj(); // 0x142 PushV
	var_323_object = var_1_object; // 0x143 MovT
	func_3138(var_323_object); // 0x144 NEW_2
	if(var_322_bool == 0) goto Label_332; // 0x146 JumpB
	var_330_int = 525549; // 0x147 PushI
	var_331_int = 42898; // 0x148 PushI
	var_332_int = 26905; // 0x149 PushI
	AddReply(var_330_int, var_331_int, var_332_int); // 0x14a TObjFunc
	
Label_332:
	var_333_bool = 0; // 0x14c PushV
	var_333_bool = 0; // 0x14d MovB
	var_334_bool = 0; var_335_object = Obj(); // 0x14e PushV
	var_335_object = var_1_object; // 0x14f MovT
	func_3150(var_335_object); // 0x150 NEW_2
	if(var_334_bool == 0) goto Label_345; // 0x152 JumpB
	var_340_bool = 0; var_341_object = Obj(); // 0x153 PushV
	var_341_object = var_1_object; // 0x154 MovT
	func_3162(var_341_object); // 0x155 NEW_2
	if(var_340_bool == 0) goto Label_345; // 0x157 JumpB
	var_333_bool = 1; // 0x158 MovB
	
Label_345:
	if(var_333_bool == 0) goto Label_351; // 0x159 JumpB
	var_346_int = 525578; // 0x15a PushI
	var_347_int = 41036; // 0x15b PushI
	var_348_int = 26925; // 0x15c PushI
	AddReply(var_346_int, var_347_int, var_348_int); // 0x15d TObjFunc
	
Label_351:
	var_349_int = 539127; // 0x15f PushI
	var_350_int = -1; // 0x160 PushI
	var_351_int = 41057; // 0x161 PushI
	AddReply(var_349_int, var_350_int, var_351_int); // 0x162 TObjFunc
	var_352_int = 525558; // 0x164 PushI
	var_353_int = -1; // 0x165 PushI
	var_354_int = 26914; // 0x166 PushI
	AddReply(var_352_int, var_353_int, var_354_int); // 0x167 TObjFunc
	goto Label_364; // 0x169 Jump
	
Label_364:
	var_355_bool = 0; // 0x16c PushV
	func_3016(var_355_bool); // 0x16d NEW_2
	if(var_355_bool == 0) goto Label_379; // 0x16f JumpB
	
Label_368:
	lshWaitForAnimEnd(); // 0x170 Func
	var_356_string = var_3_string; // 0x172 PushT
	if(var_356_string == 0) goto Label_373; // 0x173 JumpB
	goto Label_378; // 0x174 Jump
	
Label_378:
	goto Label_393; // 0x17a Jump
	
Label_393:
	return 0; // 0x189 Return
	
Label_373:
	var_357_string = ""; // 0x175 PushV
	var_357_string = var_2_object; // 0x176 MovT
	func_2847(var_357_string); // 0x177 NEW_2
	goto Label_368; // 0x179 Jump
	
Label_379:
	var_358_string = "all"; // 0x17b PushS
	var_359_string = "idle"; // 0x17c PushS
	PlayAnimation(var_358_string, var_359_string); // 0x17d Func
	
Label_383:
	WaitForAnimEnd(); // 0x17f Func
	var_360_string = var_3_string; // 0x181 PushT
	if(var_360_string == 0) goto Label_388; // 0x182 JumpB
	goto Label_393; // 0x183 Jump
	
Label_388:
	var_361_string = "all"; // 0x184 PushS
	var_362_string = "idle"; // 0x185 PushS
	PlayAnimation(var_361_string, var_362_string); // 0x186 Func
	goto Label_383; // 0x188 Jump
}


func_2362(var_0_object)
{
	var_108_float = GetByIndex(var_0_object, 0); // 0x93a PushE
	var_109_float = GetByIndex(var_0_object, 2); // 0x93b PushE
	RotateAsync(var_108_float, var_109_float); // 0x93c Func
	return 0; // 0x93e Return
}


func_2619(var_31_bool)
{
	var_32_bool = 0; var_33_bool = 0; // 0xa3b PushV
	IsLoaded(var_33_bool); // 0xa3c Func
	var_31_bool = var_33_bool; // 0xa3e Mov
	return 2; // 0xa3f Return
}


func_3132()
{
	var_90_string = "playsound"; // 0xc3d PushS
	var_91_string = "giveitem"; // 0xc3e PushS
	TriggerWorld(var_90_string, var_91_string); // 0xc3f Func
	return 0; // 0xc41 Return
}


func_2878(var_159_bool, var_160_string)
{
	var_161_bool = 0; var_162_bool = 0; // 0xb3e PushV
	var_163_bool = 0; // 0xb3f PushV
	func_3016(var_163_bool); // 0xb40 NEW_2
	if(var_163_bool == 0) goto Label_2891; // 0xb42 JumpB
	lshHasSpeech(var_162_bool, var_160_string); // 0xb43 Func
	var_164_bool = var_162_bool; // 0xb45 Push
	if(var_164_bool == 0) goto Label_2891; // 0xb46 JumpB
	lshPlaySpeech(var_160_string); // 0xb47 Func
	var_159_bool = 1; // 0xb49 MovB
	return 2; // 0xb4a Return
	
Label_2891:
	var_159_bool = 0; // 0xb4b MovB
	return 2; // 0xb4c Return
}


func_2367(var_39_bool)
{
	var_40_object = Obj(); var_41_bool = 0; var_42_object = Obj(); var_43_bool = 0; // 0x93f PushV
	var_44_string = "player"; // 0x940 PushS
	FindActor(var_42_object, var_44_string); // 0x941 Func
	var_45_bool = var_42_object == 0; // 0x943 Not
	if(var_45_bool == 0) goto Label_2375; // 0x944 JumpB
	var_39_bool = 0; // 0x945 MovB
	return 4; // 0x946 Return
	
Label_2375:
	var_46_float = 0; var_47_object = Obj(); // 0x947 PushV
	var_47_object = var_42_object; // 0x948 Mov
	func_2585(var_47_object); // 0x949 NEW_2
	var_54_float = 90000.0; // 0x94b PushF
	var_55_bool = var_46_float > var_54_float; // 0x94c GT
	if(var_55_bool == 0) goto Label_2384; // 0x94d JumpB
	var_39_bool = 0; // 0x94e MovB
	return 4; // 0x94f Return
	
Label_2384:
	CanSee(var_43_bool, var_42_object); // 0x950 Func
	var_39_bool = var_43_bool; // 0x952 Mov
	return 4; // 0x953 Return
}


func_2624(var_65_bool, var_67_float)
{
	var_68_float = 0; var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); var_73_cvector = CVector(0,0,0); var_74_cvector = CVector(0,0,0); var_75_bool = 0; var_76_bool = 0; var_77_float = 0; var_78_cvector = CVector(0,0,0); var_79_cvector = CVector(0,0,0); var_80_cvector = CVector(0,0,0); var_81_cvector = CVector(0,0,0); var_82_cvector = CVector(0,0,0); var_83_cvector = CVector(0,0,0); var_84_bool = 0; var_85_bool = 0; // 0xa40 PushV
	GetPosition(var_78_cvector); // 0xa41 ObjFunc
	GetEyesHeight(var_77_float); // 0xa43 ObjFunc
	var_86_float = GetByIndex(var_78_cvector, 1); // 0xa45 PushE
	var_86_float = var_86_float + var_77_float; // 0xa46 Add2
	SetByIndex(var_78_cvector, 1) = var_86_float; // 0xa47 PopE
	GetPosition(var_79_cvector); // 0xa48 Func
	GetEyesHeight(var_77_float); // 0xa4a Func
	var_87_float = GetByIndex(var_79_cvector, 1); // 0xa4c PushE
	var_87_float = var_87_float + var_77_float; // 0xa4d Add2
	SetByIndex(var_79_cvector, 1) = var_87_float; // 0xa4e PopE
	var_80_cvector = var_78_cvector - var_79_cvector; // 0xa4f Sub2
	var_88_float = GetByIndex(var_80_cvector, 1); // 0xa50 PushE
	var_88_float = 0; // 0xa51 MovI
	SetByIndex(var_80_cvector, 1) = var_88_float; // 0xa52 PopE
	var_89_int = var_80_cvector | var_80_cvector; // 0xa53 Or
	var_90_float = sqrt(var_89_int); // 0xa54 Sqrt
	var_80_cvector = var_80_cvector / var_80_cvector; // 0xa55 Div2
	var_81_cvector = -var_80_cvector; // 0xa56 Neg2
	var_91_float = var_80_cvector * var_67_float; // 0xa57 Mult
	var_92_cvector = CVector(0,0,0); var_93_cvector = CVector(0,0,0); // 0xa58 PushV
	var_94_cvector = CVector(0.0, 1.0, 0.0); // 0xa59 PushVec
	var_93_cvector = var_81_cvector ^ var_94_cvector; // 0xa5a Xor2
	func_2906(var_92_cvector, var_93_cvector); // 0xa5b NEW_2
	var_100_int = 25; // 0xa5d PushI
	var_101_float = var_92_cvector * var_100_int; // 0xa5e Mult
	var_102_int = var_91_float + var_101_float; // 0xa5f Add
	var_103_cvector = CVector(0.0, 10.0, 0.0); // 0xa60 PushVec
	var_82_cvector = var_102_int - var_103_cvector; // 0xa61 Sub2
	var_83_cvector = var_79_cvector + var_82_cvector; // 0xa62 Add2
	IsOverrideActive(var_84_bool); // 0xa63 Func
	var_104_bool = var_84_bool; // 0xa65 Push
	if(var_104_bool == 0) goto Label_2665; // 0xa66 JumpB
	var_65_bool = 0; // 0xa67 MovB
	return 18; // 0xa68 Return
	
Label_2665:
	StopWorld(); // 0xa69 Func
	CameraTransit(var_83_cvector, var_81_cvector); // 0xa6b Func
	var_105_float = GetByIndex(var_82_cvector, 0); // 0xa6d PushE
	var_106_float = GetByIndex(var_82_cvector, 2); // 0xa6e PushE
	Rotate(var_105_float, var_106_float); // 0xa6f Func
	var_107_bool = 0; // 0xa71 PushV
	func_3016(var_107_bool); // 0xa72 NEW_2
	if(var_107_bool == 0) goto Label_2678; // 0xa74 JumpB
	goto Label_2686; // 0xa75 Jump
	
Label_2686:
	CameraWaitForPlayFinish(); // 0xa7e Func
	ResumeWorld(); // 0xa80 Func
	var_65_bool = 1; // 0xa82 MovB
	return 18; // 0xa83 Return
	
Label_2678:
	var_108_string = "head"; // 0xa76 PushS
	HasAnimationTrack(var_85_bool, var_108_string); // 0xa77 Func
	var_109_bool = var_85_bool; // 0xa79 Push
	if(var_109_bool == 0) goto Label_2686; // 0xa7a JumpB
	var_110_string = "head"; // 0xa7b PushS
	LookAsyncCamera(var_110_string); // 0xa7c Func
}


func_3138(var_322_bool)
{
	var_324_int = 0; var_325_string = ""; // 0xc43 PushV
	var_325_string = "k3q02"; // 0xc44 MovS
	func_2916(var_324_int, var_325_string); // 0xc45 NEW_2
	var_328_int = 2; // 0xc47 PushI
	var_329_bool = var_324_int == var_328_int; // 0xc48 Eq
	if(var_329_bool == 0) goto Label_3148; // 0xc49 JumpB
	var_322_bool = 1; // 0xc4a MovB
	return 0; // 0xc4b Return
	
Label_3148:
	var_322_bool = 0; // 0xc4c MovB
	return 0; // 0xc4d Return
}


func_3402(var_116_int)
{
	var_117_int = 0; var_118_int = 0; // 0xd4a PushV
	var_119_string = "branch"; // 0xd4b PushS
	GetVariable(var_119_string, var_118_int); // 0xd4c Func
	var_120_int = 0; // 0xd4e PushI
	var_121_bool = var_118_int == var_120_int; // 0xd4f Eq
	if(var_121_bool == 0) goto Label_3412; // 0xd50 JumpB
	var_116_int = 1; // 0xd51 MovI
	return 2; // 0xd52 Return
	
Label_3412:
	var_122_int = 1; // 0xd54 PushI
	var_123_bool = var_118_int == var_122_int; // 0xd55 Eq
	if(var_123_bool == 0) goto Label_3417; // 0xd56 JumpB
	var_116_int = 2; // 0xd57 MovI
	return 2; // 0xd58 Return
	
Label_3417:
	var_116_int = 3; // 0xd59 MovI
	return 2; // 0xd5a Return
}


func_1867(var_0_object, var_528_int, var_529_object)
{
	var_531_object = Obj(); var_532_bool = 0; var_533_int = 0; var_534_bool = 0; var_535_object = Obj(); var_536_bool = 0; var_537_int = 0; var_538_bool = 0; // 0x74b PushV
	var_0_object = var_529_object; // 0x74c TMov
	var_539_bool = 0; var_540_object = Obj(); var_541_float = 0; // 0x74d PushV
	var_540_object = var_529_object; // 0x74e Mov
	var_541_float = 70.0; // 0x74f MovF
	func_2624(var_540_object, var_541_float); // 0x750 NEW_2
	var_542_bool = var_539_bool == 0; // 0x752 Not
	if(var_542_bool == 0) goto Label_1878; // 0x753 JumpB
	var_528_int = -2; // 0x754 MovI
	return 8; // 0x755 Return
	
Label_1878:
	CreateDialog(var_535_object); // 0x756 Func
	var_543_int = 0; // 0x758 PushV
	func_3010(var_543_int); // 0x759 NEW_2
	SetNPCName(var_543_int); // 0x75b ObjFunc
	var_544_int = 0; // 0x75d PushV
	func_3008(var_544_int); // 0x75e NEW_2
	SetNPCDescription(var_544_int); // 0x760 ObjFunc
	var_545_string = ""; // 0x762 PushV
	func_3012(var_545_string); // 0x763 NEW_2
	SetPhoto(var_545_string); // 0x765 ObjFunc
	var_546_string = ""; // 0x767 PushV
	func_3014(var_546_string); // 0x768 NEW_2
	SetPhoto2(var_546_string); // 0x76a ObjFunc
	var_547_int = 0; // 0x76c PushV
	func_3402(var_547_int); // 0x76d NEW_2
	SetPlayerName(var_547_int); // 0x76f ObjFunc
	var_537_int = -1; // 0x771 MovI
	IsOverrideActive(var_536_bool); // 0x772 Func
	var_548_bool = var_536_bool; // 0x774 Push
	if(var_548_bool == 0) goto Label_1912; // 0x775 JumpB
	var_528_int = -2; // 0x776 MovI
	return 8; // 0x777 Return
	
Label_1912:
	DoDialog(var_535_object); // 0x778 Func
	var_549_bool = 0; var_550_object = Obj(); // 0x77a PushV
	var_551_object = Obj(); // 0x77b PushV
	func_2900(var_551_object); // 0x77c NEW_2
	var_550_object = var_551_object; // 0x77d Mov
	func_2709(var_549_bool, var_550_object); // 0x77f NEW_2
	var_552_object = Obj(); var_553_object = Obj(); // 0x781 PushV
	var_552_object = var_529_object; // 0x782 Mov
	var_553_object = var_535_object; // 0x783 Mov
	TaskCall(9); // 0x784 TaskCall
	func_1948(var_554_object, var_555_object, var_556_string, var_557_bool, var_552_object, var_553_object); // 0x785 NEW_2
	TaskReturn(); // 0x786 TaskReturn
	IsDialogEnd(var_538_bool); // 0x788 ObjFunc
	
Label_1930:
	var_585_bool = var_538_bool == 0; // 0x78a Not
	if(var_585_bool == 0) goto Label_1937; // 0x78b JumpB
	sync(); // 0x78c Func
	IsDialogEnd(var_538_bool); // 0x78e ObjFunc
	goto Label_1930; // 0x790 Jump
	
Label_1937:
	var_586_object = Obj(); // 0x791 PushV
	var_586_object = var_529_object; // 0x792 Mov
	func_2692(); // 0x793 NEW_2
	StopDialog(var_535_object); // 0x795 Func
	GetReturnValue(var_537_int); // 0x797 ObjFunc
	var_528_int = var_537_int; // 0x799 Mov
	return 8; // 0x79a Return
}


func_2893()
{
	var_34_bool = 0; // 0xb4d PushV
	func_3016(var_34_bool); // 0xb4e NEW_2
	if(var_34_bool == 0) goto Label_2899; // 0xb50 JumpB
	lshStopSpeech(); // 0xb51 Func
	
Label_2899:
	return 0; // 0xb53 Return
}


func_3150(var_334_bool)
{
	var_336_int = 0; var_337_string = ""; // 0xc4f PushV
	var_337_string = "k3q03"; // 0xc50 MovS
	func_2916(var_336_int, var_337_string); // 0xc51 NEW_2
	var_338_int = 1; // 0xc53 PushI
	var_339_bool = var_336_int == var_338_int; // 0xc54 Eq
	if(var_339_bool == 0) goto Label_3160; // 0xc55 JumpB
	var_334_bool = 1; // 0xc56 MovB
	return 0; // 0xc57 Return
	
Label_3160:
	var_334_bool = 0; // 0xc58 MovB
	return 0; // 0xc59 Return
}


func_2126(var_0_object, var_587_int, var_588_object)
{
	var_590_object = Obj(); var_591_bool = 0; var_592_int = 0; var_593_bool = 0; var_594_object = Obj(); var_595_bool = 0; var_596_int = 0; var_597_bool = 0; // 0x84e PushV
	var_0_object = var_588_object; // 0x84f TMov
	var_598_bool = 0; var_599_object = Obj(); var_600_float = 0; // 0x850 PushV
	var_599_object = var_588_object; // 0x851 Mov
	var_600_float = 70.0; // 0x852 MovF
	func_2624(var_599_object, var_600_float); // 0x853 NEW_2
	var_601_bool = var_598_bool == 0; // 0x855 Not
	if(var_601_bool == 0) goto Label_2137; // 0x856 JumpB
	var_587_int = -2; // 0x857 MovI
	return 8; // 0x858 Return
	
Label_2137:
	CreateDialog(var_594_object); // 0x859 Func
	var_602_int = 0; // 0x85b PushV
	func_3010(var_602_int); // 0x85c NEW_2
	SetNPCName(var_602_int); // 0x85e ObjFunc
	var_603_int = 0; // 0x860 PushV
	func_3008(var_603_int); // 0x861 NEW_2
	SetNPCDescription(var_603_int); // 0x863 ObjFunc
	var_604_string = ""; // 0x865 PushV
	func_3012(var_604_string); // 0x866 NEW_2
	SetPhoto(var_604_string); // 0x868 ObjFunc
	var_605_string = ""; // 0x86a PushV
	func_3014(var_605_string); // 0x86b NEW_2
	SetPhoto2(var_605_string); // 0x86d ObjFunc
	var_606_int = 0; // 0x86f PushV
	func_3402(var_606_int); // 0x870 NEW_2
	SetPlayerName(var_606_int); // 0x872 ObjFunc
	var_596_int = -1; // 0x874 MovI
	IsOverrideActive(var_595_bool); // 0x875 Func
	var_607_bool = var_595_bool; // 0x877 Push
	if(var_607_bool == 0) goto Label_2171; // 0x878 JumpB
	var_587_int = -2; // 0x879 MovI
	return 8; // 0x87a Return
	
Label_2171:
	DoDialog(var_594_object); // 0x87b Func
	var_608_bool = 0; var_609_object = Obj(); // 0x87d PushV
	var_610_object = Obj(); // 0x87e PushV
	func_2900(var_610_object); // 0x87f NEW_2
	var_609_object = var_610_object; // 0x880 Mov
	func_2709(var_608_bool, var_609_object); // 0x882 NEW_2
	var_611_object = Obj(); var_612_object = Obj(); // 0x884 PushV
	var_611_object = var_588_object; // 0x885 Mov
	var_612_object = var_594_object; // 0x886 Mov
	TaskCall(11); // 0x887 TaskCall
	func_2207(var_613_object, var_614_object, var_615_string, var_616_bool, var_611_object, var_612_object); // 0x888 NEW_2
	TaskReturn(); // 0x889 TaskReturn
	IsDialogEnd(var_597_bool); // 0x88b ObjFunc
	
Label_2189:
	var_641_bool = var_597_bool == 0; // 0x88d Not
	if(var_641_bool == 0) goto Label_2196; // 0x88e JumpB
	sync(); // 0x88f Func
	IsDialogEnd(var_597_bool); // 0x891 ObjFunc
	goto Label_2189; // 0x893 Jump
	
Label_2196:
	var_642_object = Obj(); // 0x894 PushV
	var_642_object = var_588_object; // 0x895 Mov
	func_2692(); // 0x896 NEW_2
	StopDialog(var_594_object); // 0x898 Func
	GetReturnValue(var_596_int); // 0x89a ObjFunc
	var_587_int = var_596_int; // 0x89c Mov
	return 8; // 0x89d Return
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_220_object, var_221_object)
{
	var_0_object = var_221_object; // 0x52 TMov
	var_1_object = var_220_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_226_int = 1; // 0x55 PushI
	if(var_226_int == 0) goto Label_109; // 0x56 JumpB
	var_227_string = ""; // 0x57 PushV
	var_227_string = "Neutral"; // 0x58 MovS
	func_139(var_221_object, var_227_string); // 0x59 NEW_2
	var_244_int = 525477; // 0x5b PushI
	SetMessage(var_244_int); // 0x5c TObjFunc
	ClearReplies(); // 0x5e TObjFunc
	var_245_int = 529299; // 0x60 PushI
	var_246_int = 30754; // 0x61 PushI
	var_247_int = 30753; // 0x62 PushI
	AddReply(var_245_int, var_246_int, var_247_int); // 0x63 TObjFunc
	var_248_int = 525478; // 0x65 PushI
	var_249_int = -1; // 0x66 PushI
	var_250_int = 26834; // 0x67 PushI
	AddReply(var_248_int, var_249_int, var_250_int); // 0x68 TObjFunc
	goto Label_109; // 0x6a Jump
	
Label_109:
	var_251_bool = 0; // 0x6d PushV
	func_3016(var_251_bool); // 0x6e NEW_2
	if(var_251_bool == 0) goto Label_124; // 0x70 JumpB
	
Label_113:
	lshWaitForAnimEnd(); // 0x71 Func
	var_252_string = var_3_string; // 0x73 PushT
	if(var_252_string == 0) goto Label_118; // 0x74 JumpB
	goto Label_123; // 0x75 Jump
	
Label_123:
	goto Label_138; // 0x7b Jump
	
Label_138:
	return 0; // 0x8a Return
	
Label_118:
	var_253_string = ""; // 0x76 PushV
	var_253_string = var_2_object; // 0x77 MovT
	func_2847(var_253_string); // 0x78 NEW_2
	goto Label_113; // 0x7a Jump
	
Label_124:
	var_264_string = "all"; // 0x7c PushS
	var_265_string = "idle"; // 0x7d PushS
	PlayAnimation(var_264_string, var_265_string); // 0x7e Func
	
Label_128:
	WaitForAnimEnd(); // 0x80 Func
	var_266_string = var_3_string; // 0x82 PushT
	if(var_266_string == 0) goto Label_133; // 0x83 JumpB
	goto Label_138; // 0x84 Jump
	
Label_133:
	var_267_string = "all"; // 0x85 PushS
	var_268_string = "idle"; // 0x86 PushS
	PlayAnimation(var_267_string, var_268_string); // 0x87 Func
	goto Label_128; // 0x89 Jump
}


func_2900(var_127_object)
{
	var_128_object = Obj(); var_129_object = Obj(); // 0xb54 PushV
	self(var_129_object); // 0xb55 Func
	var_127_object = var_129_object; // 0xb57 Mov
	return 2; // 0xb58 Return
}


func_2389()
{
	var_645_float = 0; var_646_float = 0; // 0x955 PushV
	var_647_int = 8; // 0x956 PushI
	var_648_int = 16; // 0x957 PushI
	rand(var_646_float, var_647_int, var_648_int); // 0x958 Func
	var_649_int = 10; // 0x95a PushI
	SetTimer(var_649_int, var_646_float); // 0x95b Func
	return 2; // 0x95d Return
}


func_3162(var_340_bool)
{
	var_342_int = 0; var_343_string = ""; // 0xc5b PushV
	var_343_string = "ook3Eva1"; // 0xc5c MovS
	func_2916(var_342_int, var_343_string); // 0xc5d NEW_2
	var_344_int = 0; // 0xc5f PushI
	var_345_bool = var_342_int == var_344_int; // 0xc60 Eq
	if(var_345_bool == 0) goto Label_3172; // 0xc61 JumpB
	var_340_bool = 1; // 0xc62 MovB
	return 0; // 0xc63 Return
	
Label_3172:
	var_340_bool = 0; // 0xc64 MovB
	return 0; // 0xc65 Return
}


func_2906(var_92_cvector, var_93_cvector)
{
	var_95_float = 0; var_96_float = 0; // 0xb5a PushV
	var_97_int = var_93_cvector | var_93_cvector; // 0xb5b Or
	var_96_float = sqrt(var_97_int); // 0xb5c Sqrt2
	var_98_float = 0.0; // 0xb5d PushF
	var_99_bool = var_96_float < var_98_float; // 0xb5e LT
	if(var_99_bool == 0) goto Label_2914; // 0xb5f JumpB
	var_92_cvector = CVector(0.0, 0.0, 0.0); // 0xb60 MovV
	return 2; // 0xb61 Return
	
Label_2914:
	var_92_cvector = var_93_cvector / var_93_cvector; // 0xb62 Div2
	return 2; // 0xb63 Return
}


func_3419(var_49_object)
{
	var_50_int = 0; var_51_int = 0; // 0xd5b PushV
	var_52_string = "mt_eva"; // 0xd5c PushS
	GetVariable(var_52_string, var_51_int); // 0xd5d Func
	var_53_bool = var_51_int == 0; // 0xd5f Not
	if(var_53_bool == 0) goto Label_3435; // 0xd60 JumpB
	var_54_int = 0; var_55_object = Obj(); // 0xd61 PushV
	var_55_object = var_49_object; // 0xd62 Mov
	TaskCall(0); // 0xd63 TaskCall
	func_0(var_56_object, var_54_int, var_55_object); // 0xd64 NEW_2
	TaskReturn(); // 0xd65 TaskReturn
	var_277_string = "mt_eva"; // 0xd67 PushS
	var_278_int = 1; // 0xd68 PushI
	SetVariable(var_277_string, var_278_int); // 0xd69 Func
	
Label_3435:
	var_279_bool = 0; var_280_int = 0; // 0xd6b PushV
	var_280_int = 3; // 0xd6c MovI
	func_2978(var_279_bool, var_280_int); // 0xd6d NEW_2
	if(var_279_bool == 0) goto Label_3447; // 0xd6f JumpB
	var_282_int = 0; var_283_object = Obj(); // 0xd70 PushV
	var_283_object = var_49_object; // 0xd71 Mov
	TaskCall(2); // 0xd72 TaskCall
	func_226(var_284_object, var_282_int, var_283_object); // 0xd73 NEW_2
	TaskReturn(); // 0xd74 TaskReturn
	return 2; // 0xd76 Return
	
Label_3447:
	var_365_bool = 0; var_366_int = 0; // 0xd77 PushV
	var_366_int = 6; // 0xd78 MovI
	func_2978(var_365_bool, var_366_int); // 0xd79 NEW_2
	if(var_365_bool == 0) goto Label_3459; // 0xd7b JumpB
	var_367_int = 0; var_368_object = Obj(); // 0xd7c PushV
	var_368_object = var_49_object; // 0xd7d Mov
	TaskCall(4); // 0xd7e TaskCall
	func_1065(var_369_object, var_367_int, var_368_object); // 0xd7f NEW_2
	TaskReturn(); // 0xd80 TaskReturn
	return 2; // 0xd82 Return
	
Label_3459:
	var_455_bool = 0; var_456_int = 0; // 0xd83 PushV
	var_456_int = 11; // 0xd84 MovI
	func_2978(var_455_bool, var_456_int); // 0xd85 NEW_2
	if(var_455_bool == 0) goto Label_3471; // 0xd87 JumpB
	var_457_int = 0; var_458_object = Obj(); // 0xd88 PushV
	var_458_object = var_49_object; // 0xd89 Mov
	TaskCall(6); // 0xd8a TaskCall
	func_1548(var_459_object, var_457_int, var_458_object); // 0xd8b NEW_2
	TaskReturn(); // 0xd8c TaskReturn
	return 2; // 0xd8e Return
	
Label_3471:
	var_526_bool = 0; var_527_int = 0; // 0xd8f PushV
	var_527_int = 12; // 0xd90 MovI
	func_2978(var_526_bool, var_527_int); // 0xd91 NEW_2
	if(var_526_bool == 0) goto Label_3483; // 0xd93 JumpB
	var_528_int = 0; var_529_object = Obj(); // 0xd94 PushV
	var_529_object = var_49_object; // 0xd95 Mov
	TaskCall(8); // 0xd96 TaskCall
	func_1867(var_530_object, var_528_int, var_529_object); // 0xd97 NEW_2
	TaskReturn(); // 0xd98 TaskReturn
	return 2; // 0xd9a Return
	
Label_3483:
	var_587_int = 0; var_588_object = Obj(); // 0xd9b PushV
	var_588_object = var_49_object; // 0xd9c Mov
	TaskCall(10); // 0xd9d TaskCall
	func_2126(var_589_object, var_587_int, var_588_object); // 0xd9e NEW_2
	TaskReturn(); // 0xd9f TaskReturn
	return 2; // 0xda1 Return
}


func_1629(var_0_object, var_1_object, var_2_object, var_3_string, var_481_object, var_482_object)
{
	var_0_object = var_482_object; // 0x65e TMov
	var_1_object = var_481_object; // 0x65f TMov
	var_3_string = 0; // 0x660 TMovB
	var_487_int = 1; // 0x661 PushI
	if(var_487_int == 0) goto Label_1671; // 0x662 JumpB
	var_488_string = ""; // 0x663 PushV
	var_488_string = "Neutral"; // 0x664 MovS
	func_1701(var_482_object, var_488_string); // 0x665 NEW_2
	var_496_int = 527184; // 0x667 PushI
	SetMessage(var_496_int); // 0x668 TObjFunc
	ClearReplies(); // 0x66a TObjFunc
	var_497_bool = 0; // 0x66c PushV
	var_497_bool = 0; // 0x66d MovB
	var_498_bool = 0; var_499_object = Obj(); // 0x66e PushV
	var_499_object = var_1_object; // 0x66f MovT
	func_3222(var_499_object); // 0x670 NEW_2
	if(var_498_bool == 0) goto Label_1657; // 0x672 JumpB
	var_504_bool = 0; var_505_object = Obj(); // 0x673 PushV
	var_505_object = var_1_object; // 0x674 MovT
	func_3234(var_505_object); // 0x675 NEW_2
	if(var_504_bool == 0) goto Label_1657; // 0x677 JumpB
	var_497_bool = 1; // 0x678 MovB
	
Label_1657:
	if(var_497_bool == 0) goto Label_1663; // 0x679 JumpB
	var_510_int = 527185; // 0x67a PushI
	var_511_int = 28494; // 0x67b PushI
	var_512_int = 28493; // 0x67c PushI
	AddReply(var_510_int, var_511_int, var_512_int); // 0x67d TObjFunc
	
Label_1663:
	var_513_int = 527188; // 0x67f PushI
	var_514_int = -1; // 0x680 PushI
	var_515_int = 28496; // 0x681 PushI
	AddReply(var_513_int, var_514_int, var_515_int); // 0x682 TObjFunc
	goto Label_1671; // 0x684 Jump
	
Label_1671:
	var_516_bool = 0; // 0x687 PushV
	func_3016(var_516_bool); // 0x688 NEW_2
	if(var_516_bool == 0) goto Label_1686; // 0x68a JumpB
	
Label_1675:
	lshWaitForAnimEnd(); // 0x68b Func
	var_517_string = var_3_string; // 0x68d PushT
	if(var_517_string == 0) goto Label_1680; // 0x68e JumpB
	goto Label_1685; // 0x68f Jump
	
Label_1685:
	goto Label_1700; // 0x695 Jump
	
Label_1700:
	return 0; // 0x6a4 Return
	
Label_1680:
	var_518_string = ""; // 0x690 PushV
	var_518_string = var_2_object; // 0x691 MovT
	func_2847(var_518_string); // 0x692 NEW_2
	goto Label_1675; // 0x694 Jump
	
Label_1686:
	var_519_string = "all"; // 0x696 PushS
	var_520_string = "idle"; // 0x697 PushS
	PlayAnimation(var_519_string, var_520_string); // 0x698 Func
	
Label_1690:
	WaitForAnimEnd(); // 0x69a Func
	var_521_string = var_3_string; // 0x69c PushT
	if(var_521_string == 0) goto Label_1695; // 0x69d JumpB
	goto Label_1700; // 0x69e Jump
	
Label_1695:
	var_522_string = "all"; // 0x69f PushS
	var_523_string = "idle"; // 0x6a0 PushS
	PlayAnimation(var_522_string, var_523_string); // 0x6a1 Func
	goto Label_1690; // 0x6a3 Jump
}


func_2398()
{
	var_644_int = 10; // 0x95e PushI
	KillTimer(var_644_int); // 0x95f Func
	return 0; // 0x961 Return
}


func_2916(var_324_int, var_325_string)
{
	var_326_int = 0; var_327_int = 0; // 0xb64 PushV
	GetVariable(var_325_string, var_327_int); // 0xb65 Func
	var_324_int = var_327_int; // 0xb67 Mov
	return 2; // 0xb68 Return
}


func_3174(var_408_bool)
{
	var_410_int = 0; var_411_string = ""; // 0xc67 PushV
	var_411_string = "k6q01"; // 0xc68 MovS
	func_2916(var_410_int, var_411_string); // 0xc69 NEW_2
	var_412_int = 1; // 0xc6b PushI
	var_413_bool = var_410_int == var_412_int; // 0xc6c Eq
	if(var_413_bool == 0) goto Label_3184; // 0xc6d JumpB
	var_408_bool = 1; // 0xc6e MovB
	return 0; // 0xc6f Return
	
Label_3184:
	var_408_bool = 0; // 0xc70 MovB
	return 0; // 0xc71 Return
}


func_2921(var_259_int, var_260_int)
{
	var_261_object = Obj(); var_262_object = Obj(); // 0xb69 PushV
	CreateIntVector(var_262_object); // 0xb6a Func
	add(var_259_int); // 0xb6c ObjFunc
	add(var_260_int); // 0xb6e ObjFunc
	var_263_int = 3; // 0xb70 PushI
	SendWorldWndMessage(var_263_int, var_262_object); // 0xb71 Func
	return 2; // 0xb73 Return
}


func_3186(var_414_bool)
{
	var_416_int = 0; var_417_string = ""; // 0xc73 PushV
	var_417_string = "ook6Eva1"; // 0xc74 MovS
	func_2916(var_416_int, var_417_string); // 0xc75 NEW_2
	var_418_int = 0; // 0xc77 PushI
	var_419_bool = var_416_int == var_418_int; // 0xc78 Eq
	if(var_419_bool == 0) goto Label_3196; // 0xc79 JumpB
	var_414_bool = 1; // 0xc7a MovB
	return 0; // 0xc7b Return
	
Label_3196:
	var_414_bool = 0; // 0xc7c MovB
	return 0; // 0xc7d Return
}


func_2933(var_246_object, var_247_int)
{
	var_248_int = 0; var_249_int = 0; // 0xb75 PushV
	var_250_object = Obj(); var_251_string = ""; var_252_int = 0; // 0xb76 PushV
	var_250_object = var_246_object; // 0xb77 Mov
	var_251_string = "money"; // 0xb78 MovS
	var_252_int = var_247_int; // 0xb79 Mov
	func_2593(var_251_string, var_252_int); // 0xb7a NEW_2
	var_256_int = 0; // 0xb7c PushI
	var_257_bool = var_247_int > var_256_int; // 0xb7d GT
	if(var_257_bool == 0) goto Label_2951; // 0xb7e JumpB
	var_258_string = "Money"; // 0xb7f PushS
	GetInvItemByName(var_249_int, var_258_string); // 0xb80 Func
	var_259_int = 0; var_260_int = 0; // 0xb82 PushV
	var_259_int = var_249_int; // 0xb83 Mov
	var_260_int = var_247_int; // 0xb84 Mov
	func_2921(var_259_int, var_260_int); // 0xb85 NEW_2
	
Label_2951:
	return 2; // 0xb87 Return
}


func_1146(var_0_object, var_1_object, var_2_object, var_3_string, var_391_object, var_392_object)
{
	var_0_object = var_392_object; // 0x47b TMov
	var_1_object = var_391_object; // 0x47c TMov
	var_3_string = 0; // 0x47d TMovB
	var_397_int = 1; // 0x47e PushI
	if(var_397_int == 0) goto Label_1212; // 0x47f JumpB
	var_398_string = ""; // 0x480 PushV
	var_398_string = "Fear"; // 0x481 MovS
	func_1242(var_392_object, var_398_string); // 0x482 NEW_2
	var_406_int = 526037; // 0x484 PushI
	SetMessage(var_406_int); // 0x485 TObjFunc
	ClearReplies(); // 0x487 TObjFunc
	var_407_bool = 0; // 0x489 PushV
	var_407_bool = 0; // 0x48a MovB
	var_408_bool = 0; var_409_object = Obj(); // 0x48b PushV
	var_409_object = var_1_object; // 0x48c MovT
	func_3174(var_409_object); // 0x48d NEW_2
	if(var_408_bool == 0) goto Label_1174; // 0x48f JumpB
	var_414_bool = 0; var_415_object = Obj(); // 0x490 PushV
	var_415_object = var_1_object; // 0x491 MovT
	func_3186(var_415_object); // 0x492 NEW_2
	if(var_414_bool == 0) goto Label_1174; // 0x494 JumpB
	var_407_bool = 1; // 0x495 MovB
	
Label_1174:
	if(var_407_bool == 0) goto Label_1180; // 0x496 JumpB
	var_420_int = 526038; // 0x497 PushI
	var_421_int = 30287; // 0x498 PushI
	var_422_int = 27323; // 0x499 PushI
	AddReply(var_420_int, var_421_int, var_422_int); // 0x49a TObjFunc
	
Label_1180:
	var_423_bool = 0; // 0x49c PushV
	var_423_bool = 0; // 0x49d MovB
	var_424_bool = 0; var_425_object = Obj(); // 0x49e PushV
	var_425_object = var_1_object; // 0x49f MovT
	func_3198(var_425_object); // 0x4a0 NEW_2
	if(var_424_bool == 0) goto Label_1193; // 0x4a2 JumpB
	var_430_bool = 0; var_431_object = Obj(); // 0x4a3 PushV
	var_431_object = var_1_object; // 0x4a4 MovT
	func_3210(var_431_object); // 0x4a5 NEW_2
	if(var_430_bool == 0) goto Label_1193; // 0x4a7 JumpB
	var_423_bool = 1; // 0x4a8 MovB
	
Label_1193:
	if(var_423_bool == 0) goto Label_1199; // 0x4a9 JumpB
	var_436_int = 526068; // 0x4aa PushI
	var_437_int = 27354; // 0x4ab PushI
	var_438_int = 27353; // 0x4ac PushI
	AddReply(var_436_int, var_437_int, var_438_int); // 0x4ad TObjFunc
	
Label_1199:
	var_439_int = 526043; // 0x4af PushI
	var_440_int = -1; // 0x4b0 PushI
	var_441_int = 27328; // 0x4b1 PushI
	AddReply(var_439_int, var_440_int, var_441_int); // 0x4b2 TObjFunc
	var_442_int = 528864; // 0x4b4 PushI
	var_443_int = -1; // 0x4b5 PushI
	var_444_int = 30286; // 0x4b6 PushI
	AddReply(var_442_int, var_443_int, var_444_int); // 0x4b7 TObjFunc
	goto Label_1212; // 0x4b9 Jump
	
Label_1212:
	var_445_bool = 0; // 0x4bc PushV
	func_3016(var_445_bool); // 0x4bd NEW_2
	if(var_445_bool == 0) goto Label_1227; // 0x4bf JumpB
	
Label_1216:
	lshWaitForAnimEnd(); // 0x4c0 Func
	var_446_string = var_3_string; // 0x4c2 PushT
	if(var_446_string == 0) goto Label_1221; // 0x4c3 JumpB
	goto Label_1226; // 0x4c4 Jump
	
Label_1226:
	goto Label_1241; // 0x4ca Jump
	
Label_1241:
	return 0; // 0x4d9 Return
	
Label_1221:
	var_447_string = ""; // 0x4c5 PushV
	var_447_string = var_2_object; // 0x4c6 MovT
	func_2847(var_447_string); // 0x4c7 NEW_2
	goto Label_1216; // 0x4c9 Jump
	
Label_1227:
	var_448_string = "all"; // 0x4cb PushS
	var_449_string = "idle"; // 0x4cc PushS
	PlayAnimation(var_448_string, var_449_string); // 0x4cd Func
	
Label_1231:
	WaitForAnimEnd(); // 0x4cf Func
	var_450_string = var_3_string; // 0x4d1 PushT
	if(var_450_string == 0) goto Label_1236; // 0x4d2 JumpB
	goto Label_1241; // 0x4d3 Jump
	
Label_1236:
	var_451_string = "all"; // 0x4d4 PushS
	var_452_string = "idle"; // 0x4d5 PushS
	PlayAnimation(var_451_string, var_452_string); // 0x4d6 Func
	goto Label_1231; // 0x4d8 Jump
}


func_3198(var_424_bool)
{
	var_426_int = 0; var_427_string = ""; // 0xc7f PushV
	var_427_string = "k6q01"; // 0xc80 MovS
	func_2916(var_426_int, var_427_string); // 0xc81 NEW_2
	var_428_int = 2; // 0xc83 PushI
	var_429_bool = var_426_int == var_428_int; // 0xc84 Eq
	if(var_429_bool == 0) goto Label_3208; // 0xc85 JumpB
	var_424_bool = 1; // 0xc86 MovB
	return 0; // 0xc87 Return
	
Label_3208:
	var_424_bool = 0; // 0xc88 MovB
	return 0; // 0xc89 Return
}


func_2692()
{
	var_271_bool = 0; var_272_bool = 0; // 0xa84 PushV
	CameraSwitchToNormal(); // 0xa85 Func
	var_273_bool = 0; // 0xa87 PushV
	func_3016(var_273_bool); // 0xa88 NEW_2
	if(var_273_bool == 0) goto Label_2700; // 0xa8a JumpB
	goto Label_2708; // 0xa8b Jump
	
Label_2708:
	return 2; // 0xa94 Return
	
Label_2700:
	var_274_string = "head"; // 0xa8c PushS
	HasAnimationTrack(var_272_bool, var_274_string); // 0xa8d Func
	var_275_bool = var_272_bool; // 0xa8f Push
	if(var_275_bool == 0) goto Label_2708; // 0xa90 JumpB
	var_276_string = "head"; // 0xa91 PushS
	UnlookAsync(var_276_string); // 0xa92 Func
}


func_2952(var_82_bool, var_83_string, var_84_string)
{
	var_85_object = Obj(); var_86_object = Obj(); // 0xb88 PushV
	FindActor(var_86_object, var_83_string); // 0xb89 Func
	var_87_bool = var_86_object == 0; // 0xb8b NullEq
	if(var_87_bool == 0) goto Label_2959; // 0xb8c JumpB
	var_82_bool = 0; // 0xb8d MovB
	return 2; // 0xb8e Return
	
Label_2959:
	Trigger(var_86_object, var_84_string); // 0xb8f Func
	var_82_bool = 1; // 0xb91 MovB
	return 2; // 0xb92 Return
}


func_3210(var_430_bool)
{
	var_432_int = 0; var_433_string = ""; // 0xc8b PushV
	var_433_string = "ook6Eva2"; // 0xc8c MovS
	func_2916(var_432_int, var_433_string); // 0xc8d NEW_2
	var_434_int = 0; // 0xc8f PushI
	var_435_bool = var_432_int == var_434_int; // 0xc90 Eq
	if(var_435_bool == 0) goto Label_3220; // 0xc91 JumpB
	var_430_bool = 1; // 0xc92 MovB
	return 0; // 0xc93 Return
	
Label_3220:
	var_430_bool = 0; // 0xc94 MovB
	return 0; // 0xc95 Return
}


func_139(var_2_object, var_227_string)
{
	var_228_bool = 0; // 0x8c PushV
	func_3016(var_228_bool); // 0x8d NEW_2
	var_229_bool = var_228_bool == 0; // 0x8f Not
	if(var_229_bool == 0) goto Label_146; // 0x90 JumpB
	return 0; // 0x91 Return
	
Label_146:
	var_230_bool = var_227_string == var_2_object; // 0x92 Eq
	if(var_230_bool == 0) goto Label_149; // 0x93 JumpB
	return 0; // 0x94 Return
	
Label_149:
	var_231_string = ""; var_232_bool = 0; // 0x95 PushV
	var_231_string = var_227_string; // 0x96 Mov
	var_233_string = ""; // 0x97 PushS
	var_234_bool = var_227_string == var_233_string; // 0x98 Eq
	if(var_234_bool == 0) goto Label_156; // 0x99 JumpB
	var_232_bool = 0; // 0x9a MovB
	goto Label_157; // 0x9b Jump
	
Label_157:
	func_2863(var_231_string, var_232_bool); // 0x9d NEW_2
	var_2_object = var_227_string; // 0x9f TMov
	return 0; // 0xa0 Return
	
Label_156:
	var_232_bool = 1; // 0x9c MovB
}


func_394(var_2_object, var_313_string)
{
	var_314_bool = 0; // 0x18b PushV
	func_3016(var_314_bool); // 0x18c NEW_2
	var_315_bool = var_314_bool == 0; // 0x18e Not
	if(var_315_bool == 0) goto Label_401; // 0x18f JumpB
	return 0; // 0x190 Return
	
Label_401:
	var_316_bool = var_313_string == var_2_object; // 0x191 Eq
	if(var_316_bool == 0) goto Label_404; // 0x192 JumpB
	return 0; // 0x193 Return
	
Label_404:
	var_317_string = ""; var_318_bool = 0; // 0x194 PushV
	var_317_string = var_313_string; // 0x195 Mov
	var_319_string = ""; // 0x196 PushS
	var_320_bool = var_313_string == var_319_string; // 0x197 Eq
	if(var_320_bool == 0) goto Label_411; // 0x198 JumpB
	var_318_bool = 0; // 0x199 MovB
	goto Label_412; // 0x19a Jump
	
Label_412:
	func_2863(var_317_string, var_318_bool); // 0x19c NEW_2
	var_2_object = var_313_string; // 0x19e TMov
	return 0; // 0x19f Return
	
Label_411:
	var_318_bool = 1; // 0x19b MovB
}


func_2964(var_129_float)
{
	var_130_float = 0; var_131_float = 0; // 0xb94 PushV
	GetGameTime(var_131_float); // 0xb95 Func
	var_129_float = var_131_float; // 0xb97 Mov
	return 2; // 0xb98 Return
}


func_2709(var_125_bool, var_126_object)
{
	var_130_int = 0; var_131_int = 0; var_132_int = 0; var_133_int = 0; // 0xa95 PushV
	var_134_string = "voice_common"; // 0xa96 PushS
	GetVariable(var_134_string, var_132_int); // 0xa97 Func
	var_135_int = var_132_int; // 0xa99 Push
	if(var_135_int == 0) goto Label_2747; // 0xa9a JumpB
	var_136_bool = 0; var_137_object = Obj(); // 0xa9b PushV
	var_137_object = var_126_object; // 0xa9c Mov
	func_2767(var_137_object); // 0xa9d NEW_2
	var_166_bool = var_136_bool == 0; // 0xa9f Not
	if(var_166_bool == 0) goto Label_2729; // 0xaa0 JumpB
	var_167_bool = 0; var_168_object = Obj(); // 0xaa1 PushV
	var_168_object = var_126_object; // 0xaa2 Mov
	func_2804(var_168_object); // 0xaa3 NEW_2
	var_202_bool = var_167_bool == 0; // 0xaa5 Not
	if(var_202_bool == 0) goto Label_2729; // 0xaa6 JumpB
	var_125_bool = 0; // 0xaa7 MovB
	return 4; // 0xaa8 Return
	
Label_2729:
	var_203_int = 2; // 0xaa9 PushI
	irand(var_133_int, var_203_int); // 0xaaa Func
	var_204_int = var_133_int; // 0xaac Push
	if(var_204_int == 0) goto Label_2742; // 0xaad JumpB
	var_205_string = "voice_common"; // 0xaae PushS
	var_206_int = 1; // 0xaaf PushI
	var_207_int = var_132_int + var_206_int; // 0xab0 Add
	var_208_int = 3; // 0xab1 PushI
	var_209_int = var_207_int / var_208_int; // 0xab2 Mod
	SetVariable(var_205_string, var_209_int); // 0xab3 Func
	goto Label_2746; // 0xab5 Jump
	
Label_2746:
	goto Label_2765; // 0xaba Jump
	
Label_2765:
	var_125_bool = 1; // 0xacd MovB
	return 4; // 0xace Return
	
Label_2742:
	var_210_string = "voice_common"; // 0xab6 PushS
	var_211_int = 0; // 0xab7 PushI
	SetVariable(var_210_string, var_211_int); // 0xab8 Func
	
Label_2747:
	var_212_bool = 0; var_213_object = Obj(); // 0xabb PushV
	var_213_object = var_126_object; // 0xabc Mov
	func_2804(var_213_object); // 0xabd NEW_2
	var_214_bool = var_212_bool == 0; // 0xabf Not
	if(var_214_bool == 0) goto Label_2761; // 0xac0 JumpB
	var_215_bool = 0; var_216_object = Obj(); // 0xac1 PushV
	var_216_object = var_126_object; // 0xac2 Mov
	func_2767(var_216_object); // 0xac3 NEW_2
	var_217_bool = var_215_bool == 0; // 0xac5 Not
	if(var_217_bool == 0) goto Label_2761; // 0xac6 JumpB
	var_125_bool = 0; // 0xac7 MovB
	return 4; // 0xac8 Return
	
Label_2761:
	var_218_string = "voice_common"; // 0xac9 PushS
	var_219_int = 1; // 0xaca PushI
	SetVariable(var_218_string, var_219_int); // 0xacb Func
}


func_3222(var_498_bool)
{
	var_500_int = 0; var_501_string = ""; // 0xc97 PushV
	var_501_string = "k11q01"; // 0xc98 MovS
	func_2916(var_500_int, var_501_string); // 0xc99 NEW_2
	var_502_int = 1; // 0xc9b PushI
	var_503_bool = var_500_int == var_502_int; // 0xc9c Eq
	if(var_503_bool == 0) goto Label_3232; // 0xc9d JumpB
	var_498_bool = 1; // 0xc9e MovB
	return 0; // 0xc9f Return
	
Label_3232:
	var_498_bool = 0; // 0xca0 MovB
	return 0; // 0xca1 Return
}


func_2969(var_180_int)
{
	var_181_float = 0; var_182_float = 0; // 0xb99 PushV
	GetGameTime(var_182_float); // 0xb9a Func
	var_183_int = 1; // 0xb9c PushI
	var_184_int = 0; // 0xb9d PushV
	var_185_int = 24; // 0xb9e PushI
	var_184_int = var_182_float / var_182_float; // 0xb9f Div2
	var_180_int = var_183_int + var_184_int; // 0xba0 Add2
	return 2; // 0xba1 Return
}


func_1948(var_0_object, var_1_object, var_2_object, var_3_string, var_552_object, var_553_object)
{
	var_0_object = var_553_object; // 0x79d TMov
	var_1_object = var_552_object; // 0x79e TMov
	var_3_string = 0; // 0x79f TMovB
	var_558_int = 1; // 0x7a0 PushI
	if(var_558_int == 0) goto Label_1981; // 0x7a1 JumpB
	var_559_string = ""; // 0x7a2 PushV
	var_559_string = "Neutral"; // 0x7a3 MovS
	func_2011(var_553_object, var_559_string); // 0x7a4 NEW_2
	var_567_int = 535231; // 0x7a6 PushI
	SetMessage(var_567_int); // 0x7a7 TObjFunc
	ClearReplies(); // 0x7a9 TObjFunc
	var_568_int = 535232; // 0x7ab PushI
	var_569_int = 36953; // 0x7ac PushI
	var_570_int = 36907; // 0x7ad PushI
	AddReply(var_568_int, var_569_int, var_570_int); // 0x7ae TObjFunc
	var_571_int = 535233; // 0x7b0 PushI
	var_572_int = -1; // 0x7b1 PushI
	var_573_int = 36908; // 0x7b2 PushI
	AddReply(var_571_int, var_572_int, var_573_int); // 0x7b3 TObjFunc
	var_574_int = 535280; // 0x7b5 PushI
	var_575_int = -1; // 0x7b6 PushI
	var_576_int = 36956; // 0x7b7 PushI
	AddReply(var_574_int, var_575_int, var_576_int); // 0x7b8 TObjFunc
	goto Label_1981; // 0x7ba Jump
	
Label_1981:
	var_577_bool = 0; // 0x7bd PushV
	func_3016(var_577_bool); // 0x7be NEW_2
	if(var_577_bool == 0) goto Label_1996; // 0x7c0 JumpB
	
Label_1985:
	lshWaitForAnimEnd(); // 0x7c1 Func
	var_578_string = var_3_string; // 0x7c3 PushT
	if(var_578_string == 0) goto Label_1990; // 0x7c4 JumpB
	goto Label_1995; // 0x7c5 Jump
	
Label_1995:
	goto Label_2010; // 0x7cb Jump
	
Label_2010:
	return 0; // 0x7da Return
	
Label_1990:
	var_579_string = ""; // 0x7c6 PushV
	var_579_string = var_2_object; // 0x7c7 MovT
	func_2847(var_579_string); // 0x7c8 NEW_2
	goto Label_1985; // 0x7ca Jump
	
Label_1996:
	var_580_string = "all"; // 0x7cc PushS
	var_581_string = "idle"; // 0x7cd PushS
	PlayAnimation(var_580_string, var_581_string); // 0x7ce Func
	
Label_2000:
	WaitForAnimEnd(); // 0x7d0 Func
	var_582_string = var_3_string; // 0x7d2 PushT
	if(var_582_string == 0) goto Label_2005; // 0x7d3 JumpB
	goto Label_2010; // 0x7d4 Jump
	
Label_2005:
	var_583_string = "all"; // 0x7d5 PushS
	var_584_string = "idle"; // 0x7d6 PushS
	PlayAnimation(var_583_string, var_584_string); // 0x7d7 Func
	goto Label_2000; // 0x7d9 Jump
}


func_2207(var_0_object, var_1_object, var_2_object, var_3_string, var_611_object, var_612_object)
{
	var_0_object = var_612_object; // 0x8a0 TMov
	var_1_object = var_611_object; // 0x8a1 TMov
	var_3_string = 0; // 0x8a2 TMovB
	var_617_int = 1; // 0x8a3 PushI
	if(var_617_int == 0) goto Label_2235; // 0x8a4 JumpB
	var_618_string = ""; // 0x8a5 PushV
	var_618_string = "Neutral"; // 0x8a6 MovS
	func_2265(var_612_object, var_618_string); // 0x8a7 NEW_2
	var_626_int = 540539; // 0x8a9 PushI
	SetMessage(var_626_int); // 0x8aa TObjFunc
	ClearReplies(); // 0x8ac TObjFunc
	var_627_int = 540540; // 0x8ae PushI
	var_628_int = -1; // 0x8af PushI
	var_629_int = 42549; // 0x8b0 PushI
	AddReply(var_627_int, var_628_int, var_629_int); // 0x8b1 TObjFunc
	var_630_int = 540799; // 0x8b3 PushI
	var_631_int = -1; // 0x8b4 PushI
	var_632_int = 42848; // 0x8b5 PushI
	AddReply(var_630_int, var_631_int, var_632_int); // 0x8b6 TObjFunc
	goto Label_2235; // 0x8b8 Jump
	
Label_2235:
	var_633_bool = 0; // 0x8bb PushV
	func_3016(var_633_bool); // 0x8bc NEW_2
	if(var_633_bool == 0) goto Label_2250; // 0x8be JumpB
	
Label_2239:
	lshWaitForAnimEnd(); // 0x8bf Func
	var_634_string = var_3_string; // 0x8c1 PushT
	if(var_634_string == 0) goto Label_2244; // 0x8c2 JumpB
	goto Label_2249; // 0x8c3 Jump
	
Label_2249:
	goto Label_2264; // 0x8c9 Jump
	
Label_2264:
	return 0; // 0x8d8 Return
	
Label_2244:
	var_635_string = ""; // 0x8c4 PushV
	var_635_string = var_2_object; // 0x8c5 MovT
	func_2847(var_635_string); // 0x8c6 NEW_2
	goto Label_2239; // 0x8c8 Jump
	
Label_2250:
	var_636_string = "all"; // 0x8ca PushS
	var_637_string = "idle"; // 0x8cb PushS
	PlayAnimation(var_636_string, var_637_string); // 0x8cc Func
	
Label_2254:
	WaitForAnimEnd(); // 0x8ce Func
	var_638_string = var_3_string; // 0x8d0 PushT
	if(var_638_string == 0) goto Label_2259; // 0x8d1 JumpB
	goto Label_2264; // 0x8d2 Jump
	
Label_2259:
	var_639_string = "all"; // 0x8d3 PushS
	var_640_string = "idle"; // 0x8d4 PushS
	PlayAnimation(var_639_string, var_640_string); // 0x8d5 Func
	goto Label_2254; // 0x8d7 Jump
}


func_3234(var_504_bool)
{
	var_506_int = 0; var_507_string = ""; // 0xca3 PushV
	var_507_string = "ook11Eva1"; // 0xca4 MovS
	func_2916(var_506_int, var_507_string); // 0xca5 NEW_2
	var_508_int = 0; // 0xca7 PushI
	var_509_bool = var_506_int == var_508_int; // 0xca8 Eq
	if(var_509_bool == 0) goto Label_3244; // 0xca9 JumpB
	var_504_bool = 1; // 0xcaa MovB
	return 0; // 0xcab Return
	
Label_3244:
	var_504_bool = 0; // 0xcac MovB
	return 0; // 0xcad Return
}


func_2978(var_279_bool, var_280_int)
{
	var_281_int = 0; // 0xba3 PushV
	func_2969(var_281_int); // 0xba4 NEW_2
	var_279_bool = var_281_int == var_280_int; // 0xba6 Eq2
	return 0; // 0xba7 Return
}


func_1701(var_2_object, var_488_string)
{
	var_489_bool = 0; // 0x6a6 PushV
	func_3016(var_489_bool); // 0x6a7 NEW_2
	var_490_bool = var_489_bool == 0; // 0x6a9 Not
	if(var_490_bool == 0) goto Label_1708; // 0x6aa JumpB
	return 0; // 0x6ab Return
	
Label_1708:
	var_491_bool = var_488_string == var_2_object; // 0x6ac Eq
	if(var_491_bool == 0) goto Label_1711; // 0x6ad JumpB
	return 0; // 0x6ae Return
	
Label_1711:
	var_492_string = ""; var_493_bool = 0; // 0x6af PushV
	var_492_string = var_488_string; // 0x6b0 Mov
	var_494_string = ""; // 0x6b1 PushS
	var_495_bool = var_488_string == var_494_string; // 0x6b2 Eq
	if(var_495_bool == 0) goto Label_1718; // 0x6b3 JumpB
	var_493_bool = 0; // 0x6b4 MovB
	goto Label_1719; // 0x6b5 Jump
	
Label_1719:
	func_2863(var_492_string, var_493_bool); // 0x6b7 NEW_2
	var_2_object = var_488_string; // 0x6b9 TMov
	return 0; // 0x6ba Return
	
Label_1718:
	var_493_bool = 1; // 0x6b6 MovB
}


func_2984(var_55_string, var_56_int)
{
	var_57_string = ""; var_58_string = ""; // 0xba8 PushV
	var_58_string = "idle"; // 0xba9 MovS
	var_59_int = var_56_int; // 0xbaa Push
	if(var_59_int == 0) goto Label_2989; // 0xbab JumpB
	var_58_string = var_58_string + var_56_int; // 0xbac Add2
	
Label_2989:
	var_55_string = var_58_string; // 0xbad Mov
	return 2; // 0xbae Return
}


func_3246()
{
	var_45_object = Obj(); var_46_object = Obj(); // 0xcae PushV
	var_47_int = 482; // 0xcaf PushI
	var_48_int = 1; // 0xcb0 PushI
	var_49_int = 528049; // 0xcb1 PushI
	CreateDiaryEntry(var_46_object, var_47_int, var_48_int, var_49_int); // 0xcb2 Func
	var_50_bool = 0; var_51_object = Obj(); var_52_int = 0; // 0xcb4 PushV
	var_51_object = var_46_object; // 0xcb5 Mov
	var_52_int = 480; // 0xcb6 MovI
	func_3324(var_50_bool, var_51_object, var_52_int); // 0xcb7 NEW_2
	return 2; // 0xcb9 Return
}


func_2991(var_49_int)
{
	var_50_int = 0; var_51_bool = 0; var_52_int = 0; var_53_bool = 0; // 0xbaf PushV
	var_52_int = 0; // 0xbb0 MovI
	
Label_2993:
	var_54_string = "all"; // 0xbb1 PushS
	var_55_string = ""; var_56_int = 0; // 0xbb2 PushV
	var_56_int = var_52_int; // 0xbb3 Mov
	func_2984(var_55_string, var_56_int); // 0xbb4 NEW_2
	HasAnimation(var_53_bool, var_54_string, var_55_string); // 0xbb6 Func
	var_60_bool = var_53_bool == 0; // 0xbb8 Not
	if(var_60_bool == 0) goto Label_3003; // 0xbb9 JumpB
	goto Label_3006; // 0xbba Jump
	
Label_3006:
	var_49_int = var_52_int; // 0xbbe Mov
	return 4; // 0xbbf Return
	
Label_3003:
	var_61_int = 1; // 0xbbb PushI
	var_52_int = var_52_int + var_61_int; // 0xbbc Add2
	goto Label_2993; // 0xbbd Jump
}


func_3259()
{
	var_82_object = Obj(); var_83_object = Obj(); // 0xcbb PushV
	var_84_int = 787; // 0xcbc PushI
	var_85_int = 2; // 0xcbd PushI
	var_86_int = 542506; // 0xcbe PushI
	CreateDiaryEntry(var_83_object, var_84_int, var_85_int, var_86_int); // 0xcbf Func
	var_87_bool = 0; var_88_object = Obj(); var_89_int = 0; // 0xcc1 PushV
	var_88_object = var_83_object; // 0xcc2 Mov
	var_89_int = 344; // 0xcc3 MovI
	func_3324(var_87_bool, var_88_object, var_89_int); // 0xcc4 NEW_2
	return 2; // 0xcc6 Return
}


func_3008(var_113_int)
{
	var_113_int = 515533; // 0xbc0 MovI
	return 0; // 0xbc1 Return
}


func_3010(var_112_int)
{
	var_112_int = 502858; // 0xbc2 MovI
	return 0; // 0xbc3 Return
}


func_3012(var_114_string)
{
	var_114_string = "ui/NPC_Eva.png"; // 0xbc4 MovS
	return 0; // 0xbc5 Return
}


func_3014(var_115_string)
{
	var_115_string = "ui/NPC_Eva_b.png"; // 0xbc6 MovS
	return 0; // 0xbc7 Return
}


func_3272()
{
	var_41_object = Obj(); var_42_object = Obj(); // 0xcc8 PushV
	var_43_int = 347; // 0xcc9 PushI
	var_44_int = 2; // 0xcca PushI
	var_45_int = 525569; // 0xccb PushI
	CreateDiaryEntry(var_42_object, var_43_int, var_44_int, var_45_int); // 0xccc Func
	var_46_bool = 0; var_47_object = Obj(); var_48_int = 0; // 0xcce PushV
	var_47_object = var_42_object; // 0xccf Mov
	var_48_int = 344; // 0xcd0 MovI
	func_3324(var_46_bool, var_47_object, var_48_int); // 0xcd1 NEW_2
	return 2; // 0xcd3 Return
}


func_3016(var_107_bool)
{
	var_107_bool = 1; // 0xbc8 MovB
	return 0; // 0xbc9 Return
}


func_3018()
{
	var_116_object = Obj(); var_117_object = Obj(); // 0xbca PushV
	var_118_object = Obj(); // 0xbcb PushV
	func_3352(var_118_object); // 0xbcc NEW_2
	var_117_object = var_118_object; // 0xbcd Mov
	var_125_string = "k3q03EvaGotoSklad"; // 0xbcf PushS
	var_126_string = "pt_region01_center01"; // 0xbd0 PushS
	var_127_int = 0; // 0xbd1 PushI
	var_128_int = 525574; // 0xbd2 PushI
	var_129_float = 0; // 0xbd3 PushV
	func_2964(var_129_float); // 0xbd4 NEW_2
	AddMark(var_125_string, var_126_string, var_127_int, var_128_int, var_129_float); // 0xbd6 ObjFunc
	return 2; // 0xbd8 Return
}


func_2509()
{
	var_35_int = 0; var_36_int = 0; var_37_bool = 0; var_38_int = 0; var_39_int = 0; var_40_bool = 0; var_41_int = 0; var_42_int = 0; var_43_bool = 0; var_44_int = 0; var_45_int = 0; var_46_bool = 0; // 0x9cd PushV
	WaitForAnimEnd(); // 0x9ce Func
	var_47_bool = 0; // 0x9d0 PushV
	func_2619(var_47_bool); // 0x9d1 NEW_2
	var_48_bool = var_47_bool == 0; // 0x9d3 Not
	if(var_48_bool == 0) goto Label_2518; // 0x9d4 JumpB
	return 12; // 0x9d5 Return
	
Label_2518:
	var_49_int = 0; // 0x9d6 PushV
	func_2991(var_49_int); // 0x9d7 NEW_2
	var_41_int = var_49_int; // 0x9d8 Mov
	var_42_int = 0; // 0x9da MovI
	
Label_2523:
	var_62_bool = 0; // 0x9db PushV
	var_62_bool = 0; // 0x9dc MovB
	var_63_int = 5; // 0x9dd PushI
	var_64_bool = var_42_int < var_63_int; // 0x9de LT
	if(var_64_bool == 0) goto Label_2533; // 0x9df JumpB
	var_65_bool = 0; // 0x9e0 PushV
	func_2619(var_65_bool); // 0x9e1 NEW_2
	if(var_65_bool == 0) goto Label_2533; // 0x9e3 JumpB
	var_62_bool = 1; // 0x9e4 MovB
	
Label_2533:
	if(var_62_bool == 0) goto Label_2575; // 0x9e5 JumpB
	var_66_bool = var_41_int == 0; // 0x9e6 Not
	if(var_66_bool == 0) goto Label_2543; // 0x9e7 JumpB
	var_67_int = 3; // 0x9e8 PushI
	Sleep(var_67_int, var_43_bool); // 0x9e9 Func
	var_68_bool = var_43_bool == 0; // 0x9eb Not
	if(var_68_bool == 0) goto Label_2542; // 0x9ec JumpB
	goto Label_2575; // 0x9ed Jump
	
Label_2575:
	ResetAAS(); // 0xa0f Func
	return 12; // 0xa11 Return
	
Label_2542:
	goto Label_2564; // 0x9ee Jump
	
Label_2564:
	var_69_bool = 0; // 0xa04 PushV
	func_2578(var_69_bool); // 0xa05 NEW_2
	var_70_bool = var_69_bool == 0; // 0xa07 Not
	if(var_70_bool == 0) goto Label_2570; // 0xa08 JumpB
	goto Label_2575; // 0xa09 Jump
	
Label_2570:
	ResetAAS(); // 0xa0a Func
	var_71_int = 1; // 0xa0c PushI
	var_42_int = var_42_int + var_71_int; // 0xa0d Add2
	goto Label_2523; // 0xa0e Jump
	
Label_2543:
	irand(var_44_int, var_41_int); // 0x9ef Func
	var_72_int = 5; // 0x9f1 PushI
	irand(var_45_int, var_72_int); // 0x9f2 Func
	var_73_int = 0; // 0x9f4 PushI
	var_74_bool = var_45_int != var_73_int; // 0x9f5 Neq
	if(var_74_bool == 0) goto Label_2552; // 0x9f6 JumpB
	var_44_int = 0; // 0x9f7 MovI
	
Label_2552:
	var_75_string = "all"; // 0x9f8 PushS
	var_76_string = ""; var_77_int = 0; // 0x9f9 PushV
	var_77_int = var_44_int; // 0x9fa Mov
	func_2984(var_76_string, var_77_int); // 0x9fb NEW_2
	PlayAnimation(var_75_string, var_76_string); // 0x9fd Func
	WaitForAnimEnd(var_46_bool); // 0x9ff Func
	var_78_bool = var_46_bool == 0; // 0xa01 Not
	if(var_78_bool == 0) goto Label_2564; // 0xa02 JumpB
	goto Label_2575; // 0xa03 Jump
}


func_2767(var_136_bool)
{
	var_138_string = ""; var_139_int = 0; var_140_bool = 0; var_141_int = 0; var_142_string = ""; var_143_string = ""; var_144_int = 0; var_145_bool = 0; var_146_int = 0; var_147_string = ""; // 0xacf PushV
	var_143_string = "c"; // 0xad0 MovS
	var_144_int = 0; // 0xad1 MovI
	
Label_2770:
	var_148_int = 1; // 0xad2 PushI
	if(var_148_int == 0) goto Label_2783; // 0xad3 JumpB
	var_149_int = 1; // 0xad4 PushI
	var_150_int = var_144_int + var_149_int; // 0xad5 Add
	var_151_int = var_143_string + var_150_int; // 0xad6 Add
	HasProperty(var_151_int, var_145_bool); // 0xad7 ObjFunc
	var_152_bool = var_145_bool == 0; // 0xad9 Not
	if(var_152_bool == 0) goto Label_2780; // 0xada JumpB
	goto Label_2783; // 0xadb Jump
	
Label_2783:
	var_153_bool = var_144_int == 0; // 0xadf Not
	if(var_153_bool == 0) goto Label_2787; // 0xae0 JumpB
	var_136_bool = 0; // 0xae1 MovB
	return 10; // 0xae2 Return
	
Label_2787:
	var_146_int = 0; // 0xae3 MovI
	var_154_int = 1; // 0xae4 PushI
	var_155_bool = var_144_int > var_154_int; // 0xae5 GT
	if(var_155_bool == 0) goto Label_2793; // 0xae6 JumpB
	irand(var_146_int, var_144_int); // 0xae7 Func
	
Label_2793:
	var_156_int = 1; // 0xae9 PushI
	var_157_int = var_146_int + var_156_int; // 0xaea Add
	var_158_int = var_143_string + var_157_int; // 0xaeb Add
	GetProperty(var_158_int, var_147_string); // 0xaec ObjFunc
	var_159_bool = 0; var_160_string = ""; // 0xaee PushV
	var_160_string = var_147_string; // 0xaef Mov
	func_2878(var_159_bool, var_160_string); // 0xaf0 NEW_2
	var_136_bool = var_159_bool; // 0xaf1 Mov
	return 10; // 0xaf3 Return
	
Label_2780:
	var_165_int = 1; // 0xadc PushI
	var_144_int = var_144_int + var_165_int; // 0xadd Add2
	goto Label_2770; // 0xade Jump
}


func_3285()
{
	var_100_object = Obj(); var_101_object = Obj(); // 0xcd5 PushV
	var_102_int = 352; // 0xcd6 PushI
	var_103_int = 2; // 0xcd7 PushI
	var_104_int = 525618; // 0xcd8 PushI
	CreateDiaryEntry(var_101_object, var_102_int, var_103_int, var_104_int); // 0xcd9 Func
	var_105_bool = 0; var_106_object = Obj(); var_107_int = 0; // 0xcdb PushV
	var_106_object = var_101_object; // 0xcdc Mov
	var_107_int = 350; // 0xcdd MovI
	func_3324(var_105_bool, var_106_object, var_107_int); // 0xcde NEW_2
	return 2; // 0xce0 Return
}


func_2265(var_2_object, var_618_string)
{
	var_619_bool = 0; // 0x8da PushV
	func_3016(var_619_bool); // 0x8db NEW_2
	var_620_bool = var_619_bool == 0; // 0x8dd Not
	if(var_620_bool == 0) goto Label_2272; // 0x8de JumpB
	return 0; // 0x8df Return
	
Label_2272:
	var_621_bool = var_618_string == var_2_object; // 0x8e0 Eq
	if(var_621_bool == 0) goto Label_2275; // 0x8e1 JumpB
	return 0; // 0x8e2 Return
	
Label_2275:
	var_622_string = ""; var_623_bool = 0; // 0x8e3 PushV
	var_622_string = var_618_string; // 0x8e4 Mov
	var_624_string = ""; // 0x8e5 PushS
	var_625_bool = var_618_string == var_624_string; // 0x8e6 Eq
	if(var_625_bool == 0) goto Label_2282; // 0x8e7 JumpB
	var_623_bool = 0; // 0x8e8 MovB
	goto Label_2283; // 0x8e9 Jump
	
Label_2283:
	func_2863(var_622_string, var_623_bool); // 0x8eb NEW_2
	var_2_object = var_618_string; // 0x8ed TMov
	return 0; // 0x8ee Return
	
Label_2282:
	var_623_bool = 1; // 0x8ea MovB
}


func_1242(var_2_object, var_398_string)
{
	var_399_bool = 0; // 0x4db PushV
	func_3016(var_399_bool); // 0x4dc NEW_2
	var_400_bool = var_399_bool == 0; // 0x4de Not
	if(var_400_bool == 0) goto Label_1249; // 0x4df JumpB
	return 0; // 0x4e0 Return
	
Label_1249:
	var_401_bool = var_398_string == var_2_object; // 0x4e1 Eq
	if(var_401_bool == 0) goto Label_1252; // 0x4e2 JumpB
	return 0; // 0x4e3 Return
	
Label_1252:
	var_402_string = ""; var_403_bool = 0; // 0x4e4 PushV
	var_402_string = var_398_string; // 0x4e5 Mov
	var_404_string = ""; // 0x4e6 PushS
	var_405_bool = var_398_string == var_404_string; // 0x4e7 Eq
	if(var_405_bool == 0) goto Label_1259; // 0x4e8 JumpB
	var_403_bool = 0; // 0x4e9 MovB
	goto Label_1260; // 0x4ea Jump
	
Label_1260:
	func_2863(var_402_string, var_403_bool); // 0x4ec NEW_2
	var_2_object = var_398_string; // 0x4ee TMov
	return 0; // 0x4ef Return
	
Label_1259:
	var_403_bool = 1; // 0x4eb MovB
}


func_3034()
{
	var_39_string = "k3q02"; // 0xbdb PushS
	var_40_int = 3; // 0xbdc PushI
	SetVariable(var_39_string, var_40_int); // 0xbdd Func
	func_3272(); // 0xbe0 NEW_2
	return 0; // 0xbe2 Return
}


func_2011(var_2_object, var_559_string)
{
	var_560_bool = 0; // 0x7dc PushV
	func_3016(var_560_bool); // 0x7dd NEW_2
	var_561_bool = var_560_bool == 0; // 0x7df Not
	if(var_561_bool == 0) goto Label_2018; // 0x7e0 JumpB
	return 0; // 0x7e1 Return
	
Label_2018:
	var_562_bool = var_559_string == var_2_object; // 0x7e2 Eq
	if(var_562_bool == 0) goto Label_2021; // 0x7e3 JumpB
	return 0; // 0x7e4 Return
	
Label_2021:
	var_563_string = ""; var_564_bool = 0; // 0x7e5 PushV
	var_563_string = var_559_string; // 0x7e6 Mov
	var_565_string = ""; // 0x7e7 PushS
	var_566_bool = var_559_string == var_565_string; // 0x7e8 Eq
	if(var_566_bool == 0) goto Label_2028; // 0x7e9 JumpB
	var_564_bool = 0; // 0x7ea MovB
	goto Label_2029; // 0x7eb Jump
	
Label_2029:
	func_2863(var_563_string, var_564_bool); // 0x7ed NEW_2
	var_2_object = var_559_string; // 0x7ef TMov
	return 0; // 0x7f0 Return
	
Label_2028:
	var_564_bool = 1; // 0x7ec MovB
}


func_3298()
{
	var_45_object = Obj(); var_46_object = Obj(); // 0xce2 PushV
	var_47_int = 410; // 0xce3 PushI
	var_48_int = 1; // 0xce4 PushI
	var_49_int = 526111; // 0xce5 PushI
	CreateDiaryEntry(var_46_object, var_47_int, var_48_int, var_49_int); // 0xce6 Func
	var_50_bool = 0; var_51_object = Obj(); var_52_int = 0; // 0xce8 PushV
	var_51_object = var_46_object; // 0xce9 Mov
	var_52_int = 408; // 0xcea MovI
	func_3324(var_50_bool, var_51_object, var_52_int); // 0xceb NEW_2
	return 2; // 0xced Return
}


func_226(var_0_object, var_282_int, var_283_object)
{
	var_285_object = Obj(); var_286_bool = 0; var_287_int = 0; var_288_bool = 0; var_289_object = Obj(); var_290_bool = 0; var_291_int = 0; var_292_bool = 0; // 0xe2 PushV
	var_0_object = var_283_object; // 0xe3 TMov
	var_293_bool = 0; var_294_object = Obj(); var_295_float = 0; // 0xe4 PushV
	var_294_object = var_283_object; // 0xe5 Mov
	var_295_float = 70.0; // 0xe6 MovF
	func_2624(var_294_object, var_295_float); // 0xe7 NEW_2
	var_296_bool = var_293_bool == 0; // 0xe9 Not
	if(var_296_bool == 0) goto Label_237; // 0xea JumpB
	var_282_int = -2; // 0xeb MovI
	return 8; // 0xec Return
	
Label_237:
	CreateDialog(var_289_object); // 0xed Func
	var_297_int = 0; // 0xef PushV
	func_3010(var_297_int); // 0xf0 NEW_2
	SetNPCName(var_297_int); // 0xf2 ObjFunc
	var_298_int = 0; // 0xf4 PushV
	func_3008(var_298_int); // 0xf5 NEW_2
	SetNPCDescription(var_298_int); // 0xf7 ObjFunc
	var_299_string = ""; // 0xf9 PushV
	func_3012(var_299_string); // 0xfa NEW_2
	SetPhoto(var_299_string); // 0xfc ObjFunc
	var_300_string = ""; // 0xfe PushV
	func_3014(var_300_string); // 0xff NEW_2
	SetPhoto2(var_300_string); // 0x101 ObjFunc
	var_301_int = 0; // 0x103 PushV
	func_3402(var_301_int); // 0x104 NEW_2
	SetPlayerName(var_301_int); // 0x106 ObjFunc
	var_291_int = -1; // 0x108 MovI
	IsOverrideActive(var_290_bool); // 0x109 Func
	var_302_bool = var_290_bool; // 0x10b Push
	if(var_302_bool == 0) goto Label_271; // 0x10c JumpB
	var_282_int = -2; // 0x10d MovI
	return 8; // 0x10e Return
	
Label_271:
	DoDialog(var_289_object); // 0x10f Func
	var_303_bool = 0; var_304_object = Obj(); // 0x111 PushV
	var_305_object = Obj(); // 0x112 PushV
	func_2900(var_305_object); // 0x113 NEW_2
	var_304_object = var_305_object; // 0x114 Mov
	func_2709(var_303_bool, var_304_object); // 0x116 NEW_2
	var_306_object = Obj(); var_307_object = Obj(); // 0x118 PushV
	var_306_object = var_283_object; // 0x119 Mov
	var_307_object = var_289_object; // 0x11a Mov
	TaskCall(3); // 0x11b TaskCall
	func_307(var_308_object, var_309_object, var_310_string, var_311_bool, var_306_object, var_307_object); // 0x11c NEW_2
	TaskReturn(); // 0x11d TaskReturn
	IsDialogEnd(var_292_bool); // 0x11f ObjFunc
	
Label_289:
	var_363_bool = var_292_bool == 0; // 0x121 Not
	if(var_363_bool == 0) goto Label_296; // 0x122 JumpB
	sync(); // 0x123 Func
	IsDialogEnd(var_292_bool); // 0x125 ObjFunc
	goto Label_289; // 0x127 Jump
	
Label_296:
	var_364_object = Obj(); // 0x128 PushV
	var_364_object = var_283_object; // 0x129 Mov
	func_2692(); // 0x12a NEW_2
	StopDialog(var_289_object); // 0x12c Func
	GetReturnValue(var_291_int); // 0x12e ObjFunc
	var_282_int = var_291_int; // 0x130 Mov
	return 8; // 0x131 Return
}


func_3043()
{
	var_94_string = "ook3Eva1"; // 0xbe4 PushS
	var_95_int = 1; // 0xbe5 PushI
	SetVariable(var_94_string, var_95_int); // 0xbe6 Func
	return 0; // 0xbe8 Return
}


func_3049()
{
	func_3285(); // 0xbeb NEW_2
	return 0; // 0xbed Return
}


func_3054()
{
	var_39_string = "ook6Eva1"; // 0xbef PushS
	var_40_int = 1; // 0xbf0 PushI
	SetVariable(var_39_string, var_40_int); // 0xbf1 Func
	return 0; // 0xbf3 Return
}


func_3311(var_59_object)
{
	var_60_object = Obj(); var_61_object = Obj(); // 0xcef PushV
	GetDiaryRoot(var_61_object); // 0xcf0 Func
	var_62_bool = var_61_object == 0; // 0xcf2 Not
	if(var_62_bool == 0) goto Label_3321; // 0xcf3 JumpB
	var_63_string = "Can't retrieve diary root"; // 0xcf4 PushS
	Trace(var_63_string); // 0xcf5 Func
	var_59_object = 0; // 0xcf7 MovB
	return 2; // 0xcf8 Return
	
Label_3321:
	var_59_object = var_61_object; // 0xcf9 Mov
	return 2; // 0xcfa Return
}


func_2804(var_167_bool)
{
	var_169_string = ""; var_170_int = 0; var_171_bool = 0; var_172_int = 0; var_173_string = ""; var_174_string = ""; var_175_int = 0; var_176_bool = 0; var_177_int = 0; var_178_string = ""; // 0xaf4 PushV
	var_179_string = "d"; // 0xaf5 PushS
	var_180_int = 0; // 0xaf6 PushV
	func_2969(var_180_int); // 0xaf7 NEW_2
	var_186_int = var_179_string + var_180_int; // 0xaf9 Add
	var_187_string = "m"; // 0xafa PushS
	var_174_string = var_186_int + var_187_string; // 0xafb Add2
	var_175_int = 0; // 0xafc MovI
	
Label_2813:
	var_188_int = 1; // 0xafd PushI
	if(var_188_int == 0) goto Label_2826; // 0xafe JumpB
	var_189_int = 1; // 0xaff PushI
	var_190_int = var_175_int + var_189_int; // 0xb00 Add
	var_191_int = var_174_string + var_190_int; // 0xb01 Add
	HasProperty(var_191_int, var_176_bool); // 0xb02 ObjFunc
	var_192_bool = var_176_bool == 0; // 0xb04 Not
	if(var_192_bool == 0) goto Label_2823; // 0xb05 JumpB
	goto Label_2826; // 0xb06 Jump
	
Label_2826:
	var_193_bool = var_175_int == 0; // 0xb0a Not
	if(var_193_bool == 0) goto Label_2830; // 0xb0b JumpB
	var_167_bool = 0; // 0xb0c MovB
	return 10; // 0xb0d Return
	
Label_2830:
	var_177_int = 0; // 0xb0e MovI
	var_194_int = 1; // 0xb0f PushI
	var_195_bool = var_175_int > var_194_int; // 0xb10 GT
	if(var_195_bool == 0) goto Label_2836; // 0xb11 JumpB
	irand(var_177_int, var_175_int); // 0xb12 Func
	
Label_2836:
	var_196_int = 1; // 0xb14 PushI
	var_197_int = var_177_int + var_196_int; // 0xb15 Add
	var_198_int = var_174_string + var_197_int; // 0xb16 Add
	GetProperty(var_198_int, var_178_string); // 0xb17 ObjFunc
	var_199_bool = 0; var_200_string = ""; // 0xb19 PushV
	var_200_string = var_178_string; // 0xb1a Mov
	func_2878(var_199_bool, var_200_string); // 0xb1b NEW_2
	var_167_bool = var_199_bool; // 0xb1c Mov
	return 10; // 0xb1e Return
	
Label_2823:
	var_201_int = 1; // 0xb07 PushI
	var_175_int = var_175_int + var_201_int; // 0xb08 Add2
	goto Label_2813; // 0xb09 Jump
}


func_3060()
{
	var_76_string = "ook6Eva2"; // 0xbf5 PushS
	var_77_int = 1; // 0xbf6 PushI
	SetVariable(var_76_string, var_77_int); // 0xbf7 Func
	return 0; // 0xbf9 Return
}


func_3066()
{
	SelectWeapon(); // 0xbfb ObjFunc
	var_82_bool = 0; var_83_string = ""; var_84_string = ""; // 0xbfd PushV
	var_83_string = "quest_k6_01"; // 0xbfe MovS
	var_84_string = "unlock_eva"; // 0xbff MovS
	func_2952(var_82_bool, var_83_string, var_84_string); // 0xc00 NEW_2
	return 0; // 0xc02 Return
}


func_3324(var_50_bool, var_51_object, var_52_int)
{
	var_53_object = Obj(); var_54_object = Obj(); var_55_int = 0; var_56_object = Obj(); var_57_object = Obj(); var_58_int = 0; // 0xcfc PushV
	var_59_object = Obj(); // 0xcfd PushV
	func_3311(var_59_object); // 0xcfe NEW_2
	var_56_object = var_59_object; // 0xcff Mov
	Find(var_52_int, var_57_object); // 0xd01 ObjFunc
	var_64_bool = var_57_object == 0; // 0xd03 Not
	if(var_64_bool == 0) goto Label_3339; // 0xd04 JumpB
	var_65_string = "Can't find diary parent with id: "; // 0xd05 PushS
	var_66_int = var_65_string + var_52_int; // 0xd06 Add
	Trace(var_66_int); // 0xd07 Func
	var_50_bool = 0; // 0xd09 MovB
	return 6; // 0xd0a Return
	
Label_3339:
	AddChild(var_51_object); // 0xd0b ObjFunc
	var_67_int = 7; // 0xd0d PushI
	SendWorldWndMessage(var_67_int); // 0xd0e Func
	GetCategory(var_58_int); // 0xd10 ObjFunc
	SetDiarySection(var_58_int); // 0xd12 Func
	var_50_bool = 0; // 0xd14 MovB
	return 6; // 0xd15 Return
}


