task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_cvector)
{
	var_28_int = 1; // 0xa2 PushI
	if(var_28_int == 0) goto Label_225; // 0xa3 JumpB
	func_2254(); // 0xa5 NEW_2
	var_30_int = 19160; // 0xa7 PushI
	var_31_bool = var_26_bool == var_30_int; // 0xa8 Eq
	if(var_31_bool == 0) goto Label_190; // 0xa9 JumpB
	var_32_string = ""; // 0xaa PushV
	var_32_string = "Neutral"; // 0xab MovS
	func_139(var_27_cvector, var_32_string); // 0xac NEW_2
	var_49_int = 518027; // 0xae PushI
	SetMessage(var_49_int); // 0xaf TObjFunc
	ClearReplies(); // 0xb1 TObjFunc
	var_50_int = 518028; // 0xb3 PushI
	var_51_int = 29772; // 0xb4 PushI
	var_52_int = 19161; // 0xb5 PushI
	AddReply(var_50_int, var_51_int, var_52_int); // 0xb6 TObjFunc
	var_53_int = 528396; // 0xb8 PushI
	var_54_int = 29772; // 0xb9 PushI
	var_55_int = 29771; // 0xba PushI
	AddReply(var_53_int, var_54_int, var_55_int); // 0xbb TObjFunc
	return 0; // 0xbd Return
	
Label_190:
	var_56_int = 29772; // 0xbe PushI
	var_57_bool = var_26_bool == var_56_int; // 0xbf Eq
	if(var_57_bool == 0) goto Label_213; // 0xc0 JumpB
	var_58_string = ""; // 0xc1 PushV
	var_58_string = "Neutral"; // 0xc2 MovS
	func_139(var_27_cvector, var_58_string); // 0xc3 NEW_2
	var_59_int = 528397; // 0xc5 PushI
	SetMessage(var_59_int); // 0xc6 TObjFunc
	ClearReplies(); // 0xc8 TObjFunc
	var_60_int = 528398; // 0xca PushI
	var_61_int = -1; // 0xcb PushI
	var_62_int = 29773; // 0xcc PushI
	AddReply(var_60_int, var_61_int, var_62_int); // 0xcd TObjFunc
	var_63_int = 528399; // 0xcf PushI
	var_64_int = -1; // 0xd0 PushI
	var_65_int = 29774; // 0xd1 PushI
	AddReply(var_63_int, var_64_int, var_65_int); // 0xd2 TObjFunc
	return 0; // 0xd4 Return
	
Label_213:
	var_3_string = 1; // 0xd5 TMovB
	var_66_bool = 0; // 0xd6 PushV
	func_2395(var_66_bool); // 0xd7 NEW_2
	if(var_66_bool == 0) goto Label_221; // 0xd9 JumpB
	lshStopAnimation(); // 0xda Func
	goto Label_223; // 0xdc Jump
	
Label_223:
	return 0; // 0xdf Return
	
Label_221:
	StopAnimation(); // 0xdd Func
	
Label_225:
	return 0; // 0xe1 Return
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_cvector)
{
	var_28_int = 1; // 0x1b6 PushI
	if(var_28_int == 0) goto Label_803; // 0x1b7 JumpB
	func_2254(); // 0x1b9 NEW_2
	var_30_int = 22521; // 0x1bb PushI
	var_31_bool = var_27_cvector == var_30_int; // 0x1bc Eq
	if(var_31_bool == 0) goto Label_456; // 0x1bd JumpB
	var_32_object = Obj(); var_33_object = Obj(); // 0x1be PushV
	var_32_object = var_1_object; // 0x1bf MovT
	var_33_object = var_0_object; // 0x1c0 MovT
	func_2397(); // 0x1c1 NEW_2
	var_97_object = Obj(); var_98_object = Obj(); // 0x1c3 PushV
	var_97_object = var_1_object; // 0x1c4 MovT
	var_98_object = var_0_object; // 0x1c5 MovT
	func_2458(); // 0x1c6 NEW_2
	
Label_456:
	var_123_int = 22528; // 0x1c8 PushI
	var_124_bool = var_27_cvector == var_123_int; // 0x1c9 Eq
	if(var_124_bool == 0) goto Label_469; // 0x1ca JumpB
	var_125_object = Obj(); var_126_object = Obj(); // 0x1cb PushV
	var_125_object = var_1_object; // 0x1cc MovT
	var_126_object = var_0_object; // 0x1cd MovT
	func_2397(); // 0x1ce NEW_2
	var_127_object = Obj(); var_128_object = Obj(); // 0x1d0 PushV
	var_127_object = var_1_object; // 0x1d1 MovT
	var_128_object = var_0_object; // 0x1d2 MovT
	func_2458(); // 0x1d3 NEW_2
	
Label_469:
	var_129_int = 22525; // 0x1d5 PushI
	var_130_bool = var_27_cvector == var_129_int; // 0x1d6 Eq
	if(var_130_bool == 0) goto Label_477; // 0x1d7 JumpB
	var_131_object = Obj(); var_132_object = Obj(); // 0x1d8 PushV
	var_131_object = var_1_object; // 0x1d9 MovT
	var_132_object = var_0_object; // 0x1da MovT
	func_2432(); // 0x1db NEW_2
	
Label_477:
	var_135_int = 22530; // 0x1dd PushI
	var_136_bool = var_27_cvector == var_135_int; // 0x1de Eq
	if(var_136_bool == 0) goto Label_495; // 0x1df JumpB
	var_137_object = Obj(); var_138_object = Obj(); // 0x1e0 PushV
	var_137_object = var_1_object; // 0x1e1 MovT
	var_138_object = var_0_object; // 0x1e2 MovT
	func_2444(); // 0x1e3 NEW_2
	var_154_object = Obj(); var_155_object = Obj(); // 0x1e5 PushV
	var_154_object = var_1_object; // 0x1e6 MovT
	var_155_object = var_0_object; // 0x1e7 MovT
	func_2492(var_155_object); // 0x1e8 NEW_2
	var_175_object = Obj(); var_176_object = Obj(); // 0x1ea PushV
	var_175_object = var_1_object; // 0x1eb MovT
	var_176_object = var_0_object; // 0x1ec MovT
	func_2502(); // 0x1ed NEW_2
	
Label_495:
	var_179_int = 29751; // 0x1ef PushI
	var_180_bool = var_27_cvector == var_179_int; // 0x1f0 Eq
	if(var_180_bool == 0) goto Label_513; // 0x1f1 JumpB
	var_181_object = Obj(); var_182_object = Obj(); // 0x1f2 PushV
	var_181_object = var_1_object; // 0x1f3 MovT
	var_182_object = var_0_object; // 0x1f4 MovT
	func_2444(); // 0x1f5 NEW_2
	var_183_object = Obj(); var_184_object = Obj(); // 0x1f7 PushV
	var_183_object = var_1_object; // 0x1f8 MovT
	var_184_object = var_0_object; // 0x1f9 MovT
	func_2492(var_184_object); // 0x1fa NEW_2
	var_185_object = Obj(); var_186_object = Obj(); // 0x1fc PushV
	var_185_object = var_1_object; // 0x1fd MovT
	var_186_object = var_0_object; // 0x1fe MovT
	func_2502(); // 0x1ff NEW_2
	
Label_513:
	var_187_int = 22520; // 0x201 PushI
	var_188_bool = var_26_bool == var_187_int; // 0x202 Eq
	if(var_188_bool == 0) goto Label_586; // 0x203 JumpB
	var_189_bool = 0; var_190_object = Obj(); // 0x204 PushV
	var_190_object = var_1_object; // 0x205 MovT
	func_2532(var_190_object); // 0x206 NEW_2
	var_197_bool = var_189_bool == 0; // 0x208 Not
	if(var_197_bool == 0) goto Label_542; // 0x209 JumpB
	var_198_object = Obj(); var_199_object = Obj(); // 0x20a PushV
	var_198_object = var_1_object; // 0x20b MovT
	var_199_object = var_0_object; // 0x20c MovT
	func_2438(); // 0x20d NEW_2
	var_202_string = ""; // 0x20f PushV
	var_202_string = "Neutral"; // 0x210 MovS
	func_415(var_27_cvector, var_202_string); // 0x211 NEW_2
	var_219_int = 521326; // 0x213 PushI
	SetMessage(var_219_int); // 0x214 TObjFunc
	ClearReplies(); // 0x216 TObjFunc
	var_220_int = 528379; // 0x218 PushI
	var_221_int = 29753; // 0x219 PushI
	var_222_int = 29752; // 0x21a PushI
	AddReply(var_220_int, var_221_int, var_222_int); // 0x21b TObjFunc
	return 0; // 0x21d Return
	
Label_542:
	var_223_string = ""; // 0x21e PushV
	var_223_string = "Neutral"; // 0x21f MovS
	func_415(var_27_cvector, var_223_string); // 0x220 NEW_2
	var_224_int = 521329; // 0x222 PushI
	SetMessage(var_224_int); // 0x223 TObjFunc
	ClearReplies(); // 0x225 TObjFunc
	var_225_bool = 0; var_226_object = Obj(); // 0x227 PushV
	var_226_object = var_1_object; // 0x228 MovT
	func_2520(var_226_object); // 0x229 NEW_2
	if(var_225_bool == 0) goto Label_561; // 0x22b JumpB
	var_231_int = 521330; // 0x22c PushI
	var_232_int = 22527; // 0x22d PushI
	var_233_int = 22524; // 0x22e PushI
	AddReply(var_231_int, var_232_int, var_233_int); // 0x22f TObjFunc
	
Label_561:
	var_234_bool = 0; // 0x231 PushV
	var_234_bool = 0; // 0x232 MovB
	var_235_bool = 0; var_236_object = Obj(); // 0x233 PushV
	var_236_object = var_1_object; // 0x234 MovT
	func_2544(var_235_bool, var_236_object); // 0x235 NEW_2
	if(var_235_bool == 0) goto Label_574; // 0x237 JumpB
	var_244_bool = 0; var_245_object = Obj(); // 0x238 PushV
	var_245_object = var_1_object; // 0x239 MovT
	func_2508(var_245_object); // 0x23a NEW_2
	if(var_244_bool == 0) goto Label_574; // 0x23c JumpB
	var_234_bool = 1; // 0x23d MovB
	
Label_574:
	if(var_234_bool == 0) goto Label_580; // 0x23e JumpB
	var_250_int = 521331; // 0x23f PushI
	var_251_int = 22529; // 0x240 PushI
	var_252_int = 22525; // 0x241 PushI
	AddReply(var_250_int, var_251_int, var_252_int); // 0x242 TObjFunc
	
Label_580:
	var_253_int = 521332; // 0x244 PushI
	var_254_int = -1; // 0x245 PushI
	var_255_int = 22526; // 0x246 PushI
	AddReply(var_253_int, var_254_int, var_255_int); // 0x247 TObjFunc
	return 0; // 0x249 Return
	
Label_586:
	var_256_int = 22529; // 0x24a PushI
	var_257_bool = var_26_bool == var_256_int; // 0x24b Eq
	if(var_257_bool == 0) goto Label_609; // 0x24c JumpB
	var_258_string = ""; // 0x24d PushV
	var_258_string = "Neutral"; // 0x24e MovS
	func_415(var_27_cvector, var_258_string); // 0x24f NEW_2
	var_259_int = 521335; // 0x251 PushI
	SetMessage(var_259_int); // 0x252 TObjFunc
	ClearReplies(); // 0x254 TObjFunc
	var_260_int = 521336; // 0x256 PushI
	var_261_int = -1; // 0x257 PushI
	var_262_int = 22530; // 0x258 PushI
	AddReply(var_260_int, var_261_int, var_262_int); // 0x259 TObjFunc
	var_263_int = 528376; // 0x25b PushI
	var_264_int = 29750; // 0x25c PushI
	var_265_int = 29749; // 0x25d PushI
	AddReply(var_263_int, var_264_int, var_265_int); // 0x25e TObjFunc
	return 0; // 0x260 Return
	
Label_609:
	var_266_int = 29750; // 0x261 PushI
	var_267_bool = var_26_bool == var_266_int; // 0x262 Eq
	if(var_267_bool == 0) goto Label_627; // 0x263 JumpB
	var_268_string = ""; // 0x264 PushV
	var_268_string = "Angry"; // 0x265 MovS
	func_415(var_27_cvector, var_268_string); // 0x266 NEW_2
	var_269_int = 528377; // 0x268 PushI
	SetMessage(var_269_int); // 0x269 TObjFunc
	ClearReplies(); // 0x26b TObjFunc
	var_270_int = 528378; // 0x26d PushI
	var_271_int = -1; // 0x26e PushI
	var_272_int = 29751; // 0x26f PushI
	AddReply(var_270_int, var_271_int, var_272_int); // 0x270 TObjFunc
	return 0; // 0x272 Return
	
Label_627:
	var_273_int = 22527; // 0x273 PushI
	var_274_bool = var_26_bool == var_273_int; // 0x274 Eq
	if(var_274_bool == 0) goto Label_645; // 0x275 JumpB
	var_275_string = ""; // 0x276 PushV
	var_275_string = "Staring"; // 0x277 MovS
	func_415(var_27_cvector, var_275_string); // 0x278 NEW_2
	var_276_int = 521333; // 0x27a PushI
	SetMessage(var_276_int); // 0x27b TObjFunc
	ClearReplies(); // 0x27d TObjFunc
	var_277_int = 528374; // 0x27f PushI
	var_278_int = 29748; // 0x280 PushI
	var_279_int = 29747; // 0x281 PushI
	AddReply(var_277_int, var_278_int, var_279_int); // 0x282 TObjFunc
	return 0; // 0x284 Return
	
Label_645:
	var_280_int = 29748; // 0x285 PushI
	var_281_bool = var_26_bool == var_280_int; // 0x286 Eq
	if(var_281_bool == 0) goto Label_663; // 0x287 JumpB
	var_282_string = ""; // 0x288 PushV
	var_282_string = "Staring"; // 0x289 MovS
	func_415(var_27_cvector, var_282_string); // 0x28a NEW_2
	var_283_int = 528375; // 0x28c PushI
	SetMessage(var_283_int); // 0x28d TObjFunc
	ClearReplies(); // 0x28f TObjFunc
	var_284_int = 521334; // 0x291 PushI
	var_285_int = -1; // 0x292 PushI
	var_286_int = 22528; // 0x293 PushI
	AddReply(var_284_int, var_285_int, var_286_int); // 0x294 TObjFunc
	return 0; // 0x296 Return
	
Label_663:
	var_287_int = 29753; // 0x297 PushI
	var_288_bool = var_26_bool == var_287_int; // 0x298 Eq
	if(var_288_bool == 0) goto Label_681; // 0x299 JumpB
	var_289_string = ""; // 0x29a PushV
	var_289_string = "Neutral"; // 0x29b MovS
	func_415(var_27_cvector, var_289_string); // 0x29c NEW_2
	var_290_int = 528380; // 0x29e PushI
	SetMessage(var_290_int); // 0x29f TObjFunc
	ClearReplies(); // 0x2a1 TObjFunc
	var_291_int = 528381; // 0x2a3 PushI
	var_292_int = 29755; // 0x2a4 PushI
	var_293_int = 29754; // 0x2a5 PushI
	AddReply(var_291_int, var_292_int, var_293_int); // 0x2a6 TObjFunc
	return 0; // 0x2a8 Return
	
Label_681:
	var_294_int = 29755; // 0x2a9 PushI
	var_295_bool = var_26_bool == var_294_int; // 0x2aa Eq
	if(var_295_bool == 0) goto Label_704; // 0x2ab JumpB
	var_296_string = ""; // 0x2ac PushV
	var_296_string = "Staring"; // 0x2ad MovS
	func_415(var_27_cvector, var_296_string); // 0x2ae NEW_2
	var_297_int = 528382; // 0x2b0 PushI
	SetMessage(var_297_int); // 0x2b1 TObjFunc
	ClearReplies(); // 0x2b3 TObjFunc
	var_298_int = 528383; // 0x2b5 PushI
	var_299_int = 29757; // 0x2b6 PushI
	var_300_int = 29756; // 0x2b7 PushI
	AddReply(var_298_int, var_299_int, var_300_int); // 0x2b8 TObjFunc
	var_301_int = 528386; // 0x2ba PushI
	var_302_int = 29760; // 0x2bb PushI
	var_303_int = 29759; // 0x2bc PushI
	AddReply(var_301_int, var_302_int, var_303_int); // 0x2bd TObjFunc
	return 0; // 0x2bf Return
	
Label_704:
	var_304_int = 29760; // 0x2c0 PushI
	var_305_bool = var_26_bool == var_304_int; // 0x2c1 Eq
	if(var_305_bool == 0) goto Label_722; // 0x2c2 JumpB
	var_306_string = ""; // 0x2c3 PushV
	var_306_string = "Staring"; // 0x2c4 MovS
	func_415(var_27_cvector, var_306_string); // 0x2c5 NEW_2
	var_307_int = 528387; // 0x2c7 PushI
	SetMessage(var_307_int); // 0x2c8 TObjFunc
	ClearReplies(); // 0x2ca TObjFunc
	var_308_int = 528388; // 0x2cc PushI
	var_309_int = 29762; // 0x2cd PushI
	var_310_int = 29761; // 0x2ce PushI
	AddReply(var_308_int, var_309_int, var_310_int); // 0x2cf TObjFunc
	return 0; // 0x2d1 Return
	
Label_722:
	var_311_int = 29762; // 0x2d2 PushI
	var_312_bool = var_26_bool == var_311_int; // 0x2d3 Eq
	if(var_312_bool == 0) goto Label_750; // 0x2d4 JumpB
	var_313_string = ""; // 0x2d5 PushV
	var_313_string = "Staring"; // 0x2d6 MovS
	func_415(var_27_cvector, var_313_string); // 0x2d7 NEW_2
	var_314_int = 528389; // 0x2d9 PushI
	SetMessage(var_314_int); // 0x2da TObjFunc
	ClearReplies(); // 0x2dc TObjFunc
	var_315_int = 528390; // 0x2de PushI
	var_316_int = 29757; // 0x2df PushI
	var_317_int = 29763; // 0x2e0 PushI
	AddReply(var_315_int, var_316_int, var_317_int); // 0x2e1 TObjFunc
	var_318_int = 528391; // 0x2e3 PushI
	var_319_int = 29765; // 0x2e4 PushI
	var_320_int = 29764; // 0x2e5 PushI
	AddReply(var_318_int, var_319_int, var_320_int); // 0x2e6 TObjFunc
	var_321_int = 528394; // 0x2e8 PushI
	var_322_int = -1; // 0x2e9 PushI
	var_323_int = 29768; // 0x2ea PushI
	AddReply(var_321_int, var_322_int, var_323_int); // 0x2eb TObjFunc
	return 0; // 0x2ed Return
	
Label_750:
	var_324_int = 29765; // 0x2ee PushI
	var_325_bool = var_26_bool == var_324_int; // 0x2ef Eq
	if(var_325_bool == 0) goto Label_768; // 0x2f0 JumpB
	var_326_string = ""; // 0x2f1 PushV
	var_326_string = "Neutral"; // 0x2f2 MovS
	func_415(var_27_cvector, var_326_string); // 0x2f3 NEW_2
	var_327_int = 528392; // 0x2f5 PushI
	SetMessage(var_327_int); // 0x2f6 TObjFunc
	ClearReplies(); // 0x2f8 TObjFunc
	var_328_int = 528393; // 0x2fa PushI
	var_329_int = 29757; // 0x2fb PushI
	var_330_int = 29766; // 0x2fc PushI
	AddReply(var_328_int, var_329_int, var_330_int); // 0x2fd TObjFunc
	return 0; // 0x2ff Return
	
Label_768:
	var_331_int = 29757; // 0x300 PushI
	var_332_bool = var_26_bool == var_331_int; // 0x301 Eq
	if(var_332_bool == 0) goto Label_791; // 0x302 JumpB
	var_333_string = ""; // 0x303 PushV
	var_333_string = "Staring"; // 0x304 MovS
	func_415(var_27_cvector, var_333_string); // 0x305 NEW_2
	var_334_int = 528384; // 0x307 PushI
	SetMessage(var_334_int); // 0x308 TObjFunc
	ClearReplies(); // 0x30a TObjFunc
	var_335_int = 521327; // 0x30c PushI
	var_336_int = -1; // 0x30d PushI
	var_337_int = 22521; // 0x30e PushI
	AddReply(var_335_int, var_336_int, var_337_int); // 0x30f TObjFunc
	var_338_int = 528395; // 0x311 PushI
	var_339_int = -1; // 0x312 PushI
	var_340_int = 29770; // 0x313 PushI
	AddReply(var_338_int, var_339_int, var_340_int); // 0x314 TObjFunc
	return 0; // 0x316 Return
	
Label_791:
	var_3_string = 1; // 0x317 TMovB
	var_341_bool = 0; // 0x318 PushV
	func_2395(var_341_bool); // 0x319 NEW_2
	if(var_341_bool == 0) goto Label_799; // 0x31b JumpB
	lshStopAnimation(); // 0x31c Func
	goto Label_801; // 0x31e Jump
	
Label_801:
	return 0; // 0x321 Return
	
Label_799:
	StopAnimation(); // 0x31f Func
	
Label_803:
	return 0; // 0x323 Return
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_cvector)
{
	var_28_int = 1; // 0x3e9 PushI
	if(var_28_int == 0) goto Label_1225; // 0x3ea JumpB
	func_2254(); // 0x3ec NEW_2
	var_30_int = 24381; // 0x3ee PushI
	var_31_bool = var_27_cvector == var_30_int; // 0x3ef Eq
	if(var_31_bool == 0) goto Label_1019; // 0x3f0 JumpB
	var_32_object = Obj(); var_33_object = Obj(); // 0x3f1 PushV
	var_32_object = var_1_object; // 0x3f2 MovT
	var_33_object = var_0_object; // 0x3f3 MovT
	func_2474(); // 0x3f4 NEW_2
	var_36_object = Obj(); var_37_object = Obj(); // 0x3f6 PushV
	var_36_object = var_1_object; // 0x3f7 MovT
	var_37_object = var_0_object; // 0x3f8 MovT
	func_2486(); // 0x3f9 NEW_2
	
Label_1019:
	var_40_int = 24390; // 0x3fb PushI
	var_41_bool = var_27_cvector == var_40_int; // 0x3fc Eq
	if(var_41_bool == 0) goto Label_1027; // 0x3fd JumpB
	var_42_object = Obj(); var_43_object = Obj(); // 0x3fe PushV
	var_42_object = var_1_object; // 0x3ff MovT
	var_43_object = var_0_object; // 0x400 MovT
	func_2480(); // 0x401 NEW_2
	
Label_1027:
	var_46_int = 24380; // 0x403 PushI
	var_47_bool = var_26_bool == var_46_int; // 0x404 Eq
	if(var_47_bool == 0) goto Label_1085; // 0x405 JumpB
	var_48_string = ""; // 0x406 PushV
	var_48_string = "Neutral"; // 0x407 MovS
	func_978(var_27_cvector, var_48_string); // 0x408 NEW_2
	var_65_int = 523177; // 0x40a PushI
	SetMessage(var_65_int); // 0x40b TObjFunc
	ClearReplies(); // 0x40d TObjFunc
	var_66_bool = 0; var_67_object = Obj(); // 0x40f PushV
	var_67_object = var_1_object; // 0x410 MovT
	func_2579(var_67_object); // 0x411 NEW_2
	if(var_66_bool == 0) goto Label_1049; // 0x413 JumpB
	var_74_int = 523178; // 0x414 PushI
	var_75_int = 24382; // 0x415 PushI
	var_76_int = 24381; // 0x416 PushI
	AddReply(var_74_int, var_75_int, var_76_int); // 0x417 TObjFunc
	
Label_1049:
	var_77_bool = 0; // 0x419 PushV
	var_77_bool = 0; // 0x41a MovB
	var_78_bool = 0; // 0x41b PushV
	var_78_bool = 0; // 0x41c MovB
	var_79_bool = 0; var_80_object = Obj(); // 0x41d PushV
	var_80_object = var_1_object; // 0x41e MovT
	func_2555(var_80_object); // 0x41f NEW_2
	var_85_bool = var_79_bool == 0; // 0x421 Not
	if(var_85_bool == 0) goto Label_1066; // 0x422 JumpB
	var_86_bool = 0; var_87_object = Obj(); // 0x423 PushV
	var_87_object = var_1_object; // 0x424 MovT
	func_2567(var_87_object); // 0x425 NEW_2
	var_92_bool = var_86_bool == 0; // 0x427 Not
	if(var_92_bool == 0) goto Label_1066; // 0x428 JumpB
	var_78_bool = 1; // 0x429 MovB
	
Label_1066:
	if(var_78_bool == 0) goto Label_1073; // 0x42a JumpB
	var_93_bool = 0; var_94_object = Obj(); // 0x42b PushV
	var_94_object = var_1_object; // 0x42c MovT
	func_2591(var_94_object); // 0x42d NEW_2
	if(var_93_bool == 0) goto Label_1073; // 0x42f JumpB
	var_77_bool = 1; // 0x430 MovB
	
Label_1073:
	if(var_77_bool == 0) goto Label_1079; // 0x431 JumpB
	var_99_int = 523187; // 0x432 PushI
	var_100_int = 42102; // 0x433 PushI
	var_101_int = 24390; // 0x434 PushI
	AddReply(var_99_int, var_100_int, var_101_int); // 0x435 TObjFunc
	
Label_1079:
	var_102_int = 523186; // 0x437 PushI
	var_103_int = -1; // 0x438 PushI
	var_104_int = 24389; // 0x439 PushI
	AddReply(var_102_int, var_103_int, var_104_int); // 0x43a TObjFunc
	return 0; // 0x43c Return
	
Label_1085:
	var_105_int = 42102; // 0x43d PushI
	var_106_bool = var_26_bool == var_105_int; // 0x43e Eq
	if(var_106_bool == 0) goto Label_1103; // 0x43f JumpB
	var_107_string = ""; // 0x440 PushV
	var_107_string = "Rage"; // 0x441 MovS
	func_978(var_27_cvector, var_107_string); // 0x442 NEW_2
	var_108_int = 540130; // 0x444 PushI
	SetMessage(var_108_int); // 0x445 TObjFunc
	ClearReplies(); // 0x447 TObjFunc
	var_109_int = 540131; // 0x449 PushI
	var_110_int = 24391; // 0x44a PushI
	var_111_int = 42103; // 0x44b PushI
	AddReply(var_109_int, var_110_int, var_111_int); // 0x44c TObjFunc
	return 0; // 0x44e Return
	
Label_1103:
	var_112_int = 24391; // 0x44f PushI
	var_113_bool = var_26_bool == var_112_int; // 0x450 Eq
	if(var_113_bool == 0) goto Label_1121; // 0x451 JumpB
	var_114_string = ""; // 0x452 PushV
	var_114_string = "Rage"; // 0x453 MovS
	func_978(var_27_cvector, var_114_string); // 0x454 NEW_2
	var_115_int = 523188; // 0x456 PushI
	SetMessage(var_115_int); // 0x457 TObjFunc
	ClearReplies(); // 0x459 TObjFunc
	var_116_int = 523189; // 0x45b PushI
	var_117_int = -1; // 0x45c PushI
	var_118_int = 24392; // 0x45d PushI
	AddReply(var_116_int, var_117_int, var_118_int); // 0x45e TObjFunc
	return 0; // 0x460 Return
	
Label_1121:
	var_119_int = 24382; // 0x461 PushI
	var_120_bool = var_26_bool == var_119_int; // 0x462 Eq
	if(var_120_bool == 0) goto Label_1144; // 0x463 JumpB
	var_121_string = ""; // 0x464 PushV
	var_121_string = "Angry"; // 0x465 MovS
	func_978(var_27_cvector, var_121_string); // 0x466 NEW_2
	var_122_int = 523179; // 0x468 PushI
	SetMessage(var_122_int); // 0x469 TObjFunc
	ClearReplies(); // 0x46b TObjFunc
	var_123_int = 523180; // 0x46d PushI
	var_124_int = 24384; // 0x46e PushI
	var_125_int = 24383; // 0x46f PushI
	AddReply(var_123_int, var_124_int, var_125_int); // 0x470 TObjFunc
	var_126_int = 540132; // 0x472 PushI
	var_127_int = -1; // 0x473 PushI
	var_128_int = 42104; // 0x474 PushI
	AddReply(var_126_int, var_127_int, var_128_int); // 0x475 TObjFunc
	return 0; // 0x477 Return
	
Label_1144:
	var_129_int = 24384; // 0x478 PushI
	var_130_bool = var_26_bool == var_129_int; // 0x479 Eq
	if(var_130_bool == 0) goto Label_1167; // 0x47a JumpB
	var_131_string = ""; // 0x47b PushV
	var_131_string = "Rage"; // 0x47c MovS
	func_978(var_27_cvector, var_131_string); // 0x47d NEW_2
	var_132_int = 523181; // 0x47f PushI
	SetMessage(var_132_int); // 0x480 TObjFunc
	ClearReplies(); // 0x482 TObjFunc
	var_133_int = 523182; // 0x484 PushI
	var_134_int = 24386; // 0x485 PushI
	var_135_int = 24385; // 0x486 PushI
	AddReply(var_133_int, var_134_int, var_135_int); // 0x487 TObjFunc
	var_136_int = 540133; // 0x489 PushI
	var_137_int = -1; // 0x48a PushI
	var_138_int = 42105; // 0x48b PushI
	AddReply(var_136_int, var_137_int, var_138_int); // 0x48c TObjFunc
	return 0; // 0x48e Return
	
Label_1167:
	var_139_int = 24386; // 0x48f PushI
	var_140_bool = var_26_bool == var_139_int; // 0x490 Eq
	if(var_140_bool == 0) goto Label_1190; // 0x491 JumpB
	var_141_string = ""; // 0x492 PushV
	var_141_string = "Rage"; // 0x493 MovS
	func_978(var_27_cvector, var_141_string); // 0x494 NEW_2
	var_142_int = 523183; // 0x496 PushI
	SetMessage(var_142_int); // 0x497 TObjFunc
	ClearReplies(); // 0x499 TObjFunc
	var_143_int = 523184; // 0x49b PushI
	var_144_int = 24388; // 0x49c PushI
	var_145_int = 24387; // 0x49d PushI
	AddReply(var_143_int, var_144_int, var_145_int); // 0x49e TObjFunc
	var_146_int = 540134; // 0x4a0 PushI
	var_147_int = -1; // 0x4a1 PushI
	var_148_int = 42106; // 0x4a2 PushI
	AddReply(var_146_int, var_147_int, var_148_int); // 0x4a3 TObjFunc
	return 0; // 0x4a5 Return
	
Label_1190:
	var_149_int = 24388; // 0x4a6 PushI
	var_150_bool = var_26_bool == var_149_int; // 0x4a7 Eq
	if(var_150_bool == 0) goto Label_1213; // 0x4a8 JumpB
	var_151_string = ""; // 0x4a9 PushV
	var_151_string = "Rage"; // 0x4aa MovS
	func_978(var_27_cvector, var_151_string); // 0x4ab NEW_2
	var_152_int = 523185; // 0x4ad PushI
	SetMessage(var_152_int); // 0x4ae TObjFunc
	ClearReplies(); // 0x4b0 TObjFunc
	var_153_int = 523190; // 0x4b2 PushI
	var_154_int = -1; // 0x4b3 PushI
	var_155_int = 24393; // 0x4b4 PushI
	AddReply(var_153_int, var_154_int, var_155_int); // 0x4b5 TObjFunc
	var_156_int = 523191; // 0x4b7 PushI
	var_157_int = -1; // 0x4b8 PushI
	var_158_int = 24394; // 0x4b9 PushI
	AddReply(var_156_int, var_157_int, var_158_int); // 0x4ba TObjFunc
	return 0; // 0x4bc Return
	
Label_1213:
	var_3_string = 1; // 0x4bd TMovB
	var_159_bool = 0; // 0x4be PushV
	func_2395(var_159_bool); // 0x4bf NEW_2
	if(var_159_bool == 0) goto Label_1221; // 0x4c1 JumpB
	lshStopAnimation(); // 0x4c2 Func
	goto Label_1223; // 0x4c4 Jump
	
Label_1223:
	return 0; // 0x4c7 Return
	
Label_1221:
	StopAnimation(); // 0x4c5 Func
	
Label_1225:
	return 0; // 0x4c9 Return
}


