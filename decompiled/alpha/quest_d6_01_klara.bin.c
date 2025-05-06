task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool)
{
	var_8_int = 1; // 0x102 PushI
	if(var_8_int == 0) goto Label_1145; // 0x103 JumpB
	func_1282(); // 0x105 Call
	var_10_int = 13943; // 0x107 PushI
	var_11_bool = var_7_bool == var_10_int; // 0x108 Eq
	if(var_11_bool == 0) goto Label_271; // 0x109 JumpB
	var_12_object = Obj(); var_13_object = Obj(); // 0x10a PushV
	var_12_object = var_1_object; // 0x10b MovT
	var_13_object = var_0_object; // 0x10c MovT
	func_1374(); // 0x10d Call
	
Label_271:
	var_16_int = 3807; // 0x10f PushI
	var_17_bool = var_7_bool == var_16_int; // 0x110 Eq
	if(var_17_bool == 0) goto Label_284; // 0x111 JumpB
	var_18_object = Obj(); var_19_object = Obj(); // 0x112 PushV
	var_18_object = var_1_object; // 0x113 MovT
	var_19_object = var_0_object; // 0x114 MovT
	func_1348(var_19_object); // 0x115 Call
	var_62_object = Obj(); var_63_object = Obj(); // 0x117 PushV
	var_62_object = var_1_object; // 0x118 MovT
	var_63_object = var_0_object; // 0x119 MovT
	func_1362(); // 0x11a Call
	
Label_284:
	var_66_int = 3812; // 0x11c PushI
	var_67_bool = var_7_bool == var_66_int; // 0x11d Eq
	if(var_67_bool == 0) goto Label_297; // 0x11e JumpB
	var_68_object = Obj(); var_69_object = Obj(); // 0x11f PushV
	var_68_object = var_1_object; // 0x120 MovT
	var_69_object = var_0_object; // 0x121 MovT
	func_1348(var_69_object); // 0x122 Call
	var_70_object = Obj(); var_71_object = Obj(); // 0x124 PushV
	var_70_object = var_1_object; // 0x125 MovT
	var_71_object = var_0_object; // 0x126 MovT
	func_1362(); // 0x127 Call
	
Label_297:
	var_72_int = 13944; // 0x129 PushI
	var_73_bool = var_7_bool == var_72_int; // 0x12a Eq
	if(var_73_bool == 0) goto Label_305; // 0x12b JumpB
	var_74_object = Obj(); var_75_object = Obj(); // 0x12c PushV
	var_74_object = var_1_object; // 0x12d MovT
	var_75_object = var_0_object; // 0x12e MovT
	func_1523(); // 0x12f Call
	
Label_305:
	var_78_int = 11873; // 0x131 PushI
	var_79_bool = var_7_bool == var_78_int; // 0x132 Eq
	if(var_79_bool == 0) goto Label_313; // 0x133 JumpB
	var_80_object = Obj(); var_81_object = Obj(); // 0x134 PushV
	var_80_object = var_1_object; // 0x135 MovT
	var_81_object = var_0_object; // 0x136 MovT
	func_1380(); // 0x137 Call
	
Label_313:
	var_149_int = 13931; // 0x139 PushI
	var_150_bool = var_6_int == var_149_int; // 0x13a Eq
	if(var_150_bool == 0) goto Label_456; // 0x13b JumpB
	var_151_bool = 0; // 0x13c PushV
	var_151_bool = 1; // 0x13d MovB
	var_152_bool = 0; // 0x13e PushV
	var_152_bool = 0; // 0x13f MovB
	var_153_bool = 0; var_154_object = Obj(); // 0x140 PushV
	var_154_object = var_1_object; // 0x141 MovT
	func_1565(var_154_object); // 0x142 Call
	if(var_153_bool == 0) goto Label_331; // 0x144 JumpB
	var_161_bool = 0; var_162_object = Obj(); // 0x145 PushV
	var_162_object = var_1_object; // 0x146 MovT
	func_1529(var_162_object); // 0x147 Call
	if(var_161_bool == 0) goto Label_331; // 0x149 JumpB
	var_152_bool = 1; // 0x14a MovB
	
Label_331:
	if(var_152_bool == 0) goto Label_347; // 0x14b JumpB
	var_167_bool = 0; // 0x14c PushV
	var_167_bool = 0; // 0x14d MovB
	var_168_bool = 0; var_169_object = Obj(); // 0x14e PushV
	var_169_object = var_1_object; // 0x14f MovT
	func_1541(var_169_object); // 0x150 Call
	if(var_168_bool == 0) goto Label_345; // 0x152 JumpB
	var_174_bool = 0; var_175_object = Obj(); // 0x153 PushV
	var_175_object = var_1_object; // 0x154 MovT
	func_1565(var_175_object); // 0x155 Call
	if(var_174_bool == 0) goto Label_345; // 0x157 JumpB
	var_167_bool = 1; // 0x158 MovB
	
Label_345:
	if(var_167_bool == 0) goto Label_347; // 0x159 JumpB
	var_151_bool = 0; // 0x15a MovB
	
Label_347:
	if(var_151_bool == 0) goto Label_378; // 0x15b JumpB
	var_176_object = Obj(); var_177_object = Obj(); // 0x15c PushV
	var_176_object = var_1_object; // 0x15d MovT
	var_177_object = var_0_object; // 0x15e MovT
	func_1368(); // 0x15f Call
	var_180_string = ""; // 0x161 PushV
	var_180_string = "Neutral"; // 0x162 MovS
	func_241(var_7_bool, var_180_string); // 0x163 Call
	var_195_int = 12737; // 0x165 PushI
	SetMessage(var_195_int); // 0x166 TObjFunc
	ClearReplies(); // 0x168 TObjFunc
	var_196_int = 12738; // 0x16a PushI
	var_197_int = 13933; // 0x16b PushI
	var_198_int = 13932; // 0x16c PushI
	AddReply(var_196_int, var_197_int, var_198_int); // 0x16d TObjFunc
	var_199_int = 12744; // 0x16f PushI
	var_200_int = 13965; // 0x170 PushI
	var_201_int = 13938; // 0x171 PushI
	AddReply(var_199_int, var_200_int, var_201_int); // 0x172 TObjFunc
	var_202_int = 12745; // 0x174 PushI
	var_203_int = 13954; // 0x175 PushI
	var_204_int = 13939; // 0x176 PushI
	AddReply(var_202_int, var_203_int, var_204_int); // 0x177 TObjFunc
	return 0; // 0x179 Return
	
Label_378:
	var_205_bool = 0; // 0x17a PushV
	var_205_bool = 1; // 0x17b MovB
	var_206_bool = 0; var_207_object = Obj(); // 0x17c PushV
	var_207_object = var_1_object; // 0x17d MovT
	func_1577(var_207_object); // 0x17e Call
	if(var_206_bool == 0) goto Label_391; // 0x180 JumpB
	var_212_bool = 0; var_213_object = Obj(); // 0x181 PushV
	var_213_object = var_1_object; // 0x182 MovT
	func_1553(var_213_object); // 0x183 Call
	if(var_212_bool == 0) goto Label_391; // 0x185 JumpB
	var_205_bool = 0; // 0x186 MovB
	
Label_391:
	if(var_205_bool == 0) goto Label_456; // 0x187 JumpB
	var_218_string = ""; // 0x188 PushV
	var_218_string = "Neutral"; // 0x189 MovS
	func_241(var_7_bool, var_218_string); // 0x18a Call
	var_219_int = 12748; // 0x18c PushI
	SetMessage(var_219_int); // 0x18d TObjFunc
	ClearReplies(); // 0x18f TObjFunc
	var_220_bool = 0; var_221_object = Obj(); // 0x191 PushV
	var_221_object = var_1_object; // 0x192 MovT
	func_1589(var_221_object); // 0x193 Call
	if(var_220_bool == 0) goto Label_411; // 0x195 JumpB
	var_226_int = 12749; // 0x196 PushI
	var_227_int = 3753; // 0x197 PushI
	var_228_int = 13943; // 0x198 PushI
	AddReply(var_226_int, var_227_int, var_228_int); // 0x199 TObjFunc
	
Label_411:
	var_229_bool = 0; // 0x19b PushV
	var_229_bool = 0; // 0x19c MovB
	var_230_bool = 0; // 0x19d PushV
	var_230_bool = 0; // 0x19e MovB
	var_231_bool = 0; // 0x19f PushV
	var_231_bool = 0; // 0x1a0 MovB
	var_232_bool = 0; var_233_object = Obj(); // 0x1a1 PushV
	var_233_object = var_1_object; // 0x1a2 MovT
	func_1637(var_233_object); // 0x1a3 Call
	if(var_232_bool == 0) goto Label_428; // 0x1a5 JumpB
	var_238_bool = 0; var_239_object = Obj(); // 0x1a6 PushV
	var_239_object = var_1_object; // 0x1a7 MovT
	func_1601(var_239_object); // 0x1a8 Call
	if(var_238_bool == 0) goto Label_428; // 0x1aa JumpB
	var_231_bool = 1; // 0x1ab MovB
	
Label_428:
	if(var_231_bool == 0) goto Label_436; // 0x1ac JumpB
	var_244_bool = 0; var_245_object = Obj(); // 0x1ad PushV
	var_245_object = var_1_object; // 0x1ae MovT
	func_1613(var_245_object); // 0x1af Call
	var_250_bool = var_244_bool == 0; // 0x1b1 Not
	if(var_250_bool == 0) goto Label_436; // 0x1b2 JumpB
	var_230_bool = 1; // 0x1b3 MovB
	
Label_436:
	if(var_230_bool == 0) goto Label_444; // 0x1b4 JumpB
	var_251_bool = 0; var_252_object = Obj(); // 0x1b5 PushV
	var_252_object = var_1_object; // 0x1b6 MovT
	func_1625(var_252_object); // 0x1b7 Call
	var_257_bool = var_251_bool == 0; // 0x1b9 Not
	if(var_257_bool == 0) goto Label_444; // 0x1ba JumpB
	var_229_bool = 1; // 0x1bb MovB
	
Label_444:
	if(var_229_bool == 0) goto Label_450; // 0x1bc JumpB
	var_258_int = 12750; // 0x1bd PushI
	var_259_int = 11864; // 0x1be PushI
	var_260_int = 13944; // 0x1bf PushI
	AddReply(var_258_int, var_259_int, var_260_int); // 0x1c0 TObjFunc
	
Label_450:
	var_261_int = 12769; // 0x1c2 PushI
	var_262_int = -1; // 0x1c3 PushI
	var_263_int = 13968; // 0x1c4 PushI
	AddReply(var_261_int, var_262_int, var_263_int); // 0x1c5 TObjFunc
	return 0; // 0x1c7 Return
	
Label_456:
	var_264_int = 11864; // 0x1c8 PushI
	var_265_bool = var_6_int == var_264_int; // 0x1c9 Eq
	if(var_265_bool == 0) goto Label_479; // 0x1ca JumpB
	var_266_string = ""; // 0x1cb PushV
	var_266_string = "Neutral"; // 0x1cc MovS
	func_241(var_7_bool, var_266_string); // 0x1cd Call
	var_267_int = 10739; // 0x1cf PushI
	SetMessage(var_267_int); // 0x1d0 TObjFunc
	ClearReplies(); // 0x1d2 TObjFunc
	var_268_int = 10740; // 0x1d4 PushI
	var_269_int = 11866; // 0x1d5 PushI
	var_270_int = 11865; // 0x1d6 PushI
	AddReply(var_268_int, var_269_int, var_270_int); // 0x1d7 TObjFunc
	var_271_int = 10752; // 0x1d9 PushI
	var_272_int = 11866; // 0x1da PushI
	var_273_int = 11879; // 0x1db PushI
	AddReply(var_271_int, var_272_int, var_273_int); // 0x1dc TObjFunc
	return 0; // 0x1de Return
	
Label_479:
	var_274_int = 11866; // 0x1df PushI
	var_275_bool = var_6_int == var_274_int; // 0x1e0 Eq
	if(var_275_bool == 0) goto Label_502; // 0x1e1 JumpB
	var_276_string = ""; // 0x1e2 PushV
	var_276_string = "Neutral"; // 0x1e3 MovS
	func_241(var_7_bool, var_276_string); // 0x1e4 Call
	var_277_int = 10741; // 0x1e6 PushI
	SetMessage(var_277_int); // 0x1e7 TObjFunc
	ClearReplies(); // 0x1e9 TObjFunc
	var_278_int = 10742; // 0x1eb PushI
	var_279_int = 11868; // 0x1ec PushI
	var_280_int = 11867; // 0x1ed PushI
	AddReply(var_278_int, var_279_int, var_280_int); // 0x1ee TObjFunc
	var_281_int = 10751; // 0x1f0 PushI
	var_282_int = 11870; // 0x1f1 PushI
	var_283_int = 11877; // 0x1f2 PushI
	AddReply(var_281_int, var_282_int, var_283_int); // 0x1f3 TObjFunc
	return 0; // 0x1f5 Return
	
Label_502:
	var_284_int = 11868; // 0x1f6 PushI
	var_285_bool = var_6_int == var_284_int; // 0x1f7 Eq
	if(var_285_bool == 0) goto Label_530; // 0x1f8 JumpB
	var_286_string = ""; // 0x1f9 PushV
	var_286_string = "Neutral"; // 0x1fa MovS
	func_241(var_7_bool, var_286_string); // 0x1fb Call
	var_287_int = 10743; // 0x1fd PushI
	SetMessage(var_287_int); // 0x1fe TObjFunc
	ClearReplies(); // 0x200 TObjFunc
	var_288_int = 10744; // 0x202 PushI
	var_289_int = 11870; // 0x203 PushI
	var_290_int = 11869; // 0x204 PushI
	AddReply(var_288_int, var_289_int, var_290_int); // 0x205 TObjFunc
	var_291_int = 10749; // 0x207 PushI
	var_292_int = 11870; // 0x208 PushI
	var_293_int = 11874; // 0x209 PushI
	AddReply(var_291_int, var_292_int, var_293_int); // 0x20a TObjFunc
	var_294_int = 10750; // 0x20c PushI
	var_295_int = -1; // 0x20d PushI
	var_296_int = 11876; // 0x20e PushI
	AddReply(var_294_int, var_295_int, var_296_int); // 0x20f TObjFunc
	return 0; // 0x211 Return
	
Label_530:
	var_297_int = 11870; // 0x212 PushI
	var_298_bool = var_6_int == var_297_int; // 0x213 Eq
	if(var_298_bool == 0) goto Label_558; // 0x214 JumpB
	var_299_string = ""; // 0x215 PushV
	var_299_string = "Neutral"; // 0x216 MovS
	func_241(var_7_bool, var_299_string); // 0x217 Call
	var_300_int = 10745; // 0x219 PushI
	SetMessage(var_300_int); // 0x21a TObjFunc
	ClearReplies(); // 0x21c TObjFunc
	var_301_int = 10746; // 0x21e PushI
	var_302_int = -1; // 0x21f PushI
	var_303_int = 11871; // 0x220 PushI
	AddReply(var_301_int, var_302_int, var_303_int); // 0x221 TObjFunc
	var_304_int = 10747; // 0x223 PushI
	var_305_int = -1; // 0x224 PushI
	var_306_int = 11872; // 0x225 PushI
	AddReply(var_304_int, var_305_int, var_306_int); // 0x226 TObjFunc
	var_307_int = 10748; // 0x228 PushI
	var_308_int = -1; // 0x229 PushI
	var_309_int = 11873; // 0x22a PushI
	AddReply(var_307_int, var_308_int, var_309_int); // 0x22b TObjFunc
	return 0; // 0x22d Return
	
Label_558:
	var_310_int = 3753; // 0x22e PushI
	var_311_bool = var_6_int == var_310_int; // 0x22f Eq
	if(var_311_bool == 0) goto Label_586; // 0x230 JumpB
	var_312_string = ""; // 0x231 PushV
	var_312_string = "Neutral"; // 0x232 MovS
	func_241(var_7_bool, var_312_string); // 0x233 Call
	var_313_int = 3483; // 0x235 PushI
	SetMessage(var_313_int); // 0x236 TObjFunc
	ClearReplies(); // 0x238 TObjFunc
	var_314_int = 3484; // 0x23a PushI
	var_315_int = 3756; // 0x23b PushI
	var_316_int = 3754; // 0x23c PushI
	AddReply(var_314_int, var_315_int, var_316_int); // 0x23d TObjFunc
	var_317_int = 3485; // 0x23f PushI
	var_318_int = 3778; // 0x240 PushI
	var_319_int = 3755; // 0x241 PushI
	AddReply(var_317_int, var_318_int, var_319_int); // 0x242 TObjFunc
	var_320_int = 3508; // 0x244 PushI
	var_321_int = 3763; // 0x245 PushI
	var_322_int = 3783; // 0x246 PushI
	AddReply(var_320_int, var_321_int, var_322_int); // 0x247 TObjFunc
	return 0; // 0x249 Return
	
Label_586:
	var_323_int = 3778; // 0x24a PushI
	var_324_bool = var_6_int == var_323_int; // 0x24b Eq
	if(var_324_bool == 0) goto Label_609; // 0x24c JumpB
	var_325_string = ""; // 0x24d PushV
	var_325_string = "Neutral"; // 0x24e MovS
	func_241(var_7_bool, var_325_string); // 0x24f Call
	var_326_int = 3505; // 0x251 PushI
	SetMessage(var_326_int); // 0x252 TObjFunc
	ClearReplies(); // 0x254 TObjFunc
	var_327_int = 3506; // 0x256 PushI
	var_328_int = 3775; // 0x257 PushI
	var_329_int = 3779; // 0x258 PushI
	AddReply(var_327_int, var_328_int, var_329_int); // 0x259 TObjFunc
	var_330_int = 3507; // 0x25b PushI
	var_331_int = 3763; // 0x25c PushI
	var_332_int = 3781; // 0x25d PushI
	AddReply(var_330_int, var_331_int, var_332_int); // 0x25e TObjFunc
	return 0; // 0x260 Return
	
Label_609:
	var_333_int = 3756; // 0x261 PushI
	var_334_bool = var_6_int == var_333_int; // 0x262 Eq
	if(var_334_bool == 0) goto Label_642; // 0x263 JumpB
	var_335_string = ""; // 0x264 PushV
	var_335_string = "Neutral"; // 0x265 MovS
	func_241(var_7_bool, var_335_string); // 0x266 Call
	var_336_int = 3486; // 0x268 PushI
	SetMessage(var_336_int); // 0x269 TObjFunc
	ClearReplies(); // 0x26b TObjFunc
	var_337_int = 3487; // 0x26d PushI
	var_338_int = 3775; // 0x26e PushI
	var_339_int = 3757; // 0x26f PushI
	AddReply(var_337_int, var_338_int, var_339_int); // 0x270 TObjFunc
	var_340_int = 3488; // 0x272 PushI
	var_341_int = 3770; // 0x273 PushI
	var_342_int = 3758; // 0x274 PushI
	AddReply(var_340_int, var_341_int, var_342_int); // 0x275 TObjFunc
	var_343_int = 3489; // 0x277 PushI
	var_344_int = 3760; // 0x278 PushI
	var_345_int = 3759; // 0x279 PushI
	AddReply(var_343_int, var_344_int, var_345_int); // 0x27a TObjFunc
	var_346_int = 3491; // 0x27c PushI
	var_347_int = 3763; // 0x27d PushI
	var_348_int = 3761; // 0x27e PushI
	AddReply(var_346_int, var_347_int, var_348_int); // 0x27f TObjFunc
	return 0; // 0x281 Return
	
Label_642:
	var_349_int = 3760; // 0x282 PushI
	var_350_bool = var_6_int == var_349_int; // 0x283 Eq
	if(var_350_bool == 0) goto Label_665; // 0x284 JumpB
	var_351_string = ""; // 0x285 PushV
	var_351_string = "Neutral"; // 0x286 MovS
	func_241(var_7_bool, var_351_string); // 0x287 Call
	var_352_int = 3490; // 0x289 PushI
	SetMessage(var_352_int); // 0x28a TObjFunc
	ClearReplies(); // 0x28c TObjFunc
	var_353_int = 3492; // 0x28e PushI
	var_354_int = 3763; // 0x28f PushI
	var_355_int = 3762; // 0x290 PushI
	AddReply(var_353_int, var_354_int, var_355_int); // 0x291 TObjFunc
	var_356_int = 3509; // 0x293 PushI
	var_357_int = 3786; // 0x294 PushI
	var_358_int = 3785; // 0x295 PushI
	AddReply(var_356_int, var_357_int, var_358_int); // 0x296 TObjFunc
	return 0; // 0x298 Return
	
Label_665:
	var_359_int = 3786; // 0x299 PushI
	var_360_bool = var_6_int == var_359_int; // 0x29a Eq
	if(var_360_bool == 0) goto Label_688; // 0x29b JumpB
	var_361_string = ""; // 0x29c PushV
	var_361_string = "Neutral"; // 0x29d MovS
	func_241(var_7_bool, var_361_string); // 0x29e Call
	var_362_int = 3510; // 0x2a0 PushI
	SetMessage(var_362_int); // 0x2a1 TObjFunc
	ClearReplies(); // 0x2a3 TObjFunc
	var_363_int = 3511; // 0x2a5 PushI
	var_364_int = 3788; // 0x2a6 PushI
	var_365_int = 3787; // 0x2a7 PushI
	AddReply(var_363_int, var_364_int, var_365_int); // 0x2a8 TObjFunc
	var_366_int = 3515; // 0x2aa PushI
	var_367_int = 3766; // 0x2ab PushI
	var_368_int = 3793; // 0x2ac PushI
	AddReply(var_366_int, var_367_int, var_368_int); // 0x2ad TObjFunc
	return 0; // 0x2af Return
	
Label_688:
	var_369_int = 3788; // 0x2b0 PushI
	var_370_bool = var_6_int == var_369_int; // 0x2b1 Eq
	if(var_370_bool == 0) goto Label_711; // 0x2b2 JumpB
	var_371_string = ""; // 0x2b3 PushV
	var_371_string = "Neutral"; // 0x2b4 MovS
	func_241(var_7_bool, var_371_string); // 0x2b5 Call
	var_372_int = 3512; // 0x2b7 PushI
	SetMessage(var_372_int); // 0x2b8 TObjFunc
	ClearReplies(); // 0x2ba TObjFunc
	var_373_int = 3513; // 0x2bc PushI
	var_374_int = 3775; // 0x2bd PushI
	var_375_int = 3789; // 0x2be PushI
	AddReply(var_373_int, var_374_int, var_375_int); // 0x2bf TObjFunc
	var_376_int = 3514; // 0x2c1 PushI
	var_377_int = 3766; // 0x2c2 PushI
	var_378_int = 3791; // 0x2c3 PushI
	AddReply(var_376_int, var_377_int, var_378_int); // 0x2c4 TObjFunc
	return 0; // 0x2c6 Return
	
Label_711:
	var_379_int = 3763; // 0x2c7 PushI
	var_380_bool = var_6_int == var_379_int; // 0x2c8 Eq
	if(var_380_bool == 0) goto Label_734; // 0x2c9 JumpB
	var_381_string = ""; // 0x2ca PushV
	var_381_string = "Neutral"; // 0x2cb MovS
	func_241(var_7_bool, var_381_string); // 0x2cc Call
	var_382_int = 3493; // 0x2ce PushI
	SetMessage(var_382_int); // 0x2cf TObjFunc
	ClearReplies(); // 0x2d1 TObjFunc
	var_383_int = 3494; // 0x2d3 PushI
	var_384_int = 3766; // 0x2d4 PushI
	var_385_int = 3764; // 0x2d5 PushI
	AddReply(var_383_int, var_384_int, var_385_int); // 0x2d6 TObjFunc
	var_386_int = 3495; // 0x2d8 PushI
	var_387_int = 3766; // 0x2d9 PushI
	var_388_int = 3765; // 0x2da PushI
	AddReply(var_386_int, var_387_int, var_388_int); // 0x2db TObjFunc
	return 0; // 0x2dd Return
	
Label_734:
	var_389_int = 3766; // 0x2de PushI
	var_390_bool = var_6_int == var_389_int; // 0x2df Eq
	if(var_390_bool == 0) goto Label_762; // 0x2e0 JumpB
	var_391_string = ""; // 0x2e1 PushV
	var_391_string = "Neutral"; // 0x2e2 MovS
	func_241(var_7_bool, var_391_string); // 0x2e3 Call
	var_392_int = 3496; // 0x2e5 PushI
	SetMessage(var_392_int); // 0x2e6 TObjFunc
	ClearReplies(); // 0x2e8 TObjFunc
	var_393_int = 3497; // 0x2ea PushI
	var_394_int = 3771; // 0x2eb PushI
	var_395_int = 3769; // 0x2ec PushI
	AddReply(var_393_int, var_394_int, var_395_int); // 0x2ed TObjFunc
	var_396_int = 3501; // 0x2ef PushI
	var_397_int = 3797; // 0x2f0 PushI
	var_398_int = 3773; // 0x2f1 PushI
	AddReply(var_396_int, var_397_int, var_398_int); // 0x2f2 TObjFunc
	var_399_int = 3502; // 0x2f4 PushI
	var_400_int = -1; // 0x2f5 PushI
	var_401_int = 3774; // 0x2f6 PushI
	AddReply(var_399_int, var_400_int, var_401_int); // 0x2f7 TObjFunc
	return 0; // 0x2f9 Return
	
Label_762:
	var_402_int = 3797; // 0x2fa PushI
	var_403_bool = var_6_int == var_402_int; // 0x2fb Eq
	if(var_403_bool == 0) goto Label_790; // 0x2fc JumpB
	var_404_string = ""; // 0x2fd PushV
	var_404_string = "Neutral"; // 0x2fe MovS
	func_241(var_7_bool, var_404_string); // 0x2ff Call
	var_405_int = 3517; // 0x301 PushI
	SetMessage(var_405_int); // 0x302 TObjFunc
	ClearReplies(); // 0x304 TObjFunc
	var_406_int = 3518; // 0x306 PushI
	var_407_int = -1; // 0x307 PushI
	var_408_int = 3798; // 0x308 PushI
	AddReply(var_406_int, var_407_int, var_408_int); // 0x309 TObjFunc
	var_409_int = 3519; // 0x30b PushI
	var_410_int = -1; // 0x30c PushI
	var_411_int = 3799; // 0x30d PushI
	AddReply(var_409_int, var_410_int, var_411_int); // 0x30e TObjFunc
	var_412_int = 3520; // 0x310 PushI
	var_413_int = 3801; // 0x311 PushI
	var_414_int = 3800; // 0x312 PushI
	AddReply(var_412_int, var_413_int, var_414_int); // 0x313 TObjFunc
	return 0; // 0x315 Return
	
Label_790:
	var_415_int = 3801; // 0x316 PushI
	var_416_bool = var_6_int == var_415_int; // 0x317 Eq
	if(var_416_bool == 0) goto Label_813; // 0x318 JumpB
	var_417_string = ""; // 0x319 PushV
	var_417_string = "Neutral"; // 0x31a MovS
	func_241(var_7_bool, var_417_string); // 0x31b Call
	var_418_int = 3521; // 0x31d PushI
	SetMessage(var_418_int); // 0x31e TObjFunc
	ClearReplies(); // 0x320 TObjFunc
	var_419_int = 3522; // 0x322 PushI
	var_420_int = 3804; // 0x323 PushI
	var_421_int = 3802; // 0x324 PushI
	AddReply(var_419_int, var_420_int, var_421_int); // 0x325 TObjFunc
	var_422_int = 3523; // 0x327 PushI
	var_423_int = -1; // 0x328 PushI
	var_424_int = 3803; // 0x329 PushI
	AddReply(var_422_int, var_423_int, var_424_int); // 0x32a TObjFunc
	return 0; // 0x32c Return
	
Label_813:
	var_425_int = 3804; // 0x32d PushI
	var_426_bool = var_6_int == var_425_int; // 0x32e Eq
	if(var_426_bool == 0) goto Label_831; // 0x32f JumpB
	var_427_string = ""; // 0x330 PushV
	var_427_string = "Neutral"; // 0x331 MovS
	func_241(var_7_bool, var_427_string); // 0x332 Call
	var_428_int = 3524; // 0x334 PushI
	SetMessage(var_428_int); // 0x335 TObjFunc
	ClearReplies(); // 0x337 TObjFunc
	var_429_int = 3525; // 0x339 PushI
	var_430_int = 3770; // 0x33a PushI
	var_431_int = 3805; // 0x33b PushI
	AddReply(var_429_int, var_430_int, var_431_int); // 0x33c TObjFunc
	return 0; // 0x33e Return
	
Label_831:
	var_432_int = 3771; // 0x33f PushI
	var_433_bool = var_6_int == var_432_int; // 0x340 Eq
	if(var_433_bool == 0) goto Label_854; // 0x341 JumpB
	var_434_string = ""; // 0x342 PushV
	var_434_string = "Neutral"; // 0x343 MovS
	func_241(var_7_bool, var_434_string); // 0x344 Call
	var_435_int = 3499; // 0x346 PushI
	SetMessage(var_435_int); // 0x347 TObjFunc
	ClearReplies(); // 0x349 TObjFunc
	var_436_int = 3500; // 0x34b PushI
	var_437_int = 3770; // 0x34c PushI
	var_438_int = 3772; // 0x34d PushI
	AddReply(var_436_int, var_437_int, var_438_int); // 0x34e TObjFunc
	var_439_int = 3516; // 0x350 PushI
	var_440_int = -1; // 0x351 PushI
	var_441_int = 3796; // 0x352 PushI
	AddReply(var_439_int, var_440_int, var_441_int); // 0x353 TObjFunc
	return 0; // 0x355 Return
	
Label_854:
	var_442_int = 3770; // 0x356 PushI
	var_443_bool = var_6_int == var_442_int; // 0x357 Eq
	if(var_443_bool == 0) goto Label_877; // 0x358 JumpB
	var_444_string = ""; // 0x359 PushV
	var_444_string = "Neutral"; // 0x35a MovS
	func_241(var_7_bool, var_444_string); // 0x35b Call
	var_445_int = 3498; // 0x35d PushI
	SetMessage(var_445_int); // 0x35e TObjFunc
	ClearReplies(); // 0x360 TObjFunc
	var_446_int = 3526; // 0x362 PushI
	var_447_int = -1; // 0x363 PushI
	var_448_int = 3807; // 0x364 PushI
	AddReply(var_446_int, var_447_int, var_448_int); // 0x365 TObjFunc
	var_449_int = 3527; // 0x367 PushI
	var_450_int = 3809; // 0x368 PushI
	var_451_int = 3808; // 0x369 PushI
	AddReply(var_449_int, var_450_int, var_451_int); // 0x36a TObjFunc
	return 0; // 0x36c Return
	
Label_877:
	var_452_int = 3809; // 0x36d PushI
	var_453_bool = var_6_int == var_452_int; // 0x36e Eq
	if(var_453_bool == 0) goto Label_895; // 0x36f JumpB
	var_454_string = ""; // 0x370 PushV
	var_454_string = "Neutral"; // 0x371 MovS
	func_241(var_7_bool, var_454_string); // 0x372 Call
	var_455_int = 3528; // 0x374 PushI
	SetMessage(var_455_int); // 0x375 TObjFunc
	ClearReplies(); // 0x377 TObjFunc
	var_456_int = 3529; // 0x379 PushI
	var_457_int = 3811; // 0x37a PushI
	var_458_int = 3810; // 0x37b PushI
	AddReply(var_456_int, var_457_int, var_458_int); // 0x37c TObjFunc
	return 0; // 0x37e Return
	
Label_895:
	var_459_int = 3811; // 0x37f PushI
	var_460_bool = var_6_int == var_459_int; // 0x380 Eq
	if(var_460_bool == 0) goto Label_918; // 0x381 JumpB
	var_461_string = ""; // 0x382 PushV
	var_461_string = "Neutral"; // 0x383 MovS
	func_241(var_7_bool, var_461_string); // 0x384 Call
	var_462_int = 3530; // 0x386 PushI
	SetMessage(var_462_int); // 0x387 TObjFunc
	ClearReplies(); // 0x389 TObjFunc
	var_463_int = 3531; // 0x38b PushI
	var_464_int = -1; // 0x38c PushI
	var_465_int = 3812; // 0x38d PushI
	AddReply(var_463_int, var_464_int, var_465_int); // 0x38e TObjFunc
	var_466_int = 3532; // 0x390 PushI
	var_467_int = -1; // 0x391 PushI
	var_468_int = 3813; // 0x392 PushI
	AddReply(var_466_int, var_467_int, var_468_int); // 0x393 TObjFunc
	return 0; // 0x395 Return
	
Label_918:
	var_469_int = 3775; // 0x396 PushI
	var_470_bool = var_6_int == var_469_int; // 0x397 Eq
	if(var_470_bool == 0) goto Label_936; // 0x398 JumpB
	var_471_string = ""; // 0x399 PushV
	var_471_string = "Neutral"; // 0x39a MovS
	func_241(var_7_bool, var_471_string); // 0x39b Call
	var_472_int = 3503; // 0x39d PushI
	SetMessage(var_472_int); // 0x39e TObjFunc
	ClearReplies(); // 0x3a0 TObjFunc
	var_473_int = 3504; // 0x3a2 PushI
	var_474_int = 3770; // 0x3a3 PushI
	var_475_int = 3776; // 0x3a4 PushI
	AddReply(var_473_int, var_474_int, var_475_int); // 0x3a5 TObjFunc
	return 0; // 0x3a7 Return
	
Label_936:
	var_476_int = 13965; // 0x3a8 PushI
	var_477_bool = var_6_int == var_476_int; // 0x3a9 Eq
	if(var_477_bool == 0) goto Label_954; // 0x3aa JumpB
	var_478_string = ""; // 0x3ab PushV
	var_478_string = "Neutral"; // 0x3ac MovS
	func_241(var_7_bool, var_478_string); // 0x3ad Call
	var_479_int = 12767; // 0x3af PushI
	SetMessage(var_479_int); // 0x3b0 TObjFunc
	ClearReplies(); // 0x3b2 TObjFunc
	var_480_int = 12768; // 0x3b4 PushI
	var_481_int = 13933; // 0x3b5 PushI
	var_482_int = 13966; // 0x3b6 PushI
	AddReply(var_480_int, var_481_int, var_482_int); // 0x3b7 TObjFunc
	return 0; // 0x3b9 Return
	
Label_954:
	var_483_int = 13933; // 0x3ba PushI
	var_484_bool = var_6_int == var_483_int; // 0x3bb Eq
	if(var_484_bool == 0) goto Label_982; // 0x3bc JumpB
	var_485_string = ""; // 0x3bd PushV
	var_485_string = "Neutral"; // 0x3be MovS
	func_241(var_7_bool, var_485_string); // 0x3bf Call
	var_486_int = 12739; // 0x3c1 PushI
	SetMessage(var_486_int); // 0x3c2 TObjFunc
	ClearReplies(); // 0x3c4 TObjFunc
	var_487_int = 12740; // 0x3c6 PushI
	var_488_int = 13935; // 0x3c7 PushI
	var_489_int = 13934; // 0x3c8 PushI
	AddReply(var_487_int, var_488_int, var_489_int); // 0x3c9 TObjFunc
	var_490_int = 12746; // 0x3cb PushI
	var_491_int = 13935; // 0x3cc PushI
	var_492_int = 13940; // 0x3cd PushI
	AddReply(var_490_int, var_491_int, var_492_int); // 0x3ce TObjFunc
	var_493_int = 12747; // 0x3d0 PushI
	var_494_int = 13935; // 0x3d1 PushI
	var_495_int = 13941; // 0x3d2 PushI
	AddReply(var_493_int, var_494_int, var_495_int); // 0x3d3 TObjFunc
	return 0; // 0x3d5 Return
	
Label_982:
	var_496_int = 13935; // 0x3d6 PushI
	var_497_bool = var_6_int == var_496_int; // 0x3d7 Eq
	if(var_497_bool == 0) goto Label_1010; // 0x3d8 JumpB
	var_498_string = ""; // 0x3d9 PushV
	var_498_string = "Neutral"; // 0x3da MovS
	func_241(var_7_bool, var_498_string); // 0x3db Call
	var_499_int = 12741; // 0x3dd PushI
	SetMessage(var_499_int); // 0x3de TObjFunc
	ClearReplies(); // 0x3e0 TObjFunc
	var_500_int = 12742; // 0x3e2 PushI
	var_501_int = 13937; // 0x3e3 PushI
	var_502_int = 13936; // 0x3e4 PushI
	AddReply(var_500_int, var_501_int, var_502_int); // 0x3e5 TObjFunc
	var_503_int = 12751; // 0x3e7 PushI
	var_504_int = 13947; // 0x3e8 PushI
	var_505_int = 13945; // 0x3e9 PushI
	AddReply(var_503_int, var_504_int, var_505_int); // 0x3ea TObjFunc
	var_506_int = 12752; // 0x3ec PushI
	var_507_int = -1; // 0x3ed PushI
	var_508_int = 13946; // 0x3ee PushI
	AddReply(var_506_int, var_507_int, var_508_int); // 0x3ef TObjFunc
	return 0; // 0x3f1 Return
	
Label_1010:
	var_509_int = 13947; // 0x3f2 PushI
	var_510_bool = var_6_int == var_509_int; // 0x3f3 Eq
	if(var_510_bool == 0) goto Label_1028; // 0x3f4 JumpB
	var_511_string = ""; // 0x3f5 PushV
	var_511_string = "Neutral"; // 0x3f6 MovS
	func_241(var_7_bool, var_511_string); // 0x3f7 Call
	var_512_int = 12753; // 0x3f9 PushI
	SetMessage(var_512_int); // 0x3fa TObjFunc
	ClearReplies(); // 0x3fc TObjFunc
	var_513_int = 12754; // 0x3fe PushI
	var_514_int = 13949; // 0x3ff PushI
	var_515_int = 13948; // 0x400 PushI
	AddReply(var_513_int, var_514_int, var_515_int); // 0x401 TObjFunc
	return 0; // 0x403 Return
	
Label_1028:
	var_516_int = 13949; // 0x404 PushI
	var_517_bool = var_6_int == var_516_int; // 0x405 Eq
	if(var_517_bool == 0) goto Label_1051; // 0x406 JumpB
	var_518_string = ""; // 0x407 PushV
	var_518_string = "Neutral"; // 0x408 MovS
	func_241(var_7_bool, var_518_string); // 0x409 Call
	var_519_int = 12755; // 0x40b PushI
	SetMessage(var_519_int); // 0x40c TObjFunc
	ClearReplies(); // 0x40e TObjFunc
	var_520_int = 12756; // 0x410 PushI
	var_521_int = -1; // 0x411 PushI
	var_522_int = 13950; // 0x412 PushI
	AddReply(var_520_int, var_521_int, var_522_int); // 0x413 TObjFunc
	var_523_int = 12757; // 0x415 PushI
	var_524_int = -1; // 0x416 PushI
	var_525_int = 13951; // 0x417 PushI
	AddReply(var_523_int, var_524_int, var_525_int); // 0x418 TObjFunc
	return 0; // 0x41a Return
	
Label_1051:
	var_526_int = 13937; // 0x41b PushI
	var_527_bool = var_6_int == var_526_int; // 0x41c Eq
	if(var_527_bool == 0) goto Label_1074; // 0x41d JumpB
	var_528_string = ""; // 0x41e PushV
	var_528_string = "Neutral"; // 0x41f MovS
	func_241(var_7_bool, var_528_string); // 0x420 Call
	var_529_int = 12743; // 0x422 PushI
	SetMessage(var_529_int); // 0x423 TObjFunc
	ClearReplies(); // 0x425 TObjFunc
	var_530_int = 12758; // 0x427 PushI
	var_531_int = 13954; // 0x428 PushI
	var_532_int = 13952; // 0x429 PushI
	AddReply(var_530_int, var_531_int, var_532_int); // 0x42a TObjFunc
	var_533_int = 12759; // 0x42c PushI
	var_534_int = 13954; // 0x42d PushI
	var_535_int = 13953; // 0x42e PushI
	AddReply(var_533_int, var_534_int, var_535_int); // 0x42f TObjFunc
	return 0; // 0x431 Return
	
Label_1074:
	var_536_int = 13954; // 0x432 PushI
	var_537_bool = var_6_int == var_536_int; // 0x433 Eq
	if(var_537_bool == 0) goto Label_1092; // 0x434 JumpB
	var_538_string = ""; // 0x435 PushV
	var_538_string = "Neutral"; // 0x436 MovS
	func_241(var_7_bool, var_538_string); // 0x437 Call
	var_539_int = 12760; // 0x439 PushI
	SetMessage(var_539_int); // 0x43a TObjFunc
	ClearReplies(); // 0x43c TObjFunc
	var_540_int = 12761; // 0x43e PushI
	var_541_int = 13957; // 0x43f PushI
	var_542_int = 13956; // 0x440 PushI
	AddReply(var_540_int, var_541_int, var_542_int); // 0x441 TObjFunc
	return 0; // 0x443 Return
	
Label_1092:
	var_543_int = 13957; // 0x444 PushI
	var_544_bool = var_6_int == var_543_int; // 0x445 Eq
	if(var_544_bool == 0) goto Label_1110; // 0x446 JumpB
	var_545_string = ""; // 0x447 PushV
	var_545_string = "Neutral"; // 0x448 MovS
	func_241(var_7_bool, var_545_string); // 0x449 Call
	var_546_int = 12762; // 0x44b PushI
	SetMessage(var_546_int); // 0x44c TObjFunc
	ClearReplies(); // 0x44e TObjFunc
	var_547_int = 12763; // 0x450 PushI
	var_548_int = 13959; // 0x451 PushI
	var_549_int = 13958; // 0x452 PushI
	AddReply(var_547_int, var_548_int, var_549_int); // 0x453 TObjFunc
	return 0; // 0x455 Return
	
Label_1110:
	var_550_int = 13959; // 0x456 PushI
	var_551_bool = var_6_int == var_550_int; // 0x457 Eq
	if(var_551_bool == 0) goto Label_1133; // 0x458 JumpB
	var_552_string = ""; // 0x459 PushV
	var_552_string = "Neutral"; // 0x45a MovS
	func_241(var_7_bool, var_552_string); // 0x45b Call
	var_553_int = 12764; // 0x45d PushI
	SetMessage(var_553_int); // 0x45e TObjFunc
	ClearReplies(); // 0x460 TObjFunc
	var_554_int = 12765; // 0x462 PushI
	var_555_int = -1; // 0x463 PushI
	var_556_int = 13960; // 0x464 PushI
	AddReply(var_554_int, var_555_int, var_556_int); // 0x465 TObjFunc
	var_557_int = 12766; // 0x467 PushI
	var_558_int = -1; // 0x468 PushI
	var_559_int = 13961; // 0x469 PushI
	AddReply(var_557_int, var_558_int, var_559_int); // 0x46a TObjFunc
	return 0; // 0x46c Return
	
Label_1133:
	var_3_string = 1; // 0x46d TMovB
	var_560_bool = 0; // 0x46e PushV
	func_1762(var_560_bool); // 0x46f Call
	if(var_560_bool == 0) goto Label_1141; // 0x471 JumpB
	lshStopAnimation(); // 0x472 Func
	goto Label_1143; // 0x474 Jump
	
Label_1143:
	return 0; // 0x477 Return
	
Label_1141:
	StopAnimation(); // 0x475 Func
	
Label_1145:
	return 0; // 0x479 Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object)
{
	var_7_int = 0; var_8_object = Obj(); // 0x47b PushV
	var_8_object = var_6_object; // 0x47c Mov
	TaskCall(0); // 0x47d TaskCall
	func_0(var_9_object, var_7_int, var_8_object); // 0x47e Call
	TaskReturn(); // 0x47f TaskReturn
	return 0; // 0x481 Return
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_string)
{
	var_7_bool = 0; var_8_bool = 0; // 0x486 PushV
	var_9_string = "cleanup"; // 0x487 PushS
	var_10_bool = var_6_string == var_9_string; // 0x488 Eq
	if(var_10_bool == 0) goto Label_1181; // 0x489 JumpB
	var_0_object = 1; // 0x48a TMovB
	IsLoaded(var_8_bool); // 0x48b Func
	var_11_bool = 0; // 0x48d PushV
	var_11_bool = 0; // 0x48e MovB
	var_12_bool = var_8_bool == 0; // 0x48f Not
	if(var_12_bool == 0) goto Label_1174; // 0x490 JumpB
	var_13_bool = 0; // 0x491 PushV
	func_1202(var_13_bool); // 0x492 Call
	if(var_13_bool == 0) goto Label_1174; // 0x494 JumpB
	var_11_bool = 1; // 0x495 MovB
	
Label_1174:
	if(var_11_bool == 0) goto Label_1180; // 0x496 JumpB
	var_14_object = Obj(); // 0x497 PushV
	func_1289(var_14_object); // 0x498 Call
	RemoveActor(var_14_object); // 0x49a Func
	
Label_1180:
	goto Label_1185; // 0x49c Jump
	
Label_1185:
	return 2; // 0x4a1 Return
	
Label_1181:
	var_17_string = "restore"; // 0x49d PushS
	var_18_bool = var_6_string == var_17_string; // 0x49e Eq
	if(var_18_bool == 0) goto Label_1185; // 0x49f JumpB
	var_0_object = 0; // 0x4a0 TMovB
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	var_6_bool = 0; // 0x4a2 PushV
	var_6_bool = 0; // 0x4a3 MovB
	var_7_object = var_0_object; // 0x4a4 PushT
	if(var_7_object == 0) goto Label_1195; // 0x4a5 JumpB
	var_8_bool = 0; // 0x4a6 PushV
	func_1202(var_8_bool); // 0x4a7 Call
	if(var_8_bool == 0) goto Label_1195; // 0x4a9 JumpB
	var_6_bool = 1; // 0x4aa MovB
	
Label_1195:
	if(var_6_bool == 0) goto Label_1201; // 0x4ab JumpB
	var_9_object = Obj(); // 0x4ac PushV
	func_1289(var_9_object); // 0x4ad Call
	RemoveActor(var_9_object); // 0x4af Func
	
Label_1201:
	return 0; // 0x4b1 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	
Label_1154:
	Hold(); // 0x482 Func
	goto Label_1154; // 0x484 Jump
}


func_0(var_0_object, var_7_int, var_8_object)
{
	var_10_object = Obj(); var_11_bool = 0; var_12_int = 0; var_13_bool = 0; var_14_object = Obj(); var_15_bool = 0; var_16_int = 0; var_17_bool = 0; // 0x0 PushV
	var_0_object = var_8_object; // 0x1 TMov
	var_18_bool = 0; var_19_object = Obj(); // 0x2 PushV
	var_19_object = var_8_object; // 0x3 Mov
	func_1204(var_19_object); // 0x4 Call
	var_58_bool = var_18_bool == 0; // 0x6 Not
	if(var_58_bool == 0) goto Label_10; // 0x7 JumpB
	var_7_int = -2; // 0x8 MovI
	return 8; // 0x9 Return
	
Label_10:
	CreateDialog(var_14_object); // 0xa Func
	var_59_int = 0; // 0xc PushV
	func_1758(var_59_int); // 0xd Call
	SetNPCName(var_59_int); // 0xf ObjFunc
	var_60_string = ""; // 0x11 PushV
	func_1760(var_60_string); // 0x12 Call
	SetPhoto(var_60_string); // 0x14 ObjFunc
	var_61_int = 0; // 0x16 PushV
	func_1725(var_61_int); // 0x17 Call
	SetPlayerName(var_61_int); // 0x19 ObjFunc
	var_16_int = -1; // 0x1b MovI
	IsOverrideActive(var_15_bool); // 0x1c Func
	var_69_bool = var_15_bool; // 0x1e Push
	if(var_69_bool == 0) goto Label_34; // 0x1f JumpB
	var_7_int = -2; // 0x20 MovI
	return 8; // 0x21 Return
	
Label_34:
	DoDialog(var_14_object); // 0x22 Func
	var_70_object = Obj(); var_71_object = Obj(); // 0x24 PushV
	var_70_object = var_8_object; // 0x25 Mov
	var_71_object = var_14_object; // 0x26 Mov
	TaskCall(1); // 0x27 TaskCall
	func_63(var_72_object, var_73_object, var_74_string, var_75_bool, var_70_object, var_71_object); // 0x28 Call
	TaskReturn(); // 0x29 TaskReturn
	IsDialogEnd(var_17_bool); // 0x2b ObjFunc
	
Label_45:
	var_198_bool = var_17_bool == 0; // 0x2d Not
	if(var_198_bool == 0) goto Label_52; // 0x2e JumpB
	sync(); // 0x2f Func
	IsDialogEnd(var_17_bool); // 0x31 ObjFunc
	goto Label_45; // 0x33 Jump
	
Label_52:
	var_199_object = Obj(); // 0x34 PushV
	var_199_object = var_8_object; // 0x35 Mov
	func_1260(); // 0x36 Call
	StopDialog(var_14_object); // 0x38 Func
	GetReturnValue(var_16_int); // 0x3a ObjFunc
	var_7_int = var_16_int; // 0x3c Mov
	return 8; // 0x3d Return
}


func_1282()
{
	var_9_bool = 0; // 0x502 PushV
	func_1762(var_9_bool); // 0x503 Call
	if(var_9_bool == 0) goto Label_1288; // 0x505 JumpB
	lshStopSpeech(); // 0x506 Func
	
Label_1288:
	return 0; // 0x508 Return
}


func_1541(var_94_bool)
{
	var_96_int = 0; var_97_string = ""; // 0x606 PushV
	var_97_string = "d6q01"; // 0x607 MovS
	func_1305(var_96_int, var_97_string); // 0x608 Call
	var_98_int = 2; // 0x60a PushI
	var_99_bool = var_96_int == var_98_int; // 0x60b Eq
	if(var_99_bool == 0) goto Label_1551; // 0x60c JumpB
	var_94_bool = 1; // 0x60d MovB
	return 0; // 0x60e Return
	
Label_1551:
	var_94_bool = 0; // 0x60f MovB
	return 0; // 0x610 Return
}


func_1289(var_9_object)
{
	var_10_object = Obj(); var_11_object = Obj(); // 0x509 PushV
	self(var_11_object); // 0x50a Func
	var_9_object = var_11_object; // 0x50c Mov
	return 2; // 0x50d Return
}


func_1295(var_43_cvector, var_44_cvector)
{
	var_46_float = 0; var_47_float = 0; // 0x50f PushV
	var_48_int = var_44_cvector | var_44_cvector; // 0x510 Or
	var_47_float = sqrt(var_48_int); // 0x511 Sqrt2
	var_49_float = 0.0; // 0x512 PushF
	var_50_bool = var_47_float < var_49_float; // 0x513 LT
	if(var_50_bool == 0) goto Label_1303; // 0x514 JumpB
	var_43_cvector = CVector(0.0, 0.0, 0.0); // 0x515 MovV
	return 2; // 0x516 Return
	
Label_1303:
	var_43_cvector = var_44_cvector / var_44_cvector; // 0x517 Div2
	return 2; // 0x518 Return
}


func_1553(var_146_bool)
{
	var_148_int = 0; var_149_string = ""; // 0x612 PushV
	var_149_string = "d6q01"; // 0x613 MovS
	func_1305(var_148_int, var_149_string); // 0x614 Call
	var_150_int = 4; // 0x616 PushI
	var_151_bool = var_148_int == var_150_int; // 0x617 Eq
	if(var_151_bool == 0) goto Label_1563; // 0x618 JumpB
	var_146_bool = 1; // 0x619 MovB
	return 0; // 0x61a Return
	
Label_1563:
	var_146_bool = 0; // 0x61b MovB
	return 0; // 0x61c Return
}


func_1305(var_81_int, var_82_string)
{
	var_83_int = 0; var_84_int = 0; // 0x519 PushV
	GetVariable(var_82_string, var_84_int); // 0x51a Func
	var_81_int = var_84_int; // 0x51c Mov
	return 2; // 0x51d Return
}


func_1691(var_123_bool, var_124_int)
{
	var_125_object = Obj(); var_126_object = Obj(); var_127_object = Obj(); var_128_object = Obj(); // 0x69b PushV
	var_129_object = Obj(); // 0x69c PushV
	func_1649(var_129_object); // 0x69d Call
	var_127_object = var_129_object; // 0x69e Mov
	Find(var_124_int, var_128_object); // 0x6a0 ObjFunc
	var_130_bool = var_128_object == 0; // 0x6a2 Not
	if(var_130_bool == 0) goto Label_1702; // 0x6a3 JumpB
	var_123_bool = 0; // 0x6a4 MovB
	return 4; // 0x6a5 Return
	
Label_1702:
	Remove(); // 0x6a6 ObjFunc
	var_123_bool = 1; // 0x6a8 MovB
	return 4; // 0x6a9 Return
}


func_1565(var_79_bool)
{
	var_81_int = 0; var_82_string = ""; // 0x61e PushV
	var_82_string = "ood6Klara1"; // 0x61f MovS
	func_1305(var_81_int, var_82_string); // 0x620 Call
	var_85_int = 0; // 0x622 PushI
	var_86_bool = var_81_int == var_85_int; // 0x623 Eq
	if(var_86_bool == 0) goto Label_1575; // 0x624 JumpB
	var_79_bool = 1; // 0x625 MovB
	return 0; // 0x626 Return
	
Label_1575:
	var_79_bool = 0; // 0x627 MovB
	return 0; // 0x628 Return
}


func_1310(var_52_object, var_53_int)
{
	var_54_int = 0; var_55_int = 0; var_56_bool = 0; var_57_int = 0; var_58_int = 0; var_59_bool = 0; // 0x51e PushV
	GetItemID(var_57_int); // 0x51f ObjFunc
	var_60_string = "Category"; // 0x521 PushS
	GetInvItemProperty(var_58_int, var_57_int, var_60_string); // 0x522 Func
	AddItem(var_59_bool, var_52_object, var_58_int, var_53_int); // 0x524 ObjFunc
	var_61_bool = var_59_bool == 0; // 0x526 Not
	if(var_61_bool == 0) goto Label_1322; // 0x527 JumpB
	DropItems(var_52_object, var_53_int); // 0x528 ObjFunc
	
Label_1322:
	return 6; // 0x52a Return
}


func_1577(var_140_bool)
{
	var_142_int = 0; var_143_string = ""; // 0x62a PushV
	var_143_string = "d6q01"; // 0x62b MovS
	func_1305(var_142_int, var_143_string); // 0x62c Call
	var_144_int = 3; // 0x62e PushI
	var_145_bool = var_142_int == var_144_int; // 0x62f Eq
	if(var_145_bool == 0) goto Label_1587; // 0x630 JumpB
	var_140_bool = 1; // 0x631 MovB
	return 0; // 0x632 Return
	
Label_1587:
	var_140_bool = 0; // 0x633 MovB
	return 0; // 0x634 Return
}


func_1323(var_46_object, var_47_string, var_48_int)
{
	var_49_object = Obj(); var_50_object = Obj(); // 0x52b PushV
	CreateInvItem(var_50_object); // 0x52c Func
	SetItemName(var_47_string); // 0x52e ObjFunc
	var_51_object = Obj(); var_52_object = Obj(); var_53_int = 0; // 0x530 PushV
	var_51_object = var_46_object; // 0x531 Mov
	var_52_object = var_50_object; // 0x532 Mov
	var_53_int = var_48_int; // 0x533 Mov
	func_1310(var_52_object, var_53_int); // 0x534 Call
	return 2; // 0x536 Return
}


func_1708(var_88_object)
{
	var_89_object = Obj(); var_90_object = Obj(); var_91_object = Obj(); var_92_object = Obj(); // 0x6ac PushV
	GetMainOutdoorScene(var_91_object); // 0x6ad Func
	var_93_bool = var_91_object == 0; // 0x6af NullEq
	if(var_93_bool == 0) goto Label_1719; // 0x6b0 JumpB
	var_94_string = "Can't find main outdoor scene"; // 0x6b1 PushS
	Trace(var_94_string); // 0x6b2 Func
	var_92_object = 0; // 0x6b4 SetNull
	var_88_object = var_92_object; // 0x6b5 Mov
	return 4; // 0x6b6 Return
	
Label_1719:
	GetMap(var_92_object); // 0x6b7 ObjFunc
	var_88_object = var_92_object; // 0x6b9 Mov
	return 4; // 0x6ba Return
}


func_1202(var_8_bool)
{
	var_8_bool = 1; // 0x4b2 MovB
	return 0; // 0x4b3 Return
}


func_1204(var_18_bool)
{
	var_20_float = 0; var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_bool = 0; var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_bool = 0; // 0x4b4 PushV
	GetPosition(var_29_cvector); // 0x4b5 ObjFunc
	GetEyesHeight(var_28_float); // 0x4b7 ObjFunc
	var_36_float = GetByIndex(var_29_cvector, 1); // 0x4b9 PushE
	var_36_float = var_36_float + var_28_float; // 0x4ba Add2
	SetByIndex(var_29_cvector, 1) = var_36_float; // 0x4bb PopE
	GetPosition(var_30_cvector); // 0x4bc Func
	GetEyesHeight(var_28_float); // 0x4be Func
	var_37_float = GetByIndex(var_30_cvector, 1); // 0x4c0 PushE
	var_37_float = var_37_float + var_28_float; // 0x4c1 Add2
	SetByIndex(var_30_cvector, 1) = var_37_float; // 0x4c2 PopE
	var_31_cvector = var_29_cvector - var_30_cvector; // 0x4c3 Sub2
	var_38_float = GetByIndex(var_31_cvector, 1); // 0x4c4 PushE
	var_38_float = 0; // 0x4c5 MovI
	SetByIndex(var_31_cvector, 1) = var_38_float; // 0x4c6 PopE
	var_39_int = var_31_cvector | var_31_cvector; // 0x4c7 Or
	var_40_float = sqrt(var_39_int); // 0x4c8 Sqrt
	var_31_cvector = var_31_cvector / var_31_cvector; // 0x4c9 Div2
	var_32_cvector = -var_31_cvector; // 0x4ca Neg2
	var_41_int = 70; // 0x4cb PushI
	var_42_float = var_31_cvector * var_41_int; // 0x4cc Mult
	var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); // 0x4cd PushV
	var_45_cvector = CVector(0.0, 1.0, 0.0); // 0x4ce PushVec
	var_44_cvector = var_32_cvector ^ var_45_cvector; // 0x4cf Xor2
	func_1295(var_43_cvector, var_44_cvector); // 0x4d0 Call
	var_51_int = 25; // 0x4d2 PushI
	var_52_float = var_43_cvector * var_51_int; // 0x4d3 Mult
	var_53_int = var_42_float + var_52_float; // 0x4d4 Add
	var_54_cvector = CVector(0.0, 10.0, 0.0); // 0x4d5 PushVec
	var_33_cvector = var_53_int - var_54_cvector; // 0x4d6 Sub2
	var_34_cvector = var_30_cvector + var_33_cvector; // 0x4d7 Add2
	IsOverrideActive(var_35_bool); // 0x4d8 Func
	var_55_bool = var_35_bool; // 0x4da Push
	if(var_55_bool == 0) goto Label_1246; // 0x4db JumpB
	var_18_bool = 0; // 0x4dc MovB
	return 16; // 0x4dd Return
	
Label_1246:
	StopWorld(); // 0x4de Func
	CameraTransit(var_34_cvector, var_32_cvector); // 0x4e0 Func
	var_56_float = GetByIndex(var_33_cvector, 0); // 0x4e2 PushE
	var_57_float = GetByIndex(var_33_cvector, 2); // 0x4e3 PushE
	Rotate(var_56_float, var_57_float); // 0x4e4 Func
	CameraWaitForPlayFinish(); // 0x4e6 Func
	ResumeWorld(); // 0x4e8 Func
	var_18_bool = 1; // 0x4ea MovB
	return 16; // 0x4eb Return
}


