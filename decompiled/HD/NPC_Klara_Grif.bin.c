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
	func_4639(); // 0xbb NEW_2
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
	func_4764(var_107_bool); // 0xed NEW_2
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
	if(var_69_int == 0) goto Label_1342; // 0x1be JumpB
	func_4639(); // 0x1c0 NEW_2
	var_71_int = 27011; // 0x1c2 PushI
	var_72_bool = var_68_cvector == var_71_int; // 0x1c3 Eq
	if(var_72_bool == 0) goto Label_463; // 0x1c4 JumpB
	var_73_object = Obj(); var_74_object = Obj(); // 0x1c5 PushV
	var_73_object = var_1_object; // 0x1c6 MovT
	var_74_object = var_0_bool; // 0x1c7 MovT
	func_4782(); // 0x1c8 NEW_2
	var_116_object = Obj(); var_117_object = Obj(); // 0x1ca PushV
	var_116_object = var_1_object; // 0x1cb MovT
	var_117_object = var_0_bool; // 0x1cc MovT
	func_4766(); // 0x1cd NEW_2
	
Label_463:
	var_142_int = 44725; // 0x1cf PushI
	var_143_bool = var_68_cvector == var_142_int; // 0x1d0 Eq
	if(var_143_bool == 0) goto Label_471; // 0x1d1 JumpB
	var_144_object = Obj(); var_145_object = Obj(); // 0x1d2 PushV
	var_144_object = var_1_object; // 0x1d3 MovT
	var_145_object = var_0_bool; // 0x1d4 MovT
	func_4782(); // 0x1d5 NEW_2
	
Label_471:
	var_146_int = 27021; // 0x1d7 PushI
	var_147_bool = var_68_cvector == var_146_int; // 0x1d8 Eq
	if(var_147_bool == 0) goto Label_484; // 0x1d9 JumpB
	var_148_object = Obj(); var_149_object = Obj(); // 0x1da PushV
	var_148_object = var_1_object; // 0x1db MovT
	var_149_object = var_0_bool; // 0x1dc MovT
	func_4805(); // 0x1dd NEW_2
	var_174_object = Obj(); var_175_object = Obj(); // 0x1df PushV
	var_174_object = var_1_object; // 0x1e0 MovT
	var_175_object = var_0_bool; // 0x1e1 MovT
	func_4908(); // 0x1e2 NEW_2
	
Label_484:
	var_181_int = 44742; // 0x1e4 PushI
	var_182_bool = var_68_cvector == var_181_int; // 0x1e5 Eq
	if(var_182_bool == 0) goto Label_492; // 0x1e6 JumpB
	var_183_object = Obj(); var_184_object = Obj(); // 0x1e7 PushV
	var_183_object = var_1_object; // 0x1e8 MovT
	var_184_object = var_0_bool; // 0x1e9 MovT
	func_4805(); // 0x1ea NEW_2
	
Label_492:
	var_185_int = 27037; // 0x1ec PushI
	var_186_bool = var_68_cvector == var_185_int; // 0x1ed Eq
	if(var_186_bool == 0) goto Label_500; // 0x1ee JumpB
	var_187_object = Obj(); var_188_object = Obj(); // 0x1ef PushV
	var_187_object = var_1_object; // 0x1f0 MovT
	var_188_object = var_0_bool; // 0x1f1 MovT
	func_4833(); // 0x1f2 NEW_2
	
Label_500:
	var_199_int = 27038; // 0x1f4 PushI
	var_200_bool = var_68_cvector == var_199_int; // 0x1f5 Eq
	if(var_200_bool == 0) goto Label_508; // 0x1f6 JumpB
	var_201_object = Obj(); var_202_object = Obj(); // 0x1f7 PushV
	var_201_object = var_1_object; // 0x1f8 MovT
	var_202_object = var_0_bool; // 0x1f9 MovT
	func_4833(); // 0x1fa NEW_2
	
Label_508:
	var_203_int = 44753; // 0x1fc PushI
	var_204_bool = var_68_cvector == var_203_int; // 0x1fd Eq
	if(var_204_bool == 0) goto Label_516; // 0x1fe JumpB
	var_205_object = Obj(); var_206_object = Obj(); // 0x1ff PushV
	var_205_object = var_1_object; // 0x200 MovT
	var_206_object = var_0_bool; // 0x201 MovT
	func_4899(); // 0x202 NEW_2
	
Label_516:
	var_217_int = 44754; // 0x204 PushI
	var_218_bool = var_68_cvector == var_217_int; // 0x205 Eq
	if(var_218_bool == 0) goto Label_524; // 0x206 JumpB
	var_219_object = Obj(); var_220_object = Obj(); // 0x207 PushV
	var_219_object = var_1_object; // 0x208 MovT
	var_220_object = var_0_bool; // 0x209 MovT
	func_4899(); // 0x20a NEW_2
	
Label_524:
	var_221_int = 27943; // 0x20c PushI
	var_222_bool = var_68_cvector == var_221_int; // 0x20d Eq
	if(var_222_bool == 0) goto Label_532; // 0x20e JumpB
	var_223_object = Obj(); var_224_object = Obj(); // 0x20f PushV
	var_223_object = var_1_object; // 0x210 MovT
	var_224_object = var_0_bool; // 0x211 MovT
	func_4924(); // 0x212 NEW_2
	
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
	func_4929(var_247_object); // 0x222 NEW_2
	if(var_246_bool == 0) goto Label_554; // 0x224 JumpB
	var_254_int = 525682; // 0x225 PushI
	var_255_int = 44708; // 0x226 PushI
	var_256_int = 27005; // 0x227 PushI
	AddReply(var_254_int, var_255_int, var_256_int); // 0x228 TObjFunc
	
Label_554:
	var_257_bool = 0; var_258_object = Obj(); // 0x22a PushV
	var_258_object = var_1_object; // 0x22b MovT
	func_4941(var_258_object); // 0x22c NEW_2
	if(var_257_bool == 0) goto Label_564; // 0x22e JumpB
	var_263_int = 525696; // 0x22f PushI
	var_264_int = 30190; // 0x230 PushI
	var_265_int = 27019; // 0x231 PushI
	AddReply(var_263_int, var_264_int, var_265_int); // 0x232 TObjFunc
	
Label_564:
	var_266_bool = 0; var_267_object = Obj(); // 0x234 PushV
	var_267_object = var_1_object; // 0x235 MovT
	func_4953(var_267_object); // 0x236 NEW_2
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
	if(var_437_bool == 0) goto Label_974; // 0x3b9 JumpB
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
	var_443_int = 528779; // 0x3c8 PushI
	var_444_int = 30192; // 0x3c9 PushI
	var_445_int = 30191; // 0x3ca PushI
	AddReply(var_443_int, var_444_int, var_445_int); // 0x3cb TObjFunc
	return 0; // 0x3cd Return
	
Label_974:
	var_446_int = 30192; // 0x3ce PushI
	var_447_bool = var_67_bool == var_446_int; // 0x3cf Eq
	if(var_447_bool == 0) goto Label_997; // 0x3d0 JumpB
	var_448_string = ""; // 0x3d1 PushV
	var_448_string = "Anger"; // 0x3d2 MovS
	func_422(var_68_cvector, var_448_string); // 0x3d3 NEW_2
	var_449_int = 528780; // 0x3d5 PushI
	SetMessage(var_449_int); // 0x3d6 TObjFunc
	ClearReplies(); // 0x3d8 TObjFunc
	var_450_int = 528781; // 0x3da PushI
	var_451_int = 43241; // 0x3db PushI
	var_452_int = 30193; // 0x3dc PushI
	AddReply(var_450_int, var_451_int, var_452_int); // 0x3dd TObjFunc
	var_453_int = 528782; // 0x3df PushI
	var_454_int = 27020; // 0x3e0 PushI
	var_455_int = 30194; // 0x3e1 PushI
	AddReply(var_453_int, var_454_int, var_455_int); // 0x3e2 TObjFunc
	return 0; // 0x3e4 Return
	
Label_997:
	var_456_int = 43241; // 0x3e5 PushI
	var_457_bool = var_67_bool == var_456_int; // 0x3e6 Eq
	if(var_457_bool == 0) goto Label_1015; // 0x3e7 JumpB
	var_458_string = ""; // 0x3e8 PushV
	var_458_string = "Fear"; // 0x3e9 MovS
	func_422(var_68_cvector, var_458_string); // 0x3ea NEW_2
	var_459_int = 541122; // 0x3ec PushI
	SetMessage(var_459_int); // 0x3ed TObjFunc
	ClearReplies(); // 0x3ef TObjFunc
	var_460_int = 541123; // 0x3f1 PushI
	var_461_int = 43243; // 0x3f2 PushI
	var_462_int = 43242; // 0x3f3 PushI
	AddReply(var_460_int, var_461_int, var_462_int); // 0x3f4 TObjFunc
	return 0; // 0x3f6 Return
	
Label_1015:
	var_463_int = 43243; // 0x3f7 PushI
	var_464_bool = var_67_bool == var_463_int; // 0x3f8 Eq
	if(var_464_bool == 0) goto Label_1033; // 0x3f9 JumpB
	var_465_string = ""; // 0x3fa PushV
	var_465_string = "Sly"; // 0x3fb MovS
	func_422(var_68_cvector, var_465_string); // 0x3fc NEW_2
	var_466_int = 541124; // 0x3fe PushI
	SetMessage(var_466_int); // 0x3ff TObjFunc
	ClearReplies(); // 0x401 TObjFunc
	var_467_int = 541125; // 0x403 PushI
	var_468_int = 27020; // 0x404 PushI
	var_469_int = 43244; // 0x405 PushI
	AddReply(var_467_int, var_468_int, var_469_int); // 0x406 TObjFunc
	return 0; // 0x408 Return
	
Label_1033:
	var_470_int = 43236; // 0x409 PushI
	var_471_bool = var_67_bool == var_470_int; // 0x40a Eq
	if(var_471_bool == 0) goto Label_1051; // 0x40b JumpB
	var_472_string = ""; // 0x40c PushV
	var_472_string = "Fear"; // 0x40d MovS
	func_422(var_68_cvector, var_472_string); // 0x40e NEW_2
	var_473_int = 541119; // 0x410 PushI
	SetMessage(var_473_int); // 0x411 TObjFunc
	ClearReplies(); // 0x413 TObjFunc
	var_474_int = 541120; // 0x415 PushI
	var_475_int = 27020; // 0x416 PushI
	var_476_int = 43237; // 0x417 PushI
	AddReply(var_474_int, var_475_int, var_476_int); // 0x418 TObjFunc
	return 0; // 0x41a Return
	
Label_1051:
	var_477_int = 27020; // 0x41b PushI
	var_478_bool = var_67_bool == var_477_int; // 0x41c Eq
	if(var_478_bool == 0) goto Label_1074; // 0x41d JumpB
	var_479_string = ""; // 0x41e PushV
	var_479_string = "Fear"; // 0x41f MovS
	func_422(var_68_cvector, var_479_string); // 0x420 NEW_2
	var_480_int = 525697; // 0x422 PushI
	SetMessage(var_480_int); // 0x423 TObjFunc
	ClearReplies(); // 0x425 TObjFunc
	var_481_int = 528773; // 0x427 PushI
	var_482_int = 43245; // 0x428 PushI
	var_483_int = 30184; // 0x429 PushI
	AddReply(var_481_int, var_482_int, var_483_int); // 0x42a TObjFunc
	var_484_int = 541121; // 0x42c PushI
	var_485_int = 43245; // 0x42d PushI
	var_486_int = 43239; // 0x42e PushI
	AddReply(var_484_int, var_485_int, var_486_int); // 0x42f TObjFunc
	return 0; // 0x431 Return
	
Label_1074:
	var_487_int = 43245; // 0x432 PushI
	var_488_bool = var_67_bool == var_487_int; // 0x433 Eq
	if(var_488_bool == 0) goto Label_1097; // 0x434 JumpB
	var_489_string = ""; // 0x435 PushV
	var_489_string = "Anger"; // 0x436 MovS
	func_422(var_68_cvector, var_489_string); // 0x437 NEW_2
	var_490_int = 541126; // 0x439 PushI
	SetMessage(var_490_int); // 0x43a TObjFunc
	ClearReplies(); // 0x43c TObjFunc
	var_491_int = 541127; // 0x43e PushI
	var_492_int = 30185; // 0x43f PushI
	var_493_int = 43246; // 0x440 PushI
	AddReply(var_491_int, var_492_int, var_493_int); // 0x441 TObjFunc
	var_494_int = 541128; // 0x443 PushI
	var_495_int = 43249; // 0x444 PushI
	var_496_int = 43248; // 0x445 PushI
	AddReply(var_494_int, var_495_int, var_496_int); // 0x446 TObjFunc
	return 0; // 0x448 Return
	
Label_1097:
	var_497_int = 43249; // 0x449 PushI
	var_498_bool = var_67_bool == var_497_int; // 0x44a Eq
	if(var_498_bool == 0) goto Label_1115; // 0x44b JumpB
	var_499_string = ""; // 0x44c PushV
	var_499_string = "Sly"; // 0x44d MovS
	func_422(var_68_cvector, var_499_string); // 0x44e NEW_2
	var_500_int = 541129; // 0x450 PushI
	SetMessage(var_500_int); // 0x451 TObjFunc
	ClearReplies(); // 0x453 TObjFunc
	var_501_int = 541130; // 0x455 PushI
	var_502_int = 30185; // 0x456 PushI
	var_503_int = 43250; // 0x457 PushI
	AddReply(var_501_int, var_502_int, var_503_int); // 0x458 TObjFunc
	return 0; // 0x45a Return
	
Label_1115:
	var_504_int = 30185; // 0x45b PushI
	var_505_bool = var_67_bool == var_504_int; // 0x45c Eq
	if(var_505_bool == 0) goto Label_1138; // 0x45d JumpB
	var_506_string = ""; // 0x45e PushV
	var_506_string = "Anger"; // 0x45f MovS
	func_422(var_68_cvector, var_506_string); // 0x460 NEW_2
	var_507_int = 528774; // 0x462 PushI
	SetMessage(var_507_int); // 0x463 TObjFunc
	ClearReplies(); // 0x465 TObjFunc
	var_508_int = 528775; // 0x467 PushI
	var_509_int = 30187; // 0x468 PushI
	var_510_int = 30186; // 0x469 PushI
	AddReply(var_508_int, var_509_int, var_510_int); // 0x46a TObjFunc
	var_511_int = 528777; // 0x46c PushI
	var_512_int = 30187; // 0x46d PushI
	var_513_int = 30188; // 0x46e PushI
	AddReply(var_511_int, var_512_int, var_513_int); // 0x46f TObjFunc
	return 0; // 0x471 Return
	
Label_1138:
	var_514_int = 30187; // 0x472 PushI
	var_515_bool = var_67_bool == var_514_int; // 0x473 Eq
	if(var_515_bool == 0) goto Label_1161; // 0x474 JumpB
	var_516_string = ""; // 0x475 PushV
	var_516_string = "Neutral"; // 0x476 MovS
	func_422(var_68_cvector, var_516_string); // 0x477 NEW_2
	var_517_int = 528776; // 0x479 PushI
	SetMessage(var_517_int); // 0x47a TObjFunc
	ClearReplies(); // 0x47c TObjFunc
	var_518_int = 525698; // 0x47e PushI
	var_519_int = -1; // 0x47f PushI
	var_520_int = 27021; // 0x480 PushI
	AddReply(var_518_int, var_519_int, var_520_int); // 0x481 TObjFunc
	var_521_int = 542375; // 0x483 PushI
	var_522_int = -1; // 0x484 PushI
	var_523_int = 44742; // 0x485 PushI
	AddReply(var_521_int, var_522_int, var_523_int); // 0x486 TObjFunc
	return 0; // 0x488 Return
	
Label_1161:
	var_524_int = 44708; // 0x489 PushI
	var_525_bool = var_67_bool == var_524_int; // 0x48a Eq
	if(var_525_bool == 0) goto Label_1184; // 0x48b JumpB
	var_526_string = ""; // 0x48c PushV
	var_526_string = "Neutral"; // 0x48d MovS
	func_422(var_68_cvector, var_526_string); // 0x48e NEW_2
	var_527_int = 542345; // 0x490 PushI
	SetMessage(var_527_int); // 0x491 TObjFunc
	ClearReplies(); // 0x493 TObjFunc
	var_528_int = 542346; // 0x495 PushI
	var_529_int = 44710; // 0x496 PushI
	var_530_int = 44709; // 0x497 PushI
	AddReply(var_528_int, var_529_int, var_530_int); // 0x498 TObjFunc
	var_531_int = 542349; // 0x49a PushI
	var_532_int = 44713; // 0x49b PushI
	var_533_int = 44712; // 0x49c PushI
	AddReply(var_531_int, var_532_int, var_533_int); // 0x49d TObjFunc
	return 0; // 0x49f Return
	
Label_1184:
	var_534_int = 44713; // 0x4a0 PushI
	var_535_bool = var_67_bool == var_534_int; // 0x4a1 Eq
	if(var_535_bool == 0) goto Label_1202; // 0x4a2 JumpB
	var_536_string = ""; // 0x4a3 PushV
	var_536_string = "Neutral"; // 0x4a4 MovS
	func_422(var_68_cvector, var_536_string); // 0x4a5 NEW_2
	var_537_int = 542350; // 0x4a7 PushI
	SetMessage(var_537_int); // 0x4a8 TObjFunc
	ClearReplies(); // 0x4aa TObjFunc
	var_538_int = 542351; // 0x4ac PushI
	var_539_int = 27010; // 0x4ad PushI
	var_540_int = 44714; // 0x4ae PushI
	AddReply(var_538_int, var_539_int, var_540_int); // 0x4af TObjFunc
	return 0; // 0x4b1 Return
	
Label_1202:
	var_541_int = 44710; // 0x4b2 PushI
	var_542_bool = var_67_bool == var_541_int; // 0x4b3 Eq
	if(var_542_bool == 0) goto Label_1220; // 0x4b4 JumpB
	var_543_string = ""; // 0x4b5 PushV
	var_543_string = "Fear"; // 0x4b6 MovS
	func_422(var_68_cvector, var_543_string); // 0x4b7 NEW_2
	var_544_int = 542347; // 0x4b9 PushI
	SetMessage(var_544_int); // 0x4ba TObjFunc
	ClearReplies(); // 0x4bc TObjFunc
	var_545_int = 542348; // 0x4be PushI
	var_546_int = 27006; // 0x4bf PushI
	var_547_int = 44711; // 0x4c0 PushI
	AddReply(var_545_int, var_546_int, var_547_int); // 0x4c1 TObjFunc
	return 0; // 0x4c3 Return
	
Label_1220:
	var_548_int = 27006; // 0x4c4 PushI
	var_549_bool = var_67_bool == var_548_int; // 0x4c5 Eq
	if(var_549_bool == 0) goto Label_1243; // 0x4c6 JumpB
	var_550_string = ""; // 0x4c7 PushV
	var_550_string = "Fear"; // 0x4c8 MovS
	func_422(var_68_cvector, var_550_string); // 0x4c9 NEW_2
	var_551_int = 525683; // 0x4cb PushI
	SetMessage(var_551_int); // 0x4cc TObjFunc
	ClearReplies(); // 0x4ce TObjFunc
	var_552_int = 525684; // 0x4d0 PushI
	var_553_int = 27008; // 0x4d1 PushI
	var_554_int = 27007; // 0x4d2 PushI
	AddReply(var_552_int, var_553_int, var_554_int); // 0x4d3 TObjFunc
	var_555_int = 541117; // 0x4d5 PushI
	var_556_int = 27008; // 0x4d6 PushI
	var_557_int = 43233; // 0x4d7 PushI
	AddReply(var_555_int, var_556_int, var_557_int); // 0x4d8 TObjFunc
	return 0; // 0x4da Return
	
Label_1243:
	var_558_int = 27008; // 0x4db PushI
	var_559_bool = var_67_bool == var_558_int; // 0x4dc Eq
	if(var_559_bool == 0) goto Label_1266; // 0x4dd JumpB
	var_560_string = ""; // 0x4de PushV
	var_560_string = "Fear"; // 0x4df MovS
	func_422(var_68_cvector, var_560_string); // 0x4e0 NEW_2
	var_561_int = 525685; // 0x4e2 PushI
	SetMessage(var_561_int); // 0x4e3 TObjFunc
	ClearReplies(); // 0x4e5 TObjFunc
	var_562_int = 525686; // 0x4e7 PushI
	var_563_int = 27010; // 0x4e8 PushI
	var_564_int = 27009; // 0x4e9 PushI
	AddReply(var_562_int, var_563_int, var_564_int); // 0x4ea TObjFunc
	var_565_int = 542352; // 0x4ec PushI
	var_566_int = 44716; // 0x4ed PushI
	var_567_int = 44715; // 0x4ee PushI
	AddReply(var_565_int, var_566_int, var_567_int); // 0x4ef TObjFunc
	return 0; // 0x4f1 Return
	
Label_1266:
	var_568_int = 44716; // 0x4f2 PushI
	var_569_bool = var_67_bool == var_568_int; // 0x4f3 Eq
	if(var_569_bool == 0) goto Label_1284; // 0x4f4 JumpB
	var_570_string = ""; // 0x4f5 PushV
	var_570_string = "Sly"; // 0x4f6 MovS
	func_422(var_68_cvector, var_570_string); // 0x4f7 NEW_2
	var_571_int = 542353; // 0x4f9 PushI
	SetMessage(var_571_int); // 0x4fa TObjFunc
	ClearReplies(); // 0x4fc TObjFunc
	var_572_int = 542354; // 0x4fe PushI
	var_573_int = 44718; // 0x4ff PushI
	var_574_int = 44717; // 0x500 PushI
	AddReply(var_572_int, var_573_int, var_574_int); // 0x501 TObjFunc
	return 0; // 0x503 Return
	
Label_1284:
	var_575_int = 44718; // 0x504 PushI
	var_576_bool = var_67_bool == var_575_int; // 0x505 Eq
	if(var_576_bool == 0) goto Label_1307; // 0x506 JumpB
	var_577_string = ""; // 0x507 PushV
	var_577_string = "Neutral"; // 0x508 MovS
	func_422(var_68_cvector, var_577_string); // 0x509 NEW_2
	var_578_int = 542355; // 0x50b PushI
	SetMessage(var_578_int); // 0x50c TObjFunc
	ClearReplies(); // 0x50e TObjFunc
	var_579_int = 542356; // 0x510 PushI
	var_580_int = 27010; // 0x511 PushI
	var_581_int = 44719; // 0x512 PushI
	AddReply(var_579_int, var_580_int, var_581_int); // 0x513 TObjFunc
	var_582_int = 542357; // 0x515 PushI
	var_583_int = 27010; // 0x516 PushI
	var_584_int = 44720; // 0x517 PushI
	AddReply(var_582_int, var_583_int, var_584_int); // 0x518 TObjFunc
	return 0; // 0x51a Return
	
Label_1307:
	var_585_int = 27010; // 0x51b PushI
	var_586_bool = var_67_bool == var_585_int; // 0x51c Eq
	if(var_586_bool == 0) goto Label_1330; // 0x51d JumpB
	var_587_string = ""; // 0x51e PushV
	var_587_string = "Sly"; // 0x51f MovS
	func_422(var_68_cvector, var_587_string); // 0x520 NEW_2
	var_588_int = 525687; // 0x522 PushI
	SetMessage(var_588_int); // 0x523 TObjFunc
	ClearReplies(); // 0x525 TObjFunc
	var_589_int = 525688; // 0x527 PushI
	var_590_int = -1; // 0x528 PushI
	var_591_int = 27011; // 0x529 PushI
	AddReply(var_589_int, var_590_int, var_591_int); // 0x52a TObjFunc
	var_592_int = 542360; // 0x52c PushI
	var_593_int = -1; // 0x52d PushI
	var_594_int = 44725; // 0x52e PushI
	AddReply(var_592_int, var_593_int, var_594_int); // 0x52f TObjFunc
	return 0; // 0x531 Return
	
Label_1330:
	var_3_object = 1; // 0x532 TMovB
	var_595_bool = 0; // 0x533 PushV
	func_4764(var_595_bool); // 0x534 NEW_2
	if(var_595_bool == 0) goto Label_1338; // 0x536 JumpB
	lshStopAnimation(); // 0x537 Func
	goto Label_1340; // 0x539 Jump
	
Label_1340:
	return 0; // 0x53c Return
	
Label_1338:
	StopAnimation(); // 0x53a Func
	
Label_1342:
	return 0; // 0x53e Return
}


task_6_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_int, var_17_int, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool, var_23_object, var_24_object, var_25_object, var_26_string, var_27_bool, var_28_object, var_29_object, var_30_object, var_31_string, var_32_bool, var_33_object, var_34_object, var_35_object, var_36_string, var_37_bool, var_38_object, var_39_object, var_40_object, var_41_string, var_42_bool, var_43_object, var_44_object, var_45_object, var_46_string, var_47_bool, var_48_object, var_49_object, var_50_object, var_51_string, var_52_bool, var_53_object, var_54_object, var_55_object, var_56_string, var_57_bool, var_58_object, var_59_object, var_60_object, var_61_string, var_62_bool, var_63_object, var_64_object, var_65_object, var_66_string, var_67_bool, var_68_cvector)
{
	var_69_int = 1; // 0x5e6 PushI
	if(var_69_int == 0) goto Label_1563; // 0x5e7 JumpB
	func_4639(); // 0x5e9 NEW_2
	var_71_int = 27933; // 0x5eb PushI
	var_72_bool = var_68_cvector == var_71_int; // 0x5ec Eq
	if(var_72_bool == 0) goto Label_1523; // 0x5ed JumpB
	var_73_object = Obj(); var_74_object = Obj(); // 0x5ee PushV
	var_73_object = var_1_object; // 0x5ef MovT
	var_74_object = var_0_bool; // 0x5f0 MovT
	func_4924(); // 0x5f1 NEW_2
	
Label_1523:
	var_76_int = 27932; // 0x5f3 PushI
	var_77_bool = var_67_bool == var_76_int; // 0x5f4 Eq
	if(var_77_bool == 0) goto Label_1551; // 0x5f5 JumpB
	var_78_string = ""; // 0x5f6 PushV
	var_78_string = "Fear"; // 0x5f7 MovS
	func_1487(var_68_cvector, var_78_string); // 0x5f8 NEW_2
	var_95_int = 526656; // 0x5fa PushI
	SetMessage(var_95_int); // 0x5fb TObjFunc
	ClearReplies(); // 0x5fd TObjFunc
	var_96_int = 526657; // 0x5ff PushI
	var_97_int = -1; // 0x600 PushI
	var_98_int = 27933; // 0x601 PushI
	AddReply(var_96_int, var_97_int, var_98_int); // 0x602 TObjFunc
	var_99_int = 526658; // 0x604 PushI
	var_100_int = -1; // 0x605 PushI
	var_101_int = 27934; // 0x606 PushI
	AddReply(var_99_int, var_100_int, var_101_int); // 0x607 TObjFunc
	var_102_int = 542279; // 0x609 PushI
	var_103_int = -1; // 0x60a PushI
	var_104_int = 44624; // 0x60b PushI
	AddReply(var_102_int, var_103_int, var_104_int); // 0x60c TObjFunc
	return 0; // 0x60e Return
	
Label_1551:
	var_3_object = 1; // 0x60f TMovB
	var_105_bool = 0; // 0x610 PushV
	func_4764(var_105_bool); // 0x611 NEW_2
	if(var_105_bool == 0) goto Label_1559; // 0x613 JumpB
	lshStopAnimation(); // 0x614 Func
	goto Label_1561; // 0x616 Jump
	
Label_1561:
	return 0; // 0x619 Return
	
Label_1559:
	StopAnimation(); // 0x617 Func
	
Label_1563:
	return 0; // 0x61b Return
}


task_8_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_int, var_22_int, var_23_object, var_24_object, var_25_object, var_26_string, var_27_bool, var_28_object, var_29_object, var_30_object, var_31_string, var_32_bool, var_33_object, var_34_object, var_35_object, var_36_string, var_37_bool, var_38_object, var_39_object, var_40_object, var_41_string, var_42_bool, var_43_object, var_44_object, var_45_object, var_46_string, var_47_bool, var_48_object, var_49_object, var_50_object, var_51_string, var_52_bool, var_53_object, var_54_object, var_55_object, var_56_string, var_57_bool, var_58_object, var_59_object, var_60_object, var_61_string, var_62_bool, var_63_object, var_64_object, var_65_object, var_66_string, var_67_bool, var_68_cvector)
{
	var_69_int = 1; // 0x6c3 PushI
	if(var_69_int == 0) goto Label_1784; // 0x6c4 JumpB
	func_4639(); // 0x6c6 NEW_2
	var_71_int = 27937; // 0x6c8 PushI
	var_72_bool = var_68_cvector == var_71_int; // 0x6c9 Eq
	if(var_72_bool == 0) goto Label_1744; // 0x6ca JumpB
	var_73_object = Obj(); var_74_object = Obj(); // 0x6cb PushV
	var_73_object = var_1_object; // 0x6cc MovT
	var_74_object = var_0_bool; // 0x6cd MovT
	func_4924(); // 0x6ce NEW_2
	
Label_1744:
	var_76_int = 27936; // 0x6d0 PushI
	var_77_bool = var_67_bool == var_76_int; // 0x6d1 Eq
	if(var_77_bool == 0) goto Label_1772; // 0x6d2 JumpB
	var_78_string = ""; // 0x6d3 PushV
	var_78_string = "Fear"; // 0x6d4 MovS
	func_1708(var_68_cvector, var_78_string); // 0x6d5 NEW_2
	var_95_int = 526660; // 0x6d7 PushI
	SetMessage(var_95_int); // 0x6d8 TObjFunc
	ClearReplies(); // 0x6da TObjFunc
	var_96_int = 526661; // 0x6dc PushI
	var_97_int = -1; // 0x6dd PushI
	var_98_int = 27937; // 0x6de PushI
	AddReply(var_96_int, var_97_int, var_98_int); // 0x6df TObjFunc
	var_99_int = 526662; // 0x6e1 PushI
	var_100_int = -1; // 0x6e2 PushI
	var_101_int = 27938; // 0x6e3 PushI
	AddReply(var_99_int, var_100_int, var_101_int); // 0x6e4 TObjFunc
	var_102_int = 528771; // 0x6e6 PushI
	var_103_int = -1; // 0x6e7 PushI
	var_104_int = 30182; // 0x6e8 PushI
	AddReply(var_102_int, var_103_int, var_104_int); // 0x6e9 TObjFunc
	return 0; // 0x6eb Return
	
Label_1772:
	var_3_object = 1; // 0x6ec TMovB
	var_105_bool = 0; // 0x6ed PushV
	func_4764(var_105_bool); // 0x6ee NEW_2
	if(var_105_bool == 0) goto Label_1780; // 0x6f0 JumpB
	lshStopAnimation(); // 0x6f1 Func
	goto Label_1782; // 0x6f3 Jump
	
Label_1782:
	return 0; // 0x6f6 Return
	
Label_1780:
	StopAnimation(); // 0x6f4 Func
	
Label_1784:
	return 0; // 0x6f8 Return
}


task_10_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_int, var_27_int, var_28_object, var_29_object, var_30_object, var_31_string, var_32_bool, var_33_object, var_34_object, var_35_object, var_36_string, var_37_bool, var_38_object, var_39_object, var_40_object, var_41_string, var_42_bool, var_43_object, var_44_object, var_45_object, var_46_string, var_47_bool, var_48_object, var_49_object, var_50_object, var_51_string, var_52_bool, var_53_object, var_54_object, var_55_object, var_56_string, var_57_bool, var_58_object, var_59_object, var_60_object, var_61_string, var_62_bool, var_63_object, var_64_object, var_65_object, var_66_string, var_67_bool, var_68_cvector)
{
	var_69_int = 1; // 0x7a0 PushI
	if(var_69_int == 0) goto Label_2005; // 0x7a1 JumpB
	func_4639(); // 0x7a3 NEW_2
	var_71_int = 27941; // 0x7a5 PushI
	var_72_bool = var_68_cvector == var_71_int; // 0x7a6 Eq
	if(var_72_bool == 0) goto Label_1965; // 0x7a7 JumpB
	var_73_object = Obj(); var_74_object = Obj(); // 0x7a8 PushV
	var_73_object = var_1_object; // 0x7a9 MovT
	var_74_object = var_0_bool; // 0x7aa MovT
	func_4924(); // 0x7ab NEW_2
	
Label_1965:
	var_76_int = 27940; // 0x7ad PushI
	var_77_bool = var_67_bool == var_76_int; // 0x7ae Eq
	if(var_77_bool == 0) goto Label_1993; // 0x7af JumpB
	var_78_string = ""; // 0x7b0 PushV
	var_78_string = "Neutral"; // 0x7b1 MovS
	func_1929(var_68_cvector, var_78_string); // 0x7b2 NEW_2
	var_95_int = 526664; // 0x7b4 PushI
	SetMessage(var_95_int); // 0x7b5 TObjFunc
	ClearReplies(); // 0x7b7 TObjFunc
	var_96_int = 526665; // 0x7b9 PushI
	var_97_int = -1; // 0x7ba PushI
	var_98_int = 27941; // 0x7bb PushI
	AddReply(var_96_int, var_97_int, var_98_int); // 0x7bc TObjFunc
	var_99_int = 526666; // 0x7be PushI
	var_100_int = -1; // 0x7bf PushI
	var_101_int = 27942; // 0x7c0 PushI
	AddReply(var_99_int, var_100_int, var_101_int); // 0x7c1 TObjFunc
	var_102_int = 528772; // 0x7c3 PushI
	var_103_int = -1; // 0x7c4 PushI
	var_104_int = 30183; // 0x7c5 PushI
	AddReply(var_102_int, var_103_int, var_104_int); // 0x7c6 TObjFunc
	return 0; // 0x7c8 Return
	
Label_1993:
	var_3_object = 1; // 0x7c9 TMovB
	var_105_bool = 0; // 0x7ca PushV
	func_4764(var_105_bool); // 0x7cb NEW_2
	if(var_105_bool == 0) goto Label_2001; // 0x7cd JumpB
	lshStopAnimation(); // 0x7ce Func
	goto Label_2003; // 0x7d0 Jump
	
Label_2003:
	return 0; // 0x7d3 Return
	
Label_2001:
	StopAnimation(); // 0x7d1 Func
	
Label_2005:
	return 0; // 0x7d5 Return
}