task_7_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_cvector)
{
	var_28_int = 1; // 0x571 PushI
	if(var_28_int == 0) goto Label_1484; // 0x572 JumpB
	func_2254(); // 0x574 NEW_2
	var_30_int = 36906; // 0x576 PushI
	var_31_bool = var_26_bool == var_30_int; // 0x577 Eq
	if(var_31_bool == 0) goto Label_1426; // 0x578 JumpB
	var_32_string = ""; // 0x579 PushV
	var_32_string = "Neutral"; // 0x57a MovS
	func_1370(var_27_cvector, var_32_string); // 0x57b NEW_2
	var_49_int = 535231; // 0x57d PushI
	SetMessage(var_49_int); // 0x57e TObjFunc
	ClearReplies(); // 0x580 TObjFunc
	var_50_int = 535232; // 0x582 PushI
	var_51_int = 36953; // 0x583 PushI
	var_52_int = 36907; // 0x584 PushI
	AddReply(var_50_int, var_51_int, var_52_int); // 0x585 TObjFunc
	var_53_int = 535233; // 0x587 PushI
	var_54_int = -1; // 0x588 PushI
	var_55_int = 36908; // 0x589 PushI
	AddReply(var_53_int, var_54_int, var_55_int); // 0x58a TObjFunc
	var_56_int = 535280; // 0x58c PushI
	var_57_int = -1; // 0x58d PushI
	var_58_int = 36956; // 0x58e PushI
	AddReply(var_56_int, var_57_int, var_58_int); // 0x58f TObjFunc
	return 0; // 0x591 Return
	
Label_1426:
	var_59_int = 36953; // 0x592 PushI
	var_60_bool = var_26_bool == var_59_int; // 0x593 Eq
	if(var_60_bool == 0) goto Label_1449; // 0x594 JumpB
	var_61_string = ""; // 0x595 PushV
	var_61_string = "Neutral"; // 0x596 MovS
	func_1370(var_27_cvector, var_61_string); // 0x597 NEW_2
	var_62_int = 535277; // 0x599 PushI
	SetMessage(var_62_int); // 0x59a TObjFunc
	ClearReplies(); // 0x59c TObjFunc
	var_63_int = 535278; // 0x59e PushI
	var_64_int = 36957; // 0x59f PushI
	var_65_int = 36954; // 0x5a0 PushI
	AddReply(var_63_int, var_64_int, var_65_int); // 0x5a1 TObjFunc
	var_66_int = 535279; // 0x5a3 PushI
	var_67_int = 36957; // 0x5a4 PushI
	var_68_int = 36955; // 0x5a5 PushI
	AddReply(var_66_int, var_67_int, var_68_int); // 0x5a6 TObjFunc
	return 0; // 0x5a8 Return
	
Label_1449:
	var_69_int = 36957; // 0x5a9 PushI
	var_70_bool = var_26_bool == var_69_int; // 0x5aa Eq
	if(var_70_bool == 0) goto Label_1472; // 0x5ab JumpB
	var_71_string = ""; // 0x5ac PushV
	var_71_string = "Neutral"; // 0x5ad MovS
	func_1370(var_27_cvector, var_71_string); // 0x5ae NEW_2
	var_72_int = 535281; // 0x5b0 PushI
	SetMessage(var_72_int); // 0x5b1 TObjFunc
	ClearReplies(); // 0x5b3 TObjFunc
	var_73_int = 535282; // 0x5b5 PushI
	var_74_int = -1; // 0x5b6 PushI
	var_75_int = 36958; // 0x5b7 PushI
	AddReply(var_73_int, var_74_int, var_75_int); // 0x5b8 TObjFunc
	var_76_int = 535283; // 0x5ba PushI
	var_77_int = -1; // 0x5bb PushI
	var_78_int = 36959; // 0x5bc PushI
	AddReply(var_76_int, var_77_int, var_78_int); // 0x5bd TObjFunc
	return 0; // 0x5bf Return
	
Label_1472:
	var_3_string = 1; // 0x5c0 TMovB
	var_79_bool = 0; // 0x5c1 PushV
	func_2395(var_79_bool); // 0x5c2 NEW_2
	if(var_79_bool == 0) goto Label_1480; // 0x5c4 JumpB
	lshStopAnimation(); // 0x5c5 Func
	goto Label_1482; // 0x5c7 Jump
	
Label_1482:
	return 0; // 0x5ca Return
	
Label_1480:
	StopAnimation(); // 0x5c8 Func
	
Label_1484:
	return 0; // 0x5cc Return
}


