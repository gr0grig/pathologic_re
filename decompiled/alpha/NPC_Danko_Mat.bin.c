task_0_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool)
{
	StopGroup0(); // 0x3 Func
	return 0; // 0x5 Return
}


task_1_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool)
{
	TaskCall(0); // 0x1e TaskCall
	func_0(); // 0x1f Call
	TaskReturn(); // 0x20 TaskReturn
	return 0; // 0x22 Return
}


task_1_event_0(var_0_object, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool)
{
	var_6_object = Obj(); // 0x24 PushV
	var_6_object = var_5_bool; // 0x25 Mov
	func_2220(var_6_object); // 0x26 Call
	return 0; // 0x28 Return
}


task_1_event_10(var_0_object, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool)
{
	var_6_bool = 0; var_7_object = Obj(); // 0x2a PushV
	var_7_object = var_5_bool; // 0x2b Mov
	func_1552(var_7_object); // 0x2c Call
	WaitForAnimEnd(); // 0x2e Func
	return 0; // 0x30 Return
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int)
{
	var_7_int = 1; // 0x16e PushI
	if(var_7_int == 0) goto Label_1551; // 0x16f JumpB
	func_1647(); // 0x171 Call
	var_9_int = 14805; // 0x173 PushI
	var_10_bool = var_6_int == var_9_int; // 0x174 Eq
	if(var_10_bool == 0) goto Label_379; // 0x175 JumpB
	var_11_object = Obj(); var_12_object = Obj(); // 0x176 PushV
	var_11_object = var_1_object; // 0x177 MovT
	var_12_object = var_0_object; // 0x178 MovT
	func_1737(); // 0x179 Call
	
Label_379:
	var_40_int = 14811; // 0x17b PushI
	var_41_bool = var_6_int == var_40_int; // 0x17c Eq
	if(var_41_bool == 0) goto Label_392; // 0x17d JumpB
	var_42_object = Obj(); var_43_object = Obj(); // 0x17e PushV
	var_42_object = var_1_object; // 0x17f MovT
	var_43_object = var_0_object; // 0x180 MovT
	func_1746(); // 0x181 Call
	var_71_object = Obj(); var_72_object = Obj(); // 0x183 PushV
	var_71_object = var_1_object; // 0x184 MovT
	var_72_object = var_0_object; // 0x185 MovT
	func_1845(); // 0x186 Call
	
Label_392:
	var_97_int = 14812; // 0x188 PushI
	var_98_bool = var_6_int == var_97_int; // 0x189 Eq
	if(var_98_bool == 0) goto Label_400; // 0x18a JumpB
	var_99_object = Obj(); var_100_object = Obj(); // 0x18b PushV
	var_99_object = var_1_object; // 0x18c MovT
	var_100_object = var_0_object; // 0x18d MovT
	func_1769(); // 0x18e Call
	
Label_400:
	var_103_int = 14816; // 0x190 PushI
	var_104_bool = var_6_int == var_103_int; // 0x191 Eq
	if(var_104_bool == 0) goto Label_408; // 0x192 JumpB
	var_105_object = Obj(); var_106_object = Obj(); // 0x193 PushV
	var_105_object = var_1_object; // 0x194 MovT
	var_106_object = var_0_object; // 0x195 MovT
	func_1775(); // 0x196 Call
	
Label_408:
	var_122_int = 13511; // 0x198 PushI
	var_123_bool = var_6_int == var_122_int; // 0x199 Eq
	if(var_123_bool == 0) goto Label_416; // 0x19a JumpB
	var_124_object = Obj(); var_125_object = Obj(); // 0x19b PushV
	var_124_object = var_1_object; // 0x19c MovT
	var_125_object = var_0_object; // 0x19d MovT
	func_1785(); // 0x19e Call
	
Label_416:
	var_128_int = 13526; // 0x1a0 PushI
	var_129_bool = var_6_int == var_128_int; // 0x1a1 Eq
	if(var_129_bool == 0) goto Label_424; // 0x1a2 JumpB
	var_130_object = Obj(); var_131_object = Obj(); // 0x1a3 PushV
	var_130_object = var_1_object; // 0x1a4 MovT
	var_131_object = var_0_object; // 0x1a5 MovT
	func_1791(); // 0x1a6 Call
	
Label_424:
	var_134_int = 13517; // 0x1a8 PushI
	var_135_bool = var_6_int == var_134_int; // 0x1a9 Eq
	if(var_135_bool == 0) goto Label_432; // 0x1aa JumpB
	var_136_object = Obj(); var_137_object = Obj(); // 0x1ab PushV
	var_136_object = var_1_object; // 0x1ac MovT
	var_137_object = var_0_object; // 0x1ad MovT
	func_1797(); // 0x1ae Call
	
Label_432:
	var_140_int = 14996; // 0x1b0 PushI
	var_141_bool = var_6_int == var_140_int; // 0x1b1 Eq
	if(var_141_bool == 0) goto Label_440; // 0x1b2 JumpB
	var_142_object = Obj(); var_143_object = Obj(); // 0x1b3 PushV
	var_142_object = var_1_object; // 0x1b4 MovT
	var_143_object = var_0_object; // 0x1b5 MovT
	func_1803(); // 0x1b6 Call
	
Label_440:
	var_146_int = 15004; // 0x1b8 PushI
	var_147_bool = var_6_int == var_146_int; // 0x1b9 Eq
	if(var_147_bool == 0) goto Label_448; // 0x1ba JumpB
	var_148_object = Obj(); var_149_object = Obj(); // 0x1bb PushV
	var_148_object = var_1_object; // 0x1bc MovT
	var_149_object = var_0_object; // 0x1bd MovT
	func_1775(); // 0x1be Call
	
Label_448:
	var_150_int = 14817; // 0x1c0 PushI
	var_151_bool = var_6_int == var_150_int; // 0x1c1 Eq
	if(var_151_bool == 0) goto Label_456; // 0x1c2 JumpB
	var_152_object = Obj(); var_153_object = Obj(); // 0x1c3 PushV
	var_152_object = var_1_object; // 0x1c4 MovT
	var_153_object = var_0_object; // 0x1c5 MovT
	func_1809(); // 0x1c6 Call
	
Label_456:
	var_156_int = 15002; // 0x1c8 PushI
	var_157_bool = var_6_int == var_156_int; // 0x1c9 Eq
	if(var_157_bool == 0) goto Label_464; // 0x1ca JumpB
	var_158_object = Obj(); var_159_object = Obj(); // 0x1cb PushV
	var_158_object = var_1_object; // 0x1cc MovT
	var_159_object = var_0_object; // 0x1cd MovT
	func_1775(); // 0x1ce Call
	
Label_464:
	var_160_int = 15007; // 0x1d0 PushI
	var_161_bool = var_6_int == var_160_int; // 0x1d1 Eq
	if(var_161_bool == 0) goto Label_487; // 0x1d2 JumpB
	var_162_object = Obj(); var_163_object = Obj(); // 0x1d3 PushV
	var_162_object = var_1_object; // 0x1d4 MovT
	var_163_object = var_0_object; // 0x1d5 MovT
	func_1839(); // 0x1d6 Call
	var_168_object = Obj(); var_169_object = Obj(); // 0x1d8 PushV
	var_168_object = var_1_object; // 0x1d9 MovT
	var_169_object = var_0_object; // 0x1da MovT
	func_1723(); // 0x1db Call
	var_172_object = Obj(); var_173_object = Obj(); // 0x1dd PushV
	var_172_object = var_1_object; // 0x1de MovT
	var_173_object = var_0_object; // 0x1df MovT
	func_1821(); // 0x1e0 Call
	var_185_object = Obj(); var_186_object = Obj(); // 0x1e2 PushV
	var_185_object = var_1_object; // 0x1e3 MovT
	var_186_object = var_0_object; // 0x1e4 MovT
	func_1729(); // 0x1e5 Call
	
Label_487:
	var_187_int = 15010; // 0x1e7 PushI
	var_188_bool = var_6_int == var_187_int; // 0x1e8 Eq
	if(var_188_bool == 0) goto Label_495; // 0x1e9 JumpB
	var_189_object = Obj(); var_190_object = Obj(); // 0x1ea PushV
	var_189_object = var_1_object; // 0x1eb MovT
	var_190_object = var_0_object; // 0x1ec MovT
	func_1830(); // 0x1ed Call
	
Label_495:
	var_202_int = 14737; // 0x1ef PushI
	var_203_bool = var_5_int == var_202_int; // 0x1f0 Eq
	if(var_203_bool == 0) goto Label_697; // 0x1f1 JumpB
	var_204_bool = 0; // 0x1f2 PushV
	var_204_bool = 0; // 0x1f3 MovB
	var_205_bool = 0; var_206_object = Obj(); // 0x1f4 PushV
	var_206_object = var_1_object; // 0x1f5 MovT
	func_1861(var_206_object); // 0x1f6 Call
	if(var_205_bool == 0) goto Label_511; // 0x1f8 JumpB
	var_213_bool = 0; var_214_object = Obj(); // 0x1f9 PushV
	var_214_object = var_1_object; // 0x1fa MovT
	func_1873(var_214_object); // 0x1fb Call
	if(var_213_bool == 0) goto Label_511; // 0x1fd JumpB
	var_204_bool = 1; // 0x1fe MovB
	
Label_511:
	if(var_204_bool == 0) goto Label_542; // 0x1ff JumpB
	var_219_object = Obj(); var_220_object = Obj(); // 0x200 PushV
	var_219_object = var_1_object; // 0x201 MovT
	var_220_object = var_0_object; // 0x202 MovT
	func_1731(); // 0x203 Call
	var_223_object = Obj(); var_224_object = Obj(); // 0x205 PushV
	var_223_object = var_1_object; // 0x206 MovT
	var_224_object = var_0_object; // 0x207 MovT
	func_1815(); // 0x208 Call
	var_227_string = ""; // 0x20a PushV
	var_227_string = "Neutral"; // 0x20b MovS
	func_349(var_6_int, var_227_string); // 0x20c Call
	var_242_int = 13496; // 0x20e PushI
	SetMessage(var_242_int); // 0x20f TObjFunc
	ClearReplies(); // 0x211 TObjFunc
	var_243_int = 13504; // 0x213 PushI
	var_244_int = 14773; // 0x214 PushI
	var_245_int = 14746; // 0x215 PushI
	AddReply(var_243_int, var_244_int, var_245_int); // 0x216 TObjFunc
	var_246_int = 13505; // 0x218 PushI
	var_247_int = 14748; // 0x219 PushI
	var_248_int = 14747; // 0x21a PushI
	AddReply(var_246_int, var_247_int, var_248_int); // 0x21b TObjFunc
	return 0; // 0x21d Return
	
Label_542:
	var_249_object = Obj(); var_250_object = Obj(); // 0x21e PushV
	var_249_object = var_1_object; // 0x21f MovT
	var_250_object = var_0_object; // 0x220 MovT
	func_1815(); // 0x221 Call
	var_251_string = ""; // 0x223 PushV
	var_251_string = "Neutral"; // 0x224 MovS
	func_349(var_6_int, var_251_string); // 0x225 Call
	var_252_int = 12350; // 0x227 PushI
	SetMessage(var_252_int); // 0x228 TObjFunc
	ClearReplies(); // 0x22a TObjFunc
	var_253_bool = 0; // 0x22c PushV
	var_253_bool = 0; // 0x22d MovB
	var_254_bool = 0; // 0x22e PushV
	var_254_bool = 0; // 0x22f MovB
	var_255_bool = 0; var_256_object = Obj(); // 0x230 PushV
	var_256_object = var_1_object; // 0x231 MovT
	func_1885(var_256_object); // 0x232 Call
	if(var_255_bool == 0) goto Label_571; // 0x234 JumpB
	var_261_bool = 0; var_262_object = Obj(); // 0x235 PushV
	var_262_object = var_1_object; // 0x236 MovT
	func_1897(var_261_bool, var_262_object); // 0x237 Call
	if(var_261_bool == 0) goto Label_571; // 0x239 JumpB
	var_254_bool = 1; // 0x23a MovB
	
Label_571:
	if(var_254_bool == 0) goto Label_578; // 0x23b JumpB
	var_270_bool = 0; var_271_object = Obj(); // 0x23c PushV
	var_271_object = var_1_object; // 0x23d MovT
	func_1908(var_271_object); // 0x23e Call
	if(var_270_bool == 0) goto Label_578; // 0x240 JumpB
	var_253_bool = 1; // 0x241 MovB
	
Label_578:
	if(var_253_bool == 0) goto Label_584; // 0x242 JumpB
	var_276_int = 13563; // 0x243 PushI
	var_277_int = 14813; // 0x244 PushI
	var_278_int = 14812; // 0x245 PushI
	AddReply(var_276_int, var_277_int, var_278_int); // 0x246 TObjFunc
	
Label_584:
	var_279_bool = 0; var_280_object = Obj(); // 0x248 PushV
	var_280_object = var_1_object; // 0x249 MovT
	func_1920(var_280_object); // 0x24a Call
	if(var_279_bool == 0) goto Label_594; // 0x24c JumpB
	var_285_int = 12352; // 0x24d PushI
	var_286_int = 13512; // 0x24e PushI
	var_287_int = 13511; // 0x24f PushI
	AddReply(var_285_int, var_286_int, var_287_int); // 0x250 TObjFunc
	
Label_594:
	var_288_bool = 0; var_289_object = Obj(); // 0x252 PushV
	var_289_object = var_1_object; // 0x253 MovT
	func_1932(var_289_object); // 0x254 Call
	if(var_288_bool == 0) goto Label_604; // 0x256 JumpB
	var_294_int = 12366; // 0x257 PushI
	var_295_int = 13527; // 0x258 PushI
	var_296_int = 13526; // 0x259 PushI
	AddReply(var_294_int, var_295_int, var_296_int); // 0x25a TObjFunc
	
Label_604:
	var_297_bool = 0; var_298_object = Obj(); // 0x25c PushV
	var_298_object = var_1_object; // 0x25d MovT
	func_1944(var_298_object); // 0x25e Call
	if(var_297_bool == 0) goto Label_614; // 0x260 JumpB
	var_303_int = 12357; // 0x261 PushI
	var_304_int = 13518; // 0x262 PushI
	var_305_int = 13517; // 0x263 PushI
	AddReply(var_303_int, var_304_int, var_305_int); // 0x264 TObjFunc
	
Label_614:
	var_306_bool = 0; // 0x266 PushV
	var_306_bool = 0; // 0x267 MovB
	var_307_bool = 0; var_308_object = Obj(); // 0x268 PushV
	var_308_object = var_1_object; // 0x269 MovT
	func_1956(var_308_object); // 0x26a Call
	if(var_307_bool == 0) goto Label_627; // 0x26c JumpB
	var_313_bool = 0; var_314_object = Obj(); // 0x26d PushV
	var_314_object = var_1_object; // 0x26e MovT
	func_1980(var_314_object); // 0x26f Call
	if(var_313_bool == 0) goto Label_627; // 0x271 JumpB
	var_306_bool = 1; // 0x272 MovB
	
Label_627:
	if(var_306_bool == 0) goto Label_633; // 0x273 JumpB
	var_319_int = 13752; // 0x274 PushI
	var_320_int = 14997; // 0x275 PushI
	var_321_int = 14996; // 0x276 PushI
	AddReply(var_319_int, var_320_int, var_321_int); // 0x277 TObjFunc
	
Label_633:
	var_322_bool = 0; // 0x279 PushV
	var_322_bool = 0; // 0x27a MovB
	var_323_bool = 0; var_324_object = Obj(); // 0x27b PushV
	var_324_object = var_1_object; // 0x27c MovT
	func_1968(var_324_object); // 0x27d Call
	if(var_323_bool == 0) goto Label_646; // 0x27f JumpB
	var_329_bool = 0; var_330_object = Obj(); // 0x280 PushV
	var_330_object = var_1_object; // 0x281 MovT
	func_1992(var_330_object); // 0x282 Call
	if(var_329_bool == 0) goto Label_646; // 0x284 JumpB
	var_322_bool = 1; // 0x285 MovB
	
Label_646:
	if(var_322_bool == 0) goto Label_652; // 0x286 JumpB
	var_335_int = 13568; // 0x287 PushI
	var_336_int = 14818; // 0x288 PushI
	var_337_int = 14817; // 0x289 PushI
	AddReply(var_335_int, var_336_int, var_337_int); // 0x28a TObjFunc
	
Label_652:
	var_338_bool = 0; // 0x28c PushV
	var_338_bool = 0; // 0x28d MovB
	var_339_bool = 0; var_340_object = Obj(); // 0x28e PushV
	var_340_object = var_1_object; // 0x28f MovT
	func_2004(var_340_object); // 0x290 Call
	if(var_339_bool == 0) goto Label_665; // 0x292 JumpB
	var_345_bool = 0; var_346_object = Obj(); // 0x293 PushV
	var_346_object = var_1_object; // 0x294 MovT
	func_2016(var_345_bool, var_346_object); // 0x295 Call
	if(var_345_bool == 0) goto Label_665; // 0x297 JumpB
	var_338_bool = 1; // 0x298 MovB
	
Label_665:
	if(var_338_bool == 0) goto Label_671; // 0x299 JumpB
	var_350_int = 13766; // 0x29a PushI
	var_351_int = 15006; // 0x29b PushI
	var_352_int = 15005; // 0x29c PushI
	AddReply(var_350_int, var_351_int, var_352_int); // 0x29d TObjFunc
	
Label_671:
	var_353_bool = 0; // 0x29f PushV
	var_353_bool = 0; // 0x2a0 MovB
	var_354_bool = 0; var_355_object = Obj(); // 0x2a1 PushV
	var_355_object = var_1_object; // 0x2a2 MovT
	func_2004(var_355_object); // 0x2a3 Call
	if(var_354_bool == 0) goto Label_685; // 0x2a5 JumpB
	var_356_bool = 0; var_357_object = Obj(); // 0x2a6 PushV
	var_357_object = var_1_object; // 0x2a7 MovT
	func_2016(var_356_bool, var_357_object); // 0x2a8 Call
	var_358_bool = var_356_bool == 0; // 0x2aa Not
	if(var_358_bool == 0) goto Label_685; // 0x2ab JumpB
	var_353_bool = 1; // 0x2ac MovB
	
Label_685:
	if(var_353_bool == 0) goto Label_691; // 0x2ad JumpB
	var_359_int = 13769; // 0x2ae PushI
	var_360_int = 15009; // 0x2af PushI
	var_361_int = 15008; // 0x2b0 PushI
	AddReply(var_359_int, var_360_int, var_361_int); // 0x2b1 TObjFunc
	
Label_691:
	var_362_int = 12351; // 0x2b3 PushI
	var_363_int = -1; // 0x2b4 PushI
	var_364_int = 13510; // 0x2b5 PushI
	AddReply(var_362_int, var_363_int, var_364_int); // 0x2b6 TObjFunc
	return 0; // 0x2b8 Return
	
Label_697:
	var_365_int = 15009; // 0x2b9 PushI
	var_366_bool = var_5_int == var_365_int; // 0x2ba Eq
	if(var_366_bool == 0) goto Label_715; // 0x2bb JumpB
	var_367_string = ""; // 0x2bc PushV
	var_367_string = "Neutral"; // 0x2bd MovS
	func_349(var_6_int, var_367_string); // 0x2be Call
	var_368_int = 13770; // 0x2c0 PushI
	SetMessage(var_368_int); // 0x2c1 TObjFunc
	ClearReplies(); // 0x2c3 TObjFunc
	var_369_int = 13771; // 0x2c5 PushI
	var_370_int = -1; // 0x2c6 PushI
	var_371_int = 15010; // 0x2c7 PushI
	AddReply(var_369_int, var_370_int, var_371_int); // 0x2c8 TObjFunc
	return 0; // 0x2ca Return
	
Label_715:
	var_372_int = 15006; // 0x2cb PushI
	var_373_bool = var_5_int == var_372_int; // 0x2cc Eq
	if(var_373_bool == 0) goto Label_733; // 0x2cd JumpB
	var_374_string = ""; // 0x2ce PushV
	var_374_string = "Neutral"; // 0x2cf MovS
	func_349(var_6_int, var_374_string); // 0x2d0 Call
	var_375_int = 13767; // 0x2d2 PushI
	SetMessage(var_375_int); // 0x2d3 TObjFunc
	ClearReplies(); // 0x2d5 TObjFunc
	var_376_int = 13768; // 0x2d7 PushI
	var_377_int = -1; // 0x2d8 PushI
	var_378_int = 15007; // 0x2d9 PushI
	AddReply(var_376_int, var_377_int, var_378_int); // 0x2da TObjFunc
	return 0; // 0x2dc Return
	
Label_733:
	var_379_int = 14818; // 0x2dd PushI
	var_380_bool = var_5_int == var_379_int; // 0x2de Eq
	if(var_380_bool == 0) goto Label_751; // 0x2df JumpB
	var_381_string = ""; // 0x2e0 PushV
	var_381_string = "Neutral"; // 0x2e1 MovS
	func_349(var_6_int, var_381_string); // 0x2e2 Call
	var_382_int = 13569; // 0x2e4 PushI
	SetMessage(var_382_int); // 0x2e5 TObjFunc
	ClearReplies(); // 0x2e7 TObjFunc
	var_383_int = 13570; // 0x2e9 PushI
	var_384_int = 14820; // 0x2ea PushI
	var_385_int = 14819; // 0x2eb PushI
	AddReply(var_383_int, var_384_int, var_385_int); // 0x2ec TObjFunc
	return 0; // 0x2ee Return
	
Label_751:
	var_386_int = 14820; // 0x2ef PushI
	var_387_bool = var_5_int == var_386_int; // 0x2f0 Eq
	if(var_387_bool == 0) goto Label_769; // 0x2f1 JumpB
	var_388_string = ""; // 0x2f2 PushV
	var_388_string = "Neutral"; // 0x2f3 MovS
	func_349(var_6_int, var_388_string); // 0x2f4 Call
	var_389_int = 13571; // 0x2f6 PushI
	SetMessage(var_389_int); // 0x2f7 TObjFunc
	ClearReplies(); // 0x2f9 TObjFunc
	var_390_int = 13572; // 0x2fb PushI
	var_391_int = 15001; // 0x2fc PushI
	var_392_int = 14821; // 0x2fd PushI
	AddReply(var_390_int, var_391_int, var_392_int); // 0x2fe TObjFunc
	return 0; // 0x300 Return
	
Label_769:
	var_393_int = 15001; // 0x301 PushI
	var_394_bool = var_5_int == var_393_int; // 0x302 Eq
	if(var_394_bool == 0) goto Label_787; // 0x303 JumpB
	var_395_string = ""; // 0x304 PushV
	var_395_string = "Neutral"; // 0x305 MovS
	func_349(var_6_int, var_395_string); // 0x306 Call
	var_396_int = 13757; // 0x308 PushI
	SetMessage(var_396_int); // 0x309 TObjFunc
	ClearReplies(); // 0x30b TObjFunc
	var_397_int = 13758; // 0x30d PushI
	var_398_int = -1; // 0x30e PushI
	var_399_int = 15002; // 0x30f PushI
	AddReply(var_397_int, var_398_int, var_399_int); // 0x310 TObjFunc
	return 0; // 0x312 Return
	
Label_787:
	var_400_int = 14997; // 0x313 PushI
	var_401_bool = var_5_int == var_400_int; // 0x314 Eq
	if(var_401_bool == 0) goto Label_805; // 0x315 JumpB
	var_402_string = ""; // 0x316 PushV
	var_402_string = "Neutral"; // 0x317 MovS
	func_349(var_6_int, var_402_string); // 0x318 Call
	var_403_int = 13753; // 0x31a PushI
	SetMessage(var_403_int); // 0x31b TObjFunc
	ClearReplies(); // 0x31d TObjFunc
	var_404_int = 13754; // 0x31f PushI
	var_405_int = 14999; // 0x320 PushI
	var_406_int = 14998; // 0x321 PushI
	AddReply(var_404_int, var_405_int, var_406_int); // 0x322 TObjFunc
	return 0; // 0x324 Return
	
Label_805:
	var_407_int = 14999; // 0x325 PushI
	var_408_bool = var_5_int == var_407_int; // 0x326 Eq
	if(var_408_bool == 0) goto Label_823; // 0x327 JumpB
	var_409_string = ""; // 0x328 PushV
	var_409_string = "Neutral"; // 0x329 MovS
	func_349(var_6_int, var_409_string); // 0x32a Call
	var_410_int = 13755; // 0x32c PushI
	SetMessage(var_410_int); // 0x32d TObjFunc
	ClearReplies(); // 0x32f TObjFunc
	var_411_int = 13756; // 0x331 PushI
	var_412_int = 15003; // 0x332 PushI
	var_413_int = 15000; // 0x333 PushI
	AddReply(var_411_int, var_412_int, var_413_int); // 0x334 TObjFunc
	return 0; // 0x336 Return
	
Label_823:
	var_414_int = 15003; // 0x337 PushI
	var_415_bool = var_5_int == var_414_int; // 0x338 Eq
	if(var_415_bool == 0) goto Label_841; // 0x339 JumpB
	var_416_string = ""; // 0x33a PushV
	var_416_string = "Neutral"; // 0x33b MovS
	func_349(var_6_int, var_416_string); // 0x33c Call
	var_417_int = 13759; // 0x33e PushI
	SetMessage(var_417_int); // 0x33f TObjFunc
	ClearReplies(); // 0x341 TObjFunc
	var_418_int = 13760; // 0x343 PushI
	var_419_int = -1; // 0x344 PushI
	var_420_int = 15004; // 0x345 PushI
	AddReply(var_418_int, var_419_int, var_420_int); // 0x346 TObjFunc
	return 0; // 0x348 Return
	
Label_841:
	var_421_int = 13518; // 0x349 PushI
	var_422_bool = var_5_int == var_421_int; // 0x34a Eq
	if(var_422_bool == 0) goto Label_864; // 0x34b JumpB
	var_423_string = ""; // 0x34c PushV
	var_423_string = "Neutral"; // 0x34d MovS
	func_349(var_6_int, var_423_string); // 0x34e Call
	var_424_int = 12358; // 0x350 PushI
	SetMessage(var_424_int); // 0x351 TObjFunc
	ClearReplies(); // 0x353 TObjFunc
	var_425_int = 12359; // 0x355 PushI
	var_426_int = 13520; // 0x356 PushI
	var_427_int = 13519; // 0x357 PushI
	AddReply(var_425_int, var_426_int, var_427_int); // 0x358 TObjFunc
	var_428_int = 13497; // 0x35a PushI
	var_429_int = 14739; // 0x35b PushI
	var_430_int = 14738; // 0x35c PushI
	AddReply(var_428_int, var_429_int, var_430_int); // 0x35d TObjFunc
	return 0; // 0x35f Return
	
Label_864:
	var_431_int = 14739; // 0x360 PushI
	var_432_bool = var_5_int == var_431_int; // 0x361 Eq
	if(var_432_bool == 0) goto Label_882; // 0x362 JumpB
	var_433_string = ""; // 0x363 PushV
	var_433_string = "Neutral"; // 0x364 MovS
	func_349(var_6_int, var_433_string); // 0x365 Call
	var_434_int = 13498; // 0x367 PushI
	SetMessage(var_434_int); // 0x368 TObjFunc
	ClearReplies(); // 0x36a TObjFunc
	var_435_int = 13499; // 0x36c PushI
	var_436_int = 14741; // 0x36d PushI
	var_437_int = 14740; // 0x36e PushI
	AddReply(var_435_int, var_436_int, var_437_int); // 0x36f TObjFunc
	return 0; // 0x371 Return
	
Label_882:
	var_438_int = 14741; // 0x372 PushI
	var_439_bool = var_5_int == var_438_int; // 0x373 Eq
	if(var_439_bool == 0) goto Label_900; // 0x374 JumpB
	var_440_string = ""; // 0x375 PushV
	var_440_string = "Neutral"; // 0x376 MovS
	func_349(var_6_int, var_440_string); // 0x377 Call
	var_441_int = 13500; // 0x379 PushI
	SetMessage(var_441_int); // 0x37a TObjFunc
	ClearReplies(); // 0x37c TObjFunc
	var_442_int = 13501; // 0x37e PushI
	var_443_int = 14743; // 0x37f PushI
	var_444_int = 14742; // 0x380 PushI
	AddReply(var_442_int, var_443_int, var_444_int); // 0x381 TObjFunc
	return 0; // 0x383 Return
	
Label_900:
	var_445_int = 14743; // 0x384 PushI
	var_446_bool = var_5_int == var_445_int; // 0x385 Eq
	if(var_446_bool == 0) goto Label_918; // 0x386 JumpB
	var_447_string = ""; // 0x387 PushV
	var_447_string = "Neutral"; // 0x388 MovS
	func_349(var_6_int, var_447_string); // 0x389 Call
	var_448_int = 13502; // 0x38b PushI
	SetMessage(var_448_int); // 0x38c TObjFunc
	ClearReplies(); // 0x38e TObjFunc
	var_449_int = 13503; // 0x390 PushI
	var_450_int = 13524; // 0x391 PushI
	var_451_int = 14744; // 0x392 PushI
	AddReply(var_449_int, var_450_int, var_451_int); // 0x393 TObjFunc
	return 0; // 0x395 Return
	
Label_918:
	var_452_int = 13520; // 0x396 PushI
	var_453_bool = var_5_int == var_452_int; // 0x397 Eq
	if(var_453_bool == 0) goto Label_936; // 0x398 JumpB
	var_454_string = ""; // 0x399 PushV
	var_454_string = "Neutral"; // 0x39a MovS
	func_349(var_6_int, var_454_string); // 0x39b Call
	var_455_int = 12360; // 0x39d PushI
	SetMessage(var_455_int); // 0x39e TObjFunc
	ClearReplies(); // 0x3a0 TObjFunc
	var_456_int = 12361; // 0x3a2 PushI
	var_457_int = 13522; // 0x3a3 PushI
	var_458_int = 13521; // 0x3a4 PushI
	AddReply(var_456_int, var_457_int, var_458_int); // 0x3a5 TObjFunc
	return 0; // 0x3a7 Return
	
Label_936:
	var_459_int = 13522; // 0x3a8 PushI
	var_460_bool = var_5_int == var_459_int; // 0x3a9 Eq
	if(var_460_bool == 0) goto Label_954; // 0x3aa JumpB
	var_461_string = ""; // 0x3ab PushV
	var_461_string = "Neutral"; // 0x3ac MovS
	func_349(var_6_int, var_461_string); // 0x3ad Call
	var_462_int = 12362; // 0x3af PushI
	SetMessage(var_462_int); // 0x3b0 TObjFunc
	ClearReplies(); // 0x3b2 TObjFunc
	var_463_int = 12363; // 0x3b4 PushI
	var_464_int = 13524; // 0x3b5 PushI
	var_465_int = 13523; // 0x3b6 PushI
	AddReply(var_463_int, var_464_int, var_465_int); // 0x3b7 TObjFunc
	return 0; // 0x3b9 Return
	
Label_954:
	var_466_int = 13524; // 0x3ba PushI
	var_467_bool = var_5_int == var_466_int; // 0x3bb Eq
	if(var_467_bool == 0) goto Label_972; // 0x3bc JumpB
	var_468_string = ""; // 0x3bd PushV
	var_468_string = "Neutral"; // 0x3be MovS
	func_349(var_6_int, var_468_string); // 0x3bf Call
	var_469_int = 12364; // 0x3c1 PushI
	SetMessage(var_469_int); // 0x3c2 TObjFunc
	ClearReplies(); // 0x3c4 TObjFunc
	var_470_int = 12365; // 0x3c6 PushI
	var_471_int = -1; // 0x3c7 PushI
	var_472_int = 13525; // 0x3c8 PushI
	AddReply(var_470_int, var_471_int, var_472_int); // 0x3c9 TObjFunc
	return 0; // 0x3cb Return
	
Label_972:
	var_473_int = 13527; // 0x3cc PushI
	var_474_bool = var_5_int == var_473_int; // 0x3cd Eq
	if(var_474_bool == 0) goto Label_990; // 0x3ce JumpB
	var_475_string = ""; // 0x3cf PushV
	var_475_string = "Neutral"; // 0x3d0 MovS
	func_349(var_6_int, var_475_string); // 0x3d1 Call
	var_476_int = 12367; // 0x3d3 PushI
	SetMessage(var_476_int); // 0x3d4 TObjFunc
	ClearReplies(); // 0x3d6 TObjFunc
	var_477_int = 12368; // 0x3d8 PushI
	var_478_int = 13529; // 0x3d9 PushI
	var_479_int = 13528; // 0x3da PushI
	AddReply(var_477_int, var_478_int, var_479_int); // 0x3db TObjFunc
	return 0; // 0x3dd Return
	
Label_990:
	var_480_int = 13529; // 0x3de PushI
	var_481_bool = var_5_int == var_480_int; // 0x3df Eq
	if(var_481_bool == 0) goto Label_1008; // 0x3e0 JumpB
	var_482_string = ""; // 0x3e1 PushV
	var_482_string = "Neutral"; // 0x3e2 MovS
	func_349(var_6_int, var_482_string); // 0x3e3 Call
	var_483_int = 12369; // 0x3e5 PushI
	SetMessage(var_483_int); // 0x3e6 TObjFunc
	ClearReplies(); // 0x3e8 TObjFunc
	var_484_int = 12370; // 0x3ea PushI
	var_485_int = 13531; // 0x3eb PushI
	var_486_int = 13530; // 0x3ec PushI
	AddReply(var_484_int, var_485_int, var_486_int); // 0x3ed TObjFunc
	return 0; // 0x3ef Return
	
Label_1008:
	var_487_int = 13531; // 0x3f0 PushI
	var_488_bool = var_5_int == var_487_int; // 0x3f1 Eq
	if(var_488_bool == 0) goto Label_1026; // 0x3f2 JumpB
	var_489_string = ""; // 0x3f3 PushV
	var_489_string = "Neutral"; // 0x3f4 MovS
	func_349(var_6_int, var_489_string); // 0x3f5 Call
	var_490_int = 12371; // 0x3f7 PushI
	SetMessage(var_490_int); // 0x3f8 TObjFunc
	ClearReplies(); // 0x3fa TObjFunc
	var_491_int = 12372; // 0x3fc PushI
	var_492_int = -1; // 0x3fd PushI
	var_493_int = 13532; // 0x3fe PushI
	AddReply(var_491_int, var_492_int, var_493_int); // 0x3ff TObjFunc
	return 0; // 0x401 Return
	
Label_1026:
	var_494_int = 13512; // 0x402 PushI
	var_495_bool = var_5_int == var_494_int; // 0x403 Eq
	if(var_495_bool == 0) goto Label_1044; // 0x404 JumpB
	var_496_string = ""; // 0x405 PushV
	var_496_string = "Neutral"; // 0x406 MovS
	func_349(var_6_int, var_496_string); // 0x407 Call
	var_497_int = 12353; // 0x409 PushI
	SetMessage(var_497_int); // 0x40a TObjFunc
	ClearReplies(); // 0x40c TObjFunc
	var_498_int = 13529; // 0x40e PushI
	var_499_int = 14775; // 0x40f PushI
	var_500_int = 14774; // 0x410 PushI
	AddReply(var_498_int, var_499_int, var_500_int); // 0x411 TObjFunc
	return 0; // 0x413 Return
	
Label_1044:
	var_501_int = 14775; // 0x414 PushI
	var_502_bool = var_5_int == var_501_int; // 0x415 Eq
	if(var_502_bool == 0) goto Label_1062; // 0x416 JumpB
	var_503_string = ""; // 0x417 PushV
	var_503_string = "Neutral"; // 0x418 MovS
	func_349(var_6_int, var_503_string); // 0x419 Call
	var_504_int = 13530; // 0x41b PushI
	SetMessage(var_504_int); // 0x41c TObjFunc
	ClearReplies(); // 0x41e TObjFunc
	var_505_int = 13531; // 0x420 PushI
	var_506_int = 14777; // 0x421 PushI
	var_507_int = 14776; // 0x422 PushI
	AddReply(var_505_int, var_506_int, var_507_int); // 0x423 TObjFunc
	return 0; // 0x425 Return
	
Label_1062:
	var_508_int = 14777; // 0x426 PushI
	var_509_bool = var_5_int == var_508_int; // 0x427 Eq
	if(var_509_bool == 0) goto Label_1085; // 0x428 JumpB
	var_510_string = ""; // 0x429 PushV
	var_510_string = "Neutral"; // 0x42a MovS
	func_349(var_6_int, var_510_string); // 0x42b Call
	var_511_int = 13532; // 0x42d PushI
	SetMessage(var_511_int); // 0x42e TObjFunc
	ClearReplies(); // 0x430 TObjFunc
	var_512_int = 13533; // 0x432 PushI
	var_513_int = 14779; // 0x433 PushI
	var_514_int = 14778; // 0x434 PushI
	AddReply(var_512_int, var_513_int, var_514_int); // 0x435 TObjFunc
	var_515_int = 13536; // 0x437 PushI
	var_516_int = 14782; // 0x438 PushI
	var_517_int = 14781; // 0x439 PushI
	AddReply(var_515_int, var_516_int, var_517_int); // 0x43a TObjFunc
	return 0; // 0x43c Return
	
Label_1085:
	var_518_int = 14782; // 0x43d PushI
	var_519_bool = var_5_int == var_518_int; // 0x43e Eq
	if(var_519_bool == 0) goto Label_1103; // 0x43f JumpB
	var_520_string = ""; // 0x440 PushV
	var_520_string = "Neutral"; // 0x441 MovS
	func_349(var_6_int, var_520_string); // 0x442 Call
	var_521_int = 13537; // 0x444 PushI
	SetMessage(var_521_int); // 0x445 TObjFunc
	ClearReplies(); // 0x447 TObjFunc
	var_522_int = 13538; // 0x449 PushI
	var_523_int = 14784; // 0x44a PushI
	var_524_int = 14783; // 0x44b PushI
	AddReply(var_522_int, var_523_int, var_524_int); // 0x44c TObjFunc
	return 0; // 0x44e Return
	
Label_1103:
	var_525_int = 14784; // 0x44f PushI
	var_526_bool = var_5_int == var_525_int; // 0x450 Eq
	if(var_526_bool == 0) goto Label_1121; // 0x451 JumpB
	var_527_string = ""; // 0x452 PushV
	var_527_string = "Neutral"; // 0x453 MovS
	func_349(var_6_int, var_527_string); // 0x454 Call
	var_528_int = 13539; // 0x456 PushI
	SetMessage(var_528_int); // 0x457 TObjFunc
	ClearReplies(); // 0x459 TObjFunc
	var_529_int = 13540; // 0x45b PushI
	var_530_int = 14786; // 0x45c PushI
	var_531_int = 14785; // 0x45d PushI
	AddReply(var_529_int, var_530_int, var_531_int); // 0x45e TObjFunc
	return 0; // 0x460 Return
	
Label_1121:
	var_532_int = 14786; // 0x461 PushI
	var_533_bool = var_5_int == var_532_int; // 0x462 Eq
	if(var_533_bool == 0) goto Label_1139; // 0x463 JumpB
	var_534_string = ""; // 0x464 PushV
	var_534_string = "Neutral"; // 0x465 MovS
	func_349(var_6_int, var_534_string); // 0x466 Call
	var_535_int = 13541; // 0x468 PushI
	SetMessage(var_535_int); // 0x469 TObjFunc
	ClearReplies(); // 0x46b TObjFunc
	var_536_int = 13542; // 0x46d PushI
	var_537_int = -1; // 0x46e PushI
	var_538_int = 14787; // 0x46f PushI
	AddReply(var_536_int, var_537_int, var_538_int); // 0x470 TObjFunc
	return 0; // 0x472 Return
	
Label_1139:
	var_539_int = 14779; // 0x473 PushI
	var_540_bool = var_5_int == var_539_int; // 0x474 Eq
	if(var_540_bool == 0) goto Label_1157; // 0x475 JumpB
	var_541_string = ""; // 0x476 PushV
	var_541_string = "Neutral"; // 0x477 MovS
	func_349(var_6_int, var_541_string); // 0x478 Call
	var_542_int = 13534; // 0x47a PushI
	SetMessage(var_542_int); // 0x47b TObjFunc
	ClearReplies(); // 0x47d TObjFunc
	var_543_int = 13535; // 0x47f PushI
	var_544_int = 14788; // 0x480 PushI
	var_545_int = 14780; // 0x481 PushI
	AddReply(var_543_int, var_544_int, var_545_int); // 0x482 TObjFunc
	return 0; // 0x484 Return
	
Label_1157:
	var_546_int = 14788; // 0x485 PushI
	var_547_bool = var_5_int == var_546_int; // 0x486 Eq
	if(var_547_bool == 0) goto Label_1175; // 0x487 JumpB
	var_548_string = ""; // 0x488 PushV
	var_548_string = "Neutral"; // 0x489 MovS
	func_349(var_6_int, var_548_string); // 0x48a Call
	var_549_int = 13543; // 0x48c PushI
	SetMessage(var_549_int); // 0x48d TObjFunc
	ClearReplies(); // 0x48f TObjFunc
	var_550_int = 13544; // 0x491 PushI
	var_551_int = 14790; // 0x492 PushI
	var_552_int = 14789; // 0x493 PushI
	AddReply(var_550_int, var_551_int, var_552_int); // 0x494 TObjFunc
	return 0; // 0x496 Return
	
Label_1175:
	var_553_int = 14790; // 0x497 PushI
	var_554_bool = var_5_int == var_553_int; // 0x498 Eq
	if(var_554_bool == 0) goto Label_1193; // 0x499 JumpB
	var_555_string = ""; // 0x49a PushV
	var_555_string = "Neutral"; // 0x49b MovS
	func_349(var_6_int, var_555_string); // 0x49c Call
	var_556_int = 13545; // 0x49e PushI
	SetMessage(var_556_int); // 0x49f TObjFunc
	ClearReplies(); // 0x4a1 TObjFunc
	var_557_int = 13546; // 0x4a3 PushI
	var_558_int = -1; // 0x4a4 PushI
	var_559_int = 14791; // 0x4a5 PushI
	AddReply(var_557_int, var_558_int, var_559_int); // 0x4a6 TObjFunc
	return 0; // 0x4a8 Return
	
Label_1193:
	var_560_int = 14813; // 0x4a9 PushI
	var_561_bool = var_5_int == var_560_int; // 0x4aa Eq
	if(var_561_bool == 0) goto Label_1211; // 0x4ab JumpB
	var_562_string = ""; // 0x4ac PushV
	var_562_string = "Neutral"; // 0x4ad MovS
	func_349(var_6_int, var_562_string); // 0x4ae Call
	var_563_int = 13564; // 0x4b0 PushI
	SetMessage(var_563_int); // 0x4b1 TObjFunc
	ClearReplies(); // 0x4b3 TObjFunc
	var_564_int = 13565; // 0x4b5 PushI
	var_565_int = 14815; // 0x4b6 PushI
	var_566_int = 14814; // 0x4b7 PushI
	AddReply(var_564_int, var_565_int, var_566_int); // 0x4b8 TObjFunc
	return 0; // 0x4ba Return
	
Label_1211:
	var_567_int = 14815; // 0x4bb PushI
	var_568_bool = var_5_int == var_567_int; // 0x4bc Eq
	if(var_568_bool == 0) goto Label_1229; // 0x4bd JumpB
	var_569_string = ""; // 0x4be PushV
	var_569_string = "Neutral"; // 0x4bf MovS
	func_349(var_6_int, var_569_string); // 0x4c0 Call
	var_570_int = 13566; // 0x4c2 PushI
	SetMessage(var_570_int); // 0x4c3 TObjFunc
	ClearReplies(); // 0x4c5 TObjFunc
	var_571_int = 13567; // 0x4c7 PushI
	var_572_int = -1; // 0x4c8 PushI
	var_573_int = 14816; // 0x4c9 PushI
	AddReply(var_571_int, var_572_int, var_573_int); // 0x4ca TObjFunc
	return 0; // 0x4cc Return
	
Label_1229:
	var_574_int = 14748; // 0x4cd PushI
	var_575_bool = var_5_int == var_574_int; // 0x4ce Eq
	if(var_575_bool == 0) goto Label_1252; // 0x4cf JumpB
	var_576_string = ""; // 0x4d0 PushV
	var_576_string = "Neutral"; // 0x4d1 MovS
	func_349(var_6_int, var_576_string); // 0x4d2 Call
	var_577_int = 13506; // 0x4d4 PushI
	SetMessage(var_577_int); // 0x4d5 TObjFunc
	ClearReplies(); // 0x4d7 TObjFunc
	var_578_int = 13507; // 0x4d9 PushI
	var_579_int = 14750; // 0x4da PushI
	var_580_int = 14749; // 0x4db PushI
	AddReply(var_578_int, var_579_int, var_580_int); // 0x4dc TObjFunc
	var_581_int = 13513; // 0x4de PushI
	var_582_int = 14756; // 0x4df PushI
	var_583_int = 14755; // 0x4e0 PushI
	AddReply(var_581_int, var_582_int, var_583_int); // 0x4e1 TObjFunc
	return 0; // 0x4e3 Return
	
Label_1252:
	var_584_int = 14756; // 0x4e4 PushI
	var_585_bool = var_5_int == var_584_int; // 0x4e5 Eq
	if(var_585_bool == 0) goto Label_1275; // 0x4e6 JumpB
	var_586_string = ""; // 0x4e7 PushV
	var_586_string = "Neutral"; // 0x4e8 MovS
	func_349(var_6_int, var_586_string); // 0x4e9 Call
	var_587_int = 13514; // 0x4eb PushI
	SetMessage(var_587_int); // 0x4ec TObjFunc
	ClearReplies(); // 0x4ee TObjFunc
	var_588_int = 13515; // 0x4f0 PushI
	var_589_int = 14758; // 0x4f1 PushI
	var_590_int = 14757; // 0x4f2 PushI
	AddReply(var_588_int, var_589_int, var_590_int); // 0x4f3 TObjFunc
	var_591_int = 13517; // 0x4f5 PushI
	var_592_int = 14760; // 0x4f6 PushI
	var_593_int = 14759; // 0x4f7 PushI
	AddReply(var_591_int, var_592_int, var_593_int); // 0x4f8 TObjFunc
	return 0; // 0x4fa Return
	
Label_1275:
	var_594_int = 14760; // 0x4fb PushI
	var_595_bool = var_5_int == var_594_int; // 0x4fc Eq
	if(var_595_bool == 0) goto Label_1293; // 0x4fd JumpB
	var_596_string = ""; // 0x4fe PushV
	var_596_string = "Neutral"; // 0x4ff MovS
	func_349(var_6_int, var_596_string); // 0x500 Call
	var_597_int = 13518; // 0x502 PushI
	SetMessage(var_597_int); // 0x503 TObjFunc
	ClearReplies(); // 0x505 TObjFunc
	var_598_int = 13520; // 0x507 PushI
	var_599_int = 14750; // 0x508 PushI
	var_600_int = 14763; // 0x509 PushI
	AddReply(var_598_int, var_599_int, var_600_int); // 0x50a TObjFunc
	return 0; // 0x50c Return
	
Label_1293:
	var_601_int = 14758; // 0x50d PushI
	var_602_bool = var_5_int == var_601_int; // 0x50e Eq
	if(var_602_bool == 0) goto Label_1311; // 0x50f JumpB
	var_603_string = ""; // 0x510 PushV
	var_603_string = "Neutral"; // 0x511 MovS
	func_349(var_6_int, var_603_string); // 0x512 Call
	var_604_int = 13516; // 0x514 PushI
	SetMessage(var_604_int); // 0x515 TObjFunc
	ClearReplies(); // 0x517 TObjFunc
	var_605_int = 13519; // 0x519 PushI
	var_606_int = 14750; // 0x51a PushI
	var_607_int = 14761; // 0x51b PushI
	AddReply(var_605_int, var_606_int, var_607_int); // 0x51c TObjFunc
	return 0; // 0x51e Return
	
Label_1311:
	var_608_int = 14750; // 0x51f PushI
	var_609_bool = var_5_int == var_608_int; // 0x520 Eq
	if(var_609_bool == 0) goto Label_1334; // 0x521 JumpB
	var_610_string = ""; // 0x522 PushV
	var_610_string = "Neutral"; // 0x523 MovS
	func_349(var_6_int, var_610_string); // 0x524 Call
	var_611_int = 13508; // 0x526 PushI
	SetMessage(var_611_int); // 0x527 TObjFunc
	ClearReplies(); // 0x529 TObjFunc
	var_612_int = 13521; // 0x52b PushI
	var_613_int = 14766; // 0x52c PushI
	var_614_int = 14765; // 0x52d PushI
	AddReply(var_612_int, var_613_int, var_614_int); // 0x52e TObjFunc
	var_615_int = 13509; // 0x530 PushI
	var_616_int = 14752; // 0x531 PushI
	var_617_int = 14751; // 0x532 PushI
	AddReply(var_615_int, var_616_int, var_617_int); // 0x533 TObjFunc
	return 0; // 0x535 Return
	
Label_1334:
	var_618_int = 14752; // 0x536 PushI
	var_619_bool = var_5_int == var_618_int; // 0x537 Eq
	if(var_619_bool == 0) goto Label_1352; // 0x538 JumpB
	var_620_string = ""; // 0x539 PushV
	var_620_string = "Neutral"; // 0x53a MovS
	func_349(var_6_int, var_620_string); // 0x53b Call
	var_621_int = 13510; // 0x53d PushI
	SetMessage(var_621_int); // 0x53e TObjFunc
	ClearReplies(); // 0x540 TObjFunc
	var_622_int = 13511; // 0x542 PushI
	var_623_int = 14754; // 0x543 PushI
	var_624_int = 14753; // 0x544 PushI
	AddReply(var_622_int, var_623_int, var_624_int); // 0x545 TObjFunc
	return 0; // 0x547 Return
	
Label_1352:
	var_625_int = 14754; // 0x548 PushI
	var_626_bool = var_5_int == var_625_int; // 0x549 Eq
	if(var_626_bool == 0) goto Label_1370; // 0x54a JumpB
	var_627_string = ""; // 0x54b PushV
	var_627_string = "Neutral"; // 0x54c MovS
	func_349(var_6_int, var_627_string); // 0x54d Call
	var_628_int = 13512; // 0x54f PushI
	SetMessage(var_628_int); // 0x550 TObjFunc
	ClearReplies(); // 0x552 TObjFunc
	var_629_int = 13547; // 0x554 PushI
	var_630_int = 14773; // 0x555 PushI
	var_631_int = 14792; // 0x556 PushI
	AddReply(var_629_int, var_630_int, var_631_int); // 0x557 TObjFunc
	return 0; // 0x559 Return
	
Label_1370:
	var_632_int = 14766; // 0x55a PushI
	var_633_bool = var_5_int == var_632_int; // 0x55b Eq
	if(var_633_bool == 0) goto Label_1393; // 0x55c JumpB
	var_634_string = ""; // 0x55d PushV
	var_634_string = "Neutral"; // 0x55e MovS
	func_349(var_6_int, var_634_string); // 0x55f Call
	var_635_int = 13522; // 0x561 PushI
	SetMessage(var_635_int); // 0x562 TObjFunc
	ClearReplies(); // 0x564 TObjFunc
	var_636_int = 13523; // 0x566 PushI
	var_637_int = 14769; // 0x567 PushI
	var_638_int = 14767; // 0x568 PushI
	AddReply(var_636_int, var_637_int, var_638_int); // 0x569 TObjFunc
	var_639_int = 13524; // 0x56b PushI
	var_640_int = 14769; // 0x56c PushI
	var_641_int = 14768; // 0x56d PushI
	AddReply(var_639_int, var_640_int, var_641_int); // 0x56e TObjFunc
	return 0; // 0x570 Return
	
Label_1393:
	var_642_int = 14769; // 0x571 PushI
	var_643_bool = var_5_int == var_642_int; // 0x572 Eq
	if(var_643_bool == 0) goto Label_1416; // 0x573 JumpB
	var_644_string = ""; // 0x574 PushV
	var_644_string = "Neutral"; // 0x575 MovS
	func_349(var_6_int, var_644_string); // 0x576 Call
	var_645_int = 13525; // 0x578 PushI
	SetMessage(var_645_int); // 0x579 TObjFunc
	ClearReplies(); // 0x57b TObjFunc
	var_646_int = 13526; // 0x57d PushI
	var_647_int = 14773; // 0x57e PushI
	var_648_int = 14770; // 0x57f PushI
	AddReply(var_646_int, var_647_int, var_648_int); // 0x580 TObjFunc
	var_649_int = 13527; // 0x582 PushI
	var_650_int = -1; // 0x583 PushI
	var_651_int = 14772; // 0x584 PushI
	AddReply(var_649_int, var_650_int, var_651_int); // 0x585 TObjFunc
	return 0; // 0x587 Return
	
Label_1416:
	var_652_int = 14773; // 0x588 PushI
	var_653_bool = var_5_int == var_652_int; // 0x589 Eq
	if(var_653_bool == 0) goto Label_1434; // 0x58a JumpB
	var_654_string = ""; // 0x58b PushV
	var_654_string = "Neutral"; // 0x58c MovS
	func_349(var_6_int, var_654_string); // 0x58d Call
	var_655_int = 13528; // 0x58f PushI
	SetMessage(var_655_int); // 0x590 TObjFunc
	ClearReplies(); // 0x592 TObjFunc
	var_656_int = 13548; // 0x594 PushI
	var_657_int = 14796; // 0x595 PushI
	var_658_int = 14795; // 0x596 PushI
	AddReply(var_656_int, var_657_int, var_658_int); // 0x597 TObjFunc
	return 0; // 0x599 Return
	
Label_1434:
	var_659_int = 14796; // 0x59a PushI
	var_660_bool = var_5_int == var_659_int; // 0x59b Eq
	if(var_660_bool == 0) goto Label_1457; // 0x59c JumpB
	var_661_string = ""; // 0x59d PushV
	var_661_string = "Neutral"; // 0x59e MovS
	func_349(var_6_int, var_661_string); // 0x59f Call
	var_662_int = 13549; // 0x5a1 PushI
	SetMessage(var_662_int); // 0x5a2 TObjFunc
	ClearReplies(); // 0x5a4 TObjFunc
	var_663_int = 13550; // 0x5a6 PushI
	var_664_int = 14800; // 0x5a7 PushI
	var_665_int = 14797; // 0x5a8 PushI
	AddReply(var_663_int, var_664_int, var_665_int); // 0x5a9 TObjFunc
	var_666_int = 13551; // 0x5ab PushI
	var_667_int = 14799; // 0x5ac PushI
	var_668_int = 14798; // 0x5ad PushI
	AddReply(var_666_int, var_667_int, var_668_int); // 0x5ae TObjFunc
	return 0; // 0x5b0 Return
	
Label_1457:
	var_669_int = 14799; // 0x5b1 PushI
	var_670_bool = var_5_int == var_669_int; // 0x5b2 Eq
	if(var_670_bool == 0) goto Label_1475; // 0x5b3 JumpB
	var_671_string = ""; // 0x5b4 PushV
	var_671_string = "Neutral"; // 0x5b5 MovS
	func_349(var_6_int, var_671_string); // 0x5b6 Call
	var_672_int = 13552; // 0x5b8 PushI
	SetMessage(var_672_int); // 0x5b9 TObjFunc
	ClearReplies(); // 0x5bb TObjFunc
	var_673_int = 13554; // 0x5bd PushI
	var_674_int = 14800; // 0x5be PushI
	var_675_int = 14801; // 0x5bf PushI
	AddReply(var_673_int, var_674_int, var_675_int); // 0x5c0 TObjFunc
	return 0; // 0x5c2 Return
	
Label_1475:
	var_676_int = 14800; // 0x5c3 PushI
	var_677_bool = var_5_int == var_676_int; // 0x5c4 Eq
	if(var_677_bool == 0) goto Label_1498; // 0x5c5 JumpB
	var_678_string = ""; // 0x5c6 PushV
	var_678_string = "Neutral"; // 0x5c7 MovS
	func_349(var_6_int, var_678_string); // 0x5c8 Call
	var_679_int = 13553; // 0x5ca PushI
	SetMessage(var_679_int); // 0x5cb TObjFunc
	ClearReplies(); // 0x5cd TObjFunc
	var_680_int = 13556; // 0x5cf PushI
	var_681_int = -1; // 0x5d0 PushI
	var_682_int = 14805; // 0x5d1 PushI
	AddReply(var_680_int, var_681_int, var_682_int); // 0x5d2 TObjFunc
	var_683_int = 13557; // 0x5d4 PushI
	var_684_int = 14807; // 0x5d5 PushI
	var_685_int = 14806; // 0x5d6 PushI
	AddReply(var_683_int, var_684_int, var_685_int); // 0x5d7 TObjFunc
	return 0; // 0x5d9 Return
	
Label_1498:
	var_686_int = 14807; // 0x5da PushI
	var_687_bool = var_5_int == var_686_int; // 0x5db Eq
	if(var_687_bool == 0) goto Label_1521; // 0x5dc JumpB
	var_688_string = ""; // 0x5dd PushV
	var_688_string = "Neutral"; // 0x5de MovS
	func_349(var_6_int, var_688_string); // 0x5df Call
	var_689_int = 13558; // 0x5e1 PushI
	SetMessage(var_689_int); // 0x5e2 TObjFunc
	ClearReplies(); // 0x5e4 TObjFunc
	var_690_int = 13559; // 0x5e6 PushI
	var_691_int = 14810; // 0x5e7 PushI
	var_692_int = 14808; // 0x5e8 PushI
	AddReply(var_690_int, var_691_int, var_692_int); // 0x5e9 TObjFunc
	var_693_int = 13560; // 0x5eb PushI
	var_694_int = -1; // 0x5ec PushI
	var_695_int = 14809; // 0x5ed PushI
	AddReply(var_693_int, var_694_int, var_695_int); // 0x5ee TObjFunc
	return 0; // 0x5f0 Return
	
Label_1521:
	var_696_int = 14810; // 0x5f1 PushI
	var_697_bool = var_5_int == var_696_int; // 0x5f2 Eq
	if(var_697_bool == 0) goto Label_1539; // 0x5f3 JumpB
	var_698_string = ""; // 0x5f4 PushV
	var_698_string = "Neutral"; // 0x5f5 MovS
	func_349(var_6_int, var_698_string); // 0x5f6 Call
	var_699_int = 13561; // 0x5f8 PushI
	SetMessage(var_699_int); // 0x5f9 TObjFunc
	ClearReplies(); // 0x5fb TObjFunc
	var_700_int = 13562; // 0x5fd PushI
	var_701_int = -1; // 0x5fe PushI
	var_702_int = 14811; // 0x5ff PushI
	AddReply(var_700_int, var_701_int, var_702_int); // 0x600 TObjFunc
	return 0; // 0x602 Return
	
Label_1539:
	var_3_string = 1; // 0x603 TMovB
	var_703_bool = 0; // 0x604 PushV
	func_1721(var_703_bool); // 0x605 Call
	if(var_703_bool == 0) goto Label_1547; // 0x607 JumpB
	lshStopAnimation(); // 0x608 Func
	goto Label_1549; // 0x60a Jump
	
Label_1549:
	return 0; // 0x60d Return
	
Label_1547:
	StopAnimation(); // 0x60b Func
	
Label_1551:
	return 0; // 0x60f Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool)
{
	func_2216(); // 0x7 Call
	var_6_bool = 0; // 0x9 PushV
	func_1564(var_6_bool); // 0xa Call
	var_9_bool = var_6_bool == 0; // 0xc Not
	if(var_9_bool == 0) goto Label_19; // 0xd JumpB
	TaskCall(0); // 0xf TaskCall
	func_0(); // 0x10 Call
	TaskReturn(); // 0x11 TaskReturn
	
Label_19:
	var_10_string = ""; // 0x13 PushV
	var_10_string = "Neutral"; // 0x14 MovS
	func_1629(var_10_string); // 0x15 Call
	lshWaitForAnimEnd(); // 0x17 Func
	goto Label_19; // 0x19 Jump
}


func_0()
{
	Hold(); // 0x0 Func
	return 0; // 0x2 Return
}


func_1797()
{
	var_138_string = "ood8Mat5"; // 0x706 PushS
	var_139_int = 1; // 0x707 PushI
	SetVariable(var_138_string, var_139_int); // 0x708 Func
	return 0; // 0x70a Return
}


func_1803()
{
	var_144_string = "ood8Mat6"; // 0x70c PushS
	var_145_int = 1; // 0x70d PushI
	SetVariable(var_144_string, var_145_int); // 0x70e Func
	return 0; // 0x710 Return
}


func_1552(var_6_bool)
{
	var_8_cvector = CVector(0,0,0); var_9_cvector = CVector(0,0,0); var_10_cvector = CVector(0,0,0); var_11_bool = 0; var_12_cvector = CVector(0,0,0); var_13_cvector = CVector(0,0,0); var_14_cvector = CVector(0,0,0); var_15_bool = 0; // 0x610 PushV
	GetPosition(var_12_cvector); // 0x611 ObjFunc
	GetPosition(var_13_cvector); // 0x613 Func
	var_14_cvector = var_12_cvector - var_13_cvector; // 0x615 Sub2
	var_16_float = GetByIndex(var_14_cvector, 0); // 0x616 PushE
	var_17_float = GetByIndex(var_14_cvector, 2); // 0x617 PushE
	Rotate(var_16_float, var_17_float, var_15_bool); // 0x618 Func
	var_6_bool = var_15_bool; // 0x61a Mov
	return 8; // 0x61b Return
}


func_1809()
{
	var_154_string = "ood8Mat7"; // 0x712 PushS
	var_155_int = 1; // 0x713 PushI
	SetVariable(var_154_string, var_155_int); // 0x714 Func
	return 0; // 0x716 Return
}


func_2069(var_48_object)
{
	var_49_object = Obj(); var_50_object = Obj(); var_51_object = Obj(); var_52_object = Obj(); // 0x815 PushV
	GetMainOutdoorScene(var_51_object); // 0x816 Func
	var_53_bool = var_51_object == 0; // 0x818 NullEq
	if(var_53_bool == 0) goto Label_2080; // 0x819 JumpB
	var_54_string = "Can't find main outdoor scene"; // 0x81a PushS
	Trace(var_54_string); // 0x81b Func
	var_52_object = 0; // 0x81d SetNull
	var_48_object = var_52_object; // 0x81e Mov
	return 4; // 0x81f Return
	
Label_2080:
	GetMap(var_52_object); // 0x820 ObjFunc
	var_48_object = var_52_object; // 0x822 Mov
	return 4; // 0x823 Return
}


func_1815()
{
	var_225_string = "d8TalkToMat"; // 0x718 PushS
	var_226_int = 1; // 0x719 PushI
	SetVariable(var_225_string, var_226_int); // 0x71a Func
	return 0; // 0x71c Return
}


func_1564(var_6_bool)
{
	var_7_bool = 0; var_8_bool = 0; // 0x61c PushV
	IsLoaded(var_8_bool); // 0x61d Func
	var_6_bool = var_8_bool; // 0x61f Mov
	return 2; // 0x620 Return
}


func_1821()
{
	var_174_string = "d8q02"; // 0x71e PushS
	var_175_int = 1000; // 0x71f PushI
	SetVariable(var_174_string, var_175_int); // 0x720 Func
	func_2184(); // 0x723 Call
	return 0; // 0x725 Return
}


func_1569(var_26_bool)
{
	var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_bool = 0; var_36_float = 0; var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_bool = 0; // 0x621 PushV
	GetPosition(var_37_cvector); // 0x622 ObjFunc
	GetEyesHeight(var_36_float); // 0x624 ObjFunc
	var_44_float = GetByIndex(var_37_cvector, 1); // 0x626 PushE
	var_44_float = var_44_float + var_36_float; // 0x627 Add2
	SetByIndex(var_37_cvector, 1) = var_44_float; // 0x628 PopE
	GetPosition(var_38_cvector); // 0x629 Func
	GetEyesHeight(var_36_float); // 0x62b Func
	var_45_float = GetByIndex(var_38_cvector, 1); // 0x62d PushE
	var_45_float = var_45_float + var_36_float; // 0x62e Add2
	SetByIndex(var_38_cvector, 1) = var_45_float; // 0x62f PopE
	var_39_cvector = var_37_cvector - var_38_cvector; // 0x630 Sub2
	var_46_float = GetByIndex(var_39_cvector, 1); // 0x631 PushE
	var_46_float = 0; // 0x632 MovI
	SetByIndex(var_39_cvector, 1) = var_46_float; // 0x633 PopE
	var_47_int = var_39_cvector | var_39_cvector; // 0x634 Or
	var_48_float = sqrt(var_47_int); // 0x635 Sqrt
	var_39_cvector = var_39_cvector / var_39_cvector; // 0x636 Div2
	var_40_cvector = -var_39_cvector; // 0x637 Neg2
	var_49_int = 70; // 0x638 PushI
	var_50_float = var_39_cvector * var_49_int; // 0x639 Mult
	var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); // 0x63a PushV
	var_53_cvector = CVector(0.0, 1.0, 0.0); // 0x63b PushVec
	var_52_cvector = var_40_cvector ^ var_53_cvector; // 0x63c Xor2
	func_1654(var_51_cvector, var_52_cvector); // 0x63d Call
	var_59_int = 25; // 0x63f PushI
	var_60_float = var_51_cvector * var_59_int; // 0x640 Mult
	var_61_int = var_50_float + var_60_float; // 0x641 Add
	var_62_cvector = CVector(0.0, 10.0, 0.0); // 0x642 PushVec
	var_41_cvector = var_61_int - var_62_cvector; // 0x643 Sub2
	var_42_cvector = var_38_cvector + var_41_cvector; // 0x644 Add2
	IsOverrideActive(var_43_bool); // 0x645 Func
	var_63_bool = var_43_bool; // 0x647 Push
	if(var_63_bool == 0) goto Label_1611; // 0x648 JumpB
	var_26_bool = 0; // 0x649 MovB
	return 16; // 0x64a Return
	
Label_1611:
	StopWorld(); // 0x64b Func
	CameraTransit(var_42_cvector, var_40_cvector); // 0x64d Func
	var_64_float = GetByIndex(var_41_cvector, 0); // 0x64f PushE
	var_65_float = GetByIndex(var_41_cvector, 2); // 0x650 PushE
	Rotate(var_64_float, var_65_float); // 0x651 Func
	CameraWaitForPlayFinish(); // 0x653 Func
	ResumeWorld(); // 0x655 Func
	var_26_bool = 1; // 0x657 MovB
	return 16; // 0x658 Return
}


