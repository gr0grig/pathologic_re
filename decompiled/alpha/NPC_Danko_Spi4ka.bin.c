task_0_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool)
{
	StopGroup0(); // 0x3 Func
	return 0; // 0x5 Return
}


task_1_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool)
{
	TaskCall(0); // 0x1e TaskCall
	func_0(); // 0x1f Call
	TaskReturn(); // 0x20 TaskReturn
	return 0; // 0x22 Return
}


task_1_event_0(var_0_object, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool)
{
	var_21_object = Obj(); // 0x24 PushV
	var_21_object = var_20_bool; // 0x25 Mov
	func_4023(var_21_object); // 0x26 Call
	return 0; // 0x28 Return
}


task_1_event_10(var_0_object, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool)
{
	var_21_bool = 0; var_22_object = Obj(); // 0x2a PushV
	var_22_object = var_20_bool; // 0x2b Mov
	func_2921(var_22_object); // 0x2c Call
	WaitForAnimEnd(); // 0x2e Func
	return 0; // 0x30 Return
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool)
{
	var_22_int = 1; // 0xc5 PushI
	if(var_22_int == 0) goto Label_316; // 0xc6 JumpB
	func_3016(); // 0xc8 Call
	var_24_int = 413; // 0xca PushI
	var_25_bool = var_20_string == var_24_int; // 0xcb Eq
	if(var_25_bool == 0) goto Label_235; // 0xcc JumpB
	var_26_object = Obj(); var_27_object = Obj(); // 0xcd PushV
	var_26_object = var_1_object; // 0xce MovT
	var_27_object = var_0_object; // 0xcf MovT
	func_3363(); // 0xd0 Call
	var_30_string = ""; // 0xd2 PushV
	var_30_string = "Neutral"; // 0xd3 MovS
	func_180(var_21_bool, var_30_string); // 0xd4 Call
	var_45_int = 356; // 0xd6 PushI
	SetMessage(var_45_int); // 0xd7 TObjFunc
	ClearReplies(); // 0xd9 TObjFunc
	var_46_int = 357; // 0xdb PushI
	var_47_int = 417; // 0xdc PushI
	var_48_int = 414; // 0xdd PushI
	AddReply(var_46_int, var_47_int, var_48_int); // 0xde TObjFunc
	var_49_int = 358; // 0xe0 PushI
	var_50_int = 418; // 0xe1 PushI
	var_51_int = 415; // 0xe2 PushI
	AddReply(var_49_int, var_50_int, var_51_int); // 0xe3 TObjFunc
	var_52_int = 359; // 0xe5 PushI
	var_53_int = -1; // 0xe6 PushI
	var_54_int = 416; // 0xe7 PushI
	AddReply(var_52_int, var_53_int, var_54_int); // 0xe8 TObjFunc
	return 0; // 0xea Return
	
Label_235:
	var_55_int = 418; // 0xeb PushI
	var_56_bool = var_20_string == var_55_int; // 0xec Eq
	if(var_56_bool == 0) goto Label_258; // 0xed JumpB
	var_57_string = ""; // 0xee PushV
	var_57_string = "Neutral"; // 0xef MovS
	func_180(var_21_bool, var_57_string); // 0xf0 Call
	var_58_int = 361; // 0xf2 PushI
	SetMessage(var_58_int); // 0xf3 TObjFunc
	ClearReplies(); // 0xf5 TObjFunc
	var_59_int = 362; // 0xf7 PushI
	var_60_int = 417; // 0xf8 PushI
	var_61_int = 419; // 0xf9 PushI
	AddReply(var_59_int, var_60_int, var_61_int); // 0xfa TObjFunc
	var_62_int = 363; // 0xfc PushI
	var_63_int = 417; // 0xfd PushI
	var_64_int = 420; // 0xfe PushI
	AddReply(var_62_int, var_63_int, var_64_int); // 0xff TObjFunc
	return 0; // 0x101 Return
	
Label_258:
	var_65_int = 417; // 0x102 PushI
	var_66_bool = var_20_string == var_65_int; // 0x103 Eq
	if(var_66_bool == 0) goto Label_281; // 0x104 JumpB
	var_67_string = ""; // 0x105 PushV
	var_67_string = "Neutral"; // 0x106 MovS
	func_180(var_21_bool, var_67_string); // 0x107 Call
	var_68_int = 360; // 0x109 PushI
	SetMessage(var_68_int); // 0x10a TObjFunc
	ClearReplies(); // 0x10c TObjFunc
	var_69_int = 364; // 0x10e PushI
	var_70_int = 425; // 0x10f PushI
	var_71_int = 423; // 0x110 PushI
	AddReply(var_69_int, var_70_int, var_71_int); // 0x111 TObjFunc
	var_72_int = 365; // 0x113 PushI
	var_73_int = 425; // 0x114 PushI
	var_74_int = 424; // 0x115 PushI
	AddReply(var_72_int, var_73_int, var_74_int); // 0x116 TObjFunc
	return 0; // 0x118 Return
	
Label_281:
	var_75_int = 425; // 0x119 PushI
	var_76_bool = var_20_string == var_75_int; // 0x11a Eq
	if(var_76_bool == 0) goto Label_304; // 0x11b JumpB
	var_77_string = ""; // 0x11c PushV
	var_77_string = "Neutral"; // 0x11d MovS
	func_180(var_21_bool, var_77_string); // 0x11e Call
	var_78_int = 366; // 0x120 PushI
	SetMessage(var_78_int); // 0x121 TObjFunc
	ClearReplies(); // 0x123 TObjFunc
	var_79_int = 367; // 0x125 PushI
	var_80_int = -1; // 0x126 PushI
	var_81_int = 426; // 0x127 PushI
	AddReply(var_79_int, var_80_int, var_81_int); // 0x128 TObjFunc
	var_82_int = 368; // 0x12a PushI
	var_83_int = -1; // 0x12b PushI
	var_84_int = 427; // 0x12c PushI
	AddReply(var_82_int, var_83_int, var_84_int); // 0x12d TObjFunc
	return 0; // 0x12f Return
	
Label_304:
	var_3_string = 1; // 0x130 TMovB
	var_85_bool = 0; // 0x131 PushV
	func_3115(var_85_bool); // 0x132 Call
	if(var_85_bool == 0) goto Label_312; // 0x134 JumpB
	lshStopAnimation(); // 0x135 Func
	goto Label_314; // 0x137 Jump
	
Label_314:
	return 0; // 0x13a Return
	
Label_312:
	StopAnimation(); // 0x138 Func
	
Label_316:
	return 0; // 0x13c Return
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool)
{
	var_22_int = 1; // 0x233 PushI
	if(var_22_int == 0) goto Label_1328; // 0x234 JumpB
	func_3016(); // 0x236 Call
	var_24_int = 6801; // 0x238 PushI
	var_25_bool = var_21_bool == var_24_int; // 0x239 Eq
	if(var_25_bool == 0) goto Label_601; // 0x23a JumpB
	var_26_object = Obj(); var_27_object = Obj(); // 0x23b PushV
	var_26_object = var_1_object; // 0x23c MovT
	var_27_object = var_0_object; // 0x23d MovT
	func_3117(); // 0x23e Call
	var_30_object = Obj(); var_31_object = Obj(); // 0x240 PushV
	var_30_object = var_1_object; // 0x241 MovT
	var_31_object = var_0_object; // 0x242 MovT
	func_3135(var_31_object); // 0x243 Call
	var_49_object = Obj(); var_50_object = Obj(); // 0x245 PushV
	var_49_object = var_1_object; // 0x246 MovT
	var_50_object = var_0_object; // 0x247 MovT
	func_3156(); // 0x248 Call
	var_53_object = Obj(); var_54_object = Obj(); // 0x24a PushV
	var_53_object = var_1_object; // 0x24b MovT
	var_54_object = var_0_object; // 0x24c MovT
	func_3273(); // 0x24d Call
	var_96_object = Obj(); var_97_object = Obj(); // 0x24f PushV
	var_96_object = var_1_object; // 0x250 MovT
	var_97_object = var_0_object; // 0x251 MovT
	func_3267(); // 0x252 Call
	var_100_object = Obj(); var_101_object = Obj(); // 0x254 PushV
	var_100_object = var_1_object; // 0x255 MovT
	var_101_object = var_0_object; // 0x256 MovT
	func_3369(); // 0x257 Call
	
Label_601:
	var_126_int = 6802; // 0x259 PushI
	var_127_bool = var_21_bool == var_126_int; // 0x25a Eq
	if(var_127_bool == 0) goto Label_614; // 0x25b JumpB
	var_128_object = Obj(); var_129_object = Obj(); // 0x25c PushV
	var_128_object = var_1_object; // 0x25d MovT
	var_129_object = var_0_object; // 0x25e MovT
	func_3117(); // 0x25f Call
	var_130_object = Obj(); var_131_object = Obj(); // 0x261 PushV
	var_130_object = var_1_object; // 0x262 MovT
	var_131_object = var_0_object; // 0x263 MovT
	func_3162(); // 0x264 Call
	
Label_614:
	var_170_int = 6800; // 0x266 PushI
	var_171_bool = var_21_bool == var_170_int; // 0x267 Eq
	if(var_171_bool == 0) goto Label_627; // 0x268 JumpB
	var_172_object = Obj(); var_173_object = Obj(); // 0x269 PushV
	var_172_object = var_1_object; // 0x26a MovT
	var_173_object = var_0_object; // 0x26b MovT
	func_3117(); // 0x26c Call
	var_174_object = Obj(); var_175_object = Obj(); // 0x26e PushV
	var_174_object = var_1_object; // 0x26f MovT
	var_175_object = var_0_object; // 0x270 MovT
	func_3162(); // 0x271 Call
	
Label_627:
	var_176_int = 6449; // 0x273 PushI
	var_177_bool = var_21_bool == var_176_int; // 0x274 Eq
	if(var_177_bool == 0) goto Label_635; // 0x275 JumpB
	var_178_object = Obj(); var_179_object = Obj(); // 0x276 PushV
	var_178_object = var_1_object; // 0x277 MovT
	var_179_object = var_0_object; // 0x278 MovT
	func_3123(); // 0x279 Call
	
Label_635:
	var_182_int = 6450; // 0x27b PushI
	var_183_bool = var_21_bool == var_182_int; // 0x27c Eq
	if(var_183_bool == 0) goto Label_643; // 0x27d JumpB
	var_184_object = Obj(); var_185_object = Obj(); // 0x27e PushV
	var_184_object = var_1_object; // 0x27f MovT
	var_185_object = var_0_object; // 0x280 MovT
	func_3123(); // 0x281 Call
	
Label_643:
	var_186_int = 6451; // 0x283 PushI
	var_187_bool = var_21_bool == var_186_int; // 0x284 Eq
	if(var_187_bool == 0) goto Label_651; // 0x285 JumpB
	var_188_object = Obj(); var_189_object = Obj(); // 0x286 PushV
	var_188_object = var_1_object; // 0x287 MovT
	var_189_object = var_0_object; // 0x288 MovT
	func_3123(); // 0x289 Call
	
Label_651:
	var_190_int = 6452; // 0x28b PushI
	var_191_bool = var_21_bool == var_190_int; // 0x28c Eq
	if(var_191_bool == 0) goto Label_659; // 0x28d JumpB
	var_192_object = Obj(); var_193_object = Obj(); // 0x28e PushV
	var_192_object = var_1_object; // 0x28f MovT
	var_193_object = var_0_object; // 0x290 MovT
	func_3123(); // 0x291 Call
	
Label_659:
	var_194_int = 9365; // 0x293 PushI
	var_195_bool = var_21_bool == var_194_int; // 0x294 Eq
	if(var_195_bool == 0) goto Label_667; // 0x295 JumpB
	var_196_object = Obj(); var_197_object = Obj(); // 0x296 PushV
	var_196_object = var_1_object; // 0x297 MovT
	var_197_object = var_0_object; // 0x298 MovT
	func_3123(); // 0x299 Call
	
Label_667:
	var_198_int = 6456; // 0x29b PushI
	var_199_bool = var_21_bool == var_198_int; // 0x29c Eq
	if(var_199_bool == 0) goto Label_675; // 0x29d JumpB
	var_200_object = Obj(); var_201_object = Obj(); // 0x29e PushV
	var_200_object = var_1_object; // 0x29f MovT
	var_201_object = var_0_object; // 0x2a0 MovT
	func_3129(); // 0x2a1 Call
	
Label_675:
	var_204_int = 6457; // 0x2a3 PushI
	var_205_bool = var_21_bool == var_204_int; // 0x2a4 Eq
	if(var_205_bool == 0) goto Label_683; // 0x2a5 JumpB
	var_206_object = Obj(); var_207_object = Obj(); // 0x2a6 PushV
	var_206_object = var_1_object; // 0x2a7 MovT
	var_207_object = var_0_object; // 0x2a8 MovT
	func_3129(); // 0x2a9 Call
	
Label_683:
	var_208_int = 6463; // 0x2ab PushI
	var_209_bool = var_21_bool == var_208_int; // 0x2ac Eq
	if(var_209_bool == 0) goto Label_691; // 0x2ad JumpB
	var_210_object = Obj(); var_211_object = Obj(); // 0x2ae PushV
	var_210_object = var_1_object; // 0x2af MovT
	var_211_object = var_0_object; // 0x2b0 MovT
	func_3129(); // 0x2b1 Call
	
Label_691:
	var_212_int = 6458; // 0x2b3 PushI
	var_213_bool = var_21_bool == var_212_int; // 0x2b4 Eq
	if(var_213_bool == 0) goto Label_699; // 0x2b5 JumpB
	var_214_object = Obj(); var_215_object = Obj(); // 0x2b6 PushV
	var_214_object = var_1_object; // 0x2b7 MovT
	var_215_object = var_0_object; // 0x2b8 MovT
	func_3129(); // 0x2b9 Call
	
Label_699:
	var_216_int = 9372; // 0x2bb PushI
	var_217_bool = var_21_bool == var_216_int; // 0x2bc Eq
	if(var_217_bool == 0) goto Label_707; // 0x2bd JumpB
	var_218_object = Obj(); var_219_object = Obj(); // 0x2be PushV
	var_218_object = var_1_object; // 0x2bf MovT
	var_219_object = var_0_object; // 0x2c0 MovT
	func_3255(); // 0x2c1 Call
	
Label_707:
	var_222_int = 9373; // 0x2c3 PushI
	var_223_bool = var_21_bool == var_222_int; // 0x2c4 Eq
	if(var_223_bool == 0) goto Label_715; // 0x2c5 JumpB
	var_224_object = Obj(); var_225_object = Obj(); // 0x2c6 PushV
	var_224_object = var_1_object; // 0x2c7 MovT
	var_225_object = var_0_object; // 0x2c8 MovT
	func_3255(); // 0x2c9 Call
	
Label_715:
	var_226_int = 9381; // 0x2cb PushI
	var_227_bool = var_21_bool == var_226_int; // 0x2cc Eq
	if(var_227_bool == 0) goto Label_723; // 0x2cd JumpB
	var_228_object = Obj(); var_229_object = Obj(); // 0x2ce PushV
	var_228_object = var_1_object; // 0x2cf MovT
	var_229_object = var_0_object; // 0x2d0 MovT
	func_3261(); // 0x2d1 Call
	
Label_723:
	var_232_int = 6442; // 0x2d3 PushI
	var_233_bool = var_20_string == var_232_int; // 0x2d4 Eq
	if(var_233_bool == 0) goto Label_854; // 0x2d5 JumpB
	var_234_string = ""; // 0x2d6 PushV
	var_234_string = "Neutral"; // 0x2d7 MovS
	func_546(var_21_bool, var_234_string); // 0x2d8 Call
	var_249_int = 5851; // 0x2da PushI
	SetMessage(var_249_int); // 0x2db TObjFunc
	ClearReplies(); // 0x2dd TObjFunc
	var_250_bool = 0; // 0x2df PushV
	var_250_bool = 0; // 0x2e0 MovB
	var_251_bool = 0; var_252_object = Obj(); // 0x2e1 PushV
	var_252_object = var_1_object; // 0x2e2 MovT
	func_3403(var_252_object); // 0x2e3 Call
	if(var_251_bool == 0) goto Label_748; // 0x2e5 JumpB
	var_259_bool = 0; var_260_object = Obj(); // 0x2e6 PushV
	var_260_object = var_1_object; // 0x2e7 MovT
	func_3415(var_260_object); // 0x2e8 Call
	if(var_259_bool == 0) goto Label_748; // 0x2ea JumpB
	var_250_bool = 1; // 0x2eb MovB
	
Label_748:
	if(var_250_bool == 0) goto Label_754; // 0x2ec JumpB
	var_265_int = 5852; // 0x2ed PushI
	var_266_int = 6464; // 0x2ee PushI
	var_267_int = 6443; // 0x2ef PushI
	AddReply(var_265_int, var_266_int, var_267_int); // 0x2f0 TObjFunc
	
Label_754:
	var_268_bool = 0; // 0x2f2 PushV
	var_268_bool = 0; // 0x2f3 MovB
	var_269_bool = 0; var_270_object = Obj(); // 0x2f4 PushV
	var_270_object = var_1_object; // 0x2f5 MovT
	func_3427(var_270_object); // 0x2f6 Call
	if(var_269_bool == 0) goto Label_767; // 0x2f8 JumpB
	var_275_bool = 0; var_276_object = Obj(); // 0x2f9 PushV
	var_276_object = var_1_object; // 0x2fa MovT
	func_3391(var_276_object); // 0x2fb Call
	if(var_275_bool == 0) goto Label_767; // 0x2fd JumpB
	var_268_bool = 1; // 0x2fe MovB
	
Label_767:
	if(var_268_bool == 0) goto Label_773; // 0x2ff JumpB
	var_281_int = 8356; // 0x300 PushI
	var_282_int = 6444; // 0x301 PushI
	var_283_int = 9179; // 0x302 PushI
	AddReply(var_281_int, var_282_int, var_283_int); // 0x303 TObjFunc
	
Label_773:
	var_284_bool = 0; // 0x305 PushV
	var_284_bool = 1; // 0x306 MovB
	var_285_bool = 0; // 0x307 PushV
	var_285_bool = 0; // 0x308 MovB
	var_286_bool = 0; var_287_object = Obj(); // 0x309 PushV
	var_287_object = var_1_object; // 0x30a MovT
	func_3523(var_286_bool, var_287_object); // 0x30b Call
	if(var_286_bool == 0) goto Label_788; // 0x30d JumpB
	var_297_bool = 0; var_298_object = Obj(); // 0x30e PushV
	var_298_object = var_1_object; // 0x30f MovT
	func_3439(var_298_object); // 0x310 Call
	if(var_297_bool == 0) goto Label_788; // 0x312 JumpB
	var_285_bool = 1; // 0x313 MovB
	
Label_788:
	if(var_285_bool == 0) goto Label_804; // 0x314 JumpB
	var_303_bool = 0; // 0x315 PushV
	var_303_bool = 0; // 0x316 MovB
	var_304_bool = 0; var_305_object = Obj(); // 0x317 PushV
	var_305_object = var_1_object; // 0x318 MovT
	func_3553(var_304_bool, var_305_object); // 0x319 Call
	if(var_304_bool == 0) goto Label_802; // 0x31b JumpB
	var_315_bool = 0; var_316_object = Obj(); // 0x31c PushV
	var_316_object = var_1_object; // 0x31d MovT
	func_3439(var_316_object); // 0x31e Call
	if(var_315_bool == 0) goto Label_802; // 0x320 JumpB
	var_303_bool = 1; // 0x321 MovB
	
Label_802:
	if(var_303_bool == 0) goto Label_804; // 0x322 JumpB
	var_284_bool = 0; // 0x323 MovB
	
Label_804:
	if(var_284_bool == 0) goto Label_810; // 0x324 JumpB
	var_317_int = 8357; // 0x325 PushI
	var_318_int = 6453; // 0x326 PushI
	var_319_int = 9180; // 0x327 PushI
	AddReply(var_317_int, var_318_int, var_319_int); // 0x328 TObjFunc
	
Label_810:
	var_320_bool = 0; // 0x32a PushV
	var_320_bool = 0; // 0x32b MovB
	var_321_bool = 0; var_322_object = Obj(); // 0x32c PushV
	var_322_object = var_1_object; // 0x32d MovT
	func_3695(var_322_object); // 0x32e Call
	if(var_321_bool == 0) goto Label_823; // 0x330 JumpB
	var_327_bool = 0; var_328_object = Obj(); // 0x331 PushV
	var_328_object = var_1_object; // 0x332 MovT
	func_3499(var_328_object); // 0x333 Call
	if(var_327_bool == 0) goto Label_823; // 0x335 JumpB
	var_320_bool = 1; // 0x336 MovB
	
Label_823:
	if(var_320_bool == 0) goto Label_829; // 0x337 JumpB
	var_333_int = 8365; // 0x338 PushI
	var_334_int = 9205; // 0x339 PushI
	var_335_int = 9188; // 0x33a PushI
	AddReply(var_333_int, var_334_int, var_335_int); // 0x33b TObjFunc
	
Label_829:
	var_336_bool = 0; // 0x33d PushV
	var_336_bool = 0; // 0x33e MovB
	var_337_bool = 0; var_338_object = Obj(); // 0x33f PushV
	var_338_object = var_1_object; // 0x340 MovT
	func_3683(var_338_object); // 0x341 Call
	if(var_337_bool == 0) goto Label_842; // 0x343 JumpB
	var_343_bool = 0; var_344_object = Obj(); // 0x344 PushV
	var_344_object = var_1_object; // 0x345 MovT
	func_3511(var_344_object); // 0x346 Call
	if(var_343_bool == 0) goto Label_842; // 0x348 JumpB
	var_336_bool = 1; // 0x349 MovB
	
Label_842:
	if(var_336_bool == 0) goto Label_848; // 0x34a JumpB
	var_349_int = 8379; // 0x34b PushI
	var_350_int = 9378; // 0x34c PushI
	var_351_int = 9202; // 0x34d PushI
	AddReply(var_349_int, var_350_int, var_351_int); // 0x34e TObjFunc
	
Label_848:
	var_352_int = 8520; // 0x350 PushI
	var_353_int = -1; // 0x351 PushI
	var_354_int = 9362; // 0x352 PushI
	AddReply(var_352_int, var_353_int, var_354_int); // 0x353 TObjFunc
	return 0; // 0x355 Return
	
Label_854:
	var_355_int = 9378; // 0x356 PushI
	var_356_bool = var_20_string == var_355_int; // 0x357 Eq
	if(var_356_bool == 0) goto Label_872; // 0x358 JumpB
	var_357_string = ""; // 0x359 PushV
	var_357_string = "Neutral"; // 0x35a MovS
	func_546(var_21_bool, var_357_string); // 0x35b Call
	var_358_int = 8535; // 0x35d PushI
	SetMessage(var_358_int); // 0x35e TObjFunc
	ClearReplies(); // 0x360 TObjFunc
	var_359_int = 8536; // 0x362 PushI
	var_360_int = 9206; // 0x363 PushI
	var_361_int = 9379; // 0x364 PushI
	AddReply(var_359_int, var_360_int, var_361_int); // 0x365 TObjFunc
	return 0; // 0x367 Return
	
Label_872:
	var_362_int = 9206; // 0x368 PushI
	var_363_bool = var_20_string == var_362_int; // 0x369 Eq
	if(var_363_bool == 0) goto Label_890; // 0x36a JumpB
	var_364_string = ""; // 0x36b PushV
	var_364_string = "Neutral"; // 0x36c MovS
	func_546(var_21_bool, var_364_string); // 0x36d Call
	var_365_int = 8383; // 0x36f PushI
	SetMessage(var_365_int); // 0x370 TObjFunc
	ClearReplies(); // 0x372 TObjFunc
	var_366_int = 8538; // 0x374 PushI
	var_367_int = -1; // 0x375 PushI
	var_368_int = 9381; // 0x376 PushI
	AddReply(var_366_int, var_367_int, var_368_int); // 0x377 TObjFunc
	return 0; // 0x379 Return
	
Label_890:
	var_369_int = 9205; // 0x37a PushI
	var_370_bool = var_20_string == var_369_int; // 0x37b Eq
	if(var_370_bool == 0) goto Label_908; // 0x37c JumpB
	var_371_string = ""; // 0x37d PushV
	var_371_string = "Neutral"; // 0x37e MovS
	func_546(var_21_bool, var_371_string); // 0x37f Call
	var_372_int = 8382; // 0x381 PushI
	SetMessage(var_372_int); // 0x382 TObjFunc
	ClearReplies(); // 0x384 TObjFunc
	var_373_int = 8524; // 0x386 PushI
	var_374_int = 9367; // 0x387 PushI
	var_375_int = 9366; // 0x388 PushI
	AddReply(var_373_int, var_374_int, var_375_int); // 0x389 TObjFunc
	return 0; // 0x38b Return
	
Label_908:
	var_376_int = 9367; // 0x38c PushI
	var_377_bool = var_20_string == var_376_int; // 0x38d Eq
	if(var_377_bool == 0) goto Label_937; // 0x38e JumpB
	var_378_string = ""; // 0x38f PushV
	var_378_string = "Neutral"; // 0x390 MovS
	func_546(var_21_bool, var_378_string); // 0x391 Call
	var_379_int = 8525; // 0x393 PushI
	SetMessage(var_379_int); // 0x394 TObjFunc
	ClearReplies(); // 0x396 TObjFunc
	var_380_int = 8526; // 0x398 PushI
	var_381_int = 9369; // 0x399 PushI
	var_382_int = 9368; // 0x39a PushI
	AddReply(var_380_int, var_381_int, var_382_int); // 0x39b TObjFunc
	var_383_bool = 0; var_384_object = Obj(); // 0x39d PushV
	var_384_object = var_1_object; // 0x39e MovT
	func_3683(var_384_object); // 0x39f Call
	var_385_bool = var_383_bool == 0; // 0x3a1 Not
	if(var_385_bool == 0) goto Label_936; // 0x3a2 JumpB
	var_386_int = 8532; // 0x3a3 PushI
	var_387_int = 9375; // 0x3a4 PushI
	var_388_int = 9374; // 0x3a5 PushI
	AddReply(var_386_int, var_387_int, var_388_int); // 0x3a6 TObjFunc
	
Label_936:
	return 0; // 0x3a8 Return
	
Label_937:
	var_389_int = 9375; // 0x3a9 PushI
	var_390_bool = var_20_string == var_389_int; // 0x3aa Eq
	if(var_390_bool == 0) goto Label_955; // 0x3ab JumpB
	var_391_string = ""; // 0x3ac PushV
	var_391_string = "Neutral"; // 0x3ad MovS
	func_546(var_21_bool, var_391_string); // 0x3ae Call
	var_392_int = 8533; // 0x3b0 PushI
	SetMessage(var_392_int); // 0x3b1 TObjFunc
	ClearReplies(); // 0x3b3 TObjFunc
	var_393_int = 8534; // 0x3b5 PushI
	var_394_int = 9369; // 0x3b6 PushI
	var_395_int = 9376; // 0x3b7 PushI
	AddReply(var_393_int, var_394_int, var_395_int); // 0x3b8 TObjFunc
	return 0; // 0x3ba Return
	
Label_955:
	var_396_int = 9369; // 0x3bb PushI
	var_397_bool = var_20_string == var_396_int; // 0x3bc Eq
	if(var_397_bool == 0) goto Label_973; // 0x3bd JumpB
	var_398_string = ""; // 0x3be PushV
	var_398_string = "Neutral"; // 0x3bf MovS
	func_546(var_21_bool, var_398_string); // 0x3c0 Call
	var_399_int = 8527; // 0x3c2 PushI
	SetMessage(var_399_int); // 0x3c3 TObjFunc
	ClearReplies(); // 0x3c5 TObjFunc
	var_400_int = 8528; // 0x3c7 PushI
	var_401_int = 9371; // 0x3c8 PushI
	var_402_int = 9370; // 0x3c9 PushI
	AddReply(var_400_int, var_401_int, var_402_int); // 0x3ca TObjFunc
	return 0; // 0x3cc Return
	
Label_973:
	var_403_int = 9371; // 0x3cd PushI
	var_404_bool = var_20_string == var_403_int; // 0x3ce Eq
	if(var_404_bool == 0) goto Label_996; // 0x3cf JumpB
	var_405_string = ""; // 0x3d0 PushV
	var_405_string = "Neutral"; // 0x3d1 MovS
	func_546(var_21_bool, var_405_string); // 0x3d2 Call
	var_406_int = 8529; // 0x3d4 PushI
	SetMessage(var_406_int); // 0x3d5 TObjFunc
	ClearReplies(); // 0x3d7 TObjFunc
	var_407_int = 8530; // 0x3d9 PushI
	var_408_int = -1; // 0x3da PushI
	var_409_int = 9372; // 0x3db PushI
	AddReply(var_407_int, var_408_int, var_409_int); // 0x3dc TObjFunc
	var_410_int = 8531; // 0x3de PushI
	var_411_int = -1; // 0x3df PushI
	var_412_int = 9373; // 0x3e0 PushI
	AddReply(var_410_int, var_411_int, var_412_int); // 0x3e1 TObjFunc
	return 0; // 0x3e3 Return
	
Label_996:
	var_413_int = 6453; // 0x3e4 PushI
	var_414_bool = var_20_string == var_413_int; // 0x3e5 Eq
	if(var_414_bool == 0) goto Label_1024; // 0x3e6 JumpB
	var_415_string = ""; // 0x3e7 PushV
	var_415_string = "Neutral"; // 0x3e8 MovS
	func_546(var_21_bool, var_415_string); // 0x3e9 Call
	var_416_int = 5862; // 0x3eb PushI
	SetMessage(var_416_int); // 0x3ec TObjFunc
	ClearReplies(); // 0x3ee TObjFunc
	var_417_int = 5863; // 0x3f0 PushI
	var_418_int = 6455; // 0x3f1 PushI
	var_419_int = 6454; // 0x3f2 PushI
	AddReply(var_417_int, var_418_int, var_419_int); // 0x3f3 TObjFunc
	var_420_int = 5868; // 0x3f5 PushI
	var_421_int = 6460; // 0x3f6 PushI
	var_422_int = 6459; // 0x3f7 PushI
	AddReply(var_420_int, var_421_int, var_422_int); // 0x3f8 TObjFunc
	var_423_int = 5867; // 0x3fa PushI
	var_424_int = -1; // 0x3fb PushI
	var_425_int = 6458; // 0x3fc PushI
	AddReply(var_423_int, var_424_int, var_425_int); // 0x3fd TObjFunc
	return 0; // 0x3ff Return
	
Label_1024:
	var_426_int = 6460; // 0x400 PushI
	var_427_bool = var_20_string == var_426_int; // 0x401 Eq
	if(var_427_bool == 0) goto Label_1047; // 0x402 JumpB
	var_428_string = ""; // 0x403 PushV
	var_428_string = "Neutral"; // 0x404 MovS
	func_546(var_21_bool, var_428_string); // 0x405 Call
	var_429_int = 5869; // 0x407 PushI
	SetMessage(var_429_int); // 0x408 TObjFunc
	ClearReplies(); // 0x40a TObjFunc
	var_430_int = 5870; // 0x40c PushI
	var_431_int = 6455; // 0x40d PushI
	var_432_int = 6461; // 0x40e PushI
	AddReply(var_430_int, var_431_int, var_432_int); // 0x40f TObjFunc
	var_433_int = 5871; // 0x411 PushI
	var_434_int = -1; // 0x412 PushI
	var_435_int = 6463; // 0x413 PushI
	AddReply(var_433_int, var_434_int, var_435_int); // 0x414 TObjFunc
	return 0; // 0x416 Return
	
Label_1047:
	var_436_int = 6455; // 0x417 PushI
	var_437_bool = var_20_string == var_436_int; // 0x418 Eq
	if(var_437_bool == 0) goto Label_1070; // 0x419 JumpB
	var_438_string = ""; // 0x41a PushV
	var_438_string = "Neutral"; // 0x41b MovS
	func_546(var_21_bool, var_438_string); // 0x41c Call
	var_439_int = 5864; // 0x41e PushI
	SetMessage(var_439_int); // 0x41f TObjFunc
	ClearReplies(); // 0x421 TObjFunc
	var_440_int = 5865; // 0x423 PushI
	var_441_int = -1; // 0x424 PushI
	var_442_int = 6456; // 0x425 PushI
	AddReply(var_440_int, var_441_int, var_442_int); // 0x426 TObjFunc
	var_443_int = 5866; // 0x428 PushI
	var_444_int = -1; // 0x429 PushI
	var_445_int = 6457; // 0x42a PushI
	AddReply(var_443_int, var_444_int, var_445_int); // 0x42b TObjFunc
	return 0; // 0x42d Return
	
Label_1070:
	var_446_int = 6444; // 0x42e PushI
	var_447_bool = var_20_string == var_446_int; // 0x42f Eq
	if(var_447_bool == 0) goto Label_1104; // 0x430 JumpB
	var_448_string = ""; // 0x431 PushV
	var_448_string = "Neutral"; // 0x432 MovS
	func_546(var_21_bool, var_448_string); // 0x433 Call
	var_449_int = 5853; // 0x435 PushI
	SetMessage(var_449_int); // 0x436 TObjFunc
	ClearReplies(); // 0x438 TObjFunc
	var_450_int = 5854; // 0x43a PushI
	var_451_int = 6446; // 0x43b PushI
	var_452_int = 6445; // 0x43c PushI
	AddReply(var_450_int, var_451_int, var_452_int); // 0x43d TObjFunc
	var_453_int = 5861; // 0x43f PushI
	var_454_int = -1; // 0x440 PushI
	var_455_int = 6452; // 0x441 PushI
	AddReply(var_453_int, var_454_int, var_455_int); // 0x442 TObjFunc
	var_456_bool = 0; var_457_object = Obj(); // 0x444 PushV
	var_457_object = var_1_object; // 0x445 MovT
	func_3451(var_457_object); // 0x446 Call
	var_462_bool = var_456_bool == 0; // 0x448 Not
	if(var_462_bool == 0) goto Label_1103; // 0x449 JumpB
	var_463_int = 8521; // 0x44a PushI
	var_464_int = 9364; // 0x44b PushI
	var_465_int = 9363; // 0x44c PushI
	AddReply(var_463_int, var_464_int, var_465_int); // 0x44d TObjFunc
	
Label_1103:
	return 0; // 0x44f Return
	
Label_1104:
	var_466_int = 9364; // 0x450 PushI
	var_467_bool = var_20_string == var_466_int; // 0x451 Eq
	if(var_467_bool == 0) goto Label_1127; // 0x452 JumpB
	var_468_object = Obj(); var_469_object = Obj(); // 0x453 PushV
	var_468_object = var_1_object; // 0x454 MovT
	var_469_object = var_0_object; // 0x455 MovT
	func_3211(); // 0x456 Call
	var_472_string = ""; // 0x458 PushV
	var_472_string = "Neutral"; // 0x459 MovS
	func_546(var_21_bool, var_472_string); // 0x45a Call
	var_473_int = 8522; // 0x45c PushI
	SetMessage(var_473_int); // 0x45d TObjFunc
	ClearReplies(); // 0x45f TObjFunc
	var_474_int = 8523; // 0x461 PushI
	var_475_int = -1; // 0x462 PushI
	var_476_int = 9365; // 0x463 PushI
	AddReply(var_474_int, var_475_int, var_476_int); // 0x464 TObjFunc
	return 0; // 0x466 Return
	
Label_1127:
	var_477_int = 6446; // 0x467 PushI
	var_478_bool = var_20_string == var_477_int; // 0x468 Eq
	if(var_478_bool == 0) goto Label_1150; // 0x469 JumpB
	var_479_string = ""; // 0x46a PushV
	var_479_string = "Neutral"; // 0x46b MovS
	func_546(var_21_bool, var_479_string); // 0x46c Call
	var_480_int = 5855; // 0x46e PushI
	SetMessage(var_480_int); // 0x46f TObjFunc
	ClearReplies(); // 0x471 TObjFunc
	var_481_int = 5856; // 0x473 PushI
	var_482_int = 6448; // 0x474 PushI
	var_483_int = 6447; // 0x475 PushI
	AddReply(var_481_int, var_482_int, var_483_int); // 0x476 TObjFunc
	var_484_int = 5860; // 0x478 PushI
	var_485_int = -1; // 0x479 PushI
	var_486_int = 6451; // 0x47a PushI
	AddReply(var_484_int, var_485_int, var_486_int); // 0x47b TObjFunc
	return 0; // 0x47d Return
	
Label_1150:
	var_487_int = 6448; // 0x47e PushI
	var_488_bool = var_20_string == var_487_int; // 0x47f Eq
	if(var_488_bool == 0) goto Label_1183; // 0x480 JumpB
	var_489_object = Obj(); var_490_object = Obj(); // 0x481 PushV
	var_489_object = var_1_object; // 0x482 MovT
	var_490_object = var_0_object; // 0x483 MovT
	func_3385(); // 0x484 Call
	var_493_object = Obj(); var_494_object = Obj(); // 0x486 PushV
	var_493_object = var_1_object; // 0x487 MovT
	var_494_object = var_0_object; // 0x488 MovT
	func_3235(); // 0x489 Call
	var_497_string = ""; // 0x48b PushV
	var_497_string = "Neutral"; // 0x48c MovS
	func_546(var_21_bool, var_497_string); // 0x48d Call
	var_498_int = 5857; // 0x48f PushI
	SetMessage(var_498_int); // 0x490 TObjFunc
	ClearReplies(); // 0x492 TObjFunc
	var_499_int = 5858; // 0x494 PushI
	var_500_int = -1; // 0x495 PushI
	var_501_int = 6449; // 0x496 PushI
	AddReply(var_499_int, var_500_int, var_501_int); // 0x497 TObjFunc
	var_502_int = 5859; // 0x499 PushI
	var_503_int = -1; // 0x49a PushI
	var_504_int = 6450; // 0x49b PushI
	AddReply(var_502_int, var_503_int, var_504_int); // 0x49c TObjFunc
	return 0; // 0x49e Return
	
Label_1183:
	var_505_int = 6464; // 0x49f PushI
	var_506_bool = var_20_string == var_505_int; // 0x4a0 Eq
	if(var_506_bool == 0) goto Label_1206; // 0x4a1 JumpB
	var_507_string = ""; // 0x4a2 PushV
	var_507_string = "Neutral"; // 0x4a3 MovS
	func_546(var_21_bool, var_507_string); // 0x4a4 Call
	var_508_int = 5872; // 0x4a6 PushI
	SetMessage(var_508_int); // 0x4a7 TObjFunc
	ClearReplies(); // 0x4a9 TObjFunc
	var_509_int = 6141; // 0x4ab PushI
	var_510_int = 6786; // 0x4ac PushI
	var_511_int = 6785; // 0x4ad PushI
	AddReply(var_509_int, var_510_int, var_511_int); // 0x4ae TObjFunc
	var_512_int = 6140; // 0x4b0 PushI
	var_513_int = 6786; // 0x4b1 PushI
	var_514_int = 6784; // 0x4b2 PushI
	AddReply(var_512_int, var_513_int, var_514_int); // 0x4b3 TObjFunc
	return 0; // 0x4b5 Return
	
Label_1206:
	var_515_int = 6786; // 0x4b6 PushI
	var_516_bool = var_20_string == var_515_int; // 0x4b7 Eq
	if(var_516_bool == 0) goto Label_1229; // 0x4b8 JumpB
	var_517_string = ""; // 0x4b9 PushV
	var_517_string = "Neutral"; // 0x4ba MovS
	func_546(var_21_bool, var_517_string); // 0x4bb Call
	var_518_int = 6142; // 0x4bd PushI
	SetMessage(var_518_int); // 0x4be TObjFunc
	ClearReplies(); // 0x4c0 TObjFunc
	var_519_int = 6143; // 0x4c2 PushI
	var_520_int = 6790; // 0x4c3 PushI
	var_521_int = 6788; // 0x4c4 PushI
	AddReply(var_519_int, var_520_int, var_521_int); // 0x4c5 TObjFunc
	var_522_int = 6144; // 0x4c7 PushI
	var_523_int = 6790; // 0x4c8 PushI
	var_524_int = 6789; // 0x4c9 PushI
	AddReply(var_522_int, var_523_int, var_524_int); // 0x4ca TObjFunc
	return 0; // 0x4cc Return
	
Label_1229:
	var_525_int = 6790; // 0x4cd PushI
	var_526_bool = var_20_string == var_525_int; // 0x4ce Eq
	if(var_526_bool == 0) goto Label_1252; // 0x4cf JumpB
	var_527_string = ""; // 0x4d0 PushV
	var_527_string = "Neutral"; // 0x4d1 MovS
	func_546(var_21_bool, var_527_string); // 0x4d2 Call
	var_528_int = 6145; // 0x4d4 PushI
	SetMessage(var_528_int); // 0x4d5 TObjFunc
	ClearReplies(); // 0x4d7 TObjFunc
	var_529_int = 6146; // 0x4d9 PushI
	var_530_int = 6794; // 0x4da PushI
	var_531_int = 6792; // 0x4db PushI
	AddReply(var_529_int, var_530_int, var_531_int); // 0x4dc TObjFunc
	var_532_int = 6147; // 0x4de PushI
	var_533_int = 6794; // 0x4df PushI
	var_534_int = 6793; // 0x4e0 PushI
	AddReply(var_532_int, var_533_int, var_534_int); // 0x4e1 TObjFunc
	return 0; // 0x4e3 Return
	
Label_1252:
	var_535_int = 6794; // 0x4e4 PushI
	var_536_bool = var_20_string == var_535_int; // 0x4e5 Eq
	if(var_536_bool == 0) goto Label_1270; // 0x4e6 JumpB
	var_537_string = ""; // 0x4e7 PushV
	var_537_string = "Neutral"; // 0x4e8 MovS
	func_546(var_21_bool, var_537_string); // 0x4e9 Call
	var_538_int = 6148; // 0x4eb PushI
	SetMessage(var_538_int); // 0x4ec TObjFunc
	ClearReplies(); // 0x4ee TObjFunc
	var_539_int = 6149; // 0x4f0 PushI
	var_540_int = 6797; // 0x4f1 PushI
	var_541_int = 6796; // 0x4f2 PushI
	AddReply(var_539_int, var_540_int, var_541_int); // 0x4f3 TObjFunc
	return 0; // 0x4f5 Return
	
Label_1270:
	var_542_int = 6797; // 0x4f6 PushI
	var_543_bool = var_20_string == var_542_int; // 0x4f7 Eq
	if(var_543_bool == 0) goto Label_1293; // 0x4f8 JumpB
	var_544_string = ""; // 0x4f9 PushV
	var_544_string = "Neutral"; // 0x4fa MovS
	func_546(var_21_bool, var_544_string); // 0x4fb Call
	var_545_int = 6150; // 0x4fd PushI
	SetMessage(var_545_int); // 0x4fe TObjFunc
	ClearReplies(); // 0x500 TObjFunc
	var_546_int = 6151; // 0x502 PushI
	var_547_int = 6799; // 0x503 PushI
	var_548_int = 6798; // 0x504 PushI
	AddReply(var_546_int, var_547_int, var_548_int); // 0x505 TObjFunc
	var_549_int = 6153; // 0x507 PushI
	var_550_int = -1; // 0x508 PushI
	var_551_int = 6800; // 0x509 PushI
	AddReply(var_549_int, var_550_int, var_551_int); // 0x50a TObjFunc
	return 0; // 0x50c Return
	
Label_1293:
	var_552_int = 6799; // 0x50d PushI
	var_553_bool = var_20_string == var_552_int; // 0x50e Eq
	if(var_553_bool == 0) goto Label_1316; // 0x50f JumpB
	var_554_string = ""; // 0x510 PushV
	var_554_string = "Neutral"; // 0x511 MovS
	func_546(var_21_bool, var_554_string); // 0x512 Call
	var_555_int = 6152; // 0x514 PushI
	SetMessage(var_555_int); // 0x515 TObjFunc
	ClearReplies(); // 0x517 TObjFunc
	var_556_int = 6154; // 0x519 PushI
	var_557_int = -1; // 0x51a PushI
	var_558_int = 6801; // 0x51b PushI
	AddReply(var_556_int, var_557_int, var_558_int); // 0x51c TObjFunc
	var_559_int = 6155; // 0x51e PushI
	var_560_int = -1; // 0x51f PushI
	var_561_int = 6802; // 0x520 PushI
	AddReply(var_559_int, var_560_int, var_561_int); // 0x521 TObjFunc
	return 0; // 0x523 Return
	
Label_1316:
	var_3_string = 1; // 0x524 TMovB
	var_562_bool = 0; // 0x525 PushV
	func_3115(var_562_bool); // 0x526 Call
	if(var_562_bool == 0) goto Label_1324; // 0x528 JumpB
	lshStopAnimation(); // 0x529 Func
	goto Label_1326; // 0x52b Jump
	
Label_1326:
	return 0; // 0x52e Return
	
Label_1324:
	StopAnimation(); // 0x52c Func
	
Label_1328:
	return 0; // 0x530 Return
}


