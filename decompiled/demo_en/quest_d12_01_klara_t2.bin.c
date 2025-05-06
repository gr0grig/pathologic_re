task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool)
{
	var_8_int = 1; // 0x113 PushI
	if(var_8_int == 0) goto Label_1153; // 0x114 JumpB
	func_1485(); // 0x116 NEW_2
	var_10_int = 37334; // 0x118 PushI
	var_11_bool = var_7_bool == var_10_int; // 0x119 Eq
	if(var_11_bool == 0) goto Label_288; // 0x11a JumpB
	var_12_object = Obj(); var_13_object = Obj(); // 0x11b PushV
	var_12_object = var_1_object; // 0x11c MovT
	var_13_object = var_0_object; // 0x11d MovT
	func_1537(); // 0x11e NEW_2
	
Label_288:
	var_45_int = 37337; // 0x120 PushI
	var_46_bool = var_7_bool == var_45_int; // 0x121 Eq
	if(var_46_bool == 0) goto Label_296; // 0x122 JumpB
	var_47_object = Obj(); var_48_object = Obj(); // 0x123 PushV
	var_47_object = var_1_object; // 0x124 MovT
	var_48_object = var_0_object; // 0x125 MovT
	func_1522(); // 0x126 NEW_2
	
Label_296:
	var_59_int = 42406; // 0x128 PushI
	var_60_bool = var_7_bool == var_59_int; // 0x129 Eq
	if(var_60_bool == 0) goto Label_304; // 0x12a JumpB
	var_61_object = Obj(); var_62_object = Obj(); // 0x12b PushV
	var_61_object = var_1_object; // 0x12c MovT
	var_62_object = var_0_object; // 0x12d MovT
	func_1537(); // 0x12e NEW_2
	
Label_304:
	var_63_int = 42408; // 0x130 PushI
	var_64_bool = var_7_bool == var_63_int; // 0x131 Eq
	if(var_64_bool == 0) goto Label_312; // 0x132 JumpB
	var_65_object = Obj(); var_66_object = Obj(); // 0x133 PushV
	var_65_object = var_1_object; // 0x134 MovT
	var_66_object = var_0_object; // 0x135 MovT
	func_1522(); // 0x136 NEW_2
	
Label_312:
	var_67_int = 37342; // 0x138 PushI
	var_68_bool = var_7_bool == var_67_int; // 0x139 Eq
	if(var_68_bool == 0) goto Label_320; // 0x13a JumpB
	var_69_object = Obj(); var_70_object = Obj(); // 0x13b PushV
	var_69_object = var_1_object; // 0x13c MovT
	var_70_object = var_0_object; // 0x13d MovT
	func_1522(); // 0x13e NEW_2
	
Label_320:
	var_71_int = 42418; // 0x140 PushI
	var_72_bool = var_7_bool == var_71_int; // 0x141 Eq
	if(var_72_bool == 0) goto Label_328; // 0x142 JumpB
	var_73_object = Obj(); var_74_object = Obj(); // 0x143 PushV
	var_73_object = var_1_object; // 0x144 MovT
	var_74_object = var_0_object; // 0x145 MovT
	func_1553(); // 0x146 NEW_2
	
Label_328:
	var_77_int = 42438; // 0x148 PushI
	var_78_bool = var_7_bool == var_77_int; // 0x149 Eq
	if(var_78_bool == 0) goto Label_336; // 0x14a JumpB
	var_79_object = Obj(); var_80_object = Obj(); // 0x14b PushV
	var_79_object = var_1_object; // 0x14c MovT
	var_80_object = var_0_object; // 0x14d MovT
	func_1559(); // 0x14e NEW_2
	
Label_336:
	var_83_int = 37331; // 0x150 PushI
	var_84_bool = var_6_int == var_83_int; // 0x151 Eq
	if(var_84_bool == 0) goto Label_472; // 0x152 JumpB
	var_85_bool = 0; // 0x153 PushV
	var_85_bool = 0; // 0x154 MovB
	var_86_bool = 0; var_87_object = Obj(); // 0x155 PushV
	var_87_object = var_1_object; // 0x156 MovT
	func_1583(var_87_object); // 0x157 NEW_2
	var_92_bool = var_86_bool == 0; // 0x159 Not
	if(var_92_bool == 0) goto Label_353; // 0x15a JumpB
	var_93_bool = 0; var_94_object = Obj(); // 0x15b PushV
	var_94_object = var_1_object; // 0x15c MovT
	func_1617(var_94_object); // 0x15d NEW_2
	if(var_93_bool == 0) goto Label_353; // 0x15f JumpB
	var_85_bool = 1; // 0x160 MovB
	
Label_353:
	if(var_85_bool == 0) goto Label_384; // 0x161 JumpB
	var_99_object = Obj(); var_100_object = Obj(); // 0x162 PushV
	var_99_object = var_1_object; // 0x163 MovT
	var_100_object = var_0_object; // 0x164 MovT
	func_1531(); // 0x165 NEW_2
	var_103_object = Obj(); var_104_object = Obj(); // 0x167 PushV
	var_103_object = var_1_object; // 0x168 MovT
	var_104_object = var_0_object; // 0x169 MovT
	func_1565(); // 0x16a NEW_2
	var_107_string = ""; // 0x16c PushV
	var_107_string = "Sly"; // 0x16d MovS
	func_252(var_7_bool, var_107_string); // 0x16e NEW_2
	var_124_int = 535645; // 0x170 PushI
	SetMessage(var_124_int); // 0x171 TObjFunc
	ClearReplies(); // 0x173 TObjFunc
	var_125_int = 540387; // 0x175 PushI
	var_126_int = 42374; // 0x176 PushI
	var_127_int = 42373; // 0x177 PushI
	AddReply(var_125_int, var_126_int, var_127_int); // 0x178 TObjFunc
	var_128_int = 540424; // 0x17a PushI
	var_129_int = 42403; // 0x17b PushI
	var_130_int = 42411; // 0x17c PushI
	AddReply(var_128_int, var_129_int, var_130_int); // 0x17d TObjFunc
	return 0; // 0x17f Return
	
Label_384:
	var_131_object = Obj(); var_132_object = Obj(); // 0x180 PushV
	var_131_object = var_1_object; // 0x181 MovT
	var_132_object = var_0_object; // 0x182 MovT
	func_1565(); // 0x183 NEW_2
	var_133_string = ""; // 0x185 PushV
	var_133_string = "Fear"; // 0x186 MovS
	func_252(var_7_bool, var_133_string); // 0x187 NEW_2
	var_134_int = 535653; // 0x189 PushI
	SetMessage(var_134_int); // 0x18a TObjFunc
	ClearReplies(); // 0x18c TObjFunc
	var_135_bool = 0; // 0x18e PushV
	var_135_bool = 0; // 0x18f MovB
	var_136_bool = 0; // 0x190 PushV
	var_136_bool = 0; // 0x191 MovB
	var_137_bool = 0; var_138_object = Obj(); // 0x192 PushV
	var_138_object = var_1_object; // 0x193 MovT
	func_1595(var_137_bool, var_138_object); // 0x194 NEW_2
	if(var_137_bool == 0) goto Label_414; // 0x196 JumpB
	var_185_bool = 0; var_186_object = Obj(); // 0x197 PushV
	var_186_object = var_1_object; // 0x198 MovT
	func_1605(var_186_object); // 0x199 NEW_2
	var_191_bool = var_185_bool == 0; // 0x19b Not
	if(var_191_bool == 0) goto Label_414; // 0x19c JumpB
	var_136_bool = 1; // 0x19d MovB
	
Label_414:
	if(var_136_bool == 0) goto Label_422; // 0x19e JumpB
	var_192_bool = 0; var_193_object = Obj(); // 0x19f PushV
	var_193_object = var_1_object; // 0x1a0 MovT
	func_1583(var_193_object); // 0x1a1 NEW_2
	var_194_bool = var_192_bool == 0; // 0x1a3 Not
	if(var_194_bool == 0) goto Label_422; // 0x1a4 JumpB
	var_135_bool = 1; // 0x1a5 MovB
	
Label_422:
	if(var_135_bool == 0) goto Label_428; // 0x1a6 JumpB
	var_195_int = 535654; // 0x1a7 PushI
	var_196_int = 37341; // 0x1a8 PushI
	var_197_int = 37340; // 0x1a9 PushI
	AddReply(var_195_int, var_196_int, var_197_int); // 0x1aa TObjFunc
	
Label_428:
	var_198_bool = 0; // 0x1ac PushV
	var_198_bool = 0; // 0x1ad MovB
	var_199_bool = 0; var_200_object = Obj(); // 0x1ae PushV
	var_200_object = var_1_object; // 0x1af MovT
	func_1653(var_200_object); // 0x1b0 NEW_2
	if(var_199_bool == 0) goto Label_441; // 0x1b2 JumpB
	var_205_bool = 0; var_206_object = Obj(); // 0x1b3 PushV
	var_206_object = var_1_object; // 0x1b4 MovT
	func_1629(var_206_object); // 0x1b5 NEW_2
	if(var_205_bool == 0) goto Label_441; // 0x1b7 JumpB
	var_198_bool = 1; // 0x1b8 MovB
	
Label_441:
	if(var_198_bool == 0) goto Label_447; // 0x1b9 JumpB
	var_211_int = 540429; // 0x1ba PushI
	var_212_int = 42419; // 0x1bb PushI
	var_213_int = 42418; // 0x1bc PushI
	AddReply(var_211_int, var_212_int, var_213_int); // 0x1bd TObjFunc
	
Label_447:
	var_214_bool = 0; // 0x1bf PushV
	var_214_bool = 0; // 0x1c0 MovB
	var_215_bool = 0; var_216_object = Obj(); // 0x1c1 PushV
	var_216_object = var_1_object; // 0x1c2 MovT
	func_1571(var_216_object); // 0x1c3 NEW_2
	if(var_215_bool == 0) goto Label_460; // 0x1c5 JumpB
	var_221_bool = 0; var_222_object = Obj(); // 0x1c6 PushV
	var_222_object = var_1_object; // 0x1c7 MovT
	func_1641(var_222_object); // 0x1c8 NEW_2
	if(var_221_bool == 0) goto Label_460; // 0x1ca JumpB
	var_214_bool = 1; // 0x1cb MovB
	
Label_460:
	if(var_214_bool == 0) goto Label_466; // 0x1cc JumpB
	var_227_int = 540447; // 0x1cd PushI
	var_228_int = 42439; // 0x1ce PushI
	var_229_int = 42438; // 0x1cf PushI
	AddReply(var_227_int, var_228_int, var_229_int); // 0x1d0 TObjFunc
	
Label_466:
	var_230_int = 540478; // 0x1d2 PushI
	var_231_int = -1; // 0x1d3 PushI
	var_232_int = 42473; // 0x1d4 PushI
	AddReply(var_230_int, var_231_int, var_232_int); // 0x1d5 TObjFunc
	return 0; // 0x1d7 Return
	
Label_472:
	var_233_int = 42439; // 0x1d8 PushI
	var_234_bool = var_6_int == var_233_int; // 0x1d9 Eq
	if(var_234_bool == 0) goto Label_495; // 0x1da JumpB
	var_235_string = ""; // 0x1db PushV
	var_235_string = "Smile"; // 0x1dc MovS
	func_252(var_7_bool, var_235_string); // 0x1dd NEW_2
	var_236_int = 540448; // 0x1df PushI
	SetMessage(var_236_int); // 0x1e0 TObjFunc
	ClearReplies(); // 0x1e2 TObjFunc
	var_237_int = 540449; // 0x1e4 PushI
	var_238_int = 42441; // 0x1e5 PushI
	var_239_int = 42440; // 0x1e6 PushI
	AddReply(var_237_int, var_238_int, var_239_int); // 0x1e7 TObjFunc
	var_240_int = 540461; // 0x1e9 PushI
	var_241_int = 42455; // 0x1ea PushI
	var_242_int = 42454; // 0x1eb PushI
	AddReply(var_240_int, var_241_int, var_242_int); // 0x1ec TObjFunc
	return 0; // 0x1ee Return
	
Label_495:
	var_243_int = 42455; // 0x1ef PushI
	var_244_bool = var_6_int == var_243_int; // 0x1f0 Eq
	if(var_244_bool == 0) goto Label_518; // 0x1f1 JumpB
	var_245_string = ""; // 0x1f2 PushV
	var_245_string = "Grin"; // 0x1f3 MovS
	func_252(var_7_bool, var_245_string); // 0x1f4 NEW_2
	var_246_int = 540462; // 0x1f6 PushI
	SetMessage(var_246_int); // 0x1f7 TObjFunc
	ClearReplies(); // 0x1f9 TObjFunc
	var_247_int = 540463; // 0x1fb PushI
	var_248_int = -1; // 0x1fc PushI
	var_249_int = 42456; // 0x1fd PushI
	AddReply(var_247_int, var_248_int, var_249_int); // 0x1fe TObjFunc
	var_250_int = 540464; // 0x200 PushI
	var_251_int = 42458; // 0x201 PushI
	var_252_int = 42457; // 0x202 PushI
	AddReply(var_250_int, var_251_int, var_252_int); // 0x203 TObjFunc
	return 0; // 0x205 Return
	
Label_518:
	var_253_int = 42458; // 0x206 PushI
	var_254_bool = var_6_int == var_253_int; // 0x207 Eq
	if(var_254_bool == 0) goto Label_546; // 0x208 JumpB
	var_255_string = ""; // 0x209 PushV
	var_255_string = "Neutral"; // 0x20a MovS
	func_252(var_7_bool, var_255_string); // 0x20b NEW_2
	var_256_int = 540465; // 0x20d PushI
	SetMessage(var_256_int); // 0x20e TObjFunc
	ClearReplies(); // 0x210 TObjFunc
	var_257_int = 540466; // 0x212 PushI
	var_258_int = 42460; // 0x213 PushI
	var_259_int = 42459; // 0x214 PushI
	AddReply(var_257_int, var_258_int, var_259_int); // 0x215 TObjFunc
	var_260_int = 540473; // 0x217 PushI
	var_261_int = 42460; // 0x218 PushI
	var_262_int = 42466; // 0x219 PushI
	AddReply(var_260_int, var_261_int, var_262_int); // 0x21a TObjFunc
	var_263_int = 540474; // 0x21c PushI
	var_264_int = 42460; // 0x21d PushI
	var_265_int = 42468; // 0x21e PushI
	AddReply(var_263_int, var_264_int, var_265_int); // 0x21f TObjFunc
	return 0; // 0x221 Return
	
Label_546:
	var_266_int = 42460; // 0x222 PushI
	var_267_bool = var_6_int == var_266_int; // 0x223 Eq
	if(var_267_bool == 0) goto Label_569; // 0x224 JumpB
	var_268_string = ""; // 0x225 PushV
	var_268_string = "Neutral"; // 0x226 MovS
	func_252(var_7_bool, var_268_string); // 0x227 NEW_2
	var_269_int = 540467; // 0x229 PushI
	SetMessage(var_269_int); // 0x22a TObjFunc
	ClearReplies(); // 0x22c TObjFunc
	var_270_int = 540468; // 0x22e PushI
	var_271_int = -1; // 0x22f PushI
	var_272_int = 42461; // 0x230 PushI
	AddReply(var_270_int, var_271_int, var_272_int); // 0x231 TObjFunc
	var_273_int = 540469; // 0x233 PushI
	var_274_int = 42463; // 0x234 PushI
	var_275_int = 42462; // 0x235 PushI
	AddReply(var_273_int, var_274_int, var_275_int); // 0x236 TObjFunc
	return 0; // 0x238 Return
	
Label_569:
	var_276_int = 42463; // 0x239 PushI
	var_277_bool = var_6_int == var_276_int; // 0x23a Eq
	if(var_277_bool == 0) goto Label_592; // 0x23b JumpB
	var_278_string = ""; // 0x23c PushV
	var_278_string = "Grin"; // 0x23d MovS
	func_252(var_7_bool, var_278_string); // 0x23e NEW_2
	var_279_int = 540470; // 0x240 PushI
	SetMessage(var_279_int); // 0x241 TObjFunc
	ClearReplies(); // 0x243 TObjFunc
	var_280_int = 540471; // 0x245 PushI
	var_281_int = -1; // 0x246 PushI
	var_282_int = 42464; // 0x247 PushI
	AddReply(var_280_int, var_281_int, var_282_int); // 0x248 TObjFunc
	var_283_int = 540472; // 0x24a PushI
	var_284_int = -1; // 0x24b PushI
	var_285_int = 42465; // 0x24c PushI
	AddReply(var_283_int, var_284_int, var_285_int); // 0x24d TObjFunc
	return 0; // 0x24f Return
	
Label_592:
	var_286_int = 42441; // 0x250 PushI
	var_287_bool = var_6_int == var_286_int; // 0x251 Eq
	if(var_287_bool == 0) goto Label_610; // 0x252 JumpB
	var_288_string = ""; // 0x253 PushV
	var_288_string = "Grin"; // 0x254 MovS
	func_252(var_7_bool, var_288_string); // 0x255 NEW_2
	var_289_int = 540450; // 0x257 PushI
	SetMessage(var_289_int); // 0x258 TObjFunc
	ClearReplies(); // 0x25a TObjFunc
	var_290_int = 540451; // 0x25c PushI
	var_291_int = 42443; // 0x25d PushI
	var_292_int = 42442; // 0x25e PushI
	AddReply(var_290_int, var_291_int, var_292_int); // 0x25f TObjFunc
	return 0; // 0x261 Return
	
Label_610:
	var_293_int = 42443; // 0x262 PushI
	var_294_bool = var_6_int == var_293_int; // 0x263 Eq
	if(var_294_bool == 0) goto Label_628; // 0x264 JumpB
	var_295_string = ""; // 0x265 PushV
	var_295_string = "Grin"; // 0x266 MovS
	func_252(var_7_bool, var_295_string); // 0x267 NEW_2
	var_296_int = 540452; // 0x269 PushI
	SetMessage(var_296_int); // 0x26a TObjFunc
	ClearReplies(); // 0x26c TObjFunc
	var_297_int = 540453; // 0x26e PushI
	var_298_int = 42445; // 0x26f PushI
	var_299_int = 42444; // 0x270 PushI
	AddReply(var_297_int, var_298_int, var_299_int); // 0x271 TObjFunc
	return 0; // 0x273 Return
	
Label_628:
	var_300_int = 42445; // 0x274 PushI
	var_301_bool = var_6_int == var_300_int; // 0x275 Eq
	if(var_301_bool == 0) goto Label_656; // 0x276 JumpB
	var_302_string = ""; // 0x277 PushV
	var_302_string = "Neutral"; // 0x278 MovS
	func_252(var_7_bool, var_302_string); // 0x279 NEW_2
	var_303_int = 540454; // 0x27b PushI
	SetMessage(var_303_int); // 0x27c TObjFunc
	ClearReplies(); // 0x27e TObjFunc
	var_304_int = 540455; // 0x280 PushI
	var_305_int = 42447; // 0x281 PushI
	var_306_int = 42446; // 0x282 PushI
	AddReply(var_304_int, var_305_int, var_306_int); // 0x283 TObjFunc
	var_307_int = 540459; // 0x285 PushI
	var_308_int = 42447; // 0x286 PushI
	var_309_int = 42450; // 0x287 PushI
	AddReply(var_307_int, var_308_int, var_309_int); // 0x288 TObjFunc
	var_310_int = 540460; // 0x28a PushI
	var_311_int = 42447; // 0x28b PushI
	var_312_int = 42452; // 0x28c PushI
	AddReply(var_310_int, var_311_int, var_312_int); // 0x28d TObjFunc
	return 0; // 0x28f Return
	
Label_656:
	var_313_int = 42447; // 0x290 PushI
	var_314_bool = var_6_int == var_313_int; // 0x291 Eq
	if(var_314_bool == 0) goto Label_679; // 0x292 JumpB
	var_315_string = ""; // 0x293 PushV
	var_315_string = "Smile"; // 0x294 MovS
	func_252(var_7_bool, var_315_string); // 0x295 NEW_2
	var_316_int = 540456; // 0x297 PushI
	SetMessage(var_316_int); // 0x298 TObjFunc
	ClearReplies(); // 0x29a TObjFunc
	var_317_int = 540457; // 0x29c PushI
	var_318_int = -1; // 0x29d PushI
	var_319_int = 42448; // 0x29e PushI
	AddReply(var_317_int, var_318_int, var_319_int); // 0x29f TObjFunc
	var_320_int = 540458; // 0x2a1 PushI
	var_321_int = -1; // 0x2a2 PushI
	var_322_int = 42449; // 0x2a3 PushI
	AddReply(var_320_int, var_321_int, var_322_int); // 0x2a4 TObjFunc
	return 0; // 0x2a6 Return
	
Label_679:
	var_323_int = 42419; // 0x2a7 PushI
	var_324_bool = var_6_int == var_323_int; // 0x2a8 Eq
	if(var_324_bool == 0) goto Label_702; // 0x2a9 JumpB
	var_325_string = ""; // 0x2aa PushV
	var_325_string = "Smile"; // 0x2ab MovS
	func_252(var_7_bool, var_325_string); // 0x2ac NEW_2
	var_326_int = 540430; // 0x2ae PushI
	SetMessage(var_326_int); // 0x2af TObjFunc
	ClearReplies(); // 0x2b1 TObjFunc
	var_327_int = 540431; // 0x2b3 PushI
	var_328_int = 42421; // 0x2b4 PushI
	var_329_int = 42420; // 0x2b5 PushI
	AddReply(var_327_int, var_328_int, var_329_int); // 0x2b6 TObjFunc
	var_330_int = 540441; // 0x2b8 PushI
	var_331_int = 42431; // 0x2b9 PushI
	var_332_int = 42430; // 0x2ba PushI
	AddReply(var_330_int, var_331_int, var_332_int); // 0x2bb TObjFunc
	return 0; // 0x2bd Return
	
Label_702:
	var_333_int = 42431; // 0x2be PushI
	var_334_bool = var_6_int == var_333_int; // 0x2bf Eq
	if(var_334_bool == 0) goto Label_720; // 0x2c0 JumpB
	var_335_string = ""; // 0x2c1 PushV
	var_335_string = "Sly"; // 0x2c2 MovS
	func_252(var_7_bool, var_335_string); // 0x2c3 NEW_2
	var_336_int = 540442; // 0x2c5 PushI
	SetMessage(var_336_int); // 0x2c6 TObjFunc
	ClearReplies(); // 0x2c8 TObjFunc
	var_337_int = 540443; // 0x2ca PushI
	var_338_int = 42433; // 0x2cb PushI
	var_339_int = 42432; // 0x2cc PushI
	AddReply(var_337_int, var_338_int, var_339_int); // 0x2cd TObjFunc
	return 0; // 0x2cf Return
	
Label_720:
	var_340_int = 42433; // 0x2d0 PushI
	var_341_bool = var_6_int == var_340_int; // 0x2d1 Eq
	if(var_341_bool == 0) goto Label_743; // 0x2d2 JumpB
	var_342_string = ""; // 0x2d3 PushV
	var_342_string = "Smile"; // 0x2d4 MovS
	func_252(var_7_bool, var_342_string); // 0x2d5 NEW_2
	var_343_int = 540444; // 0x2d7 PushI
	SetMessage(var_343_int); // 0x2d8 TObjFunc
	ClearReplies(); // 0x2da TObjFunc
	var_344_int = 540445; // 0x2dc PushI
	var_345_int = 42421; // 0x2dd PushI
	var_346_int = 42434; // 0x2de PushI
	AddReply(var_344_int, var_345_int, var_346_int); // 0x2df TObjFunc
	var_347_int = 540446; // 0x2e1 PushI
	var_348_int = 42421; // 0x2e2 PushI
	var_349_int = 42436; // 0x2e3 PushI
	AddReply(var_347_int, var_348_int, var_349_int); // 0x2e4 TObjFunc
	return 0; // 0x2e6 Return
	
Label_743:
	var_350_int = 42421; // 0x2e7 PushI
	var_351_bool = var_6_int == var_350_int; // 0x2e8 Eq
	if(var_351_bool == 0) goto Label_761; // 0x2e9 JumpB
	var_352_string = ""; // 0x2ea PushV
	var_352_string = "Smile"; // 0x2eb MovS
	func_252(var_7_bool, var_352_string); // 0x2ec NEW_2
	var_353_int = 540432; // 0x2ee PushI
	SetMessage(var_353_int); // 0x2ef TObjFunc
	ClearReplies(); // 0x2f1 TObjFunc
	var_354_int = 540433; // 0x2f3 PushI
	var_355_int = 42423; // 0x2f4 PushI
	var_356_int = 42422; // 0x2f5 PushI
	AddReply(var_354_int, var_355_int, var_356_int); // 0x2f6 TObjFunc
	return 0; // 0x2f8 Return
	
Label_761:
	var_357_int = 42423; // 0x2f9 PushI
	var_358_bool = var_6_int == var_357_int; // 0x2fa Eq
	if(var_358_bool == 0) goto Label_779; // 0x2fb JumpB
	var_359_string = ""; // 0x2fc PushV
	var_359_string = "Smile"; // 0x2fd MovS
	func_252(var_7_bool, var_359_string); // 0x2fe NEW_2
	var_360_int = 540434; // 0x300 PushI
	SetMessage(var_360_int); // 0x301 TObjFunc
	ClearReplies(); // 0x303 TObjFunc
	var_361_int = 540435; // 0x305 PushI
	var_362_int = 42425; // 0x306 PushI
	var_363_int = 42424; // 0x307 PushI
	AddReply(var_361_int, var_362_int, var_363_int); // 0x308 TObjFunc
	return 0; // 0x30a Return
	
Label_779:
	var_364_int = 42425; // 0x30b PushI
	var_365_bool = var_6_int == var_364_int; // 0x30c Eq
	if(var_365_bool == 0) goto Label_802; // 0x30d JumpB
	var_366_string = ""; // 0x30e PushV
	var_366_string = "Sly"; // 0x30f MovS
	func_252(var_7_bool, var_366_string); // 0x310 NEW_2
	var_367_int = 540436; // 0x312 PushI
	SetMessage(var_367_int); // 0x313 TObjFunc
	ClearReplies(); // 0x315 TObjFunc
	var_368_int = 540437; // 0x317 PushI
	var_369_int = -1; // 0x318 PushI
	var_370_int = 42426; // 0x319 PushI
	AddReply(var_368_int, var_369_int, var_370_int); // 0x31a TObjFunc
	var_371_int = 540438; // 0x31c PushI
	var_372_int = 42428; // 0x31d PushI
	var_373_int = 42427; // 0x31e PushI
	AddReply(var_371_int, var_372_int, var_373_int); // 0x31f TObjFunc
	return 0; // 0x321 Return
	
Label_802:
	var_374_int = 42428; // 0x322 PushI
	var_375_bool = var_6_int == var_374_int; // 0x323 Eq
	if(var_375_bool == 0) goto Label_820; // 0x324 JumpB
	var_376_string = ""; // 0x325 PushV
	var_376_string = "Sly"; // 0x326 MovS
	func_252(var_7_bool, var_376_string); // 0x327 NEW_2
	var_377_int = 540439; // 0x329 PushI
	SetMessage(var_377_int); // 0x32a TObjFunc
	ClearReplies(); // 0x32c TObjFunc
	var_378_int = 540440; // 0x32e PushI
	var_379_int = -1; // 0x32f PushI
	var_380_int = 42429; // 0x330 PushI
	AddReply(var_378_int, var_379_int, var_380_int); // 0x331 TObjFunc
	return 0; // 0x333 Return
	
Label_820:
	var_381_int = 37341; // 0x334 PushI
	var_382_bool = var_6_int == var_381_int; // 0x335 Eq
	if(var_382_bool == 0) goto Label_838; // 0x336 JumpB
	var_383_string = ""; // 0x337 PushV
	var_383_string = "Neutral"; // 0x338 MovS
	func_252(var_7_bool, var_383_string); // 0x339 NEW_2
	var_384_int = 535655; // 0x33b PushI
	SetMessage(var_384_int); // 0x33c TObjFunc
	ClearReplies(); // 0x33e TObjFunc
	var_385_int = 535656; // 0x340 PushI
	var_386_int = -1; // 0x341 PushI
	var_387_int = 37342; // 0x342 PushI
	AddReply(var_385_int, var_386_int, var_387_int); // 0x343 TObjFunc
	return 0; // 0x345 Return
	
Label_838:
	var_388_int = 42374; // 0x346 PushI
	var_389_bool = var_6_int == var_388_int; // 0x347 Eq
	if(var_389_bool == 0) goto Label_856; // 0x348 JumpB
	var_390_string = ""; // 0x349 PushV
	var_390_string = "Sly"; // 0x34a MovS
	func_252(var_7_bool, var_390_string); // 0x34b NEW_2
	var_391_int = 540388; // 0x34d PushI
	SetMessage(var_391_int); // 0x34e TObjFunc
	ClearReplies(); // 0x350 TObjFunc
	var_392_int = 540389; // 0x352 PushI
	var_393_int = 42376; // 0x353 PushI
	var_394_int = 42375; // 0x354 PushI
	AddReply(var_392_int, var_393_int, var_394_int); // 0x355 TObjFunc
	return 0; // 0x357 Return
	
Label_856:
	var_395_int = 42376; // 0x358 PushI
	var_396_bool = var_6_int == var_395_int; // 0x359 Eq
	if(var_396_bool == 0) goto Label_874; // 0x35a JumpB
	var_397_string = ""; // 0x35b PushV
	var_397_string = "Sly"; // 0x35c MovS
	func_252(var_7_bool, var_397_string); // 0x35d NEW_2
	var_398_int = 540390; // 0x35f PushI
	SetMessage(var_398_int); // 0x360 TObjFunc
	ClearReplies(); // 0x362 TObjFunc
	var_399_int = 540391; // 0x364 PushI
	var_400_int = 42378; // 0x365 PushI
	var_401_int = 42377; // 0x366 PushI
	AddReply(var_399_int, var_400_int, var_401_int); // 0x367 TObjFunc
	return 0; // 0x369 Return
	
Label_874:
	var_402_int = 42378; // 0x36a PushI
	var_403_bool = var_6_int == var_402_int; // 0x36b Eq
	if(var_403_bool == 0) goto Label_897; // 0x36c JumpB
	var_404_string = ""; // 0x36d PushV
	var_404_string = "Sly"; // 0x36e MovS
	func_252(var_7_bool, var_404_string); // 0x36f NEW_2
	var_405_int = 540392; // 0x371 PushI
	SetMessage(var_405_int); // 0x372 TObjFunc
	ClearReplies(); // 0x374 TObjFunc
	var_406_int = 540393; // 0x376 PushI
	var_407_int = 42380; // 0x377 PushI
	var_408_int = 42379; // 0x378 PushI
	AddReply(var_406_int, var_407_int, var_408_int); // 0x379 TObjFunc
	var_409_int = 540413; // 0x37b PushI
	var_410_int = 42401; // 0x37c PushI
	var_411_int = 42400; // 0x37d PushI
	AddReply(var_409_int, var_410_int, var_411_int); // 0x37e TObjFunc
	return 0; // 0x380 Return
	
Label_897:
	var_412_int = 42401; // 0x381 PushI
	var_413_bool = var_6_int == var_412_int; // 0x382 Eq
	if(var_413_bool == 0) goto Label_920; // 0x383 JumpB
	var_414_string = ""; // 0x384 PushV
	var_414_string = "Saveyouall"; // 0x385 MovS
	func_252(var_7_bool, var_414_string); // 0x386 NEW_2
	var_415_int = 540414; // 0x388 PushI
	SetMessage(var_415_int); // 0x389 TObjFunc
	ClearReplies(); // 0x38b TObjFunc
	var_416_int = 540415; // 0x38d PushI
	var_417_int = 42403; // 0x38e PushI
	var_418_int = 42402; // 0x38f PushI
	AddReply(var_416_int, var_417_int, var_418_int); // 0x390 TObjFunc
	var_419_int = 540423; // 0x392 PushI
	var_420_int = -1; // 0x393 PushI
	var_421_int = 42410; // 0x394 PushI
	AddReply(var_419_int, var_420_int, var_421_int); // 0x395 TObjFunc
	return 0; // 0x397 Return
	
Label_920:
	var_422_int = 42403; // 0x398 PushI
	var_423_bool = var_6_int == var_422_int; // 0x399 Eq
	if(var_423_bool == 0) goto Label_969; // 0x39a JumpB
	var_424_bool = 0; var_425_object = Obj(); // 0x39b PushV
	var_425_object = var_1_object; // 0x39c MovT
	func_1595(var_424_bool, var_425_object); // 0x39d NEW_2
	var_426_bool = var_424_bool == 0; // 0x39f Not
	if(var_426_bool == 0) goto Label_944; // 0x3a0 JumpB
	var_427_string = ""; // 0x3a1 PushV
	var_427_string = "Saveyouall"; // 0x3a2 MovS
	func_252(var_7_bool, var_427_string); // 0x3a3 NEW_2
	var_428_int = 540416; // 0x3a5 PushI
	SetMessage(var_428_int); // 0x3a6 TObjFunc
	ClearReplies(); // 0x3a8 TObjFunc
	var_429_int = 540417; // 0x3aa PushI
	var_430_int = 42405; // 0x3ab PushI
	var_431_int = 42404; // 0x3ac PushI
	AddReply(var_429_int, var_430_int, var_431_int); // 0x3ad TObjFunc
	return 0; // 0x3af Return
	
Label_944:
	var_432_bool = 0; var_433_object = Obj(); // 0x3b0 PushV
	var_433_object = var_1_object; // 0x3b1 MovT
	func_1595(var_432_bool, var_433_object); // 0x3b2 NEW_2
	if(var_432_bool == 0) goto Label_969; // 0x3b4 JumpB
	var_434_string = ""; // 0x3b5 PushV
	var_434_string = "Neutral"; // 0x3b6 MovS
	func_252(var_7_bool, var_434_string); // 0x3b7 NEW_2
	var_435_int = 540420; // 0x3b9 PushI
	SetMessage(var_435_int); // 0x3ba TObjFunc
	ClearReplies(); // 0x3bc TObjFunc
	var_436_int = 540421; // 0x3be PushI
	var_437_int = -1; // 0x3bf PushI
	var_438_int = 42408; // 0x3c0 PushI
	AddReply(var_436_int, var_437_int, var_438_int); // 0x3c1 TObjFunc
	var_439_int = 540422; // 0x3c3 PushI
	var_440_int = -1; // 0x3c4 PushI
	var_441_int = 42409; // 0x3c5 PushI
	AddReply(var_439_int, var_440_int, var_441_int); // 0x3c6 TObjFunc
	return 0; // 0x3c8 Return
	
Label_969:
	var_442_int = 42405; // 0x3c9 PushI
	var_443_bool = var_6_int == var_442_int; // 0x3ca Eq
	if(var_443_bool == 0) goto Label_987; // 0x3cb JumpB
	var_444_string = ""; // 0x3cc PushV
	var_444_string = "Neutral"; // 0x3cd MovS
	func_252(var_7_bool, var_444_string); // 0x3ce NEW_2
	var_445_int = 540418; // 0x3d0 PushI
	SetMessage(var_445_int); // 0x3d1 TObjFunc
	ClearReplies(); // 0x3d3 TObjFunc
	var_446_int = 540419; // 0x3d5 PushI
	var_447_int = -1; // 0x3d6 PushI
	var_448_int = 42406; // 0x3d7 PushI
	AddReply(var_446_int, var_447_int, var_448_int); // 0x3d8 TObjFunc
	return 0; // 0x3da Return
	
Label_987:
	var_449_int = 42380; // 0x3db PushI
	var_450_bool = var_6_int == var_449_int; // 0x3dc Eq
	if(var_450_bool == 0) goto Label_1010; // 0x3dd JumpB
	var_451_string = ""; // 0x3de PushV
	var_451_string = "Sly"; // 0x3df MovS
	func_252(var_7_bool, var_451_string); // 0x3e0 NEW_2
	var_452_int = 540394; // 0x3e2 PushI
	SetMessage(var_452_int); // 0x3e3 TObjFunc
	ClearReplies(); // 0x3e5 TObjFunc
	var_453_int = 540395; // 0x3e7 PushI
	var_454_int = 42401; // 0x3e8 PushI
	var_455_int = 42381; // 0x3e9 PushI
	AddReply(var_453_int, var_454_int, var_455_int); // 0x3ea TObjFunc
	var_456_int = 540396; // 0x3ec PushI
	var_457_int = 37333; // 0x3ed PushI
	var_458_int = 42383; // 0x3ee PushI
	AddReply(var_456_int, var_457_int, var_458_int); // 0x3ef TObjFunc
	return 0; // 0x3f1 Return
	
Label_1010:
	var_459_int = 37333; // 0x3f2 PushI
	var_460_bool = var_6_int == var_459_int; // 0x3f3 Eq
	if(var_460_bool == 0) goto Label_1059; // 0x3f4 JumpB
	var_461_bool = 0; var_462_object = Obj(); // 0x3f5 PushV
	var_462_object = var_1_object; // 0x3f6 MovT
	func_1595(var_461_bool, var_462_object); // 0x3f7 NEW_2
	var_463_bool = var_461_bool == 0; // 0x3f9 Not
	if(var_463_bool == 0) goto Label_1034; // 0x3fa JumpB
	var_464_string = ""; // 0x3fb PushV
	var_464_string = "Fear"; // 0x3fc MovS
	func_252(var_7_bool, var_464_string); // 0x3fd NEW_2
	var_465_int = 535647; // 0x3ff PushI
	SetMessage(var_465_int); // 0x400 TObjFunc
	ClearReplies(); // 0x402 TObjFunc
	var_466_int = 540398; // 0x404 PushI
	var_467_int = 42386; // 0x405 PushI
	var_468_int = 42385; // 0x406 PushI
	AddReply(var_466_int, var_467_int, var_468_int); // 0x407 TObjFunc
	return 0; // 0x409 Return
	
Label_1034:
	var_469_bool = 0; var_470_object = Obj(); // 0x40a PushV
	var_470_object = var_1_object; // 0x40b MovT
	func_1595(var_469_bool, var_470_object); // 0x40c NEW_2
	if(var_469_bool == 0) goto Label_1059; // 0x40e JumpB
	var_471_string = ""; // 0x40f PushV
	var_471_string = "Smile"; // 0x410 MovS
	func_252(var_7_bool, var_471_string); // 0x411 NEW_2
	var_472_int = 535650; // 0x413 PushI
	SetMessage(var_472_int); // 0x414 TObjFunc
	ClearReplies(); // 0x416 TObjFunc
	var_473_int = 535651; // 0x418 PushI
	var_474_int = -1; // 0x419 PushI
	var_475_int = 37337; // 0x41a PushI
	AddReply(var_473_int, var_474_int, var_475_int); // 0x41b TObjFunc
	var_476_int = 535652; // 0x41d PushI
	var_477_int = -1; // 0x41e PushI
	var_478_int = 37338; // 0x41f PushI
	AddReply(var_476_int, var_477_int, var_478_int); // 0x420 TObjFunc
	return 0; // 0x422 Return
	
Label_1059:
	var_479_int = 42386; // 0x423 PushI
	var_480_bool = var_6_int == var_479_int; // 0x424 Eq
	if(var_480_bool == 0) goto Label_1082; // 0x425 JumpB
	var_481_string = ""; // 0x426 PushV
	var_481_string = "Fear"; // 0x427 MovS
	func_252(var_7_bool, var_481_string); // 0x428 NEW_2
	var_482_int = 540399; // 0x42a PushI
	SetMessage(var_482_int); // 0x42b TObjFunc
	ClearReplies(); // 0x42d TObjFunc
	var_483_int = 540400; // 0x42f PushI
	var_484_int = 42388; // 0x430 PushI
	var_485_int = 42387; // 0x431 PushI
	AddReply(var_483_int, var_484_int, var_485_int); // 0x432 TObjFunc
	var_486_int = 540408; // 0x434 PushI
	var_487_int = 42390; // 0x435 PushI
	var_488_int = 42395; // 0x436 PushI
	AddReply(var_486_int, var_487_int, var_488_int); // 0x437 TObjFunc
	return 0; // 0x439 Return
	
Label_1082:
	var_489_int = 42388; // 0x43a PushI
	var_490_bool = var_6_int == var_489_int; // 0x43b Eq
	if(var_490_bool == 0) goto Label_1105; // 0x43c JumpB
	var_491_string = ""; // 0x43d PushV
	var_491_string = "Fear"; // 0x43e MovS
	func_252(var_7_bool, var_491_string); // 0x43f NEW_2
	var_492_int = 540401; // 0x441 PushI
	SetMessage(var_492_int); // 0x442 TObjFunc
	ClearReplies(); // 0x444 TObjFunc
	var_493_int = 540402; // 0x446 PushI
	var_494_int = 42390; // 0x447 PushI
	var_495_int = 42389; // 0x448 PushI
	AddReply(var_493_int, var_494_int, var_495_int); // 0x449 TObjFunc
	var_496_int = 540407; // 0x44b PushI
	var_497_int = -1; // 0x44c PushI
	var_498_int = 42394; // 0x44d PushI
	AddReply(var_496_int, var_497_int, var_498_int); // 0x44e TObjFunc
	return 0; // 0x450 Return
	
Label_1105:
	var_499_int = 42390; // 0x451 PushI
	var_500_bool = var_6_int == var_499_int; // 0x452 Eq
	if(var_500_bool == 0) goto Label_1123; // 0x453 JumpB
	var_501_string = ""; // 0x454 PushV
	var_501_string = "Neutral"; // 0x455 MovS
	func_252(var_7_bool, var_501_string); // 0x456 NEW_2
	var_502_int = 540403; // 0x458 PushI
	SetMessage(var_502_int); // 0x459 TObjFunc
	ClearReplies(); // 0x45b TObjFunc
	var_503_int = 540404; // 0x45d PushI
	var_504_int = 42392; // 0x45e PushI
	var_505_int = 42391; // 0x45f PushI
	AddReply(var_503_int, var_504_int, var_505_int); // 0x460 TObjFunc
	return 0; // 0x462 Return
	
Label_1123:
	var_506_int = 42392; // 0x463 PushI
	var_507_bool = var_6_int == var_506_int; // 0x464 Eq
	if(var_507_bool == 0) goto Label_1141; // 0x465 JumpB
	var_508_string = ""; // 0x466 PushV
	var_508_string = "Neutral"; // 0x467 MovS
	func_252(var_7_bool, var_508_string); // 0x468 NEW_2
	var_509_int = 540405; // 0x46a PushI
	SetMessage(var_509_int); // 0x46b TObjFunc
	ClearReplies(); // 0x46d TObjFunc
	var_510_int = 535648; // 0x46f PushI
	var_511_int = -1; // 0x470 PushI
	var_512_int = 37334; // 0x471 PushI
	AddReply(var_510_int, var_511_int, var_512_int); // 0x472 TObjFunc
	return 0; // 0x474 Return
	
Label_1141:
	var_3_string = 1; // 0x475 TMovB
	var_513_bool = 0; // 0x476 PushV
	func_1853(var_513_bool); // 0x477 NEW_2
	if(var_513_bool == 0) goto Label_1149; // 0x479 JumpB
	lshStopAnimation(); // 0x47a Func
	goto Label_1151; // 0x47c Jump
	
Label_1151:
	return 0; // 0x47f Return
	
Label_1149:
	StopAnimation(); // 0x47d Func
	
Label_1153:
	return 0; // 0x481 Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object)
{
	var_7_int = 0; var_8_object = Obj(); // 0x487 PushV
	var_8_object = var_6_object; // 0x488 Mov
	TaskCall(0); // 0x489 TaskCall
	func_0(var_9_object, var_7_int, var_8_object); // 0x48a NEW_2
	TaskReturn(); // 0x48b TaskReturn
	return 0; // 0x48d Return
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_string)
{
	var_7_bool = 0; var_8_bool = 0; // 0x492 PushV
	var_9_string = "cleanup"; // 0x493 PushS
	var_10_bool = var_6_string == var_9_string; // 0x494 Eq
	if(var_10_bool == 0) goto Label_1193; // 0x495 JumpB
	var_0_object = 1; // 0x496 TMovB
	IsLoaded(var_8_bool); // 0x497 Func
	var_11_bool = 0; // 0x499 PushV
	var_11_bool = 0; // 0x49a MovB
	var_12_bool = var_8_bool == 0; // 0x49b Not
	if(var_12_bool == 0) goto Label_1186; // 0x49c JumpB
	var_13_bool = 0; // 0x49d PushV
	func_1214(var_13_bool); // 0x49e NEW_2
	if(var_13_bool == 0) goto Label_1186; // 0x4a0 JumpB
	var_11_bool = 1; // 0x4a1 MovB
	
Label_1186:
	if(var_11_bool == 0) goto Label_1192; // 0x4a2 JumpB
	var_14_object = Obj(); // 0x4a3 PushV
	func_1492(var_14_object); // 0x4a4 NEW_2
	RemoveActor(var_14_object); // 0x4a6 Func
	
Label_1192:
	goto Label_1197; // 0x4a8 Jump
	
Label_1197:
	return 2; // 0x4ad Return
	
Label_1193:
	var_17_string = "restore"; // 0x4a9 PushS
	var_18_bool = var_6_string == var_17_string; // 0x4aa Eq
	if(var_18_bool == 0) goto Label_1197; // 0x4ab JumpB
	var_0_object = 0; // 0x4ac TMovB
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	var_6_bool = 0; // 0x4ae PushV
	var_6_bool = 0; // 0x4af MovB
	var_7_object = var_0_object; // 0x4b0 PushT
	if(var_7_object == 0) goto Label_1207; // 0x4b1 JumpB
	var_8_bool = 0; // 0x4b2 PushV
	func_1214(var_8_bool); // 0x4b3 NEW_2
	if(var_8_bool == 0) goto Label_1207; // 0x4b5 JumpB
	var_6_bool = 1; // 0x4b6 MovB
	
Label_1207:
	if(var_6_bool == 0) goto Label_1213; // 0x4b7 JumpB
	var_9_object = Obj(); // 0x4b8 PushV
	func_1492(var_9_object); // 0x4b9 NEW_2
	RemoveActor(var_9_object); // 0x4bb Func
	
Label_1213:
	return 0; // 0x4bd Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	func_1166(); // 0x483 NEW_2
	return 0; // 0x485 Return
}


func_0(var_0_object, var_7_int, var_8_object)
{
	var_10_object = Obj(); var_11_bool = 0; var_12_int = 0; var_13_bool = 0; var_14_object = Obj(); var_15_bool = 0; var_16_int = 0; var_17_bool = 0; // 0x0 PushV
	var_0_object = var_8_object; // 0x1 TMov
	var_18_bool = 0; var_19_object = Obj(); var_20_float = 0; // 0x2 PushV
	var_19_object = var_8_object; // 0x3 Mov
	var_20_float = 70.0; // 0x4 MovF
	func_1216(var_19_object, var_20_float); // 0x5 NEW_2
	var_64_bool = var_18_bool == 0; // 0x7 Not
	if(var_64_bool == 0) goto Label_11; // 0x8 JumpB
	var_7_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_14_object); // 0xb Func
	var_65_int = 0; // 0xd PushV
	func_1847(var_65_int); // 0xe NEW_2
	SetNPCName(var_65_int); // 0x10 ObjFunc
	var_66_int = 0; // 0x12 PushV
	func_1845(var_66_int); // 0x13 NEW_2
	SetNPCDescription(var_66_int); // 0x15 ObjFunc
	var_67_string = ""; // 0x17 PushV
	func_1849(var_67_string); // 0x18 NEW_2
	SetPhoto(var_67_string); // 0x1a ObjFunc
	var_68_string = ""; // 0x1c PushV
	func_1851(var_68_string); // 0x1d NEW_2
	SetPhoto2(var_68_string); // 0x1f ObjFunc
	var_69_int = 0; // 0x21 PushV
	func_1738(var_69_int); // 0x22 NEW_2
	SetPlayerName(var_69_int); // 0x24 ObjFunc
	var_16_int = -1; // 0x26 MovI
	IsOverrideActive(var_15_bool); // 0x27 Func
	var_77_bool = var_15_bool; // 0x29 Push
	if(var_77_bool == 0) goto Label_45; // 0x2a JumpB
	var_7_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_14_object); // 0x2d Func
	var_78_bool = 0; var_79_object = Obj(); // 0x2f PushV
	var_80_object = Obj(); // 0x30 PushV
	func_1492(var_80_object); // 0x31 NEW_2
	var_79_object = var_80_object; // 0x32 Mov
	func_1301(var_78_bool, var_79_object); // 0x34 NEW_2
	var_173_object = Obj(); var_174_object = Obj(); // 0x36 PushV
	var_173_object = var_8_object; // 0x37 Mov
	var_174_object = var_14_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_175_object, var_176_object, var_177_string, var_178_bool, var_173_object, var_174_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	IsDialogEnd(var_17_bool); // 0x3d ObjFunc
	
