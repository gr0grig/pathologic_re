task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_cvector)
{
	var_33_int = 1; // 0xc9 PushI
	if(var_33_int == 0) goto Label_405; // 0xca JumpB
	func_4537(); // 0xcc NEW_2
	var_35_int = 4274; // 0xce PushI
	var_36_bool = var_31_bool == var_35_int; // 0xcf Eq
	if(var_36_bool == 0) goto Label_268; // 0xd0 JumpB
	var_37_bool = 0; // 0xd1 PushV
	var_37_bool = 0; // 0xd2 MovB
	var_38_bool = 0; var_39_object = Obj(); // 0xd3 PushV
	var_39_object = var_1_object; // 0xd4 MovT
	func_5333(var_39_object); // 0xd5 NEW_2
	if(var_38_bool == 0) goto Label_222; // 0xd7 JumpB
	var_46_bool = 0; var_47_object = Obj(); // 0xd8 PushV
	var_47_object = var_1_object; // 0xd9 MovT
	func_5345(var_47_object); // 0xda NEW_2
	if(var_46_bool == 0) goto Label_222; // 0xdc JumpB
	var_37_bool = 1; // 0xdd MovB
	
Label_222:
	if(var_37_bool == 0) goto Label_248; // 0xde JumpB
	var_52_object = Obj(); var_53_object = Obj(); // 0xdf PushV
	var_52_object = var_1_object; // 0xe0 MovT
	var_53_object = var_0_object; // 0xe1 MovT
	func_4973(); // 0xe2 NEW_2
	var_56_string = ""; // 0xe4 PushV
	var_56_string = "Neutral"; // 0xe5 MovS
	func_178(var_32_cvector, var_56_string); // 0xe6 NEW_2
	var_73_int = 503926; // 0xe8 PushI
	SetMessage(var_73_int); // 0xe9 TObjFunc
	ClearReplies(); // 0xeb TObjFunc
	var_74_int = 503927; // 0xed PushI
	var_75_int = 4276; // 0xee PushI
	var_76_int = 4275; // 0xef PushI
	AddReply(var_74_int, var_75_int, var_76_int); // 0xf0 TObjFunc
	var_77_int = 503929; // 0xf2 PushI
	var_78_int = 4278; // 0xf3 PushI
	var_79_int = 4277; // 0xf4 PushI
	AddReply(var_77_int, var_78_int, var_79_int); // 0xf5 TObjFunc
	return 0; // 0xf7 Return
	
Label_248:
	var_80_string = ""; // 0xf8 PushV
	var_80_string = "Sexy"; // 0xf9 MovS
	func_178(var_32_cvector, var_80_string); // 0xfa NEW_2
	var_81_int = 513718; // 0xfc PushI
	SetMessage(var_81_int); // 0xfd TObjFunc
	ClearReplies(); // 0xff TObjFunc
	var_82_int = 513719; // 0x101 PushI
	var_83_int = -1; // 0x102 PushI
	var_84_int = 14985; // 0x103 PushI
	AddReply(var_82_int, var_83_int, var_84_int); // 0x104 TObjFunc
	var_85_int = 536133; // 0x106 PushI
	var_86_int = -1; // 0x107 PushI
	var_87_int = 37892; // 0x108 PushI
	AddReply(var_85_int, var_86_int, var_87_int); // 0x109 TObjFunc
	return 0; // 0x10b Return
	
Label_268:
	var_88_int = 4278; // 0x10c PushI
	var_89_bool = var_31_bool == var_88_int; // 0x10d Eq
	if(var_89_bool == 0) goto Label_296; // 0x10e JumpB
	var_90_string = ""; // 0x10f PushV
	var_90_string = "Love"; // 0x110 MovS
	func_178(var_32_cvector, var_90_string); // 0x111 NEW_2
	var_91_int = 503930; // 0x113 PushI
	SetMessage(var_91_int); // 0x114 TObjFunc
	ClearReplies(); // 0x116 TObjFunc
	var_92_int = 503931; // 0x118 PushI
	var_93_int = 4276; // 0x119 PushI
	var_94_int = 4279; // 0x11a PushI
	AddReply(var_92_int, var_93_int, var_94_int); // 0x11b TObjFunc
	var_95_int = 503932; // 0x11d PushI
	var_96_int = 4288; // 0x11e PushI
	var_97_int = 4280; // 0x11f PushI
	AddReply(var_95_int, var_96_int, var_97_int); // 0x120 TObjFunc
	var_98_int = 503933; // 0x122 PushI
	var_99_int = -1; // 0x123 PushI
	var_100_int = 4281; // 0x124 PushI
	AddReply(var_98_int, var_99_int, var_100_int); // 0x125 TObjFunc
	return 0; // 0x127 Return
	
Label_296:
	var_101_int = 4276; // 0x128 PushI
	var_102_bool = var_31_bool == var_101_int; // 0x129 Eq
	if(var_102_bool == 0) goto Label_319; // 0x12a JumpB
	var_103_string = ""; // 0x12b PushV
	var_103_string = "Modesty"; // 0x12c MovS
	func_178(var_32_cvector, var_103_string); // 0x12d NEW_2
	var_104_int = 503928; // 0x12f PushI
	SetMessage(var_104_int); // 0x130 TObjFunc
	ClearReplies(); // 0x132 TObjFunc
	var_105_int = 503937; // 0x134 PushI
	var_106_int = 4288; // 0x135 PushI
	var_107_int = 4286; // 0x136 PushI
	AddReply(var_105_int, var_106_int, var_107_int); // 0x137 TObjFunc
	var_108_int = 503938; // 0x139 PushI
	var_109_int = 4288; // 0x13a PushI
	var_110_int = 4287; // 0x13b PushI
	AddReply(var_108_int, var_109_int, var_110_int); // 0x13c TObjFunc
	return 0; // 0x13e Return
	
Label_319:
	var_111_int = 4288; // 0x13f PushI
	var_112_bool = var_31_bool == var_111_int; // 0x140 Eq
	if(var_112_bool == 0) goto Label_347; // 0x141 JumpB
	var_113_string = ""; // 0x142 PushV
	var_113_string = "Modesty"; // 0x143 MovS
	func_178(var_32_cvector, var_113_string); // 0x144 NEW_2
	var_114_int = 503939; // 0x146 PushI
	SetMessage(var_114_int); // 0x147 TObjFunc
	ClearReplies(); // 0x149 TObjFunc
	var_115_int = 503940; // 0x14b PushI
	var_116_int = 4297; // 0x14c PushI
	var_117_int = 4291; // 0x14d PushI
	AddReply(var_115_int, var_116_int, var_117_int); // 0x14e TObjFunc
	var_118_int = 503941; // 0x150 PushI
	var_119_int = 4294; // 0x151 PushI
	var_120_int = 4292; // 0x152 PushI
	AddReply(var_118_int, var_119_int, var_120_int); // 0x153 TObjFunc
	var_121_int = 503942; // 0x155 PushI
	var_122_int = -1; // 0x156 PushI
	var_123_int = 4293; // 0x157 PushI
	AddReply(var_121_int, var_122_int, var_123_int); // 0x158 TObjFunc
	return 0; // 0x15a Return
	
Label_347:
	var_124_int = 4294; // 0x15b PushI
	var_125_bool = var_31_bool == var_124_int; // 0x15c Eq
	if(var_125_bool == 0) goto Label_370; // 0x15d JumpB
	var_126_string = ""; // 0x15e PushV
	var_126_string = "Love"; // 0x15f MovS
	func_178(var_32_cvector, var_126_string); // 0x160 NEW_2
	var_127_int = 503943; // 0x162 PushI
	SetMessage(var_127_int); // 0x163 TObjFunc
	ClearReplies(); // 0x165 TObjFunc
	var_128_int = 503944; // 0x167 PushI
	var_129_int = -1; // 0x168 PushI
	var_130_int = 4295; // 0x169 PushI
	AddReply(var_128_int, var_129_int, var_130_int); // 0x16a TObjFunc
	var_131_int = 503945; // 0x16c PushI
	var_132_int = -1; // 0x16d PushI
	var_133_int = 4296; // 0x16e PushI
	AddReply(var_131_int, var_132_int, var_133_int); // 0x16f TObjFunc
	return 0; // 0x171 Return
	
Label_370:
	var_134_int = 4297; // 0x172 PushI
	var_135_bool = var_31_bool == var_134_int; // 0x173 Eq
	if(var_135_bool == 0) goto Label_393; // 0x174 JumpB
	var_136_string = ""; // 0x175 PushV
	var_136_string = "Modesty"; // 0x176 MovS
	func_178(var_32_cvector, var_136_string); // 0x177 NEW_2
	var_137_int = 503946; // 0x179 PushI
	SetMessage(var_137_int); // 0x17a TObjFunc
	ClearReplies(); // 0x17c TObjFunc
	var_138_int = 503947; // 0x17e PushI
	var_139_int = -1; // 0x17f PushI
	var_140_int = 4298; // 0x180 PushI
	AddReply(var_138_int, var_139_int, var_140_int); // 0x181 TObjFunc
	var_141_int = 503948; // 0x183 PushI
	var_142_int = -1; // 0x184 PushI
	var_143_int = 4299; // 0x185 PushI
	AddReply(var_141_int, var_142_int, var_143_int); // 0x186 TObjFunc
	return 0; // 0x188 Return
	
Label_393:
	var_3_string = 1; // 0x189 TMovB
	var_144_bool = 0; // 0x18a PushV
	func_4689(var_144_bool); // 0x18b NEW_2
	if(var_144_bool == 0) goto Label_401; // 0x18d JumpB
	lshStopAnimation(); // 0x18e Func
	goto Label_403; // 0x190 Jump
	
Label_403:
	return 0; // 0x193 Return
	
Label_401:
	StopAnimation(); // 0x191 Func
	
Label_405:
	return 0; // 0x195 Return
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_cvector)
{
	var_33_int = 1; // 0x2fb PushI
	if(var_33_int == 0) goto Label_2008; // 0x2fc JumpB
	func_4537(); // 0x2fe NEW_2
	var_35_int = 4900; // 0x300 PushI
	var_36_bool = var_32_cvector == var_35_int; // 0x301 Eq
	if(var_36_bool == 0) goto Label_786; // 0x302 JumpB
	var_37_object = Obj(); var_38_object = Obj(); // 0x303 PushV
	var_37_object = var_1_object; // 0x304 MovT
	var_38_object = var_0_object; // 0x305 MovT
	func_4898(); // 0x306 NEW_2
	var_49_object = Obj(); var_50_object = Obj(); // 0x308 PushV
	var_49_object = var_1_object; // 0x309 MovT
	var_50_object = var_0_object; // 0x30a MovT
	func_4905(); // 0x30b NEW_2
	var_77_object = Obj(); var_78_object = Obj(); // 0x30d PushV
	var_77_object = var_1_object; // 0x30e MovT
	var_78_object = var_0_object; // 0x30f MovT
	func_4810(); // 0x310 NEW_2
	
Label_786:
	var_103_int = 4915; // 0x312 PushI
	var_104_bool = var_32_cvector == var_103_int; // 0x313 Eq
	if(var_104_bool == 0) goto Label_804; // 0x314 JumpB
	var_105_object = Obj(); var_106_object = Obj(); // 0x315 PushV
	var_105_object = var_1_object; // 0x316 MovT
	var_106_object = var_0_object; // 0x317 MovT
	func_4898(); // 0x318 NEW_2
	var_107_object = Obj(); var_108_object = Obj(); // 0x31a PushV
	var_107_object = var_1_object; // 0x31b MovT
	var_108_object = var_0_object; // 0x31c MovT
	func_4905(); // 0x31d NEW_2
	var_109_object = Obj(); var_110_object = Obj(); // 0x31f PushV
	var_109_object = var_1_object; // 0x320 MovT
	var_110_object = var_0_object; // 0x321 MovT
	func_4810(); // 0x322 NEW_2
	
Label_804:
	var_111_int = 33775; // 0x324 PushI
	var_112_bool = var_32_cvector == var_111_int; // 0x325 Eq
	if(var_112_bool == 0) goto Label_817; // 0x326 JumpB
	var_113_object = Obj(); var_114_object = Obj(); // 0x327 PushV
	var_113_object = var_1_object; // 0x328 MovT
	var_114_object = var_0_object; // 0x329 MovT
	func_4697(); // 0x32a NEW_2
	var_164_object = Obj(); var_165_object = Obj(); // 0x32c PushV
	var_164_object = var_1_object; // 0x32d MovT
	var_165_object = var_0_object; // 0x32e MovT
	func_4945(); // 0x32f NEW_2
	
Label_817:
	var_171_int = 33778; // 0x331 PushI
	var_172_bool = var_32_cvector == var_171_int; // 0x332 Eq
	if(var_172_bool == 0) goto Label_830; // 0x333 JumpB
	var_173_object = Obj(); var_174_object = Obj(); // 0x334 PushV
	var_173_object = var_1_object; // 0x335 MovT
	var_174_object = var_0_object; // 0x336 MovT
	func_4697(); // 0x337 NEW_2
	var_175_object = Obj(); var_176_object = Obj(); // 0x339 PushV
	var_175_object = var_1_object; // 0x33a MovT
	var_176_object = var_0_object; // 0x33b MovT
	func_4945(); // 0x33c NEW_2
	
Label_830:
	var_177_int = 33344; // 0x33e PushI
	var_178_bool = var_32_cvector == var_177_int; // 0x33f Eq
	if(var_178_bool == 0) goto Label_838; // 0x340 JumpB
	var_179_object = Obj(); var_180_object = Obj(); // 0x341 PushV
	var_179_object = var_1_object; // 0x342 MovT
	var_180_object = var_0_object; // 0x343 MovT
	func_4967(); // 0x344 NEW_2
	
Label_838:
	var_183_int = 33346; // 0x346 PushI
	var_184_bool = var_32_cvector == var_183_int; // 0x347 Eq
	if(var_184_bool == 0) goto Label_851; // 0x348 JumpB
	var_185_object = Obj(); var_186_object = Obj(); // 0x349 PushV
	var_185_object = var_1_object; // 0x34a MovT
	var_186_object = var_0_object; // 0x34b MovT
	func_4744(); // 0x34c NEW_2
	var_195_object = Obj(); var_196_object = Obj(); // 0x34e PushV
	var_195_object = var_1_object; // 0x34f MovT
	var_196_object = var_0_object; // 0x350 MovT
	func_4760(); // 0x351 NEW_2
	
Label_851:
	var_202_int = 33899; // 0x353 PushI
	var_203_bool = var_32_cvector == var_202_int; // 0x354 Eq
	if(var_203_bool == 0) goto Label_859; // 0x355 JumpB
	var_204_object = Obj(); var_205_object = Obj(); // 0x356 PushV
	var_204_object = var_1_object; // 0x357 MovT
	var_205_object = var_0_object; // 0x358 MovT
	func_4776(); // 0x359 NEW_2
	
Label_859:
	var_208_int = 33901; // 0x35b PushI
	var_209_bool = var_32_cvector == var_208_int; // 0x35c Eq
	if(var_209_bool == 0) goto Label_882; // 0x35d JumpB
	var_210_object = Obj(); var_211_object = Obj(); // 0x35e PushV
	var_210_object = var_1_object; // 0x35f MovT
	var_211_object = var_0_object; // 0x360 MovT
	func_4782(var_211_object); // 0x361 NEW_2
	var_234_object = Obj(); var_235_object = Obj(); // 0x363 PushV
	var_234_object = var_1_object; // 0x364 MovT
	var_235_object = var_0_object; // 0x365 MovT
	func_4733(var_235_object); // 0x366 NEW_2
	var_240_object = Obj(); var_241_object = Obj(); // 0x368 PushV
	var_240_object = var_1_object; // 0x369 MovT
	var_241_object = var_0_object; // 0x36a MovT
	func_4793(var_241_object); // 0x36b NEW_2
	var_246_object = Obj(); var_247_object = Obj(); // 0x36d PushV
	var_246_object = var_1_object; // 0x36e MovT
	var_247_object = var_0_object; // 0x36f MovT
	func_4727(); // 0x370 NEW_2
	
Label_882:
	var_250_int = 35136; // 0x372 PushI
	var_251_bool = var_32_cvector == var_250_int; // 0x373 Eq
	if(var_251_bool == 0) goto Label_890; // 0x374 JumpB
	var_252_object = Obj(); var_253_object = Obj(); // 0x375 PushV
	var_252_object = var_1_object; // 0x376 MovT
	var_253_object = var_0_object; // 0x377 MovT
	func_4826(); // 0x378 NEW_2
	
Label_890:
	var_256_int = 4899; // 0x37a PushI
	var_257_bool = var_31_bool == var_256_int; // 0x37b Eq
	if(var_257_bool == 0) goto Label_1108; // 0x37c JumpB
	var_258_bool = 0; // 0x37d PushV
	var_258_bool = 0; // 0x37e MovB
	var_259_bool = 0; var_260_object = Obj(); // 0x37f PushV
	var_260_object = var_1_object; // 0x380 MovT
	func_5033(var_260_object); // 0x381 NEW_2
	if(var_259_bool == 0) goto Label_906; // 0x383 JumpB
	var_267_bool = 0; var_268_object = Obj(); // 0x384 PushV
	var_268_object = var_1_object; // 0x385 MovT
	func_5057(var_268_object); // 0x386 NEW_2
	if(var_267_bool == 0) goto Label_906; // 0x388 JumpB
	var_258_bool = 1; // 0x389 MovB
	
Label_906:
	if(var_258_bool == 0) goto Label_932; // 0x38a JumpB
	var_273_object = Obj(); var_274_object = Obj(); // 0x38b PushV
	var_273_object = var_1_object; // 0x38c MovT
	var_274_object = var_0_object; // 0x38d MovT
	func_4961(); // 0x38e NEW_2
	var_277_string = ""; // 0x390 PushV
	var_277_string = "Fear"; // 0x391 MovS
	func_740(var_32_cvector, var_277_string); // 0x392 NEW_2
	var_294_int = 504496; // 0x394 PushI
	SetMessage(var_294_int); // 0x395 TObjFunc
	ClearReplies(); // 0x397 TObjFunc
	var_295_int = 504521; // 0x399 PushI
	var_296_int = 22246; // 0x39a PushI
	var_297_int = 4928; // 0x39b PushI
	AddReply(var_295_int, var_296_int, var_297_int); // 0x39c TObjFunc
	var_298_int = 521059; // 0x39e PushI
	var_299_int = 22246; // 0x39f PushI
	var_300_int = 22250; // 0x3a0 PushI
	AddReply(var_298_int, var_299_int, var_300_int); // 0x3a1 TObjFunc
	return 0; // 0x3a3 Return
	
Label_932:
	var_301_bool = 0; // 0x3a4 PushV
	var_301_bool = 1; // 0x3a5 MovB
	var_302_bool = 0; // 0x3a6 PushV
	var_302_bool = 0; // 0x3a7 MovB
	var_303_bool = 0; // 0x3a8 PushV
	var_303_bool = 0; // 0x3a9 MovB
	var_304_bool = 0; var_305_object = Obj(); // 0x3aa PushV
	var_305_object = var_1_object; // 0x3ab MovT
	func_5369(var_305_object); // 0x3ac NEW_2
	if(var_304_bool == 0) goto Label_949; // 0x3ae JumpB
	var_310_bool = 0; var_311_object = Obj(); // 0x3af PushV
	var_311_object = var_1_object; // 0x3b0 MovT
	func_5141(var_311_object); // 0x3b1 NEW_2
	if(var_310_bool == 0) goto Label_949; // 0x3b3 JumpB
	var_303_bool = 1; // 0x3b4 MovB
	
Label_949:
	if(var_303_bool == 0) goto Label_956; // 0x3b5 JumpB
	var_316_bool = 0; var_317_object = Obj(); // 0x3b6 PushV
	var_317_object = var_1_object; // 0x3b7 MovT
	func_5057(var_317_object); // 0x3b8 NEW_2
	if(var_316_bool == 0) goto Label_956; // 0x3ba JumpB
	var_302_bool = 1; // 0x3bb MovB
	
Label_956:
	if(var_302_bool == 0) goto Label_981; // 0x3bc JumpB
	var_318_bool = 0; // 0x3bd PushV
	var_318_bool = 0; // 0x3be MovB
	var_319_bool = 0; // 0x3bf PushV
	var_319_bool = 0; // 0x3c0 MovB
	var_320_bool = 0; var_321_object = Obj(); // 0x3c1 PushV
	var_321_object = var_1_object; // 0x3c2 MovT
	func_5369(var_321_object); // 0x3c3 NEW_2
	if(var_320_bool == 0) goto Label_972; // 0x3c5 JumpB
	var_322_bool = 0; var_323_object = Obj(); // 0x3c6 PushV
	var_323_object = var_1_object; // 0x3c7 MovT
	func_5105(var_323_object); // 0x3c8 NEW_2
	if(var_322_bool == 0) goto Label_972; // 0x3ca JumpB
	var_319_bool = 1; // 0x3cb MovB
	
Label_972:
	if(var_319_bool == 0) goto Label_979; // 0x3cc JumpB
	var_328_bool = 0; var_329_object = Obj(); // 0x3cd PushV
	var_329_object = var_1_object; // 0x3ce MovT
	func_5057(var_329_object); // 0x3cf NEW_2
	if(var_328_bool == 0) goto Label_979; // 0x3d1 JumpB
	var_318_bool = 1; // 0x3d2 MovB
	
Label_979:
	if(var_318_bool == 0) goto Label_981; // 0x3d3 JumpB
	var_301_bool = 0; // 0x3d4 MovB
	
Label_981:
	if(var_301_bool == 0) goto Label_1007; // 0x3d5 JumpB
	var_330_object = Obj(); var_331_object = Obj(); // 0x3d6 PushV
	var_330_object = var_1_object; // 0x3d7 MovT
	var_331_object = var_0_object; // 0x3d8 MovT
	func_4691(); // 0x3d9 NEW_2
	var_334_string = ""; // 0x3db PushV
	var_334_string = "Neutral"; // 0x3dc MovS
	func_740(var_32_cvector, var_334_string); // 0x3dd NEW_2
	var_335_int = 532343; // 0x3df PushI
	SetMessage(var_335_int); // 0x3e0 TObjFunc
	ClearReplies(); // 0x3e2 TObjFunc
	var_336_int = 533604; // 0x3e4 PushI
	var_337_int = 35125; // 0x3e5 PushI
	var_338_int = 35124; // 0x3e6 PushI
	AddReply(var_336_int, var_337_int, var_338_int); // 0x3e7 TObjFunc
	var_339_int = 533608; // 0x3e9 PushI
	var_340_int = 35129; // 0x3ea PushI
	var_341_int = 35128; // 0x3eb PushI
	AddReply(var_339_int, var_340_int, var_341_int); // 0x3ec TObjFunc
	return 0; // 0x3ee Return
	
Label_1007:
	var_342_string = ""; // 0x3ef PushV
	var_342_string = "Neutral"; // 0x3f0 MovS
	func_740(var_32_cvector, var_342_string); // 0x3f1 NEW_2
	var_343_int = 521052; // 0x3f3 PushI
	SetMessage(var_343_int); // 0x3f4 TObjFunc
	ClearReplies(); // 0x3f6 TObjFunc
	var_344_bool = 0; // 0x3f8 PushV
	var_344_bool = 0; // 0x3f9 MovB
	var_345_bool = 0; // 0x3fa PushV
	var_345_bool = 0; // 0x3fb MovB
	var_346_bool = 0; var_347_object = Obj(); // 0x3fc PushV
	var_347_object = var_1_object; // 0x3fd MovT
	func_5117(var_347_object); // 0x3fe NEW_2
	if(var_346_bool == 0) goto Label_1031; // 0x400 JumpB
	var_352_bool = 0; var_353_object = Obj(); // 0x401 PushV
	var_353_object = var_1_object; // 0x402 MovT
	func_5177(var_353_object); // 0x403 NEW_2
	if(var_352_bool == 0) goto Label_1031; // 0x405 JumpB
	var_345_bool = 1; // 0x406 MovB
	
Label_1031:
	if(var_345_bool == 0) goto Label_1038; // 0x407 JumpB
	var_358_bool = 0; var_359_object = Obj(); // 0x408 PushV
	var_359_object = var_1_object; // 0x409 MovT
	func_5069(var_359_object); // 0x40a NEW_2
	if(var_358_bool == 0) goto Label_1038; // 0x40c JumpB
	var_344_bool = 1; // 0x40d MovB
	
Label_1038:
	if(var_344_bool == 0) goto Label_1044; // 0x40e JumpB
	var_364_int = 531940; // 0x40f PushI
	var_365_int = 33345; // 0x410 PushI
	var_366_int = 33344; // 0x411 PushI
	AddReply(var_364_int, var_365_int, var_366_int); // 0x412 TObjFunc
	
Label_1044:
	var_367_bool = 0; // 0x414 PushV
	var_367_bool = 0; // 0x415 MovB
	var_368_bool = 0; // 0x416 PushV
	var_368_bool = 0; // 0x417 MovB
	var_369_bool = 0; var_370_object = Obj(); // 0x418 PushV
	var_370_object = var_1_object; // 0x419 MovT
	func_5081(var_370_object); // 0x41a NEW_2
	if(var_369_bool == 0) goto Label_1059; // 0x41c JumpB
	var_375_bool = 0; var_376_object = Obj(); // 0x41d PushV
	var_376_object = var_1_object; // 0x41e MovT
	func_5129(var_376_object); // 0x41f NEW_2
	if(var_375_bool == 0) goto Label_1059; // 0x421 JumpB
	var_368_bool = 1; // 0x422 MovB
	
Label_1059:
	if(var_368_bool == 0) goto Label_1066; // 0x423 JumpB
	var_381_bool = 0; var_382_object = Obj(); // 0x424 PushV
	var_382_object = var_1_object; // 0x425 MovT
	func_5069(var_382_object); // 0x426 NEW_2
	if(var_381_bool == 0) goto Label_1066; // 0x428 JumpB
	var_367_bool = 1; // 0x429 MovB
	
Label_1066:
	if(var_367_bool == 0) goto Label_1072; // 0x42a JumpB
	var_383_int = 532458; // 0x42b PushI
	var_384_int = 33900; // 0x42c PushI
	var_385_int = 33899; // 0x42d PushI
	AddReply(var_383_int, var_384_int, var_385_int); // 0x42e TObjFunc
	
Label_1072:
	var_386_bool = 0; // 0x430 PushV
	var_386_bool = 0; // 0x431 MovB
	var_387_bool = 0; var_388_object = Obj(); // 0x432 PushV
	var_388_object = var_1_object; // 0x433 MovT
	func_5153(var_388_object); // 0x434 NEW_2
	if(var_387_bool == 0) goto Label_1085; // 0x436 JumpB
	var_393_bool = 0; var_394_object = Obj(); // 0x437 PushV
	var_394_object = var_1_object; // 0x438 MovT
	func_5093(var_394_object); // 0x439 NEW_2
	if(var_393_bool == 0) goto Label_1085; // 0x43b JumpB
	var_386_bool = 1; // 0x43c MovB
	
Label_1085:
	if(var_386_bool == 0) goto Label_1091; // 0x43d JumpB
	var_399_int = 533614; // 0x43e PushI
	var_400_int = 35137; // 0x43f PushI
	var_401_int = 35136; // 0x440 PushI
	AddReply(var_399_int, var_400_int, var_401_int); // 0x441 TObjFunc
	
Label_1091:
	var_402_bool = 0; var_403_object = Obj(); // 0x443 PushV
	var_403_object = var_1_object; // 0x444 MovT
	func_5045(var_403_object); // 0x445 NEW_2
	var_408_bool = var_402_bool == 0; // 0x447 Not
	if(var_408_bool == 0) goto Label_1102; // 0x448 JumpB
	var_409_int = 521053; // 0x449 PushI
	var_410_int = -1; // 0x44a PushI
	var_411_int = 22244; // 0x44b PushI
	AddReply(var_409_int, var_410_int, var_411_int); // 0x44c TObjFunc
	
Label_1102:
	var_412_int = 521054; // 0x44e PushI
	var_413_int = -1; // 0x44f PushI
	var_414_int = 22245; // 0x450 PushI
	AddReply(var_412_int, var_413_int, var_414_int); // 0x451 TObjFunc
	return 0; // 0x453 Return
	
Label_1108:
	var_415_int = 35137; // 0x454 PushI
	var_416_bool = var_31_bool == var_415_int; // 0x455 Eq
	if(var_416_bool == 0) goto Label_1131; // 0x456 JumpB
	var_417_string = ""; // 0x457 PushV
	var_417_string = "Modesty"; // 0x458 MovS
	func_740(var_32_cvector, var_417_string); // 0x459 NEW_2
	var_418_int = 533615; // 0x45b PushI
	SetMessage(var_418_int); // 0x45c TObjFunc
	ClearReplies(); // 0x45e TObjFunc
	var_419_int = 533616; // 0x460 PushI
	var_420_int = 35140; // 0x461 PushI
	var_421_int = 35138; // 0x462 PushI
	AddReply(var_419_int, var_420_int, var_421_int); // 0x463 TObjFunc
	var_422_int = 533617; // 0x465 PushI
	var_423_int = -1; // 0x466 PushI
	var_424_int = 35139; // 0x467 PushI
	AddReply(var_422_int, var_423_int, var_424_int); // 0x468 TObjFunc
	return 0; // 0x46a Return
	
Label_1131:
	var_425_int = 35140; // 0x46b PushI
	var_426_bool = var_31_bool == var_425_int; // 0x46c Eq
	if(var_426_bool == 0) goto Label_1149; // 0x46d JumpB
	var_427_string = ""; // 0x46e PushV
	var_427_string = "Modesty"; // 0x46f MovS
	func_740(var_32_cvector, var_427_string); // 0x470 NEW_2
	var_428_int = 533618; // 0x472 PushI
	SetMessage(var_428_int); // 0x473 TObjFunc
	ClearReplies(); // 0x475 TObjFunc
	var_429_int = 533619; // 0x477 PushI
	var_430_int = 35142; // 0x478 PushI
	var_431_int = 35141; // 0x479 PushI
	AddReply(var_429_int, var_430_int, var_431_int); // 0x47a TObjFunc
	return 0; // 0x47c Return
	
Label_1149:
	var_432_int = 35142; // 0x47d PushI
	var_433_bool = var_31_bool == var_432_int; // 0x47e Eq
	if(var_433_bool == 0) goto Label_1172; // 0x47f JumpB
	var_434_string = ""; // 0x480 PushV
	var_434_string = "Modesty"; // 0x481 MovS
	func_740(var_32_cvector, var_434_string); // 0x482 NEW_2
	var_435_int = 533620; // 0x484 PushI
	SetMessage(var_435_int); // 0x485 TObjFunc
	ClearReplies(); // 0x487 TObjFunc
	var_436_int = 533621; // 0x489 PushI
	var_437_int = 35144; // 0x48a PushI
	var_438_int = 35143; // 0x48b PushI
	AddReply(var_436_int, var_437_int, var_438_int); // 0x48c TObjFunc
	var_439_int = 533624; // 0x48e PushI
	var_440_int = 35147; // 0x48f PushI
	var_441_int = 35146; // 0x490 PushI
	AddReply(var_439_int, var_440_int, var_441_int); // 0x491 TObjFunc
	return 0; // 0x493 Return
	
Label_1172:
	var_442_int = 35147; // 0x494 PushI
	var_443_bool = var_31_bool == var_442_int; // 0x495 Eq
	if(var_443_bool == 0) goto Label_1195; // 0x496 JumpB
	var_444_string = ""; // 0x497 PushV
	var_444_string = "Love"; // 0x498 MovS
	func_740(var_32_cvector, var_444_string); // 0x499 NEW_2
	var_445_int = 533625; // 0x49b PushI
	SetMessage(var_445_int); // 0x49c TObjFunc
	ClearReplies(); // 0x49e TObjFunc
	var_446_int = 533626; // 0x4a0 PushI
	var_447_int = 35150; // 0x4a1 PushI
	var_448_int = 35148; // 0x4a2 PushI
	AddReply(var_446_int, var_447_int, var_448_int); // 0x4a3 TObjFunc
	var_449_int = 533627; // 0x4a5 PushI
	var_450_int = -1; // 0x4a6 PushI
	var_451_int = 35149; // 0x4a7 PushI
	AddReply(var_449_int, var_450_int, var_451_int); // 0x4a8 TObjFunc
	return 0; // 0x4aa Return
	
Label_1195:
	var_452_int = 35144; // 0x4ab PushI
	var_453_bool = var_31_bool == var_452_int; // 0x4ac Eq
	if(var_453_bool == 0) goto Label_1218; // 0x4ad JumpB
	var_454_string = ""; // 0x4ae PushV
	var_454_string = "Love"; // 0x4af MovS
	func_740(var_32_cvector, var_454_string); // 0x4b0 NEW_2
	var_455_int = 533622; // 0x4b2 PushI
	SetMessage(var_455_int); // 0x4b3 TObjFunc
	ClearReplies(); // 0x4b5 TObjFunc
	var_456_int = 533623; // 0x4b7 PushI
	var_457_int = 35150; // 0x4b8 PushI
	var_458_int = 35145; // 0x4b9 PushI
	AddReply(var_456_int, var_457_int, var_458_int); // 0x4ba TObjFunc
	var_459_int = 533637; // 0x4bc PushI
	var_460_int = -1; // 0x4bd PushI
	var_461_int = 35161; // 0x4be PushI
	AddReply(var_459_int, var_460_int, var_461_int); // 0x4bf TObjFunc
	return 0; // 0x4c1 Return
	
Label_1218:
	var_462_int = 35150; // 0x4c2 PushI
	var_463_bool = var_31_bool == var_462_int; // 0x4c3 Eq
	if(var_463_bool == 0) goto Label_1241; // 0x4c4 JumpB
	var_464_string = ""; // 0x4c5 PushV
	var_464_string = "Love"; // 0x4c6 MovS
	func_740(var_32_cvector, var_464_string); // 0x4c7 NEW_2
	var_465_int = 533628; // 0x4c9 PushI
	SetMessage(var_465_int); // 0x4ca TObjFunc
	ClearReplies(); // 0x4cc TObjFunc
	var_466_int = 533629; // 0x4ce PushI
	var_467_int = 35154; // 0x4cf PushI
	var_468_int = 35152; // 0x4d0 PushI
	AddReply(var_466_int, var_467_int, var_468_int); // 0x4d1 TObjFunc
	var_469_int = 533630; // 0x4d3 PushI
	var_470_int = 35157; // 0x4d4 PushI
	var_471_int = 35153; // 0x4d5 PushI
	AddReply(var_469_int, var_470_int, var_471_int); // 0x4d6 TObjFunc
	return 0; // 0x4d8 Return
	
Label_1241:
	var_472_int = 35154; // 0x4d9 PushI
	var_473_bool = var_31_bool == var_472_int; // 0x4da Eq
	if(var_473_bool == 0) goto Label_1264; // 0x4db JumpB
	var_474_string = ""; // 0x4dc PushV
	var_474_string = "Love"; // 0x4dd MovS
	func_740(var_32_cvector, var_474_string); // 0x4de NEW_2
	var_475_int = 533631; // 0x4e0 PushI
	SetMessage(var_475_int); // 0x4e1 TObjFunc
	ClearReplies(); // 0x4e3 TObjFunc
	var_476_int = 533632; // 0x4e5 PushI
	var_477_int = 35157; // 0x4e6 PushI
	var_478_int = 35155; // 0x4e7 PushI
	AddReply(var_476_int, var_477_int, var_478_int); // 0x4e8 TObjFunc
	var_479_int = 533633; // 0x4ea PushI
	var_480_int = -1; // 0x4eb PushI
	var_481_int = 35156; // 0x4ec PushI
	AddReply(var_479_int, var_480_int, var_481_int); // 0x4ed TObjFunc
	return 0; // 0x4ef Return
	
Label_1264:
	var_482_int = 35157; // 0x4f0 PushI
	var_483_bool = var_31_bool == var_482_int; // 0x4f1 Eq
	if(var_483_bool == 0) goto Label_1287; // 0x4f2 JumpB
	var_484_string = ""; // 0x4f3 PushV
	var_484_string = "Neutral"; // 0x4f4 MovS
	func_740(var_32_cvector, var_484_string); // 0x4f5 NEW_2
	var_485_int = 533634; // 0x4f7 PushI
	SetMessage(var_485_int); // 0x4f8 TObjFunc
	ClearReplies(); // 0x4fa TObjFunc
	var_486_int = 533635; // 0x4fc PushI
	var_487_int = -1; // 0x4fd PushI
	var_488_int = 35158; // 0x4fe PushI
	AddReply(var_486_int, var_487_int, var_488_int); // 0x4ff TObjFunc
	var_489_int = 533636; // 0x501 PushI
	var_490_int = -1; // 0x502 PushI
	var_491_int = 35159; // 0x503 PushI
	AddReply(var_489_int, var_490_int, var_491_int); // 0x504 TObjFunc
	return 0; // 0x506 Return
	
Label_1287:
	var_492_int = 33900; // 0x507 PushI
	var_493_bool = var_31_bool == var_492_int; // 0x508 Eq
	if(var_493_bool == 0) goto Label_1305; // 0x509 JumpB
	var_494_string = ""; // 0x50a PushV
	var_494_string = "Neutral"; // 0x50b MovS
	func_740(var_32_cvector, var_494_string); // 0x50c NEW_2
	var_495_int = 532459; // 0x50e PushI
	SetMessage(var_495_int); // 0x50f TObjFunc
	ClearReplies(); // 0x511 TObjFunc
	var_496_int = 532460; // 0x513 PushI
	var_497_int = -1; // 0x514 PushI
	var_498_int = 33901; // 0x515 PushI
	AddReply(var_496_int, var_497_int, var_498_int); // 0x516 TObjFunc
	return 0; // 0x518 Return
	
Label_1305:
	var_499_int = 33345; // 0x519 PushI
	var_500_bool = var_31_bool == var_499_int; // 0x51a Eq
	if(var_500_bool == 0) goto Label_1323; // 0x51b JumpB
	var_501_string = ""; // 0x51c PushV
	var_501_string = "Modesty"; // 0x51d MovS
	func_740(var_32_cvector, var_501_string); // 0x51e NEW_2
	var_502_int = 531941; // 0x520 PushI
	SetMessage(var_502_int); // 0x521 TObjFunc
	ClearReplies(); // 0x523 TObjFunc
	var_503_int = 531942; // 0x525 PushI
	var_504_int = -1; // 0x526 PushI
	var_505_int = 33346; // 0x527 PushI
	AddReply(var_503_int, var_504_int, var_505_int); // 0x528 TObjFunc
	return 0; // 0x52a Return
	
Label_1323:
	var_506_int = 36764; // 0x52b PushI
	var_507_bool = var_31_bool == var_506_int; // 0x52c Eq
	if(var_507_bool == 0) goto Label_1326; // 0x52d JumpB
	
Label_1326:
	var_508_int = 36766; // 0x52e PushI
	var_509_bool = var_31_bool == var_508_int; // 0x52f Eq
	if(var_509_bool == 0) goto Label_1349; // 0x530 JumpB
	var_510_string = ""; // 0x531 PushV
	var_510_string = "Love"; // 0x532 MovS
	func_740(var_32_cvector, var_510_string); // 0x533 NEW_2
	var_511_int = 535110; // 0x535 PushI
	SetMessage(var_511_int); // 0x536 TObjFunc
	ClearReplies(); // 0x538 TObjFunc
	var_512_int = 535111; // 0x53a PushI
	var_513_int = 36768; // 0x53b PushI
	var_514_int = 36767; // 0x53c PushI
	AddReply(var_512_int, var_513_int, var_514_int); // 0x53d TObjFunc
	var_515_int = 535122; // 0x53f PushI
	var_516_int = 36774; // 0x540 PushI
	var_517_int = 36778; // 0x541 PushI
	AddReply(var_515_int, var_516_int, var_517_int); // 0x542 TObjFunc
	return 0; // 0x544 Return
	
Label_1349:
	var_518_int = 36774; // 0x545 PushI
	var_519_bool = var_31_bool == var_518_int; // 0x546 Eq
	if(var_519_bool == 0) goto Label_1372; // 0x547 JumpB
	var_520_string = ""; // 0x548 PushV
	var_520_string = "Love"; // 0x549 MovS
	func_740(var_32_cvector, var_520_string); // 0x54a NEW_2
	var_521_int = 535118; // 0x54c PushI
	SetMessage(var_521_int); // 0x54d TObjFunc
	ClearReplies(); // 0x54f TObjFunc
	var_522_int = 535119; // 0x551 PushI
	var_523_int = 36768; // 0x552 PushI
	var_524_int = 36775; // 0x553 PushI
	AddReply(var_522_int, var_523_int, var_524_int); // 0x554 TObjFunc
	var_525_int = 535123; // 0x556 PushI
	var_526_int = -1; // 0x557 PushI
	var_527_int = 36780; // 0x558 PushI
	AddReply(var_525_int, var_526_int, var_527_int); // 0x559 TObjFunc
	return 0; // 0x55b Return
	
Label_1372:
	var_528_int = 36768; // 0x55c PushI
	var_529_bool = var_31_bool == var_528_int; // 0x55d Eq
	if(var_529_bool == 0) goto Label_1390; // 0x55e JumpB
	var_530_string = ""; // 0x55f PushV
	var_530_string = "Love"; // 0x560 MovS
	func_740(var_32_cvector, var_530_string); // 0x561 NEW_2
	var_531_int = 535112; // 0x563 PushI
	SetMessage(var_531_int); // 0x564 TObjFunc
	ClearReplies(); // 0x566 TObjFunc
	var_532_int = 535113; // 0x568 PushI
	var_533_int = 36770; // 0x569 PushI
	var_534_int = 36769; // 0x56a PushI
	AddReply(var_532_int, var_533_int, var_534_int); // 0x56b TObjFunc
	return 0; // 0x56d Return
	
Label_1390:
	var_535_int = 36770; // 0x56e PushI
	var_536_bool = var_31_bool == var_535_int; // 0x56f Eq
	if(var_536_bool == 0) goto Label_1408; // 0x570 JumpB
	var_537_string = ""; // 0x571 PushV
	var_537_string = "Modesty"; // 0x572 MovS
	func_740(var_32_cvector, var_537_string); // 0x573 NEW_2
	var_538_int = 535114; // 0x575 PushI
	SetMessage(var_538_int); // 0x576 TObjFunc
	ClearReplies(); // 0x578 TObjFunc
	var_539_int = 535115; // 0x57a PushI
	var_540_int = 36772; // 0x57b PushI
	var_541_int = 36771; // 0x57c PushI
	AddReply(var_539_int, var_540_int, var_541_int); // 0x57d TObjFunc
	return 0; // 0x57f Return
	
Label_1408:
	var_542_int = 36772; // 0x580 PushI
	var_543_bool = var_31_bool == var_542_int; // 0x581 Eq
	if(var_543_bool == 0) goto Label_1431; // 0x582 JumpB
	var_544_string = ""; // 0x583 PushV
	var_544_string = "Modesty"; // 0x584 MovS
	func_740(var_32_cvector, var_544_string); // 0x585 NEW_2
	var_545_int = 535116; // 0x587 PushI
	SetMessage(var_545_int); // 0x588 TObjFunc
	ClearReplies(); // 0x58a TObjFunc
	var_546_int = 535117; // 0x58c PushI
	var_547_int = -1; // 0x58d PushI
	var_548_int = 36773; // 0x58e PushI
	AddReply(var_546_int, var_547_int, var_548_int); // 0x58f TObjFunc
	var_549_int = 535121; // 0x591 PushI
	var_550_int = -1; // 0x592 PushI
	var_551_int = 36777; // 0x593 PushI
	AddReply(var_549_int, var_550_int, var_551_int); // 0x594 TObjFunc
	return 0; // 0x596 Return
	
Label_1431:
	var_552_int = 36805; // 0x597 PushI
	var_553_bool = var_31_bool == var_552_int; // 0x598 Eq
	if(var_553_bool == 0) goto Label_1434; // 0x599 JumpB
	
Label_1434:
	var_554_int = 36807; // 0x59a PushI
	var_555_bool = var_31_bool == var_554_int; // 0x59b Eq
	if(var_555_bool == 0) goto Label_1457; // 0x59c JumpB
	var_556_string = ""; // 0x59d PushV
	var_556_string = "Love"; // 0x59e MovS
	func_740(var_32_cvector, var_556_string); // 0x59f NEW_2
	var_557_int = 535146; // 0x5a1 PushI
	SetMessage(var_557_int); // 0x5a2 TObjFunc
	ClearReplies(); // 0x5a4 TObjFunc
	var_558_int = 535147; // 0x5a6 PushI
	var_559_int = 36809; // 0x5a7 PushI
	var_560_int = 36808; // 0x5a8 PushI
	AddReply(var_558_int, var_559_int, var_560_int); // 0x5a9 TObjFunc
	var_561_int = 535152; // 0x5ab PushI
	var_562_int = 36814; // 0x5ac PushI
	var_563_int = 36813; // 0x5ad PushI
	AddReply(var_561_int, var_562_int, var_563_int); // 0x5ae TObjFunc
	return 0; // 0x5b0 Return
	
Label_1457:
	var_564_int = 36814; // 0x5b1 PushI
	var_565_bool = var_31_bool == var_564_int; // 0x5b2 Eq
	if(var_565_bool == 0) goto Label_1480; // 0x5b3 JumpB
	var_566_string = ""; // 0x5b4 PushV
	var_566_string = "Sexy"; // 0x5b5 MovS
	func_740(var_32_cvector, var_566_string); // 0x5b6 NEW_2
	var_567_int = 535153; // 0x5b8 PushI
	SetMessage(var_567_int); // 0x5b9 TObjFunc
	ClearReplies(); // 0x5bb TObjFunc
	var_568_int = 535154; // 0x5bd PushI
	var_569_int = 36816; // 0x5be PushI
	var_570_int = 36815; // 0x5bf PushI
	AddReply(var_568_int, var_569_int, var_570_int); // 0x5c0 TObjFunc
	var_571_int = 535156; // 0x5c2 PushI
	var_572_int = 36816; // 0x5c3 PushI
	var_573_int = 36817; // 0x5c4 PushI
	AddReply(var_571_int, var_572_int, var_573_int); // 0x5c5 TObjFunc
	return 0; // 0x5c7 Return
	
Label_1480:
	var_574_int = 36816; // 0x5c8 PushI
	var_575_bool = var_31_bool == var_574_int; // 0x5c9 Eq
	if(var_575_bool == 0) goto Label_1498; // 0x5ca JumpB
	var_576_string = ""; // 0x5cb PushV
	var_576_string = "Sexy"; // 0x5cc MovS
	func_740(var_32_cvector, var_576_string); // 0x5cd NEW_2
	var_577_int = 535155; // 0x5cf PushI
	SetMessage(var_577_int); // 0x5d0 TObjFunc
	ClearReplies(); // 0x5d2 TObjFunc
	var_578_int = 535157; // 0x5d4 PushI
	var_579_int = 36811; // 0x5d5 PushI
	var_580_int = 36819; // 0x5d6 PushI
	AddReply(var_578_int, var_579_int, var_580_int); // 0x5d7 TObjFunc
	return 0; // 0x5d9 Return
	
Label_1498:
	var_581_int = 36809; // 0x5da PushI
	var_582_bool = var_31_bool == var_581_int; // 0x5db Eq
	if(var_582_bool == 0) goto Label_1516; // 0x5dc JumpB
	var_583_string = ""; // 0x5dd PushV
	var_583_string = "Neutral"; // 0x5de MovS
	func_740(var_32_cvector, var_583_string); // 0x5df NEW_2
	var_584_int = 535148; // 0x5e1 PushI
	SetMessage(var_584_int); // 0x5e2 TObjFunc
	ClearReplies(); // 0x5e4 TObjFunc
	var_585_int = 535149; // 0x5e6 PushI
	var_586_int = 36811; // 0x5e7 PushI
	var_587_int = 36810; // 0x5e8 PushI
	AddReply(var_585_int, var_586_int, var_587_int); // 0x5e9 TObjFunc
	return 0; // 0x5eb Return
	
Label_1516:
	var_588_int = 36811; // 0x5ec PushI
	var_589_bool = var_31_bool == var_588_int; // 0x5ed Eq
	if(var_589_bool == 0) goto Label_1539; // 0x5ee JumpB
	var_590_string = ""; // 0x5ef PushV
	var_590_string = "Neutral"; // 0x5f0 MovS
	func_740(var_32_cvector, var_590_string); // 0x5f1 NEW_2
	var_591_int = 535150; // 0x5f3 PushI
	SetMessage(var_591_int); // 0x5f4 TObjFunc
	ClearReplies(); // 0x5f6 TObjFunc
	var_592_int = 535151; // 0x5f8 PushI
	var_593_int = 36821; // 0x5f9 PushI
	var_594_int = 36812; // 0x5fa PushI
	AddReply(var_592_int, var_593_int, var_594_int); // 0x5fb TObjFunc
	var_595_int = 535166; // 0x5fd PushI
	var_596_int = 36831; // 0x5fe PushI
	var_597_int = 36830; // 0x5ff PushI
	AddReply(var_595_int, var_596_int, var_597_int); // 0x600 TObjFunc
	return 0; // 0x602 Return
	
Label_1539:
	var_598_int = 36831; // 0x603 PushI
	var_599_bool = var_31_bool == var_598_int; // 0x604 Eq
	if(var_599_bool == 0) goto Label_1553; // 0x605 JumpB
	var_600_int = 535167; // 0x606 PushI
	SetMessage(var_600_int); // 0x607 TObjFunc
	ClearReplies(); // 0x609 TObjFunc
	var_601_int = 535168; // 0x60b PushI
	var_602_int = 36823; // 0x60c PushI
	var_603_int = 36832; // 0x60d PushI
	AddReply(var_601_int, var_602_int, var_603_int); // 0x60e TObjFunc
	return 0; // 0x610 Return
	
Label_1553:
	var_604_int = 36821; // 0x611 PushI
	var_605_bool = var_31_bool == var_604_int; // 0x612 Eq
	if(var_605_bool == 0) goto Label_1576; // 0x613 JumpB
	var_606_string = ""; // 0x614 PushV
	var_606_string = "Modesty"; // 0x615 MovS
	func_740(var_32_cvector, var_606_string); // 0x616 NEW_2
	var_607_int = 535158; // 0x618 PushI
	SetMessage(var_607_int); // 0x619 TObjFunc
	ClearReplies(); // 0x61b TObjFunc
	var_608_int = 535159; // 0x61d PushI
	var_609_int = 36823; // 0x61e PushI
	var_610_int = 36822; // 0x61f PushI
	AddReply(var_608_int, var_609_int, var_610_int); // 0x620 TObjFunc
	var_611_int = 535165; // 0x622 PushI
	var_612_int = -1; // 0x623 PushI
	var_613_int = 36828; // 0x624 PushI
	AddReply(var_611_int, var_612_int, var_613_int); // 0x625 TObjFunc
	return 0; // 0x627 Return
	
Label_1576:
	var_614_int = 36823; // 0x628 PushI
	var_615_bool = var_31_bool == var_614_int; // 0x629 Eq
	if(var_615_bool == 0) goto Label_1594; // 0x62a JumpB
	var_616_string = ""; // 0x62b PushV
	var_616_string = "Modesty"; // 0x62c MovS
	func_740(var_32_cvector, var_616_string); // 0x62d NEW_2
	var_617_int = 535160; // 0x62f PushI
	SetMessage(var_617_int); // 0x630 TObjFunc
	ClearReplies(); // 0x632 TObjFunc
	var_618_int = 535161; // 0x634 PushI
	var_619_int = 36825; // 0x635 PushI
	var_620_int = 36824; // 0x636 PushI
	AddReply(var_618_int, var_619_int, var_620_int); // 0x637 TObjFunc
	return 0; // 0x639 Return
	
Label_1594:
	var_621_int = 36825; // 0x63a PushI
	var_622_bool = var_31_bool == var_621_int; // 0x63b Eq
	if(var_622_bool == 0) goto Label_1617; // 0x63c JumpB
	var_623_string = ""; // 0x63d PushV
	var_623_string = "Modesty"; // 0x63e MovS
	func_740(var_32_cvector, var_623_string); // 0x63f NEW_2
	var_624_int = 535162; // 0x641 PushI
	SetMessage(var_624_int); // 0x642 TObjFunc
	ClearReplies(); // 0x644 TObjFunc
	var_625_int = 535163; // 0x646 PushI
	var_626_int = -1; // 0x647 PushI
	var_627_int = 36826; // 0x648 PushI
	AddReply(var_625_int, var_626_int, var_627_int); // 0x649 TObjFunc
	var_628_int = 535164; // 0x64b PushI
	var_629_int = -1; // 0x64c PushI
	var_630_int = 36827; // 0x64d PushI
	AddReply(var_628_int, var_629_int, var_630_int); // 0x64e TObjFunc
	return 0; // 0x650 Return
	
Label_1617:
	var_631_int = 35129; // 0x651 PushI
	var_632_bool = var_31_bool == var_631_int; // 0x652 Eq
	if(var_632_bool == 0) goto Label_1635; // 0x653 JumpB
	var_633_string = ""; // 0x654 PushV
	var_633_string = "Neutral"; // 0x655 MovS
	func_740(var_32_cvector, var_633_string); // 0x656 NEW_2
	var_634_int = 533609; // 0x658 PushI
	SetMessage(var_634_int); // 0x659 TObjFunc
	ClearReplies(); // 0x65b TObjFunc
	var_635_int = 533610; // 0x65d PushI
	var_636_int = 35125; // 0x65e PushI
	var_637_int = 35130; // 0x65f PushI
	AddReply(var_635_int, var_636_int, var_637_int); // 0x660 TObjFunc
	return 0; // 0x662 Return
	
Label_1635:
	var_638_int = 35125; // 0x663 PushI
	var_639_bool = var_31_bool == var_638_int; // 0x664 Eq
	if(var_639_bool == 0) goto Label_1658; // 0x665 JumpB
	var_640_string = ""; // 0x666 PushV
	var_640_string = "Neutral"; // 0x667 MovS
	func_740(var_32_cvector, var_640_string); // 0x668 NEW_2
	var_641_int = 533605; // 0x66a PushI
	SetMessage(var_641_int); // 0x66b TObjFunc
	ClearReplies(); // 0x66d TObjFunc
	var_642_int = 533606; // 0x66f PushI
	var_643_int = 35127; // 0x670 PushI
	var_644_int = 35126; // 0x671 PushI
	AddReply(var_642_int, var_643_int, var_644_int); // 0x672 TObjFunc
	var_645_int = 533611; // 0x674 PushI
	var_646_int = 35133; // 0x675 PushI
	var_647_int = 35132; // 0x676 PushI
	AddReply(var_645_int, var_646_int, var_647_int); // 0x677 TObjFunc
	return 0; // 0x679 Return
	
Label_1658:
	var_648_int = 35133; // 0x67a PushI
	var_649_bool = var_31_bool == var_648_int; // 0x67b Eq
	if(var_649_bool == 0) goto Label_1676; // 0x67c JumpB
	var_650_string = ""; // 0x67d PushV
	var_650_string = "Modesty"; // 0x67e MovS
	func_740(var_32_cvector, var_650_string); // 0x67f NEW_2
	var_651_int = 533612; // 0x681 PushI
	SetMessage(var_651_int); // 0x682 TObjFunc
	ClearReplies(); // 0x684 TObjFunc
	var_652_int = 533613; // 0x686 PushI
	var_653_int = 35127; // 0x687 PushI
	var_654_int = 35134; // 0x688 PushI
	AddReply(var_652_int, var_653_int, var_654_int); // 0x689 TObjFunc
	return 0; // 0x68b Return
	
Label_1676:
	var_655_int = 35127; // 0x68c PushI
	var_656_bool = var_31_bool == var_655_int; // 0x68d Eq
	if(var_656_bool == 0) goto Label_1694; // 0x68e JumpB
	var_657_string = ""; // 0x68f PushV
	var_657_string = "Modesty"; // 0x690 MovS
	func_740(var_32_cvector, var_657_string); // 0x691 NEW_2
	var_658_int = 533607; // 0x693 PushI
	SetMessage(var_658_int); // 0x694 TObjFunc
	ClearReplies(); // 0x696 TObjFunc
	var_659_int = 532344; // 0x698 PushI
	var_660_int = 33774; // 0x699 PushI
	var_661_int = 33773; // 0x69a PushI
	AddReply(var_659_int, var_660_int, var_661_int); // 0x69b TObjFunc
	return 0; // 0x69d Return
	
Label_1694:
	var_662_int = 33774; // 0x69e PushI
	var_663_bool = var_31_bool == var_662_int; // 0x69f Eq
	if(var_663_bool == 0) goto Label_1717; // 0x6a0 JumpB
	var_664_string = ""; // 0x6a1 PushV
	var_664_string = "Modesty"; // 0x6a2 MovS
	func_740(var_32_cvector, var_664_string); // 0x6a3 NEW_2
	var_665_int = 532345; // 0x6a5 PushI
	SetMessage(var_665_int); // 0x6a6 TObjFunc
	ClearReplies(); // 0x6a8 TObjFunc
	var_666_int = 532346; // 0x6aa PushI
	var_667_int = -1; // 0x6ab PushI
	var_668_int = 33775; // 0x6ac PushI
	AddReply(var_666_int, var_667_int, var_668_int); // 0x6ad TObjFunc
	var_669_int = 532347; // 0x6af PushI
	var_670_int = 33777; // 0x6b0 PushI
	var_671_int = 33776; // 0x6b1 PushI
	AddReply(var_669_int, var_670_int, var_671_int); // 0x6b2 TObjFunc
	return 0; // 0x6b4 Return
	
Label_1717:
	var_672_int = 33777; // 0x6b5 PushI
	var_673_bool = var_31_bool == var_672_int; // 0x6b6 Eq
	if(var_673_bool == 0) goto Label_1740; // 0x6b7 JumpB
	var_674_string = ""; // 0x6b8 PushV
	var_674_string = "Fear"; // 0x6b9 MovS
	func_740(var_32_cvector, var_674_string); // 0x6ba NEW_2
	var_675_int = 532348; // 0x6bc PushI
	SetMessage(var_675_int); // 0x6bd TObjFunc
	ClearReplies(); // 0x6bf TObjFunc
	var_676_int = 532349; // 0x6c1 PushI
	var_677_int = -1; // 0x6c2 PushI
	var_678_int = 33778; // 0x6c3 PushI
	AddReply(var_676_int, var_677_int, var_678_int); // 0x6c4 TObjFunc
	var_679_int = 532350; // 0x6c6 PushI
	var_680_int = -1; // 0x6c7 PushI
	var_681_int = 33779; // 0x6c8 PushI
	AddReply(var_679_int, var_680_int, var_681_int); // 0x6c9 TObjFunc
	return 0; // 0x6cb Return
	
Label_1740:
	var_682_int = 22246; // 0x6cc PushI
	var_683_bool = var_31_bool == var_682_int; // 0x6cd Eq
	if(var_683_bool == 0) goto Label_1763; // 0x6ce JumpB
	var_684_string = ""; // 0x6cf PushV
	var_684_string = "Fear"; // 0x6d0 MovS
	func_740(var_32_cvector, var_684_string); // 0x6d1 NEW_2
	var_685_int = 521055; // 0x6d3 PushI
	SetMessage(var_685_int); // 0x6d4 TObjFunc
	ClearReplies(); // 0x6d6 TObjFunc
	var_686_int = 521056; // 0x6d8 PushI
	var_687_int = 22248; // 0x6d9 PushI
	var_688_int = 22247; // 0x6da PushI
	AddReply(var_686_int, var_687_int, var_688_int); // 0x6db TObjFunc
	var_689_int = 521060; // 0x6dd PushI
	var_690_int = 22253; // 0x6de PushI
	var_691_int = 22251; // 0x6df PushI
	AddReply(var_689_int, var_690_int, var_691_int); // 0x6e0 TObjFunc
	return 0; // 0x6e2 Return
	
Label_1763:
	var_692_int = 22253; // 0x6e3 PushI
	var_693_bool = var_31_bool == var_692_int; // 0x6e4 Eq
	if(var_693_bool == 0) goto Label_1781; // 0x6e5 JumpB
	var_694_string = ""; // 0x6e6 PushV
	var_694_string = "Love"; // 0x6e7 MovS
	func_740(var_32_cvector, var_694_string); // 0x6e8 NEW_2
	var_695_int = 521061; // 0x6ea PushI
	SetMessage(var_695_int); // 0x6eb TObjFunc
	ClearReplies(); // 0x6ed TObjFunc
	var_696_int = 521062; // 0x6ef PushI
	var_697_int = 4905; // 0x6f0 PushI
	var_698_int = 22254; // 0x6f1 PushI
	AddReply(var_696_int, var_697_int, var_698_int); // 0x6f2 TObjFunc
	return 0; // 0x6f4 Return
	
Label_1781:
	var_699_int = 22248; // 0x6f5 PushI
	var_700_bool = var_31_bool == var_699_int; // 0x6f6 Eq
	if(var_700_bool == 0) goto Label_1804; // 0x6f7 JumpB
	var_701_string = ""; // 0x6f8 PushV
	var_701_string = "Love"; // 0x6f9 MovS
	func_740(var_32_cvector, var_701_string); // 0x6fa NEW_2
	var_702_int = 521057; // 0x6fc PushI
	SetMessage(var_702_int); // 0x6fd TObjFunc
	ClearReplies(); // 0x6ff TObjFunc
	var_703_int = 521058; // 0x701 PushI
	var_704_int = 4905; // 0x702 PushI
	var_705_int = 22249; // 0x703 PushI
	AddReply(var_703_int, var_704_int, var_705_int); // 0x704 TObjFunc
	var_706_int = 504517; // 0x706 PushI
	var_707_int = 4923; // 0x707 PushI
	var_708_int = 4922; // 0x708 PushI
	AddReply(var_706_int, var_707_int, var_708_int); // 0x709 TObjFunc
	return 0; // 0x70b Return
	
Label_1804:
	var_709_int = 4905; // 0x70c PushI
	var_710_bool = var_31_bool == var_709_int; // 0x70d Eq
	if(var_710_bool == 0) goto Label_1827; // 0x70e JumpB
	var_711_string = ""; // 0x70f PushV
	var_711_string = "Sexy"; // 0x710 MovS
	func_740(var_32_cvector, var_711_string); // 0x711 NEW_2
	var_712_int = 504502; // 0x713 PushI
	SetMessage(var_712_int); // 0x714 TObjFunc
	ClearReplies(); // 0x716 TObjFunc
	var_713_int = 504516; // 0x718 PushI
	var_714_int = 4907; // 0x719 PushI
	var_715_int = 4920; // 0x71a PushI
	AddReply(var_713_int, var_714_int, var_715_int); // 0x71b TObjFunc
	var_716_int = 504515; // 0x71d PushI
	var_717_int = 4923; // 0x71e PushI
	var_718_int = 4918; // 0x71f PushI
	AddReply(var_716_int, var_717_int, var_718_int); // 0x720 TObjFunc
	return 0; // 0x722 Return
	
Label_1827:
	var_719_int = 4923; // 0x723 PushI
	var_720_bool = var_31_bool == var_719_int; // 0x724 Eq
	if(var_720_bool == 0) goto Label_1850; // 0x725 JumpB
	var_721_string = ""; // 0x726 PushV
	var_721_string = "Sexy"; // 0x727 MovS
	func_740(var_32_cvector, var_721_string); // 0x728 NEW_2
	var_722_int = 504518; // 0x72a PushI
	SetMessage(var_722_int); // 0x72b TObjFunc
	ClearReplies(); // 0x72d TObjFunc
	var_723_int = 504519; // 0x72f PushI
	var_724_int = 4909; // 0x730 PushI
	var_725_int = 4924; // 0x731 PushI
	AddReply(var_723_int, var_724_int, var_725_int); // 0x732 TObjFunc
	var_726_int = 533368; // 0x734 PushI
	var_727_int = 4907; // 0x735 PushI
	var_728_int = 34866; // 0x736 PushI
	AddReply(var_726_int, var_727_int, var_728_int); // 0x737 TObjFunc
	return 0; // 0x739 Return
	
Label_1850:
	var_729_int = 4907; // 0x73a PushI
	var_730_bool = var_31_bool == var_729_int; // 0x73b Eq
	if(var_730_bool == 0) goto Label_1868; // 0x73c JumpB
	var_731_string = ""; // 0x73d PushV
	var_731_string = "Sexy"; // 0x73e MovS
	func_740(var_32_cvector, var_731_string); // 0x73f NEW_2
	var_732_int = 504504; // 0x741 PushI
	SetMessage(var_732_int); // 0x742 TObjFunc
	ClearReplies(); // 0x744 TObjFunc
	var_733_int = 504505; // 0x746 PushI
	var_734_int = 4909; // 0x747 PushI
	var_735_int = 4908; // 0x748 PushI
	AddReply(var_733_int, var_734_int, var_735_int); // 0x749 TObjFunc
	return 0; // 0x74b Return
	
Label_1868:
	var_736_int = 4909; // 0x74c PushI
	var_737_bool = var_31_bool == var_736_int; // 0x74d Eq
	if(var_737_bool == 0) goto Label_1891; // 0x74e JumpB
	var_738_string = ""; // 0x74f PushV
	var_738_string = "Modesty"; // 0x750 MovS
	func_740(var_32_cvector, var_738_string); // 0x751 NEW_2
	var_739_int = 504506; // 0x753 PushI
	SetMessage(var_739_int); // 0x754 TObjFunc
	ClearReplies(); // 0x756 TObjFunc
	var_740_int = 504507; // 0x758 PushI
	var_741_int = 4911; // 0x759 PushI
	var_742_int = 4910; // 0x75a PushI
	AddReply(var_740_int, var_741_int, var_742_int); // 0x75b TObjFunc
	var_743_int = 504514; // 0x75d PushI
	var_744_int = 4911; // 0x75e PushI
	var_745_int = 4917; // 0x75f PushI
	AddReply(var_743_int, var_744_int, var_745_int); // 0x760 TObjFunc
	return 0; // 0x762 Return
	
Label_1891:
	var_746_int = 4911; // 0x763 PushI
	var_747_bool = var_31_bool == var_746_int; // 0x764 Eq
	if(var_747_bool == 0) goto Label_1914; // 0x765 JumpB
	var_748_string = ""; // 0x766 PushV
	var_748_string = "Modesty"; // 0x767 MovS
	func_740(var_32_cvector, var_748_string); // 0x768 NEW_2
	var_749_int = 504508; // 0x76a PushI
	SetMessage(var_749_int); // 0x76b TObjFunc
	ClearReplies(); // 0x76d TObjFunc
	var_750_int = 504509; // 0x76f PushI
	var_751_int = 22257; // 0x770 PushI
	var_752_int = 4912; // 0x771 PushI
	AddReply(var_750_int, var_751_int, var_752_int); // 0x772 TObjFunc
	var_753_int = 504513; // 0x774 PushI
	var_754_int = 22257; // 0x775 PushI
	var_755_int = 4916; // 0x776 PushI
	AddReply(var_753_int, var_754_int, var_755_int); // 0x777 TObjFunc
	return 0; // 0x779 Return
	
Label_1914:
	var_756_int = 22257; // 0x77a PushI
	var_757_bool = var_31_bool == var_756_int; // 0x77b Eq
	if(var_757_bool == 0) goto Label_1937; // 0x77c JumpB
	var_758_string = ""; // 0x77d PushV
	var_758_string = "Sexy"; // 0x77e MovS
	func_740(var_32_cvector, var_758_string); // 0x77f NEW_2
	var_759_int = 521063; // 0x781 PushI
	SetMessage(var_759_int); // 0x782 TObjFunc
	ClearReplies(); // 0x784 TObjFunc
	var_760_int = 521064; // 0x786 PushI
	var_761_int = 22259; // 0x787 PushI
	var_762_int = 22258; // 0x788 PushI
	AddReply(var_760_int, var_761_int, var_762_int); // 0x789 TObjFunc
	var_763_int = 521069; // 0x78b PushI
	var_764_int = 4913; // 0x78c PushI
	var_765_int = 22264; // 0x78d PushI
	AddReply(var_763_int, var_764_int, var_765_int); // 0x78e TObjFunc
	return 0; // 0x790 Return
	
Label_1937:
	var_766_int = 22259; // 0x791 PushI
	var_767_bool = var_31_bool == var_766_int; // 0x792 Eq
	if(var_767_bool == 0) goto Label_1955; // 0x793 JumpB
	var_768_string = ""; // 0x794 PushV
	var_768_string = "Sexy"; // 0x795 MovS
	func_740(var_32_cvector, var_768_string); // 0x796 NEW_2
	var_769_int = 521065; // 0x798 PushI
	SetMessage(var_769_int); // 0x799 TObjFunc
	ClearReplies(); // 0x79b TObjFunc
	var_770_int = 521066; // 0x79d PushI
	var_771_int = 22262; // 0x79e PushI
	var_772_int = 22260; // 0x79f PushI
	AddReply(var_770_int, var_771_int, var_772_int); // 0x7a0 TObjFunc
	return 0; // 0x7a2 Return
	
Label_1955:
	var_773_int = 22262; // 0x7a3 PushI
	var_774_bool = var_31_bool == var_773_int; // 0x7a4 Eq
	if(var_774_bool == 0) goto Label_1973; // 0x7a5 JumpB
	var_775_string = ""; // 0x7a6 PushV
	var_775_string = "Sexy"; // 0x7a7 MovS
	func_740(var_32_cvector, var_775_string); // 0x7a8 NEW_2
	var_776_int = 521067; // 0x7aa PushI
	SetMessage(var_776_int); // 0x7ab TObjFunc
	ClearReplies(); // 0x7ad TObjFunc
	var_777_int = 521068; // 0x7af PushI
	var_778_int = 4913; // 0x7b0 PushI
	var_779_int = 22263; // 0x7b1 PushI
	AddReply(var_777_int, var_778_int, var_779_int); // 0x7b2 TObjFunc
	return 0; // 0x7b4 Return
	
Label_1973:
	var_780_int = 4913; // 0x7b5 PushI
	var_781_bool = var_31_bool == var_780_int; // 0x7b6 Eq
	if(var_781_bool == 0) goto Label_1996; // 0x7b7 JumpB
	var_782_string = ""; // 0x7b8 PushV
	var_782_string = "Sexy"; // 0x7b9 MovS
	func_740(var_32_cvector, var_782_string); // 0x7ba NEW_2
	var_783_int = 504510; // 0x7bc PushI
	SetMessage(var_783_int); // 0x7bd TObjFunc
	ClearReplies(); // 0x7bf TObjFunc
	var_784_int = 504497; // 0x7c1 PushI
	var_785_int = -1; // 0x7c2 PushI
	var_786_int = 4900; // 0x7c3 PushI
	AddReply(var_784_int, var_785_int, var_786_int); // 0x7c4 TObjFunc
	var_787_int = 504512; // 0x7c6 PushI
	var_788_int = -1; // 0x7c7 PushI
	var_789_int = 4915; // 0x7c8 PushI
	AddReply(var_787_int, var_788_int, var_789_int); // 0x7c9 TObjFunc
	return 0; // 0x7cb Return
	
Label_1996:
	var_3_string = 1; // 0x7cc TMovB
	var_790_bool = 0; // 0x7cd PushV
	func_4689(var_790_bool); // 0x7ce NEW_2
	if(var_790_bool == 0) goto Label_2004; // 0x7d0 JumpB
	lshStopAnimation(); // 0x7d1 Func
	goto Label_2006; // 0x7d3 Jump
	
Label_2006:
	return 0; // 0x7d6 Return
	
Label_2004:
	StopAnimation(); // 0x7d4 Func
	
Label_2008:
	return 0; // 0x7d8 Return
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_cvector)
{
	var_33_int = 1; // 0x8dc PushI
	if(var_33_int == 0) goto Label_2883; // 0x8dd JumpB
	func_4537(); // 0x8df NEW_2
	var_35_int = 8026; // 0x8e1 PushI
	var_36_bool = var_32_cvector == var_35_int; // 0x8e2 Eq
	if(var_36_bool == 0) goto Label_2286; // 0x8e3 JumpB
	var_37_object = Obj(); var_38_object = Obj(); // 0x8e4 PushV
	var_37_object = var_1_object; // 0x8e5 MovT
	var_38_object = var_0_object; // 0x8e6 MovT
	func_4868(); // 0x8e7 NEW_2
	var_96_object = Obj(); var_97_object = Obj(); // 0x8e9 PushV
	var_96_object = var_1_object; // 0x8ea MovT
	var_97_object = var_0_object; // 0x8eb MovT
	func_4979(); // 0x8ec NEW_2
	
Label_2286:
	var_122_int = 8027; // 0x8ee PushI
	var_123_bool = var_32_cvector == var_122_int; // 0x8ef Eq
	if(var_123_bool == 0) goto Label_2299; // 0x8f0 JumpB
	var_124_object = Obj(); var_125_object = Obj(); // 0x8f1 PushV
	var_124_object = var_1_object; // 0x8f2 MovT
	var_125_object = var_0_object; // 0x8f3 MovT
	func_4868(); // 0x8f4 NEW_2
	var_126_object = Obj(); var_127_object = Obj(); // 0x8f6 PushV
	var_126_object = var_1_object; // 0x8f7 MovT
	var_127_object = var_0_object; // 0x8f8 MovT
	func_4979(); // 0x8f9 NEW_2
	
Label_2299:
	var_128_int = 8037; // 0x8fb PushI
	var_129_bool = var_32_cvector == var_128_int; // 0x8fc Eq
	if(var_129_bool == 0) goto Label_2317; // 0x8fd JumpB
	var_130_object = Obj(); var_131_object = Obj(); // 0x8fe PushV
	var_130_object = var_1_object; // 0x8ff MovT
	var_131_object = var_0_object; // 0x900 MovT
	func_4850(); // 0x901 NEW_2
	var_134_object = Obj(); var_135_object = Obj(); // 0x903 PushV
	var_134_object = var_1_object; // 0x904 MovT
	var_135_object = var_0_object; // 0x905 MovT
	func_4995(); // 0x906 NEW_2
	var_144_object = Obj(); var_145_object = Obj(); // 0x908 PushV
	var_144_object = var_1_object; // 0x909 MovT
	var_145_object = var_0_object; // 0x90a MovT
	func_5011(); // 0x90b NEW_2
	
Label_2317:
	var_151_int = 8033; // 0x90d PushI
	var_152_bool = var_32_cvector == var_151_int; // 0x90e Eq
	if(var_152_bool == 0) goto Label_2325; // 0x90f JumpB
	var_153_object = Obj(); var_154_object = Obj(); // 0x910 PushV
	var_153_object = var_1_object; // 0x911 MovT
	var_154_object = var_0_object; // 0x912 MovT
	func_4850(); // 0x913 NEW_2
	
Label_2325:
	var_155_int = 8042; // 0x915 PushI
	var_156_bool = var_32_cvector == var_155_int; // 0x916 Eq
	if(var_156_bool == 0) goto Label_2333; // 0x917 JumpB
	var_157_object = Obj(); var_158_object = Obj(); // 0x918 PushV
	var_157_object = var_1_object; // 0x919 MovT
	var_158_object = var_0_object; // 0x91a MovT
	func_4856(); // 0x91b NEW_2
	
Label_2333:
	var_161_int = 8045; // 0x91d PushI
	var_162_bool = var_32_cvector == var_161_int; // 0x91e Eq
	if(var_162_bool == 0) goto Label_2341; // 0x91f JumpB
	var_163_object = Obj(); var_164_object = Obj(); // 0x920 PushV
	var_163_object = var_1_object; // 0x921 MovT
	var_164_object = var_0_object; // 0x922 MovT
	func_4862(); // 0x923 NEW_2
	
Label_2341:
	var_167_int = 8046; // 0x925 PushI
	var_168_bool = var_32_cvector == var_167_int; // 0x926 Eq
	if(var_168_bool == 0) goto Label_2349; // 0x927 JumpB
	var_169_object = Obj(); var_170_object = Obj(); // 0x928 PushV
	var_169_object = var_1_object; // 0x929 MovT
	var_170_object = var_0_object; // 0x92a MovT
	func_4862(); // 0x92b NEW_2
	
Label_2349:
	var_171_int = 12591; // 0x92d PushI
	var_172_bool = var_32_cvector == var_171_int; // 0x92e Eq
	if(var_172_bool == 0) goto Label_2362; // 0x92f JumpB
	var_173_object = Obj(); var_174_object = Obj(); // 0x930 PushV
	var_173_object = var_1_object; // 0x931 MovT
	var_174_object = var_0_object; // 0x932 MovT
	func_4868(); // 0x933 NEW_2
	var_175_object = Obj(); var_176_object = Obj(); // 0x935 PushV
	var_175_object = var_1_object; // 0x936 MovT
	var_176_object = var_0_object; // 0x937 MovT
	func_4979(); // 0x938 NEW_2
	
Label_2362:
	var_177_int = 7559; // 0x93a PushI
	var_178_bool = var_31_bool == var_177_int; // 0x93b Eq
	if(var_178_bool == 0) goto Label_2482; // 0x93c JumpB
	var_179_bool = 0; var_180_object = Obj(); // 0x93d PushV
	var_180_object = var_1_object; // 0x93e MovT
	func_5189(var_180_object); // 0x93f NEW_2
	if(var_179_bool == 0) goto Label_2400; // 0x941 JumpB
	var_187_object = Obj(); var_188_object = Obj(); // 0x942 PushV
	var_187_object = var_1_object; // 0x943 MovT
	var_188_object = var_0_object; // 0x944 MovT
	func_4844(); // 0x945 NEW_2
	var_191_object = Obj(); var_192_object = Obj(); // 0x947 PushV
	var_191_object = var_1_object; // 0x948 MovT
	var_192_object = var_0_object; // 0x949 MovT
	func_4804(); // 0x94a NEW_2
	var_195_string = ""; // 0x94c PushV
	var_195_string = "Fear"; // 0x94d MovS
	func_2245(var_32_cvector, var_195_string); // 0x94e NEW_2
	var_212_int = 506853; // 0x950 PushI
	SetMessage(var_212_int); // 0x951 TObjFunc
	ClearReplies(); // 0x953 TObjFunc
	var_213_int = 506854; // 0x955 PushI
	var_214_int = 7890; // 0x956 PushI
	var_215_int = 7560; // 0x957 PushI
	AddReply(var_213_int, var_214_int, var_215_int); // 0x958 TObjFunc
	var_216_int = 507262; // 0x95a PushI
	var_217_int = 7890; // 0x95b PushI
	var_218_int = 8004; // 0x95c PushI
	AddReply(var_216_int, var_217_int, var_218_int); // 0x95d TObjFunc
	return 0; // 0x95f Return
	
Label_2400:
	var_219_string = ""; // 0x960 PushV
	var_219_string = "Neutral"; // 0x961 MovS
	func_2245(var_32_cvector, var_219_string); // 0x962 NEW_2
	var_220_int = 506855; // 0x964 PushI
	SetMessage(var_220_int); // 0x965 TObjFunc
	ClearReplies(); // 0x967 TObjFunc
	var_221_bool = 0; // 0x969 PushV
	var_221_bool = 0; // 0x96a MovB
	var_222_bool = 0; var_223_object = Obj(); // 0x96b PushV
	var_223_object = var_1_object; // 0x96c MovT
	func_5201(var_223_object); // 0x96d NEW_2
	if(var_222_bool == 0) goto Label_2422; // 0x96f JumpB
	var_228_bool = 0; var_229_object = Obj(); // 0x970 PushV
	var_229_object = var_1_object; // 0x971 MovT
	func_5249(var_229_object); // 0x972 NEW_2
	if(var_228_bool == 0) goto Label_2422; // 0x974 JumpB
	var_221_bool = 1; // 0x975 MovB
	
Label_2422:
	if(var_221_bool == 0) goto Label_2428; // 0x976 JumpB
	var_234_int = 506856; // 0x977 PushI
	var_235_int = 7563; // 0x978 PushI
	var_236_int = 7562; // 0x979 PushI
	AddReply(var_234_int, var_235_int, var_236_int); // 0x97a TObjFunc
	
Label_2428:
	var_237_bool = 0; // 0x97c PushV
	var_237_bool = 0; // 0x97d MovB
	var_238_bool = 0; var_239_object = Obj(); // 0x97e PushV
	var_239_object = var_1_object; // 0x97f MovT
	func_5213(var_239_object); // 0x980 NEW_2
	if(var_238_bool == 0) goto Label_2441; // 0x982 JumpB
	var_244_bool = 0; var_245_object = Obj(); // 0x983 PushV
	var_245_object = var_1_object; // 0x984 MovT
	func_5261(var_245_object); // 0x985 NEW_2
	if(var_244_bool == 0) goto Label_2441; // 0x987 JumpB
	var_237_bool = 1; // 0x988 MovB
	
Label_2441:
	if(var_237_bool == 0) goto Label_2447; // 0x989 JumpB
	var_250_int = 506859; // 0x98a PushI
	var_251_int = 7566; // 0x98b PushI
	var_252_int = 7565; // 0x98c PushI
	AddReply(var_250_int, var_251_int, var_252_int); // 0x98d TObjFunc
	
Label_2447:
	var_253_bool = 0; // 0x98f PushV
	var_253_bool = 0; // 0x990 MovB
	var_254_bool = 0; var_255_object = Obj(); // 0x991 PushV
	var_255_object = var_1_object; // 0x992 MovT
	func_5225(var_255_object); // 0x993 NEW_2
	if(var_254_bool == 0) goto Label_2460; // 0x995 JumpB
	var_260_bool = 0; var_261_object = Obj(); // 0x996 PushV
	var_261_object = var_1_object; // 0x997 MovT
	func_5237(var_261_object); // 0x998 NEW_2
	if(var_260_bool == 0) goto Label_2460; // 0x99a JumpB
	var_253_bool = 1; // 0x99b MovB
	
Label_2460:
	if(var_253_bool == 0) goto Label_2466; // 0x99c JumpB
	var_266_int = 506861; // 0x99d PushI
	var_267_int = 7568; // 0x99e PushI
	var_268_int = 7567; // 0x99f PushI
	AddReply(var_266_int, var_267_int, var_268_int); // 0x9a0 TObjFunc
	
Label_2466:
	var_269_bool = 0; var_270_object = Obj(); // 0x9a2 PushV
	var_270_object = var_1_object; // 0x9a3 MovT
	func_5273(var_270_object); // 0x9a4 NEW_2
	if(var_269_bool == 0) goto Label_2476; // 0x9a6 JumpB
	var_275_int = 511392; // 0x9a7 PushI
	var_276_int = 12590; // 0x9a8 PushI
	var_277_int = 12589; // 0x9a9 PushI
	AddReply(var_275_int, var_276_int, var_277_int); // 0x9aa TObjFunc
	
Label_2476:
	var_278_int = 507528; // 0x9ac PushI
	var_279_int = -1; // 0x9ad PushI
	var_280_int = 8310; // 0x9ae PushI
	AddReply(var_278_int, var_279_int, var_280_int); // 0x9af TObjFunc
	return 0; // 0x9b1 Return
	
Label_2482:
	var_281_int = 12590; // 0x9b2 PushI
	var_282_bool = var_31_bool == var_281_int; // 0x9b3 Eq
	if(var_282_bool == 0) goto Label_2500; // 0x9b4 JumpB
	var_283_string = ""; // 0x9b5 PushV
	var_283_string = "Neutral"; // 0x9b6 MovS
	func_2245(var_32_cvector, var_283_string); // 0x9b7 NEW_2
	var_284_int = 511393; // 0x9b9 PushI
	SetMessage(var_284_int); // 0x9ba TObjFunc
	ClearReplies(); // 0x9bc TObjFunc
	var_285_int = 511394; // 0x9be PushI
	var_286_int = -1; // 0x9bf PushI
	var_287_int = 12591; // 0x9c0 PushI
	AddReply(var_285_int, var_286_int, var_287_int); // 0x9c1 TObjFunc
	return 0; // 0x9c3 Return
	
Label_2500:
	var_288_int = 7568; // 0x9c4 PushI
	var_289_bool = var_31_bool == var_288_int; // 0x9c5 Eq
	if(var_289_bool == 0) goto Label_2518; // 0x9c6 JumpB
	var_290_string = ""; // 0x9c7 PushV
	var_290_string = "Neutral"; // 0x9c8 MovS
	func_2245(var_32_cvector, var_290_string); // 0x9c9 NEW_2
	var_291_int = 506862; // 0x9cb PushI
	SetMessage(var_291_int); // 0x9cc TObjFunc
	ClearReplies(); // 0x9ce TObjFunc
	var_292_int = 507296; // 0x9d0 PushI
	var_293_int = 8044; // 0x9d1 PushI
	var_294_int = 8043; // 0x9d2 PushI
	AddReply(var_292_int, var_293_int, var_294_int); // 0x9d3 TObjFunc
	return 0; // 0x9d5 Return
	
Label_2518:
	var_295_int = 8044; // 0x9d6 PushI
	var_296_bool = var_31_bool == var_295_int; // 0x9d7 Eq
	if(var_296_bool == 0) goto Label_2541; // 0x9d8 JumpB
	var_297_string = ""; // 0x9d9 PushV
	var_297_string = "Neutral"; // 0x9da MovS
	func_2245(var_32_cvector, var_297_string); // 0x9db NEW_2
	var_298_int = 507297; // 0x9dd PushI
	SetMessage(var_298_int); // 0x9de TObjFunc
	ClearReplies(); // 0x9e0 TObjFunc
	var_299_int = 507298; // 0x9e2 PushI
	var_300_int = -1; // 0x9e3 PushI
	var_301_int = 8045; // 0x9e4 PushI
	AddReply(var_299_int, var_300_int, var_301_int); // 0x9e5 TObjFunc
	var_302_int = 507299; // 0x9e7 PushI
	var_303_int = -1; // 0x9e8 PushI
	var_304_int = 8046; // 0x9e9 PushI
	AddReply(var_302_int, var_303_int, var_304_int); // 0x9ea TObjFunc
	return 0; // 0x9ec Return
	
Label_2541:
	var_305_int = 7566; // 0x9ed PushI
	var_306_bool = var_31_bool == var_305_int; // 0x9ee Eq
	if(var_306_bool == 0) goto Label_2564; // 0x9ef JumpB
	var_307_object = Obj(); var_308_object = Obj(); // 0x9f0 PushV
	var_307_object = var_1_object; // 0x9f1 MovT
	var_308_object = var_0_object; // 0x9f2 MovT
	func_4838(); // 0x9f3 NEW_2
	var_311_string = ""; // 0x9f5 PushV
	var_311_string = "Neutral"; // 0x9f6 MovS
	func_2245(var_32_cvector, var_311_string); // 0x9f7 NEW_2
	var_312_int = 506860; // 0x9f9 PushI
	SetMessage(var_312_int); // 0x9fa TObjFunc
	ClearReplies(); // 0x9fc TObjFunc
	var_313_int = 507295; // 0x9fe PushI
	var_314_int = -1; // 0x9ff PushI
	var_315_int = 8042; // 0xa00 PushI
	AddReply(var_313_int, var_314_int, var_315_int); // 0xa01 TObjFunc
	return 0; // 0xa03 Return
	
Label_2564:
	var_316_int = 7563; // 0xa04 PushI
	var_317_bool = var_31_bool == var_316_int; // 0xa05 Eq
	if(var_317_bool == 0) goto Label_2587; // 0xa06 JumpB
	var_318_string = ""; // 0xa07 PushV
	var_318_string = "Modesty"; // 0xa08 MovS
	func_2245(var_32_cvector, var_318_string); // 0xa09 NEW_2
	var_319_int = 506857; // 0xa0b PushI
	SetMessage(var_319_int); // 0xa0c TObjFunc
	ClearReplies(); // 0xa0e TObjFunc
	var_320_int = 506858; // 0xa10 PushI
	var_321_int = 8034; // 0xa11 PushI
	var_322_int = 7564; // 0xa12 PushI
	AddReply(var_320_int, var_321_int, var_322_int); // 0xa13 TObjFunc
	var_323_int = 507287; // 0xa15 PushI
	var_324_int = -1; // 0xa16 PushI
	var_325_int = 8033; // 0xa17 PushI
	AddReply(var_323_int, var_324_int, var_325_int); // 0xa18 TObjFunc
	return 0; // 0xa1a Return
	
Label_2587:
	var_326_int = 8034; // 0xa1b PushI
	var_327_bool = var_31_bool == var_326_int; // 0xa1c Eq
	if(var_327_bool == 0) goto Label_2610; // 0xa1d JumpB
	var_328_string = ""; // 0xa1e PushV
	var_328_string = "Modesty"; // 0xa1f MovS
	func_2245(var_32_cvector, var_328_string); // 0xa20 NEW_2
	var_329_int = 507288; // 0xa22 PushI
	SetMessage(var_329_int); // 0xa23 TObjFunc
	ClearReplies(); // 0xa25 TObjFunc
	var_330_int = 507289; // 0xa27 PushI
	var_331_int = 8036; // 0xa28 PushI
	var_332_int = 8035; // 0xa29 PushI
	AddReply(var_330_int, var_331_int, var_332_int); // 0xa2a TObjFunc
	var_333_int = 507292; // 0xa2c PushI
	var_334_int = 8039; // 0xa2d PushI
	var_335_int = 8038; // 0xa2e PushI
	AddReply(var_333_int, var_334_int, var_335_int); // 0xa2f TObjFunc
	return 0; // 0xa31 Return
	
Label_2610:
	var_336_int = 8039; // 0xa32 PushI
	var_337_bool = var_31_bool == var_336_int; // 0xa33 Eq
	if(var_337_bool == 0) goto Label_2628; // 0xa34 JumpB
	var_338_string = ""; // 0xa35 PushV
	var_338_string = "Modesty"; // 0xa36 MovS
	func_2245(var_32_cvector, var_338_string); // 0xa37 NEW_2
	var_339_int = 507293; // 0xa39 PushI
	SetMessage(var_339_int); // 0xa3a TObjFunc
	ClearReplies(); // 0xa3c TObjFunc
	var_340_int = 507294; // 0xa3e PushI
	var_341_int = 8036; // 0xa3f PushI
	var_342_int = 8040; // 0xa40 PushI
	AddReply(var_340_int, var_341_int, var_342_int); // 0xa41 TObjFunc
	return 0; // 0xa43 Return
	
Label_2628:
	var_343_int = 8036; // 0xa44 PushI
	var_344_bool = var_31_bool == var_343_int; // 0xa45 Eq
	if(var_344_bool == 0) goto Label_2646; // 0xa46 JumpB
	var_345_string = ""; // 0xa47 PushV
	var_345_string = "Modesty"; // 0xa48 MovS
	func_2245(var_32_cvector, var_345_string); // 0xa49 NEW_2
	var_346_int = 507290; // 0xa4b PushI
	SetMessage(var_346_int); // 0xa4c TObjFunc
	ClearReplies(); // 0xa4e TObjFunc
	var_347_int = 507291; // 0xa50 PushI
	var_348_int = -1; // 0xa51 PushI
	var_349_int = 8037; // 0xa52 PushI
	AddReply(var_347_int, var_348_int, var_349_int); // 0xa53 TObjFunc
	return 0; // 0xa55 Return
	
Label_2646:
	var_350_int = 7890; // 0xa56 PushI
	var_351_bool = var_31_bool == var_350_int; // 0xa57 Eq
	if(var_351_bool == 0) goto Label_2674; // 0xa58 JumpB
	var_352_string = ""; // 0xa59 PushV
	var_352_string = "Fear"; // 0xa5a MovS
	func_2245(var_32_cvector, var_352_string); // 0xa5b NEW_2
	var_353_int = 507162; // 0xa5d PushI
	SetMessage(var_353_int); // 0xa5e TObjFunc
	ClearReplies(); // 0xa60 TObjFunc
	var_354_int = 507264; // 0xa62 PushI
	var_355_int = 8010; // 0xa63 PushI
	var_356_int = 8007; // 0xa64 PushI
	AddReply(var_354_int, var_355_int, var_356_int); // 0xa65 TObjFunc
	var_357_int = 507265; // 0xa67 PushI
	var_358_int = 8010; // 0xa68 PushI
	var_359_int = 8008; // 0xa69 PushI
	AddReply(var_357_int, var_358_int, var_359_int); // 0xa6a TObjFunc
	var_360_int = 507266; // 0xa6c PushI
	var_361_int = -1; // 0xa6d PushI
	var_362_int = 8009; // 0xa6e PushI
	AddReply(var_360_int, var_361_int, var_362_int); // 0xa6f TObjFunc
	return 0; // 0xa71 Return
	
Label_2674:
	var_363_int = 8010; // 0xa72 PushI
	var_364_bool = var_31_bool == var_363_int; // 0xa73 Eq
	if(var_364_bool == 0) goto Label_2697; // 0xa74 JumpB
	var_365_string = ""; // 0xa75 PushV
	var_365_string = "Fear"; // 0xa76 MovS
	func_2245(var_32_cvector, var_365_string); // 0xa77 NEW_2
	var_366_int = 507267; // 0xa79 PushI
	SetMessage(var_366_int); // 0xa7a TObjFunc
	ClearReplies(); // 0xa7c TObjFunc
	var_367_int = 507268; // 0xa7e PushI
	var_368_int = 8015; // 0xa7f PushI
	var_369_int = 8012; // 0xa80 PushI
	AddReply(var_367_int, var_368_int, var_369_int); // 0xa81 TObjFunc
	var_370_int = 507269; // 0xa83 PushI
	var_371_int = 8014; // 0xa84 PushI
	var_372_int = 8013; // 0xa85 PushI
	AddReply(var_370_int, var_371_int, var_372_int); // 0xa86 TObjFunc
	return 0; // 0xa88 Return
	
Label_2697:
	var_373_int = 8014; // 0xa89 PushI
	var_374_bool = var_31_bool == var_373_int; // 0xa8a Eq
	if(var_374_bool == 0) goto Label_2725; // 0xa8b JumpB
	var_375_string = ""; // 0xa8c PushV
	var_375_string = "Love"; // 0xa8d MovS
	func_2245(var_32_cvector, var_375_string); // 0xa8e NEW_2
	var_376_int = 507270; // 0xa90 PushI
	SetMessage(var_376_int); // 0xa91 TObjFunc
	ClearReplies(); // 0xa93 TObjFunc
	var_377_int = 507272; // 0xa95 PushI
	var_378_int = 8019; // 0xa96 PushI
	var_379_int = 8016; // 0xa97 PushI
	AddReply(var_377_int, var_378_int, var_379_int); // 0xa98 TObjFunc
	var_380_int = 507273; // 0xa9a PushI
	var_381_int = 8015; // 0xa9b PushI
	var_382_int = 8017; // 0xa9c PushI
	AddReply(var_380_int, var_381_int, var_382_int); // 0xa9d TObjFunc
	var_383_int = 507274; // 0xa9f PushI
	var_384_int = -1; // 0xaa0 PushI
	var_385_int = 8018; // 0xaa1 PushI
	AddReply(var_383_int, var_384_int, var_385_int); // 0xaa2 TObjFunc
	return 0; // 0xaa4 Return
	
Label_2725:
	var_386_int = 8019; // 0xaa5 PushI
	var_387_bool = var_31_bool == var_386_int; // 0xaa6 Eq
	if(var_387_bool == 0) goto Label_2743; // 0xaa7 JumpB
	var_388_string = ""; // 0xaa8 PushV
	var_388_string = "Sexy"; // 0xaa9 MovS
	func_2245(var_32_cvector, var_388_string); // 0xaaa NEW_2
	var_389_int = 507275; // 0xaac PushI
	SetMessage(var_389_int); // 0xaad TObjFunc
	ClearReplies(); // 0xaaf TObjFunc
	var_390_int = 507276; // 0xab1 PushI
	var_391_int = 8015; // 0xab2 PushI
	var_392_int = 8020; // 0xab3 PushI
	AddReply(var_390_int, var_391_int, var_392_int); // 0xab4 TObjFunc
	return 0; // 0xab6 Return
	
Label_2743:
	var_393_int = 8015; // 0xab7 PushI
	var_394_bool = var_31_bool == var_393_int; // 0xab8 Eq
	if(var_394_bool == 0) goto Label_2766; // 0xab9 JumpB
	var_395_object = Obj(); var_396_object = Obj(); // 0xaba PushV
	var_395_object = var_1_object; // 0xabb MovT
	var_396_object = var_0_object; // 0xabc MovT
	func_4939(); // 0xabd NEW_2
	var_399_string = ""; // 0xabf PushV
	var_399_string = "Neutral"; // 0xac0 MovS
	func_2245(var_32_cvector, var_399_string); // 0xac1 NEW_2
	var_400_int = 507271; // 0xac3 PushI
	SetMessage(var_400_int); // 0xac4 TObjFunc
	ClearReplies(); // 0xac6 TObjFunc
	var_401_int = 533818; // 0xac8 PushI
	var_402_int = 35366; // 0xac9 PushI
	var_403_int = 35365; // 0xaca PushI
	AddReply(var_401_int, var_402_int, var_403_int); // 0xacb TObjFunc
	return 0; // 0xacd Return
	
Label_2766:
	var_404_int = 35366; // 0xace PushI
	var_405_bool = var_31_bool == var_404_int; // 0xacf Eq
	if(var_405_bool == 0) goto Label_2789; // 0xad0 JumpB
	var_406_string = ""; // 0xad1 PushV
	var_406_string = "Neutral"; // 0xad2 MovS
	func_2245(var_32_cvector, var_406_string); // 0xad3 NEW_2
	var_407_int = 533819; // 0xad5 PushI
	SetMessage(var_407_int); // 0xad6 TObjFunc
	ClearReplies(); // 0xad8 TObjFunc
	var_408_int = 507277; // 0xada PushI
	var_409_int = 8023; // 0xadb PushI
	var_410_int = 8022; // 0xadc PushI
	AddReply(var_408_int, var_409_int, var_410_int); // 0xadd TObjFunc
	var_411_int = 507284; // 0xadf PushI
	var_412_int = 8030; // 0xae0 PushI
	var_413_int = 8029; // 0xae1 PushI
	AddReply(var_411_int, var_412_int, var_413_int); // 0xae2 TObjFunc
	return 0; // 0xae4 Return
	
Label_2789:
	var_414_int = 8030; // 0xae5 PushI
	var_415_bool = var_31_bool == var_414_int; // 0xae6 Eq
	if(var_415_bool == 0) goto Label_2807; // 0xae7 JumpB
	var_416_string = ""; // 0xae8 PushV
	var_416_string = "Love"; // 0xae9 MovS
	func_2245(var_32_cvector, var_416_string); // 0xaea NEW_2
	var_417_int = 507285; // 0xaec PushI
	SetMessage(var_417_int); // 0xaed TObjFunc
	ClearReplies(); // 0xaef TObjFunc
	var_418_int = 507286; // 0xaf1 PushI
	var_419_int = 8025; // 0xaf2 PushI
	var_420_int = 8031; // 0xaf3 PushI
	AddReply(var_418_int, var_419_int, var_420_int); // 0xaf4 TObjFunc
	return 0; // 0xaf6 Return
	
Label_2807:
	var_421_int = 8023; // 0xaf7 PushI
	var_422_bool = var_31_bool == var_421_int; // 0xaf8 Eq
	if(var_422_bool == 0) goto Label_2825; // 0xaf9 JumpB
	var_423_string = ""; // 0xafa PushV
	var_423_string = "Love"; // 0xafb MovS
	func_2245(var_32_cvector, var_423_string); // 0xafc NEW_2
	var_424_int = 507278; // 0xafe PushI
	SetMessage(var_424_int); // 0xaff TObjFunc
	ClearReplies(); // 0xb01 TObjFunc
	var_425_int = 507279; // 0xb03 PushI
	var_426_int = 8025; // 0xb04 PushI
	var_427_int = 8024; // 0xb05 PushI
	AddReply(var_425_int, var_426_int, var_427_int); // 0xb06 TObjFunc
	return 0; // 0xb08 Return
	
Label_2825:
	var_428_int = 8025; // 0xb09 PushI
	var_429_bool = var_31_bool == var_428_int; // 0xb0a Eq
	if(var_429_bool == 0) goto Label_2843; // 0xb0b JumpB
	var_430_string = ""; // 0xb0c PushV
	var_430_string = "Love"; // 0xb0d MovS
	func_2245(var_32_cvector, var_430_string); // 0xb0e NEW_2
	var_431_int = 507280; // 0xb10 PushI
	SetMessage(var_431_int); // 0xb11 TObjFunc
	ClearReplies(); // 0xb13 TObjFunc
	var_432_int = 533820; // 0xb15 PushI
	var_433_int = 35368; // 0xb16 PushI
	var_434_int = 35367; // 0xb17 PushI
	AddReply(var_432_int, var_433_int, var_434_int); // 0xb18 TObjFunc
	return 0; // 0xb1a Return
	
Label_2843:
	var_435_int = 35368; // 0xb1b PushI
	var_436_bool = var_31_bool == var_435_int; // 0xb1c Eq
	if(var_436_bool == 0) goto Label_2871; // 0xb1d JumpB
	var_437_string = ""; // 0xb1e PushV
	var_437_string = "Love"; // 0xb1f MovS
	func_2245(var_32_cvector, var_437_string); // 0xb20 NEW_2
	var_438_int = 533821; // 0xb22 PushI
	SetMessage(var_438_int); // 0xb23 TObjFunc
	ClearReplies(); // 0xb25 TObjFunc
	var_439_int = 507281; // 0xb27 PushI
	var_440_int = -1; // 0xb28 PushI
	var_441_int = 8026; // 0xb29 PushI
	AddReply(var_439_int, var_440_int, var_441_int); // 0xb2a TObjFunc
	var_442_int = 507282; // 0xb2c PushI
	var_443_int = -1; // 0xb2d PushI
	var_444_int = 8027; // 0xb2e PushI
	AddReply(var_442_int, var_443_int, var_444_int); // 0xb2f TObjFunc
	var_445_int = 507283; // 0xb31 PushI
	var_446_int = -1; // 0xb32 PushI
	var_447_int = 8028; // 0xb33 PushI
	AddReply(var_445_int, var_446_int, var_447_int); // 0xb34 TObjFunc
	return 0; // 0xb36 Return
	
Label_2871:
	var_3_string = 1; // 0xb37 TMovB
	var_448_bool = 0; // 0xb38 PushV
	func_4689(var_448_bool); // 0xb39 NEW_2
	if(var_448_bool == 0) goto Label_2879; // 0xb3b JumpB
	lshStopAnimation(); // 0xb3c Func
	goto Label_2881; // 0xb3e Jump
	
Label_2881:
	return 0; // 0xb41 Return
	
Label_2879:
	StopAnimation(); // 0xb3f Func
	
Label_2883:
	return 0; // 0xb43 Return
}