func_1589(var_154_bool)
{
	var_156_int = 0; var_157_string = ""; // 0x636 PushV
	var_157_string = "ood6Klara2"; // 0x637 MovS
	func_1305(var_156_int, var_157_string); // 0x638 Call
	var_158_int = 0; // 0x63a PushI
	var_159_bool = var_156_int == var_158_int; // 0x63b Eq
	if(var_159_bool == 0) goto Label_1599; // 0x63c JumpB
	var_154_bool = 1; // 0x63d MovB
	return 0; // 0x63e Return
	
Label_1599:
	var_154_bool = 0; // 0x63f MovB
	return 0; // 0x640 Return
}


func_1336(var_143_bool, var_144_string, var_145_string)
{
	var_146_object = Obj(); var_147_object = Obj(); // 0x538 PushV
	FindActor(var_147_object, var_144_string); // 0x539 Func
	var_148_bool = var_147_object == 0; // 0x53b NullEq
	if(var_148_bool == 0) goto Label_1343; // 0x53c JumpB
	var_143_bool = 0; // 0x53d MovB
	return 2; // 0x53e Return
	
Label_1343:
	Trigger(var_147_object, var_145_string); // 0x53f Func
	var_143_bool = 1; // 0x541 MovB
	return 2; // 0x542 Return
}


