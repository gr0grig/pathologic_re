task_0_event_0(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_object, var_11_string, var_12_bool)
{
	func_149(var_11_string, var_12_bool); // 0x8 NEW_2
	var_16_object = Obj(); // 0xa PushV
	var_16_object = var_12_bool; // 0xb Mov
	func_1375(var_16_object); // 0xc NEW_2
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
	func_985(var_19_object); // 0x4d NEW_2
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
	func_967(var_29_object); // 0x8a NEW_2
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
	func_978(); // 0x208 NEW_2
	var_16_int = 31765; // 0x20a PushI
	var_17_bool = var_13_int == var_16_int; // 0x20b Eq
	if(var_17_bool == 0) goto Label_540; // 0x20c JumpB
	var_18_object = Obj(); var_19_object = Obj(); // 0x20d PushV
	var_18_object = var_1_int; // 0x20e MovT
	var_19_object = var_0_int; // 0x20f MovT
	func_1073(); // 0x210 NEW_2
	var_61_object = Obj(); var_62_object = Obj(); // 0x212 PushV
	var_61_object = var_1_int; // 0x213 MovT
	var_62_object = var_0_int; // 0x214 MovT
	func_1118(); // 0x215 NEW_2
	var_65_object = Obj(); var_66_object = Obj(); // 0x217 PushV
	var_65_object = var_1_int; // 0x218 MovT
	var_66_object = var_0_int; // 0x219 MovT
	func_1057(); // 0x21a NEW_2
	
Label_540:
	var_91_int = 31773; // 0x21c PushI
	var_92_bool = var_13_int == var_91_int; // 0x21d Eq
	if(var_92_bool == 0) goto Label_548; // 0x21e JumpB
	var_93_object = Obj(); var_94_object = Obj(); // 0x21f PushV
	var_93_object = var_1_int; // 0x220 MovT
	var_94_object = var_0_int; // 0x221 MovT
	func_1096(); // 0x222 NEW_2
	
Label_548:
	var_109_int = 32854; // 0x224 PushI
	var_110_bool = var_13_int == var_109_int; // 0x225 Eq
	if(var_110_bool == 0) goto Label_556; // 0x226 JumpB
	var_111_object = Obj(); var_112_object = Obj(); // 0x227 PushV
	var_111_object = var_1_int; // 0x228 MovT
	var_112_object = var_0_int; // 0x229 MovT
	func_1096(); // 0x22a NEW_2
	
Label_556:
	var_113_int = 31774; // 0x22c PushI
	var_114_bool = var_13_int == var_113_int; // 0x22d Eq
	if(var_114_bool == 0) goto Label_564; // 0x22e JumpB
	var_115_object = Obj(); var_116_object = Obj(); // 0x22f PushV
	var_115_object = var_1_int; // 0x230 MovT
	var_116_object = var_0_int; // 0x231 MovT
	func_1112(); // 0x232 NEW_2
	
Label_564:
	var_119_int = 31758; // 0x234 PushI
	var_120_bool = var_12_int == var_119_int; // 0x235 Eq
	if(var_120_bool == 0) goto Label_700; // 0x236 JumpB
	var_121_bool = 0; // 0x237 PushV
	var_121_bool = 0; // 0x238 MovB
	var_122_bool = 0; var_123_object = Obj(); // 0x239 PushV
	var_123_object = var_1_int; // 0x23a MovT
	func_1124(var_123_object); // 0x23b NEW_2
	if(var_122_bool == 0) goto Label_580; // 0x23d JumpB
	var_130_bool = 0; var_131_object = Obj(); // 0x23e PushV
	var_131_object = var_1_int; // 0x23f MovT
	func_1217(var_131_object); // 0x240 NEW_2
	if(var_130_bool == 0) goto Label_580; // 0x242 JumpB
	var_121_bool = 1; // 0x243 MovB
	
Label_580:
	if(var_121_bool == 0) goto Label_606; // 0x244 JumpB
	var_136_object = Obj(); var_137_object = Obj(); // 0x245 PushV
	var_136_object = var_1_int; // 0x246 MovT
	var_137_object = var_0_int; // 0x247 MovT
	func_1106(); // 0x248 NEW_2
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
	func_1136(var_167_object); // 0x264 NEW_2
	if(var_166_bool == 0) goto Label_622; // 0x266 JumpB
	var_187_bool = 0; var_188_object = Obj(); // 0x267 PushV
	var_188_object = var_1_int; // 0x268 MovT
	func_1193(var_188_object); // 0x269 NEW_2
	var_193_bool = var_187_bool == 0; // 0x26b Not
	if(var_193_bool == 0) goto Label_622; // 0x26c JumpB
	var_165_bool = 1; // 0x26d MovB
	
Label_622:
	if(var_165_bool == 0) goto Label_630; // 0x26e JumpB
	var_194_bool = 0; var_195_object = Obj(); // 0x26f PushV
	var_195_object = var_1_int; // 0x270 MovT
	func_1205(var_195_object); // 0x271 NEW_2
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
	func_1181(var_212_object); // 0x297 NEW_2
	if(var_211_bool == 0) goto Label_673; // 0x299 JumpB
	var_217_bool = 0; var_218_object = Obj(); // 0x29a PushV
	var_218_object = var_1_int; // 0x29b MovT
	func_1193(var_218_object); // 0x29c NEW_2
	var_219_bool = var_217_bool == 0; // 0x29e Not
	if(var_219_bool == 0) goto Label_673; // 0x29f JumpB
	var_210_bool = 1; // 0x2a0 MovB
	
Label_673:
	if(var_210_bool == 0) goto Label_681; // 0x2a1 JumpB
	var_220_bool = 0; var_221_object = Obj(); // 0x2a2 PushV
	var_221_object = var_1_int; // 0x2a3 MovT
	func_1205(var_221_object); // 0x2a4 NEW_2
	var_222_bool = var_220_bool == 0; // 0x2a6 Not
	if(var_222_bool == 0) goto Label_681; // 0x2a7 JumpB
	var_209_bool = 1; // 0x2a8 MovB
	
Label_681:
	if(var_209_bool == 0) goto Label_688; // 0x2a9 JumpB
	var_223_bool = 0; var_224_object = Obj(); // 0x2aa PushV
	var_224_object = var_1_int; // 0x2ab MovT
	func_1229(var_224_object); // 0x2ac NEW_2
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
	func_1055(var_286_bool); // 0x339 NEW_2
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


func_1280(var_43_bool, var_44_object, var_45_int)
{
	var_46_object = Obj(); var_47_object = Obj(); var_48_int = 0; var_49_object = Obj(); var_50_object = Obj(); var_51_int = 0; // 0x500 PushV
	var_52_object = Obj(); // 0x501 PushV
	func_1267(var_52_object); // 0x502 NEW_2
	var_49_object = var_52_object; // 0x503 Mov
	Find(var_45_int, var_50_object); // 0x505 ObjFunc
	var_57_bool = var_50_object == 0; // 0x507 Not
	if(var_57_bool == 0) goto Label_1295; // 0x508 JumpB
	var_58_string = "Can't find diary parent with id: "; // 0x509 PushS
	var_59_int = var_58_string + var_45_int; // 0x50a Add
	Trace(var_59_int); // 0x50b Func
	var_43_bool = 0; // 0x50d MovB
	return 6; // 0x50e Return
	
Label_1295:
	AddChild(var_44_object); // 0x50f ObjFunc
	var_60_int = 7; // 0x511 PushI
	SendWorldWndMessage(var_60_int); // 0x512 Func
	GetCategory(var_51_int); // 0x514 ObjFunc
	SetDiarySection(var_51_int); // 0x516 Func
	var_43_bool = 0; // 0x518 MovB
	return 6; // 0x519 Return
}


func_1030(var_46_int)
{
	var_47_int = 0; var_48_bool = 0; var_49_int = 0; var_50_bool = 0; // 0x406 PushV
	var_49_int = 0; // 0x407 MovI
	
Label_1032:
	var_51_string = "all"; // 0x408 PushS
	var_52_string = ""; var_53_int = 0; // 0x409 PushV
	var_53_int = var_49_int; // 0x40a Mov
	func_1023(var_52_string, var_53_int); // 0x40b NEW_2
	HasAnimation(var_50_bool, var_51_string, var_52_string); // 0x40d Func
	var_57_bool = var_50_bool == 0; // 0x40f Not
	if(var_57_bool == 0) goto Label_1042; // 0x410 JumpB
	goto Label_1045; // 0x411 Jump
	
Label_1045:
	var_46_int = var_49_int; // 0x415 Mov
	return 4; // 0x416 Return
	
Label_1042:
	var_58_int = 1; // 0x412 PushI
	var_49_int = var_49_int + var_58_int; // 0x413 Add2
	goto Label_1032; // 0x414 Jump
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


func_918()
{
	var_230_bool = 0; var_231_bool = 0; // 0x396 PushV
	var_232_bool = 1; // 0x397 PushB
	CameraSwitchToNormal(var_232_bool); // 0x398 Func
	var_233_bool = 0; // 0x39a PushV
	func_1055(var_233_bool); // 0x39b NEW_2
	if(var_233_bool == 0) goto Label_927; // 0x39d JumpB
	goto Label_935; // 0x39e Jump
	
Label_935:
	return 2; // 0x3a7 Return
	
Label_927:
	var_234_string = "head"; // 0x39f PushS
	HasAnimationTrack(var_231_bool, var_234_string); // 0x3a0 Func
	var_235_bool = var_231_bool; // 0x3a2 Push
	if(var_235_bool == 0) goto Label_935; // 0x3a3 JumpB
	var_236_string = "head"; // 0x3a4 PushS
	UnlookAsync(var_236_string); // 0x3a5 Func
}


func_1047(var_77_int)
{
	var_77_int = 521048; // 0x417 MovI
	return 0; // 0x418 Return
}


func_1049(var_76_int)
{
	var_76_int = 521047; // 0x419 MovI
	return 0; // 0x41a Return
}


func_1051(var_78_string)
{
	var_78_string = "ui/NPC_Morlok.png"; // 0x41b MovS
	return 0; // 0x41c Return
}


func_1308(var_24_object)
{
	var_25_object = Obj(); var_26_object = Obj(); var_27_object = Obj(); var_28_object = Obj(); // 0x51c PushV
	GetMainOutdoorScene(var_27_object); // 0x51d Func
	var_29_bool = var_27_object == 0; // 0x51f NullEq
	if(var_29_bool == 0) goto Label_1319; // 0x520 JumpB
	var_30_string = "Can't find main outdoor scene"; // 0x521 PushS
	Trace(var_30_string); // 0x522 Func
	var_28_object = 0; // 0x524 SetNull
	var_24_object = var_28_object; // 0x525 Mov
	return 4; // 0x526 Return
	
Label_1319:
	GetMap(var_28_object); // 0x527 ObjFunc
	var_24_object = var_28_object; // 0x529 Mov
	return 4; // 0x52a Return
}


func_1181(var_211_bool)
{
	var_213_int = 0; var_214_string = ""; // 0x49e PushV
	var_214_string = "b10q04NotkinTalk"; // 0x49f MovS
	func_1001(var_213_int, var_214_string); // 0x4a0 NEW_2
	var_215_int = 9; // 0x4a2 PushI
	var_216_bool = var_213_int == var_215_int; // 0x4a3 Eq
	if(var_216_bool == 0) goto Label_1191; // 0x4a4 JumpB
	var_211_bool = 1; // 0x4a5 MovB
	return 0; // 0x4a6 Return
	
Label_1191:
	var_211_bool = 0; // 0x4a7 MovB
	return 0; // 0x4a8 Return
}


func_1053(var_79_string)
{
	var_79_string = "ui/NPC_Morlok_b.png"; // 0x41d MovS
	return 0; // 0x41e Return
}


func_1055(var_15_bool)
{
	var_15_bool = 0; // 0x41f MovB
	return 0; // 0x420 Return
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
	func_985(var_21_object); // 0x30 NEW_2
	RemoveActor(var_21_object); // 0x32 Func
	
Label_52:
	return 0; // 0x34 Return
}


func_1057()
{
	var_67_object = Obj(); var_68_string = ""; var_69_float = 0; // 0x422 PushV
	var_70_object = Obj(); // 0x423 PushV
	func_1308(var_70_object); // 0x424 NEW_2
	var_67_object = var_70_object; // 0x425 Mov
	var_68_string = "pt_map_notkin"; // 0x427 MovS
	var_69_float = 2; // 0x428 MovI
	func_1325(var_67_object, var_68_string, var_69_float); // 0x429 NEW_2
	var_90_object = Obj(); // 0x42b PushV
	func_1308(var_90_object); // 0x42c NEW_2
	ShowMap(var_90_object); // 0x42e ObjFunc
	return 0; // 0x430 Return
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
	func_1030(var_46_int); // 0xad NEW_2
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
	func_1023(var_68_string, var_69_int); // 0xc9 NEW_2
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


func_936(var_141_string)
{
	var_142_bool = 0; var_143_float = 0; var_144_float = 0; var_145_bool = 0; var_146_float = 0; var_147_float = 0; // 0x3a8 PushV
	lshHasAnimation(var_145_bool, var_141_string); // 0x3a9 Func
	var_148_bool = var_145_bool; // 0x3ab Push
	if(var_148_bool == 0) goto Label_947; // 0x3ac JumpB
	lshGetAnimTimes(var_141_string, var_146_float, var_147_float); // 0x3ad Func
	var_149_bool = 0; // 0x3af PushB
	lshPlayAnimation(var_146_float, var_147_float, var_149_bool); // 0x3b0 Func
	goto Label_951; // 0x3b2 Jump
	
Label_951:
	return 6; // 0x3b7 Return
	
Label_947:
	var_150_string = "Can't find lsh animation : "; // 0x3b3 PushS
	var_151_int = var_150_string + var_141_string; // 0x3b4 Add
	Trace(var_151_int); // 0x3b5 Func
}


func_1193(var_187_bool)
{
	var_189_int = 0; var_190_string = ""; // 0x4aa PushV
	var_190_string = "b10q04"; // 0x4ab MovS
	func_1001(var_189_int, var_190_string); // 0x4ac NEW_2
	var_191_int = 1000; // 0x4ae PushI
	var_192_bool = var_189_int == var_191_int; // 0x4af Eq
	if(var_192_bool == 0) goto Label_1203; // 0x4b0 JumpB
	var_187_bool = 1; // 0x4b1 MovB
	return 0; // 0x4b2 Return
	
Label_1203:
	var_187_bool = 0; // 0x4b3 MovB
	return 0; // 0x4b4 Return
}


func_1325(var_67_object, var_68_string, var_69_float)
{
	var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); var_73_object = Obj(); var_74_bool = 0; var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0); var_77_object = Obj(); var_78_bool = 0; // 0x52d PushV
	GetMainOutdoorScene(var_77_object); // 0x52e Func
	var_79_bool = var_77_object == 0; // 0x530 NullEq
	if(var_79_bool == 0) goto Label_1334; // 0x531 JumpB
	var_80_string = "Can't find main outdoor scene"; // 0x532 PushS
	Trace(var_80_string); // 0x533 Func
	return 8; // 0x535 Return
	
Label_1334:
	GetLocator(var_68_string, var_78_bool, var_75_cvector, var_76_cvector); // 0x536 ObjFunc
	var_81_bool = var_78_bool == 0; // 0x538 Not
	if(var_81_bool == 0) goto Label_1344; // 0x539 JumpB
	var_82_string = "Warning: outdoor scene locator "; // 0x53a PushS
	var_83_int = var_82_string + var_68_string; // 0x53b Add
	var_84_string = " doesnt exist"; // 0x53c PushS
	var_85_int = var_83_int + var_84_string; // 0x53d Add
	Trace(var_85_int); // 0x53e Func
	
Label_1344:
	GetMap(var_67_object); // 0x540 ObjFunc
	var_86_bool = var_67_object == 0; // 0x542 NullEq
	if(var_86_bool == 0) goto Label_1352; // 0x543 JumpB
	var_87_string = "Can't find map"; // 0x544 PushS
	Trace(var_87_string); // 0x545 Func
	return 8; // 0x547 Return
	
Label_1352:
	var_88_float = GetByIndex(var_75_cvector, 0); // 0x548 PushE
	var_89_float = GetByIndex(var_75_cvector, 2); // 0x549 PushE
	SetMapParams(var_88_float, var_89_float, var_69_float); // 0x54a ObjFunc
	return 8; // 0x54c Return
}


func_1073()
{
	var_20_object = Obj(); var_21_object = Obj(); // 0x431 PushV
	var_22_string = "b10q04NotkinTalk"; // 0x432 PushS
	var_23_int = 1; // 0x433 PushI
	SetVariable(var_22_string, var_23_int); // 0x434 Func
	var_24_object = Obj(); // 0x436 PushV
	func_1308(var_24_object); // 0x437 NEW_2
	var_21_object = var_24_object; // 0x438 Mov
	var_31_string = "b10q04MorlokGotoNotkin"; // 0x43a PushS
	var_32_string = "pt_map_notkin"; // 0x43b PushS
	var_33_int = 0; // 0x43c PushI
	var_34_int = 530549; // 0x43d PushI
	var_35_float = 0; // 0x43e PushV
	func_1018(var_35_float); // 0x43f NEW_2
	AddMark(var_31_string, var_32_string, var_33_int, var_34_int, var_35_float); // 0x441 ObjFunc
	func_1254(); // 0x444 NEW_2
	return 2; // 0x446 Return
}


func_1205(var_194_bool)
{
	var_196_int = 0; var_197_string = ""; // 0x4b6 PushV
	var_197_string = "b10q04"; // 0x4b7 MovS
	func_1001(var_196_int, var_197_string); // 0x4b8 NEW_2
	var_198_int = -1; // 0x4ba PushI
	var_199_bool = var_196_int == var_198_int; // 0x4bb Eq
	if(var_199_bool == 0) goto Label_1215; // 0x4bc JumpB
	var_194_bool = 1; // 0x4bd MovB
	return 0; // 0x4be Return
	
Label_1215:
	var_194_bool = 0; // 0x4bf MovB
	return 0; // 0x4c0 Return
}


func_952(var_144_string, var_145_bool)
{
	var_148_bool = 0; var_149_float = 0; var_150_float = 0; var_151_bool = 0; var_152_float = 0; var_153_float = 0; // 0x3b8 PushV
	lshHasAnimation(var_151_bool, var_144_string); // 0x3b9 Func
	var_154_bool = var_151_bool; // 0x3bb Push
	if(var_154_bool == 0) goto Label_962; // 0x3bc JumpB
	lshGetAnimTimes(var_144_string, var_152_float, var_153_float); // 0x3bd Func
	lshPlayAnimation(var_152_float, var_153_float, var_145_bool); // 0x3bf Func
	goto Label_966; // 0x3c1 Jump
	
Label_966:
	return 6; // 0x3c6 Return
	
Label_962:
	var_155_string = "Can't find lsh animation : "; // 0x3c2 PushS
	var_156_int = var_155_string + var_144_string; // 0x3c3 Add
	Trace(var_156_int); // 0x3c4 Func
}


func_1217(var_130_bool)
{
	var_132_int = 0; var_133_string = ""; // 0x4c2 PushV
	var_133_string = "oob10MorlokMain1"; // 0x4c3 MovS
	func_1001(var_132_int, var_133_string); // 0x4c4 NEW_2
	var_134_int = 0; // 0x4c6 PushI
	var_135_bool = var_132_int == var_134_int; // 0x4c7 Eq
	if(var_135_bool == 0) goto Label_1227; // 0x4c8 JumpB
	var_130_bool = 1; // 0x4c9 MovB
	return 0; // 0x4ca Return
	
Label_1227:
	var_130_bool = 0; // 0x4cb MovB
	return 0; // 0x4cc Return
}


func_323(var_0_int, var_1_int, var_2_bool, var_3_bool, var_89_object, var_90_object)
{
	var_0_int = var_90_object; // 0x144 TMov
	var_1_int = var_89_object; // 0x145 TMov
	var_3_bool = 0; // 0x146 TMovB
	var_95_int = 1; // 0x147 PushI
	if(var_95_int == 0) goto Label_464; // 0x148 JumpB
	var_96_bool = 0; // 0x149 PushV
	var_96_bool = 0; // 0x14a MovB
	var_97_bool = 0; var_98_object = Obj(); // 0x14b PushV
	var_98_object = var_1_int; // 0x14c MovT
	func_1124(var_98_object); // 0x14d NEW_2
	if(var_97_bool == 0) goto Label_342; // 0x14f JumpB
	var_105_bool = 0; var_106_object = Obj(); // 0x150 PushV
	var_106_object = var_1_int; // 0x151 MovT
	func_1217(var_106_object); // 0x152 NEW_2
	if(var_105_bool == 0) goto Label_342; // 0x154 JumpB
	var_96_bool = 1; // 0x155 MovB
	
Label_342:
	if(var_96_bool == 0) goto Label_368; // 0x156 JumpB
	var_111_object = Obj(); var_112_object = Obj(); // 0x157 PushV
	var_111_object = var_1_int; // 0x158 MovT
	var_112_object = var_0_int; // 0x159 MovT
	func_1106(); // 0x15a NEW_2
	var_115_string = ""; // 0x15c PushV
	var_115_string = "Neutral"; // 0x15d MovS
	func_494(var_90_object, var_115_string); // 0x15e NEW_2
	var_132_int = 530386; // 0x160 PushI
	SetMessage(var_132_int); // 0x161 TObjFunc
	ClearReplies(); // 0x163 TObjFunc
	var_133_int = 530387; // 0x165 PushI
	var_134_int = 31760; // 0x166 PushI
	var_135_int = 31759; // 0x167 PushI
	AddReply(var_133_int, var_134_int, var_135_int); // 0x168 TObjFunc
	var_136_int = 531497; // 0x16a PushI
	var_137_int = 31762; // 0x16b PushI
	var_138_int = 32855; // 0x16c PushI
	AddReply(var_136_int, var_137_int, var_138_int); // 0x16d TObjFunc
	goto Label_464; // 0x16f Jump
	
Label_464:
	var_139_bool = 0; // 0x1d0 PushV
	func_1055(var_139_bool); // 0x1d1 NEW_2
	if(var_139_bool == 0) goto Label_479; // 0x1d3 JumpB
	
Label_468:
	lshWaitForAnimEnd(); // 0x1d4 Func
	var_140_bool = var_3_bool; // 0x1d6 PushT
	if(var_140_bool == 0) goto Label_473; // 0x1d7 JumpB
	goto Label_478; // 0x1d8 Jump
	
Label_478:
	goto Label_493; // 0x1de Jump
	
Label_493:
	return 0; // 0x1ed Return
	
Label_473:
	var_141_string = ""; // 0x1d9 PushV
	var_141_string = var_2_bool; // 0x1da MovT
	func_936(var_141_string); // 0x1db NEW_2
	goto Label_468; // 0x1dd Jump
	
Label_479:
	var_152_string = "all"; // 0x1df PushS
	var_153_string = "idle"; // 0x1e0 PushS
	PlayAnimation(var_152_string, var_153_string); // 0x1e1 Func
	
Label_483:
	WaitForAnimEnd(); // 0x1e3 Func
	var_154_bool = var_3_bool; // 0x1e5 PushT
	if(var_154_bool == 0) goto Label_488; // 0x1e6 JumpB
	goto Label_493; // 0x1e7 Jump
	
Label_488:
	var_155_string = "all"; // 0x1e8 PushS
	var_156_string = "idle"; // 0x1e9 PushS
	PlayAnimation(var_155_string, var_156_string); // 0x1ea Func
	goto Label_483; // 0x1ec Jump
	
Label_368:
	var_157_bool = 0; // 0x170 PushV
	var_157_bool = 0; // 0x171 MovB
	var_158_bool = 0; // 0x172 PushV
	var_158_bool = 0; // 0x173 MovB
	var_159_bool = 0; var_160_object = Obj(); // 0x174 PushV
	var_160_object = var_1_int; // 0x175 MovT
	func_1136(var_160_object); // 0x176 NEW_2
	if(var_159_bool == 0) goto Label_384; // 0x178 JumpB
	var_180_bool = 0; var_181_object = Obj(); // 0x179 PushV
	var_181_object = var_1_int; // 0x17a MovT
	func_1193(var_181_object); // 0x17b NEW_2
	var_186_bool = var_180_bool == 0; // 0x17d Not
	if(var_186_bool == 0) goto Label_384; // 0x17e JumpB
	var_158_bool = 1; // 0x17f MovB
	
Label_384:
	if(var_158_bool == 0) goto Label_392; // 0x180 JumpB
	var_187_bool = 0; var_188_object = Obj(); // 0x181 PushV
	var_188_object = var_1_int; // 0x182 MovT
	func_1205(var_188_object); // 0x183 NEW_2
	var_193_bool = var_187_bool == 0; // 0x185 Not
	if(var_193_bool == 0) goto Label_392; // 0x186 JumpB
	var_157_bool = 1; // 0x187 MovB
	
Label_392:
	if(var_157_bool == 0) goto Label_408; // 0x188 JumpB
	var_194_string = ""; // 0x189 PushV
	var_194_string = "Neutral"; // 0x18a MovS
	func_494(var_90_object, var_194_string); // 0x18b NEW_2
	var_195_int = 530396; // 0x18d PushI
	SetMessage(var_195_int); // 0x18e TObjFunc
	ClearReplies(); // 0x190 TObjFunc
	var_196_int = 530397; // 0x192 PushI
	var_197_int = 31770; // 0x193 PushI
	var_198_int = 31769; // 0x194 PushI
	AddReply(var_196_int, var_197_int, var_198_int); // 0x195 TObjFunc
	goto Label_464; // 0x197 Jump
	
Label_408:
	var_199_string = ""; // 0x198 PushV
	var_199_string = "Neutral"; // 0x199 MovS
	func_494(var_90_object, var_199_string); // 0x19a NEW_2
	var_200_int = 530394; // 0x19c PushI
	SetMessage(var_200_int); // 0x19d TObjFunc
	ClearReplies(); // 0x19f TObjFunc
	var_201_bool = 0; // 0x1a1 PushV
	var_201_bool = 0; // 0x1a2 MovB
	var_202_bool = 0; // 0x1a3 PushV
	var_202_bool = 0; // 0x1a4 MovB
	var_203_bool = 0; // 0x1a5 PushV
	var_203_bool = 0; // 0x1a6 MovB
	var_204_bool = 0; var_205_object = Obj(); // 0x1a7 PushV
	var_205_object = var_1_int; // 0x1a8 MovT
	func_1181(var_205_object); // 0x1a9 NEW_2
	if(var_204_bool == 0) goto Label_435; // 0x1ab JumpB
	var_210_bool = 0; var_211_object = Obj(); // 0x1ac PushV
	var_211_object = var_1_int; // 0x1ad MovT
	func_1193(var_211_object); // 0x1ae NEW_2
	var_212_bool = var_210_bool == 0; // 0x1b0 Not
	if(var_212_bool == 0) goto Label_435; // 0x1b1 JumpB
	var_203_bool = 1; // 0x1b2 MovB
	
Label_435:
	if(var_203_bool == 0) goto Label_443; // 0x1b3 JumpB
	var_213_bool = 0; var_214_object = Obj(); // 0x1b4 PushV
	var_214_object = var_1_int; // 0x1b5 MovT
	func_1205(var_214_object); // 0x1b6 NEW_2
	var_215_bool = var_213_bool == 0; // 0x1b8 Not
	if(var_215_bool == 0) goto Label_443; // 0x1b9 JumpB
	var_202_bool = 1; // 0x1ba MovB
	
Label_443:
	if(var_202_bool == 0) goto Label_450; // 0x1bb JumpB
	var_216_bool = 0; var_217_object = Obj(); // 0x1bc PushV
	var_217_object = var_1_int; // 0x1bd MovT
	func_1229(var_217_object); // 0x1be NEW_2
	if(var_216_bool == 0) goto Label_450; // 0x1c0 JumpB
	var_201_bool = 1; // 0x1c1 MovB
	
Label_450:
	if(var_201_bool == 0) goto Label_456; // 0x1c2 JumpB
	var_222_int = 530402; // 0x1c3 PushI
	var_223_int = 31775; // 0x1c4 PushI
	var_224_int = 31774; // 0x1c5 PushI
	AddReply(var_222_int, var_223_int, var_224_int); // 0x1c6 TObjFunc
	
Label_456:
	var_225_int = 530395; // 0x1c8 PushI
	var_226_int = -1; // 0x1c9 PushI
	var_227_int = 31767; // 0x1ca PushI
	AddReply(var_225_int, var_226_int, var_227_int); // 0x1cb TObjFunc
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


func_967(var_29_object)
{
	var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_float = 0; var_33_cvector = CVector(0,0,0); // 0x3c7 PushV
	GetEyesHeight(var_32_float); // 0x3c8 ObjFunc
	var_33_cvector = CVector(0.0, 0.0, 0.0); // 0x3ca MovV
	var_34_float = GetByIndex(var_33_cvector, 1); // 0x3cb PushE
	var_34_float = var_32_float; // 0x3cc Mov
	SetByIndex(var_33_cvector, 1) = var_34_float; // 0x3cd PopE
	var_35_string = "head"; // 0x3ce PushS
	LookAsync(var_29_object, var_35_string, var_33_cvector); // 0x3cf Func
	return 4; // 0x3d1 Return
}


func_1096()
{
	func_1241(); // 0x44a NEW_2
	var_103_bool = 0; var_104_string = ""; var_105_string = ""; // 0x44c PushV
	var_104_string = "quest_b10_04"; // 0x44d MovS
	var_105_string = "completed"; // 0x44e MovS
	func_1006(var_103_bool, var_104_string, var_105_string); // 0x44f NEW_2
	return 0; // 0x451 Return
}


func_844(var_23_bool)
{
	var_24_bool = 0; var_25_bool = 0; // 0x34c PushV
	IsLoaded(var_25_bool); // 0x34d Func
	var_23_bool = var_25_bool; // 0x34f Mov
	return 2; // 0x350 Return
}


func_1229(var_223_bool)
{
	var_225_int = 0; var_226_string = ""; // 0x4ce PushV
	var_226_string = "oob10MorlokMain2"; // 0x4cf MovS
	func_1001(var_225_int, var_226_string); // 0x4d0 NEW_2
	var_227_int = 0; // 0x4d2 PushI
	var_228_bool = var_225_int == var_227_int; // 0x4d3 Eq
	if(var_228_bool == 0) goto Label_1239; // 0x4d4 JumpB
	var_223_bool = 1; // 0x4d5 MovB
	return 0; // 0x4d6 Return
	
Label_1239:
	var_223_bool = 0; // 0x4d7 MovB
	return 0; // 0x4d8 Return
}


func_1358(var_80_int)
{
	var_81_int = 0; var_82_int = 0; // 0x54e PushV
	var_83_string = "branch"; // 0x54f PushS
	GetVariable(var_83_string, var_82_int); // 0x550 Func
	var_84_int = 0; // 0x552 PushI
	var_85_bool = var_82_int == var_84_int; // 0x553 Eq
	if(var_85_bool == 0) goto Label_1368; // 0x554 JumpB
	var_80_int = 1; // 0x555 MovI
	return 2; // 0x556 Return
	
Label_1368:
	var_86_int = 1; // 0x558 PushI
	var_87_bool = var_82_int == var_86_int; // 0x559 Eq
	if(var_87_bool == 0) goto Label_1373; // 0x55a JumpB
	var_80_int = 2; // 0x55b MovI
	return 2; // 0x55c Return
	
Label_1373:
	var_80_int = 3; // 0x55d MovI
	return 2; // 0x55e Return
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
	func_991(var_55_cvector, var_56_cvector); // 0x36c NEW_2
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
	var_68_bool = 1; // 0x37c PushB
	CameraTransit(var_46_cvector, var_44_cvector, var_68_bool); // 0x37d Func
	var_69_float = GetByIndex(var_45_cvector, 0); // 0x37f PushE
	var_70_float = GetByIndex(var_45_cvector, 2); // 0x380 PushE
	Rotate(var_69_float, var_70_float); // 0x381 Func
	var_71_bool = 0; // 0x383 PushV
	func_1055(var_71_bool); // 0x384 NEW_2
	if(var_71_bool == 0) goto Label_904; // 0x386 JumpB
	goto Label_912; // 0x387 Jump
	
Label_912:
	CameraWaitForPlayFinish(); // 0x390 Func
	ResumeWorld(); // 0x392 Func
	var_28_bool = 1; // 0x394 MovB
	return 18; // 0x395 Return
	
Label_904:
	var_72_string = "head"; // 0x388 PushS
	HasAnimationTrack(var_48_bool, var_72_string); // 0x389 Func
	var_73_bool = var_48_bool; // 0x38b Push
	if(var_73_bool == 0) goto Label_912; // 0x38c JumpB
	var_74_string = "head"; // 0x38d PushS
	LookAsyncCamera(var_74_string); // 0x38e Func
}


func_82(var_18_bool)
{
	var_18_bool = 1; // 0x52 MovB
	return 0; // 0x53 Return
}


func_1106()
{
	var_138_string = "oob10MorlokMain1"; // 0x453 PushS
	var_139_int = 1; // 0x454 PushI
	SetVariable(var_138_string, var_139_int); // 0x455 Func
	return 0; // 0x457 Return
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


func_978()
{
	var_15_bool = 0; // 0x3d2 PushV
	func_1055(var_15_bool); // 0x3d3 NEW_2
	if(var_15_bool == 0) goto Label_984; // 0x3d5 JumpB
	lshStopSpeech(); // 0x3d6 Func
	
Label_984:
	return 0; // 0x3d8 Return
}


func_1112()
{
	var_117_string = "oob10MorlokMain2"; // 0x459 PushS
	var_118_int = 1; // 0x45a PushI
	SetVariable(var_117_string, var_118_int); // 0x45b Func
	return 0; // 0x45d Return
}


func_985(var_19_object)
{
	var_20_object = Obj(); var_21_object = Obj(); // 0x3d9 PushV
	self(var_21_object); // 0x3da Func
	var_19_object = var_21_object; // 0x3dc Mov
	return 2; // 0x3dd Return
}


func_1241()
{
	var_95_object = Obj(); var_96_object = Obj(); // 0x4d9 PushV
	var_97_int = 560; // 0x4da PushI
	var_98_int = 2; // 0x4db PushI
	var_99_int = 530539; // 0x4dc PushI
	CreateDiaryEntry(var_96_object, var_97_int, var_98_int, var_99_int); // 0x4dd Func
	var_100_bool = 0; var_101_object = Obj(); var_102_int = 0; // 0x4df PushV
	var_101_object = var_96_object; // 0x4e0 Mov
	var_102_int = 545; // 0x4e1 MovI
	func_1280(var_100_bool, var_101_object, var_102_int); // 0x4e2 NEW_2
	return 2; // 0x4e4 Return
}


func_1118()
{
	var_63_string = "b10q04MorlokTalk"; // 0x45f PushS
	var_64_int = 1; // 0x460 PushI
	SetVariable(var_63_string, var_64_int); // 0x461 Func
	return 0; // 0x463 Return
}


func_1375(var_16_object)
{
	var_17_int = 0; var_18_object = Obj(); // 0x560 PushV
	var_18_object = var_16_object; // 0x561 Mov
	TaskCall(1); // 0x562 TaskCall
	func_249(var_19_object, var_17_int, var_18_object); // 0x563 NEW_2
	TaskReturn(); // 0x564 TaskReturn
	return 0; // 0x566 Return
}


func_991(var_55_cvector, var_56_cvector)
{
	var_58_float = 0; var_59_float = 0; // 0x3df PushV
	var_60_int = var_56_cvector | var_56_cvector; // 0x3e0 Or
	var_59_float = sqrt(var_60_int); // 0x3e1 Sqrt2
	var_61_float = 0.0; // 0x3e2 PushF
	var_62_bool = var_59_float < var_61_float; // 0x3e3 LT
	if(var_62_bool == 0) goto Label_999; // 0x3e4 JumpB
	var_55_cvector = CVector(0.0, 0.0, 0.0); // 0x3e5 MovV
	return 2; // 0x3e6 Return
	
Label_999:
	var_55_cvector = var_56_cvector / var_56_cvector; // 0x3e7 Div2
	return 2; // 0x3e8 Return
}


func_1124(var_122_bool)
{
	var_124_int = 0; var_125_string = ""; // 0x465 PushV
	var_125_string = "b10q04"; // 0x466 MovS
	func_1001(var_124_int, var_125_string); // 0x467 NEW_2
	var_128_int = 1; // 0x469 PushI
	var_129_bool = var_124_int == var_128_int; // 0x46a Eq
	if(var_129_bool == 0) goto Label_1134; // 0x46b JumpB
	var_122_bool = 1; // 0x46c MovB
	return 0; // 0x46d Return
	
Label_1134:
	var_122_bool = 0; // 0x46e MovB
	return 0; // 0x46f Return
}


func_1254()
{
	var_38_object = Obj(); var_39_object = Obj(); // 0x4e6 PushV
	var_40_int = 547; // 0x4e7 PushI
	var_41_int = 2; // 0x4e8 PushI
	var_42_int = 530438; // 0x4e9 PushI
	CreateDiaryEntry(var_39_object, var_40_int, var_41_int, var_42_int); // 0x4ea Func
	var_43_bool = 0; var_44_object = Obj(); var_45_int = 0; // 0x4ec PushV
	var_44_object = var_39_object; // 0x4ed Mov
	var_45_int = 545; // 0x4ee MovI
	func_1280(var_43_bool, var_44_object, var_45_int); // 0x4ef NEW_2
	return 2; // 0x4f1 Return
}


func_1001(var_124_int, var_125_string)
{
	var_126_int = 0; var_127_int = 0; // 0x3e9 PushV
	GetVariable(var_125_string, var_127_int); // 0x3ea Func
	var_124_int = var_127_int; // 0x3ec Mov
	return 2; // 0x3ed Return
}


func_494(var_2_bool, var_140_string)
{
	var_141_bool = 0; // 0x1ef PushV
	func_1055(var_141_bool); // 0x1f0 NEW_2
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
	func_952(var_144_string, var_145_bool); // 0x200 NEW_2
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


func_1136(var_166_bool)
{
	var_168_bool = 0; // 0x471 PushV
	var_168_bool = 0; // 0x472 MovB
	var_169_bool = 0; // 0x473 PushV
	var_169_bool = 0; // 0x474 MovB
	var_170_bool = 0; // 0x475 PushV
	var_170_bool = 0; // 0x476 MovB
	var_171_int = 0; var_172_string = ""; // 0x477 PushV
	var_172_string = "b10q04NotkinTalk"; // 0x478 MovS
	func_1001(var_171_int, var_172_string); // 0x479 NEW_2
	var_173_int = 9; // 0x47b PushI
	var_174_bool = var_171_int == var_173_int; // 0x47c Eq
	if(var_174_bool == 0) goto Label_1158; // 0x47d JumpB
	var_175_int = 0; var_176_string = ""; // 0x47e PushV
	var_176_string = "b10q04Spi4kaTalk"; // 0x47f MovS
	func_1001(var_175_int, var_176_string); // 0x480 NEW_2
	var_177_int = 9; // 0x482 PushI
	var_178_bool = var_175_int == var_177_int; // 0x483 Eq
	if(var_178_bool == 0) goto Label_1158; // 0x484 JumpB
	var_170_bool = 1; // 0x485 MovB
	
Label_1158:
	if(var_170_bool == 0) goto Label_1167; // 0x486 JumpB
	var_179_int = 0; var_180_string = ""; // 0x487 PushV
	var_180_string = "b10q04MishkaTalk"; // 0x488 MovS
	func_1001(var_179_int, var_180_string); // 0x489 NEW_2
	var_181_int = 9; // 0x48b PushI
	var_182_bool = var_179_int == var_181_int; // 0x48c Eq
	if(var_182_bool == 0) goto Label_1167; // 0x48d JumpB
	var_169_bool = 1; // 0x48e MovB
	
Label_1167:
	if(var_169_bool == 0) goto Label_1176; // 0x48f JumpB
	var_183_int = 0; var_184_string = ""; // 0x490 PushV
	var_184_string = "b10q04LaskaTalk"; // 0x491 MovS
	func_1001(var_183_int, var_184_string); // 0x492 NEW_2
	var_185_int = 9; // 0x494 PushI
	var_186_bool = var_183_int == var_185_int; // 0x495 Eq
	if(var_186_bool == 0) goto Label_1176; // 0x496 JumpB
	var_168_bool = 1; // 0x497 MovB
	
Label_1176:
	if(var_168_bool == 0) goto Label_1179; // 0x498 JumpB
	var_166_bool = 1; // 0x499 MovB
	return 0; // 0x49a Return
	
Label_1179:
	var_166_bool = 0; // 0x49b MovB
	return 0; // 0x49c Return
}


func_1006(var_103_bool, var_104_string, var_105_string)
{
	var_106_object = Obj(); var_107_object = Obj(); // 0x3ee PushV
	FindActor(var_107_object, var_104_string); // 0x3ef Func
	var_108_bool = var_107_object == 0; // 0x3f1 NullEq
	if(var_108_bool == 0) goto Label_1013; // 0x3f2 JumpB
	var_103_bool = 0; // 0x3f3 MovB
	return 2; // 0x3f4 Return
	
Label_1013:
	Trigger(var_107_object, var_105_string); // 0x3f5 Func
	var_103_bool = 1; // 0x3f7 MovB
	return 2; // 0x3f8 Return
}


func_242(var_71_bool)
{
	var_71_bool = 1; // 0xf2 MovB
	return 0; // 0xf3 Return
}


func_1267(var_52_object)
{
	var_53_object = Obj(); var_54_object = Obj(); // 0x4f3 PushV
	GetDiaryRoot(var_54_object); // 0x4f4 Func
	var_55_bool = var_54_object == 0; // 0x4f6 Not
	if(var_55_bool == 0) goto Label_1277; // 0x4f7 JumpB
	var_56_string = "Can't retrieve diary root"; // 0x4f8 PushS
	Trace(var_56_string); // 0x4f9 Func
	var_52_object = 0; // 0x4fb MovB
	return 2; // 0x4fc Return
	
Label_1277:
	var_52_object = var_54_object; // 0x4fd Mov
	return 2; // 0x4fe Return
}


func_244()
{
	StopAnimation(); // 0xf4 Func
	StopGroup0(); // 0xf6 Func
	return 0; // 0xf8 Return
}


func_249(var_0_int, var_17_int, var_18_object)
{
	var_20_object = Obj(); var_21_bool = 0; var_22_int = 0; var_23_bool = 0; var_24_object = Obj(); var_25_bool = 0; var_26_int = 0; var_27_bool = 0; // 0xf9 PushV
	var_0_int = var_18_object; // 0xfa TMov
	var_28_bool = 0; var_29_object = Obj(); var_30_float = 0; // 0xfb PushV
	var_29_object = var_18_object; // 0xfc Mov
	var_30_float = 110.0; // 0xfd MovF
	func_849(var_29_object, var_30_float); // 0xfe NEW_2
	var_75_bool = var_28_bool == 0; // 0x100 Not
	if(var_75_bool == 0) goto Label_260; // 0x101 JumpB
	var_17_int = -2; // 0x102 MovI
	return 8; // 0x103 Return
	
Label_260:
	CreateDialog(var_24_object); // 0x104 Func
	var_76_int = 0; // 0x106 PushV
	func_1049(var_76_int); // 0x107 NEW_2
	SetNPCName(var_76_int); // 0x109 ObjFunc
	var_77_int = 0; // 0x10b PushV
	func_1047(var_77_int); // 0x10c NEW_2
	SetNPCDescription(var_77_int); // 0x10e ObjFunc
	var_78_string = ""; // 0x110 PushV
	func_1051(var_78_string); // 0x111 NEW_2
	SetPhoto(var_78_string); // 0x113 ObjFunc
	var_79_string = ""; // 0x115 PushV
	func_1053(var_79_string); // 0x116 NEW_2
	SetPhoto2(var_79_string); // 0x118 ObjFunc
	var_80_int = 0; // 0x11a PushV
	func_1358(var_80_int); // 0x11b NEW_2
	SetPlayerName(var_80_int); // 0x11d ObjFunc
	var_26_int = -1; // 0x11f MovI
	IsOverrideActive(var_25_bool); // 0x120 Func
	var_88_bool = var_25_bool; // 0x122 Push
	if(var_88_bool == 0) goto Label_294; // 0x123 JumpB
	var_17_int = -2; // 0x124 MovI
	return 8; // 0x125 Return
	
Label_294:
	DoDialog(var_24_object); // 0x126 Func
	var_89_object = Obj(); var_90_object = Obj(); // 0x128 PushV
	var_89_object = var_18_object; // 0x129 Mov
	var_90_object = var_24_object; // 0x12a Mov
	TaskCall(2); // 0x12b TaskCall
	func_323(var_91_object, var_92_object, var_93_string, var_94_bool, var_89_object, var_90_object); // 0x12c NEW_2
	TaskReturn(); // 0x12d TaskReturn
	IsDialogEnd(var_27_bool); // 0x12f ObjFunc
	
Label_305:
	var_228_bool = var_27_bool == 0; // 0x131 Not
	if(var_228_bool == 0) goto Label_312; // 0x132 JumpB
	sync(); // 0x133 Func
	IsDialogEnd(var_27_bool); // 0x135 ObjFunc
	goto Label_305; // 0x137 Jump
	
Label_312:
	var_229_object = Obj(); // 0x138 PushV
	var_229_object = var_18_object; // 0x139 Mov
	func_918(); // 0x13a NEW_2
	StopDialog(var_24_object); // 0x13c Func
	GetReturnValue(var_26_int); // 0x13e ObjFunc
	var_17_int = var_26_int; // 0x140 Mov
	return 8; // 0x141 Return
}


func_1018(var_35_float)
{
	var_36_float = 0; var_37_float = 0; // 0x3fa PushV
	GetGameTime(var_37_float); // 0x3fb Func
	var_35_float = var_37_float; // 0x3fd Mov
	return 2; // 0x3fe Return
}


func_1023(var_52_string, var_53_int)
{
	var_54_string = ""; var_55_string = ""; // 0x3ff PushV
	var_55_string = "idle"; // 0x400 MovS
	var_56_int = var_53_int; // 0x401 Push
	if(var_56_int == 0) goto Label_1028; // 0x402 JumpB
	var_55_string = var_55_string + var_53_int; // 0x403 Add2
	
Label_1028:
	var_52_string = var_55_string; // 0x404 Mov
	return 2; // 0x405 Return
}


