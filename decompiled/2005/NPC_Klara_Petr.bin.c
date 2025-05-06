task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_cvector)
{
	var_28_int = 1; // 0xa2 PushI
	if(var_28_int == 0) goto Label_238; // 0xa3 JumpB
	func_2256(); // 0xa5 NEW_2
	var_30_int = 26878; // 0xa7 PushI
	var_31_bool = var_26_bool == var_30_int; // 0xa8 Eq
	if(var_31_bool == 0) goto Label_190; // 0xa9 JumpB
	var_32_string = ""; // 0xaa PushV
	var_32_string = "Neutral"; // 0xab MovS
	func_139(var_27_cvector, var_32_string); // 0xac NEW_2
	var_49_int = 525522; // 0xae PushI
	SetMessage(var_49_int); // 0xaf TObjFunc
	ClearReplies(); // 0xb1 TObjFunc
	var_50_int = 525523; // 0xb3 PushI
	var_51_int = 30733; // 0xb4 PushI
	var_52_int = 26879; // 0xb5 PushI
	AddReply(var_50_int, var_51_int, var_52_int); // 0xb6 TObjFunc
	var_53_int = 529279; // 0xb8 PushI
	var_54_int = 30734; // 0xb9 PushI
	var_55_int = 30732; // 0xba PushI
	AddReply(var_53_int, var_54_int, var_55_int); // 0xbb TObjFunc
	return 0; // 0xbd Return
	
Label_190:
	var_56_int = 30734; // 0xbe PushI
	var_57_bool = var_26_bool == var_56_int; // 0xbf Eq
	if(var_57_bool == 0) goto Label_208; // 0xc0 JumpB
	var_58_string = ""; // 0xc1 PushV
	var_58_string = "Neutral"; // 0xc2 MovS
	func_139(var_27_cvector, var_58_string); // 0xc3 NEW_2
	var_59_int = 529281; // 0xc5 PushI
	SetMessage(var_59_int); // 0xc6 TObjFunc
	ClearReplies(); // 0xc8 TObjFunc
	var_60_int = 529283; // 0xca PushI
	var_61_int = -1; // 0xcb PushI
	var_62_int = 30736; // 0xcc PushI
	AddReply(var_60_int, var_61_int, var_62_int); // 0xcd TObjFunc
	return 0; // 0xcf Return
	
Label_208:
	var_63_int = 30733; // 0xd0 PushI
	var_64_bool = var_26_bool == var_63_int; // 0xd1 Eq
	if(var_64_bool == 0) goto Label_226; // 0xd2 JumpB
	var_65_string = ""; // 0xd3 PushV
	var_65_string = "Neutral"; // 0xd4 MovS
	func_139(var_27_cvector, var_65_string); // 0xd5 NEW_2
	var_66_int = 529280; // 0xd7 PushI
	SetMessage(var_66_int); // 0xd8 TObjFunc
	ClearReplies(); // 0xda TObjFunc
	var_67_int = 529282; // 0xdc PushI
	var_68_int = -1; // 0xdd PushI
	var_69_int = 30735; // 0xde PushI
	AddReply(var_67_int, var_68_int, var_69_int); // 0xdf TObjFunc
	return 0; // 0xe1 Return
	
Label_226:
	var_3_string = 1; // 0xe2 TMovB
	var_70_bool = 0; // 0xe3 PushV
	func_2392(var_70_bool); // 0xe4 NEW_2
	if(var_70_bool == 0) goto Label_234; // 0xe6 JumpB
	lshStopAnimation(); // 0xe7 Func
	goto Label_236; // 0xe9 Jump
	
Label_236:
	return 0; // 0xec Return
	
Label_234:
	StopAnimation(); // 0xea Func
	
Label_238:
	return 0; // 0xee Return
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_cvector)
{
	var_28_int = 1; // 0x1a5 PushI
	if(var_28_int == 0) goto Label_920; // 0x1a6 JumpB
	func_2256(); // 0x1a8 NEW_2
	var_30_int = 27195; // 0x1aa PushI
	var_31_bool = var_27_cvector == var_30_int; // 0x1ab Eq
	if(var_31_bool == 0) goto Label_444; // 0x1ac JumpB
	var_32_object = Obj(); var_33_object = Obj(); // 0x1ad PushV
	var_32_object = var_1_object; // 0x1ae MovT
	var_33_object = var_0_object; // 0x1af MovT
	func_2394(); // 0x1b0 NEW_2
	var_81_object = Obj(); var_82_object = Obj(); // 0x1b2 PushV
	var_81_object = var_1_object; // 0x1b3 MovT
	var_82_object = var_0_object; // 0x1b4 MovT
	func_2465(); // 0x1b5 NEW_2
	var_107_object = Obj(); var_108_object = Obj(); // 0x1b7 PushV
	var_107_object = var_1_object; // 0x1b8 MovT
	var_108_object = var_0_object; // 0x1b9 MovT
	func_2454(var_108_object); // 0x1ba NEW_2
	
Label_444:
	var_131_int = 42977; // 0x1bc PushI
	var_132_bool = var_27_cvector == var_131_int; // 0x1bd Eq
	if(var_132_bool == 0) goto Label_457; // 0x1be JumpB
	var_133_object = Obj(); var_134_object = Obj(); // 0x1bf PushV
	var_133_object = var_1_object; // 0x1c0 MovT
	var_134_object = var_0_object; // 0x1c1 MovT
	func_2394(); // 0x1c2 NEW_2
	var_135_object = Obj(); var_136_object = Obj(); // 0x1c4 PushV
	var_135_object = var_1_object; // 0x1c5 MovT
	var_136_object = var_0_object; // 0x1c6 MovT
	func_2454(var_136_object); // 0x1c7 NEW_2
	
Label_457:
	var_137_int = 27221; // 0x1c9 PushI
	var_138_bool = var_27_cvector == var_137_int; // 0x1ca Eq
	if(var_138_bool == 0) goto Label_465; // 0x1cb JumpB
	var_139_object = Obj(); var_140_object = Obj(); // 0x1cc PushV
	var_139_object = var_1_object; // 0x1cd MovT
	var_140_object = var_0_object; // 0x1ce MovT
	func_2422(); // 0x1cf NEW_2
	
Label_465:
	var_151_int = 42988; // 0x1d1 PushI
	var_152_bool = var_27_cvector == var_151_int; // 0x1d2 Eq
	if(var_152_bool == 0) goto Label_473; // 0x1d3 JumpB
	var_153_object = Obj(); var_154_object = Obj(); // 0x1d4 PushV
	var_153_object = var_1_object; // 0x1d5 MovT
	var_154_object = var_0_object; // 0x1d6 MovT
	func_2422(); // 0x1d7 NEW_2
	
Label_473:
	var_155_int = 42994; // 0x1d9 PushI
	var_156_bool = var_27_cvector == var_155_int; // 0x1da Eq
	if(var_156_bool == 0) goto Label_481; // 0x1db JumpB
	var_157_object = Obj(); var_158_object = Obj(); // 0x1dc PushV
	var_157_object = var_1_object; // 0x1dd MovT
	var_158_object = var_0_object; // 0x1de MovT
	func_2422(); // 0x1df NEW_2
	
Label_481:
	var_159_int = 27223; // 0x1e1 PushI
	var_160_bool = var_27_cvector == var_159_int; // 0x1e2 Eq
	if(var_160_bool == 0) goto Label_499; // 0x1e3 JumpB
	var_161_object = Obj(); var_162_object = Obj(); // 0x1e4 PushV
	var_161_object = var_1_object; // 0x1e5 MovT
	var_162_object = var_0_object; // 0x1e6 MovT
	func_2422(); // 0x1e7 NEW_2
	var_163_object = Obj(); var_164_object = Obj(); // 0x1e9 PushV
	var_163_object = var_1_object; // 0x1ea MovT
	var_164_object = var_0_object; // 0x1eb MovT
	func_2448(); // 0x1ec NEW_2
	var_167_object = Obj(); var_168_object = Obj(); // 0x1ee PushV
	var_167_object = var_1_object; // 0x1ef MovT
	var_168_object = var_0_object; // 0x1f0 MovT
	func_2431(var_168_object); // 0x1f1 NEW_2
	
Label_499:
	var_173_int = 27192; // 0x1f3 PushI
	var_174_bool = var_26_bool == var_173_int; // 0x1f4 Eq
	if(var_174_bool == 0) goto Label_542; // 0x1f5 JumpB
	var_175_string = ""; // 0x1f6 PushV
	var_175_string = "Neutral"; // 0x1f7 MovS
	func_398(var_27_cvector, var_175_string); // 0x1f8 NEW_2
	var_192_int = 525900; // 0x1fa PushI
	SetMessage(var_192_int); // 0x1fb TObjFunc
	ClearReplies(); // 0x1fd TObjFunc
	var_193_bool = 0; var_194_object = Obj(); // 0x1ff PushV
	var_194_object = var_1_object; // 0x200 MovT
	func_2481(var_194_object); // 0x201 NEW_2
	if(var_193_bool == 0) goto Label_521; // 0x203 JumpB
	var_201_int = 525901; // 0x204 PushI
	var_202_int = 42962; // 0x205 PushI
	var_203_int = 27193; // 0x206 PushI
	AddReply(var_201_int, var_202_int, var_203_int); // 0x207 TObjFunc
	
Label_521:
	var_204_bool = 0; var_205_object = Obj(); // 0x209 PushV
	var_205_object = var_1_object; // 0x20a MovT
	func_2493(var_205_object); // 0x20b NEW_2
	if(var_204_bool == 0) goto Label_531; // 0x20d JumpB
	var_210_int = 525924; // 0x20e PushI
	var_211_int = 30559; // 0x20f PushI
	var_212_int = 27216; // 0x210 PushI
	AddReply(var_210_int, var_211_int, var_212_int); // 0x211 TObjFunc
	
Label_531:
	var_213_int = 525904; // 0x213 PushI
	var_214_int = -1; // 0x214 PushI
	var_215_int = 27196; // 0x215 PushI
	AddReply(var_213_int, var_214_int, var_215_int); // 0x216 TObjFunc
	var_216_int = 529107; // 0x218 PushI
	var_217_int = -1; // 0x219 PushI
	var_218_int = 30552; // 0x21a PushI
	AddReply(var_216_int, var_217_int, var_218_int); // 0x21b TObjFunc
	return 0; // 0x21d Return
	
Label_542:
	var_219_int = 30559; // 0x21e PushI
	var_220_bool = var_26_bool == var_219_int; // 0x21f Eq
	if(var_220_bool == 0) goto Label_560; // 0x220 JumpB
	var_221_string = ""; // 0x221 PushV
	var_221_string = "Neutral"; // 0x222 MovS
	func_398(var_27_cvector, var_221_string); // 0x223 NEW_2
	var_222_int = 529114; // 0x225 PushI
	SetMessage(var_222_int); // 0x226 TObjFunc
	ClearReplies(); // 0x228 TObjFunc
	var_223_int = 529115; // 0x22a PushI
	var_224_int = 27217; // 0x22b PushI
	var_225_int = 30560; // 0x22c PushI
	AddReply(var_223_int, var_224_int, var_225_int); // 0x22d TObjFunc
	return 0; // 0x22f Return
	
Label_560:
	var_226_int = 27217; // 0x230 PushI
	var_227_bool = var_26_bool == var_226_int; // 0x231 Eq
	if(var_227_bool == 0) goto Label_583; // 0x232 JumpB
	var_228_string = ""; // 0x233 PushV
	var_228_string = "Autizm"; // 0x234 MovS
	func_398(var_27_cvector, var_228_string); // 0x235 NEW_2
	var_229_int = 525925; // 0x237 PushI
	SetMessage(var_229_int); // 0x238 TObjFunc
	ClearReplies(); // 0x23a TObjFunc
	var_230_int = 525926; // 0x23c PushI
	var_231_int = 27220; // 0x23d PushI
	var_232_int = 27218; // 0x23e PushI
	AddReply(var_230_int, var_231_int, var_232_int); // 0x23f TObjFunc
	var_233_int = 525927; // 0x241 PushI
	var_234_int = 27222; // 0x242 PushI
	var_235_int = 27219; // 0x243 PushI
	AddReply(var_233_int, var_234_int, var_235_int); // 0x244 TObjFunc
	return 0; // 0x246 Return
	
Label_583:
	var_236_int = 27222; // 0x247 PushI
	var_237_bool = var_26_bool == var_236_int; // 0x248 Eq
	if(var_237_bool == 0) goto Label_606; // 0x249 JumpB
	var_238_string = ""; // 0x24a PushV
	var_238_string = "Drunk"; // 0x24b MovS
	func_398(var_27_cvector, var_238_string); // 0x24c NEW_2
	var_239_int = 525930; // 0x24e PushI
	SetMessage(var_239_int); // 0x24f TObjFunc
	ClearReplies(); // 0x251 TObjFunc
	var_240_int = 540904; // 0x253 PushI
	var_241_int = 42980; // 0x254 PushI
	var_242_int = 42979; // 0x255 PushI
	AddReply(var_240_int, var_241_int, var_242_int); // 0x256 TObjFunc
	var_243_int = 525931; // 0x258 PushI
	var_244_int = -1; // 0x259 PushI
	var_245_int = 27223; // 0x25a PushI
	AddReply(var_243_int, var_244_int, var_245_int); // 0x25b TObjFunc
	return 0; // 0x25d Return
	
Label_606:
	var_246_int = 42980; // 0x25e PushI
	var_247_bool = var_26_bool == var_246_int; // 0x25f Eq
	if(var_247_bool == 0) goto Label_629; // 0x260 JumpB
	var_248_string = ""; // 0x261 PushV
	var_248_string = "Drunk"; // 0x262 MovS
	func_398(var_27_cvector, var_248_string); // 0x263 NEW_2
	var_249_int = 540905; // 0x265 PushI
	SetMessage(var_249_int); // 0x266 TObjFunc
	ClearReplies(); // 0x268 TObjFunc
	var_250_int = 540906; // 0x26a PushI
	var_251_int = 42982; // 0x26b PushI
	var_252_int = 42981; // 0x26c PushI
	AddReply(var_250_int, var_251_int, var_252_int); // 0x26d TObjFunc
	var_253_int = 540914; // 0x26f PushI
	var_254_int = 42982; // 0x270 PushI
	var_255_int = 42990; // 0x271 PushI
	AddReply(var_253_int, var_254_int, var_255_int); // 0x272 TObjFunc
	return 0; // 0x274 Return
	
Label_629:
	var_256_int = 42982; // 0x275 PushI
	var_257_bool = var_26_bool == var_256_int; // 0x276 Eq
	if(var_257_bool == 0) goto Label_652; // 0x277 JumpB
	var_258_string = ""; // 0x278 PushV
	var_258_string = "Neutral"; // 0x279 MovS
	func_398(var_27_cvector, var_258_string); // 0x27a NEW_2
	var_259_int = 540907; // 0x27c PushI
	SetMessage(var_259_int); // 0x27d TObjFunc
	ClearReplies(); // 0x27f TObjFunc
	var_260_int = 540908; // 0x281 PushI
	var_261_int = 42984; // 0x282 PushI
	var_262_int = 42983; // 0x283 PushI
	AddReply(var_260_int, var_261_int, var_262_int); // 0x284 TObjFunc
	var_263_int = 540915; // 0x286 PushI
	var_264_int = 42987; // 0x287 PushI
	var_265_int = 42992; // 0x288 PushI
	AddReply(var_263_int, var_264_int, var_265_int); // 0x289 TObjFunc
	return 0; // 0x28b Return
	
Label_652:
	var_266_int = 42984; // 0x28c PushI
	var_267_bool = var_26_bool == var_266_int; // 0x28d Eq
	if(var_267_bool == 0) goto Label_675; // 0x28e JumpB
	var_268_string = ""; // 0x28f PushV
	var_268_string = "Neutral"; // 0x290 MovS
	func_398(var_27_cvector, var_268_string); // 0x291 NEW_2
	var_269_int = 540909; // 0x293 PushI
	SetMessage(var_269_int); // 0x294 TObjFunc
	ClearReplies(); // 0x296 TObjFunc
	var_270_int = 540910; // 0x298 PushI
	var_271_int = 42987; // 0x299 PushI
	var_272_int = 42985; // 0x29a PushI
	AddReply(var_270_int, var_271_int, var_272_int); // 0x29b TObjFunc
	var_273_int = 540911; // 0x29d PushI
	var_274_int = 42987; // 0x29e PushI
	var_275_int = 42986; // 0x29f PushI
	AddReply(var_273_int, var_274_int, var_275_int); // 0x2a0 TObjFunc
	return 0; // 0x2a2 Return
	
Label_675:
	var_276_int = 42987; // 0x2a3 PushI
	var_277_bool = var_26_bool == var_276_int; // 0x2a4 Eq
	if(var_277_bool == 0) goto Label_698; // 0x2a5 JumpB
	var_278_string = ""; // 0x2a6 PushV
	var_278_string = "Autizm"; // 0x2a7 MovS
	func_398(var_27_cvector, var_278_string); // 0x2a8 NEW_2
	var_279_int = 540912; // 0x2aa PushI
	SetMessage(var_279_int); // 0x2ab TObjFunc
	ClearReplies(); // 0x2ad TObjFunc
	var_280_int = 540913; // 0x2af PushI
	var_281_int = -1; // 0x2b0 PushI
	var_282_int = 42988; // 0x2b1 PushI
	AddReply(var_280_int, var_281_int, var_282_int); // 0x2b2 TObjFunc
	var_283_int = 540916; // 0x2b4 PushI
	var_284_int = -1; // 0x2b5 PushI
	var_285_int = 42994; // 0x2b6 PushI
	AddReply(var_283_int, var_284_int, var_285_int); // 0x2b7 TObjFunc
	return 0; // 0x2b9 Return
	
Label_698:
	var_286_int = 27220; // 0x2ba PushI
	var_287_bool = var_26_bool == var_286_int; // 0x2bb Eq
	if(var_287_bool == 0) goto Label_716; // 0x2bc JumpB
	var_288_string = ""; // 0x2bd PushV
	var_288_string = "Autizm"; // 0x2be MovS
	func_398(var_27_cvector, var_288_string); // 0x2bf NEW_2
	var_289_int = 525928; // 0x2c1 PushI
	SetMessage(var_289_int); // 0x2c2 TObjFunc
	ClearReplies(); // 0x2c4 TObjFunc
	var_290_int = 529116; // 0x2c6 PushI
	var_291_int = 30562; // 0x2c7 PushI
	var_292_int = 30561; // 0x2c8 PushI
	AddReply(var_290_int, var_291_int, var_292_int); // 0x2c9 TObjFunc
	return 0; // 0x2cb Return
	
Label_716:
	var_293_int = 30562; // 0x2cc PushI
	var_294_bool = var_26_bool == var_293_int; // 0x2cd Eq
	if(var_294_bool == 0) goto Label_734; // 0x2ce JumpB
	var_295_string = ""; // 0x2cf PushV
	var_295_string = "Neutral"; // 0x2d0 MovS
	func_398(var_27_cvector, var_295_string); // 0x2d1 NEW_2
	var_296_int = 529117; // 0x2d3 PushI
	SetMessage(var_296_int); // 0x2d4 TObjFunc
	ClearReplies(); // 0x2d6 TObjFunc
	var_297_int = 525929; // 0x2d8 PushI
	var_298_int = -1; // 0x2d9 PushI
	var_299_int = 27221; // 0x2da PushI
	AddReply(var_297_int, var_298_int, var_299_int); // 0x2db TObjFunc
	return 0; // 0x2dd Return
	
Label_734:
	var_300_int = 42962; // 0x2de PushI
	var_301_bool = var_26_bool == var_300_int; // 0x2df Eq
	if(var_301_bool == 0) goto Label_752; // 0x2e0 JumpB
	var_302_string = ""; // 0x2e1 PushV
	var_302_string = "Neutral"; // 0x2e2 MovS
	func_398(var_27_cvector, var_302_string); // 0x2e3 NEW_2
	var_303_int = 540891; // 0x2e5 PushI
	SetMessage(var_303_int); // 0x2e6 TObjFunc
	ClearReplies(); // 0x2e8 TObjFunc
	var_304_int = 540892; // 0x2ea PushI
	var_305_int = 30553; // 0x2eb PushI
	var_306_int = 42963; // 0x2ec PushI
	AddReply(var_304_int, var_305_int, var_306_int); // 0x2ed TObjFunc
	return 0; // 0x2ef Return
	
Label_752:
	var_307_int = 30553; // 0x2f0 PushI
	var_308_bool = var_26_bool == var_307_int; // 0x2f1 Eq
	if(var_308_bool == 0) goto Label_775; // 0x2f2 JumpB
	var_309_string = ""; // 0x2f3 PushV
	var_309_string = "Neutral"; // 0x2f4 MovS
	func_398(var_27_cvector, var_309_string); // 0x2f5 NEW_2
	var_310_int = 529108; // 0x2f7 PushI
	SetMessage(var_310_int); // 0x2f8 TObjFunc
	ClearReplies(); // 0x2fa TObjFunc
	var_311_int = 529109; // 0x2fc PushI
	var_312_int = 30555; // 0x2fd PushI
	var_313_int = 30554; // 0x2fe PushI
	AddReply(var_311_int, var_312_int, var_313_int); // 0x2ff TObjFunc
	var_314_int = 540893; // 0x301 PushI
	var_315_int = 42965; // 0x302 PushI
	var_316_int = 42964; // 0x303 PushI
	AddReply(var_314_int, var_315_int, var_316_int); // 0x304 TObjFunc
	return 0; // 0x306 Return
	
Label_775:
	var_317_int = 42965; // 0x307 PushI
	var_318_bool = var_26_bool == var_317_int; // 0x308 Eq
	if(var_318_bool == 0) goto Label_798; // 0x309 JumpB
	var_319_string = ""; // 0x30a PushV
	var_319_string = "Untrust"; // 0x30b MovS
	func_398(var_27_cvector, var_319_string); // 0x30c NEW_2
	var_320_int = 540894; // 0x30e PushI
	SetMessage(var_320_int); // 0x30f TObjFunc
	ClearReplies(); // 0x311 TObjFunc
	var_321_int = 540895; // 0x313 PushI
	var_322_int = 27194; // 0x314 PushI
	var_323_int = 42966; // 0x315 PushI
	AddReply(var_321_int, var_322_int, var_323_int); // 0x316 TObjFunc
	var_324_int = 540900; // 0x318 PushI
	var_325_int = 27194; // 0x319 PushI
	var_326_int = 42973; // 0x31a PushI
	AddReply(var_324_int, var_325_int, var_326_int); // 0x31b TObjFunc
	return 0; // 0x31d Return
	
Label_798:
	var_327_int = 30555; // 0x31e PushI
	var_328_bool = var_26_bool == var_327_int; // 0x31f Eq
	if(var_328_bool == 0) goto Label_821; // 0x320 JumpB
	var_329_string = ""; // 0x321 PushV
	var_329_string = "Neutral"; // 0x322 MovS
	func_398(var_27_cvector, var_329_string); // 0x323 NEW_2
	var_330_int = 529110; // 0x325 PushI
	SetMessage(var_330_int); // 0x326 TObjFunc
	ClearReplies(); // 0x328 TObjFunc
	var_331_int = 529111; // 0x32a PushI
	var_332_int = 30557; // 0x32b PushI
	var_333_int = 30556; // 0x32c PushI
	AddReply(var_331_int, var_332_int, var_333_int); // 0x32d TObjFunc
	var_334_int = 540899; // 0x32f PushI
	var_335_int = 42965; // 0x330 PushI
	var_336_int = 42971; // 0x331 PushI
	AddReply(var_334_int, var_335_int, var_336_int); // 0x332 TObjFunc
	return 0; // 0x334 Return
	
Label_821:
	var_337_int = 30557; // 0x335 PushI
	var_338_bool = var_26_bool == var_337_int; // 0x336 Eq
	if(var_338_bool == 0) goto Label_844; // 0x337 JumpB
	var_339_string = ""; // 0x338 PushV
	var_339_string = "Untrust"; // 0x339 MovS
	func_398(var_27_cvector, var_339_string); // 0x33a NEW_2
	var_340_int = 529112; // 0x33c PushI
	SetMessage(var_340_int); // 0x33d TObjFunc
	ClearReplies(); // 0x33f TObjFunc
	var_341_int = 529113; // 0x341 PushI
	var_342_int = 27194; // 0x342 PushI
	var_343_int = 30558; // 0x343 PushI
	AddReply(var_341_int, var_342_int, var_343_int); // 0x344 TObjFunc
	var_344_int = 540898; // 0x346 PushI
	var_345_int = 42969; // 0x347 PushI
	var_346_int = 42970; // 0x348 PushI
	AddReply(var_344_int, var_345_int, var_346_int); // 0x349 TObjFunc
	return 0; // 0x34b Return
	
Label_844:
	var_347_int = 27194; // 0x34c PushI
	var_348_bool = var_26_bool == var_347_int; // 0x34d Eq
	if(var_348_bool == 0) goto Label_867; // 0x34e JumpB
	var_349_string = ""; // 0x34f PushV
	var_349_string = "Drunk"; // 0x350 MovS
	func_398(var_27_cvector, var_349_string); // 0x351 NEW_2
	var_350_int = 525902; // 0x353 PushI
	SetMessage(var_350_int); // 0x354 TObjFunc
	ClearReplies(); // 0x356 TObjFunc
	var_351_int = 540896; // 0x358 PushI
	var_352_int = 42969; // 0x359 PushI
	var_353_int = 42968; // 0x35a PushI
	AddReply(var_351_int, var_352_int, var_353_int); // 0x35b TObjFunc
	var_354_int = 541554; // 0x35d PushI
	var_355_int = 42969; // 0x35e PushI
	var_356_int = 43721; // 0x35f PushI
	AddReply(var_354_int, var_355_int, var_356_int); // 0x360 TObjFunc
	return 0; // 0x362 Return
	
Label_867:
	var_357_int = 42969; // 0x363 PushI
	var_358_bool = var_26_bool == var_357_int; // 0x364 Eq
	if(var_358_bool == 0) goto Label_890; // 0x365 JumpB
	var_359_string = ""; // 0x366 PushV
	var_359_string = "Neutral"; // 0x367 MovS
	func_398(var_27_cvector, var_359_string); // 0x368 NEW_2
	var_360_int = 540897; // 0x36a PushI
	SetMessage(var_360_int); // 0x36b TObjFunc
	ClearReplies(); // 0x36d TObjFunc
	var_361_int = 525903; // 0x36f PushI
	var_362_int = -1; // 0x370 PushI
	var_363_int = 27195; // 0x371 PushI
	AddReply(var_361_int, var_362_int, var_363_int); // 0x372 TObjFunc
	var_364_int = 540901; // 0x374 PushI
	var_365_int = 42976; // 0x375 PushI
	var_366_int = 42975; // 0x376 PushI
	AddReply(var_364_int, var_365_int, var_366_int); // 0x377 TObjFunc
	return 0; // 0x379 Return
	
Label_890:
	var_367_int = 42976; // 0x37a PushI
	var_368_bool = var_26_bool == var_367_int; // 0x37b Eq
	if(var_368_bool == 0) goto Label_908; // 0x37c JumpB
	var_369_string = ""; // 0x37d PushV
	var_369_string = "Untrust"; // 0x37e MovS
	func_398(var_27_cvector, var_369_string); // 0x37f NEW_2
	var_370_int = 540902; // 0x381 PushI
	SetMessage(var_370_int); // 0x382 TObjFunc
	ClearReplies(); // 0x384 TObjFunc
	var_371_int = 540903; // 0x386 PushI
	var_372_int = -1; // 0x387 PushI
	var_373_int = 42977; // 0x388 PushI
	AddReply(var_371_int, var_372_int, var_373_int); // 0x389 TObjFunc
	return 0; // 0x38b Return
	
Label_908:
	var_3_string = 1; // 0x38c TMovB
	var_374_bool = 0; // 0x38d PushV
	func_2392(var_374_bool); // 0x38e NEW_2
	if(var_374_bool == 0) goto Label_916; // 0x390 JumpB
	lshStopAnimation(); // 0x391 Func
	goto Label_918; // 0x393 Jump
	
Label_918:
	return 0; // 0x396 Return
	
Label_916:
	StopAnimation(); // 0x394 Func
	
Label_920:
	return 0; // 0x398 Return
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_cvector)
{
	var_28_int = 1; // 0x445 PushI
	if(var_28_int == 0) goto Label_1233; // 0x446 JumpB
	func_2256(); // 0x448 NEW_2
	var_30_int = 29405; // 0x44a PushI
	var_31_bool = var_27_cvector == var_30_int; // 0x44b Eq
	if(var_31_bool == 0) goto Label_1106; // 0x44c JumpB
	var_32_object = Obj(); var_33_object = Obj(); // 0x44d PushV
	var_32_object = var_1_object; // 0x44e MovT
	var_33_object = var_0_object; // 0x44f MovT
	func_2442(); // 0x450 NEW_2
	
Label_1106:
	var_36_int = 29404; // 0x452 PushI
	var_37_bool = var_26_bool == var_36_int; // 0x453 Eq
	if(var_37_bool == 0) goto Label_1139; // 0x454 JumpB
	var_38_string = ""; // 0x455 PushV
	var_38_string = "Neutral"; // 0x456 MovS
	func_1070(var_27_cvector, var_38_string); // 0x457 NEW_2
	var_55_int = 528042; // 0x459 PushI
	SetMessage(var_55_int); // 0x45a TObjFunc
	ClearReplies(); // 0x45c TObjFunc
	var_56_bool = 0; var_57_object = Obj(); // 0x45e PushV
	var_57_object = var_1_object; // 0x45f MovT
	func_2505(var_57_object); // 0x460 NEW_2
	if(var_56_bool == 0) goto Label_1128; // 0x462 JumpB
	var_64_int = 528043; // 0x463 PushI
	var_65_int = 29406; // 0x464 PushI
	var_66_int = 29405; // 0x465 PushI
	AddReply(var_64_int, var_65_int, var_66_int); // 0x466 TObjFunc
	
Label_1128:
	var_67_int = 528046; // 0x468 PushI
	var_68_int = -1; // 0x469 PushI
	var_69_int = 29408; // 0x46a PushI
	AddReply(var_67_int, var_68_int, var_69_int); // 0x46b TObjFunc
	var_70_int = 541057; // 0x46d PushI
	var_71_int = -1; // 0x46e PushI
	var_72_int = 43161; // 0x46f PushI
	AddReply(var_70_int, var_71_int, var_72_int); // 0x470 TObjFunc
	return 0; // 0x472 Return
	
Label_1139:
	var_73_int = 29406; // 0x473 PushI
	var_74_bool = var_26_bool == var_73_int; // 0x474 Eq
	if(var_74_bool == 0) goto Label_1162; // 0x475 JumpB
	var_75_string = ""; // 0x476 PushV
	var_75_string = "Untrust"; // 0x477 MovS
	func_1070(var_27_cvector, var_75_string); // 0x478 NEW_2
	var_76_int = 528044; // 0x47a PushI
	SetMessage(var_76_int); // 0x47b TObjFunc
	ClearReplies(); // 0x47d TObjFunc
	var_77_int = 528045; // 0x47f PushI
	var_78_int = 43162; // 0x480 PushI
	var_79_int = 29407; // 0x481 PushI
	AddReply(var_77_int, var_78_int, var_79_int); // 0x482 TObjFunc
	var_80_int = 541060; // 0x484 PushI
	var_81_int = 43165; // 0x485 PushI
	var_82_int = 43164; // 0x486 PushI
	AddReply(var_80_int, var_81_int, var_82_int); // 0x487 TObjFunc
	return 0; // 0x489 Return
	
Label_1162:
	var_83_int = 43165; // 0x48a PushI
	var_84_bool = var_26_bool == var_83_int; // 0x48b Eq
	if(var_84_bool == 0) goto Label_1180; // 0x48c JumpB
	var_85_string = ""; // 0x48d PushV
	var_85_string = "Drunk"; // 0x48e MovS
	func_1070(var_27_cvector, var_85_string); // 0x48f NEW_2
	var_86_int = 541061; // 0x491 PushI
	SetMessage(var_86_int); // 0x492 TObjFunc
	ClearReplies(); // 0x494 TObjFunc
	var_87_int = 541062; // 0x496 PushI
	var_88_int = 43167; // 0x497 PushI
	var_89_int = 43166; // 0x498 PushI
	AddReply(var_87_int, var_88_int, var_89_int); // 0x499 TObjFunc
	return 0; // 0x49b Return
	
Label_1180:
	var_90_int = 43167; // 0x49c PushI
	var_91_bool = var_26_bool == var_90_int; // 0x49d Eq
	if(var_91_bool == 0) goto Label_1203; // 0x49e JumpB
	var_92_string = ""; // 0x49f PushV
	var_92_string = "Drunk"; // 0x4a0 MovS
	func_1070(var_27_cvector, var_92_string); // 0x4a1 NEW_2
	var_93_int = 541063; // 0x4a3 PushI
	SetMessage(var_93_int); // 0x4a4 TObjFunc
	ClearReplies(); // 0x4a6 TObjFunc
	var_94_int = 541064; // 0x4a8 PushI
	var_95_int = -1; // 0x4a9 PushI
	var_96_int = 43168; // 0x4aa PushI
	AddReply(var_94_int, var_95_int, var_96_int); // 0x4ab TObjFunc
	var_97_int = 541065; // 0x4ad PushI
	var_98_int = -1; // 0x4ae PushI
	var_99_int = 43169; // 0x4af PushI
	AddReply(var_97_int, var_98_int, var_99_int); // 0x4b0 TObjFunc
	return 0; // 0x4b2 Return
	
Label_1203:
	var_100_int = 43162; // 0x4b3 PushI
	var_101_bool = var_26_bool == var_100_int; // 0x4b4 Eq
	if(var_101_bool == 0) goto Label_1221; // 0x4b5 JumpB
	var_102_string = ""; // 0x4b6 PushV
	var_102_string = "Neutral"; // 0x4b7 MovS
	func_1070(var_27_cvector, var_102_string); // 0x4b8 NEW_2
	var_103_int = 541058; // 0x4ba PushI
	SetMessage(var_103_int); // 0x4bb TObjFunc
	ClearReplies(); // 0x4bd TObjFunc
	var_104_int = 541059; // 0x4bf PushI
	var_105_int = 43165; // 0x4c0 PushI
	var_106_int = 43163; // 0x4c1 PushI
	AddReply(var_104_int, var_105_int, var_106_int); // 0x4c2 TObjFunc
	return 0; // 0x4c4 Return
	
Label_1221:
	var_3_string = 1; // 0x4c5 TMovB
	var_107_bool = 0; // 0x4c6 PushV
	func_2392(var_107_bool); // 0x4c7 NEW_2
	if(var_107_bool == 0) goto Label_1229; // 0x4c9 JumpB
	lshStopAnimation(); // 0x4ca Func
	goto Label_1231; // 0x4cc Jump
	
Label_1231:
	return 0; // 0x4cf Return
	
Label_1229:
	StopAnimation(); // 0x4cd Func
	
Label_1233:
	return 0; // 0x4d1 Return
}


