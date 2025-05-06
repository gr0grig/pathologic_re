task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_cvector)
{
	var_28_int = 1; // 0xa7 PushI
	if(var_28_int == 0) goto Label_289; // 0xa8 JumpB
	func_2242(); // 0xaa NEW_2
	var_30_int = 20612; // 0xac PushI
	var_31_bool = var_27_cvector == var_30_int; // 0xad Eq
	if(var_31_bool == 0) goto Label_180; // 0xae JumpB
	var_32_object = Obj(); var_33_object = Obj(); // 0xaf PushV
	var_32_object = var_1_object; // 0xb0 MovT
	var_33_object = var_0_object; // 0xb1 MovT
	func_2450(); // 0xb2 NEW_2
	
Label_180:
	var_36_int = 19387; // 0xb4 PushI
	var_37_bool = var_26_bool == var_36_int; // 0xb5 Eq
	if(var_37_bool == 0) goto Label_208; // 0xb6 JumpB
	var_38_string = ""; // 0xb7 PushV
	var_38_string = "Fear"; // 0xb8 MovS
	func_144(var_27_cvector, var_38_string); // 0xb9 NEW_2
	var_55_int = 518278; // 0xbb PushI
	SetMessage(var_55_int); // 0xbc TObjFunc
	ClearReplies(); // 0xbe TObjFunc
	var_56_bool = 0; var_57_object = Obj(); // 0xc0 PushV
	var_57_object = var_1_object; // 0xc1 MovT
	func_2632(var_57_object); // 0xc2 NEW_2
	if(var_56_bool == 0) goto Label_202; // 0xc4 JumpB
	var_64_int = 519444; // 0xc5 PushI
	var_65_int = 20613; // 0xc6 PushI
	var_66_int = 20612; // 0xc7 PushI
	AddReply(var_64_int, var_65_int, var_66_int); // 0xc8 TObjFunc
	
Label_202:
	var_67_int = 518279; // 0xca PushI
	var_68_int = -1; // 0xcb PushI
	var_69_int = 19388; // 0xcc PushI
	AddReply(var_67_int, var_68_int, var_69_int); // 0xcd TObjFunc
	return 0; // 0xcf Return
	
Label_208:
	var_70_int = 20613; // 0xd0 PushI
	var_71_bool = var_26_bool == var_70_int; // 0xd1 Eq
	if(var_71_bool == 0) goto Label_231; // 0xd2 JumpB
	var_72_string = ""; // 0xd3 PushV
	var_72_string = "Love"; // 0xd4 MovS
	func_144(var_27_cvector, var_72_string); // 0xd5 NEW_2
	var_73_int = 519445; // 0xd7 PushI
	SetMessage(var_73_int); // 0xd8 TObjFunc
	ClearReplies(); // 0xda TObjFunc
	var_74_int = 519446; // 0xdc PushI
	var_75_int = 20615; // 0xdd PushI
	var_76_int = 20614; // 0xde PushI
	AddReply(var_74_int, var_75_int, var_76_int); // 0xdf TObjFunc
	var_77_int = 519450; // 0xe1 PushI
	var_78_int = 20620; // 0xe2 PushI
	var_79_int = 20618; // 0xe3 PushI
	AddReply(var_77_int, var_78_int, var_79_int); // 0xe4 TObjFunc
	return 0; // 0xe6 Return
	
Label_231:
	var_80_int = 20615; // 0xe7 PushI
	var_81_bool = var_26_bool == var_80_int; // 0xe8 Eq
	if(var_81_bool == 0) goto Label_254; // 0xe9 JumpB
	var_82_string = ""; // 0xea PushV
	var_82_string = "Love"; // 0xeb MovS
	func_144(var_27_cvector, var_82_string); // 0xec NEW_2
	var_83_int = 519447; // 0xee PushI
	SetMessage(var_83_int); // 0xef TObjFunc
	ClearReplies(); // 0xf1 TObjFunc
	var_84_int = 519451; // 0xf3 PushI
	var_85_int = 20620; // 0xf4 PushI
	var_86_int = 20619; // 0xf5 PushI
	AddReply(var_84_int, var_85_int, var_86_int); // 0xf6 TObjFunc
	var_87_int = 519453; // 0xf8 PushI
	var_88_int = 20620; // 0xf9 PushI
	var_89_int = 20622; // 0xfa PushI
	AddReply(var_87_int, var_88_int, var_89_int); // 0xfb TObjFunc
	return 0; // 0xfd Return
	
Label_254:
	var_90_int = 20620; // 0xfe PushI
	var_91_bool = var_26_bool == var_90_int; // 0xff Eq
	if(var_91_bool == 0) goto Label_277; // 0x100 JumpB
	var_92_string = ""; // 0x101 PushV
	var_92_string = "Fear"; // 0x102 MovS
	func_144(var_27_cvector, var_92_string); // 0x103 NEW_2
	var_93_int = 519452; // 0x105 PushI
	SetMessage(var_93_int); // 0x106 TObjFunc
	ClearReplies(); // 0x108 TObjFunc
	var_94_int = 519448; // 0x10a PushI
	var_95_int = -1; // 0x10b PushI
	var_96_int = 20616; // 0x10c PushI
	AddReply(var_94_int, var_95_int, var_96_int); // 0x10d TObjFunc
	var_97_int = 519449; // 0x10f PushI
	var_98_int = -1; // 0x110 PushI
	var_99_int = 20617; // 0x111 PushI
	AddReply(var_97_int, var_98_int, var_99_int); // 0x112 TObjFunc
	return 0; // 0x114 Return
	
Label_277:
	var_3_string = 1; // 0x115 TMovB
	var_100_bool = 0; // 0x116 PushV
	func_2442(var_100_bool); // 0x117 NEW_2
	if(var_100_bool == 0) goto Label_285; // 0x119 JumpB
	lshStopAnimation(); // 0x11a Func
	goto Label_287; // 0x11c Jump
	
Label_287:
	return 0; // 0x11f Return
	
Label_285:
	StopAnimation(); // 0x11d Func
	
Label_289:
	return 0; // 0x121 Return
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_cvector)
{
	var_28_int = 1; // 0x200 PushI
	if(var_28_int == 0) goto Label_754; // 0x201 JumpB
	func_2242(); // 0x203 NEW_2
	var_30_int = 21396; // 0x205 PushI
	var_31_bool = var_27_cvector == var_30_int; // 0x206 Eq
	if(var_31_bool == 0) goto Label_525; // 0x207 JumpB
	var_32_object = Obj(); var_33_object = Obj(); // 0x208 PushV
	var_32_object = var_1_object; // 0x209 MovT
	var_33_object = var_0_object; // 0x20a MovT
	func_2444(); // 0x20b NEW_2
	
Label_525:
	var_36_int = 21403; // 0x20d PushI
	var_37_bool = var_27_cvector == var_36_int; // 0x20e Eq
	if(var_37_bool == 0) goto Label_533; // 0x20f JumpB
	var_38_object = Obj(); var_39_object = Obj(); // 0x210 PushV
	var_38_object = var_1_object; // 0x211 MovT
	var_39_object = var_0_object; // 0x212 MovT
	func_2488(); // 0x213 NEW_2
	
Label_533:
	var_42_int = 21405; // 0x215 PushI
	var_43_bool = var_27_cvector == var_42_int; // 0x216 Eq
	if(var_43_bool == 0) goto Label_541; // 0x217 JumpB
	var_44_object = Obj(); var_45_object = Obj(); // 0x218 PushV
	var_44_object = var_1_object; // 0x219 MovT
	var_45_object = var_0_object; // 0x21a MovT
	func_2527(var_45_object); // 0x21b NEW_2
	
Label_541:
	var_84_int = 26115; // 0x21d PushI
	var_85_bool = var_27_cvector == var_84_int; // 0x21e Eq
	if(var_85_bool == 0) goto Label_559; // 0x21f JumpB
	var_86_object = Obj(); var_87_object = Obj(); // 0x220 PushV
	var_86_object = var_1_object; // 0x221 MovT
	var_87_object = var_0_object; // 0x222 MovT
	func_2494(); // 0x223 NEW_2
	var_104_object = Obj(); var_105_object = Obj(); // 0x225 PushV
	var_104_object = var_1_object; // 0x226 MovT
	var_105_object = var_0_object; // 0x227 MovT
	func_2534(); // 0x228 NEW_2
	var_108_object = Obj(); var_109_object = Obj(); // 0x22a PushV
	var_108_object = var_1_object; // 0x22b MovT
	var_109_object = var_0_object; // 0x22c MovT
	func_2481(var_109_object); // 0x22d NEW_2
	
Label_559:
	var_113_int = 21406; // 0x22f PushI
	var_114_bool = var_27_cvector == var_113_int; // 0x230 Eq
	if(var_114_bool == 0) goto Label_572; // 0x231 JumpB
	var_115_object = Obj(); var_116_object = Obj(); // 0x232 PushV
	var_115_object = var_1_object; // 0x233 MovT
	var_116_object = var_0_object; // 0x234 MovT
	func_2494(); // 0x235 NEW_2
	var_117_object = Obj(); var_118_object = Obj(); // 0x237 PushV
	var_117_object = var_1_object; // 0x238 MovT
	var_118_object = var_0_object; // 0x239 MovT
	func_2534(); // 0x23a NEW_2
	
Label_572:
	var_119_int = 21395; // 0x23c PushI
	var_120_bool = var_26_bool == var_119_int; // 0x23d Eq
	if(var_120_bool == 0) goto Label_655; // 0x23e JumpB
	var_121_string = ""; // 0x23f PushV
	var_121_string = "Fear"; // 0x240 MovS
	func_489(var_27_cvector, var_121_string); // 0x241 NEW_2
	var_138_int = 520203; // 0x243 PushI
	SetMessage(var_138_int); // 0x244 TObjFunc
	ClearReplies(); // 0x246 TObjFunc
	var_139_bool = 0; var_140_object = Obj(); // 0x248 PushV
	var_140_object = var_1_object; // 0x249 MovT
	func_2620(var_140_object); // 0x24a NEW_2
	if(var_139_bool == 0) goto Label_594; // 0x24c JumpB
	var_147_int = 520204; // 0x24d PushI
	var_148_int = 21397; // 0x24e PushI
	var_149_int = 21396; // 0x24f PushI
	AddReply(var_147_int, var_148_int, var_149_int); // 0x250 TObjFunc
	
Label_594:
	var_150_bool = 0; // 0x252 PushV
	var_150_bool = 1; // 0x253 MovB
	var_151_bool = 0; // 0x254 PushV
	var_151_bool = 0; // 0x255 MovB
	var_152_bool = 0; // 0x256 PushV
	var_152_bool = 0; // 0x257 MovB
	var_153_bool = 0; var_154_object = Obj(); // 0x258 PushV
	var_154_object = var_1_object; // 0x259 MovT
	func_2576(var_154_object); // 0x25a NEW_2
	if(var_153_bool == 0) goto Label_611; // 0x25c JumpB
	var_159_bool = 0; var_160_object = Obj(); // 0x25d PushV
	var_160_object = var_1_object; // 0x25e MovT
	func_2610(var_159_bool, var_160_object); // 0x25f NEW_2
	if(var_159_bool == 0) goto Label_611; // 0x261 JumpB
	var_152_bool = 1; // 0x262 MovB
	
Label_611:
	if(var_152_bool == 0) goto Label_618; // 0x263 JumpB
	var_174_bool = 0; var_175_object = Obj(); // 0x264 PushV
	var_175_object = var_1_object; // 0x265 MovT
	func_2588(var_175_object); // 0x266 NEW_2
	if(var_174_bool == 0) goto Label_618; // 0x268 JumpB
	var_151_bool = 1; // 0x269 MovB
	
Label_618:
	if(var_151_bool == 0) goto Label_643; // 0x26a JumpB
	var_180_bool = 0; // 0x26b PushV
	var_180_bool = 0; // 0x26c MovB
	var_181_bool = 0; // 0x26d PushV
	var_181_bool = 0; // 0x26e MovB
	var_182_bool = 0; var_183_object = Obj(); // 0x26f PushV
	var_183_object = var_1_object; // 0x270 MovT
	func_2600(var_182_bool, var_183_object); // 0x271 NEW_2
	if(var_182_bool == 0) goto Label_634; // 0x273 JumpB
	var_193_bool = 0; var_194_object = Obj(); // 0x274 PushV
	var_194_object = var_1_object; // 0x275 MovT
	func_2576(var_194_object); // 0x276 NEW_2
	if(var_193_bool == 0) goto Label_634; // 0x278 JumpB
	var_181_bool = 1; // 0x279 MovB
	
Label_634:
	if(var_181_bool == 0) goto Label_641; // 0x27a JumpB
	var_195_bool = 0; var_196_object = Obj(); // 0x27b PushV
	var_196_object = var_1_object; // 0x27c MovT
	func_2588(var_196_object); // 0x27d NEW_2
	if(var_195_bool == 0) goto Label_641; // 0x27f JumpB
	var_180_bool = 1; // 0x280 MovB
	
Label_641:
	if(var_180_bool == 0) goto Label_643; // 0x281 JumpB
	var_150_bool = 0; // 0x282 MovB
	
Label_643:
	if(var_150_bool == 0) goto Label_649; // 0x283 JumpB
	var_197_int = 520211; // 0x284 PushI
	var_198_int = 21404; // 0x285 PushI
	var_199_int = 21403; // 0x286 PushI
	AddReply(var_197_int, var_198_int, var_199_int); // 0x287 TObjFunc
	
Label_649:
	var_200_int = 520215; // 0x289 PushI
	var_201_int = -1; // 0x28a PushI
	var_202_int = 21407; // 0x28b PushI
	AddReply(var_200_int, var_201_int, var_202_int); // 0x28c TObjFunc
	return 0; // 0x28e Return
	
Label_655:
	var_203_int = 21404; // 0x28f PushI
	var_204_bool = var_26_bool == var_203_int; // 0x290 Eq
	if(var_204_bool == 0) goto Label_678; // 0x291 JumpB
	var_205_string = ""; // 0x292 PushV
	var_205_string = "Fear"; // 0x293 MovS
	func_489(var_27_cvector, var_205_string); // 0x294 NEW_2
	var_206_int = 520212; // 0x296 PushI
	SetMessage(var_206_int); // 0x297 TObjFunc
	ClearReplies(); // 0x299 TObjFunc
	var_207_int = 520213; // 0x29b PushI
	var_208_int = 26114; // 0x29c PushI
	var_209_int = 21405; // 0x29d PushI
	AddReply(var_207_int, var_208_int, var_209_int); // 0x29e TObjFunc
	var_210_int = 520214; // 0x2a0 PushI
	var_211_int = -1; // 0x2a1 PushI
	var_212_int = 21406; // 0x2a2 PushI
	AddReply(var_210_int, var_211_int, var_212_int); // 0x2a3 TObjFunc
	return 0; // 0x2a5 Return
	
Label_678:
	var_213_int = 26114; // 0x2a6 PushI
	var_214_bool = var_26_bool == var_213_int; // 0x2a7 Eq
	if(var_214_bool == 0) goto Label_696; // 0x2a8 JumpB
	var_215_string = ""; // 0x2a9 PushV
	var_215_string = "Fear"; // 0x2aa MovS
	func_489(var_27_cvector, var_215_string); // 0x2ab NEW_2
	var_216_int = 524804; // 0x2ad PushI
	SetMessage(var_216_int); // 0x2ae TObjFunc
	ClearReplies(); // 0x2b0 TObjFunc
	var_217_int = 524805; // 0x2b2 PushI
	var_218_int = -1; // 0x2b3 PushI
	var_219_int = 26115; // 0x2b4 PushI
	AddReply(var_217_int, var_218_int, var_219_int); // 0x2b5 TObjFunc
	return 0; // 0x2b7 Return
	
Label_696:
	var_220_int = 21397; // 0x2b8 PushI
	var_221_bool = var_26_bool == var_220_int; // 0x2b9 Eq
	if(var_221_bool == 0) goto Label_719; // 0x2ba JumpB
	var_222_string = ""; // 0x2bb PushV
	var_222_string = "Fear"; // 0x2bc MovS
	func_489(var_27_cvector, var_222_string); // 0x2bd NEW_2
	var_223_int = 520205; // 0x2bf PushI
	SetMessage(var_223_int); // 0x2c0 TObjFunc
	ClearReplies(); // 0x2c2 TObjFunc
	var_224_int = 520206; // 0x2c4 PushI
	var_225_int = 21399; // 0x2c5 PushI
	var_226_int = 21398; // 0x2c6 PushI
	AddReply(var_224_int, var_225_int, var_226_int); // 0x2c7 TObjFunc
	var_227_int = 520210; // 0x2c9 PushI
	var_228_int = -1; // 0x2ca PushI
	var_229_int = 21402; // 0x2cb PushI
	AddReply(var_227_int, var_228_int, var_229_int); // 0x2cc TObjFunc
	return 0; // 0x2ce Return
	
Label_719:
	var_230_int = 21399; // 0x2cf PushI
	var_231_bool = var_26_bool == var_230_int; // 0x2d0 Eq
	if(var_231_bool == 0) goto Label_742; // 0x2d1 JumpB
	var_232_string = ""; // 0x2d2 PushV
	var_232_string = "Fear"; // 0x2d3 MovS
	func_489(var_27_cvector, var_232_string); // 0x2d4 NEW_2
	var_233_int = 520207; // 0x2d6 PushI
	SetMessage(var_233_int); // 0x2d7 TObjFunc
	ClearReplies(); // 0x2d9 TObjFunc
	var_234_int = 520208; // 0x2db PushI
	var_235_int = -1; // 0x2dc PushI
	var_236_int = 21400; // 0x2dd PushI
	AddReply(var_234_int, var_235_int, var_236_int); // 0x2de TObjFunc
	var_237_int = 520209; // 0x2e0 PushI
	var_238_int = -1; // 0x2e1 PushI
	var_239_int = 21401; // 0x2e2 PushI
	AddReply(var_237_int, var_238_int, var_239_int); // 0x2e3 TObjFunc
	return 0; // 0x2e5 Return
	
Label_742:
	var_3_string = 1; // 0x2e6 TMovB
	var_240_bool = 0; // 0x2e7 PushV
	func_2442(var_240_bool); // 0x2e8 NEW_2
	if(var_240_bool == 0) goto Label_750; // 0x2ea JumpB
	lshStopAnimation(); // 0x2eb Func
	goto Label_752; // 0x2ed Jump
	
Label_752:
	return 0; // 0x2f0 Return
	
Label_750:
	StopAnimation(); // 0x2ee Func
	
Label_754:
	return 0; // 0x2f2 Return
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_cvector)
{
	var_28_int = 1; // 0x395 PushI
	if(var_28_int == 0) goto Label_1003; // 0x396 JumpB
	func_2242(); // 0x398 NEW_2
	var_30_int = 21927; // 0x39a PushI
	var_31_bool = var_26_bool == var_30_int; // 0x39b Eq
	if(var_31_bool == 0) goto Label_945; // 0x39c JumpB
	var_32_string = ""; // 0x39d PushV
	var_32_string = "Fear"; // 0x39e MovS
	func_894(var_27_cvector, var_32_string); // 0x39f NEW_2
	var_49_int = 520716; // 0x3a1 PushI
	SetMessage(var_49_int); // 0x3a2 TObjFunc
	ClearReplies(); // 0x3a4 TObjFunc
	var_50_int = 520717; // 0x3a6 PushI
	var_51_int = 21929; // 0x3a7 PushI
	var_52_int = 21928; // 0x3a8 PushI
	AddReply(var_50_int, var_51_int, var_52_int); // 0x3a9 TObjFunc
	var_53_int = 520721; // 0x3ab PushI
	var_54_int = 21933; // 0x3ac PushI
	var_55_int = 21932; // 0x3ad PushI
	AddReply(var_53_int, var_54_int, var_55_int); // 0x3ae TObjFunc
	return 0; // 0x3b0 Return
	
Label_945:
	var_56_int = 21933; // 0x3b1 PushI
	var_57_bool = var_26_bool == var_56_int; // 0x3b2 Eq
	if(var_57_bool == 0) goto Label_968; // 0x3b3 JumpB
	var_58_string = ""; // 0x3b4 PushV
	var_58_string = "Fear"; // 0x3b5 MovS
	func_894(var_27_cvector, var_58_string); // 0x3b6 NEW_2
	var_59_int = 520722; // 0x3b8 PushI
	SetMessage(var_59_int); // 0x3b9 TObjFunc
	ClearReplies(); // 0x3bb TObjFunc
	var_60_int = 520723; // 0x3bd PushI
	var_61_int = -1; // 0x3be PushI
	var_62_int = 21934; // 0x3bf PushI
	AddReply(var_60_int, var_61_int, var_62_int); // 0x3c0 TObjFunc
	var_63_int = 520724; // 0x3c2 PushI
	var_64_int = -1; // 0x3c3 PushI
	var_65_int = 21935; // 0x3c4 PushI
	AddReply(var_63_int, var_64_int, var_65_int); // 0x3c5 TObjFunc
	return 0; // 0x3c7 Return
	
Label_968:
	var_66_int = 21929; // 0x3c8 PushI
	var_67_bool = var_26_bool == var_66_int; // 0x3c9 Eq
	if(var_67_bool == 0) goto Label_991; // 0x3ca JumpB
	var_68_string = ""; // 0x3cb PushV
	var_68_string = "Fear"; // 0x3cc MovS
	func_894(var_27_cvector, var_68_string); // 0x3cd NEW_2
	var_69_int = 520718; // 0x3cf PushI
	SetMessage(var_69_int); // 0x3d0 TObjFunc
	ClearReplies(); // 0x3d2 TObjFunc
	var_70_int = 520719; // 0x3d4 PushI
	var_71_int = -1; // 0x3d5 PushI
	var_72_int = 21930; // 0x3d6 PushI
	AddReply(var_70_int, var_71_int, var_72_int); // 0x3d7 TObjFunc
	var_73_int = 520720; // 0x3d9 PushI
	var_74_int = -1; // 0x3da PushI
	var_75_int = 21931; // 0x3db PushI
	AddReply(var_73_int, var_74_int, var_75_int); // 0x3dc TObjFunc
	return 0; // 0x3de Return
	
Label_991:
	var_3_string = 1; // 0x3df TMovB
	var_76_bool = 0; // 0x3e0 PushV
	func_2442(var_76_bool); // 0x3e1 NEW_2
	if(var_76_bool == 0) goto Label_999; // 0x3e3 JumpB
	lshStopAnimation(); // 0x3e4 Func
	goto Label_1001; // 0x3e6 Jump
	
Label_1001:
	return 0; // 0x3e9 Return
	
Label_999:
	StopAnimation(); // 0x3e7 Func
	
Label_1003:
	return 0; // 0x3eb Return
}