Label_63:
	var_348_bool = var_17_bool == 0; // 0x3f Not
	if(var_348_bool == 0) goto Label_70; // 0x40 JumpB
	sync(); // 0x41 Func
	IsDialogEnd(var_17_bool); // 0x43 ObjFunc
	goto Label_63; // 0x45 Jump
	
Label_70:
	var_349_object = Obj(); // 0x46 PushV
	var_349_object = var_8_object; // 0x47 Mov
	func_1284(); // 0x48 NEW_2
	StopDialog(var_14_object); // 0x4a Func
	GetReturnValue(var_16_int); // 0x4c ObjFunc
	var_7_int = var_16_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_1537()
{
	var_14_int = 0; var_15_string = ""; // 0x602 PushV
	var_15_string = "d12q01_Klara"; // 0x603 MovS
	func_1508(var_14_int, var_15_string); // 0x604 NEW_2
	var_18_int = 0; // 0x606 PushI
	var_19_bool = var_14_int == var_18_int; // 0x607 Eq
	if(var_19_bool == 0) goto Label_1552; // 0x608 JumpB
	var_20_string = "d12q01_Klara"; // 0x609 PushS
	var_21_int = 1; // 0x60a PushI
	SetVariable(var_20_string, var_21_int); // 0x60b Func
	func_1684(); // 0x60e NEW_2
	
Label_1552:
	return 0; // 0x610 Return
}


