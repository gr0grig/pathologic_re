task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_cvector)
{
	var_33_int = 1; // 0xa2 PushI
	if(var_33_int == 0) goto Label_202; // 0xa3 JumpB
	func_2482(); // 0xa5 NEW_2
	var_35_int = 19154; // 0xa7 PushI
	var_36_bool = var_31_bool == var_35_int; // 0xa8 Eq
	if(var_36_bool == 0) goto Label_190; // 0xa9 JumpB
	var_37_string = ""; // 0xaa PushV
	var_37_string = "Neutral"; // 0xab MovS
	func_139(var_32_cvector, var_37_string); // 0xac NEW_2
	var_54_int = 518021; // 0xae PushI
	SetMessage(var_54_int); // 0xaf TObjFunc
	ClearReplies(); // 0xb1 TObjFunc
	var_55_int = 518022; // 0xb3 PushI
	var_56_int = -1; // 0xb4 PushI
	var_57_int = 19155; // 0xb5 PushI
	AddReply(var_55_int, var_56_int, var_57_int); // 0xb6 TObjFunc
	var_58_int = 531564; // 0xb8 PushI
	var_59_int = -1; // 0xb9 PushI
	var_60_int = 32923; // 0xba PushI
	AddReply(var_58_int, var_59_int, var_60_int); // 0xbb TObjFunc
	return 0; // 0xbd Return
	
Label_190:
	var_3_string = 1; // 0xbe TMovB
	var_61_bool = 0; // 0xbf PushV
	func_2574(var_61_bool); // 0xc0 NEW_2
	if(var_61_bool == 0) goto Label_198; // 0xc2 JumpB
	lshStopAnimation(); // 0xc3 Func
	goto Label_200; // 0xc5 Jump
	
Label_200:
	return 0; // 0xc8 Return
	
Label_198:
	StopAnimation(); // 0xc6 Func
	
Label_202:
	return 0; // 0xca Return
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_cvector)
{
	var_33_int = 1; // 0x1a4 PushI
	if(var_33_int == 0) goto Label_920; // 0x1a5 JumpB
	func_2482(); // 0x1a7 NEW_2
	var_35_int = 19663; // 0x1a9 PushI
	var_36_bool = var_32_cvector == var_35_int; // 0x1aa Eq
	if(var_36_bool == 0) goto Label_438; // 0x1ab JumpB
	var_37_object = Obj(); var_38_object = Obj(); // 0x1ac PushV
	var_37_object = var_1_object; // 0x1ad MovT
	var_38_object = var_0_object; // 0x1ae MovT
	func_2576(); // 0x1af NEW_2
	var_86_object = Obj(); var_87_object = Obj(); // 0x1b1 PushV
	var_86_object = var_1_object; // 0x1b2 MovT
	var_87_object = var_0_object; // 0x1b3 MovT
	func_2622(); // 0x1b4 NEW_2
	
Label_438:
	var_112_int = 20148; // 0x1b6 PushI
	var_113_bool = var_32_cvector == var_112_int; // 0x1b7 Eq
	if(var_113_bool == 0) goto Label_446; // 0x1b8 JumpB
	var_114_object = Obj(); var_115_object = Obj(); // 0x1b9 PushV
	var_114_object = var_1_object; // 0x1ba MovT
	var_115_object = var_0_object; // 0x1bb MovT
	func_2610(); // 0x1bc NEW_2
	
Label_446:
	var_118_int = 19658; // 0x1be PushI
	var_119_bool = var_31_bool == var_118_int; // 0x1bf Eq
	if(var_119_bool == 0) goto Label_524; // 0x1c0 JumpB
	var_120_bool = 0; var_121_object = Obj(); // 0x1c1 PushV
	var_121_object = var_1_object; // 0x1c2 MovT
	func_2662(var_120_bool, var_121_object); // 0x1c3 NEW_2
	var_128_bool = var_120_bool == 0; // 0x1c5 Not
	if(var_128_bool == 0) goto Label_480; // 0x1c6 JumpB
	var_129_object = Obj(); var_130_object = Obj(); // 0x1c7 PushV
	var_129_object = var_1_object; // 0x1c8 MovT
	var_130_object = var_0_object; // 0x1c9 MovT
	func_2604(); // 0x1ca NEW_2
	var_133_string = ""; // 0x1cc PushV
	var_133_string = "Fear"; // 0x1cd MovS
	func_397(var_32_cvector, var_133_string); // 0x1ce NEW_2
	var_150_int = 518548; // 0x1d0 PushI
	SetMessage(var_150_int); // 0x1d1 TObjFunc
	ClearReplies(); // 0x1d3 TObjFunc
	var_151_int = 518549; // 0x1d5 PushI
	var_152_int = 20132; // 0x1d6 PushI
	var_153_int = 19659; // 0x1d7 PushI
	AddReply(var_151_int, var_152_int, var_153_int); // 0x1d8 TObjFunc
	var_154_int = 519021; // 0x1da PushI
	var_155_int = 20141; // 0x1db PushI
	var_156_int = 20140; // 0x1dc PushI
	AddReply(var_154_int, var_155_int, var_156_int); // 0x1dd TObjFunc
	return 0; // 0x1df Return
	
Label_480:
	var_157_string = ""; // 0x1e0 PushV
	var_157_string = "Sympathy"; // 0x1e1 MovS
	func_397(var_32_cvector, var_157_string); // 0x1e2 NEW_2
	var_158_int = 518550; // 0x1e4 PushI
	SetMessage(var_158_int); // 0x1e5 TObjFunc
	ClearReplies(); // 0x1e7 TObjFunc
	var_159_bool = 0; var_160_object = Obj(); // 0x1e9 PushV
	var_160_object = var_1_object; // 0x1ea MovT
	func_2672(var_160_object); // 0x1eb NEW_2
	if(var_159_bool == 0) goto Label_499; // 0x1ed JumpB
	var_167_int = 518551; // 0x1ee PushI
	var_168_int = 20163; // 0x1ef PushI
	var_169_int = 19661; // 0x1f0 PushI
	AddReply(var_167_int, var_168_int, var_169_int); // 0x1f1 TObjFunc
	
Label_499:
	var_170_bool = 0; // 0x1f3 PushV
	var_170_bool = 0; // 0x1f4 MovB
	var_171_bool = 0; var_172_object = Obj(); // 0x1f5 PushV
	var_172_object = var_1_object; // 0x1f6 MovT
	func_2684(var_172_object); // 0x1f7 NEW_2
	if(var_171_bool == 0) goto Label_512; // 0x1f9 JumpB
	var_177_bool = 0; var_178_object = Obj(); // 0x1fa PushV
	var_178_object = var_1_object; // 0x1fb MovT
	func_2696(var_178_object); // 0x1fc NEW_2
	if(var_177_bool == 0) goto Label_512; // 0x1fe JumpB
	var_170_bool = 1; // 0x1ff MovB
	
Label_512:
	if(var_170_bool == 0) goto Label_518; // 0x200 JumpB
	var_183_int = 519028; // 0x201 PushI
	var_184_int = 20149; // 0x202 PushI
	var_185_int = 20148; // 0x203 PushI
	AddReply(var_183_int, var_184_int, var_185_int); // 0x204 TObjFunc
	
Label_518:
	var_186_int = 518554; // 0x206 PushI
	var_187_int = -1; // 0x207 PushI
	var_188_int = 19664; // 0x208 PushI
	AddReply(var_186_int, var_187_int, var_188_int); // 0x209 TObjFunc
	return 0; // 0x20b Return
	
Label_524:
	var_189_int = 20149; // 0x20c PushI
	var_190_bool = var_31_bool == var_189_int; // 0x20d Eq
	if(var_190_bool == 0) goto Label_547; // 0x20e JumpB
	var_191_string = ""; // 0x20f PushV
	var_191_string = "Confusion"; // 0x210 MovS
	func_397(var_32_cvector, var_191_string); // 0x211 NEW_2
	var_192_int = 519029; // 0x213 PushI
	SetMessage(var_192_int); // 0x214 TObjFunc
	ClearReplies(); // 0x216 TObjFunc
	var_193_int = 519030; // 0x218 PushI
	var_194_int = 20152; // 0x219 PushI
	var_195_int = 20150; // 0x21a PushI
	AddReply(var_193_int, var_194_int, var_195_int); // 0x21b TObjFunc
	var_196_int = 519031; // 0x21d PushI
	var_197_int = -1; // 0x21e PushI
	var_198_int = 20151; // 0x21f PushI
	AddReply(var_196_int, var_197_int, var_198_int); // 0x220 TObjFunc
	return 0; // 0x222 Return
	
Label_547:
	var_199_int = 20152; // 0x223 PushI
	var_200_bool = var_31_bool == var_199_int; // 0x224 Eq
	if(var_200_bool == 0) goto Label_570; // 0x225 JumpB
	var_201_string = ""; // 0x226 PushV
	var_201_string = "Confusion"; // 0x227 MovS
	func_397(var_32_cvector, var_201_string); // 0x228 NEW_2
	var_202_int = 519032; // 0x22a PushI
	SetMessage(var_202_int); // 0x22b TObjFunc
	ClearReplies(); // 0x22d TObjFunc
	var_203_int = 519033; // 0x22f PushI
	var_204_int = 20154; // 0x230 PushI
	var_205_int = 20153; // 0x231 PushI
	AddReply(var_203_int, var_204_int, var_205_int); // 0x232 TObjFunc
	var_206_int = 519035; // 0x234 PushI
	var_207_int = 20154; // 0x235 PushI
	var_208_int = 20155; // 0x236 PushI
	AddReply(var_206_int, var_207_int, var_208_int); // 0x237 TObjFunc
	return 0; // 0x239 Return
	
Label_570:
	var_209_int = 20154; // 0x23a PushI
	var_210_bool = var_31_bool == var_209_int; // 0x23b Eq
	if(var_210_bool == 0) goto Label_593; // 0x23c JumpB
	var_211_string = ""; // 0x23d PushV
	var_211_string = "Confusion"; // 0x23e MovS
	func_397(var_32_cvector, var_211_string); // 0x23f NEW_2
	var_212_int = 519034; // 0x241 PushI
	SetMessage(var_212_int); // 0x242 TObjFunc
	ClearReplies(); // 0x244 TObjFunc
	var_213_int = 519036; // 0x246 PushI
	var_214_int = 20157; // 0x247 PushI
	var_215_int = 20156; // 0x248 PushI
	AddReply(var_213_int, var_214_int, var_215_int); // 0x249 TObjFunc
	var_216_int = 519039; // 0x24b PushI
	var_217_int = 20157; // 0x24c PushI
	var_218_int = 20160; // 0x24d PushI
	AddReply(var_216_int, var_217_int, var_218_int); // 0x24e TObjFunc
	return 0; // 0x250 Return
	
Label_593:
	var_219_int = 20157; // 0x251 PushI
	var_220_bool = var_31_bool == var_219_int; // 0x252 Eq
	if(var_220_bool == 0) goto Label_616; // 0x253 JumpB
	var_221_string = ""; // 0x254 PushV
	var_221_string = "Confusion"; // 0x255 MovS
	func_397(var_32_cvector, var_221_string); // 0x256 NEW_2
	var_222_int = 519037; // 0x258 PushI
	SetMessage(var_222_int); // 0x259 TObjFunc
	ClearReplies(); // 0x25b TObjFunc
	var_223_int = 519038; // 0x25d PushI
	var_224_int = -1; // 0x25e PushI
	var_225_int = 20158; // 0x25f PushI
	AddReply(var_223_int, var_224_int, var_225_int); // 0x260 TObjFunc
	var_226_int = 519040; // 0x262 PushI
	var_227_int = -1; // 0x263 PushI
	var_228_int = 20162; // 0x264 PushI
	AddReply(var_226_int, var_227_int, var_228_int); // 0x265 TObjFunc
	return 0; // 0x267 Return
	
Label_616:
	var_229_int = 20163; // 0x268 PushI
	var_230_bool = var_31_bool == var_229_int; // 0x269 Eq
	if(var_230_bool == 0) goto Label_639; // 0x26a JumpB
	var_231_string = ""; // 0x26b PushV
	var_231_string = "Confusion"; // 0x26c MovS
	func_397(var_32_cvector, var_231_string); // 0x26d NEW_2
	var_232_int = 519041; // 0x26f PushI
	SetMessage(var_232_int); // 0x270 TObjFunc
	ClearReplies(); // 0x272 TObjFunc
	var_233_int = 519042; // 0x274 PushI
	var_234_int = 20165; // 0x275 PushI
	var_235_int = 20164; // 0x276 PushI
	AddReply(var_233_int, var_234_int, var_235_int); // 0x277 TObjFunc
	var_236_int = 519059; // 0x279 PushI
	var_237_int = 20180; // 0x27a PushI
	var_238_int = 20183; // 0x27b PushI
	AddReply(var_236_int, var_237_int, var_238_int); // 0x27c TObjFunc
	return 0; // 0x27e Return
	
Label_639:
	var_239_int = 20165; // 0x27f PushI
	var_240_bool = var_31_bool == var_239_int; // 0x280 Eq
	if(var_240_bool == 0) goto Label_662; // 0x281 JumpB
	var_241_string = ""; // 0x282 PushV
	var_241_string = "Confusion"; // 0x283 MovS
	func_397(var_32_cvector, var_241_string); // 0x284 NEW_2
	var_242_int = 519043; // 0x286 PushI
	SetMessage(var_242_int); // 0x287 TObjFunc
	ClearReplies(); // 0x289 TObjFunc
	var_243_int = 519044; // 0x28b PushI
	var_244_int = 20167; // 0x28c PushI
	var_245_int = 20166; // 0x28d PushI
	AddReply(var_243_int, var_244_int, var_245_int); // 0x28e TObjFunc
	var_246_int = 519046; // 0x290 PushI
	var_247_int = 20169; // 0x291 PushI
	var_248_int = 20168; // 0x292 PushI
	AddReply(var_246_int, var_247_int, var_248_int); // 0x293 TObjFunc
	return 0; // 0x295 Return
	
Label_662:
	var_249_int = 20169; // 0x296 PushI
	var_250_bool = var_31_bool == var_249_int; // 0x297 Eq
	if(var_250_bool == 0) goto Label_680; // 0x298 JumpB
	var_251_string = ""; // 0x299 PushV
	var_251_string = "Neutral"; // 0x29a MovS
	func_397(var_32_cvector, var_251_string); // 0x29b NEW_2
	var_252_int = 519047; // 0x29d PushI
	SetMessage(var_252_int); // 0x29e TObjFunc
	ClearReplies(); // 0x2a0 TObjFunc
	var_253_int = 519048; // 0x2a2 PushI
	var_254_int = 20167; // 0x2a3 PushI
	var_255_int = 20170; // 0x2a4 PushI
	AddReply(var_253_int, var_254_int, var_255_int); // 0x2a5 TObjFunc
	return 0; // 0x2a7 Return
	
Label_680:
	var_256_int = 20167; // 0x2a8 PushI
	var_257_bool = var_31_bool == var_256_int; // 0x2a9 Eq
	if(var_257_bool == 0) goto Label_703; // 0x2aa JumpB
	var_258_string = ""; // 0x2ab PushV
	var_258_string = "Confusion"; // 0x2ac MovS
	func_397(var_32_cvector, var_258_string); // 0x2ad NEW_2
	var_259_int = 519045; // 0x2af PushI
	SetMessage(var_259_int); // 0x2b0 TObjFunc
	ClearReplies(); // 0x2b2 TObjFunc
	var_260_int = 519049; // 0x2b4 PushI
	var_261_int = 20177; // 0x2b5 PushI
	var_262_int = 20172; // 0x2b6 PushI
	AddReply(var_260_int, var_261_int, var_262_int); // 0x2b7 TObjFunc
	var_263_int = 519050; // 0x2b9 PushI
	var_264_int = 20174; // 0x2ba PushI
	var_265_int = 20173; // 0x2bb PushI
	AddReply(var_263_int, var_264_int, var_265_int); // 0x2bc TObjFunc
	return 0; // 0x2be Return
	
Label_703:
	var_266_int = 20174; // 0x2bf PushI
	var_267_bool = var_31_bool == var_266_int; // 0x2c0 Eq
	if(var_267_bool == 0) goto Label_726; // 0x2c1 JumpB
	var_268_string = ""; // 0x2c2 PushV
	var_268_string = "Fear"; // 0x2c3 MovS
	func_397(var_32_cvector, var_268_string); // 0x2c4 NEW_2
	var_269_int = 519051; // 0x2c6 PushI
	SetMessage(var_269_int); // 0x2c7 TObjFunc
	ClearReplies(); // 0x2c9 TObjFunc
	var_270_int = 519052; // 0x2cb PushI
	var_271_int = -1; // 0x2cc PushI
	var_272_int = 20175; // 0x2cd PushI
	AddReply(var_270_int, var_271_int, var_272_int); // 0x2ce TObjFunc
	var_273_int = 519053; // 0x2d0 PushI
	var_274_int = 20177; // 0x2d1 PushI
	var_275_int = 20176; // 0x2d2 PushI
	AddReply(var_273_int, var_274_int, var_275_int); // 0x2d3 TObjFunc
	return 0; // 0x2d5 Return
	
Label_726:
	var_276_int = 20177; // 0x2d6 PushI
	var_277_bool = var_31_bool == var_276_int; // 0x2d7 Eq
	if(var_277_bool == 0) goto Label_749; // 0x2d8 JumpB
	var_278_string = ""; // 0x2d9 PushV
	var_278_string = "Neutral"; // 0x2da MovS
	func_397(var_32_cvector, var_278_string); // 0x2db NEW_2
	var_279_int = 519054; // 0x2dd PushI
	SetMessage(var_279_int); // 0x2de TObjFunc
	ClearReplies(); // 0x2e0 TObjFunc
	var_280_int = 519055; // 0x2e2 PushI
	var_281_int = 19662; // 0x2e3 PushI
	var_282_int = 20178; // 0x2e4 PushI
	AddReply(var_280_int, var_281_int, var_282_int); // 0x2e5 TObjFunc
	var_283_int = 519056; // 0x2e7 PushI
	var_284_int = 20180; // 0x2e8 PushI
	var_285_int = 20179; // 0x2e9 PushI
	AddReply(var_283_int, var_284_int, var_285_int); // 0x2ea TObjFunc
	return 0; // 0x2ec Return
	
Label_749:
	var_286_int = 20180; // 0x2ed PushI
	var_287_bool = var_31_bool == var_286_int; // 0x2ee Eq
	if(var_287_bool == 0) goto Label_767; // 0x2ef JumpB
	var_288_string = ""; // 0x2f0 PushV
	var_288_string = "Neutral"; // 0x2f1 MovS
	func_397(var_32_cvector, var_288_string); // 0x2f2 NEW_2
	var_289_int = 519057; // 0x2f4 PushI
	SetMessage(var_289_int); // 0x2f5 TObjFunc
	ClearReplies(); // 0x2f7 TObjFunc
	var_290_int = 519058; // 0x2f9 PushI
	var_291_int = -1; // 0x2fa PushI
	var_292_int = 20181; // 0x2fb PushI
	AddReply(var_290_int, var_291_int, var_292_int); // 0x2fc TObjFunc
	return 0; // 0x2fe Return
	
Label_767:
	var_293_int = 19662; // 0x2ff PushI
	var_294_bool = var_31_bool == var_293_int; // 0x300 Eq
	if(var_294_bool == 0) goto Label_785; // 0x301 JumpB
	var_295_string = ""; // 0x302 PushV
	var_295_string = "Neutral"; // 0x303 MovS
	func_397(var_32_cvector, var_295_string); // 0x304 NEW_2
	var_296_int = 518552; // 0x306 PushI
	SetMessage(var_296_int); // 0x307 TObjFunc
	ClearReplies(); // 0x309 TObjFunc
	var_297_int = 518553; // 0x30b PushI
	var_298_int = -1; // 0x30c PushI
	var_299_int = 19663; // 0x30d PushI
	AddReply(var_297_int, var_298_int, var_299_int); // 0x30e TObjFunc
	return 0; // 0x310 Return
	
Label_785:
	var_300_int = 20141; // 0x311 PushI
	var_301_bool = var_31_bool == var_300_int; // 0x312 Eq
	if(var_301_bool == 0) goto Label_803; // 0x313 JumpB
	var_302_string = ""; // 0x314 PushV
	var_302_string = "Fear"; // 0x315 MovS
	func_397(var_32_cvector, var_302_string); // 0x316 NEW_2
	var_303_int = 519022; // 0x318 PushI
	SetMessage(var_303_int); // 0x319 TObjFunc
	ClearReplies(); // 0x31b TObjFunc
	var_304_int = 519023; // 0x31d PushI
	var_305_int = 20138; // 0x31e PushI
	var_306_int = 20142; // 0x31f PushI
	AddReply(var_304_int, var_305_int, var_306_int); // 0x320 TObjFunc
	return 0; // 0x322 Return
	
Label_803:
	var_307_int = 20132; // 0x323 PushI
	var_308_bool = var_31_bool == var_307_int; // 0x324 Eq
	if(var_308_bool == 0) goto Label_826; // 0x325 JumpB
	var_309_string = ""; // 0x326 PushV
	var_309_string = "Sympathy"; // 0x327 MovS
	func_397(var_32_cvector, var_309_string); // 0x328 NEW_2
	var_310_int = 519014; // 0x32a PushI
	SetMessage(var_310_int); // 0x32b TObjFunc
	ClearReplies(); // 0x32d TObjFunc
	var_311_int = 519015; // 0x32f PushI
	var_312_int = 20138; // 0x330 PushI
	var_313_int = 20133; // 0x331 PushI
	AddReply(var_311_int, var_312_int, var_313_int); // 0x332 TObjFunc
	var_314_int = 519016; // 0x334 PushI
	var_315_int = 20135; // 0x335 PushI
	var_316_int = 20134; // 0x336 PushI
	AddReply(var_314_int, var_315_int, var_316_int); // 0x337 TObjFunc
	return 0; // 0x339 Return
	
Label_826:
	var_317_int = 20135; // 0x33a PushI
	var_318_bool = var_31_bool == var_317_int; // 0x33b Eq
	if(var_318_bool == 0) goto Label_849; // 0x33c JumpB
	var_319_string = ""; // 0x33d PushV
	var_319_string = "Fear"; // 0x33e MovS
	func_397(var_32_cvector, var_319_string); // 0x33f NEW_2
	var_320_int = 519017; // 0x341 PushI
	SetMessage(var_320_int); // 0x342 TObjFunc
	ClearReplies(); // 0x344 TObjFunc
	var_321_int = 519019; // 0x346 PushI
	var_322_int = 20138; // 0x347 PushI
	var_323_int = 20137; // 0x348 PushI
	AddReply(var_321_int, var_322_int, var_323_int); // 0x349 TObjFunc
	var_324_int = 519018; // 0x34b PushI
	var_325_int = -1; // 0x34c PushI
	var_326_int = 20136; // 0x34d PushI
	AddReply(var_324_int, var_325_int, var_326_int); // 0x34e TObjFunc
	return 0; // 0x350 Return
	
Label_849:
	var_327_int = 20138; // 0x351 PushI
	var_328_bool = var_31_bool == var_327_int; // 0x352 Eq
	if(var_328_bool == 0) goto Label_867; // 0x353 JumpB
	var_329_string = ""; // 0x354 PushV
	var_329_string = "Confusion"; // 0x355 MovS
	func_397(var_32_cvector, var_329_string); // 0x356 NEW_2
	var_330_int = 519020; // 0x358 PushI
	SetMessage(var_330_int); // 0x359 TObjFunc
	ClearReplies(); // 0x35b TObjFunc
	var_331_int = 519024; // 0x35d PushI
	var_332_int = 20145; // 0x35e PushI
	var_333_int = 20144; // 0x35f PushI
	AddReply(var_331_int, var_332_int, var_333_int); // 0x360 TObjFunc
	return 0; // 0x362 Return
	
Label_867:
	var_334_int = 20145; // 0x363 PushI
	var_335_bool = var_31_bool == var_334_int; // 0x364 Eq
	if(var_335_bool == 0) goto Label_885; // 0x365 JumpB
	var_336_string = ""; // 0x366 PushV
	var_336_string = "Neutral"; // 0x367 MovS
	func_397(var_32_cvector, var_336_string); // 0x368 NEW_2
	var_337_int = 519025; // 0x36a PushI
	SetMessage(var_337_int); // 0x36b TObjFunc
	ClearReplies(); // 0x36d TObjFunc
	var_338_int = 527912; // 0x36f PushI
	var_339_int = 29261; // 0x370 PushI
	var_340_int = 29260; // 0x371 PushI
	AddReply(var_338_int, var_339_int, var_340_int); // 0x372 TObjFunc
	return 0; // 0x374 Return
	
Label_885:
	var_341_int = 29261; // 0x375 PushI
	var_342_bool = var_31_bool == var_341_int; // 0x376 Eq
	if(var_342_bool == 0) goto Label_908; // 0x377 JumpB
	var_343_string = ""; // 0x378 PushV
	var_343_string = "Tiredness"; // 0x379 MovS
	func_397(var_32_cvector, var_343_string); // 0x37a NEW_2
	var_344_int = 527913; // 0x37c PushI
	SetMessage(var_344_int); // 0x37d TObjFunc
	ClearReplies(); // 0x37f TObjFunc
	var_345_int = 519026; // 0x381 PushI
	var_346_int = -1; // 0x382 PushI
	var_347_int = 20146; // 0x383 PushI
	AddReply(var_345_int, var_346_int, var_347_int); // 0x384 TObjFunc
	var_348_int = 519027; // 0x386 PushI
	var_349_int = -1; // 0x387 PushI
	var_350_int = 20147; // 0x388 PushI
	AddReply(var_348_int, var_349_int, var_350_int); // 0x389 TObjFunc
	return 0; // 0x38b Return
	
Label_908:
	var_3_string = 1; // 0x38c TMovB
	var_351_bool = 0; // 0x38d PushV
	func_2574(var_351_bool); // 0x38e NEW_2
	if(var_351_bool == 0) goto Label_916; // 0x390 JumpB
	lshStopAnimation(); // 0x391 Func
	goto Label_918; // 0x393 Jump
	
Label_918:
	return 0; // 0x396 Return
	
Label_916:
	StopAnimation(); // 0x394 Func
	
Label_920:
	return 0; // 0x398 Return
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_cvector)
{
	var_33_int = 1; // 0x449 PushI
	if(var_33_int == 0) goto Label_1264; // 0x44a JumpB
	func_2482(); // 0x44c NEW_2
	var_35_int = 22652; // 0x44e PushI
	var_36_bool = var_32_cvector == var_35_int; // 0x44f Eq
	if(var_36_bool == 0) goto Label_1110; // 0x450 JumpB
	var_37_object = Obj(); var_38_object = Obj(); // 0x451 PushV
	var_37_object = var_1_object; // 0x452 MovT
	var_38_object = var_0_object; // 0x453 MovT
	func_2616(); // 0x454 NEW_2
	
Label_1110:
	var_41_int = 22651; // 0x456 PushI
	var_42_bool = var_31_bool == var_41_int; // 0x457 Eq
	if(var_42_bool == 0) goto Label_1147; // 0x458 JumpB
	var_43_string = ""; // 0x459 PushV
	var_43_string = "Fear"; // 0x45a MovS
	func_1074(var_32_cvector, var_43_string); // 0x45b NEW_2
	var_60_int = 521486; // 0x45d PushI
	SetMessage(var_60_int); // 0x45e TObjFunc
	ClearReplies(); // 0x460 TObjFunc
	var_61_bool = 0; // 0x462 PushV
	var_61_bool = 0; // 0x463 MovB
	var_62_bool = 0; var_63_object = Obj(); // 0x464 PushV
	var_63_object = var_1_object; // 0x465 MovT
	func_2650(var_63_object); // 0x466 NEW_2
	if(var_62_bool == 0) goto Label_1135; // 0x468 JumpB
	var_70_bool = 0; var_71_object = Obj(); // 0x469 PushV
	var_71_object = var_1_object; // 0x46a MovT
	func_2638(var_71_object); // 0x46b NEW_2
	if(var_70_bool == 0) goto Label_1135; // 0x46d JumpB
	var_61_bool = 1; // 0x46e MovB
	
Label_1135:
	if(var_61_bool == 0) goto Label_1141; // 0x46f JumpB
	var_76_int = 521487; // 0x470 PushI
	var_77_int = 22653; // 0x471 PushI
	var_78_int = 22652; // 0x472 PushI
	AddReply(var_76_int, var_77_int, var_78_int); // 0x473 TObjFunc
	
Label_1141:
	var_79_int = 521490; // 0x475 PushI
	var_80_int = -1; // 0x476 PushI
	var_81_int = 22655; // 0x477 PushI
	AddReply(var_79_int, var_80_int, var_81_int); // 0x478 TObjFunc
	return 0; // 0x47a Return
	
Label_1147:
	var_82_int = 22653; // 0x47b PushI
	var_83_bool = var_31_bool == var_82_int; // 0x47c Eq
	if(var_83_bool == 0) goto Label_1170; // 0x47d JumpB
	var_84_string = ""; // 0x47e PushV
	var_84_string = "Confusion"; // 0x47f MovS
	func_1074(var_32_cvector, var_84_string); // 0x480 NEW_2
	var_85_int = 521488; // 0x482 PushI
	SetMessage(var_85_int); // 0x483 TObjFunc
	ClearReplies(); // 0x485 TObjFunc
	var_86_int = 521489; // 0x487 PushI
	var_87_int = 25167; // 0x488 PushI
	var_88_int = 22654; // 0x489 PushI
	AddReply(var_86_int, var_87_int, var_88_int); // 0x48a TObjFunc
	var_89_int = 523891; // 0x48c PushI
	var_90_int = 25171; // 0x48d PushI
	var_91_int = 25170; // 0x48e PushI
	AddReply(var_89_int, var_90_int, var_91_int); // 0x48f TObjFunc
	return 0; // 0x491 Return
	
Label_1170:
	var_92_int = 25171; // 0x492 PushI
	var_93_bool = var_31_bool == var_92_int; // 0x493 Eq
	if(var_93_bool == 0) goto Label_1188; // 0x494 JumpB
	var_94_string = ""; // 0x495 PushV
	var_94_string = "Confusion"; // 0x496 MovS
	func_1074(var_32_cvector, var_94_string); // 0x497 NEW_2
	var_95_int = 523892; // 0x499 PushI
	SetMessage(var_95_int); // 0x49a TObjFunc
	ClearReplies(); // 0x49c TObjFunc
	var_96_int = 523893; // 0x49e PushI
	var_97_int = 25173; // 0x49f PushI
	var_98_int = 25172; // 0x4a0 PushI
	AddReply(var_96_int, var_97_int, var_98_int); // 0x4a1 TObjFunc
	return 0; // 0x4a3 Return
	
Label_1188:
	var_99_int = 25167; // 0x4a4 PushI
	var_100_bool = var_31_bool == var_99_int; // 0x4a5 Eq
	if(var_100_bool == 0) goto Label_1211; // 0x4a6 JumpB
	var_101_string = ""; // 0x4a7 PushV
	var_101_string = "Confusion"; // 0x4a8 MovS
	func_1074(var_32_cvector, var_101_string); // 0x4a9 NEW_2
	var_102_int = 523888; // 0x4ab PushI
	SetMessage(var_102_int); // 0x4ac TObjFunc
	ClearReplies(); // 0x4ae TObjFunc
	var_103_int = 523889; // 0x4b0 PushI
	var_104_int = 25173; // 0x4b1 PushI
	var_105_int = 25168; // 0x4b2 PushI
	AddReply(var_103_int, var_104_int, var_105_int); // 0x4b3 TObjFunc
	var_106_int = 523890; // 0x4b5 PushI
	var_107_int = -1; // 0x4b6 PushI
	var_108_int = 25169; // 0x4b7 PushI
	AddReply(var_106_int, var_107_int, var_108_int); // 0x4b8 TObjFunc
	return 0; // 0x4ba Return
	
Label_1211:
	var_109_int = 25173; // 0x4bb PushI
	var_110_bool = var_31_bool == var_109_int; // 0x4bc Eq
	if(var_110_bool == 0) goto Label_1234; // 0x4bd JumpB
	var_111_string = ""; // 0x4be PushV
	var_111_string = "Neutral"; // 0x4bf MovS
	func_1074(var_32_cvector, var_111_string); // 0x4c0 NEW_2
	var_112_int = 523894; // 0x4c2 PushI
	SetMessage(var_112_int); // 0x4c3 TObjFunc
	ClearReplies(); // 0x4c5 TObjFunc
	var_113_int = 523895; // 0x4c7 PushI
	var_114_int = 25176; // 0x4c8 PushI
	var_115_int = 25175; // 0x4c9 PushI
	AddReply(var_113_int, var_114_int, var_115_int); // 0x4ca TObjFunc
	var_116_int = 523898; // 0x4cc PushI
	var_117_int = -1; // 0x4cd PushI
	var_118_int = 25178; // 0x4ce PushI
	AddReply(var_116_int, var_117_int, var_118_int); // 0x4cf TObjFunc
	return 0; // 0x4d1 Return
	
Label_1234:
	var_119_int = 25176; // 0x4d2 PushI
	var_120_bool = var_31_bool == var_119_int; // 0x4d3 Eq
	if(var_120_bool == 0) goto Label_1252; // 0x4d4 JumpB
	var_121_string = ""; // 0x4d5 PushV
	var_121_string = "Neutral"; // 0x4d6 MovS
	func_1074(var_32_cvector, var_121_string); // 0x4d7 NEW_2
	var_122_int = 523896; // 0x4d9 PushI
	SetMessage(var_122_int); // 0x4da TObjFunc
	ClearReplies(); // 0x4dc TObjFunc
	var_123_int = 523897; // 0x4de PushI
	var_124_int = -1; // 0x4df PushI
	var_125_int = 25177; // 0x4e0 PushI
	AddReply(var_123_int, var_124_int, var_125_int); // 0x4e1 TObjFunc
	return 0; // 0x4e3 Return
	
Label_1252:
	var_3_string = 1; // 0x4e4 TMovB
	var_126_bool = 0; // 0x4e5 PushV
	func_2574(var_126_bool); // 0x4e6 NEW_2
	if(var_126_bool == 0) goto Label_1260; // 0x4e8 JumpB
	lshStopAnimation(); // 0x4e9 Func
	goto Label_1262; // 0x4eb Jump
	
Label_1262:
	return 0; // 0x4ee Return
	
Label_1260:
	StopAnimation(); // 0x4ec Func
	
Label_1264:
	return 0; // 0x4f0 Return
}


