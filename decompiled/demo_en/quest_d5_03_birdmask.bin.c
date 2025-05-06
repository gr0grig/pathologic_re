task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool)
{
	var_8_int = 1; // 0xe0 PushI
	if(var_8_int == 0) goto Label_580; // 0xe1 JumpB
	func_804(); // 0xe3 NEW_2
	var_10_int = 13729; // 0xe5 PushI
	var_11_bool = var_7_bool == var_10_int; // 0xe6 Eq
	if(var_11_bool == 0) goto Label_247; // 0xe7 JumpB
	var_12_object = Obj(); var_13_object = Obj(); // 0xe8 PushV
	var_12_object = var_1_object; // 0xe9 MovT
	var_13_object = var_0_object; // 0xea MovT
	func_968(); // 0xeb NEW_2
	var_61_object = Obj(); var_62_object = Obj(); // 0xed PushV
	var_61_object = var_1_object; // 0xee MovT
	var_62_object = var_0_object; // 0xef MovT
	func_956(); // 0xf0 NEW_2
	var_65_object = Obj(); var_66_object = Obj(); // 0xf2 PushV
	var_65_object = var_1_object; // 0xf3 MovT
	var_66_object = var_0_object; // 0xf4 MovT
	func_946(var_66_object); // 0xf5 NEW_2
	
Label_247:
	var_86_int = 13730; // 0xf7 PushI
	var_87_bool = var_7_bool == var_86_int; // 0xf8 Eq
	if(var_87_bool == 0) goto Label_255; // 0xf9 JumpB
	var_88_object = Obj(); var_89_object = Obj(); // 0xfa PushV
	var_88_object = var_1_object; // 0xfb MovT
	var_89_object = var_0_object; // 0xfc MovT
	func_1024(); // 0xfd NEW_2
	
Label_255:
	var_120_int = 16739; // 0xff PushI
	var_121_bool = var_7_bool == var_120_int; // 0x100 Eq
	if(var_121_bool == 0) goto Label_263; // 0x101 JumpB
	var_122_object = Obj(); var_123_object = Obj(); // 0x102 PushV
	var_122_object = var_1_object; // 0x103 MovT
	var_123_object = var_0_object; // 0x104 MovT
	func_1065(var_123_object); // 0x105 NEW_2
	
Label_263:
	var_162_int = 16737; // 0x107 PushI
	var_163_bool = var_7_bool == var_162_int; // 0x108 Eq
	if(var_163_bool == 0) goto Label_271; // 0x109 JumpB
	var_164_object = Obj(); var_165_object = Obj(); // 0x10a PushV
	var_164_object = var_1_object; // 0x10b MovT
	var_165_object = var_0_object; // 0x10c MovT
	func_936(); // 0x10d NEW_2
	
Label_271:
	var_180_int = 13735; // 0x10f PushI
	var_181_bool = var_7_bool == var_180_int; // 0x110 Eq
	if(var_181_bool == 0) goto Label_289; // 0x111 JumpB
	var_182_object = Obj(); var_183_object = Obj(); // 0x112 PushV
	var_182_object = var_1_object; // 0x113 MovT
	var_183_object = var_0_object; // 0x114 MovT
	func_956(); // 0x115 NEW_2
	var_184_object = Obj(); var_185_object = Obj(); // 0x117 PushV
	var_184_object = var_1_object; // 0x118 MovT
	var_185_object = var_0_object; // 0x119 MovT
	func_968(); // 0x11a NEW_2
	var_186_object = Obj(); var_187_object = Obj(); // 0x11c PushV
	var_186_object = var_1_object; // 0x11d MovT
	var_187_object = var_0_object; // 0x11e MovT
	func_946(var_187_object); // 0x11f NEW_2
	
Label_289:
	var_188_int = 13736; // 0x121 PushI
	var_189_bool = var_7_bool == var_188_int; // 0x122 Eq
	if(var_189_bool == 0) goto Label_297; // 0x123 JumpB
	var_190_object = Obj(); var_191_object = Obj(); // 0x124 PushV
	var_190_object = var_1_object; // 0x125 MovT
	var_191_object = var_0_object; // 0x126 MovT
	func_962(); // 0x127 NEW_2
	
Label_297:
	var_194_int = 13720; // 0x129 PushI
	var_195_bool = var_6_int == var_194_int; // 0x12a Eq
	if(var_195_bool == 0) goto Label_389; // 0x12b JumpB
	var_196_bool = 0; var_197_object = Obj(); // 0x12c PushV
	var_197_object = var_1_object; // 0x12d MovT
	func_1094(var_197_object); // 0x12e NEW_2
	if(var_196_bool == 0) goto Label_325; // 0x130 JumpB
	var_204_string = ""; // 0x131 PushV
	var_204_string = "Neutral"; // 0x132 MovS
	func_201(var_7_bool, var_204_string); // 0x133 NEW_2
	var_221_int = 512551; // 0x135 PushI
	SetMessage(var_221_int); // 0x136 TObjFunc
	ClearReplies(); // 0x138 TObjFunc
	var_222_int = 512552; // 0x13a PushI
	var_223_int = 13722; // 0x13b PushI
	var_224_int = 13721; // 0x13c PushI
	AddReply(var_222_int, var_223_int, var_224_int); // 0x13d TObjFunc
	var_225_int = 515690; // 0x13f PushI
	var_226_int = -1; // 0x140 PushI
	var_227_int = 16737; // 0x141 PushI
	AddReply(var_225_int, var_226_int, var_227_int); // 0x142 TObjFunc
	return 0; // 0x144 Return
	
Label_325:
	var_228_string = ""; // 0x145 PushV
	var_228_string = "Neutral"; // 0x146 MovS
	func_201(var_7_bool, var_228_string); // 0x147 NEW_2
	var_229_int = 512562; // 0x149 PushI
	SetMessage(var_229_int); // 0x14a TObjFunc
	ClearReplies(); // 0x14c TObjFunc
	var_230_bool = 0; // 0x14e PushV
	var_230_bool = 0; // 0x14f MovB
	var_231_bool = 0; var_232_object = Obj(); // 0x150 PushV
	var_232_object = var_1_object; // 0x151 MovT
	func_1130(var_232_object); // 0x152 NEW_2
	if(var_231_bool == 0) goto Label_347; // 0x154 JumpB
	var_237_bool = 0; var_238_object = Obj(); // 0x155 PushV
	var_238_object = var_1_object; // 0x156 MovT
	func_1072(var_237_bool, var_238_object); // 0x157 NEW_2
	if(var_237_bool == 0) goto Label_347; // 0x159 JumpB
	var_230_bool = 1; // 0x15a MovB
	
Label_347:
	if(var_230_bool == 0) goto Label_353; // 0x15b JumpB
	var_246_int = 512563; // 0x15c PushI
	var_247_int = 13734; // 0x15d PushI
	var_248_int = 13732; // 0x15e PushI
	AddReply(var_246_int, var_247_int, var_248_int); // 0x15f TObjFunc
	
Label_353:
	var_249_bool = 0; // 0x161 PushV
	var_249_bool = 0; // 0x162 MovB
	var_250_bool = 0; // 0x163 PushV
	var_250_bool = 0; // 0x164 MovB
	var_251_bool = 0; var_252_object = Obj(); // 0x165 PushV
	var_252_object = var_1_object; // 0x166 MovT
	func_1082(var_252_object); // 0x167 NEW_2
	if(var_251_bool == 0) goto Label_369; // 0x169 JumpB
	var_257_bool = 0; var_258_object = Obj(); // 0x16a PushV
	var_258_object = var_1_object; // 0x16b MovT
	func_1106(var_258_object); // 0x16c NEW_2
	var_263_bool = var_257_bool == 0; // 0x16e Not
	if(var_263_bool == 0) goto Label_369; // 0x16f JumpB
	var_250_bool = 1; // 0x170 MovB
	
Label_369:
	if(var_250_bool == 0) goto Label_377; // 0x171 JumpB
	var_264_bool = 0; var_265_object = Obj(); // 0x172 PushV
	var_265_object = var_1_object; // 0x173 MovT
	func_1118(var_265_object); // 0x174 NEW_2
	var_270_bool = var_264_bool == 0; // 0x176 Not
	if(var_270_bool == 0) goto Label_377; // 0x177 JumpB
	var_249_bool = 1; // 0x178 MovB
	
Label_377:
	if(var_249_bool == 0) goto Label_383; // 0x179 JumpB
	var_271_int = 512567; // 0x17a PushI
	var_272_int = 13737; // 0x17b PushI
	var_273_int = 13736; // 0x17c PushI
	AddReply(var_271_int, var_272_int, var_273_int); // 0x17d TObjFunc
	
Label_383:
	var_274_int = 512564; // 0x17f PushI
	var_275_int = -1; // 0x180 PushI
	var_276_int = 13733; // 0x181 PushI
	AddReply(var_274_int, var_275_int, var_276_int); // 0x182 TObjFunc
	return 0; // 0x184 Return
	
Label_389:
	var_277_int = 13737; // 0x185 PushI
	var_278_bool = var_6_int == var_277_int; // 0x186 Eq
	if(var_278_bool == 0) goto Label_412; // 0x187 JumpB
	var_279_string = ""; // 0x188 PushV
	var_279_string = "Neutral"; // 0x189 MovS
	func_201(var_7_bool, var_279_string); // 0x18a NEW_2
	var_280_int = 512568; // 0x18c PushI
	SetMessage(var_280_int); // 0x18d TObjFunc
	ClearReplies(); // 0x18f TObjFunc
	var_281_int = 512609; // 0x191 PushI
	var_282_int = 13785; // 0x192 PushI
	var_283_int = 13784; // 0x193 PushI
	AddReply(var_281_int, var_282_int, var_283_int); // 0x194 TObjFunc
	var_284_int = 515693; // 0x196 PushI
	var_285_int = 13785; // 0x197 PushI
	var_286_int = 16740; // 0x198 PushI
	AddReply(var_284_int, var_285_int, var_286_int); // 0x199 TObjFunc
	return 0; // 0x19b Return
	
Label_412:
	var_287_int = 13785; // 0x19c PushI
	var_288_bool = var_6_int == var_287_int; // 0x19d Eq
	if(var_288_bool == 0) goto Label_430; // 0x19e JumpB
	var_289_string = ""; // 0x19f PushV
	var_289_string = "Neutral"; // 0x1a0 MovS
	func_201(var_7_bool, var_289_string); // 0x1a1 NEW_2
	var_290_int = 512610; // 0x1a3 PushI
	SetMessage(var_290_int); // 0x1a4 TObjFunc
	ClearReplies(); // 0x1a6 TObjFunc
	var_291_int = 512569; // 0x1a8 PushI
	var_292_int = -1; // 0x1a9 PushI
	var_293_int = 13738; // 0x1aa PushI
	AddReply(var_291_int, var_292_int, var_293_int); // 0x1ab TObjFunc
	return 0; // 0x1ad Return
	
Label_430:
	var_294_int = 13734; // 0x1ae PushI
	var_295_bool = var_6_int == var_294_int; // 0x1af Eq
	if(var_295_bool == 0) goto Label_448; // 0x1b0 JumpB
	var_296_string = ""; // 0x1b1 PushV
	var_296_string = "Neutral"; // 0x1b2 MovS
	func_201(var_7_bool, var_296_string); // 0x1b3 NEW_2
	var_297_int = 512565; // 0x1b5 PushI
	SetMessage(var_297_int); // 0x1b6 TObjFunc
	ClearReplies(); // 0x1b8 TObjFunc
	var_298_int = 512566; // 0x1ba PushI
	var_299_int = -1; // 0x1bb PushI
	var_300_int = 13735; // 0x1bc PushI
	AddReply(var_298_int, var_299_int, var_300_int); // 0x1bd TObjFunc
	return 0; // 0x1bf Return
	
Label_448:
	var_301_int = 13722; // 0x1c0 PushI
	var_302_bool = var_6_int == var_301_int; // 0x1c1 Eq
	if(var_302_bool == 0) goto Label_471; // 0x1c2 JumpB
	var_303_string = ""; // 0x1c3 PushV
	var_303_string = "Neutral"; // 0x1c4 MovS
	func_201(var_7_bool, var_303_string); // 0x1c5 NEW_2
	var_304_int = 512553; // 0x1c7 PushI
	SetMessage(var_304_int); // 0x1c8 TObjFunc
	ClearReplies(); // 0x1ca TObjFunc
	var_305_int = 512554; // 0x1cc PushI
	var_306_int = 13724; // 0x1cd PushI
	var_307_int = 13723; // 0x1ce PushI
	AddReply(var_305_int, var_306_int, var_307_int); // 0x1cf TObjFunc
	var_308_int = 512604; // 0x1d1 PushI
	var_309_int = 13778; // 0x1d2 PushI
	var_310_int = 13777; // 0x1d3 PushI
	AddReply(var_308_int, var_309_int, var_310_int); // 0x1d4 TObjFunc
	return 0; // 0x1d6 Return
	
Label_471:
	var_311_int = 13778; // 0x1d7 PushI
	var_312_bool = var_6_int == var_311_int; // 0x1d8 Eq
	if(var_312_bool == 0) goto Label_494; // 0x1d9 JumpB
	var_313_string = ""; // 0x1da PushV
	var_313_string = "Neutral"; // 0x1db MovS
	func_201(var_7_bool, var_313_string); // 0x1dc NEW_2
	var_314_int = 512605; // 0x1de PushI
	SetMessage(var_314_int); // 0x1df TObjFunc
	ClearReplies(); // 0x1e1 TObjFunc
	var_315_int = 512606; // 0x1e3 PushI
	var_316_int = 13724; // 0x1e4 PushI
	var_317_int = 13779; // 0x1e5 PushI
	AddReply(var_315_int, var_316_int, var_317_int); // 0x1e6 TObjFunc
	var_318_int = 515691; // 0x1e8 PushI
	var_319_int = 13724; // 0x1e9 PushI
	var_320_int = 16738; // 0x1ea PushI
	AddReply(var_318_int, var_319_int, var_320_int); // 0x1eb TObjFunc
	return 0; // 0x1ed Return
	
Label_494:
	var_321_int = 13724; // 0x1ee PushI
	var_322_bool = var_6_int == var_321_int; // 0x1ef Eq
	if(var_322_bool == 0) goto Label_517; // 0x1f0 JumpB
	var_323_string = ""; // 0x1f1 PushV
	var_323_string = "Neutral"; // 0x1f2 MovS
	func_201(var_7_bool, var_323_string); // 0x1f3 NEW_2
	var_324_int = 512555; // 0x1f5 PushI
	SetMessage(var_324_int); // 0x1f6 TObjFunc
	ClearReplies(); // 0x1f8 TObjFunc
	var_325_int = 512556; // 0x1fa PushI
	var_326_int = 13726; // 0x1fb PushI
	var_327_int = 13725; // 0x1fc PushI
	AddReply(var_325_int, var_326_int, var_327_int); // 0x1fd TObjFunc
	var_328_int = 512607; // 0x1ff PushI
	var_329_int = 13726; // 0x200 PushI
	var_330_int = 13781; // 0x201 PushI
	AddReply(var_328_int, var_329_int, var_330_int); // 0x202 TObjFunc
	return 0; // 0x204 Return
	
Label_517:
	var_331_int = 13726; // 0x205 PushI
	var_332_bool = var_6_int == var_331_int; // 0x206 Eq
	if(var_332_bool == 0) goto Label_535; // 0x207 JumpB
	var_333_string = ""; // 0x208 PushV
	var_333_string = "Neutral"; // 0x209 MovS
	func_201(var_7_bool, var_333_string); // 0x20a NEW_2
	var_334_int = 512557; // 0x20c PushI
	SetMessage(var_334_int); // 0x20d TObjFunc
	ClearReplies(); // 0x20f TObjFunc
	var_335_int = 512558; // 0x211 PushI
	var_336_int = 13728; // 0x212 PushI
	var_337_int = 13727; // 0x213 PushI
	AddReply(var_335_int, var_336_int, var_337_int); // 0x214 TObjFunc
	return 0; // 0x216 Return
	
Label_535:
	var_338_int = 13728; // 0x217 PushI
	var_339_bool = var_6_int == var_338_int; // 0x218 Eq
	if(var_339_bool == 0) goto Label_568; // 0x219 JumpB
	var_340_string = ""; // 0x21a PushV
	var_340_string = "Neutral"; // 0x21b MovS
	func_201(var_7_bool, var_340_string); // 0x21c NEW_2
	var_341_int = 512559; // 0x21e PushI
	SetMessage(var_341_int); // 0x21f TObjFunc
	ClearReplies(); // 0x221 TObjFunc
	var_342_bool = 0; var_343_object = Obj(); // 0x223 PushV
	var_343_object = var_1_object; // 0x224 MovT
	func_1072(var_342_bool, var_343_object); // 0x225 NEW_2
	if(var_342_bool == 0) goto Label_557; // 0x227 JumpB
	var_344_int = 512560; // 0x228 PushI
	var_345_int = -1; // 0x229 PushI
	var_346_int = 13729; // 0x22a PushI
	AddReply(var_344_int, var_345_int, var_346_int); // 0x22b TObjFunc
	
Label_557:
	var_347_int = 512561; // 0x22d PushI
	var_348_int = -1; // 0x22e PushI
	var_349_int = 13730; // 0x22f PushI
	AddReply(var_347_int, var_348_int, var_349_int); // 0x230 TObjFunc
	var_350_int = 515692; // 0x232 PushI
	var_351_int = -1; // 0x233 PushI
	var_352_int = 16739; // 0x234 PushI
	AddReply(var_350_int, var_351_int, var_352_int); // 0x235 TObjFunc
	return 0; // 0x237 Return
	
Label_568:
	var_3_string = 1; // 0x238 TMovB
	var_353_bool = 0; // 0x239 PushV
	func_1275(var_353_bool); // 0x23a NEW_2
	if(var_353_bool == 0) goto Label_576; // 0x23c JumpB
	lshStopAnimation(); // 0x23d Func
	goto Label_578; // 0x23f Jump
	
Label_578:
	return 0; // 0x242 Return
	
Label_576:
	StopAnimation(); // 0x240 Func
	
Label_580:
	return 0; // 0x244 Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object)
{
	var_7_int = 0; var_8_object = Obj(); // 0x246 PushV
	var_8_object = var_6_object; // 0x247 Mov
	TaskCall(0); // 0x248 TaskCall
	func_0(var_9_object, var_7_int, var_8_object); // 0x249 NEW_2
	TaskReturn(); // 0x24a TaskReturn
	var_192_int = 1; // 0x24c PushI
	var_193_bool = var_9_object == var_192_int; // 0x24d Eq
	if(var_193_bool == 0) goto Label_596; // 0x24e JumpB
	var_194_bool = 0; var_195_string = ""; var_196_string = ""; // 0x24f PushV
	var_195_string = "quest_d5_03"; // 0x250 MovS
	var_196_string = "completed"; // 0x251 MovS
	func_919(var_194_bool, var_195_string, var_196_string); // 0x252 NEW_2
	
Label_596:
	return 0; // 0x254 Return
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_string)
{
	var_7_bool = 0; var_8_bool = 0; // 0x259 PushV
	var_9_string = "cleanup"; // 0x25a PushS
	var_10_bool = var_6_string == var_9_string; // 0x25b Eq
	if(var_10_bool == 0) goto Label_624; // 0x25c JumpB
	var_0_object = 1; // 0x25d TMovB
	IsLoaded(var_8_bool); // 0x25e Func
	var_11_bool = 0; // 0x260 PushV
	var_11_bool = 0; // 0x261 MovB
	var_12_bool = var_8_bool == 0; // 0x262 Not
	if(var_12_bool == 0) goto Label_617; // 0x263 JumpB
	var_13_bool = 0; // 0x264 PushV
	func_645(var_13_bool); // 0x265 NEW_2
	if(var_13_bool == 0) goto Label_617; // 0x267 JumpB
	var_11_bool = 1; // 0x268 MovB
	
Label_617:
	if(var_11_bool == 0) goto Label_623; // 0x269 JumpB
	var_14_object = Obj(); // 0x26a PushV
	func_811(var_14_object); // 0x26b NEW_2
	RemoveActor(var_14_object); // 0x26d Func
	
Label_623:
	goto Label_628; // 0x26f Jump
	
Label_628:
	return 2; // 0x274 Return
	
Label_624:
	var_17_string = "restore"; // 0x270 PushS
	var_18_bool = var_6_string == var_17_string; // 0x271 Eq
	if(var_18_bool == 0) goto Label_628; // 0x272 JumpB
	var_0_object = 0; // 0x273 TMovB
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	var_6_bool = 0; // 0x275 PushV
	var_6_bool = 0; // 0x276 MovB
	var_7_object = var_0_object; // 0x277 PushT
	if(var_7_object == 0) goto Label_638; // 0x278 JumpB
	var_8_bool = 0; // 0x279 PushV
	func_645(var_8_bool); // 0x27a NEW_2
	if(var_8_bool == 0) goto Label_638; // 0x27c JumpB
	var_6_bool = 1; // 0x27d MovB
	
Label_638:
	if(var_6_bool == 0) goto Label_644; // 0x27e JumpB
	var_9_object = Obj(); // 0x27f PushV
	func_811(var_9_object); // 0x280 NEW_2
	RemoveActor(var_9_object); // 0x282 Func
	
Label_644:
	return 0; // 0x284 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	
Label_597:
	Hold(); // 0x255 Func
	goto Label_597; // 0x257 Jump
}


func_1024()
{
	var_90_object = Obj(); var_91_object = Obj(); // 0x400 PushV
	var_92_string = "d5q03"; // 0x401 PushS
	var_93_int = 2; // 0x402 PushI
	SetVariable(var_92_string, var_93_int); // 0x403 Func
	var_94_object = Obj(); // 0x405 PushV
	func_1233(var_94_object); // 0x406 NEW_2
	var_91_object = var_94_object; // 0x407 Mov
	var_95_string = "d5q03BirdmaskBringMoneySelf"; // 0x409 PushS
	var_96_string = "pt_map_uprava_prison"; // 0x40a PushS
	var_97_int = 0; // 0x40b PushI
	var_98_int = 515372; // 0x40c PushI
	var_99_float = 0; // 0x40d PushV
	func_931(var_99_float); // 0x40e NEW_2
	AddMark(var_95_string, var_96_string, var_97_int, var_98_int, var_99_float); // 0x410 ObjFunc
	var_102_string = "d5q03BirdmaskGotoMladVlad"; // 0x412 PushS
	var_103_string = "pt_map_mladvlad"; // 0x413 PushS
	var_104_int = 0; // 0x414 PushI
	var_105_int = 515374; // 0x415 PushI
	var_106_float = 0; // 0x416 PushV
	func_931(var_106_float); // 0x417 NEW_2
	AddMark(var_102_string, var_103_string, var_104_int, var_105_int, var_106_float); // 0x419 ObjFunc
	var_107_string = "d5q03BirdmaskGotoViktor"; // 0x41b PushS
	var_108_string = "pt_map_viktor"; // 0x41c PushS
	var_109_int = 0; // 0x41d PushI
	var_110_int = 515373; // 0x41e PushI
	var_111_float = 0; // 0x41f PushV
	func_931(var_111_float); // 0x420 NEW_2
	AddMark(var_107_string, var_108_string, var_109_int, var_110_int, var_111_float); // 0x422 ObjFunc
	func_1166(); // 0x425 NEW_2
	return 2; // 0x427 Return
}


func_0(var_0_object, var_7_int, var_8_object)
{
	var_10_object = Obj(); var_11_bool = 0; var_12_int = 0; var_13_bool = 0; var_14_object = Obj(); var_15_bool = 0; var_16_int = 0; var_17_bool = 0; // 0x0 PushV
	var_0_object = var_8_object; // 0x1 TMov
	var_18_bool = 0; var_19_object = Obj(); var_20_float = 0; // 0x2 PushV
	var_19_object = var_8_object; // 0x3 Mov
	var_20_float = 130.0; // 0x4 MovF
	func_688(var_19_object, var_20_float); // 0x5 NEW_2
	var_64_bool = var_18_bool == 0; // 0x7 Not
	if(var_64_bool == 0) goto Label_11; // 0x8 JumpB
	var_7_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_14_object); // 0xb Func
	var_65_int = 0; // 0xd PushV
	func_1269(var_65_int); // 0xe NEW_2
	SetNPCName(var_65_int); // 0x10 ObjFunc
	var_66_int = 0; // 0x12 PushV
	func_1267(var_66_int); // 0x13 NEW_2
	SetNPCDescription(var_66_int); // 0x15 ObjFunc
	var_67_string = ""; // 0x17 PushV
	func_1271(var_67_string); // 0x18 NEW_2
	SetPhoto(var_67_string); // 0x1a ObjFunc
	var_68_string = ""; // 0x1c PushV
	func_1273(var_68_string); // 0x1d NEW_2
	SetPhoto2(var_68_string); // 0x1f ObjFunc
	var_69_int = 0; // 0x21 PushV
	func_1250(var_69_int); // 0x22 NEW_2
	SetPlayerName(var_69_int); // 0x24 ObjFunc
	var_16_int = -1; // 0x26 MovI
	IsOverrideActive(var_15_bool); // 0x27 Func
	var_77_bool = var_15_bool; // 0x29 Push
	if(var_77_bool == 0) goto Label_45; // 0x2a JumpB
	var_7_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_14_object); // 0x2d Func
	var_78_object = Obj(); var_79_object = Obj(); // 0x2f PushV
	var_78_object = var_8_object; // 0x30 Mov
	var_79_object = var_14_object; // 0x31 Mov
	TaskCall(1); // 0x32 TaskCall
	func_74(var_80_object, var_81_object, var_82_string, var_83_bool, var_78_object, var_79_object); // 0x33 NEW_2
	TaskReturn(); // 0x34 TaskReturn
	IsDialogEnd(var_17_bool); // 0x36 ObjFunc
	
