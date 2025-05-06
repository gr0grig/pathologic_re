task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_cvector, var_8_bool)
{
	var_9_int = 1; // 0xef PushI
	if(var_9_int == 0) goto Label_1057; // 0xf0 JumpB
	func_1662(); // 0xf2 NEW_2
	var_11_int = 14668; // 0xf4 PushI
	var_12_bool = var_8_bool == var_11_int; // 0xf5 Eq
	if(var_12_bool == 0) goto Label_262; // 0xf6 JumpB
	var_13_object = Obj(); var_14_object = Obj(); // 0xf7 PushV
	var_13_object = var_1_object; // 0xf8 MovT
	var_14_object = var_0_object; // 0xf9 MovT
	func_1797(); // 0xfa NEW_2
	var_48_object = Obj(); var_49_object = Obj(); // 0xfc PushV
	var_48_object = var_1_object; // 0xfd MovT
	var_49_object = var_0_object; // 0xfe MovT
	func_1819(var_49_object); // 0xff NEW_2
	var_72_object = Obj(); var_73_object = Obj(); // 0x101 PushV
	var_72_object = var_1_object; // 0x102 MovT
	var_73_object = var_0_object; // 0x103 MovT
	func_1779(); // 0x104 NEW_2
	
Label_262:
	var_76_int = 14696; // 0x106 PushI
	var_77_bool = var_8_bool == var_76_int; // 0x107 Eq
	if(var_77_bool == 0) goto Label_280; // 0x108 JumpB
	var_78_object = Obj(); var_79_object = Obj(); // 0x109 PushV
	var_78_object = var_1_object; // 0x10a MovT
	var_79_object = var_0_object; // 0x10b MovT
	func_1839(var_79_object); // 0x10c NEW_2
	var_84_object = Obj(); var_85_object = Obj(); // 0x10e PushV
	var_84_object = var_1_object; // 0x10f MovT
	var_85_object = var_0_object; // 0x110 MovT
	func_1779(); // 0x111 NEW_2
	var_86_object = Obj(); var_87_object = Obj(); // 0x113 PushV
	var_86_object = var_1_object; // 0x114 MovT
	var_87_object = var_0_object; // 0x115 MovT
	func_1809(); // 0x116 NEW_2
	
Label_280:
	var_102_int = 14692; // 0x118 PushI
	var_103_bool = var_8_bool == var_102_int; // 0x119 Eq
	if(var_103_bool == 0) goto Label_288; // 0x11a JumpB
	var_104_object = Obj(); var_105_object = Obj(); // 0x11b PushV
	var_104_object = var_1_object; // 0x11c MovT
	var_105_object = var_0_object; // 0x11d MovT
	func_1830(); // 0x11e NEW_2
	
Label_288:
	var_116_int = 37696; // 0x120 PushI
	var_117_bool = var_8_bool == var_116_int; // 0x121 Eq
	if(var_117_bool == 0) goto Label_296; // 0x122 JumpB
	var_118_object = Obj(); var_119_object = Obj(); // 0x123 PushV
	var_118_object = var_1_object; // 0x124 MovT
	var_119_object = var_0_object; // 0x125 MovT
	func_1830(); // 0x126 NEW_2
	
Label_296:
	var_120_int = 14669; // 0x128 PushI
	var_121_bool = var_8_bool == var_120_int; // 0x129 Eq
	if(var_121_bool == 0) goto Label_304; // 0x12a JumpB
	var_122_object = Obj(); var_123_object = Obj(); // 0x12b PushV
	var_122_object = var_1_object; // 0x12c MovT
	var_123_object = var_0_object; // 0x12d MovT
	func_1850(); // 0x12e NEW_2
	
Label_304:
	var_126_int = 37705; // 0x130 PushI
	var_127_bool = var_8_bool == var_126_int; // 0x131 Eq
	if(var_127_bool == 0) goto Label_312; // 0x132 JumpB
	var_128_object = Obj(); var_129_object = Obj(); // 0x133 PushV
	var_128_object = var_1_object; // 0x134 MovT
	var_129_object = var_0_object; // 0x135 MovT
	func_1785(); // 0x136 NEW_2
	
Label_312:
	var_132_int = 40564; // 0x138 PushI
	var_133_bool = var_8_bool == var_132_int; // 0x139 Eq
	if(var_133_bool == 0) goto Label_320; // 0x13a JumpB
	var_134_object = Obj(); var_135_object = Obj(); // 0x13b PushV
	var_134_object = var_1_object; // 0x13c MovT
	var_135_object = var_0_object; // 0x13d MovT
	func_1791(); // 0x13e NEW_2
	
Label_320:
	var_138_int = 14659; // 0x140 PushI
	var_139_bool = var_7_cvector == var_138_int; // 0x141 Eq
	if(var_139_bool == 0) goto Label_420; // 0x142 JumpB
	var_140_string = ""; // 0x143 PushV
	var_140_string = "Neutral"; // 0x144 MovS
	func_216(var_8_bool, var_140_string); // 0x145 NEW_2
	var_157_int = 513423; // 0x147 PushI
	SetMessage(var_157_int); // 0x148 TObjFunc
	ClearReplies(); // 0x14a TObjFunc
	var_158_bool = 0; var_159_object = Obj(); // 0x14c PushV
	var_159_object = var_1_object; // 0x14d MovT
	func_1904(var_159_object); // 0x14e NEW_2
	if(var_158_bool == 0) goto Label_342; // 0x150 JumpB
	var_166_int = 513424; // 0x151 PushI
	var_167_int = 14661; // 0x152 PushI
	var_168_int = 14660; // 0x153 PushI
	AddReply(var_166_int, var_167_int, var_168_int); // 0x154 TObjFunc
	
Label_342:
	var_169_bool = 0; // 0x156 PushV
	var_169_bool = 0; // 0x157 MovB
	var_170_bool = 0; var_171_object = Obj(); // 0x158 PushV
	var_171_object = var_1_object; // 0x159 MovT
	func_1916(var_171_object); // 0x15a NEW_2
	if(var_170_bool == 0) goto Label_355; // 0x15c JumpB
	var_176_bool = 0; var_177_object = Obj(); // 0x15d PushV
	var_177_object = var_1_object; // 0x15e MovT
	func_1928(var_177_object); // 0x15f NEW_2
	if(var_176_bool == 0) goto Label_355; // 0x161 JumpB
	var_169_bool = 1; // 0x162 MovB
	
Label_355:
	if(var_169_bool == 0) goto Label_361; // 0x163 JumpB
	var_182_int = 513447; // 0x164 PushI
	var_183_int = 37690; // 0x165 PushI
	var_184_int = 14683; // 0x166 PushI
	AddReply(var_182_int, var_183_int, var_184_int); // 0x167 TObjFunc
	
Label_361:
	var_185_bool = 0; var_186_object = Obj(); // 0x169 PushV
	var_186_object = var_1_object; // 0x16a MovT
	func_1940(var_186_object); // 0x16b NEW_2
	if(var_185_bool == 0) goto Label_371; // 0x16d JumpB
	var_191_int = 513433; // 0x16e PushI
	var_192_int = 14670; // 0x16f PushI
	var_193_int = 14669; // 0x170 PushI
	AddReply(var_191_int, var_192_int, var_193_int); // 0x171 TObjFunc
	
Label_371:
	var_194_bool = 0; // 0x173 PushV
	var_194_bool = 0; // 0x174 MovB
	var_195_bool = 0; var_196_object = Obj(); // 0x175 PushV
	var_196_object = var_1_object; // 0x176 MovT
	func_1856(var_196_object); // 0x177 NEW_2
	if(var_195_bool == 0) goto Label_384; // 0x179 JumpB
	var_201_bool = 0; var_202_object = Obj(); // 0x17a PushV
	var_202_object = var_1_object; // 0x17b MovT
	func_1868(var_202_object); // 0x17c NEW_2
	if(var_201_bool == 0) goto Label_384; // 0x17e JumpB
	var_194_bool = 1; // 0x17f MovB
	
Label_384:
	if(var_194_bool == 0) goto Label_390; // 0x180 JumpB
	var_207_int = 535977; // 0x181 PushI
	var_208_int = 37706; // 0x182 PushI
	var_209_int = 37705; // 0x183 PushI
	AddReply(var_207_int, var_208_int, var_209_int); // 0x184 TObjFunc
	
Label_390:
	var_210_bool = 0; // 0x186 PushV
	var_210_bool = 0; // 0x187 MovB
	var_211_bool = 0; var_212_object = Obj(); // 0x188 PushV
	var_212_object = var_1_object; // 0x189 MovT
	func_1880(var_212_object); // 0x18a NEW_2
	if(var_211_bool == 0) goto Label_403; // 0x18c JumpB
	var_217_bool = 0; var_218_object = Obj(); // 0x18d PushV
	var_218_object = var_1_object; // 0x18e MovT
	func_1892(var_218_object); // 0x18f NEW_2
	if(var_217_bool == 0) goto Label_403; // 0x191 JumpB
	var_210_bool = 1; // 0x192 MovB
	
Label_403:
	if(var_210_bool == 0) goto Label_409; // 0x193 JumpB
	var_223_int = 538666; // 0x194 PushI
	var_224_int = 40565; // 0x195 PushI
	var_225_int = 40564; // 0x196 PushI
	AddReply(var_223_int, var_224_int, var_225_int); // 0x197 TObjFunc
	
Label_409:
	var_226_int = 513460; // 0x199 PushI
	var_227_int = -1; // 0x19a PushI
	var_228_int = 14697; // 0x19b PushI
	AddReply(var_226_int, var_227_int, var_228_int); // 0x19c TObjFunc
	var_229_int = 535944; // 0x19e PushI
	var_230_int = -1; // 0x19f PushI
	var_231_int = 37665; // 0x1a0 PushI
	AddReply(var_229_int, var_230_int, var_231_int); // 0x1a1 TObjFunc
	return 0; // 0x1a3 Return
	
Label_420:
	var_232_int = 40565; // 0x1a4 PushI
	var_233_bool = var_7_cvector == var_232_int; // 0x1a5 Eq
	if(var_233_bool == 0) goto Label_443; // 0x1a6 JumpB
	var_234_string = ""; // 0x1a7 PushV
	var_234_string = "Doubt"; // 0x1a8 MovS
	func_216(var_8_bool, var_234_string); // 0x1a9 NEW_2
	var_235_int = 538667; // 0x1ab PushI
	SetMessage(var_235_int); // 0x1ac TObjFunc
	ClearReplies(); // 0x1ae TObjFunc
	var_236_int = 538668; // 0x1b0 PushI
	var_237_int = 40568; // 0x1b1 PushI
	var_238_int = 40566; // 0x1b2 PushI
	AddReply(var_236_int, var_237_int, var_238_int); // 0x1b3 TObjFunc
	var_239_int = 538669; // 0x1b5 PushI
	var_240_int = -1; // 0x1b6 PushI
	var_241_int = 40567; // 0x1b7 PushI
	AddReply(var_239_int, var_240_int, var_241_int); // 0x1b8 TObjFunc
	return 0; // 0x1ba Return
	
Label_443:
	var_242_int = 40568; // 0x1bb PushI
	var_243_bool = var_7_cvector == var_242_int; // 0x1bc Eq
	if(var_243_bool == 0) goto Label_466; // 0x1bd JumpB
	var_244_string = ""; // 0x1be PushV
	var_244_string = "Smile"; // 0x1bf MovS
	func_216(var_8_bool, var_244_string); // 0x1c0 NEW_2
	var_245_int = 538670; // 0x1c2 PushI
	SetMessage(var_245_int); // 0x1c3 TObjFunc
	ClearReplies(); // 0x1c5 TObjFunc
	var_246_int = 538671; // 0x1c7 PushI
	var_247_int = 40570; // 0x1c8 PushI
	var_248_int = 40569; // 0x1c9 PushI
	AddReply(var_246_int, var_247_int, var_248_int); // 0x1ca TObjFunc
	var_249_int = 538675; // 0x1cc PushI
	var_250_int = -1; // 0x1cd PushI
	var_251_int = 40573; // 0x1ce PushI
	AddReply(var_249_int, var_250_int, var_251_int); // 0x1cf TObjFunc
	return 0; // 0x1d1 Return
	
Label_466:
	var_252_int = 40570; // 0x1d2 PushI
	var_253_bool = var_7_cvector == var_252_int; // 0x1d3 Eq
	if(var_253_bool == 0) goto Label_489; // 0x1d4 JumpB
	var_254_string = ""; // 0x1d5 PushV
	var_254_string = "Sorrow"; // 0x1d6 MovS
	func_216(var_8_bool, var_254_string); // 0x1d7 NEW_2
	var_255_int = 538672; // 0x1d9 PushI
	SetMessage(var_255_int); // 0x1da TObjFunc
	ClearReplies(); // 0x1dc TObjFunc
	var_256_int = 538673; // 0x1de PushI
	var_257_int = 40574; // 0x1df PushI
	var_258_int = 40571; // 0x1e0 PushI
	AddReply(var_256_int, var_257_int, var_258_int); // 0x1e1 TObjFunc
	var_259_int = 538674; // 0x1e3 PushI
	var_260_int = -1; // 0x1e4 PushI
	var_261_int = 40572; // 0x1e5 PushI
	AddReply(var_259_int, var_260_int, var_261_int); // 0x1e6 TObjFunc
	return 0; // 0x1e8 Return
	
Label_489:
	var_262_int = 40574; // 0x1e9 PushI
	var_263_bool = var_7_cvector == var_262_int; // 0x1ea Eq
	if(var_263_bool == 0) goto Label_512; // 0x1eb JumpB
	var_264_string = ""; // 0x1ec PushV
	var_264_string = "Sorrow"; // 0x1ed MovS
	func_216(var_8_bool, var_264_string); // 0x1ee NEW_2
	var_265_int = 538676; // 0x1f0 PushI
	SetMessage(var_265_int); // 0x1f1 TObjFunc
	ClearReplies(); // 0x1f3 TObjFunc
	var_266_int = 538677; // 0x1f5 PushI
	var_267_int = -1; // 0x1f6 PushI
	var_268_int = 40575; // 0x1f7 PushI
	AddReply(var_266_int, var_267_int, var_268_int); // 0x1f8 TObjFunc
	var_269_int = 538678; // 0x1fa PushI
	var_270_int = -1; // 0x1fb PushI
	var_271_int = 40576; // 0x1fc PushI
	AddReply(var_269_int, var_270_int, var_271_int); // 0x1fd TObjFunc
	return 0; // 0x1ff Return
	
Label_512:
	var_272_int = 37706; // 0x200 PushI
	var_273_bool = var_7_cvector == var_272_int; // 0x201 Eq
	if(var_273_bool == 0) goto Label_535; // 0x202 JumpB
	var_274_string = ""; // 0x203 PushV
	var_274_string = "Agression"; // 0x204 MovS
	func_216(var_8_bool, var_274_string); // 0x205 NEW_2
	var_275_int = 535978; // 0x207 PushI
	SetMessage(var_275_int); // 0x208 TObjFunc
	ClearReplies(); // 0x20a TObjFunc
	var_276_int = 535979; // 0x20c PushI
	var_277_int = -1; // 0x20d PushI
	var_278_int = 37707; // 0x20e PushI
	AddReply(var_276_int, var_277_int, var_278_int); // 0x20f TObjFunc
	var_279_int = 535980; // 0x211 PushI
	var_280_int = 37709; // 0x212 PushI
	var_281_int = 37708; // 0x213 PushI
	AddReply(var_279_int, var_280_int, var_281_int); // 0x214 TObjFunc
	return 0; // 0x216 Return
	
Label_535:
	var_282_int = 37709; // 0x217 PushI
	var_283_bool = var_7_cvector == var_282_int; // 0x218 Eq
	if(var_283_bool == 0) goto Label_553; // 0x219 JumpB
	var_284_string = ""; // 0x21a PushV
	var_284_string = "Agression"; // 0x21b MovS
	func_216(var_8_bool, var_284_string); // 0x21c NEW_2
	var_285_int = 535981; // 0x21e PushI
	SetMessage(var_285_int); // 0x21f TObjFunc
	ClearReplies(); // 0x221 TObjFunc
	var_286_int = 535982; // 0x223 PushI
	var_287_int = 37711; // 0x224 PushI
	var_288_int = 37710; // 0x225 PushI
	AddReply(var_286_int, var_287_int, var_288_int); // 0x226 TObjFunc
	return 0; // 0x228 Return
	
Label_553:
	var_289_int = 37711; // 0x229 PushI
	var_290_bool = var_7_cvector == var_289_int; // 0x22a Eq
	if(var_290_bool == 0) goto Label_576; // 0x22b JumpB
	var_291_string = ""; // 0x22c PushV
	var_291_string = "Sorrow"; // 0x22d MovS
	func_216(var_8_bool, var_291_string); // 0x22e NEW_2
	var_292_int = 535983; // 0x230 PushI
	SetMessage(var_292_int); // 0x231 TObjFunc
	ClearReplies(); // 0x233 TObjFunc
	var_293_int = 535984; // 0x235 PushI
	var_294_int = -1; // 0x236 PushI
	var_295_int = 37712; // 0x237 PushI
	AddReply(var_293_int, var_294_int, var_295_int); // 0x238 TObjFunc
	var_296_int = 535985; // 0x23a PushI
	var_297_int = -1; // 0x23b PushI
	var_298_int = 37713; // 0x23c PushI
	AddReply(var_296_int, var_297_int, var_298_int); // 0x23d TObjFunc
	return 0; // 0x23f Return
	
Label_576:
	var_299_int = 14670; // 0x240 PushI
	var_300_bool = var_7_cvector == var_299_int; // 0x241 Eq
	if(var_300_bool == 0) goto Label_599; // 0x242 JumpB
	var_301_string = ""; // 0x243 PushV
	var_301_string = "Neutral"; // 0x244 MovS
	func_216(var_8_bool, var_301_string); // 0x245 NEW_2
	var_302_int = 513434; // 0x247 PushI
	SetMessage(var_302_int); // 0x248 TObjFunc
	ClearReplies(); // 0x24a TObjFunc
	var_303_int = 513435; // 0x24c PushI
	var_304_int = 14672; // 0x24d PushI
	var_305_int = 14671; // 0x24e PushI
	AddReply(var_303_int, var_304_int, var_305_int); // 0x24f TObjFunc
	var_306_int = 535970; // 0x251 PushI
	var_307_int = -1; // 0x252 PushI
	var_308_int = 37697; // 0x253 PushI
	AddReply(var_306_int, var_307_int, var_308_int); // 0x254 TObjFunc
	return 0; // 0x256 Return
	
Label_599:
	var_309_int = 14672; // 0x257 PushI
	var_310_bool = var_7_cvector == var_309_int; // 0x258 Eq
	if(var_310_bool == 0) goto Label_622; // 0x259 JumpB
	var_311_string = ""; // 0x25a PushV
	var_311_string = "Doubt"; // 0x25b MovS
	func_216(var_8_bool, var_311_string); // 0x25c NEW_2
	var_312_int = 513436; // 0x25e PushI
	SetMessage(var_312_int); // 0x25f TObjFunc
	ClearReplies(); // 0x261 TObjFunc
	var_313_int = 513437; // 0x263 PushI
	var_314_int = 14674; // 0x264 PushI
	var_315_int = 14673; // 0x265 PushI
	AddReply(var_313_int, var_314_int, var_315_int); // 0x266 TObjFunc
	var_316_int = 535971; // 0x268 PushI
	var_317_int = 37699; // 0x269 PushI
	var_318_int = 37698; // 0x26a PushI
	AddReply(var_316_int, var_317_int, var_318_int); // 0x26b TObjFunc
	return 0; // 0x26d Return
	
Label_622:
	var_319_int = 37699; // 0x26e PushI
	var_320_bool = var_7_cvector == var_319_int; // 0x26f Eq
	if(var_320_bool == 0) goto Label_640; // 0x270 JumpB
	var_321_string = ""; // 0x271 PushV
	var_321_string = "Sorrow"; // 0x272 MovS
	func_216(var_8_bool, var_321_string); // 0x273 NEW_2
	var_322_int = 535972; // 0x275 PushI
	SetMessage(var_322_int); // 0x276 TObjFunc
	ClearReplies(); // 0x278 TObjFunc
	var_323_int = 535973; // 0x27a PushI
	var_324_int = 37701; // 0x27b PushI
	var_325_int = 37700; // 0x27c PushI
	AddReply(var_323_int, var_324_int, var_325_int); // 0x27d TObjFunc
	return 0; // 0x27f Return
	
Label_640:
	var_326_int = 37701; // 0x280 PushI
	var_327_bool = var_7_cvector == var_326_int; // 0x281 Eq
	if(var_327_bool == 0) goto Label_658; // 0x282 JumpB
	var_328_string = ""; // 0x283 PushV
	var_328_string = "Sorrow"; // 0x284 MovS
	func_216(var_8_bool, var_328_string); // 0x285 NEW_2
	var_329_int = 535974; // 0x287 PushI
	SetMessage(var_329_int); // 0x288 TObjFunc
	ClearReplies(); // 0x28a TObjFunc
	var_330_int = 535975; // 0x28c PushI
	var_331_int = 14674; // 0x28d PushI
	var_332_int = 37702; // 0x28e PushI
	AddReply(var_330_int, var_331_int, var_332_int); // 0x28f TObjFunc
	return 0; // 0x291 Return
	
Label_658:
	var_333_int = 14674; // 0x292 PushI
	var_334_bool = var_7_cvector == var_333_int; // 0x293 Eq
	if(var_334_bool == 0) goto Label_681; // 0x294 JumpB
	var_335_string = ""; // 0x295 PushV
	var_335_string = "Agression"; // 0x296 MovS
	func_216(var_8_bool, var_335_string); // 0x297 NEW_2
	var_336_int = 513438; // 0x299 PushI
	SetMessage(var_336_int); // 0x29a TObjFunc
	ClearReplies(); // 0x29c TObjFunc
	var_337_int = 513494; // 0x29e PushI
	var_338_int = 14736; // 0x29f PushI
	var_339_int = 14735; // 0x2a0 PushI
	AddReply(var_337_int, var_338_int, var_339_int); // 0x2a1 TObjFunc
	var_340_int = 513491; // 0x2a3 PushI
	var_341_int = 14732; // 0x2a4 PushI
	var_342_int = 14731; // 0x2a5 PushI
	AddReply(var_340_int, var_341_int, var_342_int); // 0x2a6 TObjFunc
	return 0; // 0x2a8 Return
	
Label_681:
	var_343_int = 14732; // 0x2a9 PushI
	var_344_bool = var_7_cvector == var_343_int; // 0x2aa Eq
	if(var_344_bool == 0) goto Label_699; // 0x2ab JumpB
	var_345_string = ""; // 0x2ac PushV
	var_345_string = "Neutral"; // 0x2ad MovS
	func_216(var_8_bool, var_345_string); // 0x2ae NEW_2
	var_346_int = 513492; // 0x2b0 PushI
	SetMessage(var_346_int); // 0x2b1 TObjFunc
	ClearReplies(); // 0x2b3 TObjFunc
	var_347_int = 513493; // 0x2b5 PushI
	var_348_int = 14678; // 0x2b6 PushI
	var_349_int = 14733; // 0x2b7 PushI
	AddReply(var_347_int, var_348_int, var_349_int); // 0x2b8 TObjFunc
	return 0; // 0x2ba Return
	
Label_699:
	var_350_int = 14736; // 0x2bb PushI
	var_351_bool = var_7_cvector == var_350_int; // 0x2bc Eq
	if(var_351_bool == 0) goto Label_722; // 0x2bd JumpB
	var_352_string = ""; // 0x2be PushV
	var_352_string = "Agression"; // 0x2bf MovS
	func_216(var_8_bool, var_352_string); // 0x2c0 NEW_2
	var_353_int = 513495; // 0x2c2 PushI
	SetMessage(var_353_int); // 0x2c3 TObjFunc
	ClearReplies(); // 0x2c5 TObjFunc
	var_354_int = 513439; // 0x2c7 PushI
	var_355_int = 14676; // 0x2c8 PushI
	var_356_int = 14675; // 0x2c9 PushI
	AddReply(var_354_int, var_355_int, var_356_int); // 0x2ca TObjFunc
	var_357_int = 535976; // 0x2cc PushI
	var_358_int = -1; // 0x2cd PushI
	var_359_int = 37704; // 0x2ce PushI
	AddReply(var_357_int, var_358_int, var_359_int); // 0x2cf TObjFunc
	return 0; // 0x2d1 Return
	
Label_722:
	var_360_int = 14676; // 0x2d2 PushI
	var_361_bool = var_7_cvector == var_360_int; // 0x2d3 Eq
	if(var_361_bool == 0) goto Label_740; // 0x2d4 JumpB
	var_362_string = ""; // 0x2d5 PushV
	var_362_string = "Doubt"; // 0x2d6 MovS
	func_216(var_8_bool, var_362_string); // 0x2d7 NEW_2
	var_363_int = 513440; // 0x2d9 PushI
	SetMessage(var_363_int); // 0x2da TObjFunc
	ClearReplies(); // 0x2dc TObjFunc
	var_364_int = 513441; // 0x2de PushI
	var_365_int = 14678; // 0x2df PushI
	var_366_int = 14677; // 0x2e0 PushI
	AddReply(var_364_int, var_365_int, var_366_int); // 0x2e1 TObjFunc
	return 0; // 0x2e3 Return
	
Label_740:
	var_367_int = 14678; // 0x2e4 PushI
	var_368_bool = var_7_cvector == var_367_int; // 0x2e5 Eq
	if(var_368_bool == 0) goto Label_758; // 0x2e6 JumpB
	var_369_string = ""; // 0x2e7 PushV
	var_369_string = "Neutral"; // 0x2e8 MovS
	func_216(var_8_bool, var_369_string); // 0x2e9 NEW_2
	var_370_int = 513442; // 0x2eb PushI
	SetMessage(var_370_int); // 0x2ec TObjFunc
	ClearReplies(); // 0x2ee TObjFunc
	var_371_int = 513444; // 0x2f0 PushI
	var_372_int = 14681; // 0x2f1 PushI
	var_373_int = 14680; // 0x2f2 PushI
	AddReply(var_371_int, var_372_int, var_373_int); // 0x2f3 TObjFunc
	return 0; // 0x2f5 Return
	
Label_758:
	var_374_int = 14681; // 0x2f6 PushI
	var_375_bool = var_7_cvector == var_374_int; // 0x2f7 Eq
	if(var_375_bool == 0) goto Label_776; // 0x2f8 JumpB
	var_376_string = ""; // 0x2f9 PushV
	var_376_string = "Neutral"; // 0x2fa MovS
	func_216(var_8_bool, var_376_string); // 0x2fb NEW_2
	var_377_int = 513445; // 0x2fd PushI
	SetMessage(var_377_int); // 0x2fe TObjFunc
	ClearReplies(); // 0x300 TObjFunc
	var_378_int = 513446; // 0x302 PushI
	var_379_int = -1; // 0x303 PushI
	var_380_int = 14682; // 0x304 PushI
	AddReply(var_378_int, var_379_int, var_380_int); // 0x305 TObjFunc
	return 0; // 0x307 Return
	
Label_776:
	var_381_int = 37690; // 0x308 PushI
	var_382_bool = var_7_cvector == var_381_int; // 0x309 Eq
	if(var_382_bool == 0) goto Label_799; // 0x30a JumpB
	var_383_string = ""; // 0x30b PushV
	var_383_string = "Neutral"; // 0x30c MovS
	func_216(var_8_bool, var_383_string); // 0x30d NEW_2
	var_384_int = 535964; // 0x30f PushI
	SetMessage(var_384_int); // 0x310 TObjFunc
	ClearReplies(); // 0x312 TObjFunc
	var_385_int = 535965; // 0x314 PushI
	var_386_int = 14684; // 0x315 PushI
	var_387_int = 37691; // 0x316 PushI
	AddReply(var_385_int, var_386_int, var_387_int); // 0x317 TObjFunc
	var_388_int = 535966; // 0x319 PushI
	var_389_int = 37693; // 0x31a PushI
	var_390_int = 37692; // 0x31b PushI
	AddReply(var_388_int, var_389_int, var_390_int); // 0x31c TObjFunc
	return 0; // 0x31e Return
	
Label_799:
	var_391_int = 37693; // 0x31f PushI
	var_392_bool = var_7_cvector == var_391_int; // 0x320 Eq
	if(var_392_bool == 0) goto Label_822; // 0x321 JumpB
	var_393_string = ""; // 0x322 PushV
	var_393_string = "Sorrow"; // 0x323 MovS
	func_216(var_8_bool, var_393_string); // 0x324 NEW_2
	var_394_int = 535967; // 0x326 PushI
	SetMessage(var_394_int); // 0x327 TObjFunc
	ClearReplies(); // 0x329 TObjFunc
	var_395_int = 535968; // 0x32b PushI
	var_396_int = 14684; // 0x32c PushI
	var_397_int = 37694; // 0x32d PushI
	AddReply(var_395_int, var_396_int, var_397_int); // 0x32e TObjFunc
	var_398_int = 535969; // 0x330 PushI
	var_399_int = -1; // 0x331 PushI
	var_400_int = 37696; // 0x332 PushI
	AddReply(var_398_int, var_399_int, var_400_int); // 0x333 TObjFunc
	return 0; // 0x335 Return
	
Label_822:
	var_401_int = 14684; // 0x336 PushI
	var_402_bool = var_7_cvector == var_401_int; // 0x337 Eq
	if(var_402_bool == 0) goto Label_845; // 0x338 JumpB
	var_403_string = ""; // 0x339 PushV
	var_403_string = "Smile"; // 0x33a MovS
	func_216(var_8_bool, var_403_string); // 0x33b NEW_2
	var_404_int = 513448; // 0x33d PushI
	SetMessage(var_404_int); // 0x33e TObjFunc
	ClearReplies(); // 0x340 TObjFunc
	var_405_int = 513449; // 0x342 PushI
	var_406_int = 14686; // 0x343 PushI
	var_407_int = 14685; // 0x344 PushI
	AddReply(var_405_int, var_406_int, var_407_int); // 0x345 TObjFunc
	var_408_int = 513451; // 0x347 PushI
	var_409_int = 14688; // 0x348 PushI
	var_410_int = 14687; // 0x349 PushI
	AddReply(var_408_int, var_409_int, var_410_int); // 0x34a TObjFunc
	return 0; // 0x34c Return
	
Label_845:
	var_411_int = 14688; // 0x34d PushI
	var_412_bool = var_7_cvector == var_411_int; // 0x34e Eq
	if(var_412_bool == 0) goto Label_863; // 0x34f JumpB
	var_413_string = ""; // 0x350 PushV
	var_413_string = "Neutral"; // 0x351 MovS
	func_216(var_8_bool, var_413_string); // 0x352 NEW_2
	var_414_int = 513452; // 0x354 PushI
	SetMessage(var_414_int); // 0x355 TObjFunc
	ClearReplies(); // 0x357 TObjFunc
	var_415_int = 513453; // 0x359 PushI
	var_416_int = 14690; // 0x35a PushI
	var_417_int = 14689; // 0x35b PushI
	AddReply(var_415_int, var_416_int, var_417_int); // 0x35c TObjFunc
	return 0; // 0x35e Return
	
Label_863:
	var_418_int = 14690; // 0x35f PushI
	var_419_bool = var_7_cvector == var_418_int; // 0x360 Eq
	if(var_419_bool == 0) goto Label_886; // 0x361 JumpB
	var_420_string = ""; // 0x362 PushV
	var_420_string = "Agression"; // 0x363 MovS
	func_216(var_8_bool, var_420_string); // 0x364 NEW_2
	var_421_int = 513454; // 0x366 PushI
	SetMessage(var_421_int); // 0x367 TObjFunc
	ClearReplies(); // 0x369 TObjFunc
	var_422_int = 513455; // 0x36b PushI
	var_423_int = 14694; // 0x36c PushI
	var_424_int = 14691; // 0x36d PushI
	AddReply(var_422_int, var_423_int, var_424_int); // 0x36e TObjFunc
	var_425_int = 513456; // 0x370 PushI
	var_426_int = -1; // 0x371 PushI
	var_427_int = 14692; // 0x372 PushI
	AddReply(var_425_int, var_426_int, var_427_int); // 0x373 TObjFunc
	return 0; // 0x375 Return
	
Label_886:
	var_428_int = 14686; // 0x376 PushI
	var_429_bool = var_7_cvector == var_428_int; // 0x377 Eq
	if(var_429_bool == 0) goto Label_904; // 0x378 JumpB
	var_430_string = ""; // 0x379 PushV
	var_430_string = "Neutral"; // 0x37a MovS
	func_216(var_8_bool, var_430_string); // 0x37b NEW_2
	var_431_int = 513450; // 0x37d PushI
	SetMessage(var_431_int); // 0x37e TObjFunc
	ClearReplies(); // 0x380 TObjFunc
	var_432_int = 513457; // 0x382 PushI
	var_433_int = 14694; // 0x383 PushI
	var_434_int = 14693; // 0x384 PushI
	AddReply(var_432_int, var_433_int, var_434_int); // 0x385 TObjFunc
	return 0; // 0x387 Return
	
Label_904:
	var_435_int = 14694; // 0x388 PushI
	var_436_bool = var_7_cvector == var_435_int; // 0x389 Eq
	if(var_436_bool == 0) goto Label_922; // 0x38a JumpB
	var_437_string = ""; // 0x38b PushV
	var_437_string = "Smile"; // 0x38c MovS
	func_216(var_8_bool, var_437_string); // 0x38d NEW_2
	var_438_int = 513458; // 0x38f PushI
	SetMessage(var_438_int); // 0x390 TObjFunc
	ClearReplies(); // 0x392 TObjFunc
	var_439_int = 513459; // 0x394 PushI
	var_440_int = -1; // 0x395 PushI
	var_441_int = 14696; // 0x396 PushI
	AddReply(var_439_int, var_440_int, var_441_int); // 0x397 TObjFunc
	return 0; // 0x399 Return
	
Label_922:
	var_442_int = 14661; // 0x39a PushI
	var_443_bool = var_7_cvector == var_442_int; // 0x39b Eq
	if(var_443_bool == 0) goto Label_940; // 0x39c JumpB
	var_444_string = ""; // 0x39d PushV
	var_444_string = "Smile"; // 0x39e MovS
	func_216(var_8_bool, var_444_string); // 0x39f NEW_2
	var_445_int = 513425; // 0x3a1 PushI
	SetMessage(var_445_int); // 0x3a2 TObjFunc
	ClearReplies(); // 0x3a4 TObjFunc
	var_446_int = 513426; // 0x3a6 PushI
	var_447_int = 14663; // 0x3a7 PushI
	var_448_int = 14662; // 0x3a8 PushI
	AddReply(var_446_int, var_447_int, var_448_int); // 0x3a9 TObjFunc
	return 0; // 0x3ab Return
	
Label_940:
	var_449_int = 14663; // 0x3ac PushI
	var_450_bool = var_7_cvector == var_449_int; // 0x3ad Eq
	if(var_450_bool == 0) goto Label_958; // 0x3ae JumpB
	var_451_string = ""; // 0x3af PushV
	var_451_string = "Sorrow"; // 0x3b0 MovS
	func_216(var_8_bool, var_451_string); // 0x3b1 NEW_2
	var_452_int = 513427; // 0x3b3 PushI
	SetMessage(var_452_int); // 0x3b4 TObjFunc
	ClearReplies(); // 0x3b6 TObjFunc
	var_453_int = 535957; // 0x3b8 PushI
	var_454_int = 37683; // 0x3b9 PushI
	var_455_int = 37682; // 0x3ba PushI
	AddReply(var_453_int, var_454_int, var_455_int); // 0x3bb TObjFunc
	return 0; // 0x3bd Return
	
Label_958:
	var_456_int = 37683; // 0x3be PushI
	var_457_bool = var_7_cvector == var_456_int; // 0x3bf Eq
	if(var_457_bool == 0) goto Label_981; // 0x3c0 JumpB
	var_458_string = ""; // 0x3c1 PushV
	var_458_string = "Sorrow"; // 0x3c2 MovS
	func_216(var_8_bool, var_458_string); // 0x3c3 NEW_2
	var_459_int = 535958; // 0x3c5 PushI
	SetMessage(var_459_int); // 0x3c6 TObjFunc
	ClearReplies(); // 0x3c8 TObjFunc
	var_460_int = 513428; // 0x3ca PushI
	var_461_int = 14665; // 0x3cb PushI
	var_462_int = 14664; // 0x3cc PushI
	AddReply(var_460_int, var_461_int, var_462_int); // 0x3cd TObjFunc
	var_463_int = 535959; // 0x3cf PushI
	var_464_int = 37685; // 0x3d0 PushI
	var_465_int = 37684; // 0x3d1 PushI
	AddReply(var_463_int, var_464_int, var_465_int); // 0x3d2 TObjFunc
	return 0; // 0x3d4 Return
	
Label_981:
	var_466_int = 37685; // 0x3d5 PushI
	var_467_bool = var_7_cvector == var_466_int; // 0x3d6 Eq
	if(var_467_bool == 0) goto Label_1004; // 0x3d7 JumpB
	var_468_string = ""; // 0x3d8 PushV
	var_468_string = "Neutral"; // 0x3d9 MovS
	func_216(var_8_bool, var_468_string); // 0x3da NEW_2
	var_469_int = 535960; // 0x3dc PushI
	SetMessage(var_469_int); // 0x3dd TObjFunc
	ClearReplies(); // 0x3df TObjFunc
	var_470_int = 535962; // 0x3e1 PushI
	var_471_int = 14665; // 0x3e2 PushI
	var_472_int = 37687; // 0x3e3 PushI
	AddReply(var_470_int, var_471_int, var_472_int); // 0x3e4 TObjFunc
	var_473_int = 535963; // 0x3e6 PushI
	var_474_int = -1; // 0x3e7 PushI
	var_475_int = 37689; // 0x3e8 PushI
	AddReply(var_473_int, var_474_int, var_475_int); // 0x3e9 TObjFunc
	return 0; // 0x3eb Return
	
Label_1004:
	var_476_int = 14665; // 0x3ec PushI
	var_477_bool = var_7_cvector == var_476_int; // 0x3ed Eq
	if(var_477_bool == 0) goto Label_1027; // 0x3ee JumpB
	var_478_string = ""; // 0x3ef PushV
	var_478_string = "Neutral"; // 0x3f0 MovS
	func_216(var_8_bool, var_478_string); // 0x3f1 NEW_2
	var_479_int = 513429; // 0x3f3 PushI
	SetMessage(var_479_int); // 0x3f4 TObjFunc
	ClearReplies(); // 0x3f6 TObjFunc
	var_480_int = 513430; // 0x3f8 PushI
	var_481_int = 14667; // 0x3f9 PushI
	var_482_int = 14666; // 0x3fa PushI
	AddReply(var_480_int, var_481_int, var_482_int); // 0x3fb TObjFunc
	var_483_int = 535961; // 0x3fd PushI
	var_484_int = -1; // 0x3fe PushI
	var_485_int = 37686; // 0x3ff PushI
	AddReply(var_483_int, var_484_int, var_485_int); // 0x400 TObjFunc
	return 0; // 0x402 Return
	
Label_1027:
	var_486_int = 14667; // 0x403 PushI
	var_487_bool = var_7_cvector == var_486_int; // 0x404 Eq
	if(var_487_bool == 0) goto Label_1045; // 0x405 JumpB
	var_488_string = ""; // 0x406 PushV
	var_488_string = "Neutral"; // 0x407 MovS
	func_216(var_8_bool, var_488_string); // 0x408 NEW_2
	var_489_int = 513431; // 0x40a PushI
	SetMessage(var_489_int); // 0x40b TObjFunc
	ClearReplies(); // 0x40d TObjFunc
	var_490_int = 513432; // 0x40f PushI
	var_491_int = -1; // 0x410 PushI
	var_492_int = 14668; // 0x411 PushI
	AddReply(var_490_int, var_491_int, var_492_int); // 0x412 TObjFunc
	return 0; // 0x414 Return
	
Label_1045:
	var_3_string = 1; // 0x415 TMovB
	var_493_bool = 0; // 0x416 PushV
	func_2070(var_493_bool); // 0x417 NEW_2
	if(var_493_bool == 0) goto Label_1053; // 0x419 JumpB
	lshStopAnimation(); // 0x41a Func
	goto Label_1055; // 0x41c Jump
	
Label_1055:
	return 0; // 0x41f Return
	
Label_1053:
	StopAnimation(); // 0x41d Func
	
Label_1057:
	return 0; // 0x421 Return
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_string)
{
	var_8_bool = 0; var_9_bool = 0; // 0x42e PushV
	var_10_string = "cleanup"; // 0x42f PushS
	var_11_bool = var_7_string == var_10_string; // 0x430 Eq
	if(var_11_bool == 0) goto Label_1085; // 0x431 JumpB
	var_1_object = 1; // 0x432 TMovB
	IsLoaded(var_9_bool); // 0x433 Func
	var_12_bool = var_9_bool == 0; // 0x435 Not
	if(var_12_bool == 0) goto Label_1084; // 0x436 JumpB
	var_13_object = Obj(); // 0x437 PushV
	func_1669(var_13_object); // 0x438 NEW_2
	RemoveActor(var_13_object); // 0x43a Func
	
Label_1084:
	goto Label_1089; // 0x43c Jump
	
Label_1089:
	return 2; // 0x441 Return
	
Label_1085:
	var_16_string = "restore"; // 0x43d PushS
	var_17_bool = var_7_string == var_16_string; // 0x43e Eq
	if(var_17_bool == 0) goto Label_1089; // 0x43f JumpB
	var_1_object = 0; // 0x440 TMovB
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	var_7_object = var_1_object; // 0x442 PushT
	if(var_7_object == 0) goto Label_1099; // 0x443 JumpB
	var_8_object = Obj(); // 0x444 PushV
	func_1669(var_8_object); // 0x445 NEW_2
	RemoveActor(var_8_object); // 0x447 Func
	Hold(); // 0x449 Func
	
Label_1099:
	func_1214(); // 0x44c NEW_2
	return 0; // 0x44e Return
}


