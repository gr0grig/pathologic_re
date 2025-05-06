task_0_event_11(var_0_bool, var_1_int, var_2_object, var_3_object, var_4_object, var_5_string, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_object, var_53_object, var_54_object, var_55_string, var_56_bool, var_57_object, var_58_object, var_59_object, var_60_string, var_61_bool, var_62_object, var_63_object, var_64_object, var_65_string, var_66_bool, var_67_cvector)
{
	lshStopAnimation(); // 0x10 Func
	StopTrade(); // 0x12 Func
	var_0_bool = 1; // 0x14 TMovB
	return 0; // 0x15 Return
}


task_2_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_int, var_7_int, var_8_object, var_9_object, var_10_object, var_11_string, var_12_bool, var_13_object, var_14_object, var_15_object, var_16_string, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool, var_23_object, var_24_object, var_25_object, var_26_string, var_27_bool, var_28_object, var_29_object, var_30_object, var_31_string, var_32_bool, var_33_object, var_34_object, var_35_object, var_36_string, var_37_bool, var_38_object, var_39_object, var_40_object, var_41_string, var_42_bool, var_43_object, var_44_object, var_45_object, var_46_string, var_47_bool, var_48_object, var_49_object, var_50_object, var_51_string, var_52_bool, var_53_object, var_54_object, var_55_object, var_56_string, var_57_bool, var_58_object, var_59_object, var_60_object, var_61_string, var_62_bool, var_63_object, var_64_object, var_65_object, var_66_string, var_67_bool, var_68_cvector)
{
	var_69_int = 1; // 0xb8 PushI
	if(var_69_int == 0) goto Label_247; // 0xb9 JumpB
	func_4610(); // 0xbb NEW_2
	var_71_int = 26839; // 0xbd PushI
	var_72_bool = var_67_bool == var_71_int; // 0xbe Eq
	if(var_72_bool == 0) goto Label_212; // 0xbf JumpB
	var_73_string = ""; // 0xc0 PushV
	var_73_string = "Neutral"; // 0xc1 MovS
	func_161(var_68_cvector, var_73_string); // 0xc2 NEW_2
	var_90_int = 525483; // 0xc4 PushI
	SetMessage(var_90_int); // 0xc5 TObjFunc
	ClearReplies(); // 0xc7 TObjFunc
	var_91_int = 525484; // 0xc9 PushI
	var_92_int = 30758; // 0xca PushI
	var_93_int = 26840; // 0xcb PushI
	AddReply(var_91_int, var_92_int, var_93_int); // 0xcc TObjFunc
	var_94_int = 529303; // 0xce PushI
	var_95_int = -1; // 0xcf PushI
	var_96_int = 30757; // 0xd0 PushI
	AddReply(var_94_int, var_95_int, var_96_int); // 0xd1 TObjFunc
	return 0; // 0xd3 Return
	
Label_212:
	var_97_int = 30758; // 0xd4 PushI
	var_98_bool = var_67_bool == var_97_int; // 0xd5 Eq
	if(var_98_bool == 0) goto Label_235; // 0xd6 JumpB
	var_99_string = ""; // 0xd7 PushV
	var_99_string = "Neutral"; // 0xd8 MovS
	func_161(var_68_cvector, var_99_string); // 0xd9 NEW_2
	var_100_int = 529304; // 0xdb PushI
	SetMessage(var_100_int); // 0xdc TObjFunc
	ClearReplies(); // 0xde TObjFunc
	var_101_int = 529305; // 0xe0 PushI
	var_102_int = -1; // 0xe1 PushI
	var_103_int = 30759; // 0xe2 PushI
	AddReply(var_101_int, var_102_int, var_103_int); // 0xe3 TObjFunc
	var_104_int = 542281; // 0xe5 PushI
	var_105_int = -1; // 0xe6 PushI
	var_106_int = 44626; // 0xe7 PushI
	AddReply(var_104_int, var_105_int, var_106_int); // 0xe8 TObjFunc
	return 0; // 0xea Return
	
Label_235:
	var_3_object = 1; // 0xeb TMovB
	var_107_bool = 0; // 0xec PushV
	func_4735(var_107_bool); // 0xed NEW_2
	if(var_107_bool == 0) goto Label_243; // 0xef JumpB
	lshStopAnimation(); // 0xf0 Func
	goto Label_245; // 0xf2 Jump
	
Label_245:
	return 0; // 0xf5 Return
	
Label_243:
	StopAnimation(); // 0xf3 Func
	
Label_247:
	return 0; // 0xf7 Return
}


task_4_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_int, var_12_int, var_13_object, var_14_object, var_15_object, var_16_string, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool, var_23_object, var_24_object, var_25_object, var_26_string, var_27_bool, var_28_object, var_29_object, var_30_object, var_31_string, var_32_bool, var_33_object, var_34_object, var_35_object, var_36_string, var_37_bool, var_38_object, var_39_object, var_40_object, var_41_string, var_42_bool, var_43_object, var_44_object, var_45_object, var_46_string, var_47_bool, var_48_object, var_49_object, var_50_object, var_51_string, var_52_bool, var_53_object, var_54_object, var_55_object, var_56_string, var_57_bool, var_58_object, var_59_object, var_60_object, var_61_string, var_62_bool, var_63_object, var_64_object, var_65_object, var_66_string, var_67_bool, var_68_cvector)
{
	var_69_int = 1; // 0x1bd PushI
	if(var_69_int == 0) goto Label_1317; // 0x1be JumpB
	func_4610(); // 0x1c0 NEW_2
	var_71_int = 27011; // 0x1c2 PushI
	var_72_bool = var_68_cvector == var_71_int; // 0x1c3 Eq
	if(var_72_bool == 0) goto Label_463; // 0x1c4 JumpB
	var_73_object = Obj(); var_74_object = Obj(); // 0x1c5 PushV
	var_73_object = var_1_object; // 0x1c6 MovT
	var_74_object = var_0_bool; // 0x1c7 MovT
	func_4753(); // 0x1c8 NEW_2
	var_116_object = Obj(); var_117_object = Obj(); // 0x1ca PushV
	var_116_object = var_1_object; // 0x1cb MovT
	var_117_object = var_0_bool; // 0x1cc MovT
	func_4737(); // 0x1cd NEW_2
	
Label_463:
	var_142_int = 44725; // 0x1cf PushI
	var_143_bool = var_68_cvector == var_142_int; // 0x1d0 Eq
	if(var_143_bool == 0) goto Label_471; // 0x1d1 JumpB
	var_144_object = Obj(); var_145_object = Obj(); // 0x1d2 PushV
	var_144_object = var_1_object; // 0x1d3 MovT
	var_145_object = var_0_bool; // 0x1d4 MovT
	func_4753(); // 0x1d5 NEW_2
	
Label_471:
	var_146_int = 27021; // 0x1d7 PushI
	var_147_bool = var_68_cvector == var_146_int; // 0x1d8 Eq
	if(var_147_bool == 0) goto Label_484; // 0x1d9 JumpB
	var_148_object = Obj(); var_149_object = Obj(); // 0x1da PushV
	var_148_object = var_1_object; // 0x1db MovT
	var_149_object = var_0_bool; // 0x1dc MovT
	func_4776(); // 0x1dd NEW_2
	var_174_object = Obj(); var_175_object = Obj(); // 0x1df PushV
	var_174_object = var_1_object; // 0x1e0 MovT
	var_175_object = var_0_bool; // 0x1e1 MovT
	func_4879(); // 0x1e2 NEW_2
	
Label_484:
	var_181_int = 44742; // 0x1e4 PushI
	var_182_bool = var_68_cvector == var_181_int; // 0x1e5 Eq
	if(var_182_bool == 0) goto Label_492; // 0x1e6 JumpB
	var_183_object = Obj(); var_184_object = Obj(); // 0x1e7 PushV
	var_183_object = var_1_object; // 0x1e8 MovT
	var_184_object = var_0_bool; // 0x1e9 MovT
	func_4776(); // 0x1ea NEW_2
	
Label_492:
	var_185_int = 27037; // 0x1ec PushI
	var_186_bool = var_68_cvector == var_185_int; // 0x1ed Eq
	if(var_186_bool == 0) goto Label_500; // 0x1ee JumpB
	var_187_object = Obj(); var_188_object = Obj(); // 0x1ef PushV
	var_187_object = var_1_object; // 0x1f0 MovT
	var_188_object = var_0_bool; // 0x1f1 MovT
	func_4804(); // 0x1f2 NEW_2
	
Label_500:
	var_199_int = 27038; // 0x1f4 PushI
	var_200_bool = var_68_cvector == var_199_int; // 0x1f5 Eq
	if(var_200_bool == 0) goto Label_508; // 0x1f6 JumpB
	var_201_object = Obj(); var_202_object = Obj(); // 0x1f7 PushV
	var_201_object = var_1_object; // 0x1f8 MovT
	var_202_object = var_0_bool; // 0x1f9 MovT
	func_4804(); // 0x1fa NEW_2
	
Label_508:
	var_203_int = 44753; // 0x1fc PushI
	var_204_bool = var_68_cvector == var_203_int; // 0x1fd Eq
	if(var_204_bool == 0) goto Label_516; // 0x1fe JumpB
	var_205_object = Obj(); var_206_object = Obj(); // 0x1ff PushV
	var_205_object = var_1_object; // 0x200 MovT
	var_206_object = var_0_bool; // 0x201 MovT
	func_4870(); // 0x202 NEW_2
	
Label_516:
	var_217_int = 44754; // 0x204 PushI
	var_218_bool = var_68_cvector == var_217_int; // 0x205 Eq
	if(var_218_bool == 0) goto Label_524; // 0x206 JumpB
	var_219_object = Obj(); var_220_object = Obj(); // 0x207 PushV
	var_219_object = var_1_object; // 0x208 MovT
	var_220_object = var_0_bool; // 0x209 MovT
	func_4870(); // 0x20a NEW_2
	
Label_524:
	var_221_int = 27943; // 0x20c PushI
	var_222_bool = var_68_cvector == var_221_int; // 0x20d Eq
	if(var_222_bool == 0) goto Label_532; // 0x20e JumpB
	var_223_object = Obj(); var_224_object = Obj(); // 0x20f PushV
	var_223_object = var_1_object; // 0x210 MovT
	var_224_object = var_0_bool; // 0x211 MovT
	func_4895(); // 0x212 NEW_2
	
Label_532:
	var_226_int = 27004; // 0x214 PushI
	var_227_bool = var_67_bool == var_226_int; // 0x215 Eq
	if(var_227_bool == 0) goto Label_590; // 0x216 JumpB
	var_228_string = ""; // 0x217 PushV
	var_228_string = "Neutral"; // 0x218 MovS
	func_422(var_68_cvector, var_228_string); // 0x219 NEW_2
	var_245_int = 525681; // 0x21b PushI
	SetMessage(var_245_int); // 0x21c TObjFunc
	ClearReplies(); // 0x21e TObjFunc
	var_246_bool = 0; var_247_object = Obj(); // 0x220 PushV
	var_247_object = var_1_object; // 0x221 MovT
	func_4900(var_247_object); // 0x222 NEW_2
	if(var_246_bool == 0) goto Label_554; // 0x224 JumpB
	var_254_int = 525682; // 0x225 PushI
	var_255_int = 44708; // 0x226 PushI
	var_256_int = 27005; // 0x227 PushI
	AddReply(var_254_int, var_255_int, var_256_int); // 0x228 TObjFunc
	
Label_554:
	var_257_bool = 0; var_258_object = Obj(); // 0x22a PushV
	var_258_object = var_1_object; // 0x22b MovT
	func_4912(var_258_object); // 0x22c NEW_2
	if(var_257_bool == 0) goto Label_564; // 0x22e JumpB
	var_263_int = 525696; // 0x22f PushI
	var_264_int = 30190; // 0x230 PushI
	var_265_int = 27019; // 0x231 PushI
	AddReply(var_263_int, var_264_int, var_265_int); // 0x232 TObjFunc
	
Label_564:
	var_266_bool = 0; var_267_object = Obj(); // 0x234 PushV
	var_267_object = var_1_object; // 0x235 MovT
	func_4924(var_267_object); // 0x236 NEW_2
	if(var_266_bool == 0) goto Label_574; // 0x238 JumpB
	var_272_int = 525709; // 0x239 PushI
	var_273_int = 27032; // 0x23a PushI
	var_274_int = 27031; // 0x23b PushI
	AddReply(var_272_int, var_273_int, var_274_int); // 0x23c TObjFunc
	
Label_574:
	var_275_int = 526667; // 0x23e PushI
	var_276_int = -1; // 0x23f PushI
	var_277_int = 27943; // 0x240 PushI
	AddReply(var_275_int, var_276_int, var_277_int); // 0x241 TObjFunc
	var_278_int = 525689; // 0x243 PushI
	var_279_int = -1; // 0x244 PushI
	var_280_int = 27012; // 0x245 PushI
	AddReply(var_278_int, var_279_int, var_280_int); // 0x246 TObjFunc
	var_281_int = 528783; // 0x248 PushI
	var_282_int = -1; // 0x249 PushI
	var_283_int = 30195; // 0x24a PushI
	AddReply(var_281_int, var_282_int, var_283_int); // 0x24b TObjFunc
	return 0; // 0x24d Return
	
Label_590:
	var_284_int = 27032; // 0x24e PushI
	var_285_bool = var_67_bool == var_284_int; // 0x24f Eq
	if(var_285_bool == 0) goto Label_608; // 0x250 JumpB
	var_286_string = ""; // 0x251 PushV
	var_286_string = "Neutral"; // 0x252 MovS
	func_422(var_68_cvector, var_286_string); // 0x253 NEW_2
	var_287_int = 525710; // 0x255 PushI
	SetMessage(var_287_int); // 0x256 TObjFunc
	ClearReplies(); // 0x258 TObjFunc
	var_288_int = 525711; // 0x25a PushI
	var_289_int = 27034; // 0x25b PushI
	var_290_int = 27033; // 0x25c PushI
	AddReply(var_288_int, var_289_int, var_290_int); // 0x25d TObjFunc
	return 0; // 0x25f Return
	
Label_608:
	var_291_int = 27034; // 0x260 PushI
	var_292_bool = var_67_bool == var_291_int; // 0x261 Eq
	if(var_292_bool == 0) goto Label_631; // 0x262 JumpB
	var_293_string = ""; // 0x263 PushV
	var_293_string = "Fear"; // 0x264 MovS
	func_422(var_68_cvector, var_293_string); // 0x265 NEW_2
	var_294_int = 525712; // 0x267 PushI
	SetMessage(var_294_int); // 0x268 TObjFunc
	ClearReplies(); // 0x26a TObjFunc
	var_295_int = 525713; // 0x26c PushI
	var_296_int = 44727; // 0x26d PushI
	var_297_int = 27035; // 0x26e PushI
	AddReply(var_295_int, var_296_int, var_297_int); // 0x26f TObjFunc
	var_298_int = 542369; // 0x271 PushI
	var_299_int = 44727; // 0x272 PushI
	var_300_int = 44735; // 0x273 PushI
	AddReply(var_298_int, var_299_int, var_300_int); // 0x274 TObjFunc
	return 0; // 0x276 Return
	
Label_631:
	var_301_int = 44727; // 0x277 PushI
	var_302_bool = var_67_bool == var_301_int; // 0x278 Eq
	if(var_302_bool == 0) goto Label_654; // 0x279 JumpB
	var_303_string = ""; // 0x27a PushV
	var_303_string = "Fear"; // 0x27b MovS
	func_422(var_68_cvector, var_303_string); // 0x27c NEW_2
	var_304_int = 542361; // 0x27e PushI
	SetMessage(var_304_int); // 0x27f TObjFunc
	ClearReplies(); // 0x281 TObjFunc
	var_305_int = 542362; // 0x283 PushI
	var_306_int = 44729; // 0x284 PushI
	var_307_int = 44728; // 0x285 PushI
	AddReply(var_305_int, var_306_int, var_307_int); // 0x286 TObjFunc
	var_308_int = 542374; // 0x288 PushI
	var_309_int = 44743; // 0x289 PushI
	var_310_int = 44741; // 0x28a PushI
	AddReply(var_308_int, var_309_int, var_310_int); // 0x28b TObjFunc
	return 0; // 0x28d Return
	
Label_654:
	var_311_int = 44743; // 0x28e PushI
	var_312_bool = var_67_bool == var_311_int; // 0x28f Eq
	if(var_312_bool == 0) goto Label_677; // 0x290 JumpB
	var_313_string = ""; // 0x291 PushV
	var_313_string = "Fear"; // 0x292 MovS
	func_422(var_68_cvector, var_313_string); // 0x293 NEW_2
	var_314_int = 542376; // 0x295 PushI
	SetMessage(var_314_int); // 0x296 TObjFunc
	ClearReplies(); // 0x298 TObjFunc
	var_315_int = 542377; // 0x29a PushI
	var_316_int = 44746; // 0x29b PushI
	var_317_int = 44744; // 0x29c PushI
	AddReply(var_315_int, var_316_int, var_317_int); // 0x29d TObjFunc
	var_318_int = 542378; // 0x29f PushI
	var_319_int = 44751; // 0x2a0 PushI
	var_320_int = 44745; // 0x2a1 PushI
	AddReply(var_318_int, var_319_int, var_320_int); // 0x2a2 TObjFunc
	return 0; // 0x2a4 Return
	
Label_677:
	var_321_int = 44746; // 0x2a5 PushI
	var_322_bool = var_67_bool == var_321_int; // 0x2a6 Eq
	if(var_322_bool == 0) goto Label_695; // 0x2a7 JumpB
	var_323_string = ""; // 0x2a8 PushV
	var_323_string = "Fear"; // 0x2a9 MovS
	func_422(var_68_cvector, var_323_string); // 0x2aa NEW_2
	var_324_int = 542379; // 0x2ac PushI
	SetMessage(var_324_int); // 0x2ad TObjFunc
	ClearReplies(); // 0x2af TObjFunc
	var_325_int = 542380; // 0x2b1 PushI
	var_326_int = 44748; // 0x2b2 PushI
	var_327_int = 44747; // 0x2b3 PushI
	AddReply(var_325_int, var_326_int, var_327_int); // 0x2b4 TObjFunc
	return 0; // 0x2b6 Return
	
Label_695:
	var_328_int = 44748; // 0x2b7 PushI
	var_329_bool = var_67_bool == var_328_int; // 0x2b8 Eq
	if(var_329_bool == 0) goto Label_718; // 0x2b9 JumpB
	var_330_string = ""; // 0x2ba PushV
	var_330_string = "Neutral"; // 0x2bb MovS
	func_422(var_68_cvector, var_330_string); // 0x2bc NEW_2
	var_331_int = 542381; // 0x2be PushI
	SetMessage(var_331_int); // 0x2bf TObjFunc
	ClearReplies(); // 0x2c1 TObjFunc
	var_332_int = 542382; // 0x2c3 PushI
	var_333_int = 44755; // 0x2c4 PushI
	var_334_int = 44749; // 0x2c5 PushI
	AddReply(var_332_int, var_333_int, var_334_int); // 0x2c6 TObjFunc
	var_335_int = 542383; // 0x2c8 PushI
	var_336_int = 44751; // 0x2c9 PushI
	var_337_int = 44750; // 0x2ca PushI
	AddReply(var_335_int, var_336_int, var_337_int); // 0x2cb TObjFunc
	return 0; // 0x2cd Return
	
Label_718:
	var_338_int = 44751; // 0x2ce PushI
	var_339_bool = var_67_bool == var_338_int; // 0x2cf Eq
	if(var_339_bool == 0) goto Label_741; // 0x2d0 JumpB
	var_340_string = ""; // 0x2d1 PushV
	var_340_string = "Sly"; // 0x2d2 MovS
	func_422(var_68_cvector, var_340_string); // 0x2d3 NEW_2
	var_341_int = 542384; // 0x2d5 PushI
	SetMessage(var_341_int); // 0x2d6 TObjFunc
	ClearReplies(); // 0x2d8 TObjFunc
	var_342_int = 542385; // 0x2da PushI
	var_343_int = -1; // 0x2db PushI
	var_344_int = 44753; // 0x2dc PushI
	AddReply(var_342_int, var_343_int, var_344_int); // 0x2dd TObjFunc
	var_345_int = 542386; // 0x2df PushI
	var_346_int = -1; // 0x2e0 PushI
	var_347_int = 44754; // 0x2e1 PushI
	AddReply(var_345_int, var_346_int, var_347_int); // 0x2e2 TObjFunc
	return 0; // 0x2e4 Return
	
Label_741:
	var_348_int = 44755; // 0x2e5 PushI
	var_349_bool = var_67_bool == var_348_int; // 0x2e6 Eq
	if(var_349_bool == 0) goto Label_759; // 0x2e7 JumpB
	var_350_string = ""; // 0x2e8 PushV
	var_350_string = "Neutral"; // 0x2e9 MovS
	func_422(var_68_cvector, var_350_string); // 0x2ea NEW_2
	var_351_int = 542387; // 0x2ec PushI
	SetMessage(var_351_int); // 0x2ed TObjFunc
	ClearReplies(); // 0x2ef TObjFunc
	var_352_int = 542388; // 0x2f1 PushI
	var_353_int = 44751; // 0x2f2 PushI
	var_354_int = 44756; // 0x2f3 PushI
	AddReply(var_352_int, var_353_int, var_354_int); // 0x2f4 TObjFunc
	return 0; // 0x2f6 Return
	
Label_759:
	var_355_int = 44729; // 0x2f7 PushI
	var_356_bool = var_67_bool == var_355_int; // 0x2f8 Eq
	if(var_356_bool == 0) goto Label_777; // 0x2f9 JumpB
	var_357_string = ""; // 0x2fa PushV
	var_357_string = "Sly"; // 0x2fb MovS
	func_422(var_68_cvector, var_357_string); // 0x2fc NEW_2
	var_358_int = 542363; // 0x2fe PushI
	SetMessage(var_358_int); // 0x2ff TObjFunc
	ClearReplies(); // 0x301 TObjFunc
	var_359_int = 542364; // 0x303 PushI
	var_360_int = 44731; // 0x304 PushI
	var_361_int = 44730; // 0x305 PushI
	AddReply(var_359_int, var_360_int, var_361_int); // 0x306 TObjFunc
	return 0; // 0x308 Return
	
Label_777:
	var_362_int = 44731; // 0x309 PushI
	var_363_bool = var_67_bool == var_362_int; // 0x30a Eq
	if(var_363_bool == 0) goto Label_800; // 0x30b JumpB
	var_364_string = ""; // 0x30c PushV
	var_364_string = "Sly"; // 0x30d MovS
	func_422(var_68_cvector, var_364_string); // 0x30e NEW_2
	var_365_int = 542365; // 0x310 PushI
	SetMessage(var_365_int); // 0x311 TObjFunc
	ClearReplies(); // 0x313 TObjFunc
	var_366_int = 542370; // 0x315 PushI
	var_367_int = 44738; // 0x316 PushI
	var_368_int = 44737; // 0x317 PushI
	AddReply(var_366_int, var_367_int, var_368_int); // 0x318 TObjFunc
	var_369_int = 542389; // 0x31a PushI
	var_370_int = 44759; // 0x31b PushI
	var_371_int = 44758; // 0x31c PushI
	AddReply(var_369_int, var_370_int, var_371_int); // 0x31d TObjFunc
	return 0; // 0x31f Return
	
Label_800:
	var_372_int = 44759; // 0x320 PushI
	var_373_bool = var_67_bool == var_372_int; // 0x321 Eq
	if(var_373_bool == 0) goto Label_818; // 0x322 JumpB
	var_374_string = ""; // 0x323 PushV
	var_374_string = "Neutral"; // 0x324 MovS
	func_422(var_68_cvector, var_374_string); // 0x325 NEW_2
	var_375_int = 542390; // 0x327 PushI
	SetMessage(var_375_int); // 0x328 TObjFunc
	ClearReplies(); // 0x32a TObjFunc
	var_376_int = 542391; // 0x32c PushI
	var_377_int = 44738; // 0x32d PushI
	var_378_int = 44760; // 0x32e PushI
	AddReply(var_376_int, var_377_int, var_378_int); // 0x32f TObjFunc
	return 0; // 0x331 Return
	
Label_818:
	var_379_int = 44738; // 0x332 PushI
	var_380_bool = var_67_bool == var_379_int; // 0x333 Eq
	if(var_380_bool == 0) goto Label_841; // 0x334 JumpB
	var_381_string = ""; // 0x335 PushV
	var_381_string = "Neutral"; // 0x336 MovS
	func_422(var_68_cvector, var_381_string); // 0x337 NEW_2
	var_382_int = 542371; // 0x339 PushI
	SetMessage(var_382_int); // 0x33a TObjFunc
	ClearReplies(); // 0x33c TObjFunc
	var_383_int = 542372; // 0x33e PushI
	var_384_int = 44740; // 0x33f PushI
	var_385_int = 44739; // 0x340 PushI
	AddReply(var_383_int, var_384_int, var_385_int); // 0x341 TObjFunc
	var_386_int = 542392; // 0x343 PushI
	var_387_int = 44763; // 0x344 PushI
	var_388_int = 44762; // 0x345 PushI
	AddReply(var_386_int, var_387_int, var_388_int); // 0x346 TObjFunc
	return 0; // 0x348 Return
	
Label_841:
	var_389_int = 44763; // 0x349 PushI
	var_390_bool = var_67_bool == var_389_int; // 0x34a Eq
	if(var_390_bool == 0) goto Label_864; // 0x34b JumpB
	var_391_string = ""; // 0x34c PushV
	var_391_string = "Neutral"; // 0x34d MovS
	func_422(var_68_cvector, var_391_string); // 0x34e NEW_2
	var_392_int = 542393; // 0x350 PushI
	SetMessage(var_392_int); // 0x351 TObjFunc
	ClearReplies(); // 0x353 TObjFunc
	var_393_int = 542399; // 0x355 PushI
	var_394_int = 44773; // 0x356 PushI
	var_395_int = 44772; // 0x357 PushI
	AddReply(var_393_int, var_394_int, var_395_int); // 0x358 TObjFunc
	var_396_int = 542397; // 0x35a PushI
	var_397_int = 44740; // 0x35b PushI
	var_398_int = 44769; // 0x35c PushI
	AddReply(var_396_int, var_397_int, var_398_int); // 0x35d TObjFunc
	return 0; // 0x35f Return
	
Label_864:
	var_399_int = 44773; // 0x360 PushI
	var_400_bool = var_67_bool == var_399_int; // 0x361 Eq
	if(var_400_bool == 0) goto Label_882; // 0x362 JumpB
	var_401_string = ""; // 0x363 PushV
	var_401_string = "Neutral"; // 0x364 MovS
	func_422(var_68_cvector, var_401_string); // 0x365 NEW_2
	var_402_int = 542400; // 0x367 PushI
	SetMessage(var_402_int); // 0x368 TObjFunc
	ClearReplies(); // 0x36a TObjFunc
	var_403_int = 542394; // 0x36c PushI
	var_404_int = 27036; // 0x36d PushI
	var_405_int = 44764; // 0x36e PushI
	AddReply(var_403_int, var_404_int, var_405_int); // 0x36f TObjFunc
	return 0; // 0x371 Return
	
Label_882:
	var_406_int = 44740; // 0x372 PushI
	var_407_bool = var_67_bool == var_406_int; // 0x373 Eq
	if(var_407_bool == 0) goto Label_905; // 0x374 JumpB
	var_408_string = ""; // 0x375 PushV
	var_408_string = "Neutral"; // 0x376 MovS
	func_422(var_68_cvector, var_408_string); // 0x377 NEW_2
	var_409_int = 542373; // 0x379 PushI
	SetMessage(var_409_int); // 0x37a TObjFunc
	ClearReplies(); // 0x37c TObjFunc
	var_410_int = 542366; // 0x37e PushI
	var_411_int = 44733; // 0x37f PushI
	var_412_int = 44732; // 0x380 PushI
	AddReply(var_410_int, var_411_int, var_412_int); // 0x381 TObjFunc
	var_413_int = 542398; // 0x383 PushI
	var_414_int = 44773; // 0x384 PushI
	var_415_int = 44771; // 0x385 PushI
	AddReply(var_413_int, var_414_int, var_415_int); // 0x386 TObjFunc
	return 0; // 0x388 Return
	
Label_905:
	var_416_int = 44733; // 0x389 PushI
	var_417_bool = var_67_bool == var_416_int; // 0x38a Eq
	if(var_417_bool == 0) goto Label_928; // 0x38b JumpB
	var_418_string = ""; // 0x38c PushV
	var_418_string = "Neutral"; // 0x38d MovS
	func_422(var_68_cvector, var_418_string); // 0x38e NEW_2
	var_419_int = 542367; // 0x390 PushI
	SetMessage(var_419_int); // 0x391 TObjFunc
	ClearReplies(); // 0x393 TObjFunc
	var_420_int = 542368; // 0x395 PushI
	var_421_int = 27036; // 0x396 PushI
	var_422_int = 44734; // 0x397 PushI
	AddReply(var_420_int, var_421_int, var_422_int); // 0x398 TObjFunc
	var_423_int = 542395; // 0x39a PushI
	var_424_int = 27036; // 0x39b PushI
	var_425_int = 44765; // 0x39c PushI
	AddReply(var_423_int, var_424_int, var_425_int); // 0x39d TObjFunc
	return 0; // 0x39f Return
	
Label_928:
	var_426_int = 27036; // 0x3a0 PushI
	var_427_bool = var_67_bool == var_426_int; // 0x3a1 Eq
	if(var_427_bool == 0) goto Label_951; // 0x3a2 JumpB
	var_428_string = ""; // 0x3a3 PushV
	var_428_string = "Fear"; // 0x3a4 MovS
	func_422(var_68_cvector, var_428_string); // 0x3a5 NEW_2
	var_429_int = 525714; // 0x3a7 PushI
	SetMessage(var_429_int); // 0x3a8 TObjFunc
	ClearReplies(); // 0x3aa TObjFunc
	var_430_int = 525715; // 0x3ac PushI
	var_431_int = -1; // 0x3ad PushI
	var_432_int = 27037; // 0x3ae PushI
	AddReply(var_430_int, var_431_int, var_432_int); // 0x3af TObjFunc
	var_433_int = 525716; // 0x3b1 PushI
	var_434_int = -1; // 0x3b2 PushI
	var_435_int = 27038; // 0x3b3 PushI
	AddReply(var_433_int, var_434_int, var_435_int); // 0x3b4 TObjFunc
	return 0; // 0x3b6 Return
	
Label_951:
	var_436_int = 30190; // 0x3b7 PushI
	var_437_bool = var_67_bool == var_436_int; // 0x3b8 Eq
	if(var_437_bool == 0) goto Label_969; // 0x3b9 JumpB
	var_438_string = ""; // 0x3ba PushV
	var_438_string = "Sly"; // 0x3bb MovS
	func_422(var_68_cvector, var_438_string); // 0x3bc NEW_2
	var_439_int = 528778; // 0x3be PushI
	SetMessage(var_439_int); // 0x3bf TObjFunc
	ClearReplies(); // 0x3c1 TObjFunc
	var_440_int = 541118; // 0x3c3 PushI
	var_441_int = 43236; // 0x3c4 PushI
	var_442_int = 43235; // 0x3c5 PushI
	AddReply(var_440_int, var_441_int, var_442_int); // 0x3c6 TObjFunc
	return 0; // 0x3c8 Return
	
Label_969:
	var_443_int = 30192; // 0x3c9 PushI
	var_444_bool = var_67_bool == var_443_int; // 0x3ca Eq
	if(var_444_bool == 0) goto Label_972; // 0x3cb JumpB
	
Label_972:
	var_445_int = 43241; // 0x3cc PushI
	var_446_bool = var_67_bool == var_445_int; // 0x3cd Eq
	if(var_446_bool == 0) goto Label_990; // 0x3ce JumpB
	var_447_string = ""; // 0x3cf PushV
	var_447_string = "Fear"; // 0x3d0 MovS
	func_422(var_68_cvector, var_447_string); // 0x3d1 NEW_2
	var_448_int = 541122; // 0x3d3 PushI
	SetMessage(var_448_int); // 0x3d4 TObjFunc
	ClearReplies(); // 0x3d6 TObjFunc
	var_449_int = 541123; // 0x3d8 PushI
	var_450_int = 43243; // 0x3d9 PushI
	var_451_int = 43242; // 0x3da PushI
	AddReply(var_449_int, var_450_int, var_451_int); // 0x3db TObjFunc
	return 0; // 0x3dd Return
	
Label_990:
	var_452_int = 43243; // 0x3de PushI
	var_453_bool = var_67_bool == var_452_int; // 0x3df Eq
	if(var_453_bool == 0) goto Label_1008; // 0x3e0 JumpB
	var_454_string = ""; // 0x3e1 PushV
	var_454_string = "Sly"; // 0x3e2 MovS
	func_422(var_68_cvector, var_454_string); // 0x3e3 NEW_2
	var_455_int = 541124; // 0x3e5 PushI
	SetMessage(var_455_int); // 0x3e6 TObjFunc
	ClearReplies(); // 0x3e8 TObjFunc
	var_456_int = 541125; // 0x3ea PushI
	var_457_int = 27020; // 0x3eb PushI
	var_458_int = 43244; // 0x3ec PushI
	AddReply(var_456_int, var_457_int, var_458_int); // 0x3ed TObjFunc
	return 0; // 0x3ef Return
	
Label_1008:
	var_459_int = 43236; // 0x3f0 PushI
	var_460_bool = var_67_bool == var_459_int; // 0x3f1 Eq
	if(var_460_bool == 0) goto Label_1026; // 0x3f2 JumpB
	var_461_string = ""; // 0x3f3 PushV
	var_461_string = "Fear"; // 0x3f4 MovS
	func_422(var_68_cvector, var_461_string); // 0x3f5 NEW_2
	var_462_int = 541119; // 0x3f7 PushI
	SetMessage(var_462_int); // 0x3f8 TObjFunc
	ClearReplies(); // 0x3fa TObjFunc
	var_463_int = 541120; // 0x3fc PushI
	var_464_int = 27020; // 0x3fd PushI
	var_465_int = 43237; // 0x3fe PushI
	AddReply(var_463_int, var_464_int, var_465_int); // 0x3ff TObjFunc
	return 0; // 0x401 Return
	
Label_1026:
	var_466_int = 27020; // 0x402 PushI
	var_467_bool = var_67_bool == var_466_int; // 0x403 Eq
	if(var_467_bool == 0) goto Label_1049; // 0x404 JumpB
	var_468_string = ""; // 0x405 PushV
	var_468_string = "Fear"; // 0x406 MovS
	func_422(var_68_cvector, var_468_string); // 0x407 NEW_2
	var_469_int = 525697; // 0x409 PushI
	SetMessage(var_469_int); // 0x40a TObjFunc
	ClearReplies(); // 0x40c TObjFunc
	var_470_int = 528773; // 0x40e PushI
	var_471_int = 43245; // 0x40f PushI
	var_472_int = 30184; // 0x410 PushI
	AddReply(var_470_int, var_471_int, var_472_int); // 0x411 TObjFunc
	var_473_int = 541121; // 0x413 PushI
	var_474_int = 43245; // 0x414 PushI
	var_475_int = 43239; // 0x415 PushI
	AddReply(var_473_int, var_474_int, var_475_int); // 0x416 TObjFunc
	return 0; // 0x418 Return
	
Label_1049:
	var_476_int = 43245; // 0x419 PushI
	var_477_bool = var_67_bool == var_476_int; // 0x41a Eq
	if(var_477_bool == 0) goto Label_1072; // 0x41b JumpB
	var_478_string = ""; // 0x41c PushV
	var_478_string = "Anger"; // 0x41d MovS
	func_422(var_68_cvector, var_478_string); // 0x41e NEW_2
	var_479_int = 541126; // 0x420 PushI
	SetMessage(var_479_int); // 0x421 TObjFunc
	ClearReplies(); // 0x423 TObjFunc
	var_480_int = 541127; // 0x425 PushI
	var_481_int = 30185; // 0x426 PushI
	var_482_int = 43246; // 0x427 PushI
	AddReply(var_480_int, var_481_int, var_482_int); // 0x428 TObjFunc
	var_483_int = 541128; // 0x42a PushI
	var_484_int = 43249; // 0x42b PushI
	var_485_int = 43248; // 0x42c PushI
	AddReply(var_483_int, var_484_int, var_485_int); // 0x42d TObjFunc
	return 0; // 0x42f Return
	
Label_1072:
	var_486_int = 43249; // 0x430 PushI
	var_487_bool = var_67_bool == var_486_int; // 0x431 Eq
	if(var_487_bool == 0) goto Label_1090; // 0x432 JumpB
	var_488_string = ""; // 0x433 PushV
	var_488_string = "Sly"; // 0x434 MovS
	func_422(var_68_cvector, var_488_string); // 0x435 NEW_2
	var_489_int = 541129; // 0x437 PushI
	SetMessage(var_489_int); // 0x438 TObjFunc
	ClearReplies(); // 0x43a TObjFunc
	var_490_int = 541130; // 0x43c PushI
	var_491_int = 30185; // 0x43d PushI
	var_492_int = 43250; // 0x43e PushI
	AddReply(var_490_int, var_491_int, var_492_int); // 0x43f TObjFunc
	return 0; // 0x441 Return
	
Label_1090:
	var_493_int = 30185; // 0x442 PushI
	var_494_bool = var_67_bool == var_493_int; // 0x443 Eq
	if(var_494_bool == 0) goto Label_1113; // 0x444 JumpB
	var_495_string = ""; // 0x445 PushV
	var_495_string = "Anger"; // 0x446 MovS
	func_422(var_68_cvector, var_495_string); // 0x447 NEW_2
	var_496_int = 528774; // 0x449 PushI
	SetMessage(var_496_int); // 0x44a TObjFunc
	ClearReplies(); // 0x44c TObjFunc
	var_497_int = 528775; // 0x44e PushI
	var_498_int = 30187; // 0x44f PushI
	var_499_int = 30186; // 0x450 PushI
	AddReply(var_497_int, var_498_int, var_499_int); // 0x451 TObjFunc
	var_500_int = 528777; // 0x453 PushI
	var_501_int = 30187; // 0x454 PushI
	var_502_int = 30188; // 0x455 PushI
	AddReply(var_500_int, var_501_int, var_502_int); // 0x456 TObjFunc
	return 0; // 0x458 Return
	
Label_1113:
	var_503_int = 30187; // 0x459 PushI
	var_504_bool = var_67_bool == var_503_int; // 0x45a Eq
	if(var_504_bool == 0) goto Label_1136; // 0x45b JumpB
	var_505_string = ""; // 0x45c PushV
	var_505_string = "Neutral"; // 0x45d MovS
	func_422(var_68_cvector, var_505_string); // 0x45e NEW_2
	var_506_int = 528776; // 0x460 PushI
	SetMessage(var_506_int); // 0x461 TObjFunc
	ClearReplies(); // 0x463 TObjFunc
	var_507_int = 525698; // 0x465 PushI
	var_508_int = -1; // 0x466 PushI
	var_509_int = 27021; // 0x467 PushI
	AddReply(var_507_int, var_508_int, var_509_int); // 0x468 TObjFunc
	var_510_int = 542375; // 0x46a PushI
	var_511_int = -1; // 0x46b PushI
	var_512_int = 44742; // 0x46c PushI
	AddReply(var_510_int, var_511_int, var_512_int); // 0x46d TObjFunc
	return 0; // 0x46f Return
	
Label_1136:
	var_513_int = 44708; // 0x470 PushI
	var_514_bool = var_67_bool == var_513_int; // 0x471 Eq
	if(var_514_bool == 0) goto Label_1159; // 0x472 JumpB
	var_515_string = ""; // 0x473 PushV
	var_515_string = "Neutral"; // 0x474 MovS
	func_422(var_68_cvector, var_515_string); // 0x475 NEW_2
	var_516_int = 542345; // 0x477 PushI
	SetMessage(var_516_int); // 0x478 TObjFunc
	ClearReplies(); // 0x47a TObjFunc
	var_517_int = 542346; // 0x47c PushI
	var_518_int = 44710; // 0x47d PushI
	var_519_int = 44709; // 0x47e PushI
	AddReply(var_517_int, var_518_int, var_519_int); // 0x47f TObjFunc
	var_520_int = 542349; // 0x481 PushI
	var_521_int = 44713; // 0x482 PushI
	var_522_int = 44712; // 0x483 PushI
	AddReply(var_520_int, var_521_int, var_522_int); // 0x484 TObjFunc
	return 0; // 0x486 Return
	
Label_1159:
	var_523_int = 44713; // 0x487 PushI
	var_524_bool = var_67_bool == var_523_int; // 0x488 Eq
	if(var_524_bool == 0) goto Label_1177; // 0x489 JumpB
	var_525_string = ""; // 0x48a PushV
	var_525_string = "Neutral"; // 0x48b MovS
	func_422(var_68_cvector, var_525_string); // 0x48c NEW_2
	var_526_int = 542350; // 0x48e PushI
	SetMessage(var_526_int); // 0x48f TObjFunc
	ClearReplies(); // 0x491 TObjFunc
	var_527_int = 542351; // 0x493 PushI
	var_528_int = 27010; // 0x494 PushI
	var_529_int = 44714; // 0x495 PushI
	AddReply(var_527_int, var_528_int, var_529_int); // 0x496 TObjFunc
	return 0; // 0x498 Return
	
Label_1177:
	var_530_int = 44710; // 0x499 PushI
	var_531_bool = var_67_bool == var_530_int; // 0x49a Eq
	if(var_531_bool == 0) goto Label_1195; // 0x49b JumpB
	var_532_string = ""; // 0x49c PushV
	var_532_string = "Fear"; // 0x49d MovS
	func_422(var_68_cvector, var_532_string); // 0x49e NEW_2
	var_533_int = 542347; // 0x4a0 PushI
	SetMessage(var_533_int); // 0x4a1 TObjFunc
	ClearReplies(); // 0x4a3 TObjFunc
	var_534_int = 542348; // 0x4a5 PushI
	var_535_int = 27006; // 0x4a6 PushI
	var_536_int = 44711; // 0x4a7 PushI
	AddReply(var_534_int, var_535_int, var_536_int); // 0x4a8 TObjFunc
	return 0; // 0x4aa Return
	
Label_1195:
	var_537_int = 27006; // 0x4ab PushI
	var_538_bool = var_67_bool == var_537_int; // 0x4ac Eq
	if(var_538_bool == 0) goto Label_1218; // 0x4ad JumpB
	var_539_string = ""; // 0x4ae PushV
	var_539_string = "Fear"; // 0x4af MovS
	func_422(var_68_cvector, var_539_string); // 0x4b0 NEW_2
	var_540_int = 525683; // 0x4b2 PushI
	SetMessage(var_540_int); // 0x4b3 TObjFunc
	ClearReplies(); // 0x4b5 TObjFunc
	var_541_int = 525684; // 0x4b7 PushI
	var_542_int = 27008; // 0x4b8 PushI
	var_543_int = 27007; // 0x4b9 PushI
	AddReply(var_541_int, var_542_int, var_543_int); // 0x4ba TObjFunc
	var_544_int = 541117; // 0x4bc PushI
	var_545_int = 27008; // 0x4bd PushI
	var_546_int = 43233; // 0x4be PushI
	AddReply(var_544_int, var_545_int, var_546_int); // 0x4bf TObjFunc
	return 0; // 0x4c1 Return
	
Label_1218:
	var_547_int = 27008; // 0x4c2 PushI
	var_548_bool = var_67_bool == var_547_int; // 0x4c3 Eq
	if(var_548_bool == 0) goto Label_1241; // 0x4c4 JumpB
	var_549_string = ""; // 0x4c5 PushV
	var_549_string = "Fear"; // 0x4c6 MovS
	func_422(var_68_cvector, var_549_string); // 0x4c7 NEW_2
	var_550_int = 525685; // 0x4c9 PushI
	SetMessage(var_550_int); // 0x4ca TObjFunc
	ClearReplies(); // 0x4cc TObjFunc
	var_551_int = 525686; // 0x4ce PushI
	var_552_int = 27010; // 0x4cf PushI
	var_553_int = 27009; // 0x4d0 PushI
	AddReply(var_551_int, var_552_int, var_553_int); // 0x4d1 TObjFunc
	var_554_int = 542352; // 0x4d3 PushI
	var_555_int = 44716; // 0x4d4 PushI
	var_556_int = 44715; // 0x4d5 PushI
	AddReply(var_554_int, var_555_int, var_556_int); // 0x4d6 TObjFunc
	return 0; // 0x4d8 Return
	
Label_1241:
	var_557_int = 44716; // 0x4d9 PushI
	var_558_bool = var_67_bool == var_557_int; // 0x4da Eq
	if(var_558_bool == 0) goto Label_1259; // 0x4db JumpB
	var_559_string = ""; // 0x4dc PushV
	var_559_string = "Sly"; // 0x4dd MovS
	func_422(var_68_cvector, var_559_string); // 0x4de NEW_2
	var_560_int = 542353; // 0x4e0 PushI
	SetMessage(var_560_int); // 0x4e1 TObjFunc
	ClearReplies(); // 0x4e3 TObjFunc
	var_561_int = 542354; // 0x4e5 PushI
	var_562_int = 44718; // 0x4e6 PushI
	var_563_int = 44717; // 0x4e7 PushI
	AddReply(var_561_int, var_562_int, var_563_int); // 0x4e8 TObjFunc
	return 0; // 0x4ea Return
	
Label_1259:
	var_564_int = 44718; // 0x4eb PushI
	var_565_bool = var_67_bool == var_564_int; // 0x4ec Eq
	if(var_565_bool == 0) goto Label_1282; // 0x4ed JumpB
	var_566_string = ""; // 0x4ee PushV
	var_566_string = "Neutral"; // 0x4ef MovS
	func_422(var_68_cvector, var_566_string); // 0x4f0 NEW_2
	var_567_int = 542355; // 0x4f2 PushI
	SetMessage(var_567_int); // 0x4f3 TObjFunc
	ClearReplies(); // 0x4f5 TObjFunc
	var_568_int = 542356; // 0x4f7 PushI
	var_569_int = 27010; // 0x4f8 PushI
	var_570_int = 44719; // 0x4f9 PushI
	AddReply(var_568_int, var_569_int, var_570_int); // 0x4fa TObjFunc
	var_571_int = 542357; // 0x4fc PushI
	var_572_int = 27010; // 0x4fd PushI
	var_573_int = 44720; // 0x4fe PushI
	AddReply(var_571_int, var_572_int, var_573_int); // 0x4ff TObjFunc
	return 0; // 0x501 Return
	
Label_1282:
	var_574_int = 27010; // 0x502 PushI
	var_575_bool = var_67_bool == var_574_int; // 0x503 Eq
	if(var_575_bool == 0) goto Label_1305; // 0x504 JumpB
	var_576_string = ""; // 0x505 PushV
	var_576_string = "Sly"; // 0x506 MovS
	func_422(var_68_cvector, var_576_string); // 0x507 NEW_2
	var_577_int = 525687; // 0x509 PushI
	SetMessage(var_577_int); // 0x50a TObjFunc
	ClearReplies(); // 0x50c TObjFunc
	var_578_int = 525688; // 0x50e PushI
	var_579_int = -1; // 0x50f PushI
	var_580_int = 27011; // 0x510 PushI
	AddReply(var_578_int, var_579_int, var_580_int); // 0x511 TObjFunc
	var_581_int = 542360; // 0x513 PushI
	var_582_int = -1; // 0x514 PushI
	var_583_int = 44725; // 0x515 PushI
	AddReply(var_581_int, var_582_int, var_583_int); // 0x516 TObjFunc
	return 0; // 0x518 Return
	
Label_1305:
	var_3_object = 1; // 0x519 TMovB
	var_584_bool = 0; // 0x51a PushV
	func_4735(var_584_bool); // 0x51b NEW_2
	if(var_584_bool == 0) goto Label_1313; // 0x51d JumpB
	lshStopAnimation(); // 0x51e Func
	goto Label_1315; // 0x520 Jump
	
Label_1315:
	return 0; // 0x523 Return
	
Label_1313:
	StopAnimation(); // 0x521 Func
	
Label_1317:
	return 0; // 0x525 Return
}