Label_56:
	var_184_bool = var_17_bool == 0; // 0x38 Not
	if(var_184_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_17_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_185_object = Obj(); // 0x3f PushV
	var_185_object = var_8_object; // 0x40 Mov
	func_756(); // 0x41 NEW_2
	StopDialog(var_14_object); // 0x43 Func
	GetReturnValue(var_16_int); // 0x45 ObjFunc
	var_7_int = var_16_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_1153()
{
	var_166_object = Obj(); var_167_object = Obj(); // 0x481 PushV
	var_168_int = 714; // 0x482 PushI
	var_169_int = 2; // 0x483 PushI
	var_170_int = 536322; // 0x484 PushI
	CreateDiaryEntry(var_167_object, var_168_int, var_169_int, var_170_int); // 0x485 Func
	var_171_bool = 0; var_172_object = Obj(); var_173_int = 0; // 0x487 PushV
	var_172_object = var_167_object; // 0x488 Mov
	var_173_int = 154; // 0x489 MovI
	func_1205(var_171_bool, var_172_object, var_173_int); // 0x48a NEW_2
	return 2; // 0x48c Return
}


func_773(var_119_string)
{
	var_120_bool = 0; var_121_float = 0; var_122_float = 0; var_123_bool = 0; var_124_float = 0; var_125_float = 0; // 0x305 PushV
	lshHasAnimation(var_123_bool, var_119_string); // 0x306 Func
	var_126_bool = var_123_bool; // 0x308 Push
	if(var_126_bool == 0) goto Label_784; // 0x309 JumpB
	lshGetAnimTimes(var_119_string, var_124_float, var_125_float); // 0x30a Func
	var_127_bool = 0; // 0x30c PushB
	lshPlayAnimation(var_124_float, var_125_float, var_127_bool); // 0x30d Func
	goto Label_788; // 0x30f Jump
	
Label_788:
	return 6; // 0x314 Return
	
Label_784:
	var_128_string = "Can't find lsh animation : "; // 0x310 PushS
	var_129_int = var_128_string + var_119_string; // 0x311 Add
	Trace(var_129_int); // 0x312 Func
}


func_645(var_8_bool)
{
	var_8_bool = 1; // 0x285 MovB
	return 0; // 0x286 Return
}


func_647(var_143_bool, var_144_object, var_145_string)
{
	var_146_bool = 0; var_147_bool = 0; // 0x287 PushV
	var_148_string = "HasProperty"; // 0x288 PushS
	var_149_int = 2; // 0x289 PushI
	var_150_bool = IsFuncExist(var_144_object, var_148_string, var_149_int); // 0x28a FuncExist
	var_151_bool = var_150_bool == 0; // 0x28b Not
	if(var_151_bool == 0) goto Label_655; // 0x28c JumpB
	var_143_bool = 0; // 0x28d MovB
	return 2; // 0x28e Return
	
Label_655:
	HasProperty(var_145_string, var_147_bool); // 0x28f ObjFunc
	var_143_bool = var_147_bool; // 0x291 Mov
	return 2; // 0x292 Return
}


func_909(var_131_float)
{
	var_132_object = Obj(); var_133_object = Obj(); // 0x38d PushV
	CreateFloatVector(var_133_object); // 0x38e Func
	add(var_131_float); // 0x390 ObjFunc
	var_134_int = 16; // 0x392 PushI
	SendWorldWndMessage(var_134_int, var_133_object); // 0x393 Func
	return 2; // 0x395 Return
}


func_1166()
{
	var_112_object = Obj(); var_113_object = Obj(); // 0x48e PushV
	var_114_int = 156; // 0x48f PushI
	var_115_int = 2; // 0x490 PushI
	var_116_int = 515367; // 0x491 PushI
	CreateDiaryEntry(var_113_object, var_114_int, var_115_int, var_116_int); // 0x492 Func
	var_117_bool = 0; var_118_object = Obj(); var_119_int = 0; // 0x494 PushV
	var_118_object = var_113_object; // 0x495 Mov
	var_119_int = 154; // 0x496 MovI
	func_1205(var_117_bool, var_118_object, var_119_int); // 0x497 NEW_2
	return 2; // 0x499 Return
}


func_659(var_135_bool, var_136_object, var_137_string, var_138_float, var_139_float, var_140_float)
{
	var_141_float = 0; var_142_float = 0; // 0x293 PushV
	var_143_bool = 0; var_144_object = Obj(); var_145_string = ""; // 0x294 PushV
	var_144_object = var_136_object; // 0x295 Mov
	var_145_string = var_137_string; // 0x296 Mov
	func_647(var_143_bool, var_144_object, var_145_string); // 0x297 NEW_2
	var_152_bool = var_143_bool == 0; // 0x299 Not
	if(var_152_bool == 0) goto Label_669; // 0x29a JumpB
	var_135_bool = 0; // 0x29b MovB
	return 2; // 0x29c Return
	
Label_669:
	GetProperty(var_137_string, var_142_float); // 0x29d ObjFunc
	var_153_float = 0; var_154_float = 0; var_155_float = 0; var_156_float = 0; // 0x29f PushV
	var_154_float = var_142_float + var_138_float; // 0x2a0 Add2
	var_155_float = var_139_float; // 0x2a1 Mov
	var_156_float = var_140_float; // 0x2a2 Mov
	func_827(var_153_float, var_154_float, var_155_float, var_156_float); // 0x2a3 NEW_2
	SetProperty(var_137_string, var_153_float); // 0x2a5 ObjFunc
	var_135_bool = 1; // 0x2a7 MovB
	return 2; // 0x2a8 Return
}


func_789(var_97_string, var_98_bool)
{
	var_101_bool = 0; var_102_float = 0; var_103_float = 0; var_104_bool = 0; var_105_float = 0; var_106_float = 0; // 0x315 PushV
	lshHasAnimation(var_104_bool, var_97_string); // 0x316 Func
	var_107_bool = var_104_bool; // 0x318 Push
	if(var_107_bool == 0) goto Label_799; // 0x319 JumpB
	lshGetAnimTimes(var_97_string, var_105_float, var_106_float); // 0x31a Func
	lshPlayAnimation(var_105_float, var_106_float, var_98_bool); // 0x31c Func
	goto Label_803; // 0x31e Jump
	
Label_803:
	return 6; // 0x323 Return
	
Label_799:
	var_108_string = "Can't find lsh animation : "; // 0x31f PushS
	var_109_int = var_108_string + var_97_string; // 0x320 Add
	Trace(var_109_int); // 0x321 Func
}


func_919(var_194_bool, var_195_string, var_196_string)
{
	var_197_object = Obj(); var_198_object = Obj(); // 0x397 PushV
	FindActor(var_198_object, var_195_string); // 0x398 Func
	var_199_bool = var_198_object == 0; // 0x39a NullEq
	if(var_199_bool == 0) goto Label_926; // 0x39b JumpB
	var_194_bool = 0; // 0x39c MovB
	return 2; // 0x39d Return
	
Label_926:
	Trigger(var_198_object, var_196_string); // 0x39e Func
	var_194_bool = 1; // 0x3a0 MovB
	return 2; // 0x3a1 Return
}


func_1179()
{
	var_37_object = Obj(); var_38_object = Obj(); // 0x49b PushV
	var_39_int = 157; // 0x49c PushI
	var_40_int = 2; // 0x49d PushI
	var_41_int = 515368; // 0x49e PushI
	CreateDiaryEntry(var_38_object, var_39_int, var_40_int, var_41_int); // 0x49f Func
	var_42_bool = 0; var_43_object = Obj(); var_44_int = 0; // 0x4a1 PushV
	var_43_object = var_38_object; // 0x4a2 Mov
	var_44_int = 154; // 0x4a3 MovI
	func_1205(var_42_bool, var_43_object, var_44_int); // 0x4a4 NEW_2
	return 2; // 0x4a6 Return
}


func_931(var_99_float)
{
	var_100_float = 0; var_101_float = 0; // 0x3a3 PushV
	GetGameTime(var_101_float); // 0x3a4 Func
	var_99_float = var_101_float; // 0x3a6 Mov
	return 2; // 0x3a7 Return
}


func_804()
{
	var_9_bool = 0; // 0x324 PushV
	func_1275(var_9_bool); // 0x325 NEW_2
	if(var_9_bool == 0) goto Label_810; // 0x327 JumpB
	lshStopSpeech(); // 0x328 Func
	
Label_810:
	return 0; // 0x32a Return
}


func_936()
{
	func_1153(); // 0x3aa NEW_2
	var_174_bool = 0; var_175_string = ""; var_176_string = ""; // 0x3ac PushV
	var_175_string = "quest_d5_03"; // 0x3ad MovS
	var_176_string = "fail"; // 0x3ae MovS
	func_919(var_174_bool, var_175_string, var_176_string); // 0x3af NEW_2
	return 0; // 0x3b1 Return
}


func_1065(var_122_object)
{
	var_124_bool = 0; var_125_object = Obj(); var_126_float = 0; // 0x42a PushV
	var_125_object = var_122_object; // 0x42b Mov
	var_126_float = -0.3; // 0x42c MovF
	func_874(var_124_bool, var_125_object, var_126_float); // 0x42d NEW_2
	return 0; // 0x42f Return
}


func_681(var_73_string, var_74_int)
{
	var_75_int = 0; var_76_int = 0; // 0x2a9 PushV
	GetProperty(var_73_string, var_76_int); // 0x2aa ObjFunc
	var_77_int = var_76_int + var_74_int; // 0x2ac Add
	SetProperty(var_73_string, var_77_int); // 0x2ad ObjFunc
	return 2; // 0x2af Return
}


func_811(var_9_object)
{
	var_10_object = Obj(); var_11_object = Obj(); // 0x32b PushV
	self(var_11_object); // 0x32c Func
	var_9_object = var_11_object; // 0x32e Mov
	return 2; // 0x32f Return
}


func_1192(var_51_object)
{
	var_52_object = Obj(); var_53_object = Obj(); // 0x4a8 PushV
	GetDiaryRoot(var_53_object); // 0x4a9 Func
	var_54_bool = var_53_object == 0; // 0x4ab Not
	if(var_54_bool == 0) goto Label_1202; // 0x4ac JumpB
	var_55_string = "Can't retrieve diary root"; // 0x4ad PushS
	Trace(var_55_string); // 0x4ae Func
	var_51_object = 0; // 0x4b0 MovB
	return 2; // 0x4b1 Return
	
Label_1202:
	var_51_object = var_53_object; // 0x4b2 Mov
	return 2; // 0x4b3 Return
}


func_688(var_18_bool, var_20_float)
{
	var_21_float = 0; var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_bool = 0; var_29_bool = 0; var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_bool = 0; var_38_bool = 0; // 0x2b0 PushV
	GetPosition(var_31_cvector); // 0x2b1 ObjFunc
	GetEyesHeight(var_30_float); // 0x2b3 ObjFunc
	var_39_float = GetByIndex(var_31_cvector, 1); // 0x2b5 PushE
	var_39_float = var_39_float + var_30_float; // 0x2b6 Add2
	SetByIndex(var_31_cvector, 1) = var_39_float; // 0x2b7 PopE
	GetPosition(var_32_cvector); // 0x2b8 Func
	GetEyesHeight(var_30_float); // 0x2ba Func
	var_40_float = GetByIndex(var_32_cvector, 1); // 0x2bc PushE
	var_40_float = var_40_float + var_30_float; // 0x2bd Add2
	SetByIndex(var_32_cvector, 1) = var_40_float; // 0x2be PopE
	var_33_cvector = var_31_cvector - var_32_cvector; // 0x2bf Sub2
	var_41_float = GetByIndex(var_33_cvector, 1); // 0x2c0 PushE
	var_41_float = 0; // 0x2c1 MovI
	SetByIndex(var_33_cvector, 1) = var_41_float; // 0x2c2 PopE
	var_42_int = var_33_cvector | var_33_cvector; // 0x2c3 Or
	var_43_float = sqrt(var_42_int); // 0x2c4 Sqrt
	var_33_cvector = var_33_cvector / var_33_cvector; // 0x2c5 Div2
	var_34_cvector = -var_33_cvector; // 0x2c6 Neg2
	var_44_float = var_33_cvector * var_20_float; // 0x2c7 Mult
	var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); // 0x2c8 PushV
	var_47_cvector = CVector(0.0, 1.0, 0.0); // 0x2c9 PushVec
	var_46_cvector = var_34_cvector ^ var_47_cvector; // 0x2ca Xor2
	func_817(var_45_cvector, var_46_cvector); // 0x2cb NEW_2
	var_53_int = 25; // 0x2cd PushI
	var_54_float = var_45_cvector * var_53_int; // 0x2ce Mult
	var_55_int = var_44_float + var_54_float; // 0x2cf Add
	var_56_cvector = CVector(0.0, 10.0, 0.0); // 0x2d0 PushVec
	var_35_cvector = var_55_int - var_56_cvector; // 0x2d1 Sub2
	var_36_cvector = var_32_cvector + var_35_cvector; // 0x2d2 Add2
	IsOverrideActive(var_37_bool); // 0x2d3 Func
	var_57_bool = var_37_bool; // 0x2d5 Push
	if(var_57_bool == 0) goto Label_729; // 0x2d6 JumpB
	var_18_bool = 0; // 0x2d7 MovB
	return 18; // 0x2d8 Return
	
Label_729:
	StopWorld(); // 0x2d9 Func
	CameraTransit(var_36_cvector, var_34_cvector); // 0x2db Func
	var_58_float = GetByIndex(var_35_cvector, 0); // 0x2dd PushE
	var_59_float = GetByIndex(var_35_cvector, 2); // 0x2de PushE
	Rotate(var_58_float, var_59_float); // 0x2df Func
	var_60_bool = 0; // 0x2e1 PushV
	func_1275(var_60_bool); // 0x2e2 NEW_2
	if(var_60_bool == 0) goto Label_742; // 0x2e4 JumpB
	goto Label_750; // 0x2e5 Jump
	
Label_750:
	CameraWaitForPlayFinish(); // 0x2ee Func
	ResumeWorld(); // 0x2f0 Func
	var_18_bool = 1; // 0x2f2 MovB
	return 18; // 0x2f3 Return
	
Label_742:
	var_61_string = "head"; // 0x2e6 PushS
	HasAnimationTrack(var_38_bool, var_61_string); // 0x2e7 Func
	var_62_bool = var_38_bool; // 0x2e9 Push
	if(var_62_bool == 0) goto Label_750; // 0x2ea JumpB
	var_63_string = "head"; // 0x2eb PushS
	LookAsyncCamera(var_63_string); // 0x2ec Func
}


