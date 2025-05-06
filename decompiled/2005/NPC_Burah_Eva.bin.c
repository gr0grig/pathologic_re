task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_cvector)
{
	var_28_int = 1; // 0x9d PushI
	if(var_28_int == 0) goto Label_241; // 0x9e JumpB
	func_2167(); // 0xa0 NEW_2
	var_30_int = 19387; // 0xa2 PushI
	var_31_bool = var_26_bool == var_30_int; // 0xa3 Eq
	if(var_31_bool == 0) goto Label_180; // 0xa4 JumpB
	var_32_string = ""; // 0xa5 PushV
	var_32_string = "Fear"; // 0xa6 MovS
	func_134(var_27_cvector, var_32_string); // 0xa7 NEW_2
	var_49_int = 518278; // 0xa9 PushI
	SetMessage(var_49_int); // 0xaa TObjFunc
	ClearReplies(); // 0xac TObjFunc
	var_50_int = 518279; // 0xae PushI
	var_51_int = -1; // 0xaf PushI
	var_52_int = 19388; // 0xb0 PushI
	AddReply(var_50_int, var_51_int, var_52_int); // 0xb1 TObjFunc
	return 0; // 0xb3 Return
	
Label_180:
	var_53_int = 20613; // 0xb4 PushI
	var_54_bool = var_26_bool == var_53_int; // 0xb5 Eq
	if(var_54_bool == 0) goto Label_183; // 0xb6 JumpB
	
Label_183:
	var_55_int = 20615; // 0xb7 PushI
	var_56_bool = var_26_bool == var_55_int; // 0xb8 Eq
	if(var_56_bool == 0) goto Label_206; // 0xb9 JumpB
	var_57_string = ""; // 0xba PushV
	var_57_string = "Love"; // 0xbb MovS
	func_134(var_27_cvector, var_57_string); // 0xbc NEW_2
	var_58_int = 519447; // 0xbe PushI
	SetMessage(var_58_int); // 0xbf TObjFunc
	ClearReplies(); // 0xc1 TObjFunc
	var_59_int = 519451; // 0xc3 PushI
	var_60_int = 20620; // 0xc4 PushI
	var_61_int = 20619; // 0xc5 PushI
	AddReply(var_59_int, var_60_int, var_61_int); // 0xc6 TObjFunc
	var_62_int = 519453; // 0xc8 PushI
	var_63_int = 20620; // 0xc9 PushI
	var_64_int = 20622; // 0xca PushI
	AddReply(var_62_int, var_63_int, var_64_int); // 0xcb TObjFunc
	return 0; // 0xcd Return
	
Label_206:
	var_65_int = 20620; // 0xce PushI
	var_66_bool = var_26_bool == var_65_int; // 0xcf Eq
	if(var_66_bool == 0) goto Label_229; // 0xd0 JumpB
	var_67_string = ""; // 0xd1 PushV
	var_67_string = "Fear"; // 0xd2 MovS
	func_134(var_27_cvector, var_67_string); // 0xd3 NEW_2
	var_68_int = 519452; // 0xd5 PushI
	SetMessage(var_68_int); // 0xd6 TObjFunc
	ClearReplies(); // 0xd8 TObjFunc
	var_69_int = 519448; // 0xda PushI
	var_70_int = -1; // 0xdb PushI
	var_71_int = 20616; // 0xdc PushI
	AddReply(var_69_int, var_70_int, var_71_int); // 0xdd TObjFunc
	var_72_int = 519449; // 0xdf PushI
	var_73_int = -1; // 0xe0 PushI
	var_74_int = 20617; // 0xe1 PushI
	AddReply(var_72_int, var_73_int, var_74_int); // 0xe2 TObjFunc
	return 0; // 0xe4 Return
	
Label_229:
	var_3_string = 1; // 0xe5 TMovB
	var_75_bool = 0; // 0xe6 PushV
	func_2367(var_75_bool); // 0xe7 NEW_2
	if(var_75_bool == 0) goto Label_237; // 0xe9 JumpB
	lshStopAnimation(); // 0xea Func
	goto Label_239; // 0xec Jump
	
Label_239:
	return 0; // 0xef Return
	
Label_237:
	StopAnimation(); // 0xed Func
	
Label_241:
	return 0; // 0xf1 Return
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_cvector)
{
	var_28_int = 1; // 0x1d0 PushI
	if(var_28_int == 0) goto Label_706; // 0x1d1 JumpB
	func_2167(); // 0x1d3 NEW_2
	var_30_int = 21396; // 0x1d5 PushI
	var_31_bool = var_27_cvector == var_30_int; // 0x1d6 Eq
	if(var_31_bool == 0) goto Label_477; // 0x1d7 JumpB
	var_32_object = Obj(); var_33_object = Obj(); // 0x1d8 PushV
	var_32_object = var_1_object; // 0x1d9 MovT
	var_33_object = var_0_object; // 0x1da MovT
	func_2369(); // 0x1db NEW_2
	
Label_477:
	var_36_int = 21403; // 0x1dd PushI
	var_37_bool = var_27_cvector == var_36_int; // 0x1de Eq
	if(var_37_bool == 0) goto Label_485; // 0x1df JumpB
	var_38_object = Obj(); var_39_object = Obj(); // 0x1e0 PushV
	var_38_object = var_1_object; // 0x1e1 MovT
	var_39_object = var_0_object; // 0x1e2 MovT
	func_2407(); // 0x1e3 NEW_2
	
Label_485:
	var_42_int = 21405; // 0x1e5 PushI
	var_43_bool = var_27_cvector == var_42_int; // 0x1e6 Eq
	if(var_43_bool == 0) goto Label_493; // 0x1e7 JumpB
	var_44_object = Obj(); var_45_object = Obj(); // 0x1e8 PushV
	var_44_object = var_1_object; // 0x1e9 MovT
	var_45_object = var_0_object; // 0x1ea MovT
	func_2446(var_45_object); // 0x1eb NEW_2
	
Label_493:
	var_84_int = 26115; // 0x1ed PushI
	var_85_bool = var_27_cvector == var_84_int; // 0x1ee Eq
	if(var_85_bool == 0) goto Label_511; // 0x1ef JumpB
	var_86_object = Obj(); var_87_object = Obj(); // 0x1f0 PushV
	var_86_object = var_1_object; // 0x1f1 MovT
	var_87_object = var_0_object; // 0x1f2 MovT
	func_2413(); // 0x1f3 NEW_2
	var_104_object = Obj(); var_105_object = Obj(); // 0x1f5 PushV
	var_104_object = var_1_object; // 0x1f6 MovT
	var_105_object = var_0_object; // 0x1f7 MovT
	func_2453(); // 0x1f8 NEW_2
	var_108_object = Obj(); var_109_object = Obj(); // 0x1fa PushV
	var_108_object = var_1_object; // 0x1fb MovT
	var_109_object = var_0_object; // 0x1fc MovT
	func_2400(var_109_object); // 0x1fd NEW_2
	
Label_511:
	var_113_int = 21406; // 0x1ff PushI
	var_114_bool = var_27_cvector == var_113_int; // 0x200 Eq
	if(var_114_bool == 0) goto Label_524; // 0x201 JumpB
	var_115_object = Obj(); var_116_object = Obj(); // 0x202 PushV
	var_115_object = var_1_object; // 0x203 MovT
	var_116_object = var_0_object; // 0x204 MovT
	func_2413(); // 0x205 NEW_2
	var_117_object = Obj(); var_118_object = Obj(); // 0x207 PushV
	var_117_object = var_1_object; // 0x208 MovT
	var_118_object = var_0_object; // 0x209 MovT
	func_2453(); // 0x20a NEW_2
	
Label_524:
	var_119_int = 21395; // 0x20c PushI
	var_120_bool = var_26_bool == var_119_int; // 0x20d Eq
	if(var_120_bool == 0) goto Label_607; // 0x20e JumpB
	var_121_string = ""; // 0x20f PushV
	var_121_string = "Fear"; // 0x210 MovS
	func_441(var_27_cvector, var_121_string); // 0x211 NEW_2
	var_138_int = 520203; // 0x213 PushI
	SetMessage(var_138_int); // 0x214 TObjFunc
	ClearReplies(); // 0x216 TObjFunc
	var_139_bool = 0; var_140_object = Obj(); // 0x218 PushV
	var_140_object = var_1_object; // 0x219 MovT
	func_2539(var_140_object); // 0x21a NEW_2
	if(var_139_bool == 0) goto Label_546; // 0x21c JumpB
	var_147_int = 520204; // 0x21d PushI
	var_148_int = 21397; // 0x21e PushI
	var_149_int = 21396; // 0x21f PushI
	AddReply(var_147_int, var_148_int, var_149_int); // 0x220 TObjFunc
	
Label_546:
	var_150_bool = 0; // 0x222 PushV
	var_150_bool = 1; // 0x223 MovB
	var_151_bool = 0; // 0x224 PushV
	var_151_bool = 0; // 0x225 MovB
	var_152_bool = 0; // 0x226 PushV
	var_152_bool = 0; // 0x227 MovB
	var_153_bool = 0; var_154_object = Obj(); // 0x228 PushV
	var_154_object = var_1_object; // 0x229 MovT
	func_2495(var_154_object); // 0x22a NEW_2
	if(var_153_bool == 0) goto Label_563; // 0x22c JumpB
	var_159_bool = 0; var_160_object = Obj(); // 0x22d PushV
	var_160_object = var_1_object; // 0x22e MovT
	func_2529(var_159_bool, var_160_object); // 0x22f NEW_2
	if(var_159_bool == 0) goto Label_563; // 0x231 JumpB
	var_152_bool = 1; // 0x232 MovB
	
Label_563:
	if(var_152_bool == 0) goto Label_570; // 0x233 JumpB
	var_174_bool = 0; var_175_object = Obj(); // 0x234 PushV
	var_175_object = var_1_object; // 0x235 MovT
	func_2507(var_175_object); // 0x236 NEW_2
	if(var_174_bool == 0) goto Label_570; // 0x238 JumpB
	var_151_bool = 1; // 0x239 MovB
	
Label_570:
	if(var_151_bool == 0) goto Label_595; // 0x23a JumpB
	var_180_bool = 0; // 0x23b PushV
	var_180_bool = 0; // 0x23c MovB
	var_181_bool = 0; // 0x23d PushV
	var_181_bool = 0; // 0x23e MovB
	var_182_bool = 0; var_183_object = Obj(); // 0x23f PushV
	var_183_object = var_1_object; // 0x240 MovT
	func_2519(var_182_bool, var_183_object); // 0x241 NEW_2
	if(var_182_bool == 0) goto Label_586; // 0x243 JumpB
	var_193_bool = 0; var_194_object = Obj(); // 0x244 PushV
	var_194_object = var_1_object; // 0x245 MovT
	func_2495(var_194_object); // 0x246 NEW_2
	if(var_193_bool == 0) goto Label_586; // 0x248 JumpB
	var_181_bool = 1; // 0x249 MovB
	
Label_586:
	if(var_181_bool == 0) goto Label_593; // 0x24a JumpB
	var_195_bool = 0; var_196_object = Obj(); // 0x24b PushV
	var_196_object = var_1_object; // 0x24c MovT
	func_2507(var_196_object); // 0x24d NEW_2
	if(var_195_bool == 0) goto Label_593; // 0x24f JumpB
	var_180_bool = 1; // 0x250 MovB
	
Label_593:
	if(var_180_bool == 0) goto Label_595; // 0x251 JumpB
	var_150_bool = 0; // 0x252 MovB
	
Label_595:
	if(var_150_bool == 0) goto Label_601; // 0x253 JumpB
	var_197_int = 520211; // 0x254 PushI
	var_198_int = 21404; // 0x255 PushI
	var_199_int = 21403; // 0x256 PushI
	AddReply(var_197_int, var_198_int, var_199_int); // 0x257 TObjFunc
	
Label_601:
	var_200_int = 520215; // 0x259 PushI
	var_201_int = -1; // 0x25a PushI
	var_202_int = 21407; // 0x25b PushI
	AddReply(var_200_int, var_201_int, var_202_int); // 0x25c TObjFunc
	return 0; // 0x25e Return
	
Label_607:
	var_203_int = 21404; // 0x25f PushI
	var_204_bool = var_26_bool == var_203_int; // 0x260 Eq
	if(var_204_bool == 0) goto Label_630; // 0x261 JumpB
	var_205_string = ""; // 0x262 PushV
	var_205_string = "Fear"; // 0x263 MovS
	func_441(var_27_cvector, var_205_string); // 0x264 NEW_2
	var_206_int = 520212; // 0x266 PushI
	SetMessage(var_206_int); // 0x267 TObjFunc
	ClearReplies(); // 0x269 TObjFunc
	var_207_int = 520213; // 0x26b PushI
	var_208_int = 26114; // 0x26c PushI
	var_209_int = 21405; // 0x26d PushI
	AddReply(var_207_int, var_208_int, var_209_int); // 0x26e TObjFunc
	var_210_int = 520214; // 0x270 PushI
	var_211_int = -1; // 0x271 PushI
	var_212_int = 21406; // 0x272 PushI
	AddReply(var_210_int, var_211_int, var_212_int); // 0x273 TObjFunc
	return 0; // 0x275 Return
	
Label_630:
	var_213_int = 26114; // 0x276 PushI
	var_214_bool = var_26_bool == var_213_int; // 0x277 Eq
	if(var_214_bool == 0) goto Label_648; // 0x278 JumpB
	var_215_string = ""; // 0x279 PushV
	var_215_string = "Fear"; // 0x27a MovS
	func_441(var_27_cvector, var_215_string); // 0x27b NEW_2
	var_216_int = 524804; // 0x27d PushI
	SetMessage(var_216_int); // 0x27e TObjFunc
	ClearReplies(); // 0x280 TObjFunc
	var_217_int = 524805; // 0x282 PushI
	var_218_int = -1; // 0x283 PushI
	var_219_int = 26115; // 0x284 PushI
	AddReply(var_217_int, var_218_int, var_219_int); // 0x285 TObjFunc
	return 0; // 0x287 Return
	
Label_648:
	var_220_int = 21397; // 0x288 PushI
	var_221_bool = var_26_bool == var_220_int; // 0x289 Eq
	if(var_221_bool == 0) goto Label_671; // 0x28a JumpB
	var_222_string = ""; // 0x28b PushV
	var_222_string = "Fear"; // 0x28c MovS
	func_441(var_27_cvector, var_222_string); // 0x28d NEW_2
	var_223_int = 520205; // 0x28f PushI
	SetMessage(var_223_int); // 0x290 TObjFunc
	ClearReplies(); // 0x292 TObjFunc
	var_224_int = 520206; // 0x294 PushI
	var_225_int = 21399; // 0x295 PushI
	var_226_int = 21398; // 0x296 PushI
	AddReply(var_224_int, var_225_int, var_226_int); // 0x297 TObjFunc
	var_227_int = 520210; // 0x299 PushI
	var_228_int = -1; // 0x29a PushI
	var_229_int = 21402; // 0x29b PushI
	AddReply(var_227_int, var_228_int, var_229_int); // 0x29c TObjFunc
	return 0; // 0x29e Return
	
Label_671:
	var_230_int = 21399; // 0x29f PushI
	var_231_bool = var_26_bool == var_230_int; // 0x2a0 Eq
	if(var_231_bool == 0) goto Label_694; // 0x2a1 JumpB
	var_232_string = ""; // 0x2a2 PushV
	var_232_string = "Fear"; // 0x2a3 MovS
	func_441(var_27_cvector, var_232_string); // 0x2a4 NEW_2
	var_233_int = 520207; // 0x2a6 PushI
	SetMessage(var_233_int); // 0x2a7 TObjFunc
	ClearReplies(); // 0x2a9 TObjFunc
	var_234_int = 520208; // 0x2ab PushI
	var_235_int = -1; // 0x2ac PushI
	var_236_int = 21400; // 0x2ad PushI
	AddReply(var_234_int, var_235_int, var_236_int); // 0x2ae TObjFunc
	var_237_int = 520209; // 0x2b0 PushI
	var_238_int = -1; // 0x2b1 PushI
	var_239_int = 21401; // 0x2b2 PushI
	AddReply(var_237_int, var_238_int, var_239_int); // 0x2b3 TObjFunc
	return 0; // 0x2b5 Return
	
Label_694:
	var_3_string = 1; // 0x2b6 TMovB
	var_240_bool = 0; // 0x2b7 PushV
	func_2367(var_240_bool); // 0x2b8 NEW_2
	if(var_240_bool == 0) goto Label_702; // 0x2ba JumpB
	lshStopAnimation(); // 0x2bb Func
	goto Label_704; // 0x2bd Jump
	
Label_704:
	return 0; // 0x2c0 Return
	
Label_702:
	StopAnimation(); // 0x2be Func
	
Label_706:
	return 0; // 0x2c2 Return
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_cvector)
{
	var_28_int = 1; // 0x365 PushI
	if(var_28_int == 0) goto Label_955; // 0x366 JumpB
	func_2167(); // 0x368 NEW_2
	var_30_int = 21927; // 0x36a PushI
	var_31_bool = var_26_bool == var_30_int; // 0x36b Eq
	if(var_31_bool == 0) goto Label_897; // 0x36c JumpB
	var_32_string = ""; // 0x36d PushV
	var_32_string = "Fear"; // 0x36e MovS
	func_846(var_27_cvector, var_32_string); // 0x36f NEW_2
	var_49_int = 520716; // 0x371 PushI
	SetMessage(var_49_int); // 0x372 TObjFunc
	ClearReplies(); // 0x374 TObjFunc
	var_50_int = 520717; // 0x376 PushI
	var_51_int = 21929; // 0x377 PushI
	var_52_int = 21928; // 0x378 PushI
	AddReply(var_50_int, var_51_int, var_52_int); // 0x379 TObjFunc
	var_53_int = 520721; // 0x37b PushI
	var_54_int = 21933; // 0x37c PushI
	var_55_int = 21932; // 0x37d PushI
	AddReply(var_53_int, var_54_int, var_55_int); // 0x37e TObjFunc
	return 0; // 0x380 Return
	
Label_897:
	var_56_int = 21933; // 0x381 PushI
	var_57_bool = var_26_bool == var_56_int; // 0x382 Eq
	if(var_57_bool == 0) goto Label_920; // 0x383 JumpB
	var_58_string = ""; // 0x384 PushV
	var_58_string = "Fear"; // 0x385 MovS
	func_846(var_27_cvector, var_58_string); // 0x386 NEW_2
	var_59_int = 520722; // 0x388 PushI
	SetMessage(var_59_int); // 0x389 TObjFunc
	ClearReplies(); // 0x38b TObjFunc
	var_60_int = 520723; // 0x38d PushI
	var_61_int = -1; // 0x38e PushI
	var_62_int = 21934; // 0x38f PushI
	AddReply(var_60_int, var_61_int, var_62_int); // 0x390 TObjFunc
	var_63_int = 520724; // 0x392 PushI
	var_64_int = -1; // 0x393 PushI
	var_65_int = 21935; // 0x394 PushI
	AddReply(var_63_int, var_64_int, var_65_int); // 0x395 TObjFunc
	return 0; // 0x397 Return
	
Label_920:
	var_66_int = 21929; // 0x398 PushI
	var_67_bool = var_26_bool == var_66_int; // 0x399 Eq
	if(var_67_bool == 0) goto Label_943; // 0x39a JumpB
	var_68_string = ""; // 0x39b PushV
	var_68_string = "Fear"; // 0x39c MovS
	func_846(var_27_cvector, var_68_string); // 0x39d NEW_2
	var_69_int = 520718; // 0x39f PushI
	SetMessage(var_69_int); // 0x3a0 TObjFunc
	ClearReplies(); // 0x3a2 TObjFunc
	var_70_int = 520719; // 0x3a4 PushI
	var_71_int = -1; // 0x3a5 PushI
	var_72_int = 21930; // 0x3a6 PushI
	AddReply(var_70_int, var_71_int, var_72_int); // 0x3a7 TObjFunc
	var_73_int = 520720; // 0x3a9 PushI
	var_74_int = -1; // 0x3aa PushI
	var_75_int = 21931; // 0x3ab PushI
	AddReply(var_73_int, var_74_int, var_75_int); // 0x3ac TObjFunc
	return 0; // 0x3ae Return
	
Label_943:
	var_3_string = 1; // 0x3af TMovB
	var_76_bool = 0; // 0x3b0 PushV
	func_2367(var_76_bool); // 0x3b1 NEW_2
	if(var_76_bool == 0) goto Label_951; // 0x3b3 JumpB
	lshStopAnimation(); // 0x3b4 Func
	goto Label_953; // 0x3b6 Jump
	
Label_953:
	return 0; // 0x3b9 Return
	
Label_951:
	StopAnimation(); // 0x3b7 Func
	
Label_955:
	return 0; // 0x3bb Return
}


