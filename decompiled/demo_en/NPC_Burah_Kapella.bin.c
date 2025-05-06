task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_cvector)
{
	var_53_int = 1; // 0x117 PushI
	if(var_53_int == 0) goto Label_680; // 0x118 JumpB
	func_5919(); // 0x11a NEW_2
	var_55_int = 31688; // 0x11c PushI
	var_56_bool = var_52_cvector == var_55_int; // 0x11d Eq
	if(var_56_bool == 0) goto Label_297; // 0x11e JumpB
	var_57_object = Obj(); var_58_object = Obj(); // 0x11f PushV
	var_57_object = var_1_object; // 0x120 MovT
	var_58_object = var_0_object; // 0x121 MovT
	func_6216(); // 0x122 NEW_2
	var_120_object = Obj(); var_121_object = Obj(); // 0x124 PushV
	var_120_object = var_1_object; // 0x125 MovT
	var_121_object = var_0_object; // 0x126 MovT
	func_6473(); // 0x127 NEW_2
	
Label_297:
	var_146_int = 31693; // 0x129 PushI
	var_147_bool = var_52_cvector == var_146_int; // 0x12a Eq
	if(var_147_bool == 0) goto Label_310; // 0x12b JumpB
	var_148_object = Obj(); var_149_object = Obj(); // 0x12c PushV
	var_148_object = var_1_object; // 0x12d MovT
	var_149_object = var_0_object; // 0x12e MovT
	func_6216(); // 0x12f NEW_2
	var_150_object = Obj(); var_151_object = Obj(); // 0x131 PushV
	var_150_object = var_1_object; // 0x132 MovT
	var_151_object = var_0_object; // 0x133 MovT
	func_6473(); // 0x134 NEW_2
	
Label_310:
	var_152_int = 31722; // 0x136 PushI
	var_153_bool = var_52_cvector == var_152_int; // 0x137 Eq
	if(var_153_bool == 0) goto Label_318; // 0x138 JumpB
	var_154_object = Obj(); var_155_object = Obj(); // 0x139 PushV
	var_154_object = var_1_object; // 0x13a MovT
	var_155_object = var_0_object; // 0x13b MovT
	func_6257(); // 0x13c NEW_2
	
Label_318:
	var_167_int = 31679; // 0x13e PushI
	var_168_bool = var_51_bool == var_167_int; // 0x13f Eq
	if(var_168_bool == 0) goto Label_458; // 0x140 JumpB
	var_169_bool = 0; // 0x141 PushV
	var_169_bool = 0; // 0x142 MovB
	var_170_bool = 0; // 0x143 PushV
	var_170_bool = 0; // 0x144 MovB
	var_171_bool = 0; var_172_object = Obj(); // 0x145 PushV
	var_172_object = var_1_object; // 0x146 MovT
	func_6632(var_172_object); // 0x147 NEW_2
	var_179_bool = var_171_bool == 0; // 0x149 Not
	if(var_179_bool == 0) goto Label_338; // 0x14a JumpB
	var_180_bool = 0; var_181_object = Obj(); // 0x14b PushV
	var_181_object = var_1_object; // 0x14c MovT
	func_6668(var_181_object); // 0x14d NEW_2
	var_186_bool = var_180_bool == 0; // 0x14f Not
	if(var_186_bool == 0) goto Label_338; // 0x150 JumpB
	var_170_bool = 1; // 0x151 MovB
	
Label_338:
	if(var_170_bool == 0) goto Label_345; // 0x152 JumpB
	var_187_bool = 0; var_188_object = Obj(); // 0x153 PushV
	var_188_object = var_1_object; // 0x154 MovT
	func_6704(var_187_bool, var_188_object); // 0x155 NEW_2
	if(var_187_bool == 0) goto Label_345; // 0x157 JumpB
	var_169_bool = 1; // 0x158 MovB
	
Label_345:
	if(var_169_bool == 0) goto Label_366; // 0x159 JumpB
	var_198_string = ""; // 0x15a PushV
	var_198_string = "Neutral"; // 0x15b MovS
	func_256(var_52_cvector, var_198_string); // 0x15c NEW_2
	var_215_int = 530291; // 0x15e PushI
	SetMessage(var_215_int); // 0x15f TObjFunc
	ClearReplies(); // 0x161 TObjFunc
	var_216_int = 531185; // 0x163 PushI
	var_217_int = -1; // 0x164 PushI
	var_218_int = 32490; // 0x165 PushI
	AddReply(var_216_int, var_217_int, var_218_int); // 0x166 TObjFunc
	var_219_int = 530292; // 0x168 PushI
	var_220_int = -1; // 0x169 PushI
	var_221_int = 31680; // 0x16a PushI
	AddReply(var_219_int, var_220_int, var_221_int); // 0x16b TObjFunc
	return 0; // 0x16d Return
	
Label_366:
	var_222_bool = 0; // 0x16e PushV
	var_222_bool = 0; // 0x16f MovB
	var_223_bool = 0; var_224_object = Obj(); // 0x170 PushV
	var_224_object = var_1_object; // 0x171 MovT
	func_6644(var_224_object); // 0x172 NEW_2
	if(var_223_bool == 0) goto Label_379; // 0x174 JumpB
	var_229_bool = 0; var_230_object = Obj(); // 0x175 PushV
	var_230_object = var_1_object; // 0x176 MovT
	func_6704(var_229_bool, var_230_object); // 0x177 NEW_2
	if(var_229_bool == 0) goto Label_379; // 0x179 JumpB
	var_222_bool = 1; // 0x17a MovB
	
Label_379:
	if(var_222_bool == 0) goto Label_405; // 0x17b JumpB
	var_231_object = Obj(); var_232_object = Obj(); // 0x17c PushV
	var_231_object = var_1_object; // 0x17d MovT
	var_232_object = var_0_object; // 0x17e MovT
	func_6210(); // 0x17f NEW_2
	var_235_string = ""; // 0x181 PushV
	var_235_string = "Impatience"; // 0x182 MovS
	func_256(var_52_cvector, var_235_string); // 0x183 NEW_2
	var_236_int = 530293; // 0x185 PushI
	SetMessage(var_236_int); // 0x186 TObjFunc
	ClearReplies(); // 0x188 TObjFunc
	var_237_int = 531188; // 0x18a PushI
	var_238_int = 32494; // 0x18b PushI
	var_239_int = 32493; // 0x18c PushI
	AddReply(var_237_int, var_238_int, var_239_int); // 0x18d TObjFunc
	var_240_int = 531193; // 0x18f PushI
	var_241_int = 32496; // 0x190 PushI
	var_242_int = 32498; // 0x191 PushI
	AddReply(var_240_int, var_241_int, var_242_int); // 0x192 TObjFunc
	return 0; // 0x194 Return
	
Label_405:
	var_243_string = ""; // 0x195 PushV
	var_243_string = "Neutral"; // 0x196 MovS
	func_256(var_52_cvector, var_243_string); // 0x197 NEW_2
	var_244_int = 530302; // 0x199 PushI
	SetMessage(var_244_int); // 0x19a TObjFunc
	ClearReplies(); // 0x19c TObjFunc
	var_245_bool = 0; // 0x19e PushV
	var_245_bool = 0; // 0x19f MovB
	var_246_bool = 0; var_247_object = Obj(); // 0x1a0 PushV
	var_247_object = var_1_object; // 0x1a1 MovT
	func_6656(var_247_object); // 0x1a2 NEW_2
	if(var_246_bool == 0) goto Label_427; // 0x1a4 JumpB
	var_252_bool = 0; var_253_object = Obj(); // 0x1a5 PushV
	var_253_object = var_1_object; // 0x1a6 MovT
	func_6704(var_252_bool, var_253_object); // 0x1a7 NEW_2
	if(var_252_bool == 0) goto Label_427; // 0x1a9 JumpB
	var_245_bool = 1; // 0x1aa MovB
	
Label_427:
	if(var_245_bool == 0) goto Label_433; // 0x1ab JumpB
	var_254_int = 530303; // 0x1ac PushI
	var_255_int = 31692; // 0x1ad PushI
	var_256_int = 31691; // 0x1ae PushI
	AddReply(var_254_int, var_255_int, var_256_int); // 0x1af TObjFunc
	
Label_433:
	var_257_bool = 0; // 0x1b1 PushV
	var_257_bool = 0; // 0x1b2 MovB
	var_258_bool = 0; var_259_object = Obj(); // 0x1b3 PushV
	var_259_object = var_1_object; // 0x1b4 MovT
	func_6680(var_259_object); // 0x1b5 NEW_2
	if(var_258_bool == 0) goto Label_446; // 0x1b7 JumpB
	var_264_bool = 0; var_265_object = Obj(); // 0x1b8 PushV
	var_265_object = var_1_object; // 0x1b9 MovT
	func_6692(var_265_object); // 0x1ba NEW_2
	if(var_264_bool == 0) goto Label_446; // 0x1bc JumpB
	var_257_bool = 1; // 0x1bd MovB
	
Label_446:
	if(var_257_bool == 0) goto Label_452; // 0x1be JumpB
	var_270_int = 530333; // 0x1bf PushI
	var_271_int = 31721; // 0x1c0 PushI
	var_272_int = 31720; // 0x1c1 PushI
	AddReply(var_270_int, var_271_int, var_272_int); // 0x1c2 TObjFunc
	
Label_452:
	var_273_int = 530306; // 0x1c4 PushI
	var_274_int = -1; // 0x1c5 PushI
	var_275_int = 31694; // 0x1c6 PushI
	AddReply(var_273_int, var_274_int, var_275_int); // 0x1c7 TObjFunc
	return 0; // 0x1c9 Return
	
Label_458:
	var_276_int = 31721; // 0x1ca PushI
	var_277_bool = var_51_bool == var_276_int; // 0x1cb Eq
	if(var_277_bool == 0) goto Label_476; // 0x1cc JumpB
	var_278_string = ""; // 0x1cd PushV
	var_278_string = "Neutral"; // 0x1ce MovS
	func_256(var_52_cvector, var_278_string); // 0x1cf NEW_2
	var_279_int = 530334; // 0x1d1 PushI
	SetMessage(var_279_int); // 0x1d2 TObjFunc
	ClearReplies(); // 0x1d4 TObjFunc
	var_280_int = 531186; // 0x1d6 PushI
	var_281_int = 32492; // 0x1d7 PushI
	var_282_int = 32491; // 0x1d8 PushI
	AddReply(var_280_int, var_281_int, var_282_int); // 0x1d9 TObjFunc
	return 0; // 0x1db Return
	
Label_476:
	var_283_int = 32492; // 0x1dc PushI
	var_284_bool = var_51_bool == var_283_int; // 0x1dd Eq
	if(var_284_bool == 0) goto Label_494; // 0x1de JumpB
	var_285_string = ""; // 0x1df PushV
	var_285_string = "Neutral"; // 0x1e0 MovS
	func_256(var_52_cvector, var_285_string); // 0x1e1 NEW_2
	var_286_int = 531187; // 0x1e3 PushI
	SetMessage(var_286_int); // 0x1e4 TObjFunc
	ClearReplies(); // 0x1e6 TObjFunc
	var_287_int = 530335; // 0x1e8 PushI
	var_288_int = -1; // 0x1e9 PushI
	var_289_int = 31722; // 0x1ea PushI
	AddReply(var_287_int, var_288_int, var_289_int); // 0x1eb TObjFunc
	return 0; // 0x1ed Return
	
Label_494:
	var_290_int = 31692; // 0x1ee PushI
	var_291_bool = var_51_bool == var_290_int; // 0x1ef Eq
	if(var_291_bool == 0) goto Label_512; // 0x1f0 JumpB
	var_292_string = ""; // 0x1f1 PushV
	var_292_string = "Sympathy"; // 0x1f2 MovS
	func_256(var_52_cvector, var_292_string); // 0x1f3 NEW_2
	var_293_int = 530304; // 0x1f5 PushI
	SetMessage(var_293_int); // 0x1f6 TObjFunc
	ClearReplies(); // 0x1f8 TObjFunc
	var_294_int = 530305; // 0x1fa PushI
	var_295_int = -1; // 0x1fb PushI
	var_296_int = 31693; // 0x1fc PushI
	AddReply(var_294_int, var_295_int, var_296_int); // 0x1fd TObjFunc
	return 0; // 0x1ff Return
	
Label_512:
	var_297_int = 32494; // 0x200 PushI
	var_298_bool = var_51_bool == var_297_int; // 0x201 Eq
	if(var_298_bool == 0) goto Label_535; // 0x202 JumpB
	var_299_string = ""; // 0x203 PushV
	var_299_string = "Impatience"; // 0x204 MovS
	func_256(var_52_cvector, var_299_string); // 0x205 NEW_2
	var_300_int = 531189; // 0x207 PushI
	SetMessage(var_300_int); // 0x208 TObjFunc
	ClearReplies(); // 0x20a TObjFunc
	var_301_int = 531190; // 0x20c PushI
	var_302_int = 32496; // 0x20d PushI
	var_303_int = 32495; // 0x20e PushI
	AddReply(var_301_int, var_302_int, var_303_int); // 0x20f TObjFunc
	var_304_int = 531192; // 0x211 PushI
	var_305_int = 32500; // 0x212 PushI
	var_306_int = 32497; // 0x213 PushI
	AddReply(var_304_int, var_305_int, var_306_int); // 0x214 TObjFunc
	return 0; // 0x216 Return
	
Label_535:
	var_307_int = 32500; // 0x217 PushI
	var_308_bool = var_51_bool == var_307_int; // 0x218 Eq
	if(var_308_bool == 0) goto Label_558; // 0x219 JumpB
	var_309_string = ""; // 0x21a PushV
	var_309_string = "Neutral"; // 0x21b MovS
	func_256(var_52_cvector, var_309_string); // 0x21c NEW_2
	var_310_int = 531194; // 0x21e PushI
	SetMessage(var_310_int); // 0x21f TObjFunc
	ClearReplies(); // 0x221 TObjFunc
	var_311_int = 531196; // 0x223 PushI
	var_312_int = 32496; // 0x224 PushI
	var_313_int = 32502; // 0x225 PushI
	AddReply(var_311_int, var_312_int, var_313_int); // 0x226 TObjFunc
	var_314_int = 531195; // 0x228 PushI
	var_315_int = -1; // 0x229 PushI
	var_316_int = 32501; // 0x22a PushI
	AddReply(var_314_int, var_315_int, var_316_int); // 0x22b TObjFunc
	return 0; // 0x22d Return
	
Label_558:
	var_317_int = 32496; // 0x22e PushI
	var_318_bool = var_51_bool == var_317_int; // 0x22f Eq
	if(var_318_bool == 0) goto Label_581; // 0x230 JumpB
	var_319_string = ""; // 0x231 PushV
	var_319_string = "Impatience"; // 0x232 MovS
	func_256(var_52_cvector, var_319_string); // 0x233 NEW_2
	var_320_int = 531191; // 0x235 PushI
	SetMessage(var_320_int); // 0x236 TObjFunc
	ClearReplies(); // 0x238 TObjFunc
	var_321_int = 530294; // 0x23a PushI
	var_322_int = 31683; // 0x23b PushI
	var_323_int = 31682; // 0x23c PushI
	AddReply(var_321_int, var_322_int, var_323_int); // 0x23d TObjFunc
	var_324_int = 531197; // 0x23f PushI
	var_325_int = 31685; // 0x240 PushI
	var_326_int = 32504; // 0x241 PushI
	AddReply(var_324_int, var_325_int, var_326_int); // 0x242 TObjFunc
	return 0; // 0x244 Return
	
Label_581:
	var_327_int = 31683; // 0x245 PushI
	var_328_bool = var_51_bool == var_327_int; // 0x246 Eq
	if(var_328_bool == 0) goto Label_599; // 0x247 JumpB
	var_329_string = ""; // 0x248 PushV
	var_329_string = "Neutral"; // 0x249 MovS
	func_256(var_52_cvector, var_329_string); // 0x24a NEW_2
	var_330_int = 530295; // 0x24c PushI
	SetMessage(var_330_int); // 0x24d TObjFunc
	ClearReplies(); // 0x24f TObjFunc
	var_331_int = 530296; // 0x251 PushI
	var_332_int = 31685; // 0x252 PushI
	var_333_int = 31684; // 0x253 PushI
	AddReply(var_331_int, var_332_int, var_333_int); // 0x254 TObjFunc
	return 0; // 0x256 Return
	
Label_599:
	var_334_int = 31685; // 0x257 PushI
	var_335_bool = var_51_bool == var_334_int; // 0x258 Eq
	if(var_335_bool == 0) goto Label_622; // 0x259 JumpB
	var_336_string = ""; // 0x25a PushV
	var_336_string = "Neutral"; // 0x25b MovS
	func_256(var_52_cvector, var_336_string); // 0x25c NEW_2
	var_337_int = 530297; // 0x25e PushI
	SetMessage(var_337_int); // 0x25f TObjFunc
	ClearReplies(); // 0x261 TObjFunc
	var_338_int = 530298; // 0x263 PushI
	var_339_int = 31687; // 0x264 PushI
	var_340_int = 31686; // 0x265 PushI
	AddReply(var_338_int, var_339_int, var_340_int); // 0x266 TObjFunc
	var_341_int = 531198; // 0x268 PushI
	var_342_int = 32507; // 0x269 PushI
	var_343_int = 32506; // 0x26a PushI
	AddReply(var_341_int, var_342_int, var_343_int); // 0x26b TObjFunc
	return 0; // 0x26d Return
	
Label_622:
	var_344_int = 32507; // 0x26e PushI
	var_345_bool = var_51_bool == var_344_int; // 0x26f Eq
	if(var_345_bool == 0) goto Label_645; // 0x270 JumpB
	var_346_string = ""; // 0x271 PushV
	var_346_string = "Neutral"; // 0x272 MovS
	func_256(var_52_cvector, var_346_string); // 0x273 NEW_2
	var_347_int = 531199; // 0x275 PushI
	SetMessage(var_347_int); // 0x276 TObjFunc
	ClearReplies(); // 0x278 TObjFunc
	var_348_int = 531200; // 0x27a PushI
	var_349_int = 31687; // 0x27b PushI
	var_350_int = 32508; // 0x27c PushI
	AddReply(var_348_int, var_349_int, var_350_int); // 0x27d TObjFunc
	var_351_int = 531201; // 0x27f PushI
	var_352_int = -1; // 0x280 PushI
	var_353_int = 32509; // 0x281 PushI
	AddReply(var_351_int, var_352_int, var_353_int); // 0x282 TObjFunc
	return 0; // 0x284 Return
	
Label_645:
	var_354_int = 31687; // 0x285 PushI
	var_355_bool = var_51_bool == var_354_int; // 0x286 Eq
	if(var_355_bool == 0) goto Label_668; // 0x287 JumpB
	var_356_string = ""; // 0x288 PushV
	var_356_string = "Neutral"; // 0x289 MovS
	func_256(var_52_cvector, var_356_string); // 0x28a NEW_2
	var_357_int = 530299; // 0x28c PushI
	SetMessage(var_357_int); // 0x28d TObjFunc
	ClearReplies(); // 0x28f TObjFunc
	var_358_int = 530300; // 0x291 PushI
	var_359_int = -1; // 0x292 PushI
	var_360_int = 31688; // 0x293 PushI
	AddReply(var_358_int, var_359_int, var_360_int); // 0x294 TObjFunc
	var_361_int = 530301; // 0x296 PushI
	var_362_int = -1; // 0x297 PushI
	var_363_int = 31689; // 0x298 PushI
	AddReply(var_361_int, var_362_int, var_363_int); // 0x299 TObjFunc
	return 0; // 0x29b Return
	
Label_668:
	var_3_string = 1; // 0x29c TMovB
	var_364_bool = 0; // 0x29d PushV
	func_6093(var_364_bool); // 0x29e NEW_2
	if(var_364_bool == 0) goto Label_676; // 0x2a0 JumpB
	lshStopAnimation(); // 0x2a1 Func
	goto Label_678; // 0x2a3 Jump
	
Label_678:
	return 0; // 0x2a6 Return
	
Label_676:
	StopAnimation(); // 0x2a4 Func
	
Label_680:
	return 0; // 0x2a8 Return
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_cvector)
{
	var_53_int = 1; // 0x378 PushI
	if(var_53_int == 0) goto Label_1235; // 0x379 JumpB
	func_5919(); // 0x37b NEW_2
	var_55_int = 32424; // 0x37d PushI
	var_56_bool = var_52_cvector == var_55_int; // 0x37e Eq
	if(var_56_bool == 0) goto Label_901; // 0x37f JumpB
	var_57_object = Obj(); var_58_object = Obj(); // 0x380 PushV
	var_57_object = var_1_object; // 0x381 MovT
	var_58_object = var_0_object; // 0x382 MovT
	func_6370(); // 0x383 NEW_2
	
Label_901:
	var_100_int = 32430; // 0x385 PushI
	var_101_bool = var_52_cvector == var_100_int; // 0x386 Eq
	if(var_101_bool == 0) goto Label_909; // 0x387 JumpB
	var_102_object = Obj(); var_103_object = Obj(); // 0x388 PushV
	var_102_object = var_1_object; // 0x389 MovT
	var_103_object = var_0_object; // 0x38a MovT
	func_6370(); // 0x38b NEW_2
	
Label_909:
	var_104_int = 32449; // 0x38d PushI
	var_105_bool = var_52_cvector == var_104_int; // 0x38e Eq
	if(var_105_bool == 0) goto Label_927; // 0x38f JumpB
	var_106_object = Obj(); var_107_object = Obj(); // 0x390 PushV
	var_106_object = var_1_object; // 0x391 MovT
	var_107_object = var_0_object; // 0x392 MovT
	func_6386(); // 0x393 NEW_2
	var_122_object = Obj(); var_123_object = Obj(); // 0x395 PushV
	var_122_object = var_1_object; // 0x396 MovT
	var_123_object = var_0_object; // 0x397 MovT
	func_6456(var_123_object); // 0x398 NEW_2
	var_146_object = Obj(); var_147_object = Obj(); // 0x39a PushV
	var_146_object = var_1_object; // 0x39b MovT
	var_147_object = var_0_object; // 0x39c MovT
	func_6273(); // 0x39d NEW_2
	
Label_927:
	var_150_int = 32423; // 0x39f PushI
	var_151_bool = var_51_bool == var_150_int; // 0x3a0 Eq
	if(var_151_bool == 0) goto Label_995; // 0x3a1 JumpB
	var_152_bool = 0; var_153_object = Obj(); // 0x3a2 PushV
	var_153_object = var_1_object; // 0x3a3 MovT
	func_6726(var_153_object); // 0x3a4 NEW_2
	if(var_152_bool == 0) goto Label_960; // 0x3a6 JumpB
	var_160_object = Obj(); var_161_object = Obj(); // 0x3a7 PushV
	var_160_object = var_1_object; // 0x3a8 MovT
	var_161_object = var_0_object; // 0x3a9 MovT
	func_6364(); // 0x3aa NEW_2
	var_164_string = ""; // 0x3ac PushV
	var_164_string = "Neutral"; // 0x3ad MovS
	func_865(var_52_cvector, var_164_string); // 0x3ae NEW_2
	var_181_int = 531105; // 0x3b0 PushI
	SetMessage(var_181_int); // 0x3b1 TObjFunc
	ClearReplies(); // 0x3b3 TObjFunc
	var_182_int = 531107; // 0x3b5 PushI
	var_183_int = 32678; // 0x3b6 PushI
	var_184_int = 32425; // 0x3b7 PushI
	AddReply(var_182_int, var_183_int, var_184_int); // 0x3b8 TObjFunc
	var_185_int = 531353; // 0x3ba PushI
	var_186_int = 32678; // 0x3bb PushI
	var_187_int = 32685; // 0x3bc PushI
	AddReply(var_185_int, var_186_int, var_187_int); // 0x3bd TObjFunc
	return 0; // 0x3bf Return
	
Label_960:
	var_188_string = ""; // 0x3c0 PushV
	var_188_string = "Neutral"; // 0x3c1 MovS
	func_865(var_52_cvector, var_188_string); // 0x3c2 NEW_2
	var_189_int = 531108; // 0x3c4 PushI
	SetMessage(var_189_int); // 0x3c5 TObjFunc
	ClearReplies(); // 0x3c7 TObjFunc
	var_190_bool = 0; var_191_object = Obj(); // 0x3c9 PushV
	var_191_object = var_1_object; // 0x3ca MovT
	func_6738(var_191_object); // 0x3cb NEW_2
	if(var_190_bool == 0) goto Label_979; // 0x3cd JumpB
	var_196_int = 531109; // 0x3ce PushI
	var_197_int = 32429; // 0x3cf PushI
	var_198_int = 32427; // 0x3d0 PushI
	AddReply(var_196_int, var_197_int, var_198_int); // 0x3d1 TObjFunc
	
Label_979:
	var_199_bool = 0; var_200_object = Obj(); // 0x3d3 PushV
	var_200_object = var_1_object; // 0x3d4 MovT
	func_6750(var_200_object); // 0x3d5 NEW_2
	if(var_199_bool == 0) goto Label_989; // 0x3d7 JumpB
	var_205_int = 531129; // 0x3d8 PushI
	var_206_int = 32448; // 0x3d9 PushI
	var_207_int = 32447; // 0x3da PushI
	AddReply(var_205_int, var_206_int, var_207_int); // 0x3db TObjFunc
	
Label_989:
	var_208_int = 531110; // 0x3dd PushI
	var_209_int = -1; // 0x3de PushI
	var_210_int = 32428; // 0x3df PushI
	AddReply(var_208_int, var_209_int, var_210_int); // 0x3e0 TObjFunc
	return 0; // 0x3e2 Return
	
Label_995:
	var_211_int = 32448; // 0x3e3 PushI
	var_212_bool = var_51_bool == var_211_int; // 0x3e4 Eq
	if(var_212_bool == 0) goto Label_1013; // 0x3e5 JumpB
	var_213_string = ""; // 0x3e6 PushV
	var_213_string = "Neutral"; // 0x3e7 MovS
	func_865(var_52_cvector, var_213_string); // 0x3e8 NEW_2
	var_214_int = 531130; // 0x3ea PushI
	SetMessage(var_214_int); // 0x3eb TObjFunc
	ClearReplies(); // 0x3ed TObjFunc
	var_215_int = 531365; // 0x3ef PushI
	var_216_int = 32702; // 0x3f0 PushI
	var_217_int = 32701; // 0x3f1 PushI
	AddReply(var_215_int, var_216_int, var_217_int); // 0x3f2 TObjFunc
	return 0; // 0x3f4 Return
	
Label_1013:
	var_218_int = 32702; // 0x3f5 PushI
	var_219_bool = var_51_bool == var_218_int; // 0x3f6 Eq
	if(var_219_bool == 0) goto Label_1036; // 0x3f7 JumpB
	var_220_string = ""; // 0x3f8 PushV
	var_220_string = "Sympathy"; // 0x3f9 MovS
	func_865(var_52_cvector, var_220_string); // 0x3fa NEW_2
	var_221_int = 531366; // 0x3fc PushI
	SetMessage(var_221_int); // 0x3fd TObjFunc
	ClearReplies(); // 0x3ff TObjFunc
	var_222_int = 531367; // 0x401 PushI
	var_223_int = 32704; // 0x402 PushI
	var_224_int = 32703; // 0x403 PushI
	AddReply(var_222_int, var_223_int, var_224_int); // 0x404 TObjFunc
	var_225_int = 531369; // 0x406 PushI
	var_226_int = 32704; // 0x407 PushI
	var_227_int = 32705; // 0x408 PushI
	AddReply(var_225_int, var_226_int, var_227_int); // 0x409 TObjFunc
	return 0; // 0x40b Return
	
Label_1036:
	var_228_int = 32704; // 0x40c PushI
	var_229_bool = var_51_bool == var_228_int; // 0x40d Eq
	if(var_229_bool == 0) goto Label_1054; // 0x40e JumpB
	var_230_string = ""; // 0x40f PushV
	var_230_string = "Fear"; // 0x410 MovS
	func_865(var_52_cvector, var_230_string); // 0x411 NEW_2
	var_231_int = 531368; // 0x413 PushI
	SetMessage(var_231_int); // 0x414 TObjFunc
	ClearReplies(); // 0x416 TObjFunc
	var_232_int = 531131; // 0x418 PushI
	var_233_int = -1; // 0x419 PushI
	var_234_int = 32449; // 0x41a PushI
	AddReply(var_232_int, var_233_int, var_234_int); // 0x41b TObjFunc
	return 0; // 0x41d Return
	
Label_1054:
	var_235_int = 32429; // 0x41e PushI
	var_236_bool = var_51_bool == var_235_int; // 0x41f Eq
	if(var_236_bool == 0) goto Label_1072; // 0x420 JumpB
	var_237_string = ""; // 0x421 PushV
	var_237_string = "Neutral"; // 0x422 MovS
	func_865(var_52_cvector, var_237_string); // 0x423 NEW_2
	var_238_int = 531111; // 0x425 PushI
	SetMessage(var_238_int); // 0x426 TObjFunc
	ClearReplies(); // 0x428 TObjFunc
	var_239_int = 531112; // 0x42a PushI
	var_240_int = -1; // 0x42b PushI
	var_241_int = 32430; // 0x42c PushI
	AddReply(var_239_int, var_240_int, var_241_int); // 0x42d TObjFunc
	return 0; // 0x42f Return
	
Label_1072:
	var_242_int = 32678; // 0x430 PushI
	var_243_bool = var_51_bool == var_242_int; // 0x431 Eq
	if(var_243_bool == 0) goto Label_1095; // 0x432 JumpB
	var_244_string = ""; // 0x433 PushV
	var_244_string = "Fear"; // 0x434 MovS
	func_865(var_52_cvector, var_244_string); // 0x435 NEW_2
	var_245_int = 531346; // 0x437 PushI
	SetMessage(var_245_int); // 0x438 TObjFunc
	ClearReplies(); // 0x43a TObjFunc
	var_246_int = 531347; // 0x43c PushI
	var_247_int = 32680; // 0x43d PushI
	var_248_int = 32679; // 0x43e PushI
	AddReply(var_246_int, var_247_int, var_248_int); // 0x43f TObjFunc
	var_249_int = 531354; // 0x441 PushI
	var_250_int = 32687; // 0x442 PushI
	var_251_int = 32686; // 0x443 PushI
	AddReply(var_249_int, var_250_int, var_251_int); // 0x444 TObjFunc
	return 0; // 0x446 Return
	
Label_1095:
	var_252_int = 32687; // 0x447 PushI
	var_253_bool = var_51_bool == var_252_int; // 0x448 Eq
	if(var_253_bool == 0) goto Label_1118; // 0x449 JumpB
	var_254_string = ""; // 0x44a PushV
	var_254_string = "Neutral"; // 0x44b MovS
	func_865(var_52_cvector, var_254_string); // 0x44c NEW_2
	var_255_int = 531355; // 0x44e PushI
	SetMessage(var_255_int); // 0x44f TObjFunc
	ClearReplies(); // 0x451 TObjFunc
	var_256_int = 531356; // 0x453 PushI
	var_257_int = 32680; // 0x454 PushI
	var_258_int = 32688; // 0x455 PushI
	AddReply(var_256_int, var_257_int, var_258_int); // 0x456 TObjFunc
	var_259_int = 531357; // 0x458 PushI
	var_260_int = -1; // 0x459 PushI
	var_261_int = 32689; // 0x45a PushI
	AddReply(var_259_int, var_260_int, var_261_int); // 0x45b TObjFunc
	return 0; // 0x45d Return
	
Label_1118:
	var_262_int = 32680; // 0x45e PushI
	var_263_bool = var_51_bool == var_262_int; // 0x45f Eq
	if(var_263_bool == 0) goto Label_1141; // 0x460 JumpB
	var_264_string = ""; // 0x461 PushV
	var_264_string = "Fear"; // 0x462 MovS
	func_865(var_52_cvector, var_264_string); // 0x463 NEW_2
	var_265_int = 531348; // 0x465 PushI
	SetMessage(var_265_int); // 0x466 TObjFunc
	ClearReplies(); // 0x468 TObjFunc
	var_266_int = 531349; // 0x46a PushI
	var_267_int = 32682; // 0x46b PushI
	var_268_int = 32681; // 0x46c PushI
	AddReply(var_266_int, var_267_int, var_268_int); // 0x46d TObjFunc
	var_269_int = 531358; // 0x46f PushI
	var_270_int = 32692; // 0x470 PushI
	var_271_int = 32691; // 0x471 PushI
	AddReply(var_269_int, var_270_int, var_271_int); // 0x472 TObjFunc
	return 0; // 0x474 Return
	
Label_1141:
	var_272_int = 32692; // 0x475 PushI
	var_273_bool = var_51_bool == var_272_int; // 0x476 Eq
	if(var_273_bool == 0) goto Label_1159; // 0x477 JumpB
	var_274_string = ""; // 0x478 PushV
	var_274_string = "Impatience"; // 0x479 MovS
	func_865(var_52_cvector, var_274_string); // 0x47a NEW_2
	var_275_int = 531359; // 0x47c PushI
	SetMessage(var_275_int); // 0x47d TObjFunc
	ClearReplies(); // 0x47f TObjFunc
	var_276_int = 531360; // 0x481 PushI
	var_277_int = 32682; // 0x482 PushI
	var_278_int = 32693; // 0x483 PushI
	AddReply(var_276_int, var_277_int, var_278_int); // 0x484 TObjFunc
	return 0; // 0x486 Return
	
Label_1159:
	var_279_int = 32682; // 0x487 PushI
	var_280_bool = var_51_bool == var_279_int; // 0x488 Eq
	if(var_280_bool == 0) goto Label_1182; // 0x489 JumpB
	var_281_string = ""; // 0x48a PushV
	var_281_string = "Strength"; // 0x48b MovS
	func_865(var_52_cvector, var_281_string); // 0x48c NEW_2
	var_282_int = 531350; // 0x48e PushI
	SetMessage(var_282_int); // 0x48f TObjFunc
	ClearReplies(); // 0x491 TObjFunc
	var_283_int = 531351; // 0x493 PushI
	var_284_int = 32684; // 0x494 PushI
	var_285_int = 32683; // 0x495 PushI
	AddReply(var_283_int, var_284_int, var_285_int); // 0x496 TObjFunc
	var_286_int = 531362; // 0x498 PushI
	var_287_int = 32697; // 0x499 PushI
	var_288_int = 32696; // 0x49a PushI
	AddReply(var_286_int, var_287_int, var_288_int); // 0x49b TObjFunc
	return 0; // 0x49d Return
	
Label_1182:
	var_289_int = 32697; // 0x49e PushI
	var_290_bool = var_51_bool == var_289_int; // 0x49f Eq
	if(var_290_bool == 0) goto Label_1200; // 0x4a0 JumpB
	var_291_string = ""; // 0x4a1 PushV
	var_291_string = "Neutral"; // 0x4a2 MovS
	func_865(var_52_cvector, var_291_string); // 0x4a3 NEW_2
	var_292_int = 531363; // 0x4a5 PushI
	SetMessage(var_292_int); // 0x4a6 TObjFunc
	ClearReplies(); // 0x4a8 TObjFunc
	var_293_int = 531364; // 0x4aa PushI
	var_294_int = 32684; // 0x4ab PushI
	var_295_int = 32698; // 0x4ac PushI
	AddReply(var_293_int, var_294_int, var_295_int); // 0x4ad TObjFunc
	return 0; // 0x4af Return
	
Label_1200:
	var_296_int = 32684; // 0x4b0 PushI
	var_297_bool = var_51_bool == var_296_int; // 0x4b1 Eq
	if(var_297_bool == 0) goto Label_1223; // 0x4b2 JumpB
	var_298_string = ""; // 0x4b3 PushV
	var_298_string = "Strength"; // 0x4b4 MovS
	func_865(var_52_cvector, var_298_string); // 0x4b5 NEW_2
	var_299_int = 531352; // 0x4b7 PushI
	SetMessage(var_299_int); // 0x4b8 TObjFunc
	ClearReplies(); // 0x4ba TObjFunc
	var_300_int = 531106; // 0x4bc PushI
	var_301_int = -1; // 0x4bd PushI
	var_302_int = 32424; // 0x4be PushI
	AddReply(var_300_int, var_301_int, var_302_int); // 0x4bf TObjFunc
	var_303_int = 531361; // 0x4c1 PushI
	var_304_int = -1; // 0x4c2 PushI
	var_305_int = 32695; // 0x4c3 PushI
	AddReply(var_303_int, var_304_int, var_305_int); // 0x4c4 TObjFunc
	return 0; // 0x4c6 Return
	
Label_1223:
	var_3_string = 1; // 0x4c7 TMovB
	var_306_bool = 0; // 0x4c8 PushV
	func_6093(var_306_bool); // 0x4c9 NEW_2
	if(var_306_bool == 0) goto Label_1231; // 0x4cb JumpB
	lshStopAnimation(); // 0x4cc Func
	goto Label_1233; // 0x4ce Jump
	
Label_1233:
	return 0; // 0x4d1 Return
	
Label_1231:
	StopAnimation(); // 0x4cf Func
	
Label_1235:
	return 0; // 0x4d3 Return
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_cvector)
{
	var_53_int = 1; // 0x57b PushI
	if(var_53_int == 0) goto Label_1589; // 0x57c JumpB
	func_5919(); // 0x57e NEW_2
	var_55_int = 36934; // 0x580 PushI
	var_56_bool = var_52_cvector == var_55_int; // 0x581 Eq
	if(var_56_bool == 0) goto Label_1416; // 0x582 JumpB
	var_57_object = Obj(); var_58_object = Obj(); // 0x583 PushV
	var_57_object = var_1_object; // 0x584 MovT
	var_58_object = var_0_object; // 0x585 MovT
	func_6438(); // 0x586 NEW_2
	
Label_1416:
	var_61_int = 36933; // 0x588 PushI
	var_62_bool = var_51_bool == var_61_int; // 0x589 Eq
	if(var_62_bool == 0) goto Label_1444; // 0x58a JumpB
	var_63_string = ""; // 0x58b PushV
	var_63_string = "Neutral"; // 0x58c MovS
	func_1380(var_52_cvector, var_63_string); // 0x58d NEW_2
	var_80_int = 535258; // 0x58f PushI
	SetMessage(var_80_int); // 0x590 TObjFunc
	ClearReplies(); // 0x592 TObjFunc
	var_81_bool = 0; var_82_object = Obj(); // 0x594 PushV
	var_82_object = var_1_object; // 0x595 MovT
	func_6786(var_82_object); // 0x596 NEW_2
	if(var_81_bool == 0) goto Label_1438; // 0x598 JumpB
	var_89_int = 535259; // 0x599 PushI
	var_90_int = 36983; // 0x59a PushI
	var_91_int = 36934; // 0x59b PushI
	AddReply(var_89_int, var_90_int, var_91_int); // 0x59c TObjFunc
	
Label_1438:
	var_92_int = 535304; // 0x59e PushI
	var_93_int = -1; // 0x59f PushI
	var_94_int = 36982; // 0x5a0 PushI
	AddReply(var_92_int, var_93_int, var_94_int); // 0x5a1 TObjFunc
	return 0; // 0x5a3 Return
	
Label_1444:
	var_95_int = 36983; // 0x5a4 PushI
	var_96_bool = var_51_bool == var_95_int; // 0x5a5 Eq
	if(var_96_bool == 0) goto Label_1467; // 0x5a6 JumpB
	var_97_string = ""; // 0x5a7 PushV
	var_97_string = "Strength"; // 0x5a8 MovS
	func_1380(var_52_cvector, var_97_string); // 0x5a9 NEW_2
	var_98_int = 535305; // 0x5ab PushI
	SetMessage(var_98_int); // 0x5ac TObjFunc
	ClearReplies(); // 0x5ae TObjFunc
	var_99_int = 535306; // 0x5b0 PushI
	var_100_int = 36985; // 0x5b1 PushI
	var_101_int = 36984; // 0x5b2 PushI
	AddReply(var_99_int, var_100_int, var_101_int); // 0x5b3 TObjFunc
	var_102_int = 535318; // 0x5b5 PushI
	var_103_int = 36998; // 0x5b6 PushI
	var_104_int = 36997; // 0x5b7 PushI
	AddReply(var_102_int, var_103_int, var_104_int); // 0x5b8 TObjFunc
	return 0; // 0x5ba Return
	
Label_1467:
	var_105_int = 36998; // 0x5bb PushI
	var_106_bool = var_51_bool == var_105_int; // 0x5bc Eq
	if(var_106_bool == 0) goto Label_1490; // 0x5bd JumpB
	var_107_string = ""; // 0x5be PushV
	var_107_string = "Neutral"; // 0x5bf MovS
	func_1380(var_52_cvector, var_107_string); // 0x5c0 NEW_2
	var_108_int = 535319; // 0x5c2 PushI
	SetMessage(var_108_int); // 0x5c3 TObjFunc
	ClearReplies(); // 0x5c5 TObjFunc
	var_109_int = 535320; // 0x5c7 PushI
	var_110_int = 36990; // 0x5c8 PushI
	var_111_int = 36999; // 0x5c9 PushI
	AddReply(var_109_int, var_110_int, var_111_int); // 0x5ca TObjFunc
	var_112_int = 535321; // 0x5cc PushI
	var_113_int = 36985; // 0x5cd PushI
	var_114_int = 37001; // 0x5ce PushI
	AddReply(var_112_int, var_113_int, var_114_int); // 0x5cf TObjFunc
	return 0; // 0x5d1 Return
	
Label_1490:
	var_115_int = 36985; // 0x5d2 PushI
	var_116_bool = var_51_bool == var_115_int; // 0x5d3 Eq
	if(var_116_bool == 0) goto Label_1508; // 0x5d4 JumpB
	var_117_string = ""; // 0x5d5 PushV
	var_117_string = "Strength"; // 0x5d6 MovS
	func_1380(var_52_cvector, var_117_string); // 0x5d7 NEW_2
	var_118_int = 535307; // 0x5d9 PushI
	SetMessage(var_118_int); // 0x5da TObjFunc
	ClearReplies(); // 0x5dc TObjFunc
	var_119_int = 535308; // 0x5de PushI
	var_120_int = 36987; // 0x5df PushI
	var_121_int = 36986; // 0x5e0 PushI
	AddReply(var_119_int, var_120_int, var_121_int); // 0x5e1 TObjFunc
	return 0; // 0x5e3 Return
	
Label_1508:
	var_122_int = 36987; // 0x5e4 PushI
	var_123_bool = var_51_bool == var_122_int; // 0x5e5 Eq
	if(var_123_bool == 0) goto Label_1531; // 0x5e6 JumpB
	var_124_string = ""; // 0x5e7 PushV
	var_124_string = "Strength"; // 0x5e8 MovS
	func_1380(var_52_cvector, var_124_string); // 0x5e9 NEW_2
	var_125_int = 535309; // 0x5eb PushI
	SetMessage(var_125_int); // 0x5ec TObjFunc
	ClearReplies(); // 0x5ee TObjFunc
	var_126_int = 535311; // 0x5f0 PushI
	var_127_int = 36990; // 0x5f1 PushI
	var_128_int = 36989; // 0x5f2 PushI
	AddReply(var_126_int, var_127_int, var_128_int); // 0x5f3 TObjFunc
	var_129_int = 535313; // 0x5f5 PushI
	var_130_int = 36990; // 0x5f6 PushI
	var_131_int = 36991; // 0x5f7 PushI
	AddReply(var_129_int, var_130_int, var_131_int); // 0x5f8 TObjFunc
	return 0; // 0x5fa Return
	
Label_1531:
	var_132_int = 36990; // 0x5fb PushI
	var_133_bool = var_51_bool == var_132_int; // 0x5fc Eq
	if(var_133_bool == 0) goto Label_1554; // 0x5fd JumpB
	var_134_string = ""; // 0x5fe PushV
	var_134_string = "Sympathy"; // 0x5ff MovS
	func_1380(var_52_cvector, var_134_string); // 0x600 NEW_2
	var_135_int = 535312; // 0x602 PushI
	SetMessage(var_135_int); // 0x603 TObjFunc
	ClearReplies(); // 0x605 TObjFunc
	var_136_int = 535310; // 0x607 PushI
	var_137_int = 36994; // 0x608 PushI
	var_138_int = 36988; // 0x609 PushI
	AddReply(var_136_int, var_137_int, var_138_int); // 0x60a TObjFunc
	var_139_int = 535314; // 0x60c PushI
	var_140_int = -1; // 0x60d PushI
	var_141_int = 36993; // 0x60e PushI
	AddReply(var_139_int, var_140_int, var_141_int); // 0x60f TObjFunc
	return 0; // 0x611 Return
	
Label_1554:
	var_142_int = 36994; // 0x612 PushI
	var_143_bool = var_51_bool == var_142_int; // 0x613 Eq
	if(var_143_bool == 0) goto Label_1577; // 0x614 JumpB
	var_144_string = ""; // 0x615 PushV
	var_144_string = "Sympathy"; // 0x616 MovS
	func_1380(var_52_cvector, var_144_string); // 0x617 NEW_2
	var_145_int = 535315; // 0x619 PushI
	SetMessage(var_145_int); // 0x61a TObjFunc
	ClearReplies(); // 0x61c TObjFunc
	var_146_int = 535316; // 0x61e PushI
	var_147_int = -1; // 0x61f PushI
	var_148_int = 36995; // 0x620 PushI
	AddReply(var_146_int, var_147_int, var_148_int); // 0x621 TObjFunc
	var_149_int = 535317; // 0x623 PushI
	var_150_int = -1; // 0x624 PushI
	var_151_int = 36996; // 0x625 PushI
	AddReply(var_149_int, var_150_int, var_151_int); // 0x626 TObjFunc
	return 0; // 0x628 Return
	
Label_1577:
	var_3_string = 1; // 0x629 TMovB
	var_152_bool = 0; // 0x62a PushV
	func_6093(var_152_bool); // 0x62b NEW_2
	if(var_152_bool == 0) goto Label_1585; // 0x62d JumpB
	lshStopAnimation(); // 0x62e Func
	goto Label_1587; // 0x630 Jump
	
Label_1587:
	return 0; // 0x633 Return
	
Label_1585:
	StopAnimation(); // 0x631 Func
	
Label_1589:
	return 0; // 0x635 Return
}


task_7_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_cvector)
{
	var_53_int = 1; // 0x6d3 PushI
	if(var_53_int == 0) goto Label_1921; // 0x6d4 JumpB
	func_5919(); // 0x6d6 NEW_2
	var_55_int = 19384; // 0x6d8 PushI
	var_56_bool = var_51_bool == var_55_int; // 0x6d9 Eq
	if(var_56_bool == 0) goto Label_1770; // 0x6da JumpB
	var_57_string = ""; // 0x6db PushV
	var_57_string = "Neutral"; // 0x6dc MovS
	func_1724(var_52_cvector, var_57_string); // 0x6dd NEW_2
	var_74_int = 518275; // 0x6df PushI
	SetMessage(var_74_int); // 0x6e0 TObjFunc
	ClearReplies(); // 0x6e2 TObjFunc
	var_75_int = 518276; // 0x6e4 PushI
	var_76_int = -1; // 0x6e5 PushI
	var_77_int = 19385; // 0x6e6 PushI
	AddReply(var_75_int, var_76_int, var_77_int); // 0x6e7 TObjFunc
	return 0; // 0x6e9 Return
	
Label_1770:
	var_78_int = 20655; // 0x6ea PushI
	var_79_bool = var_51_bool == var_78_int; // 0x6eb Eq
	if(var_79_bool == 0) goto Label_1773; // 0x6ec JumpB
	
Label_1773:
	var_80_int = 20658; // 0x6ed PushI
	var_81_bool = var_51_bool == var_80_int; // 0x6ee Eq
	if(var_81_bool == 0) goto Label_1796; // 0x6ef JumpB
	var_82_string = ""; // 0x6f0 PushV
	var_82_string = "Fear"; // 0x6f1 MovS
	func_1724(var_52_cvector, var_82_string); // 0x6f2 NEW_2
	var_83_int = 519486; // 0x6f4 PushI
	SetMessage(var_83_int); // 0x6f5 TObjFunc
	ClearReplies(); // 0x6f7 TObjFunc
	var_84_int = 519487; // 0x6f9 PushI
	var_85_int = 20660; // 0x6fa PushI
	var_86_int = 20659; // 0x6fb PushI
	AddReply(var_84_int, var_85_int, var_86_int); // 0x6fc TObjFunc
	var_87_int = 527738; // 0x6fe PushI
	var_88_int = 29091; // 0x6ff PushI
	var_89_int = 29090; // 0x700 PushI
	AddReply(var_87_int, var_88_int, var_89_int); // 0x701 TObjFunc
	return 0; // 0x703 Return
	
Label_1796:
	var_90_int = 29091; // 0x704 PushI
	var_91_bool = var_51_bool == var_90_int; // 0x705 Eq
	if(var_91_bool == 0) goto Label_1814; // 0x706 JumpB
	var_92_string = ""; // 0x707 PushV
	var_92_string = "Neutral"; // 0x708 MovS
	func_1724(var_52_cvector, var_92_string); // 0x709 NEW_2
	var_93_int = 527739; // 0x70b PushI
	SetMessage(var_93_int); // 0x70c TObjFunc
	ClearReplies(); // 0x70e TObjFunc
	var_94_int = 527740; // 0x710 PushI
	var_95_int = 20660; // 0x711 PushI
	var_96_int = 29092; // 0x712 PushI
	AddReply(var_94_int, var_95_int, var_96_int); // 0x713 TObjFunc
	return 0; // 0x715 Return
	
Label_1814:
	var_97_int = 20660; // 0x716 PushI
	var_98_bool = var_51_bool == var_97_int; // 0x717 Eq
	if(var_98_bool == 0) goto Label_1832; // 0x718 JumpB
	var_99_string = ""; // 0x719 PushV
	var_99_string = "Fear"; // 0x71a MovS
	func_1724(var_52_cvector, var_99_string); // 0x71b NEW_2
	var_100_int = 519488; // 0x71d PushI
	SetMessage(var_100_int); // 0x71e TObjFunc
	ClearReplies(); // 0x720 TObjFunc
	var_101_int = 519489; // 0x722 PushI
	var_102_int = 20662; // 0x723 PushI
	var_103_int = 20661; // 0x724 PushI
	AddReply(var_101_int, var_102_int, var_103_int); // 0x725 TObjFunc
	return 0; // 0x727 Return
	
Label_1832:
	var_104_int = 20662; // 0x728 PushI
	var_105_bool = var_51_bool == var_104_int; // 0x729 Eq
	if(var_105_bool == 0) goto Label_1855; // 0x72a JumpB
	var_106_string = ""; // 0x72b PushV
	var_106_string = "Strength"; // 0x72c MovS
	func_1724(var_52_cvector, var_106_string); // 0x72d NEW_2
	var_107_int = 519490; // 0x72f PushI
	SetMessage(var_107_int); // 0x730 TObjFunc
	ClearReplies(); // 0x732 TObjFunc
	var_108_int = 527741; // 0x734 PushI
	var_109_int = 29096; // 0x735 PushI
	var_110_int = 29094; // 0x736 PushI
	AddReply(var_108_int, var_109_int, var_110_int); // 0x737 TObjFunc
	var_111_int = 527742; // 0x739 PushI
	var_112_int = 29096; // 0x73a PushI
	var_113_int = 29095; // 0x73b PushI
	AddReply(var_111_int, var_112_int, var_113_int); // 0x73c TObjFunc
	return 0; // 0x73e Return
	
Label_1855:
	var_114_int = 29096; // 0x73f PushI
	var_115_bool = var_51_bool == var_114_int; // 0x740 Eq
	if(var_115_bool == 0) goto Label_1873; // 0x741 JumpB
	var_116_string = ""; // 0x742 PushV
	var_116_string = "Neutral"; // 0x743 MovS
	func_1724(var_52_cvector, var_116_string); // 0x744 NEW_2
	var_117_int = 527743; // 0x746 PushI
	SetMessage(var_117_int); // 0x747 TObjFunc
	ClearReplies(); // 0x749 TObjFunc
	var_118_int = 527744; // 0x74b PushI
	var_119_int = 29098; // 0x74c PushI
	var_120_int = 29097; // 0x74d PushI
	AddReply(var_118_int, var_119_int, var_120_int); // 0x74e TObjFunc
	return 0; // 0x750 Return
	
Label_1873:
	var_121_int = 29098; // 0x751 PushI
	var_122_bool = var_51_bool == var_121_int; // 0x752 Eq
	if(var_122_bool == 0) goto Label_1891; // 0x753 JumpB
	var_123_string = ""; // 0x754 PushV
	var_123_string = "Neutral"; // 0x755 MovS
	func_1724(var_52_cvector, var_123_string); // 0x756 NEW_2
	var_124_int = 527745; // 0x758 PushI
	SetMessage(var_124_int); // 0x759 TObjFunc
	ClearReplies(); // 0x75b TObjFunc
	var_125_int = 519491; // 0x75d PushI
	var_126_int = 20665; // 0x75e PushI
	var_127_int = 20664; // 0x75f PushI
	AddReply(var_125_int, var_126_int, var_127_int); // 0x760 TObjFunc
	return 0; // 0x762 Return
	
Label_1891:
	var_128_int = 20665; // 0x763 PushI
	var_129_bool = var_51_bool == var_128_int; // 0x764 Eq
	if(var_129_bool == 0) goto Label_1909; // 0x765 JumpB
	var_130_string = ""; // 0x766 PushV
	var_130_string = "Neutral"; // 0x767 MovS
	func_1724(var_52_cvector, var_130_string); // 0x768 NEW_2
	var_131_int = 519492; // 0x76a PushI
	SetMessage(var_131_int); // 0x76b TObjFunc
	ClearReplies(); // 0x76d TObjFunc
	var_132_int = 519493; // 0x76f PushI
	var_133_int = -1; // 0x770 PushI
	var_134_int = 20666; // 0x771 PushI
	AddReply(var_132_int, var_133_int, var_134_int); // 0x772 TObjFunc
	return 0; // 0x774 Return
	
Label_1909:
	var_3_string = 1; // 0x775 TMovB
	var_135_bool = 0; // 0x776 PushV
	func_6093(var_135_bool); // 0x777 NEW_2
	if(var_135_bool == 0) goto Label_1917; // 0x779 JumpB
	lshStopAnimation(); // 0x77a Func
	goto Label_1919; // 0x77c Jump
	
Label_1919:
	return 0; // 0x77f Return
	
Label_1917:
	StopAnimation(); // 0x77d Func
	
Label_1921:
	return 0; // 0x781 Return
}


task_9_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_int, var_26_int, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_cvector)
{
	var_53_int = 1; // 0x869 PushI
	if(var_53_int == 0) goto Label_2571; // 0x86a JumpB
	func_5919(); // 0x86c NEW_2
	var_55_int = 19479; // 0x86e PushI
	var_56_bool = var_52_cvector == var_55_int; // 0x86f Eq
	if(var_56_bool == 0) goto Label_2166; // 0x870 JumpB
	var_57_object = Obj(); var_58_object = Obj(); // 0x871 PushV
	var_57_object = var_1_object; // 0x872 MovT
	var_58_object = var_0_object; // 0x873 MovT
	func_6544(); // 0x874 NEW_2
	
Label_2166:
	var_61_int = 19482; // 0x876 PushI
	var_62_bool = var_52_cvector == var_61_int; // 0x877 Eq
	if(var_62_bool == 0) goto Label_2179; // 0x878 JumpB
	var_63_object = Obj(); var_64_object = Obj(); // 0x879 PushV
	var_63_object = var_1_object; // 0x87a MovT
	var_64_object = var_0_object; // 0x87b MovT
	func_6513(); // 0x87c NEW_2
	var_126_object = Obj(); var_127_object = Obj(); // 0x87e PushV
	var_126_object = var_1_object; // 0x87f MovT
	var_127_object = var_0_object; // 0x880 MovT
	func_6095(); // 0x881 NEW_2
	
Label_2179:
	var_152_int = 19486; // 0x883 PushI
	var_153_bool = var_52_cvector == var_152_int; // 0x884 Eq
	if(var_153_bool == 0) goto Label_2192; // 0x885 JumpB
	var_154_object = Obj(); var_155_object = Obj(); // 0x886 PushV
	var_154_object = var_1_object; // 0x887 MovT
	var_155_object = var_0_object; // 0x888 MovT
	func_6513(); // 0x889 NEW_2
	var_156_object = Obj(); var_157_object = Obj(); // 0x88b PushV
	var_156_object = var_1_object; // 0x88c MovT
	var_157_object = var_0_object; // 0x88d MovT
	func_6095(); // 0x88e NEW_2
	
Label_2192:
	var_158_int = 19489; // 0x890 PushI
	var_159_bool = var_52_cvector == var_158_int; // 0x891 Eq
	if(var_159_bool == 0) goto Label_2210; // 0x892 JumpB
	var_160_object = Obj(); var_161_object = Obj(); // 0x893 PushV
	var_160_object = var_1_object; // 0x894 MovT
	var_161_object = var_0_object; // 0x895 MovT
	func_6550(); // 0x896 NEW_2
	var_173_object = Obj(); var_174_object = Obj(); // 0x898 PushV
	var_173_object = var_1_object; // 0x899 MovT
	var_174_object = var_0_object; // 0x89a MovT
	func_6489(var_174_object); // 0x89b NEW_2
	var_194_object = Obj(); var_195_object = Obj(); // 0x89d PushV
	var_194_object = var_1_object; // 0x89e MovT
	var_195_object = var_0_object; // 0x89f MovT
	func_6267(); // 0x8a0 NEW_2
	
Label_2210:
	var_198_int = 20330; // 0x8a2 PushI
	var_199_bool = var_52_cvector == var_198_int; // 0x8a3 Eq
	if(var_199_bool == 0) goto Label_2218; // 0x8a4 JumpB
	var_200_object = Obj(); var_201_object = Obj(); // 0x8a5 PushV
	var_200_object = var_1_object; // 0x8a6 MovT
	var_201_object = var_0_object; // 0x8a7 MovT
	func_6550(); // 0x8a8 NEW_2
	
Label_2218:
	var_202_int = 19492; // 0x8aa PushI
	var_203_bool = var_52_cvector == var_202_int; // 0x8ab Eq
	if(var_203_bool == 0) goto Label_2236; // 0x8ac JumpB
	var_204_object = Obj(); var_205_object = Obj(); // 0x8ad PushV
	var_204_object = var_1_object; // 0x8ae MovT
	var_205_object = var_0_object; // 0x8af MovT
	func_6550(); // 0x8b0 NEW_2
	var_206_object = Obj(); var_207_object = Obj(); // 0x8b2 PushV
	var_206_object = var_1_object; // 0x8b3 MovT
	var_207_object = var_0_object; // 0x8b4 MovT
	func_6200(var_207_object); // 0x8b5 NEW_2
	var_211_object = Obj(); var_212_object = Obj(); // 0x8b7 PushV
	var_211_object = var_1_object; // 0x8b8 MovT
	var_212_object = var_0_object; // 0x8b9 MovT
	func_6267(); // 0x8ba NEW_2
	
Label_2236:
	var_213_int = 20325; // 0x8bc PushI
	var_214_bool = var_52_cvector == var_213_int; // 0x8bd Eq
	if(var_214_bool == 0) goto Label_2244; // 0x8be JumpB
	var_215_object = Obj(); var_216_object = Obj(); // 0x8bf PushV
	var_215_object = var_1_object; // 0x8c0 MovT
	var_216_object = var_0_object; // 0x8c1 MovT
	func_6550(); // 0x8c2 NEW_2
	
Label_2244:
	var_217_int = 19478; // 0x8c4 PushI
	var_218_bool = var_51_bool == var_217_int; // 0x8c5 Eq
	if(var_218_bool == 0) goto Label_2336; // 0x8c6 JumpB
	var_219_object = Obj(); var_220_object = Obj(); // 0x8c7 PushV
	var_219_object = var_1_object; // 0x8c8 MovT
	var_220_object = var_0_object; // 0x8c9 MovT
	func_6315(); // 0x8ca NEW_2
	var_223_string = ""; // 0x8cc PushV
	var_223_string = "Neutral"; // 0x8cd MovS
	func_2130(var_52_cvector, var_223_string); // 0x8ce NEW_2
	var_240_int = 518365; // 0x8d0 PushI
	SetMessage(var_240_int); // 0x8d1 TObjFunc
	ClearReplies(); // 0x8d3 TObjFunc
	var_241_bool = 0; var_242_object = Obj(); // 0x8d5 PushV
	var_242_object = var_1_object; // 0x8d6 MovT
	func_6810(var_242_object); // 0x8d7 NEW_2
	if(var_241_bool == 0) goto Label_2271; // 0x8d9 JumpB
	var_249_int = 518366; // 0x8da PushI
	var_250_int = 19481; // 0x8db PushI
	var_251_int = 19479; // 0x8dc PushI
	AddReply(var_249_int, var_250_int, var_251_int); // 0x8dd TObjFunc
	
Label_2271:
	var_252_bool = 0; // 0x8df PushV
	var_252_bool = 0; // 0x8e0 MovB
	var_253_bool = 0; var_254_object = Obj(); // 0x8e1 PushV
	var_254_object = var_1_object; // 0x8e2 MovT
	func_6810(var_254_object); // 0x8e3 NEW_2
	var_255_bool = var_253_bool == 0; // 0x8e5 Not
	if(var_255_bool == 0) goto Label_2285; // 0x8e6 JumpB
	var_256_bool = 0; var_257_object = Obj(); // 0x8e7 PushV
	var_257_object = var_1_object; // 0x8e8 MovT
	func_6798(var_257_object); // 0x8e9 NEW_2
	if(var_256_bool == 0) goto Label_2285; // 0x8eb JumpB
	var_252_bool = 1; // 0x8ec MovB
	
Label_2285:
	if(var_252_bool == 0) goto Label_2291; // 0x8ed JumpB
	var_262_int = 518371; // 0x8ee PushI
	var_263_int = 19485; // 0x8ef PushI
	var_264_int = 19484; // 0x8f0 PushI
	AddReply(var_262_int, var_263_int, var_264_int); // 0x8f1 TObjFunc
	
Label_2291:
	var_265_bool = 0; // 0x8f3 PushV
	var_265_bool = 0; // 0x8f4 MovB
	var_266_bool = 0; var_267_object = Obj(); // 0x8f5 PushV
	var_267_object = var_1_object; // 0x8f6 MovT
	func_6822(var_267_object); // 0x8f7 NEW_2
	if(var_266_bool == 0) goto Label_2304; // 0x8f9 JumpB
	var_272_bool = 0; var_273_object = Obj(); // 0x8fa PushV
	var_273_object = var_1_object; // 0x8fb MovT
	func_6834(var_273_object); // 0x8fc NEW_2
	if(var_272_bool == 0) goto Label_2304; // 0x8fe JumpB
	var_265_bool = 1; // 0x8ff MovB
	
Label_2304:
	if(var_265_bool == 0) goto Label_2310; // 0x900 JumpB
	var_278_int = 518374; // 0x901 PushI
	var_279_int = 19488; // 0x902 PushI
	var_280_int = 19487; // 0x903 PushI
	AddReply(var_278_int, var_279_int, var_280_int); // 0x904 TObjFunc
	
Label_2310:
	var_281_bool = 0; // 0x906 PushV
	var_281_bool = 0; // 0x907 MovB
	var_282_bool = 0; var_283_object = Obj(); // 0x908 PushV
	var_283_object = var_1_object; // 0x909 MovT
	func_6822(var_283_object); // 0x90a NEW_2
	if(var_282_bool == 0) goto Label_2324; // 0x90c JumpB
	var_284_bool = 0; var_285_object = Obj(); // 0x90d PushV
	var_285_object = var_1_object; // 0x90e MovT
	func_6834(var_285_object); // 0x90f NEW_2
	var_286_bool = var_284_bool == 0; // 0x911 Not
	if(var_286_bool == 0) goto Label_2324; // 0x912 JumpB
	var_281_bool = 1; // 0x913 MovB
	
Label_2324:
	if(var_281_bool == 0) goto Label_2330; // 0x914 JumpB
	var_287_int = 518377; // 0x915 PushI
	var_288_int = 19491; // 0x916 PushI
	var_289_int = 19490; // 0x917 PushI
	AddReply(var_287_int, var_288_int, var_289_int); // 0x918 TObjFunc
	
Label_2330:
	var_290_int = 518367; // 0x91a PushI
	var_291_int = -1; // 0x91b PushI
	var_292_int = 19480; // 0x91c PushI
	AddReply(var_290_int, var_291_int, var_292_int); // 0x91d TObjFunc
	return 0; // 0x91f Return
	
Label_2336:
	var_293_int = 19491; // 0x920 PushI
	var_294_bool = var_51_bool == var_293_int; // 0x921 Eq
	if(var_294_bool == 0) goto Label_2354; // 0x922 JumpB
	var_295_string = ""; // 0x923 PushV
	var_295_string = "Impatience"; // 0x924 MovS
	func_2130(var_52_cvector, var_295_string); // 0x925 NEW_2
	var_296_int = 518378; // 0x927 PushI
	SetMessage(var_296_int); // 0x928 TObjFunc
	ClearReplies(); // 0x92a TObjFunc
	var_297_int = 519177; // 0x92c PushI
	var_298_int = 20319; // 0x92d PushI
	var_299_int = 20318; // 0x92e PushI
	AddReply(var_297_int, var_298_int, var_299_int); // 0x92f TObjFunc
	return 0; // 0x931 Return
	
Label_2354:
	var_300_int = 20319; // 0x932 PushI
	var_301_bool = var_51_bool == var_300_int; // 0x933 Eq
	if(var_301_bool == 0) goto Label_2372; // 0x934 JumpB
	var_302_string = ""; // 0x935 PushV
	var_302_string = "Impatience"; // 0x936 MovS
	func_2130(var_52_cvector, var_302_string); // 0x937 NEW_2
	var_303_int = 519178; // 0x939 PushI
	SetMessage(var_303_int); // 0x93a TObjFunc
	ClearReplies(); // 0x93c TObjFunc
	var_304_int = 519179; // 0x93e PushI
	var_305_int = 20321; // 0x93f PushI
	var_306_int = 20320; // 0x940 PushI
	AddReply(var_304_int, var_305_int, var_306_int); // 0x941 TObjFunc
	return 0; // 0x943 Return
	
Label_2372:
	var_307_int = 20321; // 0x944 PushI
	var_308_bool = var_51_bool == var_307_int; // 0x945 Eq
	if(var_308_bool == 0) goto Label_2390; // 0x946 JumpB
	var_309_string = ""; // 0x947 PushV
	var_309_string = "Strength"; // 0x948 MovS
	func_2130(var_52_cvector, var_309_string); // 0x949 NEW_2
	var_310_int = 519180; // 0x94b PushI
	SetMessage(var_310_int); // 0x94c TObjFunc
	ClearReplies(); // 0x94e TObjFunc
	var_311_int = 519181; // 0x950 PushI
	var_312_int = 20323; // 0x951 PushI
	var_313_int = 20322; // 0x952 PushI
	AddReply(var_311_int, var_312_int, var_313_int); // 0x953 TObjFunc
	return 0; // 0x955 Return
	
Label_2390:
	var_314_int = 20323; // 0x956 PushI
	var_315_bool = var_51_bool == var_314_int; // 0x957 Eq
	if(var_315_bool == 0) goto Label_2413; // 0x958 JumpB
	var_316_string = ""; // 0x959 PushV
	var_316_string = "Neutral"; // 0x95a MovS
	func_2130(var_52_cvector, var_316_string); // 0x95b NEW_2
	var_317_int = 519182; // 0x95d PushI
	SetMessage(var_317_int); // 0x95e TObjFunc
	ClearReplies(); // 0x960 TObjFunc
	var_318_int = 518379; // 0x962 PushI
	var_319_int = -1; // 0x963 PushI
	var_320_int = 19492; // 0x964 PushI
	AddReply(var_318_int, var_319_int, var_320_int); // 0x965 TObjFunc
	var_321_int = 519184; // 0x967 PushI
	var_322_int = -1; // 0x968 PushI
	var_323_int = 20325; // 0x969 PushI
	AddReply(var_321_int, var_322_int, var_323_int); // 0x96a TObjFunc
	return 0; // 0x96c Return
	
Label_2413:
	var_324_int = 19488; // 0x96d PushI
	var_325_bool = var_51_bool == var_324_int; // 0x96e Eq
	if(var_325_bool == 0) goto Label_2431; // 0x96f JumpB
	var_326_string = ""; // 0x970 PushV
	var_326_string = "Impatience"; // 0x971 MovS
	func_2130(var_52_cvector, var_326_string); // 0x972 NEW_2
	var_327_int = 518375; // 0x974 PushI
	SetMessage(var_327_int); // 0x975 TObjFunc
	ClearReplies(); // 0x977 TObjFunc
	var_328_int = 519185; // 0x979 PushI
	var_329_int = 20327; // 0x97a PushI
	var_330_int = 20326; // 0x97b PushI
	AddReply(var_328_int, var_329_int, var_330_int); // 0x97c TObjFunc
	return 0; // 0x97e Return
	
Label_2431:
	var_331_int = 20327; // 0x97f PushI
	var_332_bool = var_51_bool == var_331_int; // 0x980 Eq
	if(var_332_bool == 0) goto Label_2449; // 0x981 JumpB
	var_333_string = ""; // 0x982 PushV
	var_333_string = "Neutral"; // 0x983 MovS
	func_2130(var_52_cvector, var_333_string); // 0x984 NEW_2
	var_334_int = 519186; // 0x986 PushI
	SetMessage(var_334_int); // 0x987 TObjFunc
	ClearReplies(); // 0x989 TObjFunc
	var_335_int = 519187; // 0x98b PushI
	var_336_int = 20329; // 0x98c PushI
	var_337_int = 20328; // 0x98d PushI
	AddReply(var_335_int, var_336_int, var_337_int); // 0x98e TObjFunc
	return 0; // 0x990 Return
	
Label_2449:
	var_338_int = 20329; // 0x991 PushI
	var_339_bool = var_51_bool == var_338_int; // 0x992 Eq
	if(var_339_bool == 0) goto Label_2472; // 0x993 JumpB
	var_340_string = ""; // 0x994 PushV
	var_340_string = "Neutral"; // 0x995 MovS
	func_2130(var_52_cvector, var_340_string); // 0x996 NEW_2
	var_341_int = 519188; // 0x998 PushI
	SetMessage(var_341_int); // 0x999 TObjFunc
	ClearReplies(); // 0x99b TObjFunc
	var_342_int = 518376; // 0x99d PushI
	var_343_int = -1; // 0x99e PushI
	var_344_int = 19489; // 0x99f PushI
	AddReply(var_342_int, var_343_int, var_344_int); // 0x9a0 TObjFunc
	var_345_int = 519189; // 0x9a2 PushI
	var_346_int = -1; // 0x9a3 PushI
	var_347_int = 20330; // 0x9a4 PushI
	AddReply(var_345_int, var_346_int, var_347_int); // 0x9a5 TObjFunc
	return 0; // 0x9a7 Return
	
Label_2472:
	var_348_int = 19485; // 0x9a8 PushI
	var_349_bool = var_51_bool == var_348_int; // 0x9a9 Eq
	if(var_349_bool == 0) goto Label_2490; // 0x9aa JumpB
	var_350_string = ""; // 0x9ab PushV
	var_350_string = "Impatience"; // 0x9ac MovS
	func_2130(var_52_cvector, var_350_string); // 0x9ad NEW_2
	var_351_int = 518372; // 0x9af PushI
	SetMessage(var_351_int); // 0x9b0 TObjFunc
	ClearReplies(); // 0x9b2 TObjFunc
	var_352_int = 518373; // 0x9b4 PushI
	var_353_int = -1; // 0x9b5 PushI
	var_354_int = 19486; // 0x9b6 PushI
	AddReply(var_352_int, var_353_int, var_354_int); // 0x9b7 TObjFunc
	return 0; // 0x9b9 Return
	
Label_2490:
	var_355_int = 19481; // 0x9ba PushI
	var_356_bool = var_51_bool == var_355_int; // 0x9bb Eq
	if(var_356_bool == 0) goto Label_2513; // 0x9bc JumpB
	var_357_string = ""; // 0x9bd PushV
	var_357_string = "Fear"; // 0x9be MovS
	func_2130(var_52_cvector, var_357_string); // 0x9bf NEW_2
	var_358_int = 518368; // 0x9c1 PushI
	SetMessage(var_358_int); // 0x9c2 TObjFunc
	ClearReplies(); // 0x9c4 TObjFunc
	var_359_int = 519191; // 0x9c6 PushI
	var_360_int = 20333; // 0x9c7 PushI
	var_361_int = 20332; // 0x9c8 PushI
	AddReply(var_359_int, var_360_int, var_361_int); // 0x9c9 TObjFunc
	var_362_int = 519193; // 0x9cb PushI
	var_363_int = 20335; // 0x9cc PushI
	var_364_int = 20334; // 0x9cd PushI
	AddReply(var_362_int, var_363_int, var_364_int); // 0x9ce TObjFunc
	return 0; // 0x9d0 Return
	
Label_2513:
	var_365_int = 20335; // 0x9d1 PushI
	var_366_bool = var_51_bool == var_365_int; // 0x9d2 Eq
	if(var_366_bool == 0) goto Label_2536; // 0x9d3 JumpB
	var_367_string = ""; // 0x9d4 PushV
	var_367_string = "Fear"; // 0x9d5 MovS
	func_2130(var_52_cvector, var_367_string); // 0x9d6 NEW_2
	var_368_int = 519194; // 0x9d8 PushI
	SetMessage(var_368_int); // 0x9d9 TObjFunc
	ClearReplies(); // 0x9db TObjFunc
	var_369_int = 519195; // 0x9dd PushI
	var_370_int = 20333; // 0x9de PushI
	var_371_int = 20336; // 0x9df PushI
	AddReply(var_369_int, var_370_int, var_371_int); // 0x9e0 TObjFunc
	var_372_int = 519196; // 0x9e2 PushI
	var_373_int = -1; // 0x9e3 PushI
	var_374_int = 20338; // 0x9e4 PushI
	AddReply(var_372_int, var_373_int, var_374_int); // 0x9e5 TObjFunc
	return 0; // 0x9e7 Return
	
Label_2536:
	var_375_int = 20333; // 0x9e8 PushI
	var_376_bool = var_51_bool == var_375_int; // 0x9e9 Eq
	if(var_376_bool == 0) goto Label_2559; // 0x9ea JumpB
	var_377_string = ""; // 0x9eb PushV
	var_377_string = "Fear"; // 0x9ec MovS
	func_2130(var_52_cvector, var_377_string); // 0x9ed NEW_2
	var_378_int = 519192; // 0x9ef PushI
	SetMessage(var_378_int); // 0x9f0 TObjFunc
	ClearReplies(); // 0x9f2 TObjFunc
	var_379_int = 518369; // 0x9f4 PushI
	var_380_int = -1; // 0x9f5 PushI
	var_381_int = 19482; // 0x9f6 PushI
	AddReply(var_379_int, var_380_int, var_381_int); // 0x9f7 TObjFunc
	var_382_int = 518370; // 0x9f9 PushI
	var_383_int = -1; // 0x9fa PushI
	var_384_int = 19483; // 0x9fb PushI
	AddReply(var_382_int, var_383_int, var_384_int); // 0x9fc TObjFunc
	return 0; // 0x9fe Return
	
Label_2559:
	var_3_string = 1; // 0x9ff TMovB
	var_385_bool = 0; // 0xa00 PushV
	func_6093(var_385_bool); // 0xa01 NEW_2
	if(var_385_bool == 0) goto Label_2567; // 0xa03 JumpB
	lshStopAnimation(); // 0xa04 Func
	goto Label_2569; // 0xa06 Jump
	
Label_2569:
	return 0; // 0xa09 Return
	
Label_2567:
	StopAnimation(); // 0xa07 Func
	
Label_2571:
	return 0; // 0xa0b Return
}


task_11_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_int, var_31_int, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_cvector)
{
	var_53_int = 1; // 0xaf4 PushI
	if(var_53_int == 0) goto Label_3613; // 0xaf5 JumpB
	func_5919(); // 0xaf7 NEW_2
	var_55_int = 21023; // 0xaf9 PushI
	var_56_bool = var_52_cvector == var_55_int; // 0xafa Eq
	if(var_56_bool == 0) goto Label_2827; // 0xafb JumpB
	var_57_object = Obj(); var_58_object = Obj(); // 0xafc PushV
	var_57_object = var_1_object; // 0xafd MovT
	var_58_object = var_0_object; // 0xafe MovT
	func_6499(); // 0xaff NEW_2
	var_95_object = Obj(); var_96_object = Obj(); // 0xb01 PushV
	var_95_object = var_1_object; // 0xb02 MovT
	var_96_object = var_0_object; // 0xb03 MovT
	func_6508(); // 0xb04 NEW_2
	var_98_object = Obj(); var_99_object = Obj(); // 0xb06 PushV
	var_98_object = var_1_object; // 0xb07 MovT
	var_99_object = var_0_object; // 0xb08 MovT
	func_6194(); // 0xb09 NEW_2
	
Label_2827:
	var_102_int = 21026; // 0xb0b PushI
	var_103_bool = var_52_cvector == var_102_int; // 0xb0c Eq
	if(var_103_bool == 0) goto Label_2845; // 0xb0d JumpB
	var_104_object = Obj(); var_105_object = Obj(); // 0xb0e PushV
	var_104_object = var_1_object; // 0xb0f MovT
	var_105_object = var_0_object; // 0xb10 MovT
	func_6499(); // 0xb11 NEW_2
	var_106_object = Obj(); var_107_object = Obj(); // 0xb13 PushV
	var_106_object = var_1_object; // 0xb14 MovT
	var_107_object = var_0_object; // 0xb15 MovT
	func_6508(); // 0xb16 NEW_2
	var_108_object = Obj(); var_109_object = Obj(); // 0xb18 PushV
	var_108_object = var_1_object; // 0xb19 MovT
	var_109_object = var_0_object; // 0xb1a MovT
	func_6194(); // 0xb1b NEW_2
	
Label_2845:
	var_110_int = 21029; // 0xb1d PushI
	var_111_bool = var_52_cvector == var_110_int; // 0xb1e Eq
	if(var_111_bool == 0) goto Label_2863; // 0xb1f JumpB
	var_112_object = Obj(); var_113_object = Obj(); // 0xb20 PushV
	var_112_object = var_1_object; // 0xb21 MovT
	var_113_object = var_0_object; // 0xb22 MovT
	func_6499(); // 0xb23 NEW_2
	var_114_object = Obj(); var_115_object = Obj(); // 0xb25 PushV
	var_114_object = var_1_object; // 0xb26 MovT
	var_115_object = var_0_object; // 0xb27 MovT
	func_6508(); // 0xb28 NEW_2
	var_116_object = Obj(); var_117_object = Obj(); // 0xb2a PushV
	var_116_object = var_1_object; // 0xb2b MovT
	var_117_object = var_0_object; // 0xb2c MovT
	func_6194(); // 0xb2d NEW_2
	
Label_2863:
	var_118_int = 21032; // 0xb2f PushI
	var_119_bool = var_52_cvector == var_118_int; // 0xb30 Eq
	if(var_119_bool == 0) goto Label_2881; // 0xb31 JumpB
	var_120_object = Obj(); var_121_object = Obj(); // 0xb32 PushV
	var_120_object = var_1_object; // 0xb33 MovT
	var_121_object = var_0_object; // 0xb34 MovT
	func_6499(); // 0xb35 NEW_2
	var_122_object = Obj(); var_123_object = Obj(); // 0xb37 PushV
	var_122_object = var_1_object; // 0xb38 MovT
	var_123_object = var_0_object; // 0xb39 MovT
	func_6508(); // 0xb3a NEW_2
	var_124_object = Obj(); var_125_object = Obj(); // 0xb3c PushV
	var_124_object = var_1_object; // 0xb3d MovT
	var_125_object = var_0_object; // 0xb3e MovT
	func_6194(); // 0xb3f NEW_2
	
Label_2881:
	var_126_int = 20990; // 0xb41 PushI
	var_127_bool = var_52_cvector == var_126_int; // 0xb42 Eq
	if(var_127_bool == 0) goto Label_2894; // 0xb43 JumpB
	var_128_object = Obj(); var_129_object = Obj(); // 0xb44 PushV
	var_128_object = var_1_object; // 0xb45 MovT
	var_129_object = var_0_object; // 0xb46 MovT
	func_6117(); // 0xb47 NEW_2
	var_132_object = Obj(); var_133_object = Obj(); // 0xb49 PushV
	var_132_object = var_1_object; // 0xb4a MovT
	var_133_object = var_0_object; // 0xb4b MovT
	func_6123(); // 0xb4c NEW_2
	
Label_2894:
	var_155_int = 21002; // 0xb4e PushI
	var_156_bool = var_52_cvector == var_155_int; // 0xb4f Eq
	if(var_156_bool == 0) goto Label_2907; // 0xb50 JumpB
	var_157_object = Obj(); var_158_object = Obj(); // 0xb51 PushV
	var_157_object = var_1_object; // 0xb52 MovT
	var_158_object = var_0_object; // 0xb53 MovT
	func_6467(); // 0xb54 NEW_2
	var_161_object = Obj(); var_162_object = Obj(); // 0xb56 PushV
	var_161_object = var_1_object; // 0xb57 MovT
	var_162_object = var_0_object; // 0xb58 MovT
	func_6444(); // 0xb59 NEW_2
	
Label_2907:
	var_192_int = 21003; // 0xb5b PushI
	var_193_bool = var_52_cvector == var_192_int; // 0xb5c Eq
	if(var_193_bool == 0) goto Label_2920; // 0xb5d JumpB
	var_194_object = Obj(); var_195_object = Obj(); // 0xb5e PushV
	var_194_object = var_1_object; // 0xb5f MovT
	var_195_object = var_0_object; // 0xb60 MovT
	func_6467(); // 0xb61 NEW_2
	var_196_object = Obj(); var_197_object = Obj(); // 0xb63 PushV
	var_196_object = var_1_object; // 0xb64 MovT
	var_197_object = var_0_object; // 0xb65 MovT
	func_6444(); // 0xb66 NEW_2
	
Label_2920:
	var_198_int = 21004; // 0xb68 PushI
	var_199_bool = var_52_cvector == var_198_int; // 0xb69 Eq
	if(var_199_bool == 0) goto Label_2933; // 0xb6a JumpB
	var_200_object = Obj(); var_201_object = Obj(); // 0xb6b PushV
	var_200_object = var_1_object; // 0xb6c MovT
	var_201_object = var_0_object; // 0xb6d MovT
	func_6467(); // 0xb6e NEW_2
	var_202_object = Obj(); var_203_object = Obj(); // 0xb70 PushV
	var_202_object = var_1_object; // 0xb71 MovT
	var_203_object = var_0_object; // 0xb72 MovT
	func_6444(); // 0xb73 NEW_2
	
Label_2933:
	var_204_int = 21662; // 0xb75 PushI
	var_205_bool = var_52_cvector == var_204_int; // 0xb76 Eq
	if(var_205_bool == 0) goto Label_2941; // 0xb77 JumpB
	var_206_object = Obj(); var_207_object = Obj(); // 0xb78 PushV
	var_206_object = var_1_object; // 0xb79 MovT
	var_207_object = var_0_object; // 0xb7a MovT
	func_6148(); // 0xb7b NEW_2
	
Label_2941:
	var_210_int = 21668; // 0xb7d PushI
	var_211_bool = var_52_cvector == var_210_int; // 0xb7e Eq
	if(var_211_bool == 0) goto Label_2954; // 0xb7f JumpB
	var_212_object = Obj(); var_213_object = Obj(); // 0xb80 PushV
	var_212_object = var_1_object; // 0xb81 MovT
	var_213_object = var_0_object; // 0xb82 MovT
	func_6321(); // 0xb83 NEW_2
	var_228_object = Obj(); var_229_object = Obj(); // 0xb85 PushV
	var_228_object = var_1_object; // 0xb86 MovT
	var_229_object = var_0_object; // 0xb87 MovT
	func_6348(); // 0xb88 NEW_2
	
Label_2954:
	var_254_int = 21672; // 0xb8a PushI
	var_255_bool = var_52_cvector == var_254_int; // 0xb8b Eq
	if(var_255_bool == 0) goto Label_2967; // 0xb8c JumpB
	var_256_object = Obj(); var_257_object = Obj(); // 0xb8d PushV
	var_256_object = var_1_object; // 0xb8e MovT
	var_257_object = var_0_object; // 0xb8f MovT
	func_6321(); // 0xb90 NEW_2
	var_258_object = Obj(); var_259_object = Obj(); // 0xb92 PushV
	var_258_object = var_1_object; // 0xb93 MovT
	var_259_object = var_0_object; // 0xb94 MovT
	func_6348(); // 0xb95 NEW_2
	
Label_2967:
	var_260_int = 20972; // 0xb97 PushI
	var_261_bool = var_51_bool == var_260_int; // 0xb98 Eq
	if(var_261_bool == 0) goto Label_3060; // 0xb99 JumpB
	var_262_bool = 0; var_263_object = Obj(); // 0xb9a PushV
	var_263_object = var_1_object; // 0xb9b MovT
	func_6846(var_263_object); // 0xb9c NEW_2
	if(var_262_bool == 0) goto Label_3000; // 0xb9e JumpB
	var_268_string = ""; // 0xb9f PushV
	var_268_string = "Sympathy"; // 0xba0 MovS
	func_2781(var_52_cvector, var_268_string); // 0xba1 NEW_2
	var_285_int = 519812; // 0xba3 PushI
	SetMessage(var_285_int); // 0xba4 TObjFunc
	ClearReplies(); // 0xba6 TObjFunc
	var_286_int = 519813; // 0xba8 PushI
	var_287_int = 20974; // 0xba9 PushI
	var_288_int = 20973; // 0xbaa PushI
	AddReply(var_286_int, var_287_int, var_288_int); // 0xbab TObjFunc
	var_289_int = 527076; // 0xbad PushI
	var_290_int = 28374; // 0xbae PushI
	var_291_int = 28373; // 0xbaf PushI
	AddReply(var_289_int, var_290_int, var_291_int); // 0xbb0 TObjFunc
	var_292_int = 519816; // 0xbb2 PushI
	var_293_int = -1; // 0xbb3 PushI
	var_294_int = 20976; // 0xbb4 PushI
	AddReply(var_292_int, var_293_int, var_294_int); // 0xbb5 TObjFunc
	return 0; // 0xbb7 Return
	
Label_3000:
	var_295_bool = 0; var_296_object = Obj(); // 0xbb8 PushV
	var_296_object = var_1_object; // 0xbb9 MovT
	func_6858(var_296_object); // 0xbba NEW_2
	if(var_295_bool == 0) goto Label_3025; // 0xbbc JumpB
	var_301_object = Obj(); var_302_object = Obj(); // 0xbbd PushV
	var_301_object = var_1_object; // 0xbbe MovT
	var_302_object = var_0_object; // 0xbbf MovT
	func_6111(); // 0xbc0 NEW_2
	var_305_string = ""; // 0xbc2 PushV
	var_305_string = "Neutral"; // 0xbc3 MovS
	func_2781(var_52_cvector, var_305_string); // 0xbc4 NEW_2
	var_306_int = 519851; // 0xbc6 PushI
	SetMessage(var_306_int); // 0xbc7 TObjFunc
	ClearReplies(); // 0xbc9 TObjFunc
	var_307_int = 527084; // 0xbcb PushI
	var_308_int = 28383; // 0xbcc PushI
	var_309_int = 28382; // 0xbcd PushI
	AddReply(var_307_int, var_308_int, var_309_int); // 0xbce TObjFunc
	return 0; // 0xbd0 Return
	
Label_3025:
	var_310_string = ""; // 0xbd1 PushV
	var_310_string = "Neutral"; // 0xbd2 MovS
	func_2781(var_52_cvector, var_310_string); // 0xbd3 NEW_2
	var_311_int = 519817; // 0xbd5 PushI
	SetMessage(var_311_int); // 0xbd6 TObjFunc
	ClearReplies(); // 0xbd8 TObjFunc
	var_312_bool = 0; var_313_object = Obj(); // 0xbda PushV
	var_313_object = var_1_object; // 0xbdb MovT
	func_6870(var_313_object); // 0xbdc NEW_2
	if(var_312_bool == 0) goto Label_3044; // 0xbde JumpB
	var_318_int = 519830; // 0xbdf PushI
	var_319_int = 20991; // 0xbe0 PushI
	var_320_int = 20990; // 0xbe1 PushI
	AddReply(var_318_int, var_319_int, var_320_int); // 0xbe2 TObjFunc
	
Label_3044:
	var_321_bool = 0; var_322_object = Obj(); // 0xbe4 PushV
	var_322_object = var_1_object; // 0xbe5 MovT
	func_6882(var_322_object); // 0xbe6 NEW_2
	if(var_321_bool == 0) goto Label_3054; // 0xbe8 JumpB
	var_327_int = 520449; // 0xbe9 PushI
	var_328_int = 21663; // 0xbea PushI
	var_329_int = 21662; // 0xbeb PushI
	AddReply(var_327_int, var_328_int, var_329_int); // 0xbec TObjFunc
	
Label_3054:
	var_330_int = 519850; // 0xbee PushI
	var_331_int = -1; // 0xbef PushI
	var_332_int = 21011; // 0xbf0 PushI
	AddReply(var_330_int, var_331_int, var_332_int); // 0xbf1 TObjFunc
	return 0; // 0xbf3 Return
	
Label_3060:
	var_333_int = 21663; // 0xbf4 PushI
	var_334_bool = var_51_bool == var_333_int; // 0xbf5 Eq
	if(var_334_bool == 0) goto Label_3078; // 0xbf6 JumpB
	var_335_string = ""; // 0xbf7 PushV
	var_335_string = "Strength"; // 0xbf8 MovS
	func_2781(var_52_cvector, var_335_string); // 0xbf9 NEW_2
	var_336_int = 520450; // 0xbfb PushI
	SetMessage(var_336_int); // 0xbfc TObjFunc
	ClearReplies(); // 0xbfe TObjFunc
	var_337_int = 520451; // 0xc00 PushI
	var_338_int = 21665; // 0xc01 PushI
	var_339_int = 21664; // 0xc02 PushI
	AddReply(var_337_int, var_338_int, var_339_int); // 0xc03 TObjFunc
	return 0; // 0xc05 Return
	
Label_3078:
	var_340_int = 21665; // 0xc06 PushI
	var_341_bool = var_51_bool == var_340_int; // 0xc07 Eq
	if(var_341_bool == 0) goto Label_3101; // 0xc08 JumpB
	var_342_string = ""; // 0xc09 PushV
	var_342_string = "Neutral"; // 0xc0a MovS
	func_2781(var_52_cvector, var_342_string); // 0xc0b NEW_2
	var_343_int = 520452; // 0xc0d PushI
	SetMessage(var_343_int); // 0xc0e TObjFunc
	ClearReplies(); // 0xc10 TObjFunc
	var_344_int = 520453; // 0xc12 PushI
	var_345_int = 21667; // 0xc13 PushI
	var_346_int = 21666; // 0xc14 PushI
	AddReply(var_344_int, var_345_int, var_346_int); // 0xc15 TObjFunc
	var_347_int = 520458; // 0xc17 PushI
	var_348_int = -1; // 0xc18 PushI
	var_349_int = 21672; // 0xc19 PushI
	AddReply(var_347_int, var_348_int, var_349_int); // 0xc1a TObjFunc
	return 0; // 0xc1c Return
	
Label_3101:
	var_350_int = 21667; // 0xc1d PushI
	var_351_bool = var_51_bool == var_350_int; // 0xc1e Eq
	if(var_351_bool == 0) goto Label_3119; // 0xc1f JumpB
	var_352_string = ""; // 0xc20 PushV
	var_352_string = "Fear"; // 0xc21 MovS
	func_2781(var_52_cvector, var_352_string); // 0xc22 NEW_2
	var_353_int = 520454; // 0xc24 PushI
	SetMessage(var_353_int); // 0xc25 TObjFunc
	ClearReplies(); // 0xc27 TObjFunc
	var_354_int = 520455; // 0xc29 PushI
	var_355_int = -1; // 0xc2a PushI
	var_356_int = 21668; // 0xc2b PushI
	AddReply(var_354_int, var_355_int, var_356_int); // 0xc2c TObjFunc
	return 0; // 0xc2e Return
	
Label_3119:
	var_357_int = 20991; // 0xc2f PushI
	var_358_bool = var_51_bool == var_357_int; // 0xc30 Eq
	if(var_358_bool == 0) goto Label_3142; // 0xc31 JumpB
	var_359_string = ""; // 0xc32 PushV
	var_359_string = "Neutral"; // 0xc33 MovS
	func_2781(var_52_cvector, var_359_string); // 0xc34 NEW_2
	var_360_int = 519831; // 0xc36 PushI
	SetMessage(var_360_int); // 0xc37 TObjFunc
	ClearReplies(); // 0xc39 TObjFunc
	var_361_int = 519832; // 0xc3b PushI
	var_362_int = 20993; // 0xc3c PushI
	var_363_int = 20992; // 0xc3d PushI
	AddReply(var_361_int, var_362_int, var_363_int); // 0xc3e TObjFunc
	var_364_int = 519846; // 0xc40 PushI
	var_365_int = 21007; // 0xc41 PushI
	var_366_int = 21006; // 0xc42 PushI
	AddReply(var_364_int, var_365_int, var_366_int); // 0xc43 TObjFunc
	return 0; // 0xc45 Return
	
Label_3142:
	var_367_int = 21007; // 0xc46 PushI
	var_368_bool = var_51_bool == var_367_int; // 0xc47 Eq
	if(var_368_bool == 0) goto Label_3165; // 0xc48 JumpB
	var_369_string = ""; // 0xc49 PushV
	var_369_string = "Neutral"; // 0xc4a MovS
	func_2781(var_52_cvector, var_369_string); // 0xc4b NEW_2
	var_370_int = 519847; // 0xc4d PushI
	SetMessage(var_370_int); // 0xc4e TObjFunc
	ClearReplies(); // 0xc50 TObjFunc
	var_371_int = 519848; // 0xc52 PushI
	var_372_int = 20999; // 0xc53 PushI
	var_373_int = 21008; // 0xc54 PushI
	AddReply(var_371_int, var_372_int, var_373_int); // 0xc55 TObjFunc
	var_374_int = 519849; // 0xc57 PushI
	var_375_int = 20999; // 0xc58 PushI
	var_376_int = 21010; // 0xc59 PushI
	AddReply(var_374_int, var_375_int, var_376_int); // 0xc5a TObjFunc
	return 0; // 0xc5c Return
	
Label_3165:
	var_377_int = 20993; // 0xc5d PushI
	var_378_bool = var_51_bool == var_377_int; // 0xc5e Eq
	if(var_378_bool == 0) goto Label_3183; // 0xc5f JumpB
	var_379_string = ""; // 0xc60 PushV
	var_379_string = "Sympathy"; // 0xc61 MovS
	func_2781(var_52_cvector, var_379_string); // 0xc62 NEW_2
	var_380_int = 519833; // 0xc64 PushI
	SetMessage(var_380_int); // 0xc65 TObjFunc
	ClearReplies(); // 0xc67 TObjFunc
	var_381_int = 519834; // 0xc69 PushI
	var_382_int = 20995; // 0xc6a PushI
	var_383_int = 20994; // 0xc6b PushI
	AddReply(var_381_int, var_382_int, var_383_int); // 0xc6c TObjFunc
	return 0; // 0xc6e Return
	
Label_3183:
	var_384_int = 20995; // 0xc6f PushI
	var_385_bool = var_51_bool == var_384_int; // 0xc70 Eq
	if(var_385_bool == 0) goto Label_3201; // 0xc71 JumpB
	var_386_string = ""; // 0xc72 PushV
	var_386_string = "Sympathy"; // 0xc73 MovS
	func_2781(var_52_cvector, var_386_string); // 0xc74 NEW_2
	var_387_int = 519835; // 0xc76 PushI
	SetMessage(var_387_int); // 0xc77 TObjFunc
	ClearReplies(); // 0xc79 TObjFunc
	var_388_int = 519836; // 0xc7b PushI
	var_389_int = 20997; // 0xc7c PushI
	var_390_int = 20996; // 0xc7d PushI
	AddReply(var_388_int, var_389_int, var_390_int); // 0xc7e TObjFunc
	return 0; // 0xc80 Return
	
Label_3201:
	var_391_int = 20997; // 0xc81 PushI
	var_392_bool = var_51_bool == var_391_int; // 0xc82 Eq
	if(var_392_bool == 0) goto Label_3224; // 0xc83 JumpB
	var_393_string = ""; // 0xc84 PushV
	var_393_string = "Neutral"; // 0xc85 MovS
	func_2781(var_52_cvector, var_393_string); // 0xc86 NEW_2
	var_394_int = 519837; // 0xc88 PushI
	SetMessage(var_394_int); // 0xc89 TObjFunc
	ClearReplies(); // 0xc8b TObjFunc
	var_395_int = 519838; // 0xc8d PushI
	var_396_int = 20999; // 0xc8e PushI
	var_397_int = 20998; // 0xc8f PushI
	AddReply(var_395_int, var_396_int, var_397_int); // 0xc90 TObjFunc
	var_398_int = 519845; // 0xc92 PushI
	var_399_int = 20999; // 0xc93 PushI
	var_400_int = 21005; // 0xc94 PushI
	AddReply(var_398_int, var_399_int, var_400_int); // 0xc95 TObjFunc
	return 0; // 0xc97 Return
	
Label_3224:
	var_401_int = 20999; // 0xc98 PushI
	var_402_bool = var_51_bool == var_401_int; // 0xc99 Eq
	if(var_402_bool == 0) goto Label_3247; // 0xc9a JumpB
	var_403_string = ""; // 0xc9b PushV
	var_403_string = "Neutral"; // 0xc9c MovS
	func_2781(var_52_cvector, var_403_string); // 0xc9d NEW_2
	var_404_int = 519839; // 0xc9f PushI
	SetMessage(var_404_int); // 0xca0 TObjFunc
	ClearReplies(); // 0xca2 TObjFunc
	var_405_int = 519840; // 0xca4 PushI
	var_406_int = 21001; // 0xca5 PushI
	var_407_int = 21000; // 0xca6 PushI
	AddReply(var_405_int, var_406_int, var_407_int); // 0xca7 TObjFunc
	var_408_int = 519844; // 0xca9 PushI
	var_409_int = -1; // 0xcaa PushI
	var_410_int = 21004; // 0xcab PushI
	AddReply(var_408_int, var_409_int, var_410_int); // 0xcac TObjFunc
	return 0; // 0xcae Return
	
Label_3247:
	var_411_int = 21001; // 0xcaf PushI
	var_412_bool = var_51_bool == var_411_int; // 0xcb0 Eq
	if(var_412_bool == 0) goto Label_3270; // 0xcb1 JumpB
	var_413_string = ""; // 0xcb2 PushV
	var_413_string = "Neutral"; // 0xcb3 MovS
	func_2781(var_52_cvector, var_413_string); // 0xcb4 NEW_2
	var_414_int = 519841; // 0xcb6 PushI
	SetMessage(var_414_int); // 0xcb7 TObjFunc
	ClearReplies(); // 0xcb9 TObjFunc
	var_415_int = 519842; // 0xcbb PushI
	var_416_int = -1; // 0xcbc PushI
	var_417_int = 21002; // 0xcbd PushI
	AddReply(var_415_int, var_416_int, var_417_int); // 0xcbe TObjFunc
	var_418_int = 519843; // 0xcc0 PushI
	var_419_int = -1; // 0xcc1 PushI
	var_420_int = 21003; // 0xcc2 PushI
	AddReply(var_418_int, var_419_int, var_420_int); // 0xcc3 TObjFunc
	return 0; // 0xcc5 Return
	
Label_3270:
	var_421_int = 20979; // 0xcc6 PushI
	var_422_bool = var_51_bool == var_421_int; // 0xcc7 Eq
	if(var_422_bool == 0) goto Label_3273; // 0xcc8 JumpB
	
Label_3273:
	var_423_int = 20981; // 0xcc9 PushI
	var_424_bool = var_51_bool == var_423_int; // 0xcca Eq
	if(var_424_bool == 0) goto Label_3291; // 0xccb JumpB
	var_425_string = ""; // 0xccc PushV
	var_425_string = "Strength"; // 0xccd MovS
	func_2781(var_52_cvector, var_425_string); // 0xcce NEW_2
	var_426_int = 519821; // 0xcd0 PushI
	SetMessage(var_426_int); // 0xcd1 TObjFunc
	ClearReplies(); // 0xcd3 TObjFunc
	var_427_int = 519822; // 0xcd5 PushI
	var_428_int = 20983; // 0xcd6 PushI
	var_429_int = 20982; // 0xcd7 PushI
	AddReply(var_427_int, var_428_int, var_429_int); // 0xcd8 TObjFunc
	return 0; // 0xcda Return
	
Label_3291:
	var_430_int = 20983; // 0xcdb PushI
	var_431_bool = var_51_bool == var_430_int; // 0xcdc Eq
	if(var_431_bool == 0) goto Label_3314; // 0xcdd JumpB
	var_432_string = ""; // 0xcde PushV
	var_432_string = "Neutral"; // 0xcdf MovS
	func_2781(var_52_cvector, var_432_string); // 0xce0 NEW_2
	var_433_int = 519823; // 0xce2 PushI
	SetMessage(var_433_int); // 0xce3 TObjFunc
	ClearReplies(); // 0xce5 TObjFunc
	var_434_int = 519824; // 0xce7 PushI
	var_435_int = 20985; // 0xce8 PushI
	var_436_int = 20984; // 0xce9 PushI
	AddReply(var_434_int, var_435_int, var_436_int); // 0xcea TObjFunc
	var_437_int = 519829; // 0xcec PushI
	var_438_int = -1; // 0xced PushI
	var_439_int = 20989; // 0xcee PushI
	AddReply(var_437_int, var_438_int, var_439_int); // 0xcef TObjFunc
	return 0; // 0xcf1 Return
	
Label_3314:
	var_440_int = 20985; // 0xcf2 PushI
	var_441_bool = var_51_bool == var_440_int; // 0xcf3 Eq
	if(var_441_bool == 0) goto Label_3332; // 0xcf4 JumpB
	var_442_string = ""; // 0xcf5 PushV
	var_442_string = "Fear"; // 0xcf6 MovS
	func_2781(var_52_cvector, var_442_string); // 0xcf7 NEW_2
	var_443_int = 519825; // 0xcf9 PushI
	SetMessage(var_443_int); // 0xcfa TObjFunc
	ClearReplies(); // 0xcfc TObjFunc
	var_444_int = 519826; // 0xcfe PushI
	var_445_int = 20987; // 0xcff PushI
	var_446_int = 20986; // 0xd00 PushI
	AddReply(var_444_int, var_445_int, var_446_int); // 0xd01 TObjFunc
	return 0; // 0xd03 Return
	
Label_3332:
	var_447_int = 20987; // 0xd04 PushI
	var_448_bool = var_51_bool == var_447_int; // 0xd05 Eq
	if(var_448_bool == 0) goto Label_3355; // 0xd06 JumpB
	var_449_string = ""; // 0xd07 PushV
	var_449_string = "Neutral"; // 0xd08 MovS
	func_2781(var_52_cvector, var_449_string); // 0xd09 NEW_2
	var_450_int = 519827; // 0xd0b PushI
	SetMessage(var_450_int); // 0xd0c TObjFunc
	ClearReplies(); // 0xd0e TObjFunc
	var_451_int = 519828; // 0xd10 PushI
	var_452_int = -1; // 0xd11 PushI
	var_453_int = 20988; // 0xd12 PushI
	AddReply(var_451_int, var_452_int, var_453_int); // 0xd13 TObjFunc
	var_454_int = 527075; // 0xd15 PushI
	var_455_int = -1; // 0xd16 PushI
	var_456_int = 28372; // 0xd17 PushI
	AddReply(var_454_int, var_455_int, var_456_int); // 0xd18 TObjFunc
	return 0; // 0xd1a Return
	
Label_3355:
	var_457_int = 28383; // 0xd1b PushI
	var_458_bool = var_51_bool == var_457_int; // 0xd1c Eq
	if(var_458_bool == 0) goto Label_3373; // 0xd1d JumpB
	var_459_string = ""; // 0xd1e PushV
	var_459_string = "Neutral"; // 0xd1f MovS
	func_2781(var_52_cvector, var_459_string); // 0xd20 NEW_2
	var_460_int = 527085; // 0xd22 PushI
	SetMessage(var_460_int); // 0xd23 TObjFunc
	ClearReplies(); // 0xd25 TObjFunc
	var_461_int = 527086; // 0xd27 PushI
	var_462_int = 28385; // 0xd28 PushI
	var_463_int = 28384; // 0xd29 PushI
	AddReply(var_461_int, var_462_int, var_463_int); // 0xd2a TObjFunc
	return 0; // 0xd2c Return
	
Label_3373:
	var_464_int = 28385; // 0xd2d PushI
	var_465_bool = var_51_bool == var_464_int; // 0xd2e Eq
	if(var_465_bool == 0) goto Label_3391; // 0xd2f JumpB
	var_466_string = ""; // 0xd30 PushV
	var_466_string = "Strength"; // 0xd31 MovS
	func_2781(var_52_cvector, var_466_string); // 0xd32 NEW_2
	var_467_int = 527087; // 0xd34 PushI
	SetMessage(var_467_int); // 0xd35 TObjFunc
	ClearReplies(); // 0xd37 TObjFunc
	var_468_int = 527088; // 0xd39 PushI
	var_469_int = 21014; // 0xd3a PushI
	var_470_int = 28386; // 0xd3b PushI
	AddReply(var_468_int, var_469_int, var_470_int); // 0xd3c TObjFunc
	return 0; // 0xd3e Return
	
Label_3391:
	var_471_int = 21014; // 0xd3f PushI
	var_472_bool = var_51_bool == var_471_int; // 0xd40 Eq
	if(var_472_bool == 0) goto Label_3414; // 0xd41 JumpB
	var_473_string = ""; // 0xd42 PushV
	var_473_string = "Strength"; // 0xd43 MovS
	func_2781(var_52_cvector, var_473_string); // 0xd44 NEW_2
	var_474_int = 519853; // 0xd46 PushI
	SetMessage(var_474_int); // 0xd47 TObjFunc
	ClearReplies(); // 0xd49 TObjFunc
	var_475_int = 519854; // 0xd4b PushI
	var_476_int = 21016; // 0xd4c PushI
	var_477_int = 21015; // 0xd4d PushI
	AddReply(var_475_int, var_476_int, var_477_int); // 0xd4e TObjFunc
	var_478_int = 519871; // 0xd50 PushI
	var_479_int = 21016; // 0xd51 PushI
	var_480_int = 21033; // 0xd52 PushI
	AddReply(var_478_int, var_479_int, var_480_int); // 0xd53 TObjFunc
	return 0; // 0xd55 Return
	
Label_3414:
	var_481_int = 21016; // 0xd56 PushI
	var_482_bool = var_51_bool == var_481_int; // 0xd57 Eq
	if(var_482_bool == 0) goto Label_3432; // 0xd58 JumpB
	var_483_string = ""; // 0xd59 PushV
	var_483_string = "Fear"; // 0xd5a MovS
	func_2781(var_52_cvector, var_483_string); // 0xd5b NEW_2
	var_484_int = 519855; // 0xd5d PushI
	SetMessage(var_484_int); // 0xd5e TObjFunc
	ClearReplies(); // 0xd60 TObjFunc
	var_485_int = 519856; // 0xd62 PushI
	var_486_int = 21018; // 0xd63 PushI
	var_487_int = 21017; // 0xd64 PushI
	AddReply(var_485_int, var_486_int, var_487_int); // 0xd65 TObjFunc
	return 0; // 0xd67 Return
	
Label_3432:
	var_488_int = 21018; // 0xd68 PushI
	var_489_bool = var_51_bool == var_488_int; // 0xd69 Eq
	if(var_489_bool == 0) goto Label_3455; // 0xd6a JumpB
	var_490_string = ""; // 0xd6b PushV
	var_490_string = "Fear"; // 0xd6c MovS
	func_2781(var_52_cvector, var_490_string); // 0xd6d NEW_2
	var_491_int = 519857; // 0xd6f PushI
	SetMessage(var_491_int); // 0xd70 TObjFunc
	ClearReplies(); // 0xd72 TObjFunc
	var_492_int = 519858; // 0xd74 PushI
	var_493_int = 21020; // 0xd75 PushI
	var_494_int = 21019; // 0xd76 PushI
	AddReply(var_492_int, var_493_int, var_494_int); // 0xd77 TObjFunc
	var_495_int = 527143; // 0xd79 PushI
	var_496_int = 28443; // 0xd7a PushI
	var_497_int = 28442; // 0xd7b PushI
	AddReply(var_495_int, var_496_int, var_497_int); // 0xd7c TObjFunc
	return 0; // 0xd7e Return
	
Label_3455:
	var_498_int = 28443; // 0xd7f PushI
	var_499_bool = var_51_bool == var_498_int; // 0xd80 Eq
	if(var_499_bool == 0) goto Label_3473; // 0xd81 JumpB
	var_500_string = ""; // 0xd82 PushV
	var_500_string = "Neutral"; // 0xd83 MovS
	func_2781(var_52_cvector, var_500_string); // 0xd84 NEW_2
	var_501_int = 527144; // 0xd86 PushI
	SetMessage(var_501_int); // 0xd87 TObjFunc
	ClearReplies(); // 0xd89 TObjFunc
	var_502_int = 527145; // 0xd8b PushI
	var_503_int = 21020; // 0xd8c PushI
	var_504_int = 28444; // 0xd8d PushI
	AddReply(var_502_int, var_503_int, var_504_int); // 0xd8e TObjFunc
	return 0; // 0xd90 Return
	
Label_3473:
	var_505_int = 21020; // 0xd91 PushI
	var_506_bool = var_51_bool == var_505_int; // 0xd92 Eq
	if(var_506_bool == 0) goto Label_3501; // 0xd93 JumpB
	var_507_string = ""; // 0xd94 PushV
	var_507_string = "Impatience"; // 0xd95 MovS
	func_2781(var_52_cvector, var_507_string); // 0xd96 NEW_2
	var_508_int = 519859; // 0xd98 PushI
	SetMessage(var_508_int); // 0xd99 TObjFunc
	ClearReplies(); // 0xd9b TObjFunc
	var_509_int = 519860; // 0xd9d PushI
	var_510_int = 21022; // 0xd9e PushI
	var_511_int = 21021; // 0xd9f PushI
	AddReply(var_509_int, var_510_int, var_511_int); // 0xda0 TObjFunc
	var_512_int = 519866; // 0xda2 PushI
	var_513_int = 21028; // 0xda3 PushI
	var_514_int = 21027; // 0xda4 PushI
	AddReply(var_512_int, var_513_int, var_514_int); // 0xda5 TObjFunc
	var_515_int = 519870; // 0xda7 PushI
	var_516_int = -1; // 0xda8 PushI
	var_517_int = 21032; // 0xda9 PushI
	AddReply(var_515_int, var_516_int, var_517_int); // 0xdaa TObjFunc
	return 0; // 0xdac Return
	
Label_3501:
	var_518_int = 21028; // 0xdad PushI
	var_519_bool = var_51_bool == var_518_int; // 0xdae Eq
	if(var_519_bool == 0) goto Label_3524; // 0xdaf JumpB
	var_520_string = ""; // 0xdb0 PushV
	var_520_string = "Neutral"; // 0xdb1 MovS
	func_2781(var_52_cvector, var_520_string); // 0xdb2 NEW_2
	var_521_int = 519867; // 0xdb4 PushI
	SetMessage(var_521_int); // 0xdb5 TObjFunc
	ClearReplies(); // 0xdb7 TObjFunc
	var_522_int = 519868; // 0xdb9 PushI
	var_523_int = -1; // 0xdba PushI
	var_524_int = 21029; // 0xdbb PushI
	AddReply(var_522_int, var_523_int, var_524_int); // 0xdbc TObjFunc
	var_525_int = 519869; // 0xdbe PushI
	var_526_int = 21025; // 0xdbf PushI
	var_527_int = 21030; // 0xdc0 PushI
	AddReply(var_525_int, var_526_int, var_527_int); // 0xdc1 TObjFunc
	return 0; // 0xdc3 Return
	
Label_3524:
	var_528_int = 21022; // 0xdc4 PushI
	var_529_bool = var_51_bool == var_528_int; // 0xdc5 Eq
	if(var_529_bool == 0) goto Label_3547; // 0xdc6 JumpB
	var_530_string = ""; // 0xdc7 PushV
	var_530_string = "Neutral"; // 0xdc8 MovS
	func_2781(var_52_cvector, var_530_string); // 0xdc9 NEW_2
	var_531_int = 519861; // 0xdcb PushI
	SetMessage(var_531_int); // 0xdcc TObjFunc
	ClearReplies(); // 0xdce TObjFunc
	var_532_int = 519862; // 0xdd0 PushI
	var_533_int = -1; // 0xdd1 PushI
	var_534_int = 21023; // 0xdd2 PushI
	AddReply(var_532_int, var_533_int, var_534_int); // 0xdd3 TObjFunc
	var_535_int = 519863; // 0xdd5 PushI
	var_536_int = 21025; // 0xdd6 PushI
	var_537_int = 21024; // 0xdd7 PushI
	AddReply(var_535_int, var_536_int, var_537_int); // 0xdd8 TObjFunc
	return 0; // 0xdda Return
	
Label_3547:
	var_538_int = 21025; // 0xddb PushI
	var_539_bool = var_51_bool == var_538_int; // 0xddc Eq
	if(var_539_bool == 0) goto Label_3565; // 0xddd JumpB
	var_540_string = ""; // 0xdde PushV
	var_540_string = "Neutral"; // 0xddf MovS
	func_2781(var_52_cvector, var_540_string); // 0xde0 NEW_2
	var_541_int = 519864; // 0xde2 PushI
	SetMessage(var_541_int); // 0xde3 TObjFunc
	ClearReplies(); // 0xde5 TObjFunc
	var_542_int = 519865; // 0xde7 PushI
	var_543_int = -1; // 0xde8 PushI
	var_544_int = 21026; // 0xde9 PushI
	AddReply(var_542_int, var_543_int, var_544_int); // 0xdea TObjFunc
	return 0; // 0xdec Return
	
Label_3565:
	var_545_int = 28374; // 0xded PushI
	var_546_bool = var_51_bool == var_545_int; // 0xdee Eq
	if(var_546_bool == 0) goto Label_3583; // 0xdef JumpB
	var_547_string = ""; // 0xdf0 PushV
	var_547_string = "Sympathy"; // 0xdf1 MovS
	func_2781(var_52_cvector, var_547_string); // 0xdf2 NEW_2
	var_548_int = 527077; // 0xdf4 PushI
	SetMessage(var_548_int); // 0xdf5 TObjFunc
	ClearReplies(); // 0xdf7 TObjFunc
	var_549_int = 527078; // 0xdf9 PushI
	var_550_int = -1; // 0xdfa PushI
	var_551_int = 28375; // 0xdfb PushI
	AddReply(var_549_int, var_550_int, var_551_int); // 0xdfc TObjFunc
	return 0; // 0xdfe Return
	
Label_3583:
	var_552_int = 20974; // 0xdff PushI
	var_553_bool = var_51_bool == var_552_int; // 0xe00 Eq
	if(var_553_bool == 0) goto Label_3601; // 0xe01 JumpB
	var_554_string = ""; // 0xe02 PushV
	var_554_string = "Sympathy"; // 0xe03 MovS
	func_2781(var_52_cvector, var_554_string); // 0xe04 NEW_2
	var_555_int = 519814; // 0xe06 PushI
	SetMessage(var_555_int); // 0xe07 TObjFunc
	ClearReplies(); // 0xe09 TObjFunc
	var_556_int = 519815; // 0xe0b PushI
	var_557_int = -1; // 0xe0c PushI
	var_558_int = 20975; // 0xe0d PushI
	AddReply(var_556_int, var_557_int, var_558_int); // 0xe0e TObjFunc
	return 0; // 0xe10 Return
	
Label_3601:
	var_3_string = 1; // 0xe11 TMovB
	var_559_bool = 0; // 0xe12 PushV
	func_6093(var_559_bool); // 0xe13 NEW_2
	if(var_559_bool == 0) goto Label_3609; // 0xe15 JumpB
	lshStopAnimation(); // 0xe16 Func
	goto Label_3611; // 0xe18 Jump
	
Label_3611:
	return 0; // 0xe1b Return
	
Label_3609:
	StopAnimation(); // 0xe19 Func
	
Label_3613:
	return 0; // 0xe1d Return
}


task_13_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_int, var_36_int, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_cvector)
{
	var_53_int = 1; // 0xec0 PushI
	if(var_53_int == 0) goto Label_3885; // 0xec1 JumpB
	func_5919(); // 0xec3 NEW_2
	var_55_int = 28309; // 0xec5 PushI
	var_56_bool = var_51_bool == var_55_int; // 0xec6 Eq
	if(var_56_bool == 0) goto Label_3804; // 0xec7 JumpB
	var_57_string = ""; // 0xec8 PushV
	var_57_string = "Neutral"; // 0xec9 MovS
	func_3753(var_52_cvector, var_57_string); // 0xeca NEW_2
	var_74_int = 527023; // 0xecc PushI
	SetMessage(var_74_int); // 0xecd TObjFunc
	ClearReplies(); // 0xecf TObjFunc
	var_75_int = 527024; // 0xed1 PushI
	var_76_int = 21951; // 0xed2 PushI
	var_77_int = 28310; // 0xed3 PushI
	AddReply(var_75_int, var_76_int, var_77_int); // 0xed4 TObjFunc
	var_78_int = 527025; // 0xed6 PushI
	var_79_int = 21951; // 0xed7 PushI
	var_80_int = 28311; // 0xed8 PushI
	AddReply(var_78_int, var_79_int, var_80_int); // 0xed9 TObjFunc
	return 0; // 0xedb Return
	
Label_3804:
	var_81_int = 21951; // 0xedc PushI
	var_82_bool = var_51_bool == var_81_int; // 0xedd Eq
	if(var_82_bool == 0) goto Label_3827; // 0xede JumpB
	var_83_string = ""; // 0xedf PushV
	var_83_string = "Neutral"; // 0xee0 MovS
	func_3753(var_52_cvector, var_83_string); // 0xee1 NEW_2
	var_84_int = 520740; // 0xee3 PushI
	SetMessage(var_84_int); // 0xee4 TObjFunc
	ClearReplies(); // 0xee6 TObjFunc
	var_85_int = 520741; // 0xee8 PushI
	var_86_int = 21953; // 0xee9 PushI
	var_87_int = 21952; // 0xeea PushI
	AddReply(var_85_int, var_86_int, var_87_int); // 0xeeb TObjFunc
	var_88_int = 520748; // 0xeed PushI
	var_89_int = 21955; // 0xeee PushI
	var_90_int = 21960; // 0xeef PushI
	AddReply(var_88_int, var_89_int, var_90_int); // 0xef0 TObjFunc
	return 0; // 0xef2 Return
	
Label_3827:
	var_91_int = 21953; // 0xef3 PushI
	var_92_bool = var_51_bool == var_91_int; // 0xef4 Eq
	if(var_92_bool == 0) goto Label_3850; // 0xef5 JumpB
	var_93_string = ""; // 0xef6 PushV
	var_93_string = "Neutral"; // 0xef7 MovS
	func_3753(var_52_cvector, var_93_string); // 0xef8 NEW_2
	var_94_int = 520742; // 0xefa PushI
	SetMessage(var_94_int); // 0xefb TObjFunc
	ClearReplies(); // 0xefd TObjFunc
	var_95_int = 520743; // 0xeff PushI
	var_96_int = 21955; // 0xf00 PushI
	var_97_int = 21954; // 0xf01 PushI
	AddReply(var_95_int, var_96_int, var_97_int); // 0xf02 TObjFunc
	var_98_int = 520747; // 0xf04 PushI
	var_99_int = 21955; // 0xf05 PushI
	var_100_int = 21958; // 0xf06 PushI
	AddReply(var_98_int, var_99_int, var_100_int); // 0xf07 TObjFunc
	return 0; // 0xf09 Return
	
Label_3850:
	var_101_int = 21955; // 0xf0a PushI
	var_102_bool = var_51_bool == var_101_int; // 0xf0b Eq
	if(var_102_bool == 0) goto Label_3873; // 0xf0c JumpB
	var_103_string = ""; // 0xf0d PushV
	var_103_string = "Neutral"; // 0xf0e MovS
	func_3753(var_52_cvector, var_103_string); // 0xf0f NEW_2
	var_104_int = 520744; // 0xf11 PushI
	SetMessage(var_104_int); // 0xf12 TObjFunc
	ClearReplies(); // 0xf14 TObjFunc
	var_105_int = 520745; // 0xf16 PushI
	var_106_int = -1; // 0xf17 PushI
	var_107_int = 21956; // 0xf18 PushI
	AddReply(var_105_int, var_106_int, var_107_int); // 0xf19 TObjFunc
	var_108_int = 520746; // 0xf1b PushI
	var_109_int = -1; // 0xf1c PushI
	var_110_int = 21957; // 0xf1d PushI
	AddReply(var_108_int, var_109_int, var_110_int); // 0xf1e TObjFunc
	return 0; // 0xf20 Return
	
Label_3873:
	var_3_string = 1; // 0xf21 TMovB
	var_111_bool = 0; // 0xf22 PushV
	func_6093(var_111_bool); // 0xf23 NEW_2
	if(var_111_bool == 0) goto Label_3881; // 0xf25 JumpB
	lshStopAnimation(); // 0xf26 Func
	goto Label_3883; // 0xf28 Jump
	
Label_3883:
	return 0; // 0xf2b Return
	
Label_3881:
	StopAnimation(); // 0xf29 Func
	
Label_3885:
	return 0; // 0xf2d Return
}


task_15_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_int, var_41_int, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_cvector)
{
	var_53_int = 1; // 0xff7 PushI
	if(var_53_int == 0) goto Label_4395; // 0xff8 JumpB
	func_5919(); // 0xffa NEW_2
	var_55_int = 22569; // 0xffc PushI
	var_56_bool = var_52_cvector == var_55_int; // 0xffd Eq
	if(var_56_bool == 0) goto Label_4100; // 0xffe JumpB
	var_57_object = Obj(); var_58_object = Obj(); // 0xfff PushV
	var_57_object = var_1_object; // 0x1000 MovT
	var_58_object = var_0_object; // 0x1001 MovT
	func_6160(); // 0x1002 NEW_2
	
Label_4100:
	var_61_int = 22571; // 0x1004 PushI
	var_62_bool = var_52_cvector == var_61_int; // 0x1005 Eq
	if(var_62_bool == 0) goto Label_4113; // 0x1006 JumpB
	var_63_object = Obj(); var_64_object = Obj(); // 0x1007 PushV
	var_63_object = var_1_object; // 0x1008 MovT
	var_64_object = var_0_object; // 0x1009 MovT
	func_6166(); // 0x100a NEW_2
	var_81_object = Obj(); var_82_object = Obj(); // 0x100c PushV
	var_81_object = var_1_object; // 0x100d MovT
	var_82_object = var_0_object; // 0x100e MovT
	func_6467(); // 0x100f NEW_2
	
Label_4113:
	var_85_int = 22566; // 0x1011 PushI
	var_86_bool = var_51_bool == var_85_int; // 0x1012 Eq
	if(var_86_bool == 0) goto Label_4175; // 0x1013 JumpB
	var_87_bool = 0; var_88_object = Obj(); // 0x1014 PushV
	var_88_object = var_1_object; // 0x1015 MovT
	func_6572(var_88_object); // 0x1016 NEW_2
	if(var_87_bool == 0) goto Label_4141; // 0x1018 JumpB
	var_95_object = Obj(); var_96_object = Obj(); // 0x1019 PushV
	var_95_object = var_1_object; // 0x101a MovT
	var_96_object = var_0_object; // 0x101b MovT
	func_6154(); // 0x101c NEW_2
	var_99_string = ""; // 0x101e PushV
	var_99_string = "Sympathy"; // 0x101f MovS
	func_4064(var_52_cvector, var_99_string); // 0x1020 NEW_2
	var_116_int = 521388; // 0x1022 PushI
	SetMessage(var_116_int); // 0x1023 TObjFunc
	ClearReplies(); // 0x1025 TObjFunc
	var_117_int = 521389; // 0x1027 PushI
	var_118_int = 25279; // 0x1028 PushI
	var_119_int = 22567; // 0x1029 PushI
	AddReply(var_117_int, var_118_int, var_119_int); // 0x102a TObjFunc
	return 0; // 0x102c Return
	
Label_4141:
	var_120_string = ""; // 0x102d PushV
	var_120_string = "Neutral"; // 0x102e MovS
	func_4064(var_52_cvector, var_120_string); // 0x102f NEW_2
	var_121_int = 521390; // 0x1031 PushI
	SetMessage(var_121_int); // 0x1032 TObjFunc
	ClearReplies(); // 0x1034 TObjFunc
	var_122_bool = 0; // 0x1036 PushV
	var_122_bool = 0; // 0x1037 MovB
	var_123_bool = 0; var_124_object = Obj(); // 0x1038 PushV
	var_124_object = var_1_object; // 0x1039 MovT
	func_6560(var_124_object); // 0x103a NEW_2
	if(var_123_bool == 0) goto Label_4163; // 0x103c JumpB
	var_129_bool = 0; var_130_object = Obj(); // 0x103d PushV
	var_130_object = var_1_object; // 0x103e MovT
	func_6584(var_130_object); // 0x103f NEW_2
	if(var_129_bool == 0) goto Label_4163; // 0x1041 JumpB
	var_122_bool = 1; // 0x1042 MovB
	
Label_4163:
	if(var_122_bool == 0) goto Label_4169; // 0x1043 JumpB
	var_135_int = 521391; // 0x1044 PushI
	var_136_int = 22570; // 0x1045 PushI
	var_137_int = 22569; // 0x1046 PushI
	AddReply(var_135_int, var_136_int, var_137_int); // 0x1047 TObjFunc
	
Label_4169:
	var_138_int = 521394; // 0x1049 PushI
	var_139_int = -1; // 0x104a PushI
	var_140_int = 22572; // 0x104b PushI
	AddReply(var_138_int, var_139_int, var_140_int); // 0x104c TObjFunc
	return 0; // 0x104e Return
	
Label_4175:
	var_141_int = 22570; // 0x104f PushI
	var_142_bool = var_51_bool == var_141_int; // 0x1050 Eq
	if(var_142_bool == 0) goto Label_4193; // 0x1051 JumpB
	var_143_string = ""; // 0x1052 PushV
	var_143_string = "Neutral"; // 0x1053 MovS
	func_4064(var_52_cvector, var_143_string); // 0x1054 NEW_2
	var_144_int = 521392; // 0x1056 PushI
	SetMessage(var_144_int); // 0x1057 TObjFunc
	ClearReplies(); // 0x1059 TObjFunc
	var_145_int = 521393; // 0x105b PushI
	var_146_int = -1; // 0x105c PushI
	var_147_int = 22571; // 0x105d PushI
	AddReply(var_145_int, var_146_int, var_147_int); // 0x105e TObjFunc
	return 0; // 0x1060 Return
	
Label_4193:
	var_148_int = 25286; // 0x1061 PushI
	var_149_bool = var_51_bool == var_148_int; // 0x1062 Eq
	if(var_149_bool == 0) goto Label_4196; // 0x1063 JumpB
	
Label_4196:
	var_150_int = 25288; // 0x1064 PushI
	var_151_bool = var_51_bool == var_150_int; // 0x1065 Eq
	if(var_151_bool == 0) goto Label_4219; // 0x1066 JumpB
	var_152_string = ""; // 0x1067 PushV
	var_152_string = "Strength"; // 0x1068 MovS
	func_4064(var_52_cvector, var_152_string); // 0x1069 NEW_2
	var_153_int = 523998; // 0x106b PushI
	SetMessage(var_153_int); // 0x106c TObjFunc
	ClearReplies(); // 0x106e TObjFunc
	var_154_int = 523999; // 0x1070 PushI
	var_155_int = 25279; // 0x1071 PushI
	var_156_int = 25289; // 0x1072 PushI
	AddReply(var_154_int, var_155_int, var_156_int); // 0x1073 TObjFunc
	var_157_int = 524000; // 0x1075 PushI
	var_158_int = 25279; // 0x1076 PushI
	var_159_int = 25290; // 0x1077 PushI
	AddReply(var_157_int, var_158_int, var_159_int); // 0x1078 TObjFunc
	return 0; // 0x107a Return
	
Label_4219:
	var_160_int = 25279; // 0x107b PushI
	var_161_bool = var_51_bool == var_160_int; // 0x107c Eq
	if(var_161_bool == 0) goto Label_4237; // 0x107d JumpB
	var_162_string = ""; // 0x107e PushV
	var_162_string = "Neutral"; // 0x107f MovS
	func_4064(var_52_cvector, var_162_string); // 0x1080 NEW_2
	var_163_int = 523989; // 0x1082 PushI
	SetMessage(var_163_int); // 0x1083 TObjFunc
	ClearReplies(); // 0x1085 TObjFunc
	var_164_int = 523990; // 0x1087 PushI
	var_165_int = 25281; // 0x1088 PushI
	var_166_int = 25280; // 0x1089 PushI
	AddReply(var_164_int, var_165_int, var_166_int); // 0x108a TObjFunc
	return 0; // 0x108c Return
	
Label_4237:
	var_167_int = 25281; // 0x108d PushI
	var_168_bool = var_51_bool == var_167_int; // 0x108e Eq
	if(var_168_bool == 0) goto Label_4260; // 0x108f JumpB
	var_169_string = ""; // 0x1090 PushV
	var_169_string = "Fear"; // 0x1091 MovS
	func_4064(var_52_cvector, var_169_string); // 0x1092 NEW_2
	var_170_int = 523991; // 0x1094 PushI
	SetMessage(var_170_int); // 0x1095 TObjFunc
	ClearReplies(); // 0x1097 TObjFunc
	var_171_int = 523992; // 0x1099 PushI
	var_172_int = 25283; // 0x109a PushI
	var_173_int = 25282; // 0x109b PushI
	AddReply(var_171_int, var_172_int, var_173_int); // 0x109c TObjFunc
	var_174_int = 524001; // 0x109e PushI
	var_175_int = 25294; // 0x109f PushI
	var_176_int = 25293; // 0x10a0 PushI
	AddReply(var_174_int, var_175_int, var_176_int); // 0x10a1 TObjFunc
	return 0; // 0x10a3 Return
	
Label_4260:
	var_177_int = 25294; // 0x10a4 PushI
	var_178_bool = var_51_bool == var_177_int; // 0x10a5 Eq
	if(var_178_bool == 0) goto Label_4283; // 0x10a6 JumpB
	var_179_string = ""; // 0x10a7 PushV
	var_179_string = "Fear"; // 0x10a8 MovS
	func_4064(var_52_cvector, var_179_string); // 0x10a9 NEW_2
	var_180_int = 524002; // 0x10ab PushI
	SetMessage(var_180_int); // 0x10ac TObjFunc
	ClearReplies(); // 0x10ae TObjFunc
	var_181_int = 524003; // 0x10b0 PushI
	var_182_int = 25283; // 0x10b1 PushI
	var_183_int = 25295; // 0x10b2 PushI
	AddReply(var_181_int, var_182_int, var_183_int); // 0x10b3 TObjFunc
	var_184_int = 524004; // 0x10b5 PushI
	var_185_int = 25297; // 0x10b6 PushI
	var_186_int = 25296; // 0x10b7 PushI
	AddReply(var_184_int, var_185_int, var_186_int); // 0x10b8 TObjFunc
	return 0; // 0x10ba Return
	
Label_4283:
	var_187_int = 25297; // 0x10bb PushI
	var_188_bool = var_51_bool == var_187_int; // 0x10bc Eq
	if(var_188_bool == 0) goto Label_4301; // 0x10bd JumpB
	var_189_string = ""; // 0x10be PushV
	var_189_string = "Strength"; // 0x10bf MovS
	func_4064(var_52_cvector, var_189_string); // 0x10c0 NEW_2
	var_190_int = 524005; // 0x10c2 PushI
	SetMessage(var_190_int); // 0x10c3 TObjFunc
	ClearReplies(); // 0x10c5 TObjFunc
	var_191_int = 530821; // 0x10c7 PushI
	var_192_int = 32132; // 0x10c8 PushI
	var_193_int = 32131; // 0x10c9 PushI
	AddReply(var_191_int, var_192_int, var_193_int); // 0x10ca TObjFunc
	return 0; // 0x10cc Return
	
Label_4301:
	var_194_int = 32132; // 0x10cd PushI
	var_195_bool = var_51_bool == var_194_int; // 0x10ce Eq
	if(var_195_bool == 0) goto Label_4319; // 0x10cf JumpB
	var_196_string = ""; // 0x10d0 PushV
	var_196_string = "Fear"; // 0x10d1 MovS
	func_4064(var_52_cvector, var_196_string); // 0x10d2 NEW_2
	var_197_int = 530822; // 0x10d4 PushI
	SetMessage(var_197_int); // 0x10d5 TObjFunc
	ClearReplies(); // 0x10d7 TObjFunc
	var_198_int = 530823; // 0x10d9 PushI
	var_199_int = 25283; // 0x10da PushI
	var_200_int = 32133; // 0x10db PushI
	AddReply(var_198_int, var_199_int, var_200_int); // 0x10dc TObjFunc
	return 0; // 0x10de Return
	
Label_4319:
	var_201_int = 25283; // 0x10df PushI
	var_202_bool = var_51_bool == var_201_int; // 0x10e0 Eq
	if(var_202_bool == 0) goto Label_4337; // 0x10e1 JumpB
	var_203_string = ""; // 0x10e2 PushV
	var_203_string = "Fear"; // 0x10e3 MovS
	func_4064(var_52_cvector, var_203_string); // 0x10e4 NEW_2
	var_204_int = 523993; // 0x10e6 PushI
	SetMessage(var_204_int); // 0x10e7 TObjFunc
	ClearReplies(); // 0x10e9 TObjFunc
	var_205_int = 523994; // 0x10eb PushI
	var_206_int = 25299; // 0x10ec PushI
	var_207_int = 25284; // 0x10ed PushI
	AddReply(var_205_int, var_206_int, var_207_int); // 0x10ee TObjFunc
	return 0; // 0x10f0 Return
	
Label_4337:
	var_208_int = 25299; // 0x10f1 PushI
	var_209_bool = var_51_bool == var_208_int; // 0x10f2 Eq
	if(var_209_bool == 0) goto Label_4355; // 0x10f3 JumpB
	var_210_string = ""; // 0x10f4 PushV
	var_210_string = "Impatience"; // 0x10f5 MovS
	func_4064(var_52_cvector, var_210_string); // 0x10f6 NEW_2
	var_211_int = 524006; // 0x10f8 PushI
	SetMessage(var_211_int); // 0x10f9 TObjFunc
	ClearReplies(); // 0x10fb TObjFunc
	var_212_int = 524007; // 0x10fd PushI
	var_213_int = 25301; // 0x10fe PushI
	var_214_int = 25300; // 0x10ff PushI
	AddReply(var_212_int, var_213_int, var_214_int); // 0x1100 TObjFunc
	return 0; // 0x1102 Return
	
Label_4355:
	var_215_int = 25301; // 0x1103 PushI
	var_216_bool = var_51_bool == var_215_int; // 0x1104 Eq
	if(var_216_bool == 0) goto Label_4383; // 0x1105 JumpB
	var_217_string = ""; // 0x1106 PushV
	var_217_string = "Strength"; // 0x1107 MovS
	func_4064(var_52_cvector, var_217_string); // 0x1108 NEW_2
	var_218_int = 524008; // 0x110a PushI
	SetMessage(var_218_int); // 0x110b TObjFunc
	ClearReplies(); // 0x110d TObjFunc
	var_219_int = 524009; // 0x110f PushI
	var_220_int = -1; // 0x1110 PushI
	var_221_int = 25302; // 0x1111 PushI
	AddReply(var_219_int, var_220_int, var_221_int); // 0x1112 TObjFunc
	var_222_int = 524010; // 0x1114 PushI
	var_223_int = -1; // 0x1115 PushI
	var_224_int = 25303; // 0x1116 PushI
	AddReply(var_222_int, var_223_int, var_224_int); // 0x1117 TObjFunc
	var_225_int = 524011; // 0x1119 PushI
	var_226_int = -1; // 0x111a PushI
	var_227_int = 25304; // 0x111b PushI
	AddReply(var_225_int, var_226_int, var_227_int); // 0x111c TObjFunc
	return 0; // 0x111e Return
	
Label_4383:
	var_3_string = 1; // 0x111f TMovB
	var_228_bool = 0; // 0x1120 PushV
	func_6093(var_228_bool); // 0x1121 NEW_2
	if(var_228_bool == 0) goto Label_4391; // 0x1123 JumpB
	lshStopAnimation(); // 0x1124 Func
	goto Label_4393; // 0x1126 Jump
	
Label_4393:
	return 0; // 0x1129 Return
	
Label_4391:
	StopAnimation(); // 0x1127 Func
	
Label_4395:
	return 0; // 0x112b Return
}


task_17_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_int, var_46_int, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_cvector)
{
	var_53_int = 1; // 0x121d PushI
	if(var_53_int == 0) goto Label_5148; // 0x121e JumpB
	func_5919(); // 0x1220 NEW_2
	var_55_int = 32465; // 0x1222 PushI
	var_56_bool = var_52_cvector == var_55_int; // 0x1223 Eq
	if(var_56_bool == 0) goto Label_4655; // 0x1224 JumpB
	var_57_object = Obj(); var_58_object = Obj(); // 0x1225 PushV
	var_57_object = var_1_object; // 0x1226 MovT
	var_58_object = var_0_object; // 0x1227 MovT
	func_6402(); // 0x1228 NEW_2
	var_116_object = Obj(); var_117_object = Obj(); // 0x122a PushV
	var_116_object = var_1_object; // 0x122b MovT
	var_117_object = var_0_object; // 0x122c MovT
	func_6467(); // 0x122d NEW_2
	
Label_4655:
	var_120_int = 23102; // 0x122f PushI
	var_121_bool = var_52_cvector == var_120_int; // 0x1230 Eq
	if(var_121_bool == 0) goto Label_4663; // 0x1231 JumpB
	var_122_object = Obj(); var_123_object = Obj(); // 0x1232 PushV
	var_122_object = var_1_object; // 0x1233 MovT
	var_123_object = var_0_object; // 0x1234 MovT
	func_6182(); // 0x1235 NEW_2
	
Label_4663:
	var_126_int = 32866; // 0x1237 PushI
	var_127_bool = var_52_cvector == var_126_int; // 0x1238 Eq
	if(var_127_bool == 0) goto Label_4671; // 0x1239 JumpB
	var_128_object = Obj(); var_129_object = Obj(); // 0x123a PushV
	var_128_object = var_1_object; // 0x123b MovT
	var_129_object = var_0_object; // 0x123c MovT
	func_6182(); // 0x123d NEW_2
	
Label_4671:
	var_130_int = 31814; // 0x123f PushI
	var_131_bool = var_52_cvector == var_130_int; // 0x1240 Eq
	if(var_131_bool == 0) goto Label_4679; // 0x1241 JumpB
	var_132_object = Obj(); var_133_object = Obj(); // 0x1242 PushV
	var_132_object = var_1_object; // 0x1243 MovT
	var_133_object = var_0_object; // 0x1244 MovT
	func_6188(); // 0x1245 NEW_2
	
Label_4679:
	var_136_int = 31818; // 0x1247 PushI
	var_137_bool = var_52_cvector == var_136_int; // 0x1248 Eq
	if(var_137_bool == 0) goto Label_4692; // 0x1249 JumpB
	var_138_object = Obj(); var_139_object = Obj(); // 0x124a PushV
	var_138_object = var_1_object; // 0x124b MovT
	var_139_object = var_0_object; // 0x124c MovT
	func_6279(); // 0x124d NEW_2
	var_150_object = Obj(); var_151_object = Obj(); // 0x124f PushV
	var_150_object = var_1_object; // 0x1250 MovT
	var_151_object = var_0_object; // 0x1251 MovT
	func_6299(); // 0x1252 NEW_2
	
Label_4692:
	var_176_int = 32469; // 0x1254 PushI
	var_177_bool = var_52_cvector == var_176_int; // 0x1255 Eq
	if(var_177_bool == 0) goto Label_4705; // 0x1256 JumpB
	var_178_object = Obj(); var_179_object = Obj(); // 0x1257 PushV
	var_178_object = var_1_object; // 0x1258 MovT
	var_179_object = var_0_object; // 0x1259 MovT
	func_6402(); // 0x125a NEW_2
	var_180_object = Obj(); var_181_object = Obj(); // 0x125c PushV
	var_180_object = var_1_object; // 0x125d MovT
	var_181_object = var_0_object; // 0x125e MovT
	func_6467(); // 0x125f NEW_2
	
Label_4705:
	var_182_int = 32462; // 0x1261 PushI
	var_183_bool = var_51_bool == var_182_int; // 0x1262 Eq
	if(var_183_bool == 0) goto Label_4807; // 0x1263 JumpB
	var_184_bool = 0; var_185_object = Obj(); // 0x1264 PushV
	var_185_object = var_1_object; // 0x1265 MovT
	func_6762(var_185_object); // 0x1266 NEW_2
	if(var_184_bool == 0) goto Label_4738; // 0x1268 JumpB
	var_192_object = Obj(); var_193_object = Obj(); // 0x1269 PushV
	var_192_object = var_1_object; // 0x126a MovT
	var_193_object = var_0_object; // 0x126b MovT
	func_6396(); // 0x126c NEW_2
	var_196_object = Obj(); var_197_object = Obj(); // 0x126e PushV
	var_196_object = var_1_object; // 0x126f MovT
	var_197_object = var_0_object; // 0x1270 MovT
	func_6432(); // 0x1271 NEW_2
	var_200_string = ""; // 0x1273 PushV
	var_200_string = "Neutral"; // 0x1274 MovS
	func_4614(var_52_cvector, var_200_string); // 0x1275 NEW_2
	var_217_int = 531154; // 0x1277 PushI
	SetMessage(var_217_int); // 0x1278 TObjFunc
	ClearReplies(); // 0x127a TObjFunc
	var_218_int = 531276; // 0x127c PushI
	var_219_int = 32591; // 0x127d PushI
	var_220_int = 32590; // 0x127e PushI
	AddReply(var_218_int, var_219_int, var_220_int); // 0x127f TObjFunc
	return 0; // 0x1281 Return
	
Label_4738:
	var_221_string = ""; // 0x1282 PushV
	var_221_string = "Neutral"; // 0x1283 MovS
	func_4614(var_52_cvector, var_221_string); // 0x1284 NEW_2
	var_222_int = 521924; // 0x1286 PushI
	SetMessage(var_222_int); // 0x1287 TObjFunc
	ClearReplies(); // 0x1289 TObjFunc
	var_223_bool = 0; // 0x128b PushV
	var_223_bool = 0; // 0x128c MovB
	var_224_bool = 0; var_225_object = Obj(); // 0x128d PushV
	var_225_object = var_1_object; // 0x128e MovT
	func_6596(var_225_object); // 0x128f NEW_2
	if(var_224_bool == 0) goto Label_4761; // 0x1291 JumpB
	var_230_bool = 0; var_231_object = Obj(); // 0x1292 PushV
	var_231_object = var_1_object; // 0x1293 MovT
	func_6608(var_231_object); // 0x1294 NEW_2
	var_236_bool = var_230_bool == 0; // 0x1296 Not
	if(var_236_bool == 0) goto Label_4761; // 0x1297 JumpB
	var_223_bool = 1; // 0x1298 MovB
	
Label_4761:
	if(var_223_bool == 0) goto Label_4767; // 0x1299 JumpB
	var_237_int = 521925; // 0x129a PushI
	var_238_int = 23656; // 0x129b PushI
	var_239_int = 23099; // 0x129c PushI
	AddReply(var_237_int, var_238_int, var_239_int); // 0x129d TObjFunc
	
Label_4767:
	var_240_bool = 0; // 0x129f PushV
	var_240_bool = 0; // 0x12a0 MovB
	var_241_bool = 0; var_242_object = Obj(); // 0x12a1 PushV
	var_242_object = var_1_object; // 0x12a2 MovT
	func_6714(var_242_object); // 0x12a3 NEW_2
	if(var_241_bool == 0) goto Label_4780; // 0x12a5 JumpB
	var_247_bool = 0; var_248_object = Obj(); // 0x12a6 PushV
	var_248_object = var_1_object; // 0x12a7 MovT
	func_6620(var_248_object); // 0x12a8 NEW_2
	if(var_247_bool == 0) goto Label_4780; // 0x12aa JumpB
	var_240_bool = 1; // 0x12ab MovB
	
Label_4780:
	if(var_240_bool == 0) goto Label_4786; // 0x12ac JumpB
	var_253_int = 530448; // 0x12ad PushI
	var_254_int = 31815; // 0x12ae PushI
	var_255_int = 31814; // 0x12af PushI
	AddReply(var_253_int, var_254_int, var_255_int); // 0x12b0 TObjFunc
	
Label_4786:
	var_256_bool = 0; var_257_object = Obj(); // 0x12b2 PushV
	var_257_object = var_1_object; // 0x12b3 MovT
	func_6774(var_257_object); // 0x12b4 NEW_2
	if(var_256_bool == 0) goto Label_4796; // 0x12b6 JumpB
	var_262_int = 531159; // 0x12b7 PushI
	var_263_int = 32468; // 0x12b8 PushI
	var_264_int = 32467; // 0x12b9 PushI
	AddReply(var_262_int, var_263_int, var_264_int); // 0x12ba TObjFunc
	
Label_4796:
	var_265_int = 521926; // 0x12bc PushI
	var_266_int = -1; // 0x12bd PushI
	var_267_int = 23100; // 0x12be PushI
	AddReply(var_265_int, var_266_int, var_267_int); // 0x12bf TObjFunc
	var_268_int = 531282; // 0x12c1 PushI
	var_269_int = -1; // 0x12c2 PushI
	var_270_int = 32597; // 0x12c3 PushI
	AddReply(var_268_int, var_269_int, var_270_int); // 0x12c4 TObjFunc
	return 0; // 0x12c6 Return
	
Label_4807:
	var_271_int = 32468; // 0x12c7 PushI
	var_272_bool = var_51_bool == var_271_int; // 0x12c8 Eq
	if(var_272_bool == 0) goto Label_4825; // 0x12c9 JumpB
	var_273_string = ""; // 0x12ca PushV
	var_273_string = "Neutral"; // 0x12cb MovS
	func_4614(var_52_cvector, var_273_string); // 0x12cc NEW_2
	var_274_int = 531160; // 0x12ce PushI
	SetMessage(var_274_int); // 0x12cf TObjFunc
	ClearReplies(); // 0x12d1 TObjFunc
	var_275_int = 531161; // 0x12d3 PushI
	var_276_int = -1; // 0x12d4 PushI
	var_277_int = 32469; // 0x12d5 PushI
	AddReply(var_275_int, var_276_int, var_277_int); // 0x12d6 TObjFunc
	return 0; // 0x12d8 Return
	
Label_4825:
	var_278_int = 31815; // 0x12d9 PushI
	var_279_bool = var_51_bool == var_278_int; // 0x12da Eq
	if(var_279_bool == 0) goto Label_4843; // 0x12db JumpB
	var_280_string = ""; // 0x12dc PushV
	var_280_string = "Fear"; // 0x12dd MovS
	func_4614(var_52_cvector, var_280_string); // 0x12de NEW_2
	var_281_int = 530449; // 0x12e0 PushI
	SetMessage(var_281_int); // 0x12e1 TObjFunc
	ClearReplies(); // 0x12e3 TObjFunc
	var_282_int = 530450; // 0x12e5 PushI
	var_283_int = 31817; // 0x12e6 PushI
	var_284_int = 31816; // 0x12e7 PushI
	AddReply(var_282_int, var_283_int, var_284_int); // 0x12e8 TObjFunc
	return 0; // 0x12ea Return
	
Label_4843:
	var_285_int = 32601; // 0x12eb PushI
	var_286_bool = var_51_bool == var_285_int; // 0x12ec Eq
	if(var_286_bool == 0) goto Label_4846; // 0x12ed JumpB
	
Label_4846:
	var_287_int = 31817; // 0x12ee PushI
	var_288_bool = var_51_bool == var_287_int; // 0x12ef Eq
	if(var_288_bool == 0) goto Label_4869; // 0x12f0 JumpB
	var_289_string = ""; // 0x12f1 PushV
	var_289_string = "Fear"; // 0x12f2 MovS
	func_4614(var_52_cvector, var_289_string); // 0x12f3 NEW_2
	var_290_int = 530451; // 0x12f5 PushI
	SetMessage(var_290_int); // 0x12f6 TObjFunc
	ClearReplies(); // 0x12f8 TObjFunc
	var_291_int = 531287; // 0x12fa PushI
	var_292_int = 32603; // 0x12fb PushI
	var_293_int = 32602; // 0x12fc PushI
	AddReply(var_291_int, var_292_int, var_293_int); // 0x12fd TObjFunc
	var_294_int = 531284; // 0x12ff PushI
	var_295_int = 32600; // 0x1300 PushI
	var_296_int = 32599; // 0x1301 PushI
	AddReply(var_294_int, var_295_int, var_296_int); // 0x1302 TObjFunc
	return 0; // 0x1304 Return
	
Label_4869:
	var_297_int = 32600; // 0x1305 PushI
	var_298_bool = var_51_bool == var_297_int; // 0x1306 Eq
	if(var_298_bool == 0) goto Label_4887; // 0x1307 JumpB
	var_299_string = ""; // 0x1308 PushV
	var_299_string = "Impatience"; // 0x1309 MovS
	func_4614(var_52_cvector, var_299_string); // 0x130a NEW_2
	var_300_int = 531285; // 0x130c PushI
	SetMessage(var_300_int); // 0x130d TObjFunc
	ClearReplies(); // 0x130f TObjFunc
	var_301_int = 531290; // 0x1311 PushI
	var_302_int = 32603; // 0x1312 PushI
	var_303_int = 32606; // 0x1313 PushI
	AddReply(var_301_int, var_302_int, var_303_int); // 0x1314 TObjFunc
	return 0; // 0x1316 Return
	
Label_4887:
	var_304_int = 32603; // 0x1317 PushI
	var_305_bool = var_51_bool == var_304_int; // 0x1318 Eq
	if(var_305_bool == 0) goto Label_4905; // 0x1319 JumpB
	var_306_string = ""; // 0x131a PushV
	var_306_string = "Impatience"; // 0x131b MovS
	func_4614(var_52_cvector, var_306_string); // 0x131c NEW_2
	var_307_int = 531288; // 0x131e PushI
	SetMessage(var_307_int); // 0x131f TObjFunc
	ClearReplies(); // 0x1321 TObjFunc
	var_308_int = 530452; // 0x1323 PushI
	var_309_int = -1; // 0x1324 PushI
	var_310_int = 31818; // 0x1325 PushI
	AddReply(var_308_int, var_309_int, var_310_int); // 0x1326 TObjFunc
	return 0; // 0x1328 Return
	
Label_4905:
	var_311_int = 23652; // 0x1329 PushI
	var_312_bool = var_51_bool == var_311_int; // 0x132a Eq
	if(var_312_bool == 0) goto Label_4908; // 0x132b JumpB
	
Label_4908:
	var_313_int = 23654; // 0x132c PushI
	var_314_bool = var_51_bool == var_313_int; // 0x132d Eq
	if(var_314_bool == 0) goto Label_4926; // 0x132e JumpB
	var_315_string = ""; // 0x132f PushV
	var_315_string = "Fear"; // 0x1330 MovS
	func_4614(var_52_cvector, var_315_string); // 0x1331 NEW_2
	var_316_int = 522481; // 0x1333 PushI
	SetMessage(var_316_int); // 0x1334 TObjFunc
	ClearReplies(); // 0x1336 TObjFunc
	var_317_int = 522482; // 0x1338 PushI
	var_318_int = -1; // 0x1339 PushI
	var_319_int = 23655; // 0x133a PushI
	AddReply(var_317_int, var_318_int, var_319_int); // 0x133b TObjFunc
	return 0; // 0x133d Return
	
Label_4926:
	var_320_int = 23656; // 0x133e PushI
	var_321_bool = var_51_bool == var_320_int; // 0x133f Eq
	if(var_321_bool == 0) goto Label_4949; // 0x1340 JumpB
	var_322_string = ""; // 0x1341 PushV
	var_322_string = "Strength"; // 0x1342 MovS
	func_4614(var_52_cvector, var_322_string); // 0x1343 NEW_2
	var_323_int = 522483; // 0x1345 PushI
	SetMessage(var_323_int); // 0x1346 TObjFunc
	ClearReplies(); // 0x1348 TObjFunc
	var_324_int = 522484; // 0x134a PushI
	var_325_int = 23658; // 0x134b PushI
	var_326_int = 23657; // 0x134c PushI
	AddReply(var_324_int, var_325_int, var_326_int); // 0x134d TObjFunc
	var_327_int = 522492; // 0x134f PushI
	var_328_int = 23666; // 0x1350 PushI
	var_329_int = 23665; // 0x1351 PushI
	AddReply(var_327_int, var_328_int, var_329_int); // 0x1352 TObjFunc
	return 0; // 0x1354 Return
	
Label_4949:
	var_330_int = 23666; // 0x1355 PushI
	var_331_bool = var_51_bool == var_330_int; // 0x1356 Eq
	if(var_331_bool == 0) goto Label_4967; // 0x1357 JumpB
	var_332_string = ""; // 0x1358 PushV
	var_332_string = "Neutral"; // 0x1359 MovS
	func_4614(var_52_cvector, var_332_string); // 0x135a NEW_2
	var_333_int = 522493; // 0x135c PushI
	SetMessage(var_333_int); // 0x135d TObjFunc
	ClearReplies(); // 0x135f TObjFunc
	var_334_int = 522494; // 0x1361 PushI
	var_335_int = 23658; // 0x1362 PushI
	var_336_int = 23667; // 0x1363 PushI
	AddReply(var_334_int, var_335_int, var_336_int); // 0x1364 TObjFunc
	return 0; // 0x1366 Return
	
Label_4967:
	var_337_int = 23658; // 0x1367 PushI
	var_338_bool = var_51_bool == var_337_int; // 0x1368 Eq
	if(var_338_bool == 0) goto Label_4990; // 0x1369 JumpB
	var_339_string = ""; // 0x136a PushV
	var_339_string = "Strength"; // 0x136b MovS
	func_4614(var_52_cvector, var_339_string); // 0x136c NEW_2
	var_340_int = 522485; // 0x136e PushI
	SetMessage(var_340_int); // 0x136f TObjFunc
	ClearReplies(); // 0x1371 TObjFunc
	var_341_int = 522486; // 0x1373 PushI
	var_342_int = 23660; // 0x1374 PushI
	var_343_int = 23659; // 0x1375 PushI
	AddReply(var_341_int, var_342_int, var_343_int); // 0x1376 TObjFunc
	var_344_int = 522495; // 0x1378 PushI
	var_345_int = 23670; // 0x1379 PushI
	var_346_int = 23669; // 0x137a PushI
	AddReply(var_344_int, var_345_int, var_346_int); // 0x137b TObjFunc
	return 0; // 0x137d Return
	
Label_4990:
	var_347_int = 23670; // 0x137e PushI
	var_348_bool = var_51_bool == var_347_int; // 0x137f Eq
	if(var_348_bool == 0) goto Label_5008; // 0x1380 JumpB
	var_349_string = ""; // 0x1381 PushV
	var_349_string = "Neutral"; // 0x1382 MovS
	func_4614(var_52_cvector, var_349_string); // 0x1383 NEW_2
	var_350_int = 522496; // 0x1385 PushI
	SetMessage(var_350_int); // 0x1386 TObjFunc
	ClearReplies(); // 0x1388 TObjFunc
	var_351_int = 522497; // 0x138a PushI
	var_352_int = 23662; // 0x138b PushI
	var_353_int = 23671; // 0x138c PushI
	AddReply(var_351_int, var_352_int, var_353_int); // 0x138d TObjFunc
	return 0; // 0x138f Return
	
Label_5008:
	var_354_int = 23660; // 0x1390 PushI
	var_355_bool = var_51_bool == var_354_int; // 0x1391 Eq
	if(var_355_bool == 0) goto Label_5026; // 0x1392 JumpB
	var_356_string = ""; // 0x1393 PushV
	var_356_string = "Strength"; // 0x1394 MovS
	func_4614(var_52_cvector, var_356_string); // 0x1395 NEW_2
	var_357_int = 522487; // 0x1397 PushI
	SetMessage(var_357_int); // 0x1398 TObjFunc
	ClearReplies(); // 0x139a TObjFunc
	var_358_int = 522488; // 0x139c PushI
	var_359_int = 23662; // 0x139d PushI
	var_360_int = 23661; // 0x139e PushI
	AddReply(var_358_int, var_359_int, var_360_int); // 0x139f TObjFunc
	return 0; // 0x13a1 Return
	
Label_5026:
	var_361_int = 23662; // 0x13a2 PushI
	var_362_bool = var_51_bool == var_361_int; // 0x13a3 Eq
	if(var_362_bool == 0) goto Label_5049; // 0x13a4 JumpB
	var_363_string = ""; // 0x13a5 PushV
	var_363_string = "Neutral"; // 0x13a6 MovS
	func_4614(var_52_cvector, var_363_string); // 0x13a7 NEW_2
	var_364_int = 522489; // 0x13a9 PushI
	SetMessage(var_364_int); // 0x13aa TObjFunc
	ClearReplies(); // 0x13ac TObjFunc
	var_365_int = 522490; // 0x13ae PushI
	var_366_int = 23664; // 0x13af PushI
	var_367_int = 23663; // 0x13b0 PushI
	AddReply(var_365_int, var_366_int, var_367_int); // 0x13b1 TObjFunc
	var_368_int = 531512; // 0x13b3 PushI
	var_369_int = -1; // 0x13b4 PushI
	var_370_int = 32866; // 0x13b5 PushI
	AddReply(var_368_int, var_369_int, var_370_int); // 0x13b6 TObjFunc
	return 0; // 0x13b8 Return
	
Label_5049:
	var_371_int = 23664; // 0x13b9 PushI
	var_372_bool = var_51_bool == var_371_int; // 0x13ba Eq
	if(var_372_bool == 0) goto Label_5067; // 0x13bb JumpB
	var_373_string = ""; // 0x13bc PushV
	var_373_string = "Neutral"; // 0x13bd MovS
	func_4614(var_52_cvector, var_373_string); // 0x13be NEW_2
	var_374_int = 522491; // 0x13c0 PushI
	SetMessage(var_374_int); // 0x13c1 TObjFunc
	ClearReplies(); // 0x13c3 TObjFunc
	var_375_int = 521928; // 0x13c5 PushI
	var_376_int = -1; // 0x13c6 PushI
	var_377_int = 23102; // 0x13c7 PushI
	AddReply(var_375_int, var_376_int, var_377_int); // 0x13c8 TObjFunc
	return 0; // 0x13ca Return
	
Label_5067:
	var_378_int = 32591; // 0x13cb PushI
	var_379_bool = var_51_bool == var_378_int; // 0x13cc Eq
	if(var_379_bool == 0) goto Label_5090; // 0x13cd JumpB
	var_380_string = ""; // 0x13ce PushV
	var_380_string = "Fear"; // 0x13cf MovS
	func_4614(var_52_cvector, var_380_string); // 0x13d0 NEW_2
	var_381_int = 531277; // 0x13d2 PushI
	SetMessage(var_381_int); // 0x13d3 TObjFunc
	ClearReplies(); // 0x13d5 TObjFunc
	var_382_int = 531278; // 0x13d7 PushI
	var_383_int = 32593; // 0x13d8 PushI
	var_384_int = 32592; // 0x13d9 PushI
	AddReply(var_382_int, var_383_int, var_384_int); // 0x13da TObjFunc
	var_385_int = 531281; // 0x13dc PushI
	var_386_int = 32464; // 0x13dd PushI
	var_387_int = 32595; // 0x13de PushI
	AddReply(var_385_int, var_386_int, var_387_int); // 0x13df TObjFunc
	return 0; // 0x13e1 Return
	
Label_5090:
	var_388_int = 32593; // 0x13e2 PushI
	var_389_bool = var_51_bool == var_388_int; // 0x13e3 Eq
	if(var_389_bool == 0) goto Label_5113; // 0x13e4 JumpB
	var_390_string = ""; // 0x13e5 PushV
	var_390_string = "Impatience"; // 0x13e6 MovS
	func_4614(var_52_cvector, var_390_string); // 0x13e7 NEW_2
	var_391_int = 531279; // 0x13e9 PushI
	SetMessage(var_391_int); // 0x13ea TObjFunc
	ClearReplies(); // 0x13ec TObjFunc
	var_392_int = 531155; // 0x13ee PushI
	var_393_int = 32464; // 0x13ef PushI
	var_394_int = 32463; // 0x13f0 PushI
	AddReply(var_392_int, var_393_int, var_394_int); // 0x13f1 TObjFunc
	var_395_int = 531280; // 0x13f3 PushI
	var_396_int = -1; // 0x13f4 PushI
	var_397_int = 32594; // 0x13f5 PushI
	AddReply(var_395_int, var_396_int, var_397_int); // 0x13f6 TObjFunc
	return 0; // 0x13f8 Return
	
Label_5113:
	var_398_int = 32464; // 0x13f9 PushI
	var_399_bool = var_51_bool == var_398_int; // 0x13fa Eq
	if(var_399_bool == 0) goto Label_5136; // 0x13fb JumpB
	var_400_string = ""; // 0x13fc PushV
	var_400_string = "Sympathy"; // 0x13fd MovS
	func_4614(var_52_cvector, var_400_string); // 0x13fe NEW_2
	var_401_int = 531156; // 0x1400 PushI
	SetMessage(var_401_int); // 0x1401 TObjFunc
	ClearReplies(); // 0x1403 TObjFunc
	var_402_int = 531157; // 0x1405 PushI
	var_403_int = -1; // 0x1406 PushI
	var_404_int = 32465; // 0x1407 PushI
	AddReply(var_402_int, var_403_int, var_404_int); // 0x1408 TObjFunc
	var_405_int = 531158; // 0x140a PushI
	var_406_int = -1; // 0x140b PushI
	var_407_int = 32466; // 0x140c PushI
	AddReply(var_405_int, var_406_int, var_407_int); // 0x140d TObjFunc
	return 0; // 0x140f Return
	
Label_5136:
	var_3_string = 1; // 0x1410 TMovB
	var_408_bool = 0; // 0x1411 PushV
	func_6093(var_408_bool); // 0x1412 NEW_2
	if(var_408_bool == 0) goto Label_5144; // 0x1414 JumpB
	lshStopAnimation(); // 0x1415 Func
	goto Label_5146; // 0x1417 Jump
	
Label_5146:
	return 0; // 0x141a Return
	
Label_5144:
	StopAnimation(); // 0x1418 Func
	
Label_5148:
	return 0; // 0x141c Return
}


task_19_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_object, var_46_object, var_47_object, var_48_string, var_49_bool, var_50_int, var_51_int, var_52_cvector)
{
	var_53_int = 1; // 0x14bf PushI
	if(var_53_int == 0) goto Label_5351; // 0x14c0 JumpB
	func_5919(); // 0x14c2 NEW_2
	var_55_int = 42560; // 0x14c4 PushI
	var_56_bool = var_51_int == var_55_int; // 0x14c5 Eq
	if(var_56_bool == 0) goto Label_5339; // 0x14c6 JumpB
	var_57_string = ""; // 0x14c7 PushV
	var_57_string = "Neutral"; // 0x14c8 MovS
	func_5288(var_52_cvector, var_57_string); // 0x14c9 NEW_2
	var_74_int = 540551; // 0x14cb PushI
	SetMessage(var_74_int); // 0x14cc TObjFunc
	ClearReplies(); // 0x14ce TObjFunc
	var_75_int = 540552; // 0x14d0 PushI
	var_76_int = -1; // 0x14d1 PushI
	var_77_int = 42561; // 0x14d2 PushI
	AddReply(var_75_int, var_76_int, var_77_int); // 0x14d3 TObjFunc
	var_78_int = 540795; // 0x14d5 PushI
	var_79_int = -1; // 0x14d6 PushI
	var_80_int = 42844; // 0x14d7 PushI
	AddReply(var_78_int, var_79_int, var_80_int); // 0x14d8 TObjFunc
	return 0; // 0x14da Return
	
Label_5339:
	var_3_string = 1; // 0x14db TMovB
	var_81_bool = 0; // 0x14dc PushV
	func_6093(var_81_bool); // 0x14dd NEW_2
	if(var_81_bool == 0) goto Label_5347; // 0x14df JumpB
	lshStopAnimation(); // 0x14e0 Func
	goto Label_5349; // 0x14e2 Jump
	
Label_5349:
	return 0; // 0x14e5 Return
	
Label_5347:
	StopAnimation(); // 0x14e3 Func
	
Label_5351:
	return 0; // 0x14e7 Return
}


task_20_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_object, var_46_object, var_47_object, var_48_string, var_49_bool, var_50_cvector, var_51_int)
{
	var_52_int = 10; // 0x1535 PushI
	var_53_bool = var_51_int == var_52_int; // 0x1536 Eq
	if(var_53_bool == 0) goto Label_5465; // 0x1537 JumpB
	func_5424(); // 0x1539 NEW_2
	var_55_bool = 0; // 0x153b PushV
	var_55_bool = 0; // 0x153c MovB
	var_56_bool = 0; // 0x153d PushV
	func_5645(var_56_bool); // 0x153e NEW_2
	if(var_56_bool == 0) goto Label_5446; // 0x1540 JumpB
	var_59_bool = 0; // 0x1541 PushV
	func_5393(var_59_bool); // 0x1542 NEW_2
	if(var_59_bool == 0) goto Label_5446; // 0x1544 JumpB
	var_55_bool = 1; // 0x1545 MovB
	
Label_5446:
	if(var_55_bool == 0) goto Label_5459; // 0x1546 JumpB
	var_76_bool = 0; // 0x1547 PushV
	func_5373(var_76_bool); // 0x1548 NEW_2
	if(var_76_bool == 0) goto Label_5458; // 0x154a JumpB
	var_95_bool = 0; var_96_object = Obj(); // 0x154b PushV
	var_97_object = Obj(); // 0x154c PushV
	func_5926(var_97_object); // 0x154d NEW_2
	var_96_object = var_97_object; // 0x154e Mov
	func_5793(var_96_object); // 0x1550 NEW_2
	
Label_5458:
	goto Label_5465; // 0x1552 Jump
	
Label_5465:
	return 0; // 0x1559 Return
	
Label_5459:
	func_5388(var_51_int); // 0x1554 NEW_2
	func_5415(); // 0x1557 NEW_2
}


task_20_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_object, var_46_object, var_47_object, var_48_string, var_49_bool, var_50_cvector)
{
	func_5606(); // 0x155b NEW_2
	func_5424(); // 0x155e NEW_2
	lshStopSpeech(); // 0x1560 Func
	lshStopAnimation(); // 0x1562 Func
	StopAsync(); // 0x1564 Func
	Hold(); // 0x1566 Func
	return 0; // 0x1568 Return
}


task_20_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_object, var_46_object, var_47_object, var_48_string, var_49_bool, var_50_cvector)
{
	StopGroup0(); // 0x1569 Func
	func_5424(); // 0x156c NEW_2
	var_52_string = ""; // 0x156e PushV
	var_52_string = "Neutral"; // 0x156f MovS
	func_5873(var_52_string); // 0x1570 NEW_2
	func_5415(); // 0x1573 NEW_2
	return 0; // 0x1575 Return
}


task_20_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_object, var_46_object, var_47_object, var_48_string, var_49_bool, var_50_cvector, var_51_bool)
{
	var_52_bool = var_51_bool; // 0x1577 Push
	if(var_52_bool == 0) goto Label_5501; // 0x1578 JumpB
	func_5415(); // 0x157a NEW_2
	goto Label_5505; // 0x157c Jump
	
Label_5505:
	return 0; // 0x1581 Return
	
Label_5501:
	var_58_string = ""; // 0x157d PushV
	var_58_string = "Neutral"; // 0x157e MovS
	func_5873(var_58_string); // 0x157f NEW_2
}


task_20_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_object, var_46_object, var_47_object, var_48_string, var_49_bool, var_50_cvector, var_51_object)
{
	var_52_bool = 0; var_53_bool = 0; // 0x1582 PushV
	IsOverrideActive(var_53_bool); // 0x1583 Func
	var_54_bool = var_53_bool == 0; // 0x1585 Not
	if(var_54_bool == 0) goto Label_5534; // 0x1586 JumpB
	EventDisable(0); // 0x1587 EventDisable
	func_5606(); // 0x1589 NEW_2
	var_55_bool = 0; var_56_object = Obj(); // 0x158b PushV
	var_56_object = var_51_object; // 0x158c Mov
	func_5636(var_56_object); // 0x158d NEW_2
	EventEnable(0); // 0x158f EventEnable
	var_69_object = Obj(); // 0x1590 PushV
	var_69_object = var_51_object; // 0x1591 Mov
	func_7243(var_53_bool, var_69_object); // 0x1592 NEW_2
	var_1124_string = ""; // 0x1594 PushV
	var_1124_string = "Neutral"; // 0x1595 MovS
	func_5873(var_1124_string); // 0x1596 NEW_2
	func_5424(); // 0x1599 NEW_2
	func_5415(); // 0x159c NEW_2
	
Label_5534:
	return 2; // 0x159e Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_object, var_46_object, var_47_object, var_48_string, var_49_bool, var_50_cvector)
{
	var_51_bool = GlobalVars[1]; // 0x14e8 PushGE
	var_51_bool = 0; // 0x14e9 MovB
	GlobalVars[1] = var_51_bool; // 0x14ea PopGE
	func_5359(var_50_cvector); // 0x14ec NEW_2
	return 0; // 0x14ee Return
}


func_6656(var_762_bool)
{
	var_764_int = 0; var_765_string = ""; // 0x1a01 PushV
	var_765_string = "b9q03"; // 0x1a02 MovS
	func_5942(var_764_int, var_765_string); // 0x1a03 NEW_2
	var_766_int = 0; // 0x1a05 PushI
	var_767_bool = var_764_int == var_766_int; // 0x1a06 Eq
	if(var_767_bool == 0) goto Label_6666; // 0x1a07 JumpB
	var_762_bool = 1; // 0x1a08 MovB
	return 0; // 0x1a09 Return
	
Label_6666:
	var_762_bool = 0; // 0x1a0a MovB
	return 0; // 0x1a0b Return
}


func_7169(var_70_bool, var_71_int)
{
	var_72_int = 18; // 0x1c02 PushI
	add(var_72_int); // 0x1c03 ObjFunc
	var_73_int = 24; // 0x1c05 PushI
	add(var_73_int); // 0x1c06 ObjFunc
	var_74_int = 20; // 0x1c08 PushI
	add(var_74_int); // 0x1c09 ObjFunc
	var_75_int = 14; // 0x1c0b PushI
	add(var_75_int); // 0x1c0c ObjFunc
	var_76_bool = 0; // 0x1c0e PushB
	var_77_bool = var_70_bool == var_76_bool; // 0x1c0f Eq
	if(var_77_bool == 0) goto Label_7195; // 0x1c10 JumpB
	var_78_int = 10; // 0x1c11 PushI
	add(var_78_int); // 0x1c12 ObjFunc
	var_79_int = 17; // 0x1c14 PushI
	add(var_79_int); // 0x1c15 ObjFunc
	var_80_int = 8; // 0x1c17 PushI
	add(var_80_int); // 0x1c18 ObjFunc
	goto Label_7201; // 0x1c1a Jump
	
Label_7201:
	return 0; // 0x1c21 Return
	
Label_7195:
	var_81_int = 1; // 0x1c1b PushI
	var_82_bool = var_71_int != var_81_int; // 0x1c1c Neq
	if(var_82_bool == 0) goto Label_7201; // 0x1c1d JumpB
	var_83_int = 10; // 0x1c1e PushI
	add(var_83_int); // 0x1c1f ObjFunc
}


func_0(var_0_object, var_657_int, var_658_object)
{
	var_660_object = Obj(); var_661_bool = 0; var_662_int = 0; var_663_bool = 0; var_664_object = Obj(); var_665_bool = 0; var_666_int = 0; var_667_bool = 0; // 0x0 PushV
	var_0_object = var_658_object; // 0x1 TMov
	var_668_bool = 0; var_669_object = Obj(); var_670_float = 0; // 0x2 PushV
	var_669_object = var_658_object; // 0x3 Mov
	var_670_float = 70.0; // 0x4 MovF
	func_5650(var_669_object, var_670_float); // 0x5 NEW_2
	var_671_bool = var_668_bool == 0; // 0x7 Not
	if(var_671_bool == 0) goto Label_11; // 0x8 JumpB
	var_657_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_664_object); // 0xb Func
	var_672_int = 0; // 0xd PushV
	func_6087(var_672_int); // 0xe NEW_2
	SetNPCName(var_672_int); // 0x10 ObjFunc
	var_673_int = 0; // 0x12 PushV
	func_6085(var_673_int); // 0x13 NEW_2
	SetNPCDescription(var_673_int); // 0x15 ObjFunc
	var_674_string = ""; // 0x17 PushV
	func_6089(var_674_string); // 0x18 NEW_2
	SetPhoto(var_674_string); // 0x1a ObjFunc
	var_675_string = ""; // 0x1c PushV
	func_6091(var_675_string); // 0x1d NEW_2
	SetPhoto2(var_675_string); // 0x1f ObjFunc
	var_676_int = 0; // 0x21 PushV
	func_7152(var_676_int); // 0x22 NEW_2
	SetPlayerName(var_676_int); // 0x24 ObjFunc
	var_666_int = -1; // 0x26 MovI
	IsOverrideActive(var_665_bool); // 0x27 Func
	var_677_bool = var_665_bool; // 0x29 Push
	if(var_677_bool == 0) goto Label_45; // 0x2a JumpB
	var_657_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_664_object); // 0x2d Func
	var_678_bool = 0; var_679_object = Obj(); // 0x2f PushV
	var_680_object = Obj(); // 0x30 PushV
	func_5926(var_680_object); // 0x31 NEW_2
	var_679_object = var_680_object; // 0x32 Mov
	func_5735(var_678_bool, var_679_object); // 0x34 NEW_2
	var_681_object = Obj(); var_682_object = Obj(); // 0x36 PushV
	var_681_object = var_658_object; // 0x37 Mov
	var_682_object = var_664_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_683_object, var_684_object, var_685_string, var_686_bool, var_681_object, var_682_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	IsDialogEnd(var_667_bool); // 0x3d ObjFunc
	
Label_63:
	var_792_bool = var_667_bool == 0; // 0x3f Not
	if(var_792_bool == 0) goto Label_70; // 0x40 JumpB
	sync(); // 0x41 Func
	IsDialogEnd(var_667_bool); // 0x43 ObjFunc
	goto Label_63; // 0x45 Jump
	
Label_70:
	var_793_object = Obj(); // 0x46 PushV
	var_793_object = var_658_object; // 0x47 Mov
	func_5718(); // 0x48 NEW_2
	StopDialog(var_664_object); // 0x4a Func
	GetReturnValue(var_666_int); // 0x4c ObjFunc
	var_657_int = var_666_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_6148()
{
	var_208_string = "oob1Kapella4"; // 0x1805 PushS
	var_209_int = 1; // 0x1806 PushI
	SetVariable(var_208_string, var_209_int); // 0x1807 Func
	return 0; // 0x1809 Return
}


func_5636(var_55_bool)
{
	var_57_cvector = CVector(0,0,0); var_58_cvector = CVector(0,0,0); // 0x1604 PushV
	GetPosition(var_58_cvector); // 0x1605 ObjFunc
	var_59_bool = 0; var_60_cvector = CVector(0,0,0); // 0x1607 PushV
	var_60_cvector = var_58_cvector; // 0x1608 Mov
	func_5626(var_59_bool, var_60_cvector); // 0x1609 NEW_2
	var_55_bool = var_59_bool; // 0x160a Mov
	return 2; // 0x160c Return
}


func_4614(var_2_object, var_841_string)
{
	var_842_bool = 0; // 0x1207 PushV
	func_6093(var_842_bool); // 0x1208 NEW_2
	var_843_bool = var_842_bool == 0; // 0x120a Not
	if(var_843_bool == 0) goto Label_4621; // 0x120b JumpB
	return 0; // 0x120c Return
	
Label_4621:
	var_844_bool = var_841_string == var_2_object; // 0x120d Eq
	if(var_844_bool == 0) goto Label_4624; // 0x120e JumpB
	return 0; // 0x120f Return
	
Label_4624:
	var_845_string = ""; var_846_bool = 0; // 0x1210 PushV
	var_845_string = var_841_string; // 0x1211 Mov
	var_847_string = ""; // 0x1212 PushS
	var_848_bool = var_841_string == var_847_string; // 0x1213 Eq
	if(var_848_bool == 0) goto Label_4631; // 0x1214 JumpB
	var_846_bool = 0; // 0x1215 MovB
	goto Label_4632; // 0x1216 Jump
	
Label_4632:
	func_5889(var_845_string, var_846_bool); // 0x1218 NEW_2
	var_2_object = var_841_string; // 0x121a TMov
	return 0; // 0x121b Return
	
Label_4631:
	var_846_bool = 1; // 0x1217 MovB
}


func_6154()
{
	var_610_string = "oob8Kapella1"; // 0x180b PushS
	var_611_int = 1; // 0x180c PushI
	SetVariable(var_610_string, var_611_int); // 0x180d Func
	return 0; // 0x180f Return
}


func_6668(var_697_bool)
{
	var_699_int = 0; var_700_string = ""; // 0x1a0d PushV
	var_700_string = "b9q03BadInit"; // 0x1a0e MovS
	func_5942(var_699_int, var_700_string); // 0x1a0f NEW_2
	var_701_int = 0; // 0x1a11 PushI
	var_702_bool = var_699_int != var_701_int; // 0x1a12 Neq
	if(var_702_bool == 0) goto Label_6678; // 0x1a13 JumpB
	var_697_bool = 1; // 0x1a14 MovB
	return 0; // 0x1a15 Return
	
Label_6678:
	var_697_bool = 0; // 0x1a16 MovB
	return 0; // 0x1a17 Return
}


func_5645(var_52_bool)
{
	var_53_bool = 0; var_54_bool = 0; // 0x160d PushV
	IsLoaded(var_54_bool); // 0x160e Func
	var_52_bool = var_54_bool; // 0x1610 Mov
	return 2; // 0x1611 Return
}


func_2572(var_0_object, var_300_int, var_301_object)
{
	var_303_object = Obj(); var_304_bool = 0; var_305_int = 0; var_306_bool = 0; var_307_object = Obj(); var_308_bool = 0; var_309_int = 0; var_310_bool = 0; // 0xa0c PushV
	var_0_object = var_301_object; // 0xa0d TMov
	var_311_bool = 0; var_312_object = Obj(); var_313_float = 0; // 0xa0e PushV
	var_312_object = var_301_object; // 0xa0f Mov
	var_313_float = 70.0; // 0xa10 MovF
	func_5650(var_312_object, var_313_float); // 0xa11 NEW_2
	var_314_bool = var_311_bool == 0; // 0xa13 Not
	if(var_314_bool == 0) goto Label_2583; // 0xa14 JumpB
	var_300_int = -2; // 0xa15 MovI
	return 8; // 0xa16 Return
	
Label_2583:
	CreateDialog(var_307_object); // 0xa17 Func
	var_315_int = 0; // 0xa19 PushV
	func_6087(var_315_int); // 0xa1a NEW_2
	SetNPCName(var_315_int); // 0xa1c ObjFunc
	var_316_int = 0; // 0xa1e PushV
	func_6085(var_316_int); // 0xa1f NEW_2
	SetNPCDescription(var_316_int); // 0xa21 ObjFunc
	var_317_string = ""; // 0xa23 PushV
	func_6089(var_317_string); // 0xa24 NEW_2
	SetPhoto(var_317_string); // 0xa26 ObjFunc
	var_318_string = ""; // 0xa28 PushV
	func_6091(var_318_string); // 0xa29 NEW_2
	SetPhoto2(var_318_string); // 0xa2b ObjFunc
	var_319_int = 0; // 0xa2d PushV
	func_7152(var_319_int); // 0xa2e NEW_2
	SetPlayerName(var_319_int); // 0xa30 ObjFunc
	var_309_int = -1; // 0xa32 MovI
	IsOverrideActive(var_308_bool); // 0xa33 Func
	var_320_bool = var_308_bool; // 0xa35 Push
	if(var_320_bool == 0) goto Label_2617; // 0xa36 JumpB
	var_300_int = -2; // 0xa37 MovI
	return 8; // 0xa38 Return
	
Label_2617:
	DoDialog(var_307_object); // 0xa39 Func
	var_321_bool = 0; var_322_object = Obj(); // 0xa3b PushV
	var_323_object = Obj(); // 0xa3c PushV
	func_5926(var_323_object); // 0xa3d NEW_2
	var_322_object = var_323_object; // 0xa3e Mov
	func_5735(var_321_bool, var_322_object); // 0xa40 NEW_2
	var_324_object = Obj(); var_325_object = Obj(); // 0xa42 PushV
	var_324_object = var_301_object; // 0xa43 Mov
	var_325_object = var_307_object; // 0xa44 Mov
	TaskCall(11); // 0xa45 TaskCall
	func_2653(var_326_object, var_327_object, var_328_string, var_329_bool, var_324_object, var_325_object); // 0xa46 NEW_2
	TaskReturn(); // 0xa47 TaskReturn
	IsDialogEnd(var_310_bool); // 0xa49 ObjFunc
	
Label_2635:
	var_403_bool = var_310_bool == 0; // 0xa4b Not
	if(var_403_bool == 0) goto Label_2642; // 0xa4c JumpB
	sync(); // 0xa4d Func
	IsDialogEnd(var_310_bool); // 0xa4f ObjFunc
	goto Label_2635; // 0xa51 Jump
	
Label_2642:
	var_404_object = Obj(); // 0xa52 PushV
	var_404_object = var_301_object; // 0xa53 Mov
	func_5718(); // 0xa54 NEW_2
	StopDialog(var_307_object); // 0xa56 Func
	GetReturnValue(var_309_int); // 0xa58 ObjFunc
	var_300_int = var_309_int; // 0xa5a Mov
	return 8; // 0xa5b Return
}


func_6160()
{
	var_59_string = "oob8Kapella2"; // 0x1811 PushS
	var_60_int = 1; // 0x1812 PushI
	SetVariable(var_59_string, var_60_int); // 0x1813 Func
	return 0; // 0x1815 Return
}


func_5650(var_83_bool, var_85_float)
{
	var_86_float = 0; var_87_cvector = CVector(0,0,0); var_88_cvector = CVector(0,0,0); var_89_cvector = CVector(0,0,0); var_90_cvector = CVector(0,0,0); var_91_cvector = CVector(0,0,0); var_92_cvector = CVector(0,0,0); var_93_bool = 0; var_94_bool = 0; var_95_float = 0; var_96_cvector = CVector(0,0,0); var_97_cvector = CVector(0,0,0); var_98_cvector = CVector(0,0,0); var_99_cvector = CVector(0,0,0); var_100_cvector = CVector(0,0,0); var_101_cvector = CVector(0,0,0); var_102_bool = 0; var_103_bool = 0; // 0x1612 PushV
	GetPosition(var_96_cvector); // 0x1613 ObjFunc
	GetEyesHeight(var_95_float); // 0x1615 ObjFunc
	var_104_float = GetByIndex(var_96_cvector, 1); // 0x1617 PushE
	var_104_float = var_104_float + var_95_float; // 0x1618 Add2
	SetByIndex(var_96_cvector, 1) = var_104_float; // 0x1619 PopE
	GetPosition(var_97_cvector); // 0x161a Func
	GetEyesHeight(var_95_float); // 0x161c Func
	var_105_float = GetByIndex(var_97_cvector, 1); // 0x161e PushE
	var_105_float = var_105_float + var_95_float; // 0x161f Add2
	SetByIndex(var_97_cvector, 1) = var_105_float; // 0x1620 PopE
	var_98_cvector = var_96_cvector - var_97_cvector; // 0x1621 Sub2
	var_106_float = GetByIndex(var_98_cvector, 1); // 0x1622 PushE
	var_106_float = 0; // 0x1623 MovI
	SetByIndex(var_98_cvector, 1) = var_106_float; // 0x1624 PopE
	var_107_int = var_98_cvector | var_98_cvector; // 0x1625 Or
	var_108_float = sqrt(var_107_int); // 0x1626 Sqrt
	var_98_cvector = var_98_cvector / var_98_cvector; // 0x1627 Div2
	var_99_cvector = -var_98_cvector; // 0x1628 Neg2
	var_109_float = var_98_cvector * var_85_float; // 0x1629 Mult
	var_110_cvector = CVector(0,0,0); var_111_cvector = CVector(0,0,0); // 0x162a PushV
	var_112_cvector = CVector(0.0, 1.0, 0.0); // 0x162b PushVec
	var_111_cvector = var_99_cvector ^ var_112_cvector; // 0x162c Xor2
	func_5932(var_110_cvector, var_111_cvector); // 0x162d NEW_2
	var_118_int = 25; // 0x162f PushI
	var_119_float = var_110_cvector * var_118_int; // 0x1630 Mult
	var_120_int = var_109_float + var_119_float; // 0x1631 Add
	var_121_cvector = CVector(0.0, 10.0, 0.0); // 0x1632 PushVec
	var_100_cvector = var_120_int - var_121_cvector; // 0x1633 Sub2
	var_101_cvector = var_97_cvector + var_100_cvector; // 0x1634 Add2
	IsOverrideActive(var_102_bool); // 0x1635 Func
	var_122_bool = var_102_bool; // 0x1637 Push
	if(var_122_bool == 0) goto Label_5691; // 0x1638 JumpB
	var_83_bool = 0; // 0x1639 MovB
	return 18; // 0x163a Return
	
Label_5691:
	StopWorld(); // 0x163b Func
	CameraTransit(var_101_cvector, var_99_cvector); // 0x163d Func
	var_123_float = GetByIndex(var_100_cvector, 0); // 0x163f PushE
	var_124_float = GetByIndex(var_100_cvector, 2); // 0x1640 PushE
	Rotate(var_123_float, var_124_float); // 0x1641 Func
	var_125_bool = 0; // 0x1643 PushV
	func_6093(var_125_bool); // 0x1644 NEW_2
	if(var_125_bool == 0) goto Label_5704; // 0x1646 JumpB
	goto Label_5712; // 0x1647 Jump
	
Label_5712:
	CameraWaitForPlayFinish(); // 0x1650 Func
	ResumeWorld(); // 0x1652 Func
	var_83_bool = 1; // 0x1654 MovB
	return 18; // 0x1655 Return
	
Label_5704:
	var_126_string = "head"; // 0x1648 PushS
	HasAnimationTrack(var_103_bool, var_126_string); // 0x1649 Func
	var_127_bool = var_103_bool; // 0x164b Push
	if(var_127_bool == 0) goto Label_5712; // 0x164c JumpB
	var_128_string = "head"; // 0x164d PushS
	LookAsyncCamera(var_128_string); // 0x164e Func
}


func_6166()
{
	var_65_object = Obj(); var_66_object = Obj(); // 0x1816 PushV
	var_67_object = Obj(); // 0x1817 PushV
	func_7102(var_67_object); // 0x1818 NEW_2
	var_66_object = var_67_object; // 0x1819 Mov
	var_74_string = "b8q01KapellaGotoKlara"; // 0x181b PushS
	var_75_string = "pt_map_mishka"; // 0x181c PushS
	var_76_int = 3; // 0x181d PushI
	var_77_int = 521465; // 0x181e PushI
	var_78_float = 0; // 0x181f PushV
	func_6033(var_78_float); // 0x1820 NEW_2
	AddMark(var_74_string, var_75_string, var_76_int, var_77_int, var_78_float); // 0x1822 ObjFunc
	return 2; // 0x1824 Return
}


func_6680(var_774_bool)
{
	var_776_int = 0; var_777_string = ""; // 0x1a19 PushV
	var_777_string = "b9q03BonefiresCount"; // 0x1a1a MovS
	func_5942(var_776_int, var_777_string); // 0x1a1b NEW_2
	var_778_int = 4; // 0x1a1d PushI
	var_779_bool = var_776_int == var_778_int; // 0x1a1e Eq
	if(var_779_bool == 0) goto Label_6690; // 0x1a1f JumpB
	var_774_bool = 1; // 0x1a20 MovB
	return 0; // 0x1a21 Return
	
Label_6690:
	var_774_bool = 0; // 0x1a22 MovB
	return 0; // 0x1a23 Return
}


func_5149(var_0_object, var_1068_int, var_1069_object)
{
	var_1071_object = Obj(); var_1072_bool = 0; var_1073_int = 0; var_1074_bool = 0; var_1075_object = Obj(); var_1076_bool = 0; var_1077_int = 0; var_1078_bool = 0; // 0x141d PushV
	var_0_object = var_1069_object; // 0x141e TMov
	var_1079_bool = 0; var_1080_object = Obj(); var_1081_float = 0; // 0x141f PushV
	var_1080_object = var_1069_object; // 0x1420 Mov
	var_1081_float = 70.0; // 0x1421 MovF
	func_5650(var_1080_object, var_1081_float); // 0x1422 NEW_2
	var_1082_bool = var_1079_bool == 0; // 0x1424 Not
	if(var_1082_bool == 0) goto Label_5160; // 0x1425 JumpB
	var_1068_int = -2; // 0x1426 MovI
	return 8; // 0x1427 Return
	
Label_5160:
	CreateDialog(var_1075_object); // 0x1428 Func
	var_1083_int = 0; // 0x142a PushV
	func_6087(var_1083_int); // 0x142b NEW_2
	SetNPCName(var_1083_int); // 0x142d ObjFunc
	var_1084_int = 0; // 0x142f PushV
	func_6085(var_1084_int); // 0x1430 NEW_2
	SetNPCDescription(var_1084_int); // 0x1432 ObjFunc
	var_1085_string = ""; // 0x1434 PushV
	func_6089(var_1085_string); // 0x1435 NEW_2
	SetPhoto(var_1085_string); // 0x1437 ObjFunc
	var_1086_string = ""; // 0x1439 PushV
	func_6091(var_1086_string); // 0x143a NEW_2
	SetPhoto2(var_1086_string); // 0x143c ObjFunc
	var_1087_int = 0; // 0x143e PushV
	func_7152(var_1087_int); // 0x143f NEW_2
	SetPlayerName(var_1087_int); // 0x1441 ObjFunc
	var_1077_int = -1; // 0x1443 MovI
	IsOverrideActive(var_1076_bool); // 0x1444 Func
	var_1088_bool = var_1076_bool; // 0x1446 Push
	if(var_1088_bool == 0) goto Label_5194; // 0x1447 JumpB
	var_1068_int = -2; // 0x1448 MovI
	return 8; // 0x1449 Return
	
Label_5194:
	DoDialog(var_1075_object); // 0x144a Func
	var_1089_bool = 0; var_1090_object = Obj(); // 0x144c PushV
	var_1091_object = Obj(); // 0x144d PushV
	func_5926(var_1091_object); // 0x144e NEW_2
	var_1090_object = var_1091_object; // 0x144f Mov
	func_5735(var_1089_bool, var_1090_object); // 0x1451 NEW_2
	var_1092_object = Obj(); var_1093_object = Obj(); // 0x1453 PushV
	var_1092_object = var_1069_object; // 0x1454 Mov
	var_1093_object = var_1075_object; // 0x1455 Mov
	TaskCall(19); // 0x1456 TaskCall
	func_5230(var_1094_object, var_1095_object, var_1096_string, var_1097_bool, var_1092_object, var_1093_object); // 0x1457 NEW_2
	TaskReturn(); // 0x1458 TaskReturn
	IsDialogEnd(var_1078_bool); // 0x145a ObjFunc
	
Label_5212:
	var_1122_bool = var_1078_bool == 0; // 0x145c Not
	if(var_1122_bool == 0) goto Label_5219; // 0x145d JumpB
	sync(); // 0x145e Func
	IsDialogEnd(var_1078_bool); // 0x1460 ObjFunc
	goto Label_5212; // 0x1462 Jump
	
Label_5219:
	var_1123_object = Obj(); // 0x1463 PushV
	var_1123_object = var_1069_object; // 0x1464 Mov
	func_5718(); // 0x1465 NEW_2
	StopDialog(var_1075_object); // 0x1467 Func
	GetReturnValue(var_1077_int); // 0x1469 ObjFunc
	var_1068_int = var_1077_int; // 0x146b Mov
	return 8; // 0x146c Return
}


func_3614(var_0_object, var_72_int, var_73_object)
{
	var_75_object = Obj(); var_76_bool = 0; var_77_int = 0; var_78_bool = 0; var_79_object = Obj(); var_80_bool = 0; var_81_int = 0; var_82_bool = 0; // 0xe1e PushV
	var_0_object = var_73_object; // 0xe1f TMov
	var_83_bool = 0; var_84_object = Obj(); var_85_float = 0; // 0xe20 PushV
	var_84_object = var_73_object; // 0xe21 Mov
	var_85_float = 70.0; // 0xe22 MovF
	func_5650(var_84_object, var_85_float); // 0xe23 NEW_2
	var_129_bool = var_83_bool == 0; // 0xe25 Not
	if(var_129_bool == 0) goto Label_3625; // 0xe26 JumpB
	var_72_int = -2; // 0xe27 MovI
	return 8; // 0xe28 Return
	
Label_3625:
	CreateDialog(var_79_object); // 0xe29 Func
	var_130_int = 0; // 0xe2b PushV
	func_6087(var_130_int); // 0xe2c NEW_2
	SetNPCName(var_130_int); // 0xe2e ObjFunc
	var_131_int = 0; // 0xe30 PushV
	func_6085(var_131_int); // 0xe31 NEW_2
	SetNPCDescription(var_131_int); // 0xe33 ObjFunc
	var_132_string = ""; // 0xe35 PushV
	func_6089(var_132_string); // 0xe36 NEW_2
	SetPhoto(var_132_string); // 0xe38 ObjFunc
	var_133_string = ""; // 0xe3a PushV
	func_6091(var_133_string); // 0xe3b NEW_2
	SetPhoto2(var_133_string); // 0xe3d ObjFunc
	var_134_int = 0; // 0xe3f PushV
	func_7152(var_134_int); // 0xe40 NEW_2
	SetPlayerName(var_134_int); // 0xe42 ObjFunc
	var_81_int = -1; // 0xe44 MovI
	IsOverrideActive(var_80_bool); // 0xe45 Func
	var_142_bool = var_80_bool; // 0xe47 Push
	if(var_142_bool == 0) goto Label_3659; // 0xe48 JumpB
	var_72_int = -2; // 0xe49 MovI
	return 8; // 0xe4a Return
	
Label_3659:
	DoDialog(var_79_object); // 0xe4b Func
	var_143_bool = 0; var_144_object = Obj(); // 0xe4d PushV
	var_145_object = Obj(); // 0xe4e PushV
	func_5926(var_145_object); // 0xe4f NEW_2
	var_144_object = var_145_object; // 0xe50 Mov
	func_5735(var_143_bool, var_144_object); // 0xe52 NEW_2
	var_238_object = Obj(); var_239_object = Obj(); // 0xe54 PushV
	var_238_object = var_73_object; // 0xe55 Mov
	var_239_object = var_79_object; // 0xe56 Mov
	TaskCall(13); // 0xe57 TaskCall
	func_3695(var_240_object, var_241_object, var_242_string, var_243_bool, var_238_object, var_239_object); // 0xe58 NEW_2
	TaskReturn(); // 0xe59 TaskReturn
	IsDialogEnd(var_82_bool); // 0xe5b ObjFunc
	
Label_3677:
	var_287_bool = var_82_bool == 0; // 0xe5d Not
	if(var_287_bool == 0) goto Label_3684; // 0xe5e JumpB
	sync(); // 0xe5f Func
	IsDialogEnd(var_82_bool); // 0xe61 ObjFunc
	goto Label_3677; // 0xe63 Jump
	
Label_3684:
	var_288_object = Obj(); // 0xe64 PushV
	var_288_object = var_73_object; // 0xe65 Mov
	func_5718(); // 0xe66 NEW_2
	StopDialog(var_79_object); // 0xe68 Func
	GetReturnValue(var_81_int); // 0xe6a ObjFunc
	var_72_int = var_81_int; // 0xe6c Mov
	return 8; // 0xe6d Return
}


func_7202(var_85_int)
{
	var_86_int = 0; var_87_int = 0; // 0x1c22 PushV
	var_88_string = "vol_"; // 0x1c23 PushS
	var_89_int = var_88_string + var_85_int; // 0x1c24 Add
	GetVariable(var_89_int, var_87_int); // 0x1c25 Func
	var_90_string = "vol_"; // 0x1c27 PushS
	var_91_int = var_90_string + var_85_int; // 0x1c28 Add
	var_92_int = 8; // 0x1c29 PushI
	var_93_int = var_87_int | var_92_int; // 0x1c2a Or
	SetVariable(var_91_int, var_93_int); // 0x1c2b Func
	return 2; // 0x1c2d Return
}


func_6692(var_780_bool)
{
	var_782_int = 0; var_783_string = ""; // 0x1a25 PushV
	var_783_string = "b9q03"; // 0x1a26 MovS
	func_5942(var_782_int, var_783_string); // 0x1a27 NEW_2
	var_784_int = 1; // 0x1a29 PushI
	var_785_bool = var_782_int == var_784_int; // 0x1a2a Eq
	if(var_785_bool == 0) goto Label_6702; // 0x1a2b JumpB
	var_780_bool = 1; // 0x1a2c MovB
	return 0; // 0x1a2d Return
	
Label_6702:
	var_780_bool = 0; // 0x1a2e MovB
	return 0; // 0x1a2f Return
}


func_6182()
{
	var_124_string = "b10q01TalkKapella"; // 0x1827 PushS
	var_125_int = 1; // 0x1828 PushI
	SetVariable(var_124_string, var_125_int); // 0x1829 Func
	return 0; // 0x182b Return
}


func_6188()
{
	var_134_string = "oob10Kapella1"; // 0x182d PushS
	var_135_int = 1; // 0x182e PushI
	SetVariable(var_134_string, var_135_int); // 0x182f Func
	return 0; // 0x1831 Return
}


func_7214()
{
	var_61_object = Obj(); var_62_int = 0; var_63_int = 0; var_64_int = 0; var_65_object = Obj(); var_66_int = 0; var_67_int = 0; var_68_int = 0; // 0x1c2e PushV
	CreateIntVector(var_65_object); // 0x1c2f Func
	var_69_object = Obj(); var_70_bool = 0; var_71_int = 0; // 0x1c31 PushV
	var_69_object = var_65_object; // 0x1c32 Mov
	var_70_bool = 0; // 0x1c33 MovB
	var_71_int = -1; // 0x1c34 MovI
	func_7169(var_70_bool, var_71_int); // 0x1c35 NEW_2
	size(var_66_int); // 0x1c37 ObjFunc
	var_67_int = 0; // 0x1c39 MovI
	
Label_7226:
	var_84_bool = var_67_int < var_66_int; // 0x1c3a LT
	if(var_84_bool == 0) goto Label_7237; // 0x1c3b JumpB
	get(var_68_int, var_67_int); // 0x1c3c ObjFunc
	var_85_int = 0; // 0x1c3e PushV
	var_85_int = var_68_int; // 0x1c3f Mov
	func_7202(var_85_int); // 0x1c40 NEW_2
	var_94_int = 1; // 0x1c42 PushI
	var_67_int = var_67_int + var_94_int; // 0x1c43 Add2
	goto Label_7226; // 0x1c44 Jump
	
Label_7237:
	return 8; // 0x1c45 Return
}


func_6704(var_704_bool, var_705_object)
{
	var_706_bool = 0; var_707_object = Obj(); // 0x1a31 PushV
	var_707_object = var_705_object; // 0x1a32 Mov
	func_6894(var_707_object); // 0x1a33 NEW_2
	if(var_706_bool == 0) goto Label_6712; // 0x1a35 JumpB
	var_704_bool = 1; // 0x1a36 MovB
	return 0; // 0x1a37 Return
	
Label_6712:
	var_704_bool = 0; // 0x1a38 MovB
	return 0; // 0x1a39 Return
}


func_6194()
{
	var_100_string = "b1ResqueList"; // 0x1833 PushS
	var_101_int = 1; // 0x1834 PushI
	SetVariable(var_100_string, var_101_int); // 0x1835 Func
	return 0; // 0x1837 Return
}


func_1590(var_0_object, var_410_int, var_411_object)
{
	var_413_object = Obj(); var_414_bool = 0; var_415_int = 0; var_416_bool = 0; var_417_object = Obj(); var_418_bool = 0; var_419_int = 0; var_420_bool = 0; // 0x636 PushV
	var_0_object = var_411_object; // 0x637 TMov
	var_421_bool = 0; var_422_object = Obj(); var_423_float = 0; // 0x638 PushV
	var_422_object = var_411_object; // 0x639 Mov
	var_423_float = 70.0; // 0x63a MovF
	func_5650(var_422_object, var_423_float); // 0x63b NEW_2
	var_424_bool = var_421_bool == 0; // 0x63d Not
	if(var_424_bool == 0) goto Label_1601; // 0x63e JumpB
	var_410_int = -2; // 0x63f MovI
	return 8; // 0x640 Return
	
Label_1601:
	CreateDialog(var_417_object); // 0x641 Func
	var_425_int = 0; // 0x643 PushV
	func_6087(var_425_int); // 0x644 NEW_2
	SetNPCName(var_425_int); // 0x646 ObjFunc
	var_426_int = 0; // 0x648 PushV
	func_6085(var_426_int); // 0x649 NEW_2
	SetNPCDescription(var_426_int); // 0x64b ObjFunc
	var_427_string = ""; // 0x64d PushV
	func_6089(var_427_string); // 0x64e NEW_2
	SetPhoto(var_427_string); // 0x650 ObjFunc
	var_428_string = ""; // 0x652 PushV
	func_6091(var_428_string); // 0x653 NEW_2
	SetPhoto2(var_428_string); // 0x655 ObjFunc
	var_429_int = 0; // 0x657 PushV
	func_7152(var_429_int); // 0x658 NEW_2
	SetPlayerName(var_429_int); // 0x65a ObjFunc
	var_419_int = -1; // 0x65c MovI
	IsOverrideActive(var_418_bool); // 0x65d Func
	var_430_bool = var_418_bool; // 0x65f Push
	if(var_430_bool == 0) goto Label_1635; // 0x660 JumpB
	var_410_int = -2; // 0x661 MovI
	return 8; // 0x662 Return
	
Label_1635:
	DoDialog(var_417_object); // 0x663 Func
	var_431_bool = 0; var_432_object = Obj(); // 0x665 PushV
	var_433_object = Obj(); // 0x666 PushV
	func_5926(var_433_object); // 0x667 NEW_2
	var_432_object = var_433_object; // 0x668 Mov
	func_5735(var_431_bool, var_432_object); // 0x66a NEW_2
	var_434_object = Obj(); var_435_object = Obj(); // 0x66c PushV
	var_434_object = var_411_object; // 0x66d Mov
	var_435_object = var_417_object; // 0x66e Mov
	TaskCall(7); // 0x66f TaskCall
	func_1671(var_436_object, var_437_object, var_438_string, var_439_bool, var_434_object, var_435_object); // 0x670 NEW_2
	TaskReturn(); // 0x671 TaskReturn
	IsDialogEnd(var_420_bool); // 0x673 ObjFunc
	
Label_1653:
	var_461_bool = var_420_bool == 0; // 0x675 Not
	if(var_461_bool == 0) goto Label_1660; // 0x676 JumpB
	sync(); // 0x677 Func
	IsDialogEnd(var_420_bool); // 0x679 ObjFunc
	goto Label_1653; // 0x67b Jump
	
Label_1660:
	var_462_object = Obj(); // 0x67c PushV
	var_462_object = var_411_object; // 0x67d Mov
	func_5718(); // 0x67e NEW_2
	StopDialog(var_417_object); // 0x680 Func
	GetReturnValue(var_419_int); // 0x682 ObjFunc
	var_410_int = var_419_int; // 0x684 Mov
	return 8; // 0x685 Return
}


func_6200(var_206_object)
{
	var_208_string = "money1000 is given"; // 0x1839 PushS
	Trace(var_208_string); // 0x183a Func
	var_209_object = Obj(); var_210_int = 0; // 0x183c PushV
	var_209_object = var_206_object; // 0x183d Mov
	var_210_int = 1000; // 0x183e MovI
	func_5970(var_209_object, var_210_int); // 0x183f NEW_2
	return 0; // 0x1841 Return
}


func_6714(var_881_bool)
{
	var_883_int = 0; var_884_string = ""; // 0x1a3b PushV
	var_884_string = "b10q04GirlGotoKapella"; // 0x1a3c MovS
	func_5942(var_883_int, var_884_string); // 0x1a3d NEW_2
	var_885_int = 0; // 0x1a3f PushI
	var_886_bool = var_883_int != var_885_int; // 0x1a40 Neq
	if(var_886_bool == 0) goto Label_6724; // 0x1a41 JumpB
	var_881_bool = 1; // 0x1a42 MovB
	return 0; // 0x1a43 Return
	
Label_6724:
	var_881_bool = 0; // 0x1a44 MovB
	return 0; // 0x1a45 Return
}


func_6210()
{
	var_749_string = "oob9Kapella1"; // 0x1843 PushS
	var_750_int = 1; // 0x1844 PushI
	SetVariable(var_749_string, var_750_int); // 0x1845 Func
	return 0; // 0x1847 Return
}


func_6726(var_946_bool)
{
	var_948_int = 0; var_949_string = ""; // 0x1a47 PushV
	var_949_string = "oob11Kapella1"; // 0x1a48 MovS
	func_5942(var_948_int, var_949_string); // 0x1a49 NEW_2
	var_950_int = 0; // 0x1a4b PushI
	var_951_bool = var_948_int == var_950_int; // 0x1a4c Eq
	if(var_951_bool == 0) goto Label_6736; // 0x1a4d JumpB
	var_946_bool = 1; // 0x1a4e MovB
	return 0; // 0x1a4f Return
	
Label_6736:
	var_946_bool = 0; // 0x1a50 MovB
	return 0; // 0x1a51 Return
}


func_7239()
{
	func_7214(); // 0x1c48 NEW_2
	return 0; // 0x1c4a Return
}


func_6216()
{
	var_59_object = Obj(); var_60_object = Obj(); // 0x1848 PushV
	var_61_string = "b9q03"; // 0x1849 PushS
	var_62_int = 1; // 0x184a PushI
	SetVariable(var_61_string, var_62_int); // 0x184b Func
	var_63_object = Obj(); // 0x184d PushV
	func_7102(var_63_object); // 0x184e NEW_2
	var_60_object = var_63_object; // 0x184f Mov
	var_70_string = "b9q03KapellaGotoSpi4ka"; // 0x1851 PushS
	var_71_string = "pt_map_spi4ka"; // 0x1852 PushS
	var_72_int = 0; // 0x1853 PushI
	var_73_int = 530307; // 0x1854 PushI
	var_74_float = 0; // 0x1855 PushV
	func_6033(var_74_float); // 0x1856 NEW_2
	AddMark(var_70_string, var_71_string, var_72_int, var_73_int, var_74_float); // 0x1858 ObjFunc
	func_7022(); // 0x185b NEW_2
	func_7048(); // 0x185e NEW_2
	var_108_bool = 0; var_109_string = ""; var_110_string = ""; // 0x1860 PushV
	var_109_string = "quest_b9_03"; // 0x1861 MovS
	var_110_string = "init_house_spi4ka"; // 0x1862 MovS
	func_6021(var_108_bool, var_109_string, var_110_string); // 0x1863 NEW_2
	var_114_bool = 0; var_115_string = ""; var_116_string = ""; // 0x1865 PushV
	var_115_string = "quest_b9_03"; // 0x1866 MovS
	var_116_string = "place_follower"; // 0x1867 MovS
	func_6021(var_114_bool, var_115_string, var_116_string); // 0x1868 NEW_2
	var_117_bool = 0; var_118_string = ""; var_119_string = ""; // 0x186a PushV
	var_118_string = "quest_b9_03"; // 0x186b MovS
	var_119_string = "init_bonefires"; // 0x186c MovS
	func_6021(var_117_bool, var_118_string, var_119_string); // 0x186d NEW_2
	return 2; // 0x186f Return
}


func_7243(var_69_object, var_302_object)
{
	var_70_bool = GlobalVars[1]; // 0x1c4c PushGE
	var_71_bool = var_70_bool == 0; // 0x1c4d Not
	if(var_71_bool == 0) goto Label_7256; // 0x1c4e JumpB
	var_72_int = 0; var_73_object = Obj(); // 0x1c4f PushV
	var_73_object = var_69_object; // 0x1c50 Mov
	TaskCall(12); // 0x1c51 TaskCall
	func_3614(var_74_object, var_72_int, var_73_object); // 0x1c52 NEW_2
	TaskReturn(); // 0x1c53 TaskReturn
	var_295_bool = GlobalVars[1]; // 0x1c55 PushGE
	var_295_bool = 1; // 0x1c56 MovB
	GlobalVars[1] = var_295_bool; // 0x1c57 PopGE
	
Label_7256:
	var_296_bool = 0; var_297_int = 0; // 0x1c58 PushV
	var_297_int = 1; // 0x1c59 MovI
	func_6055(var_296_bool, var_297_int); // 0x1c5a NEW_2
	if(var_296_bool == 0) goto Label_7275; // 0x1c5c JumpB
	var_299_int = 2000; // 0x1c5d PushI
	var_300_int = 0; var_301_object = Obj(); // 0x1c5e PushV
	var_301_object = var_69_object; // 0x1c5f Mov
	TaskCall(10); // 0x1c60 TaskCall
	func_2572(var_302_object, var_300_int, var_301_object); // 0x1c61 NEW_2
	TaskReturn(); // 0x1c62 TaskReturn
	var_405_bool = var_299_int == var_302_object; // 0x1c64 Eq
	if(var_405_bool == 0) goto Label_7274; // 0x1c65 JumpB
	var_406_string = "people.xml"; // 0x1c66 PushS
	var_407_bool = 1; // 0x1c67 PushB
	ShowWindow(var_406_string, var_407_bool); // 0x1c68 Func
	
Label_7274:
	return 0; // 0x1c6a Return
	
Label_7275:
	var_408_bool = 0; var_409_int = 0; // 0x1c6b PushV
	var_409_int = 2; // 0x1c6c MovI
	func_6055(var_408_bool, var_409_int); // 0x1c6d NEW_2
	if(var_408_bool == 0) goto Label_7287; // 0x1c6f JumpB
	var_410_int = 0; var_411_object = Obj(); // 0x1c70 PushV
	var_411_object = var_69_object; // 0x1c71 Mov
	TaskCall(6); // 0x1c72 TaskCall
	func_1590(var_412_object, var_410_int, var_411_object); // 0x1c73 NEW_2
	TaskReturn(); // 0x1c74 TaskReturn
	return 0; // 0x1c76 Return
	
Label_7287:
	var_463_bool = 0; var_464_int = 0; // 0x1c77 PushV
	var_464_int = 3; // 0x1c78 MovI
	func_6055(var_463_bool, var_464_int); // 0x1c79 NEW_2
	if(var_463_bool == 0) goto Label_7299; // 0x1c7b JumpB
	var_465_int = 0; var_466_object = Obj(); // 0x1c7c PushV
	var_466_object = var_69_object; // 0x1c7d Mov
	TaskCall(8); // 0x1c7e TaskCall
	func_1922(var_467_object, var_465_int, var_466_object); // 0x1c7f NEW_2
	TaskReturn(); // 0x1c80 TaskReturn
	return 0; // 0x1c82 Return
	
Label_7299:
	var_569_bool = 0; var_570_int = 0; // 0x1c83 PushV
	var_570_int = 8; // 0x1c84 MovI
	func_6055(var_569_bool, var_570_int); // 0x1c85 NEW_2
	if(var_569_bool == 0) goto Label_7311; // 0x1c87 JumpB
	var_571_int = 0; var_572_object = Obj(); // 0x1c88 PushV
	var_572_object = var_69_object; // 0x1c89 Mov
	TaskCall(14); // 0x1c8a TaskCall
	func_3886(var_573_object, var_571_int, var_572_object); // 0x1c8b NEW_2
	TaskReturn(); // 0x1c8c TaskReturn
	return 0; // 0x1c8e Return
	
Label_7311:
	var_655_bool = 0; var_656_int = 0; // 0x1c8f PushV
	var_656_int = 9; // 0x1c90 MovI
	func_6055(var_655_bool, var_656_int); // 0x1c91 NEW_2
	if(var_655_bool == 0) goto Label_7323; // 0x1c93 JumpB
	var_657_int = 0; var_658_object = Obj(); // 0x1c94 PushV
	var_658_object = var_69_object; // 0x1c95 Mov
	TaskCall(0); // 0x1c96 TaskCall
	func_0(var_659_object, var_657_int, var_658_object); // 0x1c97 NEW_2
	TaskReturn(); // 0x1c98 TaskReturn
	return 0; // 0x1c9a Return
	
Label_7323:
	var_794_bool = 0; var_795_int = 0; // 0x1c9b PushV
	var_795_int = 10; // 0x1c9c MovI
	func_6055(var_794_bool, var_795_int); // 0x1c9d NEW_2
	if(var_794_bool == 0) goto Label_7335; // 0x1c9f JumpB
	var_796_int = 0; var_797_object = Obj(); // 0x1ca0 PushV
	var_797_object = var_69_object; // 0x1ca1 Mov
	TaskCall(16); // 0x1ca2 TaskCall
	func_4396(var_798_object, var_796_int, var_797_object); // 0x1ca3 NEW_2
	TaskReturn(); // 0x1ca4 TaskReturn
	return 0; // 0x1ca6 Return
	
Label_7335:
	var_913_bool = 0; var_914_int = 0; // 0x1ca7 PushV
	var_914_int = 11; // 0x1ca8 MovI
	func_6055(var_913_bool, var_914_int); // 0x1ca9 NEW_2
	if(var_913_bool == 0) goto Label_7347; // 0x1cab JumpB
	var_915_int = 0; var_916_object = Obj(); // 0x1cac PushV
	var_916_object = var_69_object; // 0x1cad Mov
	TaskCall(2); // 0x1cae TaskCall
	func_681(var_917_object, var_915_int, var_916_object); // 0x1caf NEW_2
	TaskReturn(); // 0x1cb0 TaskReturn
	return 0; // 0x1cb2 Return
	
Label_7347:
	var_1004_bool = 0; var_1005_int = 0; // 0x1cb3 PushV
	var_1005_int = 12; // 0x1cb4 MovI
	func_6055(var_1004_bool, var_1005_int); // 0x1cb5 NEW_2
	if(var_1004_bool == 0) goto Label_7359; // 0x1cb7 JumpB
	var_1006_int = 0; var_1007_object = Obj(); // 0x1cb8 PushV
	var_1007_object = var_69_object; // 0x1cb9 Mov
	TaskCall(4); // 0x1cba TaskCall
	func_1236(var_1008_object, var_1006_int, var_1007_object); // 0x1cbb NEW_2
	TaskReturn(); // 0x1cbc TaskReturn
	return 0; // 0x1cbe Return
	
Label_7359:
	var_1068_int = 0; var_1069_object = Obj(); // 0x1cbf PushV
	var_1069_object = var_69_object; // 0x1cc0 Mov
	TaskCall(18); // 0x1cc1 TaskCall
	func_5149(var_1070_object, var_1068_int, var_1069_object); // 0x1cc2 NEW_2
	TaskReturn(); // 0x1cc3 TaskReturn
	return 0; // 0x1cc5 Return
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_681_object, var_682_object)
{
	var_0_object = var_682_object; // 0x52 TMov
	var_1_object = var_681_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_687_int = 1; // 0x55 PushI
	if(var_687_int == 0) goto Label_226; // 0x56 JumpB
	var_688_bool = 0; // 0x57 PushV
	var_688_bool = 0; // 0x58 MovB
	var_689_bool = 0; // 0x59 PushV
	var_689_bool = 0; // 0x5a MovB
	var_690_bool = 0; var_691_object = Obj(); // 0x5b PushV
	var_691_object = var_1_object; // 0x5c MovT
	func_6632(var_691_object); // 0x5d NEW_2
	var_696_bool = var_690_bool == 0; // 0x5f Not
	if(var_696_bool == 0) goto Label_104; // 0x60 JumpB
	var_697_bool = 0; var_698_object = Obj(); // 0x61 PushV
	var_698_object = var_1_object; // 0x62 MovT
	func_6668(var_698_object); // 0x63 NEW_2
	var_703_bool = var_697_bool == 0; // 0x65 Not
	if(var_703_bool == 0) goto Label_104; // 0x66 JumpB
	var_689_bool = 1; // 0x67 MovB
	
Label_104:
	if(var_689_bool == 0) goto Label_111; // 0x68 JumpB
	var_704_bool = 0; var_705_object = Obj(); // 0x69 PushV
	var_705_object = var_1_object; // 0x6a MovT
	func_6704(var_704_bool, var_705_object); // 0x6b NEW_2
	if(var_704_bool == 0) goto Label_111; // 0x6d JumpB
	var_688_bool = 1; // 0x6e MovB
	
Label_111:
	if(var_688_bool == 0) goto Label_132; // 0x6f JumpB
	var_715_string = ""; // 0x70 PushV
	var_715_string = "Neutral"; // 0x71 MovS
	func_256(var_682_object, var_715_string); // 0x72 NEW_2
	var_723_int = 530291; // 0x74 PushI
	SetMessage(var_723_int); // 0x75 TObjFunc
	ClearReplies(); // 0x77 TObjFunc
	var_724_int = 531185; // 0x79 PushI
	var_725_int = -1; // 0x7a PushI
	var_726_int = 32490; // 0x7b PushI
	AddReply(var_724_int, var_725_int, var_726_int); // 0x7c TObjFunc
	var_727_int = 530292; // 0x7e PushI
	var_728_int = -1; // 0x7f PushI
	var_729_int = 31680; // 0x80 PushI
	AddReply(var_727_int, var_728_int, var_729_int); // 0x81 TObjFunc
	goto Label_226; // 0x83 Jump
	
Label_226:
	var_730_bool = 0; // 0xe2 PushV
	func_6093(var_730_bool); // 0xe3 NEW_2
	if(var_730_bool == 0) goto Label_241; // 0xe5 JumpB
	
Label_230:
	lshWaitForAnimEnd(); // 0xe6 Func
	var_731_string = var_3_string; // 0xe8 PushT
	if(var_731_string == 0) goto Label_235; // 0xe9 JumpB
	goto Label_240; // 0xea Jump
	
Label_240:
	goto Label_255; // 0xf0 Jump
	
Label_255:
	return 0; // 0xff Return
	
Label_235:
	var_732_string = ""; // 0xeb PushV
	var_732_string = var_2_object; // 0xec MovT
	func_5873(var_732_string); // 0xed NEW_2
	goto Label_230; // 0xef Jump
	
Label_241:
	var_733_string = "all"; // 0xf1 PushS
	var_734_string = "idle"; // 0xf2 PushS
	PlayAnimation(var_733_string, var_734_string); // 0xf3 Func
	
Label_245:
	WaitForAnimEnd(); // 0xf5 Func
	var_735_string = var_3_string; // 0xf7 PushT
	if(var_735_string == 0) goto Label_250; // 0xf8 JumpB
	goto Label_255; // 0xf9 Jump
	
Label_250:
	var_736_string = "all"; // 0xfa PushS
	var_737_string = "idle"; // 0xfb PushS
	PlayAnimation(var_736_string, var_737_string); // 0xfc Func
	goto Label_245; // 0xfe Jump
	
Label_132:
	var_738_bool = 0; // 0x84 PushV
	var_738_bool = 0; // 0x85 MovB
	var_739_bool = 0; var_740_object = Obj(); // 0x86 PushV
	var_740_object = var_1_object; // 0x87 MovT
	func_6644(var_740_object); // 0x88 NEW_2
	if(var_739_bool == 0) goto Label_145; // 0x8a JumpB
	var_745_bool = 0; var_746_object = Obj(); // 0x8b PushV
	var_746_object = var_1_object; // 0x8c MovT
	func_6704(var_745_bool, var_746_object); // 0x8d NEW_2
	if(var_745_bool == 0) goto Label_145; // 0x8f JumpB
	var_738_bool = 1; // 0x90 MovB
	
Label_145:
	if(var_738_bool == 0) goto Label_171; // 0x91 JumpB
	var_747_object = Obj(); var_748_object = Obj(); // 0x92 PushV
	var_747_object = var_1_object; // 0x93 MovT
	var_748_object = var_0_object; // 0x94 MovT
	func_6210(); // 0x95 NEW_2
	var_751_string = ""; // 0x97 PushV
	var_751_string = "Impatience"; // 0x98 MovS
	func_256(var_682_object, var_751_string); // 0x99 NEW_2
	var_752_int = 530293; // 0x9b PushI
	SetMessage(var_752_int); // 0x9c TObjFunc
	ClearReplies(); // 0x9e TObjFunc
	var_753_int = 531188; // 0xa0 PushI
	var_754_int = 32494; // 0xa1 PushI
	var_755_int = 32493; // 0xa2 PushI
	AddReply(var_753_int, var_754_int, var_755_int); // 0xa3 TObjFunc
	var_756_int = 531193; // 0xa5 PushI
	var_757_int = 32496; // 0xa6 PushI
	var_758_int = 32498; // 0xa7 PushI
	AddReply(var_756_int, var_757_int, var_758_int); // 0xa8 TObjFunc
	goto Label_226; // 0xaa Jump
	
Label_171:
	var_759_string = ""; // 0xab PushV
	var_759_string = "Neutral"; // 0xac MovS
	func_256(var_682_object, var_759_string); // 0xad NEW_2
	var_760_int = 530302; // 0xaf PushI
	SetMessage(var_760_int); // 0xb0 TObjFunc
	ClearReplies(); // 0xb2 TObjFunc
	var_761_bool = 0; // 0xb4 PushV
	var_761_bool = 0; // 0xb5 MovB
	var_762_bool = 0; var_763_object = Obj(); // 0xb6 PushV
	var_763_object = var_1_object; // 0xb7 MovT
	func_6656(var_763_object); // 0xb8 NEW_2
	if(var_762_bool == 0) goto Label_193; // 0xba JumpB
	var_768_bool = 0; var_769_object = Obj(); // 0xbb PushV
	var_769_object = var_1_object; // 0xbc MovT
	func_6704(var_768_bool, var_769_object); // 0xbd NEW_2
	if(var_768_bool == 0) goto Label_193; // 0xbf JumpB
	var_761_bool = 1; // 0xc0 MovB
	
Label_193:
	if(var_761_bool == 0) goto Label_199; // 0xc1 JumpB
	var_770_int = 530303; // 0xc2 PushI
	var_771_int = 31692; // 0xc3 PushI
	var_772_int = 31691; // 0xc4 PushI
	AddReply(var_770_int, var_771_int, var_772_int); // 0xc5 TObjFunc
	
Label_199:
	var_773_bool = 0; // 0xc7 PushV
	var_773_bool = 0; // 0xc8 MovB
	var_774_bool = 0; var_775_object = Obj(); // 0xc9 PushV
	var_775_object = var_1_object; // 0xca MovT
	func_6680(var_775_object); // 0xcb NEW_2
	if(var_774_bool == 0) goto Label_212; // 0xcd JumpB
	var_780_bool = 0; var_781_object = Obj(); // 0xce PushV
	var_781_object = var_1_object; // 0xcf MovT
	func_6692(var_781_object); // 0xd0 NEW_2
	if(var_780_bool == 0) goto Label_212; // 0xd2 JumpB
	var_773_bool = 1; // 0xd3 MovB
	
Label_212:
	if(var_773_bool == 0) goto Label_218; // 0xd4 JumpB
	var_786_int = 530333; // 0xd5 PushI
	var_787_int = 31721; // 0xd6 PushI
	var_788_int = 31720; // 0xd7 PushI
	AddReply(var_786_int, var_787_int, var_788_int); // 0xd8 TObjFunc
	
Label_218:
	var_789_int = 530306; // 0xda PushI
	var_790_int = -1; // 0xdb PushI
	var_791_int = 31694; // 0xdc PushI
	AddReply(var_789_int, var_790_int, var_791_int); // 0xdd TObjFunc
	goto Label_226; // 0xdf Jump
}


func_6738(var_981_bool)
{
	var_983_int = 0; var_984_string = ""; // 0x1a53 PushV
	var_984_string = "b11q02"; // 0x1a54 MovS
	func_5942(var_983_int, var_984_string); // 0x1a55 NEW_2
	var_985_int = 0; // 0x1a57 PushI
	var_986_bool = var_983_int == var_985_int; // 0x1a58 Eq
	if(var_986_bool == 0) goto Label_6748; // 0x1a59 JumpB
	var_981_bool = 1; // 0x1a5a MovB
	return 0; // 0x1a5b Return
	
Label_6748:
	var_981_bool = 0; // 0x1a5c MovB
	return 0; // 0x1a5d Return
}


func_2130(var_2_object, var_500_string)
{
	var_501_bool = 0; // 0x853 PushV
	func_6093(var_501_bool); // 0x854 NEW_2
	var_502_bool = var_501_bool == 0; // 0x856 Not
	if(var_502_bool == 0) goto Label_2137; // 0x857 JumpB
	return 0; // 0x858 Return
	
Label_2137:
	var_503_bool = var_500_string == var_2_object; // 0x859 Eq
	if(var_503_bool == 0) goto Label_2140; // 0x85a JumpB
	return 0; // 0x85b Return
	
Label_2140:
	var_504_string = ""; var_505_bool = 0; // 0x85c PushV
	var_504_string = var_500_string; // 0x85d Mov
	var_506_string = ""; // 0x85e PushS
	var_507_bool = var_500_string == var_506_string; // 0x85f Eq
	if(var_507_bool == 0) goto Label_2147; // 0x860 JumpB
	var_505_bool = 0; // 0x861 MovB
	goto Label_2148; // 0x862 Jump
	
Label_2148:
	func_5889(var_504_string, var_505_bool); // 0x864 NEW_2
	var_2_object = var_500_string; // 0x866 TMov
	return 0; // 0x867 Return
	
Label_2147:
	var_505_bool = 1; // 0x863 MovB
}


func_5718()
{
	var_289_bool = 0; var_290_bool = 0; // 0x1656 PushV
	CameraSwitchToNormal(); // 0x1657 Func
	var_291_bool = 0; // 0x1659 PushV
	func_6093(var_291_bool); // 0x165a NEW_2
	if(var_291_bool == 0) goto Label_5726; // 0x165c JumpB
	goto Label_5734; // 0x165d Jump
	
Label_5734:
	return 2; // 0x1666 Return
	
Label_5726:
	var_292_string = "head"; // 0x165e PushS
	HasAnimationTrack(var_290_bool, var_292_string); // 0x165f Func
	var_293_bool = var_290_bool; // 0x1661 Push
	if(var_293_bool == 0) goto Label_5734; // 0x1662 JumpB
	var_294_string = "head"; // 0x1663 PushS
	UnlookAsync(var_294_string); // 0x1664 Func
}


func_2653(var_0_object, var_1_object, var_2_object, var_3_string, var_324_object, var_325_object)
{
	var_0_object = var_325_object; // 0xa5e TMov
	var_1_object = var_324_object; // 0xa5f TMov
	var_3_string = 0; // 0xa60 TMovB
	var_330_int = 1; // 0xa61 PushI
	if(var_330_int == 0) goto Label_2751; // 0xa62 JumpB
	var_331_bool = 0; var_332_object = Obj(); // 0xa63 PushV
	var_332_object = var_1_object; // 0xa64 MovT
	func_6846(var_332_object); // 0xa65 NEW_2
	if(var_331_bool == 0) goto Label_2689; // 0xa67 JumpB
	var_339_string = ""; // 0xa68 PushV
	var_339_string = "Sympathy"; // 0xa69 MovS
	func_2781(var_325_object, var_339_string); // 0xa6a NEW_2
	var_347_int = 519812; // 0xa6c PushI
	SetMessage(var_347_int); // 0xa6d TObjFunc
	ClearReplies(); // 0xa6f TObjFunc
	var_348_int = 519813; // 0xa71 PushI
	var_349_int = 20974; // 0xa72 PushI
	var_350_int = 20973; // 0xa73 PushI
	AddReply(var_348_int, var_349_int, var_350_int); // 0xa74 TObjFunc
	var_351_int = 527076; // 0xa76 PushI
	var_352_int = 28374; // 0xa77 PushI
	var_353_int = 28373; // 0xa78 PushI
	AddReply(var_351_int, var_352_int, var_353_int); // 0xa79 TObjFunc
	var_354_int = 519816; // 0xa7b PushI
	var_355_int = -1; // 0xa7c PushI
	var_356_int = 20976; // 0xa7d PushI
	AddReply(var_354_int, var_355_int, var_356_int); // 0xa7e TObjFunc
	goto Label_2751; // 0xa80 Jump
	
Label_2751:
	var_357_bool = 0; // 0xabf PushV
	func_6093(var_357_bool); // 0xac0 NEW_2
	if(var_357_bool == 0) goto Label_2766; // 0xac2 JumpB
	
Label_2755:
	lshWaitForAnimEnd(); // 0xac3 Func
	var_358_string = var_3_string; // 0xac5 PushT
	if(var_358_string == 0) goto Label_2760; // 0xac6 JumpB
	goto Label_2765; // 0xac7 Jump
	
Label_2765:
	goto Label_2780; // 0xacd Jump
	
Label_2780:
	return 0; // 0xadc Return
	
Label_2760:
	var_359_string = ""; // 0xac8 PushV
	var_359_string = var_2_object; // 0xac9 MovT
	func_5873(var_359_string); // 0xaca NEW_2
	goto Label_2755; // 0xacc Jump
	
Label_2766:
	var_360_string = "all"; // 0xace PushS
	var_361_string = "idle"; // 0xacf PushS
	PlayAnimation(var_360_string, var_361_string); // 0xad0 Func
	
Label_2770:
	WaitForAnimEnd(); // 0xad2 Func
	var_362_string = var_3_string; // 0xad4 PushT
	if(var_362_string == 0) goto Label_2775; // 0xad5 JumpB
	goto Label_2780; // 0xad6 Jump
	
Label_2775:
	var_363_string = "all"; // 0xad7 PushS
	var_364_string = "idle"; // 0xad8 PushS
	PlayAnimation(var_363_string, var_364_string); // 0xad9 Func
	goto Label_2770; // 0xadb Jump
	
Label_2689:
	var_365_bool = 0; var_366_object = Obj(); // 0xa81 PushV
	var_366_object = var_1_object; // 0xa82 MovT
	func_6858(var_366_object); // 0xa83 NEW_2
	if(var_365_bool == 0) goto Label_2714; // 0xa85 JumpB
	var_371_object = Obj(); var_372_object = Obj(); // 0xa86 PushV
	var_371_object = var_1_object; // 0xa87 MovT
	var_372_object = var_0_object; // 0xa88 MovT
	func_6111(); // 0xa89 NEW_2
	var_375_string = ""; // 0xa8b PushV
	var_375_string = "Neutral"; // 0xa8c MovS
	func_2781(var_325_object, var_375_string); // 0xa8d NEW_2
	var_376_int = 519851; // 0xa8f PushI
	SetMessage(var_376_int); // 0xa90 TObjFunc
	ClearReplies(); // 0xa92 TObjFunc
	var_377_int = 527084; // 0xa94 PushI
	var_378_int = 28383; // 0xa95 PushI
	var_379_int = 28382; // 0xa96 PushI
	AddReply(var_377_int, var_378_int, var_379_int); // 0xa97 TObjFunc
	goto Label_2751; // 0xa99 Jump
	
Label_2714:
	var_380_string = ""; // 0xa9a PushV
	var_380_string = "Neutral"; // 0xa9b MovS
	func_2781(var_325_object, var_380_string); // 0xa9c NEW_2
	var_381_int = 519817; // 0xa9e PushI
	SetMessage(var_381_int); // 0xa9f TObjFunc
	ClearReplies(); // 0xaa1 TObjFunc
	var_382_bool = 0; var_383_object = Obj(); // 0xaa3 PushV
	var_383_object = var_1_object; // 0xaa4 MovT
	func_6870(var_383_object); // 0xaa5 NEW_2
	if(var_382_bool == 0) goto Label_2733; // 0xaa7 JumpB
	var_388_int = 519830; // 0xaa8 PushI
	var_389_int = 20991; // 0xaa9 PushI
	var_390_int = 20990; // 0xaaa PushI
	AddReply(var_388_int, var_389_int, var_390_int); // 0xaab TObjFunc
	
Label_2733:
	var_391_bool = 0; var_392_object = Obj(); // 0xaad PushV
	var_392_object = var_1_object; // 0xaae MovT
	func_6882(var_392_object); // 0xaaf NEW_2
	if(var_391_bool == 0) goto Label_2743; // 0xab1 JumpB
	var_397_int = 520449; // 0xab2 PushI
	var_398_int = 21663; // 0xab3 PushI
	var_399_int = 21662; // 0xab4 PushI
	AddReply(var_397_int, var_398_int, var_399_int); // 0xab5 TObjFunc
	
Label_2743:
	var_400_int = 519850; // 0xab7 PushI
	var_401_int = -1; // 0xab8 PushI
	var_402_int = 21011; // 0xab9 PushI
	AddReply(var_400_int, var_401_int, var_402_int); // 0xaba TObjFunc
	goto Label_2751; // 0xabc Jump
}


func_6750(var_990_bool)
{
	var_992_int = 0; var_993_string = ""; // 0x1a5f PushV
	var_993_string = "b11q02"; // 0x1a60 MovS
	func_5942(var_992_int, var_993_string); // 0x1a61 NEW_2
	var_994_int = 4; // 0x1a63 PushI
	var_995_bool = var_992_int == var_994_int; // 0x1a64 Eq
	if(var_995_bool == 0) goto Label_6760; // 0x1a65 JumpB
	var_990_bool = 1; // 0x1a66 MovB
	return 0; // 0x1a67 Return
	
Label_6760:
	var_990_bool = 0; // 0x1a68 MovB
	return 0; // 0x1a69 Return
}


func_5735(var_143_bool, var_144_object)
{
	var_148_int = 0; var_149_int = 0; var_150_int = 0; var_151_int = 0; // 0x1667 PushV
	var_152_string = "voice_common"; // 0x1668 PushS
	GetVariable(var_152_string, var_150_int); // 0x1669 Func
	var_153_int = var_150_int; // 0x166b Push
	if(var_153_int == 0) goto Label_5773; // 0x166c JumpB
	var_154_bool = 0; var_155_object = Obj(); // 0x166d PushV
	var_155_object = var_144_object; // 0x166e Mov
	func_5793(var_155_object); // 0x166f NEW_2
	var_184_bool = var_154_bool == 0; // 0x1671 Not
	if(var_184_bool == 0) goto Label_5755; // 0x1672 JumpB
	var_185_bool = 0; var_186_object = Obj(); // 0x1673 PushV
	var_186_object = var_144_object; // 0x1674 Mov
	func_5830(var_186_object); // 0x1675 NEW_2
	var_220_bool = var_185_bool == 0; // 0x1677 Not
	if(var_220_bool == 0) goto Label_5755; // 0x1678 JumpB
	var_143_bool = 0; // 0x1679 MovB
	return 4; // 0x167a Return
	
Label_5755:
	var_221_int = 2; // 0x167b PushI
	irand(var_151_int, var_221_int); // 0x167c Func
	var_222_int = var_151_int; // 0x167e Push
	if(var_222_int == 0) goto Label_5768; // 0x167f JumpB
	var_223_string = "voice_common"; // 0x1680 PushS
	var_224_int = 1; // 0x1681 PushI
	var_225_int = var_150_int + var_224_int; // 0x1682 Add
	var_226_int = 3; // 0x1683 PushI
	var_227_int = var_225_int / var_226_int; // 0x1684 Mod
	SetVariable(var_223_string, var_227_int); // 0x1685 Func
	goto Label_5772; // 0x1687 Jump
	
Label_5772:
	goto Label_5791; // 0x168c Jump
	
Label_5791:
	var_143_bool = 1; // 0x169f MovB
	return 4; // 0x16a0 Return
	
Label_5768:
	var_228_string = "voice_common"; // 0x1688 PushS
	var_229_int = 0; // 0x1689 PushI
	SetVariable(var_228_string, var_229_int); // 0x168a Func
	
Label_5773:
	var_230_bool = 0; var_231_object = Obj(); // 0x168d PushV
	var_231_object = var_144_object; // 0x168e Mov
	func_5830(var_231_object); // 0x168f NEW_2
	var_232_bool = var_230_bool == 0; // 0x1691 Not
	if(var_232_bool == 0) goto Label_5787; // 0x1692 JumpB
	var_233_bool = 0; var_234_object = Obj(); // 0x1693 PushV
	var_234_object = var_144_object; // 0x1694 Mov
	func_5793(var_234_object); // 0x1695 NEW_2
	var_235_bool = var_233_bool == 0; // 0x1697 Not
	if(var_235_bool == 0) goto Label_5787; // 0x1698 JumpB
	var_143_bool = 0; // 0x1699 MovB
	return 4; // 0x169a Return
	
Label_5787:
	var_236_string = "voice_common"; // 0x169b PushS
	var_237_int = 1; // 0x169c PushI
	SetVariable(var_236_string, var_237_int); // 0x169d Func
}


func_6762(var_827_bool)
{
	var_829_int = 0; var_830_string = ""; // 0x1a6b PushV
	var_830_string = "oob10Kapella2"; // 0x1a6c MovS
	func_5942(var_829_int, var_830_string); // 0x1a6d NEW_2
	var_831_int = 0; // 0x1a6f PushI
	var_832_bool = var_829_int == var_831_int; // 0x1a70 Eq
	if(var_832_bool == 0) goto Label_6772; // 0x1a71 JumpB
	var_827_bool = 1; // 0x1a72 MovB
	return 0; // 0x1a73 Return
	
Label_6772:
	var_827_bool = 0; // 0x1a74 MovB
	return 0; // 0x1a75 Return
}


func_5230(var_0_object, var_1_object, var_2_object, var_3_string, var_1092_object, var_1093_object)
{
	var_0_object = var_1093_object; // 0x146f TMov
	var_1_object = var_1092_object; // 0x1470 TMov
	var_3_string = 0; // 0x1471 TMovB
	var_1098_int = 1; // 0x1472 PushI
	if(var_1098_int == 0) goto Label_5258; // 0x1473 JumpB
	var_1099_string = ""; // 0x1474 PushV
	var_1099_string = "Neutral"; // 0x1475 MovS
	func_5288(var_1093_object, var_1099_string); // 0x1476 NEW_2
	var_1107_int = 540551; // 0x1478 PushI
	SetMessage(var_1107_int); // 0x1479 TObjFunc
	ClearReplies(); // 0x147b TObjFunc
	var_1108_int = 540552; // 0x147d PushI
	var_1109_int = -1; // 0x147e PushI
	var_1110_int = 42561; // 0x147f PushI
	AddReply(var_1108_int, var_1109_int, var_1110_int); // 0x1480 TObjFunc
	var_1111_int = 540795; // 0x1482 PushI
	var_1112_int = -1; // 0x1483 PushI
	var_1113_int = 42844; // 0x1484 PushI
	AddReply(var_1111_int, var_1112_int, var_1113_int); // 0x1485 TObjFunc
	goto Label_5258; // 0x1487 Jump
	
Label_5258:
	var_1114_bool = 0; // 0x148a PushV
	func_6093(var_1114_bool); // 0x148b NEW_2
	if(var_1114_bool == 0) goto Label_5273; // 0x148d JumpB
	
Label_5262:
	lshWaitForAnimEnd(); // 0x148e Func
	var_1115_string = var_3_string; // 0x1490 PushT
	if(var_1115_string == 0) goto Label_5267; // 0x1491 JumpB
	goto Label_5272; // 0x1492 Jump
	
Label_5272:
	goto Label_5287; // 0x1498 Jump
	
Label_5287:
	return 0; // 0x14a7 Return
	
Label_5267:
	var_1116_string = ""; // 0x1493 PushV
	var_1116_string = var_2_object; // 0x1494 MovT
	func_5873(var_1116_string); // 0x1495 NEW_2
	goto Label_5262; // 0x1497 Jump
	
Label_5273:
	var_1117_string = "all"; // 0x1499 PushS
	var_1118_string = "idle"; // 0x149a PushS
	PlayAnimation(var_1117_string, var_1118_string); // 0x149b Func
	
Label_5277:
	WaitForAnimEnd(); // 0x149d Func
	var_1119_string = var_3_string; // 0x149f PushT
	if(var_1119_string == 0) goto Label_5282; // 0x14a0 JumpB
	goto Label_5287; // 0x14a1 Jump
	
Label_5282:
	var_1120_string = "all"; // 0x14a2 PushS
	var_1121_string = "idle"; // 0x14a3 PushS
	PlayAnimation(var_1120_string, var_1121_string); // 0x14a4 Func
	goto Label_5277; // 0x14a6 Jump
}


func_3695(var_0_object, var_1_object, var_2_object, var_3_string, var_238_object, var_239_object)
{
	var_0_object = var_239_object; // 0xe70 TMov
	var_1_object = var_238_object; // 0xe71 TMov
	var_3_string = 0; // 0xe72 TMovB
	var_244_int = 1; // 0xe73 PushI
	if(var_244_int == 0) goto Label_3723; // 0xe74 JumpB
	var_245_string = ""; // 0xe75 PushV
	var_245_string = "Neutral"; // 0xe76 MovS
	func_3753(var_239_object, var_245_string); // 0xe77 NEW_2
	var_262_int = 527023; // 0xe79 PushI
	SetMessage(var_262_int); // 0xe7a TObjFunc
	ClearReplies(); // 0xe7c TObjFunc
	var_263_int = 527024; // 0xe7e PushI
	var_264_int = 21951; // 0xe7f PushI
	var_265_int = 28310; // 0xe80 PushI
	AddReply(var_263_int, var_264_int, var_265_int); // 0xe81 TObjFunc
	var_266_int = 527025; // 0xe83 PushI
	var_267_int = 21951; // 0xe84 PushI
	var_268_int = 28311; // 0xe85 PushI
	AddReply(var_266_int, var_267_int, var_268_int); // 0xe86 TObjFunc
	goto Label_3723; // 0xe88 Jump
	
Label_3723:
	var_269_bool = 0; // 0xe8b PushV
	func_6093(var_269_bool); // 0xe8c NEW_2
	if(var_269_bool == 0) goto Label_3738; // 0xe8e JumpB
	
Label_3727:
	lshWaitForAnimEnd(); // 0xe8f Func
	var_270_string = var_3_string; // 0xe91 PushT
	if(var_270_string == 0) goto Label_3732; // 0xe92 JumpB
	goto Label_3737; // 0xe93 Jump
	
Label_3737:
	goto Label_3752; // 0xe99 Jump
	
Label_3752:
	return 0; // 0xea8 Return
	
Label_3732:
	var_271_string = ""; // 0xe94 PushV
	var_271_string = var_2_object; // 0xe95 MovT
	func_5873(var_271_string); // 0xe96 NEW_2
	goto Label_3727; // 0xe98 Jump
	
Label_3738:
	var_282_string = "all"; // 0xe9a PushS
	var_283_string = "idle"; // 0xe9b PushS
	PlayAnimation(var_282_string, var_283_string); // 0xe9c Func
	
Label_3742:
	WaitForAnimEnd(); // 0xe9e Func
	var_284_string = var_3_string; // 0xea0 PushT
	if(var_284_string == 0) goto Label_3747; // 0xea1 JumpB
	goto Label_3752; // 0xea2 Jump
	
Label_3747:
	var_285_string = "all"; // 0xea3 PushS
	var_286_string = "idle"; // 0xea4 PushS
	PlayAnimation(var_285_string, var_286_string); // 0xea5 Func
	goto Label_3742; // 0xea7 Jump
}


func_6257()
{
	func_7035(); // 0x1873 NEW_2
	var_164_bool = 0; var_165_string = ""; var_166_string = ""; // 0x1875 PushV
	var_165_string = "quest_b9_03"; // 0x1876 MovS
	var_166_string = "completed"; // 0x1877 MovS
	func_6021(var_164_bool, var_165_string, var_166_string); // 0x1878 NEW_2
	return 0; // 0x187a Return
}


func_6774(var_896_bool)
{
	var_898_int = 0; var_899_string = ""; // 0x1a77 PushV
	var_899_string = "b10q03"; // 0x1a78 MovS
	func_5942(var_898_int, var_899_string); // 0x1a79 NEW_2
	var_900_int = 0; // 0x1a7b PushI
	var_901_bool = var_898_int == var_900_int; // 0x1a7c Eq
	if(var_901_bool == 0) goto Label_6784; // 0x1a7d JumpB
	var_896_bool = 1; // 0x1a7e MovB
	return 0; // 0x1a7f Return
	
Label_6784:
	var_896_bool = 0; // 0x1a80 MovB
	return 0; // 0x1a81 Return
}


func_6267()
{
	var_196_string = "playsound"; // 0x187c PushS
	var_197_string = "givemoney"; // 0x187d PushS
	TriggerWorld(var_196_string, var_197_string); // 0x187e Func
	return 0; // 0x1880 Return
}


func_6273()
{
	var_148_string = "playsound"; // 0x1882 PushS
	var_149_string = "giveitem"; // 0x1883 PushS
	TriggerWorld(var_148_string, var_149_string); // 0x1884 Func
	return 0; // 0x1886 Return
}


func_6786(var_1046_bool)
{
	var_1048_int = 0; var_1049_string = ""; // 0x1a83 PushV
	var_1049_string = "oob12Kapella1"; // 0x1a84 MovS
	func_5942(var_1048_int, var_1049_string); // 0x1a85 NEW_2
	var_1050_int = 0; // 0x1a87 PushI
	var_1051_bool = var_1048_int == var_1050_int; // 0x1a88 Eq
	if(var_1051_bool == 0) goto Label_6796; // 0x1a89 JumpB
	var_1046_bool = 1; // 0x1a8a MovB
	return 0; // 0x1a8b Return
	
Label_6796:
	var_1046_bool = 0; // 0x1a8c MovB
	return 0; // 0x1a8d Return
}


func_1671(var_0_object, var_1_object, var_2_object, var_3_string, var_434_object, var_435_object)
{
	var_0_object = var_435_object; // 0x688 TMov
	var_1_object = var_434_object; // 0x689 TMov
	var_3_string = 0; // 0x68a TMovB
	var_440_int = 1; // 0x68b PushI
	if(var_440_int == 0) goto Label_1694; // 0x68c JumpB
	var_441_string = ""; // 0x68d PushV
	var_441_string = "Neutral"; // 0x68e MovS
	func_1724(var_435_object, var_441_string); // 0x68f NEW_2
	var_449_int = 518275; // 0x691 PushI
	SetMessage(var_449_int); // 0x692 TObjFunc
	ClearReplies(); // 0x694 TObjFunc
	var_450_int = 518276; // 0x696 PushI
	var_451_int = -1; // 0x697 PushI
	var_452_int = 19385; // 0x698 PushI
	AddReply(var_450_int, var_451_int, var_452_int); // 0x699 TObjFunc
	goto Label_1694; // 0x69b Jump
	
Label_1694:
	var_453_bool = 0; // 0x69e PushV
	func_6093(var_453_bool); // 0x69f NEW_2
	if(var_453_bool == 0) goto Label_1709; // 0x6a1 JumpB
	
Label_1698:
	lshWaitForAnimEnd(); // 0x6a2 Func
	var_454_string = var_3_string; // 0x6a4 PushT
	if(var_454_string == 0) goto Label_1703; // 0x6a5 JumpB
	goto Label_1708; // 0x6a6 Jump
	
Label_1708:
	goto Label_1723; // 0x6ac Jump
	
Label_1723:
	return 0; // 0x6bb Return
	
Label_1703:
	var_455_string = ""; // 0x6a7 PushV
	var_455_string = var_2_object; // 0x6a8 MovT
	func_5873(var_455_string); // 0x6a9 NEW_2
	goto Label_1698; // 0x6ab Jump
	
Label_1709:
	var_456_string = "all"; // 0x6ad PushS
	var_457_string = "idle"; // 0x6ae PushS
	PlayAnimation(var_456_string, var_457_string); // 0x6af Func
	
Label_1713:
	WaitForAnimEnd(); // 0x6b1 Func
	var_458_string = var_3_string; // 0x6b3 PushT
	if(var_458_string == 0) goto Label_1718; // 0x6b4 JumpB
	goto Label_1723; // 0x6b5 Jump
	
Label_1718:
	var_459_string = "all"; // 0x6b6 PushS
	var_460_string = "idle"; // 0x6b7 PushS
	PlayAnimation(var_459_string, var_460_string); // 0x6b8 Func
	goto Label_1713; // 0x6ba Jump
}


func_6279()
{
	var_140_object = Obj(); var_141_object = Obj(); // 0x1887 PushV
	var_142_string = "b10q04KapellaGotoBlock"; // 0x1888 PushS
	var_143_int = 1; // 0x1889 PushI
	SetVariable(var_142_string, var_143_int); // 0x188a Func
	var_144_object = Obj(); // 0x188c PushV
	func_7102(var_144_object); // 0x188d NEW_2
	var_141_object = var_144_object; // 0x188e Mov
	var_145_string = "b10q04KapellaGotoBlock"; // 0x1890 PushS
	var_146_string = "pt_map_uprava_admin"; // 0x1891 PushS
	var_147_int = 0; // 0x1892 PushI
	var_148_int = 530548; // 0x1893 PushI
	var_149_float = 0; // 0x1894 PushV
	func_6033(var_149_float); // 0x1895 NEW_2
	AddMark(var_145_string, var_146_string, var_147_int, var_148_int, var_149_float); // 0x1897 ObjFunc
	return 2; // 0x1899 Return
}


func_6798(var_522_bool)
{
	var_524_int = 0; var_525_string = ""; // 0x1a8f PushV
	var_525_string = "b3q02"; // 0x1a90 MovS
	func_5942(var_524_int, var_525_string); // 0x1a91 NEW_2
	var_526_int = 0; // 0x1a93 PushI
	var_527_bool = var_524_int == var_526_int; // 0x1a94 Eq
	if(var_527_bool == 0) goto Label_6808; // 0x1a95 JumpB
	var_522_bool = 1; // 0x1a96 MovB
	return 0; // 0x1a97 Return
	
Label_6808:
	var_522_bool = 0; // 0x1a98 MovB
	return 0; // 0x1a99 Return
}


func_6810(var_509_bool)
{
	var_511_int = 0; var_512_string = ""; // 0x1a9b PushV
	var_512_string = "oob3Kapella1"; // 0x1a9c MovS
	func_5942(var_511_int, var_512_string); // 0x1a9d NEW_2
	var_513_int = 0; // 0x1a9f PushI
	var_514_bool = var_511_int == var_513_int; // 0x1aa0 Eq
	if(var_514_bool == 0) goto Label_6820; // 0x1aa1 JumpB
	var_509_bool = 1; // 0x1aa2 MovB
	return 0; // 0x1aa3 Return
	
Label_6820:
	var_509_bool = 0; // 0x1aa4 MovB
	return 0; // 0x1aa5 Return
}


func_6299()
{
	var_152_object = Obj(); var_153_string = ""; var_154_float = 0; // 0x189c PushV
	var_155_object = Obj(); // 0x189d PushV
	func_7102(var_155_object); // 0x189e NEW_2
	var_152_object = var_155_object; // 0x189f Mov
	var_153_string = "pt_map_uprava_admin"; // 0x18a1 MovS
	var_154_float = 2; // 0x18a2 MovI
	func_7119(var_152_object, var_153_string, var_154_float); // 0x18a3 NEW_2
	var_175_object = Obj(); // 0x18a5 PushV
	func_7102(var_175_object); // 0x18a6 NEW_2
	ShowMap(var_175_object); // 0x18a8 ObjFunc
	return 0; // 0x18aa Return
}


func_5793(var_154_bool)
{
	var_156_string = ""; var_157_int = 0; var_158_bool = 0; var_159_int = 0; var_160_string = ""; var_161_string = ""; var_162_int = 0; var_163_bool = 0; var_164_int = 0; var_165_string = ""; // 0x16a1 PushV
	var_161_string = "c"; // 0x16a2 MovS
	var_162_int = 0; // 0x16a3 MovI
	
Label_5796:
	var_166_int = 1; // 0x16a4 PushI
	if(var_166_int == 0) goto Label_5809; // 0x16a5 JumpB
	var_167_int = 1; // 0x16a6 PushI
	var_168_int = var_162_int + var_167_int; // 0x16a7 Add
	var_169_int = var_161_string + var_168_int; // 0x16a8 Add
	HasProperty(var_169_int, var_163_bool); // 0x16a9 ObjFunc
	var_170_bool = var_163_bool == 0; // 0x16ab Not
	if(var_170_bool == 0) goto Label_5806; // 0x16ac JumpB
	goto Label_5809; // 0x16ad Jump
	
Label_5809:
	var_171_bool = var_162_int == 0; // 0x16b1 Not
	if(var_171_bool == 0) goto Label_5813; // 0x16b2 JumpB
	var_154_bool = 0; // 0x16b3 MovB
	return 10; // 0x16b4 Return
	
Label_5813:
	var_164_int = 0; // 0x16b5 MovI
	var_172_int = 1; // 0x16b6 PushI
	var_173_bool = var_162_int > var_172_int; // 0x16b7 GT
	if(var_173_bool == 0) goto Label_5819; // 0x16b8 JumpB
	irand(var_164_int, var_162_int); // 0x16b9 Func
	
Label_5819:
	var_174_int = 1; // 0x16bb PushI
	var_175_int = var_164_int + var_174_int; // 0x16bc Add
	var_176_int = var_161_string + var_175_int; // 0x16bd Add
	GetProperty(var_176_int, var_165_string); // 0x16be ObjFunc
	var_177_bool = 0; var_178_string = ""; // 0x16c0 PushV
	var_178_string = var_165_string; // 0x16c1 Mov
	func_5904(var_177_bool, var_178_string); // 0x16c2 NEW_2
	var_154_bool = var_177_bool; // 0x16c3 Mov
	return 10; // 0x16c5 Return
	
Label_5806:
	var_183_int = 1; // 0x16ae PushI
	var_162_int = var_162_int + var_183_int; // 0x16af Add2
	goto Label_5796; // 0x16b0 Jump
}


func_6822(var_532_bool)
{
	var_534_int = 0; var_535_string = ""; // 0x1aa7 PushV
	var_535_string = "b3q02"; // 0x1aa8 MovS
	func_5942(var_534_int, var_535_string); // 0x1aa9 NEW_2
	var_536_int = 5; // 0x1aab PushI
	var_537_bool = var_534_int == var_536_int; // 0x1aac Eq
	if(var_537_bool == 0) goto Label_6832; // 0x1aad JumpB
	var_532_bool = 1; // 0x1aae MovB
	return 0; // 0x1aaf Return
	
Label_6832:
	var_532_bool = 0; // 0x1ab0 MovB
	return 0; // 0x1ab1 Return
}


func_5288(var_2_object, var_1099_string)
{
	var_1100_bool = 0; // 0x14a9 PushV
	func_6093(var_1100_bool); // 0x14aa NEW_2
	var_1101_bool = var_1100_bool == 0; // 0x14ac Not
	if(var_1101_bool == 0) goto Label_5295; // 0x14ad JumpB
	return 0; // 0x14ae Return
	
Label_5295:
	var_1102_bool = var_1099_string == var_2_object; // 0x14af Eq
	if(var_1102_bool == 0) goto Label_5298; // 0x14b0 JumpB
	return 0; // 0x14b1 Return
	
Label_5298:
	var_1103_string = ""; var_1104_bool = 0; // 0x14b2 PushV
	var_1103_string = var_1099_string; // 0x14b3 Mov
	var_1105_string = ""; // 0x14b4 PushS
	var_1106_bool = var_1099_string == var_1105_string; // 0x14b5 Eq
	if(var_1106_bool == 0) goto Label_5305; // 0x14b6 JumpB
	var_1104_bool = 0; // 0x14b7 MovB
	goto Label_5306; // 0x14b8 Jump
	
Label_5306:
	func_5889(var_1103_string, var_1104_bool); // 0x14ba NEW_2
	var_2_object = var_1099_string; // 0x14bc TMov
	return 0; // 0x14bd Return
	
Label_5305:
	var_1104_bool = 1; // 0x14b9 MovB
}


func_3753(var_2_object, var_245_string)
{
	var_246_bool = 0; // 0xeaa PushV
	func_6093(var_246_bool); // 0xeab NEW_2
	var_247_bool = var_246_bool == 0; // 0xead Not
	if(var_247_bool == 0) goto Label_3760; // 0xeae JumpB
	return 0; // 0xeaf Return
	
Label_3760:
	var_248_bool = var_245_string == var_2_object; // 0xeb0 Eq
	if(var_248_bool == 0) goto Label_3763; // 0xeb1 JumpB
	return 0; // 0xeb2 Return
	
Label_3763:
	var_249_string = ""; var_250_bool = 0; // 0xeb3 PushV
	var_249_string = var_245_string; // 0xeb4 Mov
	var_251_string = ""; // 0xeb5 PushS
	var_252_bool = var_245_string == var_251_string; // 0xeb6 Eq
	if(var_252_bool == 0) goto Label_3770; // 0xeb7 JumpB
	var_250_bool = 0; // 0xeb8 MovB
	goto Label_3771; // 0xeb9 Jump
	
Label_3771:
	func_5889(var_249_string, var_250_bool); // 0xebb NEW_2
	var_2_object = var_245_string; // 0xebd TMov
	return 0; // 0xebe Return
	
Label_3770:
	var_250_bool = 1; // 0xeba MovB
}


func_681(var_0_object, var_915_int, var_916_object)
{
	var_918_object = Obj(); var_919_bool = 0; var_920_int = 0; var_921_bool = 0; var_922_object = Obj(); var_923_bool = 0; var_924_int = 0; var_925_bool = 0; // 0x2a9 PushV
	var_0_object = var_916_object; // 0x2aa TMov
	var_926_bool = 0; var_927_object = Obj(); var_928_float = 0; // 0x2ab PushV
	var_927_object = var_916_object; // 0x2ac Mov
	var_928_float = 70.0; // 0x2ad MovF
	func_5650(var_927_object, var_928_float); // 0x2ae NEW_2
	var_929_bool = var_926_bool == 0; // 0x2b0 Not
	if(var_929_bool == 0) goto Label_692; // 0x2b1 JumpB
	var_915_int = -2; // 0x2b2 MovI
	return 8; // 0x2b3 Return
	
Label_692:
	CreateDialog(var_922_object); // 0x2b4 Func
	var_930_int = 0; // 0x2b6 PushV
	func_6087(var_930_int); // 0x2b7 NEW_2
	SetNPCName(var_930_int); // 0x2b9 ObjFunc
	var_931_int = 0; // 0x2bb PushV
	func_6085(var_931_int); // 0x2bc NEW_2
	SetNPCDescription(var_931_int); // 0x2be ObjFunc
	var_932_string = ""; // 0x2c0 PushV
	func_6089(var_932_string); // 0x2c1 NEW_2
	SetPhoto(var_932_string); // 0x2c3 ObjFunc
	var_933_string = ""; // 0x2c5 PushV
	func_6091(var_933_string); // 0x2c6 NEW_2
	SetPhoto2(var_933_string); // 0x2c8 ObjFunc
	var_934_int = 0; // 0x2ca PushV
	func_7152(var_934_int); // 0x2cb NEW_2
	SetPlayerName(var_934_int); // 0x2cd ObjFunc
	var_924_int = -1; // 0x2cf MovI
	IsOverrideActive(var_923_bool); // 0x2d0 Func
	var_935_bool = var_923_bool; // 0x2d2 Push
	if(var_935_bool == 0) goto Label_726; // 0x2d3 JumpB
	var_915_int = -2; // 0x2d4 MovI
	return 8; // 0x2d5 Return
	
Label_726:
	DoDialog(var_922_object); // 0x2d6 Func
	var_936_bool = 0; var_937_object = Obj(); // 0x2d8 PushV
	var_938_object = Obj(); // 0x2d9 PushV
	func_5926(var_938_object); // 0x2da NEW_2
	var_937_object = var_938_object; // 0x2db Mov
	func_5735(var_936_bool, var_937_object); // 0x2dd NEW_2
	var_939_object = Obj(); var_940_object = Obj(); // 0x2df PushV
	var_939_object = var_916_object; // 0x2e0 Mov
	var_940_object = var_922_object; // 0x2e1 Mov
	TaskCall(3); // 0x2e2 TaskCall
	func_762(var_941_object, var_942_object, var_943_string, var_944_bool, var_939_object, var_940_object); // 0x2e3 NEW_2
	TaskReturn(); // 0x2e4 TaskReturn
	IsDialogEnd(var_925_bool); // 0x2e6 ObjFunc
	
Label_744:
	var_1002_bool = var_925_bool == 0; // 0x2e8 Not
	if(var_1002_bool == 0) goto Label_751; // 0x2e9 JumpB
	sync(); // 0x2ea Func
	IsDialogEnd(var_925_bool); // 0x2ec ObjFunc
	goto Label_744; // 0x2ee Jump
	
Label_751:
	var_1003_object = Obj(); // 0x2ef PushV
	var_1003_object = var_916_object; // 0x2f0 Mov
	func_5718(); // 0x2f1 NEW_2
	StopDialog(var_922_object); // 0x2f3 Func
	GetReturnValue(var_924_int); // 0x2f5 ObjFunc
	var_915_int = var_924_int; // 0x2f7 Mov
	return 8; // 0x2f8 Return
}


func_6315()
{
	var_498_string = "b3KapellaVisit"; // 0x18ac PushS
	var_499_int = 1; // 0x18ad PushI
	SetVariable(var_498_string, var_499_int); // 0x18ae Func
	return 0; // 0x18b0 Return
}


func_6321()
{
	var_214_object = Obj(); var_215_object = Obj(); // 0x18b1 PushV
	var_216_int = 0; var_217_string = ""; // 0x18b2 PushV
	var_217_string = "b1BurahHome"; // 0x18b3 MovS
	func_5942(var_216_int, var_217_string); // 0x18b4 NEW_2
	var_218_int = 0; // 0x18b6 PushI
	var_219_bool = var_216_int == var_218_int; // 0x18b7 Eq
	if(var_219_bool == 0) goto Label_6347; // 0x18b8 JumpB
	var_220_string = "b1BurahHome"; // 0x18b9 PushS
	var_221_int = 1; // 0x18ba PushI
	SetVariable(var_220_string, var_221_int); // 0x18bb Func
	var_222_object = Obj(); // 0x18bd PushV
	func_7102(var_222_object); // 0x18be NEW_2
	var_215_object = var_222_object; // 0x18bf Mov
	var_223_string = "b1BurahFatherHome"; // 0x18c1 PushS
	var_224_string = "pt_b1q05_patrol_house"; // 0x18c2 PushS
	var_225_int = 3; // 0x18c3 PushI
	var_226_int = 530957; // 0x18c4 PushI
	var_227_float = 0; // 0x18c5 PushV
	func_6033(var_227_float); // 0x18c6 NEW_2
	AddMark(var_223_string, var_224_string, var_225_int, var_226_int, var_227_float); // 0x18c8 ObjFunc
	var_215_object = 0; // 0x18ca SetNull
	
Label_6347:
	return 2; // 0x18cb Return
}


func_6834(var_538_bool)
{
	var_540_int = 0; var_541_string = ""; // 0x1ab3 PushV
	var_541_string = "b3q02Dead"; // 0x1ab4 MovS
	func_5942(var_540_int, var_541_string); // 0x1ab5 NEW_2
	var_542_int = 0; // 0x1ab7 PushI
	var_543_bool = var_540_int != var_542_int; // 0x1ab8 Neq
	if(var_543_bool == 0) goto Label_6844; // 0x1ab9 JumpB
	var_538_bool = 1; // 0x1aba MovB
	return 0; // 0x1abb Return
	
Label_6844:
	var_538_bool = 0; // 0x1abc MovB
	return 0; // 0x1abd Return
}


func_1724(var_2_object, var_441_string)
{
	var_442_bool = 0; // 0x6bd PushV
	func_6093(var_442_bool); // 0x6be NEW_2
	var_443_bool = var_442_bool == 0; // 0x6c0 Not
	if(var_443_bool == 0) goto Label_1731; // 0x6c1 JumpB
	return 0; // 0x6c2 Return
	
Label_1731:
	var_444_bool = var_441_string == var_2_object; // 0x6c3 Eq
	if(var_444_bool == 0) goto Label_1734; // 0x6c4 JumpB
	return 0; // 0x6c5 Return
	
Label_1734:
	var_445_string = ""; var_446_bool = 0; // 0x6c6 PushV
	var_445_string = var_441_string; // 0x6c7 Mov
	var_447_string = ""; // 0x6c8 PushS
	var_448_bool = var_441_string == var_447_string; // 0x6c9 Eq
	if(var_448_bool == 0) goto Label_1741; // 0x6ca JumpB
	var_446_bool = 0; // 0x6cb MovB
	goto Label_1742; // 0x6cc Jump
	
Label_1742:
	func_5889(var_445_string, var_446_bool); // 0x6ce NEW_2
	var_2_object = var_441_string; // 0x6d0 TMov
	return 0; // 0x6d1 Return
	
Label_1741:
	var_446_bool = 1; // 0x6cd MovB
}


func_6846(var_331_bool)
{
	var_333_int = 0; var_334_string = ""; // 0x1abf PushV
	var_334_string = "b1q01"; // 0x1ac0 MovS
	func_5942(var_333_int, var_334_string); // 0x1ac1 NEW_2
	var_337_int = 0; // 0x1ac3 PushI
	var_338_bool = var_333_int == var_337_int; // 0x1ac4 Eq
	if(var_338_bool == 0) goto Label_6856; // 0x1ac5 JumpB
	var_331_bool = 1; // 0x1ac6 MovB
	return 0; // 0x1ac7 Return
	
Label_6856:
	var_331_bool = 0; // 0x1ac8 MovB
	return 0; // 0x1ac9 Return
}


func_5830(var_185_bool)
{
	var_187_string = ""; var_188_int = 0; var_189_bool = 0; var_190_int = 0; var_191_string = ""; var_192_string = ""; var_193_int = 0; var_194_bool = 0; var_195_int = 0; var_196_string = ""; // 0x16c6 PushV
	var_197_string = "d"; // 0x16c7 PushS
	var_198_int = 0; // 0x16c8 PushV
	func_6038(var_198_int); // 0x16c9 NEW_2
	var_204_int = var_197_string + var_198_int; // 0x16cb Add
	var_205_string = "m"; // 0x16cc PushS
	var_192_string = var_204_int + var_205_string; // 0x16cd Add2
	var_193_int = 0; // 0x16ce MovI
	
Label_5839:
	var_206_int = 1; // 0x16cf PushI
	if(var_206_int == 0) goto Label_5852; // 0x16d0 JumpB
	var_207_int = 1; // 0x16d1 PushI
	var_208_int = var_193_int + var_207_int; // 0x16d2 Add
	var_209_int = var_192_string + var_208_int; // 0x16d3 Add
	HasProperty(var_209_int, var_194_bool); // 0x16d4 ObjFunc
	var_210_bool = var_194_bool == 0; // 0x16d6 Not
	if(var_210_bool == 0) goto Label_5849; // 0x16d7 JumpB
	goto Label_5852; // 0x16d8 Jump
	
Label_5852:
	var_211_bool = var_193_int == 0; // 0x16dc Not
	if(var_211_bool == 0) goto Label_5856; // 0x16dd JumpB
	var_185_bool = 0; // 0x16de MovB
	return 10; // 0x16df Return
	
Label_5856:
	var_195_int = 0; // 0x16e0 MovI
	var_212_int = 1; // 0x16e1 PushI
	var_213_bool = var_193_int > var_212_int; // 0x16e2 GT
	if(var_213_bool == 0) goto Label_5862; // 0x16e3 JumpB
	irand(var_195_int, var_193_int); // 0x16e4 Func
	
Label_5862:
	var_214_int = 1; // 0x16e6 PushI
	var_215_int = var_195_int + var_214_int; // 0x16e7 Add
	var_216_int = var_192_string + var_215_int; // 0x16e8 Add
	GetProperty(var_216_int, var_196_string); // 0x16e9 ObjFunc
	var_217_bool = 0; var_218_string = ""; // 0x16eb PushV
	var_218_string = var_196_string; // 0x16ec Mov
	func_5904(var_217_bool, var_218_string); // 0x16ed NEW_2
	var_185_bool = var_217_bool; // 0x16ee Mov
	return 10; // 0x16f0 Return
	
Label_5849:
	var_219_int = 1; // 0x16d9 PushI
	var_193_int = var_193_int + var_219_int; // 0x16da Add2
	goto Label_5839; // 0x16db Jump
}


func_6858(var_365_bool)
{
	var_367_int = 0; var_368_string = ""; // 0x1acb PushV
	var_368_string = "oob1Kapella1"; // 0x1acc MovS
	func_5942(var_367_int, var_368_string); // 0x1acd NEW_2
	var_369_int = 0; // 0x1acf PushI
	var_370_bool = var_367_int == var_369_int; // 0x1ad0 Eq
	if(var_370_bool == 0) goto Label_6868; // 0x1ad1 JumpB
	var_365_bool = 1; // 0x1ad2 MovB
	return 0; // 0x1ad3 Return
	
Label_6868:
	var_365_bool = 0; // 0x1ad4 MovB
	return 0; // 0x1ad5 Return
}


func_6348()
{
	var_230_object = Obj(); var_231_string = ""; var_232_float = 0; // 0x18cd PushV
	var_233_object = Obj(); // 0x18ce PushV
	func_7102(var_233_object); // 0x18cf NEW_2
	var_230_object = var_233_object; // 0x18d0 Mov
	var_231_string = "pt_b1q05_patrol_house"; // 0x18d2 MovS
	var_232_float = 2; // 0x18d3 MovI
	func_7119(var_230_object, var_231_string, var_232_float); // 0x18d4 NEW_2
	var_253_object = Obj(); // 0x18d6 PushV
	func_7102(var_253_object); // 0x18d7 NEW_2
	ShowMap(var_253_object); // 0x18d9 ObjFunc
	return 0; // 0x18db Return
}


func_1236(var_0_object, var_1006_int, var_1007_object)
{
	var_1009_object = Obj(); var_1010_bool = 0; var_1011_int = 0; var_1012_bool = 0; var_1013_object = Obj(); var_1014_bool = 0; var_1015_int = 0; var_1016_bool = 0; // 0x4d4 PushV
	var_0_object = var_1007_object; // 0x4d5 TMov
	var_1017_bool = 0; var_1018_object = Obj(); var_1019_float = 0; // 0x4d6 PushV
	var_1018_object = var_1007_object; // 0x4d7 Mov
	var_1019_float = 70.0; // 0x4d8 MovF
	func_5650(var_1018_object, var_1019_float); // 0x4d9 NEW_2
	var_1020_bool = var_1017_bool == 0; // 0x4db Not
	if(var_1020_bool == 0) goto Label_1247; // 0x4dc JumpB
	var_1006_int = -2; // 0x4dd MovI
	return 8; // 0x4de Return
	
Label_1247:
	CreateDialog(var_1013_object); // 0x4df Func
	var_1021_int = 0; // 0x4e1 PushV
	func_6087(var_1021_int); // 0x4e2 NEW_2
	SetNPCName(var_1021_int); // 0x4e4 ObjFunc
	var_1022_int = 0; // 0x4e6 PushV
	func_6085(var_1022_int); // 0x4e7 NEW_2
	SetNPCDescription(var_1022_int); // 0x4e9 ObjFunc
	var_1023_string = ""; // 0x4eb PushV
	func_6089(var_1023_string); // 0x4ec NEW_2
	SetPhoto(var_1023_string); // 0x4ee ObjFunc
	var_1024_string = ""; // 0x4f0 PushV
	func_6091(var_1024_string); // 0x4f1 NEW_2
	SetPhoto2(var_1024_string); // 0x4f3 ObjFunc
	var_1025_int = 0; // 0x4f5 PushV
	func_7152(var_1025_int); // 0x4f6 NEW_2
	SetPlayerName(var_1025_int); // 0x4f8 ObjFunc
	var_1015_int = -1; // 0x4fa MovI
	IsOverrideActive(var_1014_bool); // 0x4fb Func
	var_1026_bool = var_1014_bool; // 0x4fd Push
	if(var_1026_bool == 0) goto Label_1281; // 0x4fe JumpB
	var_1006_int = -2; // 0x4ff MovI
	return 8; // 0x500 Return
	
Label_1281:
	DoDialog(var_1013_object); // 0x501 Func
	var_1027_bool = 0; var_1028_object = Obj(); // 0x503 PushV
	var_1029_object = Obj(); // 0x504 PushV
	func_5926(var_1029_object); // 0x505 NEW_2
	var_1028_object = var_1029_object; // 0x506 Mov
	func_5735(var_1027_bool, var_1028_object); // 0x508 NEW_2
	var_1030_object = Obj(); var_1031_object = Obj(); // 0x50a PushV
	var_1030_object = var_1007_object; // 0x50b Mov
	var_1031_object = var_1013_object; // 0x50c Mov
	TaskCall(5); // 0x50d TaskCall
	func_1317(var_1032_object, var_1033_object, var_1034_string, var_1035_bool, var_1030_object, var_1031_object); // 0x50e NEW_2
	TaskReturn(); // 0x50f TaskReturn
	IsDialogEnd(var_1016_bool); // 0x511 ObjFunc
	
Label_1299:
	var_1066_bool = var_1016_bool == 0; // 0x513 Not
	if(var_1066_bool == 0) goto Label_1306; // 0x514 JumpB
	sync(); // 0x515 Func
	IsDialogEnd(var_1016_bool); // 0x517 ObjFunc
	goto Label_1299; // 0x519 Jump
	
Label_1306:
	var_1067_object = Obj(); // 0x51a PushV
	var_1067_object = var_1007_object; // 0x51b Mov
	func_5718(); // 0x51c NEW_2
	StopDialog(var_1013_object); // 0x51e Func
	GetReturnValue(var_1015_int); // 0x520 ObjFunc
	var_1006_int = var_1015_int; // 0x522 Mov
	return 8; // 0x523 Return
}


func_6870(var_382_bool)
{
	var_384_int = 0; var_385_string = ""; // 0x1ad7 PushV
	var_385_string = "oob1Kapella3"; // 0x1ad8 MovS
	func_5942(var_384_int, var_385_string); // 0x1ad9 NEW_2
	var_386_int = 0; // 0x1adb PushI
	var_387_bool = var_384_int == var_386_int; // 0x1adc Eq
	if(var_387_bool == 0) goto Label_6880; // 0x1add JumpB
	var_382_bool = 1; // 0x1ade MovB
	return 0; // 0x1adf Return
	
Label_6880:
	var_382_bool = 0; // 0x1ae0 MovB
	return 0; // 0x1ae1 Return
}


func_6364()
{
	var_954_string = "oob11Kapella1"; // 0x18dd PushS
	var_955_int = 1; // 0x18de PushI
	SetVariable(var_954_string, var_955_int); // 0x18df Func
	return 0; // 0x18e1 Return
}


func_2781(var_2_object, var_339_string)
{
	var_340_bool = 0; // 0xade PushV
	func_6093(var_340_bool); // 0xadf NEW_2
	var_341_bool = var_340_bool == 0; // 0xae1 Not
	if(var_341_bool == 0) goto Label_2788; // 0xae2 JumpB
	return 0; // 0xae3 Return
	
Label_2788:
	var_342_bool = var_339_string == var_2_object; // 0xae4 Eq
	if(var_342_bool == 0) goto Label_2791; // 0xae5 JumpB
	return 0; // 0xae6 Return
	
Label_2791:
	var_343_string = ""; var_344_bool = 0; // 0xae7 PushV
	var_343_string = var_339_string; // 0xae8 Mov
	var_345_string = ""; // 0xae9 PushS
	var_346_bool = var_339_string == var_345_string; // 0xaea Eq
	if(var_346_bool == 0) goto Label_2798; // 0xaeb JumpB
	var_344_bool = 0; // 0xaec MovB
	goto Label_2799; // 0xaed Jump
	
Label_2799:
	func_5889(var_343_string, var_344_bool); // 0xaef NEW_2
	var_2_object = var_339_string; // 0xaf1 TMov
	return 0; // 0xaf2 Return
	
Label_2798:
	var_344_bool = 1; // 0xaee MovB
}


func_6370()
{
	var_59_string = "b11q02"; // 0x18e3 PushS
	var_60_int = 1; // 0x18e4 PushI
	SetVariable(var_59_string, var_60_int); // 0x18e5 Func
	func_6931(); // 0x18e8 NEW_2
	func_6957(); // 0x18eb NEW_2
	var_92_object = Obj(); var_93_string = ""; // 0x18ed PushV
	var_93_string = "quest_b11_02"; // 0x18ee MovS
	func_5947(var_92_object, var_93_string); // 0x18ef NEW_2
	return 0; // 0x18f1 Return
}


func_6882(var_391_bool)
{
	var_393_int = 0; var_394_string = ""; // 0x1ae3 PushV
	var_394_string = "oob1Kapella4"; // 0x1ae4 MovS
	func_5942(var_393_int, var_394_string); // 0x1ae5 NEW_2
	var_395_int = 0; // 0x1ae7 PushI
	var_396_bool = var_393_int == var_395_int; // 0x1ae8 Eq
	if(var_396_bool == 0) goto Label_6892; // 0x1ae9 JumpB
	var_391_bool = 1; // 0x1aea MovB
	return 0; // 0x1aeb Return
	
Label_6892:
	var_391_bool = 0; // 0x1aec MovB
	return 0; // 0x1aed Return
}


func_6894(var_706_bool)
{
	var_708_int = 0; // 0x1aef PushV
	func_6047(var_708_int); // 0x1af0 NEW_2
	var_713_int = 18; // 0x1af2 PushI
	var_714_bool = var_708_int >= var_713_int; // 0x1af3 GE
	if(var_714_bool == 0) goto Label_6903; // 0x1af4 JumpB
	var_706_bool = 1; // 0x1af5 MovB
	return 0; // 0x1af6 Return
	
Label_6903:
	var_706_bool = 0; // 0x1af7 MovB
	return 0; // 0x1af8 Return
}


func_5359(var_0_object)
{
	var_52_bool = 0; // 0x14ef PushV
	func_5645(var_52_bool); // 0x14f0 NEW_2
	var_55_bool = var_52_bool == 0; // 0x14f2 Not
	if(var_55_bool == 0) goto Label_5366; // 0x14f3 JumpB
	Hold(); // 0x14f4 Func
	
Label_5366:
	GetDirection(var_0_object); // 0x14f6 Func
	
Label_5368:
	func_5535(); // 0x14f9 NEW_2
	goto Label_5368; // 0x14fb Jump
}


func_5873(var_271_string)
{
	var_272_bool = 0; var_273_float = 0; var_274_float = 0; var_275_bool = 0; var_276_float = 0; var_277_float = 0; // 0x16f1 PushV
	lshHasAnimation(var_275_bool, var_271_string); // 0x16f2 Func
	var_278_bool = var_275_bool; // 0x16f4 Push
	if(var_278_bool == 0) goto Label_5884; // 0x16f5 JumpB
	lshGetAnimTimes(var_271_string, var_276_float, var_277_float); // 0x16f6 Func
	var_279_bool = 0; // 0x16f8 PushB
	lshPlayAnimation(var_276_float, var_277_float, var_279_bool); // 0x16f9 Func
	goto Label_5888; // 0x16fb Jump
	
Label_5888:
	return 6; // 0x1700 Return
	
Label_5884:
	var_280_string = "Can't find lsh animation : "; // 0x16fc PushS
	var_281_int = var_280_string + var_271_string; // 0x16fd Add
	Trace(var_281_int); // 0x16fe Func
}


func_6386()
{
	func_6944(); // 0x18f4 NEW_2
	var_116_bool = 0; var_117_string = ""; var_118_string = ""; // 0x18f6 PushV
	var_117_string = "quest_b11_02"; // 0x18f7 MovS
	var_118_string = "completed"; // 0x18f8 MovS
	func_6021(var_116_bool, var_117_string, var_118_string); // 0x18f9 NEW_2
	return 0; // 0x18fb Return
}


func_6905()
{
	var_77_object = Obj(); var_78_object = Obj(); // 0x1af9 PushV
	var_79_int = 594; // 0x1afa PushI
	var_80_int = 2; // 0x1afb PushI
	var_81_int = 531145; // 0x1afc PushI
	CreateDiaryEntry(var_78_object, var_79_int, var_80_int, var_81_int); // 0x1afd Func
	var_82_bool = 0; var_83_object = Obj(); var_84_int = 0; // 0x1aff PushV
	var_83_object = var_78_object; // 0x1b00 Mov
	var_84_int = -1; // 0x1b01 MovI
	func_7074(var_82_bool, var_83_object, var_84_int); // 0x1b02 NEW_2
	return 2; // 0x1b04 Return
}


func_762(var_0_object, var_1_object, var_2_object, var_3_string, var_939_object, var_940_object)
{
	var_0_object = var_940_object; // 0x2fb TMov
	var_1_object = var_939_object; // 0x2fc TMov
	var_3_string = 0; // 0x2fd TMovB
	var_945_int = 1; // 0x2fe PushI
	if(var_945_int == 0) goto Label_835; // 0x2ff JumpB
	var_946_bool = 0; var_947_object = Obj(); // 0x300 PushV
	var_947_object = var_1_object; // 0x301 MovT
	func_6726(var_947_object); // 0x302 NEW_2
	if(var_946_bool == 0) goto Label_798; // 0x304 JumpB
	var_952_object = Obj(); var_953_object = Obj(); // 0x305 PushV
	var_952_object = var_1_object; // 0x306 MovT
	var_953_object = var_0_object; // 0x307 MovT
	func_6364(); // 0x308 NEW_2
	var_956_string = ""; // 0x30a PushV
	var_956_string = "Neutral"; // 0x30b MovS
	func_865(var_940_object, var_956_string); // 0x30c NEW_2
	var_964_int = 531105; // 0x30e PushI
	SetMessage(var_964_int); // 0x30f TObjFunc
	ClearReplies(); // 0x311 TObjFunc
	var_965_int = 531107; // 0x313 PushI
	var_966_int = 32678; // 0x314 PushI
	var_967_int = 32425; // 0x315 PushI
	AddReply(var_965_int, var_966_int, var_967_int); // 0x316 TObjFunc
	var_968_int = 531353; // 0x318 PushI
	var_969_int = 32678; // 0x319 PushI
	var_970_int = 32685; // 0x31a PushI
	AddReply(var_968_int, var_969_int, var_970_int); // 0x31b TObjFunc
	goto Label_835; // 0x31d Jump
	
Label_835:
	var_971_bool = 0; // 0x343 PushV
	func_6093(var_971_bool); // 0x344 NEW_2
	if(var_971_bool == 0) goto Label_850; // 0x346 JumpB
	
Label_839:
	lshWaitForAnimEnd(); // 0x347 Func
	var_972_string = var_3_string; // 0x349 PushT
	if(var_972_string == 0) goto Label_844; // 0x34a JumpB
	goto Label_849; // 0x34b Jump
	
Label_849:
	goto Label_864; // 0x351 Jump
	
Label_864:
	return 0; // 0x360 Return
	
Label_844:
	var_973_string = ""; // 0x34c PushV
	var_973_string = var_2_object; // 0x34d MovT
	func_5873(var_973_string); // 0x34e NEW_2
	goto Label_839; // 0x350 Jump
	
Label_850:
	var_974_string = "all"; // 0x352 PushS
	var_975_string = "idle"; // 0x353 PushS
	PlayAnimation(var_974_string, var_975_string); // 0x354 Func
	
Label_854:
	WaitForAnimEnd(); // 0x356 Func
	var_976_string = var_3_string; // 0x358 PushT
	if(var_976_string == 0) goto Label_859; // 0x359 JumpB
	goto Label_864; // 0x35a Jump
	
Label_859:
	var_977_string = "all"; // 0x35b PushS
	var_978_string = "idle"; // 0x35c PushS
	PlayAnimation(var_977_string, var_978_string); // 0x35d Func
	goto Label_854; // 0x35f Jump
	
Label_798:
	var_979_string = ""; // 0x31e PushV
	var_979_string = "Neutral"; // 0x31f MovS
	func_865(var_940_object, var_979_string); // 0x320 NEW_2
	var_980_int = 531108; // 0x322 PushI
	SetMessage(var_980_int); // 0x323 TObjFunc
	ClearReplies(); // 0x325 TObjFunc
	var_981_bool = 0; var_982_object = Obj(); // 0x327 PushV
	var_982_object = var_1_object; // 0x328 MovT
	func_6738(var_982_object); // 0x329 NEW_2
	if(var_981_bool == 0) goto Label_817; // 0x32b JumpB
	var_987_int = 531109; // 0x32c PushI
	var_988_int = 32429; // 0x32d PushI
	var_989_int = 32427; // 0x32e PushI
	AddReply(var_987_int, var_988_int, var_989_int); // 0x32f TObjFunc
	
Label_817:
	var_990_bool = 0; var_991_object = Obj(); // 0x331 PushV
	var_991_object = var_1_object; // 0x332 MovT
	func_6750(var_991_object); // 0x333 NEW_2
	if(var_990_bool == 0) goto Label_827; // 0x335 JumpB
	var_996_int = 531129; // 0x336 PushI
	var_997_int = 32448; // 0x337 PushI
	var_998_int = 32447; // 0x338 PushI
	AddReply(var_996_int, var_997_int, var_998_int); // 0x339 TObjFunc
	
Label_827:
	var_999_int = 531110; // 0x33b PushI
	var_1000_int = -1; // 0x33c PushI
	var_1001_int = 32428; // 0x33d PushI
	AddReply(var_999_int, var_1000_int, var_1001_int); // 0x33e TObjFunc
	goto Label_835; // 0x340 Jump
}


func_6396()
{
	var_835_string = "oob10Kapella2"; // 0x18fd PushS
	var_836_int = 1; // 0x18fe PushI
	SetVariable(var_835_string, var_836_int); // 0x18ff Func
	return 0; // 0x1901 Return
}


func_5373(var_76_bool)
{
	var_77_object = Obj(); var_78_object = Obj(); // 0x14fd PushV
	var_79_string = "player"; // 0x14fe PushS
	FindActor(var_78_object, var_79_string); // 0x14ff Func
	var_80_bool = var_78_object == 0; // 0x1501 Not
	if(var_80_bool == 0) goto Label_5381; // 0x1502 JumpB
	var_76_bool = 0; // 0x1503 MovB
	return 2; // 0x1504 Return
	
Label_5381:
	var_81_bool = 0; var_82_object = Obj(); // 0x1505 PushV
	var_82_object = var_78_object; // 0x1506 Mov
	func_5636(var_82_object); // 0x1507 NEW_2
	var_76_bool = var_81_bool; // 0x1508 Mov
	return 2; // 0x150a Return
}


func_256(var_2_object, var_715_string)
{
	var_716_bool = 0; // 0x101 PushV
	func_6093(var_716_bool); // 0x102 NEW_2
	var_717_bool = var_716_bool == 0; // 0x104 Not
	if(var_717_bool == 0) goto Label_263; // 0x105 JumpB
	return 0; // 0x106 Return
	
Label_263:
	var_718_bool = var_715_string == var_2_object; // 0x107 Eq
	if(var_718_bool == 0) goto Label_266; // 0x108 JumpB
	return 0; // 0x109 Return
	
Label_266:
	var_719_string = ""; var_720_bool = 0; // 0x10a PushV
	var_719_string = var_715_string; // 0x10b Mov
	var_721_string = ""; // 0x10c PushS
	var_722_bool = var_715_string == var_721_string; // 0x10d Eq
	if(var_722_bool == 0) goto Label_273; // 0x10e JumpB
	var_720_bool = 0; // 0x10f MovB
	goto Label_274; // 0x110 Jump
	
Label_274:
	func_5889(var_719_string, var_720_bool); // 0x112 NEW_2
	var_2_object = var_715_string; // 0x114 TMov
	return 0; // 0x115 Return
	
Label_273:
	var_720_bool = 1; // 0x111 MovB
}


func_5889(var_249_string, var_250_bool)
{
	var_253_bool = 0; var_254_float = 0; var_255_float = 0; var_256_bool = 0; var_257_float = 0; var_258_float = 0; // 0x1701 PushV
	lshHasAnimation(var_256_bool, var_249_string); // 0x1702 Func
	var_259_bool = var_256_bool; // 0x1704 Push
	if(var_259_bool == 0) goto Label_5899; // 0x1705 JumpB
	lshGetAnimTimes(var_249_string, var_257_float, var_258_float); // 0x1706 Func
	lshPlayAnimation(var_257_float, var_258_float, var_250_bool); // 0x1708 Func
	goto Label_5903; // 0x170a Jump
	
Label_5903:
	return 6; // 0x170f Return
	
Label_5899:
	var_260_string = "Can't find lsh animation : "; // 0x170b PushS
	var_261_int = var_260_string + var_249_string; // 0x170c Add
	Trace(var_261_int); // 0x170d Func
}


func_6402()
{
	var_59_object = Obj(); var_60_object = Obj(); // 0x1902 PushV
	var_61_string = "b10q03"; // 0x1903 PushS
	var_62_int = 1; // 0x1904 PushI
	SetVariable(var_61_string, var_62_int); // 0x1905 Func
	var_63_object = Obj(); // 0x1907 PushV
	func_7102(var_63_object); // 0x1908 NEW_2
	var_60_object = var_63_object; // 0x1909 Mov
	var_70_string = "b10q03KapellaGotoMishka"; // 0x190b PushS
	var_71_string = "pt_map_mishka"; // 0x190c PushS
	var_72_int = 0; // 0x190d PushI
	var_73_int = 531261; // 0x190e PushI
	var_74_float = 0; // 0x190f PushV
	func_6033(var_74_float); // 0x1910 NEW_2
	AddMark(var_70_string, var_71_string, var_72_int, var_73_int, var_74_float); // 0x1912 ObjFunc
	func_6905(); // 0x1915 NEW_2
	func_6918(); // 0x1918 NEW_2
	var_108_object = Obj(); var_109_string = ""; // 0x191a PushV
	var_109_string = "quest_b10_03"; // 0x191b MovS
	func_5947(var_108_object, var_109_string); // 0x191c NEW_2
	return 2; // 0x191e Return
}


func_6918()
{
	var_100_object = Obj(); var_101_object = Obj(); // 0x1b06 PushV
	var_102_int = 595; // 0x1b07 PushI
	var_103_int = 2; // 0x1b08 PushI
	var_104_int = 531146; // 0x1b09 PushI
	CreateDiaryEntry(var_101_object, var_102_int, var_103_int, var_104_int); // 0x1b0a Func
	var_105_bool = 0; var_106_object = Obj(); var_107_int = 0; // 0x1b0c PushV
	var_106_object = var_101_object; // 0x1b0d Mov
	var_107_int = 594; // 0x1b0e MovI
	func_7074(var_105_bool, var_106_object, var_107_int); // 0x1b0f NEW_2
	return 2; // 0x1b11 Return
}


func_5388(var_0_object)
{
	var_128_float = GetByIndex(var_0_object, 0); // 0x150c PushE
	var_129_float = GetByIndex(var_0_object, 2); // 0x150d PushE
	RotateAsync(var_128_float, var_129_float); // 0x150e Func
	return 0; // 0x1510 Return
}


func_5904(var_177_bool, var_178_string)
{
	var_179_bool = 0; var_180_bool = 0; // 0x1710 PushV
	var_181_bool = 0; // 0x1711 PushV
	func_6093(var_181_bool); // 0x1712 NEW_2
	if(var_181_bool == 0) goto Label_5917; // 0x1714 JumpB
	lshHasSpeech(var_180_bool, var_178_string); // 0x1715 Func
	var_182_bool = var_180_bool; // 0x1717 Push
	if(var_182_bool == 0) goto Label_5917; // 0x1718 JumpB
	lshPlaySpeech(var_178_string); // 0x1719 Func
	var_177_bool = 1; // 0x171b MovB
	return 2; // 0x171c Return
	
Label_5917:
	var_177_bool = 0; // 0x171d MovB
	return 2; // 0x171e Return
}


func_5393(var_59_bool)
{
	var_60_object = Obj(); var_61_bool = 0; var_62_object = Obj(); var_63_bool = 0; // 0x1511 PushV
	var_64_string = "player"; // 0x1512 PushS
	FindActor(var_62_object, var_64_string); // 0x1513 Func
	var_65_bool = var_62_object == 0; // 0x1515 Not
	if(var_65_bool == 0) goto Label_5401; // 0x1516 JumpB
	var_59_bool = 0; // 0x1517 MovB
	return 4; // 0x1518 Return
	
Label_5401:
	var_66_float = 0; var_67_object = Obj(); // 0x1519 PushV
	var_67_object = var_62_object; // 0x151a Mov
	func_5611(var_67_object); // 0x151b NEW_2
	var_74_float = 90000.0; // 0x151d PushF
	var_75_bool = var_66_float > var_74_float; // 0x151e GT
	if(var_75_bool == 0) goto Label_5410; // 0x151f JumpB
	var_59_bool = 0; // 0x1520 MovB
	return 4; // 0x1521 Return
	
Label_5410:
	CanSee(var_63_bool, var_62_object); // 0x1522 Func
	var_59_bool = var_63_bool; // 0x1524 Mov
	return 4; // 0x1525 Return
}


func_6931()
{
	var_61_object = Obj(); var_62_object = Obj(); // 0x1b13 PushV
	var_63_int = 598; // 0x1b14 PushI
	var_64_int = 2; // 0x1b15 PushI
	var_65_int = 531149; // 0x1b16 PushI
	CreateDiaryEntry(var_62_object, var_63_int, var_64_int, var_65_int); // 0x1b17 Func
	var_66_bool = 0; var_67_object = Obj(); var_68_int = 0; // 0x1b19 PushV
	var_67_object = var_62_object; // 0x1b1a Mov
	var_68_int = -1; // 0x1b1b MovI
	func_7074(var_66_bool, var_67_object, var_68_int); // 0x1b1c NEW_2
	return 2; // 0x1b1e Return
}


func_5919()
{
	var_54_bool = 0; // 0x171f PushV
	func_6093(var_54_bool); // 0x1720 NEW_2
	if(var_54_bool == 0) goto Label_5925; // 0x1722 JumpB
	lshStopSpeech(); // 0x1723 Func
	
Label_5925:
	return 0; // 0x1725 Return
}


func_6432()
{
	var_839_string = "b10KapellaVisit"; // 0x1921 PushS
	var_840_int = 1; // 0x1922 PushI
	SetVariable(var_839_string, var_840_int); // 0x1923 Func
	return 0; // 0x1925 Return
}


func_6944()
{
	var_108_object = Obj(); var_109_object = Obj(); // 0x1b20 PushV
	var_110_int = 602; // 0x1b21 PushI
	var_111_int = 2; // 0x1b22 PushI
	var_112_int = 531153; // 0x1b23 PushI
	CreateDiaryEntry(var_109_object, var_110_int, var_111_int, var_112_int); // 0x1b24 Func
	var_113_bool = 0; var_114_object = Obj(); var_115_int = 0; // 0x1b26 PushV
	var_114_object = var_109_object; // 0x1b27 Mov
	var_115_int = 598; // 0x1b28 MovI
	func_7074(var_113_bool, var_114_object, var_115_int); // 0x1b29 NEW_2
	return 2; // 0x1b2b Return
}


func_1317(var_0_object, var_1_object, var_2_object, var_3_string, var_1030_object, var_1031_object)
{
	var_0_object = var_1031_object; // 0x526 TMov
	var_1_object = var_1030_object; // 0x527 TMov
	var_3_string = 0; // 0x528 TMovB
	var_1036_int = 1; // 0x529 PushI
	if(var_1036_int == 0) goto Label_1350; // 0x52a JumpB
	var_1037_string = ""; // 0x52b PushV
	var_1037_string = "Neutral"; // 0x52c MovS
	func_1380(var_1031_object, var_1037_string); // 0x52d NEW_2
	var_1045_int = 535258; // 0x52f PushI
	SetMessage(var_1045_int); // 0x530 TObjFunc
	ClearReplies(); // 0x532 TObjFunc
	var_1046_bool = 0; var_1047_object = Obj(); // 0x534 PushV
	var_1047_object = var_1_object; // 0x535 MovT
	func_6786(var_1047_object); // 0x536 NEW_2
	if(var_1046_bool == 0) goto Label_1342; // 0x538 JumpB
	var_1052_int = 535259; // 0x539 PushI
	var_1053_int = 36983; // 0x53a PushI
	var_1054_int = 36934; // 0x53b PushI
	AddReply(var_1052_int, var_1053_int, var_1054_int); // 0x53c TObjFunc
	
Label_1342:
	var_1055_int = 535304; // 0x53e PushI
	var_1056_int = -1; // 0x53f PushI
	var_1057_int = 36982; // 0x540 PushI
	AddReply(var_1055_int, var_1056_int, var_1057_int); // 0x541 TObjFunc
	goto Label_1350; // 0x543 Jump
	
Label_1350:
	var_1058_bool = 0; // 0x546 PushV
	func_6093(var_1058_bool); // 0x547 NEW_2
	if(var_1058_bool == 0) goto Label_1365; // 0x549 JumpB
	
Label_1354:
	lshWaitForAnimEnd(); // 0x54a Func
	var_1059_string = var_3_string; // 0x54c PushT
	if(var_1059_string == 0) goto Label_1359; // 0x54d JumpB
	goto Label_1364; // 0x54e Jump
	
Label_1364:
	goto Label_1379; // 0x554 Jump
	
Label_1379:
	return 0; // 0x563 Return
	
Label_1359:
	var_1060_string = ""; // 0x54f PushV
	var_1060_string = var_2_object; // 0x550 MovT
	func_5873(var_1060_string); // 0x551 NEW_2
	goto Label_1354; // 0x553 Jump
	
Label_1365:
	var_1061_string = "all"; // 0x555 PushS
	var_1062_string = "idle"; // 0x556 PushS
	PlayAnimation(var_1061_string, var_1062_string); // 0x557 Func
	
Label_1369:
	WaitForAnimEnd(); // 0x559 Func
	var_1063_string = var_3_string; // 0x55b PushT
	if(var_1063_string == 0) goto Label_1374; // 0x55c JumpB
	goto Label_1379; // 0x55d Jump
	
Label_1374:
	var_1064_string = "all"; // 0x55e PushS
	var_1065_string = "idle"; // 0x55f PushS
	PlayAnimation(var_1064_string, var_1065_string); // 0x560 Func
	goto Label_1369; // 0x562 Jump
}


func_5926(var_145_object)
{
	var_146_object = Obj(); var_147_object = Obj(); // 0x1726 PushV
	self(var_147_object); // 0x1727 Func
	var_145_object = var_147_object; // 0x1729 Mov
	return 2; // 0x172a Return
}


func_6438()
{
	var_59_string = "oob12Kapella1"; // 0x1927 PushS
	var_60_int = 1; // 0x1928 PushI
	SetVariable(var_59_string, var_60_int); // 0x1929 Func
	return 0; // 0x192b Return
}


func_5415()
{
	var_1126_float = 0; var_1127_float = 0; // 0x1527 PushV
	var_1128_int = 8; // 0x1528 PushI
	var_1129_int = 16; // 0x1529 PushI
	rand(var_1127_float, var_1128_int, var_1129_int); // 0x152a Func
	var_1130_int = 10; // 0x152c PushI
	SetTimer(var_1130_int, var_1127_float); // 0x152d Func
	return 2; // 0x152f Return
}


func_6444()
{
	var_163_int = 0; var_164_string = ""; // 0x192d PushV
	var_164_string = "b1q01"; // 0x192e MovS
	func_5942(var_163_int, var_164_string); // 0x192f NEW_2
	var_167_int = 1; // 0x1931 PushI
	var_168_bool = var_163_int == var_167_int; // 0x1932 Eq
	if(var_168_bool == 0) goto Label_6455; // 0x1933 JumpB
	func_6970(); // 0x1935 NEW_2
	
Label_6455:
	return 0; // 0x1937 Return
}


func_5932(var_110_cvector, var_111_cvector)
{
	var_113_float = 0; var_114_float = 0; // 0x172c PushV
	var_115_int = var_111_cvector | var_111_cvector; // 0x172d Or
	var_114_float = sqrt(var_115_int); // 0x172e Sqrt2
	var_116_float = 0.0; // 0x172f PushF
	var_117_bool = var_114_float < var_116_float; // 0x1730 LT
	if(var_117_bool == 0) goto Label_5940; // 0x1731 JumpB
	var_110_cvector = CVector(0.0, 0.0, 0.0); // 0x1732 MovV
	return 2; // 0x1733 Return
	
Label_5940:
	var_110_cvector = var_111_cvector / var_111_cvector; // 0x1734 Div2
	return 2; // 0x1735 Return
}


func_6957()
{
	var_84_object = Obj(); var_85_object = Obj(); // 0x1b2d PushV
	var_86_int = 599; // 0x1b2e PushI
	var_87_int = 2; // 0x1b2f PushI
	var_88_int = 531150; // 0x1b30 PushI
	CreateDiaryEntry(var_85_object, var_86_int, var_87_int, var_88_int); // 0x1b31 Func
	var_89_bool = 0; var_90_object = Obj(); var_91_int = 0; // 0x1b33 PushV
	var_90_object = var_85_object; // 0x1b34 Mov
	var_91_int = 598; // 0x1b35 MovI
	func_7074(var_89_bool, var_90_object, var_91_int); // 0x1b36 NEW_2
	return 2; // 0x1b38 Return
}


func_3886(var_0_object, var_571_int, var_572_object)
{
	var_574_object = Obj(); var_575_bool = 0; var_576_int = 0; var_577_bool = 0; var_578_object = Obj(); var_579_bool = 0; var_580_int = 0; var_581_bool = 0; // 0xf2e PushV
	var_0_object = var_572_object; // 0xf2f TMov
	var_582_bool = 0; var_583_object = Obj(); var_584_float = 0; // 0xf30 PushV
	var_583_object = var_572_object; // 0xf31 Mov
	var_584_float = 70.0; // 0xf32 MovF
	func_5650(var_583_object, var_584_float); // 0xf33 NEW_2
	var_585_bool = var_582_bool == 0; // 0xf35 Not
	if(var_585_bool == 0) goto Label_3897; // 0xf36 JumpB
	var_571_int = -2; // 0xf37 MovI
	return 8; // 0xf38 Return
	
Label_3897:
	CreateDialog(var_578_object); // 0xf39 Func
	var_586_int = 0; // 0xf3b PushV
	func_6087(var_586_int); // 0xf3c NEW_2
	SetNPCName(var_586_int); // 0xf3e ObjFunc
	var_587_int = 0; // 0xf40 PushV
	func_6085(var_587_int); // 0xf41 NEW_2
	SetNPCDescription(var_587_int); // 0xf43 ObjFunc
	var_588_string = ""; // 0xf45 PushV
	func_6089(var_588_string); // 0xf46 NEW_2
	SetPhoto(var_588_string); // 0xf48 ObjFunc
	var_589_string = ""; // 0xf4a PushV
	func_6091(var_589_string); // 0xf4b NEW_2
	SetPhoto2(var_589_string); // 0xf4d ObjFunc
	var_590_int = 0; // 0xf4f PushV
	func_7152(var_590_int); // 0xf50 NEW_2
	SetPlayerName(var_590_int); // 0xf52 ObjFunc
	var_580_int = -1; // 0xf54 MovI
	IsOverrideActive(var_579_bool); // 0xf55 Func
	var_591_bool = var_579_bool; // 0xf57 Push
	if(var_591_bool == 0) goto Label_3931; // 0xf58 JumpB
	var_571_int = -2; // 0xf59 MovI
	return 8; // 0xf5a Return
	
Label_3931:
	DoDialog(var_578_object); // 0xf5b Func
	var_592_bool = 0; var_593_object = Obj(); // 0xf5d PushV
	var_594_object = Obj(); // 0xf5e PushV
	func_5926(var_594_object); // 0xf5f NEW_2
	var_593_object = var_594_object; // 0xf60 Mov
	func_5735(var_592_bool, var_593_object); // 0xf62 NEW_2
	var_595_object = Obj(); var_596_object = Obj(); // 0xf64 PushV
	var_595_object = var_572_object; // 0xf65 Mov
	var_596_object = var_578_object; // 0xf66 Mov
	TaskCall(15); // 0xf67 TaskCall
	func_3967(var_597_object, var_598_object, var_599_string, var_600_bool, var_595_object, var_596_object); // 0xf68 NEW_2
	TaskReturn(); // 0xf69 TaskReturn
	IsDialogEnd(var_581_bool); // 0xf6b ObjFunc
	
Label_3949:
	var_653_bool = var_581_bool == 0; // 0xf6d Not
	if(var_653_bool == 0) goto Label_3956; // 0xf6e JumpB
	sync(); // 0xf6f Func
	IsDialogEnd(var_581_bool); // 0xf71 ObjFunc
	goto Label_3949; // 0xf73 Jump
	
Label_3956:
	var_654_object = Obj(); // 0xf74 PushV
	var_654_object = var_572_object; // 0xf75 Mov
	func_5718(); // 0xf76 NEW_2
	StopDialog(var_578_object); // 0xf78 Func
	GetReturnValue(var_580_int); // 0xf7a ObjFunc
	var_571_int = var_580_int; // 0xf7c Mov
	return 8; // 0xf7d Return
}


func_5424()
{
	var_1125_int = 10; // 0x1530 PushI
	KillTimer(var_1125_int); // 0x1531 Func
	return 0; // 0x1533 Return
}


func_4396(var_0_object, var_796_int, var_797_object)
{
	var_799_object = Obj(); var_800_bool = 0; var_801_int = 0; var_802_bool = 0; var_803_object = Obj(); var_804_bool = 0; var_805_int = 0; var_806_bool = 0; // 0x112c PushV
	var_0_object = var_797_object; // 0x112d TMov
	var_807_bool = 0; var_808_object = Obj(); var_809_float = 0; // 0x112e PushV
	var_808_object = var_797_object; // 0x112f Mov
	var_809_float = 70.0; // 0x1130 MovF
	func_5650(var_808_object, var_809_float); // 0x1131 NEW_2
	var_810_bool = var_807_bool == 0; // 0x1133 Not
	if(var_810_bool == 0) goto Label_4407; // 0x1134 JumpB
	var_796_int = -2; // 0x1135 MovI
	return 8; // 0x1136 Return
	
Label_4407:
	CreateDialog(var_803_object); // 0x1137 Func
	var_811_int = 0; // 0x1139 PushV
	func_6087(var_811_int); // 0x113a NEW_2
	SetNPCName(var_811_int); // 0x113c ObjFunc
	var_812_int = 0; // 0x113e PushV
	func_6085(var_812_int); // 0x113f NEW_2
	SetNPCDescription(var_812_int); // 0x1141 ObjFunc
	var_813_string = ""; // 0x1143 PushV
	func_6089(var_813_string); // 0x1144 NEW_2
	SetPhoto(var_813_string); // 0x1146 ObjFunc
	var_814_string = ""; // 0x1148 PushV
	func_6091(var_814_string); // 0x1149 NEW_2
	SetPhoto2(var_814_string); // 0x114b ObjFunc
	var_815_int = 0; // 0x114d PushV
	func_7152(var_815_int); // 0x114e NEW_2
	SetPlayerName(var_815_int); // 0x1150 ObjFunc
	var_805_int = -1; // 0x1152 MovI
	IsOverrideActive(var_804_bool); // 0x1153 Func
	var_816_bool = var_804_bool; // 0x1155 Push
	if(var_816_bool == 0) goto Label_4441; // 0x1156 JumpB
	var_796_int = -2; // 0x1157 MovI
	return 8; // 0x1158 Return
	
Label_4441:
	DoDialog(var_803_object); // 0x1159 Func
	var_817_bool = 0; var_818_object = Obj(); // 0x115b PushV
	var_819_object = Obj(); // 0x115c PushV
	func_5926(var_819_object); // 0x115d NEW_2
	var_818_object = var_819_object; // 0x115e Mov
	func_5735(var_817_bool, var_818_object); // 0x1160 NEW_2
	var_820_object = Obj(); var_821_object = Obj(); // 0x1162 PushV
	var_820_object = var_797_object; // 0x1163 Mov
	var_821_object = var_803_object; // 0x1164 Mov
	TaskCall(17); // 0x1165 TaskCall
	func_4477(var_822_object, var_823_object, var_824_string, var_825_bool, var_820_object, var_821_object); // 0x1166 NEW_2
	TaskReturn(); // 0x1167 TaskReturn
	IsDialogEnd(var_806_bool); // 0x1169 ObjFunc
	
Label_4459:
	var_911_bool = var_806_bool == 0; // 0x116b Not
	if(var_911_bool == 0) goto Label_4466; // 0x116c JumpB
	sync(); // 0x116d Func
	IsDialogEnd(var_806_bool); // 0x116f ObjFunc
	goto Label_4459; // 0x1171 Jump
	
Label_4466:
	var_912_object = Obj(); // 0x1172 PushV
	var_912_object = var_797_object; // 0x1173 Mov
	func_5718(); // 0x1174 NEW_2
	StopDialog(var_803_object); // 0x1176 Func
	GetReturnValue(var_805_int); // 0x1178 ObjFunc
	var_796_int = var_805_int; // 0x117a Mov
	return 8; // 0x117b Return
}


func_5942(var_333_int, var_334_string)
{
	var_335_int = 0; var_336_int = 0; // 0x1736 PushV
	GetVariable(var_334_string, var_336_int); // 0x1737 Func
	var_333_int = var_336_int; // 0x1739 Mov
	return 2; // 0x173a Return
}


func_6456(var_122_object)
{
	var_124_string = "kapella beads is given"; // 0x1939 PushS
	Trace(var_124_string); // 0x193a Func
	var_125_object = Obj(); var_126_string = ""; var_127_int = 0; // 0x193c PushV
	var_125_object = var_122_object; // 0x193d Mov
	var_126_string = "d11q06KapellaBeads"; // 0x193e MovS
	var_127_int = 1; // 0x193f MovI
	func_6008(var_125_object, var_126_string, var_127_int); // 0x1940 NEW_2
	return 0; // 0x1942 Return
}


func_6970()
{
	var_169_object = Obj(); var_170_object = Obj(); // 0x1b3a PushV
	var_171_int = 717; // 0x1b3b PushI
	var_172_int = 1; // 0x1b3c PushI
	var_173_int = 538493; // 0x1b3d PushI
	CreateDiaryEntry(var_170_object, var_171_int, var_172_int, var_173_int); // 0x1b3e Func
	var_174_bool = 0; var_175_object = Obj(); var_176_int = 0; // 0x1b40 PushV
	var_175_object = var_170_object; // 0x1b41 Mov
	var_176_int = 242; // 0x1b42 MovI
	func_7074(var_174_bool, var_175_object, var_176_int); // 0x1b43 NEW_2
	return 2; // 0x1b45 Return
}


func_5947(var_108_object, var_109_string)
{
	var_110_object = Obj(); var_111_object = Obj(); var_112_object = Obj(); var_113_object = Obj(); // 0x173b PushV
	GetMainOutdoorScene(var_112_object); // 0x173c Func
	var_114_string = ".bin"; // 0x173e PushS
	var_115_int = var_109_string + var_114_string; // 0x173f Add
	AddBlankActor(var_113_object, var_112_object, var_109_string, var_115_int); // 0x1740 Func
	var_108_object = var_113_object; // 0x1742 Mov
	return 4; // 0x1743 Return
}


func_6467()
{
	var_118_string = "playsound"; // 0x1944 PushS
	var_119_string = "mapmark"; // 0x1945 PushS
	TriggerWorld(var_118_string, var_119_string); // 0x1946 Func
	return 0; // 0x1948 Return
}


func_5958(var_189_int, var_190_int)
{
	var_191_object = Obj(); var_192_object = Obj(); // 0x1746 PushV
	CreateIntVector(var_192_object); // 0x1747 Func
	add(var_189_int); // 0x1749 ObjFunc
	add(var_190_int); // 0x174b ObjFunc
	var_193_int = 3; // 0x174d PushI
	SendWorldWndMessage(var_193_int, var_192_object); // 0x174e Func
	return 2; // 0x1750 Return
}


func_6983()
{
	var_81_object = Obj(); var_82_object = Obj(); // 0x1b47 PushV
	var_83_int = 227; // 0x1b48 PushI
	var_84_int = 2; // 0x1b49 PushI
	var_85_int = 519655; // 0x1b4a PushI
	CreateDiaryEntry(var_82_object, var_83_int, var_84_int, var_85_int); // 0x1b4b Func
	var_86_bool = 0; var_87_object = Obj(); var_88_int = 0; // 0x1b4d PushV
	var_87_object = var_82_object; // 0x1b4e Mov
	var_88_int = -1; // 0x1b4f MovI
	func_7074(var_86_bool, var_87_object, var_88_int); // 0x1b50 NEW_2
	return 2; // 0x1b52 Return
}


func_6473()
{
	var_122_object = Obj(); var_123_string = ""; var_124_float = 0; // 0x194a PushV
	var_125_object = Obj(); // 0x194b PushV
	func_7102(var_125_object); // 0x194c NEW_2
	var_122_object = var_125_object; // 0x194d Mov
	var_123_string = "pt_map_spi4ka"; // 0x194f MovS
	var_124_float = 2; // 0x1950 MovI
	func_7119(var_122_object, var_123_string, var_124_float); // 0x1951 NEW_2
	var_145_object = Obj(); // 0x1953 PushV
	func_7102(var_145_object); // 0x1954 NEW_2
	ShowMap(var_145_object); // 0x1956 ObjFunc
	return 0; // 0x1958 Return
}


func_5970(var_176_object, var_177_int)
{
	var_178_int = 0; var_179_int = 0; // 0x1752 PushV
	var_180_object = Obj(); var_181_string = ""; var_182_int = 0; // 0x1753 PushV
	var_180_object = var_176_object; // 0x1754 Mov
	var_181_string = "money"; // 0x1755 MovS
	var_182_int = var_177_int; // 0x1756 Mov
	func_5619(var_181_string, var_182_int); // 0x1757 NEW_2
	var_186_int = 0; // 0x1759 PushI
	var_187_bool = var_177_int > var_186_int; // 0x175a GT
	if(var_187_bool == 0) goto Label_5988; // 0x175b JumpB
	var_188_string = "Money"; // 0x175c PushS
	GetInvItemByName(var_179_int, var_188_string); // 0x175d Func
	var_189_int = 0; var_190_int = 0; // 0x175f PushV
	var_189_int = var_179_int; // 0x1760 Mov
	var_190_int = var_177_int; // 0x1761 Mov
	func_5958(var_189_int, var_190_int); // 0x1762 NEW_2
	
Label_5988:
	return 2; // 0x1764 Return
}


func_6996()
{
	var_162_object = Obj(); var_163_object = Obj(); // 0x1b54 PushV
	var_164_int = 233; // 0x1b55 PushI
	var_165_int = 2; // 0x1b56 PushI
	var_166_int = 519661; // 0x1b57 PushI
	CreateDiaryEntry(var_163_object, var_164_int, var_165_int, var_166_int); // 0x1b58 Func
	var_167_bool = 0; var_168_object = Obj(); var_169_int = 0; // 0x1b5a PushV
	var_168_object = var_163_object; // 0x1b5b Mov
	var_169_int = 227; // 0x1b5c MovI
	func_7074(var_167_bool, var_168_object, var_169_int); // 0x1b5d NEW_2
	return 2; // 0x1b5f Return
}


func_6489(var_173_object)
{
	var_175_string = "money3000 is given"; // 0x195a PushS
	Trace(var_175_string); // 0x195b Func
	var_176_object = Obj(); var_177_int = 0; // 0x195d PushV
	var_176_object = var_173_object; // 0x195e Mov
	var_177_int = 3000; // 0x195f MovI
	func_5970(var_176_object, var_177_int); // 0x1960 NEW_2
	return 0; // 0x1962 Return
}


func_865(var_2_object, var_956_string)
{
	var_957_bool = 0; // 0x362 PushV
	func_6093(var_957_bool); // 0x363 NEW_2
	var_958_bool = var_957_bool == 0; // 0x365 Not
	if(var_958_bool == 0) goto Label_872; // 0x366 JumpB
	return 0; // 0x367 Return
	
Label_872:
	var_959_bool = var_956_string == var_2_object; // 0x368 Eq
	if(var_959_bool == 0) goto Label_875; // 0x369 JumpB
	return 0; // 0x36a Return
	
Label_875:
	var_960_string = ""; var_961_bool = 0; // 0x36b PushV
	var_960_string = var_956_string; // 0x36c Mov
	var_962_string = ""; // 0x36d PushS
	var_963_bool = var_956_string == var_962_string; // 0x36e Eq
	if(var_963_bool == 0) goto Label_882; // 0x36f JumpB
	var_961_bool = 0; // 0x370 MovB
	goto Label_883; // 0x371 Jump
	
Label_883:
	func_5889(var_960_string, var_961_bool); // 0x373 NEW_2
	var_2_object = var_956_string; // 0x375 TMov
	return 0; // 0x376 Return
	
Label_882:
	var_961_bool = 1; // 0x372 MovB
}


func_7009()
{
	var_104_object = Obj(); var_105_object = Obj(); // 0x1b61 PushV
	var_106_int = 228; // 0x1b62 PushI
	var_107_int = 2; // 0x1b63 PushI
	var_108_int = 519656; // 0x1b64 PushI
	CreateDiaryEntry(var_105_object, var_106_int, var_107_int, var_108_int); // 0x1b65 Func
	var_109_bool = 0; var_110_object = Obj(); var_111_int = 0; // 0x1b67 PushV
	var_110_object = var_105_object; // 0x1b68 Mov
	var_111_int = 227; // 0x1b69 MovI
	func_7074(var_109_bool, var_110_object, var_111_int); // 0x1b6a NEW_2
	return 2; // 0x1b6c Return
}


func_6499()
{
	var_59_string = "resque_list"; // 0x1964 PushS
	var_60_int = 1; // 0x1965 PushI
	SetVariable(var_59_string, var_60_int); // 0x1966 Func
	func_7239(); // 0x1969 NEW_2
	return 0; // 0x196b Return
}


func_1380(var_2_object, var_1037_string)
{
	var_1038_bool = 0; // 0x565 PushV
	func_6093(var_1038_bool); // 0x566 NEW_2
	var_1039_bool = var_1038_bool == 0; // 0x568 Not
	if(var_1039_bool == 0) goto Label_1387; // 0x569 JumpB
	return 0; // 0x56a Return
	
Label_1387:
	var_1040_bool = var_1037_string == var_2_object; // 0x56b Eq
	if(var_1040_bool == 0) goto Label_1390; // 0x56c JumpB
	return 0; // 0x56d Return
	
Label_1390:
	var_1041_string = ""; var_1042_bool = 0; // 0x56e PushV
	var_1041_string = var_1037_string; // 0x56f Mov
	var_1043_string = ""; // 0x570 PushS
	var_1044_bool = var_1037_string == var_1043_string; // 0x571 Eq
	if(var_1044_bool == 0) goto Label_1397; // 0x572 JumpB
	var_1042_bool = 0; // 0x573 MovB
	goto Label_1398; // 0x574 Jump
	
Label_1398:
	func_5889(var_1041_string, var_1042_bool); // 0x576 NEW_2
	var_2_object = var_1037_string; // 0x578 TMov
	return 0; // 0x579 Return
	
Label_1397:
	var_1042_bool = 1; // 0x575 MovB
}


func_5989(var_131_object, var_132_int)
{
	var_133_int = 0; var_134_int = 0; var_135_bool = 0; var_136_int = 0; var_137_int = 0; var_138_bool = 0; // 0x1765 PushV
	GetItemID(var_136_int); // 0x1766 ObjFunc
	var_139_string = "Category"; // 0x1768 PushS
	GetInvItemProperty(var_137_int, var_136_int, var_139_string); // 0x1769 Func
	AddItem(var_138_bool, var_131_object, var_137_int, var_132_int); // 0x176b ObjFunc
	var_140_bool = var_138_bool == 0; // 0x176d Not
	if(var_140_bool == 0) goto Label_6002; // 0x176e JumpB
	DropItems(var_131_object, var_132_int); // 0x176f ObjFunc
	goto Label_6007; // 0x1771 Jump
	
Label_6007:
	return 6; // 0x1777 Return
	
Label_6002:
	var_141_int = 0; var_142_int = 0; // 0x1772 PushV
	var_141_int = var_136_int; // 0x1773 Mov
	var_142_int = var_132_int; // 0x1774 Mov
	func_5958(var_141_int, var_142_int); // 0x1775 NEW_2
}


func_6508()
{
	var_97_int = 2000; // 0x196d PushI
	SetReturnValue(var_97_int); // 0x196e ObjFunc
	return 0; // 0x1970 Return
}


func_7022()
{
	var_77_object = Obj(); var_78_object = Obj(); // 0x1b6e PushV
	var_79_int = 532; // 0x1b6f PushI
	var_80_int = 2; // 0x1b70 PushI
	var_81_int = 530344; // 0x1b71 PushI
	CreateDiaryEntry(var_78_object, var_79_int, var_80_int, var_81_int); // 0x1b72 Func
	var_82_bool = 0; var_83_object = Obj(); var_84_int = 0; // 0x1b74 PushV
	var_83_object = var_78_object; // 0x1b75 Mov
	var_84_int = -1; // 0x1b76 MovI
	func_7074(var_82_bool, var_83_object, var_84_int); // 0x1b77 NEW_2
	return 2; // 0x1b79 Return
}


func_6513()
{
	var_65_object = Obj(); var_66_object = Obj(); // 0x1971 PushV
	var_67_object = Obj(); // 0x1972 PushV
	func_7102(var_67_object); // 0x1973 NEW_2
	var_66_object = var_67_object; // 0x1974 Mov
	var_74_string = "b3q02KapellaGotoNotkin"; // 0x1976 PushS
	var_75_string = "pt_map_notkin"; // 0x1977 PushS
	var_76_int = 0; // 0x1978 PushI
	var_77_int = 519652; // 0x1979 PushI
	var_78_float = 0; // 0x197a PushV
	func_6033(var_78_float); // 0x197b NEW_2
	AddMark(var_74_string, var_75_string, var_76_int, var_77_int, var_78_float); // 0x197d ObjFunc
	func_6983(); // 0x1980 NEW_2
	func_7009(); // 0x1983 NEW_2
	var_112_object = Obj(); var_113_string = ""; // 0x1985 PushV
	var_113_string = "quest_b3_02"; // 0x1986 MovS
	func_5947(var_112_object, var_113_string); // 0x1987 NEW_2
	var_120_bool = 0; var_121_string = ""; var_122_string = ""; // 0x1989 PushV
	var_121_string = "quest_b3_02"; // 0x198a MovS
	var_122_string = "place_grabitel1"; // 0x198b MovS
	func_6021(var_120_bool, var_121_string, var_122_string); // 0x198c NEW_2
	return 2; // 0x198e Return
}


func_6008(var_125_object, var_126_string, var_127_int)
{
	var_128_object = Obj(); var_129_object = Obj(); // 0x1778 PushV
	CreateInvItem(var_129_object); // 0x1779 Func
	SetItemName(var_126_string); // 0x177b ObjFunc
	var_130_object = Obj(); var_131_object = Obj(); var_132_int = 0; // 0x177d PushV
	var_130_object = var_125_object; // 0x177e Mov
	var_131_object = var_129_object; // 0x177f Mov
	var_132_int = var_127_int; // 0x1780 Mov
	func_5989(var_131_object, var_132_int); // 0x1781 NEW_2
	return 2; // 0x1783 Return
}


func_7035()
{
	var_156_object = Obj(); var_157_object = Obj(); // 0x1b7b PushV
	var_158_int = 541; // 0x1b7c PushI
	var_159_int = 2; // 0x1b7d PushI
	var_160_int = 530353; // 0x1b7e PushI
	CreateDiaryEntry(var_157_object, var_158_int, var_159_int, var_160_int); // 0x1b7f Func
	var_161_bool = 0; var_162_object = Obj(); var_163_int = 0; // 0x1b81 PushV
	var_162_object = var_157_object; // 0x1b82 Mov
	var_163_int = 532; // 0x1b83 MovI
	func_7074(var_161_bool, var_162_object, var_163_int); // 0x1b84 NEW_2
	return 2; // 0x1b86 Return
}


func_4477(var_0_object, var_1_object, var_2_object, var_3_string, var_820_object, var_821_object)
{
	var_0_object = var_821_object; // 0x117e TMov
	var_1_object = var_820_object; // 0x117f TMov
	var_3_string = 0; // 0x1180 TMovB
	var_826_int = 1; // 0x1181 PushI
	if(var_826_int == 0) goto Label_4584; // 0x1182 JumpB
	var_827_bool = 0; var_828_object = Obj(); // 0x1183 PushV
	var_828_object = var_1_object; // 0x1184 MovT
	func_6762(var_828_object); // 0x1185 NEW_2
	if(var_827_bool == 0) goto Label_4513; // 0x1187 JumpB
	var_833_object = Obj(); var_834_object = Obj(); // 0x1188 PushV
	var_833_object = var_1_object; // 0x1189 MovT
	var_834_object = var_0_object; // 0x118a MovT
	func_6396(); // 0x118b NEW_2
	var_837_object = Obj(); var_838_object = Obj(); // 0x118d PushV
	var_837_object = var_1_object; // 0x118e MovT
	var_838_object = var_0_object; // 0x118f MovT
	func_6432(); // 0x1190 NEW_2
	var_841_string = ""; // 0x1192 PushV
	var_841_string = "Neutral"; // 0x1193 MovS
	func_4614(var_821_object, var_841_string); // 0x1194 NEW_2
	var_849_int = 531154; // 0x1196 PushI
	SetMessage(var_849_int); // 0x1197 TObjFunc
	ClearReplies(); // 0x1199 TObjFunc
	var_850_int = 531276; // 0x119b PushI
	var_851_int = 32591; // 0x119c PushI
	var_852_int = 32590; // 0x119d PushI
	AddReply(var_850_int, var_851_int, var_852_int); // 0x119e TObjFunc
	goto Label_4584; // 0x11a0 Jump
	
Label_4584:
	var_853_bool = 0; // 0x11e8 PushV
	func_6093(var_853_bool); // 0x11e9 NEW_2
	if(var_853_bool == 0) goto Label_4599; // 0x11eb JumpB
	
Label_4588:
	lshWaitForAnimEnd(); // 0x11ec Func
	var_854_string = var_3_string; // 0x11ee PushT
	if(var_854_string == 0) goto Label_4593; // 0x11ef JumpB
	goto Label_4598; // 0x11f0 Jump
	
Label_4598:
	goto Label_4613; // 0x11f6 Jump
	
Label_4613:
	return 0; // 0x1205 Return
	
Label_4593:
	var_855_string = ""; // 0x11f1 PushV
	var_855_string = var_2_object; // 0x11f2 MovT
	func_5873(var_855_string); // 0x11f3 NEW_2
	goto Label_4588; // 0x11f5 Jump
	
Label_4599:
	var_856_string = "all"; // 0x11f7 PushS
	var_857_string = "idle"; // 0x11f8 PushS
	PlayAnimation(var_856_string, var_857_string); // 0x11f9 Func
	
Label_4603:
	WaitForAnimEnd(); // 0x11fb Func
	var_858_string = var_3_string; // 0x11fd PushT
	if(var_858_string == 0) goto Label_4608; // 0x11fe JumpB
	goto Label_4613; // 0x11ff Jump
	
Label_4608:
	var_859_string = "all"; // 0x1200 PushS
	var_860_string = "idle"; // 0x1201 PushS
	PlayAnimation(var_859_string, var_860_string); // 0x1202 Func
	goto Label_4603; // 0x1204 Jump
	
Label_4513:
	var_861_string = ""; // 0x11a1 PushV
	var_861_string = "Neutral"; // 0x11a2 MovS
	func_4614(var_821_object, var_861_string); // 0x11a3 NEW_2
	var_862_int = 521924; // 0x11a5 PushI
	SetMessage(var_862_int); // 0x11a6 TObjFunc
	ClearReplies(); // 0x11a8 TObjFunc
	var_863_bool = 0; // 0x11aa PushV
	var_863_bool = 0; // 0x11ab MovB
	var_864_bool = 0; var_865_object = Obj(); // 0x11ac PushV
	var_865_object = var_1_object; // 0x11ad MovT
	func_6596(var_865_object); // 0x11ae NEW_2
	if(var_864_bool == 0) goto Label_4536; // 0x11b0 JumpB
	var_870_bool = 0; var_871_object = Obj(); // 0x11b1 PushV
	var_871_object = var_1_object; // 0x11b2 MovT
	func_6608(var_871_object); // 0x11b3 NEW_2
	var_876_bool = var_870_bool == 0; // 0x11b5 Not
	if(var_876_bool == 0) goto Label_4536; // 0x11b6 JumpB
	var_863_bool = 1; // 0x11b7 MovB
	
Label_4536:
	if(var_863_bool == 0) goto Label_4542; // 0x11b8 JumpB
	var_877_int = 521925; // 0x11b9 PushI
	var_878_int = 23656; // 0x11ba PushI
	var_879_int = 23099; // 0x11bb PushI
	AddReply(var_877_int, var_878_int, var_879_int); // 0x11bc TObjFunc
	
Label_4542:
	var_880_bool = 0; // 0x11be PushV
	var_880_bool = 0; // 0x11bf MovB
	var_881_bool = 0; var_882_object = Obj(); // 0x11c0 PushV
	var_882_object = var_1_object; // 0x11c1 MovT
	func_6714(var_882_object); // 0x11c2 NEW_2
	if(var_881_bool == 0) goto Label_4555; // 0x11c4 JumpB
	var_887_bool = 0; var_888_object = Obj(); // 0x11c5 PushV
	var_888_object = var_1_object; // 0x11c6 MovT
	func_6620(var_888_object); // 0x11c7 NEW_2
	if(var_887_bool == 0) goto Label_4555; // 0x11c9 JumpB
	var_880_bool = 1; // 0x11ca MovB
	
Label_4555:
	if(var_880_bool == 0) goto Label_4561; // 0x11cb JumpB
	var_893_int = 530448; // 0x11cc PushI
	var_894_int = 31815; // 0x11cd PushI
	var_895_int = 31814; // 0x11ce PushI
	AddReply(var_893_int, var_894_int, var_895_int); // 0x11cf TObjFunc
	
Label_4561:
	var_896_bool = 0; var_897_object = Obj(); // 0x11d1 PushV
	var_897_object = var_1_object; // 0x11d2 MovT
	func_6774(var_897_object); // 0x11d3 NEW_2
	if(var_896_bool == 0) goto Label_4571; // 0x11d5 JumpB
	var_902_int = 531159; // 0x11d6 PushI
	var_903_int = 32468; // 0x11d7 PushI
	var_904_int = 32467; // 0x11d8 PushI
	AddReply(var_902_int, var_903_int, var_904_int); // 0x11d9 TObjFunc
	
Label_4571:
	var_905_int = 521926; // 0x11db PushI
	var_906_int = -1; // 0x11dc PushI
	var_907_int = 23100; // 0x11dd PushI
	AddReply(var_905_int, var_906_int, var_907_int); // 0x11de TObjFunc
	var_908_int = 531282; // 0x11e0 PushI
	var_909_int = -1; // 0x11e1 PushI
	var_910_int = 32597; // 0x11e2 PushI
	AddReply(var_908_int, var_909_int, var_910_int); // 0x11e3 TObjFunc
	goto Label_4584; // 0x11e5 Jump
}


func_3967(var_0_object, var_1_object, var_2_object, var_3_string, var_595_object, var_596_object)
{
	var_0_object = var_596_object; // 0xf80 TMov
	var_1_object = var_595_object; // 0xf81 TMov
	var_3_string = 0; // 0xf82 TMovB
	var_601_int = 1; // 0xf83 PushI
	if(var_601_int == 0) goto Label_4034; // 0xf84 JumpB
	var_602_bool = 0; var_603_object = Obj(); // 0xf85 PushV
	var_603_object = var_1_object; // 0xf86 MovT
	func_6572(var_603_object); // 0xf87 NEW_2
	if(var_602_bool == 0) goto Label_3998; // 0xf89 JumpB
	var_608_object = Obj(); var_609_object = Obj(); // 0xf8a PushV
	var_608_object = var_1_object; // 0xf8b MovT
	var_609_object = var_0_object; // 0xf8c MovT
	func_6154(); // 0xf8d NEW_2
	var_612_string = ""; // 0xf8f PushV
	var_612_string = "Sympathy"; // 0xf90 MovS
	func_4064(var_596_object, var_612_string); // 0xf91 NEW_2
	var_620_int = 521388; // 0xf93 PushI
	SetMessage(var_620_int); // 0xf94 TObjFunc
	ClearReplies(); // 0xf96 TObjFunc
	var_621_int = 521389; // 0xf98 PushI
	var_622_int = 25279; // 0xf99 PushI
	var_623_int = 22567; // 0xf9a PushI
	AddReply(var_621_int, var_622_int, var_623_int); // 0xf9b TObjFunc
	goto Label_4034; // 0xf9d Jump
	
Label_4034:
	var_624_bool = 0; // 0xfc2 PushV
	func_6093(var_624_bool); // 0xfc3 NEW_2
	if(var_624_bool == 0) goto Label_4049; // 0xfc5 JumpB
	
Label_4038:
	lshWaitForAnimEnd(); // 0xfc6 Func
	var_625_string = var_3_string; // 0xfc8 PushT
	if(var_625_string == 0) goto Label_4043; // 0xfc9 JumpB
	goto Label_4048; // 0xfca Jump
	
Label_4048:
	goto Label_4063; // 0xfd0 Jump
	
Label_4063:
	return 0; // 0xfdf Return
	
Label_4043:
	var_626_string = ""; // 0xfcb PushV
	var_626_string = var_2_object; // 0xfcc MovT
	func_5873(var_626_string); // 0xfcd NEW_2
	goto Label_4038; // 0xfcf Jump
	
Label_4049:
	var_627_string = "all"; // 0xfd1 PushS
	var_628_string = "idle"; // 0xfd2 PushS
	PlayAnimation(var_627_string, var_628_string); // 0xfd3 Func
	
Label_4053:
	WaitForAnimEnd(); // 0xfd5 Func
	var_629_string = var_3_string; // 0xfd7 PushT
	if(var_629_string == 0) goto Label_4058; // 0xfd8 JumpB
	goto Label_4063; // 0xfd9 Jump
	
Label_4058:
	var_630_string = "all"; // 0xfda PushS
	var_631_string = "idle"; // 0xfdb PushS
	PlayAnimation(var_630_string, var_631_string); // 0xfdc Func
	goto Label_4053; // 0xfde Jump
	
Label_3998:
	var_632_string = ""; // 0xf9e PushV
	var_632_string = "Neutral"; // 0xf9f MovS
	func_4064(var_596_object, var_632_string); // 0xfa0 NEW_2
	var_633_int = 521390; // 0xfa2 PushI
	SetMessage(var_633_int); // 0xfa3 TObjFunc
	ClearReplies(); // 0xfa5 TObjFunc
	var_634_bool = 0; // 0xfa7 PushV
	var_634_bool = 0; // 0xfa8 MovB
	var_635_bool = 0; var_636_object = Obj(); // 0xfa9 PushV
	var_636_object = var_1_object; // 0xfaa MovT
	func_6560(var_636_object); // 0xfab NEW_2
	if(var_635_bool == 0) goto Label_4020; // 0xfad JumpB
	var_641_bool = 0; var_642_object = Obj(); // 0xfae PushV
	var_642_object = var_1_object; // 0xfaf MovT
	func_6584(var_642_object); // 0xfb0 NEW_2
	if(var_641_bool == 0) goto Label_4020; // 0xfb2 JumpB
	var_634_bool = 1; // 0xfb3 MovB
	
Label_4020:
	if(var_634_bool == 0) goto Label_4026; // 0xfb4 JumpB
	var_647_int = 521391; // 0xfb5 PushI
	var_648_int = 22570; // 0xfb6 PushI
	var_649_int = 22569; // 0xfb7 PushI
	AddReply(var_647_int, var_648_int, var_649_int); // 0xfb8 TObjFunc
	
Label_4026:
	var_650_int = 521394; // 0xfba PushI
	var_651_int = -1; // 0xfbb PushI
	var_652_int = 22572; // 0xfbc PushI
	AddReply(var_650_int, var_651_int, var_652_int); // 0xfbd TObjFunc
	goto Label_4034; // 0xfbf Jump
}


func_1922(var_0_object, var_465_int, var_466_object)
{
	var_468_object = Obj(); var_469_bool = 0; var_470_int = 0; var_471_bool = 0; var_472_object = Obj(); var_473_bool = 0; var_474_int = 0; var_475_bool = 0; // 0x782 PushV
	var_0_object = var_466_object; // 0x783 TMov
	var_476_bool = 0; var_477_object = Obj(); var_478_float = 0; // 0x784 PushV
	var_477_object = var_466_object; // 0x785 Mov
	var_478_float = 70.0; // 0x786 MovF
	func_5650(var_477_object, var_478_float); // 0x787 NEW_2
	var_479_bool = var_476_bool == 0; // 0x789 Not
	if(var_479_bool == 0) goto Label_1933; // 0x78a JumpB
	var_465_int = -2; // 0x78b MovI
	return 8; // 0x78c Return
	
Label_1933:
	CreateDialog(var_472_object); // 0x78d Func
	var_480_int = 0; // 0x78f PushV
	func_6087(var_480_int); // 0x790 NEW_2
	SetNPCName(var_480_int); // 0x792 ObjFunc
	var_481_int = 0; // 0x794 PushV
	func_6085(var_481_int); // 0x795 NEW_2
	SetNPCDescription(var_481_int); // 0x797 ObjFunc
	var_482_string = ""; // 0x799 PushV
	func_6089(var_482_string); // 0x79a NEW_2
	SetPhoto(var_482_string); // 0x79c ObjFunc
	var_483_string = ""; // 0x79e PushV
	func_6091(var_483_string); // 0x79f NEW_2
	SetPhoto2(var_483_string); // 0x7a1 ObjFunc
	var_484_int = 0; // 0x7a3 PushV
	func_7152(var_484_int); // 0x7a4 NEW_2
	SetPlayerName(var_484_int); // 0x7a6 ObjFunc
	var_474_int = -1; // 0x7a8 MovI
	IsOverrideActive(var_473_bool); // 0x7a9 Func
	var_485_bool = var_473_bool; // 0x7ab Push
	if(var_485_bool == 0) goto Label_1967; // 0x7ac JumpB
	var_465_int = -2; // 0x7ad MovI
	return 8; // 0x7ae Return
	
Label_1967:
	DoDialog(var_472_object); // 0x7af Func
	var_486_bool = 0; var_487_object = Obj(); // 0x7b1 PushV
	var_488_object = Obj(); // 0x7b2 PushV
	func_5926(var_488_object); // 0x7b3 NEW_2
	var_487_object = var_488_object; // 0x7b4 Mov
	func_5735(var_486_bool, var_487_object); // 0x7b6 NEW_2
	var_489_object = Obj(); var_490_object = Obj(); // 0x7b8 PushV
	var_489_object = var_466_object; // 0x7b9 Mov
	var_490_object = var_472_object; // 0x7ba Mov
	TaskCall(9); // 0x7bb TaskCall
	func_2003(var_491_object, var_492_object, var_493_string, var_494_bool, var_489_object, var_490_object); // 0x7bc NEW_2
	TaskReturn(); // 0x7bd TaskReturn
	IsDialogEnd(var_475_bool); // 0x7bf ObjFunc
	
Label_1985:
	var_567_bool = var_475_bool == 0; // 0x7c1 Not
	if(var_567_bool == 0) goto Label_1992; // 0x7c2 JumpB
	sync(); // 0x7c3 Func
	IsDialogEnd(var_475_bool); // 0x7c5 ObjFunc
	goto Label_1985; // 0x7c7 Jump
	
Label_1992:
	var_568_object = Obj(); // 0x7c8 PushV
	var_568_object = var_466_object; // 0x7c9 Mov
	func_5718(); // 0x7ca NEW_2
	StopDialog(var_472_object); // 0x7cc Func
	GetReturnValue(var_474_int); // 0x7ce ObjFunc
	var_465_int = var_474_int; // 0x7d0 Mov
	return 8; // 0x7d1 Return
}


func_6021(var_120_bool, var_121_string, var_122_string)
{
	var_123_object = Obj(); var_124_object = Obj(); // 0x1785 PushV
	FindActor(var_124_object, var_121_string); // 0x1786 Func
	var_125_bool = var_124_object == 0; // 0x1788 NullEq
	if(var_125_bool == 0) goto Label_6028; // 0x1789 JumpB
	var_120_bool = 0; // 0x178a MovB
	return 2; // 0x178b Return
	
Label_6028:
	Trigger(var_124_object, var_122_string); // 0x178c Func
	var_120_bool = 1; // 0x178e MovB
	return 2; // 0x178f Return
}


func_7048()
{
	var_100_object = Obj(); var_101_object = Obj(); // 0x1b88 PushV
	var_102_int = 533; // 0x1b89 PushI
	var_103_int = 2; // 0x1b8a PushI
	var_104_int = 530345; // 0x1b8b PushI
	CreateDiaryEntry(var_101_object, var_102_int, var_103_int, var_104_int); // 0x1b8c Func
	var_105_bool = 0; var_106_object = Obj(); var_107_int = 0; // 0x1b8e PushV
	var_106_object = var_101_object; // 0x1b8f Mov
	var_107_int = 532; // 0x1b90 MovI
	func_7074(var_105_bool, var_106_object, var_107_int); // 0x1b91 NEW_2
	return 2; // 0x1b93 Return
}


func_6544()
{
	var_59_string = "oob3Kapella1"; // 0x1991 PushS
	var_60_int = 1; // 0x1992 PushI
	SetVariable(var_59_string, var_60_int); // 0x1993 Func
	return 0; // 0x1995 Return
}


func_6033(var_74_float)
{
	var_75_float = 0; var_76_float = 0; // 0x1791 PushV
	GetGameTime(var_76_float); // 0x1792 Func
	var_74_float = var_76_float; // 0x1794 Mov
	return 2; // 0x1795 Return
}


func_7061(var_91_object)
{
	var_92_object = Obj(); var_93_object = Obj(); // 0x1b95 PushV
	GetDiaryRoot(var_93_object); // 0x1b96 Func
	var_94_bool = var_93_object == 0; // 0x1b98 Not
	if(var_94_bool == 0) goto Label_7071; // 0x1b99 JumpB
	var_95_string = "Can't retrieve diary root"; // 0x1b9a PushS
	Trace(var_95_string); // 0x1b9b Func
	var_91_object = 0; // 0x1b9d MovB
	return 2; // 0x1b9e Return
	
Label_7071:
	var_91_object = var_93_object; // 0x1b9f Mov
	return 2; // 0x1ba0 Return
}


func_6550()
{
	func_6996(); // 0x1998 NEW_2
	var_170_bool = 0; var_171_string = ""; var_172_string = ""; // 0x199a PushV
	var_171_string = "quest_b3_02"; // 0x199b MovS
	var_172_string = "completed"; // 0x199c MovS
	func_6021(var_170_bool, var_171_string, var_172_string); // 0x199d NEW_2
	return 0; // 0x199f Return
}


func_6038(var_198_int)
{
	var_199_float = 0; var_200_float = 0; // 0x1796 PushV
	GetGameTime(var_200_float); // 0x1797 Func
	var_201_int = 1; // 0x1799 PushI
	var_202_int = 0; // 0x179a PushV
	var_203_int = 24; // 0x179b PushI
	var_202_int = var_200_float / var_200_float; // 0x179c Div2
	var_198_int = var_201_int + var_202_int; // 0x179d Add2
	return 2; // 0x179e Return
}


func_5535()
{
	var_56_int = 0; var_57_int = 0; var_58_bool = 0; var_59_int = 0; var_60_int = 0; var_61_bool = 0; var_62_int = 0; var_63_int = 0; var_64_bool = 0; var_65_int = 0; var_66_int = 0; var_67_bool = 0; // 0x159f PushV
	WaitForAnimEnd(); // 0x15a0 Func
	var_68_bool = 0; // 0x15a2 PushV
	func_5645(var_68_bool); // 0x15a3 NEW_2
	var_69_bool = var_68_bool == 0; // 0x15a5 Not
	if(var_69_bool == 0) goto Label_5544; // 0x15a6 JumpB
	return 12; // 0x15a7 Return
	
Label_5544:
	var_70_int = 0; // 0x15a8 PushV
	func_6068(var_70_int); // 0x15a9 NEW_2
	var_62_int = var_70_int; // 0x15aa Mov
	var_63_int = 0; // 0x15ac MovI
	
Label_5549:
	var_83_bool = 0; // 0x15ad PushV
	var_83_bool = 0; // 0x15ae MovB
	var_84_int = 5; // 0x15af PushI
	var_85_bool = var_63_int < var_84_int; // 0x15b0 LT
	if(var_85_bool == 0) goto Label_5559; // 0x15b1 JumpB
	var_86_bool = 0; // 0x15b2 PushV
	func_5645(var_86_bool); // 0x15b3 NEW_2
	if(var_86_bool == 0) goto Label_5559; // 0x15b5 JumpB
	var_83_bool = 1; // 0x15b6 MovB
	
Label_5559:
	if(var_83_bool == 0) goto Label_5601; // 0x15b7 JumpB
	var_87_bool = var_62_int == 0; // 0x15b8 Not
	if(var_87_bool == 0) goto Label_5569; // 0x15b9 JumpB
	var_88_int = 3; // 0x15ba PushI
	Sleep(var_88_int, var_64_bool); // 0x15bb Func
	var_89_bool = var_64_bool == 0; // 0x15bd Not
	if(var_89_bool == 0) goto Label_5568; // 0x15be JumpB
	goto Label_5601; // 0x15bf Jump
	
Label_5601:
	ResetAAS(); // 0x15e1 Func
	return 12; // 0x15e3 Return
	
Label_5568:
	goto Label_5590; // 0x15c0 Jump
	
Label_5590:
	var_90_bool = 0; // 0x15d6 PushV
	func_5604(var_90_bool); // 0x15d7 NEW_2
	var_91_bool = var_90_bool == 0; // 0x15d9 Not
	if(var_91_bool == 0) goto Label_5596; // 0x15da JumpB
	goto Label_5601; // 0x15db Jump
	
Label_5596:
	ResetAAS(); // 0x15dc Func
	var_92_int = 1; // 0x15de PushI
	var_63_int = var_63_int + var_92_int; // 0x15df Add2
	goto Label_5549; // 0x15e0 Jump
	
Label_5569:
	irand(var_65_int, var_62_int); // 0x15c1 Func
	var_93_int = 5; // 0x15c3 PushI
	irand(var_66_int, var_93_int); // 0x15c4 Func
	var_94_int = 0; // 0x15c6 PushI
	var_95_bool = var_66_int != var_94_int; // 0x15c7 Neq
	if(var_95_bool == 0) goto Label_5578; // 0x15c8 JumpB
	var_65_int = 0; // 0x15c9 MovI
	
Label_5578:
	var_96_string = "all"; // 0x15ca PushS
	var_97_string = ""; var_98_int = 0; // 0x15cb PushV
	var_98_int = var_65_int; // 0x15cc Mov
	func_6061(var_97_string, var_98_int); // 0x15cd NEW_2
	PlayAnimation(var_96_string, var_97_string); // 0x15cf Func
	WaitForAnimEnd(var_67_bool); // 0x15d1 Func
	var_99_bool = var_67_bool == 0; // 0x15d3 Not
	if(var_99_bool == 0) goto Label_5590; // 0x15d4 JumpB
	goto Label_5601; // 0x15d5 Jump
}


func_6560(var_635_bool)
{
	var_637_int = 0; var_638_string = ""; // 0x19a1 PushV
	var_638_string = "b8q01"; // 0x19a2 MovS
	func_5942(var_637_int, var_638_string); // 0x19a3 NEW_2
	var_639_int = 2; // 0x19a5 PushI
	var_640_bool = var_637_int == var_639_int; // 0x19a6 Eq
	if(var_640_bool == 0) goto Label_6570; // 0x19a7 JumpB
	var_635_bool = 1; // 0x19a8 MovB
	return 0; // 0x19a9 Return
	
Label_6570:
	var_635_bool = 0; // 0x19aa MovB
	return 0; // 0x19ab Return
}


func_6047(var_708_int)
{
	var_709_float = 0; var_710_float = 0; // 0x179f PushV
	GetGameTime(var_710_float); // 0x17a0 Func
	var_711_int = 0; // 0x17a2 PushV
	var_711_int = var_710_float; // 0x17a3 Mov
	var_712_int = 24; // 0x17a4 PushI
	var_708_int = var_711_int % var_712_int; // 0x17a5 Mod2
	return 2; // 0x17a6 Return
}


func_7074(var_82_bool, var_83_object, var_84_int)
{
	var_85_object = Obj(); var_86_object = Obj(); var_87_int = 0; var_88_object = Obj(); var_89_object = Obj(); var_90_int = 0; // 0x1ba2 PushV
	var_91_object = Obj(); // 0x1ba3 PushV
	func_7061(var_91_object); // 0x1ba4 NEW_2
	var_88_object = var_91_object; // 0x1ba5 Mov
	Find(var_84_int, var_89_object); // 0x1ba7 ObjFunc
	var_96_bool = var_89_object == 0; // 0x1ba9 Not
	if(var_96_bool == 0) goto Label_7089; // 0x1baa JumpB
	var_97_string = "Can't find diary parent with id: "; // 0x1bab PushS
	var_98_int = var_97_string + var_84_int; // 0x1bac Add
	Trace(var_98_int); // 0x1bad Func
	var_82_bool = 0; // 0x1baf MovB
	return 6; // 0x1bb0 Return
	
Label_7089:
	AddChild(var_83_object); // 0x1bb1 ObjFunc
	var_99_int = 7; // 0x1bb3 PushI
	SendWorldWndMessage(var_99_int); // 0x1bb4 Func
	GetCategory(var_90_int); // 0x1bb6 ObjFunc
	SetDiarySection(var_90_int); // 0x1bb8 Func
	var_82_bool = 0; // 0x1bba MovB
	return 6; // 0x1bbb Return
}


func_6055(var_296_bool, var_297_int)
{
	var_298_int = 0; // 0x17a8 PushV
	func_6038(var_298_int); // 0x17a9 NEW_2
	var_296_bool = var_298_int == var_297_int; // 0x17ab Eq2
	return 0; // 0x17ac Return
}


func_6572(var_602_bool)
{
	var_604_int = 0; var_605_string = ""; // 0x19ad PushV
	var_605_string = "oob8Kapella1"; // 0x19ae MovS
	func_5942(var_604_int, var_605_string); // 0x19af NEW_2
	var_606_int = 0; // 0x19b1 PushI
	var_607_bool = var_604_int == var_606_int; // 0x19b2 Eq
	if(var_607_bool == 0) goto Label_6582; // 0x19b3 JumpB
	var_602_bool = 1; // 0x19b4 MovB
	return 0; // 0x19b5 Return
	
Label_6582:
	var_602_bool = 0; // 0x19b6 MovB
	return 0; // 0x19b7 Return
}


func_6061(var_76_string, var_77_int)
{
	var_78_string = ""; var_79_string = ""; // 0x17ad PushV
	var_79_string = "idle"; // 0x17ae MovS
	var_80_int = var_77_int; // 0x17af Push
	if(var_80_int == 0) goto Label_6066; // 0x17b0 JumpB
	var_79_string = var_79_string + var_77_int; // 0x17b1 Add2
	
Label_6066:
	var_76_string = var_79_string; // 0x17b2 Mov
	return 2; // 0x17b3 Return
}


func_6068(var_70_int)
{
	var_71_int = 0; var_72_bool = 0; var_73_int = 0; var_74_bool = 0; // 0x17b4 PushV
	var_73_int = 0; // 0x17b5 MovI
	
Label_6070:
	var_75_string = "all"; // 0x17b6 PushS
	var_76_string = ""; var_77_int = 0; // 0x17b7 PushV
	var_77_int = var_73_int; // 0x17b8 Mov
	func_6061(var_76_string, var_77_int); // 0x17b9 NEW_2
	HasAnimation(var_74_bool, var_75_string, var_76_string); // 0x17bb Func
	var_81_bool = var_74_bool == 0; // 0x17bd Not
	if(var_81_bool == 0) goto Label_6080; // 0x17be JumpB
	goto Label_6083; // 0x17bf Jump
	
Label_6083:
	var_70_int = var_73_int; // 0x17c3 Mov
	return 4; // 0x17c4 Return
	
Label_6080:
	var_82_int = 1; // 0x17c0 PushI
	var_73_int = var_73_int + var_82_int; // 0x17c1 Add2
	goto Label_6070; // 0x17c2 Jump
}


func_6584(var_641_bool)
{
	var_643_int = 0; var_644_string = ""; // 0x19b9 PushV
	var_644_string = "oob8Kapella2"; // 0x19ba MovS
	func_5942(var_643_int, var_644_string); // 0x19bb NEW_2
	var_645_int = 0; // 0x19bd PushI
	var_646_bool = var_643_int == var_645_int; // 0x19be Eq
	if(var_646_bool == 0) goto Label_6594; // 0x19bf JumpB
	var_641_bool = 1; // 0x19c0 MovB
	return 0; // 0x19c1 Return
	
Label_6594:
	var_641_bool = 0; // 0x19c2 MovB
	return 0; // 0x19c3 Return
}


func_7102(var_63_object)
{
	var_64_object = Obj(); var_65_object = Obj(); var_66_object = Obj(); var_67_object = Obj(); // 0x1bbe PushV
	GetMainOutdoorScene(var_66_object); // 0x1bbf Func
	var_68_bool = var_66_object == 0; // 0x1bc1 NullEq
	if(var_68_bool == 0) goto Label_7113; // 0x1bc2 JumpB
	var_69_string = "Can't find main outdoor scene"; // 0x1bc3 PushS
	Trace(var_69_string); // 0x1bc4 Func
	var_67_object = 0; // 0x1bc6 SetNull
	var_63_object = var_67_object; // 0x1bc7 Mov
	return 4; // 0x1bc8 Return
	
Label_7113:
	GetMap(var_67_object); // 0x1bc9 ObjFunc
	var_63_object = var_67_object; // 0x1bcb Mov
	return 4; // 0x1bcc Return
}


func_6596(var_864_bool)
{
	var_866_int = 0; var_867_string = ""; // 0x19c5 PushV
	var_867_string = "b10q01"; // 0x19c6 MovS
	func_5942(var_866_int, var_867_string); // 0x19c7 NEW_2
	var_868_int = 4; // 0x19c9 PushI
	var_869_bool = var_866_int == var_868_int; // 0x19ca Eq
	if(var_869_bool == 0) goto Label_6606; // 0x19cb JumpB
	var_864_bool = 1; // 0x19cc MovB
	return 0; // 0x19cd Return
	
Label_6606:
	var_864_bool = 0; // 0x19ce MovB
	return 0; // 0x19cf Return
}


func_6085(var_131_int)
{
	var_131_int = 515538; // 0x17c5 MovI
	return 0; // 0x17c6 Return
}


func_6087(var_130_int)
{
	var_130_int = 502863; // 0x17c7 MovI
	return 0; // 0x17c8 Return
}


func_6089(var_132_string)
{
	var_132_string = "ui/NPC_Kapella.png"; // 0x17c9 MovS
	return 0; // 0x17ca Return
}


func_6091(var_133_string)
{
	var_133_string = "ui/NPC_Kapella_b.png"; // 0x17cb MovS
	return 0; // 0x17cc Return
}


func_6093(var_125_bool)
{
	var_125_bool = 1; // 0x17cd MovB
	return 0; // 0x17ce Return
}


func_6095()
{
	var_128_object = Obj(); var_129_string = ""; var_130_float = 0; // 0x17d0 PushV
	var_131_object = Obj(); // 0x17d1 PushV
	func_7102(var_131_object); // 0x17d2 NEW_2
	var_128_object = var_131_object; // 0x17d3 Mov
	var_129_string = "pt_map_notkin"; // 0x17d5 MovS
	var_130_float = 2; // 0x17d6 MovI
	func_7119(var_128_object, var_129_string, var_130_float); // 0x17d7 NEW_2
	var_151_object = Obj(); // 0x17d9 PushV
	func_7102(var_151_object); // 0x17da NEW_2
	ShowMap(var_151_object); // 0x17dc ObjFunc
	return 0; // 0x17de Return
}


func_6608(var_870_bool)
{
	var_872_int = 0; var_873_string = ""; // 0x19d1 PushV
	var_873_string = "b10q01TalkKapella"; // 0x19d2 MovS
	func_5942(var_872_int, var_873_string); // 0x19d3 NEW_2
	var_874_int = 1; // 0x19d5 PushI
	var_875_bool = var_872_int == var_874_int; // 0x19d6 Eq
	if(var_875_bool == 0) goto Label_6618; // 0x19d7 JumpB
	var_870_bool = 1; // 0x19d8 MovB
	return 0; // 0x19d9 Return
	
Label_6618:
	var_870_bool = 0; // 0x19da MovB
	return 0; // 0x19db Return
}


func_7119(var_152_object, var_153_string, var_154_float)
{
	var_156_cvector = CVector(0,0,0); var_157_cvector = CVector(0,0,0); var_158_object = Obj(); var_159_bool = 0; var_160_cvector = CVector(0,0,0); var_161_cvector = CVector(0,0,0); var_162_object = Obj(); var_163_bool = 0; // 0x1bcf PushV
	GetMainOutdoorScene(var_162_object); // 0x1bd0 Func
	var_164_bool = var_162_object == 0; // 0x1bd2 NullEq
	if(var_164_bool == 0) goto Label_7128; // 0x1bd3 JumpB
	var_165_string = "Can't find main outdoor scene"; // 0x1bd4 PushS
	Trace(var_165_string); // 0x1bd5 Func
	return 8; // 0x1bd7 Return
	
Label_7128:
	GetLocator(var_153_string, var_163_bool, var_160_cvector, var_161_cvector); // 0x1bd8 ObjFunc
	var_166_bool = var_163_bool == 0; // 0x1bda Not
	if(var_166_bool == 0) goto Label_7138; // 0x1bdb JumpB
	var_167_string = "Warning: outdoor scene locator "; // 0x1bdc PushS
	var_168_int = var_167_string + var_153_string; // 0x1bdd Add
	var_169_string = " doesnt exist"; // 0x1bde PushS
	var_170_int = var_168_int + var_169_string; // 0x1bdf Add
	Trace(var_170_int); // 0x1be0 Func
	
Label_7138:
	GetMap(var_152_object); // 0x1be2 ObjFunc
	var_171_bool = var_152_object == 0; // 0x1be4 NullEq
	if(var_171_bool == 0) goto Label_7146; // 0x1be5 JumpB
	var_172_string = "Can't find map"; // 0x1be6 PushS
	Trace(var_172_string); // 0x1be7 Func
	return 8; // 0x1be9 Return
	
Label_7146:
	var_173_float = GetByIndex(var_160_cvector, 0); // 0x1bea PushE
	var_174_float = GetByIndex(var_160_cvector, 2); // 0x1beb PushE
	SetMapParams(var_173_float, var_174_float, var_154_float); // 0x1bec ObjFunc
	return 8; // 0x1bee Return
}


func_2003(var_0_object, var_1_object, var_2_object, var_3_string, var_489_object, var_490_object)
{
	var_0_object = var_490_object; // 0x7d4 TMov
	var_1_object = var_489_object; // 0x7d5 TMov
	var_3_string = 0; // 0x7d6 TMovB
	var_495_int = 1; // 0x7d7 PushI
	if(var_495_int == 0) goto Label_2100; // 0x7d8 JumpB
	var_496_object = Obj(); var_497_object = Obj(); // 0x7d9 PushV
	var_496_object = var_1_object; // 0x7da MovT
	var_497_object = var_0_object; // 0x7db MovT
	func_6315(); // 0x7dc NEW_2
	var_500_string = ""; // 0x7de PushV
	var_500_string = "Neutral"; // 0x7df MovS
	func_2130(var_490_object, var_500_string); // 0x7e0 NEW_2
	var_508_int = 518365; // 0x7e2 PushI
	SetMessage(var_508_int); // 0x7e3 TObjFunc
	ClearReplies(); // 0x7e5 TObjFunc
	var_509_bool = 0; var_510_object = Obj(); // 0x7e7 PushV
	var_510_object = var_1_object; // 0x7e8 MovT
	func_6810(var_510_object); // 0x7e9 NEW_2
	if(var_509_bool == 0) goto Label_2033; // 0x7eb JumpB
	var_515_int = 518366; // 0x7ec PushI
	var_516_int = 19481; // 0x7ed PushI
	var_517_int = 19479; // 0x7ee PushI
	AddReply(var_515_int, var_516_int, var_517_int); // 0x7ef TObjFunc
	
Label_2033:
	var_518_bool = 0; // 0x7f1 PushV
	var_518_bool = 0; // 0x7f2 MovB
	var_519_bool = 0; var_520_object = Obj(); // 0x7f3 PushV
	var_520_object = var_1_object; // 0x7f4 MovT
	func_6810(var_520_object); // 0x7f5 NEW_2
	var_521_bool = var_519_bool == 0; // 0x7f7 Not
	if(var_521_bool == 0) goto Label_2047; // 0x7f8 JumpB
	var_522_bool = 0; var_523_object = Obj(); // 0x7f9 PushV
	var_523_object = var_1_object; // 0x7fa MovT
	func_6798(var_523_object); // 0x7fb NEW_2
	if(var_522_bool == 0) goto Label_2047; // 0x7fd JumpB
	var_518_bool = 1; // 0x7fe MovB
	
Label_2047:
	if(var_518_bool == 0) goto Label_2053; // 0x7ff JumpB
	var_528_int = 518371; // 0x800 PushI
	var_529_int = 19485; // 0x801 PushI
	var_530_int = 19484; // 0x802 PushI
	AddReply(var_528_int, var_529_int, var_530_int); // 0x803 TObjFunc
	
Label_2053:
	var_531_bool = 0; // 0x805 PushV
	var_531_bool = 0; // 0x806 MovB
	var_532_bool = 0; var_533_object = Obj(); // 0x807 PushV
	var_533_object = var_1_object; // 0x808 MovT
	func_6822(var_533_object); // 0x809 NEW_2
	if(var_532_bool == 0) goto Label_2066; // 0x80b JumpB
	var_538_bool = 0; var_539_object = Obj(); // 0x80c PushV
	var_539_object = var_1_object; // 0x80d MovT
	func_6834(var_539_object); // 0x80e NEW_2
	if(var_538_bool == 0) goto Label_2066; // 0x810 JumpB
	var_531_bool = 1; // 0x811 MovB
	
Label_2066:
	if(var_531_bool == 0) goto Label_2072; // 0x812 JumpB
	var_544_int = 518374; // 0x813 PushI
	var_545_int = 19488; // 0x814 PushI
	var_546_int = 19487; // 0x815 PushI
	AddReply(var_544_int, var_545_int, var_546_int); // 0x816 TObjFunc
	
Label_2072:
	var_547_bool = 0; // 0x818 PushV
	var_547_bool = 0; // 0x819 MovB
	var_548_bool = 0; var_549_object = Obj(); // 0x81a PushV
	var_549_object = var_1_object; // 0x81b MovT
	func_6822(var_549_object); // 0x81c NEW_2
	if(var_548_bool == 0) goto Label_2086; // 0x81e JumpB
	var_550_bool = 0; var_551_object = Obj(); // 0x81f PushV
	var_551_object = var_1_object; // 0x820 MovT
	func_6834(var_551_object); // 0x821 NEW_2
	var_552_bool = var_550_bool == 0; // 0x823 Not
	if(var_552_bool == 0) goto Label_2086; // 0x824 JumpB
	var_547_bool = 1; // 0x825 MovB
	
Label_2086:
	if(var_547_bool == 0) goto Label_2092; // 0x826 JumpB
	var_553_int = 518377; // 0x827 PushI
	var_554_int = 19491; // 0x828 PushI
	var_555_int = 19490; // 0x829 PushI
	AddReply(var_553_int, var_554_int, var_555_int); // 0x82a TObjFunc
	
Label_2092:
	var_556_int = 518367; // 0x82c PushI
	var_557_int = -1; // 0x82d PushI
	var_558_int = 19480; // 0x82e PushI
	AddReply(var_556_int, var_557_int, var_558_int); // 0x82f TObjFunc
	goto Label_2100; // 0x831 Jump
	
Label_2100:
	var_559_bool = 0; // 0x834 PushV
	func_6093(var_559_bool); // 0x835 NEW_2
	if(var_559_bool == 0) goto Label_2115; // 0x837 JumpB
	
Label_2104:
	lshWaitForAnimEnd(); // 0x838 Func
	var_560_string = var_3_string; // 0x83a PushT
	if(var_560_string == 0) goto Label_2109; // 0x83b JumpB
	goto Label_2114; // 0x83c Jump
	
Label_2114:
	goto Label_2129; // 0x842 Jump
	
Label_2129:
	return 0; // 0x851 Return
	
Label_2109:
	var_561_string = ""; // 0x83d PushV
	var_561_string = var_2_object; // 0x83e MovT
	func_5873(var_561_string); // 0x83f NEW_2
	goto Label_2104; // 0x841 Jump
	
Label_2115:
	var_562_string = "all"; // 0x843 PushS
	var_563_string = "idle"; // 0x844 PushS
	PlayAnimation(var_562_string, var_563_string); // 0x845 Func
	
Label_2119:
	WaitForAnimEnd(); // 0x847 Func
	var_564_string = var_3_string; // 0x849 PushT
	if(var_564_string == 0) goto Label_2124; // 0x84a JumpB
	goto Label_2129; // 0x84b Jump
	
Label_2124:
	var_565_string = "all"; // 0x84c PushS
	var_566_string = "idle"; // 0x84d PushS
	PlayAnimation(var_565_string, var_566_string); // 0x84e Func
	goto Label_2119; // 0x850 Jump
}


func_6620(var_887_bool)
{
	var_889_int = 0; var_890_string = ""; // 0x19dd PushV
	var_890_string = "oob10Kapella1"; // 0x19de MovS
	func_5942(var_889_int, var_890_string); // 0x19df NEW_2
	var_891_int = 0; // 0x19e1 PushI
	var_892_bool = var_889_int == var_891_int; // 0x19e2 Eq
	if(var_892_bool == 0) goto Label_6630; // 0x19e3 JumpB
	var_887_bool = 1; // 0x19e4 MovB
	return 0; // 0x19e5 Return
	
Label_6630:
	var_887_bool = 0; // 0x19e6 MovB
	return 0; // 0x19e7 Return
}


func_6111()
{
	var_373_string = "oob1Kapella1"; // 0x17e0 PushS
	var_374_int = 1; // 0x17e1 PushI
	SetVariable(var_373_string, var_374_int); // 0x17e2 Func
	return 0; // 0x17e4 Return
}


func_4064(var_2_object, var_612_string)
{
	var_613_bool = 0; // 0xfe1 PushV
	func_6093(var_613_bool); // 0xfe2 NEW_2
	var_614_bool = var_613_bool == 0; // 0xfe4 Not
	if(var_614_bool == 0) goto Label_4071; // 0xfe5 JumpB
	return 0; // 0xfe6 Return
	
Label_4071:
	var_615_bool = var_612_string == var_2_object; // 0xfe7 Eq
	if(var_615_bool == 0) goto Label_4074; // 0xfe8 JumpB
	return 0; // 0xfe9 Return
	
Label_4074:
	var_616_string = ""; var_617_bool = 0; // 0xfea PushV
	var_616_string = var_612_string; // 0xfeb Mov
	var_618_string = ""; // 0xfec PushS
	var_619_bool = var_612_string == var_618_string; // 0xfed Eq
	if(var_619_bool == 0) goto Label_4081; // 0xfee JumpB
	var_617_bool = 0; // 0xfef MovB
	goto Label_4082; // 0xff0 Jump
	
Label_4082:
	func_5889(var_616_string, var_617_bool); // 0xff2 NEW_2
	var_2_object = var_612_string; // 0xff4 TMov
	return 0; // 0xff5 Return
	
Label_4081:
	var_617_bool = 1; // 0xff1 MovB
}


func_5604(var_90_bool)
{
	var_90_bool = 1; // 0x15e4 MovB
	return 0; // 0x15e5 Return
}


func_6117()
{
	var_130_string = "oob1Kapella3"; // 0x17e6 PushS
	var_131_int = 1; // 0x17e7 PushI
	SetVariable(var_130_string, var_131_int); // 0x17e8 Func
	return 0; // 0x17ea Return
}


func_5606()
{
	StopAnimation(); // 0x15e6 Func
	StopGroup0(); // 0x15e8 Func
	return 0; // 0x15ea Return
}


func_6632(var_690_bool)
{
	var_692_int = 0; var_693_string = ""; // 0x19e9 PushV
	var_693_string = "b9q03AglajaTalk"; // 0x19ea MovS
	func_5942(var_692_int, var_693_string); // 0x19eb NEW_2
	var_694_int = 0; // 0x19ed PushI
	var_695_bool = var_692_int != var_694_int; // 0x19ee Neq
	if(var_695_bool == 0) goto Label_6642; // 0x19ef JumpB
	var_690_bool = 1; // 0x19f0 MovB
	return 0; // 0x19f1 Return
	
Label_6642:
	var_690_bool = 0; // 0x19f2 MovB
	return 0; // 0x19f3 Return
}


func_6123()
{
	var_134_object = Obj(); var_135_object = Obj(); // 0x17eb PushV
	var_136_object = Obj(); // 0x17ec PushV
	func_7102(var_136_object); // 0x17ed NEW_2
	var_135_object = var_136_object; // 0x17ee Mov
	var_143_string = "b1KapellaGotoLaska"; // 0x17f0 PushS
	var_144_string = "pt_map_laska"; // 0x17f1 PushS
	var_145_int = 3; // 0x17f2 PushI
	var_146_int = 520037; // 0x17f3 PushI
	var_147_float = 0; // 0x17f4 PushV
	func_6033(var_147_float); // 0x17f5 NEW_2
	AddMark(var_143_string, var_144_string, var_145_int, var_146_int, var_147_float); // 0x17f7 ObjFunc
	var_150_string = "b1KapellaGotoNotkin"; // 0x17f9 PushS
	var_151_string = "pt_map_notkin"; // 0x17fa PushS
	var_152_int = 3; // 0x17fb PushI
	var_153_int = 520038; // 0x17fc PushI
	var_154_float = 0; // 0x17fd PushV
	func_6033(var_154_float); // 0x17fe NEW_2
	AddMark(var_150_string, var_151_string, var_152_int, var_153_int, var_154_float); // 0x1800 ObjFunc
	return 2; // 0x1802 Return
}


func_5611(var_66_float)
{
	var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); var_73_cvector = CVector(0,0,0); // 0x15eb PushV
	GetPosition(var_71_cvector); // 0x15ec Func
	GetPosition(var_72_cvector); // 0x15ee ObjFunc
	var_73_cvector = var_72_cvector - var_71_cvector; // 0x15f0 Sub2
	var_66_float = var_73_cvector | var_73_cvector; // 0x15f1 Or2
	return 6; // 0x15f2 Return
}


func_7152(var_134_int)
{
	var_135_int = 0; var_136_int = 0; // 0x1bf0 PushV
	var_137_string = "branch"; // 0x1bf1 PushS
	GetVariable(var_137_string, var_136_int); // 0x1bf2 Func
	var_138_int = 0; // 0x1bf4 PushI
	var_139_bool = var_136_int == var_138_int; // 0x1bf5 Eq
	if(var_139_bool == 0) goto Label_7162; // 0x1bf6 JumpB
	var_134_int = 1; // 0x1bf7 MovI
	return 2; // 0x1bf8 Return
	
Label_7162:
	var_140_int = 1; // 0x1bfa PushI
	var_141_bool = var_136_int == var_140_int; // 0x1bfb Eq
	if(var_141_bool == 0) goto Label_7167; // 0x1bfc JumpB
	var_134_int = 2; // 0x1bfd MovI
	return 2; // 0x1bfe Return
	
Label_7167:
	var_134_int = 3; // 0x1bff MovI
	return 2; // 0x1c00 Return
}


func_5619(var_181_string, var_182_int)
{
	var_183_int = 0; var_184_int = 0; // 0x15f3 PushV
	GetProperty(var_181_string, var_184_int); // 0x15f4 ObjFunc
	var_185_int = var_184_int + var_182_int; // 0x15f6 Add
	SetProperty(var_181_string, var_185_int); // 0x15f7 ObjFunc
	return 2; // 0x15f9 Return
}


func_6644(var_739_bool)
{
	var_741_int = 0; var_742_string = ""; // 0x19f5 PushV
	var_742_string = "oob9Kapella1"; // 0x19f6 MovS
	func_5942(var_741_int, var_742_string); // 0x19f7 NEW_2
	var_743_int = 0; // 0x19f9 PushI
	var_744_bool = var_741_int == var_743_int; // 0x19fa Eq
	if(var_744_bool == 0) goto Label_6654; // 0x19fb JumpB
	var_739_bool = 1; // 0x19fc MovB
	return 0; // 0x19fd Return
	
Label_6654:
	var_739_bool = 0; // 0x19fe MovB
	return 0; // 0x19ff Return
}


func_5626(var_59_bool, var_60_cvector)
{
	var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0); var_63_bool = 0; var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); var_66_bool = 0; // 0x15fa PushV
	GetPosition(var_64_cvector); // 0x15fb Func
	var_65_cvector = var_60_cvector - var_64_cvector; // 0x15fd Sub2
	var_67_float = GetByIndex(var_65_cvector, 0); // 0x15fe PushE
	var_68_float = GetByIndex(var_65_cvector, 2); // 0x15ff PushE
	Rotate(var_67_float, var_68_float, var_66_bool); // 0x1600 Func
	var_59_bool = var_66_bool; // 0x1602 Mov
	return 6; // 0x1603 Return
}