task_6_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_int, var_17_int, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool, var_23_object, var_24_object, var_25_object, var_26_string, var_27_bool, var_28_object, var_29_object, var_30_object, var_31_string, var_32_bool, var_33_object, var_34_object, var_35_object, var_36_string, var_37_bool, var_38_object, var_39_object, var_40_object, var_41_string, var_42_bool, var_43_object, var_44_object, var_45_object, var_46_string, var_47_bool, var_48_object, var_49_object, var_50_object, var_51_string, var_52_bool, var_53_object, var_54_object, var_55_object, var_56_string, var_57_bool, var_58_object, var_59_object, var_60_object, var_61_string, var_62_bool, var_63_object, var_64_object, var_65_object, var_66_string, var_67_bool, var_68_cvector)
{
	var_69_int = 1; // 0x5cd PushI
	if(var_69_int == 0) goto Label_1538; // 0x5ce JumpB
	func_4610(); // 0x5d0 NEW_2
	var_71_int = 27933; // 0x5d2 PushI
	var_72_bool = var_68_cvector == var_71_int; // 0x5d3 Eq
	if(var_72_bool == 0) goto Label_1498; // 0x5d4 JumpB
	var_73_object = Obj(); var_74_object = Obj(); // 0x5d5 PushV
	var_73_object = var_1_object; // 0x5d6 MovT
	var_74_object = var_0_bool; // 0x5d7 MovT
	func_4895(); // 0x5d8 NEW_2
	
Label_1498:
	var_76_int = 27932; // 0x5da PushI
	var_77_bool = var_67_bool == var_76_int; // 0x5db Eq
	if(var_77_bool == 0) goto Label_1526; // 0x5dc JumpB
	var_78_string = ""; // 0x5dd PushV
	var_78_string = "Fear"; // 0x5de MovS
	func_1462(var_68_cvector, var_78_string); // 0x5df NEW_2
	var_95_int = 526656; // 0x5e1 PushI
	SetMessage(var_95_int); // 0x5e2 TObjFunc
	ClearReplies(); // 0x5e4 TObjFunc
	var_96_int = 526657; // 0x5e6 PushI
	var_97_int = -1; // 0x5e7 PushI
	var_98_int = 27933; // 0x5e8 PushI
	AddReply(var_96_int, var_97_int, var_98_int); // 0x5e9 TObjFunc
	var_99_int = 526658; // 0x5eb PushI
	var_100_int = -1; // 0x5ec PushI
	var_101_int = 27934; // 0x5ed PushI
	AddReply(var_99_int, var_100_int, var_101_int); // 0x5ee TObjFunc
	var_102_int = 542279; // 0x5f0 PushI
	var_103_int = -1; // 0x5f1 PushI
	var_104_int = 44624; // 0x5f2 PushI
	AddReply(var_102_int, var_103_int, var_104_int); // 0x5f3 TObjFunc
	return 0; // 0x5f5 Return
	
Label_1526:
	var_3_object = 1; // 0x5f6 TMovB
	var_105_bool = 0; // 0x5f7 PushV
	func_4735(var_105_bool); // 0x5f8 NEW_2
	if(var_105_bool == 0) goto Label_1534; // 0x5fa JumpB
	lshStopAnimation(); // 0x5fb Func
	goto Label_1536; // 0x5fd Jump
	
Label_1536:
	return 0; // 0x600 Return
	
Label_1534:
	StopAnimation(); // 0x5fe Func
	
Label_1538:
	return 0; // 0x602 Return
}


task_8_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_int, var_22_int, var_23_object, var_24_object, var_25_object, var_26_string, var_27_bool, var_28_object, var_29_object, var_30_object, var_31_string, var_32_bool, var_33_object, var_34_object, var_35_object, var_36_string, var_37_bool, var_38_object, var_39_object, var_40_object, var_41_string, var_42_bool, var_43_object, var_44_object, var_45_object, var_46_string, var_47_bool, var_48_object, var_49_object, var_50_object, var_51_string, var_52_bool, var_53_object, var_54_object, var_55_object, var_56_string, var_57_bool, var_58_object, var_59_object, var_60_object, var_61_string, var_62_bool, var_63_object, var_64_object, var_65_object, var_66_string, var_67_bool, var_68_cvector)
{
	var_69_int = 1; // 0x6aa PushI
	if(var_69_int == 0) goto Label_1759; // 0x6ab JumpB
	func_4610(); // 0x6ad NEW_2
	var_71_int = 27937; // 0x6af PushI
	var_72_bool = var_68_cvector == var_71_int; // 0x6b0 Eq
	if(var_72_bool == 0) goto Label_1719; // 0x6b1 JumpB
	var_73_object = Obj(); var_74_object = Obj(); // 0x6b2 PushV
	var_73_object = var_1_object; // 0x6b3 MovT
	var_74_object = var_0_bool; // 0x6b4 MovT
	func_4895(); // 0x6b5 NEW_2
	
Label_1719:
	var_76_int = 27936; // 0x6b7 PushI
	var_77_bool = var_67_bool == var_76_int; // 0x6b8 Eq
	if(var_77_bool == 0) goto Label_1747; // 0x6b9 JumpB
	var_78_string = ""; // 0x6ba PushV
	var_78_string = "Fear"; // 0x6bb MovS
	func_1683(var_68_cvector, var_78_string); // 0x6bc NEW_2
	var_95_int = 526660; // 0x6be PushI
	SetMessage(var_95_int); // 0x6bf TObjFunc
	ClearReplies(); // 0x6c1 TObjFunc
	var_96_int = 526661; // 0x6c3 PushI
	var_97_int = -1; // 0x6c4 PushI
	var_98_int = 27937; // 0x6c5 PushI
	AddReply(var_96_int, var_97_int, var_98_int); // 0x6c6 TObjFunc
	var_99_int = 526662; // 0x6c8 PushI
	var_100_int = -1; // 0x6c9 PushI
	var_101_int = 27938; // 0x6ca PushI
	AddReply(var_99_int, var_100_int, var_101_int); // 0x6cb TObjFunc
	var_102_int = 528771; // 0x6cd PushI
	var_103_int = -1; // 0x6ce PushI
	var_104_int = 30182; // 0x6cf PushI
	AddReply(var_102_int, var_103_int, var_104_int); // 0x6d0 TObjFunc
	return 0; // 0x6d2 Return
	
Label_1747:
	var_3_object = 1; // 0x6d3 TMovB
	var_105_bool = 0; // 0x6d4 PushV
	func_4735(var_105_bool); // 0x6d5 NEW_2
	if(var_105_bool == 0) goto Label_1755; // 0x6d7 JumpB
	lshStopAnimation(); // 0x6d8 Func
	goto Label_1757; // 0x6da Jump
	
Label_1757:
	return 0; // 0x6dd Return
	
Label_1755:
	StopAnimation(); // 0x6db Func
	
Label_1759:
	return 0; // 0x6df Return
}


task_10_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_int, var_27_int, var_28_object, var_29_object, var_30_object, var_31_string, var_32_bool, var_33_object, var_34_object, var_35_object, var_36_string, var_37_bool, var_38_object, var_39_object, var_40_object, var_41_string, var_42_bool, var_43_object, var_44_object, var_45_object, var_46_string, var_47_bool, var_48_object, var_49_object, var_50_object, var_51_string, var_52_bool, var_53_object, var_54_object, var_55_object, var_56_string, var_57_bool, var_58_object, var_59_object, var_60_object, var_61_string, var_62_bool, var_63_object, var_64_object, var_65_object, var_66_string, var_67_bool, var_68_cvector)
{
	var_69_int = 1; // 0x787 PushI
	if(var_69_int == 0) goto Label_1980; // 0x788 JumpB
	func_4610(); // 0x78a NEW_2
	var_71_int = 27941; // 0x78c PushI
	var_72_bool = var_68_cvector == var_71_int; // 0x78d Eq
	if(var_72_bool == 0) goto Label_1940; // 0x78e JumpB
	var_73_object = Obj(); var_74_object = Obj(); // 0x78f PushV
	var_73_object = var_1_object; // 0x790 MovT
	var_74_object = var_0_bool; // 0x791 MovT
	func_4895(); // 0x792 NEW_2
	
Label_1940:
	var_76_int = 27940; // 0x794 PushI
	var_77_bool = var_67_bool == var_76_int; // 0x795 Eq
	if(var_77_bool == 0) goto Label_1968; // 0x796 JumpB
	var_78_string = ""; // 0x797 PushV
	var_78_string = "Neutral"; // 0x798 MovS
	func_1904(var_68_cvector, var_78_string); // 0x799 NEW_2
	var_95_int = 526664; // 0x79b PushI
	SetMessage(var_95_int); // 0x79c TObjFunc
	ClearReplies(); // 0x79e TObjFunc
	var_96_int = 526665; // 0x7a0 PushI
	var_97_int = -1; // 0x7a1 PushI
	var_98_int = 27941; // 0x7a2 PushI
	AddReply(var_96_int, var_97_int, var_98_int); // 0x7a3 TObjFunc
	var_99_int = 526666; // 0x7a5 PushI
	var_100_int = -1; // 0x7a6 PushI
	var_101_int = 27942; // 0x7a7 PushI
	AddReply(var_99_int, var_100_int, var_101_int); // 0x7a8 TObjFunc
	var_102_int = 528772; // 0x7aa PushI
	var_103_int = -1; // 0x7ab PushI
	var_104_int = 30183; // 0x7ac PushI
	AddReply(var_102_int, var_103_int, var_104_int); // 0x7ad TObjFunc
	return 0; // 0x7af Return
	
Label_1968:
	var_3_object = 1; // 0x7b0 TMovB
	var_105_bool = 0; // 0x7b1 PushV
	func_4735(var_105_bool); // 0x7b2 NEW_2
	if(var_105_bool == 0) goto Label_1976; // 0x7b4 JumpB
	lshStopAnimation(); // 0x7b5 Func
	goto Label_1978; // 0x7b7 Jump
	
Label_1978:
	return 0; // 0x7ba Return
	
Label_1976:
	StopAnimation(); // 0x7b8 Func
	
Label_1980:
	return 0; // 0x7bc Return
}


task_12_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_int, var_32_int, var_33_object, var_34_object, var_35_object, var_36_string, var_37_bool, var_38_object, var_39_object, var_40_object, var_41_string, var_42_bool, var_43_object, var_44_object, var_45_object, var_46_string, var_47_bool, var_48_object, var_49_object, var_50_object, var_51_string, var_52_bool, var_53_object, var_54_object, var_55_object, var_56_string, var_57_bool, var_58_object, var_59_object, var_60_object, var_61_string, var_62_bool, var_63_object, var_64_object, var_65_object, var_66_string, var_67_bool, var_68_cvector)
{
	var_69_int = 1; // 0x864 PushI
	if(var_69_int == 0) goto Label_2201; // 0x865 JumpB
	func_4610(); // 0x867 NEW_2
	var_71_int = 27946; // 0x869 PushI
	var_72_bool = var_68_cvector == var_71_int; // 0x86a Eq
	if(var_72_bool == 0) goto Label_2161; // 0x86b JumpB
	var_73_object = Obj(); var_74_object = Obj(); // 0x86c PushV
	var_73_object = var_1_object; // 0x86d MovT
	var_74_object = var_0_bool; // 0x86e MovT
	func_4895(); // 0x86f NEW_2
	
Label_2161:
	var_76_int = 27945; // 0x871 PushI
	var_77_bool = var_67_bool == var_76_int; // 0x872 Eq
	if(var_77_bool == 0) goto Label_2189; // 0x873 JumpB
	var_78_string = ""; // 0x874 PushV
	var_78_string = "Fear"; // 0x875 MovS
	func_2125(var_68_cvector, var_78_string); // 0x876 NEW_2
	var_95_int = 526669; // 0x878 PushI
	SetMessage(var_95_int); // 0x879 TObjFunc
	ClearReplies(); // 0x87b TObjFunc
	var_96_int = 526670; // 0x87d PushI
	var_97_int = -1; // 0x87e PushI
	var_98_int = 27946; // 0x87f PushI
	AddReply(var_96_int, var_97_int, var_98_int); // 0x880 TObjFunc
	var_99_int = 526671; // 0x882 PushI
	var_100_int = -1; // 0x883 PushI
	var_101_int = 27947; // 0x884 PushI
	AddReply(var_99_int, var_100_int, var_101_int); // 0x885 TObjFunc
	var_102_int = 528784; // 0x887 PushI
	var_103_int = -1; // 0x888 PushI
	var_104_int = 30196; // 0x889 PushI
	AddReply(var_102_int, var_103_int, var_104_int); // 0x88a TObjFunc
	return 0; // 0x88c Return
	
Label_2189:
	var_3_object = 1; // 0x88d TMovB
	var_105_bool = 0; // 0x88e PushV
	func_4735(var_105_bool); // 0x88f NEW_2
	if(var_105_bool == 0) goto Label_2197; // 0x891 JumpB
	lshStopAnimation(); // 0x892 Func
	goto Label_2199; // 0x894 Jump
	
Label_2199:
	return 0; // 0x897 Return
	
Label_2197:
	StopAnimation(); // 0x895 Func
	
Label_2201:
	return 0; // 0x899 Return
}


task_14_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_int, var_37_int, var_38_object, var_39_object, var_40_object, var_41_string, var_42_bool, var_43_object, var_44_object, var_45_object, var_46_string, var_47_bool, var_48_object, var_49_object, var_50_object, var_51_string, var_52_bool, var_53_object, var_54_object, var_55_object, var_56_string, var_57_bool, var_58_object, var_59_object, var_60_object, var_61_string, var_62_bool, var_63_object, var_64_object, var_65_object, var_66_string, var_67_bool, var_68_cvector)
{
	var_69_int = 1; // 0x941 PushI
	if(var_69_int == 0) goto Label_2422; // 0x942 JumpB
	func_4610(); // 0x944 NEW_2
	var_71_int = 27950; // 0x946 PushI
	var_72_bool = var_68_cvector == var_71_int; // 0x947 Eq
	if(var_72_bool == 0) goto Label_2382; // 0x948 JumpB
	var_73_object = Obj(); var_74_object = Obj(); // 0x949 PushV
	var_73_object = var_1_object; // 0x94a MovT
	var_74_object = var_0_bool; // 0x94b MovT
	func_4895(); // 0x94c NEW_2
	
Label_2382:
	var_76_int = 27949; // 0x94e PushI
	var_77_bool = var_67_bool == var_76_int; // 0x94f Eq
	if(var_77_bool == 0) goto Label_2410; // 0x950 JumpB
	var_78_string = ""; // 0x951 PushV
	var_78_string = "Sly"; // 0x952 MovS
	func_2346(var_68_cvector, var_78_string); // 0x953 NEW_2
	var_95_int = 526673; // 0x955 PushI
	SetMessage(var_95_int); // 0x956 TObjFunc
	ClearReplies(); // 0x958 TObjFunc
	var_96_int = 526674; // 0x95a PushI
	var_97_int = -1; // 0x95b PushI
	var_98_int = 27950; // 0x95c PushI
	AddReply(var_96_int, var_97_int, var_98_int); // 0x95d TObjFunc
	var_99_int = 526675; // 0x95f PushI
	var_100_int = -1; // 0x960 PushI
	var_101_int = 27951; // 0x961 PushI
	AddReply(var_99_int, var_100_int, var_101_int); // 0x962 TObjFunc
	var_102_int = 528785; // 0x964 PushI
	var_103_int = -1; // 0x965 PushI
	var_104_int = 30197; // 0x966 PushI
	AddReply(var_102_int, var_103_int, var_104_int); // 0x967 TObjFunc
	return 0; // 0x969 Return
	
Label_2410:
	var_3_object = 1; // 0x96a TMovB
	var_105_bool = 0; // 0x96b PushV
	func_4735(var_105_bool); // 0x96c NEW_2
	if(var_105_bool == 0) goto Label_2418; // 0x96e JumpB
	lshStopAnimation(); // 0x96f Func
	goto Label_2420; // 0x971 Jump
	
Label_2420:
	return 0; // 0x974 Return
	
Label_2418:
	StopAnimation(); // 0x972 Func
	
Label_2422:
	return 0; // 0x976 Return
}


task_16_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_object, var_37_object, var_38_object, var_39_string, var_40_bool, var_41_int, var_42_int, var_43_object, var_44_object, var_45_object, var_46_string, var_47_bool, var_48_object, var_49_object, var_50_object, var_51_string, var_52_bool, var_53_object, var_54_object, var_55_object, var_56_string, var_57_bool, var_58_object, var_59_object, var_60_object, var_61_string, var_62_bool, var_63_object, var_64_object, var_65_object, var_66_string, var_67_bool, var_68_cvector)
{
	var_69_int = 1; // 0xa19 PushI
	if(var_69_int == 0) goto Label_2633; // 0xa1a JumpB
	func_4610(); // 0xa1c NEW_2
	var_71_int = 27954; // 0xa1e PushI
	var_72_bool = var_68_cvector == var_71_int; // 0xa1f Eq
	if(var_72_bool == 0) goto Label_2598; // 0xa20 JumpB
	var_73_object = Obj(); var_74_object = Obj(); // 0xa21 PushV
	var_73_object = var_1_object; // 0xa22 MovT
	var_74_object = var_0_bool; // 0xa23 MovT
	func_4895(); // 0xa24 NEW_2
	
Label_2598:
	var_76_int = 27953; // 0xa26 PushI
	var_77_bool = var_67_bool == var_76_int; // 0xa27 Eq
	if(var_77_bool == 0) goto Label_2621; // 0xa28 JumpB
	var_78_string = ""; // 0xa29 PushV
	var_78_string = "Neutral"; // 0xa2a MovS
	func_2562(var_68_cvector, var_78_string); // 0xa2b NEW_2
	var_95_int = 526677; // 0xa2d PushI
	SetMessage(var_95_int); // 0xa2e TObjFunc
	ClearReplies(); // 0xa30 TObjFunc
	var_96_int = 526678; // 0xa32 PushI
	var_97_int = -1; // 0xa33 PushI
	var_98_int = 27954; // 0xa34 PushI
	AddReply(var_96_int, var_97_int, var_98_int); // 0xa35 TObjFunc
	var_99_int = 526679; // 0xa37 PushI
	var_100_int = -1; // 0xa38 PushI
	var_101_int = 27955; // 0xa39 PushI
	AddReply(var_99_int, var_100_int, var_101_int); // 0xa3a TObjFunc
	return 0; // 0xa3c Return
	
Label_2621:
	var_3_object = 1; // 0xa3d TMovB
	var_102_bool = 0; // 0xa3e PushV
	func_4735(var_102_bool); // 0xa3f NEW_2
	if(var_102_bool == 0) goto Label_2629; // 0xa41 JumpB
	lshStopAnimation(); // 0xa42 Func
	goto Label_2631; // 0xa44 Jump
	
Label_2631:
	return 0; // 0xa47 Return
	
Label_2629:
	StopAnimation(); // 0xa45 Func
	
Label_2633:
	return 0; // 0xa49 Return
}


task_18_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_object, var_37_object, var_38_object, var_39_string, var_40_bool, var_41_object, var_42_object, var_43_object, var_44_string, var_45_bool, var_46_int, var_47_int, var_48_object, var_49_object, var_50_object, var_51_string, var_52_bool, var_53_object, var_54_object, var_55_object, var_56_string, var_57_bool, var_58_object, var_59_object, var_60_object, var_61_string, var_62_bool, var_63_object, var_64_object, var_65_object, var_66_string, var_67_bool, var_68_cvector)
{
	var_69_int = 1; // 0xaf1 PushI
	if(var_69_int == 0) goto Label_2854; // 0xaf2 JumpB
	func_4610(); // 0xaf4 NEW_2
	var_71_int = 27958; // 0xaf6 PushI
	var_72_bool = var_68_cvector == var_71_int; // 0xaf7 Eq
	if(var_72_bool == 0) goto Label_2814; // 0xaf8 JumpB
	var_73_object = Obj(); var_74_object = Obj(); // 0xaf9 PushV
	var_73_object = var_1_object; // 0xafa MovT
	var_74_object = var_0_bool; // 0xafb MovT
	func_4895(); // 0xafc NEW_2
	
Label_2814:
	var_76_int = 27957; // 0xafe PushI
	var_77_bool = var_67_bool == var_76_int; // 0xaff Eq
	if(var_77_bool == 0) goto Label_2842; // 0xb00 JumpB
	var_78_string = ""; // 0xb01 PushV
	var_78_string = "Fear"; // 0xb02 MovS
	func_2778(var_68_cvector, var_78_string); // 0xb03 NEW_2
	var_95_int = 526681; // 0xb05 PushI
	SetMessage(var_95_int); // 0xb06 TObjFunc
	ClearReplies(); // 0xb08 TObjFunc
	var_96_int = 526682; // 0xb0a PushI
	var_97_int = -1; // 0xb0b PushI
	var_98_int = 27958; // 0xb0c PushI
	AddReply(var_96_int, var_97_int, var_98_int); // 0xb0d TObjFunc
	var_99_int = 526683; // 0xb0f PushI
	var_100_int = -1; // 0xb10 PushI
	var_101_int = 27959; // 0xb11 PushI
	AddReply(var_99_int, var_100_int, var_101_int); // 0xb12 TObjFunc
	var_102_int = 528752; // 0xb14 PushI
	var_103_int = -1; // 0xb15 PushI
	var_104_int = 30178; // 0xb16 PushI
	AddReply(var_102_int, var_103_int, var_104_int); // 0xb17 TObjFunc
	return 0; // 0xb19 Return
	
Label_2842:
	var_3_object = 1; // 0xb1a TMovB
	var_105_bool = 0; // 0xb1b PushV
	func_4735(var_105_bool); // 0xb1c NEW_2
	if(var_105_bool == 0) goto Label_2850; // 0xb1e JumpB
	lshStopAnimation(); // 0xb1f Func
	goto Label_2852; // 0xb21 Jump
	
Label_2852:
	return 0; // 0xb24 Return
	
Label_2850:
	StopAnimation(); // 0xb22 Func
	
Label_2854:
	return 0; // 0xb26 Return
}


task_20_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_object, var_37_object, var_38_object, var_39_string, var_40_bool, var_41_object, var_42_object, var_43_object, var_44_string, var_45_bool, var_46_object, var_47_object, var_48_object, var_49_string, var_50_bool, var_51_int, var_52_int, var_53_object, var_54_object, var_55_object, var_56_string, var_57_bool, var_58_object, var_59_object, var_60_object, var_61_string, var_62_bool, var_63_object, var_64_object, var_65_object, var_66_string, var_67_bool, var_68_cvector)
{
	var_69_int = 1; // 0xbce PushI
	if(var_69_int == 0) goto Label_3075; // 0xbcf JumpB
	func_4610(); // 0xbd1 NEW_2
	var_71_int = 27962; // 0xbd3 PushI
	var_72_bool = var_68_cvector == var_71_int; // 0xbd4 Eq
	if(var_72_bool == 0) goto Label_3035; // 0xbd5 JumpB
	var_73_object = Obj(); var_74_object = Obj(); // 0xbd6 PushV
	var_73_object = var_1_object; // 0xbd7 MovT
	var_74_object = var_0_bool; // 0xbd8 MovT
	func_4895(); // 0xbd9 NEW_2
	
Label_3035:
	var_76_int = 27961; // 0xbdb PushI
	var_77_bool = var_67_bool == var_76_int; // 0xbdc Eq
	if(var_77_bool == 0) goto Label_3063; // 0xbdd JumpB
	var_78_string = ""; // 0xbde PushV
	var_78_string = "Neutral"; // 0xbdf MovS
	func_2999(var_68_cvector, var_78_string); // 0xbe0 NEW_2
	var_95_int = 526685; // 0xbe2 PushI
	SetMessage(var_95_int); // 0xbe3 TObjFunc
	ClearReplies(); // 0xbe5 TObjFunc
	var_96_int = 526686; // 0xbe7 PushI
	var_97_int = -1; // 0xbe8 PushI
	var_98_int = 27962; // 0xbe9 PushI
	AddReply(var_96_int, var_97_int, var_98_int); // 0xbea TObjFunc
	var_99_int = 526687; // 0xbec PushI
	var_100_int = -1; // 0xbed PushI
	var_101_int = 27963; // 0xbee PushI
	AddReply(var_99_int, var_100_int, var_101_int); // 0xbef TObjFunc
	var_102_int = 529000; // 0xbf1 PushI
	var_103_int = -1; // 0xbf2 PushI
	var_104_int = 30437; // 0xbf3 PushI
	AddReply(var_102_int, var_103_int, var_104_int); // 0xbf4 TObjFunc
	return 0; // 0xbf6 Return
	
Label_3063:
	var_3_object = 1; // 0xbf7 TMovB
	var_105_bool = 0; // 0xbf8 PushV
	func_4735(var_105_bool); // 0xbf9 NEW_2
	if(var_105_bool == 0) goto Label_3071; // 0xbfb JumpB
	lshStopAnimation(); // 0xbfc Func
	goto Label_3073; // 0xbfe Jump
	
Label_3073:
	return 0; // 0xc01 Return
	
Label_3071:
	StopAnimation(); // 0xbff Func
	
Label_3075:
	return 0; // 0xc03 Return
}


task_22_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_object, var_37_object, var_38_object, var_39_string, var_40_bool, var_41_object, var_42_object, var_43_object, var_44_string, var_45_bool, var_46_object, var_47_object, var_48_object, var_49_string, var_50_bool, var_51_object, var_52_object, var_53_object, var_54_string, var_55_bool, var_56_int, var_57_int, var_58_object, var_59_object, var_60_object, var_61_string, var_62_bool, var_63_object, var_64_object, var_65_object, var_66_string, var_67_bool, var_68_cvector)
{
	var_69_int = 1; // 0xca6 PushI
	if(var_69_int == 0) goto Label_3286; // 0xca7 JumpB
	func_4610(); // 0xca9 NEW_2
	var_71_int = 27966; // 0xcab PushI
	var_72_bool = var_68_cvector == var_71_int; // 0xcac Eq
	if(var_72_bool == 0) goto Label_3251; // 0xcad JumpB
	var_73_object = Obj(); var_74_object = Obj(); // 0xcae PushV
	var_73_object = var_1_object; // 0xcaf MovT
	var_74_object = var_0_bool; // 0xcb0 MovT
	func_4895(); // 0xcb1 NEW_2
	
Label_3251:
	var_76_int = 27965; // 0xcb3 PushI
	var_77_bool = var_67_bool == var_76_int; // 0xcb4 Eq
	if(var_77_bool == 0) goto Label_3274; // 0xcb5 JumpB
	var_78_string = ""; // 0xcb6 PushV
	var_78_string = "Neutral"; // 0xcb7 MovS
	func_3215(var_68_cvector, var_78_string); // 0xcb8 NEW_2
	var_95_int = 526689; // 0xcba PushI
	SetMessage(var_95_int); // 0xcbb TObjFunc
	ClearReplies(); // 0xcbd TObjFunc
	var_96_int = 526690; // 0xcbf PushI
	var_97_int = -1; // 0xcc0 PushI
	var_98_int = 27966; // 0xcc1 PushI
	AddReply(var_96_int, var_97_int, var_98_int); // 0xcc2 TObjFunc
	var_99_int = 526691; // 0xcc4 PushI
	var_100_int = -1; // 0xcc5 PushI
	var_101_int = 27967; // 0xcc6 PushI
	AddReply(var_99_int, var_100_int, var_101_int); // 0xcc7 TObjFunc
	return 0; // 0xcc9 Return
	
Label_3274:
	var_3_object = 1; // 0xcca TMovB
	var_102_bool = 0; // 0xccb PushV
	func_4735(var_102_bool); // 0xccc NEW_2
	if(var_102_bool == 0) goto Label_3282; // 0xcce JumpB
	lshStopAnimation(); // 0xccf Func
	goto Label_3284; // 0xcd1 Jump
	
Label_3284:
	return 0; // 0xcd4 Return
	
Label_3282:
	StopAnimation(); // 0xcd2 Func
	
Label_3286:
	return 0; // 0xcd6 Return
}