task_7_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_cvector)
{
	var_33_int = 1; // 0x58e PushI
	if(var_33_int == 0) goto Label_1457; // 0x58f JumpB
	func_2482(); // 0x591 NEW_2
	var_35_int = 23816; // 0x593 PushI
	var_36_bool = var_31_bool == var_35_int; // 0x594 Eq
	if(var_36_bool == 0) goto Label_1445; // 0x595 JumpB
	var_37_string = ""; // 0x596 PushV
	var_37_string = "Neutral"; // 0x597 MovS
	func_1399(var_32_cvector, var_37_string); // 0x598 NEW_2
	var_54_int = 522629; // 0x59a PushI
	SetMessage(var_54_int); // 0x59b TObjFunc
	ClearReplies(); // 0x59d TObjFunc
	var_55_int = 522630; // 0x59f PushI
	var_56_int = -1; // 0x5a0 PushI
	var_57_int = 23817; // 0x5a1 PushI
	AddReply(var_55_int, var_56_int, var_57_int); // 0x5a2 TObjFunc
	return 0; // 0x5a4 Return
	
Label_1445:
	var_3_string = 1; // 0x5a5 TMovB
	var_58_bool = 0; // 0x5a6 PushV
	func_2574(var_58_bool); // 0x5a7 NEW_2
	if(var_58_bool == 0) goto Label_1453; // 0x5a9 JumpB
	lshStopAnimation(); // 0x5aa Func
	goto Label_1455; // 0x5ac Jump
	
Label_1455:
	return 0; // 0x5af Return
	
Label_1453:
	StopAnimation(); // 0x5ad Func
	
Label_1457:
	return 0; // 0x5b1 Return
}