task_7_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_cvector)
{
	var_28_int = 1; // 0x579 PushI
	if(var_28_int == 0) goto Label_1492; // 0x57a JumpB
	func_2256(); // 0x57c NEW_2
	var_30_int = 36906; // 0x57e PushI
	var_31_bool = var_26_bool == var_30_int; // 0x57f Eq
	if(var_31_bool == 0) goto Label_1434; // 0x580 JumpB
	var_32_string = ""; // 0x581 PushV
	var_32_string = "Neutral"; // 0x582 MovS
	func_1378(var_27_cvector, var_32_string); // 0x583 NEW_2
	var_49_int = 535231; // 0x585 PushI
	SetMessage(var_49_int); // 0x586 TObjFunc
	ClearReplies(); // 0x588 TObjFunc
	var_50_int = 535232; // 0x58a PushI
	var_51_int = 36953; // 0x58b PushI
	var_52_int = 36907; // 0x58c PushI
	AddReply(var_50_int, var_51_int, var_52_int); // 0x58d TObjFunc
	var_53_int = 535233; // 0x58f PushI
	var_54_int = -1; // 0x590 PushI
	var_55_int = 36908; // 0x591 PushI
	AddReply(var_53_int, var_54_int, var_55_int); // 0x592 TObjFunc
	var_56_int = 535280; // 0x594 PushI
	var_57_int = -1; // 0x595 PushI
	var_58_int = 36956; // 0x596 PushI
	AddReply(var_56_int, var_57_int, var_58_int); // 0x597 TObjFunc
	return 0; // 0x599 Return
	
Label_1434:
	var_59_int = 36953; // 0x59a PushI
	var_60_bool = var_26_bool == var_59_int; // 0x59b Eq
	if(var_60_bool == 0) goto Label_1457; // 0x59c JumpB
	var_61_string = ""; // 0x59d PushV
	var_61_string = "Neutral"; // 0x59e MovS
	func_1378(var_27_cvector, var_61_string); // 0x59f NEW_2
	var_62_int = 535277; // 0x5a1 PushI
	SetMessage(var_62_int); // 0x5a2 TObjFunc
	ClearReplies(); // 0x5a4 TObjFunc
	var_63_int = 535278; // 0x5a6 PushI
	var_64_int = 36957; // 0x5a7 PushI
	var_65_int = 36954; // 0x5a8 PushI
	AddReply(var_63_int, var_64_int, var_65_int); // 0x5a9 TObjFunc
	var_66_int = 535279; // 0x5ab PushI
	var_67_int = 36957; // 0x5ac PushI
	var_68_int = 36955; // 0x5ad PushI
	AddReply(var_66_int, var_67_int, var_68_int); // 0x5ae TObjFunc
	return 0; // 0x5b0 Return
	
Label_1457:
	var_69_int = 36957; // 0x5b1 PushI
	var_70_bool = var_26_bool == var_69_int; // 0x5b2 Eq
	if(var_70_bool == 0) goto Label_1480; // 0x5b3 JumpB
	var_71_string = ""; // 0x5b4 PushV
	var_71_string = "Neutral"; // 0x5b5 MovS
	func_1378(var_27_cvector, var_71_string); // 0x5b6 NEW_2
	var_72_int = 535281; // 0x5b8 PushI
	SetMessage(var_72_int); // 0x5b9 TObjFunc
	ClearReplies(); // 0x5bb TObjFunc
	var_73_int = 535282; // 0x5bd PushI
	var_74_int = -1; // 0x5be PushI
	var_75_int = 36958; // 0x5bf PushI
	AddReply(var_73_int, var_74_int, var_75_int); // 0x5c0 TObjFunc
	var_76_int = 535283; // 0x5c2 PushI
	var_77_int = -1; // 0x5c3 PushI
	var_78_int = 36959; // 0x5c4 PushI
	AddReply(var_76_int, var_77_int, var_78_int); // 0x5c5 TObjFunc
	return 0; // 0x5c7 Return
	
Label_1480:
	var_3_string = 1; // 0x5c8 TMovB
	var_79_bool = 0; // 0x5c9 PushV
	func_2392(var_79_bool); // 0x5ca NEW_2
	if(var_79_bool == 0) goto Label_1488; // 0x5cc JumpB
	lshStopAnimation(); // 0x5cd Func
	goto Label_1490; // 0x5cf Jump
	
Label_1490:
	return 0; // 0x5d2 Return
	
Label_1488:
	StopAnimation(); // 0x5d0 Func
	
Label_1492:
	return 0; // 0x5d4 Return
}