task_7_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_cvector)
{
	var_33_int = 1; // 0xbe1 PushI
	if(var_33_int == 0) goto Label_3171; // 0xbe2 JumpB
	func_4537(); // 0xbe4 NEW_2
	var_35_int = 10839; // 0xbe6 PushI
	var_36_bool = var_31_bool == var_35_int; // 0xbe7 Eq
	if(var_36_bool == 0) goto Label_3064; // 0xbe8 JumpB
	var_37_string = ""; // 0xbe9 PushV
	var_37_string = "Neutral"; // 0xbea MovS
	func_3018(var_32_cvector, var_37_string); // 0xbeb NEW_2
	var_54_int = 509840; // 0xbed PushI
	SetMessage(var_54_int); // 0xbee TObjFunc
	ClearReplies(); // 0xbf0 TObjFunc
	var_55_int = 511259; // 0xbf2 PushI
	var_56_int = -1; // 0xbf3 PushI
	var_57_int = 12449; // 0xbf4 PushI
	AddReply(var_55_int, var_56_int, var_57_int); // 0xbf5 TObjFunc
	return 0; // 0xbf7 Return
	
Label_3064:
	var_58_int = 10821; // 0xbf8 PushI
	var_59_bool = var_31_bool == var_58_int; // 0xbf9 Eq
	if(var_59_bool == 0) goto Label_3067; // 0xbfa JumpB
	
Label_3067:
	var_60_int = 10835; // 0xbfb PushI
	var_61_bool = var_31_bool == var_60_int; // 0xbfc Eq
	if(var_61_bool == 0) goto Label_3090; // 0xbfd JumpB
	var_62_string = ""; // 0xbfe PushV
	var_62_string = "Sexy"; // 0xbff MovS
	func_3018(var_32_cvector, var_62_string); // 0xc00 NEW_2
	var_63_int = 509837; // 0xc02 PushI
	SetMessage(var_63_int); // 0xc03 TObjFunc
	ClearReplies(); // 0xc05 TObjFunc
	var_64_int = 509839; // 0xc07 PushI
	var_65_int = 10828; // 0xc08 PushI
	var_66_int = 10837; // 0xc09 PushI
	AddReply(var_64_int, var_65_int, var_66_int); // 0xc0a TObjFunc
	var_67_int = 509838; // 0xc0c PushI
	var_68_int = -1; // 0xc0d PushI
	var_69_int = 10836; // 0xc0e PushI
	AddReply(var_67_int, var_68_int, var_69_int); // 0xc0f TObjFunc
	return 0; // 0xc11 Return
	
Label_3090:
	var_70_int = 10828; // 0xc12 PushI
	var_71_bool = var_31_bool == var_70_int; // 0xc13 Eq
	if(var_71_bool == 0) goto Label_3113; // 0xc14 JumpB
	var_72_string = ""; // 0xc15 PushV
	var_72_string = "Sexy"; // 0xc16 MovS
	func_3018(var_32_cvector, var_72_string); // 0xc17 NEW_2
	var_73_int = 509830; // 0xc19 PushI
	SetMessage(var_73_int); // 0xc1a TObjFunc
	ClearReplies(); // 0xc1c TObjFunc
	var_74_int = 509831; // 0xc1e PushI
	var_75_int = -1; // 0xc1f PushI
	var_76_int = 10829; // 0xc20 PushI
	AddReply(var_74_int, var_75_int, var_76_int); // 0xc21 TObjFunc
	var_77_int = 509832; // 0xc23 PushI
	var_78_int = 10831; // 0xc24 PushI
	var_79_int = 10830; // 0xc25 PushI
	AddReply(var_77_int, var_78_int, var_79_int); // 0xc26 TObjFunc
	return 0; // 0xc28 Return
	
Label_3113:
	var_80_int = 10831; // 0xc29 PushI
	var_81_bool = var_31_bool == var_80_int; // 0xc2a Eq
	if(var_81_bool == 0) goto Label_3136; // 0xc2b JumpB
	var_82_string = ""; // 0xc2c PushV
	var_82_string = "Sexy"; // 0xc2d MovS
	func_3018(var_32_cvector, var_82_string); // 0xc2e NEW_2
	var_83_int = 509833; // 0xc30 PushI
	SetMessage(var_83_int); // 0xc31 TObjFunc
	ClearReplies(); // 0xc33 TObjFunc
	var_84_int = 509834; // 0xc35 PushI
	var_85_int = -1; // 0xc36 PushI
	var_86_int = 10832; // 0xc37 PushI
	AddReply(var_84_int, var_85_int, var_86_int); // 0xc38 TObjFunc
	var_87_int = 509835; // 0xc3a PushI
	var_88_int = -1; // 0xc3b PushI
	var_89_int = 10833; // 0xc3c PushI
	AddReply(var_87_int, var_88_int, var_89_int); // 0xc3d TObjFunc
	return 0; // 0xc3f Return
	
Label_3136:
	var_90_int = 10823; // 0xc40 PushI
	var_91_bool = var_31_bool == var_90_int; // 0xc41 Eq
	if(var_91_bool == 0) goto Label_3159; // 0xc42 JumpB
	var_92_string = ""; // 0xc43 PushV
	var_92_string = "Sexy"; // 0xc44 MovS
	func_3018(var_32_cvector, var_92_string); // 0xc45 NEW_2
	var_93_int = 509826; // 0xc47 PushI
	SetMessage(var_93_int); // 0xc48 TObjFunc
	ClearReplies(); // 0xc4a TObjFunc
	var_94_int = 509827; // 0xc4c PushI
	var_95_int = 10828; // 0xc4d PushI
	var_96_int = 10824; // 0xc4e PushI
	AddReply(var_94_int, var_95_int, var_96_int); // 0xc4f TObjFunc
	var_97_int = 509828; // 0xc51 PushI
	var_98_int = -1; // 0xc52 PushI
	var_99_int = 10826; // 0xc53 PushI
	AddReply(var_97_int, var_98_int, var_99_int); // 0xc54 TObjFunc
	return 0; // 0xc56 Return
	
Label_3159:
	var_3_string = 1; // 0xc57 TMovB
	var_100_bool = 0; // 0xc58 PushV
	func_4689(var_100_bool); // 0xc59 NEW_2
	if(var_100_bool == 0) goto Label_3167; // 0xc5b JumpB
	lshStopAnimation(); // 0xc5c Func
	goto Label_3169; // 0xc5e Jump
	
Label_3169:
	return 0; // 0xc61 Return
	
Label_3167:
	StopAnimation(); // 0xc5f Func
	
Label_3171:
	return 0; // 0xc63 Return
}