task_7_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_cvector)
{
	var_28_int = 1; // 0x476 PushI
	if(var_28_int == 0) goto Label_1372; // 0x477 JumpB
	func_2167(); // 0x479 NEW_2
	var_30_int = 23411; // 0x47b PushI
	var_31_bool = var_27_cvector == var_30_int; // 0x47c Eq
	if(var_31_bool == 0) goto Label_1155; // 0x47d JumpB
	var_32_object = Obj(); var_33_object = Obj(); // 0x47e PushV
	var_32_object = var_1_object; // 0x47f MovT
	var_33_object = var_0_object; // 0x480 MovT
	func_2381(); // 0x481 NEW_2
	
Label_1155:
	var_68_int = 23412; // 0x483 PushI
	var_69_bool = var_27_cvector == var_68_int; // 0x484 Eq
	if(var_69_bool == 0) goto Label_1163; // 0x485 JumpB
	var_70_object = Obj(); var_71_object = Obj(); // 0x486 PushV
	var_70_object = var_1_object; // 0x487 MovT
	var_71_object = var_0_object; // 0x488 MovT
	func_2381(); // 0x489 NEW_2
	
Label_1163:
	var_72_int = 22716; // 0x48b PushI
	var_73_bool = var_27_cvector == var_72_int; // 0x48c Eq
	if(var_73_bool == 0) goto Label_1171; // 0x48d JumpB
	var_74_object = Obj(); var_75_object = Obj(); // 0x48e PushV
	var_74_object = var_1_object; // 0x48f MovT
	var_75_object = var_0_object; // 0x490 MovT
	func_2381(); // 0x491 NEW_2
	
Label_1171:
	var_76_int = 22776; // 0x493 PushI
	var_77_bool = var_27_cvector == var_76_int; // 0x494 Eq
	if(var_77_bool == 0) goto Label_1179; // 0x495 JumpB
	var_78_object = Obj(); var_79_object = Obj(); // 0x496 PushV
	var_78_object = var_1_object; // 0x497 MovT
	var_79_object = var_0_object; // 0x498 MovT
	func_2375(); // 0x499 NEW_2
	
Label_1179:
	var_82_int = 22778; // 0x49b PushI
	var_83_bool = var_27_cvector == var_82_int; // 0x49c Eq
	if(var_83_bool == 0) goto Label_1192; // 0x49d JumpB
	var_84_object = Obj(); var_85_object = Obj(); // 0x49e PushV
	var_84_object = var_1_object; // 0x49f MovT
	var_85_object = var_0_object; // 0x4a0 MovT
	func_2429(); // 0x4a1 NEW_2
	var_88_object = Obj(); var_89_object = Obj(); // 0x4a3 PushV
	var_88_object = var_1_object; // 0x4a4 MovT
	var_89_object = var_0_object; // 0x4a5 MovT
	func_2435(var_89_object); // 0x4a6 NEW_2
	
Label_1192:
	var_112_int = 22713; // 0x4a8 PushI
	var_113_bool = var_26_bool == var_112_int; // 0x4a9 Eq
	if(var_113_bool == 0) goto Label_1239; // 0x4aa JumpB
	var_114_string = ""; // 0x4ab PushV
	var_114_string = "Neutral"; // 0x4ac MovS
	func_1119(var_27_cvector, var_114_string); // 0x4ad NEW_2
	var_131_int = 521552; // 0x4af PushI
	SetMessage(var_131_int); // 0x4b0 TObjFunc
	ClearReplies(); // 0x4b2 TObjFunc
	var_132_bool = 0; var_133_object = Obj(); // 0x4b4 PushV
	var_133_object = var_1_object; // 0x4b5 MovT
	func_2459(var_133_object); // 0x4b6 NEW_2
	if(var_132_bool == 0) goto Label_1214; // 0x4b8 JumpB
	var_140_int = 521553; // 0x4b9 PushI
	var_141_int = 22715; // 0x4ba PushI
	var_142_int = 22714; // 0x4bb PushI
	AddReply(var_140_int, var_141_int, var_142_int); // 0x4bc TObjFunc
	
Label_1214:
	var_143_bool = 0; // 0x4be PushV
	var_143_bool = 0; // 0x4bf MovB
	var_144_bool = 0; var_145_object = Obj(); // 0x4c0 PushV
	var_145_object = var_1_object; // 0x4c1 MovT
	func_2471(var_145_object); // 0x4c2 NEW_2
	if(var_144_bool == 0) goto Label_1227; // 0x4c4 JumpB
	var_150_bool = 0; var_151_object = Obj(); // 0x4c5 PushV
	var_151_object = var_1_object; // 0x4c6 MovT
	func_2483(var_151_object); // 0x4c7 NEW_2
	if(var_150_bool == 0) goto Label_1227; // 0x4c9 JumpB
	var_143_bool = 1; // 0x4ca MovB
	
Label_1227:
	if(var_143_bool == 0) goto Label_1233; // 0x4cb JumpB
	var_156_int = 521609; // 0x4cc PushI
	var_157_int = 22777; // 0x4cd PushI
	var_158_int = 22776; // 0x4ce PushI
	AddReply(var_156_int, var_157_int, var_158_int); // 0x4cf TObjFunc
	
Label_1233:
	var_159_int = 521556; // 0x4d1 PushI
	var_160_int = -1; // 0x4d2 PushI
	var_161_int = 22717; // 0x4d3 PushI
	AddReply(var_159_int, var_160_int, var_161_int); // 0x4d4 TObjFunc
	return 0; // 0x4d6 Return
	
Label_1239:
	var_162_int = 22777; // 0x4d7 PushI
	var_163_bool = var_26_bool == var_162_int; // 0x4d8 Eq
	if(var_163_bool == 0) goto Label_1257; // 0x4d9 JumpB
	var_164_string = ""; // 0x4da PushV
	var_164_string = "Fear"; // 0x4db MovS
	func_1119(var_27_cvector, var_164_string); // 0x4dc NEW_2
	var_165_int = 521610; // 0x4de PushI
	SetMessage(var_165_int); // 0x4df TObjFunc
	ClearReplies(); // 0x4e1 TObjFunc
	var_166_int = 522261; // 0x4e3 PushI
	var_167_int = 23414; // 0x4e4 PushI
	var_168_int = 23413; // 0x4e5 PushI
	AddReply(var_166_int, var_167_int, var_168_int); // 0x4e6 TObjFunc
	return 0; // 0x4e8 Return
	
Label_1257:
	var_169_int = 23414; // 0x4e9 PushI
	var_170_bool = var_26_bool == var_169_int; // 0x4ea Eq
	if(var_170_bool == 0) goto Label_1275; // 0x4eb JumpB
	var_171_string = ""; // 0x4ec PushV
	var_171_string = "Fear"; // 0x4ed MovS
	func_1119(var_27_cvector, var_171_string); // 0x4ee NEW_2
	var_172_int = 522262; // 0x4f0 PushI
	SetMessage(var_172_int); // 0x4f1 TObjFunc
	ClearReplies(); // 0x4f3 TObjFunc
	var_173_int = 522263; // 0x4f5 PushI
	var_174_int = 23418; // 0x4f6 PushI
	var_175_int = 23415; // 0x4f7 PushI
	AddReply(var_173_int, var_174_int, var_175_int); // 0x4f8 TObjFunc
	return 0; // 0x4fa Return
	
Label_1275:
	var_176_int = 23417; // 0x4fb PushI
	var_177_bool = var_26_bool == var_176_int; // 0x4fc Eq
	if(var_177_bool == 0) goto Label_1278; // 0x4fd JumpB
	
Label_1278:
	var_178_int = 23418; // 0x4fe PushI
	var_179_bool = var_26_bool == var_178_int; // 0x4ff Eq
	if(var_179_bool == 0) goto Label_1296; // 0x500 JumpB
	var_180_string = ""; // 0x501 PushV
	var_180_string = "Love"; // 0x502 MovS
	func_1119(var_27_cvector, var_180_string); // 0x503 NEW_2
	var_181_int = 522266; // 0x505 PushI
	SetMessage(var_181_int); // 0x506 TObjFunc
	ClearReplies(); // 0x508 TObjFunc
	var_182_int = 522267; // 0x50a PushI
	var_183_int = 23420; // 0x50b PushI
	var_184_int = 23419; // 0x50c PushI
	AddReply(var_182_int, var_183_int, var_184_int); // 0x50d TObjFunc
	return 0; // 0x50f Return
	
Label_1296:
	var_185_int = 23420; // 0x510 PushI
	var_186_bool = var_26_bool == var_185_int; // 0x511 Eq
	if(var_186_bool == 0) goto Label_1314; // 0x512 JumpB
	var_187_string = ""; // 0x513 PushV
	var_187_string = "Love"; // 0x514 MovS
	func_1119(var_27_cvector, var_187_string); // 0x515 NEW_2
	var_188_int = 522268; // 0x517 PushI
	SetMessage(var_188_int); // 0x518 TObjFunc
	ClearReplies(); // 0x51a TObjFunc
	var_189_int = 521611; // 0x51c PushI
	var_190_int = -1; // 0x51d PushI
	var_191_int = 22778; // 0x51e PushI
	AddReply(var_189_int, var_190_int, var_191_int); // 0x51f TObjFunc
	return 0; // 0x521 Return
	
Label_1314:
	var_192_int = 22715; // 0x522 PushI
	var_193_bool = var_26_bool == var_192_int; // 0x523 Eq
	if(var_193_bool == 0) goto Label_1337; // 0x524 JumpB
	var_194_string = ""; // 0x525 PushV
	var_194_string = "Fear"; // 0x526 MovS
	func_1119(var_27_cvector, var_194_string); // 0x527 NEW_2
	var_195_int = 521554; // 0x529 PushI
	SetMessage(var_195_int); // 0x52a TObjFunc
	ClearReplies(); // 0x52c TObjFunc
	var_196_int = 522257; // 0x52e PushI
	var_197_int = 23410; // 0x52f PushI
	var_198_int = 23409; // 0x530 PushI
	AddReply(var_196_int, var_197_int, var_198_int); // 0x531 TObjFunc
	var_199_int = 521555; // 0x533 PushI
	var_200_int = -1; // 0x534 PushI
	var_201_int = 22716; // 0x535 PushI
	AddReply(var_199_int, var_200_int, var_201_int); // 0x536 TObjFunc
	return 0; // 0x538 Return
	
Label_1337:
	var_202_int = 23410; // 0x539 PushI
	var_203_bool = var_26_bool == var_202_int; // 0x53a Eq
	if(var_203_bool == 0) goto Label_1360; // 0x53b JumpB
	var_204_string = ""; // 0x53c PushV
	var_204_string = "Fear"; // 0x53d MovS
	func_1119(var_27_cvector, var_204_string); // 0x53e NEW_2
	var_205_int = 522258; // 0x540 PushI
	SetMessage(var_205_int); // 0x541 TObjFunc
	ClearReplies(); // 0x543 TObjFunc
	var_206_int = 522259; // 0x545 PushI
	var_207_int = -1; // 0x546 PushI
	var_208_int = 23411; // 0x547 PushI
	AddReply(var_206_int, var_207_int, var_208_int); // 0x548 TObjFunc
	var_209_int = 522260; // 0x54a PushI
	var_210_int = -1; // 0x54b PushI
	var_211_int = 23412; // 0x54c PushI
	AddReply(var_209_int, var_210_int, var_211_int); // 0x54d TObjFunc
	return 0; // 0x54f Return
	
Label_1360:
	var_3_string = 1; // 0x550 TMovB
	var_212_bool = 0; // 0x551 PushV
	func_2367(var_212_bool); // 0x552 NEW_2
	if(var_212_bool == 0) goto Label_1368; // 0x554 JumpB
	lshStopAnimation(); // 0x555 Func
	goto Label_1370; // 0x557 Jump
	
Label_1370:
	return 0; // 0x55a Return
	
Label_1368:
	StopAnimation(); // 0x558 Func
	
Label_1372:
	return 0; // 0x55c Return
}


task_9_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_int, var_26_int, var_27_cvector)
{
	var_28_int = 1; // 0x5ff PushI
	if(var_28_int == 0) goto Label_1575; // 0x600 JumpB
	func_2167(); // 0x602 NEW_2
	var_30_int = 42560; // 0x604 PushI
	var_31_bool = var_26_int == var_30_int; // 0x605 Eq
	if(var_31_bool == 0) goto Label_1563; // 0x606 JumpB
	var_32_string = ""; // 0x607 PushV
	var_32_string = "Neutral"; // 0x608 MovS
	func_1512(var_27_cvector, var_32_string); // 0x609 NEW_2
	var_49_int = 540551; // 0x60b PushI
	SetMessage(var_49_int); // 0x60c TObjFunc
	ClearReplies(); // 0x60e TObjFunc
	var_50_int = 540552; // 0x610 PushI
	var_51_int = -1; // 0x611 PushI
	var_52_int = 42561; // 0x612 PushI
	AddReply(var_50_int, var_51_int, var_52_int); // 0x613 TObjFunc
	var_53_int = 540795; // 0x615 PushI
	var_54_int = -1; // 0x616 PushI
	var_55_int = 42844; // 0x617 PushI
	AddReply(var_53_int, var_54_int, var_55_int); // 0x618 TObjFunc
	return 0; // 0x61a Return
	
Label_1563:
	var_3_string = 1; // 0x61b TMovB
	var_56_bool = 0; // 0x61c PushV
	func_2367(var_56_bool); // 0x61d NEW_2
	if(var_56_bool == 0) goto Label_1571; // 0x61f JumpB
	lshStopAnimation(); // 0x620 Func
	goto Label_1573; // 0x622 Jump
	
Label_1573:
	return 0; // 0x625 Return
	
Label_1571:
	StopAnimation(); // 0x623 Func
	
Label_1575:
	return 0; // 0x627 Return
}