func_1830()
{
	var_191_string = "d8q02"; // 0x727 PushS
	var_192_int = -1; // 0x728 PushI
	SetVariable(var_191_string, var_192_int); // 0x729 Func
	func_2200(); // 0x72c Call
	return 0; // 0x72e Return
}


func_2086(var_73_object, var_74_string, var_75_float)
{
	var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0); var_79_object = Obj(); var_80_bool = 0; var_81_cvector = CVector(0,0,0); var_82_cvector = CVector(0,0,0); var_83_object = Obj(); var_84_bool = 0; // 0x826 PushV
	GetMainOutdoorScene(var_83_object); // 0x827 Func
	var_85_bool = var_83_object == 0; // 0x829 NullEq
	if(var_85_bool == 0) goto Label_2095; // 0x82a JumpB
	var_86_string = "Can't find main outdoor scene"; // 0x82b PushS
	Trace(var_86_string); // 0x82c Func
	return 8; // 0x82e Return
	
Label_2095:
	GetLocator(var_74_string, var_84_bool, var_81_cvector, var_82_cvector); // 0x82f ObjFunc
	var_87_bool = var_84_bool == 0; // 0x831 Not
	if(var_87_bool == 0) goto Label_2105; // 0x832 JumpB
	var_88_string = "Warning: outdoor scene locator "; // 0x833 PushS
	var_89_int = var_88_string + var_74_string; // 0x834 Add
	var_90_string = " doesnt exist"; // 0x835 PushS
	var_91_int = var_89_int + var_90_string; // 0x836 Add
	Trace(var_91_int); // 0x837 Func
	