func_1665(var_254_bool)
{
	var_256_bool = 0; // 0x682 PushV
	func_1807(var_256_bool); // 0x683 NEW_2
	var_254_bool = var_256_bool; // 0x684 Mov
	return 0; // 0x686 Return
}


func_1284()
{
	var_350_bool = 0; var_351_bool = 0; // 0x504 PushV
	CameraSwitchToNormal(); // 0x505 Func
	var_352_bool = 0; // 0x507 PushV
	func_1853(var_352_bool); // 0x508 NEW_2
	if(var_352_bool == 0) goto Label_1292; // 0x50a JumpB
	goto Label_1300; // 0x50b Jump
	
Label_1300:
	return 2; // 0x514 Return
	
Label_1292:
	var_353_string = "head"; // 0x50c PushS
	HasAnimationTrack(var_351_bool, var_353_string); // 0x50d Func
	var_354_bool = var_351_bool; // 0x50f Push
	if(var_354_bool == 0) goto Label_1300; // 0x510 JumpB
	var_355_string = "head"; // 0x511 PushS
	UnlookAsync(var_355_string); // 0x512 Func
}


func_1797(var_281_bool, var_282_int)
{
	var_283_int = 0; var_284_int = 0; // 0x705 PushV
	var_285_string = "vol_"; // 0x706 PushS
	var_286_int = var_285_string + var_282_int; // 0x707 Add
	GetVariable(var_286_int, var_284_int); // 0x708 Func
	var_287_int = 16; // 0x70a PushI
	var_288_int = var_284_int & var_287_int; // 0x70b And
	var_289_int = 0; // 0x70c PushI
	var_281_bool = var_288_int != var_289_int; // 0x70d Neq2
	return 2; // 0x70e Return
}


