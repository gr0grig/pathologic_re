task_0_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool)
{
	StopGroup0(); // 0x3 Func
	return 0; // 0x5 Return
}


task_1_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool)
{
	TaskCall(0); // 0x1e TaskCall
	func_0(); // 0x1f Call
	TaskReturn(); // 0x20 TaskReturn
	return 0; // 0x22 Return
}


task_1_event_0(var_0_object, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool)
{
	var_26_object = Obj(); // 0x24 PushV
	var_26_object = var_25_bool; // 0x25 Mov
	func_5892(var_26_object); // 0x26 Call
	return 0; // 0x28 Return
}


task_1_event_10(var_0_object, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool)
{
	var_26_bool = 0; var_27_object = Obj(); // 0x2a PushV
	var_27_object = var_25_bool; // 0x2b Mov
	func_4743(var_27_object); // 0x2c Call
	WaitForAnimEnd(); // 0x2e Func
	return 0; // 0x30 Return
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool)
{
	var_27_int = 1; // 0x15c PushI
	if(var_27_int == 0) goto Label_1865; // 0x15d JumpB
	func_4838(); // 0x15f Call
	var_29_int = 14281; // 0x161 PushI
	var_30_bool = var_26_bool == var_29_int; // 0x162 Eq
	if(var_30_bool == 0) goto Label_361; // 0x163 JumpB
	var_31_object = Obj(); var_32_object = Obj(); // 0x164 PushV
	var_31_object = var_1_object; // 0x165 MovT
	var_32_object = var_0_object; // 0x166 MovT
	func_4920(); // 0x167 Call
	
Label_361:
	var_35_int = 14282; // 0x169 PushI
	var_36_bool = var_26_bool == var_35_int; // 0x16a Eq
	if(var_36_bool == 0) goto Label_369; // 0x16b JumpB
	var_37_object = Obj(); var_38_object = Obj(); // 0x16c PushV
	var_37_object = var_1_object; // 0x16d MovT
	var_38_object = var_0_object; // 0x16e MovT
	func_4920(); // 0x16f Call
	
Label_369:
	var_39_int = 14283; // 0x171 PushI
	var_40_bool = var_26_bool == var_39_int; // 0x172 Eq
	if(var_40_bool == 0) goto Label_377; // 0x173 JumpB
	var_41_object = Obj(); var_42_object = Obj(); // 0x174 PushV
	var_41_object = var_1_object; // 0x175 MovT
	var_42_object = var_0_object; // 0x176 MovT
	func_4920(); // 0x177 Call
	
Label_377:
	var_43_int = 14558; // 0x179 PushI
	var_44_bool = var_26_bool == var_43_int; // 0x17a Eq
	if(var_44_bool == 0) goto Label_385; // 0x17b JumpB
	var_45_object = Obj(); var_46_object = Obj(); // 0x17c PushV
	var_45_object = var_1_object; // 0x17d MovT
	var_46_object = var_0_object; // 0x17e MovT
	func_4926(); // 0x17f Call
	
Label_385:
	var_49_int = 14343; // 0x181 PushI
	var_50_bool = var_26_bool == var_49_int; // 0x182 Eq
	if(var_50_bool == 0) goto Label_393; // 0x183 JumpB
	var_51_object = Obj(); var_52_object = Obj(); // 0x184 PushV
	var_51_object = var_1_object; // 0x185 MovT
	var_52_object = var_0_object; // 0x186 MovT
	func_4932(); // 0x187 Call
	
Label_393:
	var_126_int = 14363; // 0x189 PushI
	var_127_bool = var_26_bool == var_126_int; // 0x18a Eq
	if(var_127_bool == 0) goto Label_401; // 0x18b JumpB
	var_128_object = Obj(); var_129_object = Obj(); // 0x18c PushV
	var_128_object = var_1_object; // 0x18d MovT
	var_129_object = var_0_object; // 0x18e MovT
	func_5043(); // 0x18f Call
	
Label_401:
	var_157_int = 14391; // 0x191 PushI
	var_158_bool = var_26_bool == var_157_int; // 0x192 Eq
	if(var_158_bool == 0) goto Label_419; // 0x193 JumpB
	var_159_object = Obj(); var_160_object = Obj(); // 0x194 PushV
	var_159_object = var_1_object; // 0x195 MovT
	var_160_object = var_0_object; // 0x196 MovT
	func_4996(); // 0x197 Call
	var_188_object = Obj(); var_189_object = Obj(); // 0x199 PushV
	var_188_object = var_1_object; // 0x19a MovT
	var_189_object = var_0_object; // 0x19b MovT
	func_5037(); // 0x19c Call
	var_192_object = Obj(); var_193_object = Obj(); // 0x19e PushV
	var_192_object = var_1_object; // 0x19f MovT
	var_193_object = var_0_object; // 0x1a0 MovT
	func_4914(); // 0x1a1 Call
	
Label_419:
	var_196_int = 14394; // 0x1a3 PushI
	var_197_bool = var_26_bool == var_196_int; // 0x1a4 Eq
	if(var_197_bool == 0) goto Label_437; // 0x1a5 JumpB
	var_198_object = Obj(); var_199_object = Obj(); // 0x1a6 PushV
	var_198_object = var_1_object; // 0x1a7 MovT
	var_199_object = var_0_object; // 0x1a8 MovT
	func_4996(); // 0x1a9 Call
	var_200_object = Obj(); var_201_object = Obj(); // 0x1ab PushV
	var_200_object = var_1_object; // 0x1ac MovT
	var_201_object = var_0_object; // 0x1ad MovT
	func_5037(); // 0x1ae Call
	var_202_object = Obj(); var_203_object = Obj(); // 0x1b0 PushV
	var_202_object = var_1_object; // 0x1b1 MovT
	var_203_object = var_0_object; // 0x1b2 MovT
	func_4914(); // 0x1b3 Call
	
Label_437:
	var_204_int = 14389; // 0x1b5 PushI
	var_205_bool = var_26_bool == var_204_int; // 0x1b6 Eq
	if(var_205_bool == 0) goto Label_455; // 0x1b7 JumpB
	var_206_object = Obj(); var_207_object = Obj(); // 0x1b8 PushV
	var_206_object = var_1_object; // 0x1b9 MovT
	var_207_object = var_0_object; // 0x1ba MovT
	func_4996(); // 0x1bb Call
	var_208_object = Obj(); var_209_object = Obj(); // 0x1bd PushV
	var_208_object = var_1_object; // 0x1be MovT
	var_209_object = var_0_object; // 0x1bf MovT
	func_5037(); // 0x1c0 Call
	var_210_object = Obj(); var_211_object = Obj(); // 0x1c2 PushV
	var_210_object = var_1_object; // 0x1c3 MovT
	var_211_object = var_0_object; // 0x1c4 MovT
	func_4914(); // 0x1c5 Call
	
Label_455:
	var_212_int = 14344; // 0x1c7 PushI
	var_213_bool = var_26_bool == var_212_int; // 0x1c8 Eq
	if(var_213_bool == 0) goto Label_463; // 0x1c9 JumpB
	var_214_object = Obj(); var_215_object = Obj(); // 0x1ca PushV
	var_214_object = var_1_object; // 0x1cb MovT
	var_215_object = var_0_object; // 0x1cc MovT
	func_5031(); // 0x1cd Call
	
Label_463:
	var_218_int = 14242; // 0x1cf PushI
	var_219_bool = var_26_bool == var_218_int; // 0x1d0 Eq
	if(var_219_bool == 0) goto Label_471; // 0x1d1 JumpB
	var_220_object = Obj(); var_221_object = Obj(); // 0x1d2 PushV
	var_220_object = var_1_object; // 0x1d3 MovT
	var_221_object = var_0_object; // 0x1d4 MovT
	func_4990(); // 0x1d5 Call
	
Label_471:
	var_224_int = 14623; // 0x1d7 PushI
	var_225_bool = var_26_bool == var_224_int; // 0x1d8 Eq
	if(var_225_bool == 0) goto Label_479; // 0x1d9 JumpB
	var_226_object = Obj(); var_227_object = Obj(); // 0x1da PushV
	var_226_object = var_1_object; // 0x1db MovT
	var_227_object = var_0_object; // 0x1dc MovT
	func_5094(); // 0x1dd Call
	
Label_479:
	var_230_int = 13340; // 0x1df PushI
	var_231_bool = var_25_string == var_230_int; // 0x1e0 Eq
	if(var_231_bool == 0) goto Label_663; // 0x1e1 JumpB
	var_232_bool = 0; // 0x1e2 PushV
	var_232_bool = 0; // 0x1e3 MovB
	var_233_bool = 0; var_234_object = Obj(); // 0x1e4 PushV
	var_234_object = var_1_object; // 0x1e5 MovT
	func_5286(var_234_object); // 0x1e6 Call
	if(var_233_bool == 0) goto Label_495; // 0x1e8 JumpB
	var_241_bool = 0; var_242_object = Obj(); // 0x1e9 PushV
	var_242_object = var_1_object; // 0x1ea MovT
	func_5276(var_241_bool, var_242_object); // 0x1eb Call
	if(var_241_bool == 0) goto Label_495; // 0x1ed JumpB
	var_232_bool = 1; // 0x1ee MovB
	
Label_495:
	if(var_232_bool == 0) goto Label_516; // 0x1ef JumpB
	var_245_string = ""; // 0x1f0 PushV
	var_245_string = "Neutral"; // 0x1f1 MovS
	func_331(var_26_bool, var_245_string); // 0x1f2 Call
	var_260_int = 12185; // 0x1f4 PushI
	SetMessage(var_260_int); // 0x1f5 TObjFunc
	ClearReplies(); // 0x1f7 TObjFunc
	var_261_int = 12186; // 0x1f9 PushI
	var_262_int = 14254; // 0x1fa PushI
	var_263_int = 13341; // 0x1fb PushI
	AddReply(var_261_int, var_262_int, var_263_int); // 0x1fc TObjFunc
	var_264_int = 13037; // 0x1fe PushI
	var_265_int = 14245; // 0x1ff PushI
	var_266_int = 14244; // 0x200 PushI
	AddReply(var_264_int, var_265_int, var_266_int); // 0x201 TObjFunc
	return 0; // 0x203 Return
	
Label_516:
	var_267_bool = 0; // 0x204 PushV
	var_267_bool = 0; // 0x205 MovB
	var_268_bool = 0; var_269_object = Obj(); // 0x206 PushV
	var_269_object = var_1_object; // 0x207 MovT
	func_5298(var_269_object); // 0x208 Call
	if(var_268_bool == 0) goto Label_529; // 0x20a JumpB
	var_274_bool = 0; var_275_object = Obj(); // 0x20b PushV
	var_275_object = var_1_object; // 0x20c MovT
	func_5276(var_274_bool, var_275_object); // 0x20d Call
	if(var_274_bool == 0) goto Label_529; // 0x20f JumpB
	var_267_bool = 1; // 0x210 MovB
	
Label_529:
	if(var_267_bool == 0) goto Label_545; // 0x211 JumpB
	var_276_string = ""; // 0x212 PushV
	var_276_string = "Neutral"; // 0x213 MovS
	func_331(var_26_bool, var_276_string); // 0x214 Call
	var_277_int = 13033; // 0x216 PushI
	SetMessage(var_277_int); // 0x217 TObjFunc
	ClearReplies(); // 0x219 TObjFunc
	var_278_int = 13034; // 0x21b PushI
	var_279_int = 14260; // 0x21c PushI
	var_280_int = 14241; // 0x21d PushI
	AddReply(var_278_int, var_279_int, var_280_int); // 0x21e TObjFunc
	return 0; // 0x220 Return
	
Label_545:
	var_281_bool = 0; var_282_object = Obj(); // 0x221 PushV
	var_282_object = var_1_object; // 0x222 MovT
	func_5310(var_282_object); // 0x223 Call
	if(var_281_bool == 0) goto Label_570; // 0x225 JumpB
	var_287_string = ""; // 0x226 PushV
	var_287_string = "Neutral"; // 0x227 MovS
	func_331(var_26_bool, var_287_string); // 0x228 Call
	var_288_int = 13074; // 0x22a PushI
	SetMessage(var_288_int); // 0x22b TObjFunc
	ClearReplies(); // 0x22d TObjFunc
	var_289_int = 13076; // 0x22f PushI
	var_290_int = 14287; // 0x230 PushI
	var_291_int = 14286; // 0x231 PushI
	AddReply(var_289_int, var_290_int, var_291_int); // 0x232 TObjFunc
	var_292_int = 13117; // 0x234 PushI
	var_293_int = 14336; // 0x235 PushI
	var_294_int = 14335; // 0x236 PushI
	AddReply(var_292_int, var_293_int, var_294_int); // 0x237 TObjFunc
	return 0; // 0x239 Return
	
Label_570:
	var_295_string = ""; // 0x23a PushV
	var_295_string = "Neutral"; // 0x23b MovS
	func_331(var_26_bool, var_295_string); // 0x23c Call
	var_296_int = 13031; // 0x23e PushI
	SetMessage(var_296_int); // 0x23f TObjFunc
	ClearReplies(); // 0x241 TObjFunc
	var_297_bool = 0; var_298_object = Obj(); // 0x243 PushV
	var_298_object = var_1_object; // 0x244 MovT
	func_5401(var_298_object); // 0x245 Call
	if(var_297_bool == 0) goto Label_589; // 0x247 JumpB
	var_303_int = 13141; // 0x248 PushI
	var_304_int = 14362; // 0x249 PushI
	var_305_int = 14360; // 0x24a PushI
	AddReply(var_303_int, var_304_int, var_305_int); // 0x24b TObjFunc
	
Label_589:
	var_306_bool = 0; // 0x24d PushV
	var_306_bool = 0; // 0x24e MovB
	var_307_bool = 0; var_308_object = Obj(); // 0x24f PushV
	var_308_object = var_1_object; // 0x250 MovT
	func_5358(var_307_bool, var_308_object); // 0x251 Call
	if(var_307_bool == 0) goto Label_602; // 0x253 JumpB
	var_324_bool = 0; var_325_object = Obj(); // 0x254 PushV
	var_325_object = var_1_object; // 0x255 MovT
	func_5389(var_325_object); // 0x256 Call
	if(var_324_bool == 0) goto Label_602; // 0x258 JumpB
	var_306_bool = 1; // 0x259 MovB
	
Label_602:
	if(var_306_bool == 0) goto Label_608; // 0x25a JumpB
	var_330_int = 13075; // 0x25b PushI
	var_331_int = 14369; // 0x25c PushI
	var_332_int = 14285; // 0x25d PushI
	AddReply(var_330_int, var_331_int, var_332_int); // 0x25e TObjFunc
	
Label_608:
	var_333_bool = 0; // 0x260 PushV
	var_333_bool = 0; // 0x261 MovB
	var_334_bool = 0; var_335_object = Obj(); // 0x262 PushV
	var_335_object = var_1_object; // 0x263 MovT
	func_5334(var_335_object); // 0x264 Call
	if(var_334_bool == 0) goto Label_621; // 0x266 JumpB
	var_340_bool = 0; var_341_object = Obj(); // 0x267 PushV
	var_341_object = var_1_object; // 0x268 MovT
	func_5346(var_341_object); // 0x269 Call
	if(var_340_bool == 0) goto Label_621; // 0x26b JumpB
	var_333_bool = 1; // 0x26c MovB
	
Label_621:
	if(var_333_bool == 0) goto Label_627; // 0x26d JumpB
	var_346_int = 13125; // 0x26e PushI
	var_347_int = 14345; // 0x26f PushI
	var_348_int = 14344; // 0x270 PushI
	AddReply(var_346_int, var_347_int, var_348_int); // 0x271 TObjFunc
	
Label_627:
	var_349_bool = 0; var_350_object = Obj(); // 0x273 PushV
	var_350_object = var_1_object; // 0x274 MovT
	func_5322(var_350_object); // 0x275 Call
	if(var_349_bool == 0) goto Label_637; // 0x277 JumpB
	var_355_int = 13035; // 0x278 PushI
	var_356_int = 14243; // 0x279 PushI
	var_357_int = 14242; // 0x27a PushI
	AddReply(var_355_int, var_356_int, var_357_int); // 0x27b TObjFunc
	
Label_637:
	var_358_bool = 0; var_359_object = Obj(); // 0x27d PushV
	var_359_object = var_1_object; // 0x27e MovT
	func_5276(var_358_bool, var_359_object); // 0x27f Call
	if(var_358_bool == 0) goto Label_647; // 0x281 JumpB
	var_360_int = 13142; // 0x282 PushI
	var_361_int = 14364; // 0x283 PushI
	var_362_int = 14361; // 0x284 PushI
	AddReply(var_360_int, var_361_int, var_362_int); // 0x285 TObjFunc
	
Label_647:
	var_363_bool = 0; var_364_object = Obj(); // 0x287 PushV
	var_364_object = var_1_object; // 0x288 MovT
	func_5413(var_364_object); // 0x289 Call
	if(var_363_bool == 0) goto Label_657; // 0x28b JumpB
	var_369_int = 13377; // 0x28c PushI
	var_370_int = 14610; // 0x28d PushI
	var_371_int = 14609; // 0x28e PushI
	AddReply(var_369_int, var_370_int, var_371_int); // 0x28f TObjFunc
	
Label_657:
	var_372_int = 13032; // 0x291 PushI
	var_373_int = -1; // 0x292 PushI
	var_374_int = 14239; // 0x293 PushI
	AddReply(var_372_int, var_373_int, var_374_int); // 0x294 TObjFunc
	return 0; // 0x296 Return
	
Label_663:
	var_375_int = 14610; // 0x297 PushI
	var_376_bool = var_25_string == var_375_int; // 0x298 Eq
	if(var_376_bool == 0) goto Label_681; // 0x299 JumpB
	var_377_string = ""; // 0x29a PushV
	var_377_string = "Neutral"; // 0x29b MovS
	func_331(var_26_bool, var_377_string); // 0x29c Call
	var_378_int = 13378; // 0x29e PushI
	SetMessage(var_378_int); // 0x29f TObjFunc
	ClearReplies(); // 0x2a1 TObjFunc
	var_379_int = 13379; // 0x2a3 PushI
	var_380_int = 14612; // 0x2a4 PushI
	var_381_int = 14611; // 0x2a5 PushI
	AddReply(var_379_int, var_380_int, var_381_int); // 0x2a6 TObjFunc
	return 0; // 0x2a8 Return
	
Label_681:
	var_382_int = 14612; // 0x2a9 PushI
	var_383_bool = var_25_string == var_382_int; // 0x2aa Eq
	if(var_383_bool == 0) goto Label_709; // 0x2ab JumpB
	var_384_string = ""; // 0x2ac PushV
	var_384_string = "Neutral"; // 0x2ad MovS
	func_331(var_26_bool, var_384_string); // 0x2ae Call
	var_385_int = 13380; // 0x2b0 PushI
	SetMessage(var_385_int); // 0x2b1 TObjFunc
	ClearReplies(); // 0x2b3 TObjFunc
	var_386_int = 13381; // 0x2b5 PushI
	var_387_int = 14619; // 0x2b6 PushI
	var_388_int = 14613; // 0x2b7 PushI
	AddReply(var_386_int, var_387_int, var_388_int); // 0x2b8 TObjFunc
	var_389_int = 13382; // 0x2ba PushI
	var_390_int = 14616; // 0x2bb PushI
	var_391_int = 14614; // 0x2bc PushI
	AddReply(var_389_int, var_390_int, var_391_int); // 0x2bd TObjFunc
	var_392_int = 13383; // 0x2bf PushI
	var_393_int = 14616; // 0x2c0 PushI
	var_394_int = 14615; // 0x2c1 PushI
	AddReply(var_392_int, var_393_int, var_394_int); // 0x2c2 TObjFunc
	return 0; // 0x2c4 Return
	
Label_709:
	var_395_int = 14616; // 0x2c5 PushI
	var_396_bool = var_25_string == var_395_int; // 0x2c6 Eq
	if(var_396_bool == 0) goto Label_727; // 0x2c7 JumpB
	var_397_string = ""; // 0x2c8 PushV
	var_397_string = "Neutral"; // 0x2c9 MovS
	func_331(var_26_bool, var_397_string); // 0x2ca Call
	var_398_int = 13384; // 0x2cc PushI
	SetMessage(var_398_int); // 0x2cd TObjFunc
	ClearReplies(); // 0x2cf TObjFunc
	var_399_int = 13385; // 0x2d1 PushI
	var_400_int = 14619; // 0x2d2 PushI
	var_401_int = 14618; // 0x2d3 PushI
	AddReply(var_399_int, var_400_int, var_401_int); // 0x2d4 TObjFunc
	return 0; // 0x2d6 Return
	
Label_727:
	var_402_int = 14619; // 0x2d7 PushI
	var_403_bool = var_25_string == var_402_int; // 0x2d8 Eq
	if(var_403_bool == 0) goto Label_745; // 0x2d9 JumpB
	var_404_string = ""; // 0x2da PushV
	var_404_string = "Neutral"; // 0x2db MovS
	func_331(var_26_bool, var_404_string); // 0x2dc Call
	var_405_int = 13386; // 0x2de PushI
	SetMessage(var_405_int); // 0x2df TObjFunc
	ClearReplies(); // 0x2e1 TObjFunc
	var_406_int = 13387; // 0x2e3 PushI
	var_407_int = 14622; // 0x2e4 PushI
	var_408_int = 14620; // 0x2e5 PushI
	AddReply(var_406_int, var_407_int, var_408_int); // 0x2e6 TObjFunc
	return 0; // 0x2e8 Return
	
Label_745:
	var_409_int = 14622; // 0x2e9 PushI
	var_410_bool = var_25_string == var_409_int; // 0x2ea Eq
	if(var_410_bool == 0) goto Label_763; // 0x2eb JumpB
	var_411_string = ""; // 0x2ec PushV
	var_411_string = "Neutral"; // 0x2ed MovS
	func_331(var_26_bool, var_411_string); // 0x2ee Call
	var_412_int = 13388; // 0x2f0 PushI
	SetMessage(var_412_int); // 0x2f1 TObjFunc
	ClearReplies(); // 0x2f3 TObjFunc
	var_413_int = 13389; // 0x2f5 PushI
	var_414_int = -1; // 0x2f6 PushI
	var_415_int = 14623; // 0x2f7 PushI
	AddReply(var_413_int, var_414_int, var_415_int); // 0x2f8 TObjFunc
	return 0; // 0x2fa Return
	
Label_763:
	var_416_int = 14364; // 0x2fb PushI
	var_417_bool = var_25_string == var_416_int; // 0x2fc Eq
	if(var_417_bool == 0) goto Label_786; // 0x2fd JumpB
	var_418_string = ""; // 0x2fe PushV
	var_418_string = "Neutral"; // 0x2ff MovS
	func_331(var_26_bool, var_418_string); // 0x300 Call
	var_419_int = 13145; // 0x302 PushI
	SetMessage(var_419_int); // 0x303 TObjFunc
	ClearReplies(); // 0x305 TObjFunc
	var_420_int = 13147; // 0x307 PushI
	var_421_int = 14367; // 0x308 PushI
	var_422_int = 14366; // 0x309 PushI
	AddReply(var_420_int, var_421_int, var_422_int); // 0x30a TObjFunc
	var_423_int = 13146; // 0x30c PushI
	var_424_int = -1; // 0x30d PushI
	var_425_int = 14365; // 0x30e PushI
	AddReply(var_423_int, var_424_int, var_425_int); // 0x30f TObjFunc
	return 0; // 0x311 Return
	
Label_786:
	var_426_int = 14367; // 0x312 PushI
	var_427_bool = var_25_string == var_426_int; // 0x313 Eq
	if(var_427_bool == 0) goto Label_804; // 0x314 JumpB
	var_428_string = ""; // 0x315 PushV
	var_428_string = "Neutral"; // 0x316 MovS
	func_331(var_26_bool, var_428_string); // 0x317 Call
	var_429_int = 13148; // 0x319 PushI
	SetMessage(var_429_int); // 0x31a TObjFunc
	ClearReplies(); // 0x31c TObjFunc
	var_430_int = 13149; // 0x31e PushI
	var_431_int = -1; // 0x31f PushI
	var_432_int = 14368; // 0x320 PushI
	AddReply(var_430_int, var_431_int, var_432_int); // 0x321 TObjFunc
	return 0; // 0x323 Return
	
Label_804:
	var_433_int = 14243; // 0x324 PushI
	var_434_bool = var_25_string == var_433_int; // 0x325 Eq
	if(var_434_bool == 0) goto Label_827; // 0x326 JumpB
	var_435_string = ""; // 0x327 PushV
	var_435_string = "Neutral"; // 0x328 MovS
	func_331(var_26_bool, var_435_string); // 0x329 Call
	var_436_int = 13036; // 0x32b PushI
	SetMessage(var_436_int); // 0x32c TObjFunc
	ClearReplies(); // 0x32e TObjFunc
	var_437_int = 13134; // 0x330 PushI
	var_438_int = 14354; // 0x331 PushI
	var_439_int = 14353; // 0x332 PushI
	AddReply(var_437_int, var_438_int, var_439_int); // 0x333 TObjFunc
	var_440_int = 13136; // 0x335 PushI
	var_441_int = 14358; // 0x336 PushI
	var_442_int = 14355; // 0x337 PushI
	AddReply(var_440_int, var_441_int, var_442_int); // 0x338 TObjFunc
	return 0; // 0x33a Return
	
Label_827:
	var_443_int = 14358; // 0x33b PushI
	var_444_bool = var_25_string == var_443_int; // 0x33c Eq
	if(var_444_bool == 0) goto Label_845; // 0x33d JumpB
	var_445_string = ""; // 0x33e PushV
	var_445_string = "Neutral"; // 0x33f MovS
	func_331(var_26_bool, var_445_string); // 0x340 Call
	var_446_int = 13139; // 0x342 PushI
	SetMessage(var_446_int); // 0x343 TObjFunc
	ClearReplies(); // 0x345 TObjFunc
	var_447_int = 13140; // 0x347 PushI
	var_448_int = -1; // 0x348 PushI
	var_449_int = 14359; // 0x349 PushI
	AddReply(var_447_int, var_448_int, var_449_int); // 0x34a TObjFunc
	return 0; // 0x34c Return
	
Label_845:
	var_450_int = 14354; // 0x34d PushI
	var_451_bool = var_25_string == var_450_int; // 0x34e Eq
	if(var_451_bool == 0) goto Label_863; // 0x34f JumpB
	var_452_string = ""; // 0x350 PushV
	var_452_string = "Neutral"; // 0x351 MovS
	func_331(var_26_bool, var_452_string); // 0x352 Call
	var_453_int = 13135; // 0x354 PushI
	SetMessage(var_453_int); // 0x355 TObjFunc
	ClearReplies(); // 0x357 TObjFunc
	var_454_int = 13138; // 0x359 PushI
	var_455_int = -1; // 0x35a PushI
	var_456_int = 14357; // 0x35b PushI
	AddReply(var_454_int, var_455_int, var_456_int); // 0x35c TObjFunc
	return 0; // 0x35e Return
	
Label_863:
	var_457_int = 14345; // 0x35f PushI
	var_458_bool = var_25_string == var_457_int; // 0x360 Eq
	if(var_458_bool == 0) goto Label_886; // 0x361 JumpB
	var_459_string = ""; // 0x362 PushV
	var_459_string = "Neutral"; // 0x363 MovS
	func_331(var_26_bool, var_459_string); // 0x364 Call
	var_460_int = 13126; // 0x366 PushI
	SetMessage(var_460_int); // 0x367 TObjFunc
	ClearReplies(); // 0x369 TObjFunc
	var_461_int = 13127; // 0x36b PushI
	var_462_int = 14348; // 0x36c PushI
	var_463_int = 14346; // 0x36d PushI
	AddReply(var_461_int, var_462_int, var_463_int); // 0x36e TObjFunc
	var_464_int = 13128; // 0x370 PushI
	var_465_int = -1; // 0x371 PushI
	var_466_int = 14347; // 0x372 PushI
	AddReply(var_464_int, var_465_int, var_466_int); // 0x373 TObjFunc
	return 0; // 0x375 Return
	
Label_886:
	var_467_int = 14348; // 0x376 PushI
	var_468_bool = var_25_string == var_467_int; // 0x377 Eq
	if(var_468_bool == 0) goto Label_904; // 0x378 JumpB
	var_469_string = ""; // 0x379 PushV
	var_469_string = "Neutral"; // 0x37a MovS
	func_331(var_26_bool, var_469_string); // 0x37b Call
	var_470_int = 13129; // 0x37d PushI
	SetMessage(var_470_int); // 0x37e TObjFunc
	ClearReplies(); // 0x380 TObjFunc
	var_471_int = 13130; // 0x382 PushI
	var_472_int = 14350; // 0x383 PushI
	var_473_int = 14349; // 0x384 PushI
	AddReply(var_471_int, var_472_int, var_473_int); // 0x385 TObjFunc
	return 0; // 0x387 Return
	
Label_904:
	var_474_int = 14350; // 0x388 PushI
	var_475_bool = var_25_string == var_474_int; // 0x389 Eq
	if(var_475_bool == 0) goto Label_927; // 0x38a JumpB
	var_476_string = ""; // 0x38b PushV
	var_476_string = "Neutral"; // 0x38c MovS
	func_331(var_26_bool, var_476_string); // 0x38d Call
	var_477_int = 13131; // 0x38f PushI
	SetMessage(var_477_int); // 0x390 TObjFunc
	ClearReplies(); // 0x392 TObjFunc
	var_478_int = 13132; // 0x394 PushI
	var_479_int = -1; // 0x395 PushI
	var_480_int = 14351; // 0x396 PushI
	AddReply(var_478_int, var_479_int, var_480_int); // 0x397 TObjFunc
	var_481_int = 13133; // 0x399 PushI
	var_482_int = -1; // 0x39a PushI
	var_483_int = 14352; // 0x39b PushI
	AddReply(var_481_int, var_482_int, var_483_int); // 0x39c TObjFunc
	return 0; // 0x39e Return
	
Label_927:
	var_484_int = 14369; // 0x39f PushI
	var_485_bool = var_25_string == var_484_int; // 0x3a0 Eq
	if(var_485_bool == 0) goto Label_945; // 0x3a1 JumpB
	var_486_string = ""; // 0x3a2 PushV
	var_486_string = "Neutral"; // 0x3a3 MovS
	func_331(var_26_bool, var_486_string); // 0x3a4 Call
	var_487_int = 13150; // 0x3a6 PushI
	SetMessage(var_487_int); // 0x3a7 TObjFunc
	ClearReplies(); // 0x3a9 TObjFunc
	var_488_int = 13151; // 0x3ab PushI
	var_489_int = 14371; // 0x3ac PushI
	var_490_int = 14370; // 0x3ad PushI
	AddReply(var_488_int, var_489_int, var_490_int); // 0x3ae TObjFunc
	return 0; // 0x3b0 Return
	
Label_945:
	var_491_int = 14371; // 0x3b1 PushI
	var_492_bool = var_25_string == var_491_int; // 0x3b2 Eq
	if(var_492_bool == 0) goto Label_963; // 0x3b3 JumpB
	var_493_string = ""; // 0x3b4 PushV
	var_493_string = "Neutral"; // 0x3b5 MovS
	func_331(var_26_bool, var_493_string); // 0x3b6 Call
	var_494_int = 13152; // 0x3b8 PushI
	SetMessage(var_494_int); // 0x3b9 TObjFunc
	ClearReplies(); // 0x3bb TObjFunc
	var_495_int = 13153; // 0x3bd PushI
	var_496_int = 14373; // 0x3be PushI
	var_497_int = 14372; // 0x3bf PushI
	AddReply(var_495_int, var_496_int, var_497_int); // 0x3c0 TObjFunc
	return 0; // 0x3c2 Return
	
Label_963:
	var_498_int = 14373; // 0x3c3 PushI
	var_499_bool = var_25_string == var_498_int; // 0x3c4 Eq
	if(var_499_bool == 0) goto Label_981; // 0x3c5 JumpB
	var_500_string = ""; // 0x3c6 PushV
	var_500_string = "Neutral"; // 0x3c7 MovS
	func_331(var_26_bool, var_500_string); // 0x3c8 Call
	var_501_int = 13154; // 0x3ca PushI
	SetMessage(var_501_int); // 0x3cb TObjFunc
	ClearReplies(); // 0x3cd TObjFunc
	var_502_int = 13155; // 0x3cf PushI
	var_503_int = 14375; // 0x3d0 PushI
	var_504_int = 14374; // 0x3d1 PushI
	AddReply(var_502_int, var_503_int, var_504_int); // 0x3d2 TObjFunc
	return 0; // 0x3d4 Return
	
Label_981:
	var_505_int = 14375; // 0x3d5 PushI
	var_506_bool = var_25_string == var_505_int; // 0x3d6 Eq
	if(var_506_bool == 0) goto Label_999; // 0x3d7 JumpB
	var_507_string = ""; // 0x3d8 PushV
	var_507_string = "Neutral"; // 0x3d9 MovS
	func_331(var_26_bool, var_507_string); // 0x3da Call
	var_508_int = 13156; // 0x3dc PushI
	SetMessage(var_508_int); // 0x3dd TObjFunc
	ClearReplies(); // 0x3df TObjFunc
	var_509_int = 13157; // 0x3e1 PushI
	var_510_int = 14377; // 0x3e2 PushI
	var_511_int = 14376; // 0x3e3 PushI
	AddReply(var_509_int, var_510_int, var_511_int); // 0x3e4 TObjFunc
	return 0; // 0x3e6 Return
	
Label_999:
	var_512_int = 14377; // 0x3e7 PushI
	var_513_bool = var_25_string == var_512_int; // 0x3e8 Eq
	if(var_513_bool == 0) goto Label_1022; // 0x3e9 JumpB
	var_514_string = ""; // 0x3ea PushV
	var_514_string = "Neutral"; // 0x3eb MovS
	func_331(var_26_bool, var_514_string); // 0x3ec Call
	var_515_int = 13158; // 0x3ee PushI
	SetMessage(var_515_int); // 0x3ef TObjFunc
	ClearReplies(); // 0x3f1 TObjFunc
	var_516_int = 13159; // 0x3f3 PushI
	var_517_int = 14379; // 0x3f4 PushI
	var_518_int = 14378; // 0x3f5 PushI
	AddReply(var_516_int, var_517_int, var_518_int); // 0x3f6 TObjFunc
	var_519_int = 13161; // 0x3f8 PushI
	var_520_int = 14381; // 0x3f9 PushI
	var_521_int = 14380; // 0x3fa PushI
	AddReply(var_519_int, var_520_int, var_521_int); // 0x3fb TObjFunc
	return 0; // 0x3fd Return
	
Label_1022:
	var_522_int = 14381; // 0x3fe PushI
	var_523_bool = var_25_string == var_522_int; // 0x3ff Eq
	if(var_523_bool == 0) goto Label_1040; // 0x400 JumpB
	var_524_string = ""; // 0x401 PushV
	var_524_string = "Neutral"; // 0x402 MovS
	func_331(var_26_bool, var_524_string); // 0x403 Call
	var_525_int = 13162; // 0x405 PushI
	SetMessage(var_525_int); // 0x406 TObjFunc
	ClearReplies(); // 0x408 TObjFunc
	var_526_int = 13164; // 0x40a PushI
	var_527_int = 14384; // 0x40b PushI
	var_528_int = 14383; // 0x40c PushI
	AddReply(var_526_int, var_527_int, var_528_int); // 0x40d TObjFunc
	return 0; // 0x40f Return
	
Label_1040:
	var_529_int = 14379; // 0x410 PushI
	var_530_bool = var_25_string == var_529_int; // 0x411 Eq
	if(var_530_bool == 0) goto Label_1058; // 0x412 JumpB
	var_531_string = ""; // 0x413 PushV
	var_531_string = "Neutral"; // 0x414 MovS
	func_331(var_26_bool, var_531_string); // 0x415 Call
	var_532_int = 13160; // 0x417 PushI
	SetMessage(var_532_int); // 0x418 TObjFunc
	ClearReplies(); // 0x41a TObjFunc
	var_533_int = 13163; // 0x41c PushI
	var_534_int = 14384; // 0x41d PushI
	var_535_int = 14382; // 0x41e PushI
	AddReply(var_533_int, var_534_int, var_535_int); // 0x41f TObjFunc
	return 0; // 0x421 Return
	
Label_1058:
	var_536_int = 14384; // 0x422 PushI
	var_537_bool = var_25_string == var_536_int; // 0x423 Eq
	if(var_537_bool == 0) goto Label_1081; // 0x424 JumpB
	var_538_string = ""; // 0x425 PushV
	var_538_string = "Neutral"; // 0x426 MovS
	func_331(var_26_bool, var_538_string); // 0x427 Call
	var_539_int = 13165; // 0x429 PushI
	SetMessage(var_539_int); // 0x42a TObjFunc
	ClearReplies(); // 0x42c TObjFunc
	var_540_int = 13166; // 0x42e PushI
	var_541_int = 14390; // 0x42f PushI
	var_542_int = 14386; // 0x430 PushI
	AddReply(var_540_int, var_541_int, var_542_int); // 0x431 TObjFunc
	var_543_int = 13167; // 0x433 PushI
	var_544_int = 14388; // 0x434 PushI
	var_545_int = 14387; // 0x435 PushI
	AddReply(var_543_int, var_544_int, var_545_int); // 0x436 TObjFunc
	return 0; // 0x438 Return
	
Label_1081:
	var_546_int = 14388; // 0x439 PushI
	var_547_bool = var_25_string == var_546_int; // 0x43a Eq
	if(var_547_bool == 0) goto Label_1099; // 0x43b JumpB
	var_548_string = ""; // 0x43c PushV
	var_548_string = "Neutral"; // 0x43d MovS
	func_331(var_26_bool, var_548_string); // 0x43e Call
	var_549_int = 13168; // 0x440 PushI
	SetMessage(var_549_int); // 0x441 TObjFunc
	ClearReplies(); // 0x443 TObjFunc
	var_550_int = 13169; // 0x445 PushI
	var_551_int = -1; // 0x446 PushI
	var_552_int = 14389; // 0x447 PushI
	AddReply(var_550_int, var_551_int, var_552_int); // 0x448 TObjFunc
	return 0; // 0x44a Return
	
Label_1099:
	var_553_int = 14390; // 0x44b PushI
	var_554_bool = var_25_string == var_553_int; // 0x44c Eq
	if(var_554_bool == 0) goto Label_1122; // 0x44d JumpB
	var_555_string = ""; // 0x44e PushV
	var_555_string = "Neutral"; // 0x44f MovS
	func_331(var_26_bool, var_555_string); // 0x450 Call
	var_556_int = 13170; // 0x452 PushI
	SetMessage(var_556_int); // 0x453 TObjFunc
	ClearReplies(); // 0x455 TObjFunc
	var_557_int = 13171; // 0x457 PushI
	var_558_int = -1; // 0x458 PushI
	var_559_int = 14391; // 0x459 PushI
	AddReply(var_557_int, var_558_int, var_559_int); // 0x45a TObjFunc
	var_560_int = 13172; // 0x45c PushI
	var_561_int = 14393; // 0x45d PushI
	var_562_int = 14392; // 0x45e PushI
	AddReply(var_560_int, var_561_int, var_562_int); // 0x45f TObjFunc
	return 0; // 0x461 Return
	
Label_1122:
	var_563_int = 14393; // 0x462 PushI
	var_564_bool = var_25_string == var_563_int; // 0x463 Eq
	if(var_564_bool == 0) goto Label_1140; // 0x464 JumpB
	var_565_string = ""; // 0x465 PushV
	var_565_string = "Neutral"; // 0x466 MovS
	func_331(var_26_bool, var_565_string); // 0x467 Call
	var_566_int = 13173; // 0x469 PushI
	SetMessage(var_566_int); // 0x46a TObjFunc
	ClearReplies(); // 0x46c TObjFunc
	var_567_int = 13174; // 0x46e PushI
	var_568_int = -1; // 0x46f PushI
	var_569_int = 14394; // 0x470 PushI
	AddReply(var_567_int, var_568_int, var_569_int); // 0x471 TObjFunc
	return 0; // 0x473 Return
	
Label_1140:
	var_570_int = 14362; // 0x474 PushI
	var_571_bool = var_25_string == var_570_int; // 0x475 Eq
	if(var_571_bool == 0) goto Label_1158; // 0x476 JumpB
	var_572_string = ""; // 0x477 PushV
	var_572_string = "Neutral"; // 0x478 MovS
	func_331(var_26_bool, var_572_string); // 0x479 Call
	var_573_int = 13143; // 0x47b PushI
	SetMessage(var_573_int); // 0x47c TObjFunc
	ClearReplies(); // 0x47e TObjFunc
	var_574_int = 13144; // 0x480 PushI
	var_575_int = -1; // 0x481 PushI
	var_576_int = 14363; // 0x482 PushI
	AddReply(var_574_int, var_575_int, var_576_int); // 0x483 TObjFunc
	return 0; // 0x485 Return
	
Label_1158:
	var_577_int = 14336; // 0x486 PushI
	var_578_bool = var_25_string == var_577_int; // 0x487 Eq
	if(var_578_bool == 0) goto Label_1176; // 0x488 JumpB
	var_579_string = ""; // 0x489 PushV
	var_579_string = "Neutral"; // 0x48a MovS
	func_331(var_26_bool, var_579_string); // 0x48b Call
	var_580_int = 13118; // 0x48d PushI
	SetMessage(var_580_int); // 0x48e TObjFunc
	ClearReplies(); // 0x490 TObjFunc
	var_581_int = 13119; // 0x492 PushI
	var_582_int = 14289; // 0x493 PushI
	var_583_int = 14337; // 0x494 PushI
	AddReply(var_581_int, var_582_int, var_583_int); // 0x495 TObjFunc
	return 0; // 0x497 Return
	
Label_1176:
	var_584_int = 14287; // 0x498 PushI
	var_585_bool = var_25_string == var_584_int; // 0x499 Eq
	if(var_585_bool == 0) goto Label_1194; // 0x49a JumpB
	var_586_string = ""; // 0x49b PushV
	var_586_string = "Neutral"; // 0x49c MovS
	func_331(var_26_bool, var_586_string); // 0x49d Call
	var_587_int = 13077; // 0x49f PushI
	SetMessage(var_587_int); // 0x4a0 TObjFunc
	ClearReplies(); // 0x4a2 TObjFunc
	var_588_int = 13078; // 0x4a4 PushI
	var_589_int = 14289; // 0x4a5 PushI
	var_590_int = 14288; // 0x4a6 PushI
	AddReply(var_588_int, var_589_int, var_590_int); // 0x4a7 TObjFunc
	return 0; // 0x4a9 Return
	
Label_1194:
	var_591_int = 14289; // 0x4aa PushI
	var_592_bool = var_25_string == var_591_int; // 0x4ab Eq
	if(var_592_bool == 0) goto Label_1217; // 0x4ac JumpB
	var_593_string = ""; // 0x4ad PushV
	var_593_string = "Neutral"; // 0x4ae MovS
	func_331(var_26_bool, var_593_string); // 0x4af Call
	var_594_int = 13079; // 0x4b1 PushI
	SetMessage(var_594_int); // 0x4b2 TObjFunc
	ClearReplies(); // 0x4b4 TObjFunc
	var_595_int = 13082; // 0x4b6 PushI
	var_596_int = 14296; // 0x4b7 PushI
	var_597_int = 14292; // 0x4b8 PushI
	AddReply(var_595_int, var_596_int, var_597_int); // 0x4b9 TObjFunc
	var_598_int = 13080; // 0x4bb PushI
	var_599_int = 14291; // 0x4bc PushI
	var_600_int = 14290; // 0x4bd PushI
	AddReply(var_598_int, var_599_int, var_600_int); // 0x4be TObjFunc
	return 0; // 0x4c0 Return
	
Label_1217:
	var_601_int = 14291; // 0x4c1 PushI
	var_602_bool = var_25_string == var_601_int; // 0x4c2 Eq
	if(var_602_bool == 0) goto Label_1235; // 0x4c3 JumpB
	var_603_string = ""; // 0x4c4 PushV
	var_603_string = "Neutral"; // 0x4c5 MovS
	func_331(var_26_bool, var_603_string); // 0x4c6 Call
	var_604_int = 13081; // 0x4c8 PushI
	SetMessage(var_604_int); // 0x4c9 TObjFunc
	ClearReplies(); // 0x4cb TObjFunc
	var_605_int = 13083; // 0x4cd PushI
	var_606_int = 14294; // 0x4ce PushI
	var_607_int = 14293; // 0x4cf PushI
	AddReply(var_605_int, var_606_int, var_607_int); // 0x4d0 TObjFunc
	return 0; // 0x4d2 Return
	
Label_1235:
	var_608_int = 14294; // 0x4d3 PushI
	var_609_bool = var_25_string == var_608_int; // 0x4d4 Eq
	if(var_609_bool == 0) goto Label_1253; // 0x4d5 JumpB
	var_610_string = ""; // 0x4d6 PushV
	var_610_string = "Neutral"; // 0x4d7 MovS
	func_331(var_26_bool, var_610_string); // 0x4d8 Call
	var_611_int = 13084; // 0x4da PushI
	SetMessage(var_611_int); // 0x4db TObjFunc
	ClearReplies(); // 0x4dd TObjFunc
	var_612_int = 13085; // 0x4df PushI
	var_613_int = 14296; // 0x4e0 PushI
	var_614_int = 14295; // 0x4e1 PushI
	AddReply(var_612_int, var_613_int, var_614_int); // 0x4e2 TObjFunc
	return 0; // 0x4e4 Return
	
Label_1253:
	var_615_int = 14296; // 0x4e5 PushI
	var_616_bool = var_25_string == var_615_int; // 0x4e6 Eq
	if(var_616_bool == 0) goto Label_1271; // 0x4e7 JumpB
	var_617_string = ""; // 0x4e8 PushV
	var_617_string = "Neutral"; // 0x4e9 MovS
	func_331(var_26_bool, var_617_string); // 0x4ea Call
	var_618_int = 13086; // 0x4ec PushI
	SetMessage(var_618_int); // 0x4ed TObjFunc
	ClearReplies(); // 0x4ef TObjFunc
	var_619_int = 13111; // 0x4f1 PushI
	var_620_int = 14329; // 0x4f2 PushI
	var_621_int = 14328; // 0x4f3 PushI
	AddReply(var_619_int, var_620_int, var_621_int); // 0x4f4 TObjFunc
	return 0; // 0x4f6 Return
	
Label_1271:
	var_622_int = 14329; // 0x4f7 PushI
	var_623_bool = var_25_string == var_622_int; // 0x4f8 Eq
	if(var_623_bool == 0) goto Label_1289; // 0x4f9 JumpB
	var_624_string = ""; // 0x4fa PushV
	var_624_string = "Neutral"; // 0x4fb MovS
	func_331(var_26_bool, var_624_string); // 0x4fc Call
	var_625_int = 13112; // 0x4fe PushI
	SetMessage(var_625_int); // 0x4ff TObjFunc
	ClearReplies(); // 0x501 TObjFunc
	var_626_int = 13113; // 0x503 PushI
	var_627_int = 14332; // 0x504 PushI
	var_628_int = 14331; // 0x505 PushI
	AddReply(var_626_int, var_627_int, var_628_int); // 0x506 TObjFunc
	return 0; // 0x508 Return
	
Label_1289:
	var_629_int = 14332; // 0x509 PushI
	var_630_bool = var_25_string == var_629_int; // 0x50a Eq
	if(var_630_bool == 0) goto Label_1307; // 0x50b JumpB
	var_631_string = ""; // 0x50c PushV
	var_631_string = "Neutral"; // 0x50d MovS
	func_331(var_26_bool, var_631_string); // 0x50e Call
	var_632_int = 13114; // 0x510 PushI
	SetMessage(var_632_int); // 0x511 TObjFunc
	ClearReplies(); // 0x513 TObjFunc
	var_633_int = 13115; // 0x515 PushI
	var_634_int = 14334; // 0x516 PushI
	var_635_int = 14333; // 0x517 PushI
	AddReply(var_633_int, var_634_int, var_635_int); // 0x518 TObjFunc
	return 0; // 0x51a Return
	
Label_1307:
	var_636_int = 14334; // 0x51b PushI
	var_637_bool = var_25_string == var_636_int; // 0x51c Eq
	if(var_637_bool == 0) goto Label_1325; // 0x51d JumpB
	var_638_string = ""; // 0x51e PushV
	var_638_string = "Neutral"; // 0x51f MovS
	func_331(var_26_bool, var_638_string); // 0x520 Call
	var_639_int = 13116; // 0x522 PushI
	SetMessage(var_639_int); // 0x523 TObjFunc
	ClearReplies(); // 0x525 TObjFunc
	var_640_int = 13120; // 0x527 PushI
	var_641_int = 14340; // 0x528 PushI
	var_642_int = 14339; // 0x529 PushI
	AddReply(var_640_int, var_641_int, var_642_int); // 0x52a TObjFunc
	return 0; // 0x52c Return
	
Label_1325:
	var_643_int = 14340; // 0x52d PushI
	var_644_bool = var_25_string == var_643_int; // 0x52e Eq
	if(var_644_bool == 0) goto Label_1343; // 0x52f JumpB
	var_645_string = ""; // 0x530 PushV
	var_645_string = "Neutral"; // 0x531 MovS
	func_331(var_26_bool, var_645_string); // 0x532 Call
	var_646_int = 13121; // 0x534 PushI
	SetMessage(var_646_int); // 0x535 TObjFunc
	ClearReplies(); // 0x537 TObjFunc
	var_647_int = 13122; // 0x539 PushI
	var_648_int = 14342; // 0x53a PushI
	var_649_int = 14341; // 0x53b PushI
	AddReply(var_647_int, var_648_int, var_649_int); // 0x53c TObjFunc
	return 0; // 0x53e Return
	
Label_1343:
	var_650_int = 14342; // 0x53f PushI
	var_651_bool = var_25_string == var_650_int; // 0x540 Eq
	if(var_651_bool == 0) goto Label_1361; // 0x541 JumpB
	var_652_string = ""; // 0x542 PushV
	var_652_string = "Neutral"; // 0x543 MovS
	func_331(var_26_bool, var_652_string); // 0x544 Call
	var_653_int = 13123; // 0x546 PushI
	SetMessage(var_653_int); // 0x547 TObjFunc
	ClearReplies(); // 0x549 TObjFunc
	var_654_int = 13124; // 0x54b PushI
	var_655_int = -1; // 0x54c PushI
	var_656_int = 14343; // 0x54d PushI
	AddReply(var_654_int, var_655_int, var_656_int); // 0x54e TObjFunc
	return 0; // 0x550 Return
	
Label_1361:
	var_657_int = 14260; // 0x551 PushI
	var_658_bool = var_25_string == var_657_int; // 0x552 Eq
	if(var_658_bool == 0) goto Label_1384; // 0x553 JumpB
	var_659_string = ""; // 0x554 PushV
	var_659_string = "Neutral"; // 0x555 MovS
	func_331(var_26_bool, var_659_string); // 0x556 Call
	var_660_int = 13052; // 0x558 PushI
	SetMessage(var_660_int); // 0x559 TObjFunc
	ClearReplies(); // 0x55b TObjFunc
	var_661_int = 13053; // 0x55d PushI
	var_662_int = 14262; // 0x55e PushI
	var_663_int = 14261; // 0x55f PushI
	AddReply(var_661_int, var_662_int, var_663_int); // 0x560 TObjFunc
	var_664_int = 13108; // 0x562 PushI
	var_665_int = 14262; // 0x563 PushI
	var_666_int = 14323; // 0x564 PushI
	AddReply(var_664_int, var_665_int, var_666_int); // 0x565 TObjFunc
	return 0; // 0x567 Return
	
Label_1384:
	var_667_int = 14262; // 0x568 PushI
	var_668_bool = var_25_string == var_667_int; // 0x569 Eq
	if(var_668_bool == 0) goto Label_1407; // 0x56a JumpB
	var_669_string = ""; // 0x56b PushV
	var_669_string = "Neutral"; // 0x56c MovS
	func_331(var_26_bool, var_669_string); // 0x56d Call
	var_670_int = 13054; // 0x56f PushI
	SetMessage(var_670_int); // 0x570 TObjFunc
	ClearReplies(); // 0x572 TObjFunc
	var_671_int = 13055; // 0x574 PushI
	var_672_int = 14264; // 0x575 PushI
	var_673_int = 14263; // 0x576 PushI
	AddReply(var_671_int, var_672_int, var_673_int); // 0x577 TObjFunc
	var_674_int = 13110; // 0x579 PushI
	var_675_int = 14264; // 0x57a PushI
	var_676_int = 14326; // 0x57b PushI
	AddReply(var_674_int, var_675_int, var_676_int); // 0x57c TObjFunc
	return 0; // 0x57e Return
	
Label_1407:
	var_677_int = 14264; // 0x57f PushI
	var_678_bool = var_25_string == var_677_int; // 0x580 Eq
	if(var_678_bool == 0) goto Label_1425; // 0x581 JumpB
	var_679_string = ""; // 0x582 PushV
	var_679_string = "Neutral"; // 0x583 MovS
	func_331(var_26_bool, var_679_string); // 0x584 Call
	var_680_int = 13056; // 0x586 PushI
	SetMessage(var_680_int); // 0x587 TObjFunc
	ClearReplies(); // 0x589 TObjFunc
	var_681_int = 13057; // 0x58b PushI
	var_682_int = 14266; // 0x58c PushI
	var_683_int = 14265; // 0x58d PushI
	AddReply(var_681_int, var_682_int, var_683_int); // 0x58e TObjFunc
	return 0; // 0x590 Return
	
Label_1425:
	var_684_int = 14266; // 0x591 PushI
	var_685_bool = var_25_string == var_684_int; // 0x592 Eq
	if(var_685_bool == 0) goto Label_1448; // 0x593 JumpB
	var_686_string = ""; // 0x594 PushV
	var_686_string = "Neutral"; // 0x595 MovS
	func_331(var_26_bool, var_686_string); // 0x596 Call
	var_687_int = 13058; // 0x598 PushI
	SetMessage(var_687_int); // 0x599 TObjFunc
	ClearReplies(); // 0x59b TObjFunc
	var_688_int = 13059; // 0x59d PushI
	var_689_int = 14269; // 0x59e PushI
	var_690_int = 14267; // 0x59f PushI
	AddReply(var_688_int, var_689_int, var_690_int); // 0x5a0 TObjFunc
	var_691_int = 13060; // 0x5a2 PushI
	var_692_int = 14269; // 0x5a3 PushI
	var_693_int = 14268; // 0x5a4 PushI
	AddReply(var_691_int, var_692_int, var_693_int); // 0x5a5 TObjFunc
	return 0; // 0x5a7 Return
	
Label_1448:
	var_694_int = 14269; // 0x5a8 PushI
	var_695_bool = var_25_string == var_694_int; // 0x5a9 Eq
	if(var_695_bool == 0) goto Label_1466; // 0x5aa JumpB
	var_696_string = ""; // 0x5ab PushV
	var_696_string = "Neutral"; // 0x5ac MovS
	func_331(var_26_bool, var_696_string); // 0x5ad Call
	var_697_int = 13061; // 0x5af PushI
	SetMessage(var_697_int); // 0x5b0 TObjFunc
	ClearReplies(); // 0x5b2 TObjFunc
	var_698_int = 13321; // 0x5b4 PushI
	var_699_int = 14557; // 0x5b5 PushI
	var_700_int = 14556; // 0x5b6 PushI
	AddReply(var_698_int, var_699_int, var_700_int); // 0x5b7 TObjFunc
	return 0; // 0x5b9 Return
	
Label_1466:
	var_701_int = 14557; // 0x5ba PushI
	var_702_bool = var_25_string == var_701_int; // 0x5bb Eq
	if(var_702_bool == 0) goto Label_1484; // 0x5bc JumpB
	var_703_string = ""; // 0x5bd PushV
	var_703_string = "Neutral"; // 0x5be MovS
	func_331(var_26_bool, var_703_string); // 0x5bf Call
	var_704_int = 13322; // 0x5c1 PushI
	SetMessage(var_704_int); // 0x5c2 TObjFunc
	ClearReplies(); // 0x5c4 TObjFunc
	var_705_int = 13323; // 0x5c6 PushI
	var_706_int = -1; // 0x5c7 PushI
	var_707_int = 14558; // 0x5c8 PushI
	AddReply(var_705_int, var_706_int, var_707_int); // 0x5c9 TObjFunc
	return 0; // 0x5cb Return
	
Label_1484:
	var_708_int = 14245; // 0x5cc PushI
	var_709_bool = var_25_string == var_708_int; // 0x5cd Eq
	if(var_709_bool == 0) goto Label_1507; // 0x5ce JumpB
	var_710_string = ""; // 0x5cf PushV
	var_710_string = "Neutral"; // 0x5d0 MovS
	func_331(var_26_bool, var_710_string); // 0x5d1 Call
	var_711_int = 13038; // 0x5d3 PushI
	SetMessage(var_711_int); // 0x5d4 TObjFunc
	ClearReplies(); // 0x5d6 TObjFunc
	var_712_int = 13039; // 0x5d8 PushI
	var_713_int = 14247; // 0x5d9 PushI
	var_714_int = 14246; // 0x5da PushI
	AddReply(var_712_int, var_713_int, var_714_int); // 0x5db TObjFunc
	var_715_int = 13088; // 0x5dd PushI
	var_716_int = 14299; // 0x5de PushI
	var_717_int = 14298; // 0x5df PushI
	AddReply(var_715_int, var_716_int, var_717_int); // 0x5e0 TObjFunc
	return 0; // 0x5e2 Return
	
Label_1507:
	var_718_int = 14299; // 0x5e3 PushI
	var_719_bool = var_25_string == var_718_int; // 0x5e4 Eq
	if(var_719_bool == 0) goto Label_1545; // 0x5e5 JumpB
	var_720_string = ""; // 0x5e6 PushV
	var_720_string = "Neutral"; // 0x5e7 MovS
	func_331(var_26_bool, var_720_string); // 0x5e8 Call
	var_721_int = 13089; // 0x5ea PushI
	SetMessage(var_721_int); // 0x5eb TObjFunc
	ClearReplies(); // 0x5ed TObjFunc
	var_722_int = 13093; // 0x5ef PushI
	var_723_int = 14306; // 0x5f0 PushI
	var_724_int = 14303; // 0x5f1 PushI
	AddReply(var_722_int, var_723_int, var_724_int); // 0x5f2 TObjFunc
	var_725_int = 13091; // 0x5f4 PushI
	var_726_int = 14307; // 0x5f5 PushI
	var_727_int = 14301; // 0x5f6 PushI
	AddReply(var_725_int, var_726_int, var_727_int); // 0x5f7 TObjFunc
	var_728_int = 13092; // 0x5f9 PushI
	var_729_int = 14307; // 0x5fa PushI
	var_730_int = 14302; // 0x5fb PushI
	AddReply(var_728_int, var_729_int, var_730_int); // 0x5fc TObjFunc
	var_731_int = 13094; // 0x5fe PushI
	var_732_int = 14307; // 0x5ff PushI
	var_733_int = 14304; // 0x600 PushI
	AddReply(var_731_int, var_732_int, var_733_int); // 0x601 TObjFunc
	var_734_int = 13090; // 0x603 PushI
	var_735_int = 14307; // 0x604 PushI
	var_736_int = 14300; // 0x605 PushI
	AddReply(var_734_int, var_735_int, var_736_int); // 0x606 TObjFunc
	return 0; // 0x608 Return
	
Label_1545:
	var_737_int = 14307; // 0x609 PushI
	var_738_bool = var_25_string == var_737_int; // 0x60a Eq
	if(var_738_bool == 0) goto Label_1563; // 0x60b JumpB
	var_739_string = ""; // 0x60c PushV
	var_739_string = "Neutral"; // 0x60d MovS
	func_331(var_26_bool, var_739_string); // 0x60e Call
	var_740_int = 13097; // 0x610 PushI
	SetMessage(var_740_int); // 0x611 TObjFunc
	ClearReplies(); // 0x613 TObjFunc
	var_741_int = 13098; // 0x615 PushI
	var_742_int = 14314; // 0x616 PushI
	var_743_int = 14308; // 0x617 PushI
	AddReply(var_741_int, var_742_int, var_743_int); // 0x618 TObjFunc
	return 0; // 0x61a Return
	
Label_1563:
	var_744_int = 14314; // 0x61b PushI
	var_745_bool = var_25_string == var_744_int; // 0x61c Eq
	if(var_745_bool == 0) goto Label_1581; // 0x61d JumpB
	var_746_string = ""; // 0x61e PushV
	var_746_string = "Neutral"; // 0x61f MovS
	func_331(var_26_bool, var_746_string); // 0x620 Call
	var_747_int = 13100; // 0x622 PushI
	SetMessage(var_747_int); // 0x623 TObjFunc
	ClearReplies(); // 0x625 TObjFunc
	var_748_int = 13101; // 0x627 PushI
	var_749_int = 14316; // 0x628 PushI
	var_750_int = 14315; // 0x629 PushI
	AddReply(var_748_int, var_749_int, var_750_int); // 0x62a TObjFunc
	return 0; // 0x62c Return
	
Label_1581:
	var_751_int = 14316; // 0x62d PushI
	var_752_bool = var_25_string == var_751_int; // 0x62e Eq
	if(var_752_bool == 0) goto Label_1599; // 0x62f JumpB
	var_753_string = ""; // 0x630 PushV
	var_753_string = "Neutral"; // 0x631 MovS
	func_331(var_26_bool, var_753_string); // 0x632 Call
	var_754_int = 13102; // 0x634 PushI
	SetMessage(var_754_int); // 0x635 TObjFunc
	ClearReplies(); // 0x637 TObjFunc
	var_755_int = 13103; // 0x639 PushI
	var_756_int = 14318; // 0x63a PushI
	var_757_int = 14317; // 0x63b PushI
	AddReply(var_755_int, var_756_int, var_757_int); // 0x63c TObjFunc
	return 0; // 0x63e Return
	
Label_1599:
	var_758_int = 14318; // 0x63f PushI
	var_759_bool = var_25_string == var_758_int; // 0x640 Eq
	if(var_759_bool == 0) goto Label_1617; // 0x641 JumpB
	var_760_string = ""; // 0x642 PushV
	var_760_string = "Neutral"; // 0x643 MovS
	func_331(var_26_bool, var_760_string); // 0x644 Call
	var_761_int = 13104; // 0x646 PushI
	SetMessage(var_761_int); // 0x647 TObjFunc
	ClearReplies(); // 0x649 TObjFunc
	var_762_int = 13105; // 0x64b PushI
	var_763_int = 14320; // 0x64c PushI
	var_764_int = 14319; // 0x64d PushI
	AddReply(var_762_int, var_763_int, var_764_int); // 0x64e TObjFunc
	return 0; // 0x650 Return
	
Label_1617:
	var_765_int = 14320; // 0x651 PushI
	var_766_bool = var_25_string == var_765_int; // 0x652 Eq
	if(var_766_bool == 0) goto Label_1635; // 0x653 JumpB
	var_767_string = ""; // 0x654 PushV
	var_767_string = "Neutral"; // 0x655 MovS
	func_331(var_26_bool, var_767_string); // 0x656 Call
	var_768_int = 13106; // 0x658 PushI
	SetMessage(var_768_int); // 0x659 TObjFunc
	ClearReplies(); // 0x65b TObjFunc
	var_769_int = 13107; // 0x65d PushI
	var_770_int = 14249; // 0x65e PushI
	var_771_int = 14321; // 0x65f PushI
	AddReply(var_769_int, var_770_int, var_771_int); // 0x660 TObjFunc
	return 0; // 0x662 Return
	
Label_1635:
	var_772_int = 14306; // 0x663 PushI
	var_773_bool = var_25_string == var_772_int; // 0x664 Eq
	if(var_773_bool == 0) goto Label_1653; // 0x665 JumpB
	var_774_string = ""; // 0x666 PushV
	var_774_string = "Neutral"; // 0x667 MovS
	func_331(var_26_bool, var_774_string); // 0x668 Call
	var_775_int = 13096; // 0x66a PushI
	SetMessage(var_775_int); // 0x66b TObjFunc
	ClearReplies(); // 0x66d TObjFunc
	var_776_int = 13099; // 0x66f PushI
	var_777_int = 14307; // 0x670 PushI
	var_778_int = 14312; // 0x671 PushI
	AddReply(var_776_int, var_777_int, var_778_int); // 0x672 TObjFunc
	return 0; // 0x674 Return
	
Label_1653:
	var_779_int = 14247; // 0x675 PushI
	var_780_bool = var_25_string == var_779_int; // 0x676 Eq
	if(var_780_bool == 0) goto Label_1671; // 0x677 JumpB
	var_781_string = ""; // 0x678 PushV
	var_781_string = "Neutral"; // 0x679 MovS
	func_331(var_26_bool, var_781_string); // 0x67a Call
	var_782_int = 13040; // 0x67c PushI
	SetMessage(var_782_int); // 0x67d TObjFunc
	ClearReplies(); // 0x67f TObjFunc
	var_783_int = 13041; // 0x681 PushI
	var_784_int = 14249; // 0x682 PushI
	var_785_int = 14248; // 0x683 PushI
	AddReply(var_783_int, var_784_int, var_785_int); // 0x684 TObjFunc
	return 0; // 0x686 Return
	
Label_1671:
	var_786_int = 14249; // 0x687 PushI
	var_787_bool = var_25_string == var_786_int; // 0x688 Eq
	if(var_787_bool == 0) goto Label_1689; // 0x689 JumpB
	var_788_string = ""; // 0x68a PushV
	var_788_string = "Neutral"; // 0x68b MovS
	func_331(var_26_bool, var_788_string); // 0x68c Call
	var_789_int = 13042; // 0x68e PushI
	SetMessage(var_789_int); // 0x68f TObjFunc
	ClearReplies(); // 0x691 TObjFunc
	var_790_int = 13043; // 0x693 PushI
	var_791_int = 14251; // 0x694 PushI
	var_792_int = 14250; // 0x695 PushI
	AddReply(var_790_int, var_791_int, var_792_int); // 0x696 TObjFunc
	return 0; // 0x698 Return
	
Label_1689:
	var_793_int = 14251; // 0x699 PushI
	var_794_bool = var_25_string == var_793_int; // 0x69a Eq
	if(var_794_bool == 0) goto Label_1707; // 0x69b JumpB
	var_795_string = ""; // 0x69c PushV
	var_795_string = "Neutral"; // 0x69d MovS
	func_331(var_26_bool, var_795_string); // 0x69e Call
	var_796_int = 13044; // 0x6a0 PushI
	SetMessage(var_796_int); // 0x6a1 TObjFunc
	ClearReplies(); // 0x6a3 TObjFunc
	var_797_int = 13045; // 0x6a5 PushI
	var_798_int = 14253; // 0x6a6 PushI
	var_799_int = 14252; // 0x6a7 PushI
	AddReply(var_797_int, var_798_int, var_799_int); // 0x6a8 TObjFunc
	return 0; // 0x6aa Return
	
Label_1707:
	var_800_int = 14253; // 0x6ab PushI
	var_801_bool = var_25_string == var_800_int; // 0x6ac Eq
	if(var_801_bool == 0) goto Label_1725; // 0x6ad JumpB
	var_802_string = ""; // 0x6ae PushV
	var_802_string = "Neutral"; // 0x6af MovS
	func_331(var_26_bool, var_802_string); // 0x6b0 Call
	var_803_int = 13046; // 0x6b2 PushI
	SetMessage(var_803_int); // 0x6b3 TObjFunc
	ClearReplies(); // 0x6b5 TObjFunc
	var_804_int = 13062; // 0x6b7 PushI
	var_805_int = 14273; // 0x6b8 PushI
	var_806_int = 14272; // 0x6b9 PushI
	AddReply(var_804_int, var_805_int, var_806_int); // 0x6ba TObjFunc
	return 0; // 0x6bc Return
	
Label_1725:
	var_807_int = 14273; // 0x6bd PushI
	var_808_bool = var_25_string == var_807_int; // 0x6be Eq
	if(var_808_bool == 0) goto Label_1753; // 0x6bf JumpB
	var_809_string = ""; // 0x6c0 PushV
	var_809_string = "Neutral"; // 0x6c1 MovS
	func_331(var_26_bool, var_809_string); // 0x6c2 Call
	var_810_int = 13063; // 0x6c4 PushI
	SetMessage(var_810_int); // 0x6c5 TObjFunc
	ClearReplies(); // 0x6c7 TObjFunc
	var_811_int = 13064; // 0x6c9 PushI
	var_812_int = -1; // 0x6ca PushI
	var_813_int = 14274; // 0x6cb PushI
	AddReply(var_811_int, var_812_int, var_813_int); // 0x6cc TObjFunc
	var_814_int = 13065; // 0x6ce PushI
	var_815_int = 14276; // 0x6cf PushI
	var_816_int = 14275; // 0x6d0 PushI
	AddReply(var_814_int, var_815_int, var_816_int); // 0x6d1 TObjFunc
	var_817_int = 13073; // 0x6d3 PushI
	var_818_int = -1; // 0x6d4 PushI
	var_819_int = 14283; // 0x6d5 PushI
	AddReply(var_817_int, var_818_int, var_819_int); // 0x6d6 TObjFunc
	return 0; // 0x6d8 Return
	
Label_1753:
	var_820_int = 14276; // 0x6d9 PushI
	var_821_bool = var_25_string == var_820_int; // 0x6da Eq
	if(var_821_bool == 0) goto Label_1771; // 0x6db JumpB
	var_822_string = ""; // 0x6dc PushV
	var_822_string = "Neutral"; // 0x6dd MovS
	func_331(var_26_bool, var_822_string); // 0x6de Call
	var_823_int = 13066; // 0x6e0 PushI
	SetMessage(var_823_int); // 0x6e1 TObjFunc
	ClearReplies(); // 0x6e3 TObjFunc
	var_824_int = 13067; // 0x6e5 PushI
	var_825_int = 14278; // 0x6e6 PushI
	var_826_int = 14277; // 0x6e7 PushI
	AddReply(var_824_int, var_825_int, var_826_int); // 0x6e8 TObjFunc
	return 0; // 0x6ea Return
	
Label_1771:
	var_827_int = 14278; // 0x6eb PushI
	var_828_bool = var_25_string == var_827_int; // 0x6ec Eq
	if(var_828_bool == 0) goto Label_1789; // 0x6ed JumpB
	var_829_string = ""; // 0x6ee PushV
	var_829_string = "Neutral"; // 0x6ef MovS
	func_331(var_26_bool, var_829_string); // 0x6f0 Call
	var_830_int = 13068; // 0x6f2 PushI
	SetMessage(var_830_int); // 0x6f3 TObjFunc
	ClearReplies(); // 0x6f5 TObjFunc
	var_831_int = 13069; // 0x6f7 PushI
	var_832_int = 14280; // 0x6f8 PushI
	var_833_int = 14279; // 0x6f9 PushI
	AddReply(var_831_int, var_832_int, var_833_int); // 0x6fa TObjFunc
	return 0; // 0x6fc Return
	
Label_1789:
	var_834_int = 14280; // 0x6fd PushI
	var_835_bool = var_25_string == var_834_int; // 0x6fe Eq
	if(var_835_bool == 0) goto Label_1812; // 0x6ff JumpB
	var_836_string = ""; // 0x700 PushV
	var_836_string = "Neutral"; // 0x701 MovS
	func_331(var_26_bool, var_836_string); // 0x702 Call
	var_837_int = 13070; // 0x704 PushI
	SetMessage(var_837_int); // 0x705 TObjFunc
	ClearReplies(); // 0x707 TObjFunc
	var_838_int = 13071; // 0x709 PushI
	var_839_int = -1; // 0x70a PushI
	var_840_int = 14281; // 0x70b PushI
	AddReply(var_838_int, var_839_int, var_840_int); // 0x70c TObjFunc
	var_841_int = 13072; // 0x70e PushI
	var_842_int = -1; // 0x70f PushI
	var_843_int = 14282; // 0x710 PushI
	AddReply(var_841_int, var_842_int, var_843_int); // 0x711 TObjFunc
	return 0; // 0x713 Return
	
Label_1812:
	var_844_int = 14254; // 0x714 PushI
	var_845_bool = var_25_string == var_844_int; // 0x715 Eq
	if(var_845_bool == 0) goto Label_1835; // 0x716 JumpB
	var_846_string = ""; // 0x717 PushV
	var_846_string = "Neutral"; // 0x718 MovS
	func_331(var_26_bool, var_846_string); // 0x719 Call
	var_847_int = 13047; // 0x71b PushI
	SetMessage(var_847_int); // 0x71c TObjFunc
	ClearReplies(); // 0x71e TObjFunc
	var_848_int = 13048; // 0x720 PushI
	var_849_int = 14256; // 0x721 PushI
	var_850_int = 14255; // 0x722 PushI
	AddReply(var_848_int, var_849_int, var_850_int); // 0x723 TObjFunc
	var_851_int = 13051; // 0x725 PushI
	var_852_int = 14245; // 0x726 PushI
	var_853_int = 14258; // 0x727 PushI
	AddReply(var_851_int, var_852_int, var_853_int); // 0x728 TObjFunc
	return 0; // 0x72a Return
	
Label_1835:
	var_854_int = 14256; // 0x72b PushI
	var_855_bool = var_25_string == var_854_int; // 0x72c Eq
	if(var_855_bool == 0) goto Label_1853; // 0x72d JumpB
	var_856_string = ""; // 0x72e PushV
	var_856_string = "Neutral"; // 0x72f MovS
	func_331(var_26_bool, var_856_string); // 0x730 Call
	var_857_int = 13049; // 0x732 PushI
	SetMessage(var_857_int); // 0x733 TObjFunc
	ClearReplies(); // 0x735 TObjFunc
	var_858_int = 13050; // 0x737 PushI
	var_859_int = 14245; // 0x738 PushI
	var_860_int = 14257; // 0x739 PushI
	AddReply(var_858_int, var_859_int, var_860_int); // 0x73a TObjFunc
	return 0; // 0x73c Return
	
Label_1853:
	var_3_string = 1; // 0x73d TMovB
	var_861_bool = 0; // 0x73e PushV
	func_4912(var_861_bool); // 0x73f Call
	if(var_861_bool == 0) goto Label_1861; // 0x741 JumpB
	lshStopAnimation(); // 0x742 Func
	goto Label_1863; // 0x744 Jump
	
Label_1863:
	return 0; // 0x747 Return
	
Label_1861:
	StopAnimation(); // 0x745 Func
	
Label_1865:
	return 0; // 0x749 Return
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool)
{
	var_27_int = 1; // 0x819 PushI
	if(var_27_int == 0) goto Label_2709; // 0x81a JumpB
	func_4838(); // 0x81c Call
	var_29_int = 14980; // 0x81e PushI
	var_30_bool = var_26_bool == var_29_int; // 0x81f Eq
	if(var_30_bool == 0) goto Label_2086; // 0x820 JumpB
	var_31_object = Obj(); var_32_object = Obj(); // 0x821 PushV
	var_31_object = var_1_object; // 0x822 MovT
	var_32_object = var_0_object; // 0x823 MovT
	func_5100(); // 0x824 Call
	
Label_2086:
	var_75_int = 14645; // 0x826 PushI
	var_76_bool = var_26_bool == var_75_int; // 0x827 Eq
	if(var_76_bool == 0) goto Label_2094; // 0x828 JumpB
	var_77_object = Obj(); var_78_object = Obj(); // 0x829 PushV
	var_77_object = var_1_object; // 0x82a MovT
	var_78_object = var_0_object; // 0x82b MovT
	func_5117(); // 0x82c Call
	
Label_2094:
	var_81_int = 13413; // 0x82e PushI
	var_82_bool = var_26_bool == var_81_int; // 0x82f Eq
	if(var_82_bool == 0) goto Label_2102; // 0x830 JumpB
	var_83_object = Obj(); var_84_object = Obj(); // 0x831 PushV
	var_83_object = var_1_object; // 0x832 MovT
	var_84_object = var_0_object; // 0x833 MovT
	func_5129(); // 0x834 Call
	
Label_2102:
	var_87_int = 14646; // 0x836 PushI
	var_88_bool = var_26_bool == var_87_int; // 0x837 Eq
	if(var_88_bool == 0) goto Label_2110; // 0x838 JumpB
	var_89_object = Obj(); var_90_object = Obj(); // 0x839 PushV
	var_89_object = var_1_object; // 0x83a MovT
	var_90_object = var_0_object; // 0x83b MovT
	func_5123(); // 0x83c Call
	
Label_2110:
	var_93_int = 14647; // 0x83e PushI
	var_94_bool = var_25_string == var_93_int; // 0x83f Eq
	if(var_94_bool == 0) goto Label_2202; // 0x840 JumpB
	var_95_bool = 0; var_96_object = Obj(); // 0x841 PushV
	var_96_object = var_1_object; // 0x842 MovT
	func_5425(var_96_object); // 0x843 Call
	if(var_95_bool == 0) goto Label_2143; // 0x845 JumpB
	var_103_string = ""; // 0x846 PushV
	var_103_string = "Neutral"; // 0x847 MovS
	func_2056(var_26_bool, var_103_string); // 0x848 Call
	var_118_int = 13413; // 0x84a PushI
	SetMessage(var_118_int); // 0x84b TObjFunc
	ClearReplies(); // 0x84d TObjFunc
	var_119_int = 13415; // 0x84f PushI
	var_120_int = 14650; // 0x850 PushI
	var_121_int = 14649; // 0x851 PushI
	AddReply(var_119_int, var_120_int, var_121_int); // 0x852 TObjFunc
	var_122_int = 13417; // 0x854 PushI
	var_123_int = 14949; // 0x855 PushI
	var_124_int = 14652; // 0x856 PushI
	AddReply(var_122_int, var_123_int, var_124_int); // 0x857 TObjFunc
	var_125_int = 13414; // 0x859 PushI
	var_126_int = 14650; // 0x85a PushI
	var_127_int = 14648; // 0x85b PushI
	AddReply(var_125_int, var_126_int, var_127_int); // 0x85c TObjFunc
	return 0; // 0x85e Return
	
Label_2143:
	var_128_string = ""; // 0x85f PushV
	var_128_string = "Neutral"; // 0x860 MovS
	func_2056(var_26_bool, var_128_string); // 0x861 Call
	var_129_int = 13409; // 0x863 PushI
	SetMessage(var_129_int); // 0x864 TObjFunc
	ClearReplies(); // 0x866 TObjFunc
	var_130_bool = 0; var_131_object = Obj(); // 0x868 PushV
	var_131_object = var_1_object; // 0x869 MovT
	func_5437(var_131_object); // 0x86a Call
	if(var_130_bool == 0) goto Label_2162; // 0x86c JumpB
	var_136_int = 13411; // 0x86d PushI
	var_137_int = 13400; // 0x86e PushI
	var_138_int = 14645; // 0x86f PushI
	AddReply(var_136_int, var_137_int, var_138_int); // 0x870 TObjFunc
	
Label_2162:
	var_139_bool = 0; // 0x872 PushV
	var_139_bool = 0; // 0x873 MovB
	var_140_bool = 0; var_141_object = Obj(); // 0x874 PushV
	var_141_object = var_1_object; // 0x875 MovT
	func_5449(var_141_object); // 0x876 Call
	if(var_140_bool == 0) goto Label_2175; // 0x878 JumpB
	var_146_bool = 0; var_147_object = Obj(); // 0x879 PushV
	var_147_object = var_1_object; // 0x87a MovT
	func_5461(var_147_object); // 0x87b Call
	if(var_146_bool == 0) goto Label_2175; // 0x87d JumpB
	var_139_bool = 1; // 0x87e MovB
	
Label_2175:
	if(var_139_bool == 0) goto Label_2181; // 0x87f JumpB
	var_152_int = 13412; // 0x880 PushI
	var_153_int = 13452; // 0x881 PushI
	var_154_int = 14646; // 0x882 PushI
	AddReply(var_152_int, var_153_int, var_154_int); // 0x883 TObjFunc
	
Label_2181:
	var_155_int = 13410; // 0x885 PushI
	var_156_int = -1; // 0x886 PushI
	var_157_int = 14644; // 0x887 PushI
	AddReply(var_155_int, var_156_int, var_157_int); // 0x888 TObjFunc
	return 0; // 0x88a Return
	
Label_2202:
	var_158_int = 16357; // 0x89a PushI
	var_159_bool = var_25_string == var_158_int; // 0x89b Eq
	if(var_159_bool == 0) goto Label_2220; // 0x89c JumpB
	var_160_string = ""; // 0x89d PushV
	var_160_string = "Neutral"; // 0x89e MovS
	func_2056(var_26_bool, var_160_string); // 0x89f Call
	var_161_int = 15091; // 0x8a1 PushI
	SetMessage(var_161_int); // 0x8a2 TObjFunc
	ClearReplies(); // 0x8a4 TObjFunc
	var_162_int = 15092; // 0x8a6 PushI
	var_163_int = 16359; // 0x8a7 PushI
	var_164_int = 16358; // 0x8a8 PushI
	AddReply(var_162_int, var_163_int, var_164_int); // 0x8a9 TObjFunc
	return 0; // 0x8ab Return
	
Label_2220:
	var_165_int = 16359; // 0x8ac PushI
	var_166_bool = var_25_string == var_165_int; // 0x8ad Eq
	if(var_166_bool == 0) goto Label_2238; // 0x8ae JumpB
	var_167_string = ""; // 0x8af PushV
	var_167_string = "Neutral"; // 0x8b0 MovS
	func_2056(var_26_bool, var_167_string); // 0x8b1 Call
	var_168_int = 15093; // 0x8b3 PushI
	SetMessage(var_168_int); // 0x8b4 TObjFunc
	ClearReplies(); // 0x8b6 TObjFunc
	var_169_int = 15094; // 0x8b8 PushI
	var_170_int = -1; // 0x8b9 PushI
	var_171_int = 16360; // 0x8ba PushI
	AddReply(var_169_int, var_170_int, var_171_int); // 0x8bb TObjFunc
	return 0; // 0x8bd Return
	
Label_2238:
	var_172_int = 13452; // 0x8be PushI
	var_173_bool = var_25_string == var_172_int; // 0x8bf Eq
	if(var_173_bool == 0) goto Label_2256; // 0x8c0 JumpB
	var_174_string = ""; // 0x8c1 PushV
	var_174_string = "Neutral"; // 0x8c2 MovS
	func_2056(var_26_bool, var_174_string); // 0x8c3 Call
	var_175_int = 12293; // 0x8c5 PushI
	SetMessage(var_175_int); // 0x8c6 TObjFunc
	ClearReplies(); // 0x8c8 TObjFunc
	var_176_int = 12294; // 0x8ca PushI
	var_177_int = 13454; // 0x8cb PushI
	var_178_int = 13453; // 0x8cc PushI
	AddReply(var_176_int, var_177_int, var_178_int); // 0x8cd TObjFunc
	return 0; // 0x8cf Return
	
Label_2256:
	var_179_int = 13454; // 0x8d0 PushI
	var_180_bool = var_25_string == var_179_int; // 0x8d1 Eq
	if(var_180_bool == 0) goto Label_2279; // 0x8d2 JumpB
	var_181_string = ""; // 0x8d3 PushV
	var_181_string = "Neutral"; // 0x8d4 MovS
	func_2056(var_26_bool, var_181_string); // 0x8d5 Call
	var_182_int = 12295; // 0x8d7 PushI
	SetMessage(var_182_int); // 0x8d8 TObjFunc
	ClearReplies(); // 0x8da TObjFunc
	var_183_int = 12296; // 0x8dc PushI
	var_184_int = 13457; // 0x8dd PushI
	var_185_int = 13455; // 0x8de PushI
	AddReply(var_183_int, var_184_int, var_185_int); // 0x8df TObjFunc
	var_186_int = 12297; // 0x8e1 PushI
	var_187_int = -1; // 0x8e2 PushI
	var_188_int = 13456; // 0x8e3 PushI
	AddReply(var_186_int, var_187_int, var_188_int); // 0x8e4 TObjFunc
	return 0; // 0x8e6 Return
	
Label_2279:
	var_189_int = 13457; // 0x8e7 PushI
	var_190_bool = var_25_string == var_189_int; // 0x8e8 Eq
	if(var_190_bool == 0) goto Label_2297; // 0x8e9 JumpB
	var_191_string = ""; // 0x8ea PushV
	var_191_string = "Neutral"; // 0x8eb MovS
	func_2056(var_26_bool, var_191_string); // 0x8ec Call
	var_192_int = 12298; // 0x8ee PushI
	SetMessage(var_192_int); // 0x8ef TObjFunc
	ClearReplies(); // 0x8f1 TObjFunc
	var_193_int = 12299; // 0x8f3 PushI
	var_194_int = 13459; // 0x8f4 PushI
	var_195_int = 13458; // 0x8f5 PushI
	AddReply(var_193_int, var_194_int, var_195_int); // 0x8f6 TObjFunc
	return 0; // 0x8f8 Return
	
Label_2297:
	var_196_int = 13459; // 0x8f9 PushI
	var_197_bool = var_25_string == var_196_int; // 0x8fa Eq
	if(var_197_bool == 0) goto Label_2315; // 0x8fb JumpB
	var_198_string = ""; // 0x8fc PushV
	var_198_string = "Neutral"; // 0x8fd MovS
	func_2056(var_26_bool, var_198_string); // 0x8fe Call
	var_199_int = 12300; // 0x900 PushI
	SetMessage(var_199_int); // 0x901 TObjFunc
	ClearReplies(); // 0x903 TObjFunc
	var_200_int = 12301; // 0x905 PushI
	var_201_int = 13461; // 0x906 PushI
	var_202_int = 13460; // 0x907 PushI
	AddReply(var_200_int, var_201_int, var_202_int); // 0x908 TObjFunc
	return 0; // 0x90a Return
	
Label_2315:
	var_203_int = 13461; // 0x90b PushI
	var_204_bool = var_25_string == var_203_int; // 0x90c Eq
	if(var_204_bool == 0) goto Label_2333; // 0x90d JumpB
	var_205_string = ""; // 0x90e PushV
	var_205_string = "Neutral"; // 0x90f MovS
	func_2056(var_26_bool, var_205_string); // 0x910 Call
	var_206_int = 12302; // 0x912 PushI
	SetMessage(var_206_int); // 0x913 TObjFunc
	ClearReplies(); // 0x915 TObjFunc
	var_207_int = 12303; // 0x917 PushI
	var_208_int = 13463; // 0x918 PushI
	var_209_int = 13462; // 0x919 PushI
	AddReply(var_207_int, var_208_int, var_209_int); // 0x91a TObjFunc
	return 0; // 0x91c Return
	
Label_2333:
	var_210_int = 13463; // 0x91d PushI
	var_211_bool = var_25_string == var_210_int; // 0x91e Eq
	if(var_211_bool == 0) goto Label_2351; // 0x91f JumpB
	var_212_string = ""; // 0x920 PushV
	var_212_string = "Neutral"; // 0x921 MovS
	func_2056(var_26_bool, var_212_string); // 0x922 Call
	var_213_int = 12304; // 0x924 PushI
	SetMessage(var_213_int); // 0x925 TObjFunc
	ClearReplies(); // 0x927 TObjFunc
	var_214_int = 12305; // 0x929 PushI
	var_215_int = 13465; // 0x92a PushI
	var_216_int = 13464; // 0x92b PushI
	AddReply(var_214_int, var_215_int, var_216_int); // 0x92c TObjFunc
	return 0; // 0x92e Return
	
Label_2351:
	var_217_int = 13465; // 0x92f PushI
	var_218_bool = var_25_string == var_217_int; // 0x930 Eq
	if(var_218_bool == 0) goto Label_2374; // 0x931 JumpB
	var_219_string = ""; // 0x932 PushV
	var_219_string = "Neutral"; // 0x933 MovS
	func_2056(var_26_bool, var_219_string); // 0x934 Call
	var_220_int = 12306; // 0x936 PushI
	SetMessage(var_220_int); // 0x937 TObjFunc
	ClearReplies(); // 0x939 TObjFunc
	var_221_int = 12307; // 0x93b PushI
	var_222_int = -1; // 0x93c PushI
	var_223_int = 13466; // 0x93d PushI
	AddReply(var_221_int, var_222_int, var_223_int); // 0x93e TObjFunc
	var_224_int = 12308; // 0x940 PushI
	var_225_int = -1; // 0x941 PushI
	var_226_int = 13467; // 0x942 PushI
	AddReply(var_224_int, var_225_int, var_226_int); // 0x943 TObjFunc
	return 0; // 0x945 Return
	
Label_2374:
	var_227_int = 13400; // 0x946 PushI
	var_228_bool = var_25_string == var_227_int; // 0x947 Eq
	if(var_228_bool == 0) goto Label_2392; // 0x948 JumpB
	var_229_string = ""; // 0x949 PushV
	var_229_string = "Neutral"; // 0x94a MovS
	func_2056(var_26_bool, var_229_string); // 0x94b Call
	var_230_int = 12244; // 0x94d PushI
	SetMessage(var_230_int); // 0x94e TObjFunc
	ClearReplies(); // 0x950 TObjFunc
	var_231_int = 12245; // 0x952 PushI
	var_232_int = 13402; // 0x953 PushI
	var_233_int = 13401; // 0x954 PushI
	AddReply(var_231_int, var_232_int, var_233_int); // 0x955 TObjFunc
	return 0; // 0x957 Return
	
Label_2392:
	var_234_int = 13402; // 0x958 PushI
	var_235_bool = var_25_string == var_234_int; // 0x959 Eq
	if(var_235_bool == 0) goto Label_2415; // 0x95a JumpB
	var_236_string = ""; // 0x95b PushV
	var_236_string = "Neutral"; // 0x95c MovS
	func_2056(var_26_bool, var_236_string); // 0x95d Call
	var_237_int = 12246; // 0x95f PushI
	SetMessage(var_237_int); // 0x960 TObjFunc
	ClearReplies(); // 0x962 TObjFunc
	var_238_int = 12248; // 0x964 PushI
	var_239_int = 13405; // 0x965 PushI
	var_240_int = 13404; // 0x966 PushI
	AddReply(var_238_int, var_239_int, var_240_int); // 0x967 TObjFunc
	var_241_int = 12247; // 0x969 PushI
	var_242_int = 13409; // 0x96a PushI
	var_243_int = 13403; // 0x96b PushI
	AddReply(var_241_int, var_242_int, var_243_int); // 0x96c TObjFunc
	return 0; // 0x96e Return
	
Label_2415:
	var_244_int = 13405; // 0x96f PushI
	var_245_bool = var_25_string == var_244_int; // 0x970 Eq
	if(var_245_bool == 0) goto Label_2433; // 0x971 JumpB
	var_246_string = ""; // 0x972 PushV
	var_246_string = "Neutral"; // 0x973 MovS
	func_2056(var_26_bool, var_246_string); // 0x974 Call
	var_247_int = 12249; // 0x976 PushI
	SetMessage(var_247_int); // 0x977 TObjFunc
	ClearReplies(); // 0x979 TObjFunc
	var_248_int = 12250; // 0x97b PushI
	var_249_int = 13407; // 0x97c PushI
	var_250_int = 13406; // 0x97d PushI
	AddReply(var_248_int, var_249_int, var_250_int); // 0x97e TObjFunc
	return 0; // 0x980 Return
	
Label_2433:
	var_251_int = 13407; // 0x981 PushI
	var_252_bool = var_25_string == var_251_int; // 0x982 Eq
	if(var_252_bool == 0) goto Label_2451; // 0x983 JumpB
	var_253_string = ""; // 0x984 PushV
	var_253_string = "Neutral"; // 0x985 MovS
	func_2056(var_26_bool, var_253_string); // 0x986 Call
	var_254_int = 12251; // 0x988 PushI
	SetMessage(var_254_int); // 0x989 TObjFunc
	ClearReplies(); // 0x98b TObjFunc
	var_255_int = 12252; // 0x98d PushI
	var_256_int = 13409; // 0x98e PushI
	var_257_int = 13408; // 0x98f PushI
	AddReply(var_255_int, var_256_int, var_257_int); // 0x990 TObjFunc
	return 0; // 0x992 Return
	
Label_2451:
	var_258_int = 13409; // 0x993 PushI
	var_259_bool = var_25_string == var_258_int; // 0x994 Eq
	if(var_259_bool == 0) goto Label_2469; // 0x995 JumpB
	var_260_string = ""; // 0x996 PushV
	var_260_string = "Neutral"; // 0x997 MovS
	func_2056(var_26_bool, var_260_string); // 0x998 Call
	var_261_int = 12253; // 0x99a PushI
	SetMessage(var_261_int); // 0x99b TObjFunc
	ClearReplies(); // 0x99d TObjFunc
	var_262_int = 12254; // 0x99f PushI
	var_263_int = 13411; // 0x9a0 PushI
	var_264_int = 13410; // 0x9a1 PushI
	AddReply(var_262_int, var_263_int, var_264_int); // 0x9a2 TObjFunc
	return 0; // 0x9a4 Return
	
Label_2469:
	var_265_int = 13411; // 0x9a5 PushI
	var_266_bool = var_25_string == var_265_int; // 0x9a6 Eq
	if(var_266_bool == 0) goto Label_2487; // 0x9a7 JumpB
	var_267_string = ""; // 0x9a8 PushV
	var_267_string = "Neutral"; // 0x9a9 MovS
	func_2056(var_26_bool, var_267_string); // 0x9aa Call
	var_268_int = 12255; // 0x9ac PushI
	SetMessage(var_268_int); // 0x9ad TObjFunc
	ClearReplies(); // 0x9af TObjFunc
	var_269_int = 12256; // 0x9b1 PushI
	var_270_int = -1; // 0x9b2 PushI
	var_271_int = 13413; // 0x9b3 PushI
	AddReply(var_269_int, var_270_int, var_271_int); // 0x9b4 TObjFunc
	return 0; // 0x9b6 Return
	
Label_2487:
	var_272_int = 14949; // 0x9b7 PushI
	var_273_bool = var_25_string == var_272_int; // 0x9b8 Eq
	if(var_273_bool == 0) goto Label_2505; // 0x9b9 JumpB
	var_274_string = ""; // 0x9ba PushV
	var_274_string = "Neutral"; // 0x9bb MovS
	func_2056(var_26_bool, var_274_string); // 0x9bc Call
	var_275_int = 13688; // 0x9be PushI
	SetMessage(var_275_int); // 0x9bf TObjFunc
	ClearReplies(); // 0x9c1 TObjFunc
	var_276_int = 13689; // 0x9c3 PushI
	var_277_int = 14952; // 0x9c4 PushI
	var_278_int = 14951; // 0x9c5 PushI
	AddReply(var_276_int, var_277_int, var_278_int); // 0x9c6 TObjFunc
	return 0; // 0x9c8 Return
	
Label_2505:
	var_279_int = 14952; // 0x9c9 PushI
	var_280_bool = var_25_string == var_279_int; // 0x9ca Eq
	if(var_280_bool == 0) goto Label_2533; // 0x9cb JumpB
	var_281_string = ""; // 0x9cc PushV
	var_281_string = "Neutral"; // 0x9cd MovS
	func_2056(var_26_bool, var_281_string); // 0x9ce Call
	var_282_int = 13690; // 0x9d0 PushI
	SetMessage(var_282_int); // 0x9d1 TObjFunc
	ClearReplies(); // 0x9d3 TObjFunc
	var_283_int = 13691; // 0x9d5 PushI
	var_284_int = 14650; // 0x9d6 PushI
	var_285_int = 14953; // 0x9d7 PushI
	AddReply(var_283_int, var_284_int, var_285_int); // 0x9d8 TObjFunc
	var_286_int = 13692; // 0x9da PushI
	var_287_int = 14650; // 0x9db PushI
	var_288_int = 14954; // 0x9dc PushI
	AddReply(var_286_int, var_287_int, var_288_int); // 0x9dd TObjFunc
	var_289_int = 13693; // 0x9df PushI
	var_290_int = 14650; // 0x9e0 PushI
	var_291_int = 14955; // 0x9e1 PushI
	AddReply(var_289_int, var_290_int, var_291_int); // 0x9e2 TObjFunc
	return 0; // 0x9e4 Return
	
Label_2533:
	var_292_int = 14650; // 0x9e5 PushI
	var_293_bool = var_25_string == var_292_int; // 0x9e6 Eq
	if(var_293_bool == 0) goto Label_2551; // 0x9e7 JumpB
	var_294_string = ""; // 0x9e8 PushV
	var_294_string = "Neutral"; // 0x9e9 MovS
	func_2056(var_26_bool, var_294_string); // 0x9ea Call
	var_295_int = 13416; // 0x9ec PushI
	SetMessage(var_295_int); // 0x9ed TObjFunc
	ClearReplies(); // 0x9ef TObjFunc
	var_296_int = 13421; // 0x9f1 PushI
	var_297_int = 14959; // 0x9f2 PushI
	var_298_int = 14657; // 0x9f3 PushI
	AddReply(var_296_int, var_297_int, var_298_int); // 0x9f4 TObjFunc
	return 0; // 0x9f6 Return
	
Label_2551:
	var_299_int = 14959; // 0x9f7 PushI
	var_300_bool = var_25_string == var_299_int; // 0x9f8 Eq
	if(var_300_bool == 0) goto Label_2579; // 0x9f9 JumpB
	var_301_string = ""; // 0x9fa PushV
	var_301_string = "Neutral"; // 0x9fb MovS
	func_2056(var_26_bool, var_301_string); // 0x9fc Call
	var_302_int = 13694; // 0x9fe PushI
	SetMessage(var_302_int); // 0x9ff TObjFunc
	ClearReplies(); // 0xa01 TObjFunc
	var_303_int = 13695; // 0xa03 PushI
	var_304_int = 14963; // 0xa04 PushI
	var_305_int = 14960; // 0xa05 PushI
	AddReply(var_303_int, var_304_int, var_305_int); // 0xa06 TObjFunc
	var_306_int = 13696; // 0xa08 PushI
	var_307_int = 14963; // 0xa09 PushI
	var_308_int = 14961; // 0xa0a PushI
	AddReply(var_306_int, var_307_int, var_308_int); // 0xa0b TObjFunc
	var_309_int = 13697; // 0xa0d PushI
	var_310_int = 14963; // 0xa0e PushI
	var_311_int = 14962; // 0xa0f PushI
	AddReply(var_309_int, var_310_int, var_311_int); // 0xa10 TObjFunc
	return 0; // 0xa12 Return
	
Label_2579:
	var_312_int = 14963; // 0xa13 PushI
	var_313_bool = var_25_string == var_312_int; // 0xa14 Eq
	if(var_313_bool == 0) goto Label_2602; // 0xa15 JumpB
	var_314_string = ""; // 0xa16 PushV
	var_314_string = "Neutral"; // 0xa17 MovS
	func_2056(var_26_bool, var_314_string); // 0xa18 Call
	var_315_int = 13698; // 0xa1a PushI
	SetMessage(var_315_int); // 0xa1b TObjFunc
	ClearReplies(); // 0xa1d TObjFunc
	var_316_int = 13699; // 0xa1f PushI
	var_317_int = 14970; // 0xa20 PushI
	var_318_int = 14964; // 0xa21 PushI
	AddReply(var_316_int, var_317_int, var_318_int); // 0xa22 TObjFunc
	var_319_int = 13700; // 0xa24 PushI
	var_320_int = 14968; // 0xa25 PushI
	var_321_int = 14967; // 0xa26 PushI
	AddReply(var_319_int, var_320_int, var_321_int); // 0xa27 TObjFunc
	return 0; // 0xa29 Return
	
Label_2602:
	var_322_int = 14968; // 0xa2a PushI
	var_323_bool = var_25_string == var_322_int; // 0xa2b Eq
	if(var_323_bool == 0) goto Label_2620; // 0xa2c JumpB
	var_324_string = ""; // 0xa2d PushV
	var_324_string = "Neutral"; // 0xa2e MovS
	func_2056(var_26_bool, var_324_string); // 0xa2f Call
	var_325_int = 13701; // 0xa31 PushI
	SetMessage(var_325_int); // 0xa32 TObjFunc
	ClearReplies(); // 0xa34 TObjFunc
	var_326_int = 13702; // 0xa36 PushI
	var_327_int = 14970; // 0xa37 PushI
	var_328_int = 14969; // 0xa38 PushI
	AddReply(var_326_int, var_327_int, var_328_int); // 0xa39 TObjFunc
	return 0; // 0xa3b Return
	
Label_2620:
	var_329_int = 14970; // 0xa3c PushI
	var_330_bool = var_25_string == var_329_int; // 0xa3d Eq
	if(var_330_bool == 0) goto Label_2638; // 0xa3e JumpB
	var_331_string = ""; // 0xa3f PushV
	var_331_string = "Neutral"; // 0xa40 MovS
	func_2056(var_26_bool, var_331_string); // 0xa41 Call
	var_332_int = 13703; // 0xa43 PushI
	SetMessage(var_332_int); // 0xa44 TObjFunc
	ClearReplies(); // 0xa46 TObjFunc
	var_333_int = 13704; // 0xa48 PushI
	var_334_int = 14972; // 0xa49 PushI
	var_335_int = 14971; // 0xa4a PushI
	AddReply(var_333_int, var_334_int, var_335_int); // 0xa4b TObjFunc
	return 0; // 0xa4d Return
	
Label_2638:
	var_336_int = 14972; // 0xa4e PushI
	var_337_bool = var_25_string == var_336_int; // 0xa4f Eq
	if(var_337_bool == 0) goto Label_2656; // 0xa50 JumpB
	var_338_string = ""; // 0xa51 PushV
	var_338_string = "Neutral"; // 0xa52 MovS
	func_2056(var_26_bool, var_338_string); // 0xa53 Call
	var_339_int = 13705; // 0xa55 PushI
	SetMessage(var_339_int); // 0xa56 TObjFunc
	ClearReplies(); // 0xa58 TObjFunc
	var_340_int = 13706; // 0xa5a PushI
	var_341_int = 14975; // 0xa5b PushI
	var_342_int = 14974; // 0xa5c PushI
	AddReply(var_340_int, var_341_int, var_342_int); // 0xa5d TObjFunc
	return 0; // 0xa5f Return
	
Label_2656:
	var_343_int = 14975; // 0xa60 PushI
	var_344_bool = var_25_string == var_343_int; // 0xa61 Eq
	if(var_344_bool == 0) goto Label_2679; // 0xa62 JumpB
	var_345_string = ""; // 0xa63 PushV
	var_345_string = "Neutral"; // 0xa64 MovS
	func_2056(var_26_bool, var_345_string); // 0xa65 Call
	var_346_int = 13707; // 0xa67 PushI
	SetMessage(var_346_int); // 0xa68 TObjFunc
	ClearReplies(); // 0xa6a TObjFunc
	var_347_int = 13708; // 0xa6c PushI
	var_348_int = 14978; // 0xa6d PushI
	var_349_int = 14976; // 0xa6e PushI
	AddReply(var_347_int, var_348_int, var_349_int); // 0xa6f TObjFunc
	var_350_int = 13709; // 0xa71 PushI
	var_351_int = 14978; // 0xa72 PushI
	var_352_int = 14977; // 0xa73 PushI
	AddReply(var_350_int, var_351_int, var_352_int); // 0xa74 TObjFunc
	return 0; // 0xa76 Return
	
Label_2679:
	var_353_int = 14978; // 0xa77 PushI
	var_354_bool = var_25_string == var_353_int; // 0xa78 Eq
	if(var_354_bool == 0) goto Label_2697; // 0xa79 JumpB
	var_355_string = ""; // 0xa7a PushV
	var_355_string = "Neutral"; // 0xa7b MovS
	func_2056(var_26_bool, var_355_string); // 0xa7c Call
	var_356_int = 13710; // 0xa7e PushI
	SetMessage(var_356_int); // 0xa7f TObjFunc
	ClearReplies(); // 0xa81 TObjFunc
	var_357_int = 13711; // 0xa83 PushI
	var_358_int = -1; // 0xa84 PushI
	var_359_int = 14980; // 0xa85 PushI
	AddReply(var_357_int, var_358_int, var_359_int); // 0xa86 TObjFunc
	return 0; // 0xa88 Return
	
Label_2697:
	var_3_string = 1; // 0xa89 TMovB
	var_360_bool = 0; // 0xa8a PushV
	func_4912(var_360_bool); // 0xa8b Call
	if(var_360_bool == 0) goto Label_2705; // 0xa8d JumpB
	lshStopAnimation(); // 0xa8e Func
	goto Label_2707; // 0xa90 Jump
	
Label_2707:
	return 0; // 0xa93 Return
	
Label_2705:
	StopAnimation(); // 0xa91 Func
	
Label_2709:
	return 0; // 0xa95 Return
}