Label_2105:
	GetMap(var_73_object); // 0x839 ObjFunc
	var_92_bool = var_73_object == 0; // 0x83b NullEq
	if(var_92_bool == 0) goto Label_2113; // 0x83c JumpB
	var_93_string = "Can't find map"; // 0x83d PushS
	Trace(var_93_string); // 0x83e Func
	return 8; // 0x840 Return
	
Label_2113:
	var_94_float = GetByIndex(var_81_cvector, 0); // 0x841 PushE
	var_95_float = GetByIndex(var_81_cvector, 2); // 0x842 PushE
	SetMapParams(var_94_float, var_95_float, var_75_float); // 0x843 ObjFunc
	return 8; // 0x845 Return
}


func_1839()
{
	var_164_int = 0; var_165_int = 0; // 0x72f PushV
	var_166_string = "feromicin"; // 0x730 PushS
	var_167_int = 1; // 0x731 PushI
	RemoveItemByType(var_165_int, var_166_string, var_167_int); // 0x732 ObjFunc
	return 2; // 0x734 Return
}


func_49(var_0_object, var_15_int, var_16_object)
{
	var_18_object = Obj(); var_19_bool = 0; var_20_int = 0; var_21_bool = 0; var_22_object = Obj(); var_23_bool = 0; var_24_int = 0; var_25_bool = 0; // 0x31 PushV
	var_0_object = var_16_object; // 0x32 TMov
	var_26_bool = 0; var_27_object = Obj(); // 0x33 PushV
	var_27_object = var_16_object; // 0x34 Mov
	func_1569(var_27_object); // 0x35 Call
	var_66_bool = var_26_bool == 0; // 0x37 Not
	if(var_66_bool == 0) goto Label_59; // 0x38 JumpB
	var_15_int = -2; // 0x39 MovI
	return 8; // 0x3a Return
	
Label_59:
	CreateDialog(var_22_object); // 0x3b Func
	var_67_int = 0; // 0x3d PushV
	func_1717(var_67_int); // 0x3e Call
	SetNPCName(var_67_int); // 0x40 ObjFunc
	var_68_string = ""; // 0x42 PushV
	func_1719(var_68_string); // 0x43 Call
	SetPhoto(var_68_string); // 0x45 ObjFunc
	var_69_int = 0; // 0x47 PushV
	func_2119(var_69_int); // 0x48 Call
	SetPlayerName(var_69_int); // 0x4a ObjFunc
	var_24_int = -1; // 0x4c MovI
	IsOverrideActive(var_23_bool); // 0x4d Func
	var_77_bool = var_23_bool; // 0x4f Push
	if(var_77_bool == 0) goto Label_83; // 0x50 JumpB
	var_15_int = -2; // 0x51 MovI
	return 8; // 0x52 Return
	
Label_83:
	DoDialog(var_22_object); // 0x53 Func
	var_78_object = Obj(); var_79_object = Obj(); // 0x55 PushV
	var_78_object = var_16_object; // 0x56 Mov
	var_79_object = var_22_object; // 0x57 Mov
	TaskCall(3); // 0x58 TaskCall
	func_112(var_80_object, var_81_object, var_82_string, var_83_bool, var_78_object, var_79_object); // 0x59 Call
	TaskReturn(); // 0x5a TaskReturn
	IsDialogEnd(var_25_bool); // 0x5c ObjFunc
	
Label_94:
	var_254_bool = var_25_bool == 0; // 0x5e Not
	if(var_254_bool == 0) goto Label_101; // 0x5f JumpB
	sync(); // 0x60 Func
	IsDialogEnd(var_25_bool); // 0x62 ObjFunc
	goto Label_94; // 0x64 Jump
	
Label_101:
	var_255_object = Obj(); // 0x65 PushV
	var_255_object = var_16_object; // 0x66 Mov
	func_1625(); // 0x67 Call
	StopDialog(var_22_object); // 0x69 Func
	GetReturnValue(var_24_int); // 0x6b ObjFunc
	var_15_int = var_24_int; // 0x6d Mov
	return 8; // 0x6e Return
}