func_1671()
{
	var_51_object = Obj(); var_52_object = Obj(); // 0x687 PushV
	var_53_int = 701; // 0x688 PushI
	var_54_int = 1; // 0x689 PushI
	var_55_int = 535684; // 0x68a PushI
	CreateDiaryEntry(var_52_object, var_53_int, var_54_int, var_55_int); // 0x68b Func
	var_56_bool = 0; var_57_object = Obj(); var_58_int = 0; // 0x68d PushV
	var_57_object = var_52_object; // 0x68e Mov
	var_58_int = 699; // 0x68f MovI
	func_1710(var_56_bool, var_57_object, var_58_int); // 0x690 NEW_2
	return 2; // 0x692 Return
}


func_1166()
{
	
Label_1166:
	Hold(); // 0x48e Func
	goto Label_1166; // 0x490 Jump
}


func_1807(var_256_bool)
{
	var_257_object = Obj(); var_258_int = 0; var_259_int = 0; var_260_int = 0; var_261_object = Obj(); var_262_int = 0; var_263_int = 0; var_264_int = 0; // 0x70f PushV
	CreateIntVector(var_261_object); // 0x710 Func
	var_265_object = Obj(); var_266_bool = 0; var_267_int = 0; // 0x712 PushV
	var_265_object = var_261_object; // 0x713 Mov
	var_266_bool = 0; // 0x714 MovB
	var_267_int = -1; // 0x715 MovI
	func_1755(var_267_int); // 0x716 NEW_2
	size(var_262_int); // 0x718 ObjFunc
	var_263_int = 0; // 0x71a MovI
	
Label_1819:
	var_279_bool = var_263_int < var_262_int; // 0x71b LT
	if(var_279_bool == 0) goto Label_1842; // 0x71c JumpB
	get(var_264_int, var_263_int); // 0x71d ObjFunc
	var_280_bool = 0; // 0x71f PushV
	var_280_bool = 1; // 0x720 MovB
	var_281_bool = 0; var_282_int = 0; // 0x721 PushV
	var_282_int = var_264_int; // 0x722 Mov
	func_1797(var_281_bool, var_282_int); // 0x723 NEW_2
	if(var_281_bool == 0) goto Label_1836; // 0x725 JumpB
	var_290_bool = 0; var_291_int = 0; // 0x726 PushV
	var_291_int = var_264_int; // 0x727 Mov
	func_1787(var_290_bool, var_291_int); // 0x728 NEW_2
	if(var_290_bool == 0) goto Label_1836; // 0x72a JumpB
	var_280_bool = 0; // 0x72b MovB
	
Label_1836:
	if(var_280_bool == 0) goto Label_1839; // 0x72c JumpB
	var_256_bool = 0; // 0x72d MovB
	return 8; // 0x72e Return
	
Label_1839:
	var_299_int = 1; // 0x72f PushI
	var_263_int = var_263_int + var_299_int; // 0x730 Add2
	goto Label_1819; // 0x731 Jump
	
Label_1842:
	var_256_bool = 1; // 0x732 MovB
	return 8; // 0x733 Return
}