task_10_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_cvector, var_26_int)
{
	var_27_int = 10; // 0x672 PushI
	var_28_bool = var_26_int == var_27_int; // 0x673 Eq
	if(var_28_bool == 0) goto Label_1686; // 0x674 JumpB
	func_1645(); // 0x676 NEW_2
	var_30_bool = 0; // 0x678 PushV
	var_30_bool = 0; // 0x679 MovB
	var_31_bool = 0; // 0x67a PushV
	func_1893(var_31_bool); // 0x67b NEW_2
	if(var_31_bool == 0) goto Label_1667; // 0x67d JumpB
	var_34_bool = 0; // 0x67e PushV
	func_1614(var_34_bool); // 0x67f NEW_2
	if(var_34_bool == 0) goto Label_1667; // 0x681 JumpB
	var_30_bool = 1; // 0x682 MovB
	
Label_1667:
	if(var_30_bool == 0) goto Label_1680; // 0x683 JumpB
	var_51_bool = 0; // 0x684 PushV
	func_1594(var_51_bool); // 0x685 NEW_2
	if(var_51_bool == 0) goto Label_1679; // 0x687 JumpB
	var_70_bool = 0; var_71_object = Obj(); // 0x688 PushV
	var_72_object = Obj(); // 0x689 PushV
	func_2174(var_72_object); // 0x68a NEW_2
	var_71_object = var_72_object; // 0x68b Mov
	func_2041(var_71_object); // 0x68d NEW_2
	
Label_1679:
	goto Label_1686; // 0x68f Jump
	
Label_1686:
	return 0; // 0x696 Return
	
Label_1680:
	func_1609(var_26_int); // 0x691 NEW_2
	func_1636(); // 0x694 NEW_2
}


task_10_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_cvector)
{
	func_1827(); // 0x698 NEW_2
	func_1645(); // 0x69b NEW_2
	lshStopSpeech(); // 0x69d Func
	lshStopAnimation(); // 0x69f Func
	StopAsync(); // 0x6a1 Func
	Hold(); // 0x6a3 Func
	return 0; // 0x6a5 Return
}


task_10_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_cvector)
{
	StopGroup0(); // 0x6a6 Func
	func_1645(); // 0x6a9 NEW_2
	var_27_string = ""; // 0x6ab PushV
	var_27_string = "Neutral"; // 0x6ac MovS
	func_2121(var_27_string); // 0x6ad NEW_2
	func_1636(); // 0x6b0 NEW_2
	return 0; // 0x6b2 Return
}


task_10_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_cvector, var_26_bool)
{
	var_27_bool = var_26_bool; // 0x6b4 Push
	if(var_27_bool == 0) goto Label_1722; // 0x6b5 JumpB
	func_1636(); // 0x6b7 NEW_2
	goto Label_1726; // 0x6b9 Jump
	
Label_1726:
	return 0; // 0x6be Return
	
Label_1722:
	var_33_string = ""; // 0x6ba PushV
	var_33_string = "Neutral"; // 0x6bb MovS
	func_2121(var_33_string); // 0x6bc NEW_2
}


task_10_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_cvector, var_26_object)
{
	var_27_bool = 0; var_28_bool = 0; // 0x6bf PushV
	IsOverrideActive(var_28_bool); // 0x6c0 Func
	var_29_bool = var_28_bool == 0; // 0x6c2 Not
	if(var_29_bool == 0) goto Label_1755; // 0x6c3 JumpB
	EventDisable(0); // 0x6c4 EventDisable
	func_1827(); // 0x6c6 NEW_2
	var_30_bool = 0; var_31_object = Obj(); // 0x6c8 PushV
	var_31_object = var_26_object; // 0x6c9 Mov
	func_1884(var_31_object); // 0x6ca NEW_2
	EventEnable(0); // 0x6cc EventEnable
	var_44_object = Obj(); // 0x6cd PushV
	var_44_object = var_26_object; // 0x6ce Mov
	func_2681(var_44_object); // 0x6cf NEW_2
	var_582_string = ""; // 0x6d1 PushV
	var_582_string = "Neutral"; // 0x6d2 MovS
	func_2121(var_582_string); // 0x6d3 NEW_2
	func_1645(); // 0x6d6 NEW_2
	func_1636(); // 0x6d9 NEW_2
	
Label_1755:
	return 2; // 0x6db Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_cvector)
{
	func_1580(var_25_cvector); // 0x629 NEW_2
	return 0; // 0x62b Return
}


func_0(var_0_object, var_393_int, var_394_object)
{
	var_396_object = Obj(); var_397_bool = 0; var_398_int = 0; var_399_bool = 0; var_400_object = Obj(); var_401_bool = 0; var_402_int = 0; var_403_bool = 0; // 0x0 PushV
	var_0_object = var_394_object; // 0x1 TMov
	var_404_bool = 0; var_405_object = Obj(); var_406_float = 0; // 0x2 PushV
	var_405_object = var_394_object; // 0x3 Mov
	var_406_float = 70.0; // 0x4 MovF
	func_1898(var_405_object, var_406_float); // 0x5 NEW_2
	var_407_bool = var_404_bool == 0; // 0x7 Not
	if(var_407_bool == 0) goto Label_11; // 0x8 JumpB
	var_393_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_400_object); // 0xb Func
	var_408_int = 0; // 0xd PushV
	func_2361(var_408_int); // 0xe NEW_2
	SetNPCName(var_408_int); // 0x10 ObjFunc
	var_409_int = 0; // 0x12 PushV
	func_2359(var_409_int); // 0x13 NEW_2
	SetNPCDescription(var_409_int); // 0x15 ObjFunc
	var_410_string = ""; // 0x17 PushV
	func_2363(var_410_string); // 0x18 NEW_2
	SetPhoto(var_410_string); // 0x1a ObjFunc
	var_411_string = ""; // 0x1c PushV
	func_2365(var_411_string); // 0x1d NEW_2
	SetPhoto2(var_411_string); // 0x1f ObjFunc
	var_412_int = 0; // 0x21 PushV
	func_2664(var_412_int); // 0x22 NEW_2
	SetPlayerName(var_412_int); // 0x24 ObjFunc
	var_402_int = -1; // 0x26 MovI
	IsOverrideActive(var_401_bool); // 0x27 Func
	var_413_bool = var_401_bool; // 0x29 Push
	if(var_413_bool == 0) goto Label_45; // 0x2a JumpB
	var_393_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_400_object); // 0x2d Func
	var_414_bool = 0; var_415_object = Obj(); // 0x2f PushV
	var_416_object = Obj(); // 0x30 PushV
	func_2174(var_416_object); // 0x31 NEW_2
	var_415_object = var_416_object; // 0x32 Mov
	func_1983(var_414_bool, var_415_object); // 0x34 NEW_2
	var_417_object = Obj(); var_418_object = Obj(); // 0x36 PushV
	var_417_object = var_394_object; // 0x37 Mov
	var_418_object = var_400_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_419_object, var_420_object, var_421_string, var_422_bool, var_417_object, var_418_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	IsDialogEnd(var_403_bool); // 0x3d ObjFunc
	
Label_63:
	var_444_bool = var_403_bool == 0; // 0x3f Not
	if(var_444_bool == 0) goto Label_70; // 0x40 JumpB
	sync(); // 0x41 Func
	IsDialogEnd(var_403_bool); // 0x43 ObjFunc
	goto Label_63; // 0x45 Jump
	
Label_70:
	var_445_object = Obj(); // 0x46 PushV
	var_445_object = var_394_object; // 0x47 Mov
	func_1966(); // 0x48 NEW_2
	StopDialog(var_400_object); // 0x4a Func
	GetReturnValue(var_402_int); // 0x4c ObjFunc
	var_393_int = var_402_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_2307(var_101_float)
{
	var_102_float = 0; var_103_float = 0; // 0x903 PushV
	GetGameTime(var_103_float); // 0x904 Func
	var_101_float = var_103_float; // 0x906 Mov
	return 2; // 0x907 Return
}


func_2312(var_175_int)
{
	var_176_float = 0; var_177_float = 0; // 0x908 PushV
	GetGameTime(var_177_float); // 0x909 Func
	var_178_int = 1; // 0x90b PushI
	var_179_int = 0; // 0x90c PushV
	var_180_int = 24; // 0x90d PushI
	var_179_int = var_177_float / var_177_float; // 0x90e Div2
	var_175_int = var_178_int + var_179_int; // 0x90f Add2
	return 2; // 0x910 Return
}


func_2572(var_339_bool)
{
	var_341_bool = 0; // 0xa0d PushV
	var_341_bool = 0; // 0xa0e MovB
	var_342_int = 0; // 0xa0f PushV
	func_2321(var_342_int); // 0xa10 NEW_2
	var_347_int = 0; // 0xa12 PushI
	var_348_bool = var_342_int >= var_347_int; // 0xa13 GE
	if(var_348_bool == 0) goto Label_2588; // 0xa14 JumpB
	var_349_int = 0; // 0xa15 PushV
	func_2321(var_349_int); // 0xa16 NEW_2
	var_350_int = 12; // 0xa18 PushI
	var_351_bool = var_349_int < var_350_int; // 0xa19 LT
	if(var_351_bool == 0) goto Label_2588; // 0xa1a JumpB
	var_341_bool = 1; // 0xa1b MovB
	
Label_2588:
	if(var_341_bool == 0) goto Label_2591; // 0xa1c JumpB
	var_339_bool = 1; // 0xa1d MovB
	return 0; // 0xa1e Return
	
Label_2591:
	var_339_bool = 0; // 0xa1f MovB
	return 0; // 0xa20 Return
}


func_1037(var_0_object, var_1_object, var_2_object, var_3_string, var_472_object, var_473_object)
{
	var_0_object = var_473_object; // 0x40e TMov
	var_1_object = var_472_object; // 0x40f TMov
	var_3_string = 0; // 0x410 TMovB
	var_478_int = 1; // 0x411 PushI
	if(var_478_int == 0) goto Label_1089; // 0x412 JumpB
	var_479_string = ""; // 0x413 PushV
	var_479_string = "Neutral"; // 0x414 MovS
	func_1119(var_473_object, var_479_string); // 0x415 NEW_2
	var_487_int = 521552; // 0x417 PushI
	SetMessage(var_487_int); // 0x418 TObjFunc
	ClearReplies(); // 0x41a TObjFunc
	var_488_bool = 0; var_489_object = Obj(); // 0x41c PushV
	var_489_object = var_1_object; // 0x41d MovT
	func_2459(var_489_object); // 0x41e NEW_2
	if(var_488_bool == 0) goto Label_1062; // 0x420 JumpB
	var_494_int = 521553; // 0x421 PushI
	var_495_int = 22715; // 0x422 PushI
	var_496_int = 22714; // 0x423 PushI
	AddReply(var_494_int, var_495_int, var_496_int); // 0x424 TObjFunc
	
Label_1062:
	var_497_bool = 0; // 0x426 PushV
	var_497_bool = 0; // 0x427 MovB
	var_498_bool = 0; var_499_object = Obj(); // 0x428 PushV
	var_499_object = var_1_object; // 0x429 MovT
	func_2471(var_499_object); // 0x42a NEW_2
	if(var_498_bool == 0) goto Label_1075; // 0x42c JumpB
	var_504_bool = 0; var_505_object = Obj(); // 0x42d PushV
	var_505_object = var_1_object; // 0x42e MovT
	func_2483(var_505_object); // 0x42f NEW_2
	if(var_504_bool == 0) goto Label_1075; // 0x431 JumpB
	var_497_bool = 1; // 0x432 MovB
	
Label_1075:
	if(var_497_bool == 0) goto Label_1081; // 0x433 JumpB
	var_510_int = 521609; // 0x434 PushI
	var_511_int = 22777; // 0x435 PushI
	var_512_int = 22776; // 0x436 PushI
	AddReply(var_510_int, var_511_int, var_512_int); // 0x437 TObjFunc
	
Label_1081:
	var_513_int = 521556; // 0x439 PushI
	var_514_int = -1; // 0x43a PushI
	var_515_int = 22717; // 0x43b PushI
	AddReply(var_513_int, var_514_int, var_515_int); // 0x43c TObjFunc
	goto Label_1089; // 0x43e Jump
	
Label_1089:
	var_516_bool = 0; // 0x441 PushV
	func_2367(var_516_bool); // 0x442 NEW_2
	if(var_516_bool == 0) goto Label_1104; // 0x444 JumpB
	
Label_1093:
	lshWaitForAnimEnd(); // 0x445 Func
	var_517_string = var_3_string; // 0x447 PushT
	if(var_517_string == 0) goto Label_1098; // 0x448 JumpB
	goto Label_1103; // 0x449 Jump
	
Label_1103:
	goto Label_1118; // 0x44f Jump
	
Label_1118:
	return 0; // 0x45e Return
	
Label_1098:
	var_518_string = ""; // 0x44a PushV
	var_518_string = var_2_object; // 0x44b MovT
	func_2121(var_518_string); // 0x44c NEW_2
	goto Label_1093; // 0x44e Jump
	
Label_1104:
	var_519_string = "all"; // 0x450 PushS
	var_520_string = "idle"; // 0x451 PushS
	PlayAnimation(var_519_string, var_520_string); // 0x452 Func
	
Label_1108:
	WaitForAnimEnd(); // 0x454 Func
	var_521_string = var_3_string; // 0x456 PushT
	if(var_521_string == 0) goto Label_1113; // 0x457 JumpB
	goto Label_1118; // 0x458 Jump
	
Label_1113:
	var_522_string = "all"; // 0x459 PushS
	var_523_string = "idle"; // 0x45a PushS
	PlayAnimation(var_522_string, var_523_string); // 0x45b Func
	goto Label_1108; // 0x45d Jump
}


func_2321(var_342_int)
{
	var_343_float = 0; var_344_float = 0; // 0x911 PushV
	GetGameTime(var_344_float); // 0x912 Func
	var_345_int = 0; // 0x914 PushV
	var_345_int = var_344_float; // 0x915 Mov
	var_346_int = 24; // 0x916 PushI
	var_342_int = var_345_int % var_346_int; // 0x917 Mod2
	return 2; // 0x918 Return
}


func_788(var_0_object, var_1_object, var_2_object, var_3_string, var_215_object, var_216_object)
{
	var_0_object = var_216_object; // 0x315 TMov
	var_1_object = var_215_object; // 0x316 TMov
	var_3_string = 0; // 0x317 TMovB
	var_221_int = 1; // 0x318 PushI
	if(var_221_int == 0) goto Label_816; // 0x319 JumpB
	var_222_string = ""; // 0x31a PushV
	var_222_string = "Fear"; // 0x31b MovS
	func_846(var_216_object, var_222_string); // 0x31c NEW_2
	var_239_int = 520716; // 0x31e PushI
	SetMessage(var_239_int); // 0x31f TObjFunc
	ClearReplies(); // 0x321 TObjFunc
	var_240_int = 520717; // 0x323 PushI
	var_241_int = 21929; // 0x324 PushI
	var_242_int = 21928; // 0x325 PushI
	AddReply(var_240_int, var_241_int, var_242_int); // 0x326 TObjFunc
	var_243_int = 520721; // 0x328 PushI
	var_244_int = 21933; // 0x329 PushI
	var_245_int = 21932; // 0x32a PushI
	AddReply(var_243_int, var_244_int, var_245_int); // 0x32b TObjFunc
	goto Label_816; // 0x32d Jump
	
Label_816:
	var_246_bool = 0; // 0x330 PushV
	func_2367(var_246_bool); // 0x331 NEW_2
	if(var_246_bool == 0) goto Label_831; // 0x333 JumpB
	
Label_820:
	lshWaitForAnimEnd(); // 0x334 Func
	var_247_string = var_3_string; // 0x336 PushT
	if(var_247_string == 0) goto Label_825; // 0x337 JumpB
	goto Label_830; // 0x338 Jump
	
Label_830:
	goto Label_845; // 0x33e Jump
	
Label_845:
	return 0; // 0x34d Return
	
Label_825:
	var_248_string = ""; // 0x339 PushV
	var_248_string = var_2_object; // 0x33a MovT
	func_2121(var_248_string); // 0x33b NEW_2
	goto Label_820; // 0x33d Jump
	
Label_831:
	var_259_string = "all"; // 0x33f PushS
	var_260_string = "idle"; // 0x340 PushS
	PlayAnimation(var_259_string, var_260_string); // 0x341 Func
	
Label_835:
	WaitForAnimEnd(); // 0x343 Func
	var_261_string = var_3_string; // 0x345 PushT
	if(var_261_string == 0) goto Label_840; // 0x346 JumpB
	goto Label_845; // 0x347 Jump
	
Label_840:
	var_262_string = "all"; // 0x348 PushS
	var_263_string = "idle"; // 0x349 PushS
	PlayAnimation(var_262_string, var_263_string); // 0x34a Func
	goto Label_835; // 0x34c Jump
}


func_2329(var_274_bool, var_275_int)
{
	var_276_int = 0; // 0x91a PushV
	func_2312(var_276_int); // 0x91b NEW_2
	var_274_bool = var_276_int == var_275_int; // 0x91d Eq2
	return 0; // 0x91e Return
}


func_2078(var_162_bool)
{
	var_164_string = ""; var_165_int = 0; var_166_bool = 0; var_167_int = 0; var_168_string = ""; var_169_string = ""; var_170_int = 0; var_171_bool = 0; var_172_int = 0; var_173_string = ""; // 0x81e PushV
	var_174_string = "d"; // 0x81f PushS
	var_175_int = 0; // 0x820 PushV
	func_2312(var_175_int); // 0x821 NEW_2
	var_181_int = var_174_string + var_175_int; // 0x823 Add
	var_182_string = "m"; // 0x824 PushS
	var_169_string = var_181_int + var_182_string; // 0x825 Add2
	var_170_int = 0; // 0x826 MovI
	
Label_2087:
	var_183_int = 1; // 0x827 PushI
	if(var_183_int == 0) goto Label_2100; // 0x828 JumpB
	var_184_int = 1; // 0x829 PushI
	var_185_int = var_170_int + var_184_int; // 0x82a Add
	var_186_int = var_169_string + var_185_int; // 0x82b Add
	HasProperty(var_186_int, var_171_bool); // 0x82c ObjFunc
	var_187_bool = var_171_bool == 0; // 0x82e Not
	if(var_187_bool == 0) goto Label_2097; // 0x82f JumpB
	goto Label_2100; // 0x830 Jump
	
Label_2100:
	var_188_bool = var_170_int == 0; // 0x834 Not
	if(var_188_bool == 0) goto Label_2104; // 0x835 JumpB
	var_162_bool = 0; // 0x836 MovB
	return 10; // 0x837 Return
	
Label_2104:
	var_172_int = 0; // 0x838 MovI
	var_189_int = 1; // 0x839 PushI
	var_190_bool = var_170_int > var_189_int; // 0x83a GT
	if(var_190_bool == 0) goto Label_2110; // 0x83b JumpB
	irand(var_172_int, var_170_int); // 0x83c Func
	
Label_2110:
	var_191_int = 1; // 0x83e PushI
	var_192_int = var_172_int + var_191_int; // 0x83f Add
	var_193_int = var_169_string + var_192_int; // 0x840 Add
	GetProperty(var_193_int, var_173_string); // 0x841 ObjFunc
	var_194_bool = 0; var_195_string = ""; // 0x843 PushV
	var_195_string = var_173_string; // 0x844 Mov
	func_2152(var_194_bool, var_195_string); // 0x845 NEW_2
	var_162_bool = var_194_bool; // 0x846 Mov
	return 10; // 0x848 Return
	
Label_2097:
	var_196_int = 1; // 0x831 PushI
	var_170_int = var_170_int + var_196_int; // 0x832 Add2
	goto Label_2087; // 0x833 Jump
}