task_12_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_int, var_32_int, var_33_object, var_34_object, var_35_object, var_36_string, var_37_bool, var_38_object, var_39_object, var_40_object, var_41_string, var_42_bool, var_43_object, var_44_object, var_45_object, var_46_string, var_47_bool, var_48_object, var_49_object, var_50_object, var_51_string, var_52_bool, var_53_object, var_54_object, var_55_object, var_56_string, var_57_bool, var_58_object, var_59_object, var_60_object, var_61_string, var_62_bool, var_63_object, var_64_object, var_65_object, var_66_string, var_67_bool, var_68_cvector)
{
	var_69_int = 1; // 0x87d PushI
	if(var_69_int == 0) goto Label_2226; // 0x87e JumpB
	func_4639(); // 0x880 NEW_2
	var_71_int = 27946; // 0x882 PushI
	var_72_bool = var_68_cvector == var_71_int; // 0x883 Eq
	if(var_72_bool == 0) goto Label_2186; // 0x884 JumpB
	var_73_object = Obj(); var_74_object = Obj(); // 0x885 PushV
	var_73_object = var_1_object; // 0x886 MovT
	var_74_object = var_0_bool; // 0x887 MovT
	func_4924(); // 0x888 NEW_2
	
Label_2186:
	var_76_int = 27945; // 0x88a PushI
	var_77_bool = var_67_bool == var_76_int; // 0x88b Eq
	if(var_77_bool == 0) goto Label_2214; // 0x88c JumpB
	var_78_string = ""; // 0x88d PushV
	var_78_string = "Fear"; // 0x88e MovS
	func_2150(var_68_cvector, var_78_string); // 0x88f NEW_2
	var_95_int = 526669; // 0x891 PushI
	SetMessage(var_95_int); // 0x892 TObjFunc
	ClearReplies(); // 0x894 TObjFunc
	var_96_int = 526670; // 0x896 PushI
	var_97_int = -1; // 0x897 PushI
	var_98_int = 27946; // 0x898 PushI
	AddReply(var_96_int, var_97_int, var_98_int); // 0x899 TObjFunc
	var_99_int = 526671; // 0x89b PushI
	var_100_int = -1; // 0x89c PushI
	var_101_int = 27947; // 0x89d PushI
	AddReply(var_99_int, var_100_int, var_101_int); // 0x89e TObjFunc
	var_102_int = 528784; // 0x8a0 PushI
	var_103_int = -1; // 0x8a1 PushI
	var_104_int = 30196; // 0x8a2 PushI
	AddReply(var_102_int, var_103_int, var_104_int); // 0x8a3 TObjFunc
	return 0; // 0x8a5 Return
	
Label_2214:
	var_3_object = 1; // 0x8a6 TMovB
	var_105_bool = 0; // 0x8a7 PushV
	func_4764(var_105_bool); // 0x8a8 NEW_2
	if(var_105_bool == 0) goto Label_2222; // 0x8aa JumpB
	lshStopAnimation(); // 0x8ab Func
	goto Label_2224; // 0x8ad Jump
	
Label_2224:
	return 0; // 0x8b0 Return
	
Label_2222:
	StopAnimation(); // 0x8ae Func
	
Label_2226:
	return 0; // 0x8b2 Return
}


task_14_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_int, var_37_int, var_38_object, var_39_object, var_40_object, var_41_string, var_42_bool, var_43_object, var_44_object, var_45_object, var_46_string, var_47_bool, var_48_object, var_49_object, var_50_object, var_51_string, var_52_bool, var_53_object, var_54_object, var_55_object, var_56_string, var_57_bool, var_58_object, var_59_object, var_60_object, var_61_string, var_62_bool, var_63_object, var_64_object, var_65_object, var_66_string, var_67_bool, var_68_cvector)
{
	var_69_int = 1; // 0x95a PushI
	if(var_69_int == 0) goto Label_2447; // 0x95b JumpB
	func_4639(); // 0x95d NEW_2
	var_71_int = 27950; // 0x95f PushI
	var_72_bool = var_68_cvector == var_71_int; // 0x960 Eq
	if(var_72_bool == 0) goto Label_2407; // 0x961 JumpB
	var_73_object = Obj(); var_74_object = Obj(); // 0x962 PushV
	var_73_object = var_1_object; // 0x963 MovT
	var_74_object = var_0_bool; // 0x964 MovT
	func_4924(); // 0x965 NEW_2
	
Label_2407:
	var_76_int = 27949; // 0x967 PushI
	var_77_bool = var_67_bool == var_76_int; // 0x968 Eq
	if(var_77_bool == 0) goto Label_2435; // 0x969 JumpB
	var_78_string = ""; // 0x96a PushV
	var_78_string = "Sly"; // 0x96b MovS
	func_2371(var_68_cvector, var_78_string); // 0x96c NEW_2
	var_95_int = 526673; // 0x96e PushI
	SetMessage(var_95_int); // 0x96f TObjFunc
	ClearReplies(); // 0x971 TObjFunc
	var_96_int = 526674; // 0x973 PushI
	var_97_int = -1; // 0x974 PushI
	var_98_int = 27950; // 0x975 PushI
	AddReply(var_96_int, var_97_int, var_98_int); // 0x976 TObjFunc
	var_99_int = 526675; // 0x978 PushI
	var_100_int = -1; // 0x979 PushI
	var_101_int = 27951; // 0x97a PushI
	AddReply(var_99_int, var_100_int, var_101_int); // 0x97b TObjFunc
	var_102_int = 528785; // 0x97d PushI
	var_103_int = -1; // 0x97e PushI
	var_104_int = 30197; // 0x97f PushI
	AddReply(var_102_int, var_103_int, var_104_int); // 0x980 TObjFunc
	return 0; // 0x982 Return
	
Label_2435:
	var_3_object = 1; // 0x983 TMovB
	var_105_bool = 0; // 0x984 PushV
	func_4764(var_105_bool); // 0x985 NEW_2
	if(var_105_bool == 0) goto Label_2443; // 0x987 JumpB
	lshStopAnimation(); // 0x988 Func
	goto Label_2445; // 0x98a Jump
	
Label_2445:
	return 0; // 0x98d Return
	
Label_2443:
	StopAnimation(); // 0x98b Func
	
Label_2447:
	return 0; // 0x98f Return
}


task_16_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_object, var_37_object, var_38_object, var_39_string, var_40_bool, var_41_int, var_42_int, var_43_object, var_44_object, var_45_object, var_46_string, var_47_bool, var_48_object, var_49_object, var_50_object, var_51_string, var_52_bool, var_53_object, var_54_object, var_55_object, var_56_string, var_57_bool, var_58_object, var_59_object, var_60_object, var_61_string, var_62_bool, var_63_object, var_64_object, var_65_object, var_66_string, var_67_bool, var_68_cvector)
{
	var_69_int = 1; // 0xa32 PushI
	if(var_69_int == 0) goto Label_2658; // 0xa33 JumpB
	func_4639(); // 0xa35 NEW_2
	var_71_int = 27954; // 0xa37 PushI
	var_72_bool = var_68_cvector == var_71_int; // 0xa38 Eq
	if(var_72_bool == 0) goto Label_2623; // 0xa39 JumpB
	var_73_object = Obj(); var_74_object = Obj(); // 0xa3a PushV
	var_73_object = var_1_object; // 0xa3b MovT
	var_74_object = var_0_bool; // 0xa3c MovT
	func_4924(); // 0xa3d NEW_2
	
Label_2623:
	var_76_int = 27953; // 0xa3f PushI
	var_77_bool = var_67_bool == var_76_int; // 0xa40 Eq
	if(var_77_bool == 0) goto Label_2646; // 0xa41 JumpB
	var_78_string = ""; // 0xa42 PushV
	var_78_string = "Neutral"; // 0xa43 MovS
	func_2587(var_68_cvector, var_78_string); // 0xa44 NEW_2
	var_95_int = 526677; // 0xa46 PushI
	SetMessage(var_95_int); // 0xa47 TObjFunc
	ClearReplies(); // 0xa49 TObjFunc
	var_96_int = 526678; // 0xa4b PushI
	var_97_int = -1; // 0xa4c PushI
	var_98_int = 27954; // 0xa4d PushI
	AddReply(var_96_int, var_97_int, var_98_int); // 0xa4e TObjFunc
	var_99_int = 526679; // 0xa50 PushI
	var_100_int = -1; // 0xa51 PushI
	var_101_int = 27955; // 0xa52 PushI
	AddReply(var_99_int, var_100_int, var_101_int); // 0xa53 TObjFunc
	return 0; // 0xa55 Return
	
Label_2646:
	var_3_object = 1; // 0xa56 TMovB
	var_102_bool = 0; // 0xa57 PushV
	func_4764(var_102_bool); // 0xa58 NEW_2
	if(var_102_bool == 0) goto Label_2654; // 0xa5a JumpB
	lshStopAnimation(); // 0xa5b Func
	goto Label_2656; // 0xa5d Jump
	
Label_2656:
	return 0; // 0xa60 Return
	
Label_2654:
	StopAnimation(); // 0xa5e Func
	
Label_2658:
	return 0; // 0xa62 Return
}


task_18_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_object, var_37_object, var_38_object, var_39_string, var_40_bool, var_41_object, var_42_object, var_43_object, var_44_string, var_45_bool, var_46_int, var_47_int, var_48_object, var_49_object, var_50_object, var_51_string, var_52_bool, var_53_object, var_54_object, var_55_object, var_56_string, var_57_bool, var_58_object, var_59_object, var_60_object, var_61_string, var_62_bool, var_63_object, var_64_object, var_65_object, var_66_string, var_67_bool, var_68_cvector)
{
	var_69_int = 1; // 0xb0a PushI
	if(var_69_int == 0) goto Label_2879; // 0xb0b JumpB
	func_4639(); // 0xb0d NEW_2
	var_71_int = 27958; // 0xb0f PushI
	var_72_bool = var_68_cvector == var_71_int; // 0xb10 Eq
	if(var_72_bool == 0) goto Label_2839; // 0xb11 JumpB
	var_73_object = Obj(); var_74_object = Obj(); // 0xb12 PushV
	var_73_object = var_1_object; // 0xb13 MovT
	var_74_object = var_0_bool; // 0xb14 MovT
	func_4924(); // 0xb15 NEW_2
	
Label_2839:
	var_76_int = 27957; // 0xb17 PushI
	var_77_bool = var_67_bool == var_76_int; // 0xb18 Eq
	if(var_77_bool == 0) goto Label_2867; // 0xb19 JumpB
	var_78_string = ""; // 0xb1a PushV
	var_78_string = "Fear"; // 0xb1b MovS
	func_2803(var_68_cvector, var_78_string); // 0xb1c NEW_2
	var_95_int = 526681; // 0xb1e PushI
	SetMessage(var_95_int); // 0xb1f TObjFunc
	ClearReplies(); // 0xb21 TObjFunc
	var_96_int = 526682; // 0xb23 PushI
	var_97_int = -1; // 0xb24 PushI
	var_98_int = 27958; // 0xb25 PushI
	AddReply(var_96_int, var_97_int, var_98_int); // 0xb26 TObjFunc
	var_99_int = 526683; // 0xb28 PushI
	var_100_int = -1; // 0xb29 PushI
	var_101_int = 27959; // 0xb2a PushI
	AddReply(var_99_int, var_100_int, var_101_int); // 0xb2b TObjFunc
	var_102_int = 528752; // 0xb2d PushI
	var_103_int = -1; // 0xb2e PushI
	var_104_int = 30178; // 0xb2f PushI
	AddReply(var_102_int, var_103_int, var_104_int); // 0xb30 TObjFunc
	return 0; // 0xb32 Return
	
Label_2867:
	var_3_object = 1; // 0xb33 TMovB
	var_105_bool = 0; // 0xb34 PushV
	func_4764(var_105_bool); // 0xb35 NEW_2
	if(var_105_bool == 0) goto Label_2875; // 0xb37 JumpB
	lshStopAnimation(); // 0xb38 Func
	goto Label_2877; // 0xb3a Jump
	
Label_2877:
	return 0; // 0xb3d Return
	
Label_2875:
	StopAnimation(); // 0xb3b Func
	
Label_2879:
	return 0; // 0xb3f Return
}


task_20_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_object, var_37_object, var_38_object, var_39_string, var_40_bool, var_41_object, var_42_object, var_43_object, var_44_string, var_45_bool, var_46_object, var_47_object, var_48_object, var_49_string, var_50_bool, var_51_int, var_52_int, var_53_object, var_54_object, var_55_object, var_56_string, var_57_bool, var_58_object, var_59_object, var_60_object, var_61_string, var_62_bool, var_63_object, var_64_object, var_65_object, var_66_string, var_67_bool, var_68_cvector)
{
	var_69_int = 1; // 0xbe7 PushI
	if(var_69_int == 0) goto Label_3100; // 0xbe8 JumpB
	func_4639(); // 0xbea NEW_2
	var_71_int = 27962; // 0xbec PushI
	var_72_bool = var_68_cvector == var_71_int; // 0xbed Eq
	if(var_72_bool == 0) goto Label_3060; // 0xbee JumpB
	var_73_object = Obj(); var_74_object = Obj(); // 0xbef PushV
	var_73_object = var_1_object; // 0xbf0 MovT
	var_74_object = var_0_bool; // 0xbf1 MovT
	func_4924(); // 0xbf2 NEW_2
	
Label_3060:
	var_76_int = 27961; // 0xbf4 PushI
	var_77_bool = var_67_bool == var_76_int; // 0xbf5 Eq
	if(var_77_bool == 0) goto Label_3088; // 0xbf6 JumpB
	var_78_string = ""; // 0xbf7 PushV
	var_78_string = "Neutral"; // 0xbf8 MovS
	func_3024(var_68_cvector, var_78_string); // 0xbf9 NEW_2
	var_95_int = 526685; // 0xbfb PushI
	SetMessage(var_95_int); // 0xbfc TObjFunc
	ClearReplies(); // 0xbfe TObjFunc
	var_96_int = 526686; // 0xc00 PushI
	var_97_int = -1; // 0xc01 PushI
	var_98_int = 27962; // 0xc02 PushI
	AddReply(var_96_int, var_97_int, var_98_int); // 0xc03 TObjFunc
	var_99_int = 526687; // 0xc05 PushI
	var_100_int = -1; // 0xc06 PushI
	var_101_int = 27963; // 0xc07 PushI
	AddReply(var_99_int, var_100_int, var_101_int); // 0xc08 TObjFunc
	var_102_int = 529000; // 0xc0a PushI
	var_103_int = -1; // 0xc0b PushI
	var_104_int = 30437; // 0xc0c PushI
	AddReply(var_102_int, var_103_int, var_104_int); // 0xc0d TObjFunc
	return 0; // 0xc0f Return
	
Label_3088:
	var_3_object = 1; // 0xc10 TMovB
	var_105_bool = 0; // 0xc11 PushV
	func_4764(var_105_bool); // 0xc12 NEW_2
	if(var_105_bool == 0) goto Label_3096; // 0xc14 JumpB
	lshStopAnimation(); // 0xc15 Func
	goto Label_3098; // 0xc17 Jump
	
Label_3098:
	return 0; // 0xc1a Return
	
Label_3096:
	StopAnimation(); // 0xc18 Func
	
Label_3100:
	return 0; // 0xc1c Return
}


task_22_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_object, var_37_object, var_38_object, var_39_string, var_40_bool, var_41_object, var_42_object, var_43_object, var_44_string, var_45_bool, var_46_object, var_47_object, var_48_object, var_49_string, var_50_bool, var_51_object, var_52_object, var_53_object, var_54_string, var_55_bool, var_56_int, var_57_int, var_58_object, var_59_object, var_60_object, var_61_string, var_62_bool, var_63_object, var_64_object, var_65_object, var_66_string, var_67_bool, var_68_cvector)
{
	var_69_int = 1; // 0xcbf PushI
	if(var_69_int == 0) goto Label_3311; // 0xcc0 JumpB
	func_4639(); // 0xcc2 NEW_2
	var_71_int = 27966; // 0xcc4 PushI
	var_72_bool = var_68_cvector == var_71_int; // 0xcc5 Eq
	if(var_72_bool == 0) goto Label_3276; // 0xcc6 JumpB
	var_73_object = Obj(); var_74_object = Obj(); // 0xcc7 PushV
	var_73_object = var_1_object; // 0xcc8 MovT
	var_74_object = var_0_bool; // 0xcc9 MovT
	func_4924(); // 0xcca NEW_2
	
Label_3276:
	var_76_int = 27965; // 0xccc PushI
	var_77_bool = var_67_bool == var_76_int; // 0xccd Eq
	if(var_77_bool == 0) goto Label_3299; // 0xcce JumpB
	var_78_string = ""; // 0xccf PushV
	var_78_string = "Neutral"; // 0xcd0 MovS
	func_3240(var_68_cvector, var_78_string); // 0xcd1 NEW_2
	var_95_int = 526689; // 0xcd3 PushI
	SetMessage(var_95_int); // 0xcd4 TObjFunc
	ClearReplies(); // 0xcd6 TObjFunc
	var_96_int = 526690; // 0xcd8 PushI
	var_97_int = -1; // 0xcd9 PushI
	var_98_int = 27966; // 0xcda PushI
	AddReply(var_96_int, var_97_int, var_98_int); // 0xcdb TObjFunc
	var_99_int = 526691; // 0xcdd PushI
	var_100_int = -1; // 0xcde PushI
	var_101_int = 27967; // 0xcdf PushI
	AddReply(var_99_int, var_100_int, var_101_int); // 0xce0 TObjFunc
	return 0; // 0xce2 Return
	
Label_3299:
	var_3_object = 1; // 0xce3 TMovB
	var_102_bool = 0; // 0xce4 PushV
	func_4764(var_102_bool); // 0xce5 NEW_2
	if(var_102_bool == 0) goto Label_3307; // 0xce7 JumpB
	lshStopAnimation(); // 0xce8 Func
	goto Label_3309; // 0xcea Jump
	
Label_3309:
	return 0; // 0xced Return
	
Label_3307:
	StopAnimation(); // 0xceb Func
	
Label_3311:
	return 0; // 0xcef Return
}


task_24_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_object, var_37_object, var_38_object, var_39_string, var_40_bool, var_41_object, var_42_object, var_43_object, var_44_string, var_45_bool, var_46_object, var_47_object, var_48_object, var_49_string, var_50_bool, var_51_object, var_52_object, var_53_object, var_54_string, var_55_bool, var_56_object, var_57_object, var_58_object, var_59_string, var_60_bool, var_61_int, var_62_int, var_63_object, var_64_object, var_65_object, var_66_string, var_67_bool, var_68_cvector)
{
	var_69_int = 1; // 0xda5 PushI
	if(var_69_int == 0) goto Label_3707; // 0xda6 JumpB
	func_4639(); // 0xda8 NEW_2
	var_71_int = 28640; // 0xdaa PushI
	var_72_bool = var_68_cvector == var_71_int; // 0xdab Eq
	if(var_72_bool == 0) goto Label_3506; // 0xdac JumpB
	var_73_object = Obj(); var_74_object = Obj(); // 0xdad PushV
	var_73_object = var_1_object; // 0xdae MovT
	var_74_object = var_0_bool; // 0xdaf MovT
	func_4893(); // 0xdb0 NEW_2
	
Label_3506:
	var_77_int = 28655; // 0xdb2 PushI
	var_78_bool = var_68_cvector == var_77_int; // 0xdb3 Eq
	if(var_78_bool == 0) goto Label_3514; // 0xdb4 JumpB
	var_79_object = Obj(); var_80_object = Obj(); // 0xdb5 PushV
	var_79_object = var_1_object; // 0xdb6 MovT
	var_80_object = var_0_bool; // 0xdb7 MovT
	func_4842(); // 0xdb8 NEW_2
	
Label_3514:
	var_161_int = 27970; // 0xdba PushI
	var_162_bool = var_68_cvector == var_161_int; // 0xdbb Eq
	if(var_162_bool == 0) goto Label_3522; // 0xdbc JumpB
	var_163_object = Obj(); var_164_object = Obj(); // 0xdbd PushV
	var_163_object = var_1_object; // 0xdbe MovT
	var_164_object = var_0_bool; // 0xdbf MovT
	func_4924(); // 0xdc0 NEW_2
	
Label_3522:
	var_166_int = 27969; // 0xdc2 PushI
	var_167_bool = var_67_bool == var_166_int; // 0xdc3 Eq
	if(var_167_bool == 0) goto Label_3564; // 0xdc4 JumpB
	var_168_string = ""; // 0xdc5 PushV
	var_168_string = "Sly"; // 0xdc6 MovS
	func_3470(var_68_cvector, var_168_string); // 0xdc7 NEW_2
	var_185_int = 526693; // 0xdc9 PushI
	SetMessage(var_185_int); // 0xdca TObjFunc
	ClearReplies(); // 0xdcc TObjFunc
	var_186_bool = 0; // 0xdce PushV
	var_186_bool = 0; // 0xdcf MovB
	var_187_bool = 0; var_188_object = Obj(); // 0xdd0 PushV
	var_188_object = var_1_object; // 0xdd1 MovT
	func_4965(var_188_object); // 0xdd2 NEW_2
	if(var_187_bool == 0) goto Label_3547; // 0xdd4 JumpB
	var_195_bool = 0; var_196_object = Obj(); // 0xdd5 PushV
	var_196_object = var_1_object; // 0xdd6 MovT
	func_4977(var_196_object); // 0xdd7 NEW_2
	if(var_195_bool == 0) goto Label_3547; // 0xdd9 JumpB
	var_186_bool = 1; // 0xdda MovB
	
Label_3547:
	if(var_186_bool == 0) goto Label_3553; // 0xddb JumpB
	var_201_int = 527323; // 0xddc PushI
	var_202_int = 28641; // 0xddd PushI
	var_203_int = 28640; // 0xdde PushI
	AddReply(var_201_int, var_202_int, var_203_int); // 0xddf TObjFunc
	
Label_3553:
	var_204_int = 526694; // 0xde1 PushI
	var_205_int = -1; // 0xde2 PushI
	var_206_int = 27970; // 0xde3 PushI
	AddReply(var_204_int, var_205_int, var_206_int); // 0xde4 TObjFunc
	var_207_int = 526695; // 0xde6 PushI
	var_208_int = -1; // 0xde7 PushI
	var_209_int = 27971; // 0xde8 PushI
	AddReply(var_207_int, var_208_int, var_209_int); // 0xde9 TObjFunc
	return 0; // 0xdeb Return
	
Label_3564:
	var_210_int = 28641; // 0xdec PushI
	var_211_bool = var_67_bool == var_210_int; // 0xded Eq
	if(var_211_bool == 0) goto Label_3587; // 0xdee JumpB
	var_212_string = ""; // 0xdef PushV
	var_212_string = "Sly"; // 0xdf0 MovS
	func_3470(var_68_cvector, var_212_string); // 0xdf1 NEW_2
	var_213_int = 527324; // 0xdf3 PushI
	SetMessage(var_213_int); // 0xdf4 TObjFunc
	ClearReplies(); // 0xdf6 TObjFunc
	var_214_int = 527325; // 0xdf8 PushI
	var_215_int = 28644; // 0xdf9 PushI
	var_216_int = 28642; // 0xdfa PushI
	AddReply(var_214_int, var_215_int, var_216_int); // 0xdfb TObjFunc
	var_217_int = 527326; // 0xdfd PushI
	var_218_int = 28645; // 0xdfe PushI
	var_219_int = 28643; // 0xdff PushI
	AddReply(var_217_int, var_218_int, var_219_int); // 0xe00 TObjFunc
	return 0; // 0xe02 Return
	
Label_3587:
	var_220_int = 28645; // 0xe03 PushI
	var_221_bool = var_67_bool == var_220_int; // 0xe04 Eq
	if(var_221_bool == 0) goto Label_3605; // 0xe05 JumpB
	var_222_string = ""; // 0xe06 PushV
	var_222_string = "Neutral"; // 0xe07 MovS
	func_3470(var_68_cvector, var_222_string); // 0xe08 NEW_2
	var_223_int = 527328; // 0xe0a PushI
	SetMessage(var_223_int); // 0xe0b TObjFunc
	ClearReplies(); // 0xe0d TObjFunc
	var_224_int = 527330; // 0xe0f PushI
	var_225_int = 28648; // 0xe10 PushI
	var_226_int = 28647; // 0xe11 PushI
	AddReply(var_224_int, var_225_int, var_226_int); // 0xe12 TObjFunc
	return 0; // 0xe14 Return
	
Label_3605:
	var_227_int = 28644; // 0xe15 PushI
	var_228_bool = var_67_bool == var_227_int; // 0xe16 Eq
	if(var_228_bool == 0) goto Label_3623; // 0xe17 JumpB
	var_229_string = ""; // 0xe18 PushV
	var_229_string = "Sly"; // 0xe19 MovS
	func_3470(var_68_cvector, var_229_string); // 0xe1a NEW_2
	var_230_int = 527327; // 0xe1c PushI
	SetMessage(var_230_int); // 0xe1d TObjFunc
	ClearReplies(); // 0xe1f TObjFunc
	var_231_int = 527329; // 0xe21 PushI
	var_232_int = 28648; // 0xe22 PushI
	var_233_int = 28646; // 0xe23 PushI
	AddReply(var_231_int, var_232_int, var_233_int); // 0xe24 TObjFunc
	return 0; // 0xe26 Return
	
Label_3623:
	var_234_int = 28648; // 0xe27 PushI
	var_235_bool = var_67_bool == var_234_int; // 0xe28 Eq
	if(var_235_bool == 0) goto Label_3641; // 0xe29 JumpB
	var_236_string = ""; // 0xe2a PushV
	var_236_string = "Neutral"; // 0xe2b MovS
	func_3470(var_68_cvector, var_236_string); // 0xe2c NEW_2
	var_237_int = 527331; // 0xe2e PushI
	SetMessage(var_237_int); // 0xe2f TObjFunc
	ClearReplies(); // 0xe31 TObjFunc
	var_238_int = 527332; // 0xe33 PushI
	var_239_int = 28650; // 0xe34 PushI
	var_240_int = 28649; // 0xe35 PushI
	AddReply(var_238_int, var_239_int, var_240_int); // 0xe36 TObjFunc
	return 0; // 0xe38 Return
	
Label_3641:
	var_241_int = 28650; // 0xe39 PushI
	var_242_bool = var_67_bool == var_241_int; // 0xe3a Eq
	if(var_242_bool == 0) goto Label_3659; // 0xe3b JumpB
	var_243_string = ""; // 0xe3c PushV
	var_243_string = "Fear"; // 0xe3d MovS
	func_3470(var_68_cvector, var_243_string); // 0xe3e NEW_2
	var_244_int = 527333; // 0xe40 PushI
	SetMessage(var_244_int); // 0xe41 TObjFunc
	ClearReplies(); // 0xe43 TObjFunc
	var_245_int = 527334; // 0xe45 PushI
	var_246_int = 28652; // 0xe46 PushI
	var_247_int = 28651; // 0xe47 PushI
	AddReply(var_245_int, var_246_int, var_247_int); // 0xe48 TObjFunc
	return 0; // 0xe4a Return
	
Label_3659:
	var_248_int = 28652; // 0xe4b PushI
	var_249_bool = var_67_bool == var_248_int; // 0xe4c Eq
	if(var_249_bool == 0) goto Label_3677; // 0xe4d JumpB
	var_250_string = ""; // 0xe4e PushV
	var_250_string = "Fear"; // 0xe4f MovS
	func_3470(var_68_cvector, var_250_string); // 0xe50 NEW_2
	var_251_int = 527335; // 0xe52 PushI
	SetMessage(var_251_int); // 0xe53 TObjFunc
	ClearReplies(); // 0xe55 TObjFunc
	var_252_int = 527336; // 0xe57 PushI
	var_253_int = 28654; // 0xe58 PushI
	var_254_int = 28653; // 0xe59 PushI
	AddReply(var_252_int, var_253_int, var_254_int); // 0xe5a TObjFunc
	return 0; // 0xe5c Return
	
Label_3677:
	var_255_int = 28654; // 0xe5d PushI
	var_256_bool = var_67_bool == var_255_int; // 0xe5e Eq
	if(var_256_bool == 0) goto Label_3695; // 0xe5f JumpB
	var_257_string = ""; // 0xe60 PushV
	var_257_string = "Neutral"; // 0xe61 MovS
	func_3470(var_68_cvector, var_257_string); // 0xe62 NEW_2
	var_258_int = 527337; // 0xe64 PushI
	SetMessage(var_258_int); // 0xe65 TObjFunc
	ClearReplies(); // 0xe67 TObjFunc
	var_259_int = 527338; // 0xe69 PushI
	var_260_int = -1; // 0xe6a PushI
	var_261_int = 28655; // 0xe6b PushI
	AddReply(var_259_int, var_260_int, var_261_int); // 0xe6c TObjFunc
	return 0; // 0xe6e Return
	
Label_3695:
	var_3_object = 1; // 0xe6f TMovB
	var_262_bool = 0; // 0xe70 PushV
	func_4764(var_262_bool); // 0xe71 NEW_2
	if(var_262_bool == 0) goto Label_3703; // 0xe73 JumpB
	lshStopAnimation(); // 0xe74 Func
	goto Label_3705; // 0xe76 Jump
	
Label_3705:
	return 0; // 0xe79 Return
	
Label_3703:
	StopAnimation(); // 0xe77 Func
	
Label_3707:
	return 0; // 0xe7b Return
}


task_26_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_object, var_37_object, var_38_object, var_39_string, var_40_bool, var_41_object, var_42_object, var_43_object, var_44_string, var_45_bool, var_46_object, var_47_object, var_48_object, var_49_string, var_50_bool, var_51_object, var_52_object, var_53_object, var_54_string, var_55_bool, var_56_object, var_57_object, var_58_object, var_59_string, var_60_bool, var_61_object, var_62_object, var_63_object, var_64_string, var_65_bool, var_66_int, var_67_int, var_68_cvector)
{
	var_69_int = 1; // 0xf23 PushI
	if(var_69_int == 0) goto Label_4012; // 0xf24 JumpB
	func_4639(); // 0xf26 NEW_2
	var_71_int = 41234; // 0xf28 PushI
	var_72_bool = var_67_int == var_71_int; // 0xf29 Eq
	if(var_72_bool == 0) goto Label_3908; // 0xf2a JumpB
	var_73_string = ""; // 0xf2b PushV
	var_73_string = "Neutral"; // 0xf2c MovS
	func_3852(var_68_cvector, var_73_string); // 0xf2d NEW_2
	var_90_int = 539291; // 0xf2f PushI
	SetMessage(var_90_int); // 0xf30 TObjFunc
	ClearReplies(); // 0xf32 TObjFunc
	var_91_int = 542571; // 0xf34 PushI
	var_92_int = 44971; // 0xf35 PushI
	var_93_int = 44970; // 0xf36 PushI
	AddReply(var_91_int, var_92_int, var_93_int); // 0xf37 TObjFunc
	var_94_int = 539292; // 0xf39 PushI
	var_95_int = -1; // 0xf3a PushI
	var_96_int = 41235; // 0xf3b PushI
	AddReply(var_94_int, var_95_int, var_96_int); // 0xf3c TObjFunc
	var_97_int = 542570; // 0xf3e PushI
	var_98_int = -1; // 0xf3f PushI
	var_99_int = 44969; // 0xf40 PushI
	AddReply(var_97_int, var_98_int, var_99_int); // 0xf41 TObjFunc
	return 0; // 0xf43 Return
	
Label_3908:
	var_100_int = 44971; // 0xf44 PushI
	var_101_bool = var_67_int == var_100_int; // 0xf45 Eq
	if(var_101_bool == 0) goto Label_3931; // 0xf46 JumpB
	var_102_string = ""; // 0xf47 PushV
	var_102_string = "Fear"; // 0xf48 MovS
	func_3852(var_68_cvector, var_102_string); // 0xf49 NEW_2
	var_103_int = 542572; // 0xf4b PushI
	SetMessage(var_103_int); // 0xf4c TObjFunc
	ClearReplies(); // 0xf4e TObjFunc
	var_104_int = 542573; // 0xf50 PushI
	var_105_int = 44974; // 0xf51 PushI
	var_106_int = 44972; // 0xf52 PushI
	AddReply(var_104_int, var_105_int, var_106_int); // 0xf53 TObjFunc
	var_107_int = 542574; // 0xf55 PushI
	var_108_int = 44974; // 0xf56 PushI
	var_109_int = 44973; // 0xf57 PushI
	AddReply(var_107_int, var_108_int, var_109_int); // 0xf58 TObjFunc
	return 0; // 0xf5a Return
	
Label_3931:
	var_110_int = 44974; // 0xf5b PushI
	var_111_bool = var_67_int == var_110_int; // 0xf5c Eq
	if(var_111_bool == 0) goto Label_3954; // 0xf5d JumpB
	var_112_string = ""; // 0xf5e PushV
	var_112_string = "Fear"; // 0xf5f MovS
	func_3852(var_68_cvector, var_112_string); // 0xf60 NEW_2
	var_113_int = 542575; // 0xf62 PushI
	SetMessage(var_113_int); // 0xf63 TObjFunc
	ClearReplies(); // 0xf65 TObjFunc
	var_114_int = 542576; // 0xf67 PushI
	var_115_int = 44978; // 0xf68 PushI
	var_116_int = 44976; // 0xf69 PushI
	AddReply(var_114_int, var_115_int, var_116_int); // 0xf6a TObjFunc
	var_117_int = 542577; // 0xf6c PushI
	var_118_int = -1; // 0xf6d PushI
	var_119_int = 44977; // 0xf6e PushI
	AddReply(var_117_int, var_118_int, var_119_int); // 0xf6f TObjFunc
	return 0; // 0xf71 Return
	
Label_3954:
	var_120_int = 44978; // 0xf72 PushI
	var_121_bool = var_67_int == var_120_int; // 0xf73 Eq
	if(var_121_bool == 0) goto Label_3977; // 0xf74 JumpB
	var_122_string = ""; // 0xf75 PushV
	var_122_string = "Neutral"; // 0xf76 MovS
	func_3852(var_68_cvector, var_122_string); // 0xf77 NEW_2
	var_123_int = 542578; // 0xf79 PushI
	SetMessage(var_123_int); // 0xf7a TObjFunc
	ClearReplies(); // 0xf7c TObjFunc
	var_124_int = 542579; // 0xf7e PushI
	var_125_int = 44980; // 0xf7f PushI
	var_126_int = 44979; // 0xf80 PushI
	AddReply(var_124_int, var_125_int, var_126_int); // 0xf81 TObjFunc
	var_127_int = 542583; // 0xf83 PushI
	var_128_int = -1; // 0xf84 PushI
	var_129_int = 44983; // 0xf85 PushI
	AddReply(var_127_int, var_128_int, var_129_int); // 0xf86 TObjFunc
	return 0; // 0xf88 Return
	
Label_3977:
	var_130_int = 44980; // 0xf89 PushI
	var_131_bool = var_67_int == var_130_int; // 0xf8a Eq
	if(var_131_bool == 0) goto Label_4000; // 0xf8b JumpB
	var_132_string = ""; // 0xf8c PushV
	var_132_string = "Neutral"; // 0xf8d MovS
	func_3852(var_68_cvector, var_132_string); // 0xf8e NEW_2
	var_133_int = 542580; // 0xf90 PushI
	SetMessage(var_133_int); // 0xf91 TObjFunc
	ClearReplies(); // 0xf93 TObjFunc
	var_134_int = 542581; // 0xf95 PushI
	var_135_int = -1; // 0xf96 PushI
	var_136_int = 44981; // 0xf97 PushI
	AddReply(var_134_int, var_135_int, var_136_int); // 0xf98 TObjFunc
	var_137_int = 542582; // 0xf9a PushI
	var_138_int = -1; // 0xf9b PushI
	var_139_int = 44982; // 0xf9c PushI
	AddReply(var_137_int, var_138_int, var_139_int); // 0xf9d TObjFunc
	return 0; // 0xf9f Return
	
Label_4000:
	var_3_object = 1; // 0xfa0 TMovB
	var_140_bool = 0; // 0xfa1 PushV
	func_4764(var_140_bool); // 0xfa2 NEW_2
	if(var_140_bool == 0) goto Label_4008; // 0xfa4 JumpB
	lshStopAnimation(); // 0xfa5 Func
	goto Label_4010; // 0xfa7 Jump
	
Label_4010:
	return 0; // 0xfaa Return
	
Label_4008:
	StopAnimation(); // 0xfa8 Func
	
Label_4012:
	return 0; // 0xfac Return
}