func_1553()
{
	var_75_string = "ood12KlaraT2_2"; // 0x612 PushS
	var_76_int = 1; // 0x613 PushI
	SetVariable(var_75_string, var_76_int); // 0x614 Func
	return 0; // 0x616 Return
}


func_1684()
{
	var_22_object = Obj(); var_23_object = Obj(); // 0x694 PushV
	var_24_int = 707; // 0x695 PushI
	var_25_int = 1; // 0x696 PushI
	var_26_int = 535690; // 0x697 PushI
	CreateDiaryEntry(var_23_object, var_24_int, var_25_int, var_26_int); // 0x698 Func
	var_27_bool = 0; var_28_object = Obj(); var_29_int = 0; // 0x69a PushV
	var_28_object = var_23_object; // 0x69b Mov
	var_29_int = 699; // 0x69c MovI
	func_1710(var_27_bool, var_28_object, var_29_int); // 0x69d NEW_2
	return 2; // 0x69f Return
}


func_1301(var_78_bool, var_79_object)
{
	var_83_int = 0; var_84_int = 0; var_85_int = 0; var_86_int = 0; // 0x515 PushV
	var_87_string = "voice_common"; // 0x516 PushS
	GetVariable(var_87_string, var_85_int); // 0x517 Func
	var_88_int = var_85_int; // 0x519 Push
	if(var_88_int == 0) goto Label_1339; // 0x51a JumpB
	var_89_bool = 0; var_90_object = Obj(); // 0x51b PushV
	var_90_object = var_79_object; // 0x51c Mov
	func_1359(var_90_object); // 0x51d NEW_2
	var_119_bool = var_89_bool == 0; // 0x51f Not
	if(var_119_bool == 0) goto Label_1321; // 0x520 JumpB
	var_120_bool = 0; var_121_object = Obj(); // 0x521 PushV
	var_121_object = var_79_object; // 0x522 Mov
	func_1396(var_121_object); // 0x523 NEW_2
	var_155_bool = var_120_bool == 0; // 0x525 Not
	if(var_155_bool == 0) goto Label_1321; // 0x526 JumpB
	var_78_bool = 0; // 0x527 MovB
	return 4; // 0x528 Return
	
Label_1321:
	var_156_int = 2; // 0x529 PushI
	irand(var_86_int, var_156_int); // 0x52a Func
	var_157_int = var_86_int; // 0x52c Push
	if(var_157_int == 0) goto Label_1334; // 0x52d JumpB
	var_158_string = "voice_common"; // 0x52e PushS
	var_159_int = 1; // 0x52f PushI
	var_160_int = var_85_int + var_159_int; // 0x530 Add
	var_161_int = 3; // 0x531 PushI
	var_162_int = var_160_int / var_161_int; // 0x532 Mod
	SetVariable(var_158_string, var_162_int); // 0x533 Func
	goto Label_1338; // 0x535 Jump
	
Label_1338:
	goto Label_1357; // 0x53a Jump
	
Label_1357:
	var_78_bool = 1; // 0x54d MovB
	return 4; // 0x54e Return
	
Label_1334:
	var_163_string = "voice_common"; // 0x536 PushS
	var_164_int = 0; // 0x537 PushI
	SetVariable(var_163_string, var_164_int); // 0x538 Func
	
Label_1339:
	var_165_bool = 0; var_166_object = Obj(); // 0x53b PushV
	var_166_object = var_79_object; // 0x53c Mov
	func_1396(var_166_object); // 0x53d NEW_2
	var_167_bool = var_165_bool == 0; // 0x53f Not
	if(var_167_bool == 0) goto Label_1353; // 0x540 JumpB
	var_168_bool = 0; var_169_object = Obj(); // 0x541 PushV
	var_169_object = var_79_object; // 0x542 Mov
	func_1359(var_169_object); // 0x543 NEW_2
	var_170_bool = var_168_bool == 0; // 0x545 Not
	if(var_170_bool == 0) goto Label_1353; // 0x546 JumpB
	var_78_bool = 0; // 0x547 MovB
	return 4; // 0x548 Return
	
Label_1353:
	var_171_string = "voice_common"; // 0x549 PushS
	var_172_int = 1; // 0x54a PushI
	SetVariable(var_171_string, var_172_int); // 0x54b Func
}


func_1559()
{
	var_81_string = "ood12KlaraT2_3"; // 0x618 PushS
	var_82_int = 1; // 0x619 PushI
	SetVariable(var_81_string, var_82_int); // 0x61a Func
	return 0; // 0x61c Return
}