func_2335(var_50_string, var_51_int)
{
	var_52_string = ""; var_53_string = ""; // 0x91f PushV
	var_53_string = "idle"; // 0x920 MovS
	var_54_int = var_51_int; // 0x921 Push
	if(var_54_int == 0) goto Label_2340; // 0x922 JumpB
	var_53_string = var_53_string + var_51_int; // 0x923 Add2
	
Label_2340:
	var_50_string = var_53_string; // 0x924 Mov
	return 2; // 0x925 Return
}


func_2593()
{
	var_36_object = Obj(); var_37_object = Obj(); // 0xa21 PushV
	var_38_int = 299; // 0xa22 PushI
	var_39_int = 1; // 0xa23 PushI
	var_40_int = 521614; // 0xa24 PushI
	CreateDiaryEntry(var_37_object, var_38_int, var_39_int, var_40_int); // 0xa25 Func
	var_41_bool = 0; var_42_object = Obj(); var_43_int = 0; // 0xa27 PushV
	var_42_object = var_37_object; // 0xa28 Mov
	var_43_int = 297; // 0xa29 MovI
	func_2619(var_41_bool, var_42_object, var_43_int); // 0xa2a NEW_2
	return 2; // 0xa2c Return
}


func_1825(var_64_bool)
{
	var_64_bool = 1; // 0x721 MovB
	return 0; // 0x722 Return
}


func_1827()
{
	StopAnimation(); // 0x723 Func
	StopGroup0(); // 0x725 Func
	return 0; // 0x727 Return
}


func_2551(var_362_bool)
{
	var_364_bool = 0; // 0x9f8 PushV
	var_364_bool = 0; // 0x9f9 MovB
	var_365_int = 0; // 0x9fa PushV
	func_2321(var_365_int); // 0x9fb NEW_2
	var_366_int = 12; // 0x9fd PushI
	var_367_bool = var_365_int >= var_366_int; // 0x9fe GE
	if(var_367_bool == 0) goto Label_2567; // 0x9ff JumpB
	var_368_int = 0; // 0xa00 PushV
	func_2321(var_368_int); // 0xa01 NEW_2
	var_369_int = 18; // 0xa03 PushI
	var_370_bool = var_368_int < var_369_int; // 0xa04 LT
	if(var_370_bool == 0) goto Label_2567; // 0xa05 JumpB
	var_364_bool = 1; // 0xa06 MovB
	
Label_2567:
	if(var_364_bool == 0) goto Label_2570; // 0xa07 JumpB
	var_362_bool = 1; // 0xa08 MovB
	return 0; // 0xa09 Return
	
Label_2570:
	var_362_bool = 0; // 0xa0a MovB
	return 0; // 0xa0b Return
}


func_2342(var_44_int)
{
	var_45_int = 0; var_46_bool = 0; var_47_int = 0; var_48_bool = 0; // 0x926 PushV
	var_47_int = 0; // 0x927 MovI
	
Label_2344:
	var_49_string = "all"; // 0x928 PushS
	var_50_string = ""; var_51_int = 0; // 0x929 PushV
	var_51_int = var_47_int; // 0x92a Mov
	func_2335(var_50_string, var_51_int); // 0x92b NEW_2
	HasAnimation(var_48_bool, var_49_string, var_50_string); // 0x92d Func
	var_55_bool = var_48_bool == 0; // 0x92f Not
	if(var_55_bool == 0) goto Label_2354; // 0x930 JumpB
	goto Label_2357; // 0x931 Jump
	
Label_2357:
	var_44_int = var_47_int; // 0x935 Mov
	return 4; // 0x936 Return
	
Label_2354:
	var_56_int = 1; // 0x932 PushI
	var_47_int = var_47_int + var_56_int; // 0x933 Add2
	goto Label_2344; // 0x934 Jump
}


func_1832(var_41_float)
{
	var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); // 0x728 PushV
	GetPosition(var_46_cvector); // 0x729 Func
	GetPosition(var_47_cvector); // 0x72b ObjFunc
	var_48_cvector = var_47_cvector - var_46_cvector; // 0x72d Sub2
	var_41_float = var_48_cvector | var_48_cvector; // 0x72e Or2
	return 6; // 0x72f Return
}


func_1580(var_0_object)
{
	var_26_bool = 0; // 0x62c PushV
	func_1893(var_26_bool); // 0x62d NEW_2
	var_29_bool = var_26_bool == 0; // 0x62f Not
	if(var_29_bool == 0) goto Label_1587; // 0x630 JumpB
	Hold(); // 0x631 Func
	
Label_1587:
	GetDirection(var_0_object); // 0x633 Func
	
Label_1589:
	func_1756(); // 0x636 NEW_2
	goto Label_1589; // 0x638 Jump
}


func_2606(var_50_object)
{
	var_51_object = Obj(); var_52_object = Obj(); // 0xa2e PushV
	GetDiaryRoot(var_52_object); // 0xa2f Func
	var_53_bool = var_52_object == 0; // 0xa31 Not
	if(var_53_bool == 0) goto Label_2616; // 0xa32 JumpB
	var_54_string = "Can't retrieve diary root"; // 0xa33 PushS
	Trace(var_54_string); // 0xa34 Func
	var_50_object = 0; // 0xa36 MovB
	return 2; // 0xa37 Return
	
Label_2616:
	var_50_object = var_52_object; // 0xa38 Mov
	return 2; // 0xa39 Return
}


func_1840(var_65_bool, var_66_object, var_67_string)
{
	var_68_bool = 0; var_69_bool = 0; // 0x730 PushV
	var_70_string = "HasProperty"; // 0x731 PushS
	var_71_int = 2; // 0x732 PushI
	var_72_bool = IsFuncExist(var_66_object, var_70_string, var_71_int); // 0x733 FuncExist
	var_73_bool = var_72_bool == 0; // 0x734 Not
	if(var_73_bool == 0) goto Label_1848; // 0x735 JumpB
	var_65_bool = 0; // 0x736 MovB
	return 2; // 0x737 Return
	
Label_1848:
	HasProperty(var_67_string, var_69_bool); // 0x738 ObjFunc
	var_65_bool = var_69_bool; // 0x73a Mov
	return 2; // 0x73b Return
}


func_2359(var_108_int)
{
	var_108_int = 515533; // 0x937 MovI
	return 0; // 0x938 Return
}


func_2361(var_107_int)
{
	var_107_int = 502858; // 0x939 MovI
	return 0; // 0x93a Return
}


func_1594(var_51_bool)
{
	var_52_object = Obj(); var_53_object = Obj(); // 0x63a PushV
	var_54_string = "player"; // 0x63b PushS
	FindActor(var_53_object, var_54_string); // 0x63c Func
	var_55_bool = var_53_object == 0; // 0x63e Not
	if(var_55_bool == 0) goto Label_1602; // 0x63f JumpB
	var_51_bool = 0; // 0x640 MovB
	return 2; // 0x641 Return
	
Label_1602:
	var_56_bool = 0; var_57_object = Obj(); // 0x642 PushV
	var_57_object = var_53_object; // 0x643 Mov
	func_1884(var_57_object); // 0x644 NEW_2
	var_51_bool = var_56_bool; // 0x645 Mov
	return 2; // 0x647 Return
}


func_2619(var_41_bool, var_42_object, var_43_int)
{
	var_44_object = Obj(); var_45_object = Obj(); var_46_int = 0; var_47_object = Obj(); var_48_object = Obj(); var_49_int = 0; // 0xa3b PushV
	var_50_object = Obj(); // 0xa3c PushV
	func_2606(var_50_object); // 0xa3d NEW_2
	var_47_object = var_50_object; // 0xa3e Mov
	Find(var_43_int, var_48_object); // 0xa40 ObjFunc
	var_55_bool = var_48_object == 0; // 0xa42 Not
	if(var_55_bool == 0) goto Label_2634; // 0xa43 JumpB
	var_56_string = "Can't find diary parent with id: "; // 0xa44 PushS
	var_57_int = var_56_string + var_43_int; // 0xa45 Add
	Trace(var_57_int); // 0xa46 Func
	var_41_bool = 0; // 0xa48 MovB
	return 6; // 0xa49 Return
	
Label_2634:
	AddChild(var_42_object); // 0xa4a ObjFunc
	var_58_int = 7; // 0xa4c PushI
	SendWorldWndMessage(var_58_int); // 0xa4d Func
	GetCategory(var_49_int); // 0xa4f ObjFunc
	SetDiarySection(var_49_int); // 0xa51 Func
	var_41_bool = 0; // 0xa53 MovB
	return 6; // 0xa54 Return
}


func_2363(var_109_string)
{
	var_109_string = "ui/NPC_Eva.png"; // 0x93b MovS
	return 0; // 0x93c Return
}


func_1852(var_57_bool, var_58_object, var_59_string, var_60_float, var_61_float, var_62_float)
{
	var_63_float = 0; var_64_float = 0; // 0x73c PushV
	var_65_bool = 0; var_66_object = Obj(); var_67_string = ""; // 0x73d PushV
	var_66_object = var_58_object; // 0x73e Mov
	var_67_string = var_59_string; // 0x73f Mov
	func_1840(var_65_bool, var_66_object, var_67_string); // 0x740 NEW_2
	var_74_bool = var_65_bool == 0; // 0x742 Not
	if(var_74_bool == 0) goto Label_1862; // 0x743 JumpB
	var_57_bool = 0; // 0x744 MovB
	return 2; // 0x745 Return
	
Label_1862:
	GetProperty(var_59_string, var_64_float); // 0x746 ObjFunc
	var_75_float = 0; var_76_float = 0; var_77_float = 0; var_78_float = 0; // 0x748 PushV
	var_76_float = var_64_float + var_60_float; // 0x749 Add2
	var_77_float = var_61_float; // 0x74a Mov
	var_78_float = var_62_float; // 0x74b Mov
	func_2190(var_75_float, var_76_float, var_77_float, var_78_float); // 0x74c NEW_2
	SetProperty(var_59_string, var_75_float); // 0x74e ObjFunc
	var_57_bool = 1; // 0x750 MovB
	return 2; // 0x751 Return
}


func_2365(var_110_string)
{
	var_110_string = "ui/NPC_Eva_b.png"; // 0x93d MovS
	return 0; // 0x93e Return
}


func_2367(var_102_bool)
{
	var_102_bool = 1; // 0x93f MovB
	return 0; // 0x940 Return
}


func_2369()
{
	var_34_string = "oob1Eva1"; // 0x942 PushS
	var_35_int = 1; // 0x943 PushI
	SetVariable(var_34_string, var_35_int); // 0x944 Func
	return 0; // 0x946 Return
}


func_323(var_0_object, var_1_object, var_2_object, var_3_string, var_301_object, var_302_object)
{
	var_0_object = var_302_object; // 0x144 TMov
	var_1_object = var_301_object; // 0x145 TMov
	var_3_string = 0; // 0x146 TMovB
	var_307_int = 1; // 0x147 PushI
	if(var_307_int == 0) goto Label_411; // 0x148 JumpB
	var_308_string = ""; // 0x149 PushV
	var_308_string = "Fear"; // 0x14a MovS
	func_441(var_302_object, var_308_string); // 0x14b NEW_2
	var_316_int = 520203; // 0x14d PushI
	SetMessage(var_316_int); // 0x14e TObjFunc
	ClearReplies(); // 0x150 TObjFunc
	var_317_bool = 0; var_318_object = Obj(); // 0x152 PushV
	var_318_object = var_1_object; // 0x153 MovT
	func_2539(var_318_object); // 0x154 NEW_2
	if(var_317_bool == 0) goto Label_348; // 0x156 JumpB
	var_325_int = 520204; // 0x157 PushI
	var_326_int = 21397; // 0x158 PushI
	var_327_int = 21396; // 0x159 PushI
	AddReply(var_325_int, var_326_int, var_327_int); // 0x15a TObjFunc
	
Label_348:
	var_328_bool = 0; // 0x15c PushV
	var_328_bool = 1; // 0x15d MovB
	var_329_bool = 0; // 0x15e PushV
	var_329_bool = 0; // 0x15f MovB
	var_330_bool = 0; // 0x160 PushV
	var_330_bool = 0; // 0x161 MovB
	var_331_bool = 0; var_332_object = Obj(); // 0x162 PushV
	var_332_object = var_1_object; // 0x163 MovT
	func_2495(var_332_object); // 0x164 NEW_2
	if(var_331_bool == 0) goto Label_365; // 0x166 JumpB
	var_337_bool = 0; var_338_object = Obj(); // 0x167 PushV
	var_338_object = var_1_object; // 0x168 MovT
	func_2529(var_337_bool, var_338_object); // 0x169 NEW_2
	if(var_337_bool == 0) goto Label_365; // 0x16b JumpB
	var_330_bool = 1; // 0x16c MovB
	
Label_365:
	if(var_330_bool == 0) goto Label_372; // 0x16d JumpB
	var_352_bool = 0; var_353_object = Obj(); // 0x16e PushV
	var_353_object = var_1_object; // 0x16f MovT
	func_2507(var_353_object); // 0x170 NEW_2
	if(var_352_bool == 0) goto Label_372; // 0x172 JumpB
	var_329_bool = 1; // 0x173 MovB
	
Label_372:
	if(var_329_bool == 0) goto Label_397; // 0x174 JumpB
	var_358_bool = 0; // 0x175 PushV
	var_358_bool = 0; // 0x176 MovB
	var_359_bool = 0; // 0x177 PushV
	var_359_bool = 0; // 0x178 MovB
	var_360_bool = 0; var_361_object = Obj(); // 0x179 PushV
	var_361_object = var_1_object; // 0x17a MovT
	func_2519(var_360_bool, var_361_object); // 0x17b NEW_2
	if(var_360_bool == 0) goto Label_388; // 0x17d JumpB
	var_371_bool = 0; var_372_object = Obj(); // 0x17e PushV
	var_372_object = var_1_object; // 0x17f MovT
	func_2495(var_372_object); // 0x180 NEW_2
	if(var_371_bool == 0) goto Label_388; // 0x182 JumpB
	var_359_bool = 1; // 0x183 MovB
	
Label_388:
	if(var_359_bool == 0) goto Label_395; // 0x184 JumpB
	var_373_bool = 0; var_374_object = Obj(); // 0x185 PushV
	var_374_object = var_1_object; // 0x186 MovT
	func_2507(var_374_object); // 0x187 NEW_2
	if(var_373_bool == 0) goto Label_395; // 0x189 JumpB
	var_358_bool = 1; // 0x18a MovB
	
Label_395:
	if(var_358_bool == 0) goto Label_397; // 0x18b JumpB
	var_328_bool = 0; // 0x18c MovB
	
Label_397:
	if(var_328_bool == 0) goto Label_403; // 0x18d JumpB
	var_375_int = 520211; // 0x18e PushI
	var_376_int = 21404; // 0x18f PushI
	var_377_int = 21403; // 0x190 PushI
	AddReply(var_375_int, var_376_int, var_377_int); // 0x191 TObjFunc
	
Label_403:
	var_378_int = 520215; // 0x193 PushI
	var_379_int = -1; // 0x194 PushI
	var_380_int = 21407; // 0x195 PushI
	AddReply(var_378_int, var_379_int, var_380_int); // 0x196 TObjFunc
	goto Label_411; // 0x198 Jump
	
Label_411:
	var_381_bool = 0; // 0x19b PushV
	func_2367(var_381_bool); // 0x19c NEW_2
	if(var_381_bool == 0) goto Label_426; // 0x19e JumpB
	
Label_415:
	lshWaitForAnimEnd(); // 0x19f Func
	var_382_string = var_3_string; // 0x1a1 PushT
	if(var_382_string == 0) goto Label_420; // 0x1a2 JumpB
	goto Label_425; // 0x1a3 Jump
	
Label_425:
	goto Label_440; // 0x1a9 Jump
	
Label_440:
	return 0; // 0x1b8 Return
	
Label_420:
	var_383_string = ""; // 0x1a4 PushV
	var_383_string = var_2_object; // 0x1a5 MovT
	func_2121(var_383_string); // 0x1a6 NEW_2
	goto Label_415; // 0x1a8 Jump
	
Label_426:
	var_384_string = "all"; // 0x1aa PushS
	var_385_string = "idle"; // 0x1ab PushS
	PlayAnimation(var_384_string, var_385_string); // 0x1ac Func
	
Label_430:
	WaitForAnimEnd(); // 0x1ae Func
	var_386_string = var_3_string; // 0x1b0 PushT
	if(var_386_string == 0) goto Label_435; // 0x1b1 JumpB
	goto Label_440; // 0x1b2 Jump
	
Label_435:
	var_387_string = "all"; // 0x1b3 PushS
	var_388_string = "idle"; // 0x1b4 PushS
	PlayAnimation(var_387_string, var_388_string); // 0x1b5 Func
	goto Label_430; // 0x1b7 Jump
}