task_9_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_int, var_26_int, var_27_cvector)
{
	var_28_int = 1; // 0x66f PushI
	if(var_28_int == 0) goto Label_1687; // 0x670 JumpB
	func_2254(); // 0x672 NEW_2
	var_30_int = 42560; // 0x674 PushI
	var_31_bool = var_26_int == var_30_int; // 0x675 Eq
	if(var_31_bool == 0) goto Label_1675; // 0x676 JumpB
	var_32_string = ""; // 0x677 PushV
	var_32_string = "Neutral"; // 0x678 MovS
	func_1624(var_27_cvector, var_32_string); // 0x679 NEW_2
	var_49_int = 540551; // 0x67b PushI
	SetMessage(var_49_int); // 0x67c TObjFunc
	ClearReplies(); // 0x67e TObjFunc
	var_50_int = 540552; // 0x680 PushI
	var_51_int = -1; // 0x681 PushI
	var_52_int = 42561; // 0x682 PushI
	AddReply(var_50_int, var_51_int, var_52_int); // 0x683 TObjFunc
	var_53_int = 540795; // 0x685 PushI
	var_54_int = -1; // 0x686 PushI
	var_55_int = 42844; // 0x687 PushI
	AddReply(var_53_int, var_54_int, var_55_int); // 0x688 TObjFunc
	return 0; // 0x68a Return
	
Label_1675:
	var_3_string = 1; // 0x68b TMovB
	var_56_bool = 0; // 0x68c PushV
	func_2395(var_56_bool); // 0x68d NEW_2
	if(var_56_bool == 0) goto Label_1683; // 0x68f JumpB
	lshStopAnimation(); // 0x690 Func
	goto Label_1685; // 0x692 Jump
	
Label_1685:
	return 0; // 0x695 Return
	
Label_1683:
	StopAnimation(); // 0x693 Func
	
Label_1687:
	return 0; // 0x697 Return
}


task_10_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_cvector, var_26_int)
{
	var_27_int = 10; // 0x6e2 PushI
	var_28_bool = var_26_int == var_27_int; // 0x6e3 Eq
	if(var_28_bool == 0) goto Label_1798; // 0x6e4 JumpB
	func_1757(); // 0x6e6 NEW_2
	var_30_bool = 0; // 0x6e8 PushV
	var_30_bool = 0; // 0x6e9 MovB
	var_31_bool = 0; // 0x6ea PushV
	func_1978(var_31_bool); // 0x6eb NEW_2
	if(var_31_bool == 0) goto Label_1779; // 0x6ed JumpB
	var_34_bool = 0; // 0x6ee PushV
	func_1726(var_34_bool); // 0x6ef NEW_2
	if(var_34_bool == 0) goto Label_1779; // 0x6f1 JumpB
	var_30_bool = 1; // 0x6f2 MovB
	
Label_1779:
	if(var_30_bool == 0) goto Label_1792; // 0x6f3 JumpB
	var_51_bool = 0; // 0x6f4 PushV
	func_1706(var_51_bool); // 0x6f5 NEW_2
	if(var_51_bool == 0) goto Label_1791; // 0x6f7 JumpB
	var_70_bool = 0; var_71_object = Obj(); // 0x6f8 PushV
	var_72_object = Obj(); // 0x6f9 PushV
	func_2261(var_72_object); // 0x6fa NEW_2
	var_71_object = var_72_object; // 0x6fb Mov
	func_2128(var_71_object); // 0x6fd NEW_2
	
Label_1791:
	goto Label_1798; // 0x6ff Jump
	
Label_1798:
	return 0; // 0x706 Return
	
Label_1792:
	func_1721(var_26_int); // 0x701 NEW_2
	func_1748(); // 0x704 NEW_2
}


task_10_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_cvector)
{
	func_1939(); // 0x708 NEW_2
	func_1757(); // 0x70b NEW_2
	lshStopSpeech(); // 0x70d Func
	lshStopAnimation(); // 0x70f Func
	StopAsync(); // 0x711 Func
	Hold(); // 0x713 Func
	return 0; // 0x715 Return
}


task_10_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_cvector)
{
	StopGroup0(); // 0x716 Func
	func_1757(); // 0x719 NEW_2
	var_27_string = ""; // 0x71b PushV
	var_27_string = "Neutral"; // 0x71c MovS
	func_2208(var_27_string); // 0x71d NEW_2
	func_1748(); // 0x720 NEW_2
	return 0; // 0x722 Return
}


task_10_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_cvector, var_26_bool)
{
	var_27_bool = var_26_bool; // 0x724 Push
	if(var_27_bool == 0) goto Label_1834; // 0x725 JumpB
	func_1748(); // 0x727 NEW_2
	goto Label_1838; // 0x729 Jump
	
Label_1838:
	return 0; // 0x72e Return
	
Label_1834:
	var_33_string = ""; // 0x72a PushV
	var_33_string = "Neutral"; // 0x72b MovS
	func_2208(var_33_string); // 0x72c NEW_2
}


task_10_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_cvector, var_26_object)
{
	var_27_bool = 0; var_28_bool = 0; // 0x72f PushV
	IsOverrideActive(var_28_bool); // 0x730 Func
	var_29_bool = var_28_bool == 0; // 0x732 Not
	if(var_29_bool == 0) goto Label_1867; // 0x733 JumpB
	EventDisable(0); // 0x734 EventDisable
	func_1939(); // 0x736 NEW_2
	var_30_bool = 0; var_31_object = Obj(); // 0x738 PushV
	var_31_object = var_26_object; // 0x739 Mov
	func_1969(var_31_object); // 0x73a NEW_2
	EventEnable(0); // 0x73c EventEnable
	var_44_object = Obj(); // 0x73d PushV
	var_44_object = var_26_object; // 0x73e Mov
	func_2756(var_44_object); // 0x73f NEW_2
	var_594_string = ""; // 0x741 PushV
	var_594_string = "Neutral"; // 0x742 MovS
	func_2208(var_594_string); // 0x743 NEW_2
	func_1757(); // 0x746 NEW_2
	func_1748(); // 0x749 NEW_2
	
Label_1867:
	return 2; // 0x74b Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_cvector)
{
	func_1692(var_25_cvector); // 0x699 NEW_2
	return 0; // 0x69b Return
}


func_0(var_0_object, var_51_int, var_52_object)
{
	var_54_object = Obj(); var_55_bool = 0; var_56_int = 0; var_57_bool = 0; var_58_object = Obj(); var_59_bool = 0; var_60_int = 0; var_61_bool = 0; // 0x0 PushV
	var_0_object = var_52_object; // 0x1 TMov
	var_62_bool = 0; var_63_object = Obj(); var_64_float = 0; // 0x2 PushV
	var_63_object = var_52_object; // 0x3 Mov
	var_64_float = 70.0; // 0x4 MovF
	func_1983(var_63_object, var_64_float); // 0x5 NEW_2
	var_109_bool = var_62_bool == 0; // 0x7 Not
	if(var_109_bool == 0) goto Label_11; // 0x8 JumpB
	var_51_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_58_object); // 0xb Func
	var_110_int = 0; // 0xd PushV
	func_2389(var_110_int); // 0xe NEW_2
	SetNPCName(var_110_int); // 0x10 ObjFunc
	var_111_int = 0; // 0x12 PushV
	func_2387(var_111_int); // 0x13 NEW_2
	SetNPCDescription(var_111_int); // 0x15 ObjFunc
	var_112_string = ""; // 0x17 PushV
	func_2391(var_112_string); // 0x18 NEW_2
	SetPhoto(var_112_string); // 0x1a ObjFunc
	var_113_string = ""; // 0x1c PushV
	func_2393(var_113_string); // 0x1d NEW_2
	SetPhoto2(var_113_string); // 0x1f ObjFunc
	var_114_int = 0; // 0x21 PushV
	func_2733(var_114_int); // 0x22 NEW_2
	SetPlayerName(var_114_int); // 0x24 ObjFunc
	var_60_int = -1; // 0x26 MovI
	IsOverrideActive(var_59_bool); // 0x27 Func
	var_122_bool = var_59_bool; // 0x29 Push
	if(var_122_bool == 0) goto Label_45; // 0x2a JumpB
	var_51_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_58_object); // 0x2d Func
	var_123_bool = 0; var_124_object = Obj(); // 0x2f PushV
	var_125_object = Obj(); // 0x30 PushV
	func_2261(var_125_object); // 0x31 NEW_2
	var_124_object = var_125_object; // 0x32 Mov
	func_2070(var_123_bool, var_124_object); // 0x34 NEW_2
	var_218_object = Obj(); var_219_object = Obj(); // 0x36 PushV
	var_218_object = var_52_object; // 0x37 Mov
	var_219_object = var_58_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_220_object, var_221_object, var_222_string, var_223_bool, var_218_object, var_219_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	IsDialogEnd(var_61_bool); // 0x3d ObjFunc
	
Label_63:
	var_267_bool = var_61_bool == 0; // 0x3f Not
	if(var_267_bool == 0) goto Label_70; // 0x40 JumpB
	sync(); // 0x41 Func
	IsDialogEnd(var_61_bool); // 0x43 ObjFunc
	goto Label_63; // 0x45 Jump
	
Label_70:
	var_268_object = Obj(); // 0x46 PushV
	var_268_object = var_52_object; // 0x47 Mov
	func_2052(); // 0x48 NEW_2
	StopDialog(var_58_object); // 0x4a Func
	GetReturnValue(var_60_int); // 0x4c ObjFunc
	var_51_int = var_60_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_2305(var_157_object, var_158_int)
{
	var_159_int = 0; var_160_int = 0; // 0x901 PushV
	var_161_object = Obj(); var_162_string = ""; var_163_int = 0; // 0x902 PushV
	var_161_object = var_157_object; // 0x903 Mov
	var_162_string = "money"; // 0x904 MovS
	var_163_int = var_158_int; // 0x905 Mov
	func_1952(var_162_string, var_163_int); // 0x906 NEW_2
	var_167_int = 0; // 0x908 PushI
	var_168_bool = var_158_int > var_167_int; // 0x909 GT
	if(var_168_bool == 0) goto Label_2323; // 0x90a JumpB
	var_169_string = "Money"; // 0x90b PushS
	GetInvItemByName(var_160_int, var_169_string); // 0x90c Func
	var_170_int = 0; var_171_int = 0; // 0x90e PushV
	var_170_int = var_160_int; // 0x90f Mov
	var_171_int = var_158_int; // 0x910 Mov
	func_2293(var_170_int, var_171_int); // 0x911 NEW_2
	
Label_2323:
	return 2; // 0x913 Return
}


func_2052()
{
	var_269_bool = 0; var_270_bool = 0; // 0x804 PushV
	var_271_bool = 1; // 0x805 PushB
	CameraSwitchToNormal(var_271_bool); // 0x806 Func
	var_272_bool = 0; // 0x808 PushV
	func_2395(var_272_bool); // 0x809 NEW_2
	if(var_272_bool == 0) goto Label_2061; // 0x80b JumpB
	goto Label_2069; // 0x80c Jump
	
Label_2069:
	return 2; // 0x815 Return
	
Label_2061:
	var_273_string = "head"; // 0x80d PushS
	HasAnimationTrack(var_270_bool, var_273_string); // 0x80e Func
	var_274_bool = var_270_bool; // 0x810 Push
	if(var_274_bool == 0) goto Label_2069; // 0x811 JumpB
	var_275_string = "head"; // 0x812 PushS
	UnlookAsync(var_275_string); // 0x813 Func
}


func_2567(var_446_bool)
{
	var_448_int = 0; var_449_string = ""; // 0xa08 PushV
	var_449_string = "game_final"; // 0xa09 MovS
	func_2277(var_448_int, var_449_string); // 0xa0a NEW_2
	var_450_int = 0; // 0xa0c PushI
	var_451_bool = var_448_int == var_450_int; // 0xa0d Eq
	if(var_451_bool == 0) goto Label_2577; // 0xa0e JumpB
	var_446_bool = 1; // 0xa0f MovB
	return 0; // 0xa10 Return
	
Label_2577:
	var_446_bool = 0; // 0xa11 MovB
	return 0; // 0xa12 Return
}


func_2579(var_428_bool)
{
	var_430_int = 0; var_431_string = ""; // 0xa14 PushV
	var_431_string = "oob12Maria1"; // 0xa15 MovS
	func_2277(var_430_int, var_431_string); // 0xa16 NEW_2
	var_432_int = 0; // 0xa18 PushI
	var_433_bool = var_430_int == var_432_int; // 0xa19 Eq
	if(var_433_bool == 0) goto Label_2589; // 0xa1a JumpB
	var_428_bool = 1; // 0xa1b MovB
	return 0; // 0xa1c Return
	
Label_2589:
	var_428_bool = 0; // 0xa1d MovB
	return 0; // 0xa1e Return
}


func_2324(var_359_bool, var_361_string)
{
	var_362_int = 0; var_363_bool = 0; var_364_int = 0; var_365_bool = 0; // 0x914 PushV
	GetInvItemByName(var_364_int, var_361_string); // 0x915 Func
	HasItem(var_364_int, var_365_bool); // 0x917 ObjFunc
	var_359_bool = var_365_bool; // 0x919 Mov
	return 4; // 0x91a Return
}


func_2070(var_123_bool, var_124_object)
{
	var_128_int = 0; var_129_int = 0; var_130_int = 0; var_131_int = 0; // 0x816 PushV
	var_132_string = "voice_common"; // 0x817 PushS
	GetVariable(var_132_string, var_130_int); // 0x818 Func
	var_133_int = var_130_int; // 0x81a Push
	if(var_133_int == 0) goto Label_2108; // 0x81b JumpB
	var_134_bool = 0; var_135_object = Obj(); // 0x81c PushV
	var_135_object = var_124_object; // 0x81d Mov
	func_2128(var_135_object); // 0x81e NEW_2
	var_164_bool = var_134_bool == 0; // 0x820 Not
	if(var_164_bool == 0) goto Label_2090; // 0x821 JumpB
	var_165_bool = 0; var_166_object = Obj(); // 0x822 PushV
	var_166_object = var_124_object; // 0x823 Mov
	func_2165(var_166_object); // 0x824 NEW_2
	var_200_bool = var_165_bool == 0; // 0x826 Not
	if(var_200_bool == 0) goto Label_2090; // 0x827 JumpB
	var_123_bool = 0; // 0x828 MovB
	return 4; // 0x829 Return
	
Label_2090:
	var_201_int = 2; // 0x82a PushI
	irand(var_131_int, var_201_int); // 0x82b Func
	var_202_int = var_131_int; // 0x82d Push
	if(var_202_int == 0) goto Label_2103; // 0x82e JumpB
	var_203_string = "voice_common"; // 0x82f PushS
	var_204_int = 1; // 0x830 PushI
	var_205_int = var_130_int + var_204_int; // 0x831 Add
	var_206_int = 3; // 0x832 PushI
	var_207_int = var_205_int / var_206_int; // 0x833 Mod
	SetVariable(var_203_string, var_207_int); // 0x834 Func
	goto Label_2107; // 0x836 Jump
	
Label_2107:
	goto Label_2126; // 0x83b Jump
	
Label_2126:
	var_123_bool = 1; // 0x84e MovB
	return 4; // 0x84f Return
	
Label_2103:
	var_208_string = "voice_common"; // 0x837 PushS
	var_209_int = 0; // 0x838 PushI
	SetVariable(var_208_string, var_209_int); // 0x839 Func
	
Label_2108:
	var_210_bool = 0; var_211_object = Obj(); // 0x83c PushV
	var_211_object = var_124_object; // 0x83d Mov
	func_2165(var_211_object); // 0x83e NEW_2
	var_212_bool = var_210_bool == 0; // 0x840 Not
	if(var_212_bool == 0) goto Label_2122; // 0x841 JumpB
	var_213_bool = 0; var_214_object = Obj(); // 0x842 PushV
	var_214_object = var_124_object; // 0x843 Mov
	func_2128(var_214_object); // 0x844 NEW_2
	var_215_bool = var_213_bool == 0; // 0x846 Not
	if(var_215_bool == 0) goto Label_2122; // 0x847 JumpB
	var_123_bool = 0; // 0x848 MovB
	return 4; // 0x849 Return
	
Label_2122:
	var_216_string = "voice_common"; // 0x84a PushS
	var_217_int = 1; // 0x84b PushI
	SetVariable(var_216_string, var_217_int); // 0x84c Func
}