task_27_event_7(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_object, var_37_object, var_38_object, var_39_string, var_40_bool, var_41_object, var_42_object, var_43_object, var_44_string, var_45_bool, var_46_object, var_47_object, var_48_object, var_49_string, var_50_bool, var_51_object, var_52_object, var_53_object, var_54_string, var_55_bool, var_56_object, var_57_object, var_58_object, var_59_string, var_60_bool, var_61_object, var_62_object, var_63_object, var_64_string, var_65_bool, var_66_cvector, var_67_int)
{
	var_68_int = 10; // 0xffd PushI
	var_69_bool = var_67_int == var_68_int; // 0xffe Eq
	if(var_69_bool == 0) goto Label_4129; // 0xfff JumpB
	func_4088(); // 0x1001 NEW_2
	var_71_bool = 0; // 0x1003 PushV
	var_71_bool = 0; // 0x1004 MovB
	var_72_bool = 0; // 0x1005 PushV
	func_4302(var_72_bool); // 0x1006 NEW_2
	if(var_72_bool == 0) goto Label_4110; // 0x1008 JumpB
	var_75_bool = 0; // 0x1009 PushV
	func_4057(var_75_bool); // 0x100a NEW_2
	if(var_75_bool == 0) goto Label_4110; // 0x100c JumpB
	var_71_bool = 1; // 0x100d MovB
	
Label_4110:
	if(var_71_bool == 0) goto Label_4123; // 0x100e JumpB
	var_92_bool = 0; // 0x100f PushV
	func_4037(var_92_bool); // 0x1010 NEW_2
	if(var_92_bool == 0) goto Label_4122; // 0x1012 JumpB
	var_111_bool = 0; var_112_object = Obj(); // 0x1013 PushV
	var_113_object = Obj(); // 0x1014 PushV
	func_4674(var_113_object); // 0x1015 NEW_2
	var_112_object = var_113_object; // 0x1016 Mov
	func_4452(var_112_object); // 0x1018 NEW_2
	
Label_4122:
	goto Label_4129; // 0x101a Jump
	
Label_4129:
	return 0; // 0x1021 Return
	
Label_4123:
	func_4052(var_67_int); // 0x101c NEW_2
	func_4079(); // 0x101f NEW_2
}


task_27_event_6(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_object, var_37_object, var_38_object, var_39_string, var_40_bool, var_41_object, var_42_object, var_43_object, var_44_string, var_45_bool, var_46_object, var_47_object, var_48_object, var_49_string, var_50_bool, var_51_object, var_52_object, var_53_object, var_54_string, var_55_bool, var_56_object, var_57_object, var_58_object, var_59_string, var_60_bool, var_61_object, var_62_object, var_63_object, var_64_string, var_65_bool, var_66_cvector)
{
	func_4270(); // 0x1023 NEW_2
	func_4088(); // 0x1026 NEW_2
	lshStopSpeech(); // 0x1028 Func
	lshStopAnimation(); // 0x102a Func
	StopAsync(); // 0x102c Func
	Hold(); // 0x102e Func
	return 0; // 0x1030 Return
}


task_27_event_5(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_object, var_37_object, var_38_object, var_39_string, var_40_bool, var_41_object, var_42_object, var_43_object, var_44_string, var_45_bool, var_46_object, var_47_object, var_48_object, var_49_string, var_50_bool, var_51_object, var_52_object, var_53_object, var_54_string, var_55_bool, var_56_object, var_57_object, var_58_object, var_59_string, var_60_bool, var_61_object, var_62_object, var_63_object, var_64_string, var_65_bool, var_66_cvector)
{
	StopGroup0(); // 0x1031 Func
	func_4088(); // 0x1034 NEW_2
	var_68_string = ""; // 0x1036 PushV
	var_68_string = "Neutral"; // 0x1037 MovS
	func_4593(var_68_string); // 0x1038 NEW_2
	func_4079(); // 0x103b NEW_2
	return 0; // 0x103d Return
}


task_27_event_45(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_object, var_37_object, var_38_object, var_39_string, var_40_bool, var_41_object, var_42_object, var_43_object, var_44_string, var_45_bool, var_46_object, var_47_object, var_48_object, var_49_string, var_50_bool, var_51_object, var_52_object, var_53_object, var_54_string, var_55_bool, var_56_object, var_57_object, var_58_object, var_59_string, var_60_bool, var_61_object, var_62_object, var_63_object, var_64_string, var_65_bool, var_66_cvector, var_67_bool)
{
	var_68_bool = var_67_bool; // 0x103f Push
	if(var_68_bool == 0) goto Label_4165; // 0x1040 JumpB
	func_4079(); // 0x1042 NEW_2
	goto Label_4169; // 0x1044 Jump
	
Label_4169:
	return 0; // 0x1049 Return
	
Label_4165:
	var_74_string = ""; // 0x1045 PushV
	var_74_string = "Neutral"; // 0x1046 MovS
	func_4593(var_74_string); // 0x1047 NEW_2
}


task_27_event_0(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_object, var_37_object, var_38_object, var_39_string, var_40_bool, var_41_object, var_42_object, var_43_object, var_44_string, var_45_bool, var_46_object, var_47_object, var_48_object, var_49_string, var_50_bool, var_51_object, var_52_object, var_53_object, var_54_string, var_55_bool, var_56_object, var_57_object, var_58_object, var_59_string, var_60_bool, var_61_object, var_62_object, var_63_object, var_64_string, var_65_bool, var_66_cvector, var_67_object)
{
	var_68_bool = 0; var_69_bool = 0; // 0x104a PushV
	IsOverrideActive(var_69_bool); // 0x104b Func
	var_70_bool = var_69_bool == 0; // 0x104d Not
	if(var_70_bool == 0) goto Label_4198; // 0x104e JumpB
	EventDisable(0); // 0x104f EventDisable
	func_4270(); // 0x1051 NEW_2
	var_71_bool = 0; var_72_object = Obj(); // 0x1053 PushV
	var_72_object = var_67_object; // 0x1054 Mov
	func_4293(var_72_object); // 0x1055 NEW_2
	EventEnable(0); // 0x1057 EventEnable
	var_85_object = Obj(); // 0x1058 PushV
	var_85_object = var_67_object; // 0x1059 Mov
	func_5426(var_59_string, var_60_bool, var_61_object, var_62_object, var_63_object, var_64_string, var_65_bool, var_66_cvector, var_67_object, var_68_bool, var_69_bool, var_85_object); // 0x105a NEW_2
	var_1277_string = ""; // 0x105c PushV
	var_1277_string = "Neutral"; // 0x105d MovS
	func_4593(var_1277_string); // 0x105e NEW_2
	func_4088(); // 0x1061 NEW_2
	func_4079(); // 0x1064 NEW_2
	
Label_4198:
	return 2; // 0x1066 Return
}


main(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_object, var_37_object, var_38_object, var_39_string, var_40_bool, var_41_object, var_42_object, var_43_object, var_44_string, var_45_bool, var_46_object, var_47_object, var_48_object, var_49_string, var_50_bool, var_51_object, var_52_object, var_53_object, var_54_string, var_55_bool, var_56_object, var_57_object, var_58_object, var_59_string, var_60_bool, var_61_object, var_62_object, var_63_object, var_64_string, var_65_bool, var_66_cvector)
{
	var_67_bool = GlobalVars[1]; // 0xfad PushGE
	var_67_bool = 0; // 0xfae MovB
	GlobalVars[1] = var_67_bool; // 0xfaf PopGE
	var_68_int = GlobalVars[2]; // 0xfb0 PushGE
	var_68_int = -1; // 0xfb1 MovI
	GlobalVars[2] = var_68_int; // 0xfb2 PopGE
	func_4023(var_66_cvector); // 0xfb4 NEW_2
	return 0; // 0xfb6 Return
}


func_0(var_0_bool)
{
	DoTrade(); // 0x1 Func
	var_0_bool = 0; // 0x3 TMovB
	
Label_4:
	var_536_string = ""; // 0x4 PushV
	var_536_string = "Neutral"; // 0x5 MovS
	func_4593(var_536_string); // 0x6 NEW_2
	lshWaitForAnimEnd(); // 0x8 Func
	var_537_bool = var_0_bool; // 0xa PushT
	if(var_537_bool == 0) goto Label_13; // 0xb JumpB
	return 0; // 0xc Return
	
Label_13:
	goto Label_4; // 0xd Jump
}


func_4609(var_388_string, var_389_bool)
{
	var_392_bool = 0; var_393_float = 0; var_394_float = 0; var_395_bool = 0; var_396_float = 0; var_397_float = 0; // 0x1201 PushV
	lshHasAnimation(var_395_bool, var_388_string); // 0x1202 Func
	var_398_bool = var_395_bool; // 0x1204 Push
	if(var_398_bool == 0) goto Label_4619; // 0x1205 JumpB
	lshGetAnimTimes(var_388_string, var_396_float, var_397_float); // 0x1206 Func
	lshPlayAnimation(var_396_float, var_397_float, var_389_bool); // 0x1208 Func
	goto Label_4623; // 0x120a Jump
	
Label_4623:
	return 6; // 0x120f Return
	
Label_4619:
	var_399_string = "Can't find lsh animation : "; // 0x120b PushS
	var_400_int = var_399_string + var_388_string; // 0x120c Add
	Trace(var_400_int); // 0x120d Func
}


func_5379(var_104_int, var_105_string)
{
	var_106_int = 0; var_107_int = 0; // 0x1503 PushV
	GetInvItemByName(var_107_int, var_105_string); // 0x1504 Func
	var_104_int = var_107_int; // 0x1506 Mov
	return 2; // 0x1507 Return
}


func_2308(var_0_bool, var_1_object, var_2_object, var_3_object, var_852_object, var_853_object)
{
	var_0_bool = var_853_object; // 0x905 TMov
	var_1_object = var_852_object; // 0x906 TMov
	var_3_object = 0; // 0x907 TMovB
	var_858_int = 1; // 0x908 PushI
	if(var_858_int == 0) goto Label_2341; // 0x909 JumpB
	var_859_string = ""; // 0x90a PushV
	var_859_string = "Sly"; // 0x90b MovS
	func_2371(var_853_object, var_859_string); // 0x90c NEW_2
	var_867_int = 526673; // 0x90e PushI
	SetMessage(var_867_int); // 0x90f TObjFunc
	ClearReplies(); // 0x911 TObjFunc
	var_868_int = 526674; // 0x913 PushI
	var_869_int = -1; // 0x914 PushI
	var_870_int = 27950; // 0x915 PushI
	AddReply(var_868_int, var_869_int, var_870_int); // 0x916 TObjFunc
	var_871_int = 526675; // 0x918 PushI
	var_872_int = -1; // 0x919 PushI
	var_873_int = 27951; // 0x91a PushI
	AddReply(var_871_int, var_872_int, var_873_int); // 0x91b TObjFunc
	var_874_int = 528785; // 0x91d PushI
	var_875_int = -1; // 0x91e PushI
	var_876_int = 30197; // 0x91f PushI
	AddReply(var_874_int, var_875_int, var_876_int); // 0x920 TObjFunc
	goto Label_2341; // 0x922 Jump
	
Label_2341:
	var_877_bool = 0; // 0x925 PushV
	func_4764(var_877_bool); // 0x926 NEW_2
	if(var_877_bool == 0) goto Label_2356; // 0x928 JumpB
	
Label_2345:
	lshWaitForAnimEnd(); // 0x929 Func
	var_878_object = var_3_object; // 0x92b PushT
	if(var_878_object == 0) goto Label_2350; // 0x92c JumpB
	goto Label_2355; // 0x92d Jump
	
Label_2355:
	goto Label_2370; // 0x933 Jump
	
Label_2370:
	return 0; // 0x942 Return
	
Label_2350:
	var_879_string = ""; // 0x92e PushV
	var_879_string = var_2_object; // 0x92f MovT
	func_4593(var_879_string); // 0x930 NEW_2
	goto Label_2345; // 0x932 Jump
	
Label_2356:
	var_880_string = "all"; // 0x934 PushS
	var_881_string = "idle"; // 0x935 PushS
	PlayAnimation(var_880_string, var_881_string); // 0x936 Func
	
Label_2360:
	WaitForAnimEnd(); // 0x938 Func
	var_882_object = var_3_object; // 0x93a PushT
	if(var_882_object == 0) goto Label_2365; // 0x93b JumpB
	goto Label_2370; // 0x93c Jump
	
Label_2365:
	var_883_string = "all"; // 0x93d PushS
	var_884_string = "idle"; // 0x93e PushS
	PlayAnimation(var_883_string, var_884_string); // 0x93f Func
	goto Label_2360; // 0x941 Jump
}


func_5384(var_278_int)
{
	var_279_int = 0; var_280_int = 0; // 0x1508 PushV
	var_281_string = "branch"; // 0x1509 PushS
	GetVariable(var_281_string, var_280_int); // 0x150a Func
	var_282_int = 0; // 0x150c PushI
	var_283_bool = var_280_int == var_282_int; // 0x150d Eq
	if(var_283_bool == 0) goto Label_5394; // 0x150e JumpB
	var_278_int = 1; // 0x150f MovI
	return 2; // 0x1510 Return
	
Label_5394:
	var_284_int = 1; // 0x1512 PushI
	var_285_bool = var_280_int == var_284_int; // 0x1513 Eq
	if(var_285_bool == 0) goto Label_5399; // 0x1514 JumpB
	var_278_int = 2; // 0x1515 MovI
	return 2; // 0x1516 Return
	
Label_5399:
	var_278_int = 3; // 0x1517 MovI
	return 2; // 0x1518 Return
}


func_5132(var_93_bool, var_94_object, var_95_int)
{
	var_96_object = Obj(); var_97_object = Obj(); var_98_int = 0; var_99_object = Obj(); var_100_object = Obj(); var_101_int = 0; // 0x140c PushV
	var_102_object = Obj(); // 0x140d PushV
	func_5119(var_102_object); // 0x140e NEW_2
	var_99_object = var_102_object; // 0x140f Mov
	Find(var_95_int, var_100_object); // 0x1411 ObjFunc
	var_107_bool = var_100_object == 0; // 0x1413 Not
	if(var_107_bool == 0) goto Label_5147; // 0x1414 JumpB
	var_108_string = "Can't find diary parent with id: "; // 0x1415 PushS
	var_109_int = var_108_string + var_95_int; // 0x1416 Add
	Trace(var_109_int); // 0x1417 Func
	var_93_bool = 0; // 0x1419 MovB
	return 6; // 0x141a Return
	
Label_5147:
	AddChild(var_94_object); // 0x141b ObjFunc
	var_110_int = 7; // 0x141d PushI
	SendWorldWndMessage(var_110_int); // 0x141e Func
	GetCategory(var_101_int); // 0x1420 ObjFunc
	SetDiarySection(var_101_int); // 0x1422 Func
	var_93_bool = 0; // 0x1424 MovB
	return 6; // 0x1425 Return
}


func_3852(var_2_object, var_1249_string)
{
	var_1250_bool = 0; // 0xf0d PushV
	func_4764(var_1250_bool); // 0xf0e NEW_2
	var_1251_bool = var_1250_bool == 0; // 0xf10 Not
	if(var_1251_bool == 0) goto Label_3859; // 0xf11 JumpB
	return 0; // 0xf12 Return
	
Label_3859:
	var_1252_bool = var_1249_string == var_2_object; // 0xf13 Eq
	if(var_1252_bool == 0) goto Label_3862; // 0xf14 JumpB
	return 0; // 0xf15 Return
	
Label_3862:
	var_1253_string = ""; var_1254_bool = 0; // 0xf16 PushV
	var_1253_string = var_1249_string; // 0xf17 Mov
	var_1255_string = ""; // 0xf18 PushS
	var_1256_bool = var_1249_string == var_1255_string; // 0xf19 Eq
	if(var_1256_bool == 0) goto Label_3869; // 0xf1a JumpB
	var_1254_bool = 0; // 0xf1b MovB
	goto Label_3870; // 0xf1c Jump
	
Label_3870:
	func_4609(var_1253_string, var_1254_bool); // 0xf1e NEW_2
	var_2_object = var_1249_string; // 0xf20 TMov
	return 0; // 0xf21 Return
	
Label_3869:
	var_1254_bool = 1; // 0xf1d MovB
}


func_4624(var_321_bool, var_322_string)
{
	var_323_bool = 0; var_324_bool = 0; // 0x1210 PushV
	var_325_bool = 0; // 0x1211 PushV
	func_4764(var_325_bool); // 0x1212 NEW_2
	if(var_325_bool == 0) goto Label_4637; // 0x1214 JumpB
	lshHasSpeech(var_324_bool, var_322_string); // 0x1215 Func
	var_326_bool = var_324_bool; // 0x1217 Push
	if(var_326_bool == 0) goto Label_4637; // 0x1218 JumpB
	lshPlaySpeech(var_322_string); // 0x1219 Func
	var_321_bool = 1; // 0x121b MovB
	return 2; // 0x121c Return
	
Label_4637:
	var_321_bool = 0; // 0x121d MovB
	return 2; // 0x121e Return
}


func_22(var_0_bool, var_215_int, var_216_object)
{
	var_218_object = Obj(); var_219_bool = 0; var_220_int = 0; var_221_bool = 0; var_222_object = Obj(); var_223_bool = 0; var_224_int = 0; var_225_bool = 0; // 0x16 PushV
	var_0_bool = var_216_object; // 0x17 TMov
	var_226_bool = 0; var_227_object = Obj(); var_228_float = 0; // 0x18 PushV
	var_227_object = var_216_object; // 0x19 Mov
	var_228_float = 70.0; // 0x1a MovF
	func_4307(var_227_object, var_228_float); // 0x1b NEW_2
	var_273_bool = var_226_bool == 0; // 0x1d Not
	if(var_273_bool == 0) goto Label_33; // 0x1e JumpB
	var_215_int = -2; // 0x1f MovI
	return 8; // 0x20 Return
	
Label_33:
	CreateDialog(var_222_object); // 0x21 Func
	var_274_int = 0; // 0x23 PushV
	func_4758(var_274_int); // 0x24 NEW_2
	SetNPCName(var_274_int); // 0x26 ObjFunc
	var_275_int = 0; // 0x28 PushV
	func_4756(var_275_int); // 0x29 NEW_2
	SetNPCDescription(var_275_int); // 0x2b ObjFunc
	var_276_string = ""; // 0x2d PushV
	func_4760(var_276_string); // 0x2e NEW_2
	SetPhoto(var_276_string); // 0x30 ObjFunc
	var_277_string = ""; // 0x32 PushV
	func_4762(var_277_string); // 0x33 NEW_2
	SetPhoto2(var_277_string); // 0x35 ObjFunc
	var_278_int = 0; // 0x37 PushV
	func_5384(var_278_int); // 0x38 NEW_2
	SetPlayerName(var_278_int); // 0x3a ObjFunc
	var_224_int = -1; // 0x3c MovI
	IsOverrideActive(var_223_bool); // 0x3d Func
	var_286_bool = var_223_bool; // 0x3f Push
	if(var_286_bool == 0) goto Label_67; // 0x40 JumpB
	var_215_int = -2; // 0x41 MovI
	return 8; // 0x42 Return
	
Label_67:
	DoDialog(var_222_object); // 0x43 Func
	var_287_bool = 0; var_288_object = Obj(); // 0x45 PushV
	var_289_object = Obj(); // 0x46 PushV
	func_4674(var_289_object); // 0x47 NEW_2
	var_288_object = var_289_object; // 0x48 Mov
	func_4394(var_287_bool, var_288_object); // 0x4a NEW_2
	var_377_object = Obj(); var_378_object = Obj(); // 0x4c PushV
	var_377_object = var_216_object; // 0x4d Mov
	var_378_object = var_222_object; // 0x4e Mov
	TaskCall(2); // 0x4f TaskCall
	func_103(var_379_object, var_380_object, var_381_string, var_382_bool, var_377_object, var_378_object); // 0x50 NEW_2
	TaskReturn(); // 0x51 TaskReturn
	IsDialogEnd(var_225_bool); // 0x53 ObjFunc
	
Label_85:
	var_426_bool = var_225_bool == 0; // 0x55 Not
	if(var_426_bool == 0) goto Label_92; // 0x56 JumpB
	sync(); // 0x57 Func
	IsDialogEnd(var_225_bool); // 0x59 ObjFunc
	goto Label_85; // 0x5b Jump
	
Label_92:
	var_427_object = Obj(); // 0x5c PushV
	var_427_object = var_216_object; // 0x5d Mov
	func_4376(); // 0x5e NEW_2
	StopDialog(var_222_object); // 0x60 Func
	GetReturnValue(var_224_int); // 0x62 ObjFunc
	var_215_int = var_224_int; // 0x64 Mov
	return 8; // 0x65 Return
}


func_4376()
{
	var_428_bool = 0; var_429_bool = 0; // 0x1118 PushV
	var_430_bool = 1; // 0x1119 PushB
	CameraSwitchToNormal(var_430_bool); // 0x111a Func
	var_431_bool = 0; // 0x111c PushV
	func_4764(var_431_bool); // 0x111d NEW_2
	if(var_431_bool == 0) goto Label_4385; // 0x111f JumpB
	goto Label_4393; // 0x1120 Jump
	
Label_4393:
	return 2; // 0x1129 Return
	
Label_4385:
	var_432_string = "head"; // 0x1121 PushS
	HasAnimationTrack(var_429_bool, var_432_string); // 0x1122 Func
	var_433_bool = var_429_bool; // 0x1124 Push
	if(var_433_bool == 0) goto Label_4393; // 0x1125 JumpB
	var_434_string = "head"; // 0x1126 PushS
	UnlookAsync(var_434_string); // 0x1127 Func
}


func_5401(var_191_int)
{
	var_192_int = 0; var_193_int = 0; // 0x1519 PushV
	var_194_string = "branch"; // 0x151a PushS
	GetVariable(var_194_string, var_193_int); // 0x151b Func
	var_191_int = var_193_int; // 0x151d Mov
	return 2; // 0x151e Return
}


func_2587(var_2_object, var_923_string)
{
	var_924_bool = 0; // 0xa1c PushV
	func_4764(var_924_bool); // 0xa1d NEW_2
	var_925_bool = var_924_bool == 0; // 0xa1f Not
	if(var_925_bool == 0) goto Label_2594; // 0xa20 JumpB
	return 0; // 0xa21 Return
	
Label_2594:
	var_926_bool = var_923_string == var_2_object; // 0xa22 Eq
	if(var_926_bool == 0) goto Label_2597; // 0xa23 JumpB
	return 0; // 0xa24 Return
	
Label_2597:
	var_927_string = ""; var_928_bool = 0; // 0xa25 PushV
	var_927_string = var_923_string; // 0xa26 Mov
	var_929_string = ""; // 0xa27 PushS
	var_930_bool = var_923_string == var_929_string; // 0xa28 Eq
	if(var_930_bool == 0) goto Label_2604; // 0xa29 JumpB
	var_928_bool = 0; // 0xa2a MovB
	goto Label_2605; // 0xa2b Jump
	
Label_2605:
	func_4609(var_927_string, var_928_bool); // 0xa2d NEW_2
	var_2_object = var_923_string; // 0xa2f TMov
	return 0; // 0xa30 Return
	
Label_2604:
	var_928_bool = 1; // 0xa2c MovB
}


func_1564(var_0_bool, var_543_int, var_544_object)
{
	var_546_object = Obj(); var_547_bool = 0; var_548_int = 0; var_549_bool = 0; var_550_object = Obj(); var_551_bool = 0; var_552_int = 0; var_553_bool = 0; // 0x61c PushV
	var_0_bool = var_544_object; // 0x61d TMov
	var_554_bool = 0; var_555_object = Obj(); var_556_float = 0; // 0x61e PushV
	var_555_object = var_544_object; // 0x61f Mov
	var_556_float = 70.0; // 0x620 MovF
	func_4307(var_555_object, var_556_float); // 0x621 NEW_2
	var_557_bool = var_554_bool == 0; // 0x623 Not
	if(var_557_bool == 0) goto Label_1575; // 0x624 JumpB
	var_543_int = -2; // 0x625 MovI
	return 8; // 0x626 Return
	
Label_1575:
	CreateDialog(var_550_object); // 0x627 Func
	var_558_int = 0; // 0x629 PushV
	func_4758(var_558_int); // 0x62a NEW_2
	SetNPCName(var_558_int); // 0x62c ObjFunc
	var_559_int = 0; // 0x62e PushV
	func_4756(var_559_int); // 0x62f NEW_2
	SetNPCDescription(var_559_int); // 0x631 ObjFunc
	var_560_string = ""; // 0x633 PushV
	func_4760(var_560_string); // 0x634 NEW_2
	SetPhoto(var_560_string); // 0x636 ObjFunc
	var_561_string = ""; // 0x638 PushV
	func_4762(var_561_string); // 0x639 NEW_2
	SetPhoto2(var_561_string); // 0x63b ObjFunc
	var_562_int = 0; // 0x63d PushV
	func_5384(var_562_int); // 0x63e NEW_2
	SetPlayerName(var_562_int); // 0x640 ObjFunc
	var_552_int = -1; // 0x642 MovI
	IsOverrideActive(var_551_bool); // 0x643 Func
	var_563_bool = var_551_bool; // 0x645 Push
	if(var_563_bool == 0) goto Label_1609; // 0x646 JumpB
	var_543_int = -2; // 0x647 MovI
	return 8; // 0x648 Return
	
Label_1609:
	DoDialog(var_550_object); // 0x649 Func
	var_564_bool = 0; var_565_object = Obj(); // 0x64b PushV
	var_566_object = Obj(); // 0x64c PushV
	func_4674(var_566_object); // 0x64d NEW_2
	var_565_object = var_566_object; // 0x64e Mov
	func_4394(var_564_bool, var_565_object); // 0x650 NEW_2
	var_567_object = Obj(); var_568_object = Obj(); // 0x652 PushV
	var_567_object = var_544_object; // 0x653 Mov
	var_568_object = var_550_object; // 0x654 Mov
	TaskCall(8); // 0x655 TaskCall
	func_1645(var_569_object, var_570_object, var_571_string, var_572_bool, var_567_object, var_568_object); // 0x656 NEW_2
	TaskReturn(); // 0x657 TaskReturn
	IsDialogEnd(var_553_bool); // 0x659 ObjFunc
	
Label_1627:
	var_600_bool = var_553_bool == 0; // 0x65b Not
	if(var_600_bool == 0) goto Label_1634; // 0x65c JumpB
	sync(); // 0x65d Func
	IsDialogEnd(var_553_bool); // 0x65f ObjFunc
	goto Label_1627; // 0x661 Jump
	
Label_1634:
	var_601_object = Obj(); // 0x662 PushV
	var_601_object = var_544_object; // 0x663 Mov
	func_4376(); // 0x664 NEW_2
	StopDialog(var_550_object); // 0x666 Func
	GetReturnValue(var_552_int); // 0x668 ObjFunc
	var_543_int = var_552_int; // 0x66a Mov
	return 8; // 0x66b Return
}


func_3101(var_0_bool, var_1081_int, var_1082_object)
{
	var_1084_object = Obj(); var_1085_bool = 0; var_1086_int = 0; var_1087_bool = 0; var_1088_object = Obj(); var_1089_bool = 0; var_1090_int = 0; var_1091_bool = 0; // 0xc1d PushV
	var_0_bool = var_1082_object; // 0xc1e TMov
	var_1092_bool = 0; var_1093_object = Obj(); var_1094_float = 0; // 0xc1f PushV
	var_1093_object = var_1082_object; // 0xc20 Mov
	var_1094_float = 70.0; // 0xc21 MovF
	func_4307(var_1093_object, var_1094_float); // 0xc22 NEW_2
	var_1095_bool = var_1092_bool == 0; // 0xc24 Not
	if(var_1095_bool == 0) goto Label_3112; // 0xc25 JumpB
	var_1081_int = -2; // 0xc26 MovI
	return 8; // 0xc27 Return
	
Label_3112:
	CreateDialog(var_1088_object); // 0xc28 Func
	var_1096_int = 0; // 0xc2a PushV
	func_4758(var_1096_int); // 0xc2b NEW_2
	SetNPCName(var_1096_int); // 0xc2d ObjFunc
	var_1097_int = 0; // 0xc2f PushV
	func_4756(var_1097_int); // 0xc30 NEW_2
	SetNPCDescription(var_1097_int); // 0xc32 ObjFunc
	var_1098_string = ""; // 0xc34 PushV
	func_4760(var_1098_string); // 0xc35 NEW_2
	SetPhoto(var_1098_string); // 0xc37 ObjFunc
	var_1099_string = ""; // 0xc39 PushV
	func_4762(var_1099_string); // 0xc3a NEW_2
	SetPhoto2(var_1099_string); // 0xc3c ObjFunc
	var_1100_int = 0; // 0xc3e PushV
	func_5384(var_1100_int); // 0xc3f NEW_2
	SetPlayerName(var_1100_int); // 0xc41 ObjFunc
	var_1090_int = -1; // 0xc43 MovI
	IsOverrideActive(var_1089_bool); // 0xc44 Func
	var_1101_bool = var_1089_bool; // 0xc46 Push
	if(var_1101_bool == 0) goto Label_3146; // 0xc47 JumpB
	var_1081_int = -2; // 0xc48 MovI
	return 8; // 0xc49 Return
	
Label_3146:
	DoDialog(var_1088_object); // 0xc4a Func
	var_1102_bool = 0; var_1103_object = Obj(); // 0xc4c PushV
	var_1104_object = Obj(); // 0xc4d PushV
	func_4674(var_1104_object); // 0xc4e NEW_2
	var_1103_object = var_1104_object; // 0xc4f Mov
	func_4394(var_1102_bool, var_1103_object); // 0xc51 NEW_2
	var_1105_object = Obj(); var_1106_object = Obj(); // 0xc53 PushV
	var_1105_object = var_1082_object; // 0xc54 Mov
	var_1106_object = var_1088_object; // 0xc55 Mov
	TaskCall(22); // 0xc56 TaskCall
	func_3182(var_1107_object, var_1108_object, var_1109_string, var_1110_bool, var_1105_object, var_1106_object); // 0xc57 NEW_2
	TaskReturn(); // 0xc58 TaskReturn
	IsDialogEnd(var_1091_bool); // 0xc5a ObjFunc
	
Label_3164:
	var_1135_bool = var_1091_bool == 0; // 0xc5c Not
	if(var_1135_bool == 0) goto Label_3171; // 0xc5d JumpB
	sync(); // 0xc5e Func
	IsDialogEnd(var_1091_bool); // 0xc60 ObjFunc
	goto Label_3164; // 0xc62 Jump
	
Label_3171:
	var_1136_object = Obj(); // 0xc63 PushV
	var_1136_object = var_1082_object; // 0xc64 Mov
	func_4376(); // 0xc65 NEW_2
	StopDialog(var_1088_object); // 0xc67 Func
	GetReturnValue(var_1090_int); // 0xc69 ObjFunc
	var_1081_int = var_1090_int; // 0xc6b Mov
	return 8; // 0xc6c Return
}


func_4893()
{
	var_75_string = "ook11Grif1"; // 0x131e PushS
	var_76_int = 1; // 0x131f PushI
	SetVariable(var_75_string, var_76_int); // 0x1320 Func
	return 0; // 0x1322 Return
}


func_4639()
{
	var_70_bool = 0; // 0x121f PushV
	func_4764(var_70_bool); // 0x1220 NEW_2
	if(var_70_bool == 0) goto Label_4645; // 0x1222 JumpB
	lshStopSpeech(); // 0x1223 Func
	
Label_4645:
	return 0; // 0x1225 Return
}


func_5407(var_500_object)
{
	var_501_bool = 0; var_502_object = Obj(); // 0x1520 PushV
	var_502_object = var_500_object; // 0x1521 Mov
	func_4532(var_501_bool, var_502_object); // 0x1522 NEW_2
	var_533_bool = var_501_bool == 0; // 0x1524 Not
	if(var_533_bool == 0) goto Label_5415; // 0x1525 JumpB
	return 0; // 0x1526 Return
	
Label_5415:
	var_534_object = Obj(); // 0x1527 PushV
	var_534_object = var_500_object; // 0x1528 Mov
	TaskCall(0); // 0x1529 TaskCall
	func_0(var_534_object); // 0x152a NEW_2
	TaskReturn(); // 0x152b TaskReturn
	var_538_object = Obj(); // 0x152d PushV
	var_538_object = var_500_object; // 0x152e Mov
	func_4588(); // 0x152f NEW_2
	return 0; // 0x1531 Return
}


func_4899()
{
	var_207_string = "k4q01"; // 0x1324 PushS
	var_208_int = -1; // 0x1325 PushI
	SetVariable(var_207_string, var_208_int); // 0x1326 Func
	func_5067(); // 0x1329 NEW_2
	return 0; // 0x132b Return
}