func_1725(var_61_int)
{
	var_62_int = 0; var_63_int = 0; // 0x6bd PushV
	var_64_string = "player"; // 0x6be PushS
	GetVariable(var_64_string, var_63_int); // 0x6bf Func
	var_65_int = 0; // 0x6c1 PushI
	var_66_bool = var_63_int == var_65_int; // 0x6c2 Eq
	if(var_66_bool == 0) goto Label_1735; // 0x6c3 JumpB
	var_61_int = 200001; // 0x6c4 MovI
	return 2; // 0x6c5 Return
	
Label_1735:
	var_67_int = 1; // 0x6c7 PushI
	var_68_bool = var_63_int == var_67_int; // 0x6c8 Eq
	if(var_68_bool == 0) goto Label_1740; // 0x6c9 JumpB
	var_61_int = 200002; // 0x6ca MovI
	return 2; // 0x6cb Return
	
Label_1740:
	var_61_int = 200003; // 0x6cc MovI
	return 2; // 0x6cd Return
}


func_63(var_0_object, var_1_object, var_2_object, var_3_string, var_70_object, var_71_object)
{
	var_0_object = var_71_object; // 0x40 TMov
	var_1_object = var_70_object; // 0x41 TMov
	var_3_string = 0; // 0x42 TMovB
	var_76_int = 1; // 0x43 PushI
	if(var_76_int == 0) goto Label_211; // 0x44 JumpB
	var_77_bool = 0; // 0x45 PushV
	var_77_bool = 1; // 0x46 MovB
	var_78_bool = 0; // 0x47 PushV
	var_78_bool = 0; // 0x48 MovB
	var_79_bool = 0; var_80_object = Obj(); // 0x49 PushV
	var_80_object = var_1_object; // 0x4a MovT
	func_1565(var_80_object); // 0x4b Call
	if(var_79_bool == 0) goto Label_84; // 0x4d JumpB
	var_87_bool = 0; var_88_object = Obj(); // 0x4e PushV
	var_88_object = var_1_object; // 0x4f MovT
	func_1529(var_88_object); // 0x50 Call
	if(var_87_bool == 0) goto Label_84; // 0x52 JumpB
	var_78_bool = 1; // 0x53 MovB
	
Label_84:
	if(var_78_bool == 0) goto Label_100; // 0x54 JumpB
	var_93_bool = 0; // 0x55 PushV
	var_93_bool = 0; // 0x56 MovB
	var_94_bool = 0; var_95_object = Obj(); // 0x57 PushV
	var_95_object = var_1_object; // 0x58 MovT
	func_1541(var_95_object); // 0x59 Call
	if(var_94_bool == 0) goto Label_98; // 0x5b JumpB
	var_100_bool = 0; var_101_object = Obj(); // 0x5c PushV
	var_101_object = var_1_object; // 0x5d MovT
	func_1565(var_101_object); // 0x5e Call
	if(var_100_bool == 0) goto Label_98; // 0x60 JumpB
	var_93_bool = 1; // 0x61 MovB
	
Label_98:
	if(var_93_bool == 0) goto Label_100; // 0x62 JumpB
	var_77_bool = 0; // 0x63 MovB
	
Label_100:
	if(var_77_bool == 0) goto Label_131; // 0x64 JumpB
	var_102_object = Obj(); var_103_object = Obj(); // 0x65 PushV
	var_102_object = var_1_object; // 0x66 MovT
	var_103_object = var_0_object; // 0x67 MovT
	func_1368(); // 0x68 Call
	var_106_string = ""; // 0x6a PushV
	var_106_string = "Neutral"; // 0x6b MovS
	func_241(var_71_object, var_106_string); // 0x6c Call
	var_121_int = 12737; // 0x6e PushI
	SetMessage(var_121_int); // 0x6f TObjFunc
	ClearReplies(); // 0x71 TObjFunc
	var_122_int = 12738; // 0x73 PushI
	var_123_int = 13933; // 0x74 PushI
	var_124_int = 13932; // 0x75 PushI
	AddReply(var_122_int, var_123_int, var_124_int); // 0x76 TObjFunc
	var_125_int = 12744; // 0x78 PushI
	var_126_int = 13965; // 0x79 PushI
	var_127_int = 13938; // 0x7a PushI
	AddReply(var_125_int, var_126_int, var_127_int); // 0x7b TObjFunc
	var_128_int = 12745; // 0x7d PushI
	var_129_int = 13954; // 0x7e PushI
	var_130_int = 13939; // 0x7f PushI
	AddReply(var_128_int, var_129_int, var_130_int); // 0x80 TObjFunc
	goto Label_211; // 0x82 Jump
	
Label_211:
	var_131_bool = 0; // 0xd3 PushV
	func_1762(var_131_bool); // 0xd4 Call
	if(var_131_bool == 0) goto Label_226; // 0xd6 JumpB
	
Label_215:
	lshWaitForAnimEnd(); // 0xd7 Func
	var_132_string = var_3_string; // 0xd9 PushT
	if(var_132_string == 0) goto Label_220; // 0xda JumpB
	goto Label_225; // 0xdb Jump
	
Label_225:
	goto Label_240; // 0xe1 Jump
	
Label_240:
	return 0; // 0xf0 Return
	
Label_220:
	var_133_string = ""; // 0xdc PushV
	var_133_string = var_2_object; // 0xdd MovT
	func_1264(var_133_string); // 0xde Call
	goto Label_215; // 0xe0 Jump
	
Label_226:
	var_134_string = "all"; // 0xe2 PushS
	var_135_string = "idle"; // 0xe3 PushS
	PlayAnimation(var_134_string, var_135_string); // 0xe4 Func
	
Label_230:
	WaitForAnimEnd(); // 0xe6 Func
	var_136_string = var_3_string; // 0xe8 PushT
	if(var_136_string == 0) goto Label_235; // 0xe9 JumpB
	goto Label_240; // 0xea Jump
	
Label_235:
	var_137_string = "all"; // 0xeb PushS
	var_138_string = "idle"; // 0xec PushS
	PlayAnimation(var_137_string, var_138_string); // 0xed Func
	goto Label_230; // 0xef Jump
	
Label_131:
	var_139_bool = 0; // 0x83 PushV
	var_139_bool = 1; // 0x84 MovB
	var_140_bool = 0; var_141_object = Obj(); // 0x85 PushV
	var_141_object = var_1_object; // 0x86 MovT
	func_1577(var_141_object); // 0x87 Call
	if(var_140_bool == 0) goto Label_144; // 0x89 JumpB
	var_146_bool = 0; var_147_object = Obj(); // 0x8a PushV
	var_147_object = var_1_object; // 0x8b MovT
	func_1553(var_147_object); // 0x8c Call
	if(var_146_bool == 0) goto Label_144; // 0x8e JumpB
	var_139_bool = 0; // 0x8f MovB
	
Label_144:
	if(var_139_bool == 0) goto Label_209; // 0x90 JumpB
	var_152_string = ""; // 0x91 PushV
	var_152_string = "Neutral"; // 0x92 MovS
	func_241(var_71_object, var_152_string); // 0x93 Call
	var_153_int = 12748; // 0x95 PushI
	SetMessage(var_153_int); // 0x96 TObjFunc
	ClearReplies(); // 0x98 TObjFunc
	var_154_bool = 0; var_155_object = Obj(); // 0x9a PushV
	var_155_object = var_1_object; // 0x9b MovT
	func_1589(var_155_object); // 0x9c Call
	if(var_154_bool == 0) goto Label_164; // 0x9e JumpB
	var_160_int = 12749; // 0x9f PushI
	var_161_int = 3753; // 0xa0 PushI
	var_162_int = 13943; // 0xa1 PushI
	AddReply(var_160_int, var_161_int, var_162_int); // 0xa2 TObjFunc
	
Label_164:
	var_163_bool = 0; // 0xa4 PushV
	var_163_bool = 0; // 0xa5 MovB
	var_164_bool = 0; // 0xa6 PushV
	var_164_bool = 0; // 0xa7 MovB
	var_165_bool = 0; // 0xa8 PushV
	var_165_bool = 0; // 0xa9 MovB
	var_166_bool = 0; var_167_object = Obj(); // 0xaa PushV
	var_167_object = var_1_object; // 0xab MovT
	func_1637(var_167_object); // 0xac Call
	if(var_166_bool == 0) goto Label_181; // 0xae JumpB
	var_172_bool = 0; var_173_object = Obj(); // 0xaf PushV
	var_173_object = var_1_object; // 0xb0 MovT
	func_1601(var_173_object); // 0xb1 Call
	if(var_172_bool == 0) goto Label_181; // 0xb3 JumpB
	var_165_bool = 1; // 0xb4 MovB
	
Label_181:
	if(var_165_bool == 0) goto Label_189; // 0xb5 JumpB
	var_178_bool = 0; var_179_object = Obj(); // 0xb6 PushV
	var_179_object = var_1_object; // 0xb7 MovT
	func_1613(var_179_object); // 0xb8 Call
	var_184_bool = var_178_bool == 0; // 0xba Not
	if(var_184_bool == 0) goto Label_189; // 0xbb JumpB
	var_164_bool = 1; // 0xbc MovB
	
Label_189:
	if(var_164_bool == 0) goto Label_197; // 0xbd JumpB
	var_185_bool = 0; var_186_object = Obj(); // 0xbe PushV
	var_186_object = var_1_object; // 0xbf MovT
	func_1625(var_186_object); // 0xc0 Call
	var_191_bool = var_185_bool == 0; // 0xc2 Not
	if(var_191_bool == 0) goto Label_197; // 0xc3 JumpB
	var_163_bool = 1; // 0xc4 MovB
	
Label_197:
	if(var_163_bool == 0) goto Label_203; // 0xc5 JumpB
	var_192_int = 12750; // 0xc6 PushI
	var_193_int = 11864; // 0xc7 PushI
	var_194_int = 13944; // 0xc8 PushI
	AddReply(var_192_int, var_193_int, var_194_int); // 0xc9 TObjFunc
	
Label_203:
	var_195_int = 12769; // 0xcb PushI
	var_196_int = -1; // 0xcc PushI
	var_197_int = 13968; // 0xcd PushI
	AddReply(var_195_int, var_196_int, var_197_int); // 0xce TObjFunc
	goto Label_211; // 0xd0 Jump
	
Label_209:
	return 0; // 0xd1 Return
}


