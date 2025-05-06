task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_cvector, var_8_bool)
{
	var_9_int = 1; // 0xf5 PushI
	if(var_9_int == 0) goto Label_946; // 0xf6 JumpB
	func_1549(); // 0xf8 NEW_2
	var_11_int = 21809; // 0xfa PushI
	var_12_bool = var_8_bool == var_11_int; // 0xfb Eq
	if(var_12_bool == 0) goto Label_258; // 0xfc JumpB
	var_13_object = Obj(); var_14_object = Obj(); // 0xfd PushV
	var_13_object = var_1_object; // 0xfe MovT
	var_14_object = var_0_object; // 0xff MovT
	func_1677(); // 0x100 NEW_2
	
Label_258:
	var_40_int = 21834; // 0x102 PushI
	var_41_bool = var_8_bool == var_40_int; // 0x103 Eq
	if(var_41_bool == 0) goto Label_266; // 0x104 JumpB
	var_42_object = Obj(); var_43_object = Obj(); // 0x105 PushV
	var_42_object = var_1_object; // 0x106 MovT
	var_43_object = var_0_object; // 0x107 MovT
	func_1677(); // 0x108 NEW_2
	
Label_266:
	var_44_int = 21895; // 0x10a PushI
	var_45_bool = var_8_bool == var_44_int; // 0x10b Eq
	if(var_45_bool == 0) goto Label_289; // 0x10c JumpB
	var_46_object = Obj(); var_47_object = Obj(); // 0x10d PushV
	var_46_object = var_1_object; // 0x10e MovT
	var_47_object = var_0_object; // 0x10f MovT
	func_1686(); // 0x110 NEW_2
	var_87_object = Obj(); var_88_object = Obj(); // 0x112 PushV
	var_87_object = var_1_object; // 0x113 MovT
	var_88_object = var_0_object; // 0x114 MovT
	func_1735(); // 0x115 NEW_2
	var_113_object = Obj(); var_114_object = Obj(); // 0x117 PushV
	var_113_object = var_1_object; // 0x118 MovT
	var_114_object = var_0_object; // 0x119 MovT
	func_1723(); // 0x11a NEW_2
	var_117_object = Obj(); var_118_object = Obj(); // 0x11c PushV
	var_117_object = var_1_object; // 0x11d MovT
	var_118_object = var_0_object; // 0x11e MovT
	func_1751(var_118_object); // 0x11f NEW_2
	
Label_289:
	var_141_int = 21890; // 0x121 PushI
	var_142_bool = var_8_bool == var_141_int; // 0x122 Eq
	if(var_142_bool == 0) goto Label_312; // 0x123 JumpB
	var_143_object = Obj(); var_144_object = Obj(); // 0x124 PushV
	var_143_object = var_1_object; // 0x125 MovT
	var_144_object = var_0_object; // 0x126 MovT
	func_1686(); // 0x127 NEW_2
	var_145_object = Obj(); var_146_object = Obj(); // 0x129 PushV
	var_145_object = var_1_object; // 0x12a MovT
	var_146_object = var_0_object; // 0x12b MovT
	func_1735(); // 0x12c NEW_2
	var_147_object = Obj(); var_148_object = Obj(); // 0x12e PushV
	var_147_object = var_1_object; // 0x12f MovT
	var_148_object = var_0_object; // 0x130 MovT
	func_1751(var_148_object); // 0x131 NEW_2
	var_149_object = Obj(); var_150_object = Obj(); // 0x133 PushV
	var_149_object = var_1_object; // 0x134 MovT
	var_150_object = var_0_object; // 0x135 MovT
	func_1723(); // 0x136 NEW_2
	
Label_312:
	var_151_int = 29926; // 0x138 PushI
	var_152_bool = var_8_bool == var_151_int; // 0x139 Eq
	if(var_152_bool == 0) goto Label_320; // 0x13a JumpB
	var_153_object = Obj(); var_154_object = Obj(); // 0x13b PushV
	var_153_object = var_1_object; // 0x13c MovT
	var_154_object = var_0_object; // 0x13d MovT
	func_1729(); // 0x13e NEW_2
	
Label_320:
	var_157_int = 21800; // 0x140 PushI
	var_158_bool = var_7_cvector == var_157_int; // 0x141 Eq
	if(var_158_bool == 0) goto Label_426; // 0x142 JumpB
	var_159_bool = 0; var_160_object = Obj(); // 0x143 PushV
	var_160_object = var_1_object; // 0x144 MovT
	func_1774(var_160_object); // 0x145 NEW_2
	if(var_159_bool == 0) goto Label_353; // 0x147 JumpB
	var_167_object = Obj(); var_168_object = Obj(); // 0x148 PushV
	var_167_object = var_1_object; // 0x149 MovT
	var_168_object = var_0_object; // 0x14a MovT
	func_1671(); // 0x14b NEW_2
	var_171_string = ""; // 0x14d PushV
	var_171_string = "Patronage"; // 0x14e MovS
	func_222(var_8_bool, var_171_string); // 0x14f NEW_2
	var_188_int = 520595; // 0x151 PushI
	SetMessage(var_188_int); // 0x152 TObjFunc
	ClearReplies(); // 0x154 TObjFunc
	var_189_int = 520596; // 0x156 PushI
	var_190_int = 21802; // 0x157 PushI
	var_191_int = 21801; // 0x158 PushI
	AddReply(var_189_int, var_190_int, var_191_int); // 0x159 TObjFunc
	var_192_int = 520621; // 0x15b PushI
	var_193_int = 29795; // 0x15c PushI
	var_194_int = 21829; // 0x15d PushI
	AddReply(var_192_int, var_193_int, var_194_int); // 0x15e TObjFunc
	return 0; // 0x160 Return
	
Label_353:
	var_195_string = ""; // 0x161 PushV
	var_195_string = "Neutral"; // 0x162 MovS
	func_222(var_8_bool, var_195_string); // 0x163 NEW_2
	var_196_int = 520622; // 0x165 PushI
	SetMessage(var_196_int); // 0x166 TObjFunc
	ClearReplies(); // 0x168 TObjFunc
	var_197_bool = 0; var_198_object = Obj(); // 0x16a PushV
	var_198_object = var_1_object; // 0x16b MovT
	func_1786(var_198_object); // 0x16c NEW_2
	if(var_197_bool == 0) goto Label_372; // 0x16e JumpB
	var_203_int = 520623; // 0x16f PushI
	var_204_int = 21833; // 0x170 PushI
	var_205_int = 21832; // 0x171 PushI
	AddReply(var_203_int, var_204_int, var_205_int); // 0x172 TObjFunc
	
Label_372:
	var_206_bool = 0; // 0x174 PushV
	var_206_bool = 0; // 0x175 MovB
	var_207_bool = 0; var_208_object = Obj(); // 0x176 PushV
	var_208_object = var_1_object; // 0x177 MovT
	func_1798(var_207_bool, var_208_object); // 0x178 NEW_2
	if(var_207_bool == 0) goto Label_385; // 0x17a JumpB
	var_215_bool = 0; var_216_object = Obj(); // 0x17b PushV
	var_216_object = var_1_object; // 0x17c MovT
	func_1808(var_216_object); // 0x17d NEW_2
	if(var_215_bool == 0) goto Label_385; // 0x17f JumpB
	var_206_bool = 1; // 0x180 MovB
	
Label_385:
	if(var_206_bool == 0) goto Label_391; // 0x181 JumpB
	var_221_int = 520626; // 0x182 PushI
	var_222_int = 21836; // 0x183 PushI
	var_223_int = 21835; // 0x184 PushI
	AddReply(var_221_int, var_222_int, var_223_int); // 0x185 TObjFunc
	
Label_391:
	var_224_bool = 0; // 0x187 PushV
	var_224_bool = 0; // 0x188 MovB
	var_225_bool = 0; var_226_object = Obj(); // 0x189 PushV
	var_226_object = var_1_object; // 0x18a MovT
	func_1808(var_226_object); // 0x18b NEW_2
	if(var_225_bool == 0) goto Label_404; // 0x18d JumpB
	var_227_bool = 0; var_228_object = Obj(); // 0x18e PushV
	var_228_object = var_1_object; // 0x18f MovT
	func_1820(var_227_bool, var_228_object); // 0x190 NEW_2
	if(var_227_bool == 0) goto Label_404; // 0x192 JumpB
	var_224_bool = 1; // 0x193 MovB
	
Label_404:
	if(var_224_bool == 0) goto Label_410; // 0x194 JumpB
	var_238_int = 520686; // 0x195 PushI
	var_239_int = 21897; // 0x196 PushI
	var_240_int = 21896; // 0x197 PushI
	AddReply(var_238_int, var_239_int, var_240_int); // 0x198 TObjFunc
	
Label_410:
	var_241_bool = 0; var_242_object = Obj(); // 0x19a PushV
	var_242_object = var_1_object; // 0x19b MovT
	func_1762(var_242_object); // 0x19c NEW_2
	if(var_241_bool == 0) goto Label_420; // 0x19e JumpB
	var_247_int = 528534; // 0x19f PushI
	var_248_int = 29927; // 0x1a0 PushI
	var_249_int = 29926; // 0x1a1 PushI
	AddReply(var_247_int, var_248_int, var_249_int); // 0x1a2 TObjFunc
	
Label_420:
	var_250_int = 520629; // 0x1a4 PushI
	var_251_int = -1; // 0x1a5 PushI
	var_252_int = 21838; // 0x1a6 PushI
	AddReply(var_250_int, var_251_int, var_252_int); // 0x1a7 TObjFunc
	return 0; // 0x1a9 Return
	
Label_426:
	var_253_int = 29927; // 0x1aa PushI
	var_254_bool = var_7_cvector == var_253_int; // 0x1ab Eq
	if(var_254_bool == 0) goto Label_444; // 0x1ac JumpB
	var_255_string = ""; // 0x1ad PushV
	var_255_string = "Patronage"; // 0x1ae MovS
	func_222(var_8_bool, var_255_string); // 0x1af NEW_2
	var_256_int = 528535; // 0x1b1 PushI
	SetMessage(var_256_int); // 0x1b2 TObjFunc
	ClearReplies(); // 0x1b4 TObjFunc
	var_257_int = 528536; // 0x1b6 PushI
	var_258_int = 29929; // 0x1b7 PushI
	var_259_int = 29928; // 0x1b8 PushI
	AddReply(var_257_int, var_258_int, var_259_int); // 0x1b9 TObjFunc
	return 0; // 0x1bb Return
	
Label_444:
	var_260_int = 29929; // 0x1bc PushI
	var_261_bool = var_7_cvector == var_260_int; // 0x1bd Eq
	if(var_261_bool == 0) goto Label_462; // 0x1be JumpB
	var_262_string = ""; // 0x1bf PushV
	var_262_string = "Neutral"; // 0x1c0 MovS
	func_222(var_8_bool, var_262_string); // 0x1c1 NEW_2
	var_263_int = 528537; // 0x1c3 PushI
	SetMessage(var_263_int); // 0x1c4 TObjFunc
	ClearReplies(); // 0x1c6 TObjFunc
	var_264_int = 528538; // 0x1c8 PushI
	var_265_int = 29931; // 0x1c9 PushI
	var_266_int = 29930; // 0x1ca PushI
	AddReply(var_264_int, var_265_int, var_266_int); // 0x1cb TObjFunc
	return 0; // 0x1cd Return
	
Label_462:
	var_267_int = 29931; // 0x1ce PushI
	var_268_bool = var_7_cvector == var_267_int; // 0x1cf Eq
	if(var_268_bool == 0) goto Label_480; // 0x1d0 JumpB
	var_269_string = ""; // 0x1d1 PushV
	var_269_string = "Neutral"; // 0x1d2 MovS
	func_222(var_8_bool, var_269_string); // 0x1d3 NEW_2
	var_270_int = 528539; // 0x1d5 PushI
	SetMessage(var_270_int); // 0x1d6 TObjFunc
	ClearReplies(); // 0x1d8 TObjFunc
	var_271_int = 528540; // 0x1da PushI
	var_272_int = 29933; // 0x1db PushI
	var_273_int = 29932; // 0x1dc PushI
	AddReply(var_271_int, var_272_int, var_273_int); // 0x1dd TObjFunc
	return 0; // 0x1df Return
	
Label_480:
	var_274_int = 29933; // 0x1e0 PushI
	var_275_bool = var_7_cvector == var_274_int; // 0x1e1 Eq
	if(var_275_bool == 0) goto Label_498; // 0x1e2 JumpB
	var_276_string = ""; // 0x1e3 PushV
	var_276_string = "Neutral"; // 0x1e4 MovS
	func_222(var_8_bool, var_276_string); // 0x1e5 NEW_2
	var_277_int = 528541; // 0x1e7 PushI
	SetMessage(var_277_int); // 0x1e8 TObjFunc
	ClearReplies(); // 0x1ea TObjFunc
	var_278_int = 528542; // 0x1ec PushI
	var_279_int = 29935; // 0x1ed PushI
	var_280_int = 29934; // 0x1ee PushI
	AddReply(var_278_int, var_279_int, var_280_int); // 0x1ef TObjFunc
	return 0; // 0x1f1 Return
	
Label_498:
	var_281_int = 29935; // 0x1f2 PushI
	var_282_bool = var_7_cvector == var_281_int; // 0x1f3 Eq
	if(var_282_bool == 0) goto Label_516; // 0x1f4 JumpB
	var_283_string = ""; // 0x1f5 PushV
	var_283_string = "Neutral"; // 0x1f6 MovS
	func_222(var_8_bool, var_283_string); // 0x1f7 NEW_2
	var_284_int = 528543; // 0x1f9 PushI
	SetMessage(var_284_int); // 0x1fa TObjFunc
	ClearReplies(); // 0x1fc TObjFunc
	var_285_int = 528544; // 0x1fe PushI
	var_286_int = 29937; // 0x1ff PushI
	var_287_int = 29936; // 0x200 PushI
	AddReply(var_285_int, var_286_int, var_287_int); // 0x201 TObjFunc
	return 0; // 0x203 Return
	
Label_516:
	var_288_int = 29937; // 0x204 PushI
	var_289_bool = var_7_cvector == var_288_int; // 0x205 Eq
	if(var_289_bool == 0) goto Label_534; // 0x206 JumpB
	var_290_string = ""; // 0x207 PushV
	var_290_string = "Neutral"; // 0x208 MovS
	func_222(var_8_bool, var_290_string); // 0x209 NEW_2
	var_291_int = 528545; // 0x20b PushI
	SetMessage(var_291_int); // 0x20c TObjFunc
	ClearReplies(); // 0x20e TObjFunc
	var_292_int = 528546; // 0x210 PushI
	var_293_int = -1; // 0x211 PushI
	var_294_int = 29938; // 0x212 PushI
	AddReply(var_292_int, var_293_int, var_294_int); // 0x213 TObjFunc
	return 0; // 0x215 Return
	
Label_534:
	var_295_int = 21897; // 0x216 PushI
	var_296_bool = var_7_cvector == var_295_int; // 0x217 Eq
	if(var_296_bool == 0) goto Label_557; // 0x218 JumpB
	var_297_string = ""; // 0x219 PushV
	var_297_string = "Rage"; // 0x21a MovS
	func_222(var_8_bool, var_297_string); // 0x21b NEW_2
	var_298_int = 520687; // 0x21d PushI
	SetMessage(var_298_int); // 0x21e TObjFunc
	ClearReplies(); // 0x220 TObjFunc
	var_299_int = 520689; // 0x222 PushI
	var_300_int = 21900; // 0x223 PushI
	var_301_int = 21899; // 0x224 PushI
	AddReply(var_299_int, var_300_int, var_301_int); // 0x225 TObjFunc
	var_302_int = 520688; // 0x227 PushI
	var_303_int = -1; // 0x228 PushI
	var_304_int = 21898; // 0x229 PushI
	AddReply(var_302_int, var_303_int, var_304_int); // 0x22a TObjFunc
	return 0; // 0x22c Return
	
Label_557:
	var_305_int = 21900; // 0x22d PushI
	var_306_bool = var_7_cvector == var_305_int; // 0x22e Eq
	if(var_306_bool == 0) goto Label_580; // 0x22f JumpB
	var_307_string = ""; // 0x230 PushV
	var_307_string = "Rage"; // 0x231 MovS
	func_222(var_8_bool, var_307_string); // 0x232 NEW_2
	var_308_int = 520690; // 0x234 PushI
	SetMessage(var_308_int); // 0x235 TObjFunc
	ClearReplies(); // 0x237 TObjFunc
	var_309_int = 520691; // 0x239 PushI
	var_310_int = -1; // 0x23a PushI
	var_311_int = 21901; // 0x23b PushI
	AddReply(var_309_int, var_310_int, var_311_int); // 0x23c TObjFunc
	var_312_int = 520692; // 0x23e PushI
	var_313_int = -1; // 0x23f PushI
	var_314_int = 21902; // 0x240 PushI
	AddReply(var_312_int, var_313_int, var_314_int); // 0x241 TObjFunc
	return 0; // 0x243 Return
	
Label_580:
	var_315_int = 21836; // 0x244 PushI
	var_316_bool = var_7_cvector == var_315_int; // 0x245 Eq
	if(var_316_bool == 0) goto Label_603; // 0x246 JumpB
	var_317_string = ""; // 0x247 PushV
	var_317_string = "Patronage"; // 0x248 MovS
	func_222(var_8_bool, var_317_string); // 0x249 NEW_2
	var_318_int = 520627; // 0x24b PushI
	SetMessage(var_318_int); // 0x24c TObjFunc
	ClearReplies(); // 0x24e TObjFunc
	var_319_int = 520628; // 0x250 PushI
	var_320_int = 21885; // 0x251 PushI
	var_321_int = 21837; // 0x252 PushI
	AddReply(var_319_int, var_320_int, var_321_int); // 0x253 TObjFunc
	var_322_int = 520677; // 0x255 PushI
	var_323_int = 21887; // 0x256 PushI
	var_324_int = 21886; // 0x257 PushI
	AddReply(var_322_int, var_323_int, var_324_int); // 0x258 TObjFunc
	return 0; // 0x25a Return
	
Label_603:
	var_325_int = 21887; // 0x25b PushI
	var_326_bool = var_7_cvector == var_325_int; // 0x25c Eq
	if(var_326_bool == 0) goto Label_621; // 0x25d JumpB
	var_327_string = ""; // 0x25e PushV
	var_327_string = "Neutral"; // 0x25f MovS
	func_222(var_8_bool, var_327_string); // 0x260 NEW_2
	var_328_int = 520678; // 0x262 PushI
	SetMessage(var_328_int); // 0x263 TObjFunc
	ClearReplies(); // 0x265 TObjFunc
	var_329_int = 520679; // 0x267 PushI
	var_330_int = 21885; // 0x268 PushI
	var_331_int = 21888; // 0x269 PushI
	AddReply(var_329_int, var_330_int, var_331_int); // 0x26a TObjFunc
	return 0; // 0x26c Return
	
Label_621:
	var_332_int = 21885; // 0x26d PushI
	var_333_bool = var_7_cvector == var_332_int; // 0x26e Eq
	if(var_333_bool == 0) goto Label_644; // 0x26f JumpB
	var_334_string = ""; // 0x270 PushV
	var_334_string = "Patronage"; // 0x271 MovS
	func_222(var_8_bool, var_334_string); // 0x272 NEW_2
	var_335_int = 520676; // 0x274 PushI
	SetMessage(var_335_int); // 0x275 TObjFunc
	ClearReplies(); // 0x277 TObjFunc
	var_336_int = 520681; // 0x279 PushI
	var_337_int = 21892; // 0x27a PushI
	var_338_int = 21891; // 0x27b PushI
	AddReply(var_336_int, var_337_int, var_338_int); // 0x27c TObjFunc
	var_339_int = 520680; // 0x27e PushI
	var_340_int = -1; // 0x27f PushI
	var_341_int = 21890; // 0x280 PushI
	AddReply(var_339_int, var_340_int, var_341_int); // 0x281 TObjFunc
	return 0; // 0x283 Return
	
Label_644:
	var_342_int = 21892; // 0x284 PushI
	var_343_bool = var_7_cvector == var_342_int; // 0x285 Eq
	if(var_343_bool == 0) goto Label_667; // 0x286 JumpB
	var_344_string = ""; // 0x287 PushV
	var_344_string = "Patronage"; // 0x288 MovS
	func_222(var_8_bool, var_344_string); // 0x289 NEW_2
	var_345_int = 520682; // 0x28b PushI
	SetMessage(var_345_int); // 0x28c TObjFunc
	ClearReplies(); // 0x28e TObjFunc
	var_346_int = 520683; // 0x290 PushI
	var_347_int = 21894; // 0x291 PushI
	var_348_int = 21893; // 0x292 PushI
	AddReply(var_346_int, var_347_int, var_348_int); // 0x293 TObjFunc
	var_349_int = 528420; // 0x295 PushI
	var_350_int = 29803; // 0x296 PushI
	var_351_int = 29802; // 0x297 PushI
	AddReply(var_349_int, var_350_int, var_351_int); // 0x298 TObjFunc
	return 0; // 0x29a Return
	
Label_667:
	var_352_int = 29803; // 0x29b PushI
	var_353_bool = var_7_cvector == var_352_int; // 0x29c Eq
	if(var_353_bool == 0) goto Label_685; // 0x29d JumpB
	var_354_string = ""; // 0x29e PushV
	var_354_string = "Neutral"; // 0x29f MovS
	func_222(var_8_bool, var_354_string); // 0x2a0 NEW_2
	var_355_int = 528421; // 0x2a2 PushI
	SetMessage(var_355_int); // 0x2a3 TObjFunc
	ClearReplies(); // 0x2a5 TObjFunc
	var_356_int = 528422; // 0x2a7 PushI
	var_357_int = 21894; // 0x2a8 PushI
	var_358_int = 29804; // 0x2a9 PushI
	AddReply(var_356_int, var_357_int, var_358_int); // 0x2aa TObjFunc
	return 0; // 0x2ac Return
	
Label_685:
	var_359_int = 21894; // 0x2ad PushI
	var_360_bool = var_7_cvector == var_359_int; // 0x2ae Eq
	if(var_360_bool == 0) goto Label_703; // 0x2af JumpB
	var_361_string = ""; // 0x2b0 PushV
	var_361_string = "Neutral"; // 0x2b1 MovS
	func_222(var_8_bool, var_361_string); // 0x2b2 NEW_2
	var_362_int = 520684; // 0x2b4 PushI
	SetMessage(var_362_int); // 0x2b5 TObjFunc
	ClearReplies(); // 0x2b7 TObjFunc
	var_363_int = 520685; // 0x2b9 PushI
	var_364_int = -1; // 0x2ba PushI
	var_365_int = 21895; // 0x2bb PushI
	AddReply(var_363_int, var_364_int, var_365_int); // 0x2bc TObjFunc
	return 0; // 0x2be Return
	
Label_703:
	var_366_int = 21833; // 0x2bf PushI
	var_367_bool = var_7_cvector == var_366_int; // 0x2c0 Eq
	if(var_367_bool == 0) goto Label_721; // 0x2c1 JumpB
	var_368_string = ""; // 0x2c2 PushV
	var_368_string = "Rage"; // 0x2c3 MovS
	func_222(var_8_bool, var_368_string); // 0x2c4 NEW_2
	var_369_int = 520624; // 0x2c6 PushI
	SetMessage(var_369_int); // 0x2c7 TObjFunc
	ClearReplies(); // 0x2c9 TObjFunc
	var_370_int = 520625; // 0x2cb PushI
	var_371_int = -1; // 0x2cc PushI
	var_372_int = 21834; // 0x2cd PushI
	AddReply(var_370_int, var_371_int, var_372_int); // 0x2ce TObjFunc
	return 0; // 0x2d0 Return
	
Label_721:
	var_373_int = 21802; // 0x2d1 PushI
	var_374_bool = var_7_cvector == var_373_int; // 0x2d2 Eq
	if(var_374_bool == 0) goto Label_739; // 0x2d3 JumpB
	var_375_string = ""; // 0x2d4 PushV
	var_375_string = "Patronage"; // 0x2d5 MovS
	func_222(var_8_bool, var_375_string); // 0x2d6 NEW_2
	var_376_int = 520597; // 0x2d8 PushI
	SetMessage(var_376_int); // 0x2d9 TObjFunc
	ClearReplies(); // 0x2db TObjFunc
	var_377_int = 528414; // 0x2dd PushI
	var_378_int = 29795; // 0x2de PushI
	var_379_int = 29794; // 0x2df PushI
	AddReply(var_377_int, var_378_int, var_379_int); // 0x2e0 TObjFunc
	return 0; // 0x2e2 Return
	
Label_739:
	var_380_int = 29795; // 0x2e3 PushI
	var_381_bool = var_7_cvector == var_380_int; // 0x2e4 Eq
	if(var_381_bool == 0) goto Label_762; // 0x2e5 JumpB
	var_382_string = ""; // 0x2e6 PushV
	var_382_string = "Rage"; // 0x2e7 MovS
	func_222(var_8_bool, var_382_string); // 0x2e8 NEW_2
	var_383_int = 528415; // 0x2ea PushI
	SetMessage(var_383_int); // 0x2eb TObjFunc
	ClearReplies(); // 0x2ed TObjFunc
	var_384_int = 528416; // 0x2ef PushI
	var_385_int = 29798; // 0x2f0 PushI
	var_386_int = 29797; // 0x2f1 PushI
	AddReply(var_384_int, var_385_int, var_386_int); // 0x2f2 TObjFunc
	var_387_int = 528418; // 0x2f4 PushI
	var_388_int = 21806; // 0x2f5 PushI
	var_389_int = 29799; // 0x2f6 PushI
	AddReply(var_387_int, var_388_int, var_389_int); // 0x2f7 TObjFunc
	return 0; // 0x2f9 Return
	
Label_762:
	var_390_int = 29798; // 0x2fa PushI
	var_391_bool = var_7_cvector == var_390_int; // 0x2fb Eq
	if(var_391_bool == 0) goto Label_785; // 0x2fc JumpB
	var_392_string = ""; // 0x2fd PushV
	var_392_string = "Discontent"; // 0x2fe MovS
	func_222(var_8_bool, var_392_string); // 0x2ff NEW_2
	var_393_int = 528417; // 0x301 PushI
	SetMessage(var_393_int); // 0x302 TObjFunc
	ClearReplies(); // 0x304 TObjFunc
	var_394_int = 520598; // 0x306 PushI
	var_395_int = 21804; // 0x307 PushI
	var_396_int = 21803; // 0x308 PushI
	AddReply(var_394_int, var_395_int, var_396_int); // 0x309 TObjFunc
	var_397_int = 520620; // 0x30b PushI
	var_398_int = 21808; // 0x30c PushI
	var_399_int = 21827; // 0x30d PushI
	AddReply(var_397_int, var_398_int, var_399_int); // 0x30e TObjFunc
	return 0; // 0x310 Return
	
Label_785:
	var_400_int = 21804; // 0x311 PushI
	var_401_bool = var_7_cvector == var_400_int; // 0x312 Eq
	if(var_401_bool == 0) goto Label_803; // 0x313 JumpB
	var_402_string = ""; // 0x314 PushV
	var_402_string = "Patronage"; // 0x315 MovS
	func_222(var_8_bool, var_402_string); // 0x316 NEW_2
	var_403_int = 520599; // 0x318 PushI
	SetMessage(var_403_int); // 0x319 TObjFunc
	ClearReplies(); // 0x31b TObjFunc
	var_404_int = 520600; // 0x31d PushI
	var_405_int = 21806; // 0x31e PushI
	var_406_int = 21805; // 0x31f PushI
	AddReply(var_404_int, var_405_int, var_406_int); // 0x320 TObjFunc
	return 0; // 0x322 Return
	
Label_803:
	var_407_int = 21806; // 0x323 PushI
	var_408_bool = var_7_cvector == var_407_int; // 0x324 Eq
	if(var_408_bool == 0) goto Label_821; // 0x325 JumpB
	var_409_string = ""; // 0x326 PushV
	var_409_string = "Neutral"; // 0x327 MovS
	func_222(var_8_bool, var_409_string); // 0x328 NEW_2
	var_410_int = 520601; // 0x32a PushI
	SetMessage(var_410_int); // 0x32b TObjFunc
	ClearReplies(); // 0x32d TObjFunc
	var_411_int = 520602; // 0x32f PushI
	var_412_int = 21808; // 0x330 PushI
	var_413_int = 21807; // 0x331 PushI
	AddReply(var_411_int, var_412_int, var_413_int); // 0x332 TObjFunc
	return 0; // 0x334 Return
	
Label_821:
	var_414_int = 21811; // 0x335 PushI
	var_415_bool = var_7_cvector == var_414_int; // 0x336 Eq
	if(var_415_bool == 0) goto Label_824; // 0x337 JumpB
	
Label_824:
	var_416_int = 21824; // 0x338 PushI
	var_417_bool = var_7_cvector == var_416_int; // 0x339 Eq
	if(var_417_bool == 0) goto Label_842; // 0x33a JumpB
	var_418_string = ""; // 0x33b PushV
	var_418_string = "Untrust"; // 0x33c MovS
	func_222(var_8_bool, var_418_string); // 0x33d NEW_2
	var_419_int = 520618; // 0x33f PushI
	SetMessage(var_419_int); // 0x340 TObjFunc
	ClearReplies(); // 0x342 TObjFunc
	var_420_int = 520619; // 0x344 PushI
	var_421_int = 21815; // 0x345 PushI
	var_422_int = 21825; // 0x346 PushI
	AddReply(var_420_int, var_421_int, var_422_int); // 0x347 TObjFunc
	return 0; // 0x349 Return
	
Label_842:
	var_423_int = 21813; // 0x34a PushI
	var_424_bool = var_7_cvector == var_423_int; // 0x34b Eq
	if(var_424_bool == 0) goto Label_865; // 0x34c JumpB
	var_425_string = ""; // 0x34d PushV
	var_425_string = "Untrust"; // 0x34e MovS
	func_222(var_8_bool, var_425_string); // 0x34f NEW_2
	var_426_int = 520608; // 0x351 PushI
	SetMessage(var_426_int); // 0x352 TObjFunc
	ClearReplies(); // 0x354 TObjFunc
	var_427_int = 520609; // 0x356 PushI
	var_428_int = 21815; // 0x357 PushI
	var_429_int = 21814; // 0x358 PushI
	AddReply(var_427_int, var_428_int, var_429_int); // 0x359 TObjFunc
	var_430_int = 520616; // 0x35b PushI
	var_431_int = -1; // 0x35c PushI
	var_432_int = 21822; // 0x35d PushI
	AddReply(var_430_int, var_431_int, var_432_int); // 0x35e TObjFunc
	return 0; // 0x360 Return
	
Label_865:
	var_433_int = 21815; // 0x361 PushI
	var_434_bool = var_7_cvector == var_433_int; // 0x362 Eq
	if(var_434_bool == 0) goto Label_888; // 0x363 JumpB
	var_435_string = ""; // 0x364 PushV
	var_435_string = "Untrust"; // 0x365 MovS
	func_222(var_8_bool, var_435_string); // 0x366 NEW_2
	var_436_int = 520610; // 0x368 PushI
	SetMessage(var_436_int); // 0x369 TObjFunc
	ClearReplies(); // 0x36b TObjFunc
	var_437_int = 520611; // 0x36d PushI
	var_438_int = 21817; // 0x36e PushI
	var_439_int = 21816; // 0x36f PushI
	AddReply(var_437_int, var_438_int, var_439_int); // 0x370 TObjFunc
	var_440_int = 520615; // 0x372 PushI
	var_441_int = 21817; // 0x373 PushI
	var_442_int = 21821; // 0x374 PushI
	AddReply(var_440_int, var_441_int, var_442_int); // 0x375 TObjFunc
	return 0; // 0x377 Return
	
Label_888:
	var_443_int = 21817; // 0x378 PushI
	var_444_bool = var_7_cvector == var_443_int; // 0x379 Eq
	if(var_444_bool == 0) goto Label_911; // 0x37a JumpB
	var_445_string = ""; // 0x37b PushV
	var_445_string = "Rage"; // 0x37c MovS
	func_222(var_8_bool, var_445_string); // 0x37d NEW_2
	var_446_int = 520612; // 0x37f PushI
	SetMessage(var_446_int); // 0x380 TObjFunc
	ClearReplies(); // 0x382 TObjFunc
	var_447_int = 520613; // 0x384 PushI
	var_448_int = 21808; // 0x385 PushI
	var_449_int = 21818; // 0x386 PushI
	AddReply(var_447_int, var_448_int, var_449_int); // 0x387 TObjFunc
	var_450_int = 520614; // 0x389 PushI
	var_451_int = -1; // 0x38a PushI
	var_452_int = 21820; // 0x38b PushI
	AddReply(var_450_int, var_451_int, var_452_int); // 0x38c TObjFunc
	return 0; // 0x38e Return
	
Label_911:
	var_453_int = 21808; // 0x38f PushI
	var_454_bool = var_7_cvector == var_453_int; // 0x390 Eq
	if(var_454_bool == 0) goto Label_934; // 0x391 JumpB
	var_455_string = ""; // 0x392 PushV
	var_455_string = "Rage"; // 0x393 MovS
	func_222(var_8_bool, var_455_string); // 0x394 NEW_2
	var_456_int = 520603; // 0x396 PushI
	SetMessage(var_456_int); // 0x397 TObjFunc
	ClearReplies(); // 0x399 TObjFunc
	var_457_int = 520604; // 0x39b PushI
	var_458_int = -1; // 0x39c PushI
	var_459_int = 21809; // 0x39d PushI
	AddReply(var_457_int, var_458_int, var_459_int); // 0x39e TObjFunc
	var_460_int = 528419; // 0x3a0 PushI
	var_461_int = -1; // 0x3a1 PushI
	var_462_int = 29801; // 0x3a2 PushI
	AddReply(var_460_int, var_461_int, var_462_int); // 0x3a3 TObjFunc
	return 0; // 0x3a5 Return
	
Label_934:
	var_3_string = 1; // 0x3a6 TMovB
	var_463_bool = 0; // 0x3a7 PushV
	func_1992(var_463_bool); // 0x3a8 NEW_2
	if(var_463_bool == 0) goto Label_942; // 0x3aa JumpB
	lshStopAnimation(); // 0x3ab Func
	goto Label_944; // 0x3ad Jump
	
Label_944:
	return 0; // 0x3b0 Return
	
Label_942:
	StopAnimation(); // 0x3ae Func
	
Label_946:
	return 0; // 0x3b2 Return
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_string)
{
	var_8_bool = 0; var_9_bool = 0; // 0x3bf PushV
	var_10_string = "cleanup"; // 0x3c0 PushS
	var_11_bool = var_7_string == var_10_string; // 0x3c1 Eq
	if(var_11_bool == 0) goto Label_974; // 0x3c2 JumpB
	var_1_object = 1; // 0x3c3 TMovB
	IsLoaded(var_9_bool); // 0x3c4 Func
	var_12_bool = var_9_bool == 0; // 0x3c6 Not
	if(var_12_bool == 0) goto Label_973; // 0x3c7 JumpB
	var_13_object = Obj(); // 0x3c8 PushV
	func_1556(var_13_object); // 0x3c9 NEW_2
	RemoveActor(var_13_object); // 0x3cb Func
	
Label_973:
	goto Label_978; // 0x3cd Jump
	
Label_978:
	return 2; // 0x3d2 Return
	
Label_974:
	var_16_string = "restore"; // 0x3ce PushS
	var_17_bool = var_7_string == var_16_string; // 0x3cf Eq
	if(var_17_bool == 0) goto Label_978; // 0x3d0 JumpB
	var_1_object = 0; // 0x3d1 TMovB
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	var_7_object = var_1_object; // 0x3d3 PushT
	if(var_7_object == 0) goto Label_988; // 0x3d4 JumpB
	var_8_object = Obj(); // 0x3d5 PushV
	func_1556(var_8_object); // 0x3d6 NEW_2
	RemoveActor(var_8_object); // 0x3d8 Func
	Hold(); // 0x3da Func
	
Label_988:
	func_1103(); // 0x3dd NEW_2
	return 0; // 0x3df Return
}