func_1072(var_144_bool, var_145_object)
{
	var_146_bool = 0; var_147_object = Obj(); // 0x431 PushV
	var_147_object = var_145_object; // 0x432 Mov
	func_1142(var_147_object); // 0x433 NEW_2
	if(var_146_bool == 0) goto Label_1080; // 0x435 JumpB
	var_144_bool = 1; // 0x436 MovB
	return 0; // 0x437 Return
	
Label_1080:
	var_144_bool = 0; // 0x438 MovB
	return 0; // 0x439 Return
}


func_946(var_65_object)
{
	var_67_string = "money 60000 removed"; // 0x3b3 PushS
	Trace(var_67_string); // 0x3b4 Func
	var_68_object = Obj(); var_69_int = 0; // 0x3b6 PushV
	var_68_object = var_65_object; // 0x3b7 Mov
	var_69_int = -60000; // 0x3b8 MovI
	func_855(var_68_object, var_69_int); // 0x3b9 NEW_2
	return 0; // 0x3bb Return
}


func_817(var_45_cvector, var_46_cvector)
{
	var_48_float = 0; var_49_float = 0; // 0x331 PushV
	var_50_int = var_46_cvector | var_46_cvector; // 0x332 Or
	var_49_float = sqrt(var_50_int); // 0x333 Sqrt2
	var_51_float = 0.0; // 0x334 PushF
	var_52_bool = var_49_float < var_51_float; // 0x335 LT
	if(var_52_bool == 0) goto Label_825; // 0x336 JumpB
	var_45_cvector = CVector(0.0, 0.0, 0.0); // 0x337 MovV
	return 2; // 0x338 Return
	
Label_825:
	var_45_cvector = var_46_cvector / var_46_cvector; // 0x339 Div2
	return 2; // 0x33a Return
}