func_1307(var_0_object, var_1_object, var_2_object, var_3_string, var_501_object, var_502_object)
{
	var_0_object = var_502_object; // 0x51c TMov
	var_1_object = var_501_object; // 0x51d TMov
	var_3_string = 0; // 0x51e TMovB
	var_507_int = 1; // 0x51f PushI
	if(var_507_int == 0) goto Label_1340; // 0x520 JumpB
	var_508_string = ""; // 0x521 PushV
	var_508_string = "Neutral"; // 0x522 MovS
	func_1370(var_502_object, var_508_string); // 0x523 NEW_2
	var_516_int = 535231; // 0x525 PushI
	SetMessage(var_516_int); // 0x526 TObjFunc
	ClearReplies(); // 0x528 TObjFunc
	var_517_int = 535232; // 0x52a PushI
	var_518_int = 36953; // 0x52b PushI
	var_519_int = 36907; // 0x52c PushI
	AddReply(var_517_int, var_518_int, var_519_int); // 0x52d TObjFunc
	var_520_int = 535233; // 0x52f PushI
	var_521_int = -1; // 0x530 PushI
	var_522_int = 36908; // 0x531 PushI
	AddReply(var_520_int, var_521_int, var_522_int); // 0x532 TObjFunc
	var_523_int = 535280; // 0x534 PushI
	var_524_int = -1; // 0x535 PushI
	var_525_int = 36956; // 0x536 PushI
	AddReply(var_523_int, var_524_int, var_525_int); // 0x537 TObjFunc
	goto Label_1340; // 0x539 Jump
	
Label_1340:
	var_526_bool = 0; // 0x53c PushV
	func_2395(var_526_bool); // 0x53d NEW_2
	if(var_526_bool == 0) goto Label_1355; // 0x53f JumpB
	
Label_1344:
	lshWaitForAnimEnd(); // 0x540 Func
	var_527_string = var_3_string; // 0x542 PushT
	if(var_527_string == 0) goto Label_1349; // 0x543 JumpB
	goto Label_1354; // 0x544 Jump
	
Label_1354:
	goto Label_1369; // 0x54a Jump
	
Label_1369:
	return 0; // 0x559 Return
	
Label_1349:
	var_528_string = ""; // 0x545 PushV
	var_528_string = var_2_object; // 0x546 MovT
	func_2208(var_528_string); // 0x547 NEW_2
	goto Label_1344; // 0x549 Jump
	
Label_1355:
	var_529_string = "all"; // 0x54b PushS
	var_530_string = "idle"; // 0x54c PushS
	PlayAnimation(var_529_string, var_530_string); // 0x54d Func
	
Label_1359:
	WaitForAnimEnd(); // 0x54f Func
	var_531_string = var_3_string; // 0x551 PushT
	if(var_531_string == 0) goto Label_1364; // 0x552 JumpB
	goto Label_1369; // 0x553 Jump
	
Label_1364:
	var_532_string = "all"; // 0x554 PushS
	var_533_string = "idle"; // 0x555 PushS
	PlayAnimation(var_532_string, var_533_string); // 0x556 Func
	goto Label_1359; // 0x558 Jump
}


func_2331(var_91_bool, var_92_string, var_93_string)
{
	var_94_object = Obj(); var_95_object = Obj(); // 0x91b PushV
	FindActor(var_95_object, var_92_string); // 0x91c Func
	var_96_bool = var_95_object == 0; // 0x91e NullEq
	if(var_96_bool == 0) goto Label_2338; // 0x91f JumpB
	var_91_bool = 0; // 0x920 MovB
	return 2; // 0x921 Return
	
Label_2338:
	Trigger(var_95_object, var_93_string); // 0x922 Func
	var_91_bool = 1; // 0x924 MovB
	return 2; // 0x925 Return
}


func_1566(var_0_object, var_1_object, var_2_object, var_3_string, var_562_object, var_563_object)
{
	var_0_object = var_563_object; // 0x61f TMov
	var_1_object = var_562_object; // 0x620 TMov
	var_3_string = 0; // 0x621 TMovB
	var_568_int = 1; // 0x622 PushI
	if(var_568_int == 0) goto Label_1594; // 0x623 JumpB
	var_569_string = ""; // 0x624 PushV
	var_569_string = "Neutral"; // 0x625 MovS
	func_1624(var_563_object, var_569_string); // 0x626 NEW_2
	var_577_int = 540551; // 0x628 PushI
	SetMessage(var_577_int); // 0x629 TObjFunc
	ClearReplies(); // 0x62b TObjFunc
	var_578_int = 540552; // 0x62d PushI
	var_579_int = -1; // 0x62e PushI
	var_580_int = 42561; // 0x62f PushI
	AddReply(var_578_int, var_579_int, var_580_int); // 0x630 TObjFunc
	var_581_int = 540795; // 0x632 PushI
	var_582_int = -1; // 0x633 PushI
	var_583_int = 42844; // 0x634 PushI
	AddReply(var_581_int, var_582_int, var_583_int); // 0x635 TObjFunc
	goto Label_1594; // 0x637 Jump
	
Label_1594:
	var_584_bool = 0; // 0x63a PushV
	func_2395(var_584_bool); // 0x63b NEW_2
	if(var_584_bool == 0) goto Label_1609; // 0x63d JumpB
	
Label_1598:
	lshWaitForAnimEnd(); // 0x63e Func
	var_585_string = var_3_string; // 0x640 PushT
	if(var_585_string == 0) goto Label_1603; // 0x641 JumpB
	goto Label_1608; // 0x642 Jump
	
Label_1608:
	goto Label_1623; // 0x648 Jump
	
Label_1623:
	return 0; // 0x657 Return
	
Label_1603:
	var_586_string = ""; // 0x643 PushV
	var_586_string = var_2_object; // 0x644 MovT
	func_2208(var_586_string); // 0x645 NEW_2
	goto Label_1598; // 0x647 Jump
	
Label_1609:
	var_587_string = "all"; // 0x649 PushS
	var_588_string = "idle"; // 0x64a PushS
	PlayAnimation(var_587_string, var_588_string); // 0x64b Func
	
Label_1613:
	WaitForAnimEnd(); // 0x64d Func
	var_589_string = var_3_string; // 0x64f PushT
	if(var_589_string == 0) goto Label_1618; // 0x650 JumpB
	goto Label_1623; // 0x651 Jump
	
Label_1618:
	var_590_string = "all"; // 0x652 PushS
	var_591_string = "idle"; // 0x653 PushS
	PlayAnimation(var_590_string, var_591_string); // 0x654 Func
	goto Label_1613; // 0x656 Jump
}


func_2591(var_453_bool)
{
	var_455_int = 0; var_456_string = ""; // 0xa20 PushV
	var_456_string = "oob12Maria2"; // 0xa21 MovS
	func_2277(var_455_int, var_456_string); // 0xa22 NEW_2
	var_457_int = 0; // 0xa24 PushI
	var_458_bool = var_455_int == var_457_int; // 0xa25 Eq
	if(var_458_bool == 0) goto Label_2601; // 0xa26 JumpB
	var_453_bool = 1; // 0xa27 MovB
	return 0; // 0xa28 Return
	
Label_2601:
	var_453_bool = 0; // 0xa29 MovB
	return 0; // 0xa2a Return
}


func_804(var_0_object, var_388_int, var_389_object)
{
	var_391_object = Obj(); var_392_bool = 0; var_393_int = 0; var_394_bool = 0; var_395_object = Obj(); var_396_bool = 0; var_397_int = 0; var_398_bool = 0; // 0x324 PushV
	var_0_object = var_389_object; // 0x325 TMov
	var_399_bool = 0; var_400_object = Obj(); var_401_float = 0; // 0x326 PushV
	var_400_object = var_389_object; // 0x327 Mov
	var_401_float = 70.0; // 0x328 MovF
	func_1983(var_400_object, var_401_float); // 0x329 NEW_2
	var_402_bool = var_399_bool == 0; // 0x32b Not
	if(var_402_bool == 0) goto Label_815; // 0x32c JumpB
	var_388_int = -2; // 0x32d MovI
	return 8; // 0x32e Return
	
Label_815:
	CreateDialog(var_395_object); // 0x32f Func
	var_403_int = 0; // 0x331 PushV
	func_2389(var_403_int); // 0x332 NEW_2
	SetNPCName(var_403_int); // 0x334 ObjFunc
	var_404_int = 0; // 0x336 PushV
	func_2387(var_404_int); // 0x337 NEW_2
	SetNPCDescription(var_404_int); // 0x339 ObjFunc
	var_405_string = ""; // 0x33b PushV
	func_2391(var_405_string); // 0x33c NEW_2
	SetPhoto(var_405_string); // 0x33e ObjFunc
	var_406_string = ""; // 0x340 PushV
	func_2393(var_406_string); // 0x341 NEW_2
	SetPhoto2(var_406_string); // 0x343 ObjFunc
	var_407_int = 0; // 0x345 PushV
	func_2733(var_407_int); // 0x346 NEW_2
	SetPlayerName(var_407_int); // 0x348 ObjFunc
	var_397_int = -1; // 0x34a MovI
	IsOverrideActive(var_396_bool); // 0x34b Func
	var_408_bool = var_396_bool; // 0x34d Push
	if(var_408_bool == 0) goto Label_849; // 0x34e JumpB
	var_388_int = -2; // 0x34f MovI
	return 8; // 0x350 Return
	
Label_849:
	DoDialog(var_395_object); // 0x351 Func
	var_409_bool = 0; var_410_object = Obj(); // 0x353 PushV
	var_411_object = Obj(); // 0x354 PushV
	func_2261(var_411_object); // 0x355 NEW_2
	var_410_object = var_411_object; // 0x356 Mov
	func_2070(var_409_bool, var_410_object); // 0x358 NEW_2
	var_412_object = Obj(); var_413_object = Obj(); // 0x35a PushV
	var_412_object = var_389_object; // 0x35b Mov
	var_413_object = var_395_object; // 0x35c Mov
	TaskCall(5); // 0x35d TaskCall
	func_885(var_414_object, var_415_object, var_416_string, var_417_bool, var_412_object, var_413_object); // 0x35e NEW_2
	TaskReturn(); // 0x35f TaskReturn
	IsDialogEnd(var_398_bool); // 0x361 ObjFunc
	
Label_867:
	var_473_bool = var_398_bool == 0; // 0x363 Not
	if(var_473_bool == 0) goto Label_874; // 0x364 JumpB
	sync(); // 0x365 Func
	IsDialogEnd(var_398_bool); // 0x367 ObjFunc
	goto Label_867; // 0x369 Jump
	
Label_874:
	var_474_object = Obj(); // 0x36a PushV
	var_474_object = var_389_object; // 0x36b Mov
	func_2052(); // 0x36c NEW_2
	StopDialog(var_395_object); // 0x36e Func
	GetReturnValue(var_397_int); // 0x370 ObjFunc
	var_388_int = var_397_int; // 0x372 Mov
	return 8; // 0x373 Return
}


func_2343(var_49_float)
{
	var_50_float = 0; var_51_float = 0; // 0x927 PushV
	GetGameTime(var_51_float); // 0x928 Func
	var_49_float = var_51_float; // 0x92a Mov
	return 2; // 0x92b Return
}


func_2603()
{
	var_52_object = Obj(); var_53_object = Obj(); // 0xa2b PushV
	var_54_int = 276; // 0xa2c PushI
	var_55_int = 2; // 0xa2d PushI
	var_56_int = 521337; // 0xa2e PushI
	CreateDiaryEntry(var_53_object, var_54_int, var_55_int, var_56_int); // 0xa2f Func
	var_57_bool = 0; var_58_object = Obj(); var_59_int = 0; // 0xa31 PushV
	var_58_object = var_53_object; // 0xa32 Mov
	var_59_int = -1; // 0xa33 MovI
	func_2655(var_57_bool, var_58_object, var_59_int); // 0xa34 NEW_2
	return 2; // 0xa36 Return
}


func_2348(var_178_int)
{
	var_179_float = 0; var_180_float = 0; // 0x92c PushV
	GetGameTime(var_180_float); // 0x92d Func
	var_181_int = 1; // 0x92f PushI
	var_182_int = 0; // 0x930 PushV
	var_183_int = 24; // 0x931 PushI
	var_182_int = var_180_float / var_180_float; // 0x932 Div2
	var_178_int = var_181_int + var_182_int; // 0x933 Add2
	return 2; // 0x934 Return
}


func_307(var_0_object, var_1_object, var_2_object, var_3_string, var_305_object, var_306_object)
{
	var_0_object = var_306_object; // 0x134 TMov
	var_1_object = var_305_object; // 0x135 TMov
	var_3_string = 0; // 0x136 TMovB
	var_311_int = 1; // 0x137 PushI
	if(var_311_int == 0) goto Label_385; // 0x138 JumpB
	var_312_bool = 0; var_313_object = Obj(); // 0x139 PushV
	var_313_object = var_1_object; // 0x13a MovT
	func_2532(var_313_object); // 0x13b NEW_2
	var_320_bool = var_312_bool == 0; // 0x13d Not
	if(var_320_bool == 0) goto Label_339; // 0x13e JumpB
	var_321_object = Obj(); var_322_object = Obj(); // 0x13f PushV
	var_321_object = var_1_object; // 0x140 MovT
	var_322_object = var_0_object; // 0x141 MovT
	func_2438(); // 0x142 NEW_2
	var_325_string = ""; // 0x144 PushV
	var_325_string = "Neutral"; // 0x145 MovS
	func_415(var_306_object, var_325_string); // 0x146 NEW_2
	var_333_int = 521326; // 0x148 PushI
	SetMessage(var_333_int); // 0x149 TObjFunc
	ClearReplies(); // 0x14b TObjFunc
	var_334_int = 528379; // 0x14d PushI
	var_335_int = 29753; // 0x14e PushI
	var_336_int = 29752; // 0x14f PushI
	AddReply(var_334_int, var_335_int, var_336_int); // 0x150 TObjFunc
	goto Label_385; // 0x152 Jump
	
Label_385:
	var_337_bool = 0; // 0x181 PushV
	func_2395(var_337_bool); // 0x182 NEW_2
	if(var_337_bool == 0) goto Label_400; // 0x184 JumpB
	
Label_389:
	lshWaitForAnimEnd(); // 0x185 Func
	var_338_string = var_3_string; // 0x187 PushT
	if(var_338_string == 0) goto Label_394; // 0x188 JumpB
	goto Label_399; // 0x189 Jump
	
Label_399:
	goto Label_414; // 0x18f Jump
	
Label_414:
	return 0; // 0x19e Return
	
Label_394:
	var_339_string = ""; // 0x18a PushV
	var_339_string = var_2_object; // 0x18b MovT
	func_2208(var_339_string); // 0x18c NEW_2
	goto Label_389; // 0x18e Jump
	
Label_400:
	var_340_string = "all"; // 0x190 PushS
	var_341_string = "idle"; // 0x191 PushS
	PlayAnimation(var_340_string, var_341_string); // 0x192 Func
	
Label_404:
	WaitForAnimEnd(); // 0x194 Func
	var_342_string = var_3_string; // 0x196 PushT
	if(var_342_string == 0) goto Label_409; // 0x197 JumpB
	goto Label_414; // 0x198 Jump
	
Label_409:
	var_343_string = "all"; // 0x199 PushS
	var_344_string = "idle"; // 0x19a PushS
	PlayAnimation(var_343_string, var_344_string); // 0x19b Func
	goto Label_404; // 0x19d Jump
	
Label_339:
	var_345_string = ""; // 0x153 PushV
	var_345_string = "Neutral"; // 0x154 MovS
	func_415(var_306_object, var_345_string); // 0x155 NEW_2
	var_346_int = 521329; // 0x157 PushI
	SetMessage(var_346_int); // 0x158 TObjFunc
	ClearReplies(); // 0x15a TObjFunc
	var_347_bool = 0; var_348_object = Obj(); // 0x15c PushV
	var_348_object = var_1_object; // 0x15d MovT
	func_2520(var_348_object); // 0x15e NEW_2
	if(var_347_bool == 0) goto Label_358; // 0x160 JumpB
	var_353_int = 521330; // 0x161 PushI
	var_354_int = 22527; // 0x162 PushI
	var_355_int = 22524; // 0x163 PushI
	AddReply(var_353_int, var_354_int, var_355_int); // 0x164 TObjFunc
	
Label_358:
	var_356_bool = 0; // 0x166 PushV
	var_356_bool = 0; // 0x167 MovB
	var_357_bool = 0; var_358_object = Obj(); // 0x168 PushV
	var_358_object = var_1_object; // 0x169 MovT
	func_2544(var_357_bool, var_358_object); // 0x16a NEW_2
	if(var_357_bool == 0) goto Label_371; // 0x16c JumpB
	var_366_bool = 0; var_367_object = Obj(); // 0x16d PushV
	var_367_object = var_1_object; // 0x16e MovT
	func_2508(var_367_object); // 0x16f NEW_2
	if(var_366_bool == 0) goto Label_371; // 0x171 JumpB
	var_356_bool = 1; // 0x172 MovB
	
Label_371:
	if(var_356_bool == 0) goto Label_377; // 0x173 JumpB
	var_372_int = 521331; // 0x174 PushI
	var_373_int = 22529; // 0x175 PushI
	var_374_int = 22525; // 0x176 PushI
	AddReply(var_372_int, var_373_int, var_374_int); // 0x177 TObjFunc
	
Label_377:
	var_375_int = 521332; // 0x179 PushI
	var_376_int = -1; // 0x17a PushI
	var_377_int = 22526; // 0x17b PushI
	AddReply(var_375_int, var_376_int, var_377_int); // 0x17c TObjFunc
	goto Label_385; // 0x17e Jump
}


func_2357(var_278_bool, var_279_int)
{
	var_280_int = 0; // 0x936 PushV
	func_2348(var_280_int); // 0x937 NEW_2
	var_278_bool = var_280_int == var_279_int; // 0x939 Eq2
	return 0; // 0x93a Return
}


func_2616()
{
	var_141_object = Obj(); var_142_object = Obj(); // 0xa38 PushV
	var_143_int = 279; // 0xa39 PushI
	var_144_int = 2; // 0xa3a PushI
	var_145_int = 521340; // 0xa3b PushI
	CreateDiaryEntry(var_142_object, var_143_int, var_144_int, var_145_int); // 0xa3c Func
	var_146_bool = 0; var_147_object = Obj(); var_148_int = 0; // 0xa3e PushV
	var_147_object = var_142_object; // 0xa3f Mov
	var_148_int = 276; // 0xa40 MovI
	func_2655(var_146_bool, var_147_object, var_148_int); // 0xa41 NEW_2
	return 2; // 0xa43 Return
}