func_1845()
{
	var_73_object = Obj(); var_74_string = ""; var_75_float = 0; // 0x736 PushV
	var_76_object = Obj(); // 0x737 PushV
	func_2069(var_76_object); // 0x738 Call
	var_73_object = var_76_object; // 0x739 Mov
	var_74_string = "pt_map_d8q01_toyhouse"; // 0x73b MovS
	var_75_float = 2; // 0x73c MovI
	func_2086(var_73_object, var_74_string, var_75_float); // 0x73d Call
	var_96_object = Obj(); // 0x73f PushV
	func_2069(var_96_object); // 0x740 Call
	ShowMap(var_96_object); // 0x742 ObjFunc
	return 0; // 0x744 Return
}


func_1861(var_205_bool)
{
	var_207_int = 0; var_208_string = ""; // 0x746 PushV
	var_208_string = "d8q01"; // 0x747 MovS
	func_1664(var_207_int, var_208_string); // 0x748 Call
	var_211_int = 1; // 0x74a PushI
	var_212_bool = var_207_int == var_211_int; // 0x74b Eq
	if(var_212_bool == 0) goto Label_1871; // 0x74c JumpB
	var_205_bool = 1; // 0x74d MovB
	return 0; // 0x74e Return
	
Label_1871:
	var_205_bool = 0; // 0x74f MovB
	return 0; // 0x750 Return
}