func_1601(var_172_bool)
{
	var_174_int = 0; var_175_string = ""; // 0x642 PushV
	var_175_string = "microscope_d6q01_klara_blood"; // 0x643 MovS
	func_1305(var_174_int, var_175_string); // 0x644 Call
	var_176_int = 0; // 0x646 PushI
	var_177_bool = var_174_int != var_176_int; // 0x647 Neq
	if(var_177_bool == 0) goto Label_1611; // 0x648 JumpB
	var_172_bool = 1; // 0x649 MovB
	return 0; // 0x64a Return
	
Label_1611:
	var_172_bool = 0; // 0x64b MovB
	return 0; // 0x64c Return
}


func_1348(var_18_object)
{
	func_1742(); // 0x546 Call
	var_45_string = "klara blood is given"; // 0x548 PushS
	Trace(var_45_string); // 0x549 Func
	var_46_object = Obj(); var_47_string = ""; var_48_int = 0; // 0x54b PushV
	var_46_object = var_18_object; // 0x54c Mov
	var_47_string = "d6q01_klara_blood"; // 0x54d MovS
	var_48_int = 1; // 0x54e MovI
	func_1323(var_46_object, var_47_string, var_48_int); // 0x54f Call
	return 0; // 0x551 Return
}


func_1613(var_178_bool)
{
	var_180_int = 0; var_181_string = ""; // 0x64e PushV
	var_181_string = "d6q01"; // 0x64f MovS
	func_1305(var_180_int, var_181_string); // 0x650 Call
	var_182_int = 1000; // 0x652 PushI
	var_183_bool = var_180_int == var_182_int; // 0x653 Eq
	if(var_183_bool == 0) goto Label_1623; // 0x654 JumpB
	var_178_bool = 1; // 0x655 MovB
	return 0; // 0x656 Return
	
Label_1623:
	var_178_bool = 0; // 0x657 MovB
	return 0; // 0x658 Return
}