task_9_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_int, var_26_int, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_cvector)
{
	var_33_int = 1; // 0xd42 PushI
	if(var_33_int == 0) goto Label_3776; // 0xd43 JumpB
	func_4537(); // 0xd45 NEW_2
	var_35_int = 12447; // 0xd47 PushI
	var_36_bool = var_32_cvector == var_35_int; // 0xd48 Eq
	if(var_36_bool == 0) goto Label_3407; // 0xd49 JumpB
	var_37_object = Obj(); var_38_object = Obj(); // 0xd4a PushV
	var_37_object = var_1_object; // 0xd4b MovT
	var_38_object = var_0_object; // 0xd4c MovT
	func_5027(); // 0xd4d NEW_2
	
Label_3407:
	var_41_int = 36784; // 0xd4f PushI
	var_42_bool = var_32_cvector == var_41_int; // 0xd50 Eq
	if(var_42_bool == 0) goto Label_3415; // 0xd51 JumpB
	var_43_object = Obj(); var_44_object = Obj(); // 0xd52 PushV
	var_43_object = var_1_object; // 0xd53 MovT
	var_44_object = var_0_object; // 0xd54 MovT
	func_4832(); // 0xd55 NEW_2
	
Label_3415:
	var_47_int = 12445; // 0xd57 PushI
	var_48_bool = var_31_bool == var_47_int; // 0xd58 Eq
	if(var_48_bool == 0) goto Label_3498; // 0xd59 JumpB
	var_49_string = ""; // 0xd5a PushV
	var_49_string = "Neutral"; // 0xd5b MovS
	func_3371(var_32_cvector, var_49_string); // 0xd5c NEW_2
	var_66_int = 511255; // 0xd5e PushI
	SetMessage(var_66_int); // 0xd5f TObjFunc
	ClearReplies(); // 0xd61 TObjFunc
	var_67_bool = 0; // 0xd63 PushV
	var_67_bool = 1; // 0xd64 MovB
	var_68_bool = 0; // 0xd65 PushV
	var_68_bool = 1; // 0xd66 MovB
	var_69_bool = 0; // 0xd67 PushV
	var_69_bool = 0; // 0xd68 MovB
	var_70_bool = 0; var_71_object = Obj(); // 0xd69 PushV
	var_71_object = var_1_object; // 0xd6a MovT
	func_5357(var_71_object); // 0xd6b NEW_2
	if(var_70_bool == 0) goto Label_3444; // 0xd6d JumpB
	var_78_bool = 0; var_79_object = Obj(); // 0xd6e PushV
	var_79_object = var_1_object; // 0xd6f MovT
	func_5297(var_79_object); // 0xd70 NEW_2
	if(var_78_bool == 0) goto Label_3444; // 0xd72 JumpB
	var_69_bool = 1; // 0xd73 MovB
	
Label_3444:
	if(var_69_bool == 0) goto Label_3460; // 0xd74 JumpB
	var_84_bool = 0; // 0xd75 PushV
	var_84_bool = 0; // 0xd76 MovB
	var_85_bool = 0; var_86_object = Obj(); // 0xd77 PushV
	var_86_object = var_1_object; // 0xd78 MovT
	func_5321(var_86_object); // 0xd79 NEW_2
	if(var_85_bool == 0) goto Label_3458; // 0xd7b JumpB
	var_91_bool = 0; var_92_object = Obj(); // 0xd7c PushV
	var_92_object = var_1_object; // 0xd7d MovT
	func_5357(var_92_object); // 0xd7e NEW_2
	if(var_91_bool == 0) goto Label_3458; // 0xd80 JumpB
	var_84_bool = 1; // 0xd81 MovB
	
Label_3458:
	if(var_84_bool == 0) goto Label_3460; // 0xd82 JumpB
	var_68_bool = 0; // 0xd83 MovB
	
Label_3460:
	if(var_68_bool == 0) goto Label_3476; // 0xd84 JumpB
	var_93_bool = 0; // 0xd85 PushV
	var_93_bool = 0; // 0xd86 MovB
	var_94_bool = 0; var_95_object = Obj(); // 0xd87 PushV
	var_95_object = var_1_object; // 0xd88 MovT
	func_5309(var_95_object); // 0xd89 NEW_2
	if(var_94_bool == 0) goto Label_3474; // 0xd8b JumpB
	var_100_bool = 0; var_101_object = Obj(); // 0xd8c PushV
	var_101_object = var_1_object; // 0xd8d MovT
	func_5357(var_101_object); // 0xd8e NEW_2
	if(var_100_bool == 0) goto Label_3474; // 0xd90 JumpB
	var_93_bool = 1; // 0xd91 MovB
	
Label_3474:
	if(var_93_bool == 0) goto Label_3476; // 0xd92 JumpB
	var_67_bool = 0; // 0xd93 MovB
	
Label_3476:
	if(var_67_bool == 0) goto Label_3482; // 0xd94 JumpB
	var_102_int = 511257; // 0xd95 PushI
	var_103_int = 12448; // 0xd96 PushI
	var_104_int = 12447; // 0xd97 PushI
	AddReply(var_102_int, var_103_int, var_104_int); // 0xd98 TObjFunc
	
Label_3482:
	var_105_bool = 0; var_106_object = Obj(); // 0xd9a PushV
	var_106_object = var_1_object; // 0xd9b MovT
	func_5165(var_106_object); // 0xd9c NEW_2
	if(var_105_bool == 0) goto Label_3492; // 0xd9e JumpB
	var_111_int = 535125; // 0xd9f PushI
	var_112_int = 36785; // 0xda0 PushI
	var_113_int = 36784; // 0xda1 PushI
	AddReply(var_111_int, var_112_int, var_113_int); // 0xda2 TObjFunc
	
Label_3492:
	var_114_int = 511256; // 0xda4 PushI
	var_115_int = -1; // 0xda5 PushI
	var_116_int = 12446; // 0xda6 PushI
	AddReply(var_114_int, var_115_int, var_116_int); // 0xda7 TObjFunc
	return 0; // 0xda9 Return
	
Label_3498:
	var_117_int = 36785; // 0xdaa PushI
	var_118_bool = var_31_bool == var_117_int; // 0xdab Eq
	if(var_118_bool == 0) goto Label_3521; // 0xdac JumpB
	var_119_string = ""; // 0xdad PushV
	var_119_string = "Modesty"; // 0xdae MovS
	func_3371(var_32_cvector, var_119_string); // 0xdaf NEW_2
	var_120_int = 535126; // 0xdb1 PushI
	SetMessage(var_120_int); // 0xdb2 TObjFunc
	ClearReplies(); // 0xdb4 TObjFunc
	var_121_int = 535127; // 0xdb6 PushI
	var_122_int = 36787; // 0xdb7 PushI
	var_123_int = 36786; // 0xdb8 PushI
	AddReply(var_121_int, var_122_int, var_123_int); // 0xdb9 TObjFunc
	var_124_int = 535134; // 0xdbb PushI
	var_125_int = 36787; // 0xdbc PushI
	var_126_int = 36793; // 0xdbd PushI
	AddReply(var_124_int, var_125_int, var_126_int); // 0xdbe TObjFunc
	return 0; // 0xdc0 Return
	
Label_3521:
	var_127_int = 36787; // 0xdc1 PushI
	var_128_bool = var_31_bool == var_127_int; // 0xdc2 Eq
	if(var_128_bool == 0) goto Label_3544; // 0xdc3 JumpB
	var_129_string = ""; // 0xdc4 PushV
	var_129_string = "Modesty"; // 0xdc5 MovS
	func_3371(var_32_cvector, var_129_string); // 0xdc6 NEW_2
	var_130_int = 535128; // 0xdc8 PushI
	SetMessage(var_130_int); // 0xdc9 TObjFunc
	ClearReplies(); // 0xdcb TObjFunc
	var_131_int = 535129; // 0xdcd PushI
	var_132_int = 36789; // 0xdce PushI
	var_133_int = 36788; // 0xdcf PushI
	AddReply(var_131_int, var_132_int, var_133_int); // 0xdd0 TObjFunc
	var_134_int = 535137; // 0xdd2 PushI
	var_135_int = 36798; // 0xdd3 PushI
	var_136_int = 36797; // 0xdd4 PushI
	AddReply(var_134_int, var_135_int, var_136_int); // 0xdd5 TObjFunc
	return 0; // 0xdd7 Return
	
Label_3544:
	var_137_int = 36798; // 0xdd8 PushI
	var_138_bool = var_31_bool == var_137_int; // 0xdd9 Eq
	if(var_138_bool == 0) goto Label_3567; // 0xdda JumpB
	var_139_string = ""; // 0xddb PushV
	var_139_string = "Modesty"; // 0xddc MovS
	func_3371(var_32_cvector, var_139_string); // 0xddd NEW_2
	var_140_int = 535138; // 0xddf PushI
	SetMessage(var_140_int); // 0xde0 TObjFunc
	ClearReplies(); // 0xde2 TObjFunc
	var_141_int = 535139; // 0xde4 PushI
	var_142_int = -1; // 0xde5 PushI
	var_143_int = 36799; // 0xde6 PushI
	AddReply(var_141_int, var_142_int, var_143_int); // 0xde7 TObjFunc
	var_144_int = 535140; // 0xde9 PushI
	var_145_int = 36789; // 0xdea PushI
	var_146_int = 36800; // 0xdeb PushI
	AddReply(var_144_int, var_145_int, var_146_int); // 0xdec TObjFunc
	return 0; // 0xdee Return
	
Label_3567:
	var_147_int = 36789; // 0xdef PushI
	var_148_bool = var_31_bool == var_147_int; // 0xdf0 Eq
	if(var_148_bool == 0) goto Label_3595; // 0xdf1 JumpB
	var_149_string = ""; // 0xdf2 PushV
	var_149_string = "Modesty"; // 0xdf3 MovS
	func_3371(var_32_cvector, var_149_string); // 0xdf4 NEW_2
	var_150_int = 535130; // 0xdf6 PushI
	SetMessage(var_150_int); // 0xdf7 TObjFunc
	ClearReplies(); // 0xdf9 TObjFunc
	var_151_int = 535131; // 0xdfb PushI
	var_152_int = 36791; // 0xdfc PushI
	var_153_int = 36790; // 0xdfd PushI
	AddReply(var_151_int, var_152_int, var_153_int); // 0xdfe TObjFunc
	var_154_bool = 0; var_155_object = Obj(); // 0xe00 PushV
	var_155_object = var_1_object; // 0xe01 MovT
	func_5285(var_155_object); // 0xe02 NEW_2
	if(var_154_bool == 0) goto Label_3594; // 0xe04 JumpB
	var_160_int = 535135; // 0xe05 PushI
	var_161_int = -1; // 0xe06 PushI
	var_162_int = 36795; // 0xe07 PushI
	AddReply(var_160_int, var_161_int, var_162_int); // 0xe08 TObjFunc
	
Label_3594:
	return 0; // 0xe0a Return
	
Label_3595:
	var_163_int = 36791; // 0xe0b PushI
	var_164_bool = var_31_bool == var_163_int; // 0xe0c Eq
	if(var_164_bool == 0) goto Label_3618; // 0xe0d JumpB
	var_165_string = ""; // 0xe0e PushV
	var_165_string = "Modesty"; // 0xe0f MovS
	func_3371(var_32_cvector, var_165_string); // 0xe10 NEW_2
	var_166_int = 535132; // 0xe12 PushI
	SetMessage(var_166_int); // 0xe13 TObjFunc
	ClearReplies(); // 0xe15 TObjFunc
	var_167_int = 535133; // 0xe17 PushI
	var_168_int = -1; // 0xe18 PushI
	var_169_int = 36792; // 0xe19 PushI
	AddReply(var_167_int, var_168_int, var_169_int); // 0xe1a TObjFunc
	var_170_int = 535136; // 0xe1c PushI
	var_171_int = -1; // 0xe1d PushI
	var_172_int = 36796; // 0xe1e PushI
	AddReply(var_170_int, var_171_int, var_172_int); // 0xe1f TObjFunc
	return 0; // 0xe21 Return
	
Label_3618:
	var_173_int = 12448; // 0xe22 PushI
	var_174_bool = var_31_bool == var_173_int; // 0xe23 Eq
	if(var_174_bool == 0) goto Label_3641; // 0xe24 JumpB
	var_175_string = ""; // 0xe25 PushV
	var_175_string = "Neutral"; // 0xe26 MovS
	func_3371(var_32_cvector, var_175_string); // 0xe27 NEW_2
	var_176_int = 511258; // 0xe29 PushI
	SetMessage(var_176_int); // 0xe2a TObjFunc
	ClearReplies(); // 0xe2c TObjFunc
	var_177_int = 511267; // 0xe2e PushI
	var_178_int = 12458; // 0xe2f PushI
	var_179_int = 12457; // 0xe30 PushI
	AddReply(var_177_int, var_178_int, var_179_int); // 0xe31 TObjFunc
	var_180_int = 511260; // 0xe33 PushI
	var_181_int = 12451; // 0xe34 PushI
	var_182_int = 12450; // 0xe35 PushI
	AddReply(var_180_int, var_181_int, var_182_int); // 0xe36 TObjFunc
	return 0; // 0xe38 Return
	
Label_3641:
	var_183_int = 12451; // 0xe39 PushI
	var_184_bool = var_31_bool == var_183_int; // 0xe3a Eq
	if(var_184_bool == 0) goto Label_3659; // 0xe3b JumpB
	var_185_string = ""; // 0xe3c PushV
	var_185_string = "Love"; // 0xe3d MovS
	func_3371(var_32_cvector, var_185_string); // 0xe3e NEW_2
	var_186_int = 511261; // 0xe40 PushI
	SetMessage(var_186_int); // 0xe41 TObjFunc
	ClearReplies(); // 0xe43 TObjFunc
	var_187_int = 511262; // 0xe45 PushI
	var_188_int = 12453; // 0xe46 PushI
	var_189_int = 12452; // 0xe47 PushI
	AddReply(var_187_int, var_188_int, var_189_int); // 0xe48 TObjFunc
	return 0; // 0xe4a Return
	
Label_3659:
	var_190_int = 12453; // 0xe4b PushI
	var_191_bool = var_31_bool == var_190_int; // 0xe4c Eq
	if(var_191_bool == 0) goto Label_3677; // 0xe4d JumpB
	var_192_string = ""; // 0xe4e PushV
	var_192_string = "Love"; // 0xe4f MovS
	func_3371(var_32_cvector, var_192_string); // 0xe50 NEW_2
	var_193_int = 511263; // 0xe52 PushI
	SetMessage(var_193_int); // 0xe53 TObjFunc
	ClearReplies(); // 0xe55 TObjFunc
	var_194_int = 511264; // 0xe57 PushI
	var_195_int = 12455; // 0xe58 PushI
	var_196_int = 12454; // 0xe59 PushI
	AddReply(var_194_int, var_195_int, var_196_int); // 0xe5a TObjFunc
	return 0; // 0xe5c Return
	
Label_3677:
	var_197_int = 12455; // 0xe5d PushI
	var_198_bool = var_31_bool == var_197_int; // 0xe5e Eq
	if(var_198_bool == 0) goto Label_3695; // 0xe5f JumpB
	var_199_string = ""; // 0xe60 PushV
	var_199_string = "Love"; // 0xe61 MovS
	func_3371(var_32_cvector, var_199_string); // 0xe62 NEW_2
	var_200_int = 511265; // 0xe64 PushI
	SetMessage(var_200_int); // 0xe65 TObjFunc
	ClearReplies(); // 0xe67 TObjFunc
	var_201_int = 511266; // 0xe69 PushI
	var_202_int = 12458; // 0xe6a PushI
	var_203_int = 12456; // 0xe6b PushI
	AddReply(var_201_int, var_202_int, var_203_int); // 0xe6c TObjFunc
	return 0; // 0xe6e Return
	
Label_3695:
	var_204_int = 12458; // 0xe6f PushI
	var_205_bool = var_31_bool == var_204_int; // 0xe70 Eq
	if(var_205_bool == 0) goto Label_3718; // 0xe71 JumpB
	var_206_string = ""; // 0xe72 PushV
	var_206_string = "Neutral"; // 0xe73 MovS
	func_3371(var_32_cvector, var_206_string); // 0xe74 NEW_2
	var_207_int = 511268; // 0xe76 PushI
	SetMessage(var_207_int); // 0xe77 TObjFunc
	ClearReplies(); // 0xe79 TObjFunc
	var_208_int = 511269; // 0xe7b PushI
	var_209_int = 12463; // 0xe7c PushI
	var_210_int = 12459; // 0xe7d PushI
	AddReply(var_208_int, var_209_int, var_210_int); // 0xe7e TObjFunc
	var_211_int = 511270; // 0xe80 PushI
	var_212_int = 12461; // 0xe81 PushI
	var_213_int = 12460; // 0xe82 PushI
	AddReply(var_211_int, var_212_int, var_213_int); // 0xe83 TObjFunc
	return 0; // 0xe85 Return
	
Label_3718:
	var_214_int = 12461; // 0xe86 PushI
	var_215_bool = var_31_bool == var_214_int; // 0xe87 Eq
	if(var_215_bool == 0) goto Label_3741; // 0xe88 JumpB
	var_216_string = ""; // 0xe89 PushV
	var_216_string = "Love"; // 0xe8a MovS
	func_3371(var_32_cvector, var_216_string); // 0xe8b NEW_2
	var_217_int = 511271; // 0xe8d PushI
	SetMessage(var_217_int); // 0xe8e TObjFunc
	ClearReplies(); // 0xe90 TObjFunc
	var_218_int = 511273; // 0xe92 PushI
	var_219_int = 12463; // 0xe93 PushI
	var_220_int = 12464; // 0xe94 PushI
	AddReply(var_218_int, var_219_int, var_220_int); // 0xe95 TObjFunc
	var_221_int = 511274; // 0xe97 PushI
	var_222_int = -1; // 0xe98 PushI
	var_223_int = 12465; // 0xe99 PushI
	AddReply(var_221_int, var_222_int, var_223_int); // 0xe9a TObjFunc
	return 0; // 0xe9c Return
	
Label_3741:
	var_224_int = 12463; // 0xe9d PushI
	var_225_bool = var_31_bool == var_224_int; // 0xe9e Eq
	if(var_225_bool == 0) goto Label_3764; // 0xe9f JumpB
	var_226_string = ""; // 0xea0 PushV
	var_226_string = "Love"; // 0xea1 MovS
	func_3371(var_32_cvector, var_226_string); // 0xea2 NEW_2
	var_227_int = 511272; // 0xea4 PushI
	SetMessage(var_227_int); // 0xea5 TObjFunc
	ClearReplies(); // 0xea7 TObjFunc
	var_228_int = 511275; // 0xea9 PushI
	var_229_int = -1; // 0xeaa PushI
	var_230_int = 12467; // 0xeab PushI
	AddReply(var_228_int, var_229_int, var_230_int); // 0xeac TObjFunc
	var_231_int = 511276; // 0xeae PushI
	var_232_int = -1; // 0xeaf PushI
	var_233_int = 12468; // 0xeb0 PushI
	AddReply(var_231_int, var_232_int, var_233_int); // 0xeb1 TObjFunc
	return 0; // 0xeb3 Return
	
Label_3764:
	var_3_string = 1; // 0xeb4 TMovB
	var_234_bool = 0; // 0xeb5 PushV
	func_4689(var_234_bool); // 0xeb6 NEW_2
	if(var_234_bool == 0) goto Label_3772; // 0xeb8 JumpB
	lshStopAnimation(); // 0xeb9 Func
	goto Label_3774; // 0xebb Jump
	
Label_3774:
	return 0; // 0xebe Return
	
Label_3772:
	StopAnimation(); // 0xebc Func
	
Label_3776:
	return 0; // 0xec0 Return
}