task_7_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_cvector)
{
	var_28_int = 1; // 0x4a6 PushI
	if(var_28_int == 0) goto Label_1445; // 0x4a7 JumpB
	func_2242(); // 0x4a9 NEW_2
	var_30_int = 23411; // 0x4ab PushI
	var_31_bool = var_27_cvector == var_30_int; // 0x4ac Eq
	if(var_31_bool == 0) goto Label_1203; // 0x4ad JumpB
	var_32_object = Obj(); var_33_object = Obj(); // 0x4ae PushV
	var_32_object = var_1_object; // 0x4af MovT
	var_33_object = var_0_object; // 0x4b0 MovT
	func_2462(); // 0x4b1 NEW_2
	
Label_1203:
	var_68_int = 23412; // 0x4b3 PushI
	var_69_bool = var_27_cvector == var_68_int; // 0x4b4 Eq
	if(var_69_bool == 0) goto Label_1211; // 0x4b5 JumpB
	var_70_object = Obj(); var_71_object = Obj(); // 0x4b6 PushV
	var_70_object = var_1_object; // 0x4b7 MovT
	var_71_object = var_0_object; // 0x4b8 MovT
	func_2462(); // 0x4b9 NEW_2
	
Label_1211:
	var_72_int = 22716; // 0x4bb PushI
	var_73_bool = var_27_cvector == var_72_int; // 0x4bc Eq
	if(var_73_bool == 0) goto Label_1219; // 0x4bd JumpB
	var_74_object = Obj(); var_75_object = Obj(); // 0x4be PushV
	var_74_object = var_1_object; // 0x4bf MovT
	var_75_object = var_0_object; // 0x4c0 MovT
	func_2462(); // 0x4c1 NEW_2
	
Label_1219:
	var_76_int = 22776; // 0x4c3 PushI
	var_77_bool = var_27_cvector == var_76_int; // 0x4c4 Eq
	if(var_77_bool == 0) goto Label_1227; // 0x4c5 JumpB
	var_78_object = Obj(); var_79_object = Obj(); // 0x4c6 PushV
	var_78_object = var_1_object; // 0x4c7 MovT
	var_79_object = var_0_object; // 0x4c8 MovT
	func_2456(); // 0x4c9 NEW_2
	
Label_1227:
	var_82_int = 22778; // 0x4cb PushI
	var_83_bool = var_27_cvector == var_82_int; // 0x4cc Eq
	if(var_83_bool == 0) goto Label_1240; // 0x4cd JumpB
	var_84_object = Obj(); var_85_object = Obj(); // 0x4ce PushV
	var_84_object = var_1_object; // 0x4cf MovT
	var_85_object = var_0_object; // 0x4d0 MovT
	func_2510(); // 0x4d1 NEW_2
	var_88_object = Obj(); var_89_object = Obj(); // 0x4d3 PushV
	var_88_object = var_1_object; // 0x4d4 MovT
	var_89_object = var_0_object; // 0x4d5 MovT
	func_2516(var_89_object); // 0x4d6 NEW_2
	
Label_1240:
	var_112_int = 22713; // 0x4d8 PushI
	var_113_bool = var_26_bool == var_112_int; // 0x4d9 Eq
	if(var_113_bool == 0) goto Label_1287; // 0x4da JumpB
	var_114_string = ""; // 0x4db PushV
	var_114_string = "Neutral"; // 0x4dc MovS
	func_1167(var_27_cvector, var_114_string); // 0x4dd NEW_2
	var_131_int = 521552; // 0x4df PushI
	SetMessage(var_131_int); // 0x4e0 TObjFunc
	ClearReplies(); // 0x4e2 TObjFunc
	var_132_bool = 0; var_133_object = Obj(); // 0x4e4 PushV
	var_133_object = var_1_object; // 0x4e5 MovT
	func_2540(var_133_object); // 0x4e6 NEW_2
	if(var_132_bool == 0) goto Label_1262; // 0x4e8 JumpB
	var_140_int = 521553; // 0x4e9 PushI
	var_141_int = 22715; // 0x4ea PushI
	var_142_int = 22714; // 0x4eb PushI
	AddReply(var_140_int, var_141_int, var_142_int); // 0x4ec TObjFunc
	
Label_1262:
	var_143_bool = 0; // 0x4ee PushV
	var_143_bool = 0; // 0x4ef MovB
	var_144_bool = 0; var_145_object = Obj(); // 0x4f0 PushV
	var_145_object = var_1_object; // 0x4f1 MovT
	func_2552(var_145_object); // 0x4f2 NEW_2
	if(var_144_bool == 0) goto Label_1275; // 0x4f4 JumpB
	var_150_bool = 0; var_151_object = Obj(); // 0x4f5 PushV
	var_151_object = var_1_object; // 0x4f6 MovT
	func_2564(var_151_object); // 0x4f7 NEW_2
	if(var_150_bool == 0) goto Label_1275; // 0x4f9 JumpB
	var_143_bool = 1; // 0x4fa MovB
	
Label_1275:
	if(var_143_bool == 0) goto Label_1281; // 0x4fb JumpB
	var_156_int = 521609; // 0x4fc PushI
	var_157_int = 22777; // 0x4fd PushI
	var_158_int = 22776; // 0x4fe PushI
	AddReply(var_156_int, var_157_int, var_158_int); // 0x4ff TObjFunc
	
Label_1281:
	var_159_int = 521556; // 0x501 PushI
	var_160_int = -1; // 0x502 PushI
	var_161_int = 22717; // 0x503 PushI
	AddReply(var_159_int, var_160_int, var_161_int); // 0x504 TObjFunc
	return 0; // 0x506 Return
	
Label_1287:
	var_162_int = 22777; // 0x507 PushI
	var_163_bool = var_26_bool == var_162_int; // 0x508 Eq
	if(var_163_bool == 0) goto Label_1305; // 0x509 JumpB
	var_164_string = ""; // 0x50a PushV
	var_164_string = "Fear"; // 0x50b MovS
	func_1167(var_27_cvector, var_164_string); // 0x50c NEW_2
	var_165_int = 521610; // 0x50e PushI
	SetMessage(var_165_int); // 0x50f TObjFunc
	ClearReplies(); // 0x511 TObjFunc
	var_166_int = 522261; // 0x513 PushI
	var_167_int = 23414; // 0x514 PushI
	var_168_int = 23413; // 0x515 PushI
	AddReply(var_166_int, var_167_int, var_168_int); // 0x516 TObjFunc
	return 0; // 0x518 Return
	
Label_1305:
	var_169_int = 23414; // 0x519 PushI
	var_170_bool = var_26_bool == var_169_int; // 0x51a Eq
	if(var_170_bool == 0) goto Label_1328; // 0x51b JumpB
	var_171_string = ""; // 0x51c PushV
	var_171_string = "Fear"; // 0x51d MovS
	func_1167(var_27_cvector, var_171_string); // 0x51e NEW_2
	var_172_int = 522262; // 0x520 PushI
	SetMessage(var_172_int); // 0x521 TObjFunc
	ClearReplies(); // 0x523 TObjFunc
	var_173_int = 522263; // 0x525 PushI
	var_174_int = 23418; // 0x526 PushI
	var_175_int = 23415; // 0x527 PushI
	AddReply(var_173_int, var_174_int, var_175_int); // 0x528 TObjFunc
	var_176_int = 522264; // 0x52a PushI
	var_177_int = 23417; // 0x52b PushI
	var_178_int = 23416; // 0x52c PushI
	AddReply(var_176_int, var_177_int, var_178_int); // 0x52d TObjFunc
	return 0; // 0x52f Return
	
Label_1328:
	var_179_int = 23417; // 0x530 PushI
	var_180_bool = var_26_bool == var_179_int; // 0x531 Eq
	if(var_180_bool == 0) goto Label_1351; // 0x532 JumpB
	var_181_string = ""; // 0x533 PushV
	var_181_string = "Love"; // 0x534 MovS
	func_1167(var_27_cvector, var_181_string); // 0x535 NEW_2
	var_182_int = 522265; // 0x537 PushI
	SetMessage(var_182_int); // 0x538 TObjFunc
	ClearReplies(); // 0x53a TObjFunc
	var_183_int = 522269; // 0x53c PushI
	var_184_int = 23418; // 0x53d PushI
	var_185_int = 23421; // 0x53e PushI
	AddReply(var_183_int, var_184_int, var_185_int); // 0x53f TObjFunc
	var_186_int = 522271; // 0x541 PushI
	var_187_int = -1; // 0x542 PushI
	var_188_int = 23423; // 0x543 PushI
	AddReply(var_186_int, var_187_int, var_188_int); // 0x544 TObjFunc
	return 0; // 0x546 Return
	
Label_1351:
	var_189_int = 23418; // 0x547 PushI
	var_190_bool = var_26_bool == var_189_int; // 0x548 Eq
	if(var_190_bool == 0) goto Label_1369; // 0x549 JumpB
	var_191_string = ""; // 0x54a PushV
	var_191_string = "Love"; // 0x54b MovS
	func_1167(var_27_cvector, var_191_string); // 0x54c NEW_2
	var_192_int = 522266; // 0x54e PushI
	SetMessage(var_192_int); // 0x54f TObjFunc
	ClearReplies(); // 0x551 TObjFunc
	var_193_int = 522267; // 0x553 PushI
	var_194_int = 23420; // 0x554 PushI
	var_195_int = 23419; // 0x555 PushI
	AddReply(var_193_int, var_194_int, var_195_int); // 0x556 TObjFunc
	return 0; // 0x558 Return
	
Label_1369:
	var_196_int = 23420; // 0x559 PushI
	var_197_bool = var_26_bool == var_196_int; // 0x55a Eq
	if(var_197_bool == 0) goto Label_1387; // 0x55b JumpB
	var_198_string = ""; // 0x55c PushV
	var_198_string = "Love"; // 0x55d MovS
	func_1167(var_27_cvector, var_198_string); // 0x55e NEW_2
	var_199_int = 522268; // 0x560 PushI
	SetMessage(var_199_int); // 0x561 TObjFunc
	ClearReplies(); // 0x563 TObjFunc
	var_200_int = 521611; // 0x565 PushI
	var_201_int = -1; // 0x566 PushI
	var_202_int = 22778; // 0x567 PushI
	AddReply(var_200_int, var_201_int, var_202_int); // 0x568 TObjFunc
	return 0; // 0x56a Return
	
Label_1387:
	var_203_int = 22715; // 0x56b PushI
	var_204_bool = var_26_bool == var_203_int; // 0x56c Eq
	if(var_204_bool == 0) goto Label_1410; // 0x56d JumpB
	var_205_string = ""; // 0x56e PushV
	var_205_string = "Fear"; // 0x56f MovS
	func_1167(var_27_cvector, var_205_string); // 0x570 NEW_2
	var_206_int = 521554; // 0x572 PushI
	SetMessage(var_206_int); // 0x573 TObjFunc
	ClearReplies(); // 0x575 TObjFunc
	var_207_int = 522257; // 0x577 PushI
	var_208_int = 23410; // 0x578 PushI
	var_209_int = 23409; // 0x579 PushI
	AddReply(var_207_int, var_208_int, var_209_int); // 0x57a TObjFunc
	var_210_int = 521555; // 0x57c PushI
	var_211_int = -1; // 0x57d PushI
	var_212_int = 22716; // 0x57e PushI
	AddReply(var_210_int, var_211_int, var_212_int); // 0x57f TObjFunc
	return 0; // 0x581 Return
	
Label_1410:
	var_213_int = 23410; // 0x582 PushI
	var_214_bool = var_26_bool == var_213_int; // 0x583 Eq
	if(var_214_bool == 0) goto Label_1433; // 0x584 JumpB
	var_215_string = ""; // 0x585 PushV
	var_215_string = "Fear"; // 0x586 MovS
	func_1167(var_27_cvector, var_215_string); // 0x587 NEW_2
	var_216_int = 522258; // 0x589 PushI
	SetMessage(var_216_int); // 0x58a TObjFunc
	ClearReplies(); // 0x58c TObjFunc
	var_217_int = 522259; // 0x58e PushI
	var_218_int = -1; // 0x58f PushI
	var_219_int = 23411; // 0x590 PushI
	AddReply(var_217_int, var_218_int, var_219_int); // 0x591 TObjFunc
	var_220_int = 522260; // 0x593 PushI
	var_221_int = -1; // 0x594 PushI
	var_222_int = 23412; // 0x595 PushI
	AddReply(var_220_int, var_221_int, var_222_int); // 0x596 TObjFunc
	return 0; // 0x598 Return
	
Label_1433:
	var_3_string = 1; // 0x599 TMovB
	var_223_bool = 0; // 0x59a PushV
	func_2442(var_223_bool); // 0x59b NEW_2
	if(var_223_bool == 0) goto Label_1441; // 0x59d JumpB
	lshStopAnimation(); // 0x59e Func
	goto Label_1443; // 0x5a0 Jump
	
Label_1443:
	return 0; // 0x5a3 Return
	
Label_1441:
	StopAnimation(); // 0x5a1 Func
	
Label_1445:
	return 0; // 0x5a5 Return
}