task_2_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	func_1118(); // 0x3e1 NEW_2
	return 0; // 0x3e3 Return
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_int)
{
	var_8_int = 10; // 0x42a PushI
	var_9_bool = var_7_int == var_8_int; // 0x42b Eq
	if(var_9_bool == 0) goto Label_1102; // 0x42c JumpB
	func_1061(); // 0x42e NEW_2
	var_11_bool = 0; // 0x430 PushV
	var_11_bool = 0; // 0x431 MovB
	var_12_bool = 0; // 0x432 PushV
	func_1275(var_12_bool); // 0x433 NEW_2
	if(var_12_bool == 0) goto Label_1083; // 0x435 JumpB
	var_15_bool = 0; // 0x436 PushV
	func_1030(var_15_bool); // 0x437 NEW_2
	if(var_15_bool == 0) goto Label_1083; // 0x439 JumpB
	var_11_bool = 1; // 0x43a MovB
	
Label_1083:
	if(var_11_bool == 0) goto Label_1096; // 0x43b JumpB
	var_32_bool = 0; // 0x43c PushV
	func_1010(var_32_bool); // 0x43d NEW_2
	if(var_32_bool == 0) goto Label_1095; // 0x43f JumpB
	var_51_bool = 0; var_52_object = Obj(); // 0x440 PushV
	var_53_object = Obj(); // 0x441 PushV
	func_1556(var_53_object); // 0x442 NEW_2
	var_52_object = var_53_object; // 0x443 Mov
	func_1423(var_52_object); // 0x445 NEW_2
	
Label_1095:
	goto Label_1102; // 0x447 Jump
	
Label_1102:
	return 0; // 0x44e Return
	
Label_1096:
	func_1025(var_7_int); // 0x449 NEW_2
	func_1052(); // 0x44c NEW_2
}