task_9_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_int, var_26_int, var_27_cvector)
{
	var_28_int = 1; // 0x677 PushI
	if(var_28_int == 0) goto Label_1695; // 0x678 JumpB
	func_2256(); // 0x67a NEW_2
	var_30_int = 42554; // 0x67c PushI
	var_31_bool = var_26_int == var_30_int; // 0x67d Eq
	if(var_31_bool == 0) goto Label_1683; // 0x67e JumpB
	var_32_string = ""; // 0x67f PushV
	var_32_string = "Neutral"; // 0x680 MovS
	func_1632(var_27_cvector, var_32_string); // 0x681 NEW_2
	var_49_int = 540545; // 0x683 PushI
	SetMessage(var_49_int); // 0x684 TObjFunc
	ClearReplies(); // 0x686 TObjFunc
	var_50_int = 540546; // 0x688 PushI
	var_51_int = -1; // 0x689 PushI
	var_52_int = 42555; // 0x68a PushI
	AddReply(var_50_int, var_51_int, var_52_int); // 0x68b TObjFunc
	var_53_int = 540798; // 0x68d PushI
	var_54_int = -1; // 0x68e PushI
	var_55_int = 42847; // 0x68f PushI
	AddReply(var_53_int, var_54_int, var_55_int); // 0x690 TObjFunc
	return 0; // 0x692 Return
	
Label_1683:
	var_3_string = 1; // 0x693 TMovB
	var_56_bool = 0; // 0x694 PushV
	func_2392(var_56_bool); // 0x695 NEW_2
	if(var_56_bool == 0) goto Label_1691; // 0x697 JumpB
	lshStopAnimation(); // 0x698 Func
	goto Label_1693; // 0x69a Jump
	
Label_1693:
	return 0; // 0x69d Return
	
Label_1691:
	StopAnimation(); // 0x69b Func
	
Label_1695:
	return 0; // 0x69f Return
}


task_10_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_cvector, var_26_int)
{
	var_27_int = 10; // 0x6ed PushI
	var_28_bool = var_26_int == var_27_int; // 0x6ee Eq
	if(var_28_bool == 0) goto Label_1809; // 0x6ef JumpB
	func_1768(); // 0x6f1 NEW_2
	var_30_bool = 0; // 0x6f3 PushV
	var_30_bool = 0; // 0x6f4 MovB
	var_31_bool = 0; // 0x6f5 PushV
	func_1982(var_31_bool); // 0x6f6 NEW_2
	if(var_31_bool == 0) goto Label_1790; // 0x6f8 JumpB
	var_34_bool = 0; // 0x6f9 PushV
	func_1737(var_34_bool); // 0x6fa NEW_2
	if(var_34_bool == 0) goto Label_1790; // 0x6fc JumpB
	var_30_bool = 1; // 0x6fd MovB
	
Label_1790:
	if(var_30_bool == 0) goto Label_1803; // 0x6fe JumpB
	var_51_bool = 0; // 0x6ff PushV
	func_1717(var_51_bool); // 0x700 NEW_2
	if(var_51_bool == 0) goto Label_1802; // 0x702 JumpB
	var_70_bool = 0; var_71_object = Obj(); // 0x703 PushV
	var_72_object = Obj(); // 0x704 PushV
	func_2263(var_72_object); // 0x705 NEW_2
	var_71_object = var_72_object; // 0x706 Mov
	func_2130(var_71_object); // 0x708 NEW_2
	
Label_1802:
	goto Label_1809; // 0x70a Jump
	
Label_1809:
	return 0; // 0x711 Return
	
Label_1803:
	func_1732(var_26_int); // 0x70c NEW_2
	func_1759(); // 0x70f NEW_2
}


task_10_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_cvector)
{
	func_1950(); // 0x713 NEW_2
	func_1768(); // 0x716 NEW_2
	lshStopSpeech(); // 0x718 Func
	lshStopAnimation(); // 0x71a Func
	StopAsync(); // 0x71c Func
	Hold(); // 0x71e Func
	return 0; // 0x720 Return
}


task_10_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_cvector)
{
	StopGroup0(); // 0x721 Func
	func_1768(); // 0x724 NEW_2
	var_27_string = ""; // 0x726 PushV
	var_27_string = "Neutral"; // 0x727 MovS
	func_2210(var_27_string); // 0x728 NEW_2
	func_1759(); // 0x72b NEW_2
	return 0; // 0x72d Return
}


task_10_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_cvector, var_26_bool)
{
	var_27_bool = var_26_bool; // 0x72f Push
	if(var_27_bool == 0) goto Label_1845; // 0x730 JumpB
	func_1759(); // 0x732 NEW_2
	goto Label_1849; // 0x734 Jump
	
Label_1849:
	return 0; // 0x739 Return
	
Label_1845:
	var_33_string = ""; // 0x735 PushV
	var_33_string = "Neutral"; // 0x736 MovS
	func_2210(var_33_string); // 0x737 NEW_2
}


task_10_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_cvector, var_26_object)
{
	var_27_bool = 0; var_28_bool = 0; // 0x73a PushV
	IsOverrideActive(var_28_bool); // 0x73b Func
	var_29_bool = var_28_bool == 0; // 0x73d Not
	if(var_29_bool == 0) goto Label_1878; // 0x73e JumpB
	EventDisable(0); // 0x73f EventDisable
	func_1950(); // 0x741 NEW_2
	var_30_bool = 0; var_31_object = Obj(); // 0x743 PushV
	var_31_object = var_26_object; // 0x744 Mov
	func_1973(var_31_object); // 0x745 NEW_2
	EventEnable(0); // 0x747 EventEnable
	var_44_object = Obj(); // 0x748 PushV
	var_44_object = var_26_object; // 0x749 Mov
	func_2651(var_44_object); // 0x74a NEW_2
	var_534_string = ""; // 0x74c PushV
	var_534_string = "Neutral"; // 0x74d MovS
	func_2210(var_534_string); // 0x74e NEW_2
	func_1768(); // 0x751 NEW_2
	func_1759(); // 0x754 NEW_2
	
Label_1878:
	return 2; // 0x756 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_cvector)
{
	var_26_bool = GlobalVars[1]; // 0x6a0 PushGE
	var_26_bool = 0; // 0x6a1 MovB
	GlobalVars[1] = var_26_bool; // 0x6a2 PopGE
	func_1703(var_25_cvector); // 0x6a4 NEW_2
	return 0; // 0x6a6 Return
}


func_0(var_0_object, var_47_int, var_48_object)
{
	var_50_object = Obj(); var_51_bool = 0; var_52_int = 0; var_53_bool = 0; var_54_object = Obj(); var_55_bool = 0; var_56_int = 0; var_57_bool = 0; // 0x0 PushV
	var_0_object = var_48_object; // 0x1 TMov
	var_58_bool = 0; var_59_object = Obj(); var_60_float = 0; // 0x2 PushV
	var_59_object = var_48_object; // 0x3 Mov
	var_60_float = 70.0; // 0x4 MovF
	func_1987(var_59_object, var_60_float); // 0x5 NEW_2
	var_104_bool = var_58_bool == 0; // 0x7 Not
	if(var_104_bool == 0) goto Label_11; // 0x8 JumpB
	var_47_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_54_object); // 0xb Func
	var_105_int = 0; // 0xd PushV
	func_2386(var_105_int); // 0xe NEW_2
	SetNPCName(var_105_int); // 0x10 ObjFunc
	var_106_int = 0; // 0x12 PushV
	func_2384(var_106_int); // 0x13 NEW_2
	SetNPCDescription(var_106_int); // 0x15 ObjFunc
	var_107_string = ""; // 0x17 PushV
	func_2388(var_107_string); // 0x18 NEW_2
	SetPhoto(var_107_string); // 0x1a ObjFunc
	var_108_string = ""; // 0x1c PushV
	func_2390(var_108_string); // 0x1d NEW_2
	SetPhoto2(var_108_string); // 0x1f ObjFunc
	var_109_int = 0; // 0x21 PushV
	func_2634(var_109_int); // 0x22 NEW_2
	SetPlayerName(var_109_int); // 0x24 ObjFunc
	var_56_int = -1; // 0x26 MovI
	IsOverrideActive(var_55_bool); // 0x27 Func
	var_117_bool = var_55_bool; // 0x29 Push
	if(var_117_bool == 0) goto Label_45; // 0x2a JumpB
	var_47_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_54_object); // 0x2d Func
	var_118_bool = 0; var_119_object = Obj(); // 0x2f PushV
	var_120_object = Obj(); // 0x30 PushV
	func_2263(var_120_object); // 0x31 NEW_2
	var_119_object = var_120_object; // 0x32 Mov
	func_2072(var_118_bool, var_119_object); // 0x34 NEW_2
	var_213_object = Obj(); var_214_object = Obj(); // 0x36 PushV
	var_213_object = var_48_object; // 0x37 Mov
	var_214_object = var_54_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_215_object, var_216_object, var_217_string, var_218_bool, var_213_object, var_214_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	IsDialogEnd(var_57_bool); // 0x3d ObjFunc
	
Label_63:
	var_262_bool = var_57_bool == 0; // 0x3f Not
	if(var_262_bool == 0) goto Label_70; // 0x40 JumpB
	sync(); // 0x41 Func
	IsDialogEnd(var_57_bool); // 0x43 ObjFunc
	goto Label_63; // 0x45 Jump
	
Label_70:
	var_263_object = Obj(); // 0x46 PushV
	var_263_object = var_48_object; // 0x47 Mov
	func_2055(); // 0x48 NEW_2
	StopDialog(var_54_object); // 0x4a Func
	GetReturnValue(var_56_int); // 0x4c ObjFunc
	var_47_int = var_56_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_2055()
{
	var_264_bool = 0; var_265_bool = 0; // 0x807 PushV
	CameraSwitchToNormal(); // 0x808 Func
	var_266_bool = 0; // 0x80a PushV
	func_2392(var_266_bool); // 0x80b NEW_2
	if(var_266_bool == 0) goto Label_2063; // 0x80d JumpB
	goto Label_2071; // 0x80e Jump
	
Label_2071:
	return 2; // 0x817 Return
	
Label_2063:
	var_267_string = "head"; // 0x80f PushS
	HasAnimationTrack(var_265_bool, var_267_string); // 0x810 Func
	var_268_bool = var_265_bool; // 0x812 Push
	if(var_268_bool == 0) goto Label_2071; // 0x813 JumpB
	var_269_string = "head"; // 0x814 PushS
	UnlookAsync(var_269_string); // 0x815 Func
}


func_2315(var_110_object, var_111_string, var_112_int)
{
	var_113_object = Obj(); var_114_object = Obj(); // 0x90b PushV
	CreateInvItem(var_114_object); // 0x90c Func
	SetItemName(var_111_string); // 0x90e ObjFunc
	var_115_object = Obj(); var_116_object = Obj(); var_117_int = 0; // 0x910 PushV
	var_115_object = var_110_object; // 0x911 Mov
	var_116_object = var_114_object; // 0x912 Mov
	var_117_int = var_112_int; // 0x913 Mov
	func_2296(var_116_object, var_117_int); // 0x914 NEW_2
	return 2; // 0x916 Return
}


func_2328(var_75_bool, var_76_string, var_77_string)
{
	var_78_object = Obj(); var_79_object = Obj(); // 0x918 PushV
	FindActor(var_79_object, var_76_string); // 0x919 Func
	var_80_bool = var_79_object == 0; // 0x91b NullEq
	if(var_80_bool == 0) goto Label_2335; // 0x91c JumpB
	var_75_bool = 0; // 0x91d MovB
	return 2; // 0x91e Return
	
Label_2335:
	Trigger(var_79_object, var_77_string); // 0x91f Func
	var_75_bool = 1; // 0x921 MovB
	return 2; // 0x922 Return
}