task_2_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	func_1229(); // 0x450 NEW_2
	return 0; // 0x452 Return
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_int)
{
	var_8_int = 10; // 0x499 PushI
	var_9_bool = var_7_int == var_8_int; // 0x49a Eq
	if(var_9_bool == 0) goto Label_1213; // 0x49b JumpB
	func_1172(); // 0x49d NEW_2
	var_11_bool = 0; // 0x49f PushV
	var_11_bool = 0; // 0x4a0 MovB
	var_12_bool = 0; // 0x4a1 PushV
	func_1386(var_12_bool); // 0x4a2 NEW_2
	if(var_12_bool == 0) goto Label_1194; // 0x4a4 JumpB
	var_15_bool = 0; // 0x4a5 PushV
	func_1141(var_15_bool); // 0x4a6 NEW_2
	if(var_15_bool == 0) goto Label_1194; // 0x4a8 JumpB
	var_11_bool = 1; // 0x4a9 MovB
	
Label_1194:
	if(var_11_bool == 0) goto Label_1207; // 0x4aa JumpB
	var_32_bool = 0; // 0x4ab PushV
	func_1121(var_32_bool); // 0x4ac NEW_2
	if(var_32_bool == 0) goto Label_1206; // 0x4ae JumpB
	var_51_bool = 0; var_52_object = Obj(); // 0x4af PushV
	var_53_object = Obj(); // 0x4b0 PushV
	func_1669(var_53_object); // 0x4b1 NEW_2
	var_52_object = var_53_object; // 0x4b2 Mov
	func_1536(var_52_object); // 0x4b4 NEW_2
	
Label_1206:
	goto Label_1213; // 0x4b6 Jump
	
Label_1213:
	return 0; // 0x4bd Return
	
Label_1207:
	func_1136(var_7_int); // 0x4b8 NEW_2
	func_1163(); // 0x4bb NEW_2
}