task_24_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_object, var_37_object, var_38_object, var_39_string, var_40_bool, var_41_object, var_42_object, var_43_object, var_44_string, var_45_bool, var_46_object, var_47_object, var_48_object, var_49_string, var_50_bool, var_51_object, var_52_object, var_53_object, var_54_string, var_55_bool, var_56_object, var_57_object, var_58_object, var_59_string, var_60_bool, var_61_int, var_62_int, var_63_object, var_64_object, var_65_object, var_66_string, var_67_bool, var_68_cvector)
{
	var_69_int = 1; // 0xd8c PushI
	if(var_69_int == 0) goto Label_3682; // 0xd8d JumpB
	func_4610(); // 0xd8f NEW_2
	var_71_int = 28640; // 0xd91 PushI
	var_72_bool = var_68_cvector == var_71_int; // 0xd92 Eq
	if(var_72_bool == 0) goto Label_3481; // 0xd93 JumpB
	var_73_object = Obj(); var_74_object = Obj(); // 0xd94 PushV
	var_73_object = var_1_object; // 0xd95 MovT
	var_74_object = var_0_bool; // 0xd96 MovT
	func_4864(); // 0xd97 NEW_2
	
Label_3481:
	var_77_int = 28655; // 0xd99 PushI
	var_78_bool = var_68_cvector == var_77_int; // 0xd9a Eq
	if(var_78_bool == 0) goto Label_3489; // 0xd9b JumpB
	var_79_object = Obj(); var_80_object = Obj(); // 0xd9c PushV
	var_79_object = var_1_object; // 0xd9d MovT
	var_80_object = var_0_bool; // 0xd9e MovT
	func_4813(); // 0xd9f NEW_2
	
Label_3489:
	var_161_int = 27970; // 0xda1 PushI
	var_162_bool = var_68_cvector == var_161_int; // 0xda2 Eq
	if(var_162_bool == 0) goto Label_3497; // 0xda3 JumpB
	var_163_object = Obj(); var_164_object = Obj(); // 0xda4 PushV
	var_163_object = var_1_object; // 0xda5 MovT
	var_164_object = var_0_bool; // 0xda6 MovT
	func_4895(); // 0xda7 NEW_2
	
Label_3497:
	var_166_int = 27969; // 0xda9 PushI
	var_167_bool = var_67_bool == var_166_int; // 0xdaa Eq
	if(var_167_bool == 0) goto Label_3539; // 0xdab JumpB
	var_168_string = ""; // 0xdac PushV
	var_168_string = "Sly"; // 0xdad MovS
	func_3445(var_68_cvector, var_168_string); // 0xdae NEW_2
	var_185_int = 526693; // 0xdb0 PushI
	SetMessage(var_185_int); // 0xdb1 TObjFunc
	ClearReplies(); // 0xdb3 TObjFunc
	var_186_bool = 0; // 0xdb5 PushV
	var_186_bool = 0; // 0xdb6 MovB
	var_187_bool = 0; var_188_object = Obj(); // 0xdb7 PushV
	var_188_object = var_1_object; // 0xdb8 MovT
	func_4936(var_188_object); // 0xdb9 NEW_2
	if(var_187_bool == 0) goto Label_3522; // 0xdbb JumpB
	var_195_bool = 0; var_196_object = Obj(); // 0xdbc PushV
	var_196_object = var_1_object; // 0xdbd MovT
	func_4948(var_196_object); // 0xdbe NEW_2
	if(var_195_bool == 0) goto Label_3522; // 0xdc0 JumpB
	var_186_bool = 1; // 0xdc1 MovB
	
Label_3522:
	if(var_186_bool == 0) goto Label_3528; // 0xdc2 JumpB
	var_201_int = 527323; // 0xdc3 PushI
	var_202_int = 28641; // 0xdc4 PushI
	var_203_int = 28640; // 0xdc5 PushI
	AddReply(var_201_int, var_202_int, var_203_int); // 0xdc6 TObjFunc
	
Label_3528:
	var_204_int = 526694; // 0xdc8 PushI
	var_205_int = -1; // 0xdc9 PushI
	var_206_int = 27970; // 0xdca PushI
	AddReply(var_204_int, var_205_int, var_206_int); // 0xdcb TObjFunc
	var_207_int = 526695; // 0xdcd PushI
	var_208_int = -1; // 0xdce PushI
	var_209_int = 27971; // 0xdcf PushI
	AddReply(var_207_int, var_208_int, var_209_int); // 0xdd0 TObjFunc
	return 0; // 0xdd2 Return
	
Label_3539:
	var_210_int = 28641; // 0xdd3 PushI
	var_211_bool = var_67_bool == var_210_int; // 0xdd4 Eq
	if(var_211_bool == 0) goto Label_3562; // 0xdd5 JumpB
	var_212_string = ""; // 0xdd6 PushV
	var_212_string = "Sly"; // 0xdd7 MovS
	func_3445(var_68_cvector, var_212_string); // 0xdd8 NEW_2
	var_213_int = 527324; // 0xdda PushI
	SetMessage(var_213_int); // 0xddb TObjFunc
	ClearReplies(); // 0xddd TObjFunc
	var_214_int = 527325; // 0xddf PushI
	var_215_int = 28644; // 0xde0 PushI
	var_216_int = 28642; // 0xde1 PushI
	AddReply(var_214_int, var_215_int, var_216_int); // 0xde2 TObjFunc
	var_217_int = 527326; // 0xde4 PushI
	var_218_int = 28645; // 0xde5 PushI
	var_219_int = 28643; // 0xde6 PushI
	AddReply(var_217_int, var_218_int, var_219_int); // 0xde7 TObjFunc
	return 0; // 0xde9 Return
	
Label_3562:
	var_220_int = 28645; // 0xdea PushI
	var_221_bool = var_67_bool == var_220_int; // 0xdeb Eq
	if(var_221_bool == 0) goto Label_3580; // 0xdec JumpB
	var_222_string = ""; // 0xded PushV
	var_222_string = "Neutral"; // 0xdee MovS
	func_3445(var_68_cvector, var_222_string); // 0xdef NEW_2
	var_223_int = 527328; // 0xdf1 PushI
	SetMessage(var_223_int); // 0xdf2 TObjFunc
	ClearReplies(); // 0xdf4 TObjFunc
	var_224_int = 527330; // 0xdf6 PushI
	var_225_int = 28648; // 0xdf7 PushI
	var_226_int = 28647; // 0xdf8 PushI
	AddReply(var_224_int, var_225_int, var_226_int); // 0xdf9 TObjFunc
	return 0; // 0xdfb Return
	
Label_3580:
	var_227_int = 28644; // 0xdfc PushI
	var_228_bool = var_67_bool == var_227_int; // 0xdfd Eq
	if(var_228_bool == 0) goto Label_3598; // 0xdfe JumpB
	var_229_string = ""; // 0xdff PushV
	var_229_string = "Sly"; // 0xe00 MovS
	func_3445(var_68_cvector, var_229_string); // 0xe01 NEW_2
	var_230_int = 527327; // 0xe03 PushI
	SetMessage(var_230_int); // 0xe04 TObjFunc
	ClearReplies(); // 0xe06 TObjFunc
	var_231_int = 527329; // 0xe08 PushI
	var_232_int = 28648; // 0xe09 PushI
	var_233_int = 28646; // 0xe0a PushI
	AddReply(var_231_int, var_232_int, var_233_int); // 0xe0b TObjFunc
	return 0; // 0xe0d Return
	
Label_3598:
	var_234_int = 28648; // 0xe0e PushI
	var_235_bool = var_67_bool == var_234_int; // 0xe0f Eq
	if(var_235_bool == 0) goto Label_3616; // 0xe10 JumpB
	var_236_string = ""; // 0xe11 PushV
	var_236_string = "Neutral"; // 0xe12 MovS
	func_3445(var_68_cvector, var_236_string); // 0xe13 NEW_2
	var_237_int = 527331; // 0xe15 PushI
	SetMessage(var_237_int); // 0xe16 TObjFunc
	ClearReplies(); // 0xe18 TObjFunc
	var_238_int = 527332; // 0xe1a PushI
	var_239_int = 28650; // 0xe1b PushI
	var_240_int = 28649; // 0xe1c PushI
	AddReply(var_238_int, var_239_int, var_240_int); // 0xe1d TObjFunc
	return 0; // 0xe1f Return
	
Label_3616:
	var_241_int = 28650; // 0xe20 PushI
	var_242_bool = var_67_bool == var_241_int; // 0xe21 Eq
	if(var_242_bool == 0) goto Label_3634; // 0xe22 JumpB
	var_243_string = ""; // 0xe23 PushV
	var_243_string = "Fear"; // 0xe24 MovS
	func_3445(var_68_cvector, var_243_string); // 0xe25 NEW_2
	var_244_int = 527333; // 0xe27 PushI
	SetMessage(var_244_int); // 0xe28 TObjFunc
	ClearReplies(); // 0xe2a TObjFunc
	var_245_int = 527334; // 0xe2c PushI
	var_246_int = 28652; // 0xe2d PushI
	var_247_int = 28651; // 0xe2e PushI
	AddReply(var_245_int, var_246_int, var_247_int); // 0xe2f TObjFunc
	return 0; // 0xe31 Return
	
Label_3634:
	var_248_int = 28652; // 0xe32 PushI
	var_249_bool = var_67_bool == var_248_int; // 0xe33 Eq
	if(var_249_bool == 0) goto Label_3652; // 0xe34 JumpB
	var_250_string = ""; // 0xe35 PushV
	var_250_string = "Fear"; // 0xe36 MovS
	func_3445(var_68_cvector, var_250_string); // 0xe37 NEW_2
	var_251_int = 527335; // 0xe39 PushI
	SetMessage(var_251_int); // 0xe3a TObjFunc
	ClearReplies(); // 0xe3c TObjFunc
	var_252_int = 527336; // 0xe3e PushI
	var_253_int = 28654; // 0xe3f PushI
	var_254_int = 28653; // 0xe40 PushI
	AddReply(var_252_int, var_253_int, var_254_int); // 0xe41 TObjFunc
	return 0; // 0xe43 Return
	
Label_3652:
	var_255_int = 28654; // 0xe44 PushI
	var_256_bool = var_67_bool == var_255_int; // 0xe45 Eq
	if(var_256_bool == 0) goto Label_3670; // 0xe46 JumpB
	var_257_string = ""; // 0xe47 PushV
	var_257_string = "Neutral"; // 0xe48 MovS
	func_3445(var_68_cvector, var_257_string); // 0xe49 NEW_2
	var_258_int = 527337; // 0xe4b PushI
	SetMessage(var_258_int); // 0xe4c TObjFunc
	ClearReplies(); // 0xe4e TObjFunc
	var_259_int = 527338; // 0xe50 PushI
	var_260_int = -1; // 0xe51 PushI
	var_261_int = 28655; // 0xe52 PushI
	AddReply(var_259_int, var_260_int, var_261_int); // 0xe53 TObjFunc
	return 0; // 0xe55 Return
	
Label_3670:
	var_3_object = 1; // 0xe56 TMovB
	var_262_bool = 0; // 0xe57 PushV
	func_4735(var_262_bool); // 0xe58 NEW_2
	if(var_262_bool == 0) goto Label_3678; // 0xe5a JumpB
	lshStopAnimation(); // 0xe5b Func
	goto Label_3680; // 0xe5d Jump
	
Label_3680:
	return 0; // 0xe60 Return
	
Label_3678:
	StopAnimation(); // 0xe5e Func
	
Label_3682:
	return 0; // 0xe62 Return
}


task_26_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_object, var_37_object, var_38_object, var_39_string, var_40_bool, var_41_object, var_42_object, var_43_object, var_44_string, var_45_bool, var_46_object, var_47_object, var_48_object, var_49_string, var_50_bool, var_51_object, var_52_object, var_53_object, var_54_string, var_55_bool, var_56_object, var_57_object, var_58_object, var_59_string, var_60_bool, var_61_object, var_62_object, var_63_object, var_64_string, var_65_bool, var_66_int, var_67_int, var_68_cvector)
{
	var_69_int = 1; // 0xf0a PushI
	if(var_69_int == 0) goto Label_3987; // 0xf0b JumpB
	func_4610(); // 0xf0d NEW_2
	var_71_int = 41234; // 0xf0f PushI
	var_72_bool = var_67_int == var_71_int; // 0xf10 Eq
	if(var_72_bool == 0) goto Label_3883; // 0xf11 JumpB
	var_73_string = ""; // 0xf12 PushV
	var_73_string = "Neutral"; // 0xf13 MovS
	func_3827(var_68_cvector, var_73_string); // 0xf14 NEW_2
	var_90_int = 539291; // 0xf16 PushI
	SetMessage(var_90_int); // 0xf17 TObjFunc
	ClearReplies(); // 0xf19 TObjFunc
	var_91_int = 542571; // 0xf1b PushI
	var_92_int = 44971; // 0xf1c PushI
	var_93_int = 44970; // 0xf1d PushI
	AddReply(var_91_int, var_92_int, var_93_int); // 0xf1e TObjFunc
	var_94_int = 539292; // 0xf20 PushI
	var_95_int = -1; // 0xf21 PushI
	var_96_int = 41235; // 0xf22 PushI
	AddReply(var_94_int, var_95_int, var_96_int); // 0xf23 TObjFunc
	var_97_int = 542570; // 0xf25 PushI
	var_98_int = -1; // 0xf26 PushI
	var_99_int = 44969; // 0xf27 PushI
	AddReply(var_97_int, var_98_int, var_99_int); // 0xf28 TObjFunc
	return 0; // 0xf2a Return
	
Label_3883:
	var_100_int = 44971; // 0xf2b PushI
	var_101_bool = var_67_int == var_100_int; // 0xf2c Eq
	if(var_101_bool == 0) goto Label_3906; // 0xf2d JumpB
	var_102_string = ""; // 0xf2e PushV
	var_102_string = "Fear"; // 0xf2f MovS
	func_3827(var_68_cvector, var_102_string); // 0xf30 NEW_2
	var_103_int = 542572; // 0xf32 PushI
	SetMessage(var_103_int); // 0xf33 TObjFunc
	ClearReplies(); // 0xf35 TObjFunc
	var_104_int = 542573; // 0xf37 PushI
	var_105_int = 44974; // 0xf38 PushI
	var_106_int = 44972; // 0xf39 PushI
	AddReply(var_104_int, var_105_int, var_106_int); // 0xf3a TObjFunc
	var_107_int = 542574; // 0xf3c PushI
	var_108_int = 44974; // 0xf3d PushI
	var_109_int = 44973; // 0xf3e PushI
	AddReply(var_107_int, var_108_int, var_109_int); // 0xf3f TObjFunc
	return 0; // 0xf41 Return
	
Label_3906:
	var_110_int = 44974; // 0xf42 PushI
	var_111_bool = var_67_int == var_110_int; // 0xf43 Eq
	if(var_111_bool == 0) goto Label_3929; // 0xf44 JumpB
	var_112_string = ""; // 0xf45 PushV
	var_112_string = "Fear"; // 0xf46 MovS
	func_3827(var_68_cvector, var_112_string); // 0xf47 NEW_2
	var_113_int = 542575; // 0xf49 PushI
	SetMessage(var_113_int); // 0xf4a TObjFunc
	ClearReplies(); // 0xf4c TObjFunc
	var_114_int = 542576; // 0xf4e PushI
	var_115_int = 44978; // 0xf4f PushI
	var_116_int = 44976; // 0xf50 PushI
	AddReply(var_114_int, var_115_int, var_116_int); // 0xf51 TObjFunc
	var_117_int = 542577; // 0xf53 PushI
	var_118_int = -1; // 0xf54 PushI
	var_119_int = 44977; // 0xf55 PushI
	AddReply(var_117_int, var_118_int, var_119_int); // 0xf56 TObjFunc
	return 0; // 0xf58 Return
	
Label_3929:
	var_120_int = 44978; // 0xf59 PushI
	var_121_bool = var_67_int == var_120_int; // 0xf5a Eq
	if(var_121_bool == 0) goto Label_3952; // 0xf5b JumpB
	var_122_string = ""; // 0xf5c PushV
	var_122_string = "Neutral"; // 0xf5d MovS
	func_3827(var_68_cvector, var_122_string); // 0xf5e NEW_2
	var_123_int = 542578; // 0xf60 PushI
	SetMessage(var_123_int); // 0xf61 TObjFunc
	ClearReplies(); // 0xf63 TObjFunc
	var_124_int = 542579; // 0xf65 PushI
	var_125_int = 44980; // 0xf66 PushI
	var_126_int = 44979; // 0xf67 PushI
	AddReply(var_124_int, var_125_int, var_126_int); // 0xf68 TObjFunc
	var_127_int = 542583; // 0xf6a PushI
	var_128_int = -1; // 0xf6b PushI
	var_129_int = 44983; // 0xf6c PushI
	AddReply(var_127_int, var_128_int, var_129_int); // 0xf6d TObjFunc
	return 0; // 0xf6f Return
	
Label_3952:
	var_130_int = 44980; // 0xf70 PushI
	var_131_bool = var_67_int == var_130_int; // 0xf71 Eq
	if(var_131_bool == 0) goto Label_3975; // 0xf72 JumpB
	var_132_string = ""; // 0xf73 PushV
	var_132_string = "Neutral"; // 0xf74 MovS
	func_3827(var_68_cvector, var_132_string); // 0xf75 NEW_2
	var_133_int = 542580; // 0xf77 PushI
	SetMessage(var_133_int); // 0xf78 TObjFunc
	ClearReplies(); // 0xf7a TObjFunc
	var_134_int = 542581; // 0xf7c PushI
	var_135_int = -1; // 0xf7d PushI
	var_136_int = 44981; // 0xf7e PushI
	AddReply(var_134_int, var_135_int, var_136_int); // 0xf7f TObjFunc
	var_137_int = 542582; // 0xf81 PushI
	var_138_int = -1; // 0xf82 PushI
	var_139_int = 44982; // 0xf83 PushI
	AddReply(var_137_int, var_138_int, var_139_int); // 0xf84 TObjFunc
	return 0; // 0xf86 Return
	
Label_3975:
	var_3_object = 1; // 0xf87 TMovB
	var_140_bool = 0; // 0xf88 PushV
	func_4735(var_140_bool); // 0xf89 NEW_2
	if(var_140_bool == 0) goto Label_3983; // 0xf8b JumpB
	lshStopAnimation(); // 0xf8c Func
	goto Label_3985; // 0xf8e Jump
	
Label_3985:
	return 0; // 0xf91 Return
	
Label_3983:
	StopAnimation(); // 0xf8f Func
	
Label_3987:
	return 0; // 0xf93 Return
}


task_27_event_7(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_object, var_37_object, var_38_object, var_39_string, var_40_bool, var_41_object, var_42_object, var_43_object, var_44_string, var_45_bool, var_46_object, var_47_object, var_48_object, var_49_string, var_50_bool, var_51_object, var_52_object, var_53_object, var_54_string, var_55_bool, var_56_object, var_57_object, var_58_object, var_59_string, var_60_bool, var_61_object, var_62_object, var_63_object, var_64_string, var_65_bool, var_66_cvector, var_67_int)
{
	var_68_int = 10; // 0xfe4 PushI
	var_69_bool = var_67_int == var_68_int; // 0xfe5 Eq
	if(var_69_bool == 0) goto Label_4104; // 0xfe6 JumpB
	func_4063(); // 0xfe8 NEW_2
	var_71_bool = 0; // 0xfea PushV
	var_71_bool = 0; // 0xfeb MovB
	var_72_bool = 0; // 0xfec PushV
	func_4277(var_72_bool); // 0xfed NEW_2
	if(var_72_bool == 0) goto Label_4085; // 0xfef JumpB
	var_75_bool = 0; // 0xff0 PushV
	func_4032(var_75_bool); // 0xff1 NEW_2
	if(var_75_bool == 0) goto Label_4085; // 0xff3 JumpB
	var_71_bool = 1; // 0xff4 MovB
	
Label_4085:
	if(var_71_bool == 0) goto Label_4098; // 0xff5 JumpB
	var_92_bool = 0; // 0xff6 PushV
	func_4012(var_92_bool); // 0xff7 NEW_2
	if(var_92_bool == 0) goto Label_4097; // 0xff9 JumpB
	var_111_bool = 0; var_112_object = Obj(); // 0xffa PushV
	var_113_object = Obj(); // 0xffb PushV
	func_4645(var_113_object); // 0xffc NEW_2
	var_112_object = var_113_object; // 0xffd Mov
	func_4425(var_112_object); // 0xfff NEW_2
	
Label_4097:
	goto Label_4104; // 0x1001 Jump
	
Label_4104:
	return 0; // 0x1008 Return
	
Label_4098:
	func_4027(var_67_int); // 0x1003 NEW_2
	func_4054(); // 0x1006 NEW_2
}


task_27_event_6(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_object, var_37_object, var_38_object, var_39_string, var_40_bool, var_41_object, var_42_object, var_43_object, var_44_string, var_45_bool, var_46_object, var_47_object, var_48_object, var_49_string, var_50_bool, var_51_object, var_52_object, var_53_object, var_54_string, var_55_bool, var_56_object, var_57_object, var_58_object, var_59_string, var_60_bool, var_61_object, var_62_object, var_63_object, var_64_string, var_65_bool, var_66_cvector)
{
	func_4245(); // 0x100a NEW_2
	func_4063(); // 0x100d NEW_2
	lshStopSpeech(); // 0x100f Func
	lshStopAnimation(); // 0x1011 Func
	StopAsync(); // 0x1013 Func
	Hold(); // 0x1015 Func
	return 0; // 0x1017 Return
}


task_27_event_5(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_object, var_37_object, var_38_object, var_39_string, var_40_bool, var_41_object, var_42_object, var_43_object, var_44_string, var_45_bool, var_46_object, var_47_object, var_48_object, var_49_string, var_50_bool, var_51_object, var_52_object, var_53_object, var_54_string, var_55_bool, var_56_object, var_57_object, var_58_object, var_59_string, var_60_bool, var_61_object, var_62_object, var_63_object, var_64_string, var_65_bool, var_66_cvector)
{
	StopGroup0(); // 0x1018 Func
	func_4063(); // 0x101b NEW_2
	var_68_string = ""; // 0x101d PushV
	var_68_string = "Neutral"; // 0x101e MovS
	func_4564(var_68_string); // 0x101f NEW_2
	func_4054(); // 0x1022 NEW_2
	return 0; // 0x1024 Return
}


task_27_event_45(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_object, var_37_object, var_38_object, var_39_string, var_40_bool, var_41_object, var_42_object, var_43_object, var_44_string, var_45_bool, var_46_object, var_47_object, var_48_object, var_49_string, var_50_bool, var_51_object, var_52_object, var_53_object, var_54_string, var_55_bool, var_56_object, var_57_object, var_58_object, var_59_string, var_60_bool, var_61_object, var_62_object, var_63_object, var_64_string, var_65_bool, var_66_cvector, var_67_bool)
{
	var_68_bool = var_67_bool; // 0x1026 Push
	if(var_68_bool == 0) goto Label_4140; // 0x1027 JumpB
	func_4054(); // 0x1029 NEW_2
	goto Label_4144; // 0x102b Jump
	
Label_4144:
	return 0; // 0x1030 Return
	
Label_4140:
	var_74_string = ""; // 0x102c PushV
	var_74_string = "Neutral"; // 0x102d MovS
	func_4564(var_74_string); // 0x102e NEW_2
}


task_27_event_0(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_object, var_37_object, var_38_object, var_39_string, var_40_bool, var_41_object, var_42_object, var_43_object, var_44_string, var_45_bool, var_46_object, var_47_object, var_48_object, var_49_string, var_50_bool, var_51_object, var_52_object, var_53_object, var_54_string, var_55_bool, var_56_object, var_57_object, var_58_object, var_59_string, var_60_bool, var_61_object, var_62_object, var_63_object, var_64_string, var_65_bool, var_66_cvector, var_67_object)
{
	var_68_bool = 0; var_69_bool = 0; // 0x1031 PushV
	IsOverrideActive(var_69_bool); // 0x1032 Func
	var_70_bool = var_69_bool == 0; // 0x1034 Not
	if(var_70_bool == 0) goto Label_4173; // 0x1035 JumpB
	EventDisable(0); // 0x1036 EventDisable
	func_4245(); // 0x1038 NEW_2
	var_71_bool = 0; var_72_object = Obj(); // 0x103a PushV
	var_72_object = var_67_object; // 0x103b Mov
	func_4268(var_72_object); // 0x103c NEW_2
	EventEnable(0); // 0x103e EventEnable
	var_85_object = Obj(); // 0x103f PushV
	var_85_object = var_67_object; // 0x1040 Mov
	func_5397(var_59_string, var_60_bool, var_61_object, var_62_object, var_63_object, var_64_string, var_65_bool, var_66_cvector, var_67_object, var_68_bool, var_69_bool, var_85_object); // 0x1041 NEW_2
	var_1273_string = ""; // 0x1043 PushV
	var_1273_string = "Neutral"; // 0x1044 MovS
	func_4564(var_1273_string); // 0x1045 NEW_2
	func_4063(); // 0x1048 NEW_2
	func_4054(); // 0x104b NEW_2
	
Label_4173:
	return 2; // 0x104d Return
}


main(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_object, var_37_object, var_38_object, var_39_string, var_40_bool, var_41_object, var_42_object, var_43_object, var_44_string, var_45_bool, var_46_object, var_47_object, var_48_object, var_49_string, var_50_bool, var_51_object, var_52_object, var_53_object, var_54_string, var_55_bool, var_56_object, var_57_object, var_58_object, var_59_string, var_60_bool, var_61_object, var_62_object, var_63_object, var_64_string, var_65_bool, var_66_cvector)
{
	var_67_bool = GlobalVars[1]; // 0xf94 PushGE
	var_67_bool = 0; // 0xf95 MovB
	GlobalVars[1] = var_67_bool; // 0xf96 PopGE
	var_68_int = GlobalVars[2]; // 0xf97 PushGE
	var_68_int = -1; // 0xf98 MovI
	GlobalVars[2] = var_68_int; // 0xf99 PopGE
	func_3998(var_66_cvector); // 0xf9b NEW_2
	return 0; // 0xf9d Return
}


func_0(var_0_bool)
{
	DoTrade(); // 0x1 Func
	var_0_bool = 0; // 0x3 TMovB
	
Label_4:
	var_533_string = ""; // 0x4 PushV
	var_533_string = "Neutral"; // 0x5 MovS
	func_4564(var_533_string); // 0x6 NEW_2
	lshWaitForAnimEnd(); // 0x8 Func
	var_534_bool = var_0_bool; // 0xa PushT
	if(var_534_bool == 0) goto Label_13; // 0xb JumpB
	return 0; // 0xc Return
	
Label_13:
	goto Label_4; // 0xd Jump
}


func_4864()
{
	var_75_string = "ook11Grif1"; // 0x1301 PushS
	var_76_int = 1; // 0x1302 PushI
	SetVariable(var_75_string, var_76_int); // 0x1303 Func
	return 0; // 0x1305 Return
}


func_4610()
{
	var_70_bool = 0; // 0x1202 PushV
	func_4735(var_70_bool); // 0x1203 NEW_2
	if(var_70_bool == 0) goto Label_4616; // 0x1205 JumpB
	lshStopSpeech(); // 0x1206 Func
	
Label_4616:
	return 0; // 0x1208 Return
}


func_1539(var_0_bool, var_539_int, var_540_object)
{
	var_542_object = Obj(); var_543_bool = 0; var_544_int = 0; var_545_bool = 0; var_546_object = Obj(); var_547_bool = 0; var_548_int = 0; var_549_bool = 0; // 0x603 PushV
	var_0_bool = var_540_object; // 0x604 TMov
	var_550_bool = 0; var_551_object = Obj(); var_552_float = 0; // 0x605 PushV
	var_551_object = var_540_object; // 0x606 Mov
	var_552_float = 70.0; // 0x607 MovF
	func_4282(var_551_object, var_552_float); // 0x608 NEW_2
	var_553_bool = var_550_bool == 0; // 0x60a Not
	if(var_553_bool == 0) goto Label_1550; // 0x60b JumpB
	var_539_int = -2; // 0x60c MovI
	return 8; // 0x60d Return
	
Label_1550:
	CreateDialog(var_546_object); // 0x60e Func
	var_554_int = 0; // 0x610 PushV
	func_4729(var_554_int); // 0x611 NEW_2
	SetNPCName(var_554_int); // 0x613 ObjFunc
	var_555_int = 0; // 0x615 PushV
	func_4727(var_555_int); // 0x616 NEW_2
	SetNPCDescription(var_555_int); // 0x618 ObjFunc
	var_556_string = ""; // 0x61a PushV
	func_4731(var_556_string); // 0x61b NEW_2
	SetPhoto(var_556_string); // 0x61d ObjFunc
	var_557_string = ""; // 0x61f PushV
	func_4733(var_557_string); // 0x620 NEW_2
	SetPhoto2(var_557_string); // 0x622 ObjFunc
	var_558_int = 0; // 0x624 PushV
	func_5355(var_558_int); // 0x625 NEW_2
	SetPlayerName(var_558_int); // 0x627 ObjFunc
	var_548_int = -1; // 0x629 MovI
	IsOverrideActive(var_547_bool); // 0x62a Func
	var_559_bool = var_547_bool; // 0x62c Push
	if(var_559_bool == 0) goto Label_1584; // 0x62d JumpB
	var_539_int = -2; // 0x62e MovI
	return 8; // 0x62f Return
	
Label_1584:
	DoDialog(var_546_object); // 0x630 Func
	var_560_bool = 0; var_561_object = Obj(); // 0x632 PushV
	var_562_object = Obj(); // 0x633 PushV
	func_4645(var_562_object); // 0x634 NEW_2
	var_561_object = var_562_object; // 0x635 Mov
	func_4367(var_560_bool, var_561_object); // 0x637 NEW_2
	var_563_object = Obj(); var_564_object = Obj(); // 0x639 PushV
	var_563_object = var_540_object; // 0x63a Mov
	var_564_object = var_546_object; // 0x63b Mov
	TaskCall(8); // 0x63c TaskCall
	func_1620(var_565_object, var_566_object, var_567_string, var_568_bool, var_563_object, var_564_object); // 0x63d NEW_2
	TaskReturn(); // 0x63e TaskReturn
	IsDialogEnd(var_549_bool); // 0x640 ObjFunc
	
Label_1602:
	var_596_bool = var_549_bool == 0; // 0x642 Not
	if(var_596_bool == 0) goto Label_1609; // 0x643 JumpB
	sync(); // 0x644 Func
	IsDialogEnd(var_549_bool); // 0x646 ObjFunc
	goto Label_1602; // 0x648 Jump
	
Label_1609:
	var_597_object = Obj(); // 0x649 PushV
	var_597_object = var_540_object; // 0x64a Mov
	func_4350(); // 0x64b NEW_2
	StopDialog(var_546_object); // 0x64d Func
	GetReturnValue(var_548_int); // 0x64f ObjFunc
	var_539_int = var_548_int; // 0x651 Mov
	return 8; // 0x652 Return
}


func_2562(var_2_object, var_919_string)
{
	var_920_bool = 0; // 0xa03 PushV
	func_4735(var_920_bool); // 0xa04 NEW_2
	var_921_bool = var_920_bool == 0; // 0xa06 Not
	if(var_921_bool == 0) goto Label_2569; // 0xa07 JumpB
	return 0; // 0xa08 Return
	
Label_2569:
	var_922_bool = var_919_string == var_2_object; // 0xa09 Eq
	if(var_922_bool == 0) goto Label_2572; // 0xa0a JumpB
	return 0; // 0xa0b Return
	
Label_2572:
	var_923_string = ""; var_924_bool = 0; // 0xa0c PushV
	var_923_string = var_919_string; // 0xa0d Mov
	var_925_string = ""; // 0xa0e PushS
	var_926_bool = var_919_string == var_925_string; // 0xa0f Eq
	if(var_926_bool == 0) goto Label_2579; // 0xa10 JumpB
	var_924_bool = 0; // 0xa11 MovB
	goto Label_2580; // 0xa12 Jump
	
Label_2580:
	func_4580(var_923_string, var_924_bool); // 0xa14 NEW_2
	var_2_object = var_919_string; // 0xa16 TMov
	return 0; // 0xa17 Return
	
Label_2579:
	var_924_bool = 1; // 0xa13 MovB
}


func_3076(var_0_bool, var_1077_int, var_1078_object)
{
	var_1080_object = Obj(); var_1081_bool = 0; var_1082_int = 0; var_1083_bool = 0; var_1084_object = Obj(); var_1085_bool = 0; var_1086_int = 0; var_1087_bool = 0; // 0xc04 PushV
	var_0_bool = var_1078_object; // 0xc05 TMov
	var_1088_bool = 0; var_1089_object = Obj(); var_1090_float = 0; // 0xc06 PushV
	var_1089_object = var_1078_object; // 0xc07 Mov
	var_1090_float = 70.0; // 0xc08 MovF
	func_4282(var_1089_object, var_1090_float); // 0xc09 NEW_2
	var_1091_bool = var_1088_bool == 0; // 0xc0b Not
	if(var_1091_bool == 0) goto Label_3087; // 0xc0c JumpB
	var_1077_int = -2; // 0xc0d MovI
	return 8; // 0xc0e Return
	
Label_3087:
	CreateDialog(var_1084_object); // 0xc0f Func
	var_1092_int = 0; // 0xc11 PushV
	func_4729(var_1092_int); // 0xc12 NEW_2
	SetNPCName(var_1092_int); // 0xc14 ObjFunc
	var_1093_int = 0; // 0xc16 PushV
	func_4727(var_1093_int); // 0xc17 NEW_2
	SetNPCDescription(var_1093_int); // 0xc19 ObjFunc
	var_1094_string = ""; // 0xc1b PushV
	func_4731(var_1094_string); // 0xc1c NEW_2
	SetPhoto(var_1094_string); // 0xc1e ObjFunc
	var_1095_string = ""; // 0xc20 PushV
	func_4733(var_1095_string); // 0xc21 NEW_2
	SetPhoto2(var_1095_string); // 0xc23 ObjFunc
	var_1096_int = 0; // 0xc25 PushV
	func_5355(var_1096_int); // 0xc26 NEW_2
	SetPlayerName(var_1096_int); // 0xc28 ObjFunc
	var_1086_int = -1; // 0xc2a MovI
	IsOverrideActive(var_1085_bool); // 0xc2b Func
	var_1097_bool = var_1085_bool; // 0xc2d Push
	if(var_1097_bool == 0) goto Label_3121; // 0xc2e JumpB
	var_1077_int = -2; // 0xc2f MovI
	return 8; // 0xc30 Return
	
Label_3121:
	DoDialog(var_1084_object); // 0xc31 Func
	var_1098_bool = 0; var_1099_object = Obj(); // 0xc33 PushV
	var_1100_object = Obj(); // 0xc34 PushV
	func_4645(var_1100_object); // 0xc35 NEW_2
	var_1099_object = var_1100_object; // 0xc36 Mov
	func_4367(var_1098_bool, var_1099_object); // 0xc38 NEW_2
	var_1101_object = Obj(); var_1102_object = Obj(); // 0xc3a PushV
	var_1101_object = var_1078_object; // 0xc3b Mov
	var_1102_object = var_1084_object; // 0xc3c Mov
	TaskCall(22); // 0xc3d TaskCall
	func_3157(var_1103_object, var_1104_object, var_1105_string, var_1106_bool, var_1101_object, var_1102_object); // 0xc3e NEW_2
	TaskReturn(); // 0xc3f TaskReturn
	IsDialogEnd(var_1087_bool); // 0xc41 ObjFunc
	
Label_3139:
	var_1131_bool = var_1087_bool == 0; // 0xc43 Not
	if(var_1131_bool == 0) goto Label_3146; // 0xc44 JumpB
	sync(); // 0xc45 Func
	IsDialogEnd(var_1087_bool); // 0xc47 ObjFunc
	goto Label_3139; // 0xc49 Jump
	
Label_3146:
	var_1132_object = Obj(); // 0xc4a PushV
	var_1132_object = var_1078_object; // 0xc4b Mov
	func_4350(); // 0xc4c NEW_2
	StopDialog(var_1084_object); // 0xc4e Func
	GetReturnValue(var_1086_int); // 0xc50 ObjFunc
	var_1077_int = var_1086_int; // 0xc52 Mov
	return 8; // 0xc53 Return
}