task_11_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_int, var_31_int, var_32_cvector)
{
	var_33_int = 1; // 0xf63 PushI
	if(var_33_int == 0) goto Label_3979; // 0xf64 JumpB
	func_4537(); // 0xf66 NEW_2
	var_35_int = 42557; // 0xf68 PushI
	var_36_bool = var_31_int == var_35_int; // 0xf69 Eq
	if(var_36_bool == 0) goto Label_3967; // 0xf6a JumpB
	var_37_string = ""; // 0xf6b PushV
	var_37_string = "Neutral"; // 0xf6c MovS
	func_3916(var_32_cvector, var_37_string); // 0xf6d NEW_2
	var_54_int = 540548; // 0xf6f PushI
	SetMessage(var_54_int); // 0xf70 TObjFunc
	ClearReplies(); // 0xf72 TObjFunc
	var_55_int = 540549; // 0xf74 PushI
	var_56_int = -1; // 0xf75 PushI
	var_57_int = 42558; // 0xf76 PushI
	AddReply(var_55_int, var_56_int, var_57_int); // 0xf77 TObjFunc
	var_58_int = 540797; // 0xf79 PushI
	var_59_int = -1; // 0xf7a PushI
	var_60_int = 42846; // 0xf7b PushI
	AddReply(var_58_int, var_59_int, var_60_int); // 0xf7c TObjFunc
	return 0; // 0xf7e Return
	
Label_3967:
	var_3_string = 1; // 0xf7f TMovB
	var_61_bool = 0; // 0xf80 PushV
	func_4689(var_61_bool); // 0xf81 NEW_2
	if(var_61_bool == 0) goto Label_3975; // 0xf83 JumpB
	lshStopAnimation(); // 0xf84 Func
	goto Label_3977; // 0xf86 Jump
	
Label_3977:
	return 0; // 0xf89 Return
	
Label_3975:
	StopAnimation(); // 0xf87 Func
	
Label_3979:
	return 0; // 0xf8b Return
}


task_12_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_cvector, var_31_int)
{
	var_32_int = 10; // 0xfd6 PushI
	var_33_bool = var_31_int == var_32_int; // 0xfd7 Eq
	if(var_33_bool == 0) goto Label_4090; // 0xfd8 JumpB
	func_4049(); // 0xfda NEW_2
	var_35_bool = 0; // 0xfdc PushV
	var_35_bool = 0; // 0xfdd MovB
	var_36_bool = 0; // 0xfde PushV
	func_4263(var_36_bool); // 0xfdf NEW_2
	if(var_36_bool == 0) goto Label_4071; // 0xfe1 JumpB
	var_39_bool = 0; // 0xfe2 PushV
	func_4018(var_39_bool); // 0xfe3 NEW_2
	if(var_39_bool == 0) goto Label_4071; // 0xfe5 JumpB
	var_35_bool = 1; // 0xfe6 MovB
	
Label_4071:
	if(var_35_bool == 0) goto Label_4084; // 0xfe7 JumpB
	var_56_bool = 0; // 0xfe8 PushV
	func_3998(var_56_bool); // 0xfe9 NEW_2
	if(var_56_bool == 0) goto Label_4083; // 0xfeb JumpB
	var_75_bool = 0; var_76_object = Obj(); // 0xfec PushV
	var_77_object = Obj(); // 0xfed PushV
	func_4544(var_77_object); // 0xfee NEW_2
	var_76_object = var_77_object; // 0xfef Mov
	func_4411(var_76_object); // 0xff1 NEW_2
	
Label_4083:
	goto Label_4090; // 0xff3 Jump
	
Label_4090:
	return 0; // 0xffa Return
	
Label_4084:
	func_4013(var_31_int); // 0xff5 NEW_2
	func_4040(); // 0xff8 NEW_2
}


task_12_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_cvector)
{
	func_4231(); // 0xffc NEW_2
	func_4049(); // 0xfff NEW_2
	lshStopSpeech(); // 0x1001 Func
	lshStopAnimation(); // 0x1003 Func
	StopAsync(); // 0x1005 Func
	Hold(); // 0x1007 Func
	return 0; // 0x1009 Return
}


task_12_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_cvector)
{
	StopGroup0(); // 0x100a Func
	func_4049(); // 0x100d NEW_2
	var_32_string = ""; // 0x100f PushV
	var_32_string = "Neutral"; // 0x1010 MovS
	func_4491(var_32_string); // 0x1011 NEW_2
	func_4040(); // 0x1014 NEW_2
	return 0; // 0x1016 Return
}


task_12_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_cvector, var_31_bool)
{
	var_32_bool = var_31_bool; // 0x1018 Push
	if(var_32_bool == 0) goto Label_4126; // 0x1019 JumpB
	func_4040(); // 0x101b NEW_2
	goto Label_4130; // 0x101d Jump
	
Label_4130:
	return 0; // 0x1022 Return
	
Label_4126:
	var_38_string = ""; // 0x101e PushV
	var_38_string = "Neutral"; // 0x101f MovS
	func_4491(var_38_string); // 0x1020 NEW_2
}


task_12_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_cvector, var_31_object)
{
	var_32_bool = 0; var_33_bool = 0; // 0x1023 PushV
	IsOverrideActive(var_33_bool); // 0x1024 Func
	var_34_bool = var_33_bool == 0; // 0x1026 Not
	if(var_34_bool == 0) goto Label_4159; // 0x1027 JumpB
	EventDisable(0); // 0x1028 EventDisable
	func_4231(); // 0x102a NEW_2
	var_35_bool = 0; var_36_object = Obj(); // 0x102c PushV
	var_36_object = var_31_object; // 0x102d Mov
	func_4254(var_36_object); // 0x102e NEW_2
	EventEnable(0); // 0x1030 EventEnable
	var_49_object = Obj(); // 0x1031 PushV
	var_49_object = var_31_object; // 0x1032 Mov
	func_5541(var_49_object); // 0x1033 NEW_2
	var_837_string = ""; // 0x1035 PushV
	var_837_string = "Neutral"; // 0x1036 MovS
	func_4491(var_837_string); // 0x1037 NEW_2
	func_4049(); // 0x103a NEW_2
	func_4040(); // 0x103d NEW_2
	
Label_4159:
	return 2; // 0x103f Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_cvector)
{
	func_3984(var_30_cvector); // 0xf8d NEW_2
	return 0; // 0xf8f Return
}


func_0(var_0_object, var_700_int, var_701_object)
{
	var_703_object = Obj(); var_704_bool = 0; var_705_int = 0; var_706_bool = 0; var_707_object = Obj(); var_708_bool = 0; var_709_int = 0; var_710_bool = 0; // 0x0 PushV
	var_0_object = var_701_object; // 0x1 TMov
	var_711_bool = 0; var_712_object = Obj(); var_713_float = 0; // 0x2 PushV
	var_712_object = var_701_object; // 0x3 Mov
	var_713_float = 70.0; // 0x4 MovF
	func_4268(var_712_object, var_713_float); // 0x5 NEW_2
	var_714_bool = var_711_bool == 0; // 0x7 Not
	if(var_714_bool == 0) goto Label_11; // 0x8 JumpB
	var_700_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_707_object); // 0xb Func
	var_715_int = 0; // 0xd PushV
	func_4683(var_715_int); // 0xe NEW_2
	SetNPCName(var_715_int); // 0x10 ObjFunc
	var_716_int = 0; // 0x12 PushV
	func_4681(var_716_int); // 0x13 NEW_2
	SetNPCDescription(var_716_int); // 0x15 ObjFunc
	var_717_string = ""; // 0x17 PushV
	func_4685(var_717_string); // 0x18 NEW_2
	SetPhoto(var_717_string); // 0x1a ObjFunc
	var_718_string = ""; // 0x1c PushV
	func_4687(var_718_string); // 0x1d NEW_2
	SetPhoto2(var_718_string); // 0x1f ObjFunc
	var_719_int = 0; // 0x21 PushV
	func_5524(var_719_int); // 0x22 NEW_2
	SetPlayerName(var_719_int); // 0x24 ObjFunc
	var_709_int = -1; // 0x26 MovI
	IsOverrideActive(var_708_bool); // 0x27 Func
	var_720_bool = var_708_bool; // 0x29 Push
	if(var_720_bool == 0) goto Label_45; // 0x2a JumpB
	var_700_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_707_object); // 0x2d Func
	var_721_bool = 0; var_722_object = Obj(); // 0x2f PushV
	var_723_object = Obj(); // 0x30 PushV
	func_4544(var_723_object); // 0x31 NEW_2
	var_722_object = var_723_object; // 0x32 Mov
	func_4353(var_721_bool, var_722_object); // 0x34 NEW_2
	var_724_object = Obj(); var_725_object = Obj(); // 0x36 PushV
	var_724_object = var_701_object; // 0x37 Mov
	var_725_object = var_707_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_726_object, var_727_object, var_728_string, var_729_bool, var_724_object, var_725_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	IsDialogEnd(var_710_bool); // 0x3d ObjFunc
	
Label_63:
	var_779_bool = var_710_bool == 0; // 0x3f Not
	if(var_779_bool == 0) goto Label_70; // 0x40 JumpB
	sync(); // 0x41 Func
	IsDialogEnd(var_710_bool); // 0x43 ObjFunc
	goto Label_63; // 0x45 Jump
	
Label_70:
	var_780_object = Obj(); // 0x46 PushV
	var_780_object = var_701_object; // 0x47 Mov
	func_4336(); // 0x48 NEW_2
	StopDialog(var_707_object); // 0x4a Func
	GetReturnValue(var_709_int); // 0x4c ObjFunc
	var_700_int = var_709_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_4353(var_129_bool, var_130_object)
{
	var_134_int = 0; var_135_int = 0; var_136_int = 0; var_137_int = 0; // 0x1101 PushV
	var_138_string = "voice_common"; // 0x1102 PushS
	GetVariable(var_138_string, var_136_int); // 0x1103 Func
	var_139_int = var_136_int; // 0x1105 Push
	if(var_139_int == 0) goto Label_4391; // 0x1106 JumpB
	var_140_bool = 0; var_141_object = Obj(); // 0x1107 PushV
	var_141_object = var_130_object; // 0x1108 Mov
	func_4411(var_141_object); // 0x1109 NEW_2
	var_170_bool = var_140_bool == 0; // 0x110b Not
	if(var_170_bool == 0) goto Label_4373; // 0x110c JumpB
	var_171_bool = 0; var_172_object = Obj(); // 0x110d PushV
	var_172_object = var_130_object; // 0x110e Mov
	func_4448(var_172_object); // 0x110f NEW_2
	var_201_bool = var_171_bool == 0; // 0x1111 Not
	if(var_201_bool == 0) goto Label_4373; // 0x1112 JumpB
	var_129_bool = 0; // 0x1113 MovB
	return 4; // 0x1114 Return
	
Label_4373:
	var_202_int = 2; // 0x1115 PushI
	irand(var_137_int, var_202_int); // 0x1116 Func
	var_203_int = var_137_int; // 0x1118 Push
	if(var_203_int == 0) goto Label_4386; // 0x1119 JumpB
	var_204_string = "voice_common"; // 0x111a PushS
	var_205_int = 1; // 0x111b PushI
	var_206_int = var_136_int + var_205_int; // 0x111c Add
	var_207_int = 3; // 0x111d PushI
	var_208_int = var_206_int / var_207_int; // 0x111e Mod
	SetVariable(var_204_string, var_208_int); // 0x111f Func
	goto Label_4390; // 0x1121 Jump
	
Label_4390:
	goto Label_4409; // 0x1126 Jump
	
Label_4409:
	var_129_bool = 1; // 0x1139 MovB
	return 4; // 0x113a Return
	
Label_4386:
	var_209_string = "voice_common"; // 0x1122 PushS
	var_210_int = 0; // 0x1123 PushI
	SetVariable(var_209_string, var_210_int); // 0x1124 Func
	
Label_4391:
	var_211_bool = 0; var_212_object = Obj(); // 0x1127 PushV
	var_212_object = var_130_object; // 0x1128 Mov
	func_4448(var_212_object); // 0x1129 NEW_2
	var_213_bool = var_211_bool == 0; // 0x112b Not
	if(var_213_bool == 0) goto Label_4405; // 0x112c JumpB
	var_214_bool = 0; var_215_object = Obj(); // 0x112d PushV
	var_215_object = var_130_object; // 0x112e Mov
	func_4411(var_215_object); // 0x112f NEW_2
	var_216_bool = var_214_bool == 0; // 0x1131 Not
	if(var_216_bool == 0) goto Label_4405; // 0x1132 JumpB
	var_129_bool = 0; // 0x1133 MovB
	return 4; // 0x1134 Return
	
Label_4405:
	var_217_string = "voice_common"; // 0x1135 PushS
	var_218_int = 1; // 0x1136 PushI
	SetVariable(var_217_string, var_218_int); // 0x1137 Func
}


func_4868()
{
	var_39_object = Obj(); var_40_object = Obj(); // 0x1304 PushV
	var_41_string = "d2q02"; // 0x1305 PushS
	var_42_int = 1; // 0x1306 PushI
	SetVariable(var_41_string, var_42_int); // 0x1307 Func
	var_43_object = Obj(); // 0x1309 PushV
	func_5474(var_43_object); // 0x130a NEW_2
	var_40_object = var_43_object; // 0x130b Mov
	var_50_string = "d2q02EvaGotoAndrei"; // 0x130d PushS
	var_51_string = "pt_map_andrei"; // 0x130e PushS
	var_52_int = 0; // 0x130f PushI
	var_53_int = 515272; // 0x1310 PushI
	var_54_float = 0; // 0x1311 PushV
	func_4637(var_54_float); // 0x1312 NEW_2
	AddMark(var_50_string, var_51_string, var_52_int, var_53_int, var_54_float); // 0x1314 ObjFunc
	func_5407(); // 0x1317 NEW_2
	func_5420(); // 0x131a NEW_2
	var_88_object = Obj(); var_89_string = ""; // 0x131c PushV
	var_89_string = "quest_d2_02"; // 0x131d MovS
	func_4565(var_88_object, var_89_string); // 0x131e NEW_2
	return 2; // 0x1320 Return
}


