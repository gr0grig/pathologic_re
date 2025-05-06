task_0_event_0(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_object, var_11_string, var_12_bool)
{
	func_149(var_11_string, var_12_bool); // 0x8 NEW_2
	var_16_object = Obj(); // 0xa PushV
	var_16_object = var_12_bool; // 0xb Mov
	func_1373(var_16_object); // 0xc NEW_2
	return 0; // 0xe Return
}


task_0_event_26(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, var_5_bool, var_6_bool, var_7_string, var_8_object, var_9_object, var_10_object, var_11_string, var_12_bool)
{
	var_13_string = "cleanup"; // 0x36 PushS
	var_14_bool = var_12_bool == var_13_string; // 0x37 Eq
	if(var_14_bool == 0) goto Label_60; // 0x38 JumpB
	func_33(var_12_bool); // 0x3a NEW_2
	
Label_60:
	return 0; // 0x3c Return
}


task_0_event_6(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool)
{
	var_12_bool = var_6_bool; // 0x3d PushT
	if(var_12_bool == 0) goto Label_66; // 0x3e JumpB
	func_149(var_10_string, var_11_bool); // 0x40 NEW_2
	
Label_66:
	var_16_bool = 0; // 0x42 PushV
	var_16_bool = 0; // 0x43 MovB
	var_17_bool = var_5_bool; // 0x44 PushT
	if(var_17_bool == 0) goto Label_75; // 0x45 JumpB
	var_18_bool = 0; // 0x46 PushV
	func_82(var_18_bool); // 0x47 NEW_2
	if(var_18_bool == 0) goto Label_75; // 0x49 JumpB
	var_16_bool = 1; // 0x4a MovB
	
Label_75:
	if(var_16_bool == 0) goto Label_81; // 0x4b JumpB
	var_19_object = Obj(); // 0x4c PushV
	func_983(var_19_object); // 0x4d NEW_2
	RemoveActor(var_19_object); // 0x4f Func
	
Label_81:
	return 0; // 0x51 Return
}


task_0_event_7(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, var_5_bool, var_6_bool, var_7_int, var_8_object, var_9_object, var_10_object, var_11_string, var_12_bool)
{
	var_13_int = 10; // 0x7f PushI
	var_14_bool = var_12_bool == var_13_int; // 0x80 Eq
	if(var_14_bool == 0) goto Label_148; // 0x81 JumpB
	var_15_bool = 0; // 0x82 PushV
	func_111(var_10_object, var_11_string, var_12_bool, var_15_bool); // 0x83 NEW_2
	if(var_15_bool == 0) goto Label_142; // 0x85 JumpB
	var_28_bool = var_2_bool == 0; // 0x86 Not
	if(var_28_bool == 0) goto Label_141; // 0x87 JumpB
	var_29_object = Obj(); // 0x88 PushV
	var_29_object = var_4_object; // 0x89 MovT
	func_965(var_29_object); // 0x8a NEW_2
	var_2_bool = 1; // 0x8c TMovB
	
Label_141:
	goto Label_148; // 0x8d Jump
	
Label_148:
	return 0; // 0x94 Return
	
Label_142:
	var_36_bool = var_2_bool; // 0x8e PushT
	if(var_36_bool == 0) goto Label_148; // 0x8f JumpB
	var_37_string = "head"; // 0x90 PushS
	UnlookAsync(var_37_string); // 0x91 Func
	var_2_bool = 0; // 0x93 TMovB
}