func_2119(var_69_int)
{
	var_70_int = 0; var_71_int = 0; // 0x847 PushV
	var_72_string = "player"; // 0x848 PushS
	GetVariable(var_72_string, var_71_int); // 0x849 Func
	var_73_int = 0; // 0x84b PushI
	var_74_bool = var_71_int == var_73_int; // 0x84c Eq
	if(var_74_bool == 0) goto Label_2129; // 0x84d JumpB
	var_69_int = 200001; // 0x84e MovI
	return 2; // 0x84f Return
	
Label_2129:
	var_75_int = 1; // 0x851 PushI
	var_76_bool = var_71_int == var_75_int; // 0x852 Eq
	if(var_76_bool == 0) goto Label_2134; // 0x853 JumpB
	var_69_int = 200002; // 0x854 MovI
	return 2; // 0x855 Return
	
Label_2134:
	var_69_int = 200003; // 0x856 MovI
	return 2; // 0x857 Return
}


func_1873(var_213_bool)
{
	var_215_int = 0; var_216_string = ""; // 0x752 PushV
	var_216_string = "ood8Mat1"; // 0x753 MovS
	func_1664(var_215_int, var_216_string); // 0x754 Call
	var_217_int = 0; // 0x756 PushI
	var_218_bool = var_215_int == var_217_int; // 0x757 Eq
	if(var_218_bool == 0) goto Label_1883; // 0x758 JumpB
	var_213_bool = 1; // 0x759 MovB
	return 0; // 0x75a Return
	
Label_1883:
	var_213_bool = 0; // 0x75b MovB
	return 0; // 0x75c Return
}