task_2_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_bool)
{
	var_8_bool = var_7_bool; // 0x46c Push
	if(var_8_bool == 0) goto Label_1138; // 0x46d JumpB
	func_1052(); // 0x46f NEW_2
	goto Label_1142; // 0x471 Jump
	
Label_1142:
	return 0; // 0x476 Return
	
Label_1138:
	var_14_string = ""; // 0x472 PushV
	var_14_string = "Neutral"; // 0x473 MovS
	func_1503(var_14_string); // 0x474 NEW_2
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_object)
{
	var_8_bool = 0; var_9_bool = 0; // 0x477 PushV
	IsOverrideActive(var_9_bool); // 0x478 Func
	var_10_bool = var_9_bool == 0; // 0x47a Not
	if(var_10_bool == 0) goto Label_1171; // 0x47b JumpB
	EventDisable(0); // 0x47c EventDisable
	func_1243(); // 0x47e NEW_2
	var_11_bool = 0; var_12_object = Obj(); // 0x480 PushV
	var_12_object = var_7_object; // 0x481 Mov
	func_1266(var_12_object); // 0x482 NEW_2
	EventEnable(0); // 0x484 EventEnable
	var_25_object = Obj(); // 0x485 PushV
	var_25_object = var_7_object; // 0x486 Mov
	func_947(var_25_object); // 0x487 NEW_2
	var_319_string = ""; // 0x489 PushV
	var_319_string = "Neutral"; // 0x48a MovS
	func_1503(var_319_string); // 0x48b NEW_2
	func_1061(); // 0x48e NEW_2
	func_1052(); // 0x491 NEW_2
	
Label_1171:
	return 2; // 0x493 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	func_996(var_6_bool); // 0x3bc NEW_2
	return 0; // 0x3be Return
}