task_7_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool)
{
	var_27_int = 1; // 0xb51 PushI
	if(var_27_int == 0) goto Label_3174; // 0xb52 JumpB
	func_4838(); // 0xb54 Call
	var_29_int = 14106; // 0xb56 PushI
	var_30_bool = var_26_bool == var_29_int; // 0xb57 Eq
	if(var_30_bool == 0) goto Label_2910; // 0xb58 JumpB
	var_31_object = Obj(); var_32_object = Obj(); // 0xb59 PushV
	var_31_object = var_1_object; // 0xb5a MovT
	var_32_object = var_0_object; // 0xb5b MovT
	func_5197(); // 0xb5c Call
	
Label_2910:
	var_91_int = 14118; // 0xb5e PushI
	var_92_bool = var_26_bool == var_91_int; // 0xb5f Eq
	if(var_92_bool == 0) goto Label_2918; // 0xb60 JumpB
	var_93_object = Obj(); var_94_object = Obj(); // 0xb61 PushV
	var_93_object = var_1_object; // 0xb62 MovT
	var_94_object = var_0_object; // 0xb63 MovT
	func_5234(); // 0xb64 Call
	
Label_2918:
	var_116_int = 14114; // 0xb66 PushI
	var_117_bool = var_26_bool == var_116_int; // 0xb67 Eq
	if(var_117_bool == 0) goto Label_2926; // 0xb68 JumpB
	var_118_object = Obj(); var_119_object = Obj(); // 0xb69 PushV
	var_118_object = var_1_object; // 0xb6a MovT
	var_119_object = var_0_object; // 0xb6b MovT
	func_5264(); // 0xb6c Call
	
Label_2926:
	var_122_int = 14101; // 0xb6e PushI
	var_123_bool = var_25_string == var_122_int; // 0xb6f Eq
	if(var_123_bool == 0) goto Label_2998; // 0xb70 JumpB
	var_124_bool = 0; var_125_object = Obj(); // 0xb71 PushV
	var_125_object = var_1_object; // 0xb72 MovT
	func_5569(var_125_object); // 0xb73 Call
	if(var_124_bool == 0) goto Label_2954; // 0xb75 JumpB
	var_132_object = Obj(); var_133_object = Obj(); // 0xb76 PushV
	var_132_object = var_1_object; // 0xb77 MovT
	var_133_object = var_0_object; // 0xb78 MovT
	func_5228(); // 0xb79 Call
	var_136_string = ""; // 0xb7b PushV
	var_136_string = "Neutral"; // 0xb7c MovS
	func_2880(var_26_bool, var_136_string); // 0xb7d Call
	var_151_int = 12899; // 0xb7f PushI
	SetMessage(var_151_int); // 0xb80 TObjFunc
	ClearReplies(); // 0xb82 TObjFunc
	var_152_int = 12900; // 0xb84 PushI
	var_153_int = 14103; // 0xb85 PushI
	var_154_int = 14102; // 0xb86 PushI
	AddReply(var_152_int, var_153_int, var_154_int); // 0xb87 TObjFunc
	return 0; // 0xb89 Return
	
Label_2954:
	var_155_string = ""; // 0xb8a PushV
	var_155_string = "Neutral"; // 0xb8b MovS
	func_2880(var_26_bool, var_155_string); // 0xb8c Call
	var_156_int = 12905; // 0xb8e PushI
	SetMessage(var_156_int); // 0xb8f TObjFunc
	ClearReplies(); // 0xb91 TObjFunc
	var_157_bool = 0; var_158_object = Obj(); // 0xb93 PushV
	var_158_object = var_1_object; // 0xb94 MovT
	func_5605(var_158_object); // 0xb95 Call
	if(var_157_bool == 0) goto Label_2973; // 0xb97 JumpB
	var_163_int = 12906; // 0xb98 PushI
	var_164_int = 14109; // 0xb99 PushI
	var_165_int = 14108; // 0xb9a PushI
	AddReply(var_163_int, var_164_int, var_165_int); // 0xb9b TObjFunc
	
Label_2973:
	var_166_bool = 0; // 0xb9d PushV
	var_166_bool = 0; // 0xb9e MovB
	var_167_bool = 0; var_168_object = Obj(); // 0xb9f PushV
	var_168_object = var_1_object; // 0xba0 MovT
	func_5581(var_168_object); // 0xba1 Call
	if(var_167_bool == 0) goto Label_2986; // 0xba3 JumpB
	var_173_bool = 0; var_174_object = Obj(); // 0xba4 PushV
	var_174_object = var_1_object; // 0xba5 MovT
	func_5593(var_174_object); // 0xba6 Call
	if(var_173_bool == 0) goto Label_2986; // 0xba8 JumpB
	var_166_bool = 1; // 0xba9 MovB
	
Label_2986:
	if(var_166_bool == 0) goto Label_2992; // 0xbaa JumpB
	var_179_int = 12912; // 0xbab PushI
	var_180_int = 14119; // 0xbac PushI
	var_181_int = 14114; // 0xbad PushI
	AddReply(var_179_int, var_180_int, var_181_int); // 0xbae TObjFunc
	
Label_2992:
	var_182_int = 12911; // 0xbb0 PushI
	var_183_int = -1; // 0xbb1 PushI
	var_184_int = 14113; // 0xbb2 PushI
	AddReply(var_182_int, var_183_int, var_184_int); // 0xbb3 TObjFunc
	return 0; // 0xbb5 Return
	
Label_2998:
	var_185_int = 14119; // 0xbb6 PushI
	var_186_bool = var_25_string == var_185_int; // 0xbb7 Eq
	if(var_186_bool == 0) goto Label_3021; // 0xbb8 JumpB
	var_187_string = ""; // 0xbb9 PushV
	var_187_string = "Neutral"; // 0xbba MovS
	func_2880(var_26_bool, var_187_string); // 0xbbb Call
	var_188_int = 12915; // 0xbbd PushI
	SetMessage(var_188_int); // 0xbbe TObjFunc
	ClearReplies(); // 0xbc0 TObjFunc
	var_189_int = 12916; // 0xbc2 PushI
	var_190_int = 14122; // 0xbc3 PushI
	var_191_int = 14120; // 0xbc4 PushI
	AddReply(var_189_int, var_190_int, var_191_int); // 0xbc5 TObjFunc
	var_192_int = 12917; // 0xbc7 PushI
	var_193_int = 14122; // 0xbc8 PushI
	var_194_int = 14121; // 0xbc9 PushI
	AddReply(var_192_int, var_193_int, var_194_int); // 0xbca TObjFunc
	return 0; // 0xbcc Return
	
Label_3021:
	var_195_int = 14122; // 0xbcd PushI
	var_196_bool = var_25_string == var_195_int; // 0xbce Eq
	if(var_196_bool == 0) goto Label_3039; // 0xbcf JumpB
	var_197_string = ""; // 0xbd0 PushV
	var_197_string = "Neutral"; // 0xbd1 MovS
	func_2880(var_26_bool, var_197_string); // 0xbd2 Call
	var_198_int = 12918; // 0xbd4 PushI
	SetMessage(var_198_int); // 0xbd5 TObjFunc
	ClearReplies(); // 0xbd7 TObjFunc
	var_199_int = 12919; // 0xbd9 PushI
	var_200_int = 14125; // 0xbda PushI
	var_201_int = 14124; // 0xbdb PushI
	AddReply(var_199_int, var_200_int, var_201_int); // 0xbdc TObjFunc
	return 0; // 0xbde Return
	
Label_3039:
	var_202_int = 14125; // 0xbdf PushI
	var_203_bool = var_25_string == var_202_int; // 0xbe0 Eq
	if(var_203_bool == 0) goto Label_3062; // 0xbe1 JumpB
	var_204_string = ""; // 0xbe2 PushV
	var_204_string = "Neutral"; // 0xbe3 MovS
	func_2880(var_26_bool, var_204_string); // 0xbe4 Call
	var_205_int = 12920; // 0xbe6 PushI
	SetMessage(var_205_int); // 0xbe7 TObjFunc
	ClearReplies(); // 0xbe9 TObjFunc
	var_206_int = 12921; // 0xbeb PushI
	var_207_int = -1; // 0xbec PushI
	var_208_int = 14126; // 0xbed PushI
	AddReply(var_206_int, var_207_int, var_208_int); // 0xbee TObjFunc
	var_209_int = 12922; // 0xbf0 PushI
	var_210_int = 14128; // 0xbf1 PushI
	var_211_int = 14127; // 0xbf2 PushI
	AddReply(var_209_int, var_210_int, var_211_int); // 0xbf3 TObjFunc
	return 0; // 0xbf5 Return
	
Label_3062:
	var_212_int = 14128; // 0xbf6 PushI
	var_213_bool = var_25_string == var_212_int; // 0xbf7 Eq
	if(var_213_bool == 0) goto Label_3080; // 0xbf8 JumpB
	var_214_string = ""; // 0xbf9 PushV
	var_214_string = "Neutral"; // 0xbfa MovS
	func_2880(var_26_bool, var_214_string); // 0xbfb Call
	var_215_int = 12923; // 0xbfd PushI
	SetMessage(var_215_int); // 0xbfe TObjFunc
	ClearReplies(); // 0xc00 TObjFunc
	var_216_int = 12924; // 0xc02 PushI
	var_217_int = -1; // 0xc03 PushI
	var_218_int = 14129; // 0xc04 PushI
	AddReply(var_216_int, var_217_int, var_218_int); // 0xc05 TObjFunc
	return 0; // 0xc07 Return
	
Label_3080:
	var_219_int = 14109; // 0xc08 PushI
	var_220_bool = var_25_string == var_219_int; // 0xc09 Eq
	if(var_220_bool == 0) goto Label_3108; // 0xc0a JumpB
	var_221_string = ""; // 0xc0b PushV
	var_221_string = "Neutral"; // 0xc0c MovS
	func_2880(var_26_bool, var_221_string); // 0xc0d Call
	var_222_int = 12907; // 0xc0f PushI
	SetMessage(var_222_int); // 0xc10 TObjFunc
	ClearReplies(); // 0xc12 TObjFunc
	var_223_int = 12908; // 0xc14 PushI
	var_224_int = 14115; // 0xc15 PushI
	var_225_int = 14110; // 0xc16 PushI
	AddReply(var_223_int, var_224_int, var_225_int); // 0xc17 TObjFunc
	var_226_int = 12909; // 0xc19 PushI
	var_227_int = 14115; // 0xc1a PushI
	var_228_int = 14111; // 0xc1b PushI
	AddReply(var_226_int, var_227_int, var_228_int); // 0xc1c TObjFunc
	var_229_int = 12910; // 0xc1e PushI
	var_230_int = 14115; // 0xc1f PushI
	var_231_int = 14112; // 0xc20 PushI
	AddReply(var_229_int, var_230_int, var_231_int); // 0xc21 TObjFunc
	return 0; // 0xc23 Return
	
Label_3108:
	var_232_int = 14115; // 0xc24 PushI
	var_233_bool = var_25_string == var_232_int; // 0xc25 Eq
	if(var_233_bool == 0) goto Label_3126; // 0xc26 JumpB
	var_234_string = ""; // 0xc27 PushV
	var_234_string = "Neutral"; // 0xc28 MovS
	func_2880(var_26_bool, var_234_string); // 0xc29 Call
	var_235_int = 12913; // 0xc2b PushI
	SetMessage(var_235_int); // 0xc2c TObjFunc
	ClearReplies(); // 0xc2e TObjFunc
	var_236_int = 12914; // 0xc30 PushI
	var_237_int = -1; // 0xc31 PushI
	var_238_int = 14118; // 0xc32 PushI
	AddReply(var_236_int, var_237_int, var_238_int); // 0xc33 TObjFunc
	return 0; // 0xc35 Return
	
Label_3126:
	var_239_int = 14103; // 0xc36 PushI
	var_240_bool = var_25_string == var_239_int; // 0xc37 Eq
	if(var_240_bool == 0) goto Label_3144; // 0xc38 JumpB
	var_241_string = ""; // 0xc39 PushV
	var_241_string = "Neutral"; // 0xc3a MovS
	func_2880(var_26_bool, var_241_string); // 0xc3b Call
	var_242_int = 12901; // 0xc3d PushI
	SetMessage(var_242_int); // 0xc3e TObjFunc
	ClearReplies(); // 0xc40 TObjFunc
	var_243_int = 12902; // 0xc42 PushI
	var_244_int = 14105; // 0xc43 PushI
	var_245_int = 14104; // 0xc44 PushI
	AddReply(var_243_int, var_244_int, var_245_int); // 0xc45 TObjFunc
	return 0; // 0xc47 Return
	
Label_3144:
	var_246_int = 14105; // 0xc48 PushI
	var_247_bool = var_25_string == var_246_int; // 0xc49 Eq
	if(var_247_bool == 0) goto Label_3162; // 0xc4a JumpB
	var_248_string = ""; // 0xc4b PushV
	var_248_string = "Neutral"; // 0xc4c MovS
	func_2880(var_26_bool, var_248_string); // 0xc4d Call
	var_249_int = 12903; // 0xc4f PushI
	SetMessage(var_249_int); // 0xc50 TObjFunc
	ClearReplies(); // 0xc52 TObjFunc
	var_250_int = 12904; // 0xc54 PushI
	var_251_int = -1; // 0xc55 PushI
	var_252_int = 14106; // 0xc56 PushI
	AddReply(var_250_int, var_251_int, var_252_int); // 0xc57 TObjFunc
	return 0; // 0xc59 Return
	
Label_3162:
	var_3_string = 1; // 0xc5a TMovB
	var_253_bool = 0; // 0xc5b PushV
	func_4912(var_253_bool); // 0xc5c Call
	if(var_253_bool == 0) goto Label_3170; // 0xc5e JumpB
	lshStopAnimation(); // 0xc5f Func
	goto Label_3172; // 0xc61 Jump
	
Label_3172:
	return 0; // 0xc64 Return
	
Label_3170:
	StopAnimation(); // 0xc62 Func
	
Label_3174:
	return 0; // 0xc66 Return
}