func_5378(var_498_object)
{
	var_499_bool = 0; var_500_object = Obj(); // 0x1503 PushV
	var_500_object = var_498_object; // 0x1504 Mov
	func_4505(var_499_bool, var_500_object); // 0x1505 NEW_2
	var_530_bool = var_499_bool == 0; // 0x1507 Not
	if(var_530_bool == 0) goto Label_5386; // 0x1508 JumpB
	return 0; // 0x1509 Return
	
Label_5386:
	var_531_object = Obj(); // 0x150a PushV
	var_531_object = var_498_object; // 0x150b Mov
	TaskCall(0); // 0x150c TaskCall
	func_0(var_531_object); // 0x150d NEW_2
	TaskReturn(); // 0x150e TaskReturn
	var_535_object = Obj(); // 0x1510 PushV
	var_535_object = var_498_object; // 0x1511 Mov
	func_4560(); // 0x1512 NEW_2
	return 0; // 0x1514 Return
}


func_4870()
{
	var_207_string = "k4q01"; // 0x1307 PushS
	var_208_int = -1; // 0x1308 PushI
	SetVariable(var_207_string, var_208_int); // 0x1309 Func
	func_5038(); // 0x130c NEW_2
	return 0; // 0x130e Return
}


func_4617(var_128_string, var_129_int, var_130_int)
{
	var_131_bool = 0; var_132_bool = 0; // 0x1209 PushV
	var_133_bool = 0; var_134_int = 0; var_135_int = 0; // 0x120a PushV
	var_134_int = var_129_int; // 0x120b Mov
	var_135_int = var_130_int; // 0x120c Mov
	func_4661(var_133_bool, var_134_int, var_135_int); // 0x120d NEW_2
	if(var_133_bool == 0) goto Label_4627; // 0x120f JumpB
	var_138_int = 0; // 0x1210 PushI
	AddItem(var_132_bool, var_128_string, var_138_int); // 0x1211 Func
	
Label_4627:
	return 2; // 0x1213 Return
}


func_5131(var_79_object)
{
	var_80_object = Obj(); var_81_object = Obj(); var_82_object = Obj(); var_83_object = Obj(); // 0x140b PushV
	GetMainOutdoorScene(var_82_object); // 0x140c Func
	var_84_bool = var_82_object == 0; // 0x140e NullEq
	if(var_84_bool == 0) goto Label_5142; // 0x140f JumpB
	var_85_string = "Can't find main outdoor scene"; // 0x1410 PushS
	Trace(var_85_string); // 0x1411 Func
	var_83_object = 0; // 0x1413 SetNull
	var_79_object = var_83_object; // 0x1414 Mov
	return 4; // 0x1415 Return
	
Label_5142:
	GetMap(var_83_object); // 0x1416 ObjFunc
	var_79_object = var_83_object; // 0x1418 Mov
	return 4; // 0x1419 Return
}


func_2062(var_0_bool, var_1_object, var_2_object, var_3_object, var_784_object, var_785_object)
{
	var_0_bool = var_785_object; // 0x80f TMov
	var_1_object = var_784_object; // 0x810 TMov
	var_3_object = 0; // 0x811 TMovB
	var_790_int = 1; // 0x812 PushI
	if(var_790_int == 0) goto Label_2095; // 0x813 JumpB
	var_791_string = ""; // 0x814 PushV
	var_791_string = "Fear"; // 0x815 MovS
	func_2125(var_785_object, var_791_string); // 0x816 NEW_2
	var_799_int = 526669; // 0x818 PushI
	SetMessage(var_799_int); // 0x819 TObjFunc
	ClearReplies(); // 0x81b TObjFunc
	var_800_int = 526670; // 0x81d PushI
	var_801_int = -1; // 0x81e PushI
	var_802_int = 27946; // 0x81f PushI
	AddReply(var_800_int, var_801_int, var_802_int); // 0x820 TObjFunc
	var_803_int = 526671; // 0x822 PushI
	var_804_int = -1; // 0x823 PushI
	var_805_int = 27947; // 0x824 PushI
	AddReply(var_803_int, var_804_int, var_805_int); // 0x825 TObjFunc
	var_806_int = 528784; // 0x827 PushI
	var_807_int = -1; // 0x828 PushI
	var_808_int = 30196; // 0x829 PushI
	AddReply(var_806_int, var_807_int, var_808_int); // 0x82a TObjFunc
	goto Label_2095; // 0x82c Jump
	
Label_2095:
	var_809_bool = 0; // 0x82f PushV
	func_4735(var_809_bool); // 0x830 NEW_2
	if(var_809_bool == 0) goto Label_2110; // 0x832 JumpB
	
Label_2099:
	lshWaitForAnimEnd(); // 0x833 Func
	var_810_object = var_3_object; // 0x835 PushT
	if(var_810_object == 0) goto Label_2104; // 0x836 JumpB
	goto Label_2109; // 0x837 Jump
	
Label_2109:
	goto Label_2124; // 0x83d Jump
	
Label_2124:
	return 0; // 0x84c Return
	
Label_2104:
	var_811_string = ""; // 0x838 PushV
	var_811_string = var_2_object; // 0x839 MovT
	func_4564(var_811_string); // 0x83a NEW_2
	goto Label_2099; // 0x83c Jump
	
Label_2110:
	var_812_string = "all"; // 0x83e PushS
	var_813_string = "idle"; // 0x83f PushS
	PlayAnimation(var_812_string, var_813_string); // 0x840 Func
	
Label_2114:
	WaitForAnimEnd(); // 0x842 Func
	var_814_object = var_3_object; // 0x844 PushT
	if(var_814_object == 0) goto Label_2119; // 0x845 JumpB
	goto Label_2124; // 0x846 Jump
	
Label_2119:
	var_815_string = "all"; // 0x847 PushS
	var_816_string = "idle"; // 0x848 PushS
	PlayAnimation(var_815_string, var_816_string); // 0x849 Func
	goto Label_2114; // 0x84b Jump
}


func_4367(var_286_bool, var_287_object)
{
	var_291_int = 0; var_292_int = 0; var_293_int = 0; var_294_int = 0; // 0x110f PushV
	var_295_string = "voice_common"; // 0x1110 PushS
	GetVariable(var_295_string, var_293_int); // 0x1111 Func
	var_296_int = var_293_int; // 0x1113 Push
	if(var_296_int == 0) goto Label_4405; // 0x1114 JumpB
	var_297_bool = 0; var_298_object = Obj(); // 0x1115 PushV
	var_298_object = var_287_object; // 0x1116 Mov
	func_4425(var_298_object); // 0x1117 NEW_2
	var_327_bool = var_297_bool == 0; // 0x1119 Not
	if(var_327_bool == 0) goto Label_4387; // 0x111a JumpB
	var_328_bool = 0; var_329_object = Obj(); // 0x111b PushV
	var_329_object = var_287_object; // 0x111c Mov
	func_4462(var_329_object); // 0x111d NEW_2
	var_358_bool = var_328_bool == 0; // 0x111f Not
	if(var_358_bool == 0) goto Label_4387; // 0x1120 JumpB
	var_286_bool = 0; // 0x1121 MovB
	return 4; // 0x1122 Return
	
Label_4387:
	var_359_int = 2; // 0x1123 PushI
	irand(var_294_int, var_359_int); // 0x1124 Func
	var_360_int = var_294_int; // 0x1126 Push
	if(var_360_int == 0) goto Label_4400; // 0x1127 JumpB
	var_361_string = "voice_common"; // 0x1128 PushS
	var_362_int = 1; // 0x1129 PushI
	var_363_int = var_293_int + var_362_int; // 0x112a Add
	var_364_int = 3; // 0x112b PushI
	var_365_int = var_363_int / var_364_int; // 0x112c Mod
	SetVariable(var_361_string, var_365_int); // 0x112d Func
	goto Label_4404; // 0x112f Jump
	
Label_4404:
	goto Label_4423; // 0x1134 Jump
	
Label_4423:
	var_286_bool = 1; // 0x1147 MovB
	return 4; // 0x1148 Return
	
Label_4400:
	var_366_string = "voice_common"; // 0x1130 PushS
	var_367_int = 0; // 0x1131 PushI
	SetVariable(var_366_string, var_367_int); // 0x1132 Func
	
Label_4405:
	var_368_bool = 0; var_369_object = Obj(); // 0x1135 PushV
	var_369_object = var_287_object; // 0x1136 Mov
	func_4462(var_369_object); // 0x1137 NEW_2
	var_370_bool = var_368_bool == 0; // 0x1139 Not
	if(var_370_bool == 0) goto Label_4419; // 0x113a JumpB
	var_371_bool = 0; var_372_object = Obj(); // 0x113b PushV
	var_372_object = var_287_object; // 0x113c Mov
	func_4425(var_372_object); // 0x113d NEW_2
	var_373_bool = var_371_bool == 0; // 0x113f Not
	if(var_373_bool == 0) goto Label_4419; // 0x1140 JumpB
	var_286_bool = 0; // 0x1141 MovB
	return 4; // 0x1142 Return
	
Label_4419:
	var_374_string = "voice_common"; // 0x1143 PushS
	var_375_int = 1; // 0x1144 PushI
	SetVariable(var_374_string, var_375_int); // 0x1145 Func
}


func_4879()
{
	var_176_object = Obj(); var_177_string = ""; var_178_float = 0; // 0x1310 PushV
	var_179_object = Obj(); // 0x1311 PushV
	func_5131(var_179_object); // 0x1312 NEW_2
	var_176_object = var_179_object; // 0x1313 Mov
	var_177_string = "pt_map_warehouse_gangster"; // 0x1315 MovS
	var_178_float = 2; // 0x1316 MovI
	func_5148(var_176_object, var_177_string, var_178_float); // 0x1317 NEW_2
	var_180_object = Obj(); // 0x1319 PushV
	func_5131(var_180_object); // 0x131a NEW_2
	ShowMap(var_180_object); // 0x131c ObjFunc
	return 0; // 0x131e Return
}


func_4628(var_139_string, var_140_int, var_141_int, var_142_int, var_143_int)
{
	var_144_int = 0; var_145_bool = 0; var_146_int = 0; var_147_bool = 0; // 0x1214 PushV
	var_148_bool = 0; var_149_int = 0; var_150_int = 0; // 0x1215 PushV
	var_149_int = var_140_int; // 0x1216 Mov
	var_150_int = var_141_int; // 0x1217 Mov
	func_4661(var_148_bool, var_149_int, var_150_int); // 0x1218 NEW_2
	if(var_148_bool == 0) goto Label_4644; // 0x121a JumpB
	var_151_int = var_143_int - var_142_int; // 0x121b Sub
	var_152_int = 1; // 0x121c PushI
	var_153_int = var_151_int + var_152_int; // 0x121d Add
	irand(var_146_int, var_153_int); // 0x121e Func
	var_154_int = 0; // 0x1220 PushI
	var_155_int = var_146_int + var_142_int; // 0x1221 Add
	AddItem(var_147_bool, var_139_string, var_154_int, var_155_int); // 0x1222 Func
	
Label_4644:
	return 4; // 0x1224 Return
}


func_5397(var_85_object, var_440_object, var_541_object, var_605_object, var_669_object, var_762_object, var_826_object, var_890_object, var_951_object, var_1015_object, var_1079_object, var_1140_object)
{
	var_86_int = GlobalVars[2]; // 0x1516 PushGE
	var_87_int = 0; // 0x1517 PushV
	func_4688(var_87_int); // 0x1518 NEW_2
	var_93_bool = var_86_int != var_87_int; // 0x151a Neq
	if(var_93_bool == 0) goto Label_5413; // 0x151b JumpB
	func_5181(); // 0x151d NEW_2
	var_211_int = GlobalVars[2]; // 0x151f PushGE
	var_212_int = 0; // 0x1520 PushV
	func_4688(var_212_int); // 0x1521 NEW_2
	var_211_int = var_212_int; // 0x1522 Mov
	GlobalVars[2] = var_211_int; // 0x1524 PopGE
	
Label_5413:
	var_213_bool = GlobalVars[1]; // 0x1525 PushGE
	var_214_bool = var_213_bool == 0; // 0x1526 Not
	if(var_214_bool == 0) goto Label_5425; // 0x1527 JumpB
	var_215_int = 0; var_216_object = Obj(); // 0x1528 PushV
	var_216_object = var_85_object; // 0x1529 Mov
	TaskCall(1); // 0x152a TaskCall
	func_22(var_217_object, var_215_int, var_216_object); // 0x152b NEW_2
	TaskReturn(); // 0x152c TaskReturn
	var_433_bool = GlobalVars[1]; // 0x152e PushGE
	var_433_bool = 1; // 0x152f MovB
	GlobalVars[1] = var_433_bool; // 0x1530 PopGE
	
Label_5425:
	var_434_bool = 0; var_435_int = 0; // 0x1531 PushV
	var_435_int = 1; // 0x1532 MovI
	func_4697(var_434_bool, var_435_int); // 0x1533 NEW_2
	if(var_434_bool == 0) goto Label_5444; // 0x1535 JumpB
	var_437_int = 1000; // 0x1536 PushI
	var_438_int = 0; var_439_object = Obj(); // 0x1537 PushV
	var_439_object = var_85_object; // 0x1538 Mov
	TaskCall(5); // 0x1539 TaskCall
	func_1318(var_440_object, var_438_int, var_439_object); // 0x153a NEW_2
	TaskReturn(); // 0x153b TaskReturn
	var_497_bool = var_437_int == var_440_object; // 0x153d Eq
	if(var_497_bool == 0) goto Label_5443; // 0x153e JumpB
	var_498_object = Obj(); // 0x153f PushV
	var_498_object = var_85_object; // 0x1540 Mov
	func_5378(var_498_object); // 0x1541 NEW_2
	
Label_5443:
	return 0; // 0x1543 Return
	
Label_5444:
	var_536_bool = 0; var_537_int = 0; // 0x1544 PushV
	var_537_int = 2; // 0x1545 MovI
	func_4697(var_536_bool, var_537_int); // 0x1546 NEW_2
	if(var_536_bool == 0) goto Label_5463; // 0x1548 JumpB
	var_538_int = 1000; // 0x1549 PushI
	var_539_int = 0; var_540_object = Obj(); // 0x154a PushV
	var_540_object = var_85_object; // 0x154b Mov
	TaskCall(7); // 0x154c TaskCall
	func_1539(var_541_object, var_539_int, var_540_object); // 0x154d NEW_2
	TaskReturn(); // 0x154e TaskReturn
	var_598_bool = var_538_int == var_541_object; // 0x1550 Eq
	if(var_598_bool == 0) goto Label_5462; // 0x1551 JumpB
	var_599_object = Obj(); // 0x1552 PushV
	var_599_object = var_85_object; // 0x1553 Mov
	func_5378(var_599_object); // 0x1554 NEW_2
	
Label_5462:
	return 0; // 0x1556 Return
	
Label_5463:
	var_600_bool = 0; var_601_int = 0; // 0x1557 PushV
	var_601_int = 3; // 0x1558 MovI
	func_4697(var_600_bool, var_601_int); // 0x1559 NEW_2
	if(var_600_bool == 0) goto Label_5482; // 0x155b JumpB
	var_602_int = 1000; // 0x155c PushI
	var_603_int = 0; var_604_object = Obj(); // 0x155d PushV
	var_604_object = var_85_object; // 0x155e Mov
	TaskCall(9); // 0x155f TaskCall
	func_1760(var_605_object, var_603_int, var_604_object); // 0x1560 NEW_2
	TaskReturn(); // 0x1561 TaskReturn
	var_662_bool = var_602_int == var_605_object; // 0x1563 Eq
	if(var_662_bool == 0) goto Label_5481; // 0x1564 JumpB
	var_663_object = Obj(); // 0x1565 PushV
	var_663_object = var_85_object; // 0x1566 Mov
	func_5378(var_663_object); // 0x1567 NEW_2
	
Label_5481:
	return 0; // 0x1569 Return
	
Label_5482:
	var_664_bool = 0; var_665_int = 0; // 0x156a PushV
	var_665_int = 4; // 0x156b MovI
	func_4697(var_664_bool, var_665_int); // 0x156c NEW_2
	if(var_664_bool == 0) goto Label_5501; // 0x156e JumpB
	var_666_int = 1000; // 0x156f PushI
	var_667_int = 0; var_668_object = Obj(); // 0x1570 PushV
	var_668_object = var_85_object; // 0x1571 Mov
	TaskCall(3); // 0x1572 TaskCall
	func_248(var_669_object, var_667_int, var_668_object); // 0x1573 NEW_2
	TaskReturn(); // 0x1574 TaskReturn
	var_755_bool = var_666_int == var_669_object; // 0x1576 Eq
	if(var_755_bool == 0) goto Label_5500; // 0x1577 JumpB
	var_756_object = Obj(); // 0x1578 PushV
	var_756_object = var_85_object; // 0x1579 Mov
	func_5378(var_756_object); // 0x157a NEW_2
	
Label_5500:
	return 0; // 0x157c Return
	
Label_5501:
	var_757_bool = 0; var_758_int = 0; // 0x157d PushV
	var_758_int = 5; // 0x157e MovI
	func_4697(var_757_bool, var_758_int); // 0x157f NEW_2
	if(var_757_bool == 0) goto Label_5520; // 0x1581 JumpB
	var_759_int = 1000; // 0x1582 PushI
	var_760_int = 0; var_761_object = Obj(); // 0x1583 PushV
	var_761_object = var_85_object; // 0x1584 Mov
	TaskCall(11); // 0x1585 TaskCall
	func_1981(var_762_object, var_760_int, var_761_object); // 0x1586 NEW_2
	TaskReturn(); // 0x1587 TaskReturn
	var_819_bool = var_759_int == var_762_object; // 0x1589 Eq
	if(var_819_bool == 0) goto Label_5519; // 0x158a JumpB
	var_820_object = Obj(); // 0x158b PushV
	var_820_object = var_85_object; // 0x158c Mov
	func_5378(var_820_object); // 0x158d NEW_2
	
Label_5519:
	return 0; // 0x158f Return
	
Label_5520:
	var_821_bool = 0; var_822_int = 0; // 0x1590 PushV
	var_822_int = 6; // 0x1591 MovI
	func_4697(var_821_bool, var_822_int); // 0x1592 NEW_2
	if(var_821_bool == 0) goto Label_5539; // 0x1594 JumpB
	var_823_int = 1000; // 0x1595 PushI
	var_824_int = 0; var_825_object = Obj(); // 0x1596 PushV
	var_825_object = var_85_object; // 0x1597 Mov
	TaskCall(13); // 0x1598 TaskCall
	func_2202(var_826_object, var_824_int, var_825_object); // 0x1599 NEW_2
	TaskReturn(); // 0x159a TaskReturn
	var_883_bool = var_823_int == var_826_object; // 0x159c Eq
	if(var_883_bool == 0) goto Label_5538; // 0x159d JumpB
	var_884_object = Obj(); // 0x159e PushV
	var_884_object = var_85_object; // 0x159f Mov
	func_5378(var_884_object); // 0x15a0 NEW_2
	
Label_5538:
	return 0; // 0x15a2 Return
	
Label_5539:
	var_885_bool = 0; var_886_int = 0; // 0x15a3 PushV
	var_886_int = 7; // 0x15a4 MovI
	func_4697(var_885_bool, var_886_int); // 0x15a5 NEW_2
	if(var_885_bool == 0) goto Label_5558; // 0x15a7 JumpB
	var_887_int = 1000; // 0x15a8 PushI
	var_888_int = 0; var_889_object = Obj(); // 0x15a9 PushV
	var_889_object = var_85_object; // 0x15aa Mov
	TaskCall(15); // 0x15ab TaskCall
	func_2423(var_890_object, var_888_int, var_889_object); // 0x15ac NEW_2
	TaskReturn(); // 0x15ad TaskReturn
	var_944_bool = var_887_int == var_890_object; // 0x15af Eq
	if(var_944_bool == 0) goto Label_5557; // 0x15b0 JumpB
	var_945_object = Obj(); // 0x15b1 PushV
	var_945_object = var_85_object; // 0x15b2 Mov
	func_5378(var_945_object); // 0x15b3 NEW_2
	
Label_5557:
	return 0; // 0x15b5 Return
	
Label_5558:
	var_946_bool = 0; var_947_int = 0; // 0x15b6 PushV
	var_947_int = 8; // 0x15b7 MovI
	func_4697(var_946_bool, var_947_int); // 0x15b8 NEW_2
	if(var_946_bool == 0) goto Label_5577; // 0x15ba JumpB
	var_948_int = 1000; // 0x15bb PushI
	var_949_int = 0; var_950_object = Obj(); // 0x15bc PushV
	var_950_object = var_85_object; // 0x15bd Mov
	TaskCall(17); // 0x15be TaskCall
	func_2634(var_951_object, var_949_int, var_950_object); // 0x15bf NEW_2
	TaskReturn(); // 0x15c0 TaskReturn
	var_1008_bool = var_948_int == var_951_object; // 0x15c2 Eq
	if(var_1008_bool == 0) goto Label_5576; // 0x15c3 JumpB
	var_1009_object = Obj(); // 0x15c4 PushV
	var_1009_object = var_85_object; // 0x15c5 Mov
	func_5378(var_1009_object); // 0x15c6 NEW_2
	
Label_5576:
	return 0; // 0x15c8 Return
	
Label_5577:
	var_1010_bool = 0; var_1011_int = 0; // 0x15c9 PushV
	var_1011_int = 9; // 0x15ca MovI
	func_4697(var_1010_bool, var_1011_int); // 0x15cb NEW_2
	if(var_1010_bool == 0) goto Label_5596; // 0x15cd JumpB
	var_1012_int = 1000; // 0x15ce PushI
	var_1013_int = 0; var_1014_object = Obj(); // 0x15cf PushV
	var_1014_object = var_85_object; // 0x15d0 Mov
	TaskCall(19); // 0x15d1 TaskCall
	func_2855(var_1015_object, var_1013_int, var_1014_object); // 0x15d2 NEW_2
	TaskReturn(); // 0x15d3 TaskReturn
	var_1072_bool = var_1012_int == var_1015_object; // 0x15d5 Eq
	if(var_1072_bool == 0) goto Label_5595; // 0x15d6 JumpB
	var_1073_object = Obj(); // 0x15d7 PushV
	var_1073_object = var_85_object; // 0x15d8 Mov
	func_5378(var_1073_object); // 0x15d9 NEW_2
	
Label_5595:
	return 0; // 0x15db Return
	
Label_5596:
	var_1074_bool = 0; var_1075_int = 0; // 0x15dc PushV
	var_1075_int = 10; // 0x15dd MovI
	func_4697(var_1074_bool, var_1075_int); // 0x15de NEW_2
	if(var_1074_bool == 0) goto Label_5615; // 0x15e0 JumpB
	var_1076_int = 1000; // 0x15e1 PushI
	var_1077_int = 0; var_1078_object = Obj(); // 0x15e2 PushV
	var_1078_object = var_85_object; // 0x15e3 Mov
	TaskCall(21); // 0x15e4 TaskCall
	func_3076(var_1079_object, var_1077_int, var_1078_object); // 0x15e5 NEW_2
	TaskReturn(); // 0x15e6 TaskReturn
	var_1133_bool = var_1076_int == var_1079_object; // 0x15e8 Eq
	if(var_1133_bool == 0) goto Label_5614; // 0x15e9 JumpB
	var_1134_object = Obj(); // 0x15ea PushV
	var_1134_object = var_85_object; // 0x15eb Mov
	func_5378(var_1134_object); // 0x15ec NEW_2
	
Label_5614:
	return 0; // 0x15ee Return
	
Label_5615:
	var_1135_bool = 0; var_1136_int = 0; // 0x15ef PushV
	var_1136_int = 11; // 0x15f0 MovI
	func_4697(var_1135_bool, var_1136_int); // 0x15f1 NEW_2
	if(var_1135_bool == 0) goto Label_5634; // 0x15f3 JumpB
	var_1137_int = 1000; // 0x15f4 PushI
	var_1138_int = 0; var_1139_object = Obj(); // 0x15f5 PushV
	var_1139_object = var_85_object; // 0x15f6 Mov
	TaskCall(23); // 0x15f7 TaskCall
	func_3287(var_1140_object, var_1138_int, var_1139_object); // 0x15f8 NEW_2
	TaskReturn(); // 0x15f9 TaskReturn
	var_1210_bool = var_1137_int == var_1140_object; // 0x15fb Eq
	if(var_1210_bool == 0) goto Label_5633; // 0x15fc JumpB
	var_1211_object = Obj(); // 0x15fd PushV
	var_1211_object = var_85_object; // 0x15fe Mov
	func_5378(var_1211_object); // 0x15ff NEW_2
	
Label_5633:
	return 0; // 0x1601 Return
	
Label_5634:
	var_1212_bool = 0; var_1213_int = 0; // 0x1602 PushV
	var_1213_int = 12; // 0x1603 MovI
	func_4697(var_1212_bool, var_1213_int); // 0x1604 NEW_2
	if(var_1212_bool == 0) goto Label_5646; // 0x1606 JumpB
	var_1214_int = 0; var_1215_object = Obj(); // 0x1607 PushV
	var_1215_object = var_85_object; // 0x1608 Mov
	TaskCall(25); // 0x1609 TaskCall
	func_3683(var_1216_object, var_1214_int, var_1215_object); // 0x160a NEW_2
	TaskReturn(); // 0x160b TaskReturn
	return 0; // 0x160d Return
	
Label_5646:
	return 0; // 0x160e Return
}


func_22(var_0_bool, var_215_int, var_216_object)
{
	var_218_object = Obj(); var_219_bool = 0; var_220_int = 0; var_221_bool = 0; var_222_object = Obj(); var_223_bool = 0; var_224_int = 0; var_225_bool = 0; // 0x16 PushV
	var_0_bool = var_216_object; // 0x17 TMov
	var_226_bool = 0; var_227_object = Obj(); var_228_float = 0; // 0x18 PushV
	var_227_object = var_216_object; // 0x19 Mov
	var_228_float = 70.0; // 0x1a MovF
	func_4282(var_227_object, var_228_float); // 0x1b NEW_2
	var_272_bool = var_226_bool == 0; // 0x1d Not
	if(var_272_bool == 0) goto Label_33; // 0x1e JumpB
	var_215_int = -2; // 0x1f MovI
	return 8; // 0x20 Return
	
Label_33:
	CreateDialog(var_222_object); // 0x21 Func
	var_273_int = 0; // 0x23 PushV
	func_4729(var_273_int); // 0x24 NEW_2
	SetNPCName(var_273_int); // 0x26 ObjFunc
	var_274_int = 0; // 0x28 PushV
	func_4727(var_274_int); // 0x29 NEW_2
	SetNPCDescription(var_274_int); // 0x2b ObjFunc
	var_275_string = ""; // 0x2d PushV
	func_4731(var_275_string); // 0x2e NEW_2
	SetPhoto(var_275_string); // 0x30 ObjFunc
	var_276_string = ""; // 0x32 PushV
	func_4733(var_276_string); // 0x33 NEW_2
	SetPhoto2(var_276_string); // 0x35 ObjFunc
	var_277_int = 0; // 0x37 PushV
	func_5355(var_277_int); // 0x38 NEW_2
	SetPlayerName(var_277_int); // 0x3a ObjFunc
	var_224_int = -1; // 0x3c MovI
	IsOverrideActive(var_223_bool); // 0x3d Func
	var_285_bool = var_223_bool; // 0x3f Push
	if(var_285_bool == 0) goto Label_67; // 0x40 JumpB
	var_215_int = -2; // 0x41 MovI
	return 8; // 0x42 Return
	
Label_67:
	DoDialog(var_222_object); // 0x43 Func
	var_286_bool = 0; var_287_object = Obj(); // 0x45 PushV
	var_288_object = Obj(); // 0x46 PushV
	func_4645(var_288_object); // 0x47 NEW_2
	var_287_object = var_288_object; // 0x48 Mov
	func_4367(var_286_bool, var_287_object); // 0x4a NEW_2
	var_376_object = Obj(); var_377_object = Obj(); // 0x4c PushV
	var_376_object = var_216_object; // 0x4d Mov
	var_377_object = var_222_object; // 0x4e Mov
	TaskCall(2); // 0x4f TaskCall
	func_103(var_378_object, var_379_object, var_380_string, var_381_bool, var_376_object, var_377_object); // 0x50 NEW_2
	TaskReturn(); // 0x51 TaskReturn
	IsDialogEnd(var_225_bool); // 0x53 ObjFunc
	
Label_85:
	var_425_bool = var_225_bool == 0; // 0x55 Not
	if(var_425_bool == 0) goto Label_92; // 0x56 JumpB
	sync(); // 0x57 Func
	IsDialogEnd(var_225_bool); // 0x59 ObjFunc
	goto Label_85; // 0x5b Jump
	
Label_92:
	var_426_object = Obj(); // 0x5c PushV
	var_426_object = var_216_object; // 0x5d Mov
	func_4350(); // 0x5e NEW_2
	StopDialog(var_222_object); // 0x60 Func
	GetReturnValue(var_224_int); // 0x62 ObjFunc
	var_215_int = var_224_int; // 0x64 Mov
	return 8; // 0x65 Return
}


func_5148(var_118_object, var_119_string, var_120_float)
{
	var_122_cvector = CVector(0,0,0); var_123_cvector = CVector(0,0,0); var_124_object = Obj(); var_125_bool = 0; var_126_cvector = CVector(0,0,0); var_127_cvector = CVector(0,0,0); var_128_object = Obj(); var_129_bool = 0; // 0x141c PushV
	GetMainOutdoorScene(var_128_object); // 0x141d Func
	var_130_bool = var_128_object == 0; // 0x141f NullEq
	if(var_130_bool == 0) goto Label_5157; // 0x1420 JumpB
	var_131_string = "Can't find main outdoor scene"; // 0x1421 PushS
	Trace(var_131_string); // 0x1422 Func
	return 8; // 0x1424 Return
	
Label_5157:
	GetLocator(var_119_string, var_129_bool, var_126_cvector, var_127_cvector); // 0x1425 ObjFunc
	var_132_bool = var_129_bool == 0; // 0x1427 Not
	if(var_132_bool == 0) goto Label_5167; // 0x1428 JumpB
	var_133_string = "Warning: outdoor scene locator "; // 0x1429 PushS
	var_134_int = var_133_string + var_119_string; // 0x142a Add
	var_135_string = " doesnt exist"; // 0x142b PushS
	var_136_int = var_134_int + var_135_string; // 0x142c Add
	Trace(var_136_int); // 0x142d Func
	
Label_5167:
	GetMap(var_118_object); // 0x142f ObjFunc
	var_137_bool = var_118_object == 0; // 0x1431 NullEq
	if(var_137_bool == 0) goto Label_5175; // 0x1432 JumpB
	var_138_string = "Can't find map"; // 0x1433 PushS
	Trace(var_138_string); // 0x1434 Func
	return 8; // 0x1436 Return
	
Label_5175:
	var_139_float = GetByIndex(var_126_cvector, 0); // 0x1437 PushE
	var_140_float = GetByIndex(var_126_cvector, 2); // 0x1438 PushE
	SetMapParams(var_139_float, var_140_float, var_120_float); // 0x1439 ObjFunc
	return 8; // 0x143b Return
}


func_4895()
{
	var_165_int = 1000; // 0x1320 PushI
	SetReturnValue(var_165_int); // 0x1321 ObjFunc
	return 0; // 0x1323 Return
}


func_4900(var_707_bool)
{
	var_709_int = 0; var_710_string = ""; // 0x1325 PushV
	var_710_string = "k4q01"; // 0x1326 MovS
	func_4666(var_709_int, var_710_string); // 0x1327 NEW_2
	var_713_int = 1; // 0x1329 PushI
	var_714_bool = var_709_int == var_713_int; // 0x132a Eq
	if(var_714_bool == 0) goto Label_4910; // 0x132b JumpB
	var_707_bool = 1; // 0x132c MovB
	return 0; // 0x132d Return
	
Label_4910:
	var_707_bool = 0; // 0x132e MovB
	return 0; // 0x132f Return
}


func_4645(var_288_object)
{
	var_289_object = Obj(); var_290_object = Obj(); // 0x1225 PushV
	self(var_290_object); // 0x1226 Func
	var_288_object = var_290_object; // 0x1228 Mov
	return 2; // 0x1229 Return
}


func_1318(var_0_bool, var_438_int, var_439_object)
{
	var_441_object = Obj(); var_442_bool = 0; var_443_int = 0; var_444_bool = 0; var_445_object = Obj(); var_446_bool = 0; var_447_int = 0; var_448_bool = 0; // 0x526 PushV
	var_0_bool = var_439_object; // 0x527 TMov
	var_449_bool = 0; var_450_object = Obj(); var_451_float = 0; // 0x528 PushV
	var_450_object = var_439_object; // 0x529 Mov
	var_451_float = 70.0; // 0x52a MovF
	func_4282(var_450_object, var_451_float); // 0x52b NEW_2
	var_452_bool = var_449_bool == 0; // 0x52d Not
	if(var_452_bool == 0) goto Label_1329; // 0x52e JumpB
	var_438_int = -2; // 0x52f MovI
	return 8; // 0x530 Return
	
Label_1329:
	CreateDialog(var_445_object); // 0x531 Func
	var_453_int = 0; // 0x533 PushV
	func_4729(var_453_int); // 0x534 NEW_2
	SetNPCName(var_453_int); // 0x536 ObjFunc
	var_454_int = 0; // 0x538 PushV
	func_4727(var_454_int); // 0x539 NEW_2
	SetNPCDescription(var_454_int); // 0x53b ObjFunc
	var_455_string = ""; // 0x53d PushV
	func_4731(var_455_string); // 0x53e NEW_2
	SetPhoto(var_455_string); // 0x540 ObjFunc
	var_456_string = ""; // 0x542 PushV
	func_4733(var_456_string); // 0x543 NEW_2
	SetPhoto2(var_456_string); // 0x545 ObjFunc
	var_457_int = 0; // 0x547 PushV
	func_5355(var_457_int); // 0x548 NEW_2
	SetPlayerName(var_457_int); // 0x54a ObjFunc
	var_447_int = -1; // 0x54c MovI
	IsOverrideActive(var_446_bool); // 0x54d Func
	var_458_bool = var_446_bool; // 0x54f Push
	if(var_458_bool == 0) goto Label_1363; // 0x550 JumpB
	var_438_int = -2; // 0x551 MovI
	return 8; // 0x552 Return
	
Label_1363:
	DoDialog(var_445_object); // 0x553 Func
	var_459_bool = 0; var_460_object = Obj(); // 0x555 PushV
	var_461_object = Obj(); // 0x556 PushV
	func_4645(var_461_object); // 0x557 NEW_2
	var_460_object = var_461_object; // 0x558 Mov
	func_4367(var_459_bool, var_460_object); // 0x55a NEW_2
	var_462_object = Obj(); var_463_object = Obj(); // 0x55c PushV
	var_462_object = var_439_object; // 0x55d Mov
	var_463_object = var_445_object; // 0x55e Mov
	TaskCall(6); // 0x55f TaskCall
	func_1399(var_464_object, var_465_object, var_466_string, var_467_bool, var_462_object, var_463_object); // 0x560 NEW_2
	TaskReturn(); // 0x561 TaskReturn
	IsDialogEnd(var_448_bool); // 0x563 ObjFunc
	
Label_1381:
	var_495_bool = var_448_bool == 0; // 0x565 Not
	if(var_495_bool == 0) goto Label_1388; // 0x566 JumpB
	sync(); // 0x567 Func
	IsDialogEnd(var_448_bool); // 0x569 ObjFunc
	goto Label_1381; // 0x56b Jump
	
Label_1388:
	var_496_object = Obj(); // 0x56c PushV
	var_496_object = var_439_object; // 0x56d Mov
	func_4350(); // 0x56e NEW_2
	StopDialog(var_445_object); // 0x570 Func
	GetReturnValue(var_447_int); // 0x572 ObjFunc
	var_438_int = var_447_int; // 0x574 Mov
	return 8; // 0x575 Return
}