func_1205(var_42_bool, var_43_object, var_44_int)
{
	var_45_object = Obj(); var_46_object = Obj(); var_47_int = 0; var_48_object = Obj(); var_49_object = Obj(); var_50_int = 0; // 0x4b5 PushV
	var_51_object = Obj(); // 0x4b6 PushV
	func_1192(var_51_object); // 0x4b7 NEW_2
	var_48_object = var_51_object; // 0x4b8 Mov
	Find(var_44_int, var_49_object); // 0x4ba ObjFunc
	var_56_bool = var_49_object == 0; // 0x4bc Not
	if(var_56_bool == 0) goto Label_1220; // 0x4bd JumpB
	var_57_string = "Can't find diary parent with id: "; // 0x4be PushS
	var_58_int = var_57_string + var_44_int; // 0x4bf Add
	Trace(var_58_int); // 0x4c0 Func
	var_42_bool = 0; // 0x4c2 MovB
	return 6; // 0x4c3 Return
	
Label_1220:
	AddChild(var_43_object); // 0x4c4 ObjFunc
	var_59_int = 7; // 0x4c6 PushI
	SendWorldWndMessage(var_59_int); // 0x4c7 Func
	GetCategory(var_50_int); // 0x4c9 ObjFunc
	SetDiarySection(var_50_int); // 0x4cb Func
	var_42_bool = 0; // 0x4cd MovB
	return 6; // 0x4ce Return
}