func_5381()
{
	var_125_object = Obj(); var_126_object = Obj(); // 0x1505 PushV
	var_127_int = 37; // 0x1506 PushI
	var_128_int = 2; // 0x1507 PushI
	var_129_int = 512119; // 0x1508 PushI
	CreateDiaryEntry(var_126_object, var_127_int, var_128_int, var_129_int); // 0x1509 Func
	var_130_bool = 0; var_131_object = Obj(); var_132_int = 0; // 0x150b PushV
	var_131_object = var_126_object; // 0x150c Mov
	var_132_int = -1; // 0x150d MovI
	func_5446(var_130_bool, var_131_object, var_132_int); // 0x150e NEW_2
	return 2; // 0x1510 Return
}


func_5129(var_361_bool)
{
	var_363_int = 0; var_364_string = ""; // 0x140a PushV
	var_364_string = "ood1Eva4"; // 0x140b MovS
	func_4560(var_363_int, var_364_string); // 0x140c NEW_2
	var_365_int = 0; // 0x140e PushI
	var_366_bool = var_363_int == var_365_int; // 0x140f Eq
	if(var_366_bool == 0) goto Label_5139; // 0x1410 JumpB
	var_361_bool = 1; // 0x1411 MovB
	return 0; // 0x1412 Return
	
Label_5139:
	var_361_bool = 0; // 0x1413 MovB
	return 0; // 0x1414 Return
}


func_4624(var_213_object, var_214_string, var_215_int)
{
	var_216_object = Obj(); var_217_object = Obj(); // 0x1210 PushV
	CreateInvItem(var_217_object); // 0x1211 Func
	SetItemName(var_214_string); // 0x1213 ObjFunc
	var_218_object = Obj(); var_219_object = Obj(); var_220_int = 0; // 0x1215 PushV
	var_218_object = var_213_object; // 0x1216 Mov
	var_219_object = var_217_object; // 0x1217 Mov
	var_220_int = var_215_int; // 0x1218 Mov
	func_4605(var_219_object, var_220_int); // 0x1219 NEW_2
	return 2; // 0x121b Return
}


func_3858(var_0_object, var_1_object, var_2_object, var_3_string, var_805_object, var_806_object)
{
	var_0_object = var_806_object; // 0xf13 TMov
	var_1_object = var_805_object; // 0xf14 TMov
	var_3_string = 0; // 0xf15 TMovB
	var_811_int = 1; // 0xf16 PushI
	if(var_811_int == 0) goto Label_3886; // 0xf17 JumpB
	var_812_string = ""; // 0xf18 PushV
	var_812_string = "Neutral"; // 0xf19 MovS
	func_3916(var_806_object, var_812_string); // 0xf1a NEW_2
	var_820_int = 540548; // 0xf1c PushI
	SetMessage(var_820_int); // 0xf1d TObjFunc
	ClearReplies(); // 0xf1f TObjFunc
	var_821_int = 540549; // 0xf21 PushI
	var_822_int = -1; // 0xf22 PushI
	var_823_int = 42558; // 0xf23 PushI
	AddReply(var_821_int, var_822_int, var_823_int); // 0xf24 TObjFunc
	var_824_int = 540797; // 0xf26 PushI
	var_825_int = -1; // 0xf27 PushI
	var_826_int = 42846; // 0xf28 PushI
	AddReply(var_824_int, var_825_int, var_826_int); // 0xf29 TObjFunc
	goto Label_3886; // 0xf2b Jump
	
Label_3886:
	var_827_bool = 0; // 0xf2e PushV
	func_4689(var_827_bool); // 0xf2f NEW_2
	if(var_827_bool == 0) goto Label_3901; // 0xf31 JumpB
	
Label_3890:
	lshWaitForAnimEnd(); // 0xf32 Func
	var_828_string = var_3_string; // 0xf34 PushT
	if(var_828_string == 0) goto Label_3895; // 0xf35 JumpB
	goto Label_3900; // 0xf36 Jump
	
Label_3900:
	goto Label_3915; // 0xf3c Jump
	
Label_3915:
	return 0; // 0xf4b Return
	
Label_3895:
	var_829_string = ""; // 0xf37 PushV
	var_829_string = var_2_object; // 0xf38 MovT
	func_4491(var_829_string); // 0xf39 NEW_2
	goto Label_3890; // 0xf3b Jump
	
Label_3901:
	var_830_string = "all"; // 0xf3d PushS
	var_831_string = "idle"; // 0xf3e PushS
	PlayAnimation(var_830_string, var_831_string); // 0xf3f Func
	
Label_3905:
	WaitForAnimEnd(); // 0xf41 Func
	var_832_string = var_3_string; // 0xf43 PushT
	if(var_832_string == 0) goto Label_3910; // 0xf44 JumpB
	goto Label_3915; // 0xf45 Jump
	
Label_3910:
	var_833_string = "all"; // 0xf46 PushS
	var_834_string = "idle"; // 0xf47 PushS
	PlayAnimation(var_833_string, var_834_string); // 0xf48 Func
	goto Label_3905; // 0xf4a Jump
}


func_5394()
{
	var_148_object = Obj(); var_149_object = Obj(); // 0x1512 PushV
	var_150_int = 680; // 0x1513 PushI
	var_151_int = 2; // 0x1514 PushI
	var_152_int = 534422; // 0x1515 PushI
	CreateDiaryEntry(var_149_object, var_150_int, var_151_int, var_152_int); // 0x1516 Func
	var_153_bool = 0; var_154_object = Obj(); var_155_int = 0; // 0x1518 PushV
	var_154_object = var_149_object; // 0x1519 Mov
	var_155_int = 37; // 0x151a MovI
	func_5446(var_153_bool, var_154_object, var_155_int); // 0x151b NEW_2
	return 2; // 0x151d Return
}


func_5141(var_296_bool)
{
	var_298_int = 0; var_299_string = ""; // 0x1416 PushV
	var_299_string = "d1q01"; // 0x1417 MovS
	func_4560(var_298_int, var_299_string); // 0x1418 NEW_2
	var_300_int = 6; // 0x141a PushI
	var_301_bool = var_298_int >= var_300_int; // 0x141b GE
	if(var_301_bool == 0) goto Label_5151; // 0x141c JumpB
	var_296_bool = 1; // 0x141d MovB
	return 0; // 0x141e Return
	
Label_5151:
	var_296_bool = 0; // 0x141f MovB
	return 0; // 0x1420 Return
}


func_4637(var_54_float)
{
	var_55_float = 0; var_56_float = 0; // 0x121d PushV
	GetGameTime(var_56_float); // 0x121e Func
	var_54_float = var_56_float; // 0x1220 Mov
	return 2; // 0x1221 Return
}


func_5407()
{
	var_57_object = Obj(); var_58_object = Obj(); // 0x151f PushV
	var_59_int = 11; // 0x1520 PushI
	var_60_int = 2; // 0x1521 PushI
	var_61_int = 503095; // 0x1522 PushI
	CreateDiaryEntry(var_58_object, var_59_int, var_60_int, var_61_int); // 0x1523 Func
	var_62_bool = 0; var_63_object = Obj(); var_64_int = 0; // 0x1525 PushV
	var_63_object = var_58_object; // 0x1526 Mov
	var_64_int = -1; // 0x1527 MovI
	func_5446(var_62_bool, var_63_object, var_64_int); // 0x1528 NEW_2
	return 2; // 0x152a Return
}


func_5153(var_373_bool)
{
	var_375_int = 0; var_376_string = ""; // 0x1422 PushV
	var_376_string = "ood1Eva7"; // 0x1423 MovS
	func_4560(var_375_int, var_376_string); // 0x1424 NEW_2
	var_377_int = 0; // 0x1426 PushI
	var_378_bool = var_375_int == var_377_int; // 0x1427 Eq
	if(var_378_bool == 0) goto Label_5163; // 0x1428 JumpB
	var_373_bool = 1; // 0x1429 MovB
	return 0; // 0x142a Return
	
Label_5163:
	var_373_bool = 0; // 0x142b MovB
	return 0; // 0x142c Return
}


func_4642(var_52_int)
{
	var_53_float = 0; var_54_float = 0; // 0x1222 PushV
	GetGameTime(var_54_float); // 0x1223 Func
	var_55_int = 1; // 0x1225 PushI
	var_56_int = 0; // 0x1226 PushV
	var_57_int = 24; // 0x1227 PushI
	var_56_int = var_54_float / var_54_float; // 0x1228 Div2
	var_52_int = var_55_int + var_56_int; // 0x1229 Add2
	return 2; // 0x122a Return
}


func_4898()
{
	var_39_string = ""; var_40_bool = 0; // 0x1323 PushV
	var_39_string = "icot_eva@door1"; // 0x1324 MovS
	var_40_bool = 0; // 0x1325 MovB
	func_4576(var_39_string, var_40_bool); // 0x1326 NEW_2
	return 0; // 0x1328 Return
}


func_4905()
{
	var_51_object = Obj(); var_52_object = Obj(); // 0x1329 PushV
	var_53_object = Obj(); // 0x132a PushV
	func_5474(var_53_object); // 0x132b NEW_2
	var_52_object = var_53_object; // 0x132c Mov
	var_60_string = "d1q01EvaGotoSimon"; // 0x132e PushS
	var_61_string = "pt_map_georg"; // 0x132f PushS
	var_62_int = 1; // 0x1330 PushI
	var_63_int = 507778; // 0x1331 PushI
	var_64_float = 0; // 0x1332 PushV
	func_4637(var_64_float); // 0x1333 NEW_2
	AddMark(var_60_string, var_61_string, var_62_int, var_63_int, var_64_float); // 0x1335 ObjFunc
	var_67_string = "d1EvaGotoMaria"; // 0x1337 PushS
	var_68_string = "pt_map_maria"; // 0x1338 PushS
	var_69_int = 3; // 0x1339 PushI
	var_70_int = 508628; // 0x133a PushI
	var_71_float = 0; // 0x133b PushV
	func_4637(var_71_float); // 0x133c NEW_2
	AddMark(var_67_string, var_68_string, var_69_int, var_70_int, var_71_float); // 0x133e ObjFunc
	var_72_string = "d1EvaInfo"; // 0x1340 PushS
	var_73_string = "pt_map_eva"; // 0x1341 PushS
	var_74_int = 3; // 0x1342 PushI
	var_75_int = 508630; // 0x1343 PushI
	var_76_float = 0; // 0x1344 PushV
	func_4637(var_76_float); // 0x1345 NEW_2
	AddMark(var_72_string, var_73_string, var_74_int, var_75_int, var_76_float); // 0x1347 ObjFunc
	return 2; // 0x1349 Return
}


func_2090(var_0_object, var_1_object, var_2_object, var_3_string, var_435_object, var_436_object)
{
	var_0_object = var_436_object; // 0x82b TMov
	var_1_object = var_435_object; // 0x82c TMov
	var_3_string = 0; // 0x82d TMovB
	var_441_int = 1; // 0x82e PushI
	if(var_441_int == 0) goto Label_2215; // 0x82f JumpB
	var_442_bool = 0; var_443_object = Obj(); // 0x830 PushV
	var_443_object = var_1_object; // 0x831 MovT
	func_5189(var_443_object); // 0x832 NEW_2
	if(var_442_bool == 0) goto Label_2131; // 0x834 JumpB
	var_448_object = Obj(); var_449_object = Obj(); // 0x835 PushV
	var_448_object = var_1_object; // 0x836 MovT
	var_449_object = var_0_object; // 0x837 MovT
	func_4844(); // 0x838 NEW_2
	var_452_object = Obj(); var_453_object = Obj(); // 0x83a PushV
	var_452_object = var_1_object; // 0x83b MovT
	var_453_object = var_0_object; // 0x83c MovT
	func_4804(); // 0x83d NEW_2
	var_456_string = ""; // 0x83f PushV
	var_456_string = "Fear"; // 0x840 MovS
	func_2245(var_436_object, var_456_string); // 0x841 NEW_2
	var_464_int = 506853; // 0x843 PushI
	SetMessage(var_464_int); // 0x844 TObjFunc
	ClearReplies(); // 0x846 TObjFunc
	var_465_int = 506854; // 0x848 PushI
	var_466_int = 7890; // 0x849 PushI
	var_467_int = 7560; // 0x84a PushI
	AddReply(var_465_int, var_466_int, var_467_int); // 0x84b TObjFunc
	var_468_int = 507262; // 0x84d PushI
	var_469_int = 7890; // 0x84e PushI
	var_470_int = 8004; // 0x84f PushI
	AddReply(var_468_int, var_469_int, var_470_int); // 0x850 TObjFunc
	goto Label_2215; // 0x852 Jump
	
Label_2215:
	var_471_bool = 0; // 0x8a7 PushV
	func_4689(var_471_bool); // 0x8a8 NEW_2
	if(var_471_bool == 0) goto Label_2230; // 0x8aa JumpB
	
Label_2219:
	lshWaitForAnimEnd(); // 0x8ab Func
	var_472_string = var_3_string; // 0x8ad PushT
	if(var_472_string == 0) goto Label_2224; // 0x8ae JumpB
	goto Label_2229; // 0x8af Jump
	
Label_2229:
	goto Label_2244; // 0x8b5 Jump
	
Label_2244:
	return 0; // 0x8c4 Return
	
Label_2224:
	var_473_string = ""; // 0x8b0 PushV
	var_473_string = var_2_object; // 0x8b1 MovT
	func_4491(var_473_string); // 0x8b2 NEW_2
	goto Label_2219; // 0x8b4 Jump
	
Label_2230:
	var_474_string = "all"; // 0x8b6 PushS
	var_475_string = "idle"; // 0x8b7 PushS
	PlayAnimation(var_474_string, var_475_string); // 0x8b8 Func
	
Label_2234:
	WaitForAnimEnd(); // 0x8ba Func
	var_476_string = var_3_string; // 0x8bc PushT
	if(var_476_string == 0) goto Label_2239; // 0x8bd JumpB
	goto Label_2244; // 0x8be Jump
	
Label_2239:
	var_477_string = "all"; // 0x8bf PushS
	var_478_string = "idle"; // 0x8c0 PushS
	PlayAnimation(var_477_string, var_478_string); // 0x8c1 Func
	goto Label_2234; // 0x8c3 Jump
	
Label_2131:
	var_479_string = ""; // 0x853 PushV
	var_479_string = "Neutral"; // 0x854 MovS
	func_2245(var_436_object, var_479_string); // 0x855 NEW_2
	var_480_int = 506855; // 0x857 PushI
	SetMessage(var_480_int); // 0x858 TObjFunc
	ClearReplies(); // 0x85a TObjFunc
	var_481_bool = 0; // 0x85c PushV
	var_481_bool = 0; // 0x85d MovB
	var_482_bool = 0; var_483_object = Obj(); // 0x85e PushV
	var_483_object = var_1_object; // 0x85f MovT
	func_5201(var_483_object); // 0x860 NEW_2
	if(var_482_bool == 0) goto Label_2153; // 0x862 JumpB
	var_488_bool = 0; var_489_object = Obj(); // 0x863 PushV
	var_489_object = var_1_object; // 0x864 MovT
	func_5249(var_489_object); // 0x865 NEW_2
	if(var_488_bool == 0) goto Label_2153; // 0x867 JumpB
	var_481_bool = 1; // 0x868 MovB
	
Label_2153:
	if(var_481_bool == 0) goto Label_2159; // 0x869 JumpB
	var_494_int = 506856; // 0x86a PushI
	var_495_int = 7563; // 0x86b PushI
	var_496_int = 7562; // 0x86c PushI
	AddReply(var_494_int, var_495_int, var_496_int); // 0x86d TObjFunc
	
Label_2159:
	var_497_bool = 0; // 0x86f PushV
	var_497_bool = 0; // 0x870 MovB
	var_498_bool = 0; var_499_object = Obj(); // 0x871 PushV
	var_499_object = var_1_object; // 0x872 MovT
	func_5213(var_499_object); // 0x873 NEW_2
	if(var_498_bool == 0) goto Label_2172; // 0x875 JumpB
	var_504_bool = 0; var_505_object = Obj(); // 0x876 PushV
	var_505_object = var_1_object; // 0x877 MovT
	func_5261(var_505_object); // 0x878 NEW_2
	if(var_504_bool == 0) goto Label_2172; // 0x87a JumpB
	var_497_bool = 1; // 0x87b MovB
	
Label_2172:
	if(var_497_bool == 0) goto Label_2178; // 0x87c JumpB
	var_510_int = 506859; // 0x87d PushI
	var_511_int = 7566; // 0x87e PushI
	var_512_int = 7565; // 0x87f PushI
	AddReply(var_510_int, var_511_int, var_512_int); // 0x880 TObjFunc
	
Label_2178:
	var_513_bool = 0; // 0x882 PushV
	var_513_bool = 0; // 0x883 MovB
	var_514_bool = 0; var_515_object = Obj(); // 0x884 PushV
	var_515_object = var_1_object; // 0x885 MovT
	func_5225(var_515_object); // 0x886 NEW_2
	if(var_514_bool == 0) goto Label_2191; // 0x888 JumpB
	var_520_bool = 0; var_521_object = Obj(); // 0x889 PushV
	var_521_object = var_1_object; // 0x88a MovT
	func_5237(var_521_object); // 0x88b NEW_2
	if(var_520_bool == 0) goto Label_2191; // 0x88d JumpB
	var_513_bool = 1; // 0x88e MovB
	
Label_2191:
	if(var_513_bool == 0) goto Label_2197; // 0x88f JumpB
	var_526_int = 506861; // 0x890 PushI
	var_527_int = 7568; // 0x891 PushI
	var_528_int = 7567; // 0x892 PushI
	AddReply(var_526_int, var_527_int, var_528_int); // 0x893 TObjFunc
	
Label_2197:
	var_529_bool = 0; var_530_object = Obj(); // 0x895 PushV
	var_530_object = var_1_object; // 0x896 MovT
	func_5273(var_530_object); // 0x897 NEW_2
	if(var_529_bool == 0) goto Label_2207; // 0x899 JumpB
	var_535_int = 511392; // 0x89a PushI
	var_536_int = 12590; // 0x89b PushI
	var_537_int = 12589; // 0x89c PushI
	AddReply(var_535_int, var_536_int, var_537_int); // 0x89d TObjFunc
	
Label_2207:
	var_538_int = 507528; // 0x89f PushI
	var_539_int = -1; // 0x8a0 PushI
	var_540_int = 8310; // 0x8a1 PushI
	AddReply(var_538_int, var_539_int, var_540_int); // 0x8a2 TObjFunc
	goto Label_2215; // 0x8a4 Jump
}


func_4651(var_50_bool, var_51_int)
{
	var_52_int = 0; // 0x122c PushV
	func_4642(var_52_int); // 0x122d NEW_2
	var_50_bool = var_52_int == var_51_int; // 0x122f Eq2
	return 0; // 0x1230 Return
}


func_3371(var_2_object, var_631_string)
{
	var_632_bool = 0; // 0xd2c PushV
	func_4689(var_632_bool); // 0xd2d NEW_2
	var_633_bool = var_632_bool == 0; // 0xd2f Not
	if(var_633_bool == 0) goto Label_3378; // 0xd30 JumpB
	return 0; // 0xd31 Return
	
Label_3378:
	var_634_bool = var_631_string == var_2_object; // 0xd32 Eq
	if(var_634_bool == 0) goto Label_3381; // 0xd33 JumpB
	return 0; // 0xd34 Return
	
Label_3381:
	var_635_string = ""; var_636_bool = 0; // 0xd35 PushV
	var_635_string = var_631_string; // 0xd36 Mov
	var_637_string = ""; // 0xd37 PushS
	var_638_bool = var_631_string == var_637_string; // 0xd38 Eq
	if(var_638_bool == 0) goto Label_3388; // 0xd39 JumpB
	var_636_bool = 0; // 0xd3a MovB
	goto Label_3389; // 0xd3b Jump
	
Label_3389:
	func_4507(var_635_string, var_636_bool); // 0xd3d NEW_2
	var_2_object = var_631_string; // 0xd3f TMov
	return 0; // 0xd40 Return
	
Label_3388:
	var_636_bool = 1; // 0xd3c MovB
}


func_5165(var_676_bool)
{
	var_678_int = 0; var_679_string = ""; // 0x142e PushV
	var_679_string = "ood4Eva2"; // 0x142f MovS
	func_4560(var_678_int, var_679_string); // 0x1430 NEW_2
	var_680_int = 0; // 0x1432 PushI
	var_681_bool = var_678_int == var_680_int; // 0x1433 Eq
	if(var_681_bool == 0) goto Label_5175; // 0x1434 JumpB
	var_676_bool = 1; // 0x1435 MovB
	return 0; // 0x1436 Return
	
Label_5175:
	var_676_bool = 0; // 0x1437 MovB
	return 0; // 0x1438 Return
}


func_5420()
{
	var_80_object = Obj(); var_81_object = Obj(); // 0x152c PushV
	var_82_int = 57; // 0x152d PushI
	var_83_int = 2; // 0x152e PushI
	var_84_int = 512139; // 0x152f PushI
	CreateDiaryEntry(var_81_object, var_82_int, var_83_int, var_84_int); // 0x1530 Func
	var_85_bool = 0; var_86_object = Obj(); var_87_int = 0; // 0x1532 PushV
	var_86_object = var_81_object; // 0x1533 Mov
	var_87_int = 11; // 0x1534 MovI
	func_5446(var_85_bool, var_86_object, var_87_int); // 0x1535 NEW_2
	return 2; // 0x1537 Return
}


func_4657(var_55_string, var_56_int)
{
	var_57_string = ""; var_58_string = ""; // 0x1231 PushV
	var_58_string = "idle"; // 0x1232 MovS
	var_59_int = var_56_int; // 0x1233 Push
	if(var_59_int == 0) goto Label_4662; // 0x1234 JumpB
	var_58_string = var_58_string + var_56_int; // 0x1235 Add2
	
Label_4662:
	var_55_string = var_58_string; // 0x1236 Mov
	return 2; // 0x1237 Return
}


func_4664(var_49_int)
{
	var_50_int = 0; var_51_bool = 0; var_52_int = 0; var_53_bool = 0; // 0x1238 PushV
	var_52_int = 0; // 0x1239 MovI
	
Label_4666:
	var_54_string = "all"; // 0x123a PushS
	var_55_string = ""; var_56_int = 0; // 0x123b PushV
	var_56_int = var_52_int; // 0x123c Mov
	func_4657(var_55_string, var_56_int); // 0x123d NEW_2
	HasAnimation(var_53_bool, var_54_string, var_55_string); // 0x123f Func
	var_60_bool = var_53_bool == 0; // 0x1241 Not
	if(var_60_bool == 0) goto Label_4676; // 0x1242 JumpB
	goto Label_4679; // 0x1243 Jump
	
Label_4679:
	var_49_int = var_52_int; // 0x1247 Mov
	return 4; // 0x1248 Return
	
Label_4676:
	var_61_int = 1; // 0x1244 PushI
	var_52_int = var_52_int + var_61_int; // 0x1245 Add2
	goto Label_4666; // 0x1246 Jump
}


func_5177(var_338_bool)
{
	var_340_int = 0; var_341_string = ""; // 0x143a PushV
	var_341_string = "ood1EvaIntro2"; // 0x143b MovS
	func_4560(var_340_int, var_341_string); // 0x143c NEW_2
	var_342_int = 0; // 0x143e PushI
	var_343_bool = var_340_int == var_342_int; // 0x143f Eq
	if(var_343_bool == 0) goto Label_5187; // 0x1440 JumpB
	var_338_bool = 1; // 0x1441 MovB
	return 0; // 0x1442 Return
	
Label_5187:
	var_338_bool = 0; // 0x1443 MovB
	return 0; // 0x1444 Return
}


func_5433(var_71_object)
{
	var_72_object = Obj(); var_73_object = Obj(); // 0x1539 PushV
	GetDiaryRoot(var_73_object); // 0x153a Func
	var_74_bool = var_73_object == 0; // 0x153c Not
	if(var_74_bool == 0) goto Label_5443; // 0x153d JumpB
	var_75_string = "Can't retrieve diary root"; // 0x153e PushS
	Trace(var_75_string); // 0x153f Func
	var_71_object = 0; // 0x1541 MovB
	return 2; // 0x1542 Return
	
Label_5443:
	var_71_object = var_73_object; // 0x1543 Mov
	return 2; // 0x1544 Return
}


func_4411(var_140_bool)
{
	var_142_string = ""; var_143_int = 0; var_144_bool = 0; var_145_int = 0; var_146_string = ""; var_147_string = ""; var_148_int = 0; var_149_bool = 0; var_150_int = 0; var_151_string = ""; // 0x113b PushV
	var_147_string = "c"; // 0x113c MovS
	var_148_int = 0; // 0x113d MovI
	
Label_4414:
	var_152_int = 1; // 0x113e PushI
	if(var_152_int == 0) goto Label_4427; // 0x113f JumpB
	var_153_int = 1; // 0x1140 PushI
	var_154_int = var_148_int + var_153_int; // 0x1141 Add
	var_155_int = var_147_string + var_154_int; // 0x1142 Add
	HasProperty(var_155_int, var_149_bool); // 0x1143 ObjFunc
	var_156_bool = var_149_bool == 0; // 0x1145 Not
	if(var_156_bool == 0) goto Label_4424; // 0x1146 JumpB
	goto Label_4427; // 0x1147 Jump
	
Label_4427:
	var_157_bool = var_148_int == 0; // 0x114b Not
	if(var_157_bool == 0) goto Label_4431; // 0x114c JumpB
	var_140_bool = 0; // 0x114d MovB
	return 10; // 0x114e Return
	
Label_4431:
	var_150_int = 0; // 0x114f MovI
	var_158_int = 1; // 0x1150 PushI
	var_159_bool = var_148_int > var_158_int; // 0x1151 GT
	if(var_159_bool == 0) goto Label_4437; // 0x1152 JumpB
	irand(var_150_int, var_148_int); // 0x1153 Func
	
Label_4437:
	var_160_int = 1; // 0x1155 PushI
	var_161_int = var_150_int + var_160_int; // 0x1156 Add
	var_162_int = var_147_string + var_161_int; // 0x1157 Add
	GetProperty(var_162_int, var_151_string); // 0x1158 ObjFunc
	var_163_bool = 0; var_164_string = ""; // 0x115a PushV
	var_164_string = var_151_string; // 0x115b Mov
	func_4522(var_163_bool, var_164_string); // 0x115c NEW_2
	var_140_bool = var_163_bool; // 0x115d Mov
	return 10; // 0x115f Return
	
Label_4424:
	var_169_int = 1; // 0x1148 PushI
	var_148_int = var_148_int + var_169_int; // 0x1149 Add2
	goto Label_4414; // 0x114a Jump
}


func_4160()
{
	var_35_int = 0; var_36_int = 0; var_37_bool = 0; var_38_int = 0; var_39_int = 0; var_40_bool = 0; var_41_int = 0; var_42_int = 0; var_43_bool = 0; var_44_int = 0; var_45_int = 0; var_46_bool = 0; // 0x1040 PushV
	WaitForAnimEnd(); // 0x1041 Func
	var_47_bool = 0; // 0x1043 PushV
	func_4263(var_47_bool); // 0x1044 NEW_2
	var_48_bool = var_47_bool == 0; // 0x1046 Not
	if(var_48_bool == 0) goto Label_4169; // 0x1047 JumpB
	return 12; // 0x1048 Return
	
Label_4169:
	var_49_int = 0; // 0x1049 PushV
	func_4664(var_49_int); // 0x104a NEW_2
	var_41_int = var_49_int; // 0x104b Mov
	var_42_int = 0; // 0x104d MovI
	
Label_4174:
	var_62_bool = 0; // 0x104e PushV
	var_62_bool = 0; // 0x104f MovB
	var_63_int = 5; // 0x1050 PushI
	var_64_bool = var_42_int < var_63_int; // 0x1051 LT
	if(var_64_bool == 0) goto Label_4184; // 0x1052 JumpB
	var_65_bool = 0; // 0x1053 PushV
	func_4263(var_65_bool); // 0x1054 NEW_2
	if(var_65_bool == 0) goto Label_4184; // 0x1056 JumpB
	var_62_bool = 1; // 0x1057 MovB
	
Label_4184:
	if(var_62_bool == 0) goto Label_4226; // 0x1058 JumpB
	var_66_bool = var_41_int == 0; // 0x1059 Not
	if(var_66_bool == 0) goto Label_4194; // 0x105a JumpB
	var_67_int = 3; // 0x105b PushI
	Sleep(var_67_int, var_43_bool); // 0x105c Func
	var_68_bool = var_43_bool == 0; // 0x105e Not
	if(var_68_bool == 0) goto Label_4193; // 0x105f JumpB
	goto Label_4226; // 0x1060 Jump
	
Label_4226:
	ResetAAS(); // 0x1082 Func
	return 12; // 0x1084 Return
	
Label_4193:
	goto Label_4215; // 0x1061 Jump
	
Label_4215:
	var_69_bool = 0; // 0x1077 PushV
	func_4229(var_69_bool); // 0x1078 NEW_2
	var_70_bool = var_69_bool == 0; // 0x107a Not
	if(var_70_bool == 0) goto Label_4221; // 0x107b JumpB
	goto Label_4226; // 0x107c Jump
	
Label_4221:
	ResetAAS(); // 0x107d Func
	var_71_int = 1; // 0x107f PushI
	var_42_int = var_42_int + var_71_int; // 0x1080 Add2
	goto Label_4174; // 0x1081 Jump
	
Label_4194:
	irand(var_44_int, var_41_int); // 0x1062 Func
	var_72_int = 5; // 0x1064 PushI
	irand(var_45_int, var_72_int); // 0x1065 Func
	var_73_int = 0; // 0x1067 PushI
	var_74_bool = var_45_int != var_73_int; // 0x1068 Neq
	if(var_74_bool == 0) goto Label_4203; // 0x1069 JumpB
	var_44_int = 0; // 0x106a MovI
	
Label_4203:
	var_75_string = "all"; // 0x106b PushS
	var_76_string = ""; var_77_int = 0; // 0x106c PushV
	var_77_int = var_44_int; // 0x106d Mov
	func_4657(var_76_string, var_77_int); // 0x106e NEW_2
	PlayAnimation(var_75_string, var_76_string); // 0x1070 Func
	WaitForAnimEnd(var_46_bool); // 0x1072 Func
	var_78_bool = var_46_bool == 0; // 0x1074 Not
	if(var_78_bool == 0) goto Label_4215; // 0x1075 JumpB
	goto Label_4226; // 0x1076 Jump
}


func_2884(var_0_object, var_545_int, var_546_object)
{
	var_548_object = Obj(); var_549_bool = 0; var_550_int = 0; var_551_bool = 0; var_552_object = Obj(); var_553_bool = 0; var_554_int = 0; var_555_bool = 0; // 0xb44 PushV
	var_0_object = var_546_object; // 0xb45 TMov
	var_556_bool = 0; var_557_object = Obj(); var_558_float = 0; // 0xb46 PushV
	var_557_object = var_546_object; // 0xb47 Mov
	var_558_float = 70.0; // 0xb48 MovF
	func_4268(var_557_object, var_558_float); // 0xb49 NEW_2
	var_559_bool = var_556_bool == 0; // 0xb4b Not
	if(var_559_bool == 0) goto Label_2895; // 0xb4c JumpB
	var_545_int = -2; // 0xb4d MovI
	return 8; // 0xb4e Return
	
Label_2895:
	CreateDialog(var_552_object); // 0xb4f Func
	var_560_int = 0; // 0xb51 PushV
	func_4683(var_560_int); // 0xb52 NEW_2
	SetNPCName(var_560_int); // 0xb54 ObjFunc
	var_561_int = 0; // 0xb56 PushV
	func_4681(var_561_int); // 0xb57 NEW_2
	SetNPCDescription(var_561_int); // 0xb59 ObjFunc
	var_562_string = ""; // 0xb5b PushV
	func_4685(var_562_string); // 0xb5c NEW_2
	SetPhoto(var_562_string); // 0xb5e ObjFunc
	var_563_string = ""; // 0xb60 PushV
	func_4687(var_563_string); // 0xb61 NEW_2
	SetPhoto2(var_563_string); // 0xb63 ObjFunc
	var_564_int = 0; // 0xb65 PushV
	func_5524(var_564_int); // 0xb66 NEW_2
	SetPlayerName(var_564_int); // 0xb68 ObjFunc
	var_554_int = -1; // 0xb6a MovI
	IsOverrideActive(var_553_bool); // 0xb6b Func
	var_565_bool = var_553_bool; // 0xb6d Push
	if(var_565_bool == 0) goto Label_2929; // 0xb6e JumpB
	var_545_int = -2; // 0xb6f MovI
	return 8; // 0xb70 Return
	
Label_2929:
	DoDialog(var_552_object); // 0xb71 Func
	var_566_bool = 0; var_567_object = Obj(); // 0xb73 PushV
	var_568_object = Obj(); // 0xb74 PushV
	func_4544(var_568_object); // 0xb75 NEW_2
	var_567_object = var_568_object; // 0xb76 Mov
	func_4353(var_566_bool, var_567_object); // 0xb78 NEW_2
	var_569_object = Obj(); var_570_object = Obj(); // 0xb7a PushV
	var_569_object = var_546_object; // 0xb7b Mov
	var_570_object = var_552_object; // 0xb7c Mov
	TaskCall(7); // 0xb7d TaskCall
	func_2965(var_571_object, var_572_object, var_573_string, var_574_bool, var_569_object, var_570_object); // 0xb7e NEW_2
	TaskReturn(); // 0xb7f TaskReturn
	IsDialogEnd(var_555_bool); // 0xb81 ObjFunc
	
Label_2947:
	var_596_bool = var_555_bool == 0; // 0xb83 Not
	if(var_596_bool == 0) goto Label_2954; // 0xb84 JumpB
	sync(); // 0xb85 Func
	IsDialogEnd(var_555_bool); // 0xb87 ObjFunc
	goto Label_2947; // 0xb89 Jump
	
Label_2954:
	var_597_object = Obj(); // 0xb8a PushV
	var_597_object = var_546_object; // 0xb8b Mov
	func_4336(); // 0xb8c NEW_2
	StopDialog(var_552_object); // 0xb8e Func
	GetReturnValue(var_554_int); // 0xb90 ObjFunc
	var_545_int = var_554_int; // 0xb92 Mov
	return 8; // 0xb93 Return
}


func_5189(var_442_bool)
{
	var_444_int = 0; var_445_string = ""; // 0x1446 PushV
	var_445_string = "ood2Eva1"; // 0x1447 MovS
	func_4560(var_444_int, var_445_string); // 0x1448 NEW_2
	var_446_int = 0; // 0x144a PushI
	var_447_bool = var_444_int == var_446_int; // 0x144b Eq
	if(var_447_bool == 0) goto Label_5199; // 0x144c JumpB
	var_442_bool = 1; // 0x144d MovB
	return 0; // 0x144e Return
	
Label_5199:
	var_442_bool = 0; // 0x144f MovB
	return 0; // 0x1450 Return
}