func_2855(var_0_bool, var_1013_int, var_1014_object)
{
	var_1016_object = Obj(); var_1017_bool = 0; var_1018_int = 0; var_1019_bool = 0; var_1020_object = Obj(); var_1021_bool = 0; var_1022_int = 0; var_1023_bool = 0; // 0xb27 PushV
	var_0_bool = var_1014_object; // 0xb28 TMov
	var_1024_bool = 0; var_1025_object = Obj(); var_1026_float = 0; // 0xb29 PushV
	var_1025_object = var_1014_object; // 0xb2a Mov
	var_1026_float = 70.0; // 0xb2b MovF
	func_4282(var_1025_object, var_1026_float); // 0xb2c NEW_2
	var_1027_bool = var_1024_bool == 0; // 0xb2e Not
	if(var_1027_bool == 0) goto Label_2866; // 0xb2f JumpB
	var_1013_int = -2; // 0xb30 MovI
	return 8; // 0xb31 Return
	
Label_2866:
	CreateDialog(var_1020_object); // 0xb32 Func
	var_1028_int = 0; // 0xb34 PushV
	func_4729(var_1028_int); // 0xb35 NEW_2
	SetNPCName(var_1028_int); // 0xb37 ObjFunc
	var_1029_int = 0; // 0xb39 PushV
	func_4727(var_1029_int); // 0xb3a NEW_2
	SetNPCDescription(var_1029_int); // 0xb3c ObjFunc
	var_1030_string = ""; // 0xb3e PushV
	func_4731(var_1030_string); // 0xb3f NEW_2
	SetPhoto(var_1030_string); // 0xb41 ObjFunc
	var_1031_string = ""; // 0xb43 PushV
	func_4733(var_1031_string); // 0xb44 NEW_2
	SetPhoto2(var_1031_string); // 0xb46 ObjFunc
	var_1032_int = 0; // 0xb48 PushV
	func_5355(var_1032_int); // 0xb49 NEW_2
	SetPlayerName(var_1032_int); // 0xb4b ObjFunc
	var_1022_int = -1; // 0xb4d MovI
	IsOverrideActive(var_1021_bool); // 0xb4e Func
	var_1033_bool = var_1021_bool; // 0xb50 Push
	if(var_1033_bool == 0) goto Label_2900; // 0xb51 JumpB
	var_1013_int = -2; // 0xb52 MovI
	return 8; // 0xb53 Return
	
Label_2900:
	DoDialog(var_1020_object); // 0xb54 Func
	var_1034_bool = 0; var_1035_object = Obj(); // 0xb56 PushV
	var_1036_object = Obj(); // 0xb57 PushV
	func_4645(var_1036_object); // 0xb58 NEW_2
	var_1035_object = var_1036_object; // 0xb59 Mov
	func_4367(var_1034_bool, var_1035_object); // 0xb5b NEW_2
	var_1037_object = Obj(); var_1038_object = Obj(); // 0xb5d PushV
	var_1037_object = var_1014_object; // 0xb5e Mov
	var_1038_object = var_1020_object; // 0xb5f Mov
	TaskCall(20); // 0xb60 TaskCall
	func_2936(var_1039_object, var_1040_object, var_1041_string, var_1042_bool, var_1037_object, var_1038_object); // 0xb61 NEW_2
	TaskReturn(); // 0xb62 TaskReturn
	IsDialogEnd(var_1023_bool); // 0xb64 ObjFunc
	
Label_2918:
	var_1070_bool = var_1023_bool == 0; // 0xb66 Not
	if(var_1070_bool == 0) goto Label_2925; // 0xb67 JumpB
	sync(); // 0xb68 Func
	IsDialogEnd(var_1023_bool); // 0xb6a ObjFunc
	goto Label_2918; // 0xb6c Jump
	
Label_2925:
	var_1071_object = Obj(); // 0xb6d PushV
	var_1071_object = var_1014_object; // 0xb6e Mov
	func_4350(); // 0xb6f NEW_2
	StopDialog(var_1020_object); // 0xb71 Func
	GetReturnValue(var_1022_int); // 0xb73 ObjFunc
	var_1013_int = var_1022_int; // 0xb75 Mov
	return 8; // 0xb76 Return
}


func_3368(var_0_bool, var_1_object, var_2_object, var_3_object, var_1162_object, var_1163_object)
{
	var_0_bool = var_1163_object; // 0xd29 TMov
	var_1_object = var_1162_object; // 0xd2a TMov
	var_3_object = 0; // 0xd2b TMovB
	var_1168_int = 1; // 0xd2c PushI
	if(var_1168_int == 0) goto Label_3415; // 0xd2d JumpB
	var_1169_string = ""; // 0xd2e PushV
	var_1169_string = "Sly"; // 0xd2f MovS
	func_3445(var_1163_object, var_1169_string); // 0xd30 NEW_2
	var_1177_int = 526693; // 0xd32 PushI
	SetMessage(var_1177_int); // 0xd33 TObjFunc
	ClearReplies(); // 0xd35 TObjFunc
	var_1178_bool = 0; // 0xd37 PushV
	var_1178_bool = 0; // 0xd38 MovB
	var_1179_bool = 0; var_1180_object = Obj(); // 0xd39 PushV
	var_1180_object = var_1_object; // 0xd3a MovT
	func_4936(var_1180_object); // 0xd3b NEW_2
	if(var_1179_bool == 0) goto Label_3396; // 0xd3d JumpB
	var_1185_bool = 0; var_1186_object = Obj(); // 0xd3e PushV
	var_1186_object = var_1_object; // 0xd3f MovT
	func_4948(var_1186_object); // 0xd40 NEW_2
	if(var_1185_bool == 0) goto Label_3396; // 0xd42 JumpB
	var_1178_bool = 1; // 0xd43 MovB
	
Label_3396:
	if(var_1178_bool == 0) goto Label_3402; // 0xd44 JumpB
	var_1191_int = 527323; // 0xd45 PushI
	var_1192_int = 28641; // 0xd46 PushI
	var_1193_int = 28640; // 0xd47 PushI
	AddReply(var_1191_int, var_1192_int, var_1193_int); // 0xd48 TObjFunc
	
Label_3402:
	var_1194_int = 526694; // 0xd4a PushI
	var_1195_int = -1; // 0xd4b PushI
	var_1196_int = 27970; // 0xd4c PushI
	AddReply(var_1194_int, var_1195_int, var_1196_int); // 0xd4d TObjFunc
	var_1197_int = 526695; // 0xd4f PushI
	var_1198_int = -1; // 0xd50 PushI
	var_1199_int = 27971; // 0xd51 PushI
	AddReply(var_1197_int, var_1198_int, var_1199_int); // 0xd52 TObjFunc
	goto Label_3415; // 0xd54 Jump
	
Label_3415:
	var_1200_bool = 0; // 0xd57 PushV
	func_4735(var_1200_bool); // 0xd58 NEW_2
	if(var_1200_bool == 0) goto Label_3430; // 0xd5a JumpB
	
Label_3419:
	lshWaitForAnimEnd(); // 0xd5b Func
	var_1201_object = var_3_object; // 0xd5d PushT
	if(var_1201_object == 0) goto Label_3424; // 0xd5e JumpB
	goto Label_3429; // 0xd5f Jump
	
Label_3429:
	goto Label_3444; // 0xd65 Jump
	
Label_3444:
	return 0; // 0xd74 Return
	
Label_3424:
	var_1202_string = ""; // 0xd60 PushV
	var_1202_string = var_2_object; // 0xd61 MovT
	func_4564(var_1202_string); // 0xd62 NEW_2
	goto Label_3419; // 0xd64 Jump
	
Label_3430:
	var_1203_string = "all"; // 0xd66 PushS
	var_1204_string = "idle"; // 0xd67 PushS
	PlayAnimation(var_1203_string, var_1204_string); // 0xd68 Func
	
Label_3434:
	WaitForAnimEnd(); // 0xd6a Func
	var_1205_object = var_3_object; // 0xd6c PushT
	if(var_1205_object == 0) goto Label_3439; // 0xd6d JumpB
	goto Label_3444; // 0xd6e Jump
	
Label_3439:
	var_1206_string = "all"; // 0xd6f PushS
	var_1207_string = "idle"; // 0xd70 PushS
	PlayAnimation(var_1206_string, var_1207_string); // 0xd71 Func
	goto Label_3434; // 0xd73 Jump
}


func_2346(var_2_object, var_855_string)
{
	var_856_bool = 0; // 0x92b PushV
	func_4735(var_856_bool); // 0x92c NEW_2
	var_857_bool = var_856_bool == 0; // 0x92e Not
	if(var_857_bool == 0) goto Label_2353; // 0x92f JumpB
	return 0; // 0x930 Return
	
Label_2353:
	var_858_bool = var_855_string == var_2_object; // 0x931 Eq
	if(var_858_bool == 0) goto Label_2356; // 0x932 JumpB
	return 0; // 0x933 Return
	
Label_2356:
	var_859_string = ""; var_860_bool = 0; // 0x934 PushV
	var_859_string = var_855_string; // 0x935 Mov
	var_861_string = ""; // 0x936 PushS
	var_862_bool = var_855_string == var_861_string; // 0x937 Eq
	if(var_862_bool == 0) goto Label_2363; // 0x938 JumpB
	var_860_bool = 0; // 0x939 MovB
	goto Label_2364; // 0x93a Jump
	
Label_2364:
	func_4580(var_859_string, var_860_bool); // 0x93c NEW_2
	var_2_object = var_855_string; // 0x93e TMov
	return 0; // 0x93f Return
	
Label_2363:
	var_860_bool = 1; // 0x93b MovB
}


func_4651(var_253_cvector, var_254_cvector)
{
	var_256_float = 0; var_257_float = 0; // 0x122b PushV
	var_258_int = var_254_cvector | var_254_cvector; // 0x122c Or
	var_257_float = sqrt(var_258_int); // 0x122d Sqrt2
	var_259_float = 0.0; // 0x122e PushF
	var_260_bool = var_257_float < var_259_float; // 0x122f LT
	if(var_260_bool == 0) goto Label_4659; // 0x1230 JumpB
	var_253_cvector = CVector(0.0, 0.0, 0.0); // 0x1231 MovV
	return 2; // 0x1232 Return
	
Label_4659:
	var_253_cvector = var_254_cvector / var_254_cvector; // 0x1233 Div2
	return 2; // 0x1234 Return
}


func_4912(var_718_bool)
{
	var_720_int = 0; var_721_string = ""; // 0x1331 PushV
	var_721_string = "k4q01"; // 0x1332 MovS
	func_4666(var_720_int, var_721_string); // 0x1333 NEW_2
	var_722_int = 3; // 0x1335 PushI
	var_723_bool = var_720_int == var_722_int; // 0x1336 Eq
	if(var_723_bool == 0) goto Label_4922; // 0x1337 JumpB
	var_718_bool = 1; // 0x1338 MovB
	return 0; // 0x1339 Return
	
Label_4922:
	var_718_bool = 0; // 0x133a MovB
	return 0; // 0x133b Return
}


func_1841(var_0_bool, var_1_object, var_2_object, var_3_object, var_627_object, var_628_object)
{
	var_0_bool = var_628_object; // 0x732 TMov
	var_1_object = var_627_object; // 0x733 TMov
	var_3_object = 0; // 0x734 TMovB
	var_633_int = 1; // 0x735 PushI
	if(var_633_int == 0) goto Label_1874; // 0x736 JumpB
	var_634_string = ""; // 0x737 PushV
	var_634_string = "Neutral"; // 0x738 MovS
	func_1904(var_628_object, var_634_string); // 0x739 NEW_2
	var_642_int = 526664; // 0x73b PushI
	SetMessage(var_642_int); // 0x73c TObjFunc
	ClearReplies(); // 0x73e TObjFunc
	var_643_int = 526665; // 0x740 PushI
	var_644_int = -1; // 0x741 PushI
	var_645_int = 27941; // 0x742 PushI
	AddReply(var_643_int, var_644_int, var_645_int); // 0x743 TObjFunc
	var_646_int = 526666; // 0x745 PushI
	var_647_int = -1; // 0x746 PushI
	var_648_int = 27942; // 0x747 PushI
	AddReply(var_646_int, var_647_int, var_648_int); // 0x748 TObjFunc
	var_649_int = 528772; // 0x74a PushI
	var_650_int = -1; // 0x74b PushI
	var_651_int = 30183; // 0x74c PushI
	AddReply(var_649_int, var_650_int, var_651_int); // 0x74d TObjFunc
	goto Label_1874; // 0x74f Jump
	
Label_1874:
	var_652_bool = 0; // 0x752 PushV
	func_4735(var_652_bool); // 0x753 NEW_2
	if(var_652_bool == 0) goto Label_1889; // 0x755 JumpB
	
Label_1878:
	lshWaitForAnimEnd(); // 0x756 Func
	var_653_object = var_3_object; // 0x758 PushT
	if(var_653_object == 0) goto Label_1883; // 0x759 JumpB
	goto Label_1888; // 0x75a Jump
	
Label_1888:
	goto Label_1903; // 0x760 Jump
	
Label_1903:
	return 0; // 0x76f Return
	
Label_1883:
	var_654_string = ""; // 0x75b PushV
	var_654_string = var_2_object; // 0x75c MovT
	func_4564(var_654_string); // 0x75d NEW_2
	goto Label_1878; // 0x75f Jump
	
Label_1889:
	var_655_string = "all"; // 0x761 PushS
	var_656_string = "idle"; // 0x762 PushS
	PlayAnimation(var_655_string, var_656_string); // 0x763 Func
	
Label_1893:
	WaitForAnimEnd(); // 0x765 Func
	var_657_object = var_3_object; // 0x767 PushT
	if(var_657_object == 0) goto Label_1898; // 0x768 JumpB
	goto Label_1903; // 0x769 Jump
	
Label_1898:
	var_658_string = "all"; // 0x76a PushS
	var_659_string = "idle"; // 0x76b PushS
	PlayAnimation(var_658_string, var_659_string); // 0x76c Func
	goto Label_1893; // 0x76e Jump
}


func_4661(var_133_bool, var_134_int, var_135_int)
{
	var_136_int = 0; var_137_int = 0; // 0x1235 PushV
	irand(var_137_int, var_135_int); // 0x1236 Func
	var_133_bool = var_137_int < var_134_int; // 0x1238 LT2
	return 2; // 0x1239 Return
}


func_4666(var_709_int, var_710_string)
{
	var_711_int = 0; var_712_int = 0; // 0x123a PushV
	GetVariable(var_710_string, var_712_int); // 0x123b Func
	var_709_int = var_712_int; // 0x123d Mov
	return 2; // 0x123e Return
}


func_4924(var_727_bool)
{
	var_729_int = 0; var_730_string = ""; // 0x133d PushV
	var_730_string = "k4q01"; // 0x133e MovS
	func_4666(var_729_int, var_730_string); // 0x133f NEW_2
	var_731_int = 5; // 0x1341 PushI
	var_732_bool = var_729_int == var_731_int; // 0x1342 Eq
	if(var_732_bool == 0) goto Label_4934; // 0x1343 JumpB
	var_727_bool = 1; // 0x1344 MovB
	return 0; // 0x1345 Return
	
Label_4934:
	var_727_bool = 0; // 0x1346 MovB
	return 0; // 0x1347 Return
}


func_5181()
{
	var_94_bool = 0; var_95_int = 0; var_96_int = 0; var_97_int = 0; var_98_bool = 0; var_99_int = 0; var_100_int = 0; var_101_int = 0; // 0x143d PushV
	var_102_int = 0; // 0x143e PushI
	ClearSubContainer(var_102_int); // 0x143f Func
	var_103_int = 0; // 0x1441 PushV
	func_4688(var_103_int); // 0x1442 NEW_2
	var_100_int = var_103_int; // 0x1443 Mov
	var_104_int = 0; var_105_string = ""; // 0x1445 PushV
	var_105_string = "Rifle"; // 0x1446 MovS
	func_5350(var_104_int, var_105_string); // 0x1447 NEW_2
	var_108_int = 0; // 0x1449 PushI
	var_109_int = 1; // 0x144a PushI
	AddItem(var_98_bool, var_104_int, var_108_int, var_109_int); // 0x144b Func
	var_110_int = 0; var_111_string = ""; // 0x144d PushV
	var_111_string = "Revolver"; // 0x144e MovS
	func_5350(var_110_int, var_111_string); // 0x144f NEW_2
	var_112_int = 0; // 0x1451 PushI
	var_113_int = 1; // 0x1452 PushI
	AddItem(var_98_bool, var_110_int, var_112_int, var_113_int); // 0x1453 Func
	var_114_int = 0; var_115_string = ""; // 0x1455 PushV
	var_115_string = "Knife"; // 0x1456 MovS
	func_5350(var_114_int, var_115_string); // 0x1457 NEW_2
	var_116_int = 0; // 0x1459 PushI
	var_117_int = 1; // 0x145a PushI
	AddItem(var_98_bool, var_114_int, var_116_int, var_117_int); // 0x145b Func
	var_118_int = 10; // 0x145d PushI
	var_119_bool = var_100_int != var_118_int; // 0x145e Neq
	if(var_119_bool == 0) goto Label_5225; // 0x145f JumpB
	var_120_int = 0; var_121_string = ""; // 0x1460 PushV
	var_121_string = "tvirin"; // 0x1461 MovS
	func_5350(var_120_int, var_121_string); // 0x1462 NEW_2
	var_122_int = 0; // 0x1464 PushI
	var_123_int = 1; // 0x1465 PushI
	AddItem(var_98_bool, var_120_int, var_122_int, var_123_int); // 0x1466 Func
	goto Label_5233; // 0x1468 Jump
	
Label_5233:
	var_124_int = 0; var_125_string = ""; // 0x1471 PushV
	var_125_string = "lockpick"; // 0x1472 MovS
	func_5350(var_124_int, var_125_string); // 0x1473 NEW_2
	var_126_int = 0; // 0x1475 PushI
	var_127_int = 3; // 0x1476 PushI
	AddItem(var_98_bool, var_124_int, var_126_int, var_127_int); // 0x1477 Func
	var_128_string = ""; var_129_int = 0; var_130_int = 0; // 0x1479 PushV
	var_128_string = "Scalpel"; // 0x147a MovS
	var_129_int = 1; // 0x147b MovI
	var_130_int = 2; // 0x147c MovI
	func_4617(var_128_string, var_129_int, var_130_int); // 0x147d NEW_2
	var_139_string = ""; var_140_int = 0; var_141_int = 0; var_142_int = 0; var_143_int = 0; // 0x147f PushV
	var_139_string = "revolver_ammo"; // 0x1480 MovS
	var_140_int = 1; // 0x1481 MovI
	var_141_int = 1; // 0x1482 MovI
	var_142_int = 5; // 0x1483 MovI
	var_143_int = 10; // 0x1484 MovI
	func_4628(var_139_string, var_140_int, var_141_int, var_142_int, var_143_int); // 0x1485 NEW_2
	var_156_string = ""; var_157_int = 0; var_158_int = 0; var_159_int = 0; var_160_int = 0; // 0x1487 PushV
	var_156_string = "rifle_ammo"; // 0x1488 MovS
	var_157_int = 1; // 0x1489 MovI
	var_158_int = 1; // 0x148a MovI
	var_159_int = 5; // 0x148b MovI
	var_160_int = 20; // 0x148c MovI
	func_4628(var_156_string, var_157_int, var_158_int, var_159_int, var_160_int); // 0x148d NEW_2
	var_161_int = 100; // 0x148f PushI
	irand(var_99_int, var_161_int); // 0x1490 Func
	var_162_int = 0; // 0x1492 PushI
	var_163_bool = var_99_int != var_162_int; // 0x1493 Neq
	if(var_163_bool == 0) goto Label_5276; // 0x1494 JumpB
	var_164_int = 0; var_165_string = ""; // 0x1495 PushV
	var_165_string = "kerosene"; // 0x1496 MovS
	func_5350(var_164_int, var_165_string); // 0x1497 NEW_2
	var_166_int = 0; // 0x1499 PushI
	AddItem(var_98_bool, var_164_int, var_166_int, var_99_int); // 0x149a Func
	
Label_5276:
	var_167_int = 3; // 0x149c PushI
	var_168_bool = var_100_int >= var_167_int; // 0x149d GE
	if(var_168_bool == 0) goto Label_5295; // 0x149e JumpB
	var_169_int = 0; var_170_string = ""; // 0x149f PushV
	var_170_string = "halfboot_repel"; // 0x14a0 MovS
	func_5350(var_169_int, var_170_string); // 0x14a1 NEW_2
	var_171_int = 0; // 0x14a3 PushI
	var_172_int = 1; // 0x14a4 PushI
	AddItem(var_98_bool, var_169_int, var_171_int, var_172_int); // 0x14a5 Func
	var_173_int = 0; var_174_string = ""; // 0x14a7 PushV
	var_174_string = "boot_repel"; // 0x14a8 MovS
	func_5350(var_173_int, var_174_string); // 0x14a9 NEW_2
	var_175_int = 0; // 0x14ab PushI
	var_176_int = 1; // 0x14ac PushI
	AddItem(var_98_bool, var_173_int, var_175_int, var_176_int); // 0x14ad Func
	
Label_5295:
	var_177_int = 9; // 0x14af PushI
	var_178_bool = var_100_int >= var_177_int; // 0x14b0 GE
	if(var_178_bool == 0) goto Label_5322; // 0x14b1 JumpB
	var_179_int = 0; var_180_string = ""; // 0x14b2 PushV
	var_180_string = "boot_army"; // 0x14b3 MovS
	func_5350(var_179_int, var_180_string); // 0x14b4 NEW_2
	var_181_int = 0; // 0x14b6 PushI
	var_182_int = 1; // 0x14b7 PushI
	AddItem(var_98_bool, var_179_int, var_181_int, var_182_int); // 0x14b8 Func
	var_183_int = 0; var_184_string = ""; // 0x14ba PushV
	var_184_string = "balahon"; // 0x14bb MovS
	func_5350(var_183_int, var_184_string); // 0x14bc NEW_2
	var_185_int = 0; // 0x14be PushI
	var_186_int = 1; // 0x14bf PushI
	AddItem(var_98_bool, var_183_int, var_185_int, var_186_int); // 0x14c0 Func
	var_187_int = 0; var_188_string = ""; // 0x14c2 PushV
	var_188_string = "glove_army"; // 0x14c3 MovS
	func_5350(var_187_int, var_188_string); // 0x14c4 NEW_2
	var_189_int = 0; // 0x14c6 PushI
	var_190_int = 1; // 0x14c7 PushI
	AddItem(var_98_bool, var_187_int, var_189_int, var_190_int); // 0x14c8 Func
	
Label_5322:
	var_191_int = 0; // 0x14ca PushV
	func_5372(var_191_int); // 0x14cb NEW_2
	var_101_int = var_191_int; // 0x14cc Mov
	var_195_int = 0; // 0x14ce PushI
	var_196_bool = var_101_int == var_195_int; // 0x14cf Eq
	if(var_196_bool == 0) goto Label_5338; // 0x14d0 JumpB
	var_197_int = 0; var_198_string = ""; // 0x14d1 PushV
	var_198_string = "Gun_danko"; // 0x14d2 MovS
	func_5350(var_197_int, var_198_string); // 0x14d3 NEW_2
	var_199_int = 0; // 0x14d5 PushI
	var_200_int = 1; // 0x14d6 PushI
	AddItem(var_98_bool, var_197_int, var_199_int, var_200_int); // 0x14d7 Func
	goto Label_5349; // 0x14d9 Jump
	
Label_5349:
	return 8; // 0x14e5 Return
	
Label_5338:
	var_201_int = 2; // 0x14da PushI
	var_202_bool = var_101_int == var_201_int; // 0x14db Eq
	if(var_202_bool == 0) goto Label_5349; // 0x14dc JumpB
	var_203_int = 0; var_204_string = ""; // 0x14dd PushV
	var_204_string = "Gun"; // 0x14de MovS
	func_5350(var_203_int, var_204_string); // 0x14df NEW_2
	var_205_int = 0; // 0x14e1 PushI
	var_206_int = 1; // 0x14e2 PushI
	AddItem(var_98_bool, var_203_int, var_205_int, var_206_int); // 0x14e3 Func
	
Label_5225:
	var_207_int = 0; var_208_string = ""; // 0x1469 PushV
	var_208_string = "tvirin"; // 0x146a MovS
	func_5350(var_207_int, var_208_string); // 0x146b NEW_2
	var_209_int = 0; // 0x146d PushI
	var_210_int = 4; // 0x146e PushI
	AddItem(var_98_bool, var_207_int, var_209_int, var_210_int); // 0x146f Func
}


func_4671(var_168_bool, var_169_string, var_170_string)
{
	var_171_object = Obj(); var_172_object = Obj(); // 0x123f PushV
	FindActor(var_172_object, var_169_string); // 0x1240 Func
	var_173_bool = var_172_object == 0; // 0x1242 NullEq
	if(var_173_bool == 0) goto Label_4678; // 0x1243 JumpB
	var_168_bool = 0; // 0x1244 MovB
	return 2; // 0x1245 Return
	
Label_4678:
	Trigger(var_172_object, var_170_string); // 0x1246 Func
	var_168_bool = 1; // 0x1248 MovB
	return 2; // 0x1249 Return
}


func_4936(var_1179_bool)
{
	var_1181_int = 0; var_1182_string = ""; // 0x1349 PushV
	var_1182_string = "k11q01"; // 0x134a MovS
	func_4666(var_1181_int, var_1182_string); // 0x134b NEW_2
	var_1183_int = 9; // 0x134d PushI
	var_1184_bool = var_1181_int == var_1183_int; // 0x134e Eq
	if(var_1184_bool == 0) goto Label_4946; // 0x134f JumpB
	var_1179_bool = 1; // 0x1350 MovB
	return 0; // 0x1351 Return
	
Label_4946:
	var_1179_bool = 0; // 0x1352 MovB
	return 0; // 0x1353 Return
}


func_329(var_0_bool, var_1_object, var_2_object, var_3_object, var_691_object, var_692_object)
{
	var_0_bool = var_692_object; // 0x14a TMov
	var_1_object = var_691_object; // 0x14b TMov
	var_3_object = 0; // 0x14c TMovB
	var_697_int = 1; // 0x14d PushI
	if(var_697_int == 0) goto Label_392; // 0x14e JumpB
	var_698_string = ""; // 0x14f PushV
	var_698_string = "Neutral"; // 0x150 MovS
	func_422(var_692_object, var_698_string); // 0x151 NEW_2
	var_706_int = 525681; // 0x153 PushI
	SetMessage(var_706_int); // 0x154 TObjFunc
	ClearReplies(); // 0x156 TObjFunc
	var_707_bool = 0; var_708_object = Obj(); // 0x158 PushV
	var_708_object = var_1_object; // 0x159 MovT
	func_4900(var_708_object); // 0x15a NEW_2
	if(var_707_bool == 0) goto Label_354; // 0x15c JumpB
	var_715_int = 525682; // 0x15d PushI
	var_716_int = 44708; // 0x15e PushI
	var_717_int = 27005; // 0x15f PushI
	AddReply(var_715_int, var_716_int, var_717_int); // 0x160 TObjFunc
	
Label_354:
	var_718_bool = 0; var_719_object = Obj(); // 0x162 PushV
	var_719_object = var_1_object; // 0x163 MovT
	func_4912(var_719_object); // 0x164 NEW_2
	if(var_718_bool == 0) goto Label_364; // 0x166 JumpB
	var_724_int = 525696; // 0x167 PushI
	var_725_int = 30190; // 0x168 PushI
	var_726_int = 27019; // 0x169 PushI
	AddReply(var_724_int, var_725_int, var_726_int); // 0x16a TObjFunc
	
Label_364:
	var_727_bool = 0; var_728_object = Obj(); // 0x16c PushV
	var_728_object = var_1_object; // 0x16d MovT
	func_4924(var_728_object); // 0x16e NEW_2
	if(var_727_bool == 0) goto Label_374; // 0x170 JumpB
	var_733_int = 525709; // 0x171 PushI
	var_734_int = 27032; // 0x172 PushI
	var_735_int = 27031; // 0x173 PushI
	AddReply(var_733_int, var_734_int, var_735_int); // 0x174 TObjFunc
	
Label_374:
	var_736_int = 526667; // 0x176 PushI
	var_737_int = -1; // 0x177 PushI
	var_738_int = 27943; // 0x178 PushI
	AddReply(var_736_int, var_737_int, var_738_int); // 0x179 TObjFunc
	var_739_int = 525689; // 0x17b PushI
	var_740_int = -1; // 0x17c PushI
	var_741_int = 27012; // 0x17d PushI
	AddReply(var_739_int, var_740_int, var_741_int); // 0x17e TObjFunc
	var_742_int = 528783; // 0x180 PushI
	var_743_int = -1; // 0x181 PushI
	var_744_int = 30195; // 0x182 PushI
	AddReply(var_742_int, var_743_int, var_744_int); // 0x183 TObjFunc
	goto Label_392; // 0x185 Jump
	
Label_392:
	var_745_bool = 0; // 0x188 PushV
	func_4735(var_745_bool); // 0x189 NEW_2
	if(var_745_bool == 0) goto Label_407; // 0x18b JumpB
	
Label_396:
	lshWaitForAnimEnd(); // 0x18c Func
	var_746_object = var_3_object; // 0x18e PushT
	if(var_746_object == 0) goto Label_401; // 0x18f JumpB
	goto Label_406; // 0x190 Jump
	
Label_406:
	goto Label_421; // 0x196 Jump
	
Label_421:
	return 0; // 0x1a5 Return
	
Label_401:
	var_747_string = ""; // 0x191 PushV
	var_747_string = var_2_object; // 0x192 MovT
	func_4564(var_747_string); // 0x193 NEW_2
	goto Label_396; // 0x195 Jump
	
Label_407:
	var_748_string = "all"; // 0x197 PushS
	var_749_string = "idle"; // 0x198 PushS
	PlayAnimation(var_748_string, var_749_string); // 0x199 Func
	
Label_411:
	WaitForAnimEnd(); // 0x19b Func
	var_750_object = var_3_object; // 0x19d PushT
	if(var_750_object == 0) goto Label_416; // 0x19e JumpB
	goto Label_421; // 0x19f Jump
	
Label_416:
	var_751_string = "all"; // 0x1a0 PushS
	var_752_string = "idle"; // 0x1a1 PushS
	PlayAnimation(var_751_string, var_752_string); // 0x1a2 Func
	goto Label_411; // 0x1a4 Jump
}


func_2634(var_0_bool, var_949_int, var_950_object)
{
	var_952_object = Obj(); var_953_bool = 0; var_954_int = 0; var_955_bool = 0; var_956_object = Obj(); var_957_bool = 0; var_958_int = 0; var_959_bool = 0; // 0xa4a PushV
	var_0_bool = var_950_object; // 0xa4b TMov
	var_960_bool = 0; var_961_object = Obj(); var_962_float = 0; // 0xa4c PushV
	var_961_object = var_950_object; // 0xa4d Mov
	var_962_float = 70.0; // 0xa4e MovF
	func_4282(var_961_object, var_962_float); // 0xa4f NEW_2
	var_963_bool = var_960_bool == 0; // 0xa51 Not
	if(var_963_bool == 0) goto Label_2645; // 0xa52 JumpB
	var_949_int = -2; // 0xa53 MovI
	return 8; // 0xa54 Return
	
Label_2645:
	CreateDialog(var_956_object); // 0xa55 Func
	var_964_int = 0; // 0xa57 PushV
	func_4729(var_964_int); // 0xa58 NEW_2
	SetNPCName(var_964_int); // 0xa5a ObjFunc
	var_965_int = 0; // 0xa5c PushV
	func_4727(var_965_int); // 0xa5d NEW_2
	SetNPCDescription(var_965_int); // 0xa5f ObjFunc
	var_966_string = ""; // 0xa61 PushV
	func_4731(var_966_string); // 0xa62 NEW_2
	SetPhoto(var_966_string); // 0xa64 ObjFunc
	var_967_string = ""; // 0xa66 PushV
	func_4733(var_967_string); // 0xa67 NEW_2
	SetPhoto2(var_967_string); // 0xa69 ObjFunc
	var_968_int = 0; // 0xa6b PushV
	func_5355(var_968_int); // 0xa6c NEW_2
	SetPlayerName(var_968_int); // 0xa6e ObjFunc
	var_958_int = -1; // 0xa70 MovI
	IsOverrideActive(var_957_bool); // 0xa71 Func
	var_969_bool = var_957_bool; // 0xa73 Push
	if(var_969_bool == 0) goto Label_2679; // 0xa74 JumpB
	var_949_int = -2; // 0xa75 MovI
	return 8; // 0xa76 Return
	
Label_2679:
	DoDialog(var_956_object); // 0xa77 Func
	var_970_bool = 0; var_971_object = Obj(); // 0xa79 PushV
	var_972_object = Obj(); // 0xa7a PushV
	func_4645(var_972_object); // 0xa7b NEW_2
	var_971_object = var_972_object; // 0xa7c Mov
	func_4367(var_970_bool, var_971_object); // 0xa7e NEW_2
	var_973_object = Obj(); var_974_object = Obj(); // 0xa80 PushV
	var_973_object = var_950_object; // 0xa81 Mov
	var_974_object = var_956_object; // 0xa82 Mov
	TaskCall(18); // 0xa83 TaskCall
	func_2715(var_975_object, var_976_object, var_977_string, var_978_bool, var_973_object, var_974_object); // 0xa84 NEW_2
	TaskReturn(); // 0xa85 TaskReturn
	IsDialogEnd(var_959_bool); // 0xa87 ObjFunc
	
Label_2697:
	var_1006_bool = var_959_bool == 0; // 0xa89 Not
	if(var_1006_bool == 0) goto Label_2704; // 0xa8a JumpB
	sync(); // 0xa8b Func
	IsDialogEnd(var_959_bool); // 0xa8d ObjFunc
	goto Label_2697; // 0xa8f Jump
	
Label_2704:
	var_1007_object = Obj(); // 0xa90 PushV
	var_1007_object = var_950_object; // 0xa91 Mov
	func_4350(); // 0xa92 NEW_2
	StopDialog(var_956_object); // 0xa94 Func
	GetReturnValue(var_958_int); // 0xa96 ObjFunc
	var_949_int = var_958_int; // 0xa98 Mov
	return 8; // 0xa99 Return
}


func_4683(var_90_float)
{
	var_91_float = 0; var_92_float = 0; // 0x124b PushV
	GetGameTime(var_92_float); // 0x124c Func
	var_90_float = var_92_float; // 0x124e Mov
	return 2; // 0x124f Return
}


func_4425(var_297_bool)
{
	var_299_string = ""; var_300_int = 0; var_301_bool = 0; var_302_int = 0; var_303_string = ""; var_304_string = ""; var_305_int = 0; var_306_bool = 0; var_307_int = 0; var_308_string = ""; // 0x1149 PushV
	var_304_string = "c"; // 0x114a MovS
	var_305_int = 0; // 0x114b MovI
	
Label_4428:
	var_309_int = 1; // 0x114c PushI
	if(var_309_int == 0) goto Label_4441; // 0x114d JumpB
	var_310_int = 1; // 0x114e PushI
	var_311_int = var_305_int + var_310_int; // 0x114f Add
	var_312_int = var_304_string + var_311_int; // 0x1150 Add
	HasProperty(var_312_int, var_306_bool); // 0x1151 ObjFunc
	var_313_bool = var_306_bool == 0; // 0x1153 Not
	if(var_313_bool == 0) goto Label_4438; // 0x1154 JumpB
	goto Label_4441; // 0x1155 Jump
	
Label_4441:
	var_314_bool = var_305_int == 0; // 0x1159 Not
	if(var_314_bool == 0) goto Label_4445; // 0x115a JumpB
	var_297_bool = 0; // 0x115b MovB
	return 10; // 0x115c Return
	
Label_4445:
	var_307_int = 0; // 0x115d MovI
	var_315_int = 1; // 0x115e PushI
	var_316_bool = var_305_int > var_315_int; // 0x115f GT
	if(var_316_bool == 0) goto Label_4451; // 0x1160 JumpB
	irand(var_307_int, var_305_int); // 0x1161 Func
	
Label_4451:
	var_317_int = 1; // 0x1163 PushI
	var_318_int = var_307_int + var_317_int; // 0x1164 Add
	var_319_int = var_304_string + var_318_int; // 0x1165 Add
	GetProperty(var_319_int, var_308_string); // 0x1166 ObjFunc
	var_320_bool = 0; var_321_string = ""; // 0x1168 PushV
	var_321_string = var_308_string; // 0x1169 Mov
	func_4595(var_320_bool, var_321_string); // 0x116a NEW_2
	var_297_bool = var_320_bool; // 0x116b Mov
	return 10; // 0x116d Return
	
Label_4438:
	var_326_int = 1; // 0x1156 PushI
	var_305_int = var_305_int + var_326_int; // 0x1157 Add2
	goto Label_4428; // 0x1158 Jump
}


func_2125(var_2_object, var_791_string)
{
	var_792_bool = 0; // 0x84e PushV
	func_4735(var_792_bool); // 0x84f NEW_2
	var_793_bool = var_792_bool == 0; // 0x851 Not
	if(var_793_bool == 0) goto Label_2132; // 0x852 JumpB
	return 0; // 0x853 Return
	
Label_2132:
	var_794_bool = var_791_string == var_2_object; // 0x854 Eq
	if(var_794_bool == 0) goto Label_2135; // 0x855 JumpB
	return 0; // 0x856 Return
	
Label_2135:
	var_795_string = ""; var_796_bool = 0; // 0x857 PushV
	var_795_string = var_791_string; // 0x858 Mov
	var_797_string = ""; // 0x859 PushS
	var_798_bool = var_791_string == var_797_string; // 0x85a Eq
	if(var_798_bool == 0) goto Label_2142; // 0x85b JumpB
	var_796_bool = 0; // 0x85c MovB
	goto Label_2143; // 0x85d Jump
	
Label_2143:
	func_4580(var_795_string, var_796_bool); // 0x85f NEW_2
	var_2_object = var_791_string; // 0x861 TMov
	return 0; // 0x862 Return
	
Label_2142:
	var_796_bool = 1; // 0x85e MovB
}