func_1082(var_158_bool)
{
	var_160_int = 0; var_161_string = ""; // 0x43b PushV
	var_161_string = "ood5Birdmask1"; // 0x43c MovS
	func_838(var_160_int, var_161_string); // 0x43d NEW_2
	var_162_int = 0; // 0x43f PushI
	var_163_bool = var_160_int == var_162_int; // 0x440 Eq
	if(var_163_bool == 0) goto Label_1092; // 0x441 JumpB
	var_158_bool = 1; // 0x442 MovB
	return 0; // 0x443 Return
	
Label_1092:
	var_158_bool = 0; // 0x444 MovB
	return 0; // 0x445 Return
}


func_827(var_153_float, var_154_float, var_155_float, var_156_float)
{
	var_157_bool = var_154_float < var_155_float; // 0x33c LT
	if(var_157_bool == 0) goto Label_832; // 0x33d JumpB
	var_153_float = var_155_float; // 0x33e Mov
	return 0; // 0x33f Return
	
Label_832:
	var_158_bool = var_154_float > var_156_float; // 0x340 GT
	if(var_158_bool == 0) goto Label_836; // 0x341 JumpB
	var_153_float = var_156_float; // 0x342 Mov
	return 0; // 0x343 Return
	
Label_836:
	var_153_float = var_154_float; // 0x344 Mov
	return 0; // 0x345 Return
}