task_2_event_11(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_int, var_13_int)
{
	var_14_int = 1; // 0x205 PushI
	if(var_14_int == 0) goto Label_835; // 0x206 JumpB
	func_976(); // 0x208 NEW_2
	var_16_int = 31765; // 0x20a PushI
	var_17_bool = var_13_int == var_16_int; // 0x20b Eq
	if(var_17_bool == 0) goto Label_540; // 0x20c JumpB
	var_18_object = Obj(); var_19_object = Obj(); // 0x20d PushV
	var_18_object = var_1_int; // 0x20e MovT
	var_19_object = var_0_int; // 0x20f MovT
	func_1071(); // 0x210 NEW_2
	var_61_object = Obj(); var_62_object = Obj(); // 0x212 PushV
	var_61_object = var_1_int; // 0x213 MovT
	var_62_object = var_0_int; // 0x214 MovT
	func_1116(); // 0x215 NEW_2
	var_65_object = Obj(); var_66_object = Obj(); // 0x217 PushV
	var_65_object = var_1_int; // 0x218 MovT
	var_66_object = var_0_int; // 0x219 MovT
	func_1055(); // 0x21a NEW_2
	
Label_540:
	var_91_int = 31773; // 0x21c PushI
	var_92_bool = var_13_int == var_91_int; // 0x21d Eq
	if(var_92_bool == 0) goto Label_548; // 0x21e JumpB
	var_93_object = Obj(); var_94_object = Obj(); // 0x21f PushV
	var_93_object = var_1_int; // 0x220 MovT
	var_94_object = var_0_int; // 0x221 MovT
	func_1094(); // 0x222 NEW_2
	
Label_548:
	var_109_int = 32854; // 0x224 PushI
	var_110_bool = var_13_int == var_109_int; // 0x225 Eq
	if(var_110_bool == 0) goto Label_556; // 0x226 JumpB
	var_111_object = Obj(); var_112_object = Obj(); // 0x227 PushV
	var_111_object = var_1_int; // 0x228 MovT
	var_112_object = var_0_int; // 0x229 MovT
	func_1094(); // 0x22a NEW_2
	
Label_556:
	var_113_int = 31774; // 0x22c PushI
	var_114_bool = var_13_int == var_113_int; // 0x22d Eq
	if(var_114_bool == 0) goto Label_564; // 0x22e JumpB
	var_115_object = Obj(); var_116_object = Obj(); // 0x22f PushV
	var_115_object = var_1_int; // 0x230 MovT
	var_116_object = var_0_int; // 0x231 MovT
	func_1110(); // 0x232 NEW_2
	
Label_564:
	var_119_int = 31758; // 0x234 PushI
	var_120_bool = var_12_int == var_119_int; // 0x235 Eq
	if(var_120_bool == 0) goto Label_700; // 0x236 JumpB
	var_121_bool = 0; // 0x237 PushV
	var_121_bool = 0; // 0x238 MovB
	var_122_bool = 0; var_123_object = Obj(); // 0x239 PushV
	var_123_object = var_1_int; // 0x23a MovT
	func_1122(var_123_object); // 0x23b NEW_2
	if(var_122_bool == 0) goto Label_580; // 0x23d JumpB
	var_130_bool = 0; var_131_object = Obj(); // 0x23e PushV
	var_131_object = var_1_int; // 0x23f MovT
	func_1215(var_131_object); // 0x240 NEW_2
	if(var_130_bool == 0) goto Label_580; // 0x242 JumpB
	var_121_bool = 1; // 0x243 MovB
	
Label_580:
	if(var_121_bool == 0) goto Label_606; // 0x244 JumpB
	var_136_object = Obj(); var_137_object = Obj(); // 0x245 PushV
	var_136_object = var_1_int; // 0x246 MovT
	var_137_object = var_0_int; // 0x247 MovT
	func_1104(); // 0x248 NEW_2
	var_140_string = ""; // 0x24a PushV
	var_140_string = "Neutral"; // 0x24b MovS
	func_494(var_13_int, var_140_string); // 0x24c NEW_2
	var_157_int = 530386; // 0x24e PushI
	SetMessage(var_157_int); // 0x24f TObjFunc
	ClearReplies(); // 0x251 TObjFunc
	var_158_int = 530387; // 0x253 PushI
	var_159_int = 31760; // 0x254 PushI
	var_160_int = 31759; // 0x255 PushI
	AddReply(var_158_int, var_159_int, var_160_int); // 0x256 TObjFunc
	var_161_int = 531497; // 0x258 PushI
	var_162_int = 31762; // 0x259 PushI
	var_163_int = 32855; // 0x25a PushI
	AddReply(var_161_int, var_162_int, var_163_int); // 0x25b TObjFunc
	return 0; // 0x25d Return
	
Label_606:
	var_164_bool = 0; // 0x25e PushV
	var_164_bool = 0; // 0x25f MovB
	var_165_bool = 0; // 0x260 PushV
	var_165_bool = 0; // 0x261 MovB
	var_166_bool = 0; var_167_object = Obj(); // 0x262 PushV
	var_167_object = var_1_int; // 0x263 MovT
	func_1134(var_167_object); // 0x264 NEW_2
	if(var_166_bool == 0) goto Label_622; // 0x266 JumpB
	var_187_bool = 0; var_188_object = Obj(); // 0x267 PushV
	var_188_object = var_1_int; // 0x268 MovT
	func_1191(var_188_object); // 0x269 NEW_2
	var_193_bool = var_187_bool == 0; // 0x26b Not
	if(var_193_bool == 0) goto Label_622; // 0x26c JumpB
	var_165_bool = 1; // 0x26d MovB
	
Label_622:
	if(var_165_bool == 0) goto Label_630; // 0x26e JumpB
	var_194_bool = 0; var_195_object = Obj(); // 0x26f PushV
	var_195_object = var_1_int; // 0x270 MovT
	func_1203(var_195_object); // 0x271 NEW_2
	var_200_bool = var_194_bool == 0; // 0x273 Not
	if(var_200_bool == 0) goto Label_630; // 0x274 JumpB
	var_164_bool = 1; // 0x275 MovB
	
Label_630:
	if(var_164_bool == 0) goto Label_646; // 0x276 JumpB
	var_201_string = ""; // 0x277 PushV
	var_201_string = "Neutral"; // 0x278 MovS
	func_494(var_13_int, var_201_string); // 0x279 NEW_2
	var_202_int = 530396; // 0x27b PushI
	SetMessage(var_202_int); // 0x27c TObjFunc
	ClearReplies(); // 0x27e TObjFunc
	var_203_int = 530397; // 0x280 PushI
	var_204_int = 31770; // 0x281 PushI
	var_205_int = 31769; // 0x282 PushI
	AddReply(var_203_int, var_204_int, var_205_int); // 0x283 TObjFunc
	return 0; // 0x285 Return
	
Label_646:
	var_206_string = ""; // 0x286 PushV
	var_206_string = "Neutral"; // 0x287 MovS
	func_494(var_13_int, var_206_string); // 0x288 NEW_2
	var_207_int = 530394; // 0x28a PushI
	SetMessage(var_207_int); // 0x28b TObjFunc
	ClearReplies(); // 0x28d TObjFunc
	var_208_bool = 0; // 0x28f PushV
	var_208_bool = 0; // 0x290 MovB
	var_209_bool = 0; // 0x291 PushV
	var_209_bool = 0; // 0x292 MovB
	var_210_bool = 0; // 0x293 PushV
	var_210_bool = 0; // 0x294 MovB
	var_211_bool = 0; var_212_object = Obj(); // 0x295 PushV
	var_212_object = var_1_int; // 0x296 MovT
	func_1179(var_212_object); // 0x297 NEW_2
	if(var_211_bool == 0) goto Label_673; // 0x299 JumpB
	var_217_bool = 0; var_218_object = Obj(); // 0x29a PushV
	var_218_object = var_1_int; // 0x29b MovT
	func_1191(var_218_object); // 0x29c NEW_2
	var_219_bool = var_217_bool == 0; // 0x29e Not
	if(var_219_bool == 0) goto Label_673; // 0x29f JumpB
	var_210_bool = 1; // 0x2a0 MovB
	
Label_673:
	if(var_210_bool == 0) goto Label_681; // 0x2a1 JumpB
	var_220_bool = 0; var_221_object = Obj(); // 0x2a2 PushV
	var_221_object = var_1_int; // 0x2a3 MovT
	func_1203(var_221_object); // 0x2a4 NEW_2
	var_222_bool = var_220_bool == 0; // 0x2a6 Not
	if(var_222_bool == 0) goto Label_681; // 0x2a7 JumpB
	var_209_bool = 1; // 0x2a8 MovB
	
Label_681:
	if(var_209_bool == 0) goto Label_688; // 0x2a9 JumpB
	var_223_bool = 0; var_224_object = Obj(); // 0x2aa PushV
	var_224_object = var_1_int; // 0x2ab MovT
	func_1227(var_224_object); // 0x2ac NEW_2
	if(var_223_bool == 0) goto Label_688; // 0x2ae JumpB
	var_208_bool = 1; // 0x2af MovB
	
Label_688:
	if(var_208_bool == 0) goto Label_694; // 0x2b0 JumpB
	var_229_int = 530402; // 0x2b1 PushI
	var_230_int = 31775; // 0x2b2 PushI
	var_231_int = 31774; // 0x2b3 PushI
	AddReply(var_229_int, var_230_int, var_231_int); // 0x2b4 TObjFunc
	
Label_694:
	var_232_int = 530395; // 0x2b6 PushI
	var_233_int = -1; // 0x2b7 PushI
	var_234_int = 31767; // 0x2b8 PushI
	AddReply(var_232_int, var_233_int, var_234_int); // 0x2b9 TObjFunc
	return 0; // 0x2bb Return
	
Label_700:
	var_235_int = 31775; // 0x2bc PushI
	var_236_bool = var_12_int == var_235_int; // 0x2bd Eq
	if(var_236_bool == 0) goto Label_718; // 0x2be JumpB
	var_237_string = ""; // 0x2bf PushV
	var_237_string = "Neutral"; // 0x2c0 MovS
	func_494(var_13_int, var_237_string); // 0x2c1 NEW_2
	var_238_int = 530403; // 0x2c3 PushI
	SetMessage(var_238_int); // 0x2c4 TObjFunc
	ClearReplies(); // 0x2c6 TObjFunc
	var_239_int = 530404; // 0x2c8 PushI
	var_240_int = -1; // 0x2c9 PushI
	var_241_int = 31776; // 0x2ca PushI
	AddReply(var_239_int, var_240_int, var_241_int); // 0x2cb TObjFunc
	return 0; // 0x2cd Return
	
Label_718:
	var_242_int = 31770; // 0x2ce PushI
	var_243_bool = var_12_int == var_242_int; // 0x2cf Eq
	if(var_243_bool == 0) goto Label_741; // 0x2d0 JumpB
	var_244_string = ""; // 0x2d1 PushV
	var_244_string = "Neutral"; // 0x2d2 MovS
	func_494(var_13_int, var_244_string); // 0x2d3 NEW_2
	var_245_int = 530398; // 0x2d5 PushI
	SetMessage(var_245_int); // 0x2d6 TObjFunc
	ClearReplies(); // 0x2d8 TObjFunc
	var_246_int = 530399; // 0x2da PushI
	var_247_int = 31772; // 0x2db PushI
	var_248_int = 31771; // 0x2dc PushI
	AddReply(var_246_int, var_247_int, var_248_int); // 0x2dd TObjFunc
	var_249_int = 531496; // 0x2df PushI
	var_250_int = -1; // 0x2e0 PushI
	var_251_int = 32854; // 0x2e1 PushI
	AddReply(var_249_int, var_250_int, var_251_int); // 0x2e2 TObjFunc
	return 0; // 0x2e4 Return
	
Label_741:
	var_252_int = 31772; // 0x2e5 PushI
	var_253_bool = var_12_int == var_252_int; // 0x2e6 Eq
	if(var_253_bool == 0) goto Label_759; // 0x2e7 JumpB
	var_254_string = ""; // 0x2e8 PushV
	var_254_string = "Neutral"; // 0x2e9 MovS
	func_494(var_13_int, var_254_string); // 0x2ea NEW_2
	var_255_int = 530400; // 0x2ec PushI
	SetMessage(var_255_int); // 0x2ed TObjFunc
	ClearReplies(); // 0x2ef TObjFunc
	var_256_int = 530401; // 0x2f1 PushI
	var_257_int = -1; // 0x2f2 PushI
	var_258_int = 31773; // 0x2f3 PushI
	AddReply(var_256_int, var_257_int, var_258_int); // 0x2f4 TObjFunc
	return 0; // 0x2f6 Return
	
Label_759:
	var_259_int = 31760; // 0x2f7 PushI
	var_260_bool = var_12_int == var_259_int; // 0x2f8 Eq
	if(var_260_bool == 0) goto Label_782; // 0x2f9 JumpB
	var_261_string = ""; // 0x2fa PushV
	var_261_string = "Neutral"; // 0x2fb MovS
	func_494(var_13_int, var_261_string); // 0x2fc NEW_2
	var_262_int = 530388; // 0x2fe PushI
	SetMessage(var_262_int); // 0x2ff TObjFunc
	ClearReplies(); // 0x301 TObjFunc
	var_263_int = 530389; // 0x303 PushI
	var_264_int = 31762; // 0x304 PushI
	var_265_int = 31761; // 0x305 PushI
	AddReply(var_263_int, var_264_int, var_265_int); // 0x306 TObjFunc
	var_266_int = 531498; // 0x308 PushI
	var_267_int = 31762; // 0x309 PushI
	var_268_int = 32857; // 0x30a PushI
	AddReply(var_266_int, var_267_int, var_268_int); // 0x30b TObjFunc
	return 0; // 0x30d Return
	
Label_782:
	var_269_int = 31762; // 0x30e PushI
	var_270_bool = var_12_int == var_269_int; // 0x30f Eq
	if(var_270_bool == 0) goto Label_805; // 0x310 JumpB
	var_271_string = ""; // 0x311 PushV
	var_271_string = "Neutral"; // 0x312 MovS
	func_494(var_13_int, var_271_string); // 0x313 NEW_2
	var_272_int = 530390; // 0x315 PushI
	SetMessage(var_272_int); // 0x316 TObjFunc
	ClearReplies(); // 0x318 TObjFunc
	var_273_int = 530391; // 0x31a PushI
	var_274_int = 31764; // 0x31b PushI
	var_275_int = 31763; // 0x31c PushI
	AddReply(var_273_int, var_274_int, var_275_int); // 0x31d TObjFunc
	var_276_int = 531499; // 0x31f PushI
	var_277_int = 31764; // 0x320 PushI
	var_278_int = 32859; // 0x321 PushI
	AddReply(var_276_int, var_277_int, var_278_int); // 0x322 TObjFunc
	return 0; // 0x324 Return
	
Label_805:
	var_279_int = 31764; // 0x325 PushI
	var_280_bool = var_12_int == var_279_int; // 0x326 Eq
	if(var_280_bool == 0) goto Label_823; // 0x327 JumpB
	var_281_string = ""; // 0x328 PushV
	var_281_string = "Neutral"; // 0x329 MovS
	func_494(var_13_int, var_281_string); // 0x32a NEW_2
	var_282_int = 530392; // 0x32c PushI
	SetMessage(var_282_int); // 0x32d TObjFunc
	ClearReplies(); // 0x32f TObjFunc
	var_283_int = 530393; // 0x331 PushI
	var_284_int = -1; // 0x332 PushI
	var_285_int = 31765; // 0x333 PushI
	AddReply(var_283_int, var_284_int, var_285_int); // 0x334 TObjFunc
	return 0; // 0x336 Return
	
Label_823:
	var_3_bool = 1; // 0x337 TMovB
	var_286_bool = 0; // 0x338 PushV
	func_1053(var_286_bool); // 0x339 NEW_2
	if(var_286_bool == 0) goto Label_831; // 0x33b JumpB
	lshStopAnimation(); // 0x33c Func
	goto Label_833; // 0x33e Jump
	
Label_833:
	return 0; // 0x341 Return
	
Label_831:
	StopAnimation(); // 0x33f Func
	
Label_835:
	return 0; // 0x343 Return
}