task_9_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_int, var_26_int, var_27_cvector)
{
	var_28_int = 1; // 0x648 PushI
	if(var_28_int == 0) goto Label_1648; // 0x649 JumpB
	func_2242(); // 0x64b NEW_2
	var_30_int = 42560; // 0x64d PushI
	var_31_bool = var_26_int == var_30_int; // 0x64e Eq
	if(var_31_bool == 0) goto Label_1636; // 0x64f JumpB
	var_32_string = ""; // 0x650 PushV
	var_32_string = "Neutral"; // 0x651 MovS
	func_1585(var_27_cvector, var_32_string); // 0x652 NEW_2
	var_49_int = 540551; // 0x654 PushI
	SetMessage(var_49_int); // 0x655 TObjFunc
	ClearReplies(); // 0x657 TObjFunc
	var_50_int = 540552; // 0x659 PushI
	var_51_int = -1; // 0x65a PushI
	var_52_int = 42561; // 0x65b PushI
	AddReply(var_50_int, var_51_int, var_52_int); // 0x65c TObjFunc
	var_53_int = 540795; // 0x65e PushI
	var_54_int = -1; // 0x65f PushI
	var_55_int = 42844; // 0x660 PushI
	AddReply(var_53_int, var_54_int, var_55_int); // 0x661 TObjFunc
	return 0; // 0x663 Return
	
Label_1636:
	var_3_string = 1; // 0x664 TMovB
	var_56_bool = 0; // 0x665 PushV
	func_2442(var_56_bool); // 0x666 NEW_2
	if(var_56_bool == 0) goto Label_1644; // 0x668 JumpB
	lshStopAnimation(); // 0x669 Func
	goto Label_1646; // 0x66b Jump
	
Label_1646:
	return 0; // 0x66e Return
	
Label_1644:
	StopAnimation(); // 0x66c Func
	
Label_1648:
	return 0; // 0x670 Return
}


task_10_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_cvector, var_26_int)
{
	var_27_int = 10; // 0x6bb PushI
	var_28_bool = var_26_int == var_27_int; // 0x6bc Eq
	if(var_28_bool == 0) goto Label_1759; // 0x6bd JumpB
	func_1718(); // 0x6bf NEW_2
	var_30_bool = 0; // 0x6c1 PushV
	var_30_bool = 0; // 0x6c2 MovB
	var_31_bool = 0; // 0x6c3 PushV
	func_1966(var_31_bool); // 0x6c4 NEW_2
	if(var_31_bool == 0) goto Label_1740; // 0x6c6 JumpB
	var_34_bool = 0; // 0x6c7 PushV
	func_1687(var_34_bool); // 0x6c8 NEW_2
	if(var_34_bool == 0) goto Label_1740; // 0x6ca JumpB
	var_30_bool = 1; // 0x6cb MovB
	
Label_1740:
	if(var_30_bool == 0) goto Label_1753; // 0x6cc JumpB
	var_51_bool = 0; // 0x6cd PushV
	func_1667(var_51_bool); // 0x6ce NEW_2
	if(var_51_bool == 0) goto Label_1752; // 0x6d0 JumpB
	var_70_bool = 0; var_71_object = Obj(); // 0x6d1 PushV
	var_72_object = Obj(); // 0x6d2 PushV
	func_2249(var_72_object); // 0x6d3 NEW_2
	var_71_object = var_72_object; // 0x6d4 Mov
	func_2116(var_71_object); // 0x6d6 NEW_2
	
Label_1752:
	goto Label_1759; // 0x6d8 Jump
	
Label_1759:
	return 0; // 0x6df Return
	
Label_1753:
	func_1682(var_26_int); // 0x6da NEW_2
	func_1709(); // 0x6dd NEW_2
}


task_10_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_cvector)
{
	func_1900(); // 0x6e1 NEW_2
	func_1718(); // 0x6e4 NEW_2
	lshStopSpeech(); // 0x6e6 Func
	lshStopAnimation(); // 0x6e8 Func
	StopAsync(); // 0x6ea Func
	Hold(); // 0x6ec Func
	return 0; // 0x6ee Return
}


task_10_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_cvector)
{
	StopGroup0(); // 0x6ef Func
	func_1718(); // 0x6f2 NEW_2
	var_27_string = ""; // 0x6f4 PushV
	var_27_string = "Neutral"; // 0x6f5 MovS
	func_2196(var_27_string); // 0x6f6 NEW_2
	func_1709(); // 0x6f9 NEW_2
	return 0; // 0x6fb Return
}


task_10_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_cvector, var_26_bool)
{
	var_27_bool = var_26_bool; // 0x6fd Push
	if(var_27_bool == 0) goto Label_1795; // 0x6fe JumpB
	func_1709(); // 0x700 NEW_2
	goto Label_1799; // 0x702 Jump
	
Label_1799:
	return 0; // 0x707 Return
	
Label_1795:
	var_33_string = ""; // 0x703 PushV
	var_33_string = "Neutral"; // 0x704 MovS
	func_2196(var_33_string); // 0x705 NEW_2
}


task_10_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_cvector, var_26_object)
{
	var_27_bool = 0; var_28_bool = 0; // 0x708 PushV
	IsOverrideActive(var_28_bool); // 0x709 Func
	var_29_bool = var_28_bool == 0; // 0x70b Not
	if(var_29_bool == 0) goto Label_1828; // 0x70c JumpB
	EventDisable(0); // 0x70d EventDisable
	func_1900(); // 0x70f NEW_2
	var_30_bool = 0; var_31_object = Obj(); // 0x711 PushV
	var_31_object = var_26_object; // 0x712 Mov
	func_1957(var_31_object); // 0x713 NEW_2
	EventEnable(0); // 0x715 EventEnable
	var_44_object = Obj(); // 0x716 PushV
	var_44_object = var_26_object; // 0x717 Mov
	func_2774(var_44_object); // 0x718 NEW_2
	var_593_string = ""; // 0x71a PushV
	var_593_string = "Neutral"; // 0x71b MovS
	func_2196(var_593_string); // 0x71c NEW_2
	func_1718(); // 0x71f NEW_2
	func_1709(); // 0x722 NEW_2
	
Label_1828:
	return 2; // 0x724 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_cvector)
{
	func_1653(var_25_cvector); // 0x672 NEW_2
	return 0; // 0x674 Return
}


func_0(var_0_object, var_395_int, var_396_object)
{
	var_398_object = Obj(); var_399_bool = 0; var_400_int = 0; var_401_bool = 0; var_402_object = Obj(); var_403_bool = 0; var_404_int = 0; var_405_bool = 0; // 0x0 PushV
	var_0_object = var_396_object; // 0x1 TMov
	var_406_bool = 0; var_407_object = Obj(); var_408_float = 0; // 0x2 PushV
	var_407_object = var_396_object; // 0x3 Mov
	var_408_float = 70.0; // 0x4 MovF
	func_1971(var_407_object, var_408_float); // 0x5 NEW_2
	var_409_bool = var_406_bool == 0; // 0x7 Not
	if(var_409_bool == 0) goto Label_11; // 0x8 JumpB
	var_395_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_402_object); // 0xb Func
	var_410_int = 0; // 0xd PushV
	func_2436(var_410_int); // 0xe NEW_2
	SetNPCName(var_410_int); // 0x10 ObjFunc
	var_411_int = 0; // 0x12 PushV
	func_2434(var_411_int); // 0x13 NEW_2
	SetNPCDescription(var_411_int); // 0x15 ObjFunc
	var_412_string = ""; // 0x17 PushV
	func_2438(var_412_string); // 0x18 NEW_2
	SetPhoto(var_412_string); // 0x1a ObjFunc
	var_413_string = ""; // 0x1c PushV
	func_2440(var_413_string); // 0x1d NEW_2
	SetPhoto2(var_413_string); // 0x1f ObjFunc
	var_414_int = 0; // 0x21 PushV
	func_2757(var_414_int); // 0x22 NEW_2
	SetPlayerName(var_414_int); // 0x24 ObjFunc
	var_404_int = -1; // 0x26 MovI
	IsOverrideActive(var_403_bool); // 0x27 Func
	var_415_bool = var_403_bool; // 0x29 Push
	if(var_415_bool == 0) goto Label_45; // 0x2a JumpB
	var_395_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_402_object); // 0x2d Func
	var_416_bool = 0; var_417_object = Obj(); // 0x2f PushV
	var_418_object = Obj(); // 0x30 PushV
	func_2249(var_418_object); // 0x31 NEW_2
	var_417_object = var_418_object; // 0x32 Mov
	func_2058(var_416_bool, var_417_object); // 0x34 NEW_2
	var_419_object = Obj(); var_420_object = Obj(); // 0x36 PushV
	var_419_object = var_396_object; // 0x37 Mov
	var_420_object = var_402_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_421_object, var_422_object, var_423_string, var_424_bool, var_419_object, var_420_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	IsDialogEnd(var_405_bool); // 0x3d ObjFunc
	
Label_63:
	var_455_bool = var_405_bool == 0; // 0x3f Not
	if(var_455_bool == 0) goto Label_70; // 0x40 JumpB
	sync(); // 0x41 Func
	IsDialogEnd(var_405_bool); // 0x43 ObjFunc
	goto Label_63; // 0x45 Jump
	
Label_70:
	var_456_object = Obj(); // 0x46 PushV
	var_456_object = var_396_object; // 0x47 Mov
	func_2040(); // 0x48 NEW_2
	StopDialog(var_402_object); // 0x4a Func
	GetReturnValue(var_404_int); // 0x4c ObjFunc
	var_395_int = var_404_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_2564(var_515_bool)
{
	var_517_int = 0; var_518_string = ""; // 0xa05 PushV
	var_518_string = "b9q01DankoAmmo"; // 0xa06 MovS
	func_2276(var_517_int, var_518_string); // 0xa07 NEW_2
	var_519_int = 0; // 0xa09 PushI
	var_520_bool = var_517_int != var_519_int; // 0xa0a Neq
	if(var_520_bool == 0) goto Label_2574; // 0xa0b JumpB
	var_515_bool = 1; // 0xa0c MovB
	return 0; // 0xa0d Return
	
Label_2574:
	var_515_bool = 0; // 0xa0e MovB
	return 0; // 0xa0f Return
}


func_2312(var_91_object, var_92_string, var_93_int)
{
	var_94_object = Obj(); var_95_object = Obj(); // 0x908 PushV
	CreateInvItem(var_95_object); // 0x909 Func
	SetItemName(var_92_string); // 0x90b ObjFunc
	var_96_object = Obj(); var_97_object = Obj(); var_98_int = 0; // 0x90d PushV
	var_96_object = var_91_object; // 0x90e Mov
	var_97_object = var_95_object; // 0x90f Mov
	var_98_int = var_93_int; // 0x910 Mov
	func_2293(var_97_object, var_98_int); // 0x911 NEW_2
	return 2; // 0x913 Return
}


func_2058(var_121_bool, var_122_object)
{
	var_126_int = 0; var_127_int = 0; var_128_int = 0; var_129_int = 0; // 0x80a PushV
	var_130_string = "voice_common"; // 0x80b PushS
	GetVariable(var_130_string, var_128_int); // 0x80c Func
	var_131_int = var_128_int; // 0x80e Push
	if(var_131_int == 0) goto Label_2096; // 0x80f JumpB
	var_132_bool = 0; var_133_object = Obj(); // 0x810 PushV
	var_133_object = var_122_object; // 0x811 Mov
	func_2116(var_133_object); // 0x812 NEW_2
	var_162_bool = var_132_bool == 0; // 0x814 Not
	if(var_162_bool == 0) goto Label_2078; // 0x815 JumpB
	var_163_bool = 0; var_164_object = Obj(); // 0x816 PushV
	var_164_object = var_122_object; // 0x817 Mov
	func_2153(var_164_object); // 0x818 NEW_2
	var_198_bool = var_163_bool == 0; // 0x81a Not
	if(var_198_bool == 0) goto Label_2078; // 0x81b JumpB
	var_121_bool = 0; // 0x81c MovB
	return 4; // 0x81d Return
	
Label_2078:
	var_199_int = 2; // 0x81e PushI
	irand(var_129_int, var_199_int); // 0x81f Func
	var_200_int = var_129_int; // 0x821 Push
	if(var_200_int == 0) goto Label_2091; // 0x822 JumpB
	var_201_string = "voice_common"; // 0x823 PushS
	var_202_int = 1; // 0x824 PushI
	var_203_int = var_128_int + var_202_int; // 0x825 Add
	var_204_int = 3; // 0x826 PushI
	var_205_int = var_203_int / var_204_int; // 0x827 Mod
	SetVariable(var_201_string, var_205_int); // 0x828 Func
	goto Label_2095; // 0x82a Jump
	
Label_2095:
	goto Label_2114; // 0x82f Jump
	
Label_2114:
	var_121_bool = 1; // 0x842 MovB
	return 4; // 0x843 Return
	
Label_2091:
	var_206_string = "voice_common"; // 0x82b PushS
	var_207_int = 0; // 0x82c PushI
	SetVariable(var_206_string, var_207_int); // 0x82d Func
	
Label_2096:
	var_208_bool = 0; var_209_object = Obj(); // 0x830 PushV
	var_209_object = var_122_object; // 0x831 Mov
	func_2153(var_209_object); // 0x832 NEW_2
	var_210_bool = var_208_bool == 0; // 0x834 Not
	if(var_210_bool == 0) goto Label_2110; // 0x835 JumpB
	var_211_bool = 0; var_212_object = Obj(); // 0x836 PushV
	var_212_object = var_122_object; // 0x837 Mov
	func_2116(var_212_object); // 0x838 NEW_2
	var_213_bool = var_211_bool == 0; // 0x83a Not
	if(var_213_bool == 0) goto Label_2110; // 0x83b JumpB
	var_121_bool = 0; // 0x83c MovB
	return 4; // 0x83d Return
	
Label_2110:
	var_214_string = "voice_common"; // 0x83e PushS
	var_215_int = 1; // 0x83f PushI
	SetVariable(var_214_string, var_215_int); // 0x840 Func
}


func_2576(var_333_bool)
{
	var_335_int = 0; var_336_string = ""; // 0xa11 PushV
	var_336_string = "oob1Eva2"; // 0xa12 MovS
	func_2276(var_335_int, var_336_string); // 0xa13 NEW_2
	var_337_int = 0; // 0xa15 PushI
	var_338_bool = var_335_int == var_337_int; // 0xa16 Eq
	if(var_338_bool == 0) goto Label_2586; // 0xa17 JumpB
	var_333_bool = 1; // 0xa18 MovB
	return 0; // 0xa19 Return
	
Label_2586:
	var_333_bool = 0; // 0xa1a MovB
	return 0; // 0xa1b Return
}


func_2325(var_46_bool, var_47_object, var_48_float)
{
	var_49_bool = var_47_object == 0; // 0x916 Not
	if(var_49_bool == 0) goto Label_2330; // 0x917 JumpB
	var_46_bool = 0; // 0x918 MovB
	return 0; // 0x919 Return
	
Label_2330:
	var_50_int = 0; // 0x91a PushI
	var_51_bool = var_48_float > var_50_int; // 0x91b GT
	if(var_51_bool == 0) goto Label_2337; // 0x91c JumpB
	var_52_int = 8; // 0x91d PushI
	SendWorldWndMessage(var_52_int); // 0x91e Func
	goto Label_2346; // 0x920 Jump
	
Label_2346:
	var_53_float = 0; // 0x92a PushV
	var_53_float = var_48_float; // 0x92b Mov
	func_2360(var_53_float); // 0x92c NEW_2
	var_57_bool = 0; var_58_object = Obj(); var_59_string = ""; var_60_float = 0; var_61_float = 0; var_62_float = 0; // 0x92e PushV
	var_58_object = var_47_object; // 0x92f Mov
	var_59_string = "reputation"; // 0x930 MovS
	var_60_float = var_48_float; // 0x931 Mov
	var_61_float = 0; // 0x932 MovI
	var_62_float = 1; // 0x933 MovI
	func_1925(var_57_bool, var_58_object, var_59_string, var_60_float, var_61_float, var_62_float); // 0x934 NEW_2
	var_46_bool = 1; // 0x936 MovB
	return 0; // 0x937 Return
	
Label_2337:
	var_81_int = 0; // 0x921 PushI
	var_82_bool = var_48_float < var_81_int; // 0x922 LT
	if(var_82_bool == 0) goto Label_2344; // 0x923 JumpB
	var_83_int = 9; // 0x924 PushI
	SendWorldWndMessage(var_83_int); // 0x925 Func
	goto Label_2346; // 0x927 Jump
	
Label_2344:
	var_46_bool = 0; // 0x928 MovB
	return 0; // 0x929 Return
}


func_2040()
{
	var_267_bool = 0; var_268_bool = 0; // 0x7f8 PushV
	var_269_bool = 1; // 0x7f9 PushB
	CameraSwitchToNormal(var_269_bool); // 0x7fa Func
	var_270_bool = 0; // 0x7fc PushV
	func_2442(var_270_bool); // 0x7fd NEW_2
	if(var_270_bool == 0) goto Label_2049; // 0x7ff JumpB
	goto Label_2057; // 0x800 Jump
	
Label_2057:
	return 2; // 0x809 Return
	
Label_2049:
	var_271_string = "head"; // 0x801 PushS
	HasAnimationTrack(var_268_bool, var_271_string); // 0x802 Func
	var_272_bool = var_268_bool; // 0x804 Push
	if(var_272_bool == 0) goto Label_2057; // 0x805 JumpB
	var_273_string = "head"; // 0x806 PushS
	UnlookAsync(var_273_string); // 0x807 Func
}


func_2588(var_354_bool)
{
	var_356_int = 0; var_357_string = ""; // 0xa1d PushV
	var_357_string = "b1q01GrifToldAboutDanko"; // 0xa1e MovS
	func_2276(var_356_int, var_357_string); // 0xa1f NEW_2
	var_358_int = 0; // 0xa21 PushI
	var_359_bool = var_356_int != var_358_int; // 0xa22 Neq
	if(var_359_bool == 0) goto Label_2598; // 0xa23 JumpB
	var_354_bool = 1; // 0xa24 MovB
	return 0; // 0xa25 Return
	
Label_2598:
	var_354_bool = 0; // 0xa26 MovB
	return 0; // 0xa27 Return
}