task_9_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_int, var_26_int, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_cvector)
{
	var_33_int = 1; // 0x659 PushI
	if(var_33_int == 0) goto Label_1716; // 0x65a JumpB
	func_2482(); // 0x65c NEW_2
	var_35_int = 36971; // 0x65e PushI
	var_36_bool = var_31_bool == var_35_int; // 0x65f Eq
	if(var_36_bool == 0) goto Label_1658; // 0x660 JumpB
	var_37_string = ""; // 0x661 PushV
	var_37_string = "Neutral"; // 0x662 MovS
	func_1602(var_32_cvector, var_37_string); // 0x663 NEW_2
	var_54_int = 535294; // 0x665 PushI
	SetMessage(var_54_int); // 0x666 TObjFunc
	ClearReplies(); // 0x668 TObjFunc
	var_55_int = 535295; // 0x66a PushI
	var_56_int = 36973; // 0x66b PushI
	var_57_int = 36972; // 0x66c PushI
	AddReply(var_55_int, var_56_int, var_57_int); // 0x66d TObjFunc
	var_58_int = 535302; // 0x66f PushI
	var_59_int = -1; // 0x670 PushI
	var_60_int = 36980; // 0x671 PushI
	AddReply(var_58_int, var_59_int, var_60_int); // 0x672 TObjFunc
	var_61_int = 535303; // 0x674 PushI
	var_62_int = -1; // 0x675 PushI
	var_63_int = 36981; // 0x676 PushI
	AddReply(var_61_int, var_62_int, var_63_int); // 0x677 TObjFunc
	return 0; // 0x679 Return
	
Label_1658:
	var_64_int = 36973; // 0x67a PushI
	var_65_bool = var_31_bool == var_64_int; // 0x67b Eq
	if(var_65_bool == 0) goto Label_1681; // 0x67c JumpB
	var_66_string = ""; // 0x67d PushV
	var_66_string = "Neutral"; // 0x67e MovS
	func_1602(var_32_cvector, var_66_string); // 0x67f NEW_2
	var_67_int = 535296; // 0x681 PushI
	SetMessage(var_67_int); // 0x682 TObjFunc
	ClearReplies(); // 0x684 TObjFunc
	var_68_int = 535297; // 0x686 PushI
	var_69_int = 36975; // 0x687 PushI
	var_70_int = 36974; // 0x688 PushI
	AddReply(var_68_int, var_69_int, var_70_int); // 0x689 TObjFunc
	var_71_int = 535301; // 0x68b PushI
	var_72_int = 36975; // 0x68c PushI
	var_73_int = 36978; // 0x68d PushI
	AddReply(var_71_int, var_72_int, var_73_int); // 0x68e TObjFunc
	return 0; // 0x690 Return
	
Label_1681:
	var_74_int = 36975; // 0x691 PushI
	var_75_bool = var_31_bool == var_74_int; // 0x692 Eq
	if(var_75_bool == 0) goto Label_1704; // 0x693 JumpB
	var_76_string = ""; // 0x694 PushV
	var_76_string = "Neutral"; // 0x695 MovS
	func_1602(var_32_cvector, var_76_string); // 0x696 NEW_2
	var_77_int = 535298; // 0x698 PushI
	SetMessage(var_77_int); // 0x699 TObjFunc
	ClearReplies(); // 0x69b TObjFunc
	var_78_int = 535299; // 0x69d PushI
	var_79_int = -1; // 0x69e PushI
	var_80_int = 36976; // 0x69f PushI
	AddReply(var_78_int, var_79_int, var_80_int); // 0x6a0 TObjFunc
	var_81_int = 535300; // 0x6a2 PushI
	var_82_int = -1; // 0x6a3 PushI
	var_83_int = 36977; // 0x6a4 PushI
	AddReply(var_81_int, var_82_int, var_83_int); // 0x6a5 TObjFunc
	return 0; // 0x6a7 Return
	
Label_1704:
	var_3_string = 1; // 0x6a8 TMovB
	var_84_bool = 0; // 0x6a9 PushV
	func_2574(var_84_bool); // 0x6aa NEW_2
	if(var_84_bool == 0) goto Label_1712; // 0x6ac JumpB
	lshStopAnimation(); // 0x6ad Func
	goto Label_1714; // 0x6af Jump
	
Label_1714:
	return 0; // 0x6b2 Return
	
Label_1712:
	StopAnimation(); // 0x6b0 Func
	
Label_1716:
	return 0; // 0x6b4 Return
}


task_11_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_int, var_31_int, var_32_cvector)
{
	var_33_int = 1; // 0x757 PushI
	if(var_33_int == 0) goto Label_1919; // 0x758 JumpB
	func_2482(); // 0x75a NEW_2
	var_35_int = 42560; // 0x75c PushI
	var_36_bool = var_31_int == var_35_int; // 0x75d Eq
	if(var_36_bool == 0) goto Label_1907; // 0x75e JumpB
	var_37_string = ""; // 0x75f PushV
	var_37_string = "Neutral"; // 0x760 MovS
	func_1856(var_32_cvector, var_37_string); // 0x761 NEW_2
	var_54_int = 540551; // 0x763 PushI
	SetMessage(var_54_int); // 0x764 TObjFunc
	ClearReplies(); // 0x766 TObjFunc
	var_55_int = 540552; // 0x768 PushI
	var_56_int = -1; // 0x769 PushI
	var_57_int = 42561; // 0x76a PushI
	AddReply(var_55_int, var_56_int, var_57_int); // 0x76b TObjFunc
	var_58_int = 540795; // 0x76d PushI
	var_59_int = -1; // 0x76e PushI
	var_60_int = 42844; // 0x76f PushI
	AddReply(var_58_int, var_59_int, var_60_int); // 0x770 TObjFunc
	return 0; // 0x772 Return
	
Label_1907:
	var_3_string = 1; // 0x773 TMovB
	var_61_bool = 0; // 0x774 PushV
	func_2574(var_61_bool); // 0x775 NEW_2
	if(var_61_bool == 0) goto Label_1915; // 0x777 JumpB
	lshStopAnimation(); // 0x778 Func
	goto Label_1917; // 0x77a Jump
	
Label_1917:
	return 0; // 0x77d Return
	
Label_1915:
	StopAnimation(); // 0x77b Func
	
Label_1919:
	return 0; // 0x77f Return
}


task_12_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_cvector, var_31_int)
{
	var_32_int = 10; // 0x7cd PushI
	var_33_bool = var_31_int == var_32_int; // 0x7ce Eq
	if(var_33_bool == 0) goto Label_2033; // 0x7cf JumpB
	func_1992(); // 0x7d1 NEW_2
	var_35_bool = 0; // 0x7d3 PushV
	var_35_bool = 0; // 0x7d4 MovB
	var_36_bool = 0; // 0x7d5 PushV
	func_2206(var_36_bool); // 0x7d6 NEW_2
	if(var_36_bool == 0) goto Label_2014; // 0x7d8 JumpB
	var_39_bool = 0; // 0x7d9 PushV
	func_1961(var_39_bool); // 0x7da NEW_2
	if(var_39_bool == 0) goto Label_2014; // 0x7dc JumpB
	var_35_bool = 1; // 0x7dd MovB
	
Label_2014:
	if(var_35_bool == 0) goto Label_2027; // 0x7de JumpB
	var_56_bool = 0; // 0x7df PushV
	func_1941(var_56_bool); // 0x7e0 NEW_2
	if(var_56_bool == 0) goto Label_2026; // 0x7e2 JumpB
	var_75_bool = 0; var_76_object = Obj(); // 0x7e3 PushV
	var_77_object = Obj(); // 0x7e4 PushV
	func_2489(var_77_object); // 0x7e5 NEW_2
	var_76_object = var_77_object; // 0x7e6 Mov
	func_2356(var_76_object); // 0x7e8 NEW_2
	
Label_2026:
	goto Label_2033; // 0x7ea Jump
	
Label_2033:
	return 0; // 0x7f1 Return
	
Label_2027:
	func_1956(var_31_int); // 0x7ec NEW_2
	func_1983(); // 0x7ef NEW_2
}


task_12_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_cvector)
{
	func_2174(); // 0x7f3 NEW_2
	func_1992(); // 0x7f6 NEW_2
	lshStopSpeech(); // 0x7f8 Func
	lshStopAnimation(); // 0x7fa Func
	StopAsync(); // 0x7fc Func
	Hold(); // 0x7fe Func
	return 0; // 0x800 Return
}


task_12_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_cvector)
{
	StopGroup0(); // 0x801 Func
	func_1992(); // 0x804 NEW_2
	var_32_string = ""; // 0x806 PushV
	var_32_string = "Neutral"; // 0x807 MovS
	func_2436(var_32_string); // 0x808 NEW_2
	func_1983(); // 0x80b NEW_2
	return 0; // 0x80d Return
}


task_12_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_cvector, var_31_bool)
{
	var_32_bool = var_31_bool; // 0x80f Push
	if(var_32_bool == 0) goto Label_2069; // 0x810 JumpB
	func_1983(); // 0x812 NEW_2
	goto Label_2073; // 0x814 Jump
	
Label_2073:
	return 0; // 0x819 Return
	
Label_2069:
	var_38_string = ""; // 0x815 PushV
	var_38_string = "Neutral"; // 0x816 MovS
	func_2436(var_38_string); // 0x817 NEW_2
}


task_12_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_cvector, var_31_object)
{
	var_32_bool = 0; var_33_bool = 0; // 0x81a PushV
	IsOverrideActive(var_33_bool); // 0x81b Func
	var_34_bool = var_33_bool == 0; // 0x81d Not
	if(var_34_bool == 0) goto Label_2102; // 0x81e JumpB
	EventDisable(0); // 0x81f EventDisable
	func_2174(); // 0x821 NEW_2
	var_35_bool = 0; var_36_object = Obj(); // 0x823 PushV
	var_36_object = var_31_object; // 0x824 Mov
	func_2197(var_36_object); // 0x825 NEW_2
	EventEnable(0); // 0x827 EventEnable
	var_49_object = Obj(); // 0x828 PushV
	var_49_object = var_31_object; // 0x829 Mov
	func_2836(var_49_object); // 0x82a NEW_2
	var_629_string = ""; // 0x82c PushV
	var_629_string = "Neutral"; // 0x82d MovS
	func_2436(var_629_string); // 0x82e NEW_2
	func_1992(); // 0x831 NEW_2
	func_1983(); // 0x834 NEW_2
	
Label_2102:
	return 2; // 0x836 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_cvector)
{
	var_31_bool = GlobalVars[1]; // 0x780 PushGE
	var_31_bool = 0; // 0x781 MovB
	GlobalVars[1] = var_31_bool; // 0x782 PopGE
	func_1927(var_30_cvector); // 0x784 NEW_2
	return 0; // 0x786 Return
}


func_0(var_0_object, var_52_int, var_53_object)
{
	var_55_object = Obj(); var_56_bool = 0; var_57_int = 0; var_58_bool = 0; var_59_object = Obj(); var_60_bool = 0; var_61_int = 0; var_62_bool = 0; // 0x0 PushV
	var_0_object = var_53_object; // 0x1 TMov
	var_63_bool = 0; var_64_object = Obj(); var_65_float = 0; // 0x2 PushV
	var_64_object = var_53_object; // 0x3 Mov
	var_65_float = 70.0; // 0x4 MovF
	func_2211(var_64_object, var_65_float); // 0x5 NEW_2
	var_110_bool = var_63_bool == 0; // 0x7 Not
	if(var_110_bool == 0) goto Label_11; // 0x8 JumpB
	var_52_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_59_object); // 0xb Func
	var_111_int = 0; // 0xd PushV
	func_2568(var_111_int); // 0xe NEW_2
	SetNPCName(var_111_int); // 0x10 ObjFunc
	var_112_int = 0; // 0x12 PushV
	func_2566(var_112_int); // 0x13 NEW_2
	SetNPCDescription(var_112_int); // 0x15 ObjFunc
	var_113_string = ""; // 0x17 PushV
	func_2570(var_113_string); // 0x18 NEW_2
	SetPhoto(var_113_string); // 0x1a ObjFunc
	var_114_string = ""; // 0x1c PushV
	func_2572(var_114_string); // 0x1d NEW_2
	SetPhoto2(var_114_string); // 0x1f ObjFunc
	var_115_int = 0; // 0x21 PushV
	func_2819(var_115_int); // 0x22 NEW_2
	SetPlayerName(var_115_int); // 0x24 ObjFunc
	var_61_int = -1; // 0x26 MovI
	IsOverrideActive(var_60_bool); // 0x27 Func
	var_123_bool = var_60_bool; // 0x29 Push
	if(var_123_bool == 0) goto Label_45; // 0x2a JumpB
	var_52_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_59_object); // 0x2d Func
	var_124_bool = 0; var_125_object = Obj(); // 0x2f PushV
	var_126_object = Obj(); // 0x30 PushV
	func_2489(var_126_object); // 0x31 NEW_2
	var_125_object = var_126_object; // 0x32 Mov
	func_2298(var_124_bool, var_125_object); // 0x34 NEW_2
	var_219_object = Obj(); var_220_object = Obj(); // 0x36 PushV
	var_219_object = var_53_object; // 0x37 Mov
	var_220_object = var_59_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_221_object, var_222_object, var_223_string, var_224_bool, var_219_object, var_220_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	IsDialogEnd(var_62_bool); // 0x3d ObjFunc
	
Label_63:
	var_268_bool = var_62_bool == 0; // 0x3f Not
	if(var_268_bool == 0) goto Label_70; // 0x40 JumpB
	sync(); // 0x41 Func
	IsDialogEnd(var_62_bool); // 0x43 ObjFunc
	goto Label_63; // 0x45 Jump
	
Label_70:
	var_269_object = Obj(); // 0x46 PushV
	var_269_object = var_53_object; // 0x47 Mov
	func_2280(); // 0x48 NEW_2
	StopDialog(var_59_object); // 0x4a Func
	GetReturnValue(var_61_int); // 0x4c ObjFunc
	var_52_int = var_61_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_1539(var_0_object, var_1_object, var_2_object, var_3_string, var_537_object, var_538_object)
{
	var_0_object = var_538_object; // 0x604 TMov
	var_1_object = var_537_object; // 0x605 TMov
	var_3_string = 0; // 0x606 TMovB
	var_543_int = 1; // 0x607 PushI
	if(var_543_int == 0) goto Label_1572; // 0x608 JumpB
	var_544_string = ""; // 0x609 PushV
	var_544_string = "Neutral"; // 0x60a MovS
	func_1602(var_538_object, var_544_string); // 0x60b NEW_2
	var_552_int = 535294; // 0x60d PushI
	SetMessage(var_552_int); // 0x60e TObjFunc
	ClearReplies(); // 0x610 TObjFunc
	var_553_int = 535295; // 0x612 PushI
	var_554_int = 36973; // 0x613 PushI
	var_555_int = 36972; // 0x614 PushI
	AddReply(var_553_int, var_554_int, var_555_int); // 0x615 TObjFunc
	var_556_int = 535302; // 0x617 PushI
	var_557_int = -1; // 0x618 PushI
	var_558_int = 36980; // 0x619 PushI
	AddReply(var_556_int, var_557_int, var_558_int); // 0x61a TObjFunc
	var_559_int = 535303; // 0x61c PushI
	var_560_int = -1; // 0x61d PushI
	var_561_int = 36981; // 0x61e PushI
	AddReply(var_559_int, var_560_int, var_561_int); // 0x61f TObjFunc
	goto Label_1572; // 0x621 Jump
	
Label_1572:
	var_562_bool = 0; // 0x624 PushV
	func_2574(var_562_bool); // 0x625 NEW_2
	if(var_562_bool == 0) goto Label_1587; // 0x627 JumpB
	
Label_1576:
	lshWaitForAnimEnd(); // 0x628 Func
	var_563_string = var_3_string; // 0x62a PushT
	if(var_563_string == 0) goto Label_1581; // 0x62b JumpB
	goto Label_1586; // 0x62c Jump
	
Label_1586:
	goto Label_1601; // 0x632 Jump
	
Label_1601:
	return 0; // 0x641 Return
	
Label_1581:
	var_564_string = ""; // 0x62d PushV
	var_564_string = var_2_object; // 0x62e MovT
	func_2436(var_564_string); // 0x62f NEW_2
	goto Label_1576; // 0x631 Jump
	
Label_1587:
	var_565_string = "all"; // 0x633 PushS
	var_566_string = "idle"; // 0x634 PushS
	PlayAnimation(var_565_string, var_566_string); // 0x635 Func
	
Label_1591:
	WaitForAnimEnd(); // 0x637 Func
	var_567_string = var_3_string; // 0x639 PushT
	if(var_567_string == 0) goto Label_1596; // 0x63a JumpB
	goto Label_1601; // 0x63b Jump
	
Label_1596:
	var_568_string = "all"; // 0x63c PushS
	var_569_string = "idle"; // 0x63d PushS
	PlayAnimation(var_568_string, var_569_string); // 0x63e Func
	goto Label_1591; // 0x640 Jump
}


func_2819(var_115_int)
{
	var_116_int = 0; var_117_int = 0; // 0xb03 PushV
	var_118_string = "branch"; // 0xb04 PushS
	GetVariable(var_118_string, var_117_int); // 0xb05 Func
	var_119_int = 0; // 0xb07 PushI
	var_120_bool = var_117_int == var_119_int; // 0xb08 Eq
	if(var_120_bool == 0) goto Label_2829; // 0xb09 JumpB
	var_115_int = 1; // 0xb0a MovI
	return 2; // 0xb0b Return
	
Label_2829:
	var_121_int = 1; // 0xb0d PushI
	var_122_bool = var_117_int == var_121_int; // 0xb0e Eq
	if(var_122_bool == 0) goto Label_2834; // 0xb0f JumpB
	var_115_int = 2; // 0xb10 MovI
	return 2; // 0xb11 Return
	
Label_2834:
	var_115_int = 3; // 0xb12 MovI
	return 2; // 0xb13 Return
}


func_2566(var_112_int)
{
	var_112_int = 515541; // 0xa06 MovI
	return 0; // 0xa07 Return
}