func_1280(var_37_bool, var_39_float)
{
	var_40_float = 0; var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_bool = 0; var_48_bool = 0; var_49_float = 0; var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); var_56_bool = 0; var_57_bool = 0; // 0x500 PushV
	GetPosition(var_50_cvector); // 0x501 ObjFunc
	GetEyesHeight(var_49_float); // 0x503 ObjFunc
	var_58_float = GetByIndex(var_50_cvector, 1); // 0x505 PushE
	var_58_float = var_58_float + var_49_float; // 0x506 Add2
	SetByIndex(var_50_cvector, 1) = var_58_float; // 0x507 PopE
	GetPosition(var_51_cvector); // 0x508 Func
	GetEyesHeight(var_49_float); // 0x50a Func
	var_59_float = GetByIndex(var_51_cvector, 1); // 0x50c PushE
	var_59_float = var_59_float + var_49_float; // 0x50d Add2
	SetByIndex(var_51_cvector, 1) = var_59_float; // 0x50e PopE
	var_52_cvector = var_50_cvector - var_51_cvector; // 0x50f Sub2
	var_60_float = GetByIndex(var_52_cvector, 1); // 0x510 PushE
	var_60_float = 0; // 0x511 MovI
	SetByIndex(var_52_cvector, 1) = var_60_float; // 0x512 PopE
	var_61_int = var_52_cvector | var_52_cvector; // 0x513 Or
	var_62_float = sqrt(var_61_int); // 0x514 Sqrt
	var_52_cvector = var_52_cvector / var_52_cvector; // 0x515 Div2
	var_53_cvector = -var_52_cvector; // 0x516 Neg2
	var_63_float = var_52_cvector * var_39_float; // 0x517 Mult
	var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); // 0x518 PushV
	var_66_cvector = CVector(0.0, 1.0, 0.0); // 0x519 PushVec
	var_65_cvector = var_53_cvector ^ var_66_cvector; // 0x51a Xor2
	func_1562(var_64_cvector, var_65_cvector); // 0x51b NEW_2
	var_72_int = 25; // 0x51d PushI
	var_73_float = var_64_cvector * var_72_int; // 0x51e Mult
	var_74_int = var_63_float + var_73_float; // 0x51f Add
	var_75_cvector = CVector(0.0, 10.0, 0.0); // 0x520 PushVec
	var_54_cvector = var_74_int - var_75_cvector; // 0x521 Sub2
	var_55_cvector = var_51_cvector + var_54_cvector; // 0x522 Add2
	IsOverrideActive(var_56_bool); // 0x523 Func
	var_76_bool = var_56_bool; // 0x525 Push
	if(var_76_bool == 0) goto Label_1321; // 0x526 JumpB
	var_37_bool = 0; // 0x527 MovB
	return 18; // 0x528 Return
	
Label_1321:
	StopWorld(); // 0x529 Func
	CameraTransit(var_55_cvector, var_53_cvector); // 0x52b Func
	var_77_float = GetByIndex(var_54_cvector, 0); // 0x52d PushE
	var_78_float = GetByIndex(var_54_cvector, 2); // 0x52e PushE
	Rotate(var_77_float, var_78_float); // 0x52f Func
	var_79_bool = 0; // 0x531 PushV
	func_1992(var_79_bool); // 0x532 NEW_2
	if(var_79_bool == 0) goto Label_1334; // 0x534 JumpB
	goto Label_1342; // 0x535 Jump
	
Label_1342:
	CameraWaitForPlayFinish(); // 0x53e Func
	ResumeWorld(); // 0x540 Func
	var_37_bool = 1; // 0x542 MovB
	return 18; // 0x543 Return
	
Label_1334:
	var_80_string = "head"; // 0x536 PushS
	HasAnimationTrack(var_57_bool, var_80_string); // 0x537 Func
	var_81_bool = var_57_bool; // 0x539 Push
	if(var_81_bool == 0) goto Label_1342; // 0x53a JumpB
	var_82_string = "head"; // 0x53b PushS
	LookAsyncCamera(var_82_string); // 0x53c Func
}


func_0(var_0_object, var_26_int, var_27_object)
{
	var_29_object = Obj(); var_30_bool = 0; var_31_int = 0; var_32_bool = 0; var_33_object = Obj(); var_34_bool = 0; var_35_int = 0; var_36_bool = 0; // 0x0 PushV
	var_0_object = var_27_object; // 0x1 TMov
	var_37_bool = 0; var_38_object = Obj(); var_39_float = 0; // 0x2 PushV
	var_38_object = var_27_object; // 0x3 Mov
	var_39_float = 70.0; // 0x4 MovF
	func_1280(var_38_object, var_39_float); // 0x5 NEW_2
	var_83_bool = var_37_bool == 0; // 0x7 Not
	if(var_83_bool == 0) goto Label_11; // 0x8 JumpB
	var_26_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_33_object); // 0xb Func
	var_84_int = 0; // 0xd PushV
	func_1986(var_84_int); // 0xe NEW_2
	SetNPCName(var_84_int); // 0x10 ObjFunc
	var_85_int = 0; // 0x12 PushV
	func_1984(var_85_int); // 0x13 NEW_2
	SetNPCDescription(var_85_int); // 0x15 ObjFunc
	var_86_string = ""; // 0x17 PushV
	func_1988(var_86_string); // 0x18 NEW_2
	SetPhoto(var_86_string); // 0x1a ObjFunc
	var_87_string = ""; // 0x1c PushV
	func_1990(var_87_string); // 0x1d NEW_2
	SetPhoto2(var_87_string); // 0x1f ObjFunc
	var_88_int = 0; // 0x21 PushV
	func_1967(var_88_int); // 0x22 NEW_2
	SetPlayerName(var_88_int); // 0x24 ObjFunc
	var_35_int = -1; // 0x26 MovI
	IsOverrideActive(var_34_bool); // 0x27 Func
	var_96_bool = var_34_bool; // 0x29 Push
	if(var_96_bool == 0) goto Label_45; // 0x2a JumpB
	var_26_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_33_object); // 0x2d Func
	var_97_bool = 0; var_98_object = Obj(); // 0x2f PushV
	var_99_object = Obj(); // 0x30 PushV
	func_1556(var_99_object); // 0x31 NEW_2
	var_98_object = var_99_object; // 0x32 Mov
	func_1365(var_97_bool, var_98_object); // 0x34 NEW_2
	var_192_object = Obj(); var_193_object = Obj(); // 0x36 PushV
	var_192_object = var_27_object; // 0x37 Mov
	var_193_object = var_33_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_194_object, var_195_object, var_196_string, var_197_bool, var_192_object, var_193_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	IsDialogEnd(var_36_bool); // 0x3d ObjFunc
	
Label_63:
	var_311_bool = var_36_bool == 0; // 0x3f Not
	if(var_311_bool == 0) goto Label_70; // 0x40 JumpB
	sync(); // 0x41 Func
	IsDialogEnd(var_36_bool); // 0x43 ObjFunc
	goto Label_63; // 0x45 Jump
	
Label_70:
	var_312_object = Obj(); // 0x46 PushV
	var_312_object = var_27_object; // 0x47 Mov
	func_1348(); // 0x48 NEW_2
	StopDialog(var_33_object); // 0x4a Func
	GetReturnValue(var_35_int); // 0x4c ObjFunc
	var_26_int = var_35_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_1025(var_0_object)
{
	var_84_float = GetByIndex(var_0_object, 0); // 0x401 PushE
	var_85_float = GetByIndex(var_0_object, 2); // 0x402 PushE
	RotateAsync(var_84_float, var_85_float); // 0x403 Func
	return 0; // 0x405 Return
}


func_1798(var_265_bool, var_266_object)
{
	var_267_bool = 0; var_268_object = Obj(); // 0x707 PushV
	var_268_object = var_266_object; // 0x708 Mov
	func_1830(var_268_object); // 0x709 NEW_2
	if(var_267_bool == 0) goto Label_1806; // 0x70b JumpB
	var_265_bool = 1; // 0x70c MovB
	return 0; // 0x70d Return
	
Label_1806:
	var_265_bool = 0; // 0x70e MovB
	return 0; // 0x70f Return
}


func_1030(var_15_bool)
{
	var_16_object = Obj(); var_17_bool = 0; var_18_object = Obj(); var_19_bool = 0; // 0x406 PushV
	var_20_string = "player"; // 0x407 PushS
	FindActor(var_18_object, var_20_string); // 0x408 Func
	var_21_bool = var_18_object == 0; // 0x40a Not
	if(var_21_bool == 0) goto Label_1038; // 0x40b JumpB
	var_15_bool = 0; // 0x40c MovB
	return 4; // 0x40d Return
	
Label_1038:
	var_22_float = 0; var_23_object = Obj(); // 0x40e PushV
	var_23_object = var_18_object; // 0x40f Mov
	func_1248(var_23_object); // 0x410 NEW_2
	var_30_float = 90000.0; // 0x412 PushF
	var_31_bool = var_22_float > var_30_float; // 0x413 GT
	if(var_31_bool == 0) goto Label_1047; // 0x414 JumpB
	var_15_bool = 0; // 0x415 MovB
	return 4; // 0x416 Return
	
Label_1047:
	CanSee(var_19_bool, var_18_object); // 0x417 Func
	var_15_bool = var_19_bool; // 0x419 Mov
	return 4; // 0x41a Return
}


func_1549()
{
	var_10_bool = 0; // 0x60d PushV
	func_1992(var_10_bool); // 0x60e NEW_2
	if(var_10_bool == 0) goto Label_1555; // 0x610 JumpB
	lshStopSpeech(); // 0x611 Func
	
Label_1555:
	return 0; // 0x613 Return
}


func_1808(var_273_bool)
{
	var_275_int = 0; var_276_string = ""; // 0x711 PushV
	var_276_string = "b6q01"; // 0x712 MovS
	func_1572(var_275_int, var_276_string); // 0x713 NEW_2
	var_277_int = 3; // 0x715 PushI
	var_278_bool = var_275_int == var_277_int; // 0x716 Eq
	if(var_278_bool == 0) goto Label_1818; // 0x717 JumpB
	var_273_bool = 1; // 0x718 MovB
	return 0; // 0x719 Return
	
Label_1818:
	var_273_bool = 0; // 0x71a MovB
	return 0; // 0x71b Return
}


func_1556(var_99_object)
{
	var_100_object = Obj(); var_101_object = Obj(); // 0x614 PushV
	self(var_101_object); // 0x615 Func
	var_99_object = var_101_object; // 0x617 Mov
	return 2; // 0x618 Return
}


func_1562(var_64_cvector, var_65_cvector)
{
	var_67_float = 0; var_68_float = 0; // 0x61a PushV
	var_69_int = var_65_cvector | var_65_cvector; // 0x61b Or
	var_68_float = sqrt(var_69_int); // 0x61c Sqrt2
	var_70_float = 0.0; // 0x61d PushF
	var_71_bool = var_68_float < var_70_float; // 0x61e LT
	if(var_71_bool == 0) goto Label_1570; // 0x61f JumpB
	var_64_cvector = CVector(0.0, 0.0, 0.0); // 0x620 MovV
	return 2; // 0x621 Return
	
Label_1570:
	var_64_cvector = var_65_cvector / var_65_cvector; // 0x622 Div2
	return 2; // 0x623 Return
}