task_9_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool)
{
	var_27_int = 1; // 0xd3b PushI
	if(var_27_int == 0) goto Label_4123; // 0xd3c JumpB
	func_4838(); // 0xd3e Call
	var_29_int = 15046; // 0xd40 PushI
	var_30_bool = var_26_bool == var_29_int; // 0xd41 Eq
	if(var_30_bool == 0) goto Label_3400; // 0xd42 JumpB
	var_31_object = Obj(); var_32_object = Obj(); // 0xd43 PushV
	var_31_object = var_1_object; // 0xd44 MovT
	var_32_object = var_0_object; // 0xd45 MovT
	func_5173(); // 0xd46 Call
	
Label_3400:
	var_35_int = 15069; // 0xd48 PushI
	var_36_bool = var_26_bool == var_35_int; // 0xd49 Eq
	if(var_36_bool == 0) goto Label_3408; // 0xd4a JumpB
	var_37_object = Obj(); var_38_object = Obj(); // 0xd4b PushV
	var_37_object = var_1_object; // 0xd4c MovT
	var_38_object = var_0_object; // 0xd4d MovT
	func_5179(); // 0xd4e Call
	
Label_3408:
	var_41_int = 15079; // 0xd50 PushI
	var_42_bool = var_26_bool == var_41_int; // 0xd51 Eq
	if(var_42_bool == 0) goto Label_3416; // 0xd52 JumpB
	var_43_object = Obj(); var_44_object = Obj(); // 0xd53 PushV
	var_43_object = var_1_object; // 0xd54 MovT
	var_44_object = var_0_object; // 0xd55 MovT
	func_5185(); // 0xd56 Call
	
Label_3416:
	var_47_int = 15092; // 0xd58 PushI
	var_48_bool = var_26_bool == var_47_int; // 0xd59 Eq
	if(var_48_bool == 0) goto Label_3424; // 0xd5a JumpB
	var_49_object = Obj(); var_50_object = Obj(); // 0xd5b PushV
	var_49_object = var_1_object; // 0xd5c MovT
	var_50_object = var_0_object; // 0xd5d MovT
	func_5191(); // 0xd5e Call
	
Label_3424:
	var_53_int = 15028; // 0xd60 PushI
	var_54_bool = var_25_string == var_53_int; // 0xd61 Eq
	if(var_54_bool == 0) goto Label_3521; // 0xd62 JumpB
	var_55_bool = 0; var_56_object = Obj(); // 0xd63 PushV
	var_56_object = var_1_object; // 0xd64 MovT
	func_5509(var_56_object); // 0xd65 Call
	if(var_55_bool == 0) goto Label_3457; // 0xd67 JumpB
	var_63_object = Obj(); var_64_object = Obj(); // 0xd68 PushV
	var_63_object = var_1_object; // 0xd69 MovT
	var_64_object = var_0_object; // 0xd6a MovT
	func_5167(); // 0xd6b Call
	var_67_string = ""; // 0xd6d PushV
	var_67_string = "Neutral"; // 0xd6e MovS
	func_3370(var_26_bool, var_67_string); // 0xd6f Call
	var_82_int = 13802; // 0xd71 PushI
	SetMessage(var_82_int); // 0xd72 TObjFunc
	ClearReplies(); // 0xd74 TObjFunc
	var_83_int = 13803; // 0xd76 PushI
	var_84_int = 15030; // 0xd77 PushI
	var_85_int = 15029; // 0xd78 PushI
	AddReply(var_83_int, var_84_int, var_85_int); // 0xd79 TObjFunc
	var_86_int = 13815; // 0xd7b PushI
	var_87_int = 15042; // 0xd7c PushI
	var_88_int = 15041; // 0xd7d PushI
	AddReply(var_86_int, var_87_int, var_88_int); // 0xd7e TObjFunc
	return 0; // 0xd80 Return
	
Label_3457:
	var_89_string = ""; // 0xd81 PushV
	var_89_string = "Neutral"; // 0xd82 MovS
	func_3370(var_26_bool, var_89_string); // 0xd83 Call
	var_90_int = 13818; // 0xd85 PushI
	SetMessage(var_90_int); // 0xd86 TObjFunc
	ClearReplies(); // 0xd88 TObjFunc
	var_91_bool = 0; var_92_object = Obj(); // 0xd8a PushV
	var_92_object = var_1_object; // 0xd8b MovT
	func_5521(var_92_object); // 0xd8c Call
	if(var_91_bool == 0) goto Label_3476; // 0xd8e JumpB
	var_97_int = 13819; // 0xd8f PushI
	var_98_int = 15047; // 0xd90 PushI
	var_99_int = 15046; // 0xd91 PushI
	AddReply(var_97_int, var_98_int, var_99_int); // 0xd92 TObjFunc
	
Label_3476:
	var_100_bool = 0; // 0xd94 PushV
	var_100_bool = 0; // 0xd95 MovB
	var_101_bool = 0; var_102_object = Obj(); // 0xd96 PushV
	var_102_object = var_1_object; // 0xd97 MovT
	func_5473(var_102_object); // 0xd98 Call
	if(var_101_bool == 0) goto Label_3489; // 0xd9a JumpB
	var_107_bool = 0; var_108_object = Obj(); // 0xd9b PushV
	var_108_object = var_1_object; // 0xd9c MovT
	func_5533(var_108_object); // 0xd9d Call
	if(var_107_bool == 0) goto Label_3489; // 0xd9f JumpB
	var_100_bool = 1; // 0xda0 MovB
	
Label_3489:
	if(var_100_bool == 0) goto Label_3495; // 0xda1 JumpB
	var_113_int = 13842; // 0xda2 PushI
	var_114_int = 15070; // 0xda3 PushI
	var_115_int = 15069; // 0xda4 PushI
	AddReply(var_113_int, var_114_int, var_115_int); // 0xda5 TObjFunc
	
Label_3495:
	var_116_bool = 0; var_117_object = Obj(); // 0xda7 PushV
	var_117_object = var_1_object; // 0xda8 MovT
	func_5545(var_117_object); // 0xda9 Call
	if(var_116_bool == 0) goto Label_3505; // 0xdab JumpB
	var_122_int = 13852; // 0xdac PushI
	var_123_int = 15080; // 0xdad PushI
	var_124_int = 15079; // 0xdae PushI
	AddReply(var_122_int, var_123_int, var_124_int); // 0xdaf TObjFunc
	
Label_3505:
	var_125_bool = 0; var_126_object = Obj(); // 0xdb1 PushV
	var_126_object = var_1_object; // 0xdb2 MovT
	func_5557(var_126_object); // 0xdb3 Call
	if(var_125_bool == 0) goto Label_3515; // 0xdb5 JumpB
	var_131_int = 13865; // 0xdb6 PushI
	var_132_int = 15093; // 0xdb7 PushI
	var_133_int = 15092; // 0xdb8 PushI
	AddReply(var_131_int, var_132_int, var_133_int); // 0xdb9 TObjFunc
	
Label_3515:
	var_134_int = 13880; // 0xdbb PushI
	var_135_int = -1; // 0xdbc PushI
	var_136_int = 15107; // 0xdbd PushI
	AddReply(var_134_int, var_135_int, var_136_int); // 0xdbe TObjFunc
	return 0; // 0xdc0 Return
	
Label_3521:
	var_137_int = 15093; // 0xdc1 PushI
	var_138_bool = var_25_string == var_137_int; // 0xdc2 Eq
	if(var_138_bool == 0) goto Label_3539; // 0xdc3 JumpB
	var_139_string = ""; // 0xdc4 PushV
	var_139_string = "Neutral"; // 0xdc5 MovS
	func_3370(var_26_bool, var_139_string); // 0xdc6 Call
	var_140_int = 13866; // 0xdc8 PushI
	SetMessage(var_140_int); // 0xdc9 TObjFunc
	ClearReplies(); // 0xdcb TObjFunc
	var_141_int = 13867; // 0xdcd PushI
	var_142_int = 15095; // 0xdce PushI
	var_143_int = 15094; // 0xdcf PushI
	AddReply(var_141_int, var_142_int, var_143_int); // 0xdd0 TObjFunc
	return 0; // 0xdd2 Return
	
Label_3539:
	var_144_int = 15095; // 0xdd3 PushI
	var_145_bool = var_25_string == var_144_int; // 0xdd4 Eq
	if(var_145_bool == 0) goto Label_3562; // 0xdd5 JumpB
	var_146_string = ""; // 0xdd6 PushV
	var_146_string = "Neutral"; // 0xdd7 MovS
	func_3370(var_26_bool, var_146_string); // 0xdd8 Call
	var_147_int = 13868; // 0xdda PushI
	SetMessage(var_147_int); // 0xddb TObjFunc
	ClearReplies(); // 0xddd TObjFunc
	var_148_int = 13869; // 0xddf PushI
	var_149_int = 15097; // 0xde0 PushI
	var_150_int = 15096; // 0xde1 PushI
	AddReply(var_148_int, var_149_int, var_150_int); // 0xde2 TObjFunc
	var_151_int = 13876; // 0xde4 PushI
	var_152_int = 15104; // 0xde5 PushI
	var_153_int = 15103; // 0xde6 PushI
	AddReply(var_151_int, var_152_int, var_153_int); // 0xde7 TObjFunc
	return 0; // 0xde9 Return
	
Label_3562:
	var_154_int = 15104; // 0xdea PushI
	var_155_bool = var_25_string == var_154_int; // 0xdeb Eq
	if(var_155_bool == 0) goto Label_3585; // 0xdec JumpB
	var_156_string = ""; // 0xded PushV
	var_156_string = "Neutral"; // 0xdee MovS
	func_3370(var_26_bool, var_156_string); // 0xdef Call
	var_157_int = 13877; // 0xdf1 PushI
	SetMessage(var_157_int); // 0xdf2 TObjFunc
	ClearReplies(); // 0xdf4 TObjFunc
	var_158_int = 13878; // 0xdf6 PushI
	var_159_int = -1; // 0xdf7 PushI
	var_160_int = 15105; // 0xdf8 PushI
	AddReply(var_158_int, var_159_int, var_160_int); // 0xdf9 TObjFunc
	var_161_int = 13879; // 0xdfb PushI
	var_162_int = -1; // 0xdfc PushI
	var_163_int = 15106; // 0xdfd PushI
	AddReply(var_161_int, var_162_int, var_163_int); // 0xdfe TObjFunc
	return 0; // 0xe00 Return
	
Label_3585:
	var_164_int = 15097; // 0xe01 PushI
	var_165_bool = var_25_string == var_164_int; // 0xe02 Eq
	if(var_165_bool == 0) goto Label_3608; // 0xe03 JumpB
	var_166_string = ""; // 0xe04 PushV
	var_166_string = "Neutral"; // 0xe05 MovS
	func_3370(var_26_bool, var_166_string); // 0xe06 Call
	var_167_int = 13870; // 0xe08 PushI
	SetMessage(var_167_int); // 0xe09 TObjFunc
	ClearReplies(); // 0xe0b TObjFunc
	var_168_int = 13871; // 0xe0d PushI
	var_169_int = -1; // 0xe0e PushI
	var_170_int = 15098; // 0xe0f PushI
	AddReply(var_168_int, var_169_int, var_170_int); // 0xe10 TObjFunc
	var_171_int = 13872; // 0xe12 PushI
	var_172_int = 15100; // 0xe13 PushI
	var_173_int = 15099; // 0xe14 PushI
	AddReply(var_171_int, var_172_int, var_173_int); // 0xe15 TObjFunc
	return 0; // 0xe17 Return
	
Label_3608:
	var_174_int = 15100; // 0xe18 PushI
	var_175_bool = var_25_string == var_174_int; // 0xe19 Eq
	if(var_175_bool == 0) goto Label_3631; // 0xe1a JumpB
	var_176_string = ""; // 0xe1b PushV
	var_176_string = "Neutral"; // 0xe1c MovS
	func_3370(var_26_bool, var_176_string); // 0xe1d Call
	var_177_int = 13873; // 0xe1f PushI
	SetMessage(var_177_int); // 0xe20 TObjFunc
	ClearReplies(); // 0xe22 TObjFunc
	var_178_int = 13874; // 0xe24 PushI
	var_179_int = -1; // 0xe25 PushI
	var_180_int = 15101; // 0xe26 PushI
	AddReply(var_178_int, var_179_int, var_180_int); // 0xe27 TObjFunc
	var_181_int = 13875; // 0xe29 PushI
	var_182_int = -1; // 0xe2a PushI
	var_183_int = 15102; // 0xe2b PushI
	AddReply(var_181_int, var_182_int, var_183_int); // 0xe2c TObjFunc
	return 0; // 0xe2e Return
	
Label_3631:
	var_184_int = 15080; // 0xe2f PushI
	var_185_bool = var_25_string == var_184_int; // 0xe30 Eq
	if(var_185_bool == 0) goto Label_3649; // 0xe31 JumpB
	var_186_string = ""; // 0xe32 PushV
	var_186_string = "Neutral"; // 0xe33 MovS
	func_3370(var_26_bool, var_186_string); // 0xe34 Call
	var_187_int = 13853; // 0xe36 PushI
	SetMessage(var_187_int); // 0xe37 TObjFunc
	ClearReplies(); // 0xe39 TObjFunc
	var_188_int = 13854; // 0xe3b PushI
	var_189_int = 15082; // 0xe3c PushI
	var_190_int = 15081; // 0xe3d PushI
	AddReply(var_188_int, var_189_int, var_190_int); // 0xe3e TObjFunc
	return 0; // 0xe40 Return
	
Label_3649:
	var_191_int = 15082; // 0xe41 PushI
	var_192_bool = var_25_string == var_191_int; // 0xe42 Eq
	if(var_192_bool == 0) goto Label_3672; // 0xe43 JumpB
	var_193_string = ""; // 0xe44 PushV
	var_193_string = "Neutral"; // 0xe45 MovS
	func_3370(var_26_bool, var_193_string); // 0xe46 Call
	var_194_int = 13855; // 0xe48 PushI
	SetMessage(var_194_int); // 0xe49 TObjFunc
	ClearReplies(); // 0xe4b TObjFunc
	var_195_int = 13856; // 0xe4d PushI
	var_196_int = -1; // 0xe4e PushI
	var_197_int = 15083; // 0xe4f PushI
	AddReply(var_195_int, var_196_int, var_197_int); // 0xe50 TObjFunc
	var_198_int = 13857; // 0xe52 PushI
	var_199_int = 15085; // 0xe53 PushI
	var_200_int = 15084; // 0xe54 PushI
	AddReply(var_198_int, var_199_int, var_200_int); // 0xe55 TObjFunc
	return 0; // 0xe57 Return
	
Label_3672:
	var_201_int = 15085; // 0xe58 PushI
	var_202_bool = var_25_string == var_201_int; // 0xe59 Eq
	if(var_202_bool == 0) goto Label_3695; // 0xe5a JumpB
	var_203_string = ""; // 0xe5b PushV
	var_203_string = "Neutral"; // 0xe5c MovS
	func_3370(var_26_bool, var_203_string); // 0xe5d Call
	var_204_int = 13858; // 0xe5f PushI
	SetMessage(var_204_int); // 0xe60 TObjFunc
	ClearReplies(); // 0xe62 TObjFunc
	var_205_int = 13859; // 0xe64 PushI
	var_206_int = -1; // 0xe65 PushI
	var_207_int = 15086; // 0xe66 PushI
	AddReply(var_205_int, var_206_int, var_207_int); // 0xe67 TObjFunc
	var_208_int = 13860; // 0xe69 PushI
	var_209_int = 15088; // 0xe6a PushI
	var_210_int = 15087; // 0xe6b PushI
	AddReply(var_208_int, var_209_int, var_210_int); // 0xe6c TObjFunc
	return 0; // 0xe6e Return
	
Label_3695:
	var_211_int = 15088; // 0xe6f PushI
	var_212_bool = var_25_string == var_211_int; // 0xe70 Eq
	if(var_212_bool == 0) goto Label_3718; // 0xe71 JumpB
	var_213_string = ""; // 0xe72 PushV
	var_213_string = "Neutral"; // 0xe73 MovS
	func_3370(var_26_bool, var_213_string); // 0xe74 Call
	var_214_int = 13861; // 0xe76 PushI
	SetMessage(var_214_int); // 0xe77 TObjFunc
	ClearReplies(); // 0xe79 TObjFunc
	var_215_int = 13862; // 0xe7b PushI
	var_216_int = 15090; // 0xe7c PushI
	var_217_int = 15089; // 0xe7d PushI
	AddReply(var_215_int, var_216_int, var_217_int); // 0xe7e TObjFunc
	var_218_int = 13864; // 0xe80 PushI
	var_219_int = -1; // 0xe81 PushI
	var_220_int = 15091; // 0xe82 PushI
	AddReply(var_218_int, var_219_int, var_220_int); // 0xe83 TObjFunc
	return 0; // 0xe85 Return
	
Label_3718:
	var_221_int = 15090; // 0xe86 PushI
	var_222_bool = var_25_string == var_221_int; // 0xe87 Eq
	if(var_222_bool == 0) goto Label_3731; // 0xe88 JumpB
	var_223_string = ""; // 0xe89 PushV
	var_223_string = "Neutral"; // 0xe8a MovS
	func_3370(var_26_bool, var_223_string); // 0xe8b Call
	var_224_int = 13863; // 0xe8d PushI
	SetMessage(var_224_int); // 0xe8e TObjFunc
	ClearReplies(); // 0xe90 TObjFunc
	return 0; // 0xe92 Return
	
Label_3731:
	var_225_int = 15070; // 0xe93 PushI
	var_226_bool = var_25_string == var_225_int; // 0xe94 Eq
	if(var_226_bool == 0) goto Label_3749; // 0xe95 JumpB
	var_227_string = ""; // 0xe96 PushV
	var_227_string = "Neutral"; // 0xe97 MovS
	func_3370(var_26_bool, var_227_string); // 0xe98 Call
	var_228_int = 13843; // 0xe9a PushI
	SetMessage(var_228_int); // 0xe9b TObjFunc
	ClearReplies(); // 0xe9d TObjFunc
	var_229_int = 13844; // 0xe9f PushI
	var_230_int = 15072; // 0xea0 PushI
	var_231_int = 15071; // 0xea1 PushI
	AddReply(var_229_int, var_230_int, var_231_int); // 0xea2 TObjFunc
	return 0; // 0xea4 Return
	
Label_3749:
	var_232_int = 15072; // 0xea5 PushI
	var_233_bool = var_25_string == var_232_int; // 0xea6 Eq
	if(var_233_bool == 0) goto Label_3772; // 0xea7 JumpB
	var_234_string = ""; // 0xea8 PushV
	var_234_string = "Neutral"; // 0xea9 MovS
	func_3370(var_26_bool, var_234_string); // 0xeaa Call
	var_235_int = 13845; // 0xeac PushI
	SetMessage(var_235_int); // 0xead TObjFunc
	ClearReplies(); // 0xeaf TObjFunc
	var_236_int = 13846; // 0xeb1 PushI
	var_237_int = 15074; // 0xeb2 PushI
	var_238_int = 15073; // 0xeb3 PushI
	AddReply(var_236_int, var_237_int, var_238_int); // 0xeb4 TObjFunc
	var_239_int = 13849; // 0xeb6 PushI
	var_240_int = 15077; // 0xeb7 PushI
	var_241_int = 15076; // 0xeb8 PushI
	AddReply(var_239_int, var_240_int, var_241_int); // 0xeb9 TObjFunc
	return 0; // 0xebb Return
	
Label_3772:
	var_242_int = 15077; // 0xebc PushI
	var_243_bool = var_25_string == var_242_int; // 0xebd Eq
	if(var_243_bool == 0) goto Label_3790; // 0xebe JumpB
	var_244_string = ""; // 0xebf PushV
	var_244_string = "Neutral"; // 0xec0 MovS
	func_3370(var_26_bool, var_244_string); // 0xec1 Call
	var_245_int = 13850; // 0xec3 PushI
	SetMessage(var_245_int); // 0xec4 TObjFunc
	ClearReplies(); // 0xec6 TObjFunc
	var_246_int = 13851; // 0xec8 PushI
	var_247_int = -1; // 0xec9 PushI
	var_248_int = 15078; // 0xeca PushI
	AddReply(var_246_int, var_247_int, var_248_int); // 0xecb TObjFunc
	return 0; // 0xecd Return
	
Label_3790:
	var_249_int = 15074; // 0xece PushI
	var_250_bool = var_25_string == var_249_int; // 0xecf Eq
	if(var_250_bool == 0) goto Label_3808; // 0xed0 JumpB
	var_251_string = ""; // 0xed1 PushV
	var_251_string = "Neutral"; // 0xed2 MovS
	func_3370(var_26_bool, var_251_string); // 0xed3 Call
	var_252_int = 13847; // 0xed5 PushI
	SetMessage(var_252_int); // 0xed6 TObjFunc
	ClearReplies(); // 0xed8 TObjFunc
	var_253_int = 13848; // 0xeda PushI
	var_254_int = -1; // 0xedb PushI
	var_255_int = 15075; // 0xedc PushI
	AddReply(var_253_int, var_254_int, var_255_int); // 0xedd TObjFunc
	return 0; // 0xedf Return
	
Label_3808:
	var_256_int = 15047; // 0xee0 PushI
	var_257_bool = var_25_string == var_256_int; // 0xee1 Eq
	if(var_257_bool == 0) goto Label_3831; // 0xee2 JumpB
	var_258_string = ""; // 0xee3 PushV
	var_258_string = "Neutral"; // 0xee4 MovS
	func_3370(var_26_bool, var_258_string); // 0xee5 Call
	var_259_int = 13820; // 0xee7 PushI
	SetMessage(var_259_int); // 0xee8 TObjFunc
	ClearReplies(); // 0xeea TObjFunc
	var_260_int = 13821; // 0xeec PushI
	var_261_int = 15049; // 0xeed PushI
	var_262_int = 15048; // 0xeee PushI
	AddReply(var_260_int, var_261_int, var_262_int); // 0xeef TObjFunc
	var_263_int = 13839; // 0xef1 PushI
	var_264_int = 15067; // 0xef2 PushI
	var_265_int = 15066; // 0xef3 PushI
	AddReply(var_263_int, var_264_int, var_265_int); // 0xef4 TObjFunc
	return 0; // 0xef6 Return
	
Label_3831:
	var_266_int = 15067; // 0xef7 PushI
	var_267_bool = var_25_string == var_266_int; // 0xef8 Eq
	if(var_267_bool == 0) goto Label_3849; // 0xef9 JumpB
	var_268_string = ""; // 0xefa PushV
	var_268_string = "Neutral"; // 0xefb MovS
	func_3370(var_26_bool, var_268_string); // 0xefc Call
	var_269_int = 13840; // 0xefe PushI
	SetMessage(var_269_int); // 0xeff TObjFunc
	ClearReplies(); // 0xf01 TObjFunc
	var_270_int = 13841; // 0xf03 PushI
	var_271_int = -1; // 0xf04 PushI
	var_272_int = 15068; // 0xf05 PushI
	AddReply(var_270_int, var_271_int, var_272_int); // 0xf06 TObjFunc
	return 0; // 0xf08 Return
	
Label_3849:
	var_273_int = 15049; // 0xf09 PushI
	var_274_bool = var_25_string == var_273_int; // 0xf0a Eq
	if(var_274_bool == 0) goto Label_3867; // 0xf0b JumpB
	var_275_string = ""; // 0xf0c PushV
	var_275_string = "Neutral"; // 0xf0d MovS
	func_3370(var_26_bool, var_275_string); // 0xf0e Call
	var_276_int = 13822; // 0xf10 PushI
	SetMessage(var_276_int); // 0xf11 TObjFunc
	ClearReplies(); // 0xf13 TObjFunc
	var_277_int = 13823; // 0xf15 PushI
	var_278_int = 15051; // 0xf16 PushI
	var_279_int = 15050; // 0xf17 PushI
	AddReply(var_277_int, var_278_int, var_279_int); // 0xf18 TObjFunc
	return 0; // 0xf1a Return
	
Label_3867:
	var_280_int = 15051; // 0xf1b PushI
	var_281_bool = var_25_string == var_280_int; // 0xf1c Eq
	if(var_281_bool == 0) goto Label_3890; // 0xf1d JumpB
	var_282_string = ""; // 0xf1e PushV
	var_282_string = "Neutral"; // 0xf1f MovS
	func_3370(var_26_bool, var_282_string); // 0xf20 Call
	var_283_int = 13824; // 0xf22 PushI
	SetMessage(var_283_int); // 0xf23 TObjFunc
	ClearReplies(); // 0xf25 TObjFunc
	var_284_int = 13825; // 0xf27 PushI
	var_285_int = 15053; // 0xf28 PushI
	var_286_int = 15052; // 0xf29 PushI
	AddReply(var_284_int, var_285_int, var_286_int); // 0xf2a TObjFunc
	var_287_int = 13827; // 0xf2c PushI
	var_288_int = 15055; // 0xf2d PushI
	var_289_int = 15054; // 0xf2e PushI
	AddReply(var_287_int, var_288_int, var_289_int); // 0xf2f TObjFunc
	return 0; // 0xf31 Return
	
Label_3890:
	var_290_int = 15055; // 0xf32 PushI
	var_291_bool = var_25_string == var_290_int; // 0xf33 Eq
	if(var_291_bool == 0) goto Label_3908; // 0xf34 JumpB
	var_292_string = ""; // 0xf35 PushV
	var_292_string = "Neutral"; // 0xf36 MovS
	func_3370(var_26_bool, var_292_string); // 0xf37 Call
	var_293_int = 13828; // 0xf39 PushI
	SetMessage(var_293_int); // 0xf3a TObjFunc
	ClearReplies(); // 0xf3c TObjFunc
	var_294_int = 13829; // 0xf3e PushI
	var_295_int = 15057; // 0xf3f PushI
	var_296_int = 15056; // 0xf40 PushI
	AddReply(var_294_int, var_295_int, var_296_int); // 0xf41 TObjFunc
	return 0; // 0xf43 Return
	
Label_3908:
	var_297_int = 15057; // 0xf44 PushI
	var_298_bool = var_25_string == var_297_int; // 0xf45 Eq
	if(var_298_bool == 0) goto Label_3931; // 0xf46 JumpB
	var_299_string = ""; // 0xf47 PushV
	var_299_string = "Neutral"; // 0xf48 MovS
	func_3370(var_26_bool, var_299_string); // 0xf49 Call
	var_300_int = 13830; // 0xf4b PushI
	SetMessage(var_300_int); // 0xf4c TObjFunc
	ClearReplies(); // 0xf4e TObjFunc
	var_301_int = 13831; // 0xf50 PushI
	var_302_int = 15059; // 0xf51 PushI
	var_303_int = 15058; // 0xf52 PushI
	AddReply(var_301_int, var_302_int, var_303_int); // 0xf53 TObjFunc
	var_304_int = 13838; // 0xf55 PushI
	var_305_int = -1; // 0xf56 PushI
	var_306_int = 15065; // 0xf57 PushI
	AddReply(var_304_int, var_305_int, var_306_int); // 0xf58 TObjFunc
	return 0; // 0xf5a Return
	
Label_3931:
	var_307_int = 15059; // 0xf5b PushI
	var_308_bool = var_25_string == var_307_int; // 0xf5c Eq
	if(var_308_bool == 0) goto Label_3949; // 0xf5d JumpB
	var_309_string = ""; // 0xf5e PushV
	var_309_string = "Neutral"; // 0xf5f MovS
	func_3370(var_26_bool, var_309_string); // 0xf60 Call
	var_310_int = 13832; // 0xf62 PushI
	SetMessage(var_310_int); // 0xf63 TObjFunc
	ClearReplies(); // 0xf65 TObjFunc
	var_311_int = 13833; // 0xf67 PushI
	var_312_int = 15061; // 0xf68 PushI
	var_313_int = 15060; // 0xf69 PushI
	AddReply(var_311_int, var_312_int, var_313_int); // 0xf6a TObjFunc
	return 0; // 0xf6c Return
	
Label_3949:
	var_314_int = 15061; // 0xf6d PushI
	var_315_bool = var_25_string == var_314_int; // 0xf6e Eq
	if(var_315_bool == 0) goto Label_3967; // 0xf6f JumpB
	var_316_string = ""; // 0xf70 PushV
	var_316_string = "Neutral"; // 0xf71 MovS
	func_3370(var_26_bool, var_316_string); // 0xf72 Call
	var_317_int = 13834; // 0xf74 PushI
	SetMessage(var_317_int); // 0xf75 TObjFunc
	ClearReplies(); // 0xf77 TObjFunc
	var_318_int = 13835; // 0xf79 PushI
	var_319_int = 15063; // 0xf7a PushI
	var_320_int = 15062; // 0xf7b PushI
	AddReply(var_318_int, var_319_int, var_320_int); // 0xf7c TObjFunc
	return 0; // 0xf7e Return
	
Label_3967:
	var_321_int = 15063; // 0xf7f PushI
	var_322_bool = var_25_string == var_321_int; // 0xf80 Eq
	if(var_322_bool == 0) goto Label_3985; // 0xf81 JumpB
	var_323_string = ""; // 0xf82 PushV
	var_323_string = "Neutral"; // 0xf83 MovS
	func_3370(var_26_bool, var_323_string); // 0xf84 Call
	var_324_int = 13836; // 0xf86 PushI
	SetMessage(var_324_int); // 0xf87 TObjFunc
	ClearReplies(); // 0xf89 TObjFunc
	var_325_int = 13837; // 0xf8b PushI
	var_326_int = -1; // 0xf8c PushI
	var_327_int = 15064; // 0xf8d PushI
	AddReply(var_325_int, var_326_int, var_327_int); // 0xf8e TObjFunc
	return 0; // 0xf90 Return
	
Label_3985:
	var_328_int = 15053; // 0xf91 PushI
	var_329_bool = var_25_string == var_328_int; // 0xf92 Eq
	if(var_329_bool == 0) goto Label_3998; // 0xf93 JumpB
	var_330_string = ""; // 0xf94 PushV
	var_330_string = "Neutral"; // 0xf95 MovS
	func_3370(var_26_bool, var_330_string); // 0xf96 Call
	var_331_int = 13826; // 0xf98 PushI
	SetMessage(var_331_int); // 0xf99 TObjFunc
	ClearReplies(); // 0xf9b TObjFunc
	return 0; // 0xf9d Return
	
Label_3998:
	var_332_int = 15042; // 0xf9e PushI
	var_333_bool = var_25_string == var_332_int; // 0xf9f Eq
	if(var_333_bool == 0) goto Label_4016; // 0xfa0 JumpB
	var_334_string = ""; // 0xfa1 PushV
	var_334_string = "Neutral"; // 0xfa2 MovS
	func_3370(var_26_bool, var_334_string); // 0xfa3 Call
	var_335_int = 13816; // 0xfa5 PushI
	SetMessage(var_335_int); // 0xfa6 TObjFunc
	ClearReplies(); // 0xfa8 TObjFunc
	var_336_int = 13817; // 0xfaa PushI
	var_337_int = 15030; // 0xfab PushI
	var_338_int = 15043; // 0xfac PushI
	AddReply(var_336_int, var_337_int, var_338_int); // 0xfad TObjFunc
	return 0; // 0xfaf Return
	
Label_4016:
	var_339_int = 15030; // 0xfb0 PushI
	var_340_bool = var_25_string == var_339_int; // 0xfb1 Eq
	if(var_340_bool == 0) goto Label_4034; // 0xfb2 JumpB
	var_341_string = ""; // 0xfb3 PushV
	var_341_string = "Neutral"; // 0xfb4 MovS
	func_3370(var_26_bool, var_341_string); // 0xfb5 Call
	var_342_int = 13804; // 0xfb7 PushI
	SetMessage(var_342_int); // 0xfb8 TObjFunc
	ClearReplies(); // 0xfba TObjFunc
	var_343_int = 13805; // 0xfbc PushI
	var_344_int = 15032; // 0xfbd PushI
	var_345_int = 15031; // 0xfbe PushI
	AddReply(var_343_int, var_344_int, var_345_int); // 0xfbf TObjFunc
	return 0; // 0xfc1 Return
	
Label_4034:
	var_346_int = 15032; // 0xfc2 PushI
	var_347_bool = var_25_string == var_346_int; // 0xfc3 Eq
	if(var_347_bool == 0) goto Label_4052; // 0xfc4 JumpB
	var_348_string = ""; // 0xfc5 PushV
	var_348_string = "Neutral"; // 0xfc6 MovS
	func_3370(var_26_bool, var_348_string); // 0xfc7 Call
	var_349_int = 13806; // 0xfc9 PushI
	SetMessage(var_349_int); // 0xfca TObjFunc
	ClearReplies(); // 0xfcc TObjFunc
	var_350_int = 13807; // 0xfce PushI
	var_351_int = 15034; // 0xfcf PushI
	var_352_int = 15033; // 0xfd0 PushI
	AddReply(var_350_int, var_351_int, var_352_int); // 0xfd1 TObjFunc
	return 0; // 0xfd3 Return
	
Label_4052:
	var_353_int = 15034; // 0xfd4 PushI
	var_354_bool = var_25_string == var_353_int; // 0xfd5 Eq
	if(var_354_bool == 0) goto Label_4070; // 0xfd6 JumpB
	var_355_string = ""; // 0xfd7 PushV
	var_355_string = "Neutral"; // 0xfd8 MovS
	func_3370(var_26_bool, var_355_string); // 0xfd9 Call
	var_356_int = 13808; // 0xfdb PushI
	SetMessage(var_356_int); // 0xfdc TObjFunc
	ClearReplies(); // 0xfde TObjFunc
	var_357_int = 13809; // 0xfe0 PushI
	var_358_int = 15036; // 0xfe1 PushI
	var_359_int = 15035; // 0xfe2 PushI
	AddReply(var_357_int, var_358_int, var_359_int); // 0xfe3 TObjFunc
	return 0; // 0xfe5 Return
	
Label_4070:
	var_360_int = 15036; // 0xfe6 PushI
	var_361_bool = var_25_string == var_360_int; // 0xfe7 Eq
	if(var_361_bool == 0) goto Label_4093; // 0xfe8 JumpB
	var_362_string = ""; // 0xfe9 PushV
	var_362_string = "Neutral"; // 0xfea MovS
	func_3370(var_26_bool, var_362_string); // 0xfeb Call
	var_363_int = 13810; // 0xfed PushI
	SetMessage(var_363_int); // 0xfee TObjFunc
	ClearReplies(); // 0xff0 TObjFunc
	var_364_int = 13811; // 0xff2 PushI
	var_365_int = 15038; // 0xff3 PushI
	var_366_int = 15037; // 0xff4 PushI
	AddReply(var_364_int, var_365_int, var_366_int); // 0xff5 TObjFunc
	var_367_int = 13814; // 0xff7 PushI
	var_368_int = -1; // 0xff8 PushI
	var_369_int = 15040; // 0xff9 PushI
	AddReply(var_367_int, var_368_int, var_369_int); // 0xffa TObjFunc
	return 0; // 0xffc Return
	
Label_4093:
	var_370_int = 15038; // 0xffd PushI
	var_371_bool = var_25_string == var_370_int; // 0xffe Eq
	if(var_371_bool == 0) goto Label_4111; // 0xfff JumpB
	var_372_string = ""; // 0x1000 PushV
	var_372_string = "Neutral"; // 0x1001 MovS
	func_3370(var_26_bool, var_372_string); // 0x1002 Call
	var_373_int = 13812; // 0x1004 PushI
	SetMessage(var_373_int); // 0x1005 TObjFunc
	ClearReplies(); // 0x1007 TObjFunc
	var_374_int = 13813; // 0x1009 PushI
	var_375_int = -1; // 0x100a PushI
	var_376_int = 15039; // 0x100b PushI
	AddReply(var_374_int, var_375_int, var_376_int); // 0x100c TObjFunc
	return 0; // 0x100e Return
	
Label_4111:
	var_3_string = 1; // 0x100f TMovB
	var_377_bool = 0; // 0x1010 PushV
	func_4912(var_377_bool); // 0x1011 Call
	if(var_377_bool == 0) goto Label_4119; // 0x1013 JumpB
	lshStopAnimation(); // 0x1014 Func
	goto Label_4121; // 0x1016 Jump
	
Label_4121:
	return 0; // 0x1019 Return
	
Label_4119:
	StopAnimation(); // 0x1017 Func
	
Label_4123:
	return 0; // 0x101b Return
}