main(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool)
{
	var_12_float = 0; var_13_float = 0; // 0x0 PushV
	var_12_float = 300; // 0x1 MovI
	var_13_float = 100; // 0x2 MovI
	func_15(var_11_bool, var_12_float, var_13_float); // 0x3 NEW_2
	return 0; // 0x5 Return
}


func_1028(var_46_int)
{
	var_47_int = 0; var_48_bool = 0; var_49_int = 0; var_50_bool = 0; // 0x404 PushV
	var_49_int = 0; // 0x405 MovI
	
Label_1030:
	var_51_string = "all"; // 0x406 PushS
	var_52_string = ""; var_53_int = 0; // 0x407 PushV
	var_53_int = var_49_int; // 0x408 Mov
	func_1021(var_52_string, var_53_int); // 0x409 NEW_2
	HasAnimation(var_50_bool, var_51_string, var_52_string); // 0x40b Func
	var_57_bool = var_50_bool == 0; // 0x40d Not
	if(var_57_bool == 0) goto Label_1040; // 0x40e JumpB
	goto Label_1043; // 0x40f Jump
	
Label_1043:
	var_46_int = var_49_int; // 0x413 Mov
	return 4; // 0x414 Return
	
Label_1040:
	var_58_int = 1; // 0x410 PushI
	var_49_int = var_49_int + var_58_int; // 0x411 Add2
	goto Label_1030; // 0x412 Jump
}


func_15(var_6_bool, var_12_float, var_13_float)
{
	var_14_float = 0; var_15_bool = 0; var_16_float = 0; var_17_bool = 0; // 0xf PushV
	var_6_bool = 0; // 0x10 TMovB
	
Label_17:
	var_18_int = 3; // 0x11 PushI
	rand(var_16_float, var_18_int); // 0x12 Func
	var_19_int = 3; // 0x14 PushI
	var_20_int = var_16_float + var_19_int; // 0x15 Add
	Sleep(var_20_int, var_17_bool); // 0x16 Func
	var_6_bool = 1; // 0x18 TMovB
	var_21_float = 0; var_22_float = 0; // 0x19 PushV
	var_21_float = var_12_float; // 0x1a Mov
	var_22_float = var_13_float; // 0x1b Mov
	func_84(var_13_float, var_14_float, var_15_bool, var_16_float, var_17_bool, var_21_float, var_22_float); // 0x1c NEW_2
	var_6_bool = 0; // 0x1e TMovB
	goto Label_17; // 0x1f Jump
}


func_1045(var_76_int)
{
	var_76_int = 521048; // 0x415 MovI
	return 0; // 0x416 Return
}


func_149(var_2_bool, var_3_bool)
{
	func_244(); // 0x96 NEW_2
	var_13_int = 10; // 0x98 PushI
	KillTimer(var_13_int); // 0x99 Func
	var_14_bool = var_2_bool; // 0x9b PushT
	if(var_14_bool == 0) goto Label_161; // 0x9c JumpB
	var_15_string = "head"; // 0x9d PushS
	UnlookAsync(var_15_string); // 0x9e Func
	var_2_bool = 0; // 0xa0 TMovB
	
Label_161:
	var_3_bool = 1; // 0xa1 TMovB
	return 0; // 0xa2 Return
}


func_1047(var_75_int)
{
	var_75_int = 521047; // 0x417 MovI
	return 0; // 0x418 Return
}


func_917()
{
	var_229_bool = 0; var_230_bool = 0; // 0x395 PushV
	CameraSwitchToNormal(); // 0x396 Func
	var_231_bool = 0; // 0x398 PushV
	func_1053(var_231_bool); // 0x399 NEW_2
	if(var_231_bool == 0) goto Label_925; // 0x39b JumpB
	goto Label_933; // 0x39c Jump
	
Label_933:
	return 2; // 0x3a5 Return
	
Label_925:
	var_232_string = "head"; // 0x39d PushS
	HasAnimationTrack(var_230_bool, var_232_string); // 0x39e Func
	var_233_bool = var_230_bool; // 0x3a0 Push
	if(var_233_bool == 0) goto Label_933; // 0x3a1 JumpB
	var_234_string = "head"; // 0x3a2 PushS
	UnlookAsync(var_234_string); // 0x3a3 Func
}


func_1049(var_77_string)
{
	var_77_string = "ui/NPC_Citizen2.png"; // 0x419 MovS
	return 0; // 0x41a Return
}


func_1306(var_24_object)
{
	var_25_object = Obj(); var_26_object = Obj(); var_27_object = Obj(); var_28_object = Obj(); // 0x51a PushV
	GetMainOutdoorScene(var_27_object); // 0x51b Func
	var_29_bool = var_27_object == 0; // 0x51d NullEq
	if(var_29_bool == 0) goto Label_1317; // 0x51e JumpB
	var_30_string = "Can't find main outdoor scene"; // 0x51f PushS
	Trace(var_30_string); // 0x520 Func
	var_28_object = 0; // 0x522 SetNull
	var_24_object = var_28_object; // 0x523 Mov
	return 4; // 0x524 Return
	
Label_1317:
	GetMap(var_28_object); // 0x525 ObjFunc
	var_24_object = var_28_object; // 0x527 Mov
	return 4; // 0x528 Return
}


func_1179(var_211_bool)
{
	var_213_int = 0; var_214_string = ""; // 0x49c PushV
	var_214_string = "b10q04NotkinTalk"; // 0x49d MovS
	func_999(var_213_int, var_214_string); // 0x49e NEW_2
	var_215_int = 9; // 0x4a0 PushI
	var_216_bool = var_213_int == var_215_int; // 0x4a1 Eq
	if(var_216_bool == 0) goto Label_1189; // 0x4a2 JumpB
	var_211_bool = 1; // 0x4a3 MovB
	return 0; // 0x4a4 Return
	
Label_1189:
	var_211_bool = 0; // 0x4a5 MovB
	return 0; // 0x4a6 Return
}


func_1051(var_78_string)
{
	var_78_string = "ui/NPC_Citizen2_b.png"; // 0x41b MovS
	return 0; // 0x41c Return
}


func_1053(var_15_bool)
{
	var_15_bool = 0; // 0x41d MovB
	return 0; // 0x41e Return
}


func_1055()
{
	var_67_object = Obj(); var_68_string = ""; var_69_float = 0; // 0x420 PushV
	var_70_object = Obj(); // 0x421 PushV
	func_1306(var_70_object); // 0x422 NEW_2
	var_67_object = var_70_object; // 0x423 Mov
	var_68_string = "pt_map_notkin"; // 0x425 MovS
	var_69_float = 2; // 0x426 MovI
	func_1323(var_67_object, var_68_string, var_69_float); // 0x427 NEW_2
	var_90_object = Obj(); // 0x429 PushV
	func_1306(var_90_object); // 0x42a NEW_2
	ShowMap(var_90_object); // 0x42c ObjFunc
	return 0; // 0x42e Return
}


func_33(var_5_bool)
{
	var_5_bool = 1; // 0x21 TMovB
	var_15_bool = 0; // 0x22 PushV
	var_15_bool = 0; // 0x23 MovB
	var_16_bool = 0; // 0x24 PushV
	func_844(var_16_bool); // 0x25 NEW_2
	var_19_bool = var_16_bool == 0; // 0x27 Not
	if(var_19_bool == 0) goto Label_46; // 0x28 JumpB
	var_20_bool = 0; // 0x29 PushV
	func_82(var_20_bool); // 0x2a NEW_2
	if(var_20_bool == 0) goto Label_46; // 0x2c JumpB
	var_15_bool = 1; // 0x2d MovB
	
Label_46:
	if(var_15_bool == 0) goto Label_52; // 0x2e JumpB
	var_21_object = Obj(); // 0x2f PushV
	func_983(var_21_object); // 0x30 NEW_2
	RemoveActor(var_21_object); // 0x32 Func
	
Label_52:
	return 0; // 0x34 Return
}