func_4646(var_128_string, var_129_int, var_130_int)
{
	var_131_bool = 0; var_132_bool = 0; // 0x1226 PushV
	var_133_bool = 0; var_134_int = 0; var_135_int = 0; // 0x1227 PushV
	var_134_int = var_129_int; // 0x1228 Mov
	var_135_int = var_130_int; // 0x1229 Mov
	func_4690(var_133_bool, var_134_int, var_135_int); // 0x122a NEW_2
	if(var_133_bool == 0) goto Label_4656; // 0x122c JumpB
	var_138_int = 0; // 0x122d PushI
	AddItem(var_132_bool, var_128_string, var_138_int); // 0x122e Func
	
Label_4656:
	return 2; // 0x1230 Return
}


func_2087(var_0_bool, var_1_object, var_2_object, var_3_object, var_788_object, var_789_object)
{
	var_0_bool = var_789_object; // 0x828 TMov
	var_1_object = var_788_object; // 0x829 TMov
	var_3_object = 0; // 0x82a TMovB
	var_794_int = 1; // 0x82b PushI
	if(var_794_int == 0) goto Label_2120; // 0x82c JumpB
	var_795_string = ""; // 0x82d PushV
	var_795_string = "Fear"; // 0x82e MovS
	func_2150(var_789_object, var_795_string); // 0x82f NEW_2
	var_803_int = 526669; // 0x831 PushI
	SetMessage(var_803_int); // 0x832 TObjFunc
	ClearReplies(); // 0x834 TObjFunc
	var_804_int = 526670; // 0x836 PushI
	var_805_int = -1; // 0x837 PushI
	var_806_int = 27946; // 0x838 PushI
	AddReply(var_804_int, var_805_int, var_806_int); // 0x839 TObjFunc
	var_807_int = 526671; // 0x83b PushI
	var_808_int = -1; // 0x83c PushI
	var_809_int = 27947; // 0x83d PushI
	AddReply(var_807_int, var_808_int, var_809_int); // 0x83e TObjFunc
	var_810_int = 528784; // 0x840 PushI
	var_811_int = -1; // 0x841 PushI
	var_812_int = 30196; // 0x842 PushI
	AddReply(var_810_int, var_811_int, var_812_int); // 0x843 TObjFunc
	goto Label_2120; // 0x845 Jump
	
Label_2120:
	var_813_bool = 0; // 0x848 PushV
	func_4764(var_813_bool); // 0x849 NEW_2
	if(var_813_bool == 0) goto Label_2135; // 0x84b JumpB
	
Label_2124:
	lshWaitForAnimEnd(); // 0x84c Func
	var_814_object = var_3_object; // 0x84e PushT
	if(var_814_object == 0) goto Label_2129; // 0x84f JumpB
	goto Label_2134; // 0x850 Jump
	
Label_2134:
	goto Label_2149; // 0x856 Jump
	
Label_2149:
	return 0; // 0x865 Return
	
Label_2129:
	var_815_string = ""; // 0x851 PushV
	var_815_string = var_2_object; // 0x852 MovT
	func_4593(var_815_string); // 0x853 NEW_2
	goto Label_2124; // 0x855 Jump
	
Label_2135:
	var_816_string = "all"; // 0x857 PushS
	var_817_string = "idle"; // 0x858 PushS
	PlayAnimation(var_816_string, var_817_string); // 0x859 Func
	
Label_2139:
	WaitForAnimEnd(); // 0x85b Func
	var_818_object = var_3_object; // 0x85d PushT
	if(var_818_object == 0) goto Label_2144; // 0x85e JumpB
	goto Label_2149; // 0x85f Jump
	
Label_2144:
	var_819_string = "all"; // 0x860 PushS
	var_820_string = "idle"; // 0x861 PushS
	PlayAnimation(var_819_string, var_820_string); // 0x862 Func
	goto Label_2139; // 0x864 Jump
}


func_5160(var_79_object)
{
	var_80_object = Obj(); var_81_object = Obj(); var_82_object = Obj(); var_83_object = Obj(); // 0x1428 PushV
	GetMainOutdoorScene(var_82_object); // 0x1429 Func
	var_84_bool = var_82_object == 0; // 0x142b NullEq
	if(var_84_bool == 0) goto Label_5171; // 0x142c JumpB
	var_85_string = "Can't find main outdoor scene"; // 0x142d PushS
	Trace(var_85_string); // 0x142e Func
	var_83_object = 0; // 0x1430 SetNull
	var_79_object = var_83_object; // 0x1431 Mov
	return 4; // 0x1432 Return
	
Label_5171:
	GetMap(var_83_object); // 0x1433 ObjFunc
	var_79_object = var_83_object; // 0x1435 Mov
	return 4; // 0x1436 Return
}


func_4394(var_287_bool, var_288_object)
{
	var_292_int = 0; var_293_int = 0; var_294_int = 0; var_295_int = 0; // 0x112a PushV
	var_296_string = "voice_common"; // 0x112b PushS
	GetVariable(var_296_string, var_294_int); // 0x112c Func
	var_297_int = var_294_int; // 0x112e Push
	if(var_297_int == 0) goto Label_4432; // 0x112f JumpB
	var_298_bool = 0; var_299_object = Obj(); // 0x1130 PushV
	var_299_object = var_288_object; // 0x1131 Mov
	func_4452(var_299_object); // 0x1132 NEW_2
	var_328_bool = var_298_bool == 0; // 0x1134 Not
	if(var_328_bool == 0) goto Label_4414; // 0x1135 JumpB
	var_329_bool = 0; var_330_object = Obj(); // 0x1136 PushV
	var_330_object = var_288_object; // 0x1137 Mov
	func_4489(var_330_object); // 0x1138 NEW_2
	var_359_bool = var_329_bool == 0; // 0x113a Not
	if(var_359_bool == 0) goto Label_4414; // 0x113b JumpB
	var_287_bool = 0; // 0x113c MovB
	return 4; // 0x113d Return
	
Label_4414:
	var_360_int = 2; // 0x113e PushI
	irand(var_295_int, var_360_int); // 0x113f Func
	var_361_int = var_295_int; // 0x1141 Push
	if(var_361_int == 0) goto Label_4427; // 0x1142 JumpB
	var_362_string = "voice_common"; // 0x1143 PushS
	var_363_int = 1; // 0x1144 PushI
	var_364_int = var_294_int + var_363_int; // 0x1145 Add
	var_365_int = 3; // 0x1146 PushI
	var_366_int = var_364_int / var_365_int; // 0x1147 Mod
	SetVariable(var_362_string, var_366_int); // 0x1148 Func
	goto Label_4431; // 0x114a Jump
	
Label_4431:
	goto Label_4450; // 0x114f Jump
	
Label_4450:
	var_287_bool = 1; // 0x1162 MovB
	return 4; // 0x1163 Return
	
Label_4427:
	var_367_string = "voice_common"; // 0x114b PushS
	var_368_int = 0; // 0x114c PushI
	SetVariable(var_367_string, var_368_int); // 0x114d Func
	
Label_4432:
	var_369_bool = 0; var_370_object = Obj(); // 0x1150 PushV
	var_370_object = var_288_object; // 0x1151 Mov
	func_4489(var_370_object); // 0x1152 NEW_2
	var_371_bool = var_369_bool == 0; // 0x1154 Not
	if(var_371_bool == 0) goto Label_4446; // 0x1155 JumpB
	var_372_bool = 0; var_373_object = Obj(); // 0x1156 PushV
	var_373_object = var_288_object; // 0x1157 Mov
	func_4452(var_373_object); // 0x1158 NEW_2
	var_374_bool = var_372_bool == 0; // 0x115a Not
	if(var_374_bool == 0) goto Label_4446; // 0x115b JumpB
	var_287_bool = 0; // 0x115c MovB
	return 4; // 0x115d Return
	
Label_4446:
	var_375_string = "voice_common"; // 0x115e PushS
	var_376_int = 1; // 0x115f PushI
	SetVariable(var_375_string, var_376_int); // 0x1160 Func
}


func_4908()
{
	var_176_object = Obj(); var_177_string = ""; var_178_float = 0; // 0x132d PushV
	var_179_object = Obj(); // 0x132e PushV
	func_5160(var_179_object); // 0x132f NEW_2
	var_176_object = var_179_object; // 0x1330 Mov
	var_177_string = "pt_map_warehouse_gangster"; // 0x1332 MovS
	var_178_float = 2; // 0x1333 MovI
	func_5177(var_176_object, var_177_string, var_178_float); // 0x1334 NEW_2
	var_180_object = Obj(); // 0x1336 PushV
	func_5160(var_180_object); // 0x1337 NEW_2
	ShowMap(var_180_object); // 0x1339 ObjFunc
	return 0; // 0x133b Return
}


func_4657(var_139_string, var_140_int, var_141_int, var_142_int, var_143_int)
{
	var_144_int = 0; var_145_bool = 0; var_146_int = 0; var_147_bool = 0; // 0x1231 PushV
	var_148_bool = 0; var_149_int = 0; var_150_int = 0; // 0x1232 PushV
	var_149_int = var_140_int; // 0x1233 Mov
	var_150_int = var_141_int; // 0x1234 Mov
	func_4690(var_148_bool, var_149_int, var_150_int); // 0x1235 NEW_2
	if(var_148_bool == 0) goto Label_4673; // 0x1237 JumpB
	var_151_int = var_143_int - var_142_int; // 0x1238 Sub
	var_152_int = 1; // 0x1239 PushI
	var_153_int = var_151_int + var_152_int; // 0x123a Add
	irand(var_146_int, var_153_int); // 0x123b Func
	var_154_int = 0; // 0x123d PushI
	var_155_int = var_146_int + var_142_int; // 0x123e Add
	AddItem(var_147_bool, var_139_string, var_154_int, var_155_int); // 0x123f Func
	
Label_4673:
	return 4; // 0x1241 Return
}


func_5426(var_85_object, var_442_object, var_545_object, var_609_object, var_673_object, var_766_object, var_830_object, var_894_object, var_955_object, var_1019_object, var_1083_object, var_1144_object)
{
	var_86_int = GlobalVars[2]; // 0x1533 PushGE
	var_87_int = 0; // 0x1534 PushV
	func_4717(var_87_int); // 0x1535 NEW_2
	var_93_bool = var_86_int != var_87_int; // 0x1537 Neq
	if(var_93_bool == 0) goto Label_5442; // 0x1538 JumpB
	func_5210(); // 0x153a NEW_2
	var_211_int = GlobalVars[2]; // 0x153c PushGE
	var_212_int = 0; // 0x153d PushV
	func_4717(var_212_int); // 0x153e NEW_2
	var_211_int = var_212_int; // 0x153f Mov
	GlobalVars[2] = var_211_int; // 0x1541 PopGE
	
Label_5442:
	var_213_bool = GlobalVars[1]; // 0x1542 PushGE
	var_214_bool = var_213_bool == 0; // 0x1543 Not
	if(var_214_bool == 0) goto Label_5454; // 0x1544 JumpB
	var_215_int = 0; var_216_object = Obj(); // 0x1545 PushV
	var_216_object = var_85_object; // 0x1546 Mov
	TaskCall(1); // 0x1547 TaskCall
	func_22(var_217_object, var_215_int, var_216_object); // 0x1548 NEW_2
	TaskReturn(); // 0x1549 TaskReturn
	var_435_bool = GlobalVars[1]; // 0x154b PushGE
	var_435_bool = 1; // 0x154c MovB
	GlobalVars[1] = var_435_bool; // 0x154d PopGE
	
Label_5454:
	var_436_bool = 0; var_437_int = 0; // 0x154e PushV
	var_437_int = 1; // 0x154f MovI
	func_4726(var_436_bool, var_437_int); // 0x1550 NEW_2
	if(var_436_bool == 0) goto Label_5473; // 0x1552 JumpB
	var_439_int = 1000; // 0x1553 PushI
	var_440_int = 0; var_441_object = Obj(); // 0x1554 PushV
	var_441_object = var_85_object; // 0x1555 Mov
	TaskCall(5); // 0x1556 TaskCall
	func_1343(var_442_object, var_440_int, var_441_object); // 0x1557 NEW_2
	TaskReturn(); // 0x1558 TaskReturn
	var_499_bool = var_439_int == var_442_object; // 0x155a Eq
	if(var_499_bool == 0) goto Label_5472; // 0x155b JumpB
	var_500_object = Obj(); // 0x155c PushV
	var_500_object = var_85_object; // 0x155d Mov
	func_5407(var_500_object); // 0x155e NEW_2
	
Label_5472:
	return 0; // 0x1560 Return
	
Label_5473:
	var_540_bool = 0; var_541_int = 0; // 0x1561 PushV
	var_541_int = 2; // 0x1562 MovI
	func_4726(var_540_bool, var_541_int); // 0x1563 NEW_2
	if(var_540_bool == 0) goto Label_5492; // 0x1565 JumpB
	var_542_int = 1000; // 0x1566 PushI
	var_543_int = 0; var_544_object = Obj(); // 0x1567 PushV
	var_544_object = var_85_object; // 0x1568 Mov
	TaskCall(7); // 0x1569 TaskCall
	func_1564(var_545_object, var_543_int, var_544_object); // 0x156a NEW_2
	TaskReturn(); // 0x156b TaskReturn
	var_602_bool = var_542_int == var_545_object; // 0x156d Eq
	if(var_602_bool == 0) goto Label_5491; // 0x156e JumpB
	var_603_object = Obj(); // 0x156f PushV
	var_603_object = var_85_object; // 0x1570 Mov
	func_5407(var_603_object); // 0x1571 NEW_2
	
Label_5491:
	return 0; // 0x1573 Return
	
Label_5492:
	var_604_bool = 0; var_605_int = 0; // 0x1574 PushV
	var_605_int = 3; // 0x1575 MovI
	func_4726(var_604_bool, var_605_int); // 0x1576 NEW_2
	if(var_604_bool == 0) goto Label_5511; // 0x1578 JumpB
	var_606_int = 1000; // 0x1579 PushI
	var_607_int = 0; var_608_object = Obj(); // 0x157a PushV
	var_608_object = var_85_object; // 0x157b Mov
	TaskCall(9); // 0x157c TaskCall
	func_1785(var_609_object, var_607_int, var_608_object); // 0x157d NEW_2
	TaskReturn(); // 0x157e TaskReturn
	var_666_bool = var_606_int == var_609_object; // 0x1580 Eq
	if(var_666_bool == 0) goto Label_5510; // 0x1581 JumpB
	var_667_object = Obj(); // 0x1582 PushV
	var_667_object = var_85_object; // 0x1583 Mov
	func_5407(var_667_object); // 0x1584 NEW_2
	
Label_5510:
	return 0; // 0x1586 Return
	
Label_5511:
	var_668_bool = 0; var_669_int = 0; // 0x1587 PushV
	var_669_int = 4; // 0x1588 MovI
	func_4726(var_668_bool, var_669_int); // 0x1589 NEW_2
	if(var_668_bool == 0) goto Label_5530; // 0x158b JumpB
	var_670_int = 1000; // 0x158c PushI
	var_671_int = 0; var_672_object = Obj(); // 0x158d PushV
	var_672_object = var_85_object; // 0x158e Mov
	TaskCall(3); // 0x158f TaskCall
	func_248(var_673_object, var_671_int, var_672_object); // 0x1590 NEW_2
	TaskReturn(); // 0x1591 TaskReturn
	var_759_bool = var_670_int == var_673_object; // 0x1593 Eq
	if(var_759_bool == 0) goto Label_5529; // 0x1594 JumpB
	var_760_object = Obj(); // 0x1595 PushV
	var_760_object = var_85_object; // 0x1596 Mov
	func_5407(var_760_object); // 0x1597 NEW_2
	
Label_5529:
	return 0; // 0x1599 Return
	
Label_5530:
	var_761_bool = 0; var_762_int = 0; // 0x159a PushV
	var_762_int = 5; // 0x159b MovI
	func_4726(var_761_bool, var_762_int); // 0x159c NEW_2
	if(var_761_bool == 0) goto Label_5549; // 0x159e JumpB
	var_763_int = 1000; // 0x159f PushI
	var_764_int = 0; var_765_object = Obj(); // 0x15a0 PushV
	var_765_object = var_85_object; // 0x15a1 Mov
	TaskCall(11); // 0x15a2 TaskCall
	func_2006(var_766_object, var_764_int, var_765_object); // 0x15a3 NEW_2
	TaskReturn(); // 0x15a4 TaskReturn
	var_823_bool = var_763_int == var_766_object; // 0x15a6 Eq
	if(var_823_bool == 0) goto Label_5548; // 0x15a7 JumpB
	var_824_object = Obj(); // 0x15a8 PushV
	var_824_object = var_85_object; // 0x15a9 Mov
	func_5407(var_824_object); // 0x15aa NEW_2
	
Label_5548:
	return 0; // 0x15ac Return
	
Label_5549:
	var_825_bool = 0; var_826_int = 0; // 0x15ad PushV
	var_826_int = 6; // 0x15ae MovI
	func_4726(var_825_bool, var_826_int); // 0x15af NEW_2
	if(var_825_bool == 0) goto Label_5568; // 0x15b1 JumpB
	var_827_int = 1000; // 0x15b2 PushI
	var_828_int = 0; var_829_object = Obj(); // 0x15b3 PushV
	var_829_object = var_85_object; // 0x15b4 Mov
	TaskCall(13); // 0x15b5 TaskCall
	func_2227(var_830_object, var_828_int, var_829_object); // 0x15b6 NEW_2
	TaskReturn(); // 0x15b7 TaskReturn
	var_887_bool = var_827_int == var_830_object; // 0x15b9 Eq
	if(var_887_bool == 0) goto Label_5567; // 0x15ba JumpB
	var_888_object = Obj(); // 0x15bb PushV
	var_888_object = var_85_object; // 0x15bc Mov
	func_5407(var_888_object); // 0x15bd NEW_2
	
Label_5567:
	return 0; // 0x15bf Return
	
Label_5568:
	var_889_bool = 0; var_890_int = 0; // 0x15c0 PushV
	var_890_int = 7; // 0x15c1 MovI
	func_4726(var_889_bool, var_890_int); // 0x15c2 NEW_2
	if(var_889_bool == 0) goto Label_5587; // 0x15c4 JumpB
	var_891_int = 1000; // 0x15c5 PushI
	var_892_int = 0; var_893_object = Obj(); // 0x15c6 PushV
	var_893_object = var_85_object; // 0x15c7 Mov
	TaskCall(15); // 0x15c8 TaskCall
	func_2448(var_894_object, var_892_int, var_893_object); // 0x15c9 NEW_2
	TaskReturn(); // 0x15ca TaskReturn
	var_948_bool = var_891_int == var_894_object; // 0x15cc Eq
	if(var_948_bool == 0) goto Label_5586; // 0x15cd JumpB
	var_949_object = Obj(); // 0x15ce PushV
	var_949_object = var_85_object; // 0x15cf Mov
	func_5407(var_949_object); // 0x15d0 NEW_2
	
Label_5586:
	return 0; // 0x15d2 Return
	
Label_5587:
	var_950_bool = 0; var_951_int = 0; // 0x15d3 PushV
	var_951_int = 8; // 0x15d4 MovI
	func_4726(var_950_bool, var_951_int); // 0x15d5 NEW_2
	if(var_950_bool == 0) goto Label_5606; // 0x15d7 JumpB
	var_952_int = 1000; // 0x15d8 PushI
	var_953_int = 0; var_954_object = Obj(); // 0x15d9 PushV
	var_954_object = var_85_object; // 0x15da Mov
	TaskCall(17); // 0x15db TaskCall
	func_2659(var_955_object, var_953_int, var_954_object); // 0x15dc NEW_2
	TaskReturn(); // 0x15dd TaskReturn
	var_1012_bool = var_952_int == var_955_object; // 0x15df Eq
	if(var_1012_bool == 0) goto Label_5605; // 0x15e0 JumpB
	var_1013_object = Obj(); // 0x15e1 PushV
	var_1013_object = var_85_object; // 0x15e2 Mov
	func_5407(var_1013_object); // 0x15e3 NEW_2
	
Label_5605:
	return 0; // 0x15e5 Return
	
Label_5606:
	var_1014_bool = 0; var_1015_int = 0; // 0x15e6 PushV
	var_1015_int = 9; // 0x15e7 MovI
	func_4726(var_1014_bool, var_1015_int); // 0x15e8 NEW_2
	if(var_1014_bool == 0) goto Label_5625; // 0x15ea JumpB
	var_1016_int = 1000; // 0x15eb PushI
	var_1017_int = 0; var_1018_object = Obj(); // 0x15ec PushV
	var_1018_object = var_85_object; // 0x15ed Mov
	TaskCall(19); // 0x15ee TaskCall
	func_2880(var_1019_object, var_1017_int, var_1018_object); // 0x15ef NEW_2
	TaskReturn(); // 0x15f0 TaskReturn
	var_1076_bool = var_1016_int == var_1019_object; // 0x15f2 Eq
	if(var_1076_bool == 0) goto Label_5624; // 0x15f3 JumpB
	var_1077_object = Obj(); // 0x15f4 PushV
	var_1077_object = var_85_object; // 0x15f5 Mov
	func_5407(var_1077_object); // 0x15f6 NEW_2
	
Label_5624:
	return 0; // 0x15f8 Return
	
Label_5625:
	var_1078_bool = 0; var_1079_int = 0; // 0x15f9 PushV
	var_1079_int = 10; // 0x15fa MovI
	func_4726(var_1078_bool, var_1079_int); // 0x15fb NEW_2
	if(var_1078_bool == 0) goto Label_5644; // 0x15fd JumpB
	var_1080_int = 1000; // 0x15fe PushI
	var_1081_int = 0; var_1082_object = Obj(); // 0x15ff PushV
	var_1082_object = var_85_object; // 0x1600 Mov
	TaskCall(21); // 0x1601 TaskCall
	func_3101(var_1083_object, var_1081_int, var_1082_object); // 0x1602 NEW_2
	TaskReturn(); // 0x1603 TaskReturn
	var_1137_bool = var_1080_int == var_1083_object; // 0x1605 Eq
	if(var_1137_bool == 0) goto Label_5643; // 0x1606 JumpB
	var_1138_object = Obj(); // 0x1607 PushV
	var_1138_object = var_85_object; // 0x1608 Mov
	func_5407(var_1138_object); // 0x1609 NEW_2
	
Label_5643:
	return 0; // 0x160b Return
	
Label_5644:
	var_1139_bool = 0; var_1140_int = 0; // 0x160c PushV
	var_1140_int = 11; // 0x160d MovI
	func_4726(var_1139_bool, var_1140_int); // 0x160e NEW_2
	if(var_1139_bool == 0) goto Label_5663; // 0x1610 JumpB
	var_1141_int = 1000; // 0x1611 PushI
	var_1142_int = 0; var_1143_object = Obj(); // 0x1612 PushV
	var_1143_object = var_85_object; // 0x1613 Mov
	TaskCall(23); // 0x1614 TaskCall
	func_3312(var_1144_object, var_1142_int, var_1143_object); // 0x1615 NEW_2
	TaskReturn(); // 0x1616 TaskReturn
	var_1214_bool = var_1141_int == var_1144_object; // 0x1618 Eq
	if(var_1214_bool == 0) goto Label_5662; // 0x1619 JumpB
	var_1215_object = Obj(); // 0x161a PushV
	var_1215_object = var_85_object; // 0x161b Mov
	func_5407(var_1215_object); // 0x161c NEW_2
	
Label_5662:
	return 0; // 0x161e Return
	
Label_5663:
	var_1216_bool = 0; var_1217_int = 0; // 0x161f PushV
	var_1217_int = 12; // 0x1620 MovI
	func_4726(var_1216_bool, var_1217_int); // 0x1621 NEW_2
	if(var_1216_bool == 0) goto Label_5675; // 0x1623 JumpB
	var_1218_int = 0; var_1219_object = Obj(); // 0x1624 PushV
	var_1219_object = var_85_object; // 0x1625 Mov
	TaskCall(25); // 0x1626 TaskCall
	func_3708(var_1220_object, var_1218_int, var_1219_object); // 0x1627 NEW_2
	TaskReturn(); // 0x1628 TaskReturn
	return 0; // 0x162a Return
	
Label_5675:
	return 0; // 0x162b Return
}


func_5177(var_118_object, var_119_string, var_120_float)
{
	var_122_cvector = CVector(0,0,0); var_123_cvector = CVector(0,0,0); var_124_object = Obj(); var_125_bool = 0; var_126_cvector = CVector(0,0,0); var_127_cvector = CVector(0,0,0); var_128_object = Obj(); var_129_bool = 0; // 0x1439 PushV
	GetMainOutdoorScene(var_128_object); // 0x143a Func
	var_130_bool = var_128_object == 0; // 0x143c NullEq
	if(var_130_bool == 0) goto Label_5186; // 0x143d JumpB
	var_131_string = "Can't find main outdoor scene"; // 0x143e PushS
	Trace(var_131_string); // 0x143f Func
	return 8; // 0x1441 Return
	
Label_5186:
	GetLocator(var_119_string, var_129_bool, var_126_cvector, var_127_cvector); // 0x1442 ObjFunc
	var_132_bool = var_129_bool == 0; // 0x1444 Not
	if(var_132_bool == 0) goto Label_5196; // 0x1445 JumpB
	var_133_string = "Warning: outdoor scene locator "; // 0x1446 PushS
	var_134_int = var_133_string + var_119_string; // 0x1447 Add
	var_135_string = " doesnt exist"; // 0x1448 PushS
	var_136_int = var_134_int + var_135_string; // 0x1449 Add
	Trace(var_136_int); // 0x144a Func
	
Label_5196:
	GetMap(var_118_object); // 0x144c ObjFunc
	var_137_bool = var_118_object == 0; // 0x144e NullEq
	if(var_137_bool == 0) goto Label_5204; // 0x144f JumpB
	var_138_string = "Can't find map"; // 0x1450 PushS
	Trace(var_138_string); // 0x1451 Func
	return 8; // 0x1453 Return
	
Label_5204:
	var_139_float = GetByIndex(var_126_cvector, 0); // 0x1454 PushE
	var_140_float = GetByIndex(var_126_cvector, 2); // 0x1455 PushE
	SetMapParams(var_139_float, var_140_float, var_120_float); // 0x1456 ObjFunc
	return 8; // 0x1458 Return
}


func_4924()
{
	var_165_int = 1000; // 0x133d PushI
	SetReturnValue(var_165_int); // 0x133e ObjFunc
	return 0; // 0x1340 Return
}


func_1343(var_0_bool, var_440_int, var_441_object)
{
	var_443_object = Obj(); var_444_bool = 0; var_445_int = 0; var_446_bool = 0; var_447_object = Obj(); var_448_bool = 0; var_449_int = 0; var_450_bool = 0; // 0x53f PushV
	var_0_bool = var_441_object; // 0x540 TMov
	var_451_bool = 0; var_452_object = Obj(); var_453_float = 0; // 0x541 PushV
	var_452_object = var_441_object; // 0x542 Mov
	var_453_float = 70.0; // 0x543 MovF
	func_4307(var_452_object, var_453_float); // 0x544 NEW_2
	var_454_bool = var_451_bool == 0; // 0x546 Not
	if(var_454_bool == 0) goto Label_1354; // 0x547 JumpB
	var_440_int = -2; // 0x548 MovI
	return 8; // 0x549 Return
	
Label_1354:
	CreateDialog(var_447_object); // 0x54a Func
	var_455_int = 0; // 0x54c PushV
	func_4758(var_455_int); // 0x54d NEW_2
	SetNPCName(var_455_int); // 0x54f ObjFunc
	var_456_int = 0; // 0x551 PushV
	func_4756(var_456_int); // 0x552 NEW_2
	SetNPCDescription(var_456_int); // 0x554 ObjFunc
	var_457_string = ""; // 0x556 PushV
	func_4760(var_457_string); // 0x557 NEW_2
	SetPhoto(var_457_string); // 0x559 ObjFunc
	var_458_string = ""; // 0x55b PushV
	func_4762(var_458_string); // 0x55c NEW_2
	SetPhoto2(var_458_string); // 0x55e ObjFunc
	var_459_int = 0; // 0x560 PushV
	func_5384(var_459_int); // 0x561 NEW_2
	SetPlayerName(var_459_int); // 0x563 ObjFunc
	var_449_int = -1; // 0x565 MovI
	IsOverrideActive(var_448_bool); // 0x566 Func
	var_460_bool = var_448_bool; // 0x568 Push
	if(var_460_bool == 0) goto Label_1388; // 0x569 JumpB
	var_440_int = -2; // 0x56a MovI
	return 8; // 0x56b Return
	
Label_1388:
	DoDialog(var_447_object); // 0x56c Func
	var_461_bool = 0; var_462_object = Obj(); // 0x56e PushV
	var_463_object = Obj(); // 0x56f PushV
	func_4674(var_463_object); // 0x570 NEW_2
	var_462_object = var_463_object; // 0x571 Mov
	func_4394(var_461_bool, var_462_object); // 0x573 NEW_2
	var_464_object = Obj(); var_465_object = Obj(); // 0x575 PushV
	var_464_object = var_441_object; // 0x576 Mov
	var_465_object = var_447_object; // 0x577 Mov
	TaskCall(6); // 0x578 TaskCall
	func_1424(var_466_object, var_467_object, var_468_string, var_469_bool, var_464_object, var_465_object); // 0x579 NEW_2
	TaskReturn(); // 0x57a TaskReturn
	IsDialogEnd(var_450_bool); // 0x57c ObjFunc
	
Label_1406:
	var_497_bool = var_450_bool == 0; // 0x57e Not
	if(var_497_bool == 0) goto Label_1413; // 0x57f JumpB
	sync(); // 0x580 Func
	IsDialogEnd(var_450_bool); // 0x582 ObjFunc
	goto Label_1406; // 0x584 Jump
	
Label_1413:
	var_498_object = Obj(); // 0x585 PushV
	var_498_object = var_441_object; // 0x586 Mov
	func_4376(); // 0x587 NEW_2
	StopDialog(var_447_object); // 0x589 Func
	GetReturnValue(var_449_int); // 0x58b ObjFunc
	var_440_int = var_449_int; // 0x58d Mov
	return 8; // 0x58e Return
}


func_2880(var_0_bool, var_1017_int, var_1018_object)
{
	var_1020_object = Obj(); var_1021_bool = 0; var_1022_int = 0; var_1023_bool = 0; var_1024_object = Obj(); var_1025_bool = 0; var_1026_int = 0; var_1027_bool = 0; // 0xb40 PushV
	var_0_bool = var_1018_object; // 0xb41 TMov
	var_1028_bool = 0; var_1029_object = Obj(); var_1030_float = 0; // 0xb42 PushV
	var_1029_object = var_1018_object; // 0xb43 Mov
	var_1030_float = 70.0; // 0xb44 MovF
	func_4307(var_1029_object, var_1030_float); // 0xb45 NEW_2
	var_1031_bool = var_1028_bool == 0; // 0xb47 Not
	if(var_1031_bool == 0) goto Label_2891; // 0xb48 JumpB
	var_1017_int = -2; // 0xb49 MovI
	return 8; // 0xb4a Return
	
Label_2891:
	CreateDialog(var_1024_object); // 0xb4b Func
	var_1032_int = 0; // 0xb4d PushV
	func_4758(var_1032_int); // 0xb4e NEW_2
	SetNPCName(var_1032_int); // 0xb50 ObjFunc
	var_1033_int = 0; // 0xb52 PushV
	func_4756(var_1033_int); // 0xb53 NEW_2
	SetNPCDescription(var_1033_int); // 0xb55 ObjFunc
	var_1034_string = ""; // 0xb57 PushV
	func_4760(var_1034_string); // 0xb58 NEW_2
	SetPhoto(var_1034_string); // 0xb5a ObjFunc
	var_1035_string = ""; // 0xb5c PushV
	func_4762(var_1035_string); // 0xb5d NEW_2
	SetPhoto2(var_1035_string); // 0xb5f ObjFunc
	var_1036_int = 0; // 0xb61 PushV
	func_5384(var_1036_int); // 0xb62 NEW_2
	SetPlayerName(var_1036_int); // 0xb64 ObjFunc
	var_1026_int = -1; // 0xb66 MovI
	IsOverrideActive(var_1025_bool); // 0xb67 Func
	var_1037_bool = var_1025_bool; // 0xb69 Push
	if(var_1037_bool == 0) goto Label_2925; // 0xb6a JumpB
	var_1017_int = -2; // 0xb6b MovI
	return 8; // 0xb6c Return
	
Label_2925:
	DoDialog(var_1024_object); // 0xb6d Func
	var_1038_bool = 0; var_1039_object = Obj(); // 0xb6f PushV
	var_1040_object = Obj(); // 0xb70 PushV
	func_4674(var_1040_object); // 0xb71 NEW_2
	var_1039_object = var_1040_object; // 0xb72 Mov
	func_4394(var_1038_bool, var_1039_object); // 0xb74 NEW_2
	var_1041_object = Obj(); var_1042_object = Obj(); // 0xb76 PushV
	var_1041_object = var_1018_object; // 0xb77 Mov
	var_1042_object = var_1024_object; // 0xb78 Mov
	TaskCall(20); // 0xb79 TaskCall
	func_2961(var_1043_object, var_1044_object, var_1045_string, var_1046_bool, var_1041_object, var_1042_object); // 0xb7a NEW_2
	TaskReturn(); // 0xb7b TaskReturn
	IsDialogEnd(var_1027_bool); // 0xb7d ObjFunc
	
Label_2943:
	var_1074_bool = var_1027_bool == 0; // 0xb7f Not
	if(var_1074_bool == 0) goto Label_2950; // 0xb80 JumpB
	sync(); // 0xb81 Func
	IsDialogEnd(var_1027_bool); // 0xb83 ObjFunc
	goto Label_2943; // 0xb85 Jump
	
Label_2950:
	var_1075_object = Obj(); // 0xb86 PushV
	var_1075_object = var_1018_object; // 0xb87 Mov
	func_4376(); // 0xb88 NEW_2
	StopDialog(var_1024_object); // 0xb8a Func
	GetReturnValue(var_1026_int); // 0xb8c ObjFunc
	var_1017_int = var_1026_int; // 0xb8e Mov
	return 8; // 0xb8f Return
}


func_4929(var_711_bool)
{
	var_713_int = 0; var_714_string = ""; // 0x1342 PushV
	var_714_string = "k4q01"; // 0x1343 MovS
	func_4695(var_713_int, var_714_string); // 0x1344 NEW_2
	var_717_int = 1; // 0x1346 PushI
	var_718_bool = var_713_int == var_717_int; // 0x1347 Eq
	if(var_718_bool == 0) goto Label_4939; // 0x1348 JumpB
	var_711_bool = 1; // 0x1349 MovB
	return 0; // 0x134a Return
	
Label_4939:
	var_711_bool = 0; // 0x134b MovB
	return 0; // 0x134c Return
}