task_11_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_int, var_26_int)
{
	var_27_int = 1; // 0x10ce PushI
	if(var_27_int == 0) goto Label_4742; // 0x10cf JumpB
	func_4838(); // 0x10d1 Call
	var_29_int = 15421; // 0x10d3 PushI
	var_30_bool = var_26_int == var_29_int; // 0x10d4 Eq
	if(var_30_bool == 0) goto Label_4315; // 0x10d5 JumpB
	var_31_object = Obj(); var_32_object = Obj(); // 0x10d6 PushV
	var_31_object = var_1_object; // 0x10d7 MovT
	var_32_object = var_0_object; // 0x10d8 MovT
	func_5135(); // 0x10d9 Call
	
Label_4315:
	var_78_int = 15422; // 0x10db PushI
	var_79_bool = var_26_int == var_78_int; // 0x10dc Eq
	if(var_79_bool == 0) goto Label_4323; // 0x10dd JumpB
	var_80_object = Obj(); var_81_object = Obj(); // 0x10de PushV
	var_80_object = var_1_object; // 0x10df MovT
	var_81_object = var_0_object; // 0x10e0 MovT
	func_5135(); // 0x10e1 Call
	
Label_4323:
	var_82_int = 15451; // 0x10e3 PushI
	var_83_bool = var_26_int == var_82_int; // 0x10e4 Eq
	if(var_83_bool == 0) goto Label_4331; // 0x10e5 JumpB
	var_84_object = Obj(); var_85_object = Obj(); // 0x10e6 PushV
	var_84_object = var_1_object; // 0x10e7 MovT
	var_85_object = var_0_object; // 0x10e8 MovT
	func_5157(); // 0x10e9 Call
	
Label_4331:
	var_98_int = 15408; // 0x10eb PushI
	var_99_bool = var_25_int == var_98_int; // 0x10ec Eq
	if(var_99_bool == 0) goto Label_4394; // 0x10ed JumpB
	var_100_bool = 0; var_101_object = Obj(); // 0x10ee PushV
	var_101_object = var_1_object; // 0x10ef MovT
	func_5485(var_101_object); // 0x10f0 Call
	if(var_100_bool == 0) goto Label_4359; // 0x10f2 JumpB
	var_108_object = Obj(); var_109_object = Obj(); // 0x10f3 PushV
	var_108_object = var_1_object; // 0x10f4 MovT
	var_109_object = var_0_object; // 0x10f5 MovT
	func_5270(); // 0x10f6 Call
	var_112_string = ""; // 0x10f8 PushV
	var_112_string = "Neutral"; // 0x10f9 MovS
	func_4285(var_26_int, var_112_string); // 0x10fa Call
	var_127_int = 14194; // 0x10fc PushI
	SetMessage(var_127_int); // 0x10fd TObjFunc
	ClearReplies(); // 0x10ff TObjFunc
	var_128_int = 14195; // 0x1101 PushI
	var_129_int = 15410; // 0x1102 PushI
	var_130_int = 15409; // 0x1103 PushI
	AddReply(var_128_int, var_129_int, var_130_int); // 0x1104 TObjFunc
	return 0; // 0x1106 Return
	
Label_4359:
	var_131_string = ""; // 0x1107 PushV
	var_131_string = "Neutral"; // 0x1108 MovS
	func_4285(var_26_int, var_131_string); // 0x1109 Call
	var_132_int = 14222; // 0x110b PushI
	SetMessage(var_132_int); // 0x110c TObjFunc
	ClearReplies(); // 0x110e TObjFunc
	var_133_bool = 0; var_134_object = Obj(); // 0x1110 PushV
	var_134_object = var_1_object; // 0x1111 MovT
	func_5497(var_134_object); // 0x1112 Call
	if(var_133_bool == 0) goto Label_4378; // 0x1114 JumpB
	var_139_int = 14223; // 0x1115 PushI
	var_140_int = 15442; // 0x1116 PushI
	var_141_int = 15441; // 0x1117 PushI
	AddReply(var_139_int, var_140_int, var_141_int); // 0x1118 TObjFunc
	
Label_4378:
	var_142_bool = 0; var_143_object = Obj(); // 0x111a PushV
	var_143_object = var_1_object; // 0x111b MovT
	func_5276(var_142_bool, var_143_object); // 0x111c Call
	if(var_142_bool == 0) goto Label_4388; // 0x111e JumpB
	var_146_int = 14234; // 0x111f PushI
	var_147_int = 15453; // 0x1120 PushI
	var_148_int = 15452; // 0x1121 PushI
	AddReply(var_146_int, var_147_int, var_148_int); // 0x1122 TObjFunc
	
Label_4388:
	var_149_int = 14239; // 0x1124 PushI
	var_150_int = -1; // 0x1125 PushI
	var_151_int = 15457; // 0x1126 PushI
	AddReply(var_149_int, var_150_int, var_151_int); // 0x1127 TObjFunc
	return 0; // 0x1129 Return
	
Label_4394:
	var_152_int = 15453; // 0x112a PushI
	var_153_bool = var_25_int == var_152_int; // 0x112b Eq
	if(var_153_bool == 0) goto Label_4412; // 0x112c JumpB
	var_154_string = ""; // 0x112d PushV
	var_154_string = "Neutral"; // 0x112e MovS
	func_4285(var_26_int, var_154_string); // 0x112f Call
	var_155_int = 14235; // 0x1131 PushI
	SetMessage(var_155_int); // 0x1132 TObjFunc
	ClearReplies(); // 0x1134 TObjFunc
	var_156_int = 14236; // 0x1136 PushI
	var_157_int = 15455; // 0x1137 PushI
	var_158_int = 15454; // 0x1138 PushI
	AddReply(var_156_int, var_157_int, var_158_int); // 0x1139 TObjFunc
	return 0; // 0x113b Return
	
Label_4412:
	var_159_int = 15455; // 0x113c PushI
	var_160_bool = var_25_int == var_159_int; // 0x113d Eq
	if(var_160_bool == 0) goto Label_4430; // 0x113e JumpB
	var_161_string = ""; // 0x113f PushV
	var_161_string = "Neutral"; // 0x1140 MovS
	func_4285(var_26_int, var_161_string); // 0x1141 Call
	var_162_int = 14237; // 0x1143 PushI
	SetMessage(var_162_int); // 0x1144 TObjFunc
	ClearReplies(); // 0x1146 TObjFunc
	var_163_int = 14238; // 0x1148 PushI
	var_164_int = -1; // 0x1149 PushI
	var_165_int = 15456; // 0x114a PushI
	AddReply(var_163_int, var_164_int, var_165_int); // 0x114b TObjFunc
	return 0; // 0x114d Return
	
Label_4430:
	var_166_int = 15442; // 0x114e PushI
	var_167_bool = var_25_int == var_166_int; // 0x114f Eq
	if(var_167_bool == 0) goto Label_4448; // 0x1150 JumpB
	var_168_string = ""; // 0x1151 PushV
	var_168_string = "Neutral"; // 0x1152 MovS
	func_4285(var_26_int, var_168_string); // 0x1153 Call
	var_169_int = 14224; // 0x1155 PushI
	SetMessage(var_169_int); // 0x1156 TObjFunc
	ClearReplies(); // 0x1158 TObjFunc
	var_170_int = 14225; // 0x115a PushI
	var_171_int = 15444; // 0x115b PushI
	var_172_int = 15443; // 0x115c PushI
	AddReply(var_170_int, var_171_int, var_172_int); // 0x115d TObjFunc
	return 0; // 0x115f Return
	
Label_4448:
	var_173_int = 15444; // 0x1160 PushI
	var_174_bool = var_25_int == var_173_int; // 0x1161 Eq
	if(var_174_bool == 0) goto Label_4466; // 0x1162 JumpB
	var_175_string = ""; // 0x1163 PushV
	var_175_string = "Neutral"; // 0x1164 MovS
	func_4285(var_26_int, var_175_string); // 0x1165 Call
	var_176_int = 14226; // 0x1167 PushI
	SetMessage(var_176_int); // 0x1168 TObjFunc
	ClearReplies(); // 0x116a TObjFunc
	var_177_int = 14227; // 0x116c PushI
	var_178_int = 15446; // 0x116d PushI
	var_179_int = 15445; // 0x116e PushI
	AddReply(var_177_int, var_178_int, var_179_int); // 0x116f TObjFunc
	return 0; // 0x1171 Return
	
Label_4466:
	var_180_int = 15446; // 0x1172 PushI
	var_181_bool = var_25_int == var_180_int; // 0x1173 Eq
	if(var_181_bool == 0) goto Label_4484; // 0x1174 JumpB
	var_182_string = ""; // 0x1175 PushV
	var_182_string = "Neutral"; // 0x1176 MovS
	func_4285(var_26_int, var_182_string); // 0x1177 Call
	var_183_int = 14228; // 0x1179 PushI
	SetMessage(var_183_int); // 0x117a TObjFunc
	ClearReplies(); // 0x117c TObjFunc
	var_184_int = 14229; // 0x117e PushI
	var_185_int = 15448; // 0x117f PushI
	var_186_int = 15447; // 0x1180 PushI
	AddReply(var_184_int, var_185_int, var_186_int); // 0x1181 TObjFunc
	return 0; // 0x1183 Return
	
Label_4484:
	var_187_int = 15448; // 0x1184 PushI
	var_188_bool = var_25_int == var_187_int; // 0x1185 Eq
	if(var_188_bool == 0) goto Label_4502; // 0x1186 JumpB
	var_189_string = ""; // 0x1187 PushV
	var_189_string = "Neutral"; // 0x1188 MovS
	func_4285(var_26_int, var_189_string); // 0x1189 Call
	var_190_int = 14230; // 0x118b PushI
	SetMessage(var_190_int); // 0x118c TObjFunc
	ClearReplies(); // 0x118e TObjFunc
	var_191_int = 14231; // 0x1190 PushI
	var_192_int = 15450; // 0x1191 PushI
	var_193_int = 15449; // 0x1192 PushI
	AddReply(var_191_int, var_192_int, var_193_int); // 0x1193 TObjFunc
	return 0; // 0x1195 Return
	
Label_4502:
	var_194_int = 15450; // 0x1196 PushI
	var_195_bool = var_25_int == var_194_int; // 0x1197 Eq
	if(var_195_bool == 0) goto Label_4520; // 0x1198 JumpB
	var_196_string = ""; // 0x1199 PushV
	var_196_string = "Neutral"; // 0x119a MovS
	func_4285(var_26_int, var_196_string); // 0x119b Call
	var_197_int = 14232; // 0x119d PushI
	SetMessage(var_197_int); // 0x119e TObjFunc
	ClearReplies(); // 0x11a0 TObjFunc
	var_198_int = 14233; // 0x11a2 PushI
	var_199_int = -1; // 0x11a3 PushI
	var_200_int = 15451; // 0x11a4 PushI
	AddReply(var_198_int, var_199_int, var_200_int); // 0x11a5 TObjFunc
	return 0; // 0x11a7 Return
	
Label_4520:
	var_201_int = 15410; // 0x11a8 PushI
	var_202_bool = var_25_int == var_201_int; // 0x11a9 Eq
	if(var_202_bool == 0) goto Label_4548; // 0x11aa JumpB
	var_203_string = ""; // 0x11ab PushV
	var_203_string = "Neutral"; // 0x11ac MovS
	func_4285(var_26_int, var_203_string); // 0x11ad Call
	var_204_int = 14196; // 0x11af PushI
	SetMessage(var_204_int); // 0x11b0 TObjFunc
	ClearReplies(); // 0x11b2 TObjFunc
	var_205_int = 14197; // 0x11b4 PushI
	var_206_int = 15412; // 0x11b5 PushI
	var_207_int = 15411; // 0x11b6 PushI
	AddReply(var_205_int, var_206_int, var_207_int); // 0x11b7 TObjFunc
	var_208_int = 14218; // 0x11b9 PushI
	var_209_int = 15412; // 0x11ba PushI
	var_210_int = 15435; // 0x11bb PushI
	AddReply(var_208_int, var_209_int, var_210_int); // 0x11bc TObjFunc
	var_211_int = 14219; // 0x11be PushI
	var_212_int = 15438; // 0x11bf PushI
	var_213_int = 15437; // 0x11c0 PushI
	AddReply(var_211_int, var_212_int, var_213_int); // 0x11c1 TObjFunc
	return 0; // 0x11c3 Return
	
Label_4548:
	var_214_int = 15438; // 0x11c4 PushI
	var_215_bool = var_25_int == var_214_int; // 0x11c5 Eq
	if(var_215_bool == 0) goto Label_4566; // 0x11c6 JumpB
	var_216_string = ""; // 0x11c7 PushV
	var_216_string = "Neutral"; // 0x11c8 MovS
	func_4285(var_26_int, var_216_string); // 0x11c9 Call
	var_217_int = 14220; // 0x11cb PushI
	SetMessage(var_217_int); // 0x11cc TObjFunc
	ClearReplies(); // 0x11ce TObjFunc
	var_218_int = 14221; // 0x11d0 PushI
	var_219_int = 15412; // 0x11d1 PushI
	var_220_int = 15439; // 0x11d2 PushI
	AddReply(var_218_int, var_219_int, var_220_int); // 0x11d3 TObjFunc
	return 0; // 0x11d5 Return
	
Label_4566:
	var_221_int = 15412; // 0x11d6 PushI
	var_222_bool = var_25_int == var_221_int; // 0x11d7 Eq
	if(var_222_bool == 0) goto Label_4589; // 0x11d8 JumpB
	var_223_string = ""; // 0x11d9 PushV
	var_223_string = "Neutral"; // 0x11da MovS
	func_4285(var_26_int, var_223_string); // 0x11db Call
	var_224_int = 14198; // 0x11dd PushI
	SetMessage(var_224_int); // 0x11de TObjFunc
	ClearReplies(); // 0x11e0 TObjFunc
	var_225_int = 14199; // 0x11e2 PushI
	var_226_int = 15414; // 0x11e3 PushI
	var_227_int = 15413; // 0x11e4 PushI
	AddReply(var_225_int, var_226_int, var_227_int); // 0x11e5 TObjFunc
	var_228_int = 14212; // 0x11e7 PushI
	var_229_int = 15428; // 0x11e8 PushI
	var_230_int = 15427; // 0x11e9 PushI
	AddReply(var_228_int, var_229_int, var_230_int); // 0x11ea TObjFunc
	return 0; // 0x11ec Return
	
Label_4589:
	var_231_int = 15428; // 0x11ed PushI
	var_232_bool = var_25_int == var_231_int; // 0x11ee Eq
	if(var_232_bool == 0) goto Label_4612; // 0x11ef JumpB
	var_233_string = ""; // 0x11f0 PushV
	var_233_string = "Neutral"; // 0x11f1 MovS
	func_4285(var_26_int, var_233_string); // 0x11f2 Call
	var_234_int = 14213; // 0x11f4 PushI
	SetMessage(var_234_int); // 0x11f5 TObjFunc
	ClearReplies(); // 0x11f7 TObjFunc
	var_235_int = 14214; // 0x11f9 PushI
	var_236_int = 15430; // 0x11fa PushI
	var_237_int = 15429; // 0x11fb PushI
	AddReply(var_235_int, var_236_int, var_237_int); // 0x11fc TObjFunc
	var_238_int = 14217; // 0x11fe PushI
	var_239_int = 15430; // 0x11ff PushI
	var_240_int = 15433; // 0x1200 PushI
	AddReply(var_238_int, var_239_int, var_240_int); // 0x1201 TObjFunc
	return 0; // 0x1203 Return
	
Label_4612:
	var_241_int = 15430; // 0x1204 PushI
	var_242_bool = var_25_int == var_241_int; // 0x1205 Eq
	if(var_242_bool == 0) goto Label_4630; // 0x1206 JumpB
	var_243_string = ""; // 0x1207 PushV
	var_243_string = "Neutral"; // 0x1208 MovS
	func_4285(var_26_int, var_243_string); // 0x1209 Call
	var_244_int = 14215; // 0x120b PushI
	SetMessage(var_244_int); // 0x120c TObjFunc
	ClearReplies(); // 0x120e TObjFunc
	var_245_int = 14216; // 0x1210 PushI
	var_246_int = 15420; // 0x1211 PushI
	var_247_int = 15431; // 0x1212 PushI
	AddReply(var_245_int, var_246_int, var_247_int); // 0x1213 TObjFunc
	return 0; // 0x1215 Return
	
Label_4630:
	var_248_int = 15414; // 0x1216 PushI
	var_249_bool = var_25_int == var_248_int; // 0x1217 Eq
	if(var_249_bool == 0) goto Label_4648; // 0x1218 JumpB
	var_250_string = ""; // 0x1219 PushV
	var_250_string = "Neutral"; // 0x121a MovS
	func_4285(var_26_int, var_250_string); // 0x121b Call
	var_251_int = 14200; // 0x121d PushI
	SetMessage(var_251_int); // 0x121e TObjFunc
	ClearReplies(); // 0x1220 TObjFunc
	var_252_int = 14201; // 0x1222 PushI
	var_253_int = 15416; // 0x1223 PushI
	var_254_int = 15415; // 0x1224 PushI
	AddReply(var_252_int, var_253_int, var_254_int); // 0x1225 TObjFunc
	return 0; // 0x1227 Return
	
Label_4648:
	var_255_int = 15416; // 0x1228 PushI
	var_256_bool = var_25_int == var_255_int; // 0x1229 Eq
	if(var_256_bool == 0) goto Label_4671; // 0x122a JumpB
	var_257_string = ""; // 0x122b PushV
	var_257_string = "Neutral"; // 0x122c MovS
	func_4285(var_26_int, var_257_string); // 0x122d Call
	var_258_int = 14202; // 0x122f PushI
	SetMessage(var_258_int); // 0x1230 TObjFunc
	ClearReplies(); // 0x1232 TObjFunc
	var_259_int = 14203; // 0x1234 PushI
	var_260_int = 15418; // 0x1235 PushI
	var_261_int = 15417; // 0x1236 PushI
	AddReply(var_259_int, var_260_int, var_261_int); // 0x1237 TObjFunc
	var_262_int = 14209; // 0x1239 PushI
	var_263_int = 15424; // 0x123a PushI
	var_264_int = 15423; // 0x123b PushI
	AddReply(var_262_int, var_263_int, var_264_int); // 0x123c TObjFunc
	return 0; // 0x123e Return
	
Label_4671:
	var_265_int = 15424; // 0x123f PushI
	var_266_bool = var_25_int == var_265_int; // 0x1240 Eq
	if(var_266_bool == 0) goto Label_4689; // 0x1241 JumpB
	var_267_string = ""; // 0x1242 PushV
	var_267_string = "Neutral"; // 0x1243 MovS
	func_4285(var_26_int, var_267_string); // 0x1244 Call
	var_268_int = 14210; // 0x1246 PushI
	SetMessage(var_268_int); // 0x1247 TObjFunc
	ClearReplies(); // 0x1249 TObjFunc
	var_269_int = 14211; // 0x124b PushI
	var_270_int = 15418; // 0x124c PushI
	var_271_int = 15425; // 0x124d PushI
	AddReply(var_269_int, var_270_int, var_271_int); // 0x124e TObjFunc
	return 0; // 0x1250 Return
	
Label_4689:
	var_272_int = 15418; // 0x1251 PushI
	var_273_bool = var_25_int == var_272_int; // 0x1252 Eq
	if(var_273_bool == 0) goto Label_4712; // 0x1253 JumpB
	var_274_string = ""; // 0x1254 PushV
	var_274_string = "Neutral"; // 0x1255 MovS
	func_4285(var_26_int, var_274_string); // 0x1256 Call
	var_275_int = 14204; // 0x1258 PushI
	SetMessage(var_275_int); // 0x1259 TObjFunc
	ClearReplies(); // 0x125b TObjFunc
	var_276_int = 14205; // 0x125d PushI
	var_277_int = 15420; // 0x125e PushI
	var_278_int = 15419; // 0x125f PushI
	AddReply(var_276_int, var_277_int, var_278_int); // 0x1260 TObjFunc
	var_279_int = 14208; // 0x1262 PushI
	var_280_int = -1; // 0x1263 PushI
	var_281_int = 15422; // 0x1264 PushI
	AddReply(var_279_int, var_280_int, var_281_int); // 0x1265 TObjFunc
	return 0; // 0x1267 Return
	
Label_4712:
	var_282_int = 15420; // 0x1268 PushI
	var_283_bool = var_25_int == var_282_int; // 0x1269 Eq
	if(var_283_bool == 0) goto Label_4730; // 0x126a JumpB
	var_284_string = ""; // 0x126b PushV
	var_284_string = "Neutral"; // 0x126c MovS
	func_4285(var_26_int, var_284_string); // 0x126d Call
	var_285_int = 14206; // 0x126f PushI
	SetMessage(var_285_int); // 0x1270 TObjFunc
	ClearReplies(); // 0x1272 TObjFunc
	var_286_int = 14207; // 0x1274 PushI
	var_287_int = -1; // 0x1275 PushI
	var_288_int = 15421; // 0x1276 PushI
	AddReply(var_286_int, var_287_int, var_288_int); // 0x1277 TObjFunc
	return 0; // 0x1279 Return
	
Label_4730:
	var_3_string = 1; // 0x127a TMovB
	var_289_bool = 0; // 0x127b PushV
	func_4912(var_289_bool); // 0x127c Call
	if(var_289_bool == 0) goto Label_4738; // 0x127e JumpB
	lshStopAnimation(); // 0x127f Func
	goto Label_4740; // 0x1281 Jump
	
Label_4740:
	return 0; // 0x1284 Return
	
Label_4738:
	StopAnimation(); // 0x1282 Func
	
Label_4742:
	return 0; // 0x1286 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool)
{
	func_5888(); // 0x7 Call
	var_26_bool = 0; // 0x9 PushV
	func_4755(var_26_bool); // 0xa Call
	var_29_bool = var_26_bool == 0; // 0xc Not
	if(var_29_bool == 0) goto Label_19; // 0xd JumpB
	TaskCall(0); // 0xf TaskCall
	func_0(); // 0x10 Call
	TaskReturn(); // 0x11 TaskReturn
	
Label_19:
	var_30_string = ""; // 0x13 PushV
	var_30_string = "Neutral"; // 0x14 MovS
	func_4820(var_30_string); // 0x15 Call
	lshWaitForAnimEnd(); // 0x17 Func
	goto Label_19; // 0x19 Jump
}


func_0()
{
	Hold(); // 0x0 Func
	return 0; // 0x2 Return
}


func_5633(var_41_bool, var_42_object, var_43_int)
{
	var_44_object = Obj(); var_45_object = Obj(); var_46_int = 0; var_47_object = Obj(); var_48_object = Obj(); var_49_int = 0; // 0x1601 PushV
	var_50_object = Obj(); // 0x1602 PushV
	func_5620(var_50_object); // 0x1603 Call
	var_47_object = var_50_object; // 0x1604 Mov
	Find(var_43_int, var_48_object); // 0x1606 ObjFunc
	var_55_bool = var_48_object == 0; // 0x1608 Not
	if(var_55_bool == 0) goto Label_5648; // 0x1609 JumpB
	var_56_string = "Can't find diary parent with id: "; // 0x160a PushS
	var_57_int = var_56_string + var_43_int; // 0x160b Add
	Trace(var_57_int); // 0x160c Func
	var_41_bool = 0; // 0x160e MovB
	return 6; // 0x160f Return
	
Label_5648:
	AddChild(var_42_object); // 0x1610 ObjFunc
	var_58_string = "player_diary"; // 0x1612 PushS
	var_59_int = 1; // 0x1613 PushI
	SetVariable(var_58_string, var_59_int); // 0x1614 Func
	GetCategory(var_49_int); // 0x1616 ObjFunc
	SetDiarySection(var_49_int); // 0x1618 Func
	var_41_bool = 0; // 0x161a MovB
	return 6; // 0x161b Return
}


func_5888()
{
	var_25_bool = GlobalVars[1]; // 0x1700 PushGE
	var_25_bool = 0; // 0x1701 MovB
	GlobalVars[1] = var_25_bool; // 0x1702 PopGE
	return 0; // 0x1703 Return
}


func_5123()
{
	var_91_string = "ood8Aglaja2"; // 0x1404 PushS
	var_92_int = 1; // 0x1405 PushI
	SetVariable(var_91_string, var_92_int); // 0x1406 Func
	return 0; // 0x1408 Return
}


func_4867(var_69_bool, var_70_string, var_71_string)
{
	var_72_object = Obj(); var_73_object = Obj(); // 0x1303 PushV
	FindActor(var_73_object, var_70_string); // 0x1304 Func
	var_74_bool = var_73_object == 0; // 0x1306 NullEq
	if(var_74_bool == 0) goto Label_4874; // 0x1307 JumpB
	var_69_bool = 0; // 0x1308 MovB
	return 2; // 0x1309 Return
	
Label_4874:
	Trigger(var_73_object, var_71_string); // 0x130a Func
	var_69_bool = 1; // 0x130c MovB
	return 2; // 0x130d Return
}


func_5892(var_26_object)
{
	var_27_bool = 0; var_28_int = 0; // 0x1705 PushV
	var_28_int = 7; // 0x1706 MovI
	func_4893(var_27_bool, var_28_int); // 0x1707 Call
	if(var_27_bool == 0) goto Label_5905; // 0x1709 JumpB
	var_35_int = 0; var_36_object = Obj(); // 0x170a PushV
	var_36_object = var_26_object; // 0x170b Mov
	TaskCall(2); // 0x170c TaskCall
	func_49(var_37_object, var_35_int, var_36_object); // 0x170d Call
	TaskReturn(); // 0x170e TaskReturn
	return 0; // 0x1710 Return
	
Label_5905:
	var_258_bool = 0; var_259_int = 0; // 0x1711 PushV
	var_259_int = 8; // 0x1712 MovI
	func_4893(var_258_bool, var_259_int); // 0x1713 Call
	if(var_258_bool == 0) goto Label_5917; // 0x1715 JumpB
	var_260_int = 0; var_261_object = Obj(); // 0x1716 PushV
	var_261_object = var_26_object; // 0x1717 Mov
	TaskCall(4); // 0x1718 TaskCall
	func_1866(var_262_object, var_260_int, var_261_object); // 0x1719 Call
	TaskReturn(); // 0x171a TaskReturn
	return 0; // 0x171c Return
	
Label_5917:
	var_346_bool = 0; var_347_int = 0; // 0x171d PushV
	var_347_int = 9; // 0x171e MovI
	func_4893(var_346_bool, var_347_int); // 0x171f Call
	if(var_346_bool == 0) goto Label_5929; // 0x1721 JumpB
	var_348_int = 0; var_349_object = Obj(); // 0x1722 PushV
	var_349_object = var_26_object; // 0x1723 Mov
	TaskCall(8); // 0x1724 TaskCall
	func_3175(var_350_object, var_348_int, var_349_object); // 0x1725 Call
	TaskReturn(); // 0x1726 TaskReturn
	return 0; // 0x1728 Return
	
Label_5929:
	var_453_bool = 0; var_454_int = 0; // 0x1729 PushV
	var_454_int = 10; // 0x172a MovI
	func_4893(var_453_bool, var_454_int); // 0x172b Call
	if(var_453_bool == 0) goto Label_5941; // 0x172d JumpB
	var_455_int = 0; var_456_object = Obj(); // 0x172e PushV
	var_456_object = var_26_object; // 0x172f Mov
	TaskCall(6); // 0x1730 TaskCall
	func_2710(var_457_object, var_455_int, var_456_object); // 0x1731 Call
	TaskReturn(); // 0x1732 TaskReturn
	return 0; // 0x1734 Return
	
Label_5941:
	var_539_bool = 0; var_540_int = 0; // 0x1735 PushV
	var_540_int = 11; // 0x1736 MovI
	func_4893(var_539_bool, var_540_int); // 0x1737 Call
	if(var_539_bool == 0) goto Label_5953; // 0x1739 JumpB
	var_541_int = 0; var_542_object = Obj(); // 0x173a PushV
	var_542_object = var_26_object; // 0x173b Mov
	TaskCall(10); // 0x173c TaskCall
	func_4124(var_543_object, var_541_int, var_542_object); // 0x173d Call
	TaskReturn(); // 0x173e TaskReturn
	return 0; // 0x1740 Return
	
Label_5953:
	var_614_bool = 0; // 0x1741 PushV
	func_4899(var_614_bool); // 0x1742 Call
	return 0; // 0x1744 Return
}


func_2056(var_2_object, var_103_string)
{
	var_104_bool = 0; // 0x809 PushV
	func_4912(var_104_bool); // 0x80a Call
	var_105_bool = var_104_bool == 0; // 0x80c Not
	if(var_105_bool == 0) goto Label_2063; // 0x80d JumpB
	return 0; // 0x80e Return
	
Label_2063:
	var_106_bool = var_103_string == var_2_object; // 0x80f Eq
	if(var_106_bool == 0) goto Label_2066; // 0x810 JumpB
	return 0; // 0x811 Return
	
Label_2066:
	var_107_string = ""; // 0x812 PushV
	var_107_string = var_103_string; // 0x813 Mov
	func_4820(var_107_string); // 0x814 Call
	var_2_object = var_103_string; // 0x816 TMov
	return 0; // 0x817 Return
}


func_5129()
{
	var_85_string = "d8KainIsReason"; // 0x140a PushS
	var_86_int = 1; // 0x140b PushI
	SetVariable(var_85_string, var_86_int); // 0x140c Func
	return 0; // 0x140e Return
}


func_5389(var_324_bool)
{
	var_326_int = 0; var_327_string = ""; // 0x150e PushV
	var_327_string = "ood7Aglaja5"; // 0x150f MovS
	func_4855(var_326_int, var_327_string); // 0x1510 Call
	var_328_int = 0; // 0x1512 PushI
	var_329_bool = var_326_int == var_328_int; // 0x1513 Eq
	if(var_329_bool == 0) goto Label_5399; // 0x1514 JumpB
	var_324_bool = 1; // 0x1515 MovB
	return 0; // 0x1516 Return
	
Label_5399:
	var_324_bool = 0; // 0x1517 MovB
	return 0; // 0x1518 Return
}


func_5135()
{
	var_33_string = "d11q01"; // 0x1410 PushS
	var_34_int = 1; // 0x1411 PushI
	SetVariable(var_33_string, var_34_int); // 0x1412 Func
	func_5744(); // 0x1415 Call
	func_5760(); // 0x1418 Call
	var_69_bool = 0; var_70_string = ""; var_71_string = ""; // 0x141a PushV
	var_70_string = "quest_d11_01"; // 0x141b MovS
	var_71_string = "init_girl"; // 0x141c MovS
	func_4867(var_69_bool, var_70_string, var_71_string); // 0x141d Call
	var_75_bool = 0; var_76_string = ""; var_77_string = ""; // 0x141f PushV
	var_76_string = "quest_d11_01"; // 0x1420 MovS
	var_77_string = "remove_andrei"; // 0x1421 MovS
	func_4867(var_75_bool, var_76_string, var_77_string); // 0x1422 Call
	return 0; // 0x1424 Return
}


func_4879(var_48_float)
{
	var_49_float = 0; var_50_float = 0; // 0x130f PushV
	GetGameTime(var_50_float); // 0x1310 Func
	var_48_float = var_50_float; // 0x1312 Mov
	return 2; // 0x1313 Return
}


func_4884(var_29_int)
{
	var_30_float = 0; var_31_float = 0; // 0x1314 PushV
	GetGameTime(var_31_float); // 0x1315 Func
	var_32_int = 1; // 0x1317 PushI
	var_33_int = 0; // 0x1318 PushV
	var_34_int = 24; // 0x1319 PushI
	var_33_int = var_31_float / var_31_float; // 0x131a Div2
	var_29_int = var_32_int + var_33_int; // 0x131b Add2
	return 2; // 0x131c Return
}


func_5401(var_297_bool)
{
	var_299_int = 0; var_300_string = ""; // 0x151a PushV
	var_300_string = "d7q01"; // 0x151b MovS
	func_4855(var_299_int, var_300_string); // 0x151c Call
	var_301_int = 3; // 0x151e PushI
	var_302_bool = var_299_int == var_301_int; // 0x151f Eq
	if(var_302_bool == 0) goto Label_5411; // 0x1520 JumpB
	var_297_bool = 1; // 0x1521 MovB
	return 0; // 0x1522 Return
	
Label_5411:
	var_297_bool = 0; // 0x1523 MovB
	return 0; // 0x1524 Return
}


func_4124(var_0_object, var_541_int, var_542_object)
{
	var_544_object = Obj(); var_545_bool = 0; var_546_int = 0; var_547_bool = 0; var_548_object = Obj(); var_549_bool = 0; var_550_int = 0; var_551_bool = 0; // 0x101c PushV
	var_0_object = var_542_object; // 0x101d TMov
	var_552_bool = 0; var_553_object = Obj(); // 0x101e PushV
	var_553_object = var_542_object; // 0x101f Mov
	func_4760(var_553_object); // 0x1020 Call
	var_554_bool = var_552_bool == 0; // 0x1022 Not
	if(var_554_bool == 0) goto Label_4134; // 0x1023 JumpB
	var_541_int = -2; // 0x1024 MovI
	return 8; // 0x1025 Return
	
Label_4134:
	CreateDialog(var_548_object); // 0x1026 Func
	var_555_int = 0; // 0x1028 PushV
	func_4908(var_555_int); // 0x1029 Call
	SetNPCName(var_555_int); // 0x102b ObjFunc
	var_556_string = ""; // 0x102d PushV
	func_4910(var_556_string); // 0x102e Call
	SetPhoto(var_556_string); // 0x1030 ObjFunc
	var_557_int = 0; // 0x1032 PushV
	func_5679(var_557_int); // 0x1033 Call
	SetPlayerName(var_557_int); // 0x1035 ObjFunc
	var_550_int = -1; // 0x1037 MovI
	IsOverrideActive(var_549_bool); // 0x1038 Func
	var_558_bool = var_549_bool; // 0x103a Push
	if(var_558_bool == 0) goto Label_4158; // 0x103b JumpB
	var_541_int = -2; // 0x103c MovI
	return 8; // 0x103d Return
	
Label_4158:
	DoDialog(var_548_object); // 0x103e Func
	var_559_object = Obj(); var_560_object = Obj(); // 0x1040 PushV
	var_559_object = var_542_object; // 0x1041 Mov
	var_560_object = var_548_object; // 0x1042 Mov
	TaskCall(11); // 0x1043 TaskCall
	func_4187(var_561_object, var_562_object, var_563_string, var_564_bool, var_559_object, var_560_object); // 0x1044 Call
	TaskReturn(); // 0x1045 TaskReturn
	IsDialogEnd(var_551_bool); // 0x1047 ObjFunc
	
Label_4169:
	var_612_bool = var_551_bool == 0; // 0x1049 Not
	if(var_612_bool == 0) goto Label_4176; // 0x104a JumpB
	sync(); // 0x104b Func
	IsDialogEnd(var_551_bool); // 0x104d ObjFunc
	goto Label_4169; // 0x104f Jump
	
Label_4176:
	var_613_object = Obj(); // 0x1050 PushV
	var_613_object = var_542_object; // 0x1051 Mov
	func_4816(); // 0x1052 Call
	StopDialog(var_548_object); // 0x1054 Func
	GetReturnValue(var_550_int); // 0x1056 ObjFunc
	var_541_int = var_550_int; // 0x1058 Mov
	return 8; // 0x1059 Return
}


func_4893(var_27_bool, var_28_int)
{
	var_29_int = 0; // 0x131e PushV
	func_4884(var_29_int); // 0x131f Call
	var_27_bool = var_29_int == var_28_int; // 0x1321 Eq2
	return 0; // 0x1322 Return
}


func_5662(var_37_object)
{
	var_38_object = Obj(); var_39_object = Obj(); var_40_object = Obj(); var_41_object = Obj(); // 0x161e PushV
	GetMainOutdoorScene(var_40_object); // 0x161f Func
	var_42_bool = var_40_object == 0; // 0x1621 NullEq
	if(var_42_bool == 0) goto Label_5673; // 0x1622 JumpB
	var_43_string = "Can't find main outdoor scene"; // 0x1623 PushS
	Trace(var_43_string); // 0x1624 Func
	var_41_object = 0; // 0x1626 SetNull
	var_37_object = var_41_object; // 0x1627 Mov
	return 4; // 0x1628 Return
	
Label_5673:
	GetMap(var_41_object); // 0x1629 ObjFunc
	var_37_object = var_41_object; // 0x162b Mov
	return 4; // 0x162c Return
}


func_4899(var_614_bool)
{
	var_615_bool = 0; var_616_bool = 0; // 0x1323 PushV
	var_617_string = ""; // 0x1324 PushV
	var_617_string = "No"; // 0x1325 MovS
	func_4820(var_617_string); // 0x1326 Call
	lshWaitForAnimEnd(var_616_bool); // 0x1328 Func
	var_614_bool = var_616_bool; // 0x132a Mov
	return 2; // 0x132b Return
}


func_5157()
{
	func_5776(); // 0x1427 Call
	var_95_bool = 0; var_96_string = ""; var_97_string = ""; // 0x1429 PushV
	var_96_string = "quest_d11_01"; // 0x142a MovS
	var_97_string = "completed"; // 0x142b MovS
	func_4867(var_95_bool, var_96_string, var_97_string); // 0x142c Call
	return 0; // 0x142e Return
}


func_5413(var_363_bool)
{
	var_365_int = 0; var_366_string = ""; // 0x1526 PushV
	var_366_string = "d7q02"; // 0x1527 MovS
	func_4855(var_365_int, var_366_string); // 0x1528 Call
	var_367_int = 2; // 0x152a PushI
	var_368_bool = var_365_int == var_367_int; // 0x152b Eq
	if(var_368_bool == 0) goto Label_5423; // 0x152c JumpB
	var_363_bool = 1; // 0x152d MovB
	return 0; // 0x152e Return
	
Label_5423:
	var_363_bool = 0; // 0x152f MovB
	return 0; // 0x1530 Return
}


func_3370(var_2_object, var_67_string)
{
	var_68_bool = 0; // 0xd2b PushV
	func_4912(var_68_bool); // 0xd2c Call
	var_69_bool = var_68_bool == 0; // 0xd2e Not
	if(var_69_bool == 0) goto Label_3377; // 0xd2f JumpB
	return 0; // 0xd30 Return
	
Label_3377:
	var_70_bool = var_67_string == var_2_object; // 0xd31 Eq
	if(var_70_bool == 0) goto Label_3380; // 0xd32 JumpB
	return 0; // 0xd33 Return
	
Label_3380:
	var_71_string = ""; // 0xd34 PushV
	var_71_string = var_67_string; // 0xd35 Mov
	func_4820(var_71_string); // 0xd36 Call
	var_2_object = var_67_string; // 0xd38 TMov
	return 0; // 0xd39 Return
}


func_4908(var_87_int)
{
	var_87_int = 13334; // 0x132c MovI
	return 0; // 0x132d Return
}


func_4910(var_88_string)
{
	var_88_string = "ui/NPC_Aglaja.png"; // 0x132e MovS
	return 0; // 0x132f Return
}


func_5679(var_89_int)
{
	var_90_int = 0; var_91_int = 0; // 0x162f PushV
	var_92_string = "player"; // 0x1630 PushS
	GetVariable(var_92_string, var_91_int); // 0x1631 Func
	var_93_int = 0; // 0x1633 PushI
	var_94_bool = var_91_int == var_93_int; // 0x1634 Eq
	if(var_94_bool == 0) goto Label_5689; // 0x1635 JumpB
	var_89_int = 200001; // 0x1636 MovI
	return 2; // 0x1637 Return
	
Label_5689:
	var_95_int = 1; // 0x1639 PushI
	var_96_bool = var_91_int == var_95_int; // 0x163a Eq
	if(var_96_bool == 0) goto Label_5694; // 0x163b JumpB
	var_89_int = 200002; // 0x163c MovI
	return 2; // 0x163d Return
	
Label_5694:
	var_89_int = 200003; // 0x163e MovI
	return 2; // 0x163f Return
}


func_5167()
{
	var_65_string = "ood9Aglaja1"; // 0x1430 PushS
	var_66_int = 1; // 0x1431 PushI
	SetVariable(var_65_string, var_66_int); // 0x1432 Func
	return 0; // 0x1434 Return
}


func_49(var_0_object, var_35_int, var_36_object)
{
	var_38_object = Obj(); var_39_bool = 0; var_40_int = 0; var_41_bool = 0; var_42_object = Obj(); var_43_bool = 0; var_44_int = 0; var_45_bool = 0; // 0x31 PushV
	var_0_object = var_36_object; // 0x32 TMov
	var_46_bool = 0; var_47_object = Obj(); // 0x33 PushV
	var_47_object = var_36_object; // 0x34 Mov
	func_4760(var_47_object); // 0x35 Call
	var_86_bool = var_46_bool == 0; // 0x37 Not
	if(var_86_bool == 0) goto Label_59; // 0x38 JumpB
	var_35_int = -2; // 0x39 MovI
	return 8; // 0x3a Return
	
Label_59:
	CreateDialog(var_42_object); // 0x3b Func
	var_87_int = 0; // 0x3d PushV
	func_4908(var_87_int); // 0x3e Call
	SetNPCName(var_87_int); // 0x40 ObjFunc
	var_88_string = ""; // 0x42 PushV
	func_4910(var_88_string); // 0x43 Call
	SetPhoto(var_88_string); // 0x45 ObjFunc
	var_89_int = 0; // 0x47 PushV
	func_5679(var_89_int); // 0x48 Call
	SetPlayerName(var_89_int); // 0x4a ObjFunc
	var_44_int = -1; // 0x4c MovI
	IsOverrideActive(var_43_bool); // 0x4d Func
	var_97_bool = var_43_bool; // 0x4f Push
	if(var_97_bool == 0) goto Label_83; // 0x50 JumpB
	var_35_int = -2; // 0x51 MovI
	return 8; // 0x52 Return
	
Label_83:
	DoDialog(var_42_object); // 0x53 Func
	var_98_object = Obj(); var_99_object = Obj(); // 0x55 PushV
	var_98_object = var_36_object; // 0x56 Mov
	var_99_object = var_42_object; // 0x57 Mov
	TaskCall(3); // 0x58 TaskCall
	func_112(var_100_object, var_101_object, var_102_string, var_103_bool, var_98_object, var_99_object); // 0x59 Call
	TaskReturn(); // 0x5a TaskReturn
	IsDialogEnd(var_45_bool); // 0x5c ObjFunc
	
Label_94:
	var_256_bool = var_45_bool == 0; // 0x5e Not
	if(var_256_bool == 0) goto Label_101; // 0x5f JumpB
	sync(); // 0x60 Func
	IsDialogEnd(var_45_bool); // 0x62 ObjFunc
	goto Label_94; // 0x64 Jump
	
Label_101:
	var_257_object = Obj(); // 0x65 PushV
	var_257_object = var_36_object; // 0x66 Mov
	func_4816(); // 0x67 Call
	StopDialog(var_42_object); // 0x69 Func
	GetReturnValue(var_44_int); // 0x6b ObjFunc
	var_35_int = var_44_int; // 0x6d Mov
	return 8; // 0x6e Return
}


func_4912(var_28_bool)
{
	var_28_bool = 1; // 0x1330 MovB
	return 0; // 0x1331 Return
}


func_5425(var_95_bool)
{
	var_97_int = 0; var_98_string = ""; // 0x1532 PushV
	var_98_string = "d8q01"; // 0x1533 MovS
	func_4855(var_97_int, var_98_string); // 0x1534 Call
	var_101_int = 0; // 0x1536 PushI
	var_102_bool = var_97_int == var_101_int; // 0x1537 Eq
	if(var_102_bool == 0) goto Label_5435; // 0x1538 JumpB
	var_95_bool = 1; // 0x1539 MovB
	return 0; // 0x153a Return
	
Label_5435:
	var_95_bool = 0; // 0x153b MovB
	return 0; // 0x153c Return
}


func_4914()
{
	var_194_string = "playsound"; // 0x1333 PushS
	var_195_string = "giveitem"; // 0x1334 PushS
	TriggerWorld(var_194_string, var_195_string); // 0x1335 Func
	return 0; // 0x1337 Return
}


func_5173()
{
	var_33_string = "ood9Aglaja2"; // 0x1436 PushS
	var_34_int = 1; // 0x1437 PushI
	SetVariable(var_33_string, var_34_int); // 0x1438 Func
	return 0; // 0x143a Return
}


func_4920()
{
	var_33_string = "ood7Aglaja1"; // 0x1339 PushS
	var_34_int = 1; // 0x133a PushI
	SetVariable(var_33_string, var_34_int); // 0x133b Func
	return 0; // 0x133d Return
}


func_5179()
{
	var_39_string = "ood9Aglaja3"; // 0x143c PushS
	var_40_int = 1; // 0x143d PushI
	SetVariable(var_39_string, var_40_int); // 0x143e Func
	return 0; // 0x1440 Return
}


func_5437(var_130_bool)
{
	var_132_int = 0; var_133_string = ""; // 0x153e PushV
	var_133_string = "ood8Aglaja1"; // 0x153f MovS
	func_4855(var_132_int, var_133_string); // 0x1540 Call
	var_134_int = 0; // 0x1542 PushI
	var_135_bool = var_132_int == var_134_int; // 0x1543 Eq
	if(var_135_bool == 0) goto Label_5447; // 0x1544 JumpB
	var_130_bool = 1; // 0x1545 MovB
	return 0; // 0x1546 Return
	
Label_5447:
	var_130_bool = 0; // 0x1547 MovB
	return 0; // 0x1548 Return
}


func_4926()
{
	var_47_string = "ood7Aglaja2"; // 0x133f PushS
	var_48_int = 1; // 0x1340 PushI
	SetVariable(var_47_string, var_48_int); // 0x1341 Func
	return 0; // 0x1343 Return
}


func_5696()
{
	var_51_object = Obj(); var_52_object = Obj(); // 0x1640 PushV
	var_53_string = "Adding diary entry"; // 0x1641 PushS
	Trace(var_53_string); // 0x1642 Func
	var_54_int = 186; // 0x1644 PushI
	var_55_int = 1; // 0x1645 PushI
	var_56_int = 15449; // 0x1646 PushI
	CreateDiaryEntry(var_52_object, var_54_int, var_55_int, var_56_int); // 0x1647 Func
	var_57_bool = 0; var_58_object = Obj(); var_59_int = 0; // 0x1649 PushV
	var_58_object = var_52_object; // 0x164a Mov
	var_59_int = -1; // 0x164b MovI
	func_5633(var_57_bool, var_58_object, var_59_int); // 0x164c Call
	return 2; // 0x164e Return
}


func_5185()
{
	var_45_string = "ood9Aglaja4"; // 0x1442 PushS
	var_46_int = 1; // 0x1443 PushI
	SetVariable(var_45_string, var_46_int); // 0x1444 Func
	return 0; // 0x1446 Return
}


func_2880(var_2_object, var_136_string)
{
	var_137_bool = 0; // 0xb41 PushV
	func_4912(var_137_bool); // 0xb42 Call
	var_138_bool = var_137_bool == 0; // 0xb44 Not
	if(var_138_bool == 0) goto Label_2887; // 0xb45 JumpB
	return 0; // 0xb46 Return
	
Label_2887:
	var_139_bool = var_136_string == var_2_object; // 0xb47 Eq
	if(var_139_bool == 0) goto Label_2890; // 0xb48 JumpB
	return 0; // 0xb49 Return
	
Label_2890:
	var_140_string = ""; // 0xb4a PushV
	var_140_string = var_136_string; // 0xb4b Mov
	func_4820(var_140_string); // 0xb4c Call
	var_2_object = var_136_string; // 0xb4e TMov
	return 0; // 0xb4f Return
}


func_4932()
{
	var_53_object = Obj(); var_54_object = Obj(); // 0x1344 PushV
	var_55_string = "d7q01"; // 0x1345 PushS
	var_56_int = 1; // 0x1346 PushI
	SetVariable(var_55_string, var_56_int); // 0x1347 Func
	var_57_object = Obj(); // 0x1349 PushV
	func_5662(var_57_object); // 0x134a Call
	var_54_object = var_57_object; // 0x134b Mov
	var_64_string = "d7q01AglajaGotoBirdmaskSelf"; // 0x134d PushS
	var_65_string = "pt_map_aglaja"; // 0x134e PushS
	var_66_int = 1; // 0x134f PushI
	var_67_int = 15410; // 0x1350 PushI
	var_68_float = 0; // 0x1351 PushV
	func_4879(var_68_float); // 0x1352 Call
	AddMark(var_64_string, var_65_string, var_66_int, var_67_int, var_68_float); // 0x1354 ObjFunc
	var_71_string = "d7q01BirdmaskD"; // 0x1356 PushS
	var_72_string = "pt_d7q01_dbirdmask"; // 0x1357 PushS
	var_73_int = 1; // 0x1358 PushI
	var_74_int = 15408; // 0x1359 PushI
	var_75_float = 0; // 0x135a PushV
	func_4879(var_75_float); // 0x135b Call
	AddMark(var_71_string, var_72_string, var_73_int, var_74_int, var_75_float); // 0x135d ObjFunc
	var_76_string = "d7q01BirdmaskM"; // 0x135f PushS
	var_77_string = "pt_d7q01_mbirdmask"; // 0x1360 PushS
	var_78_int = 1; // 0x1361 PushI
	var_79_int = 15409; // 0x1362 PushI
	var_80_float = 0; // 0x1363 PushV
	func_4879(var_80_float); // 0x1364 Call
	AddMark(var_76_string, var_77_string, var_78_int, var_79_int, var_80_float); // 0x1366 ObjFunc
	var_81_string = "d7q01BirdmaskU"; // 0x1368 PushS
	var_82_string = "pt_d7q01_ubirdmask"; // 0x1369 PushS
	var_83_int = 1; // 0x136a PushI
	var_84_int = 15407; // 0x136b PushI
	var_85_float = 0; // 0x136c PushV
	func_4879(var_85_float); // 0x136d Call
	AddMark(var_81_string, var_82_string, var_83_int, var_84_int, var_85_float); // 0x136f ObjFunc
	func_5792(); // 0x1372 Call
	func_5808(); // 0x1375 Call
	var_120_bool = 0; var_121_string = ""; var_122_string = ""; // 0x1377 PushV
	var_121_string = "quest_d7_01"; // 0x1378 MovS
	var_122_string = "place_birdmasks"; // 0x1379 MovS
	func_4867(var_120_bool, var_121_string, var_122_string); // 0x137a Call
	return 2; // 0x137c Return
}


func_5191()
{
	var_51_string = "ood9Aglaja5"; // 0x1448 PushS
	var_52_int = 1; // 0x1449 PushI
	SetVariable(var_51_string, var_52_int); // 0x144a Func
	return 0; // 0x144c Return
}


func_5449(var_140_bool)
{
	var_142_int = 0; var_143_string = ""; // 0x154a PushV
	var_143_string = "ood8Aglaja2"; // 0x154b MovS
	func_4855(var_142_int, var_143_string); // 0x154c Call
	var_144_int = 0; // 0x154e PushI
	var_145_bool = var_142_int == var_144_int; // 0x154f Eq
	if(var_145_bool == 0) goto Label_5459; // 0x1550 JumpB
	var_140_bool = 1; // 0x1551 MovB
	return 0; // 0x1552 Return
	
Label_5459:
	var_140_bool = 0; // 0x1553 MovB
	return 0; // 0x1554 Return
}


func_1866(var_0_object, var_260_int, var_261_object)
{
	var_263_object = Obj(); var_264_bool = 0; var_265_int = 0; var_266_bool = 0; var_267_object = Obj(); var_268_bool = 0; var_269_int = 0; var_270_bool = 0; // 0x74a PushV
	var_0_object = var_261_object; // 0x74b TMov
	var_271_bool = 0; var_272_object = Obj(); // 0x74c PushV
	var_272_object = var_261_object; // 0x74d Mov
	func_4760(var_272_object); // 0x74e Call
	var_273_bool = var_271_bool == 0; // 0x750 Not
	if(var_273_bool == 0) goto Label_1876; // 0x751 JumpB
	var_260_int = -2; // 0x752 MovI
	return 8; // 0x753 Return
	
Label_1876:
	CreateDialog(var_267_object); // 0x754 Func
	var_274_int = 0; // 0x756 PushV
	func_4908(var_274_int); // 0x757 Call
	SetNPCName(var_274_int); // 0x759 ObjFunc
	var_275_string = ""; // 0x75b PushV
	func_4910(var_275_string); // 0x75c Call
	SetPhoto(var_275_string); // 0x75e ObjFunc
	var_276_int = 0; // 0x760 PushV
	func_5679(var_276_int); // 0x761 Call
	SetPlayerName(var_276_int); // 0x763 ObjFunc
	var_269_int = -1; // 0x765 MovI
	IsOverrideActive(var_268_bool); // 0x766 Func
	var_277_bool = var_268_bool; // 0x768 Push
	if(var_277_bool == 0) goto Label_1900; // 0x769 JumpB
	var_260_int = -2; // 0x76a MovI
	return 8; // 0x76b Return
	
Label_1900:
	DoDialog(var_267_object); // 0x76c Func
	var_278_object = Obj(); var_279_object = Obj(); // 0x76e PushV
	var_278_object = var_261_object; // 0x76f Mov
	var_279_object = var_267_object; // 0x770 Mov
	TaskCall(5); // 0x771 TaskCall
	func_1929(var_280_object, var_281_object, var_282_string, var_283_bool, var_278_object, var_279_object); // 0x772 Call
	TaskReturn(); // 0x773 TaskReturn
	IsDialogEnd(var_270_bool); // 0x775 ObjFunc
	
Label_1911:
	var_344_bool = var_270_bool == 0; // 0x777 Not
	if(var_344_bool == 0) goto Label_1918; // 0x778 JumpB
	sync(); // 0x779 Func
	IsDialogEnd(var_270_bool); // 0x77b ObjFunc
	goto Label_1911; // 0x77d Jump
	
Label_1918:
	var_345_object = Obj(); // 0x77e PushV
	var_345_object = var_261_object; // 0x77f Mov
	func_4816(); // 0x780 Call
	StopDialog(var_267_object); // 0x782 Func
	GetReturnValue(var_269_int); // 0x784 ObjFunc
	var_260_int = var_269_int; // 0x786 Mov
	return 8; // 0x787 Return
}


func_331(var_2_object, var_245_string)
{
	var_246_bool = 0; // 0x14c PushV
	func_4912(var_246_bool); // 0x14d Call
	var_247_bool = var_246_bool == 0; // 0x14f Not
	if(var_247_bool == 0) goto Label_338; // 0x150 JumpB
	return 0; // 0x151 Return
	
Label_338:
	var_248_bool = var_245_string == var_2_object; // 0x152 Eq
	if(var_248_bool == 0) goto Label_341; // 0x153 JumpB
	return 0; // 0x154 Return
	
Label_341:
	var_249_string = ""; // 0x155 PushV
	var_249_string = var_245_string; // 0x156 Mov
	func_4820(var_249_string); // 0x157 Call
	var_2_object = var_245_string; // 0x159 TMov
	return 0; // 0x15a Return
}


func_5197()
{
	var_33_object = Obj(); var_34_object = Obj(); // 0x144d PushV
	var_35_string = "d10q01"; // 0x144e PushS
	var_36_int = 1; // 0x144f PushI
	SetVariable(var_35_string, var_36_int); // 0x1450 Func
	var_37_object = Obj(); // 0x1452 PushV
	func_5662(var_37_object); // 0x1453 Call
	var_34_object = var_37_object; // 0x1454 Mov
	var_44_string = "d10q01AglajaGotoPetr"; // 0x1456 PushS
	var_45_string = "pt_map_petr"; // 0x1457 PushS
	var_46_int = 1; // 0x1458 PushI
	var_47_int = 15451; // 0x1459 PushI
	var_48_float = 0; // 0x145a PushV
	func_4879(var_48_float); // 0x145b Call
	AddMark(var_44_string, var_45_string, var_46_int, var_47_int, var_48_float); // 0x145d ObjFunc
	func_5696(); // 0x1460 Call
	func_5712(); // 0x1463 Call
	var_85_bool = 0; var_86_string = ""; var_87_string = ""; // 0x1465 PushV
	var_86_string = "quest_d10_01"; // 0x1466 MovS
	var_87_string = "init_house"; // 0x1467 MovS
	func_4867(var_85_bool, var_86_string, var_87_string); // 0x1468 Call
	return 2; // 0x146a Return
}


func_5712()
{
	var_76_object = Obj(); var_77_object = Obj(); // 0x1650 PushV
	var_78_string = "Adding diary entry"; // 0x1651 PushS
	Trace(var_78_string); // 0x1652 Func
	var_79_int = 187; // 0x1654 PushI
	var_80_int = 1; // 0x1655 PushI
	var_81_int = 15450; // 0x1656 PushI
	CreateDiaryEntry(var_77_object, var_79_int, var_80_int, var_81_int); // 0x1657 Func
	var_82_bool = 0; var_83_object = Obj(); var_84_int = 0; // 0x1659 PushV
	var_83_object = var_77_object; // 0x165a Mov
	var_84_int = 186; // 0x165b MovI
	func_5633(var_82_bool, var_83_object, var_84_int); // 0x165c Call
	return 2; // 0x165e Return
}


func_5461(var_146_bool)
{
	var_148_int = 0; var_149_string = ""; // 0x1556 PushV
	var_149_string = "d8TermitnikLoad"; // 0x1557 MovS
	func_4855(var_148_int, var_149_string); // 0x1558 Call
	var_150_int = 0; // 0x155a PushI
	var_151_bool = var_148_int != var_150_int; // 0x155b Neq
	if(var_151_bool == 0) goto Label_5471; // 0x155c JumpB
	var_146_bool = 1; // 0x155d MovB
	return 0; // 0x155e Return
	
Label_5471:
	var_146_bool = 0; // 0x155f MovB
	return 0; // 0x1560 Return
}


func_4187(var_0_object, var_1_object, var_2_object, var_3_object, var_559_object, var_560_object)
{
	var_0_object = var_560_object; // 0x105c TMov
	var_1_object = var_559_object; // 0x105d TMov
	var_3_object = 0; // 0x105e TMovB
	var_565_int = 1; // 0x105f PushI
	if(var_565_int == 0) goto Label_4255; // 0x1060 JumpB
	var_566_bool = 0; var_567_object = Obj(); // 0x1061 PushV
	var_567_object = var_1_object; // 0x1062 MovT
	func_5485(var_567_object); // 0x1063 Call
	if(var_566_bool == 0) goto Label_4218; // 0x1065 JumpB
	var_572_object = Obj(); var_573_object = Obj(); // 0x1066 PushV
	var_572_object = var_1_object; // 0x1067 MovT
	var_573_object = var_0_object; // 0x1068 MovT
	func_5270(); // 0x1069 Call
	var_576_string = ""; // 0x106b PushV
	var_576_string = "Neutral"; // 0x106c MovS
	func_4285(var_560_object, var_576_string); // 0x106d Call
	var_581_int = 14194; // 0x106f PushI
	SetMessage(var_581_int); // 0x1070 TObjFunc
	ClearReplies(); // 0x1072 TObjFunc
	var_582_int = 14195; // 0x1074 PushI
	var_583_int = 15410; // 0x1075 PushI
	var_584_int = 15409; // 0x1076 PushI
	AddReply(var_582_int, var_583_int, var_584_int); // 0x1077 TObjFunc
	goto Label_4255; // 0x1079 Jump
	
Label_4255:
	var_585_bool = 0; // 0x109f PushV
	func_4912(var_585_bool); // 0x10a0 Call
	if(var_585_bool == 0) goto Label_4270; // 0x10a2 JumpB
	
Label_4259:
	lshWaitForAnimEnd(); // 0x10a3 Func
	var_586_object = var_3_object; // 0x10a5 PushT
	if(var_586_object == 0) goto Label_4264; // 0x10a6 JumpB
	goto Label_4269; // 0x10a7 Jump
	
Label_4269:
	goto Label_4284; // 0x10ad Jump
	
Label_4284:
	return 0; // 0x10bc Return
	
Label_4264:
	var_587_string = ""; // 0x10a8 PushV
	var_587_string = var_2_object; // 0x10a9 MovT
	func_4820(var_587_string); // 0x10aa Call
	goto Label_4259; // 0x10ac Jump
	
Label_4270:
	var_588_string = "all"; // 0x10ae PushS
	var_589_string = "idle"; // 0x10af PushS
	PlayAnimation(var_588_string, var_589_string); // 0x10b0 Func
	
Label_4274:
	WaitForAnimEnd(); // 0x10b2 Func
	var_590_object = var_3_object; // 0x10b4 PushT
	if(var_590_object == 0) goto Label_4279; // 0x10b5 JumpB
	goto Label_4284; // 0x10b6 Jump
	
Label_4279:
	var_591_string = "all"; // 0x10b7 PushS
	var_592_string = "idle"; // 0x10b8 PushS
	PlayAnimation(var_591_string, var_592_string); // 0x10b9 Func
	goto Label_4274; // 0x10bb Jump
	
Label_4218:
	var_593_string = ""; // 0x107a PushV
	var_593_string = "Neutral"; // 0x107b MovS
	func_4285(var_560_object, var_593_string); // 0x107c Call
	var_594_int = 14222; // 0x107e PushI
	SetMessage(var_594_int); // 0x107f TObjFunc
	ClearReplies(); // 0x1081 TObjFunc
	var_595_bool = 0; var_596_object = Obj(); // 0x1083 PushV
	var_596_object = var_1_object; // 0x1084 MovT
	func_5497(var_596_object); // 0x1085 Call
	if(var_595_bool == 0) goto Label_4237; // 0x1087 JumpB
	var_601_int = 14223; // 0x1088 PushI
	var_602_int = 15442; // 0x1089 PushI
	var_603_int = 15441; // 0x108a PushI
	AddReply(var_601_int, var_602_int, var_603_int); // 0x108b TObjFunc
	
Label_4237:
	var_604_bool = 0; var_605_object = Obj(); // 0x108d PushV
	var_605_object = var_1_object; // 0x108e MovT
	func_5276(var_604_bool, var_605_object); // 0x108f Call
	if(var_604_bool == 0) goto Label_4247; // 0x1091 JumpB
	var_606_int = 14234; // 0x1092 PushI
	var_607_int = 15453; // 0x1093 PushI
	var_608_int = 15452; // 0x1094 PushI
	AddReply(var_606_int, var_607_int, var_608_int); // 0x1095 TObjFunc
	
Label_4247:
	var_609_int = 14239; // 0x1097 PushI
	var_610_int = -1; // 0x1098 PushI
	var_611_int = 15457; // 0x1099 PushI
	AddReply(var_609_int, var_610_int, var_611_int); // 0x109a TObjFunc
	goto Label_4255; // 0x109c Jump
}


func_5728()
{
	var_104_object = Obj(); var_105_object = Obj(); // 0x1660 PushV
	var_106_string = "Adding diary entry"; // 0x1661 PushS
	Trace(var_106_string); // 0x1662 Func
	var_107_int = 191; // 0x1664 PushI
	var_108_int = 1; // 0x1665 PushI
	var_109_int = 15476; // 0x1666 PushI
	CreateDiaryEntry(var_105_object, var_107_int, var_108_int, var_109_int); // 0x1667 Func
	var_110_bool = 0; var_111_object = Obj(); var_112_int = 0; // 0x1669 PushV
	var_111_object = var_105_object; // 0x166a Mov
	var_112_int = 186; // 0x166b MovI
	func_5633(var_110_bool, var_111_object, var_112_int); // 0x166c Call
	return 2; // 0x166e Return
}


func_5473(var_101_bool)
{
	var_103_int = 0; var_104_string = ""; // 0x1562 PushV
	var_104_string = "d9TalkToPolkovodec"; // 0x1563 MovS
	func_4855(var_103_int, var_104_string); // 0x1564 Call
	var_105_int = 0; // 0x1566 PushI
	var_106_bool = var_103_int != var_105_int; // 0x1567 Neq
	if(var_106_bool == 0) goto Label_5483; // 0x1568 JumpB
	var_101_bool = 1; // 0x1569 MovB
	return 0; // 0x156a Return
	
Label_5483:
	var_101_bool = 0; // 0x156b MovB
	return 0; // 0x156c Return
}


func_3175(var_0_object, var_348_int, var_349_object)
{
	var_351_object = Obj(); var_352_bool = 0; var_353_int = 0; var_354_bool = 0; var_355_object = Obj(); var_356_bool = 0; var_357_int = 0; var_358_bool = 0; // 0xc67 PushV
	var_0_object = var_349_object; // 0xc68 TMov
	var_359_bool = 0; var_360_object = Obj(); // 0xc69 PushV
	var_360_object = var_349_object; // 0xc6a Mov
	func_4760(var_360_object); // 0xc6b Call
	var_361_bool = var_359_bool == 0; // 0xc6d Not
	if(var_361_bool == 0) goto Label_3185; // 0xc6e JumpB
	var_348_int = -2; // 0xc6f MovI
	return 8; // 0xc70 Return
	
Label_3185:
	CreateDialog(var_355_object); // 0xc71 Func
	var_362_int = 0; // 0xc73 PushV
	func_4908(var_362_int); // 0xc74 Call
	SetNPCName(var_362_int); // 0xc76 ObjFunc
	var_363_string = ""; // 0xc78 PushV
	func_4910(var_363_string); // 0xc79 Call
	SetPhoto(var_363_string); // 0xc7b ObjFunc
	var_364_int = 0; // 0xc7d PushV
	func_5679(var_364_int); // 0xc7e Call
	SetPlayerName(var_364_int); // 0xc80 ObjFunc
	var_357_int = -1; // 0xc82 MovI
	IsOverrideActive(var_356_bool); // 0xc83 Func
	var_365_bool = var_356_bool; // 0xc85 Push
	if(var_365_bool == 0) goto Label_3209; // 0xc86 JumpB
	var_348_int = -2; // 0xc87 MovI
	return 8; // 0xc88 Return
	
Label_3209:
	DoDialog(var_355_object); // 0xc89 Func
	var_366_object = Obj(); var_367_object = Obj(); // 0xc8b PushV
	var_366_object = var_349_object; // 0xc8c Mov
	var_367_object = var_355_object; // 0xc8d Mov
	TaskCall(9); // 0xc8e TaskCall
	func_3238(var_368_object, var_369_object, var_370_string, var_371_bool, var_366_object, var_367_object); // 0xc8f Call
	TaskReturn(); // 0xc90 TaskReturn
	IsDialogEnd(var_358_bool); // 0xc92 ObjFunc
	
Label_3220:
	var_451_bool = var_358_bool == 0; // 0xc94 Not
	if(var_451_bool == 0) goto Label_3227; // 0xc95 JumpB
	sync(); // 0xc96 Func
	IsDialogEnd(var_358_bool); // 0xc98 ObjFunc
	goto Label_3220; // 0xc9a Jump
	
Label_3227:
	var_452_object = Obj(); // 0xc9b PushV
	var_452_object = var_349_object; // 0xc9c Mov
	func_4816(); // 0xc9d Call
	StopDialog(var_355_object); // 0xc9f Func
	GetReturnValue(var_357_int); // 0xca1 ObjFunc
	var_348_int = var_357_int; // 0xca3 Mov
	return 8; // 0xca4 Return
}


func_5228()
{
	var_134_string = "ood10Aglaja1"; // 0x146d PushS
	var_135_int = 1; // 0x146e PushI
	SetVariable(var_134_string, var_135_int); // 0x146f Func
	return 0; // 0x1471 Return
}


func_5485(var_100_bool)
{
	var_102_int = 0; var_103_string = ""; // 0x156e PushV
	var_103_string = "d11q01"; // 0x156f MovS
	func_4855(var_102_int, var_103_string); // 0x1570 Call
	var_106_int = 0; // 0x1572 PushI
	var_107_bool = var_102_int == var_106_int; // 0x1573 Eq
	if(var_107_bool == 0) goto Label_5495; // 0x1574 JumpB
	var_100_bool = 1; // 0x1575 MovB
	return 0; // 0x1576 Return
	
Label_5495:
	var_100_bool = 0; // 0x1577 MovB
	return 0; // 0x1578 Return
}


func_112(var_0_object, var_1_object, var_2_object, var_3_object, var_98_object, var_99_object)
{
	var_0_object = var_99_object; // 0x71 TMov
	var_1_object = var_98_object; // 0x72 TMov
	var_3_object = 0; // 0x73 TMovB
	var_104_int = 1; // 0x74 PushI
	if(var_104_int == 0) goto Label_301; // 0x75 JumpB
	var_105_bool = 0; // 0x76 PushV
	var_105_bool = 0; // 0x77 MovB
	var_106_bool = 0; var_107_object = Obj(); // 0x78 PushV
	var_107_object = var_1_object; // 0x79 MovT
	func_5286(var_107_object); // 0x7a Call
	if(var_106_bool == 0) goto Label_131; // 0x7c JumpB
	var_114_bool = 0; var_115_object = Obj(); // 0x7d PushV
	var_115_object = var_1_object; // 0x7e MovT
	func_5276(var_114_bool, var_115_object); // 0x7f Call
	if(var_114_bool == 0) goto Label_131; // 0x81 JumpB
	var_105_bool = 1; // 0x82 MovB
	
Label_131:
	if(var_105_bool == 0) goto Label_152; // 0x83 JumpB
	var_118_string = ""; // 0x84 PushV
	var_118_string = "Neutral"; // 0x85 MovS
	func_331(var_99_object, var_118_string); // 0x86 Call
	var_133_int = 12185; // 0x88 PushI
	SetMessage(var_133_int); // 0x89 TObjFunc
	ClearReplies(); // 0x8b TObjFunc
	var_134_int = 12186; // 0x8d PushI
	var_135_int = 14254; // 0x8e PushI
	var_136_int = 13341; // 0x8f PushI
	AddReply(var_134_int, var_135_int, var_136_int); // 0x90 TObjFunc
	var_137_int = 13037; // 0x92 PushI
	var_138_int = 14245; // 0x93 PushI
	var_139_int = 14244; // 0x94 PushI
	AddReply(var_137_int, var_138_int, var_139_int); // 0x95 TObjFunc
	goto Label_301; // 0x97 Jump
	
Label_301:
	var_140_bool = 0; // 0x12d PushV
	func_4912(var_140_bool); // 0x12e Call
	if(var_140_bool == 0) goto Label_316; // 0x130 JumpB
	
Label_305:
	lshWaitForAnimEnd(); // 0x131 Func
	var_141_object = var_3_object; // 0x133 PushT
	if(var_141_object == 0) goto Label_310; // 0x134 JumpB
	goto Label_315; // 0x135 Jump
	
Label_315:
	goto Label_330; // 0x13b Jump
	
Label_330:
	return 0; // 0x14a Return
	
Label_310:
	var_142_string = ""; // 0x136 PushV
	var_142_string = var_2_object; // 0x137 MovT
	func_4820(var_142_string); // 0x138 Call
	goto Label_305; // 0x13a Jump
	
Label_316:
	var_143_string = "all"; // 0x13c PushS
	var_144_string = "idle"; // 0x13d PushS
	PlayAnimation(var_143_string, var_144_string); // 0x13e Func
	
Label_320:
	WaitForAnimEnd(); // 0x140 Func
	var_145_object = var_3_object; // 0x142 PushT
	if(var_145_object == 0) goto Label_325; // 0x143 JumpB
	goto Label_330; // 0x144 Jump
	
Label_325:
	var_146_string = "all"; // 0x145 PushS
	var_147_string = "idle"; // 0x146 PushS
	PlayAnimation(var_146_string, var_147_string); // 0x147 Func
	goto Label_320; // 0x149 Jump
	
Label_152:
	var_148_bool = 0; // 0x98 PushV
	var_148_bool = 0; // 0x99 MovB
	var_149_bool = 0; var_150_object = Obj(); // 0x9a PushV
	var_150_object = var_1_object; // 0x9b MovT
	func_5298(var_150_object); // 0x9c Call
	if(var_149_bool == 0) goto Label_165; // 0x9e JumpB
	var_155_bool = 0; var_156_object = Obj(); // 0x9f PushV
	var_156_object = var_1_object; // 0xa0 MovT
	func_5276(var_155_bool, var_156_object); // 0xa1 Call
	if(var_155_bool == 0) goto Label_165; // 0xa3 JumpB
	var_148_bool = 1; // 0xa4 MovB
	
Label_165:
	if(var_148_bool == 0) goto Label_181; // 0xa5 JumpB
	var_157_string = ""; // 0xa6 PushV
	var_157_string = "Neutral"; // 0xa7 MovS
	func_331(var_99_object, var_157_string); // 0xa8 Call
	var_158_int = 13033; // 0xaa PushI
	SetMessage(var_158_int); // 0xab TObjFunc
	ClearReplies(); // 0xad TObjFunc
	var_159_int = 13034; // 0xaf PushI
	var_160_int = 14260; // 0xb0 PushI
	var_161_int = 14241; // 0xb1 PushI
	AddReply(var_159_int, var_160_int, var_161_int); // 0xb2 TObjFunc
	goto Label_301; // 0xb4 Jump
	
Label_181:
	var_162_bool = 0; var_163_object = Obj(); // 0xb5 PushV
	var_163_object = var_1_object; // 0xb6 MovT
	func_5310(var_163_object); // 0xb7 Call
	if(var_162_bool == 0) goto Label_206; // 0xb9 JumpB
	var_168_string = ""; // 0xba PushV
	var_168_string = "Neutral"; // 0xbb MovS
	func_331(var_99_object, var_168_string); // 0xbc Call
	var_169_int = 13074; // 0xbe PushI
	SetMessage(var_169_int); // 0xbf TObjFunc
	ClearReplies(); // 0xc1 TObjFunc
	var_170_int = 13076; // 0xc3 PushI
	var_171_int = 14287; // 0xc4 PushI
	var_172_int = 14286; // 0xc5 PushI
	AddReply(var_170_int, var_171_int, var_172_int); // 0xc6 TObjFunc
	var_173_int = 13117; // 0xc8 PushI
	var_174_int = 14336; // 0xc9 PushI
	var_175_int = 14335; // 0xca PushI
	AddReply(var_173_int, var_174_int, var_175_int); // 0xcb TObjFunc
	goto Label_301; // 0xcd Jump
	
Label_206:
	var_176_string = ""; // 0xce PushV
	var_176_string = "Neutral"; // 0xcf MovS
	func_331(var_99_object, var_176_string); // 0xd0 Call
	var_177_int = 13031; // 0xd2 PushI
	SetMessage(var_177_int); // 0xd3 TObjFunc
	ClearReplies(); // 0xd5 TObjFunc
	var_178_bool = 0; var_179_object = Obj(); // 0xd7 PushV
	var_179_object = var_1_object; // 0xd8 MovT
	func_5401(var_179_object); // 0xd9 Call
	if(var_178_bool == 0) goto Label_225; // 0xdb JumpB
	var_184_int = 13141; // 0xdc PushI
	var_185_int = 14362; // 0xdd PushI
	var_186_int = 14360; // 0xde PushI
	AddReply(var_184_int, var_185_int, var_186_int); // 0xdf TObjFunc
	
Label_225:
	var_187_bool = 0; // 0xe1 PushV
	var_187_bool = 0; // 0xe2 MovB
	var_188_bool = 0; var_189_object = Obj(); // 0xe3 PushV
	var_189_object = var_1_object; // 0xe4 MovT
	func_5358(var_188_bool, var_189_object); // 0xe5 Call
	if(var_188_bool == 0) goto Label_238; // 0xe7 JumpB
	var_205_bool = 0; var_206_object = Obj(); // 0xe8 PushV
	var_206_object = var_1_object; // 0xe9 MovT
	func_5389(var_206_object); // 0xea Call
	if(var_205_bool == 0) goto Label_238; // 0xec JumpB
	var_187_bool = 1; // 0xed MovB
	
Label_238:
	if(var_187_bool == 0) goto Label_244; // 0xee JumpB
	var_211_int = 13075; // 0xef PushI
	var_212_int = 14369; // 0xf0 PushI
	var_213_int = 14285; // 0xf1 PushI
	AddReply(var_211_int, var_212_int, var_213_int); // 0xf2 TObjFunc
	
Label_244:
	var_214_bool = 0; // 0xf4 PushV
	var_214_bool = 0; // 0xf5 MovB
	var_215_bool = 0; var_216_object = Obj(); // 0xf6 PushV
	var_216_object = var_1_object; // 0xf7 MovT
	func_5334(var_216_object); // 0xf8 Call
	if(var_215_bool == 0) goto Label_257; // 0xfa JumpB
	var_221_bool = 0; var_222_object = Obj(); // 0xfb PushV
	var_222_object = var_1_object; // 0xfc MovT
	func_5346(var_222_object); // 0xfd Call
	if(var_221_bool == 0) goto Label_257; // 0xff JumpB
	var_214_bool = 1; // 0x100 MovB
	
Label_257:
	if(var_214_bool == 0) goto Label_263; // 0x101 JumpB
	var_227_int = 13125; // 0x102 PushI
	var_228_int = 14345; // 0x103 PushI
	var_229_int = 14344; // 0x104 PushI
	AddReply(var_227_int, var_228_int, var_229_int); // 0x105 TObjFunc
	
Label_263:
	var_230_bool = 0; var_231_object = Obj(); // 0x107 PushV
	var_231_object = var_1_object; // 0x108 MovT
	func_5322(var_231_object); // 0x109 Call
	if(var_230_bool == 0) goto Label_273; // 0x10b JumpB
	var_236_int = 13035; // 0x10c PushI
	var_237_int = 14243; // 0x10d PushI
	var_238_int = 14242; // 0x10e PushI
	AddReply(var_236_int, var_237_int, var_238_int); // 0x10f TObjFunc
	
Label_273:
	var_239_bool = 0; var_240_object = Obj(); // 0x111 PushV
	var_240_object = var_1_object; // 0x112 MovT
	func_5276(var_239_bool, var_240_object); // 0x113 Call
	if(var_239_bool == 0) goto Label_283; // 0x115 JumpB
	var_241_int = 13142; // 0x116 PushI
	var_242_int = 14364; // 0x117 PushI
	var_243_int = 14361; // 0x118 PushI
	AddReply(var_241_int, var_242_int, var_243_int); // 0x119 TObjFunc
	
Label_283:
	var_244_bool = 0; var_245_object = Obj(); // 0x11b PushV
	var_245_object = var_1_object; // 0x11c MovT
	func_5413(var_245_object); // 0x11d Call
	if(var_244_bool == 0) goto Label_293; // 0x11f JumpB
	var_250_int = 13377; // 0x120 PushI
	var_251_int = 14610; // 0x121 PushI
	var_252_int = 14609; // 0x122 PushI
	AddReply(var_250_int, var_251_int, var_252_int); // 0x123 TObjFunc
	
Label_293:
	var_253_int = 13032; // 0x125 PushI
	var_254_int = -1; // 0x126 PushI
	var_255_int = 14239; // 0x127 PushI
	AddReply(var_253_int, var_254_int, var_255_int); // 0x128 TObjFunc
	goto Label_301; // 0x12a Jump
}


func_5744()
{
	var_35_object = Obj(); var_36_object = Obj(); // 0x1670 PushV
	var_37_string = "Adding diary entry"; // 0x1671 PushS
	Trace(var_37_string); // 0x1672 Func
	var_38_int = 192; // 0x1674 PushI
	var_39_int = 1; // 0x1675 PushI
	var_40_int = 15477; // 0x1676 PushI
	CreateDiaryEntry(var_36_object, var_38_int, var_39_int, var_40_int); // 0x1677 Func
	var_41_bool = 0; var_42_object = Obj(); var_43_int = 0; // 0x1679 PushV
	var_42_object = var_36_object; // 0x167a Mov
	var_43_int = -1; // 0x167b MovI
	func_5633(var_41_bool, var_42_object, var_43_int); // 0x167c Call
	return 2; // 0x167e Return
}


func_5234()
{
	var_95_object = Obj(); var_96_object = Obj(); var_97_object = Obj(); var_98_object = Obj(); // 0x1472 PushV
	var_99_object = Obj(); // 0x1473 PushV
	func_5662(var_99_object); // 0x1474 Call
	var_97_object = var_99_object; // 0x1475 Mov
	var_100_string = "d10q01AglajaGotoPetr"; // 0x1477 PushS
	FindMark(var_98_object, var_100_string); // 0x1478 ObjFunc
	var_101_object = var_98_object; // 0x147a Push
	if(var_101_object == 0) goto Label_5246; // 0x147b JumpB
	Remove(); // 0x147c ObjFunc
	
Label_5246:
	var_102_string = "d10q01SoldierGotoPetr"; // 0x147e PushS
	FindMark(var_98_object, var_102_string); // 0x147f ObjFunc
	var_103_object = var_98_object; // 0x1481 Push
	if(var_103_object == 0) goto Label_5253; // 0x1482 JumpB
	Remove(); // 0x1483 ObjFunc
	
Label_5253:
	func_5728(); // 0x1486 Call
	var_113_bool = 0; var_114_string = ""; var_115_string = ""; // 0x1488 PushV
	var_114_string = "quest_d10_01"; // 0x1489 MovS
	var_115_string = "completed"; // 0x148a MovS
	func_4867(var_113_bool, var_114_string, var_115_string); // 0x148b Call
	return 4; // 0x148d Return
}


func_5497(var_133_bool)
{
	var_135_int = 0; var_136_string = ""; // 0x157a PushV
	var_136_string = "d11q01"; // 0x157b MovS
	func_4855(var_135_int, var_136_string); // 0x157c Call
	var_137_int = 4; // 0x157e PushI
	var_138_bool = var_135_int == var_137_int; // 0x157f Eq
	if(var_138_bool == 0) goto Label_5507; // 0x1580 JumpB
	var_133_bool = 1; // 0x1581 MovB
	return 0; // 0x1582 Return
	
Label_5507:
	var_133_bool = 0; // 0x1583 MovB
	return 0; // 0x1584 Return
}


func_4990()
{
	var_222_string = "ood7Aglaja3"; // 0x137f PushS
	var_223_int = 1; // 0x1380 PushI
	SetVariable(var_222_string, var_223_int); // 0x1381 Func
	return 0; // 0x1383 Return
}


func_5760()
{
	var_60_object = Obj(); var_61_object = Obj(); // 0x1680 PushV
	var_62_string = "Adding diary entry"; // 0x1681 PushS
	Trace(var_62_string); // 0x1682 Func
	var_63_int = 193; // 0x1684 PushI
	var_64_int = 1; // 0x1685 PushI
	var_65_int = 15478; // 0x1686 PushI
	CreateDiaryEntry(var_61_object, var_63_int, var_64_int, var_65_int); // 0x1687 Func
	var_66_bool = 0; var_67_object = Obj(); var_68_int = 0; // 0x1689 PushV
	var_67_object = var_61_object; // 0x168a Mov
	var_68_int = 192; // 0x168b MovI
	func_5633(var_66_bool, var_67_object, var_68_int); // 0x168c Call
	return 2; // 0x168e Return
}


func_4996()
{
	var_161_object = Obj(); var_162_int = 0; var_163_object = Obj(); var_164_int = 0; // 0x1384 PushV
	var_165_string = "d7q01"; // 0x1385 PushS
	var_166_int = 2; // 0x1386 PushI
	SetVariable(var_165_string, var_166_int); // 0x1387 Func
	var_167_object = Obj(); // 0x1389 PushV
	func_5662(var_167_object); // 0x138a Call
	var_163_object = var_167_object; // 0x138b Mov
	var_168_string = "d7q01AglajaFindLierSelf"; // 0x138d PushS
	var_169_string = "pt_map_aglaja"; // 0x138e PushS
	var_170_int = 1; // 0x138f PushI
	var_171_int = 15411; // 0x1390 PushI
	var_172_float = 0; // 0x1391 PushV
	func_4879(var_172_float); // 0x1392 Call
	AddMark(var_168_string, var_169_string, var_170_int, var_171_int, var_172_float); // 0x1394 ObjFunc
	func_5840(); // 0x1397 Call
	var_182_string = "d7q01_mreport"; // 0x1399 PushS
	var_183_int = 1; // 0x139a PushI
	RemoveItemByType(var_164_int, var_182_string, var_183_int); // 0x139b ObjFunc
	var_184_string = "d7q01_dreport"; // 0x139d PushS
	var_185_int = 1; // 0x139e PushI
	RemoveItemByType(var_164_int, var_184_string, var_185_int); // 0x139f ObjFunc
	var_186_string = "d7q01_ureport"; // 0x13a1 PushS
	var_187_int = 1; // 0x13a2 PushI
	RemoveItemByType(var_164_int, var_186_string, var_187_int); // 0x13a3 ObjFunc
	return 4; // 0x13a5 Return
}


func_5509(var_55_bool)
{
	var_57_int = 0; var_58_string = ""; // 0x1586 PushV
	var_58_string = "ood9Aglaja1"; // 0x1587 MovS
	func_4855(var_57_int, var_58_string); // 0x1588 Call
	var_61_int = 0; // 0x158a PushI
	var_62_bool = var_57_int == var_61_int; // 0x158b Eq
	if(var_62_bool == 0) goto Label_5519; // 0x158c JumpB
	var_55_bool = 1; // 0x158d MovB
	return 0; // 0x158e Return
	
Label_5519:
	var_55_bool = 0; // 0x158f MovB
	return 0; // 0x1590 Return
}


func_4743(var_26_bool)
{
	var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_bool = 0; var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_bool = 0; // 0x1287 PushV
	GetPosition(var_32_cvector); // 0x1288 ObjFunc
	GetPosition(var_33_cvector); // 0x128a Func
	var_34_cvector = var_32_cvector - var_33_cvector; // 0x128c Sub2
	var_36_float = GetByIndex(var_34_cvector, 0); // 0x128d PushE
	var_37_float = GetByIndex(var_34_cvector, 2); // 0x128e PushE
	Rotate(var_36_float, var_37_float, var_35_bool); // 0x128f Func
	var_26_bool = var_35_bool; // 0x1291 Mov
	return 8; // 0x1292 Return
}


func_1929(var_0_object, var_1_object, var_2_object, var_3_object, var_278_object, var_279_object)
{
	var_0_object = var_279_object; // 0x78a TMov
	var_1_object = var_278_object; // 0x78b TMov
	var_3_object = 0; // 0x78c TMovB
	var_284_int = 1; // 0x78d PushI
	if(var_284_int == 0) goto Label_2026; // 0x78e JumpB
	var_285_bool = 0; var_286_object = Obj(); // 0x78f PushV
	var_286_object = var_1_object; // 0x790 MovT
	func_5425(var_286_object); // 0x791 Call
	if(var_285_bool == 0) goto Label_1965; // 0x793 JumpB
	var_291_string = ""; // 0x794 PushV
	var_291_string = "Neutral"; // 0x795 MovS
	func_2056(var_279_object, var_291_string); // 0x796 Call
	var_296_int = 13413; // 0x798 PushI
	SetMessage(var_296_int); // 0x799 TObjFunc
	ClearReplies(); // 0x79b TObjFunc
	var_297_int = 13415; // 0x79d PushI
	var_298_int = 14650; // 0x79e PushI
	var_299_int = 14649; // 0x79f PushI
	AddReply(var_297_int, var_298_int, var_299_int); // 0x7a0 TObjFunc
	var_300_int = 13417; // 0x7a2 PushI
	var_301_int = 14949; // 0x7a3 PushI
	var_302_int = 14652; // 0x7a4 PushI
	AddReply(var_300_int, var_301_int, var_302_int); // 0x7a5 TObjFunc
	var_303_int = 13414; // 0x7a7 PushI
	var_304_int = 14650; // 0x7a8 PushI
	var_305_int = 14648; // 0x7a9 PushI
	AddReply(var_303_int, var_304_int, var_305_int); // 0x7aa TObjFunc
	goto Label_2026; // 0x7ac Jump
	
Label_2026:
	var_306_bool = 0; // 0x7ea PushV
	func_4912(var_306_bool); // 0x7eb Call
	if(var_306_bool == 0) goto Label_2041; // 0x7ed JumpB
	
Label_2030:
	lshWaitForAnimEnd(); // 0x7ee Func
	var_307_object = var_3_object; // 0x7f0 PushT
	if(var_307_object == 0) goto Label_2035; // 0x7f1 JumpB
	goto Label_2040; // 0x7f2 Jump
	
Label_2040:
	goto Label_2055; // 0x7f8 Jump
	
Label_2055:
	return 0; // 0x807 Return
	
Label_2035:
	var_308_string = ""; // 0x7f3 PushV
	var_308_string = var_2_object; // 0x7f4 MovT
	func_4820(var_308_string); // 0x7f5 Call
	goto Label_2030; // 0x7f7 Jump
	
Label_2041:
	var_309_string = "all"; // 0x7f9 PushS
	var_310_string = "idle"; // 0x7fa PushS
	PlayAnimation(var_309_string, var_310_string); // 0x7fb Func
	
Label_2045:
	WaitForAnimEnd(); // 0x7fd Func
	var_311_object = var_3_object; // 0x7ff PushT
	if(var_311_object == 0) goto Label_2050; // 0x800 JumpB
	goto Label_2055; // 0x801 Jump
	
Label_2050:
	var_312_string = "all"; // 0x802 PushS
	var_313_string = "idle"; // 0x803 PushS
	PlayAnimation(var_312_string, var_313_string); // 0x804 Func
	goto Label_2045; // 0x806 Jump
	
Label_1965:
	var_314_string = ""; // 0x7ad PushV
	var_314_string = "Neutral"; // 0x7ae MovS
	func_2056(var_279_object, var_314_string); // 0x7af Call
	var_315_int = 13409; // 0x7b1 PushI
	SetMessage(var_315_int); // 0x7b2 TObjFunc
	ClearReplies(); // 0x7b4 TObjFunc
	var_316_bool = 0; var_317_object = Obj(); // 0x7b6 PushV
	var_317_object = var_1_object; // 0x7b7 MovT
	func_5437(var_317_object); // 0x7b8 Call
	if(var_316_bool == 0) goto Label_1984; // 0x7ba JumpB
	var_322_int = 13411; // 0x7bb PushI
	var_323_int = 13400; // 0x7bc PushI
	var_324_int = 14645; // 0x7bd PushI
	AddReply(var_322_int, var_323_int, var_324_int); // 0x7be TObjFunc
	
Label_1984:
	var_325_bool = 0; // 0x7c0 PushV
	var_325_bool = 0; // 0x7c1 MovB
	var_326_bool = 0; var_327_object = Obj(); // 0x7c2 PushV
	var_327_object = var_1_object; // 0x7c3 MovT
	func_5449(var_327_object); // 0x7c4 Call
	if(var_326_bool == 0) goto Label_1997; // 0x7c6 JumpB
	var_332_bool = 0; var_333_object = Obj(); // 0x7c7 PushV
	var_333_object = var_1_object; // 0x7c8 MovT
	func_5461(var_333_object); // 0x7c9 Call
	if(var_332_bool == 0) goto Label_1997; // 0x7cb JumpB
	var_325_bool = 1; // 0x7cc MovB
	
Label_1997:
	if(var_325_bool == 0) goto Label_2003; // 0x7cd JumpB
	var_338_int = 13412; // 0x7ce PushI
	var_339_int = 13452; // 0x7cf PushI
	var_340_int = 14646; // 0x7d0 PushI
	AddReply(var_338_int, var_339_int, var_340_int); // 0x7d1 TObjFunc
	
Label_2003:
	var_341_int = 13410; // 0x7d3 PushI
	var_342_int = -1; // 0x7d4 PushI
	var_343_int = 14644; // 0x7d5 PushI
	AddReply(var_341_int, var_342_int, var_343_int); // 0x7d6 TObjFunc
	goto Label_2026; // 0x7d8 Jump
}


func_5264()
{
	var_120_string = "ood10Aglaja2"; // 0x1491 PushS
	var_121_int = 1; // 0x1492 PushI
	SetVariable(var_120_string, var_121_int); // 0x1493 Func
	return 0; // 0x1495 Return
}


func_5776()
{
	var_86_object = Obj(); var_87_object = Obj(); // 0x1690 PushV
	var_88_string = "Adding diary entry"; // 0x1691 PushS
	Trace(var_88_string); // 0x1692 Func
	var_89_int = 196; // 0x1694 PushI
	var_90_int = 1; // 0x1695 PushI
	var_91_int = 15481; // 0x1696 PushI
	CreateDiaryEntry(var_87_object, var_89_int, var_90_int, var_91_int); // 0x1697 Func
	var_92_bool = 0; var_93_object = Obj(); var_94_int = 0; // 0x1699 PushV
	var_93_object = var_87_object; // 0x169a Mov
	var_94_int = 192; // 0x169b MovI
	func_5633(var_92_bool, var_93_object, var_94_int); // 0x169c Call
	return 2; // 0x169e Return
}


func_5521(var_91_bool)
{
	var_93_int = 0; var_94_string = ""; // 0x1592 PushV
	var_94_string = "ood9Aglaja2"; // 0x1593 MovS
	func_4855(var_93_int, var_94_string); // 0x1594 Call
	var_95_int = 0; // 0x1596 PushI
	var_96_bool = var_93_int == var_95_int; // 0x1597 Eq
	if(var_96_bool == 0) goto Label_5531; // 0x1598 JumpB
	var_91_bool = 1; // 0x1599 MovB
	return 0; // 0x159a Return
	
Label_5531:
	var_91_bool = 0; // 0x159b MovB
	return 0; // 0x159c Return
}


func_4755(var_26_bool)
{
	var_27_bool = 0; var_28_bool = 0; // 0x1293 PushV
	IsLoaded(var_28_bool); // 0x1294 Func
	var_26_bool = var_28_bool; // 0x1296 Mov
	return 2; // 0x1297 Return
}


func_5270()
{
	var_110_string = "d11AglajaVisit"; // 0x1497 PushS
	var_111_int = 1; // 0x1498 PushI
	SetVariable(var_110_string, var_111_int); // 0x1499 Func
	return 0; // 0x149b Return
}


func_2710(var_0_object, var_455_int, var_456_object)
{
	var_458_object = Obj(); var_459_bool = 0; var_460_int = 0; var_461_bool = 0; var_462_object = Obj(); var_463_bool = 0; var_464_int = 0; var_465_bool = 0; // 0xa96 PushV
	var_0_object = var_456_object; // 0xa97 TMov
	var_466_bool = 0; var_467_object = Obj(); // 0xa98 PushV
	var_467_object = var_456_object; // 0xa99 Mov
	func_4760(var_467_object); // 0xa9a Call
	var_468_bool = var_466_bool == 0; // 0xa9c Not
	if(var_468_bool == 0) goto Label_2720; // 0xa9d JumpB
	var_455_int = -2; // 0xa9e MovI
	return 8; // 0xa9f Return
	
Label_2720:
	CreateDialog(var_462_object); // 0xaa0 Func
	var_469_int = 0; // 0xaa2 PushV
	func_4908(var_469_int); // 0xaa3 Call
	SetNPCName(var_469_int); // 0xaa5 ObjFunc
	var_470_string = ""; // 0xaa7 PushV
	func_4910(var_470_string); // 0xaa8 Call
	SetPhoto(var_470_string); // 0xaaa ObjFunc
	var_471_int = 0; // 0xaac PushV
	func_5679(var_471_int); // 0xaad Call
	SetPlayerName(var_471_int); // 0xaaf ObjFunc
	var_464_int = -1; // 0xab1 MovI
	IsOverrideActive(var_463_bool); // 0xab2 Func
	var_472_bool = var_463_bool; // 0xab4 Push
	if(var_472_bool == 0) goto Label_2744; // 0xab5 JumpB
	var_455_int = -2; // 0xab6 MovI
	return 8; // 0xab7 Return
	
Label_2744:
	DoDialog(var_462_object); // 0xab8 Func
	var_473_object = Obj(); var_474_object = Obj(); // 0xaba PushV
	var_473_object = var_456_object; // 0xabb Mov
	var_474_object = var_462_object; // 0xabc Mov
	TaskCall(7); // 0xabd TaskCall
	func_2773(var_475_object, var_476_object, var_477_string, var_478_bool, var_473_object, var_474_object); // 0xabe Call
	TaskReturn(); // 0xabf TaskReturn
	IsDialogEnd(var_465_bool); // 0xac1 ObjFunc
	
Label_2755:
	var_537_bool = var_465_bool == 0; // 0xac3 Not
	if(var_537_bool == 0) goto Label_2762; // 0xac4 JumpB
	sync(); // 0xac5 Func
	IsDialogEnd(var_465_bool); // 0xac7 ObjFunc
	goto Label_2755; // 0xac9 Jump
	
Label_2762:
	var_538_object = Obj(); // 0xaca PushV
	var_538_object = var_456_object; // 0xacb Mov
	func_4816(); // 0xacc Call
	StopDialog(var_462_object); // 0xace Func
	GetReturnValue(var_464_int); // 0xad0 ObjFunc
	var_455_int = var_464_int; // 0xad2 Mov
	return 8; // 0xad3 Return
}


func_4760(var_46_bool)
{
	var_48_float = 0; var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); var_55_bool = 0; var_56_float = 0; var_57_cvector = CVector(0,0,0); var_58_cvector = CVector(0,0,0); var_59_cvector = CVector(0,0,0); var_60_cvector = CVector(0,0,0); var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0); var_63_bool = 0; // 0x1298 PushV
	GetPosition(var_57_cvector); // 0x1299 ObjFunc
	GetEyesHeight(var_56_float); // 0x129b ObjFunc
	var_64_float = GetByIndex(var_57_cvector, 1); // 0x129d PushE
	var_64_float = var_64_float + var_56_float; // 0x129e Add2
	SetByIndex(var_57_cvector, 1) = var_64_float; // 0x129f PopE
	GetPosition(var_58_cvector); // 0x12a0 Func
	GetEyesHeight(var_56_float); // 0x12a2 Func
	var_65_float = GetByIndex(var_58_cvector, 1); // 0x12a4 PushE
	var_65_float = var_65_float + var_56_float; // 0x12a5 Add2
	SetByIndex(var_58_cvector, 1) = var_65_float; // 0x12a6 PopE
	var_59_cvector = var_57_cvector - var_58_cvector; // 0x12a7 Sub2
	var_66_float = GetByIndex(var_59_cvector, 1); // 0x12a8 PushE
	var_66_float = 0; // 0x12a9 MovI
	SetByIndex(var_59_cvector, 1) = var_66_float; // 0x12aa PopE
	var_67_int = var_59_cvector | var_59_cvector; // 0x12ab Or
	var_68_float = sqrt(var_67_int); // 0x12ac Sqrt
	var_59_cvector = var_59_cvector / var_59_cvector; // 0x12ad Div2
	var_60_cvector = -var_59_cvector; // 0x12ae Neg2
	var_69_int = 70; // 0x12af PushI
	var_70_float = var_59_cvector * var_69_int; // 0x12b0 Mult
	var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); // 0x12b1 PushV
	var_73_cvector = CVector(0.0, 1.0, 0.0); // 0x12b2 PushVec
	var_72_cvector = var_60_cvector ^ var_73_cvector; // 0x12b3 Xor2
	func_4845(var_71_cvector, var_72_cvector); // 0x12b4 Call
	var_79_int = 25; // 0x12b6 PushI
	var_80_float = var_71_cvector * var_79_int; // 0x12b7 Mult
	var_81_int = var_70_float + var_80_float; // 0x12b8 Add
	var_82_cvector = CVector(0.0, 10.0, 0.0); // 0x12b9 PushVec
	var_61_cvector = var_81_int - var_82_cvector; // 0x12ba Sub2
	var_62_cvector = var_58_cvector + var_61_cvector; // 0x12bb Add2
	IsOverrideActive(var_63_bool); // 0x12bc Func
	var_83_bool = var_63_bool; // 0x12be Push
	if(var_83_bool == 0) goto Label_4802; // 0x12bf JumpB
	var_46_bool = 0; // 0x12c0 MovB
	return 16; // 0x12c1 Return
	