func_1742()
{
	var_20_object = Obj(); var_21_object = Obj(); // 0x6ce PushV
	var_22_string = "Adding diary entry"; // 0x6cf PushS
	Trace(var_22_string); // 0x6d0 Func
	var_23_int = 163; // 0x6d2 PushI
	var_24_int = 1; // 0x6d3 PushI
	var_25_int = 15405; // 0x6d4 PushI
	CreateDiaryEntry(var_21_object, var_23_int, var_24_int, var_25_int); // 0x6d5 Func
	var_26_bool = 0; var_27_object = Obj(); var_28_int = 0; // 0x6d7 PushV
	var_27_object = var_21_object; // 0x6d8 Mov
	var_28_int = 111; // 0x6d9 MovI
	func_1662(var_26_bool, var_27_object, var_28_int); // 0x6da Call
	return 2; // 0x6dc Return
}


func_1362()
{
	var_64_string = "playsound"; // 0x553 PushS
	var_65_string = "giveitem"; // 0x554 PushS
	TriggerWorld(var_64_string, var_65_string); // 0x555 Func
	return 0; // 0x557 Return
}


func_1368()
{
	var_104_string = "ood6Klara1"; // 0x559 PushS
	var_105_int = 1; // 0x55a PushI
	SetVariable(var_104_string, var_105_int); // 0x55b Func
	return 0; // 0x55d Return
}