func_4674(var_289_object)
{
	var_290_object = Obj(); var_291_object = Obj(); // 0x1242 PushV
	self(var_291_object); // 0x1243 Func
	var_289_object = var_291_object; // 0x1245 Mov
	return 2; // 0x1246 Return
}


func_3393(var_0_bool, var_1_object, var_2_object, var_3_object, var_1166_object, var_1167_object)
{
	var_0_bool = var_1167_object; // 0xd42 TMov
	var_1_object = var_1166_object; // 0xd43 TMov
	var_3_object = 0; // 0xd44 TMovB
	var_1172_int = 1; // 0xd45 PushI
	if(var_1172_int == 0) goto Label_3440; // 0xd46 JumpB
	var_1173_string = ""; // 0xd47 PushV
	var_1173_string = "Sly"; // 0xd48 MovS
	func_3470(var_1167_object, var_1173_string); // 0xd49 NEW_2
	var_1181_int = 526693; // 0xd4b PushI
	SetMessage(var_1181_int); // 0xd4c TObjFunc
	ClearReplies(); // 0xd4e TObjFunc
	var_1182_bool = 0; // 0xd50 PushV
	var_1182_bool = 0; // 0xd51 MovB
	var_1183_bool = 0; var_1184_object = Obj(); // 0xd52 PushV
	var_1184_object = var_1_object; // 0xd53 MovT
	func_4965(var_1184_object); // 0xd54 NEW_2
	if(var_1183_bool == 0) goto Label_3421; // 0xd56 JumpB
	var_1189_bool = 0; var_1190_object = Obj(); // 0xd57 PushV
	var_1190_object = var_1_object; // 0xd58 MovT
	func_4977(var_1190_object); // 0xd59 NEW_2
	if(var_1189_bool == 0) goto Label_3421; // 0xd5b JumpB
	var_1182_bool = 1; // 0xd5c MovB
	
Label_3421:
	if(var_1182_bool == 0) goto Label_3427; // 0xd5d JumpB
	var_1195_int = 527323; // 0xd5e PushI
	var_1196_int = 28641; // 0xd5f PushI
	var_1197_int = 28640; // 0xd60 PushI
	AddReply(var_1195_int, var_1196_int, var_1197_int); // 0xd61 TObjFunc
	
Label_3427:
	var_1198_int = 526694; // 0xd63 PushI
	var_1199_int = -1; // 0xd64 PushI
	var_1200_int = 27970; // 0xd65 PushI
	AddReply(var_1198_int, var_1199_int, var_1200_int); // 0xd66 TObjFunc
	var_1201_int = 526695; // 0xd68 PushI
	var_1202_int = -1; // 0xd69 PushI
	var_1203_int = 27971; // 0xd6a PushI
	AddReply(var_1201_int, var_1202_int, var_1203_int); // 0xd6b TObjFunc
	goto Label_3440; // 0xd6d Jump
	
Label_3440:
	var_1204_bool = 0; // 0xd70 PushV
	func_4764(var_1204_bool); // 0xd71 NEW_2
	if(var_1204_bool == 0) goto Label_3455; // 0xd73 JumpB
	
Label_3444:
	lshWaitForAnimEnd(); // 0xd74 Func
	var_1205_object = var_3_object; // 0xd76 PushT
	if(var_1205_object == 0) goto Label_3449; // 0xd77 JumpB
	goto Label_3454; // 0xd78 Jump
	
Label_3454:
	goto Label_3469; // 0xd7e Jump
	
Label_3469:
	return 0; // 0xd8d Return
	
Label_3449:
	var_1206_string = ""; // 0xd79 PushV
	var_1206_string = var_2_object; // 0xd7a MovT
	func_4593(var_1206_string); // 0xd7b NEW_2
	goto Label_3444; // 0xd7d Jump
	
Label_3455:
	var_1207_string = "all"; // 0xd7f PushS
	var_1208_string = "idle"; // 0xd80 PushS
	PlayAnimation(var_1207_string, var_1208_string); // 0xd81 Func
	
Label_3459:
	WaitForAnimEnd(); // 0xd83 Func
	var_1209_object = var_3_object; // 0xd85 PushT
	if(var_1209_object == 0) goto Label_3464; // 0xd86 JumpB
	goto Label_3469; // 0xd87 Jump
	
Label_3464:
	var_1210_string = "all"; // 0xd88 PushS
	var_1211_string = "idle"; // 0xd89 PushS
	PlayAnimation(var_1210_string, var_1211_string); // 0xd8a Func
	goto Label_3459; // 0xd8c Jump
}


func_2371(var_2_object, var_859_string)
{
	var_860_bool = 0; // 0x944 PushV
	func_4764(var_860_bool); // 0x945 NEW_2
	var_861_bool = var_860_bool == 0; // 0x947 Not
	if(var_861_bool == 0) goto Label_2378; // 0x948 JumpB
	return 0; // 0x949 Return
	
Label_2378:
	var_862_bool = var_859_string == var_2_object; // 0x94a Eq
	if(var_862_bool == 0) goto Label_2381; // 0x94b JumpB
	return 0; // 0x94c Return
	
Label_2381:
	var_863_string = ""; var_864_bool = 0; // 0x94d PushV
	var_863_string = var_859_string; // 0x94e Mov
	var_865_string = ""; // 0x94f PushS
	var_866_bool = var_859_string == var_865_string; // 0x950 Eq
	if(var_866_bool == 0) goto Label_2388; // 0x951 JumpB
	var_864_bool = 0; // 0x952 MovB
	goto Label_2389; // 0x953 Jump
	
Label_2389:
	func_4609(var_863_string, var_864_bool); // 0x955 NEW_2
	var_2_object = var_859_string; // 0x957 TMov
	return 0; // 0x958 Return
	
Label_2388:
	var_864_bool = 1; // 0x954 MovB
}


func_4680(var_253_cvector, var_254_cvector)
{
	var_256_float = 0; var_257_float = 0; // 0x1248 PushV
	var_258_int = var_254_cvector | var_254_cvector; // 0x1249 Or
	var_257_float = sqrt(var_258_int); // 0x124a Sqrt2
	var_259_float = 0.0; // 0x124b PushF
	var_260_bool = var_257_float < var_259_float; // 0x124c LT
	if(var_260_bool == 0) goto Label_4688; // 0x124d JumpB
	var_253_cvector = CVector(0.0, 0.0, 0.0); // 0x124e MovV
	return 2; // 0x124f Return
	
Label_4688:
	var_253_cvector = var_254_cvector / var_254_cvector; // 0x1250 Div2
	return 2; // 0x1251 Return
}


func_329(var_0_bool, var_1_object, var_2_object, var_3_object, var_695_object, var_696_object)
{
	var_0_bool = var_696_object; // 0x14a TMov
	var_1_object = var_695_object; // 0x14b TMov
	var_3_object = 0; // 0x14c TMovB
	var_701_int = 1; // 0x14d PushI
	if(var_701_int == 0) goto Label_392; // 0x14e JumpB
	var_702_string = ""; // 0x14f PushV
	var_702_string = "Neutral"; // 0x150 MovS
	func_422(var_696_object, var_702_string); // 0x151 NEW_2
	var_710_int = 525681; // 0x153 PushI
	SetMessage(var_710_int); // 0x154 TObjFunc
	ClearReplies(); // 0x156 TObjFunc
	var_711_bool = 0; var_712_object = Obj(); // 0x158 PushV
	var_712_object = var_1_object; // 0x159 MovT
	func_4929(var_712_object); // 0x15a NEW_2
	if(var_711_bool == 0) goto Label_354; // 0x15c JumpB
	var_719_int = 525682; // 0x15d PushI
	var_720_int = 44708; // 0x15e PushI
	var_721_int = 27005; // 0x15f PushI
	AddReply(var_719_int, var_720_int, var_721_int); // 0x160 TObjFunc
	
Label_354:
	var_722_bool = 0; var_723_object = Obj(); // 0x162 PushV
	var_723_object = var_1_object; // 0x163 MovT
	func_4941(var_723_object); // 0x164 NEW_2
	if(var_722_bool == 0) goto Label_364; // 0x166 JumpB
	var_728_int = 525696; // 0x167 PushI
	var_729_int = 30190; // 0x168 PushI
	var_730_int = 27019; // 0x169 PushI
	AddReply(var_728_int, var_729_int, var_730_int); // 0x16a TObjFunc
	
Label_364:
	var_731_bool = 0; var_732_object = Obj(); // 0x16c PushV
	var_732_object = var_1_object; // 0x16d MovT
	func_4953(var_732_object); // 0x16e NEW_2
	if(var_731_bool == 0) goto Label_374; // 0x170 JumpB
	var_737_int = 525709; // 0x171 PushI
	var_738_int = 27032; // 0x172 PushI
	var_739_int = 27031; // 0x173 PushI
	AddReply(var_737_int, var_738_int, var_739_int); // 0x174 TObjFunc
	
Label_374:
	var_740_int = 526667; // 0x176 PushI
	var_741_int = -1; // 0x177 PushI
	var_742_int = 27943; // 0x178 PushI
	AddReply(var_740_int, var_741_int, var_742_int); // 0x179 TObjFunc
	var_743_int = 525689; // 0x17b PushI
	var_744_int = -1; // 0x17c PushI
	var_745_int = 27012; // 0x17d PushI
	AddReply(var_743_int, var_744_int, var_745_int); // 0x17e TObjFunc
	var_746_int = 528783; // 0x180 PushI
	var_747_int = -1; // 0x181 PushI
	var_748_int = 30195; // 0x182 PushI
	AddReply(var_746_int, var_747_int, var_748_int); // 0x183 TObjFunc
	goto Label_392; // 0x185 Jump
	
Label_392:
	var_749_bool = 0; // 0x188 PushV
	func_4764(var_749_bool); // 0x189 NEW_2
	if(var_749_bool == 0) goto Label_407; // 0x18b JumpB
	
Label_396:
	lshWaitForAnimEnd(); // 0x18c Func
	var_750_object = var_3_object; // 0x18e PushT
	if(var_750_object == 0) goto Label_401; // 0x18f JumpB
	goto Label_406; // 0x190 Jump
	
Label_406:
	goto Label_421; // 0x196 Jump
	
Label_421:
	return 0; // 0x1a5 Return
	
Label_401:
	var_751_string = ""; // 0x191 PushV
	var_751_string = var_2_object; // 0x192 MovT
	func_4593(var_751_string); // 0x193 NEW_2
	goto Label_396; // 0x195 Jump
	
Label_407:
	var_752_string = "all"; // 0x197 PushS
	var_753_string = "idle"; // 0x198 PushS
	PlayAnimation(var_752_string, var_753_string); // 0x199 Func
	
Label_411:
	WaitForAnimEnd(); // 0x19b Func
	var_754_object = var_3_object; // 0x19d PushT
	if(var_754_object == 0) goto Label_416; // 0x19e JumpB
	goto Label_421; // 0x19f Jump
	
Label_416:
	var_755_string = "all"; // 0x1a0 PushS
	var_756_string = "idle"; // 0x1a1 PushS
	PlayAnimation(var_755_string, var_756_string); // 0x1a2 Func
	goto Label_411; // 0x1a4 Jump
}


func_1866(var_0_bool, var_1_object, var_2_object, var_3_object, var_631_object, var_632_object)
{
	var_0_bool = var_632_object; // 0x74b TMov
	var_1_object = var_631_object; // 0x74c TMov
	var_3_object = 0; // 0x74d TMovB
	var_637_int = 1; // 0x74e PushI
	if(var_637_int == 0) goto Label_1899; // 0x74f JumpB
	var_638_string = ""; // 0x750 PushV
	var_638_string = "Neutral"; // 0x751 MovS
	func_1929(var_632_object, var_638_string); // 0x752 NEW_2
	var_646_int = 526664; // 0x754 PushI
	SetMessage(var_646_int); // 0x755 TObjFunc
	ClearReplies(); // 0x757 TObjFunc
	var_647_int = 526665; // 0x759 PushI
	var_648_int = -1; // 0x75a PushI
	var_649_int = 27941; // 0x75b PushI
	AddReply(var_647_int, var_648_int, var_649_int); // 0x75c TObjFunc
	var_650_int = 526666; // 0x75e PushI
	var_651_int = -1; // 0x75f PushI
	var_652_int = 27942; // 0x760 PushI
	AddReply(var_650_int, var_651_int, var_652_int); // 0x761 TObjFunc
	var_653_int = 528772; // 0x763 PushI
	var_654_int = -1; // 0x764 PushI
	var_655_int = 30183; // 0x765 PushI
	AddReply(var_653_int, var_654_int, var_655_int); // 0x766 TObjFunc
	goto Label_1899; // 0x768 Jump
	
Label_1899:
	var_656_bool = 0; // 0x76b PushV
	func_4764(var_656_bool); // 0x76c NEW_2
	if(var_656_bool == 0) goto Label_1914; // 0x76e JumpB
	
Label_1903:
	lshWaitForAnimEnd(); // 0x76f Func
	var_657_object = var_3_object; // 0x771 PushT
	if(var_657_object == 0) goto Label_1908; // 0x772 JumpB
	goto Label_1913; // 0x773 Jump
	
Label_1913:
	goto Label_1928; // 0x779 Jump
	
Label_1928:
	return 0; // 0x788 Return
	
Label_1908:
	var_658_string = ""; // 0x774 PushV
	var_658_string = var_2_object; // 0x775 MovT
	func_4593(var_658_string); // 0x776 NEW_2
	goto Label_1903; // 0x778 Jump
	
Label_1914:
	var_659_string = "all"; // 0x77a PushS
	var_660_string = "idle"; // 0x77b PushS
	PlayAnimation(var_659_string, var_660_string); // 0x77c Func
	
Label_1918:
	WaitForAnimEnd(); // 0x77e Func
	var_661_object = var_3_object; // 0x780 PushT
	if(var_661_object == 0) goto Label_1923; // 0x781 JumpB
	goto Label_1928; // 0x782 Jump
	
Label_1923:
	var_662_string = "all"; // 0x783 PushS
	var_663_string = "idle"; // 0x784 PushS
	PlayAnimation(var_662_string, var_663_string); // 0x785 Func
	goto Label_1918; // 0x787 Jump
}


func_4941(var_722_bool)
{
	var_724_int = 0; var_725_string = ""; // 0x134e PushV
	var_725_string = "k4q01"; // 0x134f MovS
	func_4695(var_724_int, var_725_string); // 0x1350 NEW_2
	var_726_int = 3; // 0x1352 PushI
	var_727_bool = var_724_int == var_726_int; // 0x1353 Eq
	if(var_727_bool == 0) goto Label_4951; // 0x1354 JumpB
	var_722_bool = 1; // 0x1355 MovB
	return 0; // 0x1356 Return
	
Label_4951:
	var_722_bool = 0; // 0x1357 MovB
	return 0; // 0x1358 Return
}


func_4690(var_133_bool, var_134_int, var_135_int)
{
	var_136_int = 0; var_137_int = 0; // 0x1252 PushV
	irand(var_137_int, var_135_int); // 0x1253 Func
	var_133_bool = var_137_int < var_134_int; // 0x1255 LT2
	return 2; // 0x1256 Return
}


func_4695(var_713_int, var_714_string)
{
	var_715_int = 0; var_716_int = 0; // 0x1257 PushV
	GetVariable(var_714_string, var_716_int); // 0x1258 Func
	var_713_int = var_716_int; // 0x125a Mov
	return 2; // 0x125b Return
}


func_4088()
{
	var_1278_int = 10; // 0xff8 PushI
	KillTimer(var_1278_int); // 0xff9 Func
	return 0; // 0xffb Return
}


func_4953(var_731_bool)
{
	var_733_int = 0; var_734_string = ""; // 0x135a PushV
	var_734_string = "k4q01"; // 0x135b MovS
	func_4695(var_733_int, var_734_string); // 0x135c NEW_2
	var_735_int = 5; // 0x135e PushI
	var_736_bool = var_733_int == var_735_int; // 0x135f Eq
	if(var_736_bool == 0) goto Label_4963; // 0x1360 JumpB
	var_731_bool = 1; // 0x1361 MovB
	return 0; // 0x1362 Return
	
Label_4963:
	var_731_bool = 0; // 0x1363 MovB
	return 0; // 0x1364 Return
}


func_5210()
{
	var_94_bool = 0; var_95_int = 0; var_96_int = 0; var_97_int = 0; var_98_bool = 0; var_99_int = 0; var_100_int = 0; var_101_int = 0; // 0x145a PushV
	var_102_int = 0; // 0x145b PushI
	ClearSubContainer(var_102_int); // 0x145c Func
	var_103_int = 0; // 0x145e PushV
	func_4717(var_103_int); // 0x145f NEW_2
	var_100_int = var_103_int; // 0x1460 Mov
	var_104_int = 0; var_105_string = ""; // 0x1462 PushV
	var_105_string = "Rifle"; // 0x1463 MovS
	func_5379(var_104_int, var_105_string); // 0x1464 NEW_2
	var_108_int = 0; // 0x1466 PushI
	var_109_int = 1; // 0x1467 PushI
	AddItem(var_98_bool, var_104_int, var_108_int, var_109_int); // 0x1468 Func
	var_110_int = 0; var_111_string = ""; // 0x146a PushV
	var_111_string = "Revolver"; // 0x146b MovS
	func_5379(var_110_int, var_111_string); // 0x146c NEW_2
	var_112_int = 0; // 0x146e PushI
	var_113_int = 1; // 0x146f PushI
	AddItem(var_98_bool, var_110_int, var_112_int, var_113_int); // 0x1470 Func
	var_114_int = 0; var_115_string = ""; // 0x1472 PushV
	var_115_string = "Knife"; // 0x1473 MovS
	func_5379(var_114_int, var_115_string); // 0x1474 NEW_2
	var_116_int = 0; // 0x1476 PushI
	var_117_int = 1; // 0x1477 PushI
	AddItem(var_98_bool, var_114_int, var_116_int, var_117_int); // 0x1478 Func
	var_118_int = 10; // 0x147a PushI
	var_119_bool = var_100_int != var_118_int; // 0x147b Neq
	if(var_119_bool == 0) goto Label_5254; // 0x147c JumpB
	var_120_int = 0; var_121_string = ""; // 0x147d PushV
	var_121_string = "tvirin"; // 0x147e MovS
	func_5379(var_120_int, var_121_string); // 0x147f NEW_2
	var_122_int = 0; // 0x1481 PushI
	var_123_int = 1; // 0x1482 PushI
	AddItem(var_98_bool, var_120_int, var_122_int, var_123_int); // 0x1483 Func
	goto Label_5262; // 0x1485 Jump
	
Label_5262:
	var_124_int = 0; var_125_string = ""; // 0x148e PushV
	var_125_string = "lockpick"; // 0x148f MovS
	func_5379(var_124_int, var_125_string); // 0x1490 NEW_2
	var_126_int = 0; // 0x1492 PushI
	var_127_int = 3; // 0x1493 PushI
	AddItem(var_98_bool, var_124_int, var_126_int, var_127_int); // 0x1494 Func
	var_128_string = ""; var_129_int = 0; var_130_int = 0; // 0x1496 PushV
	var_128_string = "Scalpel"; // 0x1497 MovS
	var_129_int = 1; // 0x1498 MovI
	var_130_int = 2; // 0x1499 MovI
	func_4646(var_128_string, var_129_int, var_130_int); // 0x149a NEW_2
	var_139_string = ""; var_140_int = 0; var_141_int = 0; var_142_int = 0; var_143_int = 0; // 0x149c PushV
	var_139_string = "revolver_ammo"; // 0x149d MovS
	var_140_int = 1; // 0x149e MovI
	var_141_int = 1; // 0x149f MovI
	var_142_int = 5; // 0x14a0 MovI
	var_143_int = 10; // 0x14a1 MovI
	func_4657(var_139_string, var_140_int, var_141_int, var_142_int, var_143_int); // 0x14a2 NEW_2
	var_156_string = ""; var_157_int = 0; var_158_int = 0; var_159_int = 0; var_160_int = 0; // 0x14a4 PushV
	var_156_string = "rifle_ammo"; // 0x14a5 MovS
	var_157_int = 1; // 0x14a6 MovI
	var_158_int = 1; // 0x14a7 MovI
	var_159_int = 5; // 0x14a8 MovI
	var_160_int = 20; // 0x14a9 MovI
	func_4657(var_156_string, var_157_int, var_158_int, var_159_int, var_160_int); // 0x14aa NEW_2
	var_161_int = 100; // 0x14ac PushI
	irand(var_99_int, var_161_int); // 0x14ad Func
	var_162_int = 0; // 0x14af PushI
	var_163_bool = var_99_int != var_162_int; // 0x14b0 Neq
	if(var_163_bool == 0) goto Label_5305; // 0x14b1 JumpB
	var_164_int = 0; var_165_string = ""; // 0x14b2 PushV
	var_165_string = "kerosene"; // 0x14b3 MovS
	func_5379(var_164_int, var_165_string); // 0x14b4 NEW_2
	var_166_int = 0; // 0x14b6 PushI
	AddItem(var_98_bool, var_164_int, var_166_int, var_99_int); // 0x14b7 Func
	
Label_5305:
	var_167_int = 3; // 0x14b9 PushI
	var_168_bool = var_100_int >= var_167_int; // 0x14ba GE
	if(var_168_bool == 0) goto Label_5324; // 0x14bb JumpB
	var_169_int = 0; var_170_string = ""; // 0x14bc PushV
	var_170_string = "halfboot_repel"; // 0x14bd MovS
	func_5379(var_169_int, var_170_string); // 0x14be NEW_2
	var_171_int = 0; // 0x14c0 PushI
	var_172_int = 1; // 0x14c1 PushI
	AddItem(var_98_bool, var_169_int, var_171_int, var_172_int); // 0x14c2 Func
	var_173_int = 0; var_174_string = ""; // 0x14c4 PushV
	var_174_string = "boot_repel"; // 0x14c5 MovS
	func_5379(var_173_int, var_174_string); // 0x14c6 NEW_2
	var_175_int = 0; // 0x14c8 PushI
	var_176_int = 1; // 0x14c9 PushI
	AddItem(var_98_bool, var_173_int, var_175_int, var_176_int); // 0x14ca Func
	
Label_5324:
	var_177_int = 9; // 0x14cc PushI
	var_178_bool = var_100_int >= var_177_int; // 0x14cd GE
	if(var_178_bool == 0) goto Label_5351; // 0x14ce JumpB
	var_179_int = 0; var_180_string = ""; // 0x14cf PushV
	var_180_string = "boot_army"; // 0x14d0 MovS
	func_5379(var_179_int, var_180_string); // 0x14d1 NEW_2
	var_181_int = 0; // 0x14d3 PushI
	var_182_int = 1; // 0x14d4 PushI
	AddItem(var_98_bool, var_179_int, var_181_int, var_182_int); // 0x14d5 Func
	var_183_int = 0; var_184_string = ""; // 0x14d7 PushV
	var_184_string = "balahon"; // 0x14d8 MovS
	func_5379(var_183_int, var_184_string); // 0x14d9 NEW_2
	var_185_int = 0; // 0x14db PushI
	var_186_int = 1; // 0x14dc PushI
	AddItem(var_98_bool, var_183_int, var_185_int, var_186_int); // 0x14dd Func
	var_187_int = 0; var_188_string = ""; // 0x14df PushV
	var_188_string = "glove_army"; // 0x14e0 MovS
	func_5379(var_187_int, var_188_string); // 0x14e1 NEW_2
	var_189_int = 0; // 0x14e3 PushI
	var_190_int = 1; // 0x14e4 PushI
	AddItem(var_98_bool, var_187_int, var_189_int, var_190_int); // 0x14e5 Func
	
Label_5351:
	var_191_int = 0; // 0x14e7 PushV
	func_5401(var_191_int); // 0x14e8 NEW_2
	var_101_int = var_191_int; // 0x14e9 Mov
	var_195_int = 0; // 0x14eb PushI
	var_196_bool = var_101_int == var_195_int; // 0x14ec Eq
	if(var_196_bool == 0) goto Label_5367; // 0x14ed JumpB
	var_197_int = 0; var_198_string = ""; // 0x14ee PushV
	var_198_string = "Gun_danko"; // 0x14ef MovS
	func_5379(var_197_int, var_198_string); // 0x14f0 NEW_2
	var_199_int = 0; // 0x14f2 PushI
	var_200_int = 1; // 0x14f3 PushI
	AddItem(var_98_bool, var_197_int, var_199_int, var_200_int); // 0x14f4 Func
	goto Label_5378; // 0x14f6 Jump
	
Label_5378:
	return 8; // 0x1502 Return
	
Label_5367:
	var_201_int = 2; // 0x14f7 PushI
	var_202_bool = var_101_int == var_201_int; // 0x14f8 Eq
	if(var_202_bool == 0) goto Label_5378; // 0x14f9 JumpB
	var_203_int = 0; var_204_string = ""; // 0x14fa PushV
	var_204_string = "Gun"; // 0x14fb MovS
	func_5379(var_203_int, var_204_string); // 0x14fc NEW_2
	var_205_int = 0; // 0x14fe PushI
	var_206_int = 1; // 0x14ff PushI
	AddItem(var_98_bool, var_203_int, var_205_int, var_206_int); // 0x1500 Func
	
Label_5254:
	var_207_int = 0; var_208_string = ""; // 0x1486 PushV
	var_208_string = "tvirin"; // 0x1487 MovS
	func_5379(var_207_int, var_208_string); // 0x1488 NEW_2
	var_209_int = 0; // 0x148a PushI
	var_210_int = 4; // 0x148b PushI
	AddItem(var_98_bool, var_207_int, var_209_int, var_210_int); // 0x148c Func
}


func_4700(var_168_bool, var_169_string, var_170_string)
{
	var_171_object = Obj(); var_172_object = Obj(); // 0x125c PushV
	FindActor(var_172_object, var_169_string); // 0x125d Func
	var_173_bool = var_172_object == 0; // 0x125f NullEq
	if(var_173_bool == 0) goto Label_4707; // 0x1260 JumpB
	var_168_bool = 0; // 0x1261 MovB
	return 2; // 0x1262 Return
	
Label_4707:
	Trigger(var_172_object, var_170_string); // 0x1263 Func
	var_168_bool = 1; // 0x1265 MovB
	return 2; // 0x1266 Return
}


func_2659(var_0_bool, var_953_int, var_954_object)
{
	var_956_object = Obj(); var_957_bool = 0; var_958_int = 0; var_959_bool = 0; var_960_object = Obj(); var_961_bool = 0; var_962_int = 0; var_963_bool = 0; // 0xa63 PushV
	var_0_bool = var_954_object; // 0xa64 TMov
	var_964_bool = 0; var_965_object = Obj(); var_966_float = 0; // 0xa65 PushV
	var_965_object = var_954_object; // 0xa66 Mov
	var_966_float = 70.0; // 0xa67 MovF
	func_4307(var_965_object, var_966_float); // 0xa68 NEW_2
	var_967_bool = var_964_bool == 0; // 0xa6a Not
	if(var_967_bool == 0) goto Label_2670; // 0xa6b JumpB
	var_953_int = -2; // 0xa6c MovI
	return 8; // 0xa6d Return
	
Label_2670:
	CreateDialog(var_960_object); // 0xa6e Func
	var_968_int = 0; // 0xa70 PushV
	func_4758(var_968_int); // 0xa71 NEW_2
	SetNPCName(var_968_int); // 0xa73 ObjFunc
	var_969_int = 0; // 0xa75 PushV
	func_4756(var_969_int); // 0xa76 NEW_2
	SetNPCDescription(var_969_int); // 0xa78 ObjFunc
	var_970_string = ""; // 0xa7a PushV
	func_4760(var_970_string); // 0xa7b NEW_2
	SetPhoto(var_970_string); // 0xa7d ObjFunc
	var_971_string = ""; // 0xa7f PushV
	func_4762(var_971_string); // 0xa80 NEW_2
	SetPhoto2(var_971_string); // 0xa82 ObjFunc
	var_972_int = 0; // 0xa84 PushV
	func_5384(var_972_int); // 0xa85 NEW_2
	SetPlayerName(var_972_int); // 0xa87 ObjFunc
	var_962_int = -1; // 0xa89 MovI
	IsOverrideActive(var_961_bool); // 0xa8a Func
	var_973_bool = var_961_bool; // 0xa8c Push
	if(var_973_bool == 0) goto Label_2704; // 0xa8d JumpB
	var_953_int = -2; // 0xa8e MovI
	return 8; // 0xa8f Return
	
Label_2704:
	DoDialog(var_960_object); // 0xa90 Func
	var_974_bool = 0; var_975_object = Obj(); // 0xa92 PushV
	var_976_object = Obj(); // 0xa93 PushV
	func_4674(var_976_object); // 0xa94 NEW_2
	var_975_object = var_976_object; // 0xa95 Mov
	func_4394(var_974_bool, var_975_object); // 0xa97 NEW_2
	var_977_object = Obj(); var_978_object = Obj(); // 0xa99 PushV
	var_977_object = var_954_object; // 0xa9a Mov
	var_978_object = var_960_object; // 0xa9b Mov
	TaskCall(18); // 0xa9c TaskCall
	func_2740(var_979_object, var_980_object, var_981_string, var_982_bool, var_977_object, var_978_object); // 0xa9d NEW_2
	TaskReturn(); // 0xa9e TaskReturn
	IsDialogEnd(var_963_bool); // 0xaa0 ObjFunc
	
Label_2722:
	var_1010_bool = var_963_bool == 0; // 0xaa2 Not
	if(var_1010_bool == 0) goto Label_2729; // 0xaa3 JumpB
	sync(); // 0xaa4 Func
	IsDialogEnd(var_963_bool); // 0xaa6 ObjFunc
	goto Label_2722; // 0xaa8 Jump
	
Label_2729:
	var_1011_object = Obj(); // 0xaa9 PushV
	var_1011_object = var_954_object; // 0xaaa Mov
	func_4376(); // 0xaab NEW_2
	StopDialog(var_960_object); // 0xaad Func
	GetReturnValue(var_962_int); // 0xaaf ObjFunc
	var_953_int = var_962_int; // 0xab1 Mov
	return 8; // 0xab2 Return
}


func_4452(var_298_bool)
{
	var_300_string = ""; var_301_int = 0; var_302_bool = 0; var_303_int = 0; var_304_string = ""; var_305_string = ""; var_306_int = 0; var_307_bool = 0; var_308_int = 0; var_309_string = ""; // 0x1164 PushV
	var_305_string = "c"; // 0x1165 MovS
	var_306_int = 0; // 0x1166 MovI
	
Label_4455:
	var_310_int = 1; // 0x1167 PushI
	if(var_310_int == 0) goto Label_4468; // 0x1168 JumpB
	var_311_int = 1; // 0x1169 PushI
	var_312_int = var_306_int + var_311_int; // 0x116a Add
	var_313_int = var_305_string + var_312_int; // 0x116b Add
	HasProperty(var_313_int, var_307_bool); // 0x116c ObjFunc
	var_314_bool = var_307_bool == 0; // 0x116e Not
	if(var_314_bool == 0) goto Label_4465; // 0x116f JumpB
	goto Label_4468; // 0x1170 Jump
	
Label_4468:
	var_315_bool = var_306_int == 0; // 0x1174 Not
	if(var_315_bool == 0) goto Label_4472; // 0x1175 JumpB
	var_298_bool = 0; // 0x1176 MovB
	return 10; // 0x1177 Return
	
Label_4472:
	var_308_int = 0; // 0x1178 MovI
	var_316_int = 1; // 0x1179 PushI
	var_317_bool = var_306_int > var_316_int; // 0x117a GT
	if(var_317_bool == 0) goto Label_4478; // 0x117b JumpB
	irand(var_308_int, var_306_int); // 0x117c Func
	
Label_4478:
	var_318_int = 1; // 0x117e PushI
	var_319_int = var_308_int + var_318_int; // 0x117f Add
	var_320_int = var_305_string + var_319_int; // 0x1180 Add
	GetProperty(var_320_int, var_309_string); // 0x1181 ObjFunc
	var_321_bool = 0; var_322_string = ""; // 0x1183 PushV
	var_322_string = var_309_string; // 0x1184 Mov
	func_4624(var_321_bool, var_322_string); // 0x1185 NEW_2
	var_298_bool = var_321_bool; // 0x1186 Mov
	return 10; // 0x1188 Return
	
Label_4465:
	var_327_int = 1; // 0x1171 PushI
	var_306_int = var_306_int + var_327_int; // 0x1172 Add2
	goto Label_4455; // 0x1173 Jump
}


func_4965(var_1183_bool)
{
	var_1185_int = 0; var_1186_string = ""; // 0x1366 PushV
	var_1186_string = "k11q01"; // 0x1367 MovS
	func_4695(var_1185_int, var_1186_string); // 0x1368 NEW_2
	var_1187_int = 9; // 0x136a PushI
	var_1188_bool = var_1185_int == var_1187_int; // 0x136b Eq
	if(var_1188_bool == 0) goto Label_4975; // 0x136c JumpB
	var_1183_bool = 1; // 0x136d MovB
	return 0; // 0x136e Return
	
Label_4975:
	var_1183_bool = 0; // 0x136f MovB
	return 0; // 0x1370 Return
}


func_2150(var_2_object, var_795_string)
{
	var_796_bool = 0; // 0x867 PushV
	func_4764(var_796_bool); // 0x868 NEW_2
	var_797_bool = var_796_bool == 0; // 0x86a Not
	if(var_797_bool == 0) goto Label_2157; // 0x86b JumpB
	return 0; // 0x86c Return
	
Label_2157:
	var_798_bool = var_795_string == var_2_object; // 0x86d Eq
	if(var_798_bool == 0) goto Label_2160; // 0x86e JumpB
	return 0; // 0x86f Return
	
Label_2160:
	var_799_string = ""; var_800_bool = 0; // 0x870 PushV
	var_799_string = var_795_string; // 0x871 Mov
	var_801_string = ""; // 0x872 PushS
	var_802_bool = var_795_string == var_801_string; // 0x873 Eq
	if(var_802_bool == 0) goto Label_2167; // 0x874 JumpB
	var_800_bool = 0; // 0x875 MovB
	goto Label_2168; // 0x876 Jump
	
Label_2168:
	func_4609(var_799_string, var_800_bool); // 0x878 NEW_2
	var_2_object = var_795_string; // 0x87a TMov
	return 0; // 0x87b Return
	
Label_2167:
	var_800_bool = 1; // 0x877 MovB
}


