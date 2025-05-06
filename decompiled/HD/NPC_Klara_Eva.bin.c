task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_cvector)
{
	var_33_int = 1; // 0xa2 PushI
	if(var_33_int == 0) goto Label_225; // 0xa3 JumpB
	func_2895(); // 0xa5 NEW_2
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
	func_3018(var_71_bool); // 0xd7 NEW_2
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
	func_2895(); // 0x1a4 NEW_2
	var_35_int = 26913; // 0x1a6 PushI
	var_36_bool = var_32_cvector == var_35_int; // 0x1a7 Eq
	if(var_36_bool == 0) goto Label_430; // 0x1a8 JumpB
	var_37_object = Obj(); var_38_object = Obj(); // 0x1a9 PushV
	var_37_object = var_1_object; // 0x1aa MovT
	var_38_object = var_0_object; // 0x1ab MovT
	func_3036(); // 0x1ac NEW_2
	
Label_430:
	var_64_int = 41094; // 0x1ae PushI
	var_65_bool = var_32_cvector == var_64_int; // 0x1af Eq
	if(var_65_bool == 0) goto Label_438; // 0x1b0 JumpB
	var_66_object = Obj(); var_67_object = Obj(); // 0x1b1 PushV
	var_66_object = var_1_object; // 0x1b2 MovT
	var_67_object = var_0_object; // 0x1b3 MovT
	func_3036(); // 0x1b4 NEW_2
	
Label_438:
	var_68_int = 41086; // 0x1b6 PushI
	var_69_bool = var_32_cvector == var_68_int; // 0x1b7 Eq
	if(var_69_bool == 0) goto Label_446; // 0x1b8 JumpB
	var_70_object = Obj(); var_71_object = Obj(); // 0x1b9 PushV
	var_70_object = var_1_object; // 0x1ba MovT
	var_71_object = var_0_object; // 0x1bb MovT
	func_3036(); // 0x1bc NEW_2
	
Label_446:
	var_72_int = 41082; // 0x1be PushI
	var_73_bool = var_32_cvector == var_72_int; // 0x1bf Eq
	if(var_73_bool == 0) goto Label_454; // 0x1c0 JumpB
	var_74_object = Obj(); var_75_object = Obj(); // 0x1c1 PushV
	var_74_object = var_1_object; // 0x1c2 MovT
	var_75_object = var_0_object; // 0x1c3 MovT
	func_3036(); // 0x1c4 NEW_2
	
Label_454:
	var_76_int = 42902; // 0x1c6 PushI
	var_77_bool = var_32_cvector == var_76_int; // 0x1c7 Eq
	if(var_77_bool == 0) goto Label_462; // 0x1c8 JumpB
	var_78_object = Obj(); var_79_object = Obj(); // 0x1c9 PushV
	var_78_object = var_1_object; // 0x1ca MovT
	var_79_object = var_0_object; // 0x1cb MovT
	func_3125(); // 0x1cc NEW_2
	
Label_462:
	var_90_int = 26925; // 0x1ce PushI
	var_91_bool = var_32_cvector == var_90_int; // 0x1cf Eq
	if(var_91_bool == 0) goto Label_470; // 0x1d0 JumpB
	var_92_object = Obj(); var_93_object = Obj(); // 0x1d1 PushV
	var_92_object = var_1_object; // 0x1d2 MovT
	var_93_object = var_0_object; // 0x1d3 MovT
	func_3045(); // 0x1d4 NEW_2
	
Label_470:
	var_96_int = 26929; // 0x1d6 PushI
	var_97_bool = var_32_cvector == var_96_int; // 0x1d7 Eq
	if(var_97_bool == 0) goto Label_478; // 0x1d8 JumpB
	var_98_object = Obj(); var_99_object = Obj(); // 0x1d9 PushV
	var_98_object = var_1_object; // 0x1da MovT
	var_99_object = var_0_object; // 0x1db MovT
	func_3051(); // 0x1dc NEW_2
	
Label_478:
	var_108_int = 41060; // 0x1de PushI
	var_109_bool = var_32_cvector == var_108_int; // 0x1df Eq
	if(var_109_bool == 0) goto Label_486; // 0x1e0 JumpB
	var_110_object = Obj(); var_111_object = Obj(); // 0x1e1 PushV
	var_110_object = var_1_object; // 0x1e2 MovT
	var_111_object = var_0_object; // 0x1e3 MovT
	func_3051(); // 0x1e4 NEW_2
	
Label_486:
	var_112_int = 41059; // 0x1e6 PushI
	var_113_bool = var_32_cvector == var_112_int; // 0x1e7 Eq
	if(var_113_bool == 0) goto Label_499; // 0x1e8 JumpB
	var_114_object = Obj(); var_115_object = Obj(); // 0x1e9 PushV
	var_114_object = var_1_object; // 0x1ea MovT
	var_115_object = var_0_object; // 0x1eb MovT
	func_3020(); // 0x1ec NEW_2
	var_132_object = Obj(); var_133_object = Obj(); // 0x1ee PushV
	var_132_object = var_1_object; // 0x1ef MovT
	var_133_object = var_0_object; // 0x1f0 MovT
	func_3109(); // 0x1f1 NEW_2
	
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
	func_3140(var_179_object); // 0x201 NEW_2
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
	func_3152(var_191_object); // 0x20d NEW_2
	if(var_190_bool == 0) goto Label_534; // 0x20f JumpB
	var_196_bool = 0; var_197_object = Obj(); // 0x210 PushV
	var_197_object = var_1_object; // 0x211 MovT
	func_3164(var_197_object); // 0x212 NEW_2
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
	func_3093(var_244_object); // 0x272 NEW_2
	var_264_object = Obj(); var_265_object = Obj(); // 0x274 PushV
	var_264_object = var_1_object; // 0x275 MovT
	var_265_object = var_0_object; // 0x276 MovT
	func_3103(); // 0x277 NEW_2
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
	func_3018(var_447_bool); // 0x41e NEW_2
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
	func_2895(); // 0x4f4 NEW_2
	var_35_int = 27323; // 0x4f6 PushI
	var_36_bool = var_32_cvector == var_35_int; // 0x4f7 Eq
	if(var_36_bool == 0) goto Label_1278; // 0x4f8 JumpB
	var_37_object = Obj(); var_38_object = Obj(); // 0x4f9 PushV
	var_37_object = var_1_object; // 0x4fa MovT
	var_38_object = var_0_object; // 0x4fb MovT
	func_3056(); // 0x4fc NEW_2
	
Label_1278:
	var_41_int = 27327; // 0x4fe PushI
	var_42_bool = var_32_cvector == var_41_int; // 0x4ff Eq
	if(var_42_bool == 0) goto Label_1286; // 0x500 JumpB
	var_43_object = Obj(); var_44_object = Obj(); // 0x501 PushV
	var_43_object = var_1_object; // 0x502 MovT
	var_44_object = var_0_object; // 0x503 MovT
	func_3077(); // 0x504 NEW_2
	
Label_1286:
	var_68_int = 43232; // 0x506 PushI
	var_69_bool = var_32_cvector == var_68_int; // 0x507 Eq
	if(var_69_bool == 0) goto Label_1294; // 0x508 JumpB
	var_70_object = Obj(); var_71_object = Obj(); // 0x509 PushV
	var_70_object = var_1_object; // 0x50a MovT
	var_71_object = var_0_object; // 0x50b MovT
	func_3077(); // 0x50c NEW_2
	
Label_1294:
	var_72_int = 27353; // 0x50e PushI
	var_73_bool = var_32_cvector == var_72_int; // 0x50f Eq
	if(var_73_bool == 0) goto Label_1302; // 0x510 JumpB
	var_74_object = Obj(); var_75_object = Obj(); // 0x511 PushV
	var_74_object = var_1_object; // 0x512 MovT
	var_75_object = var_0_object; // 0x513 MovT
	func_3062(); // 0x514 NEW_2
	
Label_1302:
	var_78_int = 27362; // 0x516 PushI
	var_79_bool = var_32_cvector == var_78_int; // 0x517 Eq
	if(var_79_bool == 0) goto Label_1315; // 0x518 JumpB
	var_80_object = Obj(); var_81_object = Obj(); // 0x519 PushV
	var_80_object = var_1_object; // 0x51a MovT
	var_81_object = var_0_object; // 0x51b MovT
	func_3068(); // 0x51c NEW_2
	var_88_object = Obj(); var_89_object = Obj(); // 0x51e PushV
	var_88_object = var_1_object; // 0x51f MovT
	var_89_object = var_0_object; // 0x520 MovT
	func_3134(); // 0x521 NEW_2
	
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
	func_3176(var_114_object); // 0x533 NEW_2
	if(var_113_bool == 0) goto Label_1340; // 0x535 JumpB
	var_121_bool = 0; var_122_object = Obj(); // 0x536 PushV
	var_122_object = var_1_object; // 0x537 MovT
	func_3188(var_122_object); // 0x538 NEW_2
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
	func_3200(var_132_object); // 0x546 NEW_2
	if(var_131_bool == 0) goto Label_1359; // 0x548 JumpB
	var_137_bool = 0; var_138_object = Obj(); // 0x549 PushV
	var_138_object = var_1_object; // 0x54a MovT
	func_3212(var_138_object); // 0x54b NEW_2
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
	func_3018(var_217_bool); // 0x601 NEW_2
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
	func_2895(); // 0x6bf NEW_2
	var_35_int = 28493; // 0x6c1 PushI
	var_36_bool = var_32_cvector == var_35_int; // 0x6c2 Eq
	if(var_36_bool == 0) goto Label_1737; // 0x6c3 JumpB
	var_37_object = Obj(); var_38_object = Obj(); // 0x6c4 PushV
	var_37_object = var_1_object; // 0x6c5 MovT
	var_38_object = var_0_object; // 0x6c6 MovT
	func_3082(); // 0x6c7 NEW_2
	
Label_1737:
	var_41_int = 28602; // 0x6c9 PushI
	var_42_bool = var_32_cvector == var_41_int; // 0x6ca Eq
	if(var_42_bool == 0) goto Label_1745; // 0x6cb JumpB
	var_43_object = Obj(); var_44_object = Obj(); // 0x6cc PushV
	var_43_object = var_1_object; // 0x6cd MovT
	var_44_object = var_0_object; // 0x6ce MovT
	func_3088(); // 0x6cf NEW_2
	
Label_1745:
	var_68_int = 28603; // 0x6d1 PushI
	var_69_bool = var_32_cvector == var_68_int; // 0x6d2 Eq
	if(var_69_bool == 0) goto Label_1753; // 0x6d3 JumpB
	var_70_object = Obj(); var_71_object = Obj(); // 0x6d4 PushV
	var_70_object = var_1_object; // 0x6d5 MovT
	var_71_object = var_0_object; // 0x6d6 MovT
	func_3088(); // 0x6d7 NEW_2
	
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
	func_3224(var_94_object); // 0x6e9 NEW_2
	if(var_93_bool == 0) goto Label_1778; // 0x6eb JumpB
	var_101_bool = 0; var_102_object = Obj(); // 0x6ec PushV
	var_102_object = var_1_object; // 0x6ed MovT
	func_3236(var_102_object); // 0x6ee NEW_2
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
	func_3018(var_140_bool); // 0x740 NEW_2
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
	func_2895(); // 0x7f5 NEW_2
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
	func_3018(var_84_bool); // 0x843 NEW_2
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
	func_2895(); // 0x8f3 NEW_2
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
	func_3018(var_61_bool); // 0x90e NEW_2
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
	func_2902(var_77_object); // 0x97b NEW_2
	var_76_object = var_77_object; // 0x97c Mov
	func_2769(var_76_object); // 0x97e NEW_2
	
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
	func_2849(var_32_string); // 0x99e NEW_2
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
	func_2849(var_38_string); // 0x9ad NEW_2
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
	func_3421(var_49_object); // 0x9c0 NEW_2
	var_645_string = ""; // 0x9c2 PushV
	var_645_string = "Neutral"; // 0x9c3 MovS
	func_2849(var_645_string); // 0x9c4 NEW_2
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
	var_112_bool = var_65_bool == 0; // 0x7 Not
	if(var_112_bool == 0) goto Label_11; // 0x8 JumpB
	var_54_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_61_object); // 0xb Func
	var_113_int = 0; // 0xd PushV
	func_3012(var_113_int); // 0xe NEW_2
	SetNPCName(var_113_int); // 0x10 ObjFunc
	var_114_int = 0; // 0x12 PushV
	func_3010(var_114_int); // 0x13 NEW_2
	SetNPCDescription(var_114_int); // 0x15 ObjFunc
	var_115_string = ""; // 0x17 PushV
	func_3014(var_115_string); // 0x18 NEW_2
	SetPhoto(var_115_string); // 0x1a ObjFunc
	var_116_string = ""; // 0x1c PushV
	func_3016(var_116_string); // 0x1d NEW_2
	SetPhoto2(var_116_string); // 0x1f ObjFunc
	var_117_int = 0; // 0x21 PushV
	func_3404(var_117_int); // 0x22 NEW_2
	SetPlayerName(var_117_int); // 0x24 ObjFunc
	var_63_int = -1; // 0x26 MovI
	IsOverrideActive(var_62_bool); // 0x27 Func
	var_125_bool = var_62_bool; // 0x29 Push
	if(var_125_bool == 0) goto Label_45; // 0x2a JumpB
	var_54_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_61_object); // 0x2d Func
	var_126_bool = 0; var_127_object = Obj(); // 0x2f PushV
	var_128_object = Obj(); // 0x30 PushV
	func_2902(var_128_object); // 0x31 NEW_2
	var_127_object = var_128_object; // 0x32 Mov
	func_2711(var_126_bool, var_127_object); // 0x34 NEW_2
	var_221_object = Obj(); var_222_object = Obj(); // 0x36 PushV
	var_221_object = var_55_object; // 0x37 Mov
	var_222_object = var_61_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_223_object, var_224_object, var_225_string, var_226_bool, var_221_object, var_222_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	IsDialogEnd(var_64_bool); // 0x3d ObjFunc
	