func_1531()
{
	var_198_string = "ood12KlaraT2_1"; // 0x5fc PushS
	var_199_int = 1; // 0x5fd PushI
	SetVariable(var_198_string, var_199_int); // 0x5fe Func
	return 0; // 0x600 Return
}


func_1565()
{
	var_202_string = "d12q01KlaraVisit"; // 0x61e PushS
	var_203_int = 1; // 0x61f PushI
	SetVariable(var_202_string, var_203_int); // 0x620 Func
	return 0; // 0x622 Return
}


func_1439(var_230_string)
{
	var_231_bool = 0; var_232_float = 0; var_233_float = 0; var_234_bool = 0; var_235_float = 0; var_236_float = 0; // 0x59f PushV
	lshHasAnimation(var_234_bool, var_230_string); // 0x5a0 Func
	var_237_bool = var_234_bool; // 0x5a2 Push
	if(var_237_bool == 0) goto Label_1450; // 0x5a3 JumpB
	lshGetAnimTimes(var_230_string, var_235_float, var_236_float); // 0x5a4 Func
	var_238_bool = 0; // 0x5a6 PushB
	lshPlayAnimation(var_235_float, var_236_float, var_238_bool); // 0x5a7 Func
	goto Label_1454; // 0x5a9 Jump
	
Label_1454:
	return 6; // 0x5ae Return
	
Label_1450:
	var_239_string = "Can't find lsh animation : "; // 0x5aa PushS
	var_240_int = var_239_string + var_230_string; // 0x5ab Add
	Trace(var_240_int); // 0x5ac Func
}


func_1697(var_36_object)
{
	var_37_object = Obj(); var_38_object = Obj(); // 0x6a1 PushV
	GetDiaryRoot(var_38_object); // 0x6a2 Func
	var_39_bool = var_38_object == 0; // 0x6a4 Not
	if(var_39_bool == 0) goto Label_1707; // 0x6a5 JumpB
	var_40_string = "Can't retrieve diary root"; // 0x6a6 PushS
	Trace(var_40_string); // 0x6a7 Func
	var_36_object = 0; // 0x6a9 MovB
	return 2; // 0x6aa Return
	
Label_1707:
	var_36_object = var_38_object; // 0x6ab Mov
	return 2; // 0x6ac Return
}


func_1571(var_330_bool)
{
	var_332_int = 0; var_333_string = ""; // 0x624 PushV
	var_333_string = "b12q01TheaterIsVisited"; // 0x625 MovS
	func_1508(var_332_int, var_333_string); // 0x626 NEW_2
	var_334_int = 0; // 0x628 PushI
	var_335_bool = var_332_int != var_334_int; // 0x629 Neq
	if(var_335_bool == 0) goto Label_1581; // 0x62a JumpB
	var_330_bool = 1; // 0x62b MovB
	return 0; // 0x62c Return
	
Label_1581:
	var_330_bool = 0; // 0x62d MovB
	return 0; // 0x62e Return
}


func_1710(var_27_bool, var_28_object, var_29_int)
{
	var_30_object = Obj(); var_31_object = Obj(); var_32_int = 0; var_33_object = Obj(); var_34_object = Obj(); var_35_int = 0; // 0x6ae PushV
	var_36_object = Obj(); // 0x6af PushV
	func_1697(var_36_object); // 0x6b0 NEW_2
	var_33_object = var_36_object; // 0x6b1 Mov
	Find(var_29_int, var_34_object); // 0x6b3 ObjFunc
	var_41_bool = var_34_object == 0; // 0x6b5 Not
	if(var_41_bool == 0) goto Label_1725; // 0x6b6 JumpB
	var_42_string = "Can't find diary parent with id: "; // 0x6b7 PushS
	var_43_int = var_42_string + var_29_int; // 0x6b8 Add
	Trace(var_43_int); // 0x6b9 Func
	var_27_bool = 0; // 0x6bb MovB
	return 6; // 0x6bc Return
	
Label_1725:
	AddChild(var_28_object); // 0x6bd ObjFunc
	var_44_int = 7; // 0x6bf PushI
	SendWorldWndMessage(var_44_int); // 0x6c0 Func
	GetCategory(var_35_int); // 0x6c2 ObjFunc
	SetDiarySection(var_35_int); // 0x6c4 Func
	var_27_bool = 0; // 0x6c6 MovB
	return 6; // 0x6c7 Return
}


func_1583(var_181_bool)
{
	var_183_int = 0; var_184_string = ""; // 0x630 PushV
	var_184_string = "game_final"; // 0x631 MovS
	func_1508(var_183_int, var_184_string); // 0x632 NEW_2
	var_187_int = 0; // 0x634 PushI
	var_188_bool = var_183_int != var_187_int; // 0x635 Neq
	if(var_188_bool == 0) goto Label_1593; // 0x636 JumpB
	var_181_bool = 1; // 0x637 MovB
	return 0; // 0x638 Return
	
Label_1593:
	var_181_bool = 0; // 0x639 MovB
	return 0; // 0x63a Return
}


func_1455(var_208_string, var_209_bool)
{
	var_212_bool = 0; var_213_float = 0; var_214_float = 0; var_215_bool = 0; var_216_float = 0; var_217_float = 0; // 0x5af PushV
	lshHasAnimation(var_215_bool, var_208_string); // 0x5b0 Func
	var_218_bool = var_215_bool; // 0x5b2 Push
	if(var_218_bool == 0) goto Label_1465; // 0x5b3 JumpB
	lshGetAnimTimes(var_208_string, var_216_float, var_217_float); // 0x5b4 Func
	lshPlayAnimation(var_216_float, var_217_float, var_209_bool); // 0x5b6 Func
	goto Label_1469; // 0x5b8 Jump
	
Label_1469:
	return 6; // 0x5bd Return
	
Label_1465:
	var_219_string = "Can't find lsh animation : "; // 0x5b9 PushS
	var_220_int = var_219_string + var_208_string; // 0x5ba Add
	Trace(var_220_int); // 0x5bb Func
}


func_1845(var_66_int)
{
	var_66_int = 515540; // 0x735 MovI
	return 0; // 0x736 Return
}


func_1847(var_65_int)
{
	var_65_int = 502865; // 0x737 MovI
	return 0; // 0x738 Return
}


func_1849(var_67_string)
{
	var_67_string = "ui/NPC_Klara.png"; // 0x739 MovS
	return 0; // 0x73a Return
}


func_1851(var_68_string)
{
	var_68_string = "ui/NPC_Klara_b.png"; // 0x73b MovS
	return 0; // 0x73c Return
}


func_1595(var_252_bool, var_253_object)
{
	var_254_bool = 0; var_255_object = Obj(); // 0x63c PushV
	var_255_object = var_253_object; // 0x63d Mov
	func_1665(var_255_object); // 0x63e NEW_2
	if(var_254_bool == 0) goto Label_1603; // 0x640 JumpB
	var_252_bool = 1; // 0x641 MovB
	return 0; // 0x642 Return
	
Label_1603:
	var_252_bool = 0; // 0x643 MovB
	return 0; // 0x644 Return
}


func_1853(var_60_bool)
{
	var_60_bool = 1; // 0x73d MovB
	return 0; // 0x73e Return
}


func_1214(var_8_bool)
{
	var_8_bool = 1; // 0x4be MovB
	return 0; // 0x4bf Return
}


func_1470(var_112_bool, var_113_string)
{
	var_114_bool = 0; var_115_bool = 0; // 0x5be PushV
	var_116_bool = 0; // 0x5bf PushV
	func_1853(var_116_bool); // 0x5c0 NEW_2
	if(var_116_bool == 0) goto Label_1483; // 0x5c2 JumpB
	lshHasSpeech(var_115_bool, var_113_string); // 0x5c3 Func
	var_117_bool = var_115_bool; // 0x5c5 Push
	if(var_117_bool == 0) goto Label_1483; // 0x5c6 JumpB
	lshPlaySpeech(var_113_string); // 0x5c7 Func
	var_112_bool = 1; // 0x5c9 MovB
	return 2; // 0x5ca Return
	
Label_1483:
	var_112_bool = 0; // 0x5cb MovB
	return 2; // 0x5cc Return
}


func_1216(var_18_bool, var_20_float)
{
	var_21_float = 0; var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_bool = 0; var_29_bool = 0; var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_bool = 0; var_38_bool = 0; // 0x4c0 PushV
	GetPosition(var_31_cvector); // 0x4c1 ObjFunc
	GetEyesHeight(var_30_float); // 0x4c3 ObjFunc
	var_39_float = GetByIndex(var_31_cvector, 1); // 0x4c5 PushE
	var_39_float = var_39_float + var_30_float; // 0x4c6 Add2
	SetByIndex(var_31_cvector, 1) = var_39_float; // 0x4c7 PopE
	GetPosition(var_32_cvector); // 0x4c8 Func
	GetEyesHeight(var_30_float); // 0x4ca Func
	var_40_float = GetByIndex(var_32_cvector, 1); // 0x4cc PushE
	var_40_float = var_40_float + var_30_float; // 0x4cd Add2
	SetByIndex(var_32_cvector, 1) = var_40_float; // 0x4ce PopE
	var_33_cvector = var_31_cvector - var_32_cvector; // 0x4cf Sub2
	var_41_float = GetByIndex(var_33_cvector, 1); // 0x4d0 PushE
	var_41_float = 0; // 0x4d1 MovI
	SetByIndex(var_33_cvector, 1) = var_41_float; // 0x4d2 PopE
	var_42_int = var_33_cvector | var_33_cvector; // 0x4d3 Or
	var_43_float = sqrt(var_42_int); // 0x4d4 Sqrt
	var_33_cvector = var_33_cvector / var_33_cvector; // 0x4d5 Div2
	var_34_cvector = -var_33_cvector; // 0x4d6 Neg2
	var_44_float = var_33_cvector * var_20_float; // 0x4d7 Mult
	var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); // 0x4d8 PushV
	var_47_cvector = CVector(0.0, 1.0, 0.0); // 0x4d9 PushVec
	var_46_cvector = var_34_cvector ^ var_47_cvector; // 0x4da Xor2
	func_1498(var_45_cvector, var_46_cvector); // 0x4db NEW_2
	var_53_int = 25; // 0x4dd PushI
	var_54_float = var_45_cvector * var_53_int; // 0x4de Mult
	var_55_int = var_44_float + var_54_float; // 0x4df Add
	var_56_cvector = CVector(0.0, 10.0, 0.0); // 0x4e0 PushVec
	var_35_cvector = var_55_int - var_56_cvector; // 0x4e1 Sub2
	var_36_cvector = var_32_cvector + var_35_cvector; // 0x4e2 Add2
	IsOverrideActive(var_37_bool); // 0x4e3 Func
	var_57_bool = var_37_bool; // 0x4e5 Push
	if(var_57_bool == 0) goto Label_1257; // 0x4e6 JumpB
	var_18_bool = 0; // 0x4e7 MovB
	return 18; // 0x4e8 Return
	
Label_1257:
	StopWorld(); // 0x4e9 Func
	CameraTransit(var_36_cvector, var_34_cvector); // 0x4eb Func
	var_58_float = GetByIndex(var_35_cvector, 0); // 0x4ed PushE
	var_59_float = GetByIndex(var_35_cvector, 2); // 0x4ee PushE
	Rotate(var_58_float, var_59_float); // 0x4ef Func
	var_60_bool = 0; // 0x4f1 PushV
	func_1853(var_60_bool); // 0x4f2 NEW_2
	if(var_60_bool == 0) goto Label_1270; // 0x4f4 JumpB
	goto Label_1278; // 0x4f5 Jump
	
Label_1278:
	CameraWaitForPlayFinish(); // 0x4fe Func
	ResumeWorld(); // 0x500 Func
	var_18_bool = 1; // 0x502 MovB
	return 18; // 0x503 Return
	