task_7_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool)
{
	var_22_int = 1; // 0x5f5 PushI
	if(var_22_int == 0) goto Label_2145; // 0x5f6 JumpB
	func_3016(); // 0x5f8 Call
	var_24_int = 7358; // 0x5fa PushI
	var_25_bool = var_21_bool == var_24_int; // 0x5fb Eq
	if(var_25_bool == 0) goto Label_1543; // 0x5fc JumpB
	var_26_object = Obj(); var_27_object = Obj(); // 0x5fd PushV
	var_26_object = var_1_object; // 0x5fe MovT
	var_27_object = var_0_object; // 0x5ff MovT
	func_3217(); // 0x600 Call
	var_30_object = Obj(); var_31_object = Obj(); // 0x602 PushV
	var_30_object = var_1_object; // 0x603 MovT
	var_31_object = var_0_object; // 0x604 MovT
	func_3241(); // 0x605 Call
	
Label_1543:
	var_65_int = 7363; // 0x607 PushI
	var_66_bool = var_21_bool == var_65_int; // 0x608 Eq
	if(var_66_bool == 0) goto Label_1556; // 0x609 JumpB
	var_67_object = Obj(); var_68_object = Obj(); // 0x60a PushV
	var_67_object = var_1_object; // 0x60b MovT
	var_68_object = var_0_object; // 0x60c MovT
	func_3217(); // 0x60d Call
	var_69_object = Obj(); var_70_object = Obj(); // 0x60f PushV
	var_69_object = var_1_object; // 0x610 MovT
	var_70_object = var_0_object; // 0x611 MovT
	func_3241(); // 0x612 Call
	
Label_1556:
	var_71_int = 7382; // 0x614 PushI
	var_72_bool = var_21_bool == var_71_int; // 0x615 Eq
	if(var_72_bool == 0) goto Label_1564; // 0x616 JumpB
	var_73_object = Obj(); var_74_object = Obj(); // 0x617 PushV
	var_73_object = var_1_object; // 0x618 MovT
	var_74_object = var_0_object; // 0x619 MovT
	func_3217(); // 0x61a Call
	
Label_1564:
	var_75_int = 7394; // 0x61c PushI
	var_76_bool = var_21_bool == var_75_int; // 0x61d Eq
	if(var_76_bool == 0) goto Label_1572; // 0x61e JumpB
	var_77_object = Obj(); var_78_object = Obj(); // 0x61f PushV
	var_77_object = var_1_object; // 0x620 MovT
	var_78_object = var_0_object; // 0x621 MovT
	func_3223(); // 0x622 Call
	
Label_1572:
	var_81_int = 7395; // 0x624 PushI
	var_82_bool = var_21_bool == var_81_int; // 0x625 Eq
	if(var_82_bool == 0) goto Label_1580; // 0x626 JumpB
	var_83_object = Obj(); var_84_object = Obj(); // 0x627 PushV
	var_83_object = var_1_object; // 0x628 MovT
	var_84_object = var_0_object; // 0x629 MovT
	func_3223(); // 0x62a Call
	
Label_1580:
	var_85_int = 7396; // 0x62c PushI
	var_86_bool = var_21_bool == var_85_int; // 0x62d Eq
	if(var_86_bool == 0) goto Label_1588; // 0x62e JumpB
	var_87_object = Obj(); var_88_object = Obj(); // 0x62f PushV
	var_87_object = var_1_object; // 0x630 MovT
	var_88_object = var_0_object; // 0x631 MovT
	func_3223(); // 0x632 Call
	
Label_1588:
	var_89_int = 7397; // 0x634 PushI
	var_90_bool = var_21_bool == var_89_int; // 0x635 Eq
	if(var_90_bool == 0) goto Label_1596; // 0x636 JumpB
	var_91_object = Obj(); var_92_object = Obj(); // 0x637 PushV
	var_91_object = var_1_object; // 0x638 MovT
	var_92_object = var_0_object; // 0x639 MovT
	func_3223(); // 0x63a Call
	
Label_1596:
	var_93_int = 7398; // 0x63c PushI
	var_94_bool = var_21_bool == var_93_int; // 0x63d Eq
	if(var_94_bool == 0) goto Label_1604; // 0x63e JumpB
	var_95_object = Obj(); var_96_object = Obj(); // 0x63f PushV
	var_95_object = var_1_object; // 0x640 MovT
	var_96_object = var_0_object; // 0x641 MovT
	func_3223(); // 0x642 Call
	
Label_1604:
	var_97_int = 7399; // 0x644 PushI
	var_98_bool = var_21_bool == var_97_int; // 0x645 Eq
	if(var_98_bool == 0) goto Label_1612; // 0x646 JumpB
	var_99_object = Obj(); var_100_object = Obj(); // 0x647 PushV
	var_99_object = var_1_object; // 0x648 MovT
	var_100_object = var_0_object; // 0x649 MovT
	func_3223(); // 0x64a Call
	
Label_1612:
	var_101_int = 15755; // 0x64c PushI
	var_102_bool = var_21_bool == var_101_int; // 0x64d Eq
	if(var_102_bool == 0) goto Label_1620; // 0x64e JumpB
	var_103_object = Obj(); var_104_object = Obj(); // 0x64f PushV
	var_103_object = var_1_object; // 0x650 MovT
	var_104_object = var_0_object; // 0x651 MovT
	func_3357(); // 0x652 Call
	
Label_1620:
	var_107_int = 7402; // 0x654 PushI
	var_108_bool = var_20_string == var_107_int; // 0x655 Eq
	if(var_108_bool == 0) goto Label_1701; // 0x656 JumpB
	var_109_string = ""; // 0x657 PushV
	var_109_string = "Neutral"; // 0x658 MovS
	func_1508(var_21_bool, var_109_string); // 0x659 Call
	var_124_int = 6715; // 0x65b PushI
	SetMessage(var_124_int); // 0x65c TObjFunc
	ClearReplies(); // 0x65e TObjFunc
	var_125_bool = 0; // 0x660 PushV
	var_125_bool = 0; // 0x661 MovB
	var_126_bool = 0; var_127_object = Obj(); // 0x662 PushV
	var_127_object = var_1_object; // 0x663 MovT
	func_3463(var_127_object); // 0x664 Call
	if(var_126_bool == 0) goto Label_1645; // 0x666 JumpB
	var_134_bool = 0; var_135_object = Obj(); // 0x667 PushV
	var_135_object = var_1_object; // 0x668 MovT
	func_3487(var_135_object); // 0x669 Call
	if(var_134_bool == 0) goto Label_1645; // 0x66b JumpB
	var_125_bool = 1; // 0x66c MovB
	
Label_1645:
	if(var_125_bool == 0) goto Label_1651; // 0x66d JumpB
	var_140_int = 7429; // 0x66e PushI
	var_141_int = 7355; // 0x66f PushI
	var_142_int = 8200; // 0x670 PushI
	AddReply(var_140_int, var_141_int, var_142_int); // 0x671 TObjFunc
	
Label_1651:
	var_143_bool = 0; var_144_object = Obj(); // 0x673 PushV
	var_144_object = var_1_object; // 0x674 MovT
	func_3475(var_144_object); // 0x675 Call
	if(var_143_bool == 0) goto Label_1661; // 0x677 JumpB
	var_149_int = 6716; // 0x678 PushI
	var_150_int = 7385; // 0x679 PushI
	var_151_int = 7403; // 0x67a PushI
	AddReply(var_149_int, var_150_int, var_151_int); // 0x67b TObjFunc
	
Label_1661:
	var_152_bool = 0; // 0x67d PushV
	var_152_bool = 0; // 0x67e MovB
	var_153_bool = 0; var_154_object = Obj(); // 0x67f PushV
	var_154_object = var_1_object; // 0x680 MovT
	func_3659(var_154_object); // 0x681 Call
	if(var_153_bool == 0) goto Label_1674; // 0x683 JumpB
	var_159_bool = 0; var_160_object = Obj(); // 0x684 PushV
	var_160_object = var_1_object; // 0x685 MovT
	func_3671(var_160_object); // 0x686 Call
	if(var_159_bool == 0) goto Label_1674; // 0x688 JumpB
	var_152_bool = 1; // 0x689 MovB
	
Label_1674:
	if(var_152_bool == 0) goto Label_1680; // 0x68a JumpB
	var_165_int = 14516; // 0x68b PushI
	var_166_int = 15756; // 0x68c PushI
	var_167_int = 15755; // 0x68d PushI
	AddReply(var_165_int, var_166_int, var_167_int); // 0x68e TObjFunc
	
Label_1680:
	var_168_int = 7534; // 0x690 PushI
	var_169_int = -1; // 0x691 PushI
	var_170_int = 8316; // 0x692 PushI
	AddReply(var_168_int, var_169_int, var_170_int); // 0x693 TObjFunc
	return 0; // 0x695 Return
	
Label_1701:
	var_171_int = 10462; // 0x6a5 PushI
	var_172_bool = var_20_string == var_171_int; // 0x6a6 Eq
	if(var_172_bool == 0) goto Label_1724; // 0x6a7 JumpB
	var_173_string = ""; // 0x6a8 PushV
	var_173_string = "Neutral"; // 0x6a9 MovS
	func_1508(var_21_bool, var_173_string); // 0x6aa Call
	var_174_int = 9519; // 0x6ac PushI
	SetMessage(var_174_int); // 0x6ad TObjFunc
	ClearReplies(); // 0x6af TObjFunc
	var_175_int = 9520; // 0x6b1 PushI
	var_176_int = 10464; // 0x6b2 PushI
	var_177_int = 10463; // 0x6b3 PushI
	AddReply(var_175_int, var_176_int, var_177_int); // 0x6b4 TObjFunc
	var_178_int = 9530; // 0x6b6 PushI
	var_179_int = 10466; // 0x6b7 PushI
	var_180_int = 10474; // 0x6b8 PushI
	AddReply(var_178_int, var_179_int, var_180_int); // 0x6b9 TObjFunc
	return 0; // 0x6bb Return
	
Label_1724:
	var_181_int = 10464; // 0x6bc PushI
	var_182_bool = var_20_string == var_181_int; // 0x6bd Eq
	if(var_182_bool == 0) goto Label_1747; // 0x6be JumpB
	var_183_string = ""; // 0x6bf PushV
	var_183_string = "Neutral"; // 0x6c0 MovS
	func_1508(var_21_bool, var_183_string); // 0x6c1 Call
	var_184_int = 9521; // 0x6c3 PushI
	SetMessage(var_184_int); // 0x6c4 TObjFunc
	ClearReplies(); // 0x6c6 TObjFunc
	var_185_int = 9522; // 0x6c8 PushI
	var_186_int = 10466; // 0x6c9 PushI
	var_187_int = 10465; // 0x6ca PushI
	AddReply(var_185_int, var_186_int, var_187_int); // 0x6cb TObjFunc
	var_188_int = 9529; // 0x6cd PushI
	var_189_int = 10466; // 0x6ce PushI
	var_190_int = 10472; // 0x6cf PushI
	AddReply(var_188_int, var_189_int, var_190_int); // 0x6d0 TObjFunc
	return 0; // 0x6d2 Return
	
Label_1747:
	var_191_int = 10466; // 0x6d3 PushI
	var_192_bool = var_20_string == var_191_int; // 0x6d4 Eq
	if(var_192_bool == 0) goto Label_1770; // 0x6d5 JumpB
	var_193_string = ""; // 0x6d6 PushV
	var_193_string = "Neutral"; // 0x6d7 MovS
	func_1508(var_21_bool, var_193_string); // 0x6d8 Call
	var_194_int = 9523; // 0x6da PushI
	SetMessage(var_194_int); // 0x6db TObjFunc
	ClearReplies(); // 0x6dd TObjFunc
	var_195_int = 9524; // 0x6df PushI
	var_196_int = 10468; // 0x6e0 PushI
	var_197_int = 10467; // 0x6e1 PushI
	AddReply(var_195_int, var_196_int, var_197_int); // 0x6e2 TObjFunc
	var_198_int = 9528; // 0x6e4 PushI
	var_199_int = -1; // 0x6e5 PushI
	var_200_int = 10471; // 0x6e6 PushI
	AddReply(var_198_int, var_199_int, var_200_int); // 0x6e7 TObjFunc
	return 0; // 0x6e9 Return
	
Label_1770:
	var_201_int = 10468; // 0x6ea PushI
	var_202_bool = var_20_string == var_201_int; // 0x6eb Eq
	if(var_202_bool == 0) goto Label_1793; // 0x6ec JumpB
	var_203_string = ""; // 0x6ed PushV
	var_203_string = "Neutral"; // 0x6ee MovS
	func_1508(var_21_bool, var_203_string); // 0x6ef Call
	var_204_int = 9525; // 0x6f1 PushI
	SetMessage(var_204_int); // 0x6f2 TObjFunc
	ClearReplies(); // 0x6f4 TObjFunc
	var_205_int = 9526; // 0x6f6 PushI
	var_206_int = -1; // 0x6f7 PushI
	var_207_int = 10469; // 0x6f8 PushI
	AddReply(var_205_int, var_206_int, var_207_int); // 0x6f9 TObjFunc
	var_208_int = 9527; // 0x6fb PushI
	var_209_int = -1; // 0x6fc PushI
	var_210_int = 10470; // 0x6fd PushI
	AddReply(var_208_int, var_209_int, var_210_int); // 0x6fe TObjFunc
	return 0; // 0x700 Return
	
Label_1793:
	var_211_int = 15756; // 0x701 PushI
	var_212_bool = var_20_string == var_211_int; // 0x702 Eq
	if(var_212_bool == 0) goto Label_1811; // 0x703 JumpB
	var_213_string = ""; // 0x704 PushV
	var_213_string = "Neutral"; // 0x705 MovS
	func_1508(var_21_bool, var_213_string); // 0x706 Call
	var_214_int = 14517; // 0x708 PushI
	SetMessage(var_214_int); // 0x709 TObjFunc
	ClearReplies(); // 0x70b TObjFunc
	var_215_int = 14518; // 0x70d PushI
	var_216_int = -1; // 0x70e PushI
	var_217_int = 15757; // 0x70f PushI
	AddReply(var_215_int, var_216_int, var_217_int); // 0x710 TObjFunc
	return 0; // 0x712 Return
	
Label_1811:
	var_218_int = 7385; // 0x713 PushI
	var_219_bool = var_20_string == var_218_int; // 0x714 Eq
	if(var_219_bool == 0) goto Label_1839; // 0x715 JumpB
	var_220_string = ""; // 0x716 PushV
	var_220_string = "Neutral"; // 0x717 MovS
	func_1508(var_21_bool, var_220_string); // 0x718 Call
	var_221_int = 6699; // 0x71a PushI
	SetMessage(var_221_int); // 0x71b TObjFunc
	ClearReplies(); // 0x71d TObjFunc
	var_222_int = 6700; // 0x71f PushI
	var_223_int = 7387; // 0x720 PushI
	var_224_int = 7386; // 0x721 PushI
	AddReply(var_222_int, var_223_int, var_224_int); // 0x722 TObjFunc
	var_225_int = 6714; // 0x724 PushI
	var_226_int = 7387; // 0x725 PushI
	var_227_int = 7400; // 0x726 PushI
	AddReply(var_225_int, var_226_int, var_227_int); // 0x727 TObjFunc
	var_228_int = 6713; // 0x729 PushI
	var_229_int = -1; // 0x72a PushI
	var_230_int = 7399; // 0x72b PushI
	AddReply(var_228_int, var_229_int, var_230_int); // 0x72c TObjFunc
	return 0; // 0x72e Return
	
Label_1839:
	var_231_int = 7387; // 0x72f PushI
	var_232_bool = var_20_string == var_231_int; // 0x730 Eq
	if(var_232_bool == 0) goto Label_1862; // 0x731 JumpB
	var_233_string = ""; // 0x732 PushV
	var_233_string = "Neutral"; // 0x733 MovS
	func_1508(var_21_bool, var_233_string); // 0x734 Call
	var_234_int = 6701; // 0x736 PushI
	SetMessage(var_234_int); // 0x737 TObjFunc
	ClearReplies(); // 0x739 TObjFunc
	var_235_int = 6702; // 0x73b PushI
	var_236_int = 7389; // 0x73c PushI
	var_237_int = 7388; // 0x73d PushI
	AddReply(var_235_int, var_236_int, var_237_int); // 0x73e TObjFunc
	var_238_int = 6712; // 0x740 PushI
	var_239_int = -1; // 0x741 PushI
	var_240_int = 7398; // 0x742 PushI
	AddReply(var_238_int, var_239_int, var_240_int); // 0x743 TObjFunc
	return 0; // 0x745 Return
	
Label_1862:
	var_241_int = 7389; // 0x746 PushI
	var_242_bool = var_20_string == var_241_int; // 0x747 Eq
	if(var_242_bool == 0) goto Label_1890; // 0x748 JumpB
	var_243_object = Obj(); var_244_object = Obj(); // 0x749 PushV
	var_243_object = var_1_object; // 0x74a MovT
	var_244_object = var_0_object; // 0x74b MovT
	func_3229(); // 0x74c Call
	var_247_string = ""; // 0x74e PushV
	var_247_string = "Neutral"; // 0x74f MovS
	func_1508(var_21_bool, var_247_string); // 0x750 Call
	var_248_int = 6703; // 0x752 PushI
	SetMessage(var_248_int); // 0x753 TObjFunc
	ClearReplies(); // 0x755 TObjFunc
	var_249_int = 6704; // 0x757 PushI
	var_250_int = 7391; // 0x758 PushI
	var_251_int = 7390; // 0x759 PushI
	AddReply(var_249_int, var_250_int, var_251_int); // 0x75a TObjFunc
	var_252_int = 6711; // 0x75c PushI
	var_253_int = -1; // 0x75d PushI
	var_254_int = 7397; // 0x75e PushI
	AddReply(var_252_int, var_253_int, var_254_int); // 0x75f TObjFunc
	return 0; // 0x761 Return
	
Label_1890:
	var_255_int = 7391; // 0x762 PushI
	var_256_bool = var_20_string == var_255_int; // 0x763 Eq
	if(var_256_bool == 0) goto Label_1913; // 0x764 JumpB
	var_257_string = ""; // 0x765 PushV
	var_257_string = "Neutral"; // 0x766 MovS
	func_1508(var_21_bool, var_257_string); // 0x767 Call
	var_258_int = 6705; // 0x769 PushI
	SetMessage(var_258_int); // 0x76a TObjFunc
	ClearReplies(); // 0x76c TObjFunc
	var_259_int = 6706; // 0x76e PushI
	var_260_int = 7393; // 0x76f PushI
	var_261_int = 7392; // 0x770 PushI
	AddReply(var_259_int, var_260_int, var_261_int); // 0x771 TObjFunc
	var_262_int = 6710; // 0x773 PushI
	var_263_int = -1; // 0x774 PushI
	var_264_int = 7396; // 0x775 PushI
	AddReply(var_262_int, var_263_int, var_264_int); // 0x776 TObjFunc
	return 0; // 0x778 Return
	
Label_1913:
	var_265_int = 7393; // 0x779 PushI
	var_266_bool = var_20_string == var_265_int; // 0x77a Eq
	if(var_266_bool == 0) goto Label_1936; // 0x77b JumpB
	var_267_string = ""; // 0x77c PushV
	var_267_string = "Neutral"; // 0x77d MovS
	func_1508(var_21_bool, var_267_string); // 0x77e Call
	var_268_int = 6707; // 0x780 PushI
	SetMessage(var_268_int); // 0x781 TObjFunc
	ClearReplies(); // 0x783 TObjFunc
	var_269_int = 6708; // 0x785 PushI
	var_270_int = -1; // 0x786 PushI
	var_271_int = 7394; // 0x787 PushI
	AddReply(var_269_int, var_270_int, var_271_int); // 0x788 TObjFunc
	var_272_int = 6709; // 0x78a PushI
	var_273_int = -1; // 0x78b PushI
	var_274_int = 7395; // 0x78c PushI
	AddReply(var_272_int, var_273_int, var_274_int); // 0x78d TObjFunc
	return 0; // 0x78f Return
	
Label_1936:
	var_275_int = 7355; // 0x790 PushI
	var_276_bool = var_20_string == var_275_int; // 0x791 Eq
	if(var_276_bool == 0) goto Label_1959; // 0x792 JumpB
	var_277_string = ""; // 0x793 PushV
	var_277_string = "Neutral"; // 0x794 MovS
	func_1508(var_21_bool, var_277_string); // 0x795 Call
	var_278_int = 6674; // 0x797 PushI
	SetMessage(var_278_int); // 0x798 TObjFunc
	ClearReplies(); // 0x79a TObjFunc
	var_279_int = 6675; // 0x79c PushI
	var_280_int = 7357; // 0x79d PushI
	var_281_int = 7356; // 0x79e PushI
	AddReply(var_279_int, var_280_int, var_281_int); // 0x79f TObjFunc
	var_282_int = 6689; // 0x7a1 PushI
	var_283_int = 7373; // 0x7a2 PushI
	var_284_int = 7372; // 0x7a3 PushI
	AddReply(var_282_int, var_283_int, var_284_int); // 0x7a4 TObjFunc
	return 0; // 0x7a6 Return
	
Label_1959:
	var_285_int = 7373; // 0x7a7 PushI
	var_286_bool = var_20_string == var_285_int; // 0x7a8 Eq
	if(var_286_bool == 0) goto Label_1982; // 0x7a9 JumpB
	var_287_string = ""; // 0x7aa PushV
	var_287_string = "Neutral"; // 0x7ab MovS
	func_1508(var_21_bool, var_287_string); // 0x7ac Call
	var_288_int = 6690; // 0x7ae PushI
	SetMessage(var_288_int); // 0x7af TObjFunc
	ClearReplies(); // 0x7b1 TObjFunc
	var_289_int = 6691; // 0x7b3 PushI
	var_290_int = 7357; // 0x7b4 PushI
	var_291_int = 7374; // 0x7b5 PushI
	AddReply(var_289_int, var_290_int, var_291_int); // 0x7b6 TObjFunc
	var_292_int = 6692; // 0x7b8 PushI
	var_293_int = 7377; // 0x7b9 PushI
	var_294_int = 7376; // 0x7ba PushI
	AddReply(var_292_int, var_293_int, var_294_int); // 0x7bb TObjFunc
	return 0; // 0x7bd Return
	
Label_1982:
	var_295_int = 7377; // 0x7be PushI
	var_296_bool = var_20_string == var_295_int; // 0x7bf Eq
	if(var_296_bool == 0) goto Label_2005; // 0x7c0 JumpB
	var_297_string = ""; // 0x7c1 PushV
	var_297_string = "Neutral"; // 0x7c2 MovS
	func_1508(var_21_bool, var_297_string); // 0x7c3 Call
	var_298_int = 6693; // 0x7c5 PushI
	SetMessage(var_298_int); // 0x7c6 TObjFunc
	ClearReplies(); // 0x7c8 TObjFunc
	var_299_int = 6694; // 0x7ca PushI
	var_300_int = 7362; // 0x7cb PushI
	var_301_int = 7378; // 0x7cc PushI
	AddReply(var_299_int, var_300_int, var_301_int); // 0x7cd TObjFunc
	var_302_int = 6695; // 0x7cf PushI
	var_303_int = 7381; // 0x7d0 PushI
	var_304_int = 7380; // 0x7d1 PushI
	AddReply(var_302_int, var_303_int, var_304_int); // 0x7d2 TObjFunc
	return 0; // 0x7d4 Return
	
Label_2005:
	var_305_int = 7381; // 0x7d5 PushI
	var_306_bool = var_20_string == var_305_int; // 0x7d6 Eq
	if(var_306_bool == 0) goto Label_2028; // 0x7d7 JumpB
	var_307_string = ""; // 0x7d8 PushV
	var_307_string = "Neutral"; // 0x7d9 MovS
	func_1508(var_21_bool, var_307_string); // 0x7da Call
	var_308_int = 6696; // 0x7dc PushI
	SetMessage(var_308_int); // 0x7dd TObjFunc
	ClearReplies(); // 0x7df TObjFunc
	var_309_int = 6697; // 0x7e1 PushI
	var_310_int = -1; // 0x7e2 PushI
	var_311_int = 7382; // 0x7e3 PushI
	AddReply(var_309_int, var_310_int, var_311_int); // 0x7e4 TObjFunc
	var_312_int = 6698; // 0x7e6 PushI
	var_313_int = 7362; // 0x7e7 PushI
	var_314_int = 7383; // 0x7e8 PushI
	AddReply(var_312_int, var_313_int, var_314_int); // 0x7e9 TObjFunc
	return 0; // 0x7eb Return
	
Label_2028:
	var_315_int = 7357; // 0x7ec PushI
	var_316_bool = var_20_string == var_315_int; // 0x7ed Eq
	if(var_316_bool == 0) goto Label_2051; // 0x7ee JumpB
	var_317_string = ""; // 0x7ef PushV
	var_317_string = "Neutral"; // 0x7f0 MovS
	func_1508(var_21_bool, var_317_string); // 0x7f1 Call
	var_318_int = 6676; // 0x7f3 PushI
	SetMessage(var_318_int); // 0x7f4 TObjFunc
	ClearReplies(); // 0x7f6 TObjFunc
	var_319_int = 6677; // 0x7f8 PushI
	var_320_int = -1; // 0x7f9 PushI
	var_321_int = 7358; // 0x7fa PushI
	AddReply(var_319_int, var_320_int, var_321_int); // 0x7fb TObjFunc
	var_322_int = 6678; // 0x7fd PushI
	var_323_int = 7360; // 0x7fe PushI
	var_324_int = 7359; // 0x7ff PushI
	AddReply(var_322_int, var_323_int, var_324_int); // 0x800 TObjFunc
	return 0; // 0x802 Return
	
Label_2051:
	var_325_int = 7360; // 0x803 PushI
	var_326_bool = var_20_string == var_325_int; // 0x804 Eq
	if(var_326_bool == 0) goto Label_2079; // 0x805 JumpB
	var_327_string = ""; // 0x806 PushV
	var_327_string = "Neutral"; // 0x807 MovS
	func_1508(var_21_bool, var_327_string); // 0x808 Call
	var_328_int = 6679; // 0x80a PushI
	SetMessage(var_328_int); // 0x80b TObjFunc
	ClearReplies(); // 0x80d TObjFunc
	var_329_int = 6680; // 0x80f PushI
	var_330_int = 7362; // 0x810 PushI
	var_331_int = 7361; // 0x811 PushI
	AddReply(var_329_int, var_330_int, var_331_int); // 0x812 TObjFunc
	var_332_int = 6683; // 0x814 PushI
	var_333_int = 7365; // 0x815 PushI
	var_334_int = 7364; // 0x816 PushI
	AddReply(var_332_int, var_333_int, var_334_int); // 0x817 TObjFunc
	var_335_int = 6686; // 0x819 PushI
	var_336_int = 7369; // 0x81a PushI
	var_337_int = 7368; // 0x81b PushI
	AddReply(var_335_int, var_336_int, var_337_int); // 0x81c TObjFunc
	return 0; // 0x81e Return
	
Label_2079:
	var_338_int = 7369; // 0x81f PushI
	var_339_bool = var_20_string == var_338_int; // 0x820 Eq
	if(var_339_bool == 0) goto Label_2097; // 0x821 JumpB
	var_340_string = ""; // 0x822 PushV
	var_340_string = "Neutral"; // 0x823 MovS
	func_1508(var_21_bool, var_340_string); // 0x824 Call
	var_341_int = 6687; // 0x826 PushI
	SetMessage(var_341_int); // 0x827 TObjFunc
	ClearReplies(); // 0x829 TObjFunc
	var_342_int = 6688; // 0x82b PushI
	var_343_int = 7362; // 0x82c PushI
	var_344_int = 7370; // 0x82d PushI
	AddReply(var_342_int, var_343_int, var_344_int); // 0x82e TObjFunc
	return 0; // 0x830 Return
	
Label_2097:
	var_345_int = 7365; // 0x831 PushI
	var_346_bool = var_20_string == var_345_int; // 0x832 Eq
	if(var_346_bool == 0) goto Label_2115; // 0x833 JumpB
	var_347_string = ""; // 0x834 PushV
	var_347_string = "Neutral"; // 0x835 MovS
	func_1508(var_21_bool, var_347_string); // 0x836 Call
	var_348_int = 6684; // 0x838 PushI
	SetMessage(var_348_int); // 0x839 TObjFunc
	ClearReplies(); // 0x83b TObjFunc
	var_349_int = 6685; // 0x83d PushI
	var_350_int = 7362; // 0x83e PushI
	var_351_int = 7366; // 0x83f PushI
	AddReply(var_349_int, var_350_int, var_351_int); // 0x840 TObjFunc
	return 0; // 0x842 Return
	
Label_2115:
	var_352_int = 7362; // 0x843 PushI
	var_353_bool = var_20_string == var_352_int; // 0x844 Eq
	if(var_353_bool == 0) goto Label_2133; // 0x845 JumpB
	var_354_string = ""; // 0x846 PushV
	var_354_string = "Neutral"; // 0x847 MovS
	func_1508(var_21_bool, var_354_string); // 0x848 Call
	var_355_int = 6681; // 0x84a PushI
	SetMessage(var_355_int); // 0x84b TObjFunc
	ClearReplies(); // 0x84d TObjFunc
	var_356_int = 6682; // 0x84f PushI
	var_357_int = -1; // 0x850 PushI
	var_358_int = 7363; // 0x851 PushI
	AddReply(var_356_int, var_357_int, var_358_int); // 0x852 TObjFunc
	return 0; // 0x854 Return
	
Label_2133:
	var_3_string = 1; // 0x855 TMovB
	var_359_bool = 0; // 0x856 PushV
	func_3115(var_359_bool); // 0x857 Call
	if(var_359_bool == 0) goto Label_2141; // 0x859 JumpB
	lshStopAnimation(); // 0x85a Func
	goto Label_2143; // 0x85c Jump
	
Label_2143:
	return 0; // 0x85f Return
	
Label_2141:
	StopAnimation(); // 0x85d Func
	
Label_2145:
	return 0; // 0x861 Return
}