func_2363(var_50_string, var_51_int)
{
	var_52_string = ""; var_53_string = ""; // 0x93b PushV
	var_53_string = "idle"; // 0x93c MovS
	var_54_int = var_51_int; // 0x93d Push
	if(var_54_int == 0) goto Label_2368; // 0x93e JumpB
	var_53_string = var_53_string + var_51_int; // 0x93f Add2
	
Label_2368:
	var_50_string = var_53_string; // 0x940 Mov
	return 2; // 0x941 Return
}


func_2370(var_44_int)
{
	var_45_int = 0; var_46_bool = 0; var_47_int = 0; var_48_bool = 0; // 0x942 PushV
	var_47_int = 0; // 0x943 MovI
	
Label_2372:
	var_49_string = "all"; // 0x944 PushS
	var_50_string = ""; var_51_int = 0; // 0x945 PushV
	var_51_int = var_47_int; // 0x946 Mov
	func_2363(var_50_string, var_51_int); // 0x947 NEW_2
	HasAnimation(var_48_bool, var_49_string, var_50_string); // 0x949 Func
	var_55_bool = var_48_bool == 0; // 0x94b Not
	if(var_55_bool == 0) goto Label_2382; // 0x94c JumpB
	goto Label_2385; // 0x94d Jump
	
Label_2385:
	var_44_int = var_47_int; // 0x951 Mov
	return 4; // 0x952 Return
	
Label_2382:
	var_56_int = 1; // 0x94e PushI
	var_47_int = var_47_int + var_56_int; // 0x94f Add2
	goto Label_2372; // 0x950 Jump
}


func_2629()
{
	var_75_object = Obj(); var_76_object = Obj(); // 0xa45 PushV
	var_77_int = 277; // 0xa46 PushI
	var_78_int = 2; // 0xa47 PushI
	var_79_int = 521338; // 0xa48 PushI
	CreateDiaryEntry(var_76_object, var_77_int, var_78_int, var_79_int); // 0xa49 Func
	var_80_bool = 0; var_81_object = Obj(); var_82_int = 0; // 0xa4b PushV
	var_81_object = var_76_object; // 0xa4c Mov
	var_82_int = 276; // 0xa4d MovI
	func_2655(var_80_bool, var_81_object, var_82_int); // 0xa4e NEW_2
	return 2; // 0xa50 Return
}


func_1868()
{
	var_30_int = 0; var_31_int = 0; var_32_bool = 0; var_33_int = 0; var_34_int = 0; var_35_bool = 0; var_36_int = 0; var_37_int = 0; var_38_bool = 0; var_39_int = 0; var_40_int = 0; var_41_bool = 0; // 0x74c PushV
	WaitForAnimEnd(); // 0x74d Func
	var_42_bool = 0; // 0x74f PushV
	func_1978(var_42_bool); // 0x750 NEW_2
	var_43_bool = var_42_bool == 0; // 0x752 Not
	if(var_43_bool == 0) goto Label_1877; // 0x753 JumpB
	return 12; // 0x754 Return
	
Label_1877:
	var_44_int = 0; // 0x755 PushV
	func_2370(var_44_int); // 0x756 NEW_2
	var_36_int = var_44_int; // 0x757 Mov
	var_37_int = 0; // 0x759 MovI
	
Label_1882:
	var_57_bool = 0; // 0x75a PushV
	var_57_bool = 0; // 0x75b MovB
	var_58_int = 5; // 0x75c PushI
	var_59_bool = var_37_int < var_58_int; // 0x75d LT
	if(var_59_bool == 0) goto Label_1892; // 0x75e JumpB
	var_60_bool = 0; // 0x75f PushV
	func_1978(var_60_bool); // 0x760 NEW_2
	if(var_60_bool == 0) goto Label_1892; // 0x762 JumpB
	var_57_bool = 1; // 0x763 MovB
	
Label_1892:
	if(var_57_bool == 0) goto Label_1934; // 0x764 JumpB
	var_61_bool = var_36_int == 0; // 0x765 Not
	if(var_61_bool == 0) goto Label_1902; // 0x766 JumpB
	var_62_int = 3; // 0x767 PushI
	Sleep(var_62_int, var_38_bool); // 0x768 Func
	var_63_bool = var_38_bool == 0; // 0x76a Not
	if(var_63_bool == 0) goto Label_1901; // 0x76b JumpB
	goto Label_1934; // 0x76c Jump
	
Label_1934:
	ResetAAS(); // 0x78e Func
	return 12; // 0x790 Return
	
Label_1901:
	goto Label_1923; // 0x76d Jump
	
Label_1923:
	var_64_bool = 0; // 0x783 PushV
	func_1937(var_64_bool); // 0x784 NEW_2
	var_65_bool = var_64_bool == 0; // 0x786 Not
	if(var_65_bool == 0) goto Label_1929; // 0x787 JumpB
	goto Label_1934; // 0x788 Jump
	
Label_1929:
	ResetAAS(); // 0x789 Func
	var_66_int = 1; // 0x78b PushI
	var_37_int = var_37_int + var_66_int; // 0x78c Add2
	goto Label_1882; // 0x78d Jump
	
Label_1902:
	irand(var_39_int, var_36_int); // 0x76e Func
	var_67_int = 5; // 0x770 PushI
	irand(var_40_int, var_67_int); // 0x771 Func
	var_68_int = 0; // 0x773 PushI
	var_69_bool = var_40_int != var_68_int; // 0x774 Neq
	if(var_69_bool == 0) goto Label_1911; // 0x775 JumpB
	var_39_int = 0; // 0x776 MovI
	
Label_1911:
	var_70_string = "all"; // 0x777 PushS
	var_71_string = ""; var_72_int = 0; // 0x778 PushV
	var_72_int = var_39_int; // 0x779 Mov
	func_2363(var_71_string, var_72_int); // 0x77a NEW_2
	PlayAnimation(var_70_string, var_71_string); // 0x77c Func
	WaitForAnimEnd(var_41_bool); // 0x77e Func
	var_73_bool = var_41_bool == 0; // 0x780 Not
	if(var_73_bool == 0) goto Label_1923; // 0x781 JumpB
	goto Label_1934; // 0x782 Jump
}


func_2128(var_134_bool)
{
	var_136_string = ""; var_137_int = 0; var_138_bool = 0; var_139_int = 0; var_140_string = ""; var_141_string = ""; var_142_int = 0; var_143_bool = 0; var_144_int = 0; var_145_string = ""; // 0x850 PushV
	var_141_string = "c"; // 0x851 MovS
	var_142_int = 0; // 0x852 MovI
	
Label_2131:
	var_146_int = 1; // 0x853 PushI
	if(var_146_int == 0) goto Label_2144; // 0x854 JumpB
	var_147_int = 1; // 0x855 PushI
	var_148_int = var_142_int + var_147_int; // 0x856 Add
	var_149_int = var_141_string + var_148_int; // 0x857 Add
	HasProperty(var_149_int, var_143_bool); // 0x858 ObjFunc
	var_150_bool = var_143_bool == 0; // 0x85a Not
	if(var_150_bool == 0) goto Label_2141; // 0x85b JumpB
	goto Label_2144; // 0x85c Jump
	
Label_2144:
	var_151_bool = var_142_int == 0; // 0x860 Not
	if(var_151_bool == 0) goto Label_2148; // 0x861 JumpB
	var_134_bool = 0; // 0x862 MovB
	return 10; // 0x863 Return
	
Label_2148:
	var_144_int = 0; // 0x864 MovI
	var_152_int = 1; // 0x865 PushI
	var_153_bool = var_142_int > var_152_int; // 0x866 GT
	if(var_153_bool == 0) goto Label_2154; // 0x867 JumpB
	irand(var_144_int, var_142_int); // 0x868 Func
	
Label_2154:
	var_154_int = 1; // 0x86a PushI
	var_155_int = var_144_int + var_154_int; // 0x86b Add
	var_156_int = var_141_string + var_155_int; // 0x86c Add
	GetProperty(var_156_int, var_145_string); // 0x86d ObjFunc
	var_157_bool = 0; var_158_string = ""; // 0x86f PushV
	var_158_string = var_145_string; // 0x870 Mov
	func_2239(var_157_bool, var_158_string); // 0x871 NEW_2
	var_134_bool = var_157_bool; // 0x872 Mov
	return 10; // 0x874 Return
	
Label_2141:
	var_163_int = 1; // 0x85d PushI
	var_142_int = var_142_int + var_163_int; // 0x85e Add2
	goto Label_2131; // 0x85f Jump
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_218_object, var_219_object)
{
	var_0_object = var_219_object; // 0x52 TMov
	var_1_object = var_218_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_224_int = 1; // 0x55 PushI
	if(var_224_int == 0) goto Label_109; // 0x56 JumpB
	var_225_string = ""; // 0x57 PushV
	var_225_string = "Neutral"; // 0x58 MovS
	func_139(var_219_object, var_225_string); // 0x59 NEW_2
	var_242_int = 518027; // 0x5b PushI
	SetMessage(var_242_int); // 0x5c TObjFunc
	ClearReplies(); // 0x5e TObjFunc
	var_243_int = 518028; // 0x60 PushI
	var_244_int = 29772; // 0x61 PushI
	var_245_int = 19161; // 0x62 PushI
	AddReply(var_243_int, var_244_int, var_245_int); // 0x63 TObjFunc
	var_246_int = 528396; // 0x65 PushI
	var_247_int = 29772; // 0x66 PushI
	var_248_int = 29771; // 0x67 PushI
	AddReply(var_246_int, var_247_int, var_248_int); // 0x68 TObjFunc
	goto Label_109; // 0x6a Jump
	
Label_109:
	var_249_bool = 0; // 0x6d PushV
	func_2395(var_249_bool); // 0x6e NEW_2
	if(var_249_bool == 0) goto Label_124; // 0x70 JumpB
	
Label_113:
	lshWaitForAnimEnd(); // 0x71 Func
	var_250_string = var_3_string; // 0x73 PushT
	if(var_250_string == 0) goto Label_118; // 0x74 JumpB
	goto Label_123; // 0x75 Jump
	
Label_123:
	goto Label_138; // 0x7b Jump
	
Label_138:
	return 0; // 0x8a Return
	
Label_118:
	var_251_string = ""; // 0x76 PushV
	var_251_string = var_2_object; // 0x77 MovT
	func_2208(var_251_string); // 0x78 NEW_2
	goto Label_113; // 0x7a Jump
	
Label_124:
	var_262_string = "all"; // 0x7c PushS
	var_263_string = "idle"; // 0x7d PushS
	PlayAnimation(var_262_string, var_263_string); // 0x7e Func
	
Label_128:
	WaitForAnimEnd(); // 0x80 Func
	var_264_string = var_3_string; // 0x82 PushT
	if(var_264_string == 0) goto Label_133; // 0x83 JumpB
	goto Label_138; // 0x84 Jump
	
Label_133:
	var_265_string = "all"; // 0x85 PushS
	var_266_string = "idle"; // 0x86 PushS
	PlayAnimation(var_265_string, var_266_string); // 0x87 Func
	goto Label_128; // 0x89 Jump
}


func_2642(var_66_object)
{
	var_67_object = Obj(); var_68_object = Obj(); // 0xa52 PushV
	GetDiaryRoot(var_68_object); // 0xa53 Func
	var_69_bool = var_68_object == 0; // 0xa55 Not
	if(var_69_bool == 0) goto Label_2652; // 0xa56 JumpB
	var_70_string = "Can't retrieve diary root"; // 0xa57 PushS
	Trace(var_70_string); // 0xa58 Func
	var_66_object = 0; // 0xa5a MovB
	return 2; // 0xa5b Return
	
Label_2652:
	var_66_object = var_68_object; // 0xa5c Mov
	return 2; // 0xa5d Return
}


func_2387(var_111_int)
{
	var_111_int = 515543; // 0x953 MovI
	return 0; // 0x954 Return
}


func_2389(var_110_int)
{
	var_110_int = 502868; // 0x955 MovI
	return 0; // 0x956 Return
}


func_2391(var_112_string)
{
	var_112_string = "ui/NPC_Maria.png"; // 0x957 MovS
	return 0; // 0x958 Return
}


func_1624(var_2_object, var_569_string)
{
	var_570_bool = 0; // 0x659 PushV
	func_2395(var_570_bool); // 0x65a NEW_2
	var_571_bool = var_570_bool == 0; // 0x65c Not
	if(var_571_bool == 0) goto Label_1631; // 0x65d JumpB
	return 0; // 0x65e Return
	
Label_1631:
	var_572_bool = var_569_string == var_2_object; // 0x65f Eq
	if(var_572_bool == 0) goto Label_1634; // 0x660 JumpB
	return 0; // 0x661 Return
	
Label_1634:
	var_573_string = ""; var_574_bool = 0; // 0x662 PushV
	var_573_string = var_569_string; // 0x663 Mov
	var_575_string = ""; // 0x664 PushS
	var_576_bool = var_569_string == var_575_string; // 0x665 Eq
	if(var_576_bool == 0) goto Label_1641; // 0x666 JumpB
	var_574_bool = 0; // 0x667 MovB
	goto Label_1642; // 0x668 Jump
	
Label_1642:
	func_2224(var_573_string, var_574_bool); // 0x66a NEW_2
	var_2_object = var_569_string; // 0x66c TMov
	return 0; // 0x66d Return
	
Label_1641:
	var_574_bool = 1; // 0x669 MovB
}


func_2393(var_113_string)
{
	var_113_string = "ui/NPC_Maria_b.png"; // 0x959 MovS
	return 0; // 0x95a Return
}


func_1370(var_2_object, var_508_string)
{
	var_509_bool = 0; // 0x55b PushV
	func_2395(var_509_bool); // 0x55c NEW_2
	var_510_bool = var_509_bool == 0; // 0x55e Not
	if(var_510_bool == 0) goto Label_1377; // 0x55f JumpB
	return 0; // 0x560 Return
	
Label_1377:
	var_511_bool = var_508_string == var_2_object; // 0x561 Eq
	if(var_511_bool == 0) goto Label_1380; // 0x562 JumpB
	return 0; // 0x563 Return
	
Label_1380:
	var_512_string = ""; var_513_bool = 0; // 0x564 PushV
	var_512_string = var_508_string; // 0x565 Mov
	var_514_string = ""; // 0x566 PushS
	var_515_bool = var_508_string == var_514_string; // 0x567 Eq
	if(var_515_bool == 0) goto Label_1387; // 0x568 JumpB
	var_513_bool = 0; // 0x569 MovB
	goto Label_1388; // 0x56a Jump
	
Label_1388:
	func_2224(var_512_string, var_513_bool); // 0x56c NEW_2
	var_2_object = var_508_string; // 0x56e TMov
	return 0; // 0x56f Return
	
Label_1387:
	var_513_bool = 1; // 0x56b MovB
}


func_2395(var_105_bool)
{
	var_105_bool = 1; // 0x95b MovB
	return 0; // 0x95c Return
}


func_2397()
{
	var_34_object = Obj(); var_35_object = Obj(); // 0x95d PushV
	var_36_string = "b6q03"; // 0x95e PushS
	var_37_int = 1; // 0x95f PushI
	SetVariable(var_36_string, var_37_int); // 0x960 Func
	var_38_object = Obj(); // 0x962 PushV
	func_2683(var_38_object); // 0x963 NEW_2
	var_35_object = var_38_object; // 0x964 Mov
	var_45_string = "b6q03MariaGotoNina"; // 0x966 PushS
	var_46_string = "pt_map_nina"; // 0x967 PushS
	var_47_int = 0; // 0x968 PushI
	var_48_int = 521342; // 0x969 PushI
	var_49_float = 0; // 0x96a PushV
	func_2343(var_49_float); // 0x96b NEW_2
	AddMark(var_45_string, var_46_string, var_47_int, var_48_int, var_49_float); // 0x96d ObjFunc
	func_2603(); // 0x970 NEW_2
	func_2629(); // 0x973 NEW_2
	var_83_object = Obj(); var_84_string = ""; // 0x975 PushV
	var_84_string = "quest_b6_03"; // 0x976 MovS
	func_2282(var_83_object, var_84_string); // 0x977 NEW_2
	var_91_bool = 0; var_92_string = ""; var_93_string = ""; // 0x979 PushV
	var_92_string = "quest_b6_03"; // 0x97a MovS
	var_93_string = "init_grave"; // 0x97b MovS
	func_2331(var_91_bool, var_92_string, var_93_string); // 0x97c NEW_2
	return 2; // 0x97e Return
}


func_2655(var_57_bool, var_58_object, var_59_int)
{
	var_60_object = Obj(); var_61_object = Obj(); var_62_int = 0; var_63_object = Obj(); var_64_object = Obj(); var_65_int = 0; // 0xa5f PushV
	var_66_object = Obj(); // 0xa60 PushV
	func_2642(var_66_object); // 0xa61 NEW_2
	var_63_object = var_66_object; // 0xa62 Mov
	Find(var_59_int, var_64_object); // 0xa64 ObjFunc
	var_71_bool = var_64_object == 0; // 0xa66 Not
	if(var_71_bool == 0) goto Label_2670; // 0xa67 JumpB
	var_72_string = "Can't find diary parent with id: "; // 0xa68 PushS
	var_73_int = var_72_string + var_59_int; // 0xa69 Add
	Trace(var_73_int); // 0xa6a Func
	var_57_bool = 0; // 0xa6c MovB
	return 6; // 0xa6d Return
	
Label_2670:
	AddChild(var_58_object); // 0xa6e ObjFunc
	var_74_int = 7; // 0xa70 PushI
	SendWorldWndMessage(var_74_int); // 0xa71 Func
	GetCategory(var_65_int); // 0xa73 ObjFunc
	SetDiarySection(var_65_int); // 0xa75 Func
	var_57_bool = 0; // 0xa77 MovB
	return 6; // 0xa78 Return
}