Label_4802:
	StopWorld(); // 0x12c2 Func
	CameraTransit(var_62_cvector, var_60_cvector); // 0x12c4 Func
	var_84_float = GetByIndex(var_61_cvector, 0); // 0x12c6 PushE
	var_85_float = GetByIndex(var_61_cvector, 2); // 0x12c7 PushE
	Rotate(var_84_float, var_85_float); // 0x12c8 Func
	CameraWaitForPlayFinish(); // 0x12ca Func
	ResumeWorld(); // 0x12cc Func
	var_46_bool = 1; // 0x12ce MovB
	return 16; // 0x12cf Return
}


func_5276(var_142_bool, var_143_object)
{
	var_144_bool = 0; var_145_object = Obj(); // 0x149d PushV
	var_145_object = var_143_object; // 0x149e Mov
	func_5617(var_145_object); // 0x149f Call
	if(var_144_bool == 0) goto Label_5284; // 0x14a1 JumpB
	var_142_bool = 1; // 0x14a2 MovB
	return 0; // 0x14a3 Return
	
Label_5284:
	var_142_bool = 0; // 0x14a4 MovB
	return 0; // 0x14a5 Return
}


func_5533(var_107_bool)
{
	var_109_int = 0; var_110_string = ""; // 0x159e PushV
	var_110_string = "ood9Aglaja3"; // 0x159f MovS
	func_4855(var_109_int, var_110_string); // 0x15a0 Call
	var_111_int = 0; // 0x15a2 PushI
	var_112_bool = var_109_int == var_111_int; // 0x15a3 Eq
	if(var_112_bool == 0) goto Label_5543; // 0x15a4 JumpB
	var_107_bool = 1; // 0x15a5 MovB
	return 0; // 0x15a6 Return
	
Label_5543:
	var_107_bool = 0; // 0x15a7 MovB
	return 0; // 0x15a8 Return
}