Label_1270:
	var_61_string = "head"; // 0x4f6 PushS
	HasAnimationTrack(var_38_bool, var_61_string); // 0x4f7 Func
	var_62_bool = var_38_bool; // 0x4f9 Push
	if(var_62_bool == 0) goto Label_1278; // 0x4fa JumpB
	var_63_string = "head"; // 0x4fb PushS
	LookAsyncCamera(var_63_string); // 0x4fc Func
}


func_1605(var_300_bool)
{
	var_302_int = 0; var_303_string = ""; // 0x646 PushV
	var_303_string = "d12q01KlaraInSobor"; // 0x647 MovS
	func_1508(var_302_int, var_303_string); // 0x648 NEW_2
	var_304_int = 0; // 0x64a PushI
	var_305_bool = var_302_int != var_304_int; // 0x64b Neq
	if(var_305_bool == 0) goto Label_1615; // 0x64c JumpB
	var_300_bool = 1; // 0x64d MovB
	return 0; // 0x64e Return
	
Label_1615:
	var_300_bool = 0; // 0x64f MovB
	return 0; // 0x650 Return
}


func_1738(var_69_int)
{
	var_70_int = 0; var_71_int = 0; // 0x6ca PushV
	var_72_string = "branch"; // 0x6cb PushS
	GetVariable(var_72_string, var_71_int); // 0x6cc Func
	var_73_int = 0; // 0x6ce PushI
	var_74_bool = var_71_int == var_73_int; // 0x6cf Eq
	if(var_74_bool == 0) goto Label_1748; // 0x6d0 JumpB
	var_69_int = 1; // 0x6d1 MovI
	return 2; // 0x6d2 Return
	
Label_1748:
	var_75_int = 1; // 0x6d4 PushI
	var_76_bool = var_71_int == var_75_int; // 0x6d5 Eq
	if(var_76_bool == 0) goto Label_1753; // 0x6d6 JumpB
	var_69_int = 2; // 0x6d7 MovI
	return 2; // 0x6d8 Return
	
Label_1753:
	var_69_int = 3; // 0x6d9 MovI
	return 2; // 0x6da Return
}


func_1485()
{
	var_9_bool = 0; // 0x5cd PushV
	func_1853(var_9_bool); // 0x5ce NEW_2
	if(var_9_bool == 0) goto Label_1491; // 0x5d0 JumpB
	lshStopSpeech(); // 0x5d1 Func
	
Label_1491:
	return 0; // 0x5d3 Return
}


func_1359(var_89_bool)
{
	var_91_string = ""; var_92_int = 0; var_93_bool = 0; var_94_int = 0; var_95_string = ""; var_96_string = ""; var_97_int = 0; var_98_bool = 0; var_99_int = 0; var_100_string = ""; // 0x54f PushV
	var_96_string = "c"; // 0x550 MovS
	var_97_int = 0; // 0x551 MovI
	
Label_1362:
	var_101_int = 1; // 0x552 PushI
	if(var_101_int == 0) goto Label_1375; // 0x553 JumpB
	var_102_int = 1; // 0x554 PushI
	var_103_int = var_97_int + var_102_int; // 0x555 Add
	var_104_int = var_96_string + var_103_int; // 0x556 Add
	HasProperty(var_104_int, var_98_bool); // 0x557 ObjFunc
	var_105_bool = var_98_bool == 0; // 0x559 Not
	if(var_105_bool == 0) goto Label_1372; // 0x55a JumpB
	goto Label_1375; // 0x55b Jump
	
Label_1375:
	var_106_bool = var_97_int == 0; // 0x55f Not
	if(var_106_bool == 0) goto Label_1379; // 0x560 JumpB
	var_89_bool = 0; // 0x561 MovB
	return 10; // 0x562 Return
	
Label_1379:
	var_99_int = 0; // 0x563 MovI
	var_107_int = 1; // 0x564 PushI
	var_108_bool = var_97_int > var_107_int; // 0x565 GT
	if(var_108_bool == 0) goto Label_1385; // 0x566 JumpB
	irand(var_99_int, var_97_int); // 0x567 Func
	
Label_1385:
	var_109_int = 1; // 0x569 PushI
	var_110_int = var_99_int + var_109_int; // 0x56a Add
	var_111_int = var_96_string + var_110_int; // 0x56b Add
	GetProperty(var_111_int, var_100_string); // 0x56c ObjFunc
	var_112_bool = 0; var_113_string = ""; // 0x56e PushV
	var_113_string = var_100_string; // 0x56f Mov
	func_1470(var_112_bool, var_113_string); // 0x570 NEW_2
	var_89_bool = var_112_bool; // 0x571 Mov
	return 10; // 0x573 Return
	
Label_1372:
	var_118_int = 1; // 0x55c PushI
	var_97_int = var_97_int + var_118_int; // 0x55d Add2
	goto Label_1362; // 0x55e Jump
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_173_object, var_174_object)
{
	var_0_object = var_174_object; // 0x52 TMov
	var_1_object = var_173_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_179_int = 1; // 0x55 PushI
	if(var_179_int == 0) goto Label_222; // 0x56 JumpB
	var_180_bool = 0; // 0x57 PushV
	var_180_bool = 0; // 0x58 MovB
	var_181_bool = 0; var_182_object = Obj(); // 0x59 PushV
	var_182_object = var_1_object; // 0x5a MovT
	func_1583(var_182_object); // 0x5b NEW_2
	var_189_bool = var_181_bool == 0; // 0x5d Not
	if(var_189_bool == 0) goto Label_101; // 0x5e JumpB
	var_190_bool = 0; var_191_object = Obj(); // 0x5f PushV
	var_191_object = var_1_object; // 0x60 MovT
	func_1617(var_191_object); // 0x61 NEW_2
	if(var_190_bool == 0) goto Label_101; // 0x63 JumpB
	var_180_bool = 1; // 0x64 MovB
	
Label_101:
	if(var_180_bool == 0) goto Label_132; // 0x65 JumpB
	var_196_object = Obj(); var_197_object = Obj(); // 0x66 PushV
	var_196_object = var_1_object; // 0x67 MovT
	var_197_object = var_0_object; // 0x68 MovT
	func_1531(); // 0x69 NEW_2
	var_200_object = Obj(); var_201_object = Obj(); // 0x6b PushV
	var_200_object = var_1_object; // 0x6c MovT
	var_201_object = var_0_object; // 0x6d MovT
	func_1565(); // 0x6e NEW_2
	var_204_string = ""; // 0x70 PushV
	var_204_string = "Sly"; // 0x71 MovS
	func_252(var_174_object, var_204_string); // 0x72 NEW_2
	var_221_int = 535645; // 0x74 PushI
	SetMessage(var_221_int); // 0x75 TObjFunc
	ClearReplies(); // 0x77 TObjFunc
	var_222_int = 540387; // 0x79 PushI
	var_223_int = 42374; // 0x7a PushI
	var_224_int = 42373; // 0x7b PushI
	AddReply(var_222_int, var_223_int, var_224_int); // 0x7c TObjFunc
	var_225_int = 540424; // 0x7e PushI
	var_226_int = 42403; // 0x7f PushI
	var_227_int = 42411; // 0x80 PushI
	AddReply(var_225_int, var_226_int, var_227_int); // 0x81 TObjFunc
	goto Label_222; // 0x83 Jump
	
Label_222:
	var_228_bool = 0; // 0xde PushV
	func_1853(var_228_bool); // 0xdf NEW_2
	if(var_228_bool == 0) goto Label_237; // 0xe1 JumpB
	
Label_226:
	lshWaitForAnimEnd(); // 0xe2 Func
	var_229_string = var_3_string; // 0xe4 PushT
	if(var_229_string == 0) goto Label_231; // 0xe5 JumpB
	goto Label_236; // 0xe6 Jump
	
Label_236:
	goto Label_251; // 0xec Jump
	
Label_251:
	return 0; // 0xfb Return
	
Label_231:
	var_230_string = ""; // 0xe7 PushV
	var_230_string = var_2_object; // 0xe8 MovT
	func_1439(var_230_string); // 0xe9 NEW_2
	goto Label_226; // 0xeb Jump
	
Label_237:
	var_241_string = "all"; // 0xed PushS
	var_242_string = "idle"; // 0xee PushS
	PlayAnimation(var_241_string, var_242_string); // 0xef Func
	
Label_241:
	WaitForAnimEnd(); // 0xf1 Func
	var_243_string = var_3_string; // 0xf3 PushT
	if(var_243_string == 0) goto Label_246; // 0xf4 JumpB
	goto Label_251; // 0xf5 Jump
	
Label_246:
	var_244_string = "all"; // 0xf6 PushS
	var_245_string = "idle"; // 0xf7 PushS
	PlayAnimation(var_244_string, var_245_string); // 0xf8 Func
	goto Label_241; // 0xfa Jump
	
Label_132:
	var_246_object = Obj(); var_247_object = Obj(); // 0x84 PushV
	var_246_object = var_1_object; // 0x85 MovT
	var_247_object = var_0_object; // 0x86 MovT
	func_1565(); // 0x87 NEW_2
	var_248_string = ""; // 0x89 PushV
	var_248_string = "Fear"; // 0x8a MovS
	func_252(var_174_object, var_248_string); // 0x8b NEW_2
	var_249_int = 535653; // 0x8d PushI
	SetMessage(var_249_int); // 0x8e TObjFunc
	ClearReplies(); // 0x90 TObjFunc
	var_250_bool = 0; // 0x92 PushV
	var_250_bool = 0; // 0x93 MovB
	var_251_bool = 0; // 0x94 PushV
	var_251_bool = 0; // 0x95 MovB
	var_252_bool = 0; var_253_object = Obj(); // 0x96 PushV
	var_253_object = var_1_object; // 0x97 MovT
	func_1595(var_252_bool, var_253_object); // 0x98 NEW_2
	if(var_252_bool == 0) goto Label_162; // 0x9a JumpB
	var_300_bool = 0; var_301_object = Obj(); // 0x9b PushV
	var_301_object = var_1_object; // 0x9c MovT
	func_1605(var_301_object); // 0x9d NEW_2
	var_306_bool = var_300_bool == 0; // 0x9f Not
	if(var_306_bool == 0) goto Label_162; // 0xa0 JumpB
	var_251_bool = 1; // 0xa1 MovB
	
Label_162:
	if(var_251_bool == 0) goto Label_170; // 0xa2 JumpB
	var_307_bool = 0; var_308_object = Obj(); // 0xa3 PushV
	var_308_object = var_1_object; // 0xa4 MovT
	func_1583(var_308_object); // 0xa5 NEW_2
	var_309_bool = var_307_bool == 0; // 0xa7 Not
	if(var_309_bool == 0) goto Label_170; // 0xa8 JumpB
	var_250_bool = 1; // 0xa9 MovB
	
Label_170:
	if(var_250_bool == 0) goto Label_176; // 0xaa JumpB
	var_310_int = 535654; // 0xab PushI
	var_311_int = 37341; // 0xac PushI
	var_312_int = 37340; // 0xad PushI
	AddReply(var_310_int, var_311_int, var_312_int); // 0xae TObjFunc
	
Label_176:
	var_313_bool = 0; // 0xb0 PushV
	var_313_bool = 0; // 0xb1 MovB
	var_314_bool = 0; var_315_object = Obj(); // 0xb2 PushV
	var_315_object = var_1_object; // 0xb3 MovT
	func_1653(var_315_object); // 0xb4 NEW_2
	if(var_314_bool == 0) goto Label_189; // 0xb6 JumpB
	var_320_bool = 0; var_321_object = Obj(); // 0xb7 PushV
	var_321_object = var_1_object; // 0xb8 MovT
	func_1629(var_321_object); // 0xb9 NEW_2
	if(var_320_bool == 0) goto Label_189; // 0xbb JumpB
	var_313_bool = 1; // 0xbc MovB
	
Label_189:
	if(var_313_bool == 0) goto Label_195; // 0xbd JumpB
	var_326_int = 540429; // 0xbe PushI
	var_327_int = 42419; // 0xbf PushI
	var_328_int = 42418; // 0xc0 PushI
	AddReply(var_326_int, var_327_int, var_328_int); // 0xc1 TObjFunc
	
Label_195:
	var_329_bool = 0; // 0xc3 PushV
	var_329_bool = 0; // 0xc4 MovB
	var_330_bool = 0; var_331_object = Obj(); // 0xc5 PushV
	var_331_object = var_1_object; // 0xc6 MovT
	func_1571(var_331_object); // 0xc7 NEW_2
	if(var_330_bool == 0) goto Label_208; // 0xc9 JumpB
	var_336_bool = 0; var_337_object = Obj(); // 0xca PushV
	var_337_object = var_1_object; // 0xcb MovT
	func_1641(var_337_object); // 0xcc NEW_2
	if(var_336_bool == 0) goto Label_208; // 0xce JumpB
	var_329_bool = 1; // 0xcf MovB
	
Label_208:
	if(var_329_bool == 0) goto Label_214; // 0xd0 JumpB
	var_342_int = 540447; // 0xd1 PushI
	var_343_int = 42439; // 0xd2 PushI
	var_344_int = 42438; // 0xd3 PushI
	AddReply(var_342_int, var_343_int, var_344_int); // 0xd4 TObjFunc
	
Label_214:
	var_345_int = 540478; // 0xd6 PushI
	var_346_int = -1; // 0xd7 PushI
	var_347_int = 42473; // 0xd8 PushI
	AddReply(var_345_int, var_346_int, var_347_int); // 0xd9 TObjFunc
	goto Label_222; // 0xdb Jump
}