func_2165(var_165_bool)
{
	var_167_string = ""; var_168_int = 0; var_169_bool = 0; var_170_int = 0; var_171_string = ""; var_172_string = ""; var_173_int = 0; var_174_bool = 0; var_175_int = 0; var_176_string = ""; // 0x875 PushV
	var_177_string = "d"; // 0x876 PushS
	var_178_int = 0; // 0x877 PushV
	func_2348(var_178_int); // 0x878 NEW_2
	var_184_int = var_177_string + var_178_int; // 0x87a Add
	var_185_string = "m"; // 0x87b PushS
	var_172_string = var_184_int + var_185_string; // 0x87c Add2
	var_173_int = 0; // 0x87d MovI
	
Label_2174:
	var_186_int = 1; // 0x87e PushI
	if(var_186_int == 0) goto Label_2187; // 0x87f JumpB
	var_187_int = 1; // 0x880 PushI
	var_188_int = var_173_int + var_187_int; // 0x881 Add
	var_189_int = var_172_string + var_188_int; // 0x882 Add
	HasProperty(var_189_int, var_174_bool); // 0x883 ObjFunc
	var_190_bool = var_174_bool == 0; // 0x885 Not
	if(var_190_bool == 0) goto Label_2184; // 0x886 JumpB
	goto Label_2187; // 0x887 Jump
	
Label_2187:
	var_191_bool = var_173_int == 0; // 0x88b Not
	if(var_191_bool == 0) goto Label_2191; // 0x88c JumpB
	var_165_bool = 0; // 0x88d MovB
	return 10; // 0x88e Return
	
Label_2191:
	var_175_int = 0; // 0x88f MovI
	var_192_int = 1; // 0x890 PushI
	var_193_bool = var_173_int > var_192_int; // 0x891 GT
	if(var_193_bool == 0) goto Label_2197; // 0x892 JumpB
	irand(var_175_int, var_173_int); // 0x893 Func
	
Label_2197:
	var_194_int = 1; // 0x895 PushI
	var_195_int = var_175_int + var_194_int; // 0x896 Add
	var_196_int = var_172_string + var_195_int; // 0x897 Add
	GetProperty(var_196_int, var_176_string); // 0x898 ObjFunc
	var_197_bool = 0; var_198_string = ""; // 0x89a PushV
	var_198_string = var_176_string; // 0x89b Mov
	func_2239(var_197_bool, var_198_string); // 0x89c NEW_2
	var_165_bool = var_197_bool; // 0x89d Mov
	return 10; // 0x89f Return
	
Label_2184:
	var_199_int = 1; // 0x888 PushI
	var_173_int = var_173_int + var_199_int; // 0x889 Add2
	goto Label_2174; // 0x88a Jump
}


func_885(var_0_object, var_1_object, var_2_object, var_3_string, var_412_object, var_413_object)
{
	var_0_object = var_413_object; // 0x376 TMov
	var_1_object = var_412_object; // 0x377 TMov
	var_3_string = 0; // 0x378 TMovB
	var_418_int = 1; // 0x379 PushI
	if(var_418_int == 0) goto Label_948; // 0x37a JumpB
	var_419_string = ""; // 0x37b PushV
	var_419_string = "Neutral"; // 0x37c MovS
	func_978(var_413_object, var_419_string); // 0x37d NEW_2
	var_427_int = 523177; // 0x37f PushI
	SetMessage(var_427_int); // 0x380 TObjFunc
	ClearReplies(); // 0x382 TObjFunc
	var_428_bool = 0; var_429_object = Obj(); // 0x384 PushV
	var_429_object = var_1_object; // 0x385 MovT
	func_2579(var_429_object); // 0x386 NEW_2
	if(var_428_bool == 0) goto Label_910; // 0x388 JumpB
	var_434_int = 523178; // 0x389 PushI
	var_435_int = 24382; // 0x38a PushI
	var_436_int = 24381; // 0x38b PushI
	AddReply(var_434_int, var_435_int, var_436_int); // 0x38c TObjFunc
	
Label_910:
	var_437_bool = 0; // 0x38e PushV
	var_437_bool = 0; // 0x38f MovB
	var_438_bool = 0; // 0x390 PushV
	var_438_bool = 0; // 0x391 MovB
	var_439_bool = 0; var_440_object = Obj(); // 0x392 PushV
	var_440_object = var_1_object; // 0x393 MovT
	func_2555(var_440_object); // 0x394 NEW_2
	var_445_bool = var_439_bool == 0; // 0x396 Not
	if(var_445_bool == 0) goto Label_927; // 0x397 JumpB
	var_446_bool = 0; var_447_object = Obj(); // 0x398 PushV
	var_447_object = var_1_object; // 0x399 MovT
	func_2567(var_447_object); // 0x39a NEW_2
	var_452_bool = var_446_bool == 0; // 0x39c Not
	if(var_452_bool == 0) goto Label_927; // 0x39d JumpB
	var_438_bool = 1; // 0x39e MovB
	
Label_927:
	if(var_438_bool == 0) goto Label_934; // 0x39f JumpB
	var_453_bool = 0; var_454_object = Obj(); // 0x3a0 PushV
	var_454_object = var_1_object; // 0x3a1 MovT
	func_2591(var_454_object); // 0x3a2 NEW_2
	if(var_453_bool == 0) goto Label_934; // 0x3a4 JumpB
	var_437_bool = 1; // 0x3a5 MovB
	
Label_934:
	if(var_437_bool == 0) goto Label_940; // 0x3a6 JumpB
	var_459_int = 523187; // 0x3a7 PushI
	var_460_int = 42102; // 0x3a8 PushI
	var_461_int = 24390; // 0x3a9 PushI
	AddReply(var_459_int, var_460_int, var_461_int); // 0x3aa TObjFunc
	
Label_940:
	var_462_int = 523186; // 0x3ac PushI
	var_463_int = -1; // 0x3ad PushI
	var_464_int = 24389; // 0x3ae PushI
	AddReply(var_462_int, var_463_int, var_464_int); // 0x3af TObjFunc
	goto Label_948; // 0x3b1 Jump
	
Label_948:
	var_465_bool = 0; // 0x3b4 PushV
	func_2395(var_465_bool); // 0x3b5 NEW_2
	if(var_465_bool == 0) goto Label_963; // 0x3b7 JumpB
	
Label_952:
	lshWaitForAnimEnd(); // 0x3b8 Func
	var_466_string = var_3_string; // 0x3ba PushT
	if(var_466_string == 0) goto Label_957; // 0x3bb JumpB
	goto Label_962; // 0x3bc Jump
	
Label_962:
	goto Label_977; // 0x3c2 Jump
	
Label_977:
	return 0; // 0x3d1 Return
	
Label_957:
	var_467_string = ""; // 0x3bd PushV
	var_467_string = var_2_object; // 0x3be MovT
	func_2208(var_467_string); // 0x3bf NEW_2
	goto Label_952; // 0x3c1 Jump
	
Label_963:
	var_468_string = "all"; // 0x3c3 PushS
	var_469_string = "idle"; // 0x3c4 PushS
	PlayAnimation(var_468_string, var_469_string); // 0x3c5 Func
	
Label_967:
	WaitForAnimEnd(); // 0x3c7 Func
	var_470_string = var_3_string; // 0x3c9 PushT
	if(var_470_string == 0) goto Label_972; // 0x3ca JumpB
	goto Label_977; // 0x3cb Jump
	
Label_972:
	var_471_string = "all"; // 0x3cc PushS
	var_472_string = "idle"; // 0x3cd PushS
	PlayAnimation(var_471_string, var_472_string); // 0x3ce Func
	goto Label_967; // 0x3d0 Jump
}


func_2683(var_38_object)
{
	var_39_object = Obj(); var_40_object = Obj(); var_41_object = Obj(); var_42_object = Obj(); // 0xa7b PushV
	GetMainOutdoorScene(var_41_object); // 0xa7c Func
	var_43_bool = var_41_object == 0; // 0xa7e NullEq
	if(var_43_bool == 0) goto Label_2694; // 0xa7f JumpB
	var_44_string = "Can't find main outdoor scene"; // 0xa80 PushS
	Trace(var_44_string); // 0xa81 Func
	var_42_object = 0; // 0xa83 SetNull
	var_38_object = var_42_object; // 0xa84 Mov
	return 4; // 0xa85 Return
	
Label_2694:
	GetMap(var_42_object); // 0xa86 ObjFunc
	var_38_object = var_42_object; // 0xa88 Mov
	return 4; // 0xa89 Return
}


func_2432()
{
	var_133_string = "oob6Maria1"; // 0x981 PushS
	var_134_int = 1; // 0x982 PushI
	SetVariable(var_133_string, var_134_int); // 0x983 Func
	return 0; // 0x985 Return
}


func_2438()
{
	var_323_string = "b6q03NinaTalk"; // 0x987 PushS
	var_324_int = 1; // 0x988 PushI
	SetVariable(var_323_string, var_324_int); // 0x989 Func
	return 0; // 0x98b Return
}


func_139(var_2_object, var_225_string)
{
	var_226_bool = 0; // 0x8c PushV
	func_2395(var_226_bool); // 0x8d NEW_2
	var_227_bool = var_226_bool == 0; // 0x8f Not
	if(var_227_bool == 0) goto Label_146; // 0x90 JumpB
	return 0; // 0x91 Return
	
Label_146:
	var_228_bool = var_225_string == var_2_object; // 0x92 Eq
	if(var_228_bool == 0) goto Label_149; // 0x93 JumpB
	return 0; // 0x94 Return
	
Label_149:
	var_229_string = ""; var_230_bool = 0; // 0x95 PushV
	var_229_string = var_225_string; // 0x96 Mov
	var_231_string = ""; // 0x97 PushS
	var_232_bool = var_225_string == var_231_string; // 0x98 Eq
	if(var_232_bool == 0) goto Label_156; // 0x99 JumpB
	var_230_bool = 0; // 0x9a MovB
	goto Label_157; // 0x9b Jump
	
Label_157:
	func_2224(var_229_string, var_230_bool); // 0x9d NEW_2
	var_2_object = var_225_string; // 0x9f TMov
	return 0; // 0xa0 Return
	
Label_156:
	var_230_bool = 1; // 0x9c MovB
}


func_2700(var_99_object, var_100_string, var_101_float)
{
	var_103_cvector = CVector(0,0,0); var_104_cvector = CVector(0,0,0); var_105_object = Obj(); var_106_bool = 0; var_107_cvector = CVector(0,0,0); var_108_cvector = CVector(0,0,0); var_109_object = Obj(); var_110_bool = 0; // 0xa8c PushV
	GetMainOutdoorScene(var_109_object); // 0xa8d Func
	var_111_bool = var_109_object == 0; // 0xa8f NullEq
	if(var_111_bool == 0) goto Label_2709; // 0xa90 JumpB
	var_112_string = "Can't find main outdoor scene"; // 0xa91 PushS
	Trace(var_112_string); // 0xa92 Func
	return 8; // 0xa94 Return
	
Label_2709:
	GetLocator(var_100_string, var_110_bool, var_107_cvector, var_108_cvector); // 0xa95 ObjFunc
	var_113_bool = var_110_bool == 0; // 0xa97 Not
	if(var_113_bool == 0) goto Label_2719; // 0xa98 JumpB
	var_114_string = "Warning: outdoor scene locator "; // 0xa99 PushS
	var_115_int = var_114_string + var_100_string; // 0xa9a Add
	var_116_string = " doesnt exist"; // 0xa9b PushS
	var_117_int = var_115_int + var_116_string; // 0xa9c Add
	Trace(var_117_int); // 0xa9d Func
	
Label_2719:
	GetMap(var_99_object); // 0xa9f ObjFunc
	var_118_bool = var_99_object == 0; // 0xaa1 NullEq
	if(var_118_bool == 0) goto Label_2727; // 0xaa2 JumpB
	var_119_string = "Can't find map"; // 0xaa3 PushS
	Trace(var_119_string); // 0xaa4 Func
	return 8; // 0xaa6 Return
	
Label_2727:
	var_120_float = GetByIndex(var_107_cvector, 0); // 0xaa7 PushE
	var_121_float = GetByIndex(var_107_cvector, 2); // 0xaa8 PushE
	SetMapParams(var_120_float, var_121_float, var_101_float); // 0xaa9 ObjFunc
	return 8; // 0xaab Return
}


func_2444()
{
	var_139_int = 0; var_140_int = 0; // 0x98c PushV
	func_2616(); // 0x98e NEW_2
	var_149_bool = 0; var_150_string = ""; var_151_string = ""; // 0x990 PushV
	var_150_string = "quest_b6_03"; // 0x991 MovS
	var_151_string = "completed"; // 0x992 MovS
	func_2331(var_149_bool, var_150_string, var_151_string); // 0x993 NEW_2
	var_152_string = "b6q03_diary"; // 0x995 PushS
	var_153_int = 1; // 0x996 PushI
	RemoveItemByType(var_140_int, var_152_string, var_153_int); // 0x997 ObjFunc
	return 2; // 0x999 Return
}


func_1937(var_64_bool)
{
	var_64_bool = 1; // 0x791 MovB
	return 0; // 0x792 Return
}


func_1939()
{
	StopAnimation(); // 0x793 Func
	StopGroup0(); // 0x795 Func
	return 0; // 0x797 Return
}


func_1944(var_41_float)
{
	var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); // 0x798 PushV
	GetPosition(var_46_cvector); // 0x799 Func
	GetPosition(var_47_cvector); // 0x79b ObjFunc
	var_48_cvector = var_47_cvector - var_46_cvector; // 0x79d Sub2
	var_41_float = var_48_cvector | var_48_cvector; // 0x79e Or2
	return 6; // 0x79f Return
}


func_2458()
{
	var_99_object = Obj(); var_100_string = ""; var_101_float = 0; // 0x99b PushV
	var_102_object = Obj(); // 0x99c PushV
	func_2683(var_102_object); // 0x99d NEW_2
	var_99_object = var_102_object; // 0x99e Mov
	var_100_string = "pt_map_nina"; // 0x9a0 MovS
	var_101_float = 2; // 0x9a1 MovI
	func_2700(var_99_object, var_100_string, var_101_float); // 0x9a2 NEW_2
	var_122_object = Obj(); // 0x9a4 PushV
	func_2683(var_122_object); // 0x9a5 NEW_2
	ShowMap(var_122_object); // 0x9a7 ObjFunc
	return 0; // 0x9a9 Return
}


func_1692(var_0_object)
{
	var_26_bool = 0; // 0x69c PushV
	func_1978(var_26_bool); // 0x69d NEW_2
	var_29_bool = var_26_bool == 0; // 0x69f Not
	if(var_29_bool == 0) goto Label_1699; // 0x6a0 JumpB
	Hold(); // 0x6a1 Func
	
Label_1699:
	GetDirection(var_0_object); // 0x6a3 Func
	
Label_1701:
	func_1868(); // 0x6a6 NEW_2
	goto Label_1701; // 0x6a8 Jump
}


func_415(var_2_object, var_325_string)
{
	var_326_bool = 0; // 0x1a0 PushV
	func_2395(var_326_bool); // 0x1a1 NEW_2
	var_327_bool = var_326_bool == 0; // 0x1a3 Not
	if(var_327_bool == 0) goto Label_422; // 0x1a4 JumpB
	return 0; // 0x1a5 Return
	
Label_422:
	var_328_bool = var_325_string == var_2_object; // 0x1a6 Eq
	if(var_328_bool == 0) goto Label_425; // 0x1a7 JumpB
	return 0; // 0x1a8 Return
	
Label_425:
	var_329_string = ""; var_330_bool = 0; // 0x1a9 PushV
	var_329_string = var_325_string; // 0x1aa Mov
	var_331_string = ""; // 0x1ab PushS
	var_332_bool = var_325_string == var_331_string; // 0x1ac Eq
	if(var_332_bool == 0) goto Label_432; // 0x1ad JumpB
	var_330_bool = 0; // 0x1ae MovB
	goto Label_433; // 0x1af Jump
	
Label_433:
	func_2224(var_329_string, var_330_bool); // 0x1b1 NEW_2
	var_2_object = var_325_string; // 0x1b3 TMov
	return 0; // 0x1b4 Return
	
Label_432:
	var_330_bool = 1; // 0x1b0 MovB
}


func_2208(var_251_string)
{
	var_252_bool = 0; var_253_float = 0; var_254_float = 0; var_255_bool = 0; var_256_float = 0; var_257_float = 0; // 0x8a0 PushV
	lshHasAnimation(var_255_bool, var_251_string); // 0x8a1 Func
	var_258_bool = var_255_bool; // 0x8a3 Push
	if(var_258_bool == 0) goto Label_2219; // 0x8a4 JumpB
	lshGetAnimTimes(var_251_string, var_256_float, var_257_float); // 0x8a5 Func
	var_259_bool = 0; // 0x8a7 PushB
	lshPlayAnimation(var_256_float, var_257_float, var_259_bool); // 0x8a8 Func
	goto Label_2223; // 0x8aa Jump
	
Label_2223:
	return 6; // 0x8af Return
	
Label_2219:
	var_260_string = "Can't find lsh animation : "; // 0x8ab PushS
	var_261_int = var_260_string + var_251_string; // 0x8ac Add
	Trace(var_261_int); // 0x8ad Func
}


func_1952(var_162_string, var_163_int)
{
	var_164_int = 0; var_165_int = 0; // 0x7a0 PushV
	GetProperty(var_162_string, var_165_int); // 0x7a1 ObjFunc
	var_166_int = var_165_int + var_163_int; // 0x7a3 Add
	SetProperty(var_162_string, var_166_int); // 0x7a4 ObjFunc
	return 2; // 0x7a6 Return
}


func_1959(var_34_bool, var_35_cvector)
{
	var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_bool = 0; var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_bool = 0; // 0x7a7 PushV
	GetPosition(var_39_cvector); // 0x7a8 Func
	var_40_cvector = var_35_cvector - var_39_cvector; // 0x7aa Sub2
	var_42_float = GetByIndex(var_40_cvector, 0); // 0x7ab PushE
	var_43_float = GetByIndex(var_40_cvector, 2); // 0x7ac PushE
	Rotate(var_42_float, var_43_float, var_41_bool); // 0x7ad Func
	var_34_bool = var_41_bool; // 0x7af Mov
	return 6; // 0x7b0 Return
}