func_2584(var_38_object)
{
	var_39_object = Obj(); var_40_object = Obj(); var_41_object = Obj(); var_42_object = Obj(); // 0xa18 PushV
	GetMainOutdoorScene(var_41_object); // 0xa19 Func
	var_43_bool = var_41_object == 0; // 0xa1b NullEq
	if(var_43_bool == 0) goto Label_2595; // 0xa1c JumpB
	var_44_string = "Can't find main outdoor scene"; // 0xa1d PushS
	Trace(var_44_string); // 0xa1e Func
	var_42_object = 0; // 0xa20 SetNull
	var_38_object = var_42_object; // 0xa21 Mov
	return 4; // 0xa22 Return
	
Label_2595:
	GetMap(var_42_object); // 0xa23 ObjFunc
	var_38_object = var_42_object; // 0xa25 Mov
	return 4; // 0xa26 Return
}


func_2072(var_118_bool, var_119_object)
{
	var_123_int = 0; var_124_int = 0; var_125_int = 0; var_126_int = 0; // 0x818 PushV
	var_127_string = "voice_common"; // 0x819 PushS
	GetVariable(var_127_string, var_125_int); // 0x81a Func
	var_128_int = var_125_int; // 0x81c Push
	if(var_128_int == 0) goto Label_2110; // 0x81d JumpB
	var_129_bool = 0; var_130_object = Obj(); // 0x81e PushV
	var_130_object = var_119_object; // 0x81f Mov
	func_2130(var_130_object); // 0x820 NEW_2
	var_159_bool = var_129_bool == 0; // 0x822 Not
	if(var_159_bool == 0) goto Label_2092; // 0x823 JumpB
	var_160_bool = 0; var_161_object = Obj(); // 0x824 PushV
	var_161_object = var_119_object; // 0x825 Mov
	func_2167(var_161_object); // 0x826 NEW_2
	var_195_bool = var_160_bool == 0; // 0x828 Not
	if(var_195_bool == 0) goto Label_2092; // 0x829 JumpB
	var_118_bool = 0; // 0x82a MovB
	return 4; // 0x82b Return
	
Label_2092:
	var_196_int = 2; // 0x82c PushI
	irand(var_126_int, var_196_int); // 0x82d Func
	var_197_int = var_126_int; // 0x82f Push
	if(var_197_int == 0) goto Label_2105; // 0x830 JumpB
	var_198_string = "voice_common"; // 0x831 PushS
	var_199_int = 1; // 0x832 PushI
	var_200_int = var_125_int + var_199_int; // 0x833 Add
	var_201_int = 3; // 0x834 PushI
	var_202_int = var_200_int / var_201_int; // 0x835 Mod
	SetVariable(var_198_string, var_202_int); // 0x836 Func
	goto Label_2109; // 0x838 Jump
	
Label_2109:
	goto Label_2128; // 0x83d Jump
	
Label_2128:
	var_118_bool = 1; // 0x850 MovB
	return 4; // 0x851 Return
	
Label_2105:
	var_203_string = "voice_common"; // 0x839 PushS
	var_204_int = 0; // 0x83a PushI
	SetVariable(var_203_string, var_204_int); // 0x83b Func
	
Label_2110:
	var_205_bool = 0; var_206_object = Obj(); // 0x83e PushV
	var_206_object = var_119_object; // 0x83f Mov
	func_2167(var_206_object); // 0x840 NEW_2
	var_207_bool = var_205_bool == 0; // 0x842 Not
	if(var_207_bool == 0) goto Label_2124; // 0x843 JumpB
	var_208_bool = 0; var_209_object = Obj(); // 0x844 PushV
	var_209_object = var_119_object; // 0x845 Mov
	func_2130(var_209_object); // 0x846 NEW_2
	var_210_bool = var_208_bool == 0; // 0x848 Not
	if(var_210_bool == 0) goto Label_2124; // 0x849 JumpB
	var_118_bool = 0; // 0x84a MovB
	return 4; // 0x84b Return
	
Label_2124:
	var_211_string = "voice_common"; // 0x84c PushS
	var_212_int = 1; // 0x84d PushI
	SetVariable(var_211_string, var_212_int); // 0x84e Func
}


func_1315(var_0_object, var_1_object, var_2_object, var_3_string, var_443_object, var_444_object)
{
	var_0_object = var_444_object; // 0x524 TMov
	var_1_object = var_443_object; // 0x525 TMov
	var_3_string = 0; // 0x526 TMovB
	var_449_int = 1; // 0x527 PushI
	if(var_449_int == 0) goto Label_1348; // 0x528 JumpB
	var_450_string = ""; // 0x529 PushV
	var_450_string = "Neutral"; // 0x52a MovS
	func_1378(var_444_object, var_450_string); // 0x52b NEW_2
	var_458_int = 535231; // 0x52d PushI
	SetMessage(var_458_int); // 0x52e TObjFunc
	ClearReplies(); // 0x530 TObjFunc
	var_459_int = 535232; // 0x532 PushI
	var_460_int = 36953; // 0x533 PushI
	var_461_int = 36907; // 0x534 PushI
	AddReply(var_459_int, var_460_int, var_461_int); // 0x535 TObjFunc
	var_462_int = 535233; // 0x537 PushI
	var_463_int = -1; // 0x538 PushI
	var_464_int = 36908; // 0x539 PushI
	AddReply(var_462_int, var_463_int, var_464_int); // 0x53a TObjFunc
	var_465_int = 535280; // 0x53c PushI
	var_466_int = -1; // 0x53d PushI
	var_467_int = 36956; // 0x53e PushI
	AddReply(var_465_int, var_466_int, var_467_int); // 0x53f TObjFunc
	goto Label_1348; // 0x541 Jump
	
Label_1348:
	var_468_bool = 0; // 0x544 PushV
	func_2392(var_468_bool); // 0x545 NEW_2
	if(var_468_bool == 0) goto Label_1363; // 0x547 JumpB
	
Label_1352:
	lshWaitForAnimEnd(); // 0x548 Func
	var_469_string = var_3_string; // 0x54a PushT
	if(var_469_string == 0) goto Label_1357; // 0x54b JumpB
	goto Label_1362; // 0x54c Jump
	
Label_1362:
	goto Label_1377; // 0x552 Jump
	
Label_1377:
	return 0; // 0x561 Return
	
Label_1357:
	var_470_string = ""; // 0x54d PushV
	var_470_string = var_2_object; // 0x54e MovT
	func_2210(var_470_string); // 0x54f NEW_2
	goto Label_1352; // 0x551 Jump
	
Label_1363:
	var_471_string = "all"; // 0x553 PushS
	var_472_string = "idle"; // 0x554 PushS
	PlayAnimation(var_471_string, var_472_string); // 0x555 Func
	
Label_1367:
	WaitForAnimEnd(); // 0x557 Func
	var_473_string = var_3_string; // 0x559 PushT
	if(var_473_string == 0) goto Label_1372; // 0x55a JumpB
	goto Label_1377; // 0x55b Jump
	
Label_1372:
	var_474_string = "all"; // 0x55c PushS
	var_475_string = "idle"; // 0x55d PushS
	PlayAnimation(var_474_string, var_475_string); // 0x55e Func
	goto Label_1367; // 0x560 Jump
}


func_2340(var_49_float)
{
	var_50_float = 0; var_51_float = 0; // 0x924 PushV
	GetGameTime(var_51_float); // 0x925 Func
	var_49_float = var_51_float; // 0x927 Mov
	return 2; // 0x928 Return
}


func_1574(var_0_object, var_1_object, var_2_object, var_3_string, var_502_object, var_503_object)
{
	var_0_object = var_503_object; // 0x627 TMov
	var_1_object = var_502_object; // 0x628 TMov
	var_3_string = 0; // 0x629 TMovB
	var_508_int = 1; // 0x62a PushI
	if(var_508_int == 0) goto Label_1602; // 0x62b JumpB
	var_509_string = ""; // 0x62c PushV
	var_509_string = "Neutral"; // 0x62d MovS
	func_1632(var_503_object, var_509_string); // 0x62e NEW_2
	var_517_int = 540545; // 0x630 PushI
	SetMessage(var_517_int); // 0x631 TObjFunc
	ClearReplies(); // 0x633 TObjFunc
	var_518_int = 540546; // 0x635 PushI
	var_519_int = -1; // 0x636 PushI
	var_520_int = 42555; // 0x637 PushI
	AddReply(var_518_int, var_519_int, var_520_int); // 0x638 TObjFunc
	var_521_int = 540798; // 0x63a PushI
	var_522_int = -1; // 0x63b PushI
	var_523_int = 42847; // 0x63c PushI
	AddReply(var_521_int, var_522_int, var_523_int); // 0x63d TObjFunc
	goto Label_1602; // 0x63f Jump
	
Label_1602:
	var_524_bool = 0; // 0x642 PushV
	func_2392(var_524_bool); // 0x643 NEW_2
	if(var_524_bool == 0) goto Label_1617; // 0x645 JumpB
	
Label_1606:
	lshWaitForAnimEnd(); // 0x646 Func
	var_525_string = var_3_string; // 0x648 PushT
	if(var_525_string == 0) goto Label_1611; // 0x649 JumpB
	goto Label_1616; // 0x64a Jump
	
Label_1616:
	goto Label_1631; // 0x650 Jump
	
Label_1631:
	return 0; // 0x65f Return
	
Label_1611:
	var_526_string = ""; // 0x64b PushV
	var_526_string = var_2_object; // 0x64c MovT
	func_2210(var_526_string); // 0x64d NEW_2
	goto Label_1606; // 0x64f Jump
	
Label_1617:
	var_527_string = "all"; // 0x651 PushS
	var_528_string = "idle"; // 0x652 PushS
	PlayAnimation(var_527_string, var_528_string); // 0x653 Func
	
Label_1621:
	WaitForAnimEnd(); // 0x655 Func
	var_529_string = var_3_string; // 0x657 PushT
	if(var_529_string == 0) goto Label_1626; // 0x658 JumpB
	goto Label_1631; // 0x659 Jump
	
Label_1626:
	var_530_string = "all"; // 0x65a PushS
	var_531_string = "idle"; // 0x65b PushS
	PlayAnimation(var_530_string, var_531_string); // 0x65c Func
	goto Label_1621; // 0x65e Jump
}


func_2345(var_173_int)
{
	var_174_float = 0; var_175_float = 0; // 0x929 PushV
	GetGameTime(var_175_float); // 0x92a Func
	var_176_int = 1; // 0x92c PushI
	var_177_int = 0; // 0x92d PushV
	var_178_int = 24; // 0x92e PushI
	var_177_int = var_175_float / var_175_float; // 0x92f Div2
	var_173_int = var_176_int + var_177_int; // 0x930 Add2
	return 2; // 0x931 Return
}


func_2601(var_83_object, var_84_string, var_85_float)
{
	var_87_cvector = CVector(0,0,0); var_88_cvector = CVector(0,0,0); var_89_object = Obj(); var_90_bool = 0; var_91_cvector = CVector(0,0,0); var_92_cvector = CVector(0,0,0); var_93_object = Obj(); var_94_bool = 0; // 0xa29 PushV
	GetMainOutdoorScene(var_93_object); // 0xa2a Func
	var_95_bool = var_93_object == 0; // 0xa2c NullEq
	if(var_95_bool == 0) goto Label_2610; // 0xa2d JumpB
	var_96_string = "Can't find main outdoor scene"; // 0xa2e PushS
	Trace(var_96_string); // 0xa2f Func
	return 8; // 0xa31 Return
	
Label_2610:
	GetLocator(var_84_string, var_94_bool, var_91_cvector, var_92_cvector); // 0xa32 ObjFunc
	var_97_bool = var_94_bool == 0; // 0xa34 Not
	if(var_97_bool == 0) goto Label_2620; // 0xa35 JumpB
	var_98_string = "Warning: outdoor scene locator "; // 0xa36 PushS
	var_99_int = var_98_string + var_84_string; // 0xa37 Add
	var_100_string = " doesnt exist"; // 0xa38 PushS
	var_101_int = var_99_int + var_100_string; // 0xa39 Add
	Trace(var_101_int); // 0xa3a Func
	
Label_2620:
	GetMap(var_83_object); // 0xa3c ObjFunc
	var_102_bool = var_83_object == 0; // 0xa3e NullEq
	if(var_102_bool == 0) goto Label_2628; // 0xa3f JumpB
	var_103_string = "Can't find map"; // 0xa40 PushS
	Trace(var_103_string); // 0xa41 Func
	return 8; // 0xa43 Return
	
Label_2628:
	var_104_float = GetByIndex(var_91_cvector, 0); // 0xa44 PushE
	var_105_float = GetByIndex(var_91_cvector, 2); // 0xa45 PushE
	SetMapParams(var_104_float, var_105_float, var_85_float); // 0xa46 ObjFunc
	return 8; // 0xa48 Return
}


func_1070(var_2_object, var_383_string)
{
	var_384_bool = 0; // 0x42f PushV
	func_2392(var_384_bool); // 0x430 NEW_2
	var_385_bool = var_384_bool == 0; // 0x432 Not
	if(var_385_bool == 0) goto Label_1077; // 0x433 JumpB
	return 0; // 0x434 Return
	
Label_1077:
	var_386_bool = var_383_string == var_2_object; // 0x435 Eq
	if(var_386_bool == 0) goto Label_1080; // 0x436 JumpB
	return 0; // 0x437 Return
	
Label_1080:
	var_387_string = ""; var_388_bool = 0; // 0x438 PushV
	var_387_string = var_383_string; // 0x439 Mov
	var_389_string = ""; // 0x43a PushS
	var_390_bool = var_383_string == var_389_string; // 0x43b Eq
	if(var_390_bool == 0) goto Label_1087; // 0x43c JumpB
	var_388_bool = 0; // 0x43d MovB
	goto Label_1088; // 0x43e Jump
	
Label_1088:
	func_2226(var_387_string, var_388_bool); // 0x440 NEW_2
	var_2_object = var_383_string; // 0x442 TMov
	return 0; // 0x443 Return
	
Label_1087:
	var_388_bool = 1; // 0x43f MovB
}


func_2354(var_271_bool, var_272_int)
{
	var_273_int = 0; // 0x933 PushV
	func_2345(var_273_int); // 0x934 NEW_2
	var_271_bool = var_273_int == var_272_int; // 0x936 Eq2
	return 0; // 0x937 Return
}


func_2360(var_51_string, var_52_int)
{
	var_53_string = ""; var_54_string = ""; // 0x938 PushV
	var_54_string = "idle"; // 0x939 MovS
	var_55_int = var_52_int; // 0x93a Push
	if(var_55_int == 0) goto Label_2365; // 0x93b JumpB
	var_54_string = var_54_string + var_52_int; // 0x93c Add2
	
Label_2365:
	var_51_string = var_54_string; // 0x93d Mov
	return 2; // 0x93e Return
}


func_2367(var_45_int)
{
	var_46_int = 0; var_47_bool = 0; var_48_int = 0; var_49_bool = 0; // 0x93f PushV
	var_48_int = 0; // 0x940 MovI
	
Label_2369:
	var_50_string = "all"; // 0x941 PushS
	var_51_string = ""; var_52_int = 0; // 0x942 PushV
	var_52_int = var_48_int; // 0x943 Mov
	func_2360(var_51_string, var_52_int); // 0x944 NEW_2
	HasAnimation(var_49_bool, var_50_string, var_51_string); // 0x946 Func
	var_56_bool = var_49_bool == 0; // 0x948 Not
	if(var_56_bool == 0) goto Label_2379; // 0x949 JumpB
	goto Label_2382; // 0x94a Jump
	
Label_2382:
	var_45_int = var_48_int; // 0x94e Mov
	return 4; // 0x94f Return
	
Label_2379:
	var_57_int = 1; // 0x94b PushI
	var_48_int = var_48_int + var_57_int; // 0x94c Add2
	goto Label_2369; // 0x94d Jump
}