func_163()
{
	var_30_int = 0; var_31_int = 0; var_32_int = 0; var_33_int = 0; var_34_bool = 0; var_35_float = 0; var_36_bool = 0; var_37_int = 0; var_38_int = 0; var_39_int = 0; var_40_int = 0; var_41_bool = 0; var_42_float = 0; var_43_bool = 0; // 0xa3 PushV
	WaitForAnimEnd(); // 0xa4 Func
	var_44_bool = 0; // 0xa6 PushV
	func_844(var_44_bool); // 0xa7 NEW_2
	var_45_bool = var_44_bool == 0; // 0xa9 Not
	if(var_45_bool == 0) goto Label_172; // 0xaa JumpB
	return 14; // 0xab Return
	
Label_172:
	var_46_int = 0; // 0xac PushV
	func_1028(var_46_int); // 0xad NEW_2
	var_37_int = var_46_int; // 0xae Mov
	var_38_int = 0; // 0xb0 MovI
	
Label_177:
	var_59_bool = 0; // 0xb1 PushV
	var_59_bool = 0; // 0xb2 MovB
	var_60_int = 5; // 0xb3 PushI
	var_61_bool = var_38_int < var_60_int; // 0xb4 LT
	if(var_61_bool == 0) goto Label_187; // 0xb5 JumpB
	var_62_bool = 0; // 0xb6 PushV
	func_844(var_62_bool); // 0xb7 NEW_2
	if(var_62_bool == 0) goto Label_187; // 0xb9 JumpB
	var_59_bool = 1; // 0xba MovB
	
Label_187:
	if(var_59_bool == 0) goto Label_239; // 0xbb JumpB
	var_63_int = 3; // 0xbc PushI
	irand(var_39_int, var_63_int); // 0xbd Func
	var_64_int = 0; // 0xbf PushI
	var_65_bool = var_39_int == var_64_int; // 0xc0 Eq
	if(var_65_bool == 0) goto Label_211; // 0xc1 JumpB
	var_66_int = var_37_int; // 0xc2 Push
	if(var_66_int == 0) goto Label_210; // 0xc3 JumpB
	irand(var_40_int, var_37_int); // 0xc4 Func
	var_67_string = "all"; // 0xc6 PushS
	var_68_string = ""; var_69_int = 0; // 0xc7 PushV
	var_69_int = var_40_int; // 0xc8 Mov
	func_1021(var_68_string, var_69_int); // 0xc9 NEW_2
	PlayAnimation(var_67_string, var_68_string); // 0xcb Func
	WaitForAnimEnd(var_41_bool); // 0xcd Func
	var_70_bool = var_41_bool == 0; // 0xcf Not
	if(var_70_bool == 0) goto Label_210; // 0xd0 JumpB
	goto Label_239; // 0xd1 Jump
	
Label_239:
	ResetAAS(); // 0xef Func
	return 14; // 0xf1 Return
	
Label_210:
	goto Label_228; // 0xd2 Jump
	
Label_228:
	var_71_bool = 0; // 0xe4 PushV
	func_242(var_71_bool); // 0xe5 NEW_2
	var_72_bool = var_71_bool == 0; // 0xe7 Not
	if(var_72_bool == 0) goto Label_234; // 0xe8 JumpB
	goto Label_239; // 0xe9 Jump
	
Label_234:
	ResetAAS(); // 0xea Func
	var_73_int = 1; // 0xec PushI
	var_38_int = var_38_int + var_73_int; // 0xed Add2
	goto Label_177; // 0xee Jump
	
Label_211:
	var_74_int = 1; // 0xd3 PushI
	var_75_bool = var_39_int == var_74_int; // 0xd4 Eq
	if(var_75_bool == 0) goto Label_225; // 0xd5 JumpB
	var_76_int = 4; // 0xd6 PushI
	rand(var_42_float, var_76_int); // 0xd7 Func
	var_77_int = 1; // 0xd9 PushI
	var_78_int = var_42_float + var_77_int; // 0xda Add
	Sleep(var_78_int, var_43_bool); // 0xdb Func
	var_79_bool = var_43_bool == 0; // 0xdd Not
	if(var_79_bool == 0) goto Label_224; // 0xde JumpB
	goto Label_239; // 0xdf Jump
	
Label_224:
	goto Label_228; // 0xe0 Jump
	
Label_225:
	var_80_int = var_38_int; // 0xe1 Push
	if(var_80_int == 0) goto Label_228; // 0xe2 JumpB
	goto Label_239; // 0xe3 Jump
}


func_934(var_140_string)
{
	var_141_bool = 0; var_142_float = 0; var_143_float = 0; var_144_bool = 0; var_145_float = 0; var_146_float = 0; // 0x3a6 PushV
	lshHasAnimation(var_144_bool, var_140_string); // 0x3a7 Func
	var_147_bool = var_144_bool; // 0x3a9 Push
	if(var_147_bool == 0) goto Label_945; // 0x3aa JumpB
	lshGetAnimTimes(var_140_string, var_145_float, var_146_float); // 0x3ab Func
	var_148_bool = 0; // 0x3ad PushB
	lshPlayAnimation(var_145_float, var_146_float, var_148_bool); // 0x3ae Func
	goto Label_949; // 0x3b0 Jump
	
Label_949:
	return 6; // 0x3b5 Return
	
Label_945:
	var_149_string = "Can't find lsh animation : "; // 0x3b1 PushS
	var_150_int = var_149_string + var_140_string; // 0x3b2 Add
	Trace(var_150_int); // 0x3b3 Func
}


func_1191(var_187_bool)
{
	var_189_int = 0; var_190_string = ""; // 0x4a8 PushV
	var_190_string = "b10q04"; // 0x4a9 MovS
	func_999(var_189_int, var_190_string); // 0x4aa NEW_2
	var_191_int = 1000; // 0x4ac PushI
	var_192_bool = var_189_int == var_191_int; // 0x4ad Eq
	if(var_192_bool == 0) goto Label_1201; // 0x4ae JumpB
	var_187_bool = 1; // 0x4af MovB
	return 0; // 0x4b0 Return
	
Label_1201:
	var_187_bool = 0; // 0x4b1 MovB
	return 0; // 0x4b2 Return
}


func_1323(var_67_object, var_68_string, var_69_float)
{
	var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); var_73_object = Obj(); var_74_bool = 0; var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0); var_77_object = Obj(); var_78_bool = 0; // 0x52b PushV
	GetMainOutdoorScene(var_77_object); // 0x52c Func
	var_79_bool = var_77_object == 0; // 0x52e NullEq
	if(var_79_bool == 0) goto Label_1332; // 0x52f JumpB
	var_80_string = "Can't find main outdoor scene"; // 0x530 PushS
	Trace(var_80_string); // 0x531 Func
	return 8; // 0x533 Return
	
Label_1332:
	GetLocator(var_68_string, var_78_bool, var_75_cvector, var_76_cvector); // 0x534 ObjFunc
	var_81_bool = var_78_bool == 0; // 0x536 Not
	if(var_81_bool == 0) goto Label_1342; // 0x537 JumpB
	var_82_string = "Warning: outdoor scene locator "; // 0x538 PushS
	var_83_int = var_82_string + var_68_string; // 0x539 Add
	var_84_string = " doesnt exist"; // 0x53a PushS
	var_85_int = var_83_int + var_84_string; // 0x53b Add
	Trace(var_85_int); // 0x53c Func
	
Label_1342:
	GetMap(var_67_object); // 0x53e ObjFunc
	var_86_bool = var_67_object == 0; // 0x540 NullEq
	if(var_86_bool == 0) goto Label_1350; // 0x541 JumpB
	var_87_string = "Can't find map"; // 0x542 PushS
	Trace(var_87_string); // 0x543 Func
	return 8; // 0x545 Return
	
Label_1350:
	var_88_float = GetByIndex(var_75_cvector, 0); // 0x546 PushE
	var_89_float = GetByIndex(var_75_cvector, 2); // 0x547 PushE
	SetMapParams(var_88_float, var_89_float, var_69_float); // 0x548 ObjFunc
	return 8; // 0x54a Return
}


func_1071()
{
	var_20_object = Obj(); var_21_object = Obj(); // 0x42f PushV
	var_22_string = "b10q04NotkinTalk"; // 0x430 PushS
	var_23_int = 1; // 0x431 PushI
	SetVariable(var_22_string, var_23_int); // 0x432 Func
	var_24_object = Obj(); // 0x434 PushV
	func_1306(var_24_object); // 0x435 NEW_2
	var_21_object = var_24_object; // 0x436 Mov
	var_31_string = "b10q04MorlokGotoNotkin"; // 0x438 PushS
	var_32_string = "pt_map_notkin"; // 0x439 PushS
	var_33_int = 0; // 0x43a PushI
	var_34_int = 530549; // 0x43b PushI
	var_35_float = 0; // 0x43c PushV
	func_1016(var_35_float); // 0x43d NEW_2
	AddMark(var_31_string, var_32_string, var_33_int, var_34_int, var_35_float); // 0x43f ObjFunc
	func_1252(); // 0x442 NEW_2
	return 2; // 0x444 Return
}


func_1203(var_194_bool)
{
	var_196_int = 0; var_197_string = ""; // 0x4b4 PushV
	var_197_string = "b10q04"; // 0x4b5 MovS
	func_999(var_196_int, var_197_string); // 0x4b6 NEW_2
	var_198_int = -1; // 0x4b8 PushI
	var_199_bool = var_196_int == var_198_int; // 0x4b9 Eq
	if(var_199_bool == 0) goto Label_1213; // 0x4ba JumpB
	var_194_bool = 1; // 0x4bb MovB
	return 0; // 0x4bc Return
	
Label_1213:
	var_194_bool = 0; // 0x4bd MovB
	return 0; // 0x4be Return
}