func_103(var_0_bool, var_1_object, var_2_object, var_3_object, var_377_object, var_378_object)
{
	var_0_bool = var_378_object; // 0x68 TMov
	var_1_object = var_377_object; // 0x69 TMov
	var_3_object = 0; // 0x6a TMovB
	var_383_int = 1; // 0x6b PushI
	if(var_383_int == 0) goto Label_131; // 0x6c JumpB
	var_384_string = ""; // 0x6d PushV
	var_384_string = "Neutral"; // 0x6e MovS
	func_161(var_378_object, var_384_string); // 0x6f NEW_2
	var_401_int = 525483; // 0x71 PushI
	SetMessage(var_401_int); // 0x72 TObjFunc
	ClearReplies(); // 0x74 TObjFunc
	var_402_int = 525484; // 0x76 PushI
	var_403_int = 30758; // 0x77 PushI
	var_404_int = 26840; // 0x78 PushI
	AddReply(var_402_int, var_403_int, var_404_int); // 0x79 TObjFunc
	var_405_int = 529303; // 0x7b PushI
	var_406_int = -1; // 0x7c PushI
	var_407_int = 30757; // 0x7d PushI
	AddReply(var_405_int, var_406_int, var_407_int); // 0x7e TObjFunc
	goto Label_131; // 0x80 Jump
	
Label_131:
	var_408_bool = 0; // 0x83 PushV
	func_4764(var_408_bool); // 0x84 NEW_2
	if(var_408_bool == 0) goto Label_146; // 0x86 JumpB
	
Label_135:
	lshWaitForAnimEnd(); // 0x87 Func
	var_409_object = var_3_object; // 0x89 PushT
	if(var_409_object == 0) goto Label_140; // 0x8a JumpB
	goto Label_145; // 0x8b Jump
	
Label_145:
	goto Label_160; // 0x91 Jump
	
Label_160:
	return 0; // 0xa0 Return
	
Label_140:
	var_410_string = ""; // 0x8c PushV
	var_410_string = var_2_object; // 0x8d MovT
	func_4593(var_410_string); // 0x8e NEW_2
	goto Label_135; // 0x90 Jump
	
Label_146:
	var_421_string = "all"; // 0x92 PushS
	var_422_string = "idle"; // 0x93 PushS
	PlayAnimation(var_421_string, var_422_string); // 0x94 Func
	
Label_150:
	WaitForAnimEnd(); // 0x96 Func
	var_423_object = var_3_object; // 0x98 PushT
	if(var_423_object == 0) goto Label_155; // 0x99 JumpB
	goto Label_160; // 0x9a Jump
	
Label_155:
	var_424_string = "all"; // 0x9b PushS
	var_425_string = "idle"; // 0x9c PushS
	PlayAnimation(var_424_string, var_425_string); // 0x9d Func
	goto Label_150; // 0x9f Jump
}


func_4199()
{
	var_73_int = 0; var_74_int = 0; var_75_bool = 0; var_76_int = 0; var_77_int = 0; var_78_bool = 0; var_79_int = 0; var_80_int = 0; var_81_bool = 0; var_82_int = 0; var_83_int = 0; var_84_bool = 0; // 0x1067 PushV
	WaitForAnimEnd(); // 0x1068 Func
	var_85_bool = 0; // 0x106a PushV
	func_4302(var_85_bool); // 0x106b NEW_2
	var_86_bool = var_85_bool == 0; // 0x106d Not
	if(var_86_bool == 0) goto Label_4208; // 0x106e JumpB
	return 12; // 0x106f Return
	
Label_4208:
	var_87_int = 0; // 0x1070 PushV
	func_4739(var_87_int); // 0x1071 NEW_2
	var_79_int = var_87_int; // 0x1072 Mov
	var_80_int = 0; // 0x1074 MovI
	
Label_4213:
	var_100_bool = 0; // 0x1075 PushV
	var_100_bool = 0; // 0x1076 MovB
	var_101_int = 5; // 0x1077 PushI
	var_102_bool = var_80_int < var_101_int; // 0x1078 LT
	if(var_102_bool == 0) goto Label_4223; // 0x1079 JumpB
	var_103_bool = 0; // 0x107a PushV
	func_4302(var_103_bool); // 0x107b NEW_2
	if(var_103_bool == 0) goto Label_4223; // 0x107d JumpB
	var_100_bool = 1; // 0x107e MovB
	
Label_4223:
	if(var_100_bool == 0) goto Label_4265; // 0x107f JumpB
	var_104_bool = var_79_int == 0; // 0x1080 Not
	if(var_104_bool == 0) goto Label_4233; // 0x1081 JumpB
	var_105_int = 3; // 0x1082 PushI
	Sleep(var_105_int, var_81_bool); // 0x1083 Func
	var_106_bool = var_81_bool == 0; // 0x1085 Not
	if(var_106_bool == 0) goto Label_4232; // 0x1086 JumpB
	goto Label_4265; // 0x1087 Jump
	
Label_4265:
	ResetAAS(); // 0x10a9 Func
	return 12; // 0x10ab Return
	
Label_4232:
	goto Label_4254; // 0x1088 Jump
	
Label_4254:
	var_107_bool = 0; // 0x109e PushV
	func_4268(var_107_bool); // 0x109f NEW_2
	var_108_bool = var_107_bool == 0; // 0x10a1 Not
	if(var_108_bool == 0) goto Label_4260; // 0x10a2 JumpB
	goto Label_4265; // 0x10a3 Jump
	
Label_4260:
	ResetAAS(); // 0x10a4 Func
	var_109_int = 1; // 0x10a6 PushI
	var_80_int = var_80_int + var_109_int; // 0x10a7 Add2
	goto Label_4213; // 0x10a8 Jump
	
Label_4233:
	irand(var_82_int, var_79_int); // 0x1089 Func
	var_110_int = 5; // 0x108b PushI
	irand(var_83_int, var_110_int); // 0x108c Func
	var_111_int = 0; // 0x108e PushI
	var_112_bool = var_83_int != var_111_int; // 0x108f Neq
	if(var_112_bool == 0) goto Label_4242; // 0x1090 JumpB
	var_82_int = 0; // 0x1091 MovI
	
Label_4242:
	var_113_string = "all"; // 0x1092 PushS
	var_114_string = ""; var_115_int = 0; // 0x1093 PushV
	var_115_int = var_82_int; // 0x1094 Mov
	func_4732(var_114_string, var_115_int); // 0x1095 NEW_2
	PlayAnimation(var_113_string, var_114_string); // 0x1097 Func
	WaitForAnimEnd(var_84_bool); // 0x1099 Func
	var_116_bool = var_84_bool == 0; // 0x109b Not
	if(var_116_bool == 0) goto Label_4254; // 0x109c JumpB
	goto Label_4265; // 0x109d Jump
}


func_4712(var_90_float)
{
	var_91_float = 0; var_92_float = 0; // 0x1268 PushV
	GetGameTime(var_92_float); // 0x1269 Func
	var_90_float = var_92_float; // 0x126b Mov
	return 2; // 0x126c Return
}


func_1645(var_0_bool, var_1_object, var_2_object, var_3_object, var_567_object, var_568_object)
{
	var_0_bool = var_568_object; // 0x66e TMov
	var_1_object = var_567_object; // 0x66f TMov
	var_3_object = 0; // 0x670 TMovB
	var_573_int = 1; // 0x671 PushI
	if(var_573_int == 0) goto Label_1678; // 0x672 JumpB
	var_574_string = ""; // 0x673 PushV
	var_574_string = "Fear"; // 0x674 MovS
	func_1708(var_568_object, var_574_string); // 0x675 NEW_2
	var_582_int = 526660; // 0x677 PushI
	SetMessage(var_582_int); // 0x678 TObjFunc
	ClearReplies(); // 0x67a TObjFunc
	var_583_int = 526661; // 0x67c PushI
	var_584_int = -1; // 0x67d PushI
	var_585_int = 27937; // 0x67e PushI
	AddReply(var_583_int, var_584_int, var_585_int); // 0x67f TObjFunc
	var_586_int = 526662; // 0x681 PushI
	var_587_int = -1; // 0x682 PushI
	var_588_int = 27938; // 0x683 PushI
	AddReply(var_586_int, var_587_int, var_588_int); // 0x684 TObjFunc
	var_589_int = 528771; // 0x686 PushI
	var_590_int = -1; // 0x687 PushI
	var_591_int = 30182; // 0x688 PushI
	AddReply(var_589_int, var_590_int, var_591_int); // 0x689 TObjFunc
	goto Label_1678; // 0x68b Jump
	
Label_1678:
	var_592_bool = 0; // 0x68e PushV
	func_4764(var_592_bool); // 0x68f NEW_2
	if(var_592_bool == 0) goto Label_1693; // 0x691 JumpB
	
Label_1682:
	lshWaitForAnimEnd(); // 0x692 Func
	var_593_object = var_3_object; // 0x694 PushT
	if(var_593_object == 0) goto Label_1687; // 0x695 JumpB
	goto Label_1692; // 0x696 Jump
	
Label_1692:
	goto Label_1707; // 0x69c Jump
	
Label_1707:
	return 0; // 0x6ab Return
	
Label_1687:
	var_594_string = ""; // 0x697 PushV
	var_594_string = var_2_object; // 0x698 MovT
	func_4593(var_594_string); // 0x699 NEW_2
	goto Label_1682; // 0x69b Jump
	
Label_1693:
	var_595_string = "all"; // 0x69d PushS
	var_596_string = "idle"; // 0x69e PushS
	PlayAnimation(var_595_string, var_596_string); // 0x69f Func
	
Label_1697:
	WaitForAnimEnd(); // 0x6a1 Func
	var_597_object = var_3_object; // 0x6a3 PushT
	if(var_597_object == 0) goto Label_1702; // 0x6a4 JumpB
	goto Label_1707; // 0x6a5 Jump
	
Label_1702:
	var_598_string = "all"; // 0x6a6 PushS
	var_599_string = "idle"; // 0x6a7 PushS
	PlayAnimation(var_598_string, var_599_string); // 0x6a8 Func
	goto Label_1697; // 0x6aa Jump
}


func_3182(var_0_bool, var_1_object, var_2_object, var_3_object, var_1105_object, var_1106_object)
{
	var_0_bool = var_1106_object; // 0xc6f TMov
	var_1_object = var_1105_object; // 0xc70 TMov
	var_3_object = 0; // 0xc71 TMovB
	var_1111_int = 1; // 0xc72 PushI
	if(var_1111_int == 0) goto Label_3210; // 0xc73 JumpB
	var_1112_string = ""; // 0xc74 PushV
	var_1112_string = "Neutral"; // 0xc75 MovS
	func_3240(var_1106_object, var_1112_string); // 0xc76 NEW_2
	var_1120_int = 526689; // 0xc78 PushI
	SetMessage(var_1120_int); // 0xc79 TObjFunc
	ClearReplies(); // 0xc7b TObjFunc
	var_1121_int = 526690; // 0xc7d PushI
	var_1122_int = -1; // 0xc7e PushI
	var_1123_int = 27966; // 0xc7f PushI
	AddReply(var_1121_int, var_1122_int, var_1123_int); // 0xc80 TObjFunc
	var_1124_int = 526691; // 0xc82 PushI
	var_1125_int = -1; // 0xc83 PushI
	var_1126_int = 27967; // 0xc84 PushI
	AddReply(var_1124_int, var_1125_int, var_1126_int); // 0xc85 TObjFunc
	goto Label_3210; // 0xc87 Jump
	
Label_3210:
	var_1127_bool = 0; // 0xc8a PushV
	func_4764(var_1127_bool); // 0xc8b NEW_2
	if(var_1127_bool == 0) goto Label_3225; // 0xc8d JumpB
	
Label_3214:
	lshWaitForAnimEnd(); // 0xc8e Func
	var_1128_object = var_3_object; // 0xc90 PushT
	if(var_1128_object == 0) goto Label_3219; // 0xc91 JumpB
	goto Label_3224; // 0xc92 Jump
	
Label_3224:
	goto Label_3239; // 0xc98 Jump
	
Label_3239:
	return 0; // 0xca7 Return
	
Label_3219:
	var_1129_string = ""; // 0xc93 PushV
	var_1129_string = var_2_object; // 0xc94 MovT
	func_4593(var_1129_string); // 0xc95 NEW_2
	goto Label_3214; // 0xc97 Jump
	
Label_3225:
	var_1130_string = "all"; // 0xc99 PushS
	var_1131_string = "idle"; // 0xc9a PushS
	PlayAnimation(var_1130_string, var_1131_string); // 0xc9b Func
	
Label_3229:
	WaitForAnimEnd(); // 0xc9d Func
	var_1132_object = var_3_object; // 0xc9f PushT
	if(var_1132_object == 0) goto Label_3234; // 0xca0 JumpB
	goto Label_3239; // 0xca1 Jump
	
Label_3234:
	var_1133_string = "all"; // 0xca2 PushS
	var_1134_string = "idle"; // 0xca3 PushS
	PlayAnimation(var_1133_string, var_1134_string); // 0xca4 Func
	goto Label_3229; // 0xca6 Jump
}


func_4717(var_87_int)
{
	var_88_float = 0; var_89_float = 0; // 0x126d PushV
	GetGameTime(var_89_float); // 0x126e Func
	var_90_int = 1; // 0x1270 PushI
	var_91_int = 0; // 0x1271 PushV
	var_92_int = 24; // 0x1272 PushI
	var_91_int = var_89_float / var_89_float; // 0x1273 Div2
	var_87_int = var_90_int + var_91_int; // 0x1274 Add2
	return 2; // 0x1275 Return
}


func_4977(var_1189_bool)
{
	var_1191_int = 0; var_1192_string = ""; // 0x1372 PushV
	var_1192_string = "ook11Grif1"; // 0x1373 MovS
	func_4695(var_1191_int, var_1192_string); // 0x1374 NEW_2
	var_1193_int = 0; // 0x1376 PushI
	var_1194_bool = var_1191_int == var_1193_int; // 0x1377 Eq
	if(var_1194_bool == 0) goto Label_4987; // 0x1378 JumpB
	var_1189_bool = 1; // 0x1379 MovB
	return 0; // 0x137a Return
	
Label_4987:
	var_1189_bool = 0; // 0x137b MovB
	return 0; // 0x137c Return
}


func_4726(var_436_bool, var_437_int)
{
	var_438_int = 0; // 0x1277 PushV
	func_4717(var_438_int); // 0x1278 NEW_2
	var_436_bool = var_438_int == var_437_int; // 0x127a Eq2
	return 0; // 0x127b Return
}


func_3708(var_0_bool, var_1218_int, var_1219_object)
{
	var_1221_object = Obj(); var_1222_bool = 0; var_1223_int = 0; var_1224_bool = 0; var_1225_object = Obj(); var_1226_bool = 0; var_1227_int = 0; var_1228_bool = 0; // 0xe7c PushV
	var_0_bool = var_1219_object; // 0xe7d TMov
	var_1229_bool = 0; var_1230_object = Obj(); var_1231_float = 0; // 0xe7e PushV
	var_1230_object = var_1219_object; // 0xe7f Mov
	var_1231_float = 70.0; // 0xe80 MovF
	func_4307(var_1230_object, var_1231_float); // 0xe81 NEW_2
	var_1232_bool = var_1229_bool == 0; // 0xe83 Not
	if(var_1232_bool == 0) goto Label_3719; // 0xe84 JumpB
	var_1218_int = -2; // 0xe85 MovI
	return 8; // 0xe86 Return
	
Label_3719:
	CreateDialog(var_1225_object); // 0xe87 Func
	var_1233_int = 0; // 0xe89 PushV
	func_4758(var_1233_int); // 0xe8a NEW_2
	SetNPCName(var_1233_int); // 0xe8c ObjFunc
	var_1234_int = 0; // 0xe8e PushV
	func_4756(var_1234_int); // 0xe8f NEW_2
	SetNPCDescription(var_1234_int); // 0xe91 ObjFunc
	var_1235_string = ""; // 0xe93 PushV
	func_4760(var_1235_string); // 0xe94 NEW_2
	SetPhoto(var_1235_string); // 0xe96 ObjFunc
	var_1236_string = ""; // 0xe98 PushV
	func_4762(var_1236_string); // 0xe99 NEW_2
	SetPhoto2(var_1236_string); // 0xe9b ObjFunc
	var_1237_int = 0; // 0xe9d PushV
	func_5384(var_1237_int); // 0xe9e NEW_2
	SetPlayerName(var_1237_int); // 0xea0 ObjFunc
	var_1227_int = -1; // 0xea2 MovI
	IsOverrideActive(var_1226_bool); // 0xea3 Func
	var_1238_bool = var_1226_bool; // 0xea5 Push
	if(var_1238_bool == 0) goto Label_3753; // 0xea6 JumpB
	var_1218_int = -2; // 0xea7 MovI
	return 8; // 0xea8 Return
	
Label_3753:
	DoDialog(var_1225_object); // 0xea9 Func
	var_1239_bool = 0; var_1240_object = Obj(); // 0xeab PushV
	var_1241_object = Obj(); // 0xeac PushV
	func_4674(var_1241_object); // 0xead NEW_2
	var_1240_object = var_1241_object; // 0xeae Mov
	func_4394(var_1239_bool, var_1240_object); // 0xeb0 NEW_2
	var_1242_object = Obj(); var_1243_object = Obj(); // 0xeb2 PushV
	var_1242_object = var_1219_object; // 0xeb3 Mov
	var_1243_object = var_1225_object; // 0xeb4 Mov
	TaskCall(26); // 0xeb5 TaskCall
	func_3789(var_1244_object, var_1245_object, var_1246_string, var_1247_bool, var_1242_object, var_1243_object); // 0xeb6 NEW_2
	TaskReturn(); // 0xeb7 TaskReturn
	IsDialogEnd(var_1228_bool); // 0xeb9 ObjFunc
	
Label_3771:
	var_1275_bool = var_1228_bool == 0; // 0xebb Not
	if(var_1275_bool == 0) goto Label_3778; // 0xebc JumpB
	sync(); // 0xebd Func
	IsDialogEnd(var_1228_bool); // 0xebf ObjFunc
	goto Label_3771; // 0xec1 Jump
	
Label_3778:
	var_1276_object = Obj(); // 0xec2 PushV
	var_1276_object = var_1219_object; // 0xec3 Mov
	func_4376(); // 0xec4 NEW_2
	StopDialog(var_1225_object); // 0xec6 Func
	GetReturnValue(var_1227_int); // 0xec8 ObjFunc
	var_1218_int = var_1227_int; // 0xeca Mov
	return 8; // 0xecb Return
}


func_4732(var_93_string, var_94_int)
{
	var_95_string = ""; var_96_string = ""; // 0x127c PushV
	var_96_string = "idle"; // 0x127d MovS
	var_97_int = var_94_int; // 0x127e Push
	if(var_97_int == 0) goto Label_4737; // 0x127f JumpB
	var_96_string = var_96_string + var_94_int; // 0x1280 Add2
	
Label_4737:
	var_93_string = var_96_string; // 0x1281 Mov
	return 2; // 0x1282 Return
}


func_4989()
{
	var_153_object = Obj(); var_154_object = Obj(); // 0x137d PushV
	var_155_int = 498; // 0x137e PushI
	var_156_int = 1; // 0x137f PushI
	var_157_int = 528065; // 0x1380 PushI
	CreateDiaryEntry(var_154_object, var_155_int, var_156_int, var_157_int); // 0x1381 Func
	var_158_bool = 0; var_159_object = Obj(); var_160_int = 0; // 0x1383 PushV
	var_159_object = var_154_object; // 0x1384 Mov
	var_160_int = 480; // 0x1385 MovI
	func_5132(var_158_bool, var_159_object, var_160_int); // 0x1386 NEW_2
	return 2; // 0x1388 Return
}


func_4739(var_87_int)
{
	var_88_int = 0; var_89_bool = 0; var_90_int = 0; var_91_bool = 0; // 0x1283 PushV
	var_90_int = 0; // 0x1284 MovI
	
Label_4741:
	var_92_string = "all"; // 0x1285 PushS
	var_93_string = ""; var_94_int = 0; // 0x1286 PushV
	var_94_int = var_90_int; // 0x1287 Mov
	func_4732(var_93_string, var_94_int); // 0x1288 NEW_2
	HasAnimation(var_91_bool, var_92_string, var_93_string); // 0x128a Func
	var_98_bool = var_91_bool == 0; // 0x128c Not
	if(var_98_bool == 0) goto Label_4751; // 0x128d JumpB
	goto Label_4754; // 0x128e Jump
	
Label_4754:
	var_87_int = var_90_int; // 0x1292 Mov
	return 4; // 0x1293 Return
	
Label_4751:
	var_99_int = 1; // 0x128f PushI
	var_90_int = var_90_int + var_99_int; // 0x1290 Add2
	goto Label_4741; // 0x1291 Jump
}


func_1929(var_2_object, var_638_string)
{
	var_639_bool = 0; // 0x78a PushV
	func_4764(var_639_bool); // 0x78b NEW_2
	var_640_bool = var_639_bool == 0; // 0x78d Not
	if(var_640_bool == 0) goto Label_1936; // 0x78e JumpB
	return 0; // 0x78f Return
	
Label_1936:
	var_641_bool = var_638_string == var_2_object; // 0x790 Eq
	if(var_641_bool == 0) goto Label_1939; // 0x791 JumpB
	return 0; // 0x792 Return
	
Label_1939:
	var_642_string = ""; var_643_bool = 0; // 0x793 PushV
	var_642_string = var_638_string; // 0x794 Mov
	var_644_string = ""; // 0x795 PushS
	var_645_bool = var_638_string == var_644_string; // 0x796 Eq
	if(var_645_bool == 0) goto Label_1946; // 0x797 JumpB
	var_643_bool = 0; // 0x798 MovB
	goto Label_1947; // 0x799 Jump
	
Label_1947:
	func_4609(var_642_string, var_643_bool); // 0x79b NEW_2
	var_2_object = var_638_string; // 0x79d TMov
	return 0; // 0x79e Return
	
Label_1946:
	var_643_bool = 1; // 0x79a MovB
}


func_4489(var_329_bool)
{
	var_331_string = ""; var_332_int = 0; var_333_bool = 0; var_334_int = 0; var_335_string = ""; var_336_string = ""; var_337_int = 0; var_338_bool = 0; var_339_int = 0; var_340_string = ""; // 0x1189 PushV
	var_341_string = "d"; // 0x118a PushS
	var_342_int = 0; // 0x118b PushV
	func_4717(var_342_int); // 0x118c NEW_2
	var_343_int = var_341_string + var_342_int; // 0x118e Add
	var_344_string = "m"; // 0x118f PushS
	var_336_string = var_343_int + var_344_string; // 0x1190 Add2
	var_337_int = 0; // 0x1191 MovI
	
Label_4498:
	var_345_int = 1; // 0x1192 PushI
	if(var_345_int == 0) goto Label_4511; // 0x1193 JumpB
	var_346_int = 1; // 0x1194 PushI
	var_347_int = var_337_int + var_346_int; // 0x1195 Add
	var_348_int = var_336_string + var_347_int; // 0x1196 Add
	HasProperty(var_348_int, var_338_bool); // 0x1197 ObjFunc
	var_349_bool = var_338_bool == 0; // 0x1199 Not
	if(var_349_bool == 0) goto Label_4508; // 0x119a JumpB
	goto Label_4511; // 0x119b Jump
	
Label_4511:
	var_350_bool = var_337_int == 0; // 0x119f Not
	if(var_350_bool == 0) goto Label_4515; // 0x11a0 JumpB
	var_329_bool = 0; // 0x11a1 MovB
	return 10; // 0x11a2 Return
	
Label_4515:
	var_339_int = 0; // 0x11a3 MovI
	var_351_int = 1; // 0x11a4 PushI
	var_352_bool = var_337_int > var_351_int; // 0x11a5 GT
	if(var_352_bool == 0) goto Label_4521; // 0x11a6 JumpB
	irand(var_339_int, var_337_int); // 0x11a7 Func
	
Label_4521:
	var_353_int = 1; // 0x11a9 PushI
	var_354_int = var_339_int + var_353_int; // 0x11aa Add
	var_355_int = var_336_string + var_354_int; // 0x11ab Add
	GetProperty(var_355_int, var_340_string); // 0x11ac ObjFunc
	var_356_bool = 0; var_357_string = ""; // 0x11ae PushV
	var_357_string = var_340_string; // 0x11af Mov
	func_4624(var_356_bool, var_357_string); // 0x11b0 NEW_2
	var_329_bool = var_356_bool; // 0x11b1 Mov
	return 10; // 0x11b3 Return
	
Label_4508:
	var_358_int = 1; // 0x119c PushI
	var_337_int = var_337_int + var_358_int; // 0x119d Add2
	goto Label_4498; // 0x119e Jump
}


func_5002()
{
	var_143_object = Obj(); var_144_object = Obj(); // 0x138a PushV
	var_145_int = 497; // 0x138b PushI
	var_146_int = 1; // 0x138c PushI
	var_147_int = 528064; // 0x138d PushI
	CreateDiaryEntry(var_144_object, var_145_int, var_146_int, var_147_int); // 0x138e Func
	var_148_bool = 0; var_149_object = Obj(); var_150_int = 0; // 0x1390 PushV
	var_149_object = var_144_object; // 0x1391 Mov
	var_150_int = 480; // 0x1392 MovI
	func_5132(var_148_bool, var_149_object, var_150_int); // 0x1393 NEW_2
	return 2; // 0x1395 Return
}


func_3470(var_2_object, var_1173_string)
{
	var_1174_bool = 0; // 0xd8f PushV
	func_4764(var_1174_bool); // 0xd90 NEW_2
	var_1175_bool = var_1174_bool == 0; // 0xd92 Not
	if(var_1175_bool == 0) goto Label_3477; // 0xd93 JumpB
	return 0; // 0xd94 Return
	
Label_3477:
	var_1176_bool = var_1173_string == var_2_object; // 0xd95 Eq
	if(var_1176_bool == 0) goto Label_3480; // 0xd96 JumpB
	return 0; // 0xd97 Return
	
Label_3480:
	var_1177_string = ""; var_1178_bool = 0; // 0xd98 PushV
	var_1177_string = var_1173_string; // 0xd99 Mov
	var_1179_string = ""; // 0xd9a PushS
	var_1180_bool = var_1173_string == var_1179_string; // 0xd9b Eq
	if(var_1180_bool == 0) goto Label_3487; // 0xd9c JumpB
	var_1178_bool = 0; // 0xd9d MovB
	goto Label_3488; // 0xd9e Jump
	
Label_3488:
	func_4609(var_1177_string, var_1178_bool); // 0xda0 NEW_2
	var_2_object = var_1173_string; // 0xda2 TMov
	return 0; // 0xda3 Return
	
Label_3487:
	var_1178_bool = 1; // 0xd9f MovB
}


func_1424(var_0_bool, var_1_object, var_2_object, var_3_object, var_464_object, var_465_object)
{
	var_0_bool = var_465_object; // 0x591 TMov
	var_1_object = var_464_object; // 0x592 TMov
	var_3_object = 0; // 0x593 TMovB
	var_470_int = 1; // 0x594 PushI
	if(var_470_int == 0) goto Label_1457; // 0x595 JumpB
	var_471_string = ""; // 0x596 PushV
	var_471_string = "Fear"; // 0x597 MovS
	func_1487(var_465_object, var_471_string); // 0x598 NEW_2
	var_479_int = 526656; // 0x59a PushI
	SetMessage(var_479_int); // 0x59b TObjFunc
	ClearReplies(); // 0x59d TObjFunc
	var_480_int = 526657; // 0x59f PushI
	var_481_int = -1; // 0x5a0 PushI
	var_482_int = 27933; // 0x5a1 PushI
	AddReply(var_480_int, var_481_int, var_482_int); // 0x5a2 TObjFunc
	var_483_int = 526658; // 0x5a4 PushI
	var_484_int = -1; // 0x5a5 PushI
	var_485_int = 27934; // 0x5a6 PushI
	AddReply(var_483_int, var_484_int, var_485_int); // 0x5a7 TObjFunc
	var_486_int = 542279; // 0x5a9 PushI
	var_487_int = -1; // 0x5aa PushI
	var_488_int = 44624; // 0x5ab PushI
	AddReply(var_486_int, var_487_int, var_488_int); // 0x5ac TObjFunc
	goto Label_1457; // 0x5ae Jump
	
Label_1457:
	var_489_bool = 0; // 0x5b1 PushV
	func_4764(var_489_bool); // 0x5b2 NEW_2
	if(var_489_bool == 0) goto Label_1472; // 0x5b4 JumpB
	
Label_1461:
	lshWaitForAnimEnd(); // 0x5b5 Func
	var_490_object = var_3_object; // 0x5b7 PushT
	if(var_490_object == 0) goto Label_1466; // 0x5b8 JumpB
	goto Label_1471; // 0x5b9 Jump
	
Label_1471:
	goto Label_1486; // 0x5bf Jump
	
Label_1486:
	return 0; // 0x5ce Return
	
Label_1466:
	var_491_string = ""; // 0x5ba PushV
	var_491_string = var_2_object; // 0x5bb MovT
	func_4593(var_491_string); // 0x5bc NEW_2
	goto Label_1461; // 0x5be Jump
	
Label_1472:
	var_492_string = "all"; // 0x5c0 PushS
	var_493_string = "idle"; // 0x5c1 PushS
	PlayAnimation(var_492_string, var_493_string); // 0x5c2 Func
	
Label_1476:
	WaitForAnimEnd(); // 0x5c4 Func
	var_494_object = var_3_object; // 0x5c6 PushT
	if(var_494_object == 0) goto Label_1481; // 0x5c7 JumpB
	goto Label_1486; // 0x5c8 Jump
	
Label_1481:
	var_495_string = "all"; // 0x5c9 PushS
	var_496_string = "idle"; // 0x5ca PushS
	PlayAnimation(var_495_string, var_496_string); // 0x5cb Func
	goto Label_1476; // 0x5cd Jump
}


func_2961(var_0_bool, var_1_object, var_2_object, var_3_object, var_1041_object, var_1042_object)
{
	var_0_bool = var_1042_object; // 0xb92 TMov
	var_1_object = var_1041_object; // 0xb93 TMov
	var_3_object = 0; // 0xb94 TMovB
	var_1047_int = 1; // 0xb95 PushI
	if(var_1047_int == 0) goto Label_2994; // 0xb96 JumpB
	var_1048_string = ""; // 0xb97 PushV
	var_1048_string = "Neutral"; // 0xb98 MovS
	func_3024(var_1042_object, var_1048_string); // 0xb99 NEW_2
	var_1056_int = 526685; // 0xb9b PushI
	SetMessage(var_1056_int); // 0xb9c TObjFunc
	ClearReplies(); // 0xb9e TObjFunc
	var_1057_int = 526686; // 0xba0 PushI
	var_1058_int = -1; // 0xba1 PushI
	var_1059_int = 27962; // 0xba2 PushI
	AddReply(var_1057_int, var_1058_int, var_1059_int); // 0xba3 TObjFunc
	var_1060_int = 526687; // 0xba5 PushI
	var_1061_int = -1; // 0xba6 PushI
	var_1062_int = 27963; // 0xba7 PushI
	AddReply(var_1060_int, var_1061_int, var_1062_int); // 0xba8 TObjFunc
	var_1063_int = 529000; // 0xbaa PushI
	var_1064_int = -1; // 0xbab PushI
	var_1065_int = 30437; // 0xbac PushI
	AddReply(var_1063_int, var_1064_int, var_1065_int); // 0xbad TObjFunc
	goto Label_2994; // 0xbaf Jump
	
Label_2994:
	var_1066_bool = 0; // 0xbb2 PushV
	func_4764(var_1066_bool); // 0xbb3 NEW_2
	if(var_1066_bool == 0) goto Label_3009; // 0xbb5 JumpB
	
Label_2998:
	lshWaitForAnimEnd(); // 0xbb6 Func
	var_1067_object = var_3_object; // 0xbb8 PushT
	if(var_1067_object == 0) goto Label_3003; // 0xbb9 JumpB
	goto Label_3008; // 0xbba Jump
	
Label_3008:
	goto Label_3023; // 0xbc0 Jump
	
Label_3023:
	return 0; // 0xbcf Return
	
Label_3003:
	var_1068_string = ""; // 0xbbb PushV
	var_1068_string = var_2_object; // 0xbbc MovT
	func_4593(var_1068_string); // 0xbbd NEW_2
	goto Label_2998; // 0xbbf Jump
	
Label_3009:
	var_1069_string = "all"; // 0xbc1 PushS
	var_1070_string = "idle"; // 0xbc2 PushS
	PlayAnimation(var_1069_string, var_1070_string); // 0xbc3 Func
	
Label_3013:
	WaitForAnimEnd(); // 0xbc5 Func
	var_1071_object = var_3_object; // 0xbc7 PushT
	if(var_1071_object == 0) goto Label_3018; // 0xbc8 JumpB
	goto Label_3023; // 0xbc9 Jump
	
Label_3018:
	var_1072_string = "all"; // 0xbca PushS
	var_1073_string = "idle"; // 0xbcb PushS
	PlayAnimation(var_1072_string, var_1073_string); // 0xbcc Func
	goto Label_3013; // 0xbce Jump
}