func_320(var_0_object, var_1_object, var_2_object, var_3_string, var_298_object, var_299_object)
{
	var_0_object = var_299_object; // 0x141 TMov
	var_1_object = var_298_object; // 0x142 TMov
	var_3_string = 0; // 0x143 TMovB
	var_304_int = 1; // 0x144 PushI
	if(var_304_int == 0) goto Label_368; // 0x145 JumpB
	var_305_string = ""; // 0x146 PushV
	var_305_string = "Neutral"; // 0x147 MovS
	func_398(var_299_object, var_305_string); // 0x148 NEW_2
	var_313_int = 525900; // 0x14a PushI
	SetMessage(var_313_int); // 0x14b TObjFunc
	ClearReplies(); // 0x14d TObjFunc
	var_314_bool = 0; var_315_object = Obj(); // 0x14f PushV
	var_315_object = var_1_object; // 0x150 MovT
	func_2481(var_315_object); // 0x151 NEW_2
	if(var_314_bool == 0) goto Label_345; // 0x153 JumpB
	var_322_int = 525901; // 0x154 PushI
	var_323_int = 42962; // 0x155 PushI
	var_324_int = 27193; // 0x156 PushI
	AddReply(var_322_int, var_323_int, var_324_int); // 0x157 TObjFunc
	
Label_345:
	var_325_bool = 0; var_326_object = Obj(); // 0x159 PushV
	var_326_object = var_1_object; // 0x15a MovT
	func_2493(var_326_object); // 0x15b NEW_2
	if(var_325_bool == 0) goto Label_355; // 0x15d JumpB
	var_331_int = 525924; // 0x15e PushI
	var_332_int = 30559; // 0x15f PushI
	var_333_int = 27216; // 0x160 PushI
	AddReply(var_331_int, var_332_int, var_333_int); // 0x161 TObjFunc
	
Label_355:
	var_334_int = 525904; // 0x163 PushI
	var_335_int = -1; // 0x164 PushI
	var_336_int = 27196; // 0x165 PushI
	AddReply(var_334_int, var_335_int, var_336_int); // 0x166 TObjFunc
	var_337_int = 529107; // 0x168 PushI
	var_338_int = -1; // 0x169 PushI
	var_339_int = 30552; // 0x16a PushI
	AddReply(var_337_int, var_338_int, var_339_int); // 0x16b TObjFunc
	goto Label_368; // 0x16d Jump
	
Label_368:
	var_340_bool = 0; // 0x170 PushV
	func_2392(var_340_bool); // 0x171 NEW_2
	if(var_340_bool == 0) goto Label_383; // 0x173 JumpB
	
Label_372:
	lshWaitForAnimEnd(); // 0x174 Func
	var_341_string = var_3_string; // 0x176 PushT
	if(var_341_string == 0) goto Label_377; // 0x177 JumpB
	goto Label_382; // 0x178 Jump
	
Label_382:
	goto Label_397; // 0x17e Jump
	
Label_397:
	return 0; // 0x18d Return
	
Label_377:
	var_342_string = ""; // 0x179 PushV
	var_342_string = var_2_object; // 0x17a MovT
	func_2210(var_342_string); // 0x17b NEW_2
	goto Label_372; // 0x17d Jump
	
Label_383:
	var_343_string = "all"; // 0x17f PushS
	var_344_string = "idle"; // 0x180 PushS
	PlayAnimation(var_343_string, var_344_string); // 0x181 Func
	
Label_387:
	WaitForAnimEnd(); // 0x183 Func
	var_345_string = var_3_string; // 0x185 PushT
	if(var_345_string == 0) goto Label_392; // 0x186 JumpB
	goto Label_397; // 0x187 Jump
	
Label_392:
	var_346_string = "all"; // 0x188 PushS
	var_347_string = "idle"; // 0x189 PushS
	PlayAnimation(var_346_string, var_347_string); // 0x18a Func
	goto Label_387; // 0x18c Jump
}


func_2634(var_109_int)
{
	var_110_int = 0; var_111_int = 0; // 0xa4a PushV
	var_112_string = "branch"; // 0xa4b PushS
	GetVariable(var_112_string, var_111_int); // 0xa4c Func
	var_113_int = 0; // 0xa4e PushI
	var_114_bool = var_111_int == var_113_int; // 0xa4f Eq
	if(var_114_bool == 0) goto Label_2644; // 0xa50 JumpB
	var_109_int = 1; // 0xa51 MovI
	return 2; // 0xa52 Return
	
Label_2644:
	var_115_int = 1; // 0xa54 PushI
	var_116_bool = var_111_int == var_115_int; // 0xa55 Eq
	if(var_116_bool == 0) goto Label_2649; // 0xa56 JumpB
	var_109_int = 2; // 0xa57 MovI
	return 2; // 0xa58 Return
	
Label_2649:
	var_109_int = 3; // 0xa59 MovI
	return 2; // 0xa5a Return
}


func_2384(var_106_int)
{
	var_106_int = 515550; // 0x950 MovI
	return 0; // 0x951 Return
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_213_object, var_214_object)
{
	var_0_object = var_214_object; // 0x52 TMov
	var_1_object = var_213_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_219_int = 1; // 0x55 PushI
	if(var_219_int == 0) goto Label_109; // 0x56 JumpB
	var_220_string = ""; // 0x57 PushV
	var_220_string = "Neutral"; // 0x58 MovS
	func_139(var_214_object, var_220_string); // 0x59 NEW_2
	var_237_int = 525522; // 0x5b PushI
	SetMessage(var_237_int); // 0x5c TObjFunc
	ClearReplies(); // 0x5e TObjFunc
	var_238_int = 525523; // 0x60 PushI
	var_239_int = 30733; // 0x61 PushI
	var_240_int = 26879; // 0x62 PushI
	AddReply(var_238_int, var_239_int, var_240_int); // 0x63 TObjFunc
	var_241_int = 529279; // 0x65 PushI
	var_242_int = 30734; // 0x66 PushI
	var_243_int = 30732; // 0x67 PushI
	AddReply(var_241_int, var_242_int, var_243_int); // 0x68 TObjFunc
	goto Label_109; // 0x6a Jump
	
Label_109:
	var_244_bool = 0; // 0x6d PushV
	func_2392(var_244_bool); // 0x6e NEW_2
	if(var_244_bool == 0) goto Label_124; // 0x70 JumpB
	
Label_113:
	lshWaitForAnimEnd(); // 0x71 Func
	var_245_string = var_3_string; // 0x73 PushT
	if(var_245_string == 0) goto Label_118; // 0x74 JumpB
	goto Label_123; // 0x75 Jump
	
Label_123:
	goto Label_138; // 0x7b Jump
	
Label_138:
	return 0; // 0x8a Return
	
Label_118:
	var_246_string = ""; // 0x76 PushV
	var_246_string = var_2_object; // 0x77 MovT
	func_2210(var_246_string); // 0x78 NEW_2
	goto Label_113; // 0x7a Jump
	
Label_124:
	var_257_string = "all"; // 0x7c PushS
	var_258_string = "idle"; // 0x7d PushS
	PlayAnimation(var_257_string, var_258_string); // 0x7e Func
	
Label_128:
	WaitForAnimEnd(); // 0x80 Func
	var_259_string = var_3_string; // 0x82 PushT
	if(var_259_string == 0) goto Label_133; // 0x83 JumpB
	goto Label_138; // 0x84 Jump
	
Label_133:
	var_260_string = "all"; // 0x85 PushS
	var_261_string = "idle"; // 0x86 PushS
	PlayAnimation(var_260_string, var_261_string); // 0x87 Func
	goto Label_128; // 0x89 Jump
}


func_2386(var_105_int)
{
	var_105_int = 502875; // 0x952 MovI
	return 0; // 0x953 Return
}


func_2130(var_129_bool)
{
	var_131_string = ""; var_132_int = 0; var_133_bool = 0; var_134_int = 0; var_135_string = ""; var_136_string = ""; var_137_int = 0; var_138_bool = 0; var_139_int = 0; var_140_string = ""; // 0x852 PushV
	var_136_string = "c"; // 0x853 MovS
	var_137_int = 0; // 0x854 MovI
	
Label_2133:
	var_141_int = 1; // 0x855 PushI
	if(var_141_int == 0) goto Label_2146; // 0x856 JumpB
	var_142_int = 1; // 0x857 PushI
	var_143_int = var_137_int + var_142_int; // 0x858 Add
	var_144_int = var_136_string + var_143_int; // 0x859 Add
	HasProperty(var_144_int, var_138_bool); // 0x85a ObjFunc
	var_145_bool = var_138_bool == 0; // 0x85c Not
	if(var_145_bool == 0) goto Label_2143; // 0x85d JumpB
	goto Label_2146; // 0x85e Jump
	
Label_2146:
	var_146_bool = var_137_int == 0; // 0x862 Not
	if(var_146_bool == 0) goto Label_2150; // 0x863 JumpB
	var_129_bool = 0; // 0x864 MovB
	return 10; // 0x865 Return
	
Label_2150:
	var_139_int = 0; // 0x866 MovI
	var_147_int = 1; // 0x867 PushI
	var_148_bool = var_137_int > var_147_int; // 0x868 GT
	if(var_148_bool == 0) goto Label_2156; // 0x869 JumpB
	irand(var_139_int, var_137_int); // 0x86a Func
	
Label_2156:
	var_149_int = 1; // 0x86c PushI
	var_150_int = var_139_int + var_149_int; // 0x86d Add
	var_151_int = var_136_string + var_150_int; // 0x86e Add
	GetProperty(var_151_int, var_140_string); // 0x86f ObjFunc
	var_152_bool = 0; var_153_string = ""; // 0x871 PushV
	var_153_string = var_140_string; // 0x872 Mov
	func_2241(var_152_bool, var_153_string); // 0x873 NEW_2
	var_129_bool = var_152_bool; // 0x874 Mov
	return 10; // 0x876 Return
	
Label_2143:
	var_158_int = 1; // 0x85f PushI
	var_137_int = var_137_int + var_158_int; // 0x860 Add2
	goto Label_2133; // 0x861 Jump
}


func_2388(var_107_string)
{
	var_107_string = "ui/NPC_Petr.png"; // 0x954 MovS
	return 0; // 0x955 Return
}


func_2390(var_108_string)
{
	var_108_string = "ui/NPC_Petr_b.png"; // 0x956 MovS
	return 0; // 0x957 Return
}


func_1879()
{
	var_31_int = 0; var_32_int = 0; var_33_bool = 0; var_34_int = 0; var_35_int = 0; var_36_bool = 0; var_37_int = 0; var_38_int = 0; var_39_bool = 0; var_40_int = 0; var_41_int = 0; var_42_bool = 0; // 0x757 PushV
	WaitForAnimEnd(); // 0x758 Func
	var_43_bool = 0; // 0x75a PushV
	func_1982(var_43_bool); // 0x75b NEW_2
	var_44_bool = var_43_bool == 0; // 0x75d Not
	if(var_44_bool == 0) goto Label_1888; // 0x75e JumpB
	return 12; // 0x75f Return
	
Label_1888:
	var_45_int = 0; // 0x760 PushV
	func_2367(var_45_int); // 0x761 NEW_2
	var_37_int = var_45_int; // 0x762 Mov
	var_38_int = 0; // 0x764 MovI
	
Label_1893:
	var_58_bool = 0; // 0x765 PushV
	var_58_bool = 0; // 0x766 MovB
	var_59_int = 5; // 0x767 PushI
	var_60_bool = var_38_int < var_59_int; // 0x768 LT
	if(var_60_bool == 0) goto Label_1903; // 0x769 JumpB
	var_61_bool = 0; // 0x76a PushV
	func_1982(var_61_bool); // 0x76b NEW_2
	if(var_61_bool == 0) goto Label_1903; // 0x76d JumpB
	var_58_bool = 1; // 0x76e MovB
	
Label_1903:
	if(var_58_bool == 0) goto Label_1945; // 0x76f JumpB
	var_62_bool = var_37_int == 0; // 0x770 Not
	if(var_62_bool == 0) goto Label_1913; // 0x771 JumpB
	var_63_int = 3; // 0x772 PushI
	Sleep(var_63_int, var_39_bool); // 0x773 Func
	var_64_bool = var_39_bool == 0; // 0x775 Not
	if(var_64_bool == 0) goto Label_1912; // 0x776 JumpB
	goto Label_1945; // 0x777 Jump
	
Label_1945:
	ResetAAS(); // 0x799 Func
	return 12; // 0x79b Return
	
Label_1912:
	goto Label_1934; // 0x778 Jump
	
Label_1934:
	var_65_bool = 0; // 0x78e PushV
	func_1948(var_65_bool); // 0x78f NEW_2
	var_66_bool = var_65_bool == 0; // 0x791 Not
	if(var_66_bool == 0) goto Label_1940; // 0x792 JumpB
	goto Label_1945; // 0x793 Jump
	
Label_1940:
	ResetAAS(); // 0x794 Func
	var_67_int = 1; // 0x796 PushI
	var_38_int = var_38_int + var_67_int; // 0x797 Add2
	goto Label_1893; // 0x798 Jump
	
Label_1913:
	irand(var_40_int, var_37_int); // 0x779 Func
	var_68_int = 5; // 0x77b PushI
	irand(var_41_int, var_68_int); // 0x77c Func
	var_69_int = 0; // 0x77e PushI
	var_70_bool = var_41_int != var_69_int; // 0x77f Neq
	if(var_70_bool == 0) goto Label_1922; // 0x780 JumpB
	var_40_int = 0; // 0x781 MovI
	
Label_1922:
	var_71_string = "all"; // 0x782 PushS
	var_72_string = ""; var_73_int = 0; // 0x783 PushV
	var_73_int = var_40_int; // 0x784 Mov
	func_2360(var_72_string, var_73_int); // 0x785 NEW_2
	PlayAnimation(var_71_string, var_72_string); // 0x787 Func
	WaitForAnimEnd(var_42_bool); // 0x789 Func
	var_74_bool = var_42_bool == 0; // 0x78b Not
	if(var_74_bool == 0) goto Label_1934; // 0x78c JumpB
	goto Label_1945; // 0x78d Jump
}


func_2392(var_100_bool)
{
	var_100_bool = 1; // 0x958 MovB
	return 0; // 0x959 Return
}


func_2394()
{
	var_34_object = Obj(); var_35_object = Obj(); // 0x95a PushV
	var_36_string = "k5q02"; // 0x95b PushS
	var_37_int = 2; // 0x95c PushI
	SetVariable(var_36_string, var_37_int); // 0x95d Func
	var_38_object = Obj(); // 0x95f PushV
	func_2584(var_38_object); // 0x960 NEW_2
	var_35_object = var_38_object; // 0x961 Mov
	var_45_string = "k5q02PetrGotoAndrei"; // 0x963 PushS
	var_46_string = "pt_map_andrei"; // 0x964 PushS
	var_47_int = 0; // 0x965 PushI
	var_48_int = 515295; // 0x966 PushI
	var_49_float = 0; // 0x967 PushV
	func_2340(var_49_float); // 0x968 NEW_2
	AddMark(var_45_string, var_46_string, var_47_int, var_48_int, var_49_float); // 0x96a ObjFunc
	func_2517(); // 0x96d NEW_2
	var_75_bool = 0; var_76_string = ""; var_77_string = ""; // 0x96f PushV
	var_76_string = "quest_k5_02"; // 0x970 MovS
	var_77_string = "init_kabak"; // 0x971 MovS
	func_2328(var_75_bool, var_76_string, var_77_string); // 0x972 NEW_2
	return 2; // 0x974 Return
}


func_2651(var_44_object)
{
	var_45_bool = GlobalVars[1]; // 0xa5c PushGE
	var_46_bool = var_45_bool == 0; // 0xa5d Not
	if(var_46_bool == 0) goto Label_2664; // 0xa5e JumpB
	var_47_int = 0; var_48_object = Obj(); // 0xa5f PushV
	var_48_object = var_44_object; // 0xa60 Mov
	TaskCall(0); // 0xa61 TaskCall
	func_0(var_49_object, var_47_int, var_48_object); // 0xa62 NEW_2
	TaskReturn(); // 0xa63 TaskReturn
	var_270_bool = GlobalVars[1]; // 0xa65 PushGE
	var_270_bool = 1; // 0xa66 MovB
	GlobalVars[1] = var_270_bool; // 0xa67 PopGE
	
Label_2664:
	var_271_bool = 0; var_272_int = 0; // 0xa68 PushV
	var_272_int = 5; // 0xa69 MovI
	func_2354(var_271_bool, var_272_int); // 0xa6a NEW_2
	if(var_271_bool == 0) goto Label_2676; // 0xa6c JumpB
	var_274_int = 0; var_275_object = Obj(); // 0xa6d PushV
	var_275_object = var_44_object; // 0xa6e Mov
	TaskCall(2); // 0xa6f TaskCall
	func_239(var_276_object, var_274_int, var_275_object); // 0xa70 NEW_2
	TaskReturn(); // 0xa71 TaskReturn
	return 0; // 0xa73 Return
	
Label_2676:
	var_350_bool = 0; var_351_int = 0; // 0xa74 PushV
	var_351_int = 11; // 0xa75 MovI
	func_2354(var_350_bool, var_351_int); // 0xa76 NEW_2
	if(var_350_bool == 0) goto Label_2688; // 0xa78 JumpB
	var_352_int = 0; var_353_object = Obj(); // 0xa79 PushV
	var_353_object = var_44_object; // 0xa7a Mov
	TaskCall(4); // 0xa7b TaskCall
	func_921(var_354_object, var_352_int, var_353_object); // 0xa7c NEW_2
	TaskReturn(); // 0xa7d TaskReturn
	return 0; // 0xa7f Return
	
Label_2688:
	var_417_bool = 0; var_418_int = 0; // 0xa80 PushV
	var_418_int = 12; // 0xa81 MovI
	func_2354(var_417_bool, var_418_int); // 0xa82 NEW_2
	if(var_417_bool == 0) goto Label_2700; // 0xa84 JumpB
	var_419_int = 0; var_420_object = Obj(); // 0xa85 PushV
	var_420_object = var_44_object; // 0xa86 Mov
	TaskCall(6); // 0xa87 TaskCall
	func_1234(var_421_object, var_419_int, var_420_object); // 0xa88 NEW_2
	TaskReturn(); // 0xa89 TaskReturn
	return 0; // 0xa8b Return
	
Label_2700:
	var_478_int = 0; var_479_object = Obj(); // 0xa8c PushV
	var_479_object = var_44_object; // 0xa8d Mov
	TaskCall(8); // 0xa8e TaskCall
	func_1493(var_480_object, var_478_int, var_479_object); // 0xa8f NEW_2
	TaskReturn(); // 0xa90 TaskReturn
	return 0; // 0xa92 Return
}