task_2_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_bool)
{
	var_8_bool = var_7_bool; // 0x4db Push
	if(var_8_bool == 0) goto Label_1249; // 0x4dc JumpB
	func_1163(); // 0x4de NEW_2
	goto Label_1253; // 0x4e0 Jump
	
Label_1253:
	return 0; // 0x4e5 Return
	
Label_1249:
	var_14_string = ""; // 0x4e1 PushV
	var_14_string = "Neutral"; // 0x4e2 MovS
	func_1616(var_14_string); // 0x4e3 NEW_2
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_object)
{
	var_8_bool = 0; var_9_bool = 0; // 0x4e6 PushV
	IsOverrideActive(var_9_bool); // 0x4e7 Func
	var_10_bool = var_9_bool == 0; // 0x4e9 Not
	if(var_10_bool == 0) goto Label_1282; // 0x4ea JumpB
	EventDisable(0); // 0x4eb EventDisable
	func_1354(); // 0x4ed NEW_2
	var_11_bool = 0; var_12_object = Obj(); // 0x4ef PushV
	var_12_object = var_7_object; // 0x4f0 Mov
	func_1377(var_12_object); // 0x4f1 NEW_2
	EventEnable(0); // 0x4f3 EventEnable
	var_25_object = Obj(); // 0x4f4 PushV
	var_25_object = var_7_object; // 0x4f5 Mov
	func_1058(var_25_object); // 0x4f6 NEW_2
	var_319_string = ""; // 0x4f8 PushV
	var_319_string = "Neutral"; // 0x4f9 MovS
	func_1616(var_319_string); // 0x4fa NEW_2
	func_1172(); // 0x4fd NEW_2
	func_1163(); // 0x500 NEW_2
	
Label_1282:
	return 2; // 0x502 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	func_1107(var_6_bool); // 0x42b NEW_2
	return 0; // 0x42d Return
}