func_5792()
{
	var_86_object = Obj(); var_87_object = Obj(); // 0x16a0 PushV
	var_88_string = "Adding diary entry"; // 0x16a1 PushS
	Trace(var_88_string); // 0x16a2 Func
	var_89_int = 165; // 0x16a4 PushI
	var_90_int = 1; // 0x16a5 PushI
	var_91_int = 15412; // 0x16a6 PushI
	CreateDiaryEntry(var_87_object, var_89_int, var_90_int, var_91_int); // 0x16a7 Func
	var_92_bool = 0; var_93_object = Obj(); var_94_int = 0; // 0x16a9 PushV
	var_93_object = var_87_object; // 0x16aa Mov
	var_94_int = -1; // 0x16ab MovI
	func_5633(var_92_bool, var_93_object, var_94_int); // 0x16ac Call
	return 2; // 0x16ae Return
}


func_5286(var_233_bool)
{
	var_235_int = 0; var_236_string = ""; // 0x14a7 PushV
	var_236_string = "ood7Aglaja1"; // 0x14a8 MovS
	func_4855(var_235_int, var_236_string); // 0x14a9 Call
	var_239_int = 0; // 0x14ab PushI
	var_240_bool = var_235_int == var_239_int; // 0x14ac Eq
	if(var_240_bool == 0) goto Label_5296; // 0x14ad JumpB
	var_233_bool = 1; // 0x14ae MovB
	return 0; // 0x14af Return
	
Label_5296:
	var_233_bool = 0; // 0x14b0 MovB
	return 0; // 0x14b1 Return
}