func_1625(var_185_bool)
{
	var_187_int = 0; var_188_string = ""; // 0x65a PushV
	var_188_string = "d6q01"; // 0x65b MovS
	func_1305(var_187_int, var_188_string); // 0x65c Call
	var_189_int = -1; // 0x65e PushI
	var_190_bool = var_187_int == var_189_int; // 0x65f Eq
	if(var_190_bool == 0) goto Label_1635; // 0x660 JumpB
	var_185_bool = 1; // 0x661 MovB
	return 0; // 0x662 Return
	
Label_1635:
	var_185_bool = 0; // 0x663 MovB
	return 0; // 0x664 Return
}


func_1758(var_59_int)
{
	var_59_int = 2865; // 0x6de MovI
	return 0; // 0x6df Return
}


func_1374()
{
	var_14_string = "ood6Klara2"; // 0x55f PushS
	var_15_int = 1; // 0x560 PushI
	SetVariable(var_14_string, var_15_int); // 0x561 Func
	return 0; // 0x563 Return
}


func_1760(var_60_string)
{
	var_60_string = "ui/NPC_Klara.png"; // 0x6e0 MovS
	return 0; // 0x6e1 Return
}


func_1762(var_107_bool)
{
	var_107_bool = 1; // 0x6e2 MovB
	return 0; // 0x6e3 Return
}