func_290(var_0_object, var_279_int, var_280_object)
{
	var_282_object = Obj(); var_283_bool = 0; var_284_int = 0; var_285_bool = 0; var_286_object = Obj(); var_287_bool = 0; var_288_int = 0; var_289_bool = 0; // 0x122 PushV
	var_0_object = var_280_object; // 0x123 TMov
	var_290_bool = 0; var_291_object = Obj(); var_292_float = 0; // 0x124 PushV
	var_291_object = var_280_object; // 0x125 Mov
	var_292_float = 70.0; // 0x126 MovF
	func_1971(var_291_object, var_292_float); // 0x127 NEW_2
	var_293_bool = var_290_bool == 0; // 0x129 Not
	if(var_293_bool == 0) goto Label_301; // 0x12a JumpB
	var_279_int = -2; // 0x12b MovI
	return 8; // 0x12c Return
	
Label_301:
	CreateDialog(var_286_object); // 0x12d Func
	var_294_int = 0; // 0x12f PushV
	func_2436(var_294_int); // 0x130 NEW_2
	SetNPCName(var_294_int); // 0x132 ObjFunc
	var_295_int = 0; // 0x134 PushV
	func_2434(var_295_int); // 0x135 NEW_2
	SetNPCDescription(var_295_int); // 0x137 ObjFunc
	var_296_string = ""; // 0x139 PushV
	func_2438(var_296_string); // 0x13a NEW_2
	SetPhoto(var_296_string); // 0x13c ObjFunc
	var_297_string = ""; // 0x13e PushV
	func_2440(var_297_string); // 0x13f NEW_2
	SetPhoto2(var_297_string); // 0x141 ObjFunc
	var_298_int = 0; // 0x143 PushV
	func_2757(var_298_int); // 0x144 NEW_2
	SetPlayerName(var_298_int); // 0x146 ObjFunc
	var_288_int = -1; // 0x148 MovI
	IsOverrideActive(var_287_bool); // 0x149 Func
	var_299_bool = var_287_bool; // 0x14b Push
	if(var_299_bool == 0) goto Label_335; // 0x14c JumpB
	var_279_int = -2; // 0x14d MovI
	return 8; // 0x14e Return
	
Label_335:
	DoDialog(var_286_object); // 0x14f Func
	var_300_bool = 0; var_301_object = Obj(); // 0x151 PushV
	var_302_object = Obj(); // 0x152 PushV
	func_2249(var_302_object); // 0x153 NEW_2
	var_301_object = var_302_object; // 0x154 Mov
	func_2058(var_300_bool, var_301_object); // 0x156 NEW_2
	var_303_object = Obj(); var_304_object = Obj(); // 0x158 PushV
	var_303_object = var_280_object; // 0x159 Mov
	var_304_object = var_286_object; // 0x15a Mov
	TaskCall(3); // 0x15b TaskCall
	func_371(var_305_object, var_306_object, var_307_string, var_308_bool, var_303_object, var_304_object); // 0x15c NEW_2
	TaskReturn(); // 0x15d TaskReturn
	IsDialogEnd(var_289_bool); // 0x15f ObjFunc
	
Label_353:
	var_391_bool = var_289_bool == 0; // 0x161 Not
	if(var_391_bool == 0) goto Label_360; // 0x162 JumpB
	sync(); // 0x163 Func
	IsDialogEnd(var_289_bool); // 0x165 ObjFunc
	goto Label_353; // 0x167 Jump
	
Label_360:
	var_392_object = Obj(); // 0x168 PushV
	var_392_object = var_280_object; // 0x169 Mov
	func_2040(); // 0x16a NEW_2
	StopDialog(var_286_object); // 0x16c Func
	GetReturnValue(var_288_int); // 0x16e ObjFunc
	var_279_int = var_288_int; // 0x170 Mov
	return 8; // 0x171 Return
}


func_1829()
{
	var_30_int = 0; var_31_int = 0; var_32_bool = 0; var_33_int = 0; var_34_int = 0; var_35_bool = 0; var_36_int = 0; var_37_int = 0; var_38_bool = 0; var_39_int = 0; var_40_int = 0; var_41_bool = 0; // 0x725 PushV
	WaitForAnimEnd(); // 0x726 Func
	var_42_bool = 0; // 0x728 PushV
	func_1966(var_42_bool); // 0x729 NEW_2
	var_43_bool = var_42_bool == 0; // 0x72b Not
	if(var_43_bool == 0) goto Label_1838; // 0x72c JumpB
	return 12; // 0x72d Return
	
Label_1838:
	var_44_int = 0; // 0x72e PushV
	func_2417(var_44_int); // 0x72f NEW_2
	var_36_int = var_44_int; // 0x730 Mov
	var_37_int = 0; // 0x732 MovI
	
Label_1843:
	var_57_bool = 0; // 0x733 PushV
	var_57_bool = 0; // 0x734 MovB
	var_58_int = 5; // 0x735 PushI
	var_59_bool = var_37_int < var_58_int; // 0x736 LT
	if(var_59_bool == 0) goto Label_1853; // 0x737 JumpB
	var_60_bool = 0; // 0x738 PushV
	func_1966(var_60_bool); // 0x739 NEW_2
	if(var_60_bool == 0) goto Label_1853; // 0x73b JumpB
	var_57_bool = 1; // 0x73c MovB
	
Label_1853:
	if(var_57_bool == 0) goto Label_1895; // 0x73d JumpB
	var_61_bool = var_36_int == 0; // 0x73e Not
	if(var_61_bool == 0) goto Label_1863; // 0x73f JumpB
	var_62_int = 3; // 0x740 PushI
	Sleep(var_62_int, var_38_bool); // 0x741 Func
	var_63_bool = var_38_bool == 0; // 0x743 Not
	if(var_63_bool == 0) goto Label_1862; // 0x744 JumpB
	goto Label_1895; // 0x745 Jump
	
Label_1895:
	ResetAAS(); // 0x767 Func
	return 12; // 0x769 Return
	
Label_1862:
	goto Label_1884; // 0x746 Jump
	
Label_1884:
	var_64_bool = 0; // 0x75c PushV
	func_1898(var_64_bool); // 0x75d NEW_2
	var_65_bool = var_64_bool == 0; // 0x75f Not
	if(var_65_bool == 0) goto Label_1890; // 0x760 JumpB
	goto Label_1895; // 0x761 Jump
	
Label_1890:
	ResetAAS(); // 0x762 Func
	var_66_int = 1; // 0x764 PushI
	var_37_int = var_37_int + var_66_int; // 0x765 Add2
	goto Label_1843; // 0x766 Jump
	
Label_1863:
	irand(var_39_int, var_36_int); // 0x747 Func
	var_67_int = 5; // 0x749 PushI
	irand(var_40_int, var_67_int); // 0x74a Func
	var_68_int = 0; // 0x74c PushI
	var_69_bool = var_40_int != var_68_int; // 0x74d Neq
	if(var_69_bool == 0) goto Label_1872; // 0x74e JumpB
	var_39_int = 0; // 0x74f MovI
	
Label_1872:
	var_70_string = "all"; // 0x750 PushS
	var_71_string = ""; var_72_int = 0; // 0x751 PushV
	var_72_int = var_39_int; // 0x752 Mov
	func_2410(var_71_string, var_72_int); // 0x753 NEW_2
	PlayAnimation(var_70_string, var_71_string); // 0x755 Func
	WaitForAnimEnd(var_41_bool); // 0x757 Func
	var_73_bool = var_41_bool == 0; // 0x759 Not
	if(var_73_bool == 0) goto Label_1884; // 0x75a JumpB
	goto Label_1895; // 0x75b Jump
}


func_2600(var_362_bool, var_363_object)
{
	var_364_bool = 0; var_365_object = Obj(); // 0xa29 PushV
	var_365_object = var_363_object; // 0xa2a Mov
	func_2644(var_365_object); // 0xa2b NEW_2
	if(var_364_bool == 0) goto Label_2608; // 0xa2d JumpB
	var_362_bool = 1; // 0xa2e MovB
	return 0; // 0xa2f Return
	
Label_2608:
	var_362_bool = 0; // 0xa30 MovB
	return 0; // 0xa31 Return
}


func_1585(var_2_object, var_568_string)
{
	var_569_bool = 0; // 0x632 PushV
	func_2442(var_569_bool); // 0x633 NEW_2
	var_570_bool = var_569_bool == 0; // 0x635 Not
	if(var_570_bool == 0) goto Label_1592; // 0x636 JumpB
	return 0; // 0x637 Return
	
Label_1592:
	var_571_bool = var_568_string == var_2_object; // 0x638 Eq
	if(var_571_bool == 0) goto Label_1595; // 0x639 JumpB
	return 0; // 0x63a Return
	
Label_1595:
	var_572_string = ""; var_573_bool = 0; // 0x63b PushV
	var_572_string = var_568_string; // 0x63c Mov
	var_574_string = ""; // 0x63d PushS
	var_575_bool = var_568_string == var_574_string; // 0x63e Eq
	if(var_575_bool == 0) goto Label_1602; // 0x63f JumpB
	var_573_bool = 0; // 0x640 MovB
	goto Label_1603; // 0x641 Jump
	
Label_1603:
	func_2212(var_572_string, var_573_bool); // 0x643 NEW_2
	var_2_object = var_568_string; // 0x645 TMov
	return 0; // 0x646 Return
	
Label_1602:
	var_573_bool = 1; // 0x642 MovB
}


func_2610(var_339_bool, var_340_object)
{
	var_341_bool = 0; var_342_object = Obj(); // 0xa33 PushV
	var_342_object = var_340_object; // 0xa34 Mov
	func_2665(var_342_object); // 0xa35 NEW_2
	if(var_341_bool == 0) goto Label_2618; // 0xa37 JumpB
	var_339_bool = 1; // 0xa38 MovB
	return 0; // 0xa39 Return
	
Label_2618:
	var_339_bool = 0; // 0xa3a MovB
	return 0; // 0xa3b Return
}


func_2360(var_53_float)
{
	var_54_object = Obj(); var_55_object = Obj(); // 0x938 PushV
	CreateFloatVector(var_55_object); // 0x939 Func
	add(var_53_float); // 0x93b ObjFunc
	var_56_int = 16; // 0x93d PushI
	SendWorldWndMessage(var_56_int, var_55_object); // 0x93e Func
	return 2; // 0x940 Return
}


func_2620(var_319_bool)
{
	var_321_int = 0; var_322_string = ""; // 0xa3d PushV
	var_322_string = "oob1Eva1"; // 0xa3e MovS
	func_2276(var_321_int, var_322_string); // 0xa3f NEW_2
	var_325_int = 0; // 0xa41 PushI
	var_326_bool = var_321_int == var_325_int; // 0xa42 Eq
	if(var_326_bool == 0) goto Label_2630; // 0xa43 JumpB
	var_319_bool = 1; // 0xa44 MovB
	return 0; // 0xa45 Return
	
Label_2630:
	var_319_bool = 0; // 0xa46 MovB
	return 0; // 0xa47 Return
}


func_1085(var_0_object, var_1_object, var_2_object, var_3_string, var_483_object, var_484_object)
{
	var_0_object = var_484_object; // 0x43e TMov
	var_1_object = var_483_object; // 0x43f TMov
	var_3_string = 0; // 0x440 TMovB
	var_489_int = 1; // 0x441 PushI
	if(var_489_int == 0) goto Label_1137; // 0x442 JumpB
	var_490_string = ""; // 0x443 PushV
	var_490_string = "Neutral"; // 0x444 MovS
	func_1167(var_484_object, var_490_string); // 0x445 NEW_2
	var_498_int = 521552; // 0x447 PushI
	SetMessage(var_498_int); // 0x448 TObjFunc
	ClearReplies(); // 0x44a TObjFunc
	var_499_bool = 0; var_500_object = Obj(); // 0x44c PushV
	var_500_object = var_1_object; // 0x44d MovT
	func_2540(var_500_object); // 0x44e NEW_2
	if(var_499_bool == 0) goto Label_1110; // 0x450 JumpB
	var_505_int = 521553; // 0x451 PushI
	var_506_int = 22715; // 0x452 PushI
	var_507_int = 22714; // 0x453 PushI
	AddReply(var_505_int, var_506_int, var_507_int); // 0x454 TObjFunc
	
Label_1110:
	var_508_bool = 0; // 0x456 PushV
	var_508_bool = 0; // 0x457 MovB
	var_509_bool = 0; var_510_object = Obj(); // 0x458 PushV
	var_510_object = var_1_object; // 0x459 MovT
	func_2552(var_510_object); // 0x45a NEW_2
	if(var_509_bool == 0) goto Label_1123; // 0x45c JumpB
	var_515_bool = 0; var_516_object = Obj(); // 0x45d PushV
	var_516_object = var_1_object; // 0x45e MovT
	func_2564(var_516_object); // 0x45f NEW_2
	if(var_515_bool == 0) goto Label_1123; // 0x461 JumpB
	var_508_bool = 1; // 0x462 MovB
	
Label_1123:
	if(var_508_bool == 0) goto Label_1129; // 0x463 JumpB
	var_521_int = 521609; // 0x464 PushI
	var_522_int = 22777; // 0x465 PushI
	var_523_int = 22776; // 0x466 PushI
	AddReply(var_521_int, var_522_int, var_523_int); // 0x467 TObjFunc
	
Label_1129:
	var_524_int = 521556; // 0x469 PushI
	var_525_int = -1; // 0x46a PushI
	var_526_int = 22717; // 0x46b PushI
	AddReply(var_524_int, var_525_int, var_526_int); // 0x46c TObjFunc
	goto Label_1137; // 0x46e Jump
	
Label_1137:
	var_527_bool = 0; // 0x471 PushV
	func_2442(var_527_bool); // 0x472 NEW_2
	if(var_527_bool == 0) goto Label_1152; // 0x474 JumpB
	
Label_1141:
	lshWaitForAnimEnd(); // 0x475 Func
	var_528_string = var_3_string; // 0x477 PushT
	if(var_528_string == 0) goto Label_1146; // 0x478 JumpB
	goto Label_1151; // 0x479 Jump
	
Label_1151:
	goto Label_1166; // 0x47f Jump
	
Label_1166:
	return 0; // 0x48e Return
	
Label_1146:
	var_529_string = ""; // 0x47a PushV
	var_529_string = var_2_object; // 0x47b MovT
	func_2196(var_529_string); // 0x47c NEW_2
	goto Label_1141; // 0x47e Jump
	
Label_1152:
	var_530_string = "all"; // 0x480 PushS
	var_531_string = "idle"; // 0x481 PushS
	PlayAnimation(var_530_string, var_531_string); // 0x482 Func
	
Label_1156:
	WaitForAnimEnd(); // 0x484 Func
	var_532_string = var_3_string; // 0x486 PushT
	if(var_532_string == 0) goto Label_1161; // 0x487 JumpB
	goto Label_1166; // 0x488 Jump
	
Label_1161:
	var_533_string = "all"; // 0x489 PushS
	var_534_string = "idle"; // 0x48a PushS
	PlayAnimation(var_533_string, var_534_string); // 0x48b Func
	goto Label_1156; // 0x48d Jump
}


func_2370(var_59_bool, var_60_string, var_61_string)
{
	var_62_object = Obj(); var_63_object = Obj(); // 0x942 PushV
	FindActor(var_63_object, var_60_string); // 0x943 Func
	var_64_bool = var_63_object == 0; // 0x945 NullEq
	if(var_64_bool == 0) goto Label_2377; // 0x946 JumpB
	var_59_bool = 0; // 0x947 MovB
	return 2; // 0x948 Return
	
Label_2377:
	Trigger(var_63_object, var_61_string); // 0x949 Func
	var_59_bool = 1; // 0x94b MovB
	return 2; // 0x94c Return
}


func_2116(var_132_bool)
{
	var_134_string = ""; var_135_int = 0; var_136_bool = 0; var_137_int = 0; var_138_string = ""; var_139_string = ""; var_140_int = 0; var_141_bool = 0; var_142_int = 0; var_143_string = ""; // 0x844 PushV
	var_139_string = "c"; // 0x845 MovS
	var_140_int = 0; // 0x846 MovI
	
Label_2119:
	var_144_int = 1; // 0x847 PushI
	if(var_144_int == 0) goto Label_2132; // 0x848 JumpB
	var_145_int = 1; // 0x849 PushI
	var_146_int = var_140_int + var_145_int; // 0x84a Add
	var_147_int = var_139_string + var_146_int; // 0x84b Add
	HasProperty(var_147_int, var_141_bool); // 0x84c ObjFunc
	var_148_bool = var_141_bool == 0; // 0x84e Not
	if(var_148_bool == 0) goto Label_2129; // 0x84f JumpB
	goto Label_2132; // 0x850 Jump
	
Label_2132:
	var_149_bool = var_140_int == 0; // 0x854 Not
	if(var_149_bool == 0) goto Label_2136; // 0x855 JumpB
	var_132_bool = 0; // 0x856 MovB
	return 10; // 0x857 Return
	
Label_2136:
	var_142_int = 0; // 0x858 MovI
	var_150_int = 1; // 0x859 PushI
	var_151_bool = var_140_int > var_150_int; // 0x85a GT
	if(var_151_bool == 0) goto Label_2142; // 0x85b JumpB
	irand(var_142_int, var_140_int); // 0x85c Func
	
Label_2142:
	var_152_int = 1; // 0x85e PushI
	var_153_int = var_142_int + var_152_int; // 0x85f Add
	var_154_int = var_139_string + var_153_int; // 0x860 Add
	GetProperty(var_154_int, var_143_string); // 0x861 ObjFunc
	var_155_bool = 0; var_156_string = ""; // 0x863 PushV
	var_156_string = var_143_string; // 0x864 Mov
	func_2227(var_155_bool, var_156_string); // 0x865 NEW_2
	var_132_bool = var_155_bool; // 0x866 Mov
	return 10; // 0x868 Return
	
Label_2129:
	var_161_int = 1; // 0x851 PushI
	var_140_int = var_140_int + var_161_int; // 0x852 Add2
	goto Label_2119; // 0x853 Jump
}