func_1798(var_0_object, var_1_object, var_2_object, var_3_string, var_597_object, var_598_object)
{
	var_0_object = var_598_object; // 0x707 TMov
	var_1_object = var_597_object; // 0x708 TMov
	var_3_string = 0; // 0x709 TMovB
	var_603_int = 1; // 0x70a PushI
	if(var_603_int == 0) goto Label_1826; // 0x70b JumpB
	var_604_string = ""; // 0x70c PushV
	var_604_string = "Neutral"; // 0x70d MovS
	func_1856(var_598_object, var_604_string); // 0x70e NEW_2
	var_612_int = 540551; // 0x710 PushI
	SetMessage(var_612_int); // 0x711 TObjFunc
	ClearReplies(); // 0x713 TObjFunc
	var_613_int = 540552; // 0x715 PushI
	var_614_int = -1; // 0x716 PushI
	var_615_int = 42561; // 0x717 PushI
	AddReply(var_613_int, var_614_int, var_615_int); // 0x718 TObjFunc
	var_616_int = 540795; // 0x71a PushI
	var_617_int = -1; // 0x71b PushI
	var_618_int = 42844; // 0x71c PushI
	AddReply(var_616_int, var_617_int, var_618_int); // 0x71d TObjFunc
	goto Label_1826; // 0x71f Jump
	
Label_1826:
	var_619_bool = 0; // 0x722 PushV
	func_2574(var_619_bool); // 0x723 NEW_2
	if(var_619_bool == 0) goto Label_1841; // 0x725 JumpB
	
Label_1830:
	lshWaitForAnimEnd(); // 0x726 Func
	var_620_string = var_3_string; // 0x728 PushT
	if(var_620_string == 0) goto Label_1835; // 0x729 JumpB
	goto Label_1840; // 0x72a Jump
	
Label_1840:
	goto Label_1855; // 0x730 Jump
	
Label_1855:
	return 0; // 0x73f Return
	
Label_1835:
	var_621_string = ""; // 0x72b PushV
	var_621_string = var_2_object; // 0x72c MovT
	func_2436(var_621_string); // 0x72d NEW_2
	goto Label_1830; // 0x72f Jump
	
Label_1841:
	var_622_string = "all"; // 0x731 PushS
	var_623_string = "idle"; // 0x732 PushS
	PlayAnimation(var_622_string, var_623_string); // 0x733 Func
	
Label_1845:
	WaitForAnimEnd(); // 0x735 Func
	var_624_string = var_3_string; // 0x737 PushT
	if(var_624_string == 0) goto Label_1850; // 0x738 JumpB
	goto Label_1855; // 0x739 Jump
	
Label_1850:
	var_625_string = "all"; // 0x73a PushS
	var_626_string = "idle"; // 0x73b PushS
	PlayAnimation(var_625_string, var_626_string); // 0x73c Func
	goto Label_1845; // 0x73e Jump
}


func_2568(var_111_int)
{
	var_111_int = 502866; // 0xa08 MovI
	return 0; // 0xa09 Return
}


func_2570(var_113_string)
{
	var_113_string = "ui/NPC_Lara.png"; // 0xa0a MovS
	return 0; // 0xa0b Return
}


func_2572(var_114_string)
{
	var_114_string = "ui/NPC_Lara_b.png"; // 0xa0c MovS
	return 0; // 0xa0d Return
}


func_2574(var_106_bool)
{
	var_106_bool = 1; // 0xa0e MovB
	return 0; // 0xa0f Return
}


func_2576()
{
	var_39_object = Obj(); var_40_object = Obj(); // 0xa10 PushV
	var_41_string = "b4q01"; // 0xa11 PushS
	var_42_int = 2; // 0xa12 PushI
	SetVariable(var_41_string, var_42_int); // 0xa13 Func
	var_43_object = Obj(); // 0xa15 PushV
	func_2769(var_43_object); // 0xa16 NEW_2
	var_40_object = var_43_object; // 0xa17 Mov
	var_50_string = "b4q01LaraGotoRubin"; // 0xa19 PushS
	var_51_string = "pt_map_warehouse_gangster"; // 0xa1a PushS
	var_52_int = 1; // 0xa1b PushI
	var_53_int = 518593; // 0xa1c PushI
	var_54_float = 0; // 0xa1d PushV
	func_2522(var_54_float); // 0xa1e NEW_2
	AddMark(var_50_string, var_51_string, var_52_int, var_53_int, var_54_float); // 0xa20 ObjFunc
	func_2715(); // 0xa23 NEW_2
	var_80_bool = 0; var_81_string = ""; var_82_string = ""; // 0xa25 PushV
	var_81_string = "quest_b4_01"; // 0xa26 MovS
	var_82_string = "place_rubin"; // 0xa27 MovS
	func_2510(var_80_bool, var_81_string, var_82_string); // 0xa28 NEW_2
	return 2; // 0xa2a Return
}


func_2836(var_49_object)
{
	var_50_bool = GlobalVars[1]; // 0xb15 PushGE
	var_51_bool = var_50_bool == 0; // 0xb16 Not
	if(var_51_bool == 0) goto Label_2849; // 0xb17 JumpB
	var_52_int = 0; var_53_object = Obj(); // 0xb18 PushV
	var_53_object = var_49_object; // 0xb19 Mov
	TaskCall(0); // 0xb1a TaskCall
	func_0(var_54_object, var_52_int, var_53_object); // 0xb1b NEW_2
	TaskReturn(); // 0xb1c TaskReturn
	var_277_bool = GlobalVars[1]; // 0xb1e PushGE
	var_277_bool = 1; // 0xb1f MovB
	GlobalVars[1] = var_277_bool; // 0xb20 PopGE
	
Label_2849:
	var_278_bool = 0; var_279_int = 0; // 0xb21 PushV
	var_279_int = 4; // 0xb22 MovI
	func_2536(var_278_bool, var_279_int); // 0xb23 NEW_2
	if(var_278_bool == 0) goto Label_2861; // 0xb25 JumpB
	var_281_int = 0; var_282_object = Obj(); // 0xb26 PushV
	var_282_object = var_49_object; // 0xb27 Mov
	TaskCall(2); // 0xb28 TaskCall
	func_203(var_283_object, var_281_int, var_282_object); // 0xb29 NEW_2
	TaskReturn(); // 0xb2a TaskReturn
	return 0; // 0xb2c Return
	
Label_2861:
	var_382_bool = 0; var_383_int = 0; // 0xb2d PushV
	var_383_int = 8; // 0xb2e MovI
	func_2536(var_382_bool, var_383_int); // 0xb2f NEW_2
	if(var_382_bool == 0) goto Label_2873; // 0xb31 JumpB
	var_384_int = 0; var_385_object = Obj(); // 0xb32 PushV
	var_385_object = var_49_object; // 0xb33 Mov
	TaskCall(4); // 0xb34 TaskCall
	func_921(var_386_object, var_384_int, var_385_object); // 0xb35 NEW_2
	TaskReturn(); // 0xb36 TaskReturn
	return 0; // 0xb38 Return
	
Label_2873:
	var_453_bool = 0; var_454_int = 0; // 0xb39 PushV
	var_454_int = 10; // 0xb3a MovI
	func_2536(var_453_bool, var_454_int); // 0xb3b NEW_2
	if(var_453_bool == 0) goto Label_2885; // 0xb3d JumpB
	var_455_int = 0; var_456_object = Obj(); // 0xb3e PushV
	var_456_object = var_49_object; // 0xb3f Mov
	TaskCall(6); // 0xb40 TaskCall
	func_1265(var_457_object, var_455_int, var_456_object); // 0xb41 NEW_2
	TaskReturn(); // 0xb42 TaskReturn
	return 0; // 0xb44 Return
	
Label_2885:
	var_508_bool = 0; // 0xb45 PushV
	var_508_bool = 0; // 0xb46 MovB
	var_509_bool = 0; var_510_int = 0; // 0xb47 PushV
	var_510_int = 12; // 0xb48 MovI
	func_2536(var_509_bool, var_510_int); // 0xb49 NEW_2
	if(var_509_bool == 0) goto Label_2896; // 0xb4b JumpB
	var_511_bool = GlobalVars[2]; // 0xb4c PushGE
	var_512_bool = var_511_bool == 0; // 0xb4d Not
	if(var_512_bool == 0) goto Label_2896; // 0xb4e JumpB
	var_508_bool = 1; // 0xb4f MovB
	
Label_2896:
	if(var_508_bool == 0) goto Label_2907; // 0xb50 JumpB
	var_513_int = 0; var_514_object = Obj(); // 0xb51 PushV
	var_514_object = var_49_object; // 0xb52 Mov
	TaskCall(8); // 0xb53 TaskCall
	func_1458(var_515_object, var_513_int, var_514_object); // 0xb54 NEW_2
	TaskReturn(); // 0xb55 TaskReturn
	var_572_bool = GlobalVars[2]; // 0xb57 PushGE
	var_572_bool = 1; // 0xb58 MovB
	GlobalVars[2] = var_572_bool; // 0xb59 PopGE
	return 0; // 0xb5a Return
	
Label_2907:
	var_573_int = 0; var_574_object = Obj(); // 0xb5b PushV
	var_574_object = var_49_object; // 0xb5c Mov
	TaskCall(10); // 0xb5d TaskCall
	func_1717(var_575_object, var_573_int, var_574_object); // 0xb5e NEW_2
	TaskReturn(); // 0xb5f TaskReturn
	return 0; // 0xb61 Return
}


func_284(var_0_object, var_1_object, var_2_object, var_3_string, var_305_object, var_306_object)
{
	var_0_object = var_306_object; // 0x11d TMov
	var_1_object = var_305_object; // 0x11e TMov
	var_3_string = 0; // 0x11f TMovB
	var_311_int = 1; // 0x120 PushI
	if(var_311_int == 0) goto Label_367; // 0x121 JumpB
	var_312_bool = 0; var_313_object = Obj(); // 0x122 PushV
	var_313_object = var_1_object; // 0x123 MovT
	func_2662(var_312_bool, var_313_object); // 0x124 NEW_2
	var_320_bool = var_312_bool == 0; // 0x126 Not
	if(var_320_bool == 0) goto Label_321; // 0x127 JumpB
	var_321_object = Obj(); var_322_object = Obj(); // 0x128 PushV
	var_321_object = var_1_object; // 0x129 MovT
	var_322_object = var_0_object; // 0x12a MovT
	func_2604(); // 0x12b NEW_2
	var_325_string = ""; // 0x12d PushV
	var_325_string = "Fear"; // 0x12e MovS
	func_397(var_306_object, var_325_string); // 0x12f NEW_2
	var_333_int = 518548; // 0x131 PushI
	SetMessage(var_333_int); // 0x132 TObjFunc
	ClearReplies(); // 0x134 TObjFunc
	var_334_int = 518549; // 0x136 PushI
	var_335_int = 20132; // 0x137 PushI
	var_336_int = 19659; // 0x138 PushI
	AddReply(var_334_int, var_335_int, var_336_int); // 0x139 TObjFunc
	var_337_int = 519021; // 0x13b PushI
	var_338_int = 20141; // 0x13c PushI
	var_339_int = 20140; // 0x13d PushI
	AddReply(var_337_int, var_338_int, var_339_int); // 0x13e TObjFunc
	goto Label_367; // 0x140 Jump
	
Label_367:
	var_340_bool = 0; // 0x16f PushV
	func_2574(var_340_bool); // 0x170 NEW_2
	if(var_340_bool == 0) goto Label_382; // 0x172 JumpB
	
Label_371:
	lshWaitForAnimEnd(); // 0x173 Func
	var_341_string = var_3_string; // 0x175 PushT
	if(var_341_string == 0) goto Label_376; // 0x176 JumpB
	goto Label_381; // 0x177 Jump
	
Label_381:
	goto Label_396; // 0x17d Jump
	
Label_396:
	return 0; // 0x18c Return
	
Label_376:
	var_342_string = ""; // 0x178 PushV
	var_342_string = var_2_object; // 0x179 MovT
	func_2436(var_342_string); // 0x17a NEW_2
	goto Label_371; // 0x17c Jump
	
Label_382:
	var_343_string = "all"; // 0x17e PushS
	var_344_string = "idle"; // 0x17f PushS
	PlayAnimation(var_343_string, var_344_string); // 0x180 Func
	
Label_386:
	WaitForAnimEnd(); // 0x182 Func
	var_345_string = var_3_string; // 0x184 PushT
	if(var_345_string == 0) goto Label_391; // 0x185 JumpB
	goto Label_396; // 0x186 Jump
	
Label_391:
	var_346_string = "all"; // 0x187 PushS
	var_347_string = "idle"; // 0x188 PushS
	PlayAnimation(var_346_string, var_347_string); // 0x189 Func
	goto Label_386; // 0x18b Jump
	
Label_321:
	var_348_string = ""; // 0x141 PushV
	var_348_string = "Sympathy"; // 0x142 MovS
	func_397(var_306_object, var_348_string); // 0x143 NEW_2
	var_349_int = 518550; // 0x145 PushI
	SetMessage(var_349_int); // 0x146 TObjFunc
	ClearReplies(); // 0x148 TObjFunc
	var_350_bool = 0; var_351_object = Obj(); // 0x14a PushV
	var_351_object = var_1_object; // 0x14b MovT
	func_2672(var_351_object); // 0x14c NEW_2
	if(var_350_bool == 0) goto Label_340; // 0x14e JumpB
	var_358_int = 518551; // 0x14f PushI
	var_359_int = 20163; // 0x150 PushI
	var_360_int = 19661; // 0x151 PushI
	AddReply(var_358_int, var_359_int, var_360_int); // 0x152 TObjFunc
	
Label_340:
	var_361_bool = 0; // 0x154 PushV
	var_361_bool = 0; // 0x155 MovB
	var_362_bool = 0; var_363_object = Obj(); // 0x156 PushV
	var_363_object = var_1_object; // 0x157 MovT
	func_2684(var_363_object); // 0x158 NEW_2
	if(var_362_bool == 0) goto Label_353; // 0x15a JumpB
	var_368_bool = 0; var_369_object = Obj(); // 0x15b PushV
	var_369_object = var_1_object; // 0x15c MovT
	func_2696(var_369_object); // 0x15d NEW_2
	if(var_368_bool == 0) goto Label_353; // 0x15f JumpB
	var_361_bool = 1; // 0x160 MovB
	
Label_353:
	if(var_361_bool == 0) goto Label_359; // 0x161 JumpB
	var_374_int = 519028; // 0x162 PushI
	var_375_int = 20149; // 0x163 PushI
	var_376_int = 20148; // 0x164 PushI
	AddReply(var_374_int, var_375_int, var_376_int); // 0x165 TObjFunc
	
Label_359:
	var_377_int = 518554; // 0x167 PushI
	var_378_int = -1; // 0x168 PushI
	var_379_int = 19664; // 0x169 PushI
	AddReply(var_377_int, var_378_int, var_379_int); // 0x16a TObjFunc
	goto Label_367; // 0x16c Jump
}


func_2604()
{
	var_323_string = "b4q01LaraWasBadRep"; // 0xa2d PushS
	var_324_int = 1; // 0xa2e PushI
	SetVariable(var_323_string, var_324_int); // 0xa2f Func
	return 0; // 0xa31 Return
}


func_2610()
{
	var_116_string = "oob4Lara1"; // 0xa33 PushS
	var_117_int = 1; // 0xa34 PushI
	SetVariable(var_116_string, var_117_int); // 0xa35 Func
	return 0; // 0xa37 Return
}


func_1074(var_2_object, var_415_string)
{
	var_416_bool = 0; // 0x433 PushV
	func_2574(var_416_bool); // 0x434 NEW_2
	var_417_bool = var_416_bool == 0; // 0x436 Not
	if(var_417_bool == 0) goto Label_1081; // 0x437 JumpB
	return 0; // 0x438 Return
	
Label_1081:
	var_418_bool = var_415_string == var_2_object; // 0x439 Eq
	if(var_418_bool == 0) goto Label_1084; // 0x43a JumpB
	return 0; // 0x43b Return
	
Label_1084:
	var_419_string = ""; var_420_bool = 0; // 0x43c PushV
	var_419_string = var_415_string; // 0x43d Mov
	var_421_string = ""; // 0x43e PushS
	var_422_bool = var_415_string == var_421_string; // 0x43f Eq
	if(var_422_bool == 0) goto Label_1091; // 0x440 JumpB
	var_420_bool = 0; // 0x441 MovB
	goto Label_1092; // 0x442 Jump
	
Label_1092:
	func_2452(var_419_string, var_420_bool); // 0x444 NEW_2
	var_2_object = var_415_string; // 0x446 TMov
	return 0; // 0x447 Return
	
Label_1091:
	var_420_bool = 1; // 0x443 MovB
}


func_2356(var_135_bool)
{
	var_137_string = ""; var_138_int = 0; var_139_bool = 0; var_140_int = 0; var_141_string = ""; var_142_string = ""; var_143_int = 0; var_144_bool = 0; var_145_int = 0; var_146_string = ""; // 0x934 PushV
	var_142_string = "c"; // 0x935 MovS
	var_143_int = 0; // 0x936 MovI
	
Label_2359:
	var_147_int = 1; // 0x937 PushI
	if(var_147_int == 0) goto Label_2372; // 0x938 JumpB
	var_148_int = 1; // 0x939 PushI
	var_149_int = var_143_int + var_148_int; // 0x93a Add
	var_150_int = var_142_string + var_149_int; // 0x93b Add
	HasProperty(var_150_int, var_144_bool); // 0x93c ObjFunc
	var_151_bool = var_144_bool == 0; // 0x93e Not
	if(var_151_bool == 0) goto Label_2369; // 0x93f JumpB
	goto Label_2372; // 0x940 Jump
	
Label_2372:
	var_152_bool = var_143_int == 0; // 0x944 Not
	if(var_152_bool == 0) goto Label_2376; // 0x945 JumpB
	var_135_bool = 0; // 0x946 MovB
	return 10; // 0x947 Return
	
Label_2376:
	var_145_int = 0; // 0x948 MovI
	var_153_int = 1; // 0x949 PushI
	var_154_bool = var_143_int > var_153_int; // 0x94a GT
	if(var_154_bool == 0) goto Label_2382; // 0x94b JumpB
	irand(var_145_int, var_143_int); // 0x94c Func
	
Label_2382:
	var_155_int = 1; // 0x94e PushI
	var_156_int = var_145_int + var_155_int; // 0x94f Add
	var_157_int = var_142_string + var_156_int; // 0x950 Add
	GetProperty(var_157_int, var_146_string); // 0x951 ObjFunc
	var_158_bool = 0; var_159_string = ""; // 0x953 PushV
	var_159_string = var_146_string; // 0x954 Mov
	func_2467(var_158_bool, var_159_string); // 0x955 NEW_2
	var_135_bool = var_158_bool; // 0x956 Mov
	return 10; // 0x958 Return
	
Label_2369:
	var_164_int = 1; // 0x941 PushI
	var_143_int = var_143_int + var_164_int; // 0x942 Add2
	goto Label_2359; // 0x943 Jump
}