func_2375()
{
	var_80_string = "oob9Eva1"; // 0x948 PushS
	var_81_int = 1; // 0x949 PushI
	SetVariable(var_80_string, var_81_int); // 0x94a Func
	return 0; // 0x94c Return
}


func_2121(var_248_string)
{
	var_249_bool = 0; var_250_float = 0; var_251_float = 0; var_252_bool = 0; var_253_float = 0; var_254_float = 0; // 0x849 PushV
	lshHasAnimation(var_252_bool, var_248_string); // 0x84a Func
	var_255_bool = var_252_bool; // 0x84c Push
	if(var_255_bool == 0) goto Label_2132; // 0x84d JumpB
	lshGetAnimTimes(var_248_string, var_253_float, var_254_float); // 0x84e Func
	var_256_bool = 0; // 0x850 PushB
	lshPlayAnimation(var_253_float, var_254_float, var_256_bool); // 0x851 Func
	goto Label_2136; // 0x853 Jump
	
Label_2136:
	return 6; // 0x858 Return
	
Label_2132:
	var_257_string = "Can't find lsh animation : "; // 0x854 PushS
	var_258_int = var_257_string + var_248_string; // 0x855 Add
	Trace(var_258_int); // 0x856 Func
}


func_1609(var_0_object)
{
	var_103_float = GetByIndex(var_0_object, 0); // 0x649 PushE
	var_104_float = GetByIndex(var_0_object, 2); // 0x64a PushE
	RotateAsync(var_103_float, var_104_float); // 0x64b Func
	return 0; // 0x64d Return
}


func_2381()
{
	var_34_string = "b9q01"; // 0x94e PushS
	var_35_int = 2; // 0x94f PushI
	SetVariable(var_34_string, var_35_int); // 0x950 Func
	func_2593(); // 0x953 NEW_2
	var_59_bool = 0; var_60_string = ""; var_61_string = ""; // 0x955 PushV
	var_60_string = "quest_b9_01"; // 0x956 MovS
	var_61_string = "place_mdoberman"; // 0x957 MovS
	func_2295(var_59_bool, var_60_string, var_61_string); // 0x958 NEW_2
	var_65_bool = 0; var_66_string = ""; var_67_string = ""; // 0x95a PushV
	var_66_string = "quest_b9_01"; // 0x95b MovS
	var_67_string = "init_factory"; // 0x95c MovS
	func_2295(var_65_bool, var_66_string, var_67_string); // 0x95d NEW_2
	return 0; // 0x95f Return
}


func_1614(var_34_bool)
{
	var_35_object = Obj(); var_36_bool = 0; var_37_object = Obj(); var_38_bool = 0; // 0x64e PushV
	var_39_string = "player"; // 0x64f PushS
	FindActor(var_37_object, var_39_string); // 0x650 Func
	var_40_bool = var_37_object == 0; // 0x652 Not
	if(var_40_bool == 0) goto Label_1622; // 0x653 JumpB
	var_34_bool = 0; // 0x654 MovB
	return 4; // 0x655 Return
	
Label_1622:
	var_41_float = 0; var_42_object = Obj(); // 0x656 PushV
	var_42_object = var_37_object; // 0x657 Mov
	func_1832(var_42_object); // 0x658 NEW_2
	var_49_float = 90000.0; // 0x65a PushF
	var_50_bool = var_41_float > var_49_float; // 0x65b GT
	if(var_50_bool == 0) goto Label_1631; // 0x65c JumpB
	var_34_bool = 0; // 0x65d MovB
	return 4; // 0x65e Return
	
Label_1631:
	CanSee(var_38_bool, var_37_object); // 0x65f Func
	var_34_bool = var_38_bool; // 0x661 Mov
	return 4; // 0x662 Return
}


func_846(var_2_object, var_222_string)
{
	var_223_bool = 0; // 0x34f PushV
	func_2367(var_223_bool); // 0x350 NEW_2
	var_224_bool = var_223_bool == 0; // 0x352 Not
	if(var_224_bool == 0) goto Label_853; // 0x353 JumpB
	return 0; // 0x354 Return
	
Label_853:
	var_225_bool = var_222_string == var_2_object; // 0x355 Eq
	if(var_225_bool == 0) goto Label_856; // 0x356 JumpB
	return 0; // 0x357 Return
	
Label_856:
	var_226_string = ""; var_227_bool = 0; // 0x358 PushV
	var_226_string = var_222_string; // 0x359 Mov
	var_228_string = ""; // 0x35a PushS
	var_229_bool = var_222_string == var_228_string; // 0x35b Eq
	if(var_229_bool == 0) goto Label_863; // 0x35c JumpB
	var_227_bool = 0; // 0x35d MovB
	goto Label_864; // 0x35e Jump
	
Label_864:
	func_2137(var_226_string, var_227_bool); // 0x360 NEW_2
	var_2_object = var_222_string; // 0x362 TMov
	return 0; // 0x363 Return
	
Label_863:
	var_227_bool = 1; // 0x35f MovB
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_417_object, var_418_object)
{
	var_0_object = var_418_object; // 0x52 TMov
	var_1_object = var_417_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_423_int = 1; // 0x55 PushI
	if(var_423_int == 0) goto Label_104; // 0x56 JumpB
	var_424_string = ""; // 0x57 PushV
	var_424_string = "Fear"; // 0x58 MovS
	func_134(var_418_object, var_424_string); // 0x59 NEW_2
	var_432_int = 518278; // 0x5b PushI
	SetMessage(var_432_int); // 0x5c TObjFunc
	ClearReplies(); // 0x5e TObjFunc
	var_433_int = 518279; // 0x60 PushI
	var_434_int = -1; // 0x61 PushI
	var_435_int = 19388; // 0x62 PushI
	AddReply(var_433_int, var_434_int, var_435_int); // 0x63 TObjFunc
	goto Label_104; // 0x65 Jump
	
Label_104:
	var_436_bool = 0; // 0x68 PushV
	func_2367(var_436_bool); // 0x69 NEW_2
	if(var_436_bool == 0) goto Label_119; // 0x6b JumpB
	
Label_108:
	lshWaitForAnimEnd(); // 0x6c Func
	var_437_string = var_3_string; // 0x6e PushT
	if(var_437_string == 0) goto Label_113; // 0x6f JumpB
	goto Label_118; // 0x70 Jump
	
Label_118:
	goto Label_133; // 0x76 Jump
	
Label_133:
	return 0; // 0x85 Return
	
Label_113:
	var_438_string = ""; // 0x71 PushV
	var_438_string = var_2_object; // 0x72 MovT
	func_2121(var_438_string); // 0x73 NEW_2
	goto Label_108; // 0x75 Jump
	
Label_119:
	var_439_string = "all"; // 0x77 PushS
	var_440_string = "idle"; // 0x78 PushS
	PlayAnimation(var_439_string, var_440_string); // 0x79 Func
	
Label_123:
	WaitForAnimEnd(); // 0x7b Func
	var_441_string = var_3_string; // 0x7d PushT
	if(var_441_string == 0) goto Label_128; // 0x7e JumpB
	goto Label_133; // 0x7f Jump
	
Label_128:
	var_442_string = "all"; // 0x80 PushS
	var_443_string = "idle"; // 0x81 PushS
	PlayAnimation(var_442_string, var_443_string); // 0x82 Func
	goto Label_123; // 0x84 Jump
}


func_1874(var_34_bool, var_35_cvector)
{
	var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_bool = 0; var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_bool = 0; // 0x752 PushV
	GetPosition(var_39_cvector); // 0x753 Func
	var_40_cvector = var_35_cvector - var_39_cvector; // 0x755 Sub2
	var_42_float = GetByIndex(var_40_cvector, 0); // 0x756 PushE
	var_43_float = GetByIndex(var_40_cvector, 2); // 0x757 PushE
	Rotate(var_42_float, var_43_float, var_41_bool); // 0x758 Func
	var_34_bool = var_41_bool; // 0x75a Mov
	return 6; // 0x75b Return
}


func_2647(var_90_object)
{
	var_91_object = Obj(); var_92_object = Obj(); var_93_object = Obj(); var_94_object = Obj(); // 0xa57 PushV
	GetMainOutdoorScene(var_93_object); // 0xa58 Func
	var_95_bool = var_93_object == 0; // 0xa5a NullEq
	if(var_95_bool == 0) goto Label_2658; // 0xa5b JumpB
	var_96_string = "Can't find main outdoor scene"; // 0xa5c PushS
	Trace(var_96_string); // 0xa5d Func
	var_94_object = 0; // 0xa5f SetNull
	var_90_object = var_94_object; // 0xa60 Mov
	return 4; // 0xa61 Return
	
Label_2658:
	GetMap(var_94_object); // 0xa62 ObjFunc
	var_90_object = var_94_object; // 0xa64 Mov
	return 4; // 0xa65 Return
}


func_2137(var_226_string, var_227_bool)
{
	var_230_bool = 0; var_231_float = 0; var_232_float = 0; var_233_bool = 0; var_234_float = 0; var_235_float = 0; // 0x859 PushV
	lshHasAnimation(var_233_bool, var_226_string); // 0x85a Func
	var_236_bool = var_233_bool; // 0x85c Push
	if(var_236_bool == 0) goto Label_2147; // 0x85d JumpB
	lshGetAnimTimes(var_226_string, var_234_float, var_235_float); // 0x85e Func
	lshPlayAnimation(var_234_float, var_235_float, var_227_bool); // 0x860 Func
	goto Label_2151; // 0x862 Jump
	
Label_2151:
	return 6; // 0x867 Return
	
Label_2147:
	var_237_string = "Can't find lsh animation : "; // 0x863 PushS
	var_238_int = var_237_string + var_226_string; // 0x864 Add
	Trace(var_238_int); // 0x865 Func
}


func_1884(var_30_bool)
{
	var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); // 0x75c PushV
	GetPosition(var_33_cvector); // 0x75d ObjFunc
	var_34_bool = 0; var_35_cvector = CVector(0,0,0); // 0x75f PushV
	var_35_cvector = var_33_cvector; // 0x760 Mov
	func_1874(var_34_bool, var_35_cvector); // 0x761 NEW_2
	var_30_bool = var_34_bool; // 0x762 Mov
	return 2; // 0x764 Return
}


func_1373(var_0_object, var_526_int, var_527_object)
{
	var_529_object = Obj(); var_530_bool = 0; var_531_int = 0; var_532_bool = 0; var_533_object = Obj(); var_534_bool = 0; var_535_int = 0; var_536_bool = 0; // 0x55d PushV
	var_0_object = var_527_object; // 0x55e TMov
	var_537_bool = 0; var_538_object = Obj(); var_539_float = 0; // 0x55f PushV
	var_538_object = var_527_object; // 0x560 Mov
	var_539_float = 70.0; // 0x561 MovF
	func_1898(var_538_object, var_539_float); // 0x562 NEW_2
	var_540_bool = var_537_bool == 0; // 0x564 Not
	if(var_540_bool == 0) goto Label_1384; // 0x565 JumpB
	var_526_int = -2; // 0x566 MovI
	return 8; // 0x567 Return
	
Label_1384:
	CreateDialog(var_533_object); // 0x568 Func
	var_541_int = 0; // 0x56a PushV
	func_2361(var_541_int); // 0x56b NEW_2
	SetNPCName(var_541_int); // 0x56d ObjFunc
	var_542_int = 0; // 0x56f PushV
	func_2359(var_542_int); // 0x570 NEW_2
	SetNPCDescription(var_542_int); // 0x572 ObjFunc
	var_543_string = ""; // 0x574 PushV
	func_2363(var_543_string); // 0x575 NEW_2
	SetPhoto(var_543_string); // 0x577 ObjFunc
	var_544_string = ""; // 0x579 PushV
	func_2365(var_544_string); // 0x57a NEW_2
	SetPhoto2(var_544_string); // 0x57c ObjFunc
	var_545_int = 0; // 0x57e PushV
	func_2664(var_545_int); // 0x57f NEW_2
	SetPlayerName(var_545_int); // 0x581 ObjFunc
	var_535_int = -1; // 0x583 MovI
	IsOverrideActive(var_534_bool); // 0x584 Func
	var_546_bool = var_534_bool; // 0x586 Push
	if(var_546_bool == 0) goto Label_1418; // 0x587 JumpB
	var_526_int = -2; // 0x588 MovI
	return 8; // 0x589 Return
	
Label_1418:
	DoDialog(var_533_object); // 0x58a Func
	var_547_bool = 0; var_548_object = Obj(); // 0x58c PushV
	var_549_object = Obj(); // 0x58d PushV
	func_2174(var_549_object); // 0x58e NEW_2
	var_548_object = var_549_object; // 0x58f Mov
	func_1983(var_547_bool, var_548_object); // 0x591 NEW_2
	var_550_object = Obj(); var_551_object = Obj(); // 0x593 PushV
	var_550_object = var_527_object; // 0x594 Mov
	var_551_object = var_533_object; // 0x595 Mov
	TaskCall(9); // 0x596 TaskCall
	func_1454(var_552_object, var_553_object, var_554_string, var_555_bool, var_550_object, var_551_object); // 0x597 NEW_2
	TaskReturn(); // 0x598 TaskReturn
	IsDialogEnd(var_536_bool); // 0x59a ObjFunc
	
Label_1436:
	var_580_bool = var_536_bool == 0; // 0x59c Not
	if(var_580_bool == 0) goto Label_1443; // 0x59d JumpB
	sync(); // 0x59e Func
	IsDialogEnd(var_536_bool); // 0x5a0 ObjFunc
	goto Label_1436; // 0x5a2 Jump
	
Label_1443:
	var_581_object = Obj(); // 0x5a3 PushV
	var_581_object = var_527_object; // 0x5a4 Mov
	func_1966(); // 0x5a5 NEW_2
	StopDialog(var_533_object); // 0x5a7 Func
	GetReturnValue(var_535_int); // 0x5a9 ObjFunc
	var_526_int = var_535_int; // 0x5ab Mov
	return 8; // 0x5ac Return
}


func_1119(var_2_object, var_479_string)
{
	var_480_bool = 0; // 0x460 PushV
	func_2367(var_480_bool); // 0x461 NEW_2
	var_481_bool = var_480_bool == 0; // 0x463 Not
	if(var_481_bool == 0) goto Label_1126; // 0x464 JumpB
	return 0; // 0x465 Return
	
Label_1126:
	var_482_bool = var_479_string == var_2_object; // 0x466 Eq
	if(var_482_bool == 0) goto Label_1129; // 0x467 JumpB
	return 0; // 0x468 Return
	
Label_1129:
	var_483_string = ""; var_484_bool = 0; // 0x469 PushV
	var_483_string = var_479_string; // 0x46a Mov
	var_485_string = ""; // 0x46b PushS
	var_486_bool = var_479_string == var_485_string; // 0x46c Eq
	if(var_486_bool == 0) goto Label_1136; // 0x46d JumpB
	var_484_bool = 0; // 0x46e MovB
	goto Label_1137; // 0x46f Jump
	
Label_1137:
	func_2137(var_483_string, var_484_bool); // 0x471 NEW_2
	var_2_object = var_479_string; // 0x473 TMov
	return 0; // 0x474 Return
	
Label_1136:
	var_484_bool = 1; // 0x470 MovB
}


func_2400(var_108_object)
{
	var_110_bool = 0; var_111_object = Obj(); var_112_float = 0; // 0x961 PushV
	var_111_object = var_108_object; // 0x962 Mov
	var_112_float = -0.05; // 0x963 MovF
	func_2250(var_110_bool, var_111_object, var_112_float); // 0x964 NEW_2
	return 0; // 0x966 Return
}


func_1636()
{
	var_584_float = 0; var_585_float = 0; // 0x664 PushV
	var_586_int = 8; // 0x665 PushI
	var_587_int = 16; // 0x666 PushI
	rand(var_585_float, var_586_int, var_587_int); // 0x667 Func
	var_588_int = 10; // 0x669 PushI
	SetTimer(var_588_int, var_585_float); // 0x66a Func
	return 2; // 0x66c Return
}


func_1893(var_26_bool)
{
	var_27_bool = 0; var_28_bool = 0; // 0x765 PushV
	IsLoaded(var_28_bool); // 0x766 Func
	var_26_bool = var_28_bool; // 0x768 Mov
	return 2; // 0x769 Return
}


func_2407()
{
	var_40_string = "oob1Eva2"; // 0x968 PushS
	var_41_int = 1; // 0x969 PushI
	SetVariable(var_40_string, var_41_int); // 0x96a Func
	return 0; // 0x96c Return
}


func_2664(var_111_int)
{
	var_112_int = 0; var_113_int = 0; // 0xa68 PushV
	var_114_string = "branch"; // 0xa69 PushS
	GetVariable(var_114_string, var_113_int); // 0xa6a Func
	var_115_int = 0; // 0xa6c PushI
	var_116_bool = var_113_int == var_115_int; // 0xa6d Eq
	if(var_116_bool == 0) goto Label_2674; // 0xa6e JumpB
	var_111_int = 1; // 0xa6f MovI
	return 2; // 0xa70 Return
	
Label_2674:
	var_117_int = 1; // 0xa72 PushI
	var_118_bool = var_113_int == var_117_int; // 0xa73 Eq
	if(var_118_bool == 0) goto Label_2679; // 0xa74 JumpB
	var_111_int = 2; // 0xa75 MovI
	return 2; // 0xa76 Return
	
Label_2679:
	var_111_int = 3; // 0xa77 MovI
	return 2; // 0xa78 Return
}