func_2448(var_0_bool, var_892_int, var_893_object)
{
	var_895_object = Obj(); var_896_bool = 0; var_897_int = 0; var_898_bool = 0; var_899_object = Obj(); var_900_bool = 0; var_901_int = 0; var_902_bool = 0; // 0x990 PushV
	var_0_bool = var_893_object; // 0x991 TMov
	var_903_bool = 0; var_904_object = Obj(); var_905_float = 0; // 0x992 PushV
	var_904_object = var_893_object; // 0x993 Mov
	var_905_float = 70.0; // 0x994 MovF
	func_4307(var_904_object, var_905_float); // 0x995 NEW_2
	var_906_bool = var_903_bool == 0; // 0x997 Not
	if(var_906_bool == 0) goto Label_2459; // 0x998 JumpB
	var_892_int = -2; // 0x999 MovI
	return 8; // 0x99a Return
	
Label_2459:
	CreateDialog(var_899_object); // 0x99b Func
	var_907_int = 0; // 0x99d PushV
	func_4758(var_907_int); // 0x99e NEW_2
	SetNPCName(var_907_int); // 0x9a0 ObjFunc
	var_908_int = 0; // 0x9a2 PushV
	func_4756(var_908_int); // 0x9a3 NEW_2
	SetNPCDescription(var_908_int); // 0x9a5 ObjFunc
	var_909_string = ""; // 0x9a7 PushV
	func_4760(var_909_string); // 0x9a8 NEW_2
	SetPhoto(var_909_string); // 0x9aa ObjFunc
	var_910_string = ""; // 0x9ac PushV
	func_4762(var_910_string); // 0x9ad NEW_2
	SetPhoto2(var_910_string); // 0x9af ObjFunc
	var_911_int = 0; // 0x9b1 PushV
	func_5384(var_911_int); // 0x9b2 NEW_2
	SetPlayerName(var_911_int); // 0x9b4 ObjFunc
	var_901_int = -1; // 0x9b6 MovI
	IsOverrideActive(var_900_bool); // 0x9b7 Func
	var_912_bool = var_900_bool; // 0x9b9 Push
	if(var_912_bool == 0) goto Label_2493; // 0x9ba JumpB
	var_892_int = -2; // 0x9bb MovI
	return 8; // 0x9bc Return
	
Label_2493:
	DoDialog(var_899_object); // 0x9bd Func
	var_913_bool = 0; var_914_object = Obj(); // 0x9bf PushV
	var_915_object = Obj(); // 0x9c0 PushV
	func_4674(var_915_object); // 0x9c1 NEW_2
	var_914_object = var_915_object; // 0x9c2 Mov
	func_4394(var_913_bool, var_914_object); // 0x9c4 NEW_2
	var_916_object = Obj(); var_917_object = Obj(); // 0x9c6 PushV
	var_916_object = var_893_object; // 0x9c7 Mov
	var_917_object = var_899_object; // 0x9c8 Mov
	TaskCall(16); // 0x9c9 TaskCall
	func_2529(var_918_object, var_919_object, var_920_string, var_921_bool, var_916_object, var_917_object); // 0x9ca NEW_2
	TaskReturn(); // 0x9cb TaskReturn
	IsDialogEnd(var_902_bool); // 0x9cd ObjFunc
	
Label_2511:
	var_946_bool = var_902_bool == 0; // 0x9cf Not
	if(var_946_bool == 0) goto Label_2518; // 0x9d0 JumpB
	sync(); // 0x9d1 Func
	IsDialogEnd(var_902_bool); // 0x9d3 ObjFunc
	goto Label_2511; // 0x9d5 Jump
	
Label_2518:
	var_947_object = Obj(); // 0x9d6 PushV
	var_947_object = var_893_object; // 0x9d7 Mov
	func_4376(); // 0x9d8 NEW_2
	StopDialog(var_899_object); // 0x9da Func
	GetReturnValue(var_901_int); // 0x9dc ObjFunc
	var_892_int = var_901_int; // 0x9de Mov
	return 8; // 0x9df Return
}


func_4756(var_275_int)
{
	var_275_int = 515535; // 0x1294 MovI
	return 0; // 0x1295 Return
}


func_4758(var_274_int)
{
	var_274_int = 502860; // 0x1296 MovI
	return 0; // 0x1297 Return
}


func_5015()
{
	var_133_object = Obj(); var_134_object = Obj(); // 0x1397 PushV
	var_135_int = 496; // 0x1398 PushI
	var_136_int = 1; // 0x1399 PushI
	var_137_int = 528063; // 0x139a PushI
	CreateDiaryEntry(var_134_object, var_135_int, var_136_int, var_137_int); // 0x139b Func
	var_138_bool = 0; var_139_object = Obj(); var_140_int = 0; // 0x139d PushV
	var_139_object = var_134_object; // 0x139e Mov
	var_140_int = 480; // 0x139f MovI
	func_5132(var_138_bool, var_139_object, var_140_int); // 0x13a0 NEW_2
	return 2; // 0x13a2 Return
}


func_4760(var_276_string)
{
	var_276_string = "ui/NPC_Grif.png"; // 0x1298 MovS
	return 0; // 0x1299 Return
}


func_4762(var_277_string)
{
	var_277_string = "ui/NPC_Grif_b.png"; // 0x129a MovS
	return 0; // 0x129b Return
}


func_4764(var_269_bool)
{
	var_269_bool = 1; // 0x129c MovB
	return 0; // 0x129d Return
}


func_4766()
{
	var_118_object = Obj(); var_119_string = ""; var_120_float = 0; // 0x129f PushV
	var_121_object = Obj(); // 0x12a0 PushV
	func_5160(var_121_object); // 0x12a1 NEW_2
	var_118_object = var_121_object; // 0x12a2 Mov
	var_119_string = "pt_map_notkin"; // 0x12a4 MovS
	var_120_float = 2; // 0x12a5 MovI
	func_5177(var_118_object, var_119_string, var_120_float); // 0x12a6 NEW_2
	var_141_object = Obj(); // 0x12a8 PushV
	func_5160(var_141_object); // 0x12a9 NEW_2
	ShowMap(var_141_object); // 0x12ab ObjFunc
	return 0; // 0x12ad Return
}


func_161(var_2_object, var_384_string)
{
	var_385_bool = 0; // 0xa2 PushV
	func_4764(var_385_bool); // 0xa3 NEW_2
	var_386_bool = var_385_bool == 0; // 0xa5 Not
	if(var_386_bool == 0) goto Label_168; // 0xa6 JumpB
	return 0; // 0xa7 Return
	
Label_168:
	var_387_bool = var_384_string == var_2_object; // 0xa8 Eq
	if(var_387_bool == 0) goto Label_171; // 0xa9 JumpB
	return 0; // 0xaa Return
	
Label_171:
	var_388_string = ""; var_389_bool = 0; // 0xab PushV
	var_388_string = var_384_string; // 0xac Mov
	var_390_string = ""; // 0xad PushS
	var_391_bool = var_384_string == var_390_string; // 0xae Eq
	if(var_391_bool == 0) goto Label_178; // 0xaf JumpB
	var_389_bool = 0; // 0xb0 MovB
	goto Label_179; // 0xb1 Jump
	
Label_179:
	func_4609(var_388_string, var_389_bool); // 0xb3 NEW_2
	var_2_object = var_384_string; // 0xb5 TMov
	return 0; // 0xb6 Return
	
Label_178:
	var_389_bool = 1; // 0xb2 MovB
}


func_5028()
{
	var_123_object = Obj(); var_124_object = Obj(); // 0x13a4 PushV
	var_125_int = 495; // 0x13a5 PushI
	var_126_int = 1; // 0x13a6 PushI
	var_127_int = 528062; // 0x13a7 PushI
	CreateDiaryEntry(var_124_object, var_125_int, var_126_int, var_127_int); // 0x13a8 Func
	var_128_bool = 0; var_129_object = Obj(); var_130_int = 0; // 0x13aa PushV
	var_129_object = var_124_object; // 0x13ab Mov
	var_130_int = 480; // 0x13ac MovI
	func_5132(var_128_bool, var_129_object, var_130_int); // 0x13ad NEW_2
	return 2; // 0x13af Return
}


func_422(var_2_object, var_702_string)
{
	var_703_bool = 0; // 0x1a7 PushV
	func_4764(var_703_bool); // 0x1a8 NEW_2
	var_704_bool = var_703_bool == 0; // 0x1aa Not
	if(var_704_bool == 0) goto Label_429; // 0x1ab JumpB
	return 0; // 0x1ac Return
	
Label_429:
	var_705_bool = var_702_string == var_2_object; // 0x1ad Eq
	if(var_705_bool == 0) goto Label_432; // 0x1ae JumpB
	return 0; // 0x1af Return
	
Label_432:
	var_706_string = ""; var_707_bool = 0; // 0x1b0 PushV
	var_706_string = var_702_string; // 0x1b1 Mov
	var_708_string = ""; // 0x1b2 PushS
	var_709_bool = var_702_string == var_708_string; // 0x1b3 Eq
	if(var_709_bool == 0) goto Label_439; // 0x1b4 JumpB
	var_707_bool = 0; // 0x1b5 MovB
	goto Label_440; // 0x1b6 Jump
	
Label_440:
	func_4609(var_706_string, var_707_bool); // 0x1b8 NEW_2
	var_2_object = var_702_string; // 0x1ba TMov
	return 0; // 0x1bb Return
	
Label_439:
	var_707_bool = 1; // 0x1b7 MovB
}


func_3240(var_2_object, var_1112_string)
{
	var_1113_bool = 0; // 0xca9 PushV
	func_4764(var_1113_bool); // 0xcaa NEW_2
	var_1114_bool = var_1113_bool == 0; // 0xcac Not
	if(var_1114_bool == 0) goto Label_3247; // 0xcad JumpB
	return 0; // 0xcae Return
	
Label_3247:
	var_1115_bool = var_1112_string == var_2_object; // 0xcaf Eq
	if(var_1115_bool == 0) goto Label_3250; // 0xcb0 JumpB
	return 0; // 0xcb1 Return
	
Label_3250:
	var_1116_string = ""; var_1117_bool = 0; // 0xcb2 PushV
	var_1116_string = var_1112_string; // 0xcb3 Mov
	var_1118_string = ""; // 0xcb4 PushS
	var_1119_bool = var_1112_string == var_1118_string; // 0xcb5 Eq
	if(var_1119_bool == 0) goto Label_3257; // 0xcb6 JumpB
	var_1117_bool = 0; // 0xcb7 MovB
	goto Label_3258; // 0xcb8 Jump
	
Label_3258:
	func_4609(var_1116_string, var_1117_bool); // 0xcba NEW_2
	var_2_object = var_1112_string; // 0xcbc TMov
	return 0; // 0xcbd Return
	
Label_3257:
	var_1117_bool = 1; // 0xcb9 MovB
}


func_1708(var_2_object, var_574_string)
{
	var_575_bool = 0; // 0x6ad PushV
	func_4764(var_575_bool); // 0x6ae NEW_2
	var_576_bool = var_575_bool == 0; // 0x6b0 Not
	if(var_576_bool == 0) goto Label_1715; // 0x6b1 JumpB
	return 0; // 0x6b2 Return
	
Label_1715:
	var_577_bool = var_574_string == var_2_object; // 0x6b3 Eq
	if(var_577_bool == 0) goto Label_1718; // 0x6b4 JumpB
	return 0; // 0x6b5 Return
	
Label_1718:
	var_578_string = ""; var_579_bool = 0; // 0x6b6 PushV
	var_578_string = var_574_string; // 0x6b7 Mov
	var_580_string = ""; // 0x6b8 PushS
	var_581_bool = var_574_string == var_580_string; // 0x6b9 Eq
	if(var_581_bool == 0) goto Label_1725; // 0x6ba JumpB
	var_579_bool = 0; // 0x6bb MovB
	goto Label_1726; // 0x6bc Jump
	
Label_1726:
	func_4609(var_578_string, var_579_bool); // 0x6be NEW_2
	var_2_object = var_574_string; // 0x6c0 TMov
	return 0; // 0x6c1 Return
	
Label_1725:
	var_579_bool = 1; // 0x6bd MovB
}


func_4268(var_107_bool)
{
	var_107_bool = 1; // 0x10ac MovB
	return 0; // 0x10ad Return
}


func_4782()
{
	var_75_object = Obj(); var_76_object = Obj(); // 0x12ae PushV
	var_77_string = "k4q01"; // 0x12af PushS
	var_78_int = 2; // 0x12b0 PushI
	SetVariable(var_77_string, var_78_int); // 0x12b1 Func
	var_79_object = Obj(); // 0x12b3 PushV
	func_5160(var_79_object); // 0x12b4 NEW_2
	var_76_object = var_79_object; // 0x12b5 Mov
	var_86_string = "k4q01GrifGotoNotkin"; // 0x12b7 PushS
	var_87_string = "pt_map_notkin"; // 0x12b8 PushS
	var_88_int = 1; // 0x12b9 PushI
	var_89_int = 515278; // 0x12ba PushI
	var_90_float = 0; // 0x12bb PushV
	func_4712(var_90_float); // 0x12bc NEW_2
	AddMark(var_86_string, var_87_string, var_88_int, var_89_int, var_90_float); // 0x12be ObjFunc
	func_5106(); // 0x12c1 NEW_2
	return 2; // 0x12c3 Return
}


func_4270()
{
	StopAnimation(); // 0x10ae Func
	StopGroup0(); // 0x10b0 Func
	return 0; // 0x10b2 Return
}


func_5041()
{
	var_113_object = Obj(); var_114_object = Obj(); // 0x13b1 PushV
	var_115_int = 494; // 0x13b2 PushI
	var_116_int = 1; // 0x13b3 PushI
	var_117_int = 528061; // 0x13b4 PushI
	CreateDiaryEntry(var_114_object, var_115_int, var_116_int, var_117_int); // 0x13b5 Func
	var_118_bool = 0; var_119_object = Obj(); var_120_int = 0; // 0x13b7 PushV
	var_119_object = var_114_object; // 0x13b8 Mov
	var_120_int = 480; // 0x13b9 MovI
	func_5132(var_118_bool, var_119_object, var_120_int); // 0x13ba NEW_2
	return 2; // 0x13bc Return
}


func_4275(var_82_float)
{
	var_84_cvector = CVector(0,0,0); var_85_cvector = CVector(0,0,0); var_86_cvector = CVector(0,0,0); var_87_cvector = CVector(0,0,0); var_88_cvector = CVector(0,0,0); var_89_cvector = CVector(0,0,0); // 0x10b3 PushV
	GetPosition(var_87_cvector); // 0x10b4 Func
	GetPosition(var_88_cvector); // 0x10b6 ObjFunc
	var_89_cvector = var_88_cvector - var_87_cvector; // 0x10b8 Sub2
	var_82_float = var_89_cvector | var_89_cvector; // 0x10b9 Or2
	return 6; // 0x10ba Return
}


func_2740(var_0_bool, var_1_object, var_2_object, var_3_object, var_977_object, var_978_object)
{
	var_0_bool = var_978_object; // 0xab5 TMov
	var_1_object = var_977_object; // 0xab6 TMov
	var_3_object = 0; // 0xab7 TMovB
	var_983_int = 1; // 0xab8 PushI
	if(var_983_int == 0) goto Label_2773; // 0xab9 JumpB
	var_984_string = ""; // 0xaba PushV
	var_984_string = "Fear"; // 0xabb MovS
	func_2803(var_978_object, var_984_string); // 0xabc NEW_2
	var_992_int = 526681; // 0xabe PushI
	SetMessage(var_992_int); // 0xabf TObjFunc
	ClearReplies(); // 0xac1 TObjFunc
	var_993_int = 526682; // 0xac3 PushI
	var_994_int = -1; // 0xac4 PushI
	var_995_int = 27958; // 0xac5 PushI
	AddReply(var_993_int, var_994_int, var_995_int); // 0xac6 TObjFunc
	var_996_int = 526683; // 0xac8 PushI
	var_997_int = -1; // 0xac9 PushI
	var_998_int = 27959; // 0xaca PushI
	AddReply(var_996_int, var_997_int, var_998_int); // 0xacb TObjFunc
	var_999_int = 528752; // 0xacd PushI
	var_1000_int = -1; // 0xace PushI
	var_1001_int = 30178; // 0xacf PushI
	AddReply(var_999_int, var_1000_int, var_1001_int); // 0xad0 TObjFunc
	goto Label_2773; // 0xad2 Jump
	
Label_2773:
	var_1002_bool = 0; // 0xad5 PushV
	func_4764(var_1002_bool); // 0xad6 NEW_2
	if(var_1002_bool == 0) goto Label_2788; // 0xad8 JumpB
	
Label_2777:
	lshWaitForAnimEnd(); // 0xad9 Func
	var_1003_object = var_3_object; // 0xadb PushT
	if(var_1003_object == 0) goto Label_2782; // 0xadc JumpB
	goto Label_2787; // 0xadd Jump
	
Label_2787:
	goto Label_2802; // 0xae3 Jump
	
Label_2802:
	return 0; // 0xaf2 Return
	
Label_2782:
	var_1004_string = ""; // 0xade PushV
	var_1004_string = var_2_object; // 0xadf MovT
	func_4593(var_1004_string); // 0xae0 NEW_2
	goto Label_2777; // 0xae2 Jump
	
Label_2788:
	var_1005_string = "all"; // 0xae4 PushS
	var_1006_string = "idle"; // 0xae5 PushS
	PlayAnimation(var_1005_string, var_1006_string); // 0xae6 Func
	
Label_2792:
	WaitForAnimEnd(); // 0xae8 Func
	var_1007_object = var_3_object; // 0xaea PushT
	if(var_1007_object == 0) goto Label_2797; // 0xaeb JumpB
	goto Label_2802; // 0xaec Jump
	
Label_2797:
	var_1008_string = "all"; // 0xaed PushS
	var_1009_string = "idle"; // 0xaee PushS
	PlayAnimation(var_1008_string, var_1009_string); // 0xaef Func
	goto Label_2792; // 0xaf1 Jump
}


func_2227(var_0_bool, var_828_int, var_829_object)
{
	var_831_object = Obj(); var_832_bool = 0; var_833_int = 0; var_834_bool = 0; var_835_object = Obj(); var_836_bool = 0; var_837_int = 0; var_838_bool = 0; // 0x8b3 PushV
	var_0_bool = var_829_object; // 0x8b4 TMov
	var_839_bool = 0; var_840_object = Obj(); var_841_float = 0; // 0x8b5 PushV
	var_840_object = var_829_object; // 0x8b6 Mov
	var_841_float = 70.0; // 0x8b7 MovF
	func_4307(var_840_object, var_841_float); // 0x8b8 NEW_2
	var_842_bool = var_839_bool == 0; // 0x8ba Not
	if(var_842_bool == 0) goto Label_2238; // 0x8bb JumpB
	var_828_int = -2; // 0x8bc MovI
	return 8; // 0x8bd Return
	
Label_2238:
	CreateDialog(var_835_object); // 0x8be Func
	var_843_int = 0; // 0x8c0 PushV
	func_4758(var_843_int); // 0x8c1 NEW_2
	SetNPCName(var_843_int); // 0x8c3 ObjFunc
	var_844_int = 0; // 0x8c5 PushV
	func_4756(var_844_int); // 0x8c6 NEW_2
	SetNPCDescription(var_844_int); // 0x8c8 ObjFunc
	var_845_string = ""; // 0x8ca PushV
	func_4760(var_845_string); // 0x8cb NEW_2
	SetPhoto(var_845_string); // 0x8cd ObjFunc
	var_846_string = ""; // 0x8cf PushV
	func_4762(var_846_string); // 0x8d0 NEW_2
	SetPhoto2(var_846_string); // 0x8d2 ObjFunc
	var_847_int = 0; // 0x8d4 PushV
	func_5384(var_847_int); // 0x8d5 NEW_2
	SetPlayerName(var_847_int); // 0x8d7 ObjFunc
	var_837_int = -1; // 0x8d9 MovI
	IsOverrideActive(var_836_bool); // 0x8da Func
	var_848_bool = var_836_bool; // 0x8dc Push
	if(var_848_bool == 0) goto Label_2272; // 0x8dd JumpB
	var_828_int = -2; // 0x8de MovI
	return 8; // 0x8df Return
	
Label_2272:
	DoDialog(var_835_object); // 0x8e0 Func
	var_849_bool = 0; var_850_object = Obj(); // 0x8e2 PushV
	var_851_object = Obj(); // 0x8e3 PushV
	func_4674(var_851_object); // 0x8e4 NEW_2
	var_850_object = var_851_object; // 0x8e5 Mov
	func_4394(var_849_bool, var_850_object); // 0x8e7 NEW_2
	var_852_object = Obj(); var_853_object = Obj(); // 0x8e9 PushV
	var_852_object = var_829_object; // 0x8ea Mov
	var_853_object = var_835_object; // 0x8eb Mov
	TaskCall(14); // 0x8ec TaskCall
	func_2308(var_854_object, var_855_object, var_856_string, var_857_bool, var_852_object, var_853_object); // 0x8ed NEW_2
	TaskReturn(); // 0x8ee TaskReturn
	IsDialogEnd(var_838_bool); // 0x8f0 ObjFunc
	
Label_2290:
	var_885_bool = var_838_bool == 0; // 0x8f2 Not
	if(var_885_bool == 0) goto Label_2297; // 0x8f3 JumpB
	sync(); // 0x8f4 Func
	IsDialogEnd(var_838_bool); // 0x8f6 ObjFunc
	goto Label_2290; // 0x8f8 Jump
	
Label_2297:
	var_886_object = Obj(); // 0x8f9 PushV
	var_886_object = var_829_object; // 0x8fa Mov
	func_4376(); // 0x8fb NEW_2
	StopDialog(var_835_object); // 0x8fd Func
	GetReturnValue(var_837_int); // 0x8ff ObjFunc
	var_828_int = var_837_int; // 0x901 Mov
	return 8; // 0x902 Return
}


func_4532(var_501_bool, var_502_object)
{
	var_503_bool = 0; var_504_object = Obj(); var_505_float = 0; // 0x11b5 PushV
	var_504_object = var_502_object; // 0x11b6 Mov
	var_505_float = 70; // 0x11b7 MovI
	func_4540(var_504_object, var_505_float); // 0x11b8 NEW_2
	var_501_bool = var_503_bool; // 0x11b9 Mov
	return 0; // 0x11bb Return
}


func_4023(var_0_bool)
{
	var_69_bool = 0; // 0xfb7 PushV
	func_4302(var_69_bool); // 0xfb8 NEW_2
	var_72_bool = var_69_bool == 0; // 0xfba Not
	if(var_72_bool == 0) goto Label_4030; // 0xfbb JumpB
	Hold(); // 0xfbc Func
	
Label_4030:
	GetDirection(var_0_bool); // 0xfbe Func
	
Label_4032:
	func_4199(); // 0xfc1 NEW_2
	goto Label_4032; // 0xfc3 Jump
}


func_4283(var_75_bool, var_76_cvector)
{
	var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0); var_79_bool = 0; var_80_cvector = CVector(0,0,0); var_81_cvector = CVector(0,0,0); var_82_bool = 0; // 0x10bb PushV
	GetPosition(var_80_cvector); // 0x10bc Func
	var_81_cvector = var_76_cvector - var_80_cvector; // 0x10be Sub2
	var_83_float = GetByIndex(var_81_cvector, 0); // 0x10bf PushE
	var_84_float = GetByIndex(var_81_cvector, 2); // 0x10c0 PushE
	Rotate(var_83_float, var_84_float, var_82_bool); // 0x10c1 Func
	var_75_bool = var_82_bool; // 0x10c3 Mov
	return 6; // 0x10c4 Return
}


func_4540(var_503_bool, var_505_float)
{
	var_506_float = 0; var_507_cvector = CVector(0,0,0); var_508_cvector = CVector(0,0,0); var_509_cvector = CVector(0,0,0); var_510_cvector = CVector(0,0,0); var_511_cvector = CVector(0,0,0); var_512_cvector = CVector(0,0,0); var_513_bool = 0; var_514_float = 0; var_515_cvector = CVector(0,0,0); var_516_cvector = CVector(0,0,0); var_517_cvector = CVector(0,0,0); var_518_cvector = CVector(0,0,0); var_519_cvector = CVector(0,0,0); var_520_cvector = CVector(0,0,0); var_521_bool = 0; // 0x11bc PushV
	GetPosition(var_515_cvector); // 0x11bd ObjFunc
	GetEyesHeight(var_514_float); // 0x11bf ObjFunc
	var_522_float = GetByIndex(var_515_cvector, 1); // 0x11c1 PushE
	var_522_float = var_522_float + var_514_float; // 0x11c2 Add2
	SetByIndex(var_515_cvector, 1) = var_522_float; // 0x11c3 PopE
	GetPosition(var_516_cvector); // 0x11c4 Func
	GetEyesHeight(var_514_float); // 0x11c6 Func
	var_523_float = GetByIndex(var_516_cvector, 1); // 0x11c8 PushE
	var_523_float = var_523_float + var_514_float; // 0x11c9 Add2
	SetByIndex(var_516_cvector, 1) = var_523_float; // 0x11ca PopE
	var_517_cvector = var_515_cvector - var_516_cvector; // 0x11cb Sub2
	var_524_float = GetByIndex(var_517_cvector, 1); // 0x11cc PushE
	var_524_float = 0; // 0x11cd MovI
	SetByIndex(var_517_cvector, 1) = var_524_float; // 0x11ce PopE
	var_525_int = var_517_cvector | var_517_cvector; // 0x11cf Or
	var_526_float = sqrt(var_525_int); // 0x11d0 Sqrt
	var_517_cvector = var_517_cvector / var_517_cvector; // 0x11d1 Div2
	var_518_cvector = -var_517_cvector; // 0x11d2 Neg2
	var_527_float = var_517_cvector * var_505_float; // 0x11d3 Mult
	var_528_cvector = CVector(0.0, 10.0, 0.0); // 0x11d4 PushVec
	var_519_cvector = var_527_float - var_528_cvector; // 0x11d5 Sub2
	var_520_cvector = var_516_cvector + var_519_cvector; // 0x11d6 Add2
	IsOverrideActive(var_521_bool); // 0x11d7 Func
	var_529_bool = var_521_bool; // 0x11d9 Push
	if(var_529_bool == 0) goto Label_4573; // 0x11da JumpB
	var_503_bool = 0; // 0x11db MovB
	return 16; // 0x11dc Return
	
Label_4573:
	StopWorld(); // 0x11dd Func
	var_530_bool = 1; // 0x11df PushB
	CameraTransit(var_520_cvector, var_518_cvector, var_530_bool); // 0x11e0 Func
	var_531_float = GetByIndex(var_519_cvector, 0); // 0x11e2 PushE
	var_532_float = GetByIndex(var_519_cvector, 2); // 0x11e3 PushE
	Rotate(var_531_float, var_532_float); // 0x11e4 Func
	CameraWaitForPlayFinish(); // 0x11e6 Func
	ResumeWorld(); // 0x11e8 Func
	var_503_bool = 1; // 0x11ea MovB
	return 16; // 0x11eb Return
}


func_5054()
{
	var_88_object = Obj(); var_89_object = Obj(); // 0x13be PushV
	var_90_int = 493; // 0x13bf PushI
	var_91_int = 1; // 0x13c0 PushI
	var_92_int = 528060; // 0x13c1 PushI
	CreateDiaryEntry(var_89_object, var_90_int, var_91_int, var_92_int); // 0x13c2 Func
	var_93_bool = 0; var_94_object = Obj(); var_95_int = 0; // 0x13c4 PushV
	var_94_object = var_89_object; // 0x13c5 Mov
	var_95_int = 480; // 0x13c6 MovI
	func_5132(var_93_bool, var_94_object, var_95_int); // 0x13c7 NEW_2
	return 2; // 0x13c9 Return
}


func_4805()
{
	var_150_object = Obj(); var_151_object = Obj(); // 0x12c5 PushV
	var_152_string = "k4q01"; // 0x12c6 PushS
	var_153_int = 4; // 0x12c7 PushI
	SetVariable(var_152_string, var_153_int); // 0x12c8 Func
	var_154_object = Obj(); // 0x12ca PushV
	func_5160(var_154_object); // 0x12cb NEW_2
	var_151_object = var_154_object; // 0x12cc Mov
	var_155_string = "k4q01GrifGotoBraga"; // 0x12ce PushS
	var_156_string = "pt_map_warehouse_gangster"; // 0x12cf PushS
	var_157_int = 1; // 0x12d0 PushI
	var_158_int = 530231; // 0x12d1 PushI
	var_159_float = 0; // 0x12d2 PushV
	func_4712(var_159_float); // 0x12d3 NEW_2
	AddMark(var_155_string, var_156_string, var_157_int, var_158_int, var_159_float); // 0x12d5 ObjFunc
	func_5093(); // 0x12d8 NEW_2
	var_168_bool = 0; var_169_string = ""; var_170_string = ""; // 0x12da PushV
	var_169_string = "quest_k4_01"; // 0x12db MovS
	var_170_string = "init_volnica"; // 0x12dc MovS
	func_4700(var_168_bool, var_169_string, var_170_string); // 0x12dd NEW_2
	return 2; // 0x12df Return
}


func_4293(var_71_bool)
{
	var_73_cvector = CVector(0,0,0); var_74_cvector = CVector(0,0,0); // 0x10c5 PushV
	GetPosition(var_74_cvector); // 0x10c6 ObjFunc
	var_75_bool = 0; var_76_cvector = CVector(0,0,0); // 0x10c8 PushV
	var_76_cvector = var_74_cvector; // 0x10c9 Mov
	func_4283(var_75_bool, var_76_cvector); // 0x10ca NEW_2
	var_71_bool = var_75_bool; // 0x10cb Mov
	return 2; // 0x10cd Return
}


func_4037(var_92_bool)
{
	var_93_object = Obj(); var_94_object = Obj(); // 0xfc5 PushV
	var_95_string = "player"; // 0xfc6 PushS
	FindActor(var_94_object, var_95_string); // 0xfc7 Func
	var_96_bool = var_94_object == 0; // 0xfc9 Not
	if(var_96_bool == 0) goto Label_4045; // 0xfca JumpB
	var_92_bool = 0; // 0xfcb MovB
	return 2; // 0xfcc Return
	
Label_4045:
	var_97_bool = 0; var_98_object = Obj(); // 0xfcd PushV
	var_98_object = var_94_object; // 0xfce Mov
	func_4293(var_98_object); // 0xfcf NEW_2
	var_92_bool = var_97_bool; // 0xfd0 Mov
	return 2; // 0xfd2 Return
}


func_5067()
{
	var_209_object = Obj(); var_210_object = Obj(); // 0x13cb PushV
	var_211_int = 786; // 0x13cc PushI
	var_212_int = 1; // 0x13cd PushI
	var_213_int = 542494; // 0x13ce PushI
	CreateDiaryEntry(var_210_object, var_211_int, var_212_int, var_213_int); // 0x13cf Func
	var_214_bool = 0; var_215_object = Obj(); var_216_int = 0; // 0x13d1 PushV
	var_215_object = var_210_object; // 0x13d2 Mov
	var_216_int = 368; // 0x13d3 MovI
	func_5132(var_214_bool, var_215_object, var_216_int); // 0x13d4 NEW_2
	return 2; // 0x13d6 Return
}


func_3789(var_0_bool, var_1_object, var_2_object, var_3_object, var_1242_object, var_1243_object)
{
	var_0_bool = var_1243_object; // 0xece TMov
	var_1_object = var_1242_object; // 0xecf TMov
	var_3_object = 0; // 0xed0 TMovB
	var_1248_int = 1; // 0xed1 PushI
	if(var_1248_int == 0) goto Label_3822; // 0xed2 JumpB
	var_1249_string = ""; // 0xed3 PushV
	var_1249_string = "Neutral"; // 0xed4 MovS
	func_3852(var_1243_object, var_1249_string); // 0xed5 NEW_2
	var_1257_int = 539291; // 0xed7 PushI
	SetMessage(var_1257_int); // 0xed8 TObjFunc
	ClearReplies(); // 0xeda TObjFunc
	var_1258_int = 542571; // 0xedc PushI
	var_1259_int = 44971; // 0xedd PushI
	var_1260_int = 44970; // 0xede PushI
	AddReply(var_1258_int, var_1259_int, var_1260_int); // 0xedf TObjFunc
	var_1261_int = 539292; // 0xee1 PushI
	var_1262_int = -1; // 0xee2 PushI
	var_1263_int = 41235; // 0xee3 PushI
	AddReply(var_1261_int, var_1262_int, var_1263_int); // 0xee4 TObjFunc
	var_1264_int = 542570; // 0xee6 PushI
	var_1265_int = -1; // 0xee7 PushI
	var_1266_int = 44969; // 0xee8 PushI
	AddReply(var_1264_int, var_1265_int, var_1266_int); // 0xee9 TObjFunc
	goto Label_3822; // 0xeeb Jump
	
Label_3822:
	var_1267_bool = 0; // 0xeee PushV
	func_4764(var_1267_bool); // 0xeef NEW_2
	if(var_1267_bool == 0) goto Label_3837; // 0xef1 JumpB
	
Label_3826:
	lshWaitForAnimEnd(); // 0xef2 Func
	var_1268_object = var_3_object; // 0xef4 PushT
	if(var_1268_object == 0) goto Label_3831; // 0xef5 JumpB
	goto Label_3836; // 0xef6 Jump
	
Label_3836:
	goto Label_3851; // 0xefc Jump
	
Label_3851:
	return 0; // 0xf0b Return
	
Label_3831:
	var_1269_string = ""; // 0xef7 PushV
	var_1269_string = var_2_object; // 0xef8 MovT
	func_4593(var_1269_string); // 0xef9 NEW_2
	goto Label_3826; // 0xefb Jump
	
Label_3837:
	var_1270_string = "all"; // 0xefd PushS
	var_1271_string = "idle"; // 0xefe PushS
	PlayAnimation(var_1270_string, var_1271_string); // 0xeff Func
	
Label_3841:
	WaitForAnimEnd(); // 0xf01 Func
	var_1272_object = var_3_object; // 0xf03 PushT
	if(var_1272_object == 0) goto Label_3846; // 0xf04 JumpB
	goto Label_3851; // 0xf05 Jump
	
Label_3846:
	var_1273_string = "all"; // 0xf06 PushS
	var_1274_string = "idle"; // 0xf07 PushS
	PlayAnimation(var_1273_string, var_1274_string); // 0xf08 Func
	goto Label_3841; // 0xf0a Jump
}


func_4302(var_69_bool)
{
	var_70_bool = 0; var_71_bool = 0; // 0x10ce PushV
	IsLoaded(var_71_bool); // 0x10cf Func
	var_69_bool = var_71_bool; // 0x10d1 Mov
	return 2; // 0x10d2 Return
}


func_1487(var_2_object, var_471_string)
{
	var_472_bool = 0; // 0x5d0 PushV
	func_4764(var_472_bool); // 0x5d1 NEW_2
	var_473_bool = var_472_bool == 0; // 0x5d3 Not
	if(var_473_bool == 0) goto Label_1494; // 0x5d4 JumpB
	return 0; // 0x5d5 Return
	
Label_1494:
	var_474_bool = var_471_string == var_2_object; // 0x5d6 Eq
	if(var_474_bool == 0) goto Label_1497; // 0x5d7 JumpB
	return 0; // 0x5d8 Return
	
Label_1497:
	var_475_string = ""; var_476_bool = 0; // 0x5d9 PushV
	var_475_string = var_471_string; // 0x5da Mov
	var_477_string = ""; // 0x5db PushS
	var_478_bool = var_471_string == var_477_string; // 0x5dc Eq
	if(var_478_bool == 0) goto Label_1504; // 0x5dd JumpB
	var_476_bool = 0; // 0x5de MovB
	goto Label_1505; // 0x5df Jump
	
Label_1505:
	func_4609(var_475_string, var_476_bool); // 0x5e1 NEW_2
	var_2_object = var_471_string; // 0x5e3 TMov
	return 0; // 0x5e4 Return
	
Label_1504:
	var_476_bool = 1; // 0x5e0 MovB
}