func_2136()
{
	var_15_object = Obj(); var_16_object = Obj(); // 0x858 PushV
	var_17_string = "Adding diary entry"; // 0x859 PushS
	Trace(var_17_string); // 0x85a Func
	var_18_int = 179; // 0x85c PushI
	var_19_int = 1; // 0x85d PushI
	var_20_int = 15441; // 0x85e PushI
	CreateDiaryEntry(var_16_object, var_18_int, var_19_int, var_20_int); // 0x85f Func
	var_21_bool = 0; var_22_object = Obj(); var_23_int = 0; // 0x861 PushV
	var_22_object = var_16_object; // 0x862 Mov
	var_23_int = 175; // 0x863 MovI
	func_2040(var_21_bool, var_22_object, var_23_int); // 0x864 Call
	return 2; // 0x866 Return
}


func_1625()
{
	CameraSwitchToNormal(); // 0x65a Func
	return 0; // 0x65c Return
}


func_349(var_2_object, var_227_string)
{
	var_228_bool = 0; // 0x15e PushV
	func_1721(var_228_bool); // 0x15f Call
	var_229_bool = var_228_bool == 0; // 0x161 Not
	if(var_229_bool == 0) goto Label_356; // 0x162 JumpB
	return 0; // 0x163 Return
	
Label_356:
	var_230_bool = var_227_string == var_2_object; // 0x164 Eq
	if(var_230_bool == 0) goto Label_359; // 0x165 JumpB
	return 0; // 0x166 Return
	
Label_359:
	var_231_string = ""; // 0x167 PushV
	var_231_string = var_227_string; // 0x168 Mov
	func_1629(var_231_string); // 0x169 Call
	var_2_object = var_227_string; // 0x16b TMov
	return 0; // 0x16c Return
}


func_1885(var_255_bool)
{
	var_257_int = 0; var_258_string = ""; // 0x75e PushV
	var_258_string = "d8q01MatBringToy"; // 0x75f MovS
	func_1664(var_257_int, var_258_string); // 0x760 Call
	var_259_int = 1; // 0x762 PushI
	var_260_bool = var_257_int == var_259_int; // 0x763 Eq
	if(var_260_bool == 0) goto Label_1895; // 0x764 JumpB
	var_255_bool = 1; // 0x765 MovB
	return 0; // 0x766 Return
	
Label_1895:
	var_255_bool = 0; // 0x767 MovB
	return 0; // 0x768 Return
}


func_1629(var_10_string)
{
	var_11_float = 0; var_12_float = 0; var_13_float = 0; var_14_float = 0; // 0x65d PushV
	var_15_string = "playing "; // 0x65e PushS
	var_16_int = var_15_string + var_10_string; // 0x65f Add
	Trace(var_16_int); // 0x660 Func
	lshGetAnimTimes(var_10_string, var_13_float, var_14_float); // 0x662 Func
	lshPlayAnimation(var_13_float, var_14_float); // 0x664 Func
	var_17_string = "start: "; // 0x666 PushS
	var_18_int = var_17_string + var_13_float; // 0x667 Add
	Trace(var_18_int); // 0x668 Func
	var_19_string = "end: "; // 0x66a PushS
	var_20_int = var_19_string + var_14_float; // 0x66b Add
	Trace(var_20_int); // 0x66c Func
	return 4; // 0x66e Return
}


func_2152()
{
	var_62_object = Obj(); var_63_object = Obj(); // 0x868 PushV
	var_64_string = "Adding diary entry"; // 0x869 PushS
	Trace(var_64_string); // 0x86a Func
	var_65_int = 180; // 0x86c PushI
	var_66_int = 1; // 0x86d PushI
	var_67_int = 15442; // 0x86e PushI
	CreateDiaryEntry(var_63_object, var_65_int, var_66_int, var_67_int); // 0x86f Func
	var_68_bool = 0; var_69_object = Obj(); var_70_int = 0; // 0x871 PushV
	var_69_object = var_63_object; // 0x872 Mov
	var_70_int = 175; // 0x873 MovI
	func_2040(var_68_bool, var_69_object, var_70_int); // 0x874 Call
	return 2; // 0x876 Return
}


func_1897(var_261_bool, var_262_object)
{
	var_263_bool = 0; var_264_object = Obj(); var_265_string = ""; // 0x76a PushV
	var_264_object = var_262_object; // 0x76b Mov
	var_265_string = "toy_horse"; // 0x76c MovS
	func_1669(var_264_object, var_265_string); // 0x76d Call
	if(var_263_bool == 0) goto Label_1906; // 0x76f JumpB
	var_261_bool = 1; // 0x770 MovB
	return 0; // 0x771 Return
	
Label_1906:
	var_261_bool = 0; // 0x772 MovB
	return 0; // 0x773 Return
}


func_1647()
{
	var_8_bool = 0; // 0x66f PushV
	func_1721(var_8_bool); // 0x670 Call
	if(var_8_bool == 0) goto Label_1653; // 0x672 JumpB
	lshStopSpeech(); // 0x673 Func
	
Label_1653:
	return 0; // 0x675 Return
}