func_5446(var_62_bool, var_63_object, var_64_int)
{
	var_65_object = Obj(); var_66_object = Obj(); var_67_int = 0; var_68_object = Obj(); var_69_object = Obj(); var_70_int = 0; // 0x1546 PushV
	var_71_object = Obj(); // 0x1547 PushV
	func_5433(var_71_object); // 0x1548 NEW_2
	var_68_object = var_71_object; // 0x1549 Mov
	Find(var_64_int, var_69_object); // 0x154b ObjFunc
	var_76_bool = var_69_object == 0; // 0x154d Not
	if(var_76_bool == 0) goto Label_5461; // 0x154e JumpB
	var_77_string = "Can't find diary parent with id: "; // 0x154f PushS
	var_78_int = var_77_string + var_64_int; // 0x1550 Add
	Trace(var_78_int); // 0x1551 Func
	var_62_bool = 0; // 0x1553 MovB
	return 6; // 0x1554 Return
	
Label_5461:
	AddChild(var_63_object); // 0x1555 ObjFunc
	var_79_int = 7; // 0x1557 PushI
	SendWorldWndMessage(var_79_int); // 0x1558 Func
	GetCategory(var_70_int); // 0x155a ObjFunc
	SetDiarySection(var_70_int); // 0x155c Func
	var_62_bool = 0; // 0x155e MovB
	return 6; // 0x155f Return
}


func_4681(var_117_int)
{
	var_117_int = 515533; // 0x1249 MovI
	return 0; // 0x124a Return
}


func_4683(var_116_int)
{
	var_116_int = 502858; // 0x124b MovI
	return 0; // 0x124c Return
}


func_4939()
{
	var_397_string = "KnowStation"; // 0x134c PushS
	var_398_int = 1; // 0x134d PushI
	SetVariable(var_397_string, var_398_int); // 0x134e Func
	return 0; // 0x1350 Return
}


func_4685(var_118_string)
{
	var_118_string = "ui/NPC_Eva.png"; // 0x124d MovS
	return 0; // 0x124e Return
}


func_3916(var_2_object, var_812_string)
{
	var_813_bool = 0; // 0xf4d PushV
	func_4689(var_813_bool); // 0xf4e NEW_2
	var_814_bool = var_813_bool == 0; // 0xf50 Not
	if(var_814_bool == 0) goto Label_3923; // 0xf51 JumpB
	return 0; // 0xf52 Return
	
Label_3923:
	var_815_bool = var_812_string == var_2_object; // 0xf53 Eq
	if(var_815_bool == 0) goto Label_3926; // 0xf54 JumpB
	return 0; // 0xf55 Return
	
Label_3926:
	var_816_string = ""; var_817_bool = 0; // 0xf56 PushV
	var_816_string = var_812_string; // 0xf57 Mov
	var_818_string = ""; // 0xf58 PushS
	var_819_bool = var_812_string == var_818_string; // 0xf59 Eq
	if(var_819_bool == 0) goto Label_3933; // 0xf5a JumpB
	var_817_bool = 0; // 0xf5b MovB
	goto Label_3934; // 0xf5c Jump
	
Label_3934:
	func_4507(var_816_string, var_817_bool); // 0xf5e NEW_2
	var_2_object = var_812_string; // 0xf60 TMov
	return 0; // 0xf61 Return
	
Label_3933:
	var_817_bool = 1; // 0xf5d MovB
}


func_4687(var_119_string)
{
	var_119_string = "ui/NPC_Eva_b.png"; // 0x124f MovS
	return 0; // 0x1250 Return
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_724_object, var_725_object)
{
	var_0_object = var_725_object; // 0x52 TMov
	var_1_object = var_724_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_730_int = 1; // 0x55 PushI
	if(var_730_int == 0) goto Label_148; // 0x56 JumpB
	var_731_bool = 0; // 0x57 PushV
	var_731_bool = 0; // 0x58 MovB
	var_732_bool = 0; var_733_object = Obj(); // 0x59 PushV
	var_733_object = var_1_object; // 0x5a MovT
	func_5333(var_733_object); // 0x5b NEW_2
	if(var_732_bool == 0) goto Label_100; // 0x5d JumpB
	var_738_bool = 0; var_739_object = Obj(); // 0x5e PushV
	var_739_object = var_1_object; // 0x5f MovT
	func_5345(var_739_object); // 0x60 NEW_2
	if(var_738_bool == 0) goto Label_100; // 0x62 JumpB
	var_731_bool = 1; // 0x63 MovB
	
Label_100:
	if(var_731_bool == 0) goto Label_126; // 0x64 JumpB
	var_744_object = Obj(); var_745_object = Obj(); // 0x65 PushV
	var_744_object = var_1_object; // 0x66 MovT
	var_745_object = var_0_object; // 0x67 MovT
	func_4973(); // 0x68 NEW_2
	var_748_string = ""; // 0x6a PushV
	var_748_string = "Neutral"; // 0x6b MovS
	func_178(var_725_object, var_748_string); // 0x6c NEW_2
	var_756_int = 503926; // 0x6e PushI
	SetMessage(var_756_int); // 0x6f TObjFunc
	ClearReplies(); // 0x71 TObjFunc
	var_757_int = 503927; // 0x73 PushI
	var_758_int = 4276; // 0x74 PushI
	var_759_int = 4275; // 0x75 PushI
	AddReply(var_757_int, var_758_int, var_759_int); // 0x76 TObjFunc
	var_760_int = 503929; // 0x78 PushI
	var_761_int = 4278; // 0x79 PushI
	var_762_int = 4277; // 0x7a PushI
	AddReply(var_760_int, var_761_int, var_762_int); // 0x7b TObjFunc
	goto Label_148; // 0x7d Jump
	
Label_148:
	var_763_bool = 0; // 0x94 PushV
	func_4689(var_763_bool); // 0x95 NEW_2
	if(var_763_bool == 0) goto Label_163; // 0x97 JumpB
	
Label_152:
	lshWaitForAnimEnd(); // 0x98 Func
	var_764_string = var_3_string; // 0x9a PushT
	if(var_764_string == 0) goto Label_157; // 0x9b JumpB
	goto Label_162; // 0x9c Jump
	
Label_162:
	goto Label_177; // 0xa2 Jump
	
Label_177:
	return 0; // 0xb1 Return
	
Label_157:
	var_765_string = ""; // 0x9d PushV
	var_765_string = var_2_object; // 0x9e MovT
	func_4491(var_765_string); // 0x9f NEW_2
	goto Label_152; // 0xa1 Jump
	
Label_163:
	var_766_string = "all"; // 0xa3 PushS
	var_767_string = "idle"; // 0xa4 PushS
	PlayAnimation(var_766_string, var_767_string); // 0xa5 Func
	
Label_167:
	WaitForAnimEnd(); // 0xa7 Func
	var_768_string = var_3_string; // 0xa9 PushT
	if(var_768_string == 0) goto Label_172; // 0xaa JumpB
	goto Label_177; // 0xab Jump
	
Label_172:
	var_769_string = "all"; // 0xac PushS
	var_770_string = "idle"; // 0xad PushS
	PlayAnimation(var_769_string, var_770_string); // 0xae Func
	goto Label_167; // 0xb0 Jump
	
Label_126:
	var_771_string = ""; // 0x7e PushV
	var_771_string = "Sexy"; // 0x7f MovS
	func_178(var_725_object, var_771_string); // 0x80 NEW_2
	var_772_int = 513718; // 0x82 PushI
	SetMessage(var_772_int); // 0x83 TObjFunc
	ClearReplies(); // 0x85 TObjFunc
	var_773_int = 513719; // 0x87 PushI
	var_774_int = -1; // 0x88 PushI
	var_775_int = 14985; // 0x89 PushI
	AddReply(var_773_int, var_774_int, var_775_int); // 0x8a TObjFunc
	var_776_int = 536133; // 0x8c PushI
	var_777_int = -1; // 0x8d PushI
	var_778_int = 37892; // 0x8e PushI
	AddReply(var_776_int, var_777_int, var_778_int); // 0x8f TObjFunc
	goto Label_148; // 0x91 Jump
}


func_4689(var_111_bool)
{
	var_111_bool = 1; // 0x1251 MovB
	return 0; // 0x1252 Return
}


func_4691()
{
	var_318_string = "ood1EvaIntro3"; // 0x1254 PushS
	var_319_int = 1; // 0x1255 PushI
	SetVariable(var_318_string, var_319_int); // 0x1256 Func
	return 0; // 0x1258 Return
}


func_5201(var_482_bool)
{
	var_484_int = 0; var_485_string = ""; // 0x1452 PushV
	var_485_string = "ood2Eva2"; // 0x1453 MovS
	func_4560(var_484_int, var_485_string); // 0x1454 NEW_2
	var_486_int = 0; // 0x1456 PushI
	var_487_bool = var_484_int == var_486_int; // 0x1457 Eq
	if(var_487_bool == 0) goto Label_5211; // 0x1458 JumpB
	var_482_bool = 1; // 0x1459 MovB
	return 0; // 0x145a Return
	
Label_5211:
	var_482_bool = 0; // 0x145b MovB
	return 0; // 0x145c Return
}


func_4945()
{
	var_166_object = Obj(); var_167_string = ""; var_168_float = 0; // 0x1352 PushV
	var_169_object = Obj(); // 0x1353 PushV
	func_5474(var_169_object); // 0x1354 NEW_2
	var_166_object = var_169_object; // 0x1355 Mov
	var_167_string = "pt_map_ospina"; // 0x1357 MovS
	var_168_float = 2; // 0x1358 MovI
	func_5491(var_166_object, var_167_string, var_168_float); // 0x1359 NEW_2
	var_170_object = Obj(); // 0x135b PushV
	func_5474(var_170_object); // 0x135c NEW_2
	ShowMap(var_170_object); // 0x135e ObjFunc
	return 0; // 0x1360 Return
}


func_4697()
{
	var_115_object = Obj(); var_116_object = Obj(); // 0x1259 PushV
	var_117_string = "d1q03IsKapella"; // 0x125a PushS
	var_118_int = 1; // 0x125b PushI
	SetVariable(var_117_string, var_118_int); // 0x125c Func
	var_119_object = Obj(); // 0x125e PushV
	func_5474(var_119_object); // 0x125f NEW_2
	var_116_object = var_119_object; // 0x1260 Mov
	var_120_string = "d1q03KapellaGotoOspina"; // 0x1262 PushS
	var_121_string = "pt_map_ospina"; // 0x1263 PushS
	var_122_int = 0; // 0x1264 PushI
	var_123_int = 508641; // 0x1265 PushI
	var_124_float = 0; // 0x1266 PushV
	func_4637(var_124_float); // 0x1267 NEW_2
	AddMark(var_120_string, var_121_string, var_122_int, var_123_int, var_124_float); // 0x1269 ObjFunc
	func_5381(); // 0x126c NEW_2
	func_5394(); // 0x126f NEW_2
	var_156_object = Obj(); var_157_string = ""; // 0x1271 PushV
	var_157_string = "quest_d1_03"; // 0x1272 MovS
	func_4565(var_156_object, var_157_string); // 0x1273 NEW_2
	return 2; // 0x1275 Return
}


func_5213(var_498_bool)
{
	var_500_int = 0; var_501_string = ""; // 0x145e PushV
	var_501_string = "ood2Eva3"; // 0x145f MovS
	func_4560(var_500_int, var_501_string); // 0x1460 NEW_2
	var_502_int = 0; // 0x1462 PushI
	var_503_bool = var_500_int == var_502_int; // 0x1463 Eq
	if(var_503_bool == 0) goto Label_5223; // 0x1464 JumpB
	var_498_bool = 1; // 0x1465 MovB
	return 0; // 0x1466 Return
	
Label_5223:
	var_498_bool = 0; // 0x1467 MovB
	return 0; // 0x1468 Return
}


func_4448(var_171_bool)
{
	var_173_string = ""; var_174_int = 0; var_175_bool = 0; var_176_int = 0; var_177_string = ""; var_178_string = ""; var_179_int = 0; var_180_bool = 0; var_181_int = 0; var_182_string = ""; // 0x1160 PushV
	var_183_string = "d"; // 0x1161 PushS
	var_184_int = 0; // 0x1162 PushV
	func_4642(var_184_int); // 0x1163 NEW_2
	var_185_int = var_183_string + var_184_int; // 0x1165 Add
	var_186_string = "m"; // 0x1166 PushS
	var_178_string = var_185_int + var_186_string; // 0x1167 Add2
	var_179_int = 0; // 0x1168 MovI
	
Label_4457:
	var_187_int = 1; // 0x1169 PushI
	if(var_187_int == 0) goto Label_4470; // 0x116a JumpB
	var_188_int = 1; // 0x116b PushI
	var_189_int = var_179_int + var_188_int; // 0x116c Add
	var_190_int = var_178_string + var_189_int; // 0x116d Add
	HasProperty(var_190_int, var_180_bool); // 0x116e ObjFunc
	var_191_bool = var_180_bool == 0; // 0x1170 Not
	if(var_191_bool == 0) goto Label_4467; // 0x1171 JumpB
	goto Label_4470; // 0x1172 Jump
	
Label_4470:
	var_192_bool = var_179_int == 0; // 0x1176 Not
	if(var_192_bool == 0) goto Label_4474; // 0x1177 JumpB
	var_171_bool = 0; // 0x1178 MovB
	return 10; // 0x1179 Return
	
Label_4474:
	var_181_int = 0; // 0x117a MovI
	var_193_int = 1; // 0x117b PushI
	var_194_bool = var_179_int > var_193_int; // 0x117c GT
	if(var_194_bool == 0) goto Label_4480; // 0x117d JumpB
	irand(var_181_int, var_179_int); // 0x117e Func
	
Label_4480:
	var_195_int = 1; // 0x1180 PushI
	var_196_int = var_181_int + var_195_int; // 0x1181 Add
	var_197_int = var_178_string + var_196_int; // 0x1182 Add
	GetProperty(var_197_int, var_182_string); // 0x1183 ObjFunc
	var_198_bool = 0; var_199_string = ""; // 0x1185 PushV
	var_199_string = var_182_string; // 0x1186 Mov
	func_4522(var_198_bool, var_199_string); // 0x1187 NEW_2
	var_171_bool = var_198_bool; // 0x1188 Mov
	return 10; // 0x118a Return
	
Label_4467:
	var_200_int = 1; // 0x1173 PushI
	var_179_int = var_179_int + var_200_int; // 0x1174 Add2
	goto Label_4457; // 0x1175 Jump
}


func_4961()
{
	var_243_string = "ood1EvaIntro1"; // 0x1362 PushS
	var_244_int = 1; // 0x1363 PushI
	SetVariable(var_243_string, var_244_int); // 0x1364 Func
	return 0; // 0x1366 Return
}


func_5474(var_43_object)
{
	var_44_object = Obj(); var_45_object = Obj(); var_46_object = Obj(); var_47_object = Obj(); // 0x1562 PushV
	GetMainOutdoorScene(var_46_object); // 0x1563 Func
	var_48_bool = var_46_object == 0; // 0x1565 NullEq
	if(var_48_bool == 0) goto Label_5485; // 0x1566 JumpB
	var_49_string = "Can't find main outdoor scene"; // 0x1567 PushS
	Trace(var_49_string); // 0x1568 Func
	var_47_object = 0; // 0x156a SetNull
	var_43_object = var_47_object; // 0x156b Mov
	return 4; // 0x156c Return
	
Label_5485:
	GetMap(var_47_object); // 0x156d ObjFunc
	var_43_object = var_47_object; // 0x156f Mov
	return 4; // 0x1570 Return
}


func_3172(var_0_object, var_600_int, var_601_object)
{
	var_603_object = Obj(); var_604_bool = 0; var_605_int = 0; var_606_bool = 0; var_607_object = Obj(); var_608_bool = 0; var_609_int = 0; var_610_bool = 0; // 0xc64 PushV
	var_0_object = var_601_object; // 0xc65 TMov
	var_611_bool = 0; var_612_object = Obj(); var_613_float = 0; // 0xc66 PushV
	var_612_object = var_601_object; // 0xc67 Mov
	var_613_float = 70.0; // 0xc68 MovF
	func_4268(var_612_object, var_613_float); // 0xc69 NEW_2
	var_614_bool = var_611_bool == 0; // 0xc6b Not
	if(var_614_bool == 0) goto Label_3183; // 0xc6c JumpB
	var_600_int = -2; // 0xc6d MovI
	return 8; // 0xc6e Return
	
Label_3183:
	CreateDialog(var_607_object); // 0xc6f Func
	var_615_int = 0; // 0xc71 PushV
	func_4683(var_615_int); // 0xc72 NEW_2
	SetNPCName(var_615_int); // 0xc74 ObjFunc
	var_616_int = 0; // 0xc76 PushV
	func_4681(var_616_int); // 0xc77 NEW_2
	SetNPCDescription(var_616_int); // 0xc79 ObjFunc
	var_617_string = ""; // 0xc7b PushV
	func_4685(var_617_string); // 0xc7c NEW_2
	SetPhoto(var_617_string); // 0xc7e ObjFunc
	var_618_string = ""; // 0xc80 PushV
	func_4687(var_618_string); // 0xc81 NEW_2
	SetPhoto2(var_618_string); // 0xc83 ObjFunc
	var_619_int = 0; // 0xc85 PushV
	func_5524(var_619_int); // 0xc86 NEW_2
	SetPlayerName(var_619_int); // 0xc88 ObjFunc
	var_609_int = -1; // 0xc8a MovI
	IsOverrideActive(var_608_bool); // 0xc8b Func
	var_620_bool = var_608_bool; // 0xc8d Push
	if(var_620_bool == 0) goto Label_3217; // 0xc8e JumpB
	var_600_int = -2; // 0xc8f MovI
	return 8; // 0xc90 Return
	
Label_3217:
	DoDialog(var_607_object); // 0xc91 Func
	var_621_bool = 0; var_622_object = Obj(); // 0xc93 PushV
	var_623_object = Obj(); // 0xc94 PushV
	func_4544(var_623_object); // 0xc95 NEW_2
	var_622_object = var_623_object; // 0xc96 Mov
	func_4353(var_621_bool, var_622_object); // 0xc98 NEW_2
	var_624_object = Obj(); var_625_object = Obj(); // 0xc9a PushV
	var_624_object = var_601_object; // 0xc9b Mov
	var_625_object = var_607_object; // 0xc9c Mov
	TaskCall(9); // 0xc9d TaskCall
	func_3253(var_626_object, var_627_object, var_628_string, var_629_bool, var_624_object, var_625_object); // 0xc9e NEW_2
	TaskReturn(); // 0xc9f TaskReturn
	IsDialogEnd(var_610_bool); // 0xca1 ObjFunc
	
Label_3235:
	var_696_bool = var_610_bool == 0; // 0xca3 Not
	if(var_696_bool == 0) goto Label_3242; // 0xca4 JumpB
	sync(); // 0xca5 Func
	IsDialogEnd(var_610_bool); // 0xca7 ObjFunc
	goto Label_3235; // 0xca9 Jump
	
Label_3242:
	var_697_object = Obj(); // 0xcaa PushV
	var_697_object = var_601_object; // 0xcab Mov
	func_4336(); // 0xcac NEW_2
	StopDialog(var_607_object); // 0xcae Func
	GetReturnValue(var_609_int); // 0xcb0 ObjFunc
	var_600_int = var_609_int; // 0xcb2 Mov
	return 8; // 0xcb3 Return
}


func_4967()
{
	var_181_string = "ood1EvaIntro2"; // 0x1368 PushS
	var_182_int = 1; // 0x1369 PushI
	SetVariable(var_181_string, var_182_int); // 0x136a Func
	return 0; // 0x136c Return
}


func_5225(var_514_bool)
{
	var_516_int = 0; var_517_string = ""; // 0x146a PushV
	var_517_string = "ood2Eva4"; // 0x146b MovS
	func_4560(var_516_int, var_517_string); // 0x146c NEW_2
	var_518_int = 0; // 0x146e PushI
	var_519_bool = var_516_int == var_518_int; // 0x146f Eq
	if(var_519_bool == 0) goto Label_5235; // 0x1470 JumpB
	var_514_bool = 1; // 0x1471 MovB
	return 0; // 0x1472 Return
	
Label_5235:
	var_514_bool = 0; // 0x1473 MovB
	return 0; // 0x1474 Return
}


func_4973()
{
	var_746_string = "ood6Eva1"; // 0x136e PushS
	var_747_int = 1; // 0x136f PushI
	SetVariable(var_746_string, var_747_int); // 0x1370 Func
	return 0; // 0x1372 Return
}


func_4979()
{
	var_98_object = Obj(); var_99_string = ""; var_100_float = 0; // 0x1374 PushV
	var_101_object = Obj(); // 0x1375 PushV
	func_5474(var_101_object); // 0x1376 NEW_2
	var_98_object = var_101_object; // 0x1377 Mov
	var_99_string = "pt_map_andrei"; // 0x1379 MovS
	var_100_float = 2; // 0x137a MovI
	func_5491(var_98_object, var_99_string, var_100_float); // 0x137b NEW_2
	var_121_object = Obj(); // 0x137d PushV
	func_5474(var_121_object); // 0x137e NEW_2
	ShowMap(var_121_object); // 0x1380 ObjFunc
	return 0; // 0x1382 Return
}


func_5491(var_98_object, var_99_string, var_100_float)
{
	var_102_cvector = CVector(0,0,0); var_103_cvector = CVector(0,0,0); var_104_object = Obj(); var_105_bool = 0; var_106_cvector = CVector(0,0,0); var_107_cvector = CVector(0,0,0); var_108_object = Obj(); var_109_bool = 0; // 0x1573 PushV
	GetMainOutdoorScene(var_108_object); // 0x1574 Func
	var_110_bool = var_108_object == 0; // 0x1576 NullEq
	if(var_110_bool == 0) goto Label_5500; // 0x1577 JumpB
	var_111_string = "Can't find main outdoor scene"; // 0x1578 PushS
	Trace(var_111_string); // 0x1579 Func
	return 8; // 0x157b Return
	
Label_5500:
	GetLocator(var_99_string, var_109_bool, var_106_cvector, var_107_cvector); // 0x157c ObjFunc
	var_112_bool = var_109_bool == 0; // 0x157e Not
	if(var_112_bool == 0) goto Label_5510; // 0x157f JumpB
	var_113_string = "Warning: outdoor scene locator "; // 0x1580 PushS
	var_114_int = var_113_string + var_99_string; // 0x1581 Add
	var_115_string = " doesnt exist"; // 0x1582 PushS
	var_116_int = var_114_int + var_115_string; // 0x1583 Add
	Trace(var_116_int); // 0x1584 Func
	
Label_5510:
	GetMap(var_98_object); // 0x1586 ObjFunc
	var_117_bool = var_98_object == 0; // 0x1588 NullEq
	if(var_117_bool == 0) goto Label_5518; // 0x1589 JumpB
	var_118_string = "Can't find map"; // 0x158a PushS
	Trace(var_118_string); // 0x158b Func
	return 8; // 0x158d Return
	
Label_5518:
	var_119_float = GetByIndex(var_106_cvector, 0); // 0x158e PushE
	var_120_float = GetByIndex(var_106_cvector, 2); // 0x158f PushE
	SetMapParams(var_119_float, var_120_float, var_100_float); // 0x1590 ObjFunc
	return 8; // 0x1592 Return
}


func_5237(var_520_bool)
{
	var_522_int = 0; var_523_string = ""; // 0x1476 PushV
	var_523_string = "d2q02"; // 0x1477 MovS
	func_4560(var_522_int, var_523_string); // 0x1478 NEW_2
	var_524_int = 1000; // 0x147a PushI
	var_525_bool = var_522_int == var_524_int; // 0x147b Eq
	if(var_525_bool == 0) goto Label_5247; // 0x147c JumpB
	var_520_bool = 1; // 0x147d MovB
	return 0; // 0x147e Return
	
Label_5247:
	var_520_bool = 0; // 0x147f MovB
	return 0; // 0x1480 Return
}


func_4727()
{
	var_248_string = "playsound"; // 0x1278 PushS
	var_249_string = "giveitem"; // 0x1279 PushS
	TriggerWorld(var_248_string, var_249_string); // 0x127a Func
	return 0; // 0x127c Return
}


func_4733(var_234_object)
{
	var_236_string = "gold_ring is given"; // 0x127e PushS
	Trace(var_236_string); // 0x127f Func
	var_237_object = Obj(); var_238_string = ""; var_239_int = 0; // 0x1281 PushV
	var_237_object = var_234_object; // 0x1282 Mov
	var_238_string = "gold_ring"; // 0x1283 MovS
	var_239_int = 1; // 0x1284 MovI
	func_4624(var_237_object, var_238_string, var_239_int); // 0x1285 NEW_2
	return 0; // 0x1287 Return
}


func_5249(var_488_bool)
{
	var_490_int = 0; var_491_string = ""; // 0x1482 PushV
	var_491_string = "d2q02"; // 0x1483 MovS
	func_4560(var_490_int, var_491_string); // 0x1484 NEW_2
	var_492_int = 3; // 0x1486 PushI
	var_493_bool = var_490_int == var_492_int; // 0x1487 Eq
	if(var_493_bool == 0) goto Label_5259; // 0x1488 JumpB
	var_488_bool = 1; // 0x1489 MovB
	return 0; // 0x148a Return
	
Label_5259:
	var_488_bool = 0; // 0x148b MovB
	return 0; // 0x148c Return
}


func_4605(var_219_object, var_220_int)
{
	var_221_int = 0; var_222_int = 0; var_223_bool = 0; var_224_int = 0; var_225_int = 0; var_226_bool = 0; // 0x11fd PushV
	GetItemID(var_224_int); // 0x11fe ObjFunc
	var_227_string = "Category"; // 0x1200 PushS
	GetInvItemProperty(var_225_int, var_224_int, var_227_string); // 0x1201 Func
	AddItem(var_226_bool, var_219_object, var_225_int, var_220_int); // 0x1203 ObjFunc
	var_228_bool = var_226_bool == 0; // 0x1205 Not
	if(var_228_bool == 0) goto Label_4618; // 0x1206 JumpB
	DropItems(var_219_object, var_220_int); // 0x1207 ObjFunc
	goto Label_4623; // 0x1209 Jump
	
Label_4623:
	return 6; // 0x120f Return
	
Label_4618:
	var_229_int = 0; var_230_int = 0; // 0x120a PushV
	var_229_int = var_224_int; // 0x120b Mov
	var_230_int = var_220_int; // 0x120c Mov
	func_4593(var_229_int, var_230_int); // 0x120d NEW_2
}


func_4995()
{
	var_136_object = Obj(); var_137_object = Obj(); // 0x1383 PushV
	var_138_object = Obj(); // 0x1384 PushV
	func_5474(var_138_object); // 0x1385 NEW_2
	var_137_object = var_138_object; // 0x1386 Mov
	var_139_string = "d2q02EvaGotoMaria"; // 0x1388 PushS
	var_140_string = "pt_map_maria"; // 0x1389 PushS
	var_141_int = 0; // 0x138a PushI
	var_142_int = 515274; // 0x138b PushI
	var_143_float = 0; // 0x138c PushV
	func_4637(var_143_float); // 0x138d NEW_2
	AddMark(var_139_string, var_140_string, var_141_int, var_142_int, var_143_float); // 0x138f ObjFunc
	return 2; // 0x1391 Return
}


func_4229(var_69_bool)
{
	var_69_bool = 1; // 0x1085 MovB
	return 0; // 0x1086 Return
}


func_4231()
{
	StopAnimation(); // 0x1087 Func
	StopGroup0(); // 0x1089 Func
	return 0; // 0x108b Return
}


func_4744()
{
	var_187_object = Obj(); var_188_object = Obj(); // 0x1288 PushV
	var_189_object = Obj(); // 0x1289 PushV
	func_5474(var_189_object); // 0x128a NEW_2
	var_188_object = var_189_object; // 0x128b Mov
	var_190_string = "d1q01EvaMapMarkMladVlad"; // 0x128d PushS
	var_191_string = "pt_map_mladvlad"; // 0x128e PushS
	var_192_int = 3; // 0x128f PushI
	var_193_int = 518108; // 0x1290 PushI
	var_194_float = 0; // 0x1291 PushV
	func_4637(var_194_float); // 0x1292 NEW_2
	AddMark(var_190_string, var_191_string, var_192_int, var_193_int, var_194_float); // 0x1294 ObjFunc
	return 2; // 0x1296 Return
}


func_4491(var_271_string)
{
	var_272_bool = 0; var_273_float = 0; var_274_float = 0; var_275_bool = 0; var_276_float = 0; var_277_float = 0; // 0x118b PushV
	lshHasAnimation(var_275_bool, var_271_string); // 0x118c Func
	var_278_bool = var_275_bool; // 0x118e Push
	if(var_278_bool == 0) goto Label_4502; // 0x118f JumpB
	lshGetAnimTimes(var_271_string, var_276_float, var_277_float); // 0x1190 Func
	var_279_bool = 0; // 0x1192 PushB
	lshPlayAnimation(var_276_float, var_277_float, var_279_bool); // 0x1193 Func
	goto Label_4506; // 0x1195 Jump
	
Label_4506:
	return 6; // 0x119a Return
	
Label_4502:
	var_280_string = "Can't find lsh animation : "; // 0x1196 PushS
	var_281_int = var_280_string + var_271_string; // 0x1197 Add
	Trace(var_281_int); // 0x1198 Func
}


func_4236(var_46_float)
{
	var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); // 0x108c PushV
	GetPosition(var_51_cvector); // 0x108d Func
	GetPosition(var_52_cvector); // 0x108f ObjFunc
	var_53_cvector = var_52_cvector - var_51_cvector; // 0x1091 Sub2
	var_46_float = var_53_cvector | var_53_cvector; // 0x1092 Or2
	return 6; // 0x1093 Return
}


func_5261(var_504_bool)
{
	var_506_int = 0; var_507_string = ""; // 0x148e PushV
	var_507_string = "d2q02"; // 0x148f MovS
	func_4560(var_506_int, var_507_string); // 0x1490 NEW_2
	var_508_int = 5; // 0x1492 PushI
	var_509_bool = var_506_int == var_508_int; // 0x1493 Eq
	if(var_509_bool == 0) goto Label_5271; // 0x1494 JumpB
	var_504_bool = 1; // 0x1495 MovB
	return 0; // 0x1496 Return
	
Label_5271:
	var_504_bool = 0; // 0x1497 MovB
	return 0; // 0x1498 Return
}


func_3984(var_0_object)
{
	var_31_bool = 0; // 0xf90 PushV
	func_4263(var_31_bool); // 0xf91 NEW_2
	var_34_bool = var_31_bool == 0; // 0xf93 Not
	if(var_34_bool == 0) goto Label_3991; // 0xf94 JumpB
	Hold(); // 0xf95 Func
	
Label_3991:
	GetDirection(var_0_object); // 0xf97 Func
	
Label_3993:
	func_4160(); // 0xf9a NEW_2
	goto Label_3993; // 0xf9c Jump
}


func_5011()
{
	var_146_object = Obj(); var_147_string = ""; var_148_float = 0; // 0x1394 PushV
	var_149_object = Obj(); // 0x1395 PushV
	func_5474(var_149_object); // 0x1396 NEW_2
	var_146_object = var_149_object; // 0x1397 Mov
	var_147_string = "pt_map_maria"; // 0x1399 MovS
	var_148_float = 2; // 0x139a MovI
	func_5491(var_146_object, var_147_string, var_148_float); // 0x139b NEW_2
	var_150_object = Obj(); // 0x139d PushV
	func_5474(var_150_object); // 0x139e NEW_2
	ShowMap(var_150_object); // 0x13a0 ObjFunc
	return 0; // 0x13a2 Return
}


func_4244(var_39_bool, var_40_cvector)
{
	var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_bool = 0; var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_bool = 0; // 0x1094 PushV
	GetPosition(var_44_cvector); // 0x1095 Func
	var_45_cvector = var_40_cvector - var_44_cvector; // 0x1097 Sub2
	var_47_float = GetByIndex(var_45_cvector, 0); // 0x1098 PushE
	var_48_float = GetByIndex(var_45_cvector, 2); // 0x1099 PushE
	Rotate(var_47_float, var_48_float, var_46_bool); // 0x109a Func
	var_39_bool = var_46_bool; // 0x109c Mov
	return 6; // 0x109d Return
}


func_5524(var_120_int)
{
	var_121_int = 0; var_122_int = 0; // 0x1594 PushV
	var_123_string = "branch"; // 0x1595 PushS
	GetVariable(var_123_string, var_122_int); // 0x1596 Func
	var_124_int = 0; // 0x1598 PushI
	var_125_bool = var_122_int == var_124_int; // 0x1599 Eq
	if(var_125_bool == 0) goto Label_5534; // 0x159a JumpB
	var_120_int = 1; // 0x159b MovI
	return 2; // 0x159c Return
	
Label_5534:
	var_126_int = 1; // 0x159e PushI
	var_127_bool = var_122_int == var_126_int; // 0x159f Eq
	if(var_127_bool == 0) goto Label_5539; // 0x15a0 JumpB
	var_120_int = 2; // 0x15a1 MovI
	return 2; // 0x15a2 Return
	
Label_5539:
	var_120_int = 3; // 0x15a3 MovI
	return 2; // 0x15a4 Return
}


func_2965(var_0_object, var_1_object, var_2_object, var_3_string, var_569_object, var_570_object)
{
	var_0_object = var_570_object; // 0xb96 TMov
	var_1_object = var_569_object; // 0xb97 TMov
	var_3_string = 0; // 0xb98 TMovB
	var_575_int = 1; // 0xb99 PushI
	if(var_575_int == 0) goto Label_2988; // 0xb9a JumpB
	var_576_string = ""; // 0xb9b PushV
	var_576_string = "Neutral"; // 0xb9c MovS
	func_3018(var_570_object, var_576_string); // 0xb9d NEW_2
	var_584_int = 509840; // 0xb9f PushI
	SetMessage(var_584_int); // 0xba0 TObjFunc
	ClearReplies(); // 0xba2 TObjFunc
	var_585_int = 511259; // 0xba4 PushI
	var_586_int = -1; // 0xba5 PushI
	var_587_int = 12449; // 0xba6 PushI
	AddReply(var_585_int, var_586_int, var_587_int); // 0xba7 TObjFunc
	goto Label_2988; // 0xba9 Jump
	
Label_2988:
	var_588_bool = 0; // 0xbac PushV
	func_4689(var_588_bool); // 0xbad NEW_2
	if(var_588_bool == 0) goto Label_3003; // 0xbaf JumpB
	
Label_2992:
	lshWaitForAnimEnd(); // 0xbb0 Func
	var_589_string = var_3_string; // 0xbb2 PushT
	if(var_589_string == 0) goto Label_2997; // 0xbb3 JumpB
	goto Label_3002; // 0xbb4 Jump
	
Label_3002:
	goto Label_3017; // 0xbba Jump
	
Label_3017:
	return 0; // 0xbc9 Return
	
Label_2997:
	var_590_string = ""; // 0xbb5 PushV
	var_590_string = var_2_object; // 0xbb6 MovT
	func_4491(var_590_string); // 0xbb7 NEW_2
	goto Label_2992; // 0xbb9 Jump
	
Label_3003:
	var_591_string = "all"; // 0xbbb PushS
	var_592_string = "idle"; // 0xbbc PushS
	PlayAnimation(var_591_string, var_592_string); // 0xbbd Func
	
Label_3007:
	WaitForAnimEnd(); // 0xbbf Func
	var_593_string = var_3_string; // 0xbc1 PushT
	if(var_593_string == 0) goto Label_3012; // 0xbc2 JumpB
	goto Label_3017; // 0xbc3 Jump
	
Label_3012:
	var_594_string = "all"; // 0xbc4 PushS
	var_595_string = "idle"; // 0xbc5 PushS
	PlayAnimation(var_594_string, var_595_string); // 0xbc6 Func
	goto Label_3007; // 0xbc8 Jump
}