func_1380()
{
	var_82_object = Obj(); var_83_object = Obj(); var_84_object = Obj(); var_85_object = Obj(); // 0x564 PushV
	var_86_string = "d6q01KlaraVolonteer"; // 0x565 PushS
	var_87_int = 1; // 0x566 PushI
	SetVariable(var_86_string, var_87_int); // 0x567 Func
	var_88_object = Obj(); // 0x569 PushV
	func_1708(var_88_object); // 0x56a Call
	var_84_object = var_88_object; // 0x56b Mov
	var_95_string = "d6q01AlexandrGotoJulia"; // 0x56d PushS
	FindMark(var_85_object, var_95_string); // 0x56e ObjFunc
	var_96_object = var_85_object; // 0x570 Push
	if(var_96_object == 0) goto Label_1396; // 0x571 JumpB
	Remove(); // 0x572 ObjFunc
	
Label_1396:
	var_97_string = "d6q01AlexandrGotoKaterina"; // 0x574 PushS
	FindMark(var_85_object, var_97_string); // 0x575 ObjFunc
	var_98_object = var_85_object; // 0x577 Push
	if(var_98_object == 0) goto Label_1403; // 0x578 JumpB
	Remove(); // 0x579 ObjFunc
	
Label_1403:
	var_99_string = "d6q01AlexandrGotoLara"; // 0x57b PushS
	FindMark(var_85_object, var_99_string); // 0x57c ObjFunc
	var_100_object = var_85_object; // 0x57e Push
	if(var_100_object == 0) goto Label_1410; // 0x57f JumpB
	Remove(); // 0x580 ObjFunc
	
Label_1410:
	var_101_string = "d6q01AlexangrGotoJulLaraSelf"; // 0x582 PushS
	FindMark(var_85_object, var_101_string); // 0x583 ObjFunc
	var_102_object = var_85_object; // 0x585 Push
	if(var_102_object == 0) goto Label_1417; // 0x586 JumpB
	Remove(); // 0x587 ObjFunc
	
Label_1417:
	var_103_string = "d6q01BigVladGotoAnna"; // 0x589 PushS
	FindMark(var_85_object, var_103_string); // 0x58a ObjFunc
	var_104_object = var_85_object; // 0x58c Push
	if(var_104_object == 0) goto Label_1424; // 0x58d JumpB
	Remove(); // 0x58e ObjFunc
	
Label_1424:
	var_105_string = "d6q01BigVladGotoAnnaOspinaSelf"; // 0x590 PushS
	FindMark(var_85_object, var_105_string); // 0x591 ObjFunc
	var_106_object = var_85_object; // 0x593 Push
	if(var_106_object == 0) goto Label_1431; // 0x594 JumpB
	Remove(); // 0x595 ObjFunc
	
Label_1431:
	var_107_string = "d6q01BigVladGotoOspina"; // 0x597 PushS
	FindMark(var_85_object, var_107_string); // 0x598 ObjFunc
	var_108_object = var_85_object; // 0x59a Push
	if(var_108_object == 0) goto Label_1438; // 0x59b JumpB
	Remove(); // 0x59c ObjFunc
	
Label_1438:
	var_109_string = "d6q01KaterinaGotoLaska"; // 0x59e PushS
	FindMark(var_85_object, var_109_string); // 0x59f ObjFunc
	var_110_object = var_85_object; // 0x5a1 Push
	if(var_110_object == 0) goto Label_1445; // 0x5a2 JumpB
	Remove(); // 0x5a3 ObjFunc
	
Label_1445:
	var_111_string = "d6q01KaterinagotoLaskaSelf"; // 0x5a5 PushS
	FindMark(var_85_object, var_111_string); // 0x5a6 ObjFunc
	var_112_object = var_85_object; // 0x5a8 Push
	if(var_112_object == 0) goto Label_1452; // 0x5a9 JumpB
	Remove(); // 0x5aa ObjFunc
	
Label_1452:
	var_113_string = "d6q01KillerIsKlara"; // 0x5ac PushS
	FindMark(var_85_object, var_113_string); // 0x5ad ObjFunc
	var_114_object = var_85_object; // 0x5af Push
	if(var_114_object == 0) goto Label_1459; // 0x5b0 JumpB
	Remove(); // 0x5b1 ObjFunc
	
Label_1459:
	var_115_string = "d6q01LaskaGotoAlbinos"; // 0x5b3 PushS
	FindMark(var_85_object, var_115_string); // 0x5b4 ObjFunc
	var_116_object = var_85_object; // 0x5b6 Push
	if(var_116_object == 0) goto Label_1466; // 0x5b7 JumpB
	Remove(); // 0x5b8 ObjFunc
	
Label_1466:
	var_117_string = "d6q01ViktorGotoAlexandr"; // 0x5ba PushS
	FindMark(var_85_object, var_117_string); // 0x5bb ObjFunc
	var_118_object = var_85_object; // 0x5bd Push
	if(var_118_object == 0) goto Label_1473; // 0x5be JumpB
	Remove(); // 0x5bf ObjFunc
	
Label_1473:
	var_119_string = "d6q01ViktorGotoAlxBigSelf"; // 0x5c1 PushS
	FindMark(var_85_object, var_119_string); // 0x5c2 ObjFunc
	var_120_object = var_85_object; // 0x5c4 Push
	if(var_120_object == 0) goto Label_1480; // 0x5c5 JumpB
	Remove(); // 0x5c6 ObjFunc
	
Label_1480:
	var_121_string = "d6q01ViktorGotoBigVlad"; // 0x5c8 PushS
	FindMark(var_85_object, var_121_string); // 0x5c9 ObjFunc
	var_122_object = var_85_object; // 0x5cb Push
	if(var_122_object == 0) goto Label_1487; // 0x5cc JumpB
	Remove(); // 0x5cd ObjFunc
	
Label_1487:
	var_123_bool = 0; var_124_int = 0; // 0x5cf PushV
	var_124_int = 112; // 0x5d0 MovI
	func_1691(var_123_bool, var_124_int); // 0x5d1 Call
	var_131_bool = 0; var_132_int = 0; // 0x5d3 PushV
	var_132_int = 113; // 0x5d4 MovI
	func_1691(var_131_bool, var_132_int); // 0x5d5 Call
	var_133_bool = 0; var_134_int = 0; // 0x5d7 PushV
	var_134_int = 114; // 0x5d8 MovI
	func_1691(var_133_bool, var_134_int); // 0x5d9 Call
	var_135_bool = 0; var_136_int = 0; // 0x5db PushV
	var_136_int = 115; // 0x5dc MovI
	func_1691(var_135_bool, var_136_int); // 0x5dd Call
	var_137_bool = 0; var_138_int = 0; // 0x5df PushV
	var_138_int = 116; // 0x5e0 MovI
	func_1691(var_137_bool, var_138_int); // 0x5e1 Call
	var_139_bool = 0; var_140_int = 0; // 0x5e3 PushV
	var_140_int = 117; // 0x5e4 MovI
	func_1691(var_139_bool, var_140_int); // 0x5e5 Call
	var_141_bool = 0; var_142_int = 0; // 0x5e7 PushV
	var_142_int = 122; // 0x5e8 MovI
	func_1691(var_141_bool, var_142_int); // 0x5e9 Call
	var_143_bool = 0; var_144_string = ""; var_145_string = ""; // 0x5eb PushV
	var_144_string = "quest_d6_01"; // 0x5ec MovS
	var_145_string = "completed"; // 0x5ed MovS
	func_1336(var_143_bool, var_144_string, var_145_string); // 0x5ee Call
	return 4; // 0x5f0 Return
}