func_112(var_0_object, var_1_object, var_2_object, var_3_object, var_78_object, var_79_object)
{
	var_0_object = var_79_object; // 0x71 TMov
	var_1_object = var_78_object; // 0x72 TMov
	var_3_object = 0; // 0x73 TMovB
	var_84_int = 1; // 0x74 PushI
	if(var_84_int == 0) goto Label_319; // 0x75 JumpB
	var_85_bool = 0; // 0x76 PushV
	var_85_bool = 0; // 0x77 MovB
	var_86_bool = 0; var_87_object = Obj(); // 0x78 PushV
	var_87_object = var_1_object; // 0x79 MovT
	func_1861(var_87_object); // 0x7a Call
	if(var_86_bool == 0) goto Label_131; // 0x7c JumpB
	var_94_bool = 0; var_95_object = Obj(); // 0x7d PushV
	var_95_object = var_1_object; // 0x7e MovT
	func_1873(var_95_object); // 0x7f Call
	if(var_94_bool == 0) goto Label_131; // 0x81 JumpB
	var_85_bool = 1; // 0x82 MovB
	
Label_131:
	if(var_85_bool == 0) goto Label_162; // 0x83 JumpB
	var_100_object = Obj(); var_101_object = Obj(); // 0x84 PushV
	var_100_object = var_1_object; // 0x85 MovT
	var_101_object = var_0_object; // 0x86 MovT
	func_1731(); // 0x87 Call
	var_104_object = Obj(); var_105_object = Obj(); // 0x89 PushV
	var_104_object = var_1_object; // 0x8a MovT
	var_105_object = var_0_object; // 0x8b MovT
	func_1815(); // 0x8c Call
	var_108_string = ""; // 0x8e PushV
	var_108_string = "Neutral"; // 0x8f MovS
	func_349(var_79_object, var_108_string); // 0x90 Call
	var_123_int = 13496; // 0x92 PushI
	SetMessage(var_123_int); // 0x93 TObjFunc
	ClearReplies(); // 0x95 TObjFunc
	var_124_int = 13504; // 0x97 PushI
	var_125_int = 14773; // 0x98 PushI
	var_126_int = 14746; // 0x99 PushI
	AddReply(var_124_int, var_125_int, var_126_int); // 0x9a TObjFunc
	var_127_int = 13505; // 0x9c PushI
	var_128_int = 14748; // 0x9d PushI
	var_129_int = 14747; // 0x9e PushI
	AddReply(var_127_int, var_128_int, var_129_int); // 0x9f TObjFunc
	goto Label_319; // 0xa1 Jump
	
Label_319:
	var_130_bool = 0; // 0x13f PushV
	func_1721(var_130_bool); // 0x140 Call
	if(var_130_bool == 0) goto Label_334; // 0x142 JumpB
	
Label_323:
	lshWaitForAnimEnd(); // 0x143 Func
	var_131_object = var_3_object; // 0x145 PushT
	if(var_131_object == 0) goto Label_328; // 0x146 JumpB
	goto Label_333; // 0x147 Jump
	
Label_333:
	goto Label_348; // 0x14d Jump
	
Label_348:
	return 0; // 0x15c Return
	
Label_328:
	var_132_string = ""; // 0x148 PushV
	var_132_string = var_2_object; // 0x149 MovT
	func_1629(var_132_string); // 0x14a Call
	goto Label_323; // 0x14c Jump
	
Label_334:
	var_133_string = "all"; // 0x14e PushS
	var_134_string = "idle"; // 0x14f PushS
	PlayAnimation(var_133_string, var_134_string); // 0x150 Func
	
Label_338:
	WaitForAnimEnd(); // 0x152 Func
	var_135_object = var_3_object; // 0x154 PushT
	if(var_135_object == 0) goto Label_343; // 0x155 JumpB
	goto Label_348; // 0x156 Jump
	
Label_343:
	var_136_string = "all"; // 0x157 PushS
	var_137_string = "idle"; // 0x158 PushS
	PlayAnimation(var_136_string, var_137_string); // 0x159 Func
	goto Label_338; // 0x15b Jump
	
Label_162:
	var_138_object = Obj(); var_139_object = Obj(); // 0xa2 PushV
	var_138_object = var_1_object; // 0xa3 MovT
	var_139_object = var_0_object; // 0xa4 MovT
	func_1815(); // 0xa5 Call
	var_140_string = ""; // 0xa7 PushV
	var_140_string = "Neutral"; // 0xa8 MovS
	func_349(var_79_object, var_140_string); // 0xa9 Call
	var_141_int = 12350; // 0xab PushI
	SetMessage(var_141_int); // 0xac TObjFunc
	ClearReplies(); // 0xae TObjFunc
	var_142_bool = 0; // 0xb0 PushV
	var_142_bool = 0; // 0xb1 MovB
	var_143_bool = 0; // 0xb2 PushV
	var_143_bool = 0; // 0xb3 MovB
	var_144_bool = 0; var_145_object = Obj(); // 0xb4 PushV
	var_145_object = var_1_object; // 0xb5 MovT
	func_1885(var_145_object); // 0xb6 Call
	if(var_144_bool == 0) goto Label_191; // 0xb8 JumpB
	var_150_bool = 0; var_151_object = Obj(); // 0xb9 PushV
	var_151_object = var_1_object; // 0xba MovT
	func_1897(var_150_bool, var_151_object); // 0xbb Call
	if(var_150_bool == 0) goto Label_191; // 0xbd JumpB
	var_143_bool = 1; // 0xbe MovB
	
Label_191:
	if(var_143_bool == 0) goto Label_198; // 0xbf JumpB
	var_159_bool = 0; var_160_object = Obj(); // 0xc0 PushV
	var_160_object = var_1_object; // 0xc1 MovT
	func_1908(var_160_object); // 0xc2 Call
	if(var_159_bool == 0) goto Label_198; // 0xc4 JumpB
	var_142_bool = 1; // 0xc5 MovB
	
Label_198:
	if(var_142_bool == 0) goto Label_204; // 0xc6 JumpB
	var_165_int = 13563; // 0xc7 PushI
	var_166_int = 14813; // 0xc8 PushI
	var_167_int = 14812; // 0xc9 PushI
	AddReply(var_165_int, var_166_int, var_167_int); // 0xca TObjFunc
	
Label_204:
	var_168_bool = 0; var_169_object = Obj(); // 0xcc PushV
	var_169_object = var_1_object; // 0xcd MovT
	func_1920(var_169_object); // 0xce Call
	if(var_168_bool == 0) goto Label_214; // 0xd0 JumpB
	var_174_int = 12352; // 0xd1 PushI
	var_175_int = 13512; // 0xd2 PushI
	var_176_int = 13511; // 0xd3 PushI
	AddReply(var_174_int, var_175_int, var_176_int); // 0xd4 TObjFunc
	
Label_214:
	var_177_bool = 0; var_178_object = Obj(); // 0xd6 PushV
	var_178_object = var_1_object; // 0xd7 MovT
	func_1932(var_178_object); // 0xd8 Call
	if(var_177_bool == 0) goto Label_224; // 0xda JumpB
	var_183_int = 12366; // 0xdb PushI
	var_184_int = 13527; // 0xdc PushI
	var_185_int = 13526; // 0xdd PushI
	AddReply(var_183_int, var_184_int, var_185_int); // 0xde TObjFunc
	
Label_224:
	var_186_bool = 0; var_187_object = Obj(); // 0xe0 PushV
	var_187_object = var_1_object; // 0xe1 MovT
	func_1944(var_187_object); // 0xe2 Call
	if(var_186_bool == 0) goto Label_234; // 0xe4 JumpB
	var_192_int = 12357; // 0xe5 PushI
	var_193_int = 13518; // 0xe6 PushI
	var_194_int = 13517; // 0xe7 PushI
	AddReply(var_192_int, var_193_int, var_194_int); // 0xe8 TObjFunc
	
Label_234:
	var_195_bool = 0; // 0xea PushV
	var_195_bool = 0; // 0xeb MovB
	var_196_bool = 0; var_197_object = Obj(); // 0xec PushV
	var_197_object = var_1_object; // 0xed MovT
	func_1956(var_197_object); // 0xee Call
	if(var_196_bool == 0) goto Label_247; // 0xf0 JumpB
	var_202_bool = 0; var_203_object = Obj(); // 0xf1 PushV
	var_203_object = var_1_object; // 0xf2 MovT
	func_1980(var_203_object); // 0xf3 Call
	if(var_202_bool == 0) goto Label_247; // 0xf5 JumpB
	var_195_bool = 1; // 0xf6 MovB
	
Label_247:
	if(var_195_bool == 0) goto Label_253; // 0xf7 JumpB
	var_208_int = 13752; // 0xf8 PushI
	var_209_int = 14997; // 0xf9 PushI
	var_210_int = 14996; // 0xfa PushI
	AddReply(var_208_int, var_209_int, var_210_int); // 0xfb TObjFunc
	
Label_253:
	var_211_bool = 0; // 0xfd PushV
	var_211_bool = 0; // 0xfe MovB
	var_212_bool = 0; var_213_object = Obj(); // 0xff PushV
	var_213_object = var_1_object; // 0x100 MovT
	func_1968(var_213_object); // 0x101 Call
	if(var_212_bool == 0) goto Label_266; // 0x103 JumpB
	var_218_bool = 0; var_219_object = Obj(); // 0x104 PushV
	var_219_object = var_1_object; // 0x105 MovT
	func_1992(var_219_object); // 0x106 Call
	if(var_218_bool == 0) goto Label_266; // 0x108 JumpB
	var_211_bool = 1; // 0x109 MovB
	
Label_266:
	if(var_211_bool == 0) goto Label_272; // 0x10a JumpB
	var_224_int = 13568; // 0x10b PushI
	var_225_int = 14818; // 0x10c PushI
	var_226_int = 14817; // 0x10d PushI
	AddReply(var_224_int, var_225_int, var_226_int); // 0x10e TObjFunc
	
Label_272:
	var_227_bool = 0; // 0x110 PushV
	var_227_bool = 0; // 0x111 MovB
	var_228_bool = 0; var_229_object = Obj(); // 0x112 PushV
	var_229_object = var_1_object; // 0x113 MovT
	func_2004(var_229_object); // 0x114 Call
	if(var_228_bool == 0) goto Label_285; // 0x116 JumpB
	var_234_bool = 0; var_235_object = Obj(); // 0x117 PushV
	var_235_object = var_1_object; // 0x118 MovT
	func_2016(var_234_bool, var_235_object); // 0x119 Call
	if(var_234_bool == 0) goto Label_285; // 0x11b JumpB
	var_227_bool = 1; // 0x11c MovB
	
Label_285:
	if(var_227_bool == 0) goto Label_291; // 0x11d JumpB
	var_239_int = 13766; // 0x11e PushI
	var_240_int = 15006; // 0x11f PushI
	var_241_int = 15005; // 0x120 PushI
	AddReply(var_239_int, var_240_int, var_241_int); // 0x121 TObjFunc
	
Label_291:
	var_242_bool = 0; // 0x123 PushV
	var_242_bool = 0; // 0x124 MovB
	var_243_bool = 0; var_244_object = Obj(); // 0x125 PushV
	var_244_object = var_1_object; // 0x126 MovT
	func_2004(var_244_object); // 0x127 Call
	if(var_243_bool == 0) goto Label_305; // 0x129 JumpB
	var_245_bool = 0; var_246_object = Obj(); // 0x12a PushV
	var_246_object = var_1_object; // 0x12b MovT
	func_2016(var_245_bool, var_246_object); // 0x12c Call
	var_247_bool = var_245_bool == 0; // 0x12e Not
	if(var_247_bool == 0) goto Label_305; // 0x12f JumpB
	var_242_bool = 1; // 0x130 MovB
	
Label_305:
	if(var_242_bool == 0) goto Label_311; // 0x131 JumpB
	var_248_int = 13769; // 0x132 PushI
	var_249_int = 15009; // 0x133 PushI
	var_250_int = 15008; // 0x134 PushI
	AddReply(var_248_int, var_249_int, var_250_int); // 0x135 TObjFunc
	
Label_311:
	var_251_int = 12351; // 0x137 PushI
	var_252_int = -1; // 0x138 PushI
	var_253_int = 13510; // 0x139 PushI
	AddReply(var_251_int, var_252_int, var_253_int); // 0x13a TObjFunc
	goto Label_319; // 0x13c Jump
}


func_1908(var_270_bool)
{
	var_272_int = 0; var_273_string = ""; // 0x775 PushV
	var_273_string = "ood8Mat2"; // 0x776 MovS
	func_1664(var_272_int, var_273_string); // 0x777 Call
	var_274_int = 0; // 0x779 PushI
	var_275_bool = var_272_int == var_274_int; // 0x77a Eq
	if(var_275_bool == 0) goto Label_1918; // 0x77b JumpB
	var_270_bool = 1; // 0x77c MovB
	return 0; // 0x77d Return
	
Label_1918:
	var_270_bool = 0; // 0x77e MovB
	return 0; // 0x77f Return
}


func_1654(var_51_cvector, var_52_cvector)
{
	var_54_float = 0; var_55_float = 0; // 0x676 PushV
	var_56_int = var_52_cvector | var_52_cvector; // 0x677 Or
	var_55_float = sqrt(var_56_int); // 0x678 Sqrt2
	var_57_float = 0.0; // 0x679 PushF
	var_58_bool = var_55_float < var_57_float; // 0x67a LT
	if(var_58_bool == 0) goto Label_1662; // 0x67b JumpB
	var_51_cvector = CVector(0.0, 0.0, 0.0); // 0x67c MovV
	return 2; // 0x67d Return
	
Label_1662:
	var_51_cvector = var_52_cvector / var_52_cvector; // 0x67e Div2
	return 2; // 0x67f Return
}


func_2168()
{
	var_107_object = Obj(); var_108_object = Obj(); // 0x878 PushV
	var_109_string = "Adding diary entry"; // 0x879 PushS
	Trace(var_109_string); // 0x87a Func
	var_110_int = 181; // 0x87c PushI
	var_111_int = 1; // 0x87d PushI
	var_112_int = 15443; // 0x87e PushI
	CreateDiaryEntry(var_108_object, var_110_int, var_111_int, var_112_int); // 0x87f Func
	var_113_bool = 0; var_114_object = Obj(); var_115_int = 0; // 0x881 PushV
	var_114_object = var_108_object; // 0x882 Mov
	var_115_int = 175; // 0x883 MovI
	func_2040(var_113_bool, var_114_object, var_115_int); // 0x884 Call
	return 2; // 0x886 Return
}


func_1664(var_207_int, var_208_string)
{
	var_209_int = 0; var_210_int = 0; // 0x680 PushV
	GetVariable(var_208_string, var_210_int); // 0x681 Func
	var_207_int = var_210_int; // 0x683 Mov
	return 2; // 0x684 Return
}


func_1920(var_279_bool)
{
	var_281_int = 0; var_282_string = ""; // 0x781 PushV
	var_282_string = "ood8Mat3"; // 0x782 MovS
	func_1664(var_281_int, var_282_string); // 0x783 Call
	var_283_int = 0; // 0x785 PushI
	var_284_bool = var_281_int == var_283_int; // 0x786 Eq
	if(var_284_bool == 0) goto Label_1930; // 0x787 JumpB
	var_279_bool = 1; // 0x788 MovB
	return 0; // 0x789 Return
	
Label_1930:
	var_279_bool = 0; // 0x78a MovB
	return 0; // 0x78b Return
}


func_1669(var_263_bool, var_265_string)
{
	var_266_int = 0; var_267_bool = 0; var_268_int = 0; var_269_bool = 0; // 0x685 PushV
	GetInvItemByName(var_268_int, var_265_string); // 0x686 Func
	HasItem(var_268_int, var_269_bool); // 0x688 ObjFunc
	var_263_bool = var_269_bool; // 0x68a Mov
	return 4; // 0x68b Return
}


func_2184()
{
	var_176_object = Obj(); var_177_object = Obj(); // 0x888 PushV
	var_178_string = "Adding diary entry"; // 0x889 PushS
	Trace(var_178_string); // 0x88a Func
	var_179_int = 128; // 0x88c PushI
	var_180_int = 2; // 0x88d PushI
	var_181_int = 13773; // 0x88e PushI
	CreateDiaryEntry(var_177_object, var_179_int, var_180_int, var_181_int); // 0x88f Func
	var_182_bool = 0; var_183_object = Obj(); var_184_int = 0; // 0x891 PushV
	var_183_object = var_177_object; // 0x892 Mov
	var_184_int = 127; // 0x893 MovI
	func_2040(var_182_bool, var_183_object, var_184_int); // 0x894 Call
	return 2; // 0x896 Return
}


func_1932(var_288_bool)
{
	var_290_int = 0; var_291_string = ""; // 0x78d PushV
	var_291_string = "ood8Mat4"; // 0x78e MovS
	func_1664(var_290_int, var_291_string); // 0x78f Call
	var_292_int = 0; // 0x791 PushI
	var_293_bool = var_290_int == var_292_int; // 0x792 Eq
	if(var_293_bool == 0) goto Label_1942; // 0x793 JumpB
	var_288_bool = 1; // 0x794 MovB
	return 0; // 0x795 Return
	
Label_1942:
	var_288_bool = 0; // 0x796 MovB
	return 0; // 0x797 Return
}


func_1676(var_116_bool, var_117_string, var_118_string)
{
	var_119_object = Obj(); var_120_object = Obj(); // 0x68c PushV
	FindActor(var_120_object, var_117_string); // 0x68d Func
	var_121_bool = var_120_object == 0; // 0x68f NullEq
	if(var_121_bool == 0) goto Label_1683; // 0x690 JumpB
	var_116_bool = 0; // 0x691 MovB
	return 2; // 0x692 Return
	
Label_1683:
	Trigger(var_120_object, var_118_string); // 0x693 Func
	var_116_bool = 1; // 0x695 MovB
	return 2; // 0x696 Return
}