func_0(var_0_object, var_26_int, var_27_object)
{
	var_29_object = Obj(); var_30_bool = 0; var_31_int = 0; var_32_bool = 0; var_33_object = Obj(); var_34_bool = 0; var_35_int = 0; var_36_bool = 0; // 0x0 PushV
	var_0_object = var_27_object; // 0x1 TMov
	var_37_bool = 0; var_38_object = Obj(); var_39_float = 0; // 0x2 PushV
	var_38_object = var_27_object; // 0x3 Mov
	var_39_float = 70.0; // 0x4 MovF
	func_1391(var_38_object, var_39_float); // 0x5 NEW_2
	var_84_bool = var_37_bool == 0; // 0x7 Not
	if(var_84_bool == 0) goto Label_11; // 0x8 JumpB
	var_26_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_33_object); // 0xb Func
	var_85_int = 0; // 0xd PushV
	func_2064(var_85_int); // 0xe NEW_2
	SetNPCName(var_85_int); // 0x10 ObjFunc
	var_86_int = 0; // 0x12 PushV
	func_2062(var_86_int); // 0x13 NEW_2
	SetNPCDescription(var_86_int); // 0x15 ObjFunc
	var_87_string = ""; // 0x17 PushV
	func_2066(var_87_string); // 0x18 NEW_2
	SetPhoto(var_87_string); // 0x1a ObjFunc
	var_88_string = ""; // 0x1c PushV
	func_2068(var_88_string); // 0x1d NEW_2
	SetPhoto2(var_88_string); // 0x1f ObjFunc
	var_89_int = 0; // 0x21 PushV
	func_2045(var_89_int); // 0x22 NEW_2
	SetPlayerName(var_89_int); // 0x24 ObjFunc
	var_35_int = -1; // 0x26 MovI
	IsOverrideActive(var_34_bool); // 0x27 Func
	var_97_bool = var_34_bool; // 0x29 Push
	if(var_97_bool == 0) goto Label_45; // 0x2a JumpB
	var_26_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_33_object); // 0x2d Func
	var_98_bool = 0; var_99_object = Obj(); // 0x2f PushV
	var_100_object = Obj(); // 0x30 PushV
	func_1669(var_100_object); // 0x31 NEW_2
	var_99_object = var_100_object; // 0x32 Mov
	func_1478(var_98_bool, var_99_object); // 0x34 NEW_2
	var_193_object = Obj(); var_194_object = Obj(); // 0x36 PushV
	var_193_object = var_27_object; // 0x37 Mov
	var_194_object = var_33_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_195_object, var_196_object, var_197_string, var_198_bool, var_193_object, var_194_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	IsDialogEnd(var_36_bool); // 0x3d ObjFunc
	
Label_63:
	var_310_bool = var_36_bool == 0; // 0x3f Not
	if(var_310_bool == 0) goto Label_70; // 0x40 JumpB
	sync(); // 0x41 Func
	IsDialogEnd(var_36_bool); // 0x43 ObjFunc
	goto Label_63; // 0x45 Jump
	
Label_70:
	var_311_object = Obj(); // 0x46 PushV
	var_311_object = var_27_object; // 0x47 Mov
	func_1460(); // 0x48 NEW_2
	StopDialog(var_33_object); // 0x4a Func
	GetReturnValue(var_35_int); // 0x4c ObjFunc
	var_26_int = var_35_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_1536(var_109_bool)
{
	var_111_string = ""; var_112_int = 0; var_113_bool = 0; var_114_int = 0; var_115_string = ""; var_116_string = ""; var_117_int = 0; var_118_bool = 0; var_119_int = 0; var_120_string = ""; // 0x600 PushV
	var_116_string = "c"; // 0x601 MovS
	var_117_int = 0; // 0x602 MovI
	
Label_1539:
	var_121_int = 1; // 0x603 PushI
	if(var_121_int == 0) goto Label_1552; // 0x604 JumpB
	var_122_int = 1; // 0x605 PushI
	var_123_int = var_117_int + var_122_int; // 0x606 Add
	var_124_int = var_116_string + var_123_int; // 0x607 Add
	HasProperty(var_124_int, var_118_bool); // 0x608 ObjFunc
	var_125_bool = var_118_bool == 0; // 0x60a Not
	if(var_125_bool == 0) goto Label_1549; // 0x60b JumpB
	goto Label_1552; // 0x60c Jump
	
Label_1552:
	var_126_bool = var_117_int == 0; // 0x610 Not
	if(var_126_bool == 0) goto Label_1556; // 0x611 JumpB
	var_109_bool = 0; // 0x612 MovB
	return 10; // 0x613 Return
	
Label_1556:
	var_119_int = 0; // 0x614 MovI
	var_127_int = 1; // 0x615 PushI
	var_128_bool = var_117_int > var_127_int; // 0x616 GT
	if(var_128_bool == 0) goto Label_1562; // 0x617 JumpB
	irand(var_119_int, var_117_int); // 0x618 Func
	
Label_1562:
	var_129_int = 1; // 0x61a PushI
	var_130_int = var_119_int + var_129_int; // 0x61b Add
	var_131_int = var_116_string + var_130_int; // 0x61c Add
	GetProperty(var_131_int, var_120_string); // 0x61d ObjFunc
	var_132_bool = 0; var_133_string = ""; // 0x61f PushV
	var_133_string = var_120_string; // 0x620 Mov
	func_1647(var_132_bool, var_133_string); // 0x621 NEW_2
	var_109_bool = var_132_bool; // 0x622 Mov
	return 10; // 0x624 Return
	
Label_1549:
	var_138_int = 1; // 0x60d PushI
	var_117_int = var_117_int + var_138_int; // 0x60e Add2
	goto Label_1539; // 0x60f Jump
}