func_836(var_0_object, var_1_object, var_2_object, var_3_string, var_216_object, var_217_object)
{
	var_0_object = var_217_object; // 0x345 TMov
	var_1_object = var_216_object; // 0x346 TMov
	var_3_string = 0; // 0x347 TMovB
	var_222_int = 1; // 0x348 PushI
	if(var_222_int == 0) goto Label_864; // 0x349 JumpB
	var_223_string = ""; // 0x34a PushV
	var_223_string = "Fear"; // 0x34b MovS
	func_894(var_217_object, var_223_string); // 0x34c NEW_2
	var_240_int = 520716; // 0x34e PushI
	SetMessage(var_240_int); // 0x34f TObjFunc
	ClearReplies(); // 0x351 TObjFunc
	var_241_int = 520717; // 0x353 PushI
	var_242_int = 21929; // 0x354 PushI
	var_243_int = 21928; // 0x355 PushI
	AddReply(var_241_int, var_242_int, var_243_int); // 0x356 TObjFunc
	var_244_int = 520721; // 0x358 PushI
	var_245_int = 21933; // 0x359 PushI
	var_246_int = 21932; // 0x35a PushI
	AddReply(var_244_int, var_245_int, var_246_int); // 0x35b TObjFunc
	goto Label_864; // 0x35d Jump
	
Label_864:
	var_247_bool = 0; // 0x360 PushV
	func_2442(var_247_bool); // 0x361 NEW_2
	if(var_247_bool == 0) goto Label_879; // 0x363 JumpB
	
Label_868:
	lshWaitForAnimEnd(); // 0x364 Func
	var_248_string = var_3_string; // 0x366 PushT
	if(var_248_string == 0) goto Label_873; // 0x367 JumpB
	goto Label_878; // 0x368 Jump
	
Label_878:
	goto Label_893; // 0x36e Jump
	
Label_893:
	return 0; // 0x37d Return
	
Label_873:
	var_249_string = ""; // 0x369 PushV
	var_249_string = var_2_object; // 0x36a MovT
	func_2196(var_249_string); // 0x36b NEW_2
	goto Label_868; // 0x36d Jump
	
Label_879:
	var_260_string = "all"; // 0x36f PushS
	var_261_string = "idle"; // 0x370 PushS
	PlayAnimation(var_260_string, var_261_string); // 0x371 Func
	
Label_883:
	WaitForAnimEnd(); // 0x373 Func
	var_262_string = var_3_string; // 0x375 PushT
	if(var_262_string == 0) goto Label_888; // 0x376 JumpB
	goto Label_893; // 0x377 Jump
	
Label_888:
	var_263_string = "all"; // 0x378 PushS
	var_264_string = "idle"; // 0x379 PushS
	PlayAnimation(var_263_string, var_264_string); // 0x37a Func
	goto Label_883; // 0x37c Jump
}


func_2632(var_435_bool)
{
	var_437_int = 0; var_438_string = ""; // 0xa49 PushV
	var_438_string = "oob2Eva1"; // 0xa4a MovS
	func_2276(var_437_int, var_438_string); // 0xa4b NEW_2
	var_439_int = 0; // 0xa4d PushI
	var_440_bool = var_437_int == var_439_int; // 0xa4e Eq
	if(var_440_bool == 0) goto Label_2642; // 0xa4f JumpB
	var_435_bool = 1; // 0xa50 MovB
	return 0; // 0xa51 Return
	
Label_2642:
	var_435_bool = 0; // 0xa52 MovB
	return 0; // 0xa53 Return
}


func_2382(var_101_float)
{
	var_102_float = 0; var_103_float = 0; // 0x94e PushV
	GetGameTime(var_103_float); // 0x94f Func
	var_101_float = var_103_float; // 0x951 Mov
	return 2; // 0x952 Return
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_419_object, var_420_object)
{
	var_0_object = var_420_object; // 0x52 TMov
	var_1_object = var_419_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_425_int = 1; // 0x55 PushI
	if(var_425_int == 0) goto Label_114; // 0x56 JumpB
	var_426_string = ""; // 0x57 PushV
	var_426_string = "Fear"; // 0x58 MovS
	func_144(var_420_object, var_426_string); // 0x59 NEW_2
	var_434_int = 518278; // 0x5b PushI
	SetMessage(var_434_int); // 0x5c TObjFunc
	ClearReplies(); // 0x5e TObjFunc
	var_435_bool = 0; var_436_object = Obj(); // 0x60 PushV
	var_436_object = var_1_object; // 0x61 MovT
	func_2632(var_436_object); // 0x62 NEW_2
	if(var_435_bool == 0) goto Label_106; // 0x64 JumpB
	var_441_int = 519444; // 0x65 PushI
	var_442_int = 20613; // 0x66 PushI
	var_443_int = 20612; // 0x67 PushI
	AddReply(var_441_int, var_442_int, var_443_int); // 0x68 TObjFunc
	
Label_106:
	var_444_int = 518279; // 0x6a PushI
	var_445_int = -1; // 0x6b PushI
	var_446_int = 19388; // 0x6c PushI
	AddReply(var_444_int, var_445_int, var_446_int); // 0x6d TObjFunc
	goto Label_114; // 0x6f Jump
	
Label_114:
	var_447_bool = 0; // 0x72 PushV
	func_2442(var_447_bool); // 0x73 NEW_2
	if(var_447_bool == 0) goto Label_129; // 0x75 JumpB
	
Label_118:
	lshWaitForAnimEnd(); // 0x76 Func
	var_448_string = var_3_string; // 0x78 PushT
	if(var_448_string == 0) goto Label_123; // 0x79 JumpB
	goto Label_128; // 0x7a Jump
	
Label_128:
	goto Label_143; // 0x80 Jump
	
Label_143:
	return 0; // 0x8f Return
	
Label_123:
	var_449_string = ""; // 0x7b PushV
	var_449_string = var_2_object; // 0x7c MovT
	func_2196(var_449_string); // 0x7d NEW_2
	goto Label_118; // 0x7f Jump
	
Label_129:
	var_450_string = "all"; // 0x81 PushS
	var_451_string = "idle"; // 0x82 PushS
	PlayAnimation(var_450_string, var_451_string); // 0x83 Func
	
Label_133:
	WaitForAnimEnd(); // 0x85 Func
	var_452_string = var_3_string; // 0x87 PushT
	if(var_452_string == 0) goto Label_138; // 0x88 JumpB
	goto Label_143; // 0x89 Jump
	
Label_138:
	var_453_string = "all"; // 0x8a PushS
	var_454_string = "idle"; // 0x8b PushS
	PlayAnimation(var_453_string, var_454_string); // 0x8c Func
	goto Label_133; // 0x8e Jump
}


func_2387(var_176_int)
{
	var_177_float = 0; var_178_float = 0; // 0x953 PushV
	GetGameTime(var_178_float); // 0x954 Func
	var_179_int = 1; // 0x956 PushI
	var_180_int = 0; // 0x957 PushV
	var_181_int = 24; // 0x958 PushI
	var_180_int = var_178_float / var_178_float; // 0x959 Div2
	var_176_int = var_179_int + var_180_int; // 0x95a Add2
	return 2; // 0x95b Return
}


func_2644(var_364_bool)
{
	var_366_bool = 0; // 0xa55 PushV
	var_366_bool = 0; // 0xa56 MovB
	var_367_int = 0; // 0xa57 PushV
	func_2396(var_367_int); // 0xa58 NEW_2
	var_368_int = 12; // 0xa5a PushI
	var_369_bool = var_367_int >= var_368_int; // 0xa5b GE
	if(var_369_bool == 0) goto Label_2660; // 0xa5c JumpB
	var_370_int = 0; // 0xa5d PushV
	func_2396(var_370_int); // 0xa5e NEW_2
	var_371_int = 18; // 0xa60 PushI
	var_372_bool = var_370_int < var_371_int; // 0xa61 LT
	if(var_372_bool == 0) goto Label_2660; // 0xa62 JumpB
	var_366_bool = 1; // 0xa63 MovB
	
Label_2660:
	if(var_366_bool == 0) goto Label_2663; // 0xa64 JumpB
	var_364_bool = 1; // 0xa65 MovB
	return 0; // 0xa66 Return
	
Label_2663:
	var_364_bool = 0; // 0xa67 MovB
	return 0; // 0xa68 Return
}


func_2396(var_344_int)
{
	var_345_float = 0; var_346_float = 0; // 0x95c PushV
	GetGameTime(var_346_float); // 0x95d Func
	var_347_int = 0; // 0x95f PushV
	var_347_int = var_346_float; // 0x960 Mov
	var_348_int = 24; // 0x961 PushI
	var_344_int = var_347_int % var_348_int; // 0x962 Mod2
	return 2; // 0x963 Return
}


func_2404(var_276_bool, var_277_int)
{
	var_278_int = 0; // 0x965 PushV
	func_2387(var_278_int); // 0x966 NEW_2
	var_276_bool = var_278_int == var_277_int; // 0x968 Eq2
	return 0; // 0x969 Return
}


func_2153(var_163_bool)
{
	var_165_string = ""; var_166_int = 0; var_167_bool = 0; var_168_int = 0; var_169_string = ""; var_170_string = ""; var_171_int = 0; var_172_bool = 0; var_173_int = 0; var_174_string = ""; // 0x869 PushV
	var_175_string = "d"; // 0x86a PushS
	var_176_int = 0; // 0x86b PushV
	func_2387(var_176_int); // 0x86c NEW_2
	var_182_int = var_175_string + var_176_int; // 0x86e Add
	var_183_string = "m"; // 0x86f PushS
	var_170_string = var_182_int + var_183_string; // 0x870 Add2
	var_171_int = 0; // 0x871 MovI
	
Label_2162:
	var_184_int = 1; // 0x872 PushI
	if(var_184_int == 0) goto Label_2175; // 0x873 JumpB
	var_185_int = 1; // 0x874 PushI
	var_186_int = var_171_int + var_185_int; // 0x875 Add
	var_187_int = var_170_string + var_186_int; // 0x876 Add
	HasProperty(var_187_int, var_172_bool); // 0x877 ObjFunc
	var_188_bool = var_172_bool == 0; // 0x879 Not
	if(var_188_bool == 0) goto Label_2172; // 0x87a JumpB
	goto Label_2175; // 0x87b Jump
	
Label_2175:
	var_189_bool = var_171_int == 0; // 0x87f Not
	if(var_189_bool == 0) goto Label_2179; // 0x880 JumpB
	var_163_bool = 0; // 0x881 MovB
	return 10; // 0x882 Return
	
Label_2179:
	var_173_int = 0; // 0x883 MovI
	var_190_int = 1; // 0x884 PushI
	var_191_bool = var_171_int > var_190_int; // 0x885 GT
	if(var_191_bool == 0) goto Label_2185; // 0x886 JumpB
	irand(var_173_int, var_171_int); // 0x887 Func
	
Label_2185:
	var_192_int = 1; // 0x889 PushI
	var_193_int = var_173_int + var_192_int; // 0x88a Add
	var_194_int = var_170_string + var_193_int; // 0x88b Add
	GetProperty(var_194_int, var_174_string); // 0x88c ObjFunc
	var_195_bool = 0; var_196_string = ""; // 0x88e PushV
	var_196_string = var_174_string; // 0x88f Mov
	func_2227(var_195_bool, var_196_string); // 0x890 NEW_2
	var_163_bool = var_195_bool; // 0x891 Mov
	return 10; // 0x893 Return
	
Label_2172:
	var_197_int = 1; // 0x87c PushI
	var_171_int = var_171_int + var_197_int; // 0x87d Add2
	goto Label_2162; // 0x87e Jump
}


func_2665(var_341_bool)
{
	var_343_bool = 0; // 0xa6a PushV
	var_343_bool = 0; // 0xa6b MovB
	var_344_int = 0; // 0xa6c PushV
	func_2396(var_344_int); // 0xa6d NEW_2
	var_349_int = 0; // 0xa6f PushI
	var_350_bool = var_344_int >= var_349_int; // 0xa70 GE
	if(var_350_bool == 0) goto Label_2681; // 0xa71 JumpB
	var_351_int = 0; // 0xa72 PushV
	func_2396(var_351_int); // 0xa73 NEW_2
	var_352_int = 12; // 0xa75 PushI
	var_353_bool = var_351_int < var_352_int; // 0xa76 LT
	if(var_353_bool == 0) goto Label_2681; // 0xa77 JumpB
	var_343_bool = 1; // 0xa78 MovB
	
Label_2681:
	if(var_343_bool == 0) goto Label_2684; // 0xa79 JumpB
	var_341_bool = 1; // 0xa7a MovB
	return 0; // 0xa7b Return
	
Label_2684:
	var_341_bool = 0; // 0xa7c MovB
	return 0; // 0xa7d Return
}


func_2410(var_50_string, var_51_int)
{
	var_52_string = ""; var_53_string = ""; // 0x96a PushV
	var_53_string = "idle"; // 0x96b MovS
	var_54_int = var_51_int; // 0x96c Push
	if(var_54_int == 0) goto Label_2415; // 0x96d JumpB
	var_53_string = var_53_string + var_51_int; // 0x96e Add2
	
Label_2415:
	var_50_string = var_53_string; // 0x96f Mov
	return 2; // 0x970 Return
}


func_1898(var_64_bool)
{
	var_64_bool = 1; // 0x76a MovB
	return 0; // 0x76b Return
}


func_1900()
{
	StopAnimation(); // 0x76c Func
	StopGroup0(); // 0x76e Func
	return 0; // 0x770 Return
}


func_1905(var_41_float)
{
	var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); // 0x771 PushV
	GetPosition(var_46_cvector); // 0x772 Func
	GetPosition(var_47_cvector); // 0x774 ObjFunc
	var_48_cvector = var_47_cvector - var_46_cvector; // 0x776 Sub2
	var_41_float = var_48_cvector | var_48_cvector; // 0x777 Or2
	return 6; // 0x778 Return
}


func_2417(var_44_int)
{
	var_45_int = 0; var_46_bool = 0; var_47_int = 0; var_48_bool = 0; // 0x971 PushV
	var_47_int = 0; // 0x972 MovI
	
Label_2419:
	var_49_string = "all"; // 0x973 PushS
	var_50_string = ""; var_51_int = 0; // 0x974 PushV
	var_51_int = var_47_int; // 0x975 Mov
	func_2410(var_50_string, var_51_int); // 0x976 NEW_2
	HasAnimation(var_48_bool, var_49_string, var_50_string); // 0x978 Func
	var_55_bool = var_48_bool == 0; // 0x97a Not
	if(var_55_bool == 0) goto Label_2429; // 0x97b JumpB
	goto Label_2432; // 0x97c Jump
	
Label_2432:
	var_44_int = var_47_int; // 0x980 Mov
	return 4; // 0x981 Return
	
Label_2429:
	var_56_int = 1; // 0x97d PushI
	var_47_int = var_47_int + var_56_int; // 0x97e Add2
	goto Label_2419; // 0x97f Jump
}


func_371(var_0_object, var_1_object, var_2_object, var_3_string, var_303_object, var_304_object)
{
	var_0_object = var_304_object; // 0x174 TMov
	var_1_object = var_303_object; // 0x175 TMov
	var_3_string = 0; // 0x176 TMovB
	var_309_int = 1; // 0x177 PushI
	if(var_309_int == 0) goto Label_459; // 0x178 JumpB
	var_310_string = ""; // 0x179 PushV
	var_310_string = "Fear"; // 0x17a MovS
	func_489(var_304_object, var_310_string); // 0x17b NEW_2
	var_318_int = 520203; // 0x17d PushI
	SetMessage(var_318_int); // 0x17e TObjFunc
	ClearReplies(); // 0x180 TObjFunc
	var_319_bool = 0; var_320_object = Obj(); // 0x182 PushV
	var_320_object = var_1_object; // 0x183 MovT
	func_2620(var_320_object); // 0x184 NEW_2
	if(var_319_bool == 0) goto Label_396; // 0x186 JumpB
	var_327_int = 520204; // 0x187 PushI
	var_328_int = 21397; // 0x188 PushI
	var_329_int = 21396; // 0x189 PushI
	AddReply(var_327_int, var_328_int, var_329_int); // 0x18a TObjFunc
	
Label_396:
	var_330_bool = 0; // 0x18c PushV
	var_330_bool = 1; // 0x18d MovB
	var_331_bool = 0; // 0x18e PushV
	var_331_bool = 0; // 0x18f MovB
	var_332_bool = 0; // 0x190 PushV
	var_332_bool = 0; // 0x191 MovB
	var_333_bool = 0; var_334_object = Obj(); // 0x192 PushV
	var_334_object = var_1_object; // 0x193 MovT
	func_2576(var_334_object); // 0x194 NEW_2
	if(var_333_bool == 0) goto Label_413; // 0x196 JumpB
	var_339_bool = 0; var_340_object = Obj(); // 0x197 PushV
	var_340_object = var_1_object; // 0x198 MovT
	func_2610(var_339_bool, var_340_object); // 0x199 NEW_2
	if(var_339_bool == 0) goto Label_413; // 0x19b JumpB
	var_332_bool = 1; // 0x19c MovB
	
Label_413:
	if(var_332_bool == 0) goto Label_420; // 0x19d JumpB
	var_354_bool = 0; var_355_object = Obj(); // 0x19e PushV
	var_355_object = var_1_object; // 0x19f MovT
	func_2588(var_355_object); // 0x1a0 NEW_2
	if(var_354_bool == 0) goto Label_420; // 0x1a2 JumpB
	var_331_bool = 1; // 0x1a3 MovB
	
Label_420:
	if(var_331_bool == 0) goto Label_445; // 0x1a4 JumpB
	var_360_bool = 0; // 0x1a5 PushV
	var_360_bool = 0; // 0x1a6 MovB
	var_361_bool = 0; // 0x1a7 PushV
	var_361_bool = 0; // 0x1a8 MovB
	var_362_bool = 0; var_363_object = Obj(); // 0x1a9 PushV
	var_363_object = var_1_object; // 0x1aa MovT
	func_2600(var_362_bool, var_363_object); // 0x1ab NEW_2
	if(var_362_bool == 0) goto Label_436; // 0x1ad JumpB
	var_373_bool = 0; var_374_object = Obj(); // 0x1ae PushV
	var_374_object = var_1_object; // 0x1af MovT
	func_2576(var_374_object); // 0x1b0 NEW_2
	if(var_373_bool == 0) goto Label_436; // 0x1b2 JumpB
	var_361_bool = 1; // 0x1b3 MovB
	
Label_436:
	if(var_361_bool == 0) goto Label_443; // 0x1b4 JumpB
	var_375_bool = 0; var_376_object = Obj(); // 0x1b5 PushV
	var_376_object = var_1_object; // 0x1b6 MovT
	func_2588(var_376_object); // 0x1b7 NEW_2
	if(var_375_bool == 0) goto Label_443; // 0x1b9 JumpB
	var_360_bool = 1; // 0x1ba MovB
	
Label_443:
	if(var_360_bool == 0) goto Label_445; // 0x1bb JumpB
	var_330_bool = 0; // 0x1bc MovB
	
Label_445:
	if(var_330_bool == 0) goto Label_451; // 0x1bd JumpB
	var_377_int = 520211; // 0x1be PushI
	var_378_int = 21404; // 0x1bf PushI
	var_379_int = 21403; // 0x1c0 PushI
	AddReply(var_377_int, var_378_int, var_379_int); // 0x1c1 TObjFunc
	
Label_451:
	var_380_int = 520215; // 0x1c3 PushI
	var_381_int = -1; // 0x1c4 PushI
	var_382_int = 21407; // 0x1c5 PushI
	AddReply(var_380_int, var_381_int, var_382_int); // 0x1c6 TObjFunc
	goto Label_459; // 0x1c8 Jump
	
Label_459:
	var_383_bool = 0; // 0x1cb PushV
	func_2442(var_383_bool); // 0x1cc NEW_2
	if(var_383_bool == 0) goto Label_474; // 0x1ce JumpB
	
Label_463:
	lshWaitForAnimEnd(); // 0x1cf Func
	var_384_string = var_3_string; // 0x1d1 PushT
	if(var_384_string == 0) goto Label_468; // 0x1d2 JumpB
	goto Label_473; // 0x1d3 Jump
	
Label_473:
	goto Label_488; // 0x1d9 Jump
	
Label_488:
	return 0; // 0x1e8 Return
	
Label_468:
	var_385_string = ""; // 0x1d4 PushV
	var_385_string = var_2_object; // 0x1d5 MovT
	func_2196(var_385_string); // 0x1d6 NEW_2
	goto Label_463; // 0x1d8 Jump
	
Label_474:
	var_386_string = "all"; // 0x1da PushS
	var_387_string = "idle"; // 0x1db PushS
	PlayAnimation(var_386_string, var_387_string); // 0x1dc Func
	
Label_478:
	WaitForAnimEnd(); // 0x1de Func
	var_388_string = var_3_string; // 0x1e0 PushT
	if(var_388_string == 0) goto Label_483; // 0x1e1 JumpB
	goto Label_488; // 0x1e2 Jump
	
Label_483:
	var_389_string = "all"; // 0x1e3 PushS
	var_390_string = "idle"; // 0x1e4 PushS
	PlayAnimation(var_389_string, var_390_string); // 0x1e5 Func
	goto Label_478; // 0x1e7 Jump
}