func_1688(var_59_float)
{
	var_60_float = 0; var_61_float = 0; // 0x698 PushV
	GetGameTime(var_61_float); // 0x699 Func
	var_59_float = var_61_float; // 0x69b Mov
	return 2; // 0x69c Return
}


func_1944(var_297_bool)
{
	var_299_int = 0; var_300_string = ""; // 0x799 PushV
	var_300_string = "ood8Mat5"; // 0x79a MovS
	func_1664(var_299_int, var_300_string); // 0x79b Call
	var_301_int = 0; // 0x79d PushI
	var_302_bool = var_299_int == var_301_int; // 0x79e Eq
	if(var_302_bool == 0) goto Label_1954; // 0x79f JumpB
	var_297_bool = 1; // 0x7a0 MovB
	return 0; // 0x7a1 Return
	
Label_1954:
	var_297_bool = 0; // 0x7a2 MovB
	return 0; // 0x7a3 Return
}


func_2200()
{
	var_193_object = Obj(); var_194_object = Obj(); // 0x898 PushV
	var_195_string = "Adding diary entry"; // 0x899 PushS
	Trace(var_195_string); // 0x89a Func
	var_196_int = 129; // 0x89c PushI
	var_197_int = 2; // 0x89d PushI
	var_198_int = 13774; // 0x89e PushI
	CreateDiaryEntry(var_194_object, var_196_int, var_197_int, var_198_int); // 0x89f Func
	var_199_bool = 0; var_200_object = Obj(); var_201_int = 0; // 0x8a1 PushV
	var_200_object = var_194_object; // 0x8a2 Mov
	var_201_int = 127; // 0x8a3 MovI
	func_2040(var_199_bool, var_200_object, var_201_int); // 0x8a4 Call
	return 2; // 0x8a6 Return
}


func_1693(var_9_int)
{
	var_10_float = 0; var_11_float = 0; // 0x69d PushV
	GetGameTime(var_11_float); // 0x69e Func
	var_12_int = 1; // 0x6a0 PushI
	var_13_int = 0; // 0x6a1 PushV
	var_14_int = 24; // 0x6a2 PushI
	var_13_int = var_11_float / var_11_float; // 0x6a3 Div2
	var_9_int = var_12_int + var_13_int; // 0x6a4 Add2
	return 2; // 0x6a5 Return
}


func_1956(var_307_bool)
{
	var_309_int = 0; var_310_string = ""; // 0x7a5 PushV
	var_310_string = "d8q01BigVladIsVictim"; // 0x7a6 MovS
	func_1664(var_309_int, var_310_string); // 0x7a7 Call
	var_311_int = 1; // 0x7a9 PushI
	var_312_bool = var_309_int == var_311_int; // 0x7aa Eq
	if(var_312_bool == 0) goto Label_1966; // 0x7ab JumpB
	var_307_bool = 1; // 0x7ac MovB
	return 0; // 0x7ad Return
	
Label_1966:
	var_307_bool = 0; // 0x7ae MovB
	return 0; // 0x7af Return
}


func_1702(var_7_bool, var_8_int)
{
	var_9_int = 0; // 0x6a7 PushV
	func_1693(var_9_int); // 0x6a8 Call
	var_7_bool = var_9_int == var_8_int; // 0x6aa Eq2
	return 0; // 0x6ab Return
}


func_2216()
{
	var_5_bool = GlobalVars[1]; // 0x8a8 PushGE
	var_5_bool = 0; // 0x8a9 MovB
	GlobalVars[1] = var_5_bool; // 0x8aa PopGE
	return 0; // 0x8ab Return
}


func_2220(var_6_object)
{
	var_7_bool = 0; var_8_int = 0; // 0x8ad PushV
	var_8_int = 8; // 0x8ae MovI
	func_1702(var_7_bool, var_8_int); // 0x8af Call
	if(var_7_bool == 0) goto Label_2233; // 0x8b1 JumpB
	var_15_int = 0; var_16_object = Obj(); // 0x8b2 PushV
	var_16_object = var_6_object; // 0x8b3 Mov
	TaskCall(2); // 0x8b4 TaskCall
	func_49(var_17_object, var_15_int, var_16_object); // 0x8b5 Call
	TaskReturn(); // 0x8b6 TaskReturn
	return 0; // 0x8b8 Return
	
Label_2233:
	var_256_bool = 0; // 0x8b9 PushV
	func_1708(var_256_bool); // 0x8ba Call
	return 0; // 0x8bc Return
}


func_1708(var_256_bool)
{
	var_257_bool = 0; var_258_bool = 0; // 0x6ac PushV
	var_259_string = ""; // 0x6ad PushV
	var_259_string = "No"; // 0x6ae MovS
	func_1629(var_259_string); // 0x6af Call
	lshWaitForAnimEnd(var_258_bool); // 0x6b1 Func
	var_256_bool = var_258_bool; // 0x6b3 Mov
	return 2; // 0x6b4 Return
}


func_1968(var_323_bool)
{
	var_325_int = 0; var_326_string = ""; // 0x7b1 PushV
	var_326_string = "d8q01MladVladIsVictim"; // 0x7b2 MovS
	func_1664(var_325_int, var_326_string); // 0x7b3 Call
	var_327_int = 1; // 0x7b5 PushI
	var_328_bool = var_325_int == var_327_int; // 0x7b6 Eq
	if(var_328_bool == 0) goto Label_1978; // 0x7b7 JumpB
	var_323_bool = 1; // 0x7b8 MovB
	return 0; // 0x7b9 Return
	
Label_1978:
	var_323_bool = 0; // 0x7ba MovB
	return 0; // 0x7bb Return
}


func_1717(var_67_int)
{
	var_67_int = 2870; // 0x6b5 MovI
	return 0; // 0x6b6 Return
}


func_1719(var_68_string)
{
	var_68_string = "ui/NPC_Mat.png"; // 0x6b7 MovS
	return 0; // 0x6b8 Return
}


func_1721(var_8_bool)
{
	var_8_bool = 1; // 0x6b9 MovB
	return 0; // 0x6ba Return
}


func_1723()
{
	var_170_string = "playsound"; // 0x6bc PushS
	var_171_string = "giveitem"; // 0x6bd PushS
	TriggerWorld(var_170_string, var_171_string); // 0x6be Func
	return 0; // 0x6c0 Return
}


func_1980(var_313_bool)
{
	var_315_int = 0; var_316_string = ""; // 0x7bd PushV
	var_316_string = "ood8Mat6"; // 0x7be MovS
	func_1664(var_315_int, var_316_string); // 0x7bf Call
	var_317_int = 0; // 0x7c1 PushI
	var_318_bool = var_315_int == var_317_int; // 0x7c2 Eq
	if(var_318_bool == 0) goto Label_1990; // 0x7c3 JumpB
	var_313_bool = 1; // 0x7c4 MovB
	return 0; // 0x7c5 Return
	
Label_1990:
	var_313_bool = 0; // 0x7c6 MovB
	return 0; // 0x7c7 Return
}


func_1729()
{
	return 0; // 0x6c2 Return
}


func_1731()
{
	var_221_string = "ood8Mat1"; // 0x6c4 PushS
	var_222_int = 1; // 0x6c5 PushI
	SetVariable(var_221_string, var_222_int); // 0x6c6 Func
	return 0; // 0x6c8 Return
}


func_1992(var_329_bool)
{
	var_331_int = 0; var_332_string = ""; // 0x7c9 PushV
	var_332_string = "ood8Mat7"; // 0x7ca MovS
	func_1664(var_331_int, var_332_string); // 0x7cb Call
	var_333_int = 0; // 0x7cd PushI
	var_334_bool = var_331_int == var_333_int; // 0x7ce Eq
	if(var_334_bool == 0) goto Label_2002; // 0x7cf JumpB
	var_329_bool = 1; // 0x7d0 MovB
	return 0; // 0x7d1 Return
	
Label_2002:
	var_329_bool = 0; // 0x7d2 MovB
	return 0; // 0x7d3 Return
}


func_1737()
{
	var_13_string = "d8q01BringBadBoy"; // 0x6ca PushS
	var_14_int = 1; // 0x6cb PushI
	SetVariable(var_13_string, var_14_int); // 0x6cc Func
	func_2136(); // 0x6cf Call
	return 0; // 0x6d1 Return
}


func_1746()
{
	var_44_object = Obj(); var_45_object = Obj(); // 0x6d2 PushV
	var_46_string = "d8q01MatBringToy"; // 0x6d3 PushS
	var_47_int = 1; // 0x6d4 PushI
	SetVariable(var_46_string, var_47_int); // 0x6d5 Func
	var_48_object = Obj(); // 0x6d7 PushV
	func_2069(var_48_object); // 0x6d8 Call
	var_45_object = var_48_object; // 0x6d9 Mov
	var_55_string = "d8q01MatGotoToyHouse"; // 0x6db PushS
	var_56_string = "pt_map_d8q01_toyhouse"; // 0x6dc PushS
	var_57_int = 1; // 0x6dd PushI
	var_58_int = 15444; // 0x6de PushI
	var_59_float = 0; // 0x6df PushV
	func_1688(var_59_float); // 0x6e0 Call
	AddMark(var_55_string, var_56_string, var_57_int, var_58_int, var_59_float); // 0x6e2 ObjFunc
	func_2152(); // 0x6e5 Call
	return 2; // 0x6e7 Return
}


func_2004(var_339_bool)
{
	var_341_int = 0; var_342_string = ""; // 0x7d5 PushV
	var_342_string = "d8q02"; // 0x7d6 MovS
	func_1664(var_341_int, var_342_string); // 0x7d7 Call
	var_343_int = 1; // 0x7d9 PushI
	var_344_bool = var_341_int == var_343_int; // 0x7da Eq
	if(var_344_bool == 0) goto Label_2014; // 0x7db JumpB
	var_339_bool = 1; // 0x7dc MovB
	return 0; // 0x7dd Return
	
Label_2014:
	var_339_bool = 0; // 0x7de MovB
	return 0; // 0x7df Return
}


func_2016(var_345_bool, var_346_object)
{
	var_347_bool = 0; var_348_object = Obj(); var_349_string = ""; // 0x7e1 PushV
	var_348_object = var_346_object; // 0x7e2 Mov
	var_349_string = "feromicin"; // 0x7e3 MovS
	func_1669(var_348_object, var_349_string); // 0x7e4 Call
	if(var_347_bool == 0) goto Label_2025; // 0x7e6 JumpB
	var_345_bool = 1; // 0x7e7 MovB
	return 0; // 0x7e8 Return
	
Label_2025:
	var_345_bool = 0; // 0x7e9 MovB
	return 0; // 0x7ea Return
}


func_1769()
{
	var_101_string = "ood8Mat2"; // 0x6ea PushS
	var_102_int = 1; // 0x6eb PushI
	SetVariable(var_101_string, var_102_int); // 0x6ec Func
	return 0; // 0x6ee Return
}


func_2027(var_30_object)
{
	var_31_object = Obj(); var_32_object = Obj(); // 0x7eb PushV
	GetDiaryRoot(var_32_object); // 0x7ec Func
	var_33_bool = var_32_object == 0; // 0x7ee Not
	if(var_33_bool == 0) goto Label_2037; // 0x7ef JumpB
	var_34_string = "Can't retrieve diary root"; // 0x7f0 PushS
	Trace(var_34_string); // 0x7f1 Func
	var_30_object = 0; // 0x7f3 MovB
	return 2; // 0x7f4 Return
	
Label_2037:
	var_30_object = var_32_object; // 0x7f5 Mov
	return 2; // 0x7f6 Return
}


func_1775()
{
	func_2168(); // 0x6f1 Call
	var_116_bool = 0; var_117_string = ""; var_118_string = ""; // 0x6f3 PushV
	var_117_string = "quest_d8_01"; // 0x6f4 MovS
	var_118_string = "unlock_boiny"; // 0x6f5 MovS
	func_1676(var_116_bool, var_117_string, var_118_string); // 0x6f6 Call
	return 0; // 0x6f8 Return
}


func_2040(var_21_bool, var_22_object, var_23_int)
{
	var_24_object = Obj(); var_25_object = Obj(); var_26_int = 0; var_27_object = Obj(); var_28_object = Obj(); var_29_int = 0; // 0x7f8 PushV
	var_30_object = Obj(); // 0x7f9 PushV
	func_2027(var_30_object); // 0x7fa Call
	var_27_object = var_30_object; // 0x7fb Mov
	Find(var_23_int, var_28_object); // 0x7fd ObjFunc
	var_35_bool = var_28_object == 0; // 0x7ff Not
	if(var_35_bool == 0) goto Label_2055; // 0x800 JumpB
	var_36_string = "Can't find diary parent with id: "; // 0x801 PushS
	var_37_int = var_36_string + var_23_int; // 0x802 Add
	Trace(var_37_int); // 0x803 Func
	var_21_bool = 0; // 0x805 MovB
	return 6; // 0x806 Return
	
Label_2055:
	AddChild(var_22_object); // 0x807 ObjFunc
	var_38_string = "player_diary"; // 0x809 PushS
	var_39_int = 1; // 0x80a PushI
	SetVariable(var_38_string, var_39_int); // 0x80b Func
	GetCategory(var_29_int); // 0x80d ObjFunc
	SetDiarySection(var_29_int); // 0x80f Func
	var_21_bool = 0; // 0x811 MovB
	return 6; // 0x812 Return
}


func_1785()
{
	var_126_string = "ood8Mat3"; // 0x6fa PushS
	var_127_int = 1; // 0x6fb PushI
	SetVariable(var_126_string, var_127_int); // 0x6fc Func
	return 0; // 0x6fe Return
}


func_1791()
{
	var_132_string = "ood8Mat4"; // 0x700 PushS
	var_133_int = 1; // 0x701 PushI
	SetVariable(var_132_string, var_133_int); // 0x702 Func
	return 0; // 0x704 Return
}