func_1283()
{
	var_11_int = 0; var_12_int = 0; var_13_bool = 0; var_14_int = 0; var_15_int = 0; var_16_bool = 0; var_17_int = 0; var_18_int = 0; var_19_bool = 0; var_20_int = 0; var_21_int = 0; var_22_bool = 0; // 0x503 PushV
	WaitForAnimEnd(); // 0x504 Func
	var_23_bool = 0; // 0x506 PushV
	func_1386(var_23_bool); // 0x507 NEW_2
	var_24_bool = var_23_bool == 0; // 0x509 Not
	if(var_24_bool == 0) goto Label_1292; // 0x50a JumpB
	return 12; // 0x50b Return
	
Label_1292:
	var_25_int = 0; // 0x50c PushV
	func_1762(var_25_int); // 0x50d NEW_2
	var_17_int = var_25_int; // 0x50e Mov
	var_18_int = 0; // 0x510 MovI
	
Label_1297:
	var_38_bool = 0; // 0x511 PushV
	var_38_bool = 0; // 0x512 MovB
	var_39_int = 5; // 0x513 PushI
	var_40_bool = var_18_int < var_39_int; // 0x514 LT
	if(var_40_bool == 0) goto Label_1307; // 0x515 JumpB
	var_41_bool = 0; // 0x516 PushV
	func_1386(var_41_bool); // 0x517 NEW_2
	if(var_41_bool == 0) goto Label_1307; // 0x519 JumpB
	var_38_bool = 1; // 0x51a MovB
	
Label_1307:
	if(var_38_bool == 0) goto Label_1349; // 0x51b JumpB
	var_42_bool = var_17_int == 0; // 0x51c Not
	if(var_42_bool == 0) goto Label_1317; // 0x51d JumpB
	var_43_int = 3; // 0x51e PushI
	Sleep(var_43_int, var_19_bool); // 0x51f Func
	var_44_bool = var_19_bool == 0; // 0x521 Not
	if(var_44_bool == 0) goto Label_1316; // 0x522 JumpB
	goto Label_1349; // 0x523 Jump
	
Label_1349:
	ResetAAS(); // 0x545 Func
	return 12; // 0x547 Return
	
Label_1316:
	goto Label_1338; // 0x524 Jump
	
Label_1338:
	var_45_bool = 0; // 0x53a PushV
	func_1352(var_45_bool); // 0x53b NEW_2
	var_46_bool = var_45_bool == 0; // 0x53d Not
	if(var_46_bool == 0) goto Label_1344; // 0x53e JumpB
	goto Label_1349; // 0x53f Jump
	
Label_1344:
	ResetAAS(); // 0x540 Func
	var_47_int = 1; // 0x542 PushI
	var_18_int = var_18_int + var_47_int; // 0x543 Add2
	goto Label_1297; // 0x544 Jump
	
Label_1317:
	irand(var_20_int, var_17_int); // 0x525 Func
	var_48_int = 5; // 0x527 PushI
	irand(var_21_int, var_48_int); // 0x528 Func
	var_49_int = 0; // 0x52a PushI
	var_50_bool = var_21_int != var_49_int; // 0x52b Neq
	if(var_50_bool == 0) goto Label_1326; // 0x52c JumpB
	var_20_int = 0; // 0x52d MovI
	
Label_1326:
	var_51_string = "all"; // 0x52e PushS
	var_52_string = ""; var_53_int = 0; // 0x52f PushV
	var_53_int = var_20_int; // 0x530 Mov
	func_1755(var_52_string, var_53_int); // 0x531 NEW_2
	PlayAnimation(var_51_string, var_52_string); // 0x533 Func
	WaitForAnimEnd(var_22_bool); // 0x535 Func
	var_54_bool = var_22_bool == 0; // 0x537 Not
	if(var_54_bool == 0) goto Label_1338; // 0x538 JumpB
	goto Label_1349; // 0x539 Jump
}


func_1797()
{
	var_15_string = "d8q03"; // 0x706 PushS
	var_16_int = 1; // 0x707 PushI
	SetVariable(var_15_string, var_16_int); // 0x708 Func
	func_1952(); // 0x70b NEW_2
	func_1965(); // 0x70e NEW_2
	return 0; // 0x710 Return
}


func_2062(var_86_int)
{
	var_86_int = 515592; // 0x80e MovI
	return 0; // 0x80f Return
}


func_2064(var_85_int)
{
	var_85_int = 511961; // 0x810 MovI
	return 0; // 0x811 Return
}


func_1809()
{
	func_1978(); // 0x713 NEW_2
	var_96_bool = 0; var_97_string = ""; var_98_string = ""; // 0x715 PushV
	var_97_string = "quest_d8_03"; // 0x716 MovS
	var_98_string = "completed"; // 0x717 MovS
	func_1734(var_96_bool, var_97_string, var_98_string); // 0x718 NEW_2
	return 0; // 0x71a Return
}


func_2066(var_87_string)
{
	var_87_string = "ui/NPC_Burah.png"; // 0x812 MovS
	return 0; // 0x813 Return
}


func_2068(var_88_string)
{
	var_88_string = "ui/NPC_Burah_b.png"; // 0x814 MovS
	return 0; // 0x815 Return
}


func_2070(var_80_bool)
{
	var_80_bool = 1; // 0x816 MovB
	return 0; // 0x817 Return
}


func_1819(var_48_object)
{
	var_50_string = "burah gives blood"; // 0x71c PushS
	Trace(var_50_string); // 0x71d Func
	var_51_object = Obj(); var_52_string = ""; var_53_int = 0; // 0x71f PushV
	var_51_object = var_48_object; // 0x720 Mov
	var_52_string = "d8q03_blood"; // 0x721 MovS
	var_53_int = 1; // 0x722 MovI
	func_1721(var_51_object, var_52_string, var_53_int); // 0x723 NEW_2
	return 0; // 0x725 Return
}


func_1058(var_25_object)
{
	var_26_int = 0; var_27_object = Obj(); // 0x423 PushV
	var_27_object = var_25_object; // 0x424 Mov
	TaskCall(0); // 0x425 TaskCall
	func_0(var_28_object, var_26_int, var_27_object); // 0x426 NEW_2
	TaskReturn(); // 0x427 TaskReturn
	return 0; // 0x429 Return
}


func_1573(var_140_bool)
{
	var_142_string = ""; var_143_int = 0; var_144_bool = 0; var_145_int = 0; var_146_string = ""; var_147_string = ""; var_148_int = 0; var_149_bool = 0; var_150_int = 0; var_151_string = ""; // 0x625 PushV
	var_152_string = "d"; // 0x626 PushS
	var_153_int = 0; // 0x627 PushV
	func_1746(var_153_int); // 0x628 NEW_2
	var_159_int = var_152_string + var_153_int; // 0x62a Add
	var_160_string = "m"; // 0x62b PushS
	var_147_string = var_159_int + var_160_string; // 0x62c Add2
	var_148_int = 0; // 0x62d MovI
	
Label_1582:
	var_161_int = 1; // 0x62e PushI
	if(var_161_int == 0) goto Label_1595; // 0x62f JumpB
	var_162_int = 1; // 0x630 PushI
	var_163_int = var_148_int + var_162_int; // 0x631 Add
	var_164_int = var_147_string + var_163_int; // 0x632 Add
	HasProperty(var_164_int, var_149_bool); // 0x633 ObjFunc
	var_165_bool = var_149_bool == 0; // 0x635 Not
	if(var_165_bool == 0) goto Label_1592; // 0x636 JumpB
	goto Label_1595; // 0x637 Jump
	
Label_1595:
	var_166_bool = var_148_int == 0; // 0x63b Not
	if(var_166_bool == 0) goto Label_1599; // 0x63c JumpB
	var_140_bool = 0; // 0x63d MovB
	return 10; // 0x63e Return
	
Label_1599:
	var_150_int = 0; // 0x63f MovI
	var_167_int = 1; // 0x640 PushI
	var_168_bool = var_148_int > var_167_int; // 0x641 GT
	if(var_168_bool == 0) goto Label_1605; // 0x642 JumpB
	irand(var_150_int, var_148_int); // 0x643 Func
	
Label_1605:
	var_169_int = 1; // 0x645 PushI
	var_170_int = var_150_int + var_169_int; // 0x646 Add
	var_171_int = var_147_string + var_170_int; // 0x647 Add
	GetProperty(var_171_int, var_151_string); // 0x648 ObjFunc
	var_172_bool = 0; var_173_string = ""; // 0x64a PushV
	var_173_string = var_151_string; // 0x64b Mov
	func_1647(var_172_bool, var_173_string); // 0x64c NEW_2
	var_140_bool = var_172_bool; // 0x64d Mov
	return 10; // 0x64f Return
	
Label_1592:
	var_174_int = 1; // 0x638 PushI
	var_148_int = var_148_int + var_174_int; // 0x639 Add2
	goto Label_1582; // 0x63a Jump
}


func_1830()
{
	var_106_string = "d8q03"; // 0x727 PushS
	var_107_int = -1; // 0x728 PushI
	SetVariable(var_106_string, var_107_int); // 0x729 Func
	func_1991(); // 0x72c NEW_2
	return 0; // 0x72e Return
}


func_1839(var_78_object)
{
	var_80_string = "burah gives serum"; // 0x730 PushS
	Trace(var_80_string); // 0x731 Func
	var_81_object = Obj(); var_82_string = ""; var_83_int = 0; // 0x733 PushV
	var_81_object = var_78_object; // 0x734 Mov
	var_82_string = "burah_serum"; // 0x735 MovS
	var_83_int = 1; // 0x736 MovI
	func_1721(var_81_object, var_82_string, var_83_int); // 0x737 NEW_2
	return 0; // 0x739 Return
}


func_1850()
{
	var_124_string = "ood8Burah1"; // 0x73b PushS
	var_125_int = 1; // 0x73c PushI
	SetVariable(var_124_string, var_125_int); // 0x73d Func
	return 0; // 0x73f Return
}


func_1856(var_255_bool)
{
	var_257_int = 0; var_258_string = ""; // 0x741 PushV
	var_258_string = "d8q04"; // 0x742 MovS
	func_1685(var_257_int, var_258_string); // 0x743 NEW_2
	var_259_int = 1; // 0x745 PushI
	var_260_bool = var_257_int == var_259_int; // 0x746 Eq
	if(var_260_bool == 0) goto Label_1866; // 0x747 JumpB
	var_255_bool = 1; // 0x748 MovB
	return 0; // 0x749 Return
	
Label_1866:
	var_255_bool = 0; // 0x74a MovB
	return 0; // 0x74b Return
}


func_1352(var_45_bool)
{
	var_45_bool = 1; // 0x548 MovB
	return 0; // 0x549 Return
}


func_1354()
{
	StopAnimation(); // 0x54a Func
	StopGroup0(); // 0x54c Func
	return 0; // 0x54e Return
}


func_1868(var_261_bool)
{
	var_263_int = 0; var_264_string = ""; // 0x74d PushV
	var_264_string = "ood8Burah2"; // 0x74e MovS
	func_1685(var_263_int, var_264_string); // 0x74f NEW_2
	var_265_int = 0; // 0x751 PushI
	var_266_bool = var_263_int == var_265_int; // 0x752 Eq
	if(var_266_bool == 0) goto Label_1878; // 0x753 JumpB
	var_261_bool = 1; // 0x754 MovB
	return 0; // 0x755 Return
	
Label_1878:
	var_261_bool = 0; // 0x756 MovB
	return 0; // 0x757 Return
}


func_1359(var_22_float)
{
	var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); // 0x54f PushV
	GetPosition(var_27_cvector); // 0x550 Func
	GetPosition(var_28_cvector); // 0x552 ObjFunc
	var_29_cvector = var_28_cvector - var_27_cvector; // 0x554 Sub2
	var_22_float = var_29_cvector | var_29_cvector; // 0x555 Or2
	return 6; // 0x556 Return
}