func_950(var_144_string, var_145_bool)
{
	var_148_bool = 0; var_149_float = 0; var_150_float = 0; var_151_bool = 0; var_152_float = 0; var_153_float = 0; // 0x3b6 PushV
	lshHasAnimation(var_151_bool, var_144_string); // 0x3b7 Func
	var_154_bool = var_151_bool; // 0x3b9 Push
	if(var_154_bool == 0) goto Label_960; // 0x3ba JumpB
	lshGetAnimTimes(var_144_string, var_152_float, var_153_float); // 0x3bb Func
	lshPlayAnimation(var_152_float, var_153_float, var_145_bool); // 0x3bd Func
	goto Label_964; // 0x3bf Jump
	
Label_964:
	return 6; // 0x3c4 Return
	
Label_960:
	var_155_string = "Can't find lsh animation : "; // 0x3c0 PushS
	var_156_int = var_155_string + var_144_string; // 0x3c1 Add
	Trace(var_156_int); // 0x3c2 Func
}


func_1215(var_130_bool)
{
	var_132_int = 0; var_133_string = ""; // 0x4c0 PushV
	var_133_string = "oob10MorlokMain1"; // 0x4c1 MovS
	func_999(var_132_int, var_133_string); // 0x4c2 NEW_2
	var_134_int = 0; // 0x4c4 PushI
	var_135_bool = var_132_int == var_134_int; // 0x4c5 Eq
	if(var_135_bool == 0) goto Label_1225; // 0x4c6 JumpB
	var_130_bool = 1; // 0x4c7 MovB
	return 0; // 0x4c8 Return
	
Label_1225:
	var_130_bool = 0; // 0x4c9 MovB
	return 0; // 0x4ca Return
}


func_323(var_0_int, var_1_int, var_2_bool, var_3_bool, var_88_object, var_89_object)
{
	var_0_int = var_89_object; // 0x144 TMov
	var_1_int = var_88_object; // 0x145 TMov
	var_3_bool = 0; // 0x146 TMovB
	var_94_int = 1; // 0x147 PushI
	if(var_94_int == 0) goto Label_464; // 0x148 JumpB
	var_95_bool = 0; // 0x149 PushV
	var_95_bool = 0; // 0x14a MovB
	var_96_bool = 0; var_97_object = Obj(); // 0x14b PushV
	var_97_object = var_1_int; // 0x14c MovT
	func_1122(var_97_object); // 0x14d NEW_2
	if(var_96_bool == 0) goto Label_342; // 0x14f JumpB
	var_104_bool = 0; var_105_object = Obj(); // 0x150 PushV
	var_105_object = var_1_int; // 0x151 MovT
	func_1215(var_105_object); // 0x152 NEW_2
	if(var_104_bool == 0) goto Label_342; // 0x154 JumpB
	var_95_bool = 1; // 0x155 MovB
	
Label_342:
	if(var_95_bool == 0) goto Label_368; // 0x156 JumpB
	var_110_object = Obj(); var_111_object = Obj(); // 0x157 PushV
	var_110_object = var_1_int; // 0x158 MovT
	var_111_object = var_0_int; // 0x159 MovT
	func_1104(); // 0x15a NEW_2
	var_114_string = ""; // 0x15c PushV
	var_114_string = "Neutral"; // 0x15d MovS
	func_494(var_89_object, var_114_string); // 0x15e NEW_2
	var_131_int = 530386; // 0x160 PushI
	SetMessage(var_131_int); // 0x161 TObjFunc
	ClearReplies(); // 0x163 TObjFunc
	var_132_int = 530387; // 0x165 PushI
	var_133_int = 31760; // 0x166 PushI
	var_134_int = 31759; // 0x167 PushI
	AddReply(var_132_int, var_133_int, var_134_int); // 0x168 TObjFunc
	var_135_int = 531497; // 0x16a PushI
	var_136_int = 31762; // 0x16b PushI
	var_137_int = 32855; // 0x16c PushI
	AddReply(var_135_int, var_136_int, var_137_int); // 0x16d TObjFunc
	goto Label_464; // 0x16f Jump
	
Label_464:
	var_138_bool = 0; // 0x1d0 PushV
	func_1053(var_138_bool); // 0x1d1 NEW_2
	if(var_138_bool == 0) goto Label_479; // 0x1d3 JumpB
	
Label_468:
	lshWaitForAnimEnd(); // 0x1d4 Func
	var_139_bool = var_3_bool; // 0x1d6 PushT
	if(var_139_bool == 0) goto Label_473; // 0x1d7 JumpB
	goto Label_478; // 0x1d8 Jump
	
Label_478:
	goto Label_493; // 0x1de Jump
	
Label_493:
	return 0; // 0x1ed Return
	
Label_473:
	var_140_string = ""; // 0x1d9 PushV
	var_140_string = var_2_bool; // 0x1da MovT
	func_934(var_140_string); // 0x1db NEW_2
	goto Label_468; // 0x1dd Jump
	
Label_479:
	var_151_string = "all"; // 0x1df PushS
	var_152_string = "idle"; // 0x1e0 PushS
	PlayAnimation(var_151_string, var_152_string); // 0x1e1 Func
	
Label_483:
	WaitForAnimEnd(); // 0x1e3 Func
	var_153_bool = var_3_bool; // 0x1e5 PushT
	if(var_153_bool == 0) goto Label_488; // 0x1e6 JumpB
	goto Label_493; // 0x1e7 Jump
	
Label_488:
	var_154_string = "all"; // 0x1e8 PushS
	var_155_string = "idle"; // 0x1e9 PushS
	PlayAnimation(var_154_string, var_155_string); // 0x1ea Func
	goto Label_483; // 0x1ec Jump
	
Label_368:
	var_156_bool = 0; // 0x170 PushV
	var_156_bool = 0; // 0x171 MovB
	var_157_bool = 0; // 0x172 PushV
	var_157_bool = 0; // 0x173 MovB
	var_158_bool = 0; var_159_object = Obj(); // 0x174 PushV
	var_159_object = var_1_int; // 0x175 MovT
	func_1134(var_159_object); // 0x176 NEW_2
	if(var_158_bool == 0) goto Label_384; // 0x178 JumpB
	var_179_bool = 0; var_180_object = Obj(); // 0x179 PushV
	var_180_object = var_1_int; // 0x17a MovT
	func_1191(var_180_object); // 0x17b NEW_2
	var_185_bool = var_179_bool == 0; // 0x17d Not
	if(var_185_bool == 0) goto Label_384; // 0x17e JumpB
	var_157_bool = 1; // 0x17f MovB
	
Label_384:
	if(var_157_bool == 0) goto Label_392; // 0x180 JumpB
	var_186_bool = 0; var_187_object = Obj(); // 0x181 PushV
	var_187_object = var_1_int; // 0x182 MovT
	func_1203(var_187_object); // 0x183 NEW_2
	var_192_bool = var_186_bool == 0; // 0x185 Not
	if(var_192_bool == 0) goto Label_392; // 0x186 JumpB
	var_156_bool = 1; // 0x187 MovB
	
Label_392:
	if(var_156_bool == 0) goto Label_408; // 0x188 JumpB
	var_193_string = ""; // 0x189 PushV
	var_193_string = "Neutral"; // 0x18a MovS
	func_494(var_89_object, var_193_string); // 0x18b NEW_2
	var_194_int = 530396; // 0x18d PushI
	SetMessage(var_194_int); // 0x18e TObjFunc
	ClearReplies(); // 0x190 TObjFunc
	var_195_int = 530397; // 0x192 PushI
	var_196_int = 31770; // 0x193 PushI
	var_197_int = 31769; // 0x194 PushI
	AddReply(var_195_int, var_196_int, var_197_int); // 0x195 TObjFunc
	goto Label_464; // 0x197 Jump
	
Label_408:
	var_198_string = ""; // 0x198 PushV
	var_198_string = "Neutral"; // 0x199 MovS
	func_494(var_89_object, var_198_string); // 0x19a NEW_2
	var_199_int = 530394; // 0x19c PushI
	SetMessage(var_199_int); // 0x19d TObjFunc
	ClearReplies(); // 0x19f TObjFunc
	var_200_bool = 0; // 0x1a1 PushV
	var_200_bool = 0; // 0x1a2 MovB
	var_201_bool = 0; // 0x1a3 PushV
	var_201_bool = 0; // 0x1a4 MovB
	var_202_bool = 0; // 0x1a5 PushV
	var_202_bool = 0; // 0x1a6 MovB
	var_203_bool = 0; var_204_object = Obj(); // 0x1a7 PushV
	var_204_object = var_1_int; // 0x1a8 MovT
	func_1179(var_204_object); // 0x1a9 NEW_2
	if(var_203_bool == 0) goto Label_435; // 0x1ab JumpB
	var_209_bool = 0; var_210_object = Obj(); // 0x1ac PushV
	var_210_object = var_1_int; // 0x1ad MovT
	func_1191(var_210_object); // 0x1ae NEW_2
	var_211_bool = var_209_bool == 0; // 0x1b0 Not
	if(var_211_bool == 0) goto Label_435; // 0x1b1 JumpB
	var_202_bool = 1; // 0x1b2 MovB
	
Label_435:
	if(var_202_bool == 0) goto Label_443; // 0x1b3 JumpB
	var_212_bool = 0; var_213_object = Obj(); // 0x1b4 PushV
	var_213_object = var_1_int; // 0x1b5 MovT
	func_1203(var_213_object); // 0x1b6 NEW_2
	var_214_bool = var_212_bool == 0; // 0x1b8 Not
	if(var_214_bool == 0) goto Label_443; // 0x1b9 JumpB
	var_201_bool = 1; // 0x1ba MovB
	
Label_443:
	if(var_201_bool == 0) goto Label_450; // 0x1bb JumpB
	var_215_bool = 0; var_216_object = Obj(); // 0x1bc PushV
	var_216_object = var_1_int; // 0x1bd MovT
	func_1227(var_216_object); // 0x1be NEW_2
	if(var_215_bool == 0) goto Label_450; // 0x1c0 JumpB
	var_200_bool = 1; // 0x1c1 MovB
	
Label_450:
	if(var_200_bool == 0) goto Label_456; // 0x1c2 JumpB
	var_221_int = 530402; // 0x1c3 PushI
	var_222_int = 31775; // 0x1c4 PushI
	var_223_int = 31774; // 0x1c5 PushI
	AddReply(var_221_int, var_222_int, var_223_int); // 0x1c6 TObjFunc
	
Label_456:
	var_224_int = 530395; // 0x1c8 PushI
	var_225_int = -1; // 0x1c9 PushI
	var_226_int = 31767; // 0x1ca PushI
	AddReply(var_224_int, var_225_int, var_226_int); // 0x1cb TObjFunc
	goto Label_464; // 0x1cd Jump
}