func_1052()
{
	var_321_float = 0; var_322_float = 0; // 0x41c PushV
	var_323_int = 8; // 0x41d PushI
	var_324_int = 16; // 0x41e PushI
	rand(var_322_float, var_323_int, var_324_int); // 0x41f Func
	var_325_int = 10; // 0x421 PushI
	SetTimer(var_325_int, var_322_float); // 0x422 Func
	return 2; // 0x424 Return
}


func_1820(var_285_bool, var_286_object)
{
	var_287_bool = 0; var_288_object = Obj(); // 0x71d PushV
	var_288_object = var_286_object; // 0x71e Mov
	func_1837(var_288_object); // 0x71f NEW_2
	if(var_287_bool == 0) goto Label_1828; // 0x721 JumpB
	var_285_bool = 1; // 0x722 MovB
	return 0; // 0x723 Return
	
Label_1828:
	var_285_bool = 0; // 0x724 MovB
	return 0; // 0x725 Return
}


func_1572(var_201_int, var_202_string)
{
	var_203_int = 0; var_204_int = 0; // 0x624 PushV
	GetVariable(var_202_string, var_204_int); // 0x625 Func
	var_201_int = var_204_int; // 0x627 Mov
	return 2; // 0x628 Return
}


func_1061()
{
	var_320_int = 10; // 0x425 PushI
	KillTimer(var_320_int); // 0x426 Func
	return 0; // 0x428 Return
}


func_1830(var_267_bool)
{
	var_269_int = 0; var_270_int = 0; // 0x726 PushV
	var_271_string = "alpha_pills"; // 0x727 PushS
	GetItemCountOfType(var_270_int, var_271_string); // 0x728 ObjFunc
	var_272_int = 50; // 0x72a PushI
	var_267_bool = var_270_int >= var_272_int; // 0x72b GE2
	return 2; // 0x72c Return
}


func_1577(var_136_int, var_137_int)
{
	var_138_object = Obj(); var_139_object = Obj(); // 0x629 PushV
	CreateIntVector(var_139_object); // 0x62a Func
	add(var_136_int); // 0x62c ObjFunc
	add(var_137_int); // 0x62e ObjFunc
	var_140_int = 3; // 0x630 PushI
	SendWorldWndMessage(var_140_int, var_139_object); // 0x631 Func
	return 2; // 0x633 Return
}


func_1837(var_287_bool)
{
	var_289_int = 0; var_290_int = 0; // 0x72d PushV
	var_291_string = "alpha_pills"; // 0x72e PushS
	GetItemCountOfType(var_290_int, var_291_string); // 0x72f ObjFunc
	var_287_bool = 0; // 0x731 MovB
	var_292_int = 0; // 0x732 PushI
	var_293_bool = var_290_int > var_292_int; // 0x733 GT
	if(var_293_bool == 0) goto Label_1849; // 0x734 JumpB
	var_294_int = 50; // 0x735 PushI
	var_295_bool = var_290_int < var_294_int; // 0x736 LT
	if(var_295_bool == 0) goto Label_1849; // 0x737 JumpB
	var_287_bool = 1; // 0x738 MovB
	
Label_1849:
	return 2; // 0x739 Return
}


func_1589(var_126_object, var_127_int)
{
	var_128_int = 0; var_129_int = 0; var_130_bool = 0; var_131_int = 0; var_132_int = 0; var_133_bool = 0; // 0x635 PushV
	GetItemID(var_131_int); // 0x636 ObjFunc
	var_134_string = "Category"; // 0x638 PushS
	GetInvItemProperty(var_132_int, var_131_int, var_134_string); // 0x639 Func
	AddItem(var_133_bool, var_126_object, var_132_int, var_127_int); // 0x63b ObjFunc
	var_135_bool = var_133_bool == 0; // 0x63d Not
	if(var_135_bool == 0) goto Label_1602; // 0x63e JumpB
	DropItems(var_126_object, var_127_int); // 0x63f ObjFunc
	goto Label_1607; // 0x641 Jump
	
Label_1607:
	return 6; // 0x647 Return
	
Label_1602:
	var_136_int = 0; var_137_int = 0; // 0x642 PushV
	var_136_int = var_131_int; // 0x643 Mov
	var_137_int = var_127_int; // 0x644 Mov
	func_1577(var_136_int, var_137_int); // 0x645 NEW_2
}


func_1850()
{
	var_17_object = Obj(); var_18_object = Obj(); // 0x73a PushV
	var_19_int = 363; // 0x73b PushI
	var_20_int = 1; // 0x73c PushI
	var_21_int = 525663; // 0x73d PushI
	CreateDiaryEntry(var_18_object, var_19_int, var_20_int, var_21_int); // 0x73e Func
	var_22_bool = 0; var_23_object = Obj(); var_24_int = 0; // 0x740 PushV
	var_23_object = var_18_object; // 0x741 Mov
	var_24_int = 265; // 0x742 MovI
	func_1889(var_22_bool, var_23_object, var_24_int); // 0x743 NEW_2
	return 2; // 0x745 Return
}


func_1348()
{
	var_313_bool = 0; var_314_bool = 0; // 0x544 PushV
	CameraSwitchToNormal(); // 0x545 Func
	var_315_bool = 0; // 0x547 PushV
	func_1992(var_315_bool); // 0x548 NEW_2
	if(var_315_bool == 0) goto Label_1356; // 0x54a JumpB
	goto Label_1364; // 0x54b Jump
	
Label_1364:
	return 2; // 0x554 Return
	
Label_1356:
	var_316_string = "head"; // 0x54c PushS
	HasAnimationTrack(var_314_bool, var_316_string); // 0x54d Func
	var_317_bool = var_314_bool; // 0x54f Push
	if(var_317_bool == 0) goto Label_1364; // 0x550 JumpB
	var_318_string = "head"; // 0x551 PushS
	UnlookAsync(var_318_string); // 0x552 Func
}


func_1863()
{
	var_68_object = Obj(); var_69_object = Obj(); // 0x747 PushV
	var_70_int = 364; // 0x748 PushI
	var_71_int = 1; // 0x749 PushI
	var_72_int = 525664; // 0x74a PushI
	CreateDiaryEntry(var_69_object, var_70_int, var_71_int, var_72_int); // 0x74b Func
	var_73_bool = 0; var_74_object = Obj(); var_75_int = 0; // 0x74d PushV
	var_74_object = var_69_object; // 0x74e Mov
	var_75_int = 265; // 0x74f MovI
	func_1889(var_73_bool, var_74_object, var_75_int); // 0x750 NEW_2
	return 2; // 0x752 Return
}


func_1608(var_120_object, var_121_string, var_122_int)
{
	var_123_object = Obj(); var_124_object = Obj(); // 0x648 PushV
	CreateInvItem(var_124_object); // 0x649 Func
	SetItemName(var_121_string); // 0x64b ObjFunc
	var_125_object = Obj(); var_126_object = Obj(); var_127_int = 0; // 0x64d PushV
	var_125_object = var_120_object; // 0x64e Mov
	var_126_object = var_124_object; // 0x64f Mov
	var_127_int = var_122_int; // 0x650 Mov
	func_1589(var_126_object, var_127_int); // 0x651 NEW_2
	return 2; // 0x653 Return
}


func_1103()
{
	func_1243(); // 0x450 NEW_2
	func_1061(); // 0x453 NEW_2
	lshStopSpeech(); // 0x455 Func
	lshStopAnimation(); // 0x457 Func
	StopAsync(); // 0x459 Func
	Hold(); // 0x45b Func
	return 0; // 0x45d Return
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_192_object, var_193_object)
{
	var_0_object = var_193_object; // 0x52 TMov
	var_1_object = var_192_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_198_int = 1; // 0x55 PushI
	if(var_198_int == 0) goto Label_192; // 0x56 JumpB
	var_199_bool = 0; var_200_object = Obj(); // 0x57 PushV
	var_200_object = var_1_object; // 0x58 MovT
	func_1774(var_200_object); // 0x59 NEW_2
	if(var_199_bool == 0) goto Label_117; // 0x5b JumpB
	var_207_object = Obj(); var_208_object = Obj(); // 0x5c PushV
	var_207_object = var_1_object; // 0x5d MovT
	var_208_object = var_0_object; // 0x5e MovT
	func_1671(); // 0x5f NEW_2
	var_211_string = ""; // 0x61 PushV
	var_211_string = "Patronage"; // 0x62 MovS
	func_222(var_193_object, var_211_string); // 0x63 NEW_2
	var_228_int = 520595; // 0x65 PushI
	SetMessage(var_228_int); // 0x66 TObjFunc
	ClearReplies(); // 0x68 TObjFunc
	var_229_int = 520596; // 0x6a PushI
	var_230_int = 21802; // 0x6b PushI
	var_231_int = 21801; // 0x6c PushI
	AddReply(var_229_int, var_230_int, var_231_int); // 0x6d TObjFunc
	var_232_int = 520621; // 0x6f PushI
	var_233_int = 29795; // 0x70 PushI
	var_234_int = 21829; // 0x71 PushI
	AddReply(var_232_int, var_233_int, var_234_int); // 0x72 TObjFunc
	goto Label_192; // 0x74 Jump
	
Label_192:
	var_235_bool = 0; // 0xc0 PushV
	func_1992(var_235_bool); // 0xc1 NEW_2
	if(var_235_bool == 0) goto Label_207; // 0xc3 JumpB
	
Label_196:
	lshWaitForAnimEnd(); // 0xc4 Func
	var_236_string = var_3_string; // 0xc6 PushT
	if(var_236_string == 0) goto Label_201; // 0xc7 JumpB
	goto Label_206; // 0xc8 Jump
	
Label_206:
	goto Label_221; // 0xce Jump
	
Label_221:
	return 0; // 0xdd Return
	
Label_201:
	var_237_string = ""; // 0xc9 PushV
	var_237_string = var_2_object; // 0xca MovT
	func_1503(var_237_string); // 0xcb NEW_2
	goto Label_196; // 0xcd Jump
	
Label_207:
	var_248_string = "all"; // 0xcf PushS
	var_249_string = "idle"; // 0xd0 PushS
	PlayAnimation(var_248_string, var_249_string); // 0xd1 Func
	
Label_211:
	WaitForAnimEnd(); // 0xd3 Func
	var_250_string = var_3_string; // 0xd5 PushT
	if(var_250_string == 0) goto Label_216; // 0xd6 JumpB
	goto Label_221; // 0xd7 Jump
	
Label_216:
	var_251_string = "all"; // 0xd8 PushS
	var_252_string = "idle"; // 0xd9 PushS
	PlayAnimation(var_251_string, var_252_string); // 0xda Func
	goto Label_211; // 0xdc Jump
	
Label_117:
	var_253_string = ""; // 0x75 PushV
	var_253_string = "Neutral"; // 0x76 MovS
	func_222(var_193_object, var_253_string); // 0x77 NEW_2
	var_254_int = 520622; // 0x79 PushI
	SetMessage(var_254_int); // 0x7a TObjFunc
	ClearReplies(); // 0x7c TObjFunc
	var_255_bool = 0; var_256_object = Obj(); // 0x7e PushV
	var_256_object = var_1_object; // 0x7f MovT
	func_1786(var_256_object); // 0x80 NEW_2
	if(var_255_bool == 0) goto Label_136; // 0x82 JumpB
	var_261_int = 520623; // 0x83 PushI
	var_262_int = 21833; // 0x84 PushI
	var_263_int = 21832; // 0x85 PushI
	AddReply(var_261_int, var_262_int, var_263_int); // 0x86 TObjFunc
	
Label_136:
	var_264_bool = 0; // 0x88 PushV
	var_264_bool = 0; // 0x89 MovB
	var_265_bool = 0; var_266_object = Obj(); // 0x8a PushV
	var_266_object = var_1_object; // 0x8b MovT
	func_1798(var_265_bool, var_266_object); // 0x8c NEW_2
	if(var_265_bool == 0) goto Label_149; // 0x8e JumpB
	var_273_bool = 0; var_274_object = Obj(); // 0x8f PushV
	var_274_object = var_1_object; // 0x90 MovT
	func_1808(var_274_object); // 0x91 NEW_2
	if(var_273_bool == 0) goto Label_149; // 0x93 JumpB
	var_264_bool = 1; // 0x94 MovB
	
Label_149:
	if(var_264_bool == 0) goto Label_155; // 0x95 JumpB
	var_279_int = 520626; // 0x96 PushI
	var_280_int = 21836; // 0x97 PushI
	var_281_int = 21835; // 0x98 PushI
	AddReply(var_279_int, var_280_int, var_281_int); // 0x99 TObjFunc
	
Label_155:
	var_282_bool = 0; // 0x9b PushV
	var_282_bool = 0; // 0x9c MovB
	var_283_bool = 0; var_284_object = Obj(); // 0x9d PushV
	var_284_object = var_1_object; // 0x9e MovT
	func_1808(var_284_object); // 0x9f NEW_2
	if(var_283_bool == 0) goto Label_168; // 0xa1 JumpB
	var_285_bool = 0; var_286_object = Obj(); // 0xa2 PushV
	var_286_object = var_1_object; // 0xa3 MovT
	func_1820(var_285_bool, var_286_object); // 0xa4 NEW_2
	if(var_285_bool == 0) goto Label_168; // 0xa6 JumpB
	var_282_bool = 1; // 0xa7 MovB
	
Label_168:
	if(var_282_bool == 0) goto Label_174; // 0xa8 JumpB
	var_296_int = 520686; // 0xa9 PushI
	var_297_int = 21897; // 0xaa PushI
	var_298_int = 21896; // 0xab PushI
	AddReply(var_296_int, var_297_int, var_298_int); // 0xac TObjFunc
	
Label_174:
	var_299_bool = 0; var_300_object = Obj(); // 0xae PushV
	var_300_object = var_1_object; // 0xaf MovT
	func_1762(var_300_object); // 0xb0 NEW_2
	if(var_299_bool == 0) goto Label_184; // 0xb2 JumpB
	var_305_int = 528534; // 0xb3 PushI
	var_306_int = 29927; // 0xb4 PushI
	var_307_int = 29926; // 0xb5 PushI
	AddReply(var_305_int, var_306_int, var_307_int); // 0xb6 TObjFunc
	
Label_184:
	var_308_int = 520629; // 0xb8 PushI
	var_309_int = -1; // 0xb9 PushI
	var_310_int = 21838; // 0xba PushI
	AddReply(var_308_int, var_309_int, var_310_int); // 0xbb TObjFunc
	goto Label_192; // 0xbd Jump
}