func_956()
{
	var_63_string = "playsound"; // 0x3bd PushS
	var_64_string = "givemoney"; // 0x3be PushS
	TriggerWorld(var_63_string, var_64_string); // 0x3bf Func
	return 0; // 0x3c1 Return
}


func_962()
{
	var_192_string = "ood5Birdmask1"; // 0x3c3 PushS
	var_193_int = 1; // 0x3c4 PushI
	SetVariable(var_192_string, var_193_int); // 0x3c5 Func
	return 0; // 0x3c7 Return
}


func_1094(var_85_bool)
{
	var_87_int = 0; var_88_string = ""; // 0x447 PushV
	var_88_string = "d5q03"; // 0x448 MovS
	func_838(var_87_int, var_88_string); // 0x449 NEW_2
	var_91_int = 1; // 0x44b PushI
	var_92_bool = var_87_int == var_91_int; // 0x44c Eq
	if(var_92_bool == 0) goto Label_1104; // 0x44d JumpB
	var_85_bool = 1; // 0x44e MovB
	return 0; // 0x44f Return
	
Label_1104:
	var_85_bool = 0; // 0x450 MovB
	return 0; // 0x451 Return
}


func_838(var_87_int, var_88_string)
{
	var_89_int = 0; var_90_int = 0; // 0x346 PushV
	GetVariable(var_88_string, var_90_int); // 0x347 Func
	var_87_int = var_90_int; // 0x349 Mov
	return 2; // 0x34a Return
}


func_968()
{
	var_14_object = Obj(); var_15_object = Obj(); var_16_object = Obj(); var_17_object = Obj(); // 0x3c8 PushV
	var_18_object = Obj(); // 0x3c9 PushV
	func_1233(var_18_object); // 0x3ca NEW_2
	var_16_object = var_18_object; // 0x3cb Mov
	var_25_string = "d5q03BirdmaskBringMoneySelf"; // 0x3cd PushS
	FindMark(var_17_object, var_25_string); // 0x3ce ObjFunc
	var_26_object = var_17_object; // 0x3d0 Push
	if(var_26_object == 0) goto Label_980; // 0x3d1 JumpB
	Remove(); // 0x3d2 ObjFunc
	
Label_980:
	var_27_string = "d5q03BirdmaskGotoMladVlad"; // 0x3d4 PushS
	FindMark(var_17_object, var_27_string); // 0x3d5 ObjFunc
	var_28_object = var_17_object; // 0x3d7 Push
	if(var_28_object == 0) goto Label_987; // 0x3d8 JumpB
	Remove(); // 0x3d9 ObjFunc
	
Label_987:
	var_29_string = "d5q03BirdmaskGotoViktor"; // 0x3db PushS
	FindMark(var_17_object, var_29_string); // 0x3dc ObjFunc
	var_30_object = var_17_object; // 0x3de Push
	if(var_30_object == 0) goto Label_994; // 0x3df JumpB
	Remove(); // 0x3e0 ObjFunc
	
Label_994:
	var_31_string = "d5q03MladVladSavePrisonersSelf"; // 0x3e2 PushS
	FindMark(var_17_object, var_31_string); // 0x3e3 ObjFunc
	var_32_object = var_17_object; // 0x3e5 Push
	if(var_32_object == 0) goto Label_1001; // 0x3e6 JumpB
	Remove(); // 0x3e7 ObjFunc
	
Label_1001:
	var_33_string = "d5q03SavePrisoners"; // 0x3e9 PushS
	FindMark(var_17_object, var_33_string); // 0x3ea ObjFunc
	var_34_object = var_17_object; // 0x3ec Push
	if(var_34_object == 0) goto Label_1008; // 0x3ed JumpB
	Remove(); // 0x3ee ObjFunc
	
Label_1008:
	var_35_string = "d5q03ViktorSavePrisonersSelf"; // 0x3f0 PushS
	FindMark(var_17_object, var_35_string); // 0x3f1 ObjFunc
	var_36_object = var_17_object; // 0x3f3 Push
	if(var_36_object == 0) goto Label_1015; // 0x3f4 JumpB
	Remove(); // 0x3f5 ObjFunc
	
Label_1015:
	func_1179(); // 0x3f8 NEW_2
	var_60_int = 1; // 0x3fa PushI
	SetReturnValue(var_60_int); // 0x3fb ObjFunc
	return 4; // 0x3fd Return
}