func_1632(var_2_object, var_509_string)
{
	var_510_bool = 0; // 0x661 PushV
	func_2392(var_510_bool); // 0x662 NEW_2
	var_511_bool = var_510_bool == 0; // 0x664 Not
	if(var_511_bool == 0) goto Label_1639; // 0x665 JumpB
	return 0; // 0x666 Return
	
Label_1639:
	var_512_bool = var_509_string == var_2_object; // 0x667 Eq
	if(var_512_bool == 0) goto Label_1642; // 0x668 JumpB
	return 0; // 0x669 Return
	
Label_1642:
	var_513_string = ""; var_514_bool = 0; // 0x66a PushV
	var_513_string = var_509_string; // 0x66b Mov
	var_515_string = ""; // 0x66c PushS
	var_516_bool = var_509_string == var_515_string; // 0x66d Eq
	if(var_516_bool == 0) goto Label_1649; // 0x66e JumpB
	var_514_bool = 0; // 0x66f MovB
	goto Label_1650; // 0x670 Jump
	
Label_1650:
	func_2226(var_513_string, var_514_bool); // 0x672 NEW_2
	var_2_object = var_509_string; // 0x674 TMov
	return 0; // 0x675 Return
	
Label_1649:
	var_514_bool = 1; // 0x671 MovB
}


func_1378(var_2_object, var_450_string)
{
	var_451_bool = 0; // 0x563 PushV
	func_2392(var_451_bool); // 0x564 NEW_2
	var_452_bool = var_451_bool == 0; // 0x566 Not
	if(var_452_bool == 0) goto Label_1385; // 0x567 JumpB
	return 0; // 0x568 Return
	
Label_1385:
	var_453_bool = var_450_string == var_2_object; // 0x569 Eq
	if(var_453_bool == 0) goto Label_1388; // 0x56a JumpB
	return 0; // 0x56b Return
	
Label_1388:
	var_454_string = ""; var_455_bool = 0; // 0x56c PushV
	var_454_string = var_450_string; // 0x56d Mov
	var_456_string = ""; // 0x56e PushS
	var_457_bool = var_450_string == var_456_string; // 0x56f Eq
	if(var_457_bool == 0) goto Label_1395; // 0x570 JumpB
	var_455_bool = 0; // 0x571 MovB
	goto Label_1396; // 0x572 Jump
	
Label_1396:
	func_2226(var_454_string, var_455_bool); // 0x574 NEW_2
	var_2_object = var_450_string; // 0x576 TMov
	return 0; // 0x577 Return
	
Label_1395:
	var_455_bool = 1; // 0x573 MovB
}


func_2422()
{
	var_141_string = "k5q02"; // 0x977 PushS
	var_142_int = 6; // 0x978 PushI
	SetVariable(var_141_string, var_142_int); // 0x979 Func
	func_2530(); // 0x97c NEW_2
	return 0; // 0x97e Return
}


func_2167(var_160_bool)
{
	var_162_string = ""; var_163_int = 0; var_164_bool = 0; var_165_int = 0; var_166_string = ""; var_167_string = ""; var_168_int = 0; var_169_bool = 0; var_170_int = 0; var_171_string = ""; // 0x877 PushV
	var_172_string = "d"; // 0x878 PushS
	var_173_int = 0; // 0x879 PushV
	func_2345(var_173_int); // 0x87a NEW_2
	var_179_int = var_172_string + var_173_int; // 0x87c Add
	var_180_string = "m"; // 0x87d PushS
	var_167_string = var_179_int + var_180_string; // 0x87e Add2
	var_168_int = 0; // 0x87f MovI
	
Label_2176:
	var_181_int = 1; // 0x880 PushI
	if(var_181_int == 0) goto Label_2189; // 0x881 JumpB
	var_182_int = 1; // 0x882 PushI
	var_183_int = var_168_int + var_182_int; // 0x883 Add
	var_184_int = var_167_string + var_183_int; // 0x884 Add
	HasProperty(var_184_int, var_169_bool); // 0x885 ObjFunc
	var_185_bool = var_169_bool == 0; // 0x887 Not
	if(var_185_bool == 0) goto Label_2186; // 0x888 JumpB
	goto Label_2189; // 0x889 Jump
	
Label_2189:
	var_186_bool = var_168_int == 0; // 0x88d Not
	if(var_186_bool == 0) goto Label_2193; // 0x88e JumpB
	var_160_bool = 0; // 0x88f MovB
	return 10; // 0x890 Return
	
Label_2193:
	var_170_int = 0; // 0x891 MovI
	var_187_int = 1; // 0x892 PushI
	var_188_bool = var_168_int > var_187_int; // 0x893 GT
	if(var_188_bool == 0) goto Label_2199; // 0x894 JumpB
	irand(var_170_int, var_168_int); // 0x895 Func
	
Label_2199:
	var_189_int = 1; // 0x897 PushI
	var_190_int = var_170_int + var_189_int; // 0x898 Add
	var_191_int = var_167_string + var_190_int; // 0x899 Add
	GetProperty(var_191_int, var_171_string); // 0x89a ObjFunc
	var_192_bool = 0; var_193_string = ""; // 0x89c PushV
	var_193_string = var_171_string; // 0x89d Mov
	func_2241(var_192_bool, var_193_string); // 0x89e NEW_2
	var_160_bool = var_192_bool; // 0x89f Mov
	return 10; // 0x8a1 Return
	
Label_2186:
	var_194_int = 1; // 0x88a PushI
	var_168_int = var_168_int + var_194_int; // 0x88b Add2
	goto Label_2176; // 0x88c Jump
}


func_2431(var_167_object)
{
	var_169_string = "tvirin 5 is given"; // 0x980 PushS
	Trace(var_169_string); // 0x981 Func
	var_170_object = Obj(); var_171_string = ""; var_172_int = 0; // 0x983 PushV
	var_170_object = var_167_object; // 0x984 Mov
	var_171_string = "tvirin"; // 0x985 MovS
	var_172_int = 5; // 0x986 MovI
	func_2315(var_170_object, var_171_string, var_172_int); // 0x987 NEW_2
	return 0; // 0x989 Return
}


func_2442()
{
	var_34_string = "ook11Petr1"; // 0x98b PushS
	var_35_int = 1; // 0x98c PushI
	SetVariable(var_34_string, var_35_int); // 0x98d Func
	return 0; // 0x98f Return
}


func_139(var_2_object, var_220_string)
{
	var_221_bool = 0; // 0x8c PushV
	func_2392(var_221_bool); // 0x8d NEW_2
	var_222_bool = var_221_bool == 0; // 0x8f Not
	if(var_222_bool == 0) goto Label_146; // 0x90 JumpB
	return 0; // 0x91 Return
	
Label_146:
	var_223_bool = var_220_string == var_2_object; // 0x92 Eq
	if(var_223_bool == 0) goto Label_149; // 0x93 JumpB
	return 0; // 0x94 Return
	
Label_149:
	var_224_string = ""; var_225_bool = 0; // 0x95 PushV
	var_224_string = var_220_string; // 0x96 Mov
	var_226_string = ""; // 0x97 PushS
	var_227_bool = var_220_string == var_226_string; // 0x98 Eq
	if(var_227_bool == 0) goto Label_156; // 0x99 JumpB
	var_225_bool = 0; // 0x9a MovB
	goto Label_157; // 0x9b Jump
	
Label_157:
	func_2226(var_224_string, var_225_bool); // 0x9d NEW_2
	var_2_object = var_220_string; // 0x9f TMov
	return 0; // 0xa0 Return
	
Label_156:
	var_225_bool = 1; // 0x9c MovB
}


func_398(var_2_object, var_305_string)
{
	var_306_bool = 0; // 0x18f PushV
	func_2392(var_306_bool); // 0x190 NEW_2
	var_307_bool = var_306_bool == 0; // 0x192 Not
	if(var_307_bool == 0) goto Label_405; // 0x193 JumpB
	return 0; // 0x194 Return
	
Label_405:
	var_308_bool = var_305_string == var_2_object; // 0x195 Eq
	if(var_308_bool == 0) goto Label_408; // 0x196 JumpB
	return 0; // 0x197 Return
	
Label_408:
	var_309_string = ""; var_310_bool = 0; // 0x198 PushV
	var_309_string = var_305_string; // 0x199 Mov
	var_311_string = ""; // 0x19a PushS
	var_312_bool = var_305_string == var_311_string; // 0x19b Eq
	if(var_312_bool == 0) goto Label_415; // 0x19c JumpB
	var_310_bool = 0; // 0x19d MovB
	goto Label_416; // 0x19e Jump
	
Label_416:
	func_2226(var_309_string, var_310_bool); // 0x1a0 NEW_2
	var_2_object = var_305_string; // 0x1a2 TMov
	return 0; // 0x1a3 Return
	
Label_415:
	var_310_bool = 1; // 0x19f MovB
}


func_2448()
{
	var_165_string = "playsound"; // 0x991 PushS
	var_166_string = "giveitem"; // 0x992 PushS
	TriggerWorld(var_165_string, var_166_string); // 0x993 Func
	return 0; // 0x995 Return
}


func_2454(var_107_object)
{
	var_109_string = "tvirin is given"; // 0x997 PushS
	Trace(var_109_string); // 0x998 Func
	var_110_object = Obj(); var_111_string = ""; var_112_int = 0; // 0x99a PushV
	var_110_object = var_107_object; // 0x99b Mov
	var_111_string = "tvirin"; // 0x99c MovS
	var_112_int = 1; // 0x99d MovI
	func_2315(var_110_object, var_111_string, var_112_int); // 0x99e NEW_2
	return 0; // 0x9a0 Return
}


func_921(var_0_object, var_352_int, var_353_object)
{
	var_355_object = Obj(); var_356_bool = 0; var_357_int = 0; var_358_bool = 0; var_359_object = Obj(); var_360_bool = 0; var_361_int = 0; var_362_bool = 0; // 0x399 PushV
	var_0_object = var_353_object; // 0x39a TMov
	var_363_bool = 0; var_364_object = Obj(); var_365_float = 0; // 0x39b PushV
	var_364_object = var_353_object; // 0x39c Mov
	var_365_float = 70.0; // 0x39d MovF
	func_1987(var_364_object, var_365_float); // 0x39e NEW_2
	var_366_bool = var_363_bool == 0; // 0x3a0 Not
	if(var_366_bool == 0) goto Label_932; // 0x3a1 JumpB
	var_352_int = -2; // 0x3a2 MovI
	return 8; // 0x3a3 Return
	
Label_932:
	CreateDialog(var_359_object); // 0x3a4 Func
	var_367_int = 0; // 0x3a6 PushV
	func_2386(var_367_int); // 0x3a7 NEW_2
	SetNPCName(var_367_int); // 0x3a9 ObjFunc
	var_368_int = 0; // 0x3ab PushV
	func_2384(var_368_int); // 0x3ac NEW_2
	SetNPCDescription(var_368_int); // 0x3ae ObjFunc
	var_369_string = ""; // 0x3b0 PushV
	func_2388(var_369_string); // 0x3b1 NEW_2
	SetPhoto(var_369_string); // 0x3b3 ObjFunc
	var_370_string = ""; // 0x3b5 PushV
	func_2390(var_370_string); // 0x3b6 NEW_2
	SetPhoto2(var_370_string); // 0x3b8 ObjFunc
	var_371_int = 0; // 0x3ba PushV
	func_2634(var_371_int); // 0x3bb NEW_2
	SetPlayerName(var_371_int); // 0x3bd ObjFunc
	var_361_int = -1; // 0x3bf MovI
	IsOverrideActive(var_360_bool); // 0x3c0 Func
	var_372_bool = var_360_bool; // 0x3c2 Push
	if(var_372_bool == 0) goto Label_966; // 0x3c3 JumpB
	var_352_int = -2; // 0x3c4 MovI
	return 8; // 0x3c5 Return
	
Label_966:
	DoDialog(var_359_object); // 0x3c6 Func
	var_373_bool = 0; var_374_object = Obj(); // 0x3c8 PushV
	var_375_object = Obj(); // 0x3c9 PushV
	func_2263(var_375_object); // 0x3ca NEW_2
	var_374_object = var_375_object; // 0x3cb Mov
	func_2072(var_373_bool, var_374_object); // 0x3cd NEW_2
	var_376_object = Obj(); var_377_object = Obj(); // 0x3cf PushV
	var_376_object = var_353_object; // 0x3d0 Mov
	var_377_object = var_359_object; // 0x3d1 Mov
	TaskCall(5); // 0x3d2 TaskCall
	func_1002(var_378_object, var_379_object, var_380_string, var_381_bool, var_376_object, var_377_object); // 0x3d3 NEW_2
	TaskReturn(); // 0x3d4 TaskReturn
	IsDialogEnd(var_362_bool); // 0x3d6 ObjFunc
	
Label_984:
	var_415_bool = var_362_bool == 0; // 0x3d8 Not
	if(var_415_bool == 0) goto Label_991; // 0x3d9 JumpB
	sync(); // 0x3da Func
	IsDialogEnd(var_362_bool); // 0x3dc ObjFunc
	goto Label_984; // 0x3de Jump
	
Label_991:
	var_416_object = Obj(); // 0x3df PushV
	var_416_object = var_353_object; // 0x3e0 Mov
	func_2055(); // 0x3e1 NEW_2
	StopDialog(var_359_object); // 0x3e3 Func
	GetReturnValue(var_361_int); // 0x3e5 ObjFunc
	var_352_int = var_361_int; // 0x3e7 Mov
	return 8; // 0x3e8 Return
}


func_1948(var_65_bool)
{
	var_65_bool = 1; // 0x79c MovB
	return 0; // 0x79d Return
}


func_1950()
{
	StopAnimation(); // 0x79e Func
	StopGroup0(); // 0x7a0 Func
	return 0; // 0x7a2 Return
}


func_2465()
{
	var_83_object = Obj(); var_84_string = ""; var_85_float = 0; // 0x9a2 PushV
	var_86_object = Obj(); // 0x9a3 PushV
	func_2584(var_86_object); // 0x9a4 NEW_2
	var_83_object = var_86_object; // 0x9a5 Mov
	var_84_string = "pt_map_andrei"; // 0x9a7 MovS
	var_85_float = 2; // 0x9a8 MovI
	func_2601(var_83_object, var_84_string, var_85_float); // 0x9a9 NEW_2
	var_106_object = Obj(); // 0x9ab PushV
	func_2584(var_106_object); // 0x9ac NEW_2
	ShowMap(var_106_object); // 0x9ae ObjFunc
	return 0; // 0x9b0 Return
}


func_2210(var_246_string)
{
	var_247_bool = 0; var_248_float = 0; var_249_float = 0; var_250_bool = 0; var_251_float = 0; var_252_float = 0; // 0x8a2 PushV
	lshHasAnimation(var_250_bool, var_246_string); // 0x8a3 Func
	var_253_bool = var_250_bool; // 0x8a5 Push
	if(var_253_bool == 0) goto Label_2221; // 0x8a6 JumpB
	lshGetAnimTimes(var_246_string, var_251_float, var_252_float); // 0x8a7 Func
	var_254_bool = 0; // 0x8a9 PushB
	lshPlayAnimation(var_251_float, var_252_float, var_254_bool); // 0x8aa Func
	goto Label_2225; // 0x8ac Jump
	
Label_2225:
	return 6; // 0x8b1 Return
	
Label_2221:
	var_255_string = "Can't find lsh animation : "; // 0x8ad PushS
	var_256_int = var_255_string + var_246_string; // 0x8ae Add
	Trace(var_256_int); // 0x8af Func
}


func_1955(var_41_float)
{
	var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); // 0x7a3 PushV
	GetPosition(var_46_cvector); // 0x7a4 Func
	GetPosition(var_47_cvector); // 0x7a6 ObjFunc
	var_48_cvector = var_47_cvector - var_46_cvector; // 0x7a8 Sub2
	var_41_float = var_48_cvector | var_48_cvector; // 0x7a9 Or2
	return 6; // 0x7aa Return
}


func_1703(var_0_object)
{
	var_27_bool = 0; // 0x6a7 PushV
	func_1982(var_27_bool); // 0x6a8 NEW_2
	var_30_bool = var_27_bool == 0; // 0x6aa Not
	if(var_30_bool == 0) goto Label_1710; // 0x6ab JumpB
	Hold(); // 0x6ac Func
	
Label_1710:
	GetDirection(var_0_object); // 0x6ae Func
	
Label_1712:
	func_1879(); // 0x6b1 NEW_2
	goto Label_1712; // 0x6b3 Jump
}