func_1617(var_190_bool)
{
	var_192_int = 0; var_193_string = ""; // 0x652 PushV
	var_193_string = "ood12KlaraT2_1"; // 0x653 MovS
	func_1508(var_192_int, var_193_string); // 0x654 NEW_2
	var_194_int = 0; // 0x656 PushI
	var_195_bool = var_192_int == var_194_int; // 0x657 Eq
	if(var_195_bool == 0) goto Label_1627; // 0x658 JumpB
	var_190_bool = 1; // 0x659 MovB
	return 0; // 0x65a Return
	
Label_1627:
	var_190_bool = 0; // 0x65b MovB
	return 0; // 0x65c Return
}


func_1492(var_9_object)
{
	var_10_object = Obj(); var_11_object = Obj(); // 0x5d4 PushV
	self(var_11_object); // 0x5d5 Func
	var_9_object = var_11_object; // 0x5d7 Mov
	return 2; // 0x5d8 Return
}


func_1498(var_45_cvector, var_46_cvector)
{
	var_48_float = 0; var_49_float = 0; // 0x5da PushV
	var_50_int = var_46_cvector | var_46_cvector; // 0x5db Or
	var_49_float = sqrt(var_50_int); // 0x5dc Sqrt2
	var_51_float = 0.0; // 0x5dd PushF
	var_52_bool = var_49_float < var_51_float; // 0x5de LT
	if(var_52_bool == 0) goto Label_1506; // 0x5df JumpB
	var_45_cvector = CVector(0.0, 0.0, 0.0); // 0x5e0 MovV
	return 2; // 0x5e1 Return
	
Label_1506:
	var_45_cvector = var_46_cvector / var_46_cvector; // 0x5e2 Div2
	return 2; // 0x5e3 Return
}


func_1755(var_266_bool)
{
	var_268_int = 7; // 0x6dc PushI
	add(var_268_int); // 0x6dd ObjFunc
	var_269_int = 23; // 0x6df PushI
	add(var_269_int); // 0x6e0 ObjFunc
	var_270_int = 21; // 0x6e2 PushI
	add(var_270_int); // 0x6e3 ObjFunc
	var_271_int = 9; // 0x6e5 PushI
	add(var_271_int); // 0x6e6 ObjFunc
	var_272_int = 3; // 0x6e8 PushI
	add(var_272_int); // 0x6e9 ObjFunc
	var_273_int = 1; // 0x6eb PushI
	add(var_273_int); // 0x6ec ObjFunc
	var_274_int = 11; // 0x6ee PushI
	add(var_274_int); // 0x6ef ObjFunc
	var_275_int = 13; // 0x6f1 PushI
	add(var_275_int); // 0x6f2 ObjFunc
	var_276_bool = 0; // 0x6f4 PushB
	var_277_bool = var_266_bool == var_276_bool; // 0x6f5 Eq
	if(var_277_bool == 0) goto Label_1786; // 0x6f6 JumpB
	var_278_int = 25; // 0x6f7 PushI
	add(var_278_int); // 0x6f8 ObjFunc
	
Label_1786:
	return 0; // 0x6fa Return
}


func_1629(var_320_bool)
{
	var_322_int = 0; var_323_string = ""; // 0x65e PushV
	var_323_string = "ood12KlaraT2_2"; // 0x65f MovS
	func_1508(var_322_int, var_323_string); // 0x660 NEW_2
	var_324_int = 0; // 0x662 PushI
	var_325_bool = var_322_int == var_324_int; // 0x663 Eq
	if(var_325_bool == 0) goto Label_1639; // 0x664 JumpB
	var_320_bool = 1; // 0x665 MovB
	return 0; // 0x666 Return
	
Label_1639:
	var_320_bool = 0; // 0x667 MovB
	return 0; // 0x668 Return
}


func_1508(var_183_int, var_184_string)
{
	var_185_int = 0; var_186_int = 0; // 0x5e4 PushV
	GetVariable(var_184_string, var_186_int); // 0x5e5 Func
	var_183_int = var_186_int; // 0x5e7 Mov
	return 2; // 0x5e8 Return
}


func_1641(var_336_bool)
{
	var_338_int = 0; var_339_string = ""; // 0x66a PushV
	var_339_string = "ood12KlaraT2_3"; // 0x66b MovS
	func_1508(var_338_int, var_339_string); // 0x66c NEW_2
	var_340_int = 0; // 0x66e PushI
	var_341_bool = var_338_int == var_340_int; // 0x66f Eq
	if(var_341_bool == 0) goto Label_1651; // 0x670 JumpB
	var_336_bool = 1; // 0x671 MovB
	return 0; // 0x672 Return
	
Label_1651:
	var_336_bool = 0; // 0x673 MovB
	return 0; // 0x674 Return
}


func_1513(var_133_int)
{
	var_134_float = 0; var_135_float = 0; // 0x5e9 PushV
	GetGameTime(var_135_float); // 0x5ea Func
	var_136_int = 1; // 0x5ec PushI
	var_137_int = 0; // 0x5ed PushV
	var_138_int = 24; // 0x5ee PushI
	var_137_int = var_135_float / var_135_float; // 0x5ef Div2
	var_133_int = var_136_int + var_137_int; // 0x5f0 Add2
	return 2; // 0x5f1 Return
}


func_1522()
{
	var_49_string = "d12q01KlaraInSobor"; // 0x5f3 PushS
	var_50_int = 1; // 0x5f4 PushI
	SetVariable(var_49_string, var_50_int); // 0x5f5 Func
	func_1671(); // 0x5f8 NEW_2
	return 0; // 0x5fa Return
}


func_1396(var_120_bool)
{
	var_122_string = ""; var_123_int = 0; var_124_bool = 0; var_125_int = 0; var_126_string = ""; var_127_string = ""; var_128_int = 0; var_129_bool = 0; var_130_int = 0; var_131_string = ""; // 0x574 PushV
	var_132_string = "d"; // 0x575 PushS
	var_133_int = 0; // 0x576 PushV
	func_1513(var_133_int); // 0x577 NEW_2
	var_139_int = var_132_string + var_133_int; // 0x579 Add
	var_140_string = "m"; // 0x57a PushS
	var_127_string = var_139_int + var_140_string; // 0x57b Add2
	var_128_int = 0; // 0x57c MovI
	
Label_1405:
	var_141_int = 1; // 0x57d PushI
	if(var_141_int == 0) goto Label_1418; // 0x57e JumpB
	var_142_int = 1; // 0x57f PushI
	var_143_int = var_128_int + var_142_int; // 0x580 Add
	var_144_int = var_127_string + var_143_int; // 0x581 Add
	HasProperty(var_144_int, var_129_bool); // 0x582 ObjFunc
	var_145_bool = var_129_bool == 0; // 0x584 Not
	if(var_145_bool == 0) goto Label_1415; // 0x585 JumpB
	goto Label_1418; // 0x586 Jump
	
Label_1418:
	var_146_bool = var_128_int == 0; // 0x58a Not
	if(var_146_bool == 0) goto Label_1422; // 0x58b JumpB
	var_120_bool = 0; // 0x58c MovB
	return 10; // 0x58d Return
	
Label_1422:
	var_130_int = 0; // 0x58e MovI
	var_147_int = 1; // 0x58f PushI
	var_148_bool = var_128_int > var_147_int; // 0x590 GT
	if(var_148_bool == 0) goto Label_1428; // 0x591 JumpB
	irand(var_130_int, var_128_int); // 0x592 Func
	
Label_1428:
	var_149_int = 1; // 0x594 PushI
	var_150_int = var_130_int + var_149_int; // 0x595 Add
	var_151_int = var_127_string + var_150_int; // 0x596 Add
	GetProperty(var_151_int, var_131_string); // 0x597 ObjFunc
	var_152_bool = 0; var_153_string = ""; // 0x599 PushV
	var_153_string = var_131_string; // 0x59a Mov
	func_1470(var_152_bool, var_153_string); // 0x59b NEW_2
	var_120_bool = var_152_bool; // 0x59c Mov
	return 10; // 0x59e Return
	
Label_1415:
	var_154_int = 1; // 0x587 PushI
	var_128_int = var_128_int + var_154_int; // 0x588 Add2
	goto Label_1405; // 0x589 Jump
}


func_1653(var_314_bool)
{
	var_316_int = 0; var_317_string = ""; // 0x676 PushV
	var_317_string = "d12q01ChildsAreVisited"; // 0x677 MovS
	func_1508(var_316_int, var_317_string); // 0x678 NEW_2
	var_318_int = 0; // 0x67a PushI
	var_319_bool = var_316_int != var_318_int; // 0x67b Neq
	if(var_319_bool == 0) goto Label_1663; // 0x67c JumpB
	var_314_bool = 1; // 0x67d MovB
	return 0; // 0x67e Return
	
Label_1663:
	var_314_bool = 0; // 0x67f MovB
	return 0; // 0x680 Return
}


func_1787(var_290_bool, var_291_int)
{
	var_292_int = 0; var_293_int = 0; // 0x6fb PushV
	var_294_string = "vol_"; // 0x6fc PushS
	var_295_int = var_294_string + var_291_int; // 0x6fd Add
	GetVariable(var_295_int, var_293_int); // 0x6fe Func
	var_296_int = 4; // 0x700 PushI
	var_297_int = var_293_int & var_296_int; // 0x701 And
	var_298_int = 0; // 0x702 PushI
	var_290_bool = var_297_int != var_298_int; // 0x703 Neq2
	return 2; // 0x704 Return
}


func_252(var_2_object, var_204_string)
{
	var_205_bool = 0; // 0xfd PushV
	func_1853(var_205_bool); // 0xfe NEW_2
	var_206_bool = var_205_bool == 0; // 0x100 Not
	if(var_206_bool == 0) goto Label_259; // 0x101 JumpB
	return 0; // 0x102 Return
	
Label_259:
	var_207_bool = var_204_string == var_2_object; // 0x103 Eq
	if(var_207_bool == 0) goto Label_262; // 0x104 JumpB
	return 0; // 0x105 Return
	
Label_262:
	var_208_string = ""; var_209_bool = 0; // 0x106 PushV
	var_208_string = var_204_string; // 0x107 Mov
	var_210_string = ""; // 0x108 PushS
	var_211_bool = var_204_string == var_210_string; // 0x109 Eq
	if(var_211_bool == 0) goto Label_269; // 0x10a JumpB
	var_209_bool = 0; // 0x10b MovB
	goto Label_270; // 0x10c Jump
	
Label_270:
	func_1455(var_208_string, var_209_bool); // 0x10e NEW_2
	var_2_object = var_204_string; // 0x110 TMov
	return 0; // 0x111 Return
	
Label_269:
	var_209_bool = 1; // 0x10d MovB
}