func_201(var_2_object, var_93_string)
{
	var_94_bool = 0; // 0xca PushV
	func_1275(var_94_bool); // 0xcb NEW_2
	var_95_bool = var_94_bool == 0; // 0xcd Not
	if(var_95_bool == 0) goto Label_208; // 0xce JumpB
	return 0; // 0xcf Return
	
Label_208:
	var_96_bool = var_93_string == var_2_object; // 0xd0 Eq
	if(var_96_bool == 0) goto Label_211; // 0xd1 JumpB
	return 0; // 0xd2 Return
	
Label_211:
	var_97_string = ""; var_98_bool = 0; // 0xd3 PushV
	var_97_string = var_93_string; // 0xd4 Mov
	var_99_string = ""; // 0xd5 PushS
	var_100_bool = var_93_string == var_99_string; // 0xd6 Eq
	if(var_100_bool == 0) goto Label_218; // 0xd7 JumpB
	var_98_bool = 0; // 0xd8 MovB
	goto Label_219; // 0xd9 Jump
	
Label_219:
	func_789(var_97_string, var_98_bool); // 0xdb NEW_2
	var_2_object = var_93_string; // 0xdd TMov
	return 0; // 0xde Return
	
Label_218:
	var_98_bool = 1; // 0xda MovB
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_78_object, var_79_object)
{
	var_0_object = var_79_object; // 0x4b TMov
	var_1_object = var_78_object; // 0x4c TMov
	var_3_string = 0; // 0x4d TMovB
	var_84_int = 1; // 0x4e PushI
	if(var_84_int == 0) goto Label_171; // 0x4f JumpB
	var_85_bool = 0; var_86_object = Obj(); // 0x50 PushV
	var_86_object = var_1_object; // 0x51 MovT
	func_1094(var_86_object); // 0x52 NEW_2
	if(var_85_bool == 0) goto Label_105; // 0x54 JumpB
	var_93_string = ""; // 0x55 PushV
	var_93_string = "Neutral"; // 0x56 MovS
	func_201(var_79_object, var_93_string); // 0x57 NEW_2
	var_110_int = 512551; // 0x59 PushI
	SetMessage(var_110_int); // 0x5a TObjFunc
	ClearReplies(); // 0x5c TObjFunc
	var_111_int = 512552; // 0x5e PushI
	var_112_int = 13722; // 0x5f PushI
	var_113_int = 13721; // 0x60 PushI
	AddReply(var_111_int, var_112_int, var_113_int); // 0x61 TObjFunc
	var_114_int = 515690; // 0x63 PushI
	var_115_int = -1; // 0x64 PushI
	var_116_int = 16737; // 0x65 PushI
	AddReply(var_114_int, var_115_int, var_116_int); // 0x66 TObjFunc
	goto Label_171; // 0x68 Jump
	
Label_171:
	var_117_bool = 0; // 0xab PushV
	func_1275(var_117_bool); // 0xac NEW_2
	if(var_117_bool == 0) goto Label_186; // 0xae JumpB
	
Label_175:
	lshWaitForAnimEnd(); // 0xaf Func
	var_118_string = var_3_string; // 0xb1 PushT
	if(var_118_string == 0) goto Label_180; // 0xb2 JumpB
	goto Label_185; // 0xb3 Jump
	
Label_185:
	goto Label_200; // 0xb9 Jump
	
Label_200:
	return 0; // 0xc8 Return
	
Label_180:
	var_119_string = ""; // 0xb4 PushV
	var_119_string = var_2_object; // 0xb5 MovT
	func_773(var_119_string); // 0xb6 NEW_2
	goto Label_175; // 0xb8 Jump
	
Label_186:
	var_130_string = "all"; // 0xba PushS
	var_131_string = "idle"; // 0xbb PushS
	PlayAnimation(var_130_string, var_131_string); // 0xbc Func
	
Label_190:
	WaitForAnimEnd(); // 0xbe Func
	var_132_string = var_3_string; // 0xc0 PushT
	if(var_132_string == 0) goto Label_195; // 0xc1 JumpB
	goto Label_200; // 0xc2 Jump
	
Label_195:
	var_133_string = "all"; // 0xc3 PushS
	var_134_string = "idle"; // 0xc4 PushS
	PlayAnimation(var_133_string, var_134_string); // 0xc5 Func
	goto Label_190; // 0xc7 Jump
	
Label_105:
	var_135_string = ""; // 0x69 PushV
	var_135_string = "Neutral"; // 0x6a MovS
	func_201(var_79_object, var_135_string); // 0x6b NEW_2
	var_136_int = 512562; // 0x6d PushI
	SetMessage(var_136_int); // 0x6e TObjFunc
	ClearReplies(); // 0x70 TObjFunc
	var_137_bool = 0; // 0x72 PushV
	var_137_bool = 0; // 0x73 MovB
	var_138_bool = 0; var_139_object = Obj(); // 0x74 PushV
	var_139_object = var_1_object; // 0x75 MovT
	func_1130(var_139_object); // 0x76 NEW_2
	if(var_138_bool == 0) goto Label_127; // 0x78 JumpB
	var_144_bool = 0; var_145_object = Obj(); // 0x79 PushV
	var_145_object = var_1_object; // 0x7a MovT
	func_1072(var_144_bool, var_145_object); // 0x7b NEW_2
	if(var_144_bool == 0) goto Label_127; // 0x7d JumpB
	var_137_bool = 1; // 0x7e MovB
	
Label_127:
	if(var_137_bool == 0) goto Label_133; // 0x7f JumpB
	var_153_int = 512563; // 0x80 PushI
	var_154_int = 13734; // 0x81 PushI
	var_155_int = 13732; // 0x82 PushI
	AddReply(var_153_int, var_154_int, var_155_int); // 0x83 TObjFunc
	
Label_133:
	var_156_bool = 0; // 0x85 PushV
	var_156_bool = 0; // 0x86 MovB
	var_157_bool = 0; // 0x87 PushV
	var_157_bool = 0; // 0x88 MovB
	var_158_bool = 0; var_159_object = Obj(); // 0x89 PushV
	var_159_object = var_1_object; // 0x8a MovT
	func_1082(var_159_object); // 0x8b NEW_2
	if(var_158_bool == 0) goto Label_149; // 0x8d JumpB
	var_164_bool = 0; var_165_object = Obj(); // 0x8e PushV
	var_165_object = var_1_object; // 0x8f MovT
	func_1106(var_165_object); // 0x90 NEW_2
	var_170_bool = var_164_bool == 0; // 0x92 Not
	if(var_170_bool == 0) goto Label_149; // 0x93 JumpB
	var_157_bool = 1; // 0x94 MovB
	
Label_149:
	if(var_157_bool == 0) goto Label_157; // 0x95 JumpB
	var_171_bool = 0; var_172_object = Obj(); // 0x96 PushV
	var_172_object = var_1_object; // 0x97 MovT
	func_1118(var_172_object); // 0x98 NEW_2
	var_177_bool = var_171_bool == 0; // 0x9a Not
	if(var_177_bool == 0) goto Label_157; // 0x9b JumpB
	var_156_bool = 1; // 0x9c MovB
	
Label_157:
	if(var_156_bool == 0) goto Label_163; // 0x9d JumpB
	var_178_int = 512567; // 0x9e PushI
	var_179_int = 13737; // 0x9f PushI
	var_180_int = 13736; // 0xa0 PushI
	AddReply(var_178_int, var_179_int, var_180_int); // 0xa1 TObjFunc
	
Label_163:
	var_181_int = 512564; // 0xa3 PushI
	var_182_int = -1; // 0xa4 PushI
	var_183_int = 13733; // 0xa5 PushI
	AddReply(var_181_int, var_182_int, var_183_int); // 0xa6 TObjFunc
	goto Label_171; // 0xa8 Jump
}


func_843(var_81_int, var_82_int)
{
	var_83_object = Obj(); var_84_object = Obj(); // 0x34b PushV
	CreateIntVector(var_84_object); // 0x34c Func
	add(var_81_int); // 0x34e ObjFunc
	add(var_82_int); // 0x350 ObjFunc
	var_85_int = 3; // 0x352 PushI
	SendWorldWndMessage(var_85_int, var_84_object); // 0x353 Func
	return 2; // 0x355 Return
}


func_1233(var_18_object)
{
	var_19_object = Obj(); var_20_object = Obj(); var_21_object = Obj(); var_22_object = Obj(); // 0x4d1 PushV
	GetMainOutdoorScene(var_21_object); // 0x4d2 Func
	var_23_bool = var_21_object == 0; // 0x4d4 NullEq
	if(var_23_bool == 0) goto Label_1244; // 0x4d5 JumpB
	var_24_string = "Can't find main outdoor scene"; // 0x4d6 PushS
	Trace(var_24_string); // 0x4d7 Func
	var_22_object = 0; // 0x4d9 SetNull
	var_18_object = var_22_object; // 0x4da Mov
	return 4; // 0x4db Return
	
Label_1244:
	GetMap(var_22_object); // 0x4dc ObjFunc
	var_18_object = var_22_object; // 0x4de Mov
	return 4; // 0x4df Return
}