func_4174()
{
	var_73_int = 0; var_74_int = 0; var_75_bool = 0; var_76_int = 0; var_77_int = 0; var_78_bool = 0; var_79_int = 0; var_80_int = 0; var_81_bool = 0; var_82_int = 0; var_83_int = 0; var_84_bool = 0; // 0x104e PushV
	WaitForAnimEnd(); // 0x104f Func
	var_85_bool = 0; // 0x1051 PushV
	func_4277(var_85_bool); // 0x1052 NEW_2
	var_86_bool = var_85_bool == 0; // 0x1054 Not
	if(var_86_bool == 0) goto Label_4183; // 0x1055 JumpB
	return 12; // 0x1056 Return
	
Label_4183:
	var_87_int = 0; // 0x1057 PushV
	func_4710(var_87_int); // 0x1058 NEW_2
	var_79_int = var_87_int; // 0x1059 Mov
	var_80_int = 0; // 0x105b MovI
	
Label_4188:
	var_100_bool = 0; // 0x105c PushV
	var_100_bool = 0; // 0x105d MovB
	var_101_int = 5; // 0x105e PushI
	var_102_bool = var_80_int < var_101_int; // 0x105f LT
	if(var_102_bool == 0) goto Label_4198; // 0x1060 JumpB
	var_103_bool = 0; // 0x1061 PushV
	func_4277(var_103_bool); // 0x1062 NEW_2
	if(var_103_bool == 0) goto Label_4198; // 0x1064 JumpB
	var_100_bool = 1; // 0x1065 MovB
	
Label_4198:
	if(var_100_bool == 0) goto Label_4240; // 0x1066 JumpB
	var_104_bool = var_79_int == 0; // 0x1067 Not
	if(var_104_bool == 0) goto Label_4208; // 0x1068 JumpB
	var_105_int = 3; // 0x1069 PushI
	Sleep(var_105_int, var_81_bool); // 0x106a Func
	var_106_bool = var_81_bool == 0; // 0x106c Not
	if(var_106_bool == 0) goto Label_4207; // 0x106d JumpB
	goto Label_4240; // 0x106e Jump
	
Label_4240:
	ResetAAS(); // 0x1090 Func
	return 12; // 0x1092 Return
	
Label_4207:
	goto Label_4229; // 0x106f Jump
	
Label_4229:
	var_107_bool = 0; // 0x1085 PushV
	func_4243(var_107_bool); // 0x1086 NEW_2
	var_108_bool = var_107_bool == 0; // 0x1088 Not
	if(var_108_bool == 0) goto Label_4235; // 0x1089 JumpB
	goto Label_4240; // 0x108a Jump
	
Label_4235:
	ResetAAS(); // 0x108b Func
	var_109_int = 1; // 0x108d PushI
	var_80_int = var_80_int + var_109_int; // 0x108e Add2
	goto Label_4188; // 0x108f Jump
	
Label_4208:
	irand(var_82_int, var_79_int); // 0x1070 Func
	var_110_int = 5; // 0x1072 PushI
	irand(var_83_int, var_110_int); // 0x1073 Func
	var_111_int = 0; // 0x1075 PushI
	var_112_bool = var_83_int != var_111_int; // 0x1076 Neq
	if(var_112_bool == 0) goto Label_4217; // 0x1077 JumpB
	var_82_int = 0; // 0x1078 MovI
	
Label_4217:
	var_113_string = "all"; // 0x1079 PushS
	var_114_string = ""; var_115_int = 0; // 0x107a PushV
	var_115_int = var_82_int; // 0x107b Mov
	func_4703(var_114_string, var_115_int); // 0x107c NEW_2
	PlayAnimation(var_113_string, var_114_string); // 0x107e Func
	WaitForAnimEnd(var_84_bool); // 0x1080 Func
	var_116_bool = var_84_bool == 0; // 0x1082 Not
	if(var_116_bool == 0) goto Label_4229; // 0x1083 JumpB
	goto Label_4240; // 0x1084 Jump
}


func_4688(var_87_int)
{
	var_88_float = 0; var_89_float = 0; // 0x1250 PushV
	GetGameTime(var_89_float); // 0x1251 Func
	var_90_int = 1; // 0x1253 PushI
	var_91_int = 0; // 0x1254 PushV
	var_92_int = 24; // 0x1255 PushI
	var_91_int = var_89_float / var_89_float; // 0x1256 Div2
	var_87_int = var_90_int + var_91_int; // 0x1257 Add2
	return 2; // 0x1258 Return
}


func_1620(var_0_bool, var_1_object, var_2_object, var_3_object, var_563_object, var_564_object)
{
	var_0_bool = var_564_object; // 0x655 TMov
	var_1_object = var_563_object; // 0x656 TMov
	var_3_object = 0; // 0x657 TMovB
	var_569_int = 1; // 0x658 PushI
	if(var_569_int == 0) goto Label_1653; // 0x659 JumpB
	var_570_string = ""; // 0x65a PushV
	var_570_string = "Fear"; // 0x65b MovS
	func_1683(var_564_object, var_570_string); // 0x65c NEW_2
	var_578_int = 526660; // 0x65e PushI
	SetMessage(var_578_int); // 0x65f TObjFunc
	ClearReplies(); // 0x661 TObjFunc
	var_579_int = 526661; // 0x663 PushI
	var_580_int = -1; // 0x664 PushI
	var_581_int = 27937; // 0x665 PushI
	AddReply(var_579_int, var_580_int, var_581_int); // 0x666 TObjFunc
	var_582_int = 526662; // 0x668 PushI
	var_583_int = -1; // 0x669 PushI
	var_584_int = 27938; // 0x66a PushI
	AddReply(var_582_int, var_583_int, var_584_int); // 0x66b TObjFunc
	var_585_int = 528771; // 0x66d PushI
	var_586_int = -1; // 0x66e PushI
	var_587_int = 30182; // 0x66f PushI
	AddReply(var_585_int, var_586_int, var_587_int); // 0x670 TObjFunc
	goto Label_1653; // 0x672 Jump
	
Label_1653:
	var_588_bool = 0; // 0x675 PushV
	func_4735(var_588_bool); // 0x676 NEW_2
	if(var_588_bool == 0) goto Label_1668; // 0x678 JumpB
	
Label_1657:
	lshWaitForAnimEnd(); // 0x679 Func
	var_589_object = var_3_object; // 0x67b PushT
	if(var_589_object == 0) goto Label_1662; // 0x67c JumpB
	goto Label_1667; // 0x67d Jump
	
Label_1667:
	goto Label_1682; // 0x683 Jump
	
Label_1682:
	return 0; // 0x692 Return
	
Label_1662:
	var_590_string = ""; // 0x67e PushV
	var_590_string = var_2_object; // 0x67f MovT
	func_4564(var_590_string); // 0x680 NEW_2
	goto Label_1657; // 0x682 Jump
	
Label_1668:
	var_591_string = "all"; // 0x684 PushS
	var_592_string = "idle"; // 0x685 PushS
	PlayAnimation(var_591_string, var_592_string); // 0x686 Func
	
Label_1672:
	WaitForAnimEnd(); // 0x688 Func
	var_593_object = var_3_object; // 0x68a PushT
	if(var_593_object == 0) goto Label_1677; // 0x68b JumpB
	goto Label_1682; // 0x68c Jump
	
Label_1677:
	var_594_string = "all"; // 0x68d PushS
	var_595_string = "idle"; // 0x68e PushS
	PlayAnimation(var_594_string, var_595_string); // 0x68f Func
	goto Label_1672; // 0x691 Jump
}


func_3157(var_0_bool, var_1_object, var_2_object, var_3_object, var_1101_object, var_1102_object)
{
	var_0_bool = var_1102_object; // 0xc56 TMov
	var_1_object = var_1101_object; // 0xc57 TMov
	var_3_object = 0; // 0xc58 TMovB
	var_1107_int = 1; // 0xc59 PushI
	if(var_1107_int == 0) goto Label_3185; // 0xc5a JumpB
	var_1108_string = ""; // 0xc5b PushV
	var_1108_string = "Neutral"; // 0xc5c MovS
	func_3215(var_1102_object, var_1108_string); // 0xc5d NEW_2
	var_1116_int = 526689; // 0xc5f PushI
	SetMessage(var_1116_int); // 0xc60 TObjFunc
	ClearReplies(); // 0xc62 TObjFunc
	var_1117_int = 526690; // 0xc64 PushI
	var_1118_int = -1; // 0xc65 PushI
	var_1119_int = 27966; // 0xc66 PushI
	AddReply(var_1117_int, var_1118_int, var_1119_int); // 0xc67 TObjFunc
	var_1120_int = 526691; // 0xc69 PushI
	var_1121_int = -1; // 0xc6a PushI
	var_1122_int = 27967; // 0xc6b PushI
	AddReply(var_1120_int, var_1121_int, var_1122_int); // 0xc6c TObjFunc
	goto Label_3185; // 0xc6e Jump
	
Label_3185:
	var_1123_bool = 0; // 0xc71 PushV
	func_4735(var_1123_bool); // 0xc72 NEW_2
	if(var_1123_bool == 0) goto Label_3200; // 0xc74 JumpB
	
Label_3189:
	lshWaitForAnimEnd(); // 0xc75 Func
	var_1124_object = var_3_object; // 0xc77 PushT
	if(var_1124_object == 0) goto Label_3194; // 0xc78 JumpB
	goto Label_3199; // 0xc79 Jump
	
Label_3199:
	goto Label_3214; // 0xc7f Jump
	
Label_3214:
	return 0; // 0xc8e Return
	
Label_3194:
	var_1125_string = ""; // 0xc7a PushV
	var_1125_string = var_2_object; // 0xc7b MovT
	func_4564(var_1125_string); // 0xc7c NEW_2
	goto Label_3189; // 0xc7e Jump
	
Label_3200:
	var_1126_string = "all"; // 0xc80 PushS
	var_1127_string = "idle"; // 0xc81 PushS
	PlayAnimation(var_1126_string, var_1127_string); // 0xc82 Func
	
Label_3204:
	WaitForAnimEnd(); // 0xc84 Func
	var_1128_object = var_3_object; // 0xc86 PushT
	if(var_1128_object == 0) goto Label_3209; // 0xc87 JumpB
	goto Label_3214; // 0xc88 Jump
	
Label_3209:
	var_1129_string = "all"; // 0xc89 PushS
	var_1130_string = "idle"; // 0xc8a PushS
	PlayAnimation(var_1129_string, var_1130_string); // 0xc8b Func
	goto Label_3204; // 0xc8d Jump
}


func_4948(var_1185_bool)
{
	var_1187_int = 0; var_1188_string = ""; // 0x1355 PushV
	var_1188_string = "ook11Grif1"; // 0x1356 MovS
	func_4666(var_1187_int, var_1188_string); // 0x1357 NEW_2
	var_1189_int = 0; // 0x1359 PushI
	var_1190_bool = var_1187_int == var_1189_int; // 0x135a Eq
	if(var_1190_bool == 0) goto Label_4958; // 0x135b JumpB
	var_1185_bool = 1; // 0x135c MovB
	return 0; // 0x135d Return
	
Label_4958:
	var_1185_bool = 0; // 0x135e MovB
	return 0; // 0x135f Return
}


func_4697(var_434_bool, var_435_int)
{
	var_436_int = 0; // 0x125a PushV
	func_4688(var_436_int); // 0x125b NEW_2
	var_434_bool = var_436_int == var_435_int; // 0x125d Eq2
	return 0; // 0x125e Return
}


func_4703(var_93_string, var_94_int)
{
	var_95_string = ""; var_96_string = ""; // 0x125f PushV
	var_96_string = "idle"; // 0x1260 MovS
	var_97_int = var_94_int; // 0x1261 Push
	if(var_97_int == 0) goto Label_4708; // 0x1262 JumpB
	var_96_string = var_96_string + var_94_int; // 0x1263 Add2
	
Label_4708:
	var_93_string = var_96_string; // 0x1264 Mov
	return 2; // 0x1265 Return
}


func_4960()
{
	var_153_object = Obj(); var_154_object = Obj(); // 0x1360 PushV
	var_155_int = 498; // 0x1361 PushI
	var_156_int = 1; // 0x1362 PushI
	var_157_int = 528065; // 0x1363 PushI
	CreateDiaryEntry(var_154_object, var_155_int, var_156_int, var_157_int); // 0x1364 Func
	var_158_bool = 0; var_159_object = Obj(); var_160_int = 0; // 0x1366 PushV
	var_159_object = var_154_object; // 0x1367 Mov
	var_160_int = 480; // 0x1368 MovI
	func_5103(var_158_bool, var_159_object, var_160_int); // 0x1369 NEW_2
	return 2; // 0x136b Return
}


func_3683(var_0_bool, var_1214_int, var_1215_object)
{
	var_1217_object = Obj(); var_1218_bool = 0; var_1219_int = 0; var_1220_bool = 0; var_1221_object = Obj(); var_1222_bool = 0; var_1223_int = 0; var_1224_bool = 0; // 0xe63 PushV
	var_0_bool = var_1215_object; // 0xe64 TMov
	var_1225_bool = 0; var_1226_object = Obj(); var_1227_float = 0; // 0xe65 PushV
	var_1226_object = var_1215_object; // 0xe66 Mov
	var_1227_float = 70.0; // 0xe67 MovF
	func_4282(var_1226_object, var_1227_float); // 0xe68 NEW_2
	var_1228_bool = var_1225_bool == 0; // 0xe6a Not
	if(var_1228_bool == 0) goto Label_3694; // 0xe6b JumpB
	var_1214_int = -2; // 0xe6c MovI
	return 8; // 0xe6d Return
	
Label_3694:
	CreateDialog(var_1221_object); // 0xe6e Func
	var_1229_int = 0; // 0xe70 PushV
	func_4729(var_1229_int); // 0xe71 NEW_2
	SetNPCName(var_1229_int); // 0xe73 ObjFunc
	var_1230_int = 0; // 0xe75 PushV
	func_4727(var_1230_int); // 0xe76 NEW_2
	SetNPCDescription(var_1230_int); // 0xe78 ObjFunc
	var_1231_string = ""; // 0xe7a PushV
	func_4731(var_1231_string); // 0xe7b NEW_2
	SetPhoto(var_1231_string); // 0xe7d ObjFunc
	var_1232_string = ""; // 0xe7f PushV
	func_4733(var_1232_string); // 0xe80 NEW_2
	SetPhoto2(var_1232_string); // 0xe82 ObjFunc
	var_1233_int = 0; // 0xe84 PushV
	func_5355(var_1233_int); // 0xe85 NEW_2
	SetPlayerName(var_1233_int); // 0xe87 ObjFunc
	var_1223_int = -1; // 0xe89 MovI
	IsOverrideActive(var_1222_bool); // 0xe8a Func
	var_1234_bool = var_1222_bool; // 0xe8c Push
	if(var_1234_bool == 0) goto Label_3728; // 0xe8d JumpB
	var_1214_int = -2; // 0xe8e MovI
	return 8; // 0xe8f Return
	
Label_3728:
	DoDialog(var_1221_object); // 0xe90 Func
	var_1235_bool = 0; var_1236_object = Obj(); // 0xe92 PushV
	var_1237_object = Obj(); // 0xe93 PushV
	func_4645(var_1237_object); // 0xe94 NEW_2
	var_1236_object = var_1237_object; // 0xe95 Mov
	func_4367(var_1235_bool, var_1236_object); // 0xe97 NEW_2
	var_1238_object = Obj(); var_1239_object = Obj(); // 0xe99 PushV
	var_1238_object = var_1215_object; // 0xe9a Mov
	var_1239_object = var_1221_object; // 0xe9b Mov
	TaskCall(26); // 0xe9c TaskCall
	func_3764(var_1240_object, var_1241_object, var_1242_string, var_1243_bool, var_1238_object, var_1239_object); // 0xe9d NEW_2
	TaskReturn(); // 0xe9e TaskReturn
	IsDialogEnd(var_1224_bool); // 0xea0 ObjFunc
	
Label_3746:
	var_1271_bool = var_1224_bool == 0; // 0xea2 Not
	if(var_1271_bool == 0) goto Label_3753; // 0xea3 JumpB
	sync(); // 0xea4 Func
	IsDialogEnd(var_1224_bool); // 0xea6 ObjFunc
	goto Label_3746; // 0xea8 Jump
	
Label_3753:
	var_1272_object = Obj(); // 0xea9 PushV
	var_1272_object = var_1215_object; // 0xeaa Mov
	func_4350(); // 0xeab NEW_2
	StopDialog(var_1221_object); // 0xead Func
	GetReturnValue(var_1223_int); // 0xeaf ObjFunc
	var_1214_int = var_1223_int; // 0xeb1 Mov
	return 8; // 0xeb2 Return
}


func_4710(var_87_int)
{
	var_88_int = 0; var_89_bool = 0; var_90_int = 0; var_91_bool = 0; // 0x1266 PushV
	var_90_int = 0; // 0x1267 MovI
	
Label_4712:
	var_92_string = "all"; // 0x1268 PushS
	var_93_string = ""; var_94_int = 0; // 0x1269 PushV
	var_94_int = var_90_int; // 0x126a Mov
	func_4703(var_93_string, var_94_int); // 0x126b NEW_2
	HasAnimation(var_91_bool, var_92_string, var_93_string); // 0x126d Func
	var_98_bool = var_91_bool == 0; // 0x126f Not
	if(var_98_bool == 0) goto Label_4722; // 0x1270 JumpB
	goto Label_4725; // 0x1271 Jump
	
Label_4725:
	var_87_int = var_90_int; // 0x1275 Mov
	return 4; // 0x1276 Return
	
Label_4722:
	var_99_int = 1; // 0x1272 PushI
	var_90_int = var_90_int + var_99_int; // 0x1273 Add2
	goto Label_4712; // 0x1274 Jump
}


func_103(var_0_bool, var_1_object, var_2_object, var_3_object, var_376_object, var_377_object)
{
	var_0_bool = var_377_object; // 0x68 TMov
	var_1_object = var_376_object; // 0x69 TMov
	var_3_object = 0; // 0x6a TMovB
	var_382_int = 1; // 0x6b PushI
	if(var_382_int == 0) goto Label_131; // 0x6c JumpB
	var_383_string = ""; // 0x6d PushV
	var_383_string = "Neutral"; // 0x6e MovS
	func_161(var_377_object, var_383_string); // 0x6f NEW_2
	var_400_int = 525483; // 0x71 PushI
	SetMessage(var_400_int); // 0x72 TObjFunc
	ClearReplies(); // 0x74 TObjFunc
	var_401_int = 525484; // 0x76 PushI
	var_402_int = 30758; // 0x77 PushI
	var_403_int = 26840; // 0x78 PushI
	AddReply(var_401_int, var_402_int, var_403_int); // 0x79 TObjFunc
	var_404_int = 529303; // 0x7b PushI
	var_405_int = -1; // 0x7c PushI
	var_406_int = 30757; // 0x7d PushI
	AddReply(var_404_int, var_405_int, var_406_int); // 0x7e TObjFunc
	goto Label_131; // 0x80 Jump
	
Label_131:
	var_407_bool = 0; // 0x83 PushV
	func_4735(var_407_bool); // 0x84 NEW_2
	if(var_407_bool == 0) goto Label_146; // 0x86 JumpB
	
Label_135:
	lshWaitForAnimEnd(); // 0x87 Func
	var_408_object = var_3_object; // 0x89 PushT
	if(var_408_object == 0) goto Label_140; // 0x8a JumpB
	goto Label_145; // 0x8b Jump
	
Label_145:
	goto Label_160; // 0x91 Jump
	
Label_160:
	return 0; // 0xa0 Return
	
Label_140:
	var_409_string = ""; // 0x8c PushV
	var_409_string = var_2_object; // 0x8d MovT
	func_4564(var_409_string); // 0x8e NEW_2
	goto Label_135; // 0x90 Jump
	
Label_146:
	var_420_string = "all"; // 0x92 PushS
	var_421_string = "idle"; // 0x93 PushS
	PlayAnimation(var_420_string, var_421_string); // 0x94 Func
	
Label_150:
	WaitForAnimEnd(); // 0x96 Func
	var_422_object = var_3_object; // 0x98 PushT
	if(var_422_object == 0) goto Label_155; // 0x99 JumpB
	goto Label_160; // 0x9a Jump
	
Label_155:
	var_423_string = "all"; // 0x9b PushS
	var_424_string = "idle"; // 0x9c PushS
	PlayAnimation(var_423_string, var_424_string); // 0x9d Func
	goto Label_150; // 0x9f Jump
}


func_4973()
{
	var_143_object = Obj(); var_144_object = Obj(); // 0x136d PushV
	var_145_int = 497; // 0x136e PushI
	var_146_int = 1; // 0x136f PushI
	var_147_int = 528064; // 0x1370 PushI
	CreateDiaryEntry(var_144_object, var_145_int, var_146_int, var_147_int); // 0x1371 Func
	var_148_bool = 0; var_149_object = Obj(); var_150_int = 0; // 0x1373 PushV
	var_149_object = var_144_object; // 0x1374 Mov
	var_150_int = 480; // 0x1375 MovI
	func_5103(var_148_bool, var_149_object, var_150_int); // 0x1376 NEW_2
	return 2; // 0x1378 Return
}


func_4462(var_328_bool)
{
	var_330_string = ""; var_331_int = 0; var_332_bool = 0; var_333_int = 0; var_334_string = ""; var_335_string = ""; var_336_int = 0; var_337_bool = 0; var_338_int = 0; var_339_string = ""; // 0x116e PushV
	var_340_string = "d"; // 0x116f PushS
	var_341_int = 0; // 0x1170 PushV
	func_4688(var_341_int); // 0x1171 NEW_2
	var_342_int = var_340_string + var_341_int; // 0x1173 Add
	var_343_string = "m"; // 0x1174 PushS
	var_335_string = var_342_int + var_343_string; // 0x1175 Add2
	var_336_int = 0; // 0x1176 MovI
	
Label_4471:
	var_344_int = 1; // 0x1177 PushI
	if(var_344_int == 0) goto Label_4484; // 0x1178 JumpB
	var_345_int = 1; // 0x1179 PushI
	var_346_int = var_336_int + var_345_int; // 0x117a Add
	var_347_int = var_335_string + var_346_int; // 0x117b Add
	HasProperty(var_347_int, var_337_bool); // 0x117c ObjFunc
	var_348_bool = var_337_bool == 0; // 0x117e Not
	if(var_348_bool == 0) goto Label_4481; // 0x117f JumpB
	goto Label_4484; // 0x1180 Jump
	
Label_4484:
	var_349_bool = var_336_int == 0; // 0x1184 Not
	if(var_349_bool == 0) goto Label_4488; // 0x1185 JumpB
	var_328_bool = 0; // 0x1186 MovB
	return 10; // 0x1187 Return
	
Label_4488:
	var_338_int = 0; // 0x1188 MovI
	var_350_int = 1; // 0x1189 PushI
	var_351_bool = var_336_int > var_350_int; // 0x118a GT
	if(var_351_bool == 0) goto Label_4494; // 0x118b JumpB
	irand(var_338_int, var_336_int); // 0x118c Func
	
Label_4494:
	var_352_int = 1; // 0x118e PushI
	var_353_int = var_338_int + var_352_int; // 0x118f Add
	var_354_int = var_335_string + var_353_int; // 0x1190 Add
	GetProperty(var_354_int, var_339_string); // 0x1191 ObjFunc
	var_355_bool = 0; var_356_string = ""; // 0x1193 PushV
	var_356_string = var_339_string; // 0x1194 Mov
	func_4595(var_355_bool, var_356_string); // 0x1195 NEW_2
	var_328_bool = var_355_bool; // 0x1196 Mov
	return 10; // 0x1198 Return
	
Label_4481:
	var_357_int = 1; // 0x1181 PushI
	var_336_int = var_336_int + var_357_int; // 0x1182 Add2
	goto Label_4471; // 0x1183 Jump
}


func_1904(var_2_object, var_634_string)
{
	var_635_bool = 0; // 0x771 PushV
	func_4735(var_635_bool); // 0x772 NEW_2
	var_636_bool = var_635_bool == 0; // 0x774 Not
	if(var_636_bool == 0) goto Label_1911; // 0x775 JumpB
	return 0; // 0x776 Return
	
Label_1911:
	var_637_bool = var_634_string == var_2_object; // 0x777 Eq
	if(var_637_bool == 0) goto Label_1914; // 0x778 JumpB
	return 0; // 0x779 Return
	
Label_1914:
	var_638_string = ""; var_639_bool = 0; // 0x77a PushV
	var_638_string = var_634_string; // 0x77b Mov
	var_640_string = ""; // 0x77c PushS
	var_641_bool = var_634_string == var_640_string; // 0x77d Eq
	if(var_641_bool == 0) goto Label_1921; // 0x77e JumpB
	var_639_bool = 0; // 0x77f MovB
	goto Label_1922; // 0x780 Jump
	
Label_1922:
	func_4580(var_638_string, var_639_bool); // 0x782 NEW_2
	var_2_object = var_634_string; // 0x784 TMov
	return 0; // 0x785 Return
	
Label_1921:
	var_639_bool = 1; // 0x781 MovB
}


func_3445(var_2_object, var_1169_string)
{
	var_1170_bool = 0; // 0xd76 PushV
	func_4735(var_1170_bool); // 0xd77 NEW_2
	var_1171_bool = var_1170_bool == 0; // 0xd79 Not
	if(var_1171_bool == 0) goto Label_3452; // 0xd7a JumpB
	return 0; // 0xd7b Return
	
Label_3452:
	var_1172_bool = var_1169_string == var_2_object; // 0xd7c Eq
	if(var_1172_bool == 0) goto Label_3455; // 0xd7d JumpB
	return 0; // 0xd7e Return
	
Label_3455:
	var_1173_string = ""; var_1174_bool = 0; // 0xd7f PushV
	var_1173_string = var_1169_string; // 0xd80 Mov
	var_1175_string = ""; // 0xd81 PushS
	var_1176_bool = var_1169_string == var_1175_string; // 0xd82 Eq
	if(var_1176_bool == 0) goto Label_3462; // 0xd83 JumpB
	var_1174_bool = 0; // 0xd84 MovB
	goto Label_3463; // 0xd85 Jump
	
Label_3463:
	func_4580(var_1173_string, var_1174_bool); // 0xd87 NEW_2
	var_2_object = var_1169_string; // 0xd89 TMov
	return 0; // 0xd8a Return
	
Label_3462:
	var_1174_bool = 1; // 0xd86 MovB
}


func_4727(var_274_int)
{
	var_274_int = 515535; // 0x1277 MovI
	return 0; // 0x1278 Return
}


func_1399(var_0_bool, var_1_object, var_2_object, var_3_object, var_462_object, var_463_object)
{
	var_0_bool = var_463_object; // 0x578 TMov
	var_1_object = var_462_object; // 0x579 TMov
	var_3_object = 0; // 0x57a TMovB
	var_468_int = 1; // 0x57b PushI
	if(var_468_int == 0) goto Label_1432; // 0x57c JumpB
	var_469_string = ""; // 0x57d PushV
	var_469_string = "Fear"; // 0x57e MovS
	func_1462(var_463_object, var_469_string); // 0x57f NEW_2
	var_477_int = 526656; // 0x581 PushI
	SetMessage(var_477_int); // 0x582 TObjFunc
	ClearReplies(); // 0x584 TObjFunc
	var_478_int = 526657; // 0x586 PushI
	var_479_int = -1; // 0x587 PushI
	var_480_int = 27933; // 0x588 PushI
	AddReply(var_478_int, var_479_int, var_480_int); // 0x589 TObjFunc
	var_481_int = 526658; // 0x58b PushI
	var_482_int = -1; // 0x58c PushI
	var_483_int = 27934; // 0x58d PushI
	AddReply(var_481_int, var_482_int, var_483_int); // 0x58e TObjFunc
	var_484_int = 542279; // 0x590 PushI
	var_485_int = -1; // 0x591 PushI
	var_486_int = 44624; // 0x592 PushI
	AddReply(var_484_int, var_485_int, var_486_int); // 0x593 TObjFunc
	goto Label_1432; // 0x595 Jump
	
Label_1432:
	var_487_bool = 0; // 0x598 PushV
	func_4735(var_487_bool); // 0x599 NEW_2
	if(var_487_bool == 0) goto Label_1447; // 0x59b JumpB
	
Label_1436:
	lshWaitForAnimEnd(); // 0x59c Func
	var_488_object = var_3_object; // 0x59e PushT
	if(var_488_object == 0) goto Label_1441; // 0x59f JumpB
	goto Label_1446; // 0x5a0 Jump
	
Label_1446:
	goto Label_1461; // 0x5a6 Jump
	
Label_1461:
	return 0; // 0x5b5 Return
	
Label_1441:
	var_489_string = ""; // 0x5a1 PushV
	var_489_string = var_2_object; // 0x5a2 MovT
	func_4564(var_489_string); // 0x5a3 NEW_2
	goto Label_1436; // 0x5a5 Jump
	
Label_1447:
	var_490_string = "all"; // 0x5a7 PushS
	var_491_string = "idle"; // 0x5a8 PushS
	PlayAnimation(var_490_string, var_491_string); // 0x5a9 Func
	
Label_1451:
	WaitForAnimEnd(); // 0x5ab Func
	var_492_object = var_3_object; // 0x5ad PushT
	if(var_492_object == 0) goto Label_1456; // 0x5ae JumpB
	goto Label_1461; // 0x5af Jump
	
Label_1456:
	var_493_string = "all"; // 0x5b0 PushS
	var_494_string = "idle"; // 0x5b1 PushS
	PlayAnimation(var_493_string, var_494_string); // 0x5b2 Func
	goto Label_1451; // 0x5b4 Jump
}


func_4729(var_273_int)
{
	var_273_int = 502860; // 0x1279 MovI
	return 0; // 0x127a Return
}


func_2936(var_0_bool, var_1_object, var_2_object, var_3_object, var_1037_object, var_1038_object)
{
	var_0_bool = var_1038_object; // 0xb79 TMov
	var_1_object = var_1037_object; // 0xb7a TMov
	var_3_object = 0; // 0xb7b TMovB
	var_1043_int = 1; // 0xb7c PushI
	if(var_1043_int == 0) goto Label_2969; // 0xb7d JumpB
	var_1044_string = ""; // 0xb7e PushV
	var_1044_string = "Neutral"; // 0xb7f MovS
	func_2999(var_1038_object, var_1044_string); // 0xb80 NEW_2
	var_1052_int = 526685; // 0xb82 PushI
	SetMessage(var_1052_int); // 0xb83 TObjFunc
	ClearReplies(); // 0xb85 TObjFunc
	var_1053_int = 526686; // 0xb87 PushI
	var_1054_int = -1; // 0xb88 PushI
	var_1055_int = 27962; // 0xb89 PushI
	AddReply(var_1053_int, var_1054_int, var_1055_int); // 0xb8a TObjFunc
	var_1056_int = 526687; // 0xb8c PushI
	var_1057_int = -1; // 0xb8d PushI
	var_1058_int = 27963; // 0xb8e PushI
	AddReply(var_1056_int, var_1057_int, var_1058_int); // 0xb8f TObjFunc
	var_1059_int = 529000; // 0xb91 PushI
	var_1060_int = -1; // 0xb92 PushI
	var_1061_int = 30437; // 0xb93 PushI
	AddReply(var_1059_int, var_1060_int, var_1061_int); // 0xb94 TObjFunc
	goto Label_2969; // 0xb96 Jump
	
Label_2969:
	var_1062_bool = 0; // 0xb99 PushV
	func_4735(var_1062_bool); // 0xb9a NEW_2
	if(var_1062_bool == 0) goto Label_2984; // 0xb9c JumpB
	
Label_2973:
	lshWaitForAnimEnd(); // 0xb9d Func
	var_1063_object = var_3_object; // 0xb9f PushT
	if(var_1063_object == 0) goto Label_2978; // 0xba0 JumpB
	goto Label_2983; // 0xba1 Jump
	
Label_2983:
	goto Label_2998; // 0xba7 Jump
	
Label_2998:
	return 0; // 0xbb6 Return
	
Label_2978:
	var_1064_string = ""; // 0xba2 PushV
	var_1064_string = var_2_object; // 0xba3 MovT
	func_4564(var_1064_string); // 0xba4 NEW_2
	goto Label_2973; // 0xba6 Jump
	
Label_2984:
	var_1065_string = "all"; // 0xba8 PushS
	var_1066_string = "idle"; // 0xba9 PushS
	PlayAnimation(var_1065_string, var_1066_string); // 0xbaa Func
	
Label_2988:
	WaitForAnimEnd(); // 0xbac Func
	var_1067_object = var_3_object; // 0xbae PushT
	if(var_1067_object == 0) goto Label_2993; // 0xbaf JumpB
	goto Label_2998; // 0xbb0 Jump
	
Label_2993:
	var_1068_string = "all"; // 0xbb1 PushS
	var_1069_string = "idle"; // 0xbb2 PushS
	PlayAnimation(var_1068_string, var_1069_string); // 0xbb3 Func
	goto Label_2988; // 0xbb5 Jump
}


func_4731(var_275_string)
{
	var_275_string = "ui/NPC_Grif.png"; // 0x127b MovS
	return 0; // 0x127c Return
}


func_2423(var_0_bool, var_888_int, var_889_object)
{
	var_891_object = Obj(); var_892_bool = 0; var_893_int = 0; var_894_bool = 0; var_895_object = Obj(); var_896_bool = 0; var_897_int = 0; var_898_bool = 0; // 0x977 PushV
	var_0_bool = var_889_object; // 0x978 TMov
	var_899_bool = 0; var_900_object = Obj(); var_901_float = 0; // 0x979 PushV
	var_900_object = var_889_object; // 0x97a Mov
	var_901_float = 70.0; // 0x97b MovF
	func_4282(var_900_object, var_901_float); // 0x97c NEW_2
	var_902_bool = var_899_bool == 0; // 0x97e Not
	if(var_902_bool == 0) goto Label_2434; // 0x97f JumpB
	var_888_int = -2; // 0x980 MovI
	return 8; // 0x981 Return
	
Label_2434:
	CreateDialog(var_895_object); // 0x982 Func
	var_903_int = 0; // 0x984 PushV
	func_4729(var_903_int); // 0x985 NEW_2
	SetNPCName(var_903_int); // 0x987 ObjFunc
	var_904_int = 0; // 0x989 PushV
	func_4727(var_904_int); // 0x98a NEW_2
	SetNPCDescription(var_904_int); // 0x98c ObjFunc
	var_905_string = ""; // 0x98e PushV
	func_4731(var_905_string); // 0x98f NEW_2
	SetPhoto(var_905_string); // 0x991 ObjFunc
	var_906_string = ""; // 0x993 PushV
	func_4733(var_906_string); // 0x994 NEW_2
	SetPhoto2(var_906_string); // 0x996 ObjFunc
	var_907_int = 0; // 0x998 PushV
	func_5355(var_907_int); // 0x999 NEW_2
	SetPlayerName(var_907_int); // 0x99b ObjFunc
	var_897_int = -1; // 0x99d MovI
	IsOverrideActive(var_896_bool); // 0x99e Func
	var_908_bool = var_896_bool; // 0x9a0 Push
	if(var_908_bool == 0) goto Label_2468; // 0x9a1 JumpB
	var_888_int = -2; // 0x9a2 MovI
	return 8; // 0x9a3 Return
	
Label_2468:
	DoDialog(var_895_object); // 0x9a4 Func
	var_909_bool = 0; var_910_object = Obj(); // 0x9a6 PushV
	var_911_object = Obj(); // 0x9a7 PushV
	func_4645(var_911_object); // 0x9a8 NEW_2
	var_910_object = var_911_object; // 0x9a9 Mov
	func_4367(var_909_bool, var_910_object); // 0x9ab NEW_2
	var_912_object = Obj(); var_913_object = Obj(); // 0x9ad PushV
	var_912_object = var_889_object; // 0x9ae Mov
	var_913_object = var_895_object; // 0x9af Mov
	TaskCall(16); // 0x9b0 TaskCall
	func_2504(var_914_object, var_915_object, var_916_string, var_917_bool, var_912_object, var_913_object); // 0x9b1 NEW_2
	TaskReturn(); // 0x9b2 TaskReturn
	IsDialogEnd(var_898_bool); // 0x9b4 ObjFunc
	
Label_2486:
	var_942_bool = var_898_bool == 0; // 0x9b6 Not
	if(var_942_bool == 0) goto Label_2493; // 0x9b7 JumpB
	sync(); // 0x9b8 Func
	IsDialogEnd(var_898_bool); // 0x9ba ObjFunc
	goto Label_2486; // 0x9bc Jump
	
Label_2493:
	var_943_object = Obj(); // 0x9bd PushV
	var_943_object = var_889_object; // 0x9be Mov
	func_4350(); // 0x9bf NEW_2
	StopDialog(var_895_object); // 0x9c1 Func
	GetReturnValue(var_897_int); // 0x9c3 ObjFunc
	var_888_int = var_897_int; // 0x9c5 Mov
	return 8; // 0x9c6 Return
}


func_4733(var_276_string)
{
	var_276_string = "ui/NPC_Grif_b.png"; // 0x127d MovS
	return 0; // 0x127e Return
}


func_4986()
{
	var_133_object = Obj(); var_134_object = Obj(); // 0x137a PushV
	var_135_int = 496; // 0x137b PushI
	var_136_int = 1; // 0x137c PushI
	var_137_int = 528063; // 0x137d PushI
	CreateDiaryEntry(var_134_object, var_135_int, var_136_int, var_137_int); // 0x137e Func
	var_138_bool = 0; var_139_object = Obj(); var_140_int = 0; // 0x1380 PushV
	var_139_object = var_134_object; // 0x1381 Mov
	var_140_int = 480; // 0x1382 MovI
	func_5103(var_138_bool, var_139_object, var_140_int); // 0x1383 NEW_2
	return 2; // 0x1385 Return
}


func_4735(var_268_bool)
{
	var_268_bool = 1; // 0x127f MovB
	return 0; // 0x1280 Return
}


func_4737()
{
	var_118_object = Obj(); var_119_string = ""; var_120_float = 0; // 0x1282 PushV
	var_121_object = Obj(); // 0x1283 PushV
	func_5131(var_121_object); // 0x1284 NEW_2
	var_118_object = var_121_object; // 0x1285 Mov
	var_119_string = "pt_map_notkin"; // 0x1287 MovS
	var_120_float = 2; // 0x1288 MovI
	func_5148(var_118_object, var_119_string, var_120_float); // 0x1289 NEW_2
	var_141_object = Obj(); // 0x128b PushV
	func_5131(var_141_object); // 0x128c NEW_2
	ShowMap(var_141_object); // 0x128e ObjFunc
	return 0; // 0x1290 Return
}