func_2103()
{
	var_36_int = 0; var_37_int = 0; var_38_bool = 0; var_39_int = 0; var_40_int = 0; var_41_bool = 0; var_42_int = 0; var_43_int = 0; var_44_bool = 0; var_45_int = 0; var_46_int = 0; var_47_bool = 0; // 0x837 PushV
	WaitForAnimEnd(); // 0x838 Func
	var_48_bool = 0; // 0x83a PushV
	func_2206(var_48_bool); // 0x83b NEW_2
	var_49_bool = var_48_bool == 0; // 0x83d Not
	if(var_49_bool == 0) goto Label_2112; // 0x83e JumpB
	return 12; // 0x83f Return
	
Label_2112:
	var_50_int = 0; // 0x840 PushV
	func_2549(var_50_int); // 0x841 NEW_2
	var_42_int = var_50_int; // 0x842 Mov
	var_43_int = 0; // 0x844 MovI
	
Label_2117:
	var_63_bool = 0; // 0x845 PushV
	var_63_bool = 0; // 0x846 MovB
	var_64_int = 5; // 0x847 PushI
	var_65_bool = var_43_int < var_64_int; // 0x848 LT
	if(var_65_bool == 0) goto Label_2127; // 0x849 JumpB
	var_66_bool = 0; // 0x84a PushV
	func_2206(var_66_bool); // 0x84b NEW_2
	if(var_66_bool == 0) goto Label_2127; // 0x84d JumpB
	var_63_bool = 1; // 0x84e MovB
	
Label_2127:
	if(var_63_bool == 0) goto Label_2169; // 0x84f JumpB
	var_67_bool = var_42_int == 0; // 0x850 Not
	if(var_67_bool == 0) goto Label_2137; // 0x851 JumpB
	var_68_int = 3; // 0x852 PushI
	Sleep(var_68_int, var_44_bool); // 0x853 Func
	var_69_bool = var_44_bool == 0; // 0x855 Not
	if(var_69_bool == 0) goto Label_2136; // 0x856 JumpB
	goto Label_2169; // 0x857 Jump
	
Label_2169:
	ResetAAS(); // 0x879 Func
	return 12; // 0x87b Return
	
Label_2136:
	goto Label_2158; // 0x858 Jump
	
Label_2158:
	var_70_bool = 0; // 0x86e PushV
	func_2172(var_70_bool); // 0x86f NEW_2
	var_71_bool = var_70_bool == 0; // 0x871 Not
	if(var_71_bool == 0) goto Label_2164; // 0x872 JumpB
	goto Label_2169; // 0x873 Jump
	
Label_2164:
	ResetAAS(); // 0x874 Func
	var_72_int = 1; // 0x876 PushI
	var_43_int = var_43_int + var_72_int; // 0x877 Add2
	goto Label_2117; // 0x878 Jump
	
Label_2137:
	irand(var_45_int, var_42_int); // 0x859 Func
	var_73_int = 5; // 0x85b PushI
	irand(var_46_int, var_73_int); // 0x85c Func
	var_74_int = 0; // 0x85e PushI
	var_75_bool = var_46_int != var_74_int; // 0x85f Neq
	if(var_75_bool == 0) goto Label_2146; // 0x860 JumpB
	var_45_int = 0; // 0x861 MovI
	
Label_2146:
	var_76_string = "all"; // 0x862 PushS
	var_77_string = ""; var_78_int = 0; // 0x863 PushV
	var_78_int = var_45_int; // 0x864 Mov
	func_2542(var_77_string, var_78_int); // 0x865 NEW_2
	PlayAnimation(var_76_string, var_77_string); // 0x867 Func
	WaitForAnimEnd(var_47_bool); // 0x869 Func
	var_79_bool = var_47_bool == 0; // 0x86b Not
	if(var_79_bool == 0) goto Label_2158; // 0x86c JumpB
	goto Label_2169; // 0x86d Jump
}


func_2616()
{
	var_39_string = "oob8Lara1"; // 0xa39 PushS
	var_40_int = 1; // 0xa3a PushI
	SetVariable(var_39_string, var_40_int); // 0xa3b Func
	return 0; // 0xa3d Return
}


func_2622()
{
	var_88_object = Obj(); var_89_string = ""; var_90_float = 0; // 0xa3f PushV
	var_91_object = Obj(); // 0xa40 PushV
	func_2769(var_91_object); // 0xa41 NEW_2
	var_88_object = var_91_object; // 0xa42 Mov
	var_89_string = "pt_map_warehouse_gangster"; // 0xa44 MovS
	var_90_float = 2; // 0xa45 MovI
	func_2786(var_88_object, var_89_string, var_90_float); // 0xa46 NEW_2
	var_111_object = Obj(); // 0xa48 PushV
	func_2769(var_111_object); // 0xa49 NEW_2
	ShowMap(var_111_object); // 0xa4b ObjFunc
	return 0; // 0xa4d Return
}


func_1856(var_2_object, var_604_string)
{
	var_605_bool = 0; // 0x741 PushV
	func_2574(var_605_bool); // 0x742 NEW_2
	var_606_bool = var_605_bool == 0; // 0x744 Not
	if(var_606_bool == 0) goto Label_1863; // 0x745 JumpB
	return 0; // 0x746 Return
	
Label_1863:
	var_607_bool = var_604_string == var_2_object; // 0x747 Eq
	if(var_607_bool == 0) goto Label_1866; // 0x748 JumpB
	return 0; // 0x749 Return
	
Label_1866:
	var_608_string = ""; var_609_bool = 0; // 0x74a PushV
	var_608_string = var_604_string; // 0x74b Mov
	var_610_string = ""; // 0x74c PushS
	var_611_bool = var_604_string == var_610_string; // 0x74d Eq
	if(var_611_bool == 0) goto Label_1873; // 0x74e JumpB
	var_609_bool = 0; // 0x74f MovB
	goto Label_1874; // 0x750 Jump
	
Label_1874:
	func_2452(var_608_string, var_609_bool); // 0x752 NEW_2
	var_2_object = var_604_string; // 0x754 TMov
	return 0; // 0x755 Return
	
Label_1873:
	var_609_bool = 1; // 0x751 MovB
}


func_1346(var_0_object, var_1_object, var_2_object, var_3_string, var_479_object, var_480_object)
{
	var_0_object = var_480_object; // 0x543 TMov
	var_1_object = var_479_object; // 0x544 TMov
	var_3_string = 0; // 0x545 TMovB
	var_485_int = 1; // 0x546 PushI
	if(var_485_int == 0) goto Label_1369; // 0x547 JumpB
	var_486_string = ""; // 0x548 PushV
	var_486_string = "Neutral"; // 0x549 MovS
	func_1399(var_480_object, var_486_string); // 0x54a NEW_2
	var_494_int = 522629; // 0x54c PushI
	SetMessage(var_494_int); // 0x54d TObjFunc
	ClearReplies(); // 0x54f TObjFunc
	var_495_int = 522630; // 0x551 PushI
	var_496_int = -1; // 0x552 PushI
	var_497_int = 23817; // 0x553 PushI
	AddReply(var_495_int, var_496_int, var_497_int); // 0x554 TObjFunc
	goto Label_1369; // 0x556 Jump
	
Label_1369:
	var_498_bool = 0; // 0x559 PushV
	func_2574(var_498_bool); // 0x55a NEW_2
	if(var_498_bool == 0) goto Label_1384; // 0x55c JumpB
	
Label_1373:
	lshWaitForAnimEnd(); // 0x55d Func
	var_499_string = var_3_string; // 0x55f PushT
	if(var_499_string == 0) goto Label_1378; // 0x560 JumpB
	goto Label_1383; // 0x561 Jump
	
Label_1383:
	goto Label_1398; // 0x567 Jump
	
Label_1398:
	return 0; // 0x576 Return
	
Label_1378:
	var_500_string = ""; // 0x562 PushV
	var_500_string = var_2_object; // 0x563 MovT
	func_2436(var_500_string); // 0x564 NEW_2
	goto Label_1373; // 0x566 Jump
	
Label_1384:
	var_501_string = "all"; // 0x568 PushS
	var_502_string = "idle"; // 0x569 PushS
	PlayAnimation(var_501_string, var_502_string); // 0x56a Func
	
Label_1388:
	WaitForAnimEnd(); // 0x56c Func
	var_503_string = var_3_string; // 0x56e PushT
	if(var_503_string == 0) goto Label_1393; // 0x56f JumpB
	goto Label_1398; // 0x570 Jump
	
Label_1393:
	var_504_string = "all"; // 0x571 PushS
	var_505_string = "idle"; // 0x572 PushS
	PlayAnimation(var_504_string, var_505_string); // 0x573 Func
	goto Label_1388; // 0x575 Jump
}


func_1602(var_2_object, var_544_string)
{
	var_545_bool = 0; // 0x643 PushV
	func_2574(var_545_bool); // 0x644 NEW_2
	var_546_bool = var_545_bool == 0; // 0x646 Not
	if(var_546_bool == 0) goto Label_1609; // 0x647 JumpB
	return 0; // 0x648 Return
	
Label_1609:
	var_547_bool = var_544_string == var_2_object; // 0x649 Eq
	if(var_547_bool == 0) goto Label_1612; // 0x64a JumpB
	return 0; // 0x64b Return
	
Label_1612:
	var_548_string = ""; var_549_bool = 0; // 0x64c PushV
	var_548_string = var_544_string; // 0x64d Mov
	var_550_string = ""; // 0x64e PushS
	var_551_bool = var_544_string == var_550_string; // 0x64f Eq
	if(var_551_bool == 0) goto Label_1619; // 0x650 JumpB
	var_549_bool = 0; // 0x651 MovB
	goto Label_1620; // 0x652 Jump
	
Label_1620:
	func_2452(var_548_string, var_549_bool); // 0x654 NEW_2
	var_2_object = var_544_string; // 0x656 TMov
	return 0; // 0x657 Return
	
Label_1619:
	var_549_bool = 1; // 0x653 MovB
}


func_2638(var_431_bool)
{
	var_433_int = 0; var_434_string = ""; // 0xa4f PushV
	var_434_string = "b8q02"; // 0xa50 MovS
	func_2505(var_433_int, var_434_string); // 0xa51 NEW_2
	var_435_int = 1; // 0xa53 PushI
	var_436_bool = var_433_int == var_435_int; // 0xa54 Eq
	if(var_436_bool == 0) goto Label_2648; // 0xa55 JumpB
	var_431_bool = 1; // 0xa56 MovB
	return 0; // 0xa57 Return
	
Label_2648:
	var_431_bool = 0; // 0xa58 MovB
	return 0; // 0xa59 Return
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_219_object, var_220_object)
{
	var_0_object = var_220_object; // 0x52 TMov
	var_1_object = var_219_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_225_int = 1; // 0x55 PushI
	if(var_225_int == 0) goto Label_109; // 0x56 JumpB
	var_226_string = ""; // 0x57 PushV
	var_226_string = "Neutral"; // 0x58 MovS
	func_139(var_220_object, var_226_string); // 0x59 NEW_2
	var_243_int = 518021; // 0x5b PushI
	SetMessage(var_243_int); // 0x5c TObjFunc
	ClearReplies(); // 0x5e TObjFunc
	var_244_int = 518022; // 0x60 PushI
	var_245_int = -1; // 0x61 PushI
	var_246_int = 19155; // 0x62 PushI
	AddReply(var_244_int, var_245_int, var_246_int); // 0x63 TObjFunc
	var_247_int = 531564; // 0x65 PushI
	var_248_int = -1; // 0x66 PushI
	var_249_int = 32923; // 0x67 PushI
	AddReply(var_247_int, var_248_int, var_249_int); // 0x68 TObjFunc
	goto Label_109; // 0x6a Jump
	
Label_109:
	var_250_bool = 0; // 0x6d PushV
	func_2574(var_250_bool); // 0x6e NEW_2
	if(var_250_bool == 0) goto Label_124; // 0x70 JumpB
	
Label_113:
	lshWaitForAnimEnd(); // 0x71 Func
	var_251_string = var_3_string; // 0x73 PushT
	if(var_251_string == 0) goto Label_118; // 0x74 JumpB
	goto Label_123; // 0x75 Jump
	
Label_123:
	goto Label_138; // 0x7b Jump
	
Label_138:
	return 0; // 0x8a Return
	
Label_118:
	var_252_string = ""; // 0x76 PushV
	var_252_string = var_2_object; // 0x77 MovT
	func_2436(var_252_string); // 0x78 NEW_2
	goto Label_113; // 0x7a Jump
	
Label_124:
	var_263_string = "all"; // 0x7c PushS
	var_264_string = "idle"; // 0x7d PushS
	PlayAnimation(var_263_string, var_264_string); // 0x7e Func
	
Label_128:
	WaitForAnimEnd(); // 0x80 Func
	var_265_string = var_3_string; // 0x82 PushT
	if(var_265_string == 0) goto Label_133; // 0x83 JumpB
	goto Label_138; // 0x84 Jump
	
Label_133:
	var_266_string = "all"; // 0x85 PushS
	var_267_string = "idle"; // 0x86 PushS
	PlayAnimation(var_266_string, var_267_string); // 0x87 Func
	goto Label_128; // 0x89 Jump
}


func_2393(var_166_bool)
{
	var_168_string = ""; var_169_int = 0; var_170_bool = 0; var_171_int = 0; var_172_string = ""; var_173_string = ""; var_174_int = 0; var_175_bool = 0; var_176_int = 0; var_177_string = ""; // 0x959 PushV
	var_178_string = "d"; // 0x95a PushS
	var_179_int = 0; // 0x95b PushV
	func_2527(var_179_int); // 0x95c NEW_2
	var_185_int = var_178_string + var_179_int; // 0x95e Add
	var_186_string = "m"; // 0x95f PushS
	var_173_string = var_185_int + var_186_string; // 0x960 Add2
	var_174_int = 0; // 0x961 MovI
	
Label_2402:
	var_187_int = 1; // 0x962 PushI
	if(var_187_int == 0) goto Label_2415; // 0x963 JumpB
	var_188_int = 1; // 0x964 PushI
	var_189_int = var_174_int + var_188_int; // 0x965 Add
	var_190_int = var_173_string + var_189_int; // 0x966 Add
	HasProperty(var_190_int, var_175_bool); // 0x967 ObjFunc
	var_191_bool = var_175_bool == 0; // 0x969 Not
	if(var_191_bool == 0) goto Label_2412; // 0x96a JumpB
	goto Label_2415; // 0x96b Jump
	
Label_2415:
	var_192_bool = var_174_int == 0; // 0x96f Not
	if(var_192_bool == 0) goto Label_2419; // 0x970 JumpB
	var_166_bool = 0; // 0x971 MovB
	return 10; // 0x972 Return
	
Label_2419:
	var_176_int = 0; // 0x973 MovI
	var_193_int = 1; // 0x974 PushI
	var_194_bool = var_174_int > var_193_int; // 0x975 GT
	if(var_194_bool == 0) goto Label_2425; // 0x976 JumpB
	irand(var_176_int, var_174_int); // 0x977 Func
	
Label_2425:
	var_195_int = 1; // 0x979 PushI
	var_196_int = var_176_int + var_195_int; // 0x97a Add
	var_197_int = var_173_string + var_196_int; // 0x97b Add
	GetProperty(var_197_int, var_177_string); // 0x97c ObjFunc
	var_198_bool = 0; var_199_string = ""; // 0x97e PushV
	var_199_string = var_177_string; // 0x97f Mov
	func_2467(var_198_bool, var_199_string); // 0x980 NEW_2
	var_166_bool = var_198_bool; // 0x981 Mov
	return 10; // 0x983 Return
	
Label_2412:
	var_200_int = 1; // 0x96c PushI
	var_174_int = var_174_int + var_200_int; // 0x96d Add2
	goto Label_2402; // 0x96e Jump
}


func_2650(var_425_bool)
{
	var_427_int = 0; var_428_string = ""; // 0xa5b PushV
	var_428_string = "oob8Lara1"; // 0xa5c MovS
	func_2505(var_427_int, var_428_string); // 0xa5d NEW_2
	var_429_int = 0; // 0xa5f PushI
	var_430_bool = var_427_int == var_429_int; // 0xa60 Eq
	if(var_430_bool == 0) goto Label_2660; // 0xa61 JumpB
	var_425_bool = 1; // 0xa62 MovB
	return 0; // 0xa63 Return
	
Label_2660:
	var_425_bool = 0; // 0xa64 MovB
	return 0; // 0xa65 Return
}


func_2662(var_312_bool, var_313_object)
{
	var_314_bool = 0; var_315_object = Obj(); // 0xa67 PushV
	var_315_object = var_313_object; // 0xa68 Mov
	func_2708(var_315_object); // 0xa69 NEW_2
	if(var_314_bool == 0) goto Label_2670; // 0xa6b JumpB
	var_312_bool = 1; // 0xa6c MovB
	return 0; // 0xa6d Return
	
Label_2670:
	var_312_bool = 0; // 0xa6e MovB
	return 0; // 0xa6f Return
}


func_2672(var_350_bool)
{
	var_352_int = 0; var_353_string = ""; // 0xa71 PushV
	var_353_string = "b4q01"; // 0xa72 MovS
	func_2505(var_352_int, var_353_string); // 0xa73 NEW_2
	var_356_int = 1; // 0xa75 PushI
	var_357_bool = var_352_int == var_356_int; // 0xa76 Eq
	if(var_357_bool == 0) goto Label_2682; // 0xa77 JumpB
	var_350_bool = 1; // 0xa78 MovB
	return 0; // 0xa79 Return
	
Label_2682:
	var_350_bool = 0; // 0xa7a MovB
	return 0; // 0xa7b Return
}


func_1399(var_2_object, var_486_string)
{
	var_487_bool = 0; // 0x578 PushV
	func_2574(var_487_bool); // 0x579 NEW_2
	var_488_bool = var_487_bool == 0; // 0x57b Not
	if(var_488_bool == 0) goto Label_1406; // 0x57c JumpB
	return 0; // 0x57d Return
	
Label_1406:
	var_489_bool = var_486_string == var_2_object; // 0x57e Eq
	if(var_489_bool == 0) goto Label_1409; // 0x57f JumpB
	return 0; // 0x580 Return
	
Label_1409:
	var_490_string = ""; var_491_bool = 0; // 0x581 PushV
	var_490_string = var_486_string; // 0x582 Mov
	var_492_string = ""; // 0x583 PushS
	var_493_bool = var_486_string == var_492_string; // 0x584 Eq
	if(var_493_bool == 0) goto Label_1416; // 0x585 JumpB
	var_491_bool = 0; // 0x586 MovB
	goto Label_1417; // 0x587 Jump
	
Label_1417:
	func_2452(var_490_string, var_491_bool); // 0x589 NEW_2
	var_2_object = var_486_string; // 0x58b TMov
	return 0; // 0x58c Return
	
Label_1416:
	var_491_bool = 1; // 0x588 MovB
}