func_1106(var_164_bool)
{
	var_166_int = 0; var_167_string = ""; // 0x453 PushV
	var_167_string = "d5q03"; // 0x454 MovS
	func_838(var_166_int, var_167_string); // 0x455 NEW_2
	var_168_int = 1000; // 0x457 PushI
	var_169_bool = var_166_int == var_168_int; // 0x458 Eq
	if(var_169_bool == 0) goto Label_1116; // 0x459 JumpB
	var_164_bool = 1; // 0x45a MovB
	return 0; // 0x45b Return
	
Label_1116:
	var_164_bool = 0; // 0x45c MovB
	return 0; // 0x45d Return
}


func_855(var_68_object, var_69_int)
{
	var_70_int = 0; var_71_int = 0; // 0x357 PushV
	var_72_object = Obj(); var_73_string = ""; var_74_int = 0; // 0x358 PushV
	var_72_object = var_68_object; // 0x359 Mov
	var_73_string = "money"; // 0x35a MovS
	var_74_int = var_69_int; // 0x35b Mov
	func_681(var_73_string, var_74_int); // 0x35c NEW_2
	var_78_int = 0; // 0x35e PushI
	var_79_bool = var_69_int > var_78_int; // 0x35f GT
	if(var_79_bool == 0) goto Label_873; // 0x360 JumpB
	var_80_string = "Money"; // 0x361 PushS
	GetInvItemByName(var_71_int, var_80_string); // 0x362 Func
	var_81_int = 0; var_82_int = 0; // 0x364 PushV
	var_81_int = var_71_int; // 0x365 Mov
	var_82_int = var_69_int; // 0x366 Mov
	func_843(var_81_int, var_82_int); // 0x367 NEW_2
	
Label_873:
	return 2; // 0x369 Return
}


func_1118(var_171_bool)
{
	var_173_int = 0; var_174_string = ""; // 0x45f PushV
	var_174_string = "d5q03"; // 0x460 MovS
	func_838(var_173_int, var_174_string); // 0x461 NEW_2
	var_175_int = -1; // 0x463 PushI
	var_176_bool = var_173_int == var_175_int; // 0x464 Eq
	if(var_176_bool == 0) goto Label_1128; // 0x465 JumpB
	var_171_bool = 1; // 0x466 MovB
	return 0; // 0x467 Return
	
Label_1128:
	var_171_bool = 0; // 0x468 MovB
	return 0; // 0x469 Return
}


func_1250(var_69_int)
{
	var_70_int = 0; var_71_int = 0; // 0x4e2 PushV
	var_72_string = "branch"; // 0x4e3 PushS
	GetVariable(var_72_string, var_71_int); // 0x4e4 Func
	var_73_int = 0; // 0x4e6 PushI
	var_74_bool = var_71_int == var_73_int; // 0x4e7 Eq
	if(var_74_bool == 0) goto Label_1260; // 0x4e8 JumpB
	var_69_int = 1; // 0x4e9 MovI
	return 2; // 0x4ea Return
	
Label_1260:
	var_75_int = 1; // 0x4ec PushI
	var_76_bool = var_71_int == var_75_int; // 0x4ed Eq
	if(var_76_bool == 0) goto Label_1265; // 0x4ee JumpB
	var_69_int = 2; // 0x4ef MovI
	return 2; // 0x4f0 Return
	
Label_1265:
	var_69_int = 3; // 0x4f1 MovI
	return 2; // 0x4f2 Return
}


func_1130(var_138_bool)
{
	var_140_int = 0; var_141_string = ""; // 0x46b PushV
	var_141_string = "d5q03"; // 0x46c MovS
	func_838(var_140_int, var_141_string); // 0x46d NEW_2
	var_142_int = 2; // 0x46f PushI
	var_143_bool = var_140_int == var_142_int; // 0x470 Eq
	if(var_143_bool == 0) goto Label_1140; // 0x471 JumpB
	var_138_bool = 1; // 0x472 MovB
	return 0; // 0x473 Return
	
Label_1140:
	var_138_bool = 0; // 0x474 MovB
	return 0; // 0x475 Return
}


func_874(var_124_bool, var_125_object, var_126_float)
{
	var_127_bool = var_125_object == 0; // 0x36b Not
	if(var_127_bool == 0) goto Label_879; // 0x36c JumpB
	var_124_bool = 0; // 0x36d MovB
	return 0; // 0x36e Return
	
Label_879:
	var_128_int = 0; // 0x36f PushI
	var_129_bool = var_126_float > var_128_int; // 0x370 GT
	if(var_129_bool == 0) goto Label_886; // 0x371 JumpB
	var_130_int = 8; // 0x372 PushI
	SendWorldWndMessage(var_130_int); // 0x373 Func
	goto Label_895; // 0x375 Jump
	
Label_895:
	var_131_float = 0; // 0x37f PushV
	var_131_float = var_126_float; // 0x380 Mov
	func_909(var_131_float); // 0x381 NEW_2
	var_135_bool = 0; var_136_object = Obj(); var_137_string = ""; var_138_float = 0; var_139_float = 0; var_140_float = 0; // 0x383 PushV
	var_136_object = var_125_object; // 0x384 Mov
	var_137_string = "reputation"; // 0x385 MovS
	var_138_float = var_126_float; // 0x386 Mov
	var_139_float = 0; // 0x387 MovI
	var_140_float = 1; // 0x388 MovI
	func_659(var_135_bool, var_136_object, var_137_string, var_138_float, var_139_float, var_140_float); // 0x389 NEW_2
	var_124_bool = 1; // 0x38b MovB
	return 0; // 0x38c Return
	
Label_886:
	var_159_int = 0; // 0x376 PushI
	var_160_bool = var_126_float < var_159_int; // 0x377 LT
	if(var_160_bool == 0) goto Label_893; // 0x378 JumpB
	var_161_int = 9; // 0x379 PushI
	SendWorldWndMessage(var_161_int); // 0x37a Func
	goto Label_895; // 0x37c Jump
	
Label_893:
	var_124_bool = 0; // 0x37d MovB
	return 0; // 0x37e Return
}


func_1267(var_66_int)
{
	var_66_int = 515571; // 0x4f3 MovI
	return 0; // 0x4f4 Return
}


func_756()
{
	var_186_bool = 0; var_187_bool = 0; // 0x2f4 PushV
	CameraSwitchToNormal(); // 0x2f5 Func
	var_188_bool = 0; // 0x2f7 PushV
	func_1275(var_188_bool); // 0x2f8 NEW_2
	if(var_188_bool == 0) goto Label_764; // 0x2fa JumpB
	goto Label_772; // 0x2fb Jump
	
Label_772:
	return 2; // 0x304 Return
	
Label_764:
	var_189_string = "head"; // 0x2fc PushS
	HasAnimationTrack(var_187_bool, var_189_string); // 0x2fd Func
	var_190_bool = var_187_bool; // 0x2ff Push
	if(var_190_bool == 0) goto Label_772; // 0x300 JumpB
	var_191_string = "head"; // 0x301 PushS
	UnlookAsync(var_191_string); // 0x302 Func
}


func_1269(var_65_int)
{
	var_65_int = 504029; // 0x4f5 MovI
	return 0; // 0x4f6 Return
}


func_1142(var_146_bool)
{
	var_148_float = 0; var_149_float = 0; // 0x476 PushV
	var_150_string = "money"; // 0x477 PushS
	GetProperty(var_150_string, var_149_float); // 0x478 ObjFunc
	var_151_int = 60000; // 0x47a PushI
	var_152_bool = var_149_float >= var_151_int; // 0x47b GE
	if(var_152_bool == 0) goto Label_1151; // 0x47c JumpB
	var_146_bool = 1; // 0x47d MovB
	return 2; // 0x47e Return
	
Label_1151:
	var_146_bool = 0; // 0x47f MovB
	return 2; // 0x480 Return
}


func_1271(var_67_string)
{
	var_67_string = "ui/NPC_bmask.png"; // 0x4f7 MovS
	return 0; // 0x4f8 Return
}


func_1273(var_68_string)
{
	var_68_string = "ui/NPC_bmask_b.png"; // 0x4f9 MovS
	return 0; // 0x4fa Return
}


func_1275(var_60_bool)
{
	var_60_bool = 0; // 0x4fb MovB
	return 0; // 0x4fc Return
}