func_4999()
{
	var_123_object = Obj(); var_124_object = Obj(); // 0x1387 PushV
	var_125_int = 495; // 0x1388 PushI
	var_126_int = 1; // 0x1389 PushI
	var_127_int = 528062; // 0x138a PushI
	CreateDiaryEntry(var_124_object, var_125_int, var_126_int, var_127_int); // 0x138b Func
	var_128_bool = 0; var_129_object = Obj(); var_130_int = 0; // 0x138d PushV
	var_129_object = var_124_object; // 0x138e Mov
	var_130_int = 480; // 0x138f MovI
	func_5103(var_128_bool, var_129_object, var_130_int); // 0x1390 NEW_2
	return 2; // 0x1392 Return
}


func_3215(var_2_object, var_1108_string)
{
	var_1109_bool = 0; // 0xc90 PushV
	func_4735(var_1109_bool); // 0xc91 NEW_2
	var_1110_bool = var_1109_bool == 0; // 0xc93 Not
	if(var_1110_bool == 0) goto Label_3222; // 0xc94 JumpB
	return 0; // 0xc95 Return
	
Label_3222:
	var_1111_bool = var_1108_string == var_2_object; // 0xc96 Eq
	if(var_1111_bool == 0) goto Label_3225; // 0xc97 JumpB
	return 0; // 0xc98 Return
	
Label_3225:
	var_1112_string = ""; var_1113_bool = 0; // 0xc99 PushV
	var_1112_string = var_1108_string; // 0xc9a Mov
	var_1114_string = ""; // 0xc9b PushS
	var_1115_bool = var_1108_string == var_1114_string; // 0xc9c Eq
	if(var_1115_bool == 0) goto Label_3232; // 0xc9d JumpB
	var_1113_bool = 0; // 0xc9e MovB
	goto Label_3233; // 0xc9f Jump
	
Label_3233:
	func_4580(var_1112_string, var_1113_bool); // 0xca1 NEW_2
	var_2_object = var_1108_string; // 0xca3 TMov
	return 0; // 0xca4 Return
	
Label_3232:
	var_1113_bool = 1; // 0xca0 MovB
}


func_4753()
{
	var_75_object = Obj(); var_76_object = Obj(); // 0x1291 PushV
	var_77_string = "k4q01"; // 0x1292 PushS
	var_78_int = 2; // 0x1293 PushI
	SetVariable(var_77_string, var_78_int); // 0x1294 Func
	var_79_object = Obj(); // 0x1296 PushV
	func_5131(var_79_object); // 0x1297 NEW_2
	var_76_object = var_79_object; // 0x1298 Mov
	var_86_string = "k4q01GrifGotoNotkin"; // 0x129a PushS
	var_87_string = "pt_map_notkin"; // 0x129b PushS
	var_88_int = 1; // 0x129c PushI
	var_89_int = 515278; // 0x129d PushI
	var_90_float = 0; // 0x129e PushV
	func_4683(var_90_float); // 0x129f NEW_2
	AddMark(var_86_string, var_87_string, var_88_int, var_89_int, var_90_float); // 0x12a1 ObjFunc
	func_5077(); // 0x12a4 NEW_2
	return 2; // 0x12a6 Return
}


func_1683(var_2_object, var_570_string)
{
	var_571_bool = 0; // 0x694 PushV
	func_4735(var_571_bool); // 0x695 NEW_2
	var_572_bool = var_571_bool == 0; // 0x697 Not
	if(var_572_bool == 0) goto Label_1690; // 0x698 JumpB
	return 0; // 0x699 Return
	
Label_1690:
	var_573_bool = var_570_string == var_2_object; // 0x69a Eq
	if(var_573_bool == 0) goto Label_1693; // 0x69b JumpB
	return 0; // 0x69c Return
	
Label_1693:
	var_574_string = ""; var_575_bool = 0; // 0x69d PushV
	var_574_string = var_570_string; // 0x69e Mov
	var_576_string = ""; // 0x69f PushS
	var_577_bool = var_570_string == var_576_string; // 0x6a0 Eq
	if(var_577_bool == 0) goto Label_1700; // 0x6a1 JumpB
	var_575_bool = 0; // 0x6a2 MovB
	goto Label_1701; // 0x6a3 Jump
	
Label_1701:
	func_4580(var_574_string, var_575_bool); // 0x6a5 NEW_2
	var_2_object = var_570_string; // 0x6a7 TMov
	return 0; // 0x6a8 Return
	
Label_1700:
	var_575_bool = 1; // 0x6a4 MovB
}


func_4243(var_107_bool)
{
	var_107_bool = 1; // 0x1093 MovB
	return 0; // 0x1094 Return
}


func_4245()
{
	StopAnimation(); // 0x1095 Func
	StopGroup0(); // 0x1097 Func
	return 0; // 0x1099 Return
}


func_5012()
{
	var_113_object = Obj(); var_114_object = Obj(); // 0x1394 PushV
	var_115_int = 494; // 0x1395 PushI
	var_116_int = 1; // 0x1396 PushI
	var_117_int = 528061; // 0x1397 PushI
	CreateDiaryEntry(var_114_object, var_115_int, var_116_int, var_117_int); // 0x1398 Func
	var_118_bool = 0; var_119_object = Obj(); var_120_int = 0; // 0x139a PushV
	var_119_object = var_114_object; // 0x139b Mov
	var_120_int = 480; // 0x139c MovI
	func_5103(var_118_bool, var_119_object, var_120_int); // 0x139d NEW_2
	return 2; // 0x139f Return
}


func_4505(var_499_bool, var_500_object)
{
	var_501_bool = 0; var_502_object = Obj(); var_503_float = 0; // 0x119a PushV
	var_502_object = var_500_object; // 0x119b Mov
	var_503_float = 70; // 0x119c MovI
	func_4513(var_502_object, var_503_float); // 0x119d NEW_2
	var_499_bool = var_501_bool; // 0x119e Mov
	return 0; // 0x11a0 Return
}


func_4250(var_82_float)
{
	var_84_cvector = CVector(0,0,0); var_85_cvector = CVector(0,0,0); var_86_cvector = CVector(0,0,0); var_87_cvector = CVector(0,0,0); var_88_cvector = CVector(0,0,0); var_89_cvector = CVector(0,0,0); // 0x109a PushV
	GetPosition(var_87_cvector); // 0x109b Func
	GetPosition(var_88_cvector); // 0x109d ObjFunc
	var_89_cvector = var_88_cvector - var_87_cvector; // 0x109f Sub2
	var_82_float = var_89_cvector | var_89_cvector; // 0x10a0 Or2
	return 6; // 0x10a1 Return
}


func_2715(var_0_bool, var_1_object, var_2_object, var_3_object, var_973_object, var_974_object)
{
	var_0_bool = var_974_object; // 0xa9c TMov
	var_1_object = var_973_object; // 0xa9d TMov
	var_3_object = 0; // 0xa9e TMovB
	var_979_int = 1; // 0xa9f PushI
	if(var_979_int == 0) goto Label_2748; // 0xaa0 JumpB
	var_980_string = ""; // 0xaa1 PushV
	var_980_string = "Fear"; // 0xaa2 MovS
	func_2778(var_974_object, var_980_string); // 0xaa3 NEW_2
	var_988_int = 526681; // 0xaa5 PushI
	SetMessage(var_988_int); // 0xaa6 TObjFunc
	ClearReplies(); // 0xaa8 TObjFunc
	var_989_int = 526682; // 0xaaa PushI
	var_990_int = -1; // 0xaab PushI
	var_991_int = 27958; // 0xaac PushI
	AddReply(var_989_int, var_990_int, var_991_int); // 0xaad TObjFunc
	var_992_int = 526683; // 0xaaf PushI
	var_993_int = -1; // 0xab0 PushI
	var_994_int = 27959; // 0xab1 PushI
	AddReply(var_992_int, var_993_int, var_994_int); // 0xab2 TObjFunc
	var_995_int = 528752; // 0xab4 PushI
	var_996_int = -1; // 0xab5 PushI
	var_997_int = 30178; // 0xab6 PushI
	AddReply(var_995_int, var_996_int, var_997_int); // 0xab7 TObjFunc
	goto Label_2748; // 0xab9 Jump
	
Label_2748:
	var_998_bool = 0; // 0xabc PushV
	func_4735(var_998_bool); // 0xabd NEW_2
	if(var_998_bool == 0) goto Label_2763; // 0xabf JumpB
	
Label_2752:
	lshWaitForAnimEnd(); // 0xac0 Func
	var_999_object = var_3_object; // 0xac2 PushT
	if(var_999_object == 0) goto Label_2757; // 0xac3 JumpB
	goto Label_2762; // 0xac4 Jump
	
Label_2762:
	goto Label_2777; // 0xaca Jump
	
Label_2777:
	return 0; // 0xad9 Return
	
Label_2757:
	var_1000_string = ""; // 0xac5 PushV
	var_1000_string = var_2_object; // 0xac6 MovT
	func_4564(var_1000_string); // 0xac7 NEW_2
	goto Label_2752; // 0xac9 Jump
	
Label_2763:
	var_1001_string = "all"; // 0xacb PushS
	var_1002_string = "idle"; // 0xacc PushS
	PlayAnimation(var_1001_string, var_1002_string); // 0xacd Func
	
Label_2767:
	WaitForAnimEnd(); // 0xacf Func
	var_1003_object = var_3_object; // 0xad1 PushT
	if(var_1003_object == 0) goto Label_2772; // 0xad2 JumpB
	goto Label_2777; // 0xad3 Jump
	
Label_2772:
	var_1004_string = "all"; // 0xad4 PushS
	var_1005_string = "idle"; // 0xad5 PushS
	PlayAnimation(var_1004_string, var_1005_string); // 0xad6 Func
	goto Label_2767; // 0xad8 Jump
}


func_2202(var_0_bool, var_824_int, var_825_object)
{
	var_827_object = Obj(); var_828_bool = 0; var_829_int = 0; var_830_bool = 0; var_831_object = Obj(); var_832_bool = 0; var_833_int = 0; var_834_bool = 0; // 0x89a PushV
	var_0_bool = var_825_object; // 0x89b TMov
	var_835_bool = 0; var_836_object = Obj(); var_837_float = 0; // 0x89c PushV
	var_836_object = var_825_object; // 0x89d Mov
	var_837_float = 70.0; // 0x89e MovF
	func_4282(var_836_object, var_837_float); // 0x89f NEW_2
	var_838_bool = var_835_bool == 0; // 0x8a1 Not
	if(var_838_bool == 0) goto Label_2213; // 0x8a2 JumpB
	var_824_int = -2; // 0x8a3 MovI
	return 8; // 0x8a4 Return
	
Label_2213:
	CreateDialog(var_831_object); // 0x8a5 Func
	var_839_int = 0; // 0x8a7 PushV
	func_4729(var_839_int); // 0x8a8 NEW_2
	SetNPCName(var_839_int); // 0x8aa ObjFunc
	var_840_int = 0; // 0x8ac PushV
	func_4727(var_840_int); // 0x8ad NEW_2
	SetNPCDescription(var_840_int); // 0x8af ObjFunc
	var_841_string = ""; // 0x8b1 PushV
	func_4731(var_841_string); // 0x8b2 NEW_2
	SetPhoto(var_841_string); // 0x8b4 ObjFunc
	var_842_string = ""; // 0x8b6 PushV
	func_4733(var_842_string); // 0x8b7 NEW_2
	SetPhoto2(var_842_string); // 0x8b9 ObjFunc
	var_843_int = 0; // 0x8bb PushV
	func_5355(var_843_int); // 0x8bc NEW_2
	SetPlayerName(var_843_int); // 0x8be ObjFunc
	var_833_int = -1; // 0x8c0 MovI
	IsOverrideActive(var_832_bool); // 0x8c1 Func
	var_844_bool = var_832_bool; // 0x8c3 Push
	if(var_844_bool == 0) goto Label_2247; // 0x8c4 JumpB
	var_824_int = -2; // 0x8c5 MovI
	return 8; // 0x8c6 Return
	
Label_2247:
	DoDialog(var_831_object); // 0x8c7 Func
	var_845_bool = 0; var_846_object = Obj(); // 0x8c9 PushV
	var_847_object = Obj(); // 0x8ca PushV
	func_4645(var_847_object); // 0x8cb NEW_2
	var_846_object = var_847_object; // 0x8cc Mov
	func_4367(var_845_bool, var_846_object); // 0x8ce NEW_2
	var_848_object = Obj(); var_849_object = Obj(); // 0x8d0 PushV
	var_848_object = var_825_object; // 0x8d1 Mov
	var_849_object = var_831_object; // 0x8d2 Mov
	TaskCall(14); // 0x8d3 TaskCall
	func_2283(var_850_object, var_851_object, var_852_string, var_853_bool, var_848_object, var_849_object); // 0x8d4 NEW_2
	TaskReturn(); // 0x8d5 TaskReturn
	IsDialogEnd(var_834_bool); // 0x8d7 ObjFunc
	
Label_2265:
	var_881_bool = var_834_bool == 0; // 0x8d9 Not
	if(var_881_bool == 0) goto Label_2272; // 0x8da JumpB
	sync(); // 0x8db Func
	IsDialogEnd(var_834_bool); // 0x8dd ObjFunc
	goto Label_2265; // 0x8df Jump
	
Label_2272:
	var_882_object = Obj(); // 0x8e0 PushV
	var_882_object = var_825_object; // 0x8e1 Mov
	func_4350(); // 0x8e2 NEW_2
	StopDialog(var_831_object); // 0x8e4 Func
	GetReturnValue(var_833_int); // 0x8e6 ObjFunc
	var_824_int = var_833_int; // 0x8e8 Mov
	return 8; // 0x8e9 Return
}


func_3998(var_0_bool)
{
	var_69_bool = 0; // 0xf9e PushV
	func_4277(var_69_bool); // 0xf9f NEW_2
	var_72_bool = var_69_bool == 0; // 0xfa1 Not
	if(var_72_bool == 0) goto Label_4005; // 0xfa2 JumpB
	Hold(); // 0xfa3 Func
	
Label_4005:
	GetDirection(var_0_bool); // 0xfa5 Func
	
Label_4007:
	func_4174(); // 0xfa8 NEW_2
	goto Label_4007; // 0xfaa Jump
}


func_161(var_2_object, var_383_string)
{
	var_384_bool = 0; // 0xa2 PushV
	func_4735(var_384_bool); // 0xa3 NEW_2
	var_385_bool = var_384_bool == 0; // 0xa5 Not
	if(var_385_bool == 0) goto Label_168; // 0xa6 JumpB
	return 0; // 0xa7 Return
	
Label_168:
	var_386_bool = var_383_string == var_2_object; // 0xa8 Eq
	if(var_386_bool == 0) goto Label_171; // 0xa9 JumpB
	return 0; // 0xaa Return
	
Label_171:
	var_387_string = ""; var_388_bool = 0; // 0xab PushV
	var_387_string = var_383_string; // 0xac Mov
	var_389_string = ""; // 0xad PushS
	var_390_bool = var_383_string == var_389_string; // 0xae Eq
	if(var_390_bool == 0) goto Label_178; // 0xaf JumpB
	var_388_bool = 0; // 0xb0 MovB
	goto Label_179; // 0xb1 Jump
	
Label_179:
	func_4580(var_387_string, var_388_bool); // 0xb3 NEW_2
	var_2_object = var_383_string; // 0xb5 TMov
	return 0; // 0xb6 Return
	
Label_178:
	var_388_bool = 1; // 0xb2 MovB
}


func_4258(var_75_bool, var_76_cvector)
{
	var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0); var_79_bool = 0; var_80_cvector = CVector(0,0,0); var_81_cvector = CVector(0,0,0); var_82_bool = 0; // 0x10a2 PushV
	GetPosition(var_80_cvector); // 0x10a3 Func
	var_81_cvector = var_76_cvector - var_80_cvector; // 0x10a5 Sub2
	var_83_float = GetByIndex(var_81_cvector, 0); // 0x10a6 PushE
	var_84_float = GetByIndex(var_81_cvector, 2); // 0x10a7 PushE
	Rotate(var_83_float, var_84_float, var_82_bool); // 0x10a8 Func
	var_75_bool = var_82_bool; // 0x10aa Mov
	return 6; // 0x10ab Return
}


func_4513(var_501_bool, var_503_float)
{
	var_504_float = 0; var_505_cvector = CVector(0,0,0); var_506_cvector = CVector(0,0,0); var_507_cvector = CVector(0,0,0); var_508_cvector = CVector(0,0,0); var_509_cvector = CVector(0,0,0); var_510_cvector = CVector(0,0,0); var_511_bool = 0; var_512_float = 0; var_513_cvector = CVector(0,0,0); var_514_cvector = CVector(0,0,0); var_515_cvector = CVector(0,0,0); var_516_cvector = CVector(0,0,0); var_517_cvector = CVector(0,0,0); var_518_cvector = CVector(0,0,0); var_519_bool = 0; // 0x11a1 PushV
	GetPosition(var_513_cvector); // 0x11a2 ObjFunc
	GetEyesHeight(var_512_float); // 0x11a4 ObjFunc
	var_520_float = GetByIndex(var_513_cvector, 1); // 0x11a6 PushE
	var_520_float = var_520_float + var_512_float; // 0x11a7 Add2
	SetByIndex(var_513_cvector, 1) = var_520_float; // 0x11a8 PopE
	GetPosition(var_514_cvector); // 0x11a9 Func
	GetEyesHeight(var_512_float); // 0x11ab Func
	var_521_float = GetByIndex(var_514_cvector, 1); // 0x11ad PushE
	var_521_float = var_521_float + var_512_float; // 0x11ae Add2
	SetByIndex(var_514_cvector, 1) = var_521_float; // 0x11af PopE
	var_515_cvector = var_513_cvector - var_514_cvector; // 0x11b0 Sub2
	var_522_float = GetByIndex(var_515_cvector, 1); // 0x11b1 PushE
	var_522_float = 0; // 0x11b2 MovI
	SetByIndex(var_515_cvector, 1) = var_522_float; // 0x11b3 PopE
	var_523_int = var_515_cvector | var_515_cvector; // 0x11b4 Or
	var_524_float = sqrt(var_523_int); // 0x11b5 Sqrt
	var_515_cvector = var_515_cvector / var_515_cvector; // 0x11b6 Div2
	var_516_cvector = -var_515_cvector; // 0x11b7 Neg2
	var_525_float = var_515_cvector * var_503_float; // 0x11b8 Mult
	var_526_cvector = CVector(0.0, 10.0, 0.0); // 0x11b9 PushVec
	var_517_cvector = var_525_float - var_526_cvector; // 0x11ba Sub2
	var_518_cvector = var_514_cvector + var_517_cvector; // 0x11bb Add2
	IsOverrideActive(var_519_bool); // 0x11bc Func
	var_527_bool = var_519_bool; // 0x11be Push
	if(var_527_bool == 0) goto Label_4546; // 0x11bf JumpB
	var_501_bool = 0; // 0x11c0 MovB
	return 16; // 0x11c1 Return
	
Label_4546:
	StopWorld(); // 0x11c2 Func
	CameraTransit(var_518_cvector, var_516_cvector); // 0x11c4 Func
	var_528_float = GetByIndex(var_517_cvector, 0); // 0x11c6 PushE
	var_529_float = GetByIndex(var_517_cvector, 2); // 0x11c7 PushE
	Rotate(var_528_float, var_529_float); // 0x11c8 Func
	CameraWaitForPlayFinish(); // 0x11ca Func
	ResumeWorld(); // 0x11cc Func
	var_501_bool = 1; // 0x11ce MovB
	return 16; // 0x11cf Return
}


func_5025()
{
	var_88_object = Obj(); var_89_object = Obj(); // 0x13a1 PushV
	var_90_int = 493; // 0x13a2 PushI
	var_91_int = 1; // 0x13a3 PushI
	var_92_int = 528060; // 0x13a4 PushI
	CreateDiaryEntry(var_89_object, var_90_int, var_91_int, var_92_int); // 0x13a5 Func
	var_93_bool = 0; var_94_object = Obj(); var_95_int = 0; // 0x13a7 PushV
	var_94_object = var_89_object; // 0x13a8 Mov
	var_95_int = 480; // 0x13a9 MovI
	func_5103(var_93_bool, var_94_object, var_95_int); // 0x13aa NEW_2
	return 2; // 0x13ac Return
}


func_422(var_2_object, var_698_string)
{
	var_699_bool = 0; // 0x1a7 PushV
	func_4735(var_699_bool); // 0x1a8 NEW_2
	var_700_bool = var_699_bool == 0; // 0x1aa Not
	if(var_700_bool == 0) goto Label_429; // 0x1ab JumpB
	return 0; // 0x1ac Return
	
Label_429:
	var_701_bool = var_698_string == var_2_object; // 0x1ad Eq
	if(var_701_bool == 0) goto Label_432; // 0x1ae JumpB
	return 0; // 0x1af Return
	
Label_432:
	var_702_string = ""; var_703_bool = 0; // 0x1b0 PushV
	var_702_string = var_698_string; // 0x1b1 Mov
	var_704_string = ""; // 0x1b2 PushS
	var_705_bool = var_698_string == var_704_string; // 0x1b3 Eq
	if(var_705_bool == 0) goto Label_439; // 0x1b4 JumpB
	var_703_bool = 0; // 0x1b5 MovB
	goto Label_440; // 0x1b6 Jump
	
Label_440:
	func_4580(var_702_string, var_703_bool); // 0x1b8 NEW_2
	var_2_object = var_698_string; // 0x1ba TMov
	return 0; // 0x1bb Return
	
Label_439:
	var_703_bool = 1; // 0x1b7 MovB
}


func_4776()
{
	var_150_object = Obj(); var_151_object = Obj(); // 0x12a8 PushV
	var_152_string = "k4q01"; // 0x12a9 PushS
	var_153_int = 4; // 0x12aa PushI
	SetVariable(var_152_string, var_153_int); // 0x12ab Func
	var_154_object = Obj(); // 0x12ad PushV
	func_5131(var_154_object); // 0x12ae NEW_2
	var_151_object = var_154_object; // 0x12af Mov
	var_155_string = "k4q01GrifGotoBraga"; // 0x12b1 PushS
	var_156_string = "pt_map_warehouse_gangster"; // 0x12b2 PushS
	var_157_int = 1; // 0x12b3 PushI
	var_158_int = 530231; // 0x12b4 PushI
	var_159_float = 0; // 0x12b5 PushV
	func_4683(var_159_float); // 0x12b6 NEW_2
	AddMark(var_155_string, var_156_string, var_157_int, var_158_int, var_159_float); // 0x12b8 ObjFunc
	func_5064(); // 0x12bb NEW_2
	var_168_bool = 0; var_169_string = ""; var_170_string = ""; // 0x12bd PushV
	var_169_string = "quest_k4_01"; // 0x12be MovS
	var_170_string = "init_volnica"; // 0x12bf MovS
	func_4671(var_168_bool, var_169_string, var_170_string); // 0x12c0 NEW_2
	return 2; // 0x12c2 Return
}


func_4268(var_71_bool)
{
	var_73_cvector = CVector(0,0,0); var_74_cvector = CVector(0,0,0); // 0x10ac PushV
	GetPosition(var_74_cvector); // 0x10ad ObjFunc
	var_75_bool = 0; var_76_cvector = CVector(0,0,0); // 0x10af PushV
	var_76_cvector = var_74_cvector; // 0x10b0 Mov
	func_4258(var_75_bool, var_76_cvector); // 0x10b1 NEW_2
	var_71_bool = var_75_bool; // 0x10b2 Mov
	return 2; // 0x10b4 Return
}


func_4012(var_92_bool)
{
	var_93_object = Obj(); var_94_object = Obj(); // 0xfac PushV
	var_95_string = "player"; // 0xfad PushS
	FindActor(var_94_object, var_95_string); // 0xfae Func
	var_96_bool = var_94_object == 0; // 0xfb0 Not
	if(var_96_bool == 0) goto Label_4020; // 0xfb1 JumpB
	var_92_bool = 0; // 0xfb2 MovB
	return 2; // 0xfb3 Return
	
Label_4020:
	var_97_bool = 0; var_98_object = Obj(); // 0xfb4 PushV
	var_98_object = var_94_object; // 0xfb5 Mov
	func_4268(var_98_object); // 0xfb6 NEW_2
	var_92_bool = var_97_bool; // 0xfb7 Mov
	return 2; // 0xfb9 Return
}


func_5038()
{
	var_209_object = Obj(); var_210_object = Obj(); // 0x13ae PushV
	var_211_int = 786; // 0x13af PushI
	var_212_int = 1; // 0x13b0 PushI
	var_213_int = 542494; // 0x13b1 PushI
	CreateDiaryEntry(var_210_object, var_211_int, var_212_int, var_213_int); // 0x13b2 Func
	var_214_bool = 0; var_215_object = Obj(); var_216_int = 0; // 0x13b4 PushV
	var_215_object = var_210_object; // 0x13b5 Mov
	var_216_int = 368; // 0x13b6 MovI
	func_5103(var_214_bool, var_215_object, var_216_int); // 0x13b7 NEW_2
	return 2; // 0x13b9 Return
}


func_3764(var_0_bool, var_1_object, var_2_object, var_3_object, var_1238_object, var_1239_object)
{
	var_0_bool = var_1239_object; // 0xeb5 TMov
	var_1_object = var_1238_object; // 0xeb6 TMov
	var_3_object = 0; // 0xeb7 TMovB
	var_1244_int = 1; // 0xeb8 PushI
	if(var_1244_int == 0) goto Label_3797; // 0xeb9 JumpB
	var_1245_string = ""; // 0xeba PushV
	var_1245_string = "Neutral"; // 0xebb MovS
	func_3827(var_1239_object, var_1245_string); // 0xebc NEW_2
	var_1253_int = 539291; // 0xebe PushI
	SetMessage(var_1253_int); // 0xebf TObjFunc
	ClearReplies(); // 0xec1 TObjFunc
	var_1254_int = 542571; // 0xec3 PushI
	var_1255_int = 44971; // 0xec4 PushI
	var_1256_int = 44970; // 0xec5 PushI
	AddReply(var_1254_int, var_1255_int, var_1256_int); // 0xec6 TObjFunc
	var_1257_int = 539292; // 0xec8 PushI
	var_1258_int = -1; // 0xec9 PushI
	var_1259_int = 41235; // 0xeca PushI
	AddReply(var_1257_int, var_1258_int, var_1259_int); // 0xecb TObjFunc
	var_1260_int = 542570; // 0xecd PushI
	var_1261_int = -1; // 0xece PushI
	var_1262_int = 44969; // 0xecf PushI
	AddReply(var_1260_int, var_1261_int, var_1262_int); // 0xed0 TObjFunc
	goto Label_3797; // 0xed2 Jump
	
Label_3797:
	var_1263_bool = 0; // 0xed5 PushV
	func_4735(var_1263_bool); // 0xed6 NEW_2
	if(var_1263_bool == 0) goto Label_3812; // 0xed8 JumpB
	
Label_3801:
	lshWaitForAnimEnd(); // 0xed9 Func
	var_1264_object = var_3_object; // 0xedb PushT
	if(var_1264_object == 0) goto Label_3806; // 0xedc JumpB
	goto Label_3811; // 0xedd Jump
	
Label_3811:
	goto Label_3826; // 0xee3 Jump
	
Label_3826:
	return 0; // 0xef2 Return
	
Label_3806:
	var_1265_string = ""; // 0xede PushV
	var_1265_string = var_2_object; // 0xedf MovT
	func_4564(var_1265_string); // 0xee0 NEW_2
	goto Label_3801; // 0xee2 Jump
	
Label_3812:
	var_1266_string = "all"; // 0xee4 PushS
	var_1267_string = "idle"; // 0xee5 PushS
	PlayAnimation(var_1266_string, var_1267_string); // 0xee6 Func
	
Label_3816:
	WaitForAnimEnd(); // 0xee8 Func
	var_1268_object = var_3_object; // 0xeea PushT
	if(var_1268_object == 0) goto Label_3821; // 0xeeb JumpB
	goto Label_3826; // 0xeec Jump
	
Label_3821:
	var_1269_string = "all"; // 0xeed PushS
	var_1270_string = "idle"; // 0xeee PushS
	PlayAnimation(var_1269_string, var_1270_string); // 0xeef Func
	goto Label_3816; // 0xef1 Jump
}


func_4277(var_69_bool)
{
	var_70_bool = 0; var_71_bool = 0; // 0x10b5 PushV
	IsLoaded(var_71_bool); // 0x10b6 Func
	var_69_bool = var_71_bool; // 0x10b8 Mov
	return 2; // 0x10b9 Return
}


func_1462(var_2_object, var_469_string)
{
	var_470_bool = 0; // 0x5b7 PushV
	func_4735(var_470_bool); // 0x5b8 NEW_2
	var_471_bool = var_470_bool == 0; // 0x5ba Not
	if(var_471_bool == 0) goto Label_1469; // 0x5bb JumpB
	return 0; // 0x5bc Return
	
Label_1469:
	var_472_bool = var_469_string == var_2_object; // 0x5bd Eq
	if(var_472_bool == 0) goto Label_1472; // 0x5be JumpB
	return 0; // 0x5bf Return
	
Label_1472:
	var_473_string = ""; var_474_bool = 0; // 0x5c0 PushV
	var_473_string = var_469_string; // 0x5c1 Mov
	var_475_string = ""; // 0x5c2 PushS
	var_476_bool = var_469_string == var_475_string; // 0x5c3 Eq
	if(var_476_bool == 0) goto Label_1479; // 0x5c4 JumpB
	var_474_bool = 0; // 0x5c5 MovB
	goto Label_1480; // 0x5c6 Jump
	
Label_1480:
	func_4580(var_473_string, var_474_bool); // 0x5c8 NEW_2
	var_2_object = var_469_string; // 0x5ca TMov
	return 0; // 0x5cb Return
	
Label_1479:
	var_474_bool = 1; // 0x5c7 MovB
}


func_2999(var_2_object, var_1044_string)
{
	var_1045_bool = 0; // 0xbb8 PushV
	func_4735(var_1045_bool); // 0xbb9 NEW_2
	var_1046_bool = var_1045_bool == 0; // 0xbbb Not
	if(var_1046_bool == 0) goto Label_3006; // 0xbbc JumpB
	return 0; // 0xbbd Return
	
Label_3006:
	var_1047_bool = var_1044_string == var_2_object; // 0xbbe Eq
	if(var_1047_bool == 0) goto Label_3009; // 0xbbf JumpB
	return 0; // 0xbc0 Return
	
Label_3009:
	var_1048_string = ""; var_1049_bool = 0; // 0xbc1 PushV
	var_1048_string = var_1044_string; // 0xbc2 Mov
	var_1050_string = ""; // 0xbc3 PushS
	var_1051_bool = var_1044_string == var_1050_string; // 0xbc4 Eq
	if(var_1051_bool == 0) goto Label_3016; // 0xbc5 JumpB
	var_1049_bool = 0; // 0xbc6 MovB
	goto Label_3017; // 0xbc7 Jump
	
Label_3017:
	func_4580(var_1048_string, var_1049_bool); // 0xbc9 NEW_2
	var_2_object = var_1044_string; // 0xbcb TMov
	return 0; // 0xbcc Return
	
Label_3016:
	var_1049_bool = 1; // 0xbc8 MovB
}


func_4282(var_226_bool, var_228_float)
{
	var_229_float = 0; var_230_cvector = CVector(0,0,0); var_231_cvector = CVector(0,0,0); var_232_cvector = CVector(0,0,0); var_233_cvector = CVector(0,0,0); var_234_cvector = CVector(0,0,0); var_235_cvector = CVector(0,0,0); var_236_bool = 0; var_237_bool = 0; var_238_float = 0; var_239_cvector = CVector(0,0,0); var_240_cvector = CVector(0,0,0); var_241_cvector = CVector(0,0,0); var_242_cvector = CVector(0,0,0); var_243_cvector = CVector(0,0,0); var_244_cvector = CVector(0,0,0); var_245_bool = 0; var_246_bool = 0; // 0x10ba PushV
	GetPosition(var_239_cvector); // 0x10bb ObjFunc
	GetEyesHeight(var_238_float); // 0x10bd ObjFunc
	var_247_float = GetByIndex(var_239_cvector, 1); // 0x10bf PushE
	var_247_float = var_247_float + var_238_float; // 0x10c0 Add2
	SetByIndex(var_239_cvector, 1) = var_247_float; // 0x10c1 PopE
	GetPosition(var_240_cvector); // 0x10c2 Func
	GetEyesHeight(var_238_float); // 0x10c4 Func
	var_248_float = GetByIndex(var_240_cvector, 1); // 0x10c6 PushE
	var_248_float = var_248_float + var_238_float; // 0x10c7 Add2
	SetByIndex(var_240_cvector, 1) = var_248_float; // 0x10c8 PopE
	var_241_cvector = var_239_cvector - var_240_cvector; // 0x10c9 Sub2
	var_249_float = GetByIndex(var_241_cvector, 1); // 0x10ca PushE
	var_249_float = 0; // 0x10cb MovI
	SetByIndex(var_241_cvector, 1) = var_249_float; // 0x10cc PopE
	var_250_int = var_241_cvector | var_241_cvector; // 0x10cd Or
	var_251_float = sqrt(var_250_int); // 0x10ce Sqrt
	var_241_cvector = var_241_cvector / var_241_cvector; // 0x10cf Div2
	var_242_cvector = -var_241_cvector; // 0x10d0 Neg2
	var_252_float = var_241_cvector * var_228_float; // 0x10d1 Mult
	var_253_cvector = CVector(0,0,0); var_254_cvector = CVector(0,0,0); // 0x10d2 PushV
	var_255_cvector = CVector(0.0, 1.0, 0.0); // 0x10d3 PushVec
	var_254_cvector = var_242_cvector ^ var_255_cvector; // 0x10d4 Xor2
	func_4651(var_253_cvector, var_254_cvector); // 0x10d5 NEW_2
	var_261_int = 25; // 0x10d7 PushI
	var_262_float = var_253_cvector * var_261_int; // 0x10d8 Mult
	var_263_int = var_252_float + var_262_float; // 0x10d9 Add
	var_264_cvector = CVector(0.0, 10.0, 0.0); // 0x10da PushVec
	var_243_cvector = var_263_int - var_264_cvector; // 0x10db Sub2
	var_244_cvector = var_240_cvector + var_243_cvector; // 0x10dc Add2
	IsOverrideActive(var_245_bool); // 0x10dd Func
	var_265_bool = var_245_bool; // 0x10df Push
	if(var_265_bool == 0) goto Label_4323; // 0x10e0 JumpB
	var_226_bool = 0; // 0x10e1 MovB
	return 18; // 0x10e2 Return
	
Label_4323:
	StopWorld(); // 0x10e3 Func
	CameraTransit(var_244_cvector, var_242_cvector); // 0x10e5 Func
	var_266_float = GetByIndex(var_243_cvector, 0); // 0x10e7 PushE
	var_267_float = GetByIndex(var_243_cvector, 2); // 0x10e8 PushE
	Rotate(var_266_float, var_267_float); // 0x10e9 Func
	var_268_bool = 0; // 0x10eb PushV
	func_4735(var_268_bool); // 0x10ec NEW_2
	if(var_268_bool == 0) goto Label_4336; // 0x10ee JumpB
	goto Label_4344; // 0x10ef Jump
	
Label_4344:
	CameraWaitForPlayFinish(); // 0x10f8 Func
	ResumeWorld(); // 0x10fa Func
	var_226_bool = 1; // 0x10fc MovB
	return 18; // 0x10fd Return
	
Label_4336:
	var_269_string = "head"; // 0x10f0 PushS
	HasAnimationTrack(var_246_bool, var_269_string); // 0x10f1 Func
	var_270_bool = var_246_bool; // 0x10f3 Push
	if(var_270_bool == 0) goto Label_4344; // 0x10f4 JumpB
	var_271_string = "head"; // 0x10f5 PushS
	LookAsyncCamera(var_271_string); // 0x10f6 Func
}


func_4027(var_0_bool)
{
	var_144_float = GetByIndex(var_0_bool, 0); // 0xfbb PushE
	var_145_float = GetByIndex(var_0_bool, 2); // 0xfbc PushE
	RotateAsync(var_144_float, var_145_float); // 0xfbd Func
	return 0; // 0xfbf Return
}


func_5051()
{
	var_191_object = Obj(); var_192_object = Obj(); // 0x13bb PushV
	var_193_int = 377; // 0x13bc PushI
	var_194_int = 1; // 0x13bd PushI
	var_195_int = 525734; // 0x13be PushI
	CreateDiaryEntry(var_192_object, var_193_int, var_194_int, var_195_int); // 0x13bf Func
	var_196_bool = 0; var_197_object = Obj(); var_198_int = 0; // 0x13c1 PushV
	var_197_object = var_192_object; // 0x13c2 Mov
	var_198_int = 368; // 0x13c3 MovI
	func_5103(var_196_bool, var_197_object, var_198_int); // 0x13c4 NEW_2
	return 2; // 0x13c6 Return
}