task_9_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int)
{
	var_22_int = 1; // 0x983 PushI
	if(var_22_int == 0) goto Label_2920; // 0x984 JumpB
	func_3016(); // 0x986 Call
	var_24_int = 13271; // 0x988 PushI
	var_25_bool = var_21_int == var_24_int; // 0x989 Eq
	if(var_25_bool == 0) goto Label_2453; // 0x98a JumpB
	var_26_object = Obj(); var_27_object = Obj(); // 0x98b PushV
	var_26_object = var_1_object; // 0x98c MovT
	var_27_object = var_0_object; // 0x98d MovT
	func_3292(); // 0x98e Call
	var_30_object = Obj(); var_31_object = Obj(); // 0x990 PushV
	var_30_object = var_1_object; // 0x991 MovT
	var_31_object = var_0_object; // 0x992 MovT
	func_3298(); // 0x993 Call
	
Label_2453:
	var_82_int = 13288; // 0x995 PushI
	var_83_bool = var_21_int == var_82_int; // 0x996 Eq
	if(var_83_bool == 0) goto Label_2461; // 0x997 JumpB
	var_84_object = Obj(); var_85_object = Obj(); // 0x998 PushV
	var_84_object = var_1_object; // 0x999 MovT
	var_85_object = var_0_object; // 0x99a MovT
	func_3292(); // 0x99b Call
	
Label_2461:
	var_86_int = 13290; // 0x99d PushI
	var_87_bool = var_21_int == var_86_int; // 0x99e Eq
	if(var_87_bool == 0) goto Label_2469; // 0x99f JumpB
	var_88_object = Obj(); var_89_object = Obj(); // 0x9a0 PushV
	var_88_object = var_1_object; // 0x9a1 MovT
	var_89_object = var_0_object; // 0x9a2 MovT
	func_3298(); // 0x9a3 Call
	
Label_2469:
	var_90_int = 13714; // 0x9a5 PushI
	var_91_bool = var_21_int == var_90_int; // 0x9a6 Eq
	if(var_91_bool == 0) goto Label_2482; // 0x9a7 JumpB
	var_92_object = Obj(); var_93_object = Obj(); // 0x9a8 PushV
	var_92_object = var_1_object; // 0x9a9 MovT
	var_93_object = var_0_object; // 0x9aa MovT
	func_3319(); // 0x9ab Call
	var_96_object = Obj(); var_97_object = Obj(); // 0x9ad PushV
	var_96_object = var_1_object; // 0x9ae MovT
	var_97_object = var_0_object; // 0x9af MovT
	func_3325(); // 0x9b0 Call
	
Label_2482:
	var_110_int = 13717; // 0x9b2 PushI
	var_111_bool = var_21_int == var_110_int; // 0x9b3 Eq
	if(var_111_bool == 0) goto Label_2495; // 0x9b4 JumpB
	var_112_object = Obj(); var_113_object = Obj(); // 0x9b5 PushV
	var_112_object = var_1_object; // 0x9b6 MovT
	var_113_object = var_0_object; // 0x9b7 MovT
	func_3335(); // 0x9b8 Call
	var_126_object = Obj(); var_127_object = Obj(); // 0x9ba PushV
	var_126_object = var_1_object; // 0x9bb MovT
	var_127_object = var_0_object; // 0x9bc MovT
	func_3345(); // 0x9bd Call
	
Label_2495:
	var_130_int = 13273; // 0x9bf PushI
	var_131_bool = var_21_int == var_130_int; // 0x9c0 Eq
	if(var_131_bool == 0) goto Label_2503; // 0x9c1 JumpB
	var_132_object = Obj(); var_133_object = Obj(); // 0x9c2 PushV
	var_132_object = var_1_object; // 0x9c3 MovT
	var_133_object = var_0_object; // 0x9c4 MovT
	func_3351(); // 0x9c5 Call
	
Label_2503:
	var_136_int = 13258; // 0x9c7 PushI
	var_137_bool = var_20_int == var_136_int; // 0x9c8 Eq
	if(var_137_bool == 0) goto Label_2677; // 0x9c9 JumpB
	var_138_bool = 0; // 0x9ca PushV
	var_138_bool = 1; // 0x9cb MovB
	var_139_bool = 0; // 0x9cc PushV
	var_139_bool = 0; // 0x9cd MovB
	var_140_bool = 0; var_141_object = Obj(); // 0x9ce PushV
	var_141_object = var_1_object; // 0x9cf MovT
	func_3533(var_140_bool, var_141_object); // 0x9d0 Call
	if(var_140_bool == 0) goto Label_2521; // 0x9d2 JumpB
	var_155_bool = 0; var_156_object = Obj(); // 0x9d3 PushV
	var_156_object = var_1_object; // 0x9d4 MovT
	func_3563(var_156_object); // 0x9d5 Call
	if(var_155_bool == 0) goto Label_2521; // 0x9d7 JumpB
	var_139_bool = 1; // 0x9d8 MovB
	
Label_2521:
	if(var_139_bool == 0) goto Label_2537; // 0x9d9 JumpB
	var_163_bool = 0; // 0x9da PushV
	var_163_bool = 0; // 0x9db MovB
	var_164_bool = 0; var_165_object = Obj(); // 0x9dc PushV
	var_165_object = var_1_object; // 0x9dd MovT
	func_3543(var_164_bool, var_165_object); // 0x9de Call
	if(var_164_bool == 0) goto Label_2535; // 0x9e0 JumpB
	var_175_bool = 0; var_176_object = Obj(); // 0x9e1 PushV
	var_176_object = var_1_object; // 0x9e2 MovT
	func_3563(var_176_object); // 0x9e3 Call
	if(var_175_bool == 0) goto Label_2535; // 0x9e5 JumpB
	var_163_bool = 1; // 0x9e6 MovB
	
Label_2535:
	if(var_163_bool == 0) goto Label_2537; // 0x9e7 JumpB
	var_138_bool = 0; // 0x9e8 MovB
	
Label_2537:
	if(var_138_bool == 0) goto Label_2558; // 0x9e9 JumpB
	var_177_string = ""; // 0x9ea PushV
	var_177_string = "Neutral"; // 0x9eb MovS
	func_2418(var_21_int, var_177_string); // 0x9ec Call
	var_192_int = 12040; // 0x9ee PushI
	SetMessage(var_192_int); // 0x9ef TObjFunc
	ClearReplies(); // 0x9f1 TObjFunc
	var_193_int = 12041; // 0x9f3 PushI
	var_194_int = 13262; // 0x9f4 PushI
	var_195_int = 13259; // 0x9f5 PushI
	AddReply(var_193_int, var_194_int, var_195_int); // 0x9f6 TObjFunc
	var_196_int = 12042; // 0x9f8 PushI
	var_197_int = 13261; // 0x9f9 PushI
	var_198_int = 13260; // 0x9fa PushI
	AddReply(var_196_int, var_197_int, var_198_int); // 0x9fb TObjFunc
	return 0; // 0x9fd Return
	
Label_2558:
	var_199_string = ""; // 0x9fe PushV
	var_199_string = "Neutral"; // 0x9ff MovS
	func_2418(var_21_int, var_199_string); // 0xa00 Call
	var_200_int = 12052; // 0xa02 PushI
	SetMessage(var_200_int); // 0xa03 TObjFunc
	ClearReplies(); // 0xa05 TObjFunc
	var_201_bool = 0; // 0xa07 PushV
	var_201_bool = 1; // 0xa08 MovB
	var_202_bool = 0; // 0xa09 PushV
	var_202_bool = 0; // 0xa0a MovB
	var_203_bool = 0; var_204_object = Obj(); // 0xa0b PushV
	var_204_object = var_1_object; // 0xa0c MovT
	func_3533(var_203_bool, var_204_object); // 0xa0d Call
	if(var_203_bool == 0) goto Label_2582; // 0xa0f JumpB
	var_205_bool = 0; var_206_object = Obj(); // 0xa10 PushV
	var_206_object = var_1_object; // 0xa11 MovT
	func_3575(var_206_object); // 0xa12 Call
	if(var_205_bool == 0) goto Label_2582; // 0xa14 JumpB
	var_202_bool = 1; // 0xa15 MovB
	
Label_2582:
	if(var_202_bool == 0) goto Label_2598; // 0xa16 JumpB
	var_211_bool = 0; // 0xa17 PushV
	var_211_bool = 0; // 0xa18 MovB
	var_212_bool = 0; var_213_object = Obj(); // 0xa19 PushV
	var_213_object = var_1_object; // 0xa1a MovT
	func_3543(var_212_bool, var_213_object); // 0xa1b Call
	if(var_212_bool == 0) goto Label_2596; // 0xa1d JumpB
	var_214_bool = 0; var_215_object = Obj(); // 0xa1e PushV
	var_215_object = var_1_object; // 0xa1f MovT
	func_3575(var_215_object); // 0xa20 Call
	if(var_214_bool == 0) goto Label_2596; // 0xa22 JumpB
	var_211_bool = 1; // 0xa23 MovB
	
Label_2596:
	if(var_211_bool == 0) goto Label_2598; // 0xa24 JumpB
	var_201_bool = 0; // 0xa25 MovB
	
Label_2598:
	if(var_201_bool == 0) goto Label_2604; // 0xa26 JumpB
	var_216_int = 12066; // 0xa27 PushI
	var_217_int = 13289; // 0xa28 PushI
	var_218_int = 13287; // 0xa29 PushI
	AddReply(var_216_int, var_217_int, var_218_int); // 0xa2a TObjFunc
	
Label_2604:
	var_219_bool = 0; // 0xa2c PushV
	var_219_bool = 0; // 0xa2d MovB
	var_220_bool = 0; var_221_object = Obj(); // 0xa2e PushV
	var_221_object = var_1_object; // 0xa2f MovT
	func_3599(var_221_object); // 0xa30 Call
	if(var_220_bool == 0) goto Label_2617; // 0xa32 JumpB
	var_226_bool = 0; var_227_object = Obj(); // 0xa33 PushV
	var_227_object = var_1_object; // 0xa34 MovT
	func_3611(var_227_object); // 0xa35 Call
	if(var_226_bool == 0) goto Label_2617; // 0xa37 JumpB
	var_219_bool = 1; // 0xa38 MovB
	
Label_2617:
	if(var_219_bool == 0) goto Label_2623; // 0xa39 JumpB
	var_232_int = 12543; // 0xa3a PushI
	var_233_int = 13713; // 0xa3b PushI
	var_234_int = 13712; // 0xa3c PushI
	AddReply(var_232_int, var_233_int, var_234_int); // 0xa3d TObjFunc
	
Label_2623:
	var_235_bool = 0; // 0xa3f PushV
	var_235_bool = 0; // 0xa40 MovB
	var_236_bool = 0; // 0xa41 PushV
	var_236_bool = 0; // 0xa42 MovB
	var_237_bool = 0; var_238_object = Obj(); // 0xa43 PushV
	var_238_object = var_1_object; // 0xa44 MovT
	func_3587(var_238_object); // 0xa45 Call
	if(var_237_bool == 0) goto Label_2638; // 0xa47 JumpB
	var_243_bool = 0; var_244_object = Obj(); // 0xa48 PushV
	var_244_object = var_1_object; // 0xa49 MovT
	func_3623(var_244_object); // 0xa4a Call
	if(var_243_bool == 0) goto Label_2638; // 0xa4c JumpB
	var_236_bool = 1; // 0xa4d MovB
	
Label_2638:
	if(var_236_bool == 0) goto Label_2646; // 0xa4e JumpB
	var_249_bool = 0; var_250_object = Obj(); // 0xa4f PushV
	var_250_object = var_1_object; // 0xa50 MovT
	func_3599(var_250_object); // 0xa51 Call
	var_251_bool = var_249_bool == 0; // 0xa53 Not
	if(var_251_bool == 0) goto Label_2646; // 0xa54 JumpB
	var_235_bool = 1; // 0xa55 MovB
	
Label_2646:
	if(var_235_bool == 0) goto Label_2652; // 0xa56 JumpB
	var_252_int = 12546; // 0xa57 PushI
	var_253_int = 13716; // 0xa58 PushI
	var_254_int = 13715; // 0xa59 PushI
	AddReply(var_252_int, var_253_int, var_254_int); // 0xa5a TObjFunc
	
Label_2652:
	var_255_bool = 0; // 0xa5c PushV
	var_255_bool = 0; // 0xa5d MovB
	var_256_bool = 0; var_257_object = Obj(); // 0xa5e PushV
	var_257_object = var_1_object; // 0xa5f MovT
	func_3647(var_257_object); // 0xa60 Call
	if(var_256_bool == 0) goto Label_2665; // 0xa62 JumpB
	var_262_bool = 0; var_263_object = Obj(); // 0xa63 PushV
	var_263_object = var_1_object; // 0xa64 MovT
	func_3635(var_263_object); // 0xa65 Call
	if(var_262_bool == 0) goto Label_2665; // 0xa67 JumpB
	var_255_bool = 1; // 0xa68 MovB
	
Label_2665:
	if(var_255_bool == 0) goto Label_2671; // 0xa69 JumpB
	var_268_int = 12053; // 0xa6a PushI
	var_269_int = 13274; // 0xa6b PushI
	var_270_int = 13273; // 0xa6c PushI
	AddReply(var_268_int, var_269_int, var_270_int); // 0xa6d TObjFunc
	
Label_2671:
	var_271_int = 12060; // 0xa6f PushI
	var_272_int = -1; // 0xa70 PushI
	var_273_int = 13280; // 0xa71 PushI
	AddReply(var_271_int, var_272_int, var_273_int); // 0xa72 TObjFunc
	return 0; // 0xa74 Return
	
Label_2677:
	var_274_int = 13274; // 0xa75 PushI
	var_275_bool = var_20_int == var_274_int; // 0xa76 Eq
	if(var_275_bool == 0) goto Label_2695; // 0xa77 JumpB
	var_276_string = ""; // 0xa78 PushV
	var_276_string = "Neutral"; // 0xa79 MovS
	func_2418(var_21_int, var_276_string); // 0xa7a Call
	var_277_int = 12054; // 0xa7c PushI
	SetMessage(var_277_int); // 0xa7d TObjFunc
	ClearReplies(); // 0xa7f TObjFunc
	var_278_int = 12055; // 0xa81 PushI
	var_279_int = 13276; // 0xa82 PushI
	var_280_int = 13275; // 0xa83 PushI
	AddReply(var_278_int, var_279_int, var_280_int); // 0xa84 TObjFunc
	return 0; // 0xa86 Return
	
Label_2695:
	var_281_int = 13276; // 0xa87 PushI
	var_282_bool = var_20_int == var_281_int; // 0xa88 Eq
	if(var_282_bool == 0) goto Label_2718; // 0xa89 JumpB
	var_283_string = ""; // 0xa8a PushV
	var_283_string = "Neutral"; // 0xa8b MovS
	func_2418(var_21_int, var_283_string); // 0xa8c Call
	var_284_int = 12056; // 0xa8e PushI
	SetMessage(var_284_int); // 0xa8f TObjFunc
	ClearReplies(); // 0xa91 TObjFunc
	var_285_int = 12057; // 0xa93 PushI
	var_286_int = 13278; // 0xa94 PushI
	var_287_int = 13277; // 0xa95 PushI
	AddReply(var_285_int, var_286_int, var_287_int); // 0xa96 TObjFunc
	var_288_int = 12061; // 0xa98 PushI
	var_289_int = 13282; // 0xa99 PushI
	var_290_int = 13281; // 0xa9a PushI
	AddReply(var_288_int, var_289_int, var_290_int); // 0xa9b TObjFunc
	return 0; // 0xa9d Return
	
Label_2718:
	var_291_int = 13282; // 0xa9e PushI
	var_292_bool = var_20_int == var_291_int; // 0xa9f Eq
	if(var_292_bool == 0) goto Label_2736; // 0xaa0 JumpB
	var_293_string = ""; // 0xaa1 PushV
	var_293_string = "Neutral"; // 0xaa2 MovS
	func_2418(var_21_int, var_293_string); // 0xaa3 Call
	var_294_int = 12062; // 0xaa5 PushI
	SetMessage(var_294_int); // 0xaa6 TObjFunc
	ClearReplies(); // 0xaa8 TObjFunc
	var_295_int = 12063; // 0xaaa PushI
	var_296_int = 13284; // 0xaab PushI
	var_297_int = 13283; // 0xaac PushI
	AddReply(var_295_int, var_296_int, var_297_int); // 0xaad TObjFunc
	return 0; // 0xaaf Return
	
Label_2736:
	var_298_int = 13284; // 0xab0 PushI
	var_299_bool = var_20_int == var_298_int; // 0xab1 Eq
	if(var_299_bool == 0) goto Label_2754; // 0xab2 JumpB
	var_300_string = ""; // 0xab3 PushV
	var_300_string = "Neutral"; // 0xab4 MovS
	func_2418(var_21_int, var_300_string); // 0xab5 Call
	var_301_int = 12064; // 0xab7 PushI
	SetMessage(var_301_int); // 0xab8 TObjFunc
	ClearReplies(); // 0xaba TObjFunc
	var_302_int = 12065; // 0xabc PushI
	var_303_int = 13278; // 0xabd PushI
	var_304_int = 13285; // 0xabe PushI
	AddReply(var_302_int, var_303_int, var_304_int); // 0xabf TObjFunc
	return 0; // 0xac1 Return
	
Label_2754:
	var_305_int = 13278; // 0xac2 PushI
	var_306_bool = var_20_int == var_305_int; // 0xac3 Eq
	if(var_306_bool == 0) goto Label_2772; // 0xac4 JumpB
	var_307_string = ""; // 0xac5 PushV
	var_307_string = "Neutral"; // 0xac6 MovS
	func_2418(var_21_int, var_307_string); // 0xac7 Call
	var_308_int = 12058; // 0xac9 PushI
	SetMessage(var_308_int); // 0xaca TObjFunc
	ClearReplies(); // 0xacc TObjFunc
	var_309_int = 12059; // 0xace PushI
	var_310_int = -1; // 0xacf PushI
	var_311_int = 13279; // 0xad0 PushI
	AddReply(var_309_int, var_310_int, var_311_int); // 0xad1 TObjFunc
	return 0; // 0xad3 Return
	
Label_2772:
	var_312_int = 13716; // 0xad4 PushI
	var_313_bool = var_20_int == var_312_int; // 0xad5 Eq
	if(var_313_bool == 0) goto Label_2790; // 0xad6 JumpB
	var_314_string = ""; // 0xad7 PushV
	var_314_string = "Neutral"; // 0xad8 MovS
	func_2418(var_21_int, var_314_string); // 0xad9 Call
	var_315_int = 12547; // 0xadb PushI
	SetMessage(var_315_int); // 0xadc TObjFunc
	ClearReplies(); // 0xade TObjFunc
	var_316_int = 12548; // 0xae0 PushI
	var_317_int = -1; // 0xae1 PushI
	var_318_int = 13717; // 0xae2 PushI
	AddReply(var_316_int, var_317_int, var_318_int); // 0xae3 TObjFunc
	return 0; // 0xae5 Return
	
Label_2790:
	var_319_int = 13713; // 0xae6 PushI
	var_320_bool = var_20_int == var_319_int; // 0xae7 Eq
	if(var_320_bool == 0) goto Label_2808; // 0xae8 JumpB
	var_321_string = ""; // 0xae9 PushV
	var_321_string = "Neutral"; // 0xaea MovS
	func_2418(var_21_int, var_321_string); // 0xaeb Call
	var_322_int = 12544; // 0xaed PushI
	SetMessage(var_322_int); // 0xaee TObjFunc
	ClearReplies(); // 0xaf0 TObjFunc
	var_323_int = 12545; // 0xaf2 PushI
	var_324_int = -1; // 0xaf3 PushI
	var_325_int = 13714; // 0xaf4 PushI
	AddReply(var_323_int, var_324_int, var_325_int); // 0xaf5 TObjFunc
	return 0; // 0xaf7 Return
	
Label_2808:
	var_326_int = 13289; // 0xaf8 PushI
	var_327_bool = var_20_int == var_326_int; // 0xaf9 Eq
	if(var_327_bool == 0) goto Label_2826; // 0xafa JumpB
	var_328_string = ""; // 0xafb PushV
	var_328_string = "Neutral"; // 0xafc MovS
	func_2418(var_21_int, var_328_string); // 0xafd Call
	var_329_int = 12068; // 0xaff PushI
	SetMessage(var_329_int); // 0xb00 TObjFunc
	ClearReplies(); // 0xb02 TObjFunc
	var_330_int = 12069; // 0xb04 PushI
	var_331_int = -1; // 0xb05 PushI
	var_332_int = 13290; // 0xb06 PushI
	AddReply(var_330_int, var_331_int, var_332_int); // 0xb07 TObjFunc
	return 0; // 0xb09 Return
	
Label_2826:
	var_333_int = 13261; // 0xb0a PushI
	var_334_bool = var_20_int == var_333_int; // 0xb0b Eq
	if(var_334_bool == 0) goto Label_2844; // 0xb0c JumpB
	var_335_string = ""; // 0xb0d PushV
	var_335_string = "Neutral"; // 0xb0e MovS
	func_2418(var_21_int, var_335_string); // 0xb0f Call
	var_336_int = 12043; // 0xb11 PushI
	SetMessage(var_336_int); // 0xb12 TObjFunc
	ClearReplies(); // 0xb14 TObjFunc
	var_337_int = 12048; // 0xb16 PushI
	var_338_int = 13268; // 0xb17 PushI
	var_339_int = 13267; // 0xb18 PushI
	AddReply(var_337_int, var_338_int, var_339_int); // 0xb19 TObjFunc
	return 0; // 0xb1b Return
	
Label_2844:
	var_340_int = 13268; // 0xb1c PushI
	var_341_bool = var_20_int == var_340_int; // 0xb1d Eq
	if(var_341_bool == 0) goto Label_2862; // 0xb1e JumpB
	var_342_string = ""; // 0xb1f PushV
	var_342_string = "Neutral"; // 0xb20 MovS
	func_2418(var_21_int, var_342_string); // 0xb21 Call
	var_343_int = 12049; // 0xb23 PushI
	SetMessage(var_343_int); // 0xb24 TObjFunc
	ClearReplies(); // 0xb26 TObjFunc
	var_344_int = 12050; // 0xb28 PushI
	var_345_int = 13264; // 0xb29 PushI
	var_346_int = 13269; // 0xb2a PushI
	AddReply(var_344_int, var_345_int, var_346_int); // 0xb2b TObjFunc
	return 0; // 0xb2d Return
	
Label_2862:
	var_347_int = 13262; // 0xb2e PushI
	var_348_bool = var_20_int == var_347_int; // 0xb2f Eq
	if(var_348_bool == 0) goto Label_2885; // 0xb30 JumpB
	var_349_string = ""; // 0xb31 PushV
	var_349_string = "Neutral"; // 0xb32 MovS
	func_2418(var_21_int, var_349_string); // 0xb33 Call
	var_350_int = 12044; // 0xb35 PushI
	SetMessage(var_350_int); // 0xb36 TObjFunc
	ClearReplies(); // 0xb38 TObjFunc
	var_351_int = 12045; // 0xb3a PushI
	var_352_int = 13264; // 0xb3b PushI
	var_353_int = 13263; // 0xb3c PushI
	AddReply(var_351_int, var_352_int, var_353_int); // 0xb3d TObjFunc
	var_354_int = 12047; // 0xb3f PushI
	var_355_int = 13261; // 0xb40 PushI
	var_356_int = 13265; // 0xb41 PushI
	AddReply(var_354_int, var_355_int, var_356_int); // 0xb42 TObjFunc
	return 0; // 0xb44 Return
	
Label_2885:
	var_357_int = 13264; // 0xb45 PushI
	var_358_bool = var_20_int == var_357_int; // 0xb46 Eq
	if(var_358_bool == 0) goto Label_2908; // 0xb47 JumpB
	var_359_string = ""; // 0xb48 PushV
	var_359_string = "Neutral"; // 0xb49 MovS
	func_2418(var_21_int, var_359_string); // 0xb4a Call
	var_360_int = 12046; // 0xb4c PushI
	SetMessage(var_360_int); // 0xb4d TObjFunc
	ClearReplies(); // 0xb4f TObjFunc
	var_361_int = 12051; // 0xb51 PushI
	var_362_int = -1; // 0xb52 PushI
	var_363_int = 13271; // 0xb53 PushI
	AddReply(var_361_int, var_362_int, var_363_int); // 0xb54 TObjFunc
	var_364_int = 12067; // 0xb56 PushI
	var_365_int = -1; // 0xb57 PushI
	var_366_int = 13288; // 0xb58 PushI
	AddReply(var_364_int, var_365_int, var_366_int); // 0xb59 TObjFunc
	return 0; // 0xb5b Return
	
Label_2908:
	var_3_string = 1; // 0xb5c TMovB
	var_367_bool = 0; // 0xb5d PushV
	func_3115(var_367_bool); // 0xb5e Call
	if(var_367_bool == 0) goto Label_2916; // 0xb60 JumpB
	lshStopAnimation(); // 0xb61 Func
	goto Label_2918; // 0xb63 Jump
	
Label_2918:
	return 0; // 0xb66 Return
	
Label_2916:
	StopAnimation(); // 0xb64 Func
	
Label_2920:
	return 0; // 0xb68 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool)
{
	func_4019(); // 0x7 Call
	var_21_bool = 0; // 0x9 PushV
	func_2933(var_21_bool); // 0xa Call
	var_24_bool = var_21_bool == 0; // 0xc Not
	if(var_24_bool == 0) goto Label_19; // 0xd JumpB
	TaskCall(0); // 0xf TaskCall
	func_0(); // 0x10 Call
	TaskReturn(); // 0x11 TaskReturn
	
Label_19:
	var_25_string = ""; // 0x13 PushV
	var_25_string = "Neutral"; // 0x14 MovS
	func_2998(var_25_string); // 0x15 Call
	lshWaitForAnimEnd(); // 0x17 Func
	goto Label_19; // 0x19 Jump
}


func_0()
{
	Hold(); // 0x0 Func
	return 0; // 0x2 Return
}


func_3840(var_57_object)
{
	var_58_object = Obj(); var_59_object = Obj(); var_60_object = Obj(); var_61_object = Obj(); // 0xf00 PushV
	GetMainOutdoorScene(var_60_object); // 0xf01 Func
	var_62_bool = var_60_object == 0; // 0xf03 NullEq
	if(var_62_bool == 0) goto Label_3851; // 0xf04 JumpB
	var_63_string = "Can't find main outdoor scene"; // 0xf05 PushS
	Trace(var_63_string); // 0xf06 Func
	var_61_object = 0; // 0xf08 SetNull
	var_57_object = var_61_object; // 0xf09 Mov
	return 4; // 0xf0a Return
	
Label_3851:
	GetMap(var_61_object); // 0xf0b ObjFunc
	var_57_object = var_61_object; // 0xf0d Mov
	return 4; // 0xf0e Return
}


func_3074(var_68_float)
{
	var_69_float = 0; var_70_float = 0; // 0xc02 PushV
	GetGameTime(var_70_float); // 0xc03 Func
	var_68_float = var_70_float; // 0xc05 Mov
	return 2; // 0xc06 Return
}


func_3587(var_237_bool)
{
	var_239_int = 0; var_240_string = ""; // 0xe04 PushV
	var_240_string = "d6q03"; // 0xe05 MovS
	func_3033(var_239_int, var_240_string); // 0xe06 Call
	var_241_int = 2; // 0xe08 PushI
	var_242_bool = var_239_int == var_241_int; // 0xe09 Eq
	if(var_242_bool == 0) goto Label_3597; // 0xe0a JumpB
	var_237_bool = 1; // 0xe0b MovB
	return 0; // 0xe0c Return
	
Label_3597:
	var_237_bool = 0; // 0xe0d MovB
	return 0; // 0xe0e Return
}


func_3079(var_136_int)
{
	var_137_float = 0; var_138_float = 0; // 0xc07 PushV
	GetGameTime(var_138_float); // 0xc08 Func
	var_139_int = 1; // 0xc0a PushI
	var_140_int = 0; // 0xc0b PushV
	var_141_int = 24; // 0xc0c PushI
	var_140_int = var_138_float / var_138_float; // 0xc0d Div2
	var_136_int = var_139_int + var_140_int; // 0xc0e Add2
	return 2; // 0xc0f Return
}


func_3335()
{
	func_3987(); // 0xd09 Call
	var_123_bool = 0; var_124_string = ""; var_125_string = ""; // 0xd0b PushV
	var_124_string = "quest_d6_03"; // 0xd0c MovS
	var_125_string = "failed"; // 0xd0d MovS
	func_3062(var_123_bool, var_124_string, var_125_string); // 0xd0e Call
	return 0; // 0xd10 Return
}


func_3599(var_220_bool)
{
	var_222_int = 0; var_223_string = ""; // 0xe10 PushV
	var_223_string = "d6q03AlbinosKilled"; // 0xe11 MovS
	func_3033(var_222_int, var_223_string); // 0xe12 Call
	var_224_int = 1; // 0xe14 PushI
	var_225_bool = var_222_int == var_224_int; // 0xe15 Eq
	if(var_225_bool == 0) goto Label_3609; // 0xe16 JumpB
	var_220_bool = 1; // 0xe17 MovB
	return 0; // 0xe18 Return
	
Label_3609:
	var_220_bool = 0; // 0xe19 MovB
	return 0; // 0xe1a Return
}


func_3088(var_145_int)
{
	var_146_float = 0; var_147_float = 0; // 0xc10 PushV
	GetGameTime(var_147_float); // 0xc11 Func
	var_148_int = 0; // 0xc13 PushV
	var_148_int = var_147_float; // 0xc14 Mov
	var_149_int = 24; // 0xc15 PushI
	var_145_int = var_148_int % var_149_int; // 0xc16 Mod2
	return 2; // 0xc17 Return
}


func_3345()
{
	var_128_string = "ood6Spi4ka3"; // 0xd12 PushS
	var_129_int = 1; // 0xd13 PushI
	SetVariable(var_128_string, var_129_int); // 0xd14 Func
	return 0; // 0xd16 Return
}


func_3857(var_102_object, var_103_string, var_104_float)
{
	var_106_cvector = CVector(0,0,0); var_107_cvector = CVector(0,0,0); var_108_object = Obj(); var_109_bool = 0; var_110_cvector = CVector(0,0,0); var_111_cvector = CVector(0,0,0); var_112_object = Obj(); var_113_bool = 0; // 0xf11 PushV
	GetMainOutdoorScene(var_112_object); // 0xf12 Func
	var_114_bool = var_112_object == 0; // 0xf14 NullEq
	if(var_114_bool == 0) goto Label_3866; // 0xf15 JumpB
	var_115_string = "Can't find main outdoor scene"; // 0xf16 PushS
	Trace(var_115_string); // 0xf17 Func
	return 8; // 0xf19 Return
	
Label_3866:
	GetLocator(var_103_string, var_113_bool, var_110_cvector, var_111_cvector); // 0xf1a ObjFunc
	var_116_bool = var_113_bool == 0; // 0xf1c Not
	if(var_116_bool == 0) goto Label_3876; // 0xf1d JumpB
	var_117_string = "Warning: outdoor scene locator "; // 0xf1e PushS
	var_118_int = var_117_string + var_103_string; // 0xf1f Add
	var_119_string = " doesnt exist"; // 0xf20 PushS
	var_120_int = var_118_int + var_119_string; // 0xf21 Add
	Trace(var_120_int); // 0xf22 Func
	
Label_3876:
	GetMap(var_102_object); // 0xf24 ObjFunc
	var_121_bool = var_102_object == 0; // 0xf26 NullEq
	if(var_121_bool == 0) goto Label_3884; // 0xf27 JumpB
	var_122_string = "Can't find map"; // 0xf28 PushS
	Trace(var_122_string); // 0xf29 Func
	return 8; // 0xf2b Return
	
Label_3884:
	var_123_float = GetByIndex(var_110_cvector, 0); // 0xf2c PushE
	var_124_float = GetByIndex(var_110_cvector, 2); // 0xf2d PushE
	SetMapParams(var_123_float, var_124_float, var_104_float); // 0xf2e ObjFunc
	return 8; // 0xf30 Return
}


func_3351()
{
	var_134_string = "ood6Spi4ka4"; // 0xd18 PushS
	var_135_int = 1; // 0xd19 PushI
	SetVariable(var_134_string, var_135_int); // 0xd1a Func
	return 0; // 0xd1c Return
}


func_3096(var_134_bool, var_135_int)
{
	var_136_int = 0; // 0xc19 PushV
	func_3079(var_136_int); // 0xc1a Call
	var_134_bool = var_136_int == var_135_int; // 0xc1c Eq2
	return 0; // 0xc1d Return
}


func_3611(var_226_bool)
{
	var_228_int = 0; var_229_string = ""; // 0xe1c PushV
	var_229_string = "ood6Spi4ka2"; // 0xe1d MovS
	func_3033(var_228_int, var_229_string); // 0xe1e Call
	var_230_int = 0; // 0xe20 PushI
	var_231_bool = var_228_int == var_230_int; // 0xe21 Eq
	if(var_231_bool == 0) goto Label_3621; // 0xe22 JumpB
	var_226_bool = 1; // 0xe23 MovB
	return 0; // 0xe24 Return
	
Label_3621:
	var_226_bool = 0; // 0xe25 MovB
	return 0; // 0xe26 Return
}


func_3357()
{
	var_105_string = "ood2Spi4ka3"; // 0xd1e PushS
	var_106_int = 1; // 0xd1f PushI
	SetVariable(var_105_string, var_106_int); // 0xd20 Func
	return 0; // 0xd22 Return
}


func_3102(var_532_bool)
{
	var_533_bool = 0; var_534_bool = 0; // 0xc1e PushV
	var_535_string = ""; // 0xc1f PushV
	var_535_string = "No"; // 0xc20 MovS
	func_2998(var_535_string); // 0xc21 Call
	lshWaitForAnimEnd(var_534_bool); // 0xc23 Func
	var_532_bool = var_534_bool; // 0xc25 Mov
	return 2; // 0xc26 Return
}


func_546(var_2_object, var_234_string)
{
	var_235_bool = 0; // 0x223 PushV
	func_3115(var_235_bool); // 0x224 Call
	var_236_bool = var_235_bool == 0; // 0x226 Not
	if(var_236_bool == 0) goto Label_553; // 0x227 JumpB
	return 0; // 0x228 Return
	
Label_553:
	var_237_bool = var_234_string == var_2_object; // 0x229 Eq
	if(var_237_bool == 0) goto Label_556; // 0x22a JumpB
	return 0; // 0x22b Return
	
Label_556:
	var_238_string = ""; // 0x22c PushV
	var_238_string = var_234_string; // 0x22d Mov
	func_2998(var_238_string); // 0x22e Call
	var_2_object = var_234_string; // 0x230 TMov
	return 0; // 0x231 Return
}


func_3363()
{
	var_28_string = "KnowSpi4ka"; // 0xd24 PushS
	var_29_int = 1; // 0xd25 PushI
	SetVariable(var_28_string, var_29_int); // 0xd26 Func
	return 0; // 0xd28 Return
}


func_3111(var_76_int)
{
	var_76_int = 2877; // 0xc27 MovI
	return 0; // 0xc28 Return
}


func_3623(var_243_bool)
{
	var_245_int = 0; var_246_string = ""; // 0xe28 PushV
	var_246_string = "ood6Spi4ka3"; // 0xe29 MovS
	func_3033(var_245_int, var_246_string); // 0xe2a Call
	var_247_int = 0; // 0xe2c PushI
	var_248_bool = var_245_int == var_247_int; // 0xe2d Eq
	if(var_248_bool == 0) goto Label_3633; // 0xe2e JumpB
	var_243_bool = 1; // 0xe2f MovB
	return 0; // 0xe30 Return
	
Label_3633:
	var_243_bool = 0; // 0xe31 MovB
	return 0; // 0xe32 Return
}


func_3113(var_77_string)
{
	var_77_string = "ui/NPC_Spi4ka.png"; // 0xc29 MovS
	return 0; // 0xc2a Return
}


func_3369()
{
	var_102_object = Obj(); var_103_string = ""; var_104_float = 0; // 0xd2a PushV
	var_105_object = Obj(); // 0xd2b PushV
	func_3840(var_105_object); // 0xd2c Call
	var_102_object = var_105_object; // 0xd2d Mov
	var_103_string = "pt_map_powderhouse"; // 0xd2f MovS
	var_104_float = 2; // 0xd30 MovI
	func_3857(var_102_object, var_103_string, var_104_float); // 0xd31 Call
	var_125_object = Obj(); // 0xd33 PushV
	func_3840(var_125_object); // 0xd34 Call
	ShowMap(var_125_object); // 0xd36 ObjFunc
	return 0; // 0xd38 Return
}


func_3115(var_23_bool)
{
	var_23_bool = 1; // 0xc2b MovB
	return 0; // 0xc2c Return
}


func_3117()
{
	var_28_string = "ood1Spi4ka1"; // 0xc2e PushS
	var_29_int = 1; // 0xc2f PushI
	SetVariable(var_28_string, var_29_int); // 0xc30 Func
	return 0; // 0xc32 Return
}


func_49(var_0_object, var_24_int, var_25_object)
{
	var_27_object = Obj(); var_28_bool = 0; var_29_int = 0; var_30_bool = 0; var_31_object = Obj(); var_32_bool = 0; var_33_int = 0; var_34_bool = 0; // 0x31 PushV
	var_0_object = var_25_object; // 0x32 TMov
	var_35_bool = 0; var_36_object = Obj(); // 0x33 PushV
	var_36_object = var_25_object; // 0x34 Mov
	func_2938(var_36_object); // 0x35 Call
	var_75_bool = var_35_bool == 0; // 0x37 Not
	if(var_75_bool == 0) goto Label_59; // 0x38 JumpB
	var_24_int = -2; // 0x39 MovI
	return 8; // 0x3a Return
	
Label_59:
	CreateDialog(var_31_object); // 0x3b Func
	var_76_int = 0; // 0x3d PushV
	func_3111(var_76_int); // 0x3e Call
	SetNPCName(var_76_int); // 0x40 ObjFunc
	var_77_string = ""; // 0x42 PushV
	func_3113(var_77_string); // 0x43 Call
	SetPhoto(var_77_string); // 0x45 ObjFunc
	var_78_int = 0; // 0x47 PushV
	func_3890(var_78_int); // 0x48 Call
	SetPlayerName(var_78_int); // 0x4a ObjFunc
	var_33_int = -1; // 0x4c MovI
	IsOverrideActive(var_32_bool); // 0x4d Func
	var_86_bool = var_32_bool; // 0x4f Push
	if(var_86_bool == 0) goto Label_83; // 0x50 JumpB
	var_24_int = -2; // 0x51 MovI
	return 8; // 0x52 Return
	
Label_83:
	DoDialog(var_31_object); // 0x53 Func
	var_87_object = Obj(); var_88_object = Obj(); // 0x55 PushV
	var_87_object = var_25_object; // 0x56 Mov
	var_88_object = var_31_object; // 0x57 Mov
	TaskCall(3); // 0x58 TaskCall
	func_112(var_89_object, var_90_object, var_91_string, var_92_bool, var_87_object, var_88_object); // 0x59 Call
	TaskReturn(); // 0x5a TaskReturn
	IsDialogEnd(var_34_bool); // 0x5c ObjFunc
	
Label_94:
	var_131_bool = var_34_bool == 0; // 0x5e Not
	if(var_131_bool == 0) goto Label_101; // 0x5f JumpB
	sync(); // 0x60 Func
	IsDialogEnd(var_34_bool); // 0x62 ObjFunc
	goto Label_94; // 0x64 Jump
	
Label_101:
	var_132_object = Obj(); // 0x65 PushV
	var_132_object = var_25_object; // 0x66 Mov
	func_2994(); // 0x67 Call
	StopDialog(var_31_object); // 0x69 Func
	GetReturnValue(var_33_int); // 0x6b ObjFunc
	var_24_int = var_33_int; // 0x6d Mov
	return 8; // 0x6e Return
}


func_1329(var_0_object, var_290_int, var_291_object)
{
	var_293_object = Obj(); var_294_bool = 0; var_295_int = 0; var_296_bool = 0; var_297_object = Obj(); var_298_bool = 0; var_299_int = 0; var_300_bool = 0; // 0x531 PushV
	var_0_object = var_291_object; // 0x532 TMov
	var_301_bool = 0; var_302_object = Obj(); // 0x533 PushV
	var_302_object = var_291_object; // 0x534 Mov
	func_2938(var_302_object); // 0x535 Call
	var_303_bool = var_301_bool == 0; // 0x537 Not
	if(var_303_bool == 0) goto Label_1339; // 0x538 JumpB
	var_290_int = -2; // 0x539 MovI
	return 8; // 0x53a Return
	
Label_1339:
	CreateDialog(var_297_object); // 0x53b Func
	var_304_int = 0; // 0x53d PushV
	func_3111(var_304_int); // 0x53e Call
	SetNPCName(var_304_int); // 0x540 ObjFunc
	var_305_string = ""; // 0x542 PushV
	func_3113(var_305_string); // 0x543 Call
	SetPhoto(var_305_string); // 0x545 ObjFunc
	var_306_int = 0; // 0x547 PushV
	func_3890(var_306_int); // 0x548 Call
	SetPlayerName(var_306_int); // 0x54a ObjFunc
	var_299_int = -1; // 0x54c MovI
	IsOverrideActive(var_298_bool); // 0x54d Func
	var_307_bool = var_298_bool; // 0x54f Push
	if(var_307_bool == 0) goto Label_1363; // 0x550 JumpB
	var_290_int = -2; // 0x551 MovI
	return 8; // 0x552 Return
	
Label_1363:
	DoDialog(var_297_object); // 0x553 Func
	var_308_object = Obj(); var_309_object = Obj(); // 0x555 PushV
	var_308_object = var_291_object; // 0x556 Mov
	var_309_object = var_297_object; // 0x557 Mov
	TaskCall(7); // 0x558 TaskCall
	func_1392(var_310_object, var_311_object, var_312_string, var_313_bool, var_308_object, var_309_object); // 0x559 Call
	TaskReturn(); // 0x55a TaskReturn
	IsDialogEnd(var_300_bool); // 0x55c ObjFunc
	
Label_1374:
	var_373_bool = var_300_bool == 0; // 0x55e Not
	if(var_373_bool == 0) goto Label_1381; // 0x55f JumpB
	sync(); // 0x560 Func
	IsDialogEnd(var_300_bool); // 0x562 ObjFunc
	goto Label_1374; // 0x564 Jump
	
Label_1381:
	var_374_object = Obj(); // 0x565 PushV
	var_374_object = var_291_object; // 0x566 Mov
	func_2994(); // 0x567 Call
	StopDialog(var_297_object); // 0x569 Func
	GetReturnValue(var_299_int); // 0x56b ObjFunc
	var_290_int = var_299_int; // 0x56d Mov
	return 8; // 0x56e Return
}


func_3123()
{
	var_180_string = "ood1Spi4ka2"; // 0xc34 PushS
	var_181_int = 1; // 0xc35 PushI
	SetVariable(var_180_string, var_181_int); // 0xc36 Func
	return 0; // 0xc38 Return
}


func_3635(var_262_bool)
{
	var_264_int = 0; var_265_string = ""; // 0xe34 PushV
	var_265_string = "d6q01"; // 0xe35 MovS
	func_3033(var_264_int, var_265_string); // 0xe36 Call
	var_266_int = 4; // 0xe38 PushI
	var_267_bool = var_264_int == var_266_int; // 0xe39 Eq
	if(var_267_bool == 0) goto Label_3645; // 0xe3a JumpB
	var_262_bool = 1; // 0xe3b MovB
	return 0; // 0xe3c Return
	
Label_3645:
	var_262_bool = 0; // 0xe3d MovB
	return 0; // 0xe3e Return
}


func_3890(var_78_int)
{
	var_79_int = 0; var_80_int = 0; // 0xf32 PushV
	var_81_string = "player"; // 0xf33 PushS
	GetVariable(var_81_string, var_80_int); // 0xf34 Func
	var_82_int = 0; // 0xf36 PushI
	var_83_bool = var_80_int == var_82_int; // 0xf37 Eq
	if(var_83_bool == 0) goto Label_3900; // 0xf38 JumpB
	var_78_int = 200001; // 0xf39 MovI
	return 2; // 0xf3a Return
	
Label_3900:
	var_84_int = 1; // 0xf3c PushI
	var_85_bool = var_80_int == var_84_int; // 0xf3d Eq
	if(var_85_bool == 0) goto Label_3905; // 0xf3e JumpB
	var_78_int = 200002; // 0xf3f MovI
	return 2; // 0xf40 Return
	
Label_3905:
	var_78_int = 200003; // 0xf41 MovI
	return 2; // 0xf42 Return
}


func_3129()
{
	var_202_string = "ood1Spi4ka3"; // 0xc3a PushS
	var_203_int = 1; // 0xc3b PushI
	SetVariable(var_202_string, var_203_int); // 0xc3c Func
	return 0; // 0xc3e Return
}


func_3385()
{
	var_491_string = "KnowTermitnik"; // 0xd3a PushS
	var_492_int = 1; // 0xd3b PushI
	SetVariable(var_491_string, var_492_int); // 0xd3c Func
	return 0; // 0xd3e Return
}


func_317(var_0_object, var_142_int, var_143_object)
{
	var_145_object = Obj(); var_146_bool = 0; var_147_int = 0; var_148_bool = 0; var_149_object = Obj(); var_150_bool = 0; var_151_int = 0; var_152_bool = 0; // 0x13d PushV
	var_0_object = var_143_object; // 0x13e TMov
	var_153_bool = 0; var_154_object = Obj(); // 0x13f PushV
	var_154_object = var_143_object; // 0x140 Mov
	func_2938(var_154_object); // 0x141 Call
	var_155_bool = var_153_bool == 0; // 0x143 Not
	if(var_155_bool == 0) goto Label_327; // 0x144 JumpB
	var_142_int = -2; // 0x145 MovI
	return 8; // 0x146 Return
	
Label_327:
	CreateDialog(var_149_object); // 0x147 Func
	var_156_int = 0; // 0x149 PushV
	func_3111(var_156_int); // 0x14a Call
	SetNPCName(var_156_int); // 0x14c ObjFunc
	var_157_string = ""; // 0x14e PushV
	func_3113(var_157_string); // 0x14f Call
	SetPhoto(var_157_string); // 0x151 ObjFunc
	var_158_int = 0; // 0x153 PushV
	func_3890(var_158_int); // 0x154 Call
	SetPlayerName(var_158_int); // 0x156 ObjFunc
	var_151_int = -1; // 0x158 MovI
	IsOverrideActive(var_150_bool); // 0x159 Func
	var_159_bool = var_150_bool; // 0x15b Push
	if(var_159_bool == 0) goto Label_351; // 0x15c JumpB
	var_142_int = -2; // 0x15d MovI
	return 8; // 0x15e Return
	
Label_351:
	DoDialog(var_149_object); // 0x15f Func
	var_160_object = Obj(); var_161_object = Obj(); // 0x161 PushV
	var_160_object = var_143_object; // 0x162 Mov
	var_161_object = var_149_object; // 0x163 Mov
	TaskCall(5); // 0x164 TaskCall
	func_380(var_162_object, var_163_object, var_164_string, var_165_bool, var_160_object, var_161_object); // 0x165 Call
	TaskReturn(); // 0x166 TaskReturn
	IsDialogEnd(var_152_bool); // 0x168 ObjFunc
	
Label_362:
	var_286_bool = var_152_bool == 0; // 0x16a Not
	if(var_286_bool == 0) goto Label_369; // 0x16b JumpB
	sync(); // 0x16c Func
	IsDialogEnd(var_152_bool); // 0x16e ObjFunc
	goto Label_362; // 0x170 Jump
	
Label_369:
	var_287_object = Obj(); // 0x171 PushV
	var_287_object = var_143_object; // 0x172 Mov
	func_2994(); // 0x173 Call
	StopDialog(var_149_object); // 0x175 Func
	GetReturnValue(var_151_int); // 0x177 ObjFunc
	var_142_int = var_151_int; // 0x179 Mov
	return 8; // 0x17a Return
}


func_3135(var_30_object)
{
	var_32_object = Obj(); var_33_object = Obj(); // 0xc3f PushV
	var_34_string = "lockpick1time is given"; // 0xc40 PushS
	Trace(var_34_string); // 0xc41 Func
	CreateInvItem(var_33_object); // 0xc43 Func
	var_35_string = "lockpick"; // 0xc45 PushS
	SetItemName(var_35_string); // 0xc46 ObjFunc
	var_36_string = "uses"; // 0xc48 PushS
	var_37_int = 1; // 0xc49 PushI
	SetProperty(var_36_string, var_37_int); // 0xc4a ObjFunc
	var_38_object = Obj(); var_39_object = Obj(); var_40_int = 0; // 0xc4c PushV
	var_38_object = var_30_object; // 0xc4d Mov
	var_39_object = var_33_object; // 0xc4e Mov
	var_40_int = 1; // 0xc4f MovI
	func_3049(var_39_object, var_40_int); // 0xc50 Call
	return 2; // 0xc52 Return
}


func_3647(var_256_bool)
{
	var_258_int = 0; var_259_string = ""; // 0xe40 PushV
	var_259_string = "ood6Spi4ka4"; // 0xe41 MovS
	func_3033(var_258_int, var_259_string); // 0xe42 Call
	var_260_int = 0; // 0xe44 PushI
	var_261_bool = var_258_int == var_260_int; // 0xe45 Eq
	if(var_261_bool == 0) goto Label_3657; // 0xe46 JumpB
	var_256_bool = 1; // 0xe47 MovB
	return 0; // 0xe48 Return
	
Label_3657:
	var_256_bool = 0; // 0xe49 MovB
	return 0; // 0xe4a Return
}


func_3391(var_275_bool)
{
	var_277_int = 0; var_278_string = ""; // 0xd40 PushV
	var_278_string = "d1q01FirstGeorgVisit"; // 0xd41 MovS
	func_3033(var_277_int, var_278_string); // 0xd42 Call
	var_279_int = 1; // 0xd44 PushI
	var_280_bool = var_277_int == var_279_int; // 0xd45 Eq
	if(var_280_bool == 0) goto Label_3401; // 0xd46 JumpB
	var_275_bool = 1; // 0xd47 MovB
	return 0; // 0xd48 Return
	
Label_3401:
	var_275_bool = 0; // 0xd49 MovB
	return 0; // 0xd4a Return
}


func_3907()
{
	var_143_object = Obj(); var_144_object = Obj(); // 0xf43 PushV
	var_145_string = "Adding diary entry"; // 0xf44 PushS
	Trace(var_145_string); // 0xf45 Func
	var_146_int = 48; // 0xf47 PushI
	var_147_int = 2; // 0xf48 PushI
	var_148_int = 12130; // 0xf49 PushI
	CreateDiaryEntry(var_144_object, var_146_int, var_147_int, var_148_int); // 0xf4a Func
	var_149_bool = 0; var_150_object = Obj(); var_151_int = 0; // 0xf4c PushV
	var_150_object = var_144_object; // 0xf4d Mov
	var_151_int = 43; // 0xf4e MovI
	func_3794(var_149_bool, var_150_object, var_151_int); // 0xf4f Call
	return 2; // 0xf51 Return
}


func_3575(var_205_bool)
{
	var_207_int = 0; var_208_string = ""; // 0xdf8 PushV
	var_208_string = "d6q03"; // 0xdf9 MovS
	func_3033(var_207_int, var_208_string); // 0xdfa Call
	var_209_int = 0; // 0xdfc PushI
	var_210_bool = var_207_int == var_209_int; // 0xdfd Eq
	if(var_210_bool == 0) goto Label_3585; // 0xdfe JumpB
	var_205_bool = 1; // 0xdff MovB
	return 0; // 0xe00 Return
	
Label_3585:
	var_205_bool = 0; // 0xe01 MovB
	return 0; // 0xe02 Return
}


func_3659(var_153_bool)
{
	var_155_int = 0; var_156_string = ""; // 0xe4c PushV
	var_156_string = "d2q01"; // 0xe4d MovS
	func_3033(var_155_int, var_156_string); // 0xe4e Call
	var_157_int = 5; // 0xe50 PushI
	var_158_bool = var_155_int >= var_157_int; // 0xe51 GE
	if(var_158_bool == 0) goto Label_3669; // 0xe52 JumpB
	var_153_bool = 1; // 0xe53 MovB
	return 0; // 0xe54 Return
	
Label_3669:
	var_153_bool = 0; // 0xe55 MovB
	return 0; // 0xe56 Return
}


func_3403(var_251_bool)
{
	var_253_int = 0; var_254_string = ""; // 0xd4c PushV
	var_254_string = "d1q04"; // 0xd4d MovS
	func_3033(var_253_int, var_254_string); // 0xd4e Call
	var_257_int = 2; // 0xd50 PushI
	var_258_bool = var_253_int == var_257_int; // 0xd51 Eq
	if(var_258_bool == 0) goto Label_3413; // 0xd52 JumpB
	var_251_bool = 1; // 0xd53 MovB
	return 0; // 0xd54 Return
	
Label_3413:
	var_251_bool = 0; // 0xd55 MovB
	return 0; // 0xd56 Return
}


func_3923()
{
	var_71_object = Obj(); var_72_object = Obj(); // 0xf53 PushV
	var_73_string = "Adding diary entry"; // 0xf54 PushS
	Trace(var_73_string); // 0xf55 Func
	var_74_int = 46; // 0xf57 PushI
	var_75_int = 2; // 0xf58 PushI
	var_76_int = 12128; // 0xf59 PushI
	CreateDiaryEntry(var_72_object, var_74_int, var_75_int, var_76_int); // 0xf5a Func
	var_77_bool = 0; var_78_object = Obj(); var_79_int = 0; // 0xf5c PushV
	var_78_object = var_72_object; // 0xf5d Mov
	var_79_int = 43; // 0xf5e MovI
	func_3794(var_77_bool, var_78_object, var_79_int); // 0xf5f Call
	return 2; // 0xf61 Return
}


func_3156()
{
	var_51_string = "playsound"; // 0xc55 PushS
	var_52_string = "giveitem"; // 0xc56 PushS
	TriggerWorld(var_51_string, var_52_string); // 0xc57 Func
	return 0; // 0xc59 Return
}


func_3671(var_159_bool)
{
	var_161_int = 0; var_162_string = ""; // 0xe58 PushV
	var_162_string = "ood2Spi4ka3"; // 0xe59 MovS
	func_3033(var_161_int, var_162_string); // 0xe5a Call
	var_163_int = 0; // 0xe5c PushI
	var_164_bool = var_161_int == var_163_int; // 0xe5d Eq
	if(var_164_bool == 0) goto Label_3681; // 0xe5e JumpB
	var_159_bool = 1; // 0xe5f MovB
	return 0; // 0xe60 Return
	
Label_3681:
	var_159_bool = 0; // 0xe61 MovB
	return 0; // 0xe62 Return
}


func_3415(var_259_bool)
{
	var_261_int = 0; var_262_string = ""; // 0xd58 PushV
	var_262_string = "ood1Spi4ka1"; // 0xd59 MovS
	func_3033(var_261_int, var_262_string); // 0xd5a Call
	var_263_int = 0; // 0xd5c PushI
	var_264_bool = var_261_int == var_263_int; // 0xd5d Eq
	if(var_264_bool == 0) goto Label_3425; // 0xd5e JumpB
	var_259_bool = 1; // 0xd5f MovB
	return 0; // 0xd60 Return
	
Label_3425:
	var_259_bool = 0; // 0xd61 MovB
	return 0; // 0xd62 Return
}


func_3162()
{
	var_132_object = Obj(); var_133_object = Obj(); var_134_object = Obj(); var_135_object = Obj(); // 0xc5a PushV
	var_136_object = Obj(); // 0xc5b PushV
	func_3840(var_136_object); // 0xc5c Call
	var_134_object = var_136_object; // 0xc5d Mov
	var_137_string = "d1q04KaterinaGotoMishka"; // 0xc5f PushS
	FindMark(var_135_object, var_137_string); // 0xc60 ObjFunc
	var_138_object = var_135_object; // 0xc62 Push
	if(var_138_object == 0) goto Label_3174; // 0xc63 JumpB
	Remove(); // 0xc64 ObjFunc
	
Label_3174:
	var_139_string = "d1q04MishkaGotoSpi4ka"; // 0xc66 PushS
	FindMark(var_135_object, var_139_string); // 0xc67 ObjFunc
	var_140_object = var_135_object; // 0xc69 Push
	if(var_140_object == 0) goto Label_3181; // 0xc6a JumpB
	Remove(); // 0xc6b ObjFunc
	
Label_3181:
	var_141_string = "d1q04Spi4kaGotoPowderHouse"; // 0xc6d PushS
	FindMark(var_135_object, var_141_string); // 0xc6e ObjFunc
	var_142_object = var_135_object; // 0xc70 Push
	if(var_142_object == 0) goto Label_3188; // 0xc71 JumpB
	Remove(); // 0xc72 ObjFunc
	
Label_3188:
	func_3907(); // 0xc75 Call
	var_152_bool = 0; var_153_int = 0; // 0xc77 PushV
	var_153_int = 44; // 0xc78 MovI
	func_3823(var_152_bool, var_153_int); // 0xc79 Call
	var_160_bool = 0; var_161_int = 0; // 0xc7b PushV
	var_161_int = 45; // 0xc7c MovI
	func_3823(var_160_bool, var_161_int); // 0xc7d Call
	var_162_bool = 0; var_163_int = 0; // 0xc7f PushV
	var_163_int = 46; // 0xc80 MovI
	func_3823(var_162_bool, var_163_int); // 0xc81 Call
	var_164_bool = 0; var_165_string = ""; var_166_string = ""; // 0xc83 PushV
	var_165_string = "quest_d1_04"; // 0xc84 MovS
	var_166_string = "failed"; // 0xc85 MovS
	func_3062(var_164_bool, var_165_string, var_166_string); // 0xc86 Call
	return 4; // 0xc88 Return
}


func_2146(var_0_object, var_377_int, var_378_object)
{
	var_380_object = Obj(); var_381_bool = 0; var_382_int = 0; var_383_bool = 0; var_384_object = Obj(); var_385_bool = 0; var_386_int = 0; var_387_bool = 0; // 0x862 PushV
	var_0_object = var_378_object; // 0x863 TMov
	var_388_bool = 0; var_389_object = Obj(); // 0x864 PushV
	var_389_object = var_378_object; // 0x865 Mov
	func_2938(var_389_object); // 0x866 Call
	var_390_bool = var_388_bool == 0; // 0x868 Not
	if(var_390_bool == 0) goto Label_2156; // 0x869 JumpB
	var_377_int = -2; // 0x86a MovI
	return 8; // 0x86b Return
	
Label_2156:
	CreateDialog(var_384_object); // 0x86c Func
	var_391_int = 0; // 0x86e PushV
	func_3111(var_391_int); // 0x86f Call
	SetNPCName(var_391_int); // 0x871 ObjFunc
	var_392_string = ""; // 0x873 PushV
	func_3113(var_392_string); // 0x874 Call
	SetPhoto(var_392_string); // 0x876 ObjFunc
	var_393_int = 0; // 0x878 PushV
	func_3890(var_393_int); // 0x879 Call
	SetPlayerName(var_393_int); // 0x87b ObjFunc
	var_386_int = -1; // 0x87d MovI
	IsOverrideActive(var_385_bool); // 0x87e Func
	var_394_bool = var_385_bool; // 0x880 Push
	if(var_394_bool == 0) goto Label_2180; // 0x881 JumpB
	var_377_int = -2; // 0x882 MovI
	return 8; // 0x883 Return
	
Label_2180:
	DoDialog(var_384_object); // 0x884 Func
	var_395_object = Obj(); var_396_object = Obj(); // 0x886 PushV
	var_395_object = var_378_object; // 0x887 Mov
	var_396_object = var_384_object; // 0x888 Mov
	TaskCall(9); // 0x889 TaskCall
	func_2209(var_397_object, var_398_object, var_399_string, var_400_bool, var_395_object, var_396_object); // 0x88a Call
	TaskReturn(); // 0x88b TaskReturn
	IsDialogEnd(var_387_bool); // 0x88d ObjFunc
	
Label_2191:
	var_530_bool = var_387_bool == 0; // 0x88f Not
	if(var_530_bool == 0) goto Label_2198; // 0x890 JumpB
	sync(); // 0x891 Func
	IsDialogEnd(var_387_bool); // 0x893 ObjFunc
	goto Label_2191; // 0x895 Jump
	
Label_2198:
	var_531_object = Obj(); // 0x896 PushV
	var_531_object = var_378_object; // 0x897 Mov
	func_2994(); // 0x898 Call
	StopDialog(var_384_object); // 0x89a Func
	GetReturnValue(var_386_int); // 0x89c ObjFunc
	var_377_int = var_386_int; // 0x89e Mov
	return 8; // 0x89f Return
}


func_3683(var_337_bool)
{
	var_339_int = 0; var_340_string = ""; // 0xe64 PushV
	var_340_string = "KnowMishka"; // 0xe65 MovS
	func_3033(var_339_int, var_340_string); // 0xe66 Call
	var_341_int = 1; // 0xe68 PushI
	var_342_bool = var_339_int == var_341_int; // 0xe69 Eq
	if(var_342_bool == 0) goto Label_3693; // 0xe6a JumpB
	var_337_bool = 1; // 0xe6b MovB
	return 0; // 0xe6c Return
	
Label_3693:
	var_337_bool = 0; // 0xe6d MovB
	return 0; // 0xe6e Return
}


func_3427(var_269_bool)
{
	var_271_int = 0; var_272_string = ""; // 0xd64 PushV
	var_272_string = "ood1Spi4ka2"; // 0xd65 MovS
	func_3033(var_271_int, var_272_string); // 0xd66 Call
	var_273_int = 0; // 0xd68 PushI
	var_274_bool = var_271_int == var_273_int; // 0xd69 Eq
	if(var_274_bool == 0) goto Label_3437; // 0xd6a JumpB
	var_269_bool = 1; // 0xd6b MovB
	return 0; // 0xd6c Return
	
Label_3437:
	var_269_bool = 0; // 0xd6d MovB
	return 0; // 0xd6e Return
}


func_3939()
{
	var_34_object = Obj(); var_35_object = Obj(); // 0xf63 PushV
	var_36_string = "Adding diary entry"; // 0xf64 PushS
	Trace(var_36_string); // 0xf65 Func
	var_37_int = 53; // 0xf67 PushI
	var_38_int = 1; // 0xf68 PushI
	var_39_int = 12135; // 0xf69 PushI
	CreateDiaryEntry(var_35_object, var_37_int, var_38_int, var_39_int); // 0xf6a Func
	var_40_bool = 0; var_41_object = Obj(); var_42_int = 0; // 0xf6c PushV
	var_41_object = var_35_object; // 0xf6d Mov
	var_42_int = 10; // 0xf6e MovI
	func_3794(var_40_bool, var_41_object, var_42_int); // 0xf6f Call
	return 2; // 0xf71 Return
}


func_2921(var_21_bool)
{
	var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_bool = 0; var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_bool = 0; // 0xb69 PushV
	GetPosition(var_27_cvector); // 0xb6a ObjFunc
	GetPosition(var_28_cvector); // 0xb6c Func
	var_29_cvector = var_27_cvector - var_28_cvector; // 0xb6e Sub2
	var_31_float = GetByIndex(var_29_cvector, 0); // 0xb6f PushE
	var_32_float = GetByIndex(var_29_cvector, 2); // 0xb70 PushE
	Rotate(var_31_float, var_32_float, var_30_bool); // 0xb71 Func
	var_21_bool = var_30_bool; // 0xb73 Mov
	return 8; // 0xb74 Return
}


func_3695(var_321_bool)
{
	var_323_int = 0; var_324_string = ""; // 0xe70 PushV
	var_324_string = "KnowOspina"; // 0xe71 MovS
	func_3033(var_323_int, var_324_string); // 0xe72 Call
	var_325_int = 1; // 0xe74 PushI
	var_326_bool = var_323_int == var_325_int; // 0xe75 Eq
	if(var_326_bool == 0) goto Label_3705; // 0xe76 JumpB
	var_321_bool = 1; // 0xe77 MovB
	return 0; // 0xe78 Return
	
Label_3705:
	var_321_bool = 0; // 0xe79 MovB
	return 0; // 0xe7a Return
}


func_112(var_0_object, var_1_object, var_2_object, var_3_object, var_87_object, var_88_object)
{
	var_0_object = var_88_object; // 0x71 TMov
	var_1_object = var_87_object; // 0x72 TMov
	var_3_object = 0; // 0x73 TMovB
	var_93_int = 1; // 0x74 PushI
	if(var_93_int == 0) goto Label_150; // 0x75 JumpB
	var_94_object = Obj(); var_95_object = Obj(); // 0x76 PushV
	var_94_object = var_1_object; // 0x77 MovT
	var_95_object = var_0_object; // 0x78 MovT
	func_3363(); // 0x79 Call
	var_98_string = ""; // 0x7b PushV
	var_98_string = "Neutral"; // 0x7c MovS
	func_180(var_88_object, var_98_string); // 0x7d Call
	var_113_int = 356; // 0x7f PushI
	SetMessage(var_113_int); // 0x80 TObjFunc
	ClearReplies(); // 0x82 TObjFunc
	var_114_int = 357; // 0x84 PushI
	var_115_int = 417; // 0x85 PushI
	var_116_int = 414; // 0x86 PushI
	AddReply(var_114_int, var_115_int, var_116_int); // 0x87 TObjFunc
	var_117_int = 358; // 0x89 PushI
	var_118_int = 418; // 0x8a PushI
	var_119_int = 415; // 0x8b PushI
	AddReply(var_117_int, var_118_int, var_119_int); // 0x8c TObjFunc
	var_120_int = 359; // 0x8e PushI
	var_121_int = -1; // 0x8f PushI
	var_122_int = 416; // 0x90 PushI
	AddReply(var_120_int, var_121_int, var_122_int); // 0x91 TObjFunc
	goto Label_150; // 0x93 Jump
	
Label_150:
	var_123_bool = 0; // 0x96 PushV
	func_3115(var_123_bool); // 0x97 Call
	if(var_123_bool == 0) goto Label_165; // 0x99 JumpB
	
Label_154:
	lshWaitForAnimEnd(); // 0x9a Func
	var_124_object = var_3_object; // 0x9c PushT
	if(var_124_object == 0) goto Label_159; // 0x9d JumpB
	goto Label_164; // 0x9e Jump
	
Label_164:
	goto Label_179; // 0xa4 Jump
	
Label_179:
	return 0; // 0xb3 Return
	
Label_159:
	var_125_string = ""; // 0x9f PushV
	var_125_string = var_2_object; // 0xa0 MovT
	func_2998(var_125_string); // 0xa1 Call
	goto Label_154; // 0xa3 Jump
	
Label_165:
	var_126_string = "all"; // 0xa5 PushS
	var_127_string = "idle"; // 0xa6 PushS
	PlayAnimation(var_126_string, var_127_string); // 0xa7 Func
	
Label_169:
	WaitForAnimEnd(); // 0xa9 Func
	var_128_object = var_3_object; // 0xab PushT
	if(var_128_object == 0) goto Label_174; // 0xac JumpB
	goto Label_179; // 0xad Jump
	
Label_174:
	var_129_string = "all"; // 0xae PushS
	var_130_string = "idle"; // 0xaf PushS
	PlayAnimation(var_129_string, var_130_string); // 0xb0 Func
	goto Label_169; // 0xb2 Jump
}


func_3439(var_297_bool)
{
	var_299_int = 0; var_300_string = ""; // 0xd70 PushV
	var_300_string = "ood1Spi4ka3"; // 0xd71 MovS
	func_3033(var_299_int, var_300_string); // 0xd72 Call
	var_301_int = 0; // 0xd74 PushI
	var_302_bool = var_299_int == var_301_int; // 0xd75 Eq
	if(var_302_bool == 0) goto Label_3449; // 0xd76 JumpB
	var_297_bool = 1; // 0xd77 MovB
	return 0; // 0xd78 Return
	
Label_3449:
	var_297_bool = 0; // 0xd79 MovB
	return 0; // 0xd7a Return
}


func_1392(var_0_object, var_1_object, var_2_object, var_3_object, var_308_object, var_309_object)
{
	var_0_object = var_309_object; // 0x571 TMov
	var_1_object = var_308_object; // 0x572 TMov
	var_3_object = 0; // 0x573 TMovB
	var_314_int = 1; // 0x574 PushI
	if(var_314_int == 0) goto Label_1478; // 0x575 JumpB
	var_315_string = ""; // 0x576 PushV
	var_315_string = "Neutral"; // 0x577 MovS
	func_1508(var_309_object, var_315_string); // 0x578 Call
	var_320_int = 6715; // 0x57a PushI
	SetMessage(var_320_int); // 0x57b TObjFunc
	ClearReplies(); // 0x57d TObjFunc
	var_321_bool = 0; // 0x57f PushV
	var_321_bool = 0; // 0x580 MovB
	var_322_bool = 0; var_323_object = Obj(); // 0x581 PushV
	var_323_object = var_1_object; // 0x582 MovT
	func_3463(var_323_object); // 0x583 Call
	if(var_322_bool == 0) goto Label_1420; // 0x585 JumpB
	var_328_bool = 0; var_329_object = Obj(); // 0x586 PushV
	var_329_object = var_1_object; // 0x587 MovT
	func_3487(var_329_object); // 0x588 Call
	if(var_328_bool == 0) goto Label_1420; // 0x58a JumpB
	var_321_bool = 1; // 0x58b MovB
	
Label_1420:
	if(var_321_bool == 0) goto Label_1426; // 0x58c JumpB
	var_334_int = 7429; // 0x58d PushI
	var_335_int = 7355; // 0x58e PushI
	var_336_int = 8200; // 0x58f PushI
	AddReply(var_334_int, var_335_int, var_336_int); // 0x590 TObjFunc
	
Label_1426:
	var_337_bool = 0; var_338_object = Obj(); // 0x592 PushV
	var_338_object = var_1_object; // 0x593 MovT
	func_3475(var_338_object); // 0x594 Call
	if(var_337_bool == 0) goto Label_1436; // 0x596 JumpB
	var_343_int = 6716; // 0x597 PushI
	var_344_int = 7385; // 0x598 PushI
	var_345_int = 7403; // 0x599 PushI
	AddReply(var_343_int, var_344_int, var_345_int); // 0x59a TObjFunc
	
Label_1436:
	var_346_bool = 0; // 0x59c PushV
	var_346_bool = 0; // 0x59d MovB
	var_347_bool = 0; var_348_object = Obj(); // 0x59e PushV
	var_348_object = var_1_object; // 0x59f MovT
	func_3659(var_348_object); // 0x5a0 Call
	if(var_347_bool == 0) goto Label_1449; // 0x5a2 JumpB
	var_353_bool = 0; var_354_object = Obj(); // 0x5a3 PushV
	var_354_object = var_1_object; // 0x5a4 MovT
	func_3671(var_354_object); // 0x5a5 Call
	if(var_353_bool == 0) goto Label_1449; // 0x5a7 JumpB
	var_346_bool = 1; // 0x5a8 MovB
	
Label_1449:
	if(var_346_bool == 0) goto Label_1455; // 0x5a9 JumpB
	var_359_int = 14516; // 0x5aa PushI
	var_360_int = 15756; // 0x5ab PushI
	var_361_int = 15755; // 0x5ac PushI
	AddReply(var_359_int, var_360_int, var_361_int); // 0x5ad TObjFunc
	
Label_1455:
	var_362_int = 7534; // 0x5af PushI
	var_363_int = -1; // 0x5b0 PushI
	var_364_int = 8316; // 0x5b1 PushI
	AddReply(var_362_int, var_363_int, var_364_int); // 0x5b2 TObjFunc
	goto Label_1478; // 0x5b4 Jump
	
Label_1478:
	var_365_bool = 0; // 0x5c6 PushV
	func_3115(var_365_bool); // 0x5c7 Call
	if(var_365_bool == 0) goto Label_1493; // 0x5c9 JumpB
	
Label_1482:
	lshWaitForAnimEnd(); // 0x5ca Func
	var_366_object = var_3_object; // 0x5cc PushT
	if(var_366_object == 0) goto Label_1487; // 0x5cd JumpB
	goto Label_1492; // 0x5ce Jump
	
Label_1492:
	goto Label_1507; // 0x5d4 Jump
	
Label_1507:
	return 0; // 0x5e3 Return
	
Label_1487:
	var_367_string = ""; // 0x5cf PushV
	var_367_string = var_2_object; // 0x5d0 MovT
	func_2998(var_367_string); // 0x5d1 Call
	goto Label_1482; // 0x5d3 Jump
	
Label_1493:
	var_368_string = "all"; // 0x5d5 PushS
	var_369_string = "idle"; // 0x5d6 PushS
	PlayAnimation(var_368_string, var_369_string); // 0x5d7 Func
	
Label_1497:
	WaitForAnimEnd(); // 0x5d9 Func
	var_370_object = var_3_object; // 0x5db PushT
	if(var_370_object == 0) goto Label_1502; // 0x5dc JumpB
	goto Label_1507; // 0x5dd Jump
	
Label_1502:
	var_371_string = "all"; // 0x5de PushS
	var_372_string = "idle"; // 0x5df PushS
	PlayAnimation(var_371_string, var_372_string); // 0x5e0 Func
	goto Label_1497; // 0x5e2 Jump
}


func_2418(var_2_object, var_177_string)
{
	var_178_bool = 0; // 0x973 PushV
	func_3115(var_178_bool); // 0x974 Call
	var_179_bool = var_178_bool == 0; // 0x976 Not
	if(var_179_bool == 0) goto Label_2425; // 0x977 JumpB
	return 0; // 0x978 Return
	
Label_2425:
	var_180_bool = var_177_string == var_2_object; // 0x979 Eq
	if(var_180_bool == 0) goto Label_2428; // 0x97a JumpB
	return 0; // 0x97b Return
	
Label_2428:
	var_181_string = ""; // 0x97c PushV
	var_181_string = var_177_string; // 0x97d Mov
	func_2998(var_181_string); // 0x97e Call
	var_2_object = var_177_string; // 0x980 TMov
	return 0; // 0x981 Return
}


func_3955()
{
	var_34_object = Obj(); var_35_object = Obj(); // 0xf73 PushV
	var_36_string = "Adding diary entry"; // 0xf74 PushS
	Trace(var_36_string); // 0xf75 Func
	var_37_int = 107; // 0xf77 PushI
	var_38_int = 2; // 0xf78 PushI
	var_39_int = 13730; // 0xf79 PushI
	CreateDiaryEntry(var_35_object, var_37_int, var_38_int, var_39_int); // 0xf7a Func
	var_40_bool = 0; var_41_object = Obj(); var_42_int = 0; // 0xf7c PushV
	var_41_object = var_35_object; // 0xf7d Mov
	var_42_int = -1; // 0xf7e MovI
	func_3794(var_40_bool, var_41_object, var_42_int); // 0xf7f Call
	return 2; // 0xf81 Return
}


func_2933(var_21_bool)
{
	var_22_bool = 0; var_23_bool = 0; // 0xb75 PushV
	IsLoaded(var_23_bool); // 0xb76 Func
	var_21_bool = var_23_bool; // 0xb78 Mov
	return 2; // 0xb79 Return
}


func_2938(var_35_bool)
{
	var_37_float = 0; var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_bool = 0; var_45_float = 0; var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_bool = 0; // 0xb7a PushV
	GetPosition(var_46_cvector); // 0xb7b ObjFunc
	GetEyesHeight(var_45_float); // 0xb7d ObjFunc
	var_53_float = GetByIndex(var_46_cvector, 1); // 0xb7f PushE
	var_53_float = var_53_float + var_45_float; // 0xb80 Add2
	SetByIndex(var_46_cvector, 1) = var_53_float; // 0xb81 PopE
	GetPosition(var_47_cvector); // 0xb82 Func
	GetEyesHeight(var_45_float); // 0xb84 Func
	var_54_float = GetByIndex(var_47_cvector, 1); // 0xb86 PushE
	var_54_float = var_54_float + var_45_float; // 0xb87 Add2
	SetByIndex(var_47_cvector, 1) = var_54_float; // 0xb88 PopE
	var_48_cvector = var_46_cvector - var_47_cvector; // 0xb89 Sub2
	var_55_float = GetByIndex(var_48_cvector, 1); // 0xb8a PushE
	var_55_float = 0; // 0xb8b MovI
	SetByIndex(var_48_cvector, 1) = var_55_float; // 0xb8c PopE
	var_56_int = var_48_cvector | var_48_cvector; // 0xb8d Or
	var_57_float = sqrt(var_56_int); // 0xb8e Sqrt
	var_48_cvector = var_48_cvector / var_48_cvector; // 0xb8f Div2
	var_49_cvector = -var_48_cvector; // 0xb90 Neg2
	var_58_int = 70; // 0xb91 PushI
	var_59_float = var_48_cvector * var_58_int; // 0xb92 Mult
	var_60_cvector = CVector(0,0,0); var_61_cvector = CVector(0,0,0); // 0xb93 PushV
	var_62_cvector = CVector(0.0, 1.0, 0.0); // 0xb94 PushVec
	var_61_cvector = var_49_cvector ^ var_62_cvector; // 0xb95 Xor2
	func_3023(var_60_cvector, var_61_cvector); // 0xb96 Call
	var_68_int = 25; // 0xb98 PushI
	var_69_float = var_60_cvector * var_68_int; // 0xb99 Mult
	var_70_int = var_59_float + var_69_float; // 0xb9a Add
	var_71_cvector = CVector(0.0, 10.0, 0.0); // 0xb9b PushVec
	var_50_cvector = var_70_int - var_71_cvector; // 0xb9c Sub2
	var_51_cvector = var_47_cvector + var_50_cvector; // 0xb9d Add2
	IsOverrideActive(var_52_bool); // 0xb9e Func
	var_72_bool = var_52_bool; // 0xba0 Push
	if(var_72_bool == 0) goto Label_2980; // 0xba1 JumpB
	var_35_bool = 0; // 0xba2 MovB
	return 16; // 0xba3 Return
	
Label_2980:
	StopWorld(); // 0xba4 Func
	CameraTransit(var_51_cvector, var_49_cvector); // 0xba6 Func
	var_73_float = GetByIndex(var_50_cvector, 0); // 0xba8 PushE
	var_74_float = GetByIndex(var_50_cvector, 2); // 0xba9 PushE
	Rotate(var_73_float, var_74_float); // 0xbaa Func
	CameraWaitForPlayFinish(); // 0xbac Func
	ResumeWorld(); // 0xbae Func
	var_35_bool = 1; // 0xbb0 MovB
	return 16; // 0xbb1 Return
}


func_3707(var_288_bool)
{
	var_290_int = 0; // 0xe7c PushV
	func_3088(var_290_int); // 0xe7d Call
	var_295_int = 18; // 0xe7f PushI
	var_296_bool = var_290_int >= var_295_int; // 0xe80 GE
	if(var_296_bool == 0) goto Label_3716; // 0xe81 JumpB
	var_288_bool = 1; // 0xe82 MovB
	return 0; // 0xe83 Return
	
Label_3716:
	var_288_bool = 0; // 0xe84 MovB
	return 0; // 0xe85 Return
}


func_3451(var_456_bool)
{
	var_458_int = 0; var_459_string = ""; // 0xd7c PushV
	var_459_string = "KnowShabnak"; // 0xd7d MovS
	func_3033(var_458_int, var_459_string); // 0xd7e Call
	var_460_int = 1; // 0xd80 PushI
	var_461_bool = var_458_int == var_460_int; // 0xd81 Eq
	if(var_461_bool == 0) goto Label_3461; // 0xd82 JumpB
	var_456_bool = 1; // 0xd83 MovB
	return 0; // 0xd84 Return
	
Label_3461:
	var_456_bool = 0; // 0xd85 MovB
	return 0; // 0xd86 Return
}


func_380(var_0_object, var_1_object, var_2_object, var_3_object, var_160_object, var_161_object)
{
	var_0_object = var_161_object; // 0x17d TMov
	var_1_object = var_160_object; // 0x17e TMov
	var_3_object = 0; // 0x17f TMovB
	var_166_int = 1; // 0x180 PushI
	if(var_166_int == 0) goto Label_516; // 0x181 JumpB
	var_167_string = ""; // 0x182 PushV
	var_167_string = "Neutral"; // 0x183 MovS
	func_546(var_161_object, var_167_string); // 0x184 Call
	var_172_int = 5851; // 0x186 PushI
	SetMessage(var_172_int); // 0x187 TObjFunc
	ClearReplies(); // 0x189 TObjFunc
	var_173_bool = 0; // 0x18b PushV
	var_173_bool = 0; // 0x18c MovB
	var_174_bool = 0; var_175_object = Obj(); // 0x18d PushV
	var_175_object = var_1_object; // 0x18e MovT
	func_3403(var_175_object); // 0x18f Call
	if(var_174_bool == 0) goto Label_408; // 0x191 JumpB
	var_182_bool = 0; var_183_object = Obj(); // 0x192 PushV
	var_183_object = var_1_object; // 0x193 MovT
	func_3415(var_183_object); // 0x194 Call
	if(var_182_bool == 0) goto Label_408; // 0x196 JumpB
	var_173_bool = 1; // 0x197 MovB
	
Label_408:
	if(var_173_bool == 0) goto Label_414; // 0x198 JumpB
	var_188_int = 5852; // 0x199 PushI
	var_189_int = 6464; // 0x19a PushI
	var_190_int = 6443; // 0x19b PushI
	AddReply(var_188_int, var_189_int, var_190_int); // 0x19c TObjFunc
	
Label_414:
	var_191_bool = 0; // 0x19e PushV
	var_191_bool = 0; // 0x19f MovB
	var_192_bool = 0; var_193_object = Obj(); // 0x1a0 PushV
	var_193_object = var_1_object; // 0x1a1 MovT
	func_3427(var_193_object); // 0x1a2 Call
	if(var_192_bool == 0) goto Label_427; // 0x1a4 JumpB
	var_198_bool = 0; var_199_object = Obj(); // 0x1a5 PushV
	var_199_object = var_1_object; // 0x1a6 MovT
	func_3391(var_199_object); // 0x1a7 Call
	if(var_198_bool == 0) goto Label_427; // 0x1a9 JumpB
	var_191_bool = 1; // 0x1aa MovB
	
Label_427:
	if(var_191_bool == 0) goto Label_433; // 0x1ab JumpB
	var_204_int = 8356; // 0x1ac PushI
	var_205_int = 6444; // 0x1ad PushI
	var_206_int = 9179; // 0x1ae PushI
	AddReply(var_204_int, var_205_int, var_206_int); // 0x1af TObjFunc
	
Label_433:
	var_207_bool = 0; // 0x1b1 PushV
	var_207_bool = 1; // 0x1b2 MovB
	var_208_bool = 0; // 0x1b3 PushV
	var_208_bool = 0; // 0x1b4 MovB
	var_209_bool = 0; var_210_object = Obj(); // 0x1b5 PushV
	var_210_object = var_1_object; // 0x1b6 MovT
	func_3523(var_209_bool, var_210_object); // 0x1b7 Call
	if(var_209_bool == 0) goto Label_448; // 0x1b9 JumpB
	var_220_bool = 0; var_221_object = Obj(); // 0x1ba PushV
	var_221_object = var_1_object; // 0x1bb MovT
	func_3439(var_221_object); // 0x1bc Call
	if(var_220_bool == 0) goto Label_448; // 0x1be JumpB
	var_208_bool = 1; // 0x1bf MovB
	
Label_448:
	if(var_208_bool == 0) goto Label_464; // 0x1c0 JumpB
	var_226_bool = 0; // 0x1c1 PushV
	var_226_bool = 0; // 0x1c2 MovB
	var_227_bool = 0; var_228_object = Obj(); // 0x1c3 PushV
	var_228_object = var_1_object; // 0x1c4 MovT
	func_3553(var_227_bool, var_228_object); // 0x1c5 Call
	if(var_227_bool == 0) goto Label_462; // 0x1c7 JumpB
	var_238_bool = 0; var_239_object = Obj(); // 0x1c8 PushV
	var_239_object = var_1_object; // 0x1c9 MovT
	func_3439(var_239_object); // 0x1ca Call
	if(var_238_bool == 0) goto Label_462; // 0x1cc JumpB
	var_226_bool = 1; // 0x1cd MovB
	
Label_462:
	if(var_226_bool == 0) goto Label_464; // 0x1ce JumpB
	var_207_bool = 0; // 0x1cf MovB
	
Label_464:
	if(var_207_bool == 0) goto Label_470; // 0x1d0 JumpB
	var_240_int = 8357; // 0x1d1 PushI
	var_241_int = 6453; // 0x1d2 PushI
	var_242_int = 9180; // 0x1d3 PushI
	AddReply(var_240_int, var_241_int, var_242_int); // 0x1d4 TObjFunc
	
Label_470:
	var_243_bool = 0; // 0x1d6 PushV
	var_243_bool = 0; // 0x1d7 MovB
	var_244_bool = 0; var_245_object = Obj(); // 0x1d8 PushV
	var_245_object = var_1_object; // 0x1d9 MovT
	func_3695(var_245_object); // 0x1da Call
	if(var_244_bool == 0) goto Label_483; // 0x1dc JumpB
	var_250_bool = 0; var_251_object = Obj(); // 0x1dd PushV
	var_251_object = var_1_object; // 0x1de MovT
	func_3499(var_251_object); // 0x1df Call
	if(var_250_bool == 0) goto Label_483; // 0x1e1 JumpB
	var_243_bool = 1; // 0x1e2 MovB
	
Label_483:
	if(var_243_bool == 0) goto Label_489; // 0x1e3 JumpB
	var_256_int = 8365; // 0x1e4 PushI
	var_257_int = 9205; // 0x1e5 PushI
	var_258_int = 9188; // 0x1e6 PushI
	AddReply(var_256_int, var_257_int, var_258_int); // 0x1e7 TObjFunc
	
Label_489:
	var_259_bool = 0; // 0x1e9 PushV
	var_259_bool = 0; // 0x1ea MovB
	var_260_bool = 0; var_261_object = Obj(); // 0x1eb PushV
	var_261_object = var_1_object; // 0x1ec MovT
	func_3683(var_261_object); // 0x1ed Call
	if(var_260_bool == 0) goto Label_502; // 0x1ef JumpB
	var_266_bool = 0; var_267_object = Obj(); // 0x1f0 PushV
	var_267_object = var_1_object; // 0x1f1 MovT
	func_3511(var_267_object); // 0x1f2 Call
	if(var_266_bool == 0) goto Label_502; // 0x1f4 JumpB
	var_259_bool = 1; // 0x1f5 MovB
	
Label_502:
	if(var_259_bool == 0) goto Label_508; // 0x1f6 JumpB
	var_272_int = 8379; // 0x1f7 PushI
	var_273_int = 9378; // 0x1f8 PushI
	var_274_int = 9202; // 0x1f9 PushI
	AddReply(var_272_int, var_273_int, var_274_int); // 0x1fa TObjFunc
	
Label_508:
	var_275_int = 8520; // 0x1fc PushI
	var_276_int = -1; // 0x1fd PushI
	var_277_int = 9362; // 0x1fe PushI
	AddReply(var_275_int, var_276_int, var_277_int); // 0x1ff TObjFunc
	goto Label_516; // 0x201 Jump
	
Label_516:
	var_278_bool = 0; // 0x204 PushV
	func_3115(var_278_bool); // 0x205 Call
	if(var_278_bool == 0) goto Label_531; // 0x207 JumpB
	
Label_520:
	lshWaitForAnimEnd(); // 0x208 Func
	var_279_object = var_3_object; // 0x20a PushT
	if(var_279_object == 0) goto Label_525; // 0x20b JumpB
	goto Label_530; // 0x20c Jump
	
Label_530:
	goto Label_545; // 0x212 Jump
	
Label_545:
	return 0; // 0x221 Return
	
Label_525:
	var_280_string = ""; // 0x20d PushV
	var_280_string = var_2_object; // 0x20e MovT
	func_2998(var_280_string); // 0x20f Call
	goto Label_520; // 0x211 Jump
	
Label_531:
	var_281_string = "all"; // 0x213 PushS
	var_282_string = "idle"; // 0x214 PushS
	PlayAnimation(var_281_string, var_282_string); // 0x215 Func
	
Label_535:
	WaitForAnimEnd(); // 0x217 Func
	var_283_object = var_3_object; // 0x219 PushT
	if(var_283_object == 0) goto Label_540; // 0x21a JumpB
	goto Label_545; // 0x21b Jump
	
Label_540:
	var_284_string = "all"; // 0x21c PushS
	var_285_string = "idle"; // 0x21d PushS
	PlayAnimation(var_284_string, var_285_string); // 0x21e Func
	goto Label_535; // 0x220 Jump
}


func_3971()
{
	var_98_object = Obj(); var_99_object = Obj(); // 0xf83 PushV
	var_100_string = "Adding diary entry"; // 0xf84 PushS
	Trace(var_100_string); // 0xf85 Func
	var_101_int = 109; // 0xf87 PushI
	var_102_int = 2; // 0xf88 PushI
	var_103_int = 13732; // 0xf89 PushI
	CreateDiaryEntry(var_99_object, var_101_int, var_102_int, var_103_int); // 0xf8a Func
	var_104_bool = 0; var_105_object = Obj(); var_106_int = 0; // 0xf8c PushV
	var_105_object = var_99_object; // 0xf8d Mov
	var_106_int = 107; // 0xf8e MovI
	func_3794(var_104_bool, var_105_object, var_106_int); // 0xf8f Call
	return 2; // 0xf91 Return
}


func_3718(var_142_bool)
{
	var_144_bool = 0; // 0xe87 PushV
	var_144_bool = 0; // 0xe88 MovB
	var_145_int = 0; // 0xe89 PushV
	func_3088(var_145_int); // 0xe8a Call
	var_150_int = 0; // 0xe8c PushI
	var_151_bool = var_145_int >= var_150_int; // 0xe8d GE
	if(var_151_bool == 0) goto Label_3734; // 0xe8e JumpB
	var_152_int = 0; // 0xe8f PushV
	func_3088(var_152_int); // 0xe90 Call
	var_153_int = 6; // 0xe92 PushI
	var_154_bool = var_152_int < var_153_int; // 0xe93 LT
	if(var_154_bool == 0) goto Label_3734; // 0xe94 JumpB
	var_144_bool = 1; // 0xe95 MovB
	
Label_3734:
	if(var_144_bool == 0) goto Label_3737; // 0xe96 JumpB
	var_142_bool = 1; // 0xe97 MovB
	return 0; // 0xe98 Return
	
Label_3737:
	var_142_bool = 0; // 0xe99 MovB
	return 0; // 0xe9a Return
}


func_3463(var_126_bool)
{
	var_128_int = 0; var_129_string = ""; // 0xd88 PushV
	var_129_string = "ood2Spi4ka1"; // 0xd89 MovS
	func_3033(var_128_int, var_129_string); // 0xd8a Call
	var_132_int = 0; // 0xd8c PushI
	var_133_bool = var_128_int == var_132_int; // 0xd8d Eq
	if(var_133_bool == 0) goto Label_3473; // 0xd8e JumpB
	var_126_bool = 1; // 0xd8f MovB
	return 0; // 0xd90 Return
	
Label_3473:
	var_126_bool = 0; // 0xd91 MovB
	return 0; // 0xd92 Return
}


func_3211()
{
	var_470_string = "KnowShabnak"; // 0xc8c PushS
	var_471_int = 1; // 0xc8d PushI
	SetVariable(var_470_string, var_471_int); // 0xc8e Func
	return 0; // 0xc90 Return
}


func_3217()
{
	var_28_string = "ood2Spi4ka1"; // 0xc92 PushS
	var_29_int = 1; // 0xc93 PushI
	SetVariable(var_28_string, var_29_int); // 0xc94 Func
	return 0; // 0xc96 Return
}


func_3475(var_143_bool)
{
	var_145_int = 0; var_146_string = ""; // 0xd94 PushV
	var_146_string = "ood2Spi4ka2"; // 0xd95 MovS
	func_3033(var_145_int, var_146_string); // 0xd96 Call
	var_147_int = 0; // 0xd98 PushI
	var_148_bool = var_145_int == var_147_int; // 0xd99 Eq
	if(var_148_bool == 0) goto Label_3485; // 0xd9a JumpB
	var_143_bool = 1; // 0xd9b MovB
	return 0; // 0xd9c Return
	
Label_3485:
	var_143_bool = 0; // 0xd9d MovB
	return 0; // 0xd9e Return
}


func_3987()
{
	var_114_object = Obj(); var_115_object = Obj(); // 0xf93 PushV
	var_116_string = "Adding diary entry"; // 0xf94 PushS
	Trace(var_116_string); // 0xf95 Func
	var_117_int = 110; // 0xf97 PushI
	var_118_int = 2; // 0xf98 PushI
	var_119_int = 13733; // 0xf99 PushI
	CreateDiaryEntry(var_115_object, var_117_int, var_118_int, var_119_int); // 0xf9a Func
	var_120_bool = 0; var_121_object = Obj(); var_122_int = 0; // 0xf9c PushV
	var_121_object = var_115_object; // 0xf9d Mov
	var_122_int = 107; // 0xf9e MovI
	func_3794(var_120_bool, var_121_object, var_122_int); // 0xf9f Call
	return 2; // 0xfa1 Return
}


func_3223()
{
	var_79_string = "ood2Spi4ka2"; // 0xc98 PushS
	var_80_int = 1; // 0xc99 PushI
	SetVariable(var_79_string, var_80_int); // 0xc9a Func
	return 0; // 0xc9c Return
}


func_3739(var_166_bool)
{
	var_168_bool = 0; // 0xe9c PushV
	var_168_bool = 0; // 0xe9d MovB
	var_169_int = 0; // 0xe9e PushV
	func_3088(var_169_int); // 0xe9f Call
	var_170_int = 6; // 0xea1 PushI
	var_171_bool = var_169_int >= var_170_int; // 0xea2 GE
	if(var_171_bool == 0) goto Label_3755; // 0xea3 JumpB
	var_172_int = 0; // 0xea4 PushV
	func_3088(var_172_int); // 0xea5 Call
	var_173_int = 12; // 0xea7 PushI
	var_174_bool = var_172_int < var_173_int; // 0xea8 LT
	if(var_174_bool == 0) goto Label_3755; // 0xea9 JumpB
	var_168_bool = 1; // 0xeaa MovB
	
Label_3755:
	if(var_168_bool == 0) goto Label_3758; // 0xeab JumpB
	var_166_bool = 1; // 0xeac MovB
	return 0; // 0xead Return
	
Label_3758:
	var_166_bool = 0; // 0xeae MovB
	return 0; // 0xeaf Return
}


func_3229()
{
	var_245_string = "KnowAlbinos"; // 0xc9e PushS
	var_246_int = 1; // 0xc9f PushI
	SetVariable(var_245_string, var_246_int); // 0xca0 Func
	return 0; // 0xca2 Return
}


func_3487(var_134_bool)
{
	var_136_int = 0; var_137_string = ""; // 0xda0 PushV
	var_137_string = "d2q01"; // 0xda1 MovS
	func_3033(var_136_int, var_137_string); // 0xda2 Call
	var_138_int = 3; // 0xda4 PushI
	var_139_bool = var_136_int == var_138_int; // 0xda5 Eq
	if(var_139_bool == 0) goto Label_3497; // 0xda6 JumpB
	var_134_bool = 1; // 0xda7 MovB
	return 0; // 0xda8 Return
	
Label_3497:
	var_134_bool = 0; // 0xda9 MovB
	return 0; // 0xdaa Return
}


func_2209(var_0_object, var_1_object, var_2_object, var_3_object, var_395_object, var_396_object)
{
	var_0_object = var_396_object; // 0x8a2 TMov
	var_1_object = var_395_object; // 0x8a3 TMov
	var_3_object = 0; // 0x8a4 TMovB
	var_401_int = 1; // 0x8a5 PushI
	if(var_401_int == 0) goto Label_2388; // 0x8a6 JumpB
	var_402_bool = 0; // 0x8a7 PushV
	var_402_bool = 1; // 0x8a8 MovB
	var_403_bool = 0; // 0x8a9 PushV
	var_403_bool = 0; // 0x8aa MovB
	var_404_bool = 0; var_405_object = Obj(); // 0x8ab PushV
	var_405_object = var_1_object; // 0x8ac MovT
	func_3533(var_404_bool, var_405_object); // 0x8ad Call
	if(var_404_bool == 0) goto Label_2230; // 0x8af JumpB
	var_415_bool = 0; var_416_object = Obj(); // 0x8b0 PushV
	var_416_object = var_1_object; // 0x8b1 MovT
	func_3563(var_416_object); // 0x8b2 Call
	if(var_415_bool == 0) goto Label_2230; // 0x8b4 JumpB
	var_403_bool = 1; // 0x8b5 MovB
	
Label_2230:
	if(var_403_bool == 0) goto Label_2246; // 0x8b6 JumpB
	var_421_bool = 0; // 0x8b7 PushV
	var_421_bool = 0; // 0x8b8 MovB
	var_422_bool = 0; var_423_object = Obj(); // 0x8b9 PushV
	var_423_object = var_1_object; // 0x8ba MovT
	func_3543(var_422_bool, var_423_object); // 0x8bb Call
	if(var_422_bool == 0) goto Label_2244; // 0x8bd JumpB
	var_433_bool = 0; var_434_object = Obj(); // 0x8be PushV
	var_434_object = var_1_object; // 0x8bf MovT
	func_3563(var_434_object); // 0x8c0 Call
	if(var_433_bool == 0) goto Label_2244; // 0x8c2 JumpB
	var_421_bool = 1; // 0x8c3 MovB
	
Label_2244:
	if(var_421_bool == 0) goto Label_2246; // 0x8c4 JumpB
	var_402_bool = 0; // 0x8c5 MovB
	
Label_2246:
	if(var_402_bool == 0) goto Label_2267; // 0x8c6 JumpB
	var_435_string = ""; // 0x8c7 PushV
	var_435_string = "Neutral"; // 0x8c8 MovS
	func_2418(var_396_object, var_435_string); // 0x8c9 Call
	var_440_int = 12040; // 0x8cb PushI
	SetMessage(var_440_int); // 0x8cc TObjFunc
	ClearReplies(); // 0x8ce TObjFunc
	var_441_int = 12041; // 0x8d0 PushI
	var_442_int = 13262; // 0x8d1 PushI
	var_443_int = 13259; // 0x8d2 PushI
	AddReply(var_441_int, var_442_int, var_443_int); // 0x8d3 TObjFunc
	var_444_int = 12042; // 0x8d5 PushI
	var_445_int = 13261; // 0x8d6 PushI
	var_446_int = 13260; // 0x8d7 PushI
	AddReply(var_444_int, var_445_int, var_446_int); // 0x8d8 TObjFunc
	goto Label_2388; // 0x8da Jump
	
Label_2388:
	var_447_bool = 0; // 0x954 PushV
	func_3115(var_447_bool); // 0x955 Call
	if(var_447_bool == 0) goto Label_2403; // 0x957 JumpB
	
Label_2392:
	lshWaitForAnimEnd(); // 0x958 Func
	var_448_object = var_3_object; // 0x95a PushT
	if(var_448_object == 0) goto Label_2397; // 0x95b JumpB
	goto Label_2402; // 0x95c Jump
	
Label_2402:
	goto Label_2417; // 0x962 Jump
	
Label_2417:
	return 0; // 0x971 Return
	
Label_2397:
	var_449_string = ""; // 0x95d PushV
	var_449_string = var_2_object; // 0x95e MovT
	func_2998(var_449_string); // 0x95f Call
	goto Label_2392; // 0x961 Jump
	
Label_2403:
	var_450_string = "all"; // 0x963 PushS
	var_451_string = "idle"; // 0x964 PushS
	PlayAnimation(var_450_string, var_451_string); // 0x965 Func
	
Label_2407:
	WaitForAnimEnd(); // 0x967 Func
	var_452_object = var_3_object; // 0x969 PushT
	if(var_452_object == 0) goto Label_2412; // 0x96a JumpB
	goto Label_2417; // 0x96b Jump
	
Label_2412:
	var_453_string = "all"; // 0x96c PushS
	var_454_string = "idle"; // 0x96d PushS
	PlayAnimation(var_453_string, var_454_string); // 0x96e Func
	goto Label_2407; // 0x970 Jump
	
Label_2267:
	var_455_string = ""; // 0x8db PushV
	var_455_string = "Neutral"; // 0x8dc MovS
	func_2418(var_396_object, var_455_string); // 0x8dd Call
	var_456_int = 12052; // 0x8df PushI
	SetMessage(var_456_int); // 0x8e0 TObjFunc
	ClearReplies(); // 0x8e2 TObjFunc
	var_457_bool = 0; // 0x8e4 PushV
	var_457_bool = 1; // 0x8e5 MovB
	var_458_bool = 0; // 0x8e6 PushV
	var_458_bool = 0; // 0x8e7 MovB
	var_459_bool = 0; var_460_object = Obj(); // 0x8e8 PushV
	var_460_object = var_1_object; // 0x8e9 MovT
	func_3533(var_459_bool, var_460_object); // 0x8ea Call
	if(var_459_bool == 0) goto Label_2291; // 0x8ec JumpB
	var_461_bool = 0; var_462_object = Obj(); // 0x8ed PushV
	var_462_object = var_1_object; // 0x8ee MovT
	func_3575(var_462_object); // 0x8ef Call
	if(var_461_bool == 0) goto Label_2291; // 0x8f1 JumpB
	var_458_bool = 1; // 0x8f2 MovB
	
Label_2291:
	if(var_458_bool == 0) goto Label_2307; // 0x8f3 JumpB
	var_467_bool = 0; // 0x8f4 PushV
	var_467_bool = 0; // 0x8f5 MovB
	var_468_bool = 0; var_469_object = Obj(); // 0x8f6 PushV
	var_469_object = var_1_object; // 0x8f7 MovT
	func_3543(var_468_bool, var_469_object); // 0x8f8 Call
	if(var_468_bool == 0) goto Label_2305; // 0x8fa JumpB
	var_470_bool = 0; var_471_object = Obj(); // 0x8fb PushV
	var_471_object = var_1_object; // 0x8fc MovT
	func_3575(var_471_object); // 0x8fd Call
	if(var_470_bool == 0) goto Label_2305; // 0x8ff JumpB
	var_467_bool = 1; // 0x900 MovB
	
Label_2305:
	if(var_467_bool == 0) goto Label_2307; // 0x901 JumpB
	var_457_bool = 0; // 0x902 MovB
	
Label_2307:
	if(var_457_bool == 0) goto Label_2313; // 0x903 JumpB
	var_472_int = 12066; // 0x904 PushI
	var_473_int = 13289; // 0x905 PushI
	var_474_int = 13287; // 0x906 PushI
	AddReply(var_472_int, var_473_int, var_474_int); // 0x907 TObjFunc
	
Label_2313:
	var_475_bool = 0; // 0x909 PushV
	var_475_bool = 0; // 0x90a MovB
	var_476_bool = 0; var_477_object = Obj(); // 0x90b PushV
	var_477_object = var_1_object; // 0x90c MovT
	func_3599(var_477_object); // 0x90d Call
	if(var_476_bool == 0) goto Label_2326; // 0x90f JumpB
	var_482_bool = 0; var_483_object = Obj(); // 0x910 PushV
	var_483_object = var_1_object; // 0x911 MovT
	func_3611(var_483_object); // 0x912 Call
	if(var_482_bool == 0) goto Label_2326; // 0x914 JumpB
	var_475_bool = 1; // 0x915 MovB
	
Label_2326:
	if(var_475_bool == 0) goto Label_2332; // 0x916 JumpB
	var_488_int = 12543; // 0x917 PushI
	var_489_int = 13713; // 0x918 PushI
	var_490_int = 13712; // 0x919 PushI
	AddReply(var_488_int, var_489_int, var_490_int); // 0x91a TObjFunc
	
Label_2332:
	var_491_bool = 0; // 0x91c PushV
	var_491_bool = 0; // 0x91d MovB
	var_492_bool = 0; // 0x91e PushV
	var_492_bool = 0; // 0x91f MovB
	var_493_bool = 0; var_494_object = Obj(); // 0x920 PushV
	var_494_object = var_1_object; // 0x921 MovT
	func_3587(var_494_object); // 0x922 Call
	if(var_493_bool == 0) goto Label_2347; // 0x924 JumpB
	var_499_bool = 0; var_500_object = Obj(); // 0x925 PushV
	var_500_object = var_1_object; // 0x926 MovT
	func_3623(var_500_object); // 0x927 Call
	if(var_499_bool == 0) goto Label_2347; // 0x929 JumpB
	var_492_bool = 1; // 0x92a MovB
	
Label_2347:
	if(var_492_bool == 0) goto Label_2355; // 0x92b JumpB
	var_505_bool = 0; var_506_object = Obj(); // 0x92c PushV
	var_506_object = var_1_object; // 0x92d MovT
	func_3599(var_506_object); // 0x92e Call
	var_507_bool = var_505_bool == 0; // 0x930 Not
	if(var_507_bool == 0) goto Label_2355; // 0x931 JumpB
	var_491_bool = 1; // 0x932 MovB
	
Label_2355:
	if(var_491_bool == 0) goto Label_2361; // 0x933 JumpB
	var_508_int = 12546; // 0x934 PushI
	var_509_int = 13716; // 0x935 PushI
	var_510_int = 13715; // 0x936 PushI
	AddReply(var_508_int, var_509_int, var_510_int); // 0x937 TObjFunc
	
Label_2361:
	var_511_bool = 0; // 0x939 PushV
	var_511_bool = 0; // 0x93a MovB
	var_512_bool = 0; var_513_object = Obj(); // 0x93b PushV
	var_513_object = var_1_object; // 0x93c MovT
	func_3647(var_513_object); // 0x93d Call
	if(var_512_bool == 0) goto Label_2374; // 0x93f JumpB
	var_518_bool = 0; var_519_object = Obj(); // 0x940 PushV
	var_519_object = var_1_object; // 0x941 MovT
	func_3635(var_519_object); // 0x942 Call
	if(var_518_bool == 0) goto Label_2374; // 0x944 JumpB
	var_511_bool = 1; // 0x945 MovB
	
Label_2374:
	if(var_511_bool == 0) goto Label_2380; // 0x946 JumpB
	var_524_int = 12053; // 0x947 PushI
	var_525_int = 13274; // 0x948 PushI
	var_526_int = 13273; // 0x949 PushI
	AddReply(var_524_int, var_525_int, var_526_int); // 0x94a TObjFunc
	
Label_2380:
	var_527_int = 12060; // 0x94c PushI
	var_528_int = -1; // 0x94d PushI
	var_529_int = 13280; // 0x94e PushI
	AddReply(var_527_int, var_528_int, var_529_int); // 0x94f TObjFunc
	goto Label_2388; // 0x951 Jump
}


func_3235()
{
	var_495_string = "KnowZemlja"; // 0xca4 PushS
	var_496_int = 1; // 0xca5 PushI
	SetVariable(var_495_string, var_496_int); // 0xca6 Func
	return 0; // 0xca8 Return
}


func_4003()
{
	var_59_object = Obj(); var_60_object = Obj(); // 0xfa3 PushV
	var_61_string = "Adding diary entry"; // 0xfa4 PushS
	Trace(var_61_string); // 0xfa5 Func
	var_62_int = 158; // 0xfa7 PushI
	var_63_int = 2; // 0xfa8 PushI
	var_64_int = 15376; // 0xfa9 PushI
	CreateDiaryEntry(var_60_object, var_62_int, var_63_int, var_64_int); // 0xfaa Func
	var_65_bool = 0; var_66_object = Obj(); var_67_int = 0; // 0xfac PushV
	var_66_object = var_60_object; // 0xfad Mov
	var_67_int = 107; // 0xfae MovI
	func_3794(var_65_bool, var_66_object, var_67_int); // 0xfaf Call
	return 2; // 0xfb1 Return
}


func_3241()
{
	var_32_string = "d2q01"; // 0xcaa PushS
	var_33_int = 4; // 0xcab PushI
	SetVariable(var_32_string, var_33_int); // 0xcac Func
	func_3939(); // 0xcaf Call
	var_59_bool = 0; var_60_string = ""; var_61_string = ""; // 0xcb1 PushV
	var_60_string = "quest_d2_01"; // 0xcb2 MovS
	var_61_string = "woman"; // 0xcb3 MovS
	func_3062(var_59_bool, var_60_string, var_61_string); // 0xcb4 Call
	return 0; // 0xcb6 Return
}


func_3499(var_327_bool)
{
	var_329_int = 0; var_330_string = ""; // 0xdac PushV
	var_330_string = "ood1Spi4ka4"; // 0xdad MovS
	func_3033(var_329_int, var_330_string); // 0xdae Call
	var_331_int = 0; // 0xdb0 PushI
	var_332_bool = var_329_int == var_331_int; // 0xdb1 Eq
	if(var_332_bool == 0) goto Label_3509; // 0xdb2 JumpB
	var_327_bool = 1; // 0xdb3 MovB
	return 0; // 0xdb4 Return
	
Label_3509:
	var_327_bool = 0; // 0xdb5 MovB
	return 0; // 0xdb6 Return
}


func_3760(var_306_bool)
{
	var_308_bool = 0; // 0xeb1 PushV
	var_308_bool = 0; // 0xeb2 MovB
	var_309_int = 0; // 0xeb3 PushV
	func_3088(var_309_int); // 0xeb4 Call
	var_310_int = 12; // 0xeb6 PushI
	var_311_bool = var_309_int >= var_310_int; // 0xeb7 GE
	if(var_311_bool == 0) goto Label_3776; // 0xeb8 JumpB
	var_312_int = 0; // 0xeb9 PushV
	func_3088(var_312_int); // 0xeba Call
	var_313_int = 18; // 0xebc PushI
	var_314_bool = var_312_int < var_313_int; // 0xebd LT
	if(var_314_bool == 0) goto Label_3776; // 0xebe JumpB
	var_308_bool = 1; // 0xebf MovB
	
Label_3776:
	if(var_308_bool == 0) goto Label_3779; // 0xec0 JumpB
	var_306_bool = 1; // 0xec1 MovB
	return 0; // 0xec2 Return
	
Label_3779:
	var_306_bool = 0; // 0xec3 MovB
	return 0; // 0xec4 Return
}


func_2994()
{
	CameraSwitchToNormal(); // 0xbb3 Func
	return 0; // 0xbb5 Return
}


func_4019()
{
	var_20_bool = GlobalVars[1]; // 0xfb3 PushGE
	var_20_bool = 0; // 0xfb4 MovB
	GlobalVars[1] = var_20_bool; // 0xfb5 PopGE
	return 0; // 0xfb6 Return
}


func_180(var_2_object, var_30_string)
{
	var_31_bool = 0; // 0xb5 PushV
	func_3115(var_31_bool); // 0xb6 Call
	var_32_bool = var_31_bool == 0; // 0xb8 Not
	if(var_32_bool == 0) goto Label_187; // 0xb9 JumpB
	return 0; // 0xba Return
	
Label_187:
	var_33_bool = var_30_string == var_2_object; // 0xbb Eq
	if(var_33_bool == 0) goto Label_190; // 0xbc JumpB
	return 0; // 0xbd Return
	
Label_190:
	var_34_string = ""; // 0xbe PushV
	var_34_string = var_30_string; // 0xbf Mov
	func_2998(var_34_string); // 0xc0 Call
	var_2_object = var_30_string; // 0xc2 TMov
	return 0; // 0xc3 Return
}


func_2998(var_25_string)
{
	var_26_float = 0; var_27_float = 0; var_28_float = 0; var_29_float = 0; // 0xbb6 PushV
	var_30_string = "playing "; // 0xbb7 PushS
	var_31_int = var_30_string + var_25_string; // 0xbb8 Add
	Trace(var_31_int); // 0xbb9 Func
	lshGetAnimTimes(var_25_string, var_28_float, var_29_float); // 0xbbb Func
	lshPlayAnimation(var_28_float, var_29_float); // 0xbbd Func
	var_32_string = "start: "; // 0xbbf PushS
	var_33_int = var_32_string + var_28_float; // 0xbc0 Add
	Trace(var_33_int); // 0xbc1 Func
	var_34_string = "end: "; // 0xbc3 PushS
	var_35_int = var_34_string + var_29_float; // 0xbc4 Add
	Trace(var_35_int); // 0xbc5 Func
	return 4; // 0xbc7 Return
}


func_3255()
{
	var_220_string = "ood1Spi4ka4"; // 0xcb8 PushS
	var_221_int = 1; // 0xcb9 PushI
	SetVariable(var_220_string, var_221_int); // 0xcba Func
	return 0; // 0xcbc Return
}


func_4023(var_21_object)
{
	var_22_bool = GlobalVars[1]; // 0xfb8 PushGE
	var_23_bool = var_22_bool == 0; // 0xfb9 Not
	if(var_23_bool == 0) goto Label_4036; // 0xfba JumpB
	var_24_int = 0; var_25_object = Obj(); // 0xfbb PushV
	var_25_object = var_21_object; // 0xfbc Mov
	TaskCall(2); // 0xfbd TaskCall
	func_49(var_26_object, var_24_int, var_25_object); // 0xfbe Call
	TaskReturn(); // 0xfbf TaskReturn
	var_133_bool = GlobalVars[1]; // 0xfc1 PushGE
	var_133_bool = 1; // 0xfc2 MovB
	GlobalVars[1] = var_133_bool; // 0xfc3 PopGE
	
Label_4036:
	var_134_bool = 0; var_135_int = 0; // 0xfc4 PushV
	var_135_int = 1; // 0xfc5 MovI
	func_3096(var_134_bool, var_135_int); // 0xfc6 Call
	if(var_134_bool == 0) goto Label_4048; // 0xfc8 JumpB
	var_142_int = 0; var_143_object = Obj(); // 0xfc9 PushV
	var_143_object = var_21_object; // 0xfca Mov
	TaskCall(4); // 0xfcb TaskCall
	func_317(var_144_object, var_142_int, var_143_object); // 0xfcc Call
	TaskReturn(); // 0xfcd TaskReturn
	return 0; // 0xfcf Return
	
Label_4048:
	var_288_bool = 0; var_289_int = 0; // 0xfd0 PushV
	var_289_int = 2; // 0xfd1 MovI
	func_3096(var_288_bool, var_289_int); // 0xfd2 Call
	if(var_288_bool == 0) goto Label_4060; // 0xfd4 JumpB
	var_290_int = 0; var_291_object = Obj(); // 0xfd5 PushV
	var_291_object = var_21_object; // 0xfd6 Mov
	TaskCall(6); // 0xfd7 TaskCall
	func_1329(var_292_object, var_290_int, var_291_object); // 0xfd8 Call
	TaskReturn(); // 0xfd9 TaskReturn
	return 0; // 0xfdb Return
	
Label_4060:
	var_375_bool = 0; var_376_int = 0; // 0xfdc PushV
	var_376_int = 6; // 0xfdd MovI
	func_3096(var_375_bool, var_376_int); // 0xfde Call
	if(var_375_bool == 0) goto Label_4072; // 0xfe0 JumpB
	var_377_int = 0; var_378_object = Obj(); // 0xfe1 PushV
	var_378_object = var_21_object; // 0xfe2 Mov
	TaskCall(8); // 0xfe3 TaskCall
	func_2146(var_379_object, var_377_int, var_378_object); // 0xfe4 Call
	TaskReturn(); // 0xfe5 TaskReturn
	return 0; // 0xfe7 Return
	
Label_4072:
	var_532_bool = 0; // 0xfe8 PushV
	func_3102(var_532_bool); // 0xfe9 Call
	return 0; // 0xfeb Return
}


func_3511(var_343_bool)
{
	var_345_int = 0; var_346_string = ""; // 0xdb8 PushV
	var_346_string = "ood1Spi4ka5"; // 0xdb9 MovS
	func_3033(var_345_int, var_346_string); // 0xdba Call
	var_347_int = 0; // 0xdbc PushI
	var_348_bool = var_345_int == var_347_int; // 0xdbd Eq
	if(var_348_bool == 0) goto Label_3521; // 0xdbe JumpB
	var_343_bool = 1; // 0xdbf MovB
	return 0; // 0xdc0 Return
	
Label_3521:
	var_343_bool = 0; // 0xdc1 MovB
	return 0; // 0xdc2 Return
}


func_3261()
{
	var_230_string = "ood1Spi4ka5"; // 0xcbe PushS
	var_231_int = 1; // 0xcbf PushI
	SetVariable(var_230_string, var_231_int); // 0xcc0 Func
	return 0; // 0xcc2 Return
}


func_3267()
{
	var_98_string = "playsound"; // 0xcc4 PushS
	var_99_string = "mapmark"; // 0xcc5 PushS
	TriggerWorld(var_98_string, var_99_string); // 0xcc6 Func
	return 0; // 0xcc8 Return
}


func_3523(var_286_bool, var_287_object)
{
	var_288_bool = 0; var_289_object = Obj(); // 0xdc4 PushV
	var_289_object = var_287_object; // 0xdc5 Mov
	func_3707(var_289_object); // 0xdc6 Call
	if(var_288_bool == 0) goto Label_3531; // 0xdc8 JumpB
	var_286_bool = 1; // 0xdc9 MovB
	return 0; // 0xdca Return
	
Label_3531:
	var_286_bool = 0; // 0xdcb MovB
	return 0; // 0xdcc Return
}


func_3781(var_49_object)
{
	var_50_object = Obj(); var_51_object = Obj(); // 0xec5 PushV
	GetDiaryRoot(var_51_object); // 0xec6 Func
	var_52_bool = var_51_object == 0; // 0xec8 Not
	if(var_52_bool == 0) goto Label_3791; // 0xec9 JumpB
	var_53_string = "Can't retrieve diary root"; // 0xeca PushS
	Trace(var_53_string); // 0xecb Func
	var_49_object = 0; // 0xecd MovB
	return 2; // 0xece Return
	
Label_3791:
	var_49_object = var_51_object; // 0xecf Mov
	return 2; // 0xed0 Return
}


func_3016()
{
	var_23_bool = 0; // 0xbc8 PushV
	func_3115(var_23_bool); // 0xbc9 Call
	if(var_23_bool == 0) goto Label_3022; // 0xbcb JumpB
	lshStopSpeech(); // 0xbcc Func
	
Label_3022:
	return 0; // 0xbce Return
}


func_3273()
{
	var_55_object = Obj(); var_56_object = Obj(); // 0xcc9 PushV
	var_57_object = Obj(); // 0xcca PushV
	func_3840(var_57_object); // 0xccb Call
	var_56_object = var_57_object; // 0xccc Mov
	var_64_string = "d1q04Spi4kaGotoPowderHouse"; // 0xcce PushS
	var_65_string = "pt_map_powderhouse"; // 0xccf PushS
	var_66_int = 0; // 0xcd0 PushI
	var_67_int = 8645; // 0xcd1 PushI
	var_68_float = 0; // 0xcd2 PushV
	func_3074(var_68_float); // 0xcd3 Call
	AddMark(var_64_string, var_65_string, var_66_int, var_67_int, var_68_float); // 0xcd5 ObjFunc
	func_3923(); // 0xcd8 Call
	return 2; // 0xcda Return
}


func_3533(var_140_bool, var_141_object)
{
	var_142_bool = 0; var_143_object = Obj(); // 0xdce PushV
	var_143_object = var_141_object; // 0xdcf Mov
	func_3718(var_143_object); // 0xdd0 Call
	if(var_142_bool == 0) goto Label_3541; // 0xdd2 JumpB
	var_140_bool = 1; // 0xdd3 MovB
	return 0; // 0xdd4 Return
	
Label_3541:
	var_140_bool = 0; // 0xdd5 MovB
	return 0; // 0xdd6 Return
}


func_3023(var_60_cvector, var_61_cvector)
{
	var_63_float = 0; var_64_float = 0; // 0xbcf PushV
	var_65_int = var_61_cvector | var_61_cvector; // 0xbd0 Or
	var_64_float = sqrt(var_65_int); // 0xbd1 Sqrt2
	var_66_float = 0.0; // 0xbd2 PushF
	var_67_bool = var_64_float < var_66_float; // 0xbd3 LT
	if(var_67_bool == 0) goto Label_3031; // 0xbd4 JumpB
	var_60_cvector = CVector(0.0, 0.0, 0.0); // 0xbd5 MovV
	return 2; // 0xbd6 Return
	
Label_3031:
	var_60_cvector = var_61_cvector / var_61_cvector; // 0xbd7 Div2
	return 2; // 0xbd8 Return
}


func_3794(var_40_bool, var_41_object, var_42_int)
{
	var_43_object = Obj(); var_44_object = Obj(); var_45_int = 0; var_46_object = Obj(); var_47_object = Obj(); var_48_int = 0; // 0xed2 PushV
	var_49_object = Obj(); // 0xed3 PushV
	func_3781(var_49_object); // 0xed4 Call
	var_46_object = var_49_object; // 0xed5 Mov
	Find(var_42_int, var_47_object); // 0xed7 ObjFunc
	var_54_bool = var_47_object == 0; // 0xed9 Not
	if(var_54_bool == 0) goto Label_3809; // 0xeda JumpB
	var_55_string = "Can't find diary parent with id: "; // 0xedb PushS
	var_56_int = var_55_string + var_42_int; // 0xedc Add
	Trace(var_56_int); // 0xedd Func
	var_40_bool = 0; // 0xedf MovB
	return 6; // 0xee0 Return
	
Label_3809:
	AddChild(var_41_object); // 0xee1 ObjFunc
	var_57_string = "player_diary"; // 0xee3 PushS
	var_58_int = 1; // 0xee4 PushI
	SetVariable(var_57_string, var_58_int); // 0xee5 Func
	GetCategory(var_48_int); // 0xee7 ObjFunc
	SetDiarySection(var_48_int); // 0xee9 Func
	var_40_bool = 0; // 0xeeb MovB
	return 6; // 0xeec Return
}


func_3543(var_164_bool, var_165_object)
{
	var_166_bool = 0; var_167_object = Obj(); // 0xdd8 PushV
	var_167_object = var_165_object; // 0xdd9 Mov
	func_3739(var_167_object); // 0xdda Call
	if(var_166_bool == 0) goto Label_3551; // 0xddc JumpB
	var_164_bool = 1; // 0xddd MovB
	return 0; // 0xdde Return
	
Label_3551:
	var_164_bool = 0; // 0xddf MovB
	return 0; // 0xde0 Return
}


func_3033(var_157_int, var_158_string)
{
	var_159_int = 0; var_160_int = 0; // 0xbd9 PushV
	GetVariable(var_158_string, var_160_int); // 0xbda Func
	var_157_int = var_160_int; // 0xbdc Mov
	return 2; // 0xbdd Return
}


func_3292()
{
	var_28_string = "ood6Spi4ka1"; // 0xcdd PushS
	var_29_int = 1; // 0xcde PushI
	SetVariable(var_28_string, var_29_int); // 0xcdf Func
	return 0; // 0xce1 Return
}


func_3038(var_68_object, var_69_string)
{
	var_70_object = Obj(); var_71_object = Obj(); var_72_object = Obj(); var_73_object = Obj(); // 0xbde PushV
	GetMainOutdoorScene(var_72_object); // 0xbdf Func
	var_74_string = ".bin"; // 0xbe1 PushS
	var_75_int = var_69_string + var_74_string; // 0xbe2 Add
	AddBlankActor(var_73_object, var_72_object, var_69_string, var_75_int); // 0xbe3 Func
	var_68_object = var_73_object; // 0xbe5 Mov
	return 4; // 0xbe6 Return
}


func_3553(var_304_bool, var_305_object)
{
	var_306_bool = 0; var_307_object = Obj(); // 0xde2 PushV
	var_307_object = var_305_object; // 0xde3 Mov
	func_3760(var_307_object); // 0xde4 Call
	if(var_306_bool == 0) goto Label_3561; // 0xde6 JumpB
	var_304_bool = 1; // 0xde7 MovB
	return 0; // 0xde8 Return
	
Label_3561:
	var_304_bool = 0; // 0xde9 MovB
	return 0; // 0xdea Return
}


func_3298()
{
	var_32_string = "d6q03"; // 0xce3 PushS
	var_33_int = 1; // 0xce4 PushI
	SetVariable(var_32_string, var_33_int); // 0xce5 Func
	func_3955(); // 0xce8 Call
	func_4003(); // 0xceb Call
	var_68_object = Obj(); var_69_string = ""; // 0xced PushV
	var_69_string = "quest_d6_03"; // 0xcee MovS
	func_3038(var_68_object, var_69_string); // 0xcef Call
	var_76_bool = 0; var_77_string = ""; var_78_string = ""; // 0xcf1 PushV
	var_77_string = "quest_d6_03"; // 0xcf2 MovS
	var_78_string = "place_albinos"; // 0xcf3 MovS
	func_3062(var_76_bool, var_77_string, var_78_string); // 0xcf4 Call
	return 0; // 0xcf6 Return
}


func_1508(var_2_object, var_109_string)
{
	var_110_bool = 0; // 0x5e5 PushV
	func_3115(var_110_bool); // 0x5e6 Call
	var_111_bool = var_110_bool == 0; // 0x5e8 Not
	if(var_111_bool == 0) goto Label_1515; // 0x5e9 JumpB
	return 0; // 0x5ea Return
	
Label_1515:
	var_112_bool = var_109_string == var_2_object; // 0x5eb Eq
	if(var_112_bool == 0) goto Label_1518; // 0x5ec JumpB
	return 0; // 0x5ed Return
	
Label_1518:
	var_113_string = ""; // 0x5ee PushV
	var_113_string = var_109_string; // 0x5ef Mov
	func_2998(var_113_string); // 0x5f0 Call
	var_2_object = var_109_string; // 0x5f2 TMov
	return 0; // 0x5f3 Return
}


func_3049(var_39_object, var_40_int)
{
	var_41_int = 0; var_42_int = 0; var_43_bool = 0; var_44_int = 0; var_45_int = 0; var_46_bool = 0; // 0xbe9 PushV
	GetItemID(var_44_int); // 0xbea ObjFunc
	var_47_string = "Category"; // 0xbec PushS
	GetInvItemProperty(var_45_int, var_44_int, var_47_string); // 0xbed Func
	AddItem(var_46_bool, var_39_object, var_45_int, var_40_int); // 0xbef ObjFunc
	var_48_bool = var_46_bool == 0; // 0xbf1 Not
	if(var_48_bool == 0) goto Label_3061; // 0xbf2 JumpB
	DropItems(var_39_object, var_40_int); // 0xbf3 ObjFunc
	
Label_3061:
	return 6; // 0xbf5 Return
}


func_3563(var_155_bool)
{
	var_157_int = 0; var_158_string = ""; // 0xdec PushV
	var_158_string = "ood6Spi4ka1"; // 0xded MovS
	func_3033(var_157_int, var_158_string); // 0xdee Call
	var_161_int = 0; // 0xdf0 PushI
	var_162_bool = var_157_int == var_161_int; // 0xdf1 Eq
	if(var_162_bool == 0) goto Label_3573; // 0xdf2 JumpB
	var_155_bool = 1; // 0xdf3 MovB
	return 0; // 0xdf4 Return
	
Label_3573:
	var_155_bool = 0; // 0xdf5 MovB
	return 0; // 0xdf6 Return
}


func_3823(var_152_bool, var_153_int)
{
	var_154_object = Obj(); var_155_object = Obj(); var_156_object = Obj(); var_157_object = Obj(); // 0xeef PushV
	var_158_object = Obj(); // 0xef0 PushV
	func_3781(var_158_object); // 0xef1 Call
	var_156_object = var_158_object; // 0xef2 Mov
	Find(var_153_int, var_157_object); // 0xef4 ObjFunc
	var_159_bool = var_157_object == 0; // 0xef6 Not
	if(var_159_bool == 0) goto Label_3834; // 0xef7 JumpB
	var_152_bool = 0; // 0xef8 MovB
	return 4; // 0xef9 Return
	
Label_3834:
	Remove(); // 0xefa ObjFunc
	var_152_bool = 1; // 0xefc MovB
	return 4; // 0xefd Return
}


func_3062(var_76_bool, var_77_string, var_78_string)
{
	var_79_object = Obj(); var_80_object = Obj(); // 0xbf6 PushV
	FindActor(var_80_object, var_77_string); // 0xbf7 Func
	var_81_bool = var_80_object == 0; // 0xbf9 NullEq
	if(var_81_bool == 0) goto Label_3069; // 0xbfa JumpB
	var_76_bool = 0; // 0xbfb MovB
	return 2; // 0xbfc Return
	
Label_3069:
	Trigger(var_80_object, var_78_string); // 0xbfd Func
	var_76_bool = 1; // 0xbff MovB
	return 2; // 0xc00 Return
}


func_3319()
{
	var_94_string = "ood6Spi4ka2"; // 0xcf8 PushS
	var_95_int = 1; // 0xcf9 PushI
	SetVariable(var_94_string, var_95_int); // 0xcfa Func
	return 0; // 0xcfc Return
}


func_3325()
{
	func_3971(); // 0xcff Call
	var_107_bool = 0; var_108_string = ""; var_109_string = ""; // 0xd01 PushV
	var_108_string = "quest_d6_03"; // 0xd02 MovS
	var_109_string = "completed"; // 0xd03 MovS
	func_3062(var_107_bool, var_108_string, var_109_string); // 0xd04 Call
	return 0; // 0xd06 Return
}