func_406(var_0_object, var_58_int, var_59_object)
{
	var_61_object = Obj(); var_62_bool = 0; var_63_int = 0; var_64_bool = 0; var_65_object = Obj(); var_66_bool = 0; var_67_int = 0; var_68_bool = 0; // 0x196 PushV
	var_0_object = var_59_object; // 0x197 TMov
	var_69_bool = 0; var_70_object = Obj(); var_71_float = 0; // 0x198 PushV
	var_70_object = var_59_object; // 0x199 Mov
	var_71_float = 70.0; // 0x19a MovF
	func_4268(var_70_object, var_71_float); // 0x19b NEW_2
	var_115_bool = var_69_bool == 0; // 0x19d Not
	if(var_115_bool == 0) goto Label_417; // 0x19e JumpB
	var_58_int = -2; // 0x19f MovI
	return 8; // 0x1a0 Return
	
Label_417:
	CreateDialog(var_65_object); // 0x1a1 Func
	var_116_int = 0; // 0x1a3 PushV
	func_4683(var_116_int); // 0x1a4 NEW_2
	SetNPCName(var_116_int); // 0x1a6 ObjFunc
	var_117_int = 0; // 0x1a8 PushV
	func_4681(var_117_int); // 0x1a9 NEW_2
	SetNPCDescription(var_117_int); // 0x1ab ObjFunc
	var_118_string = ""; // 0x1ad PushV
	func_4685(var_118_string); // 0x1ae NEW_2
	SetPhoto(var_118_string); // 0x1b0 ObjFunc
	var_119_string = ""; // 0x1b2 PushV
	func_4687(var_119_string); // 0x1b3 NEW_2
	SetPhoto2(var_119_string); // 0x1b5 ObjFunc
	var_120_int = 0; // 0x1b7 PushV
	func_5524(var_120_int); // 0x1b8 NEW_2
	SetPlayerName(var_120_int); // 0x1ba ObjFunc
	var_67_int = -1; // 0x1bc MovI
	IsOverrideActive(var_66_bool); // 0x1bd Func
	var_128_bool = var_66_bool; // 0x1bf Push
	if(var_128_bool == 0) goto Label_451; // 0x1c0 JumpB
	var_58_int = -2; // 0x1c1 MovI
	return 8; // 0x1c2 Return
	
Label_451:
	DoDialog(var_65_object); // 0x1c3 Func
	var_129_bool = 0; var_130_object = Obj(); // 0x1c5 PushV
	var_131_object = Obj(); // 0x1c6 PushV
	func_4544(var_131_object); // 0x1c7 NEW_2
	var_130_object = var_131_object; // 0x1c8 Mov
	func_4353(var_129_bool, var_130_object); // 0x1ca NEW_2
	var_219_object = Obj(); var_220_object = Obj(); // 0x1cc PushV
	var_219_object = var_59_object; // 0x1cd Mov
	var_220_object = var_65_object; // 0x1ce Mov
	TaskCall(3); // 0x1cf TaskCall
	func_487(var_221_object, var_222_object, var_223_string, var_224_bool, var_219_object, var_220_object); // 0x1d0 NEW_2
	TaskReturn(); // 0x1d1 TaskReturn
	IsDialogEnd(var_68_bool); // 0x1d3 ObjFunc
	
Label_469:
	var_401_bool = var_68_bool == 0; // 0x1d5 Not
	if(var_401_bool == 0) goto Label_476; // 0x1d6 JumpB
	sync(); // 0x1d7 Func
	IsDialogEnd(var_68_bool); // 0x1d9 ObjFunc
	goto Label_469; // 0x1db Jump
	
Label_476:
	var_402_object = Obj(); // 0x1dc PushV
	var_402_object = var_59_object; // 0x1dd Mov
	func_4336(); // 0x1de NEW_2
	StopDialog(var_65_object); // 0x1e0 Func
	GetReturnValue(var_67_int); // 0x1e2 ObjFunc
	var_58_int = var_67_int; // 0x1e4 Mov
	return 8; // 0x1e5 Return
}


func_4760()
{
	var_197_object = Obj(); var_198_string = ""; var_199_float = 0; // 0x1299 PushV
	var_200_object = Obj(); // 0x129a PushV
	func_5474(var_200_object); // 0x129b NEW_2
	var_197_object = var_200_object; // 0x129c Mov
	var_198_string = "pt_map_station"; // 0x129e MovS
	var_199_float = 2; // 0x129f MovI
	func_5491(var_197_object, var_198_string, var_199_float); // 0x12a0 NEW_2
	var_201_object = Obj(); // 0x12a2 PushV
	func_5474(var_201_object); // 0x12a3 NEW_2
	ShowMap(var_201_object); // 0x12a5 ObjFunc
	return 0; // 0x12a7 Return
}


func_5273(var_529_bool)
{
	var_531_int = 0; var_532_string = ""; // 0x149a PushV
	var_532_string = "d2q02"; // 0x149b MovS
	func_4560(var_531_int, var_532_string); // 0x149c NEW_2
	var_533_int = 0; // 0x149e PushI
	var_534_bool = var_531_int == var_533_int; // 0x149f Eq
	if(var_534_bool == 0) goto Label_5283; // 0x14a0 JumpB
	var_529_bool = 1; // 0x14a1 MovB
	return 0; // 0x14a2 Return
	
Label_5283:
	var_529_bool = 0; // 0x14a3 MovB
	return 0; // 0x14a4 Return
}


func_4507(var_249_string, var_250_bool)
{
	var_253_bool = 0; var_254_float = 0; var_255_float = 0; var_256_bool = 0; var_257_float = 0; var_258_float = 0; // 0x119b PushV
	lshHasAnimation(var_256_bool, var_249_string); // 0x119c Func
	var_259_bool = var_256_bool; // 0x119e Push
	if(var_259_bool == 0) goto Label_4517; // 0x119f JumpB
	lshGetAnimTimes(var_249_string, var_257_float, var_258_float); // 0x11a0 Func
	lshPlayAnimation(var_257_float, var_258_float, var_250_bool); // 0x11a2 Func
	goto Label_4521; // 0x11a4 Jump
	
Label_4521:
	return 6; // 0x11a9 Return
	
Label_4517:
	var_260_string = "Can't find lsh animation : "; // 0x11a5 PushS
	var_261_int = var_260_string + var_249_string; // 0x11a6 Add
	Trace(var_261_int); // 0x11a7 Func
}


func_4254(var_35_bool)
{
	var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); // 0x109e PushV
	GetPosition(var_38_cvector); // 0x109f ObjFunc
	var_39_bool = 0; var_40_cvector = CVector(0,0,0); // 0x10a1 PushV
	var_40_cvector = var_38_cvector; // 0x10a2 Mov
	func_4244(var_39_bool, var_40_cvector); // 0x10a3 NEW_2
	var_35_bool = var_39_bool; // 0x10a4 Mov
	return 2; // 0x10a6 Return
}


func_3998(var_56_bool)
{
	var_57_object = Obj(); var_58_object = Obj(); // 0xf9e PushV
	var_59_string = "player"; // 0xf9f PushS
	FindActor(var_58_object, var_59_string); // 0xfa0 Func
	var_60_bool = var_58_object == 0; // 0xfa2 Not
	if(var_60_bool == 0) goto Label_4006; // 0xfa3 JumpB
	var_56_bool = 0; // 0xfa4 MovB
	return 2; // 0xfa5 Return
	
Label_4006:
	var_61_bool = 0; var_62_object = Obj(); // 0xfa6 PushV
	var_62_object = var_58_object; // 0xfa7 Mov
	func_4254(var_62_object); // 0xfa8 NEW_2
	var_56_bool = var_61_bool; // 0xfa9 Mov
	return 2; // 0xfab Return
}


func_5027()
{
	var_39_string = "ood4Eva1"; // 0x13a4 PushS
	var_40_int = 1; // 0x13a5 PushI
	SetVariable(var_39_string, var_40_int); // 0x13a6 Func
	return 0; // 0x13a8 Return
}


func_5285(var_154_bool)
{
	var_156_int = 0; var_157_string = ""; // 0x14a6 PushV
	var_157_string = "d4q01"; // 0x14a7 MovS
	func_4560(var_156_int, var_157_string); // 0x14a8 NEW_2
	var_158_int = 1; // 0x14aa PushI
	var_159_bool = var_156_int == var_158_int; // 0x14ab Eq
	if(var_159_bool == 0) goto Label_5295; // 0x14ac JumpB
	var_154_bool = 1; // 0x14ad MovB
	return 0; // 0x14ae Return
	
Label_5295:
	var_154_bool = 0; // 0x14af MovB
	return 0; // 0x14b0 Return
}


func_5541(var_49_object)
{
	var_50_bool = 0; var_51_int = 0; // 0x15a6 PushV
	var_51_int = 1; // 0x15a7 MovI
	func_4651(var_50_bool, var_51_int); // 0x15a8 NEW_2
	if(var_50_bool == 0) goto Label_5554; // 0x15aa JumpB
	var_58_int = 0; var_59_object = Obj(); // 0x15ab PushV
	var_59_object = var_49_object; // 0x15ac Mov
	TaskCall(2); // 0x15ad TaskCall
	func_406(var_60_object, var_58_int, var_59_object); // 0x15ae NEW_2
	TaskReturn(); // 0x15af TaskReturn
	return 0; // 0x15b1 Return
	
Label_5554:
	var_409_bool = 0; var_410_int = 0; // 0x15b2 PushV
	var_410_int = 2; // 0x15b3 MovI
	func_4651(var_409_bool, var_410_int); // 0x15b4 NEW_2
	if(var_409_bool == 0) goto Label_5566; // 0x15b6 JumpB
	var_411_int = 0; var_412_object = Obj(); // 0x15b7 PushV
	var_412_object = var_49_object; // 0x15b8 Mov
	TaskCall(4); // 0x15b9 TaskCall
	func_2009(var_413_object, var_411_int, var_412_object); // 0x15ba NEW_2
	TaskReturn(); // 0x15bb TaskReturn
	return 0; // 0x15bd Return
	
Label_5566:
	var_543_bool = 0; var_544_int = 0; // 0x15be PushV
	var_544_int = 3; // 0x15bf MovI
	func_4651(var_543_bool, var_544_int); // 0x15c0 NEW_2
	if(var_543_bool == 0) goto Label_5578; // 0x15c2 JumpB
	var_545_int = 0; var_546_object = Obj(); // 0x15c3 PushV
	var_546_object = var_49_object; // 0x15c4 Mov
	TaskCall(6); // 0x15c5 TaskCall
	func_2884(var_547_object, var_545_int, var_546_object); // 0x15c6 NEW_2
	TaskReturn(); // 0x15c7 TaskReturn
	return 0; // 0x15c9 Return
	
Label_5578:
	var_598_bool = 0; var_599_int = 0; // 0x15ca PushV
	var_599_int = 4; // 0x15cb MovI
	func_4651(var_598_bool, var_599_int); // 0x15cc NEW_2
	if(var_598_bool == 0) goto Label_5590; // 0x15ce JumpB
	var_600_int = 0; var_601_object = Obj(); // 0x15cf PushV
	var_601_object = var_49_object; // 0x15d0 Mov
	TaskCall(8); // 0x15d1 TaskCall
	func_3172(var_602_object, var_600_int, var_601_object); // 0x15d2 NEW_2
	TaskReturn(); // 0x15d3 TaskReturn
	return 0; // 0x15d5 Return
	
Label_5590:
	var_698_bool = 0; var_699_int = 0; // 0x15d6 PushV
	var_699_int = 6; // 0x15d7 MovI
	func_4651(var_698_bool, var_699_int); // 0x15d8 NEW_2
	if(var_698_bool == 0) goto Label_5602; // 0x15da JumpB
	var_700_int = 0; var_701_object = Obj(); // 0x15db PushV
	var_701_object = var_49_object; // 0x15dc Mov
	TaskCall(0); // 0x15dd TaskCall
	func_0(var_702_object, var_700_int, var_701_object); // 0x15de NEW_2
	TaskReturn(); // 0x15df TaskReturn
	return 0; // 0x15e1 Return
	
Label_5602:
	var_781_int = 0; var_782_object = Obj(); // 0x15e2 PushV
	var_782_object = var_49_object; // 0x15e3 Mov
	TaskCall(10); // 0x15e4 TaskCall
	func_3777(var_783_object, var_781_int, var_782_object); // 0x15e5 NEW_2
	TaskReturn(); // 0x15e6 TaskReturn
	return 0; // 0x15e8 Return
}


func_4263(var_31_bool)
{
	var_32_bool = 0; var_33_bool = 0; // 0x10a7 PushV
	IsLoaded(var_33_bool); // 0x10a8 Func
	var_31_bool = var_33_bool; // 0x10aa Mov
	return 2; // 0x10ab Return
}


func_4776()
{
	var_206_string = "ood1Eva4"; // 0x12a9 PushS
	var_207_int = 1; // 0x12aa PushI
	SetVariable(var_206_string, var_207_int); // 0x12ab Func
	return 0; // 0x12ad Return
}


func_5033(var_227_bool)
{
	var_229_int = 0; var_230_string = ""; // 0x13aa PushV
	var_230_string = "ood1EvaIntro1"; // 0x13ab MovS
	func_4560(var_229_int, var_230_string); // 0x13ac NEW_2
	var_233_int = 0; // 0x13ae PushI
	var_234_bool = var_229_int == var_233_int; // 0x13af Eq
	if(var_234_bool == 0) goto Label_5043; // 0x13b0 JumpB
	var_227_bool = 1; // 0x13b1 MovB
	return 0; // 0x13b2 Return
	
Label_5043:
	var_227_bool = 0; // 0x13b3 MovB
	return 0; // 0x13b4 Return
}


func_4522(var_163_bool, var_164_string)
{
	var_165_bool = 0; var_166_bool = 0; // 0x11aa PushV
	var_167_bool = 0; // 0x11ab PushV
	func_4689(var_167_bool); // 0x11ac NEW_2
	if(var_167_bool == 0) goto Label_4535; // 0x11ae JumpB
	lshHasSpeech(var_166_bool, var_164_string); // 0x11af Func
	var_168_bool = var_166_bool; // 0x11b1 Push
	if(var_168_bool == 0) goto Label_4535; // 0x11b2 JumpB
	lshPlaySpeech(var_164_string); // 0x11b3 Func
	var_163_bool = 1; // 0x11b5 MovB
	return 2; // 0x11b6 Return
	
Label_4535:
	var_163_bool = 0; // 0x11b7 MovB
	return 2; // 0x11b8 Return
}


func_4268(var_69_bool, var_71_float)
{
	var_72_float = 0; var_73_cvector = CVector(0,0,0); var_74_cvector = CVector(0,0,0); var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0); var_79_bool = 0; var_80_bool = 0; var_81_float = 0; var_82_cvector = CVector(0,0,0); var_83_cvector = CVector(0,0,0); var_84_cvector = CVector(0,0,0); var_85_cvector = CVector(0,0,0); var_86_cvector = CVector(0,0,0); var_87_cvector = CVector(0,0,0); var_88_bool = 0; var_89_bool = 0; // 0x10ac PushV
	GetPosition(var_82_cvector); // 0x10ad ObjFunc
	GetEyesHeight(var_81_float); // 0x10af ObjFunc
	var_90_float = GetByIndex(var_82_cvector, 1); // 0x10b1 PushE
	var_90_float = var_90_float + var_81_float; // 0x10b2 Add2
	SetByIndex(var_82_cvector, 1) = var_90_float; // 0x10b3 PopE
	GetPosition(var_83_cvector); // 0x10b4 Func
	GetEyesHeight(var_81_float); // 0x10b6 Func
	var_91_float = GetByIndex(var_83_cvector, 1); // 0x10b8 PushE
	var_91_float = var_91_float + var_81_float; // 0x10b9 Add2
	SetByIndex(var_83_cvector, 1) = var_91_float; // 0x10ba PopE
	var_84_cvector = var_82_cvector - var_83_cvector; // 0x10bb Sub2
	var_92_float = GetByIndex(var_84_cvector, 1); // 0x10bc PushE
	var_92_float = 0; // 0x10bd MovI
	SetByIndex(var_84_cvector, 1) = var_92_float; // 0x10be PopE
	var_93_int = var_84_cvector | var_84_cvector; // 0x10bf Or
	var_94_float = sqrt(var_93_int); // 0x10c0 Sqrt
	var_84_cvector = var_84_cvector / var_84_cvector; // 0x10c1 Div2
	var_85_cvector = -var_84_cvector; // 0x10c2 Neg2
	var_95_float = var_84_cvector * var_71_float; // 0x10c3 Mult
	var_96_cvector = CVector(0,0,0); var_97_cvector = CVector(0,0,0); // 0x10c4 PushV
	var_98_cvector = CVector(0.0, 1.0, 0.0); // 0x10c5 PushVec
	var_97_cvector = var_85_cvector ^ var_98_cvector; // 0x10c6 Xor2
	func_4550(var_96_cvector, var_97_cvector); // 0x10c7 NEW_2
	var_104_int = 25; // 0x10c9 PushI
	var_105_float = var_96_cvector * var_104_int; // 0x10ca Mult
	var_106_int = var_95_float + var_105_float; // 0x10cb Add
	var_107_cvector = CVector(0.0, 10.0, 0.0); // 0x10cc PushVec
	var_86_cvector = var_106_int - var_107_cvector; // 0x10cd Sub2
	var_87_cvector = var_83_cvector + var_86_cvector; // 0x10ce Add2
	IsOverrideActive(var_88_bool); // 0x10cf Func
	var_108_bool = var_88_bool; // 0x10d1 Push
	if(var_108_bool == 0) goto Label_4309; // 0x10d2 JumpB
	var_69_bool = 0; // 0x10d3 MovB
	return 18; // 0x10d4 Return
	
Label_4309:
	StopWorld(); // 0x10d5 Func
	CameraTransit(var_87_cvector, var_85_cvector); // 0x10d7 Func
	var_109_float = GetByIndex(var_86_cvector, 0); // 0x10d9 PushE
	var_110_float = GetByIndex(var_86_cvector, 2); // 0x10da PushE
	Rotate(var_109_float, var_110_float); // 0x10db Func
	var_111_bool = 0; // 0x10dd PushV
	func_4689(var_111_bool); // 0x10de NEW_2
	if(var_111_bool == 0) goto Label_4322; // 0x10e0 JumpB
	goto Label_4330; // 0x10e1 Jump
	
Label_4330:
	CameraWaitForPlayFinish(); // 0x10ea Func
	ResumeWorld(); // 0x10ec Func
	var_69_bool = 1; // 0x10ee MovB
	return 18; // 0x10ef Return
	
Label_4322:
	var_112_string = "head"; // 0x10e2 PushS
	HasAnimationTrack(var_89_bool, var_112_string); // 0x10e3 Func
	var_113_bool = var_89_bool; // 0x10e5 Push
	if(var_113_bool == 0) goto Label_4330; // 0x10e6 JumpB
	var_114_string = "head"; // 0x10e7 PushS
	LookAsyncCamera(var_114_string); // 0x10e8 Func
}


func_4013(var_0_object)
{
	var_108_float = GetByIndex(var_0_object, 0); // 0xfad PushE
	var_109_float = GetByIndex(var_0_object, 2); // 0xfae PushE
	RotateAsync(var_108_float, var_109_float); // 0xfaf Func
	return 0; // 0xfb1 Return
}


func_4782(var_210_object)
{
	var_212_string = "bracelet is given"; // 0x12af PushS
	Trace(var_212_string); // 0x12b0 Func
	var_213_object = Obj(); var_214_string = ""; var_215_int = 0; // 0x12b2 PushV
	var_213_object = var_210_object; // 0x12b3 Mov
	var_214_string = "bracelet"; // 0x12b4 MovS
	var_215_int = 1; // 0x12b5 MovI
	func_4624(var_213_object, var_214_string, var_215_int); // 0x12b6 NEW_2
	return 0; // 0x12b8 Return
}


func_5297(var_649_bool)
{
	var_651_int = 0; var_652_string = ""; // 0x14b2 PushV
	var_652_string = "d4q02"; // 0x14b3 MovS
	func_4560(var_651_int, var_652_string); // 0x14b4 NEW_2
	var_653_int = 1; // 0x14b6 PushI
	var_654_bool = var_651_int == var_653_int; // 0x14b7 Eq
	if(var_654_bool == 0) goto Label_5307; // 0x14b8 JumpB
	var_649_bool = 1; // 0x14b9 MovB
	return 0; // 0x14ba Return
	
Label_5307:
	var_649_bool = 0; // 0x14bb MovB
	return 0; // 0x14bc Return
}


func_178(var_2_object, var_748_string)
{
	var_749_bool = 0; // 0xb3 PushV
	func_4689(var_749_bool); // 0xb4 NEW_2
	var_750_bool = var_749_bool == 0; // 0xb6 Not
	if(var_750_bool == 0) goto Label_185; // 0xb7 JumpB
	return 0; // 0xb8 Return
	
Label_185:
	var_751_bool = var_748_string == var_2_object; // 0xb9 Eq
	if(var_751_bool == 0) goto Label_188; // 0xba JumpB
	return 0; // 0xbb Return
	
Label_188:
	var_752_string = ""; var_753_bool = 0; // 0xbc PushV
	var_752_string = var_748_string; // 0xbd Mov
	var_754_string = ""; // 0xbe PushS
	var_755_bool = var_748_string == var_754_string; // 0xbf Eq
	if(var_755_bool == 0) goto Label_195; // 0xc0 JumpB
	var_753_bool = 0; // 0xc1 MovB
	goto Label_196; // 0xc2 Jump
	
Label_196:
	func_4507(var_752_string, var_753_bool); // 0xc4 NEW_2
	var_2_object = var_748_string; // 0xc6 TMov
	return 0; // 0xc7 Return
	
Label_195:
	var_753_bool = 1; // 0xc3 MovB
}


func_4018(var_39_bool)
{
	var_40_object = Obj(); var_41_bool = 0; var_42_object = Obj(); var_43_bool = 0; // 0xfb2 PushV
	var_44_string = "player"; // 0xfb3 PushS
	FindActor(var_42_object, var_44_string); // 0xfb4 Func
	var_45_bool = var_42_object == 0; // 0xfb6 Not
	if(var_45_bool == 0) goto Label_4026; // 0xfb7 JumpB
	var_39_bool = 0; // 0xfb8 MovB
	return 4; // 0xfb9 Return
	
Label_4026:
	var_46_float = 0; var_47_object = Obj(); // 0xfba PushV
	var_47_object = var_42_object; // 0xfbb Mov
	func_4236(var_47_object); // 0xfbc NEW_2
	var_54_float = 90000.0; // 0xfbe PushF
	var_55_bool = var_46_float > var_54_float; // 0xfbf GT
	if(var_55_bool == 0) goto Label_4035; // 0xfc0 JumpB
	var_39_bool = 0; // 0xfc1 MovB
	return 4; // 0xfc2 Return
	
Label_4035:
	CanSee(var_43_bool, var_42_object); // 0xfc3 Func
	var_39_bool = var_43_bool; // 0xfc5 Mov
	return 4; // 0xfc6 Return
}


func_3253(var_0_object, var_1_object, var_2_object, var_3_string, var_624_object, var_625_object)
{
	var_0_object = var_625_object; // 0xcb6 TMov
	var_1_object = var_624_object; // 0xcb7 TMov
	var_3_string = 0; // 0xcb8 TMovB
	var_630_int = 1; // 0xcb9 PushI
	if(var_630_int == 0) goto Label_3341; // 0xcba JumpB
	var_631_string = ""; // 0xcbb PushV
	var_631_string = "Neutral"; // 0xcbc MovS
	func_3371(var_625_object, var_631_string); // 0xcbd NEW_2
	var_639_int = 511255; // 0xcbf PushI
	SetMessage(var_639_int); // 0xcc0 TObjFunc
	ClearReplies(); // 0xcc2 TObjFunc
	var_640_bool = 0; // 0xcc4 PushV
	var_640_bool = 1; // 0xcc5 MovB
	var_641_bool = 0; // 0xcc6 PushV
	var_641_bool = 1; // 0xcc7 MovB
	var_642_bool = 0; // 0xcc8 PushV
	var_642_bool = 0; // 0xcc9 MovB
	var_643_bool = 0; var_644_object = Obj(); // 0xcca PushV
	var_644_object = var_1_object; // 0xccb MovT
	func_5357(var_644_object); // 0xccc NEW_2
	if(var_643_bool == 0) goto Label_3285; // 0xcce JumpB
	var_649_bool = 0; var_650_object = Obj(); // 0xccf PushV
	var_650_object = var_1_object; // 0xcd0 MovT
	func_5297(var_650_object); // 0xcd1 NEW_2
	if(var_649_bool == 0) goto Label_3285; // 0xcd3 JumpB
	var_642_bool = 1; // 0xcd4 MovB
	
Label_3285:
	if(var_642_bool == 0) goto Label_3301; // 0xcd5 JumpB
	var_655_bool = 0; // 0xcd6 PushV
	var_655_bool = 0; // 0xcd7 MovB
	var_656_bool = 0; var_657_object = Obj(); // 0xcd8 PushV
	var_657_object = var_1_object; // 0xcd9 MovT
	func_5321(var_657_object); // 0xcda NEW_2
	if(var_656_bool == 0) goto Label_3299; // 0xcdc JumpB
	var_662_bool = 0; var_663_object = Obj(); // 0xcdd PushV
	var_663_object = var_1_object; // 0xcde MovT
	func_5357(var_663_object); // 0xcdf NEW_2
	if(var_662_bool == 0) goto Label_3299; // 0xce1 JumpB
	var_655_bool = 1; // 0xce2 MovB
	
Label_3299:
	if(var_655_bool == 0) goto Label_3301; // 0xce3 JumpB
	var_641_bool = 0; // 0xce4 MovB
	
Label_3301:
	if(var_641_bool == 0) goto Label_3317; // 0xce5 JumpB
	var_664_bool = 0; // 0xce6 PushV
	var_664_bool = 0; // 0xce7 MovB
	var_665_bool = 0; var_666_object = Obj(); // 0xce8 PushV
	var_666_object = var_1_object; // 0xce9 MovT
	func_5309(var_666_object); // 0xcea NEW_2
	if(var_665_bool == 0) goto Label_3315; // 0xcec JumpB
	var_671_bool = 0; var_672_object = Obj(); // 0xced PushV
	var_672_object = var_1_object; // 0xcee MovT
	func_5357(var_672_object); // 0xcef NEW_2
	if(var_671_bool == 0) goto Label_3315; // 0xcf1 JumpB
	var_664_bool = 1; // 0xcf2 MovB
	
Label_3315:
	if(var_664_bool == 0) goto Label_3317; // 0xcf3 JumpB
	var_640_bool = 0; // 0xcf4 MovB
	
Label_3317:
	if(var_640_bool == 0) goto Label_3323; // 0xcf5 JumpB
	var_673_int = 511257; // 0xcf6 PushI
	var_674_int = 12448; // 0xcf7 PushI
	var_675_int = 12447; // 0xcf8 PushI
	AddReply(var_673_int, var_674_int, var_675_int); // 0xcf9 TObjFunc
	
Label_3323:
	var_676_bool = 0; var_677_object = Obj(); // 0xcfb PushV
	var_677_object = var_1_object; // 0xcfc MovT
	func_5165(var_677_object); // 0xcfd NEW_2
	if(var_676_bool == 0) goto Label_3333; // 0xcff JumpB
	var_682_int = 535125; // 0xd00 PushI
	var_683_int = 36785; // 0xd01 PushI
	var_684_int = 36784; // 0xd02 PushI
	AddReply(var_682_int, var_683_int, var_684_int); // 0xd03 TObjFunc
	
Label_3333:
	var_685_int = 511256; // 0xd05 PushI
	var_686_int = -1; // 0xd06 PushI
	var_687_int = 12446; // 0xd07 PushI
	AddReply(var_685_int, var_686_int, var_687_int); // 0xd08 TObjFunc
	goto Label_3341; // 0xd0a Jump
	
Label_3341:
	var_688_bool = 0; // 0xd0d PushV
	func_4689(var_688_bool); // 0xd0e NEW_2
	if(var_688_bool == 0) goto Label_3356; // 0xd10 JumpB
	
Label_3345:
	lshWaitForAnimEnd(); // 0xd11 Func
	var_689_string = var_3_string; // 0xd13 PushT
	if(var_689_string == 0) goto Label_3350; // 0xd14 JumpB
	goto Label_3355; // 0xd15 Jump
	
Label_3355:
	goto Label_3370; // 0xd1b Jump
	
Label_3370:
	return 0; // 0xd2a Return
	
Label_3350:
	var_690_string = ""; // 0xd16 PushV
	var_690_string = var_2_object; // 0xd17 MovT
	func_4491(var_690_string); // 0xd18 NEW_2
	goto Label_3345; // 0xd1a Jump
	
Label_3356:
	var_691_string = "all"; // 0xd1c PushS
	var_692_string = "idle"; // 0xd1d PushS
	PlayAnimation(var_691_string, var_692_string); // 0xd1e Func
	
Label_3360:
	WaitForAnimEnd(); // 0xd20 Func
	var_693_string = var_3_string; // 0xd22 PushT
	if(var_693_string == 0) goto Label_3365; // 0xd23 JumpB
	goto Label_3370; // 0xd24 Jump
	
Label_3365:
	var_694_string = "all"; // 0xd25 PushS
	var_695_string = "idle"; // 0xd26 PushS
	PlayAnimation(var_694_string, var_695_string); // 0xd27 Func
	goto Label_3360; // 0xd29 Jump
}


func_5045(var_388_bool)
{
	var_390_int = 0; var_391_string = ""; // 0x13b6 PushV
	var_391_string = "d1q01FirstGeorgVisit"; // 0x13b7 MovS
	func_4560(var_390_int, var_391_string); // 0x13b8 NEW_2
	var_392_int = 1; // 0x13ba PushI
	var_393_bool = var_390_int == var_392_int; // 0x13bb Eq
	if(var_393_bool == 0) goto Label_5055; // 0x13bc JumpB
	var_388_bool = 1; // 0x13bd MovB
	return 0; // 0x13be Return
	
Label_5055:
	var_388_bool = 0; // 0x13bf MovB
	return 0; // 0x13c0 Return
}


func_4793(var_240_object)
{
	var_242_string = "ear_ring is given"; // 0x12ba PushS
	Trace(var_242_string); // 0x12bb Func
	var_243_object = Obj(); var_244_string = ""; var_245_int = 0; // 0x12bd PushV
	var_243_object = var_240_object; // 0x12be Mov
	var_244_string = "ear_ring"; // 0x12bf MovS
	var_245_int = 1; // 0x12c0 MovI
	func_4624(var_243_object, var_244_string, var_245_int); // 0x12c1 NEW_2
	return 0; // 0x12c3 Return
}


func_4537()
{
	var_34_bool = 0; // 0x11b9 PushV
	func_4689(var_34_bool); // 0x11ba NEW_2
	if(var_34_bool == 0) goto Label_4543; // 0x11bc JumpB
	lshStopSpeech(); // 0x11bd Func
	
Label_4543:
	return 0; // 0x11bf Return
}


func_5309(var_665_bool)
{
	var_667_int = 0; var_668_string = ""; // 0x14be PushV
	var_668_string = "d4q02LaraGivesMedcine"; // 0x14bf MovS
	func_4560(var_667_int, var_668_string); // 0x14c0 NEW_2
	var_669_int = 1; // 0x14c2 PushI
	var_670_bool = var_667_int == var_669_int; // 0x14c3 Eq
	if(var_670_bool == 0) goto Label_5319; // 0x14c4 JumpB
	var_665_bool = 1; // 0x14c5 MovB
	return 0; // 0x14c6 Return
	
Label_5319:
	var_665_bool = 0; // 0x14c7 MovB
	return 0; // 0x14c8 Return
}


func_4544(var_131_object)
{
	var_132_object = Obj(); var_133_object = Obj(); // 0x11c0 PushV
	self(var_133_object); // 0x11c1 Func
	var_131_object = var_133_object; // 0x11c3 Mov
	return 2; // 0x11c4 Return
}


func_3777(var_0_object, var_781_int, var_782_object)
{
	var_784_object = Obj(); var_785_bool = 0; var_786_int = 0; var_787_bool = 0; var_788_object = Obj(); var_789_bool = 0; var_790_int = 0; var_791_bool = 0; // 0xec1 PushV
	var_0_object = var_782_object; // 0xec2 TMov
	var_792_bool = 0; var_793_object = Obj(); var_794_float = 0; // 0xec3 PushV
	var_793_object = var_782_object; // 0xec4 Mov
	var_794_float = 70.0; // 0xec5 MovF
	func_4268(var_793_object, var_794_float); // 0xec6 NEW_2
	var_795_bool = var_792_bool == 0; // 0xec8 Not
	if(var_795_bool == 0) goto Label_3788; // 0xec9 JumpB
	var_781_int = -2; // 0xeca MovI
	return 8; // 0xecb Return
	
Label_3788:
	CreateDialog(var_788_object); // 0xecc Func
	var_796_int = 0; // 0xece PushV
	func_4683(var_796_int); // 0xecf NEW_2
	SetNPCName(var_796_int); // 0xed1 ObjFunc
	var_797_int = 0; // 0xed3 PushV
	func_4681(var_797_int); // 0xed4 NEW_2
	SetNPCDescription(var_797_int); // 0xed6 ObjFunc
	var_798_string = ""; // 0xed8 PushV
	func_4685(var_798_string); // 0xed9 NEW_2
	SetPhoto(var_798_string); // 0xedb ObjFunc
	var_799_string = ""; // 0xedd PushV
	func_4687(var_799_string); // 0xede NEW_2
	SetPhoto2(var_799_string); // 0xee0 ObjFunc
	var_800_int = 0; // 0xee2 PushV
	func_5524(var_800_int); // 0xee3 NEW_2
	SetPlayerName(var_800_int); // 0xee5 ObjFunc
	var_790_int = -1; // 0xee7 MovI
	IsOverrideActive(var_789_bool); // 0xee8 Func
	var_801_bool = var_789_bool; // 0xeea Push
	if(var_801_bool == 0) goto Label_3822; // 0xeeb JumpB
	var_781_int = -2; // 0xeec MovI
	return 8; // 0xeed Return
	
Label_3822:
	DoDialog(var_788_object); // 0xeee Func
	var_802_bool = 0; var_803_object = Obj(); // 0xef0 PushV
	var_804_object = Obj(); // 0xef1 PushV
	func_4544(var_804_object); // 0xef2 NEW_2
	var_803_object = var_804_object; // 0xef3 Mov
	func_4353(var_802_bool, var_803_object); // 0xef5 NEW_2
	var_805_object = Obj(); var_806_object = Obj(); // 0xef7 PushV
	var_805_object = var_782_object; // 0xef8 Mov
	var_806_object = var_788_object; // 0xef9 Mov
	TaskCall(11); // 0xefa TaskCall
	func_3858(var_807_object, var_808_object, var_809_string, var_810_bool, var_805_object, var_806_object); // 0xefb NEW_2
	TaskReturn(); // 0xefc TaskReturn
	IsDialogEnd(var_791_bool); // 0xefe ObjFunc
	
Label_3840:
	var_835_bool = var_791_bool == 0; // 0xf00 Not
	if(var_835_bool == 0) goto Label_3847; // 0xf01 JumpB
	sync(); // 0xf02 Func
	IsDialogEnd(var_791_bool); // 0xf04 ObjFunc
	goto Label_3840; // 0xf06 Jump
	
Label_3847:
	var_836_object = Obj(); // 0xf07 PushV
	var_836_object = var_782_object; // 0xf08 Mov
	func_4336(); // 0xf09 NEW_2
	StopDialog(var_788_object); // 0xf0b Func
	GetReturnValue(var_790_int); // 0xf0d ObjFunc
	var_781_int = var_790_int; // 0xf0f Mov
	return 8; // 0xf10 Return
}