func_1876(var_31_object)
{
	var_32_object = Obj(); var_33_object = Obj(); // 0x754 PushV
	GetDiaryRoot(var_33_object); // 0x755 Func
	var_34_bool = var_33_object == 0; // 0x757 Not
	if(var_34_bool == 0) goto Label_1886; // 0x758 JumpB
	var_35_string = "Can't retrieve diary root"; // 0x759 PushS
	Trace(var_35_string); // 0x75a Func
	var_31_object = 0; // 0x75c MovB
	return 2; // 0x75d Return
	
Label_1886:
	var_31_object = var_33_object; // 0x75e Mov
	return 2; // 0x75f Return
}


func_1365(var_97_bool, var_98_object)
{
	var_102_int = 0; var_103_int = 0; var_104_int = 0; var_105_int = 0; // 0x555 PushV
	var_106_string = "voice_common"; // 0x556 PushS
	GetVariable(var_106_string, var_104_int); // 0x557 Func
	var_107_int = var_104_int; // 0x559 Push
	if(var_107_int == 0) goto Label_1403; // 0x55a JumpB
	var_108_bool = 0; var_109_object = Obj(); // 0x55b PushV
	var_109_object = var_98_object; // 0x55c Mov
	func_1423(var_109_object); // 0x55d NEW_2
	var_138_bool = var_108_bool == 0; // 0x55f Not
	if(var_138_bool == 0) goto Label_1385; // 0x560 JumpB
	var_139_bool = 0; var_140_object = Obj(); // 0x561 PushV
	var_140_object = var_98_object; // 0x562 Mov
	func_1460(var_140_object); // 0x563 NEW_2
	var_174_bool = var_139_bool == 0; // 0x565 Not
	if(var_174_bool == 0) goto Label_1385; // 0x566 JumpB
	var_97_bool = 0; // 0x567 MovB
	return 4; // 0x568 Return
	
Label_1385:
	var_175_int = 2; // 0x569 PushI
	irand(var_105_int, var_175_int); // 0x56a Func
	var_176_int = var_105_int; // 0x56c Push
	if(var_176_int == 0) goto Label_1398; // 0x56d JumpB
	var_177_string = "voice_common"; // 0x56e PushS
	var_178_int = 1; // 0x56f PushI
	var_179_int = var_104_int + var_178_int; // 0x570 Add
	var_180_int = 3; // 0x571 PushI
	var_181_int = var_179_int / var_180_int; // 0x572 Mod
	SetVariable(var_177_string, var_181_int); // 0x573 Func
	goto Label_1402; // 0x575 Jump
	
Label_1402:
	goto Label_1421; // 0x57a Jump
	
Label_1421:
	var_97_bool = 1; // 0x58d MovB
	return 4; // 0x58e Return
	
Label_1398:
	var_182_string = "voice_common"; // 0x576 PushS
	var_183_int = 0; // 0x577 PushI
	SetVariable(var_182_string, var_183_int); // 0x578 Func
	
Label_1403:
	var_184_bool = 0; var_185_object = Obj(); // 0x57b PushV
	var_185_object = var_98_object; // 0x57c Mov
	func_1460(var_185_object); // 0x57d NEW_2
	var_186_bool = var_184_bool == 0; // 0x57f Not
	if(var_186_bool == 0) goto Label_1417; // 0x580 JumpB
	var_187_bool = 0; var_188_object = Obj(); // 0x581 PushV
	var_188_object = var_98_object; // 0x582 Mov
	func_1423(var_188_object); // 0x583 NEW_2
	var_189_bool = var_187_bool == 0; // 0x585 Not
	if(var_189_bool == 0) goto Label_1417; // 0x586 JumpB
	var_97_bool = 0; // 0x587 MovB
	return 4; // 0x588 Return
	
Label_1417:
	var_190_string = "voice_common"; // 0x589 PushS
	var_191_int = 1; // 0x58a PushI
	SetVariable(var_190_string, var_191_int); // 0x58b Func
}


func_1621(var_78_bool, var_79_string, var_80_string)
{
	var_81_object = Obj(); var_82_object = Obj(); // 0x655 PushV
	FindActor(var_82_object, var_79_string); // 0x656 Func
	var_83_bool = var_82_object == 0; // 0x658 NullEq
	if(var_83_bool == 0) goto Label_1628; // 0x659 JumpB
	var_78_bool = 0; // 0x65a MovB
	return 2; // 0x65b Return
	
Label_1628:
	Trigger(var_82_object, var_80_string); // 0x65c Func
	var_78_bool = 1; // 0x65e MovB
	return 2; // 0x65f Return
}


func_1118()
{
	StopGroup0(); // 0x45e Func
	func_1061(); // 0x461 NEW_2
	var_8_string = ""; // 0x463 PushV
	var_8_string = "Neutral"; // 0x464 MovS
	func_1503(var_8_string); // 0x465 NEW_2
	func_1052(); // 0x468 NEW_2
	return 0; // 0x46a Return
}


func_1633(var_65_float)
{
	var_66_float = 0; var_67_float = 0; // 0x661 PushV
	GetGameTime(var_67_float); // 0x662 Func
	var_65_float = var_67_float; // 0x664 Mov
	return 2; // 0x665 Return
}


func_1889(var_22_bool, var_23_object, var_24_int)
{
	var_25_object = Obj(); var_26_object = Obj(); var_27_int = 0; var_28_object = Obj(); var_29_object = Obj(); var_30_int = 0; // 0x761 PushV
	var_31_object = Obj(); // 0x762 PushV
	func_1876(var_31_object); // 0x763 NEW_2
	var_28_object = var_31_object; // 0x764 Mov
	Find(var_24_int, var_29_object); // 0x766 ObjFunc
	var_36_bool = var_29_object == 0; // 0x768 Not
	if(var_36_bool == 0) goto Label_1904; // 0x769 JumpB
	var_37_string = "Can't find diary parent with id: "; // 0x76a PushS
	var_38_int = var_37_string + var_24_int; // 0x76b Add
	Trace(var_38_int); // 0x76c Func
	var_22_bool = 0; // 0x76e MovB
	return 6; // 0x76f Return
	
Label_1904:
	AddChild(var_23_object); // 0x770 ObjFunc
	var_39_int = 7; // 0x772 PushI
	SendWorldWndMessage(var_39_int); // 0x773 Func
	GetCategory(var_30_int); // 0x775 ObjFunc
	SetDiarySection(var_30_int); // 0x777 Func
	var_22_bool = 0; // 0x779 MovB
	return 6; // 0x77a Return
}


func_1638(var_152_int)
{
	var_153_float = 0; var_154_float = 0; // 0x666 PushV
	GetGameTime(var_154_float); // 0x667 Func
	var_155_int = 1; // 0x669 PushI
	var_156_int = 0; // 0x66a PushV
	var_157_int = 24; // 0x66b PushI
	var_156_int = var_154_float / var_154_float; // 0x66c Div2
	var_152_int = var_155_int + var_156_int; // 0x66d Add2
	return 2; // 0x66e Return
}


func_1647(var_31_string, var_32_int)
{
	var_33_string = ""; var_34_string = ""; // 0x66f PushV
	var_34_string = "idle"; // 0x670 MovS
	var_35_int = var_32_int; // 0x671 Push
	if(var_35_int == 0) goto Label_1652; // 0x672 JumpB
	var_34_string = var_34_string + var_32_int; // 0x673 Add2
	
Label_1652:
	var_31_string = var_34_string; // 0x674 Mov
	return 2; // 0x675 Return
}


func_1654(var_25_int)
{
	var_26_int = 0; var_27_bool = 0; var_28_int = 0; var_29_bool = 0; // 0x676 PushV
	var_28_int = 0; // 0x677 MovI
	
Label_1656:
	var_30_string = "all"; // 0x678 PushS
	var_31_string = ""; var_32_int = 0; // 0x679 PushV
	var_32_int = var_28_int; // 0x67a Mov
	func_1647(var_31_string, var_32_int); // 0x67b NEW_2
	HasAnimation(var_29_bool, var_30_string, var_31_string); // 0x67d Func
	var_36_bool = var_29_bool == 0; // 0x67f Not
	if(var_36_bool == 0) goto Label_1666; // 0x680 JumpB
	goto Label_1669; // 0x681 Jump
	
Label_1669:
	var_25_int = var_28_int; // 0x685 Mov
	return 4; // 0x686 Return
	
Label_1666:
	var_37_int = 1; // 0x682 PushI
	var_28_int = var_28_int + var_37_int; // 0x683 Add2
	goto Label_1656; // 0x684 Jump
}


func_1917(var_54_object)
{
	var_55_object = Obj(); var_56_object = Obj(); var_57_object = Obj(); var_58_object = Obj(); // 0x77d PushV
	GetMainOutdoorScene(var_57_object); // 0x77e Func
	var_59_bool = var_57_object == 0; // 0x780 NullEq
	if(var_59_bool == 0) goto Label_1928; // 0x781 JumpB
	var_60_string = "Can't find main outdoor scene"; // 0x782 PushS
	Trace(var_60_string); // 0x783 Func
	var_58_object = 0; // 0x785 SetNull
	var_54_object = var_58_object; // 0x786 Mov
	return 4; // 0x787 Return
	
Label_1928:
	GetMap(var_58_object); // 0x788 ObjFunc
	var_54_object = var_58_object; // 0x78a Mov
	return 4; // 0x78b Return
}


func_1671()
{
	var_209_string = "oob6Mat1"; // 0x688 PushS
	var_210_int = 1; // 0x689 PushI
	SetVariable(var_209_string, var_210_int); // 0x68a Func
	return 0; // 0x68c Return
}


func_1677()
{
	var_15_string = "b6q01"; // 0x68e PushS
	var_16_int = 3; // 0x68f PushI
	SetVariable(var_15_string, var_16_int); // 0x690 Func
	func_1850(); // 0x693 NEW_2
	return 0; // 0x695 Return
}


func_1934(var_89_object, var_90_string, var_91_float)
{
	var_93_cvector = CVector(0,0,0); var_94_cvector = CVector(0,0,0); var_95_object = Obj(); var_96_bool = 0; var_97_cvector = CVector(0,0,0); var_98_cvector = CVector(0,0,0); var_99_object = Obj(); var_100_bool = 0; // 0x78e PushV
	GetMainOutdoorScene(var_99_object); // 0x78f Func
	var_101_bool = var_99_object == 0; // 0x791 NullEq
	if(var_101_bool == 0) goto Label_1943; // 0x792 JumpB
	var_102_string = "Can't find main outdoor scene"; // 0x793 PushS
	Trace(var_102_string); // 0x794 Func
	return 8; // 0x796 Return
	
Label_1943:
	GetLocator(var_90_string, var_100_bool, var_97_cvector, var_98_cvector); // 0x797 ObjFunc
	var_103_bool = var_100_bool == 0; // 0x799 Not
	if(var_103_bool == 0) goto Label_1953; // 0x79a JumpB
	var_104_string = "Warning: outdoor scene locator "; // 0x79b PushS
	var_105_int = var_104_string + var_90_string; // 0x79c Add
	var_106_string = " doesnt exist"; // 0x79d PushS
	var_107_int = var_105_int + var_106_string; // 0x79e Add
	Trace(var_107_int); // 0x79f Func
	
Label_1953:
	GetMap(var_89_object); // 0x7a1 ObjFunc
	var_108_bool = var_89_object == 0; // 0x7a3 NullEq
	if(var_108_bool == 0) goto Label_1961; // 0x7a4 JumpB
	var_109_string = "Can't find map"; // 0x7a5 PushS
	Trace(var_109_string); // 0x7a6 Func
	return 8; // 0x7a8 Return
	
Label_1961:
	var_110_float = GetByIndex(var_97_cvector, 0); // 0x7a9 PushE
	var_111_float = GetByIndex(var_97_cvector, 2); // 0x7aa PushE
	SetMapParams(var_110_float, var_111_float, var_91_float); // 0x7ab ObjFunc
	return 8; // 0x7ad Return
}