func_1653(var_0_object)
{
	var_26_bool = 0; // 0x675 PushV
	func_1966(var_26_bool); // 0x676 NEW_2
	var_29_bool = var_26_bool == 0; // 0x678 Not
	if(var_29_bool == 0) goto Label_1660; // 0x679 JumpB
	Hold(); // 0x67a Func
	
Label_1660:
	GetDirection(var_0_object); // 0x67c Func
	
Label_1662:
	func_1829(); // 0x67f NEW_2
	goto Label_1662; // 0x681 Jump
}


func_1913(var_65_bool, var_66_object, var_67_string)
{
	var_68_bool = 0; var_69_bool = 0; // 0x779 PushV
	var_70_string = "HasProperty"; // 0x77a PushS
	var_71_int = 2; // 0x77b PushI
	var_72_bool = IsFuncExist(var_66_object, var_70_string, var_71_int); // 0x77c FuncExist
	var_73_bool = var_72_bool == 0; // 0x77d Not
	if(var_73_bool == 0) goto Label_1921; // 0x77e JumpB
	var_65_bool = 0; // 0x77f MovB
	return 2; // 0x780 Return
	
Label_1921:
	HasProperty(var_67_string, var_69_bool); // 0x781 ObjFunc
	var_65_bool = var_69_bool; // 0x783 Mov
	return 2; // 0x784 Return
}


func_2686()
{
	var_36_object = Obj(); var_37_object = Obj(); // 0xa7e PushV
	var_38_int = 299; // 0xa7f PushI
	var_39_int = 1; // 0xa80 PushI
	var_40_int = 521614; // 0xa81 PushI
	CreateDiaryEntry(var_37_object, var_38_int, var_39_int, var_40_int); // 0xa82 Func
	var_41_bool = 0; var_42_object = Obj(); var_43_int = 0; // 0xa84 PushV
	var_42_object = var_37_object; // 0xa85 Mov
	var_43_int = 297; // 0xa86 MovI
	func_2712(var_41_bool, var_42_object, var_43_int); // 0xa87 NEW_2
	return 2; // 0xa89 Return
}


func_894(var_2_object, var_223_string)
{
	var_224_bool = 0; // 0x37f PushV
	func_2442(var_224_bool); // 0x380 NEW_2
	var_225_bool = var_224_bool == 0; // 0x382 Not
	if(var_225_bool == 0) goto Label_901; // 0x383 JumpB
	return 0; // 0x384 Return
	
Label_901:
	var_226_bool = var_223_string == var_2_object; // 0x385 Eq
	if(var_226_bool == 0) goto Label_904; // 0x386 JumpB
	return 0; // 0x387 Return
	
Label_904:
	var_227_string = ""; var_228_bool = 0; // 0x388 PushV
	var_227_string = var_223_string; // 0x389 Mov
	var_229_string = ""; // 0x38a PushS
	var_230_bool = var_223_string == var_229_string; // 0x38b Eq
	if(var_230_bool == 0) goto Label_911; // 0x38c JumpB
	var_228_bool = 0; // 0x38d MovB
	goto Label_912; // 0x38e Jump
	
Label_912:
	func_2212(var_227_string, var_228_bool); // 0x390 NEW_2
	var_2_object = var_223_string; // 0x392 TMov
	return 0; // 0x393 Return
	
Label_911:
	var_228_bool = 1; // 0x38f MovB
}


func_2434(var_109_int)
{
	var_109_int = 515533; // 0x982 MovI
	return 0; // 0x983 Return
}


func_1667(var_51_bool)
{
	var_52_object = Obj(); var_53_object = Obj(); // 0x683 PushV
	var_54_string = "player"; // 0x684 PushS
	FindActor(var_53_object, var_54_string); // 0x685 Func
	var_55_bool = var_53_object == 0; // 0x687 Not
	if(var_55_bool == 0) goto Label_1675; // 0x688 JumpB
	var_51_bool = 0; // 0x689 MovB
	return 2; // 0x68a Return
	
Label_1675:
	var_56_bool = 0; var_57_object = Obj(); // 0x68b PushV
	var_57_object = var_53_object; // 0x68c Mov
	func_1957(var_57_object); // 0x68d NEW_2
	var_51_bool = var_56_bool; // 0x68e Mov
	return 2; // 0x690 Return
}


func_2436(var_108_int)
{
	var_108_int = 502858; // 0x984 MovI
	return 0; // 0x985 Return
}


func_1925(var_57_bool, var_58_object, var_59_string, var_60_float, var_61_float, var_62_float)
{
	var_63_float = 0; var_64_float = 0; // 0x785 PushV
	var_65_bool = 0; var_66_object = Obj(); var_67_string = ""; // 0x786 PushV
	var_66_object = var_58_object; // 0x787 Mov
	var_67_string = var_59_string; // 0x788 Mov
	func_1913(var_65_bool, var_66_object, var_67_string); // 0x789 NEW_2
	var_74_bool = var_65_bool == 0; // 0x78b Not
	if(var_74_bool == 0) goto Label_1935; // 0x78c JumpB
	var_57_bool = 0; // 0x78d MovB
	return 2; // 0x78e Return
	
Label_1935:
	GetProperty(var_59_string, var_64_float); // 0x78f ObjFunc
	var_75_float = 0; var_76_float = 0; var_77_float = 0; var_78_float = 0; // 0x791 PushV
	var_76_float = var_64_float + var_60_float; // 0x792 Add2
	var_77_float = var_61_float; // 0x793 Mov
	var_78_float = var_62_float; // 0x794 Mov
	func_2265(var_75_float, var_76_float, var_77_float, var_78_float); // 0x795 NEW_2
	SetProperty(var_59_string, var_75_float); // 0x797 ObjFunc
	var_57_bool = 1; // 0x799 MovB
	return 2; // 0x79a Return
}


func_2438(var_110_string)
{
	var_110_string = "ui/NPC_Eva.png"; // 0x986 MovS
	return 0; // 0x987 Return
}


func_2440(var_111_string)
{
	var_111_string = "ui/NPC_Eva_b.png"; // 0x988 MovS
	return 0; // 0x989 Return
}


func_2442(var_103_bool)
{
	var_103_bool = 1; // 0x98a MovB
	return 0; // 0x98b Return
}


func_2699(var_50_object)
{
	var_51_object = Obj(); var_52_object = Obj(); // 0xa8b PushV
	GetDiaryRoot(var_52_object); // 0xa8c Func
	var_53_bool = var_52_object == 0; // 0xa8e Not
	if(var_53_bool == 0) goto Label_2709; // 0xa8f JumpB
	var_54_string = "Can't retrieve diary root"; // 0xa90 PushS
	Trace(var_54_string); // 0xa91 Func
	var_50_object = 0; // 0xa93 MovB
	return 2; // 0xa94 Return
	
Label_2709:
	var_50_object = var_52_object; // 0xa95 Mov
	return 2; // 0xa96 Return
}


func_2444()
{
	var_34_string = "oob1Eva1"; // 0x98d PushS
	var_35_int = 1; // 0x98e PushI
	SetVariable(var_34_string, var_35_int); // 0x98f Func
	return 0; // 0x991 Return
}


func_1167(var_2_object, var_490_string)
{
	var_491_bool = 0; // 0x490 PushV
	func_2442(var_491_bool); // 0x491 NEW_2
	var_492_bool = var_491_bool == 0; // 0x493 Not
	if(var_492_bool == 0) goto Label_1174; // 0x494 JumpB
	return 0; // 0x495 Return
	
Label_1174:
	var_493_bool = var_490_string == var_2_object; // 0x496 Eq
	if(var_493_bool == 0) goto Label_1177; // 0x497 JumpB
	return 0; // 0x498 Return
	
Label_1177:
	var_494_string = ""; var_495_bool = 0; // 0x499 PushV
	var_494_string = var_490_string; // 0x49a Mov
	var_496_string = ""; // 0x49b PushS
	var_497_bool = var_490_string == var_496_string; // 0x49c Eq
	if(var_497_bool == 0) goto Label_1184; // 0x49d JumpB
	var_495_bool = 0; // 0x49e MovB
	goto Label_1185; // 0x49f Jump
	
Label_1185:
	func_2212(var_494_string, var_495_bool); // 0x4a1 NEW_2
	var_2_object = var_490_string; // 0x4a3 TMov
	return 0; // 0x4a4 Return
	
Label_1184:
	var_495_bool = 1; // 0x4a0 MovB
}


func_144(var_2_object, var_426_string)
{
	var_427_bool = 0; // 0x91 PushV
	func_2442(var_427_bool); // 0x92 NEW_2
	var_428_bool = var_427_bool == 0; // 0x94 Not
	if(var_428_bool == 0) goto Label_151; // 0x95 JumpB
	return 0; // 0x96 Return
	
Label_151:
	var_429_bool = var_426_string == var_2_object; // 0x97 Eq
	if(var_429_bool == 0) goto Label_154; // 0x98 JumpB
	return 0; // 0x99 Return
	
Label_154:
	var_430_string = ""; var_431_bool = 0; // 0x9a PushV
	var_430_string = var_426_string; // 0x9b Mov
	var_432_string = ""; // 0x9c PushS
	var_433_bool = var_426_string == var_432_string; // 0x9d Eq
	if(var_433_bool == 0) goto Label_161; // 0x9e JumpB
	var_431_bool = 0; // 0x9f MovB
	goto Label_162; // 0xa0 Jump
	
Label_162:
	func_2212(var_430_string, var_431_bool); // 0xa2 NEW_2
	var_2_object = var_426_string; // 0xa4 TMov
	return 0; // 0xa5 Return
	
Label_161:
	var_431_bool = 1; // 0xa1 MovB
}


func_1682(var_0_object)
{
	var_103_float = GetByIndex(var_0_object, 0); // 0x692 PushE
	var_104_float = GetByIndex(var_0_object, 2); // 0x693 PushE
	RotateAsync(var_103_float, var_104_float); // 0x694 Func
	return 0; // 0x696 Return
}


func_2450()
{
	var_34_string = "oob2Eva1"; // 0x993 PushS
	var_35_int = 1; // 0x994 PushI
	SetVariable(var_34_string, var_35_int); // 0x995 Func
	return 0; // 0x997 Return
}


func_2196(var_249_string)
{
	var_250_bool = 0; var_251_float = 0; var_252_float = 0; var_253_bool = 0; var_254_float = 0; var_255_float = 0; // 0x894 PushV
	lshHasAnimation(var_253_bool, var_249_string); // 0x895 Func
	var_256_bool = var_253_bool; // 0x897 Push
	if(var_256_bool == 0) goto Label_2207; // 0x898 JumpB
	lshGetAnimTimes(var_249_string, var_254_float, var_255_float); // 0x899 Func
	var_257_bool = 0; // 0x89b PushB
	lshPlayAnimation(var_254_float, var_255_float, var_257_bool); // 0x89c Func
	goto Label_2211; // 0x89e Jump
	
Label_2211:
	return 6; // 0x8a3 Return
	
Label_2207:
	var_258_string = "Can't find lsh animation : "; // 0x89f PushS
	var_259_int = var_258_string + var_249_string; // 0x8a0 Add
	Trace(var_259_int); // 0x8a1 Func
}


func_1687(var_34_bool)
{
	var_35_object = Obj(); var_36_bool = 0; var_37_object = Obj(); var_38_bool = 0; // 0x697 PushV
	var_39_string = "player"; // 0x698 PushS
	FindActor(var_37_object, var_39_string); // 0x699 Func
	var_40_bool = var_37_object == 0; // 0x69b Not
	if(var_40_bool == 0) goto Label_1695; // 0x69c JumpB
	var_34_bool = 0; // 0x69d MovB
	return 4; // 0x69e Return
	
Label_1695:
	var_41_float = 0; var_42_object = Obj(); // 0x69f PushV
	var_42_object = var_37_object; // 0x6a0 Mov
	func_1905(var_42_object); // 0x6a1 NEW_2
	var_49_float = 90000.0; // 0x6a3 PushF
	var_50_bool = var_41_float > var_49_float; // 0x6a4 GT
	if(var_50_bool == 0) goto Label_1704; // 0x6a5 JumpB
	var_34_bool = 0; // 0x6a6 MovB
	return 4; // 0x6a7 Return
	
Label_1704:
	CanSee(var_38_bool, var_37_object); // 0x6a8 Func
	var_34_bool = var_38_bool; // 0x6aa Mov
	return 4; // 0x6ab Return
}


func_2712(var_41_bool, var_42_object, var_43_int)
{
	var_44_object = Obj(); var_45_object = Obj(); var_46_int = 0; var_47_object = Obj(); var_48_object = Obj(); var_49_int = 0; // 0xa98 PushV
	var_50_object = Obj(); // 0xa99 PushV
	func_2699(var_50_object); // 0xa9a NEW_2
	var_47_object = var_50_object; // 0xa9b Mov
	Find(var_43_int, var_48_object); // 0xa9d ObjFunc
	var_55_bool = var_48_object == 0; // 0xa9f Not
	if(var_55_bool == 0) goto Label_2727; // 0xaa0 JumpB
	var_56_string = "Can't find diary parent with id: "; // 0xaa1 PushS
	var_57_int = var_56_string + var_43_int; // 0xaa2 Add
	Trace(var_57_int); // 0xaa3 Func
	var_41_bool = 0; // 0xaa5 MovB
	return 6; // 0xaa6 Return
	
Label_2727:
	AddChild(var_42_object); // 0xaa7 ObjFunc
	var_58_int = 7; // 0xaa9 PushI
	SendWorldWndMessage(var_58_int); // 0xaaa Func
	GetCategory(var_49_int); // 0xaac ObjFunc
	SetDiarySection(var_49_int); // 0xaae Func
	var_41_bool = 0; // 0xab0 MovB
	return 6; // 0xab1 Return
}


func_2456()
{
	var_80_string = "oob9Eva1"; // 0x999 PushS
	var_81_int = 1; // 0x99a PushI
	SetVariable(var_80_string, var_81_int); // 0x99b Func
	return 0; // 0x99d Return
}


func_1947(var_34_bool, var_35_cvector)
{
	var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_bool = 0; var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_bool = 0; // 0x79b PushV
	GetPosition(var_39_cvector); // 0x79c Func
	var_40_cvector = var_35_cvector - var_39_cvector; // 0x79e Sub2
	var_42_float = GetByIndex(var_40_cvector, 0); // 0x79f PushE
	var_43_float = GetByIndex(var_40_cvector, 2); // 0x7a0 PushE
	Rotate(var_42_float, var_43_float, var_41_bool); // 0x7a1 Func
	var_34_bool = var_41_bool; // 0x7a3 Mov
	return 6; // 0x7a4 Return
}


func_2462()
{
	var_34_string = "b9q01"; // 0x99f PushS
	var_35_int = 2; // 0x9a0 PushI
	SetVariable(var_34_string, var_35_int); // 0x9a1 Func
	func_2686(); // 0x9a4 NEW_2
	var_59_bool = 0; var_60_string = ""; var_61_string = ""; // 0x9a6 PushV
	var_60_string = "quest_b9_01"; // 0x9a7 MovS
	var_61_string = "place_mdoberman"; // 0x9a8 MovS
	func_2370(var_59_bool, var_60_string, var_61_string); // 0x9a9 NEW_2
	var_65_bool = 0; var_66_string = ""; var_67_string = ""; // 0x9ab PushV
	var_66_string = "quest_b9_01"; // 0x9ac MovS
	var_67_string = "init_factory"; // 0x9ad MovS
	func_2370(var_65_bool, var_66_string, var_67_string); // 0x9ae NEW_2
	return 0; // 0x9b0 Return
}