func_1706(var_51_bool)
{
	var_52_object = Obj(); var_53_object = Obj(); // 0x6aa PushV
	var_54_string = "player"; // 0x6ab PushS
	FindActor(var_53_object, var_54_string); // 0x6ac Func
	var_55_bool = var_53_object == 0; // 0x6ae Not
	if(var_55_bool == 0) goto Label_1714; // 0x6af JumpB
	var_51_bool = 0; // 0x6b0 MovB
	return 2; // 0x6b1 Return
	
Label_1714:
	var_56_bool = 0; var_57_object = Obj(); // 0x6b2 PushV
	var_57_object = var_53_object; // 0x6b3 Mov
	func_1969(var_57_object); // 0x6b4 NEW_2
	var_51_bool = var_56_bool; // 0x6b5 Mov
	return 2; // 0x6b7 Return
}


func_2474()
{
	var_34_string = "oob12Maria1"; // 0x9ab PushS
	var_35_int = 1; // 0x9ac PushI
	SetVariable(var_34_string, var_35_int); // 0x9ad Func
	return 0; // 0x9af Return
}


func_2733(var_114_int)
{
	var_115_int = 0; var_116_int = 0; // 0xaad PushV
	var_117_string = "branch"; // 0xaae PushS
	GetVariable(var_117_string, var_116_int); // 0xaaf Func
	var_118_int = 0; // 0xab1 PushI
	var_119_bool = var_116_int == var_118_int; // 0xab2 Eq
	if(var_119_bool == 0) goto Label_2743; // 0xab3 JumpB
	var_114_int = 1; // 0xab4 MovI
	return 2; // 0xab5 Return
	
Label_2743:
	var_120_int = 1; // 0xab7 PushI
	var_121_bool = var_116_int == var_120_int; // 0xab8 Eq
	if(var_121_bool == 0) goto Label_2748; // 0xab9 JumpB
	var_114_int = 2; // 0xaba MovI
	return 2; // 0xabb Return
	
Label_2748:
	var_114_int = 3; // 0xabc MovI
	return 2; // 0xabd Return
}


func_2224(var_229_string, var_230_bool)
{
	var_233_bool = 0; var_234_float = 0; var_235_float = 0; var_236_bool = 0; var_237_float = 0; var_238_float = 0; // 0x8b0 PushV
	lshHasAnimation(var_236_bool, var_229_string); // 0x8b1 Func
	var_239_bool = var_236_bool; // 0x8b3 Push
	if(var_239_bool == 0) goto Label_2234; // 0x8b4 JumpB
	lshGetAnimTimes(var_229_string, var_237_float, var_238_float); // 0x8b5 Func
	lshPlayAnimation(var_237_float, var_238_float, var_230_bool); // 0x8b7 Func
	goto Label_2238; // 0x8b9 Jump
	
Label_2238:
	return 6; // 0x8be Return
	
Label_2234:
	var_240_string = "Can't find lsh animation : "; // 0x8ba PushS
	var_241_int = var_240_string + var_229_string; // 0x8bb Add
	Trace(var_241_int); // 0x8bc Func
}


func_2480()
{
	var_44_string = "oob12Maria2"; // 0x9b1 PushS
	var_45_int = 1; // 0x9b2 PushI
	SetVariable(var_44_string, var_45_int); // 0x9b3 Func
	return 0; // 0x9b5 Return
}


func_1969(var_30_bool)
{
	var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); // 0x7b1 PushV
	GetPosition(var_33_cvector); // 0x7b2 ObjFunc
	var_34_bool = 0; var_35_cvector = CVector(0,0,0); // 0x7b4 PushV
	var_35_cvector = var_33_cvector; // 0x7b5 Mov
	func_1959(var_34_bool, var_35_cvector); // 0x7b6 NEW_2
	var_30_bool = var_34_bool; // 0x7b7 Mov
	return 2; // 0x7b9 Return
}


func_2486()
{
	var_38_string = "b12q01MariaFinalTalk"; // 0x9b7 PushS
	var_39_int = 1; // 0x9b8 PushI
	SetVariable(var_38_string, var_39_int); // 0x9b9 Func
	return 0; // 0x9bb Return
}


func_1721(var_0_object)
{
	var_103_float = GetByIndex(var_0_object, 0); // 0x6b9 PushE
	var_104_float = GetByIndex(var_0_object, 2); // 0x6ba PushE
	RotateAsync(var_103_float, var_104_float); // 0x6bb Func
	return 0; // 0x6bd Return
}


func_1978(var_26_bool)
{
	var_27_bool = 0; var_28_bool = 0; // 0x7ba PushV
	IsLoaded(var_28_bool); // 0x7bb Func
	var_26_bool = var_28_bool; // 0x7bd Mov
	return 2; // 0x7be Return
}


func_2492(var_154_object)
{
	var_156_string = "money2000 is given"; // 0x9bd PushS
	Trace(var_156_string); // 0x9be Func
	var_157_object = Obj(); var_158_int = 0; // 0x9c0 PushV
	var_157_object = var_154_object; // 0x9c1 Mov
	var_158_int = 2000; // 0x9c2 MovI
	func_2305(var_157_object, var_158_int); // 0x9c3 NEW_2
	return 0; // 0x9c5 Return
}


func_1726(var_34_bool)
{
	var_35_object = Obj(); var_36_bool = 0; var_37_object = Obj(); var_38_bool = 0; // 0x6be PushV
	var_39_string = "player"; // 0x6bf PushS
	FindActor(var_37_object, var_39_string); // 0x6c0 Func
	var_40_bool = var_37_object == 0; // 0x6c2 Not
	if(var_40_bool == 0) goto Label_1734; // 0x6c3 JumpB
	var_34_bool = 0; // 0x6c4 MovB
	return 4; // 0x6c5 Return
	
Label_1734:
	var_41_float = 0; var_42_object = Obj(); // 0x6c6 PushV
	var_42_object = var_37_object; // 0x6c7 Mov
	func_1944(var_42_object); // 0x6c8 NEW_2
	var_49_float = 90000.0; // 0x6ca PushF
	var_50_bool = var_41_float > var_49_float; // 0x6cb GT
	if(var_50_bool == 0) goto Label_1743; // 0x6cc JumpB
	var_34_bool = 0; // 0x6cd MovB
	return 4; // 0x6ce Return
	
Label_1743:
	CanSee(var_38_bool, var_37_object); // 0x6cf Func
	var_34_bool = var_38_bool; // 0x6d1 Mov
	return 4; // 0x6d2 Return
}


func_2239(var_157_bool, var_158_string)
{
	var_159_bool = 0; var_160_bool = 0; // 0x8bf PushV
	var_161_bool = 0; // 0x8c0 PushV
	func_2395(var_161_bool); // 0x8c1 NEW_2
	if(var_161_bool == 0) goto Label_2252; // 0x8c3 JumpB
	lshHasSpeech(var_160_bool, var_158_string); // 0x8c4 Func
	var_162_bool = var_160_bool; // 0x8c6 Push
	if(var_162_bool == 0) goto Label_2252; // 0x8c7 JumpB
	lshPlaySpeech(var_158_string); // 0x8c8 Func
	var_157_bool = 1; // 0x8ca MovB
	return 2; // 0x8cb Return
	
Label_2252:
	var_157_bool = 0; // 0x8cc MovB
	return 2; // 0x8cd Return
}


func_2750(var_382_int)
{
	var_383_int = 0; var_384_int = 0; // 0xabe PushV
	var_385_string = "game_final"; // 0xabf PushS
	GetVariable(var_385_string, var_384_int); // 0xac0 Func
	var_382_int = var_384_int; // 0xac2 Mov
	return 2; // 0xac3 Return
}


func_1983(var_62_bool, var_64_float)
{
	var_65_float = 0; var_66_cvector = CVector(0,0,0); var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); var_72_bool = 0; var_73_bool = 0; var_74_float = 0; var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0); var_79_cvector = CVector(0,0,0); var_80_cvector = CVector(0,0,0); var_81_bool = 0; var_82_bool = 0; // 0x7bf PushV
	GetPosition(var_75_cvector); // 0x7c0 ObjFunc
	GetEyesHeight(var_74_float); // 0x7c2 ObjFunc
	var_83_float = GetByIndex(var_75_cvector, 1); // 0x7c4 PushE
	var_83_float = var_83_float + var_74_float; // 0x7c5 Add2
	SetByIndex(var_75_cvector, 1) = var_83_float; // 0x7c6 PopE
	GetPosition(var_76_cvector); // 0x7c7 Func
	GetEyesHeight(var_74_float); // 0x7c9 Func
	var_84_float = GetByIndex(var_76_cvector, 1); // 0x7cb PushE
	var_84_float = var_84_float + var_74_float; // 0x7cc Add2
	SetByIndex(var_76_cvector, 1) = var_84_float; // 0x7cd PopE
	var_77_cvector = var_75_cvector - var_76_cvector; // 0x7ce Sub2
	var_85_float = GetByIndex(var_77_cvector, 1); // 0x7cf PushE
	var_85_float = 0; // 0x7d0 MovI
	SetByIndex(var_77_cvector, 1) = var_85_float; // 0x7d1 PopE
	var_86_int = var_77_cvector | var_77_cvector; // 0x7d2 Or
	var_87_float = sqrt(var_86_int); // 0x7d3 Sqrt
	var_77_cvector = var_77_cvector / var_77_cvector; // 0x7d4 Div2
	var_78_cvector = -var_77_cvector; // 0x7d5 Neg2
	var_88_float = var_77_cvector * var_64_float; // 0x7d6 Mult
	var_89_cvector = CVector(0,0,0); var_90_cvector = CVector(0,0,0); // 0x7d7 PushV
	var_91_cvector = CVector(0.0, 1.0, 0.0); // 0x7d8 PushVec
	var_90_cvector = var_78_cvector ^ var_91_cvector; // 0x7d9 Xor2
	func_2267(var_89_cvector, var_90_cvector); // 0x7da NEW_2
	var_97_int = 25; // 0x7dc PushI
	var_98_float = var_89_cvector * var_97_int; // 0x7dd Mult
	var_99_int = var_88_float + var_98_float; // 0x7de Add
	var_100_cvector = CVector(0.0, 10.0, 0.0); // 0x7df PushVec
	var_79_cvector = var_99_int - var_100_cvector; // 0x7e0 Sub2
	var_80_cvector = var_76_cvector + var_79_cvector; // 0x7e1 Add2
	IsOverrideActive(var_81_bool); // 0x7e2 Func
	var_101_bool = var_81_bool; // 0x7e4 Push
	if(var_101_bool == 0) goto Label_2024; // 0x7e5 JumpB
	var_62_bool = 0; // 0x7e6 MovB
	return 18; // 0x7e7 Return
	
Label_2024:
	StopWorld(); // 0x7e8 Func
	var_102_bool = 1; // 0x7ea PushB
	CameraTransit(var_80_cvector, var_78_cvector, var_102_bool); // 0x7eb Func
	var_103_float = GetByIndex(var_79_cvector, 0); // 0x7ed PushE
	var_104_float = GetByIndex(var_79_cvector, 2); // 0x7ee PushE
	Rotate(var_103_float, var_104_float); // 0x7ef Func
	var_105_bool = 0; // 0x7f1 PushV
	func_2395(var_105_bool); // 0x7f2 NEW_2
	if(var_105_bool == 0) goto Label_2038; // 0x7f4 JumpB
	goto Label_2046; // 0x7f5 Jump
	
Label_2046:
	CameraWaitForPlayFinish(); // 0x7fe Func
	ResumeWorld(); // 0x800 Func
	var_62_bool = 1; // 0x802 MovB
	return 18; // 0x803 Return
	
Label_2038:
	var_106_string = "head"; // 0x7f6 PushS
	HasAnimationTrack(var_82_bool, var_106_string); // 0x7f7 Func
	var_107_bool = var_82_bool; // 0x7f9 Push
	if(var_107_bool == 0) goto Label_2046; // 0x7fa JumpB
	var_108_string = "head"; // 0x7fb PushS
	LookAsyncCamera(var_108_string); // 0x7fc Func
}


func_2756(var_44_object)
{
	var_45_int = 0; var_46_int = 0; var_47_int = 0; var_48_int = 0; // 0xac4 PushV
	var_49_string = "mt_maria"; // 0xac5 PushS
	GetVariable(var_49_string, var_47_int); // 0xac6 Func
	var_50_bool = var_47_int == 0; // 0xac8 Not
	if(var_50_bool == 0) goto Label_2772; // 0xac9 JumpB
	var_51_int = 0; var_52_object = Obj(); // 0xaca PushV
	var_52_object = var_44_object; // 0xacb Mov
	TaskCall(0); // 0xacc TaskCall
	func_0(var_53_object, var_51_int, var_52_object); // 0xacd NEW_2
	TaskReturn(); // 0xace TaskReturn
	var_276_string = "mt_maria"; // 0xad0 PushS
	var_277_int = 1; // 0xad1 PushI
	SetVariable(var_276_string, var_277_int); // 0xad2 Func
	
Label_2772:
	var_278_bool = 0; var_279_int = 0; // 0xad4 PushV
	var_279_int = 6; // 0xad5 MovI
	func_2357(var_278_bool, var_279_int); // 0xad6 NEW_2
	if(var_278_bool == 0) goto Label_2784; // 0xad8 JumpB
	var_281_int = 0; var_282_object = Obj(); // 0xad9 PushV
	var_282_object = var_44_object; // 0xada Mov
	TaskCall(2); // 0xadb TaskCall
	func_226(var_283_object, var_281_int, var_282_object); // 0xadc NEW_2
	TaskReturn(); // 0xadd TaskReturn
	return 4; // 0xadf Return
	
Label_2784:
	var_380_bool = 0; var_381_int = 0; // 0xae0 PushV
	var_381_int = 12; // 0xae1 MovI
	func_2357(var_380_bool, var_381_int); // 0xae2 NEW_2
	if(var_380_bool == 0) goto Label_2818; // 0xae4 JumpB
	var_382_int = 0; // 0xae5 PushV
	func_2750(var_382_int); // 0xae6 NEW_2
	var_386_int = 0; // 0xae8 PushI
	var_387_bool = var_382_int != var_386_int; // 0xae9 Neq
	if(var_387_bool == 0) goto Label_2802; // 0xaea JumpB
	var_388_int = 0; var_389_object = Obj(); // 0xaeb PushV
	var_389_object = var_44_object; // 0xaec Mov
	TaskCall(4); // 0xaed TaskCall
	func_804(var_390_object, var_388_int, var_389_object); // 0xaee NEW_2
	TaskReturn(); // 0xaef TaskReturn
	goto Label_2817; // 0xaf1 Jump
	
Label_2817:
	return 4; // 0xb01 Return
	
Label_2802:
	var_475_string = "d12_maria"; // 0xaf2 PushS
	GetVariable(var_475_string, var_48_int); // 0xaf3 Func
	var_476_bool = var_48_int == 0; // 0xaf5 Not
	if(var_476_bool == 0) goto Label_2817; // 0xaf6 JumpB
	var_477_int = 0; var_478_object = Obj(); // 0xaf7 PushV
	var_478_object = var_44_object; // 0xaf8 Mov
	TaskCall(6); // 0xaf9 TaskCall
	func_1226(var_479_object, var_477_int, var_478_object); // 0xafa NEW_2
	TaskReturn(); // 0xafb TaskReturn
	var_536_string = "d12_maria"; // 0xafd PushS
	var_537_int = 1; // 0xafe PushI
	SetVariable(var_536_string, var_537_int); // 0xaff Func
	
Label_2818:
	var_538_int = 0; var_539_object = Obj(); // 0xb02 PushV
	var_539_object = var_44_object; // 0xb03 Mov
	TaskCall(8); // 0xb04 TaskCall
	func_1485(var_540_object, var_538_int, var_539_object); // 0xb05 NEW_2
	TaskReturn(); // 0xb06 TaskReturn
	return 4; // 0xb08 Return
}


func_2502()
{
	var_177_string = "playsound"; // 0x9c7 PushS
	var_178_string = "givemoney"; // 0x9c8 PushS
	TriggerWorld(var_177_string, var_178_string); // 0x9c9 Func
	return 0; // 0x9cb Return
}