func_2684(var_362_bool)
{
	var_364_int = 0; var_365_string = ""; // 0xa7d PushV
	var_365_string = "b4q01LaraWasBadRep"; // 0xa7e MovS
	func_2505(var_364_int, var_365_string); // 0xa7f NEW_2
	var_366_int = 1; // 0xa81 PushI
	var_367_bool = var_364_int == var_366_int; // 0xa82 Eq
	if(var_367_bool == 0) goto Label_2694; // 0xa83 JumpB
	var_362_bool = 1; // 0xa84 MovB
	return 0; // 0xa85 Return
	
Label_2694:
	var_362_bool = 0; // 0xa86 MovB
	return 0; // 0xa87 Return
}


func_2172(var_70_bool)
{
	var_70_bool = 1; // 0x87c MovB
	return 0; // 0x87d Return
}


func_2174()
{
	StopAnimation(); // 0x87e Func
	StopGroup0(); // 0x880 Func
	return 0; // 0x882 Return
}


func_2179(var_46_float)
{
	var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); // 0x883 PushV
	GetPosition(var_51_cvector); // 0x884 Func
	GetPosition(var_52_cvector); // 0x886 ObjFunc
	var_53_cvector = var_52_cvector - var_51_cvector; // 0x888 Sub2
	var_46_float = var_53_cvector | var_53_cvector; // 0x889 Or2
	return 6; // 0x88a Return
}


func_2436(var_252_string)
{
	var_253_bool = 0; var_254_float = 0; var_255_float = 0; var_256_bool = 0; var_257_float = 0; var_258_float = 0; // 0x984 PushV
	lshHasAnimation(var_256_bool, var_252_string); // 0x985 Func
	var_259_bool = var_256_bool; // 0x987 Push
	if(var_259_bool == 0) goto Label_2447; // 0x988 JumpB
	lshGetAnimTimes(var_252_string, var_257_float, var_258_float); // 0x989 Func
	var_260_bool = 0; // 0x98b PushB
	lshPlayAnimation(var_257_float, var_258_float, var_260_bool); // 0x98c Func
	goto Label_2451; // 0x98e Jump
	
Label_2451:
	return 6; // 0x993 Return
	
Label_2447:
	var_261_string = "Can't find lsh animation : "; // 0x98f PushS
	var_262_int = var_261_string + var_252_string; // 0x990 Add
	Trace(var_262_int); // 0x991 Func
}


func_1927(var_0_object)
{
	var_32_bool = 0; // 0x787 PushV
	func_2206(var_32_bool); // 0x788 NEW_2
	var_35_bool = var_32_bool == 0; // 0x78a Not
	if(var_35_bool == 0) goto Label_1934; // 0x78b JumpB
	Hold(); // 0x78c Func
	
Label_1934:
	GetDirection(var_0_object); // 0x78e Func
	
Label_1936:
	func_2103(); // 0x791 NEW_2
	goto Label_1936; // 0x793 Jump
}


func_2696(var_368_bool)
{
	var_370_int = 0; var_371_string = ""; // 0xa89 PushV
	var_371_string = "oob4Lara1"; // 0xa8a MovS
	func_2505(var_370_int, var_371_string); // 0xa8b NEW_2
	var_372_int = 0; // 0xa8d PushI
	var_373_bool = var_370_int == var_372_int; // 0xa8e Eq
	if(var_373_bool == 0) goto Label_2706; // 0xa8f JumpB
	var_368_bool = 1; // 0xa90 MovB
	return 0; // 0xa91 Return
	
Label_2706:
	var_368_bool = 0; // 0xa92 MovB
	return 0; // 0xa93 Return
}


func_139(var_2_object, var_226_string)
{
	var_227_bool = 0; // 0x8c PushV
	func_2574(var_227_bool); // 0x8d NEW_2
	var_228_bool = var_227_bool == 0; // 0x8f Not
	if(var_228_bool == 0) goto Label_146; // 0x90 JumpB
	return 0; // 0x91 Return
	
Label_146:
	var_229_bool = var_226_string == var_2_object; // 0x92 Eq
	if(var_229_bool == 0) goto Label_149; // 0x93 JumpB
	return 0; // 0x94 Return
	
Label_149:
	var_230_string = ""; var_231_bool = 0; // 0x95 PushV
	var_230_string = var_226_string; // 0x96 Mov
	var_232_string = ""; // 0x97 PushS
	var_233_bool = var_226_string == var_232_string; // 0x98 Eq
	if(var_233_bool == 0) goto Label_156; // 0x99 JumpB
	var_231_bool = 0; // 0x9a MovB
	goto Label_157; // 0x9b Jump
	
Label_157:
	func_2452(var_230_string, var_231_bool); // 0x9d NEW_2
	var_2_object = var_226_string; // 0x9f TMov
	return 0; // 0xa0 Return
	
Label_156:
	var_231_bool = 1; // 0x9c MovB
}


func_2187(var_39_bool, var_40_cvector)
{
	var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_bool = 0; var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_bool = 0; // 0x88b PushV
	GetPosition(var_44_cvector); // 0x88c Func
	var_45_cvector = var_40_cvector - var_44_cvector; // 0x88e Sub2
	var_47_float = GetByIndex(var_45_cvector, 0); // 0x88f PushE
	var_48_float = GetByIndex(var_45_cvector, 2); // 0x890 PushE
	Rotate(var_47_float, var_48_float, var_46_bool); // 0x891 Func
	var_39_bool = var_46_bool; // 0x893 Mov
	return 6; // 0x894 Return
}


func_397(var_2_object, var_325_string)
{
	var_326_bool = 0; // 0x18e PushV
	func_2574(var_326_bool); // 0x18f NEW_2
	var_327_bool = var_326_bool == 0; // 0x191 Not
	if(var_327_bool == 0) goto Label_404; // 0x192 JumpB
	return 0; // 0x193 Return
	
Label_404:
	var_328_bool = var_325_string == var_2_object; // 0x194 Eq
	if(var_328_bool == 0) goto Label_407; // 0x195 JumpB
	return 0; // 0x196 Return
	
Label_407:
	var_329_string = ""; var_330_bool = 0; // 0x197 PushV
	var_329_string = var_325_string; // 0x198 Mov
	var_331_string = ""; // 0x199 PushS
	var_332_bool = var_325_string == var_331_string; // 0x19a Eq
	if(var_332_bool == 0) goto Label_414; // 0x19b JumpB
	var_330_bool = 0; // 0x19c MovB
	goto Label_415; // 0x19d Jump
	
Label_415:
	func_2452(var_329_string, var_330_bool); // 0x19f NEW_2
	var_2_object = var_325_string; // 0x1a1 TMov
	return 0; // 0x1a2 Return
	
Label_414:
	var_330_bool = 1; // 0x19e MovB
}


func_2452(var_230_string, var_231_bool)
{
	var_234_bool = 0; var_235_float = 0; var_236_float = 0; var_237_bool = 0; var_238_float = 0; var_239_float = 0; // 0x994 PushV
	lshHasAnimation(var_237_bool, var_230_string); // 0x995 Func
	var_240_bool = var_237_bool; // 0x997 Push
	if(var_240_bool == 0) goto Label_2462; // 0x998 JumpB
	lshGetAnimTimes(var_230_string, var_238_float, var_239_float); // 0x999 Func
	lshPlayAnimation(var_238_float, var_239_float, var_231_bool); // 0x99b Func
	goto Label_2466; // 0x99d Jump
	
Label_2466:
	return 6; // 0x9a2 Return
	
Label_2462:
	var_241_string = "Can't find lsh animation : "; // 0x99e PushS
	var_242_int = var_241_string + var_230_string; // 0x99f Add
	Trace(var_242_int); // 0x9a0 Func
}


func_2197(var_35_bool)
{
	var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); // 0x895 PushV
	GetPosition(var_38_cvector); // 0x896 ObjFunc
	var_39_bool = 0; var_40_cvector = CVector(0,0,0); // 0x898 PushV
	var_40_cvector = var_38_cvector; // 0x899 Mov
	func_2187(var_39_bool, var_40_cvector); // 0x89a NEW_2
	var_35_bool = var_39_bool; // 0x89b Mov
	return 2; // 0x89d Return
}


func_1941(var_56_bool)
{
	var_57_object = Obj(); var_58_object = Obj(); // 0x795 PushV
	var_59_string = "player"; // 0x796 PushS
	FindActor(var_58_object, var_59_string); // 0x797 Func
	var_60_bool = var_58_object == 0; // 0x799 Not
	if(var_60_bool == 0) goto Label_1949; // 0x79a JumpB
	var_56_bool = 0; // 0x79b MovB
	return 2; // 0x79c Return
	
Label_1949:
	var_61_bool = 0; var_62_object = Obj(); // 0x79d PushV
	var_62_object = var_58_object; // 0x79e Mov
	func_2197(var_62_object); // 0x79f NEW_2
	var_56_bool = var_61_bool; // 0x7a0 Mov
	return 2; // 0x7a2 Return
}


func_2708(var_314_bool)
{
	var_316_float = 0; var_317_float = 0; // 0xa94 PushV
	var_318_string = "reputation"; // 0xa95 PushS
	GetProperty(var_318_string, var_317_float); // 0xa96 ObjFunc
	var_319_float = 0.7; // 0xa98 PushF
	var_314_bool = var_317_float >= var_319_float; // 0xa99 GE2
	return 2; // 0xa9a Return
}


func_921(var_0_object, var_384_int, var_385_object)
{
	var_387_object = Obj(); var_388_bool = 0; var_389_int = 0; var_390_bool = 0; var_391_object = Obj(); var_392_bool = 0; var_393_int = 0; var_394_bool = 0; // 0x399 PushV
	var_0_object = var_385_object; // 0x39a TMov
	var_395_bool = 0; var_396_object = Obj(); var_397_float = 0; // 0x39b PushV
	var_396_object = var_385_object; // 0x39c Mov
	var_397_float = 70.0; // 0x39d MovF
	func_2211(var_396_object, var_397_float); // 0x39e NEW_2
	var_398_bool = var_395_bool == 0; // 0x3a0 Not
	if(var_398_bool == 0) goto Label_932; // 0x3a1 JumpB
	var_384_int = -2; // 0x3a2 MovI
	return 8; // 0x3a3 Return
	
Label_932:
	CreateDialog(var_391_object); // 0x3a4 Func
	var_399_int = 0; // 0x3a6 PushV
	func_2568(var_399_int); // 0x3a7 NEW_2
	SetNPCName(var_399_int); // 0x3a9 ObjFunc
	var_400_int = 0; // 0x3ab PushV
	func_2566(var_400_int); // 0x3ac NEW_2
	SetNPCDescription(var_400_int); // 0x3ae ObjFunc
	var_401_string = ""; // 0x3b0 PushV
	func_2570(var_401_string); // 0x3b1 NEW_2
	SetPhoto(var_401_string); // 0x3b3 ObjFunc
	var_402_string = ""; // 0x3b5 PushV
	func_2572(var_402_string); // 0x3b6 NEW_2
	SetPhoto2(var_402_string); // 0x3b8 ObjFunc
	var_403_int = 0; // 0x3ba PushV
	func_2819(var_403_int); // 0x3bb NEW_2
	SetPlayerName(var_403_int); // 0x3bd ObjFunc
	var_393_int = -1; // 0x3bf MovI
	IsOverrideActive(var_392_bool); // 0x3c0 Func
	var_404_bool = var_392_bool; // 0x3c2 Push
	if(var_404_bool == 0) goto Label_966; // 0x3c3 JumpB
	var_384_int = -2; // 0x3c4 MovI
	return 8; // 0x3c5 Return
	
Label_966:
	DoDialog(var_391_object); // 0x3c6 Func
	var_405_bool = 0; var_406_object = Obj(); // 0x3c8 PushV
	var_407_object = Obj(); // 0x3c9 PushV
	func_2489(var_407_object); // 0x3ca NEW_2
	var_406_object = var_407_object; // 0x3cb Mov
	func_2298(var_405_bool, var_406_object); // 0x3cd NEW_2
	var_408_object = Obj(); var_409_object = Obj(); // 0x3cf PushV
	var_408_object = var_385_object; // 0x3d0 Mov
	var_409_object = var_391_object; // 0x3d1 Mov
	TaskCall(5); // 0x3d2 TaskCall
	func_1002(var_410_object, var_411_object, var_412_string, var_413_bool, var_408_object, var_409_object); // 0x3d3 NEW_2
	TaskReturn(); // 0x3d4 TaskReturn
	IsDialogEnd(var_394_bool); // 0x3d6 ObjFunc
	
Label_984:
	var_451_bool = var_394_bool == 0; // 0x3d8 Not
	if(var_451_bool == 0) goto Label_991; // 0x3d9 JumpB
	sync(); // 0x3da Func
	IsDialogEnd(var_394_bool); // 0x3dc ObjFunc
	goto Label_984; // 0x3de Jump
	
Label_991:
	var_452_object = Obj(); // 0x3df PushV
	var_452_object = var_385_object; // 0x3e0 Mov
	func_2280(); // 0x3e1 NEW_2
	StopDialog(var_391_object); // 0x3e3 Func
	GetReturnValue(var_393_int); // 0x3e5 ObjFunc
	var_384_int = var_393_int; // 0x3e7 Mov
	return 8; // 0x3e8 Return
}


func_2715()
{
	var_57_object = Obj(); var_58_object = Obj(); // 0xa9b PushV
	var_59_int = 218; // 0xa9c PushI
	var_60_int = 1; // 0xa9d PushI
	var_61_int = 518596; // 0xa9e PushI
	CreateDiaryEntry(var_58_object, var_59_int, var_60_int, var_61_int); // 0xa9f Func
	var_62_bool = 0; var_63_object = Obj(); var_64_int = 0; // 0xaa1 PushV
	var_63_object = var_58_object; // 0xaa2 Mov
	var_64_int = 216; // 0xaa3 MovI
	func_2741(var_62_bool, var_63_object, var_64_int); // 0xaa4 NEW_2
	return 2; // 0xaa6 Return
}


func_2206(var_32_bool)
{
	var_33_bool = 0; var_34_bool = 0; // 0x89e PushV
	IsLoaded(var_34_bool); // 0x89f Func
	var_32_bool = var_34_bool; // 0x8a1 Mov
	return 2; // 0x8a2 Return
}


func_2211(var_63_bool, var_65_float)
{
	var_66_float = 0; var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); var_73_bool = 0; var_74_bool = 0; var_75_float = 0; var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0); var_79_cvector = CVector(0,0,0); var_80_cvector = CVector(0,0,0); var_81_cvector = CVector(0,0,0); var_82_bool = 0; var_83_bool = 0; // 0x8a3 PushV
	GetPosition(var_76_cvector); // 0x8a4 ObjFunc
	GetEyesHeight(var_75_float); // 0x8a6 ObjFunc
	var_84_float = GetByIndex(var_76_cvector, 1); // 0x8a8 PushE
	var_84_float = var_84_float + var_75_float; // 0x8a9 Add2
	SetByIndex(var_76_cvector, 1) = var_84_float; // 0x8aa PopE
	GetPosition(var_77_cvector); // 0x8ab Func
	GetEyesHeight(var_75_float); // 0x8ad Func
	var_85_float = GetByIndex(var_77_cvector, 1); // 0x8af PushE
	var_85_float = var_85_float + var_75_float; // 0x8b0 Add2
	SetByIndex(var_77_cvector, 1) = var_85_float; // 0x8b1 PopE
	var_78_cvector = var_76_cvector - var_77_cvector; // 0x8b2 Sub2
	var_86_float = GetByIndex(var_78_cvector, 1); // 0x8b3 PushE
	var_86_float = 0; // 0x8b4 MovI
	SetByIndex(var_78_cvector, 1) = var_86_float; // 0x8b5 PopE
	var_87_int = var_78_cvector | var_78_cvector; // 0x8b6 Or
	var_88_float = sqrt(var_87_int); // 0x8b7 Sqrt
	var_78_cvector = var_78_cvector / var_78_cvector; // 0x8b8 Div2
	var_79_cvector = -var_78_cvector; // 0x8b9 Neg2
	var_89_float = var_78_cvector * var_65_float; // 0x8ba Mult
	var_90_cvector = CVector(0,0,0); var_91_cvector = CVector(0,0,0); // 0x8bb PushV
	var_92_cvector = CVector(0.0, 1.0, 0.0); // 0x8bc PushVec
	var_91_cvector = var_79_cvector ^ var_92_cvector; // 0x8bd Xor2
	func_2495(var_90_cvector, var_91_cvector); // 0x8be NEW_2
	var_98_int = 25; // 0x8c0 PushI
	var_99_float = var_90_cvector * var_98_int; // 0x8c1 Mult
	var_100_int = var_89_float + var_99_float; // 0x8c2 Add
	var_101_cvector = CVector(0.0, 10.0, 0.0); // 0x8c3 PushVec
	var_80_cvector = var_100_int - var_101_cvector; // 0x8c4 Sub2
	var_81_cvector = var_77_cvector + var_80_cvector; // 0x8c5 Add2
	IsOverrideActive(var_82_bool); // 0x8c6 Func
	var_102_bool = var_82_bool; // 0x8c8 Push
	if(var_102_bool == 0) goto Label_2252; // 0x8c9 JumpB
	var_63_bool = 0; // 0x8ca MovB
	return 18; // 0x8cb Return
	
Label_2252:
	StopWorld(); // 0x8cc Func
	var_103_bool = 1; // 0x8ce PushB
	CameraTransit(var_81_cvector, var_79_cvector, var_103_bool); // 0x8cf Func
	var_104_float = GetByIndex(var_80_cvector, 0); // 0x8d1 PushE
	var_105_float = GetByIndex(var_80_cvector, 2); // 0x8d2 PushE
	Rotate(var_104_float, var_105_float); // 0x8d3 Func
	var_106_bool = 0; // 0x8d5 PushV
	func_2574(var_106_bool); // 0x8d6 NEW_2
	if(var_106_bool == 0) goto Label_2266; // 0x8d8 JumpB
	goto Label_2274; // 0x8d9 Jump
	
Label_2274:
	CameraWaitForPlayFinish(); // 0x8e2 Func
	ResumeWorld(); // 0x8e4 Func
	var_63_bool = 1; // 0x8e6 MovB
	return 18; // 0x8e7 Return
	