func_836(var_19_float)
{
	var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); // 0x344 PushV
	GetPosition(var_24_cvector); // 0x345 Func
	GetPosition(var_25_cvector); // 0x347 ObjFunc
	var_26_cvector = var_25_cvector - var_24_cvector; // 0x349 Sub2
	var_19_float = var_26_cvector | var_26_cvector; // 0x34a Or2
	return 6; // 0x34b Return
}


func_965(var_29_object)
{
	var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_float = 0; var_33_cvector = CVector(0,0,0); // 0x3c5 PushV
	GetEyesHeight(var_32_float); // 0x3c6 ObjFunc
	var_33_cvector = CVector(0.0, 0.0, 0.0); // 0x3c8 MovV
	var_34_float = GetByIndex(var_33_cvector, 1); // 0x3c9 PushE
	var_34_float = var_32_float; // 0x3ca Mov
	SetByIndex(var_33_cvector, 1) = var_34_float; // 0x3cb PopE
	var_35_string = "head"; // 0x3cc PushS
	LookAsync(var_29_object, var_35_string, var_33_cvector); // 0x3cd Func
	return 4; // 0x3cf Return
}


func_1094()
{
	func_1239(); // 0x448 NEW_2
	var_103_bool = 0; var_104_string = ""; var_105_string = ""; // 0x44a PushV
	var_104_string = "quest_b10_04"; // 0x44b MovS
	var_105_string = "completed"; // 0x44c MovS
	func_1004(var_103_bool, var_104_string, var_105_string); // 0x44d NEW_2
	return 0; // 0x44f Return
}


func_1227(var_223_bool)
{
	var_225_int = 0; var_226_string = ""; // 0x4cc PushV
	var_226_string = "oob10MorlokMain2"; // 0x4cd MovS
	func_999(var_225_int, var_226_string); // 0x4ce NEW_2
	var_227_int = 0; // 0x4d0 PushI
	var_228_bool = var_225_int == var_227_int; // 0x4d1 Eq
	if(var_228_bool == 0) goto Label_1237; // 0x4d2 JumpB
	var_223_bool = 1; // 0x4d3 MovB
	return 0; // 0x4d4 Return
	
Label_1237:
	var_223_bool = 0; // 0x4d5 MovB
	return 0; // 0x4d6 Return
}


func_844(var_23_bool)
{
	var_24_bool = 0; var_25_bool = 0; // 0x34c PushV
	IsLoaded(var_25_bool); // 0x34d Func
	var_23_bool = var_25_bool; // 0x34f Mov
	return 2; // 0x350 Return
}


func_1356(var_79_int)
{
	var_80_int = 0; var_81_int = 0; // 0x54c PushV
	var_82_string = "branch"; // 0x54d PushS
	GetVariable(var_82_string, var_81_int); // 0x54e Func
	var_83_int = 0; // 0x550 PushI
	var_84_bool = var_81_int == var_83_int; // 0x551 Eq
	if(var_84_bool == 0) goto Label_1366; // 0x552 JumpB
	var_79_int = 1; // 0x553 MovI
	return 2; // 0x554 Return
	
Label_1366:
	var_85_int = 1; // 0x556 PushI
	var_86_bool = var_81_int == var_85_int; // 0x557 Eq
	if(var_86_bool == 0) goto Label_1371; // 0x558 JumpB
	var_79_int = 2; // 0x559 MovI
	return 2; // 0x55a Return
	
Label_1371:
	var_79_int = 3; // 0x55b MovI
	return 2; // 0x55c Return
}


func_1104()
{
	var_138_string = "oob10MorlokMain1"; // 0x451 PushS
	var_139_int = 1; // 0x452 PushI
	SetVariable(var_138_string, var_139_int); // 0x453 Func
	return 0; // 0x455 Return
}


func_849(var_28_bool, var_30_float)
{
	var_31_float = 0; var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_bool = 0; var_39_bool = 0; var_40_float = 0; var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_bool = 0; var_48_bool = 0; // 0x351 PushV
	GetPosition(var_41_cvector); // 0x352 ObjFunc
	GetEyesHeight(var_40_float); // 0x354 ObjFunc
	var_49_float = GetByIndex(var_41_cvector, 1); // 0x356 PushE
	var_49_float = var_49_float + var_40_float; // 0x357 Add2
	SetByIndex(var_41_cvector, 1) = var_49_float; // 0x358 PopE
	GetPosition(var_42_cvector); // 0x359 Func
	GetEyesHeight(var_40_float); // 0x35b Func
	var_50_float = GetByIndex(var_42_cvector, 1); // 0x35d PushE
	var_50_float = var_50_float + var_40_float; // 0x35e Add2
	SetByIndex(var_42_cvector, 1) = var_50_float; // 0x35f PopE
	var_43_cvector = var_41_cvector - var_42_cvector; // 0x360 Sub2
	var_51_float = GetByIndex(var_43_cvector, 1); // 0x361 PushE
	var_51_float = 0; // 0x362 MovI
	SetByIndex(var_43_cvector, 1) = var_51_float; // 0x363 PopE
	var_52_int = var_43_cvector | var_43_cvector; // 0x364 Or
	var_53_float = sqrt(var_52_int); // 0x365 Sqrt
	var_43_cvector = var_43_cvector / var_43_cvector; // 0x366 Div2
	var_44_cvector = -var_43_cvector; // 0x367 Neg2
	var_54_float = var_43_cvector * var_30_float; // 0x368 Mult
	var_55_cvector = CVector(0,0,0); var_56_cvector = CVector(0,0,0); // 0x369 PushV
	var_57_cvector = CVector(0.0, 1.0, 0.0); // 0x36a PushVec
	var_56_cvector = var_44_cvector ^ var_57_cvector; // 0x36b Xor2
	func_989(var_55_cvector, var_56_cvector); // 0x36c NEW_2
	var_63_int = 25; // 0x36e PushI
	var_64_float = var_55_cvector * var_63_int; // 0x36f Mult
	var_65_int = var_54_float + var_64_float; // 0x370 Add
	var_66_cvector = CVector(0.0, 10.0, 0.0); // 0x371 PushVec
	var_45_cvector = var_65_int - var_66_cvector; // 0x372 Sub2
	var_46_cvector = var_42_cvector + var_45_cvector; // 0x373 Add2
	IsOverrideActive(var_47_bool); // 0x374 Func
	var_67_bool = var_47_bool; // 0x376 Push
	if(var_67_bool == 0) goto Label_890; // 0x377 JumpB
	var_28_bool = 0; // 0x378 MovB
	return 18; // 0x379 Return
	
Label_890:
	StopWorld(); // 0x37a Func
	CameraTransit(var_46_cvector, var_44_cvector); // 0x37c Func
	var_68_float = GetByIndex(var_45_cvector, 0); // 0x37e PushE
	var_69_float = GetByIndex(var_45_cvector, 2); // 0x37f PushE
	Rotate(var_68_float, var_69_float); // 0x380 Func
	var_70_bool = 0; // 0x382 PushV
	func_1053(var_70_bool); // 0x383 NEW_2
	if(var_70_bool == 0) goto Label_903; // 0x385 JumpB
	goto Label_911; // 0x386 Jump
	
Label_911:
	CameraWaitForPlayFinish(); // 0x38f Func
	ResumeWorld(); // 0x391 Func
	var_28_bool = 1; // 0x393 MovB
	return 18; // 0x394 Return
	
Label_903:
	var_71_string = "head"; // 0x387 PushS
	HasAnimationTrack(var_48_bool, var_71_string); // 0x388 Func
	var_72_bool = var_48_bool; // 0x38a Push
	if(var_72_bool == 0) goto Label_911; // 0x38b JumpB
	var_73_string = "head"; // 0x38c PushS
	LookAsyncCamera(var_73_string); // 0x38d Func
}