func_1616(var_294_string)
{
	var_295_bool = 0; var_296_float = 0; var_297_float = 0; var_298_bool = 0; var_299_float = 0; var_300_float = 0; // 0x650 PushV
	lshHasAnimation(var_298_bool, var_294_string); // 0x651 Func
	var_301_bool = var_298_bool; // 0x653 Push
	if(var_301_bool == 0) goto Label_1627; // 0x654 JumpB
	lshGetAnimTimes(var_294_string, var_299_float, var_300_float); // 0x655 Func
	var_302_bool = 0; // 0x657 PushB
	lshPlayAnimation(var_299_float, var_300_float, var_302_bool); // 0x658 Func
	goto Label_1631; // 0x65a Jump
	
Label_1631:
	return 6; // 0x65f Return
	
Label_1627:
	var_303_string = "Can't find lsh animation : "; // 0x65b PushS
	var_304_int = var_303_string + var_294_string; // 0x65c Add
	Trace(var_304_int); // 0x65d Func
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_193_object, var_194_object)
{
	var_0_object = var_194_object; // 0x52 TMov
	var_1_object = var_193_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_199_int = 1; // 0x55 PushI
	if(var_199_int == 0) goto Label_186; // 0x56 JumpB
	var_200_string = ""; // 0x57 PushV
	var_200_string = "Neutral"; // 0x58 MovS
	func_216(var_194_object, var_200_string); // 0x59 NEW_2
	var_217_int = 513423; // 0x5b PushI
	SetMessage(var_217_int); // 0x5c TObjFunc
	ClearReplies(); // 0x5e TObjFunc
	var_218_bool = 0; var_219_object = Obj(); // 0x60 PushV
	var_219_object = var_1_object; // 0x61 MovT
	func_1904(var_219_object); // 0x62 NEW_2
	if(var_218_bool == 0) goto Label_106; // 0x64 JumpB
	var_226_int = 513424; // 0x65 PushI
	var_227_int = 14661; // 0x66 PushI
	var_228_int = 14660; // 0x67 PushI
	AddReply(var_226_int, var_227_int, var_228_int); // 0x68 TObjFunc
	
Label_106:
	var_229_bool = 0; // 0x6a PushV
	var_229_bool = 0; // 0x6b MovB
	var_230_bool = 0; var_231_object = Obj(); // 0x6c PushV
	var_231_object = var_1_object; // 0x6d MovT
	func_1916(var_231_object); // 0x6e NEW_2
	if(var_230_bool == 0) goto Label_119; // 0x70 JumpB
	var_236_bool = 0; var_237_object = Obj(); // 0x71 PushV
	var_237_object = var_1_object; // 0x72 MovT
	func_1928(var_237_object); // 0x73 NEW_2
	if(var_236_bool == 0) goto Label_119; // 0x75 JumpB
	var_229_bool = 1; // 0x76 MovB
	
Label_119:
	if(var_229_bool == 0) goto Label_125; // 0x77 JumpB
	var_242_int = 513447; // 0x78 PushI
	var_243_int = 37690; // 0x79 PushI
	var_244_int = 14683; // 0x7a PushI
	AddReply(var_242_int, var_243_int, var_244_int); // 0x7b TObjFunc
	
Label_125:
	var_245_bool = 0; var_246_object = Obj(); // 0x7d PushV
	var_246_object = var_1_object; // 0x7e MovT
	func_1940(var_246_object); // 0x7f NEW_2
	if(var_245_bool == 0) goto Label_135; // 0x81 JumpB
	var_251_int = 513433; // 0x82 PushI
	var_252_int = 14670; // 0x83 PushI
	var_253_int = 14669; // 0x84 PushI
	AddReply(var_251_int, var_252_int, var_253_int); // 0x85 TObjFunc
	
Label_135:
	var_254_bool = 0; // 0x87 PushV
	var_254_bool = 0; // 0x88 MovB
	var_255_bool = 0; var_256_object = Obj(); // 0x89 PushV
	var_256_object = var_1_object; // 0x8a MovT
	func_1856(var_256_object); // 0x8b NEW_2
	if(var_255_bool == 0) goto Label_148; // 0x8d JumpB
	var_261_bool = 0; var_262_object = Obj(); // 0x8e PushV
	var_262_object = var_1_object; // 0x8f MovT
	func_1868(var_262_object); // 0x90 NEW_2
	if(var_261_bool == 0) goto Label_148; // 0x92 JumpB
	var_254_bool = 1; // 0x93 MovB
	
Label_148:
	if(var_254_bool == 0) goto Label_154; // 0x94 JumpB
	var_267_int = 535977; // 0x95 PushI
	var_268_int = 37706; // 0x96 PushI
	var_269_int = 37705; // 0x97 PushI
	AddReply(var_267_int, var_268_int, var_269_int); // 0x98 TObjFunc
	
Label_154:
	var_270_bool = 0; // 0x9a PushV
	var_270_bool = 0; // 0x9b MovB
	var_271_bool = 0; var_272_object = Obj(); // 0x9c PushV
	var_272_object = var_1_object; // 0x9d MovT
	func_1880(var_272_object); // 0x9e NEW_2
	if(var_271_bool == 0) goto Label_167; // 0xa0 JumpB
	var_277_bool = 0; var_278_object = Obj(); // 0xa1 PushV
	var_278_object = var_1_object; // 0xa2 MovT
	func_1892(var_278_object); // 0xa3 NEW_2
	if(var_277_bool == 0) goto Label_167; // 0xa5 JumpB
	var_270_bool = 1; // 0xa6 MovB
	
Label_167:
	if(var_270_bool == 0) goto Label_173; // 0xa7 JumpB
	var_283_int = 538666; // 0xa8 PushI
	var_284_int = 40565; // 0xa9 PushI
	var_285_int = 40564; // 0xaa PushI
	AddReply(var_283_int, var_284_int, var_285_int); // 0xab TObjFunc
	
Label_173:
	var_286_int = 513460; // 0xad PushI
	var_287_int = -1; // 0xae PushI
	var_288_int = 14697; // 0xaf PushI
	AddReply(var_286_int, var_287_int, var_288_int); // 0xb0 TObjFunc
	var_289_int = 535944; // 0xb2 PushI
	var_290_int = -1; // 0xb3 PushI
	var_291_int = 37665; // 0xb4 PushI
	AddReply(var_289_int, var_290_int, var_291_int); // 0xb5 TObjFunc
	goto Label_186; // 0xb7 Jump
	
Label_186:
	var_292_bool = 0; // 0xba PushV
	func_2070(var_292_bool); // 0xbb NEW_2
	if(var_292_bool == 0) goto Label_201; // 0xbd JumpB
	
Label_190:
	lshWaitForAnimEnd(); // 0xbe Func
	var_293_string = var_3_string; // 0xc0 PushT
	if(var_293_string == 0) goto Label_195; // 0xc1 JumpB
	goto Label_200; // 0xc2 Jump
	
Label_200:
	goto Label_215; // 0xc8 Jump
	
Label_215:
	return 0; // 0xd7 Return
	
Label_195:
	var_294_string = ""; // 0xc3 PushV
	var_294_string = var_2_object; // 0xc4 MovT
	func_1616(var_294_string); // 0xc5 NEW_2
	goto Label_190; // 0xc7 Jump
	
Label_201:
	var_305_string = "all"; // 0xc9 PushS
	var_306_string = "idle"; // 0xca PushS
	PlayAnimation(var_305_string, var_306_string); // 0xcb Func
	
Label_205:
	WaitForAnimEnd(); // 0xcd Func
	var_307_string = var_3_string; // 0xcf PushT
	if(var_307_string == 0) goto Label_210; // 0xd0 JumpB
	goto Label_215; // 0xd1 Jump
	
Label_210:
	var_308_string = "all"; // 0xd2 PushS
	var_309_string = "idle"; // 0xd3 PushS
	PlayAnimation(var_308_string, var_309_string); // 0xd4 Func
	goto Label_205; // 0xd6 Jump
}


func_1107(var_0_object)
{
	var_7_bool = 0; // 0x453 PushV
	func_1386(var_7_bool); // 0x454 NEW_2
	var_10_bool = var_7_bool == 0; // 0x456 Not
	if(var_10_bool == 0) goto Label_1114; // 0x457 JumpB
	Hold(); // 0x458 Func
	
Label_1114:
	GetDirection(var_0_object); // 0x45a Func
	
Label_1116:
	func_1283(); // 0x45d NEW_2
	goto Label_1116; // 0x45f Jump
}


func_1367(var_15_bool, var_16_cvector)
{
	var_17_cvector = CVector(0,0,0); var_18_cvector = CVector(0,0,0); var_19_bool = 0; var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_bool = 0; // 0x557 PushV
	GetPosition(var_20_cvector); // 0x558 Func
	var_21_cvector = var_16_cvector - var_20_cvector; // 0x55a Sub2
	var_23_float = GetByIndex(var_21_cvector, 0); // 0x55b PushE
	var_24_float = GetByIndex(var_21_cvector, 2); // 0x55c PushE
	Rotate(var_23_float, var_24_float, var_22_bool); // 0x55d Func
	var_15_bool = var_22_bool; // 0x55f Mov
	return 6; // 0x560 Return
}


func_1880(var_271_bool)
{
	var_273_int = 0; var_274_string = ""; // 0x759 PushV
	var_274_string = "d8BurahLetter"; // 0x75a MovS
	func_1685(var_273_int, var_274_string); // 0x75b NEW_2
	var_275_int = 0; // 0x75d PushI
	var_276_bool = var_273_int != var_275_int; // 0x75e Neq
	if(var_276_bool == 0) goto Label_1890; // 0x75f JumpB
	var_271_bool = 1; // 0x760 MovB
	return 0; // 0x761 Return
	
Label_1890:
	var_271_bool = 0; // 0x762 MovB
	return 0; // 0x763 Return
}


func_1632(var_204_string, var_205_bool)
{
	var_208_bool = 0; var_209_float = 0; var_210_float = 0; var_211_bool = 0; var_212_float = 0; var_213_float = 0; // 0x660 PushV
	lshHasAnimation(var_211_bool, var_204_string); // 0x661 Func
	var_214_bool = var_211_bool; // 0x663 Push
	if(var_214_bool == 0) goto Label_1642; // 0x664 JumpB
	lshGetAnimTimes(var_204_string, var_212_float, var_213_float); // 0x665 Func
	lshPlayAnimation(var_212_float, var_213_float, var_205_bool); // 0x667 Func
	goto Label_1646; // 0x669 Jump
	
Label_1646:
	return 6; // 0x66e Return
	
Label_1642:
	var_215_string = "Can't find lsh animation : "; // 0x66a PushS
	var_216_int = var_215_string + var_204_string; // 0x66b Add
	Trace(var_216_int); // 0x66c Func
}


func_1377(var_11_bool)
{
	var_13_cvector = CVector(0,0,0); var_14_cvector = CVector(0,0,0); // 0x561 PushV
	GetPosition(var_14_cvector); // 0x562 ObjFunc
	var_15_bool = 0; var_16_cvector = CVector(0,0,0); // 0x564 PushV
	var_16_cvector = var_14_cvector; // 0x565 Mov
	func_1367(var_15_bool, var_16_cvector); // 0x566 NEW_2
	var_11_bool = var_15_bool; // 0x567 Mov
	return 2; // 0x569 Return
}


func_1121(var_32_bool)
{
	var_33_object = Obj(); var_34_object = Obj(); // 0x461 PushV
	var_35_string = "player"; // 0x462 PushS
	FindActor(var_34_object, var_35_string); // 0x463 Func
	var_36_bool = var_34_object == 0; // 0x465 Not
	if(var_36_bool == 0) goto Label_1129; // 0x466 JumpB
	var_32_bool = 0; // 0x467 MovB
	return 2; // 0x468 Return
	
Label_1129:
	var_37_bool = 0; var_38_object = Obj(); // 0x469 PushV
	var_38_object = var_34_object; // 0x46a Mov
	func_1377(var_38_object); // 0x46b NEW_2
	var_32_bool = var_37_bool; // 0x46c Mov
	return 2; // 0x46e Return
}


func_1892(var_277_bool)
{
	var_279_int = 0; var_280_string = ""; // 0x765 PushV
	var_280_string = "ood8Burah3"; // 0x766 MovS
	func_1685(var_279_int, var_280_string); // 0x767 NEW_2
	var_281_int = 0; // 0x769 PushI
	var_282_bool = var_279_int == var_281_int; // 0x76a Eq
	if(var_282_bool == 0) goto Label_1902; // 0x76b JumpB
	var_277_bool = 1; // 0x76c MovB
	return 0; // 0x76d Return
	
Label_1902:
	var_277_bool = 0; // 0x76e MovB
	return 0; // 0x76f Return
}


func_1386(var_7_bool)
{
	var_8_bool = 0; var_9_bool = 0; // 0x56a PushV
	IsLoaded(var_9_bool); // 0x56b Func
	var_7_bool = var_9_bool; // 0x56d Mov
	return 2; // 0x56e Return
}


func_1391(var_37_bool, var_39_float)
{
	var_40_float = 0; var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_bool = 0; var_48_bool = 0; var_49_float = 0; var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); var_56_bool = 0; var_57_bool = 0; // 0x56f PushV
	GetPosition(var_50_cvector); // 0x570 ObjFunc
	GetEyesHeight(var_49_float); // 0x572 ObjFunc
	var_58_float = GetByIndex(var_50_cvector, 1); // 0x574 PushE
	var_58_float = var_58_float + var_49_float; // 0x575 Add2
	SetByIndex(var_50_cvector, 1) = var_58_float; // 0x576 PopE
	GetPosition(var_51_cvector); // 0x577 Func
	GetEyesHeight(var_49_float); // 0x579 Func
	var_59_float = GetByIndex(var_51_cvector, 1); // 0x57b PushE
	var_59_float = var_59_float + var_49_float; // 0x57c Add2
	SetByIndex(var_51_cvector, 1) = var_59_float; // 0x57d PopE
	var_52_cvector = var_50_cvector - var_51_cvector; // 0x57e Sub2
	var_60_float = GetByIndex(var_52_cvector, 1); // 0x57f PushE
	var_60_float = 0; // 0x580 MovI
	SetByIndex(var_52_cvector, 1) = var_60_float; // 0x581 PopE
	var_61_int = var_52_cvector | var_52_cvector; // 0x582 Or
	var_62_float = sqrt(var_61_int); // 0x583 Sqrt
	var_52_cvector = var_52_cvector / var_52_cvector; // 0x584 Div2
	var_53_cvector = -var_52_cvector; // 0x585 Neg2
	var_63_float = var_52_cvector * var_39_float; // 0x586 Mult
	var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); // 0x587 PushV
	var_66_cvector = CVector(0.0, 1.0, 0.0); // 0x588 PushVec
	var_65_cvector = var_53_cvector ^ var_66_cvector; // 0x589 Xor2
	func_1675(var_64_cvector, var_65_cvector); // 0x58a NEW_2
	var_72_int = 25; // 0x58c PushI
	var_73_float = var_64_cvector * var_72_int; // 0x58d Mult
	var_74_int = var_63_float + var_73_float; // 0x58e Add
	var_75_cvector = CVector(0.0, 10.0, 0.0); // 0x58f PushVec
	var_54_cvector = var_74_int - var_75_cvector; // 0x590 Sub2
	var_55_cvector = var_51_cvector + var_54_cvector; // 0x591 Add2
	IsOverrideActive(var_56_bool); // 0x592 Func
	var_76_bool = var_56_bool; // 0x594 Push
	if(var_76_bool == 0) goto Label_1432; // 0x595 JumpB
	var_37_bool = 0; // 0x596 MovB
	return 18; // 0x597 Return
	