Label_63:
	var_270_bool = var_64_bool == 0; // 0x3f Not
	if(var_270_bool == 0) goto Label_70; // 0x40 JumpB
	sync(); // 0x41 Func
	IsDialogEnd(var_64_bool); // 0x43 ObjFunc
	goto Label_63; // 0x45 Jump
	
Label_70:
	var_271_object = Obj(); // 0x46 PushV
	var_271_object = var_55_object; // 0x47 Mov
	func_2693(); // 0x48 NEW_2
	StopDialog(var_61_object); // 0x4a Func
	GetReturnValue(var_63_int); // 0x4c ObjFunc
	var_54_int = var_63_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_3077()
{
	func_3300(); // 0xc07 NEW_2
	return 0; // 0xc09 Return
}


func_3082()
{
	var_39_string = "ook11Eva1"; // 0xc0b PushS
	var_40_int = 1; // 0xc0c PushI
	SetVariable(var_39_string, var_40_int); // 0xc0d Func
	return 0; // 0xc0f Return
}


func_1548(var_0_object, var_459_int, var_460_object)
{
	var_462_object = Obj(); var_463_bool = 0; var_464_int = 0; var_465_bool = 0; var_466_object = Obj(); var_467_bool = 0; var_468_int = 0; var_469_bool = 0; // 0x60c PushV
	var_0_object = var_460_object; // 0x60d TMov
	var_470_bool = 0; var_471_object = Obj(); var_472_float = 0; // 0x60e PushV
	var_471_object = var_460_object; // 0x60f Mov
	var_472_float = 70.0; // 0x610 MovF
	func_2624(var_471_object, var_472_float); // 0x611 NEW_2
	var_473_bool = var_470_bool == 0; // 0x613 Not
	if(var_473_bool == 0) goto Label_1559; // 0x614 JumpB
	var_459_int = -2; // 0x615 MovI
	return 8; // 0x616 Return
	
Label_1559:
	CreateDialog(var_466_object); // 0x617 Func
	var_474_int = 0; // 0x619 PushV
	func_3012(var_474_int); // 0x61a NEW_2
	SetNPCName(var_474_int); // 0x61c ObjFunc
	var_475_int = 0; // 0x61e PushV
	func_3010(var_475_int); // 0x61f NEW_2
	SetNPCDescription(var_475_int); // 0x621 ObjFunc
	var_476_string = ""; // 0x623 PushV
	func_3014(var_476_string); // 0x624 NEW_2
	SetPhoto(var_476_string); // 0x626 ObjFunc
	var_477_string = ""; // 0x628 PushV
	func_3016(var_477_string); // 0x629 NEW_2
	SetPhoto2(var_477_string); // 0x62b ObjFunc
	var_478_int = 0; // 0x62d PushV
	func_3404(var_478_int); // 0x62e NEW_2
	SetPlayerName(var_478_int); // 0x630 ObjFunc
	var_468_int = -1; // 0x632 MovI
	IsOverrideActive(var_467_bool); // 0x633 Func
	var_479_bool = var_467_bool; // 0x635 Push
	if(var_479_bool == 0) goto Label_1593; // 0x636 JumpB
	var_459_int = -2; // 0x637 MovI
	return 8; // 0x638 Return
	
Label_1593:
	DoDialog(var_466_object); // 0x639 Func
	var_480_bool = 0; var_481_object = Obj(); // 0x63b PushV
	var_482_object = Obj(); // 0x63c PushV
	func_2902(var_482_object); // 0x63d NEW_2
	var_481_object = var_482_object; // 0x63e Mov
	func_2711(var_480_bool, var_481_object); // 0x640 NEW_2
	var_483_object = Obj(); var_484_object = Obj(); // 0x642 PushV
	var_483_object = var_460_object; // 0x643 Mov
	var_484_object = var_466_object; // 0x644 Mov
	TaskCall(7); // 0x645 TaskCall
	func_1629(var_485_object, var_486_object, var_487_string, var_488_bool, var_483_object, var_484_object); // 0x646 NEW_2
	TaskReturn(); // 0x647 TaskReturn
	IsDialogEnd(var_469_bool); // 0x649 ObjFunc
	
Label_1611:
	var_526_bool = var_469_bool == 0; // 0x64b Not
	if(var_526_bool == 0) goto Label_1618; // 0x64c JumpB
	sync(); // 0x64d Func
	IsDialogEnd(var_469_bool); // 0x64f ObjFunc
	goto Label_1611; // 0x651 Jump
	
Label_1618:
	var_527_object = Obj(); // 0x652 PushV
	var_527_object = var_460_object; // 0x653 Mov
	func_2693(); // 0x654 NEW_2
	StopDialog(var_466_object); // 0x656 Func
	GetReturnValue(var_468_int); // 0x658 ObjFunc
	var_459_int = var_468_int; // 0x65a Mov
	return 8; // 0x65b Return
}


func_3088()
{
	func_3248(); // 0xc12 NEW_2
	return 0; // 0xc14 Return
}


func_2578(var_69_bool)
{
	var_69_bool = 1; // 0xa12 MovB
	return 0; // 0xa13 Return
}


func_2580()
{
	StopAnimation(); // 0xa14 Func
	StopGroup0(); // 0xa16 Func
	return 0; // 0xa18 Return
}