func_2152(var_154_bool, var_155_string)
{
	var_156_bool = 0; var_157_bool = 0; // 0x868 PushV
	var_158_bool = 0; // 0x869 PushV
	func_2367(var_158_bool); // 0x86a NEW_2
	if(var_158_bool == 0) goto Label_2165; // 0x86c JumpB
	lshHasSpeech(var_157_bool, var_155_string); // 0x86d Func
	var_159_bool = var_157_bool; // 0x86f Push
	if(var_159_bool == 0) goto Label_2165; // 0x870 JumpB
	lshPlaySpeech(var_155_string); // 0x871 Func
	var_154_bool = 1; // 0x873 MovB
	return 2; // 0x874 Return
	
Label_2165:
	var_154_bool = 0; // 0x875 MovB
	return 2; // 0x876 Return
}


func_1898(var_60_bool, var_62_float)
{
	var_63_float = 0; var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); var_66_cvector = CVector(0,0,0); var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0); var_70_bool = 0; var_71_bool = 0; var_72_float = 0; var_73_cvector = CVector(0,0,0); var_74_cvector = CVector(0,0,0); var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0); var_79_bool = 0; var_80_bool = 0; // 0x76a PushV
	GetPosition(var_73_cvector); // 0x76b ObjFunc
	GetEyesHeight(var_72_float); // 0x76d ObjFunc
	var_81_float = GetByIndex(var_73_cvector, 1); // 0x76f PushE
	var_81_float = var_81_float + var_72_float; // 0x770 Add2
	SetByIndex(var_73_cvector, 1) = var_81_float; // 0x771 PopE
	GetPosition(var_74_cvector); // 0x772 Func
	GetEyesHeight(var_72_float); // 0x774 Func
	var_82_float = GetByIndex(var_74_cvector, 1); // 0x776 PushE
	var_82_float = var_82_float + var_72_float; // 0x777 Add2
	SetByIndex(var_74_cvector, 1) = var_82_float; // 0x778 PopE
	var_75_cvector = var_73_cvector - var_74_cvector; // 0x779 Sub2
	var_83_float = GetByIndex(var_75_cvector, 1); // 0x77a PushE
	var_83_float = 0; // 0x77b MovI
	SetByIndex(var_75_cvector, 1) = var_83_float; // 0x77c PopE
	var_84_int = var_75_cvector | var_75_cvector; // 0x77d Or
	var_85_float = sqrt(var_84_int); // 0x77e Sqrt
	var_75_cvector = var_75_cvector / var_75_cvector; // 0x77f Div2
	var_76_cvector = -var_75_cvector; // 0x780 Neg2
	var_86_float = var_75_cvector * var_62_float; // 0x781 Mult
	var_87_cvector = CVector(0,0,0); var_88_cvector = CVector(0,0,0); // 0x782 PushV
	var_89_cvector = CVector(0.0, 1.0, 0.0); // 0x783 PushVec
	var_88_cvector = var_76_cvector ^ var_89_cvector; // 0x784 Xor2
	func_2180(var_87_cvector, var_88_cvector); // 0x785 NEW_2
	var_95_int = 25; // 0x787 PushI
	var_96_float = var_87_cvector * var_95_int; // 0x788 Mult
	var_97_int = var_86_float + var_96_float; // 0x789 Add
	var_98_cvector = CVector(0.0, 10.0, 0.0); // 0x78a PushVec
	var_77_cvector = var_97_int - var_98_cvector; // 0x78b Sub2
	var_78_cvector = var_74_cvector + var_77_cvector; // 0x78c Add2
	IsOverrideActive(var_79_bool); // 0x78d Func
	var_99_bool = var_79_bool; // 0x78f Push
	if(var_99_bool == 0) goto Label_1939; // 0x790 JumpB
	var_60_bool = 0; // 0x791 MovB
	return 18; // 0x792 Return
	
Label_1939:
	StopWorld(); // 0x793 Func
	CameraTransit(var_78_cvector, var_76_cvector); // 0x795 Func
	var_100_float = GetByIndex(var_77_cvector, 0); // 0x797 PushE
	var_101_float = GetByIndex(var_77_cvector, 2); // 0x798 PushE
	Rotate(var_100_float, var_101_float); // 0x799 Func
	var_102_bool = 0; // 0x79b PushV
	func_2367(var_102_bool); // 0x79c NEW_2
	if(var_102_bool == 0) goto Label_1952; // 0x79e JumpB
	goto Label_1960; // 0x79f Jump
	
Label_1960:
	CameraWaitForPlayFinish(); // 0x7a8 Func
	ResumeWorld(); // 0x7aa Func
	var_60_bool = 1; // 0x7ac MovB
	return 18; // 0x7ad Return
	
Label_1952:
	var_103_string = "head"; // 0x7a0 PushS
	HasAnimationTrack(var_80_bool, var_103_string); // 0x7a1 Func
	var_104_bool = var_80_bool; // 0x7a3 Push
	if(var_104_bool == 0) goto Label_1960; // 0x7a4 JumpB
	var_105_string = "head"; // 0x7a5 PushS
	LookAsyncCamera(var_105_string); // 0x7a6 Func
}


func_1645()
{
	var_583_int = 10; // 0x66d PushI
	KillTimer(var_583_int); // 0x66e Func
	return 0; // 0x670 Return
}


func_2413()
{
	var_88_object = Obj(); var_89_object = Obj(); // 0x96d PushV
	var_90_object = Obj(); // 0x96e PushV
	func_2647(var_90_object); // 0x96f NEW_2
	var_89_object = var_90_object; // 0x970 Mov
	var_97_string = "b1q01BakWillBeAt18"; // 0x972 PushS
	var_98_string = "pt_map_eva"; // 0x973 PushS
	var_99_int = 3; // 0x974 PushI
	var_100_int = 524806; // 0x975 PushI
	var_101_float = 0; // 0x976 PushV
	func_2307(var_101_float); // 0x977 NEW_2
	AddMark(var_97_string, var_98_string, var_99_int, var_100_int, var_101_float); // 0x979 ObjFunc
	return 2; // 0x97b Return
}


func_2167()
{
	var_29_bool = 0; // 0x877 PushV
	func_2367(var_29_bool); // 0x878 NEW_2
	if(var_29_bool == 0) goto Label_2173; // 0x87a JumpB
	lshStopSpeech(); // 0x87b Func
	
Label_2173:
	return 0; // 0x87d Return
}


func_2681(var_44_object)
{
	var_45_int = 0; var_46_int = 0; // 0xa79 PushV
	var_47_string = "mt_eva"; // 0xa7a PushS
	GetVariable(var_47_string, var_46_int); // 0xa7b Func
	var_48_bool = var_46_int == 0; // 0xa7d Not
	if(var_48_bool == 0) goto Label_2697; // 0xa7e JumpB
	var_49_int = 0; var_50_object = Obj(); // 0xa7f PushV
	var_50_object = var_44_object; // 0xa80 Mov
	TaskCall(4); // 0xa81 TaskCall
	func_707(var_51_object, var_49_int, var_50_object); // 0xa82 NEW_2
	TaskReturn(); // 0xa83 TaskReturn
	var_272_string = "mt_eva"; // 0xa85 PushS
	var_273_int = 1; // 0xa86 PushI
	SetVariable(var_272_string, var_273_int); // 0xa87 Func
	
Label_2697:
	var_274_bool = 0; var_275_int = 0; // 0xa89 PushV
	var_275_int = 1; // 0xa8a MovI
	func_2329(var_274_bool, var_275_int); // 0xa8b NEW_2
	if(var_274_bool == 0) goto Label_2709; // 0xa8d JumpB
	var_277_int = 0; var_278_object = Obj(); // 0xa8e PushV
	var_278_object = var_44_object; // 0xa8f Mov
	TaskCall(2); // 0xa90 TaskCall
	func_242(var_279_object, var_277_int, var_278_object); // 0xa91 NEW_2
	TaskReturn(); // 0xa92 TaskReturn
	return 2; // 0xa94 Return
	
Label_2709:
	var_391_bool = 0; var_392_int = 0; // 0xa95 PushV
	var_392_int = 2; // 0xa96 MovI
	func_2329(var_391_bool, var_392_int); // 0xa97 NEW_2
	if(var_391_bool == 0) goto Label_2721; // 0xa99 JumpB
	var_393_int = 0; var_394_object = Obj(); // 0xa9a PushV
	var_394_object = var_44_object; // 0xa9b Mov
	TaskCall(0); // 0xa9c TaskCall
	func_0(var_395_object, var_393_int, var_394_object); // 0xa9d NEW_2
	TaskReturn(); // 0xa9e TaskReturn
	return 2; // 0xaa0 Return
	
Label_2721:
	var_446_bool = 0; var_447_int = 0; // 0xaa1 PushV
	var_447_int = 9; // 0xaa2 MovI
	func_2329(var_446_bool, var_447_int); // 0xaa3 NEW_2
	if(var_446_bool == 0) goto Label_2733; // 0xaa5 JumpB
	var_448_int = 0; var_449_object = Obj(); // 0xaa6 PushV
	var_449_object = var_44_object; // 0xaa7 Mov
	TaskCall(6); // 0xaa8 TaskCall
	func_956(var_450_object, var_448_int, var_449_object); // 0xaa9 NEW_2
	TaskReturn(); // 0xaaa TaskReturn
	return 2; // 0xaac Return
	
Label_2733:
	var_526_int = 0; var_527_object = Obj(); // 0xaad PushV
	var_527_object = var_44_object; // 0xaae Mov
	TaskCall(8); // 0xaaf TaskCall
	func_1373(var_528_object, var_526_int, var_527_object); // 0xab0 NEW_2
	TaskReturn(); // 0xab1 TaskReturn
	return 2; // 0xab3 Return
}


func_2429()
{
	var_86_string = "playsound"; // 0x97e PushS
	var_87_string = "giveitem"; // 0x97f PushS
	TriggerWorld(var_86_string, var_87_string); // 0x980 Func
	return 0; // 0x982 Return
}


func_2174(var_122_object)
{
	var_123_object = Obj(); var_124_object = Obj(); // 0x87e PushV
	self(var_124_object); // 0x87f Func
	var_122_object = var_124_object; // 0x881 Mov
	return 2; // 0x882 Return
}


func_2435(var_88_object)
{
	var_90_string = "rifle ammo30 is given"; // 0x984 PushS
	Trace(var_90_string); // 0x985 Func
	var_91_object = Obj(); var_92_string = ""; var_93_int = 0; // 0x987 PushV
	var_91_object = var_88_object; // 0x988 Mov
	var_92_string = "rifle_ammo"; // 0x989 MovS
	var_93_int = 30; // 0x98a MovI
	func_2237(var_91_object, var_92_string, var_93_int); // 0x98b NEW_2
	return 0; // 0x98d Return
}


func_2180(var_87_cvector, var_88_cvector)
{
	var_90_float = 0; var_91_float = 0; // 0x884 PushV
	var_92_int = var_88_cvector | var_88_cvector; // 0x885 Or
	var_91_float = sqrt(var_92_int); // 0x886 Sqrt2
	var_93_float = 0.0; // 0x887 PushF
	var_94_bool = var_91_float < var_93_float; // 0x888 LT
	if(var_94_bool == 0) goto Label_2188; // 0x889 JumpB
	var_87_cvector = CVector(0.0, 0.0, 0.0); // 0x88a MovV
	return 2; // 0x88b Return
	
Label_2188:
	var_87_cvector = var_88_cvector / var_88_cvector; // 0x88c Div2
	return 2; // 0x88d Return
}


func_134(var_2_object, var_424_string)
{
	var_425_bool = 0; // 0x87 PushV
	func_2367(var_425_bool); // 0x88 NEW_2
	var_426_bool = var_425_bool == 0; // 0x8a Not
	if(var_426_bool == 0) goto Label_141; // 0x8b JumpB
	return 0; // 0x8c Return
	
Label_141:
	var_427_bool = var_424_string == var_2_object; // 0x8d Eq
	if(var_427_bool == 0) goto Label_144; // 0x8e JumpB
	return 0; // 0x8f Return
	
Label_144:
	var_428_string = ""; var_429_bool = 0; // 0x90 PushV
	var_428_string = var_424_string; // 0x91 Mov
	var_430_string = ""; // 0x92 PushS
	var_431_bool = var_424_string == var_430_string; // 0x93 Eq
	if(var_431_bool == 0) goto Label_151; // 0x94 JumpB
	var_429_bool = 0; // 0x95 MovB
	goto Label_152; // 0x96 Jump
	
Label_152:
	func_2137(var_428_string, var_429_bool); // 0x98 NEW_2
	var_2_object = var_424_string; // 0x9a TMov
	return 0; // 0x9b Return
	
Label_151:
	var_429_bool = 1; // 0x97 MovB
}


func_2190(var_75_float, var_76_float, var_77_float, var_78_float)
{
	var_79_bool = var_76_float < var_77_float; // 0x88f LT
	if(var_79_bool == 0) goto Label_2195; // 0x890 JumpB
	var_75_float = var_77_float; // 0x891 Mov
	return 0; // 0x892 Return
	
Label_2195:
	var_80_bool = var_76_float > var_78_float; // 0x893 GT
	if(var_80_bool == 0) goto Label_2199; // 0x894 JumpB
	var_75_float = var_78_float; // 0x895 Mov
	return 0; // 0x896 Return
	
Label_2199:
	var_75_float = var_76_float; // 0x897 Mov
	return 0; // 0x898 Return
}


func_2446(var_44_object)
{
	var_46_bool = 0; var_47_object = Obj(); var_48_float = 0; // 0x98f PushV
	var_47_object = var_44_object; // 0x990 Mov
	var_48_float = -0.02; // 0x991 MovF
	func_2250(var_46_bool, var_47_object, var_48_float); // 0x992 NEW_2
	return 0; // 0x994 Return
}


func_2453()
{
	var_106_string = "playsound"; // 0x996 PushS
	var_107_string = "mapmark"; // 0x997 PushS
	TriggerWorld(var_106_string, var_107_string); // 0x998 Func
	return 0; // 0x99a Return
}


func_2201(var_319_int, var_320_string)
{
	var_321_int = 0; var_322_int = 0; // 0x899 PushV
	GetVariable(var_320_string, var_322_int); // 0x89a Func
	var_319_int = var_322_int; // 0x89c Mov
	return 2; // 0x89d Return
}


func_2459(var_488_bool)
{
	var_490_int = 0; var_491_string = ""; // 0x99c PushV
	var_491_string = "b9q01"; // 0x99d MovS
	func_2201(var_490_int, var_491_string); // 0x99e NEW_2
	var_492_int = 1; // 0x9a0 PushI
	var_493_bool = var_490_int == var_492_int; // 0x9a1 Eq
	if(var_493_bool == 0) goto Label_2469; // 0x9a2 JumpB
	var_488_bool = 1; // 0x9a3 MovB
	return 0; // 0x9a4 Return
	
Label_2469:
	var_488_bool = 0; // 0x9a5 MovB
	return 0; // 0x9a6 Return
}


func_2206(var_107_int, var_108_int)
{
	var_109_object = Obj(); var_110_object = Obj(); // 0x89e PushV
	CreateIntVector(var_110_object); // 0x89f Func
	add(var_107_int); // 0x8a1 ObjFunc
	add(var_108_int); // 0x8a3 ObjFunc
	var_111_int = 3; // 0x8a5 PushI
	SendWorldWndMessage(var_111_int, var_110_object); // 0x8a6 Func
	return 2; // 0x8a8 Return
}


func_2471(var_498_bool)
{
	var_500_int = 0; var_501_string = ""; // 0x9a8 PushV
	var_501_string = "oob9Eva1"; // 0x9a9 MovS
	func_2201(var_500_int, var_501_string); // 0x9aa NEW_2
	var_502_int = 0; // 0x9ac PushI
	var_503_bool = var_500_int == var_502_int; // 0x9ad Eq
	if(var_503_bool == 0) goto Label_2481; // 0x9ae JumpB
	var_498_bool = 1; // 0x9af MovB
	return 0; // 0x9b0 Return
	
Label_2481:
	var_498_bool = 0; // 0x9b1 MovB
	return 0; // 0x9b2 Return
}


func_2218(var_97_object, var_98_int)
{
	var_99_int = 0; var_100_int = 0; var_101_bool = 0; var_102_int = 0; var_103_int = 0; var_104_bool = 0; // 0x8aa PushV
	GetItemID(var_102_int); // 0x8ab ObjFunc
	var_105_string = "Category"; // 0x8ad PushS
	GetInvItemProperty(var_103_int, var_102_int, var_105_string); // 0x8ae Func
	AddItem(var_104_bool, var_97_object, var_103_int, var_98_int); // 0x8b0 ObjFunc
	var_106_bool = var_104_bool == 0; // 0x8b2 Not
	if(var_106_bool == 0) goto Label_2231; // 0x8b3 JumpB
	DropItems(var_97_object, var_98_int); // 0x8b4 ObjFunc
	goto Label_2236; // 0x8b6 Jump
	
Label_2236:
	return 6; // 0x8bc Return
	
Label_2231:
	var_107_int = 0; var_108_int = 0; // 0x8b7 PushV
	var_107_int = var_102_int; // 0x8b8 Mov
	var_108_int = var_98_int; // 0x8b9 Mov
	func_2206(var_107_int, var_108_int); // 0x8ba NEW_2
}