func_82(var_18_bool)
{
	var_18_bool = 1; // 0x52 MovB
	return 0; // 0x53 Return
}


func_976()
{
	var_15_bool = 0; // 0x3d0 PushV
	func_1053(var_15_bool); // 0x3d1 NEW_2
	if(var_15_bool == 0) goto Label_982; // 0x3d3 JumpB
	lshStopSpeech(); // 0x3d4 Func
	
Label_982:
	return 0; // 0x3d6 Return
}


func_84(var_0_int, var_1_int, var_2_bool, var_3_bool, var_17_bool, var_21_float, var_22_float)
{
	var_23_bool = 0; // 0x55 PushV
	func_844(var_23_bool); // 0x56 NEW_2
	var_26_bool = var_23_bool == 0; // 0x58 Not
	if(var_26_bool == 0) goto Label_91; // 0x59 JumpB
	return 0; // 0x5a Return
	
Label_91:
	var_27_string = "player"; // 0x5b PushS
	FindActor(var_17_bool, var_27_string); // 0x5c Func
	var_2_bool = 0; // 0x5e TMovB
	var_3_bool = 0; // 0x5f TMovB
	var_0_int = var_21_float; // 0x60 TMov
	var_1_int = var_22_float; // 0x61 TMov
	var_28_int = 10; // 0x62 PushI
	var_29_float = 1.0; // 0x63 PushF
	SetTimer(var_28_int, var_29_float); // 0x64 Func
	func_163(); // 0x67 NEW_2
	var_81_bool = var_3_bool == 0; // 0x69 Not
	if(var_81_bool == 0) goto Label_110; // 0x6a JumpB
	var_82_int = 10; // 0x6b PushI
	KillTimer(var_82_int); // 0x6c Func
	
Label_110:
	return 0; // 0x6e Return
}


func_1110()
{
	var_117_string = "oob10MorlokMain2"; // 0x457 PushS
	var_118_int = 1; // 0x458 PushI
	SetVariable(var_117_string, var_118_int); // 0x459 Func
	return 0; // 0x45b Return
}


func_983(var_19_object)
{
	var_20_object = Obj(); var_21_object = Obj(); // 0x3d7 PushV
	self(var_21_object); // 0x3d8 Func
	var_19_object = var_21_object; // 0x3da Mov
	return 2; // 0x3db Return
}


func_1239()
{
	var_95_object = Obj(); var_96_object = Obj(); // 0x4d7 PushV
	var_97_int = 560; // 0x4d8 PushI
	var_98_int = 2; // 0x4d9 PushI
	var_99_int = 530539; // 0x4da PushI
	CreateDiaryEntry(var_96_object, var_97_int, var_98_int, var_99_int); // 0x4db Func
	var_100_bool = 0; var_101_object = Obj(); var_102_int = 0; // 0x4dd PushV
	var_101_object = var_96_object; // 0x4de Mov
	var_102_int = 545; // 0x4df MovI
	func_1278(var_100_bool, var_101_object, var_102_int); // 0x4e0 NEW_2
	return 2; // 0x4e2 Return
}


func_1116()
{
	var_63_string = "b10q04MorlokTalk"; // 0x45d PushS
	var_64_int = 1; // 0x45e PushI
	SetVariable(var_63_string, var_64_int); // 0x45f Func
	return 0; // 0x461 Return
}


func_1373(var_16_object)
{
	var_17_int = 0; var_18_object = Obj(); // 0x55e PushV
	var_18_object = var_16_object; // 0x55f Mov
	TaskCall(1); // 0x560 TaskCall
	func_249(var_19_object, var_17_int, var_18_object); // 0x561 NEW_2
	TaskReturn(); // 0x562 TaskReturn
	return 0; // 0x564 Return
}


func_989(var_55_cvector, var_56_cvector)
{
	var_58_float = 0; var_59_float = 0; // 0x3dd PushV
	var_60_int = var_56_cvector | var_56_cvector; // 0x3de Or
	var_59_float = sqrt(var_60_int); // 0x3df Sqrt2
	var_61_float = 0.0; // 0x3e0 PushF
	var_62_bool = var_59_float < var_61_float; // 0x3e1 LT
	if(var_62_bool == 0) goto Label_997; // 0x3e2 JumpB
	var_55_cvector = CVector(0.0, 0.0, 0.0); // 0x3e3 MovV
	return 2; // 0x3e4 Return
	
Label_997:
	var_55_cvector = var_56_cvector / var_56_cvector; // 0x3e5 Div2
	return 2; // 0x3e6 Return
}


func_1122(var_122_bool)
{
	var_124_int = 0; var_125_string = ""; // 0x463 PushV
	var_125_string = "b10q04"; // 0x464 MovS
	func_999(var_124_int, var_125_string); // 0x465 NEW_2
	var_128_int = 1; // 0x467 PushI
	var_129_bool = var_124_int == var_128_int; // 0x468 Eq
	if(var_129_bool == 0) goto Label_1132; // 0x469 JumpB
	var_122_bool = 1; // 0x46a MovB
	return 0; // 0x46b Return
	
Label_1132:
	var_122_bool = 0; // 0x46c MovB
	return 0; // 0x46d Return
}


func_1252()
{
	var_38_object = Obj(); var_39_object = Obj(); // 0x4e4 PushV
	var_40_int = 547; // 0x4e5 PushI
	var_41_int = 2; // 0x4e6 PushI
	var_42_int = 530438; // 0x4e7 PushI
	CreateDiaryEntry(var_39_object, var_40_int, var_41_int, var_42_int); // 0x4e8 Func
	var_43_bool = 0; var_44_object = Obj(); var_45_int = 0; // 0x4ea PushV
	var_44_object = var_39_object; // 0x4eb Mov
	var_45_int = 545; // 0x4ec MovI
	func_1278(var_43_bool, var_44_object, var_45_int); // 0x4ed NEW_2
	return 2; // 0x4ef Return
}


func_999(var_124_int, var_125_string)
{
	var_126_int = 0; var_127_int = 0; // 0x3e7 PushV
	GetVariable(var_125_string, var_127_int); // 0x3e8 Func
	var_124_int = var_127_int; // 0x3ea Mov
	return 2; // 0x3eb Return
}


func_1004(var_103_bool, var_104_string, var_105_string)
{
	var_106_object = Obj(); var_107_object = Obj(); // 0x3ec PushV
	FindActor(var_107_object, var_104_string); // 0x3ed Func
	var_108_bool = var_107_object == 0; // 0x3ef NullEq
	if(var_108_bool == 0) goto Label_1011; // 0x3f0 JumpB
	var_103_bool = 0; // 0x3f1 MovB
	return 2; // 0x3f2 Return
	
Label_1011:
	Trigger(var_107_object, var_105_string); // 0x3f3 Func
	var_103_bool = 1; // 0x3f5 MovB
	return 2; // 0x3f6 Return
}


func_494(var_2_bool, var_140_string)
{
	var_141_bool = 0; // 0x1ef PushV
	func_1053(var_141_bool); // 0x1f0 NEW_2
	var_142_bool = var_141_bool == 0; // 0x1f2 Not
	if(var_142_bool == 0) goto Label_501; // 0x1f3 JumpB
	return 0; // 0x1f4 Return
	
Label_501:
	var_143_bool = var_140_string == var_2_bool; // 0x1f5 Eq
	if(var_143_bool == 0) goto Label_504; // 0x1f6 JumpB
	return 0; // 0x1f7 Return
	
Label_504:
	var_144_string = ""; var_145_bool = 0; // 0x1f8 PushV
	var_144_string = var_140_string; // 0x1f9 Mov
	var_146_string = ""; // 0x1fa PushS
	var_147_bool = var_140_string == var_146_string; // 0x1fb Eq
	if(var_147_bool == 0) goto Label_511; // 0x1fc JumpB
	var_145_bool = 0; // 0x1fd MovB
	goto Label_512; // 0x1fe Jump
	
Label_512:
	func_950(var_144_string, var_145_bool); // 0x200 NEW_2
	var_2_bool = var_140_string; // 0x202 TMov
	return 0; // 0x203 Return
	
Label_511:
	var_145_bool = 1; // 0x1ff MovB
}


func_111(var_0_int, var_1_int, var_4_object, var_15_bool)
{
	var_16_float = 0; var_17_float = 0; // 0x6f PushV
	var_18_bool = var_4_object == 0; // 0x70 NullEq
	if(var_18_bool == 0) goto Label_116; // 0x71 JumpB
	var_15_bool = 0; // 0x72 MovB
	return 2; // 0x73 Return
	
Label_116:
	var_19_float = 0; var_20_object = Obj(); // 0x74 PushV
	var_20_object = var_4_object; // 0x75 MovT
	func_836(var_20_object); // 0x76 NEW_2
	var_17_float = sqrt(var_19_float); // 0x78 Sqrt2
	var_27_bool = var_2_bool; // 0x79 PushT
	if(var_27_bool == 0) goto Label_124; // 0x7a JumpB
	var_17_float = var_17_float - var_1_int; // 0x7b Sub2
	
Label_124:
	var_15_bool = var_17_float < var_0_int; // 0x7c LT2
	return 2; // 0x7d Return
}