func_2212(var_227_string, var_228_bool)
{
	var_231_bool = 0; var_232_float = 0; var_233_float = 0; var_234_bool = 0; var_235_float = 0; var_236_float = 0; // 0x8a4 PushV
	lshHasAnimation(var_234_bool, var_227_string); // 0x8a5 Func
	var_237_bool = var_234_bool; // 0x8a7 Push
	if(var_237_bool == 0) goto Label_2222; // 0x8a8 JumpB
	lshGetAnimTimes(var_227_string, var_235_float, var_236_float); // 0x8a9 Func
	lshPlayAnimation(var_235_float, var_236_float, var_228_bool); // 0x8ab Func
	goto Label_2226; // 0x8ad Jump
	
Label_2226:
	return 6; // 0x8b2 Return
	
Label_2222:
	var_238_string = "Can't find lsh animation : "; // 0x8ae PushS
	var_239_int = var_238_string + var_227_string; // 0x8af Add
	Trace(var_239_int); // 0x8b0 Func
}


func_1957(var_30_bool)
{
	var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); // 0x7a5 PushV
	GetPosition(var_33_cvector); // 0x7a6 ObjFunc
	var_34_bool = 0; var_35_cvector = CVector(0,0,0); // 0x7a8 PushV
	var_35_cvector = var_33_cvector; // 0x7a9 Mov
	func_1947(var_34_bool, var_35_cvector); // 0x7aa NEW_2
	var_30_bool = var_34_bool; // 0x7ab Mov
	return 2; // 0x7ad Return
}


func_1446(var_0_object, var_537_int, var_538_object)
{
	var_540_object = Obj(); var_541_bool = 0; var_542_int = 0; var_543_bool = 0; var_544_object = Obj(); var_545_bool = 0; var_546_int = 0; var_547_bool = 0; // 0x5a6 PushV
	var_0_object = var_538_object; // 0x5a7 TMov
	var_548_bool = 0; var_549_object = Obj(); var_550_float = 0; // 0x5a8 PushV
	var_549_object = var_538_object; // 0x5a9 Mov
	var_550_float = 70.0; // 0x5aa MovF
	func_1971(var_549_object, var_550_float); // 0x5ab NEW_2
	var_551_bool = var_548_bool == 0; // 0x5ad Not
	if(var_551_bool == 0) goto Label_1457; // 0x5ae JumpB
	var_537_int = -2; // 0x5af MovI
	return 8; // 0x5b0 Return
	
Label_1457:
	CreateDialog(var_544_object); // 0x5b1 Func
	var_552_int = 0; // 0x5b3 PushV
	func_2436(var_552_int); // 0x5b4 NEW_2
	SetNPCName(var_552_int); // 0x5b6 ObjFunc
	var_553_int = 0; // 0x5b8 PushV
	func_2434(var_553_int); // 0x5b9 NEW_2
	SetNPCDescription(var_553_int); // 0x5bb ObjFunc
	var_554_string = ""; // 0x5bd PushV
	func_2438(var_554_string); // 0x5be NEW_2
	SetPhoto(var_554_string); // 0x5c0 ObjFunc
	var_555_string = ""; // 0x5c2 PushV
	func_2440(var_555_string); // 0x5c3 NEW_2
	SetPhoto2(var_555_string); // 0x5c5 ObjFunc
	var_556_int = 0; // 0x5c7 PushV
	func_2757(var_556_int); // 0x5c8 NEW_2
	SetPlayerName(var_556_int); // 0x5ca ObjFunc
	var_546_int = -1; // 0x5cc MovI
	IsOverrideActive(var_545_bool); // 0x5cd Func
	var_557_bool = var_545_bool; // 0x5cf Push
	if(var_557_bool == 0) goto Label_1491; // 0x5d0 JumpB
	var_537_int = -2; // 0x5d1 MovI
	return 8; // 0x5d2 Return
	
Label_1491:
	DoDialog(var_544_object); // 0x5d3 Func
	var_558_bool = 0; var_559_object = Obj(); // 0x5d5 PushV
	var_560_object = Obj(); // 0x5d6 PushV
	func_2249(var_560_object); // 0x5d7 NEW_2
	var_559_object = var_560_object; // 0x5d8 Mov
	func_2058(var_558_bool, var_559_object); // 0x5da NEW_2
	var_561_object = Obj(); var_562_object = Obj(); // 0x5dc PushV
	var_561_object = var_538_object; // 0x5dd Mov
	var_562_object = var_544_object; // 0x5de Mov
	TaskCall(9); // 0x5df TaskCall
	func_1527(var_563_object, var_564_object, var_565_string, var_566_bool, var_561_object, var_562_object); // 0x5e0 NEW_2
	TaskReturn(); // 0x5e1 TaskReturn
	IsDialogEnd(var_547_bool); // 0x5e3 ObjFunc
	
Label_1509:
	var_591_bool = var_547_bool == 0; // 0x5e5 Not
	if(var_591_bool == 0) goto Label_1516; // 0x5e6 JumpB
	sync(); // 0x5e7 Func
	IsDialogEnd(var_547_bool); // 0x5e9 ObjFunc
	goto Label_1509; // 0x5eb Jump
	
Label_1516:
	var_592_object = Obj(); // 0x5ec PushV
	var_592_object = var_538_object; // 0x5ed Mov
	func_2040(); // 0x5ee NEW_2
	StopDialog(var_544_object); // 0x5f0 Func
	GetReturnValue(var_546_int); // 0x5f2 ObjFunc
	var_537_int = var_546_int; // 0x5f4 Mov
	return 8; // 0x5f5 Return
}


func_1709()
{
	var_595_float = 0; var_596_float = 0; // 0x6ad PushV
	var_597_int = 8; // 0x6ae PushI
	var_598_int = 16; // 0x6af PushI
	rand(var_596_float, var_597_int, var_598_int); // 0x6b0 Func
	var_599_int = 10; // 0x6b2 PushI
	SetTimer(var_599_int, var_596_float); // 0x6b3 Func
	return 2; // 0x6b5 Return
}


func_1966(var_26_bool)
{
	var_27_bool = 0; var_28_bool = 0; // 0x7ae PushV
	IsLoaded(var_28_bool); // 0x7af Func
	var_26_bool = var_28_bool; // 0x7b1 Mov
	return 2; // 0x7b2 Return
}


func_2481(var_108_object)
{
	var_110_bool = 0; var_111_object = Obj(); var_112_float = 0; // 0x9b2 PushV
	var_111_object = var_108_object; // 0x9b3 Mov
	var_112_float = -0.05; // 0x9b4 MovF
	func_2325(var_110_bool, var_111_object, var_112_float); // 0x9b5 NEW_2
	return 0; // 0x9b7 Return
}


func_2227(var_155_bool, var_156_string)
{
	var_157_bool = 0; var_158_bool = 0; // 0x8b3 PushV
	var_159_bool = 0; // 0x8b4 PushV
	func_2442(var_159_bool); // 0x8b5 NEW_2
	if(var_159_bool == 0) goto Label_2240; // 0x8b7 JumpB
	lshHasSpeech(var_158_bool, var_156_string); // 0x8b8 Func
	var_160_bool = var_158_bool; // 0x8ba Push
	if(var_160_bool == 0) goto Label_2240; // 0x8bb JumpB
	lshPlaySpeech(var_156_string); // 0x8bc Func
	var_155_bool = 1; // 0x8be MovB
	return 2; // 0x8bf Return
	
Label_2240:
	var_155_bool = 0; // 0x8c0 MovB
	return 2; // 0x8c1 Return
}


func_2740(var_90_object)
{
	var_91_object = Obj(); var_92_object = Obj(); var_93_object = Obj(); var_94_object = Obj(); // 0xab4 PushV
	GetMainOutdoorScene(var_93_object); // 0xab5 Func
	var_95_bool = var_93_object == 0; // 0xab7 NullEq
	if(var_95_bool == 0) goto Label_2751; // 0xab8 JumpB
	var_96_string = "Can't find main outdoor scene"; // 0xab9 PushS
	Trace(var_96_string); // 0xaba Func
	var_94_object = 0; // 0xabc SetNull
	var_90_object = var_94_object; // 0xabd Mov
	return 4; // 0xabe Return
	
Label_2751:
	GetMap(var_94_object); // 0xabf ObjFunc
	var_90_object = var_94_object; // 0xac1 Mov
	return 4; // 0xac2 Return
}


func_1971(var_60_bool, var_62_float)
{
	var_63_float = 0; var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); var_66_cvector = CVector(0,0,0); var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0); var_70_bool = 0; var_71_bool = 0; var_72_float = 0; var_73_cvector = CVector(0,0,0); var_74_cvector = CVector(0,0,0); var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0); var_79_bool = 0; var_80_bool = 0; // 0x7b3 PushV
	GetPosition(var_73_cvector); // 0x7b4 ObjFunc
	GetEyesHeight(var_72_float); // 0x7b6 ObjFunc
	var_81_float = GetByIndex(var_73_cvector, 1); // 0x7b8 PushE
	var_81_float = var_81_float + var_72_float; // 0x7b9 Add2
	SetByIndex(var_73_cvector, 1) = var_81_float; // 0x7ba PopE
	GetPosition(var_74_cvector); // 0x7bb Func
	GetEyesHeight(var_72_float); // 0x7bd Func
	var_82_float = GetByIndex(var_74_cvector, 1); // 0x7bf PushE
	var_82_float = var_82_float + var_72_float; // 0x7c0 Add2
	SetByIndex(var_74_cvector, 1) = var_82_float; // 0x7c1 PopE
	var_75_cvector = var_73_cvector - var_74_cvector; // 0x7c2 Sub2
	var_83_float = GetByIndex(var_75_cvector, 1); // 0x7c3 PushE
	var_83_float = 0; // 0x7c4 MovI
	SetByIndex(var_75_cvector, 1) = var_83_float; // 0x7c5 PopE
	var_84_int = var_75_cvector | var_75_cvector; // 0x7c6 Or
	var_85_float = sqrt(var_84_int); // 0x7c7 Sqrt
	var_75_cvector = var_75_cvector / var_75_cvector; // 0x7c8 Div2
	var_76_cvector = -var_75_cvector; // 0x7c9 Neg2
	var_86_float = var_75_cvector * var_62_float; // 0x7ca Mult
	var_87_cvector = CVector(0,0,0); var_88_cvector = CVector(0,0,0); // 0x7cb PushV
	var_89_cvector = CVector(0.0, 1.0, 0.0); // 0x7cc PushVec
	var_88_cvector = var_76_cvector ^ var_89_cvector; // 0x7cd Xor2
	func_2255(var_87_cvector, var_88_cvector); // 0x7ce NEW_2
	var_95_int = 25; // 0x7d0 PushI
	var_96_float = var_87_cvector * var_95_int; // 0x7d1 Mult
	var_97_int = var_86_float + var_96_float; // 0x7d2 Add
	var_98_cvector = CVector(0.0, 10.0, 0.0); // 0x7d3 PushVec
	var_77_cvector = var_97_int - var_98_cvector; // 0x7d4 Sub2
	var_78_cvector = var_74_cvector + var_77_cvector; // 0x7d5 Add2
	IsOverrideActive(var_79_bool); // 0x7d6 Func
	var_99_bool = var_79_bool; // 0x7d8 Push
	if(var_99_bool == 0) goto Label_2012; // 0x7d9 JumpB
	var_60_bool = 0; // 0x7da MovB
	return 18; // 0x7db Return
	
Label_2012:
	StopWorld(); // 0x7dc Func
	var_100_bool = 1; // 0x7de PushB
	CameraTransit(var_78_cvector, var_76_cvector, var_100_bool); // 0x7df Func
	var_101_float = GetByIndex(var_77_cvector, 0); // 0x7e1 PushE
	var_102_float = GetByIndex(var_77_cvector, 2); // 0x7e2 PushE
	Rotate(var_101_float, var_102_float); // 0x7e3 Func
	var_103_bool = 0; // 0x7e5 PushV
	func_2442(var_103_bool); // 0x7e6 NEW_2
	if(var_103_bool == 0) goto Label_2026; // 0x7e8 JumpB
	goto Label_2034; // 0x7e9 Jump
	
Label_2034:
	CameraWaitForPlayFinish(); // 0x7f2 Func
	ResumeWorld(); // 0x7f4 Func
	var_60_bool = 1; // 0x7f6 MovB
	return 18; // 0x7f7 Return
	
Label_2026:
	var_104_string = "head"; // 0x7ea PushS
	HasAnimationTrack(var_80_bool, var_104_string); // 0x7eb Func
	var_105_bool = var_80_bool; // 0x7ed Push
	if(var_105_bool == 0) goto Label_2034; // 0x7ee JumpB
	var_106_string = "head"; // 0x7ef PushS
	LookAsyncCamera(var_106_string); // 0x7f0 Func
}


func_1718()
{
	var_594_int = 10; // 0x6b6 PushI
	KillTimer(var_594_int); // 0x6b7 Func
	return 0; // 0x6b9 Return
}


func_2488()
{
	var_40_string = "oob1Eva2"; // 0x9b9 PushS
	var_41_int = 1; // 0x9ba PushI
	SetVariable(var_40_string, var_41_int); // 0x9bb Func
	return 0; // 0x9bd Return
}


func_2494()
{
	var_88_object = Obj(); var_89_object = Obj(); // 0x9be PushV
	var_90_object = Obj(); // 0x9bf PushV
	func_2740(var_90_object); // 0x9c0 NEW_2
	var_89_object = var_90_object; // 0x9c1 Mov
	var_97_string = "b1q01BakWillBeAt18"; // 0x9c3 PushS
	var_98_string = "pt_map_eva"; // 0x9c4 PushS
	var_99_int = 3; // 0x9c5 PushI
	var_100_int = 524806; // 0x9c6 PushI
	var_101_float = 0; // 0x9c7 PushV
	func_2382(var_101_float); // 0x9c8 NEW_2
	AddMark(var_97_string, var_98_string, var_99_int, var_100_int, var_101_float); // 0x9ca ObjFunc
	return 2; // 0x9cc Return
}


func_2242()
{
	var_29_bool = 0; // 0x8c2 PushV
	func_2442(var_29_bool); // 0x8c3 NEW_2
	if(var_29_bool == 0) goto Label_2248; // 0x8c5 JumpB
	lshStopSpeech(); // 0x8c6 Func
	
Label_2248:
	return 0; // 0x8c8 Return
}


func_2757(var_112_int)
{
	var_113_int = 0; var_114_int = 0; // 0xac5 PushV
	var_115_string = "branch"; // 0xac6 PushS
	GetVariable(var_115_string, var_114_int); // 0xac7 Func
	var_116_int = 0; // 0xac9 PushI
	var_117_bool = var_114_int == var_116_int; // 0xaca Eq
	if(var_117_bool == 0) goto Label_2767; // 0xacb JumpB
	var_112_int = 1; // 0xacc MovI
	return 2; // 0xacd Return
	
Label_2767:
	var_118_int = 1; // 0xacf PushI
	var_119_bool = var_114_int == var_118_int; // 0xad0 Eq
	if(var_119_bool == 0) goto Label_2772; // 0xad1 JumpB
	var_112_int = 2; // 0xad2 MovI
	return 2; // 0xad3 Return
	
Label_2772:
	var_112_int = 3; // 0xad4 MovI
	return 2; // 0xad5 Return
}


func_2249(var_123_object)
{
	var_124_object = Obj(); var_125_object = Obj(); // 0x8c9 PushV
	self(var_125_object); // 0x8ca Func
	var_123_object = var_125_object; // 0x8cc Mov
	return 2; // 0x8cd Return
}


func_2510()
{
	var_86_string = "playsound"; // 0x9cf PushS
	var_87_string = "giveitem"; // 0x9d0 PushS
	TriggerWorld(var_86_string, var_87_string); // 0x9d1 Func
	return 0; // 0x9d3 Return
}


func_2255(var_87_cvector, var_88_cvector)
{
	var_90_float = 0; var_91_float = 0; // 0x8cf PushV
	var_92_int = var_88_cvector | var_88_cvector; // 0x8d0 Or
	var_91_float = sqrt(var_92_int); // 0x8d1 Sqrt2
	var_93_float = 0.0; // 0x8d2 PushF
	var_94_bool = var_91_float < var_93_float; // 0x8d3 LT
	if(var_94_bool == 0) goto Label_2263; // 0x8d4 JumpB
	var_87_cvector = CVector(0.0, 0.0, 0.0); // 0x8d5 MovV
	return 2; // 0x8d6 Return
	
Label_2263:
	var_87_cvector = var_88_cvector / var_88_cvector; // 0x8d7 Div2
	return 2; // 0x8d8 Return
}


func_2516(var_88_object)
{
	var_90_string = "rifle ammo30 is given"; // 0x9d5 PushS
	Trace(var_90_string); // 0x9d6 Func
	var_91_object = Obj(); var_92_string = ""; var_93_int = 0; // 0x9d8 PushV
	var_91_object = var_88_object; // 0x9d9 Mov
	var_92_string = "rifle_ammo"; // 0x9da MovS
	var_93_int = 30; // 0x9db MovI
	func_2312(var_91_object, var_92_string, var_93_int); // 0x9dc NEW_2
	return 0; // 0x9de Return
}