Label_2266:
	var_107_string = "head"; // 0x8da PushS
	HasAnimationTrack(var_83_bool, var_107_string); // 0x8db Func
	var_108_bool = var_83_bool; // 0x8dd Push
	if(var_108_bool == 0) goto Label_2274; // 0x8de JumpB
	var_109_string = "head"; // 0x8df PushS
	LookAsyncCamera(var_109_string); // 0x8e0 Func
}


func_1956(var_0_object)
{
	var_108_float = GetByIndex(var_0_object, 0); // 0x7a4 PushE
	var_109_float = GetByIndex(var_0_object, 2); // 0x7a5 PushE
	RotateAsync(var_108_float, var_109_float); // 0x7a6 Func
	return 0; // 0x7a8 Return
}


func_2467(var_158_bool, var_159_string)
{
	var_160_bool = 0; var_161_bool = 0; // 0x9a3 PushV
	var_162_bool = 0; // 0x9a4 PushV
	func_2574(var_162_bool); // 0x9a5 NEW_2
	if(var_162_bool == 0) goto Label_2480; // 0x9a7 JumpB
	lshHasSpeech(var_161_bool, var_159_string); // 0x9a8 Func
	var_163_bool = var_161_bool; // 0x9aa Push
	if(var_163_bool == 0) goto Label_2480; // 0x9ab JumpB
	lshPlaySpeech(var_159_string); // 0x9ac Func
	var_158_bool = 1; // 0x9ae MovB
	return 2; // 0x9af Return
	
Label_2480:
	var_158_bool = 0; // 0x9b0 MovB
	return 2; // 0x9b1 Return
}


func_2728(var_71_object)
{
	var_72_object = Obj(); var_73_object = Obj(); // 0xaa8 PushV
	GetDiaryRoot(var_73_object); // 0xaa9 Func
	var_74_bool = var_73_object == 0; // 0xaab Not
	if(var_74_bool == 0) goto Label_2738; // 0xaac JumpB
	var_75_string = "Can't retrieve diary root"; // 0xaad PushS
	Trace(var_75_string); // 0xaae Func
	var_71_object = 0; // 0xab0 MovB
	return 2; // 0xab1 Return
	
Label_2738:
	var_71_object = var_73_object; // 0xab2 Mov
	return 2; // 0xab3 Return
}


func_1961(var_39_bool)
{
	var_40_object = Obj(); var_41_bool = 0; var_42_object = Obj(); var_43_bool = 0; // 0x7a9 PushV
	var_44_string = "player"; // 0x7aa PushS
	FindActor(var_42_object, var_44_string); // 0x7ab Func
	var_45_bool = var_42_object == 0; // 0x7ad Not
	if(var_45_bool == 0) goto Label_1969; // 0x7ae JumpB
	var_39_bool = 0; // 0x7af MovB
	return 4; // 0x7b0 Return
	
Label_1969:
	var_46_float = 0; var_47_object = Obj(); // 0x7b1 PushV
	var_47_object = var_42_object; // 0x7b2 Mov
	func_2179(var_47_object); // 0x7b3 NEW_2
	var_54_float = 90000.0; // 0x7b5 PushF
	var_55_bool = var_46_float > var_54_float; // 0x7b6 GT
	if(var_55_bool == 0) goto Label_1978; // 0x7b7 JumpB
	var_39_bool = 0; // 0x7b8 MovB
	return 4; // 0x7b9 Return
	
Label_1978:
	CanSee(var_43_bool, var_42_object); // 0x7ba Func
	var_39_bool = var_43_bool; // 0x7bc Mov
	return 4; // 0x7bd Return
}


func_2482()
{
	var_34_bool = 0; // 0x9b2 PushV
	func_2574(var_34_bool); // 0x9b3 NEW_2
	if(var_34_bool == 0) goto Label_2488; // 0x9b5 JumpB
	lshStopSpeech(); // 0x9b6 Func
	
Label_2488:
	return 0; // 0x9b8 Return
}


func_1458(var_0_object, var_513_int, var_514_object)
{
	var_516_object = Obj(); var_517_bool = 0; var_518_int = 0; var_519_bool = 0; var_520_object = Obj(); var_521_bool = 0; var_522_int = 0; var_523_bool = 0; // 0x5b2 PushV
	var_0_object = var_514_object; // 0x5b3 TMov
	var_524_bool = 0; var_525_object = Obj(); var_526_float = 0; // 0x5b4 PushV
	var_525_object = var_514_object; // 0x5b5 Mov
	var_526_float = 70.0; // 0x5b6 MovF
	func_2211(var_525_object, var_526_float); // 0x5b7 NEW_2
	var_527_bool = var_524_bool == 0; // 0x5b9 Not
	if(var_527_bool == 0) goto Label_1469; // 0x5ba JumpB
	var_513_int = -2; // 0x5bb MovI
	return 8; // 0x5bc Return
	
Label_1469:
	CreateDialog(var_520_object); // 0x5bd Func
	var_528_int = 0; // 0x5bf PushV
	func_2568(var_528_int); // 0x5c0 NEW_2
	SetNPCName(var_528_int); // 0x5c2 ObjFunc
	var_529_int = 0; // 0x5c4 PushV
	func_2566(var_529_int); // 0x5c5 NEW_2
	SetNPCDescription(var_529_int); // 0x5c7 ObjFunc
	var_530_string = ""; // 0x5c9 PushV
	func_2570(var_530_string); // 0x5ca NEW_2
	SetPhoto(var_530_string); // 0x5cc ObjFunc
	var_531_string = ""; // 0x5ce PushV
	func_2572(var_531_string); // 0x5cf NEW_2
	SetPhoto2(var_531_string); // 0x5d1 ObjFunc
	var_532_int = 0; // 0x5d3 PushV
	func_2819(var_532_int); // 0x5d4 NEW_2
	SetPlayerName(var_532_int); // 0x5d6 ObjFunc
	var_522_int = -1; // 0x5d8 MovI
	IsOverrideActive(var_521_bool); // 0x5d9 Func
	var_533_bool = var_521_bool; // 0x5db Push
	if(var_533_bool == 0) goto Label_1503; // 0x5dc JumpB
	var_513_int = -2; // 0x5dd MovI
	return 8; // 0x5de Return
	
Label_1503:
	DoDialog(var_520_object); // 0x5df Func
	var_534_bool = 0; var_535_object = Obj(); // 0x5e1 PushV
	var_536_object = Obj(); // 0x5e2 PushV
	func_2489(var_536_object); // 0x5e3 NEW_2
	var_535_object = var_536_object; // 0x5e4 Mov
	func_2298(var_534_bool, var_535_object); // 0x5e6 NEW_2
	var_537_object = Obj(); var_538_object = Obj(); // 0x5e8 PushV
	var_537_object = var_514_object; // 0x5e9 Mov
	var_538_object = var_520_object; // 0x5ea Mov
	TaskCall(9); // 0x5eb TaskCall
	func_1539(var_539_object, var_540_object, var_541_string, var_542_bool, var_537_object, var_538_object); // 0x5ec NEW_2
	TaskReturn(); // 0x5ed TaskReturn
	IsDialogEnd(var_523_bool); // 0x5ef ObjFunc
	
Label_1521:
	var_570_bool = var_523_bool == 0; // 0x5f1 Not
	if(var_570_bool == 0) goto Label_1528; // 0x5f2 JumpB
	sync(); // 0x5f3 Func
	IsDialogEnd(var_523_bool); // 0x5f5 ObjFunc
	goto Label_1521; // 0x5f7 Jump
	
Label_1528:
	var_571_object = Obj(); // 0x5f8 PushV
	var_571_object = var_514_object; // 0x5f9 Mov
	func_2280(); // 0x5fa NEW_2
	StopDialog(var_520_object); // 0x5fc Func
	GetReturnValue(var_522_int); // 0x5fe ObjFunc
	var_513_int = var_522_int; // 0x600 Mov
	return 8; // 0x601 Return
}


func_2741(var_62_bool, var_63_object, var_64_int)
{
	var_65_object = Obj(); var_66_object = Obj(); var_67_int = 0; var_68_object = Obj(); var_69_object = Obj(); var_70_int = 0; // 0xab5 PushV
	var_71_object = Obj(); // 0xab6 PushV
	func_2728(var_71_object); // 0xab7 NEW_2
	var_68_object = var_71_object; // 0xab8 Mov
	Find(var_64_int, var_69_object); // 0xaba ObjFunc
	var_76_bool = var_69_object == 0; // 0xabc Not
	if(var_76_bool == 0) goto Label_2756; // 0xabd JumpB
	var_77_string = "Can't find diary parent with id: "; // 0xabe PushS
	var_78_int = var_77_string + var_64_int; // 0xabf Add
	Trace(var_78_int); // 0xac0 Func
	var_62_bool = 0; // 0xac2 MovB
	return 6; // 0xac3 Return
	
Label_2756:
	AddChild(var_63_object); // 0xac4 ObjFunc
	var_79_int = 7; // 0xac6 PushI
	SendWorldWndMessage(var_79_int); // 0xac7 Func
	GetCategory(var_70_int); // 0xac9 ObjFunc
	SetDiarySection(var_70_int); // 0xacb Func
	var_62_bool = 0; // 0xacd MovB
	return 6; // 0xace Return
}


func_1717(var_0_object, var_573_int, var_574_object)
{
	var_576_object = Obj(); var_577_bool = 0; var_578_int = 0; var_579_bool = 0; var_580_object = Obj(); var_581_bool = 0; var_582_int = 0; var_583_bool = 0; // 0x6b5 PushV
	var_0_object = var_574_object; // 0x6b6 TMov
	var_584_bool = 0; var_585_object = Obj(); var_586_float = 0; // 0x6b7 PushV
	var_585_object = var_574_object; // 0x6b8 Mov
	var_586_float = 70.0; // 0x6b9 MovF
	func_2211(var_585_object, var_586_float); // 0x6ba NEW_2
	var_587_bool = var_584_bool == 0; // 0x6bc Not
	if(var_587_bool == 0) goto Label_1728; // 0x6bd JumpB
	var_573_int = -2; // 0x6be MovI
	return 8; // 0x6bf Return
	
Label_1728:
	CreateDialog(var_580_object); // 0x6c0 Func
	var_588_int = 0; // 0x6c2 PushV
	func_2568(var_588_int); // 0x6c3 NEW_2
	SetNPCName(var_588_int); // 0x6c5 ObjFunc
	var_589_int = 0; // 0x6c7 PushV
	func_2566(var_589_int); // 0x6c8 NEW_2
	SetNPCDescription(var_589_int); // 0x6ca ObjFunc
	var_590_string = ""; // 0x6cc PushV
	func_2570(var_590_string); // 0x6cd NEW_2
	SetPhoto(var_590_string); // 0x6cf ObjFunc
	var_591_string = ""; // 0x6d1 PushV
	func_2572(var_591_string); // 0x6d2 NEW_2
	SetPhoto2(var_591_string); // 0x6d4 ObjFunc
	var_592_int = 0; // 0x6d6 PushV
	func_2819(var_592_int); // 0x6d7 NEW_2
	SetPlayerName(var_592_int); // 0x6d9 ObjFunc
	var_582_int = -1; // 0x6db MovI
	IsOverrideActive(var_581_bool); // 0x6dc Func
	var_593_bool = var_581_bool; // 0x6de Push
	if(var_593_bool == 0) goto Label_1762; // 0x6df JumpB
	var_573_int = -2; // 0x6e0 MovI
	return 8; // 0x6e1 Return
	
Label_1762:
	DoDialog(var_580_object); // 0x6e2 Func
	var_594_bool = 0; var_595_object = Obj(); // 0x6e4 PushV
	var_596_object = Obj(); // 0x6e5 PushV
	func_2489(var_596_object); // 0x6e6 NEW_2
	var_595_object = var_596_object; // 0x6e7 Mov
	func_2298(var_594_bool, var_595_object); // 0x6e9 NEW_2
	var_597_object = Obj(); var_598_object = Obj(); // 0x6eb PushV
	var_597_object = var_574_object; // 0x6ec Mov
	var_598_object = var_580_object; // 0x6ed Mov
	TaskCall(11); // 0x6ee TaskCall
	func_1798(var_599_object, var_600_object, var_601_string, var_602_bool, var_597_object, var_598_object); // 0x6ef NEW_2
	TaskReturn(); // 0x6f0 TaskReturn
	IsDialogEnd(var_583_bool); // 0x6f2 ObjFunc
	
Label_1780:
	var_627_bool = var_583_bool == 0; // 0x6f4 Not
	if(var_627_bool == 0) goto Label_1787; // 0x6f5 JumpB
	sync(); // 0x6f6 Func
	IsDialogEnd(var_583_bool); // 0x6f8 ObjFunc
	goto Label_1780; // 0x6fa Jump
	
Label_1787:
	var_628_object = Obj(); // 0x6fb PushV
	var_628_object = var_574_object; // 0x6fc Mov
	func_2280(); // 0x6fd NEW_2
	StopDialog(var_580_object); // 0x6ff Func
	GetReturnValue(var_582_int); // 0x701 ObjFunc
	var_573_int = var_582_int; // 0x703 Mov
	return 8; // 0x704 Return
}


func_2489(var_126_object)
{
	var_127_object = Obj(); var_128_object = Obj(); // 0x9b9 PushV
	self(var_128_object); // 0x9ba Func
	var_126_object = var_128_object; // 0x9bc Mov
	return 2; // 0x9bd Return
}


func_1983()
{
	var_631_float = 0; var_632_float = 0; // 0x7bf PushV
	var_633_int = 8; // 0x7c0 PushI
	var_634_int = 16; // 0x7c1 PushI
	rand(var_632_float, var_633_int, var_634_int); // 0x7c2 Func
	var_635_int = 10; // 0x7c4 PushI
	SetTimer(var_635_int, var_632_float); // 0x7c5 Func
	return 2; // 0x7c7 Return
}


func_2495(var_90_cvector, var_91_cvector)
{
	var_93_float = 0; var_94_float = 0; // 0x9bf PushV
	var_95_int = var_91_cvector | var_91_cvector; // 0x9c0 Or
	var_94_float = sqrt(var_95_int); // 0x9c1 Sqrt2
	var_96_float = 0.0; // 0x9c2 PushF
	var_97_bool = var_94_float < var_96_float; // 0x9c3 LT
	if(var_97_bool == 0) goto Label_2503; // 0x9c4 JumpB
	var_90_cvector = CVector(0.0, 0.0, 0.0); // 0x9c5 MovV
	return 2; // 0x9c6 Return
	
Label_2503:
	var_90_cvector = var_91_cvector / var_91_cvector; // 0x9c7 Div2
	return 2; // 0x9c8 Return
}


func_1992()
{
	var_630_int = 10; // 0x7c8 PushI
	KillTimer(var_630_int); // 0x7c9 Func
	return 0; // 0x7cb Return
}


func_2505(var_352_int, var_353_string)
{
	var_354_int = 0; var_355_int = 0; // 0x9c9 PushV
	GetVariable(var_353_string, var_355_int); // 0x9ca Func
	var_352_int = var_355_int; // 0x9cc Mov
	return 2; // 0x9cd Return
}


func_203(var_0_object, var_281_int, var_282_object)
{
	var_284_object = Obj(); var_285_bool = 0; var_286_int = 0; var_287_bool = 0; var_288_object = Obj(); var_289_bool = 0; var_290_int = 0; var_291_bool = 0; // 0xcb PushV
	var_0_object = var_282_object; // 0xcc TMov
	var_292_bool = 0; var_293_object = Obj(); var_294_float = 0; // 0xcd PushV
	var_293_object = var_282_object; // 0xce Mov
	var_294_float = 70.0; // 0xcf MovF
	func_2211(var_293_object, var_294_float); // 0xd0 NEW_2
	var_295_bool = var_292_bool == 0; // 0xd2 Not
	if(var_295_bool == 0) goto Label_214; // 0xd3 JumpB
	var_281_int = -2; // 0xd4 MovI
	return 8; // 0xd5 Return
	
Label_214:
	CreateDialog(var_288_object); // 0xd6 Func
	var_296_int = 0; // 0xd8 PushV
	func_2568(var_296_int); // 0xd9 NEW_2
	SetNPCName(var_296_int); // 0xdb ObjFunc
	var_297_int = 0; // 0xdd PushV
	func_2566(var_297_int); // 0xde NEW_2
	SetNPCDescription(var_297_int); // 0xe0 ObjFunc
	var_298_string = ""; // 0xe2 PushV
	func_2570(var_298_string); // 0xe3 NEW_2
	SetPhoto(var_298_string); // 0xe5 ObjFunc
	var_299_string = ""; // 0xe7 PushV
	func_2572(var_299_string); // 0xe8 NEW_2
	SetPhoto2(var_299_string); // 0xea ObjFunc
	var_300_int = 0; // 0xec PushV
	func_2819(var_300_int); // 0xed NEW_2
	SetPlayerName(var_300_int); // 0xef ObjFunc
	var_290_int = -1; // 0xf1 MovI
	IsOverrideActive(var_289_bool); // 0xf2 Func
	var_301_bool = var_289_bool; // 0xf4 Push
	if(var_301_bool == 0) goto Label_248; // 0xf5 JumpB
	var_281_int = -2; // 0xf6 MovI
	return 8; // 0xf7 Return
	
Label_248:
	DoDialog(var_288_object); // 0xf8 Func
	var_302_bool = 0; var_303_object = Obj(); // 0xfa PushV
	var_304_object = Obj(); // 0xfb PushV
	func_2489(var_304_object); // 0xfc NEW_2
	var_303_object = var_304_object; // 0xfd Mov
	func_2298(var_302_bool, var_303_object); // 0xff NEW_2
	var_305_object = Obj(); var_306_object = Obj(); // 0x101 PushV
	var_305_object = var_282_object; // 0x102 Mov
	var_306_object = var_288_object; // 0x103 Mov
	TaskCall(3); // 0x104 TaskCall
	func_284(var_307_object, var_308_object, var_309_string, var_310_bool, var_305_object, var_306_object); // 0x105 NEW_2
	TaskReturn(); // 0x106 TaskReturn
	IsDialogEnd(var_291_bool); // 0x108 ObjFunc
	
Label_266:
	var_380_bool = var_291_bool == 0; // 0x10a Not
	if(var_380_bool == 0) goto Label_273; // 0x10b JumpB
	sync(); // 0x10c Func
	IsDialogEnd(var_291_bool); // 0x10e ObjFunc
	goto Label_266; // 0x110 Jump
	
Label_273:
	var_381_object = Obj(); // 0x111 PushV
	var_381_object = var_282_object; // 0x112 Mov
	func_2280(); // 0x113 NEW_2
	StopDialog(var_288_object); // 0x115 Func
	GetReturnValue(var_290_int); // 0x117 ObjFunc
	var_281_int = var_290_int; // 0x119 Mov
	return 8; // 0x11a Return
}