func_1134(var_166_bool)
{
	var_168_bool = 0; // 0x46f PushV
	var_168_bool = 0; // 0x470 MovB
	var_169_bool = 0; // 0x471 PushV
	var_169_bool = 0; // 0x472 MovB
	var_170_bool = 0; // 0x473 PushV
	var_170_bool = 0; // 0x474 MovB
	var_171_int = 0; var_172_string = ""; // 0x475 PushV
	var_172_string = "b10q04NotkinTalk"; // 0x476 MovS
	func_999(var_171_int, var_172_string); // 0x477 NEW_2
	var_173_int = 9; // 0x479 PushI
	var_174_bool = var_171_int == var_173_int; // 0x47a Eq
	if(var_174_bool == 0) goto Label_1156; // 0x47b JumpB
	var_175_int = 0; var_176_string = ""; // 0x47c PushV
	var_176_string = "b10q04Spi4kaTalk"; // 0x47d MovS
	func_999(var_175_int, var_176_string); // 0x47e NEW_2
	var_177_int = 9; // 0x480 PushI
	var_178_bool = var_175_int == var_177_int; // 0x481 Eq
	if(var_178_bool == 0) goto Label_1156; // 0x482 JumpB
	var_170_bool = 1; // 0x483 MovB
	
Label_1156:
	if(var_170_bool == 0) goto Label_1165; // 0x484 JumpB
	var_179_int = 0; var_180_string = ""; // 0x485 PushV
	var_180_string = "b10q04MishkaTalk"; // 0x486 MovS
	func_999(var_179_int, var_180_string); // 0x487 NEW_2
	var_181_int = 9; // 0x489 PushI
	var_182_bool = var_179_int == var_181_int; // 0x48a Eq
	if(var_182_bool == 0) goto Label_1165; // 0x48b JumpB
	var_169_bool = 1; // 0x48c MovB
	
Label_1165:
	if(var_169_bool == 0) goto Label_1174; // 0x48d JumpB
	var_183_int = 0; var_184_string = ""; // 0x48e PushV
	var_184_string = "b10q04LaskaTalk"; // 0x48f MovS
	func_999(var_183_int, var_184_string); // 0x490 NEW_2
	var_185_int = 9; // 0x492 PushI
	var_186_bool = var_183_int == var_185_int; // 0x493 Eq
	if(var_186_bool == 0) goto Label_1174; // 0x494 JumpB
	var_168_bool = 1; // 0x495 MovB
	
Label_1174:
	if(var_168_bool == 0) goto Label_1177; // 0x496 JumpB
	var_166_bool = 1; // 0x497 MovB
	return 0; // 0x498 Return
	
Label_1177:
	var_166_bool = 0; // 0x499 MovB
	return 0; // 0x49a Return
}


func_1265(var_52_object)
{
	var_53_object = Obj(); var_54_object = Obj(); // 0x4f1 PushV
	GetDiaryRoot(var_54_object); // 0x4f2 Func
	var_55_bool = var_54_object == 0; // 0x4f4 Not
	if(var_55_bool == 0) goto Label_1275; // 0x4f5 JumpB
	var_56_string = "Can't retrieve diary root"; // 0x4f6 PushS
	Trace(var_56_string); // 0x4f7 Func
	var_52_object = 0; // 0x4f9 MovB
	return 2; // 0x4fa Return
	
Label_1275:
	var_52_object = var_54_object; // 0x4fb Mov
	return 2; // 0x4fc Return
}


func_242(var_71_bool)
{
	var_71_bool = 1; // 0xf2 MovB
	return 0; // 0xf3 Return
}


func_244()
{
	StopAnimation(); // 0xf4 Func
	StopGroup0(); // 0xf6 Func
	return 0; // 0xf8 Return
}


func_1016(var_35_float)
{
	var_36_float = 0; var_37_float = 0; // 0x3f8 PushV
	GetGameTime(var_37_float); // 0x3f9 Func
	var_35_float = var_37_float; // 0x3fb Mov
	return 2; // 0x3fc Return
}


func_249(var_0_int, var_17_int, var_18_object)
{
	var_20_object = Obj(); var_21_bool = 0; var_22_int = 0; var_23_bool = 0; var_24_object = Obj(); var_25_bool = 0; var_26_int = 0; var_27_bool = 0; // 0xf9 PushV
	var_0_int = var_18_object; // 0xfa TMov
	var_28_bool = 0; var_29_object = Obj(); var_30_float = 0; // 0xfb PushV
	var_29_object = var_18_object; // 0xfc Mov
	var_30_float = 110.0; // 0xfd MovF
	func_849(var_29_object, var_30_float); // 0xfe NEW_2
	var_74_bool = var_28_bool == 0; // 0x100 Not
	if(var_74_bool == 0) goto Label_260; // 0x101 JumpB
	var_17_int = -2; // 0x102 MovI
	return 8; // 0x103 Return
	
Label_260:
	CreateDialog(var_24_object); // 0x104 Func
	var_75_int = 0; // 0x106 PushV
	func_1047(var_75_int); // 0x107 NEW_2
	SetNPCName(var_75_int); // 0x109 ObjFunc
	var_76_int = 0; // 0x10b PushV
	func_1045(var_76_int); // 0x10c NEW_2
	SetNPCDescription(var_76_int); // 0x10e ObjFunc
	var_77_string = ""; // 0x110 PushV
	func_1049(var_77_string); // 0x111 NEW_2
	SetPhoto(var_77_string); // 0x113 ObjFunc
	var_78_string = ""; // 0x115 PushV
	func_1051(var_78_string); // 0x116 NEW_2
	SetPhoto2(var_78_string); // 0x118 ObjFunc
	var_79_int = 0; // 0x11a PushV
	func_1356(var_79_int); // 0x11b NEW_2
	SetPlayerName(var_79_int); // 0x11d ObjFunc
	var_26_int = -1; // 0x11f MovI
	IsOverrideActive(var_25_bool); // 0x120 Func
	var_87_bool = var_25_bool; // 0x122 Push
	if(var_87_bool == 0) goto Label_294; // 0x123 JumpB
	var_17_int = -2; // 0x124 MovI
	return 8; // 0x125 Return
	
Label_294:
	DoDialog(var_24_object); // 0x126 Func
	var_88_object = Obj(); var_89_object = Obj(); // 0x128 PushV
	var_88_object = var_18_object; // 0x129 Mov
	var_89_object = var_24_object; // 0x12a Mov
	TaskCall(2); // 0x12b TaskCall
	func_323(var_90_object, var_91_object, var_92_string, var_93_bool, var_88_object, var_89_object); // 0x12c NEW_2
	TaskReturn(); // 0x12d TaskReturn
	IsDialogEnd(var_27_bool); // 0x12f ObjFunc
	
Label_305:
	var_227_bool = var_27_bool == 0; // 0x131 Not
	if(var_227_bool == 0) goto Label_312; // 0x132 JumpB
	sync(); // 0x133 Func
	IsDialogEnd(var_27_bool); // 0x135 ObjFunc
	goto Label_305; // 0x137 Jump
	
Label_312:
	var_228_object = Obj(); // 0x138 PushV
	var_228_object = var_18_object; // 0x139 Mov
	func_917(); // 0x13a NEW_2
	StopDialog(var_24_object); // 0x13c Func
	GetReturnValue(var_26_int); // 0x13e ObjFunc
	var_17_int = var_26_int; // 0x140 Mov
	return 8; // 0x141 Return
}


func_1021(var_52_string, var_53_int)
{
	var_54_string = ""; var_55_string = ""; // 0x3fd PushV
	var_55_string = "idle"; // 0x3fe MovS
	var_56_int = var_53_int; // 0x3ff Push
	if(var_56_int == 0) goto Label_1026; // 0x400 JumpB
	var_55_string = var_55_string + var_53_int; // 0x401 Add2
	
Label_1026:
	var_52_string = var_55_string; // 0x402 Mov
	return 2; // 0x403 Return
}


func_1278(var_43_bool, var_44_object, var_45_int)
{
	var_46_object = Obj(); var_47_object = Obj(); var_48_int = 0; var_49_object = Obj(); var_50_object = Obj(); var_51_int = 0; // 0x4fe PushV
	var_52_object = Obj(); // 0x4ff PushV
	func_1265(var_52_object); // 0x500 NEW_2
	var_49_object = var_52_object; // 0x501 Mov
	Find(var_45_int, var_50_object); // 0x503 ObjFunc
	var_57_bool = var_50_object == 0; // 0x505 Not
	if(var_57_bool == 0) goto Label_1293; // 0x506 JumpB
	var_58_string = "Can't find diary parent with id: "; // 0x507 PushS
	var_59_int = var_58_string + var_45_int; // 0x508 Add
	Trace(var_59_int); // 0x509 Func
	var_43_bool = 0; // 0x50b MovB
	return 6; // 0x50c Return
	
Label_1293:
	AddChild(var_44_object); // 0x50d ObjFunc
	var_60_int = 7; // 0x50f PushI
	SendWorldWndMessage(var_60_int); // 0x510 Func
	GetCategory(var_51_int); // 0x512 ObjFunc
	SetDiarySection(var_51_int); // 0x514 Func
	var_43_bool = 0; // 0x516 MovB
	return 6; // 0x517 Return
}