func_5057(var_235_bool)
{
	var_237_int = 0; var_238_string = ""; // 0x13c2 PushV
	var_238_string = "d1q03"; // 0x13c3 MovS
	func_4560(var_237_int, var_238_string); // 0x13c4 NEW_2
	var_239_int = 0; // 0x13c6 PushI
	var_240_bool = var_237_int == var_239_int; // 0x13c7 Eq
	if(var_240_bool == 0) goto Label_5067; // 0x13c8 JumpB
	var_235_bool = 1; // 0x13c9 MovB
	return 0; // 0x13ca Return
	
Label_5067:
	var_235_bool = 0; // 0x13cb MovB
	return 0; // 0x13cc Return
}


func_4804()
{
	var_454_string = "d2EvaVisit"; // 0x12c5 PushS
	var_455_int = 1; // 0x12c6 PushI
	SetVariable(var_454_string, var_455_int); // 0x12c7 Func
	return 0; // 0x12c9 Return
}


func_2245(var_2_object, var_456_string)
{
	var_457_bool = 0; // 0x8c6 PushV
	func_4689(var_457_bool); // 0x8c7 NEW_2
	var_458_bool = var_457_bool == 0; // 0x8c9 Not
	if(var_458_bool == 0) goto Label_2252; // 0x8ca JumpB
	return 0; // 0x8cb Return
	
Label_2252:
	var_459_bool = var_456_string == var_2_object; // 0x8cc Eq
	if(var_459_bool == 0) goto Label_2255; // 0x8cd JumpB
	return 0; // 0x8ce Return
	
Label_2255:
	var_460_string = ""; var_461_bool = 0; // 0x8cf PushV
	var_460_string = var_456_string; // 0x8d0 Mov
	var_462_string = ""; // 0x8d1 PushS
	var_463_bool = var_456_string == var_462_string; // 0x8d2 Eq
	if(var_463_bool == 0) goto Label_2262; // 0x8d3 JumpB
	var_461_bool = 0; // 0x8d4 MovB
	goto Label_2263; // 0x8d5 Jump
	
Label_2263:
	func_4507(var_460_string, var_461_bool); // 0x8d7 NEW_2
	var_2_object = var_456_string; // 0x8d9 TMov
	return 0; // 0x8da Return
	
Label_2262:
	var_461_bool = 1; // 0x8d6 MovB
}


func_4550(var_96_cvector, var_97_cvector)
{
	var_99_float = 0; var_100_float = 0; // 0x11c6 PushV
	var_101_int = var_97_cvector | var_97_cvector; // 0x11c7 Or
	var_100_float = sqrt(var_101_int); // 0x11c8 Sqrt2
	var_102_float = 0.0; // 0x11c9 PushF
	var_103_bool = var_100_float < var_102_float; // 0x11ca LT
	if(var_103_bool == 0) goto Label_4558; // 0x11cb JumpB
	var_96_cvector = CVector(0.0, 0.0, 0.0); // 0x11cc MovV
	return 2; // 0x11cd Return
	
Label_4558:
	var_96_cvector = var_97_cvector / var_97_cvector; // 0x11ce Div2
	return 2; // 0x11cf Return
}


func_4040()
{
	var_839_float = 0; var_840_float = 0; // 0xfc8 PushV
	var_841_int = 8; // 0xfc9 PushI
	var_842_int = 16; // 0xfca PushI
	rand(var_840_float, var_841_int, var_842_int); // 0xfcb Func
	var_843_int = 10; // 0xfcd PushI
	SetTimer(var_843_int, var_840_float); // 0xfce Func
	return 2; // 0xfd0 Return
}


func_5321(var_656_bool)
{
	var_658_int = 0; var_659_string = ""; // 0x14ca PushV
	var_659_string = "d4q02JuliaGivesMedcine"; // 0x14cb MovS
	func_4560(var_658_int, var_659_string); // 0x14cc NEW_2
	var_660_int = 1; // 0x14ce PushI
	var_661_bool = var_658_int == var_660_int; // 0x14cf Eq
	if(var_661_bool == 0) goto Label_5331; // 0x14d0 JumpB
	var_656_bool = 1; // 0x14d1 MovB
	return 0; // 0x14d2 Return
	
Label_5331:
	var_656_bool = 0; // 0x14d3 MovB
	return 0; // 0x14d4 Return
}


func_4810()
{
	var_79_object = Obj(); var_80_string = ""; var_81_float = 0; // 0x12cb PushV
	var_82_object = Obj(); // 0x12cc PushV
	func_5474(var_82_object); // 0x12cd NEW_2
	var_79_object = var_82_object; // 0x12ce Mov
	var_80_string = "pt_map_georg"; // 0x12d0 MovS
	var_81_float = 2; // 0x12d1 MovI
	func_5491(var_79_object, var_80_string, var_81_float); // 0x12d2 NEW_2
	var_102_object = Obj(); // 0x12d4 PushV
	func_5474(var_102_object); // 0x12d5 NEW_2
	ShowMap(var_102_object); // 0x12d7 ObjFunc
	return 0; // 0x12d9 Return
}


func_3018(var_2_object, var_576_string)
{
	var_577_bool = 0; // 0xbcb PushV
	func_4689(var_577_bool); // 0xbcc NEW_2
	var_578_bool = var_577_bool == 0; // 0xbce Not
	if(var_578_bool == 0) goto Label_3025; // 0xbcf JumpB
	return 0; // 0xbd0 Return
	
Label_3025:
	var_579_bool = var_576_string == var_2_object; // 0xbd1 Eq
	if(var_579_bool == 0) goto Label_3028; // 0xbd2 JumpB
	return 0; // 0xbd3 Return
	
Label_3028:
	var_580_string = ""; var_581_bool = 0; // 0xbd4 PushV
	var_580_string = var_576_string; // 0xbd5 Mov
	var_582_string = ""; // 0xbd6 PushS
	var_583_bool = var_576_string == var_582_string; // 0xbd7 Eq
	if(var_583_bool == 0) goto Label_3035; // 0xbd8 JumpB
	var_581_bool = 0; // 0xbd9 MovB
	goto Label_3036; // 0xbda Jump
	
Label_3036:
	func_4507(var_580_string, var_581_bool); // 0xbdc NEW_2
	var_2_object = var_576_string; // 0xbde TMov
	return 0; // 0xbdf Return
	
Label_3035:
	var_581_bool = 1; // 0xbdb MovB
}


func_5069(var_344_bool)
{
	var_346_int = 0; var_347_string = ""; // 0x13ce PushV
	var_347_string = "d1q03"; // 0x13cf MovS
	func_4560(var_346_int, var_347_string); // 0x13d0 NEW_2
	var_348_int = 1000; // 0x13d2 PushI
	var_349_bool = var_346_int == var_348_int; // 0x13d3 Eq
	if(var_349_bool == 0) goto Label_5079; // 0x13d4 JumpB
	var_344_bool = 1; // 0x13d5 MovB
	return 0; // 0x13d6 Return
	
Label_5079:
	var_344_bool = 0; // 0x13d7 MovB
	return 0; // 0x13d8 Return
}


func_4560(var_229_int, var_230_string)
{
	var_231_int = 0; var_232_int = 0; // 0x11d0 PushV
	GetVariable(var_230_string, var_232_int); // 0x11d1 Func
	var_229_int = var_232_int; // 0x11d3 Mov
	return 2; // 0x11d4 Return
}


func_4049()
{
	var_838_int = 10; // 0xfd1 PushI
	KillTimer(var_838_int); // 0xfd2 Func
	return 0; // 0xfd4 Return
}


func_5333(var_732_bool)
{
	var_734_int = 0; var_735_string = ""; // 0x14d6 PushV
	var_735_string = "d6q01"; // 0x14d7 MovS
	func_4560(var_734_int, var_735_string); // 0x14d8 NEW_2
	var_736_int = 1; // 0x14da PushI
	var_737_bool = var_734_int == var_736_int; // 0x14db Eq
	if(var_737_bool == 0) goto Label_5343; // 0x14dc JumpB
	var_732_bool = 1; // 0x14dd MovB
	return 0; // 0x14de Return
	
Label_5343:
	var_732_bool = 0; // 0x14df MovB
	return 0; // 0x14e0 Return
}


func_4565(var_88_object, var_89_string)
{
	var_90_object = Obj(); var_91_object = Obj(); var_92_object = Obj(); var_93_object = Obj(); // 0x11d5 PushV
	GetMainOutdoorScene(var_92_object); // 0x11d6 Func
	var_94_string = ".bin"; // 0x11d8 PushS
	var_95_int = var_89_string + var_94_string; // 0x11d9 Add
	AddBlankActor(var_93_object, var_92_object, var_89_string, var_95_int); // 0x11da Func
	var_88_object = var_93_object; // 0x11dc Mov
	return 4; // 0x11dd Return
}


func_5081(var_355_bool)
{
	var_357_int = 0; var_358_string = ""; // 0x13da PushV
	var_358_string = "d1q03IsKapella"; // 0x13db MovS
	func_4560(var_357_int, var_358_string); // 0x13dc NEW_2
	var_359_int = 1; // 0x13de PushI
	var_360_bool = var_357_int == var_359_int; // 0x13df Eq
	if(var_360_bool == 0) goto Label_5091; // 0x13e0 JumpB
	var_355_bool = 1; // 0x13e1 MovB
	return 0; // 0x13e2 Return
	
Label_5091:
	var_355_bool = 0; // 0x13e3 MovB
	return 0; // 0x13e4 Return
}


func_4826()
{
	var_254_string = "ood1Eva7"; // 0x12db PushS
	var_255_int = 1; // 0x12dc PushI
	SetVariable(var_254_string, var_255_int); // 0x12dd Func
	return 0; // 0x12df Return
}


func_2009(var_0_object, var_411_int, var_412_object)
{
	var_414_object = Obj(); var_415_bool = 0; var_416_int = 0; var_417_bool = 0; var_418_object = Obj(); var_419_bool = 0; var_420_int = 0; var_421_bool = 0; // 0x7d9 PushV
	var_0_object = var_412_object; // 0x7da TMov
	var_422_bool = 0; var_423_object = Obj(); var_424_float = 0; // 0x7db PushV
	var_423_object = var_412_object; // 0x7dc Mov
	var_424_float = 70.0; // 0x7dd MovF
	func_4268(var_423_object, var_424_float); // 0x7de NEW_2
	var_425_bool = var_422_bool == 0; // 0x7e0 Not
	if(var_425_bool == 0) goto Label_2020; // 0x7e1 JumpB
	var_411_int = -2; // 0x7e2 MovI
	return 8; // 0x7e3 Return
	
Label_2020:
	CreateDialog(var_418_object); // 0x7e4 Func
	var_426_int = 0; // 0x7e6 PushV
	func_4683(var_426_int); // 0x7e7 NEW_2
	SetNPCName(var_426_int); // 0x7e9 ObjFunc
	var_427_int = 0; // 0x7eb PushV
	func_4681(var_427_int); // 0x7ec NEW_2
	SetNPCDescription(var_427_int); // 0x7ee ObjFunc
	var_428_string = ""; // 0x7f0 PushV
	func_4685(var_428_string); // 0x7f1 NEW_2
	SetPhoto(var_428_string); // 0x7f3 ObjFunc
	var_429_string = ""; // 0x7f5 PushV
	func_4687(var_429_string); // 0x7f6 NEW_2
	SetPhoto2(var_429_string); // 0x7f8 ObjFunc
	var_430_int = 0; // 0x7fa PushV
	func_5524(var_430_int); // 0x7fb NEW_2
	SetPlayerName(var_430_int); // 0x7fd ObjFunc
	var_420_int = -1; // 0x7ff MovI
	IsOverrideActive(var_419_bool); // 0x800 Func
	var_431_bool = var_419_bool; // 0x802 Push
	if(var_431_bool == 0) goto Label_2054; // 0x803 JumpB
	var_411_int = -2; // 0x804 MovI
	return 8; // 0x805 Return
	
Label_2054:
	DoDialog(var_418_object); // 0x806 Func
	var_432_bool = 0; var_433_object = Obj(); // 0x808 PushV
	var_434_object = Obj(); // 0x809 PushV
	func_4544(var_434_object); // 0x80a NEW_2
	var_433_object = var_434_object; // 0x80b Mov
	func_4353(var_432_bool, var_433_object); // 0x80d NEW_2
	var_435_object = Obj(); var_436_object = Obj(); // 0x80f PushV
	var_435_object = var_412_object; // 0x810 Mov
	var_436_object = var_418_object; // 0x811 Mov
	TaskCall(5); // 0x812 TaskCall
	func_2090(var_437_object, var_438_object, var_439_string, var_440_bool, var_435_object, var_436_object); // 0x813 NEW_2
	TaskReturn(); // 0x814 TaskReturn
	IsDialogEnd(var_421_bool); // 0x816 ObjFunc
	
Label_2072:
	var_541_bool = var_421_bool == 0; // 0x818 Not
	if(var_541_bool == 0) goto Label_2079; // 0x819 JumpB
	sync(); // 0x81a Func
	IsDialogEnd(var_421_bool); // 0x81c ObjFunc
	goto Label_2072; // 0x81e Jump
	
Label_2079:
	var_542_object = Obj(); // 0x81f PushV
	var_542_object = var_412_object; // 0x820 Mov
	func_4336(); // 0x821 NEW_2
	StopDialog(var_418_object); // 0x823 Func
	GetReturnValue(var_420_int); // 0x825 ObjFunc
	var_411_int = var_420_int; // 0x827 Mov
	return 8; // 0x828 Return
}


func_4832()
{
	var_45_string = "ood4Eva2"; // 0x12e1 PushS
	var_46_int = 1; // 0x12e2 PushI
	SetVariable(var_45_string, var_46_int); // 0x12e3 Func
	return 0; // 0x12e5 Return
}


func_5345(var_738_bool)
{
	var_740_int = 0; var_741_string = ""; // 0x14e2 PushV
	var_741_string = "ood6Eva1"; // 0x14e3 MovS
	func_4560(var_740_int, var_741_string); // 0x14e4 NEW_2
	var_742_int = 0; // 0x14e6 PushI
	var_743_bool = var_740_int == var_742_int; // 0x14e7 Eq
	if(var_743_bool == 0) goto Label_5355; // 0x14e8 JumpB
	var_738_bool = 1; // 0x14e9 MovB
	return 0; // 0x14ea Return
	
Label_5355:
	var_738_bool = 0; // 0x14eb MovB
	return 0; // 0x14ec Return
}


func_4576(var_39_string, var_40_bool)
{
	var_41_object = Obj(); var_42_object = Obj(); // 0x11e0 PushV
	FindActor(var_42_object, var_39_string); // 0x11e1 Func
	var_43_bool = var_42_object == 0; // 0x11e3 Not
	if(var_43_bool == 0) goto Label_4588; // 0x11e4 JumpB
	var_44_string = "Door "; // 0x11e5 PushS
	var_45_int = var_44_string + var_39_string; // 0x11e6 Add
	var_46_string = " not found"; // 0x11e7 PushS
	var_47_int = var_45_int + var_46_string; // 0x11e8 Add
	Trace(var_47_int); // 0x11e9 Func
	goto Label_4591; // 0x11eb Jump
	
Label_4591:
	return 2; // 0x11ef Return
	
Label_4588:
	var_48_string = "locked"; // 0x11ec PushS
	SetProperty(var_48_string, var_40_bool); // 0x11ed ObjFunc
}


func_740(var_2_object, var_245_string)
{
	var_246_bool = 0; // 0x2e5 PushV
	func_4689(var_246_bool); // 0x2e6 NEW_2
	var_247_bool = var_246_bool == 0; // 0x2e8 Not
	if(var_247_bool == 0) goto Label_747; // 0x2e9 JumpB
	return 0; // 0x2ea Return
	
Label_747:
	var_248_bool = var_245_string == var_2_object; // 0x2eb Eq
	if(var_248_bool == 0) goto Label_750; // 0x2ec JumpB
	return 0; // 0x2ed Return
	
Label_750:
	var_249_string = ""; var_250_bool = 0; // 0x2ee PushV
	var_249_string = var_245_string; // 0x2ef Mov
	var_251_string = ""; // 0x2f0 PushS
	var_252_bool = var_245_string == var_251_string; // 0x2f1 Eq
	if(var_252_bool == 0) goto Label_757; // 0x2f2 JumpB
	var_250_bool = 0; // 0x2f3 MovB
	goto Label_758; // 0x2f4 Jump
	
Label_758:
	func_4507(var_249_string, var_250_bool); // 0x2f6 NEW_2
	var_2_object = var_245_string; // 0x2f8 TMov
	return 0; // 0x2f9 Return
	
Label_757:
	var_250_bool = 1; // 0x2f5 MovB
}


func_5093(var_379_bool)
{
	var_381_int = 0; var_382_string = ""; // 0x13e6 PushV
	var_382_string = "d1q04"; // 0x13e7 MovS
	func_4560(var_381_int, var_382_string); // 0x13e8 NEW_2
	var_383_int = 1; // 0x13ea PushI
	var_384_bool = var_381_int == var_383_int; // 0x13eb Eq
	if(var_384_bool == 0) goto Label_5103; // 0x13ec JumpB
	var_379_bool = 1; // 0x13ed MovB
	return 0; // 0x13ee Return
	
Label_5103:
	var_379_bool = 0; // 0x13ef MovB
	return 0; // 0x13f0 Return
}


func_4838()
{
	var_309_string = "KnowUzly"; // 0x12e7 PushS
	var_310_int = 1; // 0x12e8 PushI
	SetVariable(var_309_string, var_310_int); // 0x12e9 Func
	return 0; // 0x12eb Return
}


func_487(var_0_object, var_1_object, var_2_object, var_3_string, var_219_object, var_220_object)
{
	var_0_object = var_220_object; // 0x1e8 TMov
	var_1_object = var_219_object; // 0x1e9 TMov
	var_3_string = 0; // 0x1ea TMovB
	var_225_int = 1; // 0x1eb PushI
	if(var_225_int == 0) goto Label_710; // 0x1ec JumpB
	var_226_bool = 0; // 0x1ed PushV
	var_226_bool = 0; // 0x1ee MovB
	var_227_bool = 0; var_228_object = Obj(); // 0x1ef PushV
	var_228_object = var_1_object; // 0x1f0 MovT
	func_5033(var_228_object); // 0x1f1 NEW_2
	if(var_227_bool == 0) goto Label_506; // 0x1f3 JumpB
	var_235_bool = 0; var_236_object = Obj(); // 0x1f4 PushV
	var_236_object = var_1_object; // 0x1f5 MovT
	func_5057(var_236_object); // 0x1f6 NEW_2
	if(var_235_bool == 0) goto Label_506; // 0x1f8 JumpB
	var_226_bool = 1; // 0x1f9 MovB
	
Label_506:
	if(var_226_bool == 0) goto Label_532; // 0x1fa JumpB
	var_241_object = Obj(); var_242_object = Obj(); // 0x1fb PushV
	var_241_object = var_1_object; // 0x1fc MovT
	var_242_object = var_0_object; // 0x1fd MovT
	func_4961(); // 0x1fe NEW_2
	var_245_string = ""; // 0x200 PushV
	var_245_string = "Fear"; // 0x201 MovS
	func_740(var_220_object, var_245_string); // 0x202 NEW_2
	var_262_int = 504496; // 0x204 PushI
	SetMessage(var_262_int); // 0x205 TObjFunc
	ClearReplies(); // 0x207 TObjFunc
	var_263_int = 504521; // 0x209 PushI
	var_264_int = 22246; // 0x20a PushI
	var_265_int = 4928; // 0x20b PushI
	AddReply(var_263_int, var_264_int, var_265_int); // 0x20c TObjFunc
	var_266_int = 521059; // 0x20e PushI
	var_267_int = 22246; // 0x20f PushI
	var_268_int = 22250; // 0x210 PushI
	AddReply(var_266_int, var_267_int, var_268_int); // 0x211 TObjFunc
	goto Label_710; // 0x213 Jump
	
Label_710:
	var_269_bool = 0; // 0x2c6 PushV
	func_4689(var_269_bool); // 0x2c7 NEW_2
	if(var_269_bool == 0) goto Label_725; // 0x2c9 JumpB
	
Label_714:
	lshWaitForAnimEnd(); // 0x2ca Func
	var_270_string = var_3_string; // 0x2cc PushT
	if(var_270_string == 0) goto Label_719; // 0x2cd JumpB
	goto Label_724; // 0x2ce Jump
	
Label_724:
	goto Label_739; // 0x2d4 Jump
	
Label_739:
	return 0; // 0x2e3 Return
	
Label_719:
	var_271_string = ""; // 0x2cf PushV
	var_271_string = var_2_object; // 0x2d0 MovT
	func_4491(var_271_string); // 0x2d1 NEW_2
	goto Label_714; // 0x2d3 Jump
	
Label_725:
	var_282_string = "all"; // 0x2d5 PushS
	var_283_string = "idle"; // 0x2d6 PushS
	PlayAnimation(var_282_string, var_283_string); // 0x2d7 Func
	
Label_729:
	WaitForAnimEnd(); // 0x2d9 Func
	var_284_string = var_3_string; // 0x2db PushT
	if(var_284_string == 0) goto Label_734; // 0x2dc JumpB
	goto Label_739; // 0x2dd Jump
	
Label_734:
	var_285_string = "all"; // 0x2de PushS
	var_286_string = "idle"; // 0x2df PushS
	PlayAnimation(var_285_string, var_286_string); // 0x2e0 Func
	goto Label_729; // 0x2e2 Jump
	
Label_532:
	var_287_bool = 0; // 0x214 PushV
	var_287_bool = 1; // 0x215 MovB
	var_288_bool = 0; // 0x216 PushV
	var_288_bool = 0; // 0x217 MovB
	var_289_bool = 0; // 0x218 PushV
	var_289_bool = 0; // 0x219 MovB
	var_290_bool = 0; var_291_object = Obj(); // 0x21a PushV
	var_291_object = var_1_object; // 0x21b MovT
	func_5369(var_291_object); // 0x21c NEW_2
	if(var_290_bool == 0) goto Label_549; // 0x21e JumpB
	var_296_bool = 0; var_297_object = Obj(); // 0x21f PushV
	var_297_object = var_1_object; // 0x220 MovT
	func_5141(var_297_object); // 0x221 NEW_2
	if(var_296_bool == 0) goto Label_549; // 0x223 JumpB
	var_289_bool = 1; // 0x224 MovB
	
Label_549:
	if(var_289_bool == 0) goto Label_556; // 0x225 JumpB
	var_302_bool = 0; var_303_object = Obj(); // 0x226 PushV
	var_303_object = var_1_object; // 0x227 MovT
	func_5057(var_303_object); // 0x228 NEW_2
	if(var_302_bool == 0) goto Label_556; // 0x22a JumpB
	var_288_bool = 1; // 0x22b MovB
	
Label_556:
	if(var_288_bool == 0) goto Label_581; // 0x22c JumpB
	var_304_bool = 0; // 0x22d PushV
	var_304_bool = 0; // 0x22e MovB
	var_305_bool = 0; // 0x22f PushV
	var_305_bool = 0; // 0x230 MovB
	var_306_bool = 0; var_307_object = Obj(); // 0x231 PushV
	var_307_object = var_1_object; // 0x232 MovT
	func_5369(var_307_object); // 0x233 NEW_2
	if(var_306_bool == 0) goto Label_572; // 0x235 JumpB
	var_308_bool = 0; var_309_object = Obj(); // 0x236 PushV
	var_309_object = var_1_object; // 0x237 MovT
	func_5105(var_309_object); // 0x238 NEW_2
	if(var_308_bool == 0) goto Label_572; // 0x23a JumpB
	var_305_bool = 1; // 0x23b MovB
	
Label_572:
	if(var_305_bool == 0) goto Label_579; // 0x23c JumpB
	var_314_bool = 0; var_315_object = Obj(); // 0x23d PushV
	var_315_object = var_1_object; // 0x23e MovT
	func_5057(var_315_object); // 0x23f NEW_2
	if(var_314_bool == 0) goto Label_579; // 0x241 JumpB
	var_304_bool = 1; // 0x242 MovB
	
Label_579:
	if(var_304_bool == 0) goto Label_581; // 0x243 JumpB
	var_287_bool = 0; // 0x244 MovB
	
Label_581:
	if(var_287_bool == 0) goto Label_607; // 0x245 JumpB
	var_316_object = Obj(); var_317_object = Obj(); // 0x246 PushV
	var_316_object = var_1_object; // 0x247 MovT
	var_317_object = var_0_object; // 0x248 MovT
	func_4691(); // 0x249 NEW_2
	var_320_string = ""; // 0x24b PushV
	var_320_string = "Neutral"; // 0x24c MovS
	func_740(var_220_object, var_320_string); // 0x24d NEW_2
	var_321_int = 532343; // 0x24f PushI
	SetMessage(var_321_int); // 0x250 TObjFunc
	ClearReplies(); // 0x252 TObjFunc
	var_322_int = 533604; // 0x254 PushI
	var_323_int = 35125; // 0x255 PushI
	var_324_int = 35124; // 0x256 PushI
	AddReply(var_322_int, var_323_int, var_324_int); // 0x257 TObjFunc
	var_325_int = 533608; // 0x259 PushI
	var_326_int = 35129; // 0x25a PushI
	var_327_int = 35128; // 0x25b PushI
	AddReply(var_325_int, var_326_int, var_327_int); // 0x25c TObjFunc
	goto Label_710; // 0x25e Jump
	
Label_607:
	var_328_string = ""; // 0x25f PushV
	var_328_string = "Neutral"; // 0x260 MovS
	func_740(var_220_object, var_328_string); // 0x261 NEW_2
	var_329_int = 521052; // 0x263 PushI
	SetMessage(var_329_int); // 0x264 TObjFunc
	ClearReplies(); // 0x266 TObjFunc
	var_330_bool = 0; // 0x268 PushV
	var_330_bool = 0; // 0x269 MovB
	var_331_bool = 0; // 0x26a PushV
	var_331_bool = 0; // 0x26b MovB
	var_332_bool = 0; var_333_object = Obj(); // 0x26c PushV
	var_333_object = var_1_object; // 0x26d MovT
	func_5117(var_333_object); // 0x26e NEW_2
	if(var_332_bool == 0) goto Label_631; // 0x270 JumpB
	var_338_bool = 0; var_339_object = Obj(); // 0x271 PushV
	var_339_object = var_1_object; // 0x272 MovT
	func_5177(var_339_object); // 0x273 NEW_2
	if(var_338_bool == 0) goto Label_631; // 0x275 JumpB
	var_331_bool = 1; // 0x276 MovB
	
Label_631:
	if(var_331_bool == 0) goto Label_638; // 0x277 JumpB
	var_344_bool = 0; var_345_object = Obj(); // 0x278 PushV
	var_345_object = var_1_object; // 0x279 MovT
	func_5069(var_345_object); // 0x27a NEW_2
	if(var_344_bool == 0) goto Label_638; // 0x27c JumpB
	var_330_bool = 1; // 0x27d MovB
	
Label_638:
	if(var_330_bool == 0) goto Label_644; // 0x27e JumpB
	var_350_int = 531940; // 0x27f PushI
	var_351_int = 33345; // 0x280 PushI
	var_352_int = 33344; // 0x281 PushI
	AddReply(var_350_int, var_351_int, var_352_int); // 0x282 TObjFunc
	
Label_644:
	var_353_bool = 0; // 0x284 PushV
	var_353_bool = 0; // 0x285 MovB
	var_354_bool = 0; // 0x286 PushV
	var_354_bool = 0; // 0x287 MovB
	var_355_bool = 0; var_356_object = Obj(); // 0x288 PushV
	var_356_object = var_1_object; // 0x289 MovT
	func_5081(var_356_object); // 0x28a NEW_2
	if(var_355_bool == 0) goto Label_659; // 0x28c JumpB
	var_361_bool = 0; var_362_object = Obj(); // 0x28d PushV
	var_362_object = var_1_object; // 0x28e MovT
	func_5129(var_362_object); // 0x28f NEW_2
	if(var_361_bool == 0) goto Label_659; // 0x291 JumpB
	var_354_bool = 1; // 0x292 MovB
	
Label_659:
	if(var_354_bool == 0) goto Label_666; // 0x293 JumpB
	var_367_bool = 0; var_368_object = Obj(); // 0x294 PushV
	var_368_object = var_1_object; // 0x295 MovT
	func_5069(var_368_object); // 0x296 NEW_2
	if(var_367_bool == 0) goto Label_666; // 0x298 JumpB
	var_353_bool = 1; // 0x299 MovB
	
Label_666:
	if(var_353_bool == 0) goto Label_672; // 0x29a JumpB
	var_369_int = 532458; // 0x29b PushI
	var_370_int = 33900; // 0x29c PushI
	var_371_int = 33899; // 0x29d PushI
	AddReply(var_369_int, var_370_int, var_371_int); // 0x29e TObjFunc
	
Label_672:
	var_372_bool = 0; // 0x2a0 PushV
	var_372_bool = 0; // 0x2a1 MovB
	var_373_bool = 0; var_374_object = Obj(); // 0x2a2 PushV
	var_374_object = var_1_object; // 0x2a3 MovT
	func_5153(var_374_object); // 0x2a4 NEW_2
	if(var_373_bool == 0) goto Label_685; // 0x2a6 JumpB
	var_379_bool = 0; var_380_object = Obj(); // 0x2a7 PushV
	var_380_object = var_1_object; // 0x2a8 MovT
	func_5093(var_380_object); // 0x2a9 NEW_2
	if(var_379_bool == 0) goto Label_685; // 0x2ab JumpB
	var_372_bool = 1; // 0x2ac MovB
	
Label_685:
	if(var_372_bool == 0) goto Label_691; // 0x2ad JumpB
	var_385_int = 533614; // 0x2ae PushI
	var_386_int = 35137; // 0x2af PushI
	var_387_int = 35136; // 0x2b0 PushI
	AddReply(var_385_int, var_386_int, var_387_int); // 0x2b1 TObjFunc
	
Label_691:
	var_388_bool = 0; var_389_object = Obj(); // 0x2b3 PushV
	var_389_object = var_1_object; // 0x2b4 MovT
	func_5045(var_389_object); // 0x2b5 NEW_2
	var_394_bool = var_388_bool == 0; // 0x2b7 Not
	if(var_394_bool == 0) goto Label_702; // 0x2b8 JumpB
	var_395_int = 521053; // 0x2b9 PushI
	var_396_int = -1; // 0x2ba PushI
	var_397_int = 22244; // 0x2bb PushI
	AddReply(var_395_int, var_396_int, var_397_int); // 0x2bc TObjFunc
	
Label_702:
	var_398_int = 521054; // 0x2be PushI
	var_399_int = -1; // 0x2bf PushI
	var_400_int = 22245; // 0x2c0 PushI
	AddReply(var_398_int, var_399_int, var_400_int); // 0x2c1 TObjFunc
	goto Label_710; // 0x2c3 Jump
}


func_4844()
{
	var_450_string = "ood2Eva1"; // 0x12ed PushS
	var_451_int = 1; // 0x12ee PushI
	SetVariable(var_450_string, var_451_int); // 0x12ef Func
	return 0; // 0x12f1 Return
}


func_5357(var_643_bool)
{
	var_645_int = 0; var_646_string = ""; // 0x14ee PushV
	var_646_string = "ood4Eva1"; // 0x14ef MovS
	func_4560(var_645_int, var_646_string); // 0x14f0 NEW_2
	var_647_int = 0; // 0x14f2 PushI
	var_648_bool = var_645_int == var_647_int; // 0x14f3 Eq
	if(var_648_bool == 0) goto Label_5367; // 0x14f4 JumpB
	var_643_bool = 1; // 0x14f5 MovB
	return 0; // 0x14f6 Return
	
Label_5367:
	var_643_bool = 0; // 0x14f7 MovB
	return 0; // 0x14f8 Return
}


func_4336()
{
	var_403_bool = 0; var_404_bool = 0; // 0x10f0 PushV
	CameraSwitchToNormal(); // 0x10f1 Func
	var_405_bool = 0; // 0x10f3 PushV
	func_4689(var_405_bool); // 0x10f4 NEW_2
	if(var_405_bool == 0) goto Label_4344; // 0x10f6 JumpB
	goto Label_4352; // 0x10f7 Jump
	
Label_4352:
	return 2; // 0x1100 Return
	
Label_4344:
	var_406_string = "head"; // 0x10f8 PushS
	HasAnimationTrack(var_404_bool, var_406_string); // 0x10f9 Func
	var_407_bool = var_404_bool; // 0x10fb Push
	if(var_407_bool == 0) goto Label_4352; // 0x10fc JumpB
	var_408_string = "head"; // 0x10fd PushS
	UnlookAsync(var_408_string); // 0x10fe Func
}


func_5105(var_308_bool)
{
	var_310_int = 0; var_311_string = ""; // 0x13f2 PushV
	var_311_string = "d1q01"; // 0x13f3 MovS
	func_4560(var_310_int, var_311_string); // 0x13f4 NEW_2
	var_312_int = 5; // 0x13f6 PushI
	var_313_bool = var_310_int == var_312_int; // 0x13f7 Eq
	if(var_313_bool == 0) goto Label_5115; // 0x13f8 JumpB
	var_308_bool = 1; // 0x13f9 MovB
	return 0; // 0x13fa Return
	
Label_5115:
	var_308_bool = 0; // 0x13fb MovB
	return 0; // 0x13fc Return
}


func_4850()
{
	var_132_string = "ood2Eva2"; // 0x12f3 PushS
	var_133_int = 1; // 0x12f4 PushI
	SetVariable(var_132_string, var_133_int); // 0x12f5 Func
	return 0; // 0x12f7 Return
}


func_4593(var_229_int, var_230_int)
{
	var_231_object = Obj(); var_232_object = Obj(); // 0x11f1 PushV
	CreateIntVector(var_232_object); // 0x11f2 Func
	add(var_229_int); // 0x11f4 ObjFunc
	add(var_230_int); // 0x11f6 ObjFunc
	var_233_int = 3; // 0x11f8 PushI
	SendWorldWndMessage(var_233_int, var_232_object); // 0x11f9 Func
	return 2; // 0x11fb Return
}


func_4856()
{
	var_159_string = "ood2Eva3"; // 0x12f9 PushS
	var_160_int = 1; // 0x12fa PushI
	SetVariable(var_159_string, var_160_int); // 0x12fb Func
	return 0; // 0x12fd Return
}


func_5369(var_290_bool)
{
	var_292_int = 0; var_293_string = ""; // 0x14fa PushV
	var_293_string = "ood1EvaIntro3"; // 0x14fb MovS
	func_4560(var_292_int, var_293_string); // 0x14fc NEW_2
	var_294_int = 0; // 0x14fe PushI
	var_295_bool = var_292_int == var_294_int; // 0x14ff Eq
	if(var_295_bool == 0) goto Label_5379; // 0x1500 JumpB
	var_290_bool = 1; // 0x1501 MovB
	return 0; // 0x1502 Return
	
Label_5379:
	var_290_bool = 0; // 0x1503 MovB
	return 0; // 0x1504 Return
}


func_5117(var_332_bool)
{
	var_334_int = 0; var_335_string = ""; // 0x13fe PushV
	var_335_string = "d1q01"; // 0x13ff MovS
	func_4560(var_334_int, var_335_string); // 0x1400 NEW_2
	var_336_int = 6; // 0x1402 PushI
	var_337_bool = var_334_int == var_336_int; // 0x1403 Eq
	if(var_337_bool == 0) goto Label_5127; // 0x1404 JumpB
	var_332_bool = 1; // 0x1405 MovB
	return 0; // 0x1406 Return
	
Label_5127:
	var_332_bool = 0; // 0x1407 MovB
	return 0; // 0x1408 Return
}


func_4862()
{
	var_165_string = "ood2Eva4"; // 0x12ff PushS
	var_166_int = 1; // 0x1300 PushI
	SetVariable(var_165_string, var_166_int); // 0x1301 Func
	return 0; // 0x1303 Return
}