func_1423(var_108_bool)
{
	var_110_string = ""; var_111_int = 0; var_112_bool = 0; var_113_int = 0; var_114_string = ""; var_115_string = ""; var_116_int = 0; var_117_bool = 0; var_118_int = 0; var_119_string = ""; // 0x58f PushV
	var_115_string = "c"; // 0x590 MovS
	var_116_int = 0; // 0x591 MovI
	
Label_1426:
	var_120_int = 1; // 0x592 PushI
	if(var_120_int == 0) goto Label_1439; // 0x593 JumpB
	var_121_int = 1; // 0x594 PushI
	var_122_int = var_116_int + var_121_int; // 0x595 Add
	var_123_int = var_115_string + var_122_int; // 0x596 Add
	HasProperty(var_123_int, var_117_bool); // 0x597 ObjFunc
	var_124_bool = var_117_bool == 0; // 0x599 Not
	if(var_124_bool == 0) goto Label_1436; // 0x59a JumpB
	goto Label_1439; // 0x59b Jump
	
Label_1439:
	var_125_bool = var_116_int == 0; // 0x59f Not
	if(var_125_bool == 0) goto Label_1443; // 0x5a0 JumpB
	var_108_bool = 0; // 0x5a1 MovB
	return 10; // 0x5a2 Return
	
Label_1443:
	var_118_int = 0; // 0x5a3 MovI
	var_126_int = 1; // 0x5a4 PushI
	var_127_bool = var_116_int > var_126_int; // 0x5a5 GT
	if(var_127_bool == 0) goto Label_1449; // 0x5a6 JumpB
	irand(var_118_int, var_116_int); // 0x5a7 Func
	
Label_1449:
	var_128_int = 1; // 0x5a9 PushI
	var_129_int = var_118_int + var_128_int; // 0x5aa Add
	var_130_int = var_115_string + var_129_int; // 0x5ab Add
	GetProperty(var_130_int, var_119_string); // 0x5ac ObjFunc
	var_131_bool = 0; var_132_string = ""; // 0x5ae PushV
	var_132_string = var_119_string; // 0x5af Mov
	func_1534(var_131_bool, var_132_string); // 0x5b0 NEW_2
	var_108_bool = var_131_bool; // 0x5b1 Mov
	return 10; // 0x5b3 Return
	
Label_1436:
	var_137_int = 1; // 0x59c PushI
	var_116_int = var_116_int + var_137_int; // 0x59d Add2
	goto Label_1426; // 0x59e Jump
}


func_1172()
{
	var_11_int = 0; var_12_int = 0; var_13_bool = 0; var_14_int = 0; var_15_int = 0; var_16_bool = 0; var_17_int = 0; var_18_int = 0; var_19_bool = 0; var_20_int = 0; var_21_int = 0; var_22_bool = 0; // 0x494 PushV
	WaitForAnimEnd(); // 0x495 Func
	var_23_bool = 0; // 0x497 PushV
	func_1275(var_23_bool); // 0x498 NEW_2
	var_24_bool = var_23_bool == 0; // 0x49a Not
	if(var_24_bool == 0) goto Label_1181; // 0x49b JumpB
	return 12; // 0x49c Return
	
Label_1181:
	var_25_int = 0; // 0x49d PushV
	func_1654(var_25_int); // 0x49e NEW_2
	var_17_int = var_25_int; // 0x49f Mov
	var_18_int = 0; // 0x4a1 MovI
	
Label_1186:
	var_38_bool = 0; // 0x4a2 PushV
	var_38_bool = 0; // 0x4a3 MovB
	var_39_int = 5; // 0x4a4 PushI
	var_40_bool = var_18_int < var_39_int; // 0x4a5 LT
	if(var_40_bool == 0) goto Label_1196; // 0x4a6 JumpB
	var_41_bool = 0; // 0x4a7 PushV
	func_1275(var_41_bool); // 0x4a8 NEW_2
	if(var_41_bool == 0) goto Label_1196; // 0x4aa JumpB
	var_38_bool = 1; // 0x4ab MovB
	
Label_1196:
	if(var_38_bool == 0) goto Label_1238; // 0x4ac JumpB
	var_42_bool = var_17_int == 0; // 0x4ad Not
	if(var_42_bool == 0) goto Label_1206; // 0x4ae JumpB
	var_43_int = 3; // 0x4af PushI
	Sleep(var_43_int, var_19_bool); // 0x4b0 Func
	var_44_bool = var_19_bool == 0; // 0x4b2 Not
	if(var_44_bool == 0) goto Label_1205; // 0x4b3 JumpB
	goto Label_1238; // 0x4b4 Jump
	
Label_1238:
	ResetAAS(); // 0x4d6 Func
	return 12; // 0x4d8 Return
	
Label_1205:
	goto Label_1227; // 0x4b5 Jump
	
Label_1227:
	var_45_bool = 0; // 0x4cb PushV
	func_1241(var_45_bool); // 0x4cc NEW_2
	var_46_bool = var_45_bool == 0; // 0x4ce Not
	if(var_46_bool == 0) goto Label_1233; // 0x4cf JumpB
	goto Label_1238; // 0x4d0 Jump
	
Label_1233:
	ResetAAS(); // 0x4d1 Func
	var_47_int = 1; // 0x4d3 PushI
	var_18_int = var_18_int + var_47_int; // 0x4d4 Add2
	goto Label_1186; // 0x4d5 Jump
	
Label_1206:
	irand(var_20_int, var_17_int); // 0x4b6 Func
	var_48_int = 5; // 0x4b8 PushI
	irand(var_21_int, var_48_int); // 0x4b9 Func
	var_49_int = 0; // 0x4bb PushI
	var_50_bool = var_21_int != var_49_int; // 0x4bc Neq
	if(var_50_bool == 0) goto Label_1215; // 0x4bd JumpB
	var_20_int = 0; // 0x4be MovI
	
Label_1215:
	var_51_string = "all"; // 0x4bf PushS
	var_52_string = ""; var_53_int = 0; // 0x4c0 PushV
	var_53_int = var_20_int; // 0x4c1 Mov
	func_1647(var_52_string, var_53_int); // 0x4c2 NEW_2
	PlayAnimation(var_51_string, var_52_string); // 0x4c4 Func
	WaitForAnimEnd(var_22_bool); // 0x4c6 Func
	var_54_bool = var_22_bool == 0; // 0x4c8 Not
	if(var_54_bool == 0) goto Label_1227; // 0x4c9 JumpB
	goto Label_1238; // 0x4ca Jump
}


func_1686()
{
	var_48_object = Obj(); var_49_int = 0; var_50_object = Obj(); var_51_int = 0; // 0x696 PushV
	var_52_string = "b6q01"; // 0x697 PushS
	var_53_int = 4; // 0x698 PushI
	SetVariable(var_52_string, var_53_int); // 0x699 Func
	var_54_object = Obj(); // 0x69b PushV
	func_1917(var_54_object); // 0x69c NEW_2
	var_50_object = var_54_object; // 0x69d Mov
	var_61_string = "b6q01MatGotoByk"; // 0x69f PushS
	var_62_string = "pt_b6q01_bull"; // 0x6a0 PushS
	var_63_int = 1; // 0x6a1 PushI
	var_64_int = 530992; // 0x6a2 PushI
	var_65_float = 0; // 0x6a3 PushV
	func_1633(var_65_float); // 0x6a4 NEW_2
	AddMark(var_61_string, var_62_string, var_63_int, var_64_int, var_65_float); // 0x6a6 ObjFunc
	func_1863(); // 0x6a9 NEW_2
	var_76_string = "alpha_pills"; // 0x6ab PushS
	var_77_int = 50; // 0x6ac PushI
	RemoveItemByType(var_51_int, var_76_string, var_77_int); // 0x6ad ObjFunc
	var_78_bool = 0; var_79_string = ""; var_80_string = ""; // 0x6af PushV
	var_79_string = "quest_b6_01"; // 0x6b0 MovS
	var_80_string = "init_altar"; // 0x6b1 MovS
	func_1621(var_78_bool, var_79_string, var_80_string); // 0x6b2 NEW_2
	var_84_bool = 0; var_85_string = ""; var_86_string = ""; // 0x6b4 PushV
	var_85_string = "quest_b6_01"; // 0x6b5 MovS
	var_86_string = "clean_termitnik"; // 0x6b6 MovS
	func_1621(var_84_bool, var_85_string, var_86_string); // 0x6b7 NEW_2
	return 4; // 0x6b9 Return
}


func_1967(var_88_int)
{
	var_89_int = 0; var_90_int = 0; // 0x7af PushV
	var_91_string = "branch"; // 0x7b0 PushS
	GetVariable(var_91_string, var_90_int); // 0x7b1 Func
	var_92_int = 0; // 0x7b3 PushI
	var_93_bool = var_90_int == var_92_int; // 0x7b4 Eq
	if(var_93_bool == 0) goto Label_1977; // 0x7b5 JumpB
	var_88_int = 1; // 0x7b6 MovI
	return 2; // 0x7b7 Return
	
Label_1977:
	var_94_int = 1; // 0x7b9 PushI
	var_95_bool = var_90_int == var_94_int; // 0x7ba Eq
	if(var_95_bool == 0) goto Label_1982; // 0x7bb JumpB
	var_88_int = 2; // 0x7bc MovI
	return 2; // 0x7bd Return
	
Label_1982:
	var_88_int = 3; // 0x7be MovI
	return 2; // 0x7bf Return
}


func_947(var_25_object)
{
	var_26_int = 0; var_27_object = Obj(); // 0x3b4 PushV
	var_27_object = var_25_object; // 0x3b5 Mov
	TaskCall(0); // 0x3b6 TaskCall
	func_0(var_28_object, var_26_int, var_27_object); // 0x3b7 NEW_2
	TaskReturn(); // 0x3b8 TaskReturn
	return 0; // 0x3ba Return
}


func_1460(var_139_bool)
{
	var_141_string = ""; var_142_int = 0; var_143_bool = 0; var_144_int = 0; var_145_string = ""; var_146_string = ""; var_147_int = 0; var_148_bool = 0; var_149_int = 0; var_150_string = ""; // 0x5b4 PushV
	var_151_string = "d"; // 0x5b5 PushS
	var_152_int = 0; // 0x5b6 PushV
	func_1638(var_152_int); // 0x5b7 NEW_2
	var_158_int = var_151_string + var_152_int; // 0x5b9 Add
	var_159_string = "m"; // 0x5ba PushS
	var_146_string = var_158_int + var_159_string; // 0x5bb Add2
	var_147_int = 0; // 0x5bc MovI
	
Label_1469:
	var_160_int = 1; // 0x5bd PushI
	if(var_160_int == 0) goto Label_1482; // 0x5be JumpB
	var_161_int = 1; // 0x5bf PushI
	var_162_int = var_147_int + var_161_int; // 0x5c0 Add
	var_163_int = var_146_string + var_162_int; // 0x5c1 Add
	HasProperty(var_163_int, var_148_bool); // 0x5c2 ObjFunc
	var_164_bool = var_148_bool == 0; // 0x5c4 Not
	if(var_164_bool == 0) goto Label_1479; // 0x5c5 JumpB
	goto Label_1482; // 0x5c6 Jump
	
Label_1482:
	var_165_bool = var_147_int == 0; // 0x5ca Not
	if(var_165_bool == 0) goto Label_1486; // 0x5cb JumpB
	var_139_bool = 0; // 0x5cc MovB
	return 10; // 0x5cd Return
	
Label_1486:
	var_149_int = 0; // 0x5ce MovI
	var_166_int = 1; // 0x5cf PushI
	var_167_bool = var_147_int > var_166_int; // 0x5d0 GT
	if(var_167_bool == 0) goto Label_1492; // 0x5d1 JumpB
	irand(var_149_int, var_147_int); // 0x5d2 Func
	
Label_1492:
	var_168_int = 1; // 0x5d4 PushI
	var_169_int = var_149_int + var_168_int; // 0x5d5 Add
	var_170_int = var_146_string + var_169_int; // 0x5d6 Add
	GetProperty(var_170_int, var_150_string); // 0x5d7 ObjFunc
	var_171_bool = 0; var_172_string = ""; // 0x5d9 PushV
	var_172_string = var_150_string; // 0x5da Mov
	func_1534(var_171_bool, var_172_string); // 0x5db NEW_2
	var_139_bool = var_171_bool; // 0x5dc Mov
	return 10; // 0x5de Return
	
Label_1479:
	var_173_int = 1; // 0x5c7 PushI
	var_147_int = var_147_int + var_173_int; // 0x5c8 Add2
	goto Label_1469; // 0x5c9 Jump
}