func_3238(var_0_object, var_1_object, var_2_object, var_3_object, var_366_object, var_367_object)
{
	var_0_object = var_367_object; // 0xca7 TMov
	var_1_object = var_366_object; // 0xca8 TMov
	var_3_object = 0; // 0xca9 TMovB
	var_372_int = 1; // 0xcaa PushI
	if(var_372_int == 0) goto Label_3340; // 0xcab JumpB
	var_373_bool = 0; var_374_object = Obj(); // 0xcac PushV
	var_374_object = var_1_object; // 0xcad MovT
	func_5509(var_374_object); // 0xcae Call
	if(var_373_bool == 0) goto Label_3274; // 0xcb0 JumpB
	var_379_object = Obj(); var_380_object = Obj(); // 0xcb1 PushV
	var_379_object = var_1_object; // 0xcb2 MovT
	var_380_object = var_0_object; // 0xcb3 MovT
	func_5167(); // 0xcb4 Call
	var_383_string = ""; // 0xcb6 PushV
	var_383_string = "Neutral"; // 0xcb7 MovS
	func_3370(var_367_object, var_383_string); // 0xcb8 Call
	var_388_int = 13802; // 0xcba PushI
	SetMessage(var_388_int); // 0xcbb TObjFunc
	ClearReplies(); // 0xcbd TObjFunc
	var_389_int = 13803; // 0xcbf PushI
	var_390_int = 15030; // 0xcc0 PushI
	var_391_int = 15029; // 0xcc1 PushI
	AddReply(var_389_int, var_390_int, var_391_int); // 0xcc2 TObjFunc
	var_392_int = 13815; // 0xcc4 PushI
	var_393_int = 15042; // 0xcc5 PushI
	var_394_int = 15041; // 0xcc6 PushI
	AddReply(var_392_int, var_393_int, var_394_int); // 0xcc7 TObjFunc
	goto Label_3340; // 0xcc9 Jump
	
Label_3340:
	var_395_bool = 0; // 0xd0c PushV
	func_4912(var_395_bool); // 0xd0d Call
	if(var_395_bool == 0) goto Label_3355; // 0xd0f JumpB
	
Label_3344:
	lshWaitForAnimEnd(); // 0xd10 Func
	var_396_object = var_3_object; // 0xd12 PushT
	if(var_396_object == 0) goto Label_3349; // 0xd13 JumpB
	goto Label_3354; // 0xd14 Jump
	
Label_3354:
	goto Label_3369; // 0xd1a Jump
	
Label_3369:
	return 0; // 0xd29 Return
	
Label_3349:
	var_397_string = ""; // 0xd15 PushV
	var_397_string = var_2_object; // 0xd16 MovT
	func_4820(var_397_string); // 0xd17 Call
	goto Label_3344; // 0xd19 Jump
	
Label_3355:
	var_398_string = "all"; // 0xd1b PushS
	var_399_string = "idle"; // 0xd1c PushS
	PlayAnimation(var_398_string, var_399_string); // 0xd1d Func
	
Label_3359:
	WaitForAnimEnd(); // 0xd1f Func
	var_400_object = var_3_object; // 0xd21 PushT
	if(var_400_object == 0) goto Label_3364; // 0xd22 JumpB
	goto Label_3369; // 0xd23 Jump
	
Label_3364:
	var_401_string = "all"; // 0xd24 PushS
	var_402_string = "idle"; // 0xd25 PushS
	PlayAnimation(var_401_string, var_402_string); // 0xd26 Func
	goto Label_3359; // 0xd28 Jump
	
Label_3274:
	var_403_string = ""; // 0xcca PushV
	var_403_string = "Neutral"; // 0xccb MovS
	func_3370(var_367_object, var_403_string); // 0xccc Call
	var_404_int = 13818; // 0xcce PushI
	SetMessage(var_404_int); // 0xccf TObjFunc
	ClearReplies(); // 0xcd1 TObjFunc
	var_405_bool = 0; var_406_object = Obj(); // 0xcd3 PushV
	var_406_object = var_1_object; // 0xcd4 MovT
	func_5521(var_406_object); // 0xcd5 Call
	if(var_405_bool == 0) goto Label_3293; // 0xcd7 JumpB
	var_411_int = 13819; // 0xcd8 PushI
	var_412_int = 15047; // 0xcd9 PushI
	var_413_int = 15046; // 0xcda PushI
	AddReply(var_411_int, var_412_int, var_413_int); // 0xcdb TObjFunc
	
Label_3293:
	var_414_bool = 0; // 0xcdd PushV
	var_414_bool = 0; // 0xcde MovB
	var_415_bool = 0; var_416_object = Obj(); // 0xcdf PushV
	var_416_object = var_1_object; // 0xce0 MovT
	func_5473(var_416_object); // 0xce1 Call
	if(var_415_bool == 0) goto Label_3306; // 0xce3 JumpB
	var_421_bool = 0; var_422_object = Obj(); // 0xce4 PushV
	var_422_object = var_1_object; // 0xce5 MovT
	func_5533(var_422_object); // 0xce6 Call
	if(var_421_bool == 0) goto Label_3306; // 0xce8 JumpB
	var_414_bool = 1; // 0xce9 MovB
	
Label_3306:
	if(var_414_bool == 0) goto Label_3312; // 0xcea JumpB
	var_427_int = 13842; // 0xceb PushI
	var_428_int = 15070; // 0xcec PushI
	var_429_int = 15069; // 0xced PushI
	AddReply(var_427_int, var_428_int, var_429_int); // 0xcee TObjFunc
	
Label_3312:
	var_430_bool = 0; var_431_object = Obj(); // 0xcf0 PushV
	var_431_object = var_1_object; // 0xcf1 MovT
	func_5545(var_431_object); // 0xcf2 Call
	if(var_430_bool == 0) goto Label_3322; // 0xcf4 JumpB
	var_436_int = 13852; // 0xcf5 PushI
	var_437_int = 15080; // 0xcf6 PushI
	var_438_int = 15079; // 0xcf7 PushI
	AddReply(var_436_int, var_437_int, var_438_int); // 0xcf8 TObjFunc
	
Label_3322:
	var_439_bool = 0; var_440_object = Obj(); // 0xcfa PushV
	var_440_object = var_1_object; // 0xcfb MovT
	func_5557(var_440_object); // 0xcfc Call
	if(var_439_bool == 0) goto Label_3332; // 0xcfe JumpB
	var_445_int = 13865; // 0xcff PushI
	var_446_int = 15093; // 0xd00 PushI
	var_447_int = 15092; // 0xd01 PushI
	AddReply(var_445_int, var_446_int, var_447_int); // 0xd02 TObjFunc
	
Label_3332:
	var_448_int = 13880; // 0xd04 PushI
	var_449_int = -1; // 0xd05 PushI
	var_450_int = 15107; // 0xd06 PushI
	AddReply(var_448_int, var_449_int, var_450_int); // 0xd07 TObjFunc
	goto Label_3340; // 0xd09 Jump
}