Label_1432:
	StopWorld(); // 0x598 Func
	var_77_bool = 1; // 0x59a PushB
	CameraTransit(var_55_cvector, var_53_cvector, var_77_bool); // 0x59b Func
	var_78_float = GetByIndex(var_54_cvector, 0); // 0x59d PushE
	var_79_float = GetByIndex(var_54_cvector, 2); // 0x59e PushE
	Rotate(var_78_float, var_79_float); // 0x59f Func
	var_80_bool = 0; // 0x5a1 PushV
	func_2070(var_80_bool); // 0x5a2 NEW_2
	if(var_80_bool == 0) goto Label_1446; // 0x5a4 JumpB
	goto Label_1454; // 0x5a5 Jump
	
Label_1454:
	CameraWaitForPlayFinish(); // 0x5ae Func
	ResumeWorld(); // 0x5b0 Func
	var_37_bool = 1; // 0x5b2 MovB
	return 18; // 0x5b3 Return
	
Label_1446:
	var_81_string = "head"; // 0x5a6 PushS
	HasAnimationTrack(var_57_bool, var_81_string); // 0x5a7 Func
	var_82_bool = var_57_bool; // 0x5a9 Push
	if(var_82_bool == 0) goto Label_1454; // 0x5aa JumpB
	var_83_string = "head"; // 0x5ab PushS
	LookAsyncCamera(var_83_string); // 0x5ac Func
}


func_1904(var_218_bool)
{
	var_220_int = 0; var_221_string = ""; // 0x771 PushV
	var_221_string = "d8q03"; // 0x772 MovS
	func_1685(var_220_int, var_221_string); // 0x773 NEW_2
	var_224_int = 0; // 0x775 PushI
	var_225_bool = var_220_int == var_224_int; // 0x776 Eq
	if(var_225_bool == 0) goto Label_1914; // 0x777 JumpB
	var_218_bool = 1; // 0x778 MovB
	return 0; // 0x779 Return
	
Label_1914:
	var_218_bool = 0; // 0x77a MovB
	return 0; // 0x77b Return
}


func_1136(var_0_object)
{
	var_84_float = GetByIndex(var_0_object, 0); // 0x470 PushE
	var_85_float = GetByIndex(var_0_object, 2); // 0x471 PushE
	RotateAsync(var_84_float, var_85_float); // 0x472 Func
	return 0; // 0x474 Return
}


func_1647(var_132_bool, var_133_string)
{
	var_134_bool = 0; var_135_bool = 0; // 0x66f PushV
	var_136_bool = 0; // 0x670 PushV
	func_2070(var_136_bool); // 0x671 NEW_2
	if(var_136_bool == 0) goto Label_1660; // 0x673 JumpB
	lshHasSpeech(var_135_bool, var_133_string); // 0x674 Func
	var_137_bool = var_135_bool; // 0x676 Push
	if(var_137_bool == 0) goto Label_1660; // 0x677 JumpB
	lshPlaySpeech(var_133_string); // 0x678 Func
	var_132_bool = 1; // 0x67a MovB
	return 2; // 0x67b Return
	
Label_1660:
	var_132_bool = 0; // 0x67c MovB
	return 2; // 0x67d Return
}


func_1141(var_15_bool)
{
	var_16_object = Obj(); var_17_bool = 0; var_18_object = Obj(); var_19_bool = 0; // 0x475 PushV
	var_20_string = "player"; // 0x476 PushS
	FindActor(var_18_object, var_20_string); // 0x477 Func
	var_21_bool = var_18_object == 0; // 0x479 Not
	if(var_21_bool == 0) goto Label_1149; // 0x47a JumpB
	var_15_bool = 0; // 0x47b MovB
	return 4; // 0x47c Return
	
Label_1149:
	var_22_float = 0; var_23_object = Obj(); // 0x47d PushV
	var_23_object = var_18_object; // 0x47e Mov
	func_1359(var_23_object); // 0x47f NEW_2
	var_30_float = 90000.0; // 0x481 PushF
	var_31_bool = var_22_float > var_30_float; // 0x482 GT
	if(var_31_bool == 0) goto Label_1158; // 0x483 JumpB
	var_15_bool = 0; // 0x484 MovB
	return 4; // 0x485 Return
	
Label_1158:
	CanSee(var_19_bool, var_18_object); // 0x486 Func
	var_15_bool = var_19_bool; // 0x488 Mov
	return 4; // 0x489 Return
}


func_1916(var_230_bool)
{
	var_232_int = 0; var_233_string = ""; // 0x77d PushV
	var_233_string = "microscope_d8q03_blood"; // 0x77e MovS
	func_1685(var_232_int, var_233_string); // 0x77f NEW_2
	var_234_int = 1; // 0x781 PushI
	var_235_bool = var_232_int == var_234_int; // 0x782 Eq
	if(var_235_bool == 0) goto Label_1926; // 0x783 JumpB
	var_230_bool = 1; // 0x784 MovB
	return 0; // 0x785 Return
	
Label_1926:
	var_230_bool = 0; // 0x786 MovB
	return 0; // 0x787 Return
}


func_1662()
{
	var_10_bool = 0; // 0x67e PushV
	func_2070(var_10_bool); // 0x67f NEW_2
	if(var_10_bool == 0) goto Label_1668; // 0x681 JumpB
	lshStopSpeech(); // 0x682 Func
	
Label_1668:
	return 0; // 0x684 Return
}


func_1669(var_100_object)
{
	var_101_object = Obj(); var_102_object = Obj(); // 0x685 PushV
	self(var_102_object); // 0x686 Func
	var_100_object = var_102_object; // 0x688 Mov
	return 2; // 0x689 Return
}


func_1928(var_236_bool)
{
	var_238_int = 0; var_239_string = ""; // 0x789 PushV
	var_239_string = "d8q03"; // 0x78a MovS
	func_1685(var_238_int, var_239_string); // 0x78b NEW_2
	var_240_int = 1; // 0x78d PushI
	var_241_bool = var_238_int == var_240_int; // 0x78e Eq
	if(var_241_bool == 0) goto Label_1938; // 0x78f JumpB
	var_236_bool = 1; // 0x790 MovB
	return 0; // 0x791 Return
	
Label_1938:
	var_236_bool = 0; // 0x792 MovB
	return 0; // 0x793 Return
}


func_1163()
{
	var_321_float = 0; var_322_float = 0; // 0x48b PushV
	var_323_int = 8; // 0x48c PushI
	var_324_int = 16; // 0x48d PushI
	rand(var_322_float, var_323_int, var_324_int); // 0x48e Func
	var_325_int = 10; // 0x490 PushI
	SetTimer(var_325_int, var_322_float); // 0x491 Func
	return 2; // 0x493 Return
}


func_1675(var_64_cvector, var_65_cvector)
{
	var_67_float = 0; var_68_float = 0; // 0x68b PushV
	var_69_int = var_65_cvector | var_65_cvector; // 0x68c Or
	var_68_float = sqrt(var_69_int); // 0x68d Sqrt2
	var_70_float = 0.0; // 0x68e PushF
	var_71_bool = var_68_float < var_70_float; // 0x68f LT
	if(var_71_bool == 0) goto Label_1683; // 0x690 JumpB
	var_64_cvector = CVector(0.0, 0.0, 0.0); // 0x691 MovV
	return 2; // 0x692 Return
	
Label_1683:
	var_64_cvector = var_65_cvector / var_65_cvector; // 0x693 Div2
	return 2; // 0x694 Return
}


func_1940(var_245_bool)
{
	var_247_int = 0; var_248_string = ""; // 0x795 PushV
	var_248_string = "ood8Burah1"; // 0x796 MovS
	func_1685(var_247_int, var_248_string); // 0x797 NEW_2
	var_249_int = 0; // 0x799 PushI
	var_250_bool = var_247_int == var_249_int; // 0x79a Eq
	if(var_250_bool == 0) goto Label_1950; // 0x79b JumpB
	var_245_bool = 1; // 0x79c MovB
	return 0; // 0x79d Return
	
Label_1950:
	var_245_bool = 0; // 0x79e MovB
	return 0; // 0x79f Return
}


func_1172()
{
	var_320_int = 10; // 0x494 PushI
	KillTimer(var_320_int); // 0x495 Func
	return 0; // 0x497 Return
}


func_1685(var_220_int, var_221_string)
{
	var_222_int = 0; var_223_int = 0; // 0x695 PushV
	GetVariable(var_221_string, var_223_int); // 0x696 Func
	var_220_int = var_223_int; // 0x698 Mov
	return 2; // 0x699 Return
}


func_1690(var_67_int, var_68_int)
{
	var_69_object = Obj(); var_70_object = Obj(); // 0x69a PushV
	CreateIntVector(var_70_object); // 0x69b Func
	add(var_67_int); // 0x69d ObjFunc
	add(var_68_int); // 0x69f ObjFunc
	var_71_int = 3; // 0x6a1 PushI
	SendWorldWndMessage(var_71_int, var_70_object); // 0x6a2 Func
	return 2; // 0x6a4 Return
}


func_1952()
{
	var_17_object = Obj(); var_18_object = Obj(); // 0x7a0 PushV
	var_19_int = 124; // 0x7a1 PushI
	var_20_int = 2; // 0x7a2 PushI
	var_21_int = 513763; // 0x7a3 PushI
	CreateDiaryEntry(var_18_object, var_19_int, var_20_int, var_21_int); // 0x7a4 Func
	var_22_bool = 0; var_23_object = Obj(); var_24_int = 0; // 0x7a6 PushV
	var_23_object = var_18_object; // 0x7a7 Mov
	var_24_int = -1; // 0x7a8 MovI
	func_2017(var_22_bool, var_23_object, var_24_int); // 0x7a9 NEW_2
	return 2; // 0x7ab Return
}


func_1702(var_57_object, var_58_int)
{
	var_59_int = 0; var_60_int = 0; var_61_bool = 0; var_62_int = 0; var_63_int = 0; var_64_bool = 0; // 0x6a6 PushV
	GetItemID(var_62_int); // 0x6a7 ObjFunc
	var_65_string = "Category"; // 0x6a9 PushS
	GetInvItemProperty(var_63_int, var_62_int, var_65_string); // 0x6aa Func
	AddItem(var_64_bool, var_57_object, var_63_int, var_58_int); // 0x6ac ObjFunc
	var_66_bool = var_64_bool == 0; // 0x6ae Not
	if(var_66_bool == 0) goto Label_1715; // 0x6af JumpB
	DropItems(var_57_object, var_58_int); // 0x6b0 ObjFunc
	goto Label_1720; // 0x6b2 Jump
	
Label_1720:
	return 6; // 0x6b8 Return
	
Label_1715:
	var_67_int = 0; var_68_int = 0; // 0x6b3 PushV
	var_67_int = var_62_int; // 0x6b4 Mov
	var_68_int = var_58_int; // 0x6b5 Mov
	func_1690(var_67_int, var_68_int); // 0x6b6 NEW_2
}


func_1965()
{
	var_40_object = Obj(); var_41_object = Obj(); // 0x7ad PushV
	var_42_int = 770; // 0x7ae PushI
	var_43_int = 2; // 0x7af PushI
	var_44_int = 540199; // 0x7b0 PushI
	CreateDiaryEntry(var_41_object, var_42_int, var_43_int, var_44_int); // 0x7b1 Func
	var_45_bool = 0; var_46_object = Obj(); var_47_int = 0; // 0x7b3 PushV
	var_46_object = var_41_object; // 0x7b4 Mov
	var_47_int = 124; // 0x7b5 MovI
	func_2017(var_45_bool, var_46_object, var_47_int); // 0x7b6 NEW_2
	return 2; // 0x7b8 Return
}


func_1460()
{
	var_312_bool = 0; var_313_bool = 0; // 0x5b4 PushV
	var_314_bool = 1; // 0x5b5 PushB
	CameraSwitchToNormal(var_314_bool); // 0x5b6 Func
	var_315_bool = 0; // 0x5b8 PushV
	func_2070(var_315_bool); // 0x5b9 NEW_2
	if(var_315_bool == 0) goto Label_1469; // 0x5bb JumpB
	goto Label_1477; // 0x5bc Jump
	
Label_1477:
	return 2; // 0x5c5 Return
	
Label_1469:
	var_316_string = "head"; // 0x5bd PushS
	HasAnimationTrack(var_313_bool, var_316_string); // 0x5be Func
	var_317_bool = var_313_bool; // 0x5c0 Push
	if(var_317_bool == 0) goto Label_1477; // 0x5c1 JumpB
	var_318_string = "head"; // 0x5c2 PushS
	UnlookAsync(var_318_string); // 0x5c3 Func
}


func_1721(var_51_object, var_52_string, var_53_int)
{
	var_54_object = Obj(); var_55_object = Obj(); // 0x6b9 PushV
	CreateInvItem(var_55_object); // 0x6ba Func
	SetItemName(var_52_string); // 0x6bc ObjFunc
	var_56_object = Obj(); var_57_object = Obj(); var_58_int = 0; // 0x6be PushV
	var_56_object = var_51_object; // 0x6bf Mov
	var_57_object = var_55_object; // 0x6c0 Mov
	var_58_int = var_53_int; // 0x6c1 Mov
	func_1702(var_57_object, var_58_int); // 0x6c2 NEW_2
	return 2; // 0x6c4 Return
}