func_1723()
{
	var_115_string = "playsound"; // 0x6bc PushS
	var_116_string = "giveitem"; // 0x6bd PushS
	TriggerWorld(var_115_string, var_116_string); // 0x6be Func
	return 0; // 0x6c0 Return
}


func_1984(var_85_int)
{
	var_85_int = 515545; // 0x7c0 MovI
	return 0; // 0x7c1 Return
}


func_1729()
{
	var_155_string = "oob6Mat2"; // 0x6c2 PushS
	var_156_int = 1; // 0x6c3 PushI
	SetVariable(var_155_string, var_156_int); // 0x6c4 Func
	return 0; // 0x6c6 Return
}


func_1986(var_84_int)
{
	var_84_int = 502870; // 0x7c2 MovI
	return 0; // 0x7c3 Return
}


func_1988(var_86_string)
{
	var_86_string = "ui/NPC_Mat.png"; // 0x7c4 MovS
	return 0; // 0x7c5 Return
}


func_1990(var_87_string)
{
	var_87_string = "ui/NPC_Mat_b.png"; // 0x7c6 MovS
	return 0; // 0x7c7 Return
}


func_1735()
{
	var_89_object = Obj(); var_90_string = ""; var_91_float = 0; // 0x6c8 PushV
	var_92_object = Obj(); // 0x6c9 PushV
	func_1917(var_92_object); // 0x6ca NEW_2
	var_89_object = var_92_object; // 0x6cb Mov
	var_90_string = "pt_map_kurgan"; // 0x6cd MovS
	var_91_float = 2; // 0x6ce MovI
	func_1934(var_89_object, var_90_string, var_91_float); // 0x6cf NEW_2
	var_112_object = Obj(); // 0x6d1 PushV
	func_1917(var_112_object); // 0x6d2 NEW_2
	ShowMap(var_112_object); // 0x6d4 ObjFunc
	return 0; // 0x6d6 Return
}


func_1992(var_79_bool)
{
	var_79_bool = 1; // 0x7c8 MovB
	return 0; // 0x7c9 Return
}


func_1751(var_117_object)
{
	var_119_string = "recipe1 is given"; // 0x6d8 PushS
	Trace(var_119_string); // 0x6d9 Func
	var_120_object = Obj(); var_121_string = ""; var_122_int = 0; // 0x6db PushV
	var_120_object = var_117_object; // 0x6dc Mov
	var_121_string = "recipe1"; // 0x6dd MovS
	var_122_int = 1; // 0x6de MovI
	func_1608(var_120_object, var_121_string, var_122_int); // 0x6df NEW_2
	return 0; // 0x6e1 Return
}


func_1241(var_45_bool)
{
	var_45_bool = 1; // 0x4d9 MovB
	return 0; // 0x4da Return
}


func_1243()
{
	StopAnimation(); // 0x4db Func
	StopGroup0(); // 0x4dd Func
	return 0; // 0x4df Return
}


func_222(var_2_object, var_211_string)
{
	var_212_bool = 0; // 0xdf PushV
	func_1992(var_212_bool); // 0xe0 NEW_2
	var_213_bool = var_212_bool == 0; // 0xe2 Not
	if(var_213_bool == 0) goto Label_229; // 0xe3 JumpB
	return 0; // 0xe4 Return
	
Label_229:
	var_214_bool = var_211_string == var_2_object; // 0xe5 Eq
	if(var_214_bool == 0) goto Label_232; // 0xe6 JumpB
	return 0; // 0xe7 Return
	
Label_232:
	var_215_string = ""; var_216_bool = 0; // 0xe8 PushV
	var_215_string = var_211_string; // 0xe9 Mov
	var_217_string = ""; // 0xea PushS
	var_218_bool = var_211_string == var_217_string; // 0xeb Eq
	if(var_218_bool == 0) goto Label_239; // 0xec JumpB
	var_216_bool = 0; // 0xed MovB
	goto Label_240; // 0xee Jump
	
Label_240:
	func_1519(var_215_string, var_216_bool); // 0xf0 NEW_2
	var_2_object = var_211_string; // 0xf2 TMov
	return 0; // 0xf3 Return
	
Label_239:
	var_216_bool = 1; // 0xef MovB
}


func_1503(var_237_string)
{
	var_238_bool = 0; var_239_float = 0; var_240_float = 0; var_241_bool = 0; var_242_float = 0; var_243_float = 0; // 0x5df PushV
	lshHasAnimation(var_241_bool, var_237_string); // 0x5e0 Func
	var_244_bool = var_241_bool; // 0x5e2 Push
	if(var_244_bool == 0) goto Label_1514; // 0x5e3 JumpB
	lshGetAnimTimes(var_237_string, var_242_float, var_243_float); // 0x5e4 Func
	var_245_bool = 0; // 0x5e6 PushB
	lshPlayAnimation(var_242_float, var_243_float, var_245_bool); // 0x5e7 Func
	goto Label_1518; // 0x5e9 Jump
	
Label_1518:
	return 6; // 0x5ee Return
	
Label_1514:
	var_246_string = "Can't find lsh animation : "; // 0x5ea PushS
	var_247_int = var_246_string + var_237_string; // 0x5eb Add
	Trace(var_247_int); // 0x5ec Func
}


func_1248(var_22_float)
{
	var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); // 0x4e0 PushV
	GetPosition(var_27_cvector); // 0x4e1 Func
	GetPosition(var_28_cvector); // 0x4e3 ObjFunc
	var_29_cvector = var_28_cvector - var_27_cvector; // 0x4e5 Sub2
	var_22_float = var_29_cvector | var_29_cvector; // 0x4e6 Or2
	return 6; // 0x4e7 Return
}


func_1762(var_299_bool)
{
	var_301_int = 0; var_302_string = ""; // 0x6e3 PushV
	var_302_string = "oob6Mat2"; // 0x6e4 MovS
	func_1572(var_301_int, var_302_string); // 0x6e5 NEW_2
	var_303_int = 0; // 0x6e7 PushI
	var_304_bool = var_301_int == var_303_int; // 0x6e8 Eq
	if(var_304_bool == 0) goto Label_1772; // 0x6e9 JumpB
	var_299_bool = 1; // 0x6ea MovB
	return 0; // 0x6eb Return
	
Label_1772:
	var_299_bool = 0; // 0x6ec MovB
	return 0; // 0x6ed Return
}


func_996(var_0_object)
{
	var_7_bool = 0; // 0x3e4 PushV
	func_1275(var_7_bool); // 0x3e5 NEW_2
	var_10_bool = var_7_bool == 0; // 0x3e7 Not
	if(var_10_bool == 0) goto Label_1003; // 0x3e8 JumpB
	Hold(); // 0x3e9 Func
	
Label_1003:
	GetDirection(var_0_object); // 0x3eb Func
	
Label_1005:
	func_1172(); // 0x3ee NEW_2
	goto Label_1005; // 0x3f0 Jump
}


func_1256(var_15_bool, var_16_cvector)
{
	var_17_cvector = CVector(0,0,0); var_18_cvector = CVector(0,0,0); var_19_bool = 0; var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_bool = 0; // 0x4e8 PushV
	GetPosition(var_20_cvector); // 0x4e9 Func
	var_21_cvector = var_16_cvector - var_20_cvector; // 0x4eb Sub2
	var_23_float = GetByIndex(var_21_cvector, 0); // 0x4ec PushE
	var_24_float = GetByIndex(var_21_cvector, 2); // 0x4ed PushE
	Rotate(var_23_float, var_24_float, var_22_bool); // 0x4ee Func
	var_15_bool = var_22_bool; // 0x4f0 Mov
	return 6; // 0x4f1 Return
}


func_1774(var_199_bool)
{
	var_201_int = 0; var_202_string = ""; // 0x6ef PushV
	var_202_string = "oob6Mat1"; // 0x6f0 MovS
	func_1572(var_201_int, var_202_string); // 0x6f1 NEW_2
	var_205_int = 0; // 0x6f3 PushI
	var_206_bool = var_201_int == var_205_int; // 0x6f4 Eq
	if(var_206_bool == 0) goto Label_1784; // 0x6f5 JumpB
	var_199_bool = 1; // 0x6f6 MovB
	return 0; // 0x6f7 Return
	
Label_1784:
	var_199_bool = 0; // 0x6f8 MovB
	return 0; // 0x6f9 Return
}


func_1519(var_215_string, var_216_bool)
{
	var_219_bool = 0; var_220_float = 0; var_221_float = 0; var_222_bool = 0; var_223_float = 0; var_224_float = 0; // 0x5ef PushV
	lshHasAnimation(var_222_bool, var_215_string); // 0x5f0 Func
	var_225_bool = var_222_bool; // 0x5f2 Push
	if(var_225_bool == 0) goto Label_1529; // 0x5f3 JumpB
	lshGetAnimTimes(var_215_string, var_223_float, var_224_float); // 0x5f4 Func
	lshPlayAnimation(var_223_float, var_224_float, var_216_bool); // 0x5f6 Func
	goto Label_1533; // 0x5f8 Jump
	
Label_1533:
	return 6; // 0x5fd Return
	
Label_1529:
	var_226_string = "Can't find lsh animation : "; // 0x5f9 PushS
	var_227_int = var_226_string + var_215_string; // 0x5fa Add
	Trace(var_227_int); // 0x5fb Func
}


func_1266(var_11_bool)
{
	var_13_cvector = CVector(0,0,0); var_14_cvector = CVector(0,0,0); // 0x4f2 PushV
	GetPosition(var_14_cvector); // 0x4f3 ObjFunc
	var_15_bool = 0; var_16_cvector = CVector(0,0,0); // 0x4f5 PushV
	var_16_cvector = var_14_cvector; // 0x4f6 Mov
	func_1256(var_15_bool, var_16_cvector); // 0x4f7 NEW_2
	var_11_bool = var_15_bool; // 0x4f8 Mov
	return 2; // 0x4fa Return
}


func_1010(var_32_bool)
{
	var_33_object = Obj(); var_34_object = Obj(); // 0x3f2 PushV
	var_35_string = "player"; // 0x3f3 PushS
	FindActor(var_34_object, var_35_string); // 0x3f4 Func
	var_36_bool = var_34_object == 0; // 0x3f6 Not
	if(var_36_bool == 0) goto Label_1018; // 0x3f7 JumpB
	var_32_bool = 0; // 0x3f8 MovB
	return 2; // 0x3f9 Return
	
Label_1018:
	var_37_bool = 0; var_38_object = Obj(); // 0x3fa PushV
	var_38_object = var_34_object; // 0x3fb Mov
	func_1266(var_38_object); // 0x3fc NEW_2
	var_32_bool = var_37_bool; // 0x3fd Mov
	return 2; // 0x3ff Return
}


func_1786(var_255_bool)
{
	var_257_int = 0; var_258_string = ""; // 0x6fb PushV
	var_258_string = "b6q01"; // 0x6fc MovS
	func_1572(var_257_int, var_258_string); // 0x6fd NEW_2
	var_259_int = 2; // 0x6ff PushI
	var_260_bool = var_257_int == var_259_int; // 0x700 Eq
	if(var_260_bool == 0) goto Label_1796; // 0x701 JumpB
	var_255_bool = 1; // 0x702 MovB
	return 0; // 0x703 Return
	
Label_1796:
	var_255_bool = 0; // 0x704 MovB
	return 0; // 0x705 Return
}


func_1275(var_7_bool)
{
	var_8_bool = 0; var_9_bool = 0; // 0x4fb PushV
	IsLoaded(var_9_bool); // 0x4fc Func
	var_7_bool = var_9_bool; // 0x4fe Mov
	return 2; // 0x4ff Return
}


func_1534(var_131_bool, var_132_string)
{
	var_133_bool = 0; var_134_bool = 0; // 0x5fe PushV
	var_135_bool = 0; // 0x5ff PushV
	func_1992(var_135_bool); // 0x600 NEW_2
	if(var_135_bool == 0) goto Label_1547; // 0x602 JumpB
	lshHasSpeech(var_134_bool, var_132_string); // 0x603 Func
	var_136_bool = var_134_bool; // 0x605 Push
	if(var_136_bool == 0) goto Label_1547; // 0x606 JumpB
	lshPlaySpeech(var_132_string); // 0x607 Func
	var_131_bool = 1; // 0x609 MovB
	return 2; // 0x60a Return
	
Label_1547:
	var_131_bool = 0; // 0x60b MovB
	return 2; // 0x60c Return
}