func_2510(var_80_bool, var_81_string, var_82_string)
{
	var_83_object = Obj(); var_84_object = Obj(); // 0x9ce PushV
	FindActor(var_84_object, var_81_string); // 0x9cf Func
	var_85_bool = var_84_object == 0; // 0x9d1 NullEq
	if(var_85_bool == 0) goto Label_2517; // 0x9d2 JumpB
	var_80_bool = 0; // 0x9d3 MovB
	return 2; // 0x9d4 Return
	
Label_2517:
	Trigger(var_84_object, var_82_string); // 0x9d5 Func
	var_80_bool = 1; // 0x9d7 MovB
	return 2; // 0x9d8 Return
}


func_2769(var_43_object)
{
	var_44_object = Obj(); var_45_object = Obj(); var_46_object = Obj(); var_47_object = Obj(); // 0xad1 PushV
	GetMainOutdoorScene(var_46_object); // 0xad2 Func
	var_48_bool = var_46_object == 0; // 0xad4 NullEq
	if(var_48_bool == 0) goto Label_2780; // 0xad5 JumpB
	var_49_string = "Can't find main outdoor scene"; // 0xad6 PushS
	Trace(var_49_string); // 0xad7 Func
	var_47_object = 0; // 0xad9 SetNull
	var_43_object = var_47_object; // 0xada Mov
	return 4; // 0xadb Return
	
Label_2780:
	GetMap(var_47_object); // 0xadc ObjFunc
	var_43_object = var_47_object; // 0xade Mov
	return 4; // 0xadf Return
}


func_2522(var_54_float)
{
	var_55_float = 0; var_56_float = 0; // 0x9da PushV
	GetGameTime(var_56_float); // 0x9db Func
	var_54_float = var_56_float; // 0x9dd Mov
	return 2; // 0x9de Return
}


func_2527(var_179_int)
{
	var_180_float = 0; var_181_float = 0; // 0x9df PushV
	GetGameTime(var_181_float); // 0x9e0 Func
	var_182_int = 1; // 0x9e2 PushI
	var_183_int = 0; // 0x9e3 PushV
	var_184_int = 24; // 0x9e4 PushI
	var_183_int = var_181_float / var_181_float; // 0x9e5 Div2
	var_179_int = var_182_int + var_183_int; // 0x9e6 Add2
	return 2; // 0x9e7 Return
}


func_2786(var_88_object, var_89_string, var_90_float)
{
	var_92_cvector = CVector(0,0,0); var_93_cvector = CVector(0,0,0); var_94_object = Obj(); var_95_bool = 0; var_96_cvector = CVector(0,0,0); var_97_cvector = CVector(0,0,0); var_98_object = Obj(); var_99_bool = 0; // 0xae2 PushV
	GetMainOutdoorScene(var_98_object); // 0xae3 Func
	var_100_bool = var_98_object == 0; // 0xae5 NullEq
	if(var_100_bool == 0) goto Label_2795; // 0xae6 JumpB
	var_101_string = "Can't find main outdoor scene"; // 0xae7 PushS
	Trace(var_101_string); // 0xae8 Func
	return 8; // 0xaea Return
	
Label_2795:
	GetLocator(var_89_string, var_99_bool, var_96_cvector, var_97_cvector); // 0xaeb ObjFunc
	var_102_bool = var_99_bool == 0; // 0xaed Not
	if(var_102_bool == 0) goto Label_2805; // 0xaee JumpB
	var_103_string = "Warning: outdoor scene locator "; // 0xaef PushS
	var_104_int = var_103_string + var_89_string; // 0xaf0 Add
	var_105_string = " doesnt exist"; // 0xaf1 PushS
	var_106_int = var_104_int + var_105_string; // 0xaf2 Add
	Trace(var_106_int); // 0xaf3 Func
	
Label_2805:
	GetMap(var_88_object); // 0xaf5 ObjFunc
	var_107_bool = var_88_object == 0; // 0xaf7 NullEq
	if(var_107_bool == 0) goto Label_2813; // 0xaf8 JumpB
	var_108_string = "Can't find map"; // 0xaf9 PushS
	Trace(var_108_string); // 0xafa Func
	return 8; // 0xafc Return
	
Label_2813:
	var_109_float = GetByIndex(var_96_cvector, 0); // 0xafd PushE
	var_110_float = GetByIndex(var_96_cvector, 2); // 0xafe PushE
	SetMapParams(var_109_float, var_110_float, var_90_float); // 0xaff ObjFunc
	return 8; // 0xb01 Return
}


func_2280()
{
	var_270_bool = 0; var_271_bool = 0; // 0x8e8 PushV
	var_272_bool = 1; // 0x8e9 PushB
	CameraSwitchToNormal(var_272_bool); // 0x8ea Func
	var_273_bool = 0; // 0x8ec PushV
	func_2574(var_273_bool); // 0x8ed NEW_2
	if(var_273_bool == 0) goto Label_2289; // 0x8ef JumpB
	goto Label_2297; // 0x8f0 Jump
	
Label_2297:
	return 2; // 0x8f9 Return
	
Label_2289:
	var_274_string = "head"; // 0x8f1 PushS
	HasAnimationTrack(var_271_bool, var_274_string); // 0x8f2 Func
	var_275_bool = var_271_bool; // 0x8f4 Push
	if(var_275_bool == 0) goto Label_2297; // 0x8f5 JumpB
	var_276_string = "head"; // 0x8f6 PushS
	UnlookAsync(var_276_string); // 0x8f7 Func
}


func_2536(var_278_bool, var_279_int)
{
	var_280_int = 0; // 0x9e9 PushV
	func_2527(var_280_int); // 0x9ea NEW_2
	var_278_bool = var_280_int == var_279_int; // 0x9ec Eq2
	return 0; // 0x9ed Return
}


func_1002(var_0_object, var_1_object, var_2_object, var_3_string, var_408_object, var_409_object)
{
	var_0_object = var_409_object; // 0x3eb TMov
	var_1_object = var_408_object; // 0x3ec TMov
	var_3_string = 0; // 0x3ed TMovB
	var_414_int = 1; // 0x3ee PushI
	if(var_414_int == 0) goto Label_1044; // 0x3ef JumpB
	var_415_string = ""; // 0x3f0 PushV
	var_415_string = "Fear"; // 0x3f1 MovS
	func_1074(var_409_object, var_415_string); // 0x3f2 NEW_2
	var_423_int = 521486; // 0x3f4 PushI
	SetMessage(var_423_int); // 0x3f5 TObjFunc
	ClearReplies(); // 0x3f7 TObjFunc
	var_424_bool = 0; // 0x3f9 PushV
	var_424_bool = 0; // 0x3fa MovB
	var_425_bool = 0; var_426_object = Obj(); // 0x3fb PushV
	var_426_object = var_1_object; // 0x3fc MovT
	func_2650(var_426_object); // 0x3fd NEW_2
	if(var_425_bool == 0) goto Label_1030; // 0x3ff JumpB
	var_431_bool = 0; var_432_object = Obj(); // 0x400 PushV
	var_432_object = var_1_object; // 0x401 MovT
	func_2638(var_432_object); // 0x402 NEW_2
	if(var_431_bool == 0) goto Label_1030; // 0x404 JumpB
	var_424_bool = 1; // 0x405 MovB
	
Label_1030:
	if(var_424_bool == 0) goto Label_1036; // 0x406 JumpB
	var_437_int = 521487; // 0x407 PushI
	var_438_int = 22653; // 0x408 PushI
	var_439_int = 22652; // 0x409 PushI
	AddReply(var_437_int, var_438_int, var_439_int); // 0x40a TObjFunc
	
Label_1036:
	var_440_int = 521490; // 0x40c PushI
	var_441_int = -1; // 0x40d PushI
	var_442_int = 22655; // 0x40e PushI
	AddReply(var_440_int, var_441_int, var_442_int); // 0x40f TObjFunc
	goto Label_1044; // 0x411 Jump
	
Label_1044:
	var_443_bool = 0; // 0x414 PushV
	func_2574(var_443_bool); // 0x415 NEW_2
	if(var_443_bool == 0) goto Label_1059; // 0x417 JumpB
	
Label_1048:
	lshWaitForAnimEnd(); // 0x418 Func
	var_444_string = var_3_string; // 0x41a PushT
	if(var_444_string == 0) goto Label_1053; // 0x41b JumpB
	goto Label_1058; // 0x41c Jump
	
Label_1058:
	goto Label_1073; // 0x422 Jump
	
Label_1073:
	return 0; // 0x431 Return
	
Label_1053:
	var_445_string = ""; // 0x41d PushV
	var_445_string = var_2_object; // 0x41e MovT
	func_2436(var_445_string); // 0x41f NEW_2
	goto Label_1048; // 0x421 Jump
	
Label_1059:
	var_446_string = "all"; // 0x423 PushS
	var_447_string = "idle"; // 0x424 PushS
	PlayAnimation(var_446_string, var_447_string); // 0x425 Func
	
Label_1063:
	WaitForAnimEnd(); // 0x427 Func
	var_448_string = var_3_string; // 0x429 PushT
	if(var_448_string == 0) goto Label_1068; // 0x42a JumpB
	goto Label_1073; // 0x42b Jump
	
Label_1068:
	var_449_string = "all"; // 0x42c PushS
	var_450_string = "idle"; // 0x42d PushS
	PlayAnimation(var_449_string, var_450_string); // 0x42e Func
	goto Label_1063; // 0x430 Jump
}


func_2542(var_56_string, var_57_int)
{
	var_58_string = ""; var_59_string = ""; // 0x9ee PushV
	var_59_string = "idle"; // 0x9ef MovS
	var_60_int = var_57_int; // 0x9f0 Push
	if(var_60_int == 0) goto Label_2547; // 0x9f1 JumpB
	var_59_string = var_59_string + var_57_int; // 0x9f2 Add2
	
Label_2547:
	var_56_string = var_59_string; // 0x9f3 Mov
	return 2; // 0x9f4 Return
}


func_1265(var_0_object, var_455_int, var_456_object)
{
	var_458_object = Obj(); var_459_bool = 0; var_460_int = 0; var_461_bool = 0; var_462_object = Obj(); var_463_bool = 0; var_464_int = 0; var_465_bool = 0; // 0x4f1 PushV
	var_0_object = var_456_object; // 0x4f2 TMov
	var_466_bool = 0; var_467_object = Obj(); var_468_float = 0; // 0x4f3 PushV
	var_467_object = var_456_object; // 0x4f4 Mov
	var_468_float = 70.0; // 0x4f5 MovF
	func_2211(var_467_object, var_468_float); // 0x4f6 NEW_2
	var_469_bool = var_466_bool == 0; // 0x4f8 Not
	if(var_469_bool == 0) goto Label_1276; // 0x4f9 JumpB
	var_455_int = -2; // 0x4fa MovI
	return 8; // 0x4fb Return
	
Label_1276:
	CreateDialog(var_462_object); // 0x4fc Func
	var_470_int = 0; // 0x4fe PushV
	func_2568(var_470_int); // 0x4ff NEW_2
	SetNPCName(var_470_int); // 0x501 ObjFunc
	var_471_int = 0; // 0x503 PushV
	func_2566(var_471_int); // 0x504 NEW_2
	SetNPCDescription(var_471_int); // 0x506 ObjFunc
	var_472_string = ""; // 0x508 PushV
	func_2570(var_472_string); // 0x509 NEW_2
	SetPhoto(var_472_string); // 0x50b ObjFunc
	var_473_string = ""; // 0x50d PushV
	func_2572(var_473_string); // 0x50e NEW_2
	SetPhoto2(var_473_string); // 0x510 ObjFunc
	var_474_int = 0; // 0x512 PushV
	func_2819(var_474_int); // 0x513 NEW_2
	SetPlayerName(var_474_int); // 0x515 ObjFunc
	var_464_int = -1; // 0x517 MovI
	IsOverrideActive(var_463_bool); // 0x518 Func
	var_475_bool = var_463_bool; // 0x51a Push
	if(var_475_bool == 0) goto Label_1310; // 0x51b JumpB
	var_455_int = -2; // 0x51c MovI
	return 8; // 0x51d Return
	
Label_1310:
	DoDialog(var_462_object); // 0x51e Func
	var_476_bool = 0; var_477_object = Obj(); // 0x520 PushV
	var_478_object = Obj(); // 0x521 PushV
	func_2489(var_478_object); // 0x522 NEW_2
	var_477_object = var_478_object; // 0x523 Mov
	func_2298(var_476_bool, var_477_object); // 0x525 NEW_2
	var_479_object = Obj(); var_480_object = Obj(); // 0x527 PushV
	var_479_object = var_456_object; // 0x528 Mov
	var_480_object = var_462_object; // 0x529 Mov
	TaskCall(7); // 0x52a TaskCall
	func_1346(var_481_object, var_482_object, var_483_string, var_484_bool, var_479_object, var_480_object); // 0x52b NEW_2
	TaskReturn(); // 0x52c TaskReturn
	IsDialogEnd(var_465_bool); // 0x52e ObjFunc
	
Label_1328:
	var_506_bool = var_465_bool == 0; // 0x530 Not
	if(var_506_bool == 0) goto Label_1335; // 0x531 JumpB
	sync(); // 0x532 Func
	IsDialogEnd(var_465_bool); // 0x534 ObjFunc
	goto Label_1328; // 0x536 Jump
	
Label_1335:
	var_507_object = Obj(); // 0x537 PushV
	var_507_object = var_456_object; // 0x538 Mov
	func_2280(); // 0x539 NEW_2
	StopDialog(var_462_object); // 0x53b Func
	GetReturnValue(var_464_int); // 0x53d ObjFunc
	var_455_int = var_464_int; // 0x53f Mov
	return 8; // 0x540 Return
}


func_2549(var_50_int)
{
	var_51_int = 0; var_52_bool = 0; var_53_int = 0; var_54_bool = 0; // 0x9f5 PushV
	var_53_int = 0; // 0x9f6 MovI
	
Label_2551:
	var_55_string = "all"; // 0x9f7 PushS
	var_56_string = ""; var_57_int = 0; // 0x9f8 PushV
	var_57_int = var_53_int; // 0x9f9 Mov
	func_2542(var_56_string, var_57_int); // 0x9fa NEW_2
	HasAnimation(var_54_bool, var_55_string, var_56_string); // 0x9fc Func
	var_61_bool = var_54_bool == 0; // 0x9fe Not
	if(var_61_bool == 0) goto Label_2561; // 0x9ff JumpB
	goto Label_2564; // 0xa00 Jump
	
Label_2564:
	var_50_int = var_53_int; // 0xa04 Mov
	return 4; // 0xa05 Return
	
Label_2561:
	var_62_int = 1; // 0xa01 PushI
	var_53_int = var_53_int + var_62_int; // 0xa02 Add2
	goto Label_2551; // 0xa03 Jump
}


func_2298(var_124_bool, var_125_object)
{
	var_129_int = 0; var_130_int = 0; var_131_int = 0; var_132_int = 0; // 0x8fa PushV
	var_133_string = "voice_common"; // 0x8fb PushS
	GetVariable(var_133_string, var_131_int); // 0x8fc Func
	var_134_int = var_131_int; // 0x8fe Push
	if(var_134_int == 0) goto Label_2336; // 0x8ff JumpB
	var_135_bool = 0; var_136_object = Obj(); // 0x900 PushV
	var_136_object = var_125_object; // 0x901 Mov
	func_2356(var_136_object); // 0x902 NEW_2
	var_165_bool = var_135_bool == 0; // 0x904 Not
	if(var_165_bool == 0) goto Label_2318; // 0x905 JumpB
	var_166_bool = 0; var_167_object = Obj(); // 0x906 PushV
	var_167_object = var_125_object; // 0x907 Mov
	func_2393(var_167_object); // 0x908 NEW_2
	var_201_bool = var_166_bool == 0; // 0x90a Not
	if(var_201_bool == 0) goto Label_2318; // 0x90b JumpB
	var_124_bool = 0; // 0x90c MovB
	return 4; // 0x90d Return
	
Label_2318:
	var_202_int = 2; // 0x90e PushI
	irand(var_132_int, var_202_int); // 0x90f Func
	var_203_int = var_132_int; // 0x911 Push
	if(var_203_int == 0) goto Label_2331; // 0x912 JumpB
	var_204_string = "voice_common"; // 0x913 PushS
	var_205_int = 1; // 0x914 PushI
	var_206_int = var_131_int + var_205_int; // 0x915 Add
	var_207_int = 3; // 0x916 PushI
	var_208_int = var_206_int / var_207_int; // 0x917 Mod
	SetVariable(var_204_string, var_208_int); // 0x918 Func
	goto Label_2335; // 0x91a Jump
	
Label_2335:
	goto Label_2354; // 0x91f Jump
	
Label_2354:
	var_124_bool = 1; // 0x932 MovB
	return 4; // 0x933 Return
	
Label_2331:
	var_209_string = "voice_common"; // 0x91b PushS
	var_210_int = 0; // 0x91c PushI
	SetVariable(var_209_string, var_210_int); // 0x91d Func
	
Label_2336:
	var_211_bool = 0; var_212_object = Obj(); // 0x920 PushV
	var_212_object = var_125_object; // 0x921 Mov
	func_2393(var_212_object); // 0x922 NEW_2
	var_213_bool = var_211_bool == 0; // 0x924 Not
	if(var_213_bool == 0) goto Label_2350; // 0x925 JumpB
	var_214_bool = 0; var_215_object = Obj(); // 0x926 PushV
	var_215_object = var_125_object; // 0x927 Mov
	func_2356(var_215_object); // 0x928 NEW_2
	var_216_bool = var_214_bool == 0; // 0x92a Not
	if(var_216_bool == 0) goto Label_2350; // 0x92b JumpB
	var_124_bool = 0; // 0x92c MovB
	return 4; // 0x92d Return
	
Label_2350:
	var_217_string = "voice_common"; // 0x92e PushS
	var_218_int = 1; // 0x92f PushI
	SetVariable(var_217_string, var_218_int); // 0x930 Func
}