func_1226(var_0_object, var_477_int, var_478_object)
{
	var_480_object = Obj(); var_481_bool = 0; var_482_int = 0; var_483_bool = 0; var_484_object = Obj(); var_485_bool = 0; var_486_int = 0; var_487_bool = 0; // 0x4ca PushV
	var_0_object = var_478_object; // 0x4cb TMov
	var_488_bool = 0; var_489_object = Obj(); var_490_float = 0; // 0x4cc PushV
	var_489_object = var_478_object; // 0x4cd Mov
	var_490_float = 70.0; // 0x4ce MovF
	func_1983(var_489_object, var_490_float); // 0x4cf NEW_2
	var_491_bool = var_488_bool == 0; // 0x4d1 Not
	if(var_491_bool == 0) goto Label_1237; // 0x4d2 JumpB
	var_477_int = -2; // 0x4d3 MovI
	return 8; // 0x4d4 Return
	
Label_1237:
	CreateDialog(var_484_object); // 0x4d5 Func
	var_492_int = 0; // 0x4d7 PushV
	func_2389(var_492_int); // 0x4d8 NEW_2
	SetNPCName(var_492_int); // 0x4da ObjFunc
	var_493_int = 0; // 0x4dc PushV
	func_2387(var_493_int); // 0x4dd NEW_2
	SetNPCDescription(var_493_int); // 0x4df ObjFunc
	var_494_string = ""; // 0x4e1 PushV
	func_2391(var_494_string); // 0x4e2 NEW_2
	SetPhoto(var_494_string); // 0x4e4 ObjFunc
	var_495_string = ""; // 0x4e6 PushV
	func_2393(var_495_string); // 0x4e7 NEW_2
	SetPhoto2(var_495_string); // 0x4e9 ObjFunc
	var_496_int = 0; // 0x4eb PushV
	func_2733(var_496_int); // 0x4ec NEW_2
	SetPlayerName(var_496_int); // 0x4ee ObjFunc
	var_486_int = -1; // 0x4f0 MovI
	IsOverrideActive(var_485_bool); // 0x4f1 Func
	var_497_bool = var_485_bool; // 0x4f3 Push
	if(var_497_bool == 0) goto Label_1271; // 0x4f4 JumpB
	var_477_int = -2; // 0x4f5 MovI
	return 8; // 0x4f6 Return
	
Label_1271:
	DoDialog(var_484_object); // 0x4f7 Func
	var_498_bool = 0; var_499_object = Obj(); // 0x4f9 PushV
	var_500_object = Obj(); // 0x4fa PushV
	func_2261(var_500_object); // 0x4fb NEW_2
	var_499_object = var_500_object; // 0x4fc Mov
	func_2070(var_498_bool, var_499_object); // 0x4fe NEW_2
	var_501_object = Obj(); var_502_object = Obj(); // 0x500 PushV
	var_501_object = var_478_object; // 0x501 Mov
	var_502_object = var_484_object; // 0x502 Mov
	TaskCall(7); // 0x503 TaskCall
	func_1307(var_503_object, var_504_object, var_505_string, var_506_bool, var_501_object, var_502_object); // 0x504 NEW_2
	TaskReturn(); // 0x505 TaskReturn
	IsDialogEnd(var_487_bool); // 0x507 ObjFunc
	
Label_1289:
	var_534_bool = var_487_bool == 0; // 0x509 Not
	if(var_534_bool == 0) goto Label_1296; // 0x50a JumpB
	sync(); // 0x50b Func
	IsDialogEnd(var_487_bool); // 0x50d ObjFunc
	goto Label_1289; // 0x50f Jump
	
Label_1296:
	var_535_object = Obj(); // 0x510 PushV
	var_535_object = var_478_object; // 0x511 Mov
	func_2052(); // 0x512 NEW_2
	StopDialog(var_484_object); // 0x514 Func
	GetReturnValue(var_486_int); // 0x516 ObjFunc
	var_477_int = var_486_int; // 0x518 Mov
	return 8; // 0x519 Return
}


func_2508(var_366_bool)
{
	var_368_int = 0; var_369_string = ""; // 0x9cd PushV
	var_369_string = "oob6Maria1"; // 0x9ce MovS
	func_2277(var_368_int, var_369_string); // 0x9cf NEW_2
	var_370_int = 0; // 0x9d1 PushI
	var_371_bool = var_368_int == var_370_int; // 0x9d2 Eq
	if(var_371_bool == 0) goto Label_2518; // 0x9d3 JumpB
	var_366_bool = 1; // 0x9d4 MovB
	return 0; // 0x9d5 Return
	
Label_2518:
	var_366_bool = 0; // 0x9d6 MovB
	return 0; // 0x9d7 Return
}


func_1485(var_0_object, var_538_int, var_539_object)
{
	var_541_object = Obj(); var_542_bool = 0; var_543_int = 0; var_544_bool = 0; var_545_object = Obj(); var_546_bool = 0; var_547_int = 0; var_548_bool = 0; // 0x5cd PushV
	var_0_object = var_539_object; // 0x5ce TMov
	var_549_bool = 0; var_550_object = Obj(); var_551_float = 0; // 0x5cf PushV
	var_550_object = var_539_object; // 0x5d0 Mov
	var_551_float = 70.0; // 0x5d1 MovF
	func_1983(var_550_object, var_551_float); // 0x5d2 NEW_2
	var_552_bool = var_549_bool == 0; // 0x5d4 Not
	if(var_552_bool == 0) goto Label_1496; // 0x5d5 JumpB
	var_538_int = -2; // 0x5d6 MovI
	return 8; // 0x5d7 Return
	
Label_1496:
	CreateDialog(var_545_object); // 0x5d8 Func
	var_553_int = 0; // 0x5da PushV
	func_2389(var_553_int); // 0x5db NEW_2
	SetNPCName(var_553_int); // 0x5dd ObjFunc
	var_554_int = 0; // 0x5df PushV
	func_2387(var_554_int); // 0x5e0 NEW_2
	SetNPCDescription(var_554_int); // 0x5e2 ObjFunc
	var_555_string = ""; // 0x5e4 PushV
	func_2391(var_555_string); // 0x5e5 NEW_2
	SetPhoto(var_555_string); // 0x5e7 ObjFunc
	var_556_string = ""; // 0x5e9 PushV
	func_2393(var_556_string); // 0x5ea NEW_2
	SetPhoto2(var_556_string); // 0x5ec ObjFunc
	var_557_int = 0; // 0x5ee PushV
	func_2733(var_557_int); // 0x5ef NEW_2
	SetPlayerName(var_557_int); // 0x5f1 ObjFunc
	var_547_int = -1; // 0x5f3 MovI
	IsOverrideActive(var_546_bool); // 0x5f4 Func
	var_558_bool = var_546_bool; // 0x5f6 Push
	if(var_558_bool == 0) goto Label_1530; // 0x5f7 JumpB
	var_538_int = -2; // 0x5f8 MovI
	return 8; // 0x5f9 Return
	
Label_1530:
	DoDialog(var_545_object); // 0x5fa Func
	var_559_bool = 0; var_560_object = Obj(); // 0x5fc PushV
	var_561_object = Obj(); // 0x5fd PushV
	func_2261(var_561_object); // 0x5fe NEW_2
	var_560_object = var_561_object; // 0x5ff Mov
	func_2070(var_559_bool, var_560_object); // 0x601 NEW_2
	var_562_object = Obj(); var_563_object = Obj(); // 0x603 PushV
	var_562_object = var_539_object; // 0x604 Mov
	var_563_object = var_545_object; // 0x605 Mov
	TaskCall(9); // 0x606 TaskCall
	func_1566(var_564_object, var_565_object, var_566_string, var_567_bool, var_562_object, var_563_object); // 0x607 NEW_2
	TaskReturn(); // 0x608 TaskReturn
	IsDialogEnd(var_548_bool); // 0x60a ObjFunc
	
Label_1548:
	var_592_bool = var_548_bool == 0; // 0x60c Not
	if(var_592_bool == 0) goto Label_1555; // 0x60d JumpB
	sync(); // 0x60e Func
	IsDialogEnd(var_548_bool); // 0x610 ObjFunc
	goto Label_1548; // 0x612 Jump
	
Label_1555:
	var_593_object = Obj(); // 0x613 PushV
	var_593_object = var_539_object; // 0x614 Mov
	func_2052(); // 0x615 NEW_2
	StopDialog(var_545_object); // 0x617 Func
	GetReturnValue(var_547_int); // 0x619 ObjFunc
	var_538_int = var_547_int; // 0x61b Mov
	return 8; // 0x61c Return
}


func_2254()
{
	var_29_bool = 0; // 0x8ce PushV
	func_2395(var_29_bool); // 0x8cf NEW_2
	if(var_29_bool == 0) goto Label_2260; // 0x8d1 JumpB
	lshStopSpeech(); // 0x8d2 Func
	
Label_2260:
	return 0; // 0x8d4 Return
}


func_978(var_2_object, var_419_string)
{
	var_420_bool = 0; // 0x3d3 PushV
	func_2395(var_420_bool); // 0x3d4 NEW_2
	var_421_bool = var_420_bool == 0; // 0x3d6 Not
	if(var_421_bool == 0) goto Label_985; // 0x3d7 JumpB
	return 0; // 0x3d8 Return
	
Label_985:
	var_422_bool = var_419_string == var_2_object; // 0x3d9 Eq
	if(var_422_bool == 0) goto Label_988; // 0x3da JumpB
	return 0; // 0x3db Return
	
Label_988:
	var_423_string = ""; var_424_bool = 0; // 0x3dc PushV
	var_423_string = var_419_string; // 0x3dd Mov
	var_425_string = ""; // 0x3de PushS
	var_426_bool = var_419_string == var_425_string; // 0x3df Eq
	if(var_426_bool == 0) goto Label_995; // 0x3e0 JumpB
	var_424_bool = 0; // 0x3e1 MovB
	goto Label_996; // 0x3e2 Jump
	
Label_996:
	func_2224(var_423_string, var_424_bool); // 0x3e4 NEW_2
	var_2_object = var_419_string; // 0x3e6 TMov
	return 0; // 0x3e7 Return
	
Label_995:
	var_424_bool = 1; // 0x3e3 MovB
}


func_1748()
{
	var_596_float = 0; var_597_float = 0; // 0x6d4 PushV
	var_598_int = 8; // 0x6d5 PushI
	var_599_int = 16; // 0x6d6 PushI
	rand(var_597_float, var_598_int, var_599_int); // 0x6d7 Func
	var_600_int = 10; // 0x6d9 PushI
	SetTimer(var_600_int, var_597_float); // 0x6da Func
	return 2; // 0x6dc Return
}


func_2261(var_125_object)
{
	var_126_object = Obj(); var_127_object = Obj(); // 0x8d5 PushV
	self(var_127_object); // 0x8d6 Func
	var_125_object = var_127_object; // 0x8d8 Mov
	return 2; // 0x8d9 Return
}


func_2520(var_347_bool)
{
	var_349_int = 0; var_350_string = ""; // 0x9d9 PushV
	var_350_string = "b6q03"; // 0x9da MovS
	func_2277(var_349_int, var_350_string); // 0x9db NEW_2
	var_351_int = 0; // 0x9dd PushI
	var_352_bool = var_349_int == var_351_int; // 0x9de Eq
	if(var_352_bool == 0) goto Label_2530; // 0x9df JumpB
	var_347_bool = 1; // 0x9e0 MovB
	return 0; // 0x9e1 Return
	
Label_2530:
	var_347_bool = 0; // 0x9e2 MovB
	return 0; // 0x9e3 Return
}


func_2267(var_89_cvector, var_90_cvector)
{
	var_92_float = 0; var_93_float = 0; // 0x8db PushV
	var_94_int = var_90_cvector | var_90_cvector; // 0x8dc Or
	var_93_float = sqrt(var_94_int); // 0x8dd Sqrt2
	var_95_float = 0.0; // 0x8de PushF
	var_96_bool = var_93_float < var_95_float; // 0x8df LT
	if(var_96_bool == 0) goto Label_2275; // 0x8e0 JumpB
	var_89_cvector = CVector(0.0, 0.0, 0.0); // 0x8e1 MovV
	return 2; // 0x8e2 Return
	
Label_2275:
	var_89_cvector = var_90_cvector / var_90_cvector; // 0x8e3 Div2
	return 2; // 0x8e4 Return
}


func_1757()
{
	var_595_int = 10; // 0x6dd PushI
	KillTimer(var_595_int); // 0x6de Func
	return 0; // 0x6e0 Return
}


func_226(var_0_object, var_281_int, var_282_object)
{
	var_284_object = Obj(); var_285_bool = 0; var_286_int = 0; var_287_bool = 0; var_288_object = Obj(); var_289_bool = 0; var_290_int = 0; var_291_bool = 0; // 0xe2 PushV
	var_0_object = var_282_object; // 0xe3 TMov
	var_292_bool = 0; var_293_object = Obj(); var_294_float = 0; // 0xe4 PushV
	var_293_object = var_282_object; // 0xe5 Mov
	var_294_float = 70.0; // 0xe6 MovF
	func_1983(var_293_object, var_294_float); // 0xe7 NEW_2
	var_295_bool = var_292_bool == 0; // 0xe9 Not
	if(var_295_bool == 0) goto Label_237; // 0xea JumpB
	var_281_int = -2; // 0xeb MovI
	return 8; // 0xec Return
	
Label_237:
	CreateDialog(var_288_object); // 0xed Func
	var_296_int = 0; // 0xef PushV
	func_2389(var_296_int); // 0xf0 NEW_2
	SetNPCName(var_296_int); // 0xf2 ObjFunc
	var_297_int = 0; // 0xf4 PushV
	func_2387(var_297_int); // 0xf5 NEW_2
	SetNPCDescription(var_297_int); // 0xf7 ObjFunc
	var_298_string = ""; // 0xf9 PushV
	func_2391(var_298_string); // 0xfa NEW_2
	SetPhoto(var_298_string); // 0xfc ObjFunc
	var_299_string = ""; // 0xfe PushV
	func_2393(var_299_string); // 0xff NEW_2
	SetPhoto2(var_299_string); // 0x101 ObjFunc
	var_300_int = 0; // 0x103 PushV
	func_2733(var_300_int); // 0x104 NEW_2
	SetPlayerName(var_300_int); // 0x106 ObjFunc
	var_290_int = -1; // 0x108 MovI
	IsOverrideActive(var_289_bool); // 0x109 Func
	var_301_bool = var_289_bool; // 0x10b Push
	if(var_301_bool == 0) goto Label_271; // 0x10c JumpB
	var_281_int = -2; // 0x10d MovI
	return 8; // 0x10e Return
	
Label_271:
	DoDialog(var_288_object); // 0x10f Func
	var_302_bool = 0; var_303_object = Obj(); // 0x111 PushV
	var_304_object = Obj(); // 0x112 PushV
	func_2261(var_304_object); // 0x113 NEW_2
	var_303_object = var_304_object; // 0x114 Mov
	func_2070(var_302_bool, var_303_object); // 0x116 NEW_2
	var_305_object = Obj(); var_306_object = Obj(); // 0x118 PushV
	var_305_object = var_282_object; // 0x119 Mov
	var_306_object = var_288_object; // 0x11a Mov
	TaskCall(3); // 0x11b TaskCall
	func_307(var_307_object, var_308_object, var_309_string, var_310_bool, var_305_object, var_306_object); // 0x11c NEW_2
	TaskReturn(); // 0x11d TaskReturn
	IsDialogEnd(var_291_bool); // 0x11f ObjFunc
	
Label_289:
	var_378_bool = var_291_bool == 0; // 0x121 Not
	if(var_378_bool == 0) goto Label_296; // 0x122 JumpB
	sync(); // 0x123 Func
	IsDialogEnd(var_291_bool); // 0x125 ObjFunc
	goto Label_289; // 0x127 Jump
	
Label_296:
	var_379_object = Obj(); // 0x128 PushV
	var_379_object = var_282_object; // 0x129 Mov
	func_2052(); // 0x12a NEW_2
	StopDialog(var_288_object); // 0x12c Func
	GetReturnValue(var_290_int); // 0x12e ObjFunc
	var_281_int = var_290_int; // 0x130 Mov
	return 8; // 0x131 Return
}


func_2532(var_312_bool)
{
	var_314_int = 0; var_315_string = ""; // 0x9e5 PushV
	var_315_string = "b6q03NinaTalk"; // 0x9e6 MovS
	func_2277(var_314_int, var_315_string); // 0x9e7 NEW_2
	var_318_int = 0; // 0x9e9 PushI
	var_319_bool = var_314_int != var_318_int; // 0x9ea Neq
	if(var_319_bool == 0) goto Label_2542; // 0x9eb JumpB
	var_312_bool = 1; // 0x9ec MovB
	return 0; // 0x9ed Return
	
Label_2542:
	var_312_bool = 0; // 0x9ee MovB
	return 0; // 0x9ef Return
}


func_2277(var_314_int, var_315_string)
{
	var_316_int = 0; var_317_int = 0; // 0x8e5 PushV
	GetVariable(var_315_string, var_317_int); // 0x8e6 Func
	var_314_int = var_317_int; // 0x8e8 Mov
	return 2; // 0x8e9 Return
}


func_2282(var_83_object, var_84_string)
{
	var_85_object = Obj(); var_86_object = Obj(); var_87_object = Obj(); var_88_object = Obj(); // 0x8ea PushV
	GetMainOutdoorScene(var_87_object); // 0x8eb Func
	var_89_string = ".xml"; // 0x8ed PushS
	var_90_int = var_84_string + var_89_string; // 0x8ee Add
	AddBlankActorFromXml(var_88_object, var_87_object, var_84_string, var_90_int); // 0x8ef Func
	var_83_object = var_88_object; // 0x8f1 Mov
	return 4; // 0x8f2 Return
}


func_2544(var_357_bool, var_358_object)
{
	var_359_bool = 0; var_360_object = Obj(); var_361_string = ""; // 0x9f1 PushV
	var_360_object = var_358_object; // 0x9f2 Mov
	var_361_string = "b6q03_diary"; // 0x9f3 MovS
	func_2324(var_360_object, var_361_string); // 0x9f4 NEW_2
	if(var_359_bool == 0) goto Label_2553; // 0x9f6 JumpB
	var_357_bool = 1; // 0x9f7 MovB
	return 0; // 0x9f8 Return
	
Label_2553:
	var_357_bool = 0; // 0x9f9 MovB
	return 0; // 0x9fa Return
}


func_2293(var_170_int, var_171_int)
{
	var_172_object = Obj(); var_173_object = Obj(); // 0x8f5 PushV
	CreateIntVector(var_173_object); // 0x8f6 Func
	add(var_170_int); // 0x8f8 ObjFunc
	add(var_171_int); // 0x8fa ObjFunc
	var_174_int = 3; // 0x8fc PushI
	SendWorldWndMessage(var_174_int, var_173_object); // 0x8fd Func
	return 2; // 0x8ff Return
}


func_2555(var_439_bool)
{
	var_441_int = 0; var_442_string = ""; // 0x9fc PushV
	var_442_string = "game_final"; // 0x9fd MovS
	func_2277(var_441_int, var_442_string); // 0x9fe NEW_2
	var_443_int = 2; // 0xa00 PushI
	var_444_bool = var_441_int == var_443_int; // 0xa01 Eq
	if(var_444_bool == 0) goto Label_2565; // 0xa02 JumpB
	var_439_bool = 1; // 0xa03 MovB
	return 0; // 0xa04 Return
	
Label_2565:
	var_439_bool = 0; // 0xa05 MovB
	return 0; // 0xa06 Return
}