func_2774(var_44_object)
{
	var_45_int = 0; var_46_int = 0; // 0xad6 PushV
	var_47_string = "mt_eva"; // 0xad7 PushS
	GetVariable(var_47_string, var_46_int); // 0xad8 Func
	var_48_bool = var_46_int == 0; // 0xada Not
	if(var_48_bool == 0) goto Label_2790; // 0xadb JumpB
	var_49_int = 0; var_50_object = Obj(); // 0xadc PushV
	var_50_object = var_44_object; // 0xadd Mov
	TaskCall(4); // 0xade TaskCall
	func_755(var_51_object, var_49_int, var_50_object); // 0xadf NEW_2
	TaskReturn(); // 0xae0 TaskReturn
	var_274_string = "mt_eva"; // 0xae2 PushS
	var_275_int = 1; // 0xae3 PushI
	SetVariable(var_274_string, var_275_int); // 0xae4 Func
	
Label_2790:
	var_276_bool = 0; var_277_int = 0; // 0xae6 PushV
	var_277_int = 1; // 0xae7 MovI
	func_2404(var_276_bool, var_277_int); // 0xae8 NEW_2
	if(var_276_bool == 0) goto Label_2802; // 0xaea JumpB
	var_279_int = 0; var_280_object = Obj(); // 0xaeb PushV
	var_280_object = var_44_object; // 0xaec Mov
	TaskCall(2); // 0xaed TaskCall
	func_290(var_281_object, var_279_int, var_280_object); // 0xaee NEW_2
	TaskReturn(); // 0xaef TaskReturn
	return 2; // 0xaf1 Return
	
Label_2802:
	var_393_bool = 0; var_394_int = 0; // 0xaf2 PushV
	var_394_int = 2; // 0xaf3 MovI
	func_2404(var_393_bool, var_394_int); // 0xaf4 NEW_2
	if(var_393_bool == 0) goto Label_2814; // 0xaf6 JumpB
	var_395_int = 0; var_396_object = Obj(); // 0xaf7 PushV
	var_396_object = var_44_object; // 0xaf8 Mov
	TaskCall(0); // 0xaf9 TaskCall
	func_0(var_397_object, var_395_int, var_396_object); // 0xafa NEW_2
	TaskReturn(); // 0xafb TaskReturn
	return 2; // 0xafd Return
	
Label_2814:
	var_457_bool = 0; var_458_int = 0; // 0xafe PushV
	var_458_int = 9; // 0xaff MovI
	func_2404(var_457_bool, var_458_int); // 0xb00 NEW_2
	if(var_457_bool == 0) goto Label_2826; // 0xb02 JumpB
	var_459_int = 0; var_460_object = Obj(); // 0xb03 PushV
	var_460_object = var_44_object; // 0xb04 Mov
	TaskCall(6); // 0xb05 TaskCall
	func_1004(var_461_object, var_459_int, var_460_object); // 0xb06 NEW_2
	TaskReturn(); // 0xb07 TaskReturn
	return 2; // 0xb09 Return
	
Label_2826:
	var_537_int = 0; var_538_object = Obj(); // 0xb0a PushV
	var_538_object = var_44_object; // 0xb0b Mov
	TaskCall(8); // 0xb0c TaskCall
	func_1446(var_539_object, var_537_int, var_538_object); // 0xb0d NEW_2
	TaskReturn(); // 0xb0e TaskReturn
	return 2; // 0xb10 Return
}


func_2265(var_75_float, var_76_float, var_77_float, var_78_float)
{
	var_79_bool = var_76_float < var_77_float; // 0x8da LT
	if(var_79_bool == 0) goto Label_2270; // 0x8db JumpB
	var_75_float = var_77_float; // 0x8dc Mov
	return 0; // 0x8dd Return
	
Label_2270:
	var_80_bool = var_76_float > var_78_float; // 0x8de GT
	if(var_80_bool == 0) goto Label_2274; // 0x8df JumpB
	var_75_float = var_78_float; // 0x8e0 Mov
	return 0; // 0x8e1 Return
	
Label_2274:
	var_75_float = var_76_float; // 0x8e2 Mov
	return 0; // 0x8e3 Return
}


func_2527(var_44_object)
{
	var_46_bool = 0; var_47_object = Obj(); var_48_float = 0; // 0x9e0 PushV
	var_47_object = var_44_object; // 0x9e1 Mov
	var_48_float = -0.02; // 0x9e2 MovF
	func_2325(var_46_bool, var_47_object, var_48_float); // 0x9e3 NEW_2
	return 0; // 0x9e5 Return
}


func_2276(var_321_int, var_322_string)
{
	var_323_int = 0; var_324_int = 0; // 0x8e4 PushV
	GetVariable(var_322_string, var_324_int); // 0x8e5 Func
	var_321_int = var_324_int; // 0x8e7 Mov
	return 2; // 0x8e8 Return
}


func_2534()
{
	var_106_string = "playsound"; // 0x9e7 PushS
	var_107_string = "mapmark"; // 0x9e8 PushS
	TriggerWorld(var_106_string, var_107_string); // 0x9e9 Func
	return 0; // 0x9eb Return
}


func_2281(var_107_int, var_108_int)
{
	var_109_object = Obj(); var_110_object = Obj(); // 0x8e9 PushV
	CreateIntVector(var_110_object); // 0x8ea Func
	add(var_107_int); // 0x8ec ObjFunc
	add(var_108_int); // 0x8ee ObjFunc
	var_111_int = 3; // 0x8f0 PushI
	SendWorldWndMessage(var_111_int, var_110_object); // 0x8f1 Func
	return 2; // 0x8f3 Return
}


func_489(var_2_object, var_310_string)
{
	var_311_bool = 0; // 0x1ea PushV
	func_2442(var_311_bool); // 0x1eb NEW_2
	var_312_bool = var_311_bool == 0; // 0x1ed Not
	if(var_312_bool == 0) goto Label_496; // 0x1ee JumpB
	return 0; // 0x1ef Return
	
Label_496:
	var_313_bool = var_310_string == var_2_object; // 0x1f0 Eq
	if(var_313_bool == 0) goto Label_499; // 0x1f1 JumpB
	return 0; // 0x1f2 Return
	
Label_499:
	var_314_string = ""; var_315_bool = 0; // 0x1f3 PushV
	var_314_string = var_310_string; // 0x1f4 Mov
	var_316_string = ""; // 0x1f5 PushS
	var_317_bool = var_310_string == var_316_string; // 0x1f6 Eq
	if(var_317_bool == 0) goto Label_506; // 0x1f7 JumpB
	var_315_bool = 0; // 0x1f8 MovB
	goto Label_507; // 0x1f9 Jump
	
Label_507:
	func_2212(var_314_string, var_315_bool); // 0x1fb NEW_2
	var_2_object = var_310_string; // 0x1fd TMov
	return 0; // 0x1fe Return
	
Label_506:
	var_315_bool = 1; // 0x1fa MovB
}


func_2540(var_499_bool)
{
	var_501_int = 0; var_502_string = ""; // 0x9ed PushV
	var_502_string = "b9q01"; // 0x9ee MovS
	func_2276(var_501_int, var_502_string); // 0x9ef NEW_2
	var_503_int = 1; // 0x9f1 PushI
	var_504_bool = var_501_int == var_503_int; // 0x9f2 Eq
	if(var_504_bool == 0) goto Label_2550; // 0x9f3 JumpB
	var_499_bool = 1; // 0x9f4 MovB
	return 0; // 0x9f5 Return
	
Label_2550:
	var_499_bool = 0; // 0x9f6 MovB
	return 0; // 0x9f7 Return
}


func_1004(var_0_object, var_459_int, var_460_object)
{
	var_462_object = Obj(); var_463_bool = 0; var_464_int = 0; var_465_bool = 0; var_466_object = Obj(); var_467_bool = 0; var_468_int = 0; var_469_bool = 0; // 0x3ec PushV
	var_0_object = var_460_object; // 0x3ed TMov
	var_470_bool = 0; var_471_object = Obj(); var_472_float = 0; // 0x3ee PushV
	var_471_object = var_460_object; // 0x3ef Mov
	var_472_float = 70.0; // 0x3f0 MovF
	func_1971(var_471_object, var_472_float); // 0x3f1 NEW_2
	var_473_bool = var_470_bool == 0; // 0x3f3 Not
	if(var_473_bool == 0) goto Label_1015; // 0x3f4 JumpB
	var_459_int = -2; // 0x3f5 MovI
	return 8; // 0x3f6 Return
	
Label_1015:
	CreateDialog(var_466_object); // 0x3f7 Func
	var_474_int = 0; // 0x3f9 PushV
	func_2436(var_474_int); // 0x3fa NEW_2
	SetNPCName(var_474_int); // 0x3fc ObjFunc
	var_475_int = 0; // 0x3fe PushV
	func_2434(var_475_int); // 0x3ff NEW_2
	SetNPCDescription(var_475_int); // 0x401 ObjFunc
	var_476_string = ""; // 0x403 PushV
	func_2438(var_476_string); // 0x404 NEW_2
	SetPhoto(var_476_string); // 0x406 ObjFunc
	var_477_string = ""; // 0x408 PushV
	func_2440(var_477_string); // 0x409 NEW_2
	SetPhoto2(var_477_string); // 0x40b ObjFunc
	var_478_int = 0; // 0x40d PushV
	func_2757(var_478_int); // 0x40e NEW_2
	SetPlayerName(var_478_int); // 0x410 ObjFunc
	var_468_int = -1; // 0x412 MovI
	IsOverrideActive(var_467_bool); // 0x413 Func
	var_479_bool = var_467_bool; // 0x415 Push
	if(var_479_bool == 0) goto Label_1049; // 0x416 JumpB
	var_459_int = -2; // 0x417 MovI
	return 8; // 0x418 Return
	
Label_1049:
	DoDialog(var_466_object); // 0x419 Func
	var_480_bool = 0; var_481_object = Obj(); // 0x41b PushV
	var_482_object = Obj(); // 0x41c PushV
	func_2249(var_482_object); // 0x41d NEW_2
	var_481_object = var_482_object; // 0x41e Mov
	func_2058(var_480_bool, var_481_object); // 0x420 NEW_2
	var_483_object = Obj(); var_484_object = Obj(); // 0x422 PushV
	var_483_object = var_460_object; // 0x423 Mov
	var_484_object = var_466_object; // 0x424 Mov
	TaskCall(7); // 0x425 TaskCall
	func_1085(var_485_object, var_486_object, var_487_string, var_488_bool, var_483_object, var_484_object); // 0x426 NEW_2
	TaskReturn(); // 0x427 TaskReturn
	IsDialogEnd(var_469_bool); // 0x429 ObjFunc
	
Label_1067:
	var_535_bool = var_469_bool == 0; // 0x42b Not
	if(var_535_bool == 0) goto Label_1074; // 0x42c JumpB
	sync(); // 0x42d Func
	IsDialogEnd(var_469_bool); // 0x42f ObjFunc
	goto Label_1067; // 0x431 Jump
	
Label_1074:
	var_536_object = Obj(); // 0x432 PushV
	var_536_object = var_460_object; // 0x433 Mov
	func_2040(); // 0x434 NEW_2
	StopDialog(var_466_object); // 0x436 Func
	GetReturnValue(var_468_int); // 0x438 ObjFunc
	var_459_int = var_468_int; // 0x43a Mov
	return 8; // 0x43b Return
}


func_755(var_0_object, var_49_int, var_50_object)
{
	var_52_object = Obj(); var_53_bool = 0; var_54_int = 0; var_55_bool = 0; var_56_object = Obj(); var_57_bool = 0; var_58_int = 0; var_59_bool = 0; // 0x2f3 PushV
	var_0_object = var_50_object; // 0x2f4 TMov
	var_60_bool = 0; var_61_object = Obj(); var_62_float = 0; // 0x2f5 PushV
	var_61_object = var_50_object; // 0x2f6 Mov
	var_62_float = 70.0; // 0x2f7 MovF
	func_1971(var_61_object, var_62_float); // 0x2f8 NEW_2
	var_107_bool = var_60_bool == 0; // 0x2fa Not
	if(var_107_bool == 0) goto Label_766; // 0x2fb JumpB
	var_49_int = -2; // 0x2fc MovI
	return 8; // 0x2fd Return
	
Label_766:
	CreateDialog(var_56_object); // 0x2fe Func
	var_108_int = 0; // 0x300 PushV
	func_2436(var_108_int); // 0x301 NEW_2
	SetNPCName(var_108_int); // 0x303 ObjFunc
	var_109_int = 0; // 0x305 PushV
	func_2434(var_109_int); // 0x306 NEW_2
	SetNPCDescription(var_109_int); // 0x308 ObjFunc
	var_110_string = ""; // 0x30a PushV
	func_2438(var_110_string); // 0x30b NEW_2
	SetPhoto(var_110_string); // 0x30d ObjFunc
	var_111_string = ""; // 0x30f PushV
	func_2440(var_111_string); // 0x310 NEW_2
	SetPhoto2(var_111_string); // 0x312 ObjFunc
	var_112_int = 0; // 0x314 PushV
	func_2757(var_112_int); // 0x315 NEW_2
	SetPlayerName(var_112_int); // 0x317 ObjFunc
	var_58_int = -1; // 0x319 MovI
	IsOverrideActive(var_57_bool); // 0x31a Func
	var_120_bool = var_57_bool; // 0x31c Push
	if(var_120_bool == 0) goto Label_800; // 0x31d JumpB
	var_49_int = -2; // 0x31e MovI
	return 8; // 0x31f Return
	
Label_800:
	DoDialog(var_56_object); // 0x320 Func
	var_121_bool = 0; var_122_object = Obj(); // 0x322 PushV
	var_123_object = Obj(); // 0x323 PushV
	func_2249(var_123_object); // 0x324 NEW_2
	var_122_object = var_123_object; // 0x325 Mov
	func_2058(var_121_bool, var_122_object); // 0x327 NEW_2
	var_216_object = Obj(); var_217_object = Obj(); // 0x329 PushV
	var_216_object = var_50_object; // 0x32a Mov
	var_217_object = var_56_object; // 0x32b Mov
	TaskCall(5); // 0x32c TaskCall
	func_836(var_218_object, var_219_object, var_220_string, var_221_bool, var_216_object, var_217_object); // 0x32d NEW_2
	TaskReturn(); // 0x32e TaskReturn
	IsDialogEnd(var_59_bool); // 0x330 ObjFunc
	
Label_818:
	var_265_bool = var_59_bool == 0; // 0x332 Not
	if(var_265_bool == 0) goto Label_825; // 0x333 JumpB
	sync(); // 0x334 Func
	IsDialogEnd(var_59_bool); // 0x336 ObjFunc
	goto Label_818; // 0x338 Jump
	
Label_825:
	var_266_object = Obj(); // 0x339 PushV
	var_266_object = var_50_object; // 0x33a Mov
	func_2040(); // 0x33b NEW_2
	StopDialog(var_56_object); // 0x33d Func
	GetReturnValue(var_58_int); // 0x33f ObjFunc
	var_49_int = var_58_int; // 0x341 Mov
	return 8; // 0x342 Return
}


func_2293(var_97_object, var_98_int)
{
	var_99_int = 0; var_100_int = 0; var_101_bool = 0; var_102_int = 0; var_103_int = 0; var_104_bool = 0; // 0x8f5 PushV
	GetItemID(var_102_int); // 0x8f6 ObjFunc
	var_105_string = "Category"; // 0x8f8 PushS
	GetInvItemProperty(var_103_int, var_102_int, var_105_string); // 0x8f9 Func
	AddItem(var_104_bool, var_97_object, var_103_int, var_98_int); // 0x8fb ObjFunc
	var_106_bool = var_104_bool == 0; // 0x8fd Not
	if(var_106_bool == 0) goto Label_2306; // 0x8fe JumpB
	DropItems(var_97_object, var_98_int); // 0x8ff ObjFunc
	goto Label_2311; // 0x901 Jump
	
Label_2311:
	return 6; // 0x907 Return
	
Label_2306:
	var_107_int = 0; var_108_int = 0; // 0x902 PushV
	var_107_int = var_102_int; // 0x903 Mov
	var_108_int = var_98_int; // 0x904 Mov
	func_2281(var_107_int, var_108_int); // 0x905 NEW_2
}


func_1527(var_0_object, var_1_object, var_2_object, var_3_string, var_561_object, var_562_object)
{
	var_0_object = var_562_object; // 0x5f8 TMov
	var_1_object = var_561_object; // 0x5f9 TMov
	var_3_string = 0; // 0x5fa TMovB
	var_567_int = 1; // 0x5fb PushI
	if(var_567_int == 0) goto Label_1555; // 0x5fc JumpB
	var_568_string = ""; // 0x5fd PushV
	var_568_string = "Neutral"; // 0x5fe MovS
	func_1585(var_562_object, var_568_string); // 0x5ff NEW_2
	var_576_int = 540551; // 0x601 PushI
	SetMessage(var_576_int); // 0x602 TObjFunc
	ClearReplies(); // 0x604 TObjFunc
	var_577_int = 540552; // 0x606 PushI
	var_578_int = -1; // 0x607 PushI
	var_579_int = 42561; // 0x608 PushI
	AddReply(var_577_int, var_578_int, var_579_int); // 0x609 TObjFunc
	var_580_int = 540795; // 0x60b PushI
	var_581_int = -1; // 0x60c PushI
	var_582_int = 42844; // 0x60d PushI
	AddReply(var_580_int, var_581_int, var_582_int); // 0x60e TObjFunc
	goto Label_1555; // 0x610 Jump
	
Label_1555:
	var_583_bool = 0; // 0x613 PushV
	func_2442(var_583_bool); // 0x614 NEW_2
	if(var_583_bool == 0) goto Label_1570; // 0x616 JumpB
	
Label_1559:
	lshWaitForAnimEnd(); // 0x617 Func
	var_584_string = var_3_string; // 0x619 PushT
	if(var_584_string == 0) goto Label_1564; // 0x61a JumpB
	goto Label_1569; // 0x61b Jump
	
Label_1569:
	goto Label_1584; // 0x621 Jump
	
Label_1584:
	return 0; // 0x630 Return
	
Label_1564:
	var_585_string = ""; // 0x61c PushV
	var_585_string = var_2_object; // 0x61d MovT
	func_2196(var_585_string); // 0x61e NEW_2
	goto Label_1559; // 0x620 Jump
	
Label_1570:
	var_586_string = "all"; // 0x622 PushS
	var_587_string = "idle"; // 0x623 PushS
	PlayAnimation(var_586_string, var_587_string); // 0x624 Func
	
Label_1574:
	WaitForAnimEnd(); // 0x626 Func
	var_588_string = var_3_string; // 0x628 PushT
	if(var_588_string == 0) goto Label_1579; // 0x629 JumpB
	goto Label_1584; // 0x62a Jump
	
Label_1579:
	var_589_string = "all"; // 0x62b PushS
	var_590_string = "idle"; // 0x62c PushS
	PlayAnimation(var_589_string, var_590_string); // 0x62d Func
	goto Label_1574; // 0x62f Jump
}


func_2552(var_509_bool)
{
	var_511_int = 0; var_512_string = ""; // 0x9f9 PushV
	var_512_string = "oob9Eva1"; // 0x9fa MovS
	func_2276(var_511_int, var_512_string); // 0x9fb NEW_2
	var_513_int = 0; // 0x9fd PushI
	var_514_bool = var_511_int == var_513_int; // 0x9fe Eq
	if(var_514_bool == 0) goto Label_2562; // 0x9ff JumpB
	var_509_bool = 1; // 0xa00 MovB
	return 0; // 0xa01 Return
	
Label_2562:
	var_509_bool = 0; // 0xa02 MovB
	return 0; // 0xa03 Return
}