func_5031()
{
	var_216_string = "ood7Aglaja4"; // 0x13a8 PushS
	var_217_int = 1; // 0x13a9 PushI
	SetVariable(var_216_string, var_217_int); // 0x13aa Func
	return 0; // 0x13ac Return
}


func_5545(var_116_bool)
{
	var_118_int = 0; var_119_string = ""; // 0x15aa PushV
	var_119_string = "ood9Aglaja4"; // 0x15ab MovS
	func_4855(var_118_int, var_119_string); // 0x15ac Call
	var_120_int = 0; // 0x15ae PushI
	var_121_bool = var_118_int == var_120_int; // 0x15af Eq
	if(var_121_bool == 0) goto Label_5555; // 0x15b0 JumpB
	var_116_bool = 1; // 0x15b1 MovB
	return 0; // 0x15b2 Return
	
Label_5555:
	var_116_bool = 0; // 0x15b3 MovB
	return 0; // 0x15b4 Return
}


func_5037()
{
	var_190_string = "ood7Aglaja5"; // 0x13ae PushS
	var_191_int = 1; // 0x13af PushI
	SetVariable(var_190_string, var_191_int); // 0x13b0 Func
	return 0; // 0x13b2 Return
}


func_5808()
{
	var_111_object = Obj(); var_112_object = Obj(); // 0x16b0 PushV
	var_113_string = "Adding diary entry"; // 0x16b1 PushS
	Trace(var_113_string); // 0x16b2 Func
	var_114_int = 166; // 0x16b4 PushI
	var_115_int = 1; // 0x16b5 PushI
	var_116_int = 15413; // 0x16b6 PushI
	CreateDiaryEntry(var_112_object, var_114_int, var_115_int, var_116_int); // 0x16b7 Func
	var_117_bool = 0; var_118_object = Obj(); var_119_int = 0; // 0x16b9 PushV
	var_118_object = var_112_object; // 0x16ba Mov
	var_119_int = 165; // 0x16bb MovI
	func_5633(var_117_bool, var_118_object, var_119_int); // 0x16bc Call
	return 2; // 0x16be Return
}


func_5298(var_268_bool)
{
	var_270_int = 0; var_271_string = ""; // 0x14b3 PushV
	var_271_string = "ood7Aglaja2"; // 0x14b4 MovS
	func_4855(var_270_int, var_271_string); // 0x14b5 Call
	var_272_int = 0; // 0x14b7 PushI
	var_273_bool = var_270_int == var_272_int; // 0x14b8 Eq
	if(var_273_bool == 0) goto Label_5308; // 0x14b9 JumpB
	var_268_bool = 1; // 0x14ba MovB
	return 0; // 0x14bb Return
	
Label_5308:
	var_268_bool = 0; // 0x14bc MovB
	return 0; // 0x14bd Return
}


func_5043()
{
	var_130_object = Obj(); var_131_object = Obj(); var_132_object = Obj(); var_133_object = Obj(); // 0x13b3 PushV
	var_134_object = Obj(); // 0x13b4 PushV
	func_5662(var_134_object); // 0x13b5 Call
	var_132_object = var_134_object; // 0x13b6 Mov
	var_135_string = "d7q01AglajaFindLierSelf"; // 0x13b8 PushS
	FindMark(var_133_object, var_135_string); // 0x13b9 ObjFunc
	var_136_object = var_133_object; // 0x13bb Push
	if(var_136_object == 0) goto Label_5055; // 0x13bc JumpB
	Remove(); // 0x13bd ObjFunc
	
Label_5055:
	var_137_string = "d7q01AglajaGotoBirdmaskSelf"; // 0x13bf PushS
	FindMark(var_133_object, var_137_string); // 0x13c0 ObjFunc
	var_138_object = var_133_object; // 0x13c2 Push
	if(var_138_object == 0) goto Label_5062; // 0x13c3 JumpB
	Remove(); // 0x13c4 ObjFunc
	
Label_5062:
	var_139_string = "d7q01BirdmaskD"; // 0x13c6 PushS
	FindMark(var_133_object, var_139_string); // 0x13c7 ObjFunc
	var_140_object = var_133_object; // 0x13c9 Push
	if(var_140_object == 0) goto Label_5069; // 0x13ca JumpB
	Remove(); // 0x13cb ObjFunc
	
Label_5069:
	var_141_string = "d7q01BirdmaskM"; // 0x13cd PushS
	FindMark(var_133_object, var_141_string); // 0x13ce ObjFunc
	var_142_object = var_133_object; // 0x13d0 Push
	if(var_142_object == 0) goto Label_5076; // 0x13d1 JumpB
	Remove(); // 0x13d2 ObjFunc
	
Label_5076:
	var_143_string = "d7q01BirdmaskU"; // 0x13d4 PushS
	FindMark(var_133_object, var_143_string); // 0x13d5 ObjFunc
	var_144_object = var_133_object; // 0x13d7 Push
	if(var_144_object == 0) goto Label_5083; // 0x13d8 JumpB
	Remove(); // 0x13d9 ObjFunc
	
Label_5083:
	func_5824(); // 0x13dc Call
	var_154_bool = 0; var_155_string = ""; var_156_string = ""; // 0x13de PushV
	var_155_string = "quest_d7_01"; // 0x13df MovS
	var_156_string = "completed"; // 0x13e0 MovS
	func_4867(var_154_bool, var_155_string, var_156_string); // 0x13e1 Call
	return 4; // 0x13e3 Return
}


func_5557(var_125_bool)
{
	var_127_int = 0; var_128_string = ""; // 0x15b6 PushV
	var_128_string = "ood9Aglaja5"; // 0x15b7 MovS
	func_4855(var_127_int, var_128_string); // 0x15b8 Call
	var_129_int = 0; // 0x15ba PushI
	var_130_bool = var_127_int == var_129_int; // 0x15bb Eq
	if(var_130_bool == 0) goto Label_5567; // 0x15bc JumpB
	var_125_bool = 1; // 0x15bd MovB
	return 0; // 0x15be Return
	
Label_5567:
	var_125_bool = 0; // 0x15bf MovB
	return 0; // 0x15c0 Return
}


func_4285(var_2_object, var_112_string)
{
	var_113_bool = 0; // 0x10be PushV
	func_4912(var_113_bool); // 0x10bf Call
	var_114_bool = var_113_bool == 0; // 0x10c1 Not
	if(var_114_bool == 0) goto Label_4292; // 0x10c2 JumpB
	return 0; // 0x10c3 Return
	
Label_4292:
	var_115_bool = var_112_string == var_2_object; // 0x10c4 Eq
	if(var_115_bool == 0) goto Label_4295; // 0x10c5 JumpB
	return 0; // 0x10c6 Return
	
Label_4295:
	var_116_string = ""; // 0x10c7 PushV
	var_116_string = var_112_string; // 0x10c8 Mov
	func_4820(var_116_string); // 0x10c9 Call
	var_2_object = var_112_string; // 0x10cb TMov
	return 0; // 0x10cc Return
}


func_5310(var_281_bool)
{
	var_283_int = 0; var_284_string = ""; // 0x14bf PushV
	var_284_string = "d7q01"; // 0x14c0 MovS
	func_4855(var_283_int, var_284_string); // 0x14c1 Call
	var_285_int = 0; // 0x14c3 PushI
	var_286_bool = var_283_int == var_285_int; // 0x14c4 Eq
	if(var_286_bool == 0) goto Label_5320; // 0x14c5 JumpB
	var_281_bool = 1; // 0x14c6 MovB
	return 0; // 0x14c7 Return
	
Label_5320:
	var_281_bool = 0; // 0x14c8 MovB
	return 0; // 0x14c9 Return
}


func_5824()
{
	var_145_object = Obj(); var_146_object = Obj(); // 0x16c0 PushV
	var_147_string = "Adding diary entry"; // 0x16c1 PushS
	Trace(var_147_string); // 0x16c2 Func
	var_148_int = 168; // 0x16c4 PushI
	var_149_int = 1; // 0x16c5 PushI
	var_150_int = 15415; // 0x16c6 PushI
	CreateDiaryEntry(var_146_object, var_148_int, var_149_int, var_150_int); // 0x16c7 Func
	var_151_bool = 0; var_152_object = Obj(); var_153_int = 0; // 0x16c9 PushV
	var_152_object = var_146_object; // 0x16ca Mov
	var_153_int = 165; // 0x16cb MovI
	func_5633(var_151_bool, var_152_object, var_153_int); // 0x16cc Call
	return 2; // 0x16ce Return
}


func_5569(var_124_bool)
{
	var_126_int = 0; var_127_string = ""; // 0x15c2 PushV
	var_127_string = "ood10Aglaja1"; // 0x15c3 MovS
	func_4855(var_126_int, var_127_string); // 0x15c4 Call
	var_130_int = 0; // 0x15c6 PushI
	var_131_bool = var_126_int == var_130_int; // 0x15c7 Eq
	if(var_131_bool == 0) goto Label_5579; // 0x15c8 JumpB
	var_124_bool = 1; // 0x15c9 MovB
	return 0; // 0x15ca Return
	
Label_5579:
	var_124_bool = 0; // 0x15cb MovB
	return 0; // 0x15cc Return
}


func_5322(var_349_bool)
{
	var_351_int = 0; var_352_string = ""; // 0x14cb PushV
	var_352_string = "ood7Aglaja3"; // 0x14cc MovS
	func_4855(var_351_int, var_352_string); // 0x14cd Call
	var_353_int = 0; // 0x14cf PushI
	var_354_bool = var_351_int == var_353_int; // 0x14d0 Eq
	if(var_354_bool == 0) goto Label_5332; // 0x14d1 JumpB
	var_349_bool = 1; // 0x14d2 MovB
	return 0; // 0x14d3 Return
	
Label_5332:
	var_349_bool = 0; // 0x14d4 MovB
	return 0; // 0x14d5 Return
}


func_5581(var_167_bool)
{
	var_169_int = 0; var_170_string = ""; // 0x15ce PushV
	var_170_string = "d10q01"; // 0x15cf MovS
	func_4855(var_169_int, var_170_string); // 0x15d0 Call
	var_171_int = 1000; // 0x15d2 PushI
	var_172_bool = var_169_int == var_171_int; // 0x15d3 Eq
	if(var_172_bool == 0) goto Label_5591; // 0x15d4 JumpB
	var_167_bool = 1; // 0x15d5 MovB
	return 0; // 0x15d6 Return
	
Label_5591:
	var_167_bool = 0; // 0x15d7 MovB
	return 0; // 0x15d8 Return
}


func_4816()
{
	CameraSwitchToNormal(); // 0x12d1 Func
	return 0; // 0x12d3 Return
}


func_5840()
{
	var_173_object = Obj(); var_174_object = Obj(); // 0x16d0 PushV
	var_175_string = "Adding diary entry"; // 0x16d1 PushS
	Trace(var_175_string); // 0x16d2 Func
	var_176_int = 167; // 0x16d4 PushI
	var_177_int = 1; // 0x16d5 PushI
	var_178_int = 15414; // 0x16d6 PushI
	CreateDiaryEntry(var_174_object, var_176_int, var_177_int, var_178_int); // 0x16d7 Func
	var_179_bool = 0; var_180_object = Obj(); var_181_int = 0; // 0x16d9 PushV
	var_180_object = var_174_object; // 0x16da Mov
	var_181_int = 165; // 0x16db MovI
	func_5633(var_179_bool, var_180_object, var_181_int); // 0x16dc Call
	return 2; // 0x16de Return
}


func_4820(var_30_string)
{
	var_31_float = 0; var_32_float = 0; var_33_float = 0; var_34_float = 0; // 0x12d4 PushV
	var_35_string = "playing "; // 0x12d5 PushS
	var_36_int = var_35_string + var_30_string; // 0x12d6 Add
	Trace(var_36_int); // 0x12d7 Func
	lshGetAnimTimes(var_30_string, var_33_float, var_34_float); // 0x12d9 Func
	lshPlayAnimation(var_33_float, var_34_float); // 0x12db Func
	var_37_string = "start: "; // 0x12dd PushS
	var_38_int = var_37_string + var_33_float; // 0x12de Add
	Trace(var_38_int); // 0x12df Func
	var_39_string = "end: "; // 0x12e1 PushS
	var_40_int = var_39_string + var_34_float; // 0x12e2 Add
	Trace(var_40_int); // 0x12e3 Func
	return 4; // 0x12e5 Return
}


func_2773(var_0_object, var_1_object, var_2_object, var_3_object, var_473_object, var_474_object)
{
	var_0_object = var_474_object; // 0xad6 TMov
	var_1_object = var_473_object; // 0xad7 TMov
	var_3_object = 0; // 0xad8 TMovB
	var_479_int = 1; // 0xad9 PushI
	if(var_479_int == 0) goto Label_2850; // 0xada JumpB
	var_480_bool = 0; var_481_object = Obj(); // 0xadb PushV
	var_481_object = var_1_object; // 0xadc MovT
	func_5569(var_481_object); // 0xadd Call
	if(var_480_bool == 0) goto Label_2804; // 0xadf JumpB
	var_486_object = Obj(); var_487_object = Obj(); // 0xae0 PushV
	var_486_object = var_1_object; // 0xae1 MovT
	var_487_object = var_0_object; // 0xae2 MovT
	func_5228(); // 0xae3 Call
	var_490_string = ""; // 0xae5 PushV
	var_490_string = "Neutral"; // 0xae6 MovS
	func_2880(var_474_object, var_490_string); // 0xae7 Call
	var_495_int = 12899; // 0xae9 PushI
	SetMessage(var_495_int); // 0xaea TObjFunc
	ClearReplies(); // 0xaec TObjFunc
	var_496_int = 12900; // 0xaee PushI
	var_497_int = 14103; // 0xaef PushI
	var_498_int = 14102; // 0xaf0 PushI
	AddReply(var_496_int, var_497_int, var_498_int); // 0xaf1 TObjFunc
	goto Label_2850; // 0xaf3 Jump
	
Label_2850:
	var_499_bool = 0; // 0xb22 PushV
	func_4912(var_499_bool); // 0xb23 Call
	if(var_499_bool == 0) goto Label_2865; // 0xb25 JumpB
	
Label_2854:
	lshWaitForAnimEnd(); // 0xb26 Func
	var_500_object = var_3_object; // 0xb28 PushT
	if(var_500_object == 0) goto Label_2859; // 0xb29 JumpB
	goto Label_2864; // 0xb2a Jump
	
Label_2864:
	goto Label_2879; // 0xb30 Jump
	
Label_2879:
	return 0; // 0xb3f Return
	
Label_2859:
	var_501_string = ""; // 0xb2b PushV
	var_501_string = var_2_object; // 0xb2c MovT
	func_4820(var_501_string); // 0xb2d Call
	goto Label_2854; // 0xb2f Jump
	
Label_2865:
	var_502_string = "all"; // 0xb31 PushS
	var_503_string = "idle"; // 0xb32 PushS
	PlayAnimation(var_502_string, var_503_string); // 0xb33 Func
	
Label_2869:
	WaitForAnimEnd(); // 0xb35 Func
	var_504_object = var_3_object; // 0xb37 PushT
	if(var_504_object == 0) goto Label_2874; // 0xb38 JumpB
	goto Label_2879; // 0xb39 Jump
	
Label_2874:
	var_505_string = "all"; // 0xb3a PushS
	var_506_string = "idle"; // 0xb3b PushS
	PlayAnimation(var_505_string, var_506_string); // 0xb3c Func
	goto Label_2869; // 0xb3e Jump
	
Label_2804:
	var_507_string = ""; // 0xaf4 PushV
	var_507_string = "Neutral"; // 0xaf5 MovS
	func_2880(var_474_object, var_507_string); // 0xaf6 Call
	var_508_int = 12905; // 0xaf8 PushI
	SetMessage(var_508_int); // 0xaf9 TObjFunc
	ClearReplies(); // 0xafb TObjFunc
	var_509_bool = 0; var_510_object = Obj(); // 0xafd PushV
	var_510_object = var_1_object; // 0xafe MovT
	func_5605(var_510_object); // 0xaff Call
	if(var_509_bool == 0) goto Label_2823; // 0xb01 JumpB
	var_515_int = 12906; // 0xb02 PushI
	var_516_int = 14109; // 0xb03 PushI
	var_517_int = 14108; // 0xb04 PushI
	AddReply(var_515_int, var_516_int, var_517_int); // 0xb05 TObjFunc
	
Label_2823:
	var_518_bool = 0; // 0xb07 PushV
	var_518_bool = 0; // 0xb08 MovB
	var_519_bool = 0; var_520_object = Obj(); // 0xb09 PushV
	var_520_object = var_1_object; // 0xb0a MovT
	func_5581(var_520_object); // 0xb0b Call
	if(var_519_bool == 0) goto Label_2836; // 0xb0d JumpB
	var_525_bool = 0; var_526_object = Obj(); // 0xb0e PushV
	var_526_object = var_1_object; // 0xb0f MovT
	func_5593(var_526_object); // 0xb10 Call
	if(var_525_bool == 0) goto Label_2836; // 0xb12 JumpB
	var_518_bool = 1; // 0xb13 MovB
	
Label_2836:
	if(var_518_bool == 0) goto Label_2842; // 0xb14 JumpB
	var_531_int = 12912; // 0xb15 PushI
	var_532_int = 14119; // 0xb16 PushI
	var_533_int = 14114; // 0xb17 PushI
	AddReply(var_531_int, var_532_int, var_533_int); // 0xb18 TObjFunc
	
Label_2842:
	var_534_int = 12911; // 0xb1a PushI
	var_535_int = -1; // 0xb1b PushI
	var_536_int = 14113; // 0xb1c PushI
	AddReply(var_534_int, var_535_int, var_536_int); // 0xb1d TObjFunc
	goto Label_2850; // 0xb1f Jump
}


func_5334(var_334_bool)
{
	var_336_int = 0; var_337_string = ""; // 0x14d7 PushV
	var_337_string = "d7q01"; // 0x14d8 MovS
	func_4855(var_336_int, var_337_string); // 0x14d9 Call
	var_338_int = 1; // 0x14db PushI
	var_339_bool = var_336_int == var_338_int; // 0x14dc Eq
	if(var_339_bool == 0) goto Label_5344; // 0x14dd JumpB
	var_334_bool = 1; // 0x14de MovB
	return 0; // 0x14df Return
	
Label_5344:
	var_334_bool = 0; // 0x14e0 MovB
	return 0; // 0x14e1 Return
}


func_5593(var_173_bool)
{
	var_175_int = 0; var_176_string = ""; // 0x15da PushV
	var_176_string = "ood10Aglaja2"; // 0x15db MovS
	func_4855(var_175_int, var_176_string); // 0x15dc Call
	var_177_int = 0; // 0x15de PushI
	var_178_bool = var_175_int == var_177_int; // 0x15df Eq
	if(var_178_bool == 0) goto Label_5603; // 0x15e0 JumpB
	var_173_bool = 1; // 0x15e1 MovB
	return 0; // 0x15e2 Return
	
Label_5603:
	var_173_bool = 0; // 0x15e3 MovB
	return 0; // 0x15e4 Return
}


func_5856()
{
	var_35_object = Obj(); var_36_object = Obj(); // 0x16e0 PushV
	var_37_string = "Adding diary entry"; // 0x16e1 PushS
	Trace(var_37_string); // 0x16e2 Func
	var_38_int = 175; // 0x16e4 PushI
	var_39_int = 1; // 0x16e5 PushI
	var_40_int = 15434; // 0x16e6 PushI
	CreateDiaryEntry(var_36_object, var_38_int, var_39_int, var_40_int); // 0x16e7 Func
	var_41_bool = 0; var_42_object = Obj(); var_43_int = 0; // 0x16e9 PushV
	var_42_object = var_36_object; // 0x16ea Mov
	var_43_int = -1; // 0x16eb MovI
	func_5633(var_41_bool, var_42_object, var_43_int); // 0x16ec Call
	return 2; // 0x16ee Return
}


func_5346(var_340_bool)
{
	var_342_int = 0; var_343_string = ""; // 0x14e3 PushV
	var_343_string = "ood7Aglaja4"; // 0x14e4 MovS
	func_4855(var_342_int, var_343_string); // 0x14e5 Call
	var_344_int = 0; // 0x14e7 PushI
	var_345_bool = var_342_int == var_344_int; // 0x14e8 Eq
	if(var_345_bool == 0) goto Label_5356; // 0x14e9 JumpB
	var_340_bool = 1; // 0x14ea MovB
	return 0; // 0x14eb Return
	
Label_5356:
	var_340_bool = 0; // 0x14ec MovB
	return 0; // 0x14ed Return
}


func_5605(var_157_bool)
{
	var_159_int = 0; var_160_string = ""; // 0x15e6 PushV
	var_160_string = "d10q01"; // 0x15e7 MovS
	func_4855(var_159_int, var_160_string); // 0x15e8 Call
	var_161_int = 3; // 0x15ea PushI
	var_162_bool = var_159_int == var_161_int; // 0x15eb Eq
	if(var_162_bool == 0) goto Label_5615; // 0x15ec JumpB
	var_157_bool = 1; // 0x15ed MovB
	return 0; // 0x15ee Return
	
Label_5615:
	var_157_bool = 0; // 0x15ef MovB
	return 0; // 0x15f0 Return
}


func_4838()
{
	var_28_bool = 0; // 0x12e6 PushV
	func_4912(var_28_bool); // 0x12e7 Call
	if(var_28_bool == 0) goto Label_4844; // 0x12e9 JumpB
	lshStopSpeech(); // 0x12ea Func
	
Label_4844:
	return 0; // 0x12ec Return
}


func_5094()
{
	var_228_string = "d7q02"; // 0x13e7 PushS
	var_229_int = 3; // 0x13e8 PushI
	SetVariable(var_228_string, var_229_int); // 0x13e9 Func
	return 0; // 0x13eb Return
}


func_5100()
{
	var_33_string = "d8q01"; // 0x13ed PushS
	var_34_int = 1; // 0x13ee PushI
	SetVariable(var_33_string, var_34_int); // 0x13ef Func
	func_5856(); // 0x13f2 Call
	func_5872(); // 0x13f5 Call
	var_69_bool = 0; var_70_string = ""; var_71_string = ""; // 0x13f7 PushV
	var_70_string = "quest_d8_01"; // 0x13f8 MovS
	var_71_string = "block_well"; // 0x13f9 MovS
	func_4867(var_69_bool, var_70_string, var_71_string); // 0x13fa Call
	return 0; // 0x13fc Return
}


func_4845(var_71_cvector, var_72_cvector)
{
	var_74_float = 0; var_75_float = 0; // 0x12ed PushV
	var_76_int = var_72_cvector | var_72_cvector; // 0x12ee Or
	var_75_float = sqrt(var_76_int); // 0x12ef Sqrt2
	var_77_float = 0.0; // 0x12f0 PushF
	var_78_bool = var_75_float < var_77_float; // 0x12f1 LT
	if(var_78_bool == 0) goto Label_4853; // 0x12f2 JumpB
	var_71_cvector = CVector(0.0, 0.0, 0.0); // 0x12f3 MovV
	return 2; // 0x12f4 Return
	
Label_4853:
	var_71_cvector = var_72_cvector / var_72_cvector; // 0x12f5 Div2
	return 2; // 0x12f6 Return
}


func_5358(var_307_bool, var_308_object)
{
	var_309_bool = 0; // 0x14ef PushV
	var_309_bool = 0; // 0x14f0 MovB
	var_310_bool = 0; // 0x14f1 PushV
	var_310_bool = 0; // 0x14f2 MovB
	var_311_bool = 0; var_312_object = Obj(); var_313_string = ""; // 0x14f3 PushV
	var_312_object = var_308_object; // 0x14f4 Mov
	var_313_string = "d7q01_dreport"; // 0x14f5 MovS
	func_4860(var_312_object, var_313_string); // 0x14f6 Call
	if(var_311_bool == 0) goto Label_5376; // 0x14f8 JumpB
	var_318_bool = 0; var_319_object = Obj(); var_320_string = ""; // 0x14f9 PushV
	var_319_object = var_308_object; // 0x14fa Mov
	var_320_string = "d7q01_mreport"; // 0x14fb MovS
	func_4860(var_319_object, var_320_string); // 0x14fc Call
	if(var_318_bool == 0) goto Label_5376; // 0x14fe JumpB
	var_310_bool = 1; // 0x14ff MovB
	
Label_5376:
	if(var_310_bool == 0) goto Label_5384; // 0x1500 JumpB
	var_321_bool = 0; var_322_object = Obj(); var_323_string = ""; // 0x1501 PushV
	var_322_object = var_308_object; // 0x1502 Mov
	var_323_string = "d7q01_ureport"; // 0x1503 MovS
	func_4860(var_322_object, var_323_string); // 0x1504 Call
	if(var_321_bool == 0) goto Label_5384; // 0x1506 JumpB
	var_309_bool = 1; // 0x1507 MovB
	
Label_5384:
	if(var_309_bool == 0) goto Label_5387; // 0x1508 JumpB
	var_307_bool = 1; // 0x1509 MovB
	return 0; // 0x150a Return
	
Label_5387:
	var_307_bool = 0; // 0x150b MovB
	return 0; // 0x150c Return
}


func_5872()
{
	var_60_object = Obj(); var_61_object = Obj(); // 0x16f0 PushV
	var_62_string = "Adding diary entry"; // 0x16f1 PushS
	Trace(var_62_string); // 0x16f2 Func
	var_63_int = 176; // 0x16f4 PushI
	var_64_int = 1; // 0x16f5 PushI
	var_65_int = 15435; // 0x16f6 PushI
	CreateDiaryEntry(var_61_object, var_63_int, var_64_int, var_65_int); // 0x16f7 Func
	var_66_bool = 0; var_67_object = Obj(); var_68_int = 0; // 0x16f9 PushV
	var_67_object = var_61_object; // 0x16fa Mov
	var_68_int = 175; // 0x16fb MovI
	func_5633(var_66_bool, var_67_object, var_68_int); // 0x16fc Call
	return 2; // 0x16fe Return
}


func_5617(var_144_bool)
{
	var_144_bool = 0; // 0x15f2 MovB
	return 0; // 0x15f3 Return
}


func_5620(var_50_object)
{
	var_51_object = Obj(); var_52_object = Obj(); // 0x15f4 PushV
	GetDiaryRoot(var_52_object); // 0x15f5 Func
	var_53_bool = var_52_object == 0; // 0x15f7 Not
	if(var_53_bool == 0) goto Label_5630; // 0x15f8 JumpB
	var_54_string = "Can't retrieve diary root"; // 0x15f9 PushS
	Trace(var_54_string); // 0x15fa Func
	var_50_object = 0; // 0x15fc MovB
	return 2; // 0x15fd Return
	
Label_5630:
	var_50_object = var_52_object; // 0x15fe Mov
	return 2; // 0x15ff Return
}


func_4855(var_102_int, var_103_string)
{
	var_104_int = 0; var_105_int = 0; // 0x12f7 PushV
	GetVariable(var_103_string, var_105_int); // 0x12f8 Func
	var_102_int = var_105_int; // 0x12fa Mov
	return 2; // 0x12fb Return
}


func_4860(var_311_bool, var_313_string)
{
	var_314_int = 0; var_315_bool = 0; var_316_int = 0; var_317_bool = 0; // 0x12fc PushV
	GetInvItemByName(var_316_int, var_313_string); // 0x12fd Func
	HasItem(var_316_int, var_317_bool); // 0x12ff ObjFunc
	var_311_bool = var_317_bool; // 0x1301 Mov
	return 4; // 0x1302 Return
}


func_5117()
{
	var_79_string = "ood8Aglaja1"; // 0x13fe PushS
	var_80_int = 1; // 0x13ff PushI
	SetVariable(var_79_string, var_80_int); // 0x1400 Func
	return 0; // 0x1402 Return
}