func_1966()
{
	var_266_bool = 0; var_267_bool = 0; // 0x7ae PushV
	CameraSwitchToNormal(); // 0x7af Func
	var_268_bool = 0; // 0x7b1 PushV
	func_2367(var_268_bool); // 0x7b2 NEW_2
	if(var_268_bool == 0) goto Label_1974; // 0x7b4 JumpB
	goto Label_1982; // 0x7b5 Jump
	
Label_1982:
	return 2; // 0x7be Return
	
Label_1974:
	var_269_string = "head"; // 0x7b6 PushS
	HasAnimationTrack(var_267_bool, var_269_string); // 0x7b7 Func
	var_270_bool = var_267_bool; // 0x7b9 Push
	if(var_270_bool == 0) goto Label_1982; // 0x7ba JumpB
	var_271_string = "head"; // 0x7bb PushS
	UnlookAsync(var_271_string); // 0x7bc Func
}


func_1454(var_0_object, var_1_object, var_2_object, var_3_string, var_550_object, var_551_object)
{
	var_0_object = var_551_object; // 0x5af TMov
	var_1_object = var_550_object; // 0x5b0 TMov
	var_3_string = 0; // 0x5b1 TMovB
	var_556_int = 1; // 0x5b2 PushI
	if(var_556_int == 0) goto Label_1482; // 0x5b3 JumpB
	var_557_string = ""; // 0x5b4 PushV
	var_557_string = "Neutral"; // 0x5b5 MovS
	func_1512(var_551_object, var_557_string); // 0x5b6 NEW_2
	var_565_int = 540551; // 0x5b8 PushI
	SetMessage(var_565_int); // 0x5b9 TObjFunc
	ClearReplies(); // 0x5bb TObjFunc
	var_566_int = 540552; // 0x5bd PushI
	var_567_int = -1; // 0x5be PushI
	var_568_int = 42561; // 0x5bf PushI
	AddReply(var_566_int, var_567_int, var_568_int); // 0x5c0 TObjFunc
	var_569_int = 540795; // 0x5c2 PushI
	var_570_int = -1; // 0x5c3 PushI
	var_571_int = 42844; // 0x5c4 PushI
	AddReply(var_569_int, var_570_int, var_571_int); // 0x5c5 TObjFunc
	goto Label_1482; // 0x5c7 Jump
	
Label_1482:
	var_572_bool = 0; // 0x5ca PushV
	func_2367(var_572_bool); // 0x5cb NEW_2
	if(var_572_bool == 0) goto Label_1497; // 0x5cd JumpB
	
Label_1486:
	lshWaitForAnimEnd(); // 0x5ce Func
	var_573_string = var_3_string; // 0x5d0 PushT
	if(var_573_string == 0) goto Label_1491; // 0x5d1 JumpB
	goto Label_1496; // 0x5d2 Jump
	
Label_1496:
	goto Label_1511; // 0x5d8 Jump
	
Label_1511:
	return 0; // 0x5e7 Return
	
Label_1491:
	var_574_string = ""; // 0x5d3 PushV
	var_574_string = var_2_object; // 0x5d4 MovT
	func_2121(var_574_string); // 0x5d5 NEW_2
	goto Label_1486; // 0x5d7 Jump
	
Label_1497:
	var_575_string = "all"; // 0x5d9 PushS
	var_576_string = "idle"; // 0x5da PushS
	PlayAnimation(var_575_string, var_576_string); // 0x5db Func
	
Label_1501:
	WaitForAnimEnd(); // 0x5dd Func
	var_577_string = var_3_string; // 0x5df PushT
	if(var_577_string == 0) goto Label_1506; // 0x5e0 JumpB
	goto Label_1511; // 0x5e1 Jump
	
Label_1506:
	var_578_string = "all"; // 0x5e2 PushS
	var_579_string = "idle"; // 0x5e3 PushS
	PlayAnimation(var_578_string, var_579_string); // 0x5e4 Func
	goto Label_1501; // 0x5e6 Jump
}


func_2483(var_504_bool)
{
	var_506_int = 0; var_507_string = ""; // 0x9b4 PushV
	var_507_string = "b9q01DankoAmmo"; // 0x9b5 MovS
	func_2201(var_506_int, var_507_string); // 0x9b6 NEW_2
	var_508_int = 0; // 0x9b8 PushI
	var_509_bool = var_506_int != var_508_int; // 0x9b9 Neq
	if(var_509_bool == 0) goto Label_2493; // 0x9ba JumpB
	var_504_bool = 1; // 0x9bb MovB
	return 0; // 0x9bc Return
	
Label_2493:
	var_504_bool = 0; // 0x9bd MovB
	return 0; // 0x9be Return
}


func_441(var_2_object, var_308_string)
{
	var_309_bool = 0; // 0x1ba PushV
	func_2367(var_309_bool); // 0x1bb NEW_2
	var_310_bool = var_309_bool == 0; // 0x1bd Not
	if(var_310_bool == 0) goto Label_448; // 0x1be JumpB
	return 0; // 0x1bf Return
	
Label_448:
	var_311_bool = var_308_string == var_2_object; // 0x1c0 Eq
	if(var_311_bool == 0) goto Label_451; // 0x1c1 JumpB
	return 0; // 0x1c2 Return
	
Label_451:
	var_312_string = ""; var_313_bool = 0; // 0x1c3 PushV
	var_312_string = var_308_string; // 0x1c4 Mov
	var_314_string = ""; // 0x1c5 PushS
	var_315_bool = var_308_string == var_314_string; // 0x1c6 Eq
	if(var_315_bool == 0) goto Label_458; // 0x1c7 JumpB
	var_313_bool = 0; // 0x1c8 MovB
	goto Label_459; // 0x1c9 Jump
	
Label_459:
	func_2137(var_312_string, var_313_bool); // 0x1cb NEW_2
	var_2_object = var_308_string; // 0x1cd TMov
	return 0; // 0x1ce Return
	
Label_458:
	var_313_bool = 1; // 0x1ca MovB
}


func_956(var_0_object, var_448_int, var_449_object)
{
	var_451_object = Obj(); var_452_bool = 0; var_453_int = 0; var_454_bool = 0; var_455_object = Obj(); var_456_bool = 0; var_457_int = 0; var_458_bool = 0; // 0x3bc PushV
	var_0_object = var_449_object; // 0x3bd TMov
	var_459_bool = 0; var_460_object = Obj(); var_461_float = 0; // 0x3be PushV
	var_460_object = var_449_object; // 0x3bf Mov
	var_461_float = 70.0; // 0x3c0 MovF
	func_1898(var_460_object, var_461_float); // 0x3c1 NEW_2
	var_462_bool = var_459_bool == 0; // 0x3c3 Not
	if(var_462_bool == 0) goto Label_967; // 0x3c4 JumpB
	var_448_int = -2; // 0x3c5 MovI
	return 8; // 0x3c6 Return
	
Label_967:
	CreateDialog(var_455_object); // 0x3c7 Func
	var_463_int = 0; // 0x3c9 PushV
	func_2361(var_463_int); // 0x3ca NEW_2
	SetNPCName(var_463_int); // 0x3cc ObjFunc
	var_464_int = 0; // 0x3ce PushV
	func_2359(var_464_int); // 0x3cf NEW_2
	SetNPCDescription(var_464_int); // 0x3d1 ObjFunc
	var_465_string = ""; // 0x3d3 PushV
	func_2363(var_465_string); // 0x3d4 NEW_2
	SetPhoto(var_465_string); // 0x3d6 ObjFunc
	var_466_string = ""; // 0x3d8 PushV
	func_2365(var_466_string); // 0x3d9 NEW_2
	SetPhoto2(var_466_string); // 0x3db ObjFunc
	var_467_int = 0; // 0x3dd PushV
	func_2664(var_467_int); // 0x3de NEW_2
	SetPlayerName(var_467_int); // 0x3e0 ObjFunc
	var_457_int = -1; // 0x3e2 MovI
	IsOverrideActive(var_456_bool); // 0x3e3 Func
	var_468_bool = var_456_bool; // 0x3e5 Push
	if(var_468_bool == 0) goto Label_1001; // 0x3e6 JumpB
	var_448_int = -2; // 0x3e7 MovI
	return 8; // 0x3e8 Return
	
Label_1001:
	DoDialog(var_455_object); // 0x3e9 Func
	var_469_bool = 0; var_470_object = Obj(); // 0x3eb PushV
	var_471_object = Obj(); // 0x3ec PushV
	func_2174(var_471_object); // 0x3ed NEW_2
	var_470_object = var_471_object; // 0x3ee Mov
	func_1983(var_469_bool, var_470_object); // 0x3f0 NEW_2
	var_472_object = Obj(); var_473_object = Obj(); // 0x3f2 PushV
	var_472_object = var_449_object; // 0x3f3 Mov
	var_473_object = var_455_object; // 0x3f4 Mov
	TaskCall(7); // 0x3f5 TaskCall
	func_1037(var_474_object, var_475_object, var_476_string, var_477_bool, var_472_object, var_473_object); // 0x3f6 NEW_2
	TaskReturn(); // 0x3f7 TaskReturn
	IsDialogEnd(var_458_bool); // 0x3f9 ObjFunc
	
Label_1019:
	var_524_bool = var_458_bool == 0; // 0x3fb Not
	if(var_524_bool == 0) goto Label_1026; // 0x3fc JumpB
	sync(); // 0x3fd Func
	IsDialogEnd(var_458_bool); // 0x3ff ObjFunc
	goto Label_1019; // 0x401 Jump
	
Label_1026:
	var_525_object = Obj(); // 0x402 PushV
	var_525_object = var_449_object; // 0x403 Mov
	func_1966(); // 0x404 NEW_2
	StopDialog(var_455_object); // 0x406 Func
	GetReturnValue(var_457_int); // 0x408 ObjFunc
	var_448_int = var_457_int; // 0x40a Mov
	return 8; // 0x40b Return
}


func_2237(var_91_object, var_92_string, var_93_int)
{
	var_94_object = Obj(); var_95_object = Obj(); // 0x8bd PushV
	CreateInvItem(var_95_object); // 0x8be Func
	SetItemName(var_92_string); // 0x8c0 ObjFunc
	var_96_object = Obj(); var_97_object = Obj(); var_98_int = 0; // 0x8c2 PushV
	var_96_object = var_91_object; // 0x8c3 Mov
	var_97_object = var_95_object; // 0x8c4 Mov
	var_98_int = var_93_int; // 0x8c5 Mov
	func_2218(var_97_object, var_98_int); // 0x8c6 NEW_2
	return 2; // 0x8c8 Return
}


func_2495(var_331_bool)
{
	var_333_int = 0; var_334_string = ""; // 0x9c0 PushV
	var_334_string = "oob1Eva2"; // 0x9c1 MovS
	func_2201(var_333_int, var_334_string); // 0x9c2 NEW_2
	var_335_int = 0; // 0x9c4 PushI
	var_336_bool = var_333_int == var_335_int; // 0x9c5 Eq
	if(var_336_bool == 0) goto Label_2505; // 0x9c6 JumpB
	var_331_bool = 1; // 0x9c7 MovB
	return 0; // 0x9c8 Return
	
Label_2505:
	var_331_bool = 0; // 0x9c9 MovB
	return 0; // 0x9ca Return
}


func_1983(var_120_bool, var_121_object)
{
	var_125_int = 0; var_126_int = 0; var_127_int = 0; var_128_int = 0; // 0x7bf PushV
	var_129_string = "voice_common"; // 0x7c0 PushS
	GetVariable(var_129_string, var_127_int); // 0x7c1 Func
	var_130_int = var_127_int; // 0x7c3 Push
	if(var_130_int == 0) goto Label_2021; // 0x7c4 JumpB
	var_131_bool = 0; var_132_object = Obj(); // 0x7c5 PushV
	var_132_object = var_121_object; // 0x7c6 Mov
	func_2041(var_132_object); // 0x7c7 NEW_2
	var_161_bool = var_131_bool == 0; // 0x7c9 Not
	if(var_161_bool == 0) goto Label_2003; // 0x7ca JumpB
	var_162_bool = 0; var_163_object = Obj(); // 0x7cb PushV
	var_163_object = var_121_object; // 0x7cc Mov
	func_2078(var_163_object); // 0x7cd NEW_2
	var_197_bool = var_162_bool == 0; // 0x7cf Not
	if(var_197_bool == 0) goto Label_2003; // 0x7d0 JumpB
	var_120_bool = 0; // 0x7d1 MovB
	return 4; // 0x7d2 Return
	
Label_2003:
	var_198_int = 2; // 0x7d3 PushI
	irand(var_128_int, var_198_int); // 0x7d4 Func
	var_199_int = var_128_int; // 0x7d6 Push
	if(var_199_int == 0) goto Label_2016; // 0x7d7 JumpB
	var_200_string = "voice_common"; // 0x7d8 PushS
	var_201_int = 1; // 0x7d9 PushI
	var_202_int = var_127_int + var_201_int; // 0x7da Add
	var_203_int = 3; // 0x7db PushI
	var_204_int = var_202_int / var_203_int; // 0x7dc Mod
	SetVariable(var_200_string, var_204_int); // 0x7dd Func
	goto Label_2020; // 0x7df Jump
	
Label_2020:
	goto Label_2039; // 0x7e4 Jump
	
Label_2039:
	var_120_bool = 1; // 0x7f7 MovB
	return 4; // 0x7f8 Return
	
Label_2016:
	var_205_string = "voice_common"; // 0x7e0 PushS
	var_206_int = 0; // 0x7e1 PushI
	SetVariable(var_205_string, var_206_int); // 0x7e2 Func
	
Label_2021:
	var_207_bool = 0; var_208_object = Obj(); // 0x7e5 PushV
	var_208_object = var_121_object; // 0x7e6 Mov
	func_2078(var_208_object); // 0x7e7 NEW_2
	var_209_bool = var_207_bool == 0; // 0x7e9 Not
	if(var_209_bool == 0) goto Label_2035; // 0x7ea JumpB
	var_210_bool = 0; var_211_object = Obj(); // 0x7eb PushV
	var_211_object = var_121_object; // 0x7ec Mov
	func_2041(var_211_object); // 0x7ed NEW_2
	var_212_bool = var_210_bool == 0; // 0x7ef Not
	if(var_212_bool == 0) goto Label_2035; // 0x7f0 JumpB
	var_120_bool = 0; // 0x7f1 MovB
	return 4; // 0x7f2 Return
	
Label_2035:
	var_213_string = "voice_common"; // 0x7f3 PushS
	var_214_int = 1; // 0x7f4 PushI
	SetVariable(var_213_string, var_214_int); // 0x7f5 Func
}


func_707(var_0_object, var_49_int, var_50_object)
{
	var_52_object = Obj(); var_53_bool = 0; var_54_int = 0; var_55_bool = 0; var_56_object = Obj(); var_57_bool = 0; var_58_int = 0; var_59_bool = 0; // 0x2c3 PushV
	var_0_object = var_50_object; // 0x2c4 TMov
	var_60_bool = 0; var_61_object = Obj(); var_62_float = 0; // 0x2c5 PushV
	var_61_object = var_50_object; // 0x2c6 Mov
	var_62_float = 70.0; // 0x2c7 MovF
	func_1898(var_61_object, var_62_float); // 0x2c8 NEW_2
	var_106_bool = var_60_bool == 0; // 0x2ca Not
	if(var_106_bool == 0) goto Label_718; // 0x2cb JumpB
	var_49_int = -2; // 0x2cc MovI
	return 8; // 0x2cd Return
	
Label_718:
	CreateDialog(var_56_object); // 0x2ce Func
	var_107_int = 0; // 0x2d0 PushV
	func_2361(var_107_int); // 0x2d1 NEW_2
	SetNPCName(var_107_int); // 0x2d3 ObjFunc
	var_108_int = 0; // 0x2d5 PushV
	func_2359(var_108_int); // 0x2d6 NEW_2
	SetNPCDescription(var_108_int); // 0x2d8 ObjFunc
	var_109_string = ""; // 0x2da PushV
	func_2363(var_109_string); // 0x2db NEW_2
	SetPhoto(var_109_string); // 0x2dd ObjFunc
	var_110_string = ""; // 0x2df PushV
	func_2365(var_110_string); // 0x2e0 NEW_2
	SetPhoto2(var_110_string); // 0x2e2 ObjFunc
	var_111_int = 0; // 0x2e4 PushV
	func_2664(var_111_int); // 0x2e5 NEW_2
	SetPlayerName(var_111_int); // 0x2e7 ObjFunc
	var_58_int = -1; // 0x2e9 MovI
	IsOverrideActive(var_57_bool); // 0x2ea Func
	var_119_bool = var_57_bool; // 0x2ec Push
	if(var_119_bool == 0) goto Label_752; // 0x2ed JumpB
	var_49_int = -2; // 0x2ee MovI
	return 8; // 0x2ef Return
	
Label_752:
	DoDialog(var_56_object); // 0x2f0 Func
	var_120_bool = 0; var_121_object = Obj(); // 0x2f2 PushV
	var_122_object = Obj(); // 0x2f3 PushV
	func_2174(var_122_object); // 0x2f4 NEW_2
	var_121_object = var_122_object; // 0x2f5 Mov
	func_1983(var_120_bool, var_121_object); // 0x2f7 NEW_2
	var_215_object = Obj(); var_216_object = Obj(); // 0x2f9 PushV
	var_215_object = var_50_object; // 0x2fa Mov
	var_216_object = var_56_object; // 0x2fb Mov
	TaskCall(5); // 0x2fc TaskCall
	func_788(var_217_object, var_218_object, var_219_string, var_220_bool, var_215_object, var_216_object); // 0x2fd NEW_2
	TaskReturn(); // 0x2fe TaskReturn
	IsDialogEnd(var_59_bool); // 0x300 ObjFunc
	
Label_770:
	var_264_bool = var_59_bool == 0; // 0x302 Not
	if(var_264_bool == 0) goto Label_777; // 0x303 JumpB
	sync(); // 0x304 Func
	IsDialogEnd(var_59_bool); // 0x306 ObjFunc
	goto Label_770; // 0x308 Jump
	
Label_777:
	var_265_object = Obj(); // 0x309 PushV
	var_265_object = var_50_object; // 0x30a Mov
	func_1966(); // 0x30b NEW_2
	StopDialog(var_56_object); // 0x30d Func
	GetReturnValue(var_58_int); // 0x30f ObjFunc
	var_49_int = var_58_int; // 0x311 Mov
	return 8; // 0x312 Return
}