func_1963(var_34_bool, var_35_cvector)
{
	var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_bool = 0; var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_bool = 0; // 0x7ab PushV
	GetPosition(var_39_cvector); // 0x7ac Func
	var_40_cvector = var_35_cvector - var_39_cvector; // 0x7ae Sub2
	var_42_float = GetByIndex(var_40_cvector, 0); // 0x7af PushE
	var_43_float = GetByIndex(var_40_cvector, 2); // 0x7b0 PushE
	Rotate(var_42_float, var_43_float, var_41_bool); // 0x7b1 Func
	var_34_bool = var_41_bool; // 0x7b3 Mov
	return 6; // 0x7b4 Return
}


func_2481(var_314_bool)
{
	var_316_int = 0; var_317_string = ""; // 0x9b2 PushV
	var_317_string = "k5q02"; // 0x9b3 MovS
	func_2279(var_316_int, var_317_string); // 0x9b4 NEW_2
	var_320_int = 1; // 0x9b6 PushI
	var_321_bool = var_316_int == var_320_int; // 0x9b7 Eq
	if(var_321_bool == 0) goto Label_2491; // 0x9b8 JumpB
	var_314_bool = 1; // 0x9b9 MovB
	return 0; // 0x9ba Return
	
Label_2491:
	var_314_bool = 0; // 0x9bb MovB
	return 0; // 0x9bc Return
}


func_2226(var_224_string, var_225_bool)
{
	var_228_bool = 0; var_229_float = 0; var_230_float = 0; var_231_bool = 0; var_232_float = 0; var_233_float = 0; // 0x8b2 PushV
	lshHasAnimation(var_231_bool, var_224_string); // 0x8b3 Func
	var_234_bool = var_231_bool; // 0x8b5 Push
	if(var_234_bool == 0) goto Label_2236; // 0x8b6 JumpB
	lshGetAnimTimes(var_224_string, var_232_float, var_233_float); // 0x8b7 Func
	lshPlayAnimation(var_232_float, var_233_float, var_225_bool); // 0x8b9 Func
	goto Label_2240; // 0x8bb Jump
	
Label_2240:
	return 6; // 0x8c0 Return
	
Label_2236:
	var_235_string = "Can't find lsh animation : "; // 0x8bc PushS
	var_236_int = var_235_string + var_224_string; // 0x8bd Add
	Trace(var_236_int); // 0x8be Func
}


func_1973(var_30_bool)
{
	var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); // 0x7b5 PushV
	GetPosition(var_33_cvector); // 0x7b6 ObjFunc
	var_34_bool = 0; var_35_cvector = CVector(0,0,0); // 0x7b8 PushV
	var_35_cvector = var_33_cvector; // 0x7b9 Mov
	func_1963(var_34_bool, var_35_cvector); // 0x7ba NEW_2
	var_30_bool = var_34_bool; // 0x7bb Mov
	return 2; // 0x7bd Return
}


func_1717(var_51_bool)
{
	var_52_object = Obj(); var_53_object = Obj(); // 0x6b5 PushV
	var_54_string = "player"; // 0x6b6 PushS
	FindActor(var_53_object, var_54_string); // 0x6b7 Func
	var_55_bool = var_53_object == 0; // 0x6b9 Not
	if(var_55_bool == 0) goto Label_1725; // 0x6ba JumpB
	var_51_bool = 0; // 0x6bb MovB
	return 2; // 0x6bc Return
	
Label_1725:
	var_56_bool = 0; var_57_object = Obj(); // 0x6bd PushV
	var_57_object = var_53_object; // 0x6be Mov
	func_1973(var_57_object); // 0x6bf NEW_2
	var_51_bool = var_56_bool; // 0x6c0 Mov
	return 2; // 0x6c2 Return
}


func_2493(var_325_bool)
{
	var_327_int = 0; var_328_string = ""; // 0x9be PushV
	var_328_string = "k5q02"; // 0x9bf MovS
	func_2279(var_327_int, var_328_string); // 0x9c0 NEW_2
	var_329_int = 5; // 0x9c2 PushI
	var_330_bool = var_327_int == var_329_int; // 0x9c3 Eq
	if(var_330_bool == 0) goto Label_2503; // 0x9c4 JumpB
	var_325_bool = 1; // 0x9c5 MovB
	return 0; // 0x9c6 Return
	
Label_2503:
	var_325_bool = 0; // 0x9c7 MovB
	return 0; // 0x9c8 Return
}


func_1982(var_27_bool)
{
	var_28_bool = 0; var_29_bool = 0; // 0x7be PushV
	IsLoaded(var_29_bool); // 0x7bf Func
	var_27_bool = var_29_bool; // 0x7c1 Mov
	return 2; // 0x7c2 Return
}


func_2241(var_152_bool, var_153_string)
{
	var_154_bool = 0; var_155_bool = 0; // 0x8c1 PushV
	var_156_bool = 0; // 0x8c2 PushV
	func_2392(var_156_bool); // 0x8c3 NEW_2
	if(var_156_bool == 0) goto Label_2254; // 0x8c5 JumpB
	lshHasSpeech(var_155_bool, var_153_string); // 0x8c6 Func
	var_157_bool = var_155_bool; // 0x8c8 Push
	if(var_157_bool == 0) goto Label_2254; // 0x8c9 JumpB
	lshPlaySpeech(var_153_string); // 0x8ca Func
	var_152_bool = 1; // 0x8cc MovB
	return 2; // 0x8cd Return
	
Label_2254:
	var_152_bool = 0; // 0x8ce MovB
	return 2; // 0x8cf Return
}


func_1987(var_58_bool, var_60_float)
{
	var_61_float = 0; var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); var_66_cvector = CVector(0,0,0); var_67_cvector = CVector(0,0,0); var_68_bool = 0; var_69_bool = 0; var_70_float = 0; var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); var_73_cvector = CVector(0,0,0); var_74_cvector = CVector(0,0,0); var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0); var_77_bool = 0; var_78_bool = 0; // 0x7c3 PushV
	GetPosition(var_71_cvector); // 0x7c4 ObjFunc
	GetEyesHeight(var_70_float); // 0x7c6 ObjFunc
	var_79_float = GetByIndex(var_71_cvector, 1); // 0x7c8 PushE
	var_79_float = var_79_float + var_70_float; // 0x7c9 Add2
	SetByIndex(var_71_cvector, 1) = var_79_float; // 0x7ca PopE
	GetPosition(var_72_cvector); // 0x7cb Func
	GetEyesHeight(var_70_float); // 0x7cd Func
	var_80_float = GetByIndex(var_72_cvector, 1); // 0x7cf PushE
	var_80_float = var_80_float + var_70_float; // 0x7d0 Add2
	SetByIndex(var_72_cvector, 1) = var_80_float; // 0x7d1 PopE
	var_73_cvector = var_71_cvector - var_72_cvector; // 0x7d2 Sub2
	var_81_float = GetByIndex(var_73_cvector, 1); // 0x7d3 PushE
	var_81_float = 0; // 0x7d4 MovI
	SetByIndex(var_73_cvector, 1) = var_81_float; // 0x7d5 PopE
	var_82_int = var_73_cvector | var_73_cvector; // 0x7d6 Or
	var_83_float = sqrt(var_82_int); // 0x7d7 Sqrt
	var_73_cvector = var_73_cvector / var_73_cvector; // 0x7d8 Div2
	var_74_cvector = -var_73_cvector; // 0x7d9 Neg2
	var_84_float = var_73_cvector * var_60_float; // 0x7da Mult
	var_85_cvector = CVector(0,0,0); var_86_cvector = CVector(0,0,0); // 0x7db PushV
	var_87_cvector = CVector(0.0, 1.0, 0.0); // 0x7dc PushVec
	var_86_cvector = var_74_cvector ^ var_87_cvector; // 0x7dd Xor2
	func_2269(var_85_cvector, var_86_cvector); // 0x7de NEW_2
	var_93_int = 25; // 0x7e0 PushI
	var_94_float = var_85_cvector * var_93_int; // 0x7e1 Mult
	var_95_int = var_84_float + var_94_float; // 0x7e2 Add
	var_96_cvector = CVector(0.0, 10.0, 0.0); // 0x7e3 PushVec
	var_75_cvector = var_95_int - var_96_cvector; // 0x7e4 Sub2
	var_76_cvector = var_72_cvector + var_75_cvector; // 0x7e5 Add2
	IsOverrideActive(var_77_bool); // 0x7e6 Func
	var_97_bool = var_77_bool; // 0x7e8 Push
	if(var_97_bool == 0) goto Label_2028; // 0x7e9 JumpB
	var_58_bool = 0; // 0x7ea MovB
	return 18; // 0x7eb Return
	
Label_2028:
	StopWorld(); // 0x7ec Func
	CameraTransit(var_76_cvector, var_74_cvector); // 0x7ee Func
	var_98_float = GetByIndex(var_75_cvector, 0); // 0x7f0 PushE
	var_99_float = GetByIndex(var_75_cvector, 2); // 0x7f1 PushE
	Rotate(var_98_float, var_99_float); // 0x7f2 Func
	var_100_bool = 0; // 0x7f4 PushV
	func_2392(var_100_bool); // 0x7f5 NEW_2
	if(var_100_bool == 0) goto Label_2041; // 0x7f7 JumpB
	goto Label_2049; // 0x7f8 Jump
	
Label_2049:
	CameraWaitForPlayFinish(); // 0x801 Func
	ResumeWorld(); // 0x803 Func
	var_58_bool = 1; // 0x805 MovB
	return 18; // 0x806 Return
	
Label_2041:
	var_101_string = "head"; // 0x7f9 PushS
	HasAnimationTrack(var_78_bool, var_101_string); // 0x7fa Func
	var_102_bool = var_78_bool; // 0x7fc Push
	if(var_102_bool == 0) goto Label_2049; // 0x7fd JumpB
	var_103_string = "head"; // 0x7fe PushS
	LookAsyncCamera(var_103_string); // 0x7ff Func
}


func_1732(var_0_object)
{
	var_103_float = GetByIndex(var_0_object, 0); // 0x6c4 PushE
	var_104_float = GetByIndex(var_0_object, 2); // 0x6c5 PushE
	RotateAsync(var_103_float, var_104_float); // 0x6c6 Func
	return 0; // 0x6c8 Return
}


func_2505(var_392_bool)
{
	var_394_int = 0; var_395_string = ""; // 0x9ca PushV
	var_395_string = "ook11Petr1"; // 0x9cb MovS
	func_2279(var_394_int, var_395_string); // 0x9cc NEW_2
	var_396_int = 0; // 0x9ce PushI
	var_397_bool = var_394_int == var_396_int; // 0x9cf Eq
	if(var_397_bool == 0) goto Label_2515; // 0x9d0 JumpB
	var_392_bool = 1; // 0x9d1 MovB
	return 0; // 0x9d2 Return
	
Label_2515:
	var_392_bool = 0; // 0x9d3 MovB
	return 0; // 0x9d4 Return
}


func_1737(var_34_bool)
{
	var_35_object = Obj(); var_36_bool = 0; var_37_object = Obj(); var_38_bool = 0; // 0x6c9 PushV
	var_39_string = "player"; // 0x6ca PushS
	FindActor(var_37_object, var_39_string); // 0x6cb Func
	var_40_bool = var_37_object == 0; // 0x6cd Not
	if(var_40_bool == 0) goto Label_1745; // 0x6ce JumpB
	var_34_bool = 0; // 0x6cf MovB
	return 4; // 0x6d0 Return
	
Label_1745:
	var_41_float = 0; var_42_object = Obj(); // 0x6d1 PushV
	var_42_object = var_37_object; // 0x6d2 Mov
	func_1955(var_42_object); // 0x6d3 NEW_2
	var_49_float = 90000.0; // 0x6d5 PushF
	var_50_bool = var_41_float > var_49_float; // 0x6d6 GT
	if(var_50_bool == 0) goto Label_1754; // 0x6d7 JumpB
	var_34_bool = 0; // 0x6d8 MovB
	return 4; // 0x6d9 Return
	
Label_1754:
	CanSee(var_38_bool, var_37_object); // 0x6da Func
	var_34_bool = var_38_bool; // 0x6dc Mov
	return 4; // 0x6dd Return
}


func_2256()
{
	var_29_bool = 0; // 0x8d0 PushV
	func_2392(var_29_bool); // 0x8d1 NEW_2
	if(var_29_bool == 0) goto Label_2262; // 0x8d3 JumpB
	lshStopSpeech(); // 0x8d4 Func
	
Label_2262:
	return 0; // 0x8d6 Return
}


func_1234(var_0_object, var_419_int, var_420_object)
{
	var_422_object = Obj(); var_423_bool = 0; var_424_int = 0; var_425_bool = 0; var_426_object = Obj(); var_427_bool = 0; var_428_int = 0; var_429_bool = 0; // 0x4d2 PushV
	var_0_object = var_420_object; // 0x4d3 TMov
	var_430_bool = 0; var_431_object = Obj(); var_432_float = 0; // 0x4d4 PushV
	var_431_object = var_420_object; // 0x4d5 Mov
	var_432_float = 70.0; // 0x4d6 MovF
	func_1987(var_431_object, var_432_float); // 0x4d7 NEW_2
	var_433_bool = var_430_bool == 0; // 0x4d9 Not
	if(var_433_bool == 0) goto Label_1245; // 0x4da JumpB
	var_419_int = -2; // 0x4db MovI
	return 8; // 0x4dc Return
	
Label_1245:
	CreateDialog(var_426_object); // 0x4dd Func
	var_434_int = 0; // 0x4df PushV
	func_2386(var_434_int); // 0x4e0 NEW_2
	SetNPCName(var_434_int); // 0x4e2 ObjFunc
	var_435_int = 0; // 0x4e4 PushV
	func_2384(var_435_int); // 0x4e5 NEW_2
	SetNPCDescription(var_435_int); // 0x4e7 ObjFunc
	var_436_string = ""; // 0x4e9 PushV
	func_2388(var_436_string); // 0x4ea NEW_2
	SetPhoto(var_436_string); // 0x4ec ObjFunc
	var_437_string = ""; // 0x4ee PushV
	func_2390(var_437_string); // 0x4ef NEW_2
	SetPhoto2(var_437_string); // 0x4f1 ObjFunc
	var_438_int = 0; // 0x4f3 PushV
	func_2634(var_438_int); // 0x4f4 NEW_2
	SetPlayerName(var_438_int); // 0x4f6 ObjFunc
	var_428_int = -1; // 0x4f8 MovI
	IsOverrideActive(var_427_bool); // 0x4f9 Func
	var_439_bool = var_427_bool; // 0x4fb Push
	if(var_439_bool == 0) goto Label_1279; // 0x4fc JumpB
	var_419_int = -2; // 0x4fd MovI
	return 8; // 0x4fe Return
	
Label_1279:
	DoDialog(var_426_object); // 0x4ff Func
	var_440_bool = 0; var_441_object = Obj(); // 0x501 PushV
	var_442_object = Obj(); // 0x502 PushV
	func_2263(var_442_object); // 0x503 NEW_2
	var_441_object = var_442_object; // 0x504 Mov
	func_2072(var_440_bool, var_441_object); // 0x506 NEW_2
	var_443_object = Obj(); var_444_object = Obj(); // 0x508 PushV
	var_443_object = var_420_object; // 0x509 Mov
	var_444_object = var_426_object; // 0x50a Mov
	TaskCall(7); // 0x50b TaskCall
	func_1315(var_445_object, var_446_object, var_447_string, var_448_bool, var_443_object, var_444_object); // 0x50c NEW_2
	TaskReturn(); // 0x50d TaskReturn
	IsDialogEnd(var_429_bool); // 0x50f ObjFunc
	
Label_1297:
	var_476_bool = var_429_bool == 0; // 0x511 Not
	if(var_476_bool == 0) goto Label_1304; // 0x512 JumpB
	sync(); // 0x513 Func
	IsDialogEnd(var_429_bool); // 0x515 ObjFunc
	goto Label_1297; // 0x517 Jump
	
Label_1304:
	var_477_object = Obj(); // 0x518 PushV
	var_477_object = var_420_object; // 0x519 Mov
	func_2055(); // 0x51a NEW_2
	StopDialog(var_426_object); // 0x51c Func
	GetReturnValue(var_428_int); // 0x51e ObjFunc
	var_419_int = var_428_int; // 0x520 Mov
	return 8; // 0x521 Return
}


func_2517()
{
	var_52_object = Obj(); var_53_object = Obj(); // 0x9d5 PushV
	var_54_int = 399; // 0x9d6 PushI
	var_55_int = 2; // 0x9d7 PushI
	var_56_int = 525937; // 0x9d8 PushI
	CreateDiaryEntry(var_53_object, var_54_int, var_55_int, var_56_int); // 0x9d9 Func
	var_57_bool = 0; var_58_object = Obj(); var_59_int = 0; // 0x9db PushV
	var_58_object = var_53_object; // 0x9dc Mov
	var_59_int = 397; // 0x9dd MovI
	func_2556(var_57_bool, var_58_object, var_59_int); // 0x9de NEW_2
	return 2; // 0x9e0 Return
}