func_3024(var_2_object, var_1048_string)
{
	var_1049_bool = 0; // 0xbd1 PushV
	func_4764(var_1049_bool); // 0xbd2 NEW_2
	var_1050_bool = var_1049_bool == 0; // 0xbd4 Not
	if(var_1050_bool == 0) goto Label_3031; // 0xbd5 JumpB
	return 0; // 0xbd6 Return
	
Label_3031:
	var_1051_bool = var_1048_string == var_2_object; // 0xbd7 Eq
	if(var_1051_bool == 0) goto Label_3034; // 0xbd8 JumpB
	return 0; // 0xbd9 Return
	
Label_3034:
	var_1052_string = ""; var_1053_bool = 0; // 0xbda PushV
	var_1052_string = var_1048_string; // 0xbdb Mov
	var_1054_string = ""; // 0xbdc PushS
	var_1055_bool = var_1048_string == var_1054_string; // 0xbdd Eq
	if(var_1055_bool == 0) goto Label_3041; // 0xbde JumpB
	var_1053_bool = 0; // 0xbdf MovB
	goto Label_3042; // 0xbe0 Jump
	
Label_3042:
	func_4609(var_1052_string, var_1053_bool); // 0xbe2 NEW_2
	var_2_object = var_1048_string; // 0xbe4 TMov
	return 0; // 0xbe5 Return
	
Label_3041:
	var_1053_bool = 1; // 0xbe1 MovB
}


func_4307(var_226_bool, var_228_float)
{
	var_229_float = 0; var_230_cvector = CVector(0,0,0); var_231_cvector = CVector(0,0,0); var_232_cvector = CVector(0,0,0); var_233_cvector = CVector(0,0,0); var_234_cvector = CVector(0,0,0); var_235_cvector = CVector(0,0,0); var_236_bool = 0; var_237_bool = 0; var_238_float = 0; var_239_cvector = CVector(0,0,0); var_240_cvector = CVector(0,0,0); var_241_cvector = CVector(0,0,0); var_242_cvector = CVector(0,0,0); var_243_cvector = CVector(0,0,0); var_244_cvector = CVector(0,0,0); var_245_bool = 0; var_246_bool = 0; // 0x10d3 PushV
	GetPosition(var_239_cvector); // 0x10d4 ObjFunc
	GetEyesHeight(var_238_float); // 0x10d6 ObjFunc
	var_247_float = GetByIndex(var_239_cvector, 1); // 0x10d8 PushE
	var_247_float = var_247_float + var_238_float; // 0x10d9 Add2
	SetByIndex(var_239_cvector, 1) = var_247_float; // 0x10da PopE
	GetPosition(var_240_cvector); // 0x10db Func
	GetEyesHeight(var_238_float); // 0x10dd Func
	var_248_float = GetByIndex(var_240_cvector, 1); // 0x10df PushE
	var_248_float = var_248_float + var_238_float; // 0x10e0 Add2
	SetByIndex(var_240_cvector, 1) = var_248_float; // 0x10e1 PopE
	var_241_cvector = var_239_cvector - var_240_cvector; // 0x10e2 Sub2
	var_249_float = GetByIndex(var_241_cvector, 1); // 0x10e3 PushE
	var_249_float = 0; // 0x10e4 MovI
	SetByIndex(var_241_cvector, 1) = var_249_float; // 0x10e5 PopE
	var_250_int = var_241_cvector | var_241_cvector; // 0x10e6 Or
	var_251_float = sqrt(var_250_int); // 0x10e7 Sqrt
	var_241_cvector = var_241_cvector / var_241_cvector; // 0x10e8 Div2
	var_242_cvector = -var_241_cvector; // 0x10e9 Neg2
	var_252_float = var_241_cvector * var_228_float; // 0x10ea Mult
	var_253_cvector = CVector(0,0,0); var_254_cvector = CVector(0,0,0); // 0x10eb PushV
	var_255_cvector = CVector(0.0, 1.0, 0.0); // 0x10ec PushVec
	var_254_cvector = var_242_cvector ^ var_255_cvector; // 0x10ed Xor2
	func_4680(var_253_cvector, var_254_cvector); // 0x10ee NEW_2
	var_261_int = 25; // 0x10f0 PushI
	var_262_float = var_253_cvector * var_261_int; // 0x10f1 Mult
	var_263_int = var_252_float + var_262_float; // 0x10f2 Add
	var_264_cvector = CVector(0.0, 10.0, 0.0); // 0x10f3 PushVec
	var_243_cvector = var_263_int - var_264_cvector; // 0x10f4 Sub2
	var_244_cvector = var_240_cvector + var_243_cvector; // 0x10f5 Add2
	IsOverrideActive(var_245_bool); // 0x10f6 Func
	var_265_bool = var_245_bool; // 0x10f8 Push
	if(var_265_bool == 0) goto Label_4348; // 0x10f9 JumpB
	var_226_bool = 0; // 0x10fa MovB
	return 18; // 0x10fb Return
	
Label_4348:
	StopWorld(); // 0x10fc Func
	var_266_bool = 1; // 0x10fe PushB
	CameraTransit(var_244_cvector, var_242_cvector, var_266_bool); // 0x10ff Func
	var_267_float = GetByIndex(var_243_cvector, 0); // 0x1101 PushE
	var_268_float = GetByIndex(var_243_cvector, 2); // 0x1102 PushE
	Rotate(var_267_float, var_268_float); // 0x1103 Func
	var_269_bool = 0; // 0x1105 PushV
	func_4764(var_269_bool); // 0x1106 NEW_2
	if(var_269_bool == 0) goto Label_4362; // 0x1108 JumpB
	goto Label_4370; // 0x1109 Jump
	
Label_4370:
	CameraWaitForPlayFinish(); // 0x1112 Func
	ResumeWorld(); // 0x1114 Func
	var_226_bool = 1; // 0x1116 MovB
	return 18; // 0x1117 Return
	
Label_4362:
	var_270_string = "head"; // 0x110a PushS
	HasAnimationTrack(var_246_bool, var_270_string); // 0x110b Func
	var_271_bool = var_246_bool; // 0x110d Push
	if(var_271_bool == 0) goto Label_4370; // 0x110e JumpB
	var_272_string = "head"; // 0x110f PushS
	LookAsyncCamera(var_272_string); // 0x1110 Func
}


func_4052(var_0_bool)
{
	var_144_float = GetByIndex(var_0_bool, 0); // 0xfd4 PushE
	var_145_float = GetByIndex(var_0_bool, 2); // 0xfd5 PushE
	RotateAsync(var_144_float, var_145_float); // 0xfd6 Func
	return 0; // 0xfd8 Return
}


func_2006(var_0_bool, var_764_int, var_765_object)
{
	var_767_object = Obj(); var_768_bool = 0; var_769_int = 0; var_770_bool = 0; var_771_object = Obj(); var_772_bool = 0; var_773_int = 0; var_774_bool = 0; // 0x7d6 PushV
	var_0_bool = var_765_object; // 0x7d7 TMov
	var_775_bool = 0; var_776_object = Obj(); var_777_float = 0; // 0x7d8 PushV
	var_776_object = var_765_object; // 0x7d9 Mov
	var_777_float = 70.0; // 0x7da MovF
	func_4307(var_776_object, var_777_float); // 0x7db NEW_2
	var_778_bool = var_775_bool == 0; // 0x7dd Not
	if(var_778_bool == 0) goto Label_2017; // 0x7de JumpB
	var_764_int = -2; // 0x7df MovI
	return 8; // 0x7e0 Return
	
Label_2017:
	CreateDialog(var_771_object); // 0x7e1 Func
	var_779_int = 0; // 0x7e3 PushV
	func_4758(var_779_int); // 0x7e4 NEW_2
	SetNPCName(var_779_int); // 0x7e6 ObjFunc
	var_780_int = 0; // 0x7e8 PushV
	func_4756(var_780_int); // 0x7e9 NEW_2
	SetNPCDescription(var_780_int); // 0x7eb ObjFunc
	var_781_string = ""; // 0x7ed PushV
	func_4760(var_781_string); // 0x7ee NEW_2
	SetPhoto(var_781_string); // 0x7f0 ObjFunc
	var_782_string = ""; // 0x7f2 PushV
	func_4762(var_782_string); // 0x7f3 NEW_2
	SetPhoto2(var_782_string); // 0x7f5 ObjFunc
	var_783_int = 0; // 0x7f7 PushV
	func_5384(var_783_int); // 0x7f8 NEW_2
	SetPlayerName(var_783_int); // 0x7fa ObjFunc
	var_773_int = -1; // 0x7fc MovI
	IsOverrideActive(var_772_bool); // 0x7fd Func
	var_784_bool = var_772_bool; // 0x7ff Push
	if(var_784_bool == 0) goto Label_2051; // 0x800 JumpB
	var_764_int = -2; // 0x801 MovI
	return 8; // 0x802 Return
	
Label_2051:
	DoDialog(var_771_object); // 0x803 Func
	var_785_bool = 0; var_786_object = Obj(); // 0x805 PushV
	var_787_object = Obj(); // 0x806 PushV
	func_4674(var_787_object); // 0x807 NEW_2
	var_786_object = var_787_object; // 0x808 Mov
	func_4394(var_785_bool, var_786_object); // 0x80a NEW_2
	var_788_object = Obj(); var_789_object = Obj(); // 0x80c PushV
	var_788_object = var_765_object; // 0x80d Mov
	var_789_object = var_771_object; // 0x80e Mov
	TaskCall(12); // 0x80f TaskCall
	func_2087(var_790_object, var_791_object, var_792_string, var_793_bool, var_788_object, var_789_object); // 0x810 NEW_2
	TaskReturn(); // 0x811 TaskReturn
	IsDialogEnd(var_774_bool); // 0x813 ObjFunc
	
Label_2069:
	var_821_bool = var_774_bool == 0; // 0x815 Not
	if(var_821_bool == 0) goto Label_2076; // 0x816 JumpB
	sync(); // 0x817 Func
	IsDialogEnd(var_774_bool); // 0x819 ObjFunc
	goto Label_2069; // 0x81b Jump
	
Label_2076:
	var_822_object = Obj(); // 0x81c PushV
	var_822_object = var_765_object; // 0x81d Mov
	func_4376(); // 0x81e NEW_2
	StopDialog(var_771_object); // 0x820 Func
	GetReturnValue(var_773_int); // 0x822 ObjFunc
	var_764_int = var_773_int; // 0x824 Mov
	return 8; // 0x825 Return
}


func_5080()
{
	var_191_object = Obj(); var_192_object = Obj(); // 0x13d8 PushV
	var_193_int = 377; // 0x13d9 PushI
	var_194_int = 1; // 0x13da PushI
	var_195_int = 525734; // 0x13db PushI
	CreateDiaryEntry(var_192_object, var_193_int, var_194_int, var_195_int); // 0x13dc Func
	var_196_bool = 0; var_197_object = Obj(); var_198_int = 0; // 0x13de PushV
	var_197_object = var_192_object; // 0x13df Mov
	var_198_int = 368; // 0x13e0 MovI
	func_5132(var_196_bool, var_197_object, var_198_int); // 0x13e1 NEW_2
	return 2; // 0x13e3 Return
}


func_4057(var_75_bool)
{
	var_76_object = Obj(); var_77_bool = 0; var_78_object = Obj(); var_79_bool = 0; // 0xfd9 PushV
	var_80_string = "player"; // 0xfda PushS
	FindActor(var_78_object, var_80_string); // 0xfdb Func
	var_81_bool = var_78_object == 0; // 0xfdd Not
	if(var_81_bool == 0) goto Label_4065; // 0xfde JumpB
	var_75_bool = 0; // 0xfdf MovB
	return 4; // 0xfe0 Return
	
Label_4065:
	var_82_float = 0; var_83_object = Obj(); // 0xfe1 PushV
	var_83_object = var_78_object; // 0xfe2 Mov
	func_4275(var_83_object); // 0xfe3 NEW_2
	var_90_float = 90000.0; // 0xfe5 PushF
	var_91_bool = var_82_float > var_90_float; // 0xfe6 GT
	if(var_91_bool == 0) goto Label_4074; // 0xfe7 JumpB
	var_75_bool = 0; // 0xfe8 MovB
	return 4; // 0xfe9 Return
	
Label_4074:
	CanSee(var_79_bool, var_78_object); // 0xfea Func
	var_75_bool = var_79_bool; // 0xfec Mov
	return 4; // 0xfed Return
}


func_4833()
{
	var_189_string = "k4q01"; // 0x12e2 PushS
	var_190_int = 6; // 0x12e3 PushI
	SetVariable(var_189_string, var_190_int); // 0x12e4 Func
	func_5080(); // 0x12e7 NEW_2
	return 0; // 0x12e9 Return
}


func_2529(var_0_bool, var_1_object, var_2_object, var_3_object, var_916_object, var_917_object)
{
	var_0_bool = var_917_object; // 0x9e2 TMov
	var_1_object = var_916_object; // 0x9e3 TMov
	var_3_object = 0; // 0x9e4 TMovB
	var_922_int = 1; // 0x9e5 PushI
	if(var_922_int == 0) goto Label_2557; // 0x9e6 JumpB
	var_923_string = ""; // 0x9e7 PushV
	var_923_string = "Neutral"; // 0x9e8 MovS
	func_2587(var_917_object, var_923_string); // 0x9e9 NEW_2
	var_931_int = 526677; // 0x9eb PushI
	SetMessage(var_931_int); // 0x9ec TObjFunc
	ClearReplies(); // 0x9ee TObjFunc
	var_932_int = 526678; // 0x9f0 PushI
	var_933_int = -1; // 0x9f1 PushI
	var_934_int = 27954; // 0x9f2 PushI
	AddReply(var_932_int, var_933_int, var_934_int); // 0x9f3 TObjFunc
	var_935_int = 526679; // 0x9f5 PushI
	var_936_int = -1; // 0x9f6 PushI
	var_937_int = 27955; // 0x9f7 PushI
	AddReply(var_935_int, var_936_int, var_937_int); // 0x9f8 TObjFunc
	goto Label_2557; // 0x9fa Jump
	
Label_2557:
	var_938_bool = 0; // 0x9fd PushV
	func_4764(var_938_bool); // 0x9fe NEW_2
	if(var_938_bool == 0) goto Label_2572; // 0xa00 JumpB
	
Label_2561:
	lshWaitForAnimEnd(); // 0xa01 Func
	var_939_object = var_3_object; // 0xa03 PushT
	if(var_939_object == 0) goto Label_2566; // 0xa04 JumpB
	goto Label_2571; // 0xa05 Jump
	
Label_2571:
	goto Label_2586; // 0xa0b Jump
	
Label_2586:
	return 0; // 0xa1a Return
	
Label_2566:
	var_940_string = ""; // 0xa06 PushV
	var_940_string = var_2_object; // 0xa07 MovT
	func_4593(var_940_string); // 0xa08 NEW_2
	goto Label_2561; // 0xa0a Jump
	
Label_2572:
	var_941_string = "all"; // 0xa0c PushS
	var_942_string = "idle"; // 0xa0d PushS
	PlayAnimation(var_941_string, var_942_string); // 0xa0e Func
	
Label_2576:
	WaitForAnimEnd(); // 0xa10 Func
	var_943_object = var_3_object; // 0xa12 PushT
	if(var_943_object == 0) goto Label_2581; // 0xa13 JumpB
	goto Label_2586; // 0xa14 Jump
	
Label_2581:
	var_944_string = "all"; // 0xa15 PushS
	var_945_string = "idle"; // 0xa16 PushS
	PlayAnimation(var_944_string, var_945_string); // 0xa17 Func
	goto Label_2576; // 0xa19 Jump
}


func_5093()
{
	var_160_object = Obj(); var_161_object = Obj(); // 0x13e5 PushV
	var_162_int = 372; // 0x13e6 PushI
	var_163_int = 1; // 0x13e7 PushI
	var_164_int = 525729; // 0x13e8 PushI
	CreateDiaryEntry(var_161_object, var_162_int, var_163_int, var_164_int); // 0x13e9 Func
	var_165_bool = 0; var_166_object = Obj(); var_167_int = 0; // 0x13eb PushV
	var_166_object = var_161_object; // 0x13ec Mov
	var_167_int = 368; // 0x13ed MovI
	func_5132(var_165_bool, var_166_object, var_167_int); // 0x13ee NEW_2
	return 2; // 0x13f0 Return
}


func_4842()
{
	var_81_int = 0; var_82_int = 0; // 0x12ea PushV
	var_83_string = "k11q01SoulCount"; // 0x12eb PushS
	GetVariable(var_83_string, var_82_int); // 0x12ec Func
	var_84_int = 1; // 0x12ee PushI
	var_82_int = var_82_int + var_84_int; // 0x12ef Add2
	var_85_string = "k11q01SoulCount"; // 0x12f0 PushS
	SetVariable(var_85_string, var_82_int); // 0x12f1 Func
	var_86_int = 2; // 0x12f3 PushI
	var_87_bool = var_82_int == var_86_int; // 0x12f4 Eq
	if(var_87_bool == 0) goto Label_4858; // 0x12f5 JumpB
	func_5054(); // 0x12f7 NEW_2
	goto Label_4892; // 0x12f9 Jump
	
Label_4892:
	return 2; // 0x131c Return
	
Label_4858:
	var_111_int = 3; // 0x12fa PushI
	var_112_bool = var_82_int == var_111_int; // 0x12fb Eq
	if(var_112_bool == 0) goto Label_4865; // 0x12fc JumpB
	func_5041(); // 0x12fe NEW_2
	goto Label_4892; // 0x1300 Jump
	
Label_4865:
	var_121_int = 4; // 0x1301 PushI
	var_122_bool = var_82_int == var_121_int; // 0x1302 Eq
	if(var_122_bool == 0) goto Label_4872; // 0x1303 JumpB
	func_5028(); // 0x1305 NEW_2
	goto Label_4892; // 0x1307 Jump
	
Label_4872:
	var_131_int = 5; // 0x1308 PushI
	var_132_bool = var_82_int == var_131_int; // 0x1309 Eq
	if(var_132_bool == 0) goto Label_4879; // 0x130a JumpB
	func_5015(); // 0x130c NEW_2
	goto Label_4892; // 0x130e Jump
	
Label_4879:
	var_141_int = 6; // 0x130f PushI
	var_142_bool = var_82_int == var_141_int; // 0x1310 Eq
	if(var_142_bool == 0) goto Label_4886; // 0x1311 JumpB
	func_5002(); // 0x1313 NEW_2
	goto Label_4892; // 0x1315 Jump
	
Label_4886:
	var_151_int = 7; // 0x1316 PushI
	var_152_bool = var_82_int == var_151_int; // 0x1317 Eq
	if(var_152_bool == 0) goto Label_4892; // 0x1318 JumpB
	func_4989(); // 0x131a NEW_2
}


func_4588()
{
	var_539_bool = 1; // 0x11ed PushB
	CameraSwitchToNormal(var_539_bool); // 0x11ee Func
	return 0; // 0x11f0 Return
}


func_4079()
{
	var_1279_float = 0; var_1280_float = 0; // 0xfef PushV
	var_1281_int = 8; // 0xff0 PushI
	var_1282_int = 16; // 0xff1 PushI
	rand(var_1280_float, var_1281_int, var_1282_int); // 0xff2 Func
	var_1283_int = 10; // 0xff4 PushI
	SetTimer(var_1283_int, var_1280_float); // 0xff5 Func
	return 2; // 0xff7 Return
}


func_3312(var_0_bool, var_1142_int, var_1143_object)
{
	var_1145_object = Obj(); var_1146_bool = 0; var_1147_int = 0; var_1148_bool = 0; var_1149_object = Obj(); var_1150_bool = 0; var_1151_int = 0; var_1152_bool = 0; // 0xcf0 PushV
	var_0_bool = var_1143_object; // 0xcf1 TMov
	var_1153_bool = 0; var_1154_object = Obj(); var_1155_float = 0; // 0xcf2 PushV
	var_1154_object = var_1143_object; // 0xcf3 Mov
	var_1155_float = 70.0; // 0xcf4 MovF
	func_4307(var_1154_object, var_1155_float); // 0xcf5 NEW_2
	var_1156_bool = var_1153_bool == 0; // 0xcf7 Not
	if(var_1156_bool == 0) goto Label_3323; // 0xcf8 JumpB
	var_1142_int = -2; // 0xcf9 MovI
	return 8; // 0xcfa Return
	
Label_3323:
	CreateDialog(var_1149_object); // 0xcfb Func
	var_1157_int = 0; // 0xcfd PushV
	func_4758(var_1157_int); // 0xcfe NEW_2
	SetNPCName(var_1157_int); // 0xd00 ObjFunc
	var_1158_int = 0; // 0xd02 PushV
	func_4756(var_1158_int); // 0xd03 NEW_2
	SetNPCDescription(var_1158_int); // 0xd05 ObjFunc
	var_1159_string = ""; // 0xd07 PushV
	func_4760(var_1159_string); // 0xd08 NEW_2
	SetPhoto(var_1159_string); // 0xd0a ObjFunc
	var_1160_string = ""; // 0xd0c PushV
	func_4762(var_1160_string); // 0xd0d NEW_2
	SetPhoto2(var_1160_string); // 0xd0f ObjFunc
	var_1161_int = 0; // 0xd11 PushV
	func_5384(var_1161_int); // 0xd12 NEW_2
	SetPlayerName(var_1161_int); // 0xd14 ObjFunc
	var_1151_int = -1; // 0xd16 MovI
	IsOverrideActive(var_1150_bool); // 0xd17 Func
	var_1162_bool = var_1150_bool; // 0xd19 Push
	if(var_1162_bool == 0) goto Label_3357; // 0xd1a JumpB
	var_1142_int = -2; // 0xd1b MovI
	return 8; // 0xd1c Return
	
Label_3357:
	DoDialog(var_1149_object); // 0xd1d Func
	var_1163_bool = 0; var_1164_object = Obj(); // 0xd1f PushV
	var_1165_object = Obj(); // 0xd20 PushV
	func_4674(var_1165_object); // 0xd21 NEW_2
	var_1164_object = var_1165_object; // 0xd22 Mov
	func_4394(var_1163_bool, var_1164_object); // 0xd24 NEW_2
	var_1166_object = Obj(); var_1167_object = Obj(); // 0xd26 PushV
	var_1166_object = var_1143_object; // 0xd27 Mov
	var_1167_object = var_1149_object; // 0xd28 Mov
	TaskCall(24); // 0xd29 TaskCall
	func_3393(var_1168_object, var_1169_object, var_1170_string, var_1171_bool, var_1166_object, var_1167_object); // 0xd2a NEW_2
	TaskReturn(); // 0xd2b TaskReturn
	IsDialogEnd(var_1152_bool); // 0xd2d ObjFunc
	
Label_3375:
	var_1212_bool = var_1152_bool == 0; // 0xd2f Not
	if(var_1212_bool == 0) goto Label_3382; // 0xd30 JumpB
	sync(); // 0xd31 Func
	IsDialogEnd(var_1152_bool); // 0xd33 ObjFunc
	goto Label_3375; // 0xd35 Jump
	
Label_3382:
	var_1213_object = Obj(); // 0xd36 PushV
	var_1213_object = var_1143_object; // 0xd37 Mov
	func_4376(); // 0xd38 NEW_2
	StopDialog(var_1149_object); // 0xd3a Func
	GetReturnValue(var_1151_int); // 0xd3c ObjFunc
	var_1142_int = var_1151_int; // 0xd3e Mov
	return 8; // 0xd3f Return
}


func_4593(var_410_string)
{
	var_411_bool = 0; var_412_float = 0; var_413_float = 0; var_414_bool = 0; var_415_float = 0; var_416_float = 0; // 0x11f1 PushV
	lshHasAnimation(var_414_bool, var_410_string); // 0x11f2 Func
	var_417_bool = var_414_bool; // 0x11f4 Push
	if(var_417_bool == 0) goto Label_4604; // 0x11f5 JumpB
	lshGetAnimTimes(var_410_string, var_415_float, var_416_float); // 0x11f6 Func
	var_418_bool = 0; // 0x11f8 PushB
	lshPlayAnimation(var_415_float, var_416_float, var_418_bool); // 0x11f9 Func
	goto Label_4608; // 0x11fb Jump
	
Label_4608:
	return 6; // 0x1200 Return
	
Label_4604:
	var_419_string = "Can't find lsh animation : "; // 0x11fc PushS
	var_420_int = var_419_string + var_410_string; // 0x11fd Add
	Trace(var_420_int); // 0x11fe Func
}


func_5106()
{
	var_93_object = Obj(); var_94_object = Obj(); // 0x13f2 PushV
	var_95_int = 370; // 0x13f3 PushI
	var_96_int = 1; // 0x13f4 PushI
	var_97_int = 525727; // 0x13f5 PushI
	CreateDiaryEntry(var_94_object, var_95_int, var_96_int, var_97_int); // 0x13f6 Func
	var_98_bool = 0; var_99_object = Obj(); var_100_int = 0; // 0x13f8 PushV
	var_99_object = var_94_object; // 0x13f9 Mov
	var_100_int = 368; // 0x13fa MovI
	func_5132(var_98_bool, var_99_object, var_100_int); // 0x13fb NEW_2
	return 2; // 0x13fd Return
}


func_2803(var_2_object, var_984_string)
{
	var_985_bool = 0; // 0xaf4 PushV
	func_4764(var_985_bool); // 0xaf5 NEW_2
	var_986_bool = var_985_bool == 0; // 0xaf7 Not
	if(var_986_bool == 0) goto Label_2810; // 0xaf8 JumpB
	return 0; // 0xaf9 Return
	
Label_2810:
	var_987_bool = var_984_string == var_2_object; // 0xafa Eq
	if(var_987_bool == 0) goto Label_2813; // 0xafb JumpB
	return 0; // 0xafc Return
	
Label_2813:
	var_988_string = ""; var_989_bool = 0; // 0xafd PushV
	var_988_string = var_984_string; // 0xafe Mov
	var_990_string = ""; // 0xaff PushS
	var_991_bool = var_984_string == var_990_string; // 0xb00 Eq
	if(var_991_bool == 0) goto Label_2820; // 0xb01 JumpB
	var_989_bool = 0; // 0xb02 MovB
	goto Label_2821; // 0xb03 Jump
	
Label_2821:
	func_4609(var_988_string, var_989_bool); // 0xb05 NEW_2
	var_2_object = var_984_string; // 0xb07 TMov
	return 0; // 0xb08 Return
	
Label_2820:
	var_989_bool = 1; // 0xb04 MovB
}


func_248(var_0_bool, var_671_int, var_672_object)
{
	var_674_object = Obj(); var_675_bool = 0; var_676_int = 0; var_677_bool = 0; var_678_object = Obj(); var_679_bool = 0; var_680_int = 0; var_681_bool = 0; // 0xf8 PushV
	var_0_bool = var_672_object; // 0xf9 TMov
	var_682_bool = 0; var_683_object = Obj(); var_684_float = 0; // 0xfa PushV
	var_683_object = var_672_object; // 0xfb Mov
	var_684_float = 70.0; // 0xfc MovF
	func_4307(var_683_object, var_684_float); // 0xfd NEW_2
	var_685_bool = var_682_bool == 0; // 0xff Not
	if(var_685_bool == 0) goto Label_259; // 0x100 JumpB
	var_671_int = -2; // 0x101 MovI
	return 8; // 0x102 Return
	
Label_259:
	CreateDialog(var_678_object); // 0x103 Func
	var_686_int = 0; // 0x105 PushV
	func_4758(var_686_int); // 0x106 NEW_2
	SetNPCName(var_686_int); // 0x108 ObjFunc
	var_687_int = 0; // 0x10a PushV
	func_4756(var_687_int); // 0x10b NEW_2
	SetNPCDescription(var_687_int); // 0x10d ObjFunc
	var_688_string = ""; // 0x10f PushV
	func_4760(var_688_string); // 0x110 NEW_2
	SetPhoto(var_688_string); // 0x112 ObjFunc
	var_689_string = ""; // 0x114 PushV
	func_4762(var_689_string); // 0x115 NEW_2
	SetPhoto2(var_689_string); // 0x117 ObjFunc
	var_690_int = 0; // 0x119 PushV
	func_5384(var_690_int); // 0x11a NEW_2
	SetPlayerName(var_690_int); // 0x11c ObjFunc
	var_680_int = -1; // 0x11e MovI
	IsOverrideActive(var_679_bool); // 0x11f Func
	var_691_bool = var_679_bool; // 0x121 Push
	if(var_691_bool == 0) goto Label_293; // 0x122 JumpB
	var_671_int = -2; // 0x123 MovI
	return 8; // 0x124 Return
	
Label_293:
	DoDialog(var_678_object); // 0x125 Func
	var_692_bool = 0; var_693_object = Obj(); // 0x127 PushV
	var_694_object = Obj(); // 0x128 PushV
	func_4674(var_694_object); // 0x129 NEW_2
	var_693_object = var_694_object; // 0x12a Mov
	func_4394(var_692_bool, var_693_object); // 0x12c NEW_2
	var_695_object = Obj(); var_696_object = Obj(); // 0x12e PushV
	var_695_object = var_672_object; // 0x12f Mov
	var_696_object = var_678_object; // 0x130 Mov
	TaskCall(4); // 0x131 TaskCall
	func_329(var_697_object, var_698_object, var_699_string, var_700_bool, var_695_object, var_696_object); // 0x132 NEW_2
	TaskReturn(); // 0x133 TaskReturn
	IsDialogEnd(var_681_bool); // 0x135 ObjFunc
	
Label_311:
	var_757_bool = var_681_bool == 0; // 0x137 Not
	if(var_757_bool == 0) goto Label_318; // 0x138 JumpB
	sync(); // 0x139 Func
	IsDialogEnd(var_681_bool); // 0x13b ObjFunc
	goto Label_311; // 0x13d Jump
	
Label_318:
	var_758_object = Obj(); // 0x13e PushV
	var_758_object = var_672_object; // 0x13f Mov
	func_4376(); // 0x140 NEW_2
	StopDialog(var_678_object); // 0x142 Func
	GetReturnValue(var_680_int); // 0x144 ObjFunc
	var_671_int = var_680_int; // 0x146 Mov
	return 8; // 0x147 Return
}


func_1785(var_0_bool, var_607_int, var_608_object)
{
	var_610_object = Obj(); var_611_bool = 0; var_612_int = 0; var_613_bool = 0; var_614_object = Obj(); var_615_bool = 0; var_616_int = 0; var_617_bool = 0; // 0x6f9 PushV
	var_0_bool = var_608_object; // 0x6fa TMov
	var_618_bool = 0; var_619_object = Obj(); var_620_float = 0; // 0x6fb PushV
	var_619_object = var_608_object; // 0x6fc Mov
	var_620_float = 70.0; // 0x6fd MovF
	func_4307(var_619_object, var_620_float); // 0x6fe NEW_2
	var_621_bool = var_618_bool == 0; // 0x700 Not
	if(var_621_bool == 0) goto Label_1796; // 0x701 JumpB
	var_607_int = -2; // 0x702 MovI
	return 8; // 0x703 Return
	
Label_1796:
	CreateDialog(var_614_object); // 0x704 Func
	var_622_int = 0; // 0x706 PushV
	func_4758(var_622_int); // 0x707 NEW_2
	SetNPCName(var_622_int); // 0x709 ObjFunc
	var_623_int = 0; // 0x70b PushV
	func_4756(var_623_int); // 0x70c NEW_2
	SetNPCDescription(var_623_int); // 0x70e ObjFunc
	var_624_string = ""; // 0x710 PushV
	func_4760(var_624_string); // 0x711 NEW_2
	SetPhoto(var_624_string); // 0x713 ObjFunc
	var_625_string = ""; // 0x715 PushV
	func_4762(var_625_string); // 0x716 NEW_2
	SetPhoto2(var_625_string); // 0x718 ObjFunc
	var_626_int = 0; // 0x71a PushV
	func_5384(var_626_int); // 0x71b NEW_2
	SetPlayerName(var_626_int); // 0x71d ObjFunc
	var_616_int = -1; // 0x71f MovI
	IsOverrideActive(var_615_bool); // 0x720 Func
	var_627_bool = var_615_bool; // 0x722 Push
	if(var_627_bool == 0) goto Label_1830; // 0x723 JumpB
	var_607_int = -2; // 0x724 MovI
	return 8; // 0x725 Return
	
Label_1830:
	DoDialog(var_614_object); // 0x726 Func
	var_628_bool = 0; var_629_object = Obj(); // 0x728 PushV
	var_630_object = Obj(); // 0x729 PushV
	func_4674(var_630_object); // 0x72a NEW_2
	var_629_object = var_630_object; // 0x72b Mov
	func_4394(var_628_bool, var_629_object); // 0x72d NEW_2
	var_631_object = Obj(); var_632_object = Obj(); // 0x72f PushV
	var_631_object = var_608_object; // 0x730 Mov
	var_632_object = var_614_object; // 0x731 Mov
	TaskCall(10); // 0x732 TaskCall
	func_1866(var_633_object, var_634_object, var_635_string, var_636_bool, var_631_object, var_632_object); // 0x733 NEW_2
	TaskReturn(); // 0x734 TaskReturn
	IsDialogEnd(var_617_bool); // 0x736 ObjFunc
	
Label_1848:
	var_664_bool = var_617_bool == 0; // 0x738 Not
	if(var_664_bool == 0) goto Label_1855; // 0x739 JumpB
	sync(); // 0x73a Func
	IsDialogEnd(var_617_bool); // 0x73c ObjFunc
	goto Label_1848; // 0x73e Jump
	
Label_1855:
	var_665_object = Obj(); // 0x73f PushV
	var_665_object = var_608_object; // 0x740 Mov
	func_4376(); // 0x741 NEW_2
	StopDialog(var_614_object); // 0x743 Func
	GetReturnValue(var_616_int); // 0x745 ObjFunc
	var_607_int = var_616_int; // 0x747 Mov
	return 8; // 0x748 Return
}


func_5119(var_102_object)
{
	var_103_object = Obj(); var_104_object = Obj(); // 0x13ff PushV
	GetDiaryRoot(var_104_object); // 0x1400 Func
	var_105_bool = var_104_object == 0; // 0x1402 Not
	if(var_105_bool == 0) goto Label_5129; // 0x1403 JumpB
	var_106_string = "Can't retrieve diary root"; // 0x1404 PushS
	Trace(var_106_string); // 0x1405 Func
	var_102_object = 0; // 0x1407 MovB
	return 2; // 0x1408 Return
	
Label_5129:
	var_102_object = var_104_object; // 0x1409 Mov
	return 2; // 0x140a Return
}