func_1981(var_0_bool, var_760_int, var_761_object)
{
	var_763_object = Obj(); var_764_bool = 0; var_765_int = 0; var_766_bool = 0; var_767_object = Obj(); var_768_bool = 0; var_769_int = 0; var_770_bool = 0; // 0x7bd PushV
	var_0_bool = var_761_object; // 0x7be TMov
	var_771_bool = 0; var_772_object = Obj(); var_773_float = 0; // 0x7bf PushV
	var_772_object = var_761_object; // 0x7c0 Mov
	var_773_float = 70.0; // 0x7c1 MovF
	func_4282(var_772_object, var_773_float); // 0x7c2 NEW_2
	var_774_bool = var_771_bool == 0; // 0x7c4 Not
	if(var_774_bool == 0) goto Label_1992; // 0x7c5 JumpB
	var_760_int = -2; // 0x7c6 MovI
	return 8; // 0x7c7 Return
	
Label_1992:
	CreateDialog(var_767_object); // 0x7c8 Func
	var_775_int = 0; // 0x7ca PushV
	func_4729(var_775_int); // 0x7cb NEW_2
	SetNPCName(var_775_int); // 0x7cd ObjFunc
	var_776_int = 0; // 0x7cf PushV
	func_4727(var_776_int); // 0x7d0 NEW_2
	SetNPCDescription(var_776_int); // 0x7d2 ObjFunc
	var_777_string = ""; // 0x7d4 PushV
	func_4731(var_777_string); // 0x7d5 NEW_2
	SetPhoto(var_777_string); // 0x7d7 ObjFunc
	var_778_string = ""; // 0x7d9 PushV
	func_4733(var_778_string); // 0x7da NEW_2
	SetPhoto2(var_778_string); // 0x7dc ObjFunc
	var_779_int = 0; // 0x7de PushV
	func_5355(var_779_int); // 0x7df NEW_2
	SetPlayerName(var_779_int); // 0x7e1 ObjFunc
	var_769_int = -1; // 0x7e3 MovI
	IsOverrideActive(var_768_bool); // 0x7e4 Func
	var_780_bool = var_768_bool; // 0x7e6 Push
	if(var_780_bool == 0) goto Label_2026; // 0x7e7 JumpB
	var_760_int = -2; // 0x7e8 MovI
	return 8; // 0x7e9 Return
	
Label_2026:
	DoDialog(var_767_object); // 0x7ea Func
	var_781_bool = 0; var_782_object = Obj(); // 0x7ec PushV
	var_783_object = Obj(); // 0x7ed PushV
	func_4645(var_783_object); // 0x7ee NEW_2
	var_782_object = var_783_object; // 0x7ef Mov
	func_4367(var_781_bool, var_782_object); // 0x7f1 NEW_2
	var_784_object = Obj(); var_785_object = Obj(); // 0x7f3 PushV
	var_784_object = var_761_object; // 0x7f4 Mov
	var_785_object = var_767_object; // 0x7f5 Mov
	TaskCall(12); // 0x7f6 TaskCall
	func_2062(var_786_object, var_787_object, var_788_string, var_789_bool, var_784_object, var_785_object); // 0x7f7 NEW_2
	TaskReturn(); // 0x7f8 TaskReturn
	IsDialogEnd(var_770_bool); // 0x7fa ObjFunc
	
Label_2044:
	var_817_bool = var_770_bool == 0; // 0x7fc Not
	if(var_817_bool == 0) goto Label_2051; // 0x7fd JumpB
	sync(); // 0x7fe Func
	IsDialogEnd(var_770_bool); // 0x800 ObjFunc
	goto Label_2044; // 0x802 Jump
	
Label_2051:
	var_818_object = Obj(); // 0x803 PushV
	var_818_object = var_761_object; // 0x804 Mov
	func_4350(); // 0x805 NEW_2
	StopDialog(var_767_object); // 0x807 Func
	GetReturnValue(var_769_int); // 0x809 ObjFunc
	var_760_int = var_769_int; // 0x80b Mov
	return 8; // 0x80c Return
}


func_4032(var_75_bool)
{
	var_76_object = Obj(); var_77_bool = 0; var_78_object = Obj(); var_79_bool = 0; // 0xfc0 PushV
	var_80_string = "player"; // 0xfc1 PushS
	FindActor(var_78_object, var_80_string); // 0xfc2 Func
	var_81_bool = var_78_object == 0; // 0xfc4 Not
	if(var_81_bool == 0) goto Label_4040; // 0xfc5 JumpB
	var_75_bool = 0; // 0xfc6 MovB
	return 4; // 0xfc7 Return
	
Label_4040:
	var_82_float = 0; var_83_object = Obj(); // 0xfc8 PushV
	var_83_object = var_78_object; // 0xfc9 Mov
	func_4250(var_83_object); // 0xfca NEW_2
	var_90_float = 90000.0; // 0xfcc PushF
	var_91_bool = var_82_float > var_90_float; // 0xfcd GT
	if(var_91_bool == 0) goto Label_4049; // 0xfce JumpB
	var_75_bool = 0; // 0xfcf MovB
	return 4; // 0xfd0 Return
	
Label_4049:
	CanSee(var_79_bool, var_78_object); // 0xfd1 Func
	var_75_bool = var_79_bool; // 0xfd3 Mov
	return 4; // 0xfd4 Return
}


func_4804()
{
	var_189_string = "k4q01"; // 0x12c5 PushS
	var_190_int = 6; // 0x12c6 PushI
	SetVariable(var_189_string, var_190_int); // 0x12c7 Func
	func_5051(); // 0x12ca NEW_2
	return 0; // 0x12cc Return
}


func_2504(var_0_bool, var_1_object, var_2_object, var_3_object, var_912_object, var_913_object)
{
	var_0_bool = var_913_object; // 0x9c9 TMov
	var_1_object = var_912_object; // 0x9ca TMov
	var_3_object = 0; // 0x9cb TMovB
	var_918_int = 1; // 0x9cc PushI
	if(var_918_int == 0) goto Label_2532; // 0x9cd JumpB
	var_919_string = ""; // 0x9ce PushV
	var_919_string = "Neutral"; // 0x9cf MovS
	func_2562(var_913_object, var_919_string); // 0x9d0 NEW_2
	var_927_int = 526677; // 0x9d2 PushI
	SetMessage(var_927_int); // 0x9d3 TObjFunc
	ClearReplies(); // 0x9d5 TObjFunc
	var_928_int = 526678; // 0x9d7 PushI
	var_929_int = -1; // 0x9d8 PushI
	var_930_int = 27954; // 0x9d9 PushI
	AddReply(var_928_int, var_929_int, var_930_int); // 0x9da TObjFunc
	var_931_int = 526679; // 0x9dc PushI
	var_932_int = -1; // 0x9dd PushI
	var_933_int = 27955; // 0x9de PushI
	AddReply(var_931_int, var_932_int, var_933_int); // 0x9df TObjFunc
	goto Label_2532; // 0x9e1 Jump
	
Label_2532:
	var_934_bool = 0; // 0x9e4 PushV
	func_4735(var_934_bool); // 0x9e5 NEW_2
	if(var_934_bool == 0) goto Label_2547; // 0x9e7 JumpB
	
Label_2536:
	lshWaitForAnimEnd(); // 0x9e8 Func
	var_935_object = var_3_object; // 0x9ea PushT
	if(var_935_object == 0) goto Label_2541; // 0x9eb JumpB
	goto Label_2546; // 0x9ec Jump
	
Label_2546:
	goto Label_2561; // 0x9f2 Jump
	
Label_2561:
	return 0; // 0xa01 Return
	
Label_2541:
	var_936_string = ""; // 0x9ed PushV
	var_936_string = var_2_object; // 0x9ee MovT
	func_4564(var_936_string); // 0x9ef NEW_2
	goto Label_2536; // 0x9f1 Jump
	
Label_2547:
	var_937_string = "all"; // 0x9f3 PushS
	var_938_string = "idle"; // 0x9f4 PushS
	PlayAnimation(var_937_string, var_938_string); // 0x9f5 Func
	
Label_2551:
	WaitForAnimEnd(); // 0x9f7 Func
	var_939_object = var_3_object; // 0x9f9 PushT
	if(var_939_object == 0) goto Label_2556; // 0x9fa JumpB
	goto Label_2561; // 0x9fb Jump
	
Label_2556:
	var_940_string = "all"; // 0x9fc PushS
	var_941_string = "idle"; // 0x9fd PushS
	PlayAnimation(var_940_string, var_941_string); // 0x9fe Func
	goto Label_2551; // 0xa00 Jump
}


func_5064()
{
	var_160_object = Obj(); var_161_object = Obj(); // 0x13c8 PushV
	var_162_int = 372; // 0x13c9 PushI
	var_163_int = 1; // 0x13ca PushI
	var_164_int = 525729; // 0x13cb PushI
	CreateDiaryEntry(var_161_object, var_162_int, var_163_int, var_164_int); // 0x13cc Func
	var_165_bool = 0; var_166_object = Obj(); var_167_int = 0; // 0x13ce PushV
	var_166_object = var_161_object; // 0x13cf Mov
	var_167_int = 368; // 0x13d0 MovI
	func_5103(var_165_bool, var_166_object, var_167_int); // 0x13d1 NEW_2
	return 2; // 0x13d3 Return
}


func_4813()
{
	var_81_int = 0; var_82_int = 0; // 0x12cd PushV
	var_83_string = "k11q01SoulCount"; // 0x12ce PushS
	GetVariable(var_83_string, var_82_int); // 0x12cf Func
	var_84_int = 1; // 0x12d1 PushI
	var_82_int = var_82_int + var_84_int; // 0x12d2 Add2
	var_85_string = "k11q01SoulCount"; // 0x12d3 PushS
	SetVariable(var_85_string, var_82_int); // 0x12d4 Func
	var_86_int = 2; // 0x12d6 PushI
	var_87_bool = var_82_int == var_86_int; // 0x12d7 Eq
	if(var_87_bool == 0) goto Label_4829; // 0x12d8 JumpB
	func_5025(); // 0x12da NEW_2
	goto Label_4863; // 0x12dc Jump
	
Label_4863:
	return 2; // 0x12ff Return
	
Label_4829:
	var_111_int = 3; // 0x12dd PushI
	var_112_bool = var_82_int == var_111_int; // 0x12de Eq
	if(var_112_bool == 0) goto Label_4836; // 0x12df JumpB
	func_5012(); // 0x12e1 NEW_2
	goto Label_4863; // 0x12e3 Jump
	
Label_4836:
	var_121_int = 4; // 0x12e4 PushI
	var_122_bool = var_82_int == var_121_int; // 0x12e5 Eq
	if(var_122_bool == 0) goto Label_4843; // 0x12e6 JumpB
	func_4999(); // 0x12e8 NEW_2
	goto Label_4863; // 0x12ea Jump
	
Label_4843:
	var_131_int = 5; // 0x12eb PushI
	var_132_bool = var_82_int == var_131_int; // 0x12ec Eq
	if(var_132_bool == 0) goto Label_4850; // 0x12ed JumpB
	func_4986(); // 0x12ef NEW_2
	goto Label_4863; // 0x12f1 Jump
	
Label_4850:
	var_141_int = 6; // 0x12f2 PushI
	var_142_bool = var_82_int == var_141_int; // 0x12f3 Eq
	if(var_142_bool == 0) goto Label_4857; // 0x12f4 JumpB
	func_4973(); // 0x12f6 NEW_2
	goto Label_4863; // 0x12f8 Jump
	
Label_4857:
	var_151_int = 7; // 0x12f9 PushI
	var_152_bool = var_82_int == var_151_int; // 0x12fa Eq
	if(var_152_bool == 0) goto Label_4863; // 0x12fb JumpB
	func_4960(); // 0x12fd NEW_2
}


func_4560()
{
	CameraSwitchToNormal(); // 0x11d1 Func
	return 0; // 0x11d3 Return
}


func_4564(var_409_string)
{
	var_410_bool = 0; var_411_float = 0; var_412_float = 0; var_413_bool = 0; var_414_float = 0; var_415_float = 0; // 0x11d4 PushV
	lshHasAnimation(var_413_bool, var_409_string); // 0x11d5 Func
	var_416_bool = var_413_bool; // 0x11d7 Push
	if(var_416_bool == 0) goto Label_4575; // 0x11d8 JumpB
	lshGetAnimTimes(var_409_string, var_414_float, var_415_float); // 0x11d9 Func
	var_417_bool = 0; // 0x11db PushB
	lshPlayAnimation(var_414_float, var_415_float, var_417_bool); // 0x11dc Func
	goto Label_4579; // 0x11de Jump
	
Label_4579:
	return 6; // 0x11e3 Return
	
Label_4575:
	var_418_string = "Can't find lsh animation : "; // 0x11df PushS
	var_419_int = var_418_string + var_409_string; // 0x11e0 Add
	Trace(var_419_int); // 0x11e1 Func
}


func_5077()
{
	var_93_object = Obj(); var_94_object = Obj(); // 0x13d5 PushV
	var_95_int = 370; // 0x13d6 PushI
	var_96_int = 1; // 0x13d7 PushI
	var_97_int = 525727; // 0x13d8 PushI
	CreateDiaryEntry(var_94_object, var_95_int, var_96_int, var_97_int); // 0x13d9 Func
	var_98_bool = 0; var_99_object = Obj(); var_100_int = 0; // 0x13db PushV
	var_99_object = var_94_object; // 0x13dc Mov
	var_100_int = 368; // 0x13dd MovI
	func_5103(var_98_bool, var_99_object, var_100_int); // 0x13de NEW_2
	return 2; // 0x13e0 Return
}


func_4054()
{
	var_1275_float = 0; var_1276_float = 0; // 0xfd6 PushV
	var_1277_int = 8; // 0xfd7 PushI
	var_1278_int = 16; // 0xfd8 PushI
	rand(var_1276_float, var_1277_int, var_1278_int); // 0xfd9 Func
	var_1279_int = 10; // 0xfdb PushI
	SetTimer(var_1279_int, var_1276_float); // 0xfdc Func
	return 2; // 0xfde Return
}


func_3287(var_0_bool, var_1138_int, var_1139_object)
{
	var_1141_object = Obj(); var_1142_bool = 0; var_1143_int = 0; var_1144_bool = 0; var_1145_object = Obj(); var_1146_bool = 0; var_1147_int = 0; var_1148_bool = 0; // 0xcd7 PushV
	var_0_bool = var_1139_object; // 0xcd8 TMov
	var_1149_bool = 0; var_1150_object = Obj(); var_1151_float = 0; // 0xcd9 PushV
	var_1150_object = var_1139_object; // 0xcda Mov
	var_1151_float = 70.0; // 0xcdb MovF
	func_4282(var_1150_object, var_1151_float); // 0xcdc NEW_2
	var_1152_bool = var_1149_bool == 0; // 0xcde Not
	if(var_1152_bool == 0) goto Label_3298; // 0xcdf JumpB
	var_1138_int = -2; // 0xce0 MovI
	return 8; // 0xce1 Return
	
Label_3298:
	CreateDialog(var_1145_object); // 0xce2 Func
	var_1153_int = 0; // 0xce4 PushV
	func_4729(var_1153_int); // 0xce5 NEW_2
	SetNPCName(var_1153_int); // 0xce7 ObjFunc
	var_1154_int = 0; // 0xce9 PushV
	func_4727(var_1154_int); // 0xcea NEW_2
	SetNPCDescription(var_1154_int); // 0xcec ObjFunc
	var_1155_string = ""; // 0xcee PushV
	func_4731(var_1155_string); // 0xcef NEW_2
	SetPhoto(var_1155_string); // 0xcf1 ObjFunc
	var_1156_string = ""; // 0xcf3 PushV
	func_4733(var_1156_string); // 0xcf4 NEW_2
	SetPhoto2(var_1156_string); // 0xcf6 ObjFunc
	var_1157_int = 0; // 0xcf8 PushV
	func_5355(var_1157_int); // 0xcf9 NEW_2
	SetPlayerName(var_1157_int); // 0xcfb ObjFunc
	var_1147_int = -1; // 0xcfd MovI
	IsOverrideActive(var_1146_bool); // 0xcfe Func
	var_1158_bool = var_1146_bool; // 0xd00 Push
	if(var_1158_bool == 0) goto Label_3332; // 0xd01 JumpB
	var_1138_int = -2; // 0xd02 MovI
	return 8; // 0xd03 Return
	
Label_3332:
	DoDialog(var_1145_object); // 0xd04 Func
	var_1159_bool = 0; var_1160_object = Obj(); // 0xd06 PushV
	var_1161_object = Obj(); // 0xd07 PushV
	func_4645(var_1161_object); // 0xd08 NEW_2
	var_1160_object = var_1161_object; // 0xd09 Mov
	func_4367(var_1159_bool, var_1160_object); // 0xd0b NEW_2
	var_1162_object = Obj(); var_1163_object = Obj(); // 0xd0d PushV
	var_1162_object = var_1139_object; // 0xd0e Mov
	var_1163_object = var_1145_object; // 0xd0f Mov
	TaskCall(24); // 0xd10 TaskCall
	func_3368(var_1164_object, var_1165_object, var_1166_string, var_1167_bool, var_1162_object, var_1163_object); // 0xd11 NEW_2
	TaskReturn(); // 0xd12 TaskReturn
	IsDialogEnd(var_1148_bool); // 0xd14 ObjFunc
	
Label_3350:
	var_1208_bool = var_1148_bool == 0; // 0xd16 Not
	if(var_1208_bool == 0) goto Label_3357; // 0xd17 JumpB
	sync(); // 0xd18 Func
	IsDialogEnd(var_1148_bool); // 0xd1a ObjFunc
	goto Label_3350; // 0xd1c Jump
	
Label_3357:
	var_1209_object = Obj(); // 0xd1d PushV
	var_1209_object = var_1139_object; // 0xd1e Mov
	func_4350(); // 0xd1f NEW_2
	StopDialog(var_1145_object); // 0xd21 Func
	GetReturnValue(var_1147_int); // 0xd23 ObjFunc
	var_1138_int = var_1147_int; // 0xd25 Mov
	return 8; // 0xd26 Return
}


func_2778(var_2_object, var_980_string)
{
	var_981_bool = 0; // 0xadb PushV
	func_4735(var_981_bool); // 0xadc NEW_2
	var_982_bool = var_981_bool == 0; // 0xade Not
	if(var_982_bool == 0) goto Label_2785; // 0xadf JumpB
	return 0; // 0xae0 Return
	
Label_2785:
	var_983_bool = var_980_string == var_2_object; // 0xae1 Eq
	if(var_983_bool == 0) goto Label_2788; // 0xae2 JumpB
	return 0; // 0xae3 Return
	
Label_2788:
	var_984_string = ""; var_985_bool = 0; // 0xae4 PushV
	var_984_string = var_980_string; // 0xae5 Mov
	var_986_string = ""; // 0xae6 PushS
	var_987_bool = var_980_string == var_986_string; // 0xae7 Eq
	if(var_987_bool == 0) goto Label_2795; // 0xae8 JumpB
	var_985_bool = 0; // 0xae9 MovB
	goto Label_2796; // 0xaea Jump
	
Label_2796:
	func_4580(var_984_string, var_985_bool); // 0xaec NEW_2
	var_2_object = var_980_string; // 0xaee TMov
	return 0; // 0xaef Return
	
Label_2795:
	var_985_bool = 1; // 0xaeb MovB
}


func_4063()
{
	var_1274_int = 10; // 0xfdf PushI
	KillTimer(var_1274_int); // 0xfe0 Func
	return 0; // 0xfe2 Return
}


func_1760(var_0_bool, var_603_int, var_604_object)
{
	var_606_object = Obj(); var_607_bool = 0; var_608_int = 0; var_609_bool = 0; var_610_object = Obj(); var_611_bool = 0; var_612_int = 0; var_613_bool = 0; // 0x6e0 PushV
	var_0_bool = var_604_object; // 0x6e1 TMov
	var_614_bool = 0; var_615_object = Obj(); var_616_float = 0; // 0x6e2 PushV
	var_615_object = var_604_object; // 0x6e3 Mov
	var_616_float = 70.0; // 0x6e4 MovF
	func_4282(var_615_object, var_616_float); // 0x6e5 NEW_2
	var_617_bool = var_614_bool == 0; // 0x6e7 Not
	if(var_617_bool == 0) goto Label_1771; // 0x6e8 JumpB
	var_603_int = -2; // 0x6e9 MovI
	return 8; // 0x6ea Return
	
Label_1771:
	CreateDialog(var_610_object); // 0x6eb Func
	var_618_int = 0; // 0x6ed PushV
	func_4729(var_618_int); // 0x6ee NEW_2
	SetNPCName(var_618_int); // 0x6f0 ObjFunc
	var_619_int = 0; // 0x6f2 PushV
	func_4727(var_619_int); // 0x6f3 NEW_2
	SetNPCDescription(var_619_int); // 0x6f5 ObjFunc
	var_620_string = ""; // 0x6f7 PushV
	func_4731(var_620_string); // 0x6f8 NEW_2
	SetPhoto(var_620_string); // 0x6fa ObjFunc
	var_621_string = ""; // 0x6fc PushV
	func_4733(var_621_string); // 0x6fd NEW_2
	SetPhoto2(var_621_string); // 0x6ff ObjFunc
	var_622_int = 0; // 0x701 PushV
	func_5355(var_622_int); // 0x702 NEW_2
	SetPlayerName(var_622_int); // 0x704 ObjFunc
	var_612_int = -1; // 0x706 MovI
	IsOverrideActive(var_611_bool); // 0x707 Func
	var_623_bool = var_611_bool; // 0x709 Push
	if(var_623_bool == 0) goto Label_1805; // 0x70a JumpB
	var_603_int = -2; // 0x70b MovI
	return 8; // 0x70c Return
	
Label_1805:
	DoDialog(var_610_object); // 0x70d Func
	var_624_bool = 0; var_625_object = Obj(); // 0x70f PushV
	var_626_object = Obj(); // 0x710 PushV
	func_4645(var_626_object); // 0x711 NEW_2
	var_625_object = var_626_object; // 0x712 Mov
	func_4367(var_624_bool, var_625_object); // 0x714 NEW_2
	var_627_object = Obj(); var_628_object = Obj(); // 0x716 PushV
	var_627_object = var_604_object; // 0x717 Mov
	var_628_object = var_610_object; // 0x718 Mov
	TaskCall(10); // 0x719 TaskCall
	func_1841(var_629_object, var_630_object, var_631_string, var_632_bool, var_627_object, var_628_object); // 0x71a NEW_2
	TaskReturn(); // 0x71b TaskReturn
	IsDialogEnd(var_613_bool); // 0x71d ObjFunc
	
Label_1823:
	var_660_bool = var_613_bool == 0; // 0x71f Not
	if(var_660_bool == 0) goto Label_1830; // 0x720 JumpB
	sync(); // 0x721 Func
	IsDialogEnd(var_613_bool); // 0x723 ObjFunc
	goto Label_1823; // 0x725 Jump
	
Label_1830:
	var_661_object = Obj(); // 0x726 PushV
	var_661_object = var_604_object; // 0x727 Mov
	func_4350(); // 0x728 NEW_2
	StopDialog(var_610_object); // 0x72a Func
	GetReturnValue(var_612_int); // 0x72c ObjFunc
	var_603_int = var_612_int; // 0x72e Mov
	return 8; // 0x72f Return
}


func_5090(var_102_object)
{
	var_103_object = Obj(); var_104_object = Obj(); // 0x13e2 PushV
	GetDiaryRoot(var_104_object); // 0x13e3 Func
	var_105_bool = var_104_object == 0; // 0x13e5 Not
	if(var_105_bool == 0) goto Label_5100; // 0x13e6 JumpB
	var_106_string = "Can't retrieve diary root"; // 0x13e7 PushS
	Trace(var_106_string); // 0x13e8 Func
	var_102_object = 0; // 0x13ea MovB
	return 2; // 0x13eb Return
	
Label_5100:
	var_102_object = var_104_object; // 0x13ec Mov
	return 2; // 0x13ed Return
}


func_4580(var_387_string, var_388_bool)
{
	var_391_bool = 0; var_392_float = 0; var_393_float = 0; var_394_bool = 0; var_395_float = 0; var_396_float = 0; // 0x11e4 PushV
	lshHasAnimation(var_394_bool, var_387_string); // 0x11e5 Func
	var_397_bool = var_394_bool; // 0x11e7 Push
	if(var_397_bool == 0) goto Label_4590; // 0x11e8 JumpB
	lshGetAnimTimes(var_387_string, var_395_float, var_396_float); // 0x11e9 Func
	lshPlayAnimation(var_395_float, var_396_float, var_388_bool); // 0x11eb Func
	goto Label_4594; // 0x11ed Jump
	
Label_4594:
	return 6; // 0x11f2 Return
	
Label_4590:
	var_398_string = "Can't find lsh animation : "; // 0x11ee PushS
	var_399_int = var_398_string + var_387_string; // 0x11ef Add
	Trace(var_399_int); // 0x11f0 Func
}


func_5350(var_104_int, var_105_string)
{
	var_106_int = 0; var_107_int = 0; // 0x14e6 PushV
	GetInvItemByName(var_107_int, var_105_string); // 0x14e7 Func
	var_104_int = var_107_int; // 0x14e9 Mov
	return 2; // 0x14ea Return
}


func_5355(var_277_int)
{
	var_278_int = 0; var_279_int = 0; // 0x14eb PushV
	var_280_string = "branch"; // 0x14ec PushS
	GetVariable(var_280_string, var_279_int); // 0x14ed Func
	var_281_int = 0; // 0x14ef PushI
	var_282_bool = var_279_int == var_281_int; // 0x14f0 Eq
	if(var_282_bool == 0) goto Label_5365; // 0x14f1 JumpB
	var_277_int = 1; // 0x14f2 MovI
	return 2; // 0x14f3 Return
	
Label_5365:
	var_283_int = 1; // 0x14f5 PushI
	var_284_bool = var_279_int == var_283_int; // 0x14f6 Eq
	if(var_284_bool == 0) goto Label_5370; // 0x14f7 JumpB
	var_277_int = 2; // 0x14f8 MovI
	return 2; // 0x14f9 Return
	
Label_5370:
	var_277_int = 3; // 0x14fa MovI
	return 2; // 0x14fb Return
}


func_2283(var_0_bool, var_1_object, var_2_object, var_3_object, var_848_object, var_849_object)
{
	var_0_bool = var_849_object; // 0x8ec TMov
	var_1_object = var_848_object; // 0x8ed TMov
	var_3_object = 0; // 0x8ee TMovB
	var_854_int = 1; // 0x8ef PushI
	if(var_854_int == 0) goto Label_2316; // 0x8f0 JumpB
	var_855_string = ""; // 0x8f1 PushV
	var_855_string = "Sly"; // 0x8f2 MovS
	func_2346(var_849_object, var_855_string); // 0x8f3 NEW_2
	var_863_int = 526673; // 0x8f5 PushI
	SetMessage(var_863_int); // 0x8f6 TObjFunc
	ClearReplies(); // 0x8f8 TObjFunc
	var_864_int = 526674; // 0x8fa PushI
	var_865_int = -1; // 0x8fb PushI
	var_866_int = 27950; // 0x8fc PushI
	AddReply(var_864_int, var_865_int, var_866_int); // 0x8fd TObjFunc
	var_867_int = 526675; // 0x8ff PushI
	var_868_int = -1; // 0x900 PushI
	var_869_int = 27951; // 0x901 PushI
	AddReply(var_867_int, var_868_int, var_869_int); // 0x902 TObjFunc
	var_870_int = 528785; // 0x904 PushI
	var_871_int = -1; // 0x905 PushI
	var_872_int = 30197; // 0x906 PushI
	AddReply(var_870_int, var_871_int, var_872_int); // 0x907 TObjFunc
	goto Label_2316; // 0x909 Jump
	
Label_2316:
	var_873_bool = 0; // 0x90c PushV
	func_4735(var_873_bool); // 0x90d NEW_2
	if(var_873_bool == 0) goto Label_2331; // 0x90f JumpB
	
Label_2320:
	lshWaitForAnimEnd(); // 0x910 Func
	var_874_object = var_3_object; // 0x912 PushT
	if(var_874_object == 0) goto Label_2325; // 0x913 JumpB
	goto Label_2330; // 0x914 Jump
	
Label_2330:
	goto Label_2345; // 0x91a Jump
	
Label_2345:
	return 0; // 0x929 Return
	
Label_2325:
	var_875_string = ""; // 0x915 PushV
	var_875_string = var_2_object; // 0x916 MovT
	func_4564(var_875_string); // 0x917 NEW_2
	goto Label_2320; // 0x919 Jump
	
Label_2331:
	var_876_string = "all"; // 0x91b PushS
	var_877_string = "idle"; // 0x91c PushS
	PlayAnimation(var_876_string, var_877_string); // 0x91d Func
	
Label_2335:
	WaitForAnimEnd(); // 0x91f Func
	var_878_object = var_3_object; // 0x921 PushT
	if(var_878_object == 0) goto Label_2340; // 0x922 JumpB
	goto Label_2345; // 0x923 Jump
	
Label_2340:
	var_879_string = "all"; // 0x924 PushS
	var_880_string = "idle"; // 0x925 PushS
	PlayAnimation(var_879_string, var_880_string); // 0x926 Func
	goto Label_2335; // 0x928 Jump
}


func_5103(var_93_bool, var_94_object, var_95_int)
{
	var_96_object = Obj(); var_97_object = Obj(); var_98_int = 0; var_99_object = Obj(); var_100_object = Obj(); var_101_int = 0; // 0x13ef PushV
	var_102_object = Obj(); // 0x13f0 PushV
	func_5090(var_102_object); // 0x13f1 NEW_2
	var_99_object = var_102_object; // 0x13f2 Mov
	Find(var_95_int, var_100_object); // 0x13f4 ObjFunc
	var_107_bool = var_100_object == 0; // 0x13f6 Not
	if(var_107_bool == 0) goto Label_5118; // 0x13f7 JumpB
	var_108_string = "Can't find diary parent with id: "; // 0x13f8 PushS
	var_109_int = var_108_string + var_95_int; // 0x13f9 Add
	Trace(var_109_int); // 0x13fa Func
	var_93_bool = 0; // 0x13fc MovB
	return 6; // 0x13fd Return
	
Label_5118:
	AddChild(var_94_object); // 0x13fe ObjFunc
	var_110_int = 7; // 0x1400 PushI
	SendWorldWndMessage(var_110_int); // 0x1401 Func
	GetCategory(var_101_int); // 0x1403 ObjFunc
	SetDiarySection(var_101_int); // 0x1405 Func
	var_93_bool = 0; // 0x1407 MovB
	return 6; // 0x1408 Return
}


func_3827(var_2_object, var_1245_string)
{
	var_1246_bool = 0; // 0xef4 PushV
	func_4735(var_1246_bool); // 0xef5 NEW_2
	var_1247_bool = var_1246_bool == 0; // 0xef7 Not
	if(var_1247_bool == 0) goto Label_3834; // 0xef8 JumpB
	return 0; // 0xef9 Return
	
Label_3834:
	var_1248_bool = var_1245_string == var_2_object; // 0xefa Eq
	if(var_1248_bool == 0) goto Label_3837; // 0xefb JumpB
	return 0; // 0xefc Return
	
Label_3837:
	var_1249_string = ""; var_1250_bool = 0; // 0xefd PushV
	var_1249_string = var_1245_string; // 0xefe Mov
	var_1251_string = ""; // 0xeff PushS
	var_1252_bool = var_1245_string == var_1251_string; // 0xf00 Eq
	if(var_1252_bool == 0) goto Label_3844; // 0xf01 JumpB
	var_1250_bool = 0; // 0xf02 MovB
	goto Label_3845; // 0xf03 Jump
	
Label_3845:
	func_4580(var_1249_string, var_1250_bool); // 0xf05 NEW_2
	var_2_object = var_1245_string; // 0xf07 TMov
	return 0; // 0xf08 Return
	
Label_3844:
	var_1250_bool = 1; // 0xf04 MovB
}


func_4595(var_320_bool, var_321_string)
{
	var_322_bool = 0; var_323_bool = 0; // 0x11f3 PushV
	var_324_bool = 0; // 0x11f4 PushV
	func_4735(var_324_bool); // 0x11f5 NEW_2
	if(var_324_bool == 0) goto Label_4608; // 0x11f7 JumpB
	lshHasSpeech(var_323_bool, var_321_string); // 0x11f8 Func
	var_325_bool = var_323_bool; // 0x11fa Push
	if(var_325_bool == 0) goto Label_4608; // 0x11fb JumpB
	lshPlaySpeech(var_321_string); // 0x11fc Func
	var_320_bool = 1; // 0x11fe MovB
	return 2; // 0x11ff Return
	
Label_4608:
	var_320_bool = 0; // 0x1200 MovB
	return 2; // 0x1201 Return
}


func_248(var_0_bool, var_667_int, var_668_object)
{
	var_670_object = Obj(); var_671_bool = 0; var_672_int = 0; var_673_bool = 0; var_674_object = Obj(); var_675_bool = 0; var_676_int = 0; var_677_bool = 0; // 0xf8 PushV
	var_0_bool = var_668_object; // 0xf9 TMov
	var_678_bool = 0; var_679_object = Obj(); var_680_float = 0; // 0xfa PushV
	var_679_object = var_668_object; // 0xfb Mov
	var_680_float = 70.0; // 0xfc MovF
	func_4282(var_679_object, var_680_float); // 0xfd NEW_2
	var_681_bool = var_678_bool == 0; // 0xff Not
	if(var_681_bool == 0) goto Label_259; // 0x100 JumpB
	var_667_int = -2; // 0x101 MovI
	return 8; // 0x102 Return
	
Label_259:
	CreateDialog(var_674_object); // 0x103 Func
	var_682_int = 0; // 0x105 PushV
	func_4729(var_682_int); // 0x106 NEW_2
	SetNPCName(var_682_int); // 0x108 ObjFunc
	var_683_int = 0; // 0x10a PushV
	func_4727(var_683_int); // 0x10b NEW_2
	SetNPCDescription(var_683_int); // 0x10d ObjFunc
	var_684_string = ""; // 0x10f PushV
	func_4731(var_684_string); // 0x110 NEW_2
	SetPhoto(var_684_string); // 0x112 ObjFunc
	var_685_string = ""; // 0x114 PushV
	func_4733(var_685_string); // 0x115 NEW_2
	SetPhoto2(var_685_string); // 0x117 ObjFunc
	var_686_int = 0; // 0x119 PushV
	func_5355(var_686_int); // 0x11a NEW_2
	SetPlayerName(var_686_int); // 0x11c ObjFunc
	var_676_int = -1; // 0x11e MovI
	IsOverrideActive(var_675_bool); // 0x11f Func
	var_687_bool = var_675_bool; // 0x121 Push
	if(var_687_bool == 0) goto Label_293; // 0x122 JumpB
	var_667_int = -2; // 0x123 MovI
	return 8; // 0x124 Return
	
Label_293:
	DoDialog(var_674_object); // 0x125 Func
	var_688_bool = 0; var_689_object = Obj(); // 0x127 PushV
	var_690_object = Obj(); // 0x128 PushV
	func_4645(var_690_object); // 0x129 NEW_2
	var_689_object = var_690_object; // 0x12a Mov
	func_4367(var_688_bool, var_689_object); // 0x12c NEW_2
	var_691_object = Obj(); var_692_object = Obj(); // 0x12e PushV
	var_691_object = var_668_object; // 0x12f Mov
	var_692_object = var_674_object; // 0x130 Mov
	TaskCall(4); // 0x131 TaskCall
	func_329(var_693_object, var_694_object, var_695_string, var_696_bool, var_691_object, var_692_object); // 0x132 NEW_2
	TaskReturn(); // 0x133 TaskReturn
	IsDialogEnd(var_677_bool); // 0x135 ObjFunc
	
Label_311:
	var_753_bool = var_677_bool == 0; // 0x137 Not
	if(var_753_bool == 0) goto Label_318; // 0x138 JumpB
	sync(); // 0x139 Func
	IsDialogEnd(var_677_bool); // 0x13b ObjFunc
	goto Label_311; // 0x13d Jump
	
Label_318:
	var_754_object = Obj(); // 0x13e PushV
	var_754_object = var_668_object; // 0x13f Mov
	func_4350(); // 0x140 NEW_2
	StopDialog(var_674_object); // 0x142 Func
	GetReturnValue(var_676_int); // 0x144 ObjFunc
	var_667_int = var_676_int; // 0x146 Mov
	return 8; // 0x147 Return
}


func_5372(var_191_int)
{
	var_192_int = 0; var_193_int = 0; // 0x14fc PushV
	var_194_string = "branch"; // 0x14fd PushS
	GetVariable(var_194_string, var_193_int); // 0x14fe Func
	var_191_int = var_193_int; // 0x1500 Mov
	return 2; // 0x1501 Return
}


func_4350()
{
	var_427_bool = 0; var_428_bool = 0; // 0x10fe PushV
	CameraSwitchToNormal(); // 0x10ff Func
	var_429_bool = 0; // 0x1101 PushV
	func_4735(var_429_bool); // 0x1102 NEW_2
	if(var_429_bool == 0) goto Label_4358; // 0x1104 JumpB
	goto Label_4366; // 0x1105 Jump
	
Label_4366:
	return 2; // 0x110e Return
	
Label_4358:
	var_430_string = "head"; // 0x1106 PushS
	HasAnimationTrack(var_428_bool, var_430_string); // 0x1107 Func
	var_431_bool = var_428_bool; // 0x1109 Push
	if(var_431_bool == 0) goto Label_4366; // 0x110a JumpB
	var_432_string = "head"; // 0x110b PushS
	UnlookAsync(var_432_string); // 0x110c Func
}