func_1978()
{
	var_88_object = Obj(); var_89_object = Obj(); // 0x7ba PushV
	var_90_int = 125; // 0x7bb PushI
	var_91_int = 2; // 0x7bc PushI
	var_92_int = 513764; // 0x7bd PushI
	CreateDiaryEntry(var_89_object, var_90_int, var_91_int, var_92_int); // 0x7be Func
	var_93_bool = 0; var_94_object = Obj(); var_95_int = 0; // 0x7c0 PushV
	var_94_object = var_89_object; // 0x7c1 Mov
	var_95_int = 124; // 0x7c2 MovI
	func_2017(var_93_bool, var_94_object, var_95_int); // 0x7c3 NEW_2
	return 2; // 0x7c5 Return
}


func_1214()
{
	func_1354(); // 0x4bf NEW_2
	func_1172(); // 0x4c2 NEW_2
	lshStopSpeech(); // 0x4c4 Func
	lshStopAnimation(); // 0x4c6 Func
	StopAsync(); // 0x4c8 Func
	Hold(); // 0x4ca Func
	return 0; // 0x4cc Return
}


func_1478(var_98_bool, var_99_object)
{
	var_103_int = 0; var_104_int = 0; var_105_int = 0; var_106_int = 0; // 0x5c6 PushV
	var_107_string = "voice_common"; // 0x5c7 PushS
	GetVariable(var_107_string, var_105_int); // 0x5c8 Func
	var_108_int = var_105_int; // 0x5ca Push
	if(var_108_int == 0) goto Label_1516; // 0x5cb JumpB
	var_109_bool = 0; var_110_object = Obj(); // 0x5cc PushV
	var_110_object = var_99_object; // 0x5cd Mov
	func_1536(var_110_object); // 0x5ce NEW_2
	var_139_bool = var_109_bool == 0; // 0x5d0 Not
	if(var_139_bool == 0) goto Label_1498; // 0x5d1 JumpB
	var_140_bool = 0; var_141_object = Obj(); // 0x5d2 PushV
	var_141_object = var_99_object; // 0x5d3 Mov
	func_1573(var_141_object); // 0x5d4 NEW_2
	var_175_bool = var_140_bool == 0; // 0x5d6 Not
	if(var_175_bool == 0) goto Label_1498; // 0x5d7 JumpB
	var_98_bool = 0; // 0x5d8 MovB
	return 4; // 0x5d9 Return
	
Label_1498:
	var_176_int = 2; // 0x5da PushI
	irand(var_106_int, var_176_int); // 0x5db Func
	var_177_int = var_106_int; // 0x5dd Push
	if(var_177_int == 0) goto Label_1511; // 0x5de JumpB
	var_178_string = "voice_common"; // 0x5df PushS
	var_179_int = 1; // 0x5e0 PushI
	var_180_int = var_105_int + var_179_int; // 0x5e1 Add
	var_181_int = 3; // 0x5e2 PushI
	var_182_int = var_180_int / var_181_int; // 0x5e3 Mod
	SetVariable(var_178_string, var_182_int); // 0x5e4 Func
	goto Label_1515; // 0x5e6 Jump
	
Label_1515:
	goto Label_1534; // 0x5eb Jump
	
Label_1534:
	var_98_bool = 1; // 0x5fe MovB
	return 4; // 0x5ff Return
	
Label_1511:
	var_183_string = "voice_common"; // 0x5e7 PushS
	var_184_int = 0; // 0x5e8 PushI
	SetVariable(var_183_string, var_184_int); // 0x5e9 Func
	
Label_1516:
	var_185_bool = 0; var_186_object = Obj(); // 0x5ec PushV
	var_186_object = var_99_object; // 0x5ed Mov
	func_1573(var_186_object); // 0x5ee NEW_2
	var_187_bool = var_185_bool == 0; // 0x5f0 Not
	if(var_187_bool == 0) goto Label_1530; // 0x5f1 JumpB
	var_188_bool = 0; var_189_object = Obj(); // 0x5f2 PushV
	var_189_object = var_99_object; // 0x5f3 Mov
	func_1536(var_189_object); // 0x5f4 NEW_2
	var_190_bool = var_188_bool == 0; // 0x5f6 Not
	if(var_190_bool == 0) goto Label_1530; // 0x5f7 JumpB
	var_98_bool = 0; // 0x5f8 MovB
	return 4; // 0x5f9 Return
	
Label_1530:
	var_191_string = "voice_common"; // 0x5fa PushS
	var_192_int = 1; // 0x5fb PushI
	SetVariable(var_191_string, var_192_int); // 0x5fc Func
}


func_1734(var_96_bool, var_97_string, var_98_string)
{
	var_99_object = Obj(); var_100_object = Obj(); // 0x6c6 PushV
	FindActor(var_100_object, var_97_string); // 0x6c7 Func
	var_101_bool = var_100_object == 0; // 0x6c9 NullEq
	if(var_101_bool == 0) goto Label_1741; // 0x6ca JumpB
	var_96_bool = 0; // 0x6cb MovB
	return 2; // 0x6cc Return
	
Label_1741:
	Trigger(var_100_object, var_98_string); // 0x6cd Func
	var_96_bool = 1; // 0x6cf MovB
	return 2; // 0x6d0 Return
}


func_1991()
{
	var_108_object = Obj(); var_109_object = Obj(); // 0x7c7 PushV
	var_110_int = 126; // 0x7c8 PushI
	var_111_int = 2; // 0x7c9 PushI
	var_112_int = 513765; // 0x7ca PushI
	CreateDiaryEntry(var_109_object, var_110_int, var_111_int, var_112_int); // 0x7cb Func
	var_113_bool = 0; var_114_object = Obj(); var_115_int = 0; // 0x7cd PushV
	var_114_object = var_109_object; // 0x7ce Mov
	var_115_int = 124; // 0x7cf MovI
	func_2017(var_113_bool, var_114_object, var_115_int); // 0x7d0 NEW_2
	return 2; // 0x7d2 Return
}


func_1229()
{
	StopGroup0(); // 0x4cd Func
	func_1172(); // 0x4d0 NEW_2
	var_8_string = ""; // 0x4d2 PushV
	var_8_string = "Neutral"; // 0x4d3 MovS
	func_1616(var_8_string); // 0x4d4 NEW_2
	func_1163(); // 0x4d7 NEW_2
	return 0; // 0x4d9 Return
}


func_1746(var_153_int)
{
	var_154_float = 0; var_155_float = 0; // 0x6d2 PushV
	GetGameTime(var_155_float); // 0x6d3 Func
	var_156_int = 1; // 0x6d5 PushI
	var_157_int = 0; // 0x6d6 PushV
	var_158_int = 24; // 0x6d7 PushI
	var_157_int = var_155_float / var_155_float; // 0x6d8 Div2
	var_153_int = var_156_int + var_157_int; // 0x6d9 Add2
	return 2; // 0x6da Return
}


func_2004(var_31_object)
{
	var_32_object = Obj(); var_33_object = Obj(); // 0x7d4 PushV
	GetDiaryRoot(var_33_object); // 0x7d5 Func
	var_34_bool = var_33_object == 0; // 0x7d7 Not
	if(var_34_bool == 0) goto Label_2014; // 0x7d8 JumpB
	var_35_string = "Can't retrieve diary root"; // 0x7d9 PushS
	Trace(var_35_string); // 0x7da Func
	var_31_object = 0; // 0x7dc MovB
	return 2; // 0x7dd Return
	
Label_2014:
	var_31_object = var_33_object; // 0x7de Mov
	return 2; // 0x7df Return
}


func_216(var_2_object, var_200_string)
{
	var_201_bool = 0; // 0xd9 PushV
	func_2070(var_201_bool); // 0xda NEW_2
	var_202_bool = var_201_bool == 0; // 0xdc Not
	if(var_202_bool == 0) goto Label_223; // 0xdd JumpB
	return 0; // 0xde Return
	
Label_223:
	var_203_bool = var_200_string == var_2_object; // 0xdf Eq
	if(var_203_bool == 0) goto Label_226; // 0xe0 JumpB
	return 0; // 0xe1 Return
	
Label_226:
	var_204_string = ""; var_205_bool = 0; // 0xe2 PushV
	var_204_string = var_200_string; // 0xe3 Mov
	var_206_string = ""; // 0xe4 PushS
	var_207_bool = var_200_string == var_206_string; // 0xe5 Eq
	if(var_207_bool == 0) goto Label_233; // 0xe6 JumpB
	var_205_bool = 0; // 0xe7 MovB
	goto Label_234; // 0xe8 Jump
	
Label_234:
	func_1632(var_204_string, var_205_bool); // 0xea NEW_2
	var_2_object = var_200_string; // 0xec TMov
	return 0; // 0xed Return
	
Label_233:
	var_205_bool = 1; // 0xe9 MovB
}


func_1755(var_31_string, var_32_int)
{
	var_33_string = ""; var_34_string = ""; // 0x6db PushV
	var_34_string = "idle"; // 0x6dc MovS
	var_35_int = var_32_int; // 0x6dd Push
	if(var_35_int == 0) goto Label_1760; // 0x6de JumpB
	var_34_string = var_34_string + var_32_int; // 0x6df Add2
	
Label_1760:
	var_31_string = var_34_string; // 0x6e0 Mov
	return 2; // 0x6e1 Return
}


func_2017(var_22_bool, var_23_object, var_24_int)
{
	var_25_object = Obj(); var_26_object = Obj(); var_27_int = 0; var_28_object = Obj(); var_29_object = Obj(); var_30_int = 0; // 0x7e1 PushV
	var_31_object = Obj(); // 0x7e2 PushV
	func_2004(var_31_object); // 0x7e3 NEW_2
	var_28_object = var_31_object; // 0x7e4 Mov
	Find(var_24_int, var_29_object); // 0x7e6 ObjFunc
	var_36_bool = var_29_object == 0; // 0x7e8 Not
	if(var_36_bool == 0) goto Label_2032; // 0x7e9 JumpB
	var_37_string = "Can't find diary parent with id: "; // 0x7ea PushS
	var_38_int = var_37_string + var_24_int; // 0x7eb Add
	Trace(var_38_int); // 0x7ec Func
	var_22_bool = 0; // 0x7ee MovB
	return 6; // 0x7ef Return
	
Label_2032:
	AddChild(var_23_object); // 0x7f0 ObjFunc
	var_39_int = 7; // 0x7f2 PushI
	SendWorldWndMessage(var_39_int); // 0x7f3 Func
	GetCategory(var_30_int); // 0x7f5 ObjFunc
	SetDiarySection(var_30_int); // 0x7f7 Func
	var_22_bool = 0; // 0x7f9 MovB
	return 6; // 0x7fa Return
}


func_1762(var_25_int)
{
	var_26_int = 0; var_27_bool = 0; var_28_int = 0; var_29_bool = 0; // 0x6e2 PushV
	var_28_int = 0; // 0x6e3 MovI
	
Label_1764:
	var_30_string = "all"; // 0x6e4 PushS
	var_31_string = ""; var_32_int = 0; // 0x6e5 PushV
	var_32_int = var_28_int; // 0x6e6 Mov
	func_1755(var_31_string, var_32_int); // 0x6e7 NEW_2
	HasAnimation(var_29_bool, var_30_string, var_31_string); // 0x6e9 Func
	var_36_bool = var_29_bool == 0; // 0x6eb Not
	if(var_36_bool == 0) goto Label_1774; // 0x6ec JumpB
	goto Label_1777; // 0x6ed Jump
	
Label_1777:
	var_25_int = var_28_int; // 0x6f1 Mov
	return 4; // 0x6f2 Return
	
Label_1774:
	var_37_int = 1; // 0x6ee PushI
	var_28_int = var_28_int + var_37_int; // 0x6ef Add2
	goto Label_1764; // 0x6f0 Jump
}


func_1779()
{
	var_74_string = "playsound"; // 0x6f4 PushS
	var_75_string = "giveitem"; // 0x6f5 PushS
	TriggerWorld(var_74_string, var_75_string); // 0x6f6 Func
	return 0; // 0x6f8 Return
}


func_1785()
{
	var_130_string = "ood8Burah2"; // 0x6fa PushS
	var_131_int = 1; // 0x6fb PushI
	SetVariable(var_130_string, var_131_int); // 0x6fc Func
	return 0; // 0x6fe Return
}


func_2045(var_89_int)
{
	var_90_int = 0; var_91_int = 0; // 0x7fd PushV
	var_92_string = "branch"; // 0x7fe PushS
	GetVariable(var_92_string, var_91_int); // 0x7ff Func
	var_93_int = 0; // 0x801 PushI
	var_94_bool = var_91_int == var_93_int; // 0x802 Eq
	if(var_94_bool == 0) goto Label_2055; // 0x803 JumpB
	var_89_int = 1; // 0x804 MovI
	return 2; // 0x805 Return
	
Label_2055:
	var_95_int = 1; // 0x807 PushI
	var_96_bool = var_91_int == var_95_int; // 0x808 Eq
	if(var_96_bool == 0) goto Label_2060; // 0x809 JumpB
	var_89_int = 2; // 0x80a MovI
	return 2; // 0x80b Return
	
Label_2060:
	var_89_int = 3; // 0x80c MovI
	return 2; // 0x80d Return
}


func_1791()
{
	var_136_string = "ood8Burah3"; // 0x700 PushS
	var_137_int = 1; // 0x701 PushI
	SetVariable(var_136_string, var_137_int); // 0x702 Func
	return 0; // 0x704 Return
}