func_1637(var_166_bool)
{
	var_168_int = 0; var_169_string = ""; // 0x666 PushV
	var_169_string = "ood6Klara3"; // 0x667 MovS
	func_1305(var_168_int, var_169_string); // 0x668 Call
	var_170_int = 0; // 0x66a PushI
	var_171_bool = var_168_int == var_170_int; // 0x66b Eq
	if(var_171_bool == 0) goto Label_1647; // 0x66c JumpB
	var_166_bool = 1; // 0x66d MovB
	return 0; // 0x66e Return
	
Label_1647:
	var_166_bool = 0; // 0x66f MovB
	return 0; // 0x670 Return
}


func_1260()
{
	CameraSwitchToNormal(); // 0x4ed Func
	return 0; // 0x4ef Return
}


func_1264(var_110_string)
{
	var_111_float = 0; var_112_float = 0; var_113_float = 0; var_114_float = 0; // 0x4f0 PushV
	var_115_string = "playing "; // 0x4f1 PushS
	var_116_int = var_115_string + var_110_string; // 0x4f2 Add
	Trace(var_116_int); // 0x4f3 Func
	lshGetAnimTimes(var_110_string, var_113_float, var_114_float); // 0x4f5 Func
	lshPlayAnimation(var_113_float, var_114_float); // 0x4f7 Func
	var_117_string = "start: "; // 0x4f9 PushS
	var_118_int = var_117_string + var_113_float; // 0x4fa Add
	Trace(var_118_int); // 0x4fb Func
	var_119_string = "end: "; // 0x4fd PushS
	var_120_int = var_119_string + var_114_float; // 0x4fe Add
	Trace(var_120_int); // 0x4ff Func
	return 4; // 0x501 Return
}


func_241(var_2_object, var_106_string)
{
	var_107_bool = 0; // 0xf2 PushV
	func_1762(var_107_bool); // 0xf3 Call
	var_108_bool = var_107_bool == 0; // 0xf5 Not
	if(var_108_bool == 0) goto Label_248; // 0xf6 JumpB
	return 0; // 0xf7 Return
	
Label_248:
	var_109_bool = var_106_string == var_2_object; // 0xf8 Eq
	if(var_109_bool == 0) goto Label_251; // 0xf9 JumpB
	return 0; // 0xfa Return
	
Label_251:
	var_110_string = ""; // 0xfb PushV
	var_110_string = var_106_string; // 0xfc Mov
	func_1264(var_110_string); // 0xfd Call
	var_2_object = var_106_string; // 0xff TMov
	return 0; // 0x100 Return
}


func_1649(var_35_object)
{
	var_36_object = Obj(); var_37_object = Obj(); // 0x671 PushV
	GetDiaryRoot(var_37_object); // 0x672 Func
	var_38_bool = var_37_object == 0; // 0x674 Not
	if(var_38_bool == 0) goto Label_1659; // 0x675 JumpB
	var_39_string = "Can't retrieve diary root"; // 0x676 PushS
	Trace(var_39_string); // 0x677 Func
	var_35_object = 0; // 0x679 MovB
	return 2; // 0x67a Return
	
Label_1659:
	var_35_object = var_37_object; // 0x67b Mov
	return 2; // 0x67c Return
}


func_1523()
{
	var_76_string = "ood6Klara3"; // 0x5f4 PushS
	var_77_int = 1; // 0x5f5 PushI
	SetVariable(var_76_string, var_77_int); // 0x5f6 Func
	return 0; // 0x5f8 Return
}


func_1529(var_87_bool)
{
	var_89_int = 0; var_90_string = ""; // 0x5fa PushV
	var_90_string = "d6q01"; // 0x5fb MovS
	func_1305(var_89_int, var_90_string); // 0x5fc Call
	var_91_int = 2; // 0x5fe PushI
	var_92_bool = var_89_int == var_91_int; // 0x5ff Eq
	if(var_92_bool == 0) goto Label_1539; // 0x600 JumpB
	var_87_bool = 1; // 0x601 MovB
	return 0; // 0x602 Return
	
Label_1539:
	var_87_bool = 0; // 0x603 MovB
	return 0; // 0x604 Return
}


func_1662(var_26_bool, var_27_object, var_28_int)
{
	var_29_object = Obj(); var_30_object = Obj(); var_31_int = 0; var_32_object = Obj(); var_33_object = Obj(); var_34_int = 0; // 0x67e PushV
	var_35_object = Obj(); // 0x67f PushV
	func_1649(var_35_object); // 0x680 Call
	var_32_object = var_35_object; // 0x681 Mov
	Find(var_28_int, var_33_object); // 0x683 ObjFunc
	var_40_bool = var_33_object == 0; // 0x685 Not
	if(var_40_bool == 0) goto Label_1677; // 0x686 JumpB
	var_41_string = "Can't find diary parent with id: "; // 0x687 PushS
	var_42_int = var_41_string + var_28_int; // 0x688 Add
	Trace(var_42_int); // 0x689 Func
	var_26_bool = 0; // 0x68b MovB
	return 6; // 0x68c Return
	
Label_1677:
	AddChild(var_27_object); // 0x68d ObjFunc
	var_43_string = "player_diary"; // 0x68f PushS
	var_44_int = 1; // 0x690 PushI
	SetVariable(var_43_string, var_44_int); // 0x691 Func
	GetCategory(var_34_int); // 0x693 ObjFunc
	SetDiarySection(var_34_int); // 0x695 Func
	var_26_bool = 0; // 0x697 MovB
	return 6; // 0x698 Return
}