func_2250(var_46_bool, var_47_object, var_48_float)
{
	var_49_bool = var_47_object == 0; // 0x8cb Not
	if(var_49_bool == 0) goto Label_2255; // 0x8cc JumpB
	var_46_bool = 0; // 0x8cd MovB
	return 0; // 0x8ce Return
	
Label_2255:
	var_50_int = 0; // 0x8cf PushI
	var_51_bool = var_48_float > var_50_int; // 0x8d0 GT
	if(var_51_bool == 0) goto Label_2262; // 0x8d1 JumpB
	var_52_int = 8; // 0x8d2 PushI
	SendWorldWndMessage(var_52_int); // 0x8d3 Func
	goto Label_2271; // 0x8d5 Jump
	
Label_2271:
	var_53_float = 0; // 0x8df PushV
	var_53_float = var_48_float; // 0x8e0 Mov
	func_2285(var_53_float); // 0x8e1 NEW_2
	var_57_bool = 0; var_58_object = Obj(); var_59_string = ""; var_60_float = 0; var_61_float = 0; var_62_float = 0; // 0x8e3 PushV
	var_58_object = var_47_object; // 0x8e4 Mov
	var_59_string = "reputation"; // 0x8e5 MovS
	var_60_float = var_48_float; // 0x8e6 Mov
	var_61_float = 0; // 0x8e7 MovI
	var_62_float = 1; // 0x8e8 MovI
	func_1852(var_57_bool, var_58_object, var_59_string, var_60_float, var_61_float, var_62_float); // 0x8e9 NEW_2
	var_46_bool = 1; // 0x8eb MovB
	return 0; // 0x8ec Return
	
Label_2262:
	var_81_int = 0; // 0x8d6 PushI
	var_82_bool = var_48_float < var_81_int; // 0x8d7 LT
	if(var_82_bool == 0) goto Label_2269; // 0x8d8 JumpB
	var_83_int = 9; // 0x8d9 PushI
	SendWorldWndMessage(var_83_int); // 0x8da Func
	goto Label_2271; // 0x8dc Jump
	
Label_2269:
	var_46_bool = 0; // 0x8dd MovB
	return 0; // 0x8de Return
}


func_2507(var_352_bool)
{
	var_354_int = 0; var_355_string = ""; // 0x9cc PushV
	var_355_string = "b1q01GrifToldAboutDanko"; // 0x9cd MovS
	func_2201(var_354_int, var_355_string); // 0x9ce NEW_2
	var_356_int = 0; // 0x9d0 PushI
	var_357_bool = var_354_int != var_356_int; // 0x9d1 Neq
	if(var_357_bool == 0) goto Label_2517; // 0x9d2 JumpB
	var_352_bool = 1; // 0x9d3 MovB
	return 0; // 0x9d4 Return
	
Label_2517:
	var_352_bool = 0; // 0x9d5 MovB
	return 0; // 0x9d6 Return
}


func_2519(var_360_bool, var_361_object)
{
	var_362_bool = 0; var_363_object = Obj(); // 0x9d8 PushV
	var_363_object = var_361_object; // 0x9d9 Mov
	func_2551(var_363_object); // 0x9da NEW_2
	if(var_362_bool == 0) goto Label_2527; // 0x9dc JumpB
	var_360_bool = 1; // 0x9dd MovB
	return 0; // 0x9de Return
	
Label_2527:
	var_360_bool = 0; // 0x9df MovB
	return 0; // 0x9e0 Return
}


func_1756()
{
	var_30_int = 0; var_31_int = 0; var_32_bool = 0; var_33_int = 0; var_34_int = 0; var_35_bool = 0; var_36_int = 0; var_37_int = 0; var_38_bool = 0; var_39_int = 0; var_40_int = 0; var_41_bool = 0; // 0x6dc PushV
	WaitForAnimEnd(); // 0x6dd Func
	var_42_bool = 0; // 0x6df PushV
	func_1893(var_42_bool); // 0x6e0 NEW_2
	var_43_bool = var_42_bool == 0; // 0x6e2 Not
	if(var_43_bool == 0) goto Label_1765; // 0x6e3 JumpB
	return 12; // 0x6e4 Return
	
Label_1765:
	var_44_int = 0; // 0x6e5 PushV
	func_2342(var_44_int); // 0x6e6 NEW_2
	var_36_int = var_44_int; // 0x6e7 Mov
	var_37_int = 0; // 0x6e9 MovI
	
Label_1770:
	var_57_bool = 0; // 0x6ea PushV
	var_57_bool = 0; // 0x6eb MovB
	var_58_int = 5; // 0x6ec PushI
	var_59_bool = var_37_int < var_58_int; // 0x6ed LT
	if(var_59_bool == 0) goto Label_1780; // 0x6ee JumpB
	var_60_bool = 0; // 0x6ef PushV
	func_1893(var_60_bool); // 0x6f0 NEW_2
	if(var_60_bool == 0) goto Label_1780; // 0x6f2 JumpB
	var_57_bool = 1; // 0x6f3 MovB
	
Label_1780:
	if(var_57_bool == 0) goto Label_1822; // 0x6f4 JumpB
	var_61_bool = var_36_int == 0; // 0x6f5 Not
	if(var_61_bool == 0) goto Label_1790; // 0x6f6 JumpB
	var_62_int = 3; // 0x6f7 PushI
	Sleep(var_62_int, var_38_bool); // 0x6f8 Func
	var_63_bool = var_38_bool == 0; // 0x6fa Not
	if(var_63_bool == 0) goto Label_1789; // 0x6fb JumpB
	goto Label_1822; // 0x6fc Jump
	
Label_1822:
	ResetAAS(); // 0x71e Func
	return 12; // 0x720 Return
	
Label_1789:
	goto Label_1811; // 0x6fd Jump
	
Label_1811:
	var_64_bool = 0; // 0x713 PushV
	func_1825(var_64_bool); // 0x714 NEW_2
	var_65_bool = var_64_bool == 0; // 0x716 Not
	if(var_65_bool == 0) goto Label_1817; // 0x717 JumpB
	goto Label_1822; // 0x718 Jump
	
Label_1817:
	ResetAAS(); // 0x719 Func
	var_66_int = 1; // 0x71b PushI
	var_37_int = var_37_int + var_66_int; // 0x71c Add2
	goto Label_1770; // 0x71d Jump
	
Label_1790:
	irand(var_39_int, var_36_int); // 0x6fe Func
	var_67_int = 5; // 0x700 PushI
	irand(var_40_int, var_67_int); // 0x701 Func
	var_68_int = 0; // 0x703 PushI
	var_69_bool = var_40_int != var_68_int; // 0x704 Neq
	if(var_69_bool == 0) goto Label_1799; // 0x705 JumpB
	var_39_int = 0; // 0x706 MovI
	
Label_1799:
	var_70_string = "all"; // 0x707 PushS
	var_71_string = ""; var_72_int = 0; // 0x708 PushV
	var_72_int = var_39_int; // 0x709 Mov
	func_2335(var_71_string, var_72_int); // 0x70a NEW_2
	PlayAnimation(var_70_string, var_71_string); // 0x70c Func
	WaitForAnimEnd(var_41_bool); // 0x70e Func
	var_73_bool = var_41_bool == 0; // 0x710 Not
	if(var_73_bool == 0) goto Label_1811; // 0x711 JumpB
	goto Label_1822; // 0x712 Jump
}


func_2529(var_337_bool, var_338_object)
{
	var_339_bool = 0; var_340_object = Obj(); // 0x9e2 PushV
	var_340_object = var_338_object; // 0x9e3 Mov
	func_2572(var_340_object); // 0x9e4 NEW_2
	if(var_339_bool == 0) goto Label_2537; // 0x9e6 JumpB
	var_337_bool = 1; // 0x9e7 MovB
	return 0; // 0x9e8 Return
	
Label_2537:
	var_337_bool = 0; // 0x9e9 MovB
	return 0; // 0x9ea Return
}


func_1512(var_2_object, var_557_string)
{
	var_558_bool = 0; // 0x5e9 PushV
	func_2367(var_558_bool); // 0x5ea NEW_2
	var_559_bool = var_558_bool == 0; // 0x5ec Not
	if(var_559_bool == 0) goto Label_1519; // 0x5ed JumpB
	return 0; // 0x5ee Return
	
Label_1519:
	var_560_bool = var_557_string == var_2_object; // 0x5ef Eq
	if(var_560_bool == 0) goto Label_1522; // 0x5f0 JumpB
	return 0; // 0x5f1 Return
	
Label_1522:
	var_561_string = ""; var_562_bool = 0; // 0x5f2 PushV
	var_561_string = var_557_string; // 0x5f3 Mov
	var_563_string = ""; // 0x5f4 PushS
	var_564_bool = var_557_string == var_563_string; // 0x5f5 Eq
	if(var_564_bool == 0) goto Label_1529; // 0x5f6 JumpB
	var_562_bool = 0; // 0x5f7 MovB
	goto Label_1530; // 0x5f8 Jump
	
Label_1530:
	func_2137(var_561_string, var_562_bool); // 0x5fa NEW_2
	var_2_object = var_557_string; // 0x5fc TMov
	return 0; // 0x5fd Return
	
Label_1529:
	var_562_bool = 1; // 0x5f9 MovB
}


func_2539(var_317_bool)
{
	var_319_int = 0; var_320_string = ""; // 0x9ec PushV
	var_320_string = "oob1Eva1"; // 0x9ed MovS
	func_2201(var_319_int, var_320_string); // 0x9ee NEW_2
	var_323_int = 0; // 0x9f0 PushI
	var_324_bool = var_319_int == var_323_int; // 0x9f1 Eq
	if(var_324_bool == 0) goto Label_2549; // 0x9f2 JumpB
	var_317_bool = 1; // 0x9f3 MovB
	return 0; // 0x9f4 Return
	
Label_2549:
	var_317_bool = 0; // 0x9f5 MovB
	return 0; // 0x9f6 Return
}


func_2285(var_53_float)
{
	var_54_object = Obj(); var_55_object = Obj(); // 0x8ed PushV
	CreateFloatVector(var_55_object); // 0x8ee Func
	add(var_53_float); // 0x8f0 ObjFunc
	var_56_int = 16; // 0x8f2 PushI
	SendWorldWndMessage(var_56_int, var_55_object); // 0x8f3 Func
	return 2; // 0x8f5 Return
}


func_242(var_0_object, var_277_int, var_278_object)
{
	var_280_object = Obj(); var_281_bool = 0; var_282_int = 0; var_283_bool = 0; var_284_object = Obj(); var_285_bool = 0; var_286_int = 0; var_287_bool = 0; // 0xf2 PushV
	var_0_object = var_278_object; // 0xf3 TMov
	var_288_bool = 0; var_289_object = Obj(); var_290_float = 0; // 0xf4 PushV
	var_289_object = var_278_object; // 0xf5 Mov
	var_290_float = 70.0; // 0xf6 MovF
	func_1898(var_289_object, var_290_float); // 0xf7 NEW_2
	var_291_bool = var_288_bool == 0; // 0xf9 Not
	if(var_291_bool == 0) goto Label_253; // 0xfa JumpB
	var_277_int = -2; // 0xfb MovI
	return 8; // 0xfc Return
	
Label_253:
	CreateDialog(var_284_object); // 0xfd Func
	var_292_int = 0; // 0xff PushV
	func_2361(var_292_int); // 0x100 NEW_2
	SetNPCName(var_292_int); // 0x102 ObjFunc
	var_293_int = 0; // 0x104 PushV
	func_2359(var_293_int); // 0x105 NEW_2
	SetNPCDescription(var_293_int); // 0x107 ObjFunc
	var_294_string = ""; // 0x109 PushV
	func_2363(var_294_string); // 0x10a NEW_2
	SetPhoto(var_294_string); // 0x10c ObjFunc
	var_295_string = ""; // 0x10e PushV
	func_2365(var_295_string); // 0x10f NEW_2
	SetPhoto2(var_295_string); // 0x111 ObjFunc
	var_296_int = 0; // 0x113 PushV
	func_2664(var_296_int); // 0x114 NEW_2
	SetPlayerName(var_296_int); // 0x116 ObjFunc
	var_286_int = -1; // 0x118 MovI
	IsOverrideActive(var_285_bool); // 0x119 Func
	var_297_bool = var_285_bool; // 0x11b Push
	if(var_297_bool == 0) goto Label_287; // 0x11c JumpB
	var_277_int = -2; // 0x11d MovI
	return 8; // 0x11e Return
	
Label_287:
	DoDialog(var_284_object); // 0x11f Func
	var_298_bool = 0; var_299_object = Obj(); // 0x121 PushV
	var_300_object = Obj(); // 0x122 PushV
	func_2174(var_300_object); // 0x123 NEW_2
	var_299_object = var_300_object; // 0x124 Mov
	func_1983(var_298_bool, var_299_object); // 0x126 NEW_2
	var_301_object = Obj(); var_302_object = Obj(); // 0x128 PushV
	var_301_object = var_278_object; // 0x129 Mov
	var_302_object = var_284_object; // 0x12a Mov
	TaskCall(3); // 0x12b TaskCall
	func_323(var_303_object, var_304_object, var_305_string, var_306_bool, var_301_object, var_302_object); // 0x12c NEW_2
	TaskReturn(); // 0x12d TaskReturn
	IsDialogEnd(var_287_bool); // 0x12f ObjFunc
	
Label_305:
	var_389_bool = var_287_bool == 0; // 0x131 Not
	if(var_389_bool == 0) goto Label_312; // 0x132 JumpB
	sync(); // 0x133 Func
	IsDialogEnd(var_287_bool); // 0x135 ObjFunc
	goto Label_305; // 0x137 Jump
	
Label_312:
	var_390_object = Obj(); // 0x138 PushV
	var_390_object = var_278_object; // 0x139 Mov
	func_1966(); // 0x13a NEW_2
	StopDialog(var_284_object); // 0x13c Func
	GetReturnValue(var_286_int); // 0x13e ObjFunc
	var_277_int = var_286_int; // 0x140 Mov
	return 8; // 0x141 Return
}


func_2295(var_59_bool, var_60_string, var_61_string)
{
	var_62_object = Obj(); var_63_object = Obj(); // 0x8f7 PushV
	FindActor(var_63_object, var_60_string); // 0x8f8 Func
	var_64_bool = var_63_object == 0; // 0x8fa NullEq
	if(var_64_bool == 0) goto Label_2302; // 0x8fb JumpB
	var_59_bool = 0; // 0x8fc MovB
	return 2; // 0x8fd Return
	
Label_2302:
	Trigger(var_63_object, var_61_string); // 0x8fe Func
	var_59_bool = 1; // 0x900 MovB
	return 2; // 0x901 Return
}


func_2041(var_131_bool)
{
	var_133_string = ""; var_134_int = 0; var_135_bool = 0; var_136_int = 0; var_137_string = ""; var_138_string = ""; var_139_int = 0; var_140_bool = 0; var_141_int = 0; var_142_string = ""; // 0x7f9 PushV
	var_138_string = "c"; // 0x7fa MovS
	var_139_int = 0; // 0x7fb MovI
	
Label_2044:
	var_143_int = 1; // 0x7fc PushI
	if(var_143_int == 0) goto Label_2057; // 0x7fd JumpB
	var_144_int = 1; // 0x7fe PushI
	var_145_int = var_139_int + var_144_int; // 0x7ff Add
	var_146_int = var_138_string + var_145_int; // 0x800 Add
	HasProperty(var_146_int, var_140_bool); // 0x801 ObjFunc
	var_147_bool = var_140_bool == 0; // 0x803 Not
	if(var_147_bool == 0) goto Label_2054; // 0x804 JumpB
	goto Label_2057; // 0x805 Jump
	
Label_2057:
	var_148_bool = var_139_int == 0; // 0x809 Not
	if(var_148_bool == 0) goto Label_2061; // 0x80a JumpB
	var_131_bool = 0; // 0x80b MovB
	return 10; // 0x80c Return
	
Label_2061:
	var_141_int = 0; // 0x80d MovI
	var_149_int = 1; // 0x80e PushI
	var_150_bool = var_139_int > var_149_int; // 0x80f GT
	if(var_150_bool == 0) goto Label_2067; // 0x810 JumpB
	irand(var_141_int, var_139_int); // 0x811 Func
	
Label_2067:
	var_151_int = 1; // 0x813 PushI
	var_152_int = var_141_int + var_151_int; // 0x814 Add
	var_153_int = var_138_string + var_152_int; // 0x815 Add
	GetProperty(var_153_int, var_142_string); // 0x816 ObjFunc
	var_154_bool = 0; var_155_string = ""; // 0x818 PushV
	var_155_string = var_142_string; // 0x819 Mov
	func_2152(var_154_bool, var_155_string); // 0x81a NEW_2
	var_131_bool = var_154_bool; // 0x81b Mov
	return 10; // 0x81d Return
	
Label_2054:
	var_160_int = 1; // 0x806 PushI
	var_139_int = var_139_int + var_160_int; // 0x807 Add2
	goto Label_2044; // 0x808 Jump
}