func_1493(var_0_object, var_478_int, var_479_object)
{
	var_481_object = Obj(); var_482_bool = 0; var_483_int = 0; var_484_bool = 0; var_485_object = Obj(); var_486_bool = 0; var_487_int = 0; var_488_bool = 0; // 0x5d5 PushV
	var_0_object = var_479_object; // 0x5d6 TMov
	var_489_bool = 0; var_490_object = Obj(); var_491_float = 0; // 0x5d7 PushV
	var_490_object = var_479_object; // 0x5d8 Mov
	var_491_float = 70.0; // 0x5d9 MovF
	func_1987(var_490_object, var_491_float); // 0x5da NEW_2
	var_492_bool = var_489_bool == 0; // 0x5dc Not
	if(var_492_bool == 0) goto Label_1504; // 0x5dd JumpB
	var_478_int = -2; // 0x5de MovI
	return 8; // 0x5df Return
	
Label_1504:
	CreateDialog(var_485_object); // 0x5e0 Func
	var_493_int = 0; // 0x5e2 PushV
	func_2386(var_493_int); // 0x5e3 NEW_2
	SetNPCName(var_493_int); // 0x5e5 ObjFunc
	var_494_int = 0; // 0x5e7 PushV
	func_2384(var_494_int); // 0x5e8 NEW_2
	SetNPCDescription(var_494_int); // 0x5ea ObjFunc
	var_495_string = ""; // 0x5ec PushV
	func_2388(var_495_string); // 0x5ed NEW_2
	SetPhoto(var_495_string); // 0x5ef ObjFunc
	var_496_string = ""; // 0x5f1 PushV
	func_2390(var_496_string); // 0x5f2 NEW_2
	SetPhoto2(var_496_string); // 0x5f4 ObjFunc
	var_497_int = 0; // 0x5f6 PushV
	func_2634(var_497_int); // 0x5f7 NEW_2
	SetPlayerName(var_497_int); // 0x5f9 ObjFunc
	var_487_int = -1; // 0x5fb MovI
	IsOverrideActive(var_486_bool); // 0x5fc Func
	var_498_bool = var_486_bool; // 0x5fe Push
	if(var_498_bool == 0) goto Label_1538; // 0x5ff JumpB
	var_478_int = -2; // 0x600 MovI
	return 8; // 0x601 Return
	
Label_1538:
	DoDialog(var_485_object); // 0x602 Func
	var_499_bool = 0; var_500_object = Obj(); // 0x604 PushV
	var_501_object = Obj(); // 0x605 PushV
	func_2263(var_501_object); // 0x606 NEW_2
	var_500_object = var_501_object; // 0x607 Mov
	func_2072(var_499_bool, var_500_object); // 0x609 NEW_2
	var_502_object = Obj(); var_503_object = Obj(); // 0x60b PushV
	var_502_object = var_479_object; // 0x60c Mov
	var_503_object = var_485_object; // 0x60d Mov
	TaskCall(9); // 0x60e TaskCall
	func_1574(var_504_object, var_505_object, var_506_string, var_507_bool, var_502_object, var_503_object); // 0x60f NEW_2
	TaskReturn(); // 0x610 TaskReturn
	IsDialogEnd(var_488_bool); // 0x612 ObjFunc
	
Label_1556:
	var_532_bool = var_488_bool == 0; // 0x614 Not
	if(var_532_bool == 0) goto Label_1563; // 0x615 JumpB
	sync(); // 0x616 Func
	IsDialogEnd(var_488_bool); // 0x618 ObjFunc
	goto Label_1556; // 0x61a Jump
	
Label_1563:
	var_533_object = Obj(); // 0x61b PushV
	var_533_object = var_479_object; // 0x61c Mov
	func_2055(); // 0x61d NEW_2
	StopDialog(var_485_object); // 0x61f Func
	GetReturnValue(var_487_int); // 0x621 ObjFunc
	var_478_int = var_487_int; // 0x623 Mov
	return 8; // 0x624 Return
}


func_2263(var_120_object)
{
	var_121_object = Obj(); var_122_object = Obj(); // 0x8d7 PushV
	self(var_122_object); // 0x8d8 Func
	var_120_object = var_122_object; // 0x8da Mov
	return 2; // 0x8db Return
}


func_2269(var_85_cvector, var_86_cvector)
{
	var_88_float = 0; var_89_float = 0; // 0x8dd PushV
	var_90_int = var_86_cvector | var_86_cvector; // 0x8de Or
	var_89_float = sqrt(var_90_int); // 0x8df Sqrt2
	var_91_float = 0.0; // 0x8e0 PushF
	var_92_bool = var_89_float < var_91_float; // 0x8e1 LT
	if(var_92_bool == 0) goto Label_2277; // 0x8e2 JumpB
	var_85_cvector = CVector(0.0, 0.0, 0.0); // 0x8e3 MovV
	return 2; // 0x8e4 Return
	
Label_2277:
	var_85_cvector = var_86_cvector / var_86_cvector; // 0x8e5 Div2
	return 2; // 0x8e6 Return
}


func_1759()
{
	var_536_float = 0; var_537_float = 0; // 0x6df PushV
	var_538_int = 8; // 0x6e0 PushI
	var_539_int = 16; // 0x6e1 PushI
	rand(var_537_float, var_538_int, var_539_int); // 0x6e2 Func
	var_540_int = 10; // 0x6e4 PushI
	SetTimer(var_540_int, var_537_float); // 0x6e5 Func
	return 2; // 0x6e7 Return
}


func_2530()
{
	var_143_object = Obj(); var_144_object = Obj(); // 0x9e2 PushV
	var_145_int = 403; // 0x9e3 PushI
	var_146_int = 2; // 0x9e4 PushI
	var_147_int = 525941; // 0x9e5 PushI
	CreateDiaryEntry(var_144_object, var_145_int, var_146_int, var_147_int); // 0x9e6 Func
	var_148_bool = 0; var_149_object = Obj(); var_150_int = 0; // 0x9e8 PushV
	var_149_object = var_144_object; // 0x9e9 Mov
	var_150_int = 397; // 0x9ea MovI
	func_2556(var_148_bool, var_149_object, var_150_int); // 0x9eb NEW_2
	return 2; // 0x9ed Return
}


func_2279(var_316_int, var_317_string)
{
	var_318_int = 0; var_319_int = 0; // 0x8e7 PushV
	GetVariable(var_317_string, var_319_int); // 0x8e8 Func
	var_316_int = var_319_int; // 0x8ea Mov
	return 2; // 0x8eb Return
}


func_1768()
{
	var_535_int = 10; // 0x6e8 PushI
	KillTimer(var_535_int); // 0x6e9 Func
	return 0; // 0x6eb Return
}


func_1002(var_0_object, var_1_object, var_2_object, var_3_string, var_376_object, var_377_object)
{
	var_0_object = var_377_object; // 0x3eb TMov
	var_1_object = var_376_object; // 0x3ec TMov
	var_3_string = 0; // 0x3ed TMovB
	var_382_int = 1; // 0x3ee PushI
	if(var_382_int == 0) goto Label_1040; // 0x3ef JumpB
	var_383_string = ""; // 0x3f0 PushV
	var_383_string = "Neutral"; // 0x3f1 MovS
	func_1070(var_377_object, var_383_string); // 0x3f2 NEW_2
	var_391_int = 528042; // 0x3f4 PushI
	SetMessage(var_391_int); // 0x3f5 TObjFunc
	ClearReplies(); // 0x3f7 TObjFunc
	var_392_bool = 0; var_393_object = Obj(); // 0x3f9 PushV
	var_393_object = var_1_object; // 0x3fa MovT
	func_2505(var_393_object); // 0x3fb NEW_2
	if(var_392_bool == 0) goto Label_1027; // 0x3fd JumpB
	var_398_int = 528043; // 0x3fe PushI
	var_399_int = 29406; // 0x3ff PushI
	var_400_int = 29405; // 0x400 PushI
	AddReply(var_398_int, var_399_int, var_400_int); // 0x401 TObjFunc
	
Label_1027:
	var_401_int = 528046; // 0x403 PushI
	var_402_int = -1; // 0x404 PushI
	var_403_int = 29408; // 0x405 PushI
	AddReply(var_401_int, var_402_int, var_403_int); // 0x406 TObjFunc
	var_404_int = 541057; // 0x408 PushI
	var_405_int = -1; // 0x409 PushI
	var_406_int = 43161; // 0x40a PushI
	AddReply(var_404_int, var_405_int, var_406_int); // 0x40b TObjFunc
	goto Label_1040; // 0x40d Jump
	
Label_1040:
	var_407_bool = 0; // 0x410 PushV
	func_2392(var_407_bool); // 0x411 NEW_2
	if(var_407_bool == 0) goto Label_1055; // 0x413 JumpB
	
Label_1044:
	lshWaitForAnimEnd(); // 0x414 Func
	var_408_string = var_3_string; // 0x416 PushT
	if(var_408_string == 0) goto Label_1049; // 0x417 JumpB
	goto Label_1054; // 0x418 Jump
	
Label_1054:
	goto Label_1069; // 0x41e Jump
	
Label_1069:
	return 0; // 0x42d Return
	
Label_1049:
	var_409_string = ""; // 0x419 PushV
	var_409_string = var_2_object; // 0x41a MovT
	func_2210(var_409_string); // 0x41b NEW_2
	goto Label_1044; // 0x41d Jump
	
Label_1055:
	var_410_string = "all"; // 0x41f PushS
	var_411_string = "idle"; // 0x420 PushS
	PlayAnimation(var_410_string, var_411_string); // 0x421 Func
	
Label_1059:
	WaitForAnimEnd(); // 0x423 Func
	var_412_string = var_3_string; // 0x425 PushT
	if(var_412_string == 0) goto Label_1064; // 0x426 JumpB
	goto Label_1069; // 0x427 Jump
	
Label_1064:
	var_413_string = "all"; // 0x428 PushS
	var_414_string = "idle"; // 0x429 PushS
	PlayAnimation(var_413_string, var_414_string); // 0x42a Func
	goto Label_1059; // 0x42c Jump
}


func_2284(var_126_int, var_127_int)
{
	var_128_object = Obj(); var_129_object = Obj(); // 0x8ec PushV
	CreateIntVector(var_129_object); // 0x8ed Func
	add(var_126_int); // 0x8ef ObjFunc
	add(var_127_int); // 0x8f1 ObjFunc
	var_130_int = 3; // 0x8f3 PushI
	SendWorldWndMessage(var_130_int, var_129_object); // 0x8f4 Func
	return 2; // 0x8f6 Return
}


func_2543(var_66_object)
{
	var_67_object = Obj(); var_68_object = Obj(); // 0x9ef PushV
	GetDiaryRoot(var_68_object); // 0x9f0 Func
	var_69_bool = var_68_object == 0; // 0x9f2 Not
	if(var_69_bool == 0) goto Label_2553; // 0x9f3 JumpB
	var_70_string = "Can't retrieve diary root"; // 0x9f4 PushS
	Trace(var_70_string); // 0x9f5 Func
	var_66_object = 0; // 0x9f7 MovB
	return 2; // 0x9f8 Return
	
Label_2553:
	var_66_object = var_68_object; // 0x9f9 Mov
	return 2; // 0x9fa Return
}


func_239(var_0_object, var_274_int, var_275_object)
{
	var_277_object = Obj(); var_278_bool = 0; var_279_int = 0; var_280_bool = 0; var_281_object = Obj(); var_282_bool = 0; var_283_int = 0; var_284_bool = 0; // 0xef PushV
	var_0_object = var_275_object; // 0xf0 TMov
	var_285_bool = 0; var_286_object = Obj(); var_287_float = 0; // 0xf1 PushV
	var_286_object = var_275_object; // 0xf2 Mov
	var_287_float = 70.0; // 0xf3 MovF
	func_1987(var_286_object, var_287_float); // 0xf4 NEW_2
	var_288_bool = var_285_bool == 0; // 0xf6 Not
	if(var_288_bool == 0) goto Label_250; // 0xf7 JumpB
	var_274_int = -2; // 0xf8 MovI
	return 8; // 0xf9 Return
	
Label_250:
	CreateDialog(var_281_object); // 0xfa Func
	var_289_int = 0; // 0xfc PushV
	func_2386(var_289_int); // 0xfd NEW_2
	SetNPCName(var_289_int); // 0xff ObjFunc
	var_290_int = 0; // 0x101 PushV
	func_2384(var_290_int); // 0x102 NEW_2
	SetNPCDescription(var_290_int); // 0x104 ObjFunc
	var_291_string = ""; // 0x106 PushV
	func_2388(var_291_string); // 0x107 NEW_2
	SetPhoto(var_291_string); // 0x109 ObjFunc
	var_292_string = ""; // 0x10b PushV
	func_2390(var_292_string); // 0x10c NEW_2
	SetPhoto2(var_292_string); // 0x10e ObjFunc
	var_293_int = 0; // 0x110 PushV
	func_2634(var_293_int); // 0x111 NEW_2
	SetPlayerName(var_293_int); // 0x113 ObjFunc
	var_283_int = -1; // 0x115 MovI
	IsOverrideActive(var_282_bool); // 0x116 Func
	var_294_bool = var_282_bool; // 0x118 Push
	if(var_294_bool == 0) goto Label_284; // 0x119 JumpB
	var_274_int = -2; // 0x11a MovI
	return 8; // 0x11b Return
	
Label_284:
	DoDialog(var_281_object); // 0x11c Func
	var_295_bool = 0; var_296_object = Obj(); // 0x11e PushV
	var_297_object = Obj(); // 0x11f PushV
	func_2263(var_297_object); // 0x120 NEW_2
	var_296_object = var_297_object; // 0x121 Mov
	func_2072(var_295_bool, var_296_object); // 0x123 NEW_2
	var_298_object = Obj(); var_299_object = Obj(); // 0x125 PushV
	var_298_object = var_275_object; // 0x126 Mov
	var_299_object = var_281_object; // 0x127 Mov
	TaskCall(3); // 0x128 TaskCall
	func_320(var_300_object, var_301_object, var_302_string, var_303_bool, var_298_object, var_299_object); // 0x129 NEW_2
	TaskReturn(); // 0x12a TaskReturn
	IsDialogEnd(var_284_bool); // 0x12c ObjFunc
	
Label_302:
	var_348_bool = var_284_bool == 0; // 0x12e Not
	if(var_348_bool == 0) goto Label_309; // 0x12f JumpB
	sync(); // 0x130 Func
	IsDialogEnd(var_284_bool); // 0x132 ObjFunc
	goto Label_302; // 0x134 Jump
	
Label_309:
	var_349_object = Obj(); // 0x135 PushV
	var_349_object = var_275_object; // 0x136 Mov
	func_2055(); // 0x137 NEW_2
	StopDialog(var_281_object); // 0x139 Func
	GetReturnValue(var_283_int); // 0x13b ObjFunc
	var_274_int = var_283_int; // 0x13d Mov
	return 8; // 0x13e Return
}


func_2296(var_116_object, var_117_int)
{
	var_118_int = 0; var_119_int = 0; var_120_bool = 0; var_121_int = 0; var_122_int = 0; var_123_bool = 0; // 0x8f8 PushV
	GetItemID(var_121_int); // 0x8f9 ObjFunc
	var_124_string = "Category"; // 0x8fb PushS
	GetInvItemProperty(var_122_int, var_121_int, var_124_string); // 0x8fc Func
	AddItem(var_123_bool, var_116_object, var_122_int, var_117_int); // 0x8fe ObjFunc
	var_125_bool = var_123_bool == 0; // 0x900 Not
	if(var_125_bool == 0) goto Label_2309; // 0x901 JumpB
	DropItems(var_116_object, var_117_int); // 0x902 ObjFunc
	goto Label_2314; // 0x904 Jump
	
Label_2314:
	return 6; // 0x90a Return
	
Label_2309:
	var_126_int = 0; var_127_int = 0; // 0x905 PushV
	var_126_int = var_121_int; // 0x906 Mov
	var_127_int = var_117_int; // 0x907 Mov
	func_2284(var_126_int, var_127_int); // 0x908 NEW_2
}


func_2556(var_57_bool, var_58_object, var_59_int)
{
	var_60_object = Obj(); var_61_object = Obj(); var_62_int = 0; var_63_object = Obj(); var_64_object = Obj(); var_65_int = 0; // 0x9fc PushV
	var_66_object = Obj(); // 0x9fd PushV
	func_2543(var_66_object); // 0x9fe NEW_2
	var_63_object = var_66_object; // 0x9ff Mov
	Find(var_59_int, var_64_object); // 0xa01 ObjFunc
	var_71_bool = var_64_object == 0; // 0xa03 Not
	if(var_71_bool == 0) goto Label_2571; // 0xa04 JumpB
	var_72_string = "Can't find diary parent with id: "; // 0xa05 PushS
	var_73_int = var_72_string + var_59_int; // 0xa06 Add
	Trace(var_73_int); // 0xa07 Func
	var_57_bool = 0; // 0xa09 MovB
	return 6; // 0xa0a Return
	
Label_2571:
	AddChild(var_58_object); // 0xa0b ObjFunc
	var_74_int = 7; // 0xa0d PushI
	SendWorldWndMessage(var_74_int); // 0xa0e Func
	GetCategory(var_65_int); // 0xa10 ObjFunc
	SetDiarySection(var_65_int); // 0xa12 Func
	var_57_bool = 0; // 0xa14 MovB
	return 6; // 0xa15 Return
}