func_3093(var_243_object)
{
	var_245_string = "money1000 is given"; // 0xc16 PushS
	Trace(var_245_string); // 0xc17 Func
	var_246_object = Obj(); var_247_int = 0; // 0xc19 PushV
	var_246_object = var_243_object; // 0xc1a Mov
	var_247_int = 1000; // 0xc1b MovI
	func_2935(var_246_object, var_247_int); // 0xc1c NEW_2
	return 0; // 0xc1e Return
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


func_3354(var_118_object)
{
	var_119_object = Obj(); var_120_object = Obj(); var_121_object = Obj(); var_122_object = Obj(); // 0xd1a PushV
	GetMainOutdoorScene(var_121_object); // 0xd1b Func
	var_123_bool = var_121_object == 0; // 0xd1d NullEq
	if(var_123_bool == 0) goto Label_3365; // 0xd1e JumpB
	var_124_string = "Can't find main outdoor scene"; // 0xd1f PushS
	Trace(var_124_string); // 0xd20 Func
	var_122_object = 0; // 0xd22 SetNull
	var_118_object = var_122_object; // 0xd23 Mov
	return 4; // 0xd24 Return
	
Label_3365:
	GetMap(var_122_object); // 0xd25 ObjFunc
	var_118_object = var_122_object; // 0xd27 Mov
	return 4; // 0xd28 Return
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


func_3103()
{
	var_266_string = "playsound"; // 0xc20 PushS
	var_267_string = "givemoney"; // 0xc21 PushS
	TriggerWorld(var_266_string, var_267_string); // 0xc22 Func
	return 0; // 0xc24 Return
}


func_2593(var_251_string, var_252_int)
{
	var_253_int = 0; var_254_int = 0; // 0xa21 PushV
	GetProperty(var_251_string, var_254_int); // 0xa22 ObjFunc
	var_255_int = var_254_int + var_252_int; // 0xa24 Add
	SetProperty(var_251_string, var_255_int); // 0xa25 ObjFunc
	return 2; // 0xa27 Return
}


func_2849(var_254_string)
{
	var_255_bool = 0; var_256_float = 0; var_257_float = 0; var_258_bool = 0; var_259_float = 0; var_260_float = 0; // 0xb21 PushV
	lshHasAnimation(var_258_bool, var_254_string); // 0xb22 Func
	var_261_bool = var_258_bool; // 0xb24 Push
	if(var_261_bool == 0) goto Label_2860; // 0xb25 JumpB
	lshGetAnimTimes(var_254_string, var_259_float, var_260_float); // 0xb26 Func
	var_262_bool = 0; // 0xb28 PushB
	lshPlayAnimation(var_259_float, var_260_float, var_262_bool); // 0xb29 Func
	goto Label_2864; // 0xb2b Jump
	
Label_2864:
	return 6; // 0xb30 Return
	
Label_2860:
	var_263_string = "Can't find lsh animation : "; // 0xb2c PushS
	var_264_int = var_263_string + var_254_string; // 0xb2d Add
	Trace(var_264_int); // 0xb2e Func
}


func_3109()
{
	var_134_object = Obj(); var_135_string = ""; var_136_float = 0; // 0xc26 PushV
	var_137_object = Obj(); // 0xc27 PushV
	func_3354(var_137_object); // 0xc28 NEW_2
	var_134_object = var_137_object; // 0xc29 Mov
	var_135_string = "pt_region01_center01"; // 0xc2b MovS
	var_136_float = 2; // 0xc2c MovI
	func_3371(var_134_object, var_135_string, var_136_float); // 0xc2d NEW_2
	var_157_object = Obj(); // 0xc2f PushV
	func_3354(var_157_object); // 0xc30 NEW_2
	ShowMap(var_157_object); // 0xc32 ObjFunc
	return 0; // 0xc34 Return
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


func_1065(var_0_object, var_369_int, var_370_object)
{
	var_372_object = Obj(); var_373_bool = 0; var_374_int = 0; var_375_bool = 0; var_376_object = Obj(); var_377_bool = 0; var_378_int = 0; var_379_bool = 0; // 0x429 PushV
	var_0_object = var_370_object; // 0x42a TMov
	var_380_bool = 0; var_381_object = Obj(); var_382_float = 0; // 0x42b PushV
	var_381_object = var_370_object; // 0x42c Mov
	var_382_float = 70.0; // 0x42d MovF
	func_2624(var_381_object, var_382_float); // 0x42e NEW_2
	var_383_bool = var_380_bool == 0; // 0x430 Not
	if(var_383_bool == 0) goto Label_1076; // 0x431 JumpB
	var_369_int = -2; // 0x432 MovI
	return 8; // 0x433 Return
	
Label_1076:
	CreateDialog(var_376_object); // 0x434 Func
	var_384_int = 0; // 0x436 PushV
	func_3012(var_384_int); // 0x437 NEW_2
	SetNPCName(var_384_int); // 0x439 ObjFunc
	var_385_int = 0; // 0x43b PushV
	func_3010(var_385_int); // 0x43c NEW_2
	SetNPCDescription(var_385_int); // 0x43e ObjFunc
	var_386_string = ""; // 0x440 PushV
	func_3014(var_386_string); // 0x441 NEW_2
	SetPhoto(var_386_string); // 0x443 ObjFunc
	var_387_string = ""; // 0x445 PushV
	func_3016(var_387_string); // 0x446 NEW_2
	SetPhoto2(var_387_string); // 0x448 ObjFunc
	var_388_int = 0; // 0x44a PushV
	func_3404(var_388_int); // 0x44b NEW_2
	SetPlayerName(var_388_int); // 0x44d ObjFunc
	var_378_int = -1; // 0x44f MovI
	IsOverrideActive(var_377_bool); // 0x450 Func
	var_389_bool = var_377_bool; // 0x452 Push
	if(var_389_bool == 0) goto Label_1110; // 0x453 JumpB
	var_369_int = -2; // 0x454 MovI
	return 8; // 0x455 Return
	
Label_1110:
	DoDialog(var_376_object); // 0x456 Func
	var_390_bool = 0; var_391_object = Obj(); // 0x458 PushV
	var_392_object = Obj(); // 0x459 PushV
	func_2902(var_392_object); // 0x45a NEW_2
	var_391_object = var_392_object; // 0x45b Mov
	func_2711(var_390_bool, var_391_object); // 0x45d NEW_2
	var_393_object = Obj(); var_394_object = Obj(); // 0x45f PushV
	var_393_object = var_370_object; // 0x460 Mov
	var_394_object = var_376_object; // 0x461 Mov
	TaskCall(5); // 0x462 TaskCall
	func_1146(var_395_object, var_396_object, var_397_string, var_398_bool, var_393_object, var_394_object); // 0x463 NEW_2
	TaskReturn(); // 0x464 TaskReturn
	IsDialogEnd(var_379_bool); // 0x466 ObjFunc
	
Label_1128:
	var_455_bool = var_379_bool == 0; // 0x468 Not
	if(var_455_bool == 0) goto Label_1135; // 0x469 JumpB
	sync(); // 0x46a Func
	IsDialogEnd(var_379_bool); // 0x46c ObjFunc
	goto Label_1128; // 0x46e Jump
	
Label_1135:
	var_456_object = Obj(); // 0x46f PushV
	var_456_object = var_370_object; // 0x470 Mov
	func_2693(); // 0x471 NEW_2
	StopDialog(var_376_object); // 0x473 Func
	GetReturnValue(var_378_int); // 0x475 ObjFunc
	var_369_int = var_378_int; // 0x477 Mov
	return 8; // 0x478 Return
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


func_3371(var_134_object, var_135_string, var_136_float)
{
	var_138_cvector = CVector(0,0,0); var_139_cvector = CVector(0,0,0); var_140_object = Obj(); var_141_bool = 0; var_142_cvector = CVector(0,0,0); var_143_cvector = CVector(0,0,0); var_144_object = Obj(); var_145_bool = 0; // 0xd2b PushV
	GetMainOutdoorScene(var_144_object); // 0xd2c Func
	var_146_bool = var_144_object == 0; // 0xd2e NullEq
	if(var_146_bool == 0) goto Label_3380; // 0xd2f JumpB
	var_147_string = "Can't find main outdoor scene"; // 0xd30 PushS
	Trace(var_147_string); // 0xd31 Func
	return 8; // 0xd33 Return
	
Label_3380:
	GetLocator(var_135_string, var_145_bool, var_142_cvector, var_143_cvector); // 0xd34 ObjFunc
	var_148_bool = var_145_bool == 0; // 0xd36 Not
	if(var_148_bool == 0) goto Label_3390; // 0xd37 JumpB
	var_149_string = "Warning: outdoor scene locator "; // 0xd38 PushS
	var_150_int = var_149_string + var_135_string; // 0xd39 Add
	var_151_string = " doesnt exist"; // 0xd3a PushS
	var_152_int = var_150_int + var_151_string; // 0xd3b Add
	Trace(var_152_int); // 0xd3c Func
	
Label_3390:
	GetMap(var_134_object); // 0xd3e ObjFunc
	var_153_bool = var_134_object == 0; // 0xd40 NullEq
	if(var_153_bool == 0) goto Label_3398; // 0xd41 JumpB
	var_154_string = "Can't find map"; // 0xd42 PushS
	Trace(var_154_string); // 0xd43 Func
	return 8; // 0xd45 Return
	
Label_3398:
	var_155_float = GetByIndex(var_142_cvector, 0); // 0xd46 PushE
	var_156_float = GetByIndex(var_142_cvector, 2); // 0xd47 PushE
	SetMapParams(var_155_float, var_156_float, var_136_float); // 0xd48 ObjFunc
	return 8; // 0xd4a Return
}


func_2865(var_232_string, var_233_bool)
{
	var_236_bool = 0; var_237_float = 0; var_238_float = 0; var_239_bool = 0; var_240_float = 0; var_241_float = 0; // 0xb31 PushV
	lshHasAnimation(var_239_bool, var_232_string); // 0xb32 Func
	var_242_bool = var_239_bool; // 0xb34 Push
	if(var_242_bool == 0) goto Label_2875; // 0xb35 JumpB
	lshGetAnimTimes(var_232_string, var_240_float, var_241_float); // 0xb36 Func
	lshPlayAnimation(var_240_float, var_241_float, var_233_bool); // 0xb38 Func
	goto Label_2879; // 0xb3a Jump
	
Label_2879:
	return 6; // 0xb3f Return
	
Label_2875:
	var_243_string = "Can't find lsh animation : "; // 0xb3b PushS
	var_244_int = var_243_string + var_232_string; // 0xb3c Add
	Trace(var_244_int); // 0xb3d Func
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


func_307(var_0_object, var_1_object, var_2_object, var_3_string, var_308_object, var_309_object)
{
	var_0_object = var_309_object; // 0x134 TMov
	var_1_object = var_308_object; // 0x135 TMov
	var_3_string = 0; // 0x136 TMovB
	var_314_int = 1; // 0x137 PushI
	if(var_314_int == 0) goto Label_364; // 0x138 JumpB
	var_315_string = ""; // 0x139 PushV
	var_315_string = "Neutral"; // 0x13a MovS
	func_394(var_309_object, var_315_string); // 0x13b NEW_2
	var_323_int = 525548; // 0x13d PushI
	SetMessage(var_323_int); // 0x13e TObjFunc
	ClearReplies(); // 0x140 TObjFunc
	var_324_bool = 0; var_325_object = Obj(); // 0x142 PushV
	var_325_object = var_1_object; // 0x143 MovT
	func_3140(var_325_object); // 0x144 NEW_2
	if(var_324_bool == 0) goto Label_332; // 0x146 JumpB
	var_332_int = 525549; // 0x147 PushI
	var_333_int = 42898; // 0x148 PushI
	var_334_int = 26905; // 0x149 PushI
	AddReply(var_332_int, var_333_int, var_334_int); // 0x14a TObjFunc
	
Label_332:
	var_335_bool = 0; // 0x14c PushV
	var_335_bool = 0; // 0x14d MovB
	var_336_bool = 0; var_337_object = Obj(); // 0x14e PushV
	var_337_object = var_1_object; // 0x14f MovT
	func_3152(var_337_object); // 0x150 NEW_2
	if(var_336_bool == 0) goto Label_345; // 0x152 JumpB
	var_342_bool = 0; var_343_object = Obj(); // 0x153 PushV
	var_343_object = var_1_object; // 0x154 MovT
	func_3164(var_343_object); // 0x155 NEW_2
	if(var_342_bool == 0) goto Label_345; // 0x157 JumpB
	var_335_bool = 1; // 0x158 MovB
	
Label_345:
	if(var_335_bool == 0) goto Label_351; // 0x159 JumpB
	var_348_int = 525578; // 0x15a PushI
	var_349_int = 41036; // 0x15b PushI
	var_350_int = 26925; // 0x15c PushI
	AddReply(var_348_int, var_349_int, var_350_int); // 0x15d TObjFunc
	
Label_351:
	var_351_int = 539127; // 0x15f PushI
	var_352_int = -1; // 0x160 PushI
	var_353_int = 41057; // 0x161 PushI
	AddReply(var_351_int, var_352_int, var_353_int); // 0x162 TObjFunc
	var_354_int = 525558; // 0x164 PushI
	var_355_int = -1; // 0x165 PushI
	var_356_int = 26914; // 0x166 PushI
	AddReply(var_354_int, var_355_int, var_356_int); // 0x167 TObjFunc
	goto Label_364; // 0x169 Jump
	
Label_364:
	var_357_bool = 0; // 0x16c PushV
	func_3018(var_357_bool); // 0x16d NEW_2
	if(var_357_bool == 0) goto Label_379; // 0x16f JumpB
	
Label_368:
	lshWaitForAnimEnd(); // 0x170 Func
	var_358_string = var_3_string; // 0x172 PushT
	if(var_358_string == 0) goto Label_373; // 0x173 JumpB
	goto Label_378; // 0x174 Jump
	
Label_378:
	goto Label_393; // 0x17a Jump
	
Label_393:
	return 0; // 0x189 Return
	
Label_373:
	var_359_string = ""; // 0x175 PushV
	var_359_string = var_2_object; // 0x176 MovT
	func_2849(var_359_string); // 0x177 NEW_2
	goto Label_368; // 0x179 Jump
	
Label_379:
	var_360_string = "all"; // 0x17b PushS
	var_361_string = "idle"; // 0x17c PushS
	PlayAnimation(var_360_string, var_361_string); // 0x17d Func
	
Label_383:
	WaitForAnimEnd(); // 0x17f Func
	var_362_string = var_3_string; // 0x181 PushT
	if(var_362_string == 0) goto Label_388; // 0x182 JumpB
	goto Label_393; // 0x183 Jump
	
Label_388:
	var_363_string = "all"; // 0x184 PushS
	var_364_string = "idle"; // 0x185 PushS
	PlayAnimation(var_363_string, var_364_string); // 0x186 Func
	goto Label_383; // 0x188 Jump
}


func_3125()
{
	var_80_string = "k3q02"; // 0xc36 PushS
	var_81_int = -1; // 0xc37 PushI
	SetVariable(var_80_string, var_81_int); // 0xc38 Func
	func_3261(); // 0xc3b NEW_2
	return 0; // 0xc3d Return
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


func_3134()
{
	var_90_string = "playsound"; // 0xc3f PushS
	var_91_string = "giveitem"; // 0xc40 PushS
	TriggerWorld(var_90_string, var_91_string); // 0xc41 Func
	return 0; // 0xc43 Return
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
	func_2908(var_92_cvector, var_93_cvector); // 0xa5b NEW_2
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
	var_105_bool = 1; // 0xa6b PushB
	CameraTransit(var_83_cvector, var_81_cvector, var_105_bool); // 0xa6c Func
	var_106_float = GetByIndex(var_82_cvector, 0); // 0xa6e PushE
	var_107_float = GetByIndex(var_82_cvector, 2); // 0xa6f PushE
	Rotate(var_106_float, var_107_float); // 0xa70 Func
	var_108_bool = 0; // 0xa72 PushV
	func_3018(var_108_bool); // 0xa73 NEW_2
	if(var_108_bool == 0) goto Label_2679; // 0xa75 JumpB
	goto Label_2687; // 0xa76 Jump
	
Label_2687:
	CameraWaitForPlayFinish(); // 0xa7f Func
	ResumeWorld(); // 0xa81 Func
	var_65_bool = 1; // 0xa83 MovB
	return 18; // 0xa84 Return
	
Label_2679:
	var_109_string = "head"; // 0xa77 PushS
	HasAnimationTrack(var_85_bool, var_109_string); // 0xa78 Func
	var_110_bool = var_85_bool; // 0xa7a Push
	if(var_110_bool == 0) goto Label_2687; // 0xa7b JumpB
	var_111_string = "head"; // 0xa7c PushS
	LookAsyncCamera(var_111_string); // 0xa7d Func
}


func_2880(var_160_bool, var_161_string)
{
	var_162_bool = 0; var_163_bool = 0; // 0xb40 PushV
	var_164_bool = 0; // 0xb41 PushV
	func_3018(var_164_bool); // 0xb42 NEW_2
	if(var_164_bool == 0) goto Label_2893; // 0xb44 JumpB
	lshHasSpeech(var_163_bool, var_161_string); // 0xb45 Func
	var_165_bool = var_163_bool; // 0xb47 Push
	if(var_165_bool == 0) goto Label_2893; // 0xb48 JumpB
	lshPlaySpeech(var_161_string); // 0xb49 Func
	var_160_bool = 1; // 0xb4b MovB
	return 2; // 0xb4c Return
	
Label_2893:
	var_160_bool = 0; // 0xb4d MovB
	return 2; // 0xb4e Return
}


func_3140(var_324_bool)
{
	var_326_int = 0; var_327_string = ""; // 0xc45 PushV
	var_327_string = "k3q02"; // 0xc46 MovS
	func_2918(var_326_int, var_327_string); // 0xc47 NEW_2
	var_330_int = 2; // 0xc49 PushI
	var_331_bool = var_326_int == var_330_int; // 0xc4a Eq
	if(var_331_bool == 0) goto Label_3150; // 0xc4b JumpB
	var_324_bool = 1; // 0xc4c MovB
	return 0; // 0xc4d Return
	
Label_3150:
	var_324_bool = 0; // 0xc4e MovB
	return 0; // 0xc4f Return
}


func_1867(var_0_object, var_530_int, var_531_object)
{
	var_533_object = Obj(); var_534_bool = 0; var_535_int = 0; var_536_bool = 0; var_537_object = Obj(); var_538_bool = 0; var_539_int = 0; var_540_bool = 0; // 0x74b PushV
	var_0_object = var_531_object; // 0x74c TMov
	var_541_bool = 0; var_542_object = Obj(); var_543_float = 0; // 0x74d PushV
	var_542_object = var_531_object; // 0x74e Mov
	var_543_float = 70.0; // 0x74f MovF
	func_2624(var_542_object, var_543_float); // 0x750 NEW_2
	var_544_bool = var_541_bool == 0; // 0x752 Not
	if(var_544_bool == 0) goto Label_1878; // 0x753 JumpB
	var_530_int = -2; // 0x754 MovI
	return 8; // 0x755 Return
	
Label_1878:
	CreateDialog(var_537_object); // 0x756 Func
	var_545_int = 0; // 0x758 PushV
	func_3012(var_545_int); // 0x759 NEW_2
	SetNPCName(var_545_int); // 0x75b ObjFunc
	var_546_int = 0; // 0x75d PushV
	func_3010(var_546_int); // 0x75e NEW_2
	SetNPCDescription(var_546_int); // 0x760 ObjFunc
	var_547_string = ""; // 0x762 PushV
	func_3014(var_547_string); // 0x763 NEW_2
	SetPhoto(var_547_string); // 0x765 ObjFunc
	var_548_string = ""; // 0x767 PushV
	func_3016(var_548_string); // 0x768 NEW_2
	SetPhoto2(var_548_string); // 0x76a ObjFunc
	var_549_int = 0; // 0x76c PushV
	func_3404(var_549_int); // 0x76d NEW_2
	SetPlayerName(var_549_int); // 0x76f ObjFunc
	var_539_int = -1; // 0x771 MovI
	IsOverrideActive(var_538_bool); // 0x772 Func
	var_550_bool = var_538_bool; // 0x774 Push
	if(var_550_bool == 0) goto Label_1912; // 0x775 JumpB
	var_530_int = -2; // 0x776 MovI
	return 8; // 0x777 Return
	
Label_1912:
	DoDialog(var_537_object); // 0x778 Func
	var_551_bool = 0; var_552_object = Obj(); // 0x77a PushV
	var_553_object = Obj(); // 0x77b PushV
	func_2902(var_553_object); // 0x77c NEW_2
	var_552_object = var_553_object; // 0x77d Mov
	func_2711(var_551_bool, var_552_object); // 0x77f NEW_2
	var_554_object = Obj(); var_555_object = Obj(); // 0x781 PushV
	var_554_object = var_531_object; // 0x782 Mov
	var_555_object = var_537_object; // 0x783 Mov
	TaskCall(9); // 0x784 TaskCall
	func_1948(var_556_object, var_557_object, var_558_string, var_559_bool, var_554_object, var_555_object); // 0x785 NEW_2
	TaskReturn(); // 0x786 TaskReturn
	IsDialogEnd(var_540_bool); // 0x788 ObjFunc
	
Label_1930:
	var_587_bool = var_540_bool == 0; // 0x78a Not
	if(var_587_bool == 0) goto Label_1937; // 0x78b JumpB
	sync(); // 0x78c Func
	IsDialogEnd(var_540_bool); // 0x78e ObjFunc
	goto Label_1930; // 0x790 Jump
	
Label_1937:
	var_588_object = Obj(); // 0x791 PushV
	var_588_object = var_531_object; // 0x792 Mov
	func_2693(); // 0x793 NEW_2
	StopDialog(var_537_object); // 0x795 Func
	GetReturnValue(var_539_int); // 0x797 ObjFunc
	var_530_int = var_539_int; // 0x799 Mov
	return 8; // 0x79a Return
}


func_3404(var_117_int)
{
	var_118_int = 0; var_119_int = 0; // 0xd4c PushV
	var_120_string = "branch"; // 0xd4d PushS
	GetVariable(var_120_string, var_119_int); // 0xd4e Func
	var_121_int = 0; // 0xd50 PushI
	var_122_bool = var_119_int == var_121_int; // 0xd51 Eq
	if(var_122_bool == 0) goto Label_3414; // 0xd52 JumpB
	var_117_int = 1; // 0xd53 MovI
	return 2; // 0xd54 Return
	
Label_3414:
	var_123_int = 1; // 0xd56 PushI
	var_124_bool = var_119_int == var_123_int; // 0xd57 Eq
	if(var_124_bool == 0) goto Label_3419; // 0xd58 JumpB
	var_117_int = 2; // 0xd59 MovI
	return 2; // 0xd5a Return
	
Label_3419:
	var_117_int = 3; // 0xd5b MovI
	return 2; // 0xd5c Return
}


func_2126(var_0_object, var_589_int, var_590_object)
{
	var_592_object = Obj(); var_593_bool = 0; var_594_int = 0; var_595_bool = 0; var_596_object = Obj(); var_597_bool = 0; var_598_int = 0; var_599_bool = 0; // 0x84e PushV
	var_0_object = var_590_object; // 0x84f TMov
	var_600_bool = 0; var_601_object = Obj(); var_602_float = 0; // 0x850 PushV
	var_601_object = var_590_object; // 0x851 Mov
	var_602_float = 70.0; // 0x852 MovF
	func_2624(var_601_object, var_602_float); // 0x853 NEW_2
	var_603_bool = var_600_bool == 0; // 0x855 Not
	if(var_603_bool == 0) goto Label_2137; // 0x856 JumpB
	var_589_int = -2; // 0x857 MovI
	return 8; // 0x858 Return
	
Label_2137:
	CreateDialog(var_596_object); // 0x859 Func
	var_604_int = 0; // 0x85b PushV
	func_3012(var_604_int); // 0x85c NEW_2
	SetNPCName(var_604_int); // 0x85e ObjFunc
	var_605_int = 0; // 0x860 PushV
	func_3010(var_605_int); // 0x861 NEW_2
	SetNPCDescription(var_605_int); // 0x863 ObjFunc
	var_606_string = ""; // 0x865 PushV
	func_3014(var_606_string); // 0x866 NEW_2
	SetPhoto(var_606_string); // 0x868 ObjFunc
	var_607_string = ""; // 0x86a PushV
	func_3016(var_607_string); // 0x86b NEW_2
	SetPhoto2(var_607_string); // 0x86d ObjFunc
	var_608_int = 0; // 0x86f PushV
	func_3404(var_608_int); // 0x870 NEW_2
	SetPlayerName(var_608_int); // 0x872 ObjFunc
	var_598_int = -1; // 0x874 MovI
	IsOverrideActive(var_597_bool); // 0x875 Func
	var_609_bool = var_597_bool; // 0x877 Push
	if(var_609_bool == 0) goto Label_2171; // 0x878 JumpB
	var_589_int = -2; // 0x879 MovI
	return 8; // 0x87a Return
	
Label_2171:
	DoDialog(var_596_object); // 0x87b Func
	var_610_bool = 0; var_611_object = Obj(); // 0x87d PushV
	var_612_object = Obj(); // 0x87e PushV
	func_2902(var_612_object); // 0x87f NEW_2
	var_611_object = var_612_object; // 0x880 Mov
	func_2711(var_610_bool, var_611_object); // 0x882 NEW_2
	var_613_object = Obj(); var_614_object = Obj(); // 0x884 PushV
	var_613_object = var_590_object; // 0x885 Mov
	var_614_object = var_596_object; // 0x886 Mov
	TaskCall(11); // 0x887 TaskCall
	func_2207(var_615_object, var_616_object, var_617_string, var_618_bool, var_613_object, var_614_object); // 0x888 NEW_2
	TaskReturn(); // 0x889 TaskReturn
	IsDialogEnd(var_599_bool); // 0x88b ObjFunc
	
Label_2189:
	var_643_bool = var_599_bool == 0; // 0x88d Not
	if(var_643_bool == 0) goto Label_2196; // 0x88e JumpB
	sync(); // 0x88f Func
	IsDialogEnd(var_599_bool); // 0x891 ObjFunc
	goto Label_2189; // 0x893 Jump
	
Label_2196:
	var_644_object = Obj(); // 0x894 PushV
	var_644_object = var_590_object; // 0x895 Mov
	func_2693(); // 0x896 NEW_2
	StopDialog(var_596_object); // 0x898 Func
	GetReturnValue(var_598_int); // 0x89a ObjFunc
	var_589_int = var_598_int; // 0x89c Mov
	return 8; // 0x89d Return
}


func_2895()
{
	var_34_bool = 0; // 0xb4f PushV
	func_3018(var_34_bool); // 0xb50 NEW_2
	if(var_34_bool == 0) goto Label_2901; // 0xb52 JumpB
	lshStopSpeech(); // 0xb53 Func
	
Label_2901:
	return 0; // 0xb55 Return
}


func_3152(var_336_bool)
{
	var_338_int = 0; var_339_string = ""; // 0xc51 PushV
	var_339_string = "k3q03"; // 0xc52 MovS
	func_2918(var_338_int, var_339_string); // 0xc53 NEW_2
	var_340_int = 1; // 0xc55 PushI
	var_341_bool = var_338_int == var_340_int; // 0xc56 Eq
	if(var_341_bool == 0) goto Label_3162; // 0xc57 JumpB
	var_336_bool = 1; // 0xc58 MovB
	return 0; // 0xc59 Return
	
Label_3162:
	var_336_bool = 0; // 0xc5a MovB
	return 0; // 0xc5b Return
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_221_object, var_222_object)
{
	var_0_object = var_222_object; // 0x52 TMov
	var_1_object = var_221_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_227_int = 1; // 0x55 PushI
	if(var_227_int == 0) goto Label_109; // 0x56 JumpB
	var_228_string = ""; // 0x57 PushV
	var_228_string = "Neutral"; // 0x58 MovS
	func_139(var_222_object, var_228_string); // 0x59 NEW_2
	var_245_int = 525477; // 0x5b PushI
	SetMessage(var_245_int); // 0x5c TObjFunc
	ClearReplies(); // 0x5e TObjFunc
	var_246_int = 529299; // 0x60 PushI
	var_247_int = 30754; // 0x61 PushI
	var_248_int = 30753; // 0x62 PushI
	AddReply(var_246_int, var_247_int, var_248_int); // 0x63 TObjFunc
	var_249_int = 525478; // 0x65 PushI
	var_250_int = -1; // 0x66 PushI
	var_251_int = 26834; // 0x67 PushI
	AddReply(var_249_int, var_250_int, var_251_int); // 0x68 TObjFunc
	goto Label_109; // 0x6a Jump
	
Label_109:
	var_252_bool = 0; // 0x6d PushV
	func_3018(var_252_bool); // 0x6e NEW_2
	if(var_252_bool == 0) goto Label_124; // 0x70 JumpB
	
Label_113:
	lshWaitForAnimEnd(); // 0x71 Func
	var_253_string = var_3_string; // 0x73 PushT
	if(var_253_string == 0) goto Label_118; // 0x74 JumpB
	goto Label_123; // 0x75 Jump
	
Label_123:
	goto Label_138; // 0x7b Jump
	
Label_138:
	return 0; // 0x8a Return
	
Label_118:
	var_254_string = ""; // 0x76 PushV
	var_254_string = var_2_object; // 0x77 MovT
	func_2849(var_254_string); // 0x78 NEW_2
	goto Label_113; // 0x7a Jump
	
Label_124:
	var_265_string = "all"; // 0x7c PushS
	var_266_string = "idle"; // 0x7d PushS
	PlayAnimation(var_265_string, var_266_string); // 0x7e Func
	
Label_128:
	WaitForAnimEnd(); // 0x80 Func
	var_267_string = var_3_string; // 0x82 PushT
	if(var_267_string == 0) goto Label_133; // 0x83 JumpB
	goto Label_138; // 0x84 Jump
	
Label_133:
	var_268_string = "all"; // 0x85 PushS
	var_269_string = "idle"; // 0x86 PushS
	PlayAnimation(var_268_string, var_269_string); // 0x87 Func
	goto Label_128; // 0x89 Jump
}


func_2389()
{
	var_647_float = 0; var_648_float = 0; // 0x955 PushV
	var_649_int = 8; // 0x956 PushI
	var_650_int = 16; // 0x957 PushI
	rand(var_648_float, var_649_int, var_650_int); // 0x958 Func
	var_651_int = 10; // 0x95a PushI
	SetTimer(var_651_int, var_648_float); // 0x95b Func
	return 2; // 0x95d Return
}


func_2902(var_128_object)
{
	var_129_object = Obj(); var_130_object = Obj(); // 0xb56 PushV
	self(var_130_object); // 0xb57 Func
	var_128_object = var_130_object; // 0xb59 Mov
	return 2; // 0xb5a Return
}


func_3164(var_342_bool)
{
	var_344_int = 0; var_345_string = ""; // 0xc5d PushV
	var_345_string = "ook3Eva1"; // 0xc5e MovS
	func_2918(var_344_int, var_345_string); // 0xc5f NEW_2
	var_346_int = 0; // 0xc61 PushI
	var_347_bool = var_344_int == var_346_int; // 0xc62 Eq
	if(var_347_bool == 0) goto Label_3174; // 0xc63 JumpB
	var_342_bool = 1; // 0xc64 MovB
	return 0; // 0xc65 Return
	
Label_3174:
	var_342_bool = 0; // 0xc66 MovB
	return 0; // 0xc67 Return
}


func_1629(var_0_object, var_1_object, var_2_object, var_3_string, var_483_object, var_484_object)
{
	var_0_object = var_484_object; // 0x65e TMov
	var_1_object = var_483_object; // 0x65f TMov
	var_3_string = 0; // 0x660 TMovB
	var_489_int = 1; // 0x661 PushI
	if(var_489_int == 0) goto Label_1671; // 0x662 JumpB
	var_490_string = ""; // 0x663 PushV
	var_490_string = "Neutral"; // 0x664 MovS
	func_1701(var_484_object, var_490_string); // 0x665 NEW_2
	var_498_int = 527184; // 0x667 PushI
	SetMessage(var_498_int); // 0x668 TObjFunc
	ClearReplies(); // 0x66a TObjFunc
	var_499_bool = 0; // 0x66c PushV
	var_499_bool = 0; // 0x66d MovB
	var_500_bool = 0; var_501_object = Obj(); // 0x66e PushV
	var_501_object = var_1_object; // 0x66f MovT
	func_3224(var_501_object); // 0x670 NEW_2
	if(var_500_bool == 0) goto Label_1657; // 0x672 JumpB
	var_506_bool = 0; var_507_object = Obj(); // 0x673 PushV
	var_507_object = var_1_object; // 0x674 MovT
	func_3236(var_507_object); // 0x675 NEW_2
	if(var_506_bool == 0) goto Label_1657; // 0x677 JumpB
	var_499_bool = 1; // 0x678 MovB
	
Label_1657:
	if(var_499_bool == 0) goto Label_1663; // 0x679 JumpB
	var_512_int = 527185; // 0x67a PushI
	var_513_int = 28494; // 0x67b PushI
	var_514_int = 28493; // 0x67c PushI
	AddReply(var_512_int, var_513_int, var_514_int); // 0x67d TObjFunc
	
Label_1663:
	var_515_int = 527188; // 0x67f PushI
	var_516_int = -1; // 0x680 PushI
	var_517_int = 28496; // 0x681 PushI
	AddReply(var_515_int, var_516_int, var_517_int); // 0x682 TObjFunc
	goto Label_1671; // 0x684 Jump
	
Label_1671:
	var_518_bool = 0; // 0x687 PushV
	func_3018(var_518_bool); // 0x688 NEW_2
	if(var_518_bool == 0) goto Label_1686; // 0x68a JumpB
	
Label_1675:
	lshWaitForAnimEnd(); // 0x68b Func
	var_519_string = var_3_string; // 0x68d PushT
	if(var_519_string == 0) goto Label_1680; // 0x68e JumpB
	goto Label_1685; // 0x68f Jump
	
Label_1685:
	goto Label_1700; // 0x695 Jump
	
Label_1700:
	return 0; // 0x6a4 Return
	
Label_1680:
	var_520_string = ""; // 0x690 PushV
	var_520_string = var_2_object; // 0x691 MovT
	func_2849(var_520_string); // 0x692 NEW_2
	goto Label_1675; // 0x694 Jump
	
Label_1686:
	var_521_string = "all"; // 0x696 PushS
	var_522_string = "idle"; // 0x697 PushS
	PlayAnimation(var_521_string, var_522_string); // 0x698 Func
	
Label_1690:
	WaitForAnimEnd(); // 0x69a Func
	var_523_string = var_3_string; // 0x69c PushT
	if(var_523_string == 0) goto Label_1695; // 0x69d JumpB
	goto Label_1700; // 0x69e Jump
	
Label_1695:
	var_524_string = "all"; // 0x69f PushS
	var_525_string = "idle"; // 0x6a0 PushS
	PlayAnimation(var_524_string, var_525_string); // 0x6a1 Func
	goto Label_1690; // 0x6a3 Jump
}


func_2908(var_92_cvector, var_93_cvector)
{
	var_95_float = 0; var_96_float = 0; // 0xb5c PushV
	var_97_int = var_93_cvector | var_93_cvector; // 0xb5d Or
	var_96_float = sqrt(var_97_int); // 0xb5e Sqrt2
	var_98_float = 0.0; // 0xb5f PushF
	var_99_bool = var_96_float < var_98_float; // 0xb60 LT
	if(var_99_bool == 0) goto Label_2916; // 0xb61 JumpB
	var_92_cvector = CVector(0.0, 0.0, 0.0); // 0xb62 MovV
	return 2; // 0xb63 Return
	
Label_2916:
	var_92_cvector = var_93_cvector / var_93_cvector; // 0xb64 Div2
	return 2; // 0xb65 Return
}


func_3421(var_49_object)
{
	var_50_int = 0; var_51_int = 0; // 0xd5d PushV
	var_52_string = "mt_eva"; // 0xd5e PushS
	GetVariable(var_52_string, var_51_int); // 0xd5f Func
	var_53_bool = var_51_int == 0; // 0xd61 Not
	if(var_53_bool == 0) goto Label_3437; // 0xd62 JumpB
	var_54_int = 0; var_55_object = Obj(); // 0xd63 PushV
	var_55_object = var_49_object; // 0xd64 Mov
	TaskCall(0); // 0xd65 TaskCall
	func_0(var_56_object, var_54_int, var_55_object); // 0xd66 NEW_2
	TaskReturn(); // 0xd67 TaskReturn
	var_279_string = "mt_eva"; // 0xd69 PushS
	var_280_int = 1; // 0xd6a PushI
	SetVariable(var_279_string, var_280_int); // 0xd6b Func
	
Label_3437:
	var_281_bool = 0; var_282_int = 0; // 0xd6d PushV
	var_282_int = 3; // 0xd6e MovI
	func_2980(var_281_bool, var_282_int); // 0xd6f NEW_2
	if(var_281_bool == 0) goto Label_3449; // 0xd71 JumpB
	var_284_int = 0; var_285_object = Obj(); // 0xd72 PushV
	var_285_object = var_49_object; // 0xd73 Mov
	TaskCall(2); // 0xd74 TaskCall
	func_226(var_286_object, var_284_int, var_285_object); // 0xd75 NEW_2
	TaskReturn(); // 0xd76 TaskReturn
	return 2; // 0xd78 Return
	
Label_3449:
	var_367_bool = 0; var_368_int = 0; // 0xd79 PushV
	var_368_int = 6; // 0xd7a MovI
	func_2980(var_367_bool, var_368_int); // 0xd7b NEW_2
	if(var_367_bool == 0) goto Label_3461; // 0xd7d JumpB
	var_369_int = 0; var_370_object = Obj(); // 0xd7e PushV
	var_370_object = var_49_object; // 0xd7f Mov
	TaskCall(4); // 0xd80 TaskCall
	func_1065(var_371_object, var_369_int, var_370_object); // 0xd81 NEW_2
	TaskReturn(); // 0xd82 TaskReturn
	return 2; // 0xd84 Return
	
Label_3461:
	var_457_bool = 0; var_458_int = 0; // 0xd85 PushV
	var_458_int = 11; // 0xd86 MovI
	func_2980(var_457_bool, var_458_int); // 0xd87 NEW_2
	if(var_457_bool == 0) goto Label_3473; // 0xd89 JumpB
	var_459_int = 0; var_460_object = Obj(); // 0xd8a PushV
	var_460_object = var_49_object; // 0xd8b Mov
	TaskCall(6); // 0xd8c TaskCall
	func_1548(var_461_object, var_459_int, var_460_object); // 0xd8d NEW_2
	TaskReturn(); // 0xd8e TaskReturn
	return 2; // 0xd90 Return
	
Label_3473:
	var_528_bool = 0; var_529_int = 0; // 0xd91 PushV
	var_529_int = 12; // 0xd92 MovI
	func_2980(var_528_bool, var_529_int); // 0xd93 NEW_2
	if(var_528_bool == 0) goto Label_3485; // 0xd95 JumpB
	var_530_int = 0; var_531_object = Obj(); // 0xd96 PushV
	var_531_object = var_49_object; // 0xd97 Mov
	TaskCall(8); // 0xd98 TaskCall
	func_1867(var_532_object, var_530_int, var_531_object); // 0xd99 NEW_2
	TaskReturn(); // 0xd9a TaskReturn
	return 2; // 0xd9c Return
	
Label_3485:
	var_589_int = 0; var_590_object = Obj(); // 0xd9d PushV
	var_590_object = var_49_object; // 0xd9e Mov
	TaskCall(10); // 0xd9f TaskCall
	func_2126(var_591_object, var_589_int, var_590_object); // 0xda0 NEW_2
	TaskReturn(); // 0xda1 TaskReturn
	return 2; // 0xda3 Return
}


func_2398()
{
	var_646_int = 10; // 0x95e PushI
	KillTimer(var_646_int); // 0x95f Func
	return 0; // 0x961 Return
}


func_2918(var_326_int, var_327_string)
{
	var_328_int = 0; var_329_int = 0; // 0xb66 PushV
	GetVariable(var_327_string, var_329_int); // 0xb67 Func
	var_326_int = var_329_int; // 0xb69 Mov
	return 2; // 0xb6a Return
}


func_3176(var_410_bool)
{
	var_412_int = 0; var_413_string = ""; // 0xc69 PushV
	var_413_string = "k6q01"; // 0xc6a MovS
	func_2918(var_412_int, var_413_string); // 0xc6b NEW_2
	var_414_int = 1; // 0xc6d PushI
	var_415_bool = var_412_int == var_414_int; // 0xc6e Eq
	if(var_415_bool == 0) goto Label_3186; // 0xc6f JumpB
	var_410_bool = 1; // 0xc70 MovB
	return 0; // 0xc71 Return
	
Label_3186:
	var_410_bool = 0; // 0xc72 MovB
	return 0; // 0xc73 Return
}


func_2923(var_259_int, var_260_int)
{
	var_261_object = Obj(); var_262_object = Obj(); // 0xb6b PushV
	CreateIntVector(var_262_object); // 0xb6c Func
	add(var_259_int); // 0xb6e ObjFunc
	add(var_260_int); // 0xb70 ObjFunc
	var_263_int = 3; // 0xb72 PushI
	SendWorldWndMessage(var_263_int, var_262_object); // 0xb73 Func
	return 2; // 0xb75 Return
}


func_3188(var_416_bool)
{
	var_418_int = 0; var_419_string = ""; // 0xc75 PushV
	var_419_string = "ook6Eva1"; // 0xc76 MovS
	func_2918(var_418_int, var_419_string); // 0xc77 NEW_2
	var_420_int = 0; // 0xc79 PushI
	var_421_bool = var_418_int == var_420_int; // 0xc7a Eq
	if(var_421_bool == 0) goto Label_3198; // 0xc7b JumpB
	var_416_bool = 1; // 0xc7c MovB
	return 0; // 0xc7d Return
	
Label_3198:
	var_416_bool = 0; // 0xc7e MovB
	return 0; // 0xc7f Return
}


func_2935(var_246_object, var_247_int)
{
	var_248_int = 0; var_249_int = 0; // 0xb77 PushV
	var_250_object = Obj(); var_251_string = ""; var_252_int = 0; // 0xb78 PushV
	var_250_object = var_246_object; // 0xb79 Mov
	var_251_string = "money"; // 0xb7a MovS
	var_252_int = var_247_int; // 0xb7b Mov
	func_2593(var_251_string, var_252_int); // 0xb7c NEW_2
	var_256_int = 0; // 0xb7e PushI
	var_257_bool = var_247_int > var_256_int; // 0xb7f GT
	if(var_257_bool == 0) goto Label_2953; // 0xb80 JumpB
	var_258_string = "Money"; // 0xb81 PushS
	GetInvItemByName(var_249_int, var_258_string); // 0xb82 Func
	var_259_int = 0; var_260_int = 0; // 0xb84 PushV
	var_259_int = var_249_int; // 0xb85 Mov
	var_260_int = var_247_int; // 0xb86 Mov
	func_2923(var_259_int, var_260_int); // 0xb87 NEW_2
	
Label_2953:
	return 2; // 0xb89 Return
}


func_1146(var_0_object, var_1_object, var_2_object, var_3_string, var_393_object, var_394_object)
{
	var_0_object = var_394_object; // 0x47b TMov
	var_1_object = var_393_object; // 0x47c TMov
	var_3_string = 0; // 0x47d TMovB
	var_399_int = 1; // 0x47e PushI
	if(var_399_int == 0) goto Label_1212; // 0x47f JumpB
	var_400_string = ""; // 0x480 PushV
	var_400_string = "Fear"; // 0x481 MovS
	func_1242(var_394_object, var_400_string); // 0x482 NEW_2
	var_408_int = 526037; // 0x484 PushI
	SetMessage(var_408_int); // 0x485 TObjFunc
	ClearReplies(); // 0x487 TObjFunc
	var_409_bool = 0; // 0x489 PushV
	var_409_bool = 0; // 0x48a MovB
	var_410_bool = 0; var_411_object = Obj(); // 0x48b PushV
	var_411_object = var_1_object; // 0x48c MovT
	func_3176(var_411_object); // 0x48d NEW_2
	if(var_410_bool == 0) goto Label_1174; // 0x48f JumpB
	var_416_bool = 0; var_417_object = Obj(); // 0x490 PushV
	var_417_object = var_1_object; // 0x491 MovT
	func_3188(var_417_object); // 0x492 NEW_2
	if(var_416_bool == 0) goto Label_1174; // 0x494 JumpB
	var_409_bool = 1; // 0x495 MovB
	
Label_1174:
	if(var_409_bool == 0) goto Label_1180; // 0x496 JumpB
	var_422_int = 526038; // 0x497 PushI
	var_423_int = 30287; // 0x498 PushI
	var_424_int = 27323; // 0x499 PushI
	AddReply(var_422_int, var_423_int, var_424_int); // 0x49a TObjFunc
	
Label_1180:
	var_425_bool = 0; // 0x49c PushV
	var_425_bool = 0; // 0x49d MovB
	var_426_bool = 0; var_427_object = Obj(); // 0x49e PushV
	var_427_object = var_1_object; // 0x49f MovT
	func_3200(var_427_object); // 0x4a0 NEW_2
	if(var_426_bool == 0) goto Label_1193; // 0x4a2 JumpB
	var_432_bool = 0; var_433_object = Obj(); // 0x4a3 PushV
	var_433_object = var_1_object; // 0x4a4 MovT
	func_3212(var_433_object); // 0x4a5 NEW_2
	if(var_432_bool == 0) goto Label_1193; // 0x4a7 JumpB
	var_425_bool = 1; // 0x4a8 MovB
	
Label_1193:
	if(var_425_bool == 0) goto Label_1199; // 0x4a9 JumpB
	var_438_int = 526068; // 0x4aa PushI
	var_439_int = 27354; // 0x4ab PushI
	var_440_int = 27353; // 0x4ac PushI
	AddReply(var_438_int, var_439_int, var_440_int); // 0x4ad TObjFunc
	
Label_1199:
	var_441_int = 526043; // 0x4af PushI
	var_442_int = -1; // 0x4b0 PushI
	var_443_int = 27328; // 0x4b1 PushI
	AddReply(var_441_int, var_442_int, var_443_int); // 0x4b2 TObjFunc
	var_444_int = 528864; // 0x4b4 PushI
	var_445_int = -1; // 0x4b5 PushI
	var_446_int = 30286; // 0x4b6 PushI
	AddReply(var_444_int, var_445_int, var_446_int); // 0x4b7 TObjFunc
	goto Label_1212; // 0x4b9 Jump
	
Label_1212:
	var_447_bool = 0; // 0x4bc PushV
	func_3018(var_447_bool); // 0x4bd NEW_2
	if(var_447_bool == 0) goto Label_1227; // 0x4bf JumpB
	
Label_1216:
	lshWaitForAnimEnd(); // 0x4c0 Func
	var_448_string = var_3_string; // 0x4c2 PushT
	if(var_448_string == 0) goto Label_1221; // 0x4c3 JumpB
	goto Label_1226; // 0x4c4 Jump
	
Label_1226:
	goto Label_1241; // 0x4ca Jump
	
Label_1241:
	return 0; // 0x4d9 Return
	
Label_1221:
	var_449_string = ""; // 0x4c5 PushV
	var_449_string = var_2_object; // 0x4c6 MovT
	func_2849(var_449_string); // 0x4c7 NEW_2
	goto Label_1216; // 0x4c9 Jump
	
Label_1227:
	var_450_string = "all"; // 0x4cb PushS
	var_451_string = "idle"; // 0x4cc PushS
	PlayAnimation(var_450_string, var_451_string); // 0x4cd Func
	
Label_1231:
	WaitForAnimEnd(); // 0x4cf Func
	var_452_string = var_3_string; // 0x4d1 PushT
	if(var_452_string == 0) goto Label_1236; // 0x4d2 JumpB
	goto Label_1241; // 0x4d3 Jump
	
Label_1236:
	var_453_string = "all"; // 0x4d4 PushS
	var_454_string = "idle"; // 0x4d5 PushS
	PlayAnimation(var_453_string, var_454_string); // 0x4d6 Func
	goto Label_1231; // 0x4d8 Jump
}


func_3200(var_426_bool)
{
	var_428_int = 0; var_429_string = ""; // 0xc81 PushV
	var_429_string = "k6q01"; // 0xc82 MovS
	func_2918(var_428_int, var_429_string); // 0xc83 NEW_2
	var_430_int = 2; // 0xc85 PushI
	var_431_bool = var_428_int == var_430_int; // 0xc86 Eq
	if(var_431_bool == 0) goto Label_3210; // 0xc87 JumpB
	var_426_bool = 1; // 0xc88 MovB
	return 0; // 0xc89 Return
	
Label_3210:
	var_426_bool = 0; // 0xc8a MovB
	return 0; // 0xc8b Return
}


func_2693()
{
	var_272_bool = 0; var_273_bool = 0; // 0xa85 PushV
	var_274_bool = 1; // 0xa86 PushB
	CameraSwitchToNormal(var_274_bool); // 0xa87 Func
	var_275_bool = 0; // 0xa89 PushV
	func_3018(var_275_bool); // 0xa8a NEW_2
	if(var_275_bool == 0) goto Label_2702; // 0xa8c JumpB
	goto Label_2710; // 0xa8d Jump
	
Label_2710:
	return 2; // 0xa96 Return
	
Label_2702:
	var_276_string = "head"; // 0xa8e PushS
	HasAnimationTrack(var_273_bool, var_276_string); // 0xa8f Func
	var_277_bool = var_273_bool; // 0xa91 Push
	if(var_277_bool == 0) goto Label_2710; // 0xa92 JumpB
	var_278_string = "head"; // 0xa93 PushS
	UnlookAsync(var_278_string); // 0xa94 Func
}


func_394(var_2_object, var_315_string)
{
	var_316_bool = 0; // 0x18b PushV
	func_3018(var_316_bool); // 0x18c NEW_2
	var_317_bool = var_316_bool == 0; // 0x18e Not
	if(var_317_bool == 0) goto Label_401; // 0x18f JumpB
	return 0; // 0x190 Return
	
Label_401:
	var_318_bool = var_315_string == var_2_object; // 0x191 Eq
	if(var_318_bool == 0) goto Label_404; // 0x192 JumpB
	return 0; // 0x193 Return
	
Label_404:
	var_319_string = ""; var_320_bool = 0; // 0x194 PushV
	var_319_string = var_315_string; // 0x195 Mov
	var_321_string = ""; // 0x196 PushS
	var_322_bool = var_315_string == var_321_string; // 0x197 Eq
	if(var_322_bool == 0) goto Label_411; // 0x198 JumpB
	var_320_bool = 0; // 0x199 MovB
	goto Label_412; // 0x19a Jump
	
Label_412:
	func_2865(var_319_string, var_320_bool); // 0x19c NEW_2
	var_2_object = var_315_string; // 0x19e TMov
	return 0; // 0x19f Return
	
Label_411:
	var_320_bool = 1; // 0x19b MovB
}


func_139(var_2_object, var_228_string)
{
	var_229_bool = 0; // 0x8c PushV
	func_3018(var_229_bool); // 0x8d NEW_2
	var_230_bool = var_229_bool == 0; // 0x8f Not
	if(var_230_bool == 0) goto Label_146; // 0x90 JumpB
	return 0; // 0x91 Return
	
Label_146:
	var_231_bool = var_228_string == var_2_object; // 0x92 Eq
	if(var_231_bool == 0) goto Label_149; // 0x93 JumpB
	return 0; // 0x94 Return
	
Label_149:
	var_232_string = ""; var_233_bool = 0; // 0x95 PushV
	var_232_string = var_228_string; // 0x96 Mov
	var_234_string = ""; // 0x97 PushS
	var_235_bool = var_228_string == var_234_string; // 0x98 Eq
	if(var_235_bool == 0) goto Label_156; // 0x99 JumpB
	var_233_bool = 0; // 0x9a MovB
	goto Label_157; // 0x9b Jump
	
Label_157:
	func_2865(var_232_string, var_233_bool); // 0x9d NEW_2
	var_2_object = var_228_string; // 0x9f TMov
	return 0; // 0xa0 Return
	
Label_156:
	var_233_bool = 1; // 0x9c MovB
}


func_3212(var_432_bool)
{
	var_434_int = 0; var_435_string = ""; // 0xc8d PushV
	var_435_string = "ook6Eva2"; // 0xc8e MovS
	func_2918(var_434_int, var_435_string); // 0xc8f NEW_2
	var_436_int = 0; // 0xc91 PushI
	var_437_bool = var_434_int == var_436_int; // 0xc92 Eq
	if(var_437_bool == 0) goto Label_3222; // 0xc93 JumpB
	var_432_bool = 1; // 0xc94 MovB
	return 0; // 0xc95 Return
	
Label_3222:
	var_432_bool = 0; // 0xc96 MovB
	return 0; // 0xc97 Return
}


func_2954(var_82_bool, var_83_string, var_84_string)
{
	var_85_object = Obj(); var_86_object = Obj(); // 0xb8a PushV
	FindActor(var_86_object, var_83_string); // 0xb8b Func
	var_87_bool = var_86_object == 0; // 0xb8d NullEq
	if(var_87_bool == 0) goto Label_2961; // 0xb8e JumpB
	var_82_bool = 0; // 0xb8f MovB
	return 2; // 0xb90 Return
	
Label_2961:
	Trigger(var_86_object, var_84_string); // 0xb91 Func
	var_82_bool = 1; // 0xb93 MovB
	return 2; // 0xb94 Return
}


func_2966(var_129_float)
{
	var_130_float = 0; var_131_float = 0; // 0xb96 PushV
	GetGameTime(var_131_float); // 0xb97 Func
	var_129_float = var_131_float; // 0xb99 Mov
	return 2; // 0xb9a Return
}


func_2711(var_126_bool, var_127_object)
{
	var_131_int = 0; var_132_int = 0; var_133_int = 0; var_134_int = 0; // 0xa97 PushV
	var_135_string = "voice_common"; // 0xa98 PushS
	GetVariable(var_135_string, var_133_int); // 0xa99 Func
	var_136_int = var_133_int; // 0xa9b Push
	if(var_136_int == 0) goto Label_2749; // 0xa9c JumpB
	var_137_bool = 0; var_138_object = Obj(); // 0xa9d PushV
	var_138_object = var_127_object; // 0xa9e Mov
	func_2769(var_138_object); // 0xa9f NEW_2
	var_167_bool = var_137_bool == 0; // 0xaa1 Not
	if(var_167_bool == 0) goto Label_2731; // 0xaa2 JumpB
	var_168_bool = 0; var_169_object = Obj(); // 0xaa3 PushV
	var_169_object = var_127_object; // 0xaa4 Mov
	func_2806(var_169_object); // 0xaa5 NEW_2
	var_203_bool = var_168_bool == 0; // 0xaa7 Not
	if(var_203_bool == 0) goto Label_2731; // 0xaa8 JumpB
	var_126_bool = 0; // 0xaa9 MovB
	return 4; // 0xaaa Return
	
Label_2731:
	var_204_int = 2; // 0xaab PushI
	irand(var_134_int, var_204_int); // 0xaac Func
	var_205_int = var_134_int; // 0xaae Push
	if(var_205_int == 0) goto Label_2744; // 0xaaf JumpB
	var_206_string = "voice_common"; // 0xab0 PushS
	var_207_int = 1; // 0xab1 PushI
	var_208_int = var_133_int + var_207_int; // 0xab2 Add
	var_209_int = 3; // 0xab3 PushI
	var_210_int = var_208_int / var_209_int; // 0xab4 Mod
	SetVariable(var_206_string, var_210_int); // 0xab5 Func
	goto Label_2748; // 0xab7 Jump
	
Label_2748:
	goto Label_2767; // 0xabc Jump
	
Label_2767:
	var_126_bool = 1; // 0xacf MovB
	return 4; // 0xad0 Return
	
Label_2744:
	var_211_string = "voice_common"; // 0xab8 PushS
	var_212_int = 0; // 0xab9 PushI
	SetVariable(var_211_string, var_212_int); // 0xaba Func
	
Label_2749:
	var_213_bool = 0; var_214_object = Obj(); // 0xabd PushV
	var_214_object = var_127_object; // 0xabe Mov
	func_2806(var_214_object); // 0xabf NEW_2
	var_215_bool = var_213_bool == 0; // 0xac1 Not
	if(var_215_bool == 0) goto Label_2763; // 0xac2 JumpB
	var_216_bool = 0; var_217_object = Obj(); // 0xac3 PushV
	var_217_object = var_127_object; // 0xac4 Mov
	func_2769(var_217_object); // 0xac5 NEW_2
	var_218_bool = var_216_bool == 0; // 0xac7 Not
	if(var_218_bool == 0) goto Label_2763; // 0xac8 JumpB
	var_126_bool = 0; // 0xac9 MovB
	return 4; // 0xaca Return
	
Label_2763:
	var_219_string = "voice_common"; // 0xacb PushS
	var_220_int = 1; // 0xacc PushI
	SetVariable(var_219_string, var_220_int); // 0xacd Func
}


func_3224(var_500_bool)
{
	var_502_int = 0; var_503_string = ""; // 0xc99 PushV
	var_503_string = "k11q01"; // 0xc9a MovS
	func_2918(var_502_int, var_503_string); // 0xc9b NEW_2
	var_504_int = 1; // 0xc9d PushI
	var_505_bool = var_502_int == var_504_int; // 0xc9e Eq
	if(var_505_bool == 0) goto Label_3234; // 0xc9f JumpB
	var_500_bool = 1; // 0xca0 MovB
	return 0; // 0xca1 Return
	
Label_3234:
	var_500_bool = 0; // 0xca2 MovB
	return 0; // 0xca3 Return
}


func_2971(var_181_int)
{
	var_182_float = 0; var_183_float = 0; // 0xb9b PushV
	GetGameTime(var_183_float); // 0xb9c Func
	var_184_int = 1; // 0xb9e PushI
	var_185_int = 0; // 0xb9f PushV
	var_186_int = 24; // 0xba0 PushI
	var_185_int = var_183_float / var_183_float; // 0xba1 Div2
	var_181_int = var_184_int + var_185_int; // 0xba2 Add2
	return 2; // 0xba3 Return
}


func_1948(var_0_object, var_1_object, var_2_object, var_3_string, var_554_object, var_555_object)
{
	var_0_object = var_555_object; // 0x79d TMov
	var_1_object = var_554_object; // 0x79e TMov
	var_3_string = 0; // 0x79f TMovB
	var_560_int = 1; // 0x7a0 PushI
	if(var_560_int == 0) goto Label_1981; // 0x7a1 JumpB
	var_561_string = ""; // 0x7a2 PushV
	var_561_string = "Neutral"; // 0x7a3 MovS
	func_2011(var_555_object, var_561_string); // 0x7a4 NEW_2
	var_569_int = 535231; // 0x7a6 PushI
	SetMessage(var_569_int); // 0x7a7 TObjFunc
	ClearReplies(); // 0x7a9 TObjFunc
	var_570_int = 535232; // 0x7ab PushI
	var_571_int = 36953; // 0x7ac PushI
	var_572_int = 36907; // 0x7ad PushI
	AddReply(var_570_int, var_571_int, var_572_int); // 0x7ae TObjFunc
	var_573_int = 535233; // 0x7b0 PushI
	var_574_int = -1; // 0x7b1 PushI
	var_575_int = 36908; // 0x7b2 PushI
	AddReply(var_573_int, var_574_int, var_575_int); // 0x7b3 TObjFunc
	var_576_int = 535280; // 0x7b5 PushI
	var_577_int = -1; // 0x7b6 PushI
	var_578_int = 36956; // 0x7b7 PushI
	AddReply(var_576_int, var_577_int, var_578_int); // 0x7b8 TObjFunc
	goto Label_1981; // 0x7ba Jump
	
Label_1981:
	var_579_bool = 0; // 0x7bd PushV
	func_3018(var_579_bool); // 0x7be NEW_2
	if(var_579_bool == 0) goto Label_1996; // 0x7c0 JumpB
	
Label_1985:
	lshWaitForAnimEnd(); // 0x7c1 Func
	var_580_string = var_3_string; // 0x7c3 PushT
	if(var_580_string == 0) goto Label_1990; // 0x7c4 JumpB
	goto Label_1995; // 0x7c5 Jump
	
Label_1995:
	goto Label_2010; // 0x7cb Jump
	
Label_2010:
	return 0; // 0x7da Return
	
Label_1990:
	var_581_string = ""; // 0x7c6 PushV
	var_581_string = var_2_object; // 0x7c7 MovT
	func_2849(var_581_string); // 0x7c8 NEW_2
	goto Label_1985; // 0x7ca Jump
	
Label_1996:
	var_582_string = "all"; // 0x7cc PushS
	var_583_string = "idle"; // 0x7cd PushS
	PlayAnimation(var_582_string, var_583_string); // 0x7ce Func
	
Label_2000:
	WaitForAnimEnd(); // 0x7d0 Func
	var_584_string = var_3_string; // 0x7d2 PushT
	if(var_584_string == 0) goto Label_2005; // 0x7d3 JumpB
	goto Label_2010; // 0x7d4 Jump
	
Label_2005:
	var_585_string = "all"; // 0x7d5 PushS
	var_586_string = "idle"; // 0x7d6 PushS
	PlayAnimation(var_585_string, var_586_string); // 0x7d7 Func
	goto Label_2000; // 0x7d9 Jump
}


func_2207(var_0_object, var_1_object, var_2_object, var_3_string, var_613_object, var_614_object)
{
	var_0_object = var_614_object; // 0x8a0 TMov
	var_1_object = var_613_object; // 0x8a1 TMov
	var_3_string = 0; // 0x8a2 TMovB
	var_619_int = 1; // 0x8a3 PushI
	if(var_619_int == 0) goto Label_2235; // 0x8a4 JumpB
	var_620_string = ""; // 0x8a5 PushV
	var_620_string = "Neutral"; // 0x8a6 MovS
	func_2265(var_614_object, var_620_string); // 0x8a7 NEW_2
	var_628_int = 540539; // 0x8a9 PushI
	SetMessage(var_628_int); // 0x8aa TObjFunc
	ClearReplies(); // 0x8ac TObjFunc
	var_629_int = 540540; // 0x8ae PushI
	var_630_int = -1; // 0x8af PushI
	var_631_int = 42549; // 0x8b0 PushI
	AddReply(var_629_int, var_630_int, var_631_int); // 0x8b1 TObjFunc
	var_632_int = 540799; // 0x8b3 PushI
	var_633_int = -1; // 0x8b4 PushI
	var_634_int = 42848; // 0x8b5 PushI
	AddReply(var_632_int, var_633_int, var_634_int); // 0x8b6 TObjFunc
	goto Label_2235; // 0x8b8 Jump
	
Label_2235:
	var_635_bool = 0; // 0x8bb PushV
	func_3018(var_635_bool); // 0x8bc NEW_2
	if(var_635_bool == 0) goto Label_2250; // 0x8be JumpB
	
Label_2239:
	lshWaitForAnimEnd(); // 0x8bf Func
	var_636_string = var_3_string; // 0x8c1 PushT
	if(var_636_string == 0) goto Label_2244; // 0x8c2 JumpB
	goto Label_2249; // 0x8c3 Jump
	
Label_2249:
	goto Label_2264; // 0x8c9 Jump
	
Label_2264:
	return 0; // 0x8d8 Return
	
Label_2244:
	var_637_string = ""; // 0x8c4 PushV
	var_637_string = var_2_object; // 0x8c5 MovT
	func_2849(var_637_string); // 0x8c6 NEW_2
	goto Label_2239; // 0x8c8 Jump
	
Label_2250:
	var_638_string = "all"; // 0x8ca PushS
	var_639_string = "idle"; // 0x8cb PushS
	PlayAnimation(var_638_string, var_639_string); // 0x8cc Func
	
Label_2254:
	WaitForAnimEnd(); // 0x8ce Func
	var_640_string = var_3_string; // 0x8d0 PushT
	if(var_640_string == 0) goto Label_2259; // 0x8d1 JumpB
	goto Label_2264; // 0x8d2 Jump
	
Label_2259:
	var_641_string = "all"; // 0x8d3 PushS
	var_642_string = "idle"; // 0x8d4 PushS
	PlayAnimation(var_641_string, var_642_string); // 0x8d5 Func
	goto Label_2254; // 0x8d7 Jump
}


func_3236(var_506_bool)
{
	var_508_int = 0; var_509_string = ""; // 0xca5 PushV
	var_509_string = "ook11Eva1"; // 0xca6 MovS
	func_2918(var_508_int, var_509_string); // 0xca7 NEW_2
	var_510_int = 0; // 0xca9 PushI
	var_511_bool = var_508_int == var_510_int; // 0xcaa Eq
	if(var_511_bool == 0) goto Label_3246; // 0xcab JumpB
	var_506_bool = 1; // 0xcac MovB
	return 0; // 0xcad Return
	
Label_3246:
	var_506_bool = 0; // 0xcae MovB
	return 0; // 0xcaf Return
}


func_1701(var_2_object, var_490_string)
{
	var_491_bool = 0; // 0x6a6 PushV
	func_3018(var_491_bool); // 0x6a7 NEW_2
	var_492_bool = var_491_bool == 0; // 0x6a9 Not
	if(var_492_bool == 0) goto Label_1708; // 0x6aa JumpB
	return 0; // 0x6ab Return
	
Label_1708:
	var_493_bool = var_490_string == var_2_object; // 0x6ac Eq
	if(var_493_bool == 0) goto Label_1711; // 0x6ad JumpB
	return 0; // 0x6ae Return
	
Label_1711:
	var_494_string = ""; var_495_bool = 0; // 0x6af PushV
	var_494_string = var_490_string; // 0x6b0 Mov
	var_496_string = ""; // 0x6b1 PushS
	var_497_bool = var_490_string == var_496_string; // 0x6b2 Eq
	if(var_497_bool == 0) goto Label_1718; // 0x6b3 JumpB
	var_495_bool = 0; // 0x6b4 MovB
	goto Label_1719; // 0x6b5 Jump
	
Label_1719:
	func_2865(var_494_string, var_495_bool); // 0x6b7 NEW_2
	var_2_object = var_490_string; // 0x6b9 TMov
	return 0; // 0x6ba Return
	
Label_1718:
	var_495_bool = 1; // 0x6b6 MovB
}


func_2980(var_281_bool, var_282_int)
{
	var_283_int = 0; // 0xba5 PushV
	func_2971(var_283_int); // 0xba6 NEW_2
	var_281_bool = var_283_int == var_282_int; // 0xba8 Eq2
	return 0; // 0xba9 Return
}


func_2986(var_55_string, var_56_int)
{
	var_57_string = ""; var_58_string = ""; // 0xbaa PushV
	var_58_string = "idle"; // 0xbab MovS
	var_59_int = var_56_int; // 0xbac Push
	if(var_59_int == 0) goto Label_2991; // 0xbad JumpB
	var_58_string = var_58_string + var_56_int; // 0xbae Add2
	
Label_2991:
	var_55_string = var_58_string; // 0xbaf Mov
	return 2; // 0xbb0 Return
}


func_3248()
{
	var_45_object = Obj(); var_46_object = Obj(); // 0xcb0 PushV
	var_47_int = 482; // 0xcb1 PushI
	var_48_int = 1; // 0xcb2 PushI
	var_49_int = 528049; // 0xcb3 PushI
	CreateDiaryEntry(var_46_object, var_47_int, var_48_int, var_49_int); // 0xcb4 Func
	var_50_bool = 0; var_51_object = Obj(); var_52_int = 0; // 0xcb6 PushV
	var_51_object = var_46_object; // 0xcb7 Mov
	var_52_int = 480; // 0xcb8 MovI
	func_3326(var_50_bool, var_51_object, var_52_int); // 0xcb9 NEW_2
	return 2; // 0xcbb Return
}


func_2993(var_49_int)
{
	var_50_int = 0; var_51_bool = 0; var_52_int = 0; var_53_bool = 0; // 0xbb1 PushV
	var_52_int = 0; // 0xbb2 MovI
	
Label_2995:
	var_54_string = "all"; // 0xbb3 PushS
	var_55_string = ""; var_56_int = 0; // 0xbb4 PushV
	var_56_int = var_52_int; // 0xbb5 Mov
	func_2986(var_55_string, var_56_int); // 0xbb6 NEW_2
	HasAnimation(var_53_bool, var_54_string, var_55_string); // 0xbb8 Func
	var_60_bool = var_53_bool == 0; // 0xbba Not
	if(var_60_bool == 0) goto Label_3005; // 0xbbb JumpB
	goto Label_3008; // 0xbbc Jump
	
Label_3008:
	var_49_int = var_52_int; // 0xbc0 Mov
	return 4; // 0xbc1 Return
	
Label_3005:
	var_61_int = 1; // 0xbbd PushI
	var_52_int = var_52_int + var_61_int; // 0xbbe Add2
	goto Label_2995; // 0xbbf Jump
}


func_3261()
{
	var_82_object = Obj(); var_83_object = Obj(); // 0xcbd PushV
	var_84_int = 787; // 0xcbe PushI
	var_85_int = 2; // 0xcbf PushI
	var_86_int = 542506; // 0xcc0 PushI
	CreateDiaryEntry(var_83_object, var_84_int, var_85_int, var_86_int); // 0xcc1 Func
	var_87_bool = 0; var_88_object = Obj(); var_89_int = 0; // 0xcc3 PushV
	var_88_object = var_83_object; // 0xcc4 Mov
	var_89_int = 344; // 0xcc5 MovI
	func_3326(var_87_bool, var_88_object, var_89_int); // 0xcc6 NEW_2
	return 2; // 0xcc8 Return
}


func_3010(var_114_int)
{
	var_114_int = 515533; // 0xbc2 MovI
	return 0; // 0xbc3 Return
}


func_3012(var_113_int)
{
	var_113_int = 502858; // 0xbc4 MovI
	return 0; // 0xbc5 Return
}


func_3014(var_115_string)
{
	var_115_string = "ui/NPC_Eva.png"; // 0xbc6 MovS
	return 0; // 0xbc7 Return
}


func_3016(var_116_string)
{
	var_116_string = "ui/NPC_Eva_b.png"; // 0xbc8 MovS
	return 0; // 0xbc9 Return
}


func_3274()
{
	var_41_object = Obj(); var_42_object = Obj(); // 0xcca PushV
	var_43_int = 347; // 0xccb PushI
	var_44_int = 2; // 0xccc PushI
	var_45_int = 525569; // 0xccd PushI
	CreateDiaryEntry(var_42_object, var_43_int, var_44_int, var_45_int); // 0xcce Func
	var_46_bool = 0; var_47_object = Obj(); var_48_int = 0; // 0xcd0 PushV
	var_47_object = var_42_object; // 0xcd1 Mov
	var_48_int = 344; // 0xcd2 MovI
	func_3326(var_46_bool, var_47_object, var_48_int); // 0xcd3 NEW_2
	return 2; // 0xcd5 Return
}


func_3018(var_108_bool)
{
	var_108_bool = 1; // 0xbca MovB
	return 0; // 0xbcb Return
}


func_3020()
{
	var_116_object = Obj(); var_117_object = Obj(); // 0xbcc PushV
	var_118_object = Obj(); // 0xbcd PushV
	func_3354(var_118_object); // 0xbce NEW_2
	var_117_object = var_118_object; // 0xbcf Mov
	var_125_string = "k3q03EvaGotoSklad"; // 0xbd1 PushS
	var_126_string = "pt_region01_center01"; // 0xbd2 PushS
	var_127_int = 0; // 0xbd3 PushI
	var_128_int = 525574; // 0xbd4 PushI
	var_129_float = 0; // 0xbd5 PushV
	func_2966(var_129_float); // 0xbd6 NEW_2
	AddMark(var_125_string, var_126_string, var_127_int, var_128_int, var_129_float); // 0xbd8 ObjFunc
	return 2; // 0xbda Return
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
	func_2993(var_49_int); // 0x9d7 NEW_2
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
	func_2986(var_76_string, var_77_int); // 0x9fb NEW_2
	PlayAnimation(var_75_string, var_76_string); // 0x9fd Func
	WaitForAnimEnd(var_46_bool); // 0x9ff Func
	var_78_bool = var_46_bool == 0; // 0xa01 Not
	if(var_78_bool == 0) goto Label_2564; // 0xa02 JumpB
	goto Label_2575; // 0xa03 Jump
}


func_2769(var_137_bool)
{
	var_139_string = ""; var_140_int = 0; var_141_bool = 0; var_142_int = 0; var_143_string = ""; var_144_string = ""; var_145_int = 0; var_146_bool = 0; var_147_int = 0; var_148_string = ""; // 0xad1 PushV
	var_144_string = "c"; // 0xad2 MovS
	var_145_int = 0; // 0xad3 MovI
	
Label_2772:
	var_149_int = 1; // 0xad4 PushI
	if(var_149_int == 0) goto Label_2785; // 0xad5 JumpB
	var_150_int = 1; // 0xad6 PushI
	var_151_int = var_145_int + var_150_int; // 0xad7 Add
	var_152_int = var_144_string + var_151_int; // 0xad8 Add
	HasProperty(var_152_int, var_146_bool); // 0xad9 ObjFunc
	var_153_bool = var_146_bool == 0; // 0xadb Not
	if(var_153_bool == 0) goto Label_2782; // 0xadc JumpB
	goto Label_2785; // 0xadd Jump
	
Label_2785:
	var_154_bool = var_145_int == 0; // 0xae1 Not
	if(var_154_bool == 0) goto Label_2789; // 0xae2 JumpB
	var_137_bool = 0; // 0xae3 MovB
	return 10; // 0xae4 Return
	
Label_2789:
	var_147_int = 0; // 0xae5 MovI
	var_155_int = 1; // 0xae6 PushI
	var_156_bool = var_145_int > var_155_int; // 0xae7 GT
	if(var_156_bool == 0) goto Label_2795; // 0xae8 JumpB
	irand(var_147_int, var_145_int); // 0xae9 Func
	
Label_2795:
	var_157_int = 1; // 0xaeb PushI
	var_158_int = var_147_int + var_157_int; // 0xaec Add
	var_159_int = var_144_string + var_158_int; // 0xaed Add
	GetProperty(var_159_int, var_148_string); // 0xaee ObjFunc
	var_160_bool = 0; var_161_string = ""; // 0xaf0 PushV
	var_161_string = var_148_string; // 0xaf1 Mov
	func_2880(var_160_bool, var_161_string); // 0xaf2 NEW_2
	var_137_bool = var_160_bool; // 0xaf3 Mov
	return 10; // 0xaf5 Return
	
Label_2782:
	var_166_int = 1; // 0xade PushI
	var_145_int = var_145_int + var_166_int; // 0xadf Add2
	goto Label_2772; // 0xae0 Jump
}


func_3287()
{
	var_100_object = Obj(); var_101_object = Obj(); // 0xcd7 PushV
	var_102_int = 352; // 0xcd8 PushI
	var_103_int = 2; // 0xcd9 PushI
	var_104_int = 525618; // 0xcda PushI
	CreateDiaryEntry(var_101_object, var_102_int, var_103_int, var_104_int); // 0xcdb Func
	var_105_bool = 0; var_106_object = Obj(); var_107_int = 0; // 0xcdd PushV
	var_106_object = var_101_object; // 0xcde Mov
	var_107_int = 350; // 0xcdf MovI
	func_3326(var_105_bool, var_106_object, var_107_int); // 0xce0 NEW_2
	return 2; // 0xce2 Return
}


func_2265(var_2_object, var_620_string)
{
	var_621_bool = 0; // 0x8da PushV
	func_3018(var_621_bool); // 0x8db NEW_2
	var_622_bool = var_621_bool == 0; // 0x8dd Not
	if(var_622_bool == 0) goto Label_2272; // 0x8de JumpB
	return 0; // 0x8df Return
	
Label_2272:
	var_623_bool = var_620_string == var_2_object; // 0x8e0 Eq
	if(var_623_bool == 0) goto Label_2275; // 0x8e1 JumpB
	return 0; // 0x8e2 Return
	
Label_2275:
	var_624_string = ""; var_625_bool = 0; // 0x8e3 PushV
	var_624_string = var_620_string; // 0x8e4 Mov
	var_626_string = ""; // 0x8e5 PushS
	var_627_bool = var_620_string == var_626_string; // 0x8e6 Eq
	if(var_627_bool == 0) goto Label_2282; // 0x8e7 JumpB
	var_625_bool = 0; // 0x8e8 MovB
	goto Label_2283; // 0x8e9 Jump
	
Label_2283:
	func_2865(var_624_string, var_625_bool); // 0x8eb NEW_2
	var_2_object = var_620_string; // 0x8ed TMov
	return 0; // 0x8ee Return
	
Label_2282:
	var_625_bool = 1; // 0x8ea MovB
}


func_1242(var_2_object, var_400_string)
{
	var_401_bool = 0; // 0x4db PushV
	func_3018(var_401_bool); // 0x4dc NEW_2
	var_402_bool = var_401_bool == 0; // 0x4de Not
	if(var_402_bool == 0) goto Label_1249; // 0x4df JumpB
	return 0; // 0x4e0 Return
	
Label_1249:
	var_403_bool = var_400_string == var_2_object; // 0x4e1 Eq
	if(var_403_bool == 0) goto Label_1252; // 0x4e2 JumpB
	return 0; // 0x4e3 Return
	
Label_1252:
	var_404_string = ""; var_405_bool = 0; // 0x4e4 PushV
	var_404_string = var_400_string; // 0x4e5 Mov
	var_406_string = ""; // 0x4e6 PushS
	var_407_bool = var_400_string == var_406_string; // 0x4e7 Eq
	if(var_407_bool == 0) goto Label_1259; // 0x4e8 JumpB
	var_405_bool = 0; // 0x4e9 MovB
	goto Label_1260; // 0x4ea Jump
	
Label_1260:
	func_2865(var_404_string, var_405_bool); // 0x4ec NEW_2
	var_2_object = var_400_string; // 0x4ee TMov
	return 0; // 0x4ef Return
	
Label_1259:
	var_405_bool = 1; // 0x4eb MovB
}


func_2011(var_2_object, var_561_string)
{
	var_562_bool = 0; // 0x7dc PushV
	func_3018(var_562_bool); // 0x7dd NEW_2
	var_563_bool = var_562_bool == 0; // 0x7df Not
	if(var_563_bool == 0) goto Label_2018; // 0x7e0 JumpB
	return 0; // 0x7e1 Return
	
Label_2018:
	var_564_bool = var_561_string == var_2_object; // 0x7e2 Eq
	if(var_564_bool == 0) goto Label_2021; // 0x7e3 JumpB
	return 0; // 0x7e4 Return
	
Label_2021:
	var_565_string = ""; var_566_bool = 0; // 0x7e5 PushV
	var_565_string = var_561_string; // 0x7e6 Mov
	var_567_string = ""; // 0x7e7 PushS
	var_568_bool = var_561_string == var_567_string; // 0x7e8 Eq
	if(var_568_bool == 0) goto Label_2028; // 0x7e9 JumpB
	var_566_bool = 0; // 0x7ea MovB
	goto Label_2029; // 0x7eb Jump
	
Label_2029:
	func_2865(var_565_string, var_566_bool); // 0x7ed NEW_2
	var_2_object = var_561_string; // 0x7ef TMov
	return 0; // 0x7f0 Return
	
Label_2028:
	var_566_bool = 1; // 0x7ec MovB
}


func_3036()
{
	var_39_string = "k3q02"; // 0xbdd PushS
	var_40_int = 3; // 0xbde PushI
	SetVariable(var_39_string, var_40_int); // 0xbdf Func
	func_3274(); // 0xbe2 NEW_2
	return 0; // 0xbe4 Return
}


func_226(var_0_object, var_284_int, var_285_object)
{
	var_287_object = Obj(); var_288_bool = 0; var_289_int = 0; var_290_bool = 0; var_291_object = Obj(); var_292_bool = 0; var_293_int = 0; var_294_bool = 0; // 0xe2 PushV
	var_0_object = var_285_object; // 0xe3 TMov
	var_295_bool = 0; var_296_object = Obj(); var_297_float = 0; // 0xe4 PushV
	var_296_object = var_285_object; // 0xe5 Mov
	var_297_float = 70.0; // 0xe6 MovF
	func_2624(var_296_object, var_297_float); // 0xe7 NEW_2
	var_298_bool = var_295_bool == 0; // 0xe9 Not
	if(var_298_bool == 0) goto Label_237; // 0xea JumpB
	var_284_int = -2; // 0xeb MovI
	return 8; // 0xec Return
	
Label_237:
	CreateDialog(var_291_object); // 0xed Func
	var_299_int = 0; // 0xef PushV
	func_3012(var_299_int); // 0xf0 NEW_2
	SetNPCName(var_299_int); // 0xf2 ObjFunc
	var_300_int = 0; // 0xf4 PushV
	func_3010(var_300_int); // 0xf5 NEW_2
	SetNPCDescription(var_300_int); // 0xf7 ObjFunc
	var_301_string = ""; // 0xf9 PushV
	func_3014(var_301_string); // 0xfa NEW_2
	SetPhoto(var_301_string); // 0xfc ObjFunc
	var_302_string = ""; // 0xfe PushV
	func_3016(var_302_string); // 0xff NEW_2
	SetPhoto2(var_302_string); // 0x101 ObjFunc
	var_303_int = 0; // 0x103 PushV
	func_3404(var_303_int); // 0x104 NEW_2
	SetPlayerName(var_303_int); // 0x106 ObjFunc
	var_293_int = -1; // 0x108 MovI
	IsOverrideActive(var_292_bool); // 0x109 Func
	var_304_bool = var_292_bool; // 0x10b Push
	if(var_304_bool == 0) goto Label_271; // 0x10c JumpB
	var_284_int = -2; // 0x10d MovI
	return 8; // 0x10e Return
	
Label_271:
	DoDialog(var_291_object); // 0x10f Func
	var_305_bool = 0; var_306_object = Obj(); // 0x111 PushV
	var_307_object = Obj(); // 0x112 PushV
	func_2902(var_307_object); // 0x113 NEW_2
	var_306_object = var_307_object; // 0x114 Mov
	func_2711(var_305_bool, var_306_object); // 0x116 NEW_2
	var_308_object = Obj(); var_309_object = Obj(); // 0x118 PushV
	var_308_object = var_285_object; // 0x119 Mov
	var_309_object = var_291_object; // 0x11a Mov
	TaskCall(3); // 0x11b TaskCall
	func_307(var_310_object, var_311_object, var_312_string, var_313_bool, var_308_object, var_309_object); // 0x11c NEW_2
	TaskReturn(); // 0x11d TaskReturn
	IsDialogEnd(var_294_bool); // 0x11f ObjFunc
	
Label_289:
	var_365_bool = var_294_bool == 0; // 0x121 Not
	if(var_365_bool == 0) goto Label_296; // 0x122 JumpB
	sync(); // 0x123 Func
	IsDialogEnd(var_294_bool); // 0x125 ObjFunc
	goto Label_289; // 0x127 Jump
	
Label_296:
	var_366_object = Obj(); // 0x128 PushV
	var_366_object = var_285_object; // 0x129 Mov
	func_2693(); // 0x12a NEW_2
	StopDialog(var_291_object); // 0x12c Func
	GetReturnValue(var_293_int); // 0x12e ObjFunc
	var_284_int = var_293_int; // 0x130 Mov
	return 8; // 0x131 Return
}


func_3300()
{
	var_45_object = Obj(); var_46_object = Obj(); // 0xce4 PushV
	var_47_int = 410; // 0xce5 PushI
	var_48_int = 1; // 0xce6 PushI
	var_49_int = 526111; // 0xce7 PushI
	CreateDiaryEntry(var_46_object, var_47_int, var_48_int, var_49_int); // 0xce8 Func
	var_50_bool = 0; var_51_object = Obj(); var_52_int = 0; // 0xcea PushV
	var_51_object = var_46_object; // 0xceb Mov
	var_52_int = 408; // 0xcec MovI
	func_3326(var_50_bool, var_51_object, var_52_int); // 0xced NEW_2
	return 2; // 0xcef Return
}


func_3045()
{
	var_94_string = "ook3Eva1"; // 0xbe6 PushS
	var_95_int = 1; // 0xbe7 PushI
	SetVariable(var_94_string, var_95_int); // 0xbe8 Func
	return 0; // 0xbea Return
}


func_3051()
{
	func_3287(); // 0xbed NEW_2
	return 0; // 0xbef Return
}


func_3056()
{
	var_39_string = "ook6Eva1"; // 0xbf1 PushS
	var_40_int = 1; // 0xbf2 PushI
	SetVariable(var_39_string, var_40_int); // 0xbf3 Func
	return 0; // 0xbf5 Return
}


func_3313(var_59_object)
{
	var_60_object = Obj(); var_61_object = Obj(); // 0xcf1 PushV
	GetDiaryRoot(var_61_object); // 0xcf2 Func
	var_62_bool = var_61_object == 0; // 0xcf4 Not
	if(var_62_bool == 0) goto Label_3323; // 0xcf5 JumpB
	var_63_string = "Can't retrieve diary root"; // 0xcf6 PushS
	Trace(var_63_string); // 0xcf7 Func
	var_59_object = 0; // 0xcf9 MovB
	return 2; // 0xcfa Return
	
Label_3323:
	var_59_object = var_61_object; // 0xcfb Mov
	return 2; // 0xcfc Return
}


func_2806(var_168_bool)
{
	var_170_string = ""; var_171_int = 0; var_172_bool = 0; var_173_int = 0; var_174_string = ""; var_175_string = ""; var_176_int = 0; var_177_bool = 0; var_178_int = 0; var_179_string = ""; // 0xaf6 PushV
	var_180_string = "d"; // 0xaf7 PushS
	var_181_int = 0; // 0xaf8 PushV
	func_2971(var_181_int); // 0xaf9 NEW_2
	var_187_int = var_180_string + var_181_int; // 0xafb Add
	var_188_string = "m"; // 0xafc PushS
	var_175_string = var_187_int + var_188_string; // 0xafd Add2
	var_176_int = 0; // 0xafe MovI
	
Label_2815:
	var_189_int = 1; // 0xaff PushI
	if(var_189_int == 0) goto Label_2828; // 0xb00 JumpB
	var_190_int = 1; // 0xb01 PushI
	var_191_int = var_176_int + var_190_int; // 0xb02 Add
	var_192_int = var_175_string + var_191_int; // 0xb03 Add
	HasProperty(var_192_int, var_177_bool); // 0xb04 ObjFunc
	var_193_bool = var_177_bool == 0; // 0xb06 Not
	if(var_193_bool == 0) goto Label_2825; // 0xb07 JumpB
	goto Label_2828; // 0xb08 Jump
	
Label_2828:
	var_194_bool = var_176_int == 0; // 0xb0c Not
	if(var_194_bool == 0) goto Label_2832; // 0xb0d JumpB
	var_168_bool = 0; // 0xb0e MovB
	return 10; // 0xb0f Return
	
Label_2832:
	var_178_int = 0; // 0xb10 MovI
	var_195_int = 1; // 0xb11 PushI
	var_196_bool = var_176_int > var_195_int; // 0xb12 GT
	if(var_196_bool == 0) goto Label_2838; // 0xb13 JumpB
	irand(var_178_int, var_176_int); // 0xb14 Func
	
Label_2838:
	var_197_int = 1; // 0xb16 PushI
	var_198_int = var_178_int + var_197_int; // 0xb17 Add
	var_199_int = var_175_string + var_198_int; // 0xb18 Add
	GetProperty(var_199_int, var_179_string); // 0xb19 ObjFunc
	var_200_bool = 0; var_201_string = ""; // 0xb1b PushV
	var_201_string = var_179_string; // 0xb1c Mov
	func_2880(var_200_bool, var_201_string); // 0xb1d NEW_2
	var_168_bool = var_200_bool; // 0xb1e Mov
	return 10; // 0xb20 Return
	
Label_2825:
	var_202_int = 1; // 0xb09 PushI
	var_176_int = var_176_int + var_202_int; // 0xb0a Add2
	goto Label_2815; // 0xb0b Jump
}


func_3062()
{
	var_76_string = "ook6Eva2"; // 0xbf7 PushS
	var_77_int = 1; // 0xbf8 PushI
	SetVariable(var_76_string, var_77_int); // 0xbf9 Func
	return 0; // 0xbfb Return
}


func_3068()
{
	SelectWeapon(); // 0xbfd ObjFunc
	var_82_bool = 0; var_83_string = ""; var_84_string = ""; // 0xbff PushV
	var_83_string = "quest_k6_01"; // 0xc00 MovS
	var_84_string = "unlock_eva"; // 0xc01 MovS
	func_2954(var_82_bool, var_83_string, var_84_string); // 0xc02 NEW_2
	return 0; // 0xc04 Return
}


func_3326(var_50_bool, var_51_object, var_52_int)
{
	var_53_object = Obj(); var_54_object = Obj(); var_55_int = 0; var_56_object = Obj(); var_57_object = Obj(); var_58_int = 0; // 0xcfe PushV
	var_59_object = Obj(); // 0xcff PushV
	func_3313(var_59_object); // 0xd00 NEW_2
	var_56_object = var_59_object; // 0xd01 Mov
	Find(var_52_int, var_57_object); // 0xd03 ObjFunc
	var_64_bool = var_57_object == 0; // 0xd05 Not
	if(var_64_bool == 0) goto Label_3341; // 0xd06 JumpB
	var_65_string = "Can't find diary parent with id: "; // 0xd07 PushS
	var_66_int = var_65_string + var_52_int; // 0xd08 Add
	Trace(var_66_int); // 0xd09 Func
	var_50_bool = 0; // 0xd0b MovB
	return 6; // 0xd0c Return
	
Label_3341:
	AddChild(var_51_object); // 0xd0d ObjFunc
	var_67_int = 7; // 0xd0f PushI
	SendWorldWndMessage(var_67_int); // 0xd10 Func
	GetCategory(var_58_int); // 0xd12 ObjFunc
	SetDiarySection(var_58_int); // 0xd14 Func
	var_50_bool = 0; // 0xd16 MovB
	return 6; // 0xd17 Return
}


